// functions/01a42 — 4 functions
#include "libGameKindred.h"




int FUN_01a422a8(void)

{
  int iVar1;
  
  CRYPTO_lock(9,2,"ex_data.c",0x181);
  iVar1 = DAT_02bfc9b0;
  DAT_02bfc9b0 = DAT_02bfc9b0 + 1;
  CRYPTO_lock(10,2,"ex_data.c",0x183);
  return iVar1;
}




void FUN_01a42304(void)

{
  _LHASH *p_Var1;
  
  if (DAT_03215b10 == (_LHASH *)0x0) {
    CRYPTO_lock(9,2,"ex_data.c",0x116);
    if (DAT_03215b10 == (_LHASH *)0x0) {
      p_Var1 = lh_new((LHASH_HASH_FN_TYPE)&LAB_01a42a40,(LHASH_COMP_FN_TYPE)&LAB_01a42a48);
      DAT_03215b10 = p_Var1;
      CRYPTO_lock(10,2,"ex_data.c",0x119);
      if (p_Var1 == (_LHASH *)0x0) {
        return;
      }
    }
    else {
      CRYPTO_lock(10,2,"ex_data.c",0x119);
    }
  }
  lh_doall(DAT_03215b10,(LHASH_DOALL_FN_TYPE)&LAB_01a42a10);
  lh_free(DAT_03215b10);
  DAT_03215b10 = (_LHASH *)0x0;
  DAT_03215b08 = 0;
  return;
}




undefined4 * FUN_01a42a5c(undefined4 param_1)

{
  _LHASH *p_Var1;
  undefined4 *ptr;
  _STACK *p_Var2;
  undefined4 local_48 [6];
  
  if (DAT_03215b10 == (_LHASH *)0x0) {
    CRYPTO_lock(9,2,"ex_data.c",0x116);
    if (DAT_03215b10 == (_LHASH *)0x0) {
      p_Var1 = lh_new((LHASH_HASH_FN_TYPE)&LAB_01a42a40,(LHASH_COMP_FN_TYPE)&LAB_01a42a48);
      DAT_03215b10 = p_Var1;
      CRYPTO_lock(10,2,"ex_data.c",0x119);
      if (p_Var1 == (_LHASH *)0x0) {
        return (undefined4 *)0x0;
      }
    }
    else {
      CRYPTO_lock(10,2,"ex_data.c",0x119);
    }
  }
  local_48[0] = param_1;
  CRYPTO_lock(9,2,"ex_data.c",0x13e);
  ptr = lh_retrieve(DAT_03215b10,local_48);
  if (ptr == (undefined4 *)0x0) {
    ptr = CRYPTO_malloc(0x18,"ex_data.c",0x141);
    if (ptr != (undefined4 *)0x0) {
      *ptr = param_1;
      ptr[4] = 0;
      p_Var2 = sk_new_null();
      *(_STACK **)(ptr + 2) = p_Var2;
      if (p_Var2 != (_STACK *)0x0) {
        lh_insert(DAT_03215b10,ptr);
        goto LAB_01a42b28;
      }
      CRYPTO_free(ptr);
    }
    CRYPTO_lock(10,2,"ex_data.c",0x152);
    ERR_put_error(0xf,0x69,0x41,"ex_data.c",0x154);
    ptr = (undefined4 *)0x0;
  }
  else {
LAB_01a42b28:
    CRYPTO_lock(10,2,"ex_data.c",0x152);
  }
  return ptr;
}




ulong FUN_01a42e5c(int *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  ulong uVar3;
  
  if (DAT_03215b30 != (_STACK *)0x0) {
    iVar1 = sk_num(DAT_03215b30);
    if (*param_1 < iVar1) {
      puVar2 = sk_value(DAT_03215b30,*param_1);
      uVar3 = (*(code *)*puVar2)(*(undefined8 *)(param_1 + 2));
      goto LAB_01a42eb0;
    }
  }
  uVar3 = lh_strhash(*(char **)(param_1 + 2));
LAB_01a42eb0:
  return uVar3 ^ (long)*param_1;
}

