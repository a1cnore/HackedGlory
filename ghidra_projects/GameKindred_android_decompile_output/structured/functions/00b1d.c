// functions/00b1d — 16 functions
#include "libGameKindred.h"




void FUN_00b1d2b4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 long param_5,int param_6)

{
  long lVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  float fVar6;
  undefined4 local_70 [2];
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  fVar6 = (float)NEON_fminnm((float)param_6,0x41e80000);
  if (fVar6 <= -1.0) {
    fVar6 = -1.0;
  }
  *(undefined4 *)(param_5 + 0x1f54) = param_2;
  *(undefined4 *)(param_5 + 0x1f58) = param_3;
  *(undefined4 *)(param_5 + 0x1f5c) = param_4;
  iVar4 = FUN_00cb421c((int)fVar6);
  if ((int)fVar6 < 0) {
    *(uint *)(param_5 + 0x84) = *(uint *)(param_5 + 0x84) & 0xfffffffb;
    goto LAB_00b1d4d8;
  }
  lVar1 = param_5 + 0x16f8;
  FUN_00f0d7fc(lVar1,&DAT_01bb2020);
  lVar2 = param_5 + 0x1828;
  FUN_00f0d7fc(lVar2,&DAT_01bb2024);
  lVar5 = param_5 + 0x1958;
  FUN_00f0d7fc(lVar5,&DAT_01bb2028);
  *(uint *)(param_5 + 0x84) = *(uint *)(param_5 + 0x84) | 4;
  if (iVar4 == 0) {
    FUN_00b0b88c(0x3f800000,0x3f800000,param_5 + 0x110);
    local_70[0] = 0xffb4b4ff;
    FUN_00b0a8a8(param_5 + 0x110,local_70,&DAT_01bee7fa,&DAT_01bee7fa);
    FUN_00f0d7fc(lVar2,&DAT_01bb202c);
LAB_00b1d48c:
    FUN_00f0d7fc(lVar5,&DAT_01bb202c);
  }
  else {
    if (iVar4 == 1) {
      FUN_00b0a8a8(param_5 + 0x110,&DAT_01bee7fa,&DAT_01bee7fa,&DAT_01bee7fa);
      FUN_00b0b88c(0,0,param_5 + 0x110);
      FUN_00f0d7fc(lVar1,&DAT_01bb202c);
      goto LAB_00b1d48c;
    }
    if (iVar4 == 2) {
      FUN_00b0b88c(0x3f800000,0x3f800000,param_5 + 0x110);
      FUN_00b0a8a8(param_5 + 0x110,&DAT_01bee7fa,&DAT_01bee7fa,&DAT_01bee7fa);
      FUN_00f0d7fc(lVar1,&DAT_01bb202c);
      lVar5 = lVar2;
      goto LAB_00b1d48c;
    }
  }
  if (*(char *)(param_5 + 0x1f7d) != '\0') {
    FUN_00b0b88c(0x3f800000,0x3f800000,param_5 + 0x110);
    FUN_00b0a8a8(param_5 + 0x110,&DAT_01bee7fa,&DAT_01bee7fa,&DAT_01bee7fa);
  }
  *(undefined4 *)(param_5 + 0x1f50) = param_1;
  *(undefined4 *)(param_5 + 0x1f54) = param_2;
  *(undefined4 *)(param_5 + 0x1f58) = param_3;
  *(undefined4 *)(param_5 + 0x1f5c) = param_4;
LAB_00b1d4d8:
  FUN_00b1cbb0(param_5);
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined4 FUN_00b1d514(long param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 0x1f60);
  FUN_00f0d4e0(param_1 + 0x16f8);
  return uVar1;
}




void FUN_00b1d548(long param_1,byte param_2)

{
  *(byte *)(param_1 + 0x1f7d) = param_2 & 1;
  param_1 = param_1 + 0x110;
  if ((param_2 & 1) != 0) {
    FUN_00b0b848(0x3fef684c,param_1,"xp_bar_red","xp_bar_new");
    FUN_00b0b88c(0x3f800000,0x3f800000,param_1);
    FUN_00b0a8a8(param_1,&DAT_01bee7fa,&DAT_01bee7fa,&DAT_01bee7fa);
    return;
  }
  FUN_00b0b848(0x3fef684c,param_1,"xp_bar_current","xp_bar_new");
  return;
}




void FUN_00b1d5d8(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 local_68;
  void *local_60;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  FUN_00f13ca4();
  plVar1 = param_1 + 0x17;
  *param_1 = (long)&PTR_FUN_027dd718;
  FUN_00f0e4a8(plVar1);
  plVar2 = param_1 + 0x35;
  FUN_00f0e4a8(plVar2);
  plVar3 = param_1 + 0x53;
  FUN_00f0d160(plVar3);
  param_1[0x79] = 0x4000000000000000;
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar3,1);
  FUN_00f0e548(plVar2,PTR_s_build___MenuPartsCommon_tga_02be3530,"ranked_levelIcon");
  FUN_00f0e670(plVar2,&DAT_01bee7f6,2);
  *(uint *)((long)param_1 + 0x22c) = *(uint *)((long)param_1 + 0x22c) & 0xfffffffb;
  FUN_00f0e548(plVar1,PTR_s_build___MenuPartsCommon_tga_02be3530,"ranked_levelIcon");
  FUN_00f0d378(plVar3,PTR_s_build___Fonts_Brandon_Bold_48_fo_02be9c88);
  FUN_00e705c8(&local_68,0x1e21c1a);
  FUN_00f0d75c(plVar3,&local_68);
  if (local_60 != (void *)0x0) {
    operator_delete__(local_60);
    local_68 = 0;
    local_60 = (void *)0x0;
  }
  uVar5 = (**(code **)(*param_1 + 0x118))(param_1);
  FUN_00f13f2c(param_1,uVar5);
  (**(code **)(*param_1 + 0xe8))(param_1);
  if (*(long *)(lVar4 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b1d77c(long param_1,uint param_2)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  float fVar7;
  undefined8 local_60;
  void *local_58;
  undefined4 local_4c;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  fVar7 = (float)NEON_fminnm((float)(int)param_2,0x41e80000);
  if (fVar7 <= -1.0) {
    fVar7 = -1.0;
  }
  iVar6 = (int)fVar7;
  uVar4 = FUN_00cb41f0(iVar6);
  iVar5 = FUN_00cb421c(iVar6);
  local_4c = 0xff000000;
  thunk_FUN_00e7051c(&local_60,&DAT_03210450);
  if (iVar6 < 0) {
    if (iVar6 == -1) {
      local_4c = 0xffffffff;
      uVar2 = *(uint *)(param_1 + 0x84);
      if ((uVar2 & 0x7f80) != 0x2600) {
        *(uint *)(param_1 + 0x84) = uVar2 & 0xffff8000 | uVar2 & 0x7f | 0x2600;
        FUN_0091ada4(param_1);
      }
    }
  }
  else {
    if (iVar5 == 0) {
      local_4c = 0xff3f6fb5;
    }
    else if (iVar5 == 1) {
      local_4c = 0xffc5c5c5;
    }
    else if (iVar5 == 2) {
      local_4c = 0xff4fc1f1;
    }
    if ((~*(uint *)(param_1 + 0x84) & 0x7f80) != 0) {
      *(uint *)(param_1 + 0x84) = *(uint *)(param_1 + 0x84) | 0x7f80;
      FUN_0091ada4(param_1);
    }
    FUN_00e70e18(&local_60,&DAT_01bb6d43,uVar4);
  }
  FUN_00f0e670(param_1 + 0xb8,&local_4c,2);
  lVar1 = param_1 + 0x298;
  FUN_00f0d75c(lVar1,&local_60);
  FUN_00f0d7fc(lVar1,&local_4c);
  *(uint *)(param_1 + 0x31c) =
       (*(uint *)(param_1 + 0x31c) & 0xfffffff8 |
       *(uint *)(param_1 + 0x31c) & 3 | (param_2 >> 0x1f) << 2) ^ 4;
  FUN_00f07940(0,0xc0000000,lVar1,8,param_1 + 0xb8,8);
  if (local_58 != (void *)0x0) {
    operator_delete__(local_58);
    local_60 = 0;
    local_58 = (void *)0x0;
  }
  if (*(long *)(lVar3 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00b1d944(long param_1,uint param_2)

{
  long lVar1;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  *(uint *)(param_1 + 0x22c) =
       *(uint *)(param_1 + 0x22c) & 0xfffffff8 | *(uint *)(param_1 + 0x22c) & 3 | (param_2 & 1) << 2
  ;
  FUN_00f0da30(param_1 + 0x298);
  local_30 = 0x4000000040000000;
  FUN_00b1d9c0(param_1,&local_30,0xff000000);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b1d9c0(long param_1,float *param_2,undefined4 param_3)

{
  long lVar1;
  undefined8 local_48;
  undefined4 local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_3c = param_3;
  if ((*(float *)(param_1 + 0x1e8) != *param_2) || (*(float *)(param_1 + 0x1ec) != param_2[1])) {
    *(undefined8 *)(param_1 + 0x1e8) = *(undefined8 *)param_2;
    FUN_0091ada4(param_1 + 0x1a8);
  }
  FUN_00f0e670(param_1 + 0x1a8,&local_3c,2);
  FUN_00f0da80(param_1 + 0x298,&local_3c);
  local_48 = *(undefined8 *)param_2;
  FUN_00f0da8c(param_1 + 0x298,&local_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b1da7c(long *param_1)

{
  FUN_00f0d378(param_1 + 0x53);
                    /* WARNING: Could not recover jumptable at 0x00b1daa8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xe8))(param_1);
  return;
}




void FUN_00b1daac(float param_1,long *param_2)

{
  if ((*(float *)(param_2 + 0x5c) != param_1) || (*(float *)((long)param_2 + 0x2e4) != param_1)) {
    *(float *)(param_2 + 0x5c) = param_1;
    *(float *)((long)param_2 + 0x2e4) = param_1;
    FUN_0091ada4(param_2 + 0x53);
  }
                    /* WARNING: Could not recover jumptable at 0x00b1daf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0xe8))(param_2);
  return;
}




void FUN_00b1dafc(float param_1,long param_2)

{
  if ((*(float *)(param_2 + 0x100) != param_1) || (*(float *)(param_2 + 0x104) != param_1)) {
    *(float *)(param_2 + 0x100) = param_1;
    *(float *)(param_2 + 0x104) = param_1;
    FUN_0091ada4(param_2 + 0xb8);
  }
  if ((*(float *)(param_2 + 0x1f0) == param_1) && (*(float *)(param_2 + 500) == param_1)) {
    return;
  }
  *(float *)(param_2 + 0x1f0) = param_1;
  *(float *)(param_2 + 500) = param_1;
  FUN_0091ada4(param_2 + 0x1a8);
  return;
}




void FUN_00b1db80(long param_1)

{
  long lVar1;
  
  FUN_00f13db4();
  lVar1 = param_1 + 0xb8;
  FUN_00f08824(lVar1,param_1,1,1);
  FUN_00f08824(param_1 + 0x1a8,param_1,1,1);
  FUN_00f07940(0,0,lVar1,8,param_1,8);
  FUN_00f07940(*(undefined4 *)(param_1 + 0x3c8),*(undefined4 *)(param_1 + 0x3cc),param_1 + 0x1a8,8,
               lVar1,8);
  FUN_00f07940(0,0xc0000000,param_1 + 0x298,8,lVar1,8);
  return;
}




undefined8 FUN_00b1dc28(undefined1 param_1 [16],float param_2,long param_3)

{
  float fVar1;
  
  fVar1 = (float)FUN_00f0eaf4(param_3 + 0xb8);
  return CONCAT44((int)(param_2 * 0.6),(int)(fVar1 * 0.6));
}




void FUN_00b1dc5c(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  undefined **ppuVar8;
  uint uVar9;
  ulong uVar10;
  undefined8 uVar11;
  
  FUN_00f017e8();
  plVar1 = param_1 + 0x11;
  *param_1 = (long)&PTR_FUN_027dd860;
  FUN_00f017e8(plVar1);
  plVar2 = param_1 + 0x22;
  param_1[0x11] = (long)&PTR_FUN_027c1f80;
  FUN_00f017e8(plVar2);
  plVar3 = param_1 + 0x33;
  param_1[0x22] = (long)&PTR_FUN_027c1f80;
  FUN_00f0e4a8(plVar3);
  plVar4 = param_1 + 0x51;
  FUN_00f0d160(plVar4);
  plVar5 = param_1 + 0x77;
  FUN_00b1d5d8(plVar5);
  plVar6 = param_1 + 0xf1;
  FUN_00f0d160(plVar6);
  plVar7 = param_1 + 0x117;
  FUN_00f0d160(plVar7);
  FUN_00f017e8(param_1 + 0x13d);
  param_1[0x13d] = (long)&PTR_FUN_027c1f80;
  FUN_00f0e4a8(param_1 + 0x14e);
  param_1[0x16d] = -0x100000002;
  param_1[0x16c] = -0x100000002;
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  FUN_00f023ec(plVar2,param_1 + 0x13d,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  FUN_00f023ec(plVar1,plVar3,1);
  FUN_00f023ec(plVar1,plVar4,1);
  FUN_00f023ec(plVar1,plVar5,1);
  FUN_00f023ec(plVar5,plVar6,1);
  FUN_00f023ec(plVar1,plVar7,1);
  uVar10 = FUN_0092ea9c();
  if ((*(uint *)((long)param_1 + 0x84) & 0x7f80) != 0) {
    *(uint *)((long)param_1 + 0x84) = *(uint *)((long)param_1 + 0x84) & 0xffff807f;
    FUN_0091ada4(param_1);
  }
  FUN_00f0e548(plVar3,PTR_s_build___MenuPartsCommon_tga_02be3530,"menu_fuzzy_dot");
  FUN_00f0d92c(plVar4,PTR_s_build___Fonts_Brandon_Light_80_f_02be9c20,&DAT_01bee7fa);
  FUN_00f0d378(plVar6,PTR_s_build___Fonts_Brandon_Bold_48_fo_02be9c88);
  uVar11 = FUN_00e6ce7c("MENU_SKILL_TIER_IMAGE_SKILL_TIER_LABEL",0);
  FUN_00f0d75c(plVar6,uVar11);
  FUN_00f07b18(0x40800000,plVar6,3,plVar5,1);
  FUN_00f07b18(0,plVar6,5,plVar5,5);
  ppuVar8 = &PTR_s_build___Fonts_Brandon_Bold_48_fo_02be9c88;
  if ((uVar10 & 1) == 0) {
    ppuVar8 = &PTR_s_build___Fonts_Brandon_Bold_40_fo_02be9c80;
  }
  FUN_00f0d92c(plVar7,*ppuVar8,&DAT_01bee7fa);
  uVar9 = *(uint *)((long)param_1 + 0x93c);
  if ((uVar9 & 0x7f80) != 0x3300) {
    *(uint *)((long)param_1 + 0x93c) = uVar9 & 0xffff8000 | uVar9 & 0x7f | 0x3300;
    FUN_0091ada4(plVar7);
  }
  FUN_00b1ded0(param_1);
  return;
}




void FUN_00b1ded0(long param_1)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = param_1 + 0xa70;
  uVar2 = FUN_00f02540(lVar1);
  if ((uVar2 & 1) != 0) {
    FUN_00f01a4c(lVar1,1);
  }
  FUN_00f023ec(param_1 + 0x9e8,lVar1,1);
  return;
}




void FUN_00b1df14(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027dd860;
  FUN_00b1dfd0();
  param_1[0x14e] = &PTR_FUN_028266f0;
  param_1[0x165] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x168);
  FUN_00f13d08(param_1 + 0x14e);
  FUN_00f01868(param_1 + 0x13d);
  FUN_00f0d3a4(param_1 + 0x117);
  FUN_00f0d3a4(param_1 + 0xf1);
  FUN_00ab3254(param_1 + 0x77);
  FUN_00f0d3a4(param_1 + 0x51);
  param_1[0x33] = &PTR_FUN_028266f0;
  param_1[0x4a] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x4d);
  FUN_00f13d08(param_1 + 0x33);
  FUN_00f01868(param_1 + 0x22);
  FUN_00f01868(param_1 + 0x11);
  FUN_00f01868(param_1);
  return;
}




void FUN_00b1dfd0(long param_1)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = param_1 + 0xa70;
  FUN_00f0e628(lVar1);
  uVar2 = FUN_00f02540(lVar1);
  if ((uVar2 & 1) != 0) {
    FUN_00f01a4c(lVar1,1);
  }
  *(undefined8 *)(param_1 + 0xb68) = 0xfffffffefffffffe;
  *(undefined8 *)(param_1 + 0xb60) = 0xfffffffefffffffe;
  return;
}

