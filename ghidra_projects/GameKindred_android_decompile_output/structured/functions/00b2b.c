// functions/00b2b — 17 functions
#include "libGameKindred.h"




void FUN_00b2b304(long *param_1)

{
  FUN_00f13f18();
                    /* WARNING: Could not recover jumptable at 0x00b2b32c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x170))(param_1);
  return;
}




void FUN_00b2b330(long *param_1,byte param_2)

{
  long *plVar1;
  undefined4 *puVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 uVar9;
  ushort uVar10;
  uint uVar11;
  ushort *puVar12;
  float fVar13;
  undefined4 uVar14;
  
  if (*(byte *)((long)param_1 + 0x167c) != (param_2 & 1)) {
    fVar13 = (float)(**(code **)(*param_1 + 0x48))(param_1);
    uVar14 = *(undefined4 *)((long)param_1 + 0xa34);
    FUN_00f01980(param_1);
    puVar2 = (undefined4 *)((long)param_1 + 0x16a4);
    fVar4 = 1.0;
    fVar5 = 1.1;
    if ((param_2 & 1) == 0) {
      puVar2 = &DAT_01bee7f6;
      fVar4 = 0.7;
      fVar5 = 1.0;
    }
    uVar7 = FUN_00eff63c(fVar5,fVar5,0x3dcccccd,FUN_009a7608);
    FUN_00f022a0(param_1,uVar7);
    FUN_00f01980(param_1 + 0x6c);
    FUN_00b1326c(fVar4,param_1 + 0x6c,puVar2);
    FUN_00f01980(param_1 + 0x13e);
    uVar7 = FUN_00efef08((fVar13 * -0.5 + 18.0) / fVar5,uVar14,0x3dcccccd,FUN_009a7608);
    FUN_00f022a0(param_1 + 0x13e,uVar7);
    plVar1 = param_1 + 0x4e;
    uVar8 = FUN_00f02540(plVar1);
    if ((uVar8 & 1) != 0) {
      FUN_00f01980(plVar1);
      uVar3 = *(uint *)((long)param_1 + 0x2f4);
      uVar11 = 0x99;
      if ((param_2 & 1) == 0) {
        uVar11 = 0;
      }
      *(uint *)((long)param_1 + 0x2f4) = uVar3 | 4;
      if ((uVar3 >> 7 & 0xff) != uVar11) {
        *(uint *)((long)param_1 + 0x2f4) = uVar3 & 0xffff8000 | uVar3 & 0x7f | 4 | uVar11 << 7;
        FUN_0091ada4(plVar1);
      }
      uVar14 = 0;
      if ((param_2 & 1) == 0) {
        uVar14 = 0x3f19999a;
      }
      uVar7 = FUN_00efee28(uVar14,0x3dcccccd,FUN_009a7608);
      FUN_00f022a0(plVar1,uVar7);
    }
    FUN_00f01980(param_1 + 0x164);
    uVar7 = FUN_00eff63c(0x3f800000,0x3f800000,0x3dcccccd,FUN_009a7608);
    uVar9 = FUN_00efee28(fVar4,0x3dcccccd,FUN_009a7608);
    lVar6 = DAT_03210d00;
    uVar10 = *(ushort *)(DAT_03210d00 + 0x20010);
    if ((ulong)uVar10 == 0xffff) {
      puVar12 = (ushort *)0x0;
    }
    else {
      puVar12 = (ushort *)(DAT_03210d00 + (ulong)uVar10 * 0x40 + 0x10);
      if (uVar10 == *(ushort *)(DAT_03210d00 + 0x20012)) {
        uVar10 = 0xffff;
      }
      else {
        uVar10 = *puVar12;
      }
      *(ushort *)(DAT_03210d00 + 0x20010) = uVar10;
      *(int *)(lVar6 + 0x20014) = *(int *)(lVar6 + 0x20014) + 1;
      FUN_00efcd98(puVar12);
      *(int *)(lVar6 + 0x20020) = *(int *)(lVar6 + 0x20020) + 1;
    }
    FUN_00efcea4(puVar12,uVar7,uVar9,0);
    FUN_00f022a0(param_1 + 0x164,puVar12);
    *(byte *)((long)param_1 + 0x167c) = param_2 & 1;
  }
  return;
}




void FUN_00b2b5e0(undefined1 param_1 [16],float param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  byte in_w5;
  float local_60;
  float fStack_5c;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  FUN_00b2a98c();
  plVar1 = param_3 + 0x2d7;
  *param_3 = (long)&PTR_FUN_027df190;
  FUN_00f017e8(plVar1);
  plVar2 = param_3 + 0x2e8;
  param_3[0x2d7] = (long)&PTR_FUN_027c1f80;
  FUN_00f0e4a8(plVar2);
  plVar3 = param_3 + 0x306;
  FUN_00f0e4a8(plVar3);
  *(byte *)(param_3 + 0x324) = in_w5 & 1;
  if ((in_w5 & 1) == 0) {
    (**(code **)(*param_3 + 0x78))(param_3,plVar1,1);
    FUN_00f023ec(plVar1,plVar2,1);
    FUN_00f023ec(plVar1,plVar3,1);
    FUN_00f0e548(plVar3,PTR_s_build___MenuPartsCommon_tga_02be3530,"circle_button_lock");
    local_60 = -NAN;
    FUN_00f0e670(plVar3,&local_60,2);
    if ((*(float *)(param_3 + 0x310) != 0.5) || (*(float *)((long)param_3 + 0x1884) != 0.5)) {
      param_3[0x310] = 0x3f0000003f000000;
      FUN_0091ada4(plVar3);
    }
    FUN_00f0e548(plVar2,PTR_s_build___MenuPartsCommon_tga_02be3530,"menu_fuzzy_dot");
    if ((*(float *)(param_3 + 0x2f2) != 0.5) || (*(float *)((long)param_3 + 0x1794) != 0.5)) {
      param_3[0x2f2] = 0x3f0000003f000000;
      FUN_0091ada4(plVar2);
    }
    local_60 = (float)FUN_00f0eac0(plVar3);
    local_60 = local_60 + local_60;
    fStack_5c = param_2 + param_2;
    FUN_00f13f18(plVar2,&local_60);
    local_60 = -2.7689643e+38;
    FUN_00f0e670(param_3 + 0x102,&local_60,2);
    local_60 = -NAN;
    FUN_00f0d92c(param_3 + 0x13e,PTR_s_build___Fonts_Brandon_Bold_60_fo_02be9c90,&local_60);
    if ((*(uint *)((long)param_3 + 0x1194) & 0x7f80) != 0x3f80) {
      *(uint *)((long)param_3 + 0x1194) = *(uint *)((long)param_3 + 0x1194) & 0xffff807f | 0x3f80;
      FUN_0091ada4(param_3 + 0x222);
    }
  }
  FUN_00b129cc(param_3 + 0x222,2);
  FUN_00f01a4c(param_3 + 0x4e,1);
  (**(code **)(*param_3 + 0x170))(param_3);
  if (*(long *)(lVar4 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b2b850(long *param_1)

{
  long *plVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined8 local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  FUN_00b2af3c();
  *(uint *)((long)param_1 + 0x173c) =
       *(uint *)((long)param_1 + 0x173c) & 0xfffffffb |
       ((uint)*(byte *)(param_1 + 0x324) << 2 ^ 4) & 0xfc;
  plVar1 = param_1 + 0x2d7;
  fVar3 = (float)(**(code **)(*param_1 + 0x48))(param_1);
  fVar4 = (float)FUN_00f0eac0(param_1 + 0x306);
  fVar5 = -40.0;
  fVar4 = (fVar3 * 0.5 - fVar4 * 0.5) + -40.0;
  (**(code **)(*param_1 + 0x48))(param_1);
  fVar3 = (float)FUN_00f0eac0(param_1 + 0x306);
  fVar3 = (fVar3 * 0.5 - fVar5 * 0.5) + 40.0;
  if ((*(float *)(param_1 + 0x2df) != fVar4) || (*(float *)((long)param_1 + 0x16fc) != fVar3)) {
    *(float *)(param_1 + 0x2df) = fVar4;
    *(float *)((long)param_1 + 0x16fc) = fVar3;
    FUN_0091ada4(plVar1);
  }
  local_60 = 0;
  (**(code **)(*plVar1 + 0x28))(plVar1,&local_60);
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b2b988(long param_1,uint param_2)

{
  *(byte *)(param_1 + 0x1920) = (byte)param_2 & 1;
  *(uint *)(param_1 + 0x18b4) =
       *(uint *)(param_1 + 0x18b4) & 0xfffffff8 |
       *(uint *)(param_1 + 0x18b4) & 3 | (~param_2 & 1) << 2;
  if ((~param_2 & 1) == 0) {
    FUN_00f0e670(param_1 + 0x810,&DAT_01bee7fa,2);
    if ((~*(uint *)(param_1 + 0x1194) & 0x7f80) != 0) {
      *(uint *)(param_1 + 0x1194) = *(uint *)(param_1 + 0x1194) | 0x7f80;
      FUN_0091ada4(param_1 + 0x1110);
    }
    FUN_00f0d92c(param_1 + 0x9f0,PTR_s_build___Fonts_Brandon_Bold_60_fo_02be9c90,&DAT_01bee7fa);
    return;
  }
  return;
}




void FUN_00b2ba24(long *param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  
  FUN_00f13ca4();
  param_1[0x17] = param_2;
  plVar1 = param_1 + 0x18;
  *param_1 = (long)&PTR_FUN_027df320;
  FUN_00f13ca4(plVar1);
  plVar2 = param_1 + 0x2f;
  FUN_00ecfd6c(plVar2,0);
  param_1[0xd8] = 0;
  param_1[0xd7] = 0;
  param_1[0xd6] = 0;
  param_1[0xd9] = 0x43c8000044168000;
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  FUN_00f023ec(plVar1,plVar2,1);
  FUN_00ed04d8(plVar2,0,1);
  return;
}




void FUN_00b2bacc(long param_1)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  ulong uVar4;
  float fVar5;
  undefined8 uVar6;
  float fVar7;
  float local_68;
  undefined1 auStack_64 [4];
  undefined8 local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  FUN_00f00298(auStack_64,&local_68);
  FUN_00f13f08(*(undefined4 *)(param_1 + 0x6c8),local_68,param_1 + 0xc0);
  uVar2 = (ulong)*(uint *)(param_1 + 0x6b0);
  if (*(uint *)(param_1 + 0x6b0) == 0) {
    uVar6 = 0;
    fVar7 = 0.0;
  }
  else {
    uVar4 = 0;
    fVar7 = local_68;
    do {
      plVar3 = *(long **)(*(long *)(param_1 + 0x6b8) + uVar4 * 8);
      if (plVar3 != (long *)0x0) {
        fVar5 = *(float *)(param_1 + 0x6c8) * 0.5;
        fVar7 = *(float *)(param_1 + 0x6cc) * 0.5 +
                (*(float *)(param_1 + 0x6cc) + 10.0) * (float)(uVar4 & 0xffffffff);
        if ((*(float *)(plVar3 + 8) != fVar5) || (*(float *)((long)plVar3 + 0x44) != fVar7)) {
          *(float *)(plVar3 + 8) = fVar5;
          *(float *)((long)plVar3 + 0x44) = fVar7;
          FUN_0091ada4(plVar3);
        }
        local_60 = 0x3f0000003f000000;
        (**(code **)(*plVar3 + 0x28))(plVar3,&local_60);
        (**(code **)(**(long **)(*(long *)(param_1 + 0x6b8) + uVar4 * 8) + 0x170))();
        uVar2 = (ulong)*(uint *)(param_1 + 0x6b0);
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar2);
    uVar6 = (**(code **)(*(long *)**(undefined8 **)(param_1 + 0x6b8) + 0x48))();
    (**(code **)(*(long *)**(undefined8 **)(param_1 + 0x6b8) + 0x48))();
    fVar5 = (float)NEON_ucvtf(*(undefined4 *)(param_1 + 0x6b0));
    fVar7 = fVar7 * fVar5 + *(float *)(param_1 + 0x6cc) * 0.5 + 60.0;
  }
  FUN_00ed02d8(uVar6,fVar7,param_1 + 0x178);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void thunk_FUN_00b2bacc(long param_1)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  ulong uVar4;
  float fVar5;
  undefined8 uVar6;
  float fVar7;
  float fStack_68;
  undefined1 auStack_64 [4];
  undefined8 uStack_60;
  long lStack_58;
  
  lVar1 = tpidr_el0;
  lStack_58 = *(long *)(lVar1 + 0x28);
  FUN_00f00298(auStack_64,&fStack_68);
  FUN_00f13f08(*(undefined4 *)(param_1 + 0x6c8),fStack_68,param_1 + 0xc0);
  uVar2 = (ulong)*(uint *)(param_1 + 0x6b0);
  if (*(uint *)(param_1 + 0x6b0) == 0) {
    uVar6 = 0;
    fVar7 = 0.0;
  }
  else {
    uVar4 = 0;
    fVar7 = fStack_68;
    do {
      plVar3 = *(long **)(*(long *)(param_1 + 0x6b8) + uVar4 * 8);
      if (plVar3 != (long *)0x0) {
        fVar5 = *(float *)(param_1 + 0x6c8) * 0.5;
        fVar7 = *(float *)(param_1 + 0x6cc) * 0.5 +
                (*(float *)(param_1 + 0x6cc) + 10.0) * (float)(uVar4 & 0xffffffff);
        if ((*(float *)(plVar3 + 8) != fVar5) || (*(float *)((long)plVar3 + 0x44) != fVar7)) {
          *(float *)(plVar3 + 8) = fVar5;
          *(float *)((long)plVar3 + 0x44) = fVar7;
          FUN_0091ada4(plVar3);
        }
        uStack_60 = 0x3f0000003f000000;
        (**(code **)(*plVar3 + 0x28))(plVar3,&uStack_60);
        (**(code **)(**(long **)(*(long *)(param_1 + 0x6b8) + uVar4 * 8) + 0x170))();
        uVar2 = (ulong)*(uint *)(param_1 + 0x6b0);
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar2);
    uVar6 = (**(code **)(*(long *)**(undefined8 **)(param_1 + 0x6b8) + 0x48))();
    (**(code **)(*(long *)**(undefined8 **)(param_1 + 0x6b8) + 0x48))();
    fVar5 = (float)NEON_ucvtf(*(undefined4 *)(param_1 + 0x6b0));
    fVar7 = fVar7 * fVar5 + *(float *)(param_1 + 0x6cc) * 0.5 + 60.0;
  }
  FUN_00ed02d8(uVar6,fVar7,param_1 + 0x178);
  if (*(long *)(lVar1 + 0x28) == lStack_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b2bc5c(long param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  
  FUN_00f01980();
  if (*(int *)(param_1 + 0x6b0) != 0) {
    lVar4 = 0;
    uVar5 = 0;
    do {
      lVar2 = *(long *)(param_1 + 0x6b8);
      if (*(long *)(lVar2 + lVar4) == 0) {
LAB_00b2bcd8:
        puVar3 = (undefined8 *)(lVar2 + uVar5 * 8);
      }
      else {
        FUN_00f01980();
        uVar1 = FUN_00f02540(*(undefined8 *)(*(long *)(param_1 + 0x6b8) + lVar4));
        if ((uVar1 & 1) != 0) {
          FUN_00f01a4c(*(undefined8 *)(*(long *)(param_1 + 0x6b8) + lVar4),1);
        }
        lVar2 = *(long *)(param_1 + 0x6b8);
        if (*(long **)(lVar2 + lVar4) == (long *)0x0) goto LAB_00b2bcd8;
        (**(code **)(**(long **)(lVar2 + lVar4) + 8))();
        puVar3 = (undefined8 *)(*(long *)(param_1 + 0x6b8) + lVar4);
      }
      *puVar3 = 0;
      uVar5 = uVar5 + 1;
      lVar4 = lVar4 + 8;
    } while (uVar5 < *(uint *)(param_1 + 0x6b0));
  }
  *(undefined8 *)(param_1 + 0x6c0) = 0;
  if (*(long *)(param_1 + 0x6b8) != 0) {
    *(undefined4 *)(param_1 + 0x6b0) = 0;
  }
  return;
}




void FUN_00b2bd14(long param_1,long *param_2)

{
  long lVar1;
  long *local_70;
  code *local_68;
  long lStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  long *local_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_70 = param_2;
  if (param_2 != (long *)0x0) {
    FUN_00f13f18(param_2,param_1 + 0x6c8);
    (**(code **)(*param_2 + 0x170))(param_2);
    local_40 = DAT_03210c64;
    local_68 = FUN_00b2be14;
    local_58 = 0;
    uStack_50 = 0;
    lStack_60 = param_1;
    local_48 = param_2;
    FUN_009693a0(param_2 + 1,&local_68);
    *(uint *)((long)param_2 + 0x84) = *(uint *)((long)param_2 + 0x84) | 0x10;
    FUN_00b09454(param_2,1);
    *(undefined4 *)(param_2 + 0x2cf) = *(undefined4 *)(param_1 + 0x6b0);
    FUN_00b2be24(param_1 + 0x6b0,&local_70);
    FUN_00ed026c(param_1 + 0x178,local_70,1);
    if (*(int *)(param_1 + 0x6b0) == 1) {
      FUN_00f01980(param_1 + 0x178);
    }
    FUN_00b2bacc(param_1);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b2be14(undefined8 param_1)

{
  long in_x4;
  
  if (in_x4 != 0) {
    FUN_00b2bfe8(param_1,in_x4);
    return;
  }
  return;
}




void FUN_00b2be24(uint *param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = *param_1;
  if (uVar3 == param_1[1]) {
    if (uVar3 < 0x20) {
      uVar2 = uVar3 << 1;
    }
    else if (uVar3 == 0xffffffff) {
      uVar2 = 0;
    }
    else {
      uVar2 = (uVar3 + 0x10) - (uVar3 & 0xf);
    }
    uVar1 = uVar3 + 1;
    if (uVar3 + 1 <= uVar2) {
      uVar1 = uVar2;
    }
    FUN_00b2c8d0(param_1,uVar1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




undefined8 FUN_00b2beac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x6c0);
}




undefined8 FUN_00b2beb4(long param_1)

{
  if (*(long *)(param_1 + 0x6c0) != 0) {
    return *(undefined8 *)(*(long *)(param_1 + 0x6c0) + 0x16a8);
  }
  return 0;
}




undefined4 FUN_00b2becc(long param_1)

{
  if (*(long *)(param_1 + 0x6c0) != 0) {
    return *(undefined4 *)(*(long *)(param_1 + 0x6c0) + 0x16b0);
  }
  return 0;
}




undefined8 FUN_00b2bee4(long param_1,byte *param_2)

{
  ulong uVar1;
  size_t __n;
  byte *__s2;
  uint uVar2;
  byte bVar3;
  int iVar4;
  byte *pbVar5;
  long lVar6;
  byte *pbVar7;
  void *__s1;
  long lVar8;
  ulong uVar9;
  long lVar10;
  
  uVar2 = *(uint *)(param_1 + 0x6b0);
  if (uVar2 != 0) {
    __n = *(size_t *)(param_2 + 8);
    __s2 = *(byte **)(param_2 + 0x10);
    lVar10 = *(long *)(param_1 + 0x6b8);
    uVar9 = 0;
    if ((*param_2 & 1) == 0) {
      __s2 = param_2 + 1;
      __n = (ulong)(*param_2 >> 1);
    }
    do {
      lVar8 = *(long *)(lVar10 + uVar9 * 8);
      if (lVar8 != 0) {
        bVar3 = *(byte *)(lVar8 + 0x1680);
        uVar1 = (ulong)(bVar3 >> 1);
        if ((bVar3 & 1) != 0) {
          uVar1 = *(ulong *)(lVar8 + 0x1688);
        }
        if (uVar1 == __n) {
          __s1 = *(void **)(lVar8 + 0x1690);
          if ((bVar3 & 1) == 0) {
            __s1 = (void *)(lVar8 + 0x1681);
          }
          if ((bVar3 & 1) == 0) {
            if (__n == 0) {
LAB_00b2bfc0:
              FUN_00b2bfe8(param_1,lVar8);
              return 1;
            }
            pbVar5 = (byte *)(lVar8 + 0x1681);
            lVar6 = -(ulong)(bVar3 >> 1);
            pbVar7 = __s2;
            while (*pbVar5 == *pbVar7) {
              pbVar5 = pbVar5 + 1;
              lVar6 = lVar6 + 1;
              pbVar7 = pbVar7 + 1;
              if (lVar6 == 0) goto LAB_00b2bfc0;
            }
          }
          else if ((__n == 0) || (iVar4 = memcmp(__s1,__s2,__n), iVar4 == 0)) goto LAB_00b2bfc0;
        }
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < uVar2);
  }
  return 0;
}




void FUN_00b2bfe8(undefined1 param_1 [16],float param_2,long param_3,long *param_4)

{
  long *plVar1;
  ulong uVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  if ((param_4 != (long *)0x0) && (plVar1 = *(long **)(param_3 + 0x6c0), plVar1 != param_4)) {
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x178))(plVar1,0);
    }
    *(long **)(param_3 + 0x6c0) = param_4;
    uVar2 = FUN_00f02540(param_4);
    if ((uVar2 & 1) != 0) {
      FUN_00f01a4c(*(undefined8 *)(param_3 + 0x6c0),1);
      FUN_00ed026c(param_3 + 0x178,*(undefined8 *)(param_3 + 0x6c0),1);
    }
    *(uint *)(*(long *)(param_3 + 0x6c0) + 0xba4) =
         *(uint *)(*(long *)(param_3 + 0x6c0) + 0xba4) | 4;
    FUN_00ed02ac(param_3 + 0x178);
    fVar6 = *(float *)((long)*(long **)(param_3 + 0x6c0) + 0x44);
    fVar7 = fVar6 + *(float *)(param_3 + 0x1bc);
    (**(code **)(**(long **)(param_3 + 0x6c0) + 0x48))();
    fVar4 = 0.5;
    param_2 = param_2 * 1.1;
    fVar5 = param_2 * -0.050000012;
    if (param_2 * 0.5 + fVar5 <= fVar7) {
      fVar4 = *(float *)(param_3 + 0x1bc);
      FUN_00f13e54(param_3 + 0xc0);
      fVar5 = fVar5 + param_2 * -0.75;
      if (param_2 * 0.07500002 + fVar5 < fVar7) {
        FUN_00f13e54(param_3 + 0xc0);
        if (*(long *)(param_3 + 0x6c0) ==
            *(long *)(*(long *)(param_3 + 0x6b8) + (ulong)(*(int *)(param_3 + 0x6b0) - 1) * 8)) {
          fVar4 = 0.0;
        }
        else {
          fVar4 = *(float *)(param_3 + 0x6cc) * 0.5;
        }
        fVar4 = ((fVar5 - fVar6) - param_2) - fVar4;
      }
    }
    else {
      if (*(long *)(param_3 + 0x6c0) != **(long **)(param_3 + 0x6b8)) {
        fVar4 = 1.0;
      }
      fVar4 = param_2 * fVar4 - fVar6;
    }
    if (fVar4 != *(float *)(param_3 + 0x1bc)) {
      FUN_00f01980(param_3 + 0x178);
      uVar3 = FUN_00efef08(*(undefined4 *)(param_3 + 0x1b8),fVar4,0x3e800000,FUN_009a7608);
      FUN_00f022a0(param_3 + 0x178,uVar3);
    }
    if (*(int *)(param_3 + 0x6b0) != 0) {
      uVar2 = 0;
      do {
        plVar1 = *(long **)(*(long *)(param_3 + 0x6b8) + uVar2 * 8);
        (**(code **)(*plVar1 + 0x178))(plVar1,*(long **)(param_3 + 0x6c0) == plVar1);
        uVar2 = uVar2 + 1;
      } while (uVar2 < *(uint *)(param_3 + 0x6b0));
    }
    if (*(undefined8 **)(param_3 + 0xb8) != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00b2c1f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)**(undefined8 **)(param_3 + 0xb8))();
      return;
    }
  }
  return;
}

