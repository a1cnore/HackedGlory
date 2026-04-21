// functions/009db — 41 functions
#include "libGameKindred.h"




void FUN_009db020(long param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = (float)FUN_01988c78();
  fVar2 = *(float *)(param_1 + 0x1c0);
  fVar3 = *(float *)(param_1 + 0x1bc);
  if (0.001 <= ABS(fVar2 - fVar3)) {
    fVar4 = 1.0;
    if (fVar2 <= fVar3) {
      fVar4 = -1.0;
    }
    fVar3 = fVar3 + fVar1 * fVar4 * 0.25;
    fVar1 = fVar3;
    if (fVar3 <= fVar2) {
      fVar1 = fVar2;
    }
    if (fVar2 <= fVar3) {
      fVar3 = fVar1;
    }
    if (fVar3 <= 0.0) {
      fVar3 = 0.0;
    }
    *(float *)(param_1 + 0x1bc) = fVar3;
  }
  return;
}




void FUN_009db098(void)

{
  float fVar1;
  float fVar2;
  
  fVar2 = DAT_02be32b4;
  fVar1 = (float)FUN_01988c78();
  DAT_02be32b4 = fVar2 - fVar1;
  if (DAT_02be32b4 <= 0.0) {
    DAT_02be32b4 = 0.0;
  }
  fVar2 = 1.0 - DAT_02be32b4;
  DAT_02be32b0 = fVar2 * fVar2 * fVar2 * -0.8 + 1.0;
  return;
}




void FUN_009db0fc(void)

{
  float fVar1;
  float fVar2;
  
  fVar2 = DAT_02be32b4;
  fVar1 = (float)FUN_01988c78();
  DAT_02be32b4 = (float)NEON_fminnm(fVar2 + fVar1,0x3f800000);
  fVar2 = DAT_02be32b4 + -1.0;
  DAT_02be32b0 = fVar2 * fVar2 * fVar2 + 1.0 + 0.2;
  return;
}




void FUN_009db160(float param_1,byte param_2)

{
  DAT_0312f9a8 = param_2 & 1;
  DAT_0312f9ac = param_1 == 0.0 & param_2;
  DAT_0312f9b4 = param_1;
  if ((param_2 & 1) != 0) {
    FUN_009bbfb0();
    DAT_0312f9b0 = FUN_009bc268();
  }
  return;
}




void FUN_009db1ac(float param_1,long param_2,undefined8 param_3,byte param_4,uint param_5,
                 byte param_6,byte param_7,undefined4 param_8)

{
  void *pvVar1;
  long lVar2;
  short sVar3;
  ulong uVar4;
  undefined4 uVar5;
  float fVar6;
  ulong local_98 [2];
  void *local_88;
  ulong local_80 [2];
  void *local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  local_80[0] = 0;
  local_80[1] = 0;
  local_70 = (void *)0x0;
  local_98[0] = 0;
  local_98[1] = 0;
  local_88 = (void *)0x0;
  uVar4 = FUN_00f1c904(param_3,local_80);
  if ((uVar4 & 1) != 0) {
    pvVar1 = (void *)((ulong)local_80 | 1);
    if ((local_80[0] & 1) != 0) {
      pvVar1 = local_70;
    }
    FUN_00f1c8ec(pvVar1,local_98);
    uVar5 = 1;
    if ((param_4 & 1) != 0) {
      uVar5 = 2;
    }
    pvVar1 = (void *)((ulong)local_98 | 1);
    if ((local_98[0] & 1) != 0) {
      pvVar1 = local_88;
    }
    sVar3 = FUN_00ecb058(pvVar1,uVar5,param_5 & 1);
    *(short *)(param_2 + 0x198) = sVar3;
    uVar5 = DAT_03214ce8;
    if (sVar3 == DAT_02bf2574) {
      FUN_01985ca8(param_2);
    }
    else {
      *(undefined8 *)(param_2 + 0x1a0) = 0;
      *(undefined4 *)(param_2 + 0x1a8) = uVar5;
      fVar6 = (float)FUN_008f6bb4();
      *(undefined4 *)(param_2 + 0x1bc) = 0;
      *(undefined4 *)(param_2 + 0x1d4) = param_8;
      *(float *)(param_2 + 0x1c0) = fVar6 * param_1;
      *(float *)(param_2 + 0x1c4) = fVar6 * param_1;
      *(byte *)(param_2 + 0x1d0) =
           (param_6 & 1) << 2 | param_4 & 1 | (param_7 & 1) << 1 | *(byte *)(param_2 + 0x1d0) & 0xf8
      ;
      FUN_009daafc(param_2 + 0x38,1,0,0);
    }
  }
  if ((local_98[0] & 1) != 0) {
    operator_delete(local_88);
  }
  if ((local_80[0] & 1) != 0) {
    operator_delete(local_70);
  }
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009db344(long param_1,undefined8 *param_2)

{
  *(undefined4 *)(param_1 + 0x1b8) = *(undefined4 *)(param_2 + 1);
  *(undefined8 *)(param_1 + 0x1b0) = *param_2;
  return;
}




void FUN_009db358(long param_1,long param_2)

{
  *(long *)(param_1 + 0x1a0) = param_2 + 0x28;
  *(undefined4 *)(param_1 + 0x1a8) = *(undefined4 *)(param_2 + 0x30);
  return;
}




void FUN_009db36c(long param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_009db3b4(param_1 + 0x38,2);
  if ((uVar1 & 1) != 0) {
    FUN_009daafc(param_1 + 0x38,2,0,0);
    return;
  }
  return;
}




bool FUN_009db3b4(ushort *param_1,uint param_2)

{
  uint uVar1;
  ushort uVar2;
  bool bVar3;
  uint uVar4;
  ushort *puVar5;
  
  uVar1 = *param_1 & 0x1f;
  if (uVar1 == 0x1f) {
    bVar3 = true;
  }
  else {
    uVar2 = *param_1 >> 10;
    if ((uVar2 & 0x1f) != 0) {
      uVar4 = 0;
      puVar5 = param_1 + 4;
      do {
        if (*puVar5 == param_2) goto LAB_009db3fc;
        uVar4 = uVar4 + 1;
        puVar5 = puVar5 + 0x1c;
      } while (uVar4 < (uVar2 & 0x1f));
    }
    uVar4 = 0x1f;
LAB_009db3fc:
    bVar3 = true;
    if (uVar4 != uVar1) {
      bVar3 = (1 << (ulong)(uVar4 & 0x1f) & (uint)param_1[(ulong)uVar1 * 0x1c + 5]) != 0;
    }
  }
  return bVar3;
}




void FUN_009db42c(long param_1)

{
  if (*(short *)(param_1 + 0x19a) == DAT_02bf2570) {
    return;
  }
  FUN_009daafc(param_1 + 0x38,4,0,0);
  return;
}




void FUN_009db45c(undefined4 param_1,undefined4 param_2,long param_3)

{
  *(undefined4 *)(param_3 + 0x1c8) = param_1;
  *(undefined4 *)(param_3 + 0x1cc) = param_2;
  return;
}




undefined4 FUN_009db468(long param_1)

{
  return *(undefined4 *)(param_1 + 0x1d4);
}




float FUN_009db470(float param_1,long param_2)

{
  if ((*(byte *)(param_2 + 0x1d0) & 8) != 0) {
    param_1 = DAT_02be32b0 * param_1;
  }
  return param_1;
}




long FUN_009db48c(long param_1)

{
  return param_1 + -0x28;
}




long FUN_009db494(long param_1)

{
  return param_1 + -0x28;
}




undefined8 FUN_009db49c(undefined8 param_1)

{
  FUN_009da5bc();
  return param_1;
}




void FUN_009db4c0(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x009db4c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)();
  return;
}




void FUN_009db4cc(undefined8 *param_1)

{
  undefined2 uVar1;
  ushort *puVar2;
  
  *param_1 = &PTR_FUN_02baef70;
  FUN_019892f4(param_1 + 5);
  *param_1 = &PTR_FUN_027c36d0;
  param_1[5] = &PTR_FUN_027c3700;
  puVar2 = (ushort *)(param_1 + 7);
  param_1[0x2b] = param_1;
  *(undefined1 *)((long)param_1 + 0x44) = 0;
  *(undefined2 *)(param_1 + 0x2c) = DAT_02bf2574;
  uVar1 = DAT_02bf2570;
  *(undefined4 *)((long)param_1 + 0x164) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xf) = 1;
  *(undefined4 *)(param_1 + 0x16) = 2;
  *(undefined4 *)(param_1 + 0x1d) = 3;
  param_1[0x17] = FUN_009db680;
  *(undefined4 *)(param_1 + 0x24) = 4;
  *(undefined4 *)((long)param_1 + 0x16c) = 0;
  *(undefined1 *)(param_1 + 0x2e) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x19] = FUN_009db700;
  param_1[0x18] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1a] = 0;
  param_1[0x1f] = 0;
  param_1[0x1e] = FUN_009db778;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x20] = FUN_009db80c;
  param_1[0x21] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = thunk_FUN_01985ca8;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  *(undefined2 *)((long)param_1 + 0x162) = uVar1;
  *puVar2 = *puVar2 & 0x8000 | 0x17ff;
  FUN_009db838(puVar2,0,1);
  FUN_009db838(puVar2,1,2);
  FUN_009db838(puVar2,2,3);
  FUN_009db838(puVar2,0,4);
  FUN_009db838(puVar2,1,4);
  FUN_009db838(puVar2,2,4);
  FUN_009db838(puVar2,3,4);
  FUN_009db8c0(puVar2,0,0,0);
  return;
}




void FUN_009db680(long param_1)

{
  ulong uVar1;
  float fVar2;
  
  fVar2 = *(float *)(param_1 + 0x164);
  if (*(char *)(param_1 + 0x170) != '\0') {
    fVar2 = *(float *)(param_1 + 0x164) * DAT_02be32b8;
  }
  FUN_00ecb0f4(fVar2,*(undefined2 *)(param_1 + 0x162));
  uVar1 = FUN_00ecb1f0(*(undefined2 *)(param_1 + 0x162));
  if ((uVar1 & 1) != 0) {
    return;
  }
  FUN_00ecb11c(*(undefined2 *)(param_1 + 0x162));
  *(undefined2 *)(param_1 + 0x162) = DAT_02bf2570;
  FUN_009db8c0(param_1 + 0x38,4,0,0);
  return;
}




void FUN_009db700(long param_1)

{
  short sVar1;
  float fVar2;
  
  fVar2 = *(float *)(param_1 + 0x164);
  if (*(char *)(param_1 + 0x170) != '\0') {
    fVar2 = *(float *)(param_1 + 0x164) * DAT_02be32b8;
  }
  sVar1 = FUN_00ecb108(fVar2,*(undefined2 *)(param_1 + 0x160));
  *(short *)(param_1 + 0x162) = sVar1;
  if (sVar1 == DAT_02bf2570) {
    FUN_009db8c0(param_1 + 0x38,4,0,0);
    return;
  }
  return;
}




void FUN_009db778(long param_1)

{
  ulong uVar1;
  float fVar2;
  float fVar3;
  
  fVar2 = (float)FUN_01988c78();
  fVar3 = *(float *)(param_1 + 0x16c);
  fVar2 = fVar2 + *(float *)(param_1 + 0x168);
  *(float *)(param_1 + 0x168) = fVar2;
  if ((((0.0 < fVar3) && (fVar2 < fVar3)) &&
      (fVar2 = (fVar3 - fVar2 / fVar3) * *(float *)(param_1 + 0x164), 0.0 < fVar2)) &&
     (uVar1 = FUN_00ecb1f0(*(undefined2 *)(param_1 + 0x162)), (uVar1 & 1) != 0)) {
    FUN_00ecb0f4(fVar2,*(undefined2 *)(param_1 + 0x162));
    return;
  }
  FUN_009db8c0(param_1 + 0x38,4,0,0);
  return;
}




void FUN_009db80c(long param_1)

{
  if (0.0 < *(float *)(param_1 + 0x16c)) {
    *(undefined4 *)(param_1 + 0x168) = 0;
    return;
  }
  FUN_009db8c0(param_1 + 0x38,4,0,0);
  return;
}




void FUN_009db838(ushort *param_1,uint param_2,uint param_3)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  ushort *puVar4;
  
  uVar1 = *param_1 >> 10;
  if ((uVar1 & 0x1f) != 0) {
    uVar2 = 0;
    puVar4 = param_1 + 4;
    do {
      if (*puVar4 == param_2) goto LAB_009db86c;
      uVar2 = uVar2 + 1;
      puVar4 = puVar4 + 0x1c;
    } while (uVar2 < (uVar1 & 0x1f));
    uVar2 = 0xffffffff;
LAB_009db86c:
    if ((uVar1 & 0x1f) != 0) {
      uVar3 = 0;
      puVar4 = param_1 + 4;
      do {
        if (*puVar4 == param_3) {
          if (uVar2 == 0xffffffff) {
            return;
          }
          param_1[(long)(int)uVar2 * 0x1c + 5] =
               param_1[(long)(int)uVar2 * 0x1c + 5] | (ushort)(1 << (ulong)(uVar3 & 0x1f));
          return;
        }
        uVar3 = uVar3 + 1;
        puVar4 = puVar4 + 0x1c;
      } while (uVar3 < (uVar1 & 0x1f));
    }
  }
  return;
}




void FUN_009db8c0(ushort *param_1,uint param_2)

{
  uint uVar1;
  code *UNRECOVERED_JUMPTABLE;
  ushort uVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  ushort *puVar6;
  ulong uVar7;
  
  uVar2 = *param_1;
  if ((uVar2 & 0x7c00) != 0) {
    uVar3 = 0;
    puVar6 = param_1 + 4;
    do {
      if (*puVar6 == param_2) goto LAB_009db908;
      uVar3 = uVar3 + 1;
      puVar6 = puVar6 + 0x1c;
    } while (uVar3 < (uVar2 >> 10 & 0x1f));
  }
  uVar3 = 0x1f;
LAB_009db908:
  uVar1 = uVar2 & 0x1f;
  uVar4 = (ulong)uVar1;
  if (uVar1 == 0x1f) {
    uVar7 = (ulong)(uVar3 & 0x1f);
    uVar2 = uVar2 & 0xfc1f | (ushort)((uVar3 & 0x1f) << 5);
    *param_1 = uVar2;
  }
  else {
    if (uVar3 == uVar1) {
      return;
    }
    if ((1 << (ulong)(uVar3 & 0x1f) & (uint)param_1[uVar4 * 0x1c + 5]) == 0) {
      return;
    }
    uVar7 = (ulong)(uVar3 & 0x1f);
    uVar2 = uVar2 & 0xfc1f | (ushort)((uVar3 & 0x1f) << 5);
    *param_1 = uVar2;
    UNRECOVERED_JUMPTABLE = *(code **)(param_1 + uVar4 * 0x1c + 0x18);
    uVar5 = *(ulong *)(param_1 + uVar4 * 0x1c + 0x1c) & 1;
    if (uVar5 != 0 || UNRECOVERED_JUMPTABLE != (code *)0x0) {
      if (uVar5 != 0) {
        UNRECOVERED_JUMPTABLE =
             *(code **)(UNRECOVERED_JUMPTABLE +
                       *(long *)(*(long *)(param_1 + 0x90) +
                                ((long)*(ulong *)(param_1 + uVar4 * 0x1c + 0x1c) >> 1)));
      }
      (*UNRECOVERED_JUMPTABLE)();
      uVar2 = *param_1;
    }
  }
  *param_1 = (ushort)uVar7 | uVar2 & 0xfc00 | 0x3e0;
  if ((int)uVar7 != 0x1f) {
    UNRECOVERED_JUMPTABLE = *(code **)(param_1 + uVar7 * 0x1c + 0x10);
    uVar4 = *(ulong *)(param_1 + uVar7 * 0x1c + 0x14) & 1;
    if (uVar4 != 0 || UNRECOVERED_JUMPTABLE != (code *)0x0) {
      if (uVar4 != 0) {
        UNRECOVERED_JUMPTABLE =
             *(code **)(UNRECOVERED_JUMPTABLE +
                       *(long *)(*(long *)(param_1 + 0x90) +
                                ((long)*(ulong *)(param_1 + uVar7 * 0x1c + 0x14) >> 1)));
      }
                    /* WARNING: Could not recover jumptable at 0x009db974. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
  }
  return;
}




void FUN_009db9f8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027c36d0;
  param_1[5] = &PTR_FUN_027c3700;
  FUN_00ecb11c(*(undefined2 *)((long)param_1 + 0x162));
  FUN_0198931c(param_1 + 5);
  FUN_01985bd0(param_1);
  return;
}




void FUN_009dba44(long param_1)

{
  FUN_009db9f8(param_1 + -0x28);
  return;
}




void FUN_009dba4c(void *param_1)

{
  FUN_009db9f8();
  operator_delete(param_1);
  return;
}




void FUN_009dba70(long param_1)

{
  FUN_009db9f8((void *)(param_1 + -0x28));
  operator_delete((void *)(param_1 + -0x28));
  return;
}




void FUN_009dba98(long param_1)

{
  long lVar1;
  
  DAT_0312ebb0 = *(uint *)(param_1 + 0x13fb0);
  *(uint *)(param_1 + 0x13fb0) = DAT_0312ebb0 + 1;
  lVar1 = param_1 + (ulong)DAT_0312ebb0 * 0x2e8;
  *(code **)(lVar1 + 0xb0) = FUN_009dc004;
  *(code **)(lVar1 + 0xb8) = FUN_009dc028;
  *(uint *)(lVar1 + 0x2d8) = *(uint *)(lVar1 + 0x2d8) & 0x80000000 | 0x40;
  *(uint *)(lVar1 + 0xa4) = DAT_0312ebb0;
  *(undefined4 *)(lVar1 + 0xa8) = 0x178;
  *(long *)(param_1 + 0x13fb8) = lVar1;
  FUN_01986780(param_1,5,FUN_009dbb08,0);
  return;
}




void FUN_009dbb08(long param_1)

{
  ulong uVar1;
  float fVar2;
  float fVar3;
  
  FUN_009dbc00(param_1 + 0x38);
  if (DAT_0312f9b8 != '\0') {
    uVar1 = FUN_009bbf9c();
    if ((uVar1 & 1) == 0) {
LAB_009dbb64:
      DAT_0312f9b8 = '\0';
    }
    else {
      if (DAT_0312f9bc == '\0') {
        fVar3 = DAT_0312f9c0 + DAT_0312f9c4;
        FUN_009bbfb0();
        fVar2 = (float)FUN_009bc268();
        if (fVar3 < fVar2) goto LAB_009dbb64;
      }
      fVar2 = DAT_02be32bc;
      if (DAT_0312f9b8 != '\0') {
        fVar3 = (float)FUN_01988c78();
        DAT_02be32bc = fVar2 - fVar3;
        if (DAT_02be32bc <= 0.0) {
          DAT_02be32bc = 0.0;
        }
        fVar3 = 1.0;
        fVar2 = 1.0 - DAT_02be32bc;
        fVar2 = fVar2 * fVar2 * fVar2 * -0.8;
        goto LAB_009dbba0;
      }
    }
  }
  fVar2 = DAT_02be32bc;
  fVar3 = (float)FUN_01988c78();
  DAT_02be32bc = (float)NEON_fminnm(fVar2 + fVar3,0x3f800000);
  fVar2 = DAT_02be32bc + -1.0;
  fVar3 = 0.2;
  fVar2 = fVar2 * fVar2 * fVar2 + 1.0;
LAB_009dbba0:
  DAT_02be32b8 = fVar2 + fVar3;
  return;
}




void FUN_009dbc00(ushort *param_1)

{
  uint uVar1;
  code *UNRECOVERED_JUMPTABLE;
  ulong uVar2;
  
  uVar1 = *param_1 & 0x1f;
  if (uVar1 != 0x1f) {
    UNRECOVERED_JUMPTABLE = *(code **)(param_1 + (ulong)uVar1 * 0x1c + 8);
    uVar2 = *(ulong *)(param_1 + (ulong)uVar1 * 0x1c + 0xc) & 1;
    if (uVar2 != 0 || UNRECOVERED_JUMPTABLE != (code *)0x0) {
      if (uVar2 != 0) {
        UNRECOVERED_JUMPTABLE =
             *(code **)(UNRECOVERED_JUMPTABLE +
                       *(long *)(*(long *)(param_1 + 0x90) +
                                ((long)*(ulong *)(param_1 + (ulong)uVar1 * 0x1c + 0xc) >> 1)));
      }
                    /* WARNING: Could not recover jumptable at 0x009dbc40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
  }
  return;
}




void FUN_009dbc48(void)

{
  float fVar1;
  float fVar2;
  
  fVar2 = DAT_02be32bc;
  fVar1 = (float)FUN_01988c78();
  DAT_02be32bc = fVar2 - fVar1;
  if (DAT_02be32bc <= 0.0) {
    DAT_02be32bc = 0.0;
  }
  fVar2 = 1.0 - DAT_02be32bc;
  DAT_02be32b8 = fVar2 * fVar2 * fVar2 * -0.8 + 1.0;
  return;
}




void FUN_009dbcac(void)

{
  float fVar1;
  float fVar2;
  
  fVar2 = DAT_02be32bc;
  fVar1 = (float)FUN_01988c78();
  DAT_02be32bc = (float)NEON_fminnm(fVar2 + fVar1,0x3f800000);
  fVar2 = DAT_02be32bc + -1.0;
  DAT_02be32b8 = fVar2 * fVar2 * fVar2 + 1.0 + 0.2;
  return;
}




void FUN_009dbd10(float param_1,byte param_2)

{
  DAT_0312f9b8 = param_2 & 1;
  DAT_0312f9bc = param_1 == 0.0 & param_2;
  DAT_0312f9c4 = param_1;
  if ((param_2 & 1) != 0) {
    FUN_009bbfb0();
    DAT_0312f9c0 = FUN_009bc268();
  }
  return;
}




void FUN_009dbd5c(float param_1,long param_2,undefined8 param_3,ulong param_4,uint param_5,
                 byte param_6)

{
  void *pvVar1;
  long lVar2;
  short sVar3;
  ulong uVar4;
  undefined4 uVar5;
  float fVar6;
  ulong local_78 [2];
  void *local_68;
  ulong local_60 [2];
  void *local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  *(byte *)(param_2 + 0x170) = param_6 & 1;
  local_60[0] = 0;
  local_60[1] = 0;
  local_50 = (void *)0x0;
  local_78[0] = 0;
  local_78[1] = 0;
  local_68 = (void *)0x0;
  uVar4 = FUN_00f1c904(param_3,local_60);
  if ((uVar4 & 1) != 0) {
    pvVar1 = (void *)((ulong)local_60 | 1);
    if ((local_60[0] & 1) != 0) {
      pvVar1 = local_50;
    }
    FUN_00f1c8ec(pvVar1,local_78);
    pvVar1 = (void *)((ulong)local_78 | 1);
    if ((local_78[0] & 1) != 0) {
      pvVar1 = local_68;
    }
    uVar5 = 3;
    if ((param_4 & 1) != 0) {
      uVar5 = 4;
    }
    sVar3 = FUN_00ecb058(pvVar1,uVar5,param_5 & 1);
    *(short *)(param_2 + 0x160) = sVar3;
    if (sVar3 == DAT_02bf2574) {
      FUN_01985ca8(param_2);
    }
    else {
      fVar6 = (float)FUN_008f6bb4();
      *(float *)(param_2 + 0x164) = fVar6 * param_1;
      FUN_009db8c0(param_2 + 0x38,1,0,0);
    }
  }
  if ((local_78[0] & 1) != 0) {
    operator_delete(local_68);
  }
  if ((local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009dbea4(long param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_009dbeec(param_1 + 0x38,2);
  if ((uVar1 & 1) != 0) {
    FUN_009db8c0(param_1 + 0x38,2,0,0);
    return;
  }
  return;
}




bool FUN_009dbeec(ushort *param_1,uint param_2)

{
  uint uVar1;
  ushort uVar2;
  bool bVar3;
  uint uVar4;
  ushort *puVar5;
  
  uVar1 = *param_1 & 0x1f;
  if (uVar1 == 0x1f) {
    bVar3 = true;
  }
  else {
    uVar2 = *param_1 >> 10;
    if ((uVar2 & 0x1f) != 0) {
      uVar4 = 0;
      puVar5 = param_1 + 4;
      do {
        if (*puVar5 == param_2) goto LAB_009dbf34;
        uVar4 = uVar4 + 1;
        puVar5 = puVar5 + 0x1c;
      } while (uVar4 < (uVar2 & 0x1f));
    }
    uVar4 = 0x1f;
LAB_009dbf34:
    bVar3 = true;
    if (uVar4 != uVar1) {
      bVar3 = (1 << (ulong)(uVar4 & 0x1f) & (uint)param_1[(ulong)uVar1 * 0x1c + 5]) != 0;
    }
  }
  return bVar3;
}




void FUN_009dbf64(float param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  if (param_1 <= 0.0) {
    param_1 = 0.0;
  }
  lVar1 = param_2 + 0x38;
  *(float *)(param_2 + 0x16c) = param_1;
  if ((param_1 <= 0.0) || (uVar2 = FUN_009dbeec(lVar1,3), (uVar2 & 1) == 0)) {
    uVar2 = FUN_009dbeec(lVar1,4);
    if ((uVar2 & 1) == 0) {
      return;
    }
    uVar3 = 4;
  }
  else {
    uVar3 = 3;
  }
  FUN_009db8c0(lVar1,uVar3,0,0);
  return;
}




float FUN_009dbfd8(float param_1,long param_2)

{
  if (*(char *)(param_2 + 0x170) != '\0') {
    param_1 = DAT_02be32b8 * param_1;
  }
  return param_1;
}




long FUN_009dbff4(long param_1)

{
  return param_1 + -0x28;
}




long FUN_009dbffc(long param_1)

{
  return param_1 + -0x28;
}

