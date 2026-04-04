/*
 * vg_unlock — runtime patches to re-enable disabled Vainglory CE features.
 *
 * Replaces multiple parser function pointers in __DATA.__const so the engine
 * always sees features, tabs, and experiments as enabled.
 *
 * The game's constants parser table lives in __DATA.__const. Each row is 0x30
 * bytes with the parser function pointer at row+0x10. The parser signature is:
 *   void parser(void *output_struct, void *json_dict)
 * and it writes parsed booleans/values into the output struct.
 *
 * We replace parsers with stubs that force all flags to their "enabled" state.
 *
 * NOTE: __TEXT patching via vm_protect does NOT work on non-jailbroken iOS,
 * so we only do the __DATA function pointer replacements.
 */

#include <mach-o/dyld.h>
#include <mach/mach.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

#import <Foundation/Foundation.h>

#define LOG(fmt, ...) NSLog(@"[vg_unlock] " fmt, ##__VA_ARGS__)

/* ---------- Replacement parsers ---------- */

/*
 * featuresEnabled parser (original at VA 0x1001329b0)
 * Struct offsets (5 bools):
 *   +0x08: leaderboards
 *   +0x09: leaderboardsAlwaysQueryOfflineFriends
 *   +0x0a: liveEvents
 *   +0x0b: hideBattlepassCallout
 *   +0x0c: inGameChat
 */
static void features_always_on(void *output, void *json_dict) {
    uint8_t *s = (uint8_t *)output;
    fprintf(stderr, "[vg_unlock] featuresEnabled parser called (output=%p, json=%p)\n", output, json_dict);
    fprintf(stderr, "[vg_unlock]   BEFORE: +08=%d +09=%d +0a=%d +0b=%d +0c=%d\n",
            s[0x08], s[0x09], s[0x0a], s[0x0b], s[0x0c]);
    s[0x08] = 1;  /* leaderboards */
    s[0x09] = 1;  /* leaderboardsAlwaysQueryOfflineFriends */
    s[0x0a] = 1;  /* liveEvents */
    s[0x0b] = 0;  /* hideBattlepassCallout — keep off */
    s[0x0c] = 1;  /* inGameChat */
    fprintf(stderr, "[vg_unlock]   AFTER:  +08=%d +09=%d +0a=%d +0b=%d +0c=%d\n",
            s[0x08], s[0x09], s[0x0a], s[0x0b], s[0x0c]);
}

/*
 * freeTabVisibilityExperiment parser (original at VA 0x100132444)
 * Controls which market/nav tabs are visible.
 * Struct offsets (5 bools):
 *   +0x08: showForThirdParty
 *   +0x09: showForNotThirdParty
 *   +0x0a: showForDesktop
 *   +0x0b: showForNotDesktop
 *   +0x0c: showOfferwallButton
 */
static void free_tab_always_visible(void *output, void *json_dict) {
    uint8_t *s = (uint8_t *)output;
    fprintf(stderr, "[vg_unlock] freeTabVisibility parser called (output=%p, json=%p)\n", output, json_dict);
    fprintf(stderr, "[vg_unlock]   BEFORE: +08=%d +09=%d +0a=%d +0b=%d +0c=%d\n",
            s[0x08], s[0x09], s[0x0a], s[0x0b], s[0x0c]);
    s[0x08] = 1;  /* showForThirdParty */
    s[0x09] = 1;  /* showForNotThirdParty */
    s[0x0a] = 1;  /* showForDesktop */
    s[0x0b] = 1;  /* showForNotDesktop */
    s[0x0c] = 1;  /* showOfferwallButton */
    fprintf(stderr, "[vg_unlock]   AFTER:  +08=%d +09=%d +0a=%d +0b=%d +0c=%d\n",
            s[0x08], s[0x09], s[0x0a], s[0x0b], s[0x0c]);
}

/*
 * goldenArrowPromptExperiment parser (original at VA 0x10013279c)
 * Struct offsets:
 *   +0x08: showPopup (bool)
 */
static void golden_arrow_on(void *output, void *json_dict) {
    uint8_t *s = (uint8_t *)output;
    fprintf(stderr, "[vg_unlock] goldenArrowPrompt parser called (output=%p)\n", output);
    s[0x08] = 1;  /* showPopup */
}

/*
 * tutorialCompletionPopupExperiment parser (original at VA 0x1001326e8)
 * Struct offsets:
 *   +0x08: showPopup (bool)
 */
static void tutorial_popup_on(void *output, void *json_dict) {
    uint8_t *s = (uint8_t *)output;
    fprintf(stderr, "[vg_unlock] tutorialCompletionPopup parser called (output=%p)\n", output);
    s[0x08] = 1;
}

/*
 * profileTrophyRefresh — hook the profile layout refresh (thunk_FUN_1002654ec).
 *
 * The original function at VA 0x1002654e8 lays out the profile screen but
 * never sets the "trophy section enabled" flag at +0x18f21 on the profile
 * widget. The trophy renderer FUN_100265bd4 checks this flag and skips
 * rendering when it's 0.
 *
 * Hook: call original, then force the flag so the trophy section draws.
 */
static void (*orig_profile_refresh)(long) = NULL;

static void hook_profile_refresh(long param_1) {
    if (orig_profile_refresh) {
        orig_profile_refresh(param_1);
    }
    /* Force trophy section visible */
    *(uint8_t *)(param_1 + 0x18f21) = 1;
}

/*
 * navBarRefresh — hook the home panel nav bar refresh (FUN_1002a8f20).
 *
 * The original unconditionally clears bit 2 of the leaderboard button's
 * visibility flags. We call the original then re-set the bit.
 *
 * The leaderboard button widget is at param_1 + 0xf8. Its visibility
 * flags are at widget + 0x84. Bit 2 (0x4) = visible.
 */
static void (*orig_nav_bar_refresh)(long) = NULL;

static void hook_nav_bar_refresh(long param_1) {
    if (orig_nav_bar_refresh) {
        orig_nav_bar_refresh(param_1);
    }
    /* Re-show leaderboard button (secondary_nav_leaderboards at +0xf8) */
    long lb_widget = *(long *)(param_1 + 0xf8);
    if (lb_widget) {
        *(uint32_t *)(lb_widget + 0x84) |= 0x4;
    }
}

/* ---------- Patch table ---------- */

struct fptr_patch {
    uintptr_t offset;      /* offset from Mach-O base to the function pointer */
    void     *replacement; /* our replacement function */
    uintptr_t expected;    /* expected original value (offset from base), 0 = skip check */
    const char *name;
    void   **save_orig;    /* if non-NULL, save the original pointer here before replacing */
};

static struct fptr_patch patches[] = {
    /* Feature flag parsers — force all flags to enabled */
    { 0x0145a8e8, features_always_on,      0x001329b0, "featuresEnabled",                  NULL },
    { 0x0145a7f8, free_tab_always_visible, 0x00132444, "freeTabVisibilityExperiment",      NULL },
    { 0x0145a858, golden_arrow_on,         0x0013279c, "goldenArrowPromptExperiment",       NULL },
    { 0x0145a828, tutorial_popup_on,        0x001326e8, "tutorialCompletionPopupExperiment", NULL },
    /* UI visibility hooks — call original then undo hardcoded hides */
    { 0x014829e8, hook_nav_bar_refresh,    0x002a8f20, "navBarRefresh (leaderboard btn)",   (void **)&orig_nav_bar_refresh },
    { 0x0147be00, hook_profile_refresh,    0x002654e8, "profileRefresh (trophy section)",   (void **)&orig_profile_refresh },
};

#define NUM_PATCHES (sizeof(patches) / sizeof(patches[0]))

/* ---------- Find main binary base ---------- */

static uintptr_t find_main_binary_base(void) {
    uint32_t count = _dyld_image_count();
    for (uint32_t i = 0; i < count; i++) {
        const char *name = _dyld_get_image_name(i);
        if (name && strstr(name, "GameKindred")) {
            uintptr_t base = (uintptr_t)_dyld_get_image_header(i);
            fprintf(stderr, "[vg_unlock] found GameKindred at image %u: 0x%lx (%s)\n",
                    i, (unsigned long)base, name);
            return base;
        }
    }
    /* Fallback to image 0 */
    uintptr_t base = (uintptr_t)_dyld_get_image_header(0);
    fprintf(stderr, "[vg_unlock] fallback to image 0: 0x%lx\n", (unsigned long)base);
    return base;
}

/* ---------- Constructor ---------- */

__attribute__((constructor))
static void vg_unlock_init(void) {
    fprintf(stderr, "[vg_unlock] loaded (v3 — parsers + UI visibility hooks)\n");

    uintptr_t base = find_main_binary_base();
    if (!base) {
        fprintf(stderr, "[vg_unlock] FATAL: could not find main binary\n");
        return;
    }

    int applied = 0;
    for (int i = 0; i < (int)NUM_PATCHES; i++) {
        struct fptr_patch *p = &patches[i];
        void **fptr = (void **)(base + p->offset);
        void *old = *fptr;
        uintptr_t actual_offset = (uintptr_t)old - base;

        if (p->expected && actual_offset != p->expected) {
            fprintf(stderr, "[vg_unlock] WARNING: %s fptr unexpected (got 0x%lx, want 0x%lx) — patching anyway\n",
                    p->name, (unsigned long)actual_offset, (unsigned long)p->expected);
        }

        /* Save original pointer for hooks that need to call through */
        if (p->save_orig) {
            *(p->save_orig) = old;
            fprintf(stderr, "[vg_unlock] %s: saved original %p\n", p->name, old);
        }

        *fptr = p->replacement;
        fprintf(stderr, "[vg_unlock] %s: replaced %p -> %p\n",
                p->name, old, p->replacement);
        applied++;
    }

    fprintf(stderr, "[vg_unlock] init complete — %d/%d parsers patched\n",
            applied, (int)NUM_PATCHES);
}
