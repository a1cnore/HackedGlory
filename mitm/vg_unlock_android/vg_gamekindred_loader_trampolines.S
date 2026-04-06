#define VG_JNI_SYMBOL(symbol) \
    .global symbol; \
    .type symbol, %function; \
symbol:; \
    adrp x16, :got:ptr_##symbol; \
    ldr x16, [x16, :got_lo12:ptr_##symbol]; \
    ldr x16, [x16]; \
    cbz x16, 1f; \
    br x16; \
1:; \
    b vg_loader_missing_jni_symbol; \
    .size symbol, . - symbol;

    .text
    .align 2

#include "vg_gamekindred_jni_symbols.inc"