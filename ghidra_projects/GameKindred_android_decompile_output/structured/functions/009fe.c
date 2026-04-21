// functions/009fe — 41 functions
#include "libGameKindred.h"




void FUN_009fe050(undefined8 *param_1)

{
  long lVar1;
  undefined8 *local_48;
  code *pcStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_027c6688;
  param_1[3] = &PTR_FUN_027c6a40;
  param_1[6] = &PTR_FUN_027c6a70;
  pcStack_40 = FUN_009feb64;
  local_48 = param_1;
  FUN_00f03390(&local_48);
  thunk_FUN_00937f24(0);
  if ((void *)param_1[0x30] != (void *)0x0) {
    operator_delete__((void *)param_1[0x30]);
    param_1[0x2f] = 0;
    param_1[0x30] = 0;
  }
  if ((void *)param_1[0x2e] != (void *)0x0) {
    operator_delete__((void *)param_1[0x2e]);
    param_1[0x2d] = 0;
    param_1[0x2e] = 0;
  }
  FUN_00952bf0(param_1 + 0x2b,1);
  if ((*(byte *)(param_1 + 0x28) & 1) != 0) {
    operator_delete((void *)param_1[0x2a]);
  }
  if ((*(byte *)(param_1 + 0x25) & 1) != 0) {
    operator_delete((void *)param_1[0x27]);
  }
  param_1[0x19] = &PTR_FUN_027bb718;
  FUN_00952bf0(param_1 + 0x22,1);
  if ((*(byte *)(param_1 + 0x1f) & 1) != 0) {
    operator_delete((void *)param_1[0x21]);
  }
  FUN_00e84dd8(param_1 + 0x19);
  param_1[7] = &PTR_FUN_027bb6e8;
  if ((*(byte *)(param_1 + 0x16) & 1) != 0) {
    operator_delete((void *)param_1[0x18]);
  }
  if ((*(byte *)(param_1 + 0x13) & 1) != 0) {
    operator_delete((void *)param_1[0x15]);
  }
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    operator_delete((void *)param_1[0x12]);
  }
  if ((*(byte *)(param_1 + 0xd) & 1) != 0) {
    operator_delete((void *)param_1[0xf]);
  }
  FUN_00e84dd8(param_1 + 7);
  FUN_00e835e0(param_1 + 3);
  FUN_00948d58(param_1);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009fe1cc(long param_1)

{
  FUN_009fe050(param_1 + -0x18);
  return;
}




void FUN_009fe1d4(long param_1)

{
  FUN_009fe050(param_1 + -0x30);
  return;
}




void FUN_009fe1dc(void *param_1)

{
  FUN_009fe050();
  operator_delete(param_1);
  return;
}




void FUN_009fe200(long param_1)

{
  FUN_009fe050((void *)(param_1 + -0x18));
  operator_delete((void *)(param_1 + -0x18));
  return;
}




void FUN_009fe228(long param_1)

{
  FUN_009fe050((void *)(param_1 + -0x30));
  operator_delete((void *)(param_1 + -0x30));
  return;
}




undefined1 FUN_009fe250(long param_1)

{
  return *(undefined1 *)(param_1 + 0x198);
}




void FUN_009fe258(undefined8 param_1)

{
  FUN_009fe27c();
  FUN_009fe380(param_1);
  return;
}




void FUN_009fe27c(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  
  lVar2 = FUN_00e85318(0);
  if (*(long *)(param_1 + 0x188) < lVar2) {
    FUN_009fdee8(param_1);
    return;
  }
  lVar1 = param_1 + 200;
  uVar3 = FUN_00e84e74(lVar1);
  if ((uVar3 & 1) == 0) {
    return;
  }
  uVar3 = FUN_00e84e5c(lVar1);
  if ((uVar3 & 1) == 0) {
    *(long *)(param_1 + 0x188) = lVar2 + 10;
  }
  else {
    FUN_00952bf0(param_1 + 0x158,0);
    FUN_009feb88(param_1 + 0x158,param_1 + 0x110);
    lVar4 = (long)*(int *)(param_1 + 0x120);
    if (*(int *)(param_1 + 0x120) < 0) {
      lVar4 = 600;
    }
    *(long *)(param_1 + 0x188) = lVar4 + lVar2;
    *(long *)(param_1 + 400) = lVar2;
    *(undefined1 *)(param_1 + 0x198) = 1;
    if (*(int *)(param_1 + 0x168) != 0) {
      lVar2 = *(long *)(param_1 + 0x170);
      do {
        if (*(code **)(lVar2 + 8) == (code *)0x0) {
          (**(code **)(lVar2 + 0x18))(*(undefined8 *)(lVar2 + 0x10));
        }
        else {
          (**(code **)(lVar2 + 8))();
        }
        lVar2 = lVar2 + 0x20;
      } while (lVar2 != *(long *)(param_1 + 0x170) + (ulong)*(uint *)(param_1 + 0x168) * 0x20);
    }
  }
  FUN_0094b8d8(lVar1);
  return;
}




void FUN_009fe380(long param_1)

{
  ulong uVar1;
  long lVar2;
  char *pcVar3;
  
  lVar2 = param_1 + 0x38;
  uVar1 = FUN_00e84e74(lVar2);
  if ((uVar1 & 1) != 0) {
    *(undefined8 *)(param_1 + 0x188) = 0;
    *(undefined8 *)(param_1 + 400) = 0;
    *(undefined1 *)(param_1 + 0x198) = 0;
    FUN_009fdee8(DAT_031308c0);
    FUN_0094b718(lVar2);
    uVar1 = FUN_00e84e5c(lVar2);
    if ((((uVar1 & 1) == 0) || (*(int *)(param_1 + 0x60) != 0)) ||
       (*(char *)(param_1 + 100) == '\0')) {
      if ((*(byte *)(param_1 + 0x98) & 1) == 0) {
        lVar2 = param_1 + 0x99;
      }
      else {
        lVar2 = *(long *)(param_1 + 0xa8);
      }
      if ((*(byte *)(param_1 + 0x80) & 1) == 0) {
        param_1 = param_1 + 0x81;
      }
      else {
        param_1 = *(long *)(param_1 + 0x90);
      }
      pcVar3 = "failure";
    }
    else {
      if ((*(byte *)(param_1 + 0x98) & 1) == 0) {
        lVar2 = param_1 + 0x99;
      }
      else {
        lVar2 = *(long *)(param_1 + 0xa8);
      }
      if ((*(byte *)(param_1 + 0x80) & 1) == 0) {
        param_1 = param_1 + 0x81;
      }
      else {
        param_1 = *(long *)(param_1 + 0x90);
      }
      pcVar3 = "success";
    }
    FUN_00902ae0(lVar2,param_1,pcVar3);
    return;
  }
  return;
}




void FUN_009fe464(long param_1)

{
  if (*(char *)(param_1 + 0x198) != '\0') {
    return;
  }
  FUN_009fdee8();
  return;
}




void FUN_009fe474(long param_1)

{
  *(undefined8 *)(param_1 + 0x188) = 0;
  *(undefined8 *)(param_1 + 400) = 0;
  *(undefined1 *)(param_1 + 0x198) = 0;
  return;
}




void FUN_009fe480(long param_1,long param_2)

{
  if ((*(byte *)(param_2 + 0x2f8) & 1) == 0) {
    param_2 = param_2 + 0x2f9;
  }
  else {
    param_2 = *(long *)(param_2 + 0x308);
  }
  thunk_FUN_00937f24(param_2,0);
  *(undefined8 *)(param_1 + 0x188) = 0;
  *(undefined8 *)(param_1 + 400) = 0;
  *(undefined1 *)(param_1 + 0x198) = 0;
  FUN_009fdee8(param_1);
  return;
}




void FUN_009fe4c8(long param_1)

{
  FUN_009fe480(param_1 + -0x18);
  return;
}




undefined8 FUN_009fe4d0(long param_1,byte *param_2)

{
  size_t sVar1;
  uint uVar2;
  byte bVar3;
  byte bVar4;
  size_t __n;
  size_t sVar5;
  int iVar6;
  ulong uVar7;
  byte *pbVar8;
  byte *pbVar9;
  byte *__s2;
  ulong uVar10;
  long lVar11;
  
  if ((*(byte *)(param_1 + 0x140) & 1) == 0) {
    uVar7 = (ulong)(*(byte *)(param_1 + 0x140) >> 1);
  }
  else {
    uVar7 = *(ulong *)(param_1 + 0x148);
  }
  if (uVar7 == 0) {
    pbVar9 = *(byte **)(param_2 + 0x10);
    if ((*param_2 & 1) == 0) {
      pbVar9 = param_2 + 1;
    }
    uVar7 = FUN_00ec5354(pbVar9);
    if (((uVar7 & 1) != 0) && (uVar2 = *(uint *)(param_1 + 0x158), uVar2 != 0)) {
      bVar3 = *param_2;
      lVar11 = *(long *)(param_1 + 0x160);
      uVar7 = 0;
      pbVar9 = param_2 + 1;
      __n = (ulong)(bVar3 >> 1);
      if ((bVar3 & 1) != 0) {
        pbVar9 = *(byte **)(param_2 + 0x10);
        __n = *(size_t *)(param_2 + 8);
      }
      do {
        pbVar8 = (byte *)(lVar11 + uVar7 * 0x30);
        bVar4 = *pbVar8;
        uVar10 = (ulong)(bVar4 >> 1);
        if ((bVar4 & 1) != 0) {
          uVar10 = *(ulong *)(pbVar8 + 8);
        }
        if (__n == uVar10) {
          __s2 = *(byte **)(lVar11 + uVar7 * 0x30 + 0x10);
          if ((bVar4 & 1) == 0) {
            __s2 = pbVar8 + 1;
          }
          pbVar8 = param_2 + 1;
          sVar1 = -(ulong)(bVar3 >> 1);
          sVar5 = __n;
          if ((bVar3 & 1) == 0) {
            while( true ) {
              if (sVar5 == 0) goto LAB_009fe5f0;
              if (*pbVar8 != *__s2) break;
              sVar1 = sVar1 + 1;
              __s2 = __s2 + 1;
              pbVar8 = pbVar8 + 1;
              sVar5 = sVar1;
            }
          }
          else if ((__n == 0) || (iVar6 = memcmp(pbVar9,__s2,__n), iVar6 == 0)) {
LAB_009fe5f0:
            uVar7 = uVar7 & 0xffffffff;
            if ((*(char *)(lVar11 + uVar7 * 0x30 + 0x28) != '\0') &&
               (*(long *)(lVar11 + uVar7 * 0x30 + 0x18) != 0)) {
              return 2;
            }
            if ((*(char *)(lVar11 + uVar7 * 0x30 + 0x29) != '\0') &&
               (uVar10 = *(ulong *)(lVar11 + uVar7 * 0x30 + 0x20), uVar7 = FUN_00e85318(0),
               uVar10 < uVar7)) {
              return 0;
            }
            return 1;
          }
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 < uVar2);
    }
  }
  return 0;
}




void FUN_009fe674(long param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00e8242c(param_2,param_3,param_1 + 0x38);
  return;
}




void FUN_009fe688(long param_1)

{
  long lVar1;
  
  if (*(int *)(param_1 + 0x178) != 0) {
    lVar1 = *(long *)(param_1 + 0x180);
    do {
      if (*(code **)(lVar1 + 8) == (code *)0x0) {
        (**(code **)(lVar1 + 0x18))(*(undefined8 *)(lVar1 + 0x10));
      }
      else {
        (**(code **)(lVar1 + 8))();
      }
      lVar1 = lVar1 + 0x20;
    } while (lVar1 != *(long *)(param_1 + 0x180) + (ulong)*(uint *)(param_1 + 0x178) * 0x20);
  }
  return;
}




void FUN_009fe6e0(long param_1)

{
  long lVar1;
  
  if (*(int *)(param_1 + 0x148) != 0) {
    lVar1 = *(long *)(param_1 + 0x150);
    do {
      if (*(code **)(lVar1 + 8) == (code *)0x0) {
        (**(code **)(lVar1 + 0x18))(*(undefined8 *)(lVar1 + 0x10));
      }
      else {
        (**(code **)(lVar1 + 8))();
      }
      lVar1 = lVar1 + 0x20;
    } while (lVar1 != *(long *)(param_1 + 0x150) + (ulong)*(uint *)(param_1 + 0x148) * 0x20);
  }
  return;
}




void FUN_009fe738(long param_1,int param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  byte local_50 [16];
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (*(int *)(param_1 + 0x178) != 0) {
    lVar3 = *(long *)(param_1 + 0x180);
    do {
      if (*(code **)(lVar3 + 8) == (code *)0x0) {
        (**(code **)(lVar3 + 0x18))(*(undefined8 *)(lVar3 + 0x10));
      }
      else {
        (**(code **)(lVar3 + 8))();
      }
      lVar3 = lVar3 + 0x20;
    } while (lVar3 != *(long *)(param_1 + 0x180) + (ulong)*(uint *)(param_1 + 0x178) * 0x20);
  }
  if (param_2 == 2) {
    FUN_008fa54c(local_50,"video_skipped");
    FUN_009fe884(param_1,local_50);
    if ((local_50[0] & 1) != 0) {
      operator_delete(local_40);
    }
  }
  else if (param_2 == 0) {
    FUN_00e8242c((byte *)(param_1 + 0x128),param_1 + 0x140,param_1 + 0x38);
    if ((*(byte *)(param_1 + 0x140) & 1) == 0) {
      lVar3 = param_1 + 0x141;
    }
    else {
      lVar3 = *(long *)(param_1 + 0x150);
    }
    if ((*(byte *)(param_1 + 0x128) & 1) == 0) {
      lVar2 = param_1 + 0x129;
    }
    else {
      lVar2 = *(long *)(param_1 + 0x138);
    }
    FUN_009029a4(lVar3,lVar2,"success");
  }
  if ((*(byte *)(param_1 + 0x140) & 1) == 0) {
    *(undefined2 *)(param_1 + 0x140) = 0;
  }
  else {
    **(undefined1 **)(param_1 + 0x150) = 0;
    *(undefined8 *)(param_1 + 0x148) = 0;
  }
  if ((*(byte *)(param_1 + 0x128) & 1) == 0) {
    *(undefined2 *)(param_1 + 0x128) = 0;
  }
  else {
    **(undefined1 **)(param_1 + 0x138) = 0;
    *(undefined8 *)(param_1 + 0x130) = 0;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009fe884(long param_1,byte *param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  long lVar3;
  byte *pbVar4;
  long lVar5;
  
  pbVar1 = (byte *)(param_1 + 0x140);
  if ((*(byte *)(param_1 + 0x140) & 1) == 0) {
    lVar5 = param_1 + 0x141;
  }
  else {
    lVar5 = *(long *)(param_1 + 0x150);
  }
  pbVar2 = (byte *)(param_1 + 0x128);
  if ((*(byte *)(param_1 + 0x128) & 1) == 0) {
    lVar3 = param_1 + 0x129;
  }
  else {
    lVar3 = *(long *)(param_1 + 0x138);
  }
  pbVar4 = *(byte **)(param_2 + 0x10);
  if ((*param_2 & 1) == 0) {
    pbVar4 = param_2 + 1;
  }
  FUN_009029a4(lVar5,lVar3,pbVar4);
  lVar5 = param_1 + 0x38;
  FUN_00e84dec(lVar5);
  FUN_00e84e9c(lVar5);
  FUN_008fce60(param_1 + 0x68,param_2);
  FUN_0094b718(lVar5);
  if (*(int *)(param_1 + 0x178) != 0) {
    lVar5 = *(long *)(param_1 + 0x180);
    do {
      if (*(code **)(lVar5 + 8) == (code *)0x0) {
        (**(code **)(lVar5 + 0x18))(*(undefined8 *)(lVar5 + 0x10));
      }
      else {
        (**(code **)(lVar5 + 8))();
      }
      lVar5 = lVar5 + 0x20;
    } while (lVar5 != *(long *)(param_1 + 0x180) + (ulong)*(uint *)(param_1 + 0x178) * 0x20);
  }
  if ((*pbVar1 & 1) == 0) {
    pbVar1[0] = 0;
    pbVar1[1] = 0;
  }
  else {
    **(undefined1 **)(param_1 + 0x150) = 0;
    *(undefined8 *)(param_1 + 0x148) = 0;
  }
  if ((*pbVar2 & 1) == 0) {
    pbVar2[0] = 0;
    pbVar2[1] = 0;
  }
  else {
    **(undefined1 **)(param_1 + 0x138) = 0;
    *(undefined8 *)(param_1 + 0x130) = 0;
  }
  return;
}




void FUN_009fe994(long param_1)

{
  FUN_009fe738(param_1 + -0x30);
  return;
}




void FUN_009fe99c(undefined8 param_1,int param_2)

{
  long lVar1;
  char *pcVar2;
  byte local_40 [16];
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (param_2 == 0) {
    pcVar2 = "no_ads_available";
  }
  else {
    pcVar2 = "unknown";
  }
  FUN_008fa54c(local_40,pcVar2);
  FUN_009fe884(param_1,local_40);
  if ((local_40[0] & 1) != 0) {
    operator_delete(local_30);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009fea1c(long param_1)

{
  FUN_009fe99c(param_1 + -0x30);
  return;
}




undefined4 FUN_009fea24(long param_1,byte *param_2,byte *param_3)

{
  void *pvVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  byte *pbVar6;
  byte *pbVar7;
  undefined4 uVar8;
  ulong local_70 [2];
  void *local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  local_70[0] = 0;
  local_70[1] = 0;
  local_60 = (void *)0x0;
  uVar4 = FUN_00e81200(local_70);
  uVar8 = 0;
  if ((uVar4 & 1) != 0) {
    iVar3 = FUN_009fe4d0(param_1,param_3);
    uVar8 = 0;
    if (iVar3 == 1) {
      thunk_FUN_00937f24(param_1 + 0x30);
      pbVar6 = *(byte **)(param_2 + 0x10);
      pbVar7 = *(byte **)(param_3 + 0x10);
      pvVar1 = (void *)((ulong)local_70 | 1);
      if ((local_70[0] & 1) != 0) {
        pvVar1 = local_60;
      }
      if ((*param_2 & 1) == 0) {
        pbVar6 = param_2 + 1;
      }
      if ((*param_3 & 1) == 0) {
        pbVar7 = param_3 + 1;
      }
      uVar5 = FUN_00966db0();
      thunk_FUN_00937f24(pvVar1,pbVar6,pbVar7,uVar5);
      pbVar6 = *(byte **)(param_3 + 0x10);
      pbVar7 = *(byte **)(param_2 + 0x10);
      if ((*param_3 & 1) == 0) {
        pbVar6 = param_3 + 1;
      }
      if ((*param_2 & 1) == 0) {
        pbVar7 = param_2 + 1;
      }
      FUN_009028a0(pbVar6,pbVar7);
      FUN_008fce60(param_1 + 0x140,param_3);
      FUN_008fce60(param_1 + 0x128,param_2);
      uVar8 = 1;
    }
  }
  if ((local_70[0] & 1) != 0) {
    operator_delete(local_60);
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009feb64(undefined8 param_1)

{
  FUN_009fe27c();
  FUN_009fe380(param_1);
  return;
}




void FUN_009feb88(uint *param_1,uint *param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  if (param_1 != param_2) {
    FUN_00952bf0(param_1,1);
    FUN_00952b0c(param_1,*param_2);
    uVar2 = 0;
    if (*param_2 != 0) {
      lVar3 = *(long *)(param_2 + 2);
      lVar4 = *(long *)(param_1 + 2);
      lVar5 = lVar3 + (ulong)*param_2 * 0x30;
      do {
        FUN_008fcdb8(lVar4,lVar3);
        *(undefined2 *)(lVar4 + 0x28) = *(undefined2 *)(lVar3 + 0x28);
        puVar1 = (undefined8 *)(lVar3 + 0x20);
        uVar6 = *(undefined8 *)(lVar3 + 0x18);
        lVar3 = lVar3 + 0x30;
        *(undefined8 *)(lVar4 + 0x20) = *puVar1;
        *(undefined8 *)(lVar4 + 0x18) = uVar6;
        lVar4 = lVar4 + 0x30;
      } while (lVar3 != lVar5);
      uVar2 = *param_2;
    }
    *param_1 = uVar2;
  }
  return;
}




void FUN_009fec24(void)

{
  undefined8 *puVar1;
  
  puVar1 = operator_new(0xb0);
  FUN_00e83560();
  FUN_00948cd8(puVar1 + 3);
  *puVar1 = &PTR_FUN_027c6aa8;
  puVar1[3] = &PTR_FUN_027c6b18;
  *(undefined4 *)((long)puVar1 + 0xa4) = 0;
  memset(puVar1 + 6,0,0x41);
  *(undefined1 *)(puVar1 + 0x14) = 0;
  puVar1[0x12] = 0;
  puVar1[0x13] = 0;
  puVar1[0x10] = 0;
  puVar1[0x11] = 0;
  puVar1[0xf] = 0;
  DAT_031308c8 = puVar1;
  return;
}




void FUN_009fec98(void)

{
  if (DAT_031308c8 != (long *)0x0) {
    (**(code **)(*DAT_031308c8 + 8))();
  }
  DAT_031308c8 = (long *)0x0;
  return;
}




bool FUN_009feccc(void)

{
  return DAT_031308c8 != 0;
}




undefined8 FUN_009fece0(void)

{
  return DAT_031308c8;
}




void FUN_009fecec(undefined8 *param_1)

{
  FUN_00e83560();
  FUN_00948cd8(param_1 + 3);
  *param_1 = &PTR_FUN_027c6aa8;
  param_1[3] = &PTR_FUN_027c6b18;
  *(undefined4 *)((long)param_1 + 0xa4) = 0;
  memset(param_1 + 6,0,0x41);
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0xf] = 0;
  *(undefined1 *)(param_1 + 0x14) = 0;
  return;
}




void FUN_009fed50(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  double dVar5;
  undefined8 local_68;
  void *local_60;
  undefined8 local_58;
  void *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_009580b8();
  dVar5 = (double)FUN_00961684();
  if (dVar5 <= 0.0) {
    lVar3 = FUN_00cead68(param_4);
    uVar2 = FUN_00e6ce7c(*(undefined8 *)(lVar3 + 0x78),0);
    uVar4 = FUN_00e6ce7c("MENU_TOASTIE_INVITED_TO_PARTY",0);
    thunk_FUN_00e7051c(&local_58,uVar4);
    FUN_00e705c8(&local_68,"[HANDLE]");
    FUN_00e71248(&local_58,0,&local_68,param_3);
    if (local_60 != (void *)0x0) {
      operator_delete__(local_60);
      local_68 = 0;
      local_60 = (void *)0x0;
    }
    FUN_00e705c8(&local_68,"[GAME_MODE_NAME]");
    FUN_00e71248(&local_58,0,&local_68,uVar2);
    if (local_60 != (void *)0x0) {
      operator_delete__(local_60);
      local_68 = 0;
      local_60 = (void *)0x0;
    }
    FUN_00a9db04(0xbf800000,&local_58,FUN_009feeb4,param_2,FUN_009feebc,param_2,param_1,1,0,1);
    if (local_50 != (void *)0x0) {
      operator_delete__(local_50);
      local_58 = 0;
      local_50 = (void *)0x0;
    }
  }
  else {
    uVar2 = FUN_009580b8();
    FUN_00960ba4(uVar2,param_2);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009feeb4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  FUN_009ffd24(param_1,param_2,param_5);
  return;
}




void FUN_009feebc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  FUN_009ffeec(param_1,param_2,param_5);
  return;
}




void FUN_009feec4(long param_1)

{
  FUN_009fed50(param_1 + -0x18);
  return;
}




void FUN_009feecc(undefined8 param_1,long param_2)

{
  char *pcVar1;
  undefined8 uVar2;
  
  if (*(int *)(param_2 + 0x28) != 0) {
    if (*(int *)(param_2 + 0x28) == -0x12) {
      pcVar1 = "MENU_PARTY_CANNOT_ACCEPT_NO_LONGER_EXISTS";
    }
    else {
      pcVar1 = "MENU_PARTY_CANNOT_ACCEPT_NO_LONGER_VALID";
    }
    uVar2 = FUN_00e6ce7c(pcVar1,0);
    FUN_00a9da50(0x40200000,uVar2,1,1);
    return;
  }
  return;
}




void thunk_FUN_009feecc(undefined8 param_1,long param_2)

{
  char *pcVar1;
  undefined8 uVar2;
  
  if (*(int *)(param_2 + 0x28) != 0) {
    if (*(int *)(param_2 + 0x28) == -0x12) {
      pcVar1 = "MENU_PARTY_CANNOT_ACCEPT_NO_LONGER_EXISTS";
    }
    else {
      pcVar1 = "MENU_PARTY_CANNOT_ACCEPT_NO_LONGER_VALID";
    }
    uVar2 = FUN_00e6ce7c(pcVar1,0);
    FUN_00a9da50(0x40200000,uVar2,1,1);
    return;
  }
  return;
}




void FUN_009fef20(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  if (*(int *)(param_2 + 0x40) != 0) {
    uVar1 = FUN_00e6ce7c("MENU_PARTY_CANNOT_REJECT",0);
    FUN_00a9da50(0x40200000,uVar1,1,1);
    return;
  }
  return;
}




void thunk_FUN_009fef20(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  if (*(int *)(param_2 + 0x40) != 0) {
    uVar1 = FUN_00e6ce7c("MENU_PARTY_CANNOT_REJECT",0);
    FUN_00a9da50(0x40200000,uVar1,1,1);
    return;
  }
  return;
}




void FUN_009fef5c(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = FUN_009580b8();
  FUN_009fef88(param_1,*(undefined1 *)(lVar1 + 0x568a));
  return;
}




void FUN_009fef88(long param_1,byte param_2)

{
  char cVar1;
  long lVar2;
  
  cVar1 = *(char *)(param_1 + 0x70);
  *(byte *)(param_1 + 0x70) = param_2 & 1;
  if ((cVar1 == '\0') && ((param_2 & 1) != 0)) {
    if (*(int *)(param_1 + 0x30) != 0) {
      lVar2 = *(long *)(param_1 + 0x38);
      do {
        if (*(code **)(lVar2 + 8) == (code *)0x0) {
          (**(code **)(lVar2 + 0x18))(*(undefined8 *)(lVar2 + 0x10));
        }
        else {
          (**(code **)(lVar2 + 8))();
        }
        lVar2 = lVar2 + 0x20;
      } while (lVar2 != *(long *)(param_1 + 0x38) + (ulong)*(uint *)(param_1 + 0x30) * 0x20);
    }
  }
  else if ((cVar1 != '\0') && (((param_2 & 1) == 0 && (*(int *)(param_1 + 0x40) != 0)))) {
    lVar2 = *(long *)(param_1 + 0x48);
    do {
      if (*(code **)(lVar2 + 8) == (code *)0x0) {
        (**(code **)(lVar2 + 0x18))(*(undefined8 *)(lVar2 + 0x10));
      }
      else {
        (**(code **)(lVar2 + 8))();
      }
      lVar2 = lVar2 + 0x20;
    } while (lVar2 != *(long *)(param_1 + 0x48) + (ulong)*(uint *)(param_1 + 0x40) * 0x20);
  }
  if ((param_2 & 1) == 0) {
    return;
  }
  FUN_0093a654(1);
  return;
}

