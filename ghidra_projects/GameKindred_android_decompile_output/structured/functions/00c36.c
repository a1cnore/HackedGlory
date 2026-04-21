// functions/00c36 — 16 functions
#include "libGameKindred.h"




void FUN_00c36108(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR_FUN_027fa578;
  param_1[0x14e] = &PTR_FUN_027dd3c8;
  lVar1 = 0;
  do {
    *(undefined ***)((long)param_1 + lVar1 + 0xe98) = &PTR_FUN_028266f0;
    *(undefined ***)((long)param_1 + lVar1 + 0xf50) = &PTR_FUN_02826850;
    FUN_00f0a79c((long)param_1 + lVar1 + 0xf68);
    FUN_00f13d08((long)param_1 + lVar1 + 0xe98);
    lVar1 = lVar1 + -0xf0;
  } while (lVar1 != -0x3c0);
  param_1[0x14e] = &PTR_FUN_02827fc8;
  FUN_00f01868(param_1 + 0x165);
  FUN_00f13d08(param_1 + 0x14e);
  lVar1 = 0;
  param_1[0xab] = &PTR_FUN_027dd3c8;
  do {
    *(undefined ***)((long)param_1 + lVar1 + 0x980) = &PTR_FUN_028266f0;
    *(undefined ***)((long)param_1 + lVar1 + 0xa38) = &PTR_FUN_02826850;
    FUN_00f0a79c((long)param_1 + lVar1 + 0xa50);
    FUN_00f13d08((long)param_1 + lVar1 + 0x980);
    lVar1 = lVar1 + -0xf0;
  } while (lVar1 != -0x3c0);
  param_1[0xab] = &PTR_FUN_02827fc8;
  FUN_00f01868(param_1 + 0xc2);
  FUN_00f13d08(param_1 + 0xab);
  param_1[0x8d] = &PTR_FUN_028266f0;
  param_1[0xa4] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xa7);
  FUN_00f13d08(param_1 + 0x8d);
  FUN_00f0d3a4(param_1 + 0x67);
  param_1[0x49] = &PTR_FUN_028266f0;
  param_1[0x60] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 99);
  FUN_00f13d08(param_1 + 0x49);
  param_1[0x2b] = &PTR_FUN_028266f0;
  param_1[0x42] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x45);
  FUN_00f13d08(param_1 + 0x2b);
  *param_1 = &PTR_FUN_02827fc8;
  FUN_00f01868(param_1 + 0x17);
  FUN_00f13d08(param_1);
  return;
}




void FUN_00c36288(void *param_1)

{
  FUN_00c36108();
  operator_delete(param_1);
  return;
}




void FUN_00c362ac(uint *param_1,uint param_2)

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




void FUN_00c3632c(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  long lVar10;
  undefined8 uVar11;
  long *plVar12;
  long *plVar13;
  undefined8 uVar14;
  long lVar15;
  code *local_a8;
  long *plStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined4 local_80;
  long local_78;
  
  lVar10 = tpidr_el0;
  local_78 = *(long *)(lVar10 + 0x28);
  FUN_00f13ca4();
  plVar1 = param_1 + 0x18;
  param_1[0x17] = 0;
  *param_1 = (long)&PTR_FUN_027fa6c8;
  FUN_00f0d160(plVar1);
  plVar13 = param_1 + 0x3e;
  FUN_00f13ca4(plVar13);
  plVar2 = param_1 + 0x55;
  FUN_00f13ca4(plVar2);
  plVar3 = param_1 + 0x6c;
  FUN_00abbf0c(plVar3);
  plVar4 = param_1 + 0x40b;
  FUN_00abbf0c(plVar4);
  plVar5 = param_1 + 0x7aa;
  FUN_00c93600(plVar5,0);
  plVar6 = param_1 + 0x8f3;
  FUN_00f0d160(plVar6);
  plVar7 = param_1 + 0x919;
  FUN_00b15e58(plVar7,0);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar13,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar3,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar4,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar5,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar6,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar7,1);
  uVar11 = FUN_00f136e0();
  FUN_00f13fd8(param_1,uVar11);
  uVar11 = FUN_00f14058(param_1);
  FUN_00f13ba0(uVar11,200,0x14,200,0x14);
  plVar12 = (long *)FUN_00f14058(param_1);
  (**(code **)(*plVar12 + 0x78))(plVar12,0,0);
  plVar12 = (long *)FUN_00f14058(param_1);
  (**(code **)(*plVar12 + 0x60))(plVar12,plVar1,10);
  plVar12 = (long *)FUN_00f14058(param_1);
  (**(code **)(*plVar12 + 0x78))(plVar12,0,0);
  plVar12 = (long *)FUN_00f14058(param_1);
  (**(code **)(*plVar12 + 0x60))(plVar12,plVar13,10);
  plVar13 = (long *)FUN_00f14058(param_1);
  (**(code **)(*plVar13 + 0x70))(plVar13,0x14);
  plVar13 = (long *)FUN_00f14058(param_1);
  (**(code **)(*plVar13 + 0x60))(plVar13,plVar2,10);
  plVar13 = (long *)FUN_00f14058(param_1);
  (**(code **)(*plVar13 + 0x60))(plVar13,plVar5,0xc);
  plVar13 = (long *)FUN_00f14058(param_1);
  (**(code **)(*plVar13 + 0x70))(plVar13,4);
  plVar13 = (long *)FUN_00f14058(param_1);
  (**(code **)(*plVar13 + 0x60))(plVar13,plVar6,9);
  plVar13 = (long *)FUN_00f14058(param_1);
  (**(code **)(*plVar13 + 0x78))(plVar13,0,0);
  FUN_00f0d378(plVar1,PTR_s_build___Fonts_Brandon_Bold_72_fo_02be9c98);
  uVar11 = FUN_00e6ce7c("MAIN_PROFILE_LOGIN_PROMPT",0);
  FUN_00f0d75c(plVar1,uVar11);
  FUN_00f0d9b0(plVar1,1);
  FUN_00b035dc(plVar3,PTR_s_build___Fonts_Brandon_Regular_60_02be9c58);
  uVar11 = FUN_00e6ce7c("MAIN_PROFILE_REG_USER_DEFAULT",0);
  FUN_00abc73c(plVar3,uVar11);
  FUN_00abceac(0xc1200000,plVar3);
  uVar11 = FUN_00e6ce7c("MAIN_PROFILE_REG_TEXTENTRY_EMAIL_CAPTION",0);
  uVar14 = FUN_00e6ce7c("MAIN_PROFILE_LOGIN_TEXTENTRY_EMAIL_MESSAGE",0);
  FUN_00ce1e34(plVar3,uVar11,uVar14,&DAT_03210450,0,1,0,0,0,1,0,0);
  uVar8 = DAT_03210fac;
  local_a8 = FUN_00c369c4;
  local_90 = 0;
  local_88 = 0;
  local_98 = 0;
  plStack_a0 = param_1;
  local_80 = uVar8;
  FUN_009693a0(param_1 + 0x6d,&local_a8);
  local_a8 = FUN_00c369c4;
  uVar9 = DAT_03210fb0;
  local_90 = 0;
  local_88 = 0;
  local_98 = 0;
  plStack_a0 = param_1;
  local_80 = uVar9;
  FUN_009693a0(param_1 + 0x6d,&local_a8);
  FUN_00b035dc(plVar4,PTR_s_build___Fonts_Brandon_Regular_60_02be9c58);
  uVar11 = FUN_00e6ce7c("MAIN_PROFILE_REG_PASS_DEFAULT",0);
  FUN_00abc73c(plVar4,uVar11);
  FUN_00abceac(0xc1200000,plVar4);
  uVar11 = FUN_00e6ce7c("MAIN_PROFILE_REG_TEXTENTRY_PASS_CAPTION",0);
  uVar14 = FUN_00e6ce7c("MAIN_PROFILE_LOGIN_TEXTENTRY_PASS_MESSAGE",0);
  FUN_00ce1e34(plVar4,uVar11,uVar14,&DAT_03210450,1,0,0,0,0,0,0,0);
  local_a8 = FUN_00c369c4;
  local_98 = 0;
  local_90 = 0;
  local_88 = 1;
  plStack_a0 = param_1;
  local_80 = uVar8;
  FUN_009693a0(param_1 + 0x40c,&local_a8);
  local_a8 = FUN_00c369c4;
  local_98 = 0;
  local_90 = 0;
  local_88 = 1;
  plStack_a0 = param_1;
  local_80 = uVar9;
  FUN_009693a0(param_1 + 0x40c,&local_a8);
  FUN_00c93864(plVar5,PTR_s_build___Fonts_Brandon_Bold_130_f_02be9cb0);
  uVar11 = FUN_00e6ce7c("MAIN_PROFILE_LOGIN",0);
  FUN_00c938d4(plVar5,uVar11);
  FUN_00c928a0(0x42900000,0x41400000,plVar5);
  local_80 = DAT_03210c64;
  local_a8 = thunk_FUN_00c36c4c;
  local_90 = 0;
  local_88 = 0;
  local_98 = 0;
  plStack_a0 = param_1;
  FUN_009693a0(param_1 + 0x7ab,&local_a8);
  FUN_00ecf888(plVar5,0);
  FUN_00f0d378(plVar6,PTR_s_build___Fonts_Brandon_Regular_40_02be9c48);
  uVar11 = FUN_00e6ce7c("MAIN_PROFILE_FORGOT_PASSWORD_LINK",0);
  FUN_00f0d75c(plVar6,uVar11);
  local_a8 = (code *)CONCAT44(local_a8._4_4_,0xfffac832);
  FUN_00f0d7fc(plVar6,&local_a8);
  local_80 = DAT_03210f60;
  *(uint *)((long)param_1 + 0x481c) = *(uint *)((long)param_1 + 0x481c) | 0x10;
  local_a8 = FUN_00c369d4;
  local_98 = 0;
  local_90 = 0;
  local_88 = 1;
  plStack_a0 = param_1;
  FUN_009693a0(param_1 + 0x8f4,&local_a8);
  local_a8 = FUN_00c369d4;
  local_80 = DAT_03210f8c;
  local_98 = 0;
  local_90 = 0;
  local_88 = 1;
  plStack_a0 = param_1;
  FUN_009693a0(param_1 + 0x8f4,&local_a8);
  *(uint *)((long)param_1 + 0x494c) = *(uint *)((long)param_1 + 0x494c) & 0xfffffffb;
  if ((*(float *)(param_1 + 0x922) != 1.5) || (*(float *)((long)param_1 + 0x4914) != 1.5)) {
    lVar15 = NEON_fmov(0x3fc00000,4);
    param_1[0x922] = lVar15;
    FUN_0091ada4(plVar7);
  }
  if (*(long *)(lVar10 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c369c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  FUN_00c36d50(param_1,param_4,param_5);
  return;
}




void thunk_FUN_00c36c4c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  ulong auStack_68 [2];
  void *pvStack_58;
  ulong auStack_50 [2];
  void *pvStack_40;
  long lStack_38;
  
  lVar1 = tpidr_el0;
  lStack_38 = *(long *)(lVar1 + 0x28);
  auStack_50[0] = 0;
  auStack_50[1] = 0;
  pvStack_40 = (void *)0x0;
  auStack_68[0] = 0;
  auStack_68[1] = 0;
  pvStack_58 = (void *)0x0;
  uVar2 = FUN_00f08be8(param_1 + ((ulong)*(byte *)(param_1 + 0x6d0) & 1) * 0x130 + 0x540);
  FUN_00e70a24(uVar2,auStack_50);
  uVar2 = FUN_00f08be8(param_1 + ((ulong)*(byte *)(param_1 + 0x23c8) & 1) * 0x130 + 0x2238);
  FUN_00e70a24(uVar2,auStack_68);
  FUN_00ecf888(param_1 + 0x3d50,0);
  FUN_00c36b6c(param_1,1);
  (**(code **)**(undefined8 **)(param_1 + 0xb8))
            (*(undefined8 **)(param_1 + 0xb8),auStack_50,auStack_68);
  if ((auStack_68[0] & 1) != 0) {
    operator_delete(pvStack_58);
  }
  if ((auStack_50[0] & 1) != 0) {
    operator_delete(pvStack_40);
  }
  if (*(long *)(lVar1 + 0x28) == lStack_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c369d4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00c369e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0xb8) + 8))();
  return;
}




void FUN_00c369e4(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 local_68;
  undefined2 local_60 [4];
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  lVar1 = param_1 + 0x360;
  local_68 = 0;
  FUN_00f09b18(lVar1 + ((ulong)*(byte *)(param_1 + 0x6d0) & 1) * 0x130 + 0x1e0,(long)&local_68 + 4,
               &local_68);
  lVar2 = param_1 + 0x1f0;
  FUN_00f13f68(lVar2,(ulong)(uint)(int)((float)local_68 * 1.4) << 0x20);
  local_60[0] = 0x17;
  FUN_00f14070(lVar2,local_60);
  lVar3 = param_1 + 0x2a8;
  FUN_00f13f68(lVar3,(ulong)(uint)(int)((float)local_68 * 1.4) << 0x20);
  local_60[0] = 0x17;
  FUN_00f14070(lVar3,local_60);
  FUN_00f13db4(param_1);
  uVar5 = FUN_00f13e54(lVar2);
  FUN_00f13e54(lVar2);
  FUN_00abc380(uVar5,lVar1);
  FUN_00f13e54(lVar3);
  FUN_00abc380(uVar5,param_1 + 0x2058);
  FUN_00f07940(0,0,lVar1,7,lVar2,7);
  FUN_00f07940(0,0,param_1 + 0x2058,7,lVar3,7);
  FUN_00f07940(0,0,param_1 + 0x48c8,8,param_1 + 0x3d50,8);
  if (*(long *)(lVar4 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c36b6c(long param_1,uint param_2)

{
  long lVar1;
  uint uVar2;
  undefined8 uVar3;
  
  lVar1 = param_1 + 0x3d50;
  *(uint *)(param_1 + 0x494c) =
       *(uint *)(param_1 + 0x494c) & 0xfffffff8 |
       *(uint *)(param_1 + 0x494c) & 3 | (param_2 & 1) << 2;
  FUN_00ecf888(lVar1,~param_2 & 1);
  if ((~param_2 & 1) == 0) {
    FUN_00b16058();
    FUN_00c938d4(lVar1,&DAT_03210450);
    uVar2 = *(uint *)(param_1 + 0x3dd4);
    if ((uVar2 & 0x7f80) == 0x6600) {
      return;
    }
    uVar2 = uVar2 & 0xffff8000 | uVar2 & 0x7f | 0x6600;
  }
  else {
    FUN_00b16600(param_1 + 0x48c8);
    uVar3 = FUN_00e6ce7c("MAIN_PROFILE_LOGIN",0);
    FUN_00c938d4(lVar1,uVar3);
    if ((~*(uint *)(param_1 + 0x3dd4) & 0x7f80) == 0) {
      return;
    }
    uVar2 = *(uint *)(param_1 + 0x3dd4) | 0x7f80;
  }
  *(uint *)(param_1 + 0x3dd4) = uVar2;
  FUN_0091ada4(lVar1);
  return;
}




void FUN_00c36c4c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  ulong local_68 [2];
  void *local_58;
  ulong local_50 [2];
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_50[0] = 0;
  local_50[1] = 0;
  local_40 = (void *)0x0;
  local_68[0] = 0;
  local_68[1] = 0;
  local_58 = (void *)0x0;
  uVar2 = FUN_00f08be8(param_1 + ((ulong)*(byte *)(param_1 + 0x6d0) & 1) * 0x130 + 0x540);
  FUN_00e70a24(uVar2,local_50);
  uVar2 = FUN_00f08be8(param_1 + ((ulong)*(byte *)(param_1 + 0x23c8) & 1) * 0x130 + 0x2238);
  FUN_00e70a24(uVar2,local_68);
  FUN_00ecf888(param_1 + 0x3d50,0);
  FUN_00c36b6c(param_1,1);
  (**(code **)**(undefined8 **)(param_1 + 0xb8))(*(undefined8 **)(param_1 + 0xb8),local_50,local_68)
  ;
  if ((local_68[0] & 1) != 0) {
    operator_delete(local_58);
  }
  if ((local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c36d40(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00c36d4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0xb8) + 8))();
  return;
}




void FUN_00c36d50(undefined8 param_1,long *param_2,uint param_3)

{
  ulong uVar1;
  
  if ((param_3 & 1) != 0) {
    uVar1 = (**(code **)(*param_2 + 0x10))(param_2,DAT_03210fe4);
    if ((((uVar1 & 1) != 0) || (DAT_03210fe4 == DAT_03210f50)) && (param_2[4] != 0)) {
      FUN_00b037f8(param_2[4],1);
    }
  }
  FUN_00c36dc8(param_1);
  return;
}




uint FUN_00c36dc8(long param_1)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  lVar1 = param_1 + 0x360;
  FUN_00f08be8(lVar1 + ((ulong)*(byte *)(param_1 + 0x6d0) & 1) * 0x130 + 0x1e0);
  uVar2 = FUN_00e70b04();
  if ((uVar2 & 1) != 0) {
    FUN_00f08be8(lVar1 + ((ulong)*(byte *)(param_1 + 0x6d0) & 1) * 0x130 + 0x1e0);
    uVar4 = FUN_00e70b04();
    if ((uVar4 & 1) != 0) {
      FUN_00abc610(lVar1,1);
      uVar5 = FUN_00e6ce7c("GENERIC_FORM_ERROR_EMPTY",0);
      FUN_00abce78(lVar1,uVar5);
    }
  }
  lVar1 = param_1 + 0x2058;
  FUN_00f08be8(lVar1 + ((ulong)*(byte *)(param_1 + 0x23c8) & 1) * 0x130 + 0x1e0);
  uVar3 = FUN_00e70b04();
  if ((uVar3 & 1) != 0) {
    FUN_00f08be8(lVar1 + ((ulong)*(byte *)(param_1 + 0x23c8) & 1) * 0x130 + 0x1e0);
    uVar4 = FUN_00e70b04();
    if ((uVar4 & 1) != 0) {
      FUN_00abc610(lVar1,1);
      uVar5 = FUN_00e6ce7c("GENERIC_FORM_ERROR_EMPTY",0);
      FUN_00abce78(lVar1,uVar5);
    }
  }
  uVar2 = ~(uVar2 | uVar3) & 1;
  FUN_00ecf888(param_1 + 0x3d50,uVar2);
  return uVar2;
}




uint FUN_00c36f00(long param_1)

{
  uint uVar1;
  
  FUN_00f08be8(param_1 + ((ulong)*(byte *)(param_1 + 0x6d0) & 1) * 0x130 + 0x540);
  uVar1 = FUN_00e70b04();
  return ~uVar1 & 1;
}




uint FUN_00c36f34(long param_1)

{
  uint uVar1;
  
  FUN_00f08be8(param_1 + ((ulong)*(byte *)(param_1 + 0x23c8) & 1) * 0x130 + 0x2238);
  uVar1 = FUN_00e70b04();
  return ~uVar1 & 1;
}




void FUN_00c36f70(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  
  *param_1 = &PTR_FUN_027fa6c8;
  param_1[0x919] = &PTR_FUN_027d47d0;
  lVar2 = -0x4b0;
  puVar1 = param_1 + 0x9a8;
  do {
    *puVar1 = &PTR_FUN_028266f0;
    puVar1[0x17] = &PTR_FUN_02826850;
    FUN_00f0a79c(puVar1 + 0x1a);
    FUN_00f13d08(puVar1);
    lVar2 = lVar2 + 0xf0;
    puVar1 = puVar1 + -0x1e;
  } while (lVar2 != 0);
  FUN_00f13d08(param_1 + 0x919);
  FUN_00f0d3a4(param_1 + 0x8f3);
  param_1[0x7aa] = &PTR_FUN_028062b0;
  FUN_00f0d3a4(param_1 + 0x8cb);
  FUN_00c925cc(param_1 + 0x7aa);
  param_1[0x40b] = &PTR_FUN_027d5508;
  if ((void *)param_1[0x7a4] != (void *)0x0) {
    operator_delete__((void *)param_1[0x7a4]);
    param_1[0x7a4] = 0;
    param_1[0x7a3] = 0;
  }
  if ((void *)param_1[0x7a2] != (void *)0x0) {
    operator_delete__((void *)param_1[0x7a2]);
    param_1[0x7a2] = 0;
    param_1[0x7a1] = 0;
  }
  if ((void *)param_1[0x7a0] != (void *)0x0) {
    operator_delete__((void *)param_1[0x7a0]);
    param_1[0x7a0] = 0;
    param_1[0x79f] = 0;
  }
  FUN_00f0d3a4(param_1 + 0x779);
  FUN_00f13d08(param_1 + 0x75e);
  FUN_00f13d08(param_1 + 0x743);
  FUN_009c7fa8(param_1 + 0x48b);
  FUN_00abd150(param_1 + 0x40b);
  param_1[0x6c] = &PTR_FUN_027d5508;
  if ((void *)param_1[0x405] != (void *)0x0) {
    operator_delete__((void *)param_1[0x405]);
    param_1[0x405] = 0;
    param_1[0x404] = 0;
  }
  if ((void *)param_1[0x403] != (void *)0x0) {
    operator_delete__((void *)param_1[0x403]);
    param_1[0x403] = 0;
    param_1[0x402] = 0;
  }
  if ((void *)param_1[0x401] != (void *)0x0) {
    operator_delete__((void *)param_1[0x401]);
    param_1[0x401] = 0;
    param_1[0x400] = 0;
  }
  FUN_00f0d3a4(param_1 + 0x3da);
  FUN_00f13d08(param_1 + 0x3bf);
  FUN_00f13d08(param_1 + 0x3a4);
  FUN_009c7fa8(param_1 + 0xec);
  FUN_00abd150(param_1 + 0x6c);
  FUN_00f13d08(param_1 + 0x55);
  FUN_00f13d08(param_1 + 0x3e);
  FUN_00f0d3a4(param_1 + 0x18);
  FUN_00f13d08(param_1);
  return;
}

