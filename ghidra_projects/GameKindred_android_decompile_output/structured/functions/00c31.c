// functions/00c31 — 14 functions
#include "libGameKindred.h"




void FUN_00c3100c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(uint *)(param_1 + 0x1c4f4) = *(uint *)(param_1 + 0x1c4f4) | 4;
  FUN_00f0d75c(param_1 + 0x1c618);
  FUN_00f0d75c(param_1 + 0x1c748,param_3);
  *(uint *)(param_1 + 0x1c06c) = *(uint *)(param_1 + 0x1c06c) & 0xfffffffb;
  *(uint *)(param_1 + 0x1bf3c) = *(uint *)(param_1 + 0x1bf3c) & 0xfffffffb;
  return;
}




void FUN_00c3108c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027f9ef8;
  if ((*(byte *)(param_1 + 0x580) & 1) != 0) {
    operator_delete((void *)param_1[0x582]);
  }
  if ((*(byte *)(param_1 + 0x57d) & 1) != 0) {
    operator_delete((void *)param_1[0x57f]);
  }
  param_1[0x55e] = &PTR_FUN_028266f0;
  param_1[0x575] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x578);
  FUN_00f13d08(param_1 + 0x55e);
  FUN_00f0d3a4(param_1 + 0x538);
  param_1[0x51a] = &PTR_FUN_028266f0;
  param_1[0x531] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x534);
  FUN_00f13d08(param_1 + 0x51a);
  param_1[0x4ef] = &PTR_FUN_02827fc8;
  FUN_00f01868(param_1 + 0x506);
  FUN_00f13d08(param_1 + 0x4ef);
  param_1[0x4c4] = &PTR_FUN_02827fc8;
  FUN_00f01868(param_1 + 0x4db);
  FUN_00f13d08(param_1 + 0x4c4);
  FUN_00ab3254(param_1 + 0x44a);
  param_1[0x42c] = &PTR_FUN_028266f0;
  param_1[0x443] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x446);
  FUN_00f13d08(param_1 + 0x42c);
  param_1[0x40e] = &PTR_FUN_028266f0;
  param_1[0x425] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x428);
  FUN_00f13d08(param_1 + 0x40e);
  FUN_00f13d08(param_1 + 0x3f5);
  param_1[0x3d7] = &PTR_FUN_028266f0;
  param_1[0x3ee] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x3f1);
  FUN_00f13d08(param_1 + 0x3d7);
  FUN_00f0d3a4(param_1 + 0x3b1);
  param_1[0x391] = &PTR_FUN_028266f0;
  param_1[0x3a8] = &PTR_FUN_02826850;
  param_1[0x231] = &PTR_FUN_027d8d40;
  FUN_00f0a79c(param_1 + 0x3ab);
  FUN_00f13d08(param_1 + 0x391);
  param_1[0x373] = &PTR_FUN_028266f0;
  param_1[0x38a] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x38d);
  FUN_00f13d08(param_1 + 0x373);
  FUN_00ac6220(param_1 + 0x308);
  FUN_00ac6220(param_1 + 0x29d);
  FUN_00f0d3a4(param_1 + 0x277);
  param_1[0x259] = &PTR_FUN_028266f0;
  param_1[0x270] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x273);
  FUN_00f13d08(param_1 + 0x259);
  FUN_00f01868(param_1 + 0x248);
  FUN_00f13d08(param_1 + 0x231);
  param_1[0x210] = &PTR_FUN_028266f0;
  param_1[0x227] = &PTR_FUN_02826850;
  param_1[0xb0] = &PTR_FUN_027d6650;
  FUN_00f0a79c(param_1 + 0x22a);
  FUN_00f13d08(param_1 + 0x210);
  param_1[0x1f2] = &PTR_FUN_028266f0;
  param_1[0x209] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x20c);
  FUN_00f13d08(param_1 + 0x1f2);
  FUN_00ac6220(param_1 + 0x187);
  FUN_00ac6220(param_1 + 0x11c);
  FUN_00f0d3a4(param_1 + 0xf6);
  param_1[0xd8] = &PTR_FUN_028266f0;
  param_1[0xef] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xf2);
  FUN_00f13d08(param_1 + 0xd8);
  FUN_00f01868(param_1 + 199);
  FUN_00f13d08(param_1 + 0xb0);
  FUN_00f13d08(param_1 + 0x97);
  FUN_00f0d3a4(param_1 + 0x71);
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




void FUN_00c313f0(void *param_1)

{
  FUN_00c3108c();
  operator_delete(param_1);
  return;
}




void FUN_00c31414(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  
  *param_1 = &PTR_FUN_027fa040;
  if ((void *)param_1[0x391a] != (void *)0x0) {
    operator_delete__((void *)param_1[0x391a]);
    param_1[0x391a] = 0;
    param_1[0x3919] = 0;
  }
  if ((void *)param_1[0x3918] != (void *)0x0) {
    operator_delete__((void *)param_1[0x3918]);
    param_1[0x3918] = 0;
    param_1[0x3917] = 0;
  }
  if ((void *)param_1[0x3916] != (void *)0x0) {
    operator_delete__((void *)param_1[0x3916]);
    param_1[0x3916] = 0;
    param_1[0x3915] = 0;
  }
  if ((*(byte *)(param_1 + 0x3912) & 1) != 0) {
    operator_delete((void *)param_1[0x3914]);
  }
  if ((*(byte *)(param_1 + 0x390f) & 1) != 0) {
    operator_delete((void *)param_1[0x3911]);
  }
  FUN_00f0d3a4(param_1 + 0x38e9);
  FUN_00f0d3a4(param_1 + 0x38c3);
  param_1[0x38a5] = &PTR_FUN_028266f0;
  param_1[0x38bc] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x38bf);
  FUN_00f13d08(param_1 + 0x38a5);
  FUN_00f13d08(param_1 + 0x388e);
  FUN_00afc0a4(param_1 + 0x3852);
  param_1[0x3834] = &PTR_FUN_028266f0;
  param_1[0x384b] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x384e);
  FUN_00f13d08(param_1 + 0x3834);
  FUN_00f01868(param_1 + 0x3823);
  FUN_00f0d3a4(param_1 + 0x37fd);
  FUN_00f0d3a4(param_1 + 0x37d7);
  param_1[0x37b9] = &PTR_FUN_028266f0;
  param_1[0x37d0] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x37d3);
  FUN_00f13d08(param_1 + 0x37b9);
  param_1[0x379b] = &PTR_FUN_028266f0;
  param_1[0x37b2] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x37b5);
  FUN_00f13d08(param_1 + 0x379b);
  param_1[0x377d] = &PTR_FUN_028266f0;
  param_1[0x3794] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x3797);
  FUN_00f13d08(param_1 + 0x377d);
  param_1[0x375f] = &PTR_FUN_028266f0;
  param_1[0x3776] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x3779);
  FUN_00f13d08(param_1 + 0x375f);
  FUN_00f13d08(param_1 + 0x3744);
  lVar2 = -0x1b940;
  puVar1 = param_1 + 0x31c0;
  do {
    FUN_00c3108c(puVar1);
    lVar2 = lVar2 + 0x2c20;
    puVar1 = puVar1 + -0x584;
  } while (lVar2 != 0);
  thunk_FUN_00f13d08(param_1);
  return;
}




void FUN_00c316f8(void *param_1)

{
  FUN_00c31414();
  operator_delete(param_1);
  return;
}




void FUN_00c3171c(long *param_1)

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
  undefined4 uVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  undefined8 uVar14;
  uint uVar15;
  undefined1 auStack_9c [4];
  code *local_98;
  long *plStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  long local_68;
  
  lVar11 = tpidr_el0;
  local_68 = *(long *)(lVar11 + 0x28);
  FUN_00ed45a4();
  plVar13 = param_1 + 0x1c;
  param_1[0x1b] = 0;
  *param_1 = (long)&PTR_FUN_027fa188;
  FUN_00f0c714(plVar13);
  plVar1 = param_1 + 0x37;
  FUN_00f0e4a8(plVar1);
  plVar2 = param_1 + 0x55;
  FUN_00f13ca4();
  plVar3 = param_1 + 0x6c;
  FUN_00aa8724();
  plVar4 = param_1 + 0xd7;
  FUN_00aacf60(plVar4);
  plVar5 = param_1 + 0x12a;
  FUN_00aa8724(plVar5);
  plVar6 = param_1 + 0x195;
  FUN_00aaac98(plVar6);
  plVar7 = param_1 + 0x2b3;
  FUN_00aac93c(plVar7);
  plVar8 = param_1 + 0x5ae;
  FUN_00f0e4a8(plVar8);
  plVar9 = param_1 + 0x5cf;
  param_1[0x5ce] = 0;
  param_1[0x5cd] = 0;
  param_1[0x5cc] = (long)(param_1 + 0x5cd);
  FUN_00f13ca4(plVar9);
  FUN_00f13ca4(param_1 + 0x5e6);
  FUN_00aae848(param_1 + 0x5fd);
  FUN_00aadf5c(param_1 + 0x1152);
  (**(code **)(*param_1 + 0x78))(param_1,plVar13,1);
  FUN_00f023ec(plVar13,plVar1,1);
  FUN_00f023ec(plVar1,plVar4,1);
  FUN_00f023ec(plVar4,plVar6,1);
  FUN_00f023ec(plVar4,plVar7,1);
  FUN_00f023ec(plVar4,plVar8,1);
  FUN_00f023ec(plVar1,plVar3,1);
  FUN_00aa8f18(plVar3,plVar9,1);
  FUN_00f023ec(plVar1,plVar5,1);
  FUN_00f023ec(plVar13,param_1 + 0x1152,1);
  FUN_00f023ec(plVar13,plVar2,1);
  plVar12 = (long *)FUN_00f136e0();
  (**(code **)(*plVar12 + 0x68))(plVar12,plVar1,1,2);
  FUN_00f13fd8(plVar13,plVar12);
  FUN_00f14070(plVar1,&DAT_02bf25a8);
  plVar13 = (long *)FUN_00f13624();
  (**(code **)(*plVar13 + 0x68))(plVar13,plVar3,1,2);
  (**(code **)(*plVar13 + 0x68))(plVar13,plVar4,5,2);
  (**(code **)(*plVar13 + 0x68))(plVar13,plVar5,1,2);
  FUN_00f13fd8(plVar1,plVar13);
  FUN_00f13f68(plVar3,800);
  FUN_00f14070(plVar3,&DAT_02bf25a0);
  FUN_00aa8a48(plVar3,0);
  FUN_00f13f68(plVar5,800);
  FUN_00f14070(plVar5,&DAT_02bf25a0);
  FUN_00aa8a48(plVar5,1);
  FUN_00f14070(plVar4,&DAT_02bf25b0);
  plVar13 = (long *)FUN_00f136e0();
  (**(code **)(*plVar13 + 0x68))(plVar13,plVar6,0,2);
  (**(code **)(*plVar13 + 0x68))(plVar13,plVar7,1,2);
  (**(code **)(*plVar13 + 0x58))(plVar13,plVar8);
  FUN_00f13fd8(plVar4,plVar13);
  FUN_00f13f08(0x448d2000,0x437e0000,plVar6);
  FUN_00f13f68(plVar6,0xfe00000469);
  local_98 = (code *)CONCAT62(local_98._2_6_,0x15);
  FUN_00f14070(plVar6,&local_98);
  FUN_00f14070(plVar7,&DAT_02bf25b0);
  FUN_00ed5b20(plVar7,PTR_s_build___MenuPartsCommon_tga_02be3530,1);
  local_98 = (code *)CONCAT71(local_98._1_7_,1);
  FUN_00ed5ab0(plVar7,&local_98);
  FUN_00f14084(plVar7,1);
  plVar13 = (long *)FUN_00f136e0();
  (**(code **)(*plVar13 + 0x78))(plVar13,0,1);
  (**(code **)(*plVar13 + 0x68))(plVar13,plVar9,1,9);
  (**(code **)(*plVar13 + 0x78))(plVar13,0,1);
  FUN_00f13fd8(plVar3,plVar13);
  uVar14 = FUN_00f136e0();
  FUN_00f13ba0(uVar14,0,0xf,0x14,0xf);
  FUN_00f13fd8(plVar9,uVar14);
  FUN_00f0e548(plVar1,PTR_s_build___MenuDraftPartsCommon_tga_02be3618,"draft_bg");
  FUN_00f0e548(plVar8,PTR_s_build___SpoilsOfWarBg_png_02be3640,"full_loading_2k");
  FUN_00f14070(plVar8,&DAT_02bf25a8);
  uVar15 = *(uint *)((long)param_1 + 0x2df4);
  if ((uVar15 & 0x7f80) != 0x5900) {
    *(uint *)((long)param_1 + 0x2df4) = uVar15 & 0xffff8000 | uVar15 & 0x7f | 0x5900;
    FUN_0091ada4(plVar8);
    uVar15 = *(uint *)((long)param_1 + 0x2df4);
  }
  uVar10 = DAT_03210c64;
  *(uint *)((long)param_1 + 0x2df4) = uVar15 & 0xfffffffb;
  local_98 = FUN_00c31dac;
  local_80 = 0;
  uStack_78 = 0;
  local_88 = 0;
  plStack_90 = param_1;
  local_70 = uVar10;
  FUN_009693a0(param_1 + 0x119f,&local_98);
  local_70 = DAT_03210c90;
  local_98 = FUN_00c31dec;
  local_80 = 0;
  uStack_78 = 0;
  local_88 = 0;
  plStack_90 = param_1;
  FUN_009693a0(param_1 + 0x119f,&local_98);
  local_98 = FUN_00c31e24;
  local_80 = 0;
  uStack_78 = 0;
  local_88 = 0;
  plStack_90 = param_1;
  local_70 = uVar10;
  FUN_009693a0(param_1 + 0x1378,&local_98);
  local_98 = FUN_00c31e34;
  local_80 = 0;
  uStack_78 = 0;
  local_88 = 0;
  plStack_90 = param_1;
  local_70 = uVar10;
  FUN_009693a0(param_1 + 0x145e,&local_98);
  local_98 = FUN_00c31e44;
  local_80 = 0;
  uStack_78 = 0;
  local_88 = 0;
  plStack_90 = param_1;
  local_70 = uVar10;
  FUN_009693a0(param_1 + 0x1544,&local_98);
  local_98 = FUN_00c31e54;
  local_80 = 0;
  uStack_78 = 0;
  local_88 = 0;
  plStack_90 = param_1;
  local_70 = uVar10;
  FUN_009693a0(param_1 + 0x162a,&local_98);
  local_70 = DAT_0313c6ec;
  local_98 = FUN_00c31e64;
  local_80 = 0;
  uStack_78 = 0;
  local_88 = 0;
  plStack_90 = param_1;
  FUN_009693a0(param_1 + 1,&local_98);
  FUN_00f00298(&local_98,auStack_9c);
  uVar14 = FUN_00f1357c();
  FUN_00f13fd8(plVar2,uVar14);
  FUN_00f14084(plVar2,1);
  *(uint *)((long)param_1 + 0x32c) = *(uint *)((long)param_1 + 0x32c) & 0xfffffffb;
  FUN_00f07a78(0,0,param_1,0);
  (**(code **)(*param_1 + 0xe8))(param_1);
  if (*(long *)(lVar11 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c31dac(long param_1)

{
  FUN_00aa12a8(0x3f800000,"build://Sounds/UI.assetbundle/ui_drafting_lock_in_confirm.mp3",0,0);
                    /* WARNING: Could not recover jumptable at 0x00c31de8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0xd8) + 8))();
  return;
}




void FUN_00c31dec(long param_1)

{
  FUN_00aac240(param_1 + 0x8cf0,0);
                    /* WARNING: Could not recover jumptable at 0x00c31e20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0xd8) + 0x40))();
  return;
}




void FUN_00c31e24(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00c31e30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0xd8) + 0x20))();
  return;
}




void FUN_00c31e34(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00c31e40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0xd8) + 0x28))();
  return;
}




void FUN_00c31e44(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00c31e50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0xd8) + 0x30))();
  return;
}




void FUN_00c31e54(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00c31e60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0xd8) + 0x38))();
  return;
}




void FUN_00c31e64(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 0xd8);
  uVar1 = FUN_00f04924(param_4);
                    /* WARNING: Could not recover jumptable at 0x00c31e94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x10))(plVar2,uVar1);
  return;
}




void FUN_00c31e98(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027fa188;
  FUN_00ab04dc(param_1 + 0x1152);
  FUN_00ab0964(param_1 + 0x5fd);
  FUN_00f13d08(param_1 + 0x5e6);
  FUN_00f13d08(param_1 + 0x5cf);
  FUN_00c24ea4(param_1 + 0x5cc,param_1[0x5cd]);
  param_1[0x5ae] = &PTR_FUN_028266f0;
  param_1[0x5c5] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x5c8);
  FUN_00f13d08(param_1 + 0x5ae);
  FUN_00ab01fc(param_1 + 0x2b3);
  FUN_00aafc3c(param_1 + 0x195);
  param_1[0x12a] = &PTR_FUN_027d27e0;
  FUN_00f13d08(param_1 + 0x17d);
  param_1[0x15f] = &PTR_FUN_028266f0;
  param_1[0x176] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x179);
  FUN_00f13d08(param_1 + 0x15f);
  param_1[0x141] = &PTR_FUN_028266f0;
  param_1[0x158] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x15b);
  FUN_00f13d08(param_1 + 0x141);
  FUN_00f13d08(param_1 + 0x12a);
  param_1[0x10c] = &PTR_FUN_028266f0;
  param_1[0x123] = &PTR_FUN_02826850;
  param_1[0xd7] = &PTR_FUN_027d34f0;
  FUN_00f0a79c(param_1 + 0x126);
  FUN_00f13d08(param_1 + 0x10c);
  param_1[0xee] = &PTR_FUN_028266f0;
  param_1[0x105] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x108);
  FUN_00f13d08(param_1 + 0xee);
  FUN_00f13d08(param_1 + 0xd7);
  param_1[0x6c] = &PTR_FUN_027d27e0;
  FUN_00f13d08(param_1 + 0xbf);
  param_1[0xa1] = &PTR_FUN_028266f0;
  param_1[0xb8] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xbb);
  FUN_00f13d08(param_1 + 0xa1);
  param_1[0x83] = &PTR_FUN_028266f0;
  param_1[0x9a] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x9d);
  FUN_00f13d08(param_1 + 0x83);
  FUN_00f13d08(param_1 + 0x6c);
  FUN_00f13d08(param_1 + 0x55);
  param_1[0x37] = &PTR_FUN_028266f0;
  param_1[0x4e] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x51);
  FUN_00f13d08(param_1 + 0x37);
  FUN_00f13d08(param_1 + 0x1c);
  thunk_FUN_00f13d08(param_1);
  return;
}

