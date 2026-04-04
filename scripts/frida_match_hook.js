/**
 * frida_match_hook.js — Runtime instrumentation of Vainglory match protocol.
 *
 * Hooks the E.V.I.L. engine at multiple levels to capture:
 *   1. Raw TCP data to/from the game server (pre/post encryption)
 *   2. Internal analytics events (UseAbility, Kill, LevelUp, etc.)
 *   3. Entity state snapshots (positions, health, team, type)
 *   4. The XOR encrypt/decrypt path to find the second encoding layer
 *
 * Deploy:
 *   Option A — frida-server on VM:
 *     scp frida-server-ios-arm64 root@192.168.64.7:/usr/local/bin/
 *     ssh root@192.168.64.7 "frida-server -D &"
 *     frida -H 192.168.64.7 -n GameKindred -l frida_match_hook.js
 *
 *   Option B — frida-gadget injected into IPA:
 *     Copy FridaGadget.dylib + FridaGadget.config into .app/
 *     Add LC_LOAD_DYLIB via insert_dylib
 *     Re-sign + install
 *     Connect: frida -H 192.168.64.7 -n Gadget -l frida_match_hook.js
 *
 * Output: JSON lines to console (pipe to file with `frida ... | tee match_hook.jsonl`)
 */

"use strict";

// ═══════════════════════════════════════════════════════════════════
// Configuration
// ═══════════════════════════════════════════════════════════════════

const CONFIG = {
    // Log raw TCP packets (verbose — disable for perf)
    logRawTCP: true,
    // Log analytics events (UseAbility, Kill, etc.)
    logAnalytics: true,
    // Poll entity positions periodically
    pollEntities: true,
    pollIntervalMs: 200,
    // Max bytes to log per packet
    maxPacketDump: 256,
    // Game server port range (from update RPC)
    gamePortMin: 7000,
    gamePortMax: 7200,
};

// ═══════════════════════════════════════════════════════════════════
// Binary offsets (Vainglory 4.13.4 arm64)
// All offsets relative to module base (ASLR slide applied at runtime)
// ═══════════════════════════════════════════════════════════════════

const OFF = {
    // E.V.I.L. engine network module
    readRaw:          0x004e2550, // void readRaw(socketObj, buf, len, errOut)
    writeRaw:         0x004e2594, // void writeRaw(socketObj, buf, len, errOut)
    connectAsync:     0x004e264c, // connectAsync(socketObj, host, port, ...)
    bufferedWrite:    0x004ec770, // bufferedWrite(connObj, data, len, errOut)
    readIncoming:     0x004ec8bc, // readIncoming(connObj)
    dispatchEvents:   0x004ec5cc, // dispatchEvents(connObj, eventMask)
    connConnect:      0x004ec13c, // high-level connect(connObj, host, port, ...)
    socketClose:      0x004e2508, // closeSocket(socketObj)

    // Network thread
    netThread:        0x00148ab0, // main network thread loop

    // Analytics logger
    analyticsLog:     0x004d21e0, // log(severity, file, line, ctx, name, fmt, ...)

    // Game event formatters (KindredAnalytics.cpp)
    useAbility:       0x0034599c,
    killEvent:        0x00345bc4,
    levelEvent:       0x00345e3c,
    talentEvent:      0x00345eec,
    goldEvent:        0x00345fa0,
    deathEvent:       0x00346130,

    // Entity system
    // Entity struct offsets
    ent_pos_x:        0x250,
    ent_pos_y:        0x258, // actually 600 decimal = 0x258
    ent_pos_z_off:    0x254,
    ent_pos_z_gnd:    0x2ec,
    ent_type_id:      0x268,
    ent_team:         0x264,
    ent_flags:        0x2f4,

    // Stat label function (200 cases)
    statLabel:        0x000eff84,
};

// ═══════════════════════════════════════════════════════════════════
// Globals
// ═══════════════════════════════════════════════════════════════════

let base = null;
let gameServerFd = -1;
let xorKey = null;
let matchActive = false;
let packetCounter = { sent: 0, recv: 0 };
let entityRoots = [];

function emit(type, data) {
    const entry = {
        ts: Date.now(),
        type: type,
        ...data
    };
    console.log(JSON.stringify(entry));
}

function hexdump(ptr, len) {
    const maxLen = Math.min(len, CONFIG.maxPacketDump);
    const bytes = [];
    for (let i = 0; i < maxLen; i++) {
        bytes.push(('0' + ptr.add(i).readU8().toString(16)).slice(-2));
    }
    return bytes.join('');
}

function readBuf(ptr, len) {
    return ptr.readByteArray(Math.min(len, CONFIG.maxPacketDump));
}

// ═══════════════════════════════════════════════════════════════════
// Layer 1: System-level TCP hooks
// ═══════════════════════════════════════════════════════════════════

function hookSystemIO() {
    // Hook connect() to detect game server connections
    const connectPtr = Module.findExportByName(null, "connect");
    if (connectPtr) {
        Interceptor.attach(connectPtr, {
            onEnter(args) {
                this.fd = args[0].toInt32();
                this.addrPtr = args[1];
                this.addrLen = args[2].toInt32();

                // Parse sockaddr_in
                if (this.addrLen >= 16) {
                    const family = this.addrPtr.readU8(); // sa_len
                    const af = this.addrPtr.add(1).readU8(); // sa_family
                    if (af === 2) { // AF_INET
                        const port = (this.addrPtr.add(2).readU8() << 8) |
                                      this.addrPtr.add(3).readU8();
                        const ip = [
                            this.addrPtr.add(4).readU8(),
                            this.addrPtr.add(5).readU8(),
                            this.addrPtr.add(6).readU8(),
                            this.addrPtr.add(7).readU8()
                        ].join('.');
                        this.port = port;
                        this.ip = ip;

                        if (port >= CONFIG.gamePortMin && port <= CONFIG.gamePortMax) {
                            emit("connect", {
                                fd: this.fd, ip: ip, port: port,
                                note: "GAME SERVER CONNECTION"
                            });
                            gameServerFd = this.fd;
                            matchActive = true;
                            packetCounter = { sent: 0, recv: 0 };
                        }
                    }
                }
            },
            onLeave(retval) {
                if (this.fd === gameServerFd && retval.toInt32() === 0) {
                    emit("connected", { fd: this.fd, ip: this.ip, port: this.port });
                }
            }
        });
    }

    // Hook read() and write() for raw TCP capture
    if (CONFIG.logRawTCP) {
        const writePtr = Module.findExportByName(null, "write");
        if (writePtr) {
            Interceptor.attach(writePtr, {
                onEnter(args) {
                    this.fd = args[0].toInt32();
                    this.buf = args[1];
                    this.len = args[2].toInt32();
                },
                onLeave(retval) {
                    if (this.fd === gameServerFd && this.len > 0) {
                        packetCounter.sent++;
                        const hex = hexdump(this.buf, this.len);
                        emit("tcp_send", {
                            fd: this.fd,
                            len: this.len,
                            seq: packetCounter.sent,
                            hex: hex
                        });

                        // Detect AUTH_TOKEN (2nd C->S message, 74 bytes)
                        // Extract XOR key from bytes 42-49
                        if (packetCounter.sent === 2 && this.len >= 50) {
                            const keyBytes = [];
                            for (let i = 42; i < 50; i++) {
                                keyBytes.push(this.buf.add(i).readU8());
                            }
                            xorKey = keyBytes;
                            emit("xor_key_extracted", {
                                key: keyBytes.map(b => ('0' + b.toString(16)).slice(-2)).join(''),
                                source: "AUTH_TOKEN bytes 42-49"
                            });
                        }
                    }
                }
            });
        }

        const readPtr = Module.findExportByName(null, "read");
        if (readPtr) {
            Interceptor.attach(readPtr, {
                onEnter(args) {
                    this.fd = args[0].toInt32();
                    this.buf = args[1];
                    this.maxLen = args[2].toInt32();
                },
                onLeave(retval) {
                    const bytesRead = retval.toInt32();
                    if (this.fd === gameServerFd && bytesRead > 0) {
                        packetCounter.recv++;
                        const hex = hexdump(this.buf, bytesRead);
                        emit("tcp_recv", {
                            fd: this.fd,
                            len: bytesRead,
                            seq: packetCounter.recv,
                            hex: hex
                        });
                    }
                }
            });
        }
    }

    // Hook close() to detect game server disconnect
    const closePtr = Module.findExportByName(null, "close");
    if (closePtr) {
        Interceptor.attach(closePtr, {
            onEnter(args) {
                const fd = args[0].toInt32();
                if (fd === gameServerFd) {
                    emit("disconnect", { fd: fd });
                    gameServerFd = -1;
                    matchActive = false;
                }
            }
        });
    }
}

// ═══════════════════════════════════════════════════════════════════
// Layer 2: Engine network hooks
// ═══════════════════════════════════════════════════════════════════

function hookEngineNetwork() {
    // Hook connectAsync to see host/port before DNS resolution
    Interceptor.attach(base.add(OFF.connectAsync), {
        onEnter(args) {
            // args: socketObj, host_ptr_or_addrinfo, port, timeout_sec, timeout_usec
            this.socketObj = args[0];
            // The host might be passed differently — log the raw args
            emit("engine_connect", {
                socketObj: this.socketObj.toString(),
                arg1: args[1].toString(),
                arg2: args[2].toInt32(),
                arg3: args[3] ? args[3].toInt32() : 0,
            });
        }
    });

    // Hook readRaw — this is AFTER system read, data is in buffer
    Interceptor.attach(base.add(OFF.readRaw), {
        onEnter(args) {
            this.socketObj = args[0];
            this.buf = args[1];
            this.len = args[2].toInt32();
            this.errOut = args[3];
        },
        onLeave(retval) {
            // retval might be bytes read or error code
            const fd = this.socketObj.readS32(); // fd at offset 0
            if (fd === gameServerFd && this.len > 0) {
                emit("engine_read", {
                    len: this.len,
                    hex: hexdump(this.buf, this.len),
                    retval: retval.toInt32()
                });
            }
        }
    });

    // Hook writeRaw — this is BEFORE system write
    Interceptor.attach(base.add(OFF.writeRaw), {
        onEnter(args) {
            this.socketObj = args[0];
            this.buf = args[1];
            this.len = args[2].toInt32();
            const fd = this.socketObj.readS32();
            if (fd === gameServerFd && this.len > 0) {
                emit("engine_write", {
                    len: this.len,
                    hex: hexdump(this.buf, this.len)
                });
            }
        }
    });

    // Hook bufferedWrite — higher level, sees application data
    Interceptor.attach(base.add(OFF.bufferedWrite), {
        onEnter(args) {
            this.connObj = args[0];
            this.data = args[1];
            this.len = args[2].toInt32();
            if (matchActive && this.len > 0) {
                emit("engine_buffered_write", {
                    len: this.len,
                    hex: hexdump(this.data, this.len)
                });
            }
        }
    });

    // Hook dispatchEvents — this is where received data gets routed
    Interceptor.attach(base.add(OFF.dispatchEvents), {
        onEnter(args) {
            this.connObj = args[0];
            this.eventMask = args[1].toInt32();
            if (matchActive) {
                emit("engine_dispatch", {
                    connObj: this.connObj.toString(),
                    eventMask: this.eventMask,
                    eventMaskBin: this.eventMask.toString(2)
                });
            }
        }
    });
}

// ═══════════════════════════════════════════════════════════════════
// Layer 3: Analytics event hooks (THE GOLD — parsed game events)
// ═══════════════════════════════════════════════════════════════════

function hookAnalytics() {
    // Hook the central analytics logger: FUN_1004d21e0
    // Signature: log(severity, sourceFile, lineNum, context, eventName, formatStr, ...)
    // This captures ALL game events that the engine logs internally.
    Interceptor.attach(base.add(OFF.analyticsLog), {
        onEnter(args) {
            const severity = args[0].toInt32();
            // args[1] = source file path (C string)
            // args[2] = line number
            // args[3] = context pointer
            // args[4] = event name (C string)
            // args[5] = format string (C string)

            let sourceFile = "";
            let eventName = "";
            let formatStr = "";

            try { sourceFile = args[1].readUtf8String(); } catch(e) {}
            try { eventName = args[4].readUtf8String(); } catch(e) {}
            try { formatStr = args[5].readUtf8String(); } catch(e) {}

            // Only log game-relevant events
            if (!sourceFile.includes("Kindred") && !sourceFile.includes("kindred") &&
                severity < 2) {
                return;
            }

            emit("analytics", {
                severity: severity,
                source: sourceFile.split('/').pop(), // just filename
                line: args[2].toInt32(),
                event: eventName,
                format: formatStr
            });

            // For KindredAnalytics events, parse the variadic args
            // The format string tells us what args follow
            if (formatStr.includes('"Team"')) {
                // It's a game event with Team/Actor/Position format
                // Extract the actual formatted string by reading the args
                // The args after format are the variadic parameters
                try {
                    this._gameEvent = true;
                    this._eventName = eventName;

                    // For UseAbility format:
                    // { "Team": "%s", "Actor": "%s", "Ability": "%s",
                    //   "Position": [ %.2f, %.2f, %.2f ],
                    //   "TargetActor": "%s", "TargetPosition": [ %.2f, %.2f, %.2f ] }
                    // Variadic args start at args[6]
                    // %s args are pointers, %d are ints, %.2f are doubles (on arm64)

                    // On ARM64, first 8 args in x0-x7, rest on stack
                    // args[0]-args[5] use x0-x5
                    // variadic args start at args[6] = x6, args[7] = x7, then stack

                    // This is complex with variadic on ARM64.
                    // Instead, let's hook the specific event functions which have
                    // named parameters.
                } catch(e) {}
            }
        }
    });

    // Hook specific game event functions for clean parameter extraction

    // UseAbility — FUN_10034599c
    // Params: (entity, slotIndex, targetEntity, targetPos, ?, ?, teamStr, abilityStr)
    Interceptor.attach(base.add(OFF.useAbility), {
        onEnter(args) {
            const entity = args[0];
            const slotIdx = args[1].toInt32();

            let posX = 0, posY = 0, posZ = 0;
            let team = 0;
            try {
                posX = entity.add(OFF.ent_pos_x).readFloat();
                posY = entity.add(OFF.ent_pos_y).readFloat();
                posZ = entity.add(OFF.ent_pos_z_off).readFloat() +
                       entity.add(OFF.ent_pos_z_gnd).readFloat();
                team = entity.add(OFF.ent_team).readU8();
            } catch(e) {}

            emit("game_ability", {
                entity: entity.toString(),
                slot: slotIdx,
                pos: [posX, posY, posZ],
                team: team
            });
        }
    });

    // Kill event — FUN_100345bc4
    Interceptor.attach(base.add(OFF.killEvent), {
        onEnter(args) {
            const killer = args[0];
            let kx = 0, ky = 0, kTeam = 0;
            try {
                kx = killer.add(OFF.ent_pos_x).readFloat();
                ky = killer.add(OFF.ent_pos_y).readFloat();
                kTeam = killer.add(OFF.ent_team).readU8();
            } catch(e) {}

            emit("game_kill", {
                killer: killer.toString(),
                killerPos: [kx, ky],
                killerTeam: kTeam,
                arg1: args[1].toInt32(),
            });
        }
    });

    // Level up — FUN_100345e3c
    Interceptor.attach(base.add(OFF.levelEvent), {
        onEnter(args) {
            const entity = args[0];
            let posX = 0, posY = 0, team = 0;
            try {
                posX = entity.add(OFF.ent_pos_x).readFloat();
                posY = entity.add(OFF.ent_pos_y).readFloat();
                team = entity.add(OFF.ent_team).readU8();
            } catch(e) {}

            emit("game_level", {
                entity: entity.toString(),
                pos: [posX, posY],
                team: team,
            });
        }
    });
}

// ═══════════════════════════════════════════════════════════════════
// Layer 4: Entity state polling
// ═══════════════════════════════════════════════════════════════════

function hookEntityPolling() {
    // Strategy: Hook the UseAbility function to discover entity pointers,
    // then read their state periodically.

    const knownEntities = new Map(); // address -> last seen data

    // Intercept any function that receives an entity pointer
    // The analytics functions give us entity pointers
    Interceptor.attach(base.add(OFF.useAbility), {
        onEnter(args) {
            const entPtr = args[0];
            if (!entPtr.isNull()) {
                knownEntities.set(entPtr.toString(), entPtr);
            }
            // Target entity
            const targetPtr = args[2];
            if (targetPtr && !targetPtr.isNull()) {
                knownEntities.set(targetPtr.toString(), targetPtr);
            }
        }
    });

    // Also hook the kill event for entity discovery
    Interceptor.attach(base.add(OFF.killEvent), {
        onEnter(args) {
            const entPtr = args[0];
            if (!entPtr.isNull()) {
                knownEntities.set(entPtr.toString(), entPtr);
            }
        }
    });

    // Periodic entity state dump
    if (CONFIG.pollEntities) {
        setInterval(() => {
            if (!matchActive || knownEntities.size === 0) return;

            const entities = [];
            for (const [addr, ptr] of knownEntities) {
                try {
                    const posX = ptr.add(OFF.ent_pos_x).readFloat();
                    const posY = ptr.add(OFF.ent_pos_y).readFloat();
                    const posZOff = ptr.add(OFF.ent_pos_z_off).readFloat();
                    const posZGnd = ptr.add(OFF.ent_pos_z_gnd).readFloat();
                    const team = ptr.add(OFF.ent_team).readU8();
                    const typeId = ptr.add(OFF.ent_type_id).readU32();
                    const flags = ptr.add(OFF.ent_flags).readU8();

                    // Read a wider range around the entity for discovery
                    // Dump bytes at interesting offsets
                    let health = 0, maxHealth = 0, mana = 0;
                    // Common MOBA offsets for health (speculative, refine at runtime)
                    try {
                        // These offsets need to be discovered — try a range
                        health = ptr.add(0x2a0).readFloat();
                        maxHealth = ptr.add(0x2a4).readFloat();
                        mana = ptr.add(0x2a8).readFloat();
                    } catch(e) {}

                    entities.push({
                        addr: addr,
                        pos: [
                            Math.round(posX * 100) / 100,
                            Math.round(posY * 100) / 100,
                            Math.round((posZOff + posZGnd) * 100) / 100
                        ],
                        team: team,
                        typeId: typeId,
                        flags: flags,
                        health: Math.round(health * 10) / 10,
                        maxHealth: Math.round(maxHealth * 10) / 10,
                    });
                } catch(e) {
                    // Entity might have been freed
                    knownEntities.delete(addr);
                }
            }

            if (entities.length > 0) {
                emit("entity_poll", { count: entities.length, entities: entities });
            }
        }, CONFIG.pollIntervalMs);
    }
}

// ═══════════════════════════════════════════════════════════════════
// Layer 5: XOR encryption path tracing
// ═══════════════════════════════════════════════════════════════════

function hookXORPath() {
    // Hook the engine's read function and compare data BEFORE and AFTER
    // to find where decryption happens in the call chain.

    // We know data enters via readRaw (0x4e2550) which calls _read()
    // and exits into the vtable dispatch (0x4ec5cc).
    // Between these two, the XOR decryption must happen.

    // Hook readIncoming which processes received data
    Interceptor.attach(base.add(OFF.readIncoming), {
        onEnter(args) {
            this.connObj = args[0];
            if (!matchActive) return;

            // Read fd from connection object to check if it's the game server
            try {
                // The connection object has a socket sub-object
                // Socket fd is at the beginning
                const socketPtr = this.connObj.readPointer();
                if (!socketPtr.isNull()) {
                    this.fd = socketPtr.readS32();
                }
            } catch(e) {}
        },
        onLeave(retval) {
            if (this.fd === gameServerFd) {
                emit("engine_read_incoming", {
                    connObj: this.connObj.toString(),
                    retval: retval.toInt32()
                });
            }
        }
    });

    // Scan the code region around the network module for XOR patterns
    // at startup (one-time analysis)
    try {
        const scanStart = base.add(0x004e0000);
        const scanEnd = base.add(0x004f0000);
        const scanSize = 0x10000;

        // Search for EOR instruction patterns in ARM64
        // EOR Xd, Xn, Xm = 0xCA000000 | (Rm << 16) | (Rn << 5) | Rd
        // The mask for EOR is: top 8 bits = 0xCA (register XOR)
        // For byte XOR: EOR Wd, Wn, Wm = 0x4A000000

        const results = Memory.scanSync(scanStart, scanSize, "4a ?? ?? ??");
        const eorCount = results.length;

        // Also scan for the AND #7 pattern (mod 8 for key index)
        const and7Results = Memory.scanSync(scanStart, scanSize, "12 00 1c ??"); // AND Wd, Wn, #7

        emit("xor_scan", {
            region: "0x4e0000-0x4f0000",
            eor_instructions: eorCount,
            and7_instructions: and7Results.length,
            eor_addrs: results.slice(0, 20).map(r => r.address.sub(base).toString(16)),
            and7_addrs: and7Results.map(r => r.address.sub(base).toString(16))
        });
    } catch(e) {
        emit("xor_scan_error", { error: e.message });
    }
}

// ═══════════════════════════════════════════════════════════════════
// Layer 6: Memory region dump (for discovering entity struct layout)
// ═══════════════════════════════════════════════════════════════════

function setupEntityDiscovery() {
    // When we first see an entity via analytics hooks, dump a wide range
    // of its memory to discover health, mana, level, gold offsets.

    const dumpedEntities = new Set();

    Interceptor.attach(base.add(OFF.useAbility), {
        onEnter(args) {
            const entPtr = args[0];
            const key = entPtr.toString();
            if (dumpedEntities.has(key)) return;
            dumpedEntities.add(key);

            try {
                // Dump entity memory from offset 0 to 0x400 (1024 bytes)
                // looking for recognizable patterns
                const dump = {};

                // Read floats at every 4-byte offset in [0x200, 0x350]
                // This covers positions, health, stats
                for (let off = 0x200; off < 0x350; off += 4) {
                    const fval = entPtr.add(off).readFloat();
                    // Only log values that look like game state
                    // Positions: -200 to 200
                    // Health/mana: 0 to 10000
                    // Stats: 0 to 1000
                    if (fval !== 0 && isFinite(fval) && Math.abs(fval) < 100000) {
                        dump["0x" + off.toString(16)] = Math.round(fval * 100) / 100;
                    }
                }

                // Read ints at every 4-byte offset in [0x260, 0x300]
                for (let off = 0x260; off < 0x300; off += 4) {
                    const ival = entPtr.add(off).readS32();
                    if (ival !== 0 && Math.abs(ival) < 100000) {
                        dump["0x" + off.toString(16) + "_i"] = ival;
                    }
                }

                // Read the entity name via type ID lookup
                const typeId = entPtr.add(OFF.ent_type_id).readU32();

                emit("entity_discovery", {
                    addr: key,
                    typeId: typeId,
                    team: entPtr.add(OFF.ent_team).readU8(),
                    pos_x: entPtr.add(OFF.ent_pos_x).readFloat(),
                    pos_y: entPtr.add(OFF.ent_pos_y).readFloat(),
                    fields: dump
                });
            } catch(e) {
                emit("entity_discovery_error", { addr: key, error: e.message });
            }
        }
    });
}

// ═══════════════════════════════════════════════════════════════════
// Initialization
// ═══════════════════════════════════════════════════════════════════

function main() {
    // Find the main binary module
    const mod = Process.findModuleByName("GameKindred");
    if (!mod) {
        // Try alternate names
        const mods = Process.enumerateModules();
        for (const m of mods) {
            if (m.name.includes("GameKindred") || m.name.includes("Kindred")) {
                base = m.base;
                emit("init", { module: m.name, base: base.toString(), size: m.size });
                break;
            }
        }
        if (!base) {
            emit("error", { msg: "GameKindred module not found" });
            // List all modules for debugging
            const names = Process.enumerateModules().map(m => m.name);
            emit("modules", { list: names.slice(0, 30) });
            return;
        }
    } else {
        base = mod.base;
        emit("init", { module: mod.name, base: base.toString(), size: mod.size });
    }

    emit("hooks_starting", {
        logRawTCP: CONFIG.logRawTCP,
        logAnalytics: CONFIG.logAnalytics,
        pollEntities: CONFIG.pollEntities
    });

    // Install hooks in order
    hookSystemIO();
    emit("hooks_installed", { layer: "system_io" });

    hookEngineNetwork();
    emit("hooks_installed", { layer: "engine_network" });

    if (CONFIG.logAnalytics) {
        hookAnalytics();
        emit("hooks_installed", { layer: "analytics" });
    }

    hookEntityPolling();
    emit("hooks_installed", { layer: "entity_polling" });

    hookXORPath();
    emit("hooks_installed", { layer: "xor_path" });

    hookBlowfishKey();
    emit("hooks_installed", { layer: "blowfish_key" });

    setupEntityDiscovery();
    emit("hooks_installed", { layer: "entity_discovery" });

    emit("ready", {
        msg: "All hooks installed. Start a match to capture data.",
        game_port_range: [CONFIG.gamePortMin, CONFIG.gamePortMax]
    });
}

// Run
main();
