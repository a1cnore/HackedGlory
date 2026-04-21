// functions/00a4e — 21 functions
#include "libGameKindred.h"




void FUN_00a4e150(void *param_1)

{
  FUN_00a4df80();
  operator_delete(param_1);
  return;
}




void FUN_00a4e174(long param_1)

{
  FUN_00a4df80(param_1 + -0x88);
  return;
}




void FUN_00a4e17c(long param_1)

{
  FUN_00a4df80((void *)(param_1 + -0x88));
  operator_delete((void *)(param_1 + -0x88));
  return;
}




void FUN_00a4e1a4(uint *param_1,undefined8 *param_2,undefined8 *param_3)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  
  uVar1 = *param_1;
  uVar2 = (uint)((ulong)((long)param_3 - (long)param_2) >> 3);
  if (uVar1 == uVar2) {
    if (*(void **)(param_1 + 2) != (void *)0x0) {
      operator_delete__(*(void **)(param_1 + 2));
      param_1[0] = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
    }
  }
  else {
    lVar3 = *(long *)(param_1 + 2);
    for (; (undefined8 *)(lVar3 + (ulong)uVar1 * 8) != param_3; param_3 = param_3 + 1) {
      *param_2 = *param_3;
      param_2 = param_2 + 1;
    }
    *param_1 = uVar1 - uVar2;
  }
  return;
}




void FUN_00a4e210(uint *param_1,uint param_2)

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




void FUN_00a4e290(long *param_1)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  code *local_78;
  long *plStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  FUN_00b89cd8();
  param_1[0x19] = 0;
  *param_1 = (long)&PTR_FUN_027cad38;
  plVar1 = param_1 + 0x1b;
  *(undefined4 *)(param_1 + 0x1a) = DAT_03214ce8;
  FUN_00f017e8(plVar1);
  plVar2 = param_1 + 0x2c;
  param_1[0x1b] = (long)&PTR_FUN_027c1f80;
  FUN_00ab6c24(plVar2,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  FUN_00f023ec(plVar1,plVar2,1);
  uVar5 = FUN_00e6ce7c("GENERIC_BUTTON_CONTINUE",0);
  FUN_00ab703c(0x40a00000,0x43200000,0x440e8000,plVar2,0,uVar5,&DAT_01bee7fa,&DAT_03218ef8,0);
  FUN_00f0d378(param_1 + 0x110,PTR_s_build___Fonts_Brandon_Bold_36_fo_02be9c78);
  local_78 = (code *)CONCAT44(local_78._4_4_,0xff404040);
  FUN_00ab7588(0x3f800000,plVar2,&local_78);
  FUN_00ab7538(0x3f000000,plVar2,&DAT_01bee7fa);
  local_50 = DAT_03210c64;
  local_78 = thunk_FUN_00a4e610;
  local_60 = 0;
  uStack_58 = 0;
  local_68 = 0;
  plStack_70 = param_1;
  FUN_009693a0(param_1 + 0x2d,&local_78);
  FUN_00ab7628(0x428a0000,plVar2);
  uVar3 = *(uint *)((long)param_1 + 0x15c);
  *(uint *)((long)param_1 + 0x1e4) = *(uint *)((long)param_1 + 0x1e4) | 0x10;
  if ((uVar3 & 0x7f80) != 0x5280) {
    *(uint *)((long)param_1 + 0x15c) = uVar3 & 0xffff8000 | uVar3 & 0x7f | 0x5280;
    FUN_0091ada4(plVar1);
  }
  *(uint *)((long)param_1 + 0x84) = *(uint *)((long)param_1 + 0x84) | 8;
  if (*(long *)(lVar4 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void thunk_FUN_00a4e610(void)

{
  long lVar1;
  ulong uVar2;
  undefined1 auStack_48 [32];
  long lStack_28;
  
  lVar1 = tpidr_el0;
  lStack_28 = *(long *)(lVar1 + 0x28);
  FUN_00ceace8();
  uVar2 = FUN_00ceae88();
  if ((uVar2 & 1) != 0) {
    FUN_009076bc();
  }
  FUN_009858f4(auStack_48,1);
  FUN_00ce20fc(auStack_48);
  if (*(long *)(lVar1 + 0x28) == lStack_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a4e470(long param_1,long param_2)

{
  ulong uVar1;
  char *pcVar2;
  undefined8 uVar3;
  
  *(long *)(param_1 + 200) = param_2 + 0x28;
  *(undefined4 *)(param_1 + 0xd0) = *(undefined4 *)(param_2 + 0x30);
  FUN_00ceace8();
  uVar1 = FUN_00ceae88();
  if ((uVar1 & 1) == 0) {
    FUN_00ceace8();
    uVar1 = FUN_00ceae90();
    if ((uVar1 & 1) == 0) {
      return;
    }
    pcVar2 = "HUD_EXIT_PRACTICE_MODE";
  }
  else {
    pcVar2 = "HUD_EXIT_TUTORIAL_MODE";
  }
  uVar3 = FUN_00e6ce7c(pcVar2,0);
  FUN_00ab7498(param_1 + 0x160,uVar3);
  return;
}




void FUN_00a4e4ec(long param_1)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  float fVar4;
  undefined1 auStack_48 [4];
  float local_44;
  undefined8 local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  FUN_00f00298(&local_44,auStack_48);
  uVar3 = FUN_0092ea9c();
  fVar4 = 1.8;
  if ((uVar3 & 1) == 0) {
    fVar4 = 1.0;
  }
  if ((*(float *)(param_1 + 0x48) != fVar4) || (*(float *)(param_1 + 0x4c) != fVar4)) {
    *(float *)(param_1 + 0x48) = fVar4;
    *(float *)(param_1 + 0x4c) = fVar4;
    FUN_0091ada4(param_1);
  }
  FUN_00ceace8();
  FUN_00ceae90();
  if ((*(float *)(param_1 + 0x40) != local_44 * 0.5) || (*(float *)(param_1 + 0x44) != fVar4 * 48.0)
     ) {
    *(float *)(param_1 + 0x40) = local_44 * 0.5;
    *(float *)(param_1 + 0x44) = fVar4 * 48.0;
    FUN_0091ada4(param_1);
  }
  plVar1 = (long *)(param_1 + 0x160);
  if ((*(float *)(param_1 + 0x1a0) != 0.0) || (*(float *)(param_1 + 0x1a4) != 0.0)) {
    *(undefined8 *)(param_1 + 0x1a0) = 0;
    FUN_0091ada4(plVar1);
  }
  local_40 = 0x3f0000003f000000;
  (**(code **)(*plVar1 + 0x28))(plVar1,&local_40);
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a4e610(void)

{
  long lVar1;
  ulong uVar2;
  undefined1 auStack_48 [32];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00ceace8();
  uVar2 = FUN_00ceae88();
  if ((uVar2 & 1) != 0) {
    FUN_009076bc();
  }
  FUN_009858f4(auStack_48,1);
  FUN_00ce20fc(auStack_48);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a4e674(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027cad38;
  FUN_009c7fa8(param_1 + 0x2c);
  FUN_00f01868(param_1 + 0x1b);
  FUN_00f13d08(param_1);
  return;
}




void FUN_00a4e6b8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027cad38;
  FUN_009c7fa8(param_1 + 0x2c);
  FUN_00f01868(param_1 + 0x1b);
  FUN_00f13d08(param_1);
  operator_delete(param_1);
  return;
}




void FUN_00a4e704(long *param_1)

{
  bool bVar1;
  long lVar2;
  
  FUN_00b89cd8();
  *param_1 = (long)&PTR_FUN_027caea0;
  FUN_00f13ca4(param_1 + 0x19);
  FUN_00f11234(param_1 + 0x30);
  FUN_00f0e4a8(param_1 + 100);
  FUN_00f0e4a8(param_1 + 0x82);
  FUN_00f0e4a8(param_1 + 0xa0);
  FUN_00f0e4a8(param_1 + 0xbe);
  FUN_00f0d160(param_1 + 0xdc);
  FUN_00f1306c(param_1 + 0x102);
  lVar2 = 0x968;
  do {
    FUN_00b199f0((long)param_1 + lVar2);
    bVar1 = lVar2 != 0x1078;
    lVar2 = lVar2 + 0x388;
  } while (bVar1);
  param_1[0x281] = 0;
  param_1[0x280] = 0;
  FUN_00f0d160(param_1 + 0x282);
  FUN_00f0d160(param_1 + 0x2a8);
  FUN_00ab6c24(param_1 + 0x2ce,1);
  *(undefined4 *)(param_1 + 0x586) = 0;
  *(undefined1 *)((long)param_1 + 0x2c34) = 0;
  FUN_00a4e7e8(param_1);
                    /* WARNING: Could not recover jumptable at 0x00a4e7e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x150))(param_1);
  return;
}




void FUN_00a4e7e8(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  uint uVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  code *local_a8;
  long *plStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined4 local_80;
  long local_78;
  
  lVar8 = tpidr_el0;
  local_78 = *(long *)(lVar8 + 0x28);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x19,1);
  plVar1 = param_1 + 0x30;
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  plVar2 = param_1 + 100;
  FUN_00f023ec(plVar1,plVar2,1);
  plVar3 = param_1 + 0x82;
  FUN_00f023ec(plVar1,plVar3,1);
  plVar4 = param_1 + 0xa0;
  FUN_00f023ec(plVar1,plVar4,1);
  plVar5 = param_1 + 0xdc;
  FUN_00f023ec(plVar1,plVar5,1);
  plVar6 = param_1 + 0x2ce;
  FUN_00f023ec(plVar1,plVar6,1);
  FUN_00f023ec(plVar1,param_1 + 0x102,1);
  lVar10 = 0;
  do {
    FUN_00f133a4(param_1 + 0x102,(long)param_1 + lVar10 + 0x968,1);
    lVar10 = lVar10 + 0x388;
  } while (lVar10 != 0xa98);
  FUN_00f112f0(plVar1,0);
  *(uint *)((long)param_1 + 0x14c) = *(uint *)((long)param_1 + 0x14c) | 0x10;
  FUN_00f0e548(plVar2,PTR_s_build___Tutorial_Components_tga_02be3478,"tutorial_bg");
  if ((~*(uint *)((long)param_1 + 0x3a4) & 0x7f80) != 0) {
    *(uint *)((long)param_1 + 0x3a4) = *(uint *)((long)param_1 + 0x3a4) | 0x7f80;
    FUN_0091ada4(plVar2);
  }
  FUN_00f0e670(plVar2,&DAT_01bee7f6,2);
  FUN_00f0e548(plVar4,PTR_s_build___Tutorial_Components_tga_02be3478,"tutorial_bg_edge");
  if ((~*(uint *)((long)param_1 + 0x584) & 0x7f80) != 0) {
    *(uint *)((long)param_1 + 0x584) = *(uint *)((long)param_1 + 0x584) | 0x7f80;
    FUN_0091ada4(plVar4);
  }
  FUN_00f0e670(plVar4,&DAT_01bee7f6,2);
  *(byte *)(param_1 + 0xbb) = *(byte *)(param_1 + 0xbb) | 1;
  FUN_00f0e548(plVar3,PTR_s_build___Tutorial_Components_tga_02be3478,"tutorial_bg_edge");
  if ((~*(uint *)((long)param_1 + 0x494) & 0x7f80) != 0) {
    *(uint *)((long)param_1 + 0x494) = *(uint *)((long)param_1 + 0x494) | 0x7f80;
    FUN_0091ada4(plVar3);
  }
  FUN_00f0e670(plVar3,&DAT_01bee7f6,2);
  FUN_00f0e548(param_1 + 0xbe,PTR_s_build___Tutorial_Components_tga_02be3478,
               "reward_goal_separator_line");
  uVar7 = *(uint *)((long)param_1 + 0x674);
  if ((uVar7 & 0x7f80) != 0x1980) {
    *(uint *)((long)param_1 + 0x674) = uVar7 & 0xffff8000 | uVar7 & 0x7f | 0x1980;
    FUN_0091ada4(param_1 + 0xbe);
  }
  FUN_00f0d92c(plVar5,PTR_s_build___Fonts_NorthwoodHigh_Regu_02be9ce8,&DAT_01bee7fa);
  uVar9 = FUN_00e6ce7c("MAIN_SPOILS_OF_WAR_TITLE",0);
  FUN_00f0d75c(plVar5,uVar9);
  FUN_00f0db64(0x447d0000,0,0x3f800000,plVar5);
  FUN_00f0d92c(param_1 + 0x282,PTR_s_build___Fonts_Brandon_Bold_60_fo_02be9c90,&DAT_01bee7fa);
  FUN_00f0d75c(param_1 + 0x282,&DAT_03210450);
  FUN_00f0d92c(param_1 + 0x2a8,PTR_s_build___Fonts_Brandon_Bold_60_fo_02be9c90,&DAT_01bee7fa);
  FUN_00f0d75c(param_1 + 0x2a8,&DAT_03210450);
  uVar9 = FUN_00e6ce7c("GENERIC_BUTTON_CONTINUE",0);
  FUN_00ab703c(0x420c0000,0x43af0000,0x44548000,plVar6,0,uVar9,&DAT_01bee7fa,&DAT_03218ef8,0);
  FUN_00ab7628(0x430a0000,plVar6);
  FUN_00f0d92c(param_1 + 0x3b2,PTR_s_build___Fonts_Brandon_Bold_48_fo_02be9c88,&DAT_01bee7fa);
  local_a8 = (code *)CONCAT44(local_a8._4_4_,0xff404040);
  FUN_00ab7588(0x3f800000,plVar6,&local_a8);
  FUN_00ab7538(0x3f000000,plVar6,&DAT_01bee7fa);
  local_80 = DAT_03210c64;
  local_a8 = FUN_00a4fa30;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 1;
  plStack_a0 = param_1;
  FUN_009693a0(param_1 + 0x2cf,&local_a8);
  if (*(long *)(lVar8 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a4ebf0(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR_FUN_027caea0;
  FUN_009c7fa8(param_1 + 0x2ce);
  FUN_00f0d3a4(param_1 + 0x2a8);
  FUN_00f0d3a4(param_1 + 0x282);
  if ((void *)param_1[0x281] != (void *)0x0) {
    operator_delete__((void *)param_1[0x281]);
    param_1[0x281] = 0;
    param_1[0x280] = 0;
  }
  lVar1 = 0;
  do {
    *(undefined ***)((long)param_1 + lVar1 + 0x1078) = &PTR_FUN_027cb008;
    *(undefined ***)((long)param_1 + lVar1 + 0x1310) = &PTR_FUN_028266f0;
    *(undefined ***)((long)param_1 + lVar1 + 0x13c8) = &PTR_FUN_02826850;
    FUN_00f0a79c((long)param_1 + lVar1 + 0x13e0);
    FUN_00f13d08((long)param_1 + lVar1 + 0x1310);
    *(undefined ***)((long)param_1 + lVar1 + 0x1220) = &PTR_FUN_028266f0;
    *(undefined ***)((long)param_1 + lVar1 + 0x12d8) = &PTR_FUN_02826850;
    FUN_00f0a79c((long)param_1 + lVar1 + 0x12f0);
    FUN_00f13d08((long)param_1 + lVar1 + 0x1220);
    *(undefined ***)((long)param_1 + lVar1 + 0x1130) = &PTR_FUN_028266f0;
    *(undefined ***)((long)param_1 + lVar1 + 0x11e8) = &PTR_FUN_02826850;
    FUN_00f0a79c((long)param_1 + lVar1 + 0x1200);
    FUN_00f13d08((long)param_1 + lVar1 + 0x1130);
    FUN_00f13d08((long)param_1 + lVar1 + 0x1078);
    lVar1 = lVar1 + -0x388;
  } while (lVar1 != -0xa98);
  param_1[0x102] = &PTR_FUN_02827fc8;
  FUN_00f01868(param_1 + 0x119);
  FUN_00f13d08(param_1 + 0x102);
  FUN_00f0d3a4(param_1 + 0xdc);
  param_1[0xbe] = &PTR_FUN_028266f0;
  param_1[0xd5] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xd8);
  FUN_00f13d08(param_1 + 0xbe);
  param_1[0xa0] = &PTR_FUN_028266f0;
  param_1[0xb7] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xba);
  FUN_00f13d08(param_1 + 0xa0);
  param_1[0x82] = &PTR_FUN_028266f0;
  param_1[0x99] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x9c);
  FUN_00f13d08(param_1 + 0x82);
  param_1[100] = &PTR_FUN_028266f0;
  param_1[0x7b] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x7e);
  FUN_00f13d08(param_1 + 100);
  FUN_00f13d08(param_1 + 0x30);
  FUN_00f13d08(param_1 + 0x19);
  FUN_00f13d08(param_1);
  return;
}




void FUN_00a4edb4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027cb008;
  param_1[0x53] = &PTR_FUN_028266f0;
  param_1[0x6a] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x6d);
  FUN_00f13d08(param_1 + 0x53);
  param_1[0x35] = &PTR_FUN_028266f0;
  param_1[0x4c] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x4f);
  FUN_00f13d08(param_1 + 0x35);
  param_1[0x17] = &PTR_FUN_028266f0;
  param_1[0x2e] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x31);
  FUN_00f13d08(param_1 + 0x17);
  FUN_00f13d08(param_1);
  return;
}




void FUN_00a4ee50(void *param_1)

{
  FUN_00a4ebf0();
  operator_delete(param_1);
  return;
}




void FUN_00a4ee74(float param_1,long param_2)

{
  float fVar1;
  
  fVar1 = *(float *)(param_2 + 0x2c30);
  if (0.0 < fVar1) {
    fVar1 = fVar1 - param_1;
    *(float *)(param_2 + 0x2c30) = fVar1;
  }
  if ((*(char *)(param_2 + 0x2c34) != '\0') && (fVar1 <= 0.0)) {
    FUN_009bbfb0();
    FUN_009bd6fc();
    return;
  }
  return;
}




void FUN_00a4eeb4(void)

{
  return;
}




void FUN_00a4eeb8(long param_1)

{
  *(undefined1 *)(param_1 + 0x2c34) = 1;
  *(undefined4 *)(param_1 + 0x2c30) = 0x3ecccccd;
  return;
}




void FUN_00a4eed4(long param_1,int param_2,undefined8 param_3,uint *param_4)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  long *plVar6;
  ushort uVar7;
  ulong uVar8;
  ushort *puVar9;
  ushort *puVar10;
  ushort *puVar11;
  long lVar12;
  long lVar13;
  float fVar14;
  float fVar15;
  undefined8 local_130;
  void *local_128;
  undefined8 local_120;
  void *local_118;
  undefined1 auStack_110 [4];
  undefined1 auStack_10c [4];
  undefined8 local_108;
  void *local_f8;
  undefined8 local_f0;
  long local_b0;
  
  lVar5 = tpidr_el0;
  local_b0 = *(long *)(lVar5 + 0x28);
  FUN_00a4f75c();
  FUN_00f0d75c(param_1 + 0x6e0,param_3);
  FUN_00f0db64(0x447d0000,0,0x3f800000,param_1 + 0x6e0);
  fVar14 = *(float *)(param_1 + 0x9b0);
  lVar13 = 0;
  lVar12 = 0;
  fVar15 = fVar14 * 8.0;
  do {
    lVar2 = param_1 + lVar13;
    lVar1 = lVar2 + 0x968;
    FUN_00b19bec(lVar1,lVar12 < param_2);
    uVar3 = *(uint *)(lVar2 + 0x9ec);
    uVar4 = uVar3 >> 7 & 0xff;
    if (lVar12 < param_2) {
      if (uVar4 != 0) {
        *(uint *)(lVar2 + 0x9ec) = uVar3 & 0xffff807f;
        FUN_0091ada4(lVar1);
      }
      lVar2 = param_1 + lVar13;
      if ((*(float *)(lVar2 + 0x9b0) != fVar15) || (*(float *)(lVar2 + 0x9b4) != fVar15)) {
        *(float *)(lVar2 + 0x9b0) = fVar15;
        *(float *)(lVar2 + 0x9b4) = fVar15;
        FUN_0091ada4(lVar1);
      }
      FUN_00f01980(lVar1);
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
        FUN_00efcad4(puVar9);
        *(undefined ***)puVar9 = &PTR_FUN_027c1a60;
        *(int *)(lVar2 + 0x20020) = *(int *)(lVar2 + 0x20020) + 1;
      }
      FUN_00efcac4((float)(int)lVar12 * 0.75 + 0.3,puVar9);
      FUN_00f022a0(lVar1,puVar9);
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
        FUN_00efdd74(puVar9);
        *(int *)(lVar2 + 0x20020) = *(int *)(lVar2 + 0x20020) + 1;
      }
      FUN_00efcac4(0x3f000000,puVar9);
      FUN_00efddc4(fVar14,puVar9);
      FUN_00efcb24(puVar9,FUN_009a71a4);
      lVar2 = DAT_03210d00;
      uVar7 = *(ushort *)(DAT_03210d00 + 0x20010);
      if ((ulong)uVar7 == 0xffff) {
        puVar10 = (ushort *)0x0;
      }
      else {
        puVar10 = (ushort *)(DAT_03210d00 + (ulong)uVar7 * 0x40 + 0x10);
        if (uVar7 == *(ushort *)(DAT_03210d00 + 0x20012)) {
          uVar7 = 0xffff;
        }
        else {
          uVar7 = *puVar10;
        }
        *(ushort *)(DAT_03210d00 + 0x20010) = uVar7;
        *(int *)(lVar2 + 0x20014) = *(int *)(lVar2 + 0x20014) + 1;
        FUN_00efe530(puVar10);
        *(int *)(lVar2 + 0x20020) = *(int *)(lVar2 + 0x20020) + 1;
      }
      FUN_00efcac4(0x3f000000,puVar10);
      local_f0 = CONCAT44(fVar14,fVar14);
      FUN_00efe58c(puVar10,&local_f0);
      FUN_00efcb24(puVar10,FUN_009a71a4);
      lVar2 = DAT_03210d00;
      uVar7 = *(ushort *)(DAT_03210d00 + 0x20010);
      if ((ulong)uVar7 == 0xffff) {
        puVar11 = (ushort *)0x0;
      }
      else {
        puVar11 = (ushort *)(DAT_03210d00 + (ulong)uVar7 * 0x40 + 0x10);
        if (uVar7 == *(ushort *)(DAT_03210d00 + 0x20012)) {
          uVar7 = 0xffff;
        }
        else {
          uVar7 = *puVar11;
        }
        *(ushort *)(DAT_03210d00 + 0x20010) = uVar7;
        *(int *)(lVar2 + 0x20014) = *(int *)(lVar2 + 0x20014) + 1;
        FUN_00efcd98(puVar11);
        *(int *)(lVar2 + 0x20020) = *(int *)(lVar2 + 0x20020) + 1;
      }
      FUN_00efcea4(puVar11,puVar9,puVar10,0);
      FUN_00f022a0(lVar1,puVar11);
      lVar2 = DAT_03210d00;
      uVar7 = *(ushort *)(DAT_03210d00 + 0x20010);
      if ((ulong)uVar7 == 0xffff) {
        puVar9 = (ushort *)0x0;
      }
      else {
        puVar9 = (ushort *)(DAT_03210d00 + 0x10 + (ulong)uVar7 * 0x40);
        if (uVar7 == *(ushort *)(DAT_03210d00 + 0x20012)) {
          uVar7 = 0xffff;
        }
        else {
          uVar7 = *puVar9;
        }
        *(ushort *)(DAT_03210d00 + 0x20010) = uVar7;
        *(int *)(lVar2 + 0x20014) = *(int *)(lVar2 + 0x20014) + 1;
        FUN_00efc8e8(puVar9);
        puVar9[8] = 0;
        puVar9[9] = 0;
        puVar9[10] = 0;
        puVar9[0xb] = 0;
        puVar9[0xc] = 0;
        puVar9[0xd] = 0;
        puVar9[0xe] = 0;
        puVar9[0xf] = 0;
        puVar9[0x14] = 0;
        puVar9[0x10] = 0;
        puVar9[0x11] = 0;
        puVar9[0x12] = 0;
        puVar9[0x13] = 0;
        *(undefined ***)puVar9 = &PTR_FUN_027d0db0;
        *(int *)(lVar2 + 0x20020) = *(int *)(lVar2 + 0x20020) + 1;
      }
      FUN_00e6a8a8(&local_f0,"build://Sounds/UI.assetbundle/star_slam_%d.mp3",(int)lVar12 + 1);
      FUN_008fa54c(&local_108,&local_f0);
      FUN_00a99c48(puVar9,&local_108,1,0);
      if (((ulong)local_108 & 1) != 0) {
        operator_delete(local_f8);
      }
      FUN_00f022a0(lVar1,puVar9);
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
        FUN_00efe530(puVar9);
        *(int *)(lVar2 + 0x20020) = *(int *)(lVar2 + 0x20020) + 1;
      }
      FUN_00efcac4(0x3d4ccccd,puVar9);
      local_108 = (long *)CONCAT44(fVar14 * 0.8,fVar14 * 0.8);
      FUN_00efe58c(puVar9,&local_108);
      FUN_00f022a0(lVar1,puVar9);
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
        FUN_00efe530(puVar9);
        *(int *)(lVar2 + 0x20020) = *(int *)(lVar2 + 0x20020) + 1;
      }
      FUN_00efcac4(0x3d4ccccd,puVar9);
      local_108 = (long *)CONCAT44(fVar14,fVar14);
      FUN_00efe58c(puVar9,&local_108);
      FUN_00f022a0(lVar1,puVar9);
    }
    else {
      if (uVar4 != 0xff) {
        *(uint *)(lVar2 + 0x9ec) = uVar3 | 0x7f80;
        FUN_0091ada4(lVar1);
      }
      lVar2 = param_1 + lVar13;
      if ((*(float *)(lVar2 + 0x9b0) != fVar14) || (*(float *)(lVar2 + 0x9b4) != fVar14)) {
        *(float *)(lVar2 + 0x9b0) = fVar14;
        *(float *)(lVar2 + 0x9b4) = fVar14;
        FUN_0091ada4(lVar1);
      }
    }
    lVar13 = lVar13 + 0x388;
    lVar12 = lVar12 + 1;
  } while (lVar13 != 0xa98);
  FUN_00f00298(auStack_10c,auStack_110);
  if (*param_4 == 0) {
    fVar14 = 780.0;
  }
  else {
    fVar14 = 780.0;
    uVar8 = 0;
    do {
      plVar6 = operator_new(0x2e8);
      FUN_00a4f7c0();
      local_108 = plVar6;
      FUN_00a4f960(param_1 + 0x1400,&local_108);
      plVar6 = local_108;
      thunk_FUN_00e7051c(&local_120,*(undefined8 *)(*(long *)(param_4 + 2) + uVar8 * 8));
      thunk_FUN_00e7051c(&local_130,*(long *)(*(long *)(param_4 + 2) + uVar8 * 8) + 0x10);
      FUN_00f0d75c(plVar6 + 0x11,&local_120);
      FUN_00f0d75c(plVar6 + 0x37,&local_130);
      if (local_128 != (void *)0x0) {
        operator_delete__(local_128);
        local_130 = 0;
        local_128 = (void *)0x0;
      }
      if (local_118 != (void *)0x0) {
        operator_delete__(local_118);
        local_120 = 0;
        local_118 = (void *)0x0;
      }
      plVar6 = local_108;
      if ((*(float *)(local_108 + 8) != 0.0) || (*(float *)((long)local_108 + 0x44) != fVar14)) {
        *(undefined4 *)(local_108 + 8) = 0;
        *(float *)((long)local_108 + 0x44) = fVar14;
        FUN_0091ada4(local_108);
      }
      local_f0 = 0x3f0000003f000000;
      (**(code **)(*plVar6 + 0x28))(plVar6,&local_f0);
      FUN_00f0db64(0x44040000,0,0x3f800000,local_108 + 0x11);
      if (*(char *)(*(long *)(*(long *)(param_4 + 2) + uVar8 * 8) + 0x20) == '\0') {
        local_f0 = CONCAT44(local_f0._4_4_,0xff0101d0);
      }
      else {
        local_f0 = CONCAT44(local_f0._4_4_,0xffffffff);
      }
      FUN_00f0d7fc(local_108 + 0x37,&local_f0);
      FUN_00f023ec(param_1 + 0x180,local_108,1);
      uVar8 = uVar8 + 1;
      fVar14 = fVar14 + 72.0;
    } while (uVar8 < *param_4);
  }
  plVar6 = (long *)(param_1 + 0x5f0);
  if ((*(float *)(param_1 + 0x630) != 0.0) || (*(float *)(param_1 + 0x634) != fVar14)) {
    *(undefined4 *)(param_1 + 0x630) = 0;
    *(float *)(param_1 + 0x634) = fVar14;
    FUN_0091ada4(plVar6);
  }
  local_f0 = 0x3f0000003f000000;
  (**(code **)(*plVar6 + 0x28))(plVar6,&local_f0);
  if (*(long *)(lVar5 + 0x28) == local_b0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

