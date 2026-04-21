// functions/01a93 — 1 functions
#include "libGameKindred.h"




undefined8 FUN_01a93488(long *param_1,int param_2,char *param_3,size_t param_4)

{
  size_t siz;
  int iVar1;
  void *pvVar2;
  char *ptr;
  _STACK *st;
  undefined8 uVar3;
  
  if ((param_3 == (char *)0x0) || (param_4 == 0)) {
    if (param_3 == (char *)0x0) {
      siz = 0;
      goto joined_r0x01a93528;
    }
    param_4 = strlen(param_3);
    siz = param_4;
    if (param_4 == 0) goto joined_r0x01a93528;
  }
  else {
    pvVar2 = memchr(param_3,0,param_4 - (1 < param_4));
    if (pvVar2 != (void *)0x0) {
      return 0;
    }
  }
  siz = param_4 - 1;
  if (param_3[param_4 - 1] != '\0') {
    siz = param_4;
  }
joined_r0x01a93528:
  if ((param_2 == 0) && ((_STACK *)*param_1 != (_STACK *)0x0)) {
    sk_pop_free((_STACK *)*param_1,(func *)&LAB_01a931c8);
    *param_1 = 0;
  }
  uVar3 = 1;
  if ((param_3 != (char *)0x0) && (uVar3 = 1, siz != 0)) {
    ptr = BUF_strndup(param_3,siz);
    uVar3 = 0;
    if (ptr != (char *)0x0) {
      st = (_STACK *)*param_1;
      if (st == (_STACK *)0x0) {
        st = sk_new_null();
        *param_1 = (long)st;
        if (st == (_STACK *)0x0) {
          CRYPTO_free(ptr);
          return 0;
        }
      }
      iVar1 = sk_push(st,ptr);
      if (iVar1 != 0) {
        return 1;
      }
      CRYPTO_free(ptr);
      iVar1 = sk_num((_STACK *)*param_1);
      uVar3 = 0;
      if (iVar1 == 0) {
        sk_free((_STACK *)*param_1);
        uVar3 = 0;
        *param_1 = 0;
      }
    }
  }
  return uVar3;
}

