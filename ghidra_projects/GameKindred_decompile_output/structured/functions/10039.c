// functions/10039 — 116 functions
#include "GameKindred.h"




undefined8 FUN_1003900bc(void)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  code *local_40;
  undefined4 local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_30 = 0;
  uStack_28 = 0;
  lVar1 = FUN_10000d8b8();
  FUN_1003a985c(&local_30,lVar1);
  *(undefined1 *)(lVar1 + 0x10) = 1;
  uVar2 = FUN_10000cf70();
  FUN_1003a985c(&local_30,uVar2);
  uVar2 = FUN_10000bc94();
  FUN_1003a985c(&local_30,uVar2);
  plVar3 = (long *)FUN_10000bed8();
  FUN_1003a985c(&local_30,plVar3);
  (**(code **)(*plVar3 + 0x70))(plVar3,PTR_s_Buff_Hero057_B_Attachment_Target_10185b478);
  plVar3 = (long *)FUN_10000bed8();
  FUN_1003a985c(&local_30,plVar3);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x70))(plVar3,PTR_s_Buff_Hero057_Perk_Barrier_10185b480);
  local_40 = FUN_1003cda20;
  local_38 = 3;
  (**(code **)(*plVar3 + 0x18))(plVar3,&local_40);
  uVar2 = FUN_10000c784();
  FUN_1003a985c(&local_30,uVar2);
  lVar1 = FUN_10000ceb8();
  FUN_1003a985c(&local_30,lVar1);
  *(undefined4 *)(lVar1 + 0x2c) = 0x3e4ccccd;
  *(undefined8 *)(lVar1 + 0x10) = 0;
  plVar3 = (long *)FUN_10000bdf0();
  FUN_1003a985c(&local_30,plVar3);
  (**(code **)(*plVar3 + 0x50))(plVar3,PTR_s_Buff_Hero057_B_Attached_10185b488);
  lVar1 = FUN_10000ceb8();
  FUN_1003a985c(&local_30,lVar1);
  *(undefined4 *)(lVar1 + 0x2c) = 0x3dcccccd;
  *(undefined8 *)(lVar1 + 0x10) = 0;
  lVar1 = FUN_10000d8b8();
  FUN_1003a985c(&local_30,lVar1);
  *(undefined1 *)(lVar1 + 0x10) = 0;
  uVar2 = FUN_10000f034();
  FUN_1003a985c(&local_30,uVar2);
  return local_30;
}




undefined8 FUN_100390248(void)

{
  byte bVar1;
  bool bVar2;
  long lVar3;
  int *piVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined4 local_60 [2];
  undefined4 local_58;
  code *local_50;
  undefined4 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  local_40 = 0;
  uStack_38 = 0;
  lVar3 = FUN_10000d8b8();
  FUN_1003a985c(&local_40,lVar3);
  *(undefined1 *)(lVar3 + 0x10) = 1;
  lVar3 = FUN_10000ec0c();
  FUN_1003a985c(&local_40,lVar3);
  *(code **)(lVar3 + 0x10) = FUN_1003cdaa4;
  piVar4 = (int *)(lVar3 + 0x18);
  if ((*piVar4 == 0) || (piVar4 = (int *)(lVar3 + 0x1c), *piVar4 == 0)) {
    FUN_1003a4e5c(piVar4,PTR_s_Buff_Hero057_B_Attachment_Target_10185b478);
  }
  lVar3 = FUN_10000c540();
  FUN_1003a985c(&local_40,lVar3);
  *(undefined **)(lVar3 + 0x10) = PTR_s_Buff_Hero057_B_Attachment_Target_10185b478;
  uVar5 = FUN_10000c784();
  FUN_1003a985c(&local_40,uVar5);
  uVar5 = FUN_10000bb2c();
  FUN_1003a985c(&local_40,uVar5);
  lVar3 = FUN_10000c540();
  FUN_1003a985c(&local_40,lVar3);
  *(undefined **)(lVar3 + 0x10) = PTR_s_Buff_Hero057_B_Attached_10185b488;
  uVar5 = FUN_10000c784();
  FUN_1003a985c(&local_40,uVar5);
  plVar6 = (long *)FUN_10000cd5c();
  FUN_1003a985c(&local_40,plVar6);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x90))(plVar6);
  local_50._0_4_ = 0x3e4ccccd;
  local_48 = 1;
  plVar6 = (long *)(**(code **)(*plVar6 + 0xa8))(plVar6,&local_50);
  (**(code **)(*plVar6 + 0xb0))(plVar6,1);
  lVar3 = FUN_10000ceb8();
  FUN_1003a985c(&local_40,lVar3);
  *(undefined4 *)(lVar3 + 0x2c) = 0x3e4ccccd;
  *(undefined8 *)(lVar3 + 0x10) = 0;
  uVar5 = FUN_10000f9c0();
  FUN_1003a985c(&local_40,uVar5);
  lVar3 = FUN_1003e10f0();
  bVar1 = *(byte *)(lVar3 + 0xe5);
  plVar6 = (long *)thunk_FUN_10000e358();
  FUN_1003a985c(&local_40,plVar6);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x58))(plVar6);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x48))(plVar6,"Effect_Hero057_B_StunArea");
  plVar6 = (long *)(**(code **)(*plVar6 + 0xc0))(0x3f800000,0,0);
  local_50 = (code *)CONCAT44(local_50._4_4_,0x3e4ccccd);
  local_48 = 1;
  plVar6 = (long *)(**(code **)(*plVar6 + 0x60))(plVar6,&local_50);
  local_60[0] = 0x40800000;
  local_58 = 1;
  plVar6 = (long *)(**(code **)(*plVar6 + 0xd0))(plVar6,local_60);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x78))(plVar6,1);
  (**(code **)(*plVar6 + 0xb0))(plVar6,1);
  lVar3 = FUN_10000ed74();
  FUN_1003a985c(&local_40,lVar3);
  *(undefined8 *)(lVar3 + 0x18) = 0;
  *(undefined1 *)(lVar3 + 0x20) = 1;
  *(undefined8 *)(lVar3 + 0x24) = 0;
  *(undefined8 *)(lVar3 + 0x34) = 0;
  *(undefined8 *)(lVar3 + 0x2c) = 0;
  *(undefined4 *)(lVar3 + 0x3c) = 0;
  *(undefined8 *)(lVar3 + 0x48) = 0xbf800000c0000000;
  *(undefined8 *)(lVar3 + 0x40) = 0xbf800000bf800000;
  *(undefined4 *)(lVar3 + 0x50) = 0x3f800000;
  *(undefined1 *)(lVar3 + 0x54) = 0xff;
  *(undefined8 *)(lVar3 + 0x60) = 0xffffffff00000000;
  *(undefined8 *)(lVar3 + 0x58) = 0xffffffff00040000;
  *(byte *)(lVar3 + 0x6a) = bVar1 | 0x14;
  *(undefined2 *)(lVar3 + 0x68) = 0x4120;
  bVar2 = DAT_101d23a38 != '\0';
  *(undefined4 *)(lVar3 + 0xa4) = 0x40800000;
  *(byte *)(lVar3 + 0xa8) = *(byte *)(lVar3 + 0xa8) & 0xf0 | bVar2;
  lVar3 = FUN_10000cae4();
  FUN_1003a985c(&local_40,lVar3);
  *(code **)(lVar3 + 0x10) = FUN_1003cda2c;
  plVar6 = (long *)FUN_10000bed8();
  FUN_1003a985c(&local_40,plVar6);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x70))(plVar6,PTR_s_Buff_Stunned_10185a208);
  local_50 = FUN_1003cdaf4;
  local_48 = 3;
  (**(code **)(*plVar6 + 0x18))(plVar6,&local_50);
  lVar3 = FUN_10000d8b8();
  FUN_1003a985c(&local_40,lVar3);
  *(undefined1 *)(lVar3 + 0x10) = 0;
  uVar5 = FUN_10000f034();
  FUN_1003a985c(&local_40,uVar5);
  return local_40;
}




undefined8 FUN_100390598(void)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  int *piVar4;
  code *local_40;
  undefined4 local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_30 = 0;
  uStack_28 = 0;
  lVar1 = FUN_10000ceb8();
  FUN_1003a985c(&local_30,lVar1);
  *(code **)(lVar1 + 0x20) = FUN_1003cdb08;
  *(undefined8 *)(lVar1 + 0x10) = 0;
  plVar2 = (long *)FUN_10000bdf0();
  FUN_1003a985c(&local_30,plVar2);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x50))(plVar2,PTR_s_Buff_Hero057_C_Cloud_10185b490);
  local_40 = FUN_1003cdb1c;
  local_38 = 3;
  (**(code **)(*plVar2 + 0x18))(plVar2,&local_40);
  uVar3 = FUN_10000bb2c();
  FUN_1003a985c(&local_30,uVar3);
  lVar1 = FUN_10000ec0c();
  FUN_1003a985c(&local_30,lVar1);
  *(code **)(lVar1 + 0x10) = FUN_1003cdaa4;
  piVar4 = (int *)(lVar1 + 0x18);
  if ((*piVar4 == 0) || (piVar4 = (int *)(lVar1 + 0x1c), *piVar4 == 0)) {
    FUN_1003a4e5c(piVar4,PTR_s_Buff_Hero057_B_Attachment_Target_10185b478);
  }
  plVar2 = (long *)FUN_10000bed8();
  FUN_1003a985c(&local_30,plVar2);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x70))(plVar2,PTR_s_Buff_Hero057_C_Steroid_10185b498);
  local_40 = FUN_1003cdb30;
  local_38 = 3;
  (**(code **)(*plVar2 + 0x18))(plVar2,&local_40);
  uVar3 = FUN_10000c784();
  FUN_1003a985c(&local_30,uVar3);
  return local_30;
}




void FUN_1003906e8(void)

{
  FUN_1003cdb44(&DAT_101e47f38,0);
  return;
}




void FUN_1003906f8(void)

{
  FUN_1003cdb44(&DAT_101e47f38,2);
  return;
}




void FUN_100390708(void)

{
  FUN_1003cdb44(&DAT_101e47fa0,0);
  return;
}




void FUN_100390718(void)

{
  FUN_1003cdb44(&DAT_101e47fa0,2);
  return;
}




void FUN_100390728(void)

{
  FUN_1003cdb44(&DAT_101e48008,0);
  return;
}




void FUN_100390738(void)

{
  FUN_1003cdb44(&DAT_101e48008,2);
  return;
}




undefined8 FUN_100390748(void)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_30 = 0;
  uStack_28 = 0;
  lVar1 = FUN_10000d8b8();
  FUN_1003a985c(&local_30,lVar1);
  *(undefined1 *)(lVar1 + 0x10) = 1;
  lVar1 = FUN_10000ef8c();
  FUN_1003a985c(&local_30,lVar1);
  *(byte *)(lVar1 + 0x10) = *(byte *)(lVar1 + 0x10) & 0xe7 | 4;
  plVar2 = (long *)thunk_FUN_10000e0ac();
  FUN_1003a985c(&local_30,plVar2);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x50))(plVar2,"Ability01_Throw");
  (**(code **)(*plVar2 + 0x18))(plVar2,"AttackToIdleCombat");
  plVar2 = (long *)thunk_FUN_10000e5dc();
  FUN_1003a985c(&local_30,plVar2);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x58))(plVar2,"Sound_Yates_A");
  uVar3 = FUN_1010a1520();
  lVar1 = FUN_1010a0e0c(uVar3,0,"*KindredSoundBalance*",0);
  FUN_1003cdee0(*(undefined4 *)(lVar1 + 0x508));
  (**(code **)(*plVar2 + 0x28))(plVar2);
  lVar1 = FUN_10000ceb8();
  FUN_1003a985c(&local_30,lVar1);
  *(undefined4 *)(lVar1 + 0x2c) = 0x3f19999a;
  *(undefined8 *)(lVar1 + 0x10) = 0;
  lVar1 = FUN_10000f250();
  FUN_1003a985c(&local_30,lVar1);
  *(undefined4 *)(lVar1 + 0x10) = 0xb9;
  FUN_1003d266c(lVar1,"HookLocator");
  *(undefined4 *)(lVar1 + 0x34) = 0;
  lVar1 = FUN_10000ceb8();
  FUN_1003a985c(&local_30,lVar1);
  *(undefined4 *)(lVar1 + 0x2c) = 0x3f800000;
  *(undefined8 *)(lVar1 + 0x10) = 0;
  lVar1 = FUN_10000d8b8();
  FUN_1003a985c(&local_30,lVar1);
  *(undefined1 *)(lVar1 + 0x10) = 0;
  return local_30;
}




undefined8 FUN_1003908dc(void)

{
  long lVar1;
  long *plVar2;
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_30 = 0;
  uStack_28 = 0;
  lVar1 = FUN_10000d8b8();
  FUN_1003a985c(&local_30,lVar1);
  *(undefined1 *)(lVar1 + 0x10) = 1;
  plVar2 = (long *)thunk_FUN_10000e0ac();
  FUN_1003a985c(&local_30,plVar2);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x50))(plVar2,"Ability01_Recoil");
  (**(code **)(*plVar2 + 0x18))(plVar2,"AttackToIdleCombat");
  lVar1 = FUN_10000ceb8();
  FUN_1003a985c(&local_30,lVar1);
  *(undefined4 *)(lVar1 + 0x2c) = 0x3e4ccccd;
  *(undefined8 *)(lVar1 + 0x10) = 0;
  lVar1 = FUN_10000d8b8();
  FUN_1003a985c(&local_30,lVar1);
  *(undefined1 *)(lVar1 + 0x10) = 0;
  return local_30;
}




undefined8 FUN_10039099c(void)

{
  long *plVar1;
  long lVar2;
  code *local_40;
  undefined4 local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_30 = 0;
  uStack_28 = 0;
  plVar1 = (long *)FUN_10000bdf0();
  FUN_1003a985c(&local_30,plVar1);
  plVar1 = (long *)(**(code **)(*plVar1 + 0x50))(plVar1,PTR_s_Buff_Yates_B_IsCasting_10185b4a0);
  local_40 = FUN_1003cdf58;
  local_38 = 3;
  (**(code **)(*plVar1 + 0x18))(plVar1,&local_40);
  lVar2 = FUN_10000ceb8();
  FUN_1003a985c(&local_30,lVar2);
  *(code **)(lVar2 + 0x20) = FUN_1003cdf58;
  *(undefined8 *)(lVar2 + 0x10) = 0;
  return local_30;
}




undefined8 FUN_100390a30(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  code *local_50;
  undefined4 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  local_40 = 0;
  uStack_38 = 0;
  lVar1 = FUN_10000d8b8();
  FUN_1003a985c(&local_40,lVar1);
  *(undefined1 *)(lVar1 + 0x10) = 1;
  lVar1 = FUN_10000ef8c();
  FUN_1003a985c(&local_40,lVar1);
  *(byte *)(lVar1 + 0x10) = *(byte *)(lVar1 + 0x10) & 0xe7 | 4;
  lVar1 = FUN_10000c8e8();
  FUN_1003a985c(&local_40,lVar1);
  lVar2 = FUN_10049ab34(lVar1 + 0x10);
  *(undefined **)(lVar2 + 8) = PTR_s_Buff_Yates_Talent_TalentC_10185b4a8;
  plVar3 = (long *)thunk_FUN_10000e0ac();
  FUN_1003a985c(lVar1 + 200,plVar3);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x50))(plVar3,"Ability03");
  (**(code **)(*plVar3 + 0x18))(plVar3,"AttackToIdleCombat");
  plVar3 = (long *)thunk_FUN_10000e0ac();
  FUN_1003a985c(lVar1 + 0xb0,plVar3);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x50))(plVar3,"Ability03");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x10))(0x40000000);
  (**(code **)(*plVar3 + 0x18))(plVar3,"AttackToIdleCombat");
  plVar3 = (long *)FUN_10000bdf0();
  FUN_1003a985c(&local_40,plVar3);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x50))
                             (plVar3,PTR_s_Buff_Yates_C_PlayTeleportEffect_10185b4b0);
  local_50 = FUN_1003ce4d8;
  local_48 = 4;
  (**(code **)(*plVar3 + 0x18))(plVar3,&local_50);
  plVar3 = (long *)FUN_10000bdf0();
  FUN_1003a985c(&local_40,plVar3);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x50))(plVar3,PTR_s_Buff_Yates_C_IsCasting_10185b4b8);
  local_50 = FUN_1003ce510;
  local_48 = 4;
  (**(code **)(*plVar3 + 0x18))(plVar3,&local_50);
  lVar1 = FUN_10000ceb8();
  FUN_1003a985c(&local_40,lVar1);
  *(code **)(lVar1 + 0x18) = FUN_1003ce008;
  plVar3 = (long *)thunk_FUN_10000e358();
  FUN_1003a985c(&local_40,plVar3);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x58))(plVar3);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Yates_C_Leap");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x78))(plVar3,1);
  (**(code **)(*plVar3 + 0xb0))(plVar3,1);
  lVar1 = FUN_10000ceb8();
  FUN_1003a985c(&local_40,lVar1);
  *(code **)(lVar1 + 0x18) = FUN_1003ce0c8;
  plVar3 = (long *)thunk_FUN_10000e358();
  FUN_1003a985c(&local_40,plVar3);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x58))(plVar3);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Yates_C_Leap_Air");
  (**(code **)(*plVar3 + 0xb0))(plVar3,1);
  plVar3 = (long *)FUN_10000bdf0();
  FUN_1003a985c(&local_40,plVar3);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x50))(plVar3,PTR_s_Buff_Yates_C_Untouchable_10185b4c0);
  local_50 = FUN_1003ce580;
  local_48 = 4;
  (**(code **)(*plVar3 + 0x18))(plVar3,&local_50);
  lVar1 = FUN_10000ceb8();
  FUN_1003a985c(&local_40,lVar1);
  *(code **)(lVar1 + 0x18) = FUN_1003ce194;
  plVar3 = (long *)FUN_10000bdf0();
  FUN_1003a985c(&local_40,plVar3);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x50))
                             (plVar3,PTR_s_Buff_Yates_C_PostTeleport_HideSe_10185b4c8);
  local_50 = FUN_1003ce1b8;
  local_48 = 4;
  (**(code **)(*plVar3 + 0x18))(plVar3,&local_50);
  plVar3 = (long *)FUN_10000f748();
  FUN_1003a985c(&local_40,plVar3);
  (**(code **)(*plVar3 + 0x58))(plVar3);
  plVar3 = (long *)FUN_10000bdf0();
  FUN_1003a985c(&local_40,plVar3);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x50))
                             (plVar3,PTR_s_Buff_Yates_C_LandingIndicator_10185b4d0);
  local_50 = FUN_1003ce5d4;
  local_48 = 4;
  (**(code **)(*plVar3 + 0x18))(plVar3,&local_50);
  lVar1 = FUN_10000ceb8();
  FUN_1003a985c(&local_40,lVar1);
  *(code **)(lVar1 + 0x18) = FUN_1003ce250;
  plVar3 = (long *)FUN_10000bdf0();
  FUN_1003a985c(&local_40,plVar3);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x50))(plVar3,PTR_s_Buff_Yates_C_LandingEffect_10185b4d8);
  local_50 = FUN_1003ce618;
  local_48 = 4;
  (**(code **)(*plVar3 + 0x18))(plVar3,&local_50);
  lVar1 = FUN_10000ceb8();
  FUN_1003a985c(&local_40,lVar1);
  *(code **)(lVar1 + 0x18) = FUN_1003ce31c;
  plVar3 = (long *)thunk_FUN_10000e5dc();
  FUN_1003a985c(&local_40,plVar3);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x58))(plVar3,"Sound_Yates_C_Impact");
  uVar4 = FUN_1010a1520();
  lVar1 = FUN_1010a0e0c(uVar4,0,"*KindredSoundBalance*",0);
  FUN_1003cdee0(*(undefined4 *)(lVar1 + 0x510));
  (**(code **)(*plVar3 + 0x28))(plVar3);
  lVar1 = FUN_10000ceb8();
  FUN_1003a985c(&local_40,lVar1);
  *(code **)(lVar1 + 0x18) = FUN_1003ce3e8;
  plVar3 = (long *)thunk_FUN_10000f1a0();
  FUN_1003a985c(&local_40,plVar3);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x68))(plVar3);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x10))(0x3e99999a);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x18))(0x3f4ccccd);
  (**(code **)(*plVar3 + 0x20))(0x41700000);
  lVar1 = FUN_10000ceb8();
  FUN_1003a985c(&local_40,lVar1);
  *(code **)(lVar1 + 0x18) = FUN_1003ce4b4;
  lVar1 = FUN_10000d8b8();
  FUN_1003a985c(&local_40,lVar1);
  *(undefined1 *)(lVar1 + 0x10) = 0;
  return local_40;
}




void FUN_100390fa4(void)

{
  FUN_1003a2678(PTR_s_Buff_Yates_Withdraw_10185b4e0);
  return;
}




void FUN_100390fb0(void)

{
  FUN_1003ce650("Attack","Effect_Inara_AA","Effect_Nothing","Effect_Nothing",0);
  return;
}




void FUN_100390fd4(void)

{
  FUN_1003ce650("AltAttack","Effect_Inara_AA_Alt","Effect_Nothing","Effect_Nothing",0);
  return;
}




void FUN_100390ff8(void)

{
  FUN_1003ce650("CritAttack","Effect_Inara_AA_Crit","Effect_Inara_AA_Crit_Weapon",
                "Effect_Inara_AA_Crit_Weapon",2);
  return;
}




undefined8 FUN_10039101c(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined4 local_70 [2];
  undefined4 local_68;
  code *local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  local_50 = 0;
  uStack_48 = 0;
  lVar1 = FUN_10000d8b8();
  FUN_1003a985c(&local_50,lVar1);
  *(undefined1 *)(lVar1 + 0x10) = 1;
  lVar1 = FUN_10000ef8c();
  FUN_1003a985c(&local_50,lVar1);
  *(byte *)(lVar1 + 0x10) = *(byte *)(lVar1 + 0x10) & 0xe7 | 4;
  lVar1 = FUN_10000c8e8();
  FUN_1003a985c(&local_50,lVar1);
  lVar2 = FUN_10049ab34(lVar1 + 0x10);
  *(undefined **)(lVar2 + 8) = PTR_s_Buff_Inara_Talent_TalentC_10185b530;
  plVar3 = (long *)FUN_10000bdf0();
  FUN_1003a985c(lVar1 + 0xb0,plVar3);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x50))(plVar3,PTR_s_Buff_Invulnerable_10185a588);
  local_60 = FUN_1003ce968;
  local_58 = 3;
  (**(code **)(*plVar3 + 0x18))(plVar3,&local_60);
  plVar3 = (long *)thunk_FUN_10000e5dc();
  FUN_1003a985c(&local_50,plVar3);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x58))(plVar3,"Sound_Inara_Leap_Startup");
  uVar4 = FUN_1010a1520();
  lVar1 = FUN_1010a0e0c(uVar4,0,"*KindredSoundBalance*",0);
  FUN_1003ce904(*(undefined4 *)(lVar1 + 0x530));
  (**(code **)(*plVar3 + 0x28))(plVar3);
  uVar4 = FUN_10000bc94();
  FUN_1003a985c(&local_50,uVar4);
  plVar3 = (long *)FUN_10000bed8();
  FUN_1003a985c(&local_50,plVar3);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x70))
                             (plVar3,PTR_s_Buff_Inara_B_CancelMarkOnHero_10185b538);
  local_60 = (code *)CONCAT44(local_60._4_4_,0x3ecccccd);
  local_58 = 1;
  (**(code **)(*plVar3 + 0x18))(plVar3,&local_60);
  uVar4 = FUN_10000c784();
  FUN_1003a985c(&local_50,uVar4);
  plVar3 = (long *)thunk_FUN_10000e0ac();
  FUN_1003a985c(&local_50,plVar3);
  (**(code **)(*plVar3 + 0x50))(plVar3,"JungleDashAttack");
  plVar3 = (long *)FUN_10000cd5c();
  FUN_1003a985c(&local_50,plVar3);
  local_60 = FUN_1003ce99c;
  local_58 = 3;
  plVar3 = (long *)(**(code **)(*plVar3 + 0x98))(plVar3,&local_60,0);
  local_70[0] = 0x3ecccccd;
  local_68 = 1;
  plVar3 = (long *)(**(code **)(*plVar3 + 0xa8))(plVar3,local_70);
  (**(code **)(*plVar3 + 0xb0))(plVar3,1);
  plVar3 = (long *)thunk_FUN_10000e358();
  FUN_1003a985c(&local_50,plVar3);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x68))(plVar3,"Bone_CenterMass");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Inara_Perk_Leap");
  local_60 = (code *)CONCAT44(local_60._4_4_,0x3ecccccd);
  local_58 = 1;
  plVar3 = (long *)(**(code **)(*plVar3 + 0x60))(plVar3,&local_60);
  (**(code **)(*plVar3 + 0x78))(plVar3,1);
  lVar1 = FUN_10000ceb8();
  FUN_1003a985c(&local_50,lVar1);
  *(undefined4 *)(lVar1 + 0x2c) = 0x3f000000;
  *(undefined8 *)(lVar1 + 0x10) = 0;
  uVar4 = FUN_10000f9c0();
  FUN_1003a985c(&local_50,uVar4);
  plVar3 = (long *)thunk_FUN_10000e5dc();
  FUN_1003a985c(&local_50,plVar3);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x58))(plVar3,"Sound_Inara_Leap_Impact");
  uVar4 = FUN_1010a1520();
  lVar1 = FUN_1010a0e0c(uVar4,0,"*KindredSoundBalance*",0);
  FUN_1003ce904(*(undefined4 *)(lVar1 + 0x530));
  (**(code **)(*plVar3 + 0x28))(plVar3);
  plVar3 = (long *)FUN_10000cc74();
  FUN_1003a985c(&local_50,plVar3);
  (**(code **)(*plVar3 + 0x58))(plVar3,1);
  plVar3 = (long *)thunk_FUN_10000e358();
  FUN_1003a985c(&local_50,plVar3);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x58))(plVar3);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Inara_Perk_Attack");
  (**(code **)(*plVar3 + 0x78))(plVar3,1);
  lVar1 = FUN_10000d8b8();
  FUN_1003a985c(&local_50,lVar1);
  *(undefined1 *)(lVar1 + 0x10) = 0;
  uVar4 = FUN_10000f034();
  FUN_1003a985c(&local_50,uVar4);
  return local_50;
}




undefined8 FUN_1003913fc(void)

{
  int iVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  bool bVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  code *local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  local_70 = 0;
  uStack_68 = 0;
  lVar6 = FUN_10000d8b8();
  FUN_1003a985c(&local_70,lVar6);
  *(undefined1 *)(lVar6 + 0x10) = 1;
  plVar7 = (long *)thunk_FUN_10000e0ac();
  FUN_1003a985c(&local_70,plVar7);
  plVar7 = (long *)(**(code **)(*plVar7 + 0x50))(plVar7,"Ability01_Circle");
  (**(code **)(*plVar7 + 0x18))(plVar7,"AttackToIdleCombat");
  plVar7 = (long *)thunk_FUN_10000e358();
  FUN_1003a985c(&local_70,plVar7);
  plVar7 = (long *)(**(code **)(*plVar7 + 0x58))(plVar7);
  plVar7 = (long *)(**(code **)(*plVar7 + 0x48))(plVar7,"Effect_Inara_A");
  (**(code **)(*plVar7 + 0x78))(plVar7,1);
  plVar7 = (long *)thunk_FUN_10000e5dc();
  FUN_1003a985c(&local_70,plVar7);
  plVar7 = (long *)(**(code **)(*plVar7 + 0x58))(plVar7,"Sound_Inara_A");
  uVar8 = FUN_1010a1520();
  lVar6 = FUN_1010a0e0c(uVar8,0,"*KindredSoundBalance*",0);
  FUN_1003ce904(*(undefined4 *)(lVar6 + 0x534));
  (**(code **)(*plVar7 + 0x28))(plVar7);
  lVar6 = FUN_10000ceb8();
  FUN_1003a985c(&local_70,lVar6);
  *(undefined4 *)(lVar6 + 0x2c) = 0x3dcccccd;
  *(undefined8 *)(lVar6 + 0x10) = 0;
  lVar6 = FUN_1003e10f0();
  iVar1 = ((uint)*(byte *)(lVar6 + 0xe5) << 0x10 | 0x146110) + 0x10;
  lVar6 = FUN_10000ed74();
  FUN_1003a985c(&local_70,lVar6);
  *(undefined8 *)(lVar6 + 0x18) = 0;
  *(undefined1 *)(lVar6 + 0x20) = 1;
  *(undefined8 *)(lVar6 + 0x24) = 0;
  *(undefined8 *)(lVar6 + 0x34) = 0;
  *(undefined8 *)(lVar6 + 0x2c) = 0;
  *(undefined4 *)(lVar6 + 0x3c) = 0;
  *(undefined8 *)(lVar6 + 0x48) = 0xbf800000c0000000;
  *(undefined8 *)(lVar6 + 0x40) = 0xbf800000bf800000;
  *(undefined4 *)(lVar6 + 0x50) = 0x3f266666;
  *(undefined1 *)(lVar6 + 0x54) = 0xff;
  *(undefined8 *)(lVar6 + 0x60) = 0xffffffff00000000;
  *(undefined8 *)(lVar6 + 0x58) = 0xffffffff00040000;
  *(char *)(lVar6 + 0x6a) = (char)((uint)iVar1 >> 0x10);
  *(short *)(lVar6 + 0x68) = (short)iVar1;
  bVar5 = DAT_101d23a38 != '\0';
  *(undefined4 *)(lVar6 + 0xa4) = 0x40a00000;
  *(byte *)(lVar6 + 0xa8) = *(byte *)(lVar6 + 0xa8) & 0xf0 | bVar5;
  uVar8 = FUN_10000cb8c();
  FUN_1003a985c(&local_70,uVar8);
  plVar7 = (long *)FUN_10000bed8();
  FUN_1003a985c(&local_70,plVar7);
  plVar7 = (long *)(**(code **)(*plVar7 + 0x70))(plVar7,PTR_s_Buff_Inara_A_Slow_10185b540);
  local_80 = FUN_1003ce9b0;
  local_78 = 3;
  (**(code **)(*plVar7 + 0x18))(plVar7,&local_80);
  uVar8 = FUN_10000c784();
  FUN_1003a985c(&local_70,uVar8);
  lVar6 = FUN_1003e10f0();
  bVar2 = *(byte *)(lVar6 + 0xe5);
  lVar6 = FUN_1003e10f0();
  bVar3 = *(byte *)(lVar6 + 0xe5);
  lVar6 = FUN_1003e10f0();
  bVar4 = *(byte *)(lVar6 + 0xe5);
  lVar6 = FUN_10000c8e8();
  FUN_1003a985c(&local_70,lVar6);
  lVar9 = FUN_10049ab34(lVar6 + 0x10);
  *(undefined **)(lVar9 + 8) = PTR_s_Buff_Inara_Talent_TalentA_10185b548;
  lVar6 = lVar6 + 0xb0;
  lVar9 = FUN_10000ed74();
  FUN_1003a985c(lVar6,lVar9);
  *(undefined8 *)(lVar9 + 0x18) = 0;
  *(undefined1 *)(lVar9 + 0x20) = 1;
  *(undefined8 *)(lVar9 + 0x24) = 0;
  *(undefined8 *)(lVar9 + 0x34) = 0;
  *(undefined8 *)(lVar9 + 0x2c) = 0;
  *(undefined4 *)(lVar9 + 0x3c) = 0;
  *(undefined8 *)(lVar9 + 0x48) = 0xbf800000c0000000;
  *(undefined8 *)(lVar9 + 0x40) = 0xbf800000bf800000;
  *(undefined4 *)(lVar9 + 0x50) = 0x3f266666;
  *(undefined1 *)(lVar9 + 0x54) = 0xff;
  *(undefined8 *)(lVar9 + 0x60) = 0xffffffff00000000;
  *(undefined8 *)(lVar9 + 0x58) = 0xffffffff00000001;
  *(byte *)(lVar9 + 0x6a) = bVar2 | 0x14;
  *(undefined2 *)(lVar9 + 0x68) = 0x6150;
  *(undefined4 *)(lVar9 + 0xa4) = 0x40a00000;
  *(byte *)(lVar9 + 0xa8) = *(byte *)(lVar9 + 0xa8) & 0xf0 | 1;
  lVar9 = FUN_10000ed74();
  FUN_1003a985c(lVar6,lVar9);
  *(undefined8 *)(lVar9 + 0x18) = 0;
  *(undefined1 *)(lVar9 + 0x20) = 1;
  *(undefined8 *)(lVar9 + 0x24) = 0;
  *(undefined8 *)(lVar9 + 0x34) = 0;
  *(undefined8 *)(lVar9 + 0x2c) = 0;
  *(undefined4 *)(lVar9 + 0x3c) = 0;
  *(undefined8 *)(lVar9 + 0x48) = 0xbf800000c0000000;
  *(undefined8 *)(lVar9 + 0x40) = 0xbf800000bf800000;
  *(undefined4 *)(lVar9 + 0x50) = 0x3f266666;
  *(undefined1 *)(lVar9 + 0x54) = 0xff;
  *(undefined8 *)(lVar9 + 0x60) = 0xffffffff00000000;
  *(undefined8 *)(lVar9 + 0x58) = 0xffffffff00000010;
  *(byte *)(lVar9 + 0x6a) = bVar3 | 0x14;
  *(undefined2 *)(lVar9 + 0x68) = 0x6110;
  *(undefined4 *)(lVar9 + 0xa4) = 0x40a00000;
  *(byte *)(lVar9 + 0xa8) = *(byte *)(lVar9 + 0xa8) & 0xf0 | 1;
  lVar9 = FUN_10000ed74();
  FUN_1003a985c(lVar6,lVar9);
  *(undefined8 *)(lVar9 + 0x18) = 0;
  *(undefined1 *)(lVar9 + 0x20) = 1;
  *(undefined8 *)(lVar9 + 0x24) = 0;
  *(undefined8 *)(lVar9 + 0x34) = 0;
  *(undefined8 *)(lVar9 + 0x2c) = 0;
  *(undefined4 *)(lVar9 + 0x3c) = 0;
  *(undefined8 *)(lVar9 + 0x48) = 0xbf800000c0000000;
  *(undefined8 *)(lVar9 + 0x40) = 0xbf800000bf800000;
  *(undefined4 *)(lVar9 + 0x50) = 0x3f266666;
  *(undefined1 *)(lVar9 + 0x54) = 0xff;
  *(undefined8 *)(lVar9 + 0x60) = 0xffffffff00000000;
  *(undefined8 *)(lVar9 + 0x58) = 0xffffffff20000000;
  *(byte *)(lVar9 + 0x6a) = bVar4 | 0x14;
  *(undefined2 *)(lVar9 + 0x68) = 0x6110;
  *(undefined4 *)(lVar9 + 0xa4) = 0x40a00000;
  *(byte *)(lVar9 + 0xa8) = *(byte *)(lVar9 + 0xa8) & 0xf0 | 1;
  lVar9 = FUN_10000d580();
  FUN_1003a985c(lVar6,lVar9);
  *(code **)(lVar9 + 0x10) = FUN_1003ce9c4;
  *(undefined4 *)(lVar9 + 0x18) = 3;
  uVar8 = FUN_10000c784();
  FUN_1003a985c(lVar6,uVar8);
  lVar6 = FUN_10000ceb8();
  FUN_1003a985c(&local_70,lVar6);
  *(undefined4 *)(lVar6 + 0x2c) = 0x3e99999a;
  *(undefined8 *)(lVar6 + 0x10) = 0;
  lVar6 = FUN_10000d8b8();
  FUN_1003a985c(&local_70,lVar6);
  *(undefined1 *)(lVar6 + 0x10) = 0;
  return local_70;
}




undefined8 FUN_1003918b0(void)

{
  byte bVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  code *local_e0;
  undefined4 local_d8;
  undefined4 local_d0 [2];
  undefined4 local_c8;
  code *local_c0;
  undefined4 local_b8;
  code *local_b0;
  undefined4 local_a8;
  code *local_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  
  local_90 = 0;
  uStack_88 = 0;
  lVar3 = FUN_10000ef8c();
  FUN_1003a985c(&local_90,lVar3);
  *(byte *)(lVar3 + 0x10) = *(byte *)(lVar3 + 0x10) & 0xe7 | 4;
  lVar3 = FUN_10000d8b8();
  FUN_1003a985c(&local_90,lVar3);
  *(undefined1 *)(lVar3 + 0x10) = 1;
  plVar4 = (long *)thunk_FUN_10000e5dc();
  FUN_1003a985c(&local_90,plVar4);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x58))(plVar4,"Sound_Inara_B");
  uVar5 = FUN_1010a1520();
  lVar3 = FUN_1010a0e0c(uVar5,0,"*KindredSoundBalance*",0);
  FUN_1003ce904(*(undefined4 *)(lVar3 + 0x538));
  (**(code **)(*plVar4 + 0x28))(plVar4);
  plVar4 = (long *)thunk_FUN_10000e0ac();
  FUN_1003a985c(&local_90,plVar4);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))(plVar4,"Ability02");
  (**(code **)(*plVar4 + 0x18))(plVar4,"AttackToIdleCombat");
  plVar4 = (long *)thunk_FUN_10000e358();
  FUN_1003a985c(&local_90,plVar4);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x58))(plVar4);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x48))(plVar4,"Effect_Inara_B");
  (**(code **)(*plVar4 + 0x78))(plVar4,1);
  plVar4 = (long *)thunk_FUN_10000e358();
  FUN_1003a985c(&local_90,plVar4);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x58))(plVar4);
  (**(code **)(*plVar4 + 0x48))(plVar4,"Effect_Inara_B_Cone");
  lVar3 = FUN_1003e10f0();
  bVar1 = *(byte *)(lVar3 + 0xe5);
  uVar7 = _cosf(0x3f060a92);
  lVar3 = FUN_10000ed74();
  FUN_1003a985c(&local_90,lVar3);
  *(undefined8 *)(lVar3 + 0x18) = 0;
  *(undefined1 *)(lVar3 + 0x20) = 1;
  *(undefined8 *)(lVar3 + 0x24) = 0;
  *(undefined8 *)(lVar3 + 0x34) = 0;
  *(undefined8 *)(lVar3 + 0x2c) = 0;
  *(undefined4 *)(lVar3 + 0x3c) = 0;
  uVar8 = NEON_fmov(0xbf800000,4);
  *(undefined8 *)(lVar3 + 0x40) = uVar8;
  *(undefined4 *)(lVar3 + 0x48) = uVar7;
  *(undefined8 *)(lVar3 + 0x4c) = 0x3f266666bf800000;
  *(undefined1 *)(lVar3 + 0x54) = 0xff;
  *(undefined8 *)(lVar3 + 0x60) = 0xffffffff00100000;
  *(undefined8 *)(lVar3 + 0x58) = 0xffffffff00040000;
  *(byte *)(lVar3 + 0x6a) = bVar1 | 0x14;
  *(undefined2 *)(lVar3 + 0x68) = 0x6120;
  bVar2 = DAT_101d23a38 != '\0';
  *(code **)(lVar3 + 0x78) = FUN_1003cea9c;
  *(byte *)(lVar3 + 0xa8) = *(byte *)(lVar3 + 0xa8) & 0xf0 | bVar2;
  uVar5 = FUN_10000cb8c();
  FUN_1003a985c(&local_90,uVar5);
  plVar4 = (long *)FUN_10000d7d0();
  FUN_1003a985c(&local_90,plVar4);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))(plVar4);
  local_a0 = (code *)CONCAT44(local_a0._4_4_,0x42700000);
  local_98 = 1;
  plVar4 = (long *)(**(code **)(*plVar4 + 0x68))(plVar4,&local_a0);
  local_b0 = (code *)CONCAT44(local_b0._4_4_,0x41f00000);
  local_a8 = 1;
  plVar4 = (long *)(**(code **)(*plVar4 + 0x10))(plVar4,&local_b0);
  local_c0 = FUN_1003ce9f8;
  local_b8 = 4;
  plVar4 = (long *)(**(code **)(*plVar4 + 0x28))(plVar4,&local_c0);
  local_d0[0] = 0x41200000;
  local_c8 = 1;
  plVar4 = (long *)(**(code **)(*plVar4 + 0x30))(plVar4,local_d0);
  local_e0 = FUN_1003ceab0;
  local_d8 = 3;
  (**(code **)(*plVar4 + 0x58))(plVar4,&local_e0);
  plVar4 = (long *)FUN_10000bed8();
  FUN_1003a985c(&local_90,plVar4);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x70))
                             (plVar4,PTR_s_Buff_GloballyVisibleTrueSight_10185a878);
  local_a0 = FUN_1003ceac4;
  local_98 = 3;
  (**(code **)(*plVar4 + 0x18))(plVar4,&local_a0);
  uVar5 = FUN_10000c784();
  FUN_1003a985c(&local_90,uVar5);
  lVar3 = FUN_1003e10f0();
  bVar1 = *(byte *)(lVar3 + 0xe5);
  lVar3 = FUN_10000ed74();
  FUN_1003a985c(&local_90,lVar3);
  *(undefined8 *)(lVar3 + 0x18) = 0;
  *(undefined1 *)(lVar3 + 0x20) = 1;
  *(undefined8 *)(lVar3 + 0x24) = 0;
  *(undefined8 *)(lVar3 + 0x34) = 0;
  *(undefined8 *)(lVar3 + 0x2c) = 0;
  *(undefined4 *)(lVar3 + 0x3c) = 0;
  *(undefined8 *)(lVar3 + 0x40) = uVar8;
  *(undefined4 *)(lVar3 + 0x48) = uVar7;
  *(undefined8 *)(lVar3 + 0x4c) = 0x3f266666bf800000;
  *(undefined1 *)(lVar3 + 0x54) = 0xff;
  *(undefined8 *)(lVar3 + 0x60) = 0xffffffff00000080;
  *(undefined8 *)(lVar3 + 0x58) = 0x30100000000;
  *(byte *)(lVar3 + 0x6a) = bVar1 | 0x14;
  *(undefined2 *)(lVar3 + 0x68) = 0x6120;
  bVar2 = DAT_101d23a38 != '\0';
  *(code **)(lVar3 + 0x78) = FUN_1003cea9c;
  *(byte *)(lVar3 + 0xa8) = *(byte *)(lVar3 + 0xa8) & 0xf0 | bVar2;
  plVar4 = (long *)FUN_10000bed8();
  FUN_1003a985c(&local_90,plVar4);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x70))(plVar4,PTR_s_Buff_Inara_B_IsMarkedHero_10185b558);
  local_a0 = FUN_1003ceac4;
  local_98 = 3;
  (**(code **)(*plVar4 + 0x18))(plVar4,&local_a0);
  uVar5 = FUN_10000c784();
  FUN_1003a985c(&local_90,uVar5);
  lVar3 = FUN_10000ceb8();
  FUN_1003a985c(&local_90,lVar3);
  *(undefined4 *)(lVar3 + 0x2c) = 0x3dcccccd;
  *(undefined8 *)(lVar3 + 0x10) = 0;
  plVar4 = (long *)FUN_10000cd5c();
  FUN_1003a985c(&local_90,plVar4);
  local_a0 = FUN_1003cead8;
  local_98 = 3;
  plVar4 = (long *)(**(code **)(*plVar4 + 0x80))(plVar4,&local_a0);
  local_b0 = FUN_1003ceaec;
  local_a8 = 3;
  plVar4 = (long *)(**(code **)(*plVar4 + 0xa8))(plVar4,&local_b0);
  (**(code **)(*plVar4 + 0xb0))(plVar4,1);
  lVar3 = FUN_10000c8e8();
  FUN_1003a985c(&local_90,lVar3);
  lVar6 = FUN_10049ab34(lVar3 + 0x10);
  *(undefined **)(lVar6 + 8) = PTR_s_Buff_Inara_Talent_TalentC_10185b530;
  plVar4 = (long *)FUN_10000bdf0();
  FUN_1003a985c(lVar3 + 0xb0,plVar4);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))(plVar4,PTR_s_Buff_Invulnerable_10185a588);
  local_a0 = FUN_1003ce968;
  local_98 = 3;
  (**(code **)(*plVar4 + 0x18))(plVar4,&local_a0);
  lVar3 = FUN_10000ceb8();
  FUN_1003a985c(&local_90,lVar3);
  *(undefined4 *)(lVar3 + 0x2c) = 0x3e4ccccd;
  *(undefined8 *)(lVar3 + 0x10) = 0;
  uVar5 = FUN_10000f9c0();
  FUN_1003a985c(&local_90,uVar5);
  uVar5 = FUN_10000c6d4();
  FUN_1003a985c(&local_90,uVar5);
  lVar3 = FUN_10000ceb8();
  FUN_1003a985c(&local_90,lVar3);
  *(undefined4 *)(lVar3 + 0x2c) = 0x3dcccccd;
  *(undefined8 *)(lVar3 + 0x10) = 0;
  lVar3 = FUN_10000d8b8();
  FUN_1003a985c(&local_90,lVar3);
  *(undefined1 *)(lVar3 + 0x10) = 0;
  return local_90;
}




undefined8 FUN_100391ea8(void)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  code *local_40;
  undefined4 local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_30 = 0;
  uStack_28 = 0;
  lVar1 = FUN_10000d8b8();
  FUN_1003a985c(&local_30,lVar1);
  *(undefined1 *)(lVar1 + 0x10) = 1;
  plVar2 = (long *)thunk_FUN_10000e0ac();
  FUN_1003a985c(&local_30,plVar2);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x50))(plVar2,"Ability03");
  (**(code **)(*plVar2 + 0x18))(plVar2,"AttackToIdleCombat");
  plVar2 = (long *)thunk_FUN_10000e358();
  FUN_1003a985c(&local_30,plVar2);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x58))(plVar2);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Inara_C_Cast");
  local_40 = (code *)CONCAT44(local_40._4_4_,0x3f000000);
  local_38 = 1;
  plVar2 = (long *)(**(code **)(*plVar2 + 0x60))(plVar2,&local_40);
  (**(code **)(*plVar2 + 0x78))(plVar2,1);
  plVar2 = (long *)thunk_FUN_10000e5dc();
  FUN_1003a985c(&local_30,plVar2);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x58))(plVar2,"Sound_Inara_C");
  uVar3 = FUN_1010a1520();
  lVar1 = FUN_1010a0e0c(uVar3,0,"*KindredSoundBalance*",0);
  FUN_1003ce904(*(undefined4 *)(lVar1 + 0x53c));
  (**(code **)(*plVar2 + 0x28))(plVar2);
  plVar2 = (long *)FUN_10000bdf0();
  FUN_1003a985c(&local_30,plVar2);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x50))
                             (plVar2,PTR_s_Buff_Inara_C_SpeedBoost_Control_10185b560);
  local_40 = FUN_1003ceb00;
  local_38 = 3;
  (**(code **)(*plVar2 + 0x18))(plVar2,&local_40);
  plVar2 = (long *)FUN_10000bdf0();
  FUN_1003a985c(&local_30,plVar2);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x50))
                             (plVar2,PTR_s_Buff_Inara_C_HasDashAvailable_10185b568);
  local_40 = FUN_1003ceb14;
  local_38 = 3;
  (**(code **)(*plVar2 + 0x18))(plVar2,&local_40);
  lVar1 = FUN_10000ceb8();
  FUN_1003a985c(&local_30,lVar1);
  *(undefined4 *)(lVar1 + 0x2c) = 0x3ecccccd;
  *(undefined8 *)(lVar1 + 0x10) = 0;
  lVar1 = FUN_10000d8b8();
  FUN_1003a985c(&local_30,lVar1);
  *(undefined1 *)(lVar1 + 0x10) = 0;
  return local_30;
}




undefined8 FUN_1003920c8(void)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  code *local_50;
  undefined4 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  local_40 = 0;
  uStack_38 = 0;
  lVar1 = FUN_10000d8b8();
  FUN_1003a985c(&local_40,lVar1);
  *(undefined1 *)(lVar1 + 0x10) = 1;
  lVar1 = FUN_10000ef8c();
  FUN_1003a985c(&local_40,lVar1);
  *(byte *)(lVar1 + 0x10) = *(byte *)(lVar1 + 0x10) & 0xe7 | 4;
  uVar2 = FUN_10000bb2c();
  FUN_1003a985c(&local_40,uVar2);
  lVar1 = FUN_10000c540();
  FUN_1003a985c(&local_40,lVar1);
  *(undefined **)(lVar1 + 0x10) = PTR_s_Buff_Inara_C_HasDashAvailable_10185b568;
  uVar2 = FUN_10000c784();
  FUN_1003a985c(&local_40,uVar2);
  plVar3 = (long *)thunk_FUN_10000e5dc();
  FUN_1003a985c(&local_40,plVar3);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x58))(plVar3,"Sound_Inara_C2_Dash");
  uVar2 = FUN_1010a1520();
  lVar1 = FUN_1010a0e0c(uVar2,0,"*KindredSoundBalance*",0);
  FUN_1003ce904(*(undefined4 *)(lVar1 + 0x540));
  (**(code **)(*plVar3 + 0x28))(plVar3);
  plVar3 = (long *)thunk_FUN_10000e0ac();
  FUN_1003a985c(&local_40,plVar3);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x50))(plVar3,"Ability03_Dash");
  (**(code **)(*plVar3 + 0x18))(plVar3,"AttackToIdleCombat");
  lVar1 = FUN_10000ceb8();
  FUN_1003a985c(&local_40,lVar1);
  *(undefined4 *)(lVar1 + 0x2c) = 0x3dcccccd;
  *(undefined8 *)(lVar1 + 0x10) = 0;
  plVar3 = (long *)thunk_FUN_10000e358();
  FUN_1003a985c(&local_40,plVar3);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x58))(plVar3);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Inara_C_Dash");
  local_50 = (code *)CONCAT44(local_50._4_4_,0x3f000000);
  local_48 = 1;
  plVar3 = (long *)(**(code **)(*plVar3 + 0x60))(plVar3,&local_50);
  (**(code **)(*plVar3 + 0x78))(plVar3,1);
  plVar3 = (long *)FUN_10000bdf0();
  FUN_1003a985c(&local_40,plVar3);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x50))(plVar3,PTR_s_Buff_SelfProjectile_10185a530);
  local_50 = FUN_1003ceb28;
  local_48 = 3;
  plVar3 = (long *)(**(code **)(*plVar3 + 0x18))(plVar3,&local_50);
  (**(code **)(*plVar3 + 0x48))(plVar3,0xbb);
  plVar3 = (long *)FUN_10000cd5c();
  FUN_1003a985c(&local_40,plVar3);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x88))(plVar3);
  local_50 = (code *)CONCAT44(local_50._4_4_,0x3e4ccccd);
  local_48 = 1;
  plVar3 = (long *)(**(code **)(*plVar3 + 0xa8))(plVar3,&local_50);
  (**(code **)(*plVar3 + 0xb0))(plVar3,1);
  lVar1 = FUN_10000c8e8();
  FUN_1003a985c(&local_40,lVar1);
  lVar4 = FUN_10049ab34(lVar1 + 0x10);
  *(undefined **)(lVar4 + 8) = PTR_s_Buff_Inara_Talent_TalentC_10185b530;
  plVar3 = (long *)FUN_10000bdf0();
  FUN_1003a985c(lVar1 + 0xb0,plVar3);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x50))(plVar3,PTR_s_Buff_Invulnerable_10185a588);
  local_50 = FUN_1003ce968;
  local_48 = 3;
  (**(code **)(*plVar3 + 0x18))(plVar3,&local_50);
  lVar1 = FUN_10000ceb8();
  FUN_1003a985c(&local_40,lVar1);
  *(undefined4 *)(lVar1 + 0x2c) = 0x3e4ccccd;
  *(undefined8 *)(lVar1 + 0x10) = 0;
  uVar2 = FUN_10000f9c0();
  FUN_1003a985c(&local_40,uVar2);
  lVar1 = FUN_10000d8b8();
  FUN_1003a985c(&local_40,lVar1);
  *(undefined1 *)(lVar1 + 0x10) = 0;
  return local_40;
}




undefined8 FUN_100392410(void)

{
  byte bVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined4 local_50 [2];
  undefined4 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  local_40 = 0;
  uStack_38 = 0;
  lVar2 = FUN_1003e10f0();
  bVar1 = *(byte *)(lVar2 + 0xe5);
  lVar2 = FUN_10000ef8c();
  FUN_1003a985c(&local_40,lVar2);
  *(byte *)(lVar2 + 0x10) = *(byte *)(lVar2 + 0x10) & 0xe7 | 4;
  plVar3 = (long *)thunk_FUN_10000e0ac();
  FUN_1003a985c(&local_40,plVar3);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x58))(plVar3,"Attack");
  (**(code **)(*plVar3 + 0x18))(plVar3,"AttackToIdleCombat");
  plVar3 = (long *)thunk_FUN_10000e358();
  FUN_1003a985c(&local_40,plVar3);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x58))(plVar3);
  (**(code **)(*plVar3 + 0x48))(plVar3,"Effect_LanceBall_Lance_AA");
  plVar3 = (long *)thunk_FUN_10000e5dc();
  FUN_1003a985c(&local_40,plVar3);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x58))(plVar3,"Sound_LanceBall_Lance_Attack_Quick");
  uVar4 = FUN_1010a1520();
  lVar2 = FUN_1010a0e0c(uVar4,0,"*KindredSoundBalance*",0);
  FUN_1003cec98(*(undefined4 *)(lVar2 + 0x518));
  (**(code **)(*plVar3 + 0x28))(plVar3);
  lVar2 = FUN_10000ceb8();
  FUN_1003a985c(&local_40,lVar2);
  *(code **)(lVar2 + 0x10) = FUN_1003a24a0;
  *(code **)(lVar2 + 0x18) = FUN_1003c5148;
  lVar2 = FUN_10000ecbc();
  FUN_1003a985c(&local_40,lVar2);
  *(code **)(lVar2 + 0x70) = FUN_1003ceb34;
  *(code **)(lVar2 + 0x78) = FUN_1003ceb5c;
  *(undefined4 *)(lVar2 + 0x88) = 0x3f800000;
  *(undefined8 *)(lVar2 + 0x18) = 0;
  *(undefined1 *)(lVar2 + 0x20) = 1;
  *(undefined8 *)(lVar2 + 0x24) = 0;
  *(undefined8 *)(lVar2 + 0x34) = 0;
  *(undefined8 *)(lVar2 + 0x2c) = 0;
  *(undefined4 *)(lVar2 + 0x3c) = 0;
  *(undefined8 *)(lVar2 + 0x48) = 0xbf800000c0000000;
  *(undefined8 *)(lVar2 + 0x40) = 0xbf800000bf800000;
  *(undefined4 *)(lVar2 + 0x50) = 0x3f800000;
  *(undefined1 *)(lVar2 + 0x54) = 0xff;
  *(undefined8 *)(lVar2 + 0x60) = 0xffffffff00000000;
  *(undefined8 *)(lVar2 + 0x58) = 0xffffffff00040000;
  *(byte *)(lVar2 + 0x6a) = bVar1 | 0x14;
  *(undefined2 *)(lVar2 + 0x68) = 0x4120;
  lVar2 = FUN_10000cae4();
  FUN_1003a985c(&local_40,lVar2);
  *(code **)(lVar2 + 0x10) = FUN_1003cec5c;
  plVar3 = (long *)FUN_10000bed8();
  FUN_1003a985c(&local_40,plVar3);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x70))
                             (plVar3,PTR_s_Buff_LanceBall_Lance_PlayAAPfx_10185b570);
  local_50[0] = 0x3dcccccd;
  local_48 = 1;
  (**(code **)(*plVar3 + 0x18))(plVar3,local_50);
  uVar4 = FUN_10000c784();
  FUN_1003a985c(&local_40,uVar4);
  uVar4 = FUN_10000f034();
  FUN_1003a985c(&local_40,uVar4);
  return local_40;
}




undefined8 FUN_10039267c(void)

{
  byte bVar1;
  char cVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined8 local_40;
  undefined8 uStack_38;
  
  local_40 = 0;
  uStack_38 = 0;
  uVar4 = FUN_10000d8b8();
  FUN_1003a985c(&local_40,uVar4);
  lVar5 = FUN_10000ef8c();
  FUN_1003a985c(&local_40,lVar5);
  *(byte *)(lVar5 + 0x10) = *(byte *)(lVar5 + 0x10) & 0xe7 | 4;
  lVar5 = FUN_10000dff8();
  FUN_1003a985c(&local_40,lVar5);
  *(undefined2 *)(lVar5 + 0x28) = 0x100;
  *(undefined8 *)(lVar5 + 0x30) = 0;
  uVar3 = FUN_1004d2524("Ability01");
  uVar3 = FUN_100015208("Ability01",uVar3,0x12345678);
  *(undefined4 *)(lVar5 + 0x10) = uVar3;
  uVar3 = FUN_1004d2524("AttackToIdleCombat");
  uVar3 = FUN_100015208("AttackToIdleCombat",uVar3,0x12345678);
  *(undefined4 *)(lVar5 + 0x20) = uVar3;
  plVar6 = (long *)FUN_10000f300();
  FUN_1003a985c(&local_40,plVar6);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x50))(plVar6,"*LanceBall_Lance_A_LandingIndicator*",0);
  (**(code **)(*plVar6 + 0x20))(plVar6,FUN_1003cee74);
  plVar6 = (long *)thunk_FUN_10000e358();
  FUN_1003a985c(&local_40,plVar6);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x58))(plVar6);
  (**(code **)(*plVar6 + 0x48))(plVar6,"Effect_LanceBall_Lance_A_Cast");
  plVar6 = (long *)thunk_FUN_10000e358();
  FUN_1003a985c(&local_40,plVar6);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x68))(plVar6,"Bone_Weapon");
  (**(code **)(*plVar6 + 0x48))(plVar6,"Effect_LanceBall_Lance_A_Weapon");
  plVar6 = (long *)thunk_FUN_10000e5dc();
  FUN_1003a985c(&local_40,plVar6);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x58))(plVar6,"Sound_LanceBall_Lance_Ability_A");
  uVar4 = FUN_1010a1520();
  lVar5 = FUN_1010a0e0c(uVar4,0,"*KindredSoundBalance*",0);
  FUN_1003cec98(*(undefined4 *)(lVar5 + 0x51c));
  (**(code **)(*plVar6 + 0x28))(plVar6);
  uVar4 = FUN_10000bb2c();
  FUN_1003a985c(&local_40,uVar4);
  lVar5 = FUN_10000c150();
  FUN_1003a985c(&local_40,lVar5);
  *(code **)(lVar5 + 0x10) = thunk_FUN_1003cecfc;
  *(byte *)(lVar5 + 0x18) = *(byte *)(lVar5 + 0x18) & 0xfc | 1;
  uVar4 = FUN_10000c784();
  FUN_1003a985c(&local_40,uVar4);
  cVar2 = DAT_101d23a38;
  lVar5 = FUN_10000ceb8();
  FUN_1003a985c(&local_40,lVar5);
  if (cVar2 == '\0') {
    *(code **)(lVar5 + 0x18) = FUN_1003cef94;
    plVar6 = (long *)thunk_FUN_10000e5dc();
    FUN_1003a985c(&local_40,plVar6);
    plVar6 = (long *)(**(code **)(*plVar6 + 0x58))(plVar6,"Sound_LanceBall_Lance_Ability_A_Hit");
    uVar4 = FUN_1010a1520();
    lVar5 = FUN_1010a0e0c(uVar4,0,"*KindredSoundBalance*",0);
    FUN_1003cec98(*(undefined4 *)(lVar5 + 0x51c));
    (**(code **)(*plVar6 + 0x28))(plVar6);
    lVar5 = FUN_10000ceb8();
    FUN_1003a985c(&local_40,lVar5);
    *(undefined4 *)(lVar5 + 0x2c) = DAT_10185b578;
  }
  else {
    *(code **)(lVar5 + 0x20) = FUN_1003cee5c;
  }
  *(undefined8 *)(lVar5 + 0x10) = 0;
  plVar6 = (long *)thunk_FUN_10000e358();
  FUN_1003a985c(&local_40,plVar6);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x58))(plVar6);
  (**(code **)(*plVar6 + 0x48))(plVar6,"Effect_LanceBall_Lance_A_Impact");
  lVar5 = FUN_10000ceb8();
  FUN_1003a985c(&local_40,lVar5);
  *(undefined4 *)(lVar5 + 0x2c) = 0x3dcccccd;
  *(undefined8 *)(lVar5 + 0x10) = 0;
  uVar4 = FUN_10000f9c0();
  FUN_1003a985c(&local_40,uVar4);
  lVar5 = FUN_1003e10f0();
  bVar1 = *(byte *)(lVar5 + 0xe5);
  lVar5 = FUN_10000ecbc();
  FUN_1003a985c(&local_40,lVar5);
  *(code **)(lVar5 + 0x70) = FUN_1003cefd8;
  *(code **)(lVar5 + 0x78) = FUN_1003cf000;
  *(undefined4 *)(lVar5 + 0x88) = 0x3f800000;
  *(undefined8 *)(lVar5 + 0x18) = 0;
  *(undefined1 *)(lVar5 + 0x20) = 1;
  *(undefined8 *)(lVar5 + 0x24) = 0;
  *(undefined8 *)(lVar5 + 0x34) = 0;
  *(undefined8 *)(lVar5 + 0x2c) = 0;
  *(undefined4 *)(lVar5 + 0x3c) = 0;
  *(undefined8 *)(lVar5 + 0x48) = 0xbf800000c0000000;
  *(undefined8 *)(lVar5 + 0x40) = 0xbf800000bf800000;
  *(undefined4 *)(lVar5 + 0x50) = 0x3f266666;
  *(undefined1 *)(lVar5 + 0x54) = 0xff;
  *(undefined8 *)(lVar5 + 0x60) = 0xffffffff00100000;
  *(undefined8 *)(lVar5 + 0x58) = 0xffffffff00040000;
  *(byte *)(lVar5 + 0x6a) = bVar1 | 0x14;
  *(undefined2 *)(lVar5 + 0x68) = 0x6120;
  lVar5 = FUN_10000cae4();
  FUN_1003a985c(&local_40,lVar5);
  *(code **)(lVar5 + 0x10) = FUN_1003cf080;
  lVar5 = FUN_10000c8e8();
  FUN_1003a985c(&local_40,lVar5);
  lVar7 = FUN_10049ae50(lVar5 + 0x10);
  *(undefined4 *)(lVar7 + 0x18) = 0;
  *(undefined4 *)(lVar7 + 8) = 0;
  *(undefined4 *)(lVar7 + 0x10) = 1;
  lVar5 = lVar5 + 200;
  uVar4 = FUN_10000c784();
  FUN_1003a985c(lVar5,uVar4);
  uVar4 = FUN_10000bb2c();
  FUN_1003a985c(lVar5,uVar4);
  lVar7 = FUN_10000bd3c();
  FUN_1003a985c(lVar5,lVar7);
  *(undefined **)(lVar7 + 0x10) = PTR_s_Buff_LanceBall_Lance_A_Recovery_10185b580;
  *(code **)(lVar7 + 0x30) = FUN_1003cf0f4;
  *(undefined2 *)(lVar7 + 0x68) = 1;
  *(byte *)(lVar7 + 0x6a) = *(byte *)(lVar7 + 0x6a) & 0xfe;
  uVar4 = FUN_10000c784();
  FUN_1003a985c(&local_40,uVar4);
  lVar5 = FUN_10000ceb8();
  FUN_1003a985c(&local_40,lVar5);
  *(code **)(lVar5 + 0x20) = FUN_1003cf108;
  *(undefined8 *)(lVar5 + 0x10) = 0;
  lVar5 = FUN_10000d8b8();
  FUN_1003a985c(&local_40,lVar5);
  *(undefined1 *)(lVar5 + 0x10) = 0;
  uVar4 = FUN_10000f034();
  FUN_1003a985c(&local_40,uVar4);
  lVar5 = FUN_10000d024();
  FUN_1003a985c(&local_40,lVar5);
  *(char **)(lVar5 + 0x10) = "LanceBall_Lance_A_LandingIndicator";
  return local_40;
}




undefined8 FUN_100392ba0(void)

{
  byte bVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  code *local_70;
  undefined4 local_68;
  code *local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  local_50 = 0;
  uStack_48 = 0;
  uVar4 = FUN_10000d8b8();
  FUN_1003a985c(&local_50,uVar4);
  lVar5 = FUN_10000ef8c();
  FUN_1003a985c(&local_50,lVar5);
  *(byte *)(lVar5 + 0x10) = *(byte *)(lVar5 + 0x10) & 0xe3 | 8;
  lVar5 = FUN_10000dff8();
  FUN_1003a985c(&local_50,lVar5);
  *(undefined2 *)(lVar5 + 0x28) = 0x100;
  *(undefined8 *)(lVar5 + 0x30) = 0;
  uVar3 = FUN_1004d2524("Ability02");
  uVar3 = FUN_100015208("Ability02",uVar3,0x12345678);
  *(undefined4 *)(lVar5 + 0x10) = uVar3;
  uVar3 = FUN_1004d2524("AttackToIdleCombat");
  uVar3 = FUN_100015208("AttackToIdleCombat",uVar3,0x12345678);
  *(undefined4 *)(lVar5 + 0x20) = uVar3;
  plVar6 = (long *)thunk_FUN_10000e358();
  FUN_1003a985c(&local_50,plVar6);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x58))(plVar6);
  (**(code **)(*plVar6 + 0x48))(plVar6,"Effect_LanceBall_Lance_B_Impact");
  plVar6 = (long *)thunk_FUN_10000e5dc();
  FUN_1003a985c(&local_50,plVar6);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x58))(plVar6,"Sound_LanceBall_Lance_Ability_B_Sweep");
  uVar4 = FUN_1010a1520();
  lVar5 = FUN_1010a0e0c(uVar4,0,"*KindredSoundBalance*",0);
  FUN_1003cec98(*(undefined4 *)(lVar5 + 0x520));
  (**(code **)(*plVar6 + 0x28))(plVar6);
  lVar5 = FUN_10000ceb8();
  FUN_1003a985c(&local_50,lVar5);
  *(undefined4 *)(lVar5 + 0x2c) = 0x3e4ccccd;
  *(undefined8 *)(lVar5 + 0x10) = 0;
  lVar5 = FUN_1003e10f0();
  bVar1 = *(byte *)(lVar5 + 0xe5);
  uVar3 = _cosf(0x3fc90fdb);
  lVar5 = FUN_10000ed74();
  FUN_1003a985c(&local_50,lVar5);
  *(undefined8 *)(lVar5 + 0x18) = 0;
  *(undefined1 *)(lVar5 + 0x20) = 1;
  *(undefined8 *)(lVar5 + 0x24) = 0;
  *(undefined8 *)(lVar5 + 0x34) = 0;
  *(undefined8 *)(lVar5 + 0x2c) = 0;
  *(undefined4 *)(lVar5 + 0x3c) = 0;
  uVar4 = NEON_fmov(0xbf800000,4);
  *(undefined8 *)(lVar5 + 0x40) = uVar4;
  *(undefined4 *)(lVar5 + 0x48) = uVar3;
  *(undefined8 *)(lVar5 + 0x4c) = 0x3f266666bf800000;
  *(undefined1 *)(lVar5 + 0x54) = 0xff;
  *(undefined8 *)(lVar5 + 0x60) = 0xffffffff00000000;
  *(undefined8 *)(lVar5 + 0x58) = 0xffffffff00040000;
  *(byte *)(lVar5 + 0x6a) = bVar1 | 0x14;
  *(undefined2 *)(lVar5 + 0x68) = 0x6120;
  bVar2 = DAT_101d23a38 != '\0';
  *(code **)(lVar5 + 0x78) = FUN_1003cf11c;
  *(byte *)(lVar5 + 0xa8) = *(byte *)(lVar5 + 0xa8) & 0xf0 | bVar2;
  plVar6 = (long *)FUN_10000d7d0();
  FUN_1003a985c(&local_50,plVar6);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x50))(plVar6);
  local_60 = FUN_1003cf130;
  local_58 = 3;
  plVar6 = (long *)(**(code **)(*plVar6 + 0x10))(plVar6,&local_60);
  local_70 = FUN_1003cf144;
  local_68 = 3;
  plVar6 = (long *)(**(code **)(*plVar6 + 0x28))(plVar6,&local_70);
  (**(code **)(*plVar6 + 0x80))();
  uVar4 = FUN_10000c784();
  FUN_1003a985c(&local_50,uVar4);
  uVar4 = FUN_10000c6d4();
  FUN_1003a985c(&local_50,uVar4);
  lVar5 = FUN_10000ceb8();
  FUN_1003a985c(&local_50,lVar5);
  *(undefined4 *)(lVar5 + 0x2c) = 0x3e99999a;
  *(undefined8 *)(lVar5 + 0x10) = 0;
  lVar5 = FUN_10000d8b8();
  FUN_1003a985c(&local_50,lVar5);
  *(undefined1 *)(lVar5 + 0x10) = 0;
  lVar5 = FUN_10000ceb8();
  FUN_1003a985c(&local_50,lVar5);
  *(undefined4 *)(lVar5 + 0x2c) = 0x3e4ccccd;
  *(undefined8 *)(lVar5 + 0x10) = 0;
  lVar5 = FUN_10000dff8();
  FUN_1003a985c(&local_50,lVar5);
  *(undefined2 *)(lVar5 + 0x28) = 0x100;
  *(undefined8 *)(lVar5 + 0x30) = 0;
  uVar3 = FUN_1004d2524("Idle");
  uVar3 = FUN_100015208("Idle",uVar3,0x12345678);
  *(undefined4 *)(lVar5 + 0x10) = uVar3;
  *(undefined4 *)(lVar5 + 0x20) = 0;
  return local_50;
}




undefined8 FUN_100392f2c(void)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  code *local_40;
  undefined4 local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_30 = 0;
  uStack_28 = 0;
  lVar1 = FUN_10000d8b8();
  FUN_1003a985c(&local_30,lVar1);
  *(undefined1 *)(lVar1 + 0x10) = 1;
  lVar1 = FUN_10000ef8c();
  FUN_1003a985c(&local_30,lVar1);
  *(byte *)(lVar1 + 0x10) = *(byte *)(lVar1 + 0x10) & 0xe7 | 4;
  uVar2 = FUN_10000c6d4();
  FUN_1003a985c(&local_30,uVar2);
  plVar3 = (long *)thunk_FUN_10000e0ac();
  FUN_1003a985c(&local_30,plVar3);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x50))(plVar3,"Ability03");
  (**(code **)(*plVar3 + 0x18))(plVar3,"AttackToIdleCombat");
  plVar3 = (long *)thunk_FUN_10000e358();
  FUN_1003a985c(&local_30,plVar3);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x58))(plVar3);
  (**(code **)(*plVar3 + 0x48))(plVar3,"Effect_LanceBall_Lance_C_Roll");
  plVar3 = (long *)thunk_FUN_10000e5dc();
  FUN_1003a985c(&local_30,plVar3);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x58))(plVar3,"Sound_LanceBall_Lance_Ability_C");
  uVar2 = FUN_1010a1520();
  lVar1 = FUN_1010a0e0c(uVar2,0,"*KindredSoundBalance*",0);
  FUN_1003cec98(*(undefined4 *)(lVar1 + 0x524));
  (**(code **)(*plVar3 + 0x28))(plVar3);
  plVar3 = (long *)FUN_10000cd5c();
  FUN_1003a985c(&local_30,plVar3);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x88))(plVar3);
  local_40 = FUN_1003cf158;
  local_38 = 3;
  plVar3 = (long *)(**(code **)(*plVar3 + 0xa8))(plVar3,&local_40);
  (**(code **)(*plVar3 + 0xb0))(plVar3,1);
  lVar1 = FUN_10000ceb8();
  FUN_1003a985c(&local_30,lVar1);
  *(undefined4 *)(lVar1 + 0x2c) = 0x3f19999a;
  *(undefined8 *)(lVar1 + 0x10) = 0;
  uVar2 = FUN_10000f9c0();
  FUN_1003a985c(&local_30,uVar2);
  lVar1 = FUN_10000d8b8();
  FUN_1003a985c(&local_30,lVar1);
  *(undefined1 *)(lVar1 + 0x10) = 0;
  return local_30;
}




void FUN_100393120(void)

{
  FUN_1003cf16c("Attack","Effect_Sanfeng_AA",0);
  return;
}




void FUN_100393138(void)

{
  FUN_1003cf16c("AltAttack","Effect_Sanfeng_AA_Alt",0);
  return;
}




void FUN_100393150(void)

{
  FUN_1003cf16c("CritAttack","Effect_Sanfeng_AA_Crit",2);
  return;
}




undefined8 FUN_100393168(void)

{
  char cVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  uint uVar6;
  char *pcVar7;
  code *local_50;
  undefined4 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  local_40 = 0;
  uStack_38 = 0;
  lVar2 = FUN_10000d8b8();
  FUN_1003a985c(&local_40,lVar2);
  *(undefined1 *)(lVar2 + 0x10) = 1;
  plVar3 = (long *)thunk_FUN_10000e5dc();
  FUN_1003a985c(&local_40,plVar3);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x58))(plVar3,"Sound_Sanfeng_A_Stance");
  uVar4 = FUN_1010a1520();
  lVar2 = FUN_1010a0e0c(uVar4,0,"*KindredSoundBalance*",0);
  FUN_1003cf3e8(*(undefined4 *)(lVar2 + 0x5b0));
  (**(code **)(*plVar3 + 0x28))(plVar3);
  uVar4 = FUN_10000c6d4();
  FUN_1003a985c(&local_40,uVar4);
  lVar2 = FUN_10000c8e8();
  FUN_1003a985c(&local_40,lVar2);
  lVar5 = FUN_10049ac04(lVar2 + 0x10);
  if (PTR_s_Ability__Sanfeng__A_101859eb8 == (undefined *)0x0) {
    uVar6 = 0;
  }
  else {
    uVar6 = 0x811c9dc5;
    cVar1 = *PTR_s_Ability__Sanfeng__A_101859eb8;
    pcVar7 = PTR_s_Ability__Sanfeng__A_101859eb8;
    while (cVar1 != '\0') {
      pcVar7 = pcVar7 + 1;
      uVar6 = (uVar6 ^ (int)cVar1) * 0x1000193;
      cVar1 = *pcVar7;
    }
  }
  *(uint *)(lVar5 + 8) = uVar6;
  plVar3 = (long *)FUN_10000bdf0();
  FUN_1003a985c(lVar2 + 0xb0,plVar3);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x50))
                             (plVar3,PTR_s_Buff_Sanfeng_AbilityOverdrive_De_10185b5f0);
  local_50 = FUN_1003cf44c;
  local_48 = 3;
  (**(code **)(*plVar3 + 0x18))(plVar3,&local_50);
  plVar3 = (long *)thunk_FUN_10000e0ac();
  FUN_1003a985c(&local_40,plVar3);
  (**(code **)(*plVar3 + 0x50))(plVar3,"Ability01_Stance");
  plVar3 = (long *)FUN_10000bdf0();
  FUN_1003a985c(&local_40,plVar3);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x50))
                             (plVar3,PTR_s_Buff_Sanfeng_PerkDamageReduction_10185b5f8);
  local_50 = FUN_1003cf460;
  local_48 = 3;
  (**(code **)(*plVar3 + 0x18))(plVar3,&local_50);
  plVar3 = (long *)FUN_10000bdf0();
  FUN_1003a985c(&local_40,plVar3);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x50))
                             (plVar3,PTR_s_Buff_Sanfeng_A_InCounterStance_10185b600);
  local_50 = FUN_1003cf474;
  local_48 = 3;
  (**(code **)(*plVar3 + 0x18))(plVar3,&local_50);
  lVar2 = FUN_10000d8b8();
  FUN_1003a985c(&local_40,lVar2);
  *(undefined1 *)(lVar2 + 0x10) = 0;
  uVar4 = FUN_10000d378();
  FUN_1003a985c(&local_40,uVar4);
  lVar2 = FUN_10000ceb8();
  FUN_1003a985c(&local_40,lVar2);
  *(code **)(lVar2 + 0x20) = FUN_1003cf474;
  *(undefined8 *)(lVar2 + 0x10) = 0;
  lVar2 = FUN_10000ceb8();
  FUN_1003a985c(&local_40,lVar2);
  *(code **)(lVar2 + 0x20) = FUN_1003cf488;
  *(undefined8 *)(lVar2 + 0x10) = 0;
  return local_40;
}




undefined8 FUN_100393408(void)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  code *local_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  
  local_90 = 0;
  uStack_88 = 0;
  plVar1 = (long *)FUN_10000c458();
  FUN_1003a985c(&local_90,plVar1);
  puVar2 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1);
  (**(code **)*puVar2)(puVar2,PTR_s_Ability__Sanfeng__A_101859eb8);
  lVar3 = FUN_10000d8b8();
  FUN_1003a985c(&local_90,lVar3);
  *(undefined1 *)(lVar3 + 0x10) = 1;
  lVar3 = FUN_10000ef8c();
  FUN_1003a985c(&local_90,lVar3);
  *(byte *)(lVar3 + 0x10) = *(byte *)(lVar3 + 0x10) & 0xe7 | 4;
  plVar1 = (long *)FUN_10000c5ec();
  FUN_1003a985c(&local_90,plVar1);
  (**(code **)(*plVar1 + 0x50))(plVar1,PTR_s_Buff_Sanfeng_A_PostStanceAttack_10185b608);
  plVar1 = (long *)thunk_FUN_10000e0ac();
  FUN_1003a985c(&local_90,plVar1);
  (**(code **)(*plVar1 + 0x50))(plVar1,"Ability01_ParryAndDash");
  plVar1 = (long *)thunk_FUN_10000e5dc();
  FUN_1003a985c(&local_90,plVar1);
  plVar1 = (long *)(**(code **)(*plVar1 + 0x58))(plVar1,"Sound_Sanfeng_A_DashPrep");
  uVar4 = FUN_1010a1520();
  lVar3 = FUN_1010a0e0c(uVar4,0,"*KindredSoundBalance*",0);
  FUN_1003cf3e8(*(undefined4 *)(lVar3 + 0x5b0));
  (**(code **)(*plVar1 + 0x28))(plVar1);
  lVar3 = FUN_10000ceb8();
  FUN_1003a985c(&local_90,lVar3);
  *(undefined4 *)(lVar3 + 0x2c) = 0x3e4ccccd;
  *(undefined8 *)(lVar3 + 0x10) = 0;
  plVar1 = (long *)thunk_FUN_10000e358();
  FUN_1003a985c(&local_90,plVar1);
  plVar1 = (long *)(**(code **)(*plVar1 + 0x58))(plVar1);
  plVar1 = (long *)(**(code **)(*plVar1 + 0x48))(plVar1,"Effect_Sanfeng_A_BeginDash");
  plVar1 = (long *)(**(code **)(*plVar1 + 0xb0))(plVar1,1);
  (**(code **)(*plVar1 + 0x78))(plVar1,1);
  lVar3 = FUN_10000c8e8();
  FUN_1003a985c(&local_90,lVar3);
  lVar5 = FUN_10049ab34(lVar3 + 0x10);
  *(undefined **)(lVar5 + 8) = PTR_s_Buff_Sanfeng_A_SuccessfulCounter_10185b610;
  plVar1 = (long *)FUN_10000cd5c();
  FUN_1003a985c(lVar3 + 0xb0,plVar1);
  plVar1 = (long *)(**(code **)(*plVar1 + 0x68))(0,0x400ccccd,0x40533333,0x40333333,plVar1);
  plVar1 = (long *)(**(code **)(*plVar1 + 0xb0))(plVar1,1);
  local_a0._0_4_ = 0x42200000;
  local_98 = 1;
  plVar1 = (long *)(**(code **)(*plVar1 + 0xa0))(plVar1,&local_a0);
  (**(code **)(*plVar1 + 0xb8))(0x41700000);
  plVar1 = (long *)FUN_10000cd5c();
  FUN_1003a985c(lVar3 + 200,plVar1);
  plVar1 = (long *)(**(code **)(*plVar1 + 0x68))(0,0x400ccccd,0x40533333,0x40333333,plVar1);
  plVar1 = (long *)(**(code **)(*plVar1 + 0xb0))(plVar1,1);
  local_a0 = (code *)CONCAT44(local_a0._4_4_,0x41c80000);
  local_98 = 1;
  plVar1 = (long *)(**(code **)(*plVar1 + 0xa0))(plVar1,&local_a0);
  (**(code **)(*plVar1 + 0xb8))(0x41700000);
  lVar3 = FUN_10000ceb8();
  FUN_1003a985c(&local_90,lVar3);
  *(undefined4 *)(lVar3 + 0x2c) = 0x3dcccccd;
  *(undefined8 *)(lVar3 + 0x10) = 0;
  uVar4 = FUN_10000f9c0();
  FUN_1003a985c(&local_90,uVar4);
  uVar4 = FUN_10000bc94();
  FUN_1003a985c(&local_90,uVar4);
  lVar5 = FUN_10000c8e8();
  FUN_1003a985c(&local_90,lVar5);
  lVar3 = FUN_10049ab34(lVar5 + 0x10);
  *(undefined **)(lVar3 + 8) = PTR_s_Buff_Sanfeng_A_SuccessfulCounter_10185b610;
  lVar3 = lVar5 + 200;
  plVar1 = (long *)thunk_FUN_10000e0ac();
  FUN_1003a985c(lVar3,plVar1);
  plVar1 = (long *)(**(code **)(*plVar1 + 0x50))(plVar1,"Attack");
  (**(code **)(*plVar1 + 0x18))(plVar1,"AttackToIdleCombat");
  plVar1 = (long *)thunk_FUN_10000e5dc();
  FUN_1003a985c(lVar3,plVar1);
  plVar1 = (long *)(**(code **)(*plVar1 + 0x58))(plVar1,"Sound_Sanfeng_A_NormalAttack");
  uVar4 = FUN_1010a1520();
  lVar6 = FUN_1010a0e0c(uVar4,0,"*KindredSoundBalance*",0);
  FUN_1003cf3e8(*(undefined4 *)(lVar6 + 0x5b0));
  (**(code **)(*plVar1 + 0x28))(plVar1);
  lVar6 = FUN_10000ceb8();
  FUN_1003a985c(lVar3,lVar6);
  *(undefined4 *)(lVar6 + 0x2c) = 0x3e4ccccd;
  *(undefined8 *)(lVar6 + 0x10) = 0;
  plVar1 = (long *)FUN_10000cb8c();
  FUN_1003a985c(lVar3,plVar1);
  plVar1 = (long *)(**(code **)(*plVar1 + 0x50))(plVar1);
  plVar1 = (long *)(**(code **)(*plVar1 + 0x38))(plVar1,"DAMAGE",0);
  (**(code **)(*plVar1 + 0x70))(plVar1,1);
  lVar5 = lVar5 + 0xb0;
  plVar1 = (long *)thunk_FUN_10000e0ac();
  FUN_1003a985c(lVar5,plVar1);
  plVar1 = (long *)(**(code **)(*plVar1 + 0x50))(plVar1,"Ability01_Attack");
  (**(code **)(*plVar1 + 0x18))(plVar1,"AttackToIdleCombat");
  plVar1 = (long *)thunk_FUN_10000e358();
  FUN_1003a985c(lVar5,plVar1);
  plVar1 = (long *)(**(code **)(*plVar1 + 0x58))(plVar1);
  plVar1 = (long *)(**(code **)(*plVar1 + 0x48))(plVar1,"Effect_Sanfeng_A_CounterAttack");
  (**(code **)(*plVar1 + 0xb0))(plVar1,1);
  iVar7 = 5;
  do {
    plVar1 = (long *)thunk_FUN_10000e5dc();
    FUN_1003a985c(lVar5,plVar1);
    plVar1 = (long *)(**(code **)(*plVar1 + 0x58))(plVar1,"Sound_Sanfeng_A_CounterAttack");
    plVar1 = (long *)(**(code **)(*plVar1 + 0x18))(plVar1,"Sound_Sanfeng_Default_Impact_01");
    plVar1 = (long *)(**(code **)(*plVar1 + 0x18))(plVar1,"Sound_Sanfeng_Default_Impact_02");
    plVar1 = (long *)(**(code **)(*plVar1 + 0x18))(plVar1,"Sound_Sanfeng_Default_Impact_03");
    uVar4 = FUN_1010a1520();
    lVar3 = FUN_1010a0e0c(uVar4,0,"*KindredSoundBalance*",0);
    FUN_1003cf3e8(*(undefined4 *)(lVar3 + 0x5b0));
    (**(code **)(*plVar1 + 0x28))(plVar1);
    plVar1 = (long *)FUN_10000cb8c();
    FUN_1003a985c(lVar5,plVar1);
    plVar1 = (long *)(**(code **)(*plVar1 + 0x50))(plVar1);
    plVar1 = (long *)(**(code **)(*plVar1 + 0x38))(plVar1,"DAMAGE",0);
    plVar1 = (long *)(**(code **)(*plVar1 + 0x70))(plVar1,1);
    local_a0 = (code *)CONCAT44(local_a0._4_4_,0x3e4ccccd);
    local_98 = 1;
    (**(code **)(*plVar1 + 0x88))(plVar1,&local_a0);
    lVar3 = FUN_10000ceb8();
    FUN_1003a985c(lVar5,lVar3);
    *(undefined4 *)(lVar3 + 0x2c) = 0x3dcccccd;
    *(undefined8 *)(lVar3 + 0x10) = 0;
    plVar1 = (long *)FUN_10000bed8();
    FUN_1003a985c(lVar5,plVar1);
    plVar1 = (long *)(**(code **)(*plVar1 + 0x70))(plVar1,PTR_s_Buff_Stunned_10185a208);
    local_a0 = FUN_1003cf49c;
    local_98 = 3;
    (**(code **)(*plVar1 + 0x18))(plVar1,&local_a0);
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  uVar4 = FUN_10000c784();
  FUN_1003a985c(&local_90,uVar4);
  plVar1 = (long *)FUN_10000c5ec();
  FUN_1003a985c(&local_90,plVar1);
  (**(code **)(*plVar1 + 0x50))(plVar1,PTR_s_Buff_Sanfeng_A_SuccessfulCounter_10185b610);
  lVar3 = FUN_10000d8b8();
  FUN_1003a985c(&local_90,lVar3);
  *(undefined1 *)(lVar3 + 0x10) = 0;
  return local_90;
}




undefined8 FUN_100393b24(void)

{
  char cVar1;
  byte bVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  uint uVar7;
  char *pcVar8;
  code *local_50;
  undefined4 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  local_40 = 0;
  uStack_38 = 0;
  lVar3 = FUN_10000d8b8();
  FUN_1003a985c(&local_40,lVar3);
  *(undefined1 *)(lVar3 + 0x10) = 1;
  lVar3 = FUN_10000ef8c();
  FUN_1003a985c(&local_40,lVar3);
  *(byte *)(lVar3 + 0x10) = *(byte *)(lVar3 + 0x10) & 0xe7 | 4;
  plVar4 = (long *)thunk_FUN_10000e358();
  FUN_1003a985c(&local_40,plVar4);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x58))(plVar4);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x48))(plVar4,"Effect_Sanfeng_B_Warning");
  (**(code **)(*plVar4 + 0xb0))(plVar4,1);
  lVar3 = FUN_10000c8e8();
  FUN_1003a985c(&local_40,lVar3);
  lVar5 = FUN_10049ac04(lVar3 + 0x10);
  if (PTR_s_Ability__Sanfeng__B_101859ec8 == (undefined *)0x0) {
    uVar7 = 0;
  }
  else {
    uVar7 = 0x811c9dc5;
    cVar1 = *PTR_s_Ability__Sanfeng__B_101859ec8;
    pcVar8 = PTR_s_Ability__Sanfeng__B_101859ec8;
    while (cVar1 != '\0') {
      pcVar8 = pcVar8 + 1;
      uVar7 = (uVar7 ^ (int)cVar1) * 0x1000193;
      cVar1 = *pcVar8;
    }
  }
  *(uint *)(lVar5 + 8) = uVar7;
  plVar4 = (long *)FUN_10000bdf0();
  FUN_1003a985c(lVar3 + 0xb0,plVar4);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))
                             (plVar4,PTR_s_Buff_Sanfeng_AbilityOverdrive_De_10185b5f0);
  local_50 = FUN_1003cf66c;
  local_48 = 3;
  (**(code **)(*plVar4 + 0x18))(plVar4,&local_50);
  plVar4 = (long *)FUN_10000bdf0();
  FUN_1003a985c(&local_40,plVar4);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))
                             (plVar4,PTR_s_Buff_Sanfeng_PerkDamageReduction_10185b5f8);
  local_50 = FUN_1003cf460;
  local_48 = 3;
  (**(code **)(*plVar4 + 0x18))(plVar4,&local_50);
  plVar4 = (long *)FUN_10000bdf0();
  FUN_1003a985c(&local_40,plVar4);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))(plVar4,PTR_s_Buff_Sanfeng_B_Charging_10185b618);
  local_50 = FUN_1003cf680;
  local_48 = 3;
  (**(code **)(*plVar4 + 0x18))(plVar4,&local_50);
  plVar4 = (long *)thunk_FUN_10000e0ac();
  FUN_1003a985c(&local_40,plVar4);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))(plVar4,"Ability02");
  (**(code **)(*plVar4 + 0x18))(plVar4,"AttackToIdleCombat");
  plVar4 = (long *)thunk_FUN_10000e5dc();
  FUN_1003a985c(&local_40,plVar4);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x58))(plVar4,"Sound_Sanfeng_B_Channel");
  uVar6 = FUN_1010a1520();
  lVar3 = FUN_1010a0e0c(uVar6,0,"*KindredSoundBalance*",0);
  FUN_1003cf3e8(*(undefined4 *)(lVar3 + 0x5b8));
  (**(code **)(*plVar4 + 0x28))(plVar4);
  lVar3 = FUN_10000ceb8();
  FUN_1003a985c(&local_40,lVar3);
  *(code **)(lVar3 + 0x20) = FUN_1003cf680;
  *(undefined8 *)(lVar3 + 0x10) = 0;
  plVar4 = (long *)thunk_FUN_10000e358();
  FUN_1003a985c(&local_40,plVar4);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x58))(plVar4);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x48))(plVar4,"Effect_Sanfeng_B_Impact");
  (**(code **)(*plVar4 + 0xb0))(plVar4,1);
  lVar3 = FUN_1003e10f0();
  bVar2 = *(byte *)(lVar3 + 0xe5);
  lVar3 = FUN_10000ecbc();
  FUN_1003a985c(&local_40,lVar3);
  *(code **)(lVar3 + 0x70) = FUN_1003cf4b0;
  *(code **)(lVar3 + 0x78) = FUN_1003cf580;
  *(undefined4 *)(lVar3 + 0x88) = 0x40533333;
  *(undefined8 *)(lVar3 + 0x18) = 0;
  *(undefined1 *)(lVar3 + 0x20) = 1;
  *(undefined8 *)(lVar3 + 0x24) = 0;
  *(undefined8 *)(lVar3 + 0x34) = 0;
  *(undefined8 *)(lVar3 + 0x2c) = 0;
  *(undefined4 *)(lVar3 + 0x3c) = 0;
  *(undefined8 *)(lVar3 + 0x48) = 0xbf800000c0000000;
  *(undefined8 *)(lVar3 + 0x40) = 0xbf800000bf800000;
  *(undefined4 *)(lVar3 + 0x50) = 0x3f400000;
  *(undefined1 *)(lVar3 + 0x54) = 0xff;
  *(undefined8 *)(lVar3 + 0x60) = 0xffffffff00000000;
  *(undefined8 *)(lVar3 + 0x58) = 0xffffffff00040000;
  *(byte *)(lVar3 + 0x6a) = bVar2 | 0x14;
  *(undefined2 *)(lVar3 + 0x68) = 0x6120;
  plVar4 = (long *)FUN_10000cb8c();
  FUN_1003a985c(&local_40,plVar4);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))(plVar4);
  (**(code **)(*plVar4 + 0x38))(plVar4,"DAMAGE",1);
  uVar6 = FUN_10000c784();
  FUN_1003a985c(&local_40,uVar6);
  plVar4 = (long *)thunk_FUN_10000e5dc();
  FUN_1003a985c(&local_40,plVar4);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x58))(plVar4,"Sound_Sanfeng_B_Attack");
  uVar6 = FUN_1010a1520();
  lVar3 = FUN_1010a0e0c(uVar6,0,"*KindredSoundBalance*",0);
  FUN_1003cf3e8(*(undefined4 *)(lVar3 + 0x5b8));
  (**(code **)(*plVar4 + 0x28))(plVar4);
  lVar3 = FUN_10000d8b8();
  FUN_1003a985c(&local_40,lVar3);
  *(undefined1 *)(lVar3 + 0x10) = 0;
  return local_40;
}




undefined8 FUN_100393f84(void)

{
  byte bVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  undefined8 *puVar6;
  int iVar7;
  undefined4 local_e0 [2];
  undefined4 local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined2 local_ab;
  undefined1 local_a9;
  undefined3 local_a8;
  undefined5 uStack_a5;
  undefined4 local_a0;
  undefined7 uStack_9c;
  undefined8 local_95;
  undefined4 local_8d;
  undefined8 local_88;
  undefined8 uStack_80;
  
  local_88 = 0;
  uStack_80 = 0;
  lVar2 = FUN_10000d8b8();
  FUN_1003a985c(&local_88,lVar2);
  *(undefined1 *)(lVar2 + 0x10) = 1;
  uVar3 = FUN_10000c6d4();
  FUN_1003a985c(&local_88,uVar3);
  plVar4 = (long *)thunk_FUN_10000e0ac();
  FUN_1003a985c(&local_88,plVar4);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))(plVar4,"Ability03");
  (**(code **)(*plVar4 + 0x18))(plVar4,"AttackToIdleCombat");
  plVar4 = (long *)thunk_FUN_10000e5dc();
  FUN_1003a985c(&local_88,plVar4);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x58))(plVar4,"Sound_Sanfeng_C_Channel");
  uVar3 = FUN_1010a1520();
  lVar2 = FUN_1010a0e0c(uVar3,0,"*KindredSoundBalance*",0);
  FUN_1003cf3e8(*(undefined4 *)(lVar2 + 0x5bc));
  (**(code **)(*plVar4 + 0x28))(plVar4);
  plVar4 = (long *)thunk_FUN_10000e358();
  FUN_1003a985c(&local_88,plVar4);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x58))(plVar4);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x48))(plVar4,"Effect_Sanfeng_C_BeginChannel");
  plVar4 = (long *)(**(code **)(*plVar4 + 0x78))(plVar4,1);
  (**(code **)(*plVar4 + 0xb0))(plVar4,1);
  plVar4 = (long *)FUN_10000bdf0();
  FUN_1003a985c(&local_88,plVar4);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))
                             (plVar4,PTR_s_Buff_Sanfeng_PerkDamageReduction_10185b5f8);
  local_a8 = 0x3cf460;
  uStack_a5 = 0x100;
  iVar7 = 3;
  local_a0 = 3;
  (**(code **)(*plVar4 + 0x18))(plVar4,&local_a8);
  plVar4 = (long *)FUN_10000bdf0();
  FUN_1003a985c(&local_88,plVar4);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))(plVar4,PTR_s_Buff_Sanfeng_C_Charging_10185b628);
  local_a8 = 0x3cf73c;
  uStack_a5 = 0x100;
  local_a0 = 3;
  (**(code **)(*plVar4 + 0x18))(plVar4,&local_a8);
  lVar2 = FUN_10000ceb8();
  FUN_1003a985c(&local_88,lVar2);
  *(undefined4 *)(lVar2 + 0x2c) = 0x3f000000;
  *(undefined8 *)(lVar2 + 0x10) = 0;
  plVar4 = (long *)thunk_FUN_10000e5dc();
  FUN_1003a985c(&local_88,plVar4);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x58))(plVar4,"Sound_Sanfeng_C_Attack");
  uVar3 = FUN_1010a1520();
  lVar2 = FUN_1010a0e0c(uVar3,0,"*KindredSoundBalance*",0);
  FUN_1003cf3e8(*(undefined4 *)(lVar2 + 0x5bc));
  (**(code **)(*plVar4 + 0x28))(plVar4);
  lVar2 = FUN_10000ceb8();
  FUN_1003a985c(&local_88,lVar2);
  *(undefined4 *)(lVar2 + 0x2c) = 0x3f666666;
  *(undefined8 *)(lVar2 + 0x10) = 0;
  plVar4 = (long *)thunk_FUN_10000e358();
  FUN_1003a985c(&local_88,plVar4);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x58))(plVar4);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x48))(plVar4,"Effect_Sanfeng_C_PullInAndStun");
  plVar4 = (long *)(**(code **)(*plVar4 + 0x78))(plVar4,1);
  (**(code **)(*plVar4 + 0xb0))(plVar4,1);
  puVar6 = (undefined8 *)((ulong)&local_a8 | 3);
  uStack_a5 = 0;
  local_95 = 0;
  local_a0 = 0;
  uStack_9c = 0;
  local_8d = 0;
  lVar2 = FUN_1003e10f0();
  bVar1 = *(byte *)(lVar2 + 0xe5) | 0x14;
  plVar4 = (long *)FUN_10000bdf0();
  FUN_1003a985c(&local_88,plVar4);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))
                             (plVar4,PTR_s_Buff_Sanfeng_PerkDamageReduction_10185b5f8);
  local_c0 = 0x3ecccccd;
  local_b8 = 1;
  (**(code **)(*plVar4 + 0x18))(plVar4,&local_c0);
  lVar2 = FUN_10000ed74();
  FUN_1003a985c(&local_88,lVar2);
  *(undefined8 *)(lVar2 + 0x18) = 0;
  *(undefined1 *)(lVar2 + 0x20) = 1;
  *(undefined8 *)(lVar2 + 0x24) = 0;
  *(undefined8 *)(lVar2 + 0x34) = 0;
  *(undefined8 *)(lVar2 + 0x2c) = 0;
  *(undefined4 *)(lVar2 + 0x3c) = 0;
  *(undefined8 *)(lVar2 + 0x48) = 0xbf800000c0000000;
  *(undefined8 *)(lVar2 + 0x40) = 0xbf800000bf800000;
  *(undefined4 *)(lVar2 + 0x50) = 0x3f266666;
  *(undefined1 *)(lVar2 + 0x54) = 0xff;
  *(undefined8 *)(lVar2 + 0x60) = 0xffffffff00000000;
  *(undefined8 *)(lVar2 + 0x58) = 0xffffffff00040000;
  *(byte *)(lVar2 + 0x6a) = bVar1;
  *(undefined2 *)(lVar2 + 0x68) = 0x6120;
  *(code **)(lVar2 + 0x78) = FUN_1003cf750;
  *(byte *)(lVar2 + 0xa8) = *(byte *)(lVar2 + 0xa8) & 0xf0 | 1;
  plVar4 = (long *)FUN_10000d7d0();
  FUN_1003a985c(&local_88,plVar4);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))(plVar4);
  local_c0 = 0x42700000;
  local_b8 = 1;
  plVar4 = (long *)(**(code **)(*plVar4 + 0x10))(plVar4,&local_c0);
  local_d0._0_4_ = 0x3cf694;
  local_d0._4_4_ = 1;
  local_c8 = 4;
  plVar4 = (long *)(**(code **)(*plVar4 + 0x28))(plVar4,&local_d0);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x70))();
  (**(code **)(*plVar4 + 0x50))();
  plVar4 = (long *)FUN_10000cb8c();
  FUN_1003a985c(&local_88,plVar4);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))(plVar4);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x38))(plVar4,"DAMAGE",2);
  _local_c0 = CONCAT44(uStack_bc,0x3eb33333);
  local_b8 = 1;
  (**(code **)(*plVar4 + 0x88))(plVar4,&local_c0);
  plVar4 = (long *)FUN_10000bed8();
  FUN_1003a985c(&local_88,plVar4);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x70))(plVar4,PTR_s_Buff_Stunned_10185a208);
  local_c0 = 0x3cf764;
  uStack_bc = 1;
  local_b8 = 3;
  (**(code **)(*plVar4 + 0x18))(plVar4,&local_c0);
  plVar4 = (long *)thunk_FUN_10000f1a0();
  FUN_1003a985c(&local_88,plVar4);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x60))(plVar4);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x10))(0x3df5c28f);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x18))(0x3e4ccccd);
  (**(code **)(*plVar4 + 0x20))(0x41400000);
  uVar3 = FUN_10000c784();
  FUN_1003a985c(&local_88,uVar3);
  lVar2 = FUN_10000ceb8();
  FUN_1003a985c(&local_88,lVar2);
  *(undefined4 *)(lVar2 + 0x2c) = 0x3e99999a;
  *(undefined8 *)(lVar2 + 0x10) = 0;
  plVar4 = (long *)thunk_FUN_10000e358();
  FUN_1003a985c(&local_88,plVar4);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x58))(plVar4);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x48))(plVar4,"Effect_Sanfeng_C_Attacking");
  plVar4 = (long *)(**(code **)(*plVar4 + 0x78))(plVar4,1);
  plVar4 = (long *)(**(code **)(*plVar4 + 0xb0))(plVar4,1);
  (**(code **)(*plVar4 + 0x90))();
  do {
    plVar4 = (long *)thunk_FUN_10000e5dc();
    FUN_1003a985c(&local_88,plVar4);
    plVar4 = (long *)(**(code **)(*plVar4 + 0x58))(plVar4,"Sound_Sanfeng_C_Suction");
    plVar4 = (long *)(**(code **)(*plVar4 + 0x18))(plVar4,"Sound_Sanfeng_Default_Impact_01");
    plVar4 = (long *)(**(code **)(*plVar4 + 0x18))(plVar4,"Sound_Sanfeng_Crit_Impact_01");
    plVar4 = (long *)(**(code **)(*plVar4 + 0x18))(plVar4,"Sound_Sanfeng_Default_Impact_02");
    plVar4 = (long *)(**(code **)(*plVar4 + 0x18))(plVar4,"Sound_Sanfeng_Crit_Impact_02");
    uVar3 = FUN_1010a1520();
    lVar2 = FUN_1010a0e0c(uVar3,0,"*KindredSoundBalance*",0);
    FUN_1003cf3e8(*(undefined4 *)(lVar2 + 0x5c0));
    (**(code **)(*plVar4 + 0x28))(plVar4);
    lVar2 = FUN_10000ed74();
    FUN_1003a985c(&local_88,lVar2);
    *(undefined8 *)(lVar2 + 0x18) = 0;
    *(undefined1 *)(lVar2 + 0x20) = 1;
    uVar3 = *puVar6;
    *(undefined8 *)(lVar2 + 0x2c) = puVar6[1];
    *(undefined8 *)(lVar2 + 0x24) = uVar3;
    uVar3 = *(undefined8 *)((long)puVar6 + 0xc);
    *(undefined8 *)(lVar2 + 0x38) = *(undefined8 *)((long)puVar6 + 0x14);
    *(undefined8 *)(lVar2 + 0x30) = uVar3;
    *(undefined8 *)(lVar2 + 0x48) = 0xbf800000c0000000;
    *(undefined8 *)(lVar2 + 0x40) = 0xbf800000bf800000;
    *(undefined4 *)(lVar2 + 0x50) = 0x3f266666;
    *(undefined1 *)(lVar2 + 0x54) = 0xff;
    *(undefined2 *)(lVar2 + 0x55) = local_ab;
    *(undefined1 *)(lVar2 + 0x57) = local_a9;
    *(undefined8 *)(lVar2 + 0x60) = 0xffffffff00000000;
    *(undefined8 *)(lVar2 + 0x58) = 0xffffffff00040000;
    *(byte *)(lVar2 + 0x6a) = bVar1;
    *(undefined2 *)(lVar2 + 0x68) = 0x6120;
    *(code **)(lVar2 + 0x78) = FUN_1003cf750;
    *(byte *)(lVar2 + 0xa8) = *(byte *)(lVar2 + 0xa8) & 0xf0 | 1;
    plVar4 = (long *)FUN_10000d7d0();
    FUN_1003a985c(&local_88,plVar4);
    plVar4 = (long *)(**(code **)(*plVar4 + 0x50))(plVar4);
    local_c0 = 0x42200000;
    local_b8 = 1;
    plVar4 = (long *)(**(code **)(*plVar4 + 0x10))(plVar4,&local_c0);
    local_d0._0_4_ = 0x3e19999a;
    local_c8 = 1;
    plVar4 = (long *)(**(code **)(*plVar4 + 0x20))(plVar4,&local_d0);
    local_e0[0] = 0x41200000;
    local_d8 = 1;
    (**(code **)(*plVar4 + 0x30))(plVar4,local_e0);
    plVar4 = (long *)FUN_10000cb8c();
    FUN_1003a985c(&local_88,plVar4);
    plVar4 = (long *)(**(code **)(*plVar4 + 0x50))(plVar4);
    plVar4 = (long *)(**(code **)(*plVar4 + 0x38))(plVar4,"DAMAGE",2);
    local_c0 = 0x3dcccccd;
    local_b8 = 1;
    (**(code **)(*plVar4 + 0x88))(plVar4,&local_c0);
    plVar4 = (long *)thunk_FUN_10000f1a0();
    FUN_1003a985c(&local_88,plVar4);
    plVar4 = (long *)(**(code **)(*plVar4 + 0x60))(plVar4);
    plVar4 = (long *)(**(code **)(*plVar4 + 0x10))(0x3df5c28f);
    plVar4 = (long *)(**(code **)(*plVar4 + 0x18))(0x3e4ccccd);
    (**(code **)(*plVar4 + 0x20))(0x41400000);
    uVar3 = FUN_10000c784();
    FUN_1003a985c(&local_88,uVar3);
    lVar2 = FUN_10000ceb8();
    FUN_1003a985c(&local_88,lVar2);
    *(undefined4 *)(lVar2 + 0x2c) = 0x3e99999a;
    *(undefined8 *)(lVar2 + 0x10) = 0;
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  plVar4 = (long *)thunk_FUN_10000e358();
  FUN_1003a985c(&local_88,plVar4);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x58))(plVar4);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x48))(plVar4,"Effect_Sanfeng_C_PushBackOut");
  plVar4 = (long *)(**(code **)(*plVar4 + 0x78))(plVar4,1);
  (**(code **)(*plVar4 + 0xb0))(plVar4,1);
  plVar4 = (long *)thunk_FUN_10000e5dc();
  FUN_1003a985c(&local_88,plVar4);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x58))(plVar4,"Sound_Sanfeng_C_Finish");
  uVar3 = FUN_1010a1520();
  lVar2 = FUN_1010a0e0c(uVar3,0,"*KindredSoundBalance*",0);
  FUN_1003cf3e8(*(undefined4 *)(lVar2 + 0x5c0));
  (**(code **)(*plVar4 + 0x28))(plVar4);
  lVar2 = FUN_10000ed74();
  FUN_1003a985c(&local_88,lVar2);
  *(undefined8 *)(lVar2 + 0x18) = 0;
  *(undefined1 *)(lVar2 + 0x20) = 1;
  uVar3 = *puVar6;
  *(undefined8 *)(lVar2 + 0x2c) = puVar6[1];
  *(undefined8 *)(lVar2 + 0x24) = uVar3;
  uVar3 = *(undefined8 *)((long)puVar6 + 0xc);
  *(undefined8 *)(lVar2 + 0x38) = *(undefined8 *)((long)puVar6 + 0x14);
  *(undefined8 *)(lVar2 + 0x30) = uVar3;
  *(undefined8 *)(lVar2 + 0x48) = 0xbf800000c0000000;
  *(undefined8 *)(lVar2 + 0x40) = 0xbf800000bf800000;
  *(undefined4 *)(lVar2 + 0x50) = 0x3f266666;
  *(undefined1 *)(lVar2 + 0x54) = 0xff;
  *(undefined2 *)(lVar2 + 0x55) = local_ab;
  *(undefined1 *)(lVar2 + 0x57) = local_a9;
  *(undefined8 *)(lVar2 + 0x60) = 0xffffffff00000000;
  *(undefined8 *)(lVar2 + 0x58) = 0xffffffff00040000;
  *(byte *)(lVar2 + 0x6a) = bVar1;
  *(undefined2 *)(lVar2 + 0x68) = 0x6120;
  *(code **)(lVar2 + 0x78) = FUN_1003cf750;
  *(byte *)(lVar2 + 0xa8) = *(byte *)(lVar2 + 0xa8) & 0xf0 | 1;
  lVar2 = FUN_10000c8e8();
  FUN_1003a985c(&local_88,lVar2);
  lVar5 = FUN_10049ab34(lVar2 + 0x10);
  *(undefined **)(lVar5 + 8) = PTR_s_Buff_Sanfeng_Talent_TalentA_10185b620;
  plVar4 = (long *)FUN_10000d7d0();
  FUN_1003a985c(lVar2 + 200,plVar4);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))(plVar4);
  local_c0 = 0x42200000;
  local_b8 = 1;
  plVar4 = (long *)(**(code **)(*plVar4 + 0x10))(plVar4,&local_c0);
  local_d0 = (code *)CONCAT44(local_d0._4_4_,0x3fc00000);
  local_c8 = 1;
  (**(code **)(*plVar4 + 0x20))(plVar4,&local_d0);
  plVar4 = (long *)FUN_10000d7d0();
  FUN_1003a985c(lVar2 + 0xb0,plVar4);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))(plVar4);
  local_c0 = 0x42200000;
  local_b8 = 1;
  plVar4 = (long *)(**(code **)(*plVar4 + 0x10))(plVar4,&local_c0);
  local_d0 = FUN_1003cf6e4;
  local_c8 = 4;
  plVar4 = (long *)(**(code **)(*plVar4 + 0x20))(plVar4,&local_d0);
  (**(code **)(*plVar4 + 0x50))();
  plVar4 = (long *)FUN_10000bed8();
  FUN_1003a985c(&local_88,plVar4);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x70))(plVar4,PTR_s_Buff_Stunned_10185a208);
  local_c0 = 0x3e99999a;
  local_b8 = 1;
  (**(code **)(*plVar4 + 0x18))(plVar4,&local_c0);
  plVar4 = (long *)FUN_10000cb8c();
  FUN_1003a985c(&local_88,plVar4);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))(plVar4);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x38))(plVar4,"DAMAGE",2);
  _local_c0 = CONCAT44(uStack_bc,0x3eb33333);
  local_b8 = 1;
  (**(code **)(*plVar4 + 0x88))(plVar4,&local_c0);
  plVar4 = (long *)thunk_FUN_10000f1a0();
  FUN_1003a985c(&local_88,plVar4);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x60))(plVar4);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x10))(0x3e99999a);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x18))(0x3e4ccccd);
  (**(code **)(*plVar4 + 0x20))(0x41400000);
  uVar3 = FUN_10000c784();
  FUN_1003a985c(&local_88,uVar3);
  lVar2 = FUN_10000ceb8();
  FUN_1003a985c(&local_88,lVar2);
  *(undefined4 *)(lVar2 + 0x2c) = 0x3ecccccd;
  *(undefined8 *)(lVar2 + 0x10) = 0;
  lVar2 = FUN_10000d8b8();
  FUN_1003a985c(&local_88,lVar2);
  *(undefined1 *)(lVar2 + 0x10) = 0;
  return local_88;
}




void FUN_100394be8(undefined8 param_1,undefined8 param_2)

{
  FUN_1003cf778("Attack",param_2,0);
  return;
}




void FUN_100394bf8(undefined8 param_1,undefined8 param_2)

{
  FUN_1003cf778("AltAttack",param_2,0);
  return;
}




void FUN_100394c08(undefined8 param_1,undefined8 param_2)

{
  FUN_1003cf778("CritAttack",param_2,2);
  return;
}




undefined8 FUN_100394c18(void)

{
  undefined8 uVar1;
  undefined8 local_20;
  undefined8 uStack_18;
  
  local_20 = 0;
  uStack_18 = 0;
  uVar1 = FUN_10000f034();
  FUN_1003a985c(&local_20,uVar1);
  return local_20;
}




undefined8 FUN_100394c48(void)

{
  undefined8 uVar1;
  undefined8 local_20;
  undefined8 uStack_18;
  
  local_20 = 0;
  uStack_18 = 0;
  uVar1 = FUN_10000f034();
  FUN_1003a985c(&local_20,uVar1);
  return local_20;
}




undefined8 FUN_100394c78(void)

{
  undefined8 uVar1;
  undefined8 local_20;
  undefined8 uStack_18;
  
  local_20 = 0;
  uStack_18 = 0;
  uVar1 = FUN_10000f034();
  FUN_1003a985c(&local_20,uVar1);
  return local_20;
}




void FUN_100394ca8(void)

{
  FUN_1003cf848("Attack","Effect_Leo_SwingLeft",0);
  return;
}




void FUN_100394cc0(void)

{
  FUN_1003cf848("AltAttack","Effect_Leo_SwingRight",0);
  return;
}




void FUN_100394cd8(void)

{
  FUN_1003cf848("CritAttack","Effect_Leo_SwingCrit",2);
  return;
}




undefined8 FUN_100394cf0(void)

{
  byte bVar1;
  undefined *puVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined4 uVar8;
  code *local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  local_50 = 0;
  uStack_48 = 0;
  uVar4 = FUN_10000d8b8();
  FUN_1003a985c(&local_50,uVar4);
  lVar5 = FUN_10000ef8c();
  FUN_1003a985c(&local_50,lVar5);
  *(byte *)(lVar5 + 0x10) = *(byte *)(lVar5 + 0x10) & 0xe7 | 4;
  plVar6 = (long *)thunk_FUN_10000e0ac();
  FUN_1003a985c(&local_50,plVar6);
  (**(code **)(*plVar6 + 0x50))(plVar6,"Ability01");
  plVar6 = (long *)thunk_FUN_10000e5dc();
  FUN_1003a985c(&local_50,plVar6);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x58))(plVar6,"Sound_Leo_Ability_A_Cast");
  uVar4 = FUN_1010a1520();
  lVar5 = FUN_1010a0e0c(uVar4,0,"*KindredSoundBalance*",0);
  FUN_1003cfbd0(*(undefined4 *)(lVar5 + 0x604));
  (**(code **)(*plVar6 + 0x28))(plVar6);
  plVar6 = (long *)thunk_FUN_10000e358();
  FUN_1003a985c(&local_50,plVar6);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x58))(plVar6);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x48))(plVar6,"Effect_Leo_A_Impact");
  plVar6 = (long *)(**(code **)(*plVar6 + 0x78))(plVar6,0);
  (**(code **)(*plVar6 + 0xb0))(plVar6,0);
  plVar6 = (long *)thunk_FUN_10000e358();
  FUN_1003a985c(&local_50,plVar6);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x68))(plVar6,"Bone_Sword");
  plVar6 = (long *)(**(code **)(*plVar6 + 0x48))(plVar6,"Effect_Leo_Sword_Jets");
  plVar6 = (long *)(**(code **)(*plVar6 + 0x78))(plVar6,1);
  plVar6 = (long *)(**(code **)(*plVar6 + 0xb0))(plVar6,0);
  local_60 = (code *)CONCAT44(local_60._4_4_,0x3f666666);
  local_58 = 1;
  (**(code **)(*plVar6 + 0x60))(plVar6,&local_60);
  lVar5 = FUN_10000ceb8();
  FUN_1003a985c(&local_50,lVar5);
  *(code **)(lVar5 + 0x20) = FUN_1003cfc34;
  *(undefined8 *)(lVar5 + 0x10) = 0;
  plVar6 = (long *)thunk_FUN_10000e5dc();
  FUN_1003a985c(&local_50,plVar6);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x58))(plVar6,"Sound_Leo_Ability_A_Impact");
  uVar4 = FUN_1010a1520();
  lVar5 = FUN_1010a0e0c(uVar4,0,"*KindredSoundBalance*",0);
  FUN_1003cfbd0(*(undefined4 *)(lVar5 + 0x604));
  (**(code **)(*plVar6 + 0x28))(plVar6);
  lVar5 = FUN_1003e10f0();
  bVar1 = *(byte *)(lVar5 + 0xe5);
  uVar8 = _cosf(0x3f060a92);
  lVar5 = FUN_10000ed74();
  FUN_1003a985c(&local_50,lVar5);
  *(undefined8 *)(lVar5 + 0x18) = 0;
  *(undefined1 *)(lVar5 + 0x20) = 1;
  *(undefined8 *)(lVar5 + 0x24) = 0;
  *(undefined8 *)(lVar5 + 0x34) = 0;
  *(undefined8 *)(lVar5 + 0x2c) = 0;
  *(undefined4 *)(lVar5 + 0x3c) = 0;
  uVar4 = NEON_fmov(0xbf800000,4);
  *(undefined8 *)(lVar5 + 0x40) = uVar4;
  *(undefined4 *)(lVar5 + 0x48) = uVar8;
  *(undefined8 *)(lVar5 + 0x4c) = 0x3f266666bf800000;
  *(undefined1 *)(lVar5 + 0x54) = 0xff;
  *(undefined8 *)(lVar5 + 0x60) = 0xffffffff00000000;
  *(undefined8 *)(lVar5 + 0x58) = 0xffffffff00040000;
  *(byte *)(lVar5 + 0x6a) = bVar1 | 0x14;
  *(undefined2 *)(lVar5 + 0x68) = 0x6120;
  bVar3 = DAT_101d23a38 != '\0';
  *(undefined4 *)(lVar5 + 0xa4) = 0x40c00000;
  *(byte *)(lVar5 + 0xa8) = *(byte *)(lVar5 + 0xa8) & 0xf0 | bVar3;
  plVar6 = (long *)FUN_10000cb8c();
  FUN_1003a985c(&local_50,plVar6);
  (**(code **)(*plVar6 + 0x50))(plVar6);
  lVar5 = FUN_10000c838();
  FUN_1003a985c(&local_50,lVar5);
  puVar2 = PTR_s_Buff_Leo_C_DashAndEmpower_10185b660;
  *(ushort *)(lVar5 + 0x58) = *(ushort *)(lVar5 + 0x58) & 0xf00f | 0x20;
  *(undefined8 *)(lVar5 + 0x48) = 0;
  *(undefined8 *)(lVar5 + 0x50) = 0;
  *(undefined1 *)(lVar5 + 0x50) = 2;
  *(undefined **)(lVar5 + 0x40) = puVar2;
  plVar6 = (long *)FUN_10000bed8();
  FUN_1003a985c(lVar5 + 0x18,plVar6);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x70))(plVar6,PTR_s_Buff_Leo_A_BleedDoT_10185b668);
  local_60 = FUN_1003cfc48;
  local_58 = 3;
  (**(code **)(*plVar6 + 0x18))(plVar6,&local_60);
  lVar5 = FUN_10000c8e8();
  FUN_1003a985c(&local_50,lVar5);
  lVar7 = FUN_10049ab34(lVar5 + 0x10);
  *(undefined **)(lVar7 + 8) = PTR_s_Buff_Leo_Talent_TalentC_10185b670;
  plVar6 = (long *)FUN_10000c5ec();
  FUN_1003a985c(lVar5 + 200,plVar6);
  (**(code **)(*plVar6 + 0x50))(plVar6,PTR_s_Buff_Leo_C_DashAndEmpower_10185b660);
  lVar5 = FUN_10000ceb8();
  FUN_1003a985c(&local_50,lVar5);
  *(code **)(lVar5 + 0x20) = FUN_1003cfc5c;
  *(undefined8 *)(lVar5 + 0x10) = 0;
  lVar5 = FUN_10000d8b8();
  FUN_1003a985c(&local_50,lVar5);
  *(undefined1 *)(lVar5 + 0x10) = 0;
  return local_50;
}




undefined8 FUN_100395148(void)

{
  byte bVar1;
  bool bVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  code *local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  local_50 = 0;
  uStack_48 = 0;
  uVar3 = FUN_10000d8b8();
  FUN_1003a985c(&local_50,uVar3);
  lVar4 = FUN_10000ef8c();
  FUN_1003a985c(&local_50,lVar4);
  *(byte *)(lVar4 + 0x10) = *(byte *)(lVar4 + 0x10) & 0xe7 | 4;
  plVar5 = (long *)thunk_FUN_10000e0ac();
  FUN_1003a985c(&local_50,plVar5);
  (**(code **)(*plVar5 + 0x50))(plVar5,"Ability02_StartAndDash");
  plVar5 = (long *)thunk_FUN_10000e5dc();
  FUN_1003a985c(&local_50,plVar5);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x58))(plVar5,"Sound_Leo_Ability_B_Cast");
  uVar3 = FUN_1010a1520();
  lVar4 = FUN_1010a0e0c(uVar3,0,"*KindredSoundBalance*",0);
  FUN_1003cfbd0(*(undefined4 *)(lVar4 + 0x608));
  (**(code **)(*plVar5 + 0x28))(plVar5);
  lVar4 = FUN_10000ceb8();
  FUN_1003a985c(&local_50,lVar4);
  *(code **)(lVar4 + 0x20) = FUN_1003cfc70;
  *(undefined8 *)(lVar4 + 0x10) = 0;
  plVar5 = (long *)FUN_10000cd5c();
  FUN_1003a985c(&local_50,plVar5);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x90))(plVar5);
  local_60 = FUN_1003cfc84;
  local_58 = 3;
  plVar5 = (long *)(**(code **)(*plVar5 + 0xa0))(plVar5,&local_60);
  (**(code **)(*plVar5 + 0xb0))(plVar5,1);
  lVar4 = FUN_10000ceb8();
  FUN_1003a985c(&local_50,lVar4);
  *(undefined4 *)(lVar4 + 0x2c) = 0x3dcccccd;
  *(undefined8 *)(lVar4 + 0x10) = 0;
  uVar3 = FUN_10000f9c0();
  FUN_1003a985c(&local_50,uVar3);
  plVar5 = (long *)thunk_FUN_10000e0ac();
  FUN_1003a985c(&local_50,plVar5);
  (**(code **)(*plVar5 + 0x50))(plVar5,"Ability02_Swing");
  plVar5 = (long *)thunk_FUN_10000e358();
  FUN_1003a985c(&local_50,plVar5);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x58))(plVar5);
  (**(code **)(*plVar5 + 0x48))(plVar5,"Effect_Leo_B_Impact");
  plVar5 = (long *)thunk_FUN_10000e5dc();
  FUN_1003a985c(&local_50,plVar5);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x58))(plVar5,"Sound_Leo_Ability_B_Impact");
  uVar3 = FUN_1010a1520();
  lVar4 = FUN_1010a0e0c(uVar3,0,"*KindredSoundBalance*",0);
  FUN_1003cfbd0(*(undefined4 *)(lVar4 + 0x608));
  (**(code **)(*plVar5 + 0x28))(plVar5);
  lVar4 = FUN_1003e10f0();
  bVar1 = *(byte *)(lVar4 + 0xe5);
  lVar4 = FUN_10000ed74();
  FUN_1003a985c(&local_50,lVar4);
  *(undefined8 *)(lVar4 + 0x18) = 0;
  *(undefined1 *)(lVar4 + 0x20) = 1;
  *(undefined8 *)(lVar4 + 0x24) = 0;
  *(undefined8 *)(lVar4 + 0x34) = 0;
  *(undefined8 *)(lVar4 + 0x2c) = 0;
  *(undefined4 *)(lVar4 + 0x3c) = 0;
  *(undefined8 *)(lVar4 + 0x48) = 0xbf800000c0000000;
  *(undefined8 *)(lVar4 + 0x40) = 0xbf800000bf800000;
  *(undefined4 *)(lVar4 + 0x50) = 0x3f266666;
  *(undefined1 *)(lVar4 + 0x54) = 0xff;
  *(undefined8 *)(lVar4 + 0x60) = 0xffffffff00080000;
  *(undefined8 *)(lVar4 + 0x58) = 0xffffffff00040000;
  *(byte *)(lVar4 + 0x6a) = bVar1 | 0x14;
  *(undefined2 *)(lVar4 + 0x68) = 0x6120;
  bVar2 = DAT_101d23a38 != '\0';
  *(undefined4 *)(lVar4 + 0xa4) = 0x40400000;
  *(byte *)(lVar4 + 0xa8) = *(byte *)(lVar4 + 0xa8) & 0xf0 | bVar2;
  plVar5 = (long *)FUN_10000cb8c();
  FUN_1003a985c(&local_50,plVar5);
  (**(code **)(*plVar5 + 0x50))(plVar5);
  lVar4 = FUN_10000c8e8();
  FUN_1003a985c(&local_50,lVar4);
  lVar6 = FUN_10049ab34(lVar4 + 0x10);
  *(undefined **)(lVar6 + 8) = PTR_s_Buff_Leo_Talent_TalentB_10185b678;
  lVar6 = FUN_10000c8e8();
  FUN_1003a985c(lVar4 + 200,lVar6);
  lVar7 = FUN_10049ab34(lVar6 + 0x10);
  *(undefined **)(lVar7 + 8) = PTR_s_Buff_Leo_C_DashAndEmpower_10185b660;
  plVar5 = (long *)FUN_10000bed8();
  FUN_1003a985c(lVar4 + 0xb0,plVar5);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x70))(plVar5,PTR_s_Buff_Taunt_10185a978);
  local_60 = FUN_1003cfc98;
  local_58 = 3;
  (**(code **)(*plVar5 + 0x18))(plVar5,&local_60);
  plVar5 = (long *)FUN_10000bed8();
  FUN_1003a985c(lVar6 + 0xb0,plVar5);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x70))(plVar5,PTR_s_Buff_Leo_B_Root_10185b680);
  local_60 = FUN_1003cfc98;
  local_58 = 3;
  (**(code **)(*plVar5 + 0x18))(plVar5,&local_60);
  plVar5 = (long *)FUN_10000bed8();
  FUN_1003a985c(lVar6 + 200,plVar5);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x70))(plVar5,PTR_s_Buff_Leo_B_Slow_10185b688);
  local_60 = FUN_1003cfc98;
  local_58 = 3;
  (**(code **)(*plVar5 + 0x18))(plVar5,&local_60);
  uVar3 = FUN_10000c784();
  FUN_1003a985c(&local_50,uVar3);
  lVar4 = FUN_10000c8e8();
  FUN_1003a985c(&local_50,lVar4);
  lVar6 = FUN_10049ab34(lVar4 + 0x10);
  *(undefined **)(lVar6 + 8) = PTR_s_Buff_Leo_Talent_TalentC_10185b670;
  plVar5 = (long *)FUN_10000c5ec();
  FUN_1003a985c(lVar4 + 200,plVar5);
  (**(code **)(*plVar5 + 0x50))(plVar5,PTR_s_Buff_Leo_C_DashAndEmpower_10185b660);
  lVar4 = FUN_10000ceb8();
  FUN_1003a985c(&local_50,lVar4);
  *(code **)(lVar4 + 0x20) = FUN_1003cfcac;
  *(undefined8 *)(lVar4 + 0x10) = 0;
  lVar4 = FUN_10000d8b8();
  FUN_1003a985c(&local_50,lVar4);
  *(undefined1 *)(lVar4 + 0x10) = 0;
  return local_50;
}




undefined8 FUN_10039564c(void)

{
  byte bVar1;
  bool bVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  code *local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  local_70 = 0;
  uStack_68 = 0;
  uVar3 = FUN_10000d8b8();
  FUN_1003a985c(&local_70,uVar3);
  lVar4 = FUN_10000ef8c();
  FUN_1003a985c(&local_70,lVar4);
  *(byte *)(lVar4 + 0x10) = *(byte *)(lVar4 + 0x10) & 0xe7 | 4;
  lVar4 = FUN_1003e10f0();
  bVar1 = *(byte *)(lVar4 + 0xe5);
  lVar4 = FUN_10000ed74();
  FUN_1003a985c(&local_70,lVar4);
  *(undefined8 *)(lVar4 + 0x18) = 0;
  *(undefined1 *)(lVar4 + 0x20) = 1;
  *(undefined8 *)(lVar4 + 0x24) = 0;
  *(undefined8 *)(lVar4 + 0x34) = 0;
  *(undefined8 *)(lVar4 + 0x2c) = 0;
  *(undefined4 *)(lVar4 + 0x3c) = 0;
  *(undefined8 *)(lVar4 + 0x48) = 0xbf800000c0000000;
  *(undefined8 *)(lVar4 + 0x40) = 0xbf800000bf800000;
  *(undefined4 *)(lVar4 + 0x50) = 0x3f266666;
  *(undefined1 *)(lVar4 + 0x54) = 0xff;
  *(undefined8 *)(lVar4 + 0x60) = 0xffffffff00000000;
  *(undefined8 *)(lVar4 + 0x58) = 0xffffffff00000001;
  *(byte *)(lVar4 + 0x6a) = bVar1 | 0x14;
  *(undefined2 *)(lVar4 + 0x68) = 0x6120;
  *(undefined4 *)(lVar4 + 0xa4) = 0x40400000;
  *(byte *)(lVar4 + 0xa8) = *(byte *)(lVar4 + 0xa8) & 0xf0 | 1;
  lVar4 = FUN_10000c8e8();
  FUN_1003a985c(&local_70,lVar4);
  lVar5 = FUN_10049ae50(lVar4 + 0x10);
  *(undefined4 *)(lVar5 + 0x18) = 0;
  *(undefined4 *)(lVar5 + 8) = 0;
  *(undefined4 *)(lVar5 + 0x10) = 1;
  lVar5 = FUN_10000b720();
  FUN_1003a985c(lVar4 + 0xb0,lVar5);
  *(undefined **)(lVar5 + 0x30) = PTR_s_Ability__Leo__C_Cyclone_101859f38;
  *(code **)(lVar5 + 0x18) = FUN_1003afbd4;
  lVar4 = lVar4 + 200;
  plVar6 = (long *)thunk_FUN_10000e0ac();
  FUN_1003a985c(lVar4,plVar6);
  (**(code **)(*plVar6 + 0x50))(plVar6,"Ability03_Jump");
  plVar6 = (long *)thunk_FUN_10000e358();
  FUN_1003a985c(lVar4,plVar6);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x68))(plVar6,"Bone_Sword");
  plVar6 = (long *)(**(code **)(*plVar6 + 0x48))(plVar6,"Effect_Leo_Sword_Jets");
  plVar6 = (long *)(**(code **)(*plVar6 + 0x78))(plVar6,1);
  plVar6 = (long *)(**(code **)(*plVar6 + 0xb0))(plVar6,0);
  local_80 = (code *)CONCAT44(local_80._4_4_,0x3f000000);
  local_78 = 1;
  (**(code **)(*plVar6 + 0x60))(plVar6,&local_80);
  plVar6 = (long *)thunk_FUN_10000e5dc();
  FUN_1003a985c(lVar4,plVar6);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x58))(plVar6,"Sound_Leo_Ability_C_Cast");
  uVar3 = FUN_1010a1520();
  lVar5 = FUN_1010a0e0c(uVar3,0,"*KindredSoundBalance*",0);
  FUN_1003cfbd0(*(undefined4 *)(lVar5 + 0x60c));
  (**(code **)(*plVar6 + 0x28))(plVar6);
  lVar5 = FUN_10000ceb8();
  FUN_1003a985c(lVar4,lVar5);
  *(code **)(lVar5 + 0x20) = FUN_1003cfcc0;
  *(undefined8 *)(lVar5 + 0x10) = 0;
  lVar5 = FUN_10000c8e8();
  FUN_1003a985c(lVar4,lVar5);
  lVar7 = FUN_10049ab34(lVar5 + 0x10);
  *(undefined **)(lVar7 + 8) = PTR_s_Buff_Leo_Talent_TalentC_10185b670;
  plVar6 = (long *)FUN_10000bdf0();
  FUN_1003a985c(lVar5 + 200,plVar6);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x50))(plVar6,PTR_s_Buff_Leo_C_DashAndEmpower_10185b660);
  local_80 = FUN_1003cfcd4;
  local_78 = 3;
  (**(code **)(*plVar6 + 0x18))(plVar6,&local_80);
  plVar6 = (long *)FUN_10000bdf0();
  FUN_1003a985c(lVar5 + 0xb0,plVar6);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x50))(plVar6,PTR_s_Buff_Leo_C_DashAndEmpower_10185b660);
  local_80 = FUN_1003cfce8;
  local_78 = 3;
  (**(code **)(*plVar6 + 0x18))(plVar6,&local_80);
  plVar6 = (long *)FUN_10000cd5c();
  FUN_1003a985c(lVar4,plVar6);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x88))(plVar6);
  local_80 = FUN_1003cfd1c;
  local_78 = 3;
  plVar6 = (long *)(**(code **)(*plVar6 + 0xa0))(plVar6,&local_80);
  (**(code **)(*plVar6 + 0xb0))(plVar6,1);
  lVar5 = FUN_10000ceb8();
  FUN_1003a985c(lVar4,lVar5);
  *(undefined4 *)(lVar5 + 0x2c) = 0x3dcccccd;
  *(undefined8 *)(lVar5 + 0x10) = 0;
  uVar3 = FUN_10000f9c0();
  FUN_1003a985c(lVar4,uVar3);
  lVar5 = FUN_1003e10f0();
  bVar1 = *(byte *)(lVar5 + 0xe5);
  plVar6 = (long *)thunk_FUN_10000e5dc();
  FUN_1003a985c(lVar4,plVar6);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x58))(plVar6,"Sound_Leo_Ability_C_Impact");
  uVar3 = FUN_1010a1520();
  lVar5 = FUN_1010a0e0c(uVar3,0,"*KindredSoundBalance*",0);
  FUN_1003cfbd0(*(undefined4 *)(lVar5 + 0x60c));
  (**(code **)(*plVar6 + 0x28))(plVar6);
  lVar5 = FUN_10000ed74();
  FUN_1003a985c(lVar4,lVar5);
  *(undefined8 *)(lVar5 + 0x18) = 0;
  *(undefined1 *)(lVar5 + 0x20) = 1;
  *(undefined8 *)(lVar5 + 0x24) = 0;
  *(undefined8 *)(lVar5 + 0x34) = 0;
  *(undefined8 *)(lVar5 + 0x2c) = 0;
  *(undefined4 *)(lVar5 + 0x3c) = 0;
  *(undefined8 *)(lVar5 + 0x48) = 0xbf800000c0000000;
  *(undefined8 *)(lVar5 + 0x40) = 0xbf800000bf800000;
  *(undefined4 *)(lVar5 + 0x50) = 0x3f266666;
  *(undefined1 *)(lVar5 + 0x54) = 0xff;
  *(undefined8 *)(lVar5 + 0x60) = 0xffffffff00080000;
  *(undefined8 *)(lVar5 + 0x58) = 0xffffffff00040000;
  *(byte *)(lVar5 + 0x6a) = bVar1 | 0x14;
  *(undefined2 *)(lVar5 + 0x68) = 0x6120;
  bVar2 = DAT_101d23a38 != '\0';
  *(undefined4 *)(lVar5 + 0xa4) = 0x40800000;
  *(byte *)(lVar5 + 0xa8) = *(byte *)(lVar5 + 0xa8) & 0xf0 | bVar2;
  plVar6 = (long *)FUN_10000cb8c();
  FUN_1003a985c(lVar4,plVar6);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x50))(plVar6);
  (**(code **)(*plVar6 + 0x20))(plVar6,"C_JUMP_DAMAGE");
  lVar4 = FUN_10000d8b8();
  FUN_1003a985c(&local_70,lVar4);
  *(undefined1 *)(lVar4 + 0x10) = 0;
  return local_70;
}




undefined8 FUN_100395b70(void)

{
  byte bVar1;
  bool bVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  undefined4 local_80 [2];
  undefined4 local_78;
  undefined4 local_70 [2];
  undefined4 local_68;
  undefined4 local_60 [2];
  undefined4 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  local_50 = 0;
  uStack_48 = 0;
  uVar3 = FUN_10000d8b8();
  FUN_1003a985c(&local_50,uVar3);
  lVar4 = FUN_10000ef8c();
  FUN_1003a985c(&local_50,lVar4);
  *(byte *)(lVar4 + 0x10) = *(byte *)(lVar4 + 0x10) & 0xe7 | 4;
  plVar5 = (long *)thunk_FUN_10000e0ac();
  FUN_1003a985c(&local_50,plVar5);
  (**(code **)(*plVar5 + 0x50))(plVar5,"Ability03_Cyclone");
  plVar5 = (long *)thunk_FUN_10000e358();
  FUN_1003a985c(&local_50,plVar5);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x68))(plVar5,"Bone_Sword");
  plVar5 = (long *)(**(code **)(*plVar5 + 0x48))(plVar5,"Effect_Leo_Sword_Jets");
  plVar5 = (long *)(**(code **)(*plVar5 + 0x78))(plVar5,1);
  plVar5 = (long *)(**(code **)(*plVar5 + 0xb0))(plVar5,0);
  local_60[0] = 0x40000000;
  local_58 = 1;
  (**(code **)(*plVar5 + 0x60))(plVar5,local_60);
  plVar5 = (long *)thunk_FUN_10000e358();
  FUN_1003a985c(&local_50,plVar5);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x58))(plVar5);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x48))(plVar5,"Effect_Leo_C_SwingRight");
  plVar5 = (long *)(**(code **)(*plVar5 + 0x78))(plVar5,1);
  (**(code **)(*plVar5 + 0xb0))(plVar5,0);
  plVar5 = (long *)thunk_FUN_10000e5dc();
  FUN_1003a985c(&local_50,plVar5);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x58))(plVar5,"Sound_Leo_Ability_C_CycloneStart");
  uVar3 = FUN_1010a1520();
  lVar4 = FUN_1010a0e0c(uVar3,0,"*KindredSoundBalance*",0);
  FUN_1003cfbd0(*(undefined4 *)(lVar4 + 0x610));
  (**(code **)(*plVar5 + 0x28))(plVar5);
  plVar5 = (long *)FUN_10000bdf0();
  FUN_1003a985c(&local_50,plVar5);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x50))(plVar5,PTR_s_Buff_Leo_C_CycloneDash_10185b690);
  local_60[0] = 0x40000000;
  local_58 = 1;
  (**(code **)(*plVar5 + 0x18))(plVar5,local_60);
  lVar4 = FUN_1003e10f0();
  bVar1 = *(byte *)(lVar4 + 0xe5);
  lVar4 = FUN_10000ed74();
  FUN_1003a985c(&local_50,lVar4);
  *(undefined8 *)(lVar4 + 0x18) = 0;
  *(undefined1 *)(lVar4 + 0x20) = 1;
  *(undefined8 *)(lVar4 + 0x24) = 0;
  *(undefined8 *)(lVar4 + 0x34) = 0;
  *(undefined8 *)(lVar4 + 0x2c) = 0;
  *(undefined4 *)(lVar4 + 0x3c) = 0;
  *(undefined8 *)(lVar4 + 0x48) = 0xbf800000c0000000;
  *(undefined8 *)(lVar4 + 0x40) = 0xbf800000bf800000;
  *(undefined4 *)(lVar4 + 0x50) = 0x3f266666;
  *(undefined1 *)(lVar4 + 0x54) = 0xff;
  *(undefined8 *)(lVar4 + 0x60) = 0xffffffff00000000;
  *(undefined8 *)(lVar4 + 0x58) = 0xffffffff00000001;
  *(byte *)(lVar4 + 0x6a) = bVar1 | 0x14;
  *(undefined2 *)(lVar4 + 0x68) = 0x6120;
  bVar2 = DAT_101d23a38 != '\0';
  *(undefined4 *)(lVar4 + 0xa4) = 0x40400000;
  *(byte *)(lVar4 + 0xa8) = *(byte *)(lVar4 + 0xa8) & 0xf0 | bVar2;
  plVar5 = (long *)FUN_10000bed8();
  FUN_1003a985c(&local_50,plVar5);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x70))(plVar5,PTR_s_Buff_Leo_C_ShovedHero_10185b698);
  local_60[0] = 0x3ff33333;
  local_58 = 1;
  (**(code **)(*plVar5 + 0x18))(plVar5,local_60);
  lVar4 = FUN_10000ceb8();
  FUN_1003a985c(&local_50,lVar4);
  *(undefined4 *)(lVar4 + 0x2c) = 0x3e99999a;
  *(undefined8 *)(lVar4 + 0x10) = 0;
  uVar3 = FUN_10000c784();
  FUN_1003a985c(&local_50,uVar3);
  lVar4 = FUN_10000eaac();
  FUN_1003a985c(&local_50,lVar4);
  *(undefined **)(lVar4 + 0x78) = PTR_s_Buff_Leo_C_ShovedHero_10185b698;
  *(byte *)(lVar4 + 0x80) = *(byte *)(lVar4 + 0x80) & 0xf8 | 5;
  lVar4 = FUN_10000c8e8();
  FUN_1003a985c(&local_50,lVar4);
  lVar6 = FUN_10049ae50(lVar4 + 0x10);
  *(undefined4 *)(lVar6 + 0x18) = 0;
  *(undefined4 *)(lVar6 + 8) = 0;
  *(undefined4 *)(lVar6 + 0x10) = 1;
  plVar5 = (long *)thunk_FUN_10000e0ac();
  FUN_1003a985c(lVar4 + 200,plVar5);
  (**(code **)(*plVar5 + 0x50))(plVar5,"IdleCombat");
  lVar4 = lVar4 + 0xb0;
  plVar5 = (long *)FUN_10000d7d0();
  FUN_1003a985c(lVar4,plVar5);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x50))(plVar5);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x80))();
  local_60[0] = 0x420c0000;
  local_58 = 1;
  plVar5 = (long *)(**(code **)(*plVar5 + 0x10))(plVar5,local_60);
  local_70[0] = 0x40f9999a;
  local_68 = 1;
  plVar5 = (long *)(**(code **)(*plVar5 + 0x28))(plVar5,local_70);
  local_80[0] = 0x40c00000;
  local_78 = 1;
  plVar5 = (long *)(**(code **)(*plVar5 + 0x30))(plVar5,local_80);
  (**(code **)(*plVar5 + 0x48))();
  lVar6 = FUN_10000ceb8();
  FUN_1003a985c(lVar4,lVar6);
  *(undefined4 *)(lVar6 + 0x2c) = 0x3e99999a;
  *(undefined8 *)(lVar6 + 0x10) = 0;
  plVar5 = (long *)FUN_10000cd5c();
  FUN_1003a985c(lVar4,plVar5);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x78))(plVar5);
  local_60[0] = 0x41f00000;
  local_58 = 1;
  plVar5 = (long *)(**(code **)(*plVar5 + 0xa0))(plVar5,local_60);
  (**(code **)(*plVar5 + 0xb0))(plVar5,1);
  lVar6 = FUN_10000ceb8();
  FUN_1003a985c(lVar4,lVar6);
  *(undefined4 *)(lVar6 + 0x2c) = 0x3dcccccd;
  *(undefined8 *)(lVar6 + 0x10) = 0;
  uVar3 = FUN_10000f9c0();
  FUN_1003a985c(lVar4,uVar3);
  plVar5 = (long *)thunk_FUN_10000e358();
  FUN_1003a985c(lVar4,plVar5);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x58))(plVar5);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x48))(plVar5,"Effect_Leo_C_SwingLeft");
  plVar5 = (long *)(**(code **)(*plVar5 + 0x78))(plVar5,1);
  (**(code **)(*plVar5 + 0xb0))(plVar5,0);
  plVar5 = (long *)thunk_FUN_10000e5dc();
  FUN_1003a985c(lVar4,plVar5);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x58))(plVar5,"Sound_Leo_Ability_C_CycloneSequence");
  uVar3 = FUN_1010a1520();
  lVar6 = FUN_1010a0e0c(uVar3,0,"*KindredSoundBalance*",0);
  FUN_1003cfbd0(*(undefined4 *)(lVar6 + 0x610));
  (**(code **)(*plVar5 + 0x28))(plVar5);
  lVar6 = FUN_10000ceb8();
  FUN_1003a985c(lVar4,lVar6);
  *(undefined4 *)(lVar6 + 0x2c) = 0x3f19999a;
  *(undefined8 *)(lVar6 + 0x10) = 0;
  plVar5 = (long *)thunk_FUN_10000e358();
  FUN_1003a985c(lVar4,plVar5);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x58))(plVar5);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x48))(plVar5,"Effect_Leo_C_SwingLeft");
  plVar5 = (long *)(**(code **)(*plVar5 + 0x78))(plVar5,1);
  (**(code **)(*plVar5 + 0xb0))(plVar5,0);
  lVar6 = FUN_10000ceb8();
  FUN_1003a985c(lVar4,lVar6);
  *(undefined4 *)(lVar6 + 0x2c) = 0x3f000000;
  *(undefined8 *)(lVar6 + 0x10) = 0;
  lVar4 = FUN_10000d8b8();
  FUN_1003a985c(&local_50,lVar4);
  *(undefined1 *)(lVar4 + 0x10) = 0;
  return local_50;
}




void FUN_1003961cc(undefined8 param_1,undefined8 param_2)

{
  FUN_1003cfd30("Attack",param_2,0);
  return;
}




void FUN_1003961dc(undefined8 param_1,undefined8 param_2)

{
  FUN_1003cfd30("AltAttack",param_2,0);
  return;
}




void FUN_1003961ec(undefined8 param_1,undefined8 param_2)

{
  FUN_1003cfd30("CritAttack",param_2,2);
  return;
}




undefined8 FUN_1003961fc(void)

{
  undefined8 uVar1;
  undefined8 local_20;
  undefined8 uStack_18;
  
  local_20 = 0;
  uStack_18 = 0;
  uVar1 = FUN_10000f034();
  FUN_1003a985c(&local_20,uVar1);
  return local_20;
}




undefined8 FUN_10039622c(void)

{
  undefined8 uVar1;
  undefined8 local_20;
  undefined8 uStack_18;
  
  local_20 = 0;
  uStack_18 = 0;
  uVar1 = FUN_10000f034();
  FUN_1003a985c(&local_20,uVar1);
  return local_20;
}




undefined8 FUN_10039625c(void)

{
  undefined8 uVar1;
  undefined8 local_20;
  undefined8 uStack_18;
  
  local_20 = 0;
  uStack_18 = 0;
  uVar1 = FUN_10000f034();
  FUN_1003a985c(&local_20,uVar1);
  return local_20;
}




void FUN_10039628c(void)

{
  FUN_1003cfe00("Attack");
  return;
}




void FUN_100396298(void)

{
  FUN_1003cfe00("AltAttack");
  return;
}




void FUN_1003962a4(void)

{
  FUN_1003cfe00("CritAttack");
  return;
}




undefined8 FUN_1003962b0(void)

{
  long lVar1;
  long *plVar2;
  undefined4 local_40 [2];
  undefined4 local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_30 = 0;
  uStack_28 = 0;
  lVar1 = FUN_10000ef8c();
  FUN_1003a985c(&local_30,lVar1);
  *(byte *)(lVar1 + 0x10) = *(byte *)(lVar1 + 0x10) & 0xe7 | 4;
  plVar2 = (long *)FUN_10000bdf0();
  FUN_1003a985c(&local_30,plVar2);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x50))(plVar2,PTR_s_Buff_Caine_DryFire_10185b6c0);
  local_40[0] = 0x40000000;
  local_38 = 1;
  (**(code **)(*plVar2 + 0x18))(plVar2,local_40);
  return local_30;
}




undefined8 FUN_100396348(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  int iVar7;
  undefined8 local_80;
  undefined8 uStack_78;
  
  local_80 = 0;
  uStack_78 = 0;
  lVar2 = FUN_10000e94c();
  FUN_1003a985c(&local_80,lVar2);
  *(code **)(lVar2 + 0x10) = FUN_1003d00bc;
  lVar2 = FUN_10000d8b8();
  FUN_1003a985c(&local_80,lVar2);
  *(undefined1 *)(lVar2 + 0x10) = 1;
  lVar2 = FUN_10000ef8c();
  FUN_1003a985c(&local_80,lVar2);
  *(byte *)(lVar2 + 0x10) = *(byte *)(lVar2 + 0x10) & 0xe7 | 4;
  lVar3 = FUN_10000c8e8();
  FUN_1003a985c(&local_80,lVar3);
  lVar2 = FUN_10049ab34(lVar3 + 0x10);
  *(undefined **)(lVar2 + 8) = PTR_s_Buff_Caine_B_FastCast_10185b6c8;
  lVar2 = lVar3 + 200;
  lVar4 = FUN_10000c838();
  FUN_1003a985c(lVar2,lVar4);
  puVar1 = PTR_s_Buff_Caine_AmmoPerk_10185b6b0;
  *(ushort *)(lVar4 + 0x58) = *(ushort *)(lVar4 + 0x58) & 0xf000 | 0x30;
  *(undefined4 *)(lVar4 + 0x51) = 0;
  *(undefined4 *)(lVar4 + 0x54) = 0;
  iVar7 = 3;
  *(undefined1 *)(lVar4 + 0x50) = 3;
  *(undefined **)(lVar4 + 0x40) = puVar1;
  *(undefined8 *)(lVar4 + 0x48) = 0x200000001;
  plVar5 = (long *)thunk_FUN_10000e0ac();
  FUN_1003a985c(lVar4 + 0x18,plVar5);
  (**(code **)(*plVar5 + 0x50))(plVar5,"Ability01_Normal_1");
  lVar4 = FUN_10000c838();
  FUN_1003a985c(lVar2,lVar4);
  puVar1 = PTR_s_Buff_Caine_AmmoPerk_10185b6b0;
  *(ushort *)(lVar4 + 0x58) = *(ushort *)(lVar4 + 0x58) & 0xf000 | 0x30;
  *(undefined4 *)(lVar4 + 0x51) = 0;
  *(undefined4 *)(lVar4 + 0x54) = 0;
  *(undefined1 *)(lVar4 + 0x50) = 3;
  *(undefined **)(lVar4 + 0x40) = puVar1;
  *(undefined8 *)(lVar4 + 0x48) = 0x200000002;
  plVar5 = (long *)thunk_FUN_10000e0ac();
  FUN_1003a985c(lVar4 + 0x18,plVar5);
  (**(code **)(*plVar5 + 0x50))(plVar5,"Ability01_Normal_2");
  lVar4 = FUN_10000c838();
  FUN_1003a985c(lVar2,lVar4);
  puVar1 = PTR_s_Buff_Caine_AmmoPerk_10185b6b0;
  *(ushort *)(lVar4 + 0x58) = *(ushort *)(lVar4 + 0x58) & 0xf000 | 0x30;
  *(undefined4 *)(lVar4 + 0x51) = 0;
  *(undefined4 *)(lVar4 + 0x54) = 0;
  *(undefined1 *)(lVar4 + 0x50) = 3;
  *(undefined **)(lVar4 + 0x40) = puVar1;
  *(undefined8 *)(lVar4 + 0x48) = 0x300000003;
  plVar5 = (long *)thunk_FUN_10000e0ac();
  FUN_1003a985c(lVar4 + 0x18,plVar5);
  (**(code **)(*plVar5 + 0x50))(plVar5,"Ability01_Normal_3");
  lVar4 = FUN_10000ceb8();
  FUN_1003a985c(lVar2,lVar4);
  *(undefined4 *)(lVar4 + 0x2c) = 0x3e99999a;
  *(undefined8 *)(lVar4 + 0x10) = 0;
  lVar3 = lVar3 + 0xb0;
  lVar2 = FUN_10000c838();
  FUN_1003a985c(lVar3,lVar2);
  puVar1 = PTR_s_Buff_Caine_AmmoPerk_10185b6b0;
  *(ushort *)(lVar2 + 0x58) = *(ushort *)(lVar2 + 0x58) & 0xf000 | 0x30;
  *(undefined4 *)(lVar2 + 0x51) = 0;
  *(undefined4 *)(lVar2 + 0x54) = 0;
  *(undefined1 *)(lVar2 + 0x50) = 3;
  *(undefined **)(lVar2 + 0x40) = puVar1;
  *(undefined8 *)(lVar2 + 0x48) = 0x200000001;
  plVar5 = (long *)thunk_FUN_10000e0ac();
  FUN_1003a985c(lVar2 + 0x18,plVar5);
  (**(code **)(*plVar5 + 0x50))(plVar5,"Ability01_Fast_1");
  lVar2 = FUN_10000c838();
  FUN_1003a985c(lVar3,lVar2);
  puVar1 = PTR_s_Buff_Caine_AmmoPerk_10185b6b0;
  *(ushort *)(lVar2 + 0x58) = *(ushort *)(lVar2 + 0x58) & 0xf000 | 0x30;
  *(undefined4 *)(lVar2 + 0x51) = 0;
  *(undefined4 *)(lVar2 + 0x54) = 0;
  *(undefined1 *)(lVar2 + 0x50) = 3;
  *(undefined **)(lVar2 + 0x40) = puVar1;
  *(undefined8 *)(lVar2 + 0x48) = 0x200000002;
  plVar5 = (long *)thunk_FUN_10000e0ac();
  FUN_1003a985c(lVar2 + 0x18,plVar5);
  (**(code **)(*plVar5 + 0x50))(plVar5,"Ability01_Fast_2");
  lVar2 = FUN_10000c838();
  FUN_1003a985c(lVar3,lVar2);
  puVar1 = PTR_s_Buff_Caine_AmmoPerk_10185b6b0;
  *(ushort *)(lVar2 + 0x58) = *(ushort *)(lVar2 + 0x58) & 0xf000 | 0x30;
  *(undefined4 *)(lVar2 + 0x51) = 0;
  *(undefined4 *)(lVar2 + 0x54) = 0;
  *(undefined1 *)(lVar2 + 0x50) = 3;
  *(undefined **)(lVar2 + 0x40) = puVar1;
  *(undefined8 *)(lVar2 + 0x48) = 0x300000003;
  plVar5 = (long *)thunk_FUN_10000e0ac();
  FUN_1003a985c(lVar2 + 0x18,plVar5);
  (**(code **)(*plVar5 + 0x50))(plVar5,"Ability01_Fast_3");
  lVar2 = FUN_10000ceb8();
  FUN_1003a985c(lVar3,lVar2);
  *(undefined4 *)(lVar2 + 0x2c) = 0x3dcccccd;
  *(undefined8 *)(lVar2 + 0x10) = 0;
  do {
    uVar6 = FUN_1003d0134(PTR_s_Buff_Caine_AmmoPerk_10185b6b0);
    FUN_1003a985c(&local_80,uVar6);
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  iVar7 = 3;
  do {
    uVar6 = FUN_1003d0134(PTR_s_Buff_Caine_AmmoPerkTalent_10185b6a8);
    FUN_1003a985c(&local_80,uVar6);
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  plVar5 = (long *)FUN_10000c5ec();
  FUN_1003a985c(&local_80,plVar5);
  (**(code **)(*plVar5 + 0x50))(plVar5,PTR_s_Buff_Caine_B_FastCast_10185b6c8);
  lVar2 = FUN_10000e7fc();
  FUN_1003a985c(&local_80,lVar2);
  *(undefined4 *)(lVar2 + 0x10) = 0x3e4ccccd;
  lVar2 = FUN_10000d8b8();
  FUN_1003a985c(&local_80,lVar2);
  *(undefined1 *)(lVar2 + 0x10) = 0;
  return local_80;
}




undefined8 FUN_1003967b0(void)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  undefined4 local_80 [2];
  undefined4 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  local_60 = 0;
  uStack_58 = 0;
  lVar1 = FUN_10000d8b8();
  FUN_1003a985c(&local_60,lVar1);
  *(undefined1 *)(lVar1 + 0x10) = 1;
  lVar1 = FUN_10000ef8c();
  FUN_1003a985c(&local_60,lVar1);
  *(byte *)(lVar1 + 0x10) = *(byte *)(lVar1 + 0x10) & 0xe7 | 4;
  plVar2 = (long *)thunk_FUN_10000e0ac();
  FUN_1003a985c(&local_60,plVar2);
  (**(code **)(*plVar2 + 0x50))(plVar2,"Ability02");
  plVar2 = (long *)thunk_FUN_10000e5dc();
  FUN_1003a985c(&local_60,plVar2);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x58))(plVar2,"Sound_Caine_B_Dash");
  uVar3 = FUN_1010a1520();
  lVar1 = FUN_1010a0e0c(uVar3,0,"*KindredSoundBalance*",0);
  FUN_1003d0044(*(undefined4 *)(lVar1 + 0x5e0));
  (**(code **)(*plVar2 + 0x28))(plVar2);
  plVar2 = (long *)FUN_10000cd5c();
  FUN_1003a985c(&local_60,plVar2);
  local_70 = FUN_1003d0378;
  local_68 = 3;
  plVar2 = (long *)(**(code **)(*plVar2 + 0x80))(plVar2,&local_70);
  local_80[0] = 0x3e99999a;
  local_78 = 1;
  plVar2 = (long *)(**(code **)(*plVar2 + 0xa8))(plVar2,local_80);
  (**(code **)(*plVar2 + 0xb0))(plVar2,1);
  lVar1 = FUN_10000ceb8();
  FUN_1003a985c(&local_60,lVar1);
  *(undefined4 *)(lVar1 + 0x2c) = 0x3e99999a;
  *(undefined8 *)(lVar1 + 0x10) = 0;
  uVar3 = FUN_10000f9c0();
  FUN_1003a985c(&local_60,uVar3);
  uVar3 = FUN_10000bb2c();
  FUN_1003a985c(&local_60,uVar3);
  lVar1 = FUN_10000c8e8();
  FUN_1003a985c(&local_60,lVar1);
  lVar4 = FUN_10049ab34(lVar1 + 0x10);
  *(undefined **)(lVar4 + 8) = PTR_s_Buff_Caine_Talent_TalentC_10185b6a0;
  lVar4 = FUN_10000bd3c();
  FUN_1003a985c(lVar1 + 0xb0,lVar4);
  *(undefined **)(lVar4 + 0x10) = PTR_s_Buff_Caine_AmmoPerkTalent_10185b6a8;
  *(undefined4 *)(lVar4 + 0x18) = 0x49742400;
  *(undefined2 *)(lVar4 + 0x68) = 1;
  *(byte *)(lVar4 + 0x6a) = *(byte *)(lVar4 + 0x6a) & 0xfe;
  *(code **)(lVar4 + 0x38) = FUN_1003d02c4;
  lVar4 = FUN_10000bd3c();
  FUN_1003a985c(lVar1 + 200,lVar4);
  *(undefined **)(lVar4 + 0x10) = PTR_s_Buff_Caine_AmmoPerk_10185b6b0;
  *(undefined4 *)(lVar4 + 0x18) = 0x49742400;
  *(undefined2 *)(lVar4 + 0x68) = 1;
  *(byte *)(lVar4 + 0x6a) = *(byte *)(lVar4 + 0x6a) & 0xfe;
  *(code **)(lVar4 + 0x38) = FUN_1003d02c4;
  plVar2 = (long *)thunk_FUN_10000e5dc();
  FUN_1003a985c(&local_60,plVar2);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x58))(plVar2,"Sound_Caine_B_Reload");
  uVar3 = FUN_1010a1520();
  lVar1 = FUN_1010a0e0c(uVar3,0,"*KindredSoundBalance*",0);
  FUN_1003d0044(*(undefined4 *)(lVar1 + 0x5e4));
  (**(code **)(*plVar2 + 0x28))(plVar2);
  plVar2 = (long *)FUN_10000dc58();
  FUN_1003a985c(&local_60,plVar2);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x50))(plVar2,PTR_s_Ability__Caine__A_101859f90);
  local_70 = (code *)((ulong)local_70 & 0xffffffff00000000);
  local_68 = 1;
  (**(code **)(*plVar2 + 0x20))(plVar2,&local_70);
  plVar2 = (long *)FUN_10000bed8();
  FUN_1003a985c(&local_60,plVar2);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x70))(plVar2,PTR_s_Buff_Caine_B_FastCast_10185b6c8);
  local_70._0_4_ = 0x3f800000;
  local_68 = 1;
  (**(code **)(*plVar2 + 0x18))(plVar2,&local_70);
  lVar1 = FUN_10000c8e8();
  FUN_1003a985c(&local_60,lVar1);
  lVar4 = FUN_10049ab34(lVar1 + 0x10);
  *(undefined **)(lVar4 + 8) = PTR_s_Buff_Caine_Talent_TalentB_10185b6d0;
  plVar2 = (long *)FUN_10000dc58();
  FUN_1003a985c(lVar1 + 200,plVar2);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x50))(plVar2,PTR_s_Ability__Caine__C_101859fa0);
  local_70 = (code *)((ulong)local_70._4_4_ << 0x20);
  local_68 = 1;
  (**(code **)(*plVar2 + 0x20))(plVar2,&local_70);
  lVar1 = FUN_10000d8b8();
  FUN_1003a985c(&local_60,lVar1);
  *(undefined1 *)(lVar1 + 0x10) = 0;
  return local_60;
}




undefined8 FUN_100396b88(void)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  code *local_50;
  undefined4 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  local_40 = 0;
  uStack_38 = 0;
  lVar1 = FUN_10000e94c();
  FUN_1003a985c(&local_40,lVar1);
  *(code **)(lVar1 + 0x10) = FUN_1003d00bc;
  lVar1 = FUN_10000d8b8();
  FUN_1003a985c(&local_40,lVar1);
  *(undefined1 *)(lVar1 + 0x10) = 1;
  lVar1 = FUN_10000ef8c();
  FUN_1003a985c(&local_40,lVar1);
  *(byte *)(lVar1 + 0x10) = *(byte *)(lVar1 + 0x10) & 0xe7 | 4;
  plVar2 = (long *)thunk_FUN_10000e5dc();
  FUN_1003a985c(&local_40,plVar2);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x58))(plVar2,"Sound_Caine_C_Anticipation");
  uVar3 = FUN_1010a1520();
  lVar1 = FUN_1010a0e0c(uVar3,0,"*KindredSoundBalance*",0);
  FUN_1003d0044(*(undefined4 *)(lVar1 + 0x5ec));
  (**(code **)(*plVar2 + 0x28))(plVar2);
  plVar2 = (long *)thunk_FUN_10000e358();
  FUN_1003a985c(&local_40,plVar2);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x60))(plVar2,"ExecuteWarning");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Caine_ExecuteWarning");
  local_50 = (code *)CONCAT44(local_50._4_4_,0x3f333333);
  local_48 = 1;
  plVar2 = (long *)(**(code **)(*plVar2 + 0x60))(plVar2,&local_50);
  plVar2 = (long *)(**(code **)(*plVar2 + 0xb0))(plVar2,1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0xc0))(0x3f800000,0,0);
  plVar2 = (long *)(**(code **)(*plVar2 + 0xd8))(0x3e4ccccd);
  (**(code **)(*plVar2 + 0xe0))(0x41300000,0x3fc00000);
  plVar2 = (long *)thunk_FUN_10000e0ac();
  FUN_1003a985c(&local_40,plVar2);
  (**(code **)(*plVar2 + 0x50))(plVar2,"Ability03");
  lVar1 = FUN_10000ceb8();
  FUN_1003a985c(&local_40,lVar1);
  *(undefined4 *)(lVar1 + 0x2c) = 0x3ecccccd;
  *(undefined8 *)(lVar1 + 0x10) = 0;
  lVar1 = FUN_10000f250();
  FUN_1003a985c(&local_40,lVar1);
  *(undefined4 *)(lVar1 + 0x10) = 0xc3;
  FUN_1003d266c(lVar1,"AutoAttack");
  plVar2 = (long *)thunk_FUN_10000e5dc();
  FUN_1003a985c(&local_40,plVar2);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x58))(plVar2,"Sound_Caine_C_Attack");
  uVar3 = FUN_1010a1520();
  lVar1 = FUN_1010a0e0c(uVar3,0,"*KindredSoundBalance*",0);
  FUN_1003d0044(*(undefined4 *)(lVar1 + 0x5e8));
  (**(code **)(*plVar2 + 0x28))(plVar2);
  lVar1 = FUN_10000c8e8();
  FUN_1003a985c(&local_40,lVar1);
  lVar4 = FUN_10049ab34(lVar1 + 0x10);
  *(undefined **)(lVar4 + 8) = PTR_s_Buff_Caine_Talent_TalentC_10185b6a0;
  lVar4 = FUN_10000dbb0();
  FUN_1003a985c(lVar1 + 0xb0,lVar4);
  FUN_1003a4e5c(&local_50,PTR_s_Buff_Caine_AmmoPerkTalent_10185b6a8);
  *(undefined4 *)(lVar4 + 0x10) = local_50._0_4_;
  *(undefined4 *)(lVar4 + 0x14) = 0xffffffff;
  *(byte *)(lVar4 + 0x18) = *(byte *)(lVar4 + 0x18) & 0xfe;
  lVar4 = FUN_10000dbb0();
  FUN_1003a985c(lVar1 + 200,lVar4);
  FUN_1003a4e5c(&local_50,PTR_s_Buff_Caine_AmmoPerk_10185b6b0);
  *(undefined4 *)(lVar4 + 0x10) = local_50._0_4_;
  *(undefined4 *)(lVar4 + 0x14) = 0xffffffff;
  *(byte *)(lVar4 + 0x18) = *(byte *)(lVar4 + 0x18) & 0xfe;
  plVar2 = (long *)FUN_10000bdf0();
  FUN_1003a985c(&local_40,plVar2);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x50))(plVar2,PTR_s_Buff_Caine_AmmoControl_10185b6b8);
  local_50 = FUN_1003d00a8;
  local_48 = 3;
  (**(code **)(*plVar2 + 0x18))(plVar2,&local_50);
  lVar1 = FUN_10000ceb8();
  FUN_1003a985c(&local_40,lVar1);
  *(undefined4 *)(lVar1 + 0x2c) = 0x3e4ccccd;
  *(undefined8 *)(lVar1 + 0x10) = 0;
  lVar1 = FUN_10000d8b8();
  FUN_1003a985c(&local_40,lVar1);
  *(undefined1 *)(lVar1 + 0x10) = 0;
  return local_40;
}




void FUN_100396f34(void)

{
  FUN_1003d038c("Attack",0xc4,"Gun");
  return;
}




void FUN_100396f4c(void)

{
  FUN_1003d038c("AltAttack",0xc4,"Gun");
  return;
}




void FUN_100396f64(void)

{
  FUN_1003d038c("CritAttack",0xc5,"Gun");
  return;
}




undefined8 FUN_100396f7c(void)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_30 = 0;
  uStack_28 = 0;
  lVar1 = FUN_10000ef8c();
  FUN_1003a985c(&local_30,lVar1);
  *(byte *)(lVar1 + 0x10) = *(byte *)(lVar1 + 0x10) & 0xe7 | 4;
  plVar2 = (long *)thunk_FUN_10000e0ac();
  FUN_1003a985c(&local_30,plVar2);
  (**(code **)(*plVar2 + 0x50))(plVar2,"EnhancedAttack");
  lVar1 = FUN_10000ceb8();
  FUN_1003a985c(&local_30,lVar1);
  *(code **)(lVar1 + 0x10) = FUN_1003a24a0;
  *(code **)(lVar1 + 0x18) = FUN_1003c5148;
  plVar2 = (long *)thunk_FUN_10000e5dc();
  FUN_1003a985c(&local_30,plVar2);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x58))(plVar2,"Sound_Warhawk_Enhanced_Basic_Attack");
  uVar3 = FUN_1010a1520();
  lVar1 = FUN_1010a0e0c(uVar3,0,"*KindredSoundBalance*",0);
  FUN_1003d04f8(*(undefined4 *)(lVar1 + 0x618));
  (**(code **)(*plVar2 + 0x28))(plVar2);
  lVar1 = FUN_10000f250();
  FUN_1003a985c(&local_30,lVar1);
  *(undefined4 *)(lVar1 + 0x10) = 0xc6;
  FUN_1003d266c(lVar1,"GunEmpoweredHigher");
  plVar2 = (long *)FUN_10000c5ec();
  FUN_1003a985c(&local_30,plVar2);
  (**(code **)(*plVar2 + 0x50))(plVar2,PTR_s_Buff_Warhawk_Enhanced_BasicAttac_10185b6d8);
  return local_30;
}




undefined8 FUN_1003970d4(void)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  code *local_70;
  undefined4 local_68;
  code *local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  local_50 = 0;
  uStack_48 = 0;
  lVar1 = FUN_10000d8b8();
  FUN_1003a985c(&local_50,lVar1);
  *(undefined1 *)(lVar1 + 0x10) = 1;
  lVar1 = FUN_10000ef8c();
  FUN_1003a985c(&local_50,lVar1);
  *(byte *)(lVar1 + 0x10) = *(byte *)(lVar1 + 0x10) & 0xe7 | 4;
  plVar2 = (long *)thunk_FUN_10000e6f4();
  FUN_1003a985c(&local_50,plVar2);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x50))(plVar2,"ability1");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x18))(0x3c23d70a);
  (**(code **)(*plVar2 + 0x20))();
  plVar2 = (long *)thunk_FUN_10000e5dc();
  FUN_1003a985c(&local_50,plVar2);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x58))(plVar2,"Sound_Warhawk_A_Attack_1");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x18))(plVar2,"Sound_Warhawk_A_Attack_2");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x18))(plVar2,"Sound_Warhawk_A_Attack_3");
  uVar3 = FUN_1010a1520();
  lVar1 = FUN_1010a0e0c(uVar3,0,"*KindredSoundBalance*",0);
  FUN_1003d04f8(*(undefined4 *)(lVar1 + 0x618));
  (**(code **)(*plVar2 + 0x28))(plVar2);
  plVar2 = (long *)thunk_FUN_10000e0ac();
  FUN_1003a985c(&local_50,plVar2);
  (**(code **)(*plVar2 + 0x50))(plVar2,"Ability01");
  lVar1 = FUN_10000ceb8();
  FUN_1003a985c(&local_50,lVar1);
  *(undefined4 *)(lVar1 + 0x2c) = 0x3e051eb8;
  *(undefined8 *)(lVar1 + 0x10) = 0;
  plVar2 = (long *)thunk_FUN_10000e358();
  FUN_1003a985c(&local_50,plVar2);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x68))(plVar2,"Bone_LauncherHandle");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Warhawk_A_Backfire");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0xb0))(plVar2,0);
  local_60 = (code *)CONCAT44(local_60._4_4_,0x3e8a3d71);
  local_58 = 1;
  (**(code **)(*plVar2 + 0x60))(plVar2,&local_60);
  lVar1 = FUN_10000ceb8();
  FUN_1003a985c(&local_50,lVar1);
  *(undefined4 *)(lVar1 + 0x2c) = 0x3d8f5c29;
  *(undefined8 *)(lVar1 + 0x10) = 0;
  lVar1 = FUN_10000f250();
  FUN_1003a985c(&local_50,lVar1);
  *(undefined4 *)(lVar1 + 0x10) = 199;
  FUN_1003d266c(lVar1,"GunEmpowered");
  lVar1 = FUN_10000c8e8();
  FUN_1003a985c(&local_50,lVar1);
  lVar4 = FUN_10049ab34(lVar1 + 0x10);
  *(undefined **)(lVar4 + 8) = PTR_s_Buff_Warhawk_Talent_TalentB_10185b6e0;
  plVar2 = (long *)FUN_10000cd5c();
  FUN_1003a985c(lVar1 + 200,plVar2);
  local_60 = FUN_1003d055c;
  local_58 = 3;
  plVar2 = (long *)(**(code **)(*plVar2 + 0x80))(plVar2,&local_60);
  local_70 = FUN_1003d0570;
  local_68 = 3;
  plVar2 = (long *)(**(code **)(*plVar2 + 0xa8))(plVar2,&local_70);
  (**(code **)(*plVar2 + 0xb0))(plVar2,1);
  plVar2 = (long *)FUN_10000cd5c();
  FUN_1003a985c(lVar1 + 0xb0,plVar2);
  local_60 = FUN_1003d0584;
  local_58 = 3;
  plVar2 = (long *)(**(code **)(*plVar2 + 0x80))(plVar2,&local_60);
  local_70 = FUN_1003d05b8;
  local_68 = 3;
  plVar2 = (long *)(**(code **)(*plVar2 + 0xa8))(plVar2,&local_70);
  (**(code **)(*plVar2 + 0xb0))(plVar2,1);
  lVar1 = FUN_10000ceb8();
  FUN_1003a985c(&local_50,lVar1);
  *(undefined4 *)(lVar1 + 0x2c) = 0x3dcccccd;
  *(undefined8 *)(lVar1 + 0x10) = 0;
  uVar3 = FUN_10000f9c0();
  FUN_1003a985c(&local_50,uVar3);
  plVar2 = (long *)FUN_10000bdf0();
  FUN_1003a985c(&local_50,plVar2);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x50))
                             (plVar2,PTR_s_Buff_Warhawk_Enhanced_BasicAttac_10185b6d8);
  local_60 = (code *)CONCAT44(local_60._4_4_,0x40000000);
  local_58 = 1;
  (**(code **)(*plVar2 + 0x18))(plVar2,&local_60);
  lVar1 = FUN_10000e7fc();
  FUN_1003a985c(&local_50,lVar1);
  *(undefined4 *)(lVar1 + 0x10) = 0x3f333333;
  lVar1 = FUN_10000d8b8();
  FUN_1003a985c(&local_50,lVar1);
  *(undefined1 *)(lVar1 + 0x10) = 0;
  return local_50;
}




undefined8 FUN_1003974f8(void)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  code *local_40;
  undefined4 local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_30 = 0;
  uStack_28 = 0;
  lVar1 = FUN_10000d8b8();
  FUN_1003a985c(&local_30,lVar1);
  *(undefined1 *)(lVar1 + 0x10) = 1;
  lVar1 = FUN_10000ef8c();
  FUN_1003a985c(&local_30,lVar1);
  *(byte *)(lVar1 + 0x10) = *(byte *)(lVar1 + 0x10) & 0xe7 | 4;
  plVar2 = (long *)thunk_FUN_10000e0ac();
  FUN_1003a985c(&local_30,plVar2);
  (**(code **)(*plVar2 + 0x50))(plVar2,"Ability02");
  plVar2 = (long *)thunk_FUN_10000e5dc();
  FUN_1003a985c(&local_30,plVar2);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x58))(plVar2,"Sound_Warhawk_B_Throw");
  uVar3 = FUN_1010a1520();
  lVar1 = FUN_1010a0e0c(uVar3,0,"*KindredSoundBalance*",0);
  FUN_1003d04f8(*(undefined4 *)(lVar1 + 0x628));
  (**(code **)(*plVar2 + 0x28))(plVar2);
  lVar1 = FUN_10000f250();
  FUN_1003a985c(&local_30,lVar1);
  *(undefined4 *)(lVar1 + 0x10) = 200;
  FUN_1003d266c(lVar1,"CenterBody");
  lVar1 = FUN_10000ceb8();
  FUN_1003a985c(&local_30,lVar1);
  *(undefined4 *)(lVar1 + 0x2c) = 0x3f000000;
  *(undefined8 *)(lVar1 + 0x10) = 0;
  plVar2 = (long *)FUN_10000bdf0();
  FUN_1003a985c(&local_30,plVar2);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x50))
                             (plVar2,PTR_s_Buff_Warhawk_Enhanced_BasicAttac_10185b6d8);
  local_40 = FUN_1003d05ec;
  local_38 = 3;
  (**(code **)(*plVar2 + 0x18))(plVar2,&local_40);
  lVar1 = FUN_10000d8b8();
  FUN_1003a985c(&local_30,lVar1);
  *(undefined1 *)(lVar1 + 0x10) = 0;
  return local_30;
}




undefined8 FUN_1003976a0(void)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  code *local_40;
  undefined4 local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_30 = 0;
  uStack_28 = 0;
  plVar1 = (long *)thunk_FUN_10000e6f4();
  FUN_1003a985c(&local_30,plVar1);
  plVar1 = (long *)(**(code **)(*plVar1 + 0x50))(plVar1,"ability2");
  plVar1 = (long *)(**(code **)(*plVar1 + 0x18))(0x3ca3d70a);
  (**(code **)(*plVar1 + 0x20))();
  uVar2 = FUN_10000ee30();
  FUN_1003a985c(&local_30,uVar2);
  lVar3 = FUN_10000c540();
  FUN_1003a985c(&local_30,lVar3);
  *(undefined **)(lVar3 + 0x10) = PTR_s_Buff_Warhawk_B_Grenade_10185b6e8;
  uVar2 = FUN_10000c784();
  FUN_1003a985c(&local_30,uVar2);
  plVar1 = (long *)FUN_10000bdf0();
  FUN_1003a985c(&local_30,plVar1);
  plVar1 = (long *)(**(code **)(*plVar1 + 0x50))
                             (plVar1,PTR_s_Buff_Warhawk_Enhanced_BasicAttac_10185b6d8);
  local_40 = FUN_1003d05ec;
  local_38 = 3;
  (**(code **)(*plVar1 + 0x18))(plVar1,&local_40);
  return local_30;
}




undefined8 FUN_1003977a4(void)

{
  int iVar1;
  byte bVar2;
  bool bVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined4 local_a0 [2];
  undefined4 local_98;
  undefined4 local_90 [2];
  undefined4 local_88;
  undefined4 local_80 [2];
  undefined4 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  local_70 = 0;
  uStack_68 = 0;
  plVar4 = (long *)thunk_FUN_10000e358();
  FUN_1003a985c(&local_70,plVar4);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x58))(plVar4);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x48))(plVar4,"Effect_Warhawk_B_Grenade_Charging");
  local_80[0] = 0x40400000;
  local_78 = 1;
  (**(code **)(*plVar4 + 0xd0))(plVar4,local_80);
  plVar4 = (long *)thunk_FUN_10000e5dc();
  FUN_1003a985c(&local_70,plVar4);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x58))(plVar4,"Sound_Warhawk_B_Active");
  uVar5 = FUN_1010a1520();
  lVar6 = FUN_1010a0e0c(uVar5,0,"*KindredSoundBalance*",0);
  FUN_1003d04f8(*(undefined4 *)(lVar6 + 0x62c));
  (**(code **)(*plVar4 + 0x28))(plVar4);
  lVar6 = FUN_10000ceb8();
  FUN_1003a985c(&local_70,lVar6);
  *(undefined4 *)(lVar6 + 0x2c) = 0x3f666666;
  *(undefined8 *)(lVar6 + 0x10) = 0;
  plVar4 = (long *)thunk_FUN_10000e358();
  FUN_1003a985c(&local_70,plVar4);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x58))(plVar4);
  (**(code **)(*plVar4 + 0x48))(plVar4,"Effect_Warhawk_B_Grenade_Explode");
  lVar6 = FUN_10000c8e8();
  FUN_1003a985c(&local_70,lVar6);
  lVar7 = FUN_10049aec8(lVar6 + 0x10);
  *(undefined **)(lVar7 + 8) = PTR_s_Buff_Warhawk_Talent_TalentA_10185b6f0;
  lVar6 = lVar6 + 0xb0;
  plVar4 = (long *)thunk_FUN_10000e358();
  FUN_1003a985c(lVar6,plVar4);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x58))(plVar4);
  (**(code **)(*plVar4 + 0x48))(plVar4,"Effect_Warhawk_B_Heal");
  plVar4 = (long *)thunk_FUN_10000e5dc();
  FUN_1003a985c(&local_70,plVar4);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x58))(plVar4,"Sound_Warhawk_B_Explode");
  uVar5 = FUN_1010a1520();
  lVar7 = FUN_1010a0e0c(uVar5,0,"*KindredSoundBalance*",0);
  FUN_1003d04f8(*(undefined4 *)(lVar7 + 0x62c));
  (**(code **)(*plVar4 + 0x28))(plVar4);
  lVar7 = FUN_1003e10f0();
  bVar2 = *(byte *)(lVar7 + 0xe5);
  lVar7 = FUN_1003e10f0();
  iVar1 = ((uint)*(byte *)(lVar7 + 0xe5) << 0x10 | 0x144120) + 0x30;
  lVar7 = FUN_10000ed74();
  FUN_1003a985c(&local_70,lVar7);
  *(undefined8 *)(lVar7 + 0x18) = 0;
  *(undefined1 *)(lVar7 + 0x20) = 1;
  *(undefined8 *)(lVar7 + 0x24) = 0;
  *(undefined8 *)(lVar7 + 0x34) = 0;
  *(undefined8 *)(lVar7 + 0x2c) = 0;
  *(undefined4 *)(lVar7 + 0x3c) = 0;
  *(undefined8 *)(lVar7 + 0x48) = 0xbf800000c0000000;
  *(undefined8 *)(lVar7 + 0x40) = 0xbf800000bf800000;
  *(undefined4 *)(lVar7 + 0x50) = 0x3f800000;
  *(undefined1 *)(lVar7 + 0x54) = 0xff;
  *(undefined8 *)(lVar7 + 0x60) = 0xffffffff00000000;
  *(undefined8 *)(lVar7 + 0x58) = 0xffffffff00040000;
  *(byte *)(lVar7 + 0x6a) = bVar2 | 0x14;
  *(undefined2 *)(lVar7 + 0x68) = 0x4120;
  bVar3 = DAT_101d23a38 != '\0';
  *(undefined4 *)(lVar7 + 0xa4) = 0x40800000;
  *(byte *)(lVar7 + 0xa8) = *(byte *)(lVar7 + 0xa8) & 0xf0 | bVar3;
  plVar4 = (long *)FUN_10000d7d0();
  FUN_1003a985c(&local_70,plVar4);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))(plVar4);
  local_80[0] = 0x42200000;
  local_78 = 1;
  plVar4 = (long *)(**(code **)(*plVar4 + 0x10))(plVar4,local_80);
  local_90[0] = 0xbf800000;
  local_88 = 1;
  plVar4 = (long *)(**(code **)(*plVar4 + 0x28))(plVar4,local_90);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x70))();
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))();
  local_a0[0] = 0x40666666;
  local_98 = 1;
  (**(code **)(*plVar4 + 0x30))(plVar4,local_a0);
  plVar4 = (long *)FUN_10000bed8();
  FUN_1003a985c(&local_70,plVar4);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x68))(plVar4);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x70))(plVar4,PTR_s_Buff_Warhawk_B_Damage_10185b6f8);
  local_80[0] = 0x3dcccccd;
  local_78 = 1;
  (**(code **)(*plVar4 + 0x18))(plVar4,local_80);
  uVar5 = FUN_10000c784();
  FUN_1003a985c(&local_70,uVar5);
  lVar7 = FUN_10000ed74();
  FUN_1003a985c(lVar6,lVar7);
  *(undefined8 *)(lVar7 + 0x18) = 0;
  *(undefined1 *)(lVar7 + 0x20) = 1;
  *(undefined8 *)(lVar7 + 0x24) = 0;
  *(undefined8 *)(lVar7 + 0x34) = 0;
  *(undefined8 *)(lVar7 + 0x2c) = 0;
  *(undefined4 *)(lVar7 + 0x3c) = 0;
  *(undefined8 *)(lVar7 + 0x48) = 0xbf800000c0000000;
  *(undefined8 *)(lVar7 + 0x40) = 0xbf800000bf800000;
  *(undefined4 *)(lVar7 + 0x50) = 0x3f800000;
  *(undefined1 *)(lVar7 + 0x54) = 0xff;
  *(undefined8 *)(lVar7 + 0x60) = 0xffffffff00000000;
  *(undefined8 *)(lVar7 + 0x58) = 0xffffffff00040001;
  *(char *)(lVar7 + 0x6a) = (char)((uint)iVar1 >> 0x10);
  *(short *)(lVar7 + 0x68) = (short)iVar1;
  bVar3 = DAT_101d23a38 != '\0';
  *(undefined4 *)(lVar7 + 0xa4) = 0x40800000;
  *(byte *)(lVar7 + 0xa8) = *(byte *)(lVar7 + 0xa8) & 0xf0 | bVar3;
  plVar4 = (long *)FUN_10000bed8();
  FUN_1003a985c(lVar6,plVar4);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x68))(plVar4);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x70))(plVar4,PTR_s_Buff_Warhawk_TalentA_Heal_10185b700);
  local_80[0] = 0x3dcccccd;
  local_78 = 1;
  (**(code **)(*plVar4 + 0x18))(plVar4,local_80);
  uVar5 = FUN_10000c784();
  FUN_1003a985c(lVar6,uVar5);
  lVar6 = FUN_10000ceb8();
  FUN_1003a985c(&local_70,lVar6);
  *(undefined4 *)(lVar6 + 0x2c) = 0x3f000000;
  *(undefined8 *)(lVar6 + 0x10) = 0;
  uVar5 = FUN_10000d668();
  FUN_1003a985c(&local_70,uVar5);
  return local_70;
}




undefined8 FUN_100397c74(void)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  code *local_50;
  undefined4 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  local_40 = 0;
  uStack_38 = 0;
  lVar1 = FUN_10000d8b8();
  FUN_1003a985c(&local_40,lVar1);
  *(undefined1 *)(lVar1 + 0x10) = 1;
  lVar1 = FUN_10000ef8c();
  FUN_1003a985c(&local_40,lVar1);
  *(byte *)(lVar1 + 0x10) = *(byte *)(lVar1 + 0x10) & 0xe7 | 4;
  plVar2 = (long *)thunk_FUN_10000e0ac();
  FUN_1003a985c(&local_40,plVar2);
  (**(code **)(*plVar2 + 0x50))(plVar2,"Ability03_Aiming");
  plVar2 = (long *)thunk_FUN_10000e358();
  FUN_1003a985c(&local_40,plVar2);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x60))(plVar2,"Wrist");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Warhawk_C_Wrist");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,1);
  local_50 = (code *)CONCAT44(local_50._4_4_,0x3e19999a);
  local_48 = 1;
  (**(code **)(*plVar2 + 0x60))(plVar2,&local_50);
  plVar2 = (long *)thunk_FUN_10000e6f4();
  FUN_1003a985c(&local_40,plVar2);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x50))(plVar2,"ability3");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x18))(0x3dcccccd);
  (**(code **)(*plVar2 + 0x20))();
  plVar2 = (long *)thunk_FUN_10000e5dc();
  FUN_1003a985c(&local_40,plVar2);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x58))(plVar2,"Sound_Warhawk_C_LockOn");
  uVar3 = FUN_1010a1520();
  lVar1 = FUN_1010a0e0c(uVar3,0,"*KindredSoundBalance*",0);
  FUN_1003d04f8(*(undefined4 *)(lVar1 + 0x62c));
  (**(code **)(*plVar2 + 0x28))(plVar2);
  plVar2 = (long *)FUN_10000f300();
  FUN_1003a985c(&local_40,plVar2);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x50))(plVar2,"*Warhawk_C_Warning*",0);
  (**(code **)(*plVar2 + 0x20))(plVar2,FUN_10048fb04);
  plVar2 = (long *)FUN_10000bdf0();
  FUN_1003a985c(&local_40,plVar2);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x50))
                             (plVar2,PTR_s_Buff_Warhawk_Enhanced_BasicAttac_10185b6d8);
  local_50 = FUN_1003d05ec;
  local_48 = 3;
  (**(code **)(*plVar2 + 0x18))(plVar2,&local_50);
  lVar1 = FUN_10000c8e8();
  FUN_1003a985c(&local_40,lVar1);
  lVar4 = FUN_10049ab34(lVar1 + 0x10);
  *(undefined **)(lVar4 + 8) = PTR_s_Buff_Warhawk_Talent_TalentC_10185b708;
  plVar2 = (long *)FUN_10000bdf0();
  FUN_1003a985c(lVar1 + 200,plVar2);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x50))(plVar2,PTR_s_Buff_Warhawk_C_Targets_10185b710);
  local_50._0_4_ = 0x3fc00000;
  local_48 = 1;
  (**(code **)(*plVar2 + 0x18))(plVar2,&local_50);
  plVar2 = (long *)FUN_10000bdf0();
  FUN_1003a985c(lVar1 + 0xb0,plVar2);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x50))
                             (plVar2,PTR_s_Buff_Warhawk_C_TargetsTalent_10185b718);
  local_50 = (code *)CONCAT44(local_50._4_4_,0x3fc00000);
  local_48 = 1;
  (**(code **)(*plVar2 + 0x18))(plVar2,&local_50);
  plVar2 = (long *)thunk_FUN_10000da58();
  FUN_1003a985c(&local_40,plVar2);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x50))(plVar2,PTR_s_Ability__Warhawk__C_Aim_101859ff0,3,1)
  ;
  (**(code **)(*plVar2 + 0x30))();
  lVar1 = FUN_10000d8b8();
  FUN_1003a985c(&local_40,lVar1);
  *(undefined1 *)(lVar1 + 0x10) = 0;
  return local_40;
}




undefined8 FUN_100397fd4(void)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  code *local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  local_50 = 0;
  uStack_48 = 0;
  lVar1 = FUN_10000d8b8();
  FUN_1003a985c(&local_50,lVar1);
  *(undefined1 *)(lVar1 + 0x10) = 1;
  lVar1 = FUN_10000ef8c();
  FUN_1003a985c(&local_50,lVar1);
  *(byte *)(lVar1 + 0x10) = *(byte *)(lVar1 + 0x10) & 0xe7 | 4;
  plVar2 = (long *)thunk_FUN_10000e358();
  FUN_1003a985c(&local_50,plVar2);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x60))(plVar2,"Wrist");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Warhawk_C_Wrist");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,1);
  local_60._0_4_ = 0x3e19999a;
  local_58 = 1;
  (**(code **)(*plVar2 + 0x60))(plVar2,&local_60);
  plVar2 = (long *)thunk_FUN_10000e0ac();
  FUN_1003a985c(&local_50,plVar2);
  (**(code **)(*plVar2 + 0x50))(plVar2,"Ability03_Aiming");
  plVar2 = (long *)thunk_FUN_10000e5dc();
  FUN_1003a985c(&local_50,plVar2);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x58))(plVar2,"Sound_Warhawk_C_LockOn");
  uVar3 = FUN_1010a1520();
  lVar1 = FUN_1010a0e0c(uVar3,0,"*KindredSoundBalance*",0);
  FUN_1003d04f8(*(undefined4 *)(lVar1 + 0x62c));
  (**(code **)(*plVar2 + 0x28))(plVar2);
  plVar2 = (long *)FUN_10000f300();
  FUN_1003a985c(&local_50,plVar2);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x50))(plVar2,"*Warhawk_C_Warning*",0);
  (**(code **)(*plVar2 + 0x20))(plVar2,FUN_10048fb04);
  lVar1 = FUN_10000ceb8();
  FUN_1003a985c(&local_50,lVar1);
  *(undefined4 *)(lVar1 + 0x2c) = 0x3dcccccd;
  *(undefined8 *)(lVar1 + 0x10) = 0;
  lVar1 = FUN_10000ee30();
  FUN_1003a985c(&local_50,lVar1);
  *(char **)(lVar1 + 0x10) = "Warhawk_C_Warning";
  plVar2 = (long *)FUN_10000bed8();
  FUN_1003a985c(&local_50,plVar2);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x70))(plVar2,PTR_s_Buff_Warhawk_C_Control_10185b720);
  local_60 = (code *)CONCAT44(local_60._4_4_,0x40000000);
  local_58 = 1;
  (**(code **)(*plVar2 + 0x18))(plVar2,&local_60);
  uVar3 = FUN_10000c784();
  FUN_1003a985c(&local_50,uVar3);
  plVar2 = (long *)FUN_10000bdf0();
  FUN_1003a985c(&local_50,plVar2);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x50))
                             (plVar2,PTR_s_Buff_Warhawk_Enhanced_BasicAttac_10185b6d8);
  local_60 = FUN_1003d05ec;
  local_58 = 3;
  (**(code **)(*plVar2 + 0x18))(plVar2,&local_60);
  lVar1 = FUN_10000c8e8();
  FUN_1003a985c(&local_50,lVar1);
  lVar4 = FUN_10049ab34(lVar1 + 0x10);
  *(undefined **)(lVar4 + 8) = PTR_s_Buff_Warhawk_Talent_TalentC_10185b708;
  plVar2 = (long *)FUN_10000bdf0();
  FUN_1003a985c(lVar1 + 200,plVar2);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x50))(plVar2,PTR_s_Buff_Warhawk_C_Targets_10185b710);
  local_60._0_4_ = 0x3fc00000;
  local_58 = 1;
  (**(code **)(*plVar2 + 0x18))(plVar2,&local_60);
  plVar2 = (long *)FUN_10000bdf0();
  FUN_1003a985c(lVar1 + 0xb0,plVar2);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x50))
                             (plVar2,PTR_s_Buff_Warhawk_C_TargetsTalent_10185b718);
  local_60 = (code *)CONCAT44(local_60._4_4_,0x3fc00000);
  local_58 = 1;
  (**(code **)(*plVar2 + 0x18))(plVar2,&local_60);
  lVar1 = FUN_10000c8e8();
  FUN_1003a985c(&local_50,lVar1);
  lVar4 = FUN_10049ab34(lVar1 + 0x10);
  *(undefined **)(lVar4 + 8) = PTR_s_Buff_Warhawk_C_Targets_10185b710;
  plVar2 = (long *)thunk_FUN_10000da58();
  FUN_1003a985c(lVar1 + 0xb0,plVar2);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x50))(plVar2,PTR_s_Ability__Warhawk__C_Aim_101859ff0,3,1)
  ;
  (**(code **)(*plVar2 + 0x30))();
  lVar1 = FUN_10000c8e8();
  FUN_1003a985c(&local_50,lVar1);
  lVar4 = FUN_10049ab34(lVar1 + 0x10);
  *(undefined **)(lVar4 + 8) = PTR_s_Buff_Warhawk_C_TargetsTalent_10185b718;
  plVar2 = (long *)thunk_FUN_10000da58();
  FUN_1003a985c(lVar1 + 0xb0,plVar2);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x50))(plVar2,PTR_s_Ability__Warhawk__C_Aim_101859ff0,3,1)
  ;
  (**(code **)(*plVar2 + 0x30))();
  lVar1 = FUN_10000d8b8();
  FUN_1003a985c(&local_50,lVar1);
  *(undefined1 *)(lVar1 + 0x10) = 0;
  return local_50;
}




undefined8 FUN_100398418(void)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  code *local_50;
  undefined4 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  local_40 = 0;
  uStack_38 = 0;
  lVar1 = FUN_10000d8b8();
  FUN_1003a985c(&local_40,lVar1);
  *(undefined1 *)(lVar1 + 0x10) = 1;
  lVar1 = FUN_10000ee30();
  FUN_1003a985c(&local_40,lVar1);
  *(char **)(lVar1 + 0x10) = "Warhawk_C_Warning";
  plVar2 = (long *)FUN_10000bed8();
  FUN_1003a985c(&local_40,plVar2);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x70))(plVar2,PTR_s_Buff_Warhawk_C_Control_10185b720);
  local_50 = (code *)CONCAT44(local_50._4_4_,0x40000000);
  local_48 = 1;
  (**(code **)(*plVar2 + 0x18))(plVar2,&local_50);
  uVar3 = FUN_10000c784();
  FUN_1003a985c(&local_40,uVar3);
  plVar2 = (long *)thunk_FUN_10000e0ac();
  FUN_1003a985c(&local_40,plVar2);
  (**(code **)(*plVar2 + 0x50))(plVar2,"Ability03");
  lVar1 = FUN_10000ceb8();
  FUN_1003a985c(&local_40,lVar1);
  *(undefined4 *)(lVar1 + 0x2c) = 0x3f000000;
  *(undefined8 *)(lVar1 + 0x10) = 0;
  lVar1 = FUN_10000ee30();
  FUN_1003a985c(&local_40,lVar1);
  *(char **)(lVar1 + 0x10) = "Warhawk_C_Warning";
  lVar1 = FUN_10000f250();
  FUN_1003a985c(&local_40,lVar1);
  *(undefined4 *)(lVar1 + 0x10) = 0xc9;
  FUN_1003d266c(lVar1,"GunEmpoweredHigher");
  *(undefined1 *)(lVar1 + 0x30) = 1;
  uVar3 = FUN_10000c784();
  FUN_1003a985c(&local_40,uVar3);
  plVar2 = (long *)thunk_FUN_10000e5dc();
  FUN_1003a985c(&local_40,plVar2);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x58))(plVar2,"Sound_Warhawk_C_Fire");
  uVar3 = FUN_1010a1520();
  lVar1 = FUN_1010a0e0c(uVar3,0,"*KindredSoundBalance*",0);
  FUN_1003d04f8(*(undefined4 *)(lVar1 + 0x62c));
  (**(code **)(*plVar2 + 0x28))(plVar2);
  plVar2 = (long *)FUN_10000bdf0();
  FUN_1003a985c(&local_40,plVar2);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x50))
                             (plVar2,PTR_s_Buff_Warhawk_Enhanced_BasicAttac_10185b6d8);
  local_50 = FUN_1003d05ec;
  local_48 = 3;
  (**(code **)(*plVar2 + 0x18))(plVar2,&local_50);
  lVar1 = FUN_10000d8b8();
  FUN_1003a985c(&local_40,lVar1);
  *(undefined1 *)(lVar1 + 0x10) = 0;
  return local_40;
}




undefined8 FUN_100398648(void)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  undefined4 local_40 [2];
  undefined4 local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_30 = 0;
  uStack_28 = 0;
  uVar1 = FUN_10000c6d4();
  FUN_1003a985c(&local_30,uVar1);
  uVar1 = FUN_10000bb2c();
  FUN_1003a985c(&local_30,uVar1);
  lVar2 = FUN_10000bd3c();
  FUN_1003a985c(&local_30,lVar2);
  *(undefined **)(lVar2 + 0x10) = PTR_s_Buff_Withdraw_10185a458;
  *(undefined4 *)(lVar2 + 0x18) = 0x40800000;
  *(undefined2 *)(lVar2 + 0x68) = 1;
  *(byte *)(lVar2 + 0x6a) = *(byte *)(lVar2 + 0x6a) & 0xfe;
  lVar2 = FUN_10000ceb8();
  FUN_1003a985c(&local_30,lVar2);
  *(undefined4 *)(lVar2 + 0x2c) = 0x40000000;
  *(undefined8 *)(lVar2 + 0x10) = 0;
  plVar3 = (long *)thunk_FUN_10000e358();
  FUN_1003a985c(&local_30,plVar3);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x68))(plVar3,"Bone_LauncherHandle");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Warhawk_Withdraw");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x78))(plVar3,1);
  plVar3 = (long *)(**(code **)(*plVar3 + 0xb0))(plVar3,0);
  local_40[0] = 0x40733333;
  local_38 = 1;
  (**(code **)(*plVar3 + 0x60))(plVar3,local_40);
  plVar3 = (long *)thunk_FUN_10000e358();
  FUN_1003a985c(&local_30,plVar3);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x58))(plVar3);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Warhawk_Withdraw_Ground");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x78))(plVar3,0);
  plVar3 = (long *)(**(code **)(*plVar3 + 0xb0))(plVar3,0);
  local_40[0] = 0x3fcccccd;
  local_38 = 1;
  (**(code **)(*plVar3 + 0x60))(plVar3,local_40);
  uVar1 = FUN_10000c784();
  FUN_1003a985c(&local_30,uVar1);
  return local_30;
}




void FUN_1003987f4(void)

{
  FUN_1003d0600("Attack","Effect_Miho_AA",0);
  return;
}




void FUN_10039880c(void)

{
  FUN_1003d0600("AltAttack","Effect_Miho_AA_Alt",0);
  return;
}




void FUN_100398824(void)

{
  FUN_1003d0600("CritAttack","Effect_Miho_AA_Crit",2);
  return;
}




undefined8 FUN_10039883c(void)

{
  byte bVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined4 local_60 [2];
  undefined4 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  local_50 = 0;
  uStack_48 = 0;
  lVar2 = FUN_10000d8b8();
  FUN_1003a985c(&local_50,lVar2);
  *(undefined1 *)(lVar2 + 0x10) = 1;
  lVar2 = FUN_10000ef8c();
  FUN_1003a985c(&local_50,lVar2);
  *(byte *)(lVar2 + 0x10) = *(byte *)(lVar2 + 0x10) & 0xe7 | 4;
  plVar3 = (long *)thunk_FUN_10000e0ac();
  FUN_1003a985c(&local_50,plVar3);
  (**(code **)(*plVar3 + 0x50))(plVar3,"Ability01");
  plVar3 = (long *)thunk_FUN_10000e5dc();
  FUN_1003a985c(&local_50,plVar3);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x58))(plVar3,"Sound_Miho_AbilityA_01");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x18))(plVar3,"Sound_Miho_AbilityA_02");
  uVar4 = FUN_1010a1520();
  lVar2 = FUN_1010a0e0c(uVar4,0,"*KindredSoundBalance*",0);
  FUN_1003d0900(*(undefined4 *)(lVar2 + 0x64c));
  (**(code **)(*plVar3 + 0x28))(plVar3);
  lVar2 = FUN_10000ceb8();
  FUN_1003a985c(&local_50,lVar2);
  *(undefined4 *)(lVar2 + 0x2c) = 0x3ecccccd;
  *(undefined8 *)(lVar2 + 0x10) = 0;
  plVar3 = (long *)thunk_FUN_10000e358();
  FUN_1003a985c(&local_50,plVar3);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x50))(plVar3);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x58))();
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Miho_A_DashStartup");
  (**(code **)(*plVar3 + 0x78))(plVar3,0);
  plVar3 = (long *)FUN_10000bdf0();
  FUN_1003a985c(&local_50,plVar3);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x50))(plVar3,"Buff_Miho_A_Vanish");
  local_60[0] = 0x3e4ccccd;
  local_58 = 1;
  (**(code **)(*plVar3 + 0x18))(plVar3,local_60);
  plVar3 = (long *)FUN_10000bdf0();
  FUN_1003a985c(&local_50,plVar3);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x50))(plVar3,"Buff_Dodge");
  local_60[0] = 0x3e99999a;
  local_58 = 1;
  (**(code **)(*plVar3 + 0x18))(plVar3,local_60);
  plVar3 = (long *)thunk_FUN_10000e6f4();
  FUN_1003a985c(&local_50,plVar3);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x50))(plVar3,"ability1");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x18))(0x3dcccccd);
  (**(code **)(*plVar3 + 0x20))();
  plVar3 = (long *)FUN_10000bdf0();
  FUN_1003a985c(&local_50,plVar3);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x50))(plVar3,PTR_s_Buff_SelfProjectile_10185a530);
  local_60[0] = 0x3e99999a;
  local_58 = 1;
  plVar3 = (long *)(**(code **)(*plVar3 + 0x18))(plVar3,local_60);
  (**(code **)(*plVar3 + 0x48))(plVar3,0xd4);
  plVar3 = (long *)FUN_10000cd5c();
  FUN_1003a985c(&local_50,plVar3);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x88))(plVar3);
  local_60[0] = 0x3e4ccccd;
  local_58 = 1;
  plVar3 = (long *)(**(code **)(*plVar3 + 0xa8))(plVar3,local_60);
  (**(code **)(*plVar3 + 0xb0))(plVar3,1);
  lVar2 = FUN_10000ceb8();
  FUN_1003a985c(&local_50,lVar2);
  *(undefined4 *)(lVar2 + 0x2c) = 0x3dcccccd;
  *(undefined8 *)(lVar2 + 0x10) = 0;
  uVar4 = FUN_10000f9c0();
  FUN_1003a985c(&local_50,uVar4);
  lVar2 = FUN_1003e10f0();
  bVar1 = *(byte *)(lVar2 + 0xe5);
  lVar2 = FUN_10000ed74();
  FUN_1003a985c(&local_50,lVar2);
  *(undefined8 *)(lVar2 + 0x18) = 0;
  *(undefined1 *)(lVar2 + 0x20) = 1;
  *(undefined8 *)(lVar2 + 0x24) = 0;
  *(undefined8 *)(lVar2 + 0x34) = 0;
  *(undefined8 *)(lVar2 + 0x2c) = 0;
  *(undefined4 *)(lVar2 + 0x3c) = 0;
  *(undefined8 *)(lVar2 + 0x48) = 0xbf800000c0000000;
  *(undefined8 *)(lVar2 + 0x40) = 0xbf800000bf800000;
  *(undefined4 *)(lVar2 + 0x50) = 0x3f800000;
  *(undefined1 *)(lVar2 + 0x54) = 0xff;
  *(undefined8 *)(lVar2 + 0x60) = 0xffffffff00000000;
  *(undefined8 *)(lVar2 + 0x58) = 0xffffffff00040000;
  *(byte *)(lVar2 + 0x6a) = bVar1 | 0x14;
  *(undefined2 *)(lVar2 + 0x68) = 0x4120;
  *(undefined4 *)(lVar2 + 0xa4) = 0x40200000;
  *(byte *)(lVar2 + 0xa8) = *(byte *)(lVar2 + 0xa8) & 0xf0 | 1;
  plVar3 = (long *)FUN_10000bed8();
  FUN_1003a985c(&local_50,plVar3);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x70))(plVar3,PTR_s_Buff_Miho_A_ApplyDamage_10185b788);
  local_60[0] = 0x3e99999a;
  local_58 = 1;
  (**(code **)(*plVar3 + 0x18))(plVar3,local_60);
  plVar3 = (long *)thunk_FUN_10000e358();
  FUN_1003a985c(&local_50,plVar3);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x68))(plVar3,"Bone_Sword");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Miho_Sword");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x78))(plVar3,1);
  plVar3 = (long *)(**(code **)(*plVar3 + 0xb0))(plVar3,0);
  local_60[0] = 0x3f800000;
  local_58 = 1;
  (**(code **)(*plVar3 + 0x60))(plVar3,local_60);
  plVar3 = (long *)thunk_FUN_10000e358();
  FUN_1003a985c(&local_50,plVar3);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x50))(plVar3);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x58))();
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Miho_A_Dash_Cut");
  (**(code **)(*plVar3 + 0x78))(plVar3,0);
  plVar3 = (long *)FUN_10000c5ec();
  FUN_1003a985c(&local_50,plVar3);
  (**(code **)(*plVar3 + 0x50))(plVar3,PTR_s_Buff_Miho_C_SlashCounter_10185b790);
  lVar2 = FUN_10000d8b8();
  FUN_1003a985c(&local_50,lVar2);
  *(undefined1 *)(lVar2 + 0x10) = 0;
  return local_50;
}




undefined8 FUN_100398d60(void)

{
  byte bVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  undefined4 local_50 [2];
  undefined4 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  local_40 = 0;
  uStack_38 = 0;
  lVar2 = FUN_10000d8b8();
  FUN_1003a985c(&local_40,lVar2);
  *(undefined1 *)(lVar2 + 0x10) = 1;
  lVar2 = FUN_10000ef8c();
  FUN_1003a985c(&local_40,lVar2);
  *(byte *)(lVar2 + 0x10) = *(byte *)(lVar2 + 0x10) & 0xe7 | 4;
  uVar3 = FUN_10000c6d4();
  FUN_1003a985c(&local_40,uVar3);
  plVar4 = (long *)thunk_FUN_10000e6f4();
  FUN_1003a985c(&local_40,plVar4);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))(plVar4,"ability2");
  plVar4 = (long *)(**(code **)(*plVar4 + 0x18))(0x3dcccccd);
  (**(code **)(*plVar4 + 0x20))();
  plVar4 = (long *)thunk_FUN_10000e0ac();
  FUN_1003a985c(&local_40,plVar4);
  (**(code **)(*plVar4 + 0x50))(plVar4,"Ability02_Prep");
  plVar4 = (long *)FUN_10000bdf0();
  FUN_1003a985c(&local_40,plVar4);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))(plVar4,PTR_s_Buff_Miho_C_SlashCounter_10185b790);
  local_50[0] = 0x40000000;
  local_48 = 1;
  (**(code **)(*plVar4 + 0x18))(plVar4,local_50);
  plVar4 = (long *)thunk_FUN_10000e358();
  FUN_1003a985c(&local_40,plVar4);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x68))(plVar4,"Bone_Sword");
  plVar4 = (long *)(**(code **)(*plVar4 + 0x48))(plVar4,"Effect_Miho_Sword");
  plVar4 = (long *)(**(code **)(*plVar4 + 0x78))(plVar4,1);
  plVar4 = (long *)(**(code **)(*plVar4 + 0xb0))(plVar4,0);
  local_50[0] = 0x3f800000;
  local_48 = 1;
  (**(code **)(*plVar4 + 0x60))(plVar4,local_50);
  lVar2 = FUN_10000ceb8();
  FUN_1003a985c(&local_40,lVar2);
  *(undefined4 *)(lVar2 + 0x2c) = 0x3e99999a;
  *(undefined8 *)(lVar2 + 0x10) = 0;
  plVar4 = (long *)thunk_FUN_10000e358();
  FUN_1003a985c(&local_40,plVar4);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x58))(plVar4);
  (**(code **)(*plVar4 + 0x48))(plVar4,"Effect_Miho_B_Slash_Primary");
  plVar4 = (long *)thunk_FUN_10000e5dc();
  FUN_1003a985c(&local_40,plVar4);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x58))(plVar4,"Sound_Miho_AbilityB_Slash1");
  plVar4 = (long *)(**(code **)(*plVar4 + 0x18))(plVar4,"Sound_Miho_AbilityB_Slash2");
  plVar4 = (long *)(**(code **)(*plVar4 + 0x18))(plVar4,"Sound_Miho_AbilityB_Slash3");
  plVar4 = (long *)(**(code **)(*plVar4 + 0x18))(plVar4,"Sound_Miho_AbilityB_Slash4");
  uVar3 = FUN_1010a1520();
  lVar2 = FUN_1010a0e0c(uVar3,0,"*KindredSoundBalance*",0);
  FUN_1003d0900(*(undefined4 *)(lVar2 + 0x650));
  (**(code **)(*plVar4 + 0x28))(plVar4);
  lVar2 = FUN_1003e10f0();
  bVar1 = *(byte *)(lVar2 + 0xe5);
  lVar2 = FUN_10000ecbc();
  FUN_1003a985c(&local_40,lVar2);
  *(code **)(lVar2 + 0x70) = FUN_1003d0964;
  *(code **)(lVar2 + 0x78) = FUN_1003d09b0;
  *(undefined4 *)(lVar2 + 0x88) = 0x3f4ccccd;
  *(undefined8 *)(lVar2 + 0x18) = 0;
  *(undefined1 *)(lVar2 + 0x20) = 1;
  *(undefined8 *)(lVar2 + 0x24) = 0;
  *(undefined8 *)(lVar2 + 0x34) = 0;
  *(undefined8 *)(lVar2 + 0x2c) = 0;
  *(undefined4 *)(lVar2 + 0x3c) = 0;
  *(undefined8 *)(lVar2 + 0x48) = 0xbf800000c0000000;
  *(undefined8 *)(lVar2 + 0x40) = 0xbf800000bf800000;
  *(undefined4 *)(lVar2 + 0x50) = 0x3f266666;
  *(undefined1 *)(lVar2 + 0x54) = 0xff;
  *(undefined8 *)(lVar2 + 0x60) = 0xffffffff00000000;
  *(undefined8 *)(lVar2 + 0x58) = 0xffffffff00040000;
  *(byte *)(lVar2 + 0x6a) = bVar1 | 0x14;
  *(undefined2 *)(lVar2 + 0x68) = 0x6120;
  plVar4 = (long *)FUN_10000bed8();
  FUN_1003a985c(&local_40,plVar4);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x70))(plVar4,PTR_s_Buff_Miho_B_ApplyDamage_10185b798);
  local_50[0] = 0x3dcccccd;
  local_48 = 1;
  (**(code **)(*plVar4 + 0x18))(plVar4,local_50);
  lVar2 = FUN_10000ceb8();
  FUN_1003a985c(&local_40,lVar2);
  *(undefined4 *)(lVar2 + 0x2c) = 0x3dcccccd;
  *(undefined8 *)(lVar2 + 0x10) = 0;
  lVar2 = FUN_10000c8e8();
  FUN_1003a985c(&local_40,lVar2);
  lVar5 = FUN_10049ab34(lVar2 + 0x10);
  *(undefined **)(lVar5 + 8) = PTR_s_Buff_Miho_C_SlashCounter_10185b790;
  plVar4 = (long *)thunk_FUN_10000da58();
  FUN_1003a985c(lVar2 + 0xb0,plVar4);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))(plVar4,PTR_s_Ability__Miho__B_Slash_10185a030,3,1);
  (**(code **)(*plVar4 + 0x30))();
  lVar2 = FUN_10000d8b8();
  FUN_1003a985c(&local_40,lVar2);
  *(undefined1 *)(lVar2 + 0x10) = 0;
  return local_40;
}




undefined8 FUN_100399190(void)

{
  byte bVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  undefined4 local_60 [2];
  undefined4 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  local_50 = 0;
  uStack_48 = 0;
  uVar2 = FUN_10000c6d4();
  FUN_1003a985c(&local_50,uVar2);
  lVar3 = FUN_10000d8b8();
  FUN_1003a985c(&local_50,lVar3);
  *(undefined1 *)(lVar3 + 0x10) = 1;
  lVar3 = FUN_10000ef8c();
  FUN_1003a985c(&local_50,lVar3);
  *(byte *)(lVar3 + 0x10) = *(byte *)(lVar3 + 0x10) & 0xe7 | 4;
  plVar4 = (long *)FUN_10000bdf0();
  FUN_1003a985c(&local_50,plVar4);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))(plVar4,PTR_s_Buff_Miho_C_SlashCounter_10185b790);
  local_60[0] = 0x40000000;
  local_58 = 1;
  (**(code **)(*plVar4 + 0x18))(plVar4,local_60);
  lVar3 = FUN_10000c8e8();
  FUN_1003a985c(&local_50,lVar3);
  lVar5 = FUN_10049ab34(lVar3 + 0x10);
  *(undefined **)(lVar5 + 8) = PTR_s_Buff_Miho_B_FinalSlash_10185b7a0;
  plVar4 = (long *)thunk_FUN_10000e0ac();
  FUN_1003a985c(lVar3 + 0xb0,plVar4);
  (**(code **)(*plVar4 + 0x50))(plVar4,"Ability02_Final");
  plVar4 = (long *)thunk_FUN_10000e0ac();
  FUN_1003a985c(lVar3 + 200,plVar4);
  (**(code **)(*plVar4 + 0x50))(plVar4,"Ability02");
  plVar4 = (long *)thunk_FUN_10000e358();
  FUN_1003a985c(&local_50,plVar4);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x68))(plVar4,"Bone_Sword");
  plVar4 = (long *)(**(code **)(*plVar4 + 0x48))(plVar4,"Effect_Miho_Sword");
  plVar4 = (long *)(**(code **)(*plVar4 + 0x78))(plVar4,1);
  plVar4 = (long *)(**(code **)(*plVar4 + 0xb0))(plVar4,0);
  local_60[0] = 0x3f800000;
  local_58 = 1;
  (**(code **)(*plVar4 + 0x60))(plVar4,local_60);
  plVar4 = (long *)thunk_FUN_10000e358();
  FUN_1003a985c(&local_50,plVar4);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x58))(plVar4);
  (**(code **)(*plVar4 + 0x48))(plVar4,"Effect_Miho_B_Slash_Secondary");
  plVar4 = (long *)thunk_FUN_10000e5dc();
  FUN_1003a985c(&local_50,plVar4);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x58))(plVar4,"Sound_Miho_AbilityB_Slash1");
  plVar4 = (long *)(**(code **)(*plVar4 + 0x18))(plVar4,"Sound_Miho_AbilityB_Slash2");
  plVar4 = (long *)(**(code **)(*plVar4 + 0x18))(plVar4,"Sound_Miho_AbilityB_Slash3");
  plVar4 = (long *)(**(code **)(*plVar4 + 0x18))(plVar4,"Sound_Miho_AbilityB_Slash4");
  uVar2 = FUN_1010a1520();
  lVar3 = FUN_1010a0e0c(uVar2,0,"*KindredSoundBalance*",0);
  FUN_1003d0900(*(undefined4 *)(lVar3 + 0x650));
  (**(code **)(*plVar4 + 0x28))(plVar4);
  lVar3 = FUN_10000ceb8();
  FUN_1003a985c(&local_50,lVar3);
  *(undefined4 *)(lVar3 + 0x2c) = 0x3dcccccd;
  *(undefined8 *)(lVar3 + 0x10) = 0;
  lVar3 = FUN_1003e10f0();
  bVar1 = *(byte *)(lVar3 + 0xe5);
  lVar3 = FUN_10000ecbc();
  FUN_1003a985c(&local_50,lVar3);
  *(code **)(lVar3 + 0x70) = FUN_1003d0964;
  *(code **)(lVar3 + 0x78) = FUN_1003d09b0;
  *(undefined4 *)(lVar3 + 0x88) = 0x3f4ccccd;
  *(undefined8 *)(lVar3 + 0x18) = 0;
  *(undefined1 *)(lVar3 + 0x20) = 1;
  *(undefined8 *)(lVar3 + 0x24) = 0;
  *(undefined8 *)(lVar3 + 0x34) = 0;
  *(undefined8 *)(lVar3 + 0x2c) = 0;
  *(undefined4 *)(lVar3 + 0x3c) = 0;
  *(undefined8 *)(lVar3 + 0x48) = 0xbf800000c0000000;
  *(undefined8 *)(lVar3 + 0x40) = 0xbf800000bf800000;
  *(undefined4 *)(lVar3 + 0x50) = 0x3f266666;
  *(undefined1 *)(lVar3 + 0x54) = 0xff;
  *(undefined8 *)(lVar3 + 0x60) = 0xffffffff00000000;
  *(undefined8 *)(lVar3 + 0x58) = 0xffffffff00040000;
  *(byte *)(lVar3 + 0x6a) = bVar1 | 0x14;
  *(undefined2 *)(lVar3 + 0x68) = 0x6120;
  plVar4 = (long *)FUN_10000bed8();
  FUN_1003a985c(&local_50,plVar4);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x70))(plVar4,PTR_s_Buff_Miho_B_ApplyDamage_10185b798);
  local_60[0] = 0x3dcccccd;
  local_58 = 1;
  (**(code **)(*plVar4 + 0x18))(plVar4,local_60);
  lVar3 = FUN_10000ceb8();
  FUN_1003a985c(&local_50,lVar3);
  *(undefined4 *)(lVar3 + 0x2c) = 0x3dcccccd;
  *(undefined8 *)(lVar3 + 0x10) = 0;
  lVar3 = FUN_10000c8e8();
  FUN_1003a985c(&local_50,lVar3);
  lVar5 = FUN_10049ab34(lVar3 + 0x10);
  *(undefined **)(lVar5 + 8) = PTR_s_Buff_Miho_C_SlashCounter_10185b790;
  plVar4 = (long *)thunk_FUN_10000da58();
  FUN_1003a985c(lVar3 + 0xb0,plVar4);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))(plVar4,PTR_s_Ability__Miho__B_Slash_10185a030,3,1);
  (**(code **)(*plVar4 + 0x30))();
  lVar3 = FUN_10000d8b8();
  FUN_1003a985c(&local_50,lVar3);
  *(undefined1 *)(lVar3 + 0x10) = 0;
  return local_50;
}




undefined8 FUN_1003995d0(void)

{
  long *plVar1;
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_30 = 0;
  uStack_28 = 0;
  plVar1 = (long *)FUN_10000c5ec();
  FUN_1003a985c(&local_30,plVar1);
  (**(code **)(*plVar1 + 0x50))(plVar1,PTR_s_Buff_Miho_C_SlashCounter_10185b790);
  return local_30;
}




undefined8 FUN_100399624(void)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined4 local_80 [2];
  undefined4 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  local_70 = 0;
  uStack_68 = 0;
  lVar1 = FUN_10000d8b8();
  FUN_1003a985c(&local_70,lVar1);
  *(undefined1 *)(lVar1 + 0x10) = 1;
  lVar1 = FUN_10000ef8c();
  FUN_1003a985c(&local_70,lVar1);
  *(byte *)(lVar1 + 0x10) = *(byte *)(lVar1 + 0x10) & 0xe7 | 4;
  plVar2 = (long *)thunk_FUN_10000e0ac();
  FUN_1003a985c(&local_70,plVar2);
  (**(code **)(*plVar2 + 0x50))(plVar2,"Ability03");
  plVar2 = (long *)thunk_FUN_10000e5dc();
  FUN_1003a985c(&local_70,plVar2);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x58))(plVar2,"Sound_Miho_AbilityC");
  uVar3 = FUN_1010a1520();
  lVar1 = FUN_1010a0e0c(uVar3,0,"*KindredSoundBalance*",0);
  FUN_1003d0900(*(undefined4 *)(lVar1 + 0x658));
  (**(code **)(*plVar2 + 0x28))(plVar2);
  plVar2 = (long *)thunk_FUN_10000e6f4();
  FUN_1003a985c(&local_70,plVar2);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x50))(plVar2,"ability3");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x18))(0x3e4ccccd);
  (**(code **)(*plVar2 + 0x20))();
  lVar1 = FUN_10000ceb8();
  FUN_1003a985c(&local_70,lVar1);
  *(undefined4 *)(lVar1 + 0x2c) = 0x3dcccccd;
  *(undefined8 *)(lVar1 + 0x10) = 0;
  plVar2 = (long *)thunk_FUN_10000e358();
  FUN_1003a985c(&local_70,plVar2);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x50))(plVar2);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x58))();
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Miho_C_Slash");
  (**(code **)(*plVar2 + 0xb0))(plVar2,0);
  lVar1 = FUN_10000ceb8();
  FUN_1003a985c(&local_70,lVar1);
  *(undefined4 *)(lVar1 + 0x2c) = 0x3dcccccd;
  *(undefined8 *)(lVar1 + 0x10) = 0;
  plVar2 = (long *)thunk_FUN_10000e358();
  FUN_1003a985c(&local_70,plVar2);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x68))(plVar2,"Bone_Sword");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Miho_Sword");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0xb0))(plVar2,0);
  local_80[0] = 0x3fd9999a;
  local_78 = 1;
  (**(code **)(*plVar2 + 0x60))(plVar2,local_80);
  plVar2 = (long *)FUN_10000f300();
  FUN_1003a985c(&local_70,plVar2);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x50))(plVar2,"*Miho_B_Wave*",1);
  uVar3 = (**(code **)(*plVar2 + 0x18))(plVar2,"B_L2");
  plVar2 = (long *)FUN_10000f300();
  FUN_1003a985c(&local_70,plVar2);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x50))(plVar2,"*Miho_B_Wave*",1);
  uVar4 = (**(code **)(*plVar2 + 0x18))(plVar2,"B_L1");
  plVar2 = (long *)FUN_10000f300();
  FUN_1003a985c(&local_70,plVar2);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x50))(plVar2,"*Miho_B_Wave*",1);
  uVar5 = (**(code **)(*plVar2 + 0x18))(plVar2,"B_R1");
  plVar2 = (long *)FUN_10000f300();
  FUN_1003a985c(&local_70,plVar2);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x50))(plVar2,"*Miho_B_Wave*",1);
  uVar6 = (**(code **)(*plVar2 + 0x18))(plVar2,"B_R2");
  plVar2 = (long *)FUN_10000f300();
  FUN_1003a985c(&local_70,plVar2);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x50))(plVar2,"*Miho_C_CenterWave*",1);
  uVar7 = (**(code **)(*plVar2 + 0x18))(plVar2,"B_F2");
  plVar2 = (long *)FUN_10000bfc0();
  FUN_1003a985c(&local_70,plVar2);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x50))(plVar2,PTR_s_Buff_Miho_KillSelf_10185b7a8,uVar3);
  local_80[0] = 0x3f666666;
  local_78 = 1;
  (**(code **)(*plVar2 + 0x18))(plVar2,local_80);
  plVar2 = (long *)FUN_10000bfc0();
  FUN_1003a985c(&local_70,plVar2);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x50))(plVar2,PTR_s_Buff_Miho_KillSelf_10185b7a8,uVar4);
  local_80[0] = 0x3f666666;
  local_78 = 1;
  (**(code **)(*plVar2 + 0x18))(plVar2,local_80);
  plVar2 = (long *)FUN_10000bfc0();
  FUN_1003a985c(&local_70,plVar2);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x50))(plVar2,PTR_s_Buff_Miho_KillSelf_10185b7a8,uVar5);
  local_80[0] = 0x3f666666;
  local_78 = 1;
  (**(code **)(*plVar2 + 0x18))(plVar2,local_80);
  plVar2 = (long *)FUN_10000bfc0();
  FUN_1003a985c(&local_70,plVar2);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x50))(plVar2,PTR_s_Buff_Miho_KillSelf_10185b7a8,uVar6);
  local_80[0] = 0x3f666666;
  local_78 = 1;
  (**(code **)(*plVar2 + 0x18))(plVar2,local_80);
  plVar2 = (long *)FUN_10000bfc0();
  FUN_1003a985c(&local_70,plVar2);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x50))(plVar2,PTR_s_Buff_Miho_KillSelf_10185b7a8,uVar7);
  local_80[0] = 0x3f666666;
  local_78 = 1;
  (**(code **)(*plVar2 + 0x18))(plVar2,local_80);
  lVar1 = FUN_10000ceb8();
  FUN_1003a985c(&local_70,lVar1);
  *(undefined4 *)(lVar1 + 0x2c) = 0x3f0ccccd;
  *(undefined8 *)(lVar1 + 0x10) = 0;
  plVar2 = (long *)thunk_FUN_10000e358();
  FUN_1003a985c(&local_70,plVar2);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x50))(plVar2);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x58))();
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Miho_C_Slash");
  (**(code **)(*plVar2 + 0xb0))(plVar2,0);
  lVar1 = FUN_10000ceb8();
  FUN_1003a985c(&local_70,lVar1);
  *(undefined4 *)(lVar1 + 0x2c) = 0x3e19999a;
  *(undefined8 *)(lVar1 + 0x10) = 0;
  plVar2 = (long *)FUN_10000bfc0();
  FUN_1003a985c(&local_70,plVar2);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x50))(plVar2,PTR_s_Buff_Miho_Wave_10185b7b0,uVar3);
  (**(code **)(*plVar2 + 0x20))(plVar2,FUN_1003a4858);
  plVar2 = (long *)FUN_10000bfc0();
  FUN_1003a985c(&local_70,plVar2);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x50))(plVar2,PTR_s_Buff_Miho_Wave_10185b7b0,uVar4);
  (**(code **)(*plVar2 + 0x20))(plVar2,FUN_1003a4858);
  plVar2 = (long *)FUN_10000bfc0();
  FUN_1003a985c(&local_70,plVar2);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x50))(plVar2,PTR_s_Buff_Miho_Wave_10185b7b0,uVar5);
  (**(code **)(*plVar2 + 0x20))(plVar2,FUN_1003a4858);
  plVar2 = (long *)FUN_10000bfc0();
  FUN_1003a985c(&local_70,plVar2);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x50))(plVar2,PTR_s_Buff_Miho_Wave_10185b7b0,uVar6);
  (**(code **)(*plVar2 + 0x20))(plVar2,FUN_1003a4858);
  plVar2 = (long *)FUN_10000bfc0();
  FUN_1003a985c(&local_70,plVar2);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x50))(plVar2,PTR_s_Buff_Miho_Wave_10185b7b0,uVar7);
  (**(code **)(*plVar2 + 0x20))(plVar2,FUN_1003a4858);
  lVar1 = FUN_10000f250();
  FUN_1003a985c(&local_70,lVar1);
  *(undefined4 *)(lVar1 + 0x10) = 0xd3;
  FUN_1003d266c(lVar1,"B_L1");
  *(undefined4 *)(lVar1 + 0x34) = 1;
  lVar1 = FUN_10000f250();
  FUN_1003a985c(&local_70,lVar1);
  *(undefined4 *)(lVar1 + 0x10) = 0xd3;
  FUN_1003d266c(lVar1,"B_R1");
  *(undefined4 *)(lVar1 + 0x34) = 1;
  lVar1 = FUN_10000f250();
  FUN_1003a985c(&local_70,lVar1);
  *(undefined4 *)(lVar1 + 0x10) = 0xd3;
  FUN_1003d266c(lVar1,"B_L2");
  *(undefined4 *)(lVar1 + 0x34) = 1;
  lVar1 = FUN_10000f250();
  FUN_1003a985c(&local_70,lVar1);
  *(undefined4 *)(lVar1 + 0x10) = 0xd3;
  FUN_1003d266c(lVar1,"B_R2");
  *(undefined4 *)(lVar1 + 0x34) = 1;
  plVar2 = (long *)FUN_10000bfc0();
  FUN_1003a985c(&local_70,plVar2);
  (**(code **)(*plVar2 + 0x50))(plVar2,PTR_s_Buff_Miho_KillSelf_10185b7a8,uVar3);
  plVar2 = (long *)FUN_10000bfc0();
  FUN_1003a985c(&local_70,plVar2);
  (**(code **)(*plVar2 + 0x50))(plVar2,PTR_s_Buff_Miho_KillSelf_10185b7a8,uVar4);
  plVar2 = (long *)FUN_10000bfc0();
  FUN_1003a985c(&local_70,plVar2);
  (**(code **)(*plVar2 + 0x50))(plVar2,PTR_s_Buff_Miho_KillSelf_10185b7a8,uVar5);
  plVar2 = (long *)FUN_10000bfc0();
  FUN_1003a985c(&local_70,plVar2);
  (**(code **)(*plVar2 + 0x50))(plVar2,PTR_s_Buff_Miho_KillSelf_10185b7a8,uVar6);
  plVar2 = (long *)FUN_10000bfc0();
  FUN_1003a985c(&local_70,plVar2);
  (**(code **)(*plVar2 + 0x50))(plVar2,PTR_s_Buff_Miho_KillSelf_10185b7a8,uVar7);
  lVar1 = FUN_10000d8b8();
  FUN_1003a985c(&local_70,lVar1);
  *(undefined1 *)(lVar1 + 0x10) = 0;
  return local_70;
}




undefined8 FUN_100399ed4(void)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 local_40;
  undefined8 uStack_38;
  
  local_40 = 0;
  uStack_38 = 0;
  lVar1 = FUN_10000ef8c();
  FUN_1003a985c(&local_40,lVar1);
  *(byte *)(lVar1 + 0x10) = *(byte *)(lVar1 + 0x10) & 0xe7 | 4;
  plVar2 = (long *)thunk_FUN_10000e0ac();
  FUN_1003a985c(&local_40,plVar2);
  (**(code **)(*plVar2 + 0x58))(plVar2,"Attack");
  lVar1 = FUN_10000ceb8();
  FUN_1003a985c(&local_40,lVar1);
  *(code **)(lVar1 + 0x10) = FUN_1003a24a0;
  *(code **)(lVar1 + 0x18) = FUN_1003c5148;
  lVar3 = FUN_10000c8e8();
  FUN_1003a985c(&local_40,lVar3);
  lVar1 = FUN_10049ab34(lVar3 + 0x10);
  *(undefined **)(lVar1 + 8) = PTR_s_Buff_Ishtar_C_Empowerment_10185b7e0;
  lVar1 = lVar3 + 0xb0;
  lVar4 = FUN_10000f250();
  FUN_1003a985c(lVar1,lVar4);
  *(undefined4 *)(lVar4 + 0x10) = 0xcc;
  FUN_1003d266c(lVar4,"EmpoweredShot_1");
  lVar4 = FUN_10000f250();
  FUN_1003a985c(lVar1,lVar4);
  *(undefined4 *)(lVar4 + 0x10) = 0xcc;
  FUN_1003d266c(lVar4,"EmpoweredShot_2");
  plVar2 = (long *)thunk_FUN_10000e5dc();
  FUN_1003a985c(lVar1,plVar2);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x58))(plVar2,"Sound_Ishtar_Empowered_Attack_01");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x18))(plVar2,"Sound_Ishtar_Empowered_Attack_02");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x18))(plVar2,"Sound_Ishtar_Empowered_Attack_03");
  uVar5 = FUN_1010a1520();
  lVar1 = FUN_1010a0e0c(uVar5,0,"*KindredSoundBalance*",0);
  FUN_1003d0cf8(*(undefined4 *)(lVar1 + 0x674));
  (**(code **)(*plVar2 + 0x28))(plVar2);
  lVar1 = FUN_10000f250();
  FUN_1003a985c(lVar3 + 200,lVar1);
  *(undefined4 *)(lVar1 + 0x10) = 0xca;
  FUN_1003d266c(lVar1,"Left_Hand");
  plVar2 = (long *)thunk_FUN_10000e5dc();
  FUN_1003a985c(lVar3 + 200,plVar2);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x58))(plVar2,"Sound_Ishtar_Default_Attack_01");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x18))(plVar2,"Sound_Ishtar_Default_Attack_02");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x18))(plVar2,"Sound_Ishtar_Default_Attack_03");
  uVar5 = FUN_1010a1520();
  lVar1 = FUN_1010a0e0c(uVar5,0,"*KindredSoundBalance*",0);
  FUN_1003d0cf8(*(undefined4 *)(lVar1 + 0x664));
  (**(code **)(*plVar2 + 0x28))(plVar2);
  lVar1 = FUN_10000c3b0();
  FUN_1003a985c(&local_40,lVar1);
  *(code **)(lVar1 + 0x10) = FUN_1003d0a94;
  uVar5 = FUN_10000f034();
  FUN_1003a985c(&local_40,uVar5);
  return local_40;
}




undefined8 FUN_10039a16c(void)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 local_40;
  undefined8 uStack_38;
  
  local_40 = 0;
  uStack_38 = 0;
  lVar1 = FUN_10000ef8c();
  FUN_1003a985c(&local_40,lVar1);
  *(byte *)(lVar1 + 0x10) = *(byte *)(lVar1 + 0x10) & 0xe7 | 4;
  plVar2 = (long *)thunk_FUN_10000e0ac();
  FUN_1003a985c(&local_40,plVar2);
  (**(code **)(*plVar2 + 0x58))(plVar2,"AltAttack");
  lVar1 = FUN_10000ceb8();
  FUN_1003a985c(&local_40,lVar1);
  *(code **)(lVar1 + 0x10) = FUN_1003a24a0;
  *(code **)(lVar1 + 0x18) = FUN_1003c5148;
  lVar3 = FUN_10000c8e8();
  FUN_1003a985c(&local_40,lVar3);
  lVar1 = FUN_10049ab34(lVar3 + 0x10);
  *(undefined **)(lVar1 + 8) = PTR_s_Buff_Ishtar_C_Empowerment_10185b7e0;
  lVar1 = lVar3 + 0xb0;
  lVar4 = FUN_10000f250();
  FUN_1003a985c(lVar1,lVar4);
  *(undefined4 *)(lVar4 + 0x10) = 0xcc;
  FUN_1003d266c(lVar4,"EmpoweredShot_1");
  lVar4 = FUN_10000f250();
  FUN_1003a985c(lVar1,lVar4);
  *(undefined4 *)(lVar4 + 0x10) = 0xcc;
  FUN_1003d266c(lVar4,"EmpoweredShot_2");
  plVar2 = (long *)thunk_FUN_10000e5dc();
  FUN_1003a985c(lVar1,plVar2);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x58))(plVar2,"Sound_Ishtar_Empowered_Attack_01");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x18))(plVar2,"Sound_Ishtar_Empowered_Attack_02");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x18))(plVar2,"Sound_Ishtar_Empowered_Attack_03");
  uVar5 = FUN_1010a1520();
  lVar1 = FUN_1010a0e0c(uVar5,0,"*KindredSoundBalance*",0);
  FUN_1003d0cf8(*(undefined4 *)(lVar1 + 0x674));
  (**(code **)(*plVar2 + 0x28))(plVar2);
  lVar1 = FUN_10000f250();
  FUN_1003a985c(lVar3 + 200,lVar1);
  *(undefined4 *)(lVar1 + 0x10) = 0xca;
  FUN_1003d266c(lVar1,"Right_Hand");
  plVar2 = (long *)thunk_FUN_10000e5dc();
  FUN_1003a985c(lVar3 + 200,plVar2);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x58))(plVar2,"Sound_Ishtar_Default_Attack_01");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x18))(plVar2,"Sound_Ishtar_Default_Attack_02");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x18))(plVar2,"Sound_Ishtar_Default_Attack_03");
  uVar5 = FUN_1010a1520();
  lVar1 = FUN_1010a0e0c(uVar5,0,"*KindredSoundBalance*",0);
  FUN_1003d0cf8(*(undefined4 *)(lVar1 + 0x664));
  (**(code **)(*plVar2 + 0x28))(plVar2);
  lVar1 = FUN_10000c3b0();
  FUN_1003a985c(&local_40,lVar1);
  *(code **)(lVar1 + 0x10) = FUN_1003d0a94;
  uVar5 = FUN_10000f034();
  FUN_1003a985c(&local_40,uVar5);
  return local_40;
}




undefined8 FUN_10039a404(void)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 local_40;
  undefined8 uStack_38;
  
  local_40 = 0;
  uStack_38 = 0;
  lVar1 = FUN_10000ef8c();
  FUN_1003a985c(&local_40,lVar1);
  *(byte *)(lVar1 + 0x10) = *(byte *)(lVar1 + 0x10) & 0xe7 | 4;
  plVar2 = (long *)thunk_FUN_10000e0ac();
  FUN_1003a985c(&local_40,plVar2);
  (**(code **)(*plVar2 + 0x58))(plVar2,"CritAttack");
  lVar1 = FUN_10000ceb8();
  FUN_1003a985c(&local_40,lVar1);
  *(code **)(lVar1 + 0x10) = FUN_1003a24a0;
  *(code **)(lVar1 + 0x18) = FUN_1003c5148;
  lVar3 = FUN_10000c8e8();
  FUN_1003a985c(&local_40,lVar3);
  lVar1 = FUN_10049ab34(lVar3 + 0x10);
  *(undefined **)(lVar1 + 8) = PTR_s_Buff_Ishtar_C_Empowerment_10185b7e0;
  lVar1 = lVar3 + 0xb0;
  lVar4 = FUN_10000f250();
  FUN_1003a985c(lVar1,lVar4);
  *(undefined4 *)(lVar4 + 0x10) = 0xcc;
  FUN_1003d266c(lVar4,"EmpoweredShot_1");
  lVar4 = FUN_10000f250();
  FUN_1003a985c(lVar1,lVar4);
  *(undefined4 *)(lVar4 + 0x10) = 0xcc;
  FUN_1003d266c(lVar4,"EmpoweredShot_2");
  plVar2 = (long *)thunk_FUN_10000e5dc();
  FUN_1003a985c(lVar1,plVar2);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x58))(plVar2,"Sound_Ishtar_Empowered_Attack_01");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x18))(plVar2,"Sound_Ishtar_Empowered_Attack_02");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x18))(plVar2,"Sound_Ishtar_Empowered_Attack_03");
  uVar5 = FUN_1010a1520();
  lVar1 = FUN_1010a0e0c(uVar5,0,"*KindredSoundBalance*",0);
  FUN_1003d0cf8(*(undefined4 *)(lVar1 + 0x674));
  (**(code **)(*plVar2 + 0x28))(plVar2);
  lVar1 = FUN_10000f250();
  FUN_1003a985c(lVar3 + 200,lVar1);
  *(undefined4 *)(lVar1 + 0x10) = 0xcb;
  FUN_1003d266c(lVar1,"CenterBody");
  plVar2 = (long *)thunk_FUN_10000e5dc();
  FUN_1003a985c(lVar3 + 200,plVar2);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x58))(plVar2,"Sound_Ishtar_Crit_Attack_01");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x18))(plVar2,"Sound_Ishtar_Crit_Attack_02");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x18))(plVar2,"Sound_Ishtar_Crit_Attack_03");
  uVar5 = FUN_1010a1520();
  lVar1 = FUN_1010a0e0c(uVar5,0,"*KindredSoundBalance*",0);
  FUN_1003d0cf8(*(undefined4 *)(lVar1 + 0x66c));
  (**(code **)(*plVar2 + 0x28))(plVar2);
  lVar1 = FUN_10000c3b0();
  FUN_1003a985c(&local_40,lVar1);
  *(code **)(lVar1 + 0x10) = FUN_1003d0a94;
  uVar5 = FUN_10000f034();
  FUN_1003a985c(&local_40,uVar5);
  return local_40;
}




undefined8 FUN_10039a69c(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  undefined4 local_60 [2];
  undefined4 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  local_50 = 0;
  uStack_48 = 0;
  lVar1 = FUN_10000e94c();
  FUN_1003a985c(&local_50,lVar1);
  *(code **)(lVar1 + 0x10) = FUN_1003d0d98;
  uVar2 = FUN_10000bb2c();
  FUN_1003a985c(&local_50,uVar2);
  lVar1 = FUN_10000bd3c();
  FUN_1003a985c(&local_50,lVar1);
  *(undefined **)(lVar1 + 0x10) = PTR_s_Buff_Ishtar_A_Strafing_10185b7e8;
  *(undefined4 *)(lVar1 + 0x18) = 0x3f000000;
  *(undefined2 *)(lVar1 + 0x68) = 1;
  *(byte *)(lVar1 + 0x6a) = *(byte *)(lVar1 + 0x6a) & 0xfe | 4;
  uVar2 = FUN_10000c784();
  FUN_1003a985c(&local_50,uVar2);
  lVar1 = FUN_10000c8e8();
  FUN_1003a985c(&local_50,lVar1);
  lVar3 = FUN_10049ab34(lVar1 + 0x10);
  *(undefined **)(lVar3 + 8) = PTR_s_Buff_Ishtar_C_Empowerment_10185b7e0;
  plVar4 = (long *)thunk_FUN_10000e0ac();
  FUN_1003a985c(lVar1 + 200,plVar4);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))(plVar4,"Ability01");
  (**(code **)(*plVar4 + 0x28))();
  plVar4 = (long *)thunk_FUN_10000e0ac();
  FUN_1003a985c(lVar1 + 0xb0,plVar4);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))(plVar4,"Ability01_Empowered");
  (**(code **)(*plVar4 + 0x28))();
  plVar4 = (long *)thunk_FUN_10000e5dc();
  FUN_1003a985c(&local_50,plVar4);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x58))(plVar4,"Sound_Ishtar_AbilityA_01");
  plVar4 = (long *)(**(code **)(*plVar4 + 0x18))(plVar4,"Sound_Ishtar_AbilityA_02");
  plVar4 = (long *)(**(code **)(*plVar4 + 0x18))(plVar4,"Sound_Ishtar_AbilityA_03");
  uVar2 = FUN_1010a1520();
  lVar1 = FUN_1010a0e0c(uVar2,0,"*KindredSoundBalance*",0);
  FUN_1003d0cf8(*(undefined4 *)(lVar1 + 0x684));
  (**(code **)(*plVar4 + 0x28))(plVar4);
  lVar1 = FUN_10000c8e8();
  FUN_1003a985c(&local_50,lVar1);
  lVar3 = FUN_10049ab34(lVar1 + 0x10);
  *(undefined **)(lVar3 + 8) = PTR_s_Buff_Ishtar_MinionTracker_10185b7f0;
  *(undefined4 *)(lVar3 + 0x10) = 4;
  lVar1 = lVar1 + 200;
  plVar4 = (long *)FUN_10000f300();
  FUN_1003a985c(lVar1,plVar4);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))(plVar4,"*Ishtar_Minion*",1);
  uVar2 = (**(code **)(*plVar4 + 0x18))(plVar4,"CenterBody");
  lVar3 = FUN_10000c8e8();
  FUN_1003a985c(lVar1,lVar3);
  lVar5 = FUN_10049ab34(lVar3 + 0x10);
  *(undefined **)(lVar5 + 8) = PTR_s_Buff_Ishtar_Talent_TalentC_10185b7f8;
  plVar4 = (long *)FUN_10000bdf0();
  FUN_1003a985c(lVar3 + 0xb0,plVar4);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))
                             (plVar4,PTR_s_Buff_Ishtar_TalentC_AtkSpeed_10185b800);
  local_60[0] = 0x41200000;
  local_58 = 1;
  (**(code **)(*plVar4 + 0x18))(plVar4,local_60);
  plVar4 = (long *)FUN_10000bfc0();
  FUN_1003a985c(lVar1,plVar4);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))
                             (plVar4,PTR_s_Buff_Ishtar_Minion_UseSelfShot_10185b808,uVar2);
  local_60[0] = 0x3dcccccd;
  local_58 = 1;
  plVar4 = (long *)(**(code **)(*plVar4 + 0x18))(plVar4,local_60);
  (**(code **)(*plVar4 + 0x20))(plVar4,FUN_1003c163c);
  lVar1 = FUN_10000ee30();
  FUN_1003a985c(&local_50,lVar1);
  *(char **)(lVar1 + 0x10) = "Ishtar_Minion";
  plVar4 = (long *)FUN_10000bed8();
  FUN_1003a985c(&local_50,plVar4);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x58))(plVar4);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x70))
                             (plVar4,PTR_s_Buff_Ishtar_Minion_UseSelfShot_10185b808);
  local_60[0] = 0x3dcccccd;
  local_58 = 1;
  (**(code **)(*plVar4 + 0x18))(plVar4,local_60);
  lVar1 = FUN_10000ceb8();
  FUN_1003a985c(&local_50,lVar1);
  *(undefined4 *)(lVar1 + 0x2c) = 0x3e99999a;
  *(undefined8 *)(lVar1 + 0x10) = 0;
  lVar1 = FUN_10000ceb8();
  FUN_1003a985c(&local_50,lVar1);
  *(undefined4 *)(lVar1 + 0x2c) = 0x3f19999a;
  *(undefined8 *)(lVar1 + 0x10) = 0;
  return local_50;
}




undefined8 FUN_10039aa90(void)

{
  byte bVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  undefined4 local_60 [2];
  undefined4 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  local_50 = 0;
  uStack_48 = 0;
  lVar3 = FUN_10000ee30();
  FUN_1003a985c(&local_50,lVar3);
  *(char **)(lVar3 + 0x10) = "Ishtar_Minion";
  plVar4 = (long *)FUN_10000bed8();
  FUN_1003a985c(&local_50,plVar4);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x70))(plVar4,PTR_s_Buff_Ishtar_Minion_UseB_10185b810);
  local_60[0] = 0x3dcccccd;
  local_58 = 1;
  (**(code **)(*plVar4 + 0x18))(plVar4,local_60);
  uVar5 = FUN_10000c784();
  FUN_1003a985c(&local_50,uVar5);
  uVar5 = FUN_10000bb2c();
  FUN_1003a985c(&local_50,uVar5);
  lVar3 = FUN_10000bd3c();
  FUN_1003a985c(&local_50,lVar3);
  *(undefined **)(lVar3 + 0x10) = PTR_s_Buff_Ishtar_B_Strafing_10185b818;
  *(undefined4 *)(lVar3 + 0x18) = 0x3f19999a;
  *(undefined2 *)(lVar3 + 0x68) = 1;
  *(byte *)(lVar3 + 0x6a) = *(byte *)(lVar3 + 0x6a) & 0xfe;
  uVar5 = FUN_10000c784();
  FUN_1003a985c(&local_50,uVar5);
  lVar6 = FUN_10000c8e8();
  FUN_1003a985c(&local_50,lVar6);
  lVar3 = FUN_10049ab34(lVar6 + 0x10);
  *(undefined **)(lVar3 + 8) = PTR_s_Buff_Ishtar_C_Empowerment_10185b7e0;
  lVar3 = lVar6 + 200;
  plVar4 = (long *)thunk_FUN_10000e0ac();
  FUN_1003a985c(lVar3,plVar4);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))(plVar4,"Ability02");
  (**(code **)(*plVar4 + 0x28))();
  plVar4 = (long *)thunk_FUN_10000e358();
  FUN_1003a985c(lVar3,plVar4);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x58))(plVar4);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x48))(plVar4,"Effect_Ishtar_B");
  (**(code **)(*plVar4 + 0x78))(plVar4,1);
  plVar4 = (long *)thunk_FUN_10000e5dc();
  FUN_1003a985c(lVar3,plVar4);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x58))(plVar4,"Sound_Ishtar_AbilityB_01");
  uVar5 = FUN_1010a1520();
  lVar3 = FUN_1010a0e0c(uVar5,0,"*KindredSoundBalance*",0);
  FUN_1003d0cf8(*(undefined4 *)(lVar3 + 0x68c));
  (**(code **)(*plVar4 + 0x28))(plVar4);
  lVar6 = lVar6 + 0xb0;
  plVar4 = (long *)thunk_FUN_10000e0ac();
  FUN_1003a985c(lVar6,plVar4);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))(plVar4,"Ability02_Empowered");
  (**(code **)(*plVar4 + 0x28))();
  plVar4 = (long *)thunk_FUN_10000e358();
  FUN_1003a985c(lVar6,plVar4);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x58))(plVar4);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x48))(plVar4,"Effect_Ishtar_B_Empowered");
  (**(code **)(*plVar4 + 0x78))(plVar4,1);
  plVar4 = (long *)thunk_FUN_10000e5dc();
  FUN_1003a985c(lVar6,plVar4);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x58))(plVar4,"Sound_Ishtar_AbilityB_Empowered_01");
  plVar4 = (long *)(**(code **)(*plVar4 + 0x18))(plVar4,"Sound_Ishtar_AbilityB_Empowered_02");
  uVar5 = FUN_1010a1520();
  lVar3 = FUN_1010a0e0c(uVar5,0,"*KindredSoundBalance*",0);
  FUN_1003d0cf8(*(undefined4 *)(lVar3 + 0x690));
  (**(code **)(*plVar4 + 0x28))(plVar4);
  lVar3 = FUN_10000ceb8();
  FUN_1003a985c(&local_50,lVar3);
  *(undefined4 *)(lVar3 + 0x2c) = 0x3dcccccd;
  *(undefined8 *)(lVar3 + 0x10) = 0;
  lVar3 = FUN_1003e10f0();
  bVar1 = *(byte *)(lVar3 + 0xe5);
  lVar3 = FUN_10000ed74();
  FUN_1003a985c(&local_50,lVar3);
  *(undefined8 *)(lVar3 + 0x18) = 0;
  *(undefined1 *)(lVar3 + 0x20) = 1;
  *(undefined8 *)(lVar3 + 0x24) = 0;
  *(undefined8 *)(lVar3 + 0x34) = 0;
  *(undefined8 *)(lVar3 + 0x2c) = 0;
  *(undefined4 *)(lVar3 + 0x3c) = 0;
  *(undefined8 *)(lVar3 + 0x48) = 0xbf800000c0000000;
  *(undefined8 *)(lVar3 + 0x40) = 0xbf800000bf800000;
  *(undefined4 *)(lVar3 + 0x50) = 0x3f266666;
  *(undefined1 *)(lVar3 + 0x54) = 0xff;
  *(undefined8 *)(lVar3 + 0x60) = 0xffffffff00000000;
  *(undefined8 *)(lVar3 + 0x58) = 0xffffffff00040000;
  *(byte *)(lVar3 + 0x6a) = bVar1 | 0x14;
  *(undefined2 *)(lVar3 + 0x68) = 0x6120;
  bVar2 = DAT_101d23a38 != '\0';
  *(code **)(lVar3 + 0x78) = FUN_1003d0e24;
  *(byte *)(lVar3 + 0xa8) = *(byte *)(lVar3 + 0xa8) & 0xf0 | bVar2;
  plVar4 = (long *)FUN_10000bed8();
  FUN_1003a985c(&local_50,plVar4);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x70))(plVar4,PTR_s_Buff_Ishtar_Minion_B_Damage_10185b7c8)
  ;
  local_60[0] = 0x3dcccccd;
  local_58 = 1;
  (**(code **)(*plVar4 + 0x18))(plVar4,local_60);
  lVar3 = FUN_10000c8e8();
  FUN_1003a985c(&local_50,lVar3);
  lVar6 = FUN_10049ab34(lVar3 + 0x10);
  *(undefined **)(lVar6 + 8) = PTR_s_Buff_Ishtar_Talent_TalentB_10185b7d0;
  plVar4 = (long *)FUN_10000bed8();
  FUN_1003a985c(lVar3 + 0xb0,plVar4);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x70))
                             (plVar4,PTR_s_Buff_Ishtar_TalentB_Immobilize_10185b7d8);
  local_60[0] = 0x3f800000;
  local_58 = 1;
  (**(code **)(*plVar4 + 0x18))(plVar4,local_60);
  uVar5 = FUN_10000c784();
  FUN_1003a985c(&local_50,uVar5);
  lVar3 = FUN_10000ceb8();
  FUN_1003a985c(&local_50,lVar3);
  *(undefined4 *)(lVar3 + 0x2c) = 0x3e4ccccd;
  *(undefined8 *)(lVar3 + 0x10) = 0;
  return local_50;
}




undefined8 FUN_10039af50(void)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  undefined4 local_70 [2];
  undefined4 local_68;
  code *local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  local_50 = 0;
  uStack_48 = 0;
  lVar1 = FUN_10000d8b8();
  FUN_1003a985c(&local_50,lVar1);
  *(undefined1 *)(lVar1 + 0x10) = 1;
  lVar1 = FUN_10000ee30();
  FUN_1003a985c(&local_50,lVar1);
  *(char **)(lVar1 + 0x10) = "Ishtar_Minion";
  uVar2 = FUN_10000d71c();
  FUN_1003a985c(&local_50,uVar2);
  uVar2 = FUN_10000c784();
  FUN_1003a985c(&local_50,uVar2);
  plVar3 = (long *)thunk_FUN_10000e0ac();
  FUN_1003a985c(&local_50,plVar3);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x50))(plVar3,"Ability03");
  (**(code **)(*plVar3 + 0x28))();
  plVar3 = (long *)thunk_FUN_10000e5dc();
  FUN_1003a985c(&local_50,plVar3);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x58))(plVar3,"Sound_Ishtar_AbilityC");
  uVar2 = FUN_1010a1520();
  lVar1 = FUN_1010a0e0c(uVar2,0,"*KindredSoundBalance*",0);
  FUN_1003d0cf8(*(undefined4 *)(lVar1 + 0x698));
  (**(code **)(*plVar3 + 0x28))(plVar3);
  lVar1 = FUN_10000ceb8();
  FUN_1003a985c(&local_50,lVar1);
  *(undefined4 *)(lVar1 + 0x2c) = 0x3dcccccd;
  *(undefined8 *)(lVar1 + 0x10) = 0;
  plVar3 = (long *)FUN_10000f300();
  FUN_1003a985c(&local_50,plVar3);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x50))(plVar3,"*Ishtar_Minion*",1);
  uVar2 = (**(code **)(*plVar3 + 0x18))(plVar3,"Minion_1");
  plVar3 = (long *)FUN_10000bfc0();
  FUN_1003a985c(&local_50,plVar3);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x50))
                             (plVar3,PTR_s_Buff_Ishtar_Minion_Invulnerable_10185b820,uVar2);
  local_60._0_4_ = 0x3f333333;
  local_58 = 1;
  (**(code **)(*plVar3 + 0x18))(plVar3,&local_60);
  plVar3 = (long *)FUN_10000f300();
  FUN_1003a985c(&local_50,plVar3);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x50))(plVar3,"*Ishtar_Minion*",1);
  uVar2 = (**(code **)(*plVar3 + 0x18))(plVar3,"Minion_2");
  plVar3 = (long *)FUN_10000bfc0();
  FUN_1003a985c(&local_50,plVar3);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x50))
                             (plVar3,PTR_s_Buff_Ishtar_Minion_Invulnerable_10185b820,uVar2);
  local_60._0_4_ = 0x3f333333;
  local_58 = 1;
  (**(code **)(*plVar3 + 0x18))(plVar3,&local_60);
  plVar3 = (long *)FUN_10000f300();
  FUN_1003a985c(&local_50,plVar3);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x50))(plVar3,"*Ishtar_Minion*",1);
  uVar2 = (**(code **)(*plVar3 + 0x18))(plVar3,"Minion_3");
  plVar3 = (long *)FUN_10000bfc0();
  FUN_1003a985c(&local_50,plVar3);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x50))
                             (plVar3,PTR_s_Buff_Ishtar_Minion_Invulnerable_10185b820,uVar2);
  local_60._0_4_ = 0x3f333333;
  local_58 = 1;
  (**(code **)(*plVar3 + 0x18))(plVar3,&local_60);
  plVar3 = (long *)FUN_10000f300();
  FUN_1003a985c(&local_50,plVar3);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x50))(plVar3,"*Ishtar_Minion*",1);
  uVar2 = (**(code **)(*plVar3 + 0x18))(plVar3,"Minion_4");
  plVar3 = (long *)FUN_10000bfc0();
  FUN_1003a985c(&local_50,plVar3);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x50))
                             (plVar3,PTR_s_Buff_Ishtar_Minion_Invulnerable_10185b820,uVar2);
  local_60 = (code *)CONCAT44(local_60._4_4_,0x3f333333);
  local_58 = 1;
  (**(code **)(*plVar3 + 0x18))(plVar3,&local_60);
  plVar3 = (long *)FUN_10000bdf0();
  FUN_1003a985c(&local_50,plVar3);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x50))(plVar3,PTR_s_Buff_Ishtar_C_Empowerment_10185b7e0);
  local_60 = FUN_1003d0e38;
  local_58 = 3;
  (**(code **)(*plVar3 + 0x18))(plVar3,&local_60);
  lVar1 = FUN_10000ceb8();
  FUN_1003a985c(&local_50,lVar1);
  *(undefined4 *)(lVar1 + 0x2c) = 0x3ecccccd;
  *(undefined8 *)(lVar1 + 0x10) = 0;
  plVar3 = (long *)FUN_10000bdf0();
  FUN_1003a985c(&local_50,plVar3);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x50))(plVar3,PTR_s_Buff_Ishtar_MinionTracker_10185b7f0);
  local_60._0_4_ = 4;
  local_58 = 1;
  (**(code **)(*plVar3 + 0x20))(plVar3,&local_60);
  lVar1 = FUN_10000c8e8();
  FUN_1003a985c(&local_50,lVar1);
  lVar4 = FUN_10049ab34(lVar1 + 0x10);
  *(undefined **)(lVar4 + 8) = PTR_s_Buff_Ishtar_Talent_TalentC_10185b7f8;
  plVar3 = (long *)FUN_10000bdf0();
  FUN_1003a985c(lVar1 + 0xb0,plVar3);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x50))
                             (plVar3,PTR_s_Buff_Ishtar_TalentC_AtkSpeed_10185b800);
  local_60 = (code *)CONCAT44(local_60._4_4_,0x41200000);
  local_58 = 1;
  plVar3 = (long *)(**(code **)(*plVar3 + 0x18))(plVar3,&local_60);
  local_70[0] = 4;
  local_68 = 1;
  (**(code **)(*plVar3 + 0x20))(plVar3,local_70);
  lVar1 = FUN_10000d8b8();
  FUN_1003a985c(&local_50,lVar1);
  *(undefined1 *)(lVar1 + 0x10) = 0;
  return local_50;
}




undefined8 FUN_10039b434(void)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_30 = 0;
  uStack_28 = 0;
  uVar1 = FUN_10000ef8c();
  FUN_1003a985c(&local_30,uVar1);
  uVar1 = FUN_10000bc94();
  FUN_1003a985c(&local_30,uVar1);
  plVar2 = (long *)thunk_FUN_10000e0ac();
  FUN_1003a985c(&local_30,plVar2);
  (**(code **)(*plVar2 + 0x50))(plVar2,"Attack");
  plVar2 = (long *)thunk_FUN_10000e5dc();
  FUN_1003a985c(&local_30,plVar2);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x58))(plVar2,"Sound_Ishtar_Default_Attack_01");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x18))(plVar2,"Sound_Ishtar_Default_Attack_02");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x18))(plVar2,"Sound_Ishtar_Default_Attack_03");
  uVar1 = FUN_1010a1520();
  lVar3 = FUN_1010a0e0c(uVar1,0,"*KindredSoundBalance*",0);
  FUN_1003d0cf8(*(undefined4 *)(lVar3 + 0x67c));
  (**(code **)(*plVar2 + 0x28))(plVar2);
  lVar3 = FUN_10000f250();
  FUN_1003a985c(&local_30,lVar3);
  *(undefined4 *)(lVar3 + 0x10) = 0xce;
  FUN_1003d266c(lVar3,"CenterBody");
  return local_30;
}




undefined8 FUN_10039b55c(void)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined4 local_50 [2];
  undefined4 local_48;
  code *local_40;
  undefined4 local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_30 = 0;
  uStack_28 = 0;
  lVar1 = FUN_10000d8b8();
  FUN_1003a985c(&local_30,lVar1);
  *(undefined1 *)(lVar1 + 0x10) = 1;
  lVar1 = FUN_10000ef8c();
  FUN_1003a985c(&local_30,lVar1);
  *(byte *)(lVar1 + 0x10) = *(byte *)(lVar1 + 0x10) & 0xe7 | 4;
  plVar2 = (long *)FUN_10000bdf0();
  FUN_1003a985c(&local_30,plVar2);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x50))
                             (plVar2,PTR_s_Buff_Ishtar_Minion_WarningPFX_10185b7c0);
  local_40._0_4_ = 0x3f333333;
  local_38 = 1;
  (**(code **)(*plVar2 + 0x18))(plVar2,&local_40);
  plVar2 = (long *)thunk_FUN_10000e0ac();
  FUN_1003a985c(&local_30,plVar2);
  (**(code **)(*plVar2 + 0x50))(plVar2,"Ability01");
  lVar1 = FUN_10000ceb8();
  FUN_1003a985c(&local_30,lVar1);
  *(undefined4 *)(lVar1 + 0x2c) = 0x3f000000;
  *(undefined8 *)(lVar1 + 0x10) = 0;
  plVar2 = (long *)FUN_10000bdf0();
  FUN_1003a985c(&local_30,plVar2);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x50))(plVar2,PTR_s_Buff_SelfProjectile_10185a530);
  local_40 = (code *)CONCAT44(local_40._4_4_,0x3ecccccd);
  local_38 = 1;
  plVar2 = (long *)(**(code **)(*plVar2 + 0x18))(plVar2,&local_40);
  (**(code **)(*plVar2 + 0x48))(plVar2,0xcd);
  plVar2 = (long *)FUN_10000cd5c();
  FUN_1003a985c(&local_30,plVar2);
  local_40 = FUN_1003d0d5c;
  local_38 = 2;
  plVar2 = (long *)(**(code **)(*plVar2 + 0x98))(plVar2,&local_40,0);
  local_50[0] = 0x42480000;
  local_48 = 1;
  plVar2 = (long *)(**(code **)(*plVar2 + 0xa0))(plVar2,local_50);
  (**(code **)(*plVar2 + 0xb0))(plVar2,1);
  lVar1 = FUN_10000ceb8();
  FUN_1003a985c(&local_30,lVar1);
  *(undefined4 *)(lVar1 + 0x2c) = 0x3dcccccd;
  *(undefined8 *)(lVar1 + 0x10) = 0;
  uVar3 = FUN_10000f9c0();
  FUN_1003a985c(&local_30,uVar3);
  lVar1 = FUN_10000d8b8();
  FUN_1003a985c(&local_30,lVar1);
  *(undefined1 *)(lVar1 + 0x10) = 0;
  return local_30;
}




undefined8 FUN_10039b770(void)

{
  byte bVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  undefined4 local_50 [2];
  undefined4 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  local_40 = 0;
  uStack_38 = 0;
  lVar3 = FUN_10000d8b8();
  FUN_1003a985c(&local_40,lVar3);
  *(undefined1 *)(lVar3 + 0x10) = 1;
  plVar4 = (long *)FUN_10000bdf0();
  FUN_1003a985c(&local_40,plVar4);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))
                             (plVar4,PTR_s_Buff_Ishtar_Minion_WarningPFX_10185b7c0);
  local_50[0] = 0x3f666666;
  local_48 = 1;
  (**(code **)(*plVar4 + 0x18))(plVar4,local_50);
  plVar4 = (long *)thunk_FUN_10000e0ac();
  FUN_1003a985c(&local_40,plVar4);
  (**(code **)(*plVar4 + 0x50))(plVar4,"Ability02");
  plVar4 = (long *)thunk_FUN_10000e358();
  FUN_1003a985c(&local_40,plVar4);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x58))(plVar4);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x48))(plVar4,"Effect_Ishtar_Minion_B");
  (**(code **)(*plVar4 + 0x78))(plVar4,1);
  plVar4 = (long *)thunk_FUN_10000e5dc();
  FUN_1003a985c(&local_40,plVar4);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x58))(plVar4,"Sound_Ishtar_AbilityB_02");
  uVar5 = FUN_1010a1520();
  lVar3 = FUN_1010a0e0c(uVar5,0,"*KindredSoundBalance*",0);
  FUN_1003d0cf8(*(undefined4 *)(lVar3 + 0x694));
  (**(code **)(*plVar4 + 0x28))(plVar4);
  lVar3 = FUN_10000ceb8();
  FUN_1003a985c(&local_40,lVar3);
  *(undefined4 *)(lVar3 + 0x2c) = 0x3dcccccd;
  *(undefined8 *)(lVar3 + 0x10) = 0;
  lVar3 = FUN_1003e10f0();
  bVar1 = *(byte *)(lVar3 + 0xe5);
  lVar3 = FUN_10000ed74();
  FUN_1003a985c(&local_40,lVar3);
  *(undefined8 *)(lVar3 + 0x18) = 0;
  *(undefined1 *)(lVar3 + 0x20) = 1;
  *(undefined8 *)(lVar3 + 0x24) = 0;
  *(undefined8 *)(lVar3 + 0x34) = 0;
  *(undefined8 *)(lVar3 + 0x2c) = 0;
  *(undefined4 *)(lVar3 + 0x3c) = 0;
  *(undefined8 *)(lVar3 + 0x48) = 0xbf800000c0000000;
  *(undefined8 *)(lVar3 + 0x40) = 0xbf800000bf800000;
  *(undefined4 *)(lVar3 + 0x50) = 0x3f266666;
  *(undefined1 *)(lVar3 + 0x54) = 0xff;
  *(undefined8 *)(lVar3 + 0x60) = 0xffffffff00000000;
  *(undefined8 *)(lVar3 + 0x58) = 0xffffffff00040000;
  *(byte *)(lVar3 + 0x6a) = bVar1 | 0x14;
  *(undefined2 *)(lVar3 + 0x68) = 0x6120;
  bVar2 = DAT_101d23a38 != '\0';
  *(code **)(lVar3 + 0x78) = FUN_1003d0d84;
  *(byte *)(lVar3 + 0xa8) = *(byte *)(lVar3 + 0xa8) & 0xf0 | bVar2;
  plVar4 = (long *)FUN_10000bed8();
  FUN_1003a985c(&local_40,plVar4);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x68))(plVar4);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x70))(plVar4,PTR_s_Buff_Ishtar_Minion_B_Damage_10185b7c8)
  ;
  local_50[0] = 0x3dcccccd;
  local_48 = 1;
  (**(code **)(*plVar4 + 0x18))(plVar4,local_50);
  lVar3 = FUN_10000c8e8();
  FUN_1003a985c(&local_40,lVar3);
  lVar6 = FUN_10049aec8(lVar3 + 0x10);
  *(undefined **)(lVar6 + 8) = PTR_s_Buff_Ishtar_Talent_TalentB_10185b7d0;
  plVar4 = (long *)FUN_10000bed8();
  FUN_1003a985c(lVar3 + 0xb0,plVar4);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x68))(plVar4);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x70))
                             (plVar4,PTR_s_Buff_Ishtar_TalentB_Immobilize_10185b7d8);
  local_50[0] = 0x3f800000;
  local_48 = 1;
  (**(code **)(*plVar4 + 0x18))(plVar4,local_50);
  uVar5 = FUN_10000c784();
  FUN_1003a985c(&local_40,uVar5);
  lVar3 = FUN_10000ceb8();
  FUN_1003a985c(&local_40,lVar3);
  *(undefined4 *)(lVar3 + 0x2c) = 0x3e99999a;
  *(undefined8 *)(lVar3 + 0x10) = 0;
  lVar3 = FUN_10000d8b8();
  FUN_1003a985c(&local_40,lVar3);
  *(undefined1 *)(lVar3 + 0x10) = 0;
  return local_40;
}




void FUN_10039babc(void)

{
  FUN_1003d0e4c("Attack",0xcf,"AutoAttack");
  return;
}




void FUN_10039bad4(void)

{
  FUN_1003d0e4c("AltAttack",0xcf,"AutoAttack");
  return;
}




void FUN_10039baec(void)

{
  FUN_1003d0e4c("CritAttack",0xd0,"AutoAttack");
  return;
}




undefined8 FUN_10039bb04(void)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 local_40;
  undefined8 uStack_38;
  
  local_40 = 0;
  uStack_38 = 0;
  lVar1 = FUN_10000d8b8();
  FUN_1003a985c(&local_40,lVar1);
  *(undefined1 *)(lVar1 + 0x10) = 1;
  lVar1 = FUN_10000ef8c();
  FUN_1003a985c(&local_40,lVar1);
  *(byte *)(lVar1 + 0x10) = *(byte *)(lVar1 + 0x10) & 0xe7 | 4;
  plVar2 = (long *)thunk_FUN_10000e5dc();
  FUN_1003a985c(&local_40,plVar2);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x58))(plVar2,"Sound_Viola_A");
  uVar3 = FUN_1010a1520();
  lVar1 = FUN_1010a0e0c(uVar3,0,"*KindredSoundBalance*",0);
  FUN_1003d0fb8(*(undefined4 *)(lVar1 + 0x6b4));
  (**(code **)(*plVar2 + 0x28))(plVar2);
  plVar2 = (long *)thunk_FUN_10000e0ac();
  FUN_1003a985c(&local_40,plVar2);
  (**(code **)(*plVar2 + 0x50))(plVar2,"Ability01");
  lVar1 = FUN_10000ceb8();
  FUN_1003a985c(&local_40,lVar1);
  *(undefined4 *)(lVar1 + 0x2c) = 0x3e4ccccd;
  *(undefined8 *)(lVar1 + 0x10) = 0;
  lVar1 = FUN_10000f250();
  FUN_1003a985c(&local_40,lVar1);
  *(undefined4 *)(lVar1 + 0x10) = 0xd1;
  FUN_1003d266c(lVar1,"CenterBody");
  lVar1 = FUN_10000c8e8();
  FUN_1003a985c(&local_40,lVar1);
  lVar4 = FUN_10049ab34(lVar1 + 0x10);
  *(undefined **)(lVar4 + 8) = PTR_s_Buff_Viola_MusicNote_Placement_3_10185b828;
  plVar2 = (long *)FUN_10000c5ec();
  FUN_1003a985c(lVar1 + 0xb0,plVar2);
  (**(code **)(*plVar2 + 0x50))(plVar2,PTR_s_Buff_Viola_MusicNoteB_3_10185b830);
  plVar2 = (long *)FUN_10000bdf0();
  FUN_1003a985c(lVar1 + 0xb0,plVar2);
  (**(code **)(*plVar2 + 0x50))(plVar2,PTR_s_Buff_Viola_MusicNoteA_3_10185b838);
  lVar1 = FUN_10000c8e8();
  FUN_1003a985c(&local_40,lVar1);
  lVar4 = FUN_10049ab34(lVar1 + 0x10);
  *(undefined **)(lVar4 + 8) = PTR_s_Buff_Viola_MusicNote_Placement_2_10185b840;
  plVar2 = (long *)FUN_10000c5ec();
  FUN_1003a985c(lVar1 + 0xb0,plVar2);
  (**(code **)(*plVar2 + 0x50))(plVar2,PTR_s_Buff_Viola_MusicNoteB_2_10185b848);
  plVar2 = (long *)FUN_10000bdf0();
  FUN_1003a985c(lVar1 + 0xb0,plVar2);
  (**(code **)(*plVar2 + 0x50))(plVar2,PTR_s_Buff_Viola_MusicNoteA_2_10185b850);
  lVar1 = FUN_10000c8e8();
  FUN_1003a985c(&local_40,lVar1);
  lVar4 = FUN_10049ab34(lVar1 + 0x10);
  *(undefined **)(lVar4 + 8) = PTR_s_Buff_Viola_MusicNote_Placement_1_10185b858;
  plVar2 = (long *)FUN_10000c5ec();
  FUN_1003a985c(lVar1 + 0xb0,plVar2);
  (**(code **)(*plVar2 + 0x50))(plVar2,PTR_s_Buff_Viola_MusicNoteB_1_10185b860);
  plVar2 = (long *)FUN_10000bdf0();
  FUN_1003a985c(lVar1 + 0xb0,plVar2);
  (**(code **)(*plVar2 + 0x50))(plVar2,PTR_s_Buff_Viola_MusicNoteA_1_10185b868);
  lVar1 = FUN_10000ceb8();
  FUN_1003a985c(&local_40,lVar1);
  *(undefined4 *)(lVar1 + 0x2c) = 0x3e4ccccd;
  *(undefined8 *)(lVar1 + 0x10) = 0;
  lVar1 = FUN_10000d8b8();
  FUN_1003a985c(&local_40,lVar1);
  *(undefined1 *)(lVar1 + 0x10) = 0;
  return local_40;
}




undefined8 FUN_10039be10(void)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 local_40;
  undefined8 uStack_38;
  
  local_40 = 0;
  uStack_38 = 0;
  lVar1 = FUN_10000d8b8();
  FUN_1003a985c(&local_40,lVar1);
  *(undefined1 *)(lVar1 + 0x10) = 1;
  lVar1 = FUN_10000ef8c();
  FUN_1003a985c(&local_40,lVar1);
  *(byte *)(lVar1 + 0x10) = *(byte *)(lVar1 + 0x10) & 0xe7 | 4;
  plVar2 = (long *)thunk_FUN_10000e5dc();
  FUN_1003a985c(&local_40,plVar2);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x58))(plVar2,"Sound_Viola_B");
  uVar3 = FUN_1010a1520();
  lVar1 = FUN_1010a0e0c(uVar3,0,"*KindredSoundBalance*",0);
  FUN_1003d0fb8(*(undefined4 *)(lVar1 + 0x6bc));
  (**(code **)(*plVar2 + 0x28))(plVar2);
  plVar2 = (long *)thunk_FUN_10000e0ac();
  FUN_1003a985c(&local_40,plVar2);
  (**(code **)(*plVar2 + 0x50))(plVar2,"Ability02");
  lVar1 = FUN_10000ceb8();
  FUN_1003a985c(&local_40,lVar1);
  *(undefined4 *)(lVar1 + 0x2c) = 0x3e4ccccd;
  *(undefined8 *)(lVar1 + 0x10) = 0;
  lVar1 = FUN_10000f250();
  FUN_1003a985c(&local_40,lVar1);
  *(undefined4 *)(lVar1 + 0x10) = 0xd2;
  FUN_1003d266c(lVar1,"CenterBody");
  lVar1 = FUN_10000c8e8();
  FUN_1003a985c(&local_40,lVar1);
  lVar4 = FUN_10049ab34(lVar1 + 0x10);
  *(undefined **)(lVar4 + 8) = PTR_s_Buff_Viola_MusicNote_Placement_3_10185b828;
  plVar2 = (long *)FUN_10000c5ec();
  FUN_1003a985c(lVar1 + 0xb0,plVar2);
  (**(code **)(*plVar2 + 0x50))(plVar2,PTR_s_Buff_Viola_MusicNoteA_3_10185b838);
  plVar2 = (long *)FUN_10000bdf0();
  FUN_1003a985c(lVar1 + 0xb0,plVar2);
  (**(code **)(*plVar2 + 0x50))(plVar2,PTR_s_Buff_Viola_MusicNoteB_3_10185b830);
  lVar1 = FUN_10000c8e8();
  FUN_1003a985c(&local_40,lVar1);
  lVar4 = FUN_10049ab34(lVar1 + 0x10);
  *(undefined **)(lVar4 + 8) = PTR_s_Buff_Viola_MusicNote_Placement_2_10185b840;
  plVar2 = (long *)FUN_10000c5ec();
  FUN_1003a985c(lVar1 + 0xb0,plVar2);
  (**(code **)(*plVar2 + 0x50))(plVar2,PTR_s_Buff_Viola_MusicNoteA_2_10185b850);
  plVar2 = (long *)FUN_10000bdf0();
  FUN_1003a985c(lVar1 + 0xb0,plVar2);
  (**(code **)(*plVar2 + 0x50))(plVar2,PTR_s_Buff_Viola_MusicNoteB_2_10185b848);
  lVar1 = FUN_10000c8e8();
  FUN_1003a985c(&local_40,lVar1);
  lVar4 = FUN_10049ab34(lVar1 + 0x10);
  *(undefined **)(lVar4 + 8) = PTR_s_Buff_Viola_MusicNote_Placement_1_10185b858;
  plVar2 = (long *)FUN_10000c5ec();
  FUN_1003a985c(lVar1 + 0xb0,plVar2);
  (**(code **)(*plVar2 + 0x50))(plVar2,PTR_s_Buff_Viola_MusicNoteA_1_10185b868);
  plVar2 = (long *)FUN_10000bdf0();
  FUN_1003a985c(lVar1 + 0xb0,plVar2);
  (**(code **)(*plVar2 + 0x50))(plVar2,PTR_s_Buff_Viola_MusicNoteB_1_10185b860);
  lVar1 = FUN_10000ceb8();
  FUN_1003a985c(&local_40,lVar1);
  *(undefined4 *)(lVar1 + 0x2c) = 0x3e4ccccd;
  *(undefined8 *)(lVar1 + 0x10) = 0;
  lVar1 = FUN_10000d8b8();
  FUN_1003a985c(&local_40,lVar1);
  *(undefined1 *)(lVar1 + 0x10) = 0;
  return local_40;
}




undefined8 FUN_10039c11c(void)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  code *local_40;
  undefined4 local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_30 = 0;
  uStack_28 = 0;
  FUN_1003e10f0();
  plVar1 = (long *)thunk_FUN_10000e0ac();
  FUN_1003a985c(&local_30,plVar1);
  (**(code **)(*plVar1 + 0x50))(plVar1,"Ability03_v1");
  plVar1 = (long *)thunk_FUN_10000e5dc();
  FUN_1003a985c(&local_30,plVar1);
  plVar1 = (long *)(**(code **)(*plVar1 + 0x58))(plVar1,"Sound_Viola_C_Start");
  uVar2 = FUN_1010a1520();
  lVar3 = FUN_1010a0e0c(uVar2,0,"*KindredSoundBalance*",0);
  FUN_1003d0fb8(*(undefined4 *)(lVar3 + 0x6c4));
  (**(code **)(*plVar1 + 0x28))(plVar1);
  plVar1 = (long *)FUN_10000bdf0();
  FUN_1003a985c(&local_30,plVar1);
  plVar1 = (long *)(**(code **)(*plVar1 + 0x50))(plVar1,PTR_s_Buff_Viola_C1_Aura_10185b870);
  local_40 = FUN_1003d1024;
  local_38 = 3;
  (**(code **)(*plVar1 + 0x18))(plVar1,&local_40);
  plVar1 = (long *)FUN_10000c5ec();
  FUN_1003a985c(&local_30,plVar1);
  (**(code **)(*plVar1 + 0x50))(plVar1,PTR_s_Buff_Viola_MusicNoteA_1_10185b868);
  plVar1 = (long *)FUN_10000c5ec();
  FUN_1003a985c(&local_30,plVar1);
  (**(code **)(*plVar1 + 0x50))(plVar1,PTR_s_Buff_Viola_MusicNoteA_2_10185b850);
  plVar1 = (long *)FUN_10000c5ec();
  FUN_1003a985c(&local_30,plVar1);
  (**(code **)(*plVar1 + 0x50))(plVar1,PTR_s_Buff_Viola_MusicNoteA_3_10185b838);
  plVar1 = (long *)FUN_10000c5ec();
  FUN_1003a985c(&local_30,plVar1);
  (**(code **)(*plVar1 + 0x50))(plVar1,PTR_s_Buff_Viola_MusicNoteB_1_10185b860);
  plVar1 = (long *)FUN_10000c5ec();
  FUN_1003a985c(&local_30,plVar1);
  (**(code **)(*plVar1 + 0x50))(plVar1,PTR_s_Buff_Viola_MusicNoteB_2_10185b848);
  plVar1 = (long *)FUN_10000c5ec();
  FUN_1003a985c(&local_30,plVar1);
  (**(code **)(*plVar1 + 0x50))(plVar1,PTR_s_Buff_Viola_MusicNoteB_3_10185b830);
  plVar1 = (long *)FUN_10000c5ec();
  FUN_1003a985c(&local_30,plVar1);
  (**(code **)(*plVar1 + 0x50))(plVar1,PTR_s_Buff_Viola_MusicNote_Placement_2_10185b840);
  plVar1 = (long *)FUN_10000c5ec();
  FUN_1003a985c(&local_30,plVar1);
  (**(code **)(*plVar1 + 0x50))(plVar1,PTR_s_Buff_Viola_MusicNote_Placement_3_10185b828);
  plVar1 = (long *)FUN_10000c5ec();
  FUN_1003a985c(&local_30,plVar1);
  (**(code **)(*plVar1 + 0x50))(plVar1,PTR_s_Buff_Viola_MusicNote_Placement_1_10185b878);
  plVar1 = (long *)FUN_10000c5ec();
  FUN_1003a985c(&local_30,plVar1);
  (**(code **)(*plVar1 + 0x50))(plVar1,PTR_s_Buff_Viola_MusicNote_Placement_2_10185b880);
  plVar1 = (long *)FUN_10000c5ec();
  FUN_1003a985c(&local_30,plVar1);
  (**(code **)(*plVar1 + 0x50))(plVar1,PTR_s_Buff_Viola_MusicNote_Placement_3_10185b888);
  plVar1 = (long *)FUN_10000c5ec();
  FUN_1003a985c(&local_30,plVar1);
  (**(code **)(*plVar1 + 0x50))(plVar1,PTR_s_Buff_Viola_MusicNote_Placement_L_10185b890);
  plVar1 = (long *)FUN_10000c5ec();
  FUN_1003a985c(&local_30,plVar1);
  (**(code **)(*plVar1 + 0x50))(plVar1,PTR_s_Buff_Viola_Grant_C1_10185b898);
  plVar1 = (long *)FUN_10000c5ec();
  FUN_1003a985c(&local_30,plVar1);
  (**(code **)(*plVar1 + 0x50))(plVar1,PTR_s_Buff_Viola_Grant_C2_10185b8a0);
  plVar1 = (long *)FUN_10000c5ec();
  FUN_1003a985c(&local_30,plVar1);
  (**(code **)(*plVar1 + 0x50))(plVar1,PTR_s_Buff_Viola_Grant_C3_10185b8a8);
  plVar1 = (long *)FUN_10000c5ec();
  FUN_1003a985c(&local_30,plVar1);
  (**(code **)(*plVar1 + 0x50))(plVar1,PTR_s_Buff_Viola_Grant_C4_10185b8b0);
  plVar1 = (long *)FUN_10000bdf0();
  FUN_1003a985c(&local_30,plVar1);
  (**(code **)(*plVar1 + 0x50))(plVar1,PTR_s_Buff_Viola_MusicNote_Placement_1_10185b858);
  lVar3 = FUN_10000dbb0();
  FUN_1003a985c(&local_30,lVar3);
  FUN_1003a4e5c(&local_40,PTR_s_Buff_Viola_MusicNote_Placement_T_10185b8b8);
  *(undefined4 *)(lVar3 + 0x10) = local_40._0_4_;
  *(undefined4 *)(lVar3 + 0x14) = 1;
  *(byte *)(lVar3 + 0x18) = *(byte *)(lVar3 + 0x18) | 1;
  return local_30;
}




void FUN_10039c54c(void)

{
  FUN_1003d1038("Attack","Effect_Amael_Attack",0);
  return;
}




void FUN_10039c564(void)

{
  FUN_1003d1038("AltAttack","Effect_Amael_Attack_Alt",0);
  return;
}




void FUN_10039c57c(void)

{
  FUN_1003d1038("CritAttack","Effect_Amael_Attack_Crit",2);
  return;
}




undefined8 FUN_10039c594(void)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  code *local_40;
  undefined4 local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_30 = 0;
  uStack_28 = 0;
  lVar1 = FUN_10000d8b8();
  FUN_1003a985c(&local_30,lVar1);
  *(undefined1 *)(lVar1 + 0x10) = 1;
  plVar2 = (long *)FUN_10000bdf0();
  FUN_1003a985c(&local_30,plVar2);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x50))(plVar2,PTR_s_Buff_Amael_A_Charge_Control_10185b940)
  ;
  local_40 = FUN_1003d1850;
  local_38 = 3;
  (**(code **)(*plVar2 + 0x18))(plVar2,&local_40);
  uVar3 = FUN_10000c6d4();
  FUN_1003a985c(&local_30,uVar3);
  plVar2 = (long *)thunk_FUN_10000e0ac();
  FUN_1003a985c(&local_30,plVar2);
  (**(code **)(*plVar2 + 0x50))(plVar2,"Ability01_Idle");
  uVar3 = FUN_10000f034();
  FUN_1003a985c(&local_30,uVar3);
  lVar1 = FUN_10000d8b8();
  FUN_1003a985c(&local_30,lVar1);
  *(undefined1 *)(lVar1 + 0x10) = 0;
  return local_30;
}




undefined8 FUN_10039c68c(void)

{
  byte bVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  code *local_80;
  undefined4 local_78;
  code *local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  local_60 = 0;
  uStack_58 = 0;
  lVar2 = FUN_10000d8b8();
  FUN_1003a985c(&local_60,lVar2);
  *(undefined1 *)(lVar2 + 0x10) = 1;
  lVar2 = FUN_10000ef8c();
  FUN_1003a985c(&local_60,lVar2);
  *(byte *)(lVar2 + 0x10) = *(byte *)(lVar2 + 0x10) & 0xe7 | 4;
  plVar3 = (long *)thunk_FUN_10000e0ac();
  FUN_1003a985c(&local_60,plVar3);
  (**(code **)(*plVar3 + 0x50))(plVar3,"Ability02_Run_Back");
  plVar3 = (long *)thunk_FUN_10000e5dc();
  FUN_1003a985c(&local_60,plVar3);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x58))(plVar3,"Sound_Amael_Ability_B_Back_Run");
  uVar4 = FUN_1010a1520();
  lVar2 = FUN_1010a0e0c(uVar4,0,"*KindredSoundBalance*",0);
  FUN_1003d1264(*(undefined4 *)(lVar2 + 0x778));
  (**(code **)(*plVar3 + 0x28))(plVar3);
  lVar2 = FUN_10000ceb8();
  FUN_1003a985c(&local_60,lVar2);
  *(undefined4 *)(lVar2 + 0x2c) = 0x3e4ccccd;
  *(undefined8 *)(lVar2 + 0x10) = 0;
  plVar3 = (long *)FUN_10000cd5c();
  FUN_1003a985c(&local_60,plVar3);
  local_70 = FUN_1003d1884;
  local_68 = 3;
  plVar3 = (long *)(**(code **)(*plVar3 + 0x80))(plVar3,&local_70);
  local_80 = FUN_1003d1898;
  local_78 = 3;
  plVar3 = (long *)(**(code **)(*plVar3 + 0xa8))(plVar3,&local_80);
  (**(code **)(*plVar3 + 0xb0))(plVar3,1);
  lVar2 = FUN_10000ceb8();
  FUN_1003a985c(&local_60,lVar2);
  *(undefined4 *)(lVar2 + 0x2c) = 0x3dcccccd;
  *(undefined8 *)(lVar2 + 0x10) = 0;
  uVar4 = FUN_10000f9c0();
  FUN_1003a985c(&local_60,uVar4);
  lVar2 = FUN_10000ceb8();
  FUN_1003a985c(&local_60,lVar2);
  *(undefined4 *)(lVar2 + 0x2c) = 0x3e4ccccd;
  *(undefined8 *)(lVar2 + 0x10) = 0;
  plVar3 = (long *)thunk_FUN_10000e0ac();
  FUN_1003a985c(&local_60,plVar3);
  (**(code **)(*plVar3 + 0x50))(plVar3,"Ability02_Attack");
  plVar3 = (long *)thunk_FUN_10000e5dc();
  FUN_1003a985c(&local_60,plVar3);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x58))(plVar3,"Sound_Amael_Ability_B_Forward_Run");
  uVar4 = FUN_1010a1520();
  lVar2 = FUN_1010a0e0c(uVar4,0,"*KindredSoundBalance*",0);
  FUN_1003d1264(*(undefined4 *)(lVar2 + 0x77c));
  (**(code **)(*plVar3 + 0x28))(plVar3);
  lVar2 = FUN_10000e1b4();
  FUN_1003a985c(&local_60,lVar2);
  *(undefined8 *)(lVar2 + 0x40) = 0;
  *(ushort *)(lVar2 + 0x80) = *(ushort *)(lVar2 + 0x80) & 0xffef | 3;
  *(uint *)(lVar2 + 0x3c) = (uint)lVar2 & 0xffff;
  *(undefined8 *)(lVar2 + 0x20) = 0;
  *(undefined8 *)(lVar2 + 0x28) = 1;
  *(undefined4 *)(lVar2 + 0x10) = 0xc23a96eb;
  plVar3 = (long *)thunk_FUN_10000e358();
  FUN_1003a985c(&local_60,plVar3);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x68))(plVar3,"Bone_RightArm");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Amael_Ability02_RightArm");
  plVar3 = (long *)(**(code **)(*plVar3 + 0xc0))(0x3f800000,0,0);
  plVar3 = (long *)(**(code **)(*plVar3 + 0xb0))(plVar3,1);
  (**(code **)(*plVar3 + 0x78))(plVar3,1);
  plVar3 = (long *)thunk_FUN_10000e358();
  FUN_1003a985c(&local_60,plVar3);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x68))(plVar3,"Bone_LeftArm");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Amael_Ability02_LeftArm");
  plVar3 = (long *)(**(code **)(*plVar3 + 0xc0))(0x3f800000,0,0);
  plVar3 = (long *)(**(code **)(*plVar3 + 0xb0))(plVar3,1);
  (**(code **)(*plVar3 + 0x78))(plVar3,1);
  plVar3 = (long *)thunk_FUN_10000e6f4();
  FUN_1003a985c(&local_60,plVar3);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x50))(plVar3,"ability2");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x18))(0x3e4ccccd);
  (**(code **)(*plVar3 + 0x20))();
  plVar3 = (long *)FUN_10000bdf0();
  FUN_1003a985c(&local_60,plVar3);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x50))(plVar3,PTR_s_Buff_SelfProjectile_10185a530);
  local_70 = (code *)CONCAT44(local_70._4_4_,0x3f19999a);
  local_68 = 1;
  plVar3 = (long *)(**(code **)(*plVar3 + 0x18))(plVar3,&local_70);
  (**(code **)(*plVar3 + 0x48))(plVar3,0xd5);
  plVar3 = (long *)FUN_10000cd5c();
  FUN_1003a985c(&local_60,plVar3);
  local_70 = FUN_1003d1708;
  local_68 = 4;
  plVar3 = (long *)(**(code **)(*plVar3 + 0x80))(plVar3,&local_70);
  local_80 = FUN_1003d18ac;
  local_78 = 3;
  plVar3 = (long *)(**(code **)(*plVar3 + 0xa8))(plVar3,&local_80);
  (**(code **)(*plVar3 + 0xb0))(plVar3,1);
  lVar2 = FUN_1003e10f0();
  bVar1 = *(byte *)(lVar2 + 0xe5);
  lVar2 = FUN_10000ecbc();
  FUN_1003a985c(&local_60,lVar2);
  *(code **)(lVar2 + 0x70) = FUN_1003d12c8;
  *(code **)(lVar2 + 0x78) = FUN_1003d1314;
  *(undefined4 *)(lVar2 + 0x88) = 0x3fc00000;
  *(undefined8 *)(lVar2 + 0x18) = 0;
  *(undefined1 *)(lVar2 + 0x20) = 1;
  *(undefined8 *)(lVar2 + 0x24) = 0;
  *(undefined8 *)(lVar2 + 0x34) = 0;
  *(undefined8 *)(lVar2 + 0x2c) = 0;
  *(undefined4 *)(lVar2 + 0x3c) = 0;
  *(undefined8 *)(lVar2 + 0x48) = 0xbf800000c0000000;
  *(undefined8 *)(lVar2 + 0x40) = 0xbf800000bf800000;
  *(undefined4 *)(lVar2 + 0x50) = 0x3f800000;
  *(undefined1 *)(lVar2 + 0x54) = 0xff;
  *(undefined8 *)(lVar2 + 0x60) = 0xffffffff00000000;
  *(undefined8 *)(lVar2 + 0x58) = 0xffffffff00040000;
  *(byte *)(lVar2 + 0x6a) = bVar1 | 0x14;
  *(undefined2 *)(lVar2 + 0x68) = 0x4120;
  lVar2 = FUN_10000c3b0();
  FUN_1003a985c(&local_60,lVar2);
  *(code **)(lVar2 + 0x10) = FUN_1003d13f8;
  lVar2 = FUN_10000c8e8();
  FUN_1003a985c(&local_60,lVar2);
  lVar5 = FUN_10049ab34(lVar2 + 0x10);
  *(undefined **)(lVar5 + 8) = PTR_s_Buff_Amael_PowerReady_10185b948;
  lVar2 = lVar2 + 0xb0;
  plVar3 = (long *)FUN_10000bed8();
  FUN_1003a985c(lVar2,plVar3);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x70))(plVar3,PTR_s_Buff_Stunned_10185a208);
  local_70 = FUN_1003d1878;
  local_68 = 3;
  (**(code **)(*plVar3 + 0x18))(plVar3,&local_70);
  lVar5 = FUN_10000ceb8();
  FUN_1003a985c(lVar2,lVar5);
  *(undefined4 *)(lVar5 + 0x2c) = 0x3e99999a;
  *(undefined8 *)(lVar5 + 0x10) = 0;
  lVar5 = FUN_10000dbb0();
  FUN_1003a985c(lVar2,lVar5);
  FUN_1003a4e5c(&local_70,PTR_s_Buff_Amael_EmpowerMeter_10185b918);
  *(undefined4 *)(lVar5 + 0x10) = local_70._0_4_;
  *(undefined4 *)(lVar5 + 0x14) = 0xfffffffe;
  *(byte *)(lVar5 + 0x18) = *(byte *)(lVar5 + 0x18) & 0xfe;
  plVar3 = (long *)thunk_FUN_10000e5dc();
  FUN_1003a985c(&local_60,plVar3);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x58))(plVar3,"Sound_Amael_Ability_B_Hit");
  uVar4 = FUN_1010a1520();
  lVar2 = FUN_1010a0e0c(uVar4,0,"*KindredSoundBalance*",0);
  FUN_1003d1264(*(undefined4 *)(lVar2 + 0x780));
  (**(code **)(*plVar3 + 0x28))(plVar3);
  lVar2 = FUN_10000ceb8();
  FUN_1003a985c(&local_60,lVar2);
  *(undefined4 *)(lVar2 + 0x2c) = 0x3dcccccd;
  *(undefined8 *)(lVar2 + 0x10) = 0;
  uVar4 = FUN_10000f9c0();
  FUN_1003a985c(&local_60,uVar4);
  lVar2 = FUN_10000ceb8();
  FUN_1003a985c(&local_60,lVar2);
  *(undefined4 *)(lVar2 + 0x2c) = 0x3e4ccccd;
  *(undefined8 *)(lVar2 + 0x10) = 0;
  plVar3 = (long *)thunk_FUN_10000e358();
  FUN_1003a985c(&local_60,plVar3);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x50))(plVar3);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x58))();
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Amael_Ability02_Impact");
  (**(code **)(*plVar3 + 0x78))(plVar3,1);
  lVar2 = FUN_10000d8b8();
  FUN_1003a985c(&local_60,lVar2);
  *(undefined1 *)(lVar2 + 0x10) = 0;
  return local_60;
}




undefined8 FUN_10039cddc(void)

{
  byte bVar1;
  bool bVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  code *local_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  
  local_80 = 0;
  uStack_78 = 0;
  lVar3 = FUN_10000d8b8();
  FUN_1003a985c(&local_80,lVar3);
  *(undefined1 *)(lVar3 + 0x10) = 1;
  uVar4 = FUN_10000ef8c();
  FUN_1003a985c(&local_80,uVar4);
  uVar4 = FUN_10000c6d4();
  FUN_1003a985c(&local_80,uVar4);
  lVar5 = FUN_10000c8e8();
  FUN_1003a985c(&local_80,lVar5);
  lVar3 = FUN_10049ac6c(lVar5 + 0x10);
  *(code **)(lVar3 + 8) = FUN_1003d18c0;
  lVar3 = FUN_1003e10f0();
  bVar1 = *(byte *)(lVar3 + 0xe5);
  lVar3 = lVar5 + 0xb0;
  plVar6 = (long *)thunk_FUN_10000e0ac();
  FUN_1003a985c(lVar3,plVar6);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x50))(plVar6,"Ability03");
  (**(code **)(*plVar6 + 0x18))(plVar6,"AttackToIdleCombat");
  plVar6 = (long *)thunk_FUN_10000e5dc();
  FUN_1003a985c(lVar3,plVar6);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x58))(plVar6,"Sound_Amael_Ability_C_Dash");
  uVar4 = FUN_1010a1520();
  lVar7 = FUN_1010a0e0c(uVar4,0,"*KindredSoundBalance*",0);
  FUN_1003d1264(*(undefined4 *)(lVar7 + 0x784));
  (**(code **)(*plVar6 + 0x28))(plVar6);
  plVar6 = (long *)thunk_FUN_10000e6f4();
  FUN_1003a985c(&local_80,plVar6);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x50))(plVar6,"ability3");
  plVar6 = (long *)(**(code **)(*plVar6 + 0x18))(0x3f000000);
  (**(code **)(*plVar6 + 0x20))();
  lVar7 = FUN_10000ceb8();
  FUN_1003a985c(lVar3,lVar7);
  *(undefined4 *)(lVar7 + 0x2c) = 0x3e4ccccd;
  *(undefined8 *)(lVar7 + 0x10) = 0;
  plVar6 = (long *)FUN_10000cd5c();
  FUN_1003a985c(lVar3,plVar6);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x68))(0x3f000000,0x3f800000,0x40133333,0x3fe66666,plVar6)
  ;
  plVar6 = (long *)(**(code **)(*plVar6 + 0xb0))(plVar6,1);
  local_90._0_4_ = 0x3e99999a;
  local_88 = 1;
  (**(code **)(*plVar6 + 0xa8))(plVar6,&local_90);
  plVar6 = (long *)thunk_FUN_10000e0ac();
  FUN_1003a985c(lVar3,plVar6);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x50))(plVar6,"Ability03_Attack_02");
  (**(code **)(*plVar6 + 0x18))(plVar6,"AttackToIdleCombat");
  plVar6 = (long *)thunk_FUN_10000e5dc();
  FUN_1003a985c(lVar3,plVar6);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x58))(plVar6,"Sound_Amael_Ability_C_Elbow_Drop");
  uVar4 = FUN_1010a1520();
  lVar7 = FUN_1010a0e0c(uVar4,0,"*KindredSoundBalance*",0);
  FUN_1003d1264(*(undefined4 *)(lVar7 + 0x788));
  (**(code **)(*plVar6 + 0x28))(plVar6);
  lVar7 = FUN_10000e1b4();
  FUN_1003a985c(lVar3,lVar7);
  *(undefined8 *)(lVar7 + 0x40) = 0;
  *(ushort *)(lVar7 + 0x80) = *(ushort *)(lVar7 + 0x80) & 0xffef | 3;
  *(uint *)(lVar7 + 0x3c) = (uint)lVar7 & 0xffff;
  *(undefined8 *)(lVar7 + 0x20) = 0;
  *(undefined8 *)(lVar7 + 0x28) = 1;
  *(undefined4 *)(lVar7 + 0x10) = 0xc13a9558;
  lVar7 = FUN_10000ceb8();
  FUN_1003a985c(lVar3,lVar7);
  *(undefined4 *)(lVar7 + 0x2c) = 0x3f000000;
  *(undefined8 *)(lVar7 + 0x10) = 0;
  lVar7 = FUN_10000ed74();
  FUN_1003a985c(lVar3,lVar7);
  *(undefined8 *)(lVar7 + 0x18) = 0;
  *(undefined1 *)(lVar7 + 0x20) = 1;
  *(undefined8 *)(lVar7 + 0x24) = 0;
  *(undefined8 *)(lVar7 + 0x34) = 0;
  *(undefined8 *)(lVar7 + 0x2c) = 0;
  *(undefined4 *)(lVar7 + 0x3c) = 0;
  *(undefined8 *)(lVar7 + 0x48) = 0xbf800000c0000000;
  *(undefined8 *)(lVar7 + 0x40) = 0xbf800000bf800000;
  *(undefined4 *)(lVar7 + 0x50) = 0x3f800000;
  *(undefined1 *)(lVar7 + 0x54) = 0xff;
  *(undefined8 *)(lVar7 + 0x60) = 0xffffffff00000000;
  *(undefined8 *)(lVar7 + 0x58) = 0xffffffff00200000;
  *(byte *)(lVar7 + 0x6a) = bVar1 | 0x14;
  *(undefined2 *)(lVar7 + 0x68) = 0x4120;
  bVar2 = DAT_101d23a38 != '\0';
  *(undefined4 *)(lVar7 + 0xa4) = 0x41000000;
  *(byte *)(lVar7 + 0xa8) = *(byte *)(lVar7 + 0xa8) & 0xf0 | bVar2;
  lVar7 = FUN_10000c0a8();
  FUN_1003a985c(lVar3,lVar7);
  *(code **)(lVar7 + 0x10) = FUN_1003d1928;
  *(undefined2 *)(lVar7 + 0x18) = 0x100;
  plVar6 = (long *)thunk_FUN_10000e358();
  FUN_1003a985c(lVar3,plVar6);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x58))(plVar6);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x48))(plVar6,"Effect_Amael_Ability03_Attack_02");
  (**(code **)(*plVar6 + 0x78))(plVar6,0);
  plVar6 = (long *)thunk_FUN_10000f1a0();
  FUN_1003a985c(lVar3,plVar6);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x60))(plVar6);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x10))(0x3f19999a);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x18))(0x3f000000);
  (**(code **)(*plVar6 + 0x20))(0x41700000);
  plVar6 = (long *)FUN_10000cb8c();
  FUN_1003a985c(lVar3,plVar6);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x50))(plVar6);
  (**(code **)(*plVar6 + 0x38))(plVar6,"AoEDamage",2);
  lVar7 = FUN_10000c3b0();
  FUN_1003a985c(lVar3,lVar7);
  *(code **)(lVar7 + 0x10) = FUN_1003d13f8;
  lVar5 = lVar5 + 200;
  plVar6 = (long *)thunk_FUN_10000e0ac();
  FUN_1003a985c(lVar5,plVar6);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x50))(plVar6,"Ability03");
  (**(code **)(*plVar6 + 0x18))(plVar6,"AttackToIdleCombat");
  plVar6 = (long *)thunk_FUN_10000e5dc();
  FUN_1003a985c(lVar5,plVar6);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x58))(plVar6,"Sound_Amael_Ability_C_Dash");
  uVar4 = FUN_1010a1520();
  lVar3 = FUN_1010a0e0c(uVar4,0,"*KindredSoundBalance*",0);
  FUN_1003d1264(*(undefined4 *)(lVar3 + 0x784));
  (**(code **)(*plVar6 + 0x28))(plVar6);
  plVar6 = (long *)FUN_10000cd5c();
  FUN_1003a985c(lVar5,plVar6);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x68))(0x3f000000,0x3f800000,0x40133333,0x3fe66666,plVar6)
  ;
  plVar6 = (long *)(**(code **)(*plVar6 + 0xb0))(plVar6,1);
  local_90 = (code *)CONCAT44(local_90._4_4_,0x3e99999a);
  local_88 = 1;
  (**(code **)(*plVar6 + 0xa8))(plVar6,&local_90);
  uVar4 = FUN_10000bc94();
  FUN_1003a985c(lVar5,uVar4);
  plVar6 = (long *)thunk_FUN_10000e0ac();
  FUN_1003a985c(lVar5,plVar6);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x50))(plVar6,"Ability03_Attack_01");
  (**(code **)(*plVar6 + 0x18))(plVar6,"AttackToIdleCombat");
  plVar6 = (long *)thunk_FUN_10000e5dc();
  FUN_1003a985c(lVar5,plVar6);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x58))(plVar6,"Sound_Amael_Ability_C_Super_Kick");
  uVar4 = FUN_1010a1520();
  lVar3 = FUN_1010a0e0c(uVar4,0,"*KindredSoundBalance*",0);
  FUN_1003d1264(*(undefined4 *)(lVar3 + 0x78c));
  (**(code **)(*plVar6 + 0x28))(plVar6);
  lVar3 = FUN_10000e1b4();
  FUN_1003a985c(lVar5,lVar3);
  *(undefined8 *)(lVar3 + 0x40) = 0;
  *(ushort *)(lVar3 + 0x80) = *(ushort *)(lVar3 + 0x80) & 0xffef | 3;
  *(uint *)(lVar3 + 0x3c) = (uint)lVar3 & 0xffff;
  *(undefined8 *)(lVar3 + 0x20) = 0;
  *(undefined8 *)(lVar3 + 0x28) = 1;
  *(undefined4 *)(lVar3 + 0x10) = 0xc13a9558;
  lVar3 = FUN_10000ceb8();
  FUN_1003a985c(lVar5,lVar3);
  *(undefined4 *)(lVar3 + 0x2c) = 0x3e99999a;
  *(undefined8 *)(lVar3 + 0x10) = 0;
  plVar6 = (long *)thunk_FUN_10000e358();
  FUN_1003a985c(lVar5,plVar6);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x58))(plVar6);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x48))(plVar6,"Effect_Amael_Ability03_Attack_01");
  (**(code **)(*plVar6 + 0x78))(plVar6,0);
  lVar3 = FUN_10000c0a8();
  FUN_1003a985c(lVar5,lVar3);
  *(code **)(lVar3 + 0x10) = FUN_1003d1928;
  *(undefined2 *)(lVar3 + 0x18) = 0x100;
  plVar6 = (long *)FUN_10000cb8c();
  FUN_1003a985c(lVar5,plVar6);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x50))(plVar6);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x20))(plVar6,"DAMAGE");
  (**(code **)(*plVar6 + 0x70))(plVar6,1);
  lVar3 = FUN_10000c3b0();
  FUN_1003a985c(lVar5,lVar3);
  *(code **)(lVar3 + 0x10) = FUN_1003d13f8;
  lVar3 = FUN_10000c8e8();
  FUN_1003a985c(&local_80,lVar3);
  lVar5 = FUN_10049ab34(lVar3 + 0x10);
  *(undefined **)(lVar5 + 8) = PTR_s_Buff_Amael_PowerReady_10185b948;
  lVar3 = lVar3 + 0xb0;
  plVar6 = (long *)FUN_10000bed8();
  FUN_1003a985c(lVar3,plVar6);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x70))(plVar6,PTR_s_Buff_Stunned_10185a208);
  local_90 = FUN_1003d1878;
  local_88 = 3;
  (**(code **)(*plVar6 + 0x18))(plVar6,&local_90);
  lVar5 = FUN_10000ceb8();
  FUN_1003a985c(lVar3,lVar5);
  *(undefined4 *)(lVar5 + 0x2c) = 0x3e99999a;
  *(undefined8 *)(lVar5 + 0x10) = 0;
  lVar5 = FUN_10000dbb0();
  FUN_1003a985c(lVar3,lVar5);
  FUN_1003a4e5c(&local_90,PTR_s_Buff_Amael_EmpowerMeter_10185b918);
  *(undefined4 *)(lVar5 + 0x10) = local_90._0_4_;
  *(undefined4 *)(lVar5 + 0x14) = 0xfffffffe;
  *(byte *)(lVar5 + 0x18) = *(byte *)(lVar5 + 0x18) & 0xfe;
  lVar3 = FUN_10000ceb8();
  FUN_1003a985c(&local_80,lVar3);
  *(undefined4 *)(lVar3 + 0x2c) = 0x3dcccccd;
  *(undefined8 *)(lVar3 + 0x10) = 0;
  uVar4 = FUN_10000f9c0();
  FUN_1003a985c(&local_80,uVar4);
  lVar3 = FUN_10000d8b8();
  FUN_1003a985c(&local_80,lVar3);
  *(undefined1 *)(lVar3 + 0x10) = 0;
  uVar4 = FUN_10000f034();
  FUN_1003a985c(&local_80,uVar4);
  return local_80;
}




undefined8 FUN_10039d6d0(void)

{
  byte bVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  code *local_70;
  undefined4 local_68;
  code *local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  local_50 = 0;
  uStack_48 = 0;
  lVar2 = FUN_10000d8b8();
  FUN_1003a985c(&local_50,lVar2);
  *(undefined1 *)(lVar2 + 0x10) = 1;
  uVar3 = FUN_10000bb2c();
  FUN_1003a985c(&local_50,uVar3);
  lVar2 = FUN_10000c540();
  FUN_1003a985c(&local_50,lVar2);
  *(undefined **)(lVar2 + 0x10) = PTR_s_Buff_Amael_A_Charge_Control_10185b940;
  uVar3 = FUN_10000c784();
  FUN_1003a985c(&local_50,uVar3);
  plVar4 = (long *)thunk_FUN_10000e0ac();
  FUN_1003a985c(&local_50,plVar4);
  (**(code **)(*plVar4 + 0x50))(plVar4,"Ability01_Attack");
  plVar4 = (long *)thunk_FUN_10000e5dc();
  FUN_1003a985c(&local_50,plVar4);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x58))(plVar4,"Sound_Amael_Ability_A_Leap");
  uVar3 = FUN_1010a1520();
  lVar2 = FUN_1010a0e0c(uVar3,0,"*KindredSoundBalance*",0);
  FUN_1003d1264(*(undefined4 *)(lVar2 + 0x770));
  (**(code **)(*plVar4 + 0x28))(plVar4);
  lVar2 = FUN_10000e1b4();
  FUN_1003a985c(&local_50,lVar2);
  *(undefined8 *)(lVar2 + 0x40) = 0;
  *(ushort *)(lVar2 + 0x80) = *(ushort *)(lVar2 + 0x80) & 0xffef | 3;
  *(uint *)(lVar2 + 0x3c) = (uint)lVar2 & 0xffff;
  *(undefined8 *)(lVar2 + 0x20) = 0;
  *(undefined8 *)(lVar2 + 0x28) = 1;
  *(undefined4 *)(lVar2 + 0x10) = 0xc33a987e;
  lVar2 = FUN_10000ef8c();
  FUN_1003a985c(&local_50,lVar2);
  *(byte *)(lVar2 + 0x10) = *(byte *)(lVar2 + 0x10) & 0xe7 | 4;
  plVar4 = (long *)thunk_FUN_10000e6f4();
  FUN_1003a985c(&local_50,plVar4);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))(plVar4,"ability1");
  plVar4 = (long *)(**(code **)(*plVar4 + 0x18))(0x3f666666);
  (**(code **)(*plVar4 + 0x20))();
  plVar4 = (long *)FUN_10000bdf0();
  FUN_1003a985c(&local_50,plVar4);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))(plVar4,PTR_s_Buff_SelfProjectile_10185a530);
  local_60 = (code *)CONCAT44(local_60._4_4_,0x3f000000);
  local_58 = 1;
  plVar4 = (long *)(**(code **)(*plVar4 + 0x18))(plVar4,&local_60);
  (**(code **)(*plVar4 + 0x48))(plVar4,0xd6);
  plVar4 = (long *)FUN_10000cd5c();
  FUN_1003a985c(&local_50,plVar4);
  local_60 = FUN_1003d1528;
  local_58 = 4;
  plVar4 = (long *)(**(code **)(*plVar4 + 0x80))(plVar4,&local_60);
  local_70 = FUN_1003d1864;
  local_68 = 3;
  plVar4 = (long *)(**(code **)(*plVar4 + 0xa8))(plVar4,&local_70);
  (**(code **)(*plVar4 + 0xb0))(plVar4,1);
  lVar2 = FUN_1003e10f0();
  bVar1 = *(byte *)(lVar2 + 0xe5);
  lVar2 = FUN_10000ecbc();
  FUN_1003a985c(&local_50,lVar2);
  *(code **)(lVar2 + 0x70) = FUN_1003d12c8;
  *(code **)(lVar2 + 0x78) = FUN_1003d1314;
  *(undefined4 *)(lVar2 + 0x88) = 0x3fc00000;
  *(undefined8 *)(lVar2 + 0x18) = 0;
  *(undefined1 *)(lVar2 + 0x20) = 1;
  *(undefined8 *)(lVar2 + 0x24) = 0;
  *(undefined8 *)(lVar2 + 0x34) = 0;
  *(undefined8 *)(lVar2 + 0x2c) = 0;
  *(undefined4 *)(lVar2 + 0x3c) = 0;
  *(undefined8 *)(lVar2 + 0x48) = 0xbf800000c0000000;
  *(undefined8 *)(lVar2 + 0x40) = 0xbf800000bf800000;
  *(undefined4 *)(lVar2 + 0x50) = 0x3f800000;
  *(undefined1 *)(lVar2 + 0x54) = 0xff;
  *(undefined8 *)(lVar2 + 0x60) = 0xffffffff00000000;
  *(undefined8 *)(lVar2 + 0x58) = 0xffffffff00040000;
  *(byte *)(lVar2 + 0x6a) = bVar1 | 0x14;
  *(undefined2 *)(lVar2 + 0x68) = 0x4120;
  lVar2 = FUN_10000c3b0();
  FUN_1003a985c(&local_50,lVar2);
  *(code **)(lVar2 + 0x10) = FUN_1003d13f8;
  lVar2 = FUN_10000c8e8();
  FUN_1003a985c(&local_50,lVar2);
  lVar5 = FUN_10049ab34(lVar2 + 0x10);
  *(undefined **)(lVar5 + 8) = PTR_s_Buff_Amael_PowerReady_10185b948;
  lVar2 = lVar2 + 0xb0;
  plVar4 = (long *)FUN_10000bed8();
  FUN_1003a985c(lVar2,plVar4);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x70))(plVar4,PTR_s_Buff_Stunned_10185a208);
  local_60 = FUN_1003d1878;
  local_58 = 3;
  (**(code **)(*plVar4 + 0x18))(plVar4,&local_60);
  lVar5 = FUN_10000ceb8();
  FUN_1003a985c(lVar2,lVar5);
  *(undefined4 *)(lVar5 + 0x2c) = 0x3e99999a;
  *(undefined8 *)(lVar5 + 0x10) = 0;
  lVar5 = FUN_10000dbb0();
  FUN_1003a985c(lVar2,lVar5);
  FUN_1003a4e5c(&local_60,PTR_s_Buff_Amael_EmpowerMeter_10185b918);
  *(undefined4 *)(lVar5 + 0x10) = local_60._0_4_;
  *(undefined4 *)(lVar5 + 0x14) = 0xfffffffe;
  *(byte *)(lVar5 + 0x18) = *(byte *)(lVar5 + 0x18) & 0xfe;
  plVar4 = (long *)thunk_FUN_10000e5dc();
  FUN_1003a985c(&local_50,plVar4);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x58))(plVar4,"Sound_Amael_Ability_A_Hit");
  uVar3 = FUN_1010a1520();
  lVar2 = FUN_1010a0e0c(uVar3,0,"*KindredSoundBalance*",0);
  FUN_1003d1264(*(undefined4 *)(lVar2 + 0x774));
  (**(code **)(*plVar4 + 0x28))(plVar4);
  uVar3 = FUN_10000f9c0();
  FUN_1003a985c(&local_50,uVar3);
  lVar2 = FUN_10000ceb8();
  FUN_1003a985c(&local_50,lVar2);
  *(undefined4 *)(lVar2 + 0x2c) = 0x3e99999a;
  *(undefined8 *)(lVar2 + 0x10) = 0;
  uVar3 = FUN_10000f034();
  FUN_1003a985c(&local_50,uVar3);
  lVar2 = FUN_10000d8b8();
  FUN_1003a985c(&local_50,lVar2);
  *(undefined1 *)(lVar2 + 0x10) = 0;
  return local_50;
}




void FUN_10039dba0(void)

{
  FUN_1003d193c("Attack",0xde,"Effect_Karas_DefaultAttacks_Static","BladeShot");
  return;
}




void FUN_10039dbc0(void)

{
  FUN_1003d193c("AltAttack",0xdf,"Effect_Karas_AltAttacks_Static","AltAttack_RightShot");
  return;
}




void FUN_10039dbe0(void)

{
  FUN_1003d193c("CritAttack",0xe0,"Effect_Karas_AltAttacks_Static","BladeShot");
  return;
}




undefined8 FUN_10039dc00(void)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  undefined4 local_60 [2];
  undefined4 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  local_50 = 0;
  uStack_48 = 0;
  lVar1 = FUN_10000d8b8();
  FUN_1003a985c(&local_50,lVar1);
  *(undefined1 *)(lVar1 + 0x10) = 1;
  lVar1 = FUN_10000ef8c();
  FUN_1003a985c(&local_50,lVar1);
  *(byte *)(lVar1 + 0x10) = *(byte *)(lVar1 + 0x10) & 0xe7 | 4;
  plVar2 = (long *)thunk_FUN_10000e0ac();
  FUN_1003a985c(&local_50,plVar2);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x50))(plVar2,"Ability01");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x18))(plVar2,"AttackToIdleCombat");
  (**(code **)(*plVar2 + 0x10))(0x3f99999a);
  plVar2 = (long *)thunk_FUN_10000e358();
  FUN_1003a985c(&local_50,plVar2);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x58))(plVar2);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Karas_Ability_A_Static");
  local_60[0] = 0x3dcccccd;
  local_58 = 1;
  plVar2 = (long *)(**(code **)(*plVar2 + 0x60))(plVar2,local_60);
  (**(code **)(*plVar2 + 0x78))(plVar2,1);
  plVar2 = (long *)thunk_FUN_10000e6f4();
  FUN_1003a985c(&local_50,plVar2);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x50))(plVar2,"ability1");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x18))(0x3e4ccccd);
  (**(code **)(*plVar2 + 0x20))();
  lVar1 = FUN_10000ceb8();
  FUN_1003a985c(&local_50,lVar1);
  *(undefined4 *)(lVar1 + 0x2c) = 0x3f000000;
  *(undefined8 *)(lVar1 + 0x10) = 0;
  plVar2 = (long *)thunk_FUN_10000e5dc();
  FUN_1003a985c(&local_50,plVar2);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x58))(plVar2,"Sound_Karas_Ability_A_Cast");
  uVar3 = FUN_1010a1520();
  lVar1 = FUN_1010a0e0c(uVar3,0,"*KindredSoundBalance*",0);
  FUN_1003d1b2c(*(undefined4 *)(lVar1 + 0x6f0));
  (**(code **)(*plVar2 + 0x28))(plVar2);
  lVar1 = FUN_10000c8e8();
  FUN_1003a985c(&local_50,lVar1);
  lVar4 = FUN_10049ab34(lVar1 + 0x10);
  *(undefined **)(lVar4 + 8) = PTR_s_Buff_Karas_Talent_TalentB_10185b950;
  lVar4 = FUN_10000f250();
  FUN_1003a985c(lVar1 + 200,lVar4);
  *(undefined4 *)(lVar4 + 0x10) = 0xe2;
  FUN_1003d266c(lVar4,"Ability01_BladeShot");
  *(undefined4 *)(lVar4 + 0x34) = 1;
  lVar4 = FUN_10000f250();
  FUN_1003a985c(lVar1 + 0xb0,lVar4);
  *(undefined4 *)(lVar4 + 0x10) = 0xe2;
  FUN_1003d266c(lVar4,"TalentB_LeftShot");
  *(undefined4 *)(lVar4 + 0x34) = 1;
  lVar4 = FUN_10000f250();
  FUN_1003a985c(lVar1 + 0xb0,lVar4);
  *(undefined4 *)(lVar4 + 0x10) = 0xe2;
  FUN_1003d266c(lVar4,"TalentB_RightShot");
  *(undefined4 *)(lVar4 + 0x34) = 1;
  lVar1 = FUN_10000d8b8();
  FUN_1003a985c(&local_50,lVar1);
  *(undefined1 *)(lVar1 + 0x10) = 0;
  return local_50;
}




undefined8 FUN_10039ded0(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  code *local_50;
  undefined4 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  local_40 = 0;
  uStack_38 = 0;
  lVar1 = FUN_10000d8b8();
  FUN_1003a985c(&local_40,lVar1);
  *(undefined1 *)(lVar1 + 0x10) = 1;
  uVar2 = FUN_10000c6d4();
  FUN_1003a985c(&local_40,uVar2);
  lVar1 = FUN_10000c8e8();
  FUN_1003a985c(&local_40,lVar1);
  lVar3 = FUN_10049ab34(lVar1 + 0x10);
  *(undefined **)(lVar3 + 8) = PTR_s_Buff_Karas_LockFlurryBlade_10185b958;
  lVar1 = lVar1 + 200;
  lVar3 = FUN_10000ef8c();
  FUN_1003a985c(lVar1,lVar3);
  *(byte *)(lVar3 + 0x10) = *(byte *)(lVar3 + 0x10) & 0xe7 | 4;
  plVar4 = (long *)thunk_FUN_10000e0ac();
  FUN_1003a985c(lVar1,plVar4);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))(plVar4,"Ability02");
  plVar4 = (long *)(**(code **)(*plVar4 + 0x18))(plVar4,"AttackToIdleCombat");
  (**(code **)(*plVar4 + 0x10))(0x40000000);
  plVar4 = (long *)thunk_FUN_10000e358();
  FUN_1003a985c(lVar1,plVar4);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x58))(plVar4);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x48))(plVar4,"Effect_Karas_B_Land_Static");
  local_50._0_4_ = 0x3f000000;
  local_48 = 1;
  plVar4 = (long *)(**(code **)(*plVar4 + 0x60))(plVar4,&local_50);
  (**(code **)(*plVar4 + 0x78))(plVar4,1);
  plVar4 = (long *)thunk_FUN_10000e5dc();
  FUN_1003a985c(&local_40,plVar4);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x58))(plVar4,"Sound_Karas_Ability_B_Cast");
  uVar2 = FUN_1010a1520();
  lVar3 = FUN_1010a0e0c(uVar2,0,"*KindredSoundBalance*",0);
  FUN_1003d1b2c(*(undefined4 *)(lVar3 + 0x6f8));
  (**(code **)(*plVar4 + 0x28))(plVar4);
  lVar3 = FUN_10000ceb8();
  FUN_1003a985c(lVar1,lVar3);
  *(undefined4 *)(lVar3 + 0x2c) = 0x3ecccccd;
  *(undefined8 *)(lVar3 + 0x10) = 0;
  plVar4 = (long *)thunk_FUN_10000e6f4();
  FUN_1003a985c(&local_40,plVar4);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))(plVar4,"ability2");
  plVar4 = (long *)(**(code **)(*plVar4 + 0x18))(0x3dcccccd);
  (**(code **)(*plVar4 + 0x20))();
  plVar4 = (long *)FUN_10000bdf0();
  FUN_1003a985c(&local_40,plVar4);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))(plVar4,PTR_s_Buff_SelfProjectile_10185a530);
  local_50 = (code *)CONCAT44(local_50._4_4_,0x3ecccccd);
  local_48 = 1;
  plVar4 = (long *)(**(code **)(*plVar4 + 0x18))(plVar4,&local_50);
  (**(code **)(*plVar4 + 0x48))(plVar4,0xe5);
  plVar4 = (long *)FUN_10000cd5c();
  FUN_1003a985c(&local_40,plVar4);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x88))(plVar4);
  local_50 = FUN_1003d1b90;
  local_48 = 3;
  plVar4 = (long *)(**(code **)(*plVar4 + 0xa8))(plVar4,&local_50);
  (**(code **)(*plVar4 + 0xb0))(plVar4,1);
  lVar1 = FUN_10000ceb8();
  FUN_1003a985c(&local_40,lVar1);
  *(undefined4 *)(lVar1 + 0x2c) = 0x3ecccccd;
  *(undefined8 *)(lVar1 + 0x10) = 0;
  uVar2 = FUN_10000f9c0();
  FUN_1003a985c(&local_40,uVar2);
  uVar2 = FUN_10000c6d4();
  FUN_1003a985c(&local_40,uVar2);
  lVar1 = FUN_10000d8b8();
  FUN_1003a985c(&local_40,lVar1);
  *(undefined1 *)(lVar1 + 0x10) = 0;
  uVar2 = FUN_10000f034();
  FUN_1003a985c(&local_40,uVar2);
  return local_40;
}




undefined8 FUN_10039e210(void)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  char cVar6;
  uint uVar7;
  char *pcVar8;
  uint uVar9;
  undefined4 local_80 [2];
  undefined4 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  uVar9 = 0x811c9dc5;
  local_70 = 0;
  uStack_68 = 0;
  lVar1 = FUN_10000ef8c();
  FUN_1003a985c(&local_70,lVar1);
  *(byte *)(lVar1 + 0x10) = *(byte *)(lVar1 + 0x10) & 0xe7 | 4;
  plVar2 = (long *)thunk_FUN_10000e0ac();
  FUN_1003a985c(&local_70,plVar2);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x50))(plVar2,"Ability03");
  (**(code **)(*plVar2 + 0x18))(plVar2,"AttackToIdle");
  plVar2 = (long *)thunk_FUN_10000e6f4();
  FUN_1003a985c(&local_70,plVar2);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x50))(plVar2,"ability3");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x18))(0x3dcccccd);
  (**(code **)(*plVar2 + 0x20))();
  lVar3 = FUN_10000c8e8();
  FUN_1003a985c(&local_70,lVar3);
  lVar1 = FUN_10049ab34(lVar3 + 0x10);
  *(undefined **)(lVar1 + 8) = PTR_s_Buff_Karas_Talent_TalentC_10185b960;
  lVar1 = lVar3 + 200;
  plVar2 = (long *)FUN_10000bdf0();
  FUN_1003a985c(lVar1,plVar2);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x50))(plVar2,PTR_s_Buff_Karas_LockFlurryBlade_10185b958);
  local_80[0] = 0x3fe66666;
  local_78 = 1;
  (**(code **)(*plVar2 + 0x18))(plVar2,local_80);
  lVar3 = lVar3 + 0xb0;
  plVar2 = (long *)FUN_10000bdf0();
  FUN_1003a985c(lVar3,plVar2);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x50))(plVar2,PTR_s_Buff_Karas_LockFlurryBlade_10185b958);
  local_80[0] = 0x3fe66666;
  local_78 = 1;
  (**(code **)(*plVar2 + 0x18))(plVar2,local_80);
  plVar2 = (long *)thunk_FUN_10000e358();
  FUN_1003a985c(lVar1,plVar2);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x58))(plVar2);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Karas_Ability_C_Static");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,1);
  local_80[0] = 0x3fd9999a;
  local_78 = 1;
  (**(code **)(*plVar2 + 0x60))(plVar2,local_80);
  plVar2 = (long *)thunk_FUN_10000e358();
  FUN_1003a985c(lVar3,plVar2);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x58))(plVar2);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Karas_Ability_C_Static");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,1);
  local_80[0] = 0x3fd9999a;
  local_78 = 1;
  (**(code **)(*plVar2 + 0x60))(plVar2,local_80);
  plVar2 = (long *)thunk_FUN_10000e5dc();
  FUN_1003a985c(lVar1,plVar2);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x58))(plVar2,"Sound_Karas_Ability_C_Cast");
  uVar4 = FUN_1010a1520();
  lVar5 = FUN_1010a0e0c(uVar4,0,"*KindredSoundBalance*",0);
  FUN_1003d1b2c(*(undefined4 *)(lVar5 + 0x700));
  (**(code **)(*plVar2 + 0x28))(plVar2);
  plVar2 = (long *)thunk_FUN_10000e5dc();
  FUN_1003a985c(lVar3,plVar2);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x58))(plVar2,"Sound_Karas_Ability_C_Cast");
  uVar4 = FUN_1010a1520();
  lVar5 = FUN_1010a0e0c(uVar4,0,"*KindredSoundBalance*",0);
  FUN_1003d1b2c(*(undefined4 *)(lVar5 + 0x700));
  (**(code **)(*plVar2 + 0x28))(plVar2);
  lVar5 = FUN_10000ceb8();
  FUN_1003a985c(lVar1,lVar5);
  *(undefined4 *)(lVar5 + 0x2c) = 0x3e99999a;
  *(undefined8 *)(lVar5 + 0x10) = 0;
  lVar5 = FUN_10000f250();
  FUN_1003a985c(lVar1,lVar5);
  *(undefined4 *)(lVar5 + 0x10) = 0xe3;
  FUN_1003d266c(lVar5,"Ability03_FanShot");
  *(undefined4 *)(lVar5 + 0x34) = 2;
  lVar5 = FUN_10000ceb8();
  FUN_1003a985c(lVar3,lVar5);
  *(undefined4 *)(lVar5 + 0x2c) = 0x3e99999a;
  *(undefined8 *)(lVar5 + 0x10) = 0;
  lVar5 = FUN_10000f250();
  FUN_1003a985c(lVar3,lVar5);
  *(undefined4 *)(lVar5 + 0x10) = 0xe4;
  FUN_1003d266c(lVar5,"Ability03_FanShot");
  *(undefined4 *)(lVar5 + 0x34) = 2;
  lVar5 = FUN_10000ceb8();
  FUN_1003a985c(lVar1,lVar5);
  *(undefined4 *)(lVar5 + 0x2c) = 0x3e4ccccd;
  *(undefined8 *)(lVar5 + 0x10) = 0;
  lVar5 = FUN_10000f250();
  FUN_1003a985c(lVar1,lVar5);
  *(undefined4 *)(lVar5 + 0x10) = 0xe3;
  FUN_1003d266c(lVar5,"Ability03_FanShot");
  *(undefined4 *)(lVar5 + 0x34) = 2;
  lVar5 = FUN_10000ceb8();
  FUN_1003a985c(lVar3,lVar5);
  *(undefined4 *)(lVar5 + 0x2c) = 0x3e4ccccd;
  *(undefined8 *)(lVar5 + 0x10) = 0;
  lVar5 = FUN_10000f250();
  FUN_1003a985c(lVar3,lVar5);
  *(undefined4 *)(lVar5 + 0x10) = 0xe4;
  FUN_1003d266c(lVar5,"Ability03_FanShot");
  *(undefined4 *)(lVar5 + 0x34) = 2;
  lVar5 = FUN_10000ceb8();
  FUN_1003a985c(lVar1,lVar5);
  *(undefined4 *)(lVar5 + 0x2c) = 0x3e4ccccd;
  *(undefined8 *)(lVar5 + 0x10) = 0;
  lVar5 = FUN_10000f250();
  FUN_1003a985c(lVar1,lVar5);
  *(undefined4 *)(lVar5 + 0x10) = 0xe3;
  FUN_1003d266c(lVar5,"Ability03_FanShot");
  *(undefined4 *)(lVar5 + 0x34) = 2;
  lVar5 = FUN_10000ceb8();
  FUN_1003a985c(lVar3,lVar5);
  *(undefined4 *)(lVar5 + 0x2c) = 0x3e4ccccd;
  *(undefined8 *)(lVar5 + 0x10) = 0;
  lVar5 = FUN_10000f250();
  FUN_1003a985c(lVar3,lVar5);
  *(undefined4 *)(lVar5 + 0x10) = 0xe4;
  FUN_1003d266c(lVar5,"Ability03_FanShot");
  *(undefined4 *)(lVar5 + 0x34) = 2;
  lVar5 = FUN_10000ceb8();
  FUN_1003a985c(lVar1,lVar5);
  *(undefined4 *)(lVar5 + 0x2c) = 0x3e4ccccd;
  *(undefined8 *)(lVar5 + 0x10) = 0;
  lVar5 = FUN_10000f250();
  FUN_1003a985c(lVar1,lVar5);
  *(undefined4 *)(lVar5 + 0x10) = 0xe4;
  FUN_1003d266c(lVar5,"Ability03_FanShot");
  *(undefined4 *)(lVar5 + 0x34) = 2;
  lVar5 = FUN_10000ceb8();
  FUN_1003a985c(lVar3,lVar5);
  *(undefined4 *)(lVar5 + 0x2c) = 0x3e4ccccd;
  *(undefined8 *)(lVar5 + 0x10) = 0;
  lVar5 = FUN_10000f250();
  FUN_1003a985c(lVar3,lVar5);
  *(undefined4 *)(lVar5 + 0x10) = 0xe4;
  FUN_1003d266c(lVar5,"Ability03_FanShot");
  *(undefined4 *)(lVar5 + 0x34) = 2;
  lVar5 = FUN_10000ceb8();
  FUN_1003a985c(lVar1,lVar5);
  *(undefined4 *)(lVar5 + 0x2c) = 0x3e4ccccd;
  *(undefined8 *)(lVar5 + 0x10) = 0;
  lVar5 = FUN_10000f250();
  FUN_1003a985c(lVar1,lVar5);
  *(undefined4 *)(lVar5 + 0x10) = 0xe3;
  FUN_1003d266c(lVar5,"Ability03_FanShot");
  *(undefined4 *)(lVar5 + 0x34) = 2;
  lVar5 = FUN_10000ceb8();
  FUN_1003a985c(lVar3,lVar5);
  *(undefined4 *)(lVar5 + 0x2c) = 0x3e4ccccd;
  *(undefined8 *)(lVar5 + 0x10) = 0;
  lVar5 = FUN_10000f250();
  FUN_1003a985c(lVar3,lVar5);
  *(undefined4 *)(lVar5 + 0x10) = 0xe4;
  FUN_1003d266c(lVar5,"Ability03_FanShot");
  *(undefined4 *)(lVar5 + 0x34) = 2;
  lVar5 = FUN_10000ceb8();
  FUN_1003a985c(lVar1,lVar5);
  *(undefined4 *)(lVar5 + 0x2c) = 0x3e4ccccd;
  *(undefined8 *)(lVar5 + 0x10) = 0;
  lVar5 = FUN_10000f250();
  FUN_1003a985c(lVar1,lVar5);
  *(undefined4 *)(lVar5 + 0x10) = 0xe3;
  FUN_1003d266c(lVar5,"Ability03_FanShot");
  *(undefined4 *)(lVar5 + 0x34) = 2;
  lVar5 = FUN_10000ceb8();
  FUN_1003a985c(lVar3,lVar5);
  *(undefined4 *)(lVar5 + 0x2c) = 0x3e4ccccd;
  *(undefined8 *)(lVar5 + 0x10) = 0;
  lVar5 = FUN_10000f250();
  FUN_1003a985c(lVar3,lVar5);
  *(undefined4 *)(lVar5 + 0x10) = 0xe4;
  FUN_1003d266c(lVar5,"Ability03_FanShot");
  *(undefined4 *)(lVar5 + 0x34) = 2;
  lVar5 = FUN_10000ceb8();
  FUN_1003a985c(lVar1,lVar5);
  *(undefined4 *)(lVar5 + 0x2c) = 0x3e4ccccd;
  *(undefined8 *)(lVar5 + 0x10) = 0;
  lVar5 = FUN_10000f250();
  FUN_1003a985c(lVar1,lVar5);
  *(undefined4 *)(lVar5 + 0x10) = 0xe3;
  FUN_1003d266c(lVar5,"Ability03_FanShot");
  *(undefined4 *)(lVar5 + 0x34) = 2;
  lVar5 = FUN_10000ceb8();
  FUN_1003a985c(lVar3,lVar5);
  *(undefined4 *)(lVar5 + 0x2c) = 0x3e4ccccd;
  *(undefined8 *)(lVar5 + 0x10) = 0;
  lVar5 = FUN_10000f250();
  FUN_1003a985c(lVar3,lVar5);
  *(undefined4 *)(lVar5 + 0x10) = 0xe4;
  FUN_1003d266c(lVar5,"Ability03_FanShot");
  *(undefined4 *)(lVar5 + 0x34) = 2;
  lVar5 = FUN_10000ceb8();
  FUN_1003a985c(lVar1,lVar5);
  *(undefined4 *)(lVar5 + 0x2c) = 0x3e4ccccd;
  *(undefined8 *)(lVar5 + 0x10) = 0;
  lVar5 = FUN_10000f250();
  FUN_1003a985c(lVar1,lVar5);
  *(undefined4 *)(lVar5 + 0x10) = 0xe4;
  FUN_1003d266c(lVar5,"Ability03_FanShot");
  *(undefined4 *)(lVar5 + 0x34) = 2;
  lVar1 = FUN_10000ceb8();
  FUN_1003a985c(lVar3,lVar1);
  *(undefined4 *)(lVar1 + 0x2c) = 0x3e4ccccd;
  *(undefined8 *)(lVar1 + 0x10) = 0;
  lVar1 = FUN_10000f250();
  FUN_1003a985c(lVar3,lVar1);
  *(undefined4 *)(lVar1 + 0x10) = 0xe4;
  FUN_1003d266c(lVar1,"Ability03_FanShot");
  *(undefined4 *)(lVar1 + 0x34) = 2;
  lVar1 = FUN_10000c8e8();
  FUN_1003a985c(&local_70,lVar1);
  lVar3 = FUN_10049acf0(lVar1 + 0x10);
  if (PTR_s_Ability__Karas__C_10185a120 == (undefined *)0x0) {
    uVar7 = 0;
  }
  else {
    cVar6 = *PTR_s_Ability__Karas__C_10185a120;
    uVar7 = 0x811c9dc5;
    if (cVar6 != '\0') {
      uVar7 = 0x811c9dc5;
      pcVar8 = PTR_s_Ability__Karas__C_10185a120;
      do {
        pcVar8 = pcVar8 + 1;
        uVar7 = (uVar7 ^ (int)cVar6) * 0x1000193;
        cVar6 = *pcVar8;
      } while (cVar6 != '\0');
    }
  }
  *(uint *)(lVar3 + 8) = uVar7;
  *(undefined4 *)(lVar3 + 0xc) = 2;
  lVar3 = FUN_10000c8e8();
  FUN_1003a985c(lVar1 + 0xb0,lVar3);
  lVar1 = FUN_10049ab34(lVar3 + 0x10);
  *(undefined **)(lVar1 + 8) = PTR_s_Buff_Karas_Talent_TalentC_10185b960;
  lVar1 = lVar3 + 0xb0;
  plVar2 = (long *)FUN_10000bdf0();
  FUN_1003a985c(lVar1,plVar2);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x50))(plVar2,PTR_s_Buff_Karas_LockFlurryBlade_10185b958);
  local_80[0] = 0x3f000000;
  local_78 = 1;
  (**(code **)(*plVar2 + 0x18))(plVar2,local_80);
  lVar3 = lVar3 + 200;
  plVar2 = (long *)FUN_10000bdf0();
  FUN_1003a985c(lVar3,plVar2);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x50))(plVar2,PTR_s_Buff_Karas_LockFlurryBlade_10185b958);
  local_80[0] = 0x3f000000;
  local_78 = 1;
  (**(code **)(*plVar2 + 0x18))(plVar2,local_80);
  plVar2 = (long *)thunk_FUN_10000e358();
  FUN_1003a985c(lVar3,plVar2);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x58))(plVar2);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Karas_Ability_C_Static");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,1);
  local_80[0] = 0x3f000000;
  local_78 = 1;
  (**(code **)(*plVar2 + 0x60))(plVar2,local_80);
  plVar2 = (long *)thunk_FUN_10000e358();
  FUN_1003a985c(lVar1,plVar2);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x58))(plVar2);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Karas_Ability_C_Static");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,1);
  local_80[0] = 0x3f000000;
  local_78 = 1;
  (**(code **)(*plVar2 + 0x60))(plVar2,local_80);
  lVar5 = FUN_10000ceb8();
  FUN_1003a985c(lVar1,lVar5);
  *(undefined4 *)(lVar5 + 0x2c) = 0x3e4ccccd;
  *(undefined8 *)(lVar5 + 0x10) = 0;
  lVar5 = FUN_10000f250();
  FUN_1003a985c(lVar1,lVar5);
  *(undefined4 *)(lVar5 + 0x10) = 0xe4;
  FUN_1003d266c(lVar5,"Ability03_FanShot");
  *(undefined4 *)(lVar5 + 0x34) = 2;
  lVar5 = FUN_10000ceb8();
  FUN_1003a985c(lVar3,lVar5);
  *(undefined4 *)(lVar5 + 0x2c) = 0x3e4ccccd;
  *(undefined8 *)(lVar5 + 0x10) = 0;
  lVar5 = FUN_10000f250();
  FUN_1003a985c(lVar3,lVar5);
  *(undefined4 *)(lVar5 + 0x10) = 0xe3;
  FUN_1003d266c(lVar5,"Ability03_FanShot");
  *(undefined4 *)(lVar5 + 0x34) = 2;
  lVar5 = FUN_10000ceb8();
  FUN_1003a985c(lVar1,lVar5);
  *(undefined4 *)(lVar5 + 0x2c) = 0x3e4ccccd;
  *(undefined8 *)(lVar5 + 0x10) = 0;
  lVar5 = FUN_10000f250();
  FUN_1003a985c(lVar1,lVar5);
  *(undefined4 *)(lVar5 + 0x10) = 0xe4;
  FUN_1003d266c(lVar5,"Ability03_FanShot");
  *(undefined4 *)(lVar5 + 0x34) = 2;
  lVar1 = FUN_10000ceb8();
  FUN_1003a985c(lVar3,lVar1);
  *(undefined4 *)(lVar1 + 0x2c) = 0x3e4ccccd;
  *(undefined8 *)(lVar1 + 0x10) = 0;
  lVar1 = FUN_10000f250();
  FUN_1003a985c(lVar3,lVar1);
  *(undefined4 *)(lVar1 + 0x10) = 0xe3;
  FUN_1003d266c(lVar1,"Ability03_FanShot");
  *(undefined4 *)(lVar1 + 0x34) = 2;
  lVar1 = FUN_10000c8e8();
  FUN_1003a985c(&local_70,lVar1);
  lVar3 = FUN_10049acf0(lVar1 + 0x10);
  if (PTR_s_Ability__Karas__C_10185a120 == (undefined *)0x0) {
    uVar9 = 0;
  }
  else {
    cVar6 = *PTR_s_Ability__Karas__C_10185a120;
    pcVar8 = PTR_s_Ability__Karas__C_10185a120;
    while (cVar6 != '\0') {
      pcVar8 = pcVar8 + 1;
      uVar9 = (uVar9 ^ (int)cVar6) * 0x1000193;
      cVar6 = *pcVar8;
    }
  }
  *(uint *)(lVar3 + 8) = uVar9;
  *(undefined4 *)(lVar3 + 0xc) = 3;
  lVar3 = FUN_10000c8e8();
  FUN_1003a985c(lVar1 + 0xb0,lVar3);
  lVar1 = FUN_10049ab34(lVar3 + 0x10);
  *(undefined **)(lVar1 + 8) = PTR_s_Buff_Karas_Talent_TalentC_10185b960;
  lVar1 = lVar3 + 0xb0;
  plVar2 = (long *)FUN_10000bdf0();
  FUN_1003a985c(lVar1,plVar2);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x50))(plVar2,PTR_s_Buff_Karas_LockFlurryBlade_10185b958);
  local_80[0] = 0x3f000000;
  local_78 = 1;
  (**(code **)(*plVar2 + 0x18))(plVar2,local_80);
  lVar3 = lVar3 + 200;
  plVar2 = (long *)FUN_10000bdf0();
  FUN_1003a985c(lVar3,plVar2);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x50))(plVar2,PTR_s_Buff_Karas_LockFlurryBlade_10185b958);
  local_80[0] = 0x3f000000;
  local_78 = 1;
  (**(code **)(*plVar2 + 0x18))(plVar2,local_80);
  plVar2 = (long *)thunk_FUN_10000e358();
  FUN_1003a985c(lVar3,plVar2);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x58))(plVar2);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Karas_Ability_C_Static");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,1);
  local_80[0] = 0x3f000000;
  local_78 = 1;
  (**(code **)(*plVar2 + 0x60))(plVar2,local_80);
  plVar2 = (long *)thunk_FUN_10000e358();
  FUN_1003a985c(lVar1,plVar2);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x58))(plVar2);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Karas_Ability_C_Static");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,1);
  local_80[0] = 0x3f000000;
  local_78 = 1;
  (**(code **)(*plVar2 + 0x60))(plVar2,local_80);
  lVar5 = FUN_10000ceb8();
  FUN_1003a985c(lVar1,lVar5);
  *(undefined4 *)(lVar5 + 0x2c) = 0x3e4ccccd;
  *(undefined8 *)(lVar5 + 0x10) = 0;
  lVar5 = FUN_10000f250();
  FUN_1003a985c(lVar1,lVar5);
  *(undefined4 *)(lVar5 + 0x10) = 0xe4;
  FUN_1003d266c(lVar5,"Ability03_FanShot");
  *(undefined4 *)(lVar5 + 0x34) = 2;
  lVar5 = FUN_10000ceb8();
  FUN_1003a985c(lVar3,lVar5);
  *(undefined4 *)(lVar5 + 0x2c) = 0x3e4ccccd;
  *(undefined8 *)(lVar5 + 0x10) = 0;
  lVar5 = FUN_10000f250();
  FUN_1003a985c(lVar3,lVar5);
  *(undefined4 *)(lVar5 + 0x10) = 0xe3;
  FUN_1003d266c(lVar5,"Ability03_FanShot");
  *(undefined4 *)(lVar5 + 0x34) = 2;
  lVar5 = FUN_10000ceb8();
  FUN_1003a985c(lVar1,lVar5);
  *(undefined4 *)(lVar5 + 0x2c) = 0x3e4ccccd;
  *(undefined8 *)(lVar5 + 0x10) = 0;
  lVar5 = FUN_10000f250();
  FUN_1003a985c(lVar1,lVar5);
  *(undefined4 *)(lVar5 + 0x10) = 0xe4;
  FUN_1003d266c(lVar5,"Ability03_FanShot");
  *(undefined4 *)(lVar5 + 0x34) = 2;
  lVar1 = FUN_10000ceb8();
  FUN_1003a985c(lVar3,lVar1);
  *(undefined4 *)(lVar1 + 0x2c) = 0x3e4ccccd;
  *(undefined8 *)(lVar1 + 0x10) = 0;
  lVar1 = FUN_10000f250();
  FUN_1003a985c(lVar3,lVar1);
  *(undefined4 *)(lVar1 + 0x10) = 0xe4;
  FUN_1003d266c(lVar1,"Ability03_FanShot");
  *(undefined4 *)(lVar1 + 0x34) = 2;
  plVar2 = (long *)FUN_10000c5ec();
  FUN_1003a985c(&local_70,plVar2);
  (**(code **)(*plVar2 + 0x50))(plVar2,DAT_10185b968);
  return local_70;
}




undefined8 FUN_10039eff4(void)

{
  undefined8 uVar1;
  undefined8 local_20;
  undefined8 uStack_18;
  
  local_20 = 0;
  uStack_18 = 0;
  uVar1 = FUN_10000f034();
  FUN_1003a985c(&local_20,uVar1);
  return local_20;
}




void FUN_10039f024(void)

{
  FUN_1003d1ba4("Attack","Effect_Shin_DefaultAttacks_Static",0);
  return;
}




void FUN_10039f03c(void)

{
  FUN_1003d1ba4("AltAttack","Effect_Shin_AltAttacks_Static",0);
  return;
}




void FUN_10039f054(void)

{
  FUN_1003d1ba4("CritAttack","Effect_Shin_CritAttacks_Static",2);
  return;
}




undefined8 FUN_10039f06c(void)

{
  byte bVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 local_40;
  undefined8 uStack_38;
  
  local_40 = 0;
  uStack_38 = 0;
  lVar2 = FUN_10000ef8c();
  FUN_1003a985c(&local_40,lVar2);
  *(byte *)(lVar2 + 0x10) = *(byte *)(lVar2 + 0x10) & 0xe7 | 4;
  uVar3 = FUN_10000d8b8();
  FUN_1003a985c(&local_40,uVar3);
  plVar4 = (long *)thunk_FUN_10000e0ac();
  FUN_1003a985c(&local_40,plVar4);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))(plVar4,"Ability01");
  (**(code **)(*plVar4 + 0x18))(plVar4,"AttackToIdleCombat");
  plVar4 = (long *)thunk_FUN_10000e5dc();
  FUN_1003a985c(&local_40,plVar4);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x58))(plVar4,"Sound_Shin_Ability_A");
  uVar3 = FUN_1010a1520();
  lVar2 = FUN_1010a0e0c(uVar3,0,"*KindredSoundBalance*",0);
  FUN_1003d1de4(*(undefined4 *)(lVar2 + 0x720));
  (**(code **)(*plVar4 + 0x28))(plVar4);
  lVar2 = FUN_10000ceb8();
  FUN_1003a985c(&local_40,lVar2);
  *(undefined4 *)(lVar2 + 0x2c) = 0x3dcccccd;
  *(undefined8 *)(lVar2 + 0x10) = 0;
  plVar4 = (long *)thunk_FUN_10000e358();
  FUN_1003a985c(&local_40,plVar4);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x58))(plVar4);
  (**(code **)(*plVar4 + 0x48))(plVar4,"Effect_Shin_A_Cast");
  plVar4 = (long *)thunk_FUN_10000e6f4();
  FUN_1003a985c(&local_40,plVar4);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))(plVar4,"ability1");
  plVar4 = (long *)(**(code **)(*plVar4 + 0x18))(0x3e4ccccd);
  (**(code **)(*plVar4 + 0x20))();
  lVar2 = FUN_1003e10f0();
  bVar1 = *(byte *)(lVar2 + 0xe5);
  lVar2 = FUN_10000ecbc();
  FUN_1003a985c(&local_40,lVar2);
  *(code **)(lVar2 + 0x70) = FUN_1003d1e48;
  *(code **)(lVar2 + 0x78) = FUN_1003d1e94;
  *(undefined4 *)(lVar2 + 0x88) = 0x3fc00000;
  *(undefined8 *)(lVar2 + 0x18) = 0;
  *(undefined1 *)(lVar2 + 0x20) = 1;
  *(undefined8 *)(lVar2 + 0x24) = 0;
  *(undefined8 *)(lVar2 + 0x34) = 0;
  *(undefined8 *)(lVar2 + 0x2c) = 0;
  *(undefined4 *)(lVar2 + 0x3c) = 0;
  *(undefined8 *)(lVar2 + 0x48) = 0xbf800000c0000000;
  *(undefined8 *)(lVar2 + 0x40) = 0xbf800000bf800000;
  *(undefined4 *)(lVar2 + 0x50) = 0x3f800000;
  *(undefined1 *)(lVar2 + 0x54) = 0xff;
  *(undefined8 *)(lVar2 + 0x60) = 0xffffffff00000000;
  *(undefined8 *)(lVar2 + 0x58) = 0xffffffff00040000;
  *(byte *)(lVar2 + 0x6a) = bVar1 | 0x14;
  *(undefined2 *)(lVar2 + 0x68) = 0x4120;
  lVar2 = FUN_10000ceb8();
  FUN_1003a985c(&local_40,lVar2);
  *(undefined4 *)(lVar2 + 0x2c) = 0x3e4ccccd;
  *(undefined8 *)(lVar2 + 0x10) = 0;
  plVar4 = (long *)thunk_FUN_10000e5dc();
  FUN_1003a985c(&local_40,plVar4);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x58))(plVar4,"Sound_Shin_Ability_A_Impact");
  uVar3 = FUN_1010a1520();
  lVar2 = FUN_1010a0e0c(uVar3,0,"*KindredSoundBalance*",0);
  FUN_1003d1de4(*(undefined4 *)(lVar2 + 0x724));
  (**(code **)(*plVar4 + 0x28))(plVar4);
  plVar4 = (long *)FUN_10000cb8c();
  FUN_1003a985c(&local_40,plVar4);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))(plVar4);
  (**(code **)(*plVar4 + 0x38))(plVar4,"Damage",0);
  uVar3 = FUN_10000c784();
  FUN_1003a985c(&local_40,uVar3);
  lVar2 = FUN_10000d8b8();
  FUN_1003a985c(&local_40,lVar2);
  *(undefined1 *)(lVar2 + 0x10) = 0;
  return local_40;
}




undefined8 FUN_10039f390(void)

{
  byte bVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28 [2];
  
  local_38 = 0;
  uStack_30 = 0;
  lVar2 = FUN_10000ef8c();
  FUN_1003a985c(&local_38,lVar2);
  *(byte *)(lVar2 + 0x10) = *(byte *)(lVar2 + 0x10) & 0xe7 | 4;
  uVar3 = FUN_10000d8b8();
  FUN_1003a985c(&local_38,uVar3);
  lVar2 = FUN_10000dbb0();
  FUN_1003a985c(&local_38,lVar2);
  FUN_1003a4e5c(local_28,PTR_s_Buff_Shin_SetFlameMeter_10185b9b8);
  *(undefined4 *)(lVar2 + 0x10) = local_28[0];
  *(undefined4 *)(lVar2 + 0x14) = 0xfffffffc;
  *(byte *)(lVar2 + 0x18) = *(byte *)(lVar2 + 0x18) & 0xfe;
  plVar4 = (long *)thunk_FUN_10000e0ac();
  FUN_1003a985c(&local_38,plVar4);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))(plVar4,"Ability01");
  (**(code **)(*plVar4 + 0x18))(plVar4,"AttackToIdleCombat");
  plVar4 = (long *)thunk_FUN_10000e5dc();
  FUN_1003a985c(&local_38,plVar4);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x58))(plVar4,"Sound_Shin_Ability_A1");
  uVar3 = FUN_1010a1520();
  lVar2 = FUN_1010a0e0c(uVar3,0,"*KindredSoundBalance*",0);
  FUN_1003d1de4(*(undefined4 *)(lVar2 + 0x728));
  (**(code **)(*plVar4 + 0x28))(plVar4);
  lVar2 = FUN_10000ceb8();
  FUN_1003a985c(&local_38,lVar2);
  *(undefined4 *)(lVar2 + 0x2c) = 0x3dcccccd;
  *(undefined8 *)(lVar2 + 0x10) = 0;
  plVar4 = (long *)thunk_FUN_10000e358();
  FUN_1003a985c(&local_38,plVar4);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x58))(plVar4);
  (**(code **)(*plVar4 + 0x48))(plVar4,"Effect_Shin_A2_Cast");
  plVar4 = (long *)thunk_FUN_10000e5dc();
  FUN_1003a985c(&local_38,plVar4);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x58))(plVar4,"Sound_Shin_Ability_A1_Impact");
  uVar3 = FUN_1010a1520();
  lVar2 = FUN_1010a0e0c(uVar3,0,"*KindredSoundBalance*",0);
  FUN_1003d1de4(*(undefined4 *)(lVar2 + 0x72c));
  (**(code **)(*plVar4 + 0x28))(plVar4);
  plVar4 = (long *)thunk_FUN_10000e6f4();
  FUN_1003a985c(&local_38,plVar4);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))(plVar4,"ability1");
  plVar4 = (long *)(**(code **)(*plVar4 + 0x18))(0x3e4ccccd);
  (**(code **)(*plVar4 + 0x20))();
  lVar2 = FUN_1003e10f0();
  bVar1 = *(byte *)(lVar2 + 0xe5);
  lVar2 = FUN_10000ecbc();
  FUN_1003a985c(&local_38,lVar2);
  *(code **)(lVar2 + 0x70) = FUN_1003d1e48;
  *(code **)(lVar2 + 0x78) = FUN_1003d1e94;
  *(undefined4 *)(lVar2 + 0x88) = 0x40000000;
  *(undefined8 *)(lVar2 + 0x18) = 0;
  *(undefined1 *)(lVar2 + 0x20) = 1;
  *(undefined8 *)(lVar2 + 0x24) = 0;
  *(undefined8 *)(lVar2 + 0x34) = 0;
  *(undefined8 *)(lVar2 + 0x2c) = 0;
  *(undefined4 *)(lVar2 + 0x3c) = 0;
  *(undefined8 *)(lVar2 + 0x48) = 0xbf800000c0000000;
  *(undefined8 *)(lVar2 + 0x40) = 0xbf800000bf800000;
  *(undefined4 *)(lVar2 + 0x50) = 0x3f800000;
  *(undefined1 *)(lVar2 + 0x54) = 0xff;
  *(undefined8 *)(lVar2 + 0x60) = 0xffffffff00000000;
  *(undefined8 *)(lVar2 + 0x58) = 0xffffffff00040000;
  *(byte *)(lVar2 + 0x6a) = bVar1 | 0x14;
  *(undefined2 *)(lVar2 + 0x68) = 0x4120;
  lVar2 = FUN_10000ceb8();
  FUN_1003a985c(&local_38,lVar2);
  *(undefined4 *)(lVar2 + 0x2c) = 0x3e4ccccd;
  *(undefined8 *)(lVar2 + 0x10) = 0;
  plVar4 = (long *)FUN_10000cb8c();
  FUN_1003a985c(&local_38,plVar4);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))(plVar4);
  (**(code **)(*plVar4 + 0x38))(plVar4,"Damage",3);
  uVar3 = FUN_10000c784();
  FUN_1003a985c(&local_38,uVar3);
  lVar2 = FUN_10000d8b8();
  FUN_1003a985c(&local_38,lVar2);
  *(undefined1 *)(lVar2 + 0x10) = 0;
  return local_38;
}




undefined8 FUN_10039f6e8(void)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_30 = 0;
  uStack_28 = 0;
  lVar1 = FUN_10000ef8c();
  FUN_1003a985c(&local_30,lVar1);
  *(byte *)(lVar1 + 0x10) = *(byte *)(lVar1 + 0x10) & 0xe7 | 4;
  uVar2 = FUN_10000d8b8();
  FUN_1003a985c(&local_30,uVar2);
  plVar3 = (long *)thunk_FUN_10000e0ac();
  FUN_1003a985c(&local_30,plVar3);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x50))(plVar3,"Ability02");
  (**(code **)(*plVar3 + 0x18))(plVar3,"AttackToIdleCombat");
  plVar3 = (long *)thunk_FUN_10000e6f4();
  FUN_1003a985c(&local_30,plVar3);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x50))(plVar3,"ability2");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x18))(0x3dcccccd);
  (**(code **)(*plVar3 + 0x20))();
  lVar1 = FUN_10000ceb8();
  FUN_1003a985c(&local_30,lVar1);
  *(undefined4 *)(lVar1 + 0x2c) = 0x3f000000;
  *(undefined8 *)(lVar1 + 0x10) = 0;
  plVar3 = (long *)thunk_FUN_10000e5dc();
  FUN_1003a985c(&local_30,plVar3);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x58))(plVar3,"Sound_Shin_Ability_B_Cast");
  uVar2 = FUN_1010a1520();
  lVar1 = FUN_1010a0e0c(uVar2,0,"*KindredSoundBalance*",0);
  FUN_1003d1de4(*(undefined4 *)(lVar1 + 0x730));
  (**(code **)(*plVar3 + 0x28))(plVar3);
  lVar1 = FUN_10000f250();
  FUN_1003a985c(&local_30,lVar1);
  *(undefined4 *)(lVar1 + 0x10) = 0xe6;
  FUN_1003d266c(lVar1,"CenterBody");
  lVar1 = FUN_10000ceb8();
  FUN_1003a985c(&local_30,lVar1);
  *(undefined4 *)(lVar1 + 0x2c) = 0x3e4ccccd;
  *(undefined8 *)(lVar1 + 0x10) = 0;
  lVar1 = FUN_10000d8b8();
  FUN_1003a985c(&local_30,lVar1);
  *(undefined1 *)(lVar1 + 0x10) = 0;
  uVar2 = FUN_10000f034();
  FUN_1003a985c(&local_30,uVar2);
  return local_30;
}




undefined8 FUN_10039f8c8(void)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28 [2];
  
  local_38 = 0;
  uStack_30 = 0;
  lVar1 = FUN_10000ef8c();
  FUN_1003a985c(&local_38,lVar1);
  *(byte *)(lVar1 + 0x10) = *(byte *)(lVar1 + 0x10) & 0xe7 | 4;
  uVar2 = FUN_10000d8b8();
  FUN_1003a985c(&local_38,uVar2);
  lVar1 = FUN_10000dbb0();
  FUN_1003a985c(&local_38,lVar1);
  FUN_1003a4e5c(local_28,PTR_s_Buff_Shin_SetFlameMeter_10185b9b8);
  *(undefined4 *)(lVar1 + 0x10) = local_28[0];
  *(undefined4 *)(lVar1 + 0x14) = 0xfffffffc;
  *(byte *)(lVar1 + 0x18) = *(byte *)(lVar1 + 0x18) & 0xfe;
  plVar3 = (long *)thunk_FUN_10000e0ac();
  FUN_1003a985c(&local_38,plVar3);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x50))(plVar3,"Ability02");
  (**(code **)(*plVar3 + 0x18))(plVar3,"AttackToIdleCombat");
  plVar3 = (long *)thunk_FUN_10000e6f4();
  FUN_1003a985c(&local_38,plVar3);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x50))(plVar3,"ability2");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x18))(0x3dcccccd);
  (**(code **)(*plVar3 + 0x20))();
  lVar1 = FUN_10000ceb8();
  FUN_1003a985c(&local_38,lVar1);
  *(undefined4 *)(lVar1 + 0x2c) = 0x3e4ccccd;
  *(undefined8 *)(lVar1 + 0x10) = 0;
  plVar3 = (long *)thunk_FUN_10000e5dc();
  FUN_1003a985c(&local_38,plVar3);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x58))(plVar3,"Sound_Shin_Ability_B1_Cast");
  uVar2 = FUN_1010a1520();
  lVar1 = FUN_1010a0e0c(uVar2,0,"*KindredSoundBalance*",0);
  FUN_1003d1de4(*(undefined4 *)(lVar1 + 0x738));
  (**(code **)(*plVar3 + 0x28))(plVar3);
  lVar1 = FUN_10000f250();
  FUN_1003a985c(&local_38,lVar1);
  *(undefined4 *)(lVar1 + 0x10) = 0xe7;
  FUN_1003d266c(lVar1,"CenterBody");
  lVar1 = FUN_10000ceb8();
  FUN_1003a985c(&local_38,lVar1);
  *(undefined4 *)(lVar1 + 0x2c) = 0x3e4ccccd;
  *(undefined8 *)(lVar1 + 0x10) = 0;
  lVar1 = FUN_10000d8b8();
  FUN_1003a985c(&local_38,lVar1);
  *(undefined1 *)(lVar1 + 0x10) = 0;
  uVar2 = FUN_10000f034();
  FUN_1003a985c(&local_38,uVar2);
  return local_38;
}




undefined8 FUN_10039fae0(void)

{
  byte bVar1;
  bool bVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined2 local_b3;
  undefined1 local_b1;
  undefined8 local_90;
  undefined8 uStack_88;
  
  local_90 = 0;
  uStack_88 = 0;
  lVar3 = FUN_10000ef8c();
  FUN_1003a985c(&local_90,lVar3);
  *(byte *)(lVar3 + 0x10) = *(byte *)(lVar3 + 0x10) & 0xe7 | 4;
  uVar4 = FUN_10000d8b8();
  FUN_1003a985c(&local_90,uVar4);
  lVar3 = FUN_1003e10f0();
  bVar1 = *(byte *)(lVar3 + 0xe5);
  uVar6 = _cosf(0x3f490fdb);
  plVar5 = (long *)thunk_FUN_10000e0ac();
  FUN_1003a985c(&local_90,plVar5);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x50))(plVar5,"Ability03");
  (**(code **)(*plVar5 + 0x18))(plVar5,"AttackToIdleCombat");
  lVar3 = FUN_10000ceb8();
  FUN_1003a985c(&local_90,lVar3);
  *(undefined4 *)(lVar3 + 0x2c) = 0x3f000000;
  *(undefined8 *)(lVar3 + 0x10) = 0;
  plVar5 = (long *)thunk_FUN_10000e6f4();
  FUN_1003a985c(&local_90,plVar5);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x50))(plVar5,"ability3");
  plVar5 = (long *)(**(code **)(*plVar5 + 0x18))(0x3dcccccd);
  (**(code **)(*plVar5 + 0x20))();
  plVar5 = (long *)thunk_FUN_10000e5dc();
  FUN_1003a985c(&local_90,plVar5);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x58))(plVar5,"Sound_Shin_Ability_C_Cast");
  uVar4 = FUN_1010a1520();
  lVar3 = FUN_1010a0e0c(uVar4,0,"*KindredSoundBalance*",0);
  FUN_1003d1de4(*(undefined4 *)(lVar3 + 0x740));
  (**(code **)(*plVar5 + 0x28))(plVar5);
  plVar5 = (long *)thunk_FUN_10000e5dc();
  FUN_1003a985c(&local_90,plVar5);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x58))(plVar5,"Sound_Shin_Ability_C_Impact");
  uVar4 = FUN_1010a1520();
  lVar3 = FUN_1010a0e0c(uVar4,0,"*KindredSoundBalance*",0);
  FUN_1003d1de4(*(undefined4 *)(lVar3 + 0x740));
  (**(code **)(*plVar5 + 0x28))(plVar5);
  lVar3 = FUN_10000e1b4();
  FUN_1003a985c(&local_90,lVar3);
  *(undefined8 *)(lVar3 + 0x40) = 0;
  *(ushort *)(lVar3 + 0x80) = *(ushort *)(lVar3 + 0x80) & 0xffec | 2;
  *(uint *)(lVar3 + 0x3c) = (uint)lVar3 & 0xffff;
  *(undefined8 *)(lVar3 + 0x20) = 0;
  *(undefined8 *)(lVar3 + 0x28) = 0x3e4ccccd00000001;
  *(undefined4 *)(lVar3 + 0x10) = 0x7cfccbc8;
  lVar3 = FUN_10000ceb8();
  FUN_1003a985c(&local_90,lVar3);
  *(undefined4 *)(lVar3 + 0x2c) = 0x3e4ccccd;
  *(undefined8 *)(lVar3 + 0x10) = 0;
  lVar3 = FUN_10000ed74();
  FUN_1003a985c(&local_90,lVar3);
  *(undefined8 *)(lVar3 + 0x18) = 0;
  *(undefined1 *)(lVar3 + 0x20) = 1;
  *(undefined8 *)(lVar3 + 0x24) = 0;
  *(undefined8 *)(lVar3 + 0x34) = 0;
  *(undefined8 *)(lVar3 + 0x2c) = 0;
  *(undefined4 *)(lVar3 + 0x3c) = 0;
  uVar7 = NEON_fmov(0xbf800000,4);
  *(undefined8 *)(lVar3 + 0x40) = uVar7;
  *(undefined4 *)(lVar3 + 0x48) = uVar6;
  *(undefined8 *)(lVar3 + 0x4c) = 0x3ee66666bf800000;
  *(undefined1 *)(lVar3 + 0x54) = 0xff;
  *(undefined8 *)(lVar3 + 0x60) = 0xffffffff00000000;
  *(undefined8 *)(lVar3 + 0x58) = 0xffffffff00040000;
  bVar1 = bVar1 | 0x14;
  *(byte *)(lVar3 + 0x6a) = bVar1;
  *(undefined2 *)(lVar3 + 0x68) = 0x6120;
  bVar2 = DAT_101d23a38 != '\0';
  *(code **)(lVar3 + 0x78) = FUN_1003d1f78;
  *(byte *)(lVar3 + 0xa8) = *(byte *)(lVar3 + 0xa8) & 0xf0 | bVar2;
  uVar4 = FUN_10000cb8c();
  FUN_1003a985c(&local_90,uVar4);
  uVar4 = FUN_10000c784();
  FUN_1003a985c(&local_90,uVar4);
  lVar3 = FUN_10000e1b4();
  FUN_1003a985c(&local_90,lVar3);
  *(undefined8 *)(lVar3 + 0x40) = 0;
  *(ushort *)(lVar3 + 0x80) = *(ushort *)(lVar3 + 0x80) & 0xffec | 2;
  *(uint *)(lVar3 + 0x3c) = (uint)lVar3 & 0xffff;
  *(undefined8 *)(lVar3 + 0x20) = 0;
  *(undefined8 *)(lVar3 + 0x28) = 0x3e4ccccd00000001;
  *(undefined4 *)(lVar3 + 0x10) = 0x7cfccbc8;
  lVar3 = FUN_10000ceb8();
  FUN_1003a985c(&local_90,lVar3);
  *(undefined4 *)(lVar3 + 0x2c) = 0x3e4ccccd;
  *(undefined8 *)(lVar3 + 0x10) = 0;
  lVar3 = FUN_10000ed74();
  FUN_1003a985c(&local_90,lVar3);
  *(undefined8 *)(lVar3 + 0x18) = 0;
  *(undefined1 *)(lVar3 + 0x20) = 1;
  *(undefined8 *)(lVar3 + 0x24) = 0;
  *(undefined8 *)(lVar3 + 0x34) = 0;
  *(undefined8 *)(lVar3 + 0x2c) = 0;
  *(undefined4 *)(lVar3 + 0x3c) = 0;
  *(undefined8 *)(lVar3 + 0x40) = uVar7;
  *(undefined4 *)(lVar3 + 0x48) = uVar6;
  *(undefined8 *)(lVar3 + 0x4c) = 0x3ee66666bf800000;
  *(undefined1 *)(lVar3 + 0x54) = 0xff;
  *(undefined8 *)(lVar3 + 0x60) = 0xffffffff00000000;
  *(undefined8 *)(lVar3 + 0x58) = 0xffffffff00040000;
  *(byte *)(lVar3 + 0x6a) = bVar1;
  *(undefined2 *)(lVar3 + 0x68) = 0x6120;
  bVar2 = DAT_101d23a38 != '\0';
  *(code **)(lVar3 + 0x78) = FUN_1003d1f78;
  *(byte *)(lVar3 + 0xa8) = *(byte *)(lVar3 + 0xa8) & 0xf0 | bVar2;
  uVar4 = FUN_10000cb8c();
  FUN_1003a985c(&local_90,uVar4);
  uVar4 = FUN_10000c784();
  FUN_1003a985c(&local_90,uVar4);
  lVar3 = FUN_10000e1b4();
  FUN_1003a985c(&local_90,lVar3);
  *(undefined8 *)(lVar3 + 0x40) = 0;
  *(ushort *)(lVar3 + 0x80) = *(ushort *)(lVar3 + 0x80) & 0xffec | 2;
  *(uint *)(lVar3 + 0x3c) = (uint)lVar3 & 0xffff;
  *(undefined8 *)(lVar3 + 0x20) = 0;
  *(undefined8 *)(lVar3 + 0x28) = 0x3e4ccccd00000001;
  *(undefined4 *)(lVar3 + 0x10) = 0x7cfccbc8;
  lVar3 = FUN_10000ceb8();
  FUN_1003a985c(&local_90,lVar3);
  *(undefined4 *)(lVar3 + 0x2c) = 0x3e4ccccd;
  *(undefined8 *)(lVar3 + 0x10) = 0;
  lVar3 = FUN_10000ed74();
  FUN_1003a985c(&local_90,lVar3);
  *(undefined8 *)(lVar3 + 0x18) = 0;
  *(undefined1 *)(lVar3 + 0x20) = 1;
  *(undefined8 *)(lVar3 + 0x2c) = 0;
  *(undefined8 *)(lVar3 + 0x24) = 0;
  *(undefined8 *)(lVar3 + 0x38) = 0;
  *(undefined8 *)(lVar3 + 0x30) = 0;
  *(undefined8 *)(lVar3 + 0x40) = uVar7;
  *(undefined4 *)(lVar3 + 0x48) = uVar6;
  *(undefined8 *)(lVar3 + 0x4c) = 0x3ee66666bf800000;
  *(undefined1 *)(lVar3 + 0x54) = 0xff;
  *(undefined2 *)(lVar3 + 0x55) = local_b3;
  *(undefined1 *)(lVar3 + 0x57) = local_b1;
  *(undefined8 *)(lVar3 + 0x60) = 0xffffffff00000000;
  *(undefined8 *)(lVar3 + 0x58) = 0xffffffff00040000;
  *(byte *)(lVar3 + 0x6a) = bVar1;
  *(undefined2 *)(lVar3 + 0x68) = 0x6120;
  bVar2 = DAT_101d23a38 != '\0';
  *(code **)(lVar3 + 0x78) = FUN_1003d1f78;
  *(byte *)(lVar3 + 0xa8) = *(byte *)(lVar3 + 0xa8) & 0xf0 | bVar2;
  uVar4 = FUN_10000cb8c();
  FUN_1003a985c(&local_90,uVar4);
  uVar4 = FUN_10000c784();
  FUN_1003a985c(&local_90,uVar4);
  lVar3 = FUN_10000ceb8();
  FUN_1003a985c(&local_90,lVar3);
  *(undefined4 *)(lVar3 + 0x2c) = 0x3e4ccccd;
  *(undefined8 *)(lVar3 + 0x10) = 0;
  lVar3 = FUN_10000d8b8();
  FUN_1003a985c(&local_90,lVar3);
  *(undefined1 *)(lVar3 + 0x10) = 0;
  return local_90;
}

