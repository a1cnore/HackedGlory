# Dylib Patch Cross-Reference

Cross-reference between vg_unlock.m patches and extracted UI functions.

## Layer 2: Nav Bar Refresh Hook

### `FUN_1002a8f20`
- **Description**: nav bar refresh — hides leaderboard button
- **UI File**: `ui/nav_bar.c`
- **Status**: EXTRACTED
- **Fptr**: `__DATA+0x14829e8`
- **Object Layout**:
  - `+0xe8`: tiv button
  - `+0xf0`: news button
  - `+0xf8`: leaderboards button (hidden by original)
  - `+0x100`: academy button
  - `+0x108`: settings button
- **Notes**: Clears bit 2 of leaderboard button flags at [button+0x84]. Dylib re-sets bit after call.

## Layer 3: setTabVisible Hook (Sidebar Tab Hiding)

### `FUN_1001e5084`
- **Description**: sidebar tab init loop — sets all 7 tabs visible initially
- **UI File**: `ui/tab_system.c`
- **Status**: NOT IN REGISTRY
- **Notes**: Referenced in Layer 3 comment. All tabs start visible, then code hides PEOPLE tab later.

### `FUN_1001e6c4c`
- **Description**: setTabVisible — sets bit 2 of [tab_panel+0x2c2c]
- **UI File**: `ui/tab_system.c`
- **Status**: EXTRACTED
- **Fptr**: `__DATA+0x1469fb8`
- **Notes**: Signature: void setTabVisible(void *tab_panel, int visible). Controls sidebar button visibility.

## Layer 4: Trophy Panel Visibility

### `FUN_100260244`
- **Description**: trophy sub-panel constructor/refresh
- **UI File**: `ui/trophies/trophy_panel.c`
- **Status**: EXTRACTED
- **Fptr**: `__DATA+0x147b868`
- **Object Layout**:
  - `+0x6a4`: trophy panel 1 visibility flags
  - `+0xc94`: trophy panel 2 visibility flags
- **Notes**: Unconditionally clears bit 2 on both trophy scroll panels. Thunk at 0x100260494.

### `FUN_1002654ec`
- **Description**: profile layout refresh — forces +0x18f21 before layout
- **UI File**: `ui/trophies/trophy_panel.c`
- **Status**: EXTRACTED
- **Fptr**: `__DATA+0x147be00`
- **Notes**: Thunk for FUN_1002654e8. Ensures trophy renderer sees enabled flag.

### `FUN_100265dbc`
- **Description**: profile data handler — forces trophy enable flags
- **UI File**: `ui/trophies/trophy_panel.c`
- **Status**: EXTRACTED
- **Fptr**: `__DATA+0x147bec8`
- **Object Layout**:
  - `+0x18ef8`: trophy count (uint32)
  - `+0x18f00`: trophy array pointer (long*)
  - `+0x18f20`: own profile flag
  - `+0x18f21`: trophy data enabled flag
- **Notes**: Also calls ensure_trophy_data to populate trophy array if empty.

## Layer 5: Profile Panel Redirects

### `FUN_1001eeb60`
- **Description**: simplified profile popup — creates 0x4458-byte popup via FUN_100220a38
- **UI File**: `ui/profile/profile_panel.c`
- **Status**: EXTRACTED
- **Fptr**: `__DATA+0x146b2d0`
- **Notes**: One of 3 profile openers. Redirected to FUN_100221f98 by dylib.

### `FUN_1001f505c`
- **Description**: guest-gated profile opener — calls FUN_100220d08 or FUN_100221f98
- **UI File**: `ui/profile/profile_panel.c`
- **Status**: EXTRACTED
- **Fptr**: `__DATA+0x146cf98`
- **Notes**: Has guest gate. Calls different profile panel based on guest status.

### `FUN_1001fa7b0`
- **Description**: simplified profile card — always creates simplified popup
- **UI File**: `ui/profile/profile_panel.c`
- **Status**: EXTRACTED
- **Fptr**: `__DATA+0x146e788`
- **Notes**: Third profile opener. Redirected to full profile by dylib.

### `FUN_100220a38`
- **Description**: popup creation — creates 0x4458-byte simplified popup object
- **UI File**: `ui/profile/profile_panel.c`
- **Status**: EXTRACTED
- **Notes**: Referenced in Layer 5 comment.

### `FUN_100220d08`
- **Description**: profile display variant — called by guest-gated opener
- **UI File**: `ui/profile/profile_panel.c`
- **Status**: EXTRACTED
- **Notes**: Alternative to FUN_100221f98 when guest.

### `FUN_100221f98`
- **Description**: full profile panel — creates 0x28848-byte profile panel
- **UI File**: `ui/profile/profile_panel.c`
- **Status**: EXTRACTED
- **Notes**: The target all profile openers are redirected to. Called with 'homepanel_profile_avatar'.

## Layer 6: Sidebar Panel Registration

### `FUN_1001f59e8`
- **Description**: BAG constructor — creates 6 tabs always, 4 more when gate=0
- **UI File**: `ui/bag/bag_constructor.c`
- **Status**: EXTRACTED
- **Notes**: CE-gated tabs include TROPHIES. Tab registration via FUN_1002afb68.

### `FUN_1001f5d50`
- **Description**: array add for tab sub-objects
- **UI File**: `ui/bag/bag_constructor.c`
- **Status**: EXTRACTED
- **Notes**: arr_add(tabArray, &subObj) — adds tab to BAG's tab array at wrapper+0x48.

### `FUN_1001fc9c4`
- **Description**: register sidebar panel — FUN_1001fc9c4(sidebarCtrl, panelSubObj, index)
- **UI File**: `ui/sidebar.c`
- **Status**: NOT IN REGISTRY
- **Notes**: Called to register HOME(0), BAG(1), ACADEMY(2), PARTY(3), SOCIAL(4) with sidebar.

### `FUN_1001fd570`
- **Description**: main menu constructor — creates panels, registers with sidebar
- **UI File**: `ui/main_menu.c`
- **Status**: EXTRACTED
- **Object Layout**:
  - `+0x70`: sidebar controller
  - `+0xb0`: HOME panel ref (registered)
  - `+0xb8`: BAG panel ref (registered)
  - `+0xc0`: ACADEMY panel ref (CE-gated, index 2)
  - `+0xc8`: PARTY panel ref (index 3)
  - `+0xd0`: SOCIAL panel ref (CE-gated, index 4)
  - `+0xe0`: HOME panel object
  - `+0xe8`: MARKET panel object (size 0x2cf68, contains PARTY at +0x2c50)
  - `+0xf0`: small SOCIAL panel object (CE-gated, created by thunk_FUN_10020cfb8)
  - `+0x100`: ACADEMY panel object (CE-gated, size 0x9ca0)
  - `+0x108`: BAG panel wrapper (size 0x60, +0x48=tab array, +0x8=container)
- **Notes**: Root of entire sidebar/panel hierarchy. DAT_101dc2920 = root parent, *(parent+0x80) = menuObj.

### `FUN_10020cfb8`
- **Description**: small social panel constructor (thunked)
- **UI File**: `ui/social/social_panel.c`
- **Status**: EXTRACTED
- **Notes**: Creates social panel stored at menuObj+0xf0. CE-gated (never registered in CE).

### `FUN_10021844c`
- **Description**: trophy tab constructor — operator_new(0x50)
- **UI File**: `ui/trophies/trophy_panel.c`
- **Status**: EXTRACTED
- **Object Layout**:
  - `+0x28`: subObj (tab sub-object)
  - `vt[2](self)`: content object getter
  - `vt[3](self)`: section name getter
  - `vt[4](self)`: title getter (calls FUN_1004e0150)
- **Notes**: Created by dylib for BAG panel. SubObj at tab+0x28 used for registration.

### `FUN_100242e6c`
- **Description**: academy panel constructor (thunked)
- **UI File**: `ui/academy/academy_constructor.c`
- **Status**: EXTRACTED
- **Notes**: Size 0x9ca0. Never created in CE because FUN_100131560 returns 1. +0x2c88 = subobject for sidebar registration.

### `FUN_1002afb68`
- **Description**: tab registration — FUN_1002afb68(container, title, 0, icon, section)
- **UI File**: `ui/tab_system.c`
- **Status**: EXTRACTED
- **Notes**: Registers a tab with its container. Called for BAG trophies tab.

## Layer 7: Guest Gate Bypass

### `FUN_10014e20c`
- **Description**: isGuest check — returns 1 if guest, 0 if account
- **UI File**: `ui/gates/ce_gate.c`
- **Status**: EXTRACTED
- **Notes**: Derived from FUN_1004ef1b4() which calls vtable[12](). Result ^ 1 = isGuest.

### `FUN_1004fe5ec`
- **Description**: session manager has_account — vtable[12]
- **UI File**: `ui/gates/ce_gate.c`
- **Status**: EXTRACTED
- **Fptr**: `__DATA+0x149e4a0`
- **Object Layout**:
  - `+0x2bd0`: registered account string
- **Notes**: Checks if account string at self+0x2bd0 is empty. Returns 0 (guest) or 1 (has account). Vtable at __DATA.__const+0x149e440, slot 12 at offset 0x60.

## Layer 8: CE Gate Caller Hooks

### `FUN_100131560`
- **Description**: CE master gate — hardcoded 'return 1'
- **UI File**: `ui/gates/ce_gate.c`
- **Status**: EXTRACTED
- **Notes**: 116 callers identified. Cannot be patched (read-only __TEXT). All callers treat return 1 as CE mode. 197 references across 25 function files.

### `FUN_100168220`
- **Description**: data fetch/sync with CE gate
- **UI File**: `ui/gates/ce_gate.c`
- **Status**: EXTRACTED
- **Fptr**: `__DATA+0x145c170`
- **Object Layout**:
  - `+0x278`: fetch target object
  - `+0x18`: primary fetch target
- **Notes**: Gate blocks additional data fetch at +0x278. Inner fetch: FUN_100169cec.

### `FUN_1001e115c`
- **Description**: tab system init
- **UI File**: `ui/tab_system.c`
- **Status**: EXTRACTED
- **Fptr**: `__DATA+0x1469478`
- **Notes**: Original sets empty string when gate=1.

### `FUN_100209ff0`
- **Description**: social panel inner function — actual work
- **UI File**: `ui/social/social_panel.c`
- **Status**: EXTRACTED
- **Notes**: Called directly by dylib hook bypassing gate in FUN_10020a500.

### `FUN_10020a500`
- **Description**: social panel feature — returns early when gate=1
- **UI File**: `ui/social/social_panel.c`
- **Status**: EXTRACTED
- **Fptr**: `__DATA+0x1471108`
- **Notes**: Original returns early. Dylib calls inner function FUN_100209ff0 directly.

### `FUN_100222878`
- **Description**: profile panel ranked tabs
- **UI File**: `ui/profile/profile_panel.c`
- **Status**: EXTRACTED
- **Fptr**: `__DATA+0x14752f8`
- **Object Layout**:
  - `+0x2853c`: 5v5 ranked tab visibility
  - `+0x2866c`: 3v3 ranked tab visibility
  - `+0x2879c`: stats tab visibility
  - `+0x2cea8`: ranked data display flag
  - `+0x2ceab`: has progression data flag
  - `+0x2ce98`: ranked mode count
  - `+0x2cde0`: ranked mode data source count
- **Notes**: Dylib forces all ranked tab visibility bits and display flags after original runs.

### `FUN_100227fb8`
- **Description**: profile body setup — skipped for guests by gate
- **UI File**: `ui/profile/profile_panel.c`
- **Status**: EXTRACTED
- **Notes**: Called as FUN_100227fb8(self+0x1d0, 1) by profile body hook.

### `FUN_10023bd9c`
- **Description**: season/trophy panel handler
- **UI File**: `ui/season/season_panel.c`
- **Status**: EXTRACTED
- **Fptr**: `__DATA+0x1477d38`
- **Notes**: Calls setTabVisible, registers season trophy tooltips, handles guild/team trophy display.

### `FUN_10023df24`
- **Description**: season display update
- **UI File**: `ui/season/season_panel.c`
- **Status**: EXTRACTED
- **Fptr**: `__DATA+0x1477d48`

### `FUN_10024e4a4`
- **Description**: market panel tabs
- **UI File**: `ui/market/market_tabs.c`
- **Status**: EXTRACTED
- **Fptr**: `__DATA+0x147a120`
- **Object Layout**:
  - `+0x2cf20+0x10`: additional market tab
  - `+0xda10`: market filter
- **Notes**: Gate blocks additional market tab and filter.

### `FUN_10025129c`
- **Description**: skill tier display
- **UI File**: `ui/progression/progression_display.c`
- **Status**: EXTRACTED
- **Fptr**: `__DATA+0x147a1d8`
- **Notes**: Checks gate + platform. If returns early, skill tier icon/text never set.

### `FUN_10025d3f0`
- **Description**: profile data loader — called when opening profile
- **UI File**: `ui/profile/profile_panel.c`
- **Status**: EXTRACTED
- **Fptr**: `__DATA+0x147af38`
- **Object Layout**:
  - `+0x21a1c`: create-account button visibility (conditional on FUN_100131228)
  - `+0x20b04`: profile section visibility (cleared when offline)
- **Notes**: Dylib hides create-account button, ensures profile sections stay visible.

### `FUN_10025d954`
- **Description**: profile body display — gates visibility of profile body elements
- **UI File**: `ui/profile/profile_panel.c`
- **Status**: EXTRACTED
- **Fptr**: `__DATA+0x147af60`
- **Object Layout**:
  - `+0x20b04`: season/trophy element visibility
  - `+0x216d4`: another profile element visibility
  - `+0x1d0`: profile body setup offset (passed to FUN_100227fb8)
  - `+0x25f50`: guest flag that blocks setup
- **Notes**: Checks FUN_10014e20c (guest) and FUN_10052b840 (online status).

## Layer 9: Trophy Data Population & Ranked KV

### `FUN_10012c5b0`
- **Description**: key-value store write — FUN_10012c5b0(key, value)
- **UI File**: `ui/gates/ce_gate.c`
- **Status**: EXTRACTED
- **Notes**: Writes int to persistent KV store. Used for ranked data (ELO buckets).

### `FUN_10012c8f0`
- **Description**: key-value store read — FUN_10012c8f0(key, default)
- **UI File**: `ui/gates/ce_gate.c`
- **Status**: EXTRACTED
- **Notes**: Reads int from KV store. Profile card reads skill tier from 'new5v5RankedDataEloBucket'.

### `FUN_100265bd4`
- **Description**: trophy renderer — loops over entries from profile object
- **UI File**: `ui/trophies/trophy_panel.c`
- **Status**: EXTRACTED
- **Object Layout**:
  - `entry_size`: 0x50
  - `entry+0x18`: std::string trophy name (SSO, 24 bytes)
  - `entry+0x48`: uint32 season index
  - `entry+0x4c`: uint32 trophy value (0-29 scale)
- **Notes**: Reads count from +0x18ef8, array from +0x18f00, flag from +0x18f21.

