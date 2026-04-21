// functions/009e1 — 25 functions
#include "libGameKindred.h"




void FUN_009e1010(long param_1)

{
  FUN_009e0cec(param_1 + 0x58);
  return;
}




void FUN_009e1018(long param_1,long param_2)

{
  ulong uVar1;
  undefined1 *puVar2;
  ulong uVar3;
  
  uVar3 = 0;
  puVar2 = (undefined1 *)(param_2 + 9);
  while ((puVar2[-1] == '\0' ||
         (uVar1 = FUN_00ced270(*(undefined2 *)(puVar2 + 10)), (uVar1 & 1) == 0))) {
    uVar3 = uVar3 + 1;
    puVar2 = puVar2 + 0xa1;
    if (0xf < uVar3) {
LAB_009e1080:
      FUN_009e1098(param_1 + 8,param_2);
      return;
    }
  }
  *(undefined1 *)(param_1 + 0x88) = puVar2[7];
  *(undefined1 *)(param_1 + 0x89) = *puVar2;
  if (puVar2[2] != '\0') {
    *(uint *)(param_1 + 0x90) = (uint)*(ushort *)(puVar2 + 8);
  }
  goto LAB_009e1080;
}




void FUN_009e1098(uint *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  if (*param_1 != 0) {
    puVar1 = *(undefined8 **)(param_1 + 2);
    do {
      if ((code *)*puVar1 == (code *)0x0) {
        (*(code *)puVar1[3])(puVar1[2],param_2);
      }
      else {
        (*(code *)*puVar1)(param_2);
      }
      puVar1 = puVar1 + 4;
    } while (puVar1 != (undefined8 *)(*(long *)(param_1 + 2) + (ulong)*param_1 * 0x20));
  }
  return;
}




void FUN_009e1104(long param_1,long param_2)

{
  ulong uVar1;
  undefined1 *puVar2;
  ulong uVar3;
  
  uVar3 = 0;
  puVar2 = (undefined1 *)(param_2 + 9);
  while ((puVar2[-1] == '\0' ||
         (uVar1 = FUN_00ced270(*(undefined2 *)(puVar2 + 10)), (uVar1 & 1) == 0))) {
    uVar3 = uVar3 + 1;
    puVar2 = puVar2 + 0xa1;
    if (0xf < uVar3) {
LAB_009e116c:
      FUN_009e1184(param_1 + 0x28,param_2);
      return;
    }
  }
  *(undefined1 *)(param_1 + 0x88) = puVar2[7];
  *(undefined1 *)(param_1 + 0x89) = *puVar2;
  if (puVar2[2] != '\0') {
    *(uint *)(param_1 + 0x90) = (uint)*(ushort *)(puVar2 + 8);
  }
  goto LAB_009e116c;
}




void FUN_009e1184(uint *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  if (*param_1 != 0) {
    puVar1 = *(undefined8 **)(param_1 + 2);
    do {
      if ((code *)*puVar1 == (code *)0x0) {
        (*(code *)puVar1[3])(puVar1[2],param_2);
      }
      else {
        (*(code *)*puVar1)(param_2);
      }
      puVar1 = puVar1 + 4;
    } while (puVar1 != (undefined8 *)(*(long *)(param_1 + 2) + (ulong)*param_1 * 0x20));
  }
  return;
}




void FUN_009e11f0(long param_1,long param_2)

{
  ulong uVar1;
  char *pcVar2;
  ulong uVar3;
  
  uVar3 = 0;
  pcVar2 = (char *)(param_2 + 0x108);
  while ((*pcVar2 == '\0' || (uVar1 = FUN_00ced270(*(undefined2 *)(pcVar2 + 0xb)), (uVar1 & 1) == 0)
         )) {
    uVar3 = uVar3 + 1;
    pcVar2 = pcVar2 + 0xa6;
    if (9 < uVar3) {
LAB_009e1248:
      FUN_009e1260(param_1 + 0x18,param_2);
      return;
    }
  }
  *(char *)(param_1 + 0x88) = pcVar2[8];
  *(char *)(param_1 + 0x89) = pcVar2[1];
  goto LAB_009e1248;
}




void FUN_009e1260(uint *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  if (*param_1 != 0) {
    puVar1 = *(undefined8 **)(param_1 + 2);
    do {
      if ((code *)*puVar1 == (code *)0x0) {
        (*(code *)puVar1[3])(puVar1[2],param_2);
      }
      else {
        (*(code *)*puVar1)(param_2);
      }
      puVar1 = puVar1 + 4;
    } while (puVar1 != (undefined8 *)(*(long *)(param_1 + 2) + (ulong)*param_1 * 0x20));
  }
  return;
}




void FUN_009e12cc(long param_1)

{
  long lVar1;
  
  if (*(int *)(param_1 + 0x48) != 0) {
    lVar1 = *(long *)(param_1 + 0x50);
    do {
      if (*(code **)(lVar1 + 8) == (code *)0x0) {
        (**(code **)(lVar1 + 0x18))(*(undefined8 *)(lVar1 + 0x10));
      }
      else {
        (**(code **)(lVar1 + 8))();
      }
      lVar1 = lVar1 + 0x20;
    } while (lVar1 != *(long *)(param_1 + 0x50) + (ulong)*(uint *)(param_1 + 0x48) * 0x20);
  }
  return;
}




void FUN_009e1324(long param_1)

{
  FUN_009e132c(param_1 + 0x38);
  return;
}




void FUN_009e132c(uint *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  if (*param_1 != 0) {
    puVar1 = *(undefined8 **)(param_1 + 2);
    do {
      if ((code *)*puVar1 == (code *)0x0) {
        (*(code *)puVar1[3])(puVar1[2],param_2);
      }
      else {
        (*(code *)*puVar1)(param_2);
      }
      puVar1 = puVar1 + 4;
    } while (puVar1 != (undefined8 *)(*(long *)(param_1 + 2) + (ulong)*param_1 * 0x20));
  }
  return;
}




void FUN_009e1398(long param_1,uint param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if ((*(byte *)(lVar1 + (ulong)param_2 * 0x18) & 1) != 0) {
    operator_delete(*(void **)(lVar1 + (ulong)param_2 * 0x18 + 0x10));
  }
  *(undefined4 *)(lVar1 + (ulong)param_2 * 0x18) = *(undefined4 *)(param_1 + 0x28);
  *(uint *)(param_1 + 0x28) = param_2;
  return;
}




long FUN_009e13fc(uint *param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  
  uVar8 = *param_2;
  uVar4 = FUN_00e6a474(uVar8);
  uVar5 = FUN_0091ed5c(uVar8,uVar4,0x12345678);
  uVar2 = *param_1;
  if (uVar2 != 0) {
    lVar6 = *(long *)(param_1 + 2);
    uVar3 = 0;
    if (uVar2 != 0) {
      uVar3 = uVar5 / uVar2;
    }
    uVar3 = uVar5 - uVar3 * uVar2;
    while ((*(uint *)(lVar6 + (ulong)uVar3 * 8) != uVar5 &&
           (*(int *)(lVar6 + (ulong)uVar3 * 8 + 4) != -1))) {
      uVar1 = uVar2;
      if (0 < (int)uVar3) {
        uVar1 = uVar3;
      }
      uVar3 = uVar1 - 1;
    }
    if (uVar3 != 0xffffffff) {
      uVar7 = (ulong)*(uint *)(lVar6 + (ulong)uVar3 * 8 + 4);
      goto LAB_009e1488;
    }
  }
  uVar7 = 0xffffffff;
LAB_009e1488:
  return *(long *)(param_1 + 8) + uVar7 * 0x18;
}




ulong FUN_009e14a0(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined1 auStack_50 [24];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar3 = (ulong)*(uint *)(param_1 + 0x28);
  if (*(uint *)(param_1 + 0x28) == 0xffffffff) {
    FUN_009e1540(param_1 + 0x18,auStack_50);
    lVar2 = *(long *)(param_1 + 0x20);
    uVar3 = (ulong)(*(int *)(param_1 + 0x18) - 1);
  }
  else {
    lVar2 = *(long *)(param_1 + 0x20);
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(lVar2 + uVar3 * 0x18);
  }
  FUN_008fcdb8(lVar2 + uVar3 * 0x18,param_2);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009e1540(uint *param_1,undefined8 *param_2)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  
  uVar4 = *param_1;
  if (uVar4 == param_1[1]) {
    if (uVar4 < 0x20) {
      uVar3 = uVar4 << 1;
    }
    else if (uVar4 == 0xffffffff) {
      uVar3 = 0;
    }
    else {
      uVar3 = (uVar4 + 0x10) - (uVar4 & 0xf);
    }
    uVar1 = uVar4 + 1;
    if (uVar4 + 1 <= uVar3) {
      uVar1 = uVar3;
    }
    FUN_009e15d4(param_1,uVar1);
    uVar4 = *param_1;
  }
  *param_1 = uVar4 + 1;
  lVar2 = *(long *)(param_1 + 2) + (ulong)(uVar4 + 1) * 0x18;
  *(undefined8 *)(lVar2 + -8) = param_2[2];
  uVar5 = *param_2;
  *(undefined8 *)(lVar2 + -0x10) = param_2[1];
  *(undefined8 *)(lVar2 + -0x18) = uVar5;
  return;
}




void FUN_009e15d4(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 * 0x18);
    puVar2 = *(undefined8 **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar3 = (ulong)*param_1 * 0x18;
      puVar4 = puVar1;
      do {
        lVar3 = lVar3 + -0x18;
        puVar4[2] = puVar2[2];
        uVar5 = *puVar2;
        puVar4[1] = puVar2[1];
        *puVar4 = uVar5;
        puVar4 = puVar4 + 3;
        puVar2 = puVar2 + 3;
      } while (lVar3 != 0);
      puVar2 = *(undefined8 **)(param_1 + 2);
    }
    param_1[1] = param_2;
    if (puVar2 != (undefined8 *)0x0) {
      operator_delete__(puVar2);
    }
    *(undefined8 **)(param_1 + 2) = puVar1;
  }
  return;
}




void FUN_009e1664(undefined8 *param_1)

{
  param_1[1] = &PTR_FUN_027c3af8;
  *param_1 = &PTR_FUN_027c3ab8;
  memset(param_1 + 2,0,0x58);
  *(undefined4 *)(param_1 + 0xd) = 200;
  return;
}




void FUN_009e16b0(undefined8 *param_1)

{
  param_1[1] = &PTR_FUN_027c3af8;
  *param_1 = &PTR_FUN_027c3ab8;
  FUN_009e1744(param_1 + 0xb,0);
  FUN_009e1744(param_1 + 0xb,1);
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    operator_delete((void *)param_1[10]);
  }
  if ((void *)param_1[7] != (void *)0x0) {
    operator_delete__((void *)param_1[7]);
    param_1[6] = 0;
    param_1[7] = 0;
  }
  if ((void *)param_1[5] != (void *)0x0) {
    operator_delete__((void *)param_1[5]);
    param_1[4] = 0;
    param_1[5] = 0;
  }
  if ((void *)param_1[3] != (void *)0x0) {
    operator_delete__((void *)param_1[3]);
    param_1[2] = 0;
    param_1[3] = 0;
  }
  return;
}




void FUN_009e1744(uint *param_1,ulong param_2)

{
  long lVar1;
  undefined8 *puVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  
  lVar4 = *(long *)(param_1 + 2);
  if (lVar4 != 0) {
    uVar3 = *param_1;
    if (uVar3 != 0) {
      lVar5 = 0;
      do {
        lVar1 = lVar4 + lVar5;
        FUN_00910328(lVar1 + 0x68,*(undefined8 *)(lVar1 + 0x70));
        if ((*(byte *)(lVar1 + 0x50) & 1) != 0) {
          operator_delete(*(void **)(lVar1 + 0x60));
        }
        if ((*(byte *)(lVar1 + 0x38) & 1) != 0) {
          operator_delete(*(void **)(lVar4 + lVar5 + 0x48));
        }
        lVar1 = lVar4 + lVar5;
        if ((*(byte *)(lVar1 + 0x20) & 1) != 0) {
          operator_delete(*(void **)(lVar1 + 0x30));
        }
        if (*(void **)(lVar1 + 0x18) != (void *)0x0) {
          operator_delete__(*(void **)(lVar1 + 0x18));
          *(undefined8 *)(lVar4 + lVar5 + 0x10) = 0;
          *(undefined8 *)(lVar4 + lVar5 + 0x18) = 0;
        }
        puVar2 = (undefined8 *)(lVar4 + lVar5);
        if ((void *)puVar2[1] != (void *)0x0) {
          operator_delete__((void *)puVar2[1]);
          *puVar2 = 0;
          puVar2[1] = 0;
        }
        lVar5 = lVar5 + 0x88;
      } while ((ulong)uVar3 * 0x88 - lVar5 != 0);
    }
    if ((param_2 & 1) != 0) {
      if (*(void **)(param_1 + 2) != (void *)0x0) {
        operator_delete__(*(void **)(param_1 + 2));
      }
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[1] = 0;
    }
    *param_1 = 0;
  }
  return;
}




void FUN_009e1828(void *param_1)

{
  FUN_009e16b0();
  operator_delete(param_1);
  return;
}




void FUN_009e184c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,uint param_7,byte param_8,byte param_9,
                 long param_10)

{
  long lVar1;
  short sVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  int iVar7;
  ulong local_128;
  void *local_120;
  void *local_118;
  undefined8 local_110;
  void *local_108;
  int local_fc;
  undefined8 local_f8;
  void *local_f0;
  undefined8 local_e8;
  void *local_e0;
  byte local_d8;
  void *local_c8;
  byte local_c0;
  void *local_b0;
  byte local_a8;
  void *local_98;
  undefined1 auStack_90 [8];
  undefined8 local_88;
  long local_70;
  
  lVar1 = tpidr_el0;
  local_70 = *(long *)(lVar1 + 0x28);
  local_fc = 0;
  uVar4 = FUN_00e7107c(param_2,0,0x3a,&local_fc);
  if ((uVar4 & 1) == 0) {
LAB_009e18dc:
    iVar7 = 0;
    local_fc = 0;
  }
  else {
    sVar2 = FUN_00e70b1c(param_2,local_fc + 1);
    if (sVar2 != 0x20) goto LAB_009e18dc;
    iVar7 = local_fc + 2;
  }
  FUN_00e70570(&local_110,param_3);
  if (param_10 == 0) {
    lVar6 = FUN_00916034(param_3);
    if (lVar6 != 0) {
      FUN_00910394(&local_110,lVar6 + 0x20);
    }
  }
  else {
    uVar5 = thunk_FUN_00ec6548();
    FUN_008fa54c(&local_128,uVar5);
    lVar6 = FUN_009e2b04(param_10,&local_128);
    if ((local_128 & 1) != 0) {
      operator_delete(local_118);
    }
    if (param_10 + 8 != lVar6) {
      uVar5 = FUN_00ec3f08(lVar6 + 0x38);
      FUN_00e705c8(&local_128,uVar5);
      FUN_00910394(&local_110,&local_128);
      if (local_120 != (void *)0x0) {
        operator_delete__(local_120);
        local_128 = 0;
        local_120 = (void *)0x0;
      }
    }
  }
  uVar4 = FUN_0090dbdc(&local_110);
  if ((uVar4 & 1) == 0) {
    if (param_10 != 0) {
      FUN_00ac3dfc(&local_128);
      lVar6 = FUN_009e2b04(param_10,&local_128);
      if ((local_128 & 1) != 0) {
        operator_delete(local_118);
      }
      if ((param_10 + 8 != lVar6) && (iVar3 = FUN_00ec3f24(lVar6 + 0x38), iVar3 != 0)) {
        FUN_00ac3dec(&local_128);
        lVar6 = FUN_009e2b04(param_10,&local_128);
        if ((local_128 & 1) != 0) {
          operator_delete(local_118);
        }
        if (param_10 + 8 != lVar6) {
          FUN_00ec3f24(lVar6 + 0x38);
          uVar4 = FUN_0090dbfc();
          if ((uVar4 & 1) != 0) goto LAB_009e1b14;
        }
      }
    }
    iVar3 = FUN_00e70b14(param_2);
    FUN_00e71810(&local_128,param_2,iVar7,iVar3 - iVar7);
    FUN_009e1bb4(&local_f8,&local_110,&local_128,param_4,param_5,param_6,param_10,param_7 & 1,
                 param_8 & 1,param_9 & 1);
    FUN_009e1b58(param_1,&local_f8);
    FUN_00910328(auStack_90,local_88);
    if ((local_a8 & 1) != 0) {
      operator_delete(local_98);
    }
    if ((local_c0 & 1) != 0) {
      operator_delete(local_b0);
    }
    if ((local_d8 & 1) != 0) {
      operator_delete(local_c8);
    }
    if (local_e0 != (void *)0x0) {
      operator_delete__(local_e0);
      local_e8 = 0;
      local_e0 = (void *)0x0;
    }
    if (local_f0 != (void *)0x0) {
      operator_delete__(local_f0);
      local_f8 = 0;
      local_f0 = (void *)0x0;
    }
    if (*(int *)(param_1 + 0x10) != 0) {
      lVar6 = *(long *)(param_1 + 0x18);
      do {
        if (*(code **)(lVar6 + 8) == (code *)0x0) {
          (**(code **)(lVar6 + 0x18))(*(undefined8 *)(lVar6 + 0x10));
        }
        else {
          (**(code **)(lVar6 + 8))();
        }
        lVar6 = lVar6 + 0x20;
      } while (lVar6 != *(long *)(param_1 + 0x18) + (ulong)*(uint *)(param_1 + 0x10) * 0x20);
    }
    if (local_120 != (void *)0x0) {
      operator_delete__(local_120);
      local_128 = 0;
      local_120 = (void *)0x0;
    }
  }
LAB_009e1b14:
  if (local_108 != (void *)0x0) {
    operator_delete__(local_108);
    local_110 = 0;
    local_108 = (void *)0x0;
  }
  if (*(long *)(lVar1 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009e1b58(long param_1)

{
  int iVar1;
  
  FUN_009e250c(param_1 + 0x58);
  iVar1 = *(uint *)(param_1 + 0x58) - *(uint *)(param_1 + 0x68);
  if ((*(uint *)(param_1 + 0x68) <= *(uint *)(param_1 + 0x58)) && (0 < iVar1)) {
    FUN_009e2598(param_1 + 0x58,*(long *)(param_1 + 0x60),
                 *(long *)(param_1 + 0x60) + (long)iVar1 * 0x88);
    return;
  }
  return;
}




void FUN_009e1bb4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 *param_7,byte param_8,byte param_9
                 ,byte param_10)

{
  thunk_FUN_00e7051c();
  thunk_FUN_00e7051c(param_1 + 0x10,param_3);
  FUN_008fcdb8(param_1 + 0x20,param_4);
  FUN_008fcdb8(param_1 + 0x38,param_5);
  FUN_008fcdb8(param_1 + 0x50,param_6);
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 **)(param_1 + 0x68) = (undefined8 *)(param_1 + 0x70);
  *(byte *)(param_1 + 0x80) = param_8 & 1;
  *(byte *)(param_1 + 0x81) = param_9 & 1;
  *(byte *)(param_1 + 0x82) = param_10 & 1;
  if ((param_7 != (undefined8 *)0x0) && ((undefined8 *)(param_1 + 0x68) != param_7)) {
    FUN_009e2750((undefined8 *)(param_1 + 0x68),*param_7,param_7 + 1);
    return;
  }
  return;
}




void FUN_009e1c98(long param_1,long param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  size_t __n;
  size_t sVar1;
  byte bVar2;
  long lVar3;
  byte bVar4;
  bool bVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  char *__s2;
  char *pcVar9;
  void *__s1;
  byte local_1c0 [16];
  void *local_1b0;
  ulong local_1a8;
  undefined8 uStack_1a0;
  void *local_198;
  ulong uStack_190;
  undefined8 local_188;
  void *pvStack_180;
  undefined1 local_178;
  byte local_170 [8];
  size_t local_168;
  char *local_160;
  long local_70;
  
  lVar3 = tpidr_el0;
  local_70 = *(long *)(lVar3 + 0x28);
  lVar7 = FUN_009580b8();
  FUN_008fa54c(local_170,param_3);
  bVar4 = local_170[0];
  bVar2 = *(byte *)(lVar7 + 0x5508);
  __n = (ulong)(bVar2 >> 1);
  if ((bVar2 & 1) != 0) {
    __n = *(size_t *)(lVar7 + 0x5510);
  }
  sVar1 = (ulong)(local_170[0] >> 1);
  if ((local_170[0] & 1) != 0) {
    sVar1 = local_168;
  }
  bVar5 = false;
  if (__n == sVar1) {
    __s1 = *(void **)(lVar7 + 0x5518);
    if ((bVar2 & 1) == 0) {
      __s1 = (void *)(lVar7 + 0x5509);
    }
    __s2 = (char *)((ulong)local_170 | 1);
    if ((local_170[0] & 1) != 0) {
      __s2 = local_160;
    }
    if ((bVar2 & 1) == 0) {
      if (__n != 0) {
        pcVar9 = (char *)(lVar7 + 0x5509);
        lVar7 = -(ulong)(bVar2 >> 1);
        do {
          if (*pcVar9 != *__s2) {
            bVar5 = false;
            goto joined_r0x009e1dac;
          }
          pcVar9 = pcVar9 + 1;
          lVar7 = lVar7 + 1;
          __s2 = __s2 + 1;
        } while (lVar7 != 0);
      }
    }
    else if (__n != 0) {
      iVar6 = memcmp(__s1,__s2,__n);
      bVar5 = iVar6 == 0;
      goto joined_r0x009e1dac;
    }
    bVar5 = true;
  }
joined_r0x009e1dac:
  if ((bVar4 & 1) != 0) {
    operator_delete(local_160);
  }
  if (bVar5) {
    if ((*(byte *)(param_2 + 8) & 1) == 0) {
      param_2 = param_2 + 9;
    }
    else {
      param_2 = *(long *)(param_2 + 0x18);
    }
    FUN_0090d8f8(param_2,200);
  }
  uVar8 = thunk_FUN_00ec6548();
  FUN_008fa54c(local_170,uVar8);
  lVar7 = FUN_009e2b04(param_5,local_170);
  if ((local_170[0] & 1) != 0) {
    operator_delete(local_160);
  }
  if (param_5 + 8 != lVar7) {
    pvStack_180 = (void *)0x0;
    local_188 = 0;
    uStack_190 = 0;
    local_198 = (void *)0x0;
    uStack_1a0 = 0;
    local_1a8 = 0;
    uVar8 = FUN_00ec3f08(lVar7 + 0x38);
    FUN_008fa54c(local_170,uVar8);
    FUN_008fce60(&local_1a8,local_170);
    if ((local_170[0] & 1) != 0) {
      operator_delete(local_160);
    }
    local_170[0] = 0;
    lVar7 = FUN_00e85318(0);
    FUN_00e6c2cc((double)lVar7,local_170,0x100);
    FUN_008fa54c(local_1c0,local_170);
    FUN_008fce60(&uStack_190,local_1c0);
    if ((local_1c0[0] & 1) != 0) {
      operator_delete(local_1b0);
    }
    local_178 = 1;
    FUN_009e1f08(param_1 + 0x20,&local_1a8);
    if ((uStack_190 & 1) != 0) {
      operator_delete(pvStack_180);
    }
    if ((local_1a8 & 1) != 0) {
      operator_delete(local_198);
    }
  }
  if (*(long *)(lVar3 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_009e1f08(uint *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  if (*param_1 != 0) {
    puVar1 = *(undefined8 **)(param_1 + 2);
    do {
      if ((code *)*puVar1 == (code *)0x0) {
        (*(code *)puVar1[3])(puVar1[2],param_2);
      }
      else {
        (*(code *)*puVar1)(param_2);
      }
      puVar1 = puVar1 + 4;
    } while (puVar1 != (undefined8 *)(*(long *)(param_1 + 2) + (ulong)*param_1 * 0x20));
  }
  return;
}




void FUN_009e1f74(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long in_x5;
  byte local_198 [16];
  void *local_188;
  ulong local_180 [2];
  void *local_170;
  ulong auStack_168 [2];
  void *local_158;
  undefined1 local_14f;
  byte local_148 [16];
  void *local_138;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar2 = thunk_FUN_00ec6548();
  FUN_008fa54c(local_148,uVar2);
  lVar3 = FUN_009e2b04(in_x5,local_148);
  if ((local_148[0] & 1) != 0) {
    operator_delete(local_138);
  }
  if (in_x5 + 8 != lVar3) {
    auStack_168[0] = 0;
    local_170 = (void *)0x0;
    local_158 = (void *)0x0;
    auStack_168[1] = 0;
    local_180[1] = 0;
    local_180[0] = 0;
    uVar2 = FUN_00ec3f08(lVar3 + 0x38);
    FUN_008fa54c(local_148,uVar2);
    FUN_008fce60(local_180,local_148);
    if ((local_148[0] & 1) != 0) {
      operator_delete(local_138);
    }
    local_148[0] = 0;
    lVar3 = FUN_00e85318(0);
    FUN_00e6c2cc((double)lVar3,local_148,0x100);
    FUN_008fa54c(local_198,local_148);
    FUN_008fce60(auStack_168,local_198);
    if ((local_198[0] & 1) != 0) {
      operator_delete(local_188);
    }
    local_14f = 1;
    FUN_009e1f08(param_1 + 0x30,local_180);
    if ((auStack_168[0] & 1) != 0) {
      operator_delete(local_158);
    }
    if ((local_180[0] & 1) != 0) {
      operator_delete(local_170);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

