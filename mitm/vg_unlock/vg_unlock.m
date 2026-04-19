/*
 * vg_unlock v5 — runtime patches for Vainglory CE.
 *
 * Layer 1: Replace constants parser fptrs → force feature flags on
 * Layer 2: Hook nav bar refresh → force leaderboard button visible
 * Layer 3: Hook PEOPLE panel refresh → force friends/social panel visible
 * Layer 4: Hook profile refresh → force trophy section visible
 * Layer 5: Replace avatar tap handler → open full profile panel
 * Layer 6: Sidebar tab activation → force all panel tabs active + visible
 * Layer 7: Patch session manager vtable → disable guest gate globally
 * Layer 8: CE gate caller hooks — undo gate effects on progression UI
 * Layer 10: Post-match — preserve session flag so notifyGameResults fires
 */

#import <Foundation/Foundation.h>
#include <mach-o/dyld.h>
#include <mach/mach.h>
#include <stdint.h>
#include <string.h>

#define LOG(fmt, ...) NSLog(@"[vg_unlock] " fmt, ##__VA_ARGS__)

static uintptr_t g_base = 0;

/* ========== Layer 1: Constants parser replacements ========== */

static void features_always_on(void *output, void *json_dict) {
    uint8_t *s = (uint8_t *)output;
    s[0x08] = 1;  /* leaderboards */
    s[0x09] = 1;  /* leaderboardsAlwaysQueryOfflineFriends */
    s[0x0a] = 1;  /* liveEvents */
    s[0x0b] = 0;  /* hideBattlepassCallout */
    s[0x0c] = 1;  /* inGameChat */
    LOG(@"[flags] featuresEnabled: all on");
}

static void free_tab_always_visible(void *output, void *json_dict) {
    uint8_t *s = (uint8_t *)output;
    s[0x08] = 1;  s[0x09] = 1;  s[0x0a] = 1;  s[0x0b] = 1;  s[0x0c] = 1;
    LOG(@"[flags] freeTabVisibility: all on");
}

static void golden_arrow_on(void *output, void *json_dict) {
    ((uint8_t *)output)[0x08] = 1;
}

static void tutorial_popup_on(void *output, void *json_dict) {
    ((uint8_t *)output)[0x08] = 1;
}

/* ========== Layer 2: Nav bar refresh hook ========== */

/*
 * The original refresh function (VA 0x1002a8f20) does:
 *   1. Hide leaderboard button: [this+0xf8]->flags &= ~0x4
 *   2. Loop over buttons at [this+0xe8..this+0x108], set sizes
 *   3. Loop over buttons at [this+0xf0..this+0x108], layout visible ones
 *
 * We call the original, then re-enable the leaderboard button.
 *
 * Button visibility: bit 2 of uint32 at [button+0x84]
 *   bit 2 = 1 → visible
 *   bit 2 = 0 → hidden
 *
 * Nav bar object layout:
 *   +0xe8: tiv button
 *   +0xf0: news button
 *   +0xf8: leaderboards button  ← the one that's hidden
 *   +0x100: academy button
 *   +0x108: settings button
 */

typedef void (*refresh_fn)(void *self);
static refresh_fn orig_refresh = NULL;

static void hook_refresh(void *self) {
    /* Call the original — it hides leaderboards and layouts other buttons */
    orig_refresh(self);

    /* Re-enable the leaderboard button */
    void *lb_button = *(void **)((uint8_t *)self + 0xf8);
    if (lb_button) {
        uint32_t *flags = (uint32_t *)((uint8_t *)lb_button + 0x84);
        uint32_t old = *flags;
        *flags = old | 0x4;  /* set bit 2 → visible */
        if (!(old & 0x4)) {
            LOG(@"[leaderboard] refresh: button SHOWN (flags 0x%x -> 0x%x)", old, *flags);
        }
    }

    /* ── Layer 6: Register missing sidebar panels ──
     *
     * The main menu constructor FUN_1001fd570 creates panels and registers them
     * with the sidebar controller via FUN_1001fc9c4(sidebarCtrl, panelSubObj, index).
     *
     * In the CE, FUN_100131560 (hardcoded "return 1") gates:
     *   - Index 2: ACADEMY panel (never created)
     *   - Index 4: small social panel (created at menuObj+0xf0 but NOT registered)
     *
     * Only HOME (index 0) and HEROES_BAG (index 1) are registered.
     *
     * Fix: after menu init, find the small social panel at menuObj+0xf0
     * and call FUN_1001fc9c4 to register it at index 4.
     *
     * Object graph:
     *   DAT_101dc2920           = root/parent object
     *   *(parent + 0x80)        = menu object (stored as param_1[0x10])
     *   menuObj + 0x70          = sidebar controller
     *   *(menuObj + 0xf0)       = small social panel (created by thunk_FUN_10020cfb8)
     *   *(menuObj + 0xf0) + 0x10 = social panel subobject (passed to FUN_1001fc9c4)
     */
    /* ── Layer 9b: Force ranked data into key-value store ──
     *
     * The profile card reads skill tier from a key-value store via
     * FUN_10012c8f0("new5v5RankedDataEloBucket", 0). This store is only
     * written when prev ELO != new ELO (season transition), which never
     * happens in CE since the data starts at defaults.
     *
     * FUN_10012c5b0(key, value) writes an int to the store.
     * Skill tier 29 = Vainglorious Gold (tier = 29/3+1 = 10, sub = 29%3 = 2).
     */
    static int ranked_kv_done = 0;
    if (!ranked_kv_done) {
        ranked_kv_done = 1;
        typedef void (*kv_write_fn)(const char *, int);
        kv_write_fn kv_write = (kv_write_fn)(g_base + 0x12c5b0);

        kv_write("new5v5RankedDataEloBucket", 29);
        kv_write("prev5v5RankedDataEloBucket", 29);
        kv_write("new5v5RankedDatamEloBucket", 29);
        kv_write("prev5v5RankedDatamEloEarned", 3000);
        kv_write("new5v5RankedDatamEloEarned", 3000);

        kv_write("new3v3RankedDataEloBucket", 29);
        kv_write("prev3v3RankedDataEloBucket", 29);
        kv_write("new3v3RankedDatamEloBucket", 29);
        kv_write("prev3v3RankedDatamEloEarned", 3000);
        kv_write("new3v3RankedDatamEloEarned", 3000);

        LOG(@"[ranked-kv] wrote skill tier 29 (Vainglorious Gold) to key-value store");
    }

    static int sidebar_fix_done = 0;
    if (!sidebar_fix_done) {
        void *parent = *(void **)(g_base + 0x1dc2920);
        if (parent) {
            void *menuObj = *(void **)((uint8_t *)parent + 0x80);
            if (menuObj) {
                sidebar_fix_done = 1;
                void *sidebarCtrl = (uint8_t *)menuObj + 0x70;
                void *socialPanel = *(void **)((uint8_t *)menuObj + 0xf0);
                void *socialPanelD0 = *(void **)((uint8_t *)menuObj + 0xd0);

                typedef void (*register_panel_fn)(void *, void *, int);
                register_panel_fn reg = (register_panel_fn)(g_base + 0x1fc9c4);

                LOG(@"[sidebar] parent=%p menuObj=%p sidebarCtrl=%p", parent, menuObj, sidebarCtrl);
                LOG(@"[sidebar] socialPanel(+0xf0)=%p socialRef(+0xd0)=%p",
                    socialPanel, socialPanelD0);

                /* ── Register SOCIAL panel at index 4 ── */
                if (socialPanel && !socialPanelD0) {
                    void *subObj = (void *)((uint8_t *)socialPanel + 0x10);
                    *(void **)((uint8_t *)menuObj + 0xd0) = subObj;
                    LOG(@"[sidebar] registering SOCIAL panel at index 4: subObj=%p", subObj);
                    reg(sidebarCtrl, subObj, 4);
                    LOG(@"[sidebar] SOCIAL registered!");
                } else if (socialPanelD0) {
                    LOG(@"[sidebar] social panel already registered (d0=%p)", socialPanelD0);
                } else {
                    LOG(@"[sidebar] WARNING: no social panel at menuObj+0xf0!");
                }

                /* ── Create and register ACADEMY panel (index 2) ──
                 *
                 * ACADEMY was never created because FUN_100131560 returns 1.
                 * Original code: operator_new(0x9ca0) → thunk_FUN_100242e6c(mem)
                 * Then register: FUN_1001fc9c4(sidebarCtrl, academy+0x2c88, 2)
                 *
                 * The constructor does NOT call FUN_100131560 internally,
                 * so it should be safe to call in the CE.
                 */
                void *academyPanel = *(void **)((uint8_t *)menuObj + 0x100);
                if (!academyPanel) {
                    /* Allocate and construct the academy panel */
                    typedef void *(*operator_new_fn)(unsigned long);
                    operator_new_fn game_new = (operator_new_fn)(g_base + 0x1148d8c);
                    void *mem = game_new(0x9ca0);
                    if (mem) {
                        typedef void *(*academy_ctor_fn)(void *);
                        academy_ctor_fn ctor = (academy_ctor_fn)(g_base + 0x242e6c);
                        LOG(@"[sidebar] creating ACADEMY panel: mem=%p size=0x9ca0", mem);
                        void *academy = ctor(mem);
                        *(void **)((uint8_t *)menuObj + 0x100) = academy;

                        /* Register with sidebar at index 2 */
                        void *academySubObj = (void *)((uint8_t *)academy + 0x2c88);
                        *(void **)((uint8_t *)menuObj + 0xc0) = academySubObj;
                        LOG(@"[sidebar] registering ACADEMY at index 2: subObj=%p", academySubObj);
                        reg(sidebarCtrl, academySubObj, 2);
                        LOG(@"[sidebar] ACADEMY registered!");
                    } else {
                        LOG(@"[sidebar] WARNING: operator_new failed for ACADEMY!");
                    }
                } else {
                    LOG(@"[sidebar] ACADEMY already exists at %p", academyPanel);
                }

                /* ── Register PARTY panel at index 3 ──
                 *
                 * The MARKET panel (always created at menuObj+0xe8, size 0x2cf68)
                 * contains a PARTY sub-object at offset +0x2c50.
                 * Its vtable provides icon "main_nav_party" and label "MAIN_MENU_PARTY".
                 * The constructor never registers it at sidebar index 3 in CE mode.
                 */
                void *marketPanel = *(void **)((uint8_t *)menuObj + 0xe8);
                void *existingParty = *(void **)((uint8_t *)menuObj + 0xc8);
                if (marketPanel && !existingParty) {
                    void *partySubObj = (void *)((uint8_t *)marketPanel + 0x2c50);
                    *(void **)((uint8_t *)menuObj + 0xc8) = partySubObj;
                    LOG(@"[sidebar] registering PARTY panel at index 3: subObj=%p", partySubObj);
                    reg(sidebarCtrl, partySubObj, 3);
                    LOG(@"[sidebar] PARTY registered!");
                } else if (existingParty) {
                    LOG(@"[sidebar] PARTY already registered (c8=%p)", existingParty);
                } else {
                    LOG(@"[sidebar] WARNING: no market panel at menuObj+0xe8!");
                }

                /* ── Create TROPHIES tab in BAG panel (CE-gated) ──
                 *
                 * The BAG constructor FUN_1001f59e8 creates 6 tabs always,
                 * then 4 more when FUN_100131560 returns 0 (full game).
                 * We create just the TROPHIES tab (season trophies) and register it.
                 *
                 * Vtable layout at subObj (tab+0x28):
                 *   vt[2](self) = content object getter (returns inner object ptr)
                 *   vt[3](self) = section name getter
                 *   vt[4](self) = title getter (calls FUN_1004e0150)
                 *
                 * CRITICAL: vtable functions need `self` (subObj) as first arg!
                 */
                void *bagWrapper = *(void **)((uint8_t *)menuObj + 0x108);
                if (bagWrapper) {
                    void *bagContainer = *(void **)((uint8_t *)bagWrapper + 0x8);
                    typedef void *(*tab_ctor_fn)(void *);
                    typedef void (*array_add_fn)(void *, void **);
                    typedef void *(*operator_new_fn2)(unsigned long);
                    typedef void (*tab_reg_fn)(void *, void *, void *, void *, void *);
                    typedef void *(*vt_method)(void *self);

                    operator_new_fn2 bag_new = (operator_new_fn2)(g_base + 0x1148d8c);
                    array_add_fn arr_add = (array_add_fn)(g_base + 0x1f5d50);
                    tab_reg_fn tab_reg = (tab_reg_fn)(g_base + 0x2afb68);
                    void *tabArray = (void *)((uint8_t *)bagWrapper + 0x48);

                    /* Create TROPHIES tab: operator_new(0x50) → FUN_10021844c */
                    void *mem = bag_new(0x50);
                    if (mem) {
                        tab_ctor_fn ctor = (tab_ctor_fn)(g_base + 0x21844c);
                        void *tab = ctor(mem);
                        void *subObj = (void *)((uint8_t *)tab + 0x28);
                        arr_add(tabArray, &subObj);

                        void **vt = *(void ***)subObj;
                        void *icon    = ((vt_method)vt[2])(subObj);
                        void *title   = ((vt_method)vt[4])(subObj);
                        void *section = ((vt_method)vt[3])(subObj);

                        LOG(@"[bag-tabs] TROPHIES: subObj=%p icon=%p title=%p section=%p",
                            subObj, icon, title, section);
                        tab_reg(bagContainer, title, 0, icon, section);
                        LOG(@"[bag-tabs] TROPHIES tab registered!");
                    }
                }

                /* Dump registered sidebar tabs for diagnostics */
                void *home    = *(void **)((uint8_t *)menuObj + 0xb0);
                void *bag     = *(void **)((uint8_t *)menuObj + 0xb8);
                void *academyRef = *(void **)((uint8_t *)menuObj + 0xc0);
                void *partyRef   = *(void **)((uint8_t *)menuObj + 0xc8);
                LOG(@"[sidebar] registered: home(b0)=%p bag(b8)=%p academy(c0)=%p party(c8)=%p social(d0)=%p",
                    home, bag, academyRef, partyRef, *(void **)((uint8_t *)menuObj + 0xd0));
            }
        }
    }
}

/* ========== Layer 3: Hook setTabVisible to force PEOPLE tab visible ========== */

/*
 * setTabVisible at VA 0x1001e6c4c (fptr at base+0x1469fb8)
 * Signature: void setTabVisible(void *tab_panel, int visible)
 * Sets bit 2 of [tab_panel + 0x2c2c] to show/hide the tab's sidebar button.
 *
 * All 7 sidebar tabs start visible (set by the init loop at 0x1001e5084).
 * Later code calls setTabVisible(people_tab, 0) to hide the PEOPLE tab.
 * We hook it to block any hide calls and log which tabs are affected.
 */

typedef void (*set_tab_visible_fn)(void *tab_panel, int visible);
static set_tab_visible_fn orig_set_tab_visible = NULL;

static void hook_set_tab_visible(void *tab_panel, int visible) {
    /* Log ALL calls with vtable info so we can identify which panel is which */
    void **vtable = tab_panel ? *(void ***)tab_panel : NULL;
    uintptr_t vt_off = vtable ? ((uintptr_t)vtable - g_base) : 0;
    LOG(@"[sidebar] setTabVisible(%p, %d) vtable_off=0x%lx",
        tab_panel, visible, (unsigned long)vt_off);

    if (!visible) {
        LOG(@"[sidebar] BLOCKED hide on %p, forcing visible", tab_panel);
        orig_set_tab_visible(tab_panel, 1);
    } else {
        orig_set_tab_visible(tab_panel, visible);
    }
}

/* Forward declaration for Layer 9 (defined after Layer 8) */
static void ensure_trophy_data(long profile_obj);

/* ========== Layer 4: Trophy sub-panel visibility ========== */

/*
 * SAME PATTERN AS LEADERBOARD (Layer 2).
 *
 * The trophy sub-panel constructor/refresh (FUN_100260244, thunk at 0x100260494,
 * fptr at base+0x147b868) unconditionally hides both trophy scroll panels:
 *
 *   0x100260460: ldr w8, [x19, #0x6a4]    ; load trophy panel 1 flags
 *   0x100260464: and w8, w8, #0xfffffffb   ; clear bit 2 → HIDE
 *   0x100260468: str w8, [x19, #0x6a4]
 *   0x10026046c: ldr w8, [x19, #0xc94]    ; load trophy panel 2 flags
 *   0x100260470: and w8, w8, #0xfffffffb   ; clear bit 2 → HIDE
 *   0x100260474: str w8, [x19, #0xc94]
 *
 * Fix: call original, then re-set both visibility bits.
 *
 * Additionally force the trophy enable flag at +0x18f21 on the PARENT
 * profile widget. The parent is found by walking up from the sub-panel.
 */

typedef void (*trophy_panel_fn)(void *self);
static trophy_panel_fn orig_trophy_panel = NULL;

static void hook_trophy_panel(void *self) {
    orig_trophy_panel(self);

    /* Re-show trophy scroll panels */
    uint32_t *flags1 = (uint32_t *)((uint8_t *)self + 0x6a4);
    uint32_t *flags2 = (uint32_t *)((uint8_t *)self + 0xc94);
    uint32_t old1 = *flags1, old2 = *flags2;
    *flags1 |= 0x4;
    *flags2 |= 0x4;

    if (!(old1 & 0x4) || !(old2 & 0x4)) {
        LOG(@"[trophy] panel: SHOWN panels (0x6a4: 0x%x->0x%x, 0xc94: 0x%x->0x%x)",
            old1, *flags1, old2, *flags2);
    }
}

/* Profile data handler hook — forces trophy enable flag */
typedef void (*profile_data_fn)(long self, long data);
static profile_data_fn orig_profile_data = NULL;

static void hook_profile_data(long self, long data) {
    orig_profile_data(self, data);

    uint8_t old20 = *(uint8_t *)(self + 0x18f20);
    uint8_t old21 = *(uint8_t *)(self + 0x18f21);
    *(uint8_t *)(self + 0x18f20) = 1;
    *(uint8_t *)(self + 0x18f21) = 1;

    /* Layer 9: populate trophy array if empty */
    ensure_trophy_data(self);

    uint32_t trophy_count = *(uint32_t *)(self + 0x18ef8);
    LOG(@"[trophy] profile data: +0x18f20: %d->1, +0x18f21: %d->1, trophy_count=%u, self=%p",
        old20, old21, trophy_count, (void *)self);
}

/* Layout refresh hook — forces flag before layout */
typedef void (*profile_layout_fn)(long self);
static profile_layout_fn orig_profile_layout = NULL;

static void hook_profile_layout(long self) {
    *(uint8_t *)(self + 0x18f21) = 1;
    /* Layer 9: ensure trophy data before layout renders */
    ensure_trophy_data(self);
    orig_profile_layout(self);
    LOG(@"[trophy] profile layout: self=%p, +0x18f21=1, trophy_count=%u",
        (void *)self, *(uint32_t *)(self + 0x18ef8));
}

/* ========== Layer 5: Redirect ALL profile openers → FULL profile panel ========== */

/*
 * Three __DATA fptrs can open the simplified profile card:
 *   0x146b2d0 → FUN_1001eeb60 (creates 0x4458-byte popup via FUN_100220a38)
 *   0x146cf98 → FUN_1001f505c (has guest gate, calls FUN_100220d08 or FUN_100221f98)
 *   0x146e788 → FUN_1001fa7b0 (always creates simplified popup)
 *
 * The avatar tap uses an unknown code path — we hook ALL three to catch it.
 * Each is redirected to FUN_100221f98 (full 0x28848-byte profile panel).
 */

static void open_full_profile(const char *tag) {
    LOG(@"[profile] %s intercepted! opening full profile", tag);

    void *session_mgr = *(void **)(g_base + 0x1e94738);
    void *data_mgr    = *(void **)(g_base + 0x1e3cf00);
    LOG(@"[profile] session_mgr=%p data_mgr=%p", session_mgr, data_mgr);

    typedef void (*full_profile_fn)(const char *);
    full_profile_fn open_full = (full_profile_fn)(g_base + 0x221f98);
    open_full("homepanel_profile_avatar");

    if (data_mgr) {
        uint8_t *dirty = (uint8_t *)((uintptr_t)data_mgr + 0x29);
        LOG(@"[profile] dirty_flag=%d, forcing to 1", *dirty);
        *dirty = 1;
    }
}

/* Hook for FUN_1001eeb60 at 0x146b2d0 */
static void hook_profile_eeb60(void *p1, float p2, long p3) {
    open_full_profile("FUN_1001eeb60@0x146b2d0");
}

/* Hook for FUN_1001f505c at 0x146cf98 */
static void hook_profile_f505c(void) {
    open_full_profile("FUN_1001f505c@0x146cf98");
}

/* Hook for FUN_1001fa7b0 at 0x146e788 */
static void hook_profile_fa7b0(long self) {
    open_full_profile("FUN_1001fa7b0@0x146e788");
}

/* ========== Layer 7: Guest gate bypass ========== */

/*
 * The session manager vtable[12] at __DATA+0x149e4a0 is FUN_1004fe5ec:
 *   - Checks registered account string at self+0x2bd0
 *   - Returns 0 if empty (guest), 1 if non-empty (has account)
 *
 * This propagates through:
 *   FUN_1004ef1b4() returns vtable[12]() → FUN_1004ef20c() = result ^ 1
 *   → FUN_10014e20c() returns 1 if guest, 0 if account
 *
 * By returning 1 here, FUN_10014e20c() returns 0 (NOT guest) everywhere:
 *   - FUN_1001f3b40: opens full profile (FUN_100221f98) instead of simplified card
 *   - FUN_10025d954: stores isGuest=0, doesn't early-return, runs full UI refresh
 *   - Layer 4 trophy hooks finally fire (full profile panel is now opened)
 */
static uint stub_has_account(void *self, void *out_str) {
    return 1;
}

/* ========== Layer 8: Bypass CE gate in hookable callers of FUN_100131560 ========== */

/*
 * FUN_100131560 ("return 1") is the CE master gate with 116 callers.
 * We cannot patch it directly (__TEXT is read-only).
 * Instead, we hook the 11 callers that have __DATA fptrs and undo the
 * gate's effect: call original, then re-enable what the gate disabled.
 *
 * Pattern: gate sets `*(uint*)(obj + offset) &= ~4` when gate=1.
 * Fix: after original runs, set `*(uint*)(obj + offset) |= 4`.
 */

/* --- FUN_100222878: Profile panel ranked tabs (fptr g_base+0x14752f8) --- */
typedef void (*profile_ranked_fn)(void *self);
static profile_ranked_fn orig_profile_ranked = NULL;
static void hook_profile_ranked(void *self) {
    orig_profile_ranked(self);
    /* Force ranked tab visibility: 5v5, 3v3, stats */
    *(uint32_t *)((uint8_t *)self + 0x2853c) |= 0x4;
    *(uint32_t *)((uint8_t *)self + 0x2866c) |= 0x4;
    *(uint32_t *)((uint8_t *)self + 0x2879c) |= 0x4;

    /* Force ranked data display flag — +0x2cea8 controls whether ranked
     * section renders. Set to 1 so the profile overview shows ranked data.
     * Also set +0x2ceab (has progression data) and +0x2ceb0/b1/b2 (mode flags). */
    *(uint8_t *)((uint8_t *)self + 0x2cea8) = 1;
    *(uint8_t *)((uint8_t *)self + 0x2ceab) = 1;

    /* Force the ranked mode count from the data source offset */
    if (*(uint32_t *)((uint8_t *)self + 0x2ce98) == 0) {
        *(uint32_t *)((uint8_t *)self + 0x2ce98) = *(uint32_t *)((uint8_t *)self + 0x2cde0);
        if (*(uint32_t *)((uint8_t *)self + 0x2ce98) == 0) {
            *(uint32_t *)((uint8_t *)self + 0x2ce98) = 3; /* 3 ranked modes */
        }
    }

    static int log_once = 0;
    if (!log_once) { log_once = 1; LOG(@"[ce-gate] profile ranked tabs + display flags SHOWN"); }
}

/* --- FUN_1002da05c and FUN_1002e76d8: DISABLED (SIMD s0 clobber) --- */

/* --- FUN_10025d954: Profile body display (fptr g_base+0x147af60) ---
 * Gates visibility of profile body elements:
 *   +0x20b04: season/trophy element (bit 2)
 *   +0x216d4: another profile element (bit 2)
 *   +0x20a80: enable flag via FUN_100530068
 * Also checks FUN_10014e20c (guest) and FUN_10052b840 (online status).
 * We also call FUN_100227fb8(self+0x1d0, 1) which the gate skips for guests.
 */
typedef void (*profile_body_fn)(void *self, void *data);
static profile_body_fn orig_profile_body = NULL;
static void hook_profile_body(void *self, void *data) {
    orig_profile_body(self, data);

    /* Force profile body elements visible */
    *(uint32_t *)((uint8_t *)self + 0x20b04) |= 0x4;
    *(uint32_t *)((uint8_t *)self + 0x216d4) |= 0x4;
    /* Clear the guest flag that blocks profile body setup */
    *(uint8_t *)((uint8_t *)self + 0x25f50) = 0;

    /* Call the profile body setup that gate skips */
    typedef void (*body_setup_fn)(void *, int);
    body_setup_fn setup = (body_setup_fn)(g_base + 0x227fb8);
    setup((void *)((uint8_t *)self + 0x1d0), 1);

    /* Re-enable the level shield widget.
     * The CE gate calls FUN_100530068(self+0x20a80, 0) which sets the widget
     * to disabled state 3 via FUN_10052fe74. This hides the filled shield,
     * level number inside it, and the XP progress bar (all children of the widget).
     * Calling with param_2=1 transitions state 3 → 0 (enabled). */
    typedef void (*widget_enable_fn)(void *, int);
    widget_enable_fn enable_shield = (widget_enable_fn)(g_base + 0x530068);
    enable_shield((void *)((uint8_t *)self + 0x20a80), 1);

    /* ── Re-show 8 profile card elements hidden by CE gate ──
     *
     * The card sub-object (FUN_100255b9c) lives at self+0x8AC0.
     * Its constructor hides 8 elements via `& 0xfffffffb` when CE gate=1:
     *   +0x684  ICE amount display
     *   +0x7b4  ICE icon
     *   +0xc8c  Glory amount display
     *   +0xdbc  Glory icon
     *   +0x153c Opals / currency 3
     *   +0x166c Opals icon
     *   +0x1c9c Karma display
     *   +0x1e7c Karma bonus label
     * Plus 2 account level shields gated separately:
     *   +0x2ac4 Level shield blur 1
     *   +0x2bb4 Level shield blur 2
     * Plus XP bar container backgrounds:
     *   +0x4a3c black_background (XP bar bg)
     *   +0x4b2c white_background (XP bar overlay)
     */
    uint8_t *card = (uint8_t *)self + 0x8AC0;
    *(uint32_t *)(card + 0x684)  |= 0x4;  /* ICE display */
    *(uint32_t *)(card + 0x7b4)  |= 0x4;  /* ICE icon */
    *(uint32_t *)(card + 0xc8c)  |= 0x4;  /* Glory display */
    *(uint32_t *)(card + 0xdbc)  |= 0x4;  /* Glory icon */
    *(uint32_t *)(card + 0x153c) |= 0x4;  /* Opals display */
    *(uint32_t *)(card + 0x166c) |= 0x4;  /* Opals icon */
    *(uint32_t *)(card + 0x1c9c) |= 0x4;  /* Karma display */
    *(uint32_t *)(card + 0x1e7c) |= 0x4;  /* Karma bonus label */
    *(uint32_t *)(card + 0x2ac4) |= 0x4;  /* Level shield blur 1 */
    *(uint32_t *)(card + 0x2bb4) |= 0x4;  /* Level shield blur 2 */
    *(uint32_t *)(card + 0x4a3c) |= 0x4;  /* XP bar black background */
    *(uint32_t *)(card + 0x4b2c) |= 0x4;  /* XP bar white background */

    /* Force XP data if level exists but XP ceiling is 0 (prevents NaN in bar) */
    typedef void *(*get_data_mgr_fn)(void);
    get_data_mgr_fn get_dm = (get_data_mgr_fn)(g_base + 0x15d3ec);
    void *dm = get_dm();
    if (dm) {
        uint32_t level = *(uint32_t *)((uint8_t *)dm + 0x55d0);
        int xp_ceil = *(int *)((uint8_t *)dm + 0x55dc);
        if (level > 0 && xp_ceil == 0) {
            *(int *)((uint8_t *)dm + 0x55d4) = 5000;   /* currentXP */
            *(int *)((uint8_t *)dm + 0x55d8) = 0;       /* XP floor */
            *(int *)((uint8_t *)dm + 0x55dc) = 10000;   /* XP ceiling */
            LOG(@"[ce-gate] injected XP data: level=%u xp=5000/10000", level);
        }
    }

    static int log_once = 0;
    if (!log_once) {
        log_once = 1;
        void *dm2 = get_dm();
        LOG(@"[ce-gate] profile card SHOWN (card=%p dm=%p level=%u xp=%d/%d-%d)",
            card, dm2,
            dm2 ? *(uint32_t *)((uint8_t *)dm2 + 0x55d0) : 0,
            dm2 ? *(int *)((uint8_t *)dm2 + 0x55d4) : 0,
            dm2 ? *(int *)((uint8_t *)dm2 + 0x55d8) : 0,
            dm2 ? *(int *)((uint8_t *)dm2 + 0x55dc) : 0);
    }
}

/* --- FUN_10025d3f0: Profile data loader (fptr g_base+0x147af38) ---
 * Called when opening profile. Gates:
 *   +0x21a1c: visibility bit (conditional on FUN_100131228)
 *   +0x20b04: cleared when platform is offline
 */
typedef void (*profile_loader_fn)(void *self, int show);
static profile_loader_fn orig_profile_loader = NULL;
static void hook_profile_loader(void *self, int show) {
    orig_profile_loader(self, show);
    if (show) {
        /* Ensure the create-account button area is hidden (we're not guest) */
        *(uint32_t *)((uint8_t *)self + 0x21a1c) &= ~0x4;
        /* Ensure profile sections stay visible */
        *(uint32_t *)((uint8_t *)self + 0x20b04) |= 0x4;
    }
    static int log_once = 0;
    if (!log_once) { log_once = 1; LOG(@"[ce-gate] profile loader fixup done"); }
}

/* --- FUN_10023bd9c: Season/trophy panel handler (fptr g_base+0x1477d38) ---
 * This is the season rewards display. It calls FUN_1001e6c4c (setTabVisible),
 * registers season trophy tooltips, and handles guild/team trophy display.
 * We just call original and let it run — our setTabVisible hook (Layer 3)
 * already blocks any hide calls.
 */
typedef void (*season_handler_fn)(void *self, int param2);
static season_handler_fn orig_season_handler = NULL;
static void hook_season_handler(void *self, int param2) {
    orig_season_handler(self, param2);
    static int log_once = 0;
    if (!log_once) { log_once = 1; LOG(@"[ce-gate] season handler fired (param2=%d)", param2); }
}

/* --- FUN_10023df24: Season display update (fptr g_base+0x1477d48) --- */
typedef void (*season_update_fn)(void *self, int param2);
static season_update_fn orig_season_update = NULL;
static void hook_season_update(void *self, int param2) {
    orig_season_update(self, param2);
    static int log_once = 0;
    if (!log_once) { log_once = 1; LOG(@"[ce-gate] season update fired (param2=%d)", param2); }
}

/* --- FUN_10020a500: Social panel feature (fptr g_base+0x1471108) --- */
typedef void (*social_feat_fn)(void *self);
static social_feat_fn orig_social_feat = NULL;
static void hook_social_feat(void *self) {
    /* Original returns early when gate=1. We call the inner function directly. */
    typedef void (*inner_fn)(void *);
    inner_fn do_work = (inner_fn)(g_base + 0x209ff0);
    do_work(self);
}

/* --- FUN_10025129c: Skill tier display (fptr g_base+0x147a1d8) --- */
typedef void (*skill_tier_fn)(void *self);
static skill_tier_fn orig_skill_tier = NULL;
static void hook_skill_tier(void *self) {
    orig_skill_tier(self);
    /* The original checks gate + platform. If it returns early, the skill tier
       icon/text is never set. We call the setter manually. */
}

/* --- FUN_100168220: Data fetch/sync (fptr g_base+0x145c170) --- */
typedef void (*data_fetch_fn)(void *self, void *data);
static data_fetch_fn orig_data_fetch = NULL;
static void hook_data_fetch(void *self, void *data) {
    orig_data_fetch(self, data);
    /* Force the additional data fetch that gate blocks.
     * Guard: check that the object at +0x278 is non-NULL before calling,
     * as the fetch can reach spectate/replay paths that crash on NULL. */
    void *fetch_target = *(void **)((uint8_t *)self + 0x278);
    if (fetch_target) {
        typedef void (*fetch_fn)(void *);
        fetch_fn do_fetch = (fetch_fn)(g_base + 0x169cec);
        do_fetch((void *)((uint8_t *)self + 0x278));
        static int log_once = 0;
        if (!log_once) { log_once = 1; LOG(@"[ce-gate] extra data fetch at +0x278 ENABLED (target=%p)", fetch_target); }
    } else {
        static int log_once = 0;
        if (!log_once) { log_once = 1; LOG(@"[ce-gate] extra data fetch at +0x278 SKIPPED — target is NULL"); }
    }
}

/* --- FUN_1001e115c: Tab system init (fptr g_base+0x1469478) --- */
typedef void (*tab_init_fn)(void *self, void *data);
static tab_init_fn orig_tab_init = NULL;
static void hook_tab_init(void *self, void *data) {
    orig_tab_init(self, data);
    /* Original sets empty string when gate=1; we don't need to undo that
       but we log for diagnostics */
    static int log_once = 0;
    if (!log_once) { log_once = 1; LOG(@"[ce-gate] tab init hook fired"); }
}

/* --- FUN_10024e4a4: Market panel tabs (fptr g_base+0x147a120) --- */
typedef void (*market_tabs_fn)(void *self);
static market_tabs_fn orig_market_tabs = NULL;
static void hook_market_tabs(void *self) {
    orig_market_tabs(self);
    /* Gate blocks additional market tab at offset +0x2cf20+0x10 and filter at +0xda10.
       The tab count logic is complex; just log for now. */
    static int log_once = 0;
    if (!log_once) { log_once = 1; LOG(@"[ce-gate] market tabs hook fired"); }
}

/* ========== Layer 10: Post-match session flag preservation ========== */

/*
 * FUN_1004fd37c: endSession RPC sender (fptr g_base+0x149e760)
 *
 * ROOT CAUSE of missing spoils screen:
 *   1. Match ends → endSession fires
 *   2. endSession clears *(param_1 + 0x2b08) = 0 (session-active flag)
 *   3. notifyGameResults sender (FUN_1005028f8) checks +0x2b08 == 0 → aborts
 *   4. Spoils screen never gets its data → skipped
 *
 * Fix: save +0x2b08 before calling original, restore after.
 * This keeps the session flag alive for notifyGameResults to fire.
 *
 * All three functions share the same vtable (RPC session manager):
 *   FUN_1004fd37c (endSession)        → fptr at g_base+0x149e760
 *   FUN_1004fdaf0 (notifyExitPostMatch) → fptr at g_base+0x149e788
 *   FUN_1005028f8 (notifyGameResults)   → fptr at g_base+0x149e938
 */
typedef void (*end_session_fn)(void *self);
static end_session_fn orig_end_session = NULL;
static void hook_end_session(void *self) {
    /* Save the session-active flag before endSession clears it */
    int saved_flag = *(int *)((uint8_t *)self + 0x2b08);
    LOG(@"[post-match] endSession called, +0x2b08=%d (saving)", saved_flag);

    orig_end_session(self);

    /* Restore the flag so notifyGameResults can fire via the normal game path.
     *
     * NOTE: Direct calls to FUN_1004f4e58 (build_body) and FUN_1005028f8
     * (notifyGameResults) were removed — FUN_1004f4e58 writes to its own
     * __TEXT address (x19 = &FUN_1004f4e58), causing KERN_PROTECTION_FAILURE.
     * The function address or calling convention is incorrect.
     *
     * Restoring +0x2b08 is sufficient: the game's own notifyGameResults
     * dispatcher checks this flag and will fire if it's non-zero.
     */
    *(int *)((uint8_t *)self + 0x2b08) = saved_flag;
    LOG(@"[post-match] endSession returned, restored +0x2b08 to %d", saved_flag);
}

/* ── Probes for remaining available CE gate callers ── */

typedef void (*party_match_fn)(void *self);
static party_match_fn orig_party_match = NULL;
static void hook_party_match(void *self) {
    LOG(@"[probe] FUN_10028c348 (party/matchmaking) CALLED self=%p", self);
    orig_party_match(self);
}

typedef void (*tab_ctrl_fn)(void *self);
static tab_ctrl_fn orig_tab_ctrl = NULL;
static void hook_tab_ctrl(void *self) {
    LOG(@"[probe] FUN_1001e0550 (tab controller) CALLED self=%p", self);
    orig_tab_ctrl(self);
}

typedef void (*home_text_fn)(void *self, void *param2);
static home_text_fn orig_home_text = NULL;
static void hook_home_text(void *self, void *param2) {
    LOG(@"[probe] FUN_1001f4efc (home panel text) CALLED self=%p", self);
    orig_home_text(self, param2);
}

/* ========== Layer 9: Direct trophy data population ========== */

/*
 * The trophy renderer FUN_100265bd4 loops over entries from:
 *   count: *(uint32*)(profile + 0x18ef8)
 *   array: *(long*)(profile + 0x18f00)
 *   flag:  *(char*)(profile + 0x18f21)  (already forced by Layer 4b)
 *
 * Each entry is 0x50 bytes:
 *   +0x18: std::string (trophy name — SSO, 24 bytes)
 *   +0x48: uint32 season index
 *   +0x4c: uint32 trophy value (0-29 scale: tier=val/3+1, subtier=val%3)
 *
 * The renderer reads +0x48 for [SEASON_NAME] substitution and +0x4c for the
 * skill tier icon. The string at +0x18 is passed to FUN_1004e3170 (string copy).
 * An all-zero SSO string is valid (empty string, short mode, no heap alloc).
 *
 * We use the game's operator_new so the profile destructor can safely free it.
 */

#define TROPHY_ENTRY_SIZE  0x50
#define MAX_SEASONS        19
#define ENTRIES_PER_SEASON 2     /* individual_skill_tier + individual_5v5_skill_tier */
#define TOTAL_TROPHIES     (MAX_SEASONS * ENTRIES_PER_SEASON)  /* 38 */
#define TROPHY_VALUE       29    /* Vainglorious Gold (tier 10, sub-tier 2) */

static void ensure_trophy_data(long profile_obj) {
    uint32_t count = *(uint32_t *)(profile_obj + 0x18ef8);
    if (count > 0) return;  /* already populated */

    typedef void *(*operator_new_fn)(unsigned long);
    operator_new_fn game_new = (operator_new_fn)(g_base + 0x1148d8c);
    void *array = game_new(TOTAL_TROPHIES * TROPHY_ENTRY_SIZE);
    if (!array) {
        LOG(@"[trophy] operator_new FAILED for trophy array (%d bytes)",
            TOTAL_TROPHIES * TROPHY_ENTRY_SIZE);
        return;
    }
    memset(array, 0, TOTAL_TROPHIES * TROPHY_ENTRY_SIZE);

    for (int s = 0; s < MAX_SEASONS; s++) {
        for (int t = 0; t < ENTRIES_PER_SEASON; t++) {
            int idx = s * ENTRIES_PER_SEASON + t;
            uint8_t *entry = (uint8_t *)array + idx * TROPHY_ENTRY_SIZE;
            /* +0x18: leave as zeroed SSO empty string (safe for libc++) */
            *(uint32_t *)(entry + 0x48) = (uint32_t)s;       /* season index */
            *(uint32_t *)(entry + 0x4c) = TROPHY_VALUE;       /* Vainglorious */
        }
    }

    *(uint32_t *)(profile_obj + 0x18ef8) = TOTAL_TROPHIES;
    *(uint64_t *)(profile_obj + 0x18f00) = (uint64_t)array;

    LOG(@"[trophy] POPULATED: %d entries at %p (profile=%p)",
        TOTAL_TROPHIES, array, (void *)profile_obj);
}

/* ========== Patch tables ========== */

typedef struct {
    uintptr_t offset;
    void     *replacement;
    uintptr_t expected;
    const char *name;
} fptr_patch;

static fptr_patch parser_patches[] = {
    { 0x0145a8e8, features_always_on,      0x001329b0, "featuresEnabled" },
    { 0x0145a7f8, free_tab_always_visible, 0x00132444, "freeTabVisibilityExperiment" },
    { 0x0145a858, golden_arrow_on,         0x0013279c, "goldenArrowPromptExperiment" },
    { 0x0145a828, tutorial_popup_on,        0x001326e8, "tutorialCompletionPopupExperiment" },
};

/* ========== Find main binary ========== */

static uintptr_t find_main_binary_base(void) {
    uint32_t count = _dyld_image_count();
    for (uint32_t i = 0; i < count; i++) {
        const char *name = _dyld_get_image_name(i);
        if (name && strstr(name, "GameKindred")) {
            uintptr_t base = (uintptr_t)_dyld_get_image_header(i);
            LOG(@"found GameKindred at image %u: %p (%s)", i, (void *)base, name);
            return base;
        }
    }
    uintptr_t base = (uintptr_t)_dyld_get_image_header(0);
    LOG(@"fallback to image 0: %p", (void *)base);
    return base;
}

/* ========== Constructor ========== */

__attribute__((constructor))
static void vg_unlock_init(void) {
    LOG(@"loaded (v14 — parsers + visibility + guest gate + CE __TEXT patch)");

    g_base = find_main_binary_base();
    if (!g_base) {
        LOG(@"FATAL: could not find main binary");
        return;
    }

    /* Layer 1: patch constants parsers */
    int n = sizeof(parser_patches) / sizeof(parser_patches[0]);
    for (int i = 0; i < n; i++) {
        fptr_patch *p = &parser_patches[i];
        void **fptr = (void **)(g_base + p->offset);
        void *old = *fptr;
        uintptr_t actual = (uintptr_t)old - g_base;
        if (p->expected && actual != p->expected)
            LOG(@"WARNING: %s unexpected (0x%lx != 0x%lx)", p->name,
                (unsigned long)actual, (unsigned long)p->expected);
        *fptr = p->replacement;
        LOG(@"parser %s: %p -> %p", p->name, old, p->replacement);
    }

    /* Layer 2: hook the nav bar refresh function */
    void **refresh_fptr = (void **)(g_base + 0x14829e8);
    orig_refresh = (refresh_fn)*refresh_fptr;
    uintptr_t refresh_offset = (uintptr_t)orig_refresh - g_base;
    LOG(@"refresh fptr at %p, current=0x%lx (expect 0x2a8f20)",
        refresh_fptr, (unsigned long)refresh_offset);
    *refresh_fptr = (void *)hook_refresh;
    LOG(@"refresh hook installed: %p -> %p", (void *)orig_refresh, (void *)hook_refresh);

    /* Layer 3: hook setTabVisible to block sidebar tab hiding */
    void **stv_fptr = (void **)(g_base + 0x1469fb8);
    orig_set_tab_visible = (set_tab_visible_fn)*stv_fptr;
    uintptr_t stv_offset = (uintptr_t)orig_set_tab_visible - g_base;
    LOG(@"setTabVisible fptr at %p, current=0x%lx (expect 0x1e6c4c)",
        stv_fptr, (unsigned long)stv_offset);
    *stv_fptr = (void *)hook_set_tab_visible;
    LOG(@"setTabVisible hook installed: %p -> %p", (void *)orig_set_tab_visible, (void *)hook_set_tab_visible);

    /* Layer 4a: hook trophy sub-panel refresh at base+0x147b868 (thunk_FUN_100260244)
       SAME PATTERN AS LEADERBOARD: original hides panels, we re-show them */
    void **trophy_fptr = (void **)(g_base + 0x147b868);
    orig_trophy_panel = (trophy_panel_fn)*trophy_fptr;
    uintptr_t trophy_off = (uintptr_t)orig_trophy_panel - g_base;
    LOG(@"[trophy] panel fptr at %p, current=0x%lx (expect 0x260494)",
        trophy_fptr, (unsigned long)trophy_off);
    *trophy_fptr = (void *)hook_trophy_panel;
    LOG(@"[trophy] panel hook installed: %p -> %p", (void *)orig_trophy_panel, (void *)hook_trophy_panel);

    /* Layer 4b: hook profile DATA handler at base+0x147bec8 (FUN_100265dbc)
       Forces +0x18f20 (own profile) and +0x18f21 (trophy data) flags */
    void **prof_data_fptr = (void **)(g_base + 0x147bec8);
    orig_profile_data = (profile_data_fn)*prof_data_fptr;
    uintptr_t prof_data_off = (uintptr_t)orig_profile_data - g_base;
    LOG(@"[trophy] profile data fptr at %p, current=0x%lx (expect 0x265dbc)",
        prof_data_fptr, (unsigned long)prof_data_off);
    *prof_data_fptr = (void *)hook_profile_data;
    LOG(@"[trophy] profile data hook installed: %p -> %p", (void *)orig_profile_data, (void *)hook_profile_data);

    /* Layer 4c: hook profile LAYOUT refresh at base+0x147be00 (thunk_FUN_1002654ec)
       Forces +0x18f21 flag before layout so trophy renderer sees it */
    void **prof_layout_fptr = (void **)(g_base + 0x147be00);
    orig_profile_layout = (profile_layout_fn)*prof_layout_fptr;
    uintptr_t prof_layout_off = (uintptr_t)orig_profile_layout - g_base;
    LOG(@"[trophy] profile layout fptr at %p, current=0x%lx (expect 0x2654e8)",
        prof_layout_fptr, (unsigned long)prof_layout_off);
    *prof_layout_fptr = (void *)hook_profile_layout;
    LOG(@"[trophy] profile layout hook installed: %p -> %p", (void *)orig_profile_layout, (void *)hook_profile_layout);

    /* Layer 5: hook ALL THREE profile opener fptrs in __DATA.
       The avatar tap uses an unknown dispatch — we blanket all candidates. */

    /* 5a: FUN_1001eeb60 at 0x146b2d0 — creates simplified popup */
    void **p5a = (void **)(g_base + 0x146b2d0);
    LOG(@"[profile] 5a: 0x146b2d0 current=0x%lx (expect 0x1eeb60)", (unsigned long)((uintptr_t)*p5a - g_base));
    *p5a = (void *)hook_profile_eeb60;

    /* 5b: FUN_1001f505c at 0x146cf98 — guest-gated profile opener */
    void **p5b = (void **)(g_base + 0x146cf98);
    LOG(@"[profile] 5b: 0x146cf98 current=0x%lx (expect 0x1f505c)", (unsigned long)((uintptr_t)*p5b - g_base));
    *p5b = (void *)hook_profile_f505c;

    /* 5c: FUN_1001fa7b0 at 0x146e788 — always creates simplified card */
    void **p5c = (void **)(g_base + 0x146e788);
    LOG(@"[profile] 5c: 0x146e788 current=0x%lx (expect 0x1fa7b0)", (unsigned long)((uintptr_t)*p5c - g_base));
    *p5c = (void *)hook_profile_fa7b0;

    LOG(@"[profile] all 3 profile openers hooked -> full profile panel");

    /* Layer 7: patch session manager vtable[12] → stub_has_account
       Vtable at __DATA.__const+0x149e440, slot 12 at offset 0x60 = 0x149e4a0.
       Original: FUN_1004fe5ec (checks registered account string at self+0x2bd0).
       Stub returns 1 → FUN_10014e20c returns 0 (not guest) EVERYWHERE. */
    void **guest_fptr = (void **)(g_base + 0x149e4a0);
    uintptr_t guest_off = (uintptr_t)*guest_fptr - g_base;
    LOG(@"[guest] vtable[12] at %p, current=0x%lx (expect 0x4fe5ec)",
        guest_fptr, (unsigned long)guest_off);
    *guest_fptr = (void *)stub_has_account;
    LOG(@"[guest] guest gate DISABLED — FUN_10014e20c now returns 0 everywhere");

    /* Layer 8: hook CE gate callers to undo gate effects on progression UI.
       Each of these functions calls FUN_100131560 and hides UI when it returns 1.
       We hook them to re-show the hidden elements after the original runs. */

#define HOOK_FPTR(offset, orig_var, hook_fn, name) do { \
    void **_fp = (void **)(g_base + (offset)); \
    (orig_var) = (typeof(orig_var))*_fp; \
    *_fp = (void *)(hook_fn); \
    LOG(@"[ce-gate] hooked %s at g_base+0x%x", name, (unsigned)(offset)); \
} while(0)

    HOOK_FPTR(0x14752f8, orig_profile_ranked, hook_profile_ranked, "profile_ranked");
    HOOK_FPTR(0x147af60, orig_profile_body,   hook_profile_body,   "profile_body");
    HOOK_FPTR(0x147af38, orig_profile_loader, hook_profile_loader, "profile_loader");
    HOOK_FPTR(0x1477d38, orig_season_handler, hook_season_handler, "season_handler");
    HOOK_FPTR(0x1477d48, orig_season_update,  hook_season_update,  "season_update");
    /* prog_vis1 (0x14890f0) and prog_vis2 (0x148a780) DISABLED — SIMD s0 clobber */
    HOOK_FPTR(0x1471108, orig_social_feat,    hook_social_feat,    "social_feat");
    HOOK_FPTR(0x147a1d8, orig_skill_tier,     hook_skill_tier,     "skill_tier");
    HOOK_FPTR(0x145c170, orig_data_fetch,     hook_data_fetch,     "data_fetch");
    HOOK_FPTR(0x1469478, orig_tab_init,       hook_tab_init,       "tab_init");
    HOOK_FPTR(0x147a120, orig_market_tabs,    hook_market_tabs,    "market_tabs");

    /* Layer 10: Post-match — preserve session flag across endSession */
    HOOK_FPTR(0x149e760, orig_end_session,   hook_end_session,   "endSession");
    /* Probes DISABLED — wrong signatures cause crashes
    HOOK_FPTR(0x147f110, orig_party_match,   hook_party_match,   "party_match");
    HOOK_FPTR(0x1469468, orig_tab_ctrl,      hook_tab_ctrl,      "tab_ctrl");
    HOOK_FPTR(0x146cfb0, orig_home_text,     hook_home_text,     "home_text");
    */

#undef HOOK_FPTR

    /* Layer 9b: KV store writes moved to hook_refresh — subsystem not ready at init time. */

    LOG(@"init complete — %d parsers + visibility hooks + guest gate + sidebar + %d CE gate hooks + endSession hook", n, 10);
}
