// functions/00913 — 14 functions
#include "libGameKindred.h"




undefined4 FUN_00913ab0(long param_1)

{
  return *(undefined4 *)(param_1 + 0x270);
}




void FUN_00913ab8(long param_1,byte param_2)

{
  *(byte *)(param_1 + 0x89) = param_2 & 1;
  FUN_009658c8(param_1 + 0x30);
  return;
}




void FUN_00913acc(long param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  
  uVar4 = *(uint *)(param_1 + 0x270);
  if (uVar4 != 0) {
    uVar2 = 0;
    lVar3 = 0x181;
    do {
      lVar5 = *(long *)(param_1 + 0x278);
      if ((*(char *)(lVar5 + lVar3) != '\0') &&
         (iVar1 = FUN_00913be4(param_1,lVar5 + lVar3 + -0x179), iVar1 != -1)) {
        lVar5 = lVar5 + (long)iVar1 * 0x188;
        FUN_009186fc(param_1 + 0x270,lVar5,lVar5 + 0x188);
        uVar4 = *(uint *)(param_1 + 0x270);
        *(undefined1 *)(param_1 + 0x2f9) = 1;
      }
      uVar2 = uVar2 + 1;
      lVar3 = lVar3 + 0x188;
    } while (uVar2 < uVar4);
  }
  return;
}




void FUN_00913b68(long param_1,uint param_2)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_0093dbe8();
  param_2 = (uVar1 ^ 1) & param_2;
  if ((param_2 & 1) == 0) {
    uVar2 = 0xbf800000;
  }
  else {
    uVar2 = *(undefined4 *)(param_1 + 0x2f0);
  }
  FUN_009658d4(uVar2,param_1 + 0x30);
  FUN_0096589c(param_1 + 0x30,~param_2 & 1);
  return;
}




void FUN_00913bc4(long param_1,uint param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0x40000000;
  if ((param_2 & 1) == 0) {
    uVar1 = 0x41a00000;
  }
  *(undefined4 *)(param_1 + 0x2f0) = uVar1;
  FUN_009658d4(param_1 + 0x30);
  return;
}




ulong FUN_00913be4(long param_1,byte *param_2)

{
  ulong uVar1;
  size_t __n;
  byte *__s2;
  uint uVar2;
  byte bVar3;
  int iVar4;
  long lVar5;
  byte *pbVar6;
  byte *pbVar7;
  void *__s1;
  ulong uVar8;
  long lVar9;
  
  uVar2 = *(uint *)(param_1 + 0x270);
  if (uVar2 != 0) {
    __n = *(size_t *)(param_2 + 8);
    __s2 = *(byte **)(param_2 + 0x10);
    lVar9 = *(long *)(param_1 + 0x278);
    uVar8 = 0;
    if ((*param_2 & 1) == 0) {
      __s2 = param_2 + 1;
      __n = (ulong)(*param_2 >> 1);
    }
    do {
      lVar5 = lVar9 + uVar8 * 0x188;
      bVar3 = *(byte *)(lVar5 + 8);
      uVar1 = (ulong)(bVar3 >> 1);
      if ((bVar3 & 1) != 0) {
        uVar1 = *(ulong *)(lVar5 + 0x10);
      }
      if (uVar1 == __n) {
        __s1 = *(void **)(lVar9 + uVar8 * 0x188 + 0x18);
        if ((bVar3 & 1) == 0) {
          __s1 = (void *)(lVar5 + 9);
        }
        if ((bVar3 & 1) == 0) {
          if (__n == 0) goto LAB_00913cb0;
          pbVar6 = (byte *)(lVar5 + 9);
          lVar5 = -(ulong)(bVar3 >> 1);
          pbVar7 = __s2;
          while (*pbVar6 == *pbVar7) {
            pbVar6 = pbVar6 + 1;
            lVar5 = lVar5 + 1;
            pbVar7 = pbVar7 + 1;
            if (lVar5 == 0) goto LAB_00913cb0;
          }
        }
        else if ((__n == 0) || (iVar4 = memcmp(__s1,__s2,__n), iVar4 == 0)) goto LAB_00913cb0;
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < uVar2);
  }
  uVar8 = 0xffffffff;
LAB_00913cb0:
  return uVar8 & 0xffffffff;
}




long FUN_00913cc8(long param_1,uint param_2)

{
  return *(long *)(param_1 + 0x278) + (ulong)param_2 * 0x188;
}




long FUN_00913cd8(long param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  
  if (*(int *)(param_1 + 0x270) != 0) {
    lVar2 = 0;
    uVar3 = 0;
    do {
      uVar1 = FUN_00e70b34(*(long *)(param_1 + 0x278) + lVar2 + 0x20,param_2);
      if ((uVar1 & 1) != 0) {
        return *(long *)(param_1 + 0x278) + lVar2;
      }
      uVar3 = uVar3 + 1;
      lVar2 = lVar2 + 0x188;
    } while (uVar3 < *(uint *)(param_1 + 0x270));
  }
  return 0;
}




long FUN_00913d4c(long param_1,byte *param_2)

{
  ulong uVar1;
  size_t __n;
  byte *__s2;
  uint uVar2;
  byte bVar3;
  int iVar4;
  long lVar5;
  byte *pbVar6;
  byte *pbVar7;
  void *__s1;
  long lVar8;
  ulong uVar9;
  
  uVar2 = *(uint *)(param_1 + 0x270);
  if (uVar2 != 0) {
    __n = *(size_t *)(param_2 + 8);
    __s2 = *(byte **)(param_2 + 0x10);
    lVar8 = *(long *)(param_1 + 0x278);
    uVar9 = 0;
    if ((*param_2 & 1) == 0) {
      __s2 = param_2 + 1;
      __n = (ulong)(*param_2 >> 1);
    }
    do {
      lVar5 = lVar8 + uVar9 * 0x188;
      bVar3 = *(byte *)(lVar5 + 8);
      uVar1 = (ulong)(bVar3 >> 1);
      if ((bVar3 & 1) != 0) {
        uVar1 = *(ulong *)(lVar5 + 0x10);
      }
      if (uVar1 == __n) {
        __s1 = *(void **)(lVar8 + uVar9 * 0x188 + 0x18);
        if ((bVar3 & 1) == 0) {
          __s1 = (void *)(lVar5 + 9);
        }
        if ((bVar3 & 1) == 0) {
          if (__n == 0) {
LAB_00913e1c:
            return lVar8 + (uVar9 & 0xffffffff) * 0x188;
          }
          pbVar6 = (byte *)(lVar5 + 9);
          lVar5 = -(ulong)(bVar3 >> 1);
          pbVar7 = __s2;
          while (*pbVar6 == *pbVar7) {
            pbVar6 = pbVar6 + 1;
            lVar5 = lVar5 + 1;
            pbVar7 = pbVar7 + 1;
            if (lVar5 == 0) goto LAB_00913e1c;
          }
        }
        else if ((__n == 0) || (iVar4 = memcmp(__s1,__s2,__n), iVar4 == 0)) goto LAB_00913e1c;
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < uVar2);
  }
  return 0;
}




void FUN_00913e3c(long param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_00e80f6c();
  if ((uVar1 & 1) != 0) {
    FUN_00913e94(param_1,param_2);
    FUN_00e815b0(param_2,param_1 + 0x90);
    FUN_0090470c();
    FUN_0096589c(param_1 + 0x30,1);
    return;
  }
  return;
}




void FUN_00913e94(long param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  
  if (*(int *)(param_1 + 0x290) != 0) {
    lVar2 = 0;
    uVar3 = 0;
    do {
      uVar1 = FUN_00e70b34(*(long *)(param_1 + 0x298) + lVar2 + 0x20,param_2);
      if ((uVar1 & 1) != 0) {
        lVar2 = *(long *)(param_1 + 0x298) + lVar2;
        FUN_00916ca8((uint *)(param_1 + 0x290),lVar2,lVar2 + 0x38);
        *(undefined1 *)(param_1 + 0x2fa) = 1;
        return;
      }
      uVar3 = uVar3 + 1;
      lVar2 = lVar2 + 0x38;
    } while (uVar3 < *(uint *)(param_1 + 0x290));
  }
  return;
}




void FUN_00913f24(long param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = FUN_00e80f6c();
  if ((uVar1 & 1) != 0) {
    uVar1 = FUN_00e84e4c(param_1 + 0xf0);
    if ((uVar1 & 1) == 0) {
      lVar2 = FUN_00913d4c(param_1,param_2);
      if (lVar2 != 0) {
        *(undefined1 *)(lVar2 + 0x181) = 1;
      }
      FUN_00e81690(param_2,param_1 + 0xf0);
      FUN_0096589c(param_1 + 0x30,1);
      return;
    }
  }
  return;
}




void FUN_00913fa0(long param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_00e80f6c();
  if ((uVar1 & 1) != 0) {
    FUN_00e816c8(param_2,param_1 + 0x150);
    FUN_0096589c(param_1 + 0x30,1);
    return;
  }
  return;
}




void FUN_00913fe8(long param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_00e80f6c();
  if ((uVar1 & 1) != 0) {
    FUN_00e81700(param_2,param_1 + 0x150);
    FUN_0096589c(param_1 + 0x30,1);
    return;
  }
  return;
}

