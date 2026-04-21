// functions/01a6e — 10 functions
#include "libGameKindred.h"




_LHASH * FUN_01a6e110(int param_1)

{
  _LHASH *p_Var1;
  
  CRYPTO_lock(9,1,"err.c",0x168);
  if ((param_1 != 0) && (DAT_03215e20 == (_LHASH *)0x0)) {
    CRYPTO_push_info_("int_err_get (err.c)","err.c",0x16a);
    DAT_03215e20 = lh_new((LHASH_HASH_FN_TYPE)&LAB_01a6e948,(LHASH_COMP_FN_TYPE)&LAB_01a6e98c);
    CRYPTO_pop_info();
  }
  p_Var1 = DAT_03215e20;
  CRYPTO_lock(10,1,"err.c",0x170);
  return p_Var1;
}




void * FUN_01a6e208(void *param_1)

{
  _LHASH *lh;
  void *pvVar1;
  
  if (DAT_03215e38 == (undefined **)0x0) {
    CRYPTO_lock(9,1,"err.c",0x127);
    if (DAT_03215e38 == (undefined **)0x0) {
      DAT_03215e38 = &PTR_FUN_02bbf7e0;
    }
    CRYPTO_lock(10,1,"err.c",0x12a);
    lh = (_LHASH *)(*(code *)*DAT_03215e38)(0);
  }
  else {
    lh = (_LHASH *)(*(code *)*DAT_03215e38)(0);
  }
  if (lh == (_LHASH *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    CRYPTO_lock(5,1,"err.c",0x189);
    pvVar1 = lh_retrieve(lh,param_1);
    CRYPTO_lock(6,1,"err.c",0x18b);
  }
  return pvVar1;
}




void * FUN_01a6e2f4(void *param_1)

{
  _LHASH *lh;
  void *pvVar1;
  
  if (DAT_03215e38 == (undefined **)0x0) {
    CRYPTO_lock(9,1,"err.c",0x127);
    if (DAT_03215e38 == (undefined **)0x0) {
      DAT_03215e38 = &PTR_FUN_02bbf7e0;
    }
    CRYPTO_lock(10,1,"err.c",0x12a);
    lh = (_LHASH *)(*(code *)*DAT_03215e38)(1);
  }
  else {
    lh = (_LHASH *)(*(code *)*DAT_03215e38)(1);
  }
  if (lh == (_LHASH *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    CRYPTO_lock(9,1,"err.c",0x19a);
    pvVar1 = lh_insert(lh,param_1);
    CRYPTO_lock(10,1,"err.c",0x19c);
  }
  return pvVar1;
}




_LHASH * FUN_01a6e4cc(int param_1)

{
  _LHASH *p_Var1;
  
  CRYPTO_lock(9,1,"err.c",0x1c4);
  if ((param_1 != 0) && (DAT_03215e40 == (_LHASH *)0x0)) {
    CRYPTO_push_info_("int_thread_get (err.c)","err.c",0x1c6);
    DAT_03215e40 = lh_new(FUN_01a6e99c,(LHASH_COMP_FN_TYPE)&LAB_01a6e9b8);
    CRYPTO_pop_info();
  }
  p_Var1 = DAT_03215e40;
  if (DAT_03215e40 != (_LHASH *)0x0) {
    DAT_03215e30 = DAT_03215e30 + 1;
  }
  CRYPTO_lock(10,1,"err.c",0x1ce);
  return p_Var1;
}




void FUN_01a6e584(long *param_1)

{
  int iVar1;
  
  if (((param_1 != (long *)0x0) && (*param_1 != 0)) &&
     (iVar1 = CRYPTO_add_lock(&DAT_03215e30,-1,1,"err.c",0x1d9), iVar1 < 1)) {
    *param_1 = 0;
    return;
  }
  return;
}




void * FUN_01a6e5e4(void *param_1)

{
  _LHASH *lh;
  void *pvVar1;
  _LHASH *local_38;
  
  if (DAT_03215e38 == (undefined **)0x0) {
    CRYPTO_lock(9,1,"err.c",0x127);
    if (DAT_03215e38 == (undefined **)0x0) {
      DAT_03215e38 = &PTR_FUN_02bbf7e0;
    }
    CRYPTO_lock(10,1,"err.c",0x12a);
  }
  lh = (_LHASH *)(*(code *)DAT_03215e38[5])(0);
  if (lh == (_LHASH *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    local_38 = lh;
    CRYPTO_lock(5,1,"err.c",499);
    pvVar1 = lh_retrieve(lh,param_1);
    CRYPTO_lock(6,1,"err.c",0x1f5);
    (*(code *)DAT_03215e38[6])(&local_38);
  }
  return pvVar1;
}




void * FUN_01a6e6dc(void *param_1)

{
  _LHASH *lh;
  void *pvVar1;
  _LHASH *local_38;
  
  if (DAT_03215e38 == (undefined **)0x0) {
    CRYPTO_lock(9,1,"err.c",0x127);
    if (DAT_03215e38 == (undefined **)0x0) {
      DAT_03215e38 = &PTR_FUN_02bbf7e0;
    }
    CRYPTO_lock(10,1,"err.c",0x12a);
  }
  lh = (_LHASH *)(*(code *)DAT_03215e38[5])(1);
  if (lh == (_LHASH *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    local_38 = lh;
    CRYPTO_lock(9,1,"err.c",0x205);
    pvVar1 = lh_insert(lh,param_1);
    CRYPTO_lock(10,1,"err.c",0x207);
    (*(code *)DAT_03215e38[6])(&local_38);
  }
  return pvVar1;
}




void FUN_01a6e7d4(void *param_1)

{
  _LHASH *lh;
  void *pvVar1;
  ulong uVar2;
  _LHASH *local_28;
  
  if (DAT_03215e38 == (undefined **)0x0) {
    CRYPTO_lock(9,1,"err.c",0x127);
    if (DAT_03215e38 == (undefined **)0x0) {
      DAT_03215e38 = &PTR_FUN_02bbf7e0;
    }
    CRYPTO_lock(10,1,"err.c",0x12a);
  }
  lh = (_LHASH *)(*(code *)DAT_03215e38[5])(0);
  if (lh != (_LHASH *)0x0) {
    local_28 = lh;
    CRYPTO_lock(9,1,"err.c",0x217);
    pvVar1 = lh_delete(lh,param_1);
    if (((DAT_03215e30 == 1) && (DAT_03215e40 != (_LHASH *)0x0)) &&
       (uVar2 = lh_num_items(DAT_03215e40), uVar2 == 0)) {
      lh_free(DAT_03215e40);
      DAT_03215e40 = (_LHASH *)0x0;
    }
    CRYPTO_lock(10,1,"err.c",0x21f);
    (*(code *)DAT_03215e38[6])(&local_28);
    if (pvVar1 != (void *)0x0) {
      FUN_01a6db30(pvVar1);
    }
  }
  return;
}




int FUN_01a6e8ec(void)

{
  int iVar1;
  
  CRYPTO_lock(9,1,"err.c",0x22a);
  iVar1 = DAT_02bfcbb0;
  DAT_02bfcbb0 = DAT_02bfcbb0 + 1;
  CRYPTO_lock(10,1,"err.c",0x22c);
  return iVar1;
}




long FUN_01a6e99c(CRYPTO_THREADID *param_1)

{
  ulong uVar1;
  
  uVar1 = CRYPTO_THREADID_hash(param_1);
  return uVar1 * 0xd;
}

