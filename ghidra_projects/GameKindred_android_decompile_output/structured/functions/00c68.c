// functions/00c68 — 24 functions
#include "libGameKindred.h"




void FUN_00c680c8(void *param_1)

{
  FUN_00c67f08();
  operator_delete(param_1);
  return;
}




void FUN_00c680ec(long *param_1,undefined8 param_2,undefined4 param_3,uint param_4)

{
  FUN_00b0a264(0x3f000000,param_1 + 0x34a,param_2,&DAT_01bbe330,&DAT_01bbe334,param_4 & 1,param_3,1)
  ;
                    /* WARNING: Could not recover jumptable at 0x00c6813c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x138))(param_1);
  return;
}




void FUN_00c68140(long *param_1)

{
  FUN_00f13f08(param_1 + 0x2b);
                    /* WARNING: Could not recover jumptable at 0x00c6816c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x138))(param_1);
  return;
}




void FUN_00c68170(long *param_1)

{
  (**(code **)(*param_1 + 0x138))();
                    /* WARNING: Could not recover jumptable at 0x00c681b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[0x2a] + 0x138))(0,(long *)param_1[0x2a],1,4,1);
  return;
}




void FUN_00c681b4(long *param_1)

{
  (**(code **)(*param_1 + 0x138))();
                    /* WARNING: Could not recover jumptable at 0x00c681f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[0x2a] + 0x138))(0,(long *)param_1[0x2a],1,4,1);
  return;
}




void FUN_00c681f8(long *param_1,long param_2)

{
  param_1[0x2a] = param_2;
  FUN_00ed5664(param_1 + 0xb1,param_2,1);
                    /* WARNING: Could not recover jumptable at 0x00c6822c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x138))(param_1);
  return;
}




void FUN_00c68230(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00f04924(param_2);
  FUN_00c6825c(param_1,uVar1);
  return;
}




void FUN_00c6825c(long param_1,int param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 local_50;
  void *local_48;
  ushort local_3c [2];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  lVar1 = param_1 + 0x588;
  FUN_00ed70a8(lVar1);
  if (param_2 == 0) {
    FUN_00c68364(param_1,1);
    lVar4 = FUN_00ed5aa8(lVar1);
    if (*(float *)(lVar4 + 0x44) != 0.0) {
      *(undefined4 *)(lVar4 + 0x44) = 0;
      FUN_0091ada4();
    }
    FUN_00ed70a8(lVar1);
  }
  else {
    uVar3 = (**(code **)**(undefined8 **)(param_1 + 0x148))();
    lVar4 = FUN_00be1bbc(uVar3,param_2);
    if (lVar4 != 0) {
      FUN_00ab3480(lVar4,lVar1,param_1 + 1000);
      FUN_00c68364(param_1,0);
    }
  }
  local_3c[0] = (ushort)(byte)((char)param_2 + 0x41);
  FUN_00e705c8(&local_50,local_3c);
  FUN_00add2c4(param_1 + 0x1120,&local_50);
  if (local_48 != (void *)0x0) {
    operator_delete__(local_48);
    local_50 = 0;
    local_48 = (void *)0x0;
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c68364(undefined1 param_1 [16],float param_2,long param_3,ulong param_4)

{
  long lVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  ushort uVar5;
  ushort *puVar6;
  undefined4 local_50;
  float local_4c;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  lVar1 = param_3 + 0x16d0;
  FUN_00f01980(lVar1);
  lVar4 = DAT_03210d00;
  uVar5 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar5 == 0xffff) {
    puVar6 = (ushort *)0x0;
  }
  else {
    puVar6 = (ushort *)(DAT_03210d00 + (ulong)uVar5 * 0x40 + 0x10);
    if (uVar5 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar5 = 0xffff;
    }
    else {
      uVar5 = *puVar6;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar5;
    *(int *)(lVar4 + 0x20014) = *(int *)(lVar4 + 0x20014) + 1;
    FUN_00efdc08(puVar6);
    *(int *)(lVar4 + 0x20020) = *(int *)(lVar4 + 0x20020) + 1;
  }
  uVar2 = *(undefined4 *)(param_3 + 0x1710);
  if ((param_4 & 1) == 0) {
    FUN_00f13e54(lVar1);
    local_4c = -param_2;
  }
  else {
    local_4c = 0.0;
  }
  local_50 = uVar2;
  FUN_00efdc50(puVar6,&local_50);
  FUN_00efcac4(0x3e19999a,puVar6);
  FUN_00f022a0(lVar1,puVar6);
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c684a4(undefined1 param_1 [16],undefined4 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  undefined4 local_70;
  float fStack_6c;
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  lVar1 = param_3 + 0x158;
  local_70 = FUN_00f13e54(lVar1);
  fStack_6c = (float)param_2;
  FUN_00f13f18(param_3 + 0x2f8,&local_70);
  lVar3 = param_3 + 0x16d0;
  FUN_00f13e54(lVar1);
  fVar9 = 190.0;
  FUN_00f13f08(lVar3);
  local_70 = FUN_00f13e54(lVar3);
  fStack_6c = fVar9;
  FUN_00f13f18(param_3 + 0x1870,&local_70);
  uVar6 = FUN_0093dbe8();
  *(uint *)(param_3 + 0x1754) =
       *(uint *)(param_3 + 0x1754) & 0xfffffff8 |
       *(uint *)(param_3 + 0x1754) & 3 | (~uVar6 & 1) << 2;
  lVar2 = param_3 + 1000;
  local_70 = FUN_00f13e54(lVar1);
  fStack_6c = fVar9;
  FUN_00f13f18(lVar2,&local_70);
  lVar4 = param_3 + 0x1588;
  local_70 = FUN_00f13e54(lVar3);
  fStack_6c = fVar9;
  FUN_00f13f18(lVar4,&local_70);
  local_70 = FUN_00f13e54(lVar2);
  fStack_6c = fVar9;
  FUN_00f13f18(param_3 + 0x588,&local_70);
  uVar7 = *(undefined8 *)(param_3 + 0x150);
  fVar8 = (float)FUN_00f13e54(lVar1);
  FUN_00c55a24(fVar8 + -80.0,uVar7);
  (**(code **)(**(long **)(param_3 + 0x150) + 0x150))();
  lVar1 = param_3 + 0x1a50;
  FUN_00f13e54(lVar1);
  fVar9 = fVar9 * 0.5;
  FUN_00f07940(0,fVar9,lVar1,8,lVar3,8);
  FUN_00f13e54(lVar1);
  fVar9 = fVar9 * -0.5;
  FUN_00f07940(0x41a00000,fVar9,param_3 + 0x1960,5,lVar1,7);
  uVar7 = *(undefined8 *)(param_3 + 0x150);
  FUN_00f07b18(0,uVar7,0,lVar4,2);
  FUN_00f07b18(0x42a00000,uVar7,3,lVar4,3);
  lVar1 = param_3 + 0xfb0;
  FUN_00f13e54(lVar2);
  fVar8 = fVar9;
  FUN_00f13e54(lVar4);
  fVar8 = (fVar9 - fVar8) + -80.0;
  FUN_00f13f08(0x42480000,fVar8,lVar1);
  uVar7 = NEON_fmov(0x41f00000,4);
  *(undefined8 *)(param_3 + 0x1008) = uVar7;
  FUN_00ed1ff0(lVar1);
  FUN_00f13e54(lVar4);
  FUN_00f07940(0,fVar8 + 40.0,lVar1,1,lVar2,1);
  if (*(float *)(param_3 + 0x5cc) != 0.0) {
    *(undefined4 *)(param_3 + 0x5cc) = 0;
    FUN_0091ada4(param_3 + 0x588);
  }
  if (*(long *)(lVar5 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c68724(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_00f04924(param_2);
  if (iVar1 < 1) {
    iVar1 = FUN_00f04924(param_2);
    if (-1 < iVar1) {
      return;
    }
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  FUN_00c68364(param_1,uVar2);
  return;
}




void FUN_00c68780(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  uint uVar10;
  long lVar11;
  long lVar12;
  code *local_98;
  long *plStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  long local_68;
  
  lVar11 = tpidr_el0;
  local_68 = *(long *)(lVar11 + 0x28);
  FUN_00f0ac5c();
  plVar1 = param_1 + 0x2b;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  *param_1 = (long)&PTR_FUN_028003f8;
  FUN_00f11234(plVar1);
  FUN_00f0e4a8();
  plVar2 = param_1 + 0x7d;
  FUN_00f11234(plVar2);
  plVar3 = param_1 + 0xb1;
  FUN_00ed66ec(plVar3);
  plVar4 = param_1 + 0x1f6;
  FUN_00ed1c1c(plVar4);
  plVar5 = param_1 + 0x224;
  FUN_00add154(plVar5);
  FUN_00f0ac5c();
  plVar6 = param_1 + 0x2da;
  FUN_00f11234(plVar6);
  plVar7 = param_1 + 0x30e;
  FUN_00f0e4a8(plVar7);
  plVar8 = param_1 + 0x32c;
  FUN_00f0e4a8(plVar8);
  plVar9 = param_1 + 0x34a;
  FUN_00b09580(plVar9);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  FUN_00f023ec(plVar1,plVar2,1);
  FUN_00f023ec(plVar2,plVar3,1);
  FUN_00ed5664(plVar3,param_1 + 0x2b1,1);
  FUN_00f023ec(plVar2,plVar5,1);
  FUN_00f023ec(plVar2,plVar4,1);
  FUN_00f023ec(plVar1,plVar6,1);
  FUN_00f023ec(plVar6,plVar7,1);
  FUN_00f023ec(plVar6,plVar9,1);
  FUN_00f023ec(plVar9,plVar8,1);
  FUN_00f112f0(plVar1,1);
  FUN_00f0e548(param_1 + 0x5f,PTR_s_build___MenuPartsCommon_tga_02be3530,"white_background");
  FUN_00f0e670(param_1 + 0x5f,&DAT_01bee7f6,2);
  FUN_00f0e548(plVar7,PTR_s_build___MenuPartsCommon_tga_02be3530,"white_background");
  FUN_00f0e670(plVar7,&DAT_01bee7f6,2);
  uVar10 = *(uint *)((long)param_1 + 0x18f4);
  if ((uVar10 & 0x7f80) != 0x6c00) {
    *(uint *)((long)param_1 + 0x18f4) = uVar10 & 0xffff8000 | uVar10 & 0x7f | 0x6c00;
    FUN_0091ada4(plVar7);
  }
  FUN_00b0b848(0x3f800000,plVar9,"white_background","white_background");
  FUN_00b0a8a8(plVar9,&DAT_01bee7fa,&DAT_01bee7fa,&DAT_01bee7fa);
  *(undefined1 *)((long)param_1 + 0x2d64) = 1;
  FUN_00b0b950(plVar9,PTR_s_build___Fonts_Brandon_Regular_40_02be9c48);
  FUN_00b0a930(0x44960000,0x42700000,plVar9,0,100,0,1);
  FUN_00b0b988(plVar9);
  FUN_00f0e548(plVar8,PTR_s_build___MenuPartsCommon_tga_02be3530,"talent_coinback_glow");
  if ((*(float *)(param_1 + 0x335) != 0.75) || (*(float *)((long)param_1 + 0x19ac) != 0.75)) {
    lVar12 = NEON_fmov(0x3f400000,4);
    param_1[0x335] = lVar12;
    FUN_0091ada4(plVar8);
  }
  FUN_00f112f0(plVar2,1);
  FUN_00ed7144(plVar3,0);
  local_98 = (code *)CONCAT71(local_98._1_7_,9);
  FUN_00ed5ab0(plVar3,&local_98);
  local_70 = DAT_03210c50;
  local_98 = FUN_00c68b94;
  local_80 = 0;
  uStack_78 = 0;
  local_88 = 0;
  plStack_90 = param_1;
  FUN_009693a0(param_1 + 0xb2,&local_98);
  FUN_00ab32dc(plVar4,PTR_s_build___Fonts_Brandon_Bold_40_fo_02be9c80);
  local_70 = FUN_00f048a4("UI::EVENT_JUMPLIST_JUMP_TO_INDEX");
  local_98 = FUN_00c68b9c;
  local_80 = 0;
  uStack_78 = 0;
  local_88 = 0;
  plStack_90 = param_1;
  FUN_009693a0(param_1 + 0x1f7,&local_98);
  FUN_00ed1fe8(plVar4,plVar5);
  local_70 = DAT_03210c7c;
  *(uint *)((long)param_1 + 0x11a4) = *(uint *)((long)param_1 + 0x11a4) & 0xfffffffb;
  local_98 = FUN_00c68bc8;
  local_80 = 0;
  uStack_78 = 0;
  local_88 = 0;
  plStack_90 = param_1;
  FUN_009693a0(param_1 + 1,&local_98);
  if (*(long *)(lVar11 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c68b94(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_00c69394(param_1,param_4);
  return;
}




void FUN_00c68b9c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00f04924(param_4);
  FUN_00c68e88(param_1,uVar1);
  return;
}




void FUN_00c68bc8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00c68bd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x150) + 0x138))(*(long **)(param_1 + 0x150),1);
  return;
}




void FUN_00c68bdc(undefined8 *param_1)

{
  param_1[0x2a] = 0;
  *param_1 = &PTR_FUN_028003f8;
  FUN_00ab0d88(param_1 + 0x34a);
  param_1[0x32c] = &PTR_FUN_028266f0;
  param_1[0x343] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x346);
  FUN_00f13d08(param_1 + 0x32c);
  param_1[0x30e] = &PTR_FUN_028266f0;
  param_1[0x325] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x328);
  FUN_00f13d08(param_1 + 0x30e);
  FUN_00f13d08(param_1 + 0x2da);
  param_1[0x2b1] = &PTR_FUN_02825728;
  FUN_00f01868(param_1 + 0x2c8);
  FUN_00f13d08(param_1 + 0x2b1);
  param_1[0x224] = &PTR_FUN_027d8490;
  FUN_00f0d3a4(param_1 + 0x28b);
  param_1[0x26d] = &PTR_FUN_028266f0;
  param_1[0x284] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x287);
  FUN_00f13d08(param_1 + 0x26d);
  param_1[0x24f] = &PTR_FUN_028266f0;
  param_1[0x266] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x269);
  FUN_00f13d08(param_1 + 0x24f);
  param_1[0x224] = &PTR_FUN_02827fc8;
  FUN_00f01868(param_1 + 0x23b);
  FUN_00f13d08(param_1 + 0x224);
  FUN_00ed1e14(param_1 + 0x1f6);
  thunk_FUN_00ed5534(param_1 + 0xb1);
  FUN_00f13d08(param_1 + 0x7d);
  param_1[0x5f] = &PTR_FUN_028266f0;
  param_1[0x76] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x79);
  FUN_00f13d08(param_1 + 0x5f);
  FUN_00f13d08(param_1 + 0x2b);
  *param_1 = &PTR_FUN_02825728;
  FUN_00f01868(param_1 + 0x17);
  FUN_00f13d08(param_1);
  return;
}




void FUN_00c68d94(void *param_1)

{
  FUN_00c68bdc();
  operator_delete(param_1);
  return;
}




void FUN_00c68db8(long *param_1,undefined8 param_2,undefined4 param_3)

{
  FUN_00b0a264(0x3f000000,param_1 + 0x34a,param_2,&DAT_01bbe348,&DAT_01bbe34c,0,param_3,1);
                    /* WARNING: Could not recover jumptable at 0x00c68e08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x138))(param_1);
  return;
}




void FUN_00c68e0c(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00c68e14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x138))();
  return;
}




void FUN_00c68e18(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00c68e20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x138))();
  return;
}




void FUN_00c68e24(long *param_1,long param_2)

{
  param_1[0x2a] = param_2;
  FUN_00ed5664(param_1 + 0xb1,param_2,1);
                    /* WARNING: Could not recover jumptable at 0x00c68e58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x138))(param_1);
  return;
}




void FUN_00c68e5c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00f04924(param_2);
  FUN_00c68e88(param_1,uVar1);
  return;
}




void FUN_00c68e88(long param_1,int param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 local_50;
  void *local_48;
  ushort local_3c [2];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  lVar1 = param_1 + 0x588;
  FUN_00ed70a8(lVar1);
  if (param_2 == 0) {
    FUN_00c68f90(param_1,1);
    lVar4 = FUN_00ed5aa8(lVar1);
    if (*(float *)(lVar4 + 0x44) != 0.0) {
      *(undefined4 *)(lVar4 + 0x44) = 0;
      FUN_0091ada4();
    }
    FUN_00ed70a8(lVar1);
  }
  else {
    uVar3 = (**(code **)**(undefined8 **)(param_1 + 0x148))();
    lVar4 = FUN_00bf0c7c(uVar3,param_2);
    if (lVar4 != 0) {
      FUN_00ab3480(lVar4,lVar1,param_1 + 1000);
      FUN_00c68f90(param_1,0);
    }
  }
  local_3c[0] = (ushort)(byte)((char)param_2 + 0x41);
  FUN_00e705c8(&local_50,local_3c);
  FUN_00add2c4(param_1 + 0x1120,&local_50);
  if (local_48 != (void *)0x0) {
    operator_delete__(local_48);
    local_50 = 0;
    local_48 = (void *)0x0;
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c68f90(undefined1 param_1 [16],float param_2,long param_3,ulong param_4)

{
  long lVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  ushort uVar5;
  ushort *puVar6;
  undefined4 local_50;
  float local_4c;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  lVar1 = param_3 + 0x16d0;
  FUN_00f01980(lVar1);
  lVar4 = DAT_03210d00;
  uVar5 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar5 == 0xffff) {
    puVar6 = (ushort *)0x0;
  }
  else {
    puVar6 = (ushort *)(DAT_03210d00 + (ulong)uVar5 * 0x40 + 0x10);
    if (uVar5 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar5 = 0xffff;
    }
    else {
      uVar5 = *puVar6;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar5;
    *(int *)(lVar4 + 0x20014) = *(int *)(lVar4 + 0x20014) + 1;
    FUN_00efdc08(puVar6);
    *(int *)(lVar4 + 0x20020) = *(int *)(lVar4 + 0x20020) + 1;
  }
  uVar2 = *(undefined4 *)(param_3 + 0x1710);
  if ((param_4 & 1) == 0) {
    FUN_00f13e54(lVar1);
    local_4c = -param_2;
  }
  else {
    local_4c = 0.0;
  }
  local_50 = uVar2;
  FUN_00efdc50(puVar6,&local_50);
  FUN_00efcac4(0x3e19999a,puVar6);
  FUN_00f022a0(lVar1,puVar6);
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

