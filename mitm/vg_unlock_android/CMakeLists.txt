cmake_minimum_required(VERSION 3.10)
project(vg_unlock C)

option(VG_ENABLE_EXPERIMENTAL_HOOKS "Enable unverified layout-dependent Android hooks" OFF)
option(VG_ENABLE_PARSER_PATCHES "Enable Android parser replacement hooks" OFF)
option(VG_ENABLE_PROFILE_REDIRECTS "Enable Android profile redirection hooks" OFF)
option(VG_ENABLE_GUEST_BYPASS "Enable Android guest gate bypass hook" OFF)
option(VG_ENABLE_VISUAL_TOAST "Show an Android toast when the loader shim activates" ON)

add_library(vg_unlock SHARED vg_unlock_android.c)
add_library(vg_loader SHARED vg_gamekindred_loader.c vg_gamekindred_loader_trampolines.S)
if (VG_ENABLE_EXPERIMENTAL_HOOKS)
    target_compile_definitions(vg_unlock PRIVATE VG_ENABLE_EXPERIMENTAL_HOOKS=1)
endif()
if (VG_ENABLE_PARSER_PATCHES)
    target_compile_definitions(vg_unlock PRIVATE VG_ENABLE_PARSER_PATCHES=1)
endif()
if (VG_ENABLE_PROFILE_REDIRECTS)
    target_compile_definitions(vg_unlock PRIVATE VG_ENABLE_PROFILE_REDIRECTS=1)
endif()
if (VG_ENABLE_GUEST_BYPASS)
    target_compile_definitions(vg_unlock PRIVATE VG_ENABLE_GUEST_BYPASS=1)
endif()
if (VG_ENABLE_VISUAL_TOAST)
    target_compile_definitions(vg_loader PRIVATE VG_ENABLE_VISUAL_TOAST=1)
else()
    target_compile_definitions(vg_loader PRIVATE VG_ENABLE_VISUAL_TOAST=0)
endif()
target_link_libraries(vg_unlock log)
target_link_libraries(vg_loader log dl)
target_compile_options(vg_unlock PRIVATE -Wall -O2)
target_compile_options(vg_loader PRIVATE -Wall -O2)
set_target_properties(vg_unlock PROPERTIES
    ANDROID_STL "none"
)
set_target_properties(vg_loader PROPERTIES
    OUTPUT_NAME "GameKindred"
    ANDROID_STL "none"
)
