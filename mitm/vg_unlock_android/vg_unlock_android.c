#define _GNU_SOURCE

/*
 * vg_unlock_android — runtime patches for Vainglory CE (Android/ELF port).
 *
 * Port of the iOS dylib (vg_unlock.m) to Android.
 * Same layer structure. Offsets differ from iOS — see notes below.
 *
 * Layer 1: Replace constants parser fptrs -> force feature flags on
 * Layer 2: Hook nav bar refresh -> force leaderboard button visible
 * Layer 3: Hook PEOPLE panel refresh -> force friends/social panel visible
 * Layer 4: Hook profile refresh -> force trophy section visible
 * Layer 5: Replace avatar tap handler -> open full profile panel
 * Layer 6: Sidebar tab activation -> force all panel tabs active + visible
 * Layer 7: Patch session manager vtable -> disable guest gate globally
 * Layer 8: CE gate caller hooks -> re-enable hidden UI elements
 * Layer 9: Direct trophy data population + ranked KV store writes
 *
 * CRITICAL: Object layout offsets (self+0xXXXX) differ between iOS and
 * Android despite both being arm64. Confirmed differences:
 *   - Guest account string: iOS +0x2bd0 -> Android +0x2ba0
 *   - Academy panel alloc:  iOS 0x9ca0 -> Android 0x9cc0
 *   - Full profile alloc:   iOS 0x28848 -> Android 0x288f0
 *   - setTabVisible field:  iOS +0x2c2c -> Android UNKNOWN
 *   - Trophy data flags:    iOS +0x18f20/21 -> Android UNKNOWN
 * ALL self+0xXXXX offsets in hook functions below are iOS values and
 * must be verified/updated via Ghidra RE of libGameKindred.so.
 */

#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <link.h>
#include <sys/mman.h>
#include <android/log.h>

#define TAG "vg_unlock"
#define LOG(fmt, ...) __android_log_print(ANDROID_LOG_INFO, TAG, fmt, ##__VA_ARGS__)

#ifndef VG_ENABLE_EXPERIMENTAL_HOOKS
#define VG_ENABLE_EXPERIMENTAL_HOOKS 0
#endif

#ifndef VG_ENABLE_PARSER_PATCHES
#define VG_ENABLE_PARSER_PATCHES 0
#endif

#ifndef VG_ENABLE_PROFILE_REDIRECTS
#define VG_ENABLE_PROFILE_REDIRECTS 0
#endif

#ifndef VG_ENABLE_GUEST_BYPASS
#define VG_ENABLE_GUEST_BYPASS 0
#endif

static uintptr_t g_base = 0;

/*
 * ============================================================
 * Offset discovery status (from automated binary analysis):
 *
 * [CONFIRMED] = verified via ELF relocation + disassembly
 * [MEDIUM]    = relocation points to real function, but internal
 *               field offsets may differ from iOS
 * [NEEDS_RE]  = shift prediction was wrong (target is ret stub
 *               or trivial thunk); needs Ghidra RE
 *
 * The .data.rel.ro section is RELRO-protected (0x26b8b20-0x2ad1fa8).
 * All fptr patches need mprotect() before writing.
 *
 * CE gate function on Android: 0x8480e0 (equiv iOS FUN_100131560)
 * ============================================================
 */

/* ---- .data.rel.ro fptr offsets (RELRO-protected, need mprotect) ---- */

/* Layer 1: Parser fptrs [CONFIRMED] — via string XREF + relocation.
 * Parser table: 48-byte entries, fptr at entry+8. */
#define FPTR_FEATURES_ENABLED          0x26bac28  /* func 0x83f318 — "featuresEnabled" */
#define FPTR_FREE_TAB_VISIBILITY       0x26bab38  /* func 0x83ec48 — "freeTabVisibilityExperiment" */
#define FPTR_GOLDEN_ARROW              0x26bab98  /* func 0x83f00c — "goldenArrowPromptExperiment" */
#define FPTR_TUTORIAL_POPUP            0x26bab68  /* func 0x83ef2c — "tutorialCompletionPopupExperiment" */

/* Layer 2: Nav bar refresh [NEEDS_RE] — shift prediction -> ret stub (0x7fcbf4).
 * The real nav refresh accesses self+0xf8, clears bit 2 at ptr+0x84.
 * Candidates accessing both +0xf8 and +0x84: 0xb78f88 (richest), 0xb5ce40.
 * None had .data.rel.ro fptrs — may be virtual (vtable dispatch). */
#define FPTR_NAV_REFRESH               0x0  /* NEEDS_RE: find via Ghidra */

/* Layer 3: setTabVisible [NEEDS_RE] — shift prediction -> trivial "return 1".
 * iOS accesses +0x2c2c but this offset has ZERO hits on Android.
 * Field layout differs. */
#define FPTR_SET_TAB_VISIBLE           0x0  /* NEEDS_RE: field offset differs */

/* Layer 4: Trophy panel + profile data/layout */
#define FPTR_TROPHY_PANEL              0x0  /* NEEDS_RE: shift -> stub (0x7fcc90) */
#define FPTR_PROFILE_DATA              0x26dc200  /* [MEDIUM] func 0xa0c2f8 — real prologue */
#define FPTR_PROFILE_LAYOUT            0x0  /* NEEDS_RE: shift -> stub (0x81ad94) */

/* Layer 5: Profile openers [CONFIRMED] — via string XREF + relocation.
 * 0xaf7980 loads "homepanel_profile_avatar" at 0x1aba75a, branches to
 * 0xbbf91c (full profile) or 0xbbe4c8 (simplified). CE gate at 0x8480e0. */
#define FPTR_PROFILE_EEB60             0x26f34c8  /* func 0xaf7920 */
#define FPTR_PROFILE_F505C             0x26f34a8  /* func 0xaf7980 — guest-gated opener */
#define FPTR_PROFILE_FA7B0             0x26f3888  /* func 0xaf7950 */

/* Layer 7: Guest gate vtable slot [CONFIRMED] — session mgr vtable[12].
 * Vtable at 0x2720e10, slot 12 at +0x60. Func 0xd91dec accesses self+0x2ba0
 * (account string, iOS was +0x2bd0). Returns 0 if empty (guest). */
#define FPTR_GUEST_VTABLE12            0x2720e70  /* func 0xd91dec */

/* Layer 8: CE gate caller hooks — mixed confidence.
 * Functions calling CE gate 0x8480e0, then hiding UI when it returns 1.
 * Some shift predictions were correct (real prologues), some were stubs.
 *
 * CE gate (0x8480e0) is called from 9 sites. Each caller checks the
 * return value and hides UI elements when it returns 1. The following
 * CE gate caller fptrs were found via BL scan + .data.rel.ro lookup:
 *
 *   Call at 0x863b88: fptr 0x26bbd58 -> func 0x863dd4 (main menu init area)
 *   Call at 0xa6e734: fptrs 0x26e52e8/0x26e5260/0x26e5238 -> funcs 0xa6e6f4/f0/ec
 *   Call at 0xad2680: fptrs 0x26ed4f8/0x26ed488/+5 more -> funcs in 0xad2xxx range
 *   Call at 0xad6794: fptrs 0x26ed788/0x26ed770/0x26ed768 -> funcs 0xad676c/5c/2c
 *   Call at 0xae0920: fptrs 0x26eec18/0x26eec00/+3 more -> funcs 0xae08f8/089c/etc
 *   Call at 0xaf783c: fptr 0x26f34c0 -> func 0xaf7808 (CODE_SOCIAL_INNER area)
 *   Call at 0xaf79a8: fptrs 0x26f34a8/0x26f3888 -> CONFIRMED profile_f505c/fa7b0
 *   Call at 0xbbe99c: fptrs 0x270b7c0/0x270b798 -> funcs 0xbbe890/e878 (profile area)
 *
 * Next step: decompile each candidate in Ghidra to match to NEEDS_RE slots.
 * Do NOT patch CE gate directly — it will crash the app. */
#define FPTR_PROFILE_RANKED            0x26d5630  /* [MEDIUM] func 0xa02b60 — real prologue, accesses +0x370 */
#define FPTR_PROFILE_BODY              0x0  /* NEEDS_RE: CE gate caller candidates: 0x26e52e8 (func 0xa6e6f4), 0x26e5260 (func 0xa6e6f0) */
#define FPTR_PROFILE_LOADER            0x0  /* NEEDS_RE: CE gate caller candidates: 0x26eec18 (func 0xae08f8), 0x26eec00 (func 0xae089c) */
#define FPTR_SEASON_HANDLER            0x0  /* NEEDS_RE: shift -> tiny func (0xe13e54) */
#define FPTR_SEASON_UPDATE             0x26d8080  /* [MEDIUM] func 0xe01c54 — real prologue */
#define FPTR_SOCIAL_FEAT               0x26d1440  /* [MEDIUM] func 0x99f5e0 — real prologue */
#define FPTR_SKILL_TIER                0x26da510  /* [MEDIUM] func 0xe020b4 — real prologue */
#define FPTR_DATA_FETCH                0x0  /* NEEDS_RE: CE gate caller candidates: 0x26ed4f8 (func 0xad240c), 0x26ed488 (func 0xad23b4) */
#define FPTR_TAB_INIT                  0x26c97b0  /* [MEDIUM] func 0xe02408 — real prologue */
#define FPTR_MARKET_TABS               0x0  /* NEEDS_RE: CE gate caller candidates: 0x26ed788 (func 0xad676c), 0x26ed770 (func 0xad675c) */

/* ---- Code offsets (functions called via g_base + offset) ---- */

#define CODE_KV_WRITE                  0x8370dc  /* [CONFIRMED] XREF "new5v5RankedDataEloBucket" @ 0xae9e14 */
#define CODE_OPERATOR_NEW              0x795530  /* [CONFIRMED] PLT stub for _Znwm (operator new) */
#define CODE_GET_DATA_MGR              0x8580b8  /* [CONFIRMED] simple getter: ADRP+LDR from 0x2b7ed00 + RET */
#define CODE_EXTRA_FETCH               0x0       /* NEEDS_RE: candidates 0xe04760, 0xe048a4, 0xe048e0 */
#define CODE_REGISTER_PANEL            0xad9cfc  /* [CONFIRMED] called 4x in main menu ctor with indices 0,1,2,5 */
#define CODE_ARRAY_ADD                 0xaf2458  /* [CONFIRMED] called 10x in bag ctor for tab additions */
#define CODE_SOCIAL_INNER              0xaf7808  /* [MEDIUM] may be inlined on Android (not separate BL) */
#define CODE_TROPHY_TAB_CTOR           0xaf5314  /* [MEDIUM] 0x50-byte tab ctor in bag area */
#define CODE_OPEN_FULL_PROFILE         0xbbf91c  /* [CONFIRMED] allocates 0x288f0, calls ctor 0xbbf978 */
#define CODE_PROFILE_BODY_SETUP        0x0       /* NEEDS_RE: field offsets differ */
#define CODE_ACADEMY_CTOR              0xa510e8  /* [CONFIRMED] alloc 0x9cc0 (iOS was 0x9ca0), CE-gated by 0x83dbe8 */
#define CODE_TAB_REG                   0xb67934  /* [CONFIRMED] bag tab registration, 5 params */
#define CODE_WIDGET_ENABLE             0x0       /* NEEDS_RE: field offsets differ */

/* ---- Global data offsets (singletons in .bss) ---- */

#define GLOBAL_ROOT_PARENT             0x30336c0  /* [MEDIUM] 57 refs, UI manager pattern */
#define GLOBAL_DATA_MGR                0x2b7ed00  /* [CONFIRMED] loaded by getter at 0x8580b8 */
#define GLOBAL_SESSION_MGR             0x3110700  /* [CONFIRMED] vtable dispatch matches session mgr */

/* ========== Utility: find library base / page protections ========== */

typedef struct {
    const char *lib_name;
    uintptr_t base;
    const char *match_name;
} lib_find_ctx;

static int maps_perms_to_prot(const char *perms) {
    int prot = 0;
    if (perms[0] == 'r') prot |= PROT_READ;
    if (perms[1] == 'w') prot |= PROT_WRITE;
    if (perms[2] == 'x') prot |= PROT_EXEC;
    return prot;
}

static int find_lib_base_cb(struct dl_phdr_info *info, size_t size, void *data) {
    lib_find_ctx *ctx = (lib_find_ctx *)data;
    (void)size;

    if (!info->dlpi_name || !strstr(info->dlpi_name, ctx->lib_name)) {
        return 0;
    }

    ctx->base = (uintptr_t)info->dlpi_addr;
    ctx->match_name = info->dlpi_name;
    return 1;
}

static uintptr_t find_lib_base_from_maps(const char *lib_name) {
    FILE *f = fopen("/proc/self/maps", "r");
    if (!f) {
        LOG("FATAL: cannot open /proc/self/maps");
        return 0;
    }

    uintptr_t best_base = 0;
    char line[512];
    while (fgets(line, sizeof(line), f)) {
        if (!strstr(line, lib_name)) {
            continue;
        }

        unsigned long start = 0;
        unsigned long end = 0;
        unsigned long file_offset = 0;
        unsigned long inode = 0;
        char perms[5] = {0};
        char dev[16] = {0};
        char path[256] = {0};

        int parsed = sscanf(line, "%lx-%lx %4s %lx %15s %lu %255[^\n]",
            &start, &end, perms, &file_offset, dev, &inode, path);
        if (parsed < 6) {
            continue;
        }

        uintptr_t candidate = (uintptr_t)start - (uintptr_t)file_offset;
        if (file_offset == 0) {
            fclose(f);
            LOG("found %s via /proc/self/maps at base %p (%s)",
                lib_name, (void *)candidate, path[0] ? path : "unknown");
            return candidate;
        }
        if (best_base == 0 || candidate < best_base) {
            best_base = candidate;
        }
    }

    fclose(f);

    if (best_base != 0) {
        LOG("found %s via /proc/self/maps fallback at base %p", lib_name, (void *)best_base);
        return best_base;
    }

    LOG("FATAL: %s not found in /proc/self/maps", lib_name);
    return 0;
}

static uintptr_t find_lib_base(const char *lib_name) {
    lib_find_ctx ctx = { lib_name, 0, NULL };

    if (dl_iterate_phdr(find_lib_base_cb, &ctx) != 0 && ctx.base != 0) {
        LOG("found %s via dl_iterate_phdr at base %p (%s)",
            lib_name,
            (void *)ctx.base,
            ctx.match_name ? ctx.match_name : "unknown");
        return ctx.base;
    }

    return find_lib_base_from_maps(lib_name);
}

static int query_page_protection(uintptr_t addr) {
    FILE *f = fopen("/proc/self/maps", "r");
    if (!f) {
        return -1;
    }

    char line[512];
    while (fgets(line, sizeof(line), f)) {
        unsigned long start = 0;
        unsigned long end = 0;
        char perms[5] = {0};

        if (sscanf(line, "%lx-%lx %4s", &start, &end, perms) != 3) {
            continue;
        }

        if (addr >= (uintptr_t)start && addr < (uintptr_t)end) {
            fclose(f);
            return maps_perms_to_prot(perms);
        }
    }

    fclose(f);
    return -1;
}

/* ========== Utility: mprotect helper for RELRO pages ========== */

static int make_writable(uintptr_t addr, size_t len) {
    long page_size = sysconf(_SC_PAGESIZE);
    uintptr_t page_start = addr & ~(page_size - 1);
    size_t total = (addr - page_start) + len;
    total = (total + page_size - 1) & ~(page_size - 1);

    int prot = query_page_protection(addr);
    if (prot < 0) {
        prot = PROT_READ;
    }
    prot |= PROT_WRITE;

    int ret = mprotect((void *)page_start, total, prot);
    if (ret != 0) {
        LOG("mprotect FAILED at %p (page %p, size 0x%zx, prot=0x%x)",
            (void *)addr, (void *)page_start, total, prot);
    }
    return ret;
}

/* ========== Utility: safe fptr patch (with RELRO bypass) ========== */

static void patch_fptr(uintptr_t offset, void *replacement, const char *name) {
    if (offset == 0) {
        LOG("SKIP %s — offset not yet discovered", name);
        return;
    }

    void **fptr = (void **)(g_base + offset);
    make_writable((uintptr_t)fptr, sizeof(void *));

    void *old = *fptr;
    *fptr = replacement;
    LOG("patched %s: %p -> %p (was offset 0x%lx)",
        name, old, replacement, (unsigned long)((uintptr_t)old - g_base));
}

/* ========== Layer 1: Constants parser replacements ========== */

static void do_sidebar_fix(void);

/* Layer 9b: Force ranked skill-tier values into the KV store.
 * Mirrors the iOS kv writes in vg_unlock.m hook_refresh. On Android the
 * nav refresh hook is never installed (FPTR_NAV_REFRESH unresolved), so we
 * drive this from the parser + installed Layer 8 hooks instead. */
static void ensure_ranked_kv_written(void) {
    static int ranked_kv_done = 0;
    if (ranked_kv_done || CODE_KV_WRITE == 0) return;
    ranked_kv_done = 1;

    typedef void (*kv_write_fn)(const char *, int);
    kv_write_fn kv_write = (kv_write_fn)(g_base + CODE_KV_WRITE);

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

    LOG("[ranked-kv] wrote skill tier 29 (Vainglorious Gold) to key-value store");
}

static void features_always_on(void *output, void *json_dict) {
    uint8_t *s = (uint8_t *)output;
    s[0x08] = 1;  /* leaderboards */
    s[0x09] = 1;  /* leaderboardsAlwaysQueryOfflineFriends */
    s[0x0a] = 1;  /* liveEvents */
    s[0x0b] = 0;  /* hideBattlepassCallout */
    s[0x0c] = 1;  /* inGameChat */
    
    do_sidebar_fix();
    
    static int logged = 0;
    if (!logged) {
        LOG("[flags] featuresEnabled: all on");
        logged = 1;
    }
}

static void free_tab_always_visible(void *output, void *json_dict) {
    uint8_t *s = (uint8_t *)output;
    s[0x08] = 1;  s[0x09] = 1;  s[0x0a] = 1;  s[0x0b] = 1;  s[0x0c] = 1;
    LOG("[flags] freeTabVisibility: all on");
}

static void golden_arrow_on(void *output, void *json_dict) {
    ((uint8_t *)output)[0x08] = 1;
}

static void tutorial_popup_on(void *output, void *json_dict) {
    ((uint8_t *)output)[0x08] = 1;
}

/* ========== Layer 2: Nav bar refresh hook ========== */

typedef void (*refresh_fn)(void *self);
static refresh_fn orig_refresh = NULL;

/* Forward declaration for Layer 9 */
static void ensure_trophy_data(long profile_obj);

static void hook_refresh(void *self) {
    orig_refresh(self);

    /* Re-enable the leaderboard button */
    void *lb_button = *(void **)((uint8_t *)self + 0xf8);
    if (lb_button) {
        uint32_t *flags = (uint32_t *)((uint8_t *)lb_button + 0x84);
        uint32_t old = *flags;
        *flags = old | 0x4;
        if (!(old & 0x4)) {
            LOG("[leaderboard] refresh: button SHOWN (flags 0x%x -> 0x%x)", old, *flags);
        }
    }

    ensure_ranked_kv_written();
    do_sidebar_fix();
}

static void do_sidebar_fix(void) {
    /* Layer 6: Register missing sidebar panels */
    static int sidebar_fix_done = 0;
    if (!sidebar_fix_done && GLOBAL_ROOT_PARENT != 0 && CODE_REGISTER_PANEL != 0) {
        void *parent = *(void **)(g_base + GLOBAL_ROOT_PARENT);
        if (parent) {
            void *menuObj = *(void **)((uint8_t *)parent + 0x80);
            if (menuObj) {
                sidebar_fix_done = 1;
                void *sidebarCtrl = (uint8_t *)menuObj + 0x70;
                void *socialPanel = *(void **)((uint8_t *)menuObj + 0xf0);
                void *socialPanelD0 = *(void **)((uint8_t *)menuObj + 0xd0);

                typedef void (*register_panel_fn)(void *, void *, int);
                register_panel_fn reg = (register_panel_fn)(g_base + CODE_REGISTER_PANEL);

                LOG("[sidebar] parent=%p menuObj=%p sidebarCtrl=%p", parent, menuObj, sidebarCtrl);
                LOG("[sidebar] socialPanel(+0xf0)=%p socialRef(+0xd0)=%p",
                    socialPanel, socialPanelD0);

                /* Register SOCIAL panel at index 4 */
                if (socialPanel && !socialPanelD0) {
                    void *subObj = (void *)((uint8_t *)socialPanel + 0x10);
                    *(void **)((uint8_t *)menuObj + 0xd0) = subObj;
                    LOG("[sidebar] registering SOCIAL panel at index 4: subObj=%p", subObj);
                    reg(sidebarCtrl, subObj, 4);
                    LOG("[sidebar] SOCIAL registered!");
                } else if (socialPanelD0) {
                    LOG("[sidebar] social panel already registered (d0=%p)", socialPanelD0);
                } else {
                    LOG("[sidebar] WARNING: no social panel at menuObj+0xf0!");
                }

                /* Create and register ACADEMY panel (index 2) */
                if (CODE_OPERATOR_NEW != 0 && CODE_ACADEMY_CTOR != 0) {
                    void *academyPanel = *(void **)((uint8_t *)menuObj + 0x100);
                    if (!academyPanel) {
                        typedef void *(*operator_new_fn)(unsigned long);
                        operator_new_fn game_new = (operator_new_fn)(g_base + CODE_OPERATOR_NEW);
                        void *mem = game_new(0x9cc0);  /* Android size (iOS was 0x9ca0) */
                        if (mem) {
                            typedef void *(*academy_ctor_fn)(void *);
                            academy_ctor_fn ctor = (academy_ctor_fn)(g_base + CODE_ACADEMY_CTOR);
                            LOG("[sidebar] creating ACADEMY panel: mem=%p size=0x9cc0", mem);
                            void *academy = ctor(mem);
                            *(void **)((uint8_t *)menuObj + 0x100) = academy;

                            void *academySubObj = (void *)((uint8_t *)academy + 0x2c90);
                            *(void **)((uint8_t *)menuObj + 0xc0) = academySubObj;
                            LOG("[sidebar] registering ACADEMY at index 2: subObj=%p", academySubObj);
                            reg(sidebarCtrl, academySubObj, 2);
                            LOG("[sidebar] ACADEMY registered!");
                        } else {
                            LOG("[sidebar] WARNING: operator_new failed for ACADEMY!");
                        }
                    } else {
                        LOG("[sidebar] ACADEMY already exists at %p", academyPanel);
                    }
                }

                /* Register PARTY panel at index 5 */
                void *partyPanel = *(void **)((uint8_t *)menuObj + 0xf8);
                if (partyPanel) {
                    void *partySubObj = (void *)((uint8_t *)partyPanel + 0x2c50);
                    /* Note: +0xd0 is shared — Social uses it if Social was created,
                       otherwise Party uses it. Since we just registered Social above,
                       only register Party if it wasn't already covered. */
                    LOG("[sidebar] registering PARTY panel at index 5: subObj=%p", partySubObj);
                    reg(sidebarCtrl, partySubObj, 5);
                    LOG("[sidebar] PARTY registered!");
                } else {
                    LOG("[sidebar] WARNING: no party panel at menuObj+0xf8!");
                }

                /* Create TROPHIES tab in BAG panel */
                if (CODE_TROPHY_TAB_CTOR != 0 && CODE_ARRAY_ADD != 0 && CODE_TAB_REG != 0) {
                    void *bagWrapper = *(void **)((uint8_t *)menuObj + 0x108);
                    if (bagWrapper) {
                        void *bagContainer = *(void **)((uint8_t *)bagWrapper + 0x8);
                        typedef void *(*tab_ctor_fn)(void *);
                        typedef void (*array_add_fn)(void *, void **);
                        typedef void *(*operator_new_fn2)(unsigned long);
                        typedef void (*tab_reg_fn)(void *, void *, void *, void *, void *);
                        typedef void *(*vt_method)(void *self);

                        operator_new_fn2 bag_new = (operator_new_fn2)(g_base + CODE_OPERATOR_NEW);
                        array_add_fn arr_add = (array_add_fn)(g_base + CODE_ARRAY_ADD);
                        tab_reg_fn tab_reg = (tab_reg_fn)(g_base + CODE_TAB_REG);
                        void *tabArray = (void *)((uint8_t *)bagWrapper + 0x48);

                        void *mem = bag_new(0x50);
                        if (mem) {
                            tab_ctor_fn ctor = (tab_ctor_fn)(g_base + CODE_TROPHY_TAB_CTOR);
                            void *tab = ctor(mem);
                            void *subObj = (void *)((uint8_t *)tab + 0x28);
                            arr_add(tabArray, &subObj);

                            void **vt = *(void ***)subObj;
                            void *icon    = ((vt_method)vt[2])(subObj);
                            void *title   = ((vt_method)vt[4])(subObj);
                            void *section = ((vt_method)vt[3])(subObj);

                            LOG("[bag-tabs] TROPHIES: subObj=%p icon=%p title=%p section=%p",
                                subObj, icon, title, section);
                            tab_reg(bagContainer, title, 0, icon, section);
                            LOG("[bag-tabs] TROPHIES tab registered!");
                        }
                    }
                }

                /* Dump registered sidebar tabs */
                void *home    = *(void **)((uint8_t *)menuObj + 0xb0);
                void *bag     = *(void **)((uint8_t *)menuObj + 0xb8);
                void *academyRef = *(void **)((uint8_t *)menuObj + 0xc0);
                void *partyRef   = *(void **)((uint8_t *)menuObj + 0xc8);
                LOG("[sidebar] registered: home(b0)=%p bag(b8)=%p academy(c0)=%p party(c8)=%p social(d0)=%p",
                    home, bag, academyRef, partyRef, *(void **)((uint8_t *)menuObj + 0xd0));
            }
        }
    }
}

/* ========== Layer 3: Hook setTabVisible ========== */

typedef void (*set_tab_visible_fn)(void *tab_panel, int visible);
static set_tab_visible_fn orig_set_tab_visible = NULL;

static void hook_set_tab_visible(void *tab_panel, int visible) {
    void **vtable = tab_panel ? *(void ***)tab_panel : NULL;
    uintptr_t vt_off = vtable ? ((uintptr_t)vtable - g_base) : 0;
    LOG("[sidebar] setTabVisible(%p, %d) vtable_off=0x%lx",
        tab_panel, visible, (unsigned long)vt_off);

    if (!visible) {
        LOG("[sidebar] BLOCKED hide on %p, forcing visible", tab_panel);
        orig_set_tab_visible(tab_panel, 1);
    } else {
        orig_set_tab_visible(tab_panel, visible);
    }
}

/* ========== Layer 4: Trophy sub-panel visibility ========== */

typedef void (*trophy_panel_fn)(void *self);
static trophy_panel_fn orig_trophy_panel = NULL;

static void hook_trophy_panel(void *self) {
    orig_trophy_panel(self);

    uint32_t *flags1 = (uint32_t *)((uint8_t *)self + 0x6a4);
    uint32_t *flags2 = (uint32_t *)((uint8_t *)self + 0xc94);
    uint32_t old1 = *flags1, old2 = *flags2;
    *flags1 |= 0x4;
    *flags2 |= 0x4;

    if (!(old1 & 0x4) || !(old2 & 0x4)) {
        LOG("[trophy] panel: SHOWN panels (0x6a4: 0x%x->0x%x, 0xc94: 0x%x->0x%x)",
            old1, *flags1, old2, *flags2);
    }
}

/* Profile data handler hook */
typedef void (*profile_data_fn)(long self, long data);
static profile_data_fn orig_profile_data = NULL;

static void hook_profile_data(long self, long data) {
    ensure_ranked_kv_written();
    orig_profile_data(self, data);

    uint8_t old20 = *(uint8_t *)(self + 0x18f20);
    uint8_t old21 = *(uint8_t *)(self + 0x18f21);
    *(uint8_t *)(self + 0x18f20) = 1;
    *(uint8_t *)(self + 0x18f21) = 1;

    ensure_trophy_data(self);

    uint32_t trophy_count = *(uint32_t *)(self + 0x18ef8);
    LOG("[trophy] profile data: +0x18f20: %d->1, +0x18f21: %d->1, trophy_count=%u, self=%p",
        old20, old21, trophy_count, (void *)self);
}

/* Layout refresh hook */
typedef void (*profile_layout_fn)(long self);
static profile_layout_fn orig_profile_layout = NULL;

static void hook_profile_layout(long self) {
    do_sidebar_fix();
    *(uint8_t *)(self + 0x18f21) = 1;
    ensure_trophy_data(self);
    orig_profile_layout(self);
    LOG("[trophy] profile layout: self=%p, +0x18f21=1, trophy_count=%u",
        (void *)self, *(uint32_t *)(self + 0x18ef8));
}

/* ========== Layer 5: Redirect profile openers -> full profile ========== */

static void open_full_profile(const char *tag) {
    LOG("[profile] %s intercepted! opening full profile", tag);

    if (GLOBAL_SESSION_MGR == 0 || GLOBAL_DATA_MGR == 0 || CODE_OPEN_FULL_PROFILE == 0) {
        LOG("[profile] SKIP — offsets not yet discovered");
        return;
    }

    void *session_mgr = *(void **)(g_base + GLOBAL_SESSION_MGR);
    void *data_mgr    = *(void **)(g_base + GLOBAL_DATA_MGR);
    LOG("[profile] session_mgr=%p data_mgr=%p", session_mgr, data_mgr);

    typedef void (*full_profile_fn)(const char *);
    full_profile_fn open_full = (full_profile_fn)(g_base + CODE_OPEN_FULL_PROFILE);
    open_full("homepanel_profile_avatar");

#if VG_ENABLE_EXPERIMENTAL_HOOKS
    if (data_mgr) {
        uint8_t *dirty = (uint8_t *)((uintptr_t)data_mgr + 0x29);
        LOG("[profile] dirty_flag=%d, forcing to 1", *dirty);
        *dirty = 1;
    }
#endif
}

static void hook_profile_eeb60(void *p1, float p2, long p3) {
    open_full_profile("hook_profile_eeb60");
}

static void hook_profile_f505c(void) {
    open_full_profile("hook_profile_f505c");
}

static void hook_profile_fa7b0(long self) {
    open_full_profile("hook_profile_fa7b0");
}

/* ========== Layer 7: Guest gate bypass ========== */

static uint32_t stub_has_account(void *self, void *out_str) {
    return 1;
}

/* ========== Layer 8: CE gate caller hooks ========== */

/* Profile ranked tabs */
typedef void (*profile_ranked_fn)(void *self);
static profile_ranked_fn orig_profile_ranked = NULL;
static void hook_profile_ranked(void *self) {
    ensure_ranked_kv_written();
    orig_profile_ranked(self);

    *(uint32_t *)((uint8_t *)self + 0x2853c) |= 0x4;
    *(uint32_t *)((uint8_t *)self + 0x2866c) |= 0x4;
    *(uint32_t *)((uint8_t *)self + 0x2879c) |= 0x4;

    *(uint8_t *)((uint8_t *)self + 0x2cea8) = 1;
    *(uint8_t *)((uint8_t *)self + 0x2ceab) = 1;

    if (*(uint32_t *)((uint8_t *)self + 0x2ce98) == 0) {
        *(uint32_t *)((uint8_t *)self + 0x2ce98) = *(uint32_t *)((uint8_t *)self + 0x2cde0);
        if (*(uint32_t *)((uint8_t *)self + 0x2ce98) == 0) {
            *(uint32_t *)((uint8_t *)self + 0x2ce98) = 3;
        }
    }

    static int log_once = 0;
    if (!log_once) { log_once = 1; LOG("[ce-gate] profile ranked tabs + display flags SHOWN"); }
}

/* Profile body display */
typedef void (*profile_body_fn)(void *self, void *data);
static profile_body_fn orig_profile_body = NULL;
static void hook_profile_body(void *self, void *data) {
    do_sidebar_fix();
    orig_profile_body(self, data);
    /* Safely removed the 0x216d4 layout patch to avoid Android 14+ crashes */
    if (CODE_PROFILE_BODY_SETUP != 0) {
        typedef void (*body_setup_fn)(void *, int);
        body_setup_fn setup = (body_setup_fn)(g_base + CODE_PROFILE_BODY_SETUP);
        setup((void *)((uint8_t *)self + 0x1d0), 1);
    }

    if (CODE_WIDGET_ENABLE != 0) {
        typedef void (*widget_enable_fn)(void *, int);
        widget_enable_fn enable_shield = (widget_enable_fn)(g_base + CODE_WIDGET_ENABLE);
        enable_shield((void *)((uint8_t *)self + 0x20a80), 1);
    }

    /* Re-show 12 profile card elements */
    uint8_t *card = (uint8_t *)self + 0x8AC0;
    *(uint32_t *)(card + 0x684)  |= 0x4;
    *(uint32_t *)(card + 0x7b4)  |= 0x4;
    *(uint32_t *)(card + 0xc8c)  |= 0x4;
    *(uint32_t *)(card + 0xdbc)  |= 0x4;
    *(uint32_t *)(card + 0x153c) |= 0x4;
    *(uint32_t *)(card + 0x166c) |= 0x4;
    *(uint32_t *)(card + 0x1c9c) |= 0x4;
    *(uint32_t *)(card + 0x1e7c) |= 0x4;
    *(uint32_t *)(card + 0x2ac4) |= 0x4;
    *(uint32_t *)(card + 0x2bb4) |= 0x4;
    *(uint32_t *)(card + 0x4a3c) |= 0x4;
    *(uint32_t *)(card + 0x4b2c) |= 0x4;

    /* Force XP data if level exists but XP ceiling is 0 */
    if (CODE_GET_DATA_MGR != 0) {
        typedef void *(*get_data_mgr_fn)(void);
        get_data_mgr_fn get_dm = (get_data_mgr_fn)(g_base + CODE_GET_DATA_MGR);
        void *dm = get_dm();
        if (dm) {
            uint32_t level = *(uint32_t *)((uint8_t *)dm + 0x55d0);
            int xp_ceil = *(int *)((uint8_t *)dm + 0x55dc);
            if (level > 0 && xp_ceil == 0) {
                *(int *)((uint8_t *)dm + 0x55d4) = 5000;
                *(int *)((uint8_t *)dm + 0x55d8) = 0;
                *(int *)((uint8_t *)dm + 0x55dc) = 10000;
                LOG("[ce-gate] injected XP data: level=%u xp=5000/10000", level);
            }
        }
    }

    static int log_once = 0;
    if (!log_once) { log_once = 1; LOG("[ce-gate] profile card SHOWN"); }
}

/* Profile data loader */
typedef void (*profile_loader_fn)(void *self, int show);
static profile_loader_fn orig_profile_loader = NULL;
static void hook_profile_loader(void *self, int show) {
    orig_profile_loader(self, show);
    if (show) {
        *(uint32_t *)((uint8_t *)self + 0x21a1c) &= ~0x4;
        *(uint32_t *)((uint8_t *)self + 0x20b04) |= 0x4;
    }
    static int log_once = 0;
    if (!log_once) { log_once = 1; LOG("[ce-gate] profile loader fixup done"); }
}

/* Season handler */
typedef void (*season_handler_fn)(void *self, int param2);
static season_handler_fn orig_season_handler = NULL;
static void hook_season_handler(void *self, int param2) {
    orig_season_handler(self, param2);
    static int log_once = 0;
    if (!log_once) { log_once = 1; LOG("[ce-gate] season handler fired (param2=%d)", param2); }
}

/* Season update */
typedef void (*season_update_fn)(void *self, int param2);
static season_update_fn orig_season_update = NULL;
static void hook_season_update(void *self, int param2) {
    do_sidebar_fix();
    ensure_ranked_kv_written();
    orig_season_update(self, param2);
    static int log_once = 0;
    if (!log_once) { log_once = 1; LOG("[ce-gate] season update fired (param2=%d)", param2); }
}

/* Social panel feature */
typedef void (*social_feat_fn)(void *self);
static social_feat_fn orig_social_feat = NULL;
static void hook_social_feat(void *self) {
    if (CODE_SOCIAL_INNER != 0) {
        typedef void (*inner_fn)(void *);
        inner_fn do_work = (inner_fn)(g_base + CODE_SOCIAL_INNER);
        do_work(self);
    } else {
        orig_social_feat(self);
    }
}

/* Skill tier display */
typedef void (*skill_tier_fn)(void *self);
static skill_tier_fn orig_skill_tier = NULL;
static void hook_skill_tier(void *self) {
    orig_skill_tier(self);
}

/* Data fetch/sync */
typedef void (*data_fetch_fn)(void *self, void *data);
static data_fetch_fn orig_data_fetch = NULL;
static void hook_data_fetch(void *self, void *data) {
    orig_data_fetch(self, data);

    if (CODE_EXTRA_FETCH != 0) {
        void *fetch_target = *(void **)((uint8_t *)self + 0x278);
        if (fetch_target) {
            typedef void (*fetch_fn)(void *);
            fetch_fn do_fetch = (fetch_fn)(g_base + CODE_EXTRA_FETCH);
            do_fetch((void *)((uint8_t *)self + 0x278));
            static int log_once = 0;
            if (!log_once) { log_once = 1; LOG("[ce-gate] extra data fetch at +0x278 ENABLED"); }
        }
    }
}

/* Tab system init */
typedef void (*tab_init_fn)(void *self, void *data);
static tab_init_fn orig_tab_init = NULL;
static void hook_tab_init(void *self, void *data) {
    orig_tab_init(self, data);
    static int log_once = 0;
    if (!log_once) { log_once = 1; LOG("[ce-gate] tab init hook fired"); }
}

/* Market panel tabs */
typedef void (*market_tabs_fn)(void *self);
static market_tabs_fn orig_market_tabs = NULL;
static void hook_market_tabs(void *self) {
    orig_market_tabs(self);
    static int log_once = 0;
    if (!log_once) { log_once = 1; LOG("[ce-gate] market tabs hook fired"); }
}

/* ========== Layer 9: Direct trophy data population ========== */

#define TROPHY_ENTRY_SIZE  0x50
#define MAX_SEASONS        19
#define ENTRIES_PER_SEASON 2
#define TOTAL_TROPHIES     (MAX_SEASONS * ENTRIES_PER_SEASON)
#define TROPHY_VALUE       29

static void ensure_trophy_data(long profile_obj) {
    uint32_t count = *(uint32_t *)(profile_obj + 0x18ef8);
    if (count > 0) return;

    if (CODE_OPERATOR_NEW == 0) {
        LOG("[trophy] SKIP — operator_new offset not yet discovered");
        return;
    }

    typedef void *(*operator_new_fn)(unsigned long);
    operator_new_fn game_new = (operator_new_fn)(g_base + CODE_OPERATOR_NEW);
    void *array = game_new(TOTAL_TROPHIES * TROPHY_ENTRY_SIZE);
    if (!array) {
        LOG("[trophy] operator_new FAILED for trophy array (%d bytes)",
            TOTAL_TROPHIES * TROPHY_ENTRY_SIZE);
        return;
    }
    memset(array, 0, TOTAL_TROPHIES * TROPHY_ENTRY_SIZE);

    for (int s = 0; s < MAX_SEASONS; s++) {
        for (int t = 0; t < ENTRIES_PER_SEASON; t++) {
            int idx = s * ENTRIES_PER_SEASON + t;
            uint8_t *entry = (uint8_t *)array + idx * TROPHY_ENTRY_SIZE;
            *(uint32_t *)(entry + 0x48) = (uint32_t)s;
            *(uint32_t *)(entry + 0x4c) = TROPHY_VALUE;
        }
    }

    *(uint32_t *)(profile_obj + 0x18ef8) = TOTAL_TROPHIES;
    *(uint64_t *)(profile_obj + 0x18f00) = (uint64_t)array;

    LOG("[trophy] POPULATED: %d entries at %p (profile=%p)",
        TOTAL_TROPHIES, array, (void *)profile_obj);
}

/* ========== CE gate call-site bypass ========== */

/* The CE gate at CODE offset 0x8480e0 returns 1 when CE restrictions apply,
 * causing callers to hide UI elements. We cannot safely patch the gate
 * function itself, but we CAN patch individual BL call sites to replace
 * the BL with MOV W0, WZR (= "not CE, show everything").
 *
 * Each entry is the code offset of a BL 0x8480e0 instruction. */
static const uintptr_t ce_gate_call_sites[] = {
    0x863b88,  /* main menu init area */
    0x8640cc,  /* menu setup */
    0xa6e734,  /* profile panel / tab switch */
    0xad2680,  /* home panel — full vs simplified profile */
    0xad6794,  /* login/signup area */
    0xae0920,  /* account registration */
    0xaf783c,  /* profile social inner area */
    0xaf79a8,  /* profile opener (profile_f505c area) */
    0xbbe99c,  /* full profile display */
};
#define CE_GATE_SITE_COUNT (sizeof(ce_gate_call_sites) / sizeof(ce_gate_call_sites[0]))

/* Pre-gate at 0x83d808: always returns 0 (false), called BEFORE the CE gate.
 * This causes early returns that prevent CE gate callers from ever running.
 * We patch these BL sites to MOV W0, #1 so the pre-check passes. */
static const uintptr_t pre_gate_call_sites[] = {
    0x8b9b00,
    0x8c2fd8,
    0x8c38f4,
    0x971e4c,
    0xad2244,
    0xad2670,  /* home panel — right before CE gate at 0xad2680 */
    0xad35c4,
    0xad7734,
    0xad7804,
    0xad78e4,
    0xad7ec8,
    0xaf7990,  /* profile opener area */
    0xb24828,
    0xb3eb08,
};
#define PRE_GATE_SITE_COUNT (sizeof(pre_gate_call_sites) / sizeof(pre_gate_call_sites[0]))

/* ARM64: MOV W0, WZR = 0x2a1f03e0 (return 0) */
#define ARM64_MOV_W0_WZR 0x2a1f03e0u
/* ARM64: ORR W0, WZR, #1 = 0x320003e0 (return 1 / true) */
#define ARM64_MOV_W0_1   0x320003e0u
/* ARM64: ORR W1, WZR, #1 = 0x320003e1 (param1 = 1 / true) */
#define ARM64_MOV_W1_1   0x320003e1u

static void patch_bl_sites(const uintptr_t *sites, int count, uint32_t replacement, const char *tag) {
    int patched = 0;
    for (int i = 0; i < count; i++) {
        uint32_t *site = (uint32_t *)(g_base + sites[i]);
        if (make_writable((uintptr_t)site, sizeof(uint32_t)) != 0) {
            LOG("[%s] FAILED mprotect at 0x%lx", tag, (unsigned long)sites[i]);
            continue;
        }
        uint32_t old = *site;
        *site = replacement;
        patched++;
        LOG("[%s] 0x%lx: 0x%08x -> 0x%08x", tag, (unsigned long)sites[i], old, replacement);
    }
    LOG("[%s] patched %d/%d call sites", tag, patched, count);
}

/* ARM64: NOP = 0xd503201f */
#define ARM64_NOP 0xd503201fu

static void bypass_ce_gate_calls(void) {
    /* CE gate (0x8480e0): returns 1 = CE restricted. Patch to return 0 = unrestricted.
     * Note: pre-gate (0x83d808) returns 0, and callers use tbz (branch if zero)
     * to PROCEED to the CE gate. So pre-gate returning 0 is correct — do NOT patch it. */
    patch_bl_sites(ce_gate_call_sites, (int)CE_GATE_SITE_COUNT, ARM64_MOV_W0_WZR, "ce-gate");

    /* CRITICAL: Second CE gate at 0x83dbe8 is a hardcoded "return 1" stub.
     * It is called from MANY places in the engine, so we CANNOT patch its body.
     * Instead, patch only the 4 specific BL call sites inside the Main Menu
     * constructor (0xad7130) that check this gate before creating sidebar panels.
     *
     * From disassembly of the constructor:
     *   ad7500: bl 0x83dbe8  — before Academy alloc (tbnz skips to ad751c)
     *   ad7548: bl 0x83dbe8  — before Academy subObj registration (tbnz skips to ad7568)
     *   ad75a0: bl 0x83dbe8  — before Academy panel reg at index 2 (tbnz skips to ad75c8)
     *   ad75e4: bl 0x83dbe8  — before Social/Party panel reg (tbnz skips to ad7634)
     *
     * Replace each BL with MOV W0, WZR so the tbnz falls through. */
    static const uintptr_t ctor_ce_gate_sites[] = {
        0xad7500,  /* before Academy panel alloc */
        0xad7548,  /* before Academy subObj cache + registration check */
        0xad75a0,  /* before Academy registration at index 2 */
        0xad75e4,  /* before Social/Party panel registration */
    };
    patch_bl_sites(ctor_ce_gate_sites,
                   (int)(sizeof(ctor_ce_gate_sites) / sizeof(ctor_ce_gate_sites[0])),
                   ARM64_MOV_W0_WZR, "ctor-ce-gate2");

    /* Social-vs-Party branch: at 0xad75c8, the constructor calls 0x82e900.
     *   0xad75c8: bl   0x82e900      ; check flag (ALSO does important state setup)
     *   0xad75cc: tbz  w0, #0, 0xad7604  ; if bit 0 == 0, branch to PARTY
     *                                    ; if bit 0 == 1, fall through to SOCIAL
     *
     * DISABLED: The Party panel constructor (0xa7b840) allocates 0x139650 bytes
     * and initializes matchmaking/XMPP/network subsystems. These crash in CE mode
     * because the backend services don't exist. Keeping Social (stable) for now.
     * To re-enable Party, the Party constructor's network init must be stubbed. */
    /* PARTY PATCH DISABLED — causes crash in CE mode */

    /* Nav refresh (0xb78f88): vtable-dispatched, no fptr.
     * The function calls setVisible(button, 0) to hide 5 secondary nav buttons.
     * Each call is: LDR X0, [X19, #off]; MOV W1, WZR; BL setVisible.
     * We patch MOV W1, WZR -> ORR W1, WZR, #1 to show instead of hide.
     *
     * Button offsets and their hide-call sites:
     *   self+0xe8 (news)        -> 0xb79454
     *   self+0xf0 (tiv)         -> 0xb7920c
     *   self+0xf8 (leaderboard) -> 0xb79334
     *   self+0x100 (academy)    -> 0xb793c4
     *   self+0x108 (settings)   -> 0xb792a4
     */
    /* Patch 1: NOP the AND that hides the secondary nav container (self+0xc0).
     * At 0xb78fe4: AND w9, w9, #0xfffffffb clears visibility bit of the container. */
    uint32_t *container_hide = (uint32_t *)(g_base + 0xb78fe4);
    if (make_writable((uintptr_t)container_hide, sizeof(uint32_t)) == 0) {
        LOG("[nav-fix] NOP container hide: 0x%08x -> NOP", *container_hide);
        *container_hide = ARM64_NOP;
    }

    /* iOS parity: only the leaderboard button is re-enabled in the secondary
     * nav bar. The other buttons (news, tiv, academy, settings) are CE-gated
     * and their textures are never loaded, so forcing them visible renders
     * 4 white squares. Leaving them hidden matches iOS hook_refresh which
     * only toggles the leaderboard button's visibility bit. */

    /* Leaderboard (self+0xf8): NOP both the MOV W1,WZR and the BL setVisible
     * so the button keeps its default visible state from creation. */
    uint32_t *lb_mov = (uint32_t *)(g_base + 0xb79334);
    uint32_t *lb_bl  = (uint32_t *)(g_base + 0xb79338);
    if (make_writable((uintptr_t)lb_mov, 8) == 0) {
        LOG("[nav-fix] leaderboard: NOP setVisible call (0x%08x 0x%08x -> NOP NOP)",
            *lb_mov, *lb_bl);
        *lb_mov = ARM64_NOP;
        *lb_bl  = ARM64_NOP;
    }
}

/* ========== Patch table for parser replacements ========== */

typedef struct {
    uintptr_t offset;
    void     *replacement;
    const char *name;
} fptr_patch;

static fptr_patch parser_patches[] = {
    { FPTR_FEATURES_ENABLED,    features_always_on,      "featuresEnabled" },
    { FPTR_FREE_TAB_VISIBILITY, free_tab_always_visible, "freeTabVisibilityExperiment" },
    { FPTR_GOLDEN_ARROW,        golden_arrow_on,         "goldenArrowPromptExperiment" },
    { FPTR_TUTORIAL_POPUP,      tutorial_popup_on,        "tutorialCompletionPopupExperiment" },
};

/* ========== Hook installer macro ========== */

#define HOOK_FPTR(offset, orig_var, hook_fn, name) do { \
    if ((offset) != 0) { \
        void **_fp = (void **)(g_base + (offset)); \
        make_writable((uintptr_t)_fp, sizeof(void *)); \
        (orig_var) = (typeof(orig_var))*_fp; \
        *_fp = (void *)(hook_fn); \
        LOG("[hook] installed %s at g_base+0x%lx", name, (unsigned long)(offset)); \
    } else { \
        LOG("[hook] SKIP %s — offset not yet discovered", name); \
    } \
} while(0)

/* ========== Constructor ========== */

__attribute__((constructor))
static void vg_unlock_init(void) {
    LOG("loaded (v2 — Android port of vg_unlock v14)");

#if !VG_ENABLE_PARSER_PATCHES && !VG_ENABLE_PROFILE_REDIRECTS && !VG_ENABLE_GUEST_BYPASS && !VG_ENABLE_EXPERIMENTAL_HOOKS
    LOG("control build detected — all Android patch groups disabled; skipping runtime init");
    return;
#endif

    /* Try the loader-shim name first (libGameKindred_real.so), then fall
       back to the original name for the legacy DT_NEEDED injection path. */
    g_base = find_lib_base("libGameKindred_real.so");
    if (!g_base) {
        g_base = find_lib_base("libGameKindred.so");
    }
    if (!g_base) {
        LOG("FATAL: could not find libGameKindred");
        return;
    }

    LOG("config: parsers=%d profile_redirects=%d guest_bypass=%d experimental=%d",
        VG_ENABLE_PARSER_PATCHES,
        VG_ENABLE_PROFILE_REDIRECTS,
        VG_ENABLE_GUEST_BYPASS,
        VG_ENABLE_EXPERIMENTAL_HOOKS);

#if VG_ENABLE_PARSER_PATCHES
    /* Layer 1: patch constants parsers */
    int n = sizeof(parser_patches) / sizeof(parser_patches[0]);
    for (int i = 0; i < n; i++) {
        fptr_patch *p = &parser_patches[i];
        if (p->offset == 0) {
            LOG("SKIP parser %s — offset not yet discovered", p->name);
            continue;
        }
        void **fptr = (void **)(g_base + p->offset);
        make_writable((uintptr_t)fptr, sizeof(void *));
        void *old = *fptr;
        *fptr = p->replacement;
        LOG("parser %s: %p -> %p", p->name, old, p->replacement);
    }

    /* Bypass CE gate at individual call sites so parser flags take effect */
    bypass_ce_gate_calls();
#else
    LOG("parser patches disabled");
#endif

#if VG_ENABLE_EXPERIMENTAL_HOOKS
    /* Layer 2: hook nav bar refresh */
    if (FPTR_NAV_REFRESH != 0) {
        void **refresh_fptr = (void **)(g_base + FPTR_NAV_REFRESH);
        make_writable((uintptr_t)refresh_fptr, sizeof(void *));
        orig_refresh = (refresh_fn)*refresh_fptr;
        LOG("refresh fptr at %p, current offset=0x%lx",
            refresh_fptr, (unsigned long)((uintptr_t)orig_refresh - g_base));
        *refresh_fptr = (void *)hook_refresh;
        LOG("refresh hook installed");
    } else {
        LOG("SKIP nav refresh — offset not yet discovered");
    }

    /* Layer 3: hook setTabVisible */
    HOOK_FPTR(FPTR_SET_TAB_VISIBLE, orig_set_tab_visible, hook_set_tab_visible, "setTabVisible");

    /* Layer 4a: hook trophy sub-panel refresh */
    HOOK_FPTR(FPTR_TROPHY_PANEL, orig_trophy_panel, hook_trophy_panel, "trophy_panel");

    /* Layer 4b: hook profile data handler */
    HOOK_FPTR(FPTR_PROFILE_DATA, orig_profile_data, hook_profile_data, "profile_data");

    /* Layer 4c: hook profile layout refresh */
    HOOK_FPTR(FPTR_PROFILE_LAYOUT, orig_profile_layout, hook_profile_layout, "profile_layout");
#else
    LOG("experimental hooks disabled — skipping layout-dependent Layers 2-4 and 8");
#endif

#if VG_ENABLE_PROFILE_REDIRECTS
    /* Layer 5: hook profile openers.
     * Only f505c (0xaf7980) is the confirmed avatar-tap dispatch that loads
     * "homepanel_profile_avatar". eeb60 (0xaf7920) and fa7b0 (0xaf7950) are
     * adjacent functions that get called during Android main-menu init; the
     * Android call graph differs from iOS so the iOS-mapped fptrs don't
     * point at the same behavior. fa7b0 firing at init-time deadlocks the
     * render thread on the "connecting" screen because open_full_profile
     * needs UI state that doesn't exist yet. CE gate call-site patching
     * already routes avatar taps to the full profile branch inside f505c,
     * so the redirect is now a safety net rather than the main mechanism. */
    patch_fptr(FPTR_PROFILE_F505C, (void *)hook_profile_f505c, "profile_f505c");
#else
    LOG("profile redirects disabled");
#endif

#if VG_ENABLE_GUEST_BYPASS
    /* Layer 7: guest gate bypass */
    patch_fptr(FPTR_GUEST_VTABLE12, (void *)stub_has_account, "guest_vtable12");
#else
    LOG("guest bypass disabled");
#endif

#if VG_ENABLE_EXPERIMENTAL_HOOKS
    /* Layer 8: CE gate caller hooks */
    HOOK_FPTR(FPTR_PROFILE_RANKED, orig_profile_ranked, hook_profile_ranked, "profile_ranked");
    HOOK_FPTR(FPTR_PROFILE_BODY,   orig_profile_body,   hook_profile_body,   "profile_body");
    HOOK_FPTR(FPTR_PROFILE_LOADER, orig_profile_loader, hook_profile_loader, "profile_loader");
    HOOK_FPTR(FPTR_SEASON_HANDLER, orig_season_handler, hook_season_handler, "season_handler");
    HOOK_FPTR(FPTR_SEASON_UPDATE,  orig_season_update,  hook_season_update,  "season_update");
    HOOK_FPTR(FPTR_SOCIAL_FEAT,    orig_social_feat,    hook_social_feat,    "social_feat");
    HOOK_FPTR(FPTR_SKILL_TIER,     orig_skill_tier,     hook_skill_tier,     "skill_tier");
    HOOK_FPTR(FPTR_DATA_FETCH,     orig_data_fetch,     hook_data_fetch,     "data_fetch");
    HOOK_FPTR(FPTR_TAB_INIT,       orig_tab_init,       hook_tab_init,       "tab_init");
    HOOK_FPTR(FPTR_MARKET_TABS,    orig_market_tabs,    hook_market_tabs,    "market_tabs");
#endif

#if VG_ENABLE_EXPERIMENTAL_HOOKS
    LOG("init complete — safe and experimental hooks installed");
#else
    LOG("init complete — safe hooks installed (experimental hooks disabled)");
#endif
}
