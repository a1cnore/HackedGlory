// functions/00ca6 — 16 functions
#include "libGameKindred.h"




void thunk_FUN_00ca63cc(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  ushort uVar7;
  ushort *puVar8;
  ushort *puVar9;
  ushort *puVar10;
  float fVar11;
  
  lVar1 = param_1 + 0x1a8;
  FUN_00f01980(lVar1);
  fVar11 = *(float *)(param_1 + 0x3c8);
  if ((*(float *)(param_1 + 0x1f0) != fVar11) || (*(float *)(param_1 + 500) != fVar11 * 0.7)) {
    *(float *)(param_1 + 0x1f0) = fVar11;
    *(float *)(param_1 + 500) = fVar11 * 0.7;
    FUN_0091ada4(lVar1);
  }
  uVar6 = *(uint *)(param_1 + 0x22c);
  if ((~uVar6 & 0x7f80) != 0) {
    *(uint *)(param_1 + 0x22c) = uVar6 | 0x7f80;
    FUN_0091ada4(lVar1);
    uVar6 = *(uint *)(param_1 + 0x22c);
  }
  *(uint *)(param_1 + 0x22c) = uVar6 | 4;
  if (*(float *)(param_1 + 0x1ec) != 0.0) {
    *(undefined4 *)(param_1 + 0x1ec) = 0;
    FUN_0091ada4(lVar1);
  }
  fVar11 = *(float *)(param_1 + 0x3c8) * 0.9;
  uVar3 = FUN_00eff63c(*(float *)(param_1 + 0x3c8),fVar11,0x3eaa7efa,0);
  FUN_00f0e700(lVar1);
  uVar4 = FUN_00efef08(0,fVar11 * -0.5,0x3eaa7efa,0);
  uVar5 = FUN_00efee28(0,0x3eaa7efa,0);
  lVar2 = DAT_03210d00;
  uVar7 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar7 == 0xffff) {
    puVar8 = (ushort *)0x0;
  }
  else {
    puVar8 = (ushort *)(DAT_03210d00 + (ulong)uVar7 * 0x40 + 0x10);
    if (uVar7 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar7 = 0xffff;
    }
    else {
      uVar7 = *puVar8;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar7;
    *(int *)(lVar2 + 0x20014) = *(int *)(lVar2 + 0x20014) + 1;
    FUN_00efcd98(puVar8);
    *(int *)(lVar2 + 0x20020) = *(int *)(lVar2 + 0x20020) + 1;
  }
  FUN_00efcea4(puVar8,uVar3,uVar4,uVar5,0);
  lVar2 = DAT_03210d00;
  uVar7 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar7 == 0xffff) {
    puVar9 = (ushort *)0x0;
  }
  else {
    puVar9 = (ushort *)(DAT_03210d00 + (ulong)uVar7 * 0x40 + 0x10);
    if (uVar7 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar7 = 0xffff;
    }
    else {
      uVar7 = *puVar9;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar7;
    *(int *)(lVar2 + 0x20014) = *(int *)(lVar2 + 0x20014) + 1;
    FUN_00efc8e8(puVar9);
    *(undefined ***)puVar9 = &PTR_FUN_02825148;
    *(int *)(lVar2 + 0x20020) = *(int *)(lVar2 + 0x20020) + 1;
    lVar2 = DAT_03210d00;
    uVar7 = *(ushort *)(DAT_03210d00 + 0x20010);
    if ((ulong)uVar7 != 0xffff) {
      puVar10 = (ushort *)(DAT_03210d00 + (ulong)uVar7 * 0x40 + 0x10);
      if (uVar7 == *(ushort *)(DAT_03210d00 + 0x20012)) {
        uVar7 = 0xffff;
      }
      else {
        uVar7 = *puVar10;
      }
      *(ushort *)(DAT_03210d00 + 0x20010) = uVar7;
      *(int *)(lVar2 + 0x20014) = *(int *)(lVar2 + 0x20014) + 1;
      FUN_00efd208(puVar10);
      *(int *)(lVar2 + 0x20020) = *(int *)(lVar2 + 0x20020) + 1;
      goto LAB_00ca6690;
    }
  }
  puVar10 = (ushort *)0x0;
LAB_00ca6690:
  FUN_00efd2dc(puVar10,puVar8,puVar9,0);
  FUN_00f022a0(lVar1,puVar10);
  return;
}




void thunk_FUN_00ca66c8(undefined8 param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined1 auStack_48 [32];
  long lStack_28;
  
  lVar1 = tpidr_el0;
  lStack_28 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00f048a4("UI::EVENT_ANIM_COMPLETE");
  FUN_00f048e0(auStack_48,uVar2,0);
  FUN_00f04760(param_1,auStack_48,1);
  if (*(long *)(lVar1 + 0x28) == lStack_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ca639c(long param_1)

{
  FUN_00f01980(param_1 + 0x1a8);
  *(uint *)(param_1 + 0x22c) = *(uint *)(param_1 + 0x22c) & 0xfffffffb;
  return;
}




void FUN_00ca63cc(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  ushort uVar7;
  ushort *puVar8;
  ushort *puVar9;
  ushort *puVar10;
  float fVar11;
  
  lVar1 = param_1 + 0x1a8;
  FUN_00f01980(lVar1);
  fVar11 = *(float *)(param_1 + 0x3c8);
  if ((*(float *)(param_1 + 0x1f0) != fVar11) || (*(float *)(param_1 + 500) != fVar11 * 0.7)) {
    *(float *)(param_1 + 0x1f0) = fVar11;
    *(float *)(param_1 + 500) = fVar11 * 0.7;
    FUN_0091ada4(lVar1);
  }
  uVar6 = *(uint *)(param_1 + 0x22c);
  if ((~uVar6 & 0x7f80) != 0) {
    *(uint *)(param_1 + 0x22c) = uVar6 | 0x7f80;
    FUN_0091ada4(lVar1);
    uVar6 = *(uint *)(param_1 + 0x22c);
  }
  *(uint *)(param_1 + 0x22c) = uVar6 | 4;
  if (*(float *)(param_1 + 0x1ec) != 0.0) {
    *(undefined4 *)(param_1 + 0x1ec) = 0;
    FUN_0091ada4(lVar1);
  }
  fVar11 = *(float *)(param_1 + 0x3c8) * 0.9;
  uVar3 = FUN_00eff63c(*(float *)(param_1 + 0x3c8),fVar11,0x3eaa7efa,0);
  FUN_00f0e700(lVar1);
  uVar4 = FUN_00efef08(0,fVar11 * -0.5,0x3eaa7efa,0);
  uVar5 = FUN_00efee28(0,0x3eaa7efa,0);
  lVar2 = DAT_03210d00;
  uVar7 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar7 == 0xffff) {
    puVar8 = (ushort *)0x0;
  }
  else {
    puVar8 = (ushort *)(DAT_03210d00 + (ulong)uVar7 * 0x40 + 0x10);
    if (uVar7 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar7 = 0xffff;
    }
    else {
      uVar7 = *puVar8;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar7;
    *(int *)(lVar2 + 0x20014) = *(int *)(lVar2 + 0x20014) + 1;
    FUN_00efcd98(puVar8);
    *(int *)(lVar2 + 0x20020) = *(int *)(lVar2 + 0x20020) + 1;
  }
  FUN_00efcea4(puVar8,uVar3,uVar4,uVar5,0);
  lVar2 = DAT_03210d00;
  uVar7 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar7 == 0xffff) {
    puVar9 = (ushort *)0x0;
  }
  else {
    puVar9 = (ushort *)(DAT_03210d00 + (ulong)uVar7 * 0x40 + 0x10);
    if (uVar7 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar7 = 0xffff;
    }
    else {
      uVar7 = *puVar9;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar7;
    *(int *)(lVar2 + 0x20014) = *(int *)(lVar2 + 0x20014) + 1;
    FUN_00efc8e8(puVar9);
    *(undefined ***)puVar9 = &PTR_FUN_02825148;
    *(int *)(lVar2 + 0x20020) = *(int *)(lVar2 + 0x20020) + 1;
    lVar2 = DAT_03210d00;
    uVar7 = *(ushort *)(DAT_03210d00 + 0x20010);
    if ((ulong)uVar7 != 0xffff) {
      puVar10 = (ushort *)(DAT_03210d00 + (ulong)uVar7 * 0x40 + 0x10);
      if (uVar7 == *(ushort *)(DAT_03210d00 + 0x20012)) {
        uVar7 = 0xffff;
      }
      else {
        uVar7 = *puVar10;
      }
      *(ushort *)(DAT_03210d00 + 0x20010) = uVar7;
      *(int *)(lVar2 + 0x20014) = *(int *)(lVar2 + 0x20014) + 1;
      FUN_00efd208(puVar10);
      *(int *)(lVar2 + 0x20020) = *(int *)(lVar2 + 0x20020) + 1;
      goto LAB_00ca6690;
    }
  }
  puVar10 = (ushort *)0x0;
LAB_00ca6690:
  FUN_00efd2dc(puVar10,puVar8,puVar9,0);
  FUN_00f022a0(lVar1,puVar10);
  return;
}




void FUN_00ca66c8(undefined8 param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined1 auStack_48 [32];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00f048a4("UI::EVENT_ANIM_COMPLETE");
  FUN_00f048e0(auStack_48,uVar2,0);
  FUN_00f04760(param_1,auStack_48,1);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ca6738(long *param_1,uint param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  uint uVar5;
  undefined4 uVar6;
  long lVar7;
  undefined8 uVar8;
  code *local_a8;
  long *plStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined4 local_80;
  long local_78;
  
  lVar7 = tpidr_el0;
  local_78 = *(long *)(lVar7 + 0x28);
  FUN_00f13ca4();
  plVar1 = param_1 + 0x17;
  *param_1 = (long)&PTR_FUN_028086b0;
  FUN_00f0e4a8(plVar1);
  plVar2 = param_1 + 0x35;
  FUN_00f0d160(plVar2);
  plVar3 = param_1 + 0x5b;
  uVar5 = param_2 & 1;
  FUN_00c93600(plVar3,uVar5);
  plVar4 = param_1 + 0x1a4;
  FUN_00ab6c24(plVar4,uVar5);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar3,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar4,1);
  FUN_00f0e9c0(plVar1,1);
  FUN_00f0d378(plVar2,PTR_s_build___Fonts_Brandon_Bold_80_fo_02be9ca0);
  uVar8 = FUN_00e6ce7c("GENERIC_BUTTON_CONTINUE",0);
  FUN_00c938d4(plVar3,uVar8);
  uVar6 = DAT_03210c64;
  local_a8 = FUN_00ca69bc;
  local_90 = 0;
  uStack_88 = 0;
  local_98 = 0;
  plStack_a0 = param_1;
  local_80 = uVar6;
  FUN_009693a0(param_1 + 0x5c,&local_a8);
  FUN_00f13f08(0x44480000,0x43250000,plVar3);
  FUN_00c93864(plVar3,PTR_s_build___Fonts_Brandon_Bold_80_fo_02be9ca0);
  uVar8 = FUN_00e6ce7c("GENERIC_BUTTON_CONTINUE",0);
  FUN_00ab703c(0x42000000,0x44160000,0x447a0000,plVar4,0,uVar8,&DAT_01bee7fa,&DAT_03218ef8,0);
  FUN_00f13f08(0x44480000,0x43250000,plVar4);
  FUN_00f0d378(param_1 + 0x288,PTR_s_build___Fonts_Brandon_Bold_80_fo_02be9ca0);
  local_a8 = FUN_00ca69bc;
  local_90 = 0;
  uStack_88 = 0;
  local_98 = 0;
  plStack_a0 = param_1;
  local_80 = uVar6;
  FUN_009693a0(param_1 + 0x1a5,&local_a8);
  FUN_00b09144(0x3dcccccd,plVar4);
  FUN_00ab7588(0x3f800000,plVar4,&DAT_01bee7f6);
  *(uint *)((long)param_1 + 0x35c) =
       *(uint *)((long)param_1 + 0x35c) & 0xfffffff8 |
       *(uint *)((long)param_1 + 0x35c) & 3 | (~param_2 & 1) << 2;
  *(uint *)((long)param_1 + 0xda4) =
       *(uint *)((long)param_1 + 0xda4) & 0xfffffff8 |
       *(uint *)((long)param_1 + 0xda4) & 3 | uVar5 << 2;
  if (*(long *)(lVar7 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ca69bc(undefined8 param_1)

{
  long lVar1;
  undefined1 auStack_48 [32];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00f048e0(auStack_48,DAT_0313cc28,0);
  FUN_00f04760(param_1,auStack_48,1);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ca6a24(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_00f0e548(param_1 + 0xb8);
  FUN_00f0d75c(param_1 + 0x1a8,param_4);
  return;
}




void FUN_00ca6a54(undefined1 param_1 [16],float param_2,long *param_3)

{
  FUN_00f13f08(param_1,param_2 + 35.0,param_3 + 0x17);
                    /* WARNING: Could not recover jumptable at 0x00ca6a8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_3 + 0x138))(param_3);
  return;
}




void FUN_00ca6a90(long param_1)

{
  long lVar1;
  long lVar2;
  float fVar3;
  
  lVar2 = param_1 + 0xb8;
  FUN_00f07b78(0x3e2e147b,0x3f800000,0,0x3f800000,0,0,lVar2,param_1);
  fVar3 = (float)FUN_00f080a0(lVar2,5,param_1,5);
  lVar1 = param_1 + 0x1a8;
  FUN_00f0dad0(fVar3 + -160.0,lVar1,1);
  FUN_00f07940(0x42a00000,0x43c80000,lVar1,0,lVar2,1);
  if ((*(byte *)(param_1 + 0x35c) >> 2 & 1) == 0) {
    lVar2 = param_1 + 0xd20;
  }
  else {
    lVar2 = param_1 + 0x2d8;
  }
  FUN_00f07940(0,0xc2a00000,lVar2,6,param_1,6);
  FUN_00f07b18(0,lVar2,4,lVar1,4);
  return;
}




void FUN_00ca6b7c(undefined8 param_1)

{
  long lVar1;
  undefined1 auStack_48 [32];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00f048e0(auStack_48,DAT_0313cc28,0);
  FUN_00f04760(param_1,auStack_48,1);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ca6be4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_028086b0;
  FUN_009c7fa8(param_1 + 0x1a4);
  param_1[0x5b] = &PTR_FUN_028062b0;
  FUN_00f0d3a4(param_1 + 0x17c);
  FUN_00c925cc(param_1 + 0x5b);
  FUN_00f0d3a4(param_1 + 0x35);
  param_1[0x17] = &PTR_FUN_028266f0;
  param_1[0x2e] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x31);
  FUN_00f13d08(param_1 + 0x17);
  FUN_00f13d08(param_1);
  return;
}




void FUN_00ca6c74(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_028086b0;
  FUN_009c7fa8(param_1 + 0x1a4);
  param_1[0x5b] = &PTR_FUN_028062b0;
  FUN_00f0d3a4(param_1 + 0x17c);
  FUN_00c925cc(param_1 + 0x5b);
  FUN_00f0d3a4(param_1 + 0x35);
  param_1[0x17] = &PTR_FUN_028266f0;
  param_1[0x2e] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x31);
  FUN_00f13d08(param_1 + 0x17);
  FUN_00f13d08(param_1);
  operator_delete(param_1);
  return;
}




void FUN_00ca6d0c(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  undefined4 uVar6;
  long lVar7;
  code *local_98;
  long *plStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  long local_68;
  
  lVar7 = tpidr_el0;
  local_68 = *(long *)(lVar7 + 0x28);
  FUN_00f13ca4();
  plVar1 = param_1 + 0x17;
  *param_1 = (long)&PTR_FUN_02808800;
  FUN_00f0e4a8(plVar1);
  plVar2 = param_1 + 0x35;
  FUN_00f0d160(plVar2);
  plVar3 = param_1 + 0x5b;
  FUN_00f0d160(plVar3);
  plVar4 = param_1 + 0x81;
  FUN_00c93600(plVar4,0);
  plVar5 = param_1 + 0x1ca;
  FUN_00c93600(plVar5,0);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar3,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar4,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar5,1);
  FUN_00f0e9c0(plVar1,1);
  if ((*(float *)(param_1 + 0x20) != 1.15) || (*(float *)((long)param_1 + 0x104) != 1.15)) {
    param_1[0x20] = 0x3f9333333f933333;
    FUN_0091ada4(plVar1);
  }
  FUN_00f0d378(plVar2,PTR_s_build___Fonts_Brandon_Bold_80_fo_02be9ca0);
  FUN_00f0dac8(plVar2,3);
  FUN_00f0d378(plVar3,PTR_s_build___Fonts_Brandon_Regular_60_02be9c58);
  local_98 = (code *)CONCAT44(local_98._4_4_,0xffe6d6d6);
  FUN_00f0d7fc(plVar3,&local_98);
  FUN_00f0dac8(plVar3,3);
  local_80 = 0;
  uStack_78 = 0;
  uVar6 = DAT_03210c64;
  local_98 = FUN_00ca6f78;
  local_88 = 0;
  plStack_90 = param_1;
  local_70 = uVar6;
  FUN_009693a0(param_1 + 0x82,&local_98);
  FUN_00f13f08(0x44480000,0x43250000,plVar4);
  FUN_00c93864(plVar4,PTR_s_build___Fonts_Brandon_Bold_80_fo_02be9ca0);
  local_98 = FUN_00ca6fe0;
  local_80 = 0;
  uStack_78 = 0;
  local_88 = 0;
  plStack_90 = param_1;
  local_70 = uVar6;
  FUN_009693a0(param_1 + 0x1cb,&local_98);
  FUN_00f13f08(0x44480000,0x43250000,plVar5);
  FUN_00c93864(plVar5,PTR_s_build___Fonts_Brandon_Bold_80_fo_02be9ca0);
  if (*(long *)(lVar7 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ca6f78(undefined8 param_1)

{
  long lVar1;
  undefined1 auStack_48 [32];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00f048e0(auStack_48,DAT_0313cdbc,0);
  FUN_00f04760(param_1,auStack_48,1);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ca6fe0(undefined8 param_1)

{
  long lVar1;
  undefined1 auStack_48 [32];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00f048e0(auStack_48,DAT_0313cdc0,0);
  FUN_00f04760(param_1,auStack_48,1);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

