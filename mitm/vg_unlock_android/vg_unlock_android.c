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
#include <sys/mman.h>
#include <android/log.h>

#define TAG "vg_unlock"
#define LOG(fmt, ...) __android_log_print(ANDROID_LOG_INFO, TAG, fmt, ##__VA_ARGS__)

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
 * Some shift predictions were correct (real prologues), some were stubs. */
#define FPTR_PROFILE_RANKED            0x26d5630  /* [MEDIUM] func 0xa02b60 — real prologue, accesses +0x370 */
#define FPTR_PROFILE_BODY              0x0  /* NEEDS_RE: shift -> thunk. Candidates: fptr 0x26d61e0 (func 0x9c3e68) or 0x26de668 (func 0xa24390) — both access +0xb04 */
#define FPTR_PROFILE_LOADER            0x0  /* NEEDS_RE: shift -> thunk (0xe13d98) */
#define FPTR_SEASON_HANDLER            0x0  /* NEEDS_RE: shift -> tiny func (0xe13e54) */
#define FPTR_SEASON_UPDATE             0x26d8080  /* [MEDIUM] func 0xe01c54 — real prologue */
#define FPTR_SOCIAL_FEAT               0x26d1440  /* [MEDIUM] func 0x99f5e0 — real prologue */
#define FPTR_SKILL_TIER                0x26da510  /* [MEDIUM] func 0xe020b4 — real prologue */
#define FPTR_DATA_FETCH                0x0  /* NEEDS_RE: shift -> stub (0x7fcca4) */
#define FPTR_TAB_INIT                  0x26c97b0  /* [MEDIUM] func 0xe02408 — real prologue */
#define FPTR_MARKET_TABS               0x0  /* NEEDS_RE: shift -> "return -1" (0xe13f50) */

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

/* ========== Utility: find library base via /proc/self/maps ========== */

static uintptr_t find_lib_base(const char *lib_name) {
    FILE *f = fopen("/proc/self/maps", "r");
    if (!f) {
        LOG("FATAL: cannot open /proc/self/maps");
        return 0;
    }

    char line[512];
    while (fgets(line, sizeof(line), f)) {
        if (strstr(line, lib_name) && strstr(line, "r-xp")) {
            uintptr_t base = 0;
            sscanf(line, "%lx-", &base);
            fclose(f);
            LOG("found %s at base %p", lib_name, (void *)base);
            return base;
        }
    }

    fclose(f);
    LOG("FATAL: %s not found in /proc/self/maps", lib_name);
    return 0;
}

/* ========== Utility: mprotect helper for RELRO pages ========== */

static int make_writable(uintptr_t addr, size_t len) {
    long page_size = sysconf(_SC_PAGESIZE);
    uintptr_t page_start = addr & ~(page_size - 1);
    size_t total = (addr - page_start) + len;
    total = (total + page_size - 1) & ~(page_size - 1);

    int ret = mprotect((void *)page_start, total, PROT_READ | PROT_WRITE);
    if (ret != 0) {
        LOG("mprotect FAILED at %p (page %p, size 0x%zx)", (void *)addr, (void *)page_start, total);
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

static void features_always_on(void *output, void *json_dict) {
    uint8_t *s = (uint8_t *)output;
    s[0x08] = 1;  /* leaderboards */
    s[0x09] = 1;  /* leaderboardsAlwaysQueryOfflineFriends */
    s[0x0a] = 1;  /* liveEvents */
    s[0x0b] = 0;  /* hideBattlepassCallout */
    s[0x0c] = 1;  /* inGameChat */
    LOG("[flags] featuresEnabled: all on");
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

    /* Layer 9b: Force ranked data into key-value store */
    static int ranked_kv_done = 0;
    if (!ranked_kv_done && CODE_KV_WRITE != 0) {
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

                            void *academySubObj = (void *)((uint8_t *)academy + 0x2c88);
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

                /* Register PARTY panel at index 3 */
                void *marketPanel = *(void **)((uint8_t *)menuObj + 0xe8);
                void *existingParty = *(void **)((uint8_t *)menuObj + 0xc8);
                if (marketPanel && !existingParty) {
                    void *partySubObj = (void *)((uint8_t *)marketPanel + 0x2c50);
                    *(void **)((uint8_t *)menuObj + 0xc8) = partySubObj;
                    LOG("[sidebar] registering PARTY panel at index 3: subObj=%p", partySubObj);
                    reg(sidebarCtrl, partySubObj, 3);
                    LOG("[sidebar] PARTY registered!");
                } else if (existingParty) {
                    LOG("[sidebar] PARTY already registered (c8=%p)", existingParty);
                } else {
                    LOG("[sidebar] WARNING: no market panel at menuObj+0xe8!");
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

    if (data_mgr) {
        uint8_t *dirty = (uint8_t *)((uintptr_t)data_mgr + 0x29);
        LOG("[profile] dirty_flag=%d, forcing to 1", *dirty);
        *dirty = 1;
    }
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
    orig_profile_body(self, data);

    *(uint32_t *)((uint8_t *)self + 0x20b04) |= 0x4;
    *(uint32_t *)((uint8_t *)self + 0x216d4) |= 0x4;
    *(uint8_t *)((uint8_t *)self + 0x25f50) = 0;

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
    LOG("loaded (v1 — Android port of vg_unlock v14)");

    g_base = find_lib_base("libGameKindred.so");
    if (!g_base) {
        LOG("FATAL: could not find libGameKindred.so");
        return;
    }

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

    /* Layer 5: hook profile openers */
    patch_fptr(FPTR_PROFILE_EEB60, (void *)hook_profile_eeb60, "profile_eeb60");
    patch_fptr(FPTR_PROFILE_F505C, (void *)hook_profile_f505c, "profile_f505c");
    patch_fptr(FPTR_PROFILE_FA7B0, (void *)hook_profile_fa7b0, "profile_fa7b0");

    /* Layer 7: guest gate bypass */
    patch_fptr(FPTR_GUEST_VTABLE12, (void *)stub_has_account, "guest_vtable12");

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

    LOG("init complete — all hooks with discovered offsets installed");
}
