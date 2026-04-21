// functions/00c6c — 21 functions
#include "libGameKindred.h"




void FUN_00c6c048(void *param_1)

{
  FUN_00c6be34();
  operator_delete(param_1);
  return;
}




void FUN_00c6c06c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  float fVar6;
  float fVar7;
  undefined8 local_70;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  lVar2 = param_1 + 0x2060;
  FUN_00f13f18(param_1,lVar2);
  FUN_00f13f18(param_1 + 0x148,lVar2);
  FUN_00f13f18(param_1 + 0x200,lVar2);
  lVar2 = param_1 + 0x2d8;
  FUN_00f13f08(*(float *)(param_1 + 0x2060) * 0.25,*(undefined4 *)(param_1 + 0x2064),lVar2);
  lVar1 = param_1 + 0x988;
  FUN_00f13f08(*(float *)(param_1 + 0x2060) * 0.25,*(undefined4 *)(param_1 + 0x2064),lVar1);
  FUN_00f0db64(*(float *)(param_1 + 0x2060) * 0.1,0,0x3f800000,param_1 + 0x1e00);
  FUN_00f0db64(*(float *)(param_1 + 0x2060) * 0.2,0,0x3f800000,param_1 + 0x1cd0);
  uVar5 = *(ulong *)(param_1 + 0x2060);
  fVar6 = (float)uVar5 * 0.67;
  fVar7 = (float)(uVar5 >> 0x20) * 0.5;
  if ((*(float *)(param_1 + 0x1448) != fVar6) || (*(float *)(param_1 + 0x144c) != fVar7)) {
    *(ulong *)(param_1 + 0x1448) = CONCAT44(fVar7,fVar6);
    FUN_0091ada4(param_1 + 0x1408);
    uVar5 = (ulong)*(uint *)(param_1 + 0x2060);
  }
  lVar3 = param_1 + 0x1f30;
  FUN_00f0db64((float)uVar5 * 0.25,0,0x3f800000,lVar3);
  fVar6 = *(float *)(param_1 + 0x2064) + -50.0;
  if ((*(float *)(param_1 + 0x1f70) != *(float *)(param_1 + 0x1448)) ||
     (*(float *)(param_1 + 0x1f74) != fVar6)) {
    *(float *)(param_1 + 0x1f70) = *(float *)(param_1 + 0x1448);
    *(float *)(param_1 + 0x1f74) = fVar6;
    FUN_0091ada4(lVar3);
  }
  local_70 = 0x3f0000003f000000;
  (**(code **)(*(long *)(param_1 + 0x1f30) + 0x28))(lVar3,&local_70);
  FUN_00f07b18(*(float *)(param_1 + 0x2060) * -0.1,lVar1,3,lVar2,1);
  FUN_00f07b18(0,lVar1,0,lVar2,0);
  FUN_00f07940(*(float *)(param_1 + 0x2060) * 0.05,0,param_1 + 0x1038,7,lVar1,5);
  FUN_00f07940(0,0,param_1 + 0x1e00,4,param_1 + 0x1038,6);
  FUN_00f07940(0xc1a00000,0,param_1 + 0x1cd0,1,param_1 + 0x148,1);
  if (*(long *)(lVar4 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c6c2dc(long param_1,undefined8 param_2,int param_3)

{
  void *pvVar1;
  long lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  float fVar5;
  byte local_70 [16];
  void *local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  fVar5 = (float)NEON_fminnm((float)param_3,0x41e80000);
  if (fVar5 <= -1.0) {
    fVar5 = -1.0;
  }
  uVar3 = FUN_00cb41f0((int)fVar5);
  uVar4 = FUN_00cb421c((int)fVar5);
  FUN_00f0e628(param_1 + 0xb8);
  FUN_00cb4780(local_70,uVar3,uVar4);
  pvVar1 = (void *)((ulong)local_70 | 1);
  if ((local_70[0] & 1) != 0) {
    pvVar1 = local_60;
  }
  FUN_00f0e548(param_1 + 0xb8,pvVar1,"background");
  if ((local_70[0] & 1) != 0) {
    operator_delete(local_60);
  }
  FUN_00b1d77c(param_1 + 0x1a8,param_3);
  FUN_00f0d75c(param_1 + 0x578,param_2);
  FUN_00c6c524(param_1);
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined4 FUN_00c6c3e4(undefined8 param_1,int param_2)

{
  if (0x59 < param_2) {
    return 0x3e99999a;
  }
  if (0x3b < param_2) {
    return 0x3eb33333;
  }
  if (0x31 < param_2) {
    return 0x3ee66666;
  }
  if (0x1d < param_2) {
    return 0x3f0ccccd;
  }
  return *(undefined4 *)(&DAT_01baf4e8 + (ulong)(0x13 < param_2) * 4);
}




void FUN_00c6c44c(undefined4 param_1,undefined4 param_2,long *param_3)

{
  *(undefined4 *)(param_3 + 0x40c) = param_1;
  *(undefined4 *)((long)param_3 + 0x2064) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00c6c45c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_3 + 0x138))();
  return;
}




void FUN_00c6c460(long *param_1)

{
  long *plVar1;
  
  FUN_00f13ca4();
  *param_1 = (long)&PTR_FUN_02800ec0;
  FUN_00f0e4a8(param_1 + 0x17);
  FUN_00b1d5d8(param_1 + 0x35);
  plVar1 = param_1 + 0xaf;
  FUN_00f0d160(plVar1);
  param_1[0xd5] = 0;
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x17,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x35,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  FUN_00f0d92c(plVar1,PTR_s_build___Fonts_Brandon_Regular_40_02be9c48,&DAT_01bee7fa);
  return;
}




void FUN_00c6c524(long param_1)

{
  long lVar1;
  
  FUN_00f13f18(param_1,param_1 + 0x6a8);
  lVar1 = param_1 + 0xb8;
  if ((*(float *)(param_1 + 0x100) != 0.5) || (*(float *)(param_1 + 0x104) != 0.5)) {
    *(undefined8 *)(param_1 + 0x100) = 0x3f0000003f000000;
    FUN_0091ada4(lVar1);
  }
  FUN_00f07940(0,0xc2a00000,param_1 + 0x1a8,6,lVar1,6);
  FUN_00f07940(0,0xc1200000,param_1 + 0x578,6,lVar1,6);
  return;
}




void FUN_00c6c5b0(undefined4 param_1,undefined4 param_2,long param_3)

{
  *(undefined4 *)(param_3 + 0x6a8) = param_1;
  *(undefined4 *)(param_3 + 0x6ac) = param_2;
  FUN_00c6c524();
  return;
}




void FUN_00c6c5bc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_02800ec0;
  FUN_00f0d3a4(param_1 + 0xaf);
  FUN_00ab3254(param_1 + 0x35);
  param_1[0x17] = &PTR_FUN_028266f0;
  param_1[0x2e] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x31);
  FUN_00f13d08(param_1 + 0x17);
  FUN_00f13d08(param_1);
  operator_delete(param_1);
  return;
}




void FUN_00c6c630(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 << 3);
    puVar2 = *(undefined8 **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar3 = (ulong)*param_1 << 3;
      puVar4 = puVar1;
      do {
        lVar3 = lVar3 + -8;
        *puVar4 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar4 = puVar4 + 1;
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




void FUN_00c6c6b0(long *param_1)

{
  long *plVar1;
  long lVar2;
  undefined1 local_40 [8];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  FUN_00f13ca4();
  plVar1 = param_1 + 0x1a;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  *param_1 = (long)&PTR_FUN_02801008;
  FUN_00ed66ec(plVar1);
  FUN_00f017e8(param_1 + 0x15f);
  param_1[0x15f] = (long)&PTR_FUN_027c1f80;
  param_1[0x170] = 0;
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x15f,1);
  local_40[0] = 9;
  FUN_00ed5ab0(plVar1,local_40);
  FUN_00c6c794(param_1);
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c6c794(long param_1)

{
  long lVar1;
  undefined4 uVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  int iVar7;
  undefined4 uVar8;
  long lVar9;
  
  FUN_00f13f18(param_1,param_1 + 0xb80);
  lVar1 = param_1 + 0xd0;
  FUN_00f13f18(lVar1,param_1 + 0xb80);
  if (*(int *)(param_1 + 0xc0) != 0) {
    uVar6 = 0;
    plVar3 = (long *)0x0;
    plVar4 = (long *)0x0;
    iVar7 = 0;
    lVar9 = NEON_fmov(0x41200000,4);
    do {
      plVar5 = *(long **)(*(long *)(param_1 + 200) + uVar6 * 8);
      FUN_00f13f08((*(float *)(param_1 + 0xb80) + -40.0) * 0.33333334,
                   *(float *)(param_1 + 0xb84) * 0.6666667,plVar5);
      if ((*(char *)((long)plVar5 + 0x19ec) == '\0') && (*(char *)((long)plVar5 + 0x19ed) == '\0'))
      {
        *(uint *)((long)plVar5 + 0x84) = *(uint *)((long)plVar5 + 0x84) & 0xfffffffb;
      }
      else {
        *(uint *)((long)plVar5 + 0x84) = *(uint *)((long)plVar5 + 0x84) | 4;
        if (iVar7 == 0) {
          if ((*(float *)(plVar5 + 8) != 10.0) ||
             (plVar3 = plVar5, *(float *)((long)plVar5 + 0x44) != 10.0)) {
            plVar5[8] = lVar9;
            FUN_0091ada4(plVar5);
            plVar3 = plVar5;
          }
        }
        else if (iVar7 == (iVar7 / 3) * 3) {
          FUN_00f07b18(0x41200000,plVar5,0,plVar3,2);
          FUN_00f07b18(0,plVar5,3,plVar3,3);
          plVar3 = plVar5;
        }
        else {
          FUN_00f07b18(0x41200000,plVar5,3,plVar4,1);
          FUN_00f07b18(0,plVar5,0,plVar4,0);
        }
        uVar8 = (**(code **)(*plVar5 + 0x48))(plVar5);
        uVar2 = 2;
        if (plVar3 == plVar5) {
          uVar2 = 3;
        }
        *(undefined4 *)(plVar5 + 0x339) = uVar2;
        *(undefined4 *)((long)plVar5 + 0x19b4) = uVar8;
        FUN_00c6cb04(plVar5,param_1 + 0xaf8);
        iVar7 = iVar7 + 1;
        plVar4 = plVar5;
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < *(uint *)(param_1 + 0xc0));
  }
  FUN_00f01c54(lVar1,1,0,1,1);
  FUN_00ed5a58(lVar1);
  if (*(float *)(param_1 + 0x114) != 0.0) {
    *(undefined4 *)(param_1 + 0x114) = 0;
    FUN_0091ada4(lVar1);
    return;
  }
  return;
}




void FUN_00c6ca00(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_02801008;
  FUN_00c6ca54();
  FUN_00f01868(param_1 + 0x15f);
  thunk_FUN_00ed5534(param_1 + 0x1a);
  if ((void *)param_1[0x19] != (void *)0x0) {
    operator_delete__((void *)param_1[0x19]);
    param_1[0x18] = 0;
    param_1[0x19] = 0;
  }
  FUN_00f13d08(param_1);
  return;
}




void FUN_00c6ca54(long param_1)

{
  long *plVar1;
  uint uVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  
  uVar2 = *(uint *)(param_1 + 0xc0);
  if (uVar2 != 0) {
    lVar4 = 0;
    uVar5 = 0;
    do {
      plVar1 = *(long **)(*(long *)(param_1 + 200) + lVar4);
      if (plVar1 == (long *)0x0) {
        puVar3 = (undefined8 *)(*(long *)(param_1 + 200) + uVar5 * 8);
      }
      else {
        (**(code **)(*plVar1 + 8))();
        uVar2 = *(uint *)(param_1 + 0xc0);
        puVar3 = (undefined8 *)(*(long *)(param_1 + 200) + lVar4);
      }
      uVar5 = uVar5 + 1;
      lVar4 = lVar4 + 8;
      *puVar3 = 0;
    } while (uVar5 < uVar2);
  }
  if (*(long *)(param_1 + 200) != 0) {
    *(undefined4 *)(param_1 + 0xc0) = 0;
  }
  return;
}




void FUN_00c6cad4(void *param_1)

{
  FUN_00c6ca00();
  operator_delete(param_1);
  return;
}




void FUN_00c6caf8(undefined4 param_1,long param_2,undefined4 param_3)

{
  *(undefined4 *)(param_2 + 0x19c8) = param_3;
  *(undefined4 *)(param_2 + 0x19b4) = param_1;
  return;
}




void FUN_00c6cb04(long param_1,long *param_2)

{
  ulong uVar1;
  
  param_1 = param_1 + 0x1838;
  uVar1 = FUN_00f02540(param_1);
  if ((uVar1 & 1) != 0) {
    FUN_00f01a4c(param_1,1);
  }
  if (param_2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00c6cb54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_2 + 0x78))(param_2,param_1,1);
    return;
  }
  return;
}




void FUN_00c6cb64(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,uint param_7,undefined8 param_8)

{
  long lVar1;
  void *pvVar2;
  void *local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  pvVar2 = operator_new(0x19f0);
  FUN_00c6d5ac();
  local_70 = pvVar2;
  FUN_00c6cc40(pvVar2,param_2,param_3,param_4,param_5,param_6,param_7 & 1,param_8);
  FUN_00c6cf20(param_1 + 0xc0,&local_70);
  FUN_00ed5664(param_1 + 0xd0,local_70,1);
  FUN_00c6c794(param_1);
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c6cc40(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 long param_5,long param_6,byte param_7,long param_8)

{
  void *pvVar1;
  long lVar2;
  undefined *puVar3;
  ulong *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 local_148;
  void *local_140;
  ulong local_138;
  void *local_130;
  void *local_128;
  byte local_120 [16];
  void *local_110;
  byte local_108 [16];
  void *local_f8;
  ulong local_f0;
  void *pvStack_e8;
  void *local_e0 [2];
  void *local_d0;
  undefined4 local_c8;
  undefined8 local_c4;
  long local_70;
  
  lVar2 = tpidr_el0;
  local_70 = *(long *)(lVar2 + 0x28);
  FUN_008fce60(param_1 + 0x244);
  FUN_00f0d75c(param_1 + 200,param_3);
  FUN_00f0e578(param_1 + 0x52,param_4);
  param_1[0x33b] = param_5;
  *(float *)((long)param_1 + 0x19d4) = (float)param_6;
  *(byte *)((long)param_1 + 0x19ec) = param_7 & 1;
  FUN_0097b658(param_1 + 0x231,param_8 + 8);
  FUN_008fce60(param_1 + 0x233,param_8 + 0x18);
  lVar7 = *(long *)(param_8 + 0x30);
  param_1[0x237] = *(long *)(param_8 + 0x38);
  param_1[0x236] = lVar7;
  lVar7 = *(long *)(param_8 + 0x40);
  param_1[0x239] = *(long *)(param_8 + 0x48);
  param_1[0x238] = lVar7;
  lVar7 = *(long *)(param_8 + 0x50);
  param_1[0x23b] = *(long *)(param_8 + 0x58);
  param_1[0x23a] = lVar7;
  FUN_008fce60(param_1 + 0x23c,param_8 + 0x60);
  FUN_00910394(param_1 + 0x23f,param_8 + 0x78);
  FUN_00910394(param_1 + 0x241,param_8 + 0x88);
  *(undefined4 *)(param_1 + 0x243) = *(undefined4 *)(param_8 + 0x98);
  FUN_008fcdb8(local_108,param_2);
  FUN_00e6ffcc(local_108);
  FUN_00b5507c(&local_138,&DAT_0313bd28,local_108);
  uVar6 = DAT_0313bd48;
  puVar3 = DAT_0313bd50;
  if ((DAT_0313bd40 & 1) == 0) {
    uVar6 = (ulong)(DAT_0313bd40 >> 1);
    puVar3 = &DAT_0313bd41;
  }
  puVar4 = (ulong *)FUN_0090de84(&local_138,puVar3,uVar6);
  local_e0[0] = (void *)puVar4[2];
  pvStack_e8 = (void *)puVar4[1];
  local_f0 = *puVar4;
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = 0;
  FUN_008fcdb8(local_120,&local_f0);
  if ((local_f0 & 1) != 0) {
    operator_delete(local_e0[0]);
  }
  if ((local_138 & 1) != 0) {
    operator_delete(local_128);
  }
  pvVar1 = (void *)((ulong)local_120 | 1);
  if ((local_120[0] & 1) != 0) {
    pvVar1 = local_110;
  }
  uVar5 = FUN_00e6ce7c(pvVar1,0);
  thunk_FUN_00e7051c(&local_138,uVar5);
  uVar6 = FUN_00e70b04(&local_138);
  if ((uVar6 & 1) != 0) {
    pvVar1 = (void *)((ulong)local_120 | 1);
    if ((local_120[0] & 1) != 0) {
      pvVar1 = local_110;
    }
    FUN_00969b40(&local_f0,"Tooltip key has no text or is not defined: %s",pvVar1);
    FUN_00e705c8(&local_148,&local_f0);
    FUN_00910394(&local_138,&local_148);
    if (local_140 != (void *)0x0) {
      operator_delete__(local_140);
      local_148 = 0;
      local_140 = (void *)0x0;
    }
  }
  thunk_FUN_00e7051c(&local_f0,&local_138);
  FUN_008fcdb8(local_e0,&DAT_0320ffa8);
  local_c8 = 1;
  local_c4 = 0x41a00000;
  FUN_009c82b4(param_1 + 0x325,&local_f0);
  if (((ulong)local_e0[0] & 1) != 0) {
    operator_delete(local_d0);
  }
  if (pvStack_e8 != (void *)0x0) {
    operator_delete__(pvStack_e8);
    local_f0 = 0;
    pvStack_e8 = (void *)0x0;
  }
  (**(code **)(*param_1 + 0x138))(param_1);
  if (local_130 != (void *)0x0) {
    operator_delete__(local_130);
    local_138 = 0;
    local_130 = (void *)0x0;
  }
  if ((local_120[0] & 1) != 0) {
    operator_delete(local_110);
  }
  if ((local_108[0] & 1) != 0) {
    operator_delete(local_f8);
  }
  if (*(long *)(lVar2 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c6cf20(uint *param_1,undefined8 *param_2)

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
    FUN_00c6e598(param_1,uVar1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




void FUN_00c6cfa8(long param_1,byte *param_2,long param_3,long param_4,long param_5,
                 undefined4 param_6)

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
  long *plVar9;
  ulong uVar10;
  
  uVar2 = *(uint *)(param_1 + 0xc0);
  if (uVar2 != 0) {
    __n = *(size_t *)(param_2 + 8);
    __s2 = *(byte **)(param_2 + 0x10);
    lVar8 = *(long *)(param_1 + 200);
    uVar10 = 0;
    if ((*param_2 & 1) == 0) {
      __s2 = param_2 + 1;
      __n = (ulong)(*param_2 >> 1);
    }
    do {
      plVar9 = *(long **)(lVar8 + uVar10 * 8);
      bVar3 = *(byte *)(plVar9 + 0x244);
      uVar1 = (ulong)(bVar3 >> 1);
      if ((bVar3 & 1) != 0) {
        uVar1 = plVar9[0x245];
      }
      if (uVar1 == __n) {
        __s1 = (void *)plVar9[0x246];
        if ((bVar3 & 1) == 0) {
          __s1 = (void *)((long)plVar9 + 0x1221);
        }
        if ((bVar3 & 1) == 0) {
          if (__n == 0) {
LAB_00c6d094:
            plVar9[0x33b] = param_3;
            plVar9[0x33c] = param_5;
            *(float *)((long)plVar9 + 0x19d4) = (float)param_4;
            *(undefined4 *)(plVar9 + 0x33d) = param_6;
            *(undefined1 *)((long)plVar9 + 0x19ec) = 1;
            (**(code **)(*plVar9 + 0x138))(plVar9);
            break;
          }
          pbVar5 = (byte *)((long)plVar9 + 0x1221);
          lVar6 = -(ulong)(bVar3 >> 1);
          pbVar7 = __s2;
          while (*pbVar5 == *pbVar7) {
            pbVar5 = pbVar5 + 1;
            lVar6 = lVar6 + 1;
            pbVar7 = pbVar7 + 1;
            if (lVar6 == 0) goto LAB_00c6d094;
          }
        }
        else if ((__n == 0) || (iVar4 = memcmp(__s1,__s2,__n), iVar4 == 0)) goto LAB_00c6d094;
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 < uVar2);
  }
  FUN_00c6c794(param_1);
  return;
}

