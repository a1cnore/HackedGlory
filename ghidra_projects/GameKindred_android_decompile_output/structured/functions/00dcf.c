// functions/00dcf — 14 functions
#include "libGameKindred.h"




void FUN_00dcf064(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  undefined1 auStack_c8 [16];
  code *local_b8;
  undefined4 local_b0;
  code *local_a8;
  undefined4 local_a0;
  undefined1 auStack_98 [64];
  undefined4 local_58;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_c8);
  FUN_00d4d9e8(auStack_98);
  FUN_00d4daf4(auStack_98,0,1,0,0);
  FUN_00d4dcdc(auStack_98,1);
  FUN_00d4dabc(auStack_98,0x40000);
  local_58 = 0x3f266666;
  lVar2 = FUN_00cfa6cc(auStack_c8);
  *(undefined1 *)(lVar2 + 0x10) = 1;
  uVar3 = FUN_00cfa9e4(auStack_c8);
  FUN_00cf3048(uVar3,"JackhammerKick",0,1,0,"AttackToIdle");
  uVar4 = FUN_00cfab94(auStack_c8);
  lVar2 = FUN_00d09310();
  uVar3 = FUN_00d093ec(*(undefined4 *)(lVar2 + 0x4c));
  FUN_00cf4164(0x3f800000,uVar3,uVar4,"Sound_Koshka_ability2",0,0,0xffffffff,0,1);
  uVar3 = FUN_00cfa294(auStack_c8);
  FUN_00cf7478(0x3e083127);
  FUN_00cf7578(uVar3,0);
  uVar3 = FUN_00cfaf84(auStack_c8);
  FUN_00cf5504(uVar3,auStack_98,0,FUN_00dcf3d8,0,0,0);
  plVar5 = (long *)FUN_00cfa09c(auStack_c8);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x50))();
  (**(code **)(*plVar5 + 0x20))(plVar5,"TwirlDamage");
  plVar5 = (long *)FUN_00cf9afc(auStack_c8);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x50))(plVar5,PTR_s_Buff_Koshka_B_Barrier_02bf0a80);
  local_a8 = FUN_00dcf3ec;
  local_a0 = 5;
  plVar5 = (long *)(**(code **)(*plVar5 + 0x20))(plVar5,&local_a8);
  local_b8 = FUN_00dcf454;
  local_b0 = 3;
  (**(code **)(*plVar5 + 0x18))(plVar5,&local_b8);
  uVar3 = FUN_00cfaa74(auStack_c8);
  FUN_00cf32cc(0,uVar3,"Effect_Koshka_Twirl_Spin",0,0,1,0,0);
  uVar3 = FUN_00cfab4c(auStack_c8);
  FUN_00cf3ac8(0x3eb33333,uVar3,"Effect_Koshka_Twirl_HitEffect",0,"CenterBody");
  FUN_00cf9eec(auStack_c8);
  lVar2 = FUN_00cf9f7c(auStack_c8);
  lVar6 = FUN_00cefb20(lVar2 + 0x10);
  lVar2 = lVar2 + 0xb0;
  *(undefined **)(lVar6 + 8) = PTR_s_Buff_Koshka_Talent_TwirlyLife_02bf1f50;
  FUN_00cf98bc(lVar2);
  uVar3 = FUN_00cf9ab4(lVar2);
  FUN_00cf456c(uVar3,PTR_s_Buff_Koshka_FortifiedHealthTwirl_02bf1f48,FUN_00dcf468,1,0);
  FUN_00cf9eec(lVar2);
  plVar5 = (long *)FUN_00cf9afc(auStack_c8);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x50))
                             (plVar5,PTR_s_Buff_Koshka_TwirlEmpoweredAttack_02bf0a78);
  local_a8 = FUN_00dcf480;
  local_a0 = 3;
  plVar5 = (long *)(**(code **)(*plVar5 + 0x20))(plVar5,&local_a8);
  local_b8 = FUN_00dcf4a8;
  local_b0 = 3;
  (**(code **)(*plVar5 + 0x18))(plVar5,&local_b8);
  uVar3 = FUN_00cfa294(auStack_c8);
  FUN_00cf7478(0x3e883127);
  FUN_00cf7578(uVar3,0);
  lVar2 = FUN_00cfa6cc(auStack_c8);
  *(undefined1 *)(lVar2 + 0x10) = 0;
  FUN_00cfb0a4(auStack_c8);
  uVar3 = FUN_00cfa294(auStack_c8);
  FUN_00cf7478(0x3dcccccd);
  FUN_00cf7578(uVar3,0);
  FUN_00cfb0ec(auStack_c8);
  FUN_00cfb5c4(auStack_c8);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00dcf3d8(undefined8 param_1)

{
  FUN_00d59f54(param_1,1,2,0x19,0);
  return;
}




int FUN_00dcf3ec(undefined8 param_1)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  uint uVar5;
  
  iVar1 = FUN_00d51964();
  iVar4 = 0;
  if (iVar1 != 0) {
    uVar5 = 0;
    do {
      lVar3 = FUN_00d51944(param_1,uVar5);
      if (lVar3 != 0) {
        iVar4 = (*(uint *)(lVar3 + 0x2f4) & 1) + iVar4;
      }
      uVar5 = uVar5 + 1;
      uVar2 = FUN_00d51964(param_1);
    } while (uVar5 < uVar2);
  }
  return iVar4;
}




void FUN_00dcf454(undefined8 param_1)

{
  FUN_00d59f54(param_1,1,6,0x19,0);
  return;
}




void FUN_00dcf468(undefined8 param_1)

{
  FUN_00d5a3d0(param_1,DAT_0320e838,2,9);
  return;
}




int FUN_00dcf480(undefined4 param_1)

{
  float fVar1;
  
  fVar1 = (float)FUN_00d59f54(param_1,1,3,0x19,0);
  return (int)fVar1;
}




void FUN_00dcf4a8(undefined8 param_1)

{
  FUN_00d59f54(param_1,1,4,0x19,0);
  return;
}




undefined4 FUN_00dcf4bc(void)

{
  return 0x3dcccccd;
}




void FUN_00dcf4c8(float param_1,undefined8 param_2,float *param_3)

{
  *param_3 = param_1 * 1.0606;
  return;
}




void FUN_00dcf4e4(undefined8 param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auStack_60 [40];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00ceab48();
  if ((uVar2 & 1) != 0) {
    uVar3 = FUN_00d51778(param_1);
    uVar2 = FUN_00d6a814(uVar3,1);
    if (((uVar2 & 1) != 0) || (uVar2 = FUN_00d6a814(uVar3,4), (uVar2 & 1) != 0)) {
      lVar4 = FUN_00d5048c(param_1);
      FUN_00d00774(auStack_60,*(undefined4 *)(lVar4 + 0x260),2,0,0);
      FUN_00ce20fc(auStack_60);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00dcf588(undefined8 param_1)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined1 auStack_6f8 [16];
  undefined1 auStack_6e8 [96];
  undefined8 auStack_688 [200];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar3 = FUN_00ceab48();
  if ((uVar3 & 1) != 0) {
    uVar4 = FUN_00d5048c(param_1);
    uVar5 = FUN_00d51778(param_1);
    FUN_00d55794(uVar5,auStack_6f8,0);
    FUN_00d4d9e8(auStack_6e8);
    FUN_00d4dabc(auStack_6e8,0x40000);
    FUN_00d4daf4(auStack_6e8,0,1,0,uVar4);
    FUN_00d5a3d0(uVar4,DAT_0320e848,0,9);
    FUN_00d4db48(auStack_6e8,auStack_6f8);
    uVar2 = FUN_00d9e840(auStack_6e8,auStack_688,200,0);
    if (0 < (int)uVar2) {
      uVar3 = (ulong)uVar2;
      puVar6 = auStack_688;
      do {
        FUN_00d518f4(param_1,*puVar6);
        uVar3 = uVar3 - 1;
        puVar6 = puVar6 + 1;
      } while (uVar3 != 0);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00dcf690(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined1 auStack_98 [16];
  undefined4 local_88 [2];
  undefined4 local_80;
  long local_78;
  
  lVar1 = tpidr_el0;
  local_78 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_98);
  uVar2 = FUN_00cfb05c(auStack_98);
  FUN_00cf7b3c(uVar2,1);
  lVar3 = FUN_00cfa6cc(auStack_98);
  *(undefined1 *)(lVar3 + 0x10) = 1;
  uVar2 = FUN_00cfab94(auStack_98);
  lVar3 = FUN_00d09310();
  uVar6 = FUN_00d093ec(*(undefined4 *)(lVar3 + 0x50));
  FUN_00cf4164(0x3f800000,uVar6,uVar2,"Sound_Koshka_ability3_start",0,0,0xffffffff,0,1);
  uVar2 = FUN_00cfaa74(auStack_98);
  FUN_00cf32cc(0,uVar2,"Effect_Koshka_Ult_Start",0,0,1,0,0);
  uVar2 = FUN_00cfaa74(auStack_98);
  FUN_00cf32cc(0,uVar2,"Effect_Koshka_UltTell_1",0,0,1,0,0);
  FUN_00cf99dc(auStack_98);
  uVar2 = FUN_00cfab4c(auStack_98);
  FUN_00cf3bb0(0,uVar2,"Effect_Koshka_UltTell_2",1,"Bone_Head");
  FUN_00cf9eec(auStack_98);
  lVar3 = FUN_00cf9f7c(auStack_98);
  lVar4 = FUN_00cefb20(lVar3 + 0x10);
  *(undefined **)(lVar4 + 8) = PTR_s_Buff_Koshka_Talent_SlashyPlayTim_02bf1f70;
  uVar2 = FUN_00cfa9e4(lVar3 + 200);
  FUN_00cf3048(uVar2,"YummyCatnipFrenzy_Start",0,1,FUN_00dcf4c8,0);
  uVar2 = FUN_00cfa294(lVar3 + 200);
  FUN_00cf7478(0x3f333333);
  FUN_00cf7578(uVar2,0);
  uVar2 = FUN_00cfa294(lVar3 + 0xb0);
  FUN_00cf7478(0x3e4ccccd);
  FUN_00cf7578(uVar2,0);
  uVar2 = FUN_00cfa9e4(auStack_98);
  FUN_00cf3048(uVar2,"YummyCatnipFrenzy_Dash",1,1,0,0);
  uVar2 = FUN_00cf9cac(auStack_98);
  FUN_0097c734(uVar2,FUN_00dcf4bc);
  uVar2 = FUN_00cfa294(auStack_98);
  FUN_00cf7478(0x3dcccccd);
  FUN_00cf7578(uVar2,0);
  FUN_00cfb56c(auStack_98);
  uVar2 = FUN_00da06a0(auStack_98,PTR_s_Buff_Koshka_Talent_SlashyPlayTim_02bf1f70);
  FUN_00d9b0f8();
  uVar6 = FUN_00cf9cf4();
  FUN_00cf2e48(uVar6,FUN_00dcf588);
  FUN_00d9b100(uVar2);
  FUN_00cf99dc();
  FUN_00d9b100(uVar2);
  plVar5 = (long *)FUN_00cfa09c();
  plVar5 = (long *)(**(code **)(*plVar5 + 0x50))();
  local_88[0] = 0x3dcccccd;
  local_80 = 1;
  (**(code **)(*plVar5 + 0x88))(plVar5,local_88);
  FUN_00d9b100(uVar2);
  uVar2 = FUN_00cf9cf4();
  FUN_00cf2e48(uVar2,FUN_00dcf4e4);
  uVar2 = FUN_00cf9ab4(auStack_98);
  FUN_00cf456c(uVar2,PTR_s_Buff_Stunned_02beb430,FUN_00dcffc8,1,0);
  FUN_00cf9eec(auStack_98);
  uVar2 = FUN_00cfa9e4(auStack_98);
  FUN_00cf3048(uVar2,"YummyCatnipFrenzy_Flurry",0,1,0,"AttackToIdle");
  uVar2 = FUN_00cfaa74(auStack_98);
  FUN_00cf32cc(0,uVar2,"Effect_Koshka_Ult_Flurry",0,0,1,0,0);
  uVar2 = FUN_00cfa294(auStack_98);
  FUN_00cf7478(0x3d872b02);
  FUN_00cf7578(uVar2,0);
  FUN_00cf99dc(auStack_98);
  plVar5 = (long *)FUN_00cfb134(auStack_98);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x60))();
  plVar5 = (long *)(**(code **)(*plVar5 + 0x10))(0x3df5c28f);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x18))(0x3e4ccccd);
  (**(code **)(*plVar5 + 0x20))(0x41400000);
  FUN_00cf9eec(auStack_98);
  uVar2 = FUN_00cfab94(auStack_98);
  lVar3 = FUN_00d09310();
  uVar6 = FUN_00d093ec(*(undefined4 *)(lVar3 + 0x50));
  FUN_00cf4164(0x3f800000,uVar6,uVar2,"Sound_Koshka_ability3_swipe_01",0,0,0xffffffff,0,1);
  uVar2 = FUN_00cfa294(auStack_98);
  FUN_00cf7478(0x3e6e978d);
  FUN_00cf7578(uVar2,0);
  FUN_00cf99dc(auStack_98);
  plVar5 = (long *)FUN_00cfb134(auStack_98);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x60))();
  plVar5 = (long *)(**(code **)(*plVar5 + 0x10))(0x3df5c28f);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x18))(0x3e4ccccd);
  (**(code **)(*plVar5 + 0x20))(0x41400000);
  plVar5 = (long *)FUN_00cfa09c(auStack_98);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x50))();
  local_88[0] = 0x3dcccccd;
  local_80 = 1;
  (**(code **)(*plVar5 + 0x88))(plVar5,local_88);
  FUN_00cf9eec(auStack_98);
  uVar2 = FUN_00cfab94(auStack_98);
  lVar3 = FUN_00d09310();
  uVar6 = FUN_00d093ec(*(undefined4 *)(lVar3 + 0x50));
  FUN_00cf4164(0x3f800000,uVar6,uVar2,"Sound_Koshka_ability3_swipe_01",0,0,0xffffffff,0,1);
  uVar2 = FUN_00cfa294(auStack_98);
  FUN_00cf7478(0x3e4ccccd);
  FUN_00cf7578(uVar2,0);
  FUN_00cf99dc(auStack_98);
  plVar5 = (long *)FUN_00cfb134(auStack_98);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x60))();
  plVar5 = (long *)(**(code **)(*plVar5 + 0x10))(0x3df5c28f);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x18))(0x3e4ccccd);
  (**(code **)(*plVar5 + 0x20))(0x41400000);
  plVar5 = (long *)FUN_00cfa09c(auStack_98);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x50))();
  local_88[0] = 0x3dcccccd;
  local_80 = 1;
  (**(code **)(*plVar5 + 0x88))(plVar5,local_88);
  FUN_00cf9eec(auStack_98);
  uVar2 = FUN_00cfab94(auStack_98);
  lVar3 = FUN_00d09310();
  uVar6 = FUN_00d093ec(*(undefined4 *)(lVar3 + 0x50));
  FUN_00cf4164(0x3f800000,uVar6,uVar2,"Sound_Koshka_ability3_swipe_02",0,0,0xffffffff,0,1);
  uVar2 = FUN_00cfa294(auStack_98);
  FUN_00cf7478(0x3e4ccccd);
  FUN_00cf7578(uVar2,0);
  FUN_00cf99dc(auStack_98);
  plVar5 = (long *)FUN_00cfb134(auStack_98);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x60))();
  plVar5 = (long *)(**(code **)(*plVar5 + 0x10))(0x3df5c28f);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x18))(0x3e4ccccd);
  (**(code **)(*plVar5 + 0x20))(0x41400000);
  plVar5 = (long *)FUN_00cfa09c(auStack_98);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x50))();
  local_88[0] = 0x3dcccccd;
  local_80 = 1;
  (**(code **)(*plVar5 + 0x88))(plVar5,local_88);
  FUN_00cf9eec(auStack_98);
  uVar2 = FUN_00cfab94(auStack_98);
  lVar3 = FUN_00d09310();
  uVar6 = FUN_00d093ec(*(undefined4 *)(lVar3 + 0x50));
  FUN_00cf4164(0x3f800000,uVar6,uVar2,"Sound_Koshka_ability3_swipe_03",0,0,0xffffffff,0,1);
  uVar2 = FUN_00cfa294(auStack_98);
  FUN_00cf7478(0x3e4ccccd);
  FUN_00cf7578(uVar2,0);
  FUN_00cf99dc(auStack_98);
  plVar5 = (long *)FUN_00cfb134(auStack_98);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x60))();
  plVar5 = (long *)(**(code **)(*plVar5 + 0x10))(0x3df5c28f);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x18))(0x3e4ccccd);
  (**(code **)(*plVar5 + 0x20))(0x41400000);
  plVar5 = (long *)FUN_00cfa09c(auStack_98);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x50))();
  local_88[0] = 0x3dcccccd;
  local_80 = 1;
  (**(code **)(*plVar5 + 0x88))(plVar5,local_88);
  FUN_00cf9eec(auStack_98);
  uVar2 = FUN_00cfab94(auStack_98);
  lVar3 = FUN_00d09310();
  uVar6 = FUN_00d093ec(*(undefined4 *)(lVar3 + 0x50));
  FUN_00cf4164(0x3f800000,uVar6,uVar2,"Sound_Koshka_ability3_swipe_04",0,0,0xffffffff,0,1);
  uVar2 = FUN_00cfa294(auStack_98);
  FUN_00cf7478(0x3ea8f5c3);
  FUN_00cf7578(uVar2,0);
  FUN_00cf99dc(auStack_98);
  plVar5 = (long *)FUN_00cfb134(auStack_98);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x60))();
  plVar5 = (long *)(**(code **)(*plVar5 + 0x10))(0x3f333333);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x18))(0x3f4ccccd);
  (**(code **)(*plVar5 + 0x20))(0x41500000);
  plVar5 = (long *)FUN_00cfa09c(auStack_98);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x50))();
  local_88[0] = 0x3f000000;
  local_80 = 1;
  (**(code **)(*plVar5 + 0x88))(plVar5,local_88);
  FUN_00cf9eec(auStack_98);
  uVar2 = FUN_00cfab94(auStack_98);
  lVar3 = FUN_00d09310();
  uVar6 = FUN_00d093ec(*(undefined4 *)(lVar3 + 0x50));
  FUN_00cf4164(0x3f800000,uVar6,uVar2,"Sound_Koshka_ability3_end",0,0,0xffffffff,0,1);
  lVar3 = FUN_00cf9f7c(auStack_98);
  lVar4 = FUN_00cefb20(lVar3 + 0x10);
  *(undefined **)(lVar4 + 8) = PTR_s_Buff_Koshka_Talent_SlashyPlayTim_02bf1f70;
  uVar2 = FUN_00cfa294(lVar3 + 200);
  FUN_00cf7478(0x3f666666);
  FUN_00cf7578(uVar2,0);
  uVar2 = FUN_00cfa294(lVar3 + 0xb0);
  FUN_00cf7478(0x3e99999a);
  FUN_00cf7578(uVar2,0);
  lVar3 = FUN_00cfa6cc(auStack_98);
  *(undefined1 *)(lVar3 + 0x10) = 0;
  FUN_00cfb0a4(auStack_98);
  FUN_00cfb5c4(auStack_98);
  if (*(long *)(lVar1 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00dcffc8(undefined8 param_1)

{
  FUN_00d59f54(param_1,2,3,0x19,0);
  return;
}




void FUN_00dcffdc(void)

{
  long lVar1;
  
  lVar1 = FUN_00d5048c();
  lVar1 = *(long *)(lVar1 + 0x18);
  while ((lVar1 != 0 && (*(int *)(*(long *)(lVar1 + 8) + 0xa4) != DAT_02e3ef78))) {
    lVar1 = *(long *)(lVar1 + 0x20);
  }
  FUN_00d5378c(lVar1,6,0);
  return;
}

