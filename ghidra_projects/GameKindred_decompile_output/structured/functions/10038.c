// functions/10038 — 171 functions
#include "GameKindred.h"




void FUN_10038051c(void)

{
  FUN_1003a2678(DAT_10185a998);
  return;
}




void FUN_100380528(void)

{
  FUN_1003a4264("Attack","Effect_Baptiste_AA",0,0,&PTR_s_Sound_Baptiste_Basic_Attack_1_10185a398,3,
                &PTR_s_Sound_Baptiste_Basic_Impact_1_10185a3b0,3);
  return;
}




void FUN_10038055c(void)

{
  FUN_1003a4264("AltAttack","Effect_Baptiste_AA_Alt",0,0,
                &PTR_s_Sound_Baptiste_Basic_Attack_1_10185a398,3,
                &PTR_s_Sound_Baptiste_Basic_Impact_1_10185a3b0,3);
  return;
}




void FUN_100380590(void)

{
  FUN_1003a4264("CritAttack","Effect_Baptiste_AA_Crit",2,0,
                &PTR_s_Sound_Baptiste_Crit_Attack_10185a3c8,1,
                &PTR_s_Sound_Baptiste_Crit_Attack_10185a3d0,1);
  return;
}




void FUN_1003805c4(void)

{
  FUN_1003a4264("AttackEmpowered","Effect_Baptiste_AA_Empowered",0,1,
                &PTR_s_Sound_Baptiste_Empowered_Attack__10185a3d8,2,
                &PTR_s_Sound_Baptiste_Empowered_Attack__10185a3e8,2);
  return;
}




void FUN_1003805f8(void)

{
  FUN_1003a4264("AltAttackEmpowered","Effect_Baptiste_AA_Alt_Empowered",0,1,
                &PTR_s_Sound_Baptiste_Empowered_Attack__10185a3d8,2,
                &PTR_s_Sound_Baptiste_Empowered_Attack__10185a3e8,2);
  return;
}




void FUN_10038062c(void)

{
  FUN_1003a4264("CritAttackEmpowered","Effect_Baptiste_AA_Crit_Empowered",2,1,
                &PTR_s_Sound_Baptiste_Empowered_Attack__10185a3d8,2,
                &PTR_s_Sound_Baptiste_Empowered_Attack__10185a3e8,2);
  return;
}




undefined8 FUN_100380660(void)

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
  uVar1 = FUN_1004d2524("Ability01");
  uVar1 = FUN_100015208("Ability01",uVar1,0x12345678);
  *(undefined4 *)(lVar2 + 0x10) = uVar1;
  uVar1 = FUN_1004d2524("AttackToIdle");
  uVar1 = FUN_100015208("AttackToIdle",uVar1,0x12345678);
  *(undefined4 *)(lVar2 + 0x20) = uVar1;
  plVar3 = (long *)thunk_FUN_10000e6f4();
  FUN_1003a985c(&local_40,plVar3);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x50))(plVar3,"ability1");
  (**(code **)(*plVar3 + 0x18))(0x3e800000);
  lVar2 = FUN_10000ceb8();
  FUN_1003a985c(&local_40,lVar2);
  *(undefined4 *)(lVar2 + 0x2c) = 0x3e4ccccd;
  *(undefined8 *)(lVar2 + 0x10) = 0;
  lVar2 = FUN_10000e524();
  FUN_1003a985c(&local_40,lVar2);
  uVar4 = FUN_1010a1520();
  lVar5 = FUN_1010a0e0c(uVar4,0,"*KindredSoundBalance*",0);
  uVar1 = FUN_1003a4634(*(undefined4 *)(lVar5 + 0x3c0));
  *(undefined2 *)(lVar2 + 0x30) = 0x3ff;
  *(undefined4 *)(lVar2 + 0x34) = 1;
  *(undefined4 *)(lVar2 + 0x40) = 0xffffffff;
  *(undefined4 *)(lVar2 + 0x3c) = uVar1;
  *(byte *)(lVar2 + 0x38) = *(byte *)(lVar2 + 0x38) & 0xf8 | 4;
  *(undefined8 *)(lVar2 + 0x48) = 0;
  *(char **)(lVar2 + 0x10) = "Sound_Baptiste_Ability_A_Cast_1";
  *(char **)(lVar2 + 0x18) = "Sound_Baptiste_Ability_A_Cast_2";
  *(char **)(lVar2 + 0x20) = "Sound_Baptiste_Ability_A_Cast_3";
  lVar2 = FUN_10000c8e8();
  FUN_1003a985c(&local_40,lVar2);
  lVar5 = FUN_10049ab34(lVar2 + 0x10);
  *(undefined **)(lVar5 + 8) = PTR_s_Buff_Baptiste_PerkEmpowered_10185a3f8;
  lVar5 = FUN_10000f250();
  FUN_1003a985c(lVar2 + 0xb0,lVar5);
  *(undefined4 *)(lVar5 + 0x10) = 7;
  FUN_1003d266c(lVar5,"CenterBody");
  lVar5 = FUN_10000f250();
  FUN_1003a985c(lVar2 + 200,lVar5);
  *(undefined4 *)(lVar5 + 0x10) = 6;
  FUN_1003d266c(lVar5,"CenterBody");
  lVar2 = FUN_10000ceb8();
  FUN_1003a985c(&local_40,lVar2);
  *(undefined4 *)(lVar2 + 0x2c) = 0x3dcccccd;
  *(undefined8 *)(lVar2 + 0x10) = 0;
  lVar2 = FUN_10000d8b8();
  FUN_1003a985c(&local_40,lVar2);
  *(undefined1 *)(lVar2 + 0x10) = 0;
  uVar4 = FUN_10000f034();
  FUN_1003a985c(&local_40,uVar4);
  return local_40;
}




undefined8 FUN_1003808f4(void)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  code *local_50;
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
  lVar2 = FUN_10000dff8();
  FUN_1003a985c(&local_40,lVar2);
  *(undefined2 *)(lVar2 + 0x28) = 0x100;
  *(undefined8 *)(lVar2 + 0x30) = 0;
  uVar1 = FUN_1004d2524("Ability02");
  uVar1 = FUN_100015208("Ability02",uVar1,0x12345678);
  *(undefined4 *)(lVar2 + 0x10) = uVar1;
  uVar1 = FUN_1004d2524("AttackToIdle");
  uVar1 = FUN_100015208("AttackToIdle",uVar1,0x12345678);
  *(undefined4 *)(lVar2 + 0x20) = uVar1;
  lVar2 = FUN_10000e524();
  FUN_1003a985c(&local_40,lVar2);
  uVar3 = FUN_1010a1520();
  lVar4 = FUN_1010a0e0c(uVar3,0,"*KindredSoundBalance*",0);
  uVar1 = FUN_1003a4634(*(undefined4 *)(lVar4 + 0x3c4));
  *(char **)(lVar2 + 0x10) = "Sound_Baptiste_Ability_B_Cast";
  *(undefined2 *)(lVar2 + 0x30) = 0x1ff;
  *(undefined4 *)(lVar2 + 0x34) = 1;
  *(undefined4 *)(lVar2 + 0x3c) = uVar1;
  *(undefined4 *)(lVar2 + 0x40) = 0xffffffff;
  *(byte *)(lVar2 + 0x38) = *(byte *)(lVar2 + 0x38) & 0xf8 | 4;
  *(undefined8 *)(lVar2 + 0x48) = 0;
  plVar5 = (long *)thunk_FUN_10000e6f4();
  FUN_1003a985c(&local_40,plVar5);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x50))(plVar5,"ability2");
  (**(code **)(*plVar5 + 0x18))(0x3f000000);
  uVar3 = FUN_10000bc94();
  FUN_1003a985c(&local_40,uVar3);
  lVar2 = FUN_10000e474();
  FUN_1003a985c(&local_40,lVar2);
  *(undefined4 *)(lVar2 + 0x10) = 2;
  *(char **)(lVar2 + 0x18) = "Effect_Baptiste_B_Channeling_Target";
  *(undefined4 *)(lVar2 + 0x20) = 0x3e3270a0;
  *(undefined8 *)(lVar2 + 0x28) = 0;
  *(undefined4 *)(lVar2 + 0x30) = 0x3f99999a;
  *(byte *)(lVar2 + 0x58) = *(byte *)(lVar2 + 0x58) & 0xfe;
  *(uint *)(lVar2 + 0x4c) = (uint)lVar2 & 0xffff;
  uVar3 = FUN_10000c784();
  FUN_1003a985c(&local_40,uVar3);
  uVar3 = FUN_10000c6d4();
  FUN_1003a985c(&local_40,uVar3);
  lVar2 = FUN_10000ceb8();
  FUN_1003a985c(&local_40,lVar2);
  *(undefined4 *)(lVar2 + 0x2c) = 0x3f19999a;
  *(undefined8 *)(lVar2 + 0x10) = 0;
  uVar3 = FUN_10000bc94();
  FUN_1003a985c(&local_40,uVar3);
  plVar5 = (long *)FUN_10000bed8();
  FUN_1003a985c(&local_40,plVar5);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x70))
                             (plVar5,PTR_s_Buff_Baptiste_B_TetherTarget_10185a400);
  local_50 = FUN_1003a4708;
  local_48 = 3;
  plVar5 = (long *)(**(code **)(*plVar5 + 0x18))(plVar5,&local_50);
  (**(code **)(*plVar5 + 0x58))(plVar5,FUN_1003a471c);
  uVar3 = FUN_10000c784();
  FUN_1003a985c(&local_40,uVar3);
  lVar2 = FUN_10000d8b8();
  FUN_1003a985c(&local_40,lVar2);
  *(undefined1 *)(lVar2 + 0x10) = 0;
  uVar3 = FUN_10000f034();
  FUN_1003a985c(&local_40,uVar3);
  return local_40;
}




undefined8 FUN_100380bd4(void)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  undefined8 local_70;
  undefined8 uStack_68;
  
  local_70 = 0;
  uStack_68 = 0;
  lVar2 = FUN_10000d8b8();
  FUN_1003a985c(&local_70,lVar2);
  *(undefined1 *)(lVar2 + 0x10) = 1;
  lVar2 = FUN_10000ef8c();
  FUN_1003a985c(&local_70,lVar2);
  *(byte *)(lVar2 + 0x10) = *(byte *)(lVar2 + 0x10) & 0xe7 | 4;
  lVar2 = FUN_10000dff8();
  FUN_1003a985c(&local_70,lVar2);
  *(undefined2 *)(lVar2 + 0x28) = 0x100;
  *(undefined8 *)(lVar2 + 0x30) = 0;
  uVar1 = FUN_1004d2524("Ability03");
  uVar1 = FUN_100015208("Ability03",uVar1,0x12345678);
  *(undefined4 *)(lVar2 + 0x10) = uVar1;
  uVar1 = FUN_1004d2524("AttackToIdle");
  uVar1 = FUN_100015208("AttackToIdle",uVar1,0x12345678);
  *(undefined4 *)(lVar2 + 0x20) = uVar1;
  lVar2 = FUN_10000e524();
  FUN_1003a985c(&local_70,lVar2);
  uVar3 = FUN_1010a1520();
  lVar4 = FUN_1010a0e0c(uVar3,0,"*KindredSoundBalance*",0);
  uVar1 = FUN_1003a4634(*(undefined4 *)(lVar4 + 0x3c8));
  *(char **)(lVar2 + 0x10) = "Sound_Baptiste_Ability_C_Cast";
  *(undefined2 *)(lVar2 + 0x30) = 0x1ff;
  *(undefined4 *)(lVar2 + 0x34) = 1;
  *(undefined4 *)(lVar2 + 0x3c) = uVar1;
  *(undefined4 *)(lVar2 + 0x40) = 0xffffffff;
  *(byte *)(lVar2 + 0x38) = *(byte *)(lVar2 + 0x38) & 0xf8 | 4;
  *(undefined8 *)(lVar2 + 0x48) = 0;
  plVar5 = (long *)thunk_FUN_10000e6f4();
  FUN_1003a985c(&local_70,plVar5);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x50))(plVar5,"ability3");
  (**(code **)(*plVar5 + 0x18))(0x3f000000);
  lVar2 = FUN_10000e1b4();
  FUN_1003a985c(&local_70,lVar2);
  *(undefined8 *)(lVar2 + 0x40) = 0;
  *(ushort *)(lVar2 + 0x80) = *(ushort *)(lVar2 + 0x80) & 0xffef | 3;
  *(uint *)(lVar2 + 0x3c) = (uint)lVar2 & 0xffff;
  *(undefined8 *)(lVar2 + 0x20) = 0;
  *(undefined8 *)(lVar2 + 0x28) = 1;
  *(undefined4 *)(lVar2 + 0x10) = 0x7b94c21d;
  lVar2 = FUN_10000ceb8();
  FUN_1003a985c(&local_70,lVar2);
  *(undefined4 *)(lVar2 + 0x2c) = 0x3e4ccccd;
  *(undefined8 *)(lVar2 + 0x10) = 0;
  plVar5 = (long *)thunk_FUN_10000f1a0();
  FUN_1003a985c(&local_70,plVar5);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x68))(plVar5);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x10))(0x3e4ccccd);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x18))(0x3f800000);
  (**(code **)(*plVar5 + 0x20))(0x41400000);
  lVar2 = FUN_10000ceb8();
  FUN_1003a985c(&local_70,lVar2);
  *(undefined4 *)(lVar2 + 0x2c) = 0x3f000000;
  *(undefined8 *)(lVar2 + 0x10) = 0;
  lVar2 = FUN_10000c8e8();
  FUN_1003a985c(&local_70,lVar2);
  lVar4 = FUN_10049ab34(lVar2 + 0x10);
  *(undefined **)(lVar4 + 8) = PTR_s_Buff_Baptiste_PerkEmpowered_10185a3f8;
  lVar4 = FUN_10000f250();
  FUN_1003a985c(lVar2 + 0xb0,lVar4);
  *(undefined4 *)(lVar4 + 0x10) = 9;
  FUN_1003d266c(lVar4,"ZombieForwardLeft");
  *(undefined4 *)(lVar4 + 0x34) = 1;
  lVar4 = FUN_10000f250();
  FUN_1003a985c(lVar2 + 0xb0,lVar4);
  *(undefined4 *)(lVar4 + 0x10) = 9;
  FUN_1003d266c(lVar4,"ZombieForwardRight");
  *(undefined4 *)(lVar4 + 0x34) = 1;
  lVar4 = FUN_10000f250();
  FUN_1003a985c(lVar2 + 200,lVar4);
  *(undefined4 *)(lVar4 + 0x10) = 8;
  FUN_1003d266c(lVar4,"ZombieForwardLeft");
  *(undefined4 *)(lVar4 + 0x34) = 1;
  lVar4 = FUN_10000f250();
  FUN_1003a985c(lVar2 + 200,lVar4);
  *(undefined4 *)(lVar4 + 0x10) = 8;
  FUN_1003d266c(lVar4,"ZombieForwardRight");
  *(undefined4 *)(lVar4 + 0x34) = 1;
  plVar5 = (long *)FUN_10000f300();
  FUN_1003a985c(&local_70,plVar5);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x50))(plVar5,PTR_s__Baptiste_Zombie__10185a408,1);
  uVar3 = (**(code **)(*plVar5 + 0x18))(plVar5,"ZombieFarLeft");
  plVar5 = (long *)FUN_10000bfc0();
  FUN_1003a985c(&local_70,plVar5);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x50))(plVar5,PTR_s_Buff_Baptiste_Zombie_10185a410,uVar3);
  (**(code **)(*plVar5 + 0x20))(plVar5,FUN_1003a4858);
  plVar5 = (long *)FUN_10000f300();
  FUN_1003a985c(&local_70,plVar5);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x50))(plVar5,PTR_s__Baptiste_Zombie__10185a408,1);
  uVar3 = (**(code **)(*plVar5 + 0x18))(plVar5,"ZombieForwardLeft");
  plVar5 = (long *)FUN_10000bfc0();
  FUN_1003a985c(&local_70,plVar5);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x50))(plVar5,PTR_s_Buff_Baptiste_Zombie_10185a410,uVar3);
  (**(code **)(*plVar5 + 0x20))(plVar5,FUN_1003a4858);
  plVar5 = (long *)FUN_10000f300();
  FUN_1003a985c(&local_70,plVar5);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x50))(plVar5,PTR_s__Baptiste_Zombie__10185a408,1);
  uVar3 = (**(code **)(*plVar5 + 0x18))(plVar5,"ZombieForwardRight");
  plVar5 = (long *)FUN_10000bfc0();
  FUN_1003a985c(&local_70,plVar5);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x50))(plVar5,PTR_s_Buff_Baptiste_Zombie_10185a410,uVar3);
  (**(code **)(*plVar5 + 0x20))(plVar5,FUN_1003a4858);
  plVar5 = (long *)FUN_10000f300();
  FUN_1003a985c(&local_70,plVar5);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x50))(plVar5,PTR_s__Baptiste_Zombie__10185a408,1);
  uVar3 = (**(code **)(*plVar5 + 0x18))(plVar5,"ZombieFarRight");
  plVar5 = (long *)FUN_10000bfc0();
  FUN_1003a985c(&local_70,plVar5);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x50))(plVar5,PTR_s_Buff_Baptiste_Zombie_10185a410,uVar3);
  (**(code **)(*plVar5 + 0x20))(plVar5,FUN_1003a4858);
  lVar2 = FUN_10000c8e8();
  FUN_1003a985c(&local_70,lVar2);
  lVar4 = FUN_10049ab34(lVar2 + 0x10);
  *(undefined **)(lVar4 + 8) = PTR_s_Buff_Baptiste_Talent_ArmyOfSouls_10185a418;
  lVar2 = lVar2 + 0xb0;
  lVar4 = FUN_10000c8e8();
  FUN_1003a985c(lVar2,lVar4);
  lVar6 = FUN_10049ab34(lVar4 + 0x10);
  *(undefined **)(lVar6 + 8) = PTR_s_Buff_Baptiste_PerkEmpowered_10185a3f8;
  lVar6 = FUN_10000f250();
  FUN_1003a985c(lVar4 + 0xb0,lVar6);
  *(undefined4 *)(lVar6 + 0x10) = 9;
  FUN_1003d266c(lVar6,"TalentArmyOfSoulsLeft");
  *(undefined4 *)(lVar6 + 0x34) = 1;
  lVar6 = FUN_10000f250();
  FUN_1003a985c(lVar4 + 0xb0,lVar6);
  *(undefined4 *)(lVar6 + 0x10) = 9;
  FUN_1003d266c(lVar6,"TalentArmyOfSoulsRight");
  *(undefined4 *)(lVar6 + 0x34) = 1;
  lVar6 = FUN_10000f250();
  FUN_1003a985c(lVar4 + 200,lVar6);
  *(undefined4 *)(lVar6 + 0x10) = 8;
  FUN_1003d266c(lVar6,"TalentArmyOfSoulsLeft");
  *(undefined4 *)(lVar6 + 0x34) = 1;
  lVar6 = FUN_10000f250();
  FUN_1003a985c(lVar4 + 200,lVar6);
  *(undefined4 *)(lVar6 + 0x10) = 8;
  FUN_1003d266c(lVar6,"TalentArmyOfSoulsRight");
  *(undefined4 *)(lVar6 + 0x34) = 1;
  plVar5 = (long *)FUN_10000f300();
  FUN_1003a985c(lVar2,plVar5);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x50))(plVar5,PTR_s__Baptiste_Zombie__10185a408,0);
  uVar3 = (**(code **)(*plVar5 + 0x18))(plVar5,"TalentArmyOfSoulsLeft");
  plVar5 = (long *)FUN_10000bfc0();
  FUN_1003a985c(lVar2,plVar5);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x50))(plVar5,PTR_s_Buff_Baptiste_Zombie_10185a410,uVar3);
  (**(code **)(*plVar5 + 0x20))(plVar5,FUN_1003a4858);
  plVar5 = (long *)FUN_10000f300();
  FUN_1003a985c(lVar2,plVar5);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x50))(plVar5,PTR_s__Baptiste_Zombie__10185a408,0);
  uVar3 = (**(code **)(*plVar5 + 0x18))(plVar5,"TalentArmyOfSoulsFarLeft");
  plVar5 = (long *)FUN_10000bfc0();
  FUN_1003a985c(lVar2,plVar5);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x50))(plVar5,PTR_s_Buff_Baptiste_Zombie_10185a410,uVar3);
  (**(code **)(*plVar5 + 0x20))(plVar5,FUN_1003a4858);
  plVar5 = (long *)FUN_10000f300();
  FUN_1003a985c(lVar2,plVar5);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x50))(plVar5,PTR_s__Baptiste_Zombie__10185a408,0);
  uVar3 = (**(code **)(*plVar5 + 0x18))(plVar5,"TalentArmyOfSoulsRight");
  plVar5 = (long *)FUN_10000bfc0();
  FUN_1003a985c(lVar2,plVar5);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x50))(plVar5,PTR_s_Buff_Baptiste_Zombie_10185a410,uVar3);
  (**(code **)(*plVar5 + 0x20))(plVar5,FUN_1003a4858);
  plVar5 = (long *)FUN_10000f300();
  FUN_1003a985c(lVar2,plVar5);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x50))(plVar5,PTR_s__Baptiste_Zombie__10185a408,0);
  uVar3 = (**(code **)(*plVar5 + 0x18))(plVar5,"TalentArmyOfSoulsFarRight");
  plVar5 = (long *)FUN_10000bfc0();
  FUN_1003a985c(lVar2,plVar5);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x50))(plVar5,PTR_s_Buff_Baptiste_Zombie_10185a410,uVar3);
  (**(code **)(*plVar5 + 0x20))(plVar5,FUN_1003a4858);
  lVar2 = FUN_10000ceb8();
  FUN_1003a985c(&local_70,lVar2);
  *(undefined4 *)(lVar2 + 0x2c) = 0x3dcccccd;
  *(undefined8 *)(lVar2 + 0x10) = 0;
  lVar2 = FUN_10000d8b8();
  FUN_1003a985c(&local_70,lVar2);
  *(undefined1 *)(lVar2 + 0x10) = 0;
  uVar3 = FUN_10000f034();
  FUN_1003a985c(&local_70,uVar3);
  return local_70;
}




undefined8 FUN_10038149c(void)

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
  *(undefined2 *)(lVar2 + 0x28) = 0x101;
  *(undefined8 *)(lVar2 + 0x30) = 0;
  uVar1 = FUN_1004d2524("Idle");
  uVar1 = FUN_100015208("Idle",uVar1,0x12345678);
  *(undefined4 *)(lVar2 + 0x10) = uVar1;
  *(undefined4 *)(lVar2 + 0x20) = 0;
  uVar3 = FUN_10000f034();
  FUN_1003a985c(&local_30,uVar3);
  return local_30;
}




undefined8 FUN_100381520(void)

{
  undefined8 uVar1;
  undefined8 local_20;
  undefined8 uStack_18;
  
  local_20 = 0;
  uStack_18 = 0;
  uVar1 = FUN_10000d9a0();
  FUN_1003a985c(&local_20,uVar1);
  return local_20;
}




void FUN_100381550(void)

{
  FUN_1003ae7a0("Attack",&PTR_s_Sound_Reza_Basic_Attack_01_10185a9a0,
                &PTR_s_Sound_Reza_Impacts_01_10185a9c0,3,FUN_1003a3a5c);
  return;
}




void FUN_100381578(void)

{
  FUN_1003ae7a0("AltAttack",&PTR_s_Sound_Reza_Basic_Attack_01_10185a9a0,
                &PTR_s_Sound_Reza_Impacts_01_10185a9c0,3,FUN_1003a3a5c);
  return;
}




void FUN_1003815a0(void)

{
  FUN_1003ae7a0("CritAttack",&PTR_s_Sound_Reza_Crit_Attack_10185a9b8,
                &PTR_s_Sound_Reza_Crit_Impact_10185a9d8,1,FUN_1003a3acc);
  return;
}




void FUN_1003815c8(void)

{
  FUN_1003ae7a0("C_NetherformAttack",&PTR_s_Sound_Reza_Basic_Attack_01_10185a9a0,
                &PTR_s_Sound_Reza_Impacts_01_10185a9c0,3,FUN_1003ac88c);
  return;
}




undefined8 FUN_1003815f0(void)

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
  uVar1 = FUN_1004d2524("Ability01");
  uVar1 = FUN_100015208("Ability01",uVar1,0x12345678);
  *(undefined4 *)(lVar2 + 0x10) = uVar1;
  uVar1 = FUN_1004d2524("AttackToIdleCombat");
  uVar1 = FUN_100015208("AttackToIdleCombat",uVar1,0x12345678);
  *(undefined4 *)(lVar2 + 0x20) = uVar1;
  plVar3 = (long *)thunk_FUN_10000e358();
  FUN_1003a985c(&local_40,plVar3);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x58))(plVar3);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Reza_A_Cast");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x78))(plVar3,0);
  (**(code **)(*plVar3 + 0xb0))(plVar3,0);
  lVar2 = FUN_10000e524();
  FUN_1003a985c(&local_40,lVar2);
  uVar4 = FUN_1010a1520();
  lVar5 = FUN_1010a0e0c(uVar4,0,"*KindredSoundBalance*",0);
  uVar1 = FUN_1003aec0c(*(undefined4 *)(lVar5 + 0x3f8));
  *(char **)(lVar2 + 0x10) = "Sound_Reza_Ability_A_Projectile";
  *(undefined2 *)(lVar2 + 0x30) = 0x1ff;
  *(undefined4 *)(lVar2 + 0x34) = 1;
  *(undefined4 *)(lVar2 + 0x3c) = uVar1;
  *(undefined4 *)(lVar2 + 0x40) = 0xffffffff;
  *(byte *)(lVar2 + 0x38) = *(byte *)(lVar2 + 0x38) & 0xf8 | 4;
  *(undefined8 *)(lVar2 + 0x48) = 0;
  lVar2 = FUN_10000ceb8();
  FUN_1003a985c(&local_40,lVar2);
  *(code **)(lVar2 + 0x20) = FUN_1003aec70;
  *(undefined8 *)(lVar2 + 0x10) = 0;
  lVar2 = FUN_10000f250();
  FUN_1003a985c(&local_40,lVar2);
  *(undefined4 *)(lVar2 + 0x10) = 0x57;
  FUN_1003d266c(lVar2,"CenterBody");
  *(undefined4 *)(lVar2 + 0x34) = 0;
  lVar2 = FUN_10000d8b8();
  FUN_1003a985c(&local_40,lVar2);
  *(undefined1 *)(lVar2 + 0x10) = 0;
  return local_40;
}




undefined8 FUN_100381800(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  undefined4 local_50 [2];
  undefined4 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  local_40 = 0;
  uStack_38 = 0;
  uVar2 = FUN_10000d8b8();
  FUN_1003a985c(&local_40,uVar2);
  lVar3 = FUN_10000ef8c();
  FUN_1003a985c(&local_40,lVar3);
  *(byte *)(lVar3 + 0x10) = *(byte *)(lVar3 + 0x10) & 0xe7 | 4;
  lVar3 = FUN_10000dff8();
  FUN_1003a985c(&local_40,lVar3);
  *(undefined2 *)(lVar3 + 0x28) = 0x100;
  *(undefined8 *)(lVar3 + 0x30) = 0;
  uVar1 = FUN_1004d2524("Ability02");
  uVar1 = FUN_100015208("Ability02",uVar1,0x12345678);
  *(undefined4 *)(lVar3 + 0x10) = uVar1;
  uVar1 = FUN_1004d2524("AttackToIdleCombat");
  uVar1 = FUN_100015208("AttackToIdleCombat",uVar1,0x12345678);
  *(undefined4 *)(lVar3 + 0x20) = uVar1;
  plVar4 = (long *)thunk_FUN_10000e358();
  FUN_1003a985c(&local_40,plVar4);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x58))(plVar4);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x48))(plVar4,"Effect_Reza_B_Cast");
  plVar4 = (long *)(**(code **)(*plVar4 + 0x78))(plVar4,1);
  (**(code **)(*plVar4 + 0xb0))(plVar4,0);
  lVar3 = FUN_10000ceb8();
  FUN_1003a985c(&local_40,lVar3);
  *(code **)(lVar3 + 0x20) = FUN_1003aecd4;
  *(undefined8 *)(lVar3 + 0x10) = 0;
  plVar4 = (long *)FUN_10000cd5c();
  FUN_1003a985c(&local_40,plVar4);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x88))(plVar4);
  local_50[0] = 0x3e4ccccd;
  local_48 = 1;
  plVar4 = (long *)(**(code **)(*plVar4 + 0xa8))(plVar4,local_50);
  (**(code **)(*plVar4 + 0xb0))(plVar4,1);
  uVar2 = FUN_10000bb2c();
  FUN_1003a985c(&local_40,uVar2);
  lVar3 = FUN_10000bd3c();
  FUN_1003a985c(&local_40,lVar3);
  *(undefined **)(lVar3 + 0x10) = PTR_s_Buff_SelfProjectile_10185a530;
  *(code **)(lVar3 + 0x28) = FUN_1003aec90;
  *(undefined2 *)(lVar3 + 0x68) = 1;
  *(byte *)(lVar3 + 0x6a) = *(byte *)(lVar3 + 0x6a) & 0xfe;
  *(code **)(lVar3 + 0x50) = FUN_10049aebc;
  uVar2 = FUN_10000c784();
  FUN_1003a985c(&local_40,uVar2);
  lVar3 = FUN_10000e524();
  FUN_1003a985c(&local_40,lVar3);
  uVar2 = FUN_1010a1520();
  lVar5 = FUN_1010a0e0c(uVar2,0,"*KindredSoundBalance*",0);
  uVar1 = FUN_1003aec0c(*(undefined4 *)(lVar5 + 0x400));
  *(char **)(lVar3 + 0x10) = "Sound_Reza_Ability_B_Dashing";
  *(undefined2 *)(lVar3 + 0x30) = 0x1ff;
  *(undefined4 *)(lVar3 + 0x34) = 1;
  *(undefined4 *)(lVar3 + 0x3c) = uVar1;
  *(undefined4 *)(lVar3 + 0x40) = 0xffffffff;
  *(byte *)(lVar3 + 0x38) = *(byte *)(lVar3 + 0x38) & 0xf8 | 4;
  *(undefined8 *)(lVar3 + 0x48) = 0;
  lVar3 = FUN_10000ceb8();
  FUN_1003a985c(&local_40,lVar3);
  *(undefined4 *)(lVar3 + 0x2c) = 0x3dcccccd;
  *(undefined8 *)(lVar3 + 0x10) = 0;
  uVar2 = FUN_10000f9c0();
  FUN_1003a985c(&local_40,uVar2);
  uVar2 = FUN_10000bb2c();
  FUN_1003a985c(&local_40,uVar2);
  lVar3 = FUN_10000bd3c();
  FUN_1003a985c(&local_40,lVar3);
  *(undefined **)(lVar3 + 0x10) = PTR_s_Buff_SpeedDecayingUsingBuffVar_10185a9f8;
  *(undefined4 *)(lVar3 + 0x18) = 0x40400000;
  *(undefined2 *)(lVar3 + 0x68) = 1;
  *(byte *)(lVar3 + 0x6a) = *(byte *)(lVar3 + 0x6a) & 0xfe;
  *(code **)(lVar3 + 0x58) = FUN_1003aec84;
  lVar3 = FUN_10000bd3c();
  FUN_1003a985c(&local_40,lVar3);
  *(undefined **)(lVar3 + 0x10) = PTR_s_Buff_Reza_B_EmpoweredAttack_10185a9e0;
  *(code **)(lVar3 + 0x30) = FUN_1003aece8;
  *(undefined2 *)(lVar3 + 0x68) = 1;
  *(byte *)(lVar3 + 0x6a) = *(byte *)(lVar3 + 0x6a) & 0xfe;
  uVar2 = FUN_10000c784();
  FUN_1003a985c(&local_40,uVar2);
  lVar3 = FUN_10000c8e8();
  FUN_1003a985c(&local_40,lVar3);
  lVar5 = FUN_10049ab34(lVar3 + 0x10);
  *(undefined **)(lVar5 + 8) = PTR_s_Buff_Reza_Talent_BurningBarrier_10185aa00;
  lVar3 = lVar3 + 0xb0;
  uVar2 = FUN_10000bb2c();
  FUN_1003a985c(lVar3,uVar2);
  lVar5 = FUN_10000bd3c();
  FUN_1003a985c(lVar3,lVar5);
  *(undefined **)(lVar5 + 0x10) = PTR_s_Buff_Reza_BurningBarrier_Barrier_10185aa08;
  *(code **)(lVar5 + 0x30) = FUN_1003aece8;
  *(undefined2 *)(lVar5 + 0x68) = 1;
  *(byte *)(lVar5 + 0x6a) = *(byte *)(lVar5 + 0x6a) & 0xfe;
  uVar2 = FUN_10000c784();
  FUN_1003a985c(lVar3,uVar2);
  lVar3 = FUN_10000d8b8();
  FUN_1003a985c(&local_40,lVar3);
  *(undefined1 *)(lVar3 + 0x10) = 0;
  return local_40;
}




undefined8 FUN_100381be8(void)

{
  byte bVar1;
  bool bVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined3 local_80;
  undefined5 uStack_7d;
  undefined4 uStack_78;
  undefined3 uStack_74;
  undefined4 uStack_71;
  undefined4 uStack_6d;
  undefined8 uStack_69;
  undefined8 local_60;
  undefined8 uStack_58;
  
  local_60 = 0;
  uStack_58 = 0;
  lVar4 = FUN_10000d8b8();
  FUN_1003a985c(&local_60,lVar4);
  *(undefined1 *)(lVar4 + 0x10) = 1;
  lVar4 = FUN_10000ef8c();
  FUN_1003a985c(&local_60,lVar4);
  *(byte *)(lVar4 + 0x10) = *(byte *)(lVar4 + 0x10) & 0xe7 | 4;
  lVar4 = FUN_10000dff8();
  FUN_1003a985c(&local_60,lVar4);
  *(undefined2 *)(lVar4 + 0x28) = 0x100;
  *(undefined8 *)(lVar4 + 0x30) = 0;
  uVar3 = FUN_1004d2524("Ability03_Start");
  uVar3 = FUN_100015208("Ability03_Start",uVar3,0x12345678);
  *(undefined4 *)(lVar4 + 0x10) = uVar3;
  *(undefined4 *)(lVar4 + 0x20) = 0;
  uVar5 = FUN_10000e1b4();
  FUN_1003a985c(&local_60,uVar5);
  FUN_1003a4cdc(0x3f000000,uVar5,"Effect_Reza_StartingTeleport",0,"CenterBody",0,1,0,0);
  lVar4 = FUN_10000ceb8();
  FUN_1003a985c(&local_60,lVar4);
  *(code **)(lVar4 + 0x20) = FUN_1003aefa4;
  *(undefined8 *)(lVar4 + 0x10) = 0;
  uVar5 = FUN_10000bb2c();
  FUN_1003a985c(&local_60,uVar5);
  lVar4 = FUN_10000bd3c();
  FUN_1003a985c(&local_60,lVar4);
  *(undefined **)(lVar4 + 0x10) = PTR_s_Buff_Reza_C_Teleporting_10185aa18;
  *(code **)(lVar4 + 0x30) = FUN_1003aefb8;
  *(undefined2 *)(lVar4 + 0x68) = 1;
  *(byte *)(lVar4 + 0x6a) = *(byte *)(lVar4 + 0x6a) & 0xfe;
  uVar5 = FUN_10000c784();
  FUN_1003a985c(&local_60,uVar5);
  plVar6 = (long *)FUN_10000f300();
  FUN_1003a985c(&local_60,plVar6);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x50))(plVar6,"*Reza_C_WarningIndicator*",0);
  (**(code **)(*plVar6 + 0x20))(plVar6,FUN_1003aed78);
  plVar6 = (long *)FUN_10000f748();
  FUN_1003a985c(&local_60,plVar6);
  (**(code **)(*plVar6 + 0x58))(plVar6);
  uVar5 = FUN_10000bb2c();
  FUN_1003a985c(&local_60,uVar5);
  lVar4 = FUN_10000bd3c();
  FUN_1003a985c(&local_60,lVar4);
  *(undefined **)(lVar4 + 0x10) = PTR_s_Buff_Reza_C_DamagePostTeleport_10185aa20;
  *(code **)(lVar4 + 0x30) = FUN_1003aef90;
  *(undefined2 *)(lVar4 + 0x68) = 1;
  *(byte *)(lVar4 + 0x6a) = *(byte *)(lVar4 + 0x6a) & 0xfe;
  lVar4 = FUN_10000bd3c();
  FUN_1003a985c(&local_60,lVar4);
  *(undefined **)(lVar4 + 0x10) = PTR_s_Buff_Reza_C_Netherform_10185aa28;
  *(code **)(lVar4 + 0x28) = FUN_1003aeec0;
  *(undefined2 *)(lVar4 + 0x68) = 1;
  *(byte *)(lVar4 + 0x6a) = *(byte *)(lVar4 + 0x6a) & 0xfe;
  uVar5 = FUN_10000c784();
  FUN_1003a985c(&local_60,uVar5);
  lVar4 = FUN_10000ceb8();
  FUN_1003a985c(&local_60,lVar4);
  *(code **)(lVar4 + 0x20) = FUN_1003aefb8;
  *(undefined8 *)(lVar4 + 0x10) = 0;
  lVar4 = FUN_10000d024();
  FUN_1003a985c(&local_60,lVar4);
  *(char **)(lVar4 + 0x10) = "Reza_C_WarningIndicator";
  plVar6 = (long *)FUN_10000bdf0();
  FUN_1003a985c(&local_60,plVar6);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x50))
                             (plVar6,PTR_s_Buff_Reza_C_PostTeleport_No_Coll_10185aa30);
  local_80 = 0x3aefcc;
  uStack_7d = 0x100;
  uStack_78 = 3;
  (**(code **)(*plVar6 + 0x18))(plVar6,&local_80);
  lVar4 = FUN_10000ceb8();
  FUN_1003a985c(&local_60,lVar4);
  *(code **)(lVar4 + 0x20) = FUN_1003aefcc;
  *(undefined8 *)(lVar4 + 0x10) = 0;
  plVar6 = (long *)FUN_10000bdf0();
  FUN_1003a985c(&local_60,plVar6);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x50))
                             (plVar6,PTR_s_Buff_Reza_C_PostCastSpeedBonus_10185aa38);
  local_80 = 0x3aefe0;
  uStack_7d = 0x100;
  uStack_78 = 3;
  (**(code **)(*plVar6 + 0x18))(plVar6,&local_80);
  lVar4 = FUN_1003e10f0();
  bVar1 = *(byte *)(lVar4 + 0xe5);
  uStack_69 = 0;
  uStack_71 = 0;
  uStack_6d = 0;
  uStack_7d = 0;
  uStack_78._0_3_ = 0;
  uStack_78._3_1_ = 0;
  uStack_74 = 0;
  lVar4 = FUN_10000eaac();
  FUN_1003a985c(&local_60,lVar4);
  *(undefined **)(lVar4 + 0x78) = PTR_s_Buff_Reza_VolatileSpark_10185aa40;
  *(undefined8 *)(lVar4 + 0x18) = 0;
  *(undefined1 *)(lVar4 + 0x20) = 1;
  *(ulong *)(lVar4 + 0x2c) = CONCAT44(uStack_71,CONCAT31(uStack_74,uStack_78._3_1_));
  *(ulong *)(lVar4 + 0x24) = CONCAT35((undefined3)uStack_78,uStack_7d);
  *(undefined8 *)(lVar4 + 0x38) = uStack_69;
  *(ulong *)(lVar4 + 0x30) = CONCAT44(uStack_6d,uStack_71);
  *(undefined8 *)(lVar4 + 0x48) = 0xbf800000c0000000;
  *(undefined8 *)(lVar4 + 0x40) = 0xbf80000041c80000;
  *(undefined4 *)(lVar4 + 0x50) = 0x3f800000;
  *(undefined1 *)(lVar4 + 0x54) = 0xff;
  *(undefined8 *)(lVar4 + 0x60) = 0xffffffff00000000;
  *(undefined8 *)(lVar4 + 0x58) = 0xffffffff00440000;
  bVar1 = bVar1 | 0x14;
  *(byte *)(lVar4 + 0x6a) = bVar1;
  *(undefined2 *)(lVar4 + 0x68) = 0xc120;
  *(byte *)(lVar4 + 0x80) = *(byte *)(lVar4 + 0x80) & 0xfc | DAT_101d23a38 != '\0';
  lVar4 = FUN_10000cae4();
  FUN_1003a985c(&local_60,lVar4);
  *(code **)(lVar4 + 0x10) = FUN_1003aecfc;
  lVar4 = FUN_10000bd3c();
  FUN_1003a985c(&local_60,lVar4);
  *(undefined8 *)(lVar4 + 0x10) = DAT_10185aa48;
  *(undefined4 *)(lVar4 + 0x18) = 0x3dcccccd;
  *(undefined2 *)(lVar4 + 0x68) = 1;
  *(byte *)(lVar4 + 0x6a) = *(byte *)(lVar4 + 0x6a) & 0xfe;
  uVar5 = FUN_10000c784();
  FUN_1003a985c(&local_60,uVar5);
  lVar4 = FUN_10000ed74();
  FUN_1003a985c(&local_60,lVar4);
  *(undefined8 *)(lVar4 + 0x18) = 0;
  *(undefined1 *)(lVar4 + 0x20) = 1;
  *(ulong *)(lVar4 + 0x2c) = CONCAT44(uStack_71,CONCAT31(uStack_74,uStack_78._3_1_));
  *(ulong *)(lVar4 + 0x24) = CONCAT35((undefined3)uStack_78,uStack_7d);
  *(undefined8 *)(lVar4 + 0x38) = uStack_69;
  *(ulong *)(lVar4 + 0x30) = CONCAT44(uStack_6d,uStack_71);
  *(undefined8 *)(lVar4 + 0x48) = 0xbf800000c0000000;
  *(undefined8 *)(lVar4 + 0x40) = 0xbf80000041c80000;
  *(undefined4 *)(lVar4 + 0x50) = 0x3f800000;
  *(undefined1 *)(lVar4 + 0x54) = 0xff;
  *(undefined8 *)(lVar4 + 0x60) = 0xffffffff00000000;
  *(undefined8 *)(lVar4 + 0x58) = 0xffffffff00440000;
  *(byte *)(lVar4 + 0x6a) = bVar1;
  *(undefined2 *)(lVar4 + 0x68) = 0xc120;
  bVar2 = DAT_101d23a38 != '\0';
  *(undefined4 *)(lVar4 + 0xa4) = 0x40a00000;
  *(byte *)(lVar4 + 0xa8) = *(byte *)(lVar4 + 0xa8) & 0xf0 | bVar2;
  lVar4 = FUN_10000bd3c();
  FUN_1003a985c(&local_60,lVar4);
  *(undefined **)(lVar4 + 0x10) = PTR_s_Buff_Reza_VolatileSpark_10185aa40;
  *(code **)(lVar4 + 0x30) = FUN_1003aeff4;
  *(undefined2 *)(lVar4 + 0x68) = 1;
  *(byte *)(lVar4 + 0x6a) = *(byte *)(lVar4 + 0x6a) & 0xfe;
  uVar5 = FUN_10000c784();
  FUN_1003a985c(&local_60,uVar5);
  lVar4 = FUN_10000ceb8();
  FUN_1003a985c(&local_60,lVar4);
  *(code **)(lVar4 + 0x20) = FUN_1003af008;
  *(undefined8 *)(lVar4 + 0x10) = 0;
  lVar4 = FUN_10000d8b8();
  FUN_1003a985c(&local_60,lVar4);
  *(undefined1 *)(lVar4 + 0x10) = 0;
  return local_60;
}




void FUN_100382188(void)

{
  FUN_1003abb08("Attack",FUN_1003abe2c);
  return;
}




void FUN_10038219c(void)

{
  FUN_1003abb08("AltAttack",FUN_1003abe2c);
  return;
}




void FUN_1003821b0(void)

{
  FUN_1003abb08("CritAttack",FUN_1003abe9c);
  return;
}




undefined8 FUN_1003821c4(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  undefined4 local_60 [2];
  undefined4 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  local_50 = 0;
  uStack_48 = 0;
  lVar3 = FUN_10000d2d0();
  FUN_1003a985c(&local_50,lVar3);
  *(undefined **)(lVar3 + 0x10) = PTR_s_Buff_Grace_A_Lockout_10185a760;
  *(undefined4 *)(lVar3 + 0x18) = 2;
  lVar3 = FUN_10000d2d0();
  FUN_1003a985c(&local_50,lVar3);
  *(undefined **)(lVar3 + 0x10) = PTR_s_Buff_Grace_A_LockoutOnUltimate_10185a768;
  *(undefined4 *)(lVar3 + 0x18) = 2;
  lVar3 = FUN_10000d2d0();
  FUN_1003a985c(&local_50,lVar3);
  *(undefined **)(lVar3 + 0x10) = PTR_s_Buff_Grace_A_LockoutOnUltimateUs_10185a770;
  *(undefined4 *)(lVar3 + 0x18) = 2;
  FUN_1003ac044(&local_50);
  lVar3 = FUN_10000dff8();
  FUN_1003a985c(&local_50,lVar3);
  *(undefined2 *)(lVar3 + 0x28) = 0;
  *(undefined8 *)(lVar3 + 0x30) = 0;
  uVar2 = FUN_1004d2524("Ability01_Startup");
  uVar2 = FUN_100015208("Ability01_Startup",uVar2,0x12345678);
  *(undefined4 *)(lVar3 + 0x10) = uVar2;
  *(undefined4 *)(lVar3 + 0x20) = 0;
  lVar3 = FUN_10000ceb8();
  FUN_1003a985c(&local_50,lVar3);
  *(undefined4 *)(lVar3 + 0x2c) = 0x3e4ccccd;
  *(undefined8 *)(lVar3 + 0x10) = 0;
  lVar3 = FUN_10000e524();
  FUN_1003a985c(&local_50,lVar3);
  uVar4 = FUN_1010a1520();
  lVar5 = FUN_1010a0e0c(uVar4,0,"*KindredSoundBalance*",0);
  uVar2 = FUN_1003abdc8(*(undefined4 *)(lVar5 + 0x3dc));
  *(undefined2 *)(lVar3 + 0x30) = 0x2ff;
  *(undefined4 *)(lVar3 + 0x34) = 1;
  *(undefined4 *)(lVar3 + 0x3c) = uVar2;
  *(undefined4 *)(lVar3 + 0x40) = 0xffffffff;
  *(byte *)(lVar3 + 0x38) = *(byte *)(lVar3 + 0x38) & 0xf8 | 4;
  *(undefined8 *)(lVar3 + 0x48) = 0;
  *(char **)(lVar3 + 0x10) = "Sound_Grace_A_Dash_01";
  *(char **)(lVar3 + 0x18) = "Sound_Grace_A_Dash_02";
  uVar4 = FUN_10000bb2c();
  FUN_1003a985c(&local_50,uVar4);
  puVar1 = PTR_s_Buff_Grace_A_GuardOmni_10185a778;
  lVar3 = FUN_10000bd3c();
  FUN_1003a985c(&local_50,lVar3);
  *(undefined **)(lVar3 + 0x10) = puVar1;
  *(code **)(lVar3 + 0x30) = FUN_1003ac0a0;
  *(undefined2 *)(lVar3 + 0x68) = 1;
  *(byte *)(lVar3 + 0x6a) = *(byte *)(lVar3 + 0x6a) & 0xfe;
  puVar1 = PTR_s_Buff_Grace_A_Lockout_10185a760;
  lVar3 = FUN_10000bd3c();
  FUN_1003a985c(&local_50,lVar3);
  *(undefined **)(lVar3 + 0x10) = puVar1;
  *(code **)(lVar3 + 0x30) = FUN_1003ac0a0;
  *(undefined2 *)(lVar3 + 0x68) = 1;
  *(byte *)(lVar3 + 0x6a) = *(byte *)(lVar3 + 0x6a) & 0xfe;
  uVar4 = FUN_10000c784();
  FUN_1003a985c(&local_50,uVar4);
  FUN_1003ac0b4(&local_50,FUN_1003ac17c);
  puVar1 = PTR_s_Buff_Grace_A_GuardDirectional_10185a780;
  lVar3 = FUN_10000bd3c();
  FUN_1003a985c(&local_50,lVar3);
  *(undefined **)(lVar3 + 0x10) = puVar1;
  *(code **)(lVar3 + 0x30) = FUN_1003ac190;
  *(undefined2 *)(lVar3 + 0x68) = 1;
  *(byte *)(lVar3 + 0x6a) = *(byte *)(lVar3 + 0x6a) & 0xfe;
  *(code **)(lVar3 + 0x58) = FUN_1003abf50;
  uVar4 = FUN_10000c784();
  FUN_1003a985c(&local_50,uVar4);
  lVar3 = FUN_10000ceb8();
  FUN_1003a985c(&local_50,lVar3);
  *(undefined4 *)(lVar3 + 0x2c) = 0x3e99999a;
  *(undefined8 *)(lVar3 + 0x10) = 0;
  lVar3 = FUN_10000ef8c();
  FUN_1003a985c(&local_50,lVar3);
  *(byte *)(lVar3 + 0x10) = *(byte *)(lVar3 + 0x10) & 0xe3 | 8;
  lVar3 = FUN_10000dff8();
  FUN_1003a985c(&local_50,lVar3);
  *(undefined2 *)(lVar3 + 0x28) = 0;
  *(undefined8 *)(lVar3 + 0x30) = 0;
  uVar2 = FUN_1004d2524("Ability01_Dash");
  uVar2 = FUN_100015208("Ability01_Dash",uVar2,0x12345678);
  *(undefined4 *)(lVar3 + 0x10) = uVar2;
  *(undefined4 *)(lVar3 + 0x20) = 0;
  plVar6 = (long *)FUN_10000cd5c();
  FUN_1003a985c(&local_50,plVar6);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x68))(0x3eb33333,0,0x3f800000,0x3f800000,plVar6);
  local_60[0] = 0x42040000;
  local_58 = 1;
  plVar6 = (long *)(**(code **)(*plVar6 + 0xa0))(plVar6,local_60);
  plVar6 = (long *)(**(code **)(*plVar6 + 0xb0))(plVar6,1);
  (**(code **)(*plVar6 + 0xb8))(0x41700000);
  FUN_1003ac1a4(&local_50);
  lVar3 = FUN_10000dff8();
  FUN_1003a985c(&local_50,lVar3);
  *(undefined2 *)(lVar3 + 0x28) = 0;
  *(undefined8 *)(lVar3 + 0x30) = 0;
  uVar2 = FUN_1004d2524("Ability01_DashEndAttack");
  uVar2 = FUN_100015208("Ability01_DashEndAttack",uVar2,0x12345678);
  *(undefined4 *)(lVar3 + 0x10) = uVar2;
  uVar2 = FUN_1004d2524("AttackToIdleCombat");
  uVar2 = FUN_100015208("AttackToIdleCombat",uVar2,0x12345678);
  *(undefined4 *)(lVar3 + 0x20) = uVar2;
  lVar3 = FUN_10000e524();
  FUN_1003a985c(&local_50,lVar3);
  uVar4 = FUN_1010a1520();
  lVar5 = FUN_1010a0e0c(uVar4,0,"*KindredSoundBalance*",0);
  uVar2 = FUN_1003abdc8(*(undefined4 *)(lVar5 + 0x3d4));
  *(undefined2 *)(lVar3 + 0x30) = 0x3ff;
  *(undefined4 *)(lVar3 + 0x34) = 1;
  *(undefined4 *)(lVar3 + 0x3c) = uVar2;
  *(undefined4 *)(lVar3 + 0x40) = 0xffffffff;
  *(byte *)(lVar3 + 0x38) = *(byte *)(lVar3 + 0x38) & 0xf8 | 4;
  *(undefined8 *)(lVar3 + 0x48) = 0;
  *(char **)(lVar3 + 0x10) = "Sound_Grace_A_Impact_01";
  *(char **)(lVar3 + 0x18) = "Sound_Grace_A_Impact_02";
  *(char **)(lVar3 + 0x20) = "Sound_Grace_A_Impact_03";
  FUN_1003ab624(&local_50,1);
  plVar6 = (long *)thunk_FUN_10000f1a0();
  FUN_1003a985c(&local_50,plVar6);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x60))(plVar6);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x10))(0x3e99999a);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x18))(0x3f000000);
  (**(code **)(*plVar6 + 0x20))(0x41500000);
  lVar3 = FUN_10000ceb8();
  FUN_1003a985c(&local_50,lVar3);
  *(undefined4 *)(lVar3 + 0x2c) = 0x3dcccccd;
  *(undefined8 *)(lVar3 + 0x10) = 0;
  FUN_1003a643c(&local_50,PTR_s_Buff_Grace_PostAbilityBonuses_10185a788,FUN_1003ac1f0);
  lVar3 = FUN_10000ceb8();
  FUN_1003a985c(&local_50,lVar3);
  *(undefined4 *)(lVar3 + 0x2c) = 0x3dcccccd;
  *(undefined8 *)(lVar3 + 0x10) = 0;
  lVar3 = FUN_10000e7fc();
  FUN_1003a985c(&local_50,lVar3);
  *(undefined4 *)(lVar3 + 0x10) = 0x3f000000;
  lVar3 = FUN_10000d8b8();
  FUN_1003a985c(&local_50,lVar3);
  *(undefined1 *)(lVar3 + 0x10) = 0;
  return local_50;
}




undefined8 FUN_100382730(void)

{
  char cVar1;
  byte bVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  uint uVar8;
  char *pcVar9;
  undefined4 uVar10;
  undefined4 local_70 [2];
  undefined4 local_68;
  undefined4 local_60 [2];
  undefined4 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  local_50 = 0;
  uStack_48 = 0;
  lVar4 = FUN_10000d8b8();
  FUN_1003a985c(&local_50,lVar4);
  *(undefined1 *)(lVar4 + 0x10) = 1;
  lVar4 = FUN_10000e524();
  FUN_1003a985c(&local_50,lVar4);
  uVar5 = FUN_1010a1520();
  lVar6 = FUN_1010a0e0c(uVar5,0,"*KindredSoundBalance*",0);
  uVar10 = FUN_1003abdc8(*(undefined4 *)(lVar6 + 0x3e0));
  *(undefined2 *)(lVar4 + 0x30) = 0x3ff;
  *(undefined4 *)(lVar4 + 0x34) = 1;
  *(undefined4 *)(lVar4 + 0x3c) = uVar10;
  *(undefined4 *)(lVar4 + 0x40) = 0xffffffff;
  *(byte *)(lVar4 + 0x38) = *(byte *)(lVar4 + 0x38) & 0xf8 | 4;
  *(undefined8 *)(lVar4 + 0x48) = 0;
  *(char **)(lVar4 + 0x10) = "Sound_Grace_B_Buildup_01";
  *(char **)(lVar4 + 0x18) = "Sound_Grace_B_Buildup_02";
  *(char **)(lVar4 + 0x20) = "Sound_Grace_B_Buildup_03";
  lVar4 = FUN_10000c8e8();
  FUN_1003a985c(&local_50,lVar4);
  lVar6 = FUN_10049ac04(lVar4 + 0x10);
  if (PTR_s_Ability__Grace__B_101859930 == (undefined *)0x0) {
    uVar8 = 0;
  }
  else {
    uVar8 = 0x811c9dc5;
    cVar1 = *PTR_s_Ability__Grace__B_101859930;
    pcVar9 = PTR_s_Ability__Grace__B_101859930;
    while (cVar1 != '\0') {
      pcVar9 = pcVar9 + 1;
      uVar8 = (uVar8 ^ (int)cVar1) * 0x1000193;
      cVar1 = *pcVar9;
    }
  }
  *(uint *)(lVar6 + 8) = uVar8;
  FUN_1003ac210(0x3f8ccccd,lVar4 + 0xb0,PTR_s_Buff_BlockDebuffs_10185a528);
  lVar4 = FUN_10000dff8();
  FUN_1003a985c(&local_50,lVar4);
  *(undefined2 *)(lVar4 + 0x28) = 0;
  *(undefined8 *)(lVar4 + 0x30) = 0;
  uVar10 = FUN_1004d2524("Ability02");
  uVar10 = FUN_100015208("Ability02",uVar10,0x12345678);
  *(undefined4 *)(lVar4 + 0x10) = uVar10;
  uVar10 = FUN_1004d2524("AttackToIdleCombat");
  uVar10 = FUN_100015208("AttackToIdleCombat",uVar10,0x12345678);
  *(undefined4 *)(lVar4 + 0x20) = uVar10;
  plVar7 = (long *)thunk_FUN_10000e358();
  FUN_1003a985c(&local_50,plVar7);
  plVar7 = (long *)(**(code **)(*plVar7 + 0x58))(plVar7);
  plVar7 = (long *)(**(code **)(*plVar7 + 0x48))(plVar7,"Effect_Grace_B_Warning");
  plVar7 = (long *)(**(code **)(*plVar7 + 0xc0))(0x3f800000,0x3f800000,0);
  local_60[0] = 0x3f666666;
  local_58 = 1;
  plVar7 = (long *)(**(code **)(*plVar7 + 0x60))(plVar7,local_60);
  local_70[0] = 0x40600000;
  local_68 = 1;
  plVar7 = (long *)(**(code **)(*plVar7 + 0xd0))(plVar7,local_70);
  plVar7 = (long *)(**(code **)(*plVar7 + 0x78))(plVar7,1);
  plVar7 = (long *)(**(code **)(*plVar7 + 0xd8))(0x3e99999a);
  (**(code **)(*plVar7 + 0xb0))(plVar7,1);
  plVar7 = (long *)thunk_FUN_10000e358();
  FUN_1003a985c(&local_50,plVar7);
  plVar7 = (long *)(**(code **)(*plVar7 + 0x68))(plVar7,"Bone_Mace");
  plVar7 = (long *)(**(code **)(*plVar7 + 0x48))(plVar7,"Effect_Grace_B_Cast");
  local_60[0] = 0x3f666666;
  local_58 = 1;
  plVar7 = (long *)(**(code **)(*plVar7 + 0x60))(plVar7,local_60);
  plVar7 = (long *)(**(code **)(*plVar7 + 0x78))(plVar7,1);
  (**(code **)(*plVar7 + 0xb0))(plVar7,1);
  lVar4 = FUN_10000ceb8();
  FUN_1003a985c(&local_50,lVar4);
  *(undefined4 *)(lVar4 + 0x2c) = 0x3f666666;
  *(undefined8 *)(lVar4 + 0x10) = 0;
  plVar7 = (long *)thunk_FUN_10000e358();
  FUN_1003a985c(&local_50,plVar7);
  plVar7 = (long *)(**(code **)(*plVar7 + 0x58))(plVar7);
  plVar7 = (long *)(**(code **)(*plVar7 + 0x48))(plVar7,"Effect_Grace_B_Impact");
  plVar7 = (long *)(**(code **)(*plVar7 + 0xc0))(0x3f800000,0,0);
  plVar7 = (long *)(**(code **)(*plVar7 + 0x78))(plVar7,0);
  (**(code **)(*plVar7 + 0xb0))(plVar7,1);
  lVar4 = FUN_10000ceb8();
  FUN_1003a985c(&local_50,lVar4);
  *(undefined4 *)(lVar4 + 0x2c) = 0x3dcccccd;
  *(undefined8 *)(lVar4 + 0x10) = 0;
  lVar4 = FUN_10000e524();
  FUN_1003a985c(&local_50,lVar4);
  uVar5 = FUN_1010a1520();
  lVar6 = FUN_1010a0e0c(uVar5,0,"*KindredSoundBalance*",0);
  uVar10 = FUN_1003abdc8(*(undefined4 *)(lVar6 + 0x3e0));
  *(undefined2 *)(lVar4 + 0x30) = 0x3ff;
  *(undefined4 *)(lVar4 + 0x34) = 1;
  *(undefined4 *)(lVar4 + 0x3c) = uVar10;
  *(undefined4 *)(lVar4 + 0x40) = 0xffffffff;
  *(byte *)(lVar4 + 0x38) = *(byte *)(lVar4 + 0x38) & 0xf8 | 4;
  *(undefined8 *)(lVar4 + 0x48) = 0;
  *(char **)(lVar4 + 0x10) = "Sound_Grace_B_Explosion_01";
  *(char **)(lVar4 + 0x18) = "Sound_Grace_B_Explosion_02";
  *(char **)(lVar4 + 0x20) = "Sound_Grace_B_Explosion_03";
  FUN_1003a8464(&local_50,FUN_1003ac290);
  uVar5 = FUN_10000cb8c();
  FUN_1003a985c(&local_50,uVar5);
  FUN_1003ac2a4(&local_50,FUN_1003ac308);
  uVar5 = FUN_10000c784();
  FUN_1003a985c(&local_50,uVar5);
  lVar4 = FUN_1003e10f0();
  bVar2 = *(byte *)(lVar4 + 0xe5);
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
  *(undefined8 *)(lVar4 + 0x58) = 0xffffffff00200000;
  *(byte *)(lVar4 + 0x6a) = bVar2 | 0x14;
  *(undefined2 *)(lVar4 + 0x68) = 0x4120;
  bVar3 = DAT_101d23a38 != '\0';
  *(code **)(lVar4 + 0x78) = FUN_1003ac290;
  *(byte *)(lVar4 + 0xa8) = *(byte *)(lVar4 + 0xa8) & 0xf0 | bVar3;
  lVar4 = FUN_10000bd3c();
  FUN_1003a985c(&local_50,lVar4);
  *(undefined **)(lVar4 + 0x10) = PTR_s_Buff_Stunned_10185a208;
  *(undefined4 *)(lVar4 + 0x18) = 0x3f800000;
  *(undefined2 *)(lVar4 + 0x68) = 1;
  *(byte *)(lVar4 + 0x6a) = *(byte *)(lVar4 + 0x6a) & 0xfe;
  lVar4 = FUN_10000c0a8();
  FUN_1003a985c(&local_50,lVar4);
  *(code **)(lVar4 + 0x10) = FUN_1003ac1fc;
  *(undefined2 *)(lVar4 + 0x18) = 0x100;
  uVar5 = FUN_10000c784();
  FUN_1003a985c(&local_50,uVar5);
  plVar7 = (long *)thunk_FUN_10000f1a0();
  FUN_1003a985c(&local_50,plVar7);
  plVar7 = (long *)(**(code **)(*plVar7 + 0x60))(plVar7);
  plVar7 = (long *)(**(code **)(*plVar7 + 0x10))(0x3eb33333);
  plVar7 = (long *)(**(code **)(*plVar7 + 0x18))(0x3f000000);
  (**(code **)(*plVar7 + 0x20))(0x41200000);
  lVar4 = FUN_10000e7fc();
  FUN_1003a985c(&local_50,lVar4);
  *(undefined4 *)(lVar4 + 0x10) = 0x3f000000;
  FUN_1003a643c(&local_50,PTR_s_Buff_Grace_PostAbilityBonuses_10185a788,FUN_1003ac1f0);
  lVar4 = FUN_10000ceb8();
  FUN_1003a985c(&local_50,lVar4);
  *(undefined4 *)(lVar4 + 0x2c) = 0x3dcccccd;
  *(undefined8 *)(lVar4 + 0x10) = 0;
  lVar4 = FUN_10000d8b8();
  FUN_1003a985c(&local_50,lVar4);
  *(undefined1 *)(lVar4 + 0x10) = 0;
  return local_50;
}




undefined8 FUN_100382d50(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  char cVar7;
  uint uVar8;
  char *pcVar9;
  uint uVar10;
  undefined8 local_70;
  undefined8 uStack_68;
  
  uVar10 = 0x811c9dc5;
  local_70 = 0;
  uStack_68 = 0;
  lVar3 = FUN_10000dff8();
  FUN_1003a985c(&local_70,lVar3);
  *(undefined2 *)(lVar3 + 0x28) = 0;
  *(undefined8 *)(lVar3 + 0x30) = 0;
  uVar2 = FUN_1004d2524("Ability03");
  uVar2 = FUN_100015208("Ability03",uVar2,0x12345678);
  *(undefined4 *)(lVar3 + 0x10) = uVar2;
  uVar2 = FUN_1004d2524("AttackToIdleCombat");
  uVar2 = FUN_100015208("AttackToIdleCombat",uVar2,0x12345678);
  *(undefined4 *)(lVar3 + 0x20) = uVar2;
  lVar3 = FUN_10000e524();
  FUN_1003a985c(&local_70,lVar3);
  uVar4 = FUN_1010a1520();
  lVar5 = FUN_1010a0e0c(uVar4,0,"*KindredSoundBalance*",0);
  uVar2 = FUN_1003abdc8(*(undefined4 *)(lVar5 + 0x3e4));
  *(undefined2 *)(lVar3 + 0x30) = 0x2ff;
  *(undefined4 *)(lVar3 + 0x40) = 0xffffffff;
  *(undefined4 *)(lVar3 + 0x34) = 1;
  *(undefined4 *)(lVar3 + 0x3c) = uVar2;
  *(byte *)(lVar3 + 0x38) = *(byte *)(lVar3 + 0x38) & 0xf8 | 4;
  *(undefined8 *)(lVar3 + 0x48) = 0;
  *(char **)(lVar3 + 0x10) = "Sound_Grace_C_Cast_01";
  *(char **)(lVar3 + 0x18) = "Sound_Grace_C_Cast_02";
  FUN_1003ac3d0(&local_70,PTR_s_Buff_Grace_C_TargetWarmup_10185a798,FUN_1003ac448);
  FUN_1003a643c(&local_70,PTR_s_Buff_Grace_C_SelfDuringChannel_10185a7a0,FUN_1003ac448);
  lVar3 = FUN_10000c8e8();
  FUN_1003a985c(&local_70,lVar3);
  lVar5 = FUN_10049acf0(lVar3 + 0x10);
  if (PTR_s_Ability__Grace__A_101859928 == (undefined *)0x0) {
    uVar8 = 0;
  }
  else {
    cVar7 = *PTR_s_Ability__Grace__A_101859928;
    uVar8 = 0x811c9dc5;
    if (cVar7 != '\0') {
      uVar8 = 0x811c9dc5;
      pcVar9 = PTR_s_Ability__Grace__A_101859928;
      do {
        pcVar9 = pcVar9 + 1;
        uVar8 = (uVar8 ^ (int)cVar7) * 0x1000193;
        cVar7 = *pcVar9;
      } while (cVar7 != '\0');
    }
  }
  *(uint *)(lVar5 + 8) = uVar8;
  *(undefined4 *)(lVar5 + 0xc) = 1;
  lVar3 = lVar3 + 0xb0;
  uVar4 = FUN_10000bb2c();
  FUN_1003a985c(lVar3,uVar4);
  puVar1 = PTR_s_Buff_Grace_A_GuardOmni_10185a778;
  lVar5 = FUN_10000bd3c();
  FUN_1003a985c(lVar3,lVar5);
  *(undefined **)(lVar5 + 0x10) = puVar1;
  *(code **)(lVar5 + 0x30) = FUN_1003ac0a0;
  *(undefined2 *)(lVar5 + 0x68) = 1;
  *(byte *)(lVar5 + 0x6a) = *(byte *)(lVar5 + 0x6a) & 0xfe;
  puVar1 = PTR_s_Buff_Grace_A_Lockout_10185a760;
  lVar5 = FUN_10000c540();
  FUN_1003a985c(lVar3,lVar5);
  *(undefined **)(lVar5 + 0x10) = puVar1;
  puVar1 = PTR_s_Buff_Grace_A_LockoutOnUltimate_10185a768;
  lVar5 = FUN_10000c540();
  FUN_1003a985c(lVar3,lVar5);
  *(undefined **)(lVar5 + 0x10) = puVar1;
  puVar1 = PTR_s_Buff_Grace_A_LockoutOnUltimateUs_10185a770;
  lVar5 = FUN_10000c540();
  FUN_1003a985c(lVar3,lVar5);
  *(undefined **)(lVar5 + 0x10) = puVar1;
  uVar4 = FUN_10000c784();
  FUN_1003a985c(lVar3,uVar4);
  uVar4 = FUN_10000bc94();
  FUN_1003a985c(lVar3,uVar4);
  puVar1 = PTR_s_Buff_Grace_A_GuardDirectional_10185a780;
  lVar5 = FUN_10000c540();
  FUN_1003a985c(lVar3,lVar5);
  *(undefined **)(lVar5 + 0x10) = puVar1;
  puVar1 = PTR_s_Buff_Grace_A_GuardOmni_10185a778;
  lVar5 = FUN_10000bd3c();
  FUN_1003a985c(lVar3,lVar5);
  *(undefined **)(lVar5 + 0x10) = puVar1;
  *(code **)(lVar5 + 0x30) = FUN_1003ac190;
  *(undefined2 *)(lVar5 + 0x68) = 1;
  *(byte *)(lVar5 + 0x6a) = *(byte *)(lVar5 + 0x6a) & 0xfe;
  uVar4 = FUN_10000c784();
  FUN_1003a985c(lVar3,uVar4);
  uVar4 = FUN_10000bb2c();
  FUN_1003a985c(lVar3,uVar4);
  lVar3 = FUN_10000c8e8();
  FUN_1003a985c(&local_70,lVar3);
  lVar5 = FUN_10049ac04(lVar3 + 0x10);
  if (PTR_s_Ability__Grace__A_101859928 == (undefined *)0x0) {
    uVar10 = 0;
  }
  else {
    cVar7 = *PTR_s_Ability__Grace__A_101859928;
    pcVar9 = PTR_s_Ability__Grace__A_101859928;
    while (cVar7 != '\0') {
      pcVar9 = pcVar9 + 1;
      uVar10 = (uVar10 ^ (int)cVar7) * 0x1000193;
      cVar7 = *pcVar9;
    }
  }
  *(uint *)(lVar5 + 8) = uVar10;
  puVar1 = PTR_s_Buff_Grace_A_LockoutOnUltimateUs_10185a770;
  lVar5 = FUN_10000bd3c();
  FUN_1003a985c(lVar3 + 0xb0,lVar5);
  *(undefined **)(lVar5 + 0x10) = puVar1;
  *(code **)(lVar5 + 0x30) = FUN_1003ac0a0;
  *(undefined2 *)(lVar5 + 0x68) = 1;
  *(byte *)(lVar5 + 0x6a) = *(byte *)(lVar5 + 0x6a) & 0xfe;
  puVar1 = PTR_s_Buff_Grace_A_LockoutOnUltimate_10185a768;
  lVar5 = FUN_10000bd3c();
  FUN_1003a985c(lVar3 + 200,lVar5);
  *(undefined **)(lVar5 + 0x10) = puVar1;
  *(code **)(lVar5 + 0x30) = FUN_1003ac0a0;
  *(undefined2 *)(lVar5 + 0x68) = 1;
  *(byte *)(lVar5 + 0x6a) = *(byte *)(lVar5 + 0x6a) & 0xfe;
  uVar4 = FUN_10000c784();
  FUN_1003a985c(&local_70,uVar4);
  plVar6 = (long *)thunk_FUN_10000e358();
  FUN_1003a985c(&local_70,plVar6);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x58))(plVar6);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x48))(plVar6,"Effect_Grace_C_Charging");
  plVar6 = (long *)(**(code **)(*plVar6 + 0x78))(plVar6,1);
  (**(code **)(*plVar6 + 0xb0))(plVar6,1);
  FUN_1003ac45c(&local_70);
  lVar3 = FUN_10000ceb8();
  FUN_1003a985c(&local_70,lVar3);
  *(code **)(lVar3 + 0x20) = FUN_1003ac448;
  *(undefined8 *)(lVar3 + 0x10) = 0;
  lVar3 = FUN_10000c838();
  FUN_1003a985c(&local_70,lVar3);
  *(code **)(lVar3 + 0x40) = FUN_100490c44;
  *(ushort *)(lVar3 + 0x58) = *(ushort *)(lVar3 + 0x58) & 0xf000 | 0x10;
  lVar5 = FUN_10000e524();
  FUN_1003a985c(lVar3 + 0x30,lVar5);
  uVar4 = FUN_1010a1520();
  lVar3 = FUN_1010a0e0c(uVar4,0,"*KindredSoundBalance*",0);
  uVar2 = FUN_1003abdc8(*(undefined4 *)(lVar3 + 1000));
  *(undefined2 *)(lVar5 + 0x30) = 0x3ff;
  *(undefined4 *)(lVar5 + 0x40) = 0xffffffff;
  *(undefined4 *)(lVar5 + 0x34) = 1;
  *(undefined4 *)(lVar5 + 0x3c) = uVar2;
  *(byte *)(lVar5 + 0x38) = *(byte *)(lVar5 + 0x38) & 0xf8 | 4;
  *(undefined8 *)(lVar5 + 0x48) = 0;
  *(char **)(lVar5 + 0x10) = "Sound_Grace_C_End_01";
  *(char **)(lVar5 + 0x18) = "Sound_Grace_C_End_02";
  *(char **)(lVar5 + 0x20) = "Sound_Grace_C_End_03";
  uVar4 = FUN_10000bc94();
  FUN_1003a985c(&local_70,uVar4);
  puVar1 = PTR_s_Buff_Grace_C_TargetImpact_10185a7a8;
  lVar3 = FUN_10000bd3c();
  FUN_1003a985c(&local_70,lVar3);
  *(undefined **)(lVar3 + 0x10) = puVar1;
  *(undefined4 *)(lVar3 + 0x18) = 0x3f000000;
  *(undefined2 *)(lVar3 + 0x68) = 1;
  *(byte *)(lVar3 + 0x6a) = *(byte *)(lVar3 + 0x6a) & 0xfe;
  puVar1 = PTR_s_Buff_Grace_Talent_UnitedFront_10185a790;
  lVar3 = FUN_10000c838();
  FUN_1003a985c(&local_70,lVar3);
  *(ushort *)(lVar3 + 0x58) = *(ushort *)(lVar3 + 0x58) & 0xf00f | 0x20;
  *(undefined8 *)(lVar3 + 0x48) = 0;
  *(undefined8 *)(lVar3 + 0x50) = 0;
  *(undefined1 *)(lVar3 + 0x50) = 2;
  *(undefined **)(lVar3 + 0x40) = puVar1;
  uVar4 = FUN_10000bb2c();
  FUN_1003a985c(lVar3 + 0x18,uVar4);
  lVar3 = FUN_10000d580();
  FUN_1003a985c(&local_70,lVar3);
  *(code **)(lVar3 + 0x10) = FUN_1003ac31c;
  *(undefined4 *)(lVar3 + 0x18) = 4;
  uVar4 = FUN_10000c784();
  FUN_1003a985c(&local_70,uVar4);
  lVar3 = FUN_10000ceb8();
  FUN_1003a985c(&local_70,lVar3);
  *(undefined4 *)(lVar3 + 0x2c) = 0x3e4ccccd;
  *(undefined8 *)(lVar3 + 0x10) = 0;
  lVar3 = FUN_10000d8b8();
  FUN_1003a985c(&local_70,lVar3);
  *(undefined1 *)(lVar3 + 0x10) = 0;
  return local_70;
}




void FUN_100383388(void)

{
  FUN_1003a85d0("Attack","Effect_Flicker_Attack","Effect_Flicker_Impact",FUN_1003a3a5c);
  return;
}




void FUN_1003833ac(void)

{
  FUN_1003a85d0("AltAttack","Effect_Flicker_Attack","Effect_Flicker_Impact",FUN_1003a3a5c);
  return;
}




void FUN_1003833d0(void)

{
  FUN_1003a85d0("CritAttack","Effect_Flicker_Attack","Effect_Flicker_Crit_Impact",FUN_1003a3acc);
  return;
}




undefined8 FUN_1003833f4(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_30 = 0;
  uStack_28 = 0;
  uVar2 = FUN_10000d8b8();
  FUN_1003a985c(&local_30,uVar2);
  uVar2 = FUN_10000ef8c();
  FUN_1003a985c(&local_30,uVar2);
  plVar3 = (long *)thunk_FUN_10000e6f4();
  FUN_1003a985c(&local_30,plVar3);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x50))(plVar3,"ability1");
  (**(code **)(*plVar3 + 0x18))(0x3e800000);
  lVar4 = FUN_10000dff8();
  FUN_1003a985c(&local_30,lVar4);
  *(undefined2 *)(lVar4 + 0x28) = 0x100;
  *(undefined8 *)(lVar4 + 0x30) = 0;
  uVar1 = FUN_1004d2524("Ability01");
  uVar1 = FUN_100015208("Ability01",uVar1,0x12345678);
  *(undefined4 *)(lVar4 + 0x10) = uVar1;
  uVar1 = FUN_1004d2524("AttackToIdleCombat");
  uVar1 = FUN_100015208("AttackToIdleCombat",uVar1,0x12345678);
  *(undefined4 *)(lVar4 + 0x20) = uVar1;
  lVar4 = FUN_10000ceb8();
  FUN_1003a985c(&local_30,lVar4);
  *(code **)(lVar4 + 0x20) = FUN_1003a88dc;
  *(undefined8 *)(lVar4 + 0x10) = 0;
  lVar4 = FUN_10000e524();
  FUN_1003a985c(&local_30,lVar4);
  uVar2 = FUN_1010a1520();
  lVar5 = FUN_1010a0e0c(uVar2,0,"*KindredSoundBalance*",0);
  uVar1 = FUN_1003a8878(*(undefined4 *)(lVar5 + 0x374));
  *(char **)(lVar4 + 0x10) = "Sound_Flicker_Ability_A_Cast";
  *(undefined2 *)(lVar4 + 0x30) = 0x1ff;
  *(undefined4 *)(lVar4 + 0x34) = 1;
  *(undefined4 *)(lVar4 + 0x3c) = uVar1;
  *(undefined4 *)(lVar4 + 0x40) = 0xffffffff;
  *(byte *)(lVar4 + 0x38) = *(byte *)(lVar4 + 0x38) & 0xf8 | 4;
  *(undefined8 *)(lVar4 + 0x48) = 0;
  plVar3 = (long *)FUN_10000f300();
  FUN_1003a985c(&local_30,plVar3);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x50))(plVar3,"*Flicker_FairyTrap*",0);
  (**(code **)(*plVar3 + 0x20))(plVar3,FUN_10048fb04);
  lVar4 = FUN_10000d8b8();
  FUN_1003a985c(&local_30,lVar4);
  *(undefined1 *)(lVar4 + 0x10) = 0;
  uVar2 = FUN_10000f034();
  FUN_1003a985c(&local_30,uVar2);
  return local_30;
}




undefined8 FUN_1003835e8(void)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined4 uVar5;
  undefined8 local_40;
  undefined8 uStack_38;
  
  local_40 = 0;
  uStack_38 = 0;
  plVar1 = (long *)thunk_FUN_10000e0ac();
  FUN_1003a985c(&local_40,plVar1);
  plVar1 = (long *)(**(code **)(*plVar1 + 0x50))(plVar1,"Ability02");
  (**(code **)(*plVar1 + 0x28))();
  plVar1 = (long *)thunk_FUN_10000e6f4();
  FUN_1003a985c(&local_40,plVar1);
  (**(code **)(*plVar1 + 0x50))(plVar1,"ability2");
  lVar2 = FUN_10000ceb8();
  FUN_1003a985c(&local_40,lVar2);
  *(code **)(lVar2 + 0x20) = FUN_1003a88f0;
  *(undefined8 *)(lVar2 + 0x10) = 0;
  uVar3 = FUN_10000f034();
  FUN_1003a985c(&local_40,uVar3);
  lVar2 = FUN_10000e524();
  FUN_1003a985c(&local_40,lVar2);
  uVar3 = FUN_1010a1520();
  lVar4 = FUN_1010a0e0c(uVar3,0,"*KindredSoundBalance*",0);
  uVar5 = FUN_1003a8878(*(undefined4 *)(lVar4 + 0x378));
  *(char **)(lVar2 + 0x10) = "Sound_Flicker_Ability_B_Cast";
  *(undefined2 *)(lVar2 + 0x30) = 0x1ff;
  *(undefined4 *)(lVar2 + 0x34) = 1;
  *(undefined4 *)(lVar2 + 0x3c) = uVar5;
  *(undefined4 *)(lVar2 + 0x40) = 0xffffffff;
  *(byte *)(lVar2 + 0x38) = *(byte *)(lVar2 + 0x38) & 0xf8 | 4;
  *(undefined8 *)(lVar2 + 0x48) = 0;
  uVar3 = FUN_10000bb2c();
  FUN_1003a985c(&local_40,uVar3);
  lVar2 = FUN_10000bd3c();
  FUN_1003a985c(&local_40,lVar2);
  *(undefined **)(lVar2 + 0x10) = PTR_s_Buff_Flicker_B_Field_10185a6a8;
  *(code **)(lVar2 + 0x30) = FUN_1003a8904;
  *(undefined2 *)(lVar2 + 0x68) = 1;
  *(byte *)(lVar2 + 0x6a) = *(byte *)(lVar2 + 0x6a) & 0xfe;
  uVar3 = FUN_10000c784();
  FUN_1003a985c(&local_40,uVar3);
  lVar2 = FUN_10000ceb8();
  FUN_1003a985c(&local_40,lVar2);
  *(code **)(lVar2 + 0x20) = FUN_1003a8904;
  *(undefined8 *)(lVar2 + 0x10) = 0;
  return local_40;
}




undefined8 FUN_100383798(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_30 = 0;
  uStack_28 = 0;
  uVar2 = FUN_10000d8b8();
  FUN_1003a985c(&local_30,uVar2);
  lVar3 = FUN_10000dff8();
  FUN_1003a985c(&local_30,lVar3);
  *(undefined2 *)(lVar3 + 0x28) = 0x100;
  *(undefined8 *)(lVar3 + 0x30) = 0;
  uVar1 = FUN_1004d2524("Ability03");
  uVar1 = FUN_100015208("Ability03",uVar1,0x12345678);
  *(undefined4 *)(lVar3 + 0x10) = uVar1;
  uVar1 = FUN_1004d2524("AttackToIdleCombat");
  uVar1 = FUN_100015208("AttackToIdleCombat",uVar1,0x12345678);
  *(undefined4 *)(lVar3 + 0x20) = uVar1;
  plVar4 = (long *)thunk_FUN_10000e6f4();
  FUN_1003a985c(&local_30,plVar4);
  (**(code **)(*plVar4 + 0x50))(plVar4,"ability3");
  lVar3 = FUN_10000e524();
  FUN_1003a985c(&local_30,lVar3);
  uVar2 = FUN_1010a1520();
  lVar5 = FUN_1010a0e0c(uVar2,0,"*KindredSoundBalance*",0);
  uVar1 = FUN_1003a8878(*(undefined4 *)(lVar5 + 0x37c));
  *(char **)(lVar3 + 0x10) = "Sound_Flicker_Ability_C_Cast";
  *(undefined2 *)(lVar3 + 0x30) = 0x1ff;
  *(undefined4 *)(lVar3 + 0x34) = 1;
  *(undefined4 *)(lVar3 + 0x3c) = uVar1;
  *(undefined4 *)(lVar3 + 0x40) = 0xffffffff;
  *(byte *)(lVar3 + 0x38) = *(byte *)(lVar3 + 0x38) & 0xf8 | 4;
  *(undefined8 *)(lVar3 + 0x48) = 0;
  lVar3 = FUN_10000ceb8();
  FUN_1003a985c(&local_30,lVar3);
  *(code **)(lVar3 + 0x20) = FUN_1003a8918;
  *(undefined8 *)(lVar3 + 0x10) = 0;
  lVar3 = FUN_10000b928();
  FUN_1003a985c(&local_30,lVar3);
  *(undefined2 *)(lVar3 + 0x10) = 1;
  *(undefined1 *)(lVar3 + 0x12) = 1;
  lVar3 = FUN_10000bd3c();
  FUN_1003a985c(&local_30,lVar3);
  *(undefined **)(lVar3 + 0x10) = PTR_s_Buff_Flicker_C_Control_10185a6b0;
  *(code **)(lVar3 + 0x30) = FUN_1003a892c;
  *(undefined2 *)(lVar3 + 0x68) = 1;
  *(byte *)(lVar3 + 0x6a) = *(byte *)(lVar3 + 0x6a) & 0xfe;
  uVar2 = FUN_10000c784();
  FUN_1003a985c(&local_30,uVar2);
  lVar3 = FUN_10000d8b8();
  FUN_1003a985c(&local_30,lVar3);
  *(undefined1 *)(lVar3 + 0x10) = 0;
  return local_30;
}




undefined8 FUN_100383980(void)

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
  *(ushort *)(lVar2 + 0x80) = *(ushort *)(lVar2 + 0x80) & 0xffec;
  *(uint *)(lVar2 + 0x3c) = (uint)lVar2 & 0xffff;
  *(undefined8 *)(lVar2 + 0x20) = 0;
  *(undefined8 *)(lVar2 + 0x28) = 1;
  *(undefined4 *)(lVar2 + 0x10) = 0xb1543c2e;
  lVar2 = FUN_10000ceb8();
  FUN_1003a985c(&local_30,lVar2);
  *(undefined4 *)(lVar2 + 0x2c) = 0x3fee147b;
  *(undefined8 *)(lVar2 + 0x10) = 0;
  uVar3 = FUN_10000d9a0();
  FUN_1003a985c(&local_30,uVar3);
  return local_30;
}




void FUN_100383aac(void)

{
  FUN_1003ad3a4("Attack","AA_1",0x19);
  return;
}




void FUN_100383ac4(void)

{
  FUN_1003ad3a4("AltAttack","AA_1",0x19);
  return;
}




void FUN_100383adc(void)

{
  FUN_1003ad3a4("CritAttack","AA_Crit",0x1a);
  return;
}




undefined8 FUN_100383af4(void)

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
  uVar1 = FUN_1004d2524("PerkAttack");
  uVar1 = FUN_100015208("PerkAttack",uVar1,0x12345678);
  *(undefined4 *)(lVar2 + 0x10) = uVar1;
  uVar1 = FUN_1004d2524("AttackToIdleCombat");
  uVar1 = FUN_100015208("AttackToIdleCombat",uVar1,0x12345678);
  *(undefined4 *)(lVar2 + 0x20) = uVar1;
  lVar2 = FUN_10000ceb8();
  FUN_1003a985c(&local_40,lVar2);
  *(undefined4 *)(lVar2 + 0x2c) = 0x3e99999a;
  *(code **)(lVar2 + 0x10) = FUN_1003a24a0;
  lVar2 = FUN_10000f250();
  FUN_1003a985c(&local_40,lVar2);
  *(undefined4 *)(lVar2 + 0x10) = 0x1b;
  FUN_1003d266c(lVar2,"AA_Empowered");
  lVar2 = FUN_10000e524();
  FUN_1003a985c(&local_40,lVar2);
  uVar3 = FUN_1010a1520();
  lVar4 = FUN_1010a0e0c(uVar3,0,"*KindredSoundBalance*",0);
  uVar1 = FUN_1003ad578(*(undefined4 *)(lVar4 + 0x358));
  *(undefined2 *)(lVar2 + 0x30) = 0x3ff;
  *(undefined4 *)(lVar2 + 0x40) = 0xffffffff;
  *(undefined4 *)(lVar2 + 0x34) = 1;
  *(undefined4 *)(lVar2 + 0x3c) = uVar1;
  *(byte *)(lVar2 + 0x38) = *(byte *)(lVar2 + 0x38) & 0xf8 | 4;
  *(undefined8 *)(lVar2 + 0x48) = 0;
  *(char **)(lVar2 + 0x10) = "Sound_Gwen_Attack_1";
  *(char **)(lVar2 + 0x18) = "Sound_Gwen_Attack_2";
  *(char **)(lVar2 + 0x20) = "Sound_Gwen_Attack_3";
  uVar3 = FUN_10000bb2c();
  FUN_1003a985c(&local_40,uVar3);
  lVar2 = FUN_10000c540();
  FUN_1003a985c(&local_40,lVar2);
  *(undefined **)(lVar2 + 0x10) = PTR_s_Buff_Gwen_PerkReady_10185a868;
  lVar2 = FUN_10000bd3c();
  FUN_1003a985c(&local_40,lVar2);
  *(undefined **)(lVar2 + 0x10) = PTR_s_Buff_Gwen_PerkTimer_10185a860;
  *(code **)(lVar2 + 0x28) = FUN_1003ad304;
  *(undefined2 *)(lVar2 + 0x68) = 1;
  *(byte *)(lVar2 + 0x6a) = *(byte *)(lVar2 + 0x6a) & 0xfe;
  uVar3 = FUN_10000c784();
  FUN_1003a985c(&local_40,uVar3);
  uVar3 = FUN_10000f034();
  FUN_1003a985c(&local_40,uVar3);
  return local_40;
}




undefined8 FUN_100383d20(void)

{
  byte bVar1;
  bool bVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 local_50;
  undefined8 uStack_48;
  
  local_50 = 0;
  uStack_48 = 0;
  lVar4 = FUN_10000d8b8();
  FUN_1003a985c(&local_50,lVar4);
  *(undefined1 *)(lVar4 + 0x10) = 1;
  lVar4 = FUN_10000ef8c();
  FUN_1003a985c(&local_50,lVar4);
  *(byte *)(lVar4 + 0x10) = *(byte *)(lVar4 + 0x10) & 0xe7 | 4;
  lVar4 = FUN_10000dff8();
  FUN_1003a985c(&local_50,lVar4);
  *(undefined2 *)(lVar4 + 0x28) = 0x100;
  *(undefined8 *)(lVar4 + 0x30) = 0;
  uVar3 = FUN_1004d2524("Ability01");
  uVar3 = FUN_100015208("Ability01",uVar3,0x12345678);
  *(undefined4 *)(lVar4 + 0x10) = uVar3;
  uVar3 = FUN_1004d2524("AttackToIdleCombat");
  uVar3 = FUN_100015208("AttackToIdleCombat",uVar3,0x12345678);
  *(undefined4 *)(lVar4 + 0x20) = uVar3;
  lVar4 = FUN_10000ceb8();
  FUN_1003a985c(&local_50,lVar4);
  *(code **)(lVar4 + 0x20) = FUN_1003ad5dc;
  *(undefined8 *)(lVar4 + 0x10) = 0;
  lVar4 = FUN_10000e524();
  FUN_1003a985c(&local_50,lVar4);
  uVar5 = FUN_1010a1520();
  lVar6 = FUN_1010a0e0c(uVar5,0,"*KindredSoundBalance*",0);
  uVar3 = FUN_1003ad578(*(undefined4 *)(lVar6 + 0x35c));
  *(undefined2 *)(lVar4 + 0x30) = 0x3ff;
  *(undefined4 *)(lVar4 + 0x40) = 0xffffffff;
  *(undefined4 *)(lVar4 + 0x34) = 1;
  *(undefined4 *)(lVar4 + 0x3c) = uVar3;
  *(byte *)(lVar4 + 0x38) = *(byte *)(lVar4 + 0x38) & 0xf8 | 4;
  *(undefined8 *)(lVar4 + 0x48) = 0;
  *(char **)(lVar4 + 0x10) = "Sounds_Gwen_Ability_A_1";
  *(char **)(lVar4 + 0x18) = "Sounds_Gwen_Ability_A_2";
  *(char **)(lVar4 + 0x20) = "Sounds_Gwen_Ability_A_3";
  lVar4 = FUN_10000e1b4();
  FUN_1003a985c(&local_50,lVar4);
  *(undefined8 *)(lVar4 + 0x40) = 0;
  *(ushort *)(lVar4 + 0x80) = *(ushort *)(lVar4 + 0x80) & 0xffec | 2;
  *(uint *)(lVar4 + 0x3c) = (uint)lVar4 & 0xffff;
  *(undefined8 *)(lVar4 + 0x20) = 0;
  *(undefined8 *)(lVar4 + 0x28) = 0x3e4ccccd00000001;
  *(undefined4 *)(lVar4 + 0x10) = 0x628ab002;
  lVar4 = FUN_10000ceb8();
  FUN_1003a985c(&local_50,lVar4);
  *(undefined4 *)(lVar4 + 0x2c) = 0x3dcccccd;
  *(undefined8 *)(lVar4 + 0x10) = 0;
  lVar4 = FUN_1003e10f0();
  bVar1 = *(byte *)(lVar4 + 0xe5);
  uVar3 = _cosf(0x3ec90fdb);
  lVar4 = FUN_10000ed74();
  FUN_1003a985c(&local_50,lVar4);
  *(undefined8 *)(lVar4 + 0x18) = 0;
  *(undefined1 *)(lVar4 + 0x20) = 1;
  *(undefined8 *)(lVar4 + 0x24) = 0;
  *(undefined8 *)(lVar4 + 0x34) = 0;
  *(undefined8 *)(lVar4 + 0x2c) = 0;
  *(undefined4 *)(lVar4 + 0x3c) = 0;
  uVar5 = NEON_fmov(0xbf800000,4);
  *(undefined8 *)(lVar4 + 0x40) = uVar5;
  *(undefined4 *)(lVar4 + 0x48) = uVar3;
  *(undefined8 *)(lVar4 + 0x4c) = 0x3f266666bf800000;
  *(undefined1 *)(lVar4 + 0x54) = 0xff;
  *(undefined8 *)(lVar4 + 0x60) = 0xffffffff00000000;
  *(undefined8 *)(lVar4 + 0x58) = 0xffffffff00040000;
  *(byte *)(lVar4 + 0x6a) = bVar1 | 0x14;
  *(undefined2 *)(lVar4 + 0x68) = 0x6120;
  bVar2 = DAT_101d23a38 != '\0';
  *(code **)(lVar4 + 0x78) = FUN_1003ad5f0;
  *(byte *)(lVar4 + 0xa8) = *(byte *)(lVar4 + 0xa8) & 0xf0 | bVar2;
  uVar5 = FUN_10000cb8c();
  FUN_1003a985c(&local_50,uVar5);
  lVar4 = FUN_10000bd3c();
  FUN_1003a985c(&local_50,lVar4);
  *(undefined **)(lVar4 + 0x10) = PTR_s_Buff_Gwen_Slow_10185a870;
  *(code **)(lVar4 + 0x30) = FUN_1003ad604;
  *(undefined2 *)(lVar4 + 0x68) = 1;
  *(byte *)(lVar4 + 0x6a) = *(byte *)(lVar4 + 0x6a) & 0xfe;
  lVar4 = FUN_10000bd3c();
  FUN_1003a985c(&local_50,lVar4);
  *(undefined **)(lVar4 + 0x10) = PTR_s_Buff_GloballyVisibleTrueSight_10185a878;
  *(code **)(lVar4 + 0x30) = FUN_1003ad604;
  *(undefined2 *)(lVar4 + 0x68) = 1;
  *(byte *)(lVar4 + 0x6a) = *(byte *)(lVar4 + 0x6a) & 0xfe;
  *(code **)(lVar4 + 0x60) = FUN_1003ad618;
  lVar4 = FUN_10000bd3c();
  FUN_1003a985c(&local_50,lVar4);
  *(undefined **)(lVar4 + 0x10) = PTR_s_Buff_ShowGloballyVisible_10185a880;
  *(code **)(lVar4 + 0x30) = FUN_1003ad604;
  *(undefined2 *)(lVar4 + 0x68) = 1;
  *(byte *)(lVar4 + 0x6a) = *(byte *)(lVar4 + 0x6a) & 0xfe;
  *(code **)(lVar4 + 0x60) = FUN_1003ad618;
  uVar5 = FUN_10000c784();
  FUN_1003a985c(&local_50,uVar5);
  lVar4 = FUN_10000d8b8();
  FUN_1003a985c(&local_50,lVar4);
  *(undefined1 *)(lVar4 + 0x10) = 0;
  uVar5 = FUN_10000f034();
  FUN_1003a985c(&local_50,uVar5);
  return local_50;
}




undefined8 FUN_1003840d8(void)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  undefined4 uVar6;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined4 local_40 [2];
  undefined4 local_38;
  
  local_50 = 0;
  uStack_48 = 0;
  lVar2 = FUN_10000e524();
  FUN_1003a985c(&local_50,lVar2);
  uVar3 = FUN_1010a1520();
  lVar4 = FUN_1010a0e0c(uVar3,0,"*KindredSoundBalance*",0);
  uVar6 = FUN_1003ad578(*(undefined4 *)(lVar4 + 0x360));
  *(char **)(lVar2 + 0x10) = "Sound_Gwen_Ability_B";
  *(undefined2 *)(lVar2 + 0x30) = 0x1ff;
  *(undefined4 *)(lVar2 + 0x34) = 1;
  *(undefined4 *)(lVar2 + 0x3c) = uVar6;
  *(undefined4 *)(lVar2 + 0x40) = 0xffffffff;
  *(byte *)(lVar2 + 0x38) = *(byte *)(lVar2 + 0x38) & 0xf8 | 4;
  *(undefined8 *)(lVar2 + 0x48) = 0;
  uVar3 = FUN_10000bb2c();
  FUN_1003a985c(&local_50,uVar3);
  puVar1 = PTR_s_Buff_Gwen_SelfCleanse_10185a890;
  lVar2 = FUN_10000bd3c();
  FUN_1003a985c(&local_50,lVar2);
  *(undefined **)(lVar2 + 0x10) = puVar1;
  *(code **)(lVar2 + 0x30) = FUN_1003ad624;
  *(undefined2 *)(lVar2 + 0x68) = 1;
  *(byte *)(lVar2 + 0x6a) = *(byte *)(lVar2 + 0x6a) & 0xfe;
  puVar1 = PTR_s_Buff_Gwen_B_ActiveSpeed_10185a898;
  lVar2 = FUN_10000bd3c();
  FUN_1003a985c(&local_50,lVar2);
  *(undefined **)(lVar2 + 0x10) = puVar1;
  *(code **)(lVar2 + 0x30) = FUN_1003ad6b0;
  *(undefined2 *)(lVar2 + 0x68) = 1;
  *(byte *)(lVar2 + 0x6a) = *(byte *)(lVar2 + 0x6a) & 0xfe;
  uVar3 = FUN_10000c784();
  FUN_1003a985c(&local_50,uVar3);
  puVar1 = PTR_s_Buff_Gwen_Talent_SpeedLoader_10185a8a0;
  lVar2 = FUN_10000c838();
  FUN_1003a985c(&local_50,lVar2);
  *(ushort *)(lVar2 + 0x58) = *(ushort *)(lVar2 + 0x58) & 0xf00f | 0x20;
  *(undefined8 *)(lVar2 + 0x48) = 0;
  *(undefined8 *)(lVar2 + 0x50) = 0;
  *(undefined1 *)(lVar2 + 0x50) = 2;
  *(undefined **)(lVar2 + 0x40) = puVar1;
  puVar1 = PTR_s_Ability__Gwen__A_101859998;
  plVar5 = (long *)FUN_10000dc58();
  FUN_1003a985c(lVar2 + 0x18,plVar5);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x50))(plVar5,puVar1);
  local_40[0] = 0;
  local_38 = 1;
  (**(code **)(*plVar5 + 0x20))(plVar5,local_40);
  return local_50;
}




undefined8 FUN_100384298(void)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 local_50;
  undefined8 uStack_48;
  
  local_50 = 0;
  uStack_48 = 0;
  lVar2 = FUN_10000d8b8();
  FUN_1003a985c(&local_50,lVar2);
  *(undefined1 *)(lVar2 + 0x10) = 1;
  uVar3 = FUN_10000ef8c();
  FUN_1003a985c(&local_50,uVar3);
  lVar2 = FUN_10000dff8();
  FUN_1003a985c(&local_50,lVar2);
  *(undefined2 *)(lVar2 + 0x28) = 0x100;
  *(undefined8 *)(lVar2 + 0x30) = 0;
  uVar1 = FUN_1004d2524("Ability03");
  uVar1 = FUN_100015208("Ability03",uVar1,0x12345678);
  *(undefined4 *)(lVar2 + 0x10) = uVar1;
  uVar1 = FUN_1004d2524("AttackToIdleCombat");
  uVar1 = FUN_100015208("AttackToIdleCombat",uVar1,0x12345678);
  *(undefined4 *)(lVar2 + 0x20) = uVar1;
  lVar2 = FUN_10000e1b4();
  FUN_1003a985c(&local_50,lVar2);
  *(undefined8 *)(lVar2 + 0x20) = 0;
  *(undefined8 *)(lVar2 + 0x28) = 0x3f19999a00000003;
  *(undefined8 *)(lVar2 + 0x40) = 0;
  *(ushort *)(lVar2 + 0x80) = *(ushort *)(lVar2 + 0x80) & 0xffef | 3;
  *(uint *)(lVar2 + 0x3c) = (uint)lVar2 & 0xffff;
  *(undefined4 *)(lVar2 + 0x10) = 0xa1e63a5f;
  *(char **)(lVar2 + 0x18) = "Bone_RightHand";
  lVar2 = FUN_10000e524();
  FUN_1003a985c(&local_50,lVar2);
  uVar3 = FUN_1010a1520();
  lVar4 = FUN_1010a0e0c(uVar3,0,"*KindredSoundBalance*",0);
  uVar1 = FUN_1003ad578(*(undefined4 *)(lVar4 + 0x364));
  *(char **)(lVar2 + 0x10) = "Sound_Gwen_Ability_C_Release";
  *(undefined2 *)(lVar2 + 0x30) = 0x1ff;
  *(undefined4 *)(lVar2 + 0x34) = 1;
  *(undefined4 *)(lVar2 + 0x3c) = uVar1;
  *(undefined4 *)(lVar2 + 0x40) = 0xffffffff;
  *(byte *)(lVar2 + 0x38) = *(byte *)(lVar2 + 0x38) & 0xf8 | 4;
  *(undefined8 *)(lVar2 + 0x48) = 0;
  lVar2 = FUN_10000ceb8();
  FUN_1003a985c(&local_50,lVar2);
  *(code **)(lVar2 + 0x20) = FUN_1003ad73c;
  *(undefined8 *)(lVar2 + 0x10) = 0;
  lVar2 = FUN_10000f250();
  FUN_1003a985c(&local_50,lVar2);
  *(undefined4 *)(lVar2 + 0x10) = 0x1c;
  FUN_1003d266c(lVar2,"C");
  *(undefined4 *)(lVar2 + 0x34) = 1;
  lVar2 = FUN_10000c8e8();
  FUN_1003a985c(&local_50,lVar2);
  lVar4 = FUN_10049ab34(lVar2 + 0x10);
  *(undefined **)(lVar4 + 8) = PTR_s_Buff_Gwen_Talent_ThreeOfAKind_10185a8a8;
  lVar4 = FUN_10000f250();
  FUN_1003a985c(lVar2 + 0xb0,lVar4);
  *(undefined4 *)(lVar4 + 0x10) = 0x1c;
  FUN_1003d266c(lVar4,"C");
  *(undefined4 *)(lVar4 + 0x34) = 1;
  *(undefined4 *)(lVar4 + 0x40) = 0xc1c80000;
  lVar4 = FUN_10000f250();
  FUN_1003a985c(lVar2 + 0xb0,lVar4);
  *(undefined4 *)(lVar4 + 0x10) = 0x1c;
  FUN_1003d266c(lVar4,"C");
  *(undefined4 *)(lVar4 + 0x34) = 1;
  *(undefined4 *)(lVar4 + 0x40) = 0x41c80000;
  lVar2 = FUN_10000ceb8();
  FUN_1003a985c(&local_50,lVar2);
  *(undefined4 *)(lVar2 + 0x2c) = 0x3dcccccd;
  *(undefined8 *)(lVar2 + 0x10) = 0;
  lVar2 = FUN_10000d8b8();
  FUN_1003a985c(&local_50,lVar2);
  *(undefined1 *)(lVar2 + 0x10) = 0;
  uVar3 = FUN_10000f034();
  FUN_1003a985c(&local_50,uVar3);
  return local_50;
}




undefined8 FUN_100384560(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_20;
  undefined8 uStack_18;
  
  local_20 = 0;
  uStack_18 = 0;
  FUN_1003c6778(&local_20,"Attack",param_3,FUN_1003a3a5c);
  return local_20;
}




undefined8 FUN_100384598(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_20;
  undefined8 uStack_18;
  
  local_20 = 0;
  uStack_18 = 0;
  FUN_1003c6778(&local_20,"AltAttack",param_3,FUN_1003a3a5c);
  return local_20;
}




undefined8 FUN_1003845d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_20;
  undefined8 uStack_18;
  
  local_20 = 0;
  uStack_18 = 0;
  FUN_1003c6778(&local_20,"CritAttack",param_3,FUN_1003a3acc);
  return local_20;
}




undefined8 FUN_100384608(void)

{
  long lVar1;
  long *plVar2;
  undefined4 local_40 [2];
  undefined4 local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_30 = 0;
  uStack_28 = 0;
  lVar1 = FUN_10000c540();
  FUN_1003a985c(&local_30,lVar1);
  *(undefined **)(lVar1 + 0x10) = PTR_s_Buff_HeroPLU_EngineOverheat_10185b198;
  plVar2 = (long *)FUN_10000de28();
  FUN_1003a985c(&local_30,plVar2);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x50))(plVar2);
  local_40[0] = 0xc1200000;
  local_38 = 1;
  (**(code **)(*plVar2 + 0x10))(plVar2,3,local_40);
  FUN_1003c6778(&local_30,"Ability02End");
  FUN_1003c6658(&local_30,1,0);
  return local_30;
}




undefined8 FUN_1003846c0(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
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
  FUN_1003c6658(&local_40,1,1);
  lVar3 = FUN_10000ef8c();
  FUN_1003a985c(&local_40,lVar3);
  *(byte *)(lVar3 + 0x10) = *(byte *)(lVar3 + 0x10) & 0xe7 | 4;
  lVar3 = FUN_10000dff8();
  FUN_1003a985c(&local_40,lVar3);
  *(undefined2 *)(lVar3 + 0x28) = 0x100;
  *(code **)(lVar3 + 0x30) = FUN_1003a24a0;
  uVar1 = FUN_1004d2524("CritAttack");
  uVar1 = FUN_100015208("CritAttack",uVar1,0x12345678);
  *(undefined4 *)(lVar3 + 0x10) = uVar1;
  uVar1 = FUN_1004d2524("AttackToIdleCombat");
  uVar1 = FUN_100015208("AttackToIdleCombat",uVar1,0x12345678);
  *(undefined4 *)(lVar3 + 0x20) = uVar1;
  plVar4 = (long *)thunk_FUN_10000e358();
  FUN_1003a985c(&local_40,plVar4);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x58))(plVar4);
  (**(code **)(*plVar4 + 0x48))(plVar4,"Effect_HeroPLU_Explosion");
  lVar3 = FUN_10000ceb8();
  FUN_1003a985c(&local_40,lVar3);
  *(undefined4 *)(lVar3 + 0x2c) = 0x3e99999a;
  *(code **)(lVar3 + 0x10) = FUN_1003a24a0;
  uVar2 = FUN_10000bb2c();
  FUN_1003a985c(&local_40,uVar2);
  lVar3 = FUN_10000cae4();
  FUN_1003a985c(&local_40,lVar3);
  *(code **)(lVar3 + 0x10) = FUN_1003c6aa4;
  lVar3 = FUN_10000c150();
  FUN_1003a985c(&local_40,lVar3);
  *(code **)(lVar3 + 0x10) = FUN_1003c6aec;
  *(byte *)(lVar3 + 0x18) = *(byte *)(lVar3 + 0x18) & 0xfc;
  lVar3 = FUN_10000bd3c();
  FUN_1003a985c(&local_40,lVar3);
  *(undefined **)(lVar3 + 0x10) = PTR_s_Buff_Stunned_10185a208;
  *(undefined4 *)(lVar3 + 0x18) = 0x40000000;
  *(undefined2 *)(lVar3 + 0x68) = 1;
  *(byte *)(lVar3 + 0x6a) = *(byte *)(lVar3 + 0x6a) & 0xfe;
  uVar2 = FUN_10000c784();
  FUN_1003a985c(&local_40,uVar2);
  uVar2 = FUN_10000bc94();
  FUN_1003a985c(&local_40,uVar2);
  lVar3 = FUN_10000cae4();
  FUN_1003a985c(&local_40,lVar3);
  *(code **)(lVar3 + 0x10) = FUN_1003c6a80;
  plVar4 = (long *)FUN_10000d7d0();
  FUN_1003a985c(&local_40,plVar4);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))(plVar4);
  local_50 = FUN_1003c6c44;
  local_48 = 3;
  plVar4 = (long *)(**(code **)(*plVar4 + 0x10))(plVar4,&local_50);
  local_60 = FUN_1003c6c58;
  local_58 = 3;
  (**(code **)(*plVar4 + 0x20))(plVar4,&local_60);
  lVar3 = FUN_10000bd3c();
  FUN_1003a985c(&local_40,lVar3);
  *(undefined **)(lVar3 + 0x10) = PTR_s_Buff_Stunned_10185a208;
  *(undefined4 *)(lVar3 + 0x18) = 0x40000000;
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




undefined8 FUN_1003849b0(void)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  code *local_40;
  undefined4 local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_30 = 0;
  uStack_28 = 0;
  FUN_1003c6708(&local_30);
  uVar1 = FUN_10000bb2c();
  FUN_1003a985c(&local_30,uVar1);
  lVar2 = FUN_10000bd3c();
  FUN_1003a985c(&local_30,lVar2);
  *(undefined **)(lVar2 + 0x10) = PTR_s_Buff_HeroPLU_EngineStacks_10185b190;
  *(undefined4 *)(lVar2 + 0x18) = 0xbf800000;
  *(undefined2 *)(lVar2 + 0x68) = 1;
  *(byte *)(lVar2 + 0x6a) = *(byte *)(lVar2 + 0x6a) & 0xfe;
  uVar1 = FUN_10000c784();
  FUN_1003a985c(&local_30,uVar1);
  lVar2 = FUN_10000e524();
  FUN_1003a985c(&local_30,lVar2);
  *(undefined2 *)(lVar2 + 0x30) = 0x3ff;
  *(undefined4 *)(lVar2 + 0x34) = 1;
  *(undefined8 *)(lVar2 + 0x3c) = 0xffffffff3f800000;
  *(byte *)(lVar2 + 0x38) = *(byte *)(lVar2 + 0x38) & 0xf8 | 4;
  *(undefined8 *)(lVar2 + 0x48) = 0;
  *(char **)(lVar2 + 0x10) = "Sound_HeroPLU_Rev_1";
  *(char **)(lVar2 + 0x18) = "Sound_HeroPLU_Rev_2";
  *(char **)(lVar2 + 0x20) = "Sound_HeroPLU_Rev_3";
  plVar3 = (long *)FUN_10000dc58();
  FUN_1003a985c(&local_30,plVar3);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x50))(plVar3,PTR_s_Ability__HeroPLU__B_1018599e0);
  local_40 = FUN_1003c6c6c;
  local_38 = 3;
  (**(code **)(*plVar3 + 0x28))(plVar3,&local_40);
  plVar3 = (long *)FUN_10000f300();
  FUN_1003a985c(&local_30,plVar3);
  (**(code **)(*plVar3 + 0x50))(plVar3,"*HeroPLUSmokeCloud*",1);
  plVar3 = (long *)thunk_FUN_10000e358();
  FUN_1003a985c(&local_30,plVar3);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x58))(plVar3);
  (**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Taka_SmokeBomb");
  plVar3 = (long *)FUN_10000de28();
  FUN_1003a985c(&local_30,plVar3);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x50))(plVar3);
  local_40 = FUN_1003c6c80;
  local_38 = 3;
  (**(code **)(*plVar3 + 0x10))(plVar3,3,&local_40);
  uVar1 = FUN_10000f034();
  FUN_1003a985c(&local_30,uVar1);
  return local_30;
}




undefined8 FUN_100384bac(void)

{
  int iVar1;
  byte bVar2;
  bool bVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  code *local_b0;
  undefined4 local_a8;
  code *local_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  
  local_90 = 0;
  uStack_88 = 0;
  FUN_1003c6708(&local_90);
  uVar5 = FUN_10000d8b8();
  FUN_1003a985c(&local_90,uVar5);
  plVar6 = (long *)FUN_10000de28();
  FUN_1003a985c(&local_90,plVar6);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x50))(plVar6);
  local_a0 = FUN_1003c7060;
  local_98 = 3;
  (**(code **)(*plVar6 + 0x10))(plVar6,3,&local_a0);
  lVar7 = FUN_10000ef8c();
  FUN_1003a985c(&local_90,lVar7);
  *(byte *)(lVar7 + 0x10) = *(byte *)(lVar7 + 0x10) & 0xe7 | 4;
  lVar7 = FUN_10000dff8();
  FUN_1003a985c(&local_90,lVar7);
  *(undefined2 *)(lVar7 + 0x28) = 0x100;
  *(undefined8 *)(lVar7 + 0x30) = 0;
  uVar4 = FUN_1004d2524("Ability03");
  uVar4 = FUN_100015208("Ability03",uVar4,0x12345678);
  *(undefined4 *)(lVar7 + 0x10) = uVar4;
  uVar4 = FUN_1004d2524("AttackToIdleCombat");
  uVar4 = FUN_100015208("AttackToIdleCombat",uVar4,0x12345678);
  *(undefined4 *)(lVar7 + 0x20) = uVar4;
  *(undefined4 *)(lVar7 + 0x24) = 0x3fc00000;
  lVar7 = FUN_10000e524();
  FUN_1003a985c(&local_90,lVar7);
  *(char **)(lVar7 + 0x10) = "Sound_HeroPLU_Fan";
  *(undefined2 *)(lVar7 + 0x30) = 0x1ff;
  *(undefined4 *)(lVar7 + 0x34) = 1;
  *(undefined8 *)(lVar7 + 0x3c) = 0xffffffff3f800000;
  *(byte *)(lVar7 + 0x38) = *(byte *)(lVar7 + 0x38) & 0xf8 | 4;
  *(undefined8 *)(lVar7 + 0x48) = 0;
  lVar7 = FUN_10000ceb8();
  FUN_1003a985c(&local_90,lVar7);
  *(undefined4 *)(lVar7 + 0x2c) = 0x3e4ccccd;
  *(undefined8 *)(lVar7 + 0x10) = 0;
  lVar7 = FUN_1003e10f0();
  bVar2 = *(byte *)(lVar7 + 0xe5);
  uVar4 = _cosf(0x3ec90fdb);
  iVar1 = ((uint)bVar2 << 0x10 | 0x146110) + 0x10;
  lVar7 = FUN_10000ed74();
  FUN_1003a985c(&local_90,lVar7);
  *(undefined8 *)(lVar7 + 0x18) = 0;
  *(undefined1 *)(lVar7 + 0x20) = 1;
  *(undefined8 *)(lVar7 + 0x24) = 0;
  *(undefined8 *)(lVar7 + 0x34) = 0;
  *(undefined8 *)(lVar7 + 0x2c) = 0;
  *(undefined4 *)(lVar7 + 0x3c) = 0;
  uVar8 = NEON_fmov(0xbf800000,4);
  *(undefined8 *)(lVar7 + 0x40) = uVar8;
  *(undefined4 *)(lVar7 + 0x48) = uVar4;
  *(undefined8 *)(lVar7 + 0x4c) = 0x3f800000bf800000;
  *(undefined1 *)(lVar7 + 0x54) = 0xff;
  *(undefined8 *)(lVar7 + 0x60) = 0xffffffff00000000;
  *(undefined8 *)(lVar7 + 0x58) = 0xffffffff00040000;
  *(char *)(lVar7 + 0x6a) = (char)((uint)iVar1 >> 0x10);
  *(short *)(lVar7 + 0x68) = (short)iVar1;
  bVar3 = DAT_101d23a38 != '\0';
  *(code **)(lVar7 + 0x78) = FUN_1003c7074;
  *(byte *)(lVar7 + 0xa8) = *(byte *)(lVar7 + 0xa8) & 0xf0 | bVar3;
  lVar7 = FUN_10000cae4();
  FUN_1003a985c(&local_90,lVar7);
  *(code **)(lVar7 + 0x10) = FUN_1003c6c94;
  plVar6 = (long *)FUN_10000d7d0();
  FUN_1003a985c(&local_90,plVar6);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x50))(plVar6);
  local_a0 = FUN_1003c6e88;
  local_98 = 3;
  plVar6 = (long *)(**(code **)(*plVar6 + 0x10))(plVar6,&local_a0);
  local_b0 = FUN_1003c7088;
  local_a8 = 3;
  (**(code **)(*plVar6 + 0x20))(plVar6,&local_b0);
  uVar5 = FUN_10000c784();
  FUN_1003a985c(&local_90,uVar5);
  uVar5 = FUN_10000bb2c();
  FUN_1003a985c(&local_90,uVar5);
  lVar7 = FUN_10000c150();
  FUN_1003a985c(&local_90,lVar7);
  *(code **)(lVar7 + 0x10) = FUN_1003c6f08;
  *(byte *)(lVar7 + 0x18) = *(byte *)(lVar7 + 0x18) & 0xfc;
  uVar5 = FUN_10000c784();
  FUN_1003a985c(&local_90,uVar5);
  lVar7 = FUN_1003e10f0();
  bVar2 = *(byte *)(lVar7 + 0xe5);
  lVar7 = FUN_10000ed74();
  FUN_1003a985c(&local_90,lVar7);
  *(undefined8 *)(lVar7 + 0x18) = 0;
  *(undefined1 *)(lVar7 + 0x20) = 1;
  *(undefined8 *)(lVar7 + 0x24) = 0;
  *(undefined4 *)(lVar7 + 0x2c) = 0;
  *(char **)(lVar7 + 0x30) = "HeroPLUSmokeCloud";
  *(undefined8 *)(lVar7 + 0x38) = 0;
  *(undefined8 *)(lVar7 + 0x40) = uVar8;
  *(undefined4 *)(lVar7 + 0x48) = uVar4;
  *(undefined8 *)(lVar7 + 0x4c) = 0x3f800000bf800000;
  *(undefined1 *)(lVar7 + 0x54) = 0xff;
  *(undefined8 *)(lVar7 + 0x60) = 0xffffffff00000000;
  *(undefined8 *)(lVar7 + 0x58) = 0xffffffff00000000;
  *(byte *)(lVar7 + 0x6a) = bVar2 | 0x14;
  *(undefined2 *)(lVar7 + 0x68) = 0x6110;
  bVar3 = DAT_101d23a38 != '\0';
  *(code **)(lVar7 + 0x78) = FUN_1003c7074;
  *(byte *)(lVar7 + 0xa8) = *(byte *)(lVar7 + 0xa8) & 0xf0 | bVar3;
  plVar6 = (long *)FUN_10000d7d0();
  FUN_1003a985c(&local_90,plVar6);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x50))(plVar6);
  local_a0 = FUN_1003c6e88;
  local_98 = 3;
  plVar6 = (long *)(**(code **)(*plVar6 + 0x10))(plVar6,&local_a0);
  local_b0 = FUN_1003c7074;
  local_a8 = 3;
  (**(code **)(*plVar6 + 0x28))(plVar6,&local_b0);
  uVar5 = FUN_10000c784();
  FUN_1003a985c(&local_90,uVar5);
  lVar7 = FUN_10000ceb8();
  FUN_1003a985c(&local_90,lVar7);
  *(undefined4 *)(lVar7 + 0x2c) = 0x3e4ccccd;
  *(undefined8 *)(lVar7 + 0x10) = 0;
  lVar7 = FUN_10000d8b8();
  FUN_1003a985c(&local_90,lVar7);
  *(undefined1 *)(lVar7 + 0x10) = 0;
  uVar5 = FUN_10000f034();
  FUN_1003a985c(&local_90,uVar5);
  return local_90;
}




undefined8 FUN_100385040(void)

{
  undefined8 uVar1;
  undefined8 local_20;
  undefined8 uStack_18;
  
  local_20 = 0;
  uStack_18 = 0;
  FUN_1003c6708(&local_20);
  uVar1 = FUN_10000f034();
  FUN_1003a985c(&local_20,uVar1);
  return local_20;
}




undefined8 FUN_100385078(void)

{
  byte bVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  code *local_90;
  undefined4 local_88;
  code *local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  local_70 = 0;
  uStack_68 = 0;
  uVar4 = FUN_10000d8b8();
  FUN_1003a985c(&local_70,uVar4);
  uVar4 = FUN_10000bb2c();
  FUN_1003a985c(&local_70,uVar4);
  lVar5 = FUN_10000dbb0();
  FUN_1003a985c(&local_70,lVar5);
  FUN_1003a4e5c(&local_80,PTR_s_Buff_HeroPLU_EngineStacks_10185b190);
  *(undefined4 *)(lVar5 + 0x10) = local_80._0_4_;
  *(undefined4 *)(lVar5 + 0x14) = 0;
  *(byte *)(lVar5 + 0x18) = *(byte *)(lVar5 + 0x18) | 1;
  lVar5 = FUN_10000c540();
  FUN_1003a985c(&local_70,lVar5);
  *(undefined **)(lVar5 + 0x10) = PTR_s_Buff_HeroPLU_EngineOverheat_10185b198;
  uVar4 = FUN_10000c784();
  FUN_1003a985c(&local_70,uVar4);
  lVar5 = FUN_10000ef8c();
  FUN_1003a985c(&local_70,lVar5);
  *(byte *)(lVar5 + 0x10) = *(byte *)(lVar5 + 0x10) & 0xe7 | 4;
  lVar5 = FUN_10000dff8();
  FUN_1003a985c(&local_70,lVar5);
  *(undefined2 *)(lVar5 + 0x28) = 0x100;
  *(undefined8 *)(lVar5 + 0x30) = 0;
  uVar3 = FUN_1004d2524("Ability03");
  uVar3 = FUN_100015208("Ability03",uVar3,0x12345678);
  *(undefined4 *)(lVar5 + 0x10) = uVar3;
  uVar3 = FUN_1004d2524("AttackToIdleCombat");
  uVar3 = FUN_100015208("AttackToIdleCombat",uVar3,0x12345678);
  *(undefined4 *)(lVar5 + 0x20) = uVar3;
  *(undefined4 *)(lVar5 + 0x24) = 0x3fc00000;
  plVar6 = (long *)thunk_FUN_10000e358();
  FUN_1003a985c(&local_70,plVar6);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x58))(plVar6);
  (**(code **)(*plVar6 + 0x48))(plVar6,"Effect_Hero000_Explosion_5mr");
  lVar5 = FUN_1003e10f0();
  bVar1 = *(byte *)(lVar5 + 0xe5);
  lVar5 = FUN_10000ed74();
  FUN_1003a985c(&local_70,lVar5);
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
  *(code **)(lVar5 + 0x78) = FUN_1003c6e74;
  *(byte *)(lVar5 + 0xa8) = *(byte *)(lVar5 + 0xa8) & 0xf0 | bVar2;
  lVar5 = FUN_10000cae4();
  FUN_1003a985c(&local_70,lVar5);
  *(code **)(lVar5 + 0x10) = FUN_1003c6c94;
  plVar6 = (long *)FUN_10000d7d0();
  FUN_1003a985c(&local_70,plVar6);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x50))(plVar6);
  local_80 = FUN_1003c6e88;
  local_78 = 3;
  plVar6 = (long *)(**(code **)(*plVar6 + 0x10))(plVar6,&local_80);
  local_90 = FUN_1003c6e74;
  local_88 = 3;
  (**(code **)(*plVar6 + 0x28))(plVar6,&local_90);
  uVar4 = FUN_10000c784();
  FUN_1003a985c(&local_70,uVar4);
  uVar4 = FUN_10000bb2c();
  FUN_1003a985c(&local_70,uVar4);
  lVar5 = FUN_10000c150();
  FUN_1003a985c(&local_70,lVar5);
  *(code **)(lVar5 + 0x10) = FUN_1003c6d1c;
  *(byte *)(lVar5 + 0x18) = *(byte *)(lVar5 + 0x18) & 0xfc;
  lVar5 = FUN_10000cae4();
  FUN_1003a985c(&local_70,lVar5);
  *(code **)(lVar5 + 0x10) = FUN_1003c6aa4;
  uVar4 = FUN_10000c784();
  FUN_1003a985c(&local_70,uVar4);
  lVar5 = FUN_1003e10f0();
  bVar1 = *(byte *)(lVar5 + 0xe5);
  lVar5 = FUN_10000ed74();
  FUN_1003a985c(&local_70,lVar5);
  *(undefined8 *)(lVar5 + 0x18) = 0;
  *(undefined1 *)(lVar5 + 0x20) = 1;
  *(undefined8 *)(lVar5 + 0x24) = 0;
  *(undefined4 *)(lVar5 + 0x2c) = 0;
  *(char **)(lVar5 + 0x30) = "HeroPLUSmokeCloud";
  *(undefined8 *)(lVar5 + 0x38) = 0;
  *(undefined8 *)(lVar5 + 0x48) = 0xbf800000c0000000;
  *(undefined8 *)(lVar5 + 0x40) = 0xbf800000bf800000;
  *(undefined4 *)(lVar5 + 0x50) = 0x3f800000;
  *(undefined1 *)(lVar5 + 0x54) = 0xff;
  *(undefined8 *)(lVar5 + 0x60) = 0xffffffff00000000;
  *(undefined8 *)(lVar5 + 0x58) = 0xffffffff00000000;
  *(byte *)(lVar5 + 0x6a) = bVar1 | 0x14;
  *(undefined2 *)(lVar5 + 0x68) = 0x6110;
  bVar2 = DAT_101d23a38 != '\0';
  *(code **)(lVar5 + 0x78) = FUN_1003c6e74;
  *(byte *)(lVar5 + 0xa8) = *(byte *)(lVar5 + 0xa8) & 0xf0 | bVar2;
  plVar6 = (long *)FUN_10000d7d0();
  FUN_1003a985c(&local_70,plVar6);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x50))(plVar6);
  local_80 = FUN_1003c6e88;
  local_78 = 3;
  plVar6 = (long *)(**(code **)(*plVar6 + 0x10))(plVar6,&local_80);
  local_90 = FUN_1003c6e74;
  local_88 = 3;
  (**(code **)(*plVar6 + 0x28))(plVar6,&local_90);
  uVar4 = FUN_10000c784();
  FUN_1003a985c(&local_70,uVar4);
  lVar5 = FUN_10000ceb8();
  FUN_1003a985c(&local_70,lVar5);
  *(undefined4 *)(lVar5 + 0x2c) = 0x3e4ccccd;
  *(undefined8 *)(lVar5 + 0x10) = 0;
  lVar5 = FUN_10000d8b8();
  FUN_1003a985c(&local_70,lVar5);
  *(undefined1 *)(lVar5 + 0x10) = 0;
  uVar4 = FUN_10000f034();
  FUN_1003a985c(&local_70,uVar4);
  return local_70;
}




undefined8 FUN_1003854e8(void)

{
  byte bVar1;
  bool bVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 local_50;
  undefined8 uStack_48;
  
  local_50 = 0;
  uStack_48 = 0;
  uVar3 = FUN_10000d8b8();
  FUN_1003a985c(&local_50,uVar3);
  FUN_1003c6658(&local_50,1,1);
  uVar3 = FUN_10000bb2c();
  FUN_1003a985c(&local_50,uVar3);
  lVar4 = FUN_10000bd3c();
  FUN_1003a985c(&local_50,lVar4);
  *(undefined **)(lVar4 + 0x10) = PTR_s_Buff_HeroPLU_EngineOverheatRegul_10185b1a8;
  *(undefined4 *)(lVar4 + 0x18) = 0x3e4ccccd;
  *(undefined2 *)(lVar4 + 0x68) = 1;
  *(byte *)(lVar4 + 0x6a) = *(byte *)(lVar4 + 0x6a) & 0xfe;
  lVar4 = FUN_10000c0a8();
  FUN_1003a985c(&local_50,lVar4);
  *(code **)(lVar4 + 0x10) = FUN_1003c6e9c;
  *(undefined2 *)(lVar4 + 0x18) = 1;
  lVar4 = FUN_10000bd3c();
  FUN_1003a985c(&local_50,lVar4);
  *(undefined **)(lVar4 + 0x10) = PTR_s_Buff_Stasis_10185a590;
  *(code **)(lVar4 + 0x30) = FUN_1003c6ecc;
  *(undefined2 *)(lVar4 + 0x68) = 1;
  *(byte *)(lVar4 + 0x6a) = *(byte *)(lVar4 + 0x6a) & 0xfe;
  lVar4 = FUN_10000c150();
  FUN_1003a985c(&local_50,lVar4);
  *(code **)(lVar4 + 0x10) = FUN_1003c6eb0;
  *(byte *)(lVar4 + 0x18) = *(byte *)(lVar4 + 0x18) & 0xfc | 1;
  uVar3 = FUN_10000c784();
  FUN_1003a985c(&local_50,uVar3);
  lVar4 = FUN_10000e524();
  FUN_1003a985c(&local_50,lVar4);
  *(char **)(lVar4 + 0x10) = "Sound_HeroPLU_KABOOM";
  *(undefined2 *)(lVar4 + 0x30) = 0x1ff;
  *(undefined4 *)(lVar4 + 0x34) = 1;
  *(undefined8 *)(lVar4 + 0x3c) = 0xffffffff3f800000;
  *(byte *)(lVar4 + 0x38) = *(byte *)(lVar4 + 0x38) & 0xf8 | 4;
  *(undefined8 *)(lVar4 + 0x48) = 0;
  lVar4 = FUN_10000ceb8();
  FUN_1003a985c(&local_50,lVar4);
  *(code **)(lVar4 + 0x20) = FUN_1003c6ecc;
  *(undefined8 *)(lVar4 + 0x10) = 0;
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
  *(undefined4 *)(lVar4 + 0x50) = 0x3f800000;
  *(undefined1 *)(lVar4 + 0x54) = 0xff;
  *(undefined8 *)(lVar4 + 0x60) = 0xffffffff00000000;
  *(undefined8 *)(lVar4 + 0x58) = 0xffffffff00040000;
  *(byte *)(lVar4 + 0x6a) = bVar1 | 0x14;
  *(undefined2 *)(lVar4 + 0x68) = 0x4120;
  bVar2 = DAT_101d23a38 != '\0';
  *(code **)(lVar4 + 0x78) = FUN_1003c6ee0;
  *(byte *)(lVar4 + 0xa8) = *(byte *)(lVar4 + 0xa8) & 0xf0 | bVar2;
  lVar4 = FUN_10000bd3c();
  FUN_1003a985c(&local_50,lVar4);
  *(undefined **)(lVar4 + 0x10) = PTR_s_Buff_Stunned_10185a208;
  *(code **)(lVar4 + 0x30) = FUN_1003c6ef4;
  *(undefined2 *)(lVar4 + 0x68) = 1;
  *(byte *)(lVar4 + 0x6a) = *(byte *)(lVar4 + 0x6a) & 0xfe;
  uVar3 = FUN_10000c784();
  FUN_1003a985c(&local_50,uVar3);
  lVar4 = FUN_10000e524();
  FUN_1003a985c(&local_50,lVar4);
  *(char **)(lVar4 + 0x10) = "Sound_HeroPLU_KABOOM_Impact";
  *(undefined2 *)(lVar4 + 0x30) = 0x1ff;
  *(undefined4 *)(lVar4 + 0x34) = 1;
  *(undefined8 *)(lVar4 + 0x3c) = 0xffffffff3f800000;
  *(byte *)(lVar4 + 0x38) = *(byte *)(lVar4 + 0x38) & 0xf8 | 4;
  *(undefined8 *)(lVar4 + 0x48) = 0;
  lVar4 = FUN_10000d8b8();
  FUN_1003a985c(&local_50,lVar4);
  *(undefined1 *)(lVar4 + 0x10) = 0;
  uVar3 = FUN_10000f034();
  FUN_1003a985c(&local_50,uVar3);
  return local_50;
}




undefined8 FUN_1003857e8(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_30 = 0;
  uStack_28 = 0;
  uVar2 = FUN_10000d8b8();
  FUN_1003a985c(&local_30,uVar2);
  FUN_1003c6658(&local_30,1,1);
  lVar3 = FUN_10000e524();
  FUN_1003a985c(&local_30,lVar3);
  *(char **)(lVar3 + 0x10) = "Sound_HeroPLU_Toss";
  *(undefined2 *)(lVar3 + 0x30) = 0x1ff;
  *(undefined4 *)(lVar3 + 0x34) = 1;
  *(undefined8 *)(lVar3 + 0x3c) = 0xffffffff3f800000;
  *(byte *)(lVar3 + 0x38) = *(byte *)(lVar3 + 0x38) & 0xf8 | 4;
  *(undefined8 *)(lVar3 + 0x48) = 0;
  lVar3 = FUN_10000dff8();
  FUN_1003a985c(&local_30,lVar3);
  *(undefined2 *)(lVar3 + 0x28) = 0x100;
  *(code **)(lVar3 + 0x30) = FUN_1003a24a0;
  uVar1 = FUN_1004d2524("CritAttack");
  uVar1 = FUN_100015208("CritAttack",uVar1,0x12345678);
  *(undefined4 *)(lVar3 + 0x10) = uVar1;
  uVar1 = FUN_1004d2524("AttackToIdleCombat");
  uVar1 = FUN_100015208("AttackToIdleCombat",uVar1,0x12345678);
  *(undefined4 *)(lVar3 + 0x20) = uVar1;
  lVar3 = FUN_10000ceb8();
  FUN_1003a985c(&local_30,lVar3);
  *(undefined4 *)(lVar3 + 0x2c) = 0x3e99999a;
  *(undefined8 *)(lVar3 + 0x10) = 0;
  lVar3 = FUN_10000f250();
  FUN_1003a985c(&local_30,lVar3);
  *(undefined4 *)(lVar3 + 0x10) = 0xd7;
  FUN_1003d266c(lVar3,"CenterBody");
  uVar2 = FUN_10000f034();
  FUN_1003a985c(&local_30,uVar2);
  lVar3 = FUN_10000d8b8();
  FUN_1003a985c(&local_30,lVar3);
  *(undefined1 *)(lVar3 + 0x10) = 0;
  return local_30;
}




undefined8 FUN_100385970(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_30 = 0;
  uStack_28 = 0;
  uVar2 = FUN_10000d8b8();
  FUN_1003a985c(&local_30,uVar2);
  lVar3 = FUN_10000ef8c();
  FUN_1003a985c(&local_30,lVar3);
  *(byte *)(lVar3 + 0x10) = *(byte *)(lVar3 + 0x10) & 0xe7 | 4;
  lVar3 = FUN_10000dff8();
  FUN_1003a985c(&local_30,lVar3);
  *(undefined2 *)(lVar3 + 0x28) = 0x100;
  *(undefined8 *)(lVar3 + 0x30) = 0;
  uVar1 = FUN_1004d2524("Ability01");
  uVar1 = FUN_100015208("Ability01",uVar1,0x12345678);
  *(undefined4 *)(lVar3 + 0x10) = uVar1;
  uVar1 = FUN_1004d2524("AttackToIdleCombat");
  uVar1 = FUN_100015208("AttackToIdleCombat",uVar1,0x12345678);
  *(undefined4 *)(lVar3 + 0x20) = uVar1;
  *(undefined4 *)(lVar3 + 0x24) = 0x3fc00000;
  lVar3 = FUN_10000e524();
  FUN_1003a985c(&local_30,lVar3);
  *(char **)(lVar3 + 0x10) = "Sound_HeroPLU_Debris";
  *(undefined2 *)(lVar3 + 0x30) = 0x1ff;
  *(undefined4 *)(lVar3 + 0x34) = 1;
  *(undefined8 *)(lVar3 + 0x3c) = 0xffffffff3f800000;
  *(byte *)(lVar3 + 0x38) = *(byte *)(lVar3 + 0x38) & 0xf8 | 4;
  *(undefined8 *)(lVar3 + 0x48) = 0;
  lVar3 = FUN_10000ceb8();
  FUN_1003a985c(&local_30,lVar3);
  *(undefined4 *)(lVar3 + 0x2c) = 0x3e99999a;
  *(undefined8 *)(lVar3 + 0x10) = 0;
  lVar3 = FUN_10000f250();
  FUN_1003a985c(&local_30,lVar3);
  *(undefined4 *)(lVar3 + 0x10) = 0xd8;
  FUN_1003d266c(lVar3,"CenterBody");
  uVar2 = FUN_10000f034();
  FUN_1003a985c(&local_30,uVar2);
  lVar3 = FUN_10000d8b8();
  FUN_1003a985c(&local_30,lVar3);
  *(undefined1 *)(lVar3 + 0x10) = 0;
  return local_30;
}




void FUN_100385b08(void)

{
  FUN_1003c709c("Attack","CenterBody",0x7f);
  return;
}




void FUN_100385b20(void)

{
  FUN_1003c709c("AltAttack","CenterBody",0x80);
  return;
}




void FUN_100385b38(void)

{
  FUN_1003c709c("CritAttack","CenterBody",0x81);
  return;
}




undefined8 FUN_100385b50(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  undefined4 uVar6;
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
  lVar1 = FUN_10000e524();
  FUN_1003a985c(&local_40,lVar1);
  uVar2 = FUN_1010a1520();
  lVar3 = FUN_1010a0e0c(uVar2,0,"*KindredSoundBalance*",0);
  uVar6 = FUN_1003c7210(*(undefined4 *)(lVar3 + 0x434));
  *(char **)(lVar1 + 0x10) = "Sound_Lorelai_Ability_A_Windup";
  *(undefined2 *)(lVar1 + 0x30) = 0x1ff;
  *(undefined4 *)(lVar1 + 0x34) = 1;
  *(undefined4 *)(lVar1 + 0x3c) = uVar6;
  *(undefined4 *)(lVar1 + 0x40) = 0xffffffff;
  *(byte *)(lVar1 + 0x38) = *(byte *)(lVar1 + 0x38) & 0xf8 | 4;
  *(undefined8 *)(lVar1 + 0x48) = 0;
  plVar4 = (long *)thunk_FUN_10000e0ac();
  FUN_1003a985c(&local_40,plVar4);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))(plVar4,"Ability01");
  (**(code **)(*plVar4 + 0x18))(plVar4,"AttackToIdle");
  plVar4 = (long *)thunk_FUN_10000e358();
  FUN_1003a985c(&local_40,plVar4);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x58))(plVar4);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x48))(plVar4,"Effect_Lorelai_A_Cast");
  plVar4 = (long *)(**(code **)(*plVar4 + 0x78))(plVar4,0);
  (**(code **)(*plVar4 + 0xb0))(plVar4,1);
  lVar1 = FUN_10000c8e8();
  FUN_1003a985c(&local_40,lVar1);
  lVar3 = FUN_10049ab34(lVar1 + 0x10);
  *(undefined **)(lVar3 + 8) = PTR_s_Buff_Lorelai_WaterSourceEmpowere_10185b1b0;
  plVar4 = (long *)FUN_10000bdf0();
  FUN_1003a985c(lVar1 + 0xb0,plVar4);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))
                             (plVar4,PTR_s_Buff_Lorelai_WaterSourceEmpowere_10185b1b0);
  local_50 = FUN_1003c72ac;
  local_48 = 3;
  (**(code **)(*plVar4 + 0x18))(plVar4,&local_50);
  plVar4 = (long *)FUN_10000bdf0();
  FUN_1003a985c(lVar1 + 0xb0,plVar4);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))
                             (plVar4,PTR_s_Buff_Lorelai_EmpoweredNoBonus_10185b1b8);
  local_50 = (code *)CONCAT44(local_50._4_4_,0x3f800000);
  local_48 = 1;
  (**(code **)(*plVar4 + 0x18))(plVar4,&local_50);
  plVar4 = (long *)FUN_10000f300();
  FUN_1003a985c(&local_40,plVar4);
  plVar5 = (long *)(**(code **)(*plVar4 + 0x50))(plVar4,"*Lorelai_FishFood*",1);
  (**(code **)(*plVar5 + 0x20))(plVar5,FUN_10048fb04);
  plVar5 = (long *)FUN_10000bfc0();
  FUN_1003a985c(&local_40,plVar5);
  plVar4 = (long *)(**(code **)(*plVar5 + 0x50))
                             (plVar5,PTR_s_Buff_Lorelai_FishFoodDelay_10185b1c0,plVar4 + 2);
  local_50 = FUN_1003c7274;
  local_48 = 4;
  (**(code **)(*plVar4 + 0x18))(plVar4,&local_50);
  lVar1 = FUN_10000ceb8();
  FUN_1003a985c(&local_40,lVar1);
  *(code **)(lVar1 + 0x20) = FUN_1003c72ac;
  *(undefined8 *)(lVar1 + 0x10) = 0;
  uVar2 = FUN_10000c784();
  FUN_1003a985c(&local_40,uVar2);
  lVar1 = FUN_10000d8b8();
  FUN_1003a985c(&local_40,lVar1);
  *(undefined1 *)(lVar1 + 0x10) = 0;
  uVar2 = FUN_10000f034();
  FUN_1003a985c(&local_40,uVar2);
  return local_40;
}




undefined8 FUN_100385e74(void)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  code *local_50;
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
  lVar2 = FUN_10000dff8();
  FUN_1003a985c(&local_40,lVar2);
  *(undefined2 *)(lVar2 + 0x28) = 0x100;
  *(undefined8 *)(lVar2 + 0x30) = 0;
  uVar1 = FUN_1004d2524("Ability02");
  uVar1 = FUN_100015208("Ability02",uVar1,0x12345678);
  *(undefined4 *)(lVar2 + 0x10) = uVar1;
  uVar1 = FUN_1004d2524("AttackToIdle");
  uVar1 = FUN_100015208("AttackToIdle",uVar1,0x12345678);
  *(undefined4 *)(lVar2 + 0x20) = uVar1;
  lVar2 = FUN_10000e524();
  FUN_1003a985c(&local_40,lVar2);
  uVar3 = FUN_1010a1520();
  lVar4 = FUN_1010a0e0c(uVar3,0,"*KindredSoundBalance*",0);
  uVar1 = FUN_1003c7210(*(undefined4 *)(lVar4 + 0x440));
  *(char **)(lVar2 + 0x10) = "Sound_Lorelai_Ability_B_Start";
  *(undefined2 *)(lVar2 + 0x30) = 0x1ff;
  *(undefined4 *)(lVar2 + 0x34) = 1;
  *(undefined4 *)(lVar2 + 0x3c) = uVar1;
  *(undefined4 *)(lVar2 + 0x40) = 0xffffffff;
  *(byte *)(lVar2 + 0x38) = *(byte *)(lVar2 + 0x38) & 0xf8 | 4;
  *(undefined8 *)(lVar2 + 0x48) = 0;
  lVar2 = FUN_10000c8e8();
  FUN_1003a985c(&local_40,lVar2);
  lVar4 = FUN_10049ab34(lVar2 + 0x10);
  *(undefined **)(lVar4 + 8) = PTR_s_Buff_Lorelai_WaterSourceEmpowere_10185b1b0;
  plVar5 = (long *)FUN_10000bdf0();
  FUN_1003a985c(lVar2 + 0xb0,plVar5);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x50))
                             (plVar5,PTR_s_Buff_Lorelai_WaterSourceEmpowere_10185b1b0);
  local_50 = FUN_1003c72c0;
  local_48 = 3;
  (**(code **)(*plVar5 + 0x18))(plVar5,&local_50);
  lVar2 = FUN_10000ceb8();
  FUN_1003a985c(&local_40,lVar2);
  *(code **)(lVar2 + 0x20) = FUN_1003c72c0;
  *(undefined8 *)(lVar2 + 0x10) = 0;
  plVar5 = (long *)thunk_FUN_10000e358();
  FUN_1003a985c(&local_40,plVar5);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x58))(plVar5);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x48))(plVar5,"Effect_Lorelai_B_Cast");
  plVar5 = (long *)(**(code **)(*plVar5 + 0x78))(plVar5,0);
  (**(code **)(*plVar5 + 0xb0))(plVar5,1);
  lVar2 = FUN_10000c8e8();
  FUN_1003a985c(&local_40,lVar2);
  lVar4 = FUN_10049ab34(lVar2 + 0x10);
  *(undefined **)(lVar4 + 8) = PTR_s_Buff_Lorelai_WaterSourceEmpowere_10185b1b0;
  lVar4 = FUN_10000f250();
  FUN_1003a985c(lVar2 + 200,lVar4);
  *(undefined4 *)(lVar4 + 0x10) = 0x82;
  FUN_1003d266c(lVar4,"CenterBody");
  lVar4 = FUN_10000f250();
  FUN_1003a985c(lVar2 + 0xb0,lVar4);
  *(undefined4 *)(lVar4 + 0x10) = 0x83;
  FUN_1003d266c(lVar4,"CenterBody");
  uVar3 = FUN_10000c784();
  FUN_1003a985c(&local_40,uVar3);
  lVar2 = FUN_10000d8b8();
  FUN_1003a985c(&local_40,lVar2);
  *(undefined1 *)(lVar2 + 0x10) = 0;
  uVar3 = FUN_10000f034();
  FUN_1003a985c(&local_40,uVar3);
  return local_40;
}




undefined8 FUN_100386168(void)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
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
  uVar1 = FUN_1004d2524("Ability03");
  uVar1 = FUN_100015208("Ability03",uVar1,0x12345678);
  *(undefined4 *)(lVar2 + 0x10) = uVar1;
  uVar1 = FUN_1004d2524("AttackToIdle");
  uVar1 = FUN_100015208("AttackToIdle",uVar1,0x12345678);
  *(undefined4 *)(lVar2 + 0x20) = uVar1;
  lVar2 = FUN_10000e524();
  FUN_1003a985c(&local_50,lVar2);
  uVar3 = FUN_1010a1520();
  lVar4 = FUN_1010a0e0c(uVar3,0,"*KindredSoundBalance*",0);
  uVar1 = FUN_1003c7210(*(undefined4 *)(lVar4 + 0x44c));
  *(char **)(lVar2 + 0x10) = "Sound_Lorelai_Ability_C_Start";
  *(undefined2 *)(lVar2 + 0x30) = 0x1ff;
  *(undefined4 *)(lVar2 + 0x34) = 1;
  *(undefined4 *)(lVar2 + 0x3c) = uVar1;
  *(undefined4 *)(lVar2 + 0x40) = 0xffffffff;
  *(byte *)(lVar2 + 0x38) = *(byte *)(lVar2 + 0x38) & 0xf8 | 4;
  *(undefined8 *)(lVar2 + 0x48) = 0;
  lVar2 = FUN_10000c8e8();
  FUN_1003a985c(&local_50,lVar2);
  lVar4 = FUN_10049ab34(lVar2 + 0x10);
  *(undefined **)(lVar4 + 8) = PTR_s_Buff_Lorelai_WaterSourceEmpowere_10185b1b0;
  plVar5 = (long *)FUN_10000bdf0();
  FUN_1003a985c(lVar2 + 0xb0,plVar5);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x50))
                             (plVar5,PTR_s_Buff_Lorelai_WaterSourceEmpowere_10185b1b0);
  local_60 = FUN_1003c72d4;
  local_58 = 3;
  (**(code **)(*plVar5 + 0x18))(plVar5,&local_60);
  lVar4 = FUN_10000c8e8();
  FUN_1003a985c(&local_50,lVar4);
  lVar2 = FUN_10049ab34(lVar4 + 0x10);
  *(undefined **)(lVar2 + 8) = PTR_s_Buff_Lorelai_Talent_TalentC_10185b1c8;
  lVar2 = lVar4 + 0xb0;
  uVar3 = FUN_10000bc94();
  FUN_1003a985c(lVar2,uVar3);
  lVar6 = FUN_10000bd3c();
  FUN_1003a985c(lVar2,lVar6);
  *(undefined **)(lVar6 + 0x10) = PTR_s_Buff_Lorelai_Invulnerable_10185b1d0;
  *(code **)(lVar6 + 0x30) = FUN_1003c72e8;
  *(undefined2 *)(lVar6 + 0x68) = 1;
  *(byte *)(lVar6 + 0x6a) = *(byte *)(lVar6 + 0x6a) & 0xfe;
  uVar3 = FUN_10000c784();
  FUN_1003a985c(lVar2,uVar3);
  uVar3 = FUN_10000bc94();
  FUN_1003a985c(lVar4 + 200,uVar3);
  lVar2 = FUN_10000c8e8();
  FUN_1003a985c(lVar4 + 200,lVar2);
  lVar4 = FUN_10049ab34(lVar2 + 0x10);
  *(undefined **)(lVar4 + 8) = PTR_s_Buff_Lorelai_WaterSourceEmpowere_10185b1b0;
  lVar4 = FUN_10000bd3c();
  FUN_1003a985c(lVar2 + 200,lVar4);
  *(undefined **)(lVar4 + 0x10) = PTR_s_Buff_Lorelai_WaterShield_10185b1d8;
  *(code **)(lVar4 + 0x30) = FUN_1003c731c;
  *(undefined2 *)(lVar4 + 0x68) = 1;
  *(byte *)(lVar4 + 0x6a) = *(byte *)(lVar4 + 0x6a) & 0xfe;
  lVar4 = FUN_10000bd3c();
  FUN_1003a985c(lVar2 + 0xb0,lVar4);
  *(undefined **)(lVar4 + 0x10) = PTR_s_Buff_Lorelai_WaterShield_10185b1d8;
  *(code **)(lVar4 + 0x30) = FUN_1003c7330;
  *(undefined2 *)(lVar4 + 0x68) = 1;
  *(byte *)(lVar4 + 0x6a) = *(byte *)(lVar4 + 0x6a) & 0xfe;
  uVar3 = FUN_10000c784();
  FUN_1003a985c(&local_50,uVar3);
  lVar2 = FUN_10000ceb8();
  FUN_1003a985c(&local_50,lVar2);
  *(code **)(lVar2 + 0x20) = FUN_1003c72d4;
  *(undefined8 *)(lVar2 + 0x10) = 0;
  lVar2 = FUN_10000d8b8();
  FUN_1003a985c(&local_50,lVar2);
  *(undefined1 *)(lVar2 + 0x10) = 0;
  uVar3 = FUN_10000f034();
  FUN_1003a985c(&local_50,uVar3);
  return local_50;
}




undefined8 FUN_1003864c4(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined4 local_50 [2];
  undefined4 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  local_40 = 0;
  uStack_38 = 0;
  lVar1 = FUN_10000c8e8();
  FUN_1003a985c(&local_40,lVar1);
  lVar2 = FUN_10049ac6c(lVar1 + 0x10);
  *(code **)(lVar2 + 8) = FUN_1003a70e0;
  plVar3 = (long *)FUN_10000bdf0();
  FUN_1003a985c(lVar1 + 0xb0,plVar3);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x50))(plVar3,PTR_s_Buff_Emote_Taunt_10185a578);
  local_50[0] = 0x40000000;
  local_48 = 1;
  (**(code **)(*plVar3 + 0x18))(plVar3,local_50);
  lVar2 = FUN_10000e1b4();
  FUN_1003a985c(lVar1 + 0xb0,lVar2);
  *(undefined8 *)(lVar2 + 0x40) = 0;
  *(ushort *)(lVar2 + 0x80) = *(ushort *)(lVar2 + 0x80) & 0xfffc | 0x12;
  *(uint *)(lVar2 + 0x3c) = (uint)lVar2 & 0xffff;
  *(undefined8 *)(lVar2 + 0x20) = 0;
  *(undefined8 *)(lVar2 + 0x28) = 1;
  *(undefined4 *)(lVar2 + 0x10) = 0x14a17dc6;
  return local_40;
}




undefined8 FUN_1003865b0(void)

{
  long *plVar1;
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_30 = 0;
  uStack_28 = 0;
  plVar1 = (long *)thunk_FUN_10000e0ac();
  FUN_1003a985c(&local_30,plVar1);
  plVar1 = (long *)(**(code **)(*plVar1 + 0x50))(plVar1,"Hidden");
  (**(code **)(*plVar1 + 0x18))(plVar1,0);
  return local_30;
}




void FUN_100386614(void)

{
  FUN_1003c7a70("Attack");
  return;
}




void FUN_100386620(void)

{
  FUN_1003c7a70("AltAttack");
  return;
}




void FUN_10038662c(void)

{
  FUN_1003c7a70("CritAttack");
  return;
}




undefined8 FUN_100386638(void)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 local_40;
  undefined8 uStack_38;
  
  local_40 = 0;
  uStack_38 = 0;
  lVar2 = FUN_10000e94c();
  FUN_1003a985c(&local_40,lVar2);
  *(code **)(lVar2 + 0x10) = FUN_1003c7ea8;
  lVar2 = FUN_10000c838();
  FUN_1003a985c(&local_40,lVar2);
  *(ushort *)(lVar2 + 0x58) = *(ushort *)(lVar2 + 0x58) & 0xf01f | 0x10;
  *(code **)(lVar2 + 0x40) = FUN_1003c8054;
  lVar2 = lVar2 + 0x18;
  plVar3 = (long *)FUN_10000c458();
  FUN_1003a985c(lVar2,plVar3);
  puVar4 = (undefined8 *)(**(code **)(*plVar3 + 0x50))(plVar3);
  (**(code **)*puVar4)(puVar4,PTR_s_Ability__Varya__C_101859aa8);
  uVar5 = FUN_10000bb2c();
  FUN_1003a985c(lVar2,uVar5);
  puVar1 = PTR_s_Buff_Varya_C_ComboWindow_10185b200;
  lVar6 = FUN_10000c540();
  FUN_1003a985c(lVar2,lVar6);
  *(undefined **)(lVar6 + 0x10) = puVar1;
  uVar5 = FUN_10000c784();
  FUN_1003a985c(lVar2,uVar5);
  lVar2 = FUN_10000c838();
  FUN_1003a985c(&local_40,lVar2);
  *(ushort *)(lVar2 + 0x58) = *(ushort *)(lVar2 + 0x58) & 0xf01f | 0x10;
  *(code **)(lVar2 + 0x40) = FUN_1003c80d4;
  lVar6 = FUN_10000b720();
  FUN_1003a985c(lVar2 + 0x30,lVar6);
  *(undefined **)(lVar6 + 0x30) = PTR_s_Ability__Varya__A_Default_101859a70;
  *(code **)(lVar6 + 0x18) = FUN_1003afbd4;
  lVar6 = FUN_10000b720();
  FUN_1003a985c(lVar2 + 0x18,lVar6);
  *(undefined **)(lVar6 + 0x30) = PTR_s_Ability__Varya__A_Quick_101859a78;
  *(code **)(lVar6 + 0x18) = FUN_1003afbd4;
  return local_40;
}




undefined8 FUN_1003867bc(void)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  undefined4 uVar6;
  undefined4 local_60 [2];
  undefined4 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  local_50 = 0;
  uStack_48 = 0;
  FUN_1003ac044(&local_50);
  lVar2 = FUN_10000e524();
  FUN_1003a985c(&local_50,lVar2);
  uVar3 = FUN_1010a1520();
  lVar4 = FUN_1010a0e0c(uVar3,0,"*KindredSoundBalance*",0);
  uVar6 = FUN_1003c7e38(*(undefined4 *)(lVar4 + 0x460));
  *(undefined2 *)(lVar2 + 0x30) = 0x2ff;
  *(undefined4 *)(lVar2 + 0x34) = 1;
  *(undefined4 *)(lVar2 + 0x3c) = uVar6;
  *(undefined4 *)(lVar2 + 0x40) = 0xffffffff;
  *(byte *)(lVar2 + 0x38) = *(byte *)(lVar2 + 0x38) & 0xf8 | 4;
  *(undefined8 *)(lVar2 + 0x48) = 0;
  *(char **)(lVar2 + 0x10) = "Sound_Varya_Ability_A_Buildup_1";
  *(char **)(lVar2 + 0x18) = "Sound_Varya_Ability_A_Buildup_2";
  lVar2 = FUN_10000dff8();
  FUN_1003a985c(&local_50,lVar2);
  *(undefined2 *)(lVar2 + 0x28) = 0x100;
  *(undefined8 *)(lVar2 + 0x30) = 0;
  uVar6 = FUN_1004d2524("Ability01");
  uVar6 = FUN_100015208("Ability01",uVar6,0x12345678);
  *(undefined4 *)(lVar2 + 0x10) = uVar6;
  uVar6 = FUN_1004d2524("AttackToIdle");
  uVar6 = FUN_100015208("AttackToIdle",uVar6,0x12345678);
  *(undefined4 *)(lVar2 + 0x20) = uVar6;
  plVar5 = (long *)thunk_FUN_10000e358();
  FUN_1003a985c(&local_50,plVar5);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x68))(plVar5,"Bone_Lightning");
  plVar5 = (long *)(**(code **)(*plVar5 + 0x48))(plVar5,"Effect_Varya_A_Cast_Delay");
  plVar5 = (long *)(**(code **)(*plVar5 + 0x78))(plVar5,1);
  plVar5 = (long *)(**(code **)(*plVar5 + 0xb0))(plVar5,1);
  local_60[0] = 0x3f800000;
  local_58 = 1;
  (**(code **)(*plVar5 + 0x60))(plVar5,local_60);
  FUN_1003a643c(&local_50,PTR_s_Buff_Varya_A_WatchForStun_10185b218,FUN_1003c8474);
  lVar2 = FUN_10000ceb8();
  FUN_1003a985c(&local_50,lVar2);
  *(code **)(lVar2 + 0x20) = FUN_1003c8474;
  *(undefined8 *)(lVar2 + 0x10) = 0;
  lVar2 = FUN_10000e524();
  FUN_1003a985c(&local_50,lVar2);
  uVar3 = FUN_1010a1520();
  lVar4 = FUN_1010a0e0c(uVar3,0,"*KindredSoundBalance*",0);
  uVar6 = FUN_1003c7e38(*(undefined4 *)(lVar4 + 0x460));
  *(undefined2 *)(lVar2 + 0x30) = 0x2ff;
  *(undefined4 *)(lVar2 + 0x34) = 1;
  *(undefined4 *)(lVar2 + 0x3c) = uVar6;
  *(undefined4 *)(lVar2 + 0x40) = 0xffffffff;
  *(byte *)(lVar2 + 0x38) = *(byte *)(lVar2 + 0x38) & 0xf8 | 4;
  *(undefined8 *)(lVar2 + 0x48) = 0;
  *(char **)(lVar2 + 0x10) = "Sound_Varya_Ability_A_Spear_Throw_1";
  *(char **)(lVar2 + 0x18) = "Sound_Varya_Ability_A_Spear_Throw_2";
  lVar2 = FUN_10000c838();
  FUN_1003a985c(&local_50,lVar2);
  puVar1 = PTR_s_Ability__Varya__A_101859a68;
  *(ushort *)(lVar2 + 0x58) = *(ushort *)(lVar2 + 0x58) & 0xf01f | 0x50;
  *(undefined4 *)(lVar2 + 0x51) = 0;
  *(undefined4 *)(lVar2 + 0x54) = 0;
  *(undefined1 *)(lVar2 + 0x50) = 7;
  *(undefined **)(lVar2 + 0x40) = puVar1;
  *(undefined8 *)(lVar2 + 0x48) = 4;
  lVar4 = FUN_10000f250();
  FUN_1003a985c(lVar2 + 0x18,lVar4);
  *(undefined4 *)(lVar4 + 0x10) = 0x84;
  FUN_1003d266c(lVar4,"SpearThrow");
  *(code **)(lVar4 + 0x38) = FUN_1003c81bc;
  lVar4 = FUN_10000f250();
  FUN_1003a985c(lVar2 + 0x30,lVar4);
  *(undefined4 *)(lVar4 + 0x10) = 0x84;
  FUN_1003d266c(lVar4,"SpearThrow");
  lVar2 = FUN_10000ceb8();
  FUN_1003a985c(&local_50,lVar2);
  *(undefined4 *)(lVar2 + 0x2c) = 0x3dcccccd;
  *(undefined8 *)(lVar2 + 0x10) = 0;
  uVar3 = FUN_10000bb2c();
  FUN_1003a985c(&local_50,uVar3);
  puVar1 = PTR_s_Buff_SpeedDecayingUsingBuffVar_10185a9f8;
  lVar2 = FUN_10000bd3c();
  FUN_1003a985c(&local_50,lVar2);
  *(undefined **)(lVar2 + 0x10) = puVar1;
  *(code **)(lVar2 + 0x30) = FUN_1003c7e9c;
  *(undefined2 *)(lVar2 + 0x68) = 1;
  *(byte *)(lVar2 + 0x6a) = *(byte *)(lVar2 + 0x6a) & 0xfe;
  *(code **)(lVar2 + 0x58) = FUN_1003c7934;
  uVar3 = FUN_10000c784();
  FUN_1003a985c(&local_50,uVar3);
  lVar2 = FUN_10000ceb8();
  FUN_1003a985c(&local_50,lVar2);
  *(undefined4 *)(lVar2 + 0x2c) = 0x3dcccccd;
  *(undefined8 *)(lVar2 + 0x10) = 0;
  lVar2 = FUN_10000d8b8();
  FUN_1003a985c(&local_50,lVar2);
  *(undefined1 *)(lVar2 + 0x10) = 0;
  return local_50;
}




undefined8 FUN_100386b7c(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  undefined4 local_60 [2];
  undefined4 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  local_50 = 0;
  uStack_48 = 0;
  FUN_1003ac044(&local_50);
  uVar3 = FUN_10000bb2c();
  FUN_1003a985c(&local_50,uVar3);
  puVar1 = PTR_s_Buff_Varya_A_QuickSpearAvailable_10185b210;
  lVar4 = FUN_10000c540();
  FUN_1003a985c(&local_50,lVar4);
  *(undefined **)(lVar4 + 0x10) = puVar1;
  uVar3 = FUN_10000c784();
  FUN_1003a985c(&local_50,uVar3);
  lVar4 = FUN_10000dff8();
  FUN_1003a985c(&local_50,lVar4);
  *(undefined2 *)(lVar4 + 0x28) = 0x100;
  *(undefined8 *)(lVar4 + 0x30) = 0;
  uVar2 = FUN_1004d2524("Ability01_Quick");
  uVar2 = FUN_100015208("Ability01_Quick",uVar2,0x12345678);
  *(undefined4 *)(lVar4 + 0x10) = uVar2;
  uVar2 = FUN_1004d2524("AttackToIdle");
  uVar2 = FUN_100015208("AttackToIdle",uVar2,0x12345678);
  *(undefined4 *)(lVar4 + 0x20) = uVar2;
  plVar5 = (long *)thunk_FUN_10000e358();
  FUN_1003a985c(&local_50,plVar5);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x68))(plVar5,"Bone_Lightning");
  plVar5 = (long *)(**(code **)(*plVar5 + 0x48))(plVar5,"Effect_Varya_A_Cast");
  plVar5 = (long *)(**(code **)(*plVar5 + 0x78))(plVar5,1);
  plVar5 = (long *)(**(code **)(*plVar5 + 0xb0))(plVar5,1);
  local_60[0] = 0x3ecccccd;
  local_58 = 1;
  (**(code **)(*plVar5 + 0x60))(plVar5,local_60);
  FUN_1003a643c(&local_50,PTR_s_Buff_Varya_A_WatchForStun_10185b218,FUN_1003c8488);
  lVar4 = FUN_10000ceb8();
  FUN_1003a985c(&local_50,lVar4);
  *(code **)(lVar4 + 0x20) = FUN_1003c8488;
  *(undefined8 *)(lVar4 + 0x10) = 0;
  lVar4 = FUN_10000e524();
  FUN_1003a985c(&local_50,lVar4);
  uVar3 = FUN_1010a1520();
  lVar6 = FUN_1010a0e0c(uVar3,0,"*KindredSoundBalance*",0);
  uVar2 = FUN_1003c7e38(*(undefined4 *)(lVar6 + 0x460));
  *(undefined2 *)(lVar4 + 0x30) = 0x2ff;
  *(undefined4 *)(lVar4 + 0x40) = 0xffffffff;
  *(undefined4 *)(lVar4 + 0x34) = 1;
  *(undefined4 *)(lVar4 + 0x3c) = uVar2;
  *(byte *)(lVar4 + 0x38) = *(byte *)(lVar4 + 0x38) & 0xf8 | 4;
  *(undefined8 *)(lVar4 + 0x48) = 0;
  *(char **)(lVar4 + 0x10) = "Sound_Varya_Ability_A_Spear_Throw_1";
  *(char **)(lVar4 + 0x18) = "Sound_Varya_Ability_A_Spear_Throw_2";
  lVar4 = FUN_10000c838();
  FUN_1003a985c(&local_50,lVar4);
  puVar1 = PTR_s_Ability__Varya__A_101859a68;
  *(ushort *)(lVar4 + 0x58) = *(ushort *)(lVar4 + 0x58) & 0xf01f | 0x50;
  *(undefined4 *)(lVar4 + 0x51) = 0;
  *(undefined4 *)(lVar4 + 0x54) = 0;
  *(undefined1 *)(lVar4 + 0x50) = 7;
  *(undefined **)(lVar4 + 0x40) = puVar1;
  *(undefined8 *)(lVar4 + 0x48) = 4;
  lVar6 = FUN_10000f250();
  FUN_1003a985c(lVar4 + 0x18,lVar6);
  *(undefined4 *)(lVar6 + 0x10) = 0x84;
  FUN_1003d266c(lVar6,"CenterBody");
  *(code **)(lVar6 + 0x38) = FUN_1003c81bc;
  lVar6 = FUN_10000f250();
  FUN_1003a985c(lVar4 + 0x30,lVar6);
  *(undefined4 *)(lVar6 + 0x10) = 0x84;
  FUN_1003d266c(lVar6,"CenterBody");
  lVar4 = FUN_10000c838();
  FUN_1003a985c(&local_50,lVar4);
  *(ushort *)(lVar4 + 0x58) = *(ushort *)(lVar4 + 0x58) & 0xf01f | 0x10;
  *(code **)(lVar4 + 0x40) = FUN_1003c829c;
  lVar4 = lVar4 + 0x18;
  uVar3 = FUN_10000bb2c();
  FUN_1003a985c(lVar4,uVar3);
  puVar1 = PTR_s_Buff_Varya_B_MoveDefaultAvailabl_10185b220;
  lVar6 = FUN_10000bd3c();
  FUN_1003a985c(lVar4,lVar6);
  *(undefined **)(lVar6 + 0x10) = puVar1;
  *(code **)(lVar6 + 0x30) = FUN_1003c849c;
  *(undefined2 *)(lVar6 + 0x68) = 1;
  *(byte *)(lVar6 + 0x6a) = *(byte *)(lVar6 + 0x6a) & 0xfe;
  uVar3 = FUN_10000c784();
  FUN_1003a985c(lVar4,uVar3);
  lVar4 = FUN_10000c838();
  FUN_1003a985c(&local_50,lVar4);
  *(ushort *)(lVar4 + 0x58) = *(ushort *)(lVar4 + 0x58) & 0xf01f | 0x10;
  *(code **)(lVar4 + 0x40) = FUN_1003c8370;
  lVar4 = lVar4 + 0x18;
  uVar3 = FUN_10000bb2c();
  FUN_1003a985c(lVar4,uVar3);
  puVar1 = PTR_s_Buff_Varya_B_MoveAvailable_10185b228;
  lVar6 = FUN_10000bd3c();
  FUN_1003a985c(lVar4,lVar6);
  *(undefined **)(lVar6 + 0x10) = puVar1;
  *(code **)(lVar6 + 0x30) = FUN_1003c849c;
  *(undefined2 *)(lVar6 + 0x68) = 1;
  *(byte *)(lVar6 + 0x6a) = *(byte *)(lVar6 + 0x6a) & 0xfe;
  *(code **)(lVar6 + 0x60) = FUN_1003c7344;
  uVar3 = FUN_10000c784();
  FUN_1003a985c(lVar4,uVar3);
  lVar6 = FUN_10000c838();
  FUN_1003a985c(&local_50,lVar6);
  *(ushort *)(lVar6 + 0x58) = *(ushort *)(lVar6 + 0x58) & 0xf01f | 0x10;
  *(code **)(lVar6 + 0x40) = FUN_1003c81c8;
  lVar4 = lVar6 + 0x18;
  uVar3 = FUN_10000bb2c();
  FUN_1003a985c(lVar4,uVar3);
  puVar1 = PTR_s_Buff_Varya_B_Control_10185b208;
  lVar7 = FUN_10000c540();
  FUN_1003a985c(lVar4,lVar7);
  *(undefined **)(lVar7 + 0x10) = puVar1;
  puVar1 = PTR_s_Buff_SpeedDecayingUsingBuffVar_10185a9f8;
  lVar7 = FUN_10000bd3c();
  FUN_1003a985c(lVar6 + 0x30,lVar7);
  *(undefined **)(lVar7 + 0x10) = puVar1;
  *(code **)(lVar7 + 0x30) = FUN_1003c7e9c;
  *(undefined2 *)(lVar7 + 0x68) = 1;
  *(byte *)(lVar7 + 0x6a) = *(byte *)(lVar7 + 0x6a) & 0xfe;
  *(code **)(lVar7 + 0x58) = FUN_1003c7934;
  uVar3 = FUN_10000c784();
  FUN_1003a985c(lVar4,uVar3);
  lVar4 = FUN_10000ceb8();
  FUN_1003a985c(&local_50,lVar4);
  *(undefined4 *)(lVar4 + 0x2c) = 0x3dcccccd;
  *(undefined8 *)(lVar4 + 0x10) = 0;
  lVar4 = FUN_10000d8b8();
  FUN_1003a985c(&local_50,lVar4);
  *(undefined1 *)(lVar4 + 0x10) = 0;
  return local_50;
}




undefined8 FUN_100387074(void)

{
  long lVar1;
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_30 = 0;
  uStack_28 = 0;
  lVar1 = FUN_10000e94c();
  FUN_1003a985c(&local_30,lVar1);
  *(code **)(lVar1 + 0x10) = FUN_1003c84b0;
  return local_30;
}




undefined8 FUN_1003870bc(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 local_50;
  undefined8 uStack_48;
  
  local_50 = 0;
  uStack_48 = 0;
  lVar3 = FUN_10000e94c();
  FUN_1003a985c(&local_50,lVar3);
  *(code **)(lVar3 + 0x10) = FUN_1003c861c;
  lVar3 = FUN_10000c838();
  FUN_1003a985c(&local_50,lVar3);
  *(ushort *)(lVar3 + 0x58) = *(ushort *)(lVar3 + 0x58) & 0xf01f | 0x10;
  *(code **)(lVar3 + 0x40) = FUN_1003c8054;
  lVar3 = lVar3 + 0x18;
  plVar4 = (long *)FUN_10000c458();
  FUN_1003a985c(lVar3,plVar4);
  puVar5 = (undefined8 *)(**(code **)(*plVar4 + 0x50))(plVar4);
  (**(code **)*puVar5)(puVar5,PTR_s_Ability__Varya__C_101859aa8);
  uVar6 = FUN_10000bb2c();
  FUN_1003a985c(lVar3,uVar6);
  puVar1 = PTR_s_Buff_Varya_C_ComboWindow_10185b200;
  lVar7 = FUN_10000c540();
  FUN_1003a985c(lVar3,lVar7);
  *(undefined **)(lVar7 + 0x10) = puVar1;
  uVar6 = FUN_10000c784();
  FUN_1003a985c(lVar3,uVar6);
  lVar3 = FUN_10000d8b8();
  FUN_1003a985c(&local_50,lVar3);
  *(undefined1 *)(lVar3 + 0x10) = 1;
  uVar6 = FUN_10000bb2c();
  FUN_1003a985c(&local_50,uVar6);
  puVar1 = PTR_s_Buff_Varya_B_Control_10185b208;
  lVar3 = FUN_10000bd3c();
  FUN_1003a985c(&local_50,lVar3);
  *(undefined **)(lVar3 + 0x10) = puVar1;
  *(code **)(lVar3 + 0x30) = FUN_1003c8810;
  *(undefined2 *)(lVar3 + 0x68) = 1;
  *(byte *)(lVar3 + 0x6a) = *(byte *)(lVar3 + 0x6a) & 0xfe;
  *(code **)(lVar3 + 0x58) = FUN_1003c85f8;
  puVar1 = PTR_s_Buff_Varya_B_ChargingFx_10185b240;
  lVar3 = FUN_10000bd3c();
  FUN_1003a985c(&local_50,lVar3);
  *(undefined **)(lVar3 + 0x10) = puVar1;
  *(code **)(lVar3 + 0x30) = FUN_1003c876c;
  *(undefined2 *)(lVar3 + 0x68) = 1;
  *(byte *)(lVar3 + 0x6a) = *(byte *)(lVar3 + 0x6a) & 0xfe;
  *(code **)(lVar3 + 0x58) = FUN_1003c85f8;
  uVar6 = FUN_10000c784();
  FUN_1003a985c(&local_50,uVar6);
  lVar3 = FUN_10000dff8();
  FUN_1003a985c(&local_50,lVar3);
  *(undefined2 *)(lVar3 + 0x28) = 0x100;
  *(undefined8 *)(lVar3 + 0x30) = 0;
  uVar2 = FUN_1004d2524("Ability02");
  uVar2 = FUN_100015208("Ability02",uVar2,0x12345678);
  *(undefined4 *)(lVar3 + 0x10) = uVar2;
  uVar2 = FUN_1004d2524("AttackToIdle");
  uVar2 = FUN_100015208("AttackToIdle",uVar2,0x12345678);
  *(undefined4 *)(lVar3 + 0x20) = uVar2;
  lVar3 = FUN_10000ceb8();
  FUN_1003a985c(&local_50,lVar3);
  *(undefined4 *)(lVar3 + 0x2c) = 0x3dcccccd;
  *(undefined8 *)(lVar3 + 0x10) = 0;
  uVar6 = FUN_10000bb2c();
  FUN_1003a985c(&local_50,uVar6);
  puVar1 = PTR_s_Buff_Varya_B_MoveAvailable_10185b228;
  lVar3 = FUN_10000bd3c();
  FUN_1003a985c(&local_50,lVar3);
  *(undefined **)(lVar3 + 0x10) = puVar1;
  *(code **)(lVar3 + 0x30) = FUN_1003c8810;
  *(undefined2 *)(lVar3 + 0x68) = 1;
  *(byte *)(lVar3 + 0x6a) = *(byte *)(lVar3 + 0x6a) & 0xfe;
  *(code **)(lVar3 + 0x60) = FUN_1003c7344;
  uVar6 = FUN_10000c784();
  FUN_1003a985c(&local_50,uVar6);
  lVar3 = FUN_10000ceb8();
  FUN_1003a985c(&local_50,lVar3);
  *(undefined4 *)(lVar3 + 0x2c) = 0x3e4ccccd;
  *(undefined8 *)(lVar3 + 0x10) = 0;
  lVar3 = FUN_10000d8b8();
  FUN_1003a985c(&local_50,lVar3);
  *(undefined1 *)(lVar3 + 0x10) = 0;
  return local_50;
}




undefined8 FUN_1003873b4(void)

{
  long lVar1;
  long lVar2;
  undefined8 local_40;
  undefined8 uStack_38;
  
  local_40 = 0;
  uStack_38 = 0;
  lVar1 = FUN_10000e94c();
  FUN_1003a985c(&local_40,lVar1);
  *(code **)(lVar1 + 0x10) = FUN_1003c1888;
  lVar1 = FUN_10000c8e8();
  FUN_1003a985c(&local_40,lVar1);
  lVar2 = FUN_10049ab34(lVar1 + 0x10);
  *(undefined **)(lVar2 + 8) = PTR_s_Buff_Varya_B_DoubleDash_10185b248;
  lVar2 = FUN_10000b720();
  FUN_1003a985c(lVar1 + 0xb0,lVar2);
  *(undefined **)(lVar2 + 0x30) = PTR_s_Ability__Varya__B_Move_Charged_101859aa0;
  *(code **)(lVar2 + 0x18) = FUN_1003afbd4;
  lVar2 = FUN_10000b720();
  FUN_1003a985c(lVar1 + 200,lVar2);
  *(undefined **)(lVar2 + 0x30) = PTR_s_Ability__Varya__B_Move_Default_101859a98;
  *(code **)(lVar2 + 0x18) = FUN_1003afbd4;
  return local_40;
}




undefined8 FUN_100387484(void)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  undefined4 uVar6;
  undefined4 local_50 [2];
  undefined4 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  local_40 = 0;
  uStack_38 = 0;
  lVar2 = FUN_10000e94c();
  FUN_1003a985c(&local_40,lVar2);
  *(code **)(lVar2 + 0x10) = FUN_1003c1888;
  FUN_1003ac044(&local_40);
  lVar2 = FUN_10000e524();
  FUN_1003a985c(&local_40,lVar2);
  uVar3 = FUN_1010a1520();
  lVar4 = FUN_1010a0e0c(uVar3,0,"*KindredSoundBalance*",0);
  uVar6 = FUN_1003c7e38(*(undefined4 *)(lVar4 + 0x464));
  *(undefined2 *)(lVar2 + 0x30) = 0x2ff;
  *(undefined4 *)(lVar2 + 0x40) = 0xffffffff;
  *(undefined4 *)(lVar2 + 0x34) = 1;
  *(undefined4 *)(lVar2 + 0x3c) = uVar6;
  *(byte *)(lVar2 + 0x38) = *(byte *)(lVar2 + 0x38) & 0xf8 | 4;
  *(undefined8 *)(lVar2 + 0x48) = 0;
  *(char **)(lVar2 + 0x10) = "Sound_Varya_Ability_B_Dash_1";
  *(char **)(lVar2 + 0x18) = "Sound_Varya_Ability_B_Dash_2";
  lVar2 = FUN_10000dff8();
  FUN_1003a985c(&local_40,lVar2);
  *(undefined2 *)(lVar2 + 0x28) = 0x100;
  *(undefined8 *)(lVar2 + 0x30) = 0;
  uVar6 = FUN_1004d2524("Ability02_DashAFinal");
  uVar6 = FUN_100015208("Ability02_DashAFinal",uVar6,0x12345678);
  *(undefined4 *)(lVar2 + 0x10) = uVar6;
  uVar6 = FUN_1004d2524("AttackToIdle");
  uVar6 = FUN_100015208("AttackToIdle",uVar6,0x12345678);
  *(undefined4 *)(lVar2 + 0x20) = uVar6;
  lVar2 = FUN_10000e1b4();
  FUN_1003a985c(&local_40,lVar2);
  *(undefined8 *)(lVar2 + 0x40) = 0;
  *(ushort *)(lVar2 + 0x80) = *(ushort *)(lVar2 + 0x80) & 0xffef | 3;
  *(uint *)(lVar2 + 0x3c) = (uint)lVar2 & 0xffff;
  *(undefined8 *)(lVar2 + 0x20) = 0;
  *(undefined8 *)(lVar2 + 0x28) = 1;
  *(undefined4 *)(lVar2 + 0x10) = 0x8668a6d1;
  lVar2 = FUN_10000ceb8();
  FUN_1003a985c(&local_40,lVar2);
  *(undefined4 *)(lVar2 + 0x2c) = 0x3dcccccd;
  *(undefined8 *)(lVar2 + 0x10) = 0;
  plVar5 = (long *)FUN_10000cd5c();
  FUN_1003a985c(&local_40,plVar5);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x88))(plVar5);
  local_50[0] = 0x3e4ccccd;
  local_48 = 1;
  plVar5 = (long *)(**(code **)(*plVar5 + 0xa8))(plVar5,local_50);
  (**(code **)(*plVar5 + 0xb0))(plVar5,1);
  lVar2 = FUN_10000ceb8();
  FUN_1003a985c(&local_40,lVar2);
  *(undefined4 *)(lVar2 + 0x2c) = 0x3e99999a;
  *(undefined8 *)(lVar2 + 0x10) = 0;
  lVar2 = FUN_10000e7fc();
  FUN_1003a985c(&local_40,lVar2);
  *(undefined4 *)(lVar2 + 0x10) = 0;
  lVar2 = FUN_10000c3b0();
  FUN_1003a985c(&local_40,lVar2);
  *(code **)(lVar2 + 0x10) = FUN_1003c8824;
  lVar2 = FUN_10000c838();
  FUN_1003a985c(&local_40,lVar2);
  *(ushort *)(lVar2 + 0x58) = *(ushort *)(lVar2 + 0x58) & 0xf01f | 0x10;
  *(code **)(lVar2 + 0x40) = FUN_1003c8a74;
  lVar2 = lVar2 + 0x18;
  uVar3 = FUN_10000bb2c();
  FUN_1003a985c(lVar2,uVar3);
  puVar1 = PTR_s_Buff_Varya_B_Combo_A_Activate_10185b258;
  lVar4 = FUN_10000bd3c();
  FUN_1003a985c(lVar2,lVar4);
  *(undefined **)(lVar4 + 0x10) = puVar1;
  *(undefined4 *)(lVar4 + 0x18) = 0x3f800000;
  *(undefined2 *)(lVar4 + 0x68) = 1;
  *(byte *)(lVar4 + 0x6a) = *(byte *)(lVar4 + 0x6a) & 0xfe;
  uVar3 = FUN_10000c784();
  FUN_1003a985c(lVar2,uVar3);
  uVar3 = FUN_10000bb2c();
  FUN_1003a985c(&local_40,uVar3);
  puVar1 = PTR_s_Buff_SpeedDecayingUsingBuffVar_10185a9f8;
  lVar2 = FUN_10000bd3c();
  FUN_1003a985c(&local_40,lVar2);
  *(undefined **)(lVar2 + 0x10) = puVar1;
  *(code **)(lVar2 + 0x30) = FUN_1003c7e9c;
  *(undefined2 *)(lVar2 + 0x68) = 1;
  *(byte *)(lVar2 + 0x6a) = *(byte *)(lVar2 + 0x6a) & 0xfe;
  *(code **)(lVar2 + 0x58) = FUN_1003c7934;
  puVar1 = PTR_s_Buff_Varya_B_Control_10185b208;
  lVar2 = FUN_10000c540();
  FUN_1003a985c(&local_40,lVar2);
  *(undefined **)(lVar2 + 0x10) = puVar1;
  uVar3 = FUN_10000c784();
  FUN_1003a985c(&local_40,uVar3);
  lVar2 = FUN_10000d8b8();
  FUN_1003a985c(&local_40,lVar2);
  *(undefined1 *)(lVar2 + 0x10) = 0;
  return local_40;
}




undefined8 FUN_100387804(void)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  undefined4 uVar6;
  undefined4 local_50 [2];
  undefined4 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  local_40 = 0;
  uStack_38 = 0;
  lVar2 = FUN_10000e94c();
  FUN_1003a985c(&local_40,lVar2);
  *(code **)(lVar2 + 0x10) = FUN_1003c1888;
  FUN_1003ac044(&local_40);
  lVar2 = FUN_10000e524();
  FUN_1003a985c(&local_40,lVar2);
  uVar3 = FUN_1010a1520();
  lVar4 = FUN_1010a0e0c(uVar3,0,"*KindredSoundBalance*",0);
  uVar6 = FUN_1003c7e38(*(undefined4 *)(lVar4 + 0x464));
  *(undefined2 *)(lVar2 + 0x30) = 0x2ff;
  *(undefined4 *)(lVar2 + 0x40) = 0xffffffff;
  *(undefined4 *)(lVar2 + 0x34) = 1;
  *(undefined4 *)(lVar2 + 0x3c) = uVar6;
  *(byte *)(lVar2 + 0x38) = *(byte *)(lVar2 + 0x38) & 0xf8 | 4;
  *(undefined8 *)(lVar2 + 0x48) = 0;
  *(char **)(lVar2 + 0x10) = "Sound_Varya_Ability_B_Dash_1";
  *(char **)(lVar2 + 0x18) = "Sound_Varya_Ability_B_Dash_2";
  lVar2 = FUN_10000dff8();
  FUN_1003a985c(&local_40,lVar2);
  *(undefined2 *)(lVar2 + 0x28) = 0x100;
  *(undefined8 *)(lVar2 + 0x30) = 0;
  uVar6 = FUN_1004d2524("Ability02_DashB");
  uVar6 = FUN_100015208("Ability02_DashB",uVar6,0x12345678);
  *(undefined4 *)(lVar2 + 0x10) = uVar6;
  uVar6 = FUN_1004d2524("AttackToIdle");
  uVar6 = FUN_100015208("AttackToIdle",uVar6,0x12345678);
  *(undefined4 *)(lVar2 + 0x20) = uVar6;
  lVar2 = FUN_10000e1b4();
  FUN_1003a985c(&local_40,lVar2);
  *(undefined8 *)(lVar2 + 0x40) = 0;
  *(ushort *)(lVar2 + 0x80) = *(ushort *)(lVar2 + 0x80) & 0xffef | 3;
  *(uint *)(lVar2 + 0x3c) = (uint)lVar2 & 0xffff;
  *(undefined8 *)(lVar2 + 0x20) = 0;
  *(undefined8 *)(lVar2 + 0x28) = 1;
  *(undefined4 *)(lVar2 + 0x10) = 0x8668a6d1;
  lVar2 = FUN_10000ceb8();
  FUN_1003a985c(&local_40,lVar2);
  *(undefined4 *)(lVar2 + 0x2c) = 0x3dcccccd;
  *(undefined8 *)(lVar2 + 0x10) = 0;
  plVar5 = (long *)FUN_10000cd5c();
  FUN_1003a985c(&local_40,plVar5);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x88))(plVar5);
  local_50[0] = 0x3e4ccccd;
  local_48 = 1;
  plVar5 = (long *)(**(code **)(*plVar5 + 0xa8))(plVar5,local_50);
  (**(code **)(*plVar5 + 0xb0))(plVar5,1);
  lVar2 = FUN_10000ceb8();
  FUN_1003a985c(&local_40,lVar2);
  *(undefined4 *)(lVar2 + 0x2c) = 0x3e99999a;
  *(undefined8 *)(lVar2 + 0x10) = 0;
  lVar2 = FUN_10000c3b0();
  FUN_1003a985c(&local_40,lVar2);
  *(code **)(lVar2 + 0x10) = FUN_1003c8824;
  uVar3 = FUN_10000bb2c();
  FUN_1003a985c(&local_40,uVar3);
  puVar1 = PTR_s_Buff_Varya_B_MoveDefaultAvailabl_10185b220;
  lVar2 = FUN_10000bd3c();
  FUN_1003a985c(&local_40,lVar2);
  *(undefined **)(lVar2 + 0x10) = puVar1;
  *(code **)(lVar2 + 0x30) = FUN_1003c849c;
  *(undefined2 *)(lVar2 + 0x68) = 1;
  *(byte *)(lVar2 + 0x6a) = *(byte *)(lVar2 + 0x6a) & 0xfe;
  uVar3 = FUN_10000c784();
  FUN_1003a985c(&local_40,uVar3);
  lVar2 = FUN_10000d8b8();
  FUN_1003a985c(&local_40,lVar2);
  *(undefined1 *)(lVar2 + 0x10) = 0;
  return local_40;
}




undefined8 FUN_100387ab4(void)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  undefined4 uVar6;
  undefined4 local_60 [2];
  undefined4 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  local_50 = 0;
  uStack_48 = 0;
  lVar2 = FUN_10000d2d0();
  FUN_1003a985c(&local_50,lVar2);
  *(undefined **)(lVar2 + 0x10) = PTR_s_Buff_Varya_C_Control_10185b268;
  *(undefined4 *)(lVar2 + 0x18) = 2;
  lVar2 = FUN_10000d8b8();
  FUN_1003a985c(&local_50,lVar2);
  *(undefined1 *)(lVar2 + 0x10) = 1;
  lVar2 = FUN_10000e524();
  FUN_1003a985c(&local_50,lVar2);
  uVar3 = FUN_1010a1520();
  lVar4 = FUN_1010a0e0c(uVar3,0,"*KindredSoundBalance*",0);
  uVar6 = FUN_1003c7e38(*(undefined4 *)(lVar4 + 0x468));
  *(undefined2 *)(lVar2 + 0x30) = 0x2ff;
  *(undefined4 *)(lVar2 + 0x40) = 0xffffffff;
  *(undefined4 *)(lVar2 + 0x34) = 1;
  *(undefined4 *)(lVar2 + 0x3c) = uVar6;
  *(byte *)(lVar2 + 0x38) = *(byte *)(lVar2 + 0x38) & 0xf8 | 4;
  *(undefined8 *)(lVar2 + 0x48) = 0;
  *(char **)(lVar2 + 0x10) = "Sound_Varya_Ability_C_Activation_1";
  *(char **)(lVar2 + 0x18) = "Sound_Varya_Ability_C_Activation_2";
  lVar2 = FUN_10000dff8();
  FUN_1003a985c(&local_50,lVar2);
  *(undefined2 *)(lVar2 + 0x28) = 0x100;
  *(undefined8 *)(lVar2 + 0x30) = 0;
  uVar6 = FUN_1004d2524("Ability03");
  uVar6 = FUN_100015208("Ability03",uVar6,0x12345678);
  *(undefined4 *)(lVar2 + 0x10) = uVar6;
  uVar6 = FUN_1004d2524("AttackToIdle");
  uVar6 = FUN_100015208("AttackToIdle",uVar6,0x12345678);
  *(undefined4 *)(lVar2 + 0x20) = uVar6;
  uVar3 = FUN_10000bb2c();
  FUN_1003a985c(&local_50,uVar3);
  puVar1 = PTR_s_Buff_Varya_C_Casting_10185b270;
  lVar2 = FUN_10000bd3c();
  FUN_1003a985c(&local_50,lVar2);
  *(undefined **)(lVar2 + 0x10) = puVar1;
  *(code **)(lVar2 + 0x30) = FUN_1003c8b68;
  *(undefined2 *)(lVar2 + 0x68) = 1;
  *(byte *)(lVar2 + 0x6a) = *(byte *)(lVar2 + 0x6a) & 0xfe;
  *(code **)(lVar2 + 0x58) = FUN_1003c85f8;
  puVar1 = PTR_s_Buff_Varya_C_Control_10185b268;
  lVar2 = FUN_10000bd3c();
  FUN_1003a985c(&local_50,lVar2);
  *(undefined **)(lVar2 + 0x10) = puVar1;
  *(undefined4 *)(lVar2 + 0x18) = 0x41200000;
  *(undefined2 *)(lVar2 + 0x68) = 1;
  *(byte *)(lVar2 + 0x6a) = *(byte *)(lVar2 + 0x6a) & 0xfe;
  uVar3 = FUN_10000c784();
  FUN_1003a985c(&local_50,uVar3);
  lVar2 = FUN_10000ceb8();
  FUN_1003a985c(&local_50,lVar2);
  *(undefined4 *)(lVar2 + 0x2c) = 0x3e4ccccd;
  *(undefined8 *)(lVar2 + 0x10) = 0;
  plVar5 = (long *)thunk_FUN_10000e358();
  FUN_1003a985c(&local_50,plVar5);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x68))(plVar5,"Bone_RightHand");
  plVar5 = (long *)(**(code **)(*plVar5 + 0x48))(plVar5,"Effect_Varya_C_Cast");
  plVar5 = (long *)(**(code **)(*plVar5 + 0x78))(plVar5,1);
  plVar5 = (long *)(**(code **)(*plVar5 + 0xb0))(plVar5,1);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x90))();
  local_60[0] = 0x4019999a;
  local_58 = 1;
  (**(code **)(*plVar5 + 0x60))(plVar5,local_60);
  plVar5 = (long *)thunk_FUN_10000e358();
  FUN_1003a985c(&local_50,plVar5);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x68))(plVar5,"Bone_LeftHand");
  plVar5 = (long *)(**(code **)(*plVar5 + 0x48))(plVar5,"Effect_Varya_C_Cast");
  plVar5 = (long *)(**(code **)(*plVar5 + 0x78))(plVar5,1);
  plVar5 = (long *)(**(code **)(*plVar5 + 0xb0))(plVar5,1);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x90))();
  local_60[0] = 0x4019999a;
  local_58 = 1;
  (**(code **)(*plVar5 + 0x60))(plVar5,local_60);
  lVar2 = FUN_10000ceb8();
  FUN_1003a985c(&local_50,lVar2);
  *(code **)(lVar2 + 0x20) = FUN_1003c8b68;
  *(undefined8 *)(lVar2 + 0x10) = 0;
  uVar3 = FUN_10000bb2c();
  FUN_1003a985c(&local_50,uVar3);
  puVar1 = PTR_s_Buff_SpeedDecayingUsingBuffVar_10185a9f8;
  lVar2 = FUN_10000bd3c();
  FUN_1003a985c(&local_50,lVar2);
  *(undefined **)(lVar2 + 0x10) = puVar1;
  *(code **)(lVar2 + 0x30) = FUN_1003c7e9c;
  *(undefined2 *)(lVar2 + 0x68) = 1;
  *(byte *)(lVar2 + 0x6a) = *(byte *)(lVar2 + 0x6a) & 0xfe;
  *(code **)(lVar2 + 0x58) = FUN_1003c7934;
  uVar3 = FUN_10000c784();
  FUN_1003a985c(&local_50,uVar3);
  lVar2 = FUN_10000ceb8();
  FUN_1003a985c(&local_50,lVar2);
  *(undefined4 *)(lVar2 + 0x2c) = 0x3dcccccd;
  *(undefined8 *)(lVar2 + 0x10) = 0;
  lVar2 = FUN_10000d8b8();
  FUN_1003a985c(&local_50,lVar2);
  *(undefined1 *)(lVar2 + 0x10) = 0;
  return local_50;
}




void FUN_100387ea4(void)

{
  FUN_1003c8b7c("Attack",PTR_s_Buff_Kensei_DefaultAttack_Effect_10185b2e0,"Effect_Kensei_AA_Trail",0
               );
  return;
}




void FUN_100387ec4(void)

{
  FUN_1003c8b7c("AltAttack",PTR_s_Buff_Kensei_AltAttack_EffectOnHi_10185b2e8,
                "Effect_Kensei_AA_Trail",0);
  return;
}




void FUN_100387ee4(void)

{
  FUN_1003c8b7c("CritAttack",PTR_s_Buff_Kensei_CritAttack_EffectOnH_10185b2f0,
                "Effect_Kensei_AA_Crit_Trail",2);
  return;
}




undefined8 FUN_100387f04(void)

{
  byte bVar1;
  byte bVar2;
  undefined *puVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  undefined4 uVar10;
  undefined4 local_a0 [2];
  undefined4 local_98;
  code *local_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  
  local_80 = 0;
  uStack_78 = 0;
  lVar5 = FUN_10000ef8c();
  FUN_1003a985c(&local_80,lVar5);
  *(byte *)(lVar5 + 0x10) = *(byte *)(lVar5 + 0x10) & 0xe7 | 4;
  lVar5 = FUN_10000d8b8();
  FUN_1003a985c(&local_80,lVar5);
  *(undefined1 *)(lVar5 + 0x10) = 1;
  lVar6 = FUN_10000c8e8();
  FUN_1003a985c(&local_80,lVar6);
  lVar5 = FUN_10049ab34(lVar6 + 0x10);
  *(undefined **)(lVar5 + 8) = PTR_s_Buff_Kensei_B_EmpoweredByB_10185b2f8;
  lVar5 = lVar6 + 0xb0;
  plVar7 = (long *)thunk_FUN_10000e0ac();
  FUN_1003a985c(lVar5,plVar7);
  plVar7 = (long *)(**(code **)(*plVar7 + 0x50))(plVar7,"Ability01_Enhanced");
  (**(code **)(*plVar7 + 0x18))(plVar7,"AttackToIdleCombat");
  plVar7 = (long *)thunk_FUN_10000e358();
  FUN_1003a985c(lVar5,plVar7);
  plVar7 = (long *)(**(code **)(*plVar7 + 0x58))(plVar7);
  plVar7 = (long *)(**(code **)(*plVar7 + 0x48))(plVar7,"Effect_Kensei_A_Attack_Emp");
  (**(code **)(*plVar7 + 0x78))(plVar7,1);
  plVar7 = (long *)thunk_FUN_10000e5dc();
  FUN_1003a985c(lVar5,plVar7);
  plVar7 = (long *)(**(code **)(*plVar7 + 0x58))(plVar7,"Sound_Kensei_A_Empowered");
  uVar8 = FUN_1010a1520();
  lVar5 = FUN_1010a0e0c(uVar8,0,"*KindredSoundBalance*",0);
  FUN_1003c8e98(*(undefined4 *)(lVar5 + 0x4b8));
  (**(code **)(*plVar7 + 0x28))(plVar7);
  lVar6 = lVar6 + 200;
  plVar7 = (long *)thunk_FUN_10000e5dc();
  FUN_1003a985c(lVar6,plVar7);
  plVar7 = (long *)(**(code **)(*plVar7 + 0x58))(plVar7,"Sound_Kensei_A");
  uVar8 = FUN_1010a1520();
  lVar5 = FUN_1010a0e0c(uVar8,0,"*KindredSoundBalance*",0);
  FUN_1003c8e98(*(undefined4 *)(lVar5 + 0x4b8));
  (**(code **)(*plVar7 + 0x28))(plVar7);
  lVar5 = FUN_10000c8e8();
  FUN_1003a985c(lVar6,lVar5);
  lVar9 = FUN_10049ab34(lVar5 + 0x10);
  *(undefined **)(lVar9 + 8) = PTR_s_Buff_Kensei_A_StepCounter_10185b300;
  plVar7 = (long *)thunk_FUN_10000e0ac();
  FUN_1003a985c(lVar5 + 200,plVar7);
  plVar7 = (long *)(**(code **)(*plVar7 + 0x50))(plVar7,"Ability01_A");
  (**(code **)(*plVar7 + 0x18))(plVar7,"AttackToIdleCombat");
  plVar7 = (long *)thunk_FUN_10000e358();
  FUN_1003a985c(lVar5 + 200,plVar7);
  plVar7 = (long *)(**(code **)(*plVar7 + 0x58))(plVar7);
  plVar7 = (long *)(**(code **)(*plVar7 + 0x48))(plVar7,"Effect_Kensei_A_Attack01");
  (**(code **)(*plVar7 + 0x78))(plVar7,1);
  lVar5 = FUN_10000c838();
  FUN_1003a985c(lVar6,lVar5);
  puVar3 = PTR_s_Buff_Kensei_A_StepCounter_10185b300;
  *(undefined4 *)(lVar5 + 0x51) = 0;
  *(undefined4 *)(lVar5 + 0x54) = 0;
  *(undefined1 *)(lVar5 + 0x50) = 3;
  *(undefined **)(lVar5 + 0x40) = puVar3;
  *(undefined8 *)(lVar5 + 0x48) = 0x200000002;
  *(ushort *)(lVar5 + 0x58) = *(ushort *)(lVar5 + 0x58) & 0xf000 | 0x30;
  plVar7 = (long *)thunk_FUN_10000e0ac();
  FUN_1003a985c(lVar5 + 0x18,plVar7);
  plVar7 = (long *)(**(code **)(*plVar7 + 0x50))(plVar7,"Ability01_B");
  (**(code **)(*plVar7 + 0x18))(plVar7,"AttackToIdleCombat");
  plVar7 = (long *)thunk_FUN_10000e358();
  FUN_1003a985c(lVar5 + 0x18,plVar7);
  plVar7 = (long *)(**(code **)(*plVar7 + 0x58))(plVar7);
  plVar7 = (long *)(**(code **)(*plVar7 + 0x48))(plVar7,"Effect_Kensei_A_Attack02");
  (**(code **)(*plVar7 + 0x78))(plVar7,1);
  lVar5 = FUN_10000c838();
  FUN_1003a985c(lVar6,lVar5);
  puVar3 = PTR_s_Buff_Kensei_A_StepCounter_10185b300;
  *(undefined4 *)(lVar5 + 0x51) = 0;
  *(undefined4 *)(lVar5 + 0x54) = 0;
  *(undefined1 *)(lVar5 + 0x50) = 3;
  *(undefined **)(lVar5 + 0x40) = puVar3;
  *(undefined8 *)(lVar5 + 0x48) = 0x200000001;
  *(ushort *)(lVar5 + 0x58) = *(ushort *)(lVar5 + 0x58) & 0xf000 | 0x30;
  plVar7 = (long *)thunk_FUN_10000e0ac();
  FUN_1003a985c(lVar5 + 0x18,plVar7);
  plVar7 = (long *)(**(code **)(*plVar7 + 0x50))(plVar7,"Ability01_C");
  (**(code **)(*plVar7 + 0x18))(plVar7,"AttackToIdleCombat");
  plVar7 = (long *)thunk_FUN_10000e358();
  FUN_1003a985c(lVar5 + 0x18,plVar7);
  plVar7 = (long *)(**(code **)(*plVar7 + 0x58))(plVar7);
  plVar7 = (long *)(**(code **)(*plVar7 + 0x48))(plVar7,"Effect_Kensei_A_Attack02");
  (**(code **)(*plVar7 + 0x78))(plVar7,1);
  lVar5 = FUN_10000c8e8();
  FUN_1003a985c(&local_80,lVar5);
  lVar6 = FUN_10049ab34(lVar5 + 0x10);
  *(undefined **)(lVar6 + 8) = PTR_s_Buff_Kensei_A_StepCounter_10185b300;
  plVar7 = (long *)FUN_10000bdf0();
  FUN_1003a985c(lVar5 + 200,plVar7);
  plVar7 = (long *)(**(code **)(*plVar7 + 0x50))(plVar7,PTR_s_Buff_Kensei_A_StepCounter_10185b300);
  local_90 = FUN_1003c8efc;
  local_88 = 3;
  plVar7 = (long *)(**(code **)(*plVar7 + 0x18))(plVar7,&local_90);
  local_a0[0] = 3;
  local_98 = 1;
  (**(code **)(*plVar7 + 0x20))(plVar7,local_a0);
  lVar5 = FUN_10000ceb8();
  FUN_1003a985c(&local_80,lVar5);
  *(code **)(lVar5 + 0x20) = FUN_1003c8f10;
  *(undefined8 *)(lVar5 + 0x10) = 0;
  plVar7 = (long *)FUN_10000bdf0();
  FUN_1003a985c(&local_80,plVar7);
  plVar7 = (long *)(**(code **)(*plVar7 + 0x50))(plVar7,PTR_s_Buff_SelfProjectile_10185a530);
  local_90 = (code *)CONCAT44(local_90._4_4_,0x3e4ccccd);
  local_88 = 1;
  plVar7 = (long *)(**(code **)(*plVar7 + 0x18))(plVar7,&local_90);
  (**(code **)(*plVar7 + 0x48))(plVar7,0x85);
  lVar6 = FUN_10000c8e8();
  FUN_1003a985c(&local_80,lVar6);
  lVar5 = FUN_10049ab34(lVar6 + 0x10);
  *(undefined **)(lVar5 + 8) = PTR_s_Buff_Kensei_B_EmpoweredByB_10185b2f8;
  lVar5 = lVar6 + 0xb0;
  plVar7 = (long *)FUN_10000bdf0();
  FUN_1003a985c(lVar5,plVar7);
  plVar7 = (long *)(**(code **)(*plVar7 + 0x50))(plVar7,PTR_s_Buff_Kensei_B_EmpoweredByB_10185b2f8);
  local_90 = FUN_1003c8f24;
  local_88 = 3;
  (**(code **)(*plVar7 + 0x18))(plVar7,&local_90);
  plVar7 = (long *)FUN_10000cd5c();
  FUN_1003a985c(lVar5,plVar7);
  plVar7 = (long *)(**(code **)(*plVar7 + 0x88))(plVar7);
  local_90 = FUN_1003c8f38;
  local_88 = 3;
  plVar7 = (long *)(**(code **)(*plVar7 + 0xa8))(plVar7,&local_90);
  (**(code **)(*plVar7 + 0xb0))(plVar7,1);
  lVar9 = FUN_10000ceb8();
  FUN_1003a985c(lVar5,lVar9);
  *(code **)(lVar9 + 0x20) = FUN_1003c8f38;
  *(undefined8 *)(lVar9 + 0x10) = 0;
  plVar7 = (long *)FUN_10000cd5c();
  FUN_1003a985c(lVar6 + 200,plVar7);
  plVar7 = (long *)(**(code **)(*plVar7 + 0x88))(plVar7);
  local_90 = FUN_1003c8f4c;
  local_88 = 3;
  plVar7 = (long *)(**(code **)(*plVar7 + 0xa8))(plVar7,&local_90);
  (**(code **)(*plVar7 + 0xb0))(plVar7,1);
  lVar5 = FUN_10000ceb8();
  FUN_1003a985c(lVar6 + 200,lVar5);
  *(code **)(lVar5 + 0x20) = FUN_1003c8f4c;
  *(undefined8 *)(lVar5 + 0x10) = 0;
  uVar8 = FUN_10000f9c0();
  FUN_1003a985c(&local_80,uVar8);
  lVar5 = FUN_1003e10f0();
  bVar1 = *(byte *)(lVar5 + 0xe5);
  uVar10 = _cosf(0x3f860a92);
  lVar5 = FUN_1003e10f0();
  bVar2 = *(byte *)(lVar5 + 0xe5);
  lVar5 = FUN_10000ed74();
  FUN_1003a985c(&local_80,lVar5);
  *(undefined8 *)(lVar5 + 0x18) = 0;
  *(undefined1 *)(lVar5 + 0x20) = 1;
  *(undefined8 *)(lVar5 + 0x24) = 0;
  *(undefined8 *)(lVar5 + 0x34) = 0;
  *(undefined8 *)(lVar5 + 0x2c) = 0;
  *(undefined4 *)(lVar5 + 0x3c) = 0;
  uVar8 = NEON_fmov(0xbf800000,4);
  *(undefined8 *)(lVar5 + 0x40) = uVar8;
  *(undefined4 *)(lVar5 + 0x48) = uVar10;
  *(undefined8 *)(lVar5 + 0x4c) = 0x3f800000bf800000;
  *(undefined1 *)(lVar5 + 0x54) = 0xff;
  *(undefined8 *)(lVar5 + 0x60) = 0xffffffff00000000;
  *(undefined8 *)(lVar5 + 0x58) = 0xffffffff00040000;
  *(byte *)(lVar5 + 0x6a) = bVar1 | 0x14;
  *(undefined2 *)(lVar5 + 0x68) = 0x4120;
  bVar4 = DAT_101d23a38 != '\0';
  *(undefined4 *)(lVar5 + 0xa4) = 0x40a00000;
  *(byte *)(lVar5 + 0xa8) = *(byte *)(lVar5 + 0xa8) & 0xf0 | bVar4;
  lVar5 = FUN_10000ed74();
  FUN_1003a985c(&local_80,lVar5);
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
  *(byte *)(lVar5 + 0x6a) = bVar2 | 0x14;
  *(undefined2 *)(lVar5 + 0x68) = 0x4120;
  bVar4 = DAT_101d23a38 != '\0';
  *(undefined4 *)(lVar5 + 0xa4) = 0x3fa66666;
  *(byte *)(lVar5 + 0xa8) = *(byte *)(lVar5 + 0xa8) & 0xf0 | bVar4;
  plVar7 = (long *)FUN_10000bed8();
  FUN_1003a985c(&local_80,plVar7);
  plVar7 = (long *)(**(code **)(*plVar7 + 0x70))(plVar7,PTR_s_Buff_Kensei_A_DealDamage_10185b308);
  local_90 = (code *)CONCAT44(local_90._4_4_,0x3e4ccccd);
  local_88 = 1;
  (**(code **)(*plVar7 + 0x18))(plVar7,&local_90);
  lVar5 = FUN_10000c8e8();
  FUN_1003a985c(&local_80,lVar5);
  lVar6 = FUN_10049ab34(lVar5 + 0x10);
  *(undefined **)(lVar6 + 8) = PTR_s_Buff_Kensei_B_EmpoweredByB_10185b2f8;
  plVar7 = (long *)FUN_10000bed8();
  FUN_1003a985c(lVar5 + 0xb0,plVar7);
  plVar7 = (long *)(**(code **)(*plVar7 + 0x70))(plVar7,PTR_s_Buff_Kensei_A_Slow_10185b310);
  local_90 = FUN_1003c8f60;
  local_88 = 3;
  (**(code **)(*plVar7 + 0x18))(plVar7,&local_90);
  uVar8 = FUN_10000c784();
  FUN_1003a985c(&local_80,uVar8);
  plVar7 = (long *)FUN_10000bdf0();
  FUN_1003a985c(&local_80,plVar7);
  plVar7 = (long *)(**(code **)(*plVar7 + 0x50))(plVar7,PTR_s_Buff_Kensei_A_StepCounter_10185b300);
  local_90 = FUN_1003c8efc;
  local_88 = 3;
  plVar7 = (long *)(**(code **)(*plVar7 + 0x18))(plVar7,&local_90);
  local_a0[0] = 0;
  local_98 = 1;
  (**(code **)(*plVar7 + 0x20))(plVar7,local_a0);
  lVar5 = FUN_10000dbb0();
  FUN_1003a985c(&local_80,lVar5);
  FUN_1003a4e5c(&local_90,PTR_s_Buff_Kensei_A_StepCounter_10185b300);
  *(undefined4 *)(lVar5 + 0x10) = local_90._0_4_;
  *(undefined4 *)(lVar5 + 0x14) = 0xffffffff;
  *(byte *)(lVar5 + 0x18) = *(byte *)(lVar5 + 0x18) & 0xfe;
  uVar8 = FUN_10000bb2c();
  FUN_1003a985c(&local_80,uVar8);
  lVar5 = FUN_10000c540();
  FUN_1003a985c(&local_80,lVar5);
  *(undefined **)(lVar5 + 0x10) = PTR_s_Buff_Kensei_B_EmpoweredByB_10185b2f8;
  uVar8 = FUN_10000c784();
  FUN_1003a985c(&local_80,uVar8);
  lVar5 = FUN_10000d8b8();
  FUN_1003a985c(&local_80,lVar5);
  *(undefined1 *)(lVar5 + 0x10) = 0;
  return local_80;
}




undefined8 FUN_1003888d0(void)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  code *local_60;
  undefined4 local_58;
  code *local_50;
  undefined4 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  local_40 = 0;
  uStack_38 = 0;
  lVar1 = FUN_10000ef8c();
  FUN_1003a985c(&local_40,lVar1);
  *(byte *)(lVar1 + 0x10) = *(byte *)(lVar1 + 0x10) & 0xe7 | 4;
  lVar1 = FUN_10000d8b8();
  FUN_1003a985c(&local_40,lVar1);
  *(undefined1 *)(lVar1 + 0x10) = 1;
  plVar2 = (long *)thunk_FUN_10000e0ac();
  FUN_1003a985c(&local_40,plVar2);
  (**(code **)(*plVar2 + 0x50))(plVar2,"Ability02_AttackAndLeap");
  plVar2 = (long *)thunk_FUN_10000e358();
  FUN_1003a985c(&local_40,plVar2);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x68))(plVar2,"Bone_Weapon");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Kensei_B_Attack");
  (**(code **)(*plVar2 + 0x78))(plVar2,1);
  plVar2 = (long *)thunk_FUN_10000e5dc();
  FUN_1003a985c(&local_40,plVar2);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x58))(plVar2,"Sound_Kensei_B_Attack");
  uVar3 = FUN_1010a1520();
  lVar1 = FUN_1010a0e0c(uVar3,0,"*KindredSoundBalance*",0);
  FUN_1003c8e98(*(undefined4 *)(lVar1 + 0x4bc));
  (**(code **)(*plVar2 + 0x28))(plVar2);
  lVar1 = FUN_10000ceb8();
  FUN_1003a985c(&local_40,lVar1);
  *(code **)(lVar1 + 0x20) = FUN_1003c8f74;
  *(undefined8 *)(lVar1 + 0x10) = 0;
  uVar3 = FUN_10000bc94();
  FUN_1003a985c(&local_40,uVar3);
  plVar2 = (long *)FUN_10000cb8c();
  FUN_1003a985c(&local_40,plVar2);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x50))(plVar2);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x38))(plVar2,"DAMAGE",1);
  (**(code **)(*plVar2 + 0x70))(plVar2,1);
  plVar2 = (long *)thunk_FUN_10000e5dc();
  FUN_1003a985c(&local_40,plVar2);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x58))
                             (plVar2,PTR_s_Sound_Kensei_Default_Attack_Hit__10185b2b0);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x18))
                             (plVar2,PTR_s_Sound_Kensei_Default_Attack_Hit__10185b2b8);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x18))
                             (plVar2,PTR_s_Sound_Kensei_Default_Attack_Hit__10185b2c0);
  uVar3 = FUN_1010a1520();
  lVar1 = FUN_1010a0e0c(uVar3,0,"*KindredSoundBalance*",0);
  FUN_1003c8e98(*(undefined4 *)(lVar1 + 0x4bc));
  (**(code **)(*plVar2 + 0x28))(plVar2);
  plVar2 = (long *)FUN_10000bed8();
  FUN_1003a985c(&local_40,plVar2);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x70))
                             (plVar2,PTR_s_Buff_Kensei_DefaultAttack_Effect_10185b2e0);
  local_50 = (code *)CONCAT44(local_50._4_4_,0x3dcccccd);
  local_48 = 1;
  (**(code **)(*plVar2 + 0x18))(plVar2,&local_50);
  uVar3 = FUN_10000c784();
  FUN_1003a985c(&local_40,uVar3);
  uVar3 = FUN_10000c6d4();
  FUN_1003a985c(&local_40,uVar3);
  plVar2 = (long *)FUN_10000cd5c();
  FUN_1003a985c(&local_40,plVar2);
  local_50 = FUN_1003c8f88;
  local_48 = 3;
  plVar2 = (long *)(**(code **)(*plVar2 + 0x80))(plVar2,&local_50);
  local_60 = FUN_1003c8f9c;
  local_58 = 3;
  plVar2 = (long *)(**(code **)(*plVar2 + 0xa8))(plVar2,&local_60);
  (**(code **)(*plVar2 + 0xb0))(plVar2,0);
  lVar1 = FUN_10000ceb8();
  FUN_1003a985c(&local_40,lVar1);
  *(code **)(lVar1 + 0x20) = FUN_1003c8f9c;
  *(undefined8 *)(lVar1 + 0x10) = 0;
  plVar2 = (long *)thunk_FUN_10000e358();
  FUN_1003a985c(&local_40,plVar2);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x58))(plVar2);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Kensei_B_Landing");
  (**(code **)(*plVar2 + 0x78))(plVar2,0);
  uVar3 = FUN_10000f9c0();
  FUN_1003a985c(&local_40,uVar3);
  plVar2 = (long *)FUN_10000bdf0();
  FUN_1003a985c(&local_40,plVar2);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x50))(plVar2,PTR_s_Buff_Kensei_B_EmpoweredByB_10185b2f8);
  local_50 = FUN_1003c8f24;
  local_48 = 3;
  (**(code **)(*plVar2 + 0x18))(plVar2,&local_50);
  lVar1 = FUN_10000e7fc();
  FUN_1003a985c(&local_40,lVar1);
  *(undefined4 *)(lVar1 + 0x10) = 0x3e99999a;
  lVar1 = FUN_10000d8b8();
  FUN_1003a985c(&local_40,lVar1);
  *(undefined1 *)(lVar1 + 0x10) = 0;
  lVar1 = FUN_10000c8e8();
  FUN_1003a985c(&local_40,lVar1);
  lVar4 = FUN_10049ab34(lVar1 + 0x10);
  *(undefined **)(lVar4 + 8) = PTR_s_Buff_Kensei_Talent_TalentB_10185b318;
  plVar2 = (long *)FUN_10000bdf0();
  FUN_1003a985c(lVar1 + 0xb0,plVar2);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x50))(plVar2,PTR_s_Buff_Invulnerable_10185a588);
  local_50 = FUN_1003c8fb0;
  local_48 = 3;
  (**(code **)(*plVar2 + 0x18))(plVar2,&local_50);
  plVar2 = (long *)FUN_10000bdf0();
  FUN_1003a985c(&local_40,plVar2);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x50))
                             (plVar2,PTR_s_Buff_Kensei_B_FortifiedHealth_Co_10185b320);
  local_50 = FUN_1003c8fe4;
  local_48 = 3;
  (**(code **)(*plVar2 + 0x18))(plVar2,&local_50);
  lVar1 = FUN_10000ceb8();
  FUN_1003a985c(&local_40,lVar1);
  *(undefined4 *)(lVar1 + 0x2c) = 0x3ecccccd;
  *(undefined8 *)(lVar1 + 0x10) = 0;
  plVar2 = (long *)thunk_FUN_10000e0ac();
  FUN_1003a985c(&local_40,plVar2);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x50))(plVar2,"Ability02_Stance");
  (**(code **)(*plVar2 + 0x20))();
  return local_40;
}




undefined8 FUN_100388e10(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
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
  *(undefined **)(lVar2 + 8) = PTR_s_Buff_Kensei_B_EmpoweredByB_10185b2f8;
  plVar3 = (long *)thunk_FUN_10000e0ac();
  FUN_1003a985c(lVar1 + 0xb0,plVar3);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x50))(plVar3,"Ability03_Enhanced");
  (**(code **)(*plVar3 + 0x18))(plVar3,"AttackToIdleCombat");
  plVar3 = (long *)thunk_FUN_10000e5dc();
  FUN_1003a985c(lVar1 + 0xb0,plVar3);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x58))(plVar3,"Sound_Kensei_C_Dash");
  uVar4 = FUN_1010a1520();
  lVar2 = FUN_1010a0e0c(uVar4,0,"*KindredSoundBalance*",0);
  FUN_1003c8e98(*(undefined4 *)(lVar2 + 0x4c0));
  (**(code **)(*plVar3 + 0x28))(plVar3);
  plVar3 = (long *)thunk_FUN_10000e0ac();
  FUN_1003a985c(lVar1 + 200,plVar3);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x50))(plVar3,"Ability03");
  (**(code **)(*plVar3 + 0x18))(plVar3,"AttackToIdleCombat");
  plVar3 = (long *)thunk_FUN_10000e5dc();
  FUN_1003a985c(lVar1 + 200,plVar3);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x58))(plVar3,"Sound_Kensei_C_Dash_Empowered");
  uVar4 = FUN_1010a1520();
  lVar1 = FUN_1010a0e0c(uVar4,0,"*KindredSoundBalance*",0);
  FUN_1003c8e98(*(undefined4 *)(lVar1 + 0x4c0));
  (**(code **)(*plVar3 + 0x28))(plVar3);
  lVar1 = FUN_10000c8e8();
  FUN_1003a985c(&local_50,lVar1);
  lVar2 = FUN_10049ab34(lVar1 + 0x10);
  *(undefined **)(lVar2 + 8) = PTR_s_Buff_Kensei_B_EmpoweredByB_10185b2f8;
  plVar3 = (long *)FUN_10000bdf0();
  FUN_1003a985c(lVar1 + 0xb0,plVar3);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x50))(plVar3,PTR_s_Buff_Kensei_B_EmpoweredByB_10185b2f8);
  local_60 = FUN_1003c8f24;
  local_58 = 3;
  (**(code **)(*plVar3 + 0x18))(plVar3,&local_60);
  lVar1 = FUN_10000ceb8();
  FUN_1003a985c(&local_50,lVar1);
  *(undefined4 *)(lVar1 + 0x2c) = 0x3ecccccd;
  *(undefined8 *)(lVar1 + 0x10) = 0;
  plVar3 = (long *)thunk_FUN_10000e358();
  FUN_1003a985c(&local_50,plVar3);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x68))(plVar3,"Bone_Weapon");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Kensei_C_Cast");
  (**(code **)(*plVar3 + 0x78))(plVar3,1);
  lVar1 = FUN_10000ceb8();
  FUN_1003a985c(&local_50,lVar1);
  *(undefined4 *)(lVar1 + 0x2c) = 0x3dcccccd;
  *(undefined8 *)(lVar1 + 0x10) = 0;
  lVar1 = FUN_10000c8e8();
  FUN_1003a985c(&local_50,lVar1);
  lVar2 = FUN_10049ab34(lVar1 + 0x10);
  *(undefined **)(lVar2 + 8) = PTR_s_Buff_Kensei_B_EmpoweredByB_10185b2f8;
  plVar3 = (long *)thunk_FUN_10000e358();
  FUN_1003a985c(lVar1 + 200,plVar3);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x58))(plVar3);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Kensei_C_Dash");
  local_60._0_4_ = 0x3eb33333;
  local_58 = 1;
  plVar3 = (long *)(**(code **)(*plVar3 + 0x60))(plVar3,&local_60);
  (**(code **)(*plVar3 + 0x78))(plVar3,1);
  plVar3 = (long *)thunk_FUN_10000e358();
  FUN_1003a985c(lVar1 + 0xb0,plVar3);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x58))(plVar3);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Kensei_C_Dash_Empowered");
  local_60 = (code *)CONCAT44(local_60._4_4_,0x3eb33333);
  local_58 = 1;
  plVar3 = (long *)(**(code **)(*plVar3 + 0x60))(plVar3,&local_60);
  (**(code **)(*plVar3 + 0x78))(plVar3,1);
  lVar1 = FUN_10000ceb8();
  FUN_1003a985c(&local_50,lVar1);
  *(undefined4 *)(lVar1 + 0x2c) = 0x3e4ccccd;
  *(undefined8 *)(lVar1 + 0x10) = 0;
  plVar3 = (long *)FUN_10000bdf0();
  FUN_1003a985c(&local_50,plVar3);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x50))(plVar3,PTR_s_Buff_SelfProjectile_10185a530);
  local_60 = FUN_1003c8ff8;
  local_58 = 3;
  plVar3 = (long *)(**(code **)(*plVar3 + 0x18))(plVar3,&local_60);
  (**(code **)(*plVar3 + 0x48))(plVar3,0x86);
  plVar3 = (long *)FUN_10000cd5c();
  FUN_1003a985c(&local_50,plVar3);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x88))(plVar3);
  local_60 = FUN_1003c9028;
  local_58 = 3;
  plVar3 = (long *)(**(code **)(*plVar3 + 0xa8))(plVar3,&local_60);
  (**(code **)(*plVar3 + 0xb0))(plVar3,1);
  lVar1 = FUN_10000ceb8();
  FUN_1003a985c(&local_50,lVar1);
  *(code **)(lVar1 + 0x20) = FUN_1003c9028;
  *(undefined8 *)(lVar1 + 0x10) = 0;
  uVar4 = FUN_10000f9c0();
  FUN_1003a985c(&local_50,uVar4);
  lVar1 = FUN_10000ceb8();
  FUN_1003a985c(&local_50,lVar1);
  *(code **)(lVar1 + 0x20) = FUN_1003c903c;
  *(undefined8 *)(lVar1 + 0x10) = 0;
  uVar4 = FUN_10000bb2c();
  FUN_1003a985c(&local_50,uVar4);
  lVar1 = FUN_10000c540();
  FUN_1003a985c(&local_50,lVar1);
  *(undefined **)(lVar1 + 0x10) = PTR_s_Buff_Kensei_B_EmpoweredByB_10185b2f8;
  uVar4 = FUN_10000c784();
  FUN_1003a985c(&local_50,uVar4);
  lVar1 = FUN_10000d8b8();
  FUN_1003a985c(&local_50,lVar1);
  *(undefined1 *)(lVar1 + 0x10) = 0;
  return local_50;
}




void FUN_100389370(void)

{
  FUN_1003c9050("Attack","DefaultAttack_Spawn",0xbc,0);
  return;
}




void FUN_10038938c(void)

{
  FUN_1003c9050("AltAttack","AltAttack_Spawn",0xbd,0);
  return;
}




void FUN_1003893a8(void)

{
  FUN_1003c9050("CritAttack","CritAttack_Spawn",0xbe,0);
  return;
}




void FUN_1003893c4(void)

{
  FUN_1003c9050("Ability01_ChargingAttack","ChargingAttack_Spawn",0xbf,1);
  return;
}




undefined8 FUN_1003893e0(void)

{
  undefined4 uVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_30 = 0;
  uStack_28 = 0;
  lVar2 = FUN_10000ef8c();
  FUN_1003a985c(&local_30,lVar2);
  *(byte *)(lVar2 + 0x10) = *(byte *)(lVar2 + 0x10) & 0xe7 | 4;
  lVar2 = FUN_10000dff8();
  FUN_1003a985c(&local_30,lVar2);
  *(undefined2 *)(lVar2 + 0x28) = 0x100;
  *(code **)(lVar2 + 0x30) = FUN_1003a24a0;
  uVar1 = FUN_1004d2524("Ability01_ChargedAttack");
  uVar1 = FUN_100015208("Ability01_ChargedAttack",uVar1,0x12345678);
  *(undefined4 *)(lVar2 + 0x10) = uVar1;
  uVar1 = FUN_1004d2524("AttackToIdle");
  uVar1 = FUN_100015208("AttackToIdle",uVar1,0x12345678);
  *(undefined4 *)(lVar2 + 0x20) = uVar1;
  lVar2 = FUN_10000f250();
  FUN_1003a985c(&local_30,lVar2);
  *(undefined4 *)(lVar2 + 0x10) = 0xc0;
  FUN_1003d266c(lVar2,"ChargedAttack_Spawn");
  plVar3 = (long *)FUN_10000c5ec();
  FUN_1003a985c(&local_30,plVar3);
  (**(code **)(*plVar3 + 0x50))(plVar3,PTR_s_Buff_Ylva_A_Charge_Control_10185b328);
  plVar3 = (long *)thunk_FUN_10000e5dc();
  FUN_1003a985c(&local_30,plVar3);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x58))(plVar3,"Sound_Ylva_A_Fully_Charged_Shot");
  uVar4 = FUN_1010a1520();
  lVar2 = FUN_1010a0e0c(uVar4,0,"*KindredSoundBalance*",0);
  FUN_1003c9258(*(undefined4 *)(lVar2 + 0x580));
  (**(code **)(*plVar3 + 0x28))(plVar3);
  uVar4 = FUN_10000f034();
  FUN_1003a985c(&local_30,uVar4);
  return local_30;
}




undefined8 FUN_10038956c(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *local_40;
  undefined4 local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_30 = 0;
  uStack_28 = 0;
  plVar1 = (long *)FUN_10000bdf0();
  FUN_1003a985c(&local_30,plVar1);
  plVar1 = (long *)(**(code **)(*plVar1 + 0x50))(plVar1,PTR_s_Buff_Ylva_A_Charge_Control_10185b328);
  local_40 = FUN_1003c92bc;
  local_38 = 3;
  (**(code **)(*plVar1 + 0x18))(plVar1,&local_40);
  uVar2 = FUN_10000c6d4();
  FUN_1003a985c(&local_30,uVar2);
  uVar2 = FUN_10000f034();
  FUN_1003a985c(&local_30,uVar2);
  return local_30;
}




undefined8 FUN_100389604(void)

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
  *(undefined **)(lVar2 + 0x10) = PTR_s_Buff_Ylva_A_Charge_Control_10185b328;
  uVar1 = FUN_10000c784();
  FUN_1003a985c(&local_30,uVar1);
  uVar1 = FUN_10000f034();
  FUN_1003a985c(&local_30,uVar1);
  return local_30;
}




undefined8 FUN_10038967c(void)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  code *local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  local_60 = 0;
  uStack_58 = 0;
  lVar1 = FUN_10000d8b8();
  FUN_1003a985c(&local_60,lVar1);
  *(undefined1 *)(lVar1 + 0x10) = 1;
  uVar2 = FUN_10000ef8c();
  FUN_1003a985c(&local_60,uVar2);
  plVar3 = (long *)thunk_FUN_10000e0ac();
  FUN_1003a985c(&local_60,plVar3);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x50))(plVar3,"Ability02");
  (**(code **)(*plVar3 + 0x18))(plVar3,"AttackToIdle");
  plVar3 = (long *)thunk_FUN_10000e5dc();
  FUN_1003a985c(&local_60,plVar3);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x58))(plVar3,"Sound_Ylva_B_Leap");
  uVar2 = FUN_1010a1520();
  lVar1 = FUN_1010a0e0c(uVar2,0,"*KindredSoundBalance*",0);
  FUN_1003c9258(*(undefined4 *)(lVar1 + 0x588));
  (**(code **)(*plVar3 + 0x28))(plVar3);
  plVar3 = (long *)FUN_10000cd5c();
  FUN_1003a985c(&local_60,plVar3);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x68))(0,0x3fd9999a,0x40333333,0x40133333,plVar3);
  plVar3 = (long *)(**(code **)(*plVar3 + 0xb0))(plVar3,1);
  local_70 = FUN_1003c9338;
  local_68 = 3;
  plVar3 = (long *)(**(code **)(*plVar3 + 0xa8))(plVar3,&local_70);
  (**(code **)(*plVar3 + 0xb8))(0x41200000);
  lVar1 = FUN_10000ceb8();
  FUN_1003a985c(&local_60,lVar1);
  *(code **)(lVar1 + 0x20) = FUN_1003c9338;
  *(undefined8 *)(lVar1 + 0x10) = 0;
  uVar2 = FUN_10000f9c0();
  FUN_1003a985c(&local_60,uVar2);
  lVar4 = FUN_10000c8e8();
  FUN_1003a985c(&local_60,lVar4);
  lVar1 = FUN_10049ac6c(lVar4 + 0x10);
  *(code **)(lVar1 + 8) = FUN_1003c92d0;
  lVar1 = lVar4 + 0xb0;
  plVar3 = (long *)FUN_10000cc74();
  FUN_1003a985c(lVar1,plVar3);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x50))(plVar3);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))(plVar3,"DAMAGE",2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x70))(plVar3,0);
  local_70 = FUN_1003c934c;
  local_68 = 3;
  (**(code **)(*plVar3 + 0x90))(plVar3,&local_70);
  lVar5 = FUN_10000e1b4();
  FUN_1003a985c(lVar1,lVar5);
  *(undefined8 *)(lVar5 + 0x40) = 0;
  *(ushort *)(lVar5 + 0x80) = *(ushort *)(lVar5 + 0x80) & 0xffec | 2;
  *(uint *)(lVar5 + 0x3c) = (uint)lVar5 & 0xffff;
  *(undefined8 *)(lVar5 + 0x20) = 0;
  *(undefined8 *)(lVar5 + 0x28) = 1;
  *(undefined4 *)(lVar5 + 0x10) = 0xbf5f4910;
  plVar3 = (long *)thunk_FUN_10000e5dc();
  FUN_1003a985c(lVar1,plVar3);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x58))(plVar3,"Sound_Ylva_B_Attack_Empowered");
  uVar2 = FUN_1010a1520();
  lVar1 = FUN_1010a0e0c(uVar2,0,"*KindredSoundBalance*",0);
  FUN_1003c9258(*(undefined4 *)(lVar1 + 0x590));
  (**(code **)(*plVar3 + 0x28))(plVar3);
  lVar4 = lVar4 + 200;
  plVar3 = (long *)FUN_10000cc74();
  FUN_1003a985c(lVar4,plVar3);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x50))(plVar3);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))(plVar3,"DAMAGE",2);
  (**(code **)(*plVar3 + 0x70))(plVar3,0);
  lVar1 = FUN_10000e1b4();
  FUN_1003a985c(lVar4,lVar1);
  *(undefined8 *)(lVar1 + 0x40) = 0;
  *(ushort *)(lVar1 + 0x80) = *(ushort *)(lVar1 + 0x80) & 0xffec | 2;
  *(uint *)(lVar1 + 0x3c) = (uint)lVar1 & 0xffff;
  *(undefined8 *)(lVar1 + 0x20) = 0;
  *(undefined8 *)(lVar1 + 0x28) = 1;
  *(undefined4 *)(lVar1 + 0x10) = 0xbd770b3b;
  plVar3 = (long *)thunk_FUN_10000e5dc();
  FUN_1003a985c(lVar4,plVar3);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x58))(plVar3,"Sound_Ylva_B_Attack");
  uVar2 = FUN_1010a1520();
  lVar1 = FUN_1010a0e0c(uVar2,0,"*KindredSoundBalance*",0);
  FUN_1003c9258(*(undefined4 *)(lVar1 + 0x58c));
  (**(code **)(*plVar3 + 0x28))(plVar3);
  plVar3 = (long *)FUN_10000bdf0();
  FUN_1003a985c(&local_60,plVar3);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x50))(plVar3,PTR_s_Buff_Ylva_B_Adrenaline_10185b330);
  local_70 = FUN_1003c9360;
  local_68 = 3;
  (**(code **)(*plVar3 + 0x18))(plVar3,&local_70);
  lVar1 = FUN_10000e7fc();
  FUN_1003a985c(&local_60,lVar1);
  *(undefined4 *)(lVar1 + 0x10) = 0x3f000000;
  lVar1 = FUN_10000d8b8();
  FUN_1003a985c(&local_60,lVar1);
  *(undefined1 *)(lVar1 + 0x10) = 0;
  lVar1 = FUN_10000ceb8();
  FUN_1003a985c(&local_60,lVar1);
  *(undefined4 *)(lVar1 + 0x2c) = 0x3e4ccccd;
  *(undefined8 *)(lVar1 + 0x10) = 0;
  return local_60;
}




undefined8 FUN_100389b04(void)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_30 = 0;
  uStack_28 = 0;
  uVar1 = FUN_10000d8b8();
  FUN_1003a985c(&local_30,uVar1);
  uVar1 = FUN_10000ef8c();
  FUN_1003a985c(&local_30,uVar1);
  plVar2 = (long *)thunk_FUN_10000e5dc();
  FUN_1003a985c(&local_30,plVar2);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x58))(plVar2,"Sound_Ylva_C_Place");
  uVar1 = FUN_1010a1520();
  lVar3 = FUN_1010a0e0c(uVar1,0,"*KindredSoundBalance*",0);
  FUN_1003c9258(*(undefined4 *)(lVar3 + 0x594));
  (**(code **)(*plVar2 + 0x28))(plVar2);
  plVar2 = (long *)thunk_FUN_10000e0ac();
  FUN_1003a985c(&local_30,plVar2);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x50))(plVar2,"Ability03");
  (**(code **)(*plVar2 + 0x18))(plVar2,"AttackToIdle");
  lVar3 = FUN_10000c3b0();
  FUN_1003a985c(&local_30,lVar3);
  *(code **)(lVar3 + 0x10) = FUN_1003c9540;
  plVar2 = (long *)FUN_10000f300();
  FUN_1003a985c(&local_30,plVar2);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x50))(plVar2,"*Ylva_Trap*",0);
  (**(code **)(*plVar2 + 0x20))(plVar2,FUN_10048fb04);
  uVar1 = FUN_10000f034();
  FUN_1003a985c(&local_30,uVar1);
  lVar3 = FUN_10000ceb8();
  FUN_1003a985c(&local_30,lVar3);
  *(undefined4 *)(lVar3 + 0x2c) = 0x3e99999a;
  *(undefined8 *)(lVar3 + 0x10) = 0;
  lVar3 = FUN_10000d8b8();
  FUN_1003a985c(&local_30,lVar3);
  *(undefined1 *)(lVar3 + 0x10) = 0;
  return local_30;
}




undefined8 FUN_100389c9c(void)

{
  long *plVar1;
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_30 = 0;
  uStack_28 = 0;
  plVar1 = (long *)thunk_FUN_10000e0ac();
  FUN_1003a985c(&local_30,plVar1);
  plVar1 = (long *)(**(code **)(*plVar1 + 0x50))(plVar1,"Spawn");
  (**(code **)(*plVar1 + 0x18))(plVar1,"AttackToIdle");
  return local_30;
}




undefined8 FUN_100389d04(void)

{
  byte bVar1;
  bool bVar2;
  undefined4 uVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  code *local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  local_50 = 0;
  uStack_48 = 0;
  plVar4 = (long *)thunk_FUN_10000e5dc();
  FUN_1003a985c(&local_50,plVar4);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x58))(plVar4,"Sound_Ylva_C_Explosion");
  uVar5 = FUN_1010a1520();
  lVar6 = FUN_1010a0e0c(uVar5,0,"*KindredSoundBalance*",0);
  FUN_1003c9258(*(undefined4 *)(lVar6 + 0x59c));
  (**(code **)(*plVar4 + 0x28))(plVar4);
  lVar6 = FUN_10000dff8();
  FUN_1003a985c(&local_50,lVar6);
  *(undefined2 *)(lVar6 + 0x28) = 0x100;
  *(undefined8 *)(lVar6 + 0x30) = 0;
  uVar3 = FUN_1004d2524("Die");
  uVar3 = FUN_100015208("Die",uVar3,0x12345678);
  *(undefined4 *)(lVar6 + 0x10) = uVar3;
  *(undefined4 *)(lVar6 + 0x20) = 0;
  plVar4 = (long *)thunk_FUN_10000e358();
  FUN_1003a985c(&local_50,plVar4);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x58))(plVar4);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x48))(plVar4,"Effect_Ylva_C_Trap_Active");
  local_60 = FUN_1003c954c;
  local_58 = 3;
  (**(code **)(*plVar4 + 0x60))(plVar4,&local_60);
  lVar6 = FUN_10000ceb8();
  FUN_1003a985c(&local_50,lVar6);
  *(code **)(lVar6 + 0x20) = FUN_1003c954c;
  *(undefined8 *)(lVar6 + 0x10) = 0;
  plVar4 = (long *)thunk_FUN_10000e358();
  FUN_1003a985c(&local_50,plVar4);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x58))(plVar4);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x48))(plVar4,"Effect_Ylva_C_Trap_Explode");
  local_60 = FUN_1003c9560;
  local_58 = 3;
  (**(code **)(*plVar4 + 0xd0))(plVar4,&local_60);
  lVar6 = FUN_1003e10f0();
  bVar1 = *(byte *)(lVar6 + 0xe5);
  lVar6 = FUN_10000ed74();
  FUN_1003a985c(&local_50,lVar6);
  *(undefined8 *)(lVar6 + 0x18) = 0;
  *(undefined1 *)(lVar6 + 0x20) = 1;
  *(undefined8 *)(lVar6 + 0x24) = 0;
  *(undefined8 *)(lVar6 + 0x34) = 0;
  *(undefined8 *)(lVar6 + 0x2c) = 0;
  *(undefined4 *)(lVar6 + 0x3c) = 0;
  *(undefined8 *)(lVar6 + 0x48) = 0xbf800000c0000000;
  *(undefined8 *)(lVar6 + 0x40) = 0xbf800000bf800000;
  *(undefined4 *)(lVar6 + 0x50) = 0x3f800000;
  *(undefined1 *)(lVar6 + 0x54) = 0xff;
  *(undefined8 *)(lVar6 + 0x60) = 0xffffffff00000000;
  *(undefined8 *)(lVar6 + 0x58) = 0xffffffff00040000;
  *(byte *)(lVar6 + 0x6a) = bVar1 | 0x14;
  *(undefined2 *)(lVar6 + 0x68) = 0x4120;
  bVar2 = DAT_101d23a38 != '\0';
  *(code **)(lVar6 + 0x78) = FUN_1003c9560;
  *(byte *)(lVar6 + 0xa8) = *(byte *)(lVar6 + 0xa8) & 0xf0 | bVar2;
  plVar4 = (long *)FUN_10000bed8();
  FUN_1003a985c(&local_50,plVar4);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x68))(plVar4);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x70))(plVar4,PTR_s_Buff_Ylva_C_Trap_Root_10185b340);
  local_60 = FUN_1003c9574;
  local_58 = 3;
  (**(code **)(*plVar4 + 0x18))(plVar4,&local_60);
  plVar4 = (long *)FUN_10000bed8();
  FUN_1003a985c(&local_50,plVar4);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x68))(plVar4);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x70))(plVar4,PTR_s_Buff_Ylva_C_Trap_Damage_10185b348);
  local_60._0_4_ = 0x3dcccccd;
  local_58 = 1;
  (**(code **)(*plVar4 + 0x18))(plVar4,&local_60);
  uVar5 = FUN_10000c784();
  FUN_1003a985c(&local_50,uVar5);
  plVar4 = (long *)FUN_10000bdf0();
  FUN_1003a985c(&local_50,plVar4);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))(plVar4,PTR_s_Buff_Ylva_C_Trap_Disarmed_10185b350);
  local_60 = (code *)CONCAT44(local_60._4_4_,0x40a00000);
  local_58 = 1;
  (**(code **)(*plVar4 + 0x18))(plVar4,&local_60);
  return local_50;
}




undefined8 FUN_10038a058(void)

{
  long lVar1;
  long *plVar2;
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_30 = 0;
  uStack_28 = 0;
  lVar1 = FUN_10000c3b0();
  FUN_1003a985c(&local_30,lVar1);
  *(code **)(lVar1 + 0x10) = FUN_1003c9588;
  plVar2 = (long *)FUN_10000f300();
  FUN_1003a985c(&local_30,plVar2);
  (**(code **)(*plVar2 + 0x50))(plVar2,"*Ylva_Trap_ShatteredFang*",0);
  return local_30;
}




void FUN_10038a0d0(void)

{
  FUN_1003c9594("Attack","Effect_Magnus_BasicAttack_Cast","A_Projectile",0x87);
  return;
}




void FUN_10038a0f0(void)

{
  FUN_1003c9594("AltAttack","Effect_Magnus_BasicAttack_Cast","A_Projectile",0x88);
  return;
}




void FUN_10038a110(void)

{
  FUN_1003c9594("CritAttack","Effect_Magnus_BasicAttack_Crit_Cast","A_Projectile",0x89);
  return;
}




undefined8 FUN_10038a130(void)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  code *local_40;
  undefined4 local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_30 = 0;
  uStack_28 = 0;
  uVar1 = FUN_10000ef8c();
  FUN_1003a985c(&local_30,uVar1);
  plVar2 = (long *)thunk_FUN_10000e0ac();
  FUN_1003a985c(&local_30,plVar2);
  (**(code **)(*plVar2 + 0x58))(plVar2,"PerkProcAttack");
  lVar3 = FUN_10000ceb8();
  FUN_1003a985c(&local_30,lVar3);
  *(code **)(lVar3 + 0x10) = FUN_1003a24a0;
  *(code **)(lVar3 + 0x18) = FUN_1003c5148;
  plVar2 = (long *)thunk_FUN_10000e358();
  FUN_1003a985c(&local_30,plVar2);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x68))(plVar2,"Bone_RightHand");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Magnus_Perk_Mark_Snap");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x80))(plVar2,0);
  (**(code **)(*plVar2 + 0xb0))(plVar2,1);
  plVar2 = (long *)thunk_FUN_10000e5dc();
  FUN_1003a985c(&local_30,plVar2);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x58))(plVar2,"Sound_Magnus_Perk_Attack_1");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x18))(plVar2,"Sound_Magnus_Perk_Attack_2");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x18))(plVar2,"Sound_Magnus_Perk_Attack_3");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x18))(plVar2,"Sound_Magnus_Perk_Attack_4");
  uVar1 = FUN_1010a1520();
  lVar3 = FUN_1010a0e0c(uVar1,0,"*KindredSoundBalance*",0);
  FUN_1003c9788(*(undefined4 *)(lVar3 + 0x550));
  (**(code **)(*plVar2 + 0x28))(plVar2);
  plVar2 = (long *)FUN_10000cc74();
  FUN_1003a985c(&local_30,plVar2);
  (**(code **)(*plVar2 + 0x58))(plVar2,1);
  plVar2 = (long *)FUN_10000cc74();
  FUN_1003a985c(&local_30,plVar2);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x50))(plVar2);
  local_40 = FUN_1003c97ec;
  local_38 = 3;
  (**(code **)(*plVar2 + 0x18))(plVar2,&local_40,1,1);
  uVar1 = FUN_10000bc94();
  FUN_1003a985c(&local_30,uVar1);
  plVar2 = (long *)FUN_10000bed8();
  FUN_1003a985c(&local_30,plVar2);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x70))
                             (plVar2,PTR_s_Buff_Magnus_PerkProc_DamagePFX_10185b358);
  local_40 = (code *)CONCAT44(local_40._4_4_,0x3f800000);
  local_38 = 1;
  (**(code **)(*plVar2 + 0x18))(plVar2,&local_40);
  lVar3 = FUN_10000c8e8();
  FUN_1003a985c(&local_30,lVar3);
  lVar4 = FUN_10049ab34(lVar3 + 0x10);
  *(undefined **)(lVar4 + 8) = PTR_s_Buff_Magnus_Talent_TalentB_10185b360;
  lVar4 = FUN_10000c540();
  FUN_1003a985c(lVar3 + 200,lVar4);
  *(undefined **)(lVar4 + 0x10) = PTR_s_Buff_Magnus_Perk_SpellMark_10185b368;
  uVar1 = FUN_10000c784();
  FUN_1003a985c(&local_30,uVar1);
  return local_30;
}




undefined8 FUN_10038a3f8(void)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined4 local_50 [2];
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
  (**(code **)(*plVar2 + 0x50))(plVar2,"Ability01");
  plVar2 = (long *)thunk_FUN_10000e358();
  FUN_1003a985c(&local_40,plVar2);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x60))(plVar2,"A_Projectile");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Magnus_A_Cast");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,0);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x80))(plVar2,0);
  plVar2 = (long *)(**(code **)(*plVar2 + 0xb0))(plVar2,1);
  local_50[0] = 0x3f800000;
  local_48 = 1;
  (**(code **)(*plVar2 + 0x60))(plVar2,local_50);
  plVar2 = (long *)thunk_FUN_10000e5dc();
  FUN_1003a985c(&local_40,plVar2);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x58))(plVar2,"Sound_Magnus_Ability_A_Cast");
  uVar3 = FUN_1010a1520();
  lVar1 = FUN_1010a0e0c(uVar3,0,"*KindredSoundBalance*",0);
  FUN_1003c9788(*(undefined4 *)(lVar1 + 0x558));
  (**(code **)(*plVar2 + 0x28))(plVar2);
  lVar1 = FUN_10000ceb8();
  FUN_1003a985c(&local_40,lVar1);
  *(code **)(lVar1 + 0x20) = FUN_1003c97f8;
  *(undefined8 *)(lVar1 + 0x10) = 0;
  lVar1 = FUN_10000f250();
  FUN_1003a985c(&local_40,lVar1);
  *(undefined4 *)(lVar1 + 0x10) = 0x8a;
  FUN_1003d266c(lVar1,"A_Projectile");
  *(undefined4 *)(lVar1 + 0x34) = 1;
  lVar1 = FUN_10000d8b8();
  FUN_1003a985c(&local_40,lVar1);
  *(undefined1 *)(lVar1 + 0x10) = 0;
  return local_40;
}




undefined8 FUN_10038a5ec(void)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined4 local_40 [2];
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
  plVar2 = (long *)thunk_FUN_10000e358();
  FUN_1003a985c(&local_30,plVar2);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x58))(plVar2);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Magnus_B_Cast");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,0);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x80))(plVar2,0);
  plVar2 = (long *)(**(code **)(*plVar2 + 0xb0))(plVar2,1);
  local_40[0] = 0x3f800000;
  local_38 = 1;
  (**(code **)(*plVar2 + 0x60))(plVar2,local_40);
  plVar2 = (long *)thunk_FUN_10000e5dc();
  FUN_1003a985c(&local_30,plVar2);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x58))(plVar2,"Sound_Magnus_Ability_B_Cast");
  uVar3 = FUN_1010a1520();
  lVar1 = FUN_1010a0e0c(uVar3,0,"*KindredSoundBalance*",0);
  FUN_1003c9788(*(undefined4 *)(lVar1 + 0x560));
  (**(code **)(*plVar2 + 0x28))(plVar2);
  lVar1 = FUN_10000ceb8();
  FUN_1003a985c(&local_30,lVar1);
  *(code **)(lVar1 + 0x20) = FUN_1003c980c;
  *(undefined8 *)(lVar1 + 0x10) = 0;
  lVar1 = FUN_10000f250();
  FUN_1003a985c(&local_30,lVar1);
  *(undefined4 *)(lVar1 + 0x10) = 0x8c;
  FUN_1003d266c(lVar1,"A_Projectile");
  *(undefined4 *)(lVar1 + 0x34) = 1;
  lVar1 = FUN_10000d8b8();
  FUN_1003a985c(&local_30,lVar1);
  *(undefined1 *)(lVar1 + 0x10) = 0;
  return local_30;
}




undefined8 FUN_10038a7d0(void)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  uint uVar8;
  char *pcVar9;
  code *local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  local_70 = 0;
  uStack_68 = 0;
  lVar4 = FUN_10000d8b8();
  FUN_1003a985c(&local_70,lVar4);
  *(undefined1 *)(lVar4 + 0x10) = 1;
  lVar4 = FUN_10000ef8c();
  FUN_1003a985c(&local_70,lVar4);
  *(byte *)(lVar4 + 0x10) = *(byte *)(lVar4 + 0x10) & 0xe7 | 4;
  plVar5 = (long *)thunk_FUN_10000e0ac();
  FUN_1003a985c(&local_70,plVar5);
  (**(code **)(*plVar5 + 0x50))(plVar5,"Ability03");
  plVar5 = (long *)thunk_FUN_10000e358();
  FUN_1003a985c(&local_70,plVar5);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x60))(plVar5,"Front");
  plVar5 = (long *)(**(code **)(*plVar5 + 0x48))(plVar5,"Effect_Magnus_C_Warning");
  plVar5 = (long *)(**(code **)(*plVar5 + 0xe0))(0x41b00000,0x40400000);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x78))(plVar5,0);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x80))(plVar5,0);
  plVar5 = (long *)(**(code **)(*plVar5 + 0xb0))(plVar5,1);
  local_80._0_4_ = 0x3f800000;
  local_78 = 1;
  plVar5 = (long *)(**(code **)(*plVar5 + 0x60))(plVar5,&local_80);
  plVar5 = (long *)(**(code **)(*plVar5 + 0xc0))(0x3f800000,0,0);
  (**(code **)(*plVar5 + 0xd8))(0x3e4ccccd);
  plVar5 = (long *)thunk_FUN_10000e358();
  FUN_1003a985c(&local_70,plVar5);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x68))(plVar5,"Bone_LeftHand");
  plVar5 = (long *)(**(code **)(*plVar5 + 0x48))(plVar5,"Effect_Magnus_C_HandsPFX");
  plVar5 = (long *)(**(code **)(*plVar5 + 0x78))(plVar5,1);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x80))(plVar5,0);
  (**(code **)(*plVar5 + 0xb0))(plVar5,1);
  plVar5 = (long *)thunk_FUN_10000e358();
  FUN_1003a985c(&local_70,plVar5);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x68))(plVar5,"Bone_RightHand");
  plVar5 = (long *)(**(code **)(*plVar5 + 0x48))(plVar5,"Effect_Magnus_C_HandsPFX");
  plVar5 = (long *)(**(code **)(*plVar5 + 0x78))(plVar5,1);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x80))(plVar5,0);
  (**(code **)(*plVar5 + 0xb0))(plVar5,1);
  plVar5 = (long *)thunk_FUN_10000e5dc();
  FUN_1003a985c(&local_70,plVar5);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x58))(plVar5,"Sound_Magnus_Ability_C_Cast");
  uVar6 = FUN_1010a1520();
  lVar4 = FUN_1010a0e0c(uVar6,0,"*KindredSoundBalance*",0);
  FUN_1003c9788(*(undefined4 *)(lVar4 + 0x568));
  (**(code **)(*plVar5 + 0x28))(plVar5);
  lVar4 = FUN_10000ceb8();
  FUN_1003a985c(&local_70,lVar4);
  *(code **)(lVar4 + 0x20) = FUN_1003c9ad8;
  *(undefined8 *)(lVar4 + 0x10) = 0;
  plVar5 = (long *)thunk_FUN_10000e358();
  FUN_1003a985c(&local_70,plVar5);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x60))(plVar5,"Front");
  plVar5 = (long *)(**(code **)(*plVar5 + 0x48))(plVar5,"Effect_Magnus_C_CastPFX");
  plVar5 = (long *)(**(code **)(*plVar5 + 0x78))(plVar5,0);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x80))(plVar5,0);
  plVar5 = (long *)(**(code **)(*plVar5 + 0xb0))(plVar5,1);
  local_80 = (code *)CONCAT44(local_80._4_4_,0x3f800000);
  local_78 = 1;
  (**(code **)(*plVar5 + 0x60))(plVar5,&local_80);
  lVar4 = FUN_1003e10f0();
  bVar1 = *(byte *)(lVar4 + 0xe5);
  lVar4 = FUN_1003e10f0();
  bVar2 = *(byte *)(lVar4 + 0xe5);
  lVar4 = FUN_10000ecbc();
  FUN_1003a985c(&local_70,lVar4);
  *(code **)(lVar4 + 0x70) = FUN_1003c9820;
  *(code **)(lVar4 + 0x78) = FUN_1003c98f4;
  *(undefined4 *)(lVar4 + 0x88) = 0x3fc00000;
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
  plVar5 = (long *)FUN_10000cb8c();
  FUN_1003a985c(&local_70,plVar5);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x50))(plVar5);
  local_80 = FUN_1003c99e4;
  local_78 = 5;
  (**(code **)(*plVar5 + 0x18))(plVar5,&local_80,1,2);
  plVar5 = (long *)FUN_10000bed8();
  FUN_1003a985c(&local_70,plVar5);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x70))(plVar5,PTR_s_Buff_Magnus_Perk_SpellMark_10185b368);
  local_80 = FUN_1003c9aec;
  local_78 = 3;
  (**(code **)(*plVar5 + 0x18))(plVar5,&local_80);
  plVar5 = (long *)FUN_10000bed8();
  FUN_1003a985c(&local_70,plVar5);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x70))(plVar5,PTR_s_Buff_Magnus_C_DamagePFX_10185b370);
  local_80._0_4_ = 0x3f800000;
  local_78 = 1;
  (**(code **)(*plVar5 + 0x18))(plVar5,&local_80);
  uVar6 = FUN_10000c784();
  FUN_1003a985c(&local_70,uVar6);
  lVar4 = FUN_10000ecbc();
  FUN_1003a985c(&local_70,lVar4);
  *(code **)(lVar4 + 0x70) = FUN_1003c9820;
  *(code **)(lVar4 + 0x78) = FUN_1003c98f4;
  *(undefined4 *)(lVar4 + 0x88) = 0x3fc00000;
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
  *(byte *)(lVar4 + 0x6a) = bVar2 | 0x14;
  *(undefined2 *)(lVar4 + 0x68) = 0x6120;
  lVar4 = FUN_10000c8e8();
  FUN_1003a985c(&local_70,lVar4);
  lVar7 = FUN_10049acf0(lVar4 + 0x10);
  if (PTR_s_Ability__Magnus__A_101859b60 == (undefined *)0x0) {
    uVar8 = 0;
  }
  else {
    uVar8 = 0x811c9dc5;
    cVar3 = *PTR_s_Ability__Magnus__A_101859b60;
    pcVar9 = PTR_s_Ability__Magnus__A_101859b60;
    while (cVar3 != '\0') {
      pcVar9 = pcVar9 + 1;
      uVar8 = (uVar8 ^ (int)cVar3) * 0x1000193;
      cVar3 = *pcVar9;
    }
  }
  *(uint *)(lVar7 + 8) = uVar8;
  *(undefined4 *)(lVar7 + 0xc) = 1;
  plVar5 = (long *)FUN_10000bed8();
  FUN_1003a985c(lVar4 + 0xb0,plVar5);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x70))(plVar5,PTR_s_Buff_Magnus_C_DeathChecker_10185b378);
  local_80 = (code *)CONCAT44(local_80._4_4_,0x3e99999a);
  local_78 = 1;
  (**(code **)(*plVar5 + 0x18))(plVar5,&local_80);
  lVar4 = FUN_10000d8b8();
  FUN_1003a985c(&local_70,lVar4);
  *(undefined1 *)(lVar4 + 0x10) = 0;
  return local_70;
}




void FUN_10038ae04(void)

{
  FUN_1003c9d74("RangedDefaultAttack",0x8e,"AutoAttack");
  return;
}




void FUN_10038ae1c(void)

{
  FUN_1003c9d74("RangedAltAttack",0x8e,"AutoAttack_Alt");
  return;
}




void FUN_10038ae34(void)

{
  FUN_1003c9d74("RangedCritAttack",0x90,"AutoAttack_Crit");
  return;
}




undefined8 FUN_10038ae4c(void)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
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
  plVar3 = (long *)(**(code **)(*plVar3 + 0x50))(plVar3,"Ability01");
  (**(code **)(*plVar3 + 0x18))(plVar3,"AttackToIdleCombat");
  plVar3 = (long *)thunk_FUN_10000e5dc();
  FUN_1003a985c(&local_60,plVar3);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x58))(plVar3,"Sound_Kinetic_A");
  uVar4 = FUN_1010a1520();
  lVar2 = FUN_1010a0e0c(uVar4,0,"*KindredSoundBalance*",0);
  FUN_1003c9d10(*(undefined4 *)(lVar2 + 0x4cc));
  (**(code **)(*plVar3 + 0x28))(plVar3);
  lVar2 = FUN_10000ceb8();
  FUN_1003a985c(&local_60,lVar2);
  *(undefined4 *)(lVar2 + 0x2c) = 0x3e4ccccd;
  *(undefined8 *)(lVar2 + 0x10) = 0;
  lVar2 = FUN_10000c838();
  FUN_1003a985c(&local_60,lVar2);
  puVar1 = PTR_s_Buff_Kinetic_B_SwapAbilityA_10185b388;
  *(ushort *)(lVar2 + 0x58) = *(ushort *)(lVar2 + 0x58) & 0xf00f | 0x20;
  *(undefined8 *)(lVar2 + 0x48) = 0;
  *(undefined8 *)(lVar2 + 0x50) = 0;
  *(undefined1 *)(lVar2 + 0x50) = 2;
  *(undefined **)(lVar2 + 0x40) = puVar1;
  lVar5 = FUN_10000f250();
  FUN_1003a985c(lVar2 + 0x18,lVar5);
  *(undefined4 *)(lVar5 + 0x10) = 0x92;
  FUN_1003d266c(lVar5,"Aemit");
  lVar5 = FUN_10000f250();
  FUN_1003a985c(lVar2 + 0x30,lVar5);
  *(undefined4 *)(lVar5 + 0x10) = 0x91;
  FUN_1003d266c(lVar5,"Aemit");
  lVar2 = FUN_10000c838();
  FUN_1003a985c(&local_60,lVar2);
  puVar1 = PTR_s_Buff_Kinetic_Talent_TalentB_10185b390;
  *(ushort *)(lVar2 + 0x58) = *(ushort *)(lVar2 + 0x58) & 0xf00f | 0x20;
  *(undefined8 *)(lVar2 + 0x48) = 0;
  *(undefined8 *)(lVar2 + 0x50) = 0;
  *(undefined1 *)(lVar2 + 0x50) = 2;
  *(undefined **)(lVar2 + 0x40) = puVar1;
  lVar2 = lVar2 + 0x18;
  lVar5 = FUN_10000ceb8();
  FUN_1003a985c(lVar2,lVar5);
  *(undefined4 *)(lVar5 + 0x2c) = 0x3e4ccccd;
  *(undefined8 *)(lVar5 + 0x10) = 0;
  lVar5 = FUN_10000f250();
  FUN_1003a985c(lVar2,lVar5);
  *(undefined4 *)(lVar5 + 0x10) = 0x91;
  FUN_1003d266c(lVar5,"Aemit");
  lVar5 = FUN_10000ceb8();
  FUN_1003a985c(lVar2,lVar5);
  *(undefined4 *)(lVar5 + 0x2c) = 0x3e4ccccd;
  *(undefined8 *)(lVar5 + 0x10) = 0;
  lVar5 = FUN_10000f250();
  FUN_1003a985c(lVar2,lVar5);
  *(undefined4 *)(lVar5 + 0x10) = 0x91;
  FUN_1003d266c(lVar5,"Aemit");
  lVar2 = FUN_10000ceb8();
  FUN_1003a985c(&local_60,lVar2);
  *(undefined4 *)(lVar2 + 0x2c) = 0x3dcccccd;
  *(undefined8 *)(lVar2 + 0x10) = 0;
  uVar4 = FUN_10000bb2c();
  FUN_1003a985c(&local_60,uVar4);
  lVar2 = FUN_10000c540();
  FUN_1003a985c(&local_60,lVar2);
  *(undefined **)(lVar2 + 0x10) = PTR_s_Buff_Kinetic_B_SwapAbilityA_10185b388;
  uVar4 = FUN_10000c784();
  FUN_1003a985c(&local_60,uVar4);
  lVar2 = FUN_10000d8b8();
  FUN_1003a985c(&local_60,lVar2);
  *(undefined1 *)(lVar2 + 0x10) = 0;
  uVar4 = FUN_10000f034();
  FUN_1003a985c(&local_60,uVar4);
  return local_60;
}




undefined8 FUN_10038b170(void)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  code *local_60;
  undefined4 local_58;
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
  plVar2 = (long *)(**(code **)(*plVar2 + 0x50))(plVar2,"Ability02");
  (**(code **)(*plVar2 + 0x18))(plVar2,"AttackToIdleCombat");
  plVar2 = (long *)thunk_FUN_10000e5dc();
  FUN_1003a985c(&local_40,plVar2);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x58))(plVar2,"Sound_Kinetic_B");
  uVar3 = FUN_1010a1520();
  lVar1 = FUN_1010a0e0c(uVar3,0,"*KindredSoundBalance*",0);
  FUN_1003c9d10(*(undefined4 *)(lVar1 + 0x4d0));
  (**(code **)(*plVar2 + 0x28))(plVar2);
  plVar2 = (long *)thunk_FUN_10000e358();
  FUN_1003a985c(&local_40,plVar2);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x58))(plVar2);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Kinetic_B");
  (**(code **)(*plVar2 + 0x78))(plVar2,1);
  plVar2 = (long *)FUN_10000bdf0();
  FUN_1003a985c(&local_40,plVar2);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x50))(plVar2,PTR_s_Buff_Kinetic_B_SwapAbilityA_10185b388)
  ;
  local_50 = FUN_1003c9efc;
  local_48 = 3;
  (**(code **)(*plVar2 + 0x18))(plVar2,&local_50);
  plVar2 = (long *)FUN_10000cd5c();
  FUN_1003a985c(&local_40,plVar2);
  local_50 = FUN_1003c9f10;
  local_48 = 3;
  plVar2 = (long *)(**(code **)(*plVar2 + 0x80))(plVar2,&local_50);
  local_60 = FUN_1003c9f24;
  local_58 = 3;
  plVar2 = (long *)(**(code **)(*plVar2 + 0xa8))(plVar2,&local_60);
  (**(code **)(*plVar2 + 0xb0))(plVar2,1);
  lVar1 = FUN_10000ceb8();
  FUN_1003a985c(&local_40,lVar1);
  *(code **)(lVar1 + 0x20) = FUN_1003c9f24;
  *(undefined8 *)(lVar1 + 0x10) = 0;
  lVar1 = FUN_10000ceb8();
  FUN_1003a985c(&local_40,lVar1);
  *(undefined4 *)(lVar1 + 0x2c) = 0x3dcccccd;
  *(undefined8 *)(lVar1 + 0x10) = 0;
  uVar3 = FUN_10000f9c0();
  FUN_1003a985c(&local_40,uVar3);
  lVar1 = FUN_10000d8b8();
  FUN_1003a985c(&local_40,lVar1);
  *(undefined1 *)(lVar1 + 0x10) = 0;
  uVar3 = FUN_10000f034();
  FUN_1003a985c(&local_40,uVar3);
  return local_40;
}




undefined8 FUN_10038b3f8(void)

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
  lVar1 = FUN_10000ef8c();
  FUN_1003a985c(&local_40,lVar1);
  *(byte *)(lVar1 + 0x10) = *(byte *)(lVar1 + 0x10) & 0xe7 | 4;
  plVar2 = (long *)thunk_FUN_10000e0ac();
  FUN_1003a985c(&local_40,plVar2);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x50))(plVar2,"Ability03");
  (**(code **)(*plVar2 + 0x18))(plVar2,"AttackToIdleCombat");
  plVar2 = (long *)thunk_FUN_10000e358();
  FUN_1003a985c(&local_40,plVar2);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x58))(plVar2);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Kinetic_C_Charging");
  (**(code **)(*plVar2 + 0x78))(plVar2,1);
  plVar2 = (long *)thunk_FUN_10000e5dc();
  FUN_1003a985c(&local_40,plVar2);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x58))(plVar2,"Sound_Kinetic_C_Channel");
  uVar3 = FUN_1010a1520();
  lVar1 = FUN_1010a0e0c(uVar3,0,"*KindredSoundBalance*",0);
  FUN_1003c9d10(*(undefined4 *)(lVar1 + 0x4d4));
  (**(code **)(*plVar2 + 0x28))(plVar2);
  uVar3 = FUN_10000bc94();
  FUN_1003a985c(&local_40,uVar3);
  plVar2 = (long *)FUN_10000bed8();
  FUN_1003a985c(&local_40,plVar2);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x70))(plVar2,PTR_s_Buff_Kinetic_C_Target_Laser_10185b398)
  ;
  local_50 = FUN_1003ca00c;
  local_48 = 3;
  (**(code **)(*plVar2 + 0x18))(plVar2,&local_50);
  plVar2 = (long *)FUN_10000bed8();
  FUN_1003a985c(&local_40,plVar2);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x70))
                             (plVar2,PTR_s_Buff_RevealToBestowersTeamTrueSi_10185b3a0);
  local_50 = (code *)CONCAT44(local_50._4_4_,0x40000000);
  local_48 = 1;
  (**(code **)(*plVar2 + 0x18))(plVar2,&local_50);
  uVar3 = FUN_10000c784();
  FUN_1003a985c(&local_40,uVar3);
  lVar1 = FUN_10000d42c();
  FUN_1003a985c(&local_40,lVar1);
  *(undefined **)(lVar1 + 0x10) = PTR_s_Buff_Kinetic_BasicAttack_Mini_Co_10185b380;
  *(code **)(lVar1 + 0x20) = FUN_1003ca020;
  uVar3 = FUN_10000c6d4();
  FUN_1003a985c(&local_40,uVar3);
  lVar1 = FUN_10000ceb8();
  FUN_1003a985c(&local_40,lVar1);
  *(code **)(lVar1 + 0x20) = FUN_1003ca00c;
  *(undefined8 *)(lVar1 + 0x10) = 0;
  plVar2 = (long *)thunk_FUN_10000e5dc();
  FUN_1003a985c(&local_40,plVar2);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x58))(plVar2,"Sound_Kinetic_C_Fire");
  uVar3 = FUN_1010a1520();
  lVar1 = FUN_1010a0e0c(uVar3,0,"*KindredSoundBalance*",0);
  FUN_1003c9d10(*(undefined4 *)(lVar1 + 0x4d4));
  (**(code **)(*plVar2 + 0x28))(plVar2);
  lVar1 = FUN_10000f250();
  FUN_1003a985c(&local_40,lVar1);
  *(undefined4 *)(lVar1 + 0x10) = 0x93;
  FUN_1003d266c(lVar1,"CenterBody");
  *(code **)(lVar1 + 0x38) = FUN_1003c9f38;
  lVar1 = FUN_10000dbb0();
  FUN_1003a985c(&local_40,lVar1);
  FUN_1003a4e5c(&local_50,PTR_s_Buff_Kinetic_BasicAttack_Mini_Co_10185b380);
  *(undefined4 *)(lVar1 + 0x10) = local_50._0_4_;
  *(undefined4 *)(lVar1 + 0x14) = 0;
  *(byte *)(lVar1 + 0x18) = *(byte *)(lVar1 + 0x18) | 1;
  lVar1 = FUN_10000ceb8();
  FUN_1003a985c(&local_40,lVar1);
  *(undefined4 *)(lVar1 + 0x2c) = 0x3e99999a;
  *(undefined8 *)(lVar1 + 0x10) = 0;
  lVar1 = FUN_10000d8b8();
  FUN_1003a985c(&local_40,lVar1);
  *(undefined1 *)(lVar1 + 0x10) = 0;
  return local_40;
}




void FUN_10038b768(void)

{
  FUN_1003ca258("Attack",0x94,"CenterBody");
  return;
}




void FUN_10038b780(void)

{
  FUN_1003ca258("AltAttack",0x94,"CenterBody");
  return;
}




void FUN_10038b798(void)

{
  FUN_1003ca258("CritAttack",0x94,"CenterBody");
  return;
}




undefined8 FUN_10038b7b0(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 local_40;
  undefined8 uStack_38;
  
  local_40 = 0;
  uStack_38 = 0;
  lVar1 = FUN_10000c8e8();
  FUN_1003a985c(&local_40,lVar1);
  lVar2 = FUN_10049ac6c(lVar1 + 0x10);
  *(code **)(lVar2 + 8) = FUN_1003ca528;
  lVar2 = FUN_10000ba84();
  FUN_1003a985c(lVar1 + 0xb0,lVar2);
  *(char **)(lVar2 + 0x10) = "Hero049_Pet";
  plVar3 = (long *)FUN_10000bed8();
  FUN_1003a985c(lVar1 + 0xb0,plVar3);
  (**(code **)(*plVar3 + 0x70))(plVar3,PTR_s_Buff_Hero049_PetDistanceCheck_10185b3b8);
  lVar1 = lVar1 + 200;
  lVar2 = FUN_10000ba84();
  FUN_1003a985c(lVar1,lVar2);
  *(char **)(lVar2 + 0x10) = "Hero049_Pet";
  lVar2 = FUN_10000c540();
  FUN_1003a985c(lVar1,lVar2);
  *(undefined **)(lVar2 + 0x10) = PTR_s_Buff_Hero049_AttachToHero_10185b3c0;
  uVar4 = FUN_10000c784();
  FUN_1003a985c(lVar1,uVar4);
  uVar4 = FUN_10000bb2c();
  FUN_1003a985c(lVar1,uVar4);
  lVar2 = FUN_10000c540();
  FUN_1003a985c(lVar1,lVar2);
  *(undefined **)(lVar2 + 0x10) = PTR_s_Buff_Hero049_PetIsAttached_10185b3b0;
  plVar3 = (long *)FUN_10000bed8();
  FUN_1003a985c(lVar1,plVar3);
  (**(code **)(*plVar3 + 0x70))(plVar3,PTR_s_Buff_Hero049_PetIsDetatched_10185b3c8);
  uVar4 = FUN_10000c784();
  FUN_1003a985c(lVar1,uVar4);
  lVar2 = FUN_10000ba84();
  FUN_1003a985c(lVar1,lVar2);
  *(char **)(lVar2 + 0x10) = "Hero049_Pet";
  plVar3 = (long *)FUN_10000bed8();
  FUN_1003a985c(lVar1,plVar3);
  (**(code **)(*plVar3 + 0x70))(plVar3,PTR_s_Buff_Hero049_RingPFXForPetRange_10185b3d0);
  uVar4 = FUN_10000c784();
  FUN_1003a985c(lVar1,uVar4);
  lVar2 = FUN_10000ceb8();
  FUN_1003a985c(lVar1,lVar2);
  *(undefined4 *)(lVar2 + 0x2c) = 0x3e4ccccd;
  *(undefined8 *)(lVar2 + 0x10) = 0;
  lVar2 = FUN_10000c3b0();
  FUN_1003a985c(lVar1,lVar2);
  *(code **)(lVar2 + 0x10) = FUN_1003ca3ac;
  uVar4 = FUN_10000f034();
  FUN_1003a985c(&local_40,uVar4);
  return local_40;
}




undefined8 FUN_10038b9b8(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_30 = 0;
  uStack_28 = 0;
  lVar1 = FUN_10000c3b0();
  FUN_1003a985c(&local_30,lVar1);
  *(code **)(lVar1 + 0x10) = FUN_1003ca594;
  uVar2 = FUN_10000f034();
  FUN_1003a985c(&local_30,uVar2);
  return local_30;
}




undefined8 FUN_10038ba10(void)

{
  return 0;
}




undefined8 FUN_10038ba18(void)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined4 local_60 [2];
  undefined4 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  local_50 = 0;
  uStack_48 = 0;
  lVar2 = FUN_10000d8b8();
  FUN_1003a985c(&local_50,lVar2);
  *(undefined1 *)(lVar2 + 0x10) = 1;
  uVar3 = FUN_10000ef8c();
  FUN_1003a985c(&local_50,uVar3);
  plVar4 = (long *)thunk_FUN_10000e358();
  FUN_1003a985c(&local_50,plVar4);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x60))(plVar4,"CenterBody");
  (**(code **)(*plVar4 + 0x48))(plVar4,"Effect_Hero049_PetDash");
  lVar2 = FUN_10000dff8();
  FUN_1003a985c(&local_50,lVar2);
  *(undefined2 *)(lVar2 + 0x28) = 0x100;
  *(undefined8 *)(lVar2 + 0x30) = 0;
  uVar1 = FUN_1004d2524("Move");
  uVar1 = FUN_100015208("Move",uVar1,0x12345678);
  *(undefined4 *)(lVar2 + 0x10) = uVar1;
  uVar1 = FUN_1004d2524("AttackToIdle");
  uVar1 = FUN_100015208("AttackToIdle",uVar1,0x12345678);
  *(undefined4 *)(lVar2 + 0x20) = uVar1;
  plVar4 = (long *)FUN_10000cd5c();
  FUN_1003a985c(&local_50,plVar4);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x90))(plVar4);
  local_60[0] = 0x42200000;
  local_58 = 1;
  plVar4 = (long *)(**(code **)(*plVar4 + 0xa0))(plVar4,local_60);
  (**(code **)(*plVar4 + 0xb0))(plVar4,1);
  uVar3 = FUN_10000f9c0();
  FUN_1003a985c(&local_50,uVar3);
  lVar2 = FUN_10000ceb8();
  FUN_1003a985c(&local_50,lVar2);
  *(undefined4 *)(lVar2 + 0x2c) = 0x3e4ccccd;
  *(undefined8 *)(lVar2 + 0x10) = 0;
  plVar4 = (long *)thunk_FUN_10000e358();
  FUN_1003a985c(&local_50,plVar4);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x60))(plVar4,"CenterBody");
  (**(code **)(*plVar4 + 0x48))(plVar4,"Effect_Hero049_PetDash");
  lVar2 = FUN_10000d8b8();
  FUN_1003a985c(&local_50,lVar2);
  *(undefined1 *)(lVar2 + 0x10) = 0;
  return local_50;
}




undefined8 FUN_10038bc08(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_30 = 0;
  uStack_28 = 0;
  uVar1 = FUN_10000ef8c();
  FUN_1003a985c(&local_30,uVar1);
  uVar1 = FUN_10000bc94();
  FUN_1003a985c(&local_30,uVar1);
  lVar2 = FUN_10000f250();
  FUN_1003a985c(&local_30,lVar2);
  *(undefined4 *)(lVar2 + 0x10) = 0x95;
  FUN_1003d266c(lVar2,"CenterBody");
  uVar1 = FUN_10000f034();
  FUN_1003a985c(&local_30,uVar1);
  return local_30;
}




undefined8 FUN_10038bc8c(void)

{
  byte bVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  code *local_50;
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
  lVar2 = FUN_10000ceb8();
  FUN_1003a985c(&local_40,lVar2);
  *(undefined4 *)(lVar2 + 0x2c) = 0x3dcccccd;
  *(undefined8 *)(lVar2 + 0x10) = 0;
  plVar3 = (long *)thunk_FUN_10000e358();
  FUN_1003a985c(&local_40,plVar3);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x60))(plVar3,"Warning");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Hero049_BeamWarning");
  local_50 = (code *)CONCAT44(local_50._4_4_,0x3f000000);
  local_48 = 1;
  plVar3 = (long *)(**(code **)(*plVar3 + 0x60))(plVar3,&local_50);
  plVar3 = (long *)(**(code **)(*plVar3 + 0xb0))(plVar3,1);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x78))(plVar3,1);
  plVar3 = (long *)(**(code **)(*plVar3 + 0xc0))(0x3f800000,0,0);
  plVar3 = (long *)(**(code **)(*plVar3 + 0xd8))(0x3e4ccccd);
  (**(code **)(*plVar3 + 0xe0))(0x40f00000,0x3fc00000);
  lVar2 = FUN_10000ceb8();
  FUN_1003a985c(&local_40,lVar2);
  *(undefined4 *)(lVar2 + 0x2c) = 0x3f000000;
  *(undefined8 *)(lVar2 + 0x10) = 0;
  uVar4 = FUN_10000f9c0();
  FUN_1003a985c(&local_40,uVar4);
  plVar3 = (long *)thunk_FUN_10000e358();
  FUN_1003a985c(&local_40,plVar3);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x60))(plVar3,"CenterBody");
  (**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Hero049_Beam");
  lVar2 = FUN_1003e10f0();
  bVar1 = *(byte *)(lVar2 + 0xe5);
  lVar2 = FUN_10000ecbc();
  FUN_1003a985c(&local_40,lVar2);
  *(code **)(lVar2 + 0x70) = FUN_1003ca710;
  *(code **)(lVar2 + 0x78) = FUN_1003ca75c;
  *(undefined4 *)(lVar2 + 0x88) = 0x3f800000;
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
  plVar3 = (long *)FUN_10000bed8();
  FUN_1003a985c(&local_40,plVar3);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x70))(plVar3,PTR_s_Buff_Hero049_PetSlow_10185b3d8);
  local_50 = FUN_1003ca840;
  local_48 = 3;
  (**(code **)(*plVar3 + 0x18))(plVar3,&local_50);
  plVar3 = (long *)FUN_10000cb8c();
  FUN_1003a985c(&local_40,plVar3);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x50))(plVar3);
  local_50 = FUN_1003ca854;
  local_48 = 3;
  (**(code **)(*plVar3 + 0x18))(plVar3,&local_50,1,2);
  uVar4 = FUN_10000c784();
  FUN_1003a985c(&local_40,uVar4);
  lVar2 = FUN_10000d8b8();
  FUN_1003a985c(&local_40,lVar2);
  *(undefined1 *)(lVar2 + 0x10) = 0;
  return local_40;
}




undefined8 FUN_10038bf9c(void)

{
  undefined8 uVar1;
  long *plVar2;
  undefined4 local_40 [2];
  undefined4 local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_30 = 0;
  uStack_28 = 0;
  uVar1 = FUN_10000b9d0();
  FUN_1003a985c(&local_30,uVar1);
  plVar2 = (long *)FUN_10000cd5c();
  FUN_1003a985c(&local_30,plVar2);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x68))(0,0,0,0,plVar2);
  local_40[0] = 0x42480000;
  local_38 = 1;
  plVar2 = (long *)(**(code **)(*plVar2 + 0xa0))(plVar2,local_40);
  (**(code **)(*plVar2 + 0xb0))(plVar2,1);
  uVar1 = FUN_10000c784();
  FUN_1003a985c(&local_30,uVar1);
  plVar2 = (long *)FUN_10000bdf0();
  FUN_1003a985c(&local_30,plVar2);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x50))(plVar2,PTR_s_Buff_SelfProjectile_10185a530);
  local_40[0] = 0x3f800000;
  local_38 = 1;
  plVar2 = (long *)(**(code **)(*plVar2 + 0x18))(plVar2,local_40);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,0x96);
  (**(code **)(*plVar2 + 0x50))(plVar2,2);
  uVar1 = FUN_10000f034();
  FUN_1003a985c(&local_30,uVar1);
  return local_30;
}




void FUN_10038c0c0(void)

{
  FUN_1003ca868("Attack","CenterBody",0x97);
  return;
}




void FUN_10038c0d8(void)

{
  FUN_1003ca868("AltAttack","CenterBody",0x98);
  return;
}




void FUN_10038c0f0(void)

{
  FUN_1003ca868("Attack","CenterBody",0x99);
  return;
}




undefined8 FUN_10038c108(void)

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
  *(undefined **)(lVar2 + 0x10) = PTR_s_Buff_Hero050_StackedDeck_10185b3e0;
  *(undefined4 *)(lVar2 + 0x18) = 0x40800000;
  *(undefined2 *)(lVar2 + 0x68) = 4;
  *(byte *)(lVar2 + 0x6a) = *(byte *)(lVar2 + 0x6a) & 0xfe;
  uVar1 = FUN_10000c784();
  FUN_1003a985c(&local_30,uVar1);
  lVar2 = FUN_10000e7fc();
  FUN_1003a985c(&local_30,lVar2);
  *(undefined4 *)(lVar2 + 0x10) = 0x3dcccccd;
  return local_30;
}




undefined8 FUN_10038c1ac(void)

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
  *(undefined **)(lVar2 + 0x10) = PTR_s_Buff_Hero050_B_10185b3e8;
  *(code **)(lVar2 + 0x28) = FUN_1003ca9b0;
  *(undefined2 *)(lVar2 + 0x68) = 1;
  *(byte *)(lVar2 + 0x6a) = *(byte *)(lVar2 + 0x6a) & 0xfe;
  *(code **)(lVar2 + 0x40) = FUN_1003be788;
  uVar1 = FUN_10000c784();
  FUN_1003a985c(&local_30,uVar1);
  uVar1 = FUN_10000f034();
  FUN_1003a985c(&local_30,uVar1);
  return local_30;
}




undefined8 FUN_10038c250(void)

{
  undefined4 uVar1;
  long lVar2;
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
  uVar1 = FUN_1004d2524("Ability01");
  uVar1 = FUN_100015208("Ability01",uVar1,0x12345678);
  *(undefined4 *)(lVar2 + 0x10) = uVar1;
  uVar1 = FUN_1004d2524("AttackToIdle");
  uVar1 = FUN_100015208("AttackToIdle",uVar1,0x12345678);
  *(undefined4 *)(lVar2 + 0x20) = uVar1;
  lVar2 = FUN_10000ceb8();
  FUN_1003a985c(&local_40,lVar2);
  *(undefined4 *)(lVar2 + 0x2c) = 0x3e4ccccd;
  *(undefined8 *)(lVar2 + 0x10) = 0;
  lVar2 = FUN_10000f250();
  FUN_1003a985c(&local_40,lVar2);
  *(undefined4 *)(lVar2 + 0x10) = 0x9b;
  FUN_1003d266c(lVar2,"CenterBody");
  *(undefined4 *)(lVar2 + 0x34) = 1;
  lVar2 = FUN_10000d8b8();
  FUN_1003a985c(&local_40,lVar2);
  *(undefined1 *)(lVar2 + 0x10) = 0;
  return local_40;
}




void FUN_10038c39c(void)

{
  FUN_1003ca9c0("Attack","CenterBody",0x9c);
  return;
}




void FUN_10038c3b4(void)

{
  FUN_1003ca9c0("AltAttack","CenterBody",0x9c);
  return;
}




void FUN_10038c3cc(void)

{
  FUN_1003ca9c0("CritAttack","CenterBody",0x9e);
  return;
}




undefined8 FUN_10038c3e4(void)

{
  byte bVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 local_40;
  undefined8 uStack_38;
  
  local_40 = 0;
  uStack_38 = 0;
  uVar4 = FUN_10000ef8c();
  FUN_1003a985c(&local_40,uVar4);
  lVar5 = FUN_10000ceb8();
  FUN_1003a985c(&local_40,lVar5);
  *(undefined4 *)(lVar5 + 0x2c) = 0x3e4ccccd;
  *(undefined8 *)(lVar5 + 0x10) = 0;
  lVar5 = FUN_1003e10f0();
  bVar1 = *(byte *)(lVar5 + 0xe5);
  lVar5 = FUN_10000dff8();
  FUN_1003a985c(&local_40,lVar5);
  *(undefined2 *)(lVar5 + 0x28) = 0x100;
  *(code **)(lVar5 + 0x30) = FUN_1003a24a0;
  uVar3 = FUN_1004d2524("Attack");
  uVar3 = FUN_100015208("Attack",uVar3,0x12345678);
  *(undefined4 *)(lVar5 + 0x10) = uVar3;
  uVar3 = FUN_1004d2524("AttackToIdleCombat");
  uVar3 = FUN_100015208("AttackToIdleCombat",uVar3,0x12345678);
  *(undefined4 *)(lVar5 + 0x20) = uVar3;
  lVar5 = FUN_10000f250();
  FUN_1003a985c(&local_40,lVar5);
  *(undefined4 *)(lVar5 + 0x10) = 0x9c;
  FUN_1003d266c(lVar5,"CenterBody");
  lVar5 = FUN_10000ed74();
  FUN_1003a985c(&local_40,lVar5);
  *(undefined8 *)(lVar5 + 0x18) = 0;
  *(undefined1 *)(lVar5 + 0x20) = 1;
  *(undefined8 *)(lVar5 + 0x2c) = 0;
  *(undefined8 *)(lVar5 + 0x24) = 0;
  *(undefined8 *)(lVar5 + 0x38) = 0;
  *(undefined8 *)(lVar5 + 0x30) = 0;
  *(undefined8 *)(lVar5 + 0x48) = 0xbf800000c0000000;
  *(undefined8 *)(lVar5 + 0x40) = 0xbf80000042833853;
  *(undefined4 *)(lVar5 + 0x50) = 0x3f266666;
  *(undefined1 *)(lVar5 + 0x54) = 0xff;
  *(undefined8 *)(lVar5 + 0x60) = 0xffffffff00000000;
  *(undefined8 *)(lVar5 + 0x58) = 0xffffffff00000001;
  *(byte *)(lVar5 + 0x6a) = bVar1 | 0x14;
  *(undefined2 *)(lVar5 + 0x68) = 0xe120;
  bVar2 = DAT_101d23a38 != '\0';
  *(undefined4 *)(lVar5 + 0xa4) = 0x4101999a;
  *(byte *)(lVar5 + 0xa8) = *(byte *)(lVar5 + 0xa8) & 0xf0 | bVar2 | 4;
  lVar5 = FUN_10000f250();
  FUN_1003a985c(&local_40,lVar5);
  *(undefined4 *)(lVar5 + 0x10) = 0x9d;
  FUN_1003d266c(lVar5,"CenterBody");
  *(undefined1 *)(lVar5 + 0x30) = 1;
  uVar4 = FUN_10000bb2c();
  FUN_1003a985c(&local_40,uVar4);
  lVar5 = FUN_10000ce0c();
  FUN_1003a985c(&local_40,lVar5);
  *(undefined **)(lVar5 + 0x18) = PTR_s_Buff_Hero051_GunA2_10185b3f0;
  *(undefined4 *)(lVar5 + 0x20) = 1;
  *(undefined1 *)(lVar5 + 0x24) = 1;
  uVar4 = FUN_10000c784();
  FUN_1003a985c(&local_40,uVar4);
  uVar4 = FUN_10000f034();
  FUN_1003a985c(&local_40,uVar4);
  return local_40;
}




undefined8 FUN_10038c638(void)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined4 local_60 [2];
  undefined4 local_58;
  code *local_50;
  undefined4 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  local_40 = 0;
  uStack_38 = 0;
  lVar1 = FUN_10000d8b8();
  FUN_1003a985c(&local_40,lVar1);
  *(undefined1 *)(lVar1 + 0x10) = 1;
  uVar2 = FUN_10000ef8c();
  FUN_1003a985c(&local_40,uVar2);
  lVar1 = FUN_10000ceb8();
  FUN_1003a985c(&local_40,lVar1);
  *(undefined4 *)(lVar1 + 0x2c) = 0x3dcccccd;
  *(undefined8 *)(lVar1 + 0x10) = 0;
  lVar1 = FUN_10000f250();
  FUN_1003a985c(&local_40,lVar1);
  *(undefined4 *)(lVar1 + 0x10) = 0xa1;
  FUN_1003d266c(lVar1,"CenterBody");
  *(undefined4 *)(lVar1 + 0x34) = 1;
  plVar3 = (long *)FUN_10000cb8c();
  FUN_1003a985c(&local_40,plVar3);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x50))(plVar3);
  local_50 = FUN_1003caac8;
  local_48 = 3;
  (**(code **)(*plVar3 + 0x18))(plVar3,&local_50,0,2);
  uVar2 = FUN_10000c784();
  FUN_1003a985c(&local_40,uVar2);
  uVar2 = FUN_10000bb2c();
  FUN_1003a985c(&local_40,uVar2);
  plVar3 = (long *)FUN_10000bdf0();
  FUN_1003a985c(&local_40,plVar3);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x50))(plVar3,PTR_s_Buff_Hero051_GunA2_10185b3f0);
  local_50 = (code *)CONCAT44(local_50._4_4_,0x41200000);
  local_48 = 1;
  plVar3 = (long *)(**(code **)(*plVar3 + 0x18))(plVar3,&local_50);
  local_60[0] = 2;
  local_58 = 1;
  (**(code **)(*plVar3 + 0x20))(plVar3,local_60);
  uVar2 = FUN_10000c784();
  FUN_1003a985c(&local_40,uVar2);
  lVar1 = FUN_10000ceb8();
  FUN_1003a985c(&local_40,lVar1);
  *(undefined4 *)(lVar1 + 0x2c) = 0x3e4ccccd;
  *(undefined8 *)(lVar1 + 0x10) = 0;
  lVar1 = FUN_10000d8b8();
  FUN_1003a985c(&local_40,lVar1);
  *(undefined1 *)(lVar1 + 0x10) = 0;
  uVar2 = FUN_10000f034();
  FUN_1003a985c(&local_40,uVar2);
  return local_40;
}




undefined8 FUN_10038c818(void)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
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
  uVar2 = FUN_10000ef8c();
  FUN_1003a985c(&local_30,uVar2);
  plVar3 = (long *)FUN_10000cd5c();
  FUN_1003a985c(&local_30,plVar3);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x88))(plVar3);
  local_40 = FUN_1003caadc;
  local_38 = 3;
  plVar3 = (long *)(**(code **)(*plVar3 + 0xa8))(plVar3,&local_40);
  (**(code **)(*plVar3 + 0xb0))(plVar3,1);
  lVar1 = FUN_10000ceb8();
  FUN_1003a985c(&local_30,lVar1);
  *(code **)(lVar1 + 0x20) = FUN_1003caaf0;
  *(undefined8 *)(lVar1 + 0x10) = 0;
  uVar2 = FUN_10000bb2c();
  FUN_1003a985c(&local_30,uVar2);
  uVar2 = FUN_10000c784();
  FUN_1003a985c(&local_30,uVar2);
  plVar3 = (long *)FUN_10000bdf0();
  FUN_1003a985c(&local_30,plVar3);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x50))(plVar3,PTR_s_Buff_Hero051_GunA2_10185b3f0);
  local_40 = (code *)CONCAT44(local_40._4_4_,0x41200000);
  local_38 = 1;
  plVar3 = (long *)(**(code **)(*plVar3 + 0x18))(plVar3,&local_40);
  local_50[0] = 2;
  local_48 = 1;
  (**(code **)(*plVar3 + 0x20))(plVar3,local_50);
  lVar1 = FUN_10000d8b8();
  FUN_1003a985c(&local_30,lVar1);
  *(undefined1 *)(lVar1 + 0x10) = 0;
  return local_30;
}




undefined8 FUN_10038c984(void)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined4 local_90 [2];
  undefined4 local_88;
  code *local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  local_70 = 0;
  uStack_68 = 0;
  lVar1 = FUN_10000d8b8();
  FUN_1003a985c(&local_70,lVar1);
  *(undefined1 *)(lVar1 + 0x10) = 1;
  uVar2 = FUN_10000ef8c();
  FUN_1003a985c(&local_70,uVar2);
  lVar1 = FUN_10000ceb8();
  FUN_1003a985c(&local_70,lVar1);
  *(undefined4 *)(lVar1 + 0x2c) = 0x3dcccccd;
  *(undefined8 *)(lVar1 + 0x10) = 0;
  lVar1 = FUN_10000f250();
  FUN_1003a985c(&local_70,lVar1);
  *(undefined4 *)(lVar1 + 0x10) = 0xa0;
  FUN_1003d266c(lVar1,"CenterBody");
  *(undefined4 *)(lVar1 + 0x34) = 1;
  lVar1 = FUN_10000f250();
  FUN_1003a985c(&local_70,lVar1);
  *(undefined4 *)(lVar1 + 0x10) = 0xa0;
  FUN_1003d266c(lVar1,"CenterBody");
  *(undefined4 *)(lVar1 + 0x34) = 1;
  *(code **)(lVar1 + 0x28) = FUN_1003cab04;
  lVar1 = FUN_10000ceb8();
  FUN_1003a985c(&local_70,lVar1);
  *(undefined4 *)(lVar1 + 0x2c) = 0x3dcccccd;
  *(undefined8 *)(lVar1 + 0x10) = 0;
  lVar1 = FUN_10000f250();
  FUN_1003a985c(&local_70,lVar1);
  *(undefined4 *)(lVar1 + 0x10) = 0xa0;
  FUN_1003d266c(lVar1,"CenterBody");
  *(undefined4 *)(lVar1 + 0x34) = 1;
  *(code **)(lVar1 + 0x28) = FUN_1003cab64;
  lVar1 = FUN_10000f250();
  FUN_1003a985c(&local_70,lVar1);
  *(undefined4 *)(lVar1 + 0x10) = 0xa0;
  FUN_1003d266c(lVar1,"CenterBody");
  *(undefined4 *)(lVar1 + 0x34) = 1;
  *(code **)(lVar1 + 0x28) = FUN_1003cabc0;
  lVar1 = FUN_10000ceb8();
  FUN_1003a985c(&local_70,lVar1);
  *(undefined4 *)(lVar1 + 0x2c) = 0x3dcccccd;
  *(undefined8 *)(lVar1 + 0x10) = 0;
  lVar1 = FUN_10000f250();
  FUN_1003a985c(&local_70,lVar1);
  *(undefined4 *)(lVar1 + 0x10) = 0xa0;
  FUN_1003d266c(lVar1,"CenterBody");
  *(undefined4 *)(lVar1 + 0x34) = 1;
  *(code **)(lVar1 + 0x28) = FUN_1003cac18;
  lVar1 = FUN_10000f250();
  FUN_1003a985c(&local_70,lVar1);
  *(undefined4 *)(lVar1 + 0x10) = 0xa0;
  FUN_1003d266c(lVar1,"CenterBody");
  *(undefined4 *)(lVar1 + 0x34) = 1;
  *(code **)(lVar1 + 0x28) = FUN_1003cac78;
  lVar1 = FUN_10000ceb8();
  FUN_1003a985c(&local_70,lVar1);
  *(undefined4 *)(lVar1 + 0x2c) = 0x3dcccccd;
  *(undefined8 *)(lVar1 + 0x10) = 0;
  lVar1 = FUN_10000f250();
  FUN_1003a985c(&local_70,lVar1);
  *(undefined4 *)(lVar1 + 0x10) = 0xa0;
  FUN_1003d266c(lVar1,"CenterBody");
  *(undefined4 *)(lVar1 + 0x34) = 1;
  *(code **)(lVar1 + 0x28) = FUN_1003cacd8;
  lVar1 = FUN_10000f250();
  FUN_1003a985c(&local_70,lVar1);
  *(undefined4 *)(lVar1 + 0x10) = 0xa0;
  FUN_1003d266c(lVar1,"CenterBody");
  *(undefined4 *)(lVar1 + 0x34) = 1;
  *(code **)(lVar1 + 0x28) = FUN_1003cad38;
  lVar1 = FUN_10000ceb8();
  FUN_1003a985c(&local_70,lVar1);
  *(undefined4 *)(lVar1 + 0x2c) = 0x3dcccccd;
  *(undefined8 *)(lVar1 + 0x10) = 0;
  lVar1 = FUN_10000f250();
  FUN_1003a985c(&local_70,lVar1);
  *(undefined4 *)(lVar1 + 0x10) = 0xa0;
  FUN_1003d266c(lVar1,"CenterBody");
  *(undefined4 *)(lVar1 + 0x34) = 1;
  *(code **)(lVar1 + 0x28) = FUN_1003cad94;
  lVar1 = FUN_10000f250();
  FUN_1003a985c(&local_70,lVar1);
  *(undefined4 *)(lVar1 + 0x10) = 0xa0;
  FUN_1003d266c(lVar1,"CenterBody");
  *(undefined4 *)(lVar1 + 0x34) = 1;
  *(code **)(lVar1 + 0x28) = FUN_1003cadf4;
  lVar1 = FUN_10000ceb8();
  FUN_1003a985c(&local_70,lVar1);
  *(undefined4 *)(lVar1 + 0x2c) = 0x3dcccccd;
  *(undefined8 *)(lVar1 + 0x10) = 0;
  lVar1 = FUN_10000f250();
  FUN_1003a985c(&local_70,lVar1);
  *(undefined4 *)(lVar1 + 0x10) = 0xa0;
  FUN_1003d266c(lVar1,"CenterBody");
  *(undefined4 *)(lVar1 + 0x34) = 1;
  lVar1 = FUN_10000f250();
  FUN_1003a985c(&local_70,lVar1);
  *(undefined4 *)(lVar1 + 0x10) = 0xa0;
  FUN_1003d266c(lVar1,"CenterBody");
  *(undefined4 *)(lVar1 + 0x34) = 1;
  *(code **)(lVar1 + 0x28) = FUN_1003cab04;
  lVar1 = FUN_10000ceb8();
  FUN_1003a985c(&local_70,lVar1);
  *(undefined4 *)(lVar1 + 0x2c) = 0x3dcccccd;
  *(undefined8 *)(lVar1 + 0x10) = 0;
  lVar1 = FUN_10000f250();
  FUN_1003a985c(&local_70,lVar1);
  *(undefined4 *)(lVar1 + 0x10) = 0xa0;
  FUN_1003d266c(lVar1,"CenterBody");
  *(undefined4 *)(lVar1 + 0x34) = 1;
  *(code **)(lVar1 + 0x28) = FUN_1003cab64;
  lVar1 = FUN_10000f250();
  FUN_1003a985c(&local_70,lVar1);
  *(undefined4 *)(lVar1 + 0x10) = 0xa0;
  FUN_1003d266c(lVar1,"CenterBody");
  *(undefined4 *)(lVar1 + 0x34) = 1;
  *(code **)(lVar1 + 0x28) = FUN_1003cabc0;
  lVar1 = FUN_10000ceb8();
  FUN_1003a985c(&local_70,lVar1);
  *(undefined4 *)(lVar1 + 0x2c) = 0x3dcccccd;
  *(undefined8 *)(lVar1 + 0x10) = 0;
  lVar1 = FUN_10000f250();
  FUN_1003a985c(&local_70,lVar1);
  *(undefined4 *)(lVar1 + 0x10) = 0xa0;
  FUN_1003d266c(lVar1,"CenterBody");
  *(undefined4 *)(lVar1 + 0x34) = 1;
  *(code **)(lVar1 + 0x28) = FUN_1003cac18;
  lVar1 = FUN_10000f250();
  FUN_1003a985c(&local_70,lVar1);
  *(undefined4 *)(lVar1 + 0x10) = 0xa0;
  FUN_1003d266c(lVar1,"CenterBody");
  *(undefined4 *)(lVar1 + 0x34) = 1;
  *(code **)(lVar1 + 0x28) = FUN_1003cac78;
  lVar1 = FUN_10000ceb8();
  FUN_1003a985c(&local_70,lVar1);
  *(undefined4 *)(lVar1 + 0x2c) = 0x3dcccccd;
  *(undefined8 *)(lVar1 + 0x10) = 0;
  lVar1 = FUN_10000f250();
  FUN_1003a985c(&local_70,lVar1);
  *(undefined4 *)(lVar1 + 0x10) = 0xa0;
  FUN_1003d266c(lVar1,"CenterBody");
  *(undefined4 *)(lVar1 + 0x34) = 1;
  *(code **)(lVar1 + 0x28) = FUN_1003cacd8;
  lVar1 = FUN_10000f250();
  FUN_1003a985c(&local_70,lVar1);
  *(undefined4 *)(lVar1 + 0x10) = 0xa0;
  FUN_1003d266c(lVar1,"CenterBody");
  *(undefined4 *)(lVar1 + 0x34) = 1;
  *(code **)(lVar1 + 0x28) = FUN_1003cad38;
  lVar1 = FUN_10000ceb8();
  FUN_1003a985c(&local_70,lVar1);
  *(undefined4 *)(lVar1 + 0x2c) = 0x3dcccccd;
  *(undefined8 *)(lVar1 + 0x10) = 0;
  lVar1 = FUN_10000f250();
  FUN_1003a985c(&local_70,lVar1);
  *(undefined4 *)(lVar1 + 0x10) = 0xa0;
  FUN_1003d266c(lVar1,"CenterBody");
  *(undefined4 *)(lVar1 + 0x34) = 1;
  *(code **)(lVar1 + 0x28) = FUN_1003cad94;
  lVar1 = FUN_10000f250();
  FUN_1003a985c(&local_70,lVar1);
  *(undefined4 *)(lVar1 + 0x10) = 0xa0;
  FUN_1003d266c(lVar1,"CenterBody");
  *(undefined4 *)(lVar1 + 0x34) = 1;
  *(code **)(lVar1 + 0x28) = FUN_1003cadf4;
  plVar3 = (long *)FUN_10000cb8c();
  FUN_1003a985c(&local_70,plVar3);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x50))(plVar3);
  local_80 = FUN_1003cae54;
  local_78 = 3;
  (**(code **)(*plVar3 + 0x18))(plVar3,&local_80,0,2);
  uVar2 = FUN_10000c784();
  FUN_1003a985c(&local_70,uVar2);
  uVar2 = FUN_10000bb2c();
  FUN_1003a985c(&local_70,uVar2);
  plVar3 = (long *)FUN_10000bdf0();
  FUN_1003a985c(&local_70,plVar3);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x50))(plVar3,PTR_s_Buff_Hero051_GunA2_10185b3f0);
  local_80 = (code *)CONCAT44(local_80._4_4_,0x41200000);
  local_78 = 1;
  plVar3 = (long *)(**(code **)(*plVar3 + 0x18))(plVar3,&local_80);
  local_90[0] = 2;
  local_88 = 1;
  (**(code **)(*plVar3 + 0x20))(plVar3,local_90);
  uVar2 = FUN_10000c784();
  FUN_1003a985c(&local_70,uVar2);
  lVar1 = FUN_10000ceb8();
  FUN_1003a985c(&local_70,lVar1);
  *(undefined4 *)(lVar1 + 0x2c) = 0x3e4ccccd;
  *(undefined8 *)(lVar1 + 0x10) = 0;
  lVar1 = FUN_10000d8b8();
  FUN_1003a985c(&local_70,lVar1);
  *(undefined1 *)(lVar1 + 0x10) = 0;
  uVar2 = FUN_10000f034();
  FUN_1003a985c(&local_70,uVar2);
  return local_70;
}




void FUN_10038d024(void)

{
  FUN_1003cb2b0("Attack",0xa2,"CenterBody");
  return;
}




void FUN_10038d03c(void)

{
  FUN_1003cb2b0("AltAttack",0xa2,"CenterBody");
  return;
}




void FUN_10038d054(void)

{
  FUN_1003cb2b0("CritAttack",0xa2,"CenterBody");
  return;
}




undefined8 FUN_10038d06c(void)

{
  long *plVar1;
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_30 = 0;
  uStack_28 = 0;
  plVar1 = (long *)FUN_10000f300();
  FUN_1003a985c(&local_30,plVar1);
  plVar1 = (long *)(**(code **)(*plVar1 + 0x50))(plVar1,"*Hero052_Ball*",1);
  (**(code **)(*plVar1 + 0x20))(plVar1,FUN_1003cb53c);
  return local_30;
}




undefined8 FUN_10038d0d8(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_30 = 0;
  uStack_28 = 0;
  lVar1 = FUN_10000c3b0();
  FUN_1003a985c(&local_30,lVar1);
  *(code **)(lVar1 + 0x10) = FUN_1003cb568;
  lVar1 = FUN_10000c3b0();
  FUN_1003a985c(&local_30,lVar1);
  *(code **)(lVar1 + 0x10) = FUN_1003cb6f4;
  uVar2 = FUN_10000d8b8();
  FUN_1003a985c(&local_30,uVar2);
  lVar1 = FUN_10000ef8c();
  FUN_1003a985c(&local_30,lVar1);
  *(byte *)(lVar1 + 0x10) = *(byte *)(lVar1 + 0x10) & 0xe7 | 4;
  lVar1 = FUN_10000ceb8();
  FUN_1003a985c(&local_30,lVar1);
  *(undefined4 *)(lVar1 + 0x2c) = 0x3e4ccccd;
  *(undefined8 *)(lVar1 + 0x10) = 0;
  lVar1 = FUN_10000f250();
  FUN_1003a985c(&local_30,lVar1);
  *(undefined4 *)(lVar1 + 0x10) = 0xa5;
  FUN_1003d266c(lVar1,"CenterBody");
  *(undefined4 *)(lVar1 + 0x34) = 1;
  lVar1 = FUN_10000d8b8();
  FUN_1003a985c(&local_30,lVar1);
  *(undefined1 *)(lVar1 + 0x10) = 0;
  return local_30;
}




undefined8 FUN_10038d1e4(void)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_30 = 0;
  uStack_28 = 0;
  plVar1 = (long *)FUN_10000b638();
  FUN_1003a985c(&local_30,plVar1);
  plVar1 = (long *)(**(code **)(*plVar1 + 0x50))(plVar1);
  plVar1 = (long *)(**(code **)(*plVar1 + 0x50))();
  plVar1 = (long *)(**(code **)(*plVar1 + 8))();
  plVar1 = (long *)(**(code **)(*plVar1 + 0x20))();
  plVar1 = (long *)(**(code **)(*plVar1 + 0x28))();
  (**(code **)(*plVar1 + 0x40))();
  uVar2 = FUN_10000f034();
  FUN_1003a985c(&local_30,uVar2);
  return local_30;
}




undefined8 FUN_10038d27c(void)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined4 local_60 [2];
  undefined4 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  local_50 = 0;
  uStack_48 = 0;
  lVar2 = FUN_10000d8b8();
  FUN_1003a985c(&local_50,lVar2);
  *(undefined1 *)(lVar2 + 0x10) = 1;
  uVar3 = FUN_10000ef8c();
  FUN_1003a985c(&local_50,uVar3);
  plVar4 = (long *)thunk_FUN_10000e358();
  FUN_1003a985c(&local_50,plVar4);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x60))(plVar4,"CenterBody");
  (**(code **)(*plVar4 + 0x48))(plVar4,"Effect_Hero052_Ball_Appear");
  lVar2 = FUN_10000dff8();
  FUN_1003a985c(&local_50,lVar2);
  *(undefined2 *)(lVar2 + 0x28) = 0x100;
  *(undefined8 *)(lVar2 + 0x30) = 0;
  uVar1 = FUN_1004d2524("Move");
  uVar1 = FUN_100015208("Move",uVar1,0x12345678);
  *(undefined4 *)(lVar2 + 0x10) = uVar1;
  uVar1 = FUN_1004d2524("AttackToIdle");
  uVar1 = FUN_100015208("AttackToIdle",uVar1,0x12345678);
  *(undefined4 *)(lVar2 + 0x20) = uVar1;
  plVar4 = (long *)FUN_10000cd5c();
  FUN_1003a985c(&local_50,plVar4);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x90))(plVar4);
  local_60[0] = 0x42200000;
  local_58 = 1;
  plVar4 = (long *)(**(code **)(*plVar4 + 0xa0))(plVar4,local_60);
  (**(code **)(*plVar4 + 0xb0))(plVar4,1);
  uVar3 = FUN_10000f9c0();
  FUN_1003a985c(&local_50,uVar3);
  lVar2 = FUN_10000ceb8();
  FUN_1003a985c(&local_50,lVar2);
  *(undefined4 *)(lVar2 + 0x2c) = 0x3e4ccccd;
  *(undefined8 *)(lVar2 + 0x10) = 0;
  plVar4 = (long *)thunk_FUN_10000e358();
  FUN_1003a985c(&local_50,plVar4);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x60))(plVar4,"CenterBody");
  (**(code **)(*plVar4 + 0x48))(plVar4,"Effect_Hero052_Ball_Appear");
  lVar2 = FUN_10000d8b8();
  FUN_1003a985c(&local_50,lVar2);
  *(undefined1 *)(lVar2 + 0x10) = 0;
  return local_50;
}




undefined8 FUN_10038d46c(void)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  code *local_40;
  undefined4 local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_30 = 0;
  uStack_28 = 0;
  uVar1 = FUN_10000d8b8();
  FUN_1003a985c(&local_30,uVar1);
  lVar2 = FUN_10000ef8c();
  FUN_1003a985c(&local_30,lVar2);
  *(byte *)(lVar2 + 0x10) = *(byte *)(lVar2 + 0x10) & 0xe7 | 4;
  lVar2 = FUN_10000ceb8();
  FUN_1003a985c(&local_30,lVar2);
  *(undefined4 *)(lVar2 + 0x2c) = 0x3e4ccccd;
  *(undefined8 *)(lVar2 + 0x10) = 0;
  lVar2 = FUN_10000f250();
  FUN_1003a985c(&local_30,lVar2);
  *(undefined4 *)(lVar2 + 0x10) = 0xa6;
  FUN_1003d266c(lVar2,"CenterBody");
  *(undefined4 *)(lVar2 + 0x34) = 1;
  plVar3 = (long *)FUN_10000de28();
  FUN_1003a985c(&local_30,plVar3);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x50))(plVar3);
  local_40 = FUN_1003cb880;
  local_38 = 3;
  (**(code **)(*plVar3 + 0x18))(plVar3,0,&local_40);
  lVar2 = FUN_10000d8b8();
  FUN_1003a985c(&local_30,lVar2);
  *(undefined1 *)(lVar2 + 0x10) = 0;
  return local_30;
}




undefined8 FUN_10038d584(void)

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
  plVar1 = (long *)FUN_10000de28();
  FUN_1003a985c(&local_30,plVar1);
  plVar1 = (long *)(**(code **)(*plVar1 + 0x50))(plVar1);
  local_40 = FUN_1003cb3f8;
  local_38 = 3;
  (**(code **)(*plVar1 + 0x18))(plVar1,0,&local_40);
  uVar2 = FUN_10000ef8c();
  FUN_1003a985c(&local_30,uVar2);
  uVar2 = FUN_10000bc94();
  FUN_1003a985c(&local_30,uVar2);
  plVar1 = (long *)FUN_10000bed8();
  FUN_1003a985c(&local_30,plVar1);
  plVar1 = (long *)(**(code **)(*plVar1 + 0x70))(plVar1,PTR_s_Buff_Stunned_10185a208);
  local_40 = (code *)CONCAT44(local_40._4_4_,0x40000000);
  local_38 = 1;
  (**(code **)(*plVar1 + 0x18))(plVar1,&local_40);
  lVar3 = FUN_10000f250();
  FUN_1003a985c(&local_30,lVar3);
  *(undefined4 *)(lVar3 + 0x10) = 0xa3;
  FUN_1003d266c(lVar3,"CenterBody");
  uVar2 = FUN_10000f034();
  FUN_1003a985c(&local_30,uVar2);
  return local_30;
}




undefined8 FUN_10038d6a0(void)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined4 local_50 [2];
  undefined4 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  local_40 = 0;
  uStack_38 = 0;
  lVar1 = FUN_10000ef8c();
  FUN_1003a985c(&local_40,lVar1);
  *(byte *)(lVar1 + 0x10) = *(byte *)(lVar1 + 0x10) & 0xe7 | 4;
  plVar2 = (long *)thunk_FUN_10000e358();
  FUN_1003a985c(&local_40,plVar2);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x60))(plVar2,"InFront");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Hero052_Ultimate_Warning");
  local_50[0] = 0x3f19999a;
  local_48 = 1;
  plVar2 = (long *)(**(code **)(*plVar2 + 0x60))(plVar2,local_50);
  plVar2 = (long *)(**(code **)(*plVar2 + 0xc0))(0x3f800000,0,0);
  (**(code **)(*plVar2 + 0xd8))(0x3e99999a);
  lVar1 = FUN_10000ceb8();
  FUN_1003a985c(&local_40,lVar1);
  *(undefined4 *)(lVar1 + 0x2c) = 0x3f000000;
  *(undefined8 *)(lVar1 + 0x10) = 0;
  lVar1 = FUN_10000f250();
  FUN_1003a985c(&local_40,lVar1);
  *(undefined4 *)(lVar1 + 0x10) = 0xa4;
  FUN_1003d266c(lVar1,"CenterBody");
  *(undefined4 *)(lVar1 + 0x34) = 1;
  plVar2 = (long *)FUN_10000cd5c();
  FUN_1003a985c(&local_40,plVar2);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x88))(plVar2);
  local_50[0] = 0x3eb33333;
  local_48 = 1;
  plVar2 = (long *)(**(code **)(*plVar2 + 0xa8))(plVar2,local_50);
  (**(code **)(*plVar2 + 0xb0))(plVar2,0);
  uVar3 = FUN_10000f9c0();
  FUN_1003a985c(&local_40,uVar3);
  lVar1 = FUN_10000ceb8();
  FUN_1003a985c(&local_40,lVar1);
  *(undefined4 *)(lVar1 + 0x2c) = 0x3e4ccccd;
  *(undefined8 *)(lVar1 + 0x10) = 0;
  plVar2 = (long *)thunk_FUN_10000e358();
  FUN_1003a985c(&local_40,plVar2);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x60))(plVar2,"CenterBody");
  (**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Hero052_Ball_RushStun");
  uVar3 = FUN_10000f034();
  FUN_1003a985c(&local_40,uVar3);
  return local_40;
}




undefined8 FUN_10038d8ac(void)

{
  byte bVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  undefined4 local_50 [2];
  undefined4 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  local_40 = 0;
  uStack_38 = 0;
  uVar2 = FUN_10000d8b8();
  FUN_1003a985c(&local_40,uVar2);
  lVar3 = FUN_10000ef8c();
  FUN_1003a985c(&local_40,lVar3);
  *(byte *)(lVar3 + 0x10) = *(byte *)(lVar3 + 0x10) & 0xe7 | 4;
  lVar3 = FUN_10000ceb8();
  FUN_1003a985c(&local_40,lVar3);
  *(undefined4 *)(lVar3 + 0x2c) = 0x3e4ccccd;
  *(undefined8 *)(lVar3 + 0x10) = 0;
  lVar3 = FUN_10000ceb8();
  FUN_1003a985c(&local_40,lVar3);
  *(undefined4 *)(lVar3 + 0x2c) = 0x3e4ccccd;
  *(undefined8 *)(lVar3 + 0x10) = 0;
  plVar4 = (long *)thunk_FUN_10000e358();
  FUN_1003a985c(&local_40,plVar4);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x60))(plVar4,"CenterBody");
  (**(code **)(*plVar4 + 0x48))(plVar4,"Effect_Hero052_A");
  plVar4 = (long *)thunk_FUN_10000e358();
  FUN_1003a985c(&local_40,plVar4);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x60))(plVar4,"CenterBody");
  (**(code **)(*plVar4 + 0x48))(plVar4,"Effect_Hero052_Ball_RushStun");
  lVar3 = FUN_1003e10f0();
  bVar1 = *(byte *)(lVar3 + 0xe5);
  lVar3 = FUN_10000ecbc();
  FUN_1003a985c(&local_40,lVar3);
  *(code **)(lVar3 + 0x70) = FUN_1003cb40c;
  *(code **)(lVar3 + 0x78) = FUN_1003cb458;
  *(undefined4 *)(lVar3 + 0x88) = 0x3f800000;
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
  FUN_1003a985c(&local_40,plVar4);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x70))(plVar4,PTR_s_Buff_Stunned_10185a208);
  local_50[0] = 0x40000000;
  local_48 = 1;
  (**(code **)(*plVar4 + 0x18))(plVar4,local_50);
  uVar2 = FUN_10000c784();
  FUN_1003a985c(&local_40,uVar2);
  lVar3 = FUN_10000d8b8();
  FUN_1003a985c(&local_40,lVar3);
  *(undefined1 *)(lVar3 + 0x10) = 0;
  return local_40;
}




void FUN_10038dad4(undefined8 param_1,undefined8 param_2)

{
  FUN_1003cb894("Attack",param_2,0);
  return;
}




void FUN_10038dae4(undefined8 param_1,undefined8 param_2)

{
  FUN_1003cb894("AltAttack",param_2,0);
  return;
}




void FUN_10038daf4(undefined8 param_1,undefined8 param_2)

{
  FUN_1003cb894("CritAttack",param_2,2);
  return;
}




undefined8 FUN_10038db04(void)

{
  byte bVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  undefined4 local_50 [2];
  undefined4 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  local_40 = 0;
  uStack_38 = 0;
  uVar2 = FUN_10000d8b8();
  FUN_1003a985c(&local_40,uVar2);
  lVar3 = FUN_10000ef8c();
  FUN_1003a985c(&local_40,lVar3);
  *(byte *)(lVar3 + 0x10) = *(byte *)(lVar3 + 0x10) & 0xe7 | 4;
  lVar3 = FUN_10000ceb8();
  FUN_1003a985c(&local_40,lVar3);
  *(undefined4 *)(lVar3 + 0x2c) = 0x3dcccccd;
  *(undefined8 *)(lVar3 + 0x10) = 0;
  plVar4 = (long *)thunk_FUN_10000e358();
  FUN_1003a985c(&local_40,plVar4);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x58))(plVar4);
  (**(code **)(*plVar4 + 0x48))(plVar4,"Effect_Hero053_A_Beam_Warning");
  lVar3 = FUN_10000ceb8();
  FUN_1003a985c(&local_40,lVar3);
  *(undefined4 *)(lVar3 + 0x2c) = 0x3f19999a;
  *(undefined8 *)(lVar3 + 0x10) = 0;
  plVar4 = (long *)thunk_FUN_10000e358();
  FUN_1003a985c(&local_40,plVar4);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x58))(plVar4);
  (**(code **)(*plVar4 + 0x48))(plVar4,"Effect_Hero053_A_Beam");
  lVar3 = FUN_10000ceb8();
  FUN_1003a985c(&local_40,lVar3);
  *(undefined4 *)(lVar3 + 0x2c) = 0x3e99999a;
  *(undefined8 *)(lVar3 + 0x10) = 0;
  lVar3 = FUN_1003e10f0();
  bVar1 = *(byte *)(lVar3 + 0xe5);
  lVar3 = FUN_10000ecbc();
  FUN_1003a985c(&local_40,lVar3);
  *(code **)(lVar3 + 0x70) = FUN_1003cb978;
  *(code **)(lVar3 + 0x78) = FUN_1003cb9c4;
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
  FUN_1003a985c(&local_40,plVar4);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x70))(plVar4,PTR_s_Buff_Stunned_10185a208);
  local_50[0] = 0x40000000;
  local_48 = 1;
  (**(code **)(*plVar4 + 0x18))(plVar4,local_50);
  uVar2 = FUN_10000c784();
  FUN_1003a985c(&local_40,uVar2);
  lVar3 = FUN_10000d8b8();
  FUN_1003a985c(&local_40,lVar3);
  *(undefined1 *)(lVar3 + 0x10) = 0;
  return local_40;
}




undefined8 FUN_10038dd4c(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 local_40;
  undefined8 uStack_38;
  
  local_40 = 0;
  uStack_38 = 0;
  lVar1 = FUN_10000d8b8();
  FUN_1003a985c(&local_40,lVar1);
  *(undefined1 *)(lVar1 + 0x10) = 1;
  uVar2 = FUN_10000ef8c();
  FUN_1003a985c(&local_40,uVar2);
  lVar1 = FUN_10000ceb8();
  FUN_1003a985c(&local_40,lVar1);
  *(undefined4 *)(lVar1 + 0x2c) = 0x3e4ccccd;
  *(undefined8 *)(lVar1 + 0x10) = 0;
  lVar1 = FUN_10000f250();
  FUN_1003a985c(&local_40,lVar1);
  *(undefined4 *)(lVar1 + 0x10) = 0xa8;
  FUN_1003d266c(lVar1,"CenterBody");
  *(undefined4 *)(lVar1 + 0x34) = 1;
  *(undefined4 *)(lVar1 + 0x40) = 0xc1a00000;
  lVar1 = FUN_10000f250();
  FUN_1003a985c(&local_40,lVar1);
  *(undefined4 *)(lVar1 + 0x10) = 0xa9;
  FUN_1003d266c(lVar1,"CenterBody");
  *(undefined4 *)(lVar1 + 0x34) = 1;
  *(undefined4 *)(lVar1 + 0x40) = 0xc1200000;
  lVar1 = FUN_10000f250();
  FUN_1003a985c(&local_40,lVar1);
  *(undefined4 *)(lVar1 + 0x10) = 0xaa;
  FUN_1003d266c(lVar1,"CenterBody");
  *(undefined4 *)(lVar1 + 0x34) = 1;
  *(undefined4 *)(lVar1 + 0x40) = 0;
  lVar1 = FUN_10000f250();
  FUN_1003a985c(&local_40,lVar1);
  *(undefined4 *)(lVar1 + 0x10) = 0xab;
  FUN_1003d266c(lVar1,"CenterBody");
  *(undefined4 *)(lVar1 + 0x34) = 1;
  *(undefined4 *)(lVar1 + 0x40) = 0x41200000;
  lVar1 = FUN_10000f250();
  FUN_1003a985c(&local_40,lVar1);
  *(undefined4 *)(lVar1 + 0x10) = 0xac;
  FUN_1003d266c(lVar1,"CenterBody");
  *(undefined4 *)(lVar1 + 0x34) = 1;
  *(undefined4 *)(lVar1 + 0x40) = 0x41a00000;
  lVar1 = FUN_10000ceb8();
  FUN_1003a985c(&local_40,lVar1);
  *(undefined4 *)(lVar1 + 0x2c) = 0x3e4ccccd;
  *(undefined8 *)(lVar1 + 0x10) = 0;
  lVar1 = FUN_10000d8b8();
  FUN_1003a985c(&local_40,lVar1);
  *(undefined1 *)(lVar1 + 0x10) = 0;
  return local_40;
}




undefined8 FUN_10038df08(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 local_40;
  undefined8 uStack_38;
  
  local_40 = 0;
  uStack_38 = 0;
  lVar1 = FUN_10000d8b8();
  FUN_1003a985c(&local_40,lVar1);
  *(undefined1 *)(lVar1 + 0x10) = 1;
  uVar2 = FUN_10000ef8c();
  FUN_1003a985c(&local_40,uVar2);
  lVar1 = FUN_10000ceb8();
  FUN_1003a985c(&local_40,lVar1);
  *(undefined4 *)(lVar1 + 0x2c) = 0x3e4ccccd;
  *(undefined8 *)(lVar1 + 0x10) = 0;
  lVar1 = FUN_10000f250();
  FUN_1003a985c(&local_40,lVar1);
  *(undefined4 *)(lVar1 + 0x10) = 0xad;
  FUN_1003d266c(lVar1,"CenterBody");
  *(undefined4 *)(lVar1 + 0x34) = 1;
  lVar1 = FUN_10000ceb8();
  FUN_1003a985c(&local_40,lVar1);
  *(undefined4 *)(lVar1 + 0x2c) = 0x3e4ccccd;
  *(undefined8 *)(lVar1 + 0x10) = 0;
  lVar1 = FUN_10000d8b8();
  FUN_1003a985c(&local_40,lVar1);
  *(undefined1 *)(lVar1 + 0x10) = 0;
  return local_40;
}




void FUN_10038dfec(void)

{
  FUN_1003cbaa8("Attack","Effect_Anka_AA",0);
  return;
}




void FUN_10038e004(void)

{
  FUN_1003cbaa8("AltAttack","Effect_Anka_AA_Alt",0);
  return;
}




void FUN_10038e01c(void)

{
  FUN_1003cbaa8("CritAttack","Effect_Anka_AA_Crit",2);
  return;
}




undefined8 FUN_10038e034(void)

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
  (**(code **)(*plVar1 + 0x58))(plVar1,"PerkAttack");
  plVar1 = (long *)thunk_FUN_10000e5dc();
  FUN_1003a985c(&local_30,plVar1);
  plVar1 = (long *)(**(code **)(*plVar1 + 0x58))(plVar1,"Sound_Anka_Perk_Attack");
  uVar2 = FUN_1010a1520();
  lVar3 = FUN_1010a0e0c(uVar2,0,"*KindredSoundBalance*",0);
  FUN_1003cbcdc(*(undefined4 *)(lVar3 + 0x4dc));
  (**(code **)(*plVar1 + 0x28))(plVar1);
  lVar3 = FUN_10000ceb8();
  FUN_1003a985c(&local_30,lVar3);
  *(code **)(lVar3 + 0x10) = FUN_1003a24a0;
  *(code **)(lVar3 + 0x18) = FUN_1003c5148;
  plVar1 = (long *)thunk_FUN_10000e358();
  FUN_1003a985c(&local_30,plVar1);
  plVar1 = (long *)(**(code **)(*plVar1 + 0x58))(plVar1);
  plVar1 = (long *)(**(code **)(*plVar1 + 0x48))(plVar1,"Effect_Anka_AA_Perk");
  (**(code **)(*plVar1 + 0x78))(plVar1,0);
  plVar1 = (long *)FUN_10000cc74();
  FUN_1003a985c(&local_30,plVar1);
  (**(code **)(*plVar1 + 0x58))(plVar1,1);
  plVar1 = (long *)FUN_10000cc74();
  FUN_1003a985c(&local_30,plVar1);
  plVar1 = (long *)(**(code **)(*plVar1 + 0x50))(plVar1);
  local_40 = FUN_1003cbd40;
  local_38 = 5;
  (**(code **)(*plVar1 + 0x18))(plVar1,&local_40,1,1);
  plVar1 = (long *)thunk_FUN_10000e5dc();
  FUN_1003a985c(&local_30,plVar1);
  plVar1 = (long *)(**(code **)(*plVar1 + 0x58))(plVar1,"Sound_Anka_Perk_Impact");
  uVar2 = FUN_1010a1520();
  lVar3 = FUN_1010a0e0c(uVar2,0,"*KindredSoundBalance*",0);
  FUN_1003cbcdc(*(undefined4 *)(lVar3 + 0x4dc));
  (**(code **)(*plVar1 + 0x28))(plVar1);
  uVar2 = FUN_10000bb2c();
  FUN_1003a985c(&local_30,uVar2);
  lVar3 = FUN_10000c540();
  FUN_1003a985c(&local_30,lVar3);
  *(undefined **)(lVar3 + 0x10) = PTR_s_Buff_Anka_Perk_Ready_10185b408;
  uVar2 = FUN_10000c784();
  FUN_1003a985c(&local_30,uVar2);
  return local_30;
}




undefined8 FUN_10038e270(void)

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
  plVar2 = (long *)(**(code **)(*plVar2 + 0x58))(plVar2,"Sound_Anka_Ability_A1_Cast");
  uVar3 = FUN_1010a1520();
  lVar1 = FUN_1010a0e0c(uVar3,0,"*KindredSoundBalance*",0);
  FUN_1003cbcdc(*(undefined4 *)(lVar1 + 0x4e0));
  (**(code **)(*plVar2 + 0x28))(plVar2);
  lVar1 = FUN_10000ceb8();
  FUN_1003a985c(&local_30,lVar1);
  *(undefined4 *)(lVar1 + 0x2c) = 0x3e99999a;
  *(undefined8 *)(lVar1 + 0x10) = 0;
  plVar2 = (long *)thunk_FUN_10000e358();
  FUN_1003a985c(&local_30,plVar2);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x58))(plVar2);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Anka_A");
  (**(code **)(*plVar2 + 0x78))(plVar2,0);
  lVar1 = FUN_10000f250();
  FUN_1003a985c(&local_30,lVar1);
  *(undefined4 *)(lVar1 + 0x10) = 0xae;
  FUN_1003d266c(lVar1,"CenterBody");
  *(undefined4 *)(lVar1 + 0x34) = 0;
  uVar3 = FUN_10000c6d4();
  FUN_1003a985c(&local_30,uVar3);
  lVar1 = FUN_10000d8b8();
  FUN_1003a985c(&local_30,lVar1);
  *(undefined1 *)(lVar1 + 0x10) = 0;
  return local_30;
}




undefined8 FUN_10038e428(void)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  code *local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  local_70 = 0;
  uStack_68 = 0;
  lVar2 = FUN_10000e94c();
  FUN_1003a985c(&local_70,lVar2);
  *(code **)(lVar2 + 0x10) = FUN_1003cbf78;
  lVar2 = FUN_1003e10f0();
  bVar1 = *(byte *)(lVar2 + 0xe5);
  lVar2 = FUN_10000d8b8();
  FUN_1003a985c(&local_70,lVar2);
  *(undefined1 *)(lVar2 + 0x10) = 1;
  lVar2 = FUN_10000eaac();
  FUN_1003a985c(&local_70,lVar2);
  *(undefined **)(lVar2 + 0x78) = PTR_s_Buff_Anka_A_DaggerMark_10185b410;
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
  bVar1 = bVar1 | 0x14;
  *(byte *)(lVar2 + 0x6a) = bVar1;
  *(undefined2 *)(lVar2 + 0x68) = 0x4120;
  *(byte *)(lVar2 + 0x80) = *(byte *)(lVar2 + 0x80) & 0xf8 | 5;
  lVar2 = FUN_10000c8e8();
  FUN_1003a985c(&local_70,lVar2);
  lVar3 = FUN_10049ae50(lVar2 + 0x10);
  *(undefined4 *)(lVar3 + 0x18) = 0;
  *(undefined4 *)(lVar3 + 8) = 0;
  *(undefined4 *)(lVar3 + 0x10) = 1;
  lVar2 = lVar2 + 0xb0;
  lVar3 = FUN_10000ef8c();
  FUN_1003a985c(lVar2,lVar3);
  *(byte *)(lVar3 + 0x10) = *(byte *)(lVar3 + 0x10) & 0xe7 | 4;
  uVar4 = FUN_10000c784();
  FUN_1003a985c(lVar2,uVar4);
  plVar5 = (long *)thunk_FUN_10000e0ac();
  FUN_1003a985c(lVar2,plVar5);
  (**(code **)(*plVar5 + 0x50))(plVar5,"AbilityA2Start");
  plVar5 = (long *)thunk_FUN_10000e358();
  FUN_1003a985c(lVar2,plVar5);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x58))(plVar5);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x48))(plVar5,"Effect_Anka_A2_Start");
  (**(code **)(*plVar5 + 0x78))(plVar5,0);
  plVar5 = (long *)thunk_FUN_10000e5dc();
  FUN_1003a985c(lVar2,plVar5);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x58))(plVar5,"Sound_Anka_Ability_A2_Cast");
  uVar4 = FUN_1010a1520();
  lVar3 = FUN_1010a0e0c(uVar4,0,"*KindredSoundBalance*",0);
  FUN_1003cbcdc(*(undefined4 *)(lVar3 + 0x4e0));
  (**(code **)(*plVar5 + 0x28))(plVar5);
  lVar3 = FUN_10000ceb8();
  FUN_1003a985c(lVar2,lVar3);
  *(undefined4 *)(lVar3 + 0x2c) = 0x3e99999a;
  *(undefined8 *)(lVar3 + 0x10) = 0;
  lVar2 = FUN_10000eaac();
  FUN_1003a985c(&local_70,lVar2);
  *(undefined **)(lVar2 + 0x78) = PTR_s_Buff_Anka_A_DaggerMark_10185b410;
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
  *(byte *)(lVar2 + 0x6a) = bVar1;
  *(undefined2 *)(lVar2 + 0x68) = 0x4120;
  *(byte *)(lVar2 + 0x80) = *(byte *)(lVar2 + 0x80) & 0xf8 | 5;
  lVar2 = FUN_10000c8e8();
  FUN_1003a985c(&local_70,lVar2);
  lVar3 = FUN_10049ae50(lVar2 + 0x10);
  *(undefined4 *)(lVar3 + 0x18) = 0;
  *(undefined4 *)(lVar3 + 8) = 0;
  *(undefined4 *)(lVar3 + 0x10) = 1;
  lVar2 = lVar2 + 0xb0;
  plVar5 = (long *)FUN_10000f748();
  FUN_1003a985c(lVar2,plVar5);
  (**(code **)(*plVar5 + 0x50))(plVar5,FUN_1003cbddc);
  plVar5 = (long *)thunk_FUN_10000e5dc();
  FUN_1003a985c(lVar2,plVar5);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x58))(plVar5,"Sound_Anka_Ability_A2_Appear");
  uVar4 = FUN_1010a1520();
  lVar3 = FUN_1010a0e0c(uVar4,0,"*KindredSoundBalance*",0);
  FUN_1003cbcdc(*(undefined4 *)(lVar3 + 0x4e0));
  (**(code **)(*plVar5 + 0x28))(plVar5);
  plVar5 = (long *)FUN_10000bed8();
  FUN_1003a985c(lVar2,plVar5);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x70))(plVar5,PTR_s_Buff_Anka_A_BlinkStrikePfx_10185b418);
  local_80 = (code *)CONCAT44(local_80._4_4_,0x3dcccccd);
  local_78 = 1;
  (**(code **)(*plVar5 + 0x18))(plVar5,&local_80);
  plVar5 = (long *)FUN_10000cb8c();
  FUN_1003a985c(lVar2,plVar5);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x50))(plVar5);
  (**(code **)(*plVar5 + 0x38))(plVar5,"Damage2",0);
  plVar5 = (long *)thunk_FUN_10000e5dc();
  FUN_1003a985c(lVar2,plVar5);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x58))(plVar5,"Sound_Anka_Ability_A2_Impact");
  uVar4 = FUN_1010a1520();
  lVar3 = FUN_1010a0e0c(uVar4,0,"*KindredSoundBalance*",0);
  FUN_1003cbcdc(*(undefined4 *)(lVar3 + 0x4e0));
  (**(code **)(*plVar5 + 0x28))(plVar5);
  lVar3 = FUN_10000c540();
  FUN_1003a985c(lVar2,lVar3);
  *(undefined **)(lVar3 + 0x10) = PTR_s_Buff_Anka_A_DaggerMark_10185b410;
  *(byte *)(lVar3 + 0x20) = *(byte *)(lVar3 + 0x20) | 1;
  uVar4 = FUN_10000b874();
  FUN_1003a985c(lVar2,uVar4);
  uVar4 = FUN_10000c784();
  FUN_1003a985c(lVar2,uVar4);
  plVar5 = (long *)FUN_10000bdf0();
  FUN_1003a985c(lVar2,plVar5);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x50))
                             (plVar5,PTR_s_Buff_Anka_A_BlinkedSpeedBoost_10185b420);
  local_80 = FUN_1003cc070;
  local_78 = 3;
  (**(code **)(*plVar5 + 0x18))(plVar5,&local_80);
  uVar4 = FUN_10000bb2c();
  FUN_1003a985c(lVar2,uVar4);
  lVar3 = FUN_10000e7fc();
  FUN_1003a985c(lVar2,lVar3);
  *(undefined4 *)(lVar3 + 0x10) = 0x3ecccccd;
  lVar3 = FUN_10000c540();
  FUN_1003a985c(lVar2,lVar3);
  *(undefined **)(lVar3 + 0x10) = PTR_s_Buff_Anka_A_CanBlink_10185b428;
  uVar4 = FUN_10000c784();
  FUN_1003a985c(lVar2,uVar4);
  lVar2 = FUN_10000d8b8();
  FUN_1003a985c(&local_70,lVar2);
  *(undefined1 *)(lVar2 + 0x10) = 0;
  return local_70;
}




undefined8 FUN_10038e9ac(void)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
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
  plVar2 = (long *)thunk_FUN_10000e358();
  FUN_1003a985c(&local_40,plVar2);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x58))(plVar2);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Anka_B");
  (**(code **)(*plVar2 + 0x78))(plVar2,0);
  plVar2 = (long *)thunk_FUN_10000e0ac();
  FUN_1003a985c(&local_40,plVar2);
  (**(code **)(*plVar2 + 0x50))(plVar2,"AbilityB");
  plVar2 = (long *)thunk_FUN_10000e5dc();
  FUN_1003a985c(&local_40,plVar2);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x58))(plVar2,"Sound_Anka_Ability_B_Cast");
  uVar3 = FUN_1010a1520();
  lVar1 = FUN_1010a0e0c(uVar3,0,"*KindredSoundBalance*",0);
  FUN_1003cbcdc(*(undefined4 *)(lVar1 + 0x4e4));
  (**(code **)(*plVar2 + 0x28))(plVar2);
  lVar1 = FUN_10000ceb8();
  FUN_1003a985c(&local_40,lVar1);
  *(undefined4 *)(lVar1 + 0x2c) = 0x3e4ccccd;
  *(undefined8 *)(lVar1 + 0x10) = 0;
  lVar1 = FUN_10000f250();
  FUN_1003a985c(&local_40,lVar1);
  *(undefined4 *)(lVar1 + 0x10) = 0xaf;
  FUN_1003d266c(lVar1,"CenterBody");
  *(undefined4 *)(lVar1 + 0x34) = 0;
  lVar1 = FUN_10000f250();
  FUN_1003a985c(&local_40,lVar1);
  *(undefined4 *)(lVar1 + 0x10) = 0xaf;
  FUN_1003d266c(lVar1,"CenterBody");
  *(undefined4 *)(lVar1 + 0x34) = 1;
  *(undefined4 *)(lVar1 + 0x40) = 0x41200000;
  lVar1 = FUN_10000f250();
  FUN_1003a985c(&local_40,lVar1);
  *(undefined4 *)(lVar1 + 0x10) = 0xaf;
  FUN_1003d266c(lVar1,"CenterBody");
  *(undefined4 *)(lVar1 + 0x34) = 1;
  *(undefined4 *)(lVar1 + 0x40) = 0xc1200000;
  lVar1 = FUN_10000f250();
  FUN_1003a985c(&local_40,lVar1);
  *(undefined4 *)(lVar1 + 0x10) = 0xaf;
  FUN_1003d266c(lVar1,"CenterBody");
  *(undefined4 *)(lVar1 + 0x34) = 1;
  *(undefined4 *)(lVar1 + 0x40) = 0x41a00000;
  lVar1 = FUN_10000f250();
  FUN_1003a985c(&local_40,lVar1);
  *(undefined4 *)(lVar1 + 0x10) = 0xaf;
  FUN_1003d266c(lVar1,"CenterBody");
  *(undefined4 *)(lVar1 + 0x34) = 1;
  *(undefined4 *)(lVar1 + 0x40) = 0xc1a00000;
  lVar1 = FUN_10000d8b8();
  FUN_1003a985c(&local_40,lVar1);
  *(undefined1 *)(lVar1 + 0x10) = 0;
  return local_40;
}




undefined8 FUN_10038ec20(void)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  long *plVar4;
  code *local_70;
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
  uVar2 = FUN_10000cf70();
  FUN_1003a985c(&local_60,uVar2);
  plVar3 = (long *)FUN_10000bdf0();
  FUN_1003a985c(&local_60,plVar3);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x50))(plVar3,PTR_s_Buff_Anka_C_IAmDashing_10185b430);
  local_70 = (code *)CONCAT44(local_70._4_4_,0x3f19999a);
  local_68 = 1;
  (**(code **)(*plVar3 + 0x18))(plVar3,&local_70);
  plVar3 = (long *)FUN_10000bdf0();
  FUN_1003a985c(&local_60,plVar3);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x50))(plVar3,PTR_s_Buff_SelfProjectile_10185a530);
  local_70 = FUN_1003cc340;
  local_68 = 3;
  plVar3 = (long *)(**(code **)(*plVar3 + 0x18))(plVar3,&local_70);
  (**(code **)(*plVar3 + 0x48))(plVar3,0xb0);
  plVar3 = (long *)thunk_FUN_10000e0ac();
  FUN_1003a985c(&local_60,plVar3);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x50))(plVar3,"AbilityCDash");
  (**(code **)(*plVar3 + 0x18))(plVar3,"AttackToIdleCombat");
  plVar3 = (long *)thunk_FUN_10000e5dc();
  FUN_1003a985c(&local_60,plVar3);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x58))(plVar3,"Sound_Anka_Ability_C_Cast");
  uVar2 = FUN_1010a1520();
  lVar1 = FUN_1010a0e0c(uVar2,0,"*KindredSoundBalance*",0);
  FUN_1003cbcdc(*(undefined4 *)(lVar1 + 0x4e8));
  (**(code **)(*plVar3 + 0x28))(plVar3);
  plVar3 = (long *)FUN_10000cd5c();
  FUN_1003a985c(&local_60,plVar3);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x78))(plVar3);
  plVar3 = (long *)(**(code **)(*plVar3 + 0xb0))(plVar3,1);
  local_70 = FUN_1003cc340;
  local_68 = 3;
  (**(code **)(*plVar3 + 0xa8))(plVar3,&local_70);
  plVar3 = (long *)FUN_10000f300();
  FUN_1003a985c(&local_60,plVar3);
  plVar4 = (long *)(**(code **)(*plVar3 + 0x50))(plVar3,"*Anka_C_Clone*",1);
  (**(code **)(*plVar4 + 0x20))(plVar4,FUN_1003cc084);
  plVar4 = (long *)FUN_10000bfc0();
  FUN_1003a985c(&local_60,plVar4);
  plVar3 = (long *)(**(code **)(*plVar4 + 0x50))
                             (plVar4,PTR_s_Buff_Anka_C_CloneDash_10185b438,plVar3 + 2);
  local_70._0_4_ = 0x4059999a;
  local_68 = 1;
  (**(code **)(*plVar3 + 0x18))(plVar3,&local_70);
  plVar3 = (long *)FUN_10000f300();
  FUN_1003a985c(&local_60,plVar3);
  plVar4 = (long *)(**(code **)(*plVar3 + 0x50))(plVar3,"*Anka_C_Clone*",1);
  (**(code **)(*plVar4 + 0x20))(plVar4,FUN_1003cc170);
  plVar4 = (long *)FUN_10000bfc0();
  FUN_1003a985c(&local_60,plVar4);
  plVar3 = (long *)(**(code **)(*plVar4 + 0x50))
                             (plVar4,PTR_s_Buff_Anka_C_CloneDash_10185b438,plVar3 + 2);
  local_70._0_4_ = 0x4059999a;
  local_68 = 1;
  (**(code **)(*plVar3 + 0x18))(plVar3,&local_70);
  plVar3 = (long *)FUN_10000f300();
  FUN_1003a985c(&local_60,plVar3);
  plVar4 = (long *)(**(code **)(*plVar3 + 0x50))(plVar3,"*Anka_C_Clone*",1);
  (**(code **)(*plVar4 + 0x20))(plVar4,FUN_1003cc254);
  plVar4 = (long *)FUN_10000bfc0();
  FUN_1003a985c(&local_60,plVar4);
  plVar3 = (long *)(**(code **)(*plVar4 + 0x50))
                             (plVar4,PTR_s_Buff_Anka_C_CloneDash_10185b438,plVar3 + 2);
  local_70 = (code *)CONCAT44(local_70._4_4_,0x4059999a);
  local_68 = 1;
  (**(code **)(*plVar3 + 0x18))(plVar3,&local_70);
  lVar1 = FUN_10000ceb8();
  FUN_1003a985c(&local_60,lVar1);
  *(undefined4 *)(lVar1 + 0x2c) = 0x3f19999a;
  *(undefined8 *)(lVar1 + 0x10) = 0;
  uVar2 = FUN_10000f9c0();
  FUN_1003a985c(&local_60,uVar2);
  lVar1 = FUN_10000d8b8();
  FUN_1003a985c(&local_60,lVar1);
  *(undefined1 *)(lVar1 + 0x10) = 0;
  return local_60;
}




undefined8 FUN_10038f038(void)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  code *local_50;
  undefined4 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  local_40 = 0;
  uStack_38 = 0;
  uVar1 = FUN_10000d8b8();
  FUN_1003a985c(&local_40,uVar1);
  plVar2 = (long *)thunk_FUN_10000e0ac();
  FUN_1003a985c(&local_40,plVar2);
  (**(code **)(*plVar2 + 0x50))(plVar2,"Dash");
  plVar2 = (long *)FUN_10000bdf0();
  FUN_1003a985c(&local_40,plVar2);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x50))(plVar2,PTR_s_Buff_SelfProjectile_10185a530);
  local_50 = FUN_1003cc354;
  local_48 = 3;
  plVar2 = (long *)(**(code **)(*plVar2 + 0x18))(plVar2,&local_50);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,0xb0);
  (**(code **)(*plVar2 + 0x50))(plVar2,2);
  plVar2 = (long *)thunk_FUN_10000e358();
  FUN_1003a985c(&local_40,plVar2);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x58))(plVar2);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Anka_C_Clone");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,1);
  (**(code **)(*plVar2 + 0xb0))(plVar2,1);
  plVar2 = (long *)FUN_10000cd5c();
  FUN_1003a985c(&local_40,plVar2);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2);
  plVar2 = (long *)(**(code **)(*plVar2 + 0xb0))(plVar2,1);
  local_50 = FUN_1003cc354;
  local_48 = 3;
  (**(code **)(*plVar2 + 0xa8))(plVar2,&local_50);
  lVar3 = FUN_10000ceb8();
  FUN_1003a985c(&local_40,lVar3);
  *(undefined4 *)(lVar3 + 0x2c) = 0x3f19999a;
  *(undefined8 *)(lVar3 + 0x10) = 0;
  uVar1 = FUN_10000f9c0();
  FUN_1003a985c(&local_40,uVar1);
  plVar2 = (long *)thunk_FUN_10000e0ac();
  FUN_1003a985c(&local_40,plVar2);
  (**(code **)(*plVar2 + 0x50))(plVar2,"DashDelay");
  lVar3 = FUN_10000d8b8();
  FUN_1003a985c(&local_40,lVar3);
  *(undefined1 *)(lVar3 + 0x10) = 0;
  return local_40;
}




undefined8 FUN_10038f230(void)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  code *local_40;
  undefined4 local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_30 = 0;
  uStack_28 = 0;
  uVar1 = FUN_10000d8b8();
  FUN_1003a985c(&local_30,uVar1);
  uVar1 = FUN_10000b9d0();
  FUN_1003a985c(&local_30,uVar1);
  lVar2 = FUN_10000ef8c();
  FUN_1003a985c(&local_30,lVar2);
  *(byte *)(lVar2 + 0x10) = *(byte *)(lVar2 + 0x10) & 0xe3 | 8;
  plVar3 = (long *)thunk_FUN_10000e5dc();
  FUN_1003a985c(&local_30,plVar3);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x58))(plVar3,"Sound_Anka_Ability_C_Return");
  uVar1 = FUN_1010a1520();
  lVar2 = FUN_1010a0e0c(uVar1,0,"*KindredSoundBalance*",0);
  FUN_1003cbcdc(*(undefined4 *)(lVar2 + 0x4e8));
  (**(code **)(*plVar3 + 0x28))(plVar3);
  plVar3 = (long *)thunk_FUN_10000e0ac();
  FUN_1003a985c(&local_30,plVar3);
  (**(code **)(*plVar3 + 0x50))(plVar3,"Dash");
  plVar3 = (long *)FUN_10000bdf0();
  FUN_1003a985c(&local_30,plVar3);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x50))(plVar3,PTR_s_Buff_SelfProjectile_10185a530);
  local_40 = FUN_1003cc354;
  local_38 = 3;
  plVar3 = (long *)(**(code **)(*plVar3 + 0x18))(plVar3,&local_40);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,0xb1);
  (**(code **)(*plVar3 + 0x50))(plVar3,2);
  uVar1 = FUN_10000c308();
  FUN_1003a985c(&local_30,uVar1);
  FUN_10000b604(uVar1,FUN_1003cc354);
  lVar2 = FUN_10000ceb8();
  FUN_1003a985c(&local_30,lVar2);
  *(code **)(lVar2 + 0x20) = FUN_1003cc354;
  *(undefined8 *)(lVar2 + 0x10) = 0;
  uVar1 = FUN_10000f9c0();
  FUN_1003a985c(&local_30,uVar1);
  uVar1 = FUN_10000c784();
  FUN_1003a985c(&local_30,uVar1);
  lVar2 = FUN_10000d8b8();
  FUN_1003a985c(&local_30,lVar2);
  *(undefined1 *)(lVar2 + 0x10) = 0;
  return local_30;
}




void FUN_10038f40c(void)

{
  FUN_1003cc734("Attack",0xb2,"Projectile");
  return;
}




void FUN_10038f424(void)

{
  FUN_1003cc734("AltAttack",0xb2,"Projectile");
  return;
}




void FUN_10038f43c(void)

{
  FUN_1003cc734("CritAttack",0xb3,"Projectile");
  return;
}




void FUN_10038f454(void)

{
  FUN_1003cc368(0xb4);
  return;
}




void FUN_10038f45c(void)

{
  FUN_1003cc368(0xb5);
  return;
}




undefined8 FUN_10038f464(void)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
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
  uVar2 = FUN_10000ef8c();
  FUN_1003a985c(&local_50,uVar2);
  plVar3 = (long *)thunk_FUN_10000e0ac();
  FUN_1003a985c(&local_50,plVar3);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x50))(plVar3,"Ability01");
  (**(code **)(*plVar3 + 0x18))(plVar3,"AttackToIdleCombat");
  plVar3 = (long *)thunk_FUN_10000e5dc();
  FUN_1003a985c(&local_50,plVar3);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x58))(plVar3,"Sound_Silvernail_A_Shot");
  uVar2 = FUN_1010a1520();
  lVar1 = FUN_1010a0e0c(uVar2,0,"*KindredSoundBalance*",0);
  FUN_1003cc63c(*(undefined4 *)(lVar1 + 0x4f4));
  (**(code **)(*plVar3 + 0x28))(plVar3);
  lVar1 = FUN_10000ceb8();
  FUN_1003a985c(&local_50,lVar1);
  *(undefined4 *)(lVar1 + 0x2c) = 0x3e99999a;
  *(undefined8 *)(lVar1 + 0x10) = 0;
  plVar3 = (long *)thunk_FUN_10000e358();
  FUN_1003a985c(&local_50,plVar3);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x60))(plVar3,"Projectile_A");
  (**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Silvernail_A");
  plVar3 = (long *)FUN_10000bdf0();
  FUN_1003a985c(&local_50,plVar3);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x50))
                             (plVar3,PTR_s_Buff_Silvernail_A_Tower_LimitChe_10185b458);
  local_60[0] = 0x3dcccccd;
  local_58 = 1;
  (**(code **)(*plVar3 + 0x18))(plVar3,local_60);
  lVar4 = FUN_10000c8e8();
  FUN_1003a985c(&local_50,lVar4);
  lVar1 = FUN_10049ab34(lVar4 + 0x10);
  *(undefined **)(lVar1 + 8) = PTR_s_Buff_Silvernail_Talent_TalentC_10185b460;
  lVar1 = lVar4 + 0xb0;
  plVar3 = (long *)FUN_10000f300();
  FUN_1003a985c(lVar1,plVar3);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x50))(plVar3,"*Silvernail_GroundedBolt*",1);
  (**(code **)(*plVar3 + 0x20))(plVar3,FUN_1003cd3d8);
  plVar3 = (long *)FUN_10000f300();
  FUN_1003a985c(lVar1,plVar3);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x50))(plVar3,"*Silvernail_GroundedBolt*",1);
  (**(code **)(*plVar3 + 0x20))(plVar3,FUN_1003cd478);
  plVar3 = (long *)FUN_10000f300();
  FUN_1003a985c(lVar1,plVar3);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x50))(plVar3,"*Silvernail_GroundedBolt*",1);
  (**(code **)(*plVar3 + 0x20))(plVar3,FUN_1003cd5b0);
  plVar3 = (long *)FUN_10000f300();
  FUN_1003a985c(lVar4 + 200,plVar3);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x50))(plVar3,"*Silvernail_GroundedBolt*",1);
  (**(code **)(*plVar3 + 0x20))(plVar3,FUN_1003cd218);
  lVar1 = FUN_10000ceb8();
  FUN_1003a985c(&local_50,lVar1);
  *(undefined4 *)(lVar1 + 0x2c) = 0x3dcccccd;
  *(undefined8 *)(lVar1 + 0x10) = 0;
  lVar1 = FUN_10000d8b8();
  FUN_1003a985c(&local_50,lVar1);
  *(undefined1 *)(lVar1 + 0x10) = 0;
  return local_50;
}




undefined8 FUN_10038f784(void)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  code *local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  local_50 = 0;
  uStack_48 = 0;
  lVar2 = FUN_10000d8b8();
  FUN_1003a985c(&local_50,lVar2);
  *(undefined1 *)(lVar2 + 0x10) = 1;
  uVar3 = FUN_10000ef8c();
  FUN_1003a985c(&local_50,uVar3);
  plVar4 = (long *)thunk_FUN_10000e0ac();
  FUN_1003a985c(&local_50,plVar4);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))(plVar4,"Ability02");
  (**(code **)(*plVar4 + 0x18))(plVar4,"AttackToIdleCombat");
  plVar4 = (long *)thunk_FUN_10000e5dc();
  FUN_1003a985c(&local_50,plVar4);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x58))(plVar4,"Sound_Silvernail_B");
  uVar3 = FUN_1010a1520();
  lVar2 = FUN_1010a0e0c(uVar3,0,"*KindredSoundBalance*",0);
  FUN_1003cc63c(*(undefined4 *)(lVar2 + 0x4f8));
  (**(code **)(*plVar4 + 0x28))(plVar4);
  lVar2 = FUN_10000ceb8();
  FUN_1003a985c(&local_50,lVar2);
  *(undefined4 *)(lVar2 + 0x2c) = 0x3dcccccd;
  *(undefined8 *)(lVar2 + 0x10) = 0;
  plVar4 = (long *)thunk_FUN_10000e5dc();
  FUN_1003a985c(&local_50,plVar4);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x58))(plVar4,"Sound_Silvernail_B_Throw");
  uVar3 = FUN_1010a1520();
  lVar2 = FUN_1010a0e0c(uVar3,0,"*KindredSoundBalance*",0);
  FUN_1003cc63c(*(undefined4 *)(lVar2 + 0x4f8));
  (**(code **)(*plVar4 + 0x28))(plVar4);
  lVar2 = FUN_10000ceb8();
  FUN_1003a985c(&local_50,lVar2);
  *(undefined4 *)(lVar2 + 0x2c) = 0x3e99999a;
  *(undefined8 *)(lVar2 + 0x10) = 0;
  plVar4 = (long *)FUN_10000e26c();
  FUN_1003a985c(&local_50,plVar4);
  (**(code **)(*plVar4 + 0x50))(plVar4,"Effect_Silvernail_B_Warning",FUN_1003cd7ac);
  lVar2 = FUN_10000f250();
  FUN_1003a985c(&local_50,lVar2);
  *(undefined4 *)(lVar2 + 0x10) = 0xb6;
  FUN_1003d266c(lVar2,"Projectile_B");
  lVar2 = FUN_10000c838();
  FUN_1003a985c(&local_50,lVar2);
  puVar1 = PTR_s_Buff_Silvernail_Talent_TalentB_10185b468;
  *(ushort *)(lVar2 + 0x58) = *(ushort *)(lVar2 + 0x58) & 0xf00f | 0x20;
  *(undefined8 *)(lVar2 + 0x48) = 0;
  *(undefined8 *)(lVar2 + 0x50) = 0;
  *(undefined1 *)(lVar2 + 0x50) = 2;
  *(undefined **)(lVar2 + 0x40) = puVar1;
  lVar2 = lVar2 + 0x18;
  plVar4 = (long *)FUN_10000e26c();
  FUN_1003a985c(lVar2,plVar4);
  (**(code **)(*plVar4 + 0x50))(plVar4,"Effect_Silvernail_B_Warning",FUN_1003cd7d8);
  plVar4 = (long *)FUN_10000e26c();
  FUN_1003a985c(lVar2,plVar4);
  (**(code **)(*plVar4 + 0x50))(plVar4,"Effect_Silvernail_B_Warning",FUN_1003cd804);
  lVar5 = FUN_10000f250();
  FUN_1003a985c(lVar2,lVar5);
  *(undefined4 *)(lVar5 + 0x10) = 0xb6;
  *(code **)(lVar5 + 0x20) = FUN_1003cd794;
  *(undefined4 *)(lVar5 + 0x34) = 3;
  FUN_1003d266c(lVar5,"Projectile_B");
  lVar5 = FUN_10000f250();
  FUN_1003a985c(lVar2,lVar5);
  *(undefined4 *)(lVar5 + 0x10) = 0xb6;
  *(code **)(lVar5 + 0x20) = FUN_1003cd7a0;
  *(undefined4 *)(lVar5 + 0x34) = 3;
  FUN_1003d266c(lVar5,"Projectile_B");
  plVar4 = (long *)FUN_10000bdf0();
  FUN_1003a985c(&local_50,plVar4);
  (**(code **)(*plVar4 + 0x50))(plVar4,PTR_s_Buff_Silvernail_AmmoCharge_Loade_10185b440);
  plVar4 = (long *)FUN_10000bdf0();
  FUN_1003a985c(&local_50,plVar4);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))
                             (plVar4,PTR_s_Buff_Silvernail_B_MovespeedBoost_10185b470);
  local_60 = FUN_1003cd830;
  local_58 = 3;
  (**(code **)(*plVar4 + 0x18))(plVar4,&local_60);
  lVar2 = FUN_10000ceb8();
  FUN_1003a985c(&local_50,lVar2);
  *(undefined4 *)(lVar2 + 0x2c) = 0x3dcccccd;
  *(undefined8 *)(lVar2 + 0x10) = 0;
  lVar2 = FUN_10000d8b8();
  FUN_1003a985c(&local_50,lVar2);
  *(undefined1 *)(lVar2 + 0x10) = 0;
  return local_50;
}




undefined8 FUN_10038fb50(void)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
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
  plVar2 = (long *)(**(code **)(*plVar2 + 0x50))(plVar2,"Ability03");
  (**(code **)(*plVar2 + 0x18))(plVar2,"AttackToIdleCombat");
  plVar2 = (long *)thunk_FUN_10000e5dc();
  FUN_1003a985c(&local_40,plVar2);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x58))(plVar2,"Sound_Silvernail_C");
  uVar3 = FUN_1010a1520();
  lVar1 = FUN_1010a0e0c(uVar3,0,"*KindredSoundBalance*",0);
  FUN_1003cc63c(*(undefined4 *)(lVar1 + 0x4fc));
  (**(code **)(*plVar2 + 0x28))(plVar2);
  lVar1 = FUN_10000ceb8();
  FUN_1003a985c(&local_40,lVar1);
  *(undefined4 *)(lVar1 + 0x2c) = 0x3dcccccd;
  *(undefined8 *)(lVar1 + 0x10) = 0;
  plVar2 = (long *)thunk_FUN_10000e358();
  FUN_1003a985c(&local_40,plVar2);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x60))(plVar2,"Projectile_C");
  (**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Silvernail_C_Cast");
  lVar1 = FUN_10000ceb8();
  FUN_1003a985c(&local_40,lVar1);
  *(undefined4 *)(lVar1 + 0x2c) = 0x3dcccccd;
  *(undefined8 *)(lVar1 + 0x10) = 0;
  plVar2 = (long *)thunk_FUN_10000e5dc();
  FUN_1003a985c(&local_40,plVar2);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x58))(plVar2,"Sound_Silvernail_C_Fire");
  uVar3 = FUN_1010a1520();
  lVar1 = FUN_1010a0e0c(uVar3,0,"*KindredSoundBalance*",0);
  FUN_1003cc63c(*(undefined4 *)(lVar1 + 0x4fc));
  (**(code **)(*plVar2 + 0x28))(plVar2);
  lVar1 = FUN_10000f250();
  FUN_1003a985c(&local_40,lVar1);
  *(undefined4 *)(lVar1 + 0x10) = 0xb7;
  FUN_1003d266c(lVar1,"Projectile_C");
  lVar1 = FUN_10000ceb8();
  FUN_1003a985c(&local_40,lVar1);
  *(undefined4 *)(lVar1 + 0x2c) = 0x3dcccccd;
  *(undefined8 *)(lVar1 + 0x10) = 0;
  lVar1 = FUN_10000d8b8();
  FUN_1003a985c(&local_40,lVar1);
  *(undefined1 *)(lVar1 + 0x10) = 0;
  return local_40;
}




undefined8 FUN_10038fda0(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined4 local_50 [2];
  undefined4 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  local_40 = 0;
  uStack_38 = 0;
  lVar1 = FUN_10000c8e8();
  FUN_1003a985c(&local_40,lVar1);
  lVar2 = FUN_10049ac6c(lVar1 + 0x10);
  *(code **)(lVar2 + 8) = FUN_1003a70e0;
  lVar1 = lVar1 + 0xb0;
  plVar3 = (long *)FUN_10000bdf0();
  FUN_1003a985c(lVar1,plVar3);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x50))(plVar3,PTR_s_Buff_Emote_Taunt_10185a578);
  local_50[0] = 0x40000000;
  local_48 = 1;
  (**(code **)(*plVar3 + 0x18))(plVar3,local_50);
  lVar2 = FUN_10000ceb8();
  FUN_1003a985c(lVar1,lVar2);
  *(undefined4 *)(lVar2 + 0x2c) = 0x40400000;
  *(undefined8 *)(lVar2 + 0x10) = 0;
  lVar2 = FUN_10000e1b4();
  FUN_1003a985c(lVar1,lVar2);
  *(undefined8 *)(lVar2 + 0x40) = 0;
  *(ushort *)(lVar2 + 0x80) = *(ushort *)(lVar2 + 0x80) & 0xfffc | 0x12;
  *(uint *)(lVar2 + 0x3c) = (uint)lVar2 & 0xffff;
  *(undefined8 *)(lVar2 + 0x20) = 0;
  *(undefined8 *)(lVar2 + 0x28) = 1;
  *(undefined4 *)(lVar2 + 0x10) = 0x988ef9cb;
  return local_40;
}




void FUN_10038feac(undefined8 param_1,undefined8 param_2)

{
  FUN_1003cd844("Attack",param_2,0);
  return;
}




void FUN_10038febc(undefined8 param_1,undefined8 param_2)

{
  FUN_1003cd844("AltAttack",param_2,0);
  return;
}




void FUN_10038fecc(undefined8 param_1,undefined8 param_2)

{
  FUN_1003cd844("CritAttack",param_2,2);
  return;
}




undefined8 FUN_10038fedc(void)

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




undefined8 FUN_10038ff0c(void)

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




undefined8 FUN_10038ff3c(void)

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




void FUN_10038ff6c(undefined8 param_1,undefined8 param_2)

{
  FUN_1003cd928("Attack",param_2,0);
  return;
}




void FUN_10038ff7c(undefined8 param_1,undefined8 param_2)

{
  FUN_1003cd928("AltAttack",param_2,0);
  return;
}




void FUN_10038ff8c(undefined8 param_1,undefined8 param_2)

{
  FUN_1003cd928("CritAttack",param_2,2);
  return;
}




undefined8 FUN_10038ff9c(void)

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
  uVar2 = FUN_10000ef8c();
  FUN_1003a985c(&local_30,uVar2);
  lVar1 = FUN_10000ceb8();
  FUN_1003a985c(&local_30,lVar1);
  *(undefined4 *)(lVar1 + 0x2c) = 0x3e4ccccd;
  *(undefined8 *)(lVar1 + 0x10) = 0;
  lVar1 = FUN_10000f250();
  FUN_1003a985c(&local_30,lVar1);
  *(undefined4 *)(lVar1 + 0x10) = 0xb8;
  FUN_1003d266c(lVar1,"CenterBody");
  *(undefined4 *)(lVar1 + 0x34) = 1;
  plVar3 = (long *)FUN_10000cb8c();
  FUN_1003a985c(&local_30,plVar3);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x50))(plVar3);
  local_40 = FUN_1003cda0c;
  local_38 = 3;
  (**(code **)(*plVar3 + 0x18))(plVar3,&local_40,0,2);
  lVar1 = FUN_10000d8b8();
  FUN_1003a985c(&local_30,lVar1);
  *(undefined1 *)(lVar1 + 0x10) = 0;
  uVar2 = FUN_10000f034();
  FUN_1003a985c(&local_30,uVar2);
  return local_30;
}

