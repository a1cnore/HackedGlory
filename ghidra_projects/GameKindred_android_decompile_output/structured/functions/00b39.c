// functions/00b39 — 2 functions
#include "libGameKindred.h"




void FUN_00b39f28(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  FUN_00b3c6fc(param_1,param_2,param_5);
  return;
}




void FUN_00b39f30(long param_1,ulong param_2)

{
  byte *pbVar1;
  size_t __n;
  size_t sVar2;
  byte bVar3;
  int iVar4;
  ulong uVar5;
  undefined8 uVar6;
  byte *__s2;
  byte *pbVar7;
  long lVar8;
  void *__s1;
  
  if ((param_2 & 1) == 0) {
    return;
  }
  pbVar1 = (byte *)(param_1 + 0x105f0);
  bVar3 = *pbVar1;
  __n = (ulong)(bVar3 >> 1);
  if ((bVar3 & 1) != 0) {
    __n = *(size_t *)(param_1 + 0x105f8);
  }
  sVar2 = (ulong)(DAT_0320ffa8 >> 1);
  if ((DAT_0320ffa8 & 1) != 0) {
    sVar2 = DAT_0320ffb0;
  }
  if (__n == sVar2) {
    __s1 = *(void **)(param_1 + 0x10600);
    if ((bVar3 & 1) == 0) {
      __s1 = (void *)(param_1 + 0x105f1);
    }
    __s2 = DAT_0320ffb8;
    if ((DAT_0320ffa8 & 1) == 0) {
      __s2 = &DAT_0320ffa9;
    }
    if ((bVar3 & 1) == 0) {
      if (__n == 0) {
        return;
      }
      lVar8 = -(ulong)(bVar3 >> 1);
      pbVar7 = pbVar1;
      while (pbVar7 = pbVar7 + 1, *pbVar7 == *__s2) {
        lVar8 = lVar8 + 1;
        __s2 = __s2 + 1;
        if (lVar8 == 0) {
          return;
        }
      }
    }
    else {
      if (__n == 0) {
        return;
      }
      iVar4 = memcmp(__s1,__s2,__n);
      if (iVar4 == 0) {
        return;
      }
    }
  }
  uVar5 = FUN_009580c4();
  if ((uVar5 & 1) == 0) {
    return;
  }
  uVar6 = FUN_009580b8();
  FUN_0095e21c(uVar6,pbVar1,0);
  return;
}

