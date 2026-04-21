// functions/10037 — 159 functions
#include "GameKindred.h"




undefined8 FUN_1003702c0(void)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  code *pcVar7;
  code *local_50;
  undefined4 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  local_40 = 0;
  uStack_38 = 0;
  uVar3 = FUN_10000bb2c();
  FUN_1003a985c(&local_40,uVar3);
  lVar4 = FUN_10000c540();
  FUN_1003a985c(&local_40,lVar4);
  *(undefined **)(lVar4 + 0x10) = PTR_s_Buff_Rona_Whirlwind_10185aff8;
  uVar3 = FUN_10000c784();
  FUN_1003a985c(&local_40,uVar3);
  uVar3 = FUN_10000d8b8();
  FUN_1003a985c(&local_40,uVar3);
  lVar4 = FUN_10000ef8c();
  FUN_1003a985c(&local_40,lVar4);
  *(byte *)(lVar4 + 0x10) = *(byte *)(lVar4 + 0x10) & 0xe7 | 4;
  lVar4 = FUN_10000dff8();
  FUN_1003a985c(&local_40,lVar4);
  *(undefined2 *)(lVar4 + 0x28) = 0x100;
  *(undefined8 *)(lVar4 + 0x30) = 0;
  uVar2 = FUN_1004d2524("Ability02");
  uVar2 = FUN_100015208("Ability02",uVar2,0x12345678);
  *(undefined4 *)(lVar4 + 0x10) = uVar2;
  uVar2 = FUN_1004d2524("AttackToIdleCombat");
  uVar2 = FUN_100015208("AttackToIdleCombat",uVar2,0x12345678);
  *(undefined4 *)(lVar4 + 0x20) = uVar2;
  plVar5 = (long *)FUN_10000cd5c();
  FUN_1003a985c(&local_40,plVar5);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x68))(0x3f800000,0x3e4ccccd,0x3fa66666,0x3f4ccccd,plVar5)
  ;
  local_50 = FUN_1003bcaac;
  local_48 = 3;
  plVar5 = (long *)(**(code **)(*plVar5 + 0xa8))(plVar5,&local_50);
  plVar5 = (long *)(**(code **)(*plVar5 + 0xb8))(0x41700000);
  (**(code **)(*plVar5 + 0xb0))(plVar5,1);
  cVar1 = DAT_101d23a38;
  lVar4 = FUN_10000ceb8();
  FUN_1003a985c(&local_40,lVar4);
  if (cVar1 == '\0') {
    *(code **)(lVar4 + 0x20) = FUN_1003bcad4;
    *(code **)(lVar4 + 0x10) = FUN_1003a24a0;
    lVar4 = FUN_10000e524();
    FUN_1003a985c(&local_40,lVar4);
    uVar3 = FUN_1010a1520();
    lVar6 = FUN_1010a0e0c(uVar3,0,"*KindredSoundBalance*",0);
    uVar2 = FUN_1003bc8d4(*(undefined4 *)(lVar6 + 0x1f0));
    *(char **)(lVar4 + 0x10) = "Sound_Rona_Ability_B_AxeSwing_Medium";
    *(undefined2 *)(lVar4 + 0x30) = 0x1ff;
    *(undefined4 *)(lVar4 + 0x34) = 1;
    *(undefined4 *)(lVar4 + 0x3c) = uVar2;
    *(undefined4 *)(lVar4 + 0x40) = 0xffffffff;
    *(byte *)(lVar4 + 0x38) = *(byte *)(lVar4 + 0x38) & 0xf8 | 4;
    *(undefined8 *)(lVar4 + 0x48) = 0;
    lVar4 = FUN_10000ceb8();
    FUN_1003a985c(&local_40,lVar4);
    pcVar7 = FUN_1003bcae8;
  }
  else {
    pcVar7 = FUN_1003bcac0;
  }
  *(code **)(lVar4 + 0x20) = pcVar7;
  *(code **)(lVar4 + 0x10) = FUN_1003a24a0;
  uVar3 = FUN_10000f9c0();
  FUN_1003a985c(&local_40,uVar3);
  lVar4 = FUN_10000e1b4();
  FUN_1003a985c(&local_40,lVar4);
  *(undefined8 *)(lVar4 + 0x40) = 0;
  *(ushort *)(lVar4 + 0x80) = *(ushort *)(lVar4 + 0x80) & 0xffec | 2;
  *(uint *)(lVar4 + 0x3c) = (uint)lVar4 & 0xffff;
  *(undefined8 *)(lVar4 + 0x20) = 0;
  *(undefined8 *)(lVar4 + 0x28) = 1;
  *(undefined4 *)(lVar4 + 0x10) = 0x3c272b1e;
  uVar3 = FUN_10000bc94();
  FUN_1003a985c(&local_40,uVar3);
  plVar5 = (long *)FUN_10000cb8c();
  FUN_1003a985c(&local_40,plVar5);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x50))(plVar5);
  (**(code **)(*plVar5 + 0x38))(plVar5,"Damage",1);
  uVar3 = FUN_10000c784();
  FUN_1003a985c(&local_40,uVar3);
  plVar5 = (long *)FUN_10000de28();
  FUN_1003a985c(&local_40,plVar5);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x50))(plVar5);
  local_50 = FUN_1003bcafc;
  local_48 = 3;
  (**(code **)(*plVar5 + 0x10))(plVar5,3,&local_50);
  plVar5 = (long *)FUN_10000bdf0();
  FUN_1003a985c(&local_40,plVar5);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x50))
                             (plVar5,PTR_s_Buff_Rona_SecondHitAvailable_10185b008);
  local_50 = FUN_1003bcb10;
  local_48 = 3;
  (**(code **)(*plVar5 + 0x18))(plVar5,&local_50);
  uVar3 = FUN_10000e7fc();
  FUN_1003a985c(&local_40,uVar3);
  lVar4 = FUN_10000ceb8();
  FUN_1003a985c(&local_40,lVar4);
  *(code **)(lVar4 + 0x20) = FUN_1003bcb24;
  *(undefined8 *)(lVar4 + 0x10) = 0;
  lVar4 = FUN_10000d8b8();
  FUN_1003a985c(&local_40,lVar4);
  *(undefined1 *)(lVar4 + 0x10) = 0;
  uVar3 = FUN_10000f034();
  FUN_1003a985c(&local_40,uVar3);
  return local_40;
}




undefined8 FUN_1003706d8(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_30 = 0;
  uStack_28 = 0;
  lVar1 = FUN_10000e8a4();
  FUN_1003a985c(&local_30,lVar1);
  *(undefined4 *)(lVar1 + 0x10) = 0x42480000;
  uVar2 = FUN_10000bb2c();
  FUN_1003a985c(&local_30,uVar2);
  lVar1 = FUN_10000c540();
  FUN_1003a985c(&local_30,lVar1);
  *(undefined **)(lVar1 + 0x10) = PTR_s_Buff_Rona_SecondHitAvailable_10185b008;
  lVar1 = FUN_10000bd3c();
  FUN_1003a985c(&local_30,lVar1);
  *(undefined **)(lVar1 + 0x10) = PTR_s_Buff_Rona_Whirlwind_10185aff8;
  *(undefined4 *)(lVar1 + 0x18) = 0xbf800000;
  *(undefined2 *)(lVar1 + 0x68) = 1;
  *(byte *)(lVar1 + 0x6a) = *(byte *)(lVar1 + 0x6a) & 0xfe;
  uVar2 = FUN_10000f034();
  FUN_1003a985c(&local_30,uVar2);
  return local_30;
}




undefined8 FUN_100370798(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_30 = 0;
  uStack_28 = 0;
  uVar1 = FUN_10000bb2c();
  FUN_1003a985c(&local_30,uVar1);
  lVar2 = FUN_10000c540();
  FUN_1003a985c(&local_30,lVar2);
  *(undefined **)(lVar2 + 0x10) = PTR_s_Buff_Rona_Whirlwind_10185aff8;
  uVar1 = FUN_10000c784();
  FUN_1003a985c(&local_30,uVar1);
  uVar1 = FUN_1003a2678(PTR_s_Buff_Rona_Withdraw_10185b000);
  FUN_1003a985c(&local_30,uVar1);
  return local_30;
}




undefined8 FUN_100370818(void)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  code *pcVar7;
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  local_40 = 0;
  uStack_38 = 0;
  uVar3 = FUN_10000d8b8();
  FUN_1003a985c(&local_40,uVar3);
  uVar3 = FUN_10000bb2c();
  FUN_1003a985c(&local_40,uVar3);
  lVar4 = FUN_10000c540();
  FUN_1003a985c(&local_40,lVar4);
  *(undefined **)(lVar4 + 0x10) = PTR_s_Buff_Rona_Whirlwind_10185aff8;
  uVar3 = FUN_10000c784();
  FUN_1003a985c(&local_40,uVar3);
  lVar4 = FUN_10000ef8c();
  FUN_1003a985c(&local_40,lVar4);
  *(byte *)(lVar4 + 0x10) = *(byte *)(lVar4 + 0x10) & 0xe7 | 4;
  lVar4 = FUN_10000dff8();
  FUN_1003a985c(&local_40,lVar4);
  *(undefined2 *)(lVar4 + 0x28) = 0x100;
  *(undefined8 *)(lVar4 + 0x30) = 0;
  uVar2 = FUN_1004d2524("Ability02_FollowUp");
  uVar2 = FUN_100015208("Ability02_FollowUp",uVar2,0x12345678);
  *(undefined4 *)(lVar4 + 0x10) = uVar2;
  uVar2 = FUN_1004d2524("AttackToIdleCombat");
  uVar2 = FUN_100015208("AttackToIdleCombat",uVar2,0x12345678);
  *(undefined4 *)(lVar4 + 0x20) = uVar2;
  cVar1 = DAT_101d23a38;
  lVar4 = FUN_10000ceb8();
  FUN_1003a985c(&local_40,lVar4);
  if (cVar1 == '\0') {
    *(code **)(lVar4 + 0x20) = FUN_1003bcad4;
    *(code **)(lVar4 + 0x10) = FUN_1003a24a0;
    lVar4 = FUN_10000e524();
    FUN_1003a985c(&local_40,lVar4);
    uVar3 = FUN_1010a1520();
    lVar5 = FUN_1010a0e0c(uVar3,0,"*KindredSoundBalance*",0);
    uVar2 = FUN_1003bc8d4(*(undefined4 *)(lVar5 + 0x1f0));
    *(char **)(lVar4 + 0x10) = "Sound_Rona_Ability_B_AxeSwing_Heavy";
    *(undefined2 *)(lVar4 + 0x30) = 0x1ff;
    *(undefined4 *)(lVar4 + 0x34) = 1;
    *(undefined4 *)(lVar4 + 0x3c) = uVar2;
    *(undefined4 *)(lVar4 + 0x40) = 0xffffffff;
    *(byte *)(lVar4 + 0x38) = *(byte *)(lVar4 + 0x38) & 0xf8 | 4;
    *(undefined8 *)(lVar4 + 0x48) = 0;
    lVar4 = FUN_10000ceb8();
    FUN_1003a985c(&local_40,lVar4);
    pcVar7 = FUN_1003bcae8;
  }
  else {
    pcVar7 = FUN_1003bcac0;
  }
  *(code **)(lVar4 + 0x20) = pcVar7;
  *(code **)(lVar4 + 0x10) = FUN_1003a24a0;
  lVar4 = FUN_10000e1b4();
  FUN_1003a985c(&local_40,lVar4);
  *(undefined8 *)(lVar4 + 0x40) = 0;
  *(ushort *)(lVar4 + 0x80) = *(ushort *)(lVar4 + 0x80) & 0xffec | 2;
  *(uint *)(lVar4 + 0x3c) = (uint)lVar4 & 0xffff;
  *(undefined8 *)(lVar4 + 0x20) = 0;
  *(undefined8 *)(lVar4 + 0x28) = 1;
  *(undefined4 *)(lVar4 + 0x10) = 0x3b27298b;
  uVar3 = FUN_10000bc94();
  FUN_1003a985c(&local_40,uVar3);
  lVar4 = FUN_10000cae4();
  FUN_1003a985c(&local_40,lVar4);
  *(code **)(lVar4 + 0x10) = FUN_1003bcb38;
  lVar4 = FUN_10000cae4();
  FUN_1003a985c(&local_40,lVar4);
  *(code **)(lVar4 + 0x10) = FUN_1003bcc0c;
  lVar4 = FUN_10000bd3c();
  FUN_1003a985c(&local_40,lVar4);
  *(undefined8 *)(lVar4 + 0x10) = DAT_10185a468;
  *(code **)(lVar4 + 0x28) = FUN_1003bcce8;
  *(undefined2 *)(lVar4 + 0x68) = 1;
  *(byte *)(lVar4 + 0x6a) = *(byte *)(lVar4 + 0x6a) & 0xfe;
  uVar3 = FUN_10000c784();
  FUN_1003a985c(&local_40,uVar3);
  uVar3 = FUN_10000bb2c();
  FUN_1003a985c(&local_40,uVar3);
  lVar4 = FUN_10000c540();
  FUN_1003a985c(&local_40,lVar4);
  *(undefined **)(lVar4 + 0x10) = PTR_s_Buff_Rona_SecondHitAvailable_10185b008;
  uVar3 = FUN_10000c784();
  FUN_1003a985c(&local_40,uVar3);
  plVar6 = (long *)FUN_10000de28();
  FUN_1003a985c(&local_40,plVar6);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x50))(plVar6);
  local_50 = (code *)((ulong)local_50._4_4_ << 0x20);
  local_48 = 1;
  (**(code **)(*plVar6 + 0x20))(plVar6,3,&local_50);
  plVar6 = (long *)FUN_10000bdf0();
  FUN_1003a985c(&local_40,plVar6);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x50))
                             (plVar6,PTR_s_Buff_Rona_AttackFasterAfterSecon_10185b010);
  local_50 = FUN_1003bcd40;
  local_48 = 3;
  (**(code **)(*plVar6 + 0x18))(plVar6,&local_50);
  uVar3 = FUN_10000e7fc();
  FUN_1003a985c(&local_40,uVar3);
  lVar4 = FUN_10000ceb8();
  FUN_1003a985c(&local_40,lVar4);
  *(code **)(lVar4 + 0x20) = FUN_1003bcb24;
  *(undefined8 *)(lVar4 + 0x10) = 0;
  lVar4 = FUN_10000d8b8();
  FUN_1003a985c(&local_40,lVar4);
  *(undefined1 *)(lVar4 + 0x10) = 0;
  uVar3 = FUN_10000f034();
  FUN_1003a985c(&local_40,uVar3);
  return local_40;
}




undefined8 FUN_100370c14(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_30 = 0;
  uStack_28 = 0;
  uVar1 = FUN_10000bb2c();
  FUN_1003a985c(&local_30,uVar1);
  lVar2 = FUN_10000c540();
  FUN_1003a985c(&local_30,lVar2);
  *(undefined **)(lVar2 + 0x10) = PTR_s_Buff_Rona_Whirlwind_10185aff8;
  uVar1 = FUN_10000f034();
  FUN_1003a985c(&local_30,uVar1);
  return local_30;
}




void FUN_100370c7c(void)

{
  FUN_1003a49b0("Attack",10,0);
  return;
}




void FUN_100370c90(void)

{
  FUN_1003a49b0("AltAttack",10,0);
  return;
}




void FUN_100370ca4(void)

{
  FUN_1003a49b0("CritAttack",0xb,"Effect_Baron_CritAttack_MuzzleFlash");
  return;
}




undefined8 FUN_100370cbc(void)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
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
  lVar2 = FUN_10000dff8();
  FUN_1003a985c(&local_60,lVar2);
  *(undefined2 *)(lVar2 + 0x28) = 0x100;
  *(undefined8 *)(lVar2 + 0x30) = 0;
  uVar1 = FUN_1004d2524("QuickAttack");
  uVar1 = FUN_100015208("QuickAttack",uVar1,0x12345678);
  *(undefined4 *)(lVar2 + 0x10) = uVar1;
  uVar1 = FUN_1004d2524("AttackToIdleCombat");
  uVar1 = FUN_100015208("AttackToIdleCombat",uVar1,0x12345678);
  *(undefined4 *)(lVar2 + 0x20) = uVar1;
  uVar3 = FUN_10000bb2c();
  FUN_1003a985c(&local_60,uVar3);
  lVar2 = FUN_10000c540();
  FUN_1003a985c(&local_60,lVar2);
  *(undefined **)(lVar2 + 0x10) = PTR_s_Buff_Baron_B_QuickAttackAvailabl_10185a428;
  uVar3 = FUN_10000c784();
  FUN_1003a985c(&local_60,uVar3);
  lVar2 = FUN_10000e524();
  FUN_1003a985c(&local_60,lVar2);
  uVar3 = FUN_1010a1520();
  lVar4 = FUN_1010a0e0c(uVar3,0,"*KindredSoundBalance*",0);
  uVar1 = FUN_1003a4c78(*(undefined4 *)(lVar4 + 0x33c));
  *(char **)(lVar2 + 0x10) = "Sound_Baron_Ability_B_QuickAttack";
  *(undefined2 *)(lVar2 + 0x30) = 0x1ff;
  *(undefined4 *)(lVar2 + 0x34) = 1;
  *(undefined4 *)(lVar2 + 0x3c) = uVar1;
  *(undefined4 *)(lVar2 + 0x40) = 0xffffffff;
  *(byte *)(lVar2 + 0x38) = *(byte *)(lVar2 + 0x38) & 0xf8 | 4;
  *(undefined8 *)(lVar2 + 0x48) = 0;
  lVar2 = FUN_10000ceb8();
  FUN_1003a985c(&local_60,lVar2);
  *(undefined4 *)(lVar2 + 0x2c) = 0x3dcccccd;
  *(undefined8 *)(lVar2 + 0x10) = 0;
  lVar2 = FUN_10000f250();
  FUN_1003a985c(&local_60,lVar2);
  *(undefined4 *)(lVar2 + 0x10) = 0xc;
  FUN_1003d266c(lVar2,"RocketLauncher_QuickAttack");
  uVar3 = FUN_10000e1b4();
  FUN_1003a985c(&local_60,uVar3);
  FUN_1003a4cdc(0x3f800000,uVar3,"Effect_Baron_CritAttack_MuzzleFlash",0,
                "RocketLauncher_QuickAttack",0,1,0,0);
  uVar3 = FUN_10000bb2c();
  FUN_1003a985c(&local_60,uVar3);
  plVar5 = (long *)FUN_10000dc58();
  FUN_1003a985c(&local_60,plVar5);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x50))(plVar5,PTR_s_Ability__Baron__B_1018593d0);
  local_70 = FUN_1003a48d8;
  local_68 = 3;
  (**(code **)(*plVar5 + 0x28))(plVar5,&local_70);
  uVar3 = FUN_10000c784();
  FUN_1003a985c(&local_60,uVar3);
  lVar2 = FUN_10000ceb8();
  FUN_1003a985c(&local_60,lVar2);
  *(undefined4 *)(lVar2 + 0x2c) = 0x3e4ccccd;
  *(undefined8 *)(lVar2 + 0x10) = 0;
  lVar2 = FUN_10000f250();
  FUN_1003a985c(&local_60,lVar2);
  *(undefined4 *)(lVar2 + 0x10) = 0xc;
  FUN_1003d266c(lVar2,"RocketLauncher_QuickAttack");
  uVar3 = FUN_10000e1b4();
  FUN_1003a985c(&local_60,uVar3);
  FUN_1003a4cdc(0x3f800000,uVar3,"Effect_Baron_CritAttack_MuzzleFlash",0,
                "RocketLauncher_QuickAttack",0,1,0,0);
  uVar3 = FUN_10000bb2c();
  FUN_1003a985c(&local_60,uVar3);
  plVar5 = (long *)FUN_10000dc58();
  FUN_1003a985c(&local_60,plVar5);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x50))(plVar5,PTR_s_Ability__Baron__B_1018593d0);
  local_70 = FUN_1003a48d8;
  local_68 = 3;
  (**(code **)(*plVar5 + 0x28))(plVar5,&local_70);
  uVar3 = FUN_10000c784();
  FUN_1003a985c(&local_60,uVar3);
  lVar2 = FUN_10000c8e8();
  FUN_1003a985c(&local_60,lVar2);
  lVar4 = FUN_10049ab34(lVar2 + 0x10);
  *(undefined **)(lVar4 + 8) = PTR_s_Buff_Baron_Talent_TurboJets_10185a430;
  lVar2 = lVar2 + 0xb0;
  lVar4 = FUN_10000ceb8();
  FUN_1003a985c(lVar2,lVar4);
  *(undefined4 *)(lVar4 + 0x2c) = 0x3e4ccccd;
  *(undefined8 *)(lVar4 + 0x10) = 0;
  lVar4 = FUN_10000f250();
  FUN_1003a985c(lVar2,lVar4);
  *(undefined4 *)(lVar4 + 0x10) = 0xc;
  FUN_1003d266c(lVar4,"RocketLauncher_QuickAttack");
  uVar3 = FUN_10000e1b4();
  FUN_1003a985c(lVar2,uVar3);
  FUN_1003a4cdc(0x3f800000,uVar3,"Effect_Baron_CritAttack_MuzzleFlash",0,
                "RocketLauncher_QuickAttack",0,1,0,0);
  lVar2 = FUN_10000e1b4();
  FUN_1003a985c(&local_60,lVar2);
  *(undefined8 *)(lVar2 + 0x20) = 0;
  *(undefined8 *)(lVar2 + 0x28) = 0x3f40000000000003;
  *(undefined8 *)(lVar2 + 0x40) = 0;
  *(ushort *)(lVar2 + 0x80) = *(ushort *)(lVar2 + 0x80) & 0xffef | 3;
  *(uint *)(lVar2 + 0x3c) = (uint)lVar2 & 0xffff;
  *(undefined4 *)(lVar2 + 0x10) = 0xab435b9f;
  *(char **)(lVar2 + 0x18) = "Bone_Weapon";
  lVar2 = FUN_10000d8b8();
  FUN_1003a985c(&local_60,lVar2);
  *(undefined1 *)(lVar2 + 0x10) = 0;
  return local_60;
}




undefined8 FUN_100371158(void)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  undefined8 local_60;
  undefined8 uStack_58;
  
  local_60 = 0;
  uStack_58 = 0;
  lVar2 = FUN_10000d8b8();
  FUN_1003a985c(&local_60,lVar2);
  *(undefined1 *)(lVar2 + 0x10) = 1;
  uVar3 = FUN_10000ef8c();
  FUN_1003a985c(&local_60,uVar3);
  lVar2 = FUN_10000dff8();
  FUN_1003a985c(&local_60,lVar2);
  *(undefined2 *)(lVar2 + 0x28) = 0;
  *(undefined8 *)(lVar2 + 0x30) = 0;
  *(code **)(lVar2 + 0x18) = FUN_1003a4db4;
  uVar1 = FUN_1004d2524("AttackToIdle");
  uVar1 = FUN_100015208("AttackToIdle",uVar1,0x12345678);
  *(undefined4 *)(lVar2 + 0x20) = uVar1;
  lVar2 = FUN_10000e524();
  FUN_1003a985c(&local_60,lVar2);
  uVar3 = FUN_1010a1520();
  lVar4 = FUN_1010a0e0c(uVar3,0,"*KindredSoundBalance*",0);
  uVar1 = FUN_1003a4c78(*(undefined4 *)(lVar4 + 0x32c));
  *(char **)(lVar2 + 0x10) = "Sound_Baron_Ability_A_Fire";
  *(undefined2 *)(lVar2 + 0x30) = 0x1ff;
  *(undefined4 *)(lVar2 + 0x34) = 1;
  *(undefined4 *)(lVar2 + 0x3c) = uVar1;
  *(undefined4 *)(lVar2 + 0x40) = 0xffffffff;
  *(byte *)(lVar2 + 0x38) = *(byte *)(lVar2 + 0x38) & 0xf8 | 4;
  *(undefined8 *)(lVar2 + 0x48) = 0;
  lVar2 = FUN_10000ceb8();
  FUN_1003a985c(&local_60,lVar2);
  *(code **)(lVar2 + 0x20) = FUN_1003a5124;
  *(undefined8 *)(lVar2 + 0x10) = 0;
  lVar2 = FUN_10000f250();
  FUN_1003a985c(&local_60,lVar2);
  *(code **)(lVar2 + 0x18) = FUN_1003a4ea8;
  lVar2 = FUN_10000c8e8();
  FUN_1003a985c(&local_60,lVar2);
  lVar4 = FUN_10049ab34(lVar2 + 0x10);
  *(undefined **)(lVar4 + 8) = PTR_s_Buff_Baron_Talent_EndlessMortars_10185a440;
  plVar5 = (long *)FUN_10000f300();
  FUN_1003a985c(lVar2 + 0xb0,plVar5);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x50))(plVar5,"*Baron_A_Warning_Talent*",0);
  (**(code **)(*plVar5 + 0x20))(plVar5,FUN_10048fb04);
  plVar5 = (long *)FUN_10000f300();
  FUN_1003a985c(lVar2 + 200,plVar5);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x50))(plVar5,"*Baron_A_Warning*",0);
  (**(code **)(*plVar5 + 0x20))(plVar5,FUN_10048fb04);
  lVar2 = FUN_10000e524();
  FUN_1003a985c(&local_60,lVar2);
  uVar3 = FUN_1010a1520();
  lVar4 = FUN_1010a0e0c(uVar3,0,"*KindredSoundBalance*",0);
  uVar1 = FUN_1003a4c78(*(undefined4 *)(lVar4 + 0x330));
  *(char **)(lVar2 + 0x10) = "Sound_Baron_Ability_A_Whistle";
  *(undefined2 *)(lVar2 + 0x30) = 0x1ff;
  *(undefined4 *)(lVar2 + 0x34) = 1;
  *(undefined4 *)(lVar2 + 0x3c) = uVar1;
  *(undefined4 *)(lVar2 + 0x40) = 0xffffffff;
  *(byte *)(lVar2 + 0x38) = *(byte *)(lVar2 + 0x38) & 0xf8 | 4;
  *(undefined8 *)(lVar2 + 0x48) = 0;
  lVar2 = FUN_10000ceb8();
  FUN_1003a985c(&local_60,lVar2);
  *(code **)(lVar2 + 0x20) = FUN_1003a5138;
  *(undefined8 *)(lVar2 + 0x10) = 0;
  lVar2 = FUN_10000d8b8();
  FUN_1003a985c(&local_60,lVar2);
  *(undefined1 *)(lVar2 + 0x10) = 0;
  uVar3 = FUN_10000f034();
  FUN_1003a985c(&local_60,uVar3);
  return local_60;
}




undefined8 FUN_10037142c(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  code *local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  local_50 = 0;
  uStack_48 = 0;
  uVar2 = FUN_10000bb2c();
  FUN_1003a985c(&local_50,uVar2);
  lVar3 = FUN_10000bd3c();
  FUN_1003a985c(&local_50,lVar3);
  *(undefined **)(lVar3 + 0x10) = PTR_s_Buff_Baron_B_Charging_10185a420;
  *(code **)(lVar3 + 0x28) = FUN_1003a514c;
  *(undefined2 *)(lVar3 + 0x68) = 1;
  *(byte *)(lVar3 + 0x6a) = *(byte *)(lVar3 + 0x6a) & 0xfe | 4;
  uVar2 = FUN_10000c784();
  FUN_1003a985c(&local_50,uVar2);
  lVar3 = FUN_10000ceb8();
  FUN_1003a985c(&local_50,lVar3);
  *(code **)(lVar3 + 0x18) = FUN_1003a514c;
  uVar2 = FUN_10000d8b8();
  FUN_1003a985c(&local_50,uVar2);
  uVar2 = FUN_10000ef8c();
  FUN_1003a985c(&local_50,uVar2);
  lVar3 = FUN_10000dff8();
  FUN_1003a985c(&local_50,lVar3);
  *(undefined2 *)(lVar3 + 0x28) = 0x100;
  *(undefined8 *)(lVar3 + 0x30) = 0;
  uVar1 = FUN_1004d2524("Ability02");
  uVar1 = FUN_100015208("Ability02",uVar1,0x12345678);
  *(undefined4 *)(lVar3 + 0x10) = uVar1;
  *(undefined4 *)(lVar3 + 0x20) = 0;
  *(undefined1 *)(lVar3 + 0x2a) = 1;
  uVar2 = FUN_10000e1b4();
  FUN_1003a985c(&local_50,uVar2);
  FUN_1003a4cdc(0x3e800000,uVar2,"Effect_Baron_B_Jump",1,"CenterBody",0,1,0,0);
  lVar3 = FUN_10000e1b4();
  FUN_1003a985c(&local_50,lVar3);
  *(undefined8 *)(lVar3 + 0x20) = 0;
  *(undefined8 *)(lVar3 + 0x28) = 0x3e80000000000003;
  *(undefined8 *)(lVar3 + 0x40) = 0;
  *(ushort *)(lVar3 + 0x80) = *(ushort *)(lVar3 + 0x80) & 0xffef | 3;
  *(uint *)(lVar3 + 0x3c) = (uint)lVar3 & 0xffff;
  *(undefined4 *)(lVar3 + 0x10) = 0x23e98a98;
  *(char **)(lVar3 + 0x18) = "Bone_LeftJet";
  lVar3 = FUN_10000e1b4();
  FUN_1003a985c(&local_50,lVar3);
  *(undefined8 *)(lVar3 + 0x20) = 0;
  *(undefined8 *)(lVar3 + 0x28) = 0x3e80000000000003;
  *(undefined8 *)(lVar3 + 0x40) = 0;
  *(ushort *)(lVar3 + 0x80) = *(ushort *)(lVar3 + 0x80) & 0xffef | 3;
  *(uint *)(lVar3 + 0x3c) = (uint)lVar3 & 0xffff;
  *(undefined4 *)(lVar3 + 0x10) = 0x39422849;
  *(char **)(lVar3 + 0x18) = "Bone_RightJet";
  lVar3 = FUN_10000e524();
  FUN_1003a985c(&local_50,lVar3);
  uVar2 = FUN_1010a1520();
  lVar4 = FUN_1010a0e0c(uVar2,0,"*KindredSoundBalance*",0);
  uVar1 = FUN_1003a4c78(*(undefined4 *)(lVar4 + 0x338));
  *(char **)(lVar3 + 0x10) = "Sound_Baron_Ability_B_TakeOff";
  *(undefined2 *)(lVar3 + 0x30) = 0x1ff;
  *(undefined4 *)(lVar3 + 0x34) = 1;
  *(undefined4 *)(lVar3 + 0x3c) = uVar1;
  *(undefined4 *)(lVar3 + 0x40) = 0xffffffff;
  *(byte *)(lVar3 + 0x38) = *(byte *)(lVar3 + 0x38) & 0xf8 | 4;
  *(undefined8 *)(lVar3 + 0x48) = 0;
  lVar3 = FUN_10000ceb8();
  FUN_1003a985c(&local_50,lVar3);
  *(code **)(lVar3 + 0x20) = FUN_1003a53dc;
  *(undefined8 *)(lVar3 + 0x10) = 0;
  uVar2 = FUN_10000bb2c();
  FUN_1003a985c(&local_50,uVar2);
  lVar3 = FUN_10000bd3c();
  FUN_1003a985c(&local_50,lVar3);
  *(undefined **)(lVar3 + 0x10) = PTR_s_Buff_Revealed_10185a448;
  *(code **)(lVar3 + 0x28) = FUN_1003a5284;
  *(undefined2 *)(lVar3 + 0x68) = 1;
  *(byte *)(lVar3 + 0x6a) = *(byte *)(lVar3 + 0x6a) & 0xfe;
  uVar2 = FUN_10000c784();
  FUN_1003a985c(&local_50,uVar2);
  plVar5 = (long *)FUN_10000cd5c();
  FUN_1003a985c(&local_50,plVar5);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x90))(plVar5);
  local_60 = FUN_1003a5304;
  local_58 = 3;
  plVar5 = (long *)(**(code **)(*plVar5 + 0xa0))(plVar5,&local_60);
  (**(code **)(*plVar5 + 0xb0))(plVar5,1);
  uVar2 = FUN_10000bb2c();
  FUN_1003a985c(&local_50,uVar2);
  lVar3 = FUN_10000c0a8();
  FUN_1003a985c(&local_50,lVar3);
  *(code **)(lVar3 + 0x10) = FUN_1003a538c;
  *(undefined2 *)(lVar3 + 0x18) = 0;
  lVar3 = FUN_10000bd3c();
  FUN_1003a985c(&local_50,lVar3);
  *(undefined **)(lVar3 + 0x10) = PTR_s_Buff_Baron_B_OverdriveBlock_10185a450;
  *(code **)(lVar3 + 0x28) = FUN_1003a5318;
  *(undefined2 *)(lVar3 + 0x68) = 1;
  *(byte *)(lVar3 + 0x6a) = *(byte *)(lVar3 + 0x6a) & 0xfe;
  *(code **)(lVar3 + 0x60) = FUN_1003a53f0;
  uVar2 = FUN_10000c784();
  FUN_1003a985c(&local_50,uVar2);
  lVar3 = FUN_10000ceb8();
  FUN_1003a985c(&local_50,lVar3);
  *(code **)(lVar3 + 0x18) = FUN_1003a5284;
  uVar2 = FUN_10000f9c0();
  FUN_1003a985c(&local_50,uVar2);
  lVar3 = FUN_10000dff8();
  FUN_1003a985c(&local_50,lVar3);
  *(undefined2 *)(lVar3 + 0x28) = 0;
  *(undefined8 *)(lVar3 + 0x30) = 0;
  uVar1 = FUN_1004d2524("Ability02_Landing");
  uVar1 = FUN_100015208("Ability02_Landing",uVar1,0x12345678);
  *(undefined4 *)(lVar3 + 0x10) = uVar1;
  uVar1 = FUN_1004d2524("AttackToIdle");
  uVar1 = FUN_100015208("AttackToIdle",uVar1,0x12345678);
  *(undefined4 *)(lVar3 + 0x20) = uVar1;
  *(undefined1 *)(lVar3 + 0x2a) = 1;
  lVar3 = FUN_10000e1b4();
  FUN_1003a985c(&local_50,lVar3);
  *(undefined8 *)(lVar3 + 0x40) = 0;
  *(ushort *)(lVar3 + 0x80) = *(ushort *)(lVar3 + 0x80) & 0xffec | 2;
  *(uint *)(lVar3 + 0x3c) = (uint)lVar3 & 0xffff;
  *(undefined8 *)(lVar3 + 0x20) = 0;
  *(undefined8 *)(lVar3 + 0x28) = 0x3f80000000000001;
  *(undefined4 *)(lVar3 + 0x10) = 0xb80a7fb2;
  lVar3 = FUN_10000e524();
  FUN_1003a985c(&local_50,lVar3);
  uVar2 = FUN_1010a1520();
  lVar4 = FUN_1010a0e0c(uVar2,0,"*KindredSoundBalance*",0);
  uVar1 = FUN_1003a4c78(*(undefined4 *)(lVar4 + 0x338));
  *(char **)(lVar3 + 0x10) = "Sound_Baron_Ability_B_Land";
  *(undefined2 *)(lVar3 + 0x30) = 0x1ff;
  *(undefined4 *)(lVar3 + 0x34) = 1;
  *(undefined4 *)(lVar3 + 0x3c) = uVar1;
  *(undefined4 *)(lVar3 + 0x40) = 0xffffffff;
  *(byte *)(lVar3 + 0x38) = *(byte *)(lVar3 + 0x38) & 0xf8 | 4;
  *(undefined8 *)(lVar3 + 0x48) = 0;
  lVar3 = FUN_10000e7fc();
  FUN_1003a985c(&local_50,lVar3);
  *(undefined4 *)(lVar3 + 0x10) = 0;
  uVar2 = FUN_10000bb2c();
  FUN_1003a985c(&local_50,uVar2);
  lVar3 = FUN_10000bd3c();
  FUN_1003a985c(&local_50,lVar3);
  *(undefined **)(lVar3 + 0x10) = PTR_s_Buff_Baron_B_QuickAttackAvailabl_10185a428;
  *(code **)(lVar3 + 0x30) = FUN_1003a5424;
  *(undefined2 *)(lVar3 + 0x68) = 1;
  *(byte *)(lVar3 + 0x6a) = *(byte *)(lVar3 + 0x6a) & 0xfe;
  uVar2 = FUN_10000c784();
  FUN_1003a985c(&local_50,uVar2);
  lVar3 = FUN_10000d8b8();
  FUN_1003a985c(&local_50,lVar3);
  *(undefined1 *)(lVar3 + 0x10) = 0;
  return local_50;
}




undefined8 FUN_1003719e4(void)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined4 uVar5;
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_30 = 0;
  uStack_28 = 0;
  plVar1 = (long *)FUN_10000f300();
  FUN_1003a985c(&local_30,plVar1);
  plVar1 = (long *)(**(code **)(*plVar1 + 0x50))(plVar1,"*Baron_C_Warning*",0);
  (**(code **)(*plVar1 + 0x20))(plVar1,FUN_10048fb04);
  uVar2 = FUN_10000e1b4();
  FUN_1003a985c(&local_30,uVar2);
  FUN_1003a4cdc(0x3e800000,uVar2,"Effect_Baron_C_Cast",1,"CenterBody",0,1,0,0);
  lVar3 = FUN_10000e524();
  FUN_1003a985c(&local_30,lVar3);
  uVar2 = FUN_1010a1520();
  lVar4 = FUN_1010a0e0c(uVar2,0,"*KindredSoundBalance*",0);
  uVar5 = FUN_1003a4c78(*(undefined4 *)(lVar4 + 0x344));
  *(char **)(lVar3 + 0x10) = "Sound_Baron_Ability_C_Targeting";
  *(undefined2 *)(lVar3 + 0x30) = 0x1ff;
  *(undefined4 *)(lVar3 + 0x34) = 0;
  *(undefined4 *)(lVar3 + 0x3c) = uVar5;
  *(undefined4 *)(lVar3 + 0x40) = 0xffffffff;
  *(byte *)(lVar3 + 0x38) = *(byte *)(lVar3 + 0x38) & 0xf8 | 4;
  *(undefined8 *)(lVar3 + 0x48) = 0;
  uVar2 = FUN_10000f034();
  FUN_1003a985c(&local_30,uVar2);
  return local_30;
}




undefined8 FUN_100371b10(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_30 = 0;
  uStack_28 = 0;
  lVar1 = FUN_10000e94c();
  FUN_1003a985c(&local_30,lVar1);
  *(code **)(lVar1 + 0x10) = FUN_1003a5438;
  uVar2 = FUN_10000c6d4();
  FUN_1003a985c(&local_30,uVar2);
  uVar2 = FUN_10000bb2c();
  FUN_1003a985c(&local_30,uVar2);
  lVar1 = FUN_10000bd3c();
  FUN_1003a985c(&local_30,lVar1);
  *(undefined **)(lVar1 + 0x10) = PTR_s_Buff_Withdraw_10185a458;
  *(undefined4 *)(lVar1 + 0x18) = 0x40800000;
  *(undefined2 *)(lVar1 + 0x68) = 1;
  *(byte *)(lVar1 + 0x6a) = *(byte *)(lVar1 + 0x6a) & 0xfe;
  uVar2 = FUN_10000c784();
  FUN_1003a985c(&local_30,uVar2);
  return local_30;
}




void FUN_100371bc4(void)

{
  FUN_1003be36c("Attack","LeftGun",0x6c);
  return;
}




void FUN_100371bdc(void)

{
  FUN_1003be36c("AltAttack","RightGun",0x6c);
  return;
}




void FUN_100371bf4(void)

{
  FUN_1003be36c("Attack","LeftGun",0x6d);
  return;
}




void FUN_100371c0c(void)

{
  FUN_1003be36c("AttackRight","LeftGun",0x6c);
  return;
}




void FUN_100371c24(void)

{
  FUN_1003be36c("AttackLeft","RightGun",0x6c);
  return;
}




void FUN_100371c3c(void)

{
  FUN_1003be36c("AttackRight","LeftGun",0x6d);
  return;
}




void FUN_100371c54(void)

{
  FUN_1003be36c("AttackLeft","RightGun",0x6d);
  return;
}




undefined8 FUN_100371c6c(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_30 = 0;
  uStack_28 = 0;
  uVar1 = FUN_10000bb2c();
  FUN_1003a985c(&local_30,uVar1);
  lVar2 = FUN_10000bd3c();
  FUN_1003a985c(&local_30,lVar2);
  *(undefined **)(lVar2 + 0x10) = PTR_s_Buff_Skye_Barrage_10185b0c8;
  *(code **)(lVar2 + 0x28) = FUN_1003be6c0;
  *(undefined2 *)(lVar2 + 0x68) = 1;
  *(byte *)(lVar2 + 0x6a) = *(byte *)(lVar2 + 0x6a) & 0xfe;
  *(code **)(lVar2 + 0x40) = FUN_1003be788;
  uVar1 = FUN_10000c784();
  FUN_1003a985c(&local_30,uVar1);
  uVar1 = FUN_10000f034();
  FUN_1003a985c(&local_30,uVar1);
  return local_30;
}




undefined8 FUN_100371d10(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_30 = 0;
  uStack_28 = 0;
  uVar1 = FUN_10000bb2c();
  FUN_1003a985c(&local_30,uVar1);
  lVar2 = FUN_10000c540();
  FUN_1003a985c(&local_30,lVar2);
  *(undefined **)(lVar2 + 0x10) = PTR_s_Buff_Skye_Barrage_10185b0c8;
  uVar1 = FUN_10000c784();
  FUN_1003a985c(&local_30,uVar1);
  uVar1 = FUN_10000f034();
  FUN_1003a985c(&local_30,uVar1);
  return local_30;
}




undefined8 FUN_100371d88(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  undefined4 uVar5;
  code *local_50;
  undefined4 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  local_40 = 0;
  uStack_38 = 0;
  lVar1 = FUN_10000e94c();
  FUN_1003a985c(&local_40,lVar1);
  *(code **)(lVar1 + 0x10) = FUN_1003be744;
  lVar1 = FUN_10000c3b0();
  FUN_1003a985c(&local_40,lVar1);
  *(code **)(lVar1 + 0x10) = FUN_1003be7e8;
  lVar1 = FUN_10000bd3c();
  FUN_1003a985c(&local_40,lVar1);
  *(undefined **)(lVar1 + 0x10) = PTR_s_Buff_Skye_LockedOn_Target_10185b0d8;
  *(code **)(lVar1 + 0x30) = FUN_1003bf0c4;
  *(undefined2 *)(lVar1 + 0x68) = 1;
  *(byte *)(lVar1 + 0x6a) = *(byte *)(lVar1 + 0x6a) & 0xfe;
  uVar2 = FUN_10000c784();
  FUN_1003a985c(&local_40,uVar2);
  uVar2 = FUN_10000bb2c();
  FUN_1003a985c(&local_40,uVar2);
  lVar1 = FUN_10000c540();
  FUN_1003a985c(&local_40,lVar1);
  *(undefined **)(lVar1 + 0x10) = PTR_s_Buff_Skye_CircleStrafing_10185b0e0;
  lVar1 = FUN_10000c540();
  FUN_1003a985c(&local_40,lVar1);
  *(undefined **)(lVar1 + 0x10) = PTR_s_Buff_Skye_Barrage_10185b0c8;
  lVar1 = FUN_10000bd3c();
  FUN_1003a985c(&local_40,lVar1);
  *(undefined **)(lVar1 + 0x10) = PTR_s_Buff_Skye_Firing_B_Missiles_10185b0e8;
  *(undefined4 *)(lVar1 + 0x18) = 0x3f1c28f6;
  *(undefined2 *)(lVar1 + 0x68) = 1;
  *(byte *)(lVar1 + 0x6a) = *(byte *)(lVar1 + 0x6a) & 0xfe;
  *(code **)(lVar1 + 0x40) = FUN_1003bee74;
  *(code **)(lVar1 + 0x48) = FUN_1003beee8;
  lVar1 = FUN_10000e524();
  FUN_1003a985c(&local_40,lVar1);
  uVar2 = FUN_1010a1520();
  lVar3 = FUN_1010a0e0c(uVar2,0,"*KindredSoundBalance*",0);
  uVar5 = FUN_1003be59c(*(undefined4 *)(lVar3 + 0x210));
  *(undefined2 *)(lVar1 + 0x30) = 0x3ff;
  *(undefined4 *)(lVar1 + 0x40) = 0xffffffff;
  *(undefined4 *)(lVar1 + 0x34) = 1;
  *(undefined4 *)(lVar1 + 0x3c) = uVar5;
  *(byte *)(lVar1 + 0x38) = *(byte *)(lVar1 + 0x38) & 0xf8 | 4;
  *(undefined8 *)(lVar1 + 0x48) = 0;
  *(char **)(lVar1 + 0x10) = "Sound_Skye_Ability_B_Jet_Dash_1";
  *(char **)(lVar1 + 0x18) = "Sound_Skye_Ability_B_Jet_Dash_2";
  *(char **)(lVar1 + 0x20) = "Sound_Skye_Ability_B_Jet_Dash_3";
  lVar1 = FUN_10000c3b0();
  FUN_1003a985c(&local_40,lVar1);
  *(code **)(lVar1 + 0x10) = FUN_1003beb84;
  uVar2 = FUN_10000c784();
  FUN_1003a985c(&local_40,uVar2);
  uVar2 = FUN_10000d8b8();
  FUN_1003a985c(&local_40,uVar2);
  lVar1 = FUN_10000e1b4();
  FUN_1003a985c(&local_40,lVar1);
  *(undefined8 *)(lVar1 + 0x40) = 0;
  *(ushort *)(lVar1 + 0x80) = *(ushort *)(lVar1 + 0x80) & 0xffec | 2;
  *(uint *)(lVar1 + 0x3c) = (uint)lVar1 & 0xffff;
  *(undefined8 *)(lVar1 + 0x20) = 0;
  *(undefined8 *)(lVar1 + 0x28) = 1;
  *(undefined4 *)(lVar1 + 0x10) = 0xe1c7fde2;
  plVar4 = (long *)FUN_10000cd5c();
  FUN_1003a985c(&local_40,plVar4);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))(plVar4,FUN_1003be844);
  local_50 = FUN_1003beb70;
  local_48 = 3;
  plVar4 = (long *)(**(code **)(*plVar4 + 0xa0))(plVar4,&local_50);
  (**(code **)(*plVar4 + 0xb0))(plVar4,1);
  lVar1 = FUN_10000ceb8();
  FUN_1003a985c(&local_40,lVar1);
  *(code **)(lVar1 + 0x18) = FUN_1003bea90;
  uVar2 = FUN_10000f9c0();
  FUN_1003a985c(&local_40,uVar2);
  uVar2 = FUN_10000bb2c();
  FUN_1003a985c(&local_40,uVar2);
  lVar1 = FUN_10000c540();
  FUN_1003a985c(&local_40,lVar1);
  *(undefined **)(lVar1 + 0x10) = PTR_s_Buff_Skye_Executing_B_Dash_10185b0d0;
  uVar2 = FUN_10000c784();
  FUN_1003a985c(&local_40,uVar2);
  uVar2 = FUN_10000c6d4();
  FUN_1003a985c(&local_40,uVar2);
  uVar2 = FUN_10000bb2c();
  FUN_1003a985c(&local_40,uVar2);
  lVar1 = FUN_10000bd3c();
  FUN_1003a985c(&local_40,lVar1);
  *(undefined **)(lVar1 + 0x10) = PTR_s_Buff_Skye_CircleStrafing_10185b0e0;
  *(code **)(lVar1 + 0x30) = FUN_1003bf130;
  *(undefined2 *)(lVar1 + 0x68) = 1;
  *(byte *)(lVar1 + 0x6a) = *(byte *)(lVar1 + 0x6a) & 0xfe;
  plVar4 = (long *)FUN_10000dc58();
  FUN_1003a985c(&local_40,plVar4);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))(plVar4,PTR_s_Ability__Skye__A_101859420);
  local_50 = FUN_1003bef7c;
  local_48 = 4;
  (**(code **)(*plVar4 + 0x20))(plVar4,&local_50);
  lVar1 = FUN_10000c8e8();
  FUN_1003a985c(&local_40,lVar1);
  lVar3 = FUN_10049ab34(lVar1 + 0x10);
  *(undefined **)(lVar3 + 8) = PTR_s_Buff_Skye_Talent_EnhancedThruste_10185b0f0;
  lVar3 = FUN_10000bd3c();
  FUN_1003a985c(lVar1 + 0xb0,lVar3);
  *(undefined **)(lVar3 + 0x10) = PTR_s_Buff_Skye_EnhancedThrustersSpeed_10185b0f8;
  *(code **)(lVar3 + 0x30) = FUN_1003bf144;
  *(undefined2 *)(lVar3 + 0x68) = 1;
  *(byte *)(lVar3 + 0x6a) = *(byte *)(lVar3 + 0x6a) & 0xfe;
  uVar2 = FUN_10000c784();
  FUN_1003a985c(&local_40,uVar2);
  lVar1 = FUN_10000d8b8();
  FUN_1003a985c(&local_40,lVar1);
  *(undefined1 *)(lVar1 + 0x10) = 0;
  uVar2 = FUN_10000f034();
  FUN_1003a985c(&local_40,uVar2);
  return local_40;
}




undefined8 FUN_100372204(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  undefined4 uVar5;
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_30 = 0;
  uStack_28 = 0;
  lVar1 = FUN_10000e94c();
  FUN_1003a985c(&local_30,lVar1);
  *(code **)(lVar1 + 0x10) = FUN_1003be744;
  lVar1 = FUN_10000e1b4();
  FUN_1003a985c(&local_30,lVar1);
  *(undefined8 *)(lVar1 + 0x40) = 0;
  *(ushort *)(lVar1 + 0x80) = *(ushort *)(lVar1 + 0x80) & 0xffef | 3;
  *(uint *)(lVar1 + 0x3c) = (uint)lVar1 & 0xffff;
  *(undefined8 *)(lVar1 + 0x20) = 0;
  *(undefined8 *)(lVar1 + 0x28) = 0x3f80000000000001;
  *(undefined4 *)(lVar1 + 0x10) = 0xe4246793;
  lVar1 = FUN_10000e524();
  FUN_1003a985c(&local_30,lVar1);
  uVar2 = FUN_1010a1520();
  lVar3 = FUN_1010a0e0c(uVar2,0,"*KindredSoundBalance*",0);
  uVar5 = FUN_1003be59c(*(undefined4 *)(lVar3 + 0x214));
  *(undefined2 *)(lVar1 + 0x30) = 0x4ff;
  *(undefined4 *)(lVar1 + 0x34) = 1;
  *(undefined4 *)(lVar1 + 0x40) = 0xffffffff;
  *(undefined4 *)(lVar1 + 0x3c) = uVar5;
  *(byte *)(lVar1 + 0x38) = *(byte *)(lVar1 + 0x38) & 0xf8 | 4;
  *(undefined8 *)(lVar1 + 0x48) = 0;
  *(char **)(lVar1 + 0x10) = "Sound_Skye_Ability_C_Launch_1";
  *(char **)(lVar1 + 0x18) = "Sound_Skye_Ability_C_Launch_2";
  *(char **)(lVar1 + 0x20) = "Sound_Skye_Ability_C_Launch_3";
  *(char **)(lVar1 + 0x28) = "Sound_Skye_Ability_C_Launch_4";
  plVar4 = (long *)FUN_10000f300();
  FUN_1003a985c(&local_30,plVar4);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))(plVar4,"Uses actor name callback",0);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x20))(plVar4,FUN_1003bf228);
  (**(code **)(*plVar4 + 0x30))(plVar4,FUN_1003bf33c);
  uVar2 = FUN_10000f034();
  FUN_1003a985c(&local_30,uVar2);
  return local_30;
}




undefined8 FUN_100372388(void)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_30 = 0;
  uStack_28 = 0;
  lVar2 = FUN_10000dff8();
  FUN_1003a985c(&local_30,lVar2);
  *(undefined2 *)(lVar2 + 0x28) = 0x100;
  *(undefined8 *)(lVar2 + 0x30) = 0;
  uVar1 = FUN_1004d2524("Die");
  uVar1 = FUN_100015208("Die",uVar1,0x12345678);
  *(undefined4 *)(lVar2 + 0x10) = uVar1;
  *(undefined4 *)(lVar2 + 0x20) = 0;
  lVar2 = FUN_10000e1b4();
  FUN_1003a985c(&local_30,lVar2);
  *(undefined8 *)(lVar2 + 0x40) = 0;
  *(ushort *)(lVar2 + 0x80) = *(ushort *)(lVar2 + 0x80) & 0xffef | 3;
  *(uint *)(lVar2 + 0x3c) = (uint)lVar2 & 0xffff;
  *(undefined8 *)(lVar2 + 0x20) = 0;
  *(undefined8 *)(lVar2 + 0x28) = 1;
  *(undefined4 *)(lVar2 + 0x10) = 0x3f676029;
  lVar2 = FUN_10000e1b4();
  FUN_1003a985c(&local_30,lVar2);
  *(undefined8 *)(lVar2 + 0x40) = 0;
  *(ushort *)(lVar2 + 0x80) = *(ushort *)(lVar2 + 0x80) & 0xffef | 3;
  *(uint *)(lVar2 + 0x3c) = (uint)lVar2 & 0xffff;
  *(undefined8 *)(lVar2 + 0x20) = 0;
  *(undefined8 *)(lVar2 + 0x28) = 1;
  *(undefined4 *)(lVar2 + 0x10) = 0x72f09bf4;
  lVar2 = FUN_10000ceb8();
  FUN_1003a985c(&local_30,lVar2);
  *(undefined4 *)(lVar2 + 0x2c) = 0x3fee147b;
  *(undefined8 *)(lVar2 + 0x10) = 0;
  uVar3 = FUN_10000d9a0();
  FUN_1003a985c(&local_30,uVar3);
  return local_30;
}




undefined8 FUN_1003724b4(void)

{
  undefined8 uVar1;
  undefined8 local_20;
  undefined8 uStack_18;
  
  local_20 = 0;
  uStack_18 = 0;
  uVar1 = FUN_1003a2678(PTR_s_Buff_Skye_Withdraw_10185b100);
  FUN_1003a985c(&local_20,uVar1);
  return local_20;
}




void FUN_1003724ec(void)

{
  FUN_1003a76a8("Attack","Effect_Phinn_AA",&PTR_s_Sound_Ardan_GutPunch_2_10185a5d8,1,
                &PTR_s_Sound_Rona_Impact_1_10185a5e0,4,FUN_1003a3a5c);
  return;
}




void FUN_100372520(void)

{
  FUN_1003a76a8("AltAttack","Effect_Phinn_AA_Alt",&PTR_s_Sound_Phinn_Grunt_001_01_10185a600,4,
                &PTR_s_Sound_Rona_Impact_1_10185a620,4,FUN_1003a3a5c);
  return;
}




void FUN_100372554(void)

{
  FUN_1003a76a8("CritAttack","Effect_Phinn_AA_Crit",&PTR_s_Sound_Ardan_GutPunch_1_10185a640,1,
                &PTR_s_Sound_Rona_Impact_1_10185a648,4,FUN_1003a3acc);
  return;
}




undefined8 FUN_100372588(void)

{
  byte bVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  undefined4 local_70 [2];
  undefined4 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  local_60 = 0;
  uStack_58 = 0;
  uVar3 = FUN_10000d8b8();
  FUN_1003a985c(&local_60,uVar3);
  lVar4 = FUN_10000ef8c();
  FUN_1003a985c(&local_60,lVar4);
  *(byte *)(lVar4 + 0x10) = *(byte *)(lVar4 + 0x10) & 0xe7 | 4;
  plVar5 = (long *)thunk_FUN_10000e358();
  FUN_1003a985c(&local_60,plVar5);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x68))(plVar5,"Bone_Mouth");
  plVar5 = (long *)(**(code **)(*plVar5 + 0x48))(plVar5,"Effect_Phinn_A_Charging");
  local_70[0] = 0x3f4ccccd;
  local_68 = 1;
  plVar5 = (long *)(**(code **)(*plVar5 + 0x60))(plVar5,local_70);
  plVar5 = (long *)(**(code **)(*plVar5 + 0xb0))(plVar5,1);
  (**(code **)(*plVar5 + 0x78))(plVar5,1);
  lVar4 = FUN_10000dff8();
  FUN_1003a985c(&local_60,lVar4);
  *(undefined2 *)(lVar4 + 0x28) = 0x100;
  *(undefined8 *)(lVar4 + 0x30) = 0;
  uVar2 = FUN_1004d2524("Ability01");
  uVar2 = FUN_100015208("Ability01",uVar2,0x12345678);
  *(undefined4 *)(lVar4 + 0x10) = uVar2;
  uVar2 = FUN_1004d2524("AttackToIdleCombat");
  uVar2 = FUN_100015208("AttackToIdleCombat",uVar2,0x12345678);
  *(undefined4 *)(lVar4 + 0x20) = uVar2;
  plVar5 = (long *)thunk_FUN_10000e358();
  FUN_1003a985c(&local_60,plVar5);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x60))(plVar5,"A_Warning");
  plVar5 = (long *)(**(code **)(*plVar5 + 0x48))(plVar5,"Effect_Phinn_A_Warning_Enemy");
  plVar5 = (long *)(**(code **)(*plVar5 + 0x50))(plVar5,"Effect_Phinn_A_Warning_Ally");
  plVar5 = (long *)(**(code **)(*plVar5 + 0x78))(plVar5,1);
  (**(code **)(*plVar5 + 0xb0))(plVar5,1);
  lVar4 = FUN_10000e524();
  FUN_1003a985c(&local_60,lVar4);
  uVar3 = FUN_1010a1520();
  lVar6 = FUN_1010a0e0c(uVar3,0,"*KindredSoundBalance*",0);
  uVar2 = FUN_1003a798c(*(undefined4 *)(lVar6 + 0x228));
  *(char **)(lVar4 + 0x10) = "Sound_Phinn_Ability_A_Start";
  *(undefined2 *)(lVar4 + 0x30) = 0x1ff;
  *(undefined4 *)(lVar4 + 0x34) = 1;
  *(undefined4 *)(lVar4 + 0x3c) = uVar2;
  *(undefined4 *)(lVar4 + 0x40) = 0xffffffff;
  *(byte *)(lVar4 + 0x38) = *(byte *)(lVar4 + 0x38) & 0xf8 | 4;
  *(undefined8 *)(lVar4 + 0x48) = 0;
  uVar3 = FUN_10000f034();
  FUN_1003a985c(&local_60,uVar3);
  lVar4 = FUN_10000ceb8();
  FUN_1003a985c(&local_60,lVar4);
  *(code **)(lVar4 + 0x20) = FUN_1003a79f0;
  *(undefined8 *)(lVar4 + 0x10) = 0;
  lVar4 = FUN_1003e10f0();
  bVar1 = *(byte *)(lVar4 + 0xe5);
  plVar5 = (long *)thunk_FUN_10000e358();
  FUN_1003a985c(&local_60,plVar5);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x60))(plVar5,"A_Warning");
  plVar5 = (long *)(**(code **)(*plVar5 + 0x48))(plVar5,"Effect_Phinn_AnchorSmash");
  (**(code **)(*plVar5 + 0x78))(plVar5,1);
  lVar4 = FUN_10000e524();
  FUN_1003a985c(&local_60,lVar4);
  uVar3 = FUN_1010a1520();
  lVar6 = FUN_1010a0e0c(uVar3,0,"*KindredSoundBalance*",0);
  uVar2 = FUN_1003a798c(*(undefined4 *)(lVar6 + 0x228));
  *(undefined2 *)(lVar4 + 0x30) = 0x2ff;
  *(undefined4 *)(lVar4 + 0x34) = 1;
  *(undefined4 *)(lVar4 + 0x3c) = uVar2;
  *(undefined4 *)(lVar4 + 0x40) = 0xffffffff;
  *(byte *)(lVar4 + 0x38) = *(byte *)(lVar4 + 0x38) & 0xf8 | 4;
  *(undefined8 *)(lVar4 + 0x48) = 0;
  *(char **)(lVar4 + 0x10) = "Sound_Phinn_Ability_A_Slow";
  *(char **)(lVar4 + 0x18) = "Sound_Phinn_Ability_A_Stun";
  lVar4 = FUN_10000ed74();
  FUN_1003a985c(&local_60,lVar4);
  *(undefined8 *)(lVar4 + 0x18) = 0;
  *(undefined1 *)(lVar4 + 0x20) = 1;
  *(undefined8 *)(lVar4 + 0x24) = 0;
  *(undefined8 *)(lVar4 + 0x34) = 0;
  *(undefined8 *)(lVar4 + 0x2c) = 0;
  *(undefined4 *)(lVar4 + 0x3c) = 0;
  *(undefined8 *)(lVar4 + 0x48) = 0xbf800000c0000000;
  *(undefined8 *)(lVar4 + 0x40) = 0xbf800000bf800000;
  *(undefined4 *)(lVar4 + 0x50) = 0x3f800000;
  *(undefined1 *)(lVar4 + 0x54) = 0xff;
  *(undefined8 *)(lVar4 + 0x60) = 0xffffffff00000000;
  *(undefined8 *)(lVar4 + 0x58) = 0xffffffff00040000;
  *(byte *)(lVar4 + 0x6a) = bVar1 | 0x14;
  *(undefined2 *)(lVar4 + 0x68) = 0x4120;
  *(undefined4 *)(lVar4 + 0xa4) = 0x40400000;
  *(byte *)(lVar4 + 0xa8) = *(byte *)(lVar4 + 0xa8) & 0xf0 | 1;
  *(char **)(lVar4 + 0x98) = "A_Warning";
  plVar5 = (long *)thunk_FUN_10000f1a0();
  FUN_1003a985c(&local_60,plVar5);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x60))(plVar5);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x10))(0x3f19999a);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x18))(0x3f000000);
  (**(code **)(*plVar5 + 0x20))(0x41700000);
  uVar3 = FUN_10000cb8c();
  FUN_1003a985c(&local_60,uVar3);
  lVar4 = FUN_10000bd3c();
  FUN_1003a985c(&local_60,lVar4);
  *(undefined **)(lVar4 + 0x10) = PTR_s_Buff_Phinn_GroundSlamSlow_10185a668;
  *(code **)(lVar4 + 0x30) = FUN_1003a7a04;
  *(undefined2 *)(lVar4 + 0x68) = 1;
  *(byte *)(lVar4 + 0x6a) = *(byte *)(lVar4 + 0x6a) & 0xfe;
  *(code **)(lVar4 + 0x60) = FUN_1003a7a18;
  lVar4 = FUN_10000bd3c();
  FUN_1003a985c(&local_60,lVar4);
  *(undefined **)(lVar4 + 0x10) = PTR_s_Buff_Stunned_10185a208;
  *(code **)(lVar4 + 0x30) = FUN_1003a7a04;
  *(undefined2 *)(lVar4 + 0x68) = 1;
  *(byte *)(lVar4 + 0x6a) = *(byte *)(lVar4 + 0x6a) & 0xfe;
  *(code **)(lVar4 + 0x60) = FUN_1003a53f0;
  uVar3 = FUN_10000c784();
  FUN_1003a985c(&local_60,uVar3);
  uVar3 = FUN_10000f034();
  FUN_1003a985c(&local_60,uVar3);
  lVar4 = FUN_10000e524();
  FUN_1003a985c(&local_60,lVar4);
  uVar3 = FUN_1010a1520();
  lVar6 = FUN_1010a0e0c(uVar3,0,"*KindredSoundBalance*",0);
  uVar2 = FUN_1003a798c(*(undefined4 *)(lVar6 + 0x228));
  *(char **)(lVar4 + 0x10) = "Sound_Phinn_Ability_A_AnchorPull";
  *(undefined2 *)(lVar4 + 0x30) = 0x1ff;
  *(undefined4 *)(lVar4 + 0x34) = 1;
  *(undefined4 *)(lVar4 + 0x3c) = uVar2;
  *(undefined4 *)(lVar4 + 0x40) = 0xffffffff;
  *(byte *)(lVar4 + 0x38) = *(byte *)(lVar4 + 0x38) & 0xf8 | 4;
  *(undefined8 *)(lVar4 + 0x48) = 0;
  lVar4 = FUN_10000ceb8();
  FUN_1003a985c(&local_60,lVar4);
  *(code **)(lVar4 + 0x20) = FUN_1003a7a4c;
  *(undefined8 *)(lVar4 + 0x10) = 0;
  lVar4 = FUN_10000d8b8();
  FUN_1003a985c(&local_60,lVar4);
  *(undefined1 *)(lVar4 + 0x10) = 0;
  return local_60;
}




undefined8 FUN_100372afc(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  undefined4 local_70 [2];
  undefined4 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  puVar1 = PTR_s_Buff_Phinn_Talent_Phaster_10185a680;
  local_60 = 0;
  uStack_58 = 0;
  lVar3 = FUN_10000c838();
  FUN_1003a985c(&local_60,lVar3);
  *(undefined8 *)(lVar3 + 0x48) = 0;
  *(undefined8 *)(lVar3 + 0x50) = 0;
  *(undefined1 *)(lVar3 + 0x50) = 2;
  *(undefined **)(lVar3 + 0x40) = puVar1;
  *(ushort *)(lVar3 + 0x58) = *(ushort *)(lVar3 + 0x58) & 0xf000 | 0x20;
  lVar4 = FUN_10000d8b8();
  FUN_1003a985c(&local_60,lVar4);
  *(undefined1 *)(lVar4 + 0x10) = 1;
  lVar4 = FUN_10000dff8();
  FUN_1003a985c(&local_60,lVar4);
  *(undefined2 *)(lVar4 + 0x28) = 0;
  *(undefined8 *)(lVar4 + 0x30) = 0;
  uVar2 = FUN_1004d2524("Ability02");
  uVar2 = FUN_100015208("Ability02",uVar2,0x12345678);
  *(undefined4 *)(lVar4 + 0x10) = uVar2;
  uVar2 = FUN_1004d2524("AttackToIdleCombat");
  uVar2 = FUN_100015208("AttackToIdleCombat",uVar2,0x12345678);
  *(undefined4 *)(lVar4 + 0x20) = uVar2;
  plVar5 = (long *)thunk_FUN_10000e358();
  FUN_1003a985c(&local_60,plVar5);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x58))(plVar5);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x48))(plVar5,"Effect_Phinn_B_Charging");
  local_70[0] = 0;
  local_68 = 1;
  plVar5 = (long *)(**(code **)(*plVar5 + 0x60))(plVar5,local_70);
  (**(code **)(*plVar5 + 0xb0))(plVar5,1);
  lVar4 = FUN_10000e524();
  FUN_1003a985c(&local_60,lVar4);
  uVar6 = FUN_1010a1520();
  lVar7 = FUN_1010a0e0c(uVar6,0,"*KindredSoundBalance*",0);
  uVar2 = FUN_1003a798c(*(undefined4 *)(lVar7 + 0x22c));
  *(undefined2 *)(lVar4 + 0x30) = 0x3ff;
  *(undefined4 *)(lVar4 + 0x34) = 1;
  *(undefined4 *)(lVar4 + 0x3c) = uVar2;
  *(undefined4 *)(lVar4 + 0x40) = 0xffffffff;
  *(byte *)(lVar4 + 0x38) = *(byte *)(lVar4 + 0x38) & 0xf8 | 4;
  *(undefined8 *)(lVar4 + 0x48) = 0;
  *(char **)(lVar4 + 0x10) = "Sound_Phinn_Grunt_004_01";
  *(char **)(lVar4 + 0x18) = "Sound_Phinn_Grunt_005_02";
  *(char **)(lVar4 + 0x20) = "Sound_Phinn_Grunt_005_03";
  lVar4 = FUN_10000ceb8();
  FUN_1003a985c(&local_60,lVar4);
  *(code **)(lVar4 + 0x18) = FUN_1003a7a60;
  uVar6 = FUN_1010a1520();
  lVar4 = FUN_1010a0e0c(uVar6,0,"*KindredSoundBalance*",0);
  uVar2 = FUN_1003a798c(*(undefined4 *)(lVar4 + 0x22c));
  lVar4 = FUN_10000e524();
  FUN_1003a985c(&local_60,lVar4);
  *(char **)(lVar4 + 0x10) = "Sound_Phinn_Ability_B";
  *(undefined2 *)(lVar4 + 0x30) = 0x1ff;
  *(undefined4 *)(lVar4 + 0x34) = 1;
  *(undefined4 *)(lVar4 + 0x3c) = uVar2;
  *(undefined4 *)(lVar4 + 0x40) = 0xffffffff;
  *(byte *)(lVar4 + 0x38) = *(byte *)(lVar4 + 0x38) & 0xf8 | 4;
  *(undefined8 *)(lVar4 + 0x48) = 0;
  lVar4 = FUN_10000ceb8();
  FUN_1003a985c(&local_60,lVar4);
  *(undefined4 *)(lVar4 + 0x2c) = 0x3e4ccccd;
  *(undefined8 *)(lVar4 + 0x10) = 0;
  plVar5 = (long *)thunk_FUN_10000e358();
  FUN_1003a985c(&local_60,plVar5);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x58))(plVar5);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x48))(plVar5,"Effect_Phinn_B");
  (**(code **)(*plVar5 + 0x78))(plVar5,0);
  FUN_1003a8304(&local_60,FUN_1003a83c8);
  uVar6 = FUN_10000bb2c();
  FUN_1003a985c(&local_60,uVar6);
  lVar3 = FUN_1003a83dc(&local_60,lVar3);
  puVar1 = PTR_s_Buff_Phinn_Talent_Phaster_AllyBu_10185a688;
  lVar4 = FUN_10000bd3c();
  FUN_1003a985c(lVar3 + 0x18,lVar4);
  *(undefined **)(lVar4 + 0x10) = puVar1;
  *(code **)(lVar4 + 0x30) = FUN_1003a8450;
  *(undefined2 *)(lVar4 + 0x68) = 1;
  *(byte *)(lVar4 + 0x6a) = *(byte *)(lVar4 + 0x6a) & 0xfe;
  puVar1 = PTR_s_Buff_Phinn_PoliteCompany_Fortifi_10185a690;
  lVar3 = FUN_10000bd3c();
  FUN_1003a985c(&local_60,lVar3);
  *(undefined **)(lVar3 + 0x10) = puVar1;
  *(code **)(lVar3 + 0x30) = FUN_1003a8450;
  *(undefined2 *)(lVar3 + 0x68) = 1;
  *(byte *)(lVar3 + 0x6a) = *(byte *)(lVar3 + 0x6a) & 0xfe;
  uVar6 = FUN_10000c784();
  FUN_1003a985c(&local_60,uVar6);
  FUN_1003a8464(&local_60,FUN_1003a83c8);
  plVar5 = (long *)thunk_FUN_10000f1a0();
  FUN_1003a985c(&local_60,plVar5);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x60))(plVar5);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x10))(0x3e99999a);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x18))(0x3f4ccccd);
  (**(code **)(*plVar5 + 0x20))(0x41200000);
  uVar6 = FUN_10000cb8c();
  FUN_1003a985c(&local_60,uVar6);
  lVar3 = FUN_10000c3b0();
  FUN_1003a985c(&local_60,lVar3);
  *(code **)(lVar3 + 0x10) = FUN_1003a7ac4;
  uVar6 = FUN_10000c784();
  FUN_1003a985c(&local_60,uVar6);
  lVar3 = FUN_10000d8b8();
  FUN_1003a985c(&local_60,lVar3);
  *(undefined1 *)(lVar3 + 0x10) = 0;
  puVar1 = PTR_s_Buff_Phinn_Talent_FriendlyCavil_10185a698;
  lVar3 = FUN_10000c838();
  FUN_1003a985c(&local_60,lVar3);
  *(undefined8 *)(lVar3 + 0x48) = 0;
  *(undefined8 *)(lVar3 + 0x50) = 0;
  *(undefined1 *)(lVar3 + 0x50) = 2;
  *(undefined **)(lVar3 + 0x40) = puVar1;
  *(ushort *)(lVar3 + 0x58) = *(ushort *)(lVar3 + 0x58) & 0xf000 | 0x20;
  plVar5 = (long *)FUN_10000dc58();
  FUN_1003a985c(lVar3 + 0x18,plVar5);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x50))(plVar5,PTR_s_Ability__Phinn__A_101859468);
  local_70[0] = 0;
  local_68 = 1;
  (**(code **)(*plVar5 + 0x20))(plVar5,local_70);
  return local_60;
}




undefined8 FUN_100372fcc(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined4 uVar4;
  undefined8 local_50;
  undefined8 uStack_48;
  
  local_50 = 0;
  uStack_48 = 0;
  uVar1 = FUN_10000d8b8();
  FUN_1003a985c(&local_50,uVar1);
  uVar1 = FUN_10000ef8c();
  FUN_1003a985c(&local_50,uVar1);
  uVar1 = FUN_10000bb2c();
  FUN_1003a985c(&local_50,uVar1);
  lVar2 = FUN_10000bd3c();
  FUN_1003a985c(&local_50,lVar2);
  *(undefined **)(lVar2 + 0x10) = PTR_s_Buff_GloballyVisible_10185a1f0;
  *(code **)(lVar2 + 0x30) = FUN_1003a858c;
  *(undefined2 *)(lVar2 + 0x68) = 1;
  *(byte *)(lVar2 + 0x6a) = *(byte *)(lVar2 + 0x6a) & 0xfe;
  uVar1 = FUN_10000c784();
  FUN_1003a985c(&local_50,uVar1);
  lVar2 = FUN_10000e524();
  FUN_1003a985c(&local_50,lVar2);
  uVar1 = FUN_1010a1520();
  lVar3 = FUN_1010a0e0c(uVar1,0,"*KindredSoundBalance*",0);
  uVar4 = FUN_1003a798c(*(undefined4 *)(lVar3 + 0x230));
  *(char **)(lVar2 + 0x10) = "Sound_Phinn_Ability_C_Start";
  *(undefined2 *)(lVar2 + 0x30) = 0x1ff;
  *(undefined4 *)(lVar2 + 0x34) = 1;
  *(undefined4 *)(lVar2 + 0x3c) = uVar4;
  *(undefined4 *)(lVar2 + 0x40) = 0xffffffff;
  *(byte *)(lVar2 + 0x38) = *(byte *)(lVar2 + 0x38) & 0xf8 | 4;
  *(undefined8 *)(lVar2 + 0x48) = 0;
  lVar2 = FUN_10000dff8();
  FUN_1003a985c(&local_50,lVar2);
  *(undefined2 *)(lVar2 + 0x28) = 0x100;
  *(undefined8 *)(lVar2 + 0x30) = 0;
  uVar4 = FUN_1004d2524("Ability03");
  uVar4 = FUN_100015208("Ability03",uVar4,0x12345678);
  *(undefined4 *)(lVar2 + 0x10) = uVar4;
  uVar4 = FUN_1004d2524("AttackToIdleCombat");
  uVar4 = FUN_100015208("AttackToIdleCombat",uVar4,0x12345678);
  *(undefined4 *)(lVar2 + 0x20) = uVar4;
  lVar2 = FUN_10000e1b4();
  FUN_1003a985c(&local_50,lVar2);
  *(undefined8 *)(lVar2 + 0x40) = 0;
  *(ushort *)(lVar2 + 0x80) = *(ushort *)(lVar2 + 0x80) & 0xffef | 3;
  *(uint *)(lVar2 + 0x3c) = (uint)lVar2 & 0xffff;
  *(undefined8 *)(lVar2 + 0x20) = 0;
  *(undefined8 *)(lVar2 + 0x28) = 1;
  *(undefined4 *)(lVar2 + 0x10) = 0x51915246;
  uVar1 = FUN_10000f034();
  FUN_1003a985c(&local_50,uVar1);
  lVar2 = FUN_10000ceb8();
  FUN_1003a985c(&local_50,lVar2);
  *(undefined4 *)(lVar2 + 0x2c) = 0x3f000000;
  *(undefined8 *)(lVar2 + 0x10) = 0;
  lVar2 = FUN_10000e524();
  FUN_1003a985c(&local_50,lVar2);
  uVar1 = FUN_1010a1520();
  lVar3 = FUN_1010a0e0c(uVar1,0,"*KindredSoundBalance*",0);
  uVar4 = FUN_1003a798c(*(undefined4 *)(lVar3 + 0x234));
  *(char **)(lVar2 + 0x10) = "Sound_Phinn_Ability_C_Impact";
  *(undefined2 *)(lVar2 + 0x30) = 0x1ff;
  *(undefined4 *)(lVar2 + 0x34) = 1;
  *(undefined4 *)(lVar2 + 0x3c) = uVar4;
  *(undefined4 *)(lVar2 + 0x40) = 0xffffffff;
  *(byte *)(lVar2 + 0x38) = *(byte *)(lVar2 + 0x38) & 0xf8 | 4;
  *(undefined8 *)(lVar2 + 0x48) = 0;
  lVar2 = FUN_10000ceb8();
  FUN_1003a985c(&local_50,lVar2);
  *(code **)(lVar2 + 0x18) = FUN_1003a8528;
  lVar2 = FUN_10000e524();
  FUN_1003a985c(&local_50,lVar2);
  uVar1 = FUN_1010a1520();
  lVar3 = FUN_1010a0e0c(uVar1,0,"*KindredSoundBalance*",0);
  uVar4 = FUN_1003a798c(*(undefined4 *)(lVar3 + 0x230));
  *(char **)(lVar2 + 0x10) = "Sound_Phinn_Ability_C_Pull";
  *(undefined2 *)(lVar2 + 0x30) = 0x1ff;
  *(undefined4 *)(lVar2 + 0x34) = 1;
  *(undefined4 *)(lVar2 + 0x3c) = uVar4;
  *(undefined4 *)(lVar2 + 0x40) = 0xffffffff;
  *(byte *)(lVar2 + 0x38) = *(byte *)(lVar2 + 0x38) & 0xf8 | 4;
  *(undefined8 *)(lVar2 + 0x48) = 0;
  lVar2 = FUN_10000f250();
  FUN_1003a985c(&local_50,lVar2);
  *(undefined4 *)(lVar2 + 0x10) = 0x55;
  FUN_1003d266c(lVar2,"C_Hook_Start");
  *(undefined4 *)(lVar2 + 0x34) = 2;
  uVar1 = FUN_10000bb2c();
  FUN_1003a985c(&local_50,uVar1);
  lVar2 = FUN_10000bd3c();
  FUN_1003a985c(&local_50,lVar2);
  *(undefined **)(lVar2 + 0x10) = PTR_s_Buff_Phinn_WhiffedWithPull_10185a6a0;
  *(code **)(lVar2 + 0x30) = FUN_1003a85a0;
  *(undefined2 *)(lVar2 + 0x68) = 1;
  *(byte *)(lVar2 + 0x6a) = *(byte *)(lVar2 + 0x6a) & 0xfe;
  uVar1 = FUN_10000c784();
  FUN_1003a985c(&local_50,uVar1);
  lVar2 = FUN_10000ceb8();
  FUN_1003a985c(&local_50,lVar2);
  *(undefined4 *)(lVar2 + 0x2c) = 0x3e9eb852;
  lVar2 = FUN_10000d8b8();
  FUN_1003a985c(&local_50,lVar2);
  *(undefined1 *)(lVar2 + 0x10) = 0;
  return local_50;
}




void FUN_10037337c(void)

{
  FUN_1003bb644("Attack",0,"Effect_Reim_AA",&PTR_s_Sound_Reim_Basic_Attack_1_10185af10,3,
                &PTR_s_Sound_Reim_Basic_Impact_1_10185af28,3,0);
  return;
}




void FUN_1003733b0(void)

{
  FUN_1003bb644("AltAttack",0,"Effect_Reim_AA_Alt",&PTR_s_Sound_Reim_Basic_Attack_1_10185af10,3,
                &PTR_s_Sound_Reim_Basic_Impact_1_10185af28,3,0);
  return;
}




void FUN_1003733e4(void)

{
  FUN_1003bb644("CritAttack","Effect_Reim_AA_Crit_Ice","Effect_Reim_AA_Crit",
                &PTR_s_Sound_Reim_Crit_Attack_1_10185af40,3,
                &PTR_s_Sound_Reim_Crit_Impact_1_10185af58,3,2);
  return;
}




undefined8 FUN_10037341c(void)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  undefined4 uVar5;
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_30 = 0;
  uStack_28 = 0;
  lVar1 = FUN_10000e94c();
  FUN_1003a985c(&local_30,lVar1);
  *(code **)(lVar1 + 0x10) = FUN_1003bb5b8;
  lVar1 = FUN_10000d8b8();
  FUN_1003a985c(&local_30,lVar1);
  *(undefined1 *)(lVar1 + 0x10) = 1;
  uVar2 = FUN_10000ef8c();
  FUN_1003a985c(&local_30,uVar2);
  plVar3 = (long *)thunk_FUN_10000e0ac();
  FUN_1003a985c(&local_30,plVar3);
  (**(code **)(*plVar3 + 0x50))(plVar3,"Ability01");
  plVar3 = (long *)thunk_FUN_10000e358();
  FUN_1003a985c(&local_30,plVar3);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x58))(plVar3);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Reim_A_Cast");
  (**(code **)(*plVar3 + 0x78))(plVar3,1);
  lVar1 = FUN_10000e524();
  FUN_1003a985c(&local_30,lVar1);
  uVar2 = FUN_1010a1520();
  lVar4 = FUN_1010a0e0c(uVar2,0,"*KindredSoundBalance*",0);
  uVar5 = FUN_1003bb940(*(undefined4 *)(lVar4 + 0x27c));
  *(char **)(lVar1 + 0x10) = "Sound_Reim_Ability_A_Start";
  *(undefined2 *)(lVar1 + 0x30) = 0x1ff;
  *(undefined4 *)(lVar1 + 0x34) = 1;
  *(undefined4 *)(lVar1 + 0x3c) = uVar5;
  *(undefined4 *)(lVar1 + 0x40) = 0xffffffff;
  *(byte *)(lVar1 + 0x38) = *(byte *)(lVar1 + 0x38) & 0xf8 | 4;
  *(undefined8 *)(lVar1 + 0x48) = 0;
  lVar1 = FUN_10000f250();
  FUN_1003a985c(&local_30,lVar1);
  *(undefined4 *)(lVar1 + 0x10) = 0x56;
  FUN_1003d266c(lVar1,"CenterBody");
  lVar1 = FUN_10000ceb8();
  FUN_1003a985c(&local_30,lVar1);
  *(code **)(lVar1 + 0x20) = FUN_1003bb9a4;
  *(undefined8 *)(lVar1 + 0x10) = 0;
  lVar1 = FUN_10000d8b8();
  FUN_1003a985c(&local_30,lVar1);
  *(undefined1 *)(lVar1 + 0x10) = 0;
  uVar2 = FUN_10000f034();
  FUN_1003a985c(&local_30,uVar2);
  return local_30;
}




undefined8 FUN_1003735e8(void)

{
  byte bVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  code *local_40;
  undefined4 local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_30 = 0;
  uStack_28 = 0;
  plVar3 = (long *)thunk_FUN_10000e0ac();
  FUN_1003a985c(&local_30,plVar3);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x50))(plVar3,"Ability02");
  (**(code **)(*plVar3 + 0x28))();
  lVar4 = FUN_10000ceb8();
  FUN_1003a985c(&local_30,lVar4);
  *(undefined4 *)(lVar4 + 0x2c) = 0x3e4ccccd;
  *(undefined8 *)(lVar4 + 0x10) = 0;
  plVar3 = (long *)thunk_FUN_10000e5dc();
  FUN_1003a985c(&local_30,plVar3);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x58))(plVar3,"Sound_Reim_Ability_B");
  uVar5 = FUN_1010a1520();
  lVar4 = FUN_1010a0e0c(uVar5,0,"*KindredSoundBalance*",0);
  (**(code **)(*plVar3 + 0x28))(*(undefined4 *)(lVar4 + 0x280),plVar3);
  plVar3 = (long *)FUN_10000e26c();
  FUN_1003a985c(&local_30,plVar3);
  (**(code **)(*plVar3 + 0x50))(plVar3,"Effect_Reim_B_AOE_Range",FUN_1003bb9b8);
  lVar4 = FUN_1003e10f0();
  bVar1 = *(byte *)(lVar4 + 0xe5);
  lVar4 = FUN_10000ed74();
  FUN_1003a985c(&local_30,lVar4);
  *(undefined8 *)(lVar4 + 0x18) = 0;
  *(undefined1 *)(lVar4 + 0x20) = 1;
  *(undefined8 *)(lVar4 + 0x24) = 0;
  *(undefined8 *)(lVar4 + 0x34) = 0;
  *(undefined8 *)(lVar4 + 0x2c) = 0;
  *(undefined4 *)(lVar4 + 0x3c) = 0;
  *(undefined8 *)(lVar4 + 0x48) = 0xbf800000c0000000;
  *(undefined8 *)(lVar4 + 0x40) = 0xbf800000bf800000;
  *(undefined4 *)(lVar4 + 0x50) = 0x3f800000;
  *(undefined1 *)(lVar4 + 0x54) = 0xff;
  *(undefined8 *)(lVar4 + 0x60) = 0xffffffff00000000;
  *(undefined8 *)(lVar4 + 0x58) = 0xffffffff00040000;
  *(byte *)(lVar4 + 0x6a) = bVar1 | 0x14;
  *(undefined2 *)(lVar4 + 0x68) = 0x4120;
  bVar2 = DAT_101d23a38 != '\0';
  *(code **)(lVar4 + 0x78) = FUN_1003bba98;
  *(byte *)(lVar4 + 0xa8) = *(byte *)(lVar4 + 0xa8) & 0xf0 | bVar2;
  plVar3 = (long *)FUN_10000cb8c();
  FUN_1003a985c(&local_30,plVar3);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x50))(plVar3);
  (**(code **)(*plVar3 + 0x38))(plVar3,"Damage",1);
  plVar3 = (long *)FUN_10000bed8();
  FUN_1003a985c(&local_30,plVar3);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x70))(plVar3,PTR_s_Buff_Reim_Immobilize_10185af70);
  local_40 = FUN_1003bbaac;
  local_38 = 3;
  (**(code **)(*plVar3 + 0x18))(plVar3,&local_40);
  uVar5 = FUN_10000c784();
  FUN_1003a985c(&local_30,uVar5);
  return local_30;
}




undefined8 FUN_100373838(void)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  undefined4 uVar5;
  undefined8 local_50;
  undefined8 uStack_48;
  
  local_50 = 0;
  uStack_48 = 0;
  lVar1 = FUN_10000e94c();
  FUN_1003a985c(&local_50,lVar1);
  *(code **)(lVar1 + 0x10) = FUN_1003bb5b8;
  lVar1 = FUN_10000d8b8();
  FUN_1003a985c(&local_50,lVar1);
  *(undefined1 *)(lVar1 + 0x10) = 1;
  uVar2 = FUN_10000ef8c();
  FUN_1003a985c(&local_50,uVar2);
  plVar3 = (long *)thunk_FUN_10000e0ac();
  FUN_1003a985c(&local_50,plVar3);
  (**(code **)(*plVar3 + 0x50))(plVar3,"Ability03");
  plVar3 = (long *)thunk_FUN_10000e358();
  FUN_1003a985c(&local_50,plVar3);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x68))(plVar3,"Bone_RightHand");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Reim_C_Cast");
  (**(code **)(*plVar3 + 0x78))(plVar3,1);
  plVar3 = (long *)thunk_FUN_10000e358();
  FUN_1003a985c(&local_50,plVar3);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x68))(plVar3,"Bone_LeftHand");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Reim_C_Cast");
  (**(code **)(*plVar3 + 0x78))(plVar3,1);
  lVar1 = FUN_10000e524();
  FUN_1003a985c(&local_50,lVar1);
  uVar2 = FUN_1010a1520();
  lVar4 = FUN_1010a0e0c(uVar2,0,"*KindredSoundBalance*",0);
  uVar5 = FUN_1003bb940(*(undefined4 *)(lVar4 + 0x280));
  *(char **)(lVar1 + 0x10) = "Sound_Reim_Ability_C_Start";
  *(undefined2 *)(lVar1 + 0x30) = 0x1ff;
  *(undefined4 *)(lVar1 + 0x34) = 1;
  *(undefined4 *)(lVar1 + 0x3c) = uVar5;
  *(undefined4 *)(lVar1 + 0x40) = 0xffffffff;
  *(byte *)(lVar1 + 0x38) = *(byte *)(lVar1 + 0x38) & 0xf8 | 4;
  *(undefined8 *)(lVar1 + 0x48) = 0;
  lVar1 = FUN_10000ceb8();
  FUN_1003a985c(&local_50,lVar1);
  *(code **)(lVar1 + 0x20) = FUN_1003bbac0;
  *(undefined8 *)(lVar1 + 0x10) = 0;
  plVar3 = (long *)FUN_10000f300();
  FUN_1003a985c(&local_50,plVar3);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x50))(plVar3,"*Reim_C*",0);
  (**(code **)(*plVar3 + 0x20))(plVar3,FUN_10048fb04);
  lVar1 = FUN_10000e524();
  FUN_1003a985c(&local_50,lVar1);
  uVar2 = FUN_1010a1520();
  lVar4 = FUN_1010a0e0c(uVar2,0,"*KindredSoundBalance*",0);
  uVar5 = FUN_1003bb940(*(undefined4 *)(lVar4 + 0x280));
  *(char **)(lVar1 + 0x10) = "Sound_Reim_Ability_C_Yell";
  *(undefined2 *)(lVar1 + 0x30) = 0x1ff;
  *(undefined4 *)(lVar1 + 0x34) = 1;
  *(undefined4 *)(lVar1 + 0x3c) = uVar5;
  *(undefined4 *)(lVar1 + 0x40) = 0xffffffff;
  *(byte *)(lVar1 + 0x38) = *(byte *)(lVar1 + 0x38) & 0xf8 | 4;
  *(undefined8 *)(lVar1 + 0x48) = 0;
  lVar1 = FUN_10000d8b8();
  FUN_1003a985c(&local_50,lVar1);
  *(undefined1 *)(lVar1 + 0x10) = 0;
  uVar2 = FUN_10000f034();
  FUN_1003a985c(&local_50,uVar2);
  return local_50;
}




void FUN_100373ae8(void)

{
  FUN_1003a5d18("Attack","Effect_Blackfeather_AA",&PTR_s_Sound_Blackfthr_Basic_1_10185a4c0,3,
                FUN_1003a3a5c);
  return;
}




void FUN_100373b10(void)

{
  FUN_1003a5d18("AltAttack","Effect_Blackfeather_AA_Alt",&PTR_s_Sound_Blackfthr_Basic_1_10185a4c0,3,
                FUN_1003a3a5c);
  return;
}




void FUN_100373b38(void)

{
  FUN_1003a5d18("CritAttack","Effect_Blackfeather_AA_Crit",&PTR_s_Sound_Blackfthr_Crit_1_10185a4d8,3
                ,FUN_1003a3acc);
  return;
}




undefined8 FUN_100373b60(void)

{
  char cVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  uint uVar7;
  char *pcVar8;
  code *local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  local_50 = 0;
  uStack_48 = 0;
  lVar3 = FUN_10000c8e8();
  FUN_1003a985c(&local_50,lVar3);
  lVar4 = FUN_10049ac04(lVar3 + 0x10);
  if (PTR_s_Ability__Blackfeather__A_1018594c8 == (undefined *)0x0) {
    uVar7 = 0;
  }
  else {
    uVar7 = 0x811c9dc5;
    cVar1 = *PTR_s_Ability__Blackfeather__A_1018594c8;
    pcVar8 = PTR_s_Ability__Blackfeather__A_1018594c8;
    while (cVar1 != '\0') {
      pcVar8 = pcVar8 + 1;
      uVar7 = (uVar7 ^ (int)cVar1) * 0x1000193;
      cVar1 = *pcVar8;
    }
  }
  *(uint *)(lVar4 + 8) = uVar7;
  plVar5 = (long *)FUN_10000bdf0();
  FUN_1003a985c(lVar3 + 0xb0,plVar5);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x50))
                             (plVar5,PTR_s_Buff_Blackfeather_GrantLungeRese_10185a4f0);
  local_60 = FUN_1003a5ffc;
  local_58 = 4;
  (**(code **)(*plVar5 + 0x18))(plVar5,&local_60);
  uVar6 = FUN_10000d8b8();
  FUN_1003a985c(&local_50,uVar6);
  lVar3 = FUN_10000ef8c();
  FUN_1003a985c(&local_50,lVar3);
  *(byte *)(lVar3 + 0x10) = *(byte *)(lVar3 + 0x10) & 0xe7 | 4;
  lVar3 = FUN_10000dff8();
  FUN_1003a985c(&local_50,lVar3);
  *(undefined2 *)(lVar3 + 0x28) = 0x100;
  *(undefined8 *)(lVar3 + 0x30) = 0;
  uVar2 = FUN_1004d2524("Ability01");
  uVar2 = FUN_100015208("Ability01",uVar2,0x12345678);
  *(undefined4 *)(lVar3 + 0x10) = uVar2;
  uVar2 = FUN_1004d2524("AttackToIdleCombat");
  uVar2 = FUN_100015208("AttackToIdleCombat",uVar2,0x12345678);
  *(undefined4 *)(lVar3 + 0x20) = uVar2;
  lVar3 = FUN_10000e524();
  FUN_1003a985c(&local_50,lVar3);
  uVar6 = FUN_1010a1520();
  lVar4 = FUN_1010a0e0c(uVar6,0,"*KindredSoundBalance*",0);
  uVar2 = *(undefined4 *)(lVar4 + 0x244);
  *(char **)(lVar3 + 0x10) = "Sound_Blackfthr_Ability_A_Start";
  *(undefined2 *)(lVar3 + 0x30) = 0x1ff;
  *(undefined4 *)(lVar3 + 0x34) = 1;
  *(undefined4 *)(lVar3 + 0x3c) = uVar2;
  *(undefined4 *)(lVar3 + 0x40) = 0xffffffff;
  *(byte *)(lVar3 + 0x38) = *(byte *)(lVar3 + 0x38) & 0xf8 | 4;
  *(undefined8 *)(lVar3 + 0x48) = 0;
  lVar3 = FUN_10000ceb8();
  FUN_1003a985c(&local_50,lVar3);
  *(code **)(lVar3 + 0x18) = FUN_1003a60e0;
  plVar5 = (long *)FUN_10000cd5c();
  FUN_1003a985c(&local_50,plVar5);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x68))(0x3f000000,0,0,0,plVar5);
  local_60 = FUN_1003a60cc;
  local_58 = 3;
  plVar5 = (long *)(**(code **)(*plVar5 + 0xa0))(plVar5,&local_60);
  plVar5 = (long *)(**(code **)(*plVar5 + 0xb0))(plVar5,1);
  (**(code **)(*plVar5 + 0xb8))(0x41700000);
  lVar3 = FUN_10000ceb8();
  FUN_1003a985c(&local_50,lVar3);
  *(code **)(lVar3 + 0x18) = FUN_1003a6198;
  uVar6 = FUN_10000f9c0();
  FUN_1003a985c(&local_50,uVar6);
  lVar3 = FUN_10000e524();
  FUN_1003a985c(&local_50,lVar3);
  uVar6 = FUN_1010a1520();
  lVar4 = FUN_1010a0e0c(uVar6,0,"*KindredSoundBalance*",0);
  uVar2 = *(undefined4 *)(lVar4 + 0x244);
  *(char **)(lVar3 + 0x10) = "Sound_Blackfthr_Ability_A_Kill";
  *(undefined2 *)(lVar3 + 0x30) = 0x1ff;
  *(undefined4 *)(lVar3 + 0x34) = 1;
  *(undefined4 *)(lVar3 + 0x3c) = uVar2;
  *(undefined4 *)(lVar3 + 0x40) = 0xffffffff;
  *(byte *)(lVar3 + 0x38) = *(byte *)(lVar3 + 0x38) & 0xf8 | 4;
  *(undefined8 *)(lVar3 + 0x48) = 0;
  uVar6 = FUN_10000bc94();
  FUN_1003a985c(&local_50,uVar6);
  plVar5 = (long *)FUN_10000cb8c();
  FUN_1003a985c(&local_50,plVar5);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x50))(plVar5);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x20))(plVar5,"DAMAGE");
  (**(code **)(*plVar5 + 0x70))(plVar5,1);
  lVar3 = FUN_10000c8e8();
  FUN_1003a985c(&local_50,lVar3);
  lVar4 = FUN_10049ac6c(lVar3 + 0x10);
  *(code **)(lVar4 + 8) = FUN_1003a6368;
  plVar5 = (long *)FUN_10000cb8c();
  FUN_1003a985c(lVar3 + 0xb0,plVar5);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x50))(plVar5);
  (**(code **)(*plVar5 + 0x20))(plVar5,"ExecutePctDamage");
  plVar5 = (long *)thunk_FUN_10000e5dc();
  FUN_1003a985c(lVar3 + 0xb0,plVar5);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x58))(plVar5,"Sound_Blackfthr_Heartthrob_Broken_Heart");
  uVar6 = FUN_1010a1520();
  lVar3 = FUN_1010a0e0c(uVar6,0,"*KindredSoundBalance*",0);
  FUN_1003a5f8c(*(undefined4 *)(lVar3 + 0x23c));
  (**(code **)(*plVar5 + 0x28))(plVar5);
  lVar3 = FUN_10000bd3c();
  FUN_1003a985c(&local_50,lVar3);
  *(undefined8 *)(lVar3 + 0x10) = DAT_10185a4b8;
  *(undefined2 *)(lVar3 + 0x68) = 1;
  *(byte *)(lVar3 + 0x6a) = *(byte *)(lVar3 + 0x6a) & 0xfe;
  *(code **)(lVar3 + 0x30) = FUN_1003a5ff0;
  *(code **)(lVar3 + 0x38) = FUN_1003a62b4;
  lVar3 = FUN_10000bd3c();
  FUN_1003a985c(&local_50,lVar3);
  *(undefined **)(lVar3 + 0x10) = PTR_s_Buff_Blackfeather_A_ImpactEffect_10185a4f8;
  *(undefined4 *)(lVar3 + 0x18) = 0x3dcccccd;
  *(undefined2 *)(lVar3 + 0x68) = 1;
  *(byte *)(lVar3 + 0x6a) = *(byte *)(lVar3 + 0x6a) & 0xfe;
  *(code **)(lVar3 + 0x38) = FUN_1003a62b4;
  uVar6 = FUN_10000c784();
  FUN_1003a985c(&local_50,uVar6);
  FUN_1003a643c(&local_50,PTR_s_Buff_Blackfeather_SpeedBoost_10185a500,FUN_1003a64b4);
  uVar6 = FUN_10000e7fc();
  FUN_1003a985c(&local_50,uVar6);
  lVar3 = FUN_10000ceb8();
  FUN_1003a985c(&local_50,lVar3);
  *(code **)(lVar3 + 0x18) = FUN_1003a6310;
  lVar3 = FUN_10000d8b8();
  FUN_1003a985c(&local_50,lVar3);
  *(undefined1 *)(lVar3 + 0x10) = 0;
  uVar6 = FUN_10000f034();
  FUN_1003a985c(&local_50,uVar6);
  return local_50;
}




undefined8 FUN_1003740a4(void)

{
  byte bVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 local_50;
  undefined8 uStack_48;
  
  local_50 = 0;
  uStack_48 = 0;
  uVar3 = FUN_10000d8b8();
  FUN_1003a985c(&local_50,uVar3);
  lVar4 = FUN_10000ef8c();
  FUN_1003a985c(&local_50,lVar4);
  *(byte *)(lVar4 + 0x10) = *(byte *)(lVar4 + 0x10) & 0xe7 | 4;
  lVar4 = FUN_10000dff8();
  FUN_1003a985c(&local_50,lVar4);
  *(undefined2 *)(lVar4 + 0x28) = 0x100;
  *(undefined8 *)(lVar4 + 0x30) = 0;
  uVar2 = FUN_1004d2524("Ability02");
  uVar2 = FUN_100015208("Ability02",uVar2,0x12345678);
  *(undefined4 *)(lVar4 + 0x10) = uVar2;
  uVar2 = FUN_1004d2524("AttackToIdleCombat");
  uVar2 = FUN_100015208("AttackToIdleCombat",uVar2,0x12345678);
  *(undefined4 *)(lVar4 + 0x20) = uVar2;
  lVar4 = FUN_10000c3b0();
  FUN_1003a985c(&local_50,lVar4);
  *(code **)(lVar4 + 0x10) = FUN_1003a6520;
  lVar4 = FUN_10000e524();
  FUN_1003a985c(&local_50,lVar4);
  uVar3 = FUN_1010a1520();
  lVar5 = FUN_1010a0e0c(uVar3,0,"*KindredSoundBalance*",0);
  uVar2 = FUN_1003a5f8c(*(undefined4 *)(lVar5 + 0x248));
  *(char **)(lVar4 + 0x10) = "Sound_Blackfthr_Ability_B_Start";
  *(undefined2 *)(lVar4 + 0x30) = 0x1ff;
  *(undefined4 *)(lVar4 + 0x34) = 1;
  *(undefined4 *)(lVar4 + 0x3c) = uVar2;
  *(undefined4 *)(lVar4 + 0x40) = 0xffffffff;
  *(byte *)(lVar4 + 0x38) = *(byte *)(lVar4 + 0x38) & 0xf8 | 4;
  *(undefined8 *)(lVar4 + 0x48) = 0;
  lVar4 = FUN_10000ceb8();
  FUN_1003a985c(&local_50,lVar4);
  *(code **)(lVar4 + 0x18) = FUN_1003a64c8;
  lVar4 = FUN_10000e524();
  FUN_1003a985c(&local_50,lVar4);
  uVar3 = FUN_1010a1520();
  lVar5 = FUN_1010a0e0c(uVar3,0,"*KindredSoundBalance*",0);
  uVar2 = FUN_1003a5f8c(*(undefined4 *)(lVar5 + 0x248));
  *(char **)(lVar4 + 0x10) = "Sound_Blackfthr_Ability_B_Attack";
  *(undefined2 *)(lVar4 + 0x30) = 0x1ff;
  *(undefined4 *)(lVar4 + 0x34) = 1;
  *(undefined4 *)(lVar4 + 0x3c) = uVar2;
  *(undefined4 *)(lVar4 + 0x40) = 0xffffffff;
  *(byte *)(lVar4 + 0x38) = *(byte *)(lVar4 + 0x38) & 0xf8 | 4;
  *(undefined8 *)(lVar4 + 0x48) = 0;
  lVar4 = FUN_1003e10f0();
  bVar1 = *(byte *)(lVar4 + 0xe5);
  lVar4 = FUN_10000ecbc();
  FUN_1003a985c(&local_50,lVar4);
  *(code **)(lVar4 + 0x70) = FUN_1003a6684;
  *(code **)(lVar4 + 0x78) = FUN_1003a66d0;
  *(undefined4 *)(lVar4 + 0x88) = 0x3f4ccccd;
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
  *(undefined8 *)(lVar4 + 0x58) = 0xffffffff00040000;
  *(byte *)(lVar4 + 0x6a) = bVar1 | 0x14;
  *(undefined2 *)(lVar4 + 0x68) = 0x6120;
  uVar3 = FUN_10000cb8c();
  FUN_1003a985c(&local_50,uVar3);
  lVar4 = FUN_10000bd3c();
  FUN_1003a985c(&local_50,lVar4);
  *(undefined8 *)(lVar4 + 0x10) = DAT_10185a4b8;
  *(code **)(lVar4 + 0x30) = FUN_1003a5ff0;
  *(undefined2 *)(lVar4 + 0x68) = 1;
  *(byte *)(lVar4 + 0x6a) = *(byte *)(lVar4 + 0x6a) & 0xfe;
  lVar4 = FUN_10000c3b0();
  FUN_1003a985c(&local_50,lVar4);
  *(code **)(lVar4 + 0x10) = FUN_1003a67b4;
  uVar3 = FUN_10000c784();
  FUN_1003a985c(&local_50,uVar3);
  lVar4 = FUN_10000d8b8();
  FUN_1003a985c(&local_50,lVar4);
  *(undefined1 *)(lVar4 + 0x10) = 0;
  uVar3 = FUN_10000f034();
  FUN_1003a985c(&local_50,uVar3);
  return local_50;
}




undefined8 FUN_1003743cc(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  code *local_50;
  undefined4 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  local_40 = 0;
  uStack_38 = 0;
  uVar2 = FUN_10000bb2c();
  FUN_1003a985c(&local_40,uVar2);
  lVar3 = FUN_10000bd3c();
  FUN_1003a985c(&local_40,lVar3);
  *(undefined **)(lVar3 + 0x10) = PTR_s_Buff_Blackfeather_UltBonusDefens_10185a520;
  *(code **)(lVar3 + 0x28) = FUN_1003a6e70;
  *(undefined2 *)(lVar3 + 0x68) = 1;
  *(byte *)(lVar3 + 0x6a) = *(byte *)(lVar3 + 0x6a) & 0xfe;
  lVar3 = FUN_10000bd3c();
  FUN_1003a985c(&local_40,lVar3);
  *(undefined **)(lVar3 + 0x10) = PTR_s_Buff_BlockDebuffs_10185a528;
  *(code **)(lVar3 + 0x28) = FUN_1003a6e70;
  *(undefined2 *)(lVar3 + 0x68) = 1;
  *(byte *)(lVar3 + 0x6a) = *(byte *)(lVar3 + 0x6a) & 0xfe;
  lVar3 = FUN_10000bd3c();
  FUN_1003a985c(&local_40,lVar3);
  *(undefined **)(lVar3 + 0x10) = PTR_s_Buff_SelfProjectile_10185a530;
  *(code **)(lVar3 + 0x28) = FUN_1003a6df0;
  *(undefined2 *)(lVar3 + 0x68) = 1;
  *(byte *)(lVar3 + 0x6a) = *(byte *)(lVar3 + 0x6a) & 0xfe;
  *(code **)(lVar3 + 0x50) = FUN_10049ace4;
  uVar2 = FUN_10000c784();
  FUN_1003a985c(&local_40,uVar2);
  uVar2 = FUN_10000d8b8();
  FUN_1003a985c(&local_40,uVar2);
  uVar2 = FUN_10000ef8c();
  FUN_1003a985c(&local_40,uVar2);
  lVar3 = FUN_10000dff8();
  FUN_1003a985c(&local_40,lVar3);
  *(undefined2 *)(lVar3 + 0x28) = 0x100;
  *(undefined8 *)(lVar3 + 0x30) = 0;
  uVar1 = FUN_1004d2524("Ability03");
  uVar1 = FUN_100015208("Ability03",uVar1,0x12345678);
  *(undefined4 *)(lVar3 + 0x10) = uVar1;
  uVar1 = FUN_1004d2524("AttackToIdleCombat");
  uVar1 = FUN_100015208("AttackToIdleCombat",uVar1,0x12345678);
  *(undefined4 *)(lVar3 + 0x20) = uVar1;
  lVar3 = FUN_10000e1b4();
  FUN_1003a985c(&local_40,lVar3);
  *(undefined8 *)(lVar3 + 0x40) = 0;
  *(ushort *)(lVar3 + 0x80) = *(ushort *)(lVar3 + 0x80) & 0xffef | 3;
  *(uint *)(lVar3 + 0x3c) = (uint)lVar3 & 0xffff;
  *(undefined8 *)(lVar3 + 0x20) = 0;
  *(undefined8 *)(lVar3 + 0x28) = 1;
  *(undefined4 *)(lVar3 + 0x10) = 0x79fae430;
  lVar3 = FUN_10000e524();
  FUN_1003a985c(&local_40,lVar3);
  uVar2 = FUN_1010a1520();
  lVar4 = FUN_1010a0e0c(uVar2,0,"*KindredSoundBalance*",0);
  uVar1 = FUN_1003a5f8c(*(undefined4 *)(lVar4 + 0x24c));
  *(char **)(lVar3 + 0x10) = "Sound_Blackfthr_Ability_C_Attack";
  *(undefined2 *)(lVar3 + 0x30) = 0x1ff;
  *(undefined4 *)(lVar3 + 0x34) = 1;
  *(undefined4 *)(lVar3 + 0x3c) = uVar1;
  *(undefined4 *)(lVar3 + 0x40) = 0xffffffff;
  *(byte *)(lVar3 + 0x38) = *(byte *)(lVar3 + 0x38) & 0xf8 | 4;
  *(undefined8 *)(lVar3 + 0x48) = 0;
  plVar5 = (long *)FUN_10000cd5c();
  FUN_1003a985c(&local_40,plVar5);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x88))(plVar5);
  local_50 = FUN_1003a6e5c;
  local_48 = 3;
  plVar5 = (long *)(**(code **)(*plVar5 + 0xa8))(plVar5,&local_50);
  (**(code **)(*plVar5 + 0xb0))(plVar5,1);
  lVar3 = FUN_10000ceb8();
  FUN_1003a985c(&local_40,lVar3);
  *(code **)(lVar3 + 0x18) = FUN_1003a6df0;
  uVar2 = FUN_10000f9c0();
  FUN_1003a985c(&local_40,uVar2);
  uVar2 = FUN_10000bb2c();
  FUN_1003a985c(&local_40,uVar2);
  lVar3 = FUN_10000bd3c();
  FUN_1003a985c(&local_40,lVar3);
  *(undefined **)(lVar3 + 0x10) = PTR_s_Buff_Blackfeather_MoveSpeedAfter_10185a538;
  *(code **)(lVar3 + 0x30) = FUN_1003a6eb4;
  *(undefined2 *)(lVar3 + 0x68) = 1;
  *(byte *)(lVar3 + 0x6a) = *(byte *)(lVar3 + 0x6a) & 0xfe;
  uVar2 = FUN_10000c784();
  FUN_1003a985c(&local_40,uVar2);
  lVar3 = FUN_10000d8b8();
  FUN_1003a985c(&local_40,lVar3);
  *(undefined1 *)(lVar3 + 0x10) = 0;
  uVar2 = FUN_10000f034();
  FUN_1003a985c(&local_40,uVar2);
  return local_40;
}




void FUN_100374718(void)

{
  FUN_1003b7ce8("Attack","AA",0x44);
  return;
}




void FUN_100374730(void)

{
  FUN_1003b7ce8("DarkAttack","AA",0x45);
  return;
}




void FUN_100374748(void)

{
  FUN_1003b7ce8("DarkAltAttack","AA",0x46);
  return;
}




void FUN_100374760(void)

{
  FUN_1003b7ce8("DarkCritAttack","AA",0x47);
  return;
}




void FUN_100374778(void)

{
  FUN_1003b7ce8("AltAttack","AA",0x48);
  return;
}




void FUN_100374790(void)

{
  FUN_1003b7ce8("CritAttack","AA",0x49);
  return;
}




undefined8 FUN_1003747a8(void)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  undefined4 uVar5;
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_30 = 0;
  uStack_28 = 0;
  lVar1 = FUN_10000ef8c();
  FUN_1003a985c(&local_30,lVar1);
  *(byte *)(lVar1 + 0x10) = *(byte *)(lVar1 + 0x10) & 0xe7 | 4;
  plVar2 = (long *)thunk_FUN_10000e0ac();
  FUN_1003a985c(&local_30,plVar2);
  (**(code **)(*plVar2 + 0x58))(plVar2,"LightEmpoweredAttack");
  lVar1 = FUN_10000ceb8();
  FUN_1003a985c(&local_30,lVar1);
  *(undefined4 *)(lVar1 + 0x2c) = 0x3e4ccccd;
  *(code **)(lVar1 + 0x10) = FUN_1003a24a0;
  uVar3 = FUN_10000bb2c();
  FUN_1003a985c(&local_30,uVar3);
  lVar1 = FUN_10000c540();
  FUN_1003a985c(&local_30,lVar1);
  *(undefined **)(lVar1 + 0x10) = PTR_s_Buff_Malene_LightEmpoweredAuto_10185ade0;
  uVar3 = FUN_10000c784();
  FUN_1003a985c(&local_30,uVar3);
  lVar1 = FUN_10000e524();
  FUN_1003a985c(&local_30,lVar1);
  uVar3 = FUN_1010a1520();
  lVar4 = FUN_1010a0e0c(uVar3,0,"*KindredSoundBalance*",0);
  uVar5 = FUN_1003b7e84(*(undefined4 *)(lVar4 + 0x490));
  *(char **)(lVar1 + 0x10) = "Sound_Malene_Good_Empowered_Attack";
  *(undefined2 *)(lVar1 + 0x30) = 0x1ff;
  *(undefined4 *)(lVar1 + 0x34) = 1;
  *(undefined4 *)(lVar1 + 0x3c) = uVar5;
  *(undefined4 *)(lVar1 + 0x40) = 0xffffffff;
  *(byte *)(lVar1 + 0x38) = *(byte *)(lVar1 + 0x38) & 0xf8 | 4;
  *(undefined8 *)(lVar1 + 0x48) = 0;
  lVar1 = FUN_10000f250();
  FUN_1003a985c(&local_30,lVar1);
  *(undefined4 *)(lVar1 + 0x10) = 0x4a;
  FUN_1003d266c(lVar1,"AA");
  return local_30;
}




undefined8 FUN_100374928(void)

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
  (**(code **)(*plVar2 + 0x58))(plVar2,"DarkEmpoweredAttack");
  lVar1 = FUN_10000ceb8();
  FUN_1003a985c(&local_30,lVar1);
  *(undefined4 *)(lVar1 + 0x2c) = 0x3e4ccccd;
  *(code **)(lVar1 + 0x10) = FUN_1003a24a0;
  uVar3 = FUN_10000bb2c();
  FUN_1003a985c(&local_30,uVar3);
  lVar1 = FUN_10000c540();
  FUN_1003a985c(&local_30,lVar1);
  *(undefined **)(lVar1 + 0x10) = PTR_s_Buff_Malene_DarkEmpoweredAuto_10185ade8;
  uVar3 = FUN_10000c784();
  FUN_1003a985c(&local_30,uVar3);
  plVar2 = (long *)thunk_FUN_10000e5dc();
  FUN_1003a985c(&local_30,plVar2);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x58))(plVar2,"Sound_Malene_Evil_Empowered_Attack");
  uVar3 = FUN_1010a1520();
  lVar1 = FUN_1010a0e0c(uVar3,0,"*KindredSoundBalance*",0);
  FUN_1003b7e84(*(undefined4 *)(lVar1 + 0x494));
  (**(code **)(*plVar2 + 0x28))(plVar2);
  lVar1 = FUN_10000f250();
  FUN_1003a985c(&local_30,lVar1);
  *(undefined4 *)(lVar1 + 0x10) = 0x4b;
  FUN_1003d266c(lVar1,"AA");
  return local_30;
}




undefined8 FUN_100374a98(void)

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
  (**(code **)(*plVar2 + 0x50))(plVar2,"AbilityA1");
  plVar2 = (long *)thunk_FUN_10000e5dc();
  FUN_1003a985c(&local_30,plVar2);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x58))(plVar2,"Sound_Malene_Good_Ability_A_Cast");
  uVar3 = FUN_1010a1520();
  lVar1 = FUN_1010a0e0c(uVar3,0,"*KindredSoundBalance*",0);
  FUN_1003b7e84(*(undefined4 *)(lVar1 + 0x498));
  (**(code **)(*plVar2 + 0x28))(plVar2);
  lVar1 = FUN_10000ceb8();
  FUN_1003a985c(&local_30,lVar1);
  *(code **)(lVar1 + 0x20) = FUN_1003b7ee8;
  *(undefined8 *)(lVar1 + 0x10) = 0;
  lVar1 = FUN_10000f250();
  FUN_1003a985c(&local_30,lVar1);
  *(undefined4 *)(lVar1 + 0x10) = 0x4c;
  FUN_1003d266c(lVar1,"CenterBody");
  *(undefined4 *)(lVar1 + 0x34) = 0;
  lVar1 = FUN_10000d8b8();
  FUN_1003a985c(&local_30,lVar1);
  *(undefined1 *)(lVar1 + 0x10) = 0;
  return local_30;
}




undefined8 FUN_100374bf8(void)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 local_40;
  undefined8 uStack_38;
  
  local_40 = 0;
  uStack_38 = 0;
  lVar1 = FUN_10000d2d0();
  FUN_1003a985c(&local_40,lVar1);
  *(undefined **)(lVar1 + 0x10) = PTR_s_Buff_Malene_B2_ShadowWalk_10185adf0;
  *(undefined4 *)(lVar1 + 0x18) = 2;
  lVar1 = FUN_10000d8b8();
  FUN_1003a985c(&local_40,lVar1);
  *(undefined1 *)(lVar1 + 0x10) = 1;
  lVar1 = FUN_10000ef8c();
  FUN_1003a985c(&local_40,lVar1);
  *(byte *)(lVar1 + 0x10) = *(byte *)(lVar1 + 0x10) & 0xe7 | 4;
  plVar2 = (long *)thunk_FUN_10000e0ac();
  FUN_1003a985c(&local_40,plVar2);
  (**(code **)(*plVar2 + 0x50))(plVar2,"AbilityA2");
  plVar2 = (long *)thunk_FUN_10000e5dc();
  FUN_1003a985c(&local_40,plVar2);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x58))(plVar2,"Sound_Malene_Evil_Ability_A_Cast");
  uVar3 = FUN_1010a1520();
  lVar1 = FUN_1010a0e0c(uVar3,0,"*KindredSoundBalance*",0);
  FUN_1003b7e84(*(undefined4 *)(lVar1 + 0x49c));
  (**(code **)(*plVar2 + 0x28))(plVar2);
  lVar1 = FUN_10000ceb8();
  FUN_1003a985c(&local_40,lVar1);
  *(code **)(lVar1 + 0x20) = FUN_1003b7efc;
  *(undefined8 *)(lVar1 + 0x10) = 0;
  lVar1 = FUN_10000f250();
  FUN_1003a985c(&local_40,lVar1);
  *(undefined4 *)(lVar1 + 0x10) = 0x4d;
  FUN_1003d266c(lVar1,"CenterBody");
  *(undefined4 *)(lVar1 + 0x34) = 1;
  lVar1 = FUN_10000f250();
  FUN_1003a985c(&local_40,lVar1);
  *(undefined4 *)(lVar1 + 0x10) = 0x4d;
  FUN_1003d266c(lVar1,"LeftShard");
  *(undefined4 *)(lVar1 + 0x34) = 1;
  lVar1 = FUN_10000f250();
  FUN_1003a985c(&local_40,lVar1);
  *(undefined4 *)(lVar1 + 0x10) = 0x4d;
  FUN_1003d266c(lVar1,"RightShard");
  *(undefined4 *)(lVar1 + 0x34) = 1;
  lVar1 = FUN_10000d8b8();
  FUN_1003a985c(&local_40,lVar1);
  *(undefined1 *)(lVar1 + 0x10) = 0;
  return local_40;
}




undefined8 FUN_100374de0(void)

{
  long *plVar1;
  code *local_40;
  undefined4 local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_30 = 0;
  uStack_28 = 0;
  plVar1 = (long *)thunk_FUN_10000e0ac();
  FUN_1003a985c(&local_30,plVar1);
  plVar1 = (long *)(**(code **)(*plVar1 + 0x50))(plVar1,"AbilityB1");
  (**(code **)(*plVar1 + 0x28))();
  plVar1 = (long *)FUN_10000bdf0();
  FUN_1003a985c(&local_30,plVar1);
  plVar1 = (long *)(**(code **)(*plVar1 + 0x50))
                             (plVar1,PTR_s_Buff_Malene_B1_MirrorsBlessing_10185adf8);
  local_40 = FUN_1003b7f10;
  local_38 = 3;
  (**(code **)(*plVar1 + 0x18))(plVar1,&local_40);
  return local_30;
}




undefined8 FUN_100374e90(void)

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
  lVar1 = FUN_10000d2d0();
  FUN_1003a985c(&local_40,lVar1);
  *(undefined **)(lVar1 + 0x10) = PTR_s_Buff_Malene_B2_ShadowWalk_10185adf0;
  *(undefined4 *)(lVar1 + 0x18) = 2;
  lVar1 = FUN_10000c8e8();
  FUN_1003a985c(&local_40,lVar1);
  lVar2 = FUN_10049ab34(lVar1 + 0x10);
  *(undefined **)(lVar2 + 8) = PTR_s_Buff_Malene_Talent_TalentA_10185ae00;
  plVar3 = (long *)FUN_10000bdf0();
  FUN_1003a985c(lVar1 + 0xb0,plVar3);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x50))
                             (plVar3,PTR_s_Buff_Malene_B2_ShadowBurstSelf_10185ae08);
  local_50 = FUN_1003b7f24;
  local_48 = 3;
  (**(code **)(*plVar3 + 0x18))(plVar3,&local_50);
  plVar3 = (long *)thunk_FUN_10000e5dc();
  FUN_1003a985c(&local_40,plVar3);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x58))(plVar3,"Sound_Malene_Evil_Ability_B");
  uVar4 = FUN_1010a1520();
  lVar1 = FUN_1010a0e0c(uVar4,0,"*KindredSoundBalance*",0);
  FUN_1003b7e84(*(undefined4 *)(lVar1 + 0x4a4));
  (**(code **)(*plVar3 + 0x28))(plVar3);
  uVar4 = FUN_10000bb2c();
  FUN_1003a985c(&local_40,uVar4);
  lVar1 = FUN_10000c540();
  FUN_1003a985c(&local_40,lVar1);
  *(undefined **)(lVar1 + 0x10) = PTR_s_Buff_Malene_DarkFormAnimOverride_10185ae10;
  uVar4 = FUN_10000c784();
  FUN_1003a985c(&local_40,uVar4);
  uVar4 = FUN_10000cf70();
  FUN_1003a985c(&local_40,uVar4);
  plVar3 = (long *)FUN_10000bdf0();
  FUN_1003a985c(&local_40,plVar3);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x50))(plVar3,PTR_s_Buff_Malene_B2_ShadowWalk_10185adf0);
  local_50 = FUN_1003b7f24;
  local_48 = 3;
  (**(code **)(*plVar3 + 0x18))(plVar3,&local_50);
  plVar3 = (long *)FUN_10000f300();
  FUN_1003a985c(&local_40,plVar3);
  (**(code **)(*plVar3 + 0x50))(plVar3,"*Malene_ShadowBurst*",1);
  plVar3 = (long *)FUN_10000bdf0();
  FUN_1003a985c(&local_40,plVar3);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x50))(plVar3,PTR_s_Buff_SelfProjectile_10185a530);
  local_50 = FUN_1003b7f24;
  local_48 = 3;
  plVar3 = (long *)(**(code **)(*plVar3 + 0x18))(plVar3,&local_50);
  (**(code **)(*plVar3 + 0x48))(plVar3,0x4e);
  return local_40;
}




undefined8 FUN_1003750d8(void)

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
  plVar1 = (long *)thunk_FUN_10000e0ac();
  FUN_1003a985c(&local_30,plVar1);
  plVar1 = (long *)(**(code **)(*plVar1 + 0x50))(plVar1,"AbilityC1");
  (**(code **)(*plVar1 + 0x28))();
  plVar1 = (long *)thunk_FUN_10000e5dc();
  FUN_1003a985c(&local_30,plVar1);
  plVar1 = (long *)(**(code **)(*plVar1 + 0x58))(plVar1,"Sound_Malene_Transform_GoodToEvil");
  uVar2 = FUN_1010a1520();
  lVar3 = FUN_1010a0e0c(uVar2,0,"*KindredSoundBalance*",0);
  FUN_1003b7e84(*(undefined4 *)(lVar3 + 0x4a8));
  (**(code **)(*plVar1 + 0x28))(plVar1);
  uVar2 = FUN_10000bb2c();
  FUN_1003a985c(&local_30,uVar2);
  lVar3 = FUN_10000c540();
  FUN_1003a985c(&local_30,lVar3);
  *(undefined **)(lVar3 + 0x10) = PTR_s_Buff_Malene_LightFormPFX_10185ae18;
  plVar1 = (long *)FUN_10000bdf0();
  FUN_1003a985c(&local_30,plVar1);
  (**(code **)(*plVar1 + 0x50))(plVar1,PTR_s_Buff_Malene_DarkForm_10185ae20);
  plVar1 = (long *)FUN_10000bdf0();
  FUN_1003a985c(&local_30,plVar1);
  (**(code **)(*plVar1 + 0x50))(plVar1,PTR_s_Buff_Malene_DarkFormAnimOverride_10185ae10);
  plVar1 = (long *)FUN_10000bdf0();
  FUN_1003a985c(&local_30,plVar1);
  plVar1 = (long *)(**(code **)(*plVar1 + 0x50))
                             (plVar1,PTR_s_Buff_Malene_DarkEmpoweredAuto_10185ade8);
  local_40 = FUN_1003b7f38;
  local_38 = 3;
  (**(code **)(*plVar1 + 0x18))(plVar1,&local_40);
  uVar2 = FUN_10000c784();
  FUN_1003a985c(&local_30,uVar2);
  return local_30;
}




undefined8 FUN_100375280(void)

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
  lVar1 = FUN_10000d2d0();
  FUN_1003a985c(&local_30,lVar1);
  *(undefined **)(lVar1 + 0x10) = PTR_s_Buff_Malene_B2_ShadowWalk_10185adf0;
  *(undefined4 *)(lVar1 + 0x18) = 2;
  plVar2 = (long *)thunk_FUN_10000e0ac();
  FUN_1003a985c(&local_30,plVar2);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x50))(plVar2,"AbilityC2");
  (**(code **)(*plVar2 + 0x28))();
  plVar2 = (long *)thunk_FUN_10000e5dc();
  FUN_1003a985c(&local_30,plVar2);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x58))(plVar2,"Sound_Malene_Transform_EvilToGood");
  uVar3 = FUN_1010a1520();
  lVar1 = FUN_1010a0e0c(uVar3,0,"*KindredSoundBalance*",0);
  FUN_1003b7e84(*(undefined4 *)(lVar1 + 0x4ac));
  (**(code **)(*plVar2 + 0x28))(plVar2);
  uVar3 = FUN_10000bb2c();
  FUN_1003a985c(&local_30,uVar3);
  lVar1 = FUN_10000c540();
  FUN_1003a985c(&local_30,lVar1);
  *(undefined **)(lVar1 + 0x10) = PTR_s_Buff_Malene_DarkForm_10185ae20;
  lVar1 = FUN_10000c540();
  FUN_1003a985c(&local_30,lVar1);
  *(undefined **)(lVar1 + 0x10) = PTR_s_Buff_Malene_DarkFormAnimOverride_10185ae10;
  plVar2 = (long *)FUN_10000bdf0();
  FUN_1003a985c(&local_30,plVar2);
  (**(code **)(*plVar2 + 0x50))(plVar2,PTR_s_Buff_Malene_LightFormPFX_10185ae18);
  plVar2 = (long *)FUN_10000bdf0();
  FUN_1003a985c(&local_30,plVar2);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x50))
                             (plVar2,PTR_s_Buff_Malene_LightEmpoweredAuto_10185ade0);
  local_40 = FUN_1003b7f4c;
  local_38 = 3;
  (**(code **)(*plVar2 + 0x18))(plVar2,&local_40);
  uVar3 = FUN_10000c784();
  FUN_1003a985c(&local_30,uVar3);
  return local_30;
}




void FUN_100375444(void)

{
  FUN_1003b2cc4("Attack",0x32,"DefaultAttack_Spawn");
  return;
}




void FUN_10037545c(void)

{
  FUN_1003b2cc4("AltAttack",0x32,"AltAttack_Spawn");
  return;
}




void FUN_100375474(void)

{
  FUN_1003b2cc4("CritAttack",0x33,"CritAttack_Spawn");
  return;
}




undefined8 FUN_10037548c(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_30 = 0;
  uStack_28 = 0;
  uVar1 = FUN_10000bb2c();
  FUN_1003a985c(&local_30,uVar1);
  lVar2 = FUN_10000c540();
  FUN_1003a985c(&local_30,lVar2);
  *(undefined **)(lVar2 + 0x10) = PTR_s_Buff_Kestrel_Stealth_10185ac40;
  uVar1 = FUN_10000c784();
  FUN_1003a985c(&local_30,uVar1);
  uVar1 = FUN_1003a2678(PTR_s_Buff_Withdraw_10185a458);
  FUN_1003a985c(&local_30,uVar1);
  return local_30;
}




undefined8 FUN_10037550c(void)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 local_50;
  undefined8 uStack_48;
  
  local_50 = 0;
  uStack_48 = 0;
  uVar3 = FUN_10000d8b8();
  FUN_1003a985c(&local_50,uVar3);
  lVar4 = FUN_10000c8e8();
  FUN_1003a985c(&local_50,lVar4);
  lVar5 = FUN_10049ab34(lVar4 + 0x10);
  *(undefined **)(lVar5 + 8) = PTR_s_Buff_Kestrel_Talent_GlimmerVolle_10185ac48;
  lVar5 = FUN_10000ef8c();
  FUN_1003a985c(lVar4 + 0xb0,lVar5);
  *(byte *)(lVar5 + 0x10) = *(byte *)(lVar5 + 0x10) & 0xe7 | 4;
  uVar3 = FUN_10000ef8c();
  FUN_1003a985c(lVar4 + 200,uVar3);
  lVar4 = FUN_10000dff8();
  FUN_1003a985c(&local_50,lVar4);
  *(undefined2 *)(lVar4 + 0x28) = 0x100;
  *(undefined8 *)(lVar4 + 0x30) = 0;
  uVar2 = FUN_1004d2524("Ability01");
  uVar2 = FUN_100015208("Ability01",uVar2,0x12345678);
  *(undefined4 *)(lVar4 + 0x10) = uVar2;
  uVar2 = FUN_1004d2524("AttackToIdleCombat");
  uVar2 = FUN_100015208("AttackToIdleCombat",uVar2,0x12345678);
  *(undefined4 *)(lVar4 + 0x20) = uVar2;
  uVar3 = FUN_10000bb2c();
  FUN_1003a985c(&local_50,uVar3);
  lVar4 = FUN_10000c540();
  FUN_1003a985c(&local_50,lVar4);
  *(undefined **)(lVar4 + 0x10) = PTR_s_Buff_Kestrel_Reloading_10185ac38;
  cVar1 = DAT_101d23a38;
  lVar4 = FUN_10000ceb8();
  FUN_1003a985c(&local_50,lVar4);
  if (cVar1 == '\0') {
    *(code **)(lVar4 + 0x18) = FUN_1003b2fa0;
    lVar4 = FUN_10000e524();
    FUN_1003a985c(&local_50,lVar4);
    uVar3 = FUN_1010a1520();
    lVar5 = FUN_1010a0e0c(uVar3,0,"*KindredSoundBalance*",0);
    uVar2 = FUN_1003b2f3c(*(undefined4 *)(lVar5 + 0x25c));
    *(char **)(lVar4 + 0x10) = "Sound_Kestrel_Ability_A_3";
    *(undefined2 *)(lVar4 + 0x30) = 0x1ff;
    *(undefined4 *)(lVar4 + 0x34) = 1;
    *(undefined4 *)(lVar4 + 0x3c) = uVar2;
    *(undefined4 *)(lVar4 + 0x40) = 0xffffffff;
    *(byte *)(lVar4 + 0x38) = *(byte *)(lVar4 + 0x38) & 0xf8 | 4;
    *(undefined8 *)(lVar4 + 0x48) = 0;
    lVar4 = FUN_10000ceb8();
    FUN_1003a985c(&local_50,lVar4);
    *(undefined4 *)(lVar4 + 0x2c) = 0x3e99999a;
  }
  else {
    *(code **)(lVar4 + 0x20) = FUN_1003b2fe4;
  }
  *(undefined8 *)(lVar4 + 0x10) = 0;
  lVar4 = FUN_10000c540();
  FUN_1003a985c(&local_50,lVar4);
  *(undefined **)(lVar4 + 0x10) = PTR_s_Buff_Kestrel_Stealth_10185ac40;
  uVar3 = FUN_10000c784();
  FUN_1003a985c(&local_50,uVar3);
  lVar4 = FUN_10000c8e8();
  FUN_1003a985c(&local_50,lVar4);
  lVar5 = FUN_10049ab34(lVar4 + 0x10);
  *(undefined **)(lVar5 + 8) = PTR_s_Buff_Kestrel_Talent_GlimmerVolle_10185ac48;
  lVar5 = FUN_10000f250();
  FUN_1003a985c(lVar4 + 200,lVar5);
  *(undefined4 *)(lVar5 + 0x10) = 0x34;
  FUN_1003d266c(lVar5,"CenterBody");
  *(undefined4 *)(lVar5 + 0x34) = 1;
  lVar5 = FUN_10000f250();
  FUN_1003a985c(lVar4 + 0xb0,lVar5);
  *(undefined4 *)(lVar5 + 0x10) = 0x34;
  FUN_1003d266c(lVar5,"TalentVolleyLeft");
  *(undefined4 *)(lVar5 + 0x34) = 1;
  lVar5 = FUN_10000f250();
  FUN_1003a985c(lVar4 + 0xb0,lVar5);
  *(undefined4 *)(lVar5 + 0x10) = 0x34;
  FUN_1003d266c(lVar5,"TalentVolleyRight");
  *(undefined4 *)(lVar5 + 0x34) = 1;
  lVar4 = FUN_10000d8b8();
  FUN_1003a985c(&local_50,lVar4);
  *(undefined1 *)(lVar4 + 0x10) = 0;
  lVar4 = FUN_10000e7fc();
  FUN_1003a985c(&local_50,lVar4);
  *(undefined4 *)(lVar4 + 0x10) = 0x3e99999a;
  lVar4 = FUN_10000c3b0();
  FUN_1003a985c(&local_50,lVar4);
  *(code **)(lVar4 + 0x10) = FUN_1003b28f0;
  *(undefined1 *)(lVar4 + 0x18) = 1;
  uVar3 = FUN_10000f034();
  FUN_1003a985c(&local_50,uVar3);
  return local_50;
}




undefined8 FUN_10037587c(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined4 uVar5;
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_30 = 0;
  uStack_28 = 0;
  uVar1 = FUN_10000c6d4();
  FUN_1003a985c(&local_30,uVar1);
  lVar2 = FUN_10000c3b0();
  FUN_1003a985c(&local_30,lVar2);
  *(code **)(lVar2 + 0x10) = FUN_1003b2ff8;
  lVar2 = FUN_10000e524();
  FUN_1003a985c(&local_30,lVar2);
  uVar1 = FUN_1010a1520();
  lVar3 = FUN_1010a0e0c(uVar1,0,"*KindredSoundBalance*",0);
  uVar5 = FUN_1003b2f3c(*(undefined4 *)(lVar3 + 0x26c));
  *(char **)(lVar2 + 0x10) = "Sound_Kestrel_Ability_B_Set";
  *(undefined2 *)(lVar2 + 0x30) = 0x1ff;
  *(undefined4 *)(lVar2 + 0x34) = 1;
  *(undefined4 *)(lVar2 + 0x3c) = uVar5;
  *(undefined4 *)(lVar2 + 0x40) = 0xffffffff;
  *(byte *)(lVar2 + 0x38) = *(byte *)(lVar2 + 0x38) & 0xf8 | 5;
  *(undefined8 *)(lVar2 + 0x48) = 0;
  plVar4 = (long *)FUN_10000f300();
  FUN_1003a985c(&local_30,plVar4);
  (**(code **)(*plVar4 + 0x50))(plVar4,"*Kestrel_Trap*",1);
  uVar1 = FUN_10000bb2c();
  FUN_1003a985c(&local_30,uVar1);
  lVar2 = FUN_10000bd3c();
  FUN_1003a985c(&local_30,lVar2);
  *(undefined **)(lVar2 + 0x10) = PTR_s_Buff_Kestrel_Stealth_10185ac40;
  *(code **)(lVar2 + 0x30) = FUN_1003b3140;
  *(undefined2 *)(lVar2 + 0x68) = 1;
  *(byte *)(lVar2 + 0x6a) = *(byte *)(lVar2 + 0x6a) & 0xfe;
  uVar1 = FUN_10000c784();
  FUN_1003a985c(&local_30,uVar1);
  lVar2 = FUN_10000c8e8();
  FUN_1003a985c(&local_30,lVar2);
  lVar3 = FUN_10049ab34(lVar2 + 0x10);
  *(undefined **)(lVar3 + 8) = PTR_s_Buff_Kestrel_Talent_ActiveReload_10185ac50;
  lVar3 = FUN_10000db08();
  FUN_1003a985c(lVar2 + 0xb0,lVar3);
  *(undefined8 *)(lVar3 + 0x10) = 0xa00000000;
  *(byte *)(lVar3 + 0x18) = *(byte *)(lVar3 + 0x18) | 1;
  return local_30;
}




undefined8 FUN_100375a2c(void)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_30 = 0;
  uStack_28 = 0;
  lVar2 = FUN_10000dff8();
  FUN_1003a985c(&local_30,lVar2);
  *(undefined2 *)(lVar2 + 0x28) = 0x100;
  *(undefined8 *)(lVar2 + 0x30) = 0;
  uVar1 = FUN_1004d2524("Spawn");
  uVar1 = FUN_100015208("Spawn",uVar1,0x12345678);
  *(undefined4 *)(lVar2 + 0x10) = uVar1;
  uVar1 = FUN_1004d2524("AttackToIdle");
  uVar1 = FUN_100015208("AttackToIdle",uVar1,0x12345678);
  *(undefined4 *)(lVar2 + 0x20) = uVar1;
  return local_30;
}




undefined8 FUN_100375ac4(void)

{
  byte bVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  code *local_50;
  undefined4 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  local_40 = 0;
  uStack_38 = 0;
  uVar4 = FUN_10000bb2c();
  FUN_1003a985c(&local_40,uVar4);
  lVar5 = FUN_10000c540();
  FUN_1003a985c(&local_40,lVar5);
  *(undefined **)(lVar5 + 0x10) = PTR_s_Buff_Kestrel_TrapPerk_Stealth_10185ac58;
  lVar5 = FUN_10000c540();
  FUN_1003a985c(&local_40,lVar5);
  *(undefined **)(lVar5 + 0x10) = PTR_s_Buff_Kestrel_Trap_Ready_10185ac60;
  lVar5 = FUN_10000bd3c();
  FUN_1003a985c(&local_40,lVar5);
  *(undefined **)(lVar5 + 0x10) = PTR_s_Buff_Kestrel_Trap_Exploding_10185ac68;
  *(undefined4 *)(lVar5 + 0x18) = 0x3f800000;
  *(undefined2 *)(lVar5 + 0x68) = 1;
  *(byte *)(lVar5 + 0x6a) = *(byte *)(lVar5 + 0x6a) | 1;
  lVar5 = FUN_10000dff8();
  FUN_1003a985c(&local_40,lVar5);
  *(undefined2 *)(lVar5 + 0x28) = 0x100;
  *(undefined8 *)(lVar5 + 0x30) = 0;
  uVar3 = FUN_1004d2524("Hide");
  uVar3 = FUN_100015208("Hide",uVar3,0x12345678);
  *(undefined4 *)(lVar5 + 0x10) = uVar3;
  *(undefined4 *)(lVar5 + 0x20) = 0;
  uVar4 = FUN_10000c784();
  FUN_1003a985c(&local_40,uVar4);
  lVar5 = FUN_1003e10f0();
  bVar1 = *(byte *)(lVar5 + 0xe5);
  lVar5 = FUN_10000ed74();
  FUN_1003a985c(&local_40,lVar5);
  *(undefined8 *)(lVar5 + 0x18) = 0;
  *(undefined1 *)(lVar5 + 0x20) = 1;
  *(undefined8 *)(lVar5 + 0x24) = 0;
  *(undefined8 *)(lVar5 + 0x34) = 0;
  *(undefined8 *)(lVar5 + 0x2c) = 0;
  *(undefined4 *)(lVar5 + 0x3c) = 0;
  *(undefined8 *)(lVar5 + 0x48) = 0xbf800000c0000000;
  *(undefined8 *)(lVar5 + 0x40) = 0xbf800000bf800000;
  *(undefined4 *)(lVar5 + 0x50) = 0x3f800000;
  *(undefined1 *)(lVar5 + 0x54) = 0xff;
  *(undefined8 *)(lVar5 + 0x60) = 0xffffffff00000000;
  *(undefined8 *)(lVar5 + 0x58) = 0xffffffff00040000;
  *(byte *)(lVar5 + 0x6a) = bVar1 | 0x14;
  *(undefined2 *)(lVar5 + 0x68) = 0x4120;
  bVar2 = DAT_101d23a38 != '\0';
  *(undefined4 *)(lVar5 + 0xa4) = 0;
  *(byte *)(lVar5 + 0xa8) = *(byte *)(lVar5 + 0xa8) & 0xf0 | bVar2;
  *(code **)(lVar5 + 0x90) = FUN_1003b3154;
  plVar6 = (long *)FUN_10000bed8();
  FUN_1003a985c(&local_40,plVar6);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x70))(plVar6,PTR_s_Buff_Stunned_10185a208);
  local_50 = FUN_1003b3204;
  local_48 = 3;
  (**(code **)(*plVar6 + 0x18))(plVar6,&local_50);
  plVar6 = (long *)FUN_10000bed8();
  FUN_1003a985c(&local_40,plVar6);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x70))(plVar6,PTR_s_Buff_Kestrel_Trap_Damage_10185ac70);
  local_50 = (code *)CONCAT44(local_50._4_4_,0x3dcccccd);
  local_48 = 1;
  plVar6 = (long *)(**(code **)(*plVar6 + 0x18))(plVar6,&local_50);
  (**(code **)(*plVar6 + 0x28))(plVar6,FUN_1003b31b8);
  uVar4 = FUN_10000c784();
  FUN_1003a985c(&local_40,uVar4);
  lVar5 = FUN_10000ceb8();
  FUN_1003a985c(&local_40,lVar5);
  *(undefined4 *)(lVar5 + 0x2c) = 0x3f800000;
  *(undefined8 *)(lVar5 + 0x10) = 0;
  uVar4 = FUN_10000d0cc();
  FUN_1003a985c(&local_40,uVar4);
  return local_40;
}




undefined8 FUN_100375d64(void)

{
  uint uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 local_70;
  undefined8 uStack_68;
  
  local_70 = 0;
  uStack_68 = 0;
  uVar3 = FUN_10000bb2c();
  FUN_1003a985c(&local_70,uVar3);
  lVar4 = FUN_10000c540();
  FUN_1003a985c(&local_70,lVar4);
  *(undefined **)(lVar4 + 0x10) = PTR_s_Buff_Kestrel_Reloading_10185ac38;
  uVar3 = FUN_10000c784();
  FUN_1003a985c(&local_70,uVar3);
  uVar3 = FUN_10000d8b8();
  FUN_1003a985c(&local_70,uVar3);
  lVar4 = FUN_10000dff8();
  FUN_1003a985c(&local_70,lVar4);
  *(undefined2 *)(lVar4 + 0x28) = 0x100;
  *(undefined8 *)(lVar4 + 0x30) = 0;
  uVar2 = FUN_1004d2524("Ability03");
  uVar2 = FUN_100015208("Ability03",uVar2,0x12345678);
  *(undefined4 *)(lVar4 + 0x10) = uVar2;
  uVar2 = FUN_1004d2524("AttackToIdleCombat");
  uVar2 = FUN_100015208("AttackToIdleCombat",uVar2,0x12345678);
  *(undefined4 *)(lVar4 + 0x20) = uVar2;
  lVar4 = FUN_10000ef8c();
  FUN_1003a985c(&local_70,lVar4);
  *(byte *)(lVar4 + 0x10) = *(byte *)(lVar4 + 0x10) & 0xe7 | 4;
  lVar4 = FUN_10000e1b4();
  FUN_1003a985c(&local_70,lVar4);
  *(undefined8 *)(lVar4 + 0x40) = 0;
  *(ushort *)(lVar4 + 0x80) = *(ushort *)(lVar4 + 0x80) | 0x13;
  uVar1 = (uint)lVar4 & 0xffff;
  *(uint *)(lVar4 + 0x3c) = uVar1;
  *(undefined8 *)(lVar4 + 0x20) = 0;
  *(undefined8 *)(lVar4 + 0x28) = 0xbf80000000000001;
  *(undefined4 *)(lVar4 + 0x10) = 0x43647fc7;
  lVar4 = FUN_10000e524();
  FUN_1003a985c(&local_70,lVar4);
  uVar3 = FUN_1010a1520();
  lVar5 = FUN_1010a0e0c(uVar3,0,"*KindredSoundBalance*",0);
  uVar2 = FUN_1003b2f3c(*(undefined4 *)(lVar5 + 0x270));
  *(char **)(lVar4 + 0x10) = "Sound_Kestrel_Ability_C_Activate";
  *(undefined2 *)(lVar4 + 0x30) = 0x1ff;
  *(undefined4 *)(lVar4 + 0x34) = 1;
  *(undefined4 *)(lVar4 + 0x3c) = uVar2;
  *(undefined4 *)(lVar4 + 0x40) = 0xffffffff;
  *(byte *)(lVar4 + 0x38) = *(byte *)(lVar4 + 0x38) & 0xf8 | 4;
  *(undefined8 *)(lVar4 + 0x48) = 0;
  lVar4 = FUN_10000e1b4();
  FUN_1003a985c(&local_70,lVar4);
  *(undefined8 *)(lVar4 + 0x40) = 0;
  *(uint *)(lVar4 + 0x3c) = (uint)lVar4 & 0xffff;
  *(undefined8 *)(lVar4 + 0x20) = 0;
  *(undefined8 *)(lVar4 + 0x28) = 0x3f4ccccd00000001;
  *(undefined4 *)(lVar4 + 0x10) = 0xd5d2025f;
  *(code **)(lVar4 + 0x70) = FUN_1003b3218;
  *(ushort *)(lVar4 + 0x80) = *(ushort *)(lVar4 + 0x80) & 0xfe2c | 0x43;
  lVar4 = FUN_10000ceb8();
  FUN_1003a985c(&local_70,lVar4);
  *(code **)(lVar4 + 0x20) = FUN_1003b4054;
  *(undefined8 *)(lVar4 + 0x10) = 0;
  uVar3 = FUN_10000bb2c();
  FUN_1003a985c(&local_70,uVar3);
  lVar4 = FUN_10000c540();
  FUN_1003a985c(&local_70,lVar4);
  *(undefined **)(lVar4 + 0x10) = PTR_s_Buff_Kestrel_Stealth_10185ac40;
  lVar4 = FUN_10000bd3c();
  FUN_1003a985c(&local_70,lVar4);
  *(undefined **)(lVar4 + 0x10) = PTR_s_Buff_GloballyVisible_10185a1f0;
  *(code **)(lVar4 + 0x28) = FUN_1003b3300;
  *(undefined2 *)(lVar4 + 0x68) = 1;
  *(byte *)(lVar4 + 0x6a) = *(byte *)(lVar4 + 0x6a) & 0xfe;
  uVar3 = FUN_10000c784();
  FUN_1003a985c(&local_70,uVar3);
  lVar4 = FUN_10000e524();
  FUN_1003a985c(&local_70,lVar4);
  uVar3 = FUN_1010a1520();
  lVar5 = FUN_1010a0e0c(uVar3,0,"*KindredSoundBalance*",0);
  uVar2 = FUN_1003b2f3c(*(undefined4 *)(lVar5 + 0x270));
  *(char **)(lVar4 + 0x10) = "Sound_Kestrel_Ability_C_Rampup";
  *(undefined2 *)(lVar4 + 0x30) = 0x1ff;
  *(undefined4 *)(lVar4 + 0x34) = 1;
  *(undefined4 *)(lVar4 + 0x3c) = uVar2;
  *(undefined4 *)(lVar4 + 0x40) = 0xffffffff;
  *(byte *)(lVar4 + 0x38) = *(byte *)(lVar4 + 0x38) & 0xf8 | 4;
  *(undefined8 *)(lVar4 + 0x48) = 0;
  lVar4 = FUN_10000e1b4();
  FUN_1003a985c(&local_70,lVar4);
  *(undefined8 *)(lVar4 + 0x40) = 0;
  *(ushort *)(lVar4 + 0x80) = *(ushort *)(lVar4 + 0x80) & 0xffec | 1;
  *(uint *)(lVar4 + 0x3c) = (uint)lVar4 & 0xffff;
  *(char **)(lVar4 + 0x20) = "Effect_Kestrel_C_Warning_Ally";
  *(undefined8 *)(lVar4 + 0x28) = 0x3f4ccccd00000001;
  *(undefined4 *)(lVar4 + 0x10) = 0x5f163984;
  *(code **)(lVar4 + 0x70) = FUN_1003b3218;
  lVar4 = FUN_10000ceb8();
  FUN_1003a985c(&local_70,lVar4);
  *(code **)(lVar4 + 0x20) = FUN_1003b3384;
  *(undefined8 *)(lVar4 + 0x10) = 0;
  lVar4 = FUN_10000e524();
  FUN_1003a985c(&local_70,lVar4);
  uVar3 = FUN_1010a1520();
  lVar5 = FUN_1010a0e0c(uVar3,0,"*KindredSoundBalance*",0);
  uVar2 = FUN_1003b2f3c(*(undefined4 *)(lVar5 + 0x270));
  *(char **)(lVar4 + 0x10) = "Sound_Kestrel_Ability_C_Fire";
  *(undefined2 *)(lVar4 + 0x30) = 0x1ff;
  *(undefined4 *)(lVar4 + 0x34) = 1;
  *(undefined4 *)(lVar4 + 0x3c) = uVar2;
  *(undefined4 *)(lVar4 + 0x40) = 0xffffffff;
  *(byte *)(lVar4 + 0x38) = *(byte *)(lVar4 + 0x38) & 0xf8 | 4;
  *(undefined8 *)(lVar4 + 0x48) = 0;
  lVar4 = FUN_10000e1b4();
  FUN_1003a985c(&local_70,lVar4);
  *(undefined8 *)(lVar4 + 0x40) = 0;
  *(ushort *)(lVar4 + 0x80) = *(ushort *)(lVar4 + 0x80) & 0xffec | 2;
  *(uint *)(lVar4 + 0x3c) = (uint)lVar4 & 0xffff;
  *(undefined8 *)(lVar4 + 0x20) = 0;
  *(undefined8 *)(lVar4 + 0x28) = 1;
  *(undefined4 *)(lVar4 + 0x10) = 0x5ec19341;
  lVar4 = FUN_10000c8e8();
  FUN_1003a985c(&local_70,lVar4);
  lVar5 = FUN_10049ab34(lVar4 + 0x10);
  *(undefined **)(lVar5 + 8) = PTR_s_Buff_Kestrel_Talent_PiercingShot_10185ac88;
  lVar5 = FUN_10000c3b0();
  FUN_1003a985c(lVar4 + 200,lVar5);
  *(code **)(lVar5 + 0x10) = FUN_1003b33ac;
  lVar5 = FUN_10000c3b0();
  FUN_1003a985c(lVar4 + 0xb0,lVar5);
  *(code **)(lVar5 + 0x10) = FUN_1003b3990;
  lVar4 = FUN_10000f3ec();
  FUN_1003a985c(&local_70,lVar4);
  *(uint *)(lVar4 + 0x10) = uVar1;
  *(undefined1 *)(lVar4 + 0x14) = 1;
  lVar4 = FUN_10000ceb8();
  FUN_1003a985c(&local_70,lVar4);
  *(code **)(lVar4 + 0x20) = FUN_1003b3398;
  *(undefined8 *)(lVar4 + 0x10) = 0;
  lVar4 = FUN_10000d8b8();
  FUN_1003a985c(&local_70,lVar4);
  *(undefined1 *)(lVar4 + 0x10) = 0;
  lVar4 = FUN_10000c3b0();
  FUN_1003a985c(&local_70,lVar4);
  *(code **)(lVar4 + 0x10) = FUN_1003b28f0;
  *(undefined1 *)(lVar4 + 0x18) = 1;
  uVar3 = FUN_10000f034();
  FUN_1003a985c(&local_70,uVar3);
  return local_70;
}




void FUN_1003762bc(void)

{
  FUN_1003a2708("Attack","Effect_Alpha_AA",&PTR_s_Sound_Alpha_Attack_Heavy_1_10185a218,
                &PTR_s_Sound_Alpha_Impact_Heavy_1_10185a248,3,0);
  return;
}




void FUN_1003762e8(void)

{
  FUN_1003a2708("AltAttack","Effect_Alpha_AA_Alt",&PTR_s_Sound_Alpha_Attack_Heavy_1_10185a218,
                &PTR_s_Sound_Alpha_Impact_Heavy_1_10185a248,3,0);
  return;
}




void FUN_100376314(void)

{
  FUN_1003a2708("CritAttack","Effect_Alpha_AA_Crit",&PTR_s_Sound_Alpha_Crit_1_10185a230,
                &PTR_s_Sound_Alpha_Impact_Heavy_1_10185a248,3,2);
  return;
}




undefined8 FUN_100376340(void)

{
  char cVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 local_50;
  undefined8 uStack_48;
  
  local_50 = 0;
  uStack_48 = 0;
  lVar3 = FUN_10000d8b8();
  FUN_1003a985c(&local_50,lVar3);
  *(undefined1 *)(lVar3 + 0x10) = 1;
  lVar3 = FUN_10000ef8c();
  FUN_1003a985c(&local_50,lVar3);
  *(byte *)(lVar3 + 0x10) = *(byte *)(lVar3 + 0x10) & 0xe7 | 4;
  lVar3 = FUN_10000c3b0();
  FUN_1003a985c(&local_50,lVar3);
  *(code **)(lVar3 + 0x10) = FUN_1003a2b98;
  lVar3 = FUN_10000dff8();
  FUN_1003a985c(&local_50,lVar3);
  *(undefined2 *)(lVar3 + 0x28) = 0x100;
  *(undefined8 *)(lVar3 + 0x30) = 0;
  uVar2 = FUN_1004d2524("Ability01_Charge");
  uVar2 = FUN_100015208("Ability01_Charge",uVar2,0x12345678);
  *(undefined4 *)(lVar3 + 0x10) = uVar2;
  uVar2 = FUN_1004d2524("AttackToIdle");
  uVar2 = FUN_100015208("AttackToIdle",uVar2,0x12345678);
  *(undefined4 *)(lVar3 + 0x20) = uVar2;
  lVar3 = FUN_10000e524();
  FUN_1003a985c(&local_50,lVar3);
  uVar4 = FUN_1010a1520();
  lVar5 = FUN_1010a0e0c(uVar4,0,"*KindredSoundBalance*",0);
  uVar2 = FUN_1003a2a20(*(undefined4 *)(lVar5 + 0x2b4));
  *(char **)(lVar3 + 0x10) = "Sound_Alpha_Ability_A_Charge";
  *(undefined2 *)(lVar3 + 0x30) = 0x1ff;
  *(undefined4 *)(lVar3 + 0x34) = 1;
  *(undefined4 *)(lVar3 + 0x3c) = uVar2;
  *(undefined4 *)(lVar3 + 0x40) = 0xffffffff;
  *(byte *)(lVar3 + 0x38) = *(byte *)(lVar3 + 0x38) & 0xf8 | 4;
  *(undefined8 *)(lVar3 + 0x48) = 0;
  cVar1 = DAT_101d23a38;
  lVar3 = FUN_10000ceb8();
  FUN_1003a985c(&local_50,lVar3);
  if (cVar1 == '\0') {
    *(code **)(lVar3 + 0x18) = FUN_1003a2a84;
    lVar3 = FUN_10000e524();
    FUN_1003a985c(&local_50,lVar3);
    uVar4 = FUN_1010a1520();
    lVar5 = FUN_1010a0e0c(uVar4,0,"*KindredSoundBalance*",0);
    uVar2 = FUN_1003a2a20(*(undefined4 *)(lVar5 + 0x2b8));
    *(char **)(lVar3 + 0x10) = "Sound_Alpha_Ability_A_Scan";
    *(undefined2 *)(lVar3 + 0x30) = 0x1ff;
    *(undefined4 *)(lVar3 + 0x34) = 1;
    *(undefined4 *)(lVar3 + 0x3c) = uVar2;
    *(undefined4 *)(lVar3 + 0x40) = 0xffffffff;
    *(byte *)(lVar3 + 0x38) = *(byte *)(lVar3 + 0x38) & 0xf8 | 4;
    *(undefined8 *)(lVar3 + 0x48) = 0;
    lVar3 = FUN_10000ceb8();
    FUN_1003a985c(&local_50,lVar3);
    *(undefined4 *)(lVar3 + 0x2c) = 0x3e4ccccd;
  }
  else {
    *(code **)(lVar3 + 0x20) = FUN_1003a2ac8;
  }
  *(undefined8 *)(lVar3 + 0x10) = 0;
  lVar3 = FUN_10000f250();
  FUN_1003a985c(&local_50,lVar3);
  *(undefined4 *)(lVar3 + 0x10) = 4;
  FUN_1003d266c(lVar3,"EyeLaserShot");
  *(undefined4 *)(lVar3 + 0x34) = 2;
  uVar4 = FUN_10000bb2c();
  FUN_1003a985c(&local_50,uVar4);
  lVar3 = FUN_10000bd3c();
  FUN_1003a985c(&local_50,lVar3);
  *(undefined **)(lVar3 + 0x10) = PTR_s_Buff_Alpha_Dash_Shot_Lock_10185a260;
  *(code **)(lVar3 + 0x28) = FUN_1003a2adc;
  *(undefined2 *)(lVar3 + 0x68) = 1;
  *(byte *)(lVar3 + 0x6a) = *(byte *)(lVar3 + 0x6a) & 0xfe;
  uVar4 = FUN_10000c784();
  FUN_1003a985c(&local_50,uVar4);
  lVar3 = FUN_10000d8b8();
  FUN_1003a985c(&local_50,lVar3);
  *(undefined1 *)(lVar3 + 0x10) = 0;
  return local_50;
}




undefined8 FUN_100376624(void)

{
  byte bVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  code *local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  local_60 = 0;
  uStack_58 = 0;
  lVar3 = FUN_10000d8b8();
  FUN_1003a985c(&local_60,lVar3);
  *(undefined1 *)(lVar3 + 0x10) = 1;
  lVar3 = FUN_10000c3b0();
  FUN_1003a985c(&local_60,lVar3);
  *(code **)(lVar3 + 0x10) = FUN_1003a32b8;
  lVar3 = FUN_10000ef8c();
  FUN_1003a985c(&local_60,lVar3);
  *(byte *)(lVar3 + 0x10) = *(byte *)(lVar3 + 0x10) & 0xe7 | 4;
  lVar3 = FUN_10000dff8();
  FUN_1003a985c(&local_60,lVar3);
  *(undefined2 *)(lVar3 + 0x28) = 0x100;
  *(undefined8 *)(lVar3 + 0x30) = 0;
  uVar2 = FUN_1004d2524("Ability02");
  uVar2 = FUN_100015208("Ability02",uVar2,0x12345678);
  *(undefined4 *)(lVar3 + 0x10) = uVar2;
  uVar2 = FUN_1004d2524("AttackToIdle");
  uVar2 = FUN_100015208("AttackToIdle",uVar2,0x12345678);
  *(undefined4 *)(lVar3 + 0x20) = uVar2;
  uVar4 = FUN_10000bb2c();
  FUN_1003a985c(&local_60,uVar4);
  lVar3 = FUN_10000bd3c();
  FUN_1003a985c(&local_60,lVar3);
  *(undefined **)(lVar3 + 0x10) = PTR_s_Buff_Alpha_ThrusterPfx_10185a268;
  *(code **)(lVar3 + 0x28) = FUN_1003a3040;
  *(undefined2 *)(lVar3 + 0x68) = 1;
  *(byte *)(lVar3 + 0x6a) = *(byte *)(lVar3 + 0x6a) & 0xfe;
  uVar4 = FUN_10000c784();
  FUN_1003a985c(&local_60,uVar4);
  lVar3 = FUN_10000e524();
  FUN_1003a985c(&local_60,lVar3);
  uVar4 = FUN_1010a1520();
  lVar5 = FUN_1010a0e0c(uVar4,0,"*KindredSoundBalance*",0);
  uVar2 = FUN_1003a2a20(*(undefined4 *)(lVar5 + 0x2c4));
  *(char **)(lVar3 + 0x10) = "Sound_Alpha_Ability_B_Dash";
  *(undefined2 *)(lVar3 + 0x30) = 0x1ff;
  *(undefined4 *)(lVar3 + 0x34) = 1;
  *(undefined4 *)(lVar3 + 0x3c) = uVar2;
  *(undefined4 *)(lVar3 + 0x40) = 0xffffffff;
  *(byte *)(lVar3 + 0x38) = *(byte *)(lVar3 + 0x38) & 0xf8 | 4;
  *(undefined8 *)(lVar3 + 0x48) = 0;
  plVar6 = (long *)FUN_10000cd5c();
  FUN_1003a985c(&local_60,plVar6);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x68))(0x3f800000,0xbf000000,0,0xbe4ccccd,plVar6);
  plVar6 = (long *)(**(code **)(*plVar6 + 0xb0))(plVar6,1);
  local_70 = FUN_1003a3134;
  local_68 = 3;
  plVar6 = (long *)(**(code **)(*plVar6 + 0xa0))(plVar6,&local_70);
  (**(code **)(*plVar6 + 0xb8))(0x41700000);
  lVar3 = FUN_10000ceb8();
  FUN_1003a985c(&local_60,lVar3);
  *(code **)(lVar3 + 0x18) = FUN_1003a3040;
  uVar4 = FUN_10000f9c0();
  FUN_1003a985c(&local_60,uVar4);
  lVar3 = FUN_10000dff8();
  FUN_1003a985c(&local_60,lVar3);
  *(undefined2 *)(lVar3 + 0x28) = 0x100;
  *(undefined8 *)(lVar3 + 0x30) = 0;
  uVar2 = FUN_1004d2524("Ability02_End");
  uVar2 = FUN_100015208("Ability02_End",uVar2,0x12345678);
  *(undefined4 *)(lVar3 + 0x10) = uVar2;
  uVar2 = FUN_1004d2524("AttackToIdle");
  uVar2 = FUN_100015208("AttackToIdle",uVar2,0x12345678);
  *(undefined4 *)(lVar3 + 0x20) = uVar2;
  lVar3 = FUN_10000e524();
  FUN_1003a985c(&local_60,lVar3);
  uVar4 = FUN_1010a1520();
  lVar5 = FUN_1010a0e0c(uVar4,0,"*KindredSoundBalance*",0);
  uVar2 = FUN_1003a2a20(*(undefined4 *)(lVar5 + 0x2c4));
  *(char **)(lVar3 + 0x10) = "Sound_Alpha_Ability_B_Attack";
  *(undefined2 *)(lVar3 + 0x30) = 0x1ff;
  *(undefined4 *)(lVar3 + 0x34) = 1;
  *(undefined4 *)(lVar3 + 0x3c) = uVar2;
  *(undefined4 *)(lVar3 + 0x40) = 0xffffffff;
  *(byte *)(lVar3 + 0x38) = *(byte *)(lVar3 + 0x38) & 0xf8 | 4;
  *(undefined8 *)(lVar3 + 0x48) = 0;
  lVar3 = FUN_10000ceb8();
  FUN_1003a985c(&local_60,lVar3);
  *(undefined4 *)(lVar3 + 0x2c) = 0x3dcccccd;
  *(undefined8 *)(lVar3 + 0x10) = 0;
  lVar3 = FUN_10000e1b4();
  FUN_1003a985c(&local_60,lVar3);
  *(undefined8 *)(lVar3 + 0x40) = 0;
  *(ushort *)(lVar3 + 0x80) = *(ushort *)(lVar3 + 0x80) & 0xffec | 2;
  *(uint *)(lVar3 + 0x3c) = (uint)lVar3 & 0xffff;
  *(undefined8 *)(lVar3 + 0x20) = 0;
  *(undefined8 *)(lVar3 + 0x28) = 1;
  *(undefined4 *)(lVar3 + 0x10) = 0x752b1794;
  lVar3 = FUN_10000e1b4();
  FUN_1003a985c(&local_60,lVar3);
  *(undefined8 *)(lVar3 + 0x20) = 0;
  *(undefined8 *)(lVar3 + 0x28) = 0x4040000000000003;
  *(undefined8 *)(lVar3 + 0x40) = 0;
  *(ushort *)(lVar3 + 0x80) = *(ushort *)(lVar3 + 0x80) & 0xffef | 3;
  *(uint *)(lVar3 + 0x3c) = (uint)lVar3 & 0xffff;
  *(undefined4 *)(lVar3 + 0x10) = 0x45326c2;
  *(char **)(lVar3 + 0x18) = "Bone_Sword";
  uVar4 = FUN_10000bc94();
  FUN_1003a985c(&local_60,uVar4);
  plVar6 = (long *)FUN_10000cb8c();
  FUN_1003a985c(&local_60,plVar6);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x50))(plVar6);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x20))(plVar6,"Damage");
  (**(code **)(*plVar6 + 0x70))(plVar6,1);
  uVar4 = FUN_10000c784();
  FUN_1003a985c(&local_60,uVar4);
  uVar4 = FUN_10000bb2c();
  FUN_1003a985c(&local_60,uVar4);
  lVar3 = FUN_10000bd3c();
  FUN_1003a985c(&local_60,lVar3);
  *(undefined **)(lVar3 + 0x10) = PTR_s_Buff_Alpha_B_Stacks_Buff_10185a288;
  *(code **)(lVar3 + 0x30) = FUN_1003a352c;
  *(undefined2 *)(lVar3 + 0x68) = 1;
  *(byte *)(lVar3 + 0x6a) = *(byte *)(lVar3 + 0x6a) & 0xfe;
  lVar3 = FUN_10000bd3c();
  FUN_1003a985c(&local_60,lVar3);
  *(undefined **)(lVar3 + 0x10) = PTR_s_Buff_Alpha_B_Stacks_Debuff_10185a280;
  *(code **)(lVar3 + 0x30) = FUN_1003a352c;
  *(undefined2 *)(lVar3 + 0x68) = 1;
  *(byte *)(lVar3 + 0x6a) = *(byte *)(lVar3 + 0x6a) & 0xfe;
  uVar4 = FUN_10000c784();
  FUN_1003a985c(&local_60,uVar4);
  lVar3 = FUN_1003e10f0();
  bVar1 = *(byte *)(lVar3 + 0xe5);
  lVar3 = FUN_10000ecbc();
  FUN_1003a985c(&local_60,lVar3);
  *(code **)(lVar3 + 0x70) = FUN_1003a3148;
  *(code **)(lVar3 + 0x78) = FUN_1003a3238;
  *(undefined4 *)(lVar3 + 0x88) = 0x3f800000;
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
  *(byte *)(lVar3 + 0x8c) = *(byte *)(lVar3 + 0x8c) | 1;
  plVar6 = (long *)FUN_10000cb8c();
  FUN_1003a985c(&local_60,plVar6);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x50))(plVar6);
  (**(code **)(*plVar6 + 0x20))(plVar6,"AOEDamage");
  uVar4 = FUN_10000c784();
  FUN_1003a985c(&local_60,uVar4);
  lVar3 = FUN_10000ceb8();
  FUN_1003a985c(&local_60,lVar3);
  *(code **)(lVar3 + 0x20) = FUN_1003a3540;
  *(undefined8 *)(lVar3 + 0x10) = 0;
  lVar3 = FUN_10000e7fc();
  FUN_1003a985c(&local_60,lVar3);
  *(undefined4 *)(lVar3 + 0x10) = 0x3f000000;
  lVar3 = FUN_10000d8b8();
  FUN_1003a985c(&local_60,lVar3);
  *(undefined1 *)(lVar3 + 0x10) = 0;
  uVar4 = FUN_10000f034();
  FUN_1003a985c(&local_60,uVar4);
  return local_60;
}




undefined8 FUN_100376c60(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined4 uVar4;
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_30 = 0;
  uStack_28 = 0;
  lVar1 = FUN_10000e94c();
  FUN_1003a985c(&local_30,lVar1);
  *(code **)(lVar1 + 0x10) = FUN_1003a3568;
  uVar2 = FUN_10000bb2c();
  FUN_1003a985c(&local_30,uVar2);
  lVar1 = FUN_10000bd3c();
  FUN_1003a985c(&local_30,lVar1);
  *(undefined **)(lVar1 + 0x10) = PTR_s_Buff_Alpha_SelfDestruct_10185a290;
  *(code **)(lVar1 + 0x30) = FUN_1003a3554;
  *(undefined2 *)(lVar1 + 0x68) = 1;
  *(byte *)(lVar1 + 0x6a) = *(byte *)(lVar1 + 0x6a) & 0xfe;
  uVar2 = FUN_10000c784();
  FUN_1003a985c(&local_30,uVar2);
  lVar1 = FUN_10000e524();
  FUN_1003a985c(&local_30,lVar1);
  uVar2 = FUN_1010a1520();
  lVar3 = FUN_1010a0e0c(uVar2,0,"*KindredSoundBalance*",0);
  uVar4 = FUN_1003a2a20(*(undefined4 *)(lVar3 + 0x2c8));
  *(char **)(lVar1 + 0x10) = "Sound_Alpha_Ability_C_Start";
  *(undefined2 *)(lVar1 + 0x30) = 0x1ff;
  *(undefined4 *)(lVar1 + 0x34) = 1;
  *(undefined4 *)(lVar1 + 0x3c) = uVar4;
  *(undefined4 *)(lVar1 + 0x40) = 0xffffffff;
  *(byte *)(lVar1 + 0x38) = *(byte *)(lVar1 + 0x38) & 0xf8 | 4;
  *(undefined8 *)(lVar1 + 0x48) = 0;
  uVar2 = FUN_10000f034();
  FUN_1003a985c(&local_30,uVar2);
  return local_30;
}




undefined8 FUN_100376d84(void)

{
  byte bVar1;
  bool bVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  undefined4 uVar7;
  code *local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  local_50 = 0;
  uStack_48 = 0;
  lVar3 = FUN_10000e94c();
  FUN_1003a985c(&local_50,lVar3);
  *(code **)(lVar3 + 0x10) = FUN_1003a2df8;
  lVar3 = FUN_10000e524();
  FUN_1003a985c(&local_50,lVar3);
  uVar4 = FUN_1010a1520();
  lVar5 = FUN_1010a0e0c(uVar4,0,"*KindredSoundBalance*",0);
  uVar7 = FUN_1003a2a20(*(undefined4 *)(lVar5 + 0x2c0));
  *(char **)(lVar3 + 0x10) = "Sound_Alpha_Ability_A_Attack";
  *(undefined2 *)(lVar3 + 0x30) = 0x1ff;
  *(undefined4 *)(lVar3 + 0x34) = 1;
  *(undefined4 *)(lVar3 + 0x3c) = uVar7;
  *(undefined4 *)(lVar3 + 0x40) = 0xffffffff;
  *(byte *)(lVar3 + 0x38) = *(byte *)(lVar3 + 0x38) & 0xf8 | 4;
  *(undefined8 *)(lVar3 + 0x48) = 0;
  lVar3 = FUN_10000e524();
  FUN_1003a985c(&local_50,lVar3);
  uVar4 = FUN_1010a1520();
  lVar5 = FUN_1010a0e0c(uVar4,0,"*KindredSoundBalance*",0);
  uVar7 = FUN_1003a2a20(*(undefined4 *)(lVar5 + 700));
  *(char **)(lVar3 + 0x10) = "Sound_Alpha_Ability_A_Dash";
  *(undefined2 *)(lVar3 + 0x30) = 0x1ff;
  *(undefined4 *)(lVar3 + 0x34) = 1;
  *(undefined4 *)(lVar3 + 0x3c) = uVar7;
  *(undefined4 *)(lVar3 + 0x40) = 0xffffffff;
  *(byte *)(lVar3 + 0x38) = *(byte *)(lVar3 + 0x38) & 0xf8 | 4;
  *(undefined8 *)(lVar3 + 0x48) = 0;
  lVar3 = FUN_10000d8b8();
  FUN_1003a985c(&local_50,lVar3);
  *(undefined1 *)(lVar3 + 0x10) = 1;
  lVar3 = FUN_10000ef8c();
  FUN_1003a985c(&local_50,lVar3);
  *(byte *)(lVar3 + 0x10) = *(byte *)(lVar3 + 0x10) & 0xe3 | 8;
  lVar3 = FUN_10000dff8();
  FUN_1003a985c(&local_50,lVar3);
  *(undefined2 *)(lVar3 + 0x28) = 0;
  *(undefined8 *)(lVar3 + 0x30) = 0;
  uVar7 = FUN_1004d2524("Ability01_Jump");
  uVar7 = FUN_100015208("Ability01_Jump",uVar7,0x12345678);
  *(undefined4 *)(lVar3 + 0x10) = uVar7;
  uVar7 = FUN_1004d2524("AttackToIdle");
  uVar7 = FUN_100015208("AttackToIdle",uVar7,0x12345678);
  *(undefined4 *)(lVar3 + 0x20) = uVar7;
  lVar3 = FUN_10000e1b4();
  FUN_1003a985c(&local_50,lVar3);
  *(undefined8 *)(lVar3 + 0x40) = 0;
  *(ushort *)(lVar3 + 0x80) = *(ushort *)(lVar3 + 0x80) & 0xffec | 2;
  *(uint *)(lVar3 + 0x3c) = (uint)lVar3 & 0xffff;
  *(undefined8 *)(lVar3 + 0x20) = 0;
  *(undefined8 *)(lVar3 + 0x28) = 0x3f00000000000001;
  *(undefined4 *)(lVar3 + 0x10) = 0x64324df0;
  lVar3 = FUN_10000ceb8();
  FUN_1003a985c(&local_50,lVar3);
  *(code **)(lVar3 + 0x20) = FUN_1003a2fd0;
  *(undefined8 *)(lVar3 + 0x10) = 0;
  uVar4 = FUN_10000bb2c();
  FUN_1003a985c(&local_50,uVar4);
  lVar3 = FUN_10000bd3c();
  FUN_1003a985c(&local_50,lVar3);
  *(undefined **)(lVar3 + 0x10) = PTR_s_Buff_Alpha_ThrusterPfx_10185a268;
  *(code **)(lVar3 + 0x30) = FUN_1003a2fbc;
  *(undefined2 *)(lVar3 + 0x68) = 1;
  *(byte *)(lVar3 + 0x6a) = *(byte *)(lVar3 + 0x6a) & 0xfe;
  uVar4 = FUN_10000c784();
  FUN_1003a985c(&local_50,uVar4);
  plVar6 = (long *)FUN_10000cd5c();
  FUN_1003a985c(&local_50,plVar6);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x68))(0,0xc0000000,0xc0800000,0xc0000000,plVar6);
  local_60 = FUN_1003a2fbc;
  local_58 = 3;
  plVar6 = (long *)(**(code **)(*plVar6 + 0xa8))(plVar6,&local_60);
  (**(code **)(*plVar6 + 0xb0))(plVar6,1);
  lVar3 = FUN_10000ceb8();
  FUN_1003a985c(&local_50,lVar3);
  *(code **)(lVar3 + 0x18) = FUN_1003a2f68;
  uVar4 = FUN_10000f9c0();
  FUN_1003a985c(&local_50,uVar4);
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
  *(undefined4 *)(lVar3 + 0x50) = 0x3f800000;
  *(undefined1 *)(lVar3 + 0x54) = 0xff;
  *(undefined8 *)(lVar3 + 0x60) = 0xffffffff00000000;
  *(undefined8 *)(lVar3 + 0x58) = 0xffffffff00040000;
  *(byte *)(lVar3 + 0x6a) = bVar1 | 0x14;
  *(undefined2 *)(lVar3 + 0x68) = 0x4120;
  bVar2 = DAT_101d23a38 != '\0';
  *(code **)(lVar3 + 0x78) = FUN_1003a2fe4;
  *(byte *)(lVar3 + 0xa8) = *(byte *)(lVar3 + 0xa8) & 0xf0 | bVar2;
  plVar6 = (long *)FUN_10000cb8c();
  FUN_1003a985c(&local_50,plVar6);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x50))(plVar6);
  (**(code **)(*plVar6 + 0x30))(plVar6,0);
  uVar4 = FUN_10000c784();
  FUN_1003a985c(&local_50,uVar4);
  uVar4 = FUN_10000bb2c();
  FUN_1003a985c(&local_50,uVar4);
  lVar3 = FUN_10000c8e8();
  FUN_1003a985c(&local_50,lVar3);
  lVar5 = FUN_10049ab34(lVar3 + 0x10);
  *(undefined **)(lVar5 + 8) = PTR_s_Buff_Alpha_Talent_PrimeTime_10185a270;
  lVar5 = FUN_10000bd3c();
  FUN_1003a985c(lVar3 + 0xb0,lVar5);
  *(undefined **)(lVar5 + 0x10) = PTR_s_Buff_Alpha_Talent_PrimeTimeForti_10185a278;
  *(code **)(lVar5 + 0x30) = FUN_1003a2ff8;
  *(undefined2 *)(lVar5 + 0x68) = 1;
  *(byte *)(lVar5 + 0x6a) = *(byte *)(lVar5 + 0x6a) & 0xfe;
  lVar3 = FUN_10000c540();
  FUN_1003a985c(&local_50,lVar3);
  *(undefined **)(lVar3 + 0x10) = PTR_s_Buff_Alpha_B_Stacks_Debuff_10185a280;
  uVar4 = FUN_10000c784();
  FUN_1003a985c(&local_50,uVar4);
  lVar3 = FUN_10000ef8c();
  FUN_1003a985c(&local_50,lVar3);
  *(byte *)(lVar3 + 0x10) = *(byte *)(lVar3 + 0x10) & 0xe7 | 4;
  lVar3 = FUN_10000dff8();
  FUN_1003a985c(&local_50,lVar3);
  *(undefined2 *)(lVar3 + 0x28) = 0x100;
  *(undefined8 *)(lVar3 + 0x30) = 0;
  uVar7 = FUN_1004d2524("Ability01_End");
  uVar7 = FUN_100015208("Ability01_End",uVar7,0x12345678);
  *(undefined4 *)(lVar3 + 0x10) = uVar7;
  *(undefined4 *)(lVar3 + 0x20) = 0;
  lVar3 = FUN_10000e1b4();
  FUN_1003a985c(&local_50,lVar3);
  *(undefined8 *)(lVar3 + 0x40) = 0;
  *(ushort *)(lVar3 + 0x80) = *(ushort *)(lVar3 + 0x80) & 0xffec | 2;
  *(uint *)(lVar3 + 0x3c) = (uint)lVar3 & 0xffff;
  *(undefined8 *)(lVar3 + 0x20) = 0;
  *(undefined8 *)(lVar3 + 0x28) = 0x3f00000000000001;
  *(undefined4 *)(lVar3 + 0x10) = 0x877c5031;
  lVar3 = FUN_10000e1b4();
  FUN_1003a985c(&local_50,lVar3);
  *(undefined8 *)(lVar3 + 0x20) = 0;
  *(undefined8 *)(lVar3 + 0x28) = 0x4040000000000003;
  *(undefined8 *)(lVar3 + 0x40) = 0;
  *(ushort *)(lVar3 + 0x80) = *(ushort *)(lVar3 + 0x80) & 0xffef | 3;
  *(uint *)(lVar3 + 0x3c) = (uint)lVar3 & 0xffff;
  *(undefined4 *)(lVar3 + 0x10) = 0x45326c2;
  *(char **)(lVar3 + 0x18) = "Bone_Sword";
  uVar4 = FUN_10000e7fc();
  FUN_1003a985c(&local_50,uVar4);
  lVar3 = FUN_10000ceb8();
  FUN_1003a985c(&local_50,lVar3);
  *(code **)(lVar3 + 0x20) = FUN_1003a302c;
  *(undefined8 *)(lVar3 + 0x10) = 0;
  uVar4 = FUN_10000bbe0();
  FUN_1003a985c(&local_50,uVar4);
  lVar3 = FUN_10000d8b8();
  FUN_1003a985c(&local_50,lVar3);
  *(undefined1 *)(lVar3 + 0x10) = 0;
  uVar4 = FUN_10000f034();
  FUN_1003a985c(&local_50,uVar4);
  return local_50;
}




undefined8 FUN_1003773ac(void)

{
  byte bVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined4 uVar8;
  undefined8 local_50;
  undefined8 uStack_48;
  
  local_50 = 0;
  uStack_48 = 0;
  lVar3 = FUN_10000d8b8();
  FUN_1003a985c(&local_50,lVar3);
  *(undefined1 *)(lVar3 + 0x10) = 1;
  plVar4 = (long *)FUN_10000c458();
  FUN_1003a985c(&local_50,plVar4);
  puVar5 = (undefined8 *)(**(code **)(*plVar4 + 0x50))(plVar4);
  (**(code **)*puVar5)(puVar5,PTR_s_Ability__Alpha__A_1018595b0);
  plVar4 = (long *)FUN_10000c458();
  FUN_1003a985c(&local_50,plVar4);
  puVar5 = (undefined8 *)(**(code **)(*plVar4 + 0x50))(plVar4);
  (**(code **)*puVar5)(puVar5,PTR_s_Ability__Alpha__Dash_1018595c8);
  plVar4 = (long *)FUN_10000c458();
  FUN_1003a985c(&local_50,plVar4);
  puVar5 = (undefined8 *)(**(code **)(*plVar4 + 0x50))(plVar4);
  (**(code **)*puVar5)(puVar5,PTR_s_Ability__Alpha__B_1018595b8);
  lVar3 = FUN_10000e524();
  FUN_1003a985c(&local_50,lVar3);
  uVar6 = FUN_1010a1520();
  lVar7 = FUN_1010a0e0c(uVar6,0,"*KindredSoundBalance*",0);
  uVar8 = FUN_1003a2a20(*(undefined4 *)(lVar7 + 0x2c8));
  *(char **)(lVar3 + 0x10) = "Sound_Alpha_Ability_C_Explode";
  *(undefined2 *)(lVar3 + 0x30) = 0x1ff;
  *(undefined4 *)(lVar3 + 0x34) = 1;
  *(undefined4 *)(lVar3 + 0x3c) = uVar8;
  *(undefined4 *)(lVar3 + 0x40) = 0xffffffff;
  *(byte *)(lVar3 + 0x38) = *(byte *)(lVar3 + 0x38) & 0xf8 | 4;
  *(undefined8 *)(lVar3 + 0x48) = 0;
  lVar3 = FUN_10000e1b4();
  FUN_1003a985c(&local_50,lVar3);
  *(undefined8 *)(lVar3 + 0x40) = 0;
  *(ushort *)(lVar3 + 0x80) = *(ushort *)(lVar3 + 0x80) & 0xffec | 2;
  *(uint *)(lVar3 + 0x3c) = (uint)lVar3 & 0xffff;
  *(undefined8 *)(lVar3 + 0x20) = 0;
  *(undefined8 *)(lVar3 + 0x28) = 0x3f80000000000001;
  *(undefined4 *)(lVar3 + 0x10) = 0x1479ff8b;
  lVar3 = FUN_10000dff8();
  FUN_1003a985c(&local_50,lVar3);
  *(undefined2 *)(lVar3 + 0x28) = 0x100;
  *(undefined8 *)(lVar3 + 0x30) = 0;
  uVar8 = FUN_1004d2524("Ability03");
  uVar8 = FUN_100015208("Ability03",uVar8,0x12345678);
  *(undefined4 *)(lVar3 + 0x10) = uVar8;
  *(undefined4 *)(lVar3 + 0x20) = 0;
  lVar3 = FUN_10000ceb8();
  FUN_1003a985c(&local_50,lVar3);
  *(code **)(lVar3 + 0x20) = FUN_1003a3670;
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
  *(undefined4 *)(lVar3 + 0x50) = 0x3f800000;
  *(undefined1 *)(lVar3 + 0x54) = 0xff;
  *(undefined8 *)(lVar3 + 0x60) = 0xffffffff00000000;
  *(undefined8 *)(lVar3 + 0x58) = 0xffffffff00040000;
  *(byte *)(lVar3 + 0x6a) = bVar1 | 0x14;
  *(undefined2 *)(lVar3 + 0x68) = 0x4120;
  bVar2 = DAT_101d23a38 != '\0';
  *(code **)(lVar3 + 0x78) = FUN_1003a3684;
  *(byte *)(lVar3 + 0xa8) = *(byte *)(lVar3 + 0xa8) & 0xf0 | bVar2;
  plVar4 = (long *)FUN_10000cb8c();
  FUN_1003a985c(&local_50,plVar4);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))(plVar4);
  (**(code **)(*plVar4 + 0x38))(plVar4,"Damage",2);
  uVar6 = FUN_10000c784();
  FUN_1003a985c(&local_50,uVar6);
  lVar3 = FUN_10000e1b4();
  FUN_1003a985c(&local_50,lVar3);
  *(undefined8 *)(lVar3 + 0x40) = 0;
  *(ushort *)(lVar3 + 0x80) = *(ushort *)(lVar3 + 0x80) & 0xffec | 2;
  *(uint *)(lVar3 + 0x3c) = (uint)lVar3 & 0xffff;
  *(undefined8 *)(lVar3 + 0x20) = 0;
  *(undefined8 *)(lVar3 + 0x28) = 0x3f80000000000001;
  *(undefined4 *)(lVar3 + 0x10) = 0x30a8b8ed;
  uVar6 = FUN_10000d668();
  FUN_1003a985c(&local_50,uVar6);
  lVar3 = FUN_10000d8b8();
  FUN_1003a985c(&local_50,lVar3);
  *(undefined1 *)(lVar3 + 0x10) = 0;
  return local_50;
}




void FUN_100377720(void)

{
  FUN_1003a2678(DAT_10185a298);
  return;
}




void FUN_10037772c(void)

{
  FUN_1003b7434("Attack",0x3f,0x40);
  return;
}




void FUN_100377740(void)

{
  FUN_1003b7434("AltAttack",0x3f,0x40);
  return;
}




void FUN_100377754(void)

{
  FUN_1003b7434("CritAttack",0x41,0x42);
  return;
}




undefined8 FUN_100377768(void)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 local_40;
  undefined8 uStack_38;
  
  local_40 = 0;
  uStack_38 = 0;
  lVar2 = FUN_10000d8b8();
  FUN_1003a985c(&local_40,lVar2);
  *(undefined1 *)(lVar2 + 0x10) = 1;
  uVar3 = FUN_10000ef8c();
  FUN_1003a985c(&local_40,uVar3);
  lVar2 = FUN_10000dff8();
  FUN_1003a985c(&local_40,lVar2);
  *(undefined2 *)(lVar2 + 0x28) = 0x100;
  *(undefined8 *)(lVar2 + 0x30) = 0;
  uVar1 = FUN_1004d2524("Ability01");
  uVar1 = FUN_100015208("Ability01",uVar1,0x12345678);
  *(undefined4 *)(lVar2 + 0x10) = uVar1;
  uVar1 = FUN_1004d2524("AttackToIdle");
  uVar1 = FUN_100015208("AttackToIdle",uVar1,0x12345678);
  *(undefined4 *)(lVar2 + 0x20) = uVar1;
  lVar2 = FUN_10000ceb8();
  FUN_1003a985c(&local_40,lVar2);
  *(code **)(lVar2 + 0x20) = FUN_1003b7834;
  *(undefined8 *)(lVar2 + 0x10) = 0;
  lVar2 = FUN_10000e524();
  FUN_1003a985c(&local_40,lVar2);
  uVar3 = FUN_1010a1520();
  lVar4 = FUN_1010a0e0c(uVar3,0,"*KindredSoundBalance*",0);
  uVar1 = FUN_1003b77c4(*(undefined4 *)(lVar4 + 0x2f4));
  *(char **)(lVar2 + 0x10) = "Sound_Lyra_Ability_A";
  *(undefined2 *)(lVar2 + 0x30) = 0x1ff;
  *(undefined4 *)(lVar2 + 0x34) = 1;
  *(undefined4 *)(lVar2 + 0x3c) = uVar1;
  *(undefined4 *)(lVar2 + 0x40) = 0xffffffff;
  *(byte *)(lVar2 + 0x38) = *(byte *)(lVar2 + 0x38) & 0xf8 | 4;
  *(undefined8 *)(lVar2 + 0x48) = 0;
  lVar2 = FUN_10000f250();
  FUN_1003a985c(&local_40,lVar2);
  *(undefined4 *)(lVar2 + 0x10) = 0x43;
  FUN_1003d266c(lVar2,"CenterBody");
  lVar2 = FUN_10000d8b8();
  FUN_1003a985c(&local_40,lVar2);
  *(undefined1 *)(lVar2 + 0x10) = 0;
  uVar3 = FUN_10000f034();
  FUN_1003a985c(&local_40,uVar3);
  return local_40;
}




undefined8 FUN_100377918(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_30 = 0;
  uStack_28 = 0;
  lVar1 = FUN_10000ee30();
  FUN_1003a985c(&local_30,lVar1);
  *(char **)(lVar1 + 0x10) = "Lyra_SpiritFlame";
  lVar1 = FUN_10000c540();
  FUN_1003a985c(&local_30,lVar1);
  *(undefined **)(lVar1 + 0x10) = PTR_s_Buff_Lyra_SpiritFlame_10185adb0;
  uVar2 = FUN_10000c784();
  FUN_1003a985c(&local_30,uVar2);
  return local_30;
}




undefined8 FUN_100377990(void)

{
  byte bVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  undefined8 local_40;
  undefined8 uStack_38;
  
  local_40 = 0;
  uStack_38 = 0;
  uVar4 = FUN_10000d8b8();
  FUN_1003a985c(&local_40,uVar4);
  lVar5 = FUN_10000dff8();
  FUN_1003a985c(&local_40,lVar5);
  *(undefined2 *)(lVar5 + 0x28) = 0x100;
  *(undefined8 *)(lVar5 + 0x30) = 0;
  uVar3 = FUN_1004d2524("Ability02");
  uVar3 = FUN_100015208("Ability02",uVar3,0x12345678);
  *(undefined4 *)(lVar5 + 0x10) = uVar3;
  uVar3 = FUN_1004d2524("AttackToIdle");
  uVar3 = FUN_100015208("AttackToIdle",uVar3,0x12345678);
  *(undefined4 *)(lVar5 + 0x20) = uVar3;
  lVar5 = FUN_10000e1b4();
  FUN_1003a985c(&local_40,lVar5);
  *(undefined8 *)(lVar5 + 0x40) = 0;
  *(ushort *)(lVar5 + 0x80) = *(ushort *)(lVar5 + 0x80) & 0xffec | 2;
  *(uint *)(lVar5 + 0x3c) = (uint)lVar5 & 0xffff;
  *(undefined8 *)(lVar5 + 0x20) = 0;
  *(undefined8 *)(lVar5 + 0x28) = 1;
  *(undefined4 *)(lVar5 + 0x10) = 0x3ea9ae38;
  lVar5 = FUN_10000ceb8();
  FUN_1003a985c(&local_40,lVar5);
  *(code **)(lVar5 + 0x20) = FUN_1003b7848;
  *(undefined8 *)(lVar5 + 0x10) = 0;
  lVar5 = FUN_1003e10f0();
  bVar1 = *(byte *)(lVar5 + 0xe5);
  lVar5 = FUN_10000ed74();
  FUN_1003a985c(&local_40,lVar5);
  *(undefined8 *)(lVar5 + 0x18) = 0;
  *(undefined1 *)(lVar5 + 0x20) = 1;
  *(undefined8 *)(lVar5 + 0x24) = 0;
  *(undefined8 *)(lVar5 + 0x34) = 0;
  *(undefined8 *)(lVar5 + 0x2c) = 0;
  *(undefined4 *)(lVar5 + 0x3c) = 0;
  *(undefined8 *)(lVar5 + 0x48) = 0xbf800000c0000000;
  *(undefined8 *)(lVar5 + 0x40) = 0xbf800000bf800000;
  *(undefined4 *)(lVar5 + 0x50) = 0x3f800000;
  *(undefined1 *)(lVar5 + 0x54) = 0xff;
  *(undefined8 *)(lVar5 + 0x60) = 0xffffffff00000000;
  *(undefined8 *)(lVar5 + 0x58) = 0xffffffff00040000;
  *(byte *)(lVar5 + 0x6a) = bVar1 | 0x14;
  *(undefined2 *)(lVar5 + 0x68) = 0x4120;
  bVar2 = DAT_101d23a38 != '\0';
  *(code **)(lVar5 + 0x78) = FUN_1003b785c;
  *(byte *)(lVar5 + 0xa8) = *(byte *)(lVar5 + 0xa8) & 0xf0 | bVar2;
  lVar5 = FUN_10000bd3c();
  FUN_1003a985c(&local_40,lVar5);
  *(undefined **)(lVar5 + 0x10) = PTR_s_Buff_Lyra_WallSlow_10185adb8;
  *(code **)(lVar5 + 0x30) = FUN_1003b7870;
  *(undefined2 *)(lVar5 + 0x68) = 1;
  *(byte *)(lVar5 + 0x6a) = *(byte *)(lVar5 + 0x6a) & 0xfe;
  lVar5 = FUN_10000bd3c();
  FUN_1003a985c(&local_40,lVar5);
  *(undefined **)(lVar5 + 0x10) = PTR_s_Buff_Lyra_ImmuneToWall_10185adc0;
  *(code **)(lVar5 + 0x30) = FUN_1003b7884;
  *(undefined2 *)(lVar5 + 0x68) = 1;
  *(byte *)(lVar5 + 0x6a) = *(byte *)(lVar5 + 0x6a) & 0xfe;
  uVar4 = FUN_10000c784();
  FUN_1003a985c(&local_40,uVar4);
  plVar6 = (long *)FUN_10000f300();
  FUN_1003a985c(&local_40,plVar6);
  (**(code **)(*plVar6 + 0x50))(plVar6,"*Lyra_Bulwark*",1);
  lVar5 = FUN_10000d8b8();
  FUN_1003a985c(&local_40,lVar5);
  *(undefined1 *)(lVar5 + 0x10) = 0;
  uVar4 = FUN_10000f034();
  FUN_1003a985c(&local_40,uVar4);
  return local_40;
}




undefined8 FUN_100377c28(void)

{
  undefined4 uVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
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
  lVar2 = FUN_10000dff8();
  FUN_1003a985c(&local_40,lVar2);
  *(undefined2 *)(lVar2 + 0x28) = 0x100;
  *(undefined8 *)(lVar2 + 0x30) = 0;
  uVar1 = FUN_1004d2524("Ability03_Depart");
  uVar1 = FUN_100015208("Ability03_Depart",uVar1,0x12345678);
  *(undefined4 *)(lVar2 + 0x10) = uVar1;
  *(undefined4 *)(lVar2 + 0x20) = 0;
  lVar2 = FUN_10000e1b4();
  FUN_1003a985c(&local_40,lVar2);
  *(undefined8 *)(lVar2 + 0x40) = 0;
  *(ushort *)(lVar2 + 0x80) = *(ushort *)(lVar2 + 0x80) & 0xffec | 2;
  *(uint *)(lVar2 + 0x3c) = (uint)lVar2 & 0xffff;
  *(undefined8 *)(lVar2 + 0x20) = 0;
  *(undefined8 *)(lVar2 + 0x28) = 1;
  *(undefined4 *)(lVar2 + 0x10) = 0xb7ce2836;
  lVar2 = FUN_10000c3b0();
  FUN_1003a985c(&local_40,lVar2);
  *(code **)(lVar2 + 0x10) = FUN_1003b7898;
  plVar3 = (long *)FUN_10000f300();
  FUN_1003a985c(&local_40,plVar3);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x50))(plVar3,"*Lyra_Portal*",0);
  (**(code **)(*plVar3 + 0x20))(plVar3,FUN_1003b7a30);
  plVar3 = (long *)FUN_10000f300();
  FUN_1003a985c(&local_40,plVar3);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x50))(plVar3,"*Lyra_Portal*",0);
  (**(code **)(*plVar3 + 0x20))(plVar3,FUN_1003b7af4);
  lVar2 = FUN_10000ceb8();
  FUN_1003a985c(&local_40,lVar2);
  *(code **)(lVar2 + 0x20) = FUN_1003b7cac;
  *(undefined8 *)(lVar2 + 0x10) = 0;
  plVar3 = (long *)FUN_10000f748();
  FUN_1003a985c(&local_40,plVar3);
  (**(code **)(*plVar3 + 0x50))(plVar3,FUN_1003b7c3c);
  lVar2 = FUN_10000e524();
  FUN_1003a985c(&local_40,lVar2);
  uVar4 = FUN_1010a1520();
  lVar5 = FUN_1010a0e0c(uVar4,0,"*KindredSoundBalance*",0);
  uVar1 = FUN_1003b77c4(*(undefined4 *)(lVar5 + 0x300));
  *(char **)(lVar2 + 0x10) = "Sound_Lyra_Ability_C_Start";
  *(undefined2 *)(lVar2 + 0x30) = 0x1ff;
  *(undefined4 *)(lVar2 + 0x34) = 1;
  *(undefined4 *)(lVar2 + 0x3c) = uVar1;
  *(undefined4 *)(lVar2 + 0x40) = 0xffffffff;
  *(byte *)(lVar2 + 0x38) = *(byte *)(lVar2 + 0x38) & 0xf8 | 4;
  *(undefined8 *)(lVar2 + 0x48) = 0;
  uVar4 = FUN_10000bb2c();
  FUN_1003a985c(&local_40,uVar4);
  lVar2 = FUN_10000bd3c();
  FUN_1003a985c(&local_40,lVar2);
  *(undefined **)(lVar2 + 0x10) = PTR_s_Buff_Lyra_PortalRecentlyUsed_10185adc8;
  *(code **)(lVar2 + 0x30) = FUN_1003b7cc0;
  *(undefined2 *)(lVar2 + 0x68) = 1;
  *(byte *)(lVar2 + 0x6a) = *(byte *)(lVar2 + 0x6a) & 0xfe;
  lVar2 = FUN_10000bd3c();
  FUN_1003a985c(&local_40,lVar2);
  *(undefined **)(lVar2 + 0x10) = PTR_s_Buff_Lyra_PortalSpeedBoost_10185add0;
  *(code **)(lVar2 + 0x30) = FUN_1003b7cd4;
  *(undefined2 *)(lVar2 + 0x68) = 1;
  *(byte *)(lVar2 + 0x6a) = *(byte *)(lVar2 + 0x6a) & 0xfe;
  lVar2 = FUN_10000bd3c();
  FUN_1003a985c(&local_40,lVar2);
  *(undefined **)(lVar2 + 0x10) = PTR_s_Buff_Lyra_PortalExitAnimOverride_10185add8;
  *(undefined4 *)(lVar2 + 0x18) = 0x3f000000;
  *(undefined2 *)(lVar2 + 0x68) = 1;
  *(byte *)(lVar2 + 0x6a) = *(byte *)(lVar2 + 0x6a) & 0xfe;
  uVar4 = FUN_10000c784();
  FUN_1003a985c(&local_40,uVar4);
  lVar2 = FUN_10000d8b8();
  FUN_1003a985c(&local_40,lVar2);
  *(undefined1 *)(lVar2 + 0x10) = 0;
  uVar4 = FUN_10000f034();
  FUN_1003a985c(&local_40,uVar4);
  return local_40;
}




void FUN_100377f84(void)

{
  FUN_1003b7f60("Attack","Effect_Ozo_AA",FUN_1003a3a5c);
  return;
}




void FUN_100377fa0(void)

{
  FUN_1003b7f60("AltAttack","Effect_Ozo_AA_Alt",FUN_1003a3a5c);
  return;
}




void FUN_100377fbc(void)

{
  FUN_1003b7f60("CritAttack","Effect_Ozo_AA_Crit",FUN_1003a3acc);
  return;
}




undefined8 FUN_100377fd8(void)

{
  byte bVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  undefined8 local_50;
  undefined8 uStack_48;
  
  local_50 = 0;
  uStack_48 = 0;
  lVar3 = FUN_10000d2d0();
  FUN_1003a985c(&local_50,lVar3);
  *(undefined **)(lVar3 + 0x10) = PTR_s_Buff_Ozo_Rolling_10185ae30;
  *(undefined4 *)(lVar3 + 0x18) = 0x400;
  uVar4 = FUN_10000d8b8();
  FUN_1003a985c(&local_50,uVar4);
  lVar3 = FUN_10000ef8c();
  FUN_1003a985c(&local_50,lVar3);
  *(byte *)(lVar3 + 0x10) = *(byte *)(lVar3 + 0x10) & 0xe7 | 4;
  lVar3 = FUN_10000dff8();
  FUN_1003a985c(&local_50,lVar3);
  *(undefined2 *)(lVar3 + 0x28) = 0x100;
  *(undefined8 *)(lVar3 + 0x30) = 0;
  uVar2 = FUN_1004d2524("Ability01_First");
  uVar2 = FUN_100015208("Ability01_First",uVar2,0x12345678);
  *(undefined4 *)(lVar3 + 0x10) = uVar2;
  uVar2 = FUN_1004d2524("AttackToIdle");
  uVar2 = FUN_100015208("AttackToIdle",uVar2,0x12345678);
  *(undefined4 *)(lVar3 + 0x20) = uVar2;
  lVar3 = FUN_10000e1b4();
  FUN_1003a985c(&local_50,lVar3);
  *(undefined8 *)(lVar3 + 0x40) = 0;
  *(ushort *)(lVar3 + 0x80) = *(ushort *)(lVar3 + 0x80) & 0xffec | 2;
  *(uint *)(lVar3 + 0x3c) = (uint)lVar3 & 0xffff;
  *(undefined8 *)(lVar3 + 0x20) = 0;
  *(undefined8 *)(lVar3 + 0x28) = 1;
  *(undefined4 *)(lVar3 + 0x10) = 0x4f2fb06d;
  lVar3 = FUN_10000e1b4();
  FUN_1003a985c(&local_50,lVar3);
  *(undefined8 *)(lVar3 + 0x20) = 0;
  *(undefined8 *)(lVar3 + 0x28) = 0x3e4ccccd00000003;
  *(undefined8 *)(lVar3 + 0x40) = 0;
  *(ushort *)(lVar3 + 0x80) = *(ushort *)(lVar3 + 0x80) & 0xffef | 3;
  *(uint *)(lVar3 + 0x3c) = (uint)lVar3 & 0xffff;
  *(undefined4 *)(lVar3 + 0x10) = 0x2b7c4d84;
  *(char **)(lVar3 + 0x18) = "Bone_Ring";
  lVar3 = FUN_10000e524();
  FUN_1003a985c(&local_50,lVar3);
  uVar4 = FUN_1010a1520();
  lVar5 = FUN_1010a0e0c(uVar4,0,"*KindredSoundBalance*",0);
  uVar2 = FUN_1003b81e8(*(undefined4 *)(lVar5 + 0x290));
  *(char **)(lVar3 + 0x10) = "Sound_Ozo_Ability_A_Attack_1";
  *(undefined2 *)(lVar3 + 0x30) = 0x1ff;
  *(undefined4 *)(lVar3 + 0x34) = 1;
  *(undefined4 *)(lVar3 + 0x3c) = uVar2;
  *(undefined4 *)(lVar3 + 0x40) = 0xffffffff;
  *(byte *)(lVar3 + 0x38) = *(byte *)(lVar3 + 0x38) & 0xf8 | 4;
  *(undefined8 *)(lVar3 + 0x48) = 0;
  lVar3 = FUN_10000ceb8();
  FUN_1003a985c(&local_50,lVar3);
  *(undefined4 *)(lVar3 + 0x2c) = 0x3e4ccccd;
  *(undefined8 *)(lVar3 + 0x10) = 0;
  lVar3 = FUN_10000e524();
  FUN_1003a985c(&local_50,lVar3);
  uVar4 = FUN_1010a1520();
  lVar5 = FUN_1010a0e0c(uVar4,0,"*KindredSoundBalance*",0);
  uVar2 = FUN_1003b81e8(*(undefined4 *)(lVar5 + 0x290));
  *(char **)(lVar3 + 0x10) = "Sound_Ozo_Ability_A_Impact_1";
  *(undefined2 *)(lVar3 + 0x30) = 0x1ff;
  *(undefined4 *)(lVar3 + 0x34) = 1;
  *(undefined4 *)(lVar3 + 0x3c) = uVar2;
  *(undefined4 *)(lVar3 + 0x40) = 0xffffffff;
  *(byte *)(lVar3 + 0x38) = *(byte *)(lVar3 + 0x38) & 0xf8 | 4;
  *(undefined8 *)(lVar3 + 0x48) = 0;
  lVar3 = FUN_1003e10f0();
  bVar1 = *(byte *)(lVar3 + 0xe5);
  uVar4 = FUN_10000bc94();
  FUN_1003a985c(&local_50,uVar4);
  plVar6 = (long *)FUN_10000cb8c();
  FUN_1003a985c(&local_50,plVar6);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x50))(plVar6);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x38))(plVar6,"FirstHitDamage_Primary",0);
  (**(code **)(*plVar6 + 0x70))(plVar6,1);
  uVar4 = FUN_10000c784();
  FUN_1003a985c(&local_50,uVar4);
  lVar3 = FUN_10000ecbc();
  FUN_1003a985c(&local_50,lVar3);
  *(code **)(lVar3 + 0x70) = FUN_1003b8590;
  *(code **)(lVar3 + 0x78) = FUN_1003b85b8;
  *(undefined4 *)(lVar3 + 0x88) = 0x3f800000;
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
  *(byte *)(lVar3 + 0x8c) = *(byte *)(lVar3 + 0x8c) | 1;
  plVar6 = (long *)FUN_10000cb8c();
  FUN_1003a985c(&local_50,plVar6);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x50))(plVar6);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x38))(plVar6,"FirstHitDamage",0);
  (**(code **)(*plVar6 + 0x70))(plVar6,1);
  uVar4 = FUN_10000bc94();
  FUN_1003a985c(&local_50,uVar4);
  lVar3 = FUN_10000c3b0();
  FUN_1003a985c(&local_50,lVar3);
  *(code **)(lVar3 + 0x10) = FUN_1003b824c;
  uVar4 = FUN_10000c784();
  FUN_1003a985c(&local_50,uVar4);
  uVar4 = FUN_10000bb2c();
  FUN_1003a985c(&local_50,uVar4);
  lVar3 = FUN_10000bd3c();
  FUN_1003a985c(&local_50,lVar3);
  *(undefined **)(lVar3 + 0x10) = PTR_s_Buff_Ozo_A2_Available_10185ae38;
  *(code **)(lVar3 + 0x30) = FUN_1003b8680;
  *(undefined2 *)(lVar3 + 0x68) = 1;
  *(byte *)(lVar3 + 0x6a) = *(byte *)(lVar3 + 0x6a) & 0xfe;
  uVar4 = FUN_10000c784();
  FUN_1003a985c(&local_50,uVar4);
  lVar3 = FUN_10000e7fc();
  FUN_1003a985c(&local_50,lVar3);
  *(undefined4 *)(lVar3 + 0x10) = 0x3f000000;
  lVar3 = FUN_10000d8b8();
  FUN_1003a985c(&local_50,lVar3);
  *(undefined1 *)(lVar3 + 0x10) = 0;
  return local_50;
}




undefined8 FUN_10037848c(void)

{
  undefined4 uVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  undefined4 local_70 [2];
  undefined4 local_68;
  undefined4 local_60 [2];
  undefined4 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  local_50 = 0;
  uStack_48 = 0;
  lVar2 = FUN_10000d2d0();
  FUN_1003a985c(&local_50,lVar2);
  *(undefined **)(lVar2 + 0x10) = PTR_s_Buff_Ozo_Rolling_10185ae30;
  *(undefined4 *)(lVar2 + 0x18) = 0x400;
  plVar3 = (long *)FUN_10000f698();
  FUN_1003a985c(&local_50,plVar3);
  (**(code **)(*plVar3 + 0x50))
            (plVar3,PTR_s_Buff_Ozo_A2_Available_10185ae38,PTR_s_Buff_Ozo_A3_Available_10185ae40);
  uVar4 = FUN_10000d8b8();
  FUN_1003a985c(&local_50,uVar4);
  lVar2 = FUN_10000ef8c();
  FUN_1003a985c(&local_50,lVar2);
  *(byte *)(lVar2 + 0x10) = *(byte *)(lVar2 + 0x10) & 0xe0 | 10;
  lVar2 = FUN_10000e1b4();
  FUN_1003a985c(&local_50,lVar2);
  *(undefined8 *)(lVar2 + 0x40) = 0;
  *(ushort *)(lVar2 + 0x80) = *(ushort *)(lVar2 + 0x80) & 0xffef | 3;
  *(uint *)(lVar2 + 0x3c) = (uint)lVar2 & 0xffff;
  *(undefined8 *)(lVar2 + 0x20) = 0;
  *(undefined8 *)(lVar2 + 0x28) = 1;
  *(undefined4 *)(lVar2 + 0x10) = 0x4c2fabb4;
  lVar2 = FUN_10000e1b4();
  FUN_1003a985c(&local_50,lVar2);
  *(undefined8 *)(lVar2 + 0x20) = 0;
  *(undefined8 *)(lVar2 + 0x28) = 0x3ecccccd00000003;
  *(undefined8 *)(lVar2 + 0x40) = 0;
  *(ushort *)(lVar2 + 0x80) = *(ushort *)(lVar2 + 0x80) & 0xffef | 3;
  *(uint *)(lVar2 + 0x3c) = (uint)lVar2 & 0xffff;
  *(undefined4 *)(lVar2 + 0x10) = 0x2b7c4d84;
  *(char **)(lVar2 + 0x18) = "Bone_Ring";
  lVar2 = FUN_10000dff8();
  FUN_1003a985c(&local_50,lVar2);
  *(undefined2 *)(lVar2 + 0x28) = 0x100;
  *(undefined8 *)(lVar2 + 0x30) = 0;
  uVar1 = FUN_1004d2524("Ability01_Second");
  uVar1 = FUN_100015208("Ability01_Second",uVar1,0x12345678);
  *(undefined4 *)(lVar2 + 0x10) = uVar1;
  uVar1 = FUN_1004d2524("AttackToIdle");
  uVar1 = FUN_100015208("AttackToIdle",uVar1,0x12345678);
  *(undefined4 *)(lVar2 + 0x20) = uVar1;
  lVar2 = FUN_10000e524();
  FUN_1003a985c(&local_50,lVar2);
  uVar4 = FUN_1010a1520();
  lVar5 = FUN_1010a0e0c(uVar4,0,"*KindredSoundBalance*",0);
  uVar1 = FUN_1003b81e8(*(undefined4 *)(lVar5 + 0x290));
  *(char **)(lVar2 + 0x10) = "Sound_Ozo_Ability_A_Attack_2";
  *(undefined2 *)(lVar2 + 0x30) = 0x1ff;
  *(undefined4 *)(lVar2 + 0x34) = 1;
  *(undefined4 *)(lVar2 + 0x3c) = uVar1;
  *(undefined4 *)(lVar2 + 0x40) = 0xffffffff;
  *(byte *)(lVar2 + 0x38) = *(byte *)(lVar2 + 0x38) & 0xf8 | 4;
  *(undefined8 *)(lVar2 + 0x48) = 0;
  lVar2 = FUN_10000ceb8();
  FUN_1003a985c(&local_50,lVar2);
  *(undefined4 *)(lVar2 + 0x2c) = 0x3dcccccd;
  *(undefined8 *)(lVar2 + 0x10) = 0;
  plVar3 = (long *)FUN_10000cd5c();
  FUN_1003a985c(&local_50,plVar3);
  local_60[0] = 0x40000000;
  local_58 = 1;
  plVar3 = (long *)(**(code **)(*plVar3 + 0x98))(plVar3,local_60,0);
  local_70[0] = 0x3e99999a;
  local_68 = 1;
  plVar3 = (long *)(**(code **)(*plVar3 + 0xa8))(plVar3,local_70);
  plVar3 = (long *)(**(code **)(*plVar3 + 0xb0))(plVar3,1);
  (**(code **)(*plVar3 + 0xb8))(0x41700000);
  lVar2 = FUN_10000ceb8();
  FUN_1003a985c(&local_50,lVar2);
  *(undefined4 *)(lVar2 + 0x2c) = 0x3dcccccd;
  *(undefined8 *)(lVar2 + 0x10) = 0;
  lVar2 = FUN_10000e524();
  FUN_1003a985c(&local_50,lVar2);
  uVar4 = FUN_1010a1520();
  lVar5 = FUN_1010a0e0c(uVar4,0,"*KindredSoundBalance*",0);
  uVar1 = FUN_1003b81e8(*(undefined4 *)(lVar5 + 0x290));
  *(char **)(lVar2 + 0x10) = "Sound_Ozo_Ability_A_Impact_2";
  *(undefined2 *)(lVar2 + 0x30) = 0x1ff;
  *(undefined4 *)(lVar2 + 0x34) = 1;
  *(undefined4 *)(lVar2 + 0x3c) = uVar1;
  *(undefined4 *)(lVar2 + 0x40) = 0xffffffff;
  *(byte *)(lVar2 + 0x38) = *(byte *)(lVar2 + 0x38) & 0xf8 | 4;
  *(undefined8 *)(lVar2 + 0x48) = 0;
  uVar4 = FUN_10000bc94();
  FUN_1003a985c(&local_50,uVar4);
  plVar3 = (long *)FUN_10000cb8c();
  FUN_1003a985c(&local_50,plVar3);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x50))(plVar3);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))(plVar3,"SecondHitDamage",0);
  (**(code **)(*plVar3 + 0x70))(plVar3,1);
  lVar2 = FUN_10000c3b0();
  FUN_1003a985c(&local_50,lVar2);
  *(code **)(lVar2 + 0x10) = FUN_1003b824c;
  uVar4 = FUN_10000c784();
  FUN_1003a985c(&local_50,uVar4);
  lVar2 = FUN_10000ceb8();
  FUN_1003a985c(&local_50,lVar2);
  *(undefined4 *)(lVar2 + 0x2c) = 0x3e4ccccd;
  *(undefined8 *)(lVar2 + 0x10) = 0;
  uVar4 = FUN_10000f9c0();
  FUN_1003a985c(&local_50,uVar4);
  lVar2 = FUN_10000e7fc();
  FUN_1003a985c(&local_50,lVar2);
  *(undefined4 *)(lVar2 + 0x10) = 0x3f000000;
  lVar2 = FUN_10000d8b8();
  FUN_1003a985c(&local_50,lVar2);
  *(undefined1 *)(lVar2 + 0x10) = 0;
  return local_50;
}




undefined8 FUN_1003788e0(void)

{
  byte bVar1;
  bool bVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  undefined8 local_50;
  undefined8 uStack_48;
  
  local_50 = 0;
  uStack_48 = 0;
  lVar4 = FUN_10000d2d0();
  FUN_1003a985c(&local_50,lVar4);
  *(undefined **)(lVar4 + 0x10) = PTR_s_Buff_Ozo_Rolling_10185ae30;
  *(undefined4 *)(lVar4 + 0x18) = 0x400;
  uVar5 = FUN_10000d8b8();
  FUN_1003a985c(&local_50,uVar5);
  lVar4 = FUN_10000ef8c();
  FUN_1003a985c(&local_50,lVar4);
  *(byte *)(lVar4 + 0x10) = *(byte *)(lVar4 + 0x10) & 0xe7 | 4;
  lVar4 = FUN_10000dff8();
  FUN_1003a985c(&local_50,lVar4);
  *(undefined2 *)(lVar4 + 0x28) = 0x100;
  *(undefined8 *)(lVar4 + 0x30) = 0;
  uVar3 = FUN_1004d2524("Ability01_Third");
  uVar3 = FUN_100015208("Ability01_Third",uVar3,0x12345678);
  *(undefined4 *)(lVar4 + 0x10) = uVar3;
  uVar3 = FUN_1004d2524("AttackToIdle");
  uVar3 = FUN_100015208("AttackToIdle",uVar3,0x12345678);
  *(undefined4 *)(lVar4 + 0x20) = uVar3;
  lVar4 = FUN_10000e1b4();
  FUN_1003a985c(&local_50,lVar4);
  *(undefined8 *)(lVar4 + 0x20) = 0;
  *(undefined8 *)(lVar4 + 0x28) = 0x3ecccccd00000003;
  *(undefined8 *)(lVar4 + 0x40) = 0;
  *(ushort *)(lVar4 + 0x80) = *(ushort *)(lVar4 + 0x80) & 0xffef | 3;
  *(uint *)(lVar4 + 0x3c) = (uint)lVar4 & 0xffff;
  *(undefined4 *)(lVar4 + 0x10) = 0x92313fa2;
  *(char **)(lVar4 + 0x18) = "Bone_Ring";
  lVar4 = FUN_10000e524();
  FUN_1003a985c(&local_50,lVar4);
  uVar5 = FUN_1010a1520();
  lVar6 = FUN_1010a0e0c(uVar5,0,"*KindredSoundBalance*",0);
  uVar3 = FUN_1003b81e8(*(undefined4 *)(lVar6 + 0x290));
  *(char **)(lVar4 + 0x10) = "Sound_Ozo_Ability_A_Attack_3";
  *(undefined2 *)(lVar4 + 0x30) = 0x1ff;
  *(undefined4 *)(lVar4 + 0x34) = 1;
  *(undefined4 *)(lVar4 + 0x3c) = uVar3;
  *(undefined4 *)(lVar4 + 0x40) = 0xffffffff;
  *(byte *)(lVar4 + 0x38) = *(byte *)(lVar4 + 0x38) & 0xf8 | 4;
  *(undefined8 *)(lVar4 + 0x48) = 0;
  lVar4 = FUN_10000ceb8();
  FUN_1003a985c(&local_50,lVar4);
  *(undefined4 *)(lVar4 + 0x2c) = 0x3e4ccccd;
  *(undefined8 *)(lVar4 + 0x10) = 0;
  lVar4 = FUN_10000e1b4();
  FUN_1003a985c(&local_50,lVar4);
  *(undefined8 *)(lVar4 + 0x40) = 0;
  *(ushort *)(lVar4 + 0x80) = *(ushort *)(lVar4 + 0x80) & 0xffec | 2;
  *(uint *)(lVar4 + 0x3c) = (uint)lVar4 & 0xffff;
  *(undefined8 *)(lVar4 + 0x20) = 0;
  *(undefined8 *)(lVar4 + 0x28) = 1;
  *(undefined4 *)(lVar4 + 0x10) = 0x4d2fad47;
  lVar4 = FUN_10000e524();
  FUN_1003a985c(&local_50,lVar4);
  uVar5 = FUN_1010a1520();
  lVar6 = FUN_1010a0e0c(uVar5,0,"*KindredSoundBalance*",0);
  uVar3 = FUN_1003b81e8(*(undefined4 *)(lVar6 + 0x290));
  *(char **)(lVar4 + 0x10) = "Sound_Ozo_Ability_A_Impact_3";
  *(undefined2 *)(lVar4 + 0x30) = 0x1ff;
  *(undefined4 *)(lVar4 + 0x34) = 1;
  *(undefined4 *)(lVar4 + 0x3c) = uVar3;
  *(undefined4 *)(lVar4 + 0x40) = 0xffffffff;
  *(byte *)(lVar4 + 0x38) = *(byte *)(lVar4 + 0x38) & 0xf8 | 4;
  *(undefined8 *)(lVar4 + 0x48) = 0;
  lVar4 = FUN_1003e10f0();
  bVar1 = *(byte *)(lVar4 + 0xe5);
  uVar5 = FUN_10000bc94();
  FUN_1003a985c(&local_50,uVar5);
  plVar7 = (long *)FUN_10000cb8c();
  FUN_1003a985c(&local_50,plVar7);
  plVar7 = (long *)(**(code **)(*plVar7 + 0x50))(plVar7);
  plVar7 = (long *)(**(code **)(*plVar7 + 0x38))(plVar7,"ThirdHitDamage_Primary",0);
  (**(code **)(*plVar7 + 0x70))(plVar7,1);
  uVar5 = FUN_10000c784();
  FUN_1003a985c(&local_50,uVar5);
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
  *(undefined4 *)(lVar4 + 0x50) = 0x3f800000;
  *(undefined1 *)(lVar4 + 0x54) = 0xff;
  *(undefined8 *)(lVar4 + 0x60) = 0xffffffff00000000;
  *(undefined8 *)(lVar4 + 0x58) = 0xffffffff00040000;
  *(byte *)(lVar4 + 0x6a) = bVar1 | 0x14;
  *(undefined2 *)(lVar4 + 0x68) = 0x4120;
  bVar2 = DAT_101d23a38 != '\0';
  *(undefined4 *)(lVar4 + 0xa4) = 0;
  *(byte *)(lVar4 + 0xa8) = *(byte *)(lVar4 + 0xa8) & 0xf0 | bVar2 | 4;
  *(code **)(lVar4 + 0x90) = FUN_1003b8694;
  plVar7 = (long *)FUN_10000cb8c();
  FUN_1003a985c(&local_50,plVar7);
  plVar7 = (long *)(**(code **)(*plVar7 + 0x50))(plVar7);
  plVar7 = (long *)(**(code **)(*plVar7 + 0x38))(plVar7,"ThirdHitDamage",0);
  (**(code **)(*plVar7 + 0x70))(plVar7,1);
  uVar5 = FUN_10000bc94();
  FUN_1003a985c(&local_50,uVar5);
  lVar4 = FUN_10000c3b0();
  FUN_1003a985c(&local_50,lVar4);
  *(code **)(lVar4 + 0x10) = FUN_1003b824c;
  uVar5 = FUN_10000c784();
  FUN_1003a985c(&local_50,uVar5);
  uVar5 = FUN_10000bb2c();
  FUN_1003a985c(&local_50,uVar5);
  lVar4 = FUN_10000c540();
  FUN_1003a985c(&local_50,lVar4);
  *(undefined **)(lVar4 + 0x10) = PTR_s_Buff_Ozo_A3_Available_10185ae40;
  uVar5 = FUN_10000c784();
  FUN_1003a985c(&local_50,uVar5);
  lVar4 = FUN_10000ceb8();
  FUN_1003a985c(&local_50,lVar4);
  *(undefined4 *)(lVar4 + 0x2c) = 0x3e4ccccd;
  *(undefined8 *)(lVar4 + 0x10) = 0;
  lVar4 = FUN_10000e7fc();
  FUN_1003a985c(&local_50,lVar4);
  *(undefined4 *)(lVar4 + 0x10) = 0x3f000000;
  lVar4 = FUN_10000d8b8();
  FUN_1003a985c(&local_50,lVar4);
  *(undefined1 *)(lVar4 + 0x10) = 0;
  return local_50;
}




undefined8 FUN_100378da4(void)

{
  long lVar1;
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_30 = 0;
  uStack_28 = 0;
  lVar1 = FUN_10000d2d0();
  FUN_1003a985c(&local_30,lVar1);
  *(undefined **)(lVar1 + 0x10) = PTR_s_Buff_Ozo_Rolling_10185ae30;
  *(undefined4 *)(lVar1 + 0x18) = 0x400;
  FUN_1003b8fac(&local_30,0);
  return local_30;
}




undefined8 FUN_100378e00(void)

{
  byte bVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined4 uVar5;
  undefined8 local_40;
  undefined8 uStack_38;
  
  local_40 = 0;
  uStack_38 = 0;
  lVar2 = FUN_10000d2d0();
  FUN_1003a985c(&local_40,lVar2);
  *(undefined **)(lVar2 + 0x10) = PTR_s_Buff_Ozo_Rolling_10185ae30;
  *(undefined4 *)(lVar2 + 0x18) = 0x400;
  lVar2 = FUN_10000c3b0();
  FUN_1003a985c(&local_40,lVar2);
  *(code **)(lVar2 + 0x10) = FUN_1003b976c;
  lVar2 = FUN_10000e524();
  FUN_1003a985c(&local_40,lVar2);
  uVar3 = FUN_1010a1520();
  lVar4 = FUN_1010a0e0c(uVar3,0,"*KindredSoundBalance*",0);
  uVar5 = FUN_1003b81e8(*(undefined4 *)(lVar4 + 0x298));
  *(char **)(lVar2 + 0x10) = "build://Sounds/UI.assetbundle/sfx__social_cheers.mp3";
  *(undefined2 *)(lVar2 + 0x30) = 0x1ff;
  *(undefined4 *)(lVar2 + 0x34) = 1;
  *(undefined4 *)(lVar2 + 0x3c) = uVar5;
  *(undefined4 *)(lVar2 + 0x40) = 0xffffffff;
  *(byte *)(lVar2 + 0x38) = *(byte *)(lVar2 + 0x38) & 0xf8 | 5;
  *(undefined8 *)(lVar2 + 0x48) = 0;
  lVar2 = FUN_1003e10f0();
  bVar1 = *(byte *)(lVar2 + 0xe5);
  lVar2 = FUN_10000eaac();
  FUN_1003a985c(&local_40,lVar2);
  *(undefined **)(lVar2 + 0x78) = PTR_s_Buff_Ozo_BounceTarget_10185ae80;
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
  *(undefined8 *)(lVar2 + 0x58) = 0xffffffff00000000;
  *(byte *)(lVar2 + 0x6a) = bVar1 | 0x14;
  *(undefined2 *)(lVar2 + 0x68) = 0x4170;
  *(byte *)(lVar2 + 0x80) = *(byte *)(lVar2 + 0x80) & 0xfc | DAT_101d23a38 != '\0';
  lVar2 = FUN_10000c540();
  FUN_1003a985c(&local_40,lVar2);
  *(undefined **)(lVar2 + 0x10) = PTR_s_Buff_Ozo_BounceTarget_10185ae80;
  uVar3 = FUN_10000c784();
  FUN_1003a985c(&local_40,uVar3);
  uVar3 = FUN_10000bb2c();
  FUN_1003a985c(&local_40,uVar3);
  lVar2 = FUN_10000c540();
  FUN_1003a985c(&local_40,lVar2);
  *(undefined **)(lVar2 + 0x10) = PTR_s_Buff_Ozo_BounceAvailable_10185ae78;
  lVar2 = FUN_10000bd3c();
  FUN_1003a985c(&local_40,lVar2);
  *(undefined **)(lVar2 + 0x10) = PTR_s_Buff_Ozo_BounceQueued_10185ae60;
  *(undefined4 *)(lVar2 + 0x18) = 0x40a00000;
  *(undefined2 *)(lVar2 + 0x68) = 1;
  *(byte *)(lVar2 + 0x6a) = *(byte *)(lVar2 + 0x6a) & 0xfe;
  uVar3 = FUN_10000c784();
  FUN_1003a985c(&local_40,uVar3);
  uVar3 = FUN_10000bc94();
  FUN_1003a985c(&local_40,uVar3);
  lVar2 = FUN_10000bd3c();
  FUN_1003a985c(&local_40,lVar2);
  *(undefined **)(lVar2 + 0x10) = PTR_s_Buff_Ozo_NextBounceTarget_10185ae68;
  *(undefined4 *)(lVar2 + 0x18) = 0x40a00000;
  *(undefined2 *)(lVar2 + 0x68) = 1;
  *(byte *)(lVar2 + 0x6a) = *(byte *)(lVar2 + 0x6a) & 0xfe;
  uVar3 = FUN_10000c784();
  FUN_1003a985c(&local_40,uVar3);
  return local_40;
}




undefined8 FUN_10037907c(void)

{
  undefined8 local_20;
  undefined8 uStack_18;
  
  local_20 = 0;
  uStack_18 = 0;
  FUN_1003b8fac(&local_20,1);
  return local_20;
}




undefined8 FUN_1003790a8(void)

{
  undefined8 local_20;
  undefined8 uStack_18;
  
  local_20 = 0;
  uStack_18 = 0;
  FUN_1003b8fac(&local_20,2);
  return local_20;
}




undefined8 FUN_1003790d4(void)

{
  byte bVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 local_40;
  undefined8 uStack_38;
  
  local_40 = 0;
  uStack_38 = 0;
  uVar3 = FUN_10000d8b8();
  FUN_1003a985c(&local_40,uVar3);
  lVar4 = FUN_10000dff8();
  FUN_1003a985c(&local_40,lVar4);
  *(undefined2 *)(lVar4 + 0x28) = 0;
  *(undefined8 *)(lVar4 + 0x30) = 0;
  uVar2 = FUN_1004d2524("Ability02_Land");
  uVar2 = FUN_100015208("Ability02_Land",uVar2,0x12345678);
  *(undefined4 *)(lVar4 + 0x10) = uVar2;
  uVar2 = FUN_1004d2524("AttackToIdleCombat");
  uVar2 = FUN_100015208("AttackToIdleCombat",uVar2,0x12345678);
  *(undefined4 *)(lVar4 + 0x20) = uVar2;
  lVar4 = FUN_1003e10f0();
  bVar1 = *(byte *)(lVar4 + 0xe5);
  lVar4 = FUN_10000e1b4();
  FUN_1003a985c(&local_40,lVar4);
  *(undefined8 *)(lVar4 + 0x40) = 0;
  *(ushort *)(lVar4 + 0x80) = *(ushort *)(lVar4 + 0x80) & 0xffec | 2;
  *(uint *)(lVar4 + 0x3c) = (uint)lVar4 & 0xffff;
  *(undefined8 *)(lVar4 + 0x20) = 0;
  *(undefined8 *)(lVar4 + 0x28) = 1;
  *(undefined4 *)(lVar4 + 0x10) = 0xf5e3ce28;
  lVar4 = FUN_10000e524();
  FUN_1003a985c(&local_40,lVar4);
  uVar3 = FUN_1010a1520();
  lVar5 = FUN_1010a0e0c(uVar3,0,"*KindredSoundBalance*",0);
  uVar2 = FUN_1003b81e8(*(undefined4 *)(lVar5 + 0x2a0));
  *(char **)(lVar4 + 0x10) = "Sound_Ozo_Ability_B_Slash";
  *(undefined2 *)(lVar4 + 0x30) = 0x1ff;
  *(undefined4 *)(lVar4 + 0x34) = 1;
  *(undefined4 *)(lVar4 + 0x3c) = uVar2;
  *(undefined4 *)(lVar4 + 0x40) = 0xffffffff;
  *(byte *)(lVar4 + 0x38) = *(byte *)(lVar4 + 0x38) & 0xf8 | 4;
  *(undefined8 *)(lVar4 + 0x48) = 0;
  lVar4 = FUN_10000ed74();
  FUN_1003a985c(&local_40,lVar4);
  *(undefined8 *)(lVar4 + 0x18) = 0;
  *(undefined1 *)(lVar4 + 0x20) = 1;
  *(undefined8 *)(lVar4 + 0x24) = 0;
  *(undefined8 *)(lVar4 + 0x34) = 0;
  *(undefined8 *)(lVar4 + 0x2c) = 0;
  *(undefined4 *)(lVar4 + 0x3c) = 0;
  *(undefined8 *)(lVar4 + 0x48) = 0xbf800000c0000000;
  *(undefined8 *)(lVar4 + 0x40) = 0xbf800000bf800000;
  *(undefined4 *)(lVar4 + 0x50) = 0x3f800000;
  *(undefined1 *)(lVar4 + 0x54) = 0xff;
  *(undefined8 *)(lVar4 + 0x60) = 0xffffffff00000000;
  *(undefined8 *)(lVar4 + 0x58) = 0xffffffff00040000;
  *(byte *)(lVar4 + 0x6a) = bVar1 | 0x14;
  *(undefined2 *)(lVar4 + 0x68) = 0x4120;
  *(code **)(lVar4 + 0x78) = FUN_1003b9c14;
  *(byte *)(lVar4 + 0xa8) = *(byte *)(lVar4 + 0xa8) & 0xf0 | 1;
  lVar4 = FUN_10000cae4();
  FUN_1003a985c(&local_40,lVar4);
  *(code **)(lVar4 + 0x10) = FUN_1003b991c;
  uVar3 = FUN_10000c784();
  FUN_1003a985c(&local_40,uVar3);
  lVar4 = FUN_10000ceb8();
  FUN_1003a985c(&local_40,lVar4);
  *(code **)(lVar4 + 0x20) = FUN_1003b9c28;
  *(undefined8 *)(lVar4 + 0x10) = 0;
  lVar4 = FUN_10000c3b0();
  FUN_1003a985c(&local_40,lVar4);
  *(code **)(lVar4 + 0x10) = FUN_1003b9a8c;
  lVar4 = FUN_10000d8b8();
  FUN_1003a985c(&local_40,lVar4);
  *(undefined1 *)(lVar4 + 0x10) = 0;
  return local_40;
}




undefined8 FUN_10037934c(void)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  undefined4 uVar5;
  undefined8 local_50;
  undefined8 uStack_48;
  
  local_50 = 0;
  uStack_48 = 0;
  lVar1 = FUN_10000d2d0();
  FUN_1003a985c(&local_50,lVar1);
  *(undefined **)(lVar1 + 0x10) = PTR_s_Buff_Ozo_Rolling_10185ae30;
  *(undefined4 *)(lVar1 + 0x18) = 2;
  uVar2 = FUN_10000ef8c();
  FUN_1003a985c(&local_50,uVar2);
  uVar2 = FUN_10000bc94();
  FUN_1003a985c(&local_50,uVar2);
  lVar1 = FUN_10000bd3c();
  FUN_1003a985c(&local_50,lVar1);
  *(undefined **)(lVar1 + 0x10) = PTR_s_Buff_Ozo_RollPrimaryTarget_10185ae98;
  *(code **)(lVar1 + 0x28) = FUN_1003b9c3c;
  *(undefined2 *)(lVar1 + 0x68) = 1;
  *(byte *)(lVar1 + 0x6a) = *(byte *)(lVar1 + 0x6a) & 0xfe;
  uVar2 = FUN_10000c784();
  FUN_1003a985c(&local_50,uVar2);
  uVar2 = FUN_10000d8b8();
  FUN_1003a985c(&local_50,uVar2);
  plVar3 = (long *)thunk_FUN_10000e0ac();
  FUN_1003a985c(&local_50,plVar3);
  (**(code **)(*plVar3 + 0x50))(plVar3,"Ability03_Start");
  lVar1 = FUN_10000e1b4();
  FUN_1003a985c(&local_50,lVar1);
  *(undefined8 *)(lVar1 + 0x40) = 0;
  *(ushort *)(lVar1 + 0x80) = *(ushort *)(lVar1 + 0x80) & 0xffec | 2;
  *(uint *)(lVar1 + 0x3c) = (uint)lVar1 & 0xffff;
  *(undefined8 *)(lVar1 + 0x20) = 0;
  *(undefined8 *)(lVar1 + 0x28) = 1;
  *(undefined4 *)(lVar1 + 0x10) = 0x49d2c733;
  lVar1 = FUN_10000e524();
  FUN_1003a985c(&local_50,lVar1);
  uVar2 = FUN_1010a1520();
  lVar4 = FUN_1010a0e0c(uVar2,0,"*KindredSoundBalance*",0);
  uVar5 = FUN_1003b81e8(*(undefined4 *)(lVar4 + 0x2a4));
  *(char **)(lVar1 + 0x10) = "Sound_Ozo_Ability_C_Charge";
  *(undefined2 *)(lVar1 + 0x30) = 0x1ff;
  *(undefined4 *)(lVar1 + 0x34) = 1;
  *(undefined4 *)(lVar1 + 0x3c) = uVar5;
  *(undefined4 *)(lVar1 + 0x40) = 0xffffffff;
  *(byte *)(lVar1 + 0x38) = *(byte *)(lVar1 + 0x38) & 0xf8 | 4;
  *(undefined8 *)(lVar1 + 0x48) = 0;
  lVar1 = FUN_10000e524();
  FUN_1003a985c(&local_50,lVar1);
  uVar2 = FUN_1010a1520();
  lVar4 = FUN_1010a0e0c(uVar2,0,"*KindredSoundBalance*",0);
  uVar5 = FUN_1003b81e8(*(undefined4 *)(lVar4 + 0x2a4));
  *(char **)(lVar1 + 0x10) = "Sound_Ozo_Ability_C_Roll_Start";
  *(undefined2 *)(lVar1 + 0x30) = 0x1ff;
  *(undefined4 *)(lVar1 + 0x34) = 1;
  *(undefined4 *)(lVar1 + 0x3c) = uVar5;
  *(undefined4 *)(lVar1 + 0x40) = 0xffffffff;
  *(byte *)(lVar1 + 0x38) = *(byte *)(lVar1 + 0x38) & 0xf8 | 4;
  *(undefined8 *)(lVar1 + 0x48) = 0;
  lVar1 = FUN_10000ceb8();
  FUN_1003a985c(&local_50,lVar1);
  *(code **)(lVar1 + 0x20) = FUN_1003b9d1c;
  *(undefined8 *)(lVar1 + 0x10) = 0;
  lVar1 = FUN_10000d8b8();
  FUN_1003a985c(&local_50,lVar1);
  *(undefined1 *)(lVar1 + 0x10) = 0;
  uVar2 = FUN_10000bb2c();
  FUN_1003a985c(&local_50,uVar2);
  lVar1 = FUN_10000c3b0();
  FUN_1003a985c(&local_50,lVar1);
  *(code **)(lVar1 + 0x10) = FUN_1003b9d44;
  lVar1 = FUN_10000bd3c();
  FUN_1003a985c(&local_50,lVar1);
  *(undefined **)(lVar1 + 0x10) = PTR_s_Buff_Ozo_Rolling_10185ae30;
  *(code **)(lVar1 + 0x30) = FUN_1003b9d30;
  *(undefined2 *)(lVar1 + 0x68) = 1;
  *(byte *)(lVar1 + 0x6a) = *(byte *)(lVar1 + 0x6a) & 0xfc | 2;
  uVar2 = FUN_10000c784();
  FUN_1003a985c(&local_50,uVar2);
  return local_50;
}




undefined8 FUN_10037962c(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  undefined4 local_70 [2];
  undefined4 local_68;
  code *local_60;
  undefined4 local_58;
  code *local_50;
  undefined4 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  local_40 = 0;
  uStack_38 = 0;
  uVar2 = FUN_10000d8b8();
  FUN_1003a985c(&local_40,uVar2);
  lVar3 = FUN_10000dff8();
  FUN_1003a985c(&local_40,lVar3);
  *(undefined2 *)(lVar3 + 0x28) = 0x101;
  *(undefined8 *)(lVar3 + 0x30) = 0;
  uVar1 = FUN_1004d2524("Ability03_Travel");
  uVar1 = FUN_100015208("Ability03_Travel",uVar1,0x12345678);
  *(undefined4 *)(lVar3 + 0x10) = uVar1;
  *(undefined4 *)(lVar3 + 0x20) = 0;
  lVar3 = FUN_10000ef8c();
  FUN_1003a985c(&local_40,lVar3);
  *(byte *)(lVar3 + 0x10) = *(byte *)(lVar3 + 0x10) & 0xfc | 1;
  uVar2 = FUN_10000bb2c();
  FUN_1003a985c(&local_40,uVar2);
  lVar3 = FUN_10000c540();
  FUN_1003a985c(&local_40,lVar3);
  *(undefined **)(lVar3 + 0x10) = PTR_s_Buff_Ozo_Rolling_10185ae30;
  uVar2 = FUN_10000c784();
  FUN_1003a985c(&local_40,uVar2);
  plVar4 = (long *)FUN_10000cd5c();
  FUN_1003a985c(&local_40,plVar4);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x68))(0,0x40000000,0,0,plVar4);
  local_50 = (code *)CONCAT44(local_50._4_4_,0x3dcccccd);
  local_48 = 1;
  (**(code **)(*plVar4 + 0xa8))(plVar4,&local_50);
  lVar3 = FUN_10000ceb8();
  FUN_1003a985c(&local_40,lVar3);
  *(undefined4 *)(lVar3 + 0x2c) = 0x3dcccccd;
  *(undefined8 *)(lVar3 + 0x10) = 0;
  uVar2 = FUN_10000f9c0();
  FUN_1003a985c(&local_40,uVar2);
  lVar3 = FUN_10000ef8c();
  FUN_1003a985c(&local_40,lVar3);
  *(byte *)(lVar3 + 0x10) = *(byte *)(lVar3 + 0x10) & 0xe0 | 10;
  lVar3 = FUN_10000dff8();
  FUN_1003a985c(&local_40,lVar3);
  *(undefined2 *)(lVar3 + 0x28) = 0x100;
  *(undefined8 *)(lVar3 + 0x30) = 0;
  uVar1 = FUN_1004d2524("Ability03_Attack");
  uVar1 = FUN_100015208("Ability03_Attack",uVar1,0x12345678);
  *(undefined4 *)(lVar3 + 0x10) = uVar1;
  *(undefined4 *)(lVar3 + 0x20) = 0;
  lVar3 = FUN_10000e1b4();
  FUN_1003a985c(&local_40,lVar3);
  *(undefined8 *)(lVar3 + 0x20) = 0;
  *(undefined8 *)(lVar3 + 0x28) = 0x3ecccccd00000003;
  *(undefined8 *)(lVar3 + 0x40) = 0;
  *(ushort *)(lVar3 + 0x80) = *(ushort *)(lVar3 + 0x80) & 0xffef | 3;
  *(uint *)(lVar3 + 0x3c) = (uint)lVar3 & 0xffff;
  *(undefined4 *)(lVar3 + 0x10) = 0x2b7c4d84;
  *(char **)(lVar3 + 0x18) = "Bone_Ring";
  lVar3 = FUN_10000e1b4();
  FUN_1003a985c(&local_40,lVar3);
  *(undefined8 *)(lVar3 + 0x40) = 0;
  *(ushort *)(lVar3 + 0x80) = *(ushort *)(lVar3 + 0x80) & 0xffef | 3;
  *(uint *)(lVar3 + 0x3c) = (uint)lVar3 & 0xffff;
  *(undefined8 *)(lVar3 + 0x20) = 0;
  *(undefined8 *)(lVar3 + 0x28) = 1;
  *(undefined4 *)(lVar3 + 0x10) = 0xc5048775;
  lVar3 = FUN_10000e524();
  FUN_1003a985c(&local_40,lVar3);
  uVar2 = FUN_1010a1520();
  lVar5 = FUN_1010a0e0c(uVar2,0,"*KindredSoundBalance*",0);
  uVar1 = FUN_1003b81e8(*(undefined4 *)(lVar5 + 0x2a4));
  *(undefined2 *)(lVar3 + 0x30) = 0x3ff;
  *(undefined4 *)(lVar3 + 0x40) = 0xffffffff;
  *(undefined4 *)(lVar3 + 0x34) = 1;
  *(undefined4 *)(lVar3 + 0x3c) = uVar1;
  *(byte *)(lVar3 + 0x38) = *(byte *)(lVar3 + 0x38) & 0xf8 | 4;
  *(undefined8 *)(lVar3 + 0x48) = 0;
  *(char **)(lVar3 + 0x10) = "Sound_Ozo_Ability_C_Knock_1";
  *(char **)(lVar3 + 0x18) = "Sound_Ozo_Ability_C_Knock_2";
  *(char **)(lVar3 + 0x20) = "Sound_Ozo_Ability_C_Knock_3";
  uVar2 = FUN_10000bc94();
  FUN_1003a985c(&local_40,uVar2);
  plVar4 = (long *)FUN_10000cb8c();
  FUN_1003a985c(&local_40,plVar4);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))(plVar4);
  (**(code **)(*plVar4 + 0x38))(plVar4,"PrimaryTargetDamage",8);
  plVar4 = (long *)FUN_10000d7d0();
  FUN_1003a985c(&local_40,plVar4);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))(plVar4);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x70))();
  local_50 = FUN_1003ba108;
  local_48 = 3;
  plVar4 = (long *)(**(code **)(*plVar4 + 0x28))(plVar4,&local_50);
  local_60 = FUN_1003ba11c;
  local_58 = 3;
  plVar4 = (long *)(**(code **)(*plVar4 + 0x18))(plVar4,&local_60);
  local_70[0] = 0x40c00000;
  local_68 = 1;
  (**(code **)(*plVar4 + 0x30))(plVar4,local_70);
  lVar3 = FUN_10000bd3c();
  FUN_1003a985c(&local_40,lVar3);
  *(undefined **)(lVar3 + 0x10) = PTR_s_Buff_Stunned_10185a208;
  *(code **)(lVar3 + 0x30) = FUN_1003ba130;
  *(undefined2 *)(lVar3 + 0x68) = 1;
  *(byte *)(lVar3 + 0x6a) = *(byte *)(lVar3 + 0x6a) & 0xfe;
  uVar2 = FUN_10000c784();
  FUN_1003a985c(&local_40,uVar2);
  lVar3 = FUN_10000ceb8();
  FUN_1003a985c(&local_40,lVar3);
  *(undefined4 *)(lVar3 + 0x2c) = 0x3e4ccccd;
  *(undefined8 *)(lVar3 + 0x10) = 0;
  lVar3 = FUN_10000d8b8();
  FUN_1003a985c(&local_40,lVar3);
  *(undefined1 *)(lVar3 + 0x10) = 0;
  return local_40;
}




void FUN_100379a90(void)

{
  FUN_1003b5bbc(0,"Attack",&PTR_s_Sound_Lance_Attack_1_10185ad18,3,"Effect_Lance_AA",
                PTR_s_Buff_Lance_PlayAutoAttackImpactP_10185ad30,0,0);
  return;
}




void FUN_100379ac4(void)

{
  FUN_1003b5bbc(0,"AltAttack",&PTR_s_Sound_Lance_Attack_1_10185ad18,3,"Effect_Lance_AA",
                PTR_s_Buff_Lance_PlayAutoAttackImpactP_10185ad30,0,0);
  return;
}




void FUN_100379af8(void)

{
  FUN_1003b5bbc(0,"CritAttack",&PTR_s_Sound_Lance_Attack_1_10185ad18,3,"Effect_Lance_AA_Crit",
                PTR_s_Buff_Lance_PlayCritAttackImpactP_10185ad38,2,0);
  return;
}




void FUN_100379b2c(void)

{
  FUN_1003b5bbc(FUN_1003b61b8,"EmpoweredAttack",&PTR_s_Sound_Lance_Quick_Attack_10185ad40,1,
                "Effect_Lance_Empowered_AA",PTR_s_Buff_Lance_PlayEmpoweredAutoAtta_10185ad48,1,1);
  return;
}




undefined8 FUN_100379b64(void)

{
  byte bVar1;
  char cVar2;
  undefined4 uVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  char *pcVar10;
  undefined4 local_60 [2];
  undefined4 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  local_50 = 0;
  uStack_48 = 0;
  plVar4 = (long *)FUN_10000c5ec();
  FUN_1003a985c(&local_50,plVar4);
  (**(code **)(*plVar4 + 0x50))(plVar4,PTR_s_Buff_Lance_CircleStrafing_10185ad00);
  uVar5 = FUN_10000c6d4();
  FUN_1003a985c(&local_50,uVar5);
  uVar5 = FUN_10000d8b8();
  FUN_1003a985c(&local_50,uVar5);
  lVar6 = FUN_10000ef8c();
  FUN_1003a985c(&local_50,lVar6);
  *(byte *)(lVar6 + 0x10) = *(byte *)(lVar6 + 0x10) & 0xe7 | 4;
  lVar6 = FUN_10000dff8();
  FUN_1003a985c(&local_50,lVar6);
  *(undefined2 *)(lVar6 + 0x28) = 0x100;
  *(undefined8 *)(lVar6 + 0x30) = 0;
  uVar3 = FUN_1004d2524("Ability01");
  uVar3 = FUN_100015208("Ability01",uVar3,0x12345678);
  *(undefined4 *)(lVar6 + 0x10) = uVar3;
  uVar3 = FUN_1004d2524("AttackToIdleCombat");
  uVar3 = FUN_100015208("AttackToIdleCombat",uVar3,0x12345678);
  *(undefined4 *)(lVar6 + 0x20) = uVar3;
  plVar4 = (long *)FUN_10000f300();
  FUN_1003a985c(&local_50,plVar4);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))(plVar4,"*Lance_A_LandingIndicator*",0);
  (**(code **)(*plVar4 + 0x20))(plVar4,FUN_1003b6344);
  lVar6 = FUN_10000e1b4();
  FUN_1003a985c(&local_50,lVar6);
  *(undefined8 *)(lVar6 + 0x40) = 0;
  *(ushort *)(lVar6 + 0x80) = *(ushort *)(lVar6 + 0x80) & 0xffec | 2;
  *(uint *)(lVar6 + 0x3c) = (uint)lVar6 & 0xffff;
  *(undefined8 *)(lVar6 + 0x20) = 0;
  *(undefined8 *)(lVar6 + 0x28) = 1;
  *(undefined4 *)(lVar6 + 0x10) = 0x13220132;
  lVar6 = FUN_10000e1b4();
  FUN_1003a985c(&local_50,lVar6);
  *(undefined8 *)(lVar6 + 0x20) = 0;
  *(undefined8 *)(lVar6 + 0x28) = 3;
  *(undefined8 *)(lVar6 + 0x40) = 0;
  *(ushort *)(lVar6 + 0x80) = *(ushort *)(lVar6 + 0x80) & 0xffef | 3;
  *(uint *)(lVar6 + 0x3c) = (uint)lVar6 & 0xffff;
  *(undefined4 *)(lVar6 + 0x10) = 0xd9ca060d;
  *(char **)(lVar6 + 0x18) = "Bone_Weapon";
  lVar6 = FUN_10000e524();
  FUN_1003a985c(&local_50,lVar6);
  uVar5 = FUN_1010a1520();
  lVar7 = FUN_1010a0e0c(uVar5,0,"*KindredSoundBalance*",0);
  uVar3 = FUN_1003b6154(*(undefined4 *)(lVar7 + 0x2dc));
  *(char **)(lVar6 + 0x10) = "Sound_Lance_Ability_A_Sweep";
  *(undefined2 *)(lVar6 + 0x30) = 0x1ff;
  *(undefined4 *)(lVar6 + 0x34) = 1;
  *(undefined4 *)(lVar6 + 0x3c) = uVar3;
  *(undefined4 *)(lVar6 + 0x40) = 0xffffffff;
  *(byte *)(lVar6 + 0x38) = *(byte *)(lVar6 + 0x38) & 0xf8 | 4;
  *(undefined8 *)(lVar6 + 0x48) = 0;
  plVar4 = (long *)thunk_FUN_10000e6f4();
  FUN_1003a985c(&local_50,plVar4);
  (**(code **)(*plVar4 + 0x50))(plVar4,"impale");
  uVar5 = FUN_10000bb2c();
  FUN_1003a985c(&local_50,uVar5);
  lVar6 = FUN_10000bd3c();
  FUN_1003a985c(&local_50,lVar6);
  *(undefined **)(lVar6 + 0x10) = PTR_s_Buff_Lance_PauseStaminaRegen_10185ad58;
  *(code **)(lVar6 + 0x28) = FUN_1003b6550;
  *(undefined2 *)(lVar6 + 0x68) = 1;
  *(byte *)(lVar6 + 0x6a) = *(byte *)(lVar6 + 0x6a) & 0xfe;
  lVar6 = FUN_10000c150();
  FUN_1003a985c(&local_50,lVar6);
  *(code **)(lVar6 + 0x10) = thunk_FUN_1003b61cc;
  *(byte *)(lVar6 + 0x18) = *(byte *)(lVar6 + 0x18) & 0xfc | 1;
  uVar5 = FUN_10000c784();
  FUN_1003a985c(&local_50,uVar5);
  cVar2 = DAT_101d23a38;
  lVar6 = FUN_10000ceb8();
  FUN_1003a985c(&local_50,lVar6);
  if (cVar2 == '\0') {
    *(code **)(lVar6 + 0x18) = FUN_1003b6464;
    lVar6 = FUN_10000e524();
    FUN_1003a985c(&local_50,lVar6);
    uVar5 = FUN_1010a1520();
    lVar7 = FUN_1010a0e0c(uVar5,0,"*KindredSoundBalance*",0);
    uVar3 = FUN_1003b6154(*(undefined4 *)(lVar7 + 0x2dc));
    *(char **)(lVar6 + 0x10) = "Sound_Lance_Ability_A_Hit";
    *(undefined2 *)(lVar6 + 0x30) = 0x1ff;
    *(undefined4 *)(lVar6 + 0x34) = 1;
    *(undefined4 *)(lVar6 + 0x3c) = uVar3;
    *(undefined4 *)(lVar6 + 0x40) = 0xffffffff;
    *(byte *)(lVar6 + 0x38) = *(byte *)(lVar6 + 0x38) & 0xf8 | 4;
    *(undefined8 *)(lVar6 + 0x48) = 0;
    lVar6 = FUN_10000ceb8();
    FUN_1003a985c(&local_50,lVar6);
    *(undefined4 *)(lVar6 + 0x2c) = DAT_10185ad50;
  }
  else {
    *(code **)(lVar6 + 0x20) = FUN_1003b632c;
  }
  *(undefined8 *)(lVar6 + 0x10) = 0;
  lVar6 = FUN_10000e1b4();
  FUN_1003a985c(&local_50,lVar6);
  *(undefined8 *)(lVar6 + 0x40) = 0;
  *(ushort *)(lVar6 + 0x80) = *(ushort *)(lVar6 + 0x80) & 0xffec | 2;
  *(uint *)(lVar6 + 0x3c) = (uint)lVar6 & 0xffff;
  *(undefined8 *)(lVar6 + 0x20) = 0;
  *(undefined8 *)(lVar6 + 0x28) = 1;
  *(undefined4 *)(lVar6 + 0x10) = 0xaf981273;
  lVar6 = FUN_10000ceb8();
  FUN_1003a985c(&local_50,lVar6);
  *(undefined4 *)(lVar6 + 0x2c) = 0x3dcccccd;
  *(undefined8 *)(lVar6 + 0x10) = 0;
  uVar5 = FUN_10000f9c0();
  FUN_1003a985c(&local_50,uVar5);
  lVar6 = FUN_1003e10f0();
  bVar1 = *(byte *)(lVar6 + 0xe5);
  lVar6 = FUN_10000ecbc();
  FUN_1003a985c(&local_50,lVar6);
  *(code **)(lVar6 + 0x70) = FUN_1003b64a8;
  *(code **)(lVar6 + 0x78) = FUN_1003b64d0;
  *(undefined4 *)(lVar6 + 0x88) = 0x3f800000;
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
  *(undefined8 *)(lVar6 + 0x60) = 0xffffffff00100000;
  *(undefined8 *)(lVar6 + 0x58) = 0xffffffff00040000;
  *(byte *)(lVar6 + 0x6a) = bVar1 | 0x14;
  *(undefined2 *)(lVar6 + 0x68) = 0x6120;
  plVar4 = (long *)FUN_10000cb8c();
  FUN_1003a985c(&local_50,plVar4);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))(plVar4);
  (**(code **)(*plVar4 + 0x38))(plVar4,"Damage",0);
  lVar6 = FUN_10000bd3c();
  FUN_1003a985c(&local_50,lVar6);
  *(undefined **)(lVar6 + 0x10) = PTR_s_Buff_Lance_Immobilize_10185ad60;
  *(code **)(lVar6 + 0x28) = FUN_1003b6608;
  *(undefined2 *)(lVar6 + 0x68) = 1;
  *(byte *)(lVar6 + 0x6a) = *(byte *)(lVar6 + 0x6a) & 0xfe;
  lVar6 = FUN_10000c8e8();
  FUN_1003a985c(&local_50,lVar6);
  lVar7 = FUN_10049ae50(lVar6 + 0x10);
  *(undefined4 *)(lVar7 + 0x18) = 0;
  *(undefined4 *)(lVar7 + 8) = 0;
  *(undefined4 *)(lVar7 + 0x10) = 1;
  lVar7 = FUN_10000c8e8();
  FUN_1003a985c(lVar6 + 0xb0,lVar7);
  lVar8 = FUN_10049ac04(lVar7 + 0x10);
  if (PTR_s_Ability__Lance__A_1018596a0 == (undefined *)0x0) {
    uVar9 = 0;
  }
  else {
    uVar9 = 0x811c9dc5;
    cVar2 = *PTR_s_Ability__Lance__A_1018596a0;
    pcVar10 = PTR_s_Ability__Lance__A_1018596a0;
    while (cVar2 != '\0') {
      pcVar10 = pcVar10 + 1;
      uVar9 = (uVar9 ^ (int)cVar2) * 0x1000193;
      cVar2 = *pcVar10;
    }
  }
  *(uint *)(lVar8 + 8) = uVar9;
  plVar4 = (long *)FUN_10000dc58();
  FUN_1003a985c(lVar7 + 0xb0,plVar4);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))(plVar4,PTR_s_Ability__Lance__C_1018596b0);
  local_60[0] = 0;
  local_58 = 1;
  (**(code **)(*plVar4 + 0x20))(plVar4,local_60);
  lVar6 = lVar6 + 200;
  uVar5 = FUN_10000c784();
  FUN_1003a985c(lVar6,uVar5);
  uVar5 = FUN_10000bb2c();
  FUN_1003a985c(lVar6,uVar5);
  lVar7 = FUN_10000bd3c();
  FUN_1003a985c(lVar6,lVar7);
  *(undefined **)(lVar7 + 0x10) = PTR_s_Buff_Lance_Recovery_10185ad68;
  *(code **)(lVar7 + 0x30) = FUN_1003b668c;
  *(undefined2 *)(lVar7 + 0x68) = 1;
  *(byte *)(lVar7 + 0x6a) = *(byte *)(lVar7 + 0x6a) & 0xfe;
  uVar5 = FUN_10000c784();
  FUN_1003a985c(&local_50,uVar5);
  lVar6 = FUN_10000ceb8();
  FUN_1003a985c(&local_50,lVar6);
  *(code **)(lVar6 + 0x20) = FUN_1003b65f4;
  *(undefined8 *)(lVar6 + 0x10) = 0;
  lVar6 = FUN_10000d8b8();
  FUN_1003a985c(&local_50,lVar6);
  *(undefined1 *)(lVar6 + 0x10) = 0;
  uVar5 = FUN_10000f034();
  FUN_1003a985c(&local_50,uVar5);
  lVar6 = FUN_10000d024();
  FUN_1003a985c(&local_50,lVar6);
  *(char **)(lVar6 + 0x10) = "Lance_A_LandingIndicator";
  return local_50;
}




undefined8 FUN_10037a278(void)

{
  undefined4 uVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_30 = 0;
  uStack_28 = 0;
  plVar2 = (long *)FUN_10000c5ec();
  FUN_1003a985c(&local_30,plVar2);
  (**(code **)(*plVar2 + 0x50))(plVar2,PTR_s_Buff_Lance_CircleStrafing_10185ad00);
  uVar3 = FUN_10000bb2c();
  FUN_1003a985c(&local_30,uVar3);
  lVar4 = FUN_10000c540();
  FUN_1003a985c(&local_30,lVar4);
  *(undefined **)(lVar4 + 0x10) = PTR_s_Buff_Lance_PauseStaminaRegen_10185ad58;
  uVar3 = FUN_10000c784();
  FUN_1003a985c(&local_30,uVar3);
  uVar3 = FUN_10000d8b8();
  FUN_1003a985c(&local_30,uVar3);
  lVar4 = FUN_10000ef8c();
  FUN_1003a985c(&local_30,lVar4);
  *(byte *)(lVar4 + 0x10) = *(byte *)(lVar4 + 0x10) & 0xe3 | 8;
  lVar4 = FUN_10000dff8();
  FUN_1003a985c(&local_30,lVar4);
  *(undefined2 *)(lVar4 + 0x28) = 0x100;
  *(undefined8 *)(lVar4 + 0x30) = 0;
  uVar1 = FUN_1004d2524("Ability02");
  uVar1 = FUN_100015208("Ability02",uVar1,0x12345678);
  *(undefined4 *)(lVar4 + 0x10) = uVar1;
  uVar1 = FUN_1004d2524("AttackToIdleCombat");
  uVar1 = FUN_100015208("AttackToIdleCombat",uVar1,0x12345678);
  *(undefined4 *)(lVar4 + 0x20) = uVar1;
  lVar4 = FUN_10000e1b4();
  FUN_1003a985c(&local_30,lVar4);
  *(undefined8 *)(lVar4 + 0x40) = 0;
  *(ushort *)(lVar4 + 0x80) = *(ushort *)(lVar4 + 0x80) & 0xffec | 2;
  *(uint *)(lVar4 + 0x3c) = (uint)lVar4 & 0xffff;
  *(undefined8 *)(lVar4 + 0x20) = 0;
  *(undefined8 *)(lVar4 + 0x28) = 1;
  *(undefined4 *)(lVar4 + 0x10) = 0x2052e69c;
  lVar4 = FUN_10000e524();
  FUN_1003a985c(&local_30,lVar4);
  uVar3 = FUN_1010a1520();
  lVar5 = FUN_1010a0e0c(uVar3,0,"*KindredSoundBalance*",0);
  uVar1 = FUN_1003b6154(*(undefined4 *)(lVar5 + 0x2e0));
  *(char **)(lVar4 + 0x10) = "Sound_Lance_Ability_B_Sweep";
  *(undefined2 *)(lVar4 + 0x30) = 0x1ff;
  *(undefined4 *)(lVar4 + 0x34) = 1;
  *(undefined4 *)(lVar4 + 0x3c) = uVar1;
  *(undefined4 *)(lVar4 + 0x40) = 0xffffffff;
  *(byte *)(lVar4 + 0x38) = *(byte *)(lVar4 + 0x38) & 0xf8 | 4;
  *(undefined8 *)(lVar4 + 0x48) = 0;
  plVar2 = (long *)thunk_FUN_10000e6f4();
  FUN_1003a985c(&local_30,plVar2);
  (**(code **)(*plVar2 + 0x50))(plVar2,"gythian wall");
  lVar4 = FUN_10000ceb8();
  FUN_1003a985c(&local_30,lVar4);
  *(code **)(lVar4 + 0x20) = FUN_1003b6d3c;
  *(undefined8 *)(lVar4 + 0x10) = 0;
  uVar3 = FUN_10000bb2c();
  FUN_1003a985c(&local_30,uVar3);
  lVar4 = FUN_10000bd3c();
  FUN_1003a985c(&local_30,lVar4);
  *(undefined **)(lVar4 + 0x10) = PTR_s_Buff_Lance_Guard_10185ad80;
  *(code **)(lVar4 + 0x30) = FUN_1003b6d50;
  *(undefined2 *)(lVar4 + 0x68) = 1;
  *(byte *)(lVar4 + 0x6a) = *(byte *)(lVar4 + 0x6a) & 0xfe;
  uVar3 = FUN_10000c784();
  FUN_1003a985c(&local_30,uVar3);
  lVar4 = FUN_10000c3b0();
  FUN_1003a985c(&local_30,lVar4);
  *(code **)(lVar4 + 0x10) = FUN_1003b66a0;
  uVar3 = FUN_10000c6d4();
  FUN_1003a985c(&local_30,uVar3);
  uVar3 = FUN_10000f034();
  FUN_1003a985c(&local_30,uVar3);
  lVar4 = FUN_10000ceb8();
  FUN_1003a985c(&local_30,lVar4);
  *(code **)(lVar4 + 0x20) = FUN_1003b6d64;
  *(undefined8 *)(lVar4 + 0x10) = 0;
  lVar4 = FUN_10000d8b8();
  FUN_1003a985c(&local_30,lVar4);
  *(undefined1 *)(lVar4 + 0x10) = 0;
  return local_30;
}




undefined8 FUN_10037a58c(void)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  undefined4 uVar6;
  code *local_50;
  undefined4 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  local_40 = 0;
  uStack_38 = 0;
  lVar2 = FUN_10000d8b8();
  FUN_1003a985c(&local_40,lVar2);
  *(undefined1 *)(lVar2 + 0x10) = 1;
  uVar3 = FUN_10000bb2c();
  FUN_1003a985c(&local_40,uVar3);
  uVar3 = FUN_10000c6d4();
  FUN_1003a985c(&local_40,uVar3);
  lVar2 = FUN_10000c838();
  FUN_1003a985c(&local_40,lVar2);
  uVar3 = DAT_10185ad10;
  *(ushort *)(lVar2 + 0x58) = *(ushort *)(lVar2 + 0x58) & 0xf00f | 0x20;
  *(undefined8 *)(lVar2 + 0x48) = 0;
  *(undefined8 *)(lVar2 + 0x50) = 0;
  *(undefined1 *)(lVar2 + 0x50) = 2;
  *(undefined8 *)(lVar2 + 0x40) = uVar3;
  lVar4 = FUN_10000bd3c();
  FUN_1003a985c(lVar2 + 0x30,lVar4);
  *(undefined **)(lVar4 + 0x10) = PTR_s_Buff_Lance_PauseStaminaRegen_10185ad58;
  *(code **)(lVar4 + 0x28) = FUN_1003b6d78;
  *(undefined2 *)(lVar4 + 0x68) = 1;
  *(byte *)(lVar4 + 0x6a) = *(byte *)(lVar4 + 0x6a) & 0xfe;
  lVar2 = FUN_10000c838();
  FUN_1003a985c(&local_40,lVar2);
  puVar1 = PTR_s_Buff_Lance_Talent_Rollout_10185ad88;
  *(ushort *)(lVar2 + 0x58) = *(ushort *)(lVar2 + 0x58) & 0xf00f | 0x20;
  *(undefined8 *)(lVar2 + 0x48) = 0;
  *(undefined8 *)(lVar2 + 0x50) = 0;
  *(undefined1 *)(lVar2 + 0x50) = 2;
  *(undefined **)(lVar2 + 0x40) = puVar1;
  lVar4 = FUN_10000bd3c();
  FUN_1003a985c(lVar2 + 0x18,lVar4);
  *(undefined **)(lVar4 + 0x10) = PTR_s_Buff_Lance_Rollout_Projectile_10185ad90;
  *(code **)(lVar4 + 0x30) = FUN_1003b6df8;
  *(undefined2 *)(lVar4 + 0x68) = 1;
  *(byte *)(lVar4 + 0x6a) = *(byte *)(lVar4 + 0x6a) & 0xfe;
  uVar3 = FUN_10000c784();
  FUN_1003a985c(&local_40,uVar3);
  lVar2 = FUN_10000c3b0();
  FUN_1003a985c(&local_40,lVar2);
  *(code **)(lVar2 + 0x10) = FUN_1003b6e0c;
  lVar2 = FUN_10000e1b4();
  FUN_1003a985c(&local_40,lVar2);
  *(undefined8 *)(lVar2 + 0x40) = 0;
  *(ushort *)(lVar2 + 0x80) = *(ushort *)(lVar2 + 0x80) & 0xffef | 3;
  *(uint *)(lVar2 + 0x3c) = (uint)lVar2 & 0xffff;
  *(undefined8 *)(lVar2 + 0x20) = 0;
  *(undefined8 *)(lVar2 + 0x28) = 1;
  *(undefined4 *)(lVar2 + 0x10) = 0x8c20d586;
  lVar2 = FUN_10000e524();
  FUN_1003a985c(&local_40,lVar2);
  uVar3 = FUN_1010a1520();
  lVar4 = FUN_1010a0e0c(uVar3,0,"*KindredSoundBalance*",0);
  uVar6 = FUN_1003b6154(*(undefined4 *)(lVar4 + 0x2e4));
  *(char **)(lVar2 + 0x10) = "Sound_Lance_Ability_C";
  *(undefined2 *)(lVar2 + 0x30) = 0x1ff;
  *(undefined4 *)(lVar2 + 0x34) = 1;
  *(undefined4 *)(lVar2 + 0x3c) = uVar6;
  *(undefined4 *)(lVar2 + 0x40) = 0xffffffff;
  *(byte *)(lVar2 + 0x38) = *(byte *)(lVar2 + 0x38) & 0xf8 | 4;
  *(undefined8 *)(lVar2 + 0x48) = 0;
  plVar5 = (long *)thunk_FUN_10000e6f4();
  FUN_1003a985c(&local_40,plVar5);
  (**(code **)(*plVar5 + 0x50))(plVar5,"roll");
  plVar5 = (long *)FUN_10000cd5c();
  FUN_1003a985c(&local_40,plVar5);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x88))(plVar5);
  local_50 = FUN_1003b6df8;
  local_48 = 3;
  plVar5 = (long *)(**(code **)(*plVar5 + 0xa8))(plVar5,&local_50);
  (**(code **)(*plVar5 + 0xb0))(plVar5,1);
  lVar2 = FUN_10000ceb8();
  FUN_1003a985c(&local_40,lVar2);
  *(code **)(lVar2 + 0x20) = FUN_1003b6df8;
  *(undefined8 *)(lVar2 + 0x10) = 0;
  uVar3 = FUN_10000f9c0();
  FUN_1003a985c(&local_40,uVar3);
  lVar2 = FUN_10000d8b8();
  FUN_1003a985c(&local_40,lVar2);
  *(undefined1 *)(lVar2 + 0x10) = 0;
  uVar3 = FUN_10000f034();
  FUN_1003a985c(&local_40,uVar3);
  uVar3 = FUN_10000bb2c();
  FUN_1003a985c(&local_40,uVar3);
  lVar2 = FUN_10000bd3c();
  FUN_1003a985c(&local_40,lVar2);
  *(undefined **)(lVar2 + 0x10) = PTR_s_Buff_Lance_EmpoweredAutoattackAv_10185ad08;
  *(code **)(lVar2 + 0x30) = FUN_1003b716c;
  *(undefined2 *)(lVar2 + 0x68) = 1;
  *(byte *)(lVar2 + 0x6a) = *(byte *)(lVar2 + 0x6a) & 0xfe;
  uVar3 = FUN_10000c784();
  FUN_1003a985c(&local_40,uVar3);
  return local_40;
}




void FUN_10037a8f4(void)

{
  FUN_1003a2678(PTR_s_Buff_Lance_Withdraw_10185ad98);
  return;
}




void FUN_10037a900(void)

{
  FUN_1003bce0c("Attack","DefaultAttackShot",0x5f);
  return;
}




void FUN_10037a918(void)

{
  FUN_1003bce0c("AltAttack","AltAttackShot",0x5f);
  return;
}




void FUN_10037a930(void)

{
  FUN_1003bce0c("CritAttack","DefaultAttackShot",0x60);
  return;
}




undefined8 FUN_10037a948(void)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 local_40;
  undefined8 uStack_38;
  
  local_40 = 0;
  uStack_38 = 0;
  lVar2 = FUN_10000e94c();
  FUN_1003a985c(&local_40,lVar2);
  *(code **)(lVar2 + 0x10) = FUN_1003bcd54;
  uVar3 = FUN_10000ef8c();
  FUN_1003a985c(&local_40,uVar3);
  lVar2 = FUN_10000dff8();
  FUN_1003a985c(&local_40,lVar2);
  *(undefined2 *)(lVar2 + 0x28) = 0x100;
  *(code **)(lVar2 + 0x30) = FUN_1003a24a0;
  uVar1 = FUN_1004d2524("EmpoweredAttack");
  uVar1 = FUN_100015208("EmpoweredAttack",uVar1,0x12345678);
  *(undefined4 *)(lVar2 + 0x10) = uVar1;
  uVar1 = FUN_1004d2524("AttackToIdleCombat");
  uVar1 = FUN_100015208("AttackToIdleCombat",uVar1,0x12345678);
  *(undefined4 *)(lVar2 + 0x20) = uVar1;
  lVar2 = FUN_10000ceb8();
  FUN_1003a985c(&local_40,lVar2);
  *(undefined4 *)(lVar2 + 0x2c) = 0x3e99999a;
  *(code **)(lVar2 + 0x10) = FUN_1003a24a0;
  uVar3 = FUN_10000bc94();
  FUN_1003a985c(&local_40,uVar3);
  lVar2 = FUN_10000bd3c();
  FUN_1003a985c(&local_40,lVar2);
  *(undefined **)(lVar2 + 0x10) = PTR_s_Buff_Samuel_PlayHitByEmpoweredAt_10185b018;
  *(undefined4 *)(lVar2 + 0x18) = 0x3e4ccccd;
  *(undefined2 *)(lVar2 + 0x68) = 1;
  *(byte *)(lVar2 + 0x6a) = *(byte *)(lVar2 + 0x6a) & 0xfe;
  lVar2 = FUN_10000cae4();
  FUN_1003a985c(&local_40,lVar2);
  *(code **)(lVar2 + 0x10) = FUN_1003ac88c;
  plVar4 = (long *)FUN_10000cb8c();
  FUN_1003a985c(&local_40,plVar4);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))(plVar4);
  (**(code **)(*plVar4 + 0x20))(plVar4,"EmpoweredAttackBonusDamage");
  lVar2 = FUN_10000f250();
  FUN_1003a985c(&local_40,lVar2);
  *(undefined4 *)(lVar2 + 0x10) = 0x61;
  FUN_1003d266c(lVar2,"CenterBody");
  *(undefined4 *)(lVar2 + 0x34) = 4;
  uVar3 = FUN_10000c784();
  FUN_1003a985c(&local_40,uVar3);
  uVar3 = FUN_10000bb2c();
  FUN_1003a985c(&local_40,uVar3);
  lVar2 = FUN_10000c540();
  FUN_1003a985c(&local_40,lVar2);
  *(undefined **)(lVar2 + 0x10) = PTR_s_Buff_Samuel_EmpoweredAttackAvail_10185b020;
  uVar3 = FUN_10000c784();
  FUN_1003a985c(&local_40,uVar3);
  return local_40;
}




void FUN_10037ab70(void)

{
  FUN_1003bd06c(0);
  return;
}




void FUN_10037ab78(void)

{
  FUN_1003bd06c(1);
  return;
}




undefined8 FUN_10037ab80(void)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_30 = 0;
  uStack_28 = 0;
  lVar2 = FUN_10000e94c();
  FUN_1003a985c(&local_30,lVar2);
  *(code **)(lVar2 + 0x10) = FUN_1003bcd54;
  uVar3 = FUN_10000d8b8();
  FUN_1003a985c(&local_30,uVar3);
  lVar2 = FUN_10000ef8c();
  FUN_1003a985c(&local_30,lVar2);
  *(byte *)(lVar2 + 0x10) = *(byte *)(lVar2 + 0x10) & 0xe7 | 4;
  plVar4 = (long *)thunk_FUN_10000e6f4();
  FUN_1003a985c(&local_30,plVar4);
  (**(code **)(*plVar4 + 0x50))(plVar4,"ability2");
  lVar2 = FUN_10000dff8();
  FUN_1003a985c(&local_30,lVar2);
  *(undefined2 *)(lVar2 + 0x28) = 0x100;
  *(undefined8 *)(lVar2 + 0x30) = 0;
  uVar1 = FUN_1004d2524("Ability02");
  uVar1 = FUN_100015208("Ability02",uVar1,0x12345678);
  *(undefined4 *)(lVar2 + 0x10) = uVar1;
  uVar1 = FUN_1004d2524("AttackToIdle");
  uVar1 = FUN_100015208("AttackToIdle",uVar1,0x12345678);
  *(undefined4 *)(lVar2 + 0x20) = uVar1;
  plVar4 = (long *)FUN_10000f300();
  FUN_1003a985c(&local_30,plVar4);
  uVar3 = (**(code **)(*plVar4 + 0x50))(plVar4,"*Samuel_DarkField*",0);
  plVar4 = (long *)FUN_10000bfc0();
  FUN_1003a985c(&local_30,plVar4);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))
                             (plVar4,PTR_s_Buff_Samuel_B_DarkFieldForming_10185b038,uVar3);
  (**(code **)(*plVar4 + 0x20))(plVar4,FUN_1003a4858);
  lVar2 = FUN_10000ceb8();
  FUN_1003a985c(&local_30,lVar2);
  *(code **)(lVar2 + 0x20) = FUN_1003bd364;
  *(undefined8 *)(lVar2 + 0x10) = 0;
  lVar2 = FUN_10000d8b8();
  FUN_1003a985c(&local_30,lVar2);
  *(undefined1 *)(lVar2 + 0x10) = 0;
  return local_30;
}




undefined8 FUN_10037ad4c(void)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  undefined8 local_40;
  undefined8 uStack_38;
  
  local_40 = 0;
  uStack_38 = 0;
  lVar2 = FUN_10000e94c();
  FUN_1003a985c(&local_40,lVar2);
  *(code **)(lVar2 + 0x10) = FUN_1003bcd54;
  lVar2 = FUN_10000d8b8();
  FUN_1003a985c(&local_40,lVar2);
  *(undefined1 *)(lVar2 + 0x10) = 1;
  uVar3 = FUN_10000ef8c();
  FUN_1003a985c(&local_40,uVar3);
  lVar2 = FUN_10000dff8();
  FUN_1003a985c(&local_40,lVar2);
  *(undefined2 *)(lVar2 + 0x28) = 0x100;
  *(undefined8 *)(lVar2 + 0x30) = 0;
  uVar1 = FUN_1004d2524("Ability03");
  uVar1 = FUN_100015208("Ability03",uVar1,0x12345678);
  *(undefined4 *)(lVar2 + 0x10) = uVar1;
  uVar1 = FUN_1004d2524("AttackToIdle");
  uVar1 = FUN_100015208("AttackToIdle",uVar1,0x12345678);
  *(undefined4 *)(lVar2 + 0x20) = uVar1;
  lVar2 = FUN_10000e524();
  FUN_1003a985c(&local_40,lVar2);
  uVar3 = FUN_1010a1520();
  lVar4 = FUN_1010a0e0c(uVar3,0,"*KindredSoundBalance*",0);
  uVar1 = FUN_1003bcfb0(*(undefined4 *)(lVar4 + 0x31c));
  *(char **)(lVar2 + 0x10) = "Sound_Samuel_ability_c_cast";
  *(undefined2 *)(lVar2 + 0x30) = 0x1ff;
  *(undefined4 *)(lVar2 + 0x34) = 1;
  *(undefined4 *)(lVar2 + 0x3c) = uVar1;
  *(undefined4 *)(lVar2 + 0x40) = 0xffffffff;
  *(byte *)(lVar2 + 0x38) = *(byte *)(lVar2 + 0x38) & 0xf8 | 4;
  *(undefined8 *)(lVar2 + 0x48) = 0;
  plVar5 = (long *)FUN_10000f300();
  FUN_1003a985c(&local_40,plVar5);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x50))(plVar5,"*Samuel_NightmareShotWarningIndicator*",0);
  (**(code **)(*plVar5 + 0x20))(plVar5,FUN_10048fb04);
  plVar5 = (long *)thunk_FUN_10000e6f4();
  FUN_1003a985c(&local_40,plVar5);
  (**(code **)(*plVar5 + 0x50))(plVar5,"ability3");
  lVar2 = FUN_10000ceb8();
  FUN_1003a985c(&local_40,lVar2);
  *(code **)(lVar2 + 0x20) = FUN_1003bd378;
  *(undefined8 *)(lVar2 + 0x10) = 0;
  lVar2 = FUN_10000f250();
  FUN_1003a985c(&local_40,lVar2);
  *(undefined4 *)(lVar2 + 0x10) = 100;
  FUN_1003d266c(lVar2,"OverHead");
  lVar2 = FUN_10000d8b8();
  FUN_1003a985c(&local_40,lVar2);
  *(undefined1 *)(lVar2 + 0x10) = 0;
  return local_40;
}




void FUN_10037af7c(void)

{
  FUN_1003af550("Attack","Effect_Idris_AA",&PTR_s_Sound_Idris_Attack_Impact_1_10185aa50,3,
                FUN_1003a3a5c);
  return;
}




void FUN_10037afa4(void)

{
  FUN_1003af550("AltAttack","Effect_Idris_AA_Alt",&PTR_s_Sound_Idris_Attack_Impact_1_10185aa50,3,
                FUN_1003a3a5c);
  return;
}




void FUN_10037afcc(void)

{
  FUN_1003af550("CritAttack","Effect_Idris_AA_Crit",&PTR_s_Sound_Idris_Crit_Impact_1_10185aa68,3,
                FUN_1003a3acc);
  return;
}




void FUN_10037aff4(void)

{
  FUN_1003af550("Ability01_EmpoweredAttack","Effect_Idris_AA_Empowered",
                &PTR_s_Sound_Idris_Ability_B_Impact_1_10185aa80,1,FUN_1003af2d0);
  return;
}




void FUN_10037b01c(void)

{
  FUN_1003af93c("RangedAttack");
  return;
}




void FUN_10037b028(void)

{
  FUN_1003af93c("AltRangedAttack");
  return;
}




undefined8 FUN_10037b034(void)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 local_40;
  undefined8 uStack_38;
  
  local_40 = 0;
  uStack_38 = 0;
  lVar2 = FUN_10000ef8c();
  FUN_1003a985c(&local_40,lVar2);
  *(byte *)(lVar2 + 0x10) = *(byte *)(lVar2 + 0x10) & 0xe7 | 4;
  lVar2 = FUN_10000dff8();
  FUN_1003a985c(&local_40,lVar2);
  *(undefined2 *)(lVar2 + 0x28) = 0x100;
  *(code **)(lVar2 + 0x30) = FUN_1003a24a0;
  uVar1 = FUN_1004d2524("Ability01_EmpoweredRangedAttack");
  uVar1 = FUN_100015208("Ability01_EmpoweredRangedAttack",uVar1,0x12345678);
  *(undefined4 *)(lVar2 + 0x10) = uVar1;
  uVar1 = FUN_1004d2524("AttackToIdleCombat");
  uVar1 = FUN_100015208("AttackToIdleCombat",uVar1,0x12345678);
  *(undefined4 *)(lVar2 + 0x20) = uVar1;
  lVar2 = FUN_10000ceb8();
  FUN_1003a985c(&local_40,lVar2);
  *(undefined4 *)(lVar2 + 0x2c) = 0x3e99999a;
  *(code **)(lVar2 + 0x10) = FUN_1003a24a0;
  uVar3 = FUN_10000bb2c();
  FUN_1003a985c(&local_40,uVar3);
  lVar2 = FUN_10000c540();
  FUN_1003a985c(&local_40,lVar2);
  *(undefined **)(lVar2 + 0x10) = PTR_s_Buff_Idris_A_EmpoweredAttackAvai_10185aa88;
  lVar2 = FUN_10000c540();
  FUN_1003a985c(&local_40,lVar2);
  *(undefined **)(lVar2 + 0x10) = PTR_s_Buff_Idris_A_EmpoweredChakramAva_10185aa90;
  uVar3 = FUN_10000c784();
  FUN_1003a985c(&local_40,uVar3);
  lVar2 = FUN_10000e524();
  FUN_1003a985c(&local_40,lVar2);
  uVar3 = FUN_1010a1520();
  lVar4 = FUN_1010a0e0c(uVar3,0,"*KindredSoundBalance*",0);
  uVar1 = FUN_1003af8d8(*(undefined4 *)(lVar4 + 900));
  *(char **)(lVar2 + 0x10) = "Sound_Idris_Ranged_Attack_Empowered";
  *(undefined2 *)(lVar2 + 0x30) = 0x1ff;
  *(undefined4 *)(lVar2 + 0x34) = 1;
  *(undefined4 *)(lVar2 + 0x3c) = uVar1;
  *(undefined4 *)(lVar2 + 0x40) = 0xffffffff;
  *(byte *)(lVar2 + 0x38) = *(byte *)(lVar2 + 0x38) & 0xf8 | 4;
  *(undefined8 *)(lVar2 + 0x48) = 0;
  lVar2 = FUN_10000f250();
  FUN_1003a985c(&local_40,lVar2);
  *(undefined4 *)(lVar2 + 0x10) = 0x7b;
  FUN_1003d266c(lVar2,"CenterBody");
  uVar3 = FUN_10000f034();
  FUN_1003a985c(&local_40,uVar3);
  return local_40;
}




undefined8 FUN_10037b230(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 local_40;
  undefined8 uStack_38;
  
  local_40 = 0;
  uStack_38 = 0;
  lVar1 = FUN_10000d2d0();
  FUN_1003a985c(&local_40,lVar1);
  *(undefined **)(lVar1 + 0x10) = PTR_s_Buff_Idris_A_EmpoweredAttackAvai_10185aa88;
  *(undefined4 *)(lVar1 + 0x18) = 2;
  uVar2 = FUN_10000bb2c();
  FUN_1003a985c(&local_40,uVar2);
  lVar1 = FUN_10000bd3c();
  FUN_1003a985c(&local_40,lVar1);
  *(undefined **)(lVar1 + 0x10) = PTR_s_Buff_Idris_A_Barrier_10185aa98;
  *(code **)(lVar1 + 0x30) = FUN_1003afba0;
  *(undefined2 *)(lVar1 + 0x68) = 1;
  *(byte *)(lVar1 + 0x6a) = *(byte *)(lVar1 + 0x6a) & 0xfe;
  *(code **)(lVar1 + 0x60) = FUN_1003afac8;
  lVar1 = FUN_10000bd3c();
  FUN_1003a985c(&local_40,lVar1);
  *(undefined **)(lVar1 + 0x10) = PTR_s_Buff_Idris_A_EmpoweredAttackAvai_10185aa88;
  *(code **)(lVar1 + 0x30) = FUN_1003afbb4;
  *(undefined2 *)(lVar1 + 0x68) = 1;
  *(byte *)(lVar1 + 0x6a) = *(byte *)(lVar1 + 0x6a) & 0xfe;
  lVar1 = FUN_10000bd3c();
  FUN_1003a985c(&local_40,lVar1);
  *(undefined **)(lVar1 + 0x10) = PTR_s_Buff_Idris_A_EmpoweredChakramAva_10185aa90;
  *(code **)(lVar1 + 0x30) = FUN_1003afbb4;
  *(undefined2 *)(lVar1 + 0x68) = 1;
  *(byte *)(lVar1 + 0x6a) = *(byte *)(lVar1 + 0x6a) & 0xfe;
  *(code **)(lVar1 + 0x60) = FUN_1003afb28;
  lVar1 = FUN_10000bd3c();
  FUN_1003a985c(&local_40,lVar1);
  *(undefined **)(lVar1 + 0x10) = PTR_s_Buff_Idris_DontCatch_10185aaa0;
  *(undefined4 *)(lVar1 + 0x18) = 0x3f19999a;
  *(undefined2 *)(lVar1 + 0x68) = 1;
  *(byte *)(lVar1 + 0x6a) = *(byte *)(lVar1 + 0x6a) & 0xfe;
  lVar1 = FUN_10000bd3c();
  FUN_1003a985c(&local_40,lVar1);
  *(undefined **)(lVar1 + 0x10) = PTR_s_Buff_Idris_StaminaPaused_10185aaa8;
  *(code **)(lVar1 + 0x30) = FUN_1003afbc8;
  *(undefined2 *)(lVar1 + 0x68) = 1;
  *(byte *)(lVar1 + 0x6a) = *(byte *)(lVar1 + 0x6a) & 0xfe;
  uVar2 = FUN_10000c784();
  FUN_1003a985c(&local_40,uVar2);
  lVar1 = FUN_10000b720();
  FUN_1003a985c(&local_40,lVar1);
  *(undefined **)(lVar1 + 0x30) = PTR_s_Ability__Idris__A_Blink_101859748;
  *(code **)(lVar1 + 0x18) = FUN_1003afbd4;
  *(code **)(lVar1 + 0x20) = FUN_1003afb34;
  lVar1 = FUN_10000b720();
  FUN_1003a985c(&local_40,lVar1);
  *(undefined **)(lVar1 + 0x30) = PTR_s_Ability__Idris__A_Dash_101859740;
  *(code **)(lVar1 + 0x18) = FUN_1003afbd4;
  *(code **)(lVar1 + 0x20) = FUN_1003afb60;
  return local_40;
}




undefined8 FUN_10037b444(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  undefined4 uVar5;
  undefined4 local_50 [2];
  undefined4 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  local_40 = 0;
  uStack_38 = 0;
  lVar1 = FUN_10000d8b8();
  FUN_1003a985c(&local_40,lVar1);
  *(undefined1 *)(lVar1 + 0x10) = 1;
  lVar1 = FUN_10000e524();
  FUN_1003a985c(&local_40,lVar1);
  uVar2 = FUN_1010a1520();
  lVar3 = FUN_1010a0e0c(uVar2,0,"*KindredSoundBalance*",0);
  uVar5 = FUN_1003af8d8(*(undefined4 *)(lVar3 + 0x390));
  *(char **)(lVar1 + 0x10) = "Sound_Idris_Ability_A_Dash";
  *(undefined2 *)(lVar1 + 0x30) = 0x1ff;
  *(undefined4 *)(lVar1 + 0x34) = 1;
  *(undefined4 *)(lVar1 + 0x3c) = uVar5;
  *(undefined4 *)(lVar1 + 0x40) = 0xffffffff;
  *(byte *)(lVar1 + 0x38) = *(byte *)(lVar1 + 0x38) & 0xf8 | 4;
  *(undefined8 *)(lVar1 + 0x48) = 0;
  lVar1 = FUN_10000e1b4();
  FUN_1003a985c(&local_40,lVar1);
  *(undefined8 *)(lVar1 + 0x40) = 0;
  *(ushort *)(lVar1 + 0x80) = *(ushort *)(lVar1 + 0x80) & 0xffef | 3;
  *(uint *)(lVar1 + 0x3c) = (uint)lVar1 & 0xffff;
  *(undefined8 *)(lVar1 + 0x20) = 0;
  *(undefined8 *)(lVar1 + 0x28) = 0x3f33333300000001;
  *(undefined4 *)(lVar1 + 0x10) = 0xe50f35df;
  lVar1 = FUN_10000ef8c();
  FUN_1003a985c(&local_40,lVar1);
  *(byte *)(lVar1 + 0x10) = *(byte *)(lVar1 + 0x10) & 0xe7 | 4;
  lVar1 = FUN_10000dff8();
  FUN_1003a985c(&local_40,lVar1);
  *(undefined2 *)(lVar1 + 0x28) = 0x100;
  *(undefined8 *)(lVar1 + 0x30) = 0;
  uVar5 = FUN_1004d2524("Ability01_Dash");
  uVar5 = FUN_100015208("Ability01_Dash",uVar5,0x12345678);
  *(undefined4 *)(lVar1 + 0x10) = uVar5;
  uVar5 = FUN_1004d2524("AttackToIdle");
  uVar5 = FUN_100015208("AttackToIdle",uVar5,0x12345678);
  *(undefined4 *)(lVar1 + 0x20) = uVar5;
  plVar4 = (long *)FUN_10000cd5c();
  FUN_1003a985c(&local_40,plVar4);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x88))(plVar4);
  local_50[0] = 0x3f000000;
  local_48 = 1;
  plVar4 = (long *)(**(code **)(*plVar4 + 0xa8))(plVar4,local_50);
  (**(code **)(*plVar4 + 0xb0))(plVar4,1);
  lVar1 = FUN_10000ceb8();
  FUN_1003a985c(&local_40,lVar1);
  *(undefined4 *)(lVar1 + 0x2c) = 0x3f000000;
  *(undefined8 *)(lVar1 + 0x10) = 0;
  uVar2 = FUN_10000f9c0();
  FUN_1003a985c(&local_40,uVar2);
  uVar2 = FUN_10000bb2c();
  FUN_1003a985c(&local_40,uVar2);
  lVar1 = FUN_10000bd3c();
  FUN_1003a985c(&local_40,lVar1);
  *(undefined **)(lVar1 + 0x10) = PTR_s_Buff_Idris_PostAbilityBonuses_10185aab0;
  *(code **)(lVar1 + 0x30) = FUN_1003afbe8;
  *(undefined2 *)(lVar1 + 0x68) = 1;
  *(byte *)(lVar1 + 0x6a) = *(byte *)(lVar1 + 0x6a) & 0xfe;
  uVar2 = FUN_10000c784();
  FUN_1003a985c(&local_40,uVar2);
  lVar1 = FUN_10000d8b8();
  FUN_1003a985c(&local_40,lVar1);
  *(undefined1 *)(lVar1 + 0x10) = 0;
  uVar2 = FUN_10000f034();
  FUN_1003a985c(&local_40,uVar2);
  return local_40;
}




undefined8 FUN_10037b6dc(void)

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
  plVar2 = (long *)thunk_FUN_10000e5dc();
  FUN_1003a985c(&local_30,plVar2);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x58))(plVar2,"Sound_Idris_Ability_A_Blink");
  uVar3 = FUN_1010a1520();
  lVar1 = FUN_1010a0e0c(uVar3,0,"*KindredSoundBalance*",0);
  FUN_1003af8d8(*(undefined4 *)(lVar1 + 0x390));
  (**(code **)(*plVar2 + 0x28))(plVar2);
  lVar1 = FUN_10000ef8c();
  FUN_1003a985c(&local_30,lVar1);
  *(byte *)(lVar1 + 0x10) = *(byte *)(lVar1 + 0x10) & 0xe7 | 4;
  plVar2 = (long *)thunk_FUN_10000e0ac();
  FUN_1003a985c(&local_30,plVar2);
  (**(code **)(*plVar2 + 0x50))(plVar2,"MoveStop");
  plVar2 = (long *)thunk_FUN_10000e358();
  FUN_1003a985c(&local_30,plVar2);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x50))(plVar2);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x58))();
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Idris_A_FlashAtOrigin");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,0);
  (**(code **)(*plVar2 + 0x100))(plVar2,FUN_1003af4ec);
  lVar1 = FUN_10000ceb8();
  FUN_1003a985c(&local_30,lVar1);
  *(code **)(lVar1 + 0x20) = FUN_1003afbf4;
  *(undefined8 *)(lVar1 + 0x10) = 0;
  plVar2 = (long *)FUN_10000f748();
  FUN_1003a985c(&local_30,plVar2);
  (**(code **)(*plVar2 + 0x60))(plVar2);
  plVar2 = (long *)FUN_10000bdf0();
  FUN_1003a985c(&local_30,plVar2);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x50))
                             (plVar2,PTR_s_Buff_Idris_PostAbilityBonuses_10185aab0);
  local_40 = FUN_1003afbe8;
  local_38 = 3;
  (**(code **)(*plVar2 + 0x18))(plVar2,&local_40);
  plVar2 = (long *)thunk_FUN_10000e358();
  FUN_1003a985c(&local_30,plVar2);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x58))(plVar2);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Idris_A_FlashAtDestination");
  (**(code **)(*plVar2 + 0x78))(plVar2,1);
  lVar1 = FUN_10000d8b8();
  FUN_1003a985c(&local_30,lVar1);
  *(undefined1 *)(lVar1 + 0x10) = 0;
  uVar3 = FUN_10000f034();
  FUN_1003a985c(&local_30,uVar3);
  return local_30;
}




undefined8 FUN_10037b940(void)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
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
  lVar2 = FUN_10000dff8();
  FUN_1003a985c(&local_50,lVar2);
  *(undefined2 *)(lVar2 + 0x28) = 0x100;
  *(undefined8 *)(lVar2 + 0x30) = 0;
  uVar1 = FUN_1004d2524("Ability02_ThrowChakram");
  uVar1 = FUN_100015208("Ability02_ThrowChakram",uVar1,0x12345678);
  *(undefined4 *)(lVar2 + 0x10) = uVar1;
  uVar1 = FUN_1004d2524("AttackToIdle");
  uVar1 = FUN_100015208("AttackToIdle",uVar1,0x12345678);
  *(undefined4 *)(lVar2 + 0x20) = uVar1;
  lVar2 = FUN_10000e524();
  FUN_1003a985c(&local_50,lVar2);
  uVar3 = FUN_1010a1520();
  lVar4 = FUN_1010a0e0c(uVar3,0,"*KindredSoundBalance*",0);
  uVar1 = FUN_1003af8d8(*(undefined4 *)(lVar4 + 0x394));
  *(char **)(lVar2 + 0x10) = "Sound_Idris_Ability_B";
  *(undefined2 *)(lVar2 + 0x30) = 0x1ff;
  *(undefined4 *)(lVar2 + 0x34) = 1;
  *(undefined4 *)(lVar2 + 0x3c) = uVar1;
  *(undefined4 *)(lVar2 + 0x40) = 0xffffffff;
  *(byte *)(lVar2 + 0x38) = *(byte *)(lVar2 + 0x38) & 0xf8 | 4;
  *(undefined8 *)(lVar2 + 0x48) = 0;
  uVar3 = FUN_10000bb2c();
  FUN_1003a985c(&local_50,uVar3);
  lVar2 = FUN_10000bd3c();
  FUN_1003a985c(&local_50,lVar2);
  *(undefined **)(lVar2 + 0x10) = PTR_s_Buff_Idris_StaminaPaused_10185aaa8;
  *(code **)(lVar2 + 0x30) = FUN_1003afbc8;
  *(undefined2 *)(lVar2 + 0x68) = 1;
  *(byte *)(lVar2 + 0x6a) = *(byte *)(lVar2 + 0x6a) & 0xfe;
  uVar3 = FUN_10000c784();
  FUN_1003a985c(&local_50,uVar3);
  lVar2 = FUN_10000ceb8();
  FUN_1003a985c(&local_50,lVar2);
  *(undefined4 *)(lVar2 + 0x2c) = 0x3ecccccd;
  *(undefined8 *)(lVar2 + 0x10) = 0;
  lVar4 = FUN_10000c8e8();
  FUN_1003a985c(&local_50,lVar4);
  lVar2 = FUN_10049ab34(lVar4 + 0x10);
  *(undefined **)(lVar2 + 8) = PTR_s_Buff_Idris_Talent_ChaChaChakram_10185aab8;
  lVar2 = lVar4 + 0xb0;
  lVar5 = FUN_10000f250();
  FUN_1003a985c(lVar2,lVar5);
  *(undefined4 *)(lVar5 + 0x10) = 0x7d;
  FUN_1003d266c(lVar5,"CenterBody");
  *(undefined4 *)(lVar5 + 0x34) = 1;
  *(code **)(lVar5 + 0x28) = FUN_1003afc08;
  lVar5 = FUN_10000f250();
  FUN_1003a985c(lVar2,lVar5);
  *(undefined4 *)(lVar5 + 0x10) = 0x7d;
  FUN_1003d266c(lVar5,"CenterBody");
  *(undefined4 *)(lVar5 + 0x34) = 1;
  *(code **)(lVar5 + 0x28) = FUN_1003afc70;
  lVar5 = FUN_10000f250();
  FUN_1003a985c(lVar2,lVar5);
  *(undefined4 *)(lVar5 + 0x10) = 0x7d;
  FUN_1003d266c(lVar5,"CenterBody");
  *(undefined4 *)(lVar5 + 0x34) = 1;
  lVar2 = FUN_10000f250();
  FUN_1003a985c(lVar4 + 200,lVar2);
  *(undefined4 *)(lVar2 + 0x10) = 0x7d;
  FUN_1003d266c(lVar2,"CenterBody");
  *(undefined4 *)(lVar2 + 0x34) = 1;
  uVar3 = FUN_10000bb2c();
  FUN_1003a985c(&local_50,uVar3);
  lVar2 = FUN_10000bd3c();
  FUN_1003a985c(&local_50,lVar2);
  *(undefined **)(lVar2 + 0x10) = PTR_s_Buff_Idris_PostAbilityBonuses_10185aab0;
  *(code **)(lVar2 + 0x30) = FUN_1003afbe8;
  *(undefined2 *)(lVar2 + 0x68) = 1;
  *(byte *)(lVar2 + 0x6a) = *(byte *)(lVar2 + 0x6a) & 0xfe;
  uVar3 = FUN_10000c784();
  FUN_1003a985c(&local_50,uVar3);
  lVar2 = FUN_10000e7fc();
  FUN_1003a985c(&local_50,lVar2);
  *(undefined4 *)(lVar2 + 0x10) = 0x3e99999a;
  lVar2 = FUN_10000d8b8();
  FUN_1003a985c(&local_50,lVar2);
  *(undefined1 *)(lVar2 + 0x10) = 0;
  uVar3 = FUN_10000f034();
  FUN_1003a985c(&local_50,uVar3);
  return local_50;
}




undefined8 FUN_10037bcac(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined4 uVar4;
  undefined8 local_40;
  undefined8 uStack_38;
  
  local_40 = 0;
  uStack_38 = 0;
  lVar1 = FUN_10000d8b8();
  FUN_1003a985c(&local_40,lVar1);
  *(undefined1 *)(lVar1 + 0x10) = 1;
  uVar2 = FUN_10000cf70();
  FUN_1003a985c(&local_40,uVar2);
  uVar2 = FUN_10000bb2c();
  FUN_1003a985c(&local_40,uVar2);
  lVar1 = FUN_10000bd3c();
  FUN_1003a985c(&local_40,lVar1);
  *(undefined **)(lVar1 + 0x10) = PTR_s_Buff_Idris_DontCatch_10185aaa0;
  *(undefined4 *)(lVar1 + 0x18) = 0x3f4ccccd;
  *(undefined2 *)(lVar1 + 0x68) = 1;
  *(byte *)(lVar1 + 0x6a) = *(byte *)(lVar1 + 0x6a) & 0xfe;
  uVar2 = FUN_10000c784();
  FUN_1003a985c(&local_40,uVar2);
  lVar1 = FUN_10000e1b4();
  FUN_1003a985c(&local_40,lVar1);
  *(undefined8 *)(lVar1 + 0x40) = 0;
  *(ushort *)(lVar1 + 0x80) = *(ushort *)(lVar1 + 0x80) & 0xffec | 2;
  *(uint *)(lVar1 + 0x3c) = (uint)lVar1 & 0xffff;
  *(undefined8 *)(lVar1 + 0x20) = 0;
  *(undefined8 *)(lVar1 + 0x28) = 1;
  *(undefined4 *)(lVar1 + 0x10) = 0x74c1bd5e;
  lVar1 = FUN_10000e524();
  FUN_1003a985c(&local_40,lVar1);
  uVar2 = FUN_1010a1520();
  lVar3 = FUN_1010a0e0c(uVar2,0,"*KindredSoundBalance*",0);
  uVar4 = FUN_1003af8d8(*(undefined4 *)(lVar3 + 0x39c));
  *(char **)(lVar1 + 0x10) = "Sound_Idris_Ability_C_Attach";
  *(undefined2 *)(lVar1 + 0x30) = 0x1ff;
  *(undefined4 *)(lVar1 + 0x34) = 1;
  *(undefined4 *)(lVar1 + 0x3c) = uVar4;
  *(undefined4 *)(lVar1 + 0x40) = 0xffffffff;
  *(byte *)(lVar1 + 0x38) = *(byte *)(lVar1 + 0x38) & 0xf8 | 4;
  *(undefined8 *)(lVar1 + 0x48) = 0;
  lVar1 = FUN_10000dff8();
  FUN_1003a985c(&local_40,lVar1);
  *(undefined2 *)(lVar1 + 0x28) = 0x100;
  *(undefined8 *)(lVar1 + 0x30) = 0;
  uVar4 = FUN_1004d2524("Ability03_Start");
  uVar4 = FUN_100015208("Ability03_Start",uVar4,0x12345678);
  *(undefined4 *)(lVar1 + 0x10) = uVar4;
  uVar4 = FUN_1004d2524("AttackToIdle");
  uVar4 = FUN_100015208("AttackToIdle",uVar4,0x12345678);
  *(undefined4 *)(lVar1 + 0x20) = uVar4;
  lVar1 = FUN_10000ceb8();
  FUN_1003a985c(&local_40,lVar1);
  *(code **)(lVar1 + 0x20) = FUN_1003aff18;
  *(undefined8 *)(lVar1 + 0x10) = 0;
  if (DAT_101d23a38 != '\0') {
    lVar1 = FUN_10000bd3c();
    FUN_1003a985c(&local_40,lVar1);
    *(undefined **)(lVar1 + 0x10) = PTR_s_Buff_BlockDebuffs_10185a528;
    *(undefined4 *)(lVar1 + 0x18) = 0x3e99999a;
    *(undefined2 *)(lVar1 + 0x68) = 1;
    *(byte *)(lVar1 + 0x6a) = *(byte *)(lVar1 + 0x6a) & 0xfe;
    lVar1 = FUN_10000ceb8();
    FUN_1003a985c(&local_40,lVar1);
    *(undefined4 *)(lVar1 + 0x2c) = 0x3dcccccd;
    *(undefined8 *)(lVar1 + 0x10) = 0;
  }
  lVar1 = FUN_10000c3b0();
  FUN_1003a985c(&local_40,lVar1);
  *(code **)(lVar1 + 0x10) = FUN_1003afcdc;
  lVar1 = FUN_10000f250();
  FUN_1003a985c(&local_40,lVar1);
  *(undefined4 *)(lVar1 + 0x10) = 0x7e;
  FUN_1003d266c(lVar1,"CenterBody");
  uVar2 = FUN_10000bb2c();
  FUN_1003a985c(&local_40,uVar2);
  lVar1 = FUN_10000bd3c();
  FUN_1003a985c(&local_40,lVar1);
  *(undefined **)(lVar1 + 0x10) = PTR_s_Buff_Idris_C_Attached_10185aad8;
  *(undefined4 *)(lVar1 + 0x18) = 0xbf800000;
  *(undefined2 *)(lVar1 + 0x68) = 1;
  *(byte *)(lVar1 + 0x6a) = *(byte *)(lVar1 + 0x6a) & 0xfe;
  lVar1 = FUN_10000bd3c();
  FUN_1003a985c(&local_40,lVar1);
  *(undefined **)(lVar1 + 0x10) = PTR_s_Buff_Idris_StaminaPaused_10185aaa8;
  *(code **)(lVar1 + 0x30) = FUN_1003afbc8;
  *(undefined2 *)(lVar1 + 0x68) = 1;
  *(byte *)(lVar1 + 0x6a) = *(byte *)(lVar1 + 0x6a) & 0xfe;
  uVar2 = FUN_10000c784();
  FUN_1003a985c(&local_40,uVar2);
  lVar1 = FUN_10000ceb8();
  FUN_1003a985c(&local_40,lVar1);
  *(code **)(lVar1 + 0x20) = FUN_1003aff04;
  *(undefined8 *)(lVar1 + 0x10) = 0;
  uVar2 = FUN_10000bb2c();
  FUN_1003a985c(&local_40,uVar2);
  lVar1 = FUN_10000bd3c();
  FUN_1003a985c(&local_40,lVar1);
  *(undefined **)(lVar1 + 0x10) = PTR_s_Buff_Idris_C_AttachedLeapModal_10185aae0;
  *(undefined4 *)(lVar1 + 0x18) = 0xbf800000;
  *(undefined2 *)(lVar1 + 0x68) = 1;
  *(byte *)(lVar1 + 0x6a) = *(byte *)(lVar1 + 0x6a) & 0xfe;
  uVar2 = FUN_10000c784();
  FUN_1003a985c(&local_40,uVar2);
  lVar1 = FUN_10000d8b8();
  FUN_1003a985c(&local_40,lVar1);
  *(undefined1 *)(lVar1 + 0x10) = 0;
  return local_40;
}




undefined8 FUN_10037c084(void)

{
  byte bVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  undefined4 uVar6;
  code *local_70;
  undefined4 local_68;
  code *local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  local_50 = 0;
  uStack_48 = 0;
  lVar2 = FUN_1003e10f0();
  bVar1 = *(byte *)(lVar2 + 0xe5);
  lVar2 = FUN_10000d8b8();
  FUN_1003a985c(&local_50,lVar2);
  *(undefined1 *)(lVar2 + 0x10) = 1;
  uVar3 = FUN_10000bb2c();
  FUN_1003a985c(&local_50,uVar3);
  lVar2 = FUN_10000bd3c();
  FUN_1003a985c(&local_50,lVar2);
  *(undefined **)(lVar2 + 0x10) = PTR_s_Buff_Idris_DontCatch_10185aaa0;
  *(undefined4 *)(lVar2 + 0x18) = 0x3f4ccccd;
  *(undefined2 *)(lVar2 + 0x68) = 1;
  *(byte *)(lVar2 + 0x6a) = *(byte *)(lVar2 + 0x6a) & 0xfe;
  uVar3 = FUN_10000c784();
  FUN_1003a985c(&local_50,uVar3);
  lVar2 = FUN_10000ef8c();
  FUN_1003a985c(&local_50,lVar2);
  *(byte *)(lVar2 + 0x10) = *(byte *)(lVar2 + 0x10) & 0xe0 | 6;
  uVar3 = FUN_10000bb2c();
  FUN_1003a985c(&local_50,uVar3);
  lVar2 = FUN_10000c540();
  FUN_1003a985c(&local_50,lVar2);
  *(undefined **)(lVar2 + 0x10) = PTR_s_Buff_Idris_C_AttachmentHandler_10185aad0;
  lVar2 = FUN_10000bd3c();
  FUN_1003a985c(&local_50,lVar2);
  *(undefined **)(lVar2 + 0x10) = PTR_s_Buff_Idris_StaminaPaused_10185aaa8;
  *(code **)(lVar2 + 0x30) = FUN_1003afbc8;
  *(undefined2 *)(lVar2 + 0x68) = 1;
  *(byte *)(lVar2 + 0x6a) = *(byte *)(lVar2 + 0x6a) & 0xfe;
  uVar3 = FUN_10000c784();
  FUN_1003a985c(&local_50,uVar3);
  lVar2 = FUN_10000c3b0();
  FUN_1003a985c(&local_50,lVar2);
  *(code **)(lVar2 + 0x10) = FUN_1003aff2c;
  plVar4 = (long *)thunk_FUN_10000e358();
  FUN_1003a985c(&local_50,plVar4);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x58))(plVar4);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x48))(plVar4,"Effect_Idris_C_SweepOnLeap");
  plVar4 = (long *)(**(code **)(*plVar4 + 0x78))(plVar4,0);
  (**(code **)(*plVar4 + 0x100))(plVar4,FUN_1003af488);
  lVar2 = FUN_10000e524();
  FUN_1003a985c(&local_50,lVar2);
  uVar3 = FUN_1010a1520();
  lVar5 = FUN_1010a0e0c(uVar3,0,"*KindredSoundBalance*",0);
  uVar6 = FUN_1003af8d8(*(undefined4 *)(lVar5 + 0x3a0));
  *(char **)(lVar2 + 0x10) = "Sound_Idris_Ability_C_Spear";
  *(undefined2 *)(lVar2 + 0x30) = 0x1ff;
  *(undefined4 *)(lVar2 + 0x34) = 1;
  *(undefined4 *)(lVar2 + 0x3c) = uVar6;
  *(undefined4 *)(lVar2 + 0x40) = 0xffffffff;
  *(byte *)(lVar2 + 0x38) = *(byte *)(lVar2 + 0x38) & 0xf8 | 4;
  *(undefined8 *)(lVar2 + 0x48) = 0;
  lVar2 = FUN_10000ceb8();
  FUN_1003a985c(&local_50,lVar2);
  *(code **)(lVar2 + 0x20) = FUN_1003b0128;
  *(undefined8 *)(lVar2 + 0x10) = 0;
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
  *(code **)(lVar2 + 0x78) = FUN_1003b013c;
  *(byte *)(lVar2 + 0xa8) = *(byte *)(lVar2 + 0xa8) & 0xf0 | 1;
  plVar4 = (long *)FUN_10000cb8c();
  FUN_1003a985c(&local_50,plVar4);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))(plVar4);
  (**(code **)(*plVar4 + 0x38))(plVar4,"Sweep Damage",4);
  uVar3 = FUN_10000c784();
  FUN_1003a985c(&local_50,uVar3);
  lVar2 = FUN_10000e524();
  FUN_1003a985c(&local_50,lVar2);
  uVar3 = FUN_1010a1520();
  lVar5 = FUN_1010a0e0c(uVar3,0,"*KindredSoundBalance*",0);
  uVar6 = FUN_1003af8d8(*(undefined4 *)(lVar5 + 0x39c));
  *(char **)(lVar2 + 0x10) = "Sound_Idris_Ability_C_Leap";
  *(undefined2 *)(lVar2 + 0x30) = 0x1ff;
  *(undefined4 *)(lVar2 + 0x34) = 1;
  *(undefined4 *)(lVar2 + 0x3c) = uVar6;
  *(undefined4 *)(lVar2 + 0x40) = 0xffffffff;
  *(byte *)(lVar2 + 0x38) = *(byte *)(lVar2 + 0x38) & 0xf8 | 4;
  *(undefined8 *)(lVar2 + 0x48) = 0;
  plVar4 = (long *)FUN_10000cd5c();
  FUN_1003a985c(&local_50,plVar4);
  local_60 = FUN_1003b004c;
  local_58 = 3;
  plVar4 = (long *)(**(code **)(*plVar4 + 0x80))(plVar4,&local_60);
  local_70 = FUN_1003b0090;
  local_68 = 3;
  plVar4 = (long *)(**(code **)(*plVar4 + 0xa8))(plVar4,&local_70);
  (**(code **)(*plVar4 + 0xb0))(plVar4,1);
  lVar2 = FUN_10000ceb8();
  FUN_1003a985c(&local_50,lVar2);
  *(code **)(lVar2 + 0x18) = FUN_1003b00d4;
  uVar3 = FUN_10000f9c0();
  FUN_1003a985c(&local_50,uVar3);
  uVar3 = FUN_10000bb2c();
  FUN_1003a985c(&local_50,uVar3);
  lVar2 = FUN_10000bd3c();
  FUN_1003a985c(&local_50,lVar2);
  *(undefined **)(lVar2 + 0x10) = PTR_s_Buff_Idris_PostAbilityBonuses_10185aab0;
  *(code **)(lVar2 + 0x30) = FUN_1003afbe8;
  *(undefined2 *)(lVar2 + 0x68) = 1;
  *(byte *)(lVar2 + 0x6a) = *(byte *)(lVar2 + 0x6a) & 0xfe;
  uVar3 = FUN_10000c784();
  FUN_1003a985c(&local_50,uVar3);
  lVar2 = FUN_10000d8b8();
  FUN_1003a985c(&local_50,lVar2);
  *(undefined1 *)(lVar2 + 0x10) = 0;
  uVar3 = FUN_10000f034();
  FUN_1003a985c(&local_50,uVar3);
  return local_50;
}




void FUN_10037c53c(void)

{
  FUN_1003a2678(PTR_s_Buff_Idris_Withdraw_10185aae8);
  return;
}




void FUN_10037c548(void)

{
  FUN_1003ad850("Attack","Effect_Churnwalker_AA",FUN_1003a3a5c);
  return;
}




void FUN_10037c564(void)

{
  FUN_1003ad850("AltAttack","Effect_Churnwalker_AA",FUN_1003a3a5c);
  return;
}




void FUN_10037c580(void)

{
  FUN_1003ad850("CritAttack","Effect_Churnwalker_AA",FUN_1003a3acc);
  return;
}




undefined8 FUN_10037c59c(void)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 local_40;
  undefined8 uStack_38;
  
  local_40 = 0;
  uStack_38 = 0;
  lVar2 = FUN_10000d2d0();
  FUN_1003a985c(&local_40,lVar2);
  *(undefined **)(lVar2 + 0x10) = PTR_s_Buff_Churnwalker_A_Casting_10185a8b0;
  *(undefined4 *)(lVar2 + 0x18) = 2;
  uVar3 = FUN_10000d8b8();
  FUN_1003a985c(&local_40,uVar3);
  uVar3 = FUN_10000ef8c();
  FUN_1003a985c(&local_40,uVar3);
  lVar2 = FUN_10000dff8();
  FUN_1003a985c(&local_40,lVar2);
  *(undefined2 *)(lVar2 + 0x28) = 0x100;
  *(undefined8 *)(lVar2 + 0x30) = 0;
  *(code **)(lVar2 + 0x18) = FUN_1003add0c;
  uVar1 = FUN_1004d2524("AttackToIdle");
  uVar1 = FUN_100015208("AttackToIdle",uVar1,0x12345678);
  *(undefined4 *)(lVar2 + 0x20) = uVar1;
  lVar2 = FUN_10000e524();
  FUN_1003a985c(&local_40,lVar2);
  uVar3 = FUN_1010a1520();
  lVar4 = FUN_1010a0e0c(uVar3,0,"*KindredSoundBalance*",0);
  uVar1 = FUN_1003ada58(*(undefined4 *)(lVar4 + 0x410));
  *(undefined2 *)(lVar2 + 0x30) = 0x3ff;
  *(undefined4 *)(lVar2 + 0x40) = 0xffffffff;
  *(undefined4 *)(lVar2 + 0x34) = 1;
  *(undefined4 *)(lVar2 + 0x3c) = uVar1;
  *(byte *)(lVar2 + 0x38) = *(byte *)(lVar2 + 0x38) & 0xf8 | 4;
  *(undefined8 *)(lVar2 + 0x48) = 0;
  *(char **)(lVar2 + 0x10) = "Sound_Churnwalker_Ability_A_1";
  *(char **)(lVar2 + 0x18) = "Sound_Churnwalker_Ability_A_2";
  *(char **)(lVar2 + 0x20) = "Sound_Churnwalker_Ability_A_3";
  lVar2 = FUN_10000ceb8();
  FUN_1003a985c(&local_40,lVar2);
  *(code **)(lVar2 + 0x20) = FUN_1003add94;
  *(undefined8 *)(lVar2 + 0x10) = 0;
  lVar2 = FUN_10000f250();
  FUN_1003a985c(&local_40,lVar2);
  *(undefined4 *)(lVar2 + 0x10) = 0x14;
  FUN_1003d266c(lVar2,"CenterBody");
  *(code **)(lVar2 + 0x38) = FUN_1003adb3c;
  uVar3 = FUN_10000bb2c();
  FUN_1003a985c(&local_40,uVar3);
  lVar2 = FUN_10000bd3c();
  FUN_1003a985c(&local_40,lVar2);
  *(undefined **)(lVar2 + 0x10) = PTR_s_Buff_Churnwalker_A_Casting_10185a8b0;
  *(undefined4 *)(lVar2 + 0x18) = 0xbf800000;
  *(undefined2 *)(lVar2 + 0x68) = 1;
  *(byte *)(lVar2 + 0x6a) = *(byte *)(lVar2 + 0x6a) & 0xfe;
  *(code **)(lVar2 + 0x58) = FUN_1003adcb8;
  uVar3 = FUN_10000c784();
  FUN_1003a985c(&local_40,uVar3);
  lVar2 = FUN_10000ceb8();
  FUN_1003a985c(&local_40,lVar2);
  *(code **)(lVar2 + 0x18) = FUN_1003adabc;
  lVar2 = FUN_10000d8b8();
  FUN_1003a985c(&local_40,lVar2);
  *(undefined1 *)(lVar2 + 0x10) = 0;
  uVar3 = FUN_10000f034();
  FUN_1003a985c(&local_40,uVar3);
  return local_40;
}




undefined8 FUN_10037c7f0(void)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  int *piVar6;
  undefined4 local_80 [2];
  undefined4 local_78;
  code *local_70;
  undefined4 local_68;
  code *local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  local_50 = 0;
  uStack_48 = 0;
  lVar2 = FUN_10000e94c();
  FUN_1003a985c(&local_50,lVar2);
  *(code **)(lVar2 + 0x10) = FUN_1003ade98;
  uVar3 = FUN_10000d8b8();
  FUN_1003a985c(&local_50,uVar3);
  plVar4 = (long *)thunk_FUN_10000e358();
  FUN_1003a985c(&local_50,plVar4);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x58))(plVar4);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x48))(plVar4,"Effect_Churnwalker_TormentActivation");
  plVar4 = (long *)(**(code **)(*plVar4 + 0xb0))(plVar4,1);
  local_60 = (code *)CONCAT44(local_60._4_4_,0x3f000000);
  local_58 = 1;
  (**(code **)(*plVar4 + 0x60))(plVar4,&local_60);
  lVar2 = FUN_10000dff8();
  FUN_1003a985c(&local_50,lVar2);
  *(undefined2 *)(lVar2 + 0x28) = 0x100;
  *(undefined8 *)(lVar2 + 0x30) = 0;
  uVar1 = FUN_1004d2524("Ability02");
  uVar1 = FUN_100015208("Ability02",uVar1,0x12345678);
  *(undefined4 *)(lVar2 + 0x10) = uVar1;
  uVar1 = FUN_1004d2524("AttackToIdle");
  uVar1 = FUN_100015208("AttackToIdle",uVar1,0x12345678);
  *(undefined4 *)(lVar2 + 0x20) = uVar1;
  lVar2 = FUN_10000e524();
  FUN_1003a985c(&local_50,lVar2);
  uVar3 = FUN_1010a1520();
  lVar5 = FUN_1010a0e0c(uVar3,0,"*KindredSoundBalance*",0);
  uVar1 = FUN_1003ada58(*(undefined4 *)(lVar5 + 0x418));
  *(undefined2 *)(lVar2 + 0x30) = 0x3ff;
  *(undefined4 *)(lVar2 + 0x34) = 1;
  *(undefined4 *)(lVar2 + 0x3c) = uVar1;
  *(undefined4 *)(lVar2 + 0x40) = 0xffffffff;
  *(byte *)(lVar2 + 0x38) = *(byte *)(lVar2 + 0x38) & 0xf8 | 4;
  *(undefined8 *)(lVar2 + 0x48) = 0;
  *(char **)(lVar2 + 0x10) = "Sound_Churnwalker_Ability_B_Warmup_1";
  *(char **)(lVar2 + 0x18) = "Sound_Churnwalker_Ability_B_Warmup_2";
  *(char **)(lVar2 + 0x20) = "Sound_Churnwalker_Ability_B_Warmup_3";
  lVar2 = FUN_10000ceb8();
  FUN_1003a985c(&local_50,lVar2);
  *(code **)(lVar2 + 0x20) = FUN_1003adee4;
  *(undefined8 *)(lVar2 + 0x10) = 0;
  lVar2 = FUN_10000c8e8();
  FUN_1003a985c(&local_50,lVar2);
  lVar5 = FUN_10049ab34(lVar2 + 0x10);
  *(undefined **)(lVar5 + 8) = PTR_s_Buff_Churnwalker_Talent_TalentB_10185a8c0;
  lVar2 = lVar2 + 0xb0;
  uVar3 = FUN_10000bb2c();
  FUN_1003a985c(lVar2,uVar3);
  lVar5 = FUN_10000bd3c();
  FUN_1003a985c(lVar2,lVar5);
  *(undefined **)(lVar5 + 0x10) = PTR_s_Buff_Churnwalker_B_Cloud_10185a8c8;
  *(code **)(lVar5 + 0x30) = FUN_1003adef8;
  *(undefined2 *)(lVar5 + 0x68) = 1;
  *(byte *)(lVar5 + 0x6a) = *(byte *)(lVar5 + 0x6a) & 0xfe;
  uVar3 = FUN_10000c784();
  FUN_1003a985c(lVar2,uVar3);
  lVar2 = FUN_10000e524();
  FUN_1003a985c(&local_50,lVar2);
  uVar3 = FUN_1010a1520();
  lVar5 = FUN_1010a0e0c(uVar3,0,"*KindredSoundBalance*",0);
  uVar1 = FUN_1003ada58(*(undefined4 *)(lVar5 + 0x418));
  *(undefined2 *)(lVar2 + 0x30) = 0x3ff;
  *(undefined4 *)(lVar2 + 0x34) = 1;
  *(undefined4 *)(lVar2 + 0x3c) = uVar1;
  *(undefined4 *)(lVar2 + 0x40) = 0xffffffff;
  *(byte *)(lVar2 + 0x38) = *(byte *)(lVar2 + 0x38) & 0xf8 | 4;
  *(undefined8 *)(lVar2 + 0x48) = 0;
  *(char **)(lVar2 + 0x10) = "Sound_Churnwalker_Ability_B_Pull_1";
  *(char **)(lVar2 + 0x18) = "Sound_Churnwalker_Ability_B_Pull_2";
  *(char **)(lVar2 + 0x20) = "Sound_Churnwalker_Ability_B_Pull_3";
  lVar2 = FUN_10000ec0c();
  FUN_1003a985c(&local_50,lVar2);
  *(code **)(lVar2 + 0x10) = FUN_1003adda8;
  piVar6 = (int *)(lVar2 + 0x18);
  if ((*piVar6 == 0) || (piVar6 = (int *)(lVar2 + 0x1c), *piVar6 == 0)) {
    FUN_1003a4e5c(piVar6,PTR_s_Buff_Churnwalker_ChainTether_10185a8d0);
  }
  lVar2 = FUN_10000d4d8();
  FUN_1003a985c(&local_50,lVar2);
  *(code **)(lVar2 + 0x10) = FUN_1003addf8;
  lVar2 = FUN_10000bd3c();
  FUN_1003a985c(&local_50,lVar2);
  *(undefined **)(lVar2 + 0x10) = PTR_s_Buff_Churnwalker_ChainTetherPull_10185a8d8;
  *(undefined4 *)(lVar2 + 0x18) = 0x3dcccccd;
  *(undefined2 *)(lVar2 + 0x68) = 1;
  *(byte *)(lVar2 + 0x6a) = *(byte *)(lVar2 + 0x6a) & 0xfe;
  uVar3 = FUN_10000cb8c();
  FUN_1003a985c(&local_50,uVar3);
  plVar4 = (long *)FUN_10000d7d0();
  FUN_1003a985c(&local_50,plVar4);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))(plVar4);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x70))();
  local_60 = FUN_1003adf2c;
  local_58 = 3;
  plVar4 = (long *)(**(code **)(*plVar4 + 0x10))(plVar4,&local_60);
  local_70 = FUN_1003adf40;
  local_68 = 3;
  plVar4 = (long *)(**(code **)(*plVar4 + 0x20))(plVar4,&local_70);
  local_80[0] = 0x40666666;
  local_78 = 1;
  (**(code **)(*plVar4 + 0x30))(plVar4,local_80);
  uVar3 = FUN_10000c784();
  FUN_1003a985c(&local_50,uVar3);
  lVar2 = FUN_10000d8b8();
  FUN_1003a985c(&local_50,lVar2);
  *(undefined1 *)(lVar2 + 0x10) = 0;
  uVar3 = FUN_10000f034();
  FUN_1003a985c(&local_50,uVar3);
  return local_50;
}




undefined8 FUN_10037cc54(void)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  int *piVar6;
  code *local_50;
  undefined4 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  local_40 = 0;
  uStack_38 = 0;
  lVar2 = FUN_10000e94c();
  FUN_1003a985c(&local_40,lVar2);
  *(code **)(lVar2 + 0x10) = FUN_1003ade98;
  uVar3 = FUN_10000d8b8();
  FUN_1003a985c(&local_40,uVar3);
  uVar3 = FUN_10000ef8c();
  FUN_1003a985c(&local_40,uVar3);
  lVar2 = FUN_10000dff8();
  FUN_1003a985c(&local_40,lVar2);
  *(undefined2 *)(lVar2 + 0x28) = 0x100;
  *(undefined8 *)(lVar2 + 0x30) = 0;
  uVar1 = FUN_1004d2524("Ability03");
  uVar1 = FUN_100015208("Ability03",uVar1,0x12345678);
  *(undefined4 *)(lVar2 + 0x10) = uVar1;
  uVar1 = FUN_1004d2524("AttackToIdle");
  uVar1 = FUN_100015208("AttackToIdle",uVar1,0x12345678);
  *(undefined4 *)(lVar2 + 0x20) = uVar1;
  lVar2 = FUN_10000e524();
  FUN_1003a985c(&local_40,lVar2);
  uVar3 = FUN_1010a1520();
  lVar4 = FUN_1010a0e0c(uVar3,0,"*KindredSoundBalance*",0);
  uVar1 = FUN_1003ada58(*(undefined4 *)(lVar4 + 0x41c));
  *(undefined2 *)(lVar2 + 0x30) = 0x3ff;
  *(undefined4 *)(lVar2 + 0x34) = 1;
  *(undefined4 *)(lVar2 + 0x40) = 0xffffffff;
  *(undefined4 *)(lVar2 + 0x3c) = uVar1;
  *(byte *)(lVar2 + 0x38) = *(byte *)(lVar2 + 0x38) & 0xf8 | 4;
  *(undefined8 *)(lVar2 + 0x48) = 0;
  *(char **)(lVar2 + 0x10) = "Sound_Churnwalker_Ability_C_Startup_1";
  *(char **)(lVar2 + 0x18) = "Sound_Churnwalker_Ability_C_Startup_2";
  *(char **)(lVar2 + 0x20) = "Sound_Churnwalker_Ability_C_Startup_3";
  plVar5 = (long *)thunk_FUN_10000e358();
  FUN_1003a985c(&local_40,plVar5);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x58))(plVar5);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x48))(plVar5,"Effect_Churnwalker_TrespassActivation");
  plVar5 = (long *)(**(code **)(*plVar5 + 0xb0))(plVar5,1);
  (**(code **)(*plVar5 + 0x78))(plVar5,1);
  lVar2 = FUN_10000ceb8();
  FUN_1003a985c(&local_40,lVar2);
  *(code **)(lVar2 + 0x20) = FUN_1003adf68;
  *(undefined8 *)(lVar2 + 0x10) = 0;
  FUN_1003e10f0();
  lVar2 = FUN_10000ec0c();
  FUN_1003a985c(&local_40,lVar2);
  *(code **)(lVar2 + 0x10) = FUN_1003adda8;
  piVar6 = (int *)(lVar2 + 0x18);
  if ((*piVar6 == 0) || (piVar6 = (int *)(lVar2 + 0x1c), *piVar6 == 0)) {
    FUN_1003a4e5c(piVar6,PTR_s_Buff_Churnwalker_ChainTether_10185a8d0);
  }
  uVar3 = FUN_10000cb8c();
  FUN_1003a985c(&local_40,uVar3);
  lVar2 = FUN_10000bd3c();
  FUN_1003a985c(&local_40,lVar2);
  *(undefined **)(lVar2 + 0x10) = PTR_s_Buff_Stunned_10185a208;
  *(code **)(lVar2 + 0x30) = FUN_1003adf7c;
  *(undefined2 *)(lVar2 + 0x68) = 1;
  *(byte *)(lVar2 + 0x6a) = *(byte *)(lVar2 + 0x6a) & 0xfe;
  lVar2 = FUN_10000c540();
  FUN_1003a985c(&local_40,lVar2);
  *(undefined **)(lVar2 + 0x10) = PTR_s_Buff_Churnwalker_ChainTether_10185a8d0;
  uVar3 = FUN_10000c784();
  FUN_1003a985c(&local_40,uVar3);
  lVar2 = FUN_10000e524();
  FUN_1003a985c(&local_40,lVar2);
  uVar3 = FUN_1010a1520();
  lVar4 = FUN_1010a0e0c(uVar3,0,"*KindredSoundBalance*",0);
  uVar1 = FUN_1003ada58(*(undefined4 *)(lVar4 + 0x41c));
  *(char **)(lVar2 + 0x10) = "Sound_Churnwalker_Ability_C_Dash_1";
  *(undefined2 *)(lVar2 + 0x30) = 0x1ff;
  *(undefined4 *)(lVar2 + 0x34) = 1;
  *(undefined4 *)(lVar2 + 0x3c) = uVar1;
  *(undefined4 *)(lVar2 + 0x40) = 0xffffffff;
  *(byte *)(lVar2 + 0x38) = *(byte *)(lVar2 + 0x38) & 0xf8 | 4;
  *(undefined8 *)(lVar2 + 0x48) = 0;
  plVar5 = (long *)FUN_10000cd5c();
  FUN_1003a985c(&local_40,plVar5);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x90))(plVar5);
  local_50 = FUN_1003adf54;
  local_48 = 3;
  plVar5 = (long *)(**(code **)(*plVar5 + 0xa8))(plVar5,&local_50);
  (**(code **)(*plVar5 + 0xb0))(plVar5,1);
  lVar2 = FUN_10000ceb8();
  FUN_1003a985c(&local_40,lVar2);
  *(undefined4 *)(lVar2 + 0x2c) = 0x3dcccccd;
  *(undefined8 *)(lVar2 + 0x10) = 0;
  uVar3 = FUN_10000f9c0();
  FUN_1003a985c(&local_40,uVar3);
  lVar2 = FUN_10000e524();
  FUN_1003a985c(&local_40,lVar2);
  uVar3 = FUN_1010a1520();
  lVar4 = FUN_1010a0e0c(uVar3,0,"*KindredSoundBalance*",0);
  uVar1 = FUN_1003ada58(*(undefined4 *)(lVar4 + 0x41c));
  *(undefined2 *)(lVar2 + 0x30) = 0x3ff;
  *(undefined4 *)(lVar2 + 0x34) = 1;
  *(undefined4 *)(lVar2 + 0x3c) = uVar1;
  *(undefined4 *)(lVar2 + 0x40) = 0xffffffff;
  *(byte *)(lVar2 + 0x38) = *(byte *)(lVar2 + 0x38) & 0xf8 | 4;
  *(undefined8 *)(lVar2 + 0x48) = 0;
  *(char **)(lVar2 + 0x10) = "Sound_Churnwalker_Ability_C_End_1";
  *(char **)(lVar2 + 0x18) = "Sound_Churnwalker_Ability_C_End_1";
  *(char **)(lVar2 + 0x20) = "Sound_Churnwalker_Ability_C_End_1";
  uVar3 = FUN_10000f034();
  FUN_1003a985c(&local_40,uVar3);
  lVar2 = FUN_10000d8b8();
  FUN_1003a985c(&local_40,lVar2);
  *(undefined1 *)(lVar2 + 0x10) = 0;
  return local_40;
}




undefined8 FUN_10037d084(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_30 = 0;
  uStack_28 = 0;
  uVar1 = FUN_10000d8b8();
  FUN_1003a985c(&local_30,uVar1);
  uVar1 = FUN_10000ef8c();
  FUN_1003a985c(&local_30,uVar1);
  uVar1 = FUN_10000bb2c();
  FUN_1003a985c(&local_30,uVar1);
  uVar1 = FUN_10000f034();
  FUN_1003a985c(&local_30,uVar1);
  lVar2 = FUN_10000d8b8();
  FUN_1003a985c(&local_30,lVar2);
  *(undefined1 *)(lVar2 + 0x10) = 0;
  return local_30;
}




void FUN_10037d104(undefined8 param_1,undefined8 param_2)

{
  FUN_1003adf90("Attack",param_2,FUN_1003a3a5c);
  return;
}




void FUN_10037d118(undefined8 param_1,undefined8 param_2)

{
  FUN_1003adf90("AltAttack",param_2,FUN_1003a3a5c);
  return;
}




void FUN_10037d12c(undefined8 param_1,undefined8 param_2)

{
  FUN_1003adf90("CritAttack",param_2,FUN_1003a3acc);
  return;
}




undefined8 FUN_10037d140(void)

{
  return 0;
}




undefined8 FUN_10037d148(void)

{
  return 0;
}




undefined8 FUN_10037d150(void)

{
  return 0;
}




undefined8 FUN_10037d158(void)

{
  return 0;
}




undefined8 FUN_10037d160(void)

{
  return 0;
}




void FUN_10037d168(void)

{
  FUN_1003ac4b8("Attack","Effect_Grumpjaw_Attack",FUN_1003a3a5c,
                &PTR_s_Sound_Grumpjaw_Attack_1_10185a7b8,3,
                &PTR_s_Sound_Grumpjaw_Attack_Impact_1_10185a7d0,3);
  return;
}




void FUN_10037d19c(void)

{
  FUN_1003ac4b8("AltAttack","Effect_Grumpjaw_Attack_Alt",FUN_1003a3a5c,
                &PTR_s_Sound_Grumpjaw_Attack_1_10185a7b8,3,
                &PTR_s_Sound_Grumpjaw_Attack_Impact_1_10185a7d0,3);
  return;
}




void FUN_10037d1d0(void)

{
  FUN_1003ac4b8("CritAttack","Effect_Grumpjaw_Attack_Crit",FUN_1003a3acc,
                &PTR_s_Sound_Grumpjaw_Crit_10185a7e8,1,&PTR_s_Sound_Grumpjaw_Crit_Impact_10185a7f0,1
               );
  return;
}




void FUN_10037d204(void)

{
  FUN_1003ac4b8("Ability02_Frenzy","Effect_Grumpjaw_Frenzy_Attack",FUN_1003ac88c,
                &PTR_s_Sound_Grumpjaw_Ability_B_Bite_10185a7f8,1,
                &PTR_s_Sound_Grumpjaw_Attack_Impact_1_10185a7d0,3);
  return;
}




undefined8 FUN_10037d238(void)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  code *local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  local_70 = 0;
  uStack_68 = 0;
  lVar2 = FUN_10000d8b8();
  FUN_1003a985c(&local_70,lVar2);
  *(undefined1 *)(lVar2 + 0x10) = 1;
  uVar3 = FUN_10000ef8c();
  FUN_1003a985c(&local_70,uVar3);
  lVar2 = FUN_10000d42c();
  FUN_1003a985c(&local_70,lVar2);
  *(undefined **)(lVar2 + 0x10) = PTR_s_Buff_Grumpjaw_Eating_10185a800;
  *(code **)(lVar2 + 0x18) = FUN_1003ac9c0;
  lVar2 = FUN_10000dff8();
  FUN_1003a985c(&local_70,lVar2);
  *(undefined2 *)(lVar2 + 0x28) = 0x100;
  *(undefined8 *)(lVar2 + 0x30) = 0;
  uVar1 = FUN_1004d2524("Ability01_Charge");
  uVar1 = FUN_100015208("Ability01_Charge",uVar1,0x12345678);
  *(undefined4 *)(lVar2 + 0x10) = uVar1;
  uVar1 = FUN_1004d2524("AttackToIdle");
  uVar1 = FUN_100015208("AttackToIdle",uVar1,0x12345678);
  *(undefined4 *)(lVar2 + 0x20) = uVar1;
  lVar2 = FUN_10000e524();
  FUN_1003a985c(&local_70,lVar2);
  uVar3 = FUN_1010a1520();
  lVar4 = FUN_1010a0e0c(uVar3,0,"*KindredSoundBalance*",0);
  uVar1 = FUN_1003ac828(*(undefined4 *)(lVar4 + 0x3ac));
  *(char **)(lVar2 + 0x10) = "Sound_Grumpjaw_Ability_A_Breathe";
  *(undefined2 *)(lVar2 + 0x30) = 0x1ff;
  *(undefined4 *)(lVar2 + 0x34) = 1;
  *(undefined4 *)(lVar2 + 0x3c) = uVar1;
  *(undefined4 *)(lVar2 + 0x40) = 0xffffffff;
  *(byte *)(lVar2 + 0x38) = *(byte *)(lVar2 + 0x38) & 0xf8 | 4;
  *(undefined8 *)(lVar2 + 0x48) = 0;
  lVar2 = FUN_10000ceb8();
  FUN_1003a985c(&local_70,lVar2);
  *(code **)(lVar2 + 0x20) = FUN_1003aca8c;
  *(undefined8 *)(lVar2 + 0x10) = 0;
  lVar2 = FUN_10000e524();
  FUN_1003a985c(&local_70,lVar2);
  uVar3 = FUN_1010a1520();
  lVar4 = FUN_1010a0e0c(uVar3,0,"*KindredSoundBalance*",0);
  uVar1 = FUN_1003ac828(*(undefined4 *)(lVar4 + 0x3ac));
  *(char **)(lVar2 + 0x10) = "Sound_Grumpjaw_Ability_A_Charge";
  *(undefined2 *)(lVar2 + 0x30) = 0x1ff;
  *(undefined4 *)(lVar2 + 0x34) = 1;
  *(undefined4 *)(lVar2 + 0x3c) = uVar1;
  *(undefined4 *)(lVar2 + 0x40) = 0xffffffff;
  *(byte *)(lVar2 + 0x38) = *(byte *)(lVar2 + 0x38) & 0xf8 | 4;
  *(undefined8 *)(lVar2 + 0x48) = 0;
  lVar2 = FUN_10000e1b4();
  FUN_1003a985c(&local_70,lVar2);
  *(undefined8 *)(lVar2 + 0x40) = 0;
  *(ushort *)(lVar2 + 0x80) = *(ushort *)(lVar2 + 0x80) & 0xffef | 3;
  *(uint *)(lVar2 + 0x3c) = (uint)lVar2 & 0xffff;
  *(undefined8 *)(lVar2 + 0x20) = 0;
  *(undefined8 *)(lVar2 + 0x28) = 0x3f00000000000001;
  *(undefined4 *)(lVar2 + 0x10) = 0x2d35f059;
  uVar3 = FUN_10000bb2c();
  FUN_1003a985c(&local_70,uVar3);
  lVar2 = FUN_10000c8e8();
  FUN_1003a985c(&local_70,lVar2);
  lVar4 = FUN_10049ab34(lVar2 + 0x10);
  *(undefined **)(lVar4 + 8) = PTR_s_Buff_Grumpjaw_Talent_Rampage_10185a808;
  lVar4 = FUN_10000bd3c();
  FUN_1003a985c(lVar2 + 0xb0,lVar4);
  *(undefined **)(lVar4 + 0x10) = PTR_s_Buff_Grumpjaw_Rampage_SelfProjec_10185a810;
  *(undefined4 *)(lVar4 + 0x18) = 0x40000000;
  *(undefined2 *)(lVar4 + 0x68) = 1;
  *(byte *)(lVar4 + 0x6a) = *(byte *)(lVar4 + 0x6a) & 0xfe;
  plVar5 = (long *)FUN_10000cd5c();
  FUN_1003a985c(&local_70,plVar5);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x90))(plVar5);
  plVar5 = (long *)(**(code **)(*plVar5 + 0xb0))(plVar5,1);
  local_80 = FUN_1003ac9ac;
  local_78 = 3;
  (**(code **)(*plVar5 + 0xa0))(plVar5,&local_80);
  uVar3 = FUN_10000c784();
  FUN_1003a985c(&local_70,uVar3);
  lVar2 = FUN_10000ceb8();
  FUN_1003a985c(&local_70,lVar2);
  *(undefined4 *)(lVar2 + 0x2c) = 0x3dcccccd;
  *(undefined8 *)(lVar2 + 0x10) = 0;
  uVar3 = FUN_10000f9c0();
  FUN_1003a985c(&local_70,uVar3);
  lVar2 = FUN_10000c8e8();
  FUN_1003a985c(&local_70,lVar2);
  lVar4 = FUN_10049ab34(lVar2 + 0x10);
  *(undefined **)(lVar4 + 8) = PTR_s_Buff_Grumpjaw_Talent_Rampage_10185a808;
  lVar4 = FUN_10000c540();
  FUN_1003a985c(lVar2 + 0xb0,lVar4);
  *(undefined **)(lVar4 + 0x10) = PTR_s_Buff_Grumpjaw_Rampage_SelfProjec_10185a810;
  lVar2 = FUN_10000e524();
  FUN_1003a985c(&local_70,lVar2);
  uVar3 = FUN_1010a1520();
  lVar4 = FUN_1010a0e0c(uVar3,0,"*KindredSoundBalance*",0);
  uVar1 = FUN_1003ac828(*(undefined4 *)(lVar4 + 0x3ac));
  *(char **)(lVar2 + 0x10) = "Sound_Grumpjaw_Ability_A_Stop";
  *(undefined2 *)(lVar2 + 0x30) = 0x1ff;
  *(undefined4 *)(lVar2 + 0x34) = 1;
  *(undefined4 *)(lVar2 + 0x3c) = uVar1;
  *(undefined4 *)(lVar2 + 0x40) = 0xffffffff;
  *(byte *)(lVar2 + 0x38) = *(byte *)(lVar2 + 0x38) & 0xf8 | 4;
  *(undefined8 *)(lVar2 + 0x48) = 0;
  plVar5 = (long *)thunk_FUN_10000e6f4();
  FUN_1003a985c(&local_70,plVar5);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x50))(plVar5,"ability1");
  (**(code **)(*plVar5 + 0x18))(0x3e800000);
  lVar2 = FUN_10000dff8();
  FUN_1003a985c(&local_70,lVar2);
  *(undefined2 *)(lVar2 + 0x28) = 0x100;
  *(undefined8 *)(lVar2 + 0x30) = 0;
  uVar1 = FUN_1004d2524("Ability01_Thrashing");
  uVar1 = FUN_100015208("Ability01_Thrashing",uVar1,0x12345678);
  *(undefined4 *)(lVar2 + 0x10) = uVar1;
  uVar1 = FUN_1004d2524("AttackToIdle");
  uVar1 = FUN_100015208("AttackToIdle",uVar1,0x12345678);
  *(undefined4 *)(lVar2 + 0x20) = uVar1;
  lVar2 = FUN_10000ceb8();
  FUN_1003a985c(&local_70,lVar2);
  *(code **)(lVar2 + 0x20) = FUN_1003acaa0;
  *(undefined8 *)(lVar2 + 0x10) = 0;
  lVar2 = FUN_10000e524();
  FUN_1003a985c(&local_70,lVar2);
  uVar3 = FUN_1010a1520();
  lVar4 = FUN_1010a0e0c(uVar3,0,"*KindredSoundBalance*",0);
  uVar1 = FUN_1003ac828(*(undefined4 *)(lVar4 + 0x3ac));
  *(char **)(lVar2 + 0x10) = "Sound_Grumpjaw_Ability_A_Swipe";
  *(undefined2 *)(lVar2 + 0x30) = 0x1ff;
  *(undefined4 *)(lVar2 + 0x34) = 1;
  *(undefined4 *)(lVar2 + 0x3c) = uVar1;
  *(undefined4 *)(lVar2 + 0x40) = 0xffffffff;
  *(byte *)(lVar2 + 0x38) = *(byte *)(lVar2 + 0x38) & 0xf8 | 4;
  *(undefined8 *)(lVar2 + 0x48) = 0;
  lVar2 = FUN_10000e1b4();
  FUN_1003a985c(&local_70,lVar2);
  *(undefined8 *)(lVar2 + 0x40) = 0;
  *(ushort *)(lVar2 + 0x80) = *(ushort *)(lVar2 + 0x80) & 0xffef | 3;
  *(uint *)(lVar2 + 0x3c) = (uint)lVar2 & 0xffff;
  *(undefined8 *)(lVar2 + 0x20) = 0;
  *(undefined8 *)(lVar2 + 0x28) = 1;
  *(undefined4 *)(lVar2 + 0x10) = 0x22e5b845;
  lVar2 = FUN_10000eb64();
  FUN_1003a985c(&local_70,lVar2);
  *(code **)(lVar2 + 0x18) = FUN_1003acac8;
  lVar2 = FUN_10000eb64();
  FUN_1003a985c(&local_70,lVar2);
  *(code **)(lVar2 + 0x18) = FUN_1003acb84;
  plVar5 = (long *)FUN_10000bed8();
  FUN_1003a985c(&local_70,plVar5);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x70))(plVar5,PTR_s_Buff_Grumpjaw_A_BiteSlow_10185a818);
  local_80 = FUN_1003acc0c;
  local_78 = 3;
  (**(code **)(*plVar5 + 0x18))(plVar5,&local_80);
  plVar5 = (long *)FUN_10000bed8();
  FUN_1003a985c(&local_70,plVar5);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x70))(plVar5,PTR_s_Buff_Grumpjaw_A_Damage_10185a820);
  local_80 = (code *)CONCAT44(local_80._4_4_,0x3e4ccccd);
  local_78 = 1;
  (**(code **)(*plVar5 + 0x18))(plVar5,&local_80);
  uVar3 = FUN_10000c784();
  FUN_1003a985c(&local_70,uVar3);
  lVar2 = FUN_10000ceb8();
  FUN_1003a985c(&local_70,lVar2);
  *(code **)(lVar2 + 0x20) = FUN_1003acab4;
  *(undefined8 *)(lVar2 + 0x10) = 0;
  lVar2 = FUN_10000d8b8();
  FUN_1003a985c(&local_70,lVar2);
  *(undefined1 *)(lVar2 + 0x10) = 0;
  return local_70;
}




undefined8 FUN_10037d8c0(void)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  code *local_60;
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
  lVar2 = FUN_10000dff8();
  FUN_1003a985c(&local_50,lVar2);
  *(undefined2 *)(lVar2 + 0x28) = 0x100;
  *(undefined8 *)(lVar2 + 0x30) = 0;
  uVar1 = FUN_1004d2524("Ability02");
  uVar1 = FUN_100015208("Ability02",uVar1,0x12345678);
  *(undefined4 *)(lVar2 + 0x10) = uVar1;
  uVar1 = FUN_1004d2524("AttackToIdle");
  uVar1 = FUN_100015208("AttackToIdle",uVar1,0x12345678);
  *(undefined4 *)(lVar2 + 0x20) = uVar1;
  lVar2 = FUN_10000e524();
  FUN_1003a985c(&local_50,lVar2);
  uVar3 = FUN_1010a1520();
  lVar4 = FUN_1010a0e0c(uVar3,0,"*KindredSoundBalance*",0);
  uVar1 = FUN_1003ac828(*(undefined4 *)(lVar4 + 0x3b0));
  *(char **)(lVar2 + 0x10) = "Sound_Grumpjaw_Ability_B_Kick";
  *(undefined2 *)(lVar2 + 0x30) = 0x1ff;
  *(undefined4 *)(lVar2 + 0x34) = 1;
  *(undefined4 *)(lVar2 + 0x3c) = uVar1;
  *(undefined4 *)(lVar2 + 0x40) = 0xffffffff;
  *(byte *)(lVar2 + 0x38) = *(byte *)(lVar2 + 0x38) & 0xf8 | 4;
  *(undefined8 *)(lVar2 + 0x48) = 0;
  lVar2 = FUN_10000ceb8();
  FUN_1003a985c(&local_50,lVar2);
  *(undefined4 *)(lVar2 + 0x2c) = 0x3e4ccccd;
  *(undefined8 *)(lVar2 + 0x10) = 0;
  lVar2 = FUN_10000e524();
  FUN_1003a985c(&local_50,lVar2);
  uVar3 = FUN_1010a1520();
  lVar4 = FUN_1010a0e0c(uVar3,0,"*KindredSoundBalance*",0);
  uVar1 = FUN_1003ac828(*(undefined4 *)(lVar4 + 0x3b0));
  *(char **)(lVar2 + 0x10) = "Sounds_Grumpjaw_Ability_B_Headbutt";
  *(undefined2 *)(lVar2 + 0x30) = 0x1ff;
  *(undefined4 *)(lVar2 + 0x34) = 1;
  *(undefined4 *)(lVar2 + 0x3c) = uVar1;
  *(undefined4 *)(lVar2 + 0x40) = 0xffffffff;
  *(byte *)(lVar2 + 0x38) = *(byte *)(lVar2 + 0x38) & 0xf8 | 4;
  *(undefined8 *)(lVar2 + 0x48) = 0;
  plVar5 = (long *)thunk_FUN_10000e6f4();
  FUN_1003a985c(&local_50,plVar5);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x50))(plVar5,"ability2");
  (**(code **)(*plVar5 + 0x18))(0x3e800000);
  plVar5 = (long *)FUN_10000bdf0();
  FUN_1003a985c(&local_50,plVar5);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x50))(plVar5,DAT_10185a7b0);
  local_60 = FUN_1003acc20;
  local_58 = 3;
  (**(code **)(*plVar5 + 0x18))(plVar5,&local_60);
  lVar2 = FUN_10000c8e8();
  FUN_1003a985c(&local_50,lVar2);
  lVar4 = FUN_10049ab34(lVar2 + 0x10);
  *(undefined **)(lVar4 + 8) = PTR_s_Buff_Grumpjaw_Talent_Reconstitut_10185a828;
  plVar5 = (long *)FUN_10000bdf0();
  FUN_1003a985c(lVar2 + 0xb0,plVar5);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x50))
                             (plVar5,PTR_s_Buff_Grumpjaw_Reconstitution_Lif_10185a830);
  local_60 = FUN_1003acc20;
  local_58 = 3;
  (**(code **)(*plVar5 + 0x18))(plVar5,&local_60);
  uVar3 = FUN_10000c784();
  FUN_1003a985c(&local_50,uVar3);
  plVar5 = (long *)FUN_10000cd5c();
  FUN_1003a985c(&local_50,plVar5);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x68))(0x3f000000,0x3f800000,0x3f800000,0x3f800000,plVar5)
  ;
  plVar5 = (long *)(**(code **)(*plVar5 + 0xb0))(plVar5,1);
  local_60 = FUN_1003acc34;
  local_58 = 3;
  plVar5 = (long *)(**(code **)(*plVar5 + 0xa0))(plVar5,&local_60);
  (**(code **)(*plVar5 + 0xb8))(0x41700000);
  lVar2 = FUN_10000ceb8();
  FUN_1003a985c(&local_50,lVar2);
  *(undefined4 *)(lVar2 + 0x2c) = 0x3dcccccd;
  *(undefined8 *)(lVar2 + 0x10) = 0;
  uVar3 = FUN_10000f9c0();
  FUN_1003a985c(&local_50,uVar3);
  uVar3 = FUN_10000bc94();
  FUN_1003a985c(&local_50,uVar3);
  plVar5 = (long *)FUN_10000cb8c();
  FUN_1003a985c(&local_50,plVar5);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x50))(plVar5);
  (**(code **)(*plVar5 + 0x38))(plVar5,"INITIAL_HIT",2);
  uVar3 = FUN_10000c784();
  FUN_1003a985c(&local_50,uVar3);
  lVar2 = FUN_10000e7fc();
  FUN_1003a985c(&local_50,lVar2);
  *(undefined4 *)(lVar2 + 0x10) = 0x3f333333;
  lVar2 = FUN_10000d8b8();
  FUN_1003a985c(&local_50,lVar2);
  *(undefined1 *)(lVar2 + 0x10) = 0;
  return local_50;
}




undefined8 FUN_10037dce4(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined4 uVar5;
  code *local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  local_50 = 0;
  uStack_48 = 0;
  uVar1 = FUN_10000d8b8();
  FUN_1003a985c(&local_50,uVar1);
  lVar2 = FUN_10000ef8c();
  FUN_1003a985c(&local_50,lVar2);
  *(byte *)(lVar2 + 0x10) = *(byte *)(lVar2 + 0x10) & 0xe7 | 4;
  lVar2 = FUN_10000e524();
  FUN_1003a985c(&local_50,lVar2);
  uVar1 = FUN_1010a1520();
  lVar3 = FUN_1010a0e0c(uVar1,0,"*KindredSoundBalance*",0);
  uVar5 = FUN_1003ac828(*(undefined4 *)(lVar3 + 0x3b4));
  *(char **)(lVar2 + 0x10) = "Sound_Grumpjaw_Ability_C_Roar";
  *(undefined2 *)(lVar2 + 0x30) = 0x1ff;
  *(undefined4 *)(lVar2 + 0x34) = 1;
  *(undefined4 *)(lVar2 + 0x3c) = uVar5;
  *(undefined4 *)(lVar2 + 0x40) = 0xffffffff;
  *(byte *)(lVar2 + 0x38) = *(byte *)(lVar2 + 0x38) & 0xf8 | 4;
  *(undefined8 *)(lVar2 + 0x48) = 0;
  lVar2 = FUN_10000dff8();
  FUN_1003a985c(&local_50,lVar2);
  *(undefined2 *)(lVar2 + 0x28) = 0x100;
  *(undefined8 *)(lVar2 + 0x30) = 0;
  uVar5 = FUN_1004d2524("Ability03_C_Windup");
  uVar5 = FUN_100015208("Ability03_C_Windup",uVar5,0x12345678);
  *(undefined4 *)(lVar2 + 0x10) = uVar5;
  uVar5 = FUN_1004d2524("AttackToIdle");
  uVar5 = FUN_100015208("AttackToIdle",uVar5,0x12345678);
  *(undefined4 *)(lVar2 + 0x20) = uVar5;
  lVar2 = FUN_10000e1b4();
  FUN_1003a985c(&local_50,lVar2);
  *(undefined8 *)(lVar2 + 0x40) = 0;
  *(ushort *)(lVar2 + 0x80) = *(ushort *)(lVar2 + 0x80) & 0xffec | 2;
  *(uint *)(lVar2 + 0x3c) = (uint)lVar2 & 0xffff;
  *(undefined8 *)(lVar2 + 0x20) = 0;
  *(undefined8 *)(lVar2 + 0x28) = 0x3f66666600000001;
  *(undefined4 *)(lVar2 + 0x10) = 0xe4e43ecd;
  plVar4 = (long *)thunk_FUN_10000e6f4();
  FUN_1003a985c(&local_50,plVar4);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))(plVar4,"ability3");
  (**(code **)(*plVar4 + 0x18))(0x3f000000);
  uVar1 = FUN_10000c784();
  FUN_1003a985c(&local_50,uVar1);
  lVar2 = FUN_10000ceb8();
  FUN_1003a985c(&local_50,lVar2);
  *(code **)(lVar2 + 0x20) = FUN_1003accc0;
  *(undefined8 *)(lVar2 + 0x10) = 0;
  uVar1 = FUN_10000bb2c();
  FUN_1003a985c(&local_50,uVar1);
  lVar2 = FUN_10000bd3c();
  FUN_1003a985c(&local_50,lVar2);
  *(undefined **)(lVar2 + 0x10) = PTR_s_Buff_Grumpjaw_C_SelfProjectile_10185a838;
  *(code **)(lVar2 + 0x28) = FUN_1003acc48;
  *(undefined2 *)(lVar2 + 0x68) = 1;
  *(byte *)(lVar2 + 0x6a) = *(byte *)(lVar2 + 0x6a) & 0xfe;
  uVar1 = FUN_10000c784();
  FUN_1003a985c(&local_50,uVar1);
  plVar4 = (long *)FUN_10000cd5c();
  FUN_1003a985c(&local_50,plVar4);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x88))(plVar4);
  local_60 = FUN_1003accac;
  local_58 = 3;
  plVar4 = (long *)(**(code **)(*plVar4 + 0xa8))(plVar4,&local_60);
  (**(code **)(*plVar4 + 0xb0))(plVar4,1);
  lVar2 = FUN_10000ceb8();
  FUN_1003a985c(&local_50,lVar2);
  *(code **)(lVar2 + 0x20) = FUN_1003accac;
  *(undefined8 *)(lVar2 + 0x10) = 0;
  uVar1 = FUN_10000f9c0();
  FUN_1003a985c(&local_50,uVar1);
  lVar2 = FUN_10000e1b4();
  FUN_1003a985c(&local_50,lVar2);
  *(undefined8 *)(lVar2 + 0x40) = 0;
  *(ushort *)(lVar2 + 0x80) = *(ushort *)(lVar2 + 0x80) & 0xffef | 3;
  *(uint *)(lVar2 + 0x3c) = (uint)lVar2 & 0xffff;
  *(undefined8 *)(lVar2 + 0x20) = 0;
  *(undefined8 *)(lVar2 + 0x28) = 1;
  *(undefined4 *)(lVar2 + 0x10) = 0xf84b9b8b;
  lVar2 = FUN_10000eaac();
  FUN_1003a985c(&local_50,lVar2);
  *(undefined **)(lVar2 + 0x78) = PTR_s_Buff_Grumpjaw_C_Grabbed_10185a840;
  *(byte *)(lVar2 + 0x80) = *(byte *)(lVar2 + 0x80) & 0xf0 | DAT_101d23a38 != '\0' | 0xc;
  lVar2 = FUN_10000c8e8();
  FUN_1003a985c(&local_50,lVar2);
  lVar3 = FUN_10049ae50(lVar2 + 0x10);
  *(undefined4 *)(lVar3 + 0x18) = 0;
  *(undefined4 *)(lVar3 + 8) = 0;
  *(undefined4 *)(lVar3 + 0x10) = 1;
  lVar3 = FUN_10000b720();
  FUN_1003a985c(lVar2 + 0xb0,lVar3);
  *(undefined **)(lVar3 + 0x30) = PTR_s_Ability__Grumpjaw__Eat_101859828;
  uVar1 = FUN_10000c784();
  FUN_1003a985c(&local_50,uVar1);
  lVar2 = FUN_10000dff8();
  FUN_1003a985c(&local_50,lVar2);
  *(undefined2 *)(lVar2 + 0x28) = 0x100;
  *(undefined8 *)(lVar2 + 0x30) = 0;
  uVar5 = FUN_1004d2524("Ability03_C_RunStop");
  uVar5 = FUN_100015208("Ability03_C_RunStop",uVar5,0x12345678);
  *(undefined4 *)(lVar2 + 0x10) = uVar5;
  uVar5 = FUN_1004d2524("AttackToIdle");
  uVar5 = FUN_100015208("AttackToIdle",uVar5,0x12345678);
  *(undefined4 *)(lVar2 + 0x20) = uVar5;
  lVar2 = FUN_10000ceb8();
  FUN_1003a985c(&local_50,lVar2);
  *(code **)(lVar2 + 0x20) = FUN_1003accd4;
  *(undefined8 *)(lVar2 + 0x10) = 0;
  lVar2 = FUN_10000d8b8();
  FUN_1003a985c(&local_50,lVar2);
  *(undefined1 *)(lVar2 + 0x10) = 0;
  return local_50;
}




undefined8 FUN_10037e150(void)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  undefined4 uVar5;
  code *local_50;
  undefined4 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  local_40 = 0;
  uStack_38 = 0;
  uVar1 = FUN_10000d8b8();
  FUN_1003a985c(&local_40,uVar1);
  lVar2 = FUN_10000ef8c();
  FUN_1003a985c(&local_40,lVar2);
  *(byte *)(lVar2 + 0x10) = *(byte *)(lVar2 + 0x10) & 0xe7 | 4;
  plVar3 = (long *)FUN_10000dc58();
  FUN_1003a985c(&local_40,plVar3);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x50))(plVar3,PTR_s_Ability__Grumpjaw__C_101859818);
  local_50 = FUN_1003ad188;
  local_48 = 4;
  (**(code **)(*plVar3 + 0x20))(plVar3,&local_50);
  lVar2 = FUN_10000e524();
  FUN_1003a985c(&local_40,lVar2);
  uVar1 = FUN_1010a1520();
  lVar4 = FUN_1010a0e0c(uVar1,0,"*KindredSoundBalance*",0);
  uVar5 = FUN_1003ac828(*(undefined4 *)(lVar4 + 0x3b4));
  *(char **)(lVar2 + 0x10) = "Sound_Grumpjaw_Ability_C_Spit";
  *(undefined2 *)(lVar2 + 0x30) = 0x1ff;
  *(undefined4 *)(lVar2 + 0x34) = 1;
  *(undefined4 *)(lVar2 + 0x3c) = uVar5;
  *(undefined4 *)(lVar2 + 0x40) = 0xffffffff;
  *(byte *)(lVar2 + 0x38) = *(byte *)(lVar2 + 0x38) & 0xf8 | 4;
  *(undefined8 *)(lVar2 + 0x48) = 0;
  lVar2 = FUN_10000dff8();
  FUN_1003a985c(&local_40,lVar2);
  *(undefined2 *)(lVar2 + 0x28) = 0x100;
  *(undefined8 *)(lVar2 + 0x30) = 0;
  uVar5 = FUN_1004d2524("Ability03_C_SpitOut");
  uVar5 = FUN_100015208("Ability03_C_SpitOut",uVar5,0x12345678);
  *(undefined4 *)(lVar2 + 0x10) = uVar5;
  uVar5 = FUN_1004d2524("AttackToIdle");
  uVar5 = FUN_100015208("AttackToIdle",uVar5,0x12345678);
  *(undefined4 *)(lVar2 + 0x20) = uVar5;
  plVar3 = (long *)thunk_FUN_10000e6f4();
  FUN_1003a985c(&local_40,plVar3);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x50))(plVar3,"spitOut");
  (**(code **)(*plVar3 + 0x18))(0x3f000000);
  lVar2 = FUN_10000ceb8();
  FUN_1003a985c(&local_40,lVar2);
  *(undefined4 *)(lVar2 + 0x2c) = 0x3ecccccd;
  *(undefined8 *)(lVar2 + 0x10) = 0;
  lVar2 = FUN_10000eaac();
  FUN_1003a985c(&local_40,lVar2);
  *(undefined **)(lVar2 + 0x78) = PTR_s_Buff_Grumpjaw_Eaten_10185a858;
  *(byte *)(lVar2 + 0x80) = *(byte *)(lVar2 + 0x80) & 0xf0 | DAT_101d23a38 != '\0' | 0xc;
  lVar2 = FUN_10000c540();
  FUN_1003a985c(&local_40,lVar2);
  *(undefined **)(lVar2 + 0x10) = PTR_s_Buff_Grumpjaw_Eaten_10185a858;
  lVar2 = FUN_10000bd3c();
  FUN_1003a985c(&local_40,lVar2);
  *(undefined **)(lVar2 + 0x10) = PTR_s_Buff_Stunned_10185a208;
  *(undefined4 *)(lVar2 + 0x18) = 0x3ecccccd;
  *(undefined2 *)(lVar2 + 0x68) = 1;
  *(byte *)(lVar2 + 0x6a) = *(byte *)(lVar2 + 0x6a) & 0xfe;
  lVar2 = FUN_10000c150();
  FUN_1003a985c(&local_40,lVar2);
  *(code **)(lVar2 + 0x10) = FUN_1003acfec;
  *(byte *)(lVar2 + 0x18) = *(byte *)(lVar2 + 0x18) & 0xfc;
  uVar1 = FUN_10000c784();
  FUN_1003a985c(&local_40,uVar1);
  lVar2 = FUN_10000e1b4();
  FUN_1003a985c(&local_40,lVar2);
  *(undefined8 *)(lVar2 + 0x40) = 0;
  *(ushort *)(lVar2 + 0x80) = *(ushort *)(lVar2 + 0x80) & 0xffef | 3;
  *(uint *)(lVar2 + 0x3c) = (uint)lVar2 & 0xffff;
  *(undefined8 *)(lVar2 + 0x20) = 0;
  *(undefined8 *)(lVar2 + 0x28) = 1;
  *(undefined4 *)(lVar2 + 0x10) = 0xf45c75d1;
  uVar1 = FUN_10000bb2c();
  FUN_1003a985c(&local_40,uVar1);
  lVar2 = FUN_10000c540();
  FUN_1003a985c(&local_40,lVar2);
  *(undefined **)(lVar2 + 0x10) = PTR_s_Buff_Grumpjaw_Eating_10185a800;
  uVar1 = FUN_10000c784();
  FUN_1003a985c(&local_40,uVar1);
  lVar2 = FUN_10000d8b8();
  FUN_1003a985c(&local_40,lVar2);
  *(undefined1 *)(lVar2 + 0x10) = 0;
  return local_40;
}




undefined8 FUN_10037e4ac(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  code *local_50;
  undefined4 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  local_40 = 0;
  uStack_38 = 0;
  uVar2 = FUN_10000d8b8();
  FUN_1003a985c(&local_40,uVar2);
  lVar3 = FUN_10000dff8();
  FUN_1003a985c(&local_40,lVar3);
  *(undefined2 *)(lVar3 + 0x28) = 0x100;
  *(undefined8 *)(lVar3 + 0x30) = 0;
  uVar1 = FUN_1004d2524("Ability03_C_Eat");
  uVar1 = FUN_100015208("Ability03_C_Eat",uVar1,0x12345678);
  *(undefined4 *)(lVar3 + 0x10) = uVar1;
  uVar1 = FUN_1004d2524("AttackToIdle");
  uVar1 = FUN_100015208("AttackToIdle",uVar1,0x12345678);
  *(undefined4 *)(lVar3 + 0x20) = uVar1;
  lVar3 = FUN_10000e1b4();
  FUN_1003a985c(&local_40,lVar3);
  *(undefined8 *)(lVar3 + 0x40) = 0;
  *(ushort *)(lVar3 + 0x80) = *(ushort *)(lVar3 + 0x80) & 0xffef | 3;
  *(uint *)(lVar3 + 0x3c) = (uint)lVar3 & 0xffff;
  *(undefined8 *)(lVar3 + 0x20) = 0;
  *(undefined8 *)(lVar3 + 0x28) = 1;
  *(undefined4 *)(lVar3 + 0x10) = 0x6df1cdfa;
  lVar3 = FUN_10000ceb8();
  FUN_1003a985c(&local_40,lVar3);
  *(undefined4 *)(lVar3 + 0x2c) = 0x3dcccccd;
  *(undefined8 *)(lVar3 + 0x10) = 0;
  lVar3 = FUN_10000e524();
  FUN_1003a985c(&local_40,lVar3);
  uVar2 = FUN_1010a1520();
  lVar4 = FUN_1010a0e0c(uVar2,0,"*KindredSoundBalance*",0);
  uVar1 = FUN_1003ac828(*(undefined4 *)(lVar4 + 0x3b4));
  *(char **)(lVar3 + 0x10) = "Sound_Grumpjaw_Ability_C_Toss";
  *(undefined2 *)(lVar3 + 0x30) = 0x1ff;
  *(undefined4 *)(lVar3 + 0x34) = 1;
  *(undefined4 *)(lVar3 + 0x3c) = uVar1;
  *(undefined4 *)(lVar3 + 0x40) = 0xffffffff;
  *(byte *)(lVar3 + 0x38) = *(byte *)(lVar3 + 0x38) & 0xf8 | 4;
  *(undefined8 *)(lVar3 + 0x48) = 0;
  lVar3 = FUN_10000eaac();
  FUN_1003a985c(&local_40,lVar3);
  *(undefined **)(lVar3 + 0x78) = PTR_s_Buff_Grumpjaw_C_Grabbed_10185a840;
  *(byte *)(lVar3 + 0x80) = *(byte *)(lVar3 + 0x80) & 0xf0 | DAT_101d23a38 != '\0' | 0xc;
  lVar3 = FUN_10000c540();
  FUN_1003a985c(&local_40,lVar3);
  *(undefined **)(lVar3 + 0x10) = PTR_s_Buff_Grumpjaw_C_Grabbed_10185a840;
  lVar3 = FUN_10000bd3c();
  FUN_1003a985c(&local_40,lVar3);
  *(undefined **)(lVar3 + 0x10) = PTR_s_Buff_Grumpjaw_C_BeingTossed_10185a850;
  *(undefined4 *)(lVar3 + 0x18) = 0x3f666666;
  *(undefined2 *)(lVar3 + 0x68) = 1;
  *(byte *)(lVar3 + 0x6a) = *(byte *)(lVar3 + 0x6a) & 0xfe;
  lVar3 = FUN_10000c150();
  FUN_1003a985c(&local_40,lVar3);
  *(code **)(lVar3 + 0x10) = FUN_1003acd70;
  *(byte *)(lVar3 + 0x18) = *(byte *)(lVar3 + 0x18) & 0xfc;
  lVar3 = FUN_10000c0a8();
  FUN_1003a985c(&local_40,lVar3);
  *(code **)(lVar3 + 0x10) = FUN_1003acce8;
  *(undefined2 *)(lVar3 + 0x18) = 0;
  uVar2 = FUN_10000c784();
  FUN_1003a985c(&local_40,uVar2);
  lVar3 = FUN_10000ceb8();
  FUN_1003a985c(&local_40,lVar3);
  *(code **)(lVar3 + 0x20) = FUN_1003acd5c;
  *(undefined8 *)(lVar3 + 0x10) = 0;
  uVar2 = FUN_10000f9c0();
  FUN_1003a985c(&local_40,uVar2);
  lVar3 = FUN_10000eaac();
  FUN_1003a985c(&local_40,lVar3);
  *(undefined **)(lVar3 + 0x78) = PTR_s_Buff_Grumpjaw_C_BeingTossed_10185a850;
  *(byte *)(lVar3 + 0x80) = *(byte *)(lVar3 + 0x80) & 0xf0 | DAT_101d23a38 != '\0' | 0xc;
  lVar3 = FUN_10000c8e8();
  FUN_1003a985c(&local_40,lVar3);
  lVar4 = FUN_10049ae50(lVar3 + 0x10);
  *(undefined4 *)(lVar4 + 0x18) = 0;
  *(undefined4 *)(lVar4 + 8) = 0;
  *(undefined4 *)(lVar4 + 0x10) = 1;
  lVar4 = FUN_10000bd3c();
  FUN_1003a985c(lVar3 + 0xb0,lVar4);
  *(undefined **)(lVar4 + 0x10) = PTR_s_Buff_Grumpjaw_Eaten_10185a858;
  *(undefined4 *)(lVar4 + 0x18) = 0xbf800000;
  *(undefined2 *)(lVar4 + 0x68) = 1;
  *(byte *)(lVar4 + 0x6a) = *(byte *)(lVar4 + 0x6a) & 0xfe;
  plVar5 = (long *)FUN_10000bdf0();
  FUN_1003a985c(lVar3 + 0xb0,plVar5);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x50))(plVar5,PTR_s_Buff_Grumpjaw_Eating_10185a800);
  local_50 = FUN_1003acf38;
  local_48 = 5;
  plVar5 = (long *)(**(code **)(*plVar5 + 0x18))(plVar5,&local_50);
  (**(code **)(*plVar5 + 0x60))(plVar5,FUN_1003ace7c);
  uVar2 = FUN_10000c784();
  FUN_1003a985c(&local_40,uVar2);
  uVar2 = FUN_10000c6d4();
  FUN_1003a985c(&local_40,uVar2);
  lVar3 = FUN_10000ceb8();
  FUN_1003a985c(&local_40,lVar3);
  *(code **)(lVar3 + 0x20) = FUN_1003accd4;
  *(undefined8 *)(lVar3 + 0x10) = 0;
  lVar3 = FUN_10000d8b8();
  FUN_1003a985c(&local_40,lVar3);
  *(undefined1 *)(lVar3 + 0x10) = 0;
  uVar2 = FUN_10000f034();
  FUN_1003a985c(&local_40,uVar2);
  return local_40;
}




void FUN_10037e8d0(void)

{
  FUN_1003ae090("Attack","Effect_Tony_AA",0);
  return;
}




void FUN_10037e8e8(void)

{
  FUN_1003ae090("AltAttack","Effect_Tony_AA_Alt",0);
  return;
}




void FUN_10037e900(void)

{
  FUN_1003ae090("CritAttack","Effect_Tony_AA_Alt",2);
  return;
}




undefined8 FUN_10037e918(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  undefined4 uVar5;
  code *local_50;
  undefined4 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  local_40 = 0;
  uStack_38 = 0;
  lVar1 = FUN_10000e524();
  FUN_1003a985c(&local_40,lVar1);
  uVar2 = FUN_1010a1520();
  lVar3 = FUN_1010a0e0c(uVar2,0,"*KindredSoundBalance*",0);
  uVar5 = FUN_1003ae36c(*(undefined4 *)(lVar3 + 0x474));
  *(char **)(lVar1 + 0x10) = "Sound_Tony_Ability_A_Activate";
  *(undefined2 *)(lVar1 + 0x30) = 0x1ff;
  *(undefined4 *)(lVar1 + 0x34) = 1;
  *(undefined4 *)(lVar1 + 0x3c) = uVar5;
  *(undefined4 *)(lVar1 + 0x40) = 0xffffffff;
  *(byte *)(lVar1 + 0x38) = *(byte *)(lVar1 + 0x38) & 0xf8 | 4;
  *(undefined8 *)(lVar1 + 0x48) = 0;
  lVar1 = FUN_10000d2d0();
  FUN_1003a985c(&local_40,lVar1);
  *(undefined **)(lVar1 + 0x10) = PTR_s_Buff_Tony_A_ChargedAttack1_10185a940;
  *(undefined4 *)(lVar1 + 0x18) = 0x400;
  lVar1 = FUN_10000d2d0();
  FUN_1003a985c(&local_40,lVar1);
  *(undefined **)(lVar1 + 0x10) = PTR_s_Buff_Tony_A_ChargedAttack2_10185a948;
  *(undefined4 *)(lVar1 + 0x18) = 0x400;
  lVar1 = FUN_10000d2d0();
  FUN_1003a985c(&local_40,lVar1);
  *(undefined **)(lVar1 + 0x10) = PTR_s_Buff_Tony_A_ChargedAttack3_10185a950;
  *(undefined4 *)(lVar1 + 0x18) = 0x400;
  plVar4 = (long *)FUN_10000bdf0();
  FUN_1003a985c(&local_40,plVar4);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))(plVar4,PTR_s_Buff_Tony_A_ChargedAttack1_10185a940);
  local_50 = FUN_1003ae3d0;
  local_48 = 3;
  (**(code **)(*plVar4 + 0x18))(plVar4,&local_50);
  plVar4 = (long *)FUN_10000bdf0();
  FUN_1003a985c(&local_40,plVar4);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))
                             (plVar4,PTR_s_Buff_Tony_A_SpeedBoostAndDamage_10185a958);
  local_50 = FUN_1003ae3e4;
  local_48 = 3;
  (**(code **)(*plVar4 + 0x18))(plVar4,&local_50);
  uVar2 = FUN_10000c784();
  FUN_1003a985c(&local_40,uVar2);
  uVar2 = FUN_10000f034();
  FUN_1003a985c(&local_40,uVar2);
  return local_40;
}




undefined8 FUN_10037eae0(void)

{
  byte bVar1;
  bool bVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  undefined4 uVar7;
  code *local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  local_60 = 0;
  uStack_58 = 0;
  lVar3 = FUN_10000d8b8();
  FUN_1003a985c(&local_60,lVar3);
  *(undefined1 *)(lVar3 + 0x10) = 1;
  uVar4 = FUN_10000ef8c();
  FUN_1003a985c(&local_60,uVar4);
  plVar5 = (long *)thunk_FUN_10000e0ac();
  FUN_1003a985c(&local_60,plVar5);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x58))(plVar5,"Ability01_HitA");
  (**(code **)(*plVar5 + 0x18))(plVar5,"AttackToIdle");
  lVar3 = FUN_10000e524();
  FUN_1003a985c(&local_60,lVar3);
  uVar4 = FUN_1010a1520();
  lVar6 = FUN_1010a0e0c(uVar4,0,"*KindredSoundBalance*",0);
  uVar7 = FUN_1003ae36c(*(undefined4 *)(lVar6 + 0x474));
  *(char **)(lVar3 + 0x10) = "Sound_Tony_Ability_A_Swing_01";
  *(undefined2 *)(lVar3 + 0x30) = 0x1ff;
  *(undefined4 *)(lVar3 + 0x34) = 1;
  *(undefined4 *)(lVar3 + 0x3c) = uVar7;
  *(undefined4 *)(lVar3 + 0x40) = 0xffffffff;
  *(byte *)(lVar3 + 0x38) = *(byte *)(lVar3 + 0x38) & 0xf8 | 4;
  *(undefined8 *)(lVar3 + 0x48) = 0;
  plVar5 = (long *)FUN_10000cd5c();
  FUN_1003a985c(&local_60,plVar5);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x68))(0x3e99999a,0x3e4ccccd,0x3fa66666,0x3f4ccccd,plVar5)
  ;
  plVar5 = (long *)(**(code **)(*plVar5 + 0xb0))(plVar5,1);
  local_70 = FUN_1003ae498;
  local_68 = 3;
  plVar5 = (long *)(**(code **)(*plVar5 + 0xa0))(plVar5,&local_70);
  (**(code **)(*plVar5 + 0xb8))(0x40c00000);
  lVar3 = FUN_10000ceb8();
  FUN_1003a985c(&local_60,lVar3);
  *(undefined4 *)(lVar3 + 0x2c) = 0x3dcccccd;
  *(undefined8 *)(lVar3 + 0x10) = 0;
  uVar4 = FUN_10000f9c0();
  FUN_1003a985c(&local_60,uVar4);
  plVar5 = (long *)thunk_FUN_10000e358();
  FUN_1003a985c(&local_60,plVar5);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x58))(plVar5);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x48))(plVar5,"Effect_Tony_A1");
  (**(code **)(*plVar5 + 0x78))(plVar5,0);
  plVar5 = (long *)FUN_10000cc74();
  FUN_1003a985c(&local_60,plVar5);
  (**(code **)(*plVar5 + 0x58))(plVar5,1);
  lVar3 = FUN_1003e10f0();
  bVar1 = *(byte *)(lVar3 + 0xe5);
  lVar3 = FUN_10000c8e8();
  FUN_1003a985c(&local_60,lVar3);
  lVar6 = FUN_10049ab34(lVar3 + 0x10);
  *(undefined **)(lVar6 + 8) = PTR_s_Buff_Tony_Talent_TalentB_10185a960;
  lVar3 = lVar3 + 0xb0;
  lVar6 = FUN_10000ed74();
  FUN_1003a985c(lVar3,lVar6);
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
  *(byte *)(lVar6 + 0x6a) = bVar1 | 0x14;
  *(undefined2 *)(lVar6 + 0x68) = 0x6120;
  bVar2 = DAT_101d23a38 != '\0';
  *(undefined4 *)(lVar6 + 0xa4) = 0x40400000;
  *(byte *)(lVar6 + 0xa8) = *(byte *)(lVar6 + 0xa8) & 0xf0 | bVar2;
  plVar5 = (long *)FUN_10000cb8c();
  FUN_1003a985c(lVar3,plVar5);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x50))(plVar5);
  local_70 = FUN_1003ae3f8;
  local_68 = 4;
  (**(code **)(*plVar5 + 0x18))(plVar5,&local_70,0,0);
  uVar4 = FUN_10000c784();
  FUN_1003a985c(lVar3,uVar4);
  lVar3 = FUN_10000e524();
  FUN_1003a985c(&local_60,lVar3);
  uVar4 = FUN_1010a1520();
  lVar6 = FUN_1010a0e0c(uVar4,0,"*KindredSoundBalance*",0);
  uVar7 = FUN_1003ae36c(*(undefined4 *)(lVar6 + 0x474));
  *(char **)(lVar3 + 0x10) = "Sound_Tony_Ability_A_Impact_01";
  *(undefined2 *)(lVar3 + 0x30) = 0x1ff;
  *(undefined4 *)(lVar3 + 0x34) = 1;
  *(undefined4 *)(lVar3 + 0x3c) = uVar7;
  *(undefined4 *)(lVar3 + 0x40) = 0xffffffff;
  *(byte *)(lVar3 + 0x38) = *(byte *)(lVar3 + 0x38) & 0xf8 | 4;
  *(undefined8 *)(lVar3 + 0x48) = 0;
  plVar5 = (long *)FUN_10000f698();
  FUN_1003a985c(&local_60,plVar5);
  (**(code **)(*plVar5 + 0x50))
            (plVar5,PTR_s_Buff_Tony_A_ChargedAttack1_10185a940,
             PTR_s_Buff_Tony_A_ChargedAttack2_10185a948);
  lVar3 = FUN_10000d8b8();
  FUN_1003a985c(&local_60,lVar3);
  *(undefined1 *)(lVar3 + 0x10) = 0;
  return local_60;
}




undefined8 FUN_10037eefc(void)

{
  byte bVar1;
  bool bVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  undefined4 uVar7;
  code *local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  local_60 = 0;
  uStack_58 = 0;
  lVar3 = FUN_10000d8b8();
  FUN_1003a985c(&local_60,lVar3);
  *(undefined1 *)(lVar3 + 0x10) = 1;
  uVar4 = FUN_10000ef8c();
  FUN_1003a985c(&local_60,uVar4);
  plVar5 = (long *)thunk_FUN_10000e0ac();
  FUN_1003a985c(&local_60,plVar5);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x58))(plVar5,"Ability01_HitB");
  (**(code **)(*plVar5 + 0x18))(plVar5,"AttackToIdle");
  lVar3 = FUN_10000e524();
  FUN_1003a985c(&local_60,lVar3);
  uVar4 = FUN_1010a1520();
  lVar6 = FUN_1010a0e0c(uVar4,0,"*KindredSoundBalance*",0);
  uVar7 = FUN_1003ae36c(*(undefined4 *)(lVar6 + 0x474));
  *(char **)(lVar3 + 0x10) = "Sound_Tony_Ability_A_Swing_02";
  *(undefined2 *)(lVar3 + 0x30) = 0x1ff;
  *(undefined4 *)(lVar3 + 0x34) = 1;
  *(undefined4 *)(lVar3 + 0x3c) = uVar7;
  *(undefined4 *)(lVar3 + 0x40) = 0xffffffff;
  *(byte *)(lVar3 + 0x38) = *(byte *)(lVar3 + 0x38) & 0xf8 | 4;
  *(undefined8 *)(lVar3 + 0x48) = 0;
  plVar5 = (long *)FUN_10000cd5c();
  FUN_1003a985c(&local_60,plVar5);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x68))(0x3e99999a,0x3e4ccccd,0x3fa66666,0x3f4ccccd,plVar5)
  ;
  plVar5 = (long *)(**(code **)(*plVar5 + 0xb0))(plVar5,1);
  local_70 = FUN_1003ae498;
  local_68 = 3;
  plVar5 = (long *)(**(code **)(*plVar5 + 0xa0))(plVar5,&local_70);
  (**(code **)(*plVar5 + 0xb8))(0x40c00000);
  lVar3 = FUN_10000ceb8();
  FUN_1003a985c(&local_60,lVar3);
  *(undefined4 *)(lVar3 + 0x2c) = 0x3dcccccd;
  *(undefined8 *)(lVar3 + 0x10) = 0;
  uVar4 = FUN_10000f9c0();
  FUN_1003a985c(&local_60,uVar4);
  plVar5 = (long *)thunk_FUN_10000e358();
  FUN_1003a985c(&local_60,plVar5);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x58))(plVar5);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x48))(plVar5,"Effect_Tony_A2");
  (**(code **)(*plVar5 + 0x78))(plVar5,0);
  plVar5 = (long *)FUN_10000cc74();
  FUN_1003a985c(&local_60,plVar5);
  (**(code **)(*plVar5 + 0x58))(plVar5,1);
  lVar3 = FUN_1003e10f0();
  bVar1 = *(byte *)(lVar3 + 0xe5);
  lVar3 = FUN_10000c8e8();
  FUN_1003a985c(&local_60,lVar3);
  lVar6 = FUN_10049ab34(lVar3 + 0x10);
  *(undefined **)(lVar6 + 8) = PTR_s_Buff_Tony_Talent_TalentB_10185a960;
  lVar3 = lVar3 + 0xb0;
  lVar6 = FUN_10000ed74();
  FUN_1003a985c(lVar3,lVar6);
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
  *(byte *)(lVar6 + 0x6a) = bVar1 | 0x14;
  *(undefined2 *)(lVar6 + 0x68) = 0x6120;
  bVar2 = DAT_101d23a38 != '\0';
  *(undefined4 *)(lVar6 + 0xa4) = 0x40400000;
  *(byte *)(lVar6 + 0xa8) = *(byte *)(lVar6 + 0xa8) & 0xf0 | bVar2;
  plVar5 = (long *)FUN_10000cb8c();
  FUN_1003a985c(lVar3,plVar5);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x50))(plVar5);
  local_70 = FUN_1003ae3f8;
  local_68 = 4;
  (**(code **)(*plVar5 + 0x18))(plVar5,&local_70,0,0);
  uVar4 = FUN_10000c784();
  FUN_1003a985c(lVar3,uVar4);
  lVar3 = FUN_10000e524();
  FUN_1003a985c(&local_60,lVar3);
  uVar4 = FUN_1010a1520();
  lVar6 = FUN_1010a0e0c(uVar4,0,"*KindredSoundBalance*",0);
  uVar7 = FUN_1003ae36c(*(undefined4 *)(lVar6 + 0x474));
  *(char **)(lVar3 + 0x10) = "Sound_Tony_Ability_A_Impact_02";
  *(undefined2 *)(lVar3 + 0x30) = 0x1ff;
  *(undefined4 *)(lVar3 + 0x34) = 1;
  *(undefined4 *)(lVar3 + 0x3c) = uVar7;
  *(undefined4 *)(lVar3 + 0x40) = 0xffffffff;
  *(byte *)(lVar3 + 0x38) = *(byte *)(lVar3 + 0x38) & 0xf8 | 4;
  *(undefined8 *)(lVar3 + 0x48) = 0;
  plVar5 = (long *)FUN_10000f698();
  FUN_1003a985c(&local_60,plVar5);
  (**(code **)(*plVar5 + 0x50))
            (plVar5,PTR_s_Buff_Tony_A_ChargedAttack2_10185a948,
             PTR_s_Buff_Tony_A_ChargedAttack3_10185a950);
  lVar3 = FUN_10000d8b8();
  FUN_1003a985c(&local_60,lVar3);
  *(undefined1 *)(lVar3 + 0x10) = 0;
  return local_60;
}




undefined8 FUN_10037f318(void)

{
  byte bVar1;
  bool bVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  undefined4 uVar7;
  code *local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  local_60 = 0;
  uStack_58 = 0;
  lVar3 = FUN_10000d8b8();
  FUN_1003a985c(&local_60,lVar3);
  *(undefined1 *)(lVar3 + 0x10) = 1;
  uVar4 = FUN_10000ef8c();
  FUN_1003a985c(&local_60,uVar4);
  plVar5 = (long *)thunk_FUN_10000e0ac();
  FUN_1003a985c(&local_60,plVar5);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x58))(plVar5,"Ability01_HitC");
  (**(code **)(*plVar5 + 0x18))(plVar5,"AttackToIdle");
  lVar3 = FUN_10000e524();
  FUN_1003a985c(&local_60,lVar3);
  uVar4 = FUN_1010a1520();
  lVar6 = FUN_1010a0e0c(uVar4,0,"*KindredSoundBalance*",0);
  uVar7 = FUN_1003ae36c(*(undefined4 *)(lVar6 + 0x474));
  *(char **)(lVar3 + 0x10) = "Sound_Tony_Ability_A_Swing_03";
  *(undefined2 *)(lVar3 + 0x30) = 0x1ff;
  *(undefined4 *)(lVar3 + 0x34) = 1;
  *(undefined4 *)(lVar3 + 0x3c) = uVar7;
  *(undefined4 *)(lVar3 + 0x40) = 0xffffffff;
  *(byte *)(lVar3 + 0x38) = *(byte *)(lVar3 + 0x38) & 0xf8 | 4;
  *(undefined8 *)(lVar3 + 0x48) = 0;
  plVar5 = (long *)FUN_10000cd5c();
  FUN_1003a985c(&local_60,plVar5);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x68))(0x3e99999a,0x3e4ccccd,0x3fa66666,0x3f4ccccd,plVar5)
  ;
  plVar5 = (long *)(**(code **)(*plVar5 + 0xb0))(plVar5,1);
  local_70 = FUN_1003ae498;
  local_68 = 3;
  plVar5 = (long *)(**(code **)(*plVar5 + 0xa0))(plVar5,&local_70);
  (**(code **)(*plVar5 + 0xb8))(0x40c00000);
  lVar3 = FUN_10000ceb8();
  FUN_1003a985c(&local_60,lVar3);
  *(undefined4 *)(lVar3 + 0x2c) = 0x3dcccccd;
  *(undefined8 *)(lVar3 + 0x10) = 0;
  uVar4 = FUN_10000f9c0();
  FUN_1003a985c(&local_60,uVar4);
  plVar5 = (long *)thunk_FUN_10000e358();
  FUN_1003a985c(&local_60,plVar5);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x58))(plVar5);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x48))(plVar5,"Effect_Tony_A3");
  (**(code **)(*plVar5 + 0x78))(plVar5,0);
  plVar5 = (long *)FUN_10000cc74();
  FUN_1003a985c(&local_60,plVar5);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x50))(plVar5);
  local_70 = FUN_1003ae4ac;
  local_68 = 5;
  plVar5 = (long *)(**(code **)(*plVar5 + 0x10))(plVar5,&local_70,0,0xf);
  (**(code **)(*plVar5 + 0x70))(plVar5,1);
  lVar3 = FUN_1003e10f0();
  bVar1 = *(byte *)(lVar3 + 0xe5);
  lVar3 = FUN_10000c8e8();
  FUN_1003a985c(&local_60,lVar3);
  lVar6 = FUN_10049ab34(lVar3 + 0x10);
  *(undefined **)(lVar6 + 8) = PTR_s_Buff_Tony_Talent_TalentB_10185a960;
  lVar3 = lVar3 + 0xb0;
  lVar6 = FUN_10000ed74();
  FUN_1003a985c(lVar3,lVar6);
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
  *(byte *)(lVar6 + 0x6a) = bVar1 | 0x14;
  *(undefined2 *)(lVar6 + 0x68) = 0x6120;
  bVar2 = DAT_101d23a38 != '\0';
  *(undefined4 *)(lVar6 + 0xa4) = 0x40400000;
  *(byte *)(lVar6 + 0xa8) = *(byte *)(lVar6 + 0xa8) & 0xf0 | bVar2;
  plVar5 = (long *)FUN_10000cb8c();
  FUN_1003a985c(lVar3,plVar5);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x50))(plVar5);
  local_70 = FUN_1003ae3f8;
  local_68 = 4;
  (**(code **)(*plVar5 + 0x18))(plVar5,&local_70,0,0);
  plVar5 = (long *)FUN_10000bed8();
  FUN_1003a985c(lVar3,plVar5);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x70))(plVar5,PTR_s_Buff_Stunned_10185a208);
  local_70 = FUN_1003ae510;
  local_68 = 3;
  (**(code **)(*plVar5 + 0x18))(plVar5,&local_70);
  uVar4 = FUN_10000c784();
  FUN_1003a985c(lVar3,uVar4);
  lVar3 = FUN_10000e524();
  FUN_1003a985c(&local_60,lVar3);
  uVar4 = FUN_1010a1520();
  lVar6 = FUN_1010a0e0c(uVar4,0,"*KindredSoundBalance*",0);
  uVar7 = FUN_1003ae36c(*(undefined4 *)(lVar6 + 0x474));
  *(char **)(lVar3 + 0x10) = "Sound_Tony_Ability_A_Impact_03";
  *(undefined2 *)(lVar3 + 0x30) = 0x1ff;
  *(undefined4 *)(lVar3 + 0x34) = 1;
  *(undefined4 *)(lVar3 + 0x3c) = uVar7;
  *(undefined4 *)(lVar3 + 0x40) = 0xffffffff;
  *(byte *)(lVar3 + 0x38) = *(byte *)(lVar3 + 0x38) & 0xf8 | 4;
  *(undefined8 *)(lVar3 + 0x48) = 0;
  uVar4 = FUN_10000bc94();
  FUN_1003a985c(&local_60,uVar4);
  plVar5 = (long *)FUN_10000bed8();
  FUN_1003a985c(&local_60,plVar5);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x70))(plVar5,PTR_s_Buff_Stunned_10185a208);
  local_70 = FUN_1003ae510;
  local_68 = 3;
  (**(code **)(*plVar5 + 0x18))(plVar5,&local_70);
  uVar4 = FUN_10000c784();
  FUN_1003a985c(&local_60,uVar4);
  uVar4 = FUN_10000bb2c();
  FUN_1003a985c(&local_60,uVar4);
  lVar3 = FUN_10000c540();
  FUN_1003a985c(&local_60,lVar3);
  *(undefined **)(lVar3 + 0x10) = PTR_s_Buff_Tony_A_ChargedAttack3_10185a950;
  lVar3 = FUN_10000c540();
  FUN_1003a985c(&local_60,lVar3);
  *(undefined **)(lVar3 + 0x10) = PTR_s_Buff_Tony_A_SpeedBoostAndDamage_10185a958;
  uVar4 = FUN_10000c784();
  FUN_1003a985c(&local_60,uVar4);
  lVar3 = FUN_10000d8b8();
  FUN_1003a985c(&local_60,lVar3);
  *(undefined1 *)(lVar3 + 0x10) = 0;
  return local_60;
}




undefined8 FUN_10037f844(void)

{
  byte bVar1;
  bool bVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  code *local_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  
  local_80 = 0;
  uStack_78 = 0;
  lVar3 = FUN_10000d8b8();
  FUN_1003a985c(&local_80,lVar3);
  *(undefined1 *)(lVar3 + 0x10) = 1;
  lVar3 = FUN_10000ef8c();
  FUN_1003a985c(&local_80,lVar3);
  *(byte *)(lVar3 + 0x10) = *(byte *)(lVar3 + 0x10) & 0xe7 | 4;
  lVar3 = FUN_10000e524();
  FUN_1003a985c(&local_80,lVar3);
  uVar4 = FUN_1010a1520();
  lVar5 = FUN_1010a0e0c(uVar4,0,"*KindredSoundBalance*",0);
  uVar7 = FUN_1003ae36c(*(undefined4 *)(lVar5 + 0x47c));
  *(char **)(lVar3 + 0x10) = "Sound_Tony_Ability_B_activate";
  *(undefined2 *)(lVar3 + 0x30) = 0x1ff;
  *(undefined4 *)(lVar3 + 0x34) = 1;
  *(undefined4 *)(lVar3 + 0x3c) = uVar7;
  *(undefined4 *)(lVar3 + 0x40) = 0xffffffff;
  *(byte *)(lVar3 + 0x38) = *(byte *)(lVar3 + 0x38) & 0xf8 | 4;
  *(undefined8 *)(lVar3 + 0x48) = 0;
  lVar3 = FUN_10000dff8();
  FUN_1003a985c(&local_80,lVar3);
  *(undefined2 *)(lVar3 + 0x28) = 0x100;
  *(undefined8 *)(lVar3 + 0x30) = 0;
  uVar7 = FUN_1004d2524("TauntStartUp");
  uVar7 = FUN_100015208("TauntStartUp",uVar7,0x12345678);
  *(undefined4 *)(lVar3 + 0x10) = uVar7;
  uVar7 = FUN_1004d2524("AttackToIdleCombat");
  uVar7 = FUN_100015208("AttackToIdleCombat",uVar7,0x12345678);
  *(undefined4 *)(lVar3 + 0x20) = uVar7;
  lVar3 = FUN_10000e1b4();
  FUN_1003a985c(&local_80,lVar3);
  *(undefined8 *)(lVar3 + 0x40) = 0;
  *(ushort *)(lVar3 + 0x80) = *(ushort *)(lVar3 + 0x80) & 0xffec | 2;
  *(uint *)(lVar3 + 0x3c) = (uint)lVar3 & 0xffff;
  *(undefined8 *)(lVar3 + 0x20) = 0;
  *(undefined8 *)(lVar3 + 0x28) = 1;
  *(undefined4 *)(lVar3 + 0x10) = 0xcc4f83c7;
  plVar6 = (long *)thunk_FUN_10000e6f4();
  FUN_1003a985c(&local_80,plVar6);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x50))(plVar6,"ability2");
  (**(code **)(*plVar6 + 0x18))(0x3ea8f5c3);
  lVar3 = FUN_10000ceb8();
  FUN_1003a985c(&local_80,lVar3);
  *(code **)(lVar3 + 0x20) = FUN_1003ae640;
  *(undefined8 *)(lVar3 + 0x10) = 0;
  lVar3 = FUN_10000e1b4();
  FUN_1003a985c(&local_80,lVar3);
  *(undefined8 *)(lVar3 + 0x40) = 0;
  *(ushort *)(lVar3 + 0x80) = *(ushort *)(lVar3 + 0x80) & 0xffec | 2;
  *(uint *)(lVar3 + 0x3c) = (uint)lVar3 & 0xffff;
  *(undefined8 *)(lVar3 + 0x20) = 0;
  *(undefined8 *)(lVar3 + 0x28) = 1;
  *(undefined4 *)(lVar3 + 0x10) = 0xeb7988c6;
  plVar6 = (long *)FUN_10000bdf0();
  FUN_1003a985c(&local_80,plVar6);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x50))(plVar6,PTR_s_Buff_Tony_B_DamageReduction_10185a970)
  ;
  local_90 = FUN_1003ae62c;
  local_88 = 3;
  (**(code **)(*plVar6 + 0x18))(plVar6,&local_90);
  lVar3 = FUN_1003e10f0();
  bVar1 = *(byte *)(lVar3 + 0xe5);
  uVar7 = _cosf(0x3e490fdb);
  lVar3 = FUN_10000ed74();
  FUN_1003a985c(&local_80,lVar3);
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
  *(undefined8 *)(lVar3 + 0x60) = 0xffffffff00000000;
  *(undefined8 *)(lVar3 + 0x58) = 0xffffffff00000001;
  *(byte *)(lVar3 + 0x6a) = bVar1 | 0x14;
  *(undefined2 *)(lVar3 + 0x68) = 0x6120;
  bVar2 = DAT_101d23a38 != '\0';
  *(code **)(lVar3 + 0x78) = FUN_1003ae654;
  *(byte *)(lVar3 + 0xa8) = *(byte *)(lVar3 + 0xa8) & 0xf0 | bVar2;
  lVar3 = FUN_10000bd3c();
  FUN_1003a985c(&local_80,lVar3);
  *(undefined **)(lVar3 + 0x10) = PTR_s_Buff_Taunt_10185a978;
  *(code **)(lVar3 + 0x28) = FUN_1003ae524;
  *(undefined2 *)(lVar3 + 0x68) = 1;
  *(byte *)(lVar3 + 0x6a) = *(byte *)(lVar3 + 0x6a) & 0xfe;
  lVar3 = FUN_10000bd3c();
  FUN_1003a985c(&local_80,lVar3);
  *(undefined **)(lVar3 + 0x10) = PTR_s_Buff_Tony_B_TauntSFX_10185a980;
  *(code **)(lVar3 + 0x28) = FUN_1003ae524;
  *(undefined2 *)(lVar3 + 0x68) = 1;
  *(byte *)(lVar3 + 0x6a) = *(byte *)(lVar3 + 0x6a) & 0xfe;
  uVar4 = FUN_10000c784();
  FUN_1003a985c(&local_80,uVar4);
  lVar3 = FUN_1003e10f0();
  bVar1 = *(byte *)(lVar3 + 0xe5);
  lVar3 = FUN_10000ed74();
  FUN_1003a985c(&local_80,lVar3);
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
  *(undefined8 *)(lVar3 + 0x60) = 0xffffffff00000000;
  *(undefined8 *)(lVar3 + 0x58) = 0xffffffff00040000;
  *(byte *)(lVar3 + 0x6a) = bVar1 | 0x14;
  *(undefined2 *)(lVar3 + 0x68) = 0x6120;
  bVar2 = DAT_101d23a38 != '\0';
  *(code **)(lVar3 + 0x78) = FUN_1003ae654;
  *(byte *)(lVar3 + 0xa8) = *(byte *)(lVar3 + 0xa8) & 0xf0 | bVar2;
  uVar4 = FUN_10000cb8c();
  FUN_1003a985c(&local_80,uVar4);
  lVar3 = FUN_10000c8e8();
  FUN_1003a985c(&local_80,lVar3);
  lVar5 = FUN_10049ab34(lVar3 + 0x10);
  *(undefined **)(lVar5 + 8) = PTR_s_Buff_Tony_Talent_TalentC_10185a968;
  lVar5 = FUN_10000bd3c();
  FUN_1003a985c(lVar3 + 0xb0,lVar5);
  *(undefined **)(lVar5 + 0x10) = PTR_s_Buff_Tony_Talent_TauntDebuff_10185a988;
  *(code **)(lVar5 + 0x28) = FUN_1003ae524;
  *(undefined2 *)(lVar5 + 0x68) = 1;
  *(byte *)(lVar5 + 0x6a) = *(byte *)(lVar5 + 0x6a) & 0xfe;
  uVar4 = FUN_10000c784();
  FUN_1003a985c(&local_80,uVar4);
  lVar3 = FUN_10000ceb8();
  FUN_1003a985c(&local_80,lVar3);
  *(code **)(lVar3 + 0x20) = FUN_1003ae668;
  *(undefined8 *)(lVar3 + 0x10) = 0;
  lVar3 = FUN_10000d8b8();
  FUN_1003a985c(&local_80,lVar3);
  *(undefined1 *)(lVar3 + 0x10) = 0;
  uVar4 = FUN_10000f034();
  FUN_1003a985c(&local_80,uVar4);
  return local_80;
}




undefined8 FUN_10037fd78(void)

{
  byte bVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  undefined4 local_a0 [2];
  undefined4 local_98;
  code *local_90;
  undefined4 local_88;
  code *local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  local_70 = 0;
  uStack_68 = 0;
  lVar3 = FUN_10000d8b8();
  FUN_1003a985c(&local_70,lVar3);
  *(undefined1 *)(lVar3 + 0x10) = 1;
  lVar3 = FUN_10000ef8c();
  FUN_1003a985c(&local_70,lVar3);
  *(byte *)(lVar3 + 0x10) = *(byte *)(lVar3 + 0x10) & 0xe7 | 4;
  uVar4 = FUN_10000c6d4();
  FUN_1003a985c(&local_70,uVar4);
  lVar3 = FUN_10000dff8();
  FUN_1003a985c(&local_70,lVar3);
  *(undefined2 *)(lVar3 + 0x28) = 0x100;
  *(undefined8 *)(lVar3 + 0x30) = 0;
  uVar2 = FUN_1004d2524("LeapStartUp");
  uVar2 = FUN_100015208("LeapStartUp",uVar2,0x12345678);
  *(undefined4 *)(lVar3 + 0x10) = uVar2;
  *(undefined4 *)(lVar3 + 0x20) = 0;
  lVar3 = FUN_10000e524();
  FUN_1003a985c(&local_70,lVar3);
  uVar4 = FUN_1010a1520();
  lVar5 = FUN_1010a0e0c(uVar4,0,"*KindredSoundBalance*",0);
  uVar2 = FUN_1003ae36c(*(undefined4 *)(lVar5 + 0x480));
  *(char **)(lVar3 + 0x10) = "Sound_Tony_Ability_C_Startup";
  *(undefined2 *)(lVar3 + 0x30) = 0x1ff;
  *(undefined4 *)(lVar3 + 0x34) = 1;
  *(undefined4 *)(lVar3 + 0x3c) = uVar2;
  *(undefined4 *)(lVar3 + 0x40) = 0xffffffff;
  *(byte *)(lVar3 + 0x38) = *(byte *)(lVar3 + 0x38) & 0xf8 | 4;
  *(undefined8 *)(lVar3 + 0x48) = 0;
  plVar6 = (long *)thunk_FUN_10000e358();
  FUN_1003a985c(&local_70,plVar6);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x68))(plVar6,"Bone_Rightjet");
  plVar6 = (long *)(**(code **)(*plVar6 + 0x48))(plVar6,"Effect_Tony_C_R_Thruster");
  plVar6 = (long *)(**(code **)(*plVar6 + 0x78))(plVar6,1);
  local_80._0_4_ = 0x3fc00000;
  local_78 = 1;
  plVar6 = (long *)(**(code **)(*plVar6 + 0x60))(plVar6,&local_80);
  (**(code **)(*plVar6 + 0xb0))(plVar6,0);
  plVar6 = (long *)thunk_FUN_10000e358();
  FUN_1003a985c(&local_70,plVar6);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x68))(plVar6,"Bone_Leftjet");
  plVar6 = (long *)(**(code **)(*plVar6 + 0x48))(plVar6,"Effect_Tony_C_L_Thruster");
  plVar6 = (long *)(**(code **)(*plVar6 + 0x78))(plVar6,1);
  local_80._0_4_ = 0x3fc00000;
  local_78 = 1;
  plVar6 = (long *)(**(code **)(*plVar6 + 0x60))(plVar6,&local_80);
  (**(code **)(*plVar6 + 0xb0))(plVar6,0);
  plVar6 = (long *)thunk_FUN_10000e358();
  FUN_1003a985c(&local_70,plVar6);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x58))(plVar6);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x48))(plVar6,"Effect_Tony_C_Trail");
  plVar6 = (long *)(**(code **)(*plVar6 + 0x78))(plVar6,1);
  local_80 = (code *)CONCAT44(local_80._4_4_,0x3f800000);
  local_78 = 1;
  (**(code **)(*plVar6 + 0x60))(plVar6,&local_80);
  plVar6 = (long *)FUN_10000f300();
  FUN_1003a985c(&local_70,plVar6);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x50))(plVar6,"*Tony_C_WarningIndicator*",0);
  (**(code **)(*plVar6 + 0x20))(plVar6,FUN_10048fb04);
  lVar3 = FUN_10000ceb8();
  FUN_1003a985c(&local_70,lVar3);
  *(code **)(lVar3 + 0x20) = FUN_1003ae6fc;
  *(undefined8 *)(lVar3 + 0x10) = 0;
  lVar3 = FUN_10000e524();
  FUN_1003a985c(&local_70,lVar3);
  uVar4 = FUN_1010a1520();
  lVar5 = FUN_1010a0e0c(uVar4,0,"*KindredSoundBalance*",0);
  uVar2 = FUN_1003ae36c(*(undefined4 *)(lVar5 + 0x480));
  *(char **)(lVar3 + 0x10) = "Sound_Tony_Ability_C_Rush";
  *(undefined2 *)(lVar3 + 0x30) = 0x1ff;
  *(undefined4 *)(lVar3 + 0x34) = 1;
  *(undefined4 *)(lVar3 + 0x3c) = uVar2;
  *(undefined4 *)(lVar3 + 0x40) = 0xffffffff;
  *(byte *)(lVar3 + 0x38) = *(byte *)(lVar3 + 0x38) & 0xf8 | 4;
  *(undefined8 *)(lVar3 + 0x48) = 0;
  lVar3 = FUN_10000dff8();
  FUN_1003a985c(&local_70,lVar3);
  *(undefined2 *)(lVar3 + 0x28) = 0x100;
  *(undefined8 *)(lVar3 + 0x30) = 0;
  uVar2 = FUN_1004d2524("Leap");
  uVar2 = FUN_100015208("Leap",uVar2,0x12345678);
  *(undefined4 *)(lVar3 + 0x10) = uVar2;
  *(undefined4 *)(lVar3 + 0x20) = 0;
  plVar6 = (long *)FUN_10000cd5c();
  FUN_1003a985c(&local_70,plVar6);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x90))(plVar6);
  plVar6 = (long *)(**(code **)(*plVar6 + 0xb0))(plVar6,1);
  local_80 = FUN_1003ae710;
  local_78 = 3;
  plVar6 = (long *)(**(code **)(*plVar6 + 0xa0))(plVar6,&local_80);
  (**(code **)(*plVar6 + 0xb8))(0x41200000);
  lVar3 = FUN_10000ceb8();
  FUN_1003a985c(&local_70,lVar3);
  *(undefined4 *)(lVar3 + 0x2c) = 0x3dcccccd;
  *(undefined8 *)(lVar3 + 0x10) = 0;
  uVar4 = FUN_10000f9c0();
  FUN_1003a985c(&local_70,uVar4);
  lVar3 = FUN_1003e10f0();
  bVar1 = *(byte *)(lVar3 + 0xe5);
  lVar3 = FUN_10000dff8();
  FUN_1003a985c(&local_70,lVar3);
  *(undefined2 *)(lVar3 + 0x28) = 0x100;
  *(undefined8 *)(lVar3 + 0x30) = 0;
  uVar2 = FUN_1004d2524("LeapLanding");
  uVar2 = FUN_100015208("LeapLanding",uVar2,0x12345678);
  *(undefined4 *)(lVar3 + 0x10) = uVar2;
  uVar2 = FUN_1004d2524("AttackToIdleCombat");
  uVar2 = FUN_100015208("AttackToIdleCombat",uVar2,0x12345678);
  *(undefined4 *)(lVar3 + 0x20) = uVar2;
  lVar3 = FUN_10000ed74();
  FUN_1003a985c(&local_70,lVar3);
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
  *(undefined8 *)(lVar3 + 0x58) = 0xffffffff00200000;
  *(byte *)(lVar3 + 0x6a) = bVar1 | 0x14;
  *(undefined2 *)(lVar3 + 0x68) = 0x4120;
  *(undefined4 *)(lVar3 + 0xa4) = 0x40600000;
  *(byte *)(lVar3 + 0xa8) = *(byte *)(lVar3 + 0xa8) & 0xf0 | 1;
  lVar3 = FUN_10000e1b4();
  FUN_1003a985c(&local_70,lVar3);
  *(undefined8 *)(lVar3 + 0x40) = 0;
  *(ushort *)(lVar3 + 0x80) = *(ushort *)(lVar3 + 0x80) & 0xffec | 2;
  *(uint *)(lVar3 + 0x3c) = (uint)lVar3 & 0xffff;
  *(undefined8 *)(lVar3 + 0x20) = 0;
  *(undefined8 *)(lVar3 + 0x28) = 1;
  *(undefined4 *)(lVar3 + 0x10) = 0x2a86e86;
  plVar6 = (long *)thunk_FUN_10000f1a0();
  FUN_1003a985c(&local_70,plVar6);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x60))(plVar6);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x10))(0x3f19999a);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x18))(0x3f000000);
  (**(code **)(*plVar6 + 0x20))(0x41700000);
  plVar6 = (long *)FUN_10000d7d0();
  FUN_1003a985c(&local_70,plVar6);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x50))(plVar6);
  local_80 = FUN_1003ae6e8;
  local_78 = 3;
  plVar6 = (long *)(**(code **)(*plVar6 + 0x10))(plVar6,&local_80);
  local_90 = FUN_1003ae6d4;
  local_88 = 3;
  plVar6 = (long *)(**(code **)(*plVar6 + 0x20))(plVar6,&local_90);
  local_a0[0] = 0x41200000;
  local_98 = 1;
  plVar6 = (long *)(**(code **)(*plVar6 + 0x30))(plVar6,local_a0);
  (**(code **)(*plVar6 + 0x48))();
  uVar4 = FUN_10000cb8c();
  FUN_1003a985c(&local_70,uVar4);
  lVar3 = FUN_10000bd3c();
  FUN_1003a985c(&local_70,lVar3);
  *(undefined **)(lVar3 + 0x10) = PTR_s_Buff_Stunned_10185a208;
  *(code **)(lVar3 + 0x30) = FUN_1003ae724;
  *(undefined2 *)(lVar3 + 0x68) = 1;
  *(byte *)(lVar3 + 0x6a) = *(byte *)(lVar3 + 0x6a) & 0xfe;
  lVar3 = FUN_10000bd3c();
  FUN_1003a985c(&local_70,lVar3);
  *(undefined **)(lVar3 + 0x10) = PTR_s_Buff_Tony_C_SnapCamera_10185a990;
  *(code **)(lVar3 + 0x30) = FUN_1003ae67c;
  *(undefined2 *)(lVar3 + 0x68) = 1;
  *(byte *)(lVar3 + 0x6a) = *(byte *)(lVar3 + 0x6a) & 0xfe;
  uVar4 = FUN_10000c784();
  FUN_1003a985c(&local_70,uVar4);
  lVar3 = FUN_10000e524();
  FUN_1003a985c(&local_70,lVar3);
  uVar4 = FUN_1010a1520();
  lVar5 = FUN_1010a0e0c(uVar4,0,"*KindredSoundBalance*",0);
  uVar2 = FUN_1003ae36c(*(undefined4 *)(lVar5 + 0x480));
  *(char **)(lVar3 + 0x10) = "Sound_Tony_Ability_C_Uppercut";
  *(undefined2 *)(lVar3 + 0x30) = 0x1ff;
  *(undefined4 *)(lVar3 + 0x34) = 1;
  *(undefined4 *)(lVar3 + 0x3c) = uVar2;
  *(undefined4 *)(lVar3 + 0x40) = 0xffffffff;
  *(byte *)(lVar3 + 0x38) = *(byte *)(lVar3 + 0x38) & 0xf8 | 4;
  *(undefined8 *)(lVar3 + 0x48) = 0;
  lVar3 = FUN_10000ceb8();
  FUN_1003a985c(&local_70,lVar3);
  *(code **)(lVar3 + 0x20) = FUN_1003ae738;
  *(undefined8 *)(lVar3 + 0x10) = 0;
  lVar3 = FUN_10000d8b8();
  FUN_1003a985c(&local_70,lVar3);
  *(undefined1 *)(lVar3 + 0x10) = 0;
  return local_70;
}

