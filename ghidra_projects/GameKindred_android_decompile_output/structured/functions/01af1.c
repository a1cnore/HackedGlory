// functions/01af1 — 2 functions
#include "libGameKindred.h"




int FUN_01af1ea4(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  char *__s1;
  char *__s2;
  
  if ((char *)*param_1 != (char *)*param_2) {
    iVar2 = strcmp((char *)*param_1,(char *)*param_2);
    if (iVar2 != 0) {
      return iVar2;
    }
  }
  __s1 = (char *)param_1[1];
  __s2 = (char *)param_2[1];
  if ((__s1 != (char *)0x0) && (__s2 != (char *)0x0)) {
    iVar2 = strcmp(__s1,__s2);
    return iVar2;
  }
  iVar2 = 1;
  if (__s1 == (char *)0x0) {
    iVar2 = -1;
  }
  iVar1 = 0;
  if (__s1 != __s2) {
    iVar1 = iVar2;
  }
  return iVar1;
}




void FUN_01af1f9c(undefined8 *param_1)

{
  int iVar1;
  void *ptr;
  _STACK *p_Var2;
  
  p_Var2 = (_STACK *)param_1[2];
  iVar1 = sk_num(p_Var2);
  if (0 < iVar1) {
    iVar1 = iVar1 + 1;
    do {
      ptr = sk_value(p_Var2,iVar1 + -2);
      CRYPTO_free(*(void **)((long)ptr + 0x10));
      CRYPTO_free(*(void **)((long)ptr + 8));
      CRYPTO_free(ptr);
      iVar1 = iVar1 + -1;
    } while (1 < iVar1);
  }
  if (p_Var2 != (_STACK *)0x0) {
    sk_free(p_Var2);
  }
  CRYPTO_free((void *)*param_1);
  CRYPTO_free(param_1);
  return;
}

