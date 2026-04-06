cmake_minimum_required(VERSION 3.10)
project(vg_unlock C)

add_library(vg_unlock SHARED vg_unlock_android.c)
target_link_libraries(vg_unlock log)
target_compile_options(vg_unlock PRIVATE -Wall -O2)
set_target_properties(vg_unlock PROPERTIES
    ANDROID_STL "none"
)
