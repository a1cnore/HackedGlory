// functions/10040 — 231 functions
#include "GameKindred.h"




void FUN_100400170(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  
  if (DAT_101d23a38 != '\0') {
    return;
  }
  lVar1 = FUN_10042e498();
  plVar2 = (long *)FUN_100441e68(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,"Bone_BackPack");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Ardan_Gift_Proc");
  (**(code **)(*plVar2 + 0x78))(plVar2,1);
  lVar1 = FUN_10042e3b0(param_1);
  plVar2 = (long *)FUN_100441e68(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,"Bone_BackPack");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Ardan_Gift_Proc");
                    /* WARNING: Could not recover jumptable at 0x000100400234. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x78))(plVar2,1);
  return;
}




void FUN_100400238(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  int *piVar10;
  ushort *puVar11;
  undefined1 extraout_b0;
  undefined1 extraout_b0_00;
  undefined1 extraout_b0_01;
  undefined1 extraout_b0_02;
  undefined1 extraout_b0_03;
  undefined1 extraout_var;
  undefined1 extraout_var_00;
  undefined1 extraout_var_01;
  undefined1 extraout_var_02;
  undefined1 extraout_var_03;
  undefined1 extraout_var_04;
  undefined1 extraout_var_05;
  undefined1 extraout_var_06;
  undefined1 extraout_var_07;
  undefined1 extraout_var_08;
  undefined1 extraout_var_09;
  undefined1 extraout_var_10;
  undefined1 extraout_var_11;
  undefined1 extraout_var_12;
  undefined1 extraout_var_13;
  code *local_78;
  undefined4 local_70;
  
  FUN_1003461dc(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x10));
  lVar4 = FUN_100345d90();
  puVar2 = PTR_s_onBuffIntervalName_10185d558;
  if (DAT_101d23a38 != '\0') {
    uVar3 = FUN_1004d2524(PTR_s_onBuffIntervalName_10185d558);
    uVar3 = FUN_100015208(puVar2,uVar3,0x12345678);
    *(undefined4 *)(param_1 + 0xa0 + (ulong)*(uint *)(param_1 + 0x160) * 4) = uVar3;
    uVar1 = *(uint *)(param_1 + 0x160);
    *(code **)(param_1 + 0xa0 + (ulong)uVar1 * 8 + 0x40) = FUN_1004318e0;
    *(uint *)(param_1 + 0x160) = uVar1 + 1;
    *(undefined4 *)(param_1 + 0x328) = 0x3e4ccccd;
  }
  FUN_100450f38(&local_78,param_1 + 0x98);
  uVar9 = (ulong)DAT_101e94150;
  if (uVar9 == 0xffff) {
    puVar11 = (ushort *)0x0;
  }
  else {
    puVar11 = &DAT_101e48150 + uVar9 * 0x4c;
    if (DAT_101e94150 == DAT_101e94152) {
      DAT_101e94150 = 0xffff;
    }
    else {
      DAT_101e94150 = *puVar11;
    }
    DAT_101e94154 = DAT_101e94154 + 1;
    lVar5 = uVar9 * 0x98;
    *(undefined8 *)(&DAT_101e48160 + lVar5) = 0;
    *(undefined8 *)(&DAT_101e48158 + lVar5) = 0;
    *(undefined8 *)(&DAT_101e48170 + lVar5) = 0;
    *(undefined8 *)(&DAT_101e48168 + lVar5) = 0;
    *(undefined8 *)(&DAT_101e48180 + lVar5) = 0;
    *(undefined8 *)(&DAT_101e48178 + lVar5) = 0;
    *(undefined ***)puVar11 = &PTR_FUN_1014987d8;
    uVar6 = DAT_101dc1cb8;
    *(undefined8 *)(&DAT_101e48160 + lVar5) = DAT_101dc1cb8;
    *(undefined8 *)(&DAT_101e48168 + lVar5) = uVar6;
    *(undefined8 *)(&DAT_101e48170 + lVar5) = 0xffffffff00000000;
    *(undefined8 *)(&DAT_101e48178 + lVar5) = 0xbf800000;
    (&DAT_101e48180)[lVar5] = 0;
    DAT_101e94160 = DAT_101e94160 + 1;
    if (DAT_101e94164 < DAT_101e94160) {
      DAT_101e94164 = DAT_101e94160;
    }
  }
  FUN_100450f94(&local_78,puVar11);
  FUN_1003dfe60(lVar4,2,4,0x19,0);
  *(uint *)(puVar11 + 0x10) =
       CONCAT13(extraout_var_09,CONCAT12(extraout_var_04,CONCAT11(extraout_var,extraout_b0)));
  puVar11[0x16] = 1;
  puVar11[0x17] = 0;
  lVar5 = FUN_100431ad4(&local_78);
  *(char **)(lVar5 + 0x28) = "Bone_PillarA";
  *(ushort *)(lVar5 + 0x74) = *(ushort *)(lVar5 + 0x74) & 0xff98 | 0x43;
  *(char **)(lVar5 + 0x10) = "Effect_Ardan_Arena_Side_Enemy";
  *(char **)(lVar5 + 0x18) = "Effect_Ardan_Arena_Side";
  lVar5 = FUN_100431ad4(&local_78);
  *(char **)(lVar5 + 0x28) = "Bone_PillarB";
  *(ushort *)(lVar5 + 0x74) = *(ushort *)(lVar5 + 0x74) & 0xff98 | 0x43;
  *(char **)(lVar5 + 0x10) = "Effect_Ardan_Arena_Side_Enemy";
  *(char **)(lVar5 + 0x18) = "Effect_Ardan_Arena_Side";
  lVar5 = FUN_100431ad4(&local_78);
  *(char **)(lVar5 + 0x28) = "Bone_PillarC";
  *(ushort *)(lVar5 + 0x74) = *(ushort *)(lVar5 + 0x74) & 0xff98 | 0x43;
  *(char **)(lVar5 + 0x10) = "Effect_Ardan_Arena_Side_Enemy";
  *(char **)(lVar5 + 0x18) = "Effect_Ardan_Arena_Side";
  lVar5 = FUN_100431ad4(&local_78);
  *(char **)(lVar5 + 0x28) = "Bone_PillarD";
  *(ushort *)(lVar5 + 0x74) = *(ushort *)(lVar5 + 0x74) & 0xff98 | 0x43;
  *(char **)(lVar5 + 0x10) = "Effect_Ardan_Arena_Side_Enemy";
  *(char **)(lVar5 + 0x18) = "Effect_Ardan_Arena_Side";
  lVar5 = FUN_100431ad4(&local_78);
  *(char **)(lVar5 + 0x28) = "Bone_PillarE";
  *(ushort *)(lVar5 + 0x74) = *(ushort *)(lVar5 + 0x74) & 0xff98 | 0x43;
  *(char **)(lVar5 + 0x10) = "Effect_Ardan_Arena_Side_Enemy";
  *(char **)(lVar5 + 0x18) = "Effect_Ardan_Arena_Side";
  lVar5 = FUN_100431ad4(&local_78);
  *(char **)(lVar5 + 0x28) = "Bone_PillarF";
  *(ushort *)(lVar5 + 0x74) = *(ushort *)(lVar5 + 0x74) & 0xff98 | 0x43;
  *(char **)(lVar5 + 0x10) = "Effect_Ardan_Arena_Side_Enemy";
  *(char **)(lVar5 + 0x18) = "Effect_Ardan_Arena_Side";
  lVar5 = FUN_100431ad4(&local_78);
  *(char **)(lVar5 + 0x28) = "Bone_PillarG";
  *(ushort *)(lVar5 + 0x74) = *(ushort *)(lVar5 + 0x74) & 0xff98 | 0x43;
  *(char **)(lVar5 + 0x10) = "Effect_Ardan_Arena_Side_Enemy";
  *(char **)(lVar5 + 0x18) = "Effect_Ardan_Arena_Side";
  lVar5 = FUN_100431ad4(&local_78);
  *(char **)(lVar5 + 0x28) = "Bone_PillarH";
  *(ushort *)(lVar5 + 0x74) = *(ushort *)(lVar5 + 0x74) & 0xff98 | 0x43;
  *(char **)(lVar5 + 0x10) = "Effect_Ardan_Arena_Side_Enemy";
  *(char **)(lVar5 + 0x18) = "Effect_Ardan_Arena_Side";
  lVar5 = FUN_100431ad4(&local_78);
  *(char **)(lVar5 + 0x28) = "Bone_PillarI";
  *(ushort *)(lVar5 + 0x74) = *(ushort *)(lVar5 + 0x74) & 0xff98 | 0x43;
  *(char **)(lVar5 + 0x10) = "Effect_Ardan_Arena_Side_Enemy";
  *(char **)(lVar5 + 0x18) = "Effect_Ardan_Arena_Side";
  lVar5 = FUN_100431ad4(&local_78);
  *(char **)(lVar5 + 0x28) = "Bone_PillarJ";
  *(ushort *)(lVar5 + 0x74) = *(ushort *)(lVar5 + 0x74) & 0xff98 | 0x43;
  *(char **)(lVar5 + 0x10) = "Effect_Ardan_Arena_Side_Enemy";
  *(char **)(lVar5 + 0x18) = "Effect_Ardan_Arena_Side";
  lVar5 = FUN_100431ad4(&local_78);
  *(ushort *)(lVar5 + 0x74) = *(ushort *)(lVar5 + 0x74) & 0xff98 | 0x21;
  *(char **)(lVar5 + 0x10) = "Effect_Ardan_Arena_Open_Enemy";
  *(char **)(lVar5 + 0x18) = "Effect_Ardan_Arena_Open";
  lVar5 = FUN_100431ad4(&local_78);
  *(ushort *)(lVar5 + 0x74) = *(ushort *)(lVar5 + 0x74) & 0xff98 | 0x21;
  *(char **)(lVar5 + 0x10) = "Effect_Ardan_Arena_AllSides";
  lVar5 = FUN_100431c28(&local_78);
  uVar6 = FUN_1010a1520();
  lVar7 = FUN_1010a0e0c(uVar6,0,"*KindredSoundBalance*",0);
  FUN_1003a39f8((char)*(undefined4 *)(lVar7 + 0x17c));
  *(char **)(lVar5 + 0x10) = "sound_ardanUltLoop";
  *(undefined1 *)(lVar5 + 0x38) = 0xff;
  *(uint *)(lVar5 + 0x34) =
       CONCAT13(extraout_var_10,CONCAT12(extraout_var_05,CONCAT11(extraout_var_00,extraout_b0_00)));
  *(uint *)(lVar5 + 0x30) = ((int)lVar5 + 0xfe1b7eb0U >> 3) * 0xca1b & 0xffff;
  *(byte *)(lVar5 + 0x39) = *(byte *)(lVar5 + 0x39) & 0x80 | 0x49;
  lVar5 = FUN_10042e580(param_1);
  *(undefined4 *)(lVar5 + 0x40) = 0x3e4ccccd;
  *(byte *)(lVar5 + 0x44) = *(byte *)(lVar5 + 0x44) & 0xfe;
  lVar5 = lVar5 + 0x10;
  lVar7 = FUN_10043aaa4(lVar5);
  *(code **)(lVar7 + 0x10) = FUN_1004319e8;
  piVar10 = (int *)(lVar7 + 0x20);
  if ((*piVar10 == 0) || (piVar10 = (int *)(lVar7 + 0x24), *piVar10 == 0)) {
    FUN_1003a4e5c(piVar10,PTR_s_Buff_Ardan_Arena_StunImmune_10185a380);
  }
  plVar8 = (long *)FUN_10043ab94(lVar5);
  plVar8 = (long *)(**(code **)(*plVar8 + 0x40))();
  (**(code **)(*plVar8 + 0x38))(plVar8,"Damage",2);
  plVar8 = (long *)FUN_100434b18(lVar5);
  plVar8 = (long *)(**(code **)(*plVar8 + 0x30))(plVar8,PTR_s_Buff_Stunned_10185a208);
  local_78 = FUN_1003a418c;
  local_70 = 3;
  plVar8 = (long *)(**(code **)(*plVar8 + 0x18))(plVar8,&local_78);
  (**(code **)(*plVar8 + 0x30))(plVar8,*(undefined4 *)(lVar4 + 0x260));
  plVar8 = (long *)FUN_100434b18(lVar5);
  plVar8 = (long *)(**(code **)(*plVar8 + 0x30))(plVar8,PTR_s_Buff_Ardan_Arena_Stunned_10185a378);
  local_78 = FUN_1003a418c;
  local_70 = 3;
  plVar8 = (long *)(**(code **)(*plVar8 + 0x18))(plVar8,&local_78);
  (**(code **)(*plVar8 + 0x30))(plVar8,*(undefined4 *)(lVar4 + 0x260));
  plVar8 = (long *)FUN_100434b18(lVar5);
  plVar8 = (long *)(**(code **)(*plVar8 + 0x30))(plVar8,PTR_s_Buff_Ardan_Arena_StunImmune_10185a380)
  ;
  FUN_1003dfe60(lVar4,2,2,0x19,0);
  local_78 = (code *)CONCAT44(local_78._4_4_,
                              (float)CONCAT13(extraout_var_11,
                                              CONCAT12(extraout_var_06,
                                                       CONCAT11(extraout_var_01,extraout_b0_01))) +
                              1.0);
  local_70 = 1;
  plVar8 = (long *)(**(code **)(*plVar8 + 0x18))(plVar8,&local_78);
  (**(code **)(*plVar8 + 0x30))(plVar8,*(undefined4 *)(lVar4 + 0x260));
  FUN_100450f38(&local_78,param_1 + 0x68);
  if (DAT_101d23a38 != '\0') {
    FUN_100431d2c(&local_78);
    lVar5 = FUN_100431e0c(&local_78);
    puVar2 = PTR_s_Buff_DelayedKill_10185bd70;
    FUN_1003dfe60(lVar4,2,3,0x19,0);
    *(undefined **)(lVar5 + 0x10) = puVar2;
    *(uint *)(lVar5 + 0x30) =
         CONCAT13(extraout_var_12,CONCAT12(extraout_var_07,CONCAT11(extraout_var_02,extraout_b0_02))
                 );
    *(undefined8 *)(lVar5 + 0x34) = 0xffffffff00000001;
    *(undefined8 *)(lVar5 + 0x44) = 0;
    *(undefined8 *)(lVar5 + 0x3c) = 0;
    lVar5 = FUN_100431e0c(&local_78);
    puVar2 = PTR_s_Buff_GloballyVisible_10185a1f0;
    FUN_1003dfe60(lVar4,2,3,0x19,0);
    *(undefined **)(lVar5 + 0x10) = puVar2;
    *(uint *)(lVar5 + 0x30) =
         CONCAT13(extraout_var_13,CONCAT12(extraout_var_08,CONCAT11(extraout_var_03,extraout_b0_03))
                 );
    *(undefined8 *)(lVar5 + 0x34) = 0xffffffff00000001;
    *(undefined8 *)(lVar5 + 0x44) = 0;
    *(undefined8 *)(lVar5 + 0x3c) = 0;
    FUN_100431f2c(&local_78);
  }
  FUN_100450f38(&local_78,param_1 + 0x80);
  FUN_10043200c(&local_78);
  return;
}




void FUN_1004008e0(void)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  
  lVar1 = FUN_10042e498();
  plVar2 = (long *)FUN_100441e18(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x38))(plVar2,"Sound_Ardan_Ability_C_Impact");
  uVar3 = FUN_1010a1520();
  lVar1 = FUN_1010a0e0c(uVar3,0,"*KindredSoundBalance*",0);
  FUN_1003a39f8(*(undefined4 *)(lVar1 + 0x180));
                    /* WARNING: Could not recover jumptable at 0x000100400944. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x28))(plVar2);
  return;
}




void FUN_100400948(void)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_10042e498();
  plVar2 = (long *)FUN_100441e68(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x68))(plVar2,"CenterBody");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Ardan_Arena_Stunpact");
                    /* WARNING: Could not recover jumptable at 0x000100400994. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x78))(plVar2,1);
  return;
}




void FUN_100400998(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  
  puVar2 = PTR_s_onPostCalculateAttackName_10185d580;
  if (DAT_101d23a38 != '\0') {
    uVar3 = FUN_1004d2524(PTR_s_onPostCalculateAttackName_10185d580);
    uVar3 = FUN_100015208(puVar2,uVar3,0x12345678);
    *(undefined4 *)(param_1 + 0xa0 + (ulong)*(uint *)(param_1 + 0x160) * 4) = uVar3;
    uVar1 = *(uint *)(param_1 + 0x160);
    *(code **)(param_1 + 0xe0 + (ulong)uVar1 * 8) = FUN_100432268;
    *(uint *)(param_1 + 0x160) = uVar1 + 1;
    puVar2 = PTR_s_onApplyName_10185d540;
    uVar3 = FUN_1004d2524(PTR_s_onApplyName_10185d540);
    uVar3 = FUN_100015208(puVar2,uVar3,0x12345678);
    *(undefined4 *)(param_1 + 0xa0 + (ulong)*(uint *)(param_1 + 0x160) * 4) = uVar3;
    uVar1 = *(uint *)(param_1 + 0x160);
    *(code **)(param_1 + 0xe0 + (ulong)uVar1 * 8) = FUN_100432420;
    *(uint *)(param_1 + 0x160) = uVar1 + 1;
  }
  lVar4 = FUN_10042e2c8(param_1);
  lVar4 = lVar4 + 0x10;
  plVar5 = (long *)FUN_100441e68(lVar4);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x60))();
  plVar5 = (long *)(**(code **)(*plVar5 + 0x48))(plVar5,"Effect_Ardan_A_Shield_Enemy");
  (**(code **)(*plVar5 + 0x50))(plVar5,"Effect_Ardan_A_Shield");
  plVar5 = (long *)FUN_100441e68(lVar4);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x68))(plVar5,"OverHead");
  plVar5 = (long *)(**(code **)(*plVar5 + 0x48))(plVar5,"Effect_Ardan_A_Shield_Top_Enemy");
  plVar5 = (long *)(**(code **)(*plVar5 + 0x50))(plVar5,"Effect_Ardan_A_Shield_Top");
  (**(code **)(*plVar5 + 0x90))();
  plVar5 = (long *)FUN_10049b7c4(lVar4);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x30))(plVar5,"Sound_Ardan_Ability_A");
  uVar6 = FUN_1010a1520();
  lVar4 = FUN_1010a0e0c(uVar6,0,"*KindredSoundBalance*",0);
  FUN_1003a39f8(*(undefined4 *)(lVar4 + 0x170));
  (**(code **)(*plVar5 + 0x28))(plVar5);
  lVar4 = FUN_10042e95c(param_1);
  plVar5 = (long *)FUN_10049b864(lVar4 + 0x10);
  (**(code **)(*plVar5 + 0x30))(plVar5,4,FUN_1004320ec);
  lVar4 = FUN_10042e498(param_1);
  lVar4 = lVar4 + 0x10;
  plVar5 = (long *)FUN_100441e68(lVar4);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x60))();
  plVar5 = (long *)(**(code **)(*plVar5 + 0x48))(plVar5,"Effect_Ardan_A_Shield_Engage");
  (**(code **)(*plVar5 + 0x90))();
  plVar5 = (long *)FUN_100441e68(lVar4);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x68))(plVar5,"OverHead");
  plVar5 = (long *)(**(code **)(*plVar5 + 0x48))(plVar5,"Effect_Ardan_A_Shield_Top_Engage");
  plVar5 = (long *)(**(code **)(*plVar5 + 0x78))(plVar5,1);
  (**(code **)(*plVar5 + 0x90))();
  plVar5 = (long *)FUN_100441e18(lVar4);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x38))(plVar5,"Sound_Ardan_Ability_A_Impact");
  uVar6 = FUN_1010a1520();
  lVar4 = FUN_1010a0e0c(uVar6,0,"*KindredSoundBalance*",0);
  FUN_1003a39f8(*(undefined4 *)(lVar4 + 0x16c));
  (**(code **)(*plVar5 + 0x28))(plVar5);
  lVar4 = FUN_10042e3b0(param_1);
  FUN_10049b814(lVar4 + 0x10);
  return;
}




void FUN_100400c50(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined4 uVar3;
  undefined1 auStack_48 [24];
  
  uVar1 = FUN_100345d90(*(undefined4 *)(param_1 + 0x308));
  FUN_100450f38(auStack_48,param_1 + 0x98);
  uVar3 = 0xb;
  if (*(int *)(*(long *)(*(long *)(param_1 + 0x10) + 0x10) + 0x260) == *(int *)(param_1 + 0x308)) {
    uVar3 = 0xc;
  }
  uVar3 = FUN_1003dfe60(uVar1,0,uVar3,0x19,0);
  lVar2 = FUN_10043255c(auStack_48);
  *(undefined4 *)(lVar2 + 0x10) = 1;
  *(undefined4 *)(lVar2 + 0x14) = uVar3;
  FUN_100450f38(auStack_48,param_1 + 0x70);
  FUN_100432680(auStack_48);
  return;
}




void FUN_100400cf0(long param_1)

{
  undefined8 uVar1;
  undefined4 local_30 [2];
  undefined4 local_28;
  
  uVar1 = FUN_100345d90(*(undefined4 *)(param_1 + 0x308));
  local_30[0] = FUN_1003dfe60(uVar1,0,7,0x19,0);
  local_28 = 1;
  FUN_10042eb40(param_1,local_30);
  return;
}




void FUN_100400d48(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  float local_40 [2];
  undefined4 local_38;
  
  FUN_1003461dc(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x10));
  uVar1 = FUN_100345d90();
  local_40[0] = (float)FUN_1003dfe60(uVar1,2,5,0x19,0);
  *(float *)(param_1 + 0x318) = local_40[0];
  if (*(float *)(param_1 + 0x31c) < local_40[0]) {
    *(float *)(param_1 + 0x31c) = local_40[0];
  }
  *(uint *)(param_1 + 0x340) =
       *(uint *)(param_1 + 0x340) & 0xfffe0 | (uint)(local_40[0] < 0.0) << 4 |
       *(uint *)(param_1 + 0x340) & 0xfff0000f;
  lVar2 = FUN_10042e498(param_1);
  plVar3 = (long *)FUN_100441e68(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x60))();
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Ardan_Arena_Warning_E");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x50))(plVar3,"Effect_Ardan_Arena_Warning_A");
  local_38 = 1;
  (**(code **)(*plVar3 + 0x60))(plVar3,local_40);
  return;
}




void FUN_100400e30(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  char cVar3;
  uint uVar4;
  char *pcVar5;
  uint uVar6;
  code *local_40;
  undefined4 local_38;
  
  uVar6 = 0x811c9dc5;
  lVar1 = FUN_100433030();
  if (PTR_s_Ability__Ardan__B_101859250 == (undefined *)0x0) {
    uVar4 = 0;
  }
  else {
    cVar3 = *PTR_s_Ability__Ardan__B_101859250;
    uVar4 = 0x811c9dc5;
    if (cVar3 != '\0') {
      uVar4 = 0x811c9dc5;
      pcVar5 = PTR_s_Ability__Ardan__B_101859250;
      do {
        pcVar5 = pcVar5 + 1;
        uVar4 = (uVar4 ^ (int)cVar3) * 0x1000193;
        cVar3 = *pcVar5;
      } while (cVar3 != '\0');
    }
  }
  *(uint *)(lVar1 + 0x28) = uVar4;
  lVar1 = FUN_10049bf40(lVar1 + 0x10);
  if (PTR_s_Ability__Ardan__B_101859250 == (undefined *)0x0) {
    uVar6 = 0;
  }
  else {
    cVar3 = *PTR_s_Ability__Ardan__B_101859250;
    pcVar5 = PTR_s_Ability__Ardan__B_101859250;
    while (cVar3 != '\0') {
      pcVar5 = pcVar5 + 1;
      uVar6 = (uVar6 ^ (int)cVar3) * 0x1000193;
      cVar3 = *pcVar5;
    }
  }
  *(uint *)(lVar1 + 0x20) = uVar6;
  *(code **)(lVar1 + 0x10) = FUN_1004922b0;
  *(undefined4 *)(lVar1 + 0x18) = 3;
  *(undefined4 *)(lVar1 + 0x28) = 1;
  lVar1 = FUN_10042e694(param_1);
  *(ushort *)(lVar1 + 0x48) = *(ushort *)(lVar1 + 0x48) | 8;
  *(byte *)(lVar1 + 0x60) = *(byte *)(lVar1 + 0x60) & 0xfc | 1;
  *(undefined4 *)(lVar1 + 0x40) = 0xd875fe29;
  plVar2 = (long *)FUN_10043187c(lVar1 + 0x10);
  local_40 = FUN_1004922e4;
  local_38 = 3;
  (**(code **)(*plVar2 + 0x30))(plVar2,&local_40);
  return;
}




void FUN_100400f70(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  char cVar3;
  uint uVar4;
  char *pcVar5;
  uint uVar6;
  code *local_40;
  undefined4 local_38;
  
  uVar6 = 0x811c9dc5;
  lVar1 = FUN_100433030();
  if (PTR_s_Ability__Ardan__A_101859248 == (undefined *)0x0) {
    uVar4 = 0;
  }
  else {
    cVar3 = *PTR_s_Ability__Ardan__A_101859248;
    uVar4 = 0x811c9dc5;
    if (cVar3 != '\0') {
      uVar4 = 0x811c9dc5;
      pcVar5 = PTR_s_Ability__Ardan__A_101859248;
      do {
        pcVar5 = pcVar5 + 1;
        uVar4 = (uVar4 ^ (int)cVar3) * 0x1000193;
        cVar3 = *pcVar5;
      } while (cVar3 != '\0');
    }
  }
  *(uint *)(lVar1 + 0x28) = uVar4;
  lVar1 = FUN_10049bf40(lVar1 + 0x10);
  if (PTR_s_Ability__Ardan__A_101859248 == (undefined *)0x0) {
    uVar6 = 0;
  }
  else {
    cVar3 = *PTR_s_Ability__Ardan__A_101859248;
    pcVar5 = PTR_s_Ability__Ardan__A_101859248;
    while (cVar3 != '\0') {
      pcVar5 = pcVar5 + 1;
      uVar6 = (uVar6 ^ (int)cVar3) * 0x1000193;
      cVar3 = *pcVar5;
    }
  }
  *(uint *)(lVar1 + 0x20) = uVar6;
  *(code **)(lVar1 + 0x10) = FUN_100492318;
  *(undefined4 *)(lVar1 + 0x18) = 3;
  *(undefined4 *)(lVar1 + 0x28) = 1;
  lVar1 = FUN_10042e694(param_1);
  *(ushort *)(lVar1 + 0x48) = *(ushort *)(lVar1 + 0x48) | 8;
  *(byte *)(lVar1 + 0x60) = *(byte *)(lVar1 + 0x60) & 0xfc | 1;
  *(undefined4 *)(lVar1 + 0x40) = 0xd575f970;
  plVar2 = (long *)FUN_10043187c(lVar1 + 0x10);
  local_40 = FUN_10049234c;
  local_38 = 3;
  (**(code **)(*plVar2 + 0x30))(plVar2,&local_40);
  return;
}




void FUN_1004010b0(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  char cVar4;
  uint uVar5;
  char *pcVar6;
  uint uVar7;
  code *local_40;
  undefined4 local_38;
  
  uVar7 = 0x811c9dc5;
  lVar1 = FUN_100433030();
  if (PTR_s_Ability__Ardan__B_101859250 == (undefined *)0x0) {
    uVar5 = 0;
  }
  else {
    cVar4 = *PTR_s_Ability__Ardan__B_101859250;
    uVar5 = 0x811c9dc5;
    if (cVar4 != '\0') {
      uVar5 = 0x811c9dc5;
      pcVar6 = PTR_s_Ability__Ardan__B_101859250;
      do {
        pcVar6 = pcVar6 + 1;
        uVar5 = (uVar5 ^ (int)cVar4) * 0x1000193;
        cVar4 = *pcVar6;
      } while (cVar4 != '\0');
    }
  }
  *(uint *)(lVar1 + 0x28) = uVar5;
  lVar2 = FUN_10049da9c(lVar1 + 0x10);
  *(undefined **)(lVar2 + 0x10) = PTR_s_Ability__Ardan__B_101859250;
  *(code **)(lVar2 + 0x18) = FUN_100492380;
  *(undefined4 *)(lVar2 + 0x20) = 4;
  *(undefined4 *)(lVar2 + 0x2c) = 0;
  lVar1 = FUN_10049bf40(lVar1 + 0x10);
  if (PTR_s_Ability__Ardan__B_101859250 == (undefined *)0x0) {
    uVar7 = 0;
  }
  else {
    cVar4 = *PTR_s_Ability__Ardan__B_101859250;
    pcVar6 = PTR_s_Ability__Ardan__B_101859250;
    while (cVar4 != '\0') {
      pcVar6 = pcVar6 + 1;
      uVar7 = (uVar7 ^ (int)cVar4) * 0x1000193;
      cVar4 = *pcVar6;
    }
  }
  *(uint *)(lVar1 + 0x20) = uVar7;
  *(code **)(lVar1 + 0x10) = FUN_1004923c4;
  *(undefined4 *)(lVar1 + 0x18) = 3;
  *(undefined4 *)(lVar1 + 0x28) = 1;
  lVar1 = FUN_10042e694(param_1);
  *(ushort *)(lVar1 + 0x48) = *(ushort *)(lVar1 + 0x48) | 8;
  *(byte *)(lVar1 + 0x60) = *(byte *)(lVar1 + 0x60) & 0xfc | 1;
  *(undefined4 *)(lVar1 + 0x40) = 0xd875fe29;
  plVar3 = (long *)FUN_10043187c(lVar1 + 0x10);
  local_40 = FUN_1004923f8;
  local_38 = 3;
  (**(code **)(*plVar3 + 0x30))(plVar3,&local_40);
  return;
}




void FUN_100401218(void)

{
  long lVar1;
  long *plVar2;
  code *local_20;
  undefined4 local_18;
  
  lVar1 = FUN_10042e498();
  plVar2 = (long *)FUN_100433e34(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_Celeste_Star_10185c8a0);
  local_20 = FUN_100434700;
  local_18 = 3;
  (**(code **)(*plVar2 + 0x18))(plVar2,&local_20);
  return;
}




void FUN_100401274(long param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  int *piVar9;
  int *piVar10;
  undefined4 uVar11;
  code *local_60;
  undefined4 local_58;
  
  if (DAT_101d23a38 != '\0') {
    uVar11 = FUN_100032228();
    puVar1 = PTR_s_startTime_10185d590;
    uVar2 = FUN_1004d2524(PTR_s_startTime_10185d590);
    uVar4 = FUN_100015208(puVar1,uVar2,0x12345678);
    uVar4 = (**(code **)(*(long *)(param_1 + 0x168) + 8))(param_1 + 0x168,uVar4);
    puVar5 = (undefined4 *)(**(code **)(*(long *)(param_1 + 0x168) + 0x10))(param_1 + 0x168,uVar4);
    *puVar5 = uVar11;
  }
  lVar6 = FUN_10042e498(param_1);
  lVar6 = lVar6 + 0x10;
  plVar7 = (long *)FUN_100441e18(lVar6);
  plVar7 = (long *)(**(code **)(*plVar7 + 0x38))(plVar7,"Sound_Celeste_Ability_A_Cast_OnTop");
  uVar4 = FUN_1010a1520();
  lVar8 = FUN_1010a0e0c(uVar4,0,"*KindredSoundBalance*",0);
  FUN_1003a6fd0(*(undefined4 *)(lVar8 + 400));
  (**(code **)(*plVar7 + 0x28))(plVar7);
  lVar8 = FUN_10043aaa4(lVar6);
  *(code **)(lVar8 + 0x10) = FUN_100434714;
  piVar10 = (int *)(lVar8 + 0x20);
  piVar9 = piVar10;
  if ((((*piVar10 == 0) || (piVar9 = (int *)(lVar8 + 0x24), *piVar9 == 0)) &&
      (FUN_1003a4e5c(piVar9,PTR_s_Buff_CelesteStar_Supernova_10185c8b0), *piVar10 == 0)) ||
     (piVar10 = (int *)(lVar8 + 0x24), *piVar10 == 0)) {
    FUN_1003a4e5c(piVar10,PTR_s_Buff_DelayedKill_10185bd70);
  }
  *(undefined4 *)(lVar8 + 0x2c) = 1;
  *(byte *)(lVar8 + 0x30) = *(byte *)(lVar8 + 0x30) | 1;
  lVar6 = FUN_10043fc08(lVar6);
  lVar8 = FUN_10049c03c(lVar6 + 0x10);
  *(undefined4 *)(lVar8 + 0x18) = 0;
  *(undefined4 *)(lVar8 + 8) = 0;
  *(undefined4 *)(lVar8 + 0x10) = 1;
  FUN_100434ac8(lVar6 + 0x88);
  plVar7 = (long *)FUN_100434b18(lVar6 + 0x88);
  plVar7 = (long *)(**(code **)(*plVar7 + 0x30))(plVar7,PTR_s_Buff_CelesteStar_Supernova_10185c8b0);
  local_60 = FUN_100434b68;
  local_58 = 3;
  (**(code **)(*plVar7 + 0x18))(plVar7,&local_60);
  plVar7 = (long *)FUN_100433e34(lVar6 + 0xa0);
  plVar7 = (long *)(**(code **)(*plVar7 + 0x30))
                             (plVar7,PTR_s_Buff_CelesteStar_RegularDamage_10185c8a8);
  local_60 = FUN_100434ab4;
  local_58 = 3;
  (**(code **)(*plVar7 + 0x18))(plVar7,&local_60);
  FUN_1003461dc(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x10));
  uVar4 = FUN_100345d90();
  iVar3 = FUN_1003a47d0(uVar4,PTR_s_Buff_Celeste_Talent_YoungStar_10185c8e8);
  if (iVar3 != 0) {
    lVar6 = FUN_10042e580(param_1);
    *(undefined4 *)(lVar6 + 0x40) = 0x3f000000;
    *(byte *)(lVar6 + 0x44) = *(byte *)(lVar6 + 0x44) & 0xfe;
    plVar7 = (long *)FUN_10043fc58(lVar6 + 0x10);
    local_60 = FUN_100434b7c;
    local_58 = 3;
    (**(code **)(*plVar7 + 0x30))(plVar7,&local_60);
    plVar7 = (long *)FUN_10043ab94(lVar6 + 0x10);
    plVar7 = (long *)(**(code **)(*plVar7 + 0x40))();
    local_60 = FUN_100434990;
    local_58 = 4;
    (**(code **)(*plVar7 + 0x18))(plVar7,&local_60,1,3);
  }
  lVar6 = FUN_10042e2c8(param_1);
  plVar7 = (long *)FUN_100441e68(lVar6 + 0x10);
  plVar7 = (long *)(**(code **)(*plVar7 + 0x60))();
  plVar7 = (long *)(**(code **)(*plVar7 + 0x48))(plVar7,"Effect_Celeste_Star_Sm_Enemy");
  plVar7 = (long *)(**(code **)(*plVar7 + 0x50))(plVar7,"Effect_Celeste_Star_Sm");
  plVar7 = (long *)(**(code **)(*plVar7 + 0x78))(plVar7,1);
  (**(code **)(*plVar7 + 0xb0))(plVar7,1);
  lVar6 = FUN_10042fdc4(param_1);
  FUN_10044c418(lVar6 + 0x10);
  return;
}




void FUN_1004015b8(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  code *local_30;
  undefined4 local_28;
  
  lVar1 = FUN_10042fdc4();
  lVar1 = lVar1 + 0x10;
  lVar2 = FUN_10049bea0(lVar1);
  *(code **)(lVar2 + 0x10) = FUN_1004347d8;
  plVar3 = (long *)FUN_10043ab94(lVar1);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x40))();
  local_30 = FUN_10043489c;
  local_28 = 5;
  (**(code **)(*plVar3 + 0x18))(plVar3,&local_30,1,2);
  plVar3 = (long *)FUN_100434b18(lVar1);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Celeste_HitByStar_10185c8b8);
  local_30 = (code *)CONCAT44(local_30._4_4_,0x3f800000);
  local_28 = 1;
  (**(code **)(*plVar3 + 0x18))(plVar3,&local_30);
  return;
}




void FUN_100401670(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  float local_40 [2];
  undefined4 local_38;
  
  puVar2 = PTR_s_onEndName_10185d548;
  if (DAT_101d23a38 != '\0') {
    uVar3 = FUN_1004d2524(PTR_s_onEndName_10185d548);
    uVar3 = FUN_100015208(puVar2,uVar3,0x12345678);
    *(undefined4 *)(param_1 + 0xa0 + (ulong)*(uint *)(param_1 + 0x160) * 4) = uVar3;
    uVar1 = *(uint *)(param_1 + 0x160);
    *(code **)(param_1 + 0xa0 + (ulong)uVar1 * 8 + 0x40) = FUN_100434bb0;
    *(uint *)(param_1 + 0x160) = uVar1 + 1;
  }
  lVar4 = FUN_10042e498(param_1);
  lVar4 = lVar4 + 0x10;
  plVar5 = (long *)FUN_100441e68(lVar4);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x60))();
  plVar5 = (long *)(**(code **)(*plVar5 + 0x48))(plVar5,"Effect_Celeste_Star_Nova_Enemy");
  (**(code **)(*plVar5 + 0x50))(plVar5,"Effect_Celeste_Star_Nova");
  plVar5 = (long *)FUN_100441e18(lVar4);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x38))(plVar5,"Sound_Celeste_Ability_A_Cast");
  uVar6 = FUN_1010a1520();
  lVar7 = FUN_1010a0e0c(uVar6,0,"*KindredSoundBalance*",0);
  (**(code **)(*plVar5 + 0x28))(*(undefined4 *)(lVar7 + 0x198),plVar5);
  plVar5 = (long *)FUN_100433e34(lVar4);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x30))(plVar5,PTR_s_Buff_DelayedKill_10185bd70);
  local_40[0] = *(float *)(param_1 + 0x318) + 0.2;
  local_38 = 1;
  (**(code **)(*plVar5 + 0x18))(plVar5,local_40);
  return;
}




void FUN_1004017d0(void)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  
  if (DAT_101d23a38 != '\0') {
    return;
  }
  lVar1 = FUN_10042e498();
  plVar2 = (long *)FUN_100441e68(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x60))();
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Celeste_Shockwave_Impact_Enemy");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x50))(plVar2,"Effect_Celeste_Shockwave_Impact");
  (**(code **)(*plVar2 + 0x78))(plVar2,1);
  plVar2 = (long *)FUN_100441e18(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x38))(plVar2,"Sound_Celeste_Ability_A_TakeDamage_1");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x18))(plVar2,"Sound_Celeste_Ability_A_TakeDamage_2");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x18))(plVar2,"Sound_Celeste_Ability_A_TakeDamage_3");
  uVar3 = FUN_1010a1520();
  lVar1 = FUN_1010a0e0c(uVar3,0,"*KindredSoundBalance*",0);
  FUN_1003a6fd0(*(undefined4 *)(lVar1 + 0x198));
                    /* WARNING: Could not recover jumptable at 0x0001004018c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x28))(plVar2);
  return;
}




void FUN_1004018c8(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  float fVar9;
  float local_40 [2];
  undefined4 local_38;
  
  FUN_1003461dc(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x10));
  uVar4 = FUN_100345d90();
  puVar2 = PTR_s_onEndName_10185d548;
  if (DAT_101d23a38 != '\0') {
    uVar3 = FUN_1004d2524(PTR_s_onEndName_10185d548);
    uVar3 = FUN_100015208(puVar2,uVar3,0x12345678);
    *(undefined4 *)(param_1 + 0xa0 + (ulong)*(uint *)(param_1 + 0x160) * 4) = uVar3;
    uVar1 = *(uint *)(param_1 + 0x160);
    *(code **)(param_1 + 0xa0 + (ulong)uVar1 * 8 + 0x40) = FUN_100435078;
    *(uint *)(param_1 + 0x160) = uVar1 + 1;
    fVar9 = (float)FUN_1003dfe60(uVar4,1,4,0x19,0);
    *(float *)(param_1 + 0x318) = fVar9;
    if (*(float *)(param_1 + 0x31c) < fVar9) {
      *(float *)(param_1 + 0x31c) = fVar9;
    }
    *(uint *)(param_1 + 0x340) =
         *(uint *)(param_1 + 0x340) & 0xfffe0 | (uint)(fVar9 < 0.0) << 4 |
         *(uint *)(param_1 + 0x340) & 0xfff0000f;
  }
  lVar5 = FUN_10042e498(param_1);
  plVar6 = (long *)FUN_100441e18(lVar5 + 0x10);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x38))(plVar6,"Sound_Celeste_Ability_B_Cast");
  uVar7 = FUN_1010a1520();
  lVar8 = FUN_1010a0e0c(uVar7,0,"*KindredSoundBalance*",0);
  FUN_1003a6fd0(*(undefined4 *)(lVar8 + 0x19c));
  (**(code **)(*plVar6 + 0x28))(plVar6);
  plVar6 = (long *)FUN_100433e34(lVar5 + 0x10);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x30))(plVar6,PTR_s_Buff_DelayedKill_10185bd70);
  local_40[0] = (float)FUN_1003dfe60(uVar4,1,4,0x19,0);
  local_40[0] = local_40[0] + 0.2;
  local_38 = 1;
  (**(code **)(*plVar6 + 0x18))(plVar6,local_40);
  lVar5 = FUN_10042e2c8(param_1);
  plVar6 = (long *)FUN_100441e68(lVar5 + 0x10);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x60))();
  plVar6 = (long *)(**(code **)(*plVar6 + 0x48))(plVar6,"Effect_Celeste_EventHorizon_Enemy");
  plVar6 = (long *)(**(code **)(*plVar6 + 0x50))(plVar6,"Effect_Celeste_EventHorizon");
  (**(code **)(*plVar6 + 0x78))(plVar6,1);
  return;
}




void FUN_100401ac0(void)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  
  if (DAT_101d23a38 != '\0') {
    return;
  }
  lVar1 = FUN_10042e498();
  plVar2 = (long *)FUN_100441e68(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x60))();
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Celeste_Shockwave_Impact_Enemy");
  (**(code **)(*plVar2 + 0x50))(plVar2,"Effect_Celeste_Shockwave_Impact");
  plVar2 = (long *)FUN_100441e18(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x38))(plVar2,"Sound_Celeste_Ability_B_Damage_1");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x18))(plVar2,"Sound_Celeste_Ability_B_Damage_2");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x18))(plVar2,"Sound_Celeste_Ability_B_Damage_3");
  uVar3 = FUN_1010a1520();
  lVar1 = FUN_1010a0e0c(uVar3,0,"*KindredSoundBalance*",0);
  FUN_1003a6fd0(*(undefined4 *)(lVar1 + 0x1a0));
                    /* WARNING: Could not recover jumptable at 0x000100401ba4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x28))(plVar2);
  return;
}




void FUN_100401ba8(void)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_100431114();
  *(byte *)(lVar1 + 0x60) = *(byte *)(lVar1 + 0x60) | 1;
  plVar2 = (long *)FUN_100433e34(lVar1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x000100401bdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_Celeste_DeathVFX_10185c8d8);
  return;
}




void FUN_100401be0(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_10042e498();
  plVar2 = (long *)FUN_100441e68(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,"Bone_Staff");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Celeste_Staff_Explode");
  (**(code **)(*plVar2 + 0x88))(plVar2,1);
  lVar1 = FUN_10042e2c8(param_1);
  plVar2 = (long *)FUN_10049bef0(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))(plVar2,"u_Frozen");
  (**(code **)(*plVar2 + 0x38))(0x3f800000);
  plVar2 = (long *)FUN_100441e68(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,"Bone_UpperBack");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Celeste_SNW_coldMist_Idle");
  (**(code **)(*plVar2 + 0x88))(plVar2,1);
  lVar1 = FUN_100432f48(param_1);
  FUN_1004385f0(lVar1 + 0x10);
  return;
}




void FUN_100401cc4(void)

{
  long lVar1;
  char cVar2;
  uint uVar3;
  char *pcVar4;
  uint uVar5;
  
  uVar5 = 0x811c9dc5;
  lVar1 = FUN_100433030();
  if (PTR_s_Ability__Celeste__B_101859280 == (undefined *)0x0) {
    uVar3 = 0;
  }
  else {
    cVar2 = *PTR_s_Ability__Celeste__B_101859280;
    uVar3 = 0x811c9dc5;
    if (cVar2 != '\0') {
      uVar3 = 0x811c9dc5;
      pcVar4 = PTR_s_Ability__Celeste__B_101859280;
      do {
        pcVar4 = pcVar4 + 1;
        uVar3 = (uVar3 ^ (int)cVar2) * 0x1000193;
        cVar2 = *pcVar4;
      } while (cVar2 != '\0');
    }
  }
  *(uint *)(lVar1 + 0x28) = uVar3;
  lVar1 = FUN_10049bf40(lVar1 + 0x10);
  if (PTR_s_Ability__Celeste__B_101859280 == (undefined *)0x0) {
    uVar5 = 0;
  }
  else {
    cVar2 = *PTR_s_Ability__Celeste__B_101859280;
    pcVar4 = PTR_s_Ability__Celeste__B_101859280;
    while (cVar2 != '\0') {
      pcVar4 = pcVar4 + 1;
      uVar5 = (uVar5 ^ (int)cVar2) * 0x1000193;
      cVar2 = *pcVar4;
    }
  }
  *(uint *)(lVar1 + 0x20) = uVar5;
  *(code **)(lVar1 + 0x10) = FUN_1004929ac;
  *(undefined4 *)(lVar1 + 0x18) = 3;
  *(undefined4 *)(lVar1 + 0x28) = 1;
  return;
}




void FUN_100401d98(void)

{
  return;
}




void FUN_100401d9c(void)

{
  return;
}




void FUN_100401da0(void)

{
  char cVar1;
  long lVar2;
  long *plVar3;
  uint uVar4;
  char *pcVar5;
  code *local_20;
  undefined4 local_18;
  
  lVar2 = FUN_100434180();
  if (PTR_s_Buff_Celeste_Star_10185c8a0 == (undefined *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = 0x811c9dc5;
    cVar1 = *PTR_s_Buff_Celeste_Star_10185c8a0;
    pcVar5 = PTR_s_Buff_Celeste_Star_10185c8a0;
    while (cVar1 != '\0') {
      pcVar5 = pcVar5 + 1;
      uVar4 = (uVar4 ^ (int)cVar1) * 0x1000193;
      cVar1 = *pcVar5;
    }
  }
  *(uint *)(lVar2 + 0x28) = uVar4;
  plVar3 = (long *)FUN_10045562c(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))();
  local_20 = FUN_100492910;
  local_18 = 4;
  plVar3 = (long *)(**(code **)(*plVar3 + 0x10))(plVar3,&local_20);
  (**(code **)(*plVar3 + 0x20))(plVar3,FUN_10044d964);
  return;
}




void FUN_100401e50(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined8 local_40;
  undefined4 local_38;
  
  FUN_10043a96c(param_1,PTR_s_lastAttackedGuid_10185b170,&DAT_101159f80);
  local_40 = (code *)((ulong)local_40._4_4_ << 0x20);
  FUN_10044e224(param_1,PTR_s_lastAttackedTime_10185b178,&local_40);
  lVar1 = FUN_10042e694(param_1);
  *(ushort *)(lVar1 + 0x48) = *(ushort *)(lVar1 + 0x48) | 0x40;
  *(byte *)(lVar1 + 0x60) = *(byte *)(lVar1 + 0x60) & 0xfc | 1;
  *(ushort *)(lVar1 + 0x5a) = *(ushort *)(lVar1 + 0x5a) | 4;
  lVar2 = FUN_100437ccc(lVar1 + 0x10);
  *(undefined **)(lVar2 + 0x20) = PTR_s_lastAttackedGuid_10185b170;
  *(undefined4 *)(lVar2 + 0x28) = 3;
  *(code **)(lVar2 + 0x40) = FUN_1004338f4;
  lVar1 = FUN_100437ccc(lVar1 + 0x10);
  *(undefined **)(lVar1 + 0x20) = PTR_s_lastAttackedTime_10185b178;
  *(undefined4 *)(lVar1 + 0x28) = 1;
  *(code **)(lVar1 + 0x40) = FUN_10044e2c4;
  lVar1 = FUN_10042e694(param_1);
  *(ushort *)(lVar1 + 0x48) = *(ushort *)(lVar1 + 0x48) | 8;
  *(byte *)(lVar1 + 0x60) = *(byte *)(lVar1 + 0x60) & 0xfc | 1;
  *(undefined4 *)(lVar1 + 0x40) = 0x19616cf9;
  plVar3 = (long *)FUN_10043187c(lVar1 + 0x10);
  local_40 = FUN_10044e2e8;
  local_38 = 3;
  (**(code **)(*plVar3 + 0x30))(plVar3,&local_40);
  return;
}




void FUN_100401f7c(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = FUN_10042e2c8();
  lVar1 = FUN_10049be00(lVar1 + 0x10);
  *(undefined4 *)(lVar1 + 0x58) = 2;
  *(code **)(lVar1 + 0x10) = FUN_100433144;
  *(undefined4 *)(lVar1 + 0x18) = 4;
  lVar1 = FUN_10042e3b0(param_1);
  FUN_10049b814(lVar1 + 0x10);
  return;
}




void FUN_100401fcc(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined4 local_30 [2];
  undefined4 local_28;
  
  lVar1 = FUN_10042e2c8();
  plVar2 = (long *)FUN_100441e68(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,"Bone_Head");
  (**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Vox_Sonar_Debuff");
  lVar1 = FUN_10042e3b0(param_1);
  FUN_10049b814(lVar1 + 0x10);
  lVar1 = FUN_10042e694(param_1);
  *(ushort *)(lVar1 + 0x48) = *(ushort *)(lVar1 + 0x48) | 0x40;
  *(ushort *)(lVar1 + 0x5a) = *(ushort *)(lVar1 + 0x5a) | 4;
  *(byte *)(lVar1 + 0x60) = *(byte *)(lVar1 + 0x60) & 0xfc | 0x12;
  lVar1 = FUN_10043fc08(lVar1 + 0x10);
  lVar3 = FUN_10049bc4c(lVar1 + 0x10);
  *(undefined4 *)(lVar3 + 0x10) = 0x101004;
  plVar2 = (long *)FUN_100433e34(lVar1 + 0x88);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_Vox_Resonance_Proc_10185c908);
  local_30[0] = 0x3dcccccd;
  local_28 = 1;
  (**(code **)(*plVar2 + 0x18))(plVar2,local_30);
  return;
}




void FUN_1004020c8(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined4 local_40 [2];
  undefined4 local_38;
  code *local_30;
  undefined4 local_28;
  
  if (DAT_101d23a38 != '\0') {
    lVar1 = FUN_10042ea44(param_1);
    plVar2 = (long *)FUN_100433e34(lVar1 + 0x10);
    plVar2 = (long *)(**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_Vox_Resonance_10185b168);
    local_30 = FUN_1003c1630;
    local_28 = 3;
    (**(code **)(*plVar2 + 0x18))(plVar2,&local_30);
    lVar1 = FUN_10042ea44(param_1);
    plVar2 = (long *)FUN_10043fc58(lVar1 + 0x10);
    plVar2 = (long *)(**(code **)(*plVar2 + 0x38))();
    local_30 = FUN_10044e494;
    local_28 = 4;
    plVar2 = (long *)(**(code **)(*plVar2 + 0x30))(plVar2,&local_30);
    local_40[0] = 2;
    local_38 = 1;
    (**(code **)(*plVar2 + 0x28))(plVar2,local_40,1);
    plVar2 = (long *)FUN_100432a84(lVar1 + 0x10);
    plVar2 = (long *)(**(code **)(*plVar2 + 0x38))();
    plVar2 = (long *)(**(code **)(*plVar2 + 0x70))();
    plVar2 = (long *)(**(code **)(*plVar2 + 0x30))(plVar2,0x75);
    (**(code **)(*plVar2 + 0x18))(plVar2,"CenterBody");
  }
  lVar1 = FUN_10042e498(param_1);
  plVar2 = (long *)FUN_100441e18(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x38))(plVar2,"Sound_Vox_Ability_B_Ricochet_1");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x18))(plVar2,"Sound_Vox_Ability_B_Ricochet_2");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x18))(plVar2,"Sound_Vox_Ability_B_Ricochet_3");
  uVar3 = FUN_1010a1520();
  lVar1 = FUN_1010a0e0c(uVar3,0,"*KindredSoundBalance*",0);
  FUN_1003c06fc(*(undefined4 *)(lVar1 + 0x1c0));
  (**(code **)(*plVar2 + 0x28))(plVar2);
  return;
}




void FUN_10040226c(void)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_100433b70();
  *(code **)(lVar1 + 0x40) = FUN_10049d81c;
  plVar2 = (long *)FUN_100432a84(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x38))();
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))(plVar2,0x79);
  (**(code **)(*plVar2 + 0x30))(plVar2,FUN_10044e4f0);
  FUN_10044c418(lVar1 + 0x10);
  return;
}




void FUN_1004022d4(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  code *local_50;
  undefined4 local_48;
  
  lVar1 = FUN_10042e498();
  plVar2 = (long *)FUN_100441e68(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x60))();
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Vox_SonarPulse");
  (**(code **)(*plVar2 + 0x78))(plVar2,1);
  if (DAT_101d23a38 != '\0') {
    lVar1 = FUN_10042e580(param_1);
    *(undefined4 *)(lVar1 + 0x40) = 0x3dcccccd;
    *(byte *)(lVar1 + 0x44) = *(byte *)(lVar1 + 0x44) & 0xfe;
    lVar1 = lVar1 + 0x10;
    plVar2 = (long *)FUN_10043fc58(lVar1);
    local_50 = FUN_10044e2fc;
    local_48 = 4;
    (**(code **)(*plVar2 + 0x30))(plVar2,&local_50);
    plVar2 = (long *)FUN_100434b18(lVar1);
    plVar2 = (long *)(**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_Vox_Resonance_10185b168);
    local_50 = FUN_1003c1630;
    local_48 = 3;
    plVar2 = (long *)(**(code **)(*plVar2 + 0x18))(plVar2,&local_50);
    (**(code **)(*plVar2 + 0x60))(plVar2,FUN_10044e440);
    plVar2 = (long *)FUN_100434b18(lVar1);
    plVar2 = (long *)(**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_Vox_SoundwaveSlow_10185c900);
    local_50 = FUN_10044e480;
    local_48 = 3;
    plVar2 = (long *)(**(code **)(*plVar2 + 0x18))(plVar2,&local_50);
    plVar2 = (long *)(**(code **)(*plVar2 + 0x58))(plVar2,FUN_10044e390);
    (**(code **)(*plVar2 + 0x60))(plVar2,FUN_10044e440);
    plVar2 = (long *)FUN_100434b18(lVar1);
    plVar2 = (long *)(**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_Vox_HitBySoundwave_10185c910);
    local_50 = FUN_10044e378;
    local_48 = 4;
    (**(code **)(*plVar2 + 0x18))(plVar2,&local_50);
  }
  lVar1 = FUN_10042fdc4(param_1);
  FUN_100434ac8(lVar1 + 0x10);
  return;
}




void FUN_1004024a4(void)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_10042e498();
  plVar2 = (long *)FUN_100441e68(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))();
  plVar2 = (long *)(**(code **)(*plVar2 + 0x60))();
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Vox_Sonar_Ping");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x80))(plVar2,0);
                    /* WARNING: Could not recover jumptable at 0x000100402504. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0xb8))(plVar2,0);
  return;
}




void FUN_100402508(void)

{
  long lVar1;
  long *plVar2;
  code *local_20;
  undefined4 local_18;
  
  lVar1 = FUN_10042e694();
  *(ushort *)(lVar1 + 0x48) = *(ushort *)(lVar1 + 0x48) | 0x40;
  *(byte *)(lVar1 + 0x60) = *(byte *)(lVar1 + 0x60) & 0xfc | 1;
  *(ushort *)(lVar1 + 0x5a) = *(ushort *)(lVar1 + 0x5a) | 4;
  plVar2 = (long *)FUN_100433e34(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))
                             (plVar2,PTR_s_Buff_Vox_SoundBarrier_Barrier_10185c920);
  local_20 = FUN_1004945ec;
  local_18 = 3;
  (**(code **)(*plVar2 + 0x18))(plVar2,&local_20);
  return;
}




void FUN_10040258c(long param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined1 auStack_38 [24];
  
  FUN_100450f38(auStack_38,param_1 + 0x98);
  lVar1 = FUN_1004337f4(auStack_38);
  uVar2 = FUN_100494620(param_1);
  *(undefined4 *)(lVar1 + 0x10) = 4;
  *(undefined4 *)(lVar1 + 0x14) = uVar2;
  return;
}




void FUN_1004025dc(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  char cVar3;
  uint uVar4;
  char *pcVar5;
  uint uVar6;
  code *local_30;
  undefined4 local_28;
  
  uVar6 = 0x811c9dc5;
  lVar1 = FUN_10042e2c8();
  plVar2 = (long *)FUN_100430a84(lVar1 + 0x10);
  local_30 = FUN_1004946a4;
  local_28 = 3;
  (**(code **)(*plVar2 + 0x30))(plVar2,0xf,1,&local_30);
  lVar1 = FUN_100433030(param_1);
  if (PTR_s_Ability__Vox__A_1018592c0 == (undefined *)0x0) {
    uVar4 = 0;
  }
  else {
    cVar3 = *PTR_s_Ability__Vox__A_1018592c0;
    uVar4 = 0x811c9dc5;
    if (cVar3 != '\0') {
      uVar4 = 0x811c9dc5;
      pcVar5 = PTR_s_Ability__Vox__A_1018592c0;
      do {
        pcVar5 = pcVar5 + 1;
        uVar4 = (uVar4 ^ (int)cVar3) * 0x1000193;
        cVar3 = *pcVar5;
      } while (cVar3 != '\0');
    }
  }
  *(uint *)(lVar1 + 0x28) = uVar4;
  lVar1 = FUN_10049bf40(lVar1 + 0x10);
  if (PTR_s_Ability__Vox__A_1018592c0 == (undefined *)0x0) {
    uVar6 = 0;
  }
  else {
    cVar3 = *PTR_s_Ability__Vox__A_1018592c0;
    pcVar5 = PTR_s_Ability__Vox__A_1018592c0;
    while (cVar3 != '\0') {
      pcVar5 = pcVar5 + 1;
      uVar6 = (uVar6 ^ (int)cVar3) * 0x1000193;
      cVar3 = *pcVar5;
    }
  }
  *(uint *)(lVar1 + 0x20) = uVar6;
  *(code **)(lVar1 + 0x10) = FUN_1004946d8;
  *(undefined4 *)(lVar1 + 0x18) = 3;
  *(undefined4 *)(lVar1 + 0x28) = 1;
  return;
}




void FUN_1004026f8(void)

{
  return;
}




void FUN_1004026fc(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  
  puVar2 = PTR_s_onApplyName_10185d540;
  if (DAT_101d23a38 != '\0') {
    uVar3 = FUN_1004d2524(PTR_s_onApplyName_10185d540);
    uVar3 = FUN_100015208(puVar2,uVar3,0x12345678);
    *(undefined4 *)(param_1 + 0xa0 + (ulong)*(uint *)(param_1 + 0x160) * 4) = uVar3;
    uVar1 = *(uint *)(param_1 + 0x160);
    *(code **)(param_1 + 0xe0 + (ulong)uVar1 * 8) = FUN_10049470c;
    *(uint *)(param_1 + 0x160) = uVar1 + 1;
    puVar2 = PTR_s_onAfterReApplyName_10185d690;
    uVar3 = FUN_1004d2524(PTR_s_onAfterReApplyName_10185d690);
    uVar3 = FUN_100015208(puVar2,uVar3,0x12345678);
    *(undefined4 *)(param_1 + 0xa0 + (ulong)*(uint *)(param_1 + 0x160) * 4) = uVar3;
    uVar1 = *(uint *)(param_1 + 0x160);
    *(code **)(param_1 + 0xe0 + (ulong)uVar1 * 8) = FUN_10049470c;
    *(uint *)(param_1 + 0x160) = uVar1 + 1;
  }
  return;
}




void FUN_1004027bc(long param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  undefined4 local_50 [2];
  undefined4 local_48;
  
  puVar1 = PTR_s_ChargeTime_10185d5a8;
  uVar2 = FUN_1004d2524(PTR_s_ChargeTime_10185d5a8);
  uVar3 = FUN_100015208(puVar1,uVar2,0x12345678);
  uVar3 = (**(code **)(*(long *)(param_1 + 0x168) + 8))(param_1 + 0x168,uVar3);
  puVar4 = (undefined4 *)(**(code **)(*(long *)(param_1 + 0x168) + 0x10))(param_1 + 0x168,uVar3);
  *puVar4 = 0;
  *(code **)(param_1 + 0x330) = FUN_100437ae0;
  lVar5 = FUN_100437bc0(param_1);
  lVar5 = lVar5 + 0x10;
  lVar6 = FUN_10043fc08(lVar5);
  lVar7 = FUN_10049c550(lVar6 + 0x10);
  *(byte *)(lVar7 + 0x2c) = *(byte *)(lVar7 + 0x2c) & 0xf9;
  *(code **)(lVar7 + 0x18) = FUN_100437cc0;
  *(undefined4 *)(lVar7 + 0x20) = 3;
  *(undefined4 *)(lVar7 + 0x28) = 0x80000000;
  lVar7 = FUN_100437ccc(lVar6 + 0x88);
  *(undefined **)(lVar7 + 0x20) = PTR_s_ChargeTime_10185d5a8;
  *(undefined4 *)(lVar7 + 0x28) = 1;
  *(code **)(lVar7 + 0x40) = FUN_10043794c;
  *(undefined1 *)(lVar7 + 0x2c) = 1;
  lVar6 = FUN_100437ccc(lVar6 + 0xa0);
  *(undefined **)(lVar6 + 0x20) = PTR_s_ChargeTime_10185d5a8;
  *(undefined4 *)(lVar6 + 0x28) = 1;
  *(code **)(lVar6 + 0x40) = FUN_100437a08;
  *(undefined1 *)(lVar6 + 0x2c) = 1;
  lVar6 = FUN_10043fc08(lVar5);
  lVar7 = FUN_10049c76c(lVar6 + 0x10);
  *(undefined **)(lVar7 + 0x20) = PTR_s_ChargeTime_10185d5a8;
  *(undefined4 *)(lVar7 + 0x18) = 1;
  *(code **)(lVar7 + 8) = FUN_100437bac;
  *(undefined4 *)(lVar7 + 0x10) = 3;
  plVar8 = (long *)FUN_100433de4(lVar6 + 0x88);
  plVar8 = (long *)(**(code **)(*plVar8 + 0x30))();
  local_50[0] = 1;
  local_48 = 1;
  (**(code **)(*plVar8 + 0x18))(plVar8,local_50);
  lVar5 = FUN_10043fc08(lVar5);
  lVar6 = FUN_10049c76c(lVar5 + 0x10);
  *(undefined **)(lVar6 + 0x20) = PTR_s_ChargeTime_10185d5a8;
  *(undefined4 *)(lVar6 + 0x18) = 3;
  *(undefined4 *)(lVar6 + 8) = 0;
  *(undefined4 *)(lVar6 + 0x10) = 1;
  plVar8 = (long *)FUN_100433de4(lVar5 + 0x88);
  plVar8 = (long *)(**(code **)(*plVar8 + 0x30))();
  local_50[0] = 0;
  local_48 = 1;
  (**(code **)(*plVar8 + 0x18))(plVar8,local_50);
  lVar5 = FUN_1004328a0(param_1);
  plVar8 = (long *)FUN_100441e68(lVar5 + 0x10);
  plVar8 = (long *)(**(code **)(*plVar8 + 0x60))();
  plVar8 = (long *)(**(code **)(*plVar8 + 0x48))(plVar8,"Effect_Fortress_Rally");
  (**(code **)(*plVar8 + 0x78))(plVar8,1);
  lVar5 = FUN_100437ccc(lVar5 + 0x10);
  *(undefined **)(lVar5 + 0x20) = PTR_s_ChargeTime_10185d5a8;
  *(undefined4 *)(lVar5 + 0x28) = 1;
  *(code **)(lVar5 + 0x40) = FUN_100437a90;
  lVar5 = FUN_1004328a0(param_1);
  *(undefined1 *)(lVar5 + 0x28) = 1;
  lVar6 = FUN_10049be00(lVar5 + 0x10);
  *(undefined4 *)(lVar6 + 0x58) = 1;
  *(code **)(lVar6 + 0x10) = FUN_100437d1c;
  *(undefined4 *)(lVar6 + 0x18) = 3;
  plVar8 = (long *)FUN_10049bfec(lVar5 + 0x10);
  (**(code **)(*plVar8 + 0x38))();
  return;
}




void FUN_100402a38(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  long lVar4;
  undefined1 auStack_48 [24];
  
  if (DAT_101d23a38 != '\0') {
    *(undefined4 *)(param_1 + 0x328) = 0x3dcccccd;
    puVar2 = PTR_s_onBuffIntervalName_10185d558;
    uVar3 = FUN_1004d2524(PTR_s_onBuffIntervalName_10185d558);
    uVar3 = FUN_100015208(puVar2,uVar3,0x12345678);
    *(undefined4 *)(param_1 + 0xa0 + (ulong)*(uint *)(param_1 + 0x160) * 4) = uVar3;
    uVar1 = *(uint *)(param_1 + 0x160);
    *(code **)(param_1 + 0xe0 + (ulong)uVar1 * 8) = FUN_100437d50;
    *(uint *)(param_1 + 0x160) = uVar1 + 1;
    puVar2 = PTR_s_onBeforeApplyDamageName_10185d570;
    uVar3 = FUN_1004d2524(PTR_s_onBeforeApplyDamageName_10185d570);
    uVar3 = FUN_100015208(puVar2,uVar3,0x12345678);
    *(undefined4 *)(param_1 + 0xa0 + (ulong)*(uint *)(param_1 + 0x160) * 4) = uVar3;
    uVar1 = *(uint *)(param_1 + 0x160);
    *(code **)(param_1 + 0xe0 + (ulong)uVar1 * 8) = FUN_100437fd4;
    *(uint *)(param_1 + 0x160) = uVar1 + 1;
  }
  FUN_100450f38(auStack_48,param_1 + 0x70);
  FUN_100432680(auStack_48);
  FUN_100450f38(auStack_48,param_1 + 0x98);
  lVar4 = FUN_100431ad4(auStack_48);
  *(char **)(lVar4 + 0x20) = "OverHead";
  *(char **)(lVar4 + 0x10) = "Effect_Fortress_Prey";
  *(ushort *)(lVar4 + 0x74) = *(ushort *)(lVar4 + 0x74) & 0xfd98 | 0x222;
  return;
}




void FUN_100402b64(long param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined1 auStack_68 [24];
  
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x10);
  FUN_100450f38(auStack_68,param_1 + 0x98);
  lVar1 = FUN_100431ad4(auStack_68);
  *(char **)(lVar1 + 0x28) = "Bone_Footlf";
  *(ushort *)(lVar1 + 0x74) = *(ushort *)(lVar1 + 0x74) & 0xff98 | 0x43;
  *(char **)(lVar1 + 0x10) = "Effect_Fortress_Aura_foot";
  lVar1 = FUN_100431ad4(auStack_68);
  *(char **)(lVar1 + 0x28) = "Bone_Footlb";
  *(ushort *)(lVar1 + 0x74) = *(ushort *)(lVar1 + 0x74) & 0xff98 | 0x43;
  *(char **)(lVar1 + 0x10) = "Effect_Fortress_Aura_foot";
  lVar1 = FUN_100431ad4(auStack_68);
  *(char **)(lVar1 + 0x28) = "Bone_Legrf";
  *(ushort *)(lVar1 + 0x74) = *(ushort *)(lVar1 + 0x74) & 0xff98 | 0x43;
  *(char **)(lVar1 + 0x10) = "Effect_Fortress_Aura_legRight";
  lVar1 = FUN_100431ad4(auStack_68);
  *(char **)(lVar1 + 0x28) = "Bone_Leglf";
  *(ushort *)(lVar1 + 0x74) = *(ushort *)(lVar1 + 0x74) & 0xff98 | 0x43;
  *(char **)(lVar1 + 0x10) = "Effect_Fortress_Aura_legLeft";
  lVar1 = FUN_100431ad4(auStack_68);
  *(char **)(lVar1 + 0x28) = "Bone_Legrb";
  *(ushort *)(lVar1 + 0x74) = *(ushort *)(lVar1 + 0x74) & 0xff98 | 0x43;
  *(char **)(lVar1 + 0x10) = "Effect_Fortress_Aura_backlegRight";
  lVar1 = FUN_100431ad4(auStack_68);
  *(char **)(lVar1 + 0x28) = "Bone_Leglb";
  *(ushort *)(lVar1 + 0x74) = *(ushort *)(lVar1 + 0x74) & 0xff98 | 0x43;
  *(char **)(lVar1 + 0x10) = "Effect_Fortress_Aura_backlegLeft";
  lVar1 = FUN_100431ad4(auStack_68);
  *(char **)(lVar1 + 0x28) = "Bone_Shoulders";
  *(ushort *)(lVar1 + 0x74) = *(ushort *)(lVar1 + 0x74) & 0xff98 | 0x43;
  *(char **)(lVar1 + 0x10) = "Effect_Fortress_Aura_Tail";
  lVar1 = FUN_100431ad4(auStack_68);
  *(char **)(lVar1 + 0x28) = "Bone_Back";
  *(ushort *)(lVar1 + 0x74) = *(ushort *)(lVar1 + 0x74) & 0xff98 | 0x43;
  *(char **)(lVar1 + 0x10) = "Effect_Fortress_Aura_Tail";
  lVar1 = FUN_100431ad4(auStack_68);
  *(char **)(lVar1 + 0x28) = "Bone_Butt";
  *(ushort *)(lVar1 + 0x74) = *(ushort *)(lVar1 + 0x74) & 0xff98 | 0x43;
  *(char **)(lVar1 + 0x10) = "Effect_Fortress_Aura_Tail";
  lVar1 = FUN_100431ad4(auStack_68);
  *(char **)(lVar1 + 0x28) = "Bone_Tail1";
  *(ushort *)(lVar1 + 0x74) = *(ushort *)(lVar1 + 0x74) & 0xff98 | 0x43;
  *(char **)(lVar1 + 0x10) = "Effect_Fortress_Aura_Tail";
  lVar1 = FUN_100431ad4(auStack_68);
  *(char **)(lVar1 + 0x28) = "Bone_Tail2";
  *(ushort *)(lVar1 + 0x74) = *(ushort *)(lVar1 + 0x74) & 0xff98 | 0x43;
  *(char **)(lVar1 + 0x10) = "Effect_Fortress_Aura_Tail";
  lVar1 = FUN_100431ad4(auStack_68);
  *(char **)(lVar1 + 0x28) = "Bone_Tail3";
  *(ushort *)(lVar1 + 0x74) = *(ushort *)(lVar1 + 0x74) & 0xff98 | 0x43;
  *(char **)(lVar1 + 0x10) = "Effect_Fortress_Aura_Tail";
  lVar1 = FUN_100431ad4(auStack_68);
  *(char **)(lVar1 + 0x28) = "Bone_Tail4";
  *(ushort *)(lVar1 + 0x74) = *(ushort *)(lVar1 + 0x74) & 0xff98 | 0x43;
  *(char **)(lVar1 + 0x10) = "Effect_Fortress_Aura_Tail";
  lVar1 = FUN_100431ad4(auStack_68);
  *(char **)(lVar1 + 0x28) = "Bone_Head";
  *(ushort *)(lVar1 + 0x74) = *(ushort *)(lVar1 + 0x74) & 0xff98 | 0x43;
  *(char **)(lVar1 + 0x10) = "Effect_Fortress_Aura_EyeGlow";
  lVar1 = FUN_100431ad4(auStack_68);
  *(char **)(lVar1 + 0x28) = "Bone_Footrf";
  *(ushort *)(lVar1 + 0x74) = *(ushort *)(lVar1 + 0x74) & 0xff98 | 0x43;
  *(char **)(lVar1 + 0x10) = "Effect_Fortress_Aura_foot";
  lVar1 = FUN_100431ad4(auStack_68);
  *(char **)(lVar1 + 0x28) = "Bone_Footrb";
  *(ushort *)(lVar1 + 0x74) = *(ushort *)(lVar1 + 0x74) & 0xff98 | 0x43;
  *(char **)(lVar1 + 0x10) = "Effect_Fortress_Aura_foot";
  lVar1 = FUN_100431ad4(auStack_68);
  *(char **)(lVar1 + 0x28) = "Bone_Shoulders";
  *(ushort *)(lVar1 + 0x74) = *(ushort *)(lVar1 + 0x74) & 0xff98 | 0x43;
  *(char **)(lVar1 + 0x10) = "Effect_Fortress_Aura_Back";
  lVar1 = FUN_100436e1c(auStack_68);
  uVar4 = FUN_1003dfe60(uVar3,2,3,9,1);
  *(undefined8 *)(lVar1 + 0x10) = 0x10000000f;
  *(undefined4 *)(lVar1 + 0x18) = uVar4;
  lVar1 = FUN_1004337f4(auStack_68);
  uVar4 = FUN_1003dfe60(uVar3,2,4,9,1);
  *(undefined4 *)(lVar1 + 0x10) = 5;
  *(undefined4 *)(lVar1 + 0x14) = uVar4;
  lVar1 = FUN_10042e2c8(param_1);
  plVar2 = (long *)FUN_10049bef0(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))(plVar2,"u_Ultimate_Active");
  (**(code **)(*plVar2 + 0x38))(0x3f800000);
  FUN_100450f38(auStack_68,param_1 + 0x70);
  FUN_100432680(auStack_68);
  return;
}




void FUN_100402f48(undefined8 param_1)

{
  char cVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  char *pcVar7;
  code *local_50;
  undefined4 local_48;
  
  lVar2 = FUN_10042e2c8();
  plVar3 = (long *)FUN_100441e68(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x60))();
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Fortress_Bleed");
  (**(code **)(*plVar3 + 0x78))(plVar3,1);
  lVar2 = FUN_10042e580(param_1);
  *(undefined4 *)(lVar2 + 0x40) = 0x3f000000;
  *(byte *)(lVar2 + 0x44) = *(byte *)(lVar2 + 0x44) & 0xfe;
  FUN_1004386bc(lVar2 + 0x10);
  plVar3 = (long *)FUN_10043ab94(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x40))();
  (**(code **)(*plVar3 + 0x38))(plVar3,"BLEED_DAMAGE_BASE",1);
  lVar2 = FUN_10042e694(param_1);
  *(ushort *)(lVar2 + 0x48) = *(ushort *)(lVar2 + 0x48) | 0x10;
  *(byte *)(lVar2 + 0x60) = *(byte *)(lVar2 + 0x60) & 0xfc | 2;
  *(ushort *)(lVar2 + 0x5a) = *(ushort *)(lVar2 + 0x5a) | 4;
  *(undefined4 *)(lVar2 + 0x50) = 0x20000001;
  plVar3 = (long *)FUN_100433e34(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Fortress_Bleeding_10185a6c8);
  local_50 = FUN_1003a8ccc;
  local_48 = 3;
  (**(code **)(*plVar3 + 0x18))(plVar3,&local_50);
  lVar2 = FUN_1004328a0(param_1);
  lVar2 = lVar2 + 0x10;
  FUN_1004386bc(lVar2);
  plVar3 = (long *)FUN_10043ab94(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x40))();
  (**(code **)(*plVar3 + 0x38))(plVar3,"ShowHemorrageDamage",1);
  plVar3 = (long *)FUN_100434b18(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,DAT_10185a468);
  local_50 = FUN_100437d28;
  local_48 = 3;
  (**(code **)(*plVar3 + 0x18))(plVar3,&local_50);
  lVar4 = FUN_10043fc08(lVar2);
  lVar5 = FUN_10049bb94(lVar4 + 0x10);
  if (PTR_s_Ability__Fortress__B_101859310 == (undefined *)0x0) {
    uVar6 = 0;
  }
  else {
    uVar6 = 0x811c9dc5;
    cVar1 = *PTR_s_Ability__Fortress__B_101859310;
    pcVar7 = PTR_s_Ability__Fortress__B_101859310;
    while (cVar1 != '\0') {
      pcVar7 = pcVar7 + 1;
      uVar6 = (uVar6 ^ (int)cVar1) * 0x1000193;
      cVar1 = *pcVar7;
    }
  }
  *(uint *)(lVar5 + 8) = uVar6;
  plVar3 = (long *)FUN_100434b18(lVar4 + 0x88);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Fortress_Slow_10185c948);
  local_50 = FUN_100437d3c;
  local_48 = 3;
  (**(code **)(*plVar3 + 0x18))(plVar3,&local_50);
  FUN_1004385f0(lVar2);
  lVar2 = FUN_10042e3b0(param_1);
  FUN_10049b814(lVar2 + 0x10);
  plVar3 = (long *)FUN_100433e34(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,DAT_10185a468);
  local_50 = (code *)((ulong)local_50 & 0xffffffff00000000);
  local_48 = 1;
  (**(code **)(*plVar3 + 0x18))(plVar3,&local_50);
  return;
}




void FUN_1004031ec(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  undefined4 uVar5;
  undefined1 auStack_48 [24];
  
  uVar1 = FUN_100345d90(*(undefined4 *)(param_1 + 0x308));
  lVar2 = FUN_10042e2c8(param_1);
  plVar3 = (long *)FUN_10049bfec(lVar2 + 0x10);
  (**(code **)(*plVar3 + 0x38))();
  FUN_100450f38(auStack_48,param_1 + 0x90);
  lVar2 = FUN_100435fb4(auStack_48);
  *(code **)(lVar2 + 0x10) = FUN_10043805c;
  FUN_100450f38(auStack_48,param_1 + 0x98);
  lVar2 = FUN_100431ad4(auStack_48);
  *(ushort *)(lVar2 + 0x74) = *(ushort *)(lVar2 + 0x74) & 0xff98 | 0x21;
  *(char **)(lVar2 + 0x10) = "Effect_Fortress_Rally";
  FUN_100432d40(param_1);
  lVar2 = FUN_100345d90();
  if (lVar2 != 0) {
    lVar4 = FUN_10043255c(auStack_48);
    uVar5 = FUN_1003dfe60(uVar1,0,3,0x19,0);
    *(undefined4 *)(lVar4 + 0x10) = 1;
    *(undefined4 *)(lVar4 + 0x14) = uVar5;
    uVar5 = *(undefined4 *)(lVar2 + 0x30);
    *(long *)(lVar4 + 0x18) = lVar2 + 0x28;
    *(undefined4 *)(lVar4 + 0x20) = uVar5;
    *(undefined4 *)(lVar4 + 0x30) = 1;
  }
  return;
}




void FUN_1004032f0(long param_1)

{
  long lVar1;
  undefined4 local_30 [2];
  undefined4 local_28;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x10) + 0x10);
  if (*(int *)(lVar1 + 0x260) != *(int *)(param_1 + 0x308)) {
    lVar1 = FUN_100345d90(*(int *)(param_1 + 0x308));
  }
  local_30[0] = FUN_1003dfe60(lVar1,1,6,0x19,0);
  local_28 = 1;
  FUN_10042eb40(param_1,local_30);
  return;
}




void FUN_100403360(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  FUN_10042ebc4(param_1,1);
  FUN_100450f38(auStack_38,param_1 + 0x98);
  lVar1 = FUN_100431ad4(auStack_38);
  *(ushort *)(lVar1 + 0x74) = *(ushort *)(lVar1 + 0x74) & 0xff98 | 0x21;
  *(char **)(lVar1 + 0x10) = "Effect_Fortress_Withdraw";
  return;
}




void FUN_1004033c4(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  long lVar5;
  float fVar6;
  undefined1 auStack_48 [24];
  
  FUN_1003461dc(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x10));
  uVar4 = FUN_100345d90();
  puVar2 = PTR_s_onApplyName_10185d540;
  if (DAT_101d23a38 != '\0') {
    uVar3 = FUN_1004d2524(PTR_s_onApplyName_10185d540);
    uVar3 = FUN_100015208(puVar2,uVar3,0x12345678);
    *(undefined4 *)(param_1 + 0xa0 + (ulong)*(uint *)(param_1 + 0x160) * 4) = uVar3;
    uVar1 = *(uint *)(param_1 + 0x160);
    *(code **)(param_1 + 0xa0 + (ulong)uVar1 * 8 + 0x40) = FUN_100438194;
    *(uint *)(param_1 + 0x160) = uVar1 + 1;
  }
  fVar6 = (float)FUN_1003dfe60(uVar4,2,2,9,1);
  *(float *)(param_1 + 0x318) = fVar6;
  if (*(float *)(param_1 + 0x31c) < fVar6) {
    *(float *)(param_1 + 0x31c) = fVar6;
  }
  *(uint *)(param_1 + 0x340) =
       *(uint *)(param_1 + 0x340) & 0xfffe0 | (uint)(fVar6 < 0.0) << 4 |
       *(uint *)(param_1 + 0x340) & 0xfff0000f;
  FUN_100450f38(auStack_48,param_1 + 0x98);
  lVar5 = FUN_100431ad4(auStack_48);
  *(char **)(lVar5 + 0x28) = "Bone_Back";
  *(ushort *)(lVar5 + 0x74) = *(ushort *)(lVar5 + 0x74) & 0xff98 | 0x43;
  *(char **)(lVar5 + 0x10) = "Effect_Fortress_MiniWolf_Aura_E";
  *(char **)(lVar5 + 0x18) = "Effect_Fortress_MiniWolf_Aura_A";
  FUN_100450f38(auStack_48,param_1 + 0x80);
  FUN_100435830(auStack_48);
  return;
}




void FUN_100403508(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  
  puVar2 = PTR_s_onBeforeApplyDamageName_10185d570;
  uVar3 = FUN_1004d2524(PTR_s_onBeforeApplyDamageName_10185d570);
  uVar3 = FUN_100015208(puVar2,uVar3,0x12345678);
  *(undefined4 *)(param_1 + 0xa0 + (ulong)*(uint *)(param_1 + 0x160) * 4) = uVar3;
  uVar1 = *(uint *)(param_1 + 0x160);
  *(code **)(param_1 + 0xe0 + (ulong)uVar1 * 8) = FUN_1004382ec;
  *(uint *)(param_1 + 0x160) = uVar1 + 1;
  puVar2 = PTR_s_onAfterApplyDamageName_10185d578;
  uVar3 = FUN_1004d2524(PTR_s_onAfterApplyDamageName_10185d578);
  uVar3 = FUN_100015208(puVar2,uVar3,0x12345678);
  *(undefined4 *)(param_1 + 0xa0 + (ulong)*(uint *)(param_1 + 0x160) * 4) = uVar3;
  uVar1 = *(uint *)(param_1 + 0x160);
  *(code **)(param_1 + 0xe0 + (ulong)uVar1 * 8) = FUN_1004382a0;
  *(uint *)(param_1 + 0x160) = uVar1 + 1;
  return;
}




void FUN_1004035bc(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 auStack_78 [24];
  
  lVar2 = *(long *)(*(long *)(param_1 + 0x10) + 0x10);
  FUN_1003461dc(lVar2);
  lVar1 = FUN_100345d90();
  FUN_100450f38(auStack_78,param_1 + 0x68);
  lVar3 = *(long *)(lVar1 + 0x40);
  fVar5 = *(float *)(lVar3 + 0x38) + *(float *)(lVar3 + 0xec) * (*(float *)(lVar3 + 0x254) + 1.0);
  NEON_fminnm(fVar5 + fVar5 * *(float *)(lVar3 + 0x1a0),DAT_101e94320);
  fVar8 = DAT_101e94260 - *(float *)(lVar3 + 0x38);
  fVar5 = (float)FUN_1003dfe60(lVar1,2,7,9,1);
  fVar8 = fVar8 * fVar5;
  fVar7 = *(float *)(lVar3 + 0x54) + *(float *)(lVar3 + 0x108) * (*(float *)(lVar3 + 0x270) + 1.0);
  NEON_fminnm(fVar7 + fVar7 * *(float *)(lVar3 + 0x1bc),DAT_101e9433c);
  fVar7 = *(float *)(lVar3 + 0x58) + *(float *)(lVar3 + 0x10c) * (*(float *)(lVar3 + 0x274) + 1.0);
  if (fVar8 <= 0.0) {
    fVar8 = 0.0;
  }
  fVar6 = (DAT_101e9427c - *(float *)(lVar3 + 0x54)) * fVar5;
  if (fVar6 <= 0.0) {
    fVar6 = 0.0;
  }
  NEON_fminnm(fVar7 + fVar7 * *(float *)(lVar3 + 0x1c0),DAT_101e94340);
  fVar5 = (DAT_101e94280 - *(float *)(lVar3 + 0x58)) * fVar5;
  if (fVar5 <= 0.0) {
    fVar5 = 0.0;
  }
  lVar3 = FUN_100430f18(auStack_78);
  uVar4 = FUN_1003dfe60(lVar1,2,8,9,1);
  *(undefined8 *)(lVar3 + 0x10) = 0;
  *(undefined4 *)(lVar3 + 0x20) = uVar4;
  *(undefined2 *)(lVar3 + 0x24) = 1;
  lVar1 = FUN_100430f18(auStack_78);
  *(mach_header **)(lVar1 + 0x10) = &__mh_execute_header;
  *(float *)(lVar1 + 0x20) = fVar8;
  *(undefined2 *)(lVar1 + 0x24) = 0;
  lVar1 = FUN_100430f18(auStack_78);
  *(undefined8 *)(lVar1 + 0x10) = 0x100000007;
  *(float *)(lVar1 + 0x20) = fVar6;
  *(undefined2 *)(lVar1 + 0x24) = 0;
  lVar1 = FUN_100430f18(auStack_78);
  *(undefined8 *)(lVar1 + 0x10) = 0x100000008;
  *(float *)(lVar1 + 0x20) = fVar5;
  *(undefined2 *)(lVar1 + 0x24) = 0;
  lVar1 = FUN_100430f18(auStack_78);
  *(undefined8 *)(lVar1 + 0x10) = 0x100000023;
  *(undefined4 *)(lVar1 + 0x20) = 0xbf800000;
  *(undefined2 *)(lVar1 + 0x24) = 1;
  lVar1 = FUN_10043101c(auStack_78);
  fVar5 = DAT_101e94260;
  lVar2 = *(long *)(lVar2 + 0x40);
  fVar8 = *(float *)(lVar2 + 0x38) + *(float *)(lVar2 + 0xec) * (*(float *)(lVar2 + 0x254) + 1.0);
  NEON_fminnm(fVar8 + fVar8 * *(float *)(lVar2 + 0x1a0),DAT_101e94320);
  *(undefined4 *)(lVar1 + 0x10) = 0;
  *(float *)(lVar1 + 0x14) = fVar5;
  *(undefined1 *)(lVar1 + 0x20) = 0;
  return;
}




void FUN_1004037e0(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  uint uVar4;
  char cVar5;
  char *pcVar6;
  uint uVar7;
  code *local_60;
  undefined4 local_58;
  
  uVar7 = 0x811c9dc5;
  lVar1 = FUN_10042e2c8();
  lVar2 = FUN_10049bf40(lVar1 + 0x10);
  if (PTR_s_Ability__Fortress__A_101859308 == (undefined *)0x0) {
    uVar4 = 0;
  }
  else {
    cVar5 = *PTR_s_Ability__Fortress__A_101859308;
    uVar4 = 0x811c9dc5;
    if (cVar5 != '\0') {
      uVar4 = 0x811c9dc5;
      pcVar6 = PTR_s_Ability__Fortress__A_101859308;
      do {
        pcVar6 = pcVar6 + 1;
        uVar4 = (uVar4 ^ (int)cVar5) * 0x1000193;
        cVar5 = *pcVar6;
      } while (cVar5 != '\0');
    }
  }
  *(uint *)(lVar2 + 0x20) = uVar4;
  *(code **)(lVar2 + 0x10) = FUN_100492d7c;
  *(undefined4 *)(lVar2 + 0x18) = 3;
  *(undefined4 *)(lVar2 + 0x28) = 1;
  lVar1 = FUN_10049bf40(lVar1 + 0x10);
  if (PTR_s_Ability__Fortress__B_101859310 == (undefined *)0x0) {
    uVar4 = 0;
  }
  else {
    cVar5 = *PTR_s_Ability__Fortress__B_101859310;
    uVar4 = 0x811c9dc5;
    if (cVar5 != '\0') {
      uVar4 = 0x811c9dc5;
      pcVar6 = PTR_s_Ability__Fortress__B_101859310;
      do {
        pcVar6 = pcVar6 + 1;
        uVar4 = (uVar4 ^ (int)cVar5) * 0x1000193;
        cVar5 = *pcVar6;
      } while (cVar5 != '\0');
    }
  }
  *(uint *)(lVar1 + 0x20) = uVar4;
  *(code **)(lVar1 + 0x10) = FUN_100492d7c;
  *(undefined4 *)(lVar1 + 0x18) = 3;
  *(undefined4 *)(lVar1 + 0x28) = 1;
  lVar1 = FUN_10042e694(param_1);
  *(ushort *)(lVar1 + 0x48) = *(ushort *)(lVar1 + 0x48) | 8;
  *(undefined4 *)(lVar1 + 0x40) = 0xf97377c1;
  plVar3 = (long *)FUN_10043187c(lVar1 + 0x10);
  local_60 = FUN_100492db0;
  local_58 = 3;
  (**(code **)(*plVar3 + 0x30))(plVar3,&local_60);
  lVar1 = FUN_100433910(param_1);
  if (PTR_s_Ability__Fortress__A_101859308 == (undefined *)0x0) {
    uVar4 = 0;
  }
  else {
    cVar5 = *PTR_s_Ability__Fortress__A_101859308;
    uVar4 = 0x811c9dc5;
    if (cVar5 != '\0') {
      uVar4 = 0x811c9dc5;
      pcVar6 = PTR_s_Ability__Fortress__A_101859308;
      do {
        pcVar6 = pcVar6 + 1;
        uVar4 = (uVar4 ^ (int)cVar5) * 0x1000193;
        cVar5 = *pcVar6;
      } while (cVar5 != '\0');
    }
  }
  *(uint *)(lVar1 + 0x28) = uVar4;
  *(byte *)(lVar1 + 0x38) = *(byte *)(lVar1 + 0x38) & 0xfb;
  FUN_100492c8c();
  lVar1 = FUN_100433910(param_1);
  if (PTR_s_Ability__Fortress__B_101859310 == (undefined *)0x0) {
    uVar7 = 0;
  }
  else {
    cVar5 = *PTR_s_Ability__Fortress__B_101859310;
    pcVar6 = PTR_s_Ability__Fortress__B_101859310;
    while (cVar5 != '\0') {
      pcVar6 = pcVar6 + 1;
      uVar7 = (uVar7 ^ (int)cVar5) * 0x1000193;
      cVar5 = *pcVar6;
    }
  }
  *(uint *)(lVar1 + 0x28) = uVar7;
  *(byte *)(lVar1 + 0x38) = *(byte *)(lVar1 + 0x38) & 0xfb;
  FUN_100492c8c();
  return;
}




void FUN_1004039ec(void)

{
  char cVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  uint uVar5;
  char *pcVar6;
  code *local_30;
  undefined4 local_28;
  
  lVar2 = FUN_10042e2c8();
  lVar3 = FUN_10049bf40(lVar2 + 0x10);
  if (PTR_s_Ability__Fortress__C_101859318 == (undefined *)0x0) {
    uVar5 = 0;
  }
  else {
    uVar5 = 0x811c9dc5;
    cVar1 = *PTR_s_Ability__Fortress__C_101859318;
    pcVar6 = PTR_s_Ability__Fortress__C_101859318;
    while (cVar1 != '\0') {
      pcVar6 = pcVar6 + 1;
      uVar5 = (uVar5 ^ (int)cVar1) * 0x1000193;
      cVar1 = *pcVar6;
    }
  }
  *(uint *)(lVar3 + 0x20) = uVar5;
  *(code **)(lVar3 + 0x10) = FUN_100492b84;
  *(undefined4 *)(lVar3 + 0x18) = 3;
  *(undefined4 *)(lVar3 + 0x28) = 1;
  plVar4 = (long *)FUN_100430a84(lVar2 + 0x10);
  local_30 = FUN_100492bb8;
  local_28 = 3;
  (**(code **)(*plVar4 + 0x30))(plVar4,0x1f,1,&local_30);
  return;
}




void FUN_100403ab0(void)

{
  long lVar1;
  long *plVar2;
  code *local_20;
  undefined4 local_18;
  
  lVar1 = FUN_10043099c();
  plVar2 = (long *)FUN_100430a84(lVar1 + 0x10);
  local_20 = FUN_100492de4;
  local_18 = 3;
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))(plVar2,0x1e,1,&local_20);
  (**(code **)(*plVar2 + 0x38))();
  return;
}




void FUN_100403b0c(void)

{
  long lVar1;
  long *plVar2;
  undefined4 local_30 [2];
  undefined4 local_28;
  
  lVar1 = FUN_10042fdc4();
  FUN_10043aa04(lVar1 + 0x10);
  plVar2 = (long *)FUN_10049de40(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))
                             (plVar2,PTR_s_Buff_Fortress_CriticalWoundsStac_10185a6e0);
  local_30[0] = 0xffffffff;
  local_28 = 1;
  (**(code **)(*plVar2 + 0x10))(plVar2,local_30);
  return;
}




void FUN_100403b78(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  code *local_30;
  undefined4 local_28;
  
  lVar1 = FUN_10042e2c8();
  lVar1 = lVar1 + 0x10;
  lVar2 = FUN_10049da9c(lVar1);
  *(undefined **)(lVar2 + 0x10) = PTR_s_Ability__Fortress__A_101859308;
  *(code **)(lVar2 + 0x18) = FUN_100492ae8;
  *(undefined4 *)(lVar2 + 0x20) = 3;
  *(undefined4 *)(lVar2 + 0x2c) = 0;
  plVar3 = (long *)FUN_100430a84(lVar1);
  local_30 = FUN_100492b1c;
  local_28 = 3;
  (**(code **)(*plVar3 + 0x30))(plVar3,4,2,&local_30);
  plVar3 = (long *)FUN_100430a84(lVar1);
  local_30 = FUN_100492b50;
  local_28 = 3;
  (**(code **)(*plVar3 + 0x30))(plVar3,0xf,1,&local_30);
  return;
}




void FUN_100403c28(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  long lVar6;
  undefined1 auStack_48 [24];
  
  *(undefined4 *)(param_1 + 0x328) = 0x3dcccccd;
  puVar2 = PTR_s_time_out_of_combat_10185d668;
  if (DAT_101d23a38 != '\0') {
    uVar3 = FUN_1004d2524(PTR_s_time_out_of_combat_10185d668);
    uVar4 = FUN_100015208(puVar2,uVar3,0x12345678);
    (**(code **)(*(long *)(param_1 + 0x168) + 8))(param_1 + 0x168,uVar4);
    puVar2 = PTR_s_time_out_of_combat_10185d668;
    uVar3 = FUN_1004d2524(PTR_s_time_out_of_combat_10185d668);
    uVar4 = FUN_100015208(puVar2,uVar3,0x12345678);
    puVar5 = (undefined4 *)(**(code **)(*(long *)(param_1 + 0x168) + 0x10))(param_1 + 0x168,uVar4);
    *puVar5 = 0;
    puVar2 = PTR_s_onAfterApplyDamageName_10185d578;
    uVar3 = FUN_1004d2524(PTR_s_onAfterApplyDamageName_10185d578);
    uVar3 = FUN_100015208(puVar2,uVar3,0x12345678);
    *(undefined4 *)(param_1 + 0xa0 + (ulong)*(uint *)(param_1 + 0x160) * 4) = uVar3;
    uVar1 = *(uint *)(param_1 + 0x160);
    *(code **)(param_1 + 0xe0 + (ulong)uVar1 * 8) = FUN_100447430;
    *(uint *)(param_1 + 0x160) = uVar1 + 1;
    puVar2 = PTR_s_onBuffIntervalName_10185d558;
    uVar3 = FUN_1004d2524(PTR_s_onBuffIntervalName_10185d558);
    uVar3 = FUN_100015208(puVar2,uVar3,0x12345678);
    *(undefined4 *)(param_1 + 0xa0 + (ulong)*(uint *)(param_1 + 0x160) * 4) = uVar3;
    uVar1 = *(uint *)(param_1 + 0x160);
    *(code **)(param_1 + 0xe0 + (ulong)uVar1 * 8) = FUN_100447764;
    *(uint *)(param_1 + 0x160) = uVar1 + 1;
  }
  FUN_100450f38(auStack_48,param_1 + 0x68);
  lVar6 = FUN_100430f18(auStack_48);
  uVar3 = *(undefined4 *)
           (**(long **)(*(long *)(*(long *)(*(long *)(param_1 + 0x10) + 0x10) + 0x38) + 0x228) + 8);
  *(undefined8 *)(lVar6 + 0x10) = 0x2b;
  *(undefined4 *)(lVar6 + 0x20) = uVar3;
  *(undefined2 *)(lVar6 + 0x24) = 1;
  lVar6 = FUN_10043101c(auStack_48);
  *(undefined8 *)(lVar6 + 0x10) = 3;
  *(undefined1 *)(lVar6 + 0x20) = 1;
  return;
}




void FUN_100403dc8(long param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  float fVar6;
  code *local_40;
  undefined4 local_38;
  
  FUN_1003461dc(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x10));
  lVar1 = FUN_100345d90();
  fVar6 = (float)FUN_1003dfe60(lVar1,0,7,0x19,0);
  *(float *)(param_1 + 0x318) = fVar6;
  if (*(float *)(param_1 + 0x31c) < fVar6) {
    *(float *)(param_1 + 0x31c) = fVar6;
  }
  *(uint *)(param_1 + 0x340) =
       *(uint *)(param_1 + 0x340) & 0xfffe0 | (uint)(fVar6 < 0.0) << 4 |
       *(uint *)(param_1 + 0x340) & 0xfff0000f;
  lVar2 = FUN_10042e498(param_1);
  plVar3 = (long *)FUN_100441e18(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))(plVar3,"Sound_Rona_Ability_A_Swing");
  uVar4 = FUN_1010a1520();
  lVar5 = FUN_1010a0e0c(uVar4,0,"*KindredSoundBalance*",0);
  FUN_1003bc8d4(*(undefined4 *)(lVar5 + 0x1e8));
  (**(code **)(*plVar3 + 0x28))(plVar3);
  plVar3 = (long *)FUN_100441e68(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x60))();
  (**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Rona_Leap_Land_Enemy");
  lVar2 = FUN_10042fdc4(param_1);
  plVar3 = (long *)FUN_100433e34(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Rona_RupturedGround_10185c978);
  local_40 = FUN_100447900;
  local_38 = 3;
  plVar3 = (long *)(**(code **)(*plVar3 + 0x18))(plVar3,&local_40);
  (**(code **)(*plVar3 + 0x30))(plVar3,*(undefined4 *)(lVar1 + 0x260));
  return;
}




void FUN_100403f2c(long param_1)

{
  byte bVar1;
  byte bVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  undefined4 uVar9;
  undefined4 local_b8 [2];
  undefined4 local_b0;
  undefined8 local_9d;
  undefined4 uStack_95;
  undefined4 uStack_91;
  undefined4 uStack_8d;
  undefined8 uStack_89;
  undefined8 local_7d;
  undefined4 uStack_75;
  undefined4 uStack_71;
  undefined4 uStack_6d;
  undefined8 uStack_69;
  
  FUN_1003461dc(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x10));
  lVar4 = FUN_100345d90();
  *(undefined4 *)(param_1 + 0x328) = 0x3dcccccd;
  lVar5 = FUN_1003e10f0();
  bVar1 = *(byte *)(lVar5 + 0xe5);
  uStack_69 = 0;
  uStack_71 = 0;
  uStack_6d = 0;
  local_7d = 0;
  uStack_75 = 0;
  lVar5 = FUN_1003e10f0();
  bVar2 = *(byte *)(lVar5 + 0xe5);
  uStack_89 = 0;
  uStack_91 = 0;
  uStack_8d = 0;
  local_9d = 0;
  uStack_95 = 0;
  lVar5 = FUN_10042e498(param_1);
  lVar5 = lVar5 + 0x10;
  plVar6 = (long *)FUN_100441e18(lVar5);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x38))(plVar6,"Sound_Rona_Ability_A_Impact");
  uVar7 = FUN_1010a1520();
  lVar8 = FUN_1010a0e0c(uVar7,0,"*KindredSoundBalance*",0);
  (**(code **)(*plVar6 + 0x28))(*(undefined4 *)(lVar8 + 0x1ec),plVar6);
  plVar6 = (long *)FUN_10043fc58(lVar5);
  local_b8[0] = 0x40400000;
  local_b0 = 1;
  (**(code **)(*plVar6 + 0x30))(plVar6,local_b8);
  plVar6 = (long *)FUN_10043ab94(lVar5);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x40))();
  (**(code **)(*plVar6 + 0x38))(plVar6,"RupturedGroundDamage",0);
  FUN_100450f38(local_b8,param_1 + 0x68);
  lVar5 = FUN_100437600(local_b8);
  *(long *)(lVar5 + 0x18) = lVar4;
  *(undefined1 *)(lVar5 + 0x20) = 1;
  *(ulong *)(lVar5 + 0x2c) = CONCAT44(uStack_71,uStack_75);
  *(undefined8 *)(lVar5 + 0x24) = local_7d;
  *(undefined8 *)(lVar5 + 0x38) = uStack_69;
  *(ulong *)(lVar5 + 0x30) = CONCAT44(uStack_6d,uStack_71);
  *(undefined8 *)(lVar5 + 0x48) = 0xbf800000c0000000;
  *(undefined8 *)(lVar5 + 0x40) = 0xbf80000041100000;
  *(undefined4 *)(lVar5 + 0x50) = 0x3f800000;
  *(undefined1 *)(lVar5 + 0x54) = 0xff;
  *(undefined8 *)(lVar5 + 0x60) = 0xffffffff00000000;
  *(undefined8 *)(lVar5 + 0x58) = 0xffffffff00000001;
  *(byte *)(lVar5 + 0x6a) = bVar1 | 0x14;
  *(undefined2 *)(lVar5 + 0x68) = 0xc120;
  *(byte *)(lVar5 + 0x94) = *(byte *)(lVar5 + 0x94) & 0xfc | DAT_101d23a38 != '\0';
  lVar5 = FUN_100431e0c(local_b8);
  puVar3 = PTR_s_Buff_Rona_RupturedGround_Fortifi_10185c980;
  uVar9 = FUN_1003dfe60(lVar4,0,6,0x19,0);
  *(undefined **)(lVar5 + 0x10) = puVar3;
  *(undefined4 *)(lVar5 + 0x30) = uVar9;
  *(code **)(lVar5 + 0x28) = FUN_100447914;
  *(undefined8 *)(lVar5 + 0x38) = 0xffffffff;
  *(undefined4 *)(lVar5 + 0x44) = 0;
  *(code **)(lVar5 + 0x50) = FUN_100447990;
  *(undefined4 *)(lVar5 + 0x58) = *(undefined4 *)(lVar4 + 0x260);
  FUN_100431f2c(local_b8);
  FUN_100450f38(local_b8,param_1 + 0x90);
  lVar5 = FUN_100437600(local_b8);
  *(long *)(lVar5 + 0x18) = lVar4;
  *(undefined1 *)(lVar5 + 0x20) = 1;
  *(ulong *)(lVar5 + 0x2c) = CONCAT44(uStack_91,uStack_95);
  *(undefined8 *)(lVar5 + 0x24) = local_9d;
  *(undefined8 *)(lVar5 + 0x38) = uStack_89;
  *(ulong *)(lVar5 + 0x30) = CONCAT44(uStack_8d,uStack_91);
  *(undefined8 *)(lVar5 + 0x48) = 0xbf800000c0000000;
  *(undefined8 *)(lVar5 + 0x40) = 0xbf80000041100000;
  *(undefined4 *)(lVar5 + 0x50) = 0x3f800000;
  *(undefined1 *)(lVar5 + 0x54) = 0xff;
  *(undefined8 *)(lVar5 + 0x60) = 0xffffffff00000000;
  *(undefined8 *)(lVar5 + 0x58) = 0xffffffff00040000;
  *(byte *)(lVar5 + 0x6a) = bVar2 | 0x14;
  *(undefined2 *)(lVar5 + 0x68) = 0xc120;
  *(byte *)(lVar5 + 0x94) = *(byte *)(lVar5 + 0x94) & 0xfc | DAT_101d23a38 != '\0';
  lVar5 = FUN_100431e0c(local_b8);
  uVar9 = *(undefined4 *)(lVar4 + 0x260);
  *(undefined **)(lVar5 + 0x10) = PTR_s_Buff_Rona_StandingOnRupturedGrou_10185c988;
  *(undefined8 *)(lVar5 + 0x30) = 0x13e4ccccd;
  *(undefined4 *)(lVar5 + 0x38) = uVar9;
  *(undefined8 *)(lVar5 + 0x44) = 0;
  *(undefined8 *)(lVar5 + 0x3c) = 0;
  FUN_100431f2c(local_b8);
  FUN_100450f38(local_b8,param_1 + 0x80);
  FUN_100435830(local_b8);
  return;
}




void FUN_100404238(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined1 auStack_48 [24];
  
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x10);
  FUN_100450f38(auStack_48,param_1 + 0x98);
  lVar1 = FUN_1004337f4(auStack_48);
  uVar3 = FUN_1003dfe60(uVar2,0,5,0x19,0);
  *(undefined4 *)(lVar1 + 0x10) = 5;
  *(undefined4 *)(lVar1 + 0x14) = uVar3;
  FUN_100450f38(auStack_48,param_1 + 0x70);
  FUN_1004354f8(auStack_48);
  return;
}




void FUN_1004042bc(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined4 uVar3;
  undefined1 auStack_48 [24];
  
  uVar1 = FUN_100345d90(*(undefined4 *)(param_1 + 0x308));
  FUN_100450f38(auStack_48,param_1 + 0x98);
  uVar3 = FUN_1003dfe60(uVar1,0,9,0x19,0);
  lVar2 = FUN_10043255c(auStack_48);
  *(undefined4 *)(lVar2 + 0x10) = 2;
  *(undefined4 *)(lVar2 + 0x14) = uVar3;
  FUN_100450f38(auStack_48,param_1 + 0x70);
  FUN_1004354f8(auStack_48);
  return;
}




void FUN_100404344(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined4 uVar3;
  undefined1 auStack_38 [24];
  
  FUN_100450f38(auStack_38,param_1 + 0x98);
  lVar2 = FUN_1004432e0(auStack_38);
  *(undefined **)(lVar2 + 0x10) = PTR_s_Ability__Rona__BAttackOverride_101859370;
  lVar2 = FUN_1004479b4(auStack_38);
  *(char **)(lVar2 + 0x10) = "Idle";
  *(char **)(lVar2 + 0x18) = "Ability02_Idle";
  lVar2 = FUN_1004479b4(auStack_38);
  *(char **)(lVar2 + 0x10) = "IdleCombat";
  *(char **)(lVar2 + 0x18) = "Ability02_Idle";
  lVar2 = FUN_1004479b4(auStack_38);
  *(char **)(lVar2 + 0x10) = "Move";
  *(char **)(lVar2 + 0x18) = "Ability02_Run";
  lVar2 = FUN_1004479b4(auStack_38);
  *(char **)(lVar2 + 0x10) = "MoveCombat";
  *(char **)(lVar2 + 0x18) = "Ability02_Run";
  lVar2 = FUN_1004479b4(auStack_38);
  *(char **)(lVar2 + 0x10) = "MoveStart";
  *(char **)(lVar2 + 0x18) = "Ability02_MoveStart";
  lVar2 = FUN_1004479b4(auStack_38);
  *(char **)(lVar2 + 0x10) = "MoveStartCombat";
  *(char **)(lVar2 + 0x18) = "Ability02_MoveStart";
  lVar2 = FUN_1004479b4(auStack_38);
  *(char **)(lVar2 + 0x10) = "MoveStop";
  *(char **)(lVar2 + 0x18) = "Ability02_MoveStop";
  lVar2 = FUN_1004479b4(auStack_38);
  *(char **)(lVar2 + 0x10) = "MoveStopCombat";
  *(char **)(lVar2 + 0x18) = "Ability02_MoveStop";
  lVar2 = FUN_10043255c(auStack_38);
  uVar3 = FUN_1003dfe60(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x10),1,4,0x19,0);
  *(undefined4 *)(lVar2 + 0x10) = 1;
  *(undefined4 *)(lVar2 + 0x14) = uVar3;
  lVar2 = FUN_100445aa0(auStack_38);
  puVar1 = PTR_s_Ability__Rona__B_FollowUp_101859398;
  *(undefined **)(lVar2 + 0x10) = PTR_s_Ability__Rona__B_101859380;
  *(undefined **)(lVar2 + 0x18) = puVar1;
  lVar2 = FUN_100431ad4(auStack_38);
  *(char **)(lVar2 + 0x28) = "Bone_LeftAxe";
  *(ushort *)(lVar2 + 0x74) = *(ushort *)(lVar2 + 0x74) & 0xff98 | 0x43;
  *(char **)(lVar2 + 0x10) = "Effect_Rona_Weapon";
  lVar2 = FUN_100431ad4(auStack_38);
  *(char **)(lVar2 + 0x28) = "Bone_RightAxe";
  *(ushort *)(lVar2 + 0x74) = *(ushort *)(lVar2 + 0x74) & 0xff98 | 0x43;
  *(char **)(lVar2 + 0x10) = "Effect_Rona_Weapon2";
  return;
}




void FUN_100404500(long param_1)

{
  uint uVar1;
  byte bVar2;
  undefined *puVar3;
  int iVar4;
  undefined4 uVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined8 uVar11;
  ushort *puVar12;
  undefined8 *puVar13;
  float fVar14;
  float fVar15;
  undefined4 uVar16;
  undefined4 local_b0 [2];
  undefined4 local_a8;
  undefined1 auStack_98 [3];
  undefined8 local_95;
  undefined4 local_8d;
  undefined8 local_89;
  undefined8 local_81;
  undefined4 local_78;
  
  uVar11 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x10);
  fVar14 = (float)FUN_1003dfe60(uVar11,2,2,0x19,0);
  *(float *)(param_1 + 0x328) = 1.0 / fVar14;
  puVar13 = (undefined8 *)((ulong)auStack_98 | 3);
  lVar6 = FUN_1003e10f0();
  bVar2 = *(byte *)(lVar6 + 0xe5);
  fVar15 = (float)FUN_1003dfe60(uVar11,2,1,0x19,0);
  local_81 = 0;
  local_89 = 0;
  local_95 = 0;
  local_8d = 0;
  lVar6 = FUN_10042e498(param_1);
  lVar6 = lVar6 + 0x10;
  plVar7 = (long *)FUN_10043d6ac(lVar6);
  plVar7 = (long *)(**(code **)(*plVar7 + 0x30))(plVar7,"CancelWhirlwind");
  local_b0[0] = 0x3f800000;
  local_a8 = 1;
  (**(code **)(*plVar7 + 0x20))(plVar7,local_b0);
  plVar7 = (long *)FUN_10043594c(lVar6);
  plVar7 = (long *)(**(code **)(*plVar7 + 0x30))(plVar7,"Whirlwind");
  (**(code **)(*plVar7 + 0x20))();
  plVar7 = (long *)FUN_100433e34(lVar6);
  (**(code **)(*plVar7 + 0x30))(plVar7,PTR_s_Buff_Rona_Whirlwind_FortifiedHea_10185c990);
  lVar6 = FUN_10042fdc4(param_1);
  plVar7 = (long *)FUN_10049c8e4(lVar6 + 0x10);
  (**(code **)(*plVar7 + 0x30))(plVar7,PTR_s_Ability__Rona__C_101859388);
  lVar6 = FUN_10043aaf4(lVar6 + 0x10);
  *(code **)(lVar6 + 0x10) = FUN_100447bb8;
  FUN_100450f38(local_b0,param_1 + 0x98);
  puVar3 = PTR_s_Buff_Rona_Talent_FastWhirlwind_10185c998;
  lVar6 = FUN_100345d90(*(undefined4 *)(param_1 + 0x308));
  if ((lVar6 == 0) || (iVar4 = FUN_1003a47d0(lVar6,puVar3), iVar4 == 0)) {
    lVar6 = FUN_10043255c(local_b0);
    uVar5 = 2;
    uVar16 = FUN_1003dfe60(uVar11,2,4,0x19,0);
  }
  else {
    lVar6 = FUN_10043255c(local_b0);
    local_78 = DAT_101d90cf0;
    uVar16 = FUN_1003dfee8(uVar11,&local_78,2,9);
    uVar5 = 1;
  }
  *(undefined4 *)(lVar6 + 0x10) = uVar5;
  *(undefined4 *)(lVar6 + 0x14) = uVar16;
  lVar6 = FUN_10042e2c8(param_1);
  lVar6 = lVar6 + 0x10;
  lVar8 = FUN_10049d090(lVar6);
  *(undefined4 *)(lVar8 + 0x28) = 1;
  *(code **)(lVar8 + 0x20) = FUN_100458afc;
  plVar7 = (long *)FUN_10049bdb0(lVar6);
  (**(code **)(*plVar7 + 0x30))(plVar7,"Whirlwind");
  FUN_10049d364(lVar6);
  plVar7 = (long *)FUN_100441e68(lVar6);
  plVar7 = (long *)(**(code **)(*plVar7 + 0x60))();
  plVar7 = (long *)(**(code **)(*plVar7 + 0x48))(plVar7,"Effect_Rona_Spinning_Enemy");
  plVar7 = (long *)(**(code **)(*plVar7 + 0x50))(plVar7,"Effect_Rona_Spinning");
  plVar7 = (long *)(**(code **)(*plVar7 + 0x90))();
  (**(code **)(*plVar7 + 0xb0))(plVar7,1);
  plVar7 = (long *)FUN_100441e68(lVar6);
  plVar7 = (long *)(**(code **)(*plVar7 + 0x78))(plVar7,"Bone_LeftAxe");
  (**(code **)(*plVar7 + 0x48))(plVar7,"Effect_Rona_Weapon");
  plVar7 = (long *)FUN_100441e68(lVar6);
  plVar7 = (long *)(**(code **)(*plVar7 + 0x78))(plVar7,"Bone_RightAxe");
  (**(code **)(*plVar7 + 0x48))(plVar7,"Effect_Rona_Weapon2");
  plVar7 = (long *)FUN_10049b7c4(lVar6);
  plVar7 = (long *)(**(code **)(*plVar7 + 0x30))(plVar7,"Sound_Rona_Ability_C_SpinLoop");
  uVar9 = FUN_1010a1520();
  lVar8 = FUN_1010a0e0c(uVar9,0,"*KindredSoundBalance*",0);
  FUN_1003bc8d4(*(undefined4 *)(lVar8 + 0x1f8));
  (**(code **)(*plVar7 + 0x28))(plVar7);
  lVar8 = FUN_100451f64(lVar6);
  puVar3 = PTR_s_Ability__Rona__CancelWhirlwind_1018593a0;
  *(undefined **)(lVar8 + 0x10) = PTR_s_Ability__Rona__C_101859388;
  *(undefined **)(lVar8 + 0x18) = puVar3;
  FUN_10049d460(lVar6);
  lVar8 = FUN_10049be50(lVar6);
  *(undefined1 *)(lVar8 + 0x2c) = 0x12;
  plVar7 = (long *)FUN_100441e68(lVar6);
  plVar7 = (long *)(**(code **)(*plVar7 + 0x78))(plVar7,"Bone_CenterMass");
  plVar7 = (long *)(**(code **)(*plVar7 + 0x48))(plVar7,"Effect_Rona_DebuffBlock");
  (**(code **)(*plVar7 + 0x78))(plVar7,1);
  lVar6 = FUN_10042e580(param_1);
  *(float *)(lVar6 + 0x40) = 1.0 / fVar14;
  *(byte *)(lVar6 + 0x44) = *(byte *)(lVar6 + 0x44) & 0xfe;
  lVar6 = lVar6 + 0x10;
  lVar8 = FUN_10049bea0(lVar6);
  *(code **)(lVar8 + 0x10) = FUN_100447c8c;
  plVar7 = (long *)FUN_100441e18(lVar6);
  plVar7 = (long *)(**(code **)(*plVar7 + 0x30))();
  plVar7 = (long *)(**(code **)(*plVar7 + 0x38))(plVar7,"Sound_Rona_Ability_C_Impact_1");
  plVar7 = (long *)(**(code **)(*plVar7 + 0x18))(plVar7,"Sound_Rona_Ability_C_Impact_2");
  plVar7 = (long *)(**(code **)(*plVar7 + 0x18))(plVar7,"Sound_Rona_Ability_C_Impact_3");
  plVar7 = (long *)(**(code **)(*plVar7 + 0x18))(plVar7,"Sound_Rona_Ability_C_Impact_4");
  uVar9 = FUN_1010a1520();
  lVar8 = FUN_1010a0e0c(uVar9,0,"*KindredSoundBalance*",0);
  plVar7 = (long *)(**(code **)(*plVar7 + 0x28))(*(undefined4 *)(lVar8 + 0x1fc),plVar7);
  (**(code **)(*plVar7 + 0x38))();
  plVar7 = (long *)FUN_10043ab94(lVar6);
  plVar7 = (long *)(**(code **)(*plVar7 + 0x40))();
  (**(code **)(*plVar7 + 0x38))(plVar7,"DamagePerSecond",2);
  FUN_100450f38(local_b0,param_1 + 0x90);
  lVar6 = FUN_100437600(local_b0);
  *(undefined8 *)(lVar6 + 0x18) = uVar11;
  *(undefined1 *)(lVar6 + 0x20) = 1;
  uVar11 = *puVar13;
  *(undefined8 *)(lVar6 + 0x2c) = puVar13[1];
  *(undefined8 *)(lVar6 + 0x24) = uVar11;
  uVar11 = *(undefined8 *)((long)puVar13 + 0xc);
  *(undefined8 *)(lVar6 + 0x38) = *(undefined8 *)((long)puVar13 + 0x14);
  *(undefined8 *)(lVar6 + 0x30) = uVar11;
  *(float *)(lVar6 + 0x40) = fVar15 * fVar15;
  *(undefined8 *)(lVar6 + 0x4c) = 0x3f800000bf800000;
  *(undefined8 *)(lVar6 + 0x44) = 0xc0000000bf800000;
  *(undefined1 *)(lVar6 + 0x54) = 0xff;
  *(undefined2 *)(lVar6 + 0x55) = (undefined2)local_78;
  *(undefined1 *)(lVar6 + 0x57) = local_78._2_1_;
  *(undefined8 *)(lVar6 + 0x60) = 0xffffffff00000000;
  *(undefined8 *)(lVar6 + 0x58) = 0xffffffff00040000;
  *(byte *)(lVar6 + 0x6a) = bVar2 | 0x14;
  *(undefined2 *)(lVar6 + 0x68) = 0xe120;
  *(byte *)(lVar6 + 0x94) = *(byte *)(lVar6 + 0x94) & 0xfc | 1;
  uVar10 = (ulong)DAT_101e94150;
  if (uVar10 == 0xffff) {
    puVar12 = (ushort *)0x0;
  }
  else {
    puVar12 = &DAT_101e48150 + uVar10 * 0x4c;
    if (DAT_101e94150 == DAT_101e94152) {
      DAT_101e94150 = 0xffff;
    }
    else {
      DAT_101e94150 = *puVar12;
    }
    DAT_101e94154 = DAT_101e94154 + 1;
    lVar6 = uVar10 * 0x98;
    *(undefined8 *)(&DAT_101e48160 + lVar6) = 0;
    *(undefined8 *)(&DAT_101e48158 + lVar6) = 0;
    *(undefined8 *)(&DAT_101e48170 + lVar6) = 0;
    *(undefined8 *)(&DAT_101e48168 + lVar6) = 0;
    *(undefined8 *)(&DAT_101e48168 + lVar6) = 0;
    *(undefined8 *)(&DAT_101e48160 + lVar6) = 0;
    *(undefined8 *)(&DAT_101e48180 + lVar6) = 0;
    *(undefined8 *)(&DAT_101e48178 + lVar6) = 0;
    *(undefined8 *)(&DAT_101e48190 + lVar6) = 0;
    *(undefined8 *)(&DAT_101e48188 + lVar6) = 0;
    *(undefined8 *)(&DAT_101e481a0 + lVar6) = 0;
    *(undefined8 *)(&DAT_101e48198 + lVar6) = 0;
    *(undefined8 *)(&DAT_101e481b0 + lVar6) = 0;
    *(undefined8 *)(&DAT_101e481a8 + lVar6) = 0;
    *(undefined8 *)(&DAT_101e481c0 + lVar6) = 0;
    *(undefined8 *)(&DAT_101e481b8 + lVar6) = 0;
    *(undefined ***)puVar12 = &PTR_FUN_101498b70;
    *(undefined8 *)(&DAT_101e48178 + lVar6) = 0;
    *(undefined8 *)(&DAT_101e48170 + lVar6) = 0;
    *(undefined8 *)(&DAT_101e48188 + lVar6) = 0;
    *(undefined8 *)(&DAT_101e48180 + lVar6) = 0;
    *(undefined8 *)(&DAT_101e48198 + lVar6) = 0;
    *(undefined8 *)(&DAT_101e48190 + lVar6) = 0;
    *(undefined8 *)(&DAT_101e481a8 + lVar6) = 0;
    *(undefined8 *)(&DAT_101e481a0 + lVar6) = 0;
    *(undefined4 *)(&DAT_101e481b0 + lVar6) = 0xbf800000;
    *(undefined8 *)(&DAT_101e481b4 + lVar6) = DAT_101dc1cb8;
    *(int *)(&DAT_101e481bc + lVar6) = (int)(&DAT_101e48160 + lVar6);
    *(undefined4 *)(&DAT_101e481c0 + lVar6) = 0xff000000;
    *(ushort *)(&DAT_101e481c4 + lVar6) = *(ushort *)(&DAT_101e481c4 + lVar6) & 0xf800 | 0x30;
    DAT_101e94160 = DAT_101e94160 + 1;
    if (DAT_101e94164 < DAT_101e94160) {
      DAT_101e94164 = DAT_101e94160;
    }
  }
  FUN_100450f94(local_b0,puVar12);
  *(char **)(puVar12 + 0x10) = "CenterBody";
  *(char **)(puVar12 + 8) = "Effect_Rona_Whirlwind_Impact_Enemy";
  *(char **)(puVar12 + 0xc) = "Effect_Rona_Whirlwind_Impact";
  puVar12[0x3a] = puVar12[0x3a] & 0xff90 | 0x2a;
  FUN_100431f2c(local_b0);
  puVar3 = PTR_s_onBuffIntervalName_10185d558;
  if (DAT_101d23a38 != '\0') {
    uVar5 = FUN_1004d2524(PTR_s_onBuffIntervalName_10185d558);
    uVar5 = FUN_100015208(puVar3,uVar5,0x12345678);
    *(undefined4 *)(param_1 + 0xa0 + (ulong)*(uint *)(param_1 + 0x160) * 4) = uVar5;
    uVar1 = *(uint *)(param_1 + 0x160);
    *(code **)(param_1 + 0xa0 + (ulong)uVar1 * 8 + 0x40) = FUN_100447a98;
    *(uint *)(param_1 + 0x160) = uVar1 + 1;
  }
  return;
}




void FUN_100404c24(long param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined1 auStack_38 [24];
  
  FUN_100450f38(auStack_38,param_1 + 0x98);
  lVar1 = FUN_100436e1c(auStack_38);
  uVar2 = FUN_1003dfe60(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x10),1,8,0x19,0);
  *(undefined8 *)(lVar1 + 0x10) = 0x10000000f;
  *(undefined4 *)(lVar1 + 0x18) = uVar2;
  FUN_100450f38(auStack_38,param_1 + 0x70);
  FUN_1004354f8(auStack_38);
  return;
}




void FUN_100404ca0(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 auStack_48 [24];
  
  uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x10);
  *(undefined4 *)(param_1 + 0x328) = 0x3f800000;
  puVar2 = PTR_s_onBuffIntervalName_10185d558;
  uVar3 = FUN_1004d2524(PTR_s_onBuffIntervalName_10185d558);
  uVar3 = FUN_100015208(puVar2,uVar3,0x12345678);
  *(undefined4 *)(param_1 + 0xa0 + (ulong)*(uint *)(param_1 + 0x160) * 4) = uVar3;
  uVar1 = *(uint *)(param_1 + 0x160);
  *(code **)(param_1 + 0xa0 + (ulong)uVar1 * 8 + 0x40) = FUN_100447d3c;
  *(uint *)(param_1 + 0x160) = uVar1 + 1;
  FUN_100450f38(auStack_48,param_1 + 0x98);
  lVar4 = FUN_1004337f4(auStack_48);
  uVar3 = FUN_1003dfe60(uVar5,2,5,0x19,0);
  *(undefined4 *)(lVar4 + 0x10) = 5;
  *(undefined4 *)(lVar4 + 0x14) = uVar3;
  return;
}




void FUN_100404d64(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  FUN_10042ebc4(param_1,1);
  FUN_100450f38(auStack_38,param_1 + 0x98);
  lVar1 = FUN_100431ad4(auStack_38);
  *(char **)(lVar1 + 0x28) = "Bone_LeftAxe";
  *(ushort *)(lVar1 + 0x74) = *(ushort *)(lVar1 + 0x74) & 0xff98 | 0x43;
  *(char **)(lVar1 + 0x10) = "Effect_Rona_Weapon";
  lVar1 = FUN_100431ad4(auStack_38);
  *(char **)(lVar1 + 0x28) = "Bone_RightAxe";
  *(ushort *)(lVar1 + 0x74) = *(ushort *)(lVar1 + 0x74) & 0xff98 | 0x43;
  *(char **)(lVar1 + 0x10) = "Effect_Rona_Weapon2";
  lVar1 = FUN_100431ad4(auStack_38);
  *(char **)(lVar1 + 0x10) = "Effect_Rona_Withdraw";
  *(ushort *)(lVar1 + 0x74) = *(ushort *)(lVar1 + 0x74) & 0xff90 | 0x29;
  return;
}




void FUN_100404e30(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  char cVar3;
  uint uVar4;
  char *pcVar5;
  uint uVar6;
  code *local_40;
  undefined4 local_38;
  
  uVar6 = 0x811c9dc5;
  lVar1 = FUN_100433030();
  if (PTR_s_Ability__Rona__C_101859388 == (undefined *)0x0) {
    uVar4 = 0;
  }
  else {
    cVar3 = *PTR_s_Ability__Rona__C_101859388;
    uVar4 = 0x811c9dc5;
    if (cVar3 != '\0') {
      uVar4 = 0x811c9dc5;
      pcVar5 = PTR_s_Ability__Rona__C_101859388;
      do {
        pcVar5 = pcVar5 + 1;
        uVar4 = (uVar4 ^ (int)cVar3) * 0x1000193;
        cVar3 = *pcVar5;
      } while (cVar3 != '\0');
    }
  }
  *(uint *)(lVar1 + 0x28) = uVar4;
  lVar1 = FUN_10049bf40(lVar1 + 0x10);
  if (PTR_s_Ability__Rona__C_101859388 == (undefined *)0x0) {
    uVar6 = 0;
  }
  else {
    cVar3 = *PTR_s_Ability__Rona__C_101859388;
    pcVar5 = PTR_s_Ability__Rona__C_101859388;
    while (cVar3 != '\0') {
      pcVar5 = pcVar5 + 1;
      uVar6 = (uVar6 ^ (int)cVar3) * 0x1000193;
      cVar3 = *pcVar5;
    }
  }
  *(uint *)(lVar1 + 0x20) = uVar6;
  *(code **)(lVar1 + 0x10) = FUN_10049415c;
  *(undefined4 *)(lVar1 + 0x18) = 3;
  *(undefined4 *)(lVar1 + 0x28) = 1;
  lVar1 = FUN_10042e694(param_1);
  *(ushort *)(lVar1 + 0x48) = *(ushort *)(lVar1 + 0x48) | 8;
  *(byte *)(lVar1 + 0x60) = *(byte *)(lVar1 + 0x60) & 0xfc | 1;
  *(undefined4 *)(lVar1 + 0x40) = 0x5d230fc6;
  plVar2 = (long *)FUN_10043187c(lVar1 + 0x10);
  local_40 = FUN_100494190;
  local_38 = 3;
  (**(code **)(*plVar2 + 0x30))(plVar2,&local_40);
  return;
}




void FUN_100404f70(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined1 auStack_50 [24];
  undefined4 local_38 [2];
  
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x10);
  FUN_100450f38(auStack_50,param_1 + 0x98);
  lVar1 = FUN_100436e1c(auStack_50);
  local_38[0] = DAT_101d90ce0;
  uVar3 = FUN_1003dfee8(uVar2,local_38,0,9);
  *(undefined8 *)(lVar1 + 0x10) = 0x10000002b;
  *(undefined4 *)(lVar1 + 0x18) = uVar3;
  lVar1 = FUN_100436e1c(auStack_50);
  local_38[0] = DAT_101d90ce0;
  uVar3 = FUN_1003dfee8(uVar2,local_38,1,9);
  *(undefined8 *)(lVar1 + 0x10) = 0x200000004;
  *(undefined4 *)(lVar1 + 0x18) = uVar3;
  return;
}




void FUN_100405020(long param_1)

{
  char cVar1;
  long lVar2;
  long *plVar3;
  uint uVar4;
  char *pcVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  code *local_50;
  undefined4 local_48;
  undefined4 local_38 [2];
  
  uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x10);
  FUN_100450f38(&local_50,param_1 + 0x98);
  lVar2 = FUN_100436e1c(&local_50);
  local_38[0] = DAT_101d90ce8;
  uVar7 = FUN_1003dfee8(uVar6,local_38,0,9);
  *(undefined8 *)(lVar2 + 0x10) = 0x10000000f;
  *(undefined4 *)(lVar2 + 0x18) = uVar7;
  lVar2 = FUN_10042e694(param_1);
  *(ushort *)(lVar2 + 0x48) = *(ushort *)(lVar2 + 0x48) | 0x10;
  *(byte *)(lVar2 + 0x60) = *(byte *)(lVar2 + 0x60) & 0xfc | 1;
  if (PTR_s_Ability__Rona__A_101859378 == (undefined *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = 0x811c9dc5;
    cVar1 = *PTR_s_Ability__Rona__A_101859378;
    pcVar5 = PTR_s_Ability__Rona__A_101859378;
    while (cVar1 != '\0') {
      pcVar5 = pcVar5 + 1;
      uVar4 = (uVar4 ^ (int)cVar1) * 0x1000193;
      cVar1 = *pcVar5;
    }
  }
  *(uint *)(lVar2 + 0x40) = uVar4;
  plVar3 = (long *)FUN_10043187c(lVar2 + 0x10);
  local_50 = FUN_100494128;
  local_48 = 3;
  (**(code **)(*plVar3 + 0x30))(plVar3,&local_50);
  return;
}




void FUN_100405134(void)

{
  char cVar1;
  long lVar2;
  long *plVar3;
  uint uVar4;
  char *pcVar5;
  code *local_20;
  undefined4 local_18;
  
  lVar2 = FUN_100433030();
  if (PTR_s_Ability__Baron__C_1018593d8 == (undefined *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = 0x811c9dc5;
    cVar1 = *PTR_s_Ability__Baron__C_1018593d8;
    pcVar5 = PTR_s_Ability__Baron__C_1018593d8;
    while (cVar1 != '\0') {
      pcVar5 = pcVar5 + 1;
      uVar4 = (uVar4 ^ (int)cVar1) * 0x1000193;
      cVar1 = *pcVar5;
    }
  }
  *(uint *)(lVar2 + 0x28) = uVar4;
  *(undefined1 *)(lVar2 + 0x2c) = 1;
  plVar3 = (long *)FUN_100430a84(lVar2 + 0x10);
  local_20 = FUN_100433120;
  local_18 = 3;
  (**(code **)(*plVar3 + 0x30))(plVar3,0x10,1,&local_20);
  return;
}




void FUN_1004051d4(long param_1)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  long lVar3;
  
  if (DAT_101d23a38 != '\0') {
    uVar1 = (*(code *)**(undefined8 **)(param_1 + 0x168))
                      (param_1 + 0x168,PTR_s___VAR1_INT___10185d7f8);
    puVar2 = (undefined4 *)(**(code **)(*(long *)(param_1 + 0x168) + 0x10))(param_1 + 0x168,uVar1);
    *puVar2 = 1;
    lVar3 = FUN_10042e3b0(param_1);
    lVar3 = FUN_100437ccc(lVar3 + 0x10);
    *(char **)(lVar3 + 0x20) = "__VAR1_INT__";
    *(undefined4 *)(lVar3 + 0x28) = 2;
    *(code **)(lVar3 + 0x40) = FUN_100433134;
  }
  return;
}




void FUN_100405264(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  float fVar4;
  
  FUN_1003461dc(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x10));
  uVar1 = FUN_100345d90();
  fVar4 = (float)FUN_1003dfe60(uVar1,1,5,0x19,0);
  *(float *)(param_1 + 0x318) = fVar4;
  if (*(float *)(param_1 + 0x31c) < fVar4) {
    *(float *)(param_1 + 0x31c) = fVar4;
  }
  *(uint *)(param_1 + 0x340) =
       *(uint *)(param_1 + 0x340) & 0xfffe0 | (uint)(fVar4 < 0.0) << 4 |
       *(uint *)(param_1 + 0x340) & 0xfff0000f;
  lVar2 = FUN_10042e2c8(param_1);
  plVar3 = (long *)FUN_100441e68(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x60))();
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Baron_A_Warning_A");
  (**(code **)(*plVar3 + 0xb0))(plVar3,1);
  lVar2 = FUN_10042fdc4(param_1);
  FUN_100434ac8(lVar2 + 0x10);
  return;
}




void FUN_100405324(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  float fVar4;
  float fVar5;
  undefined4 local_38 [2];
  
  FUN_1003461dc(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x10));
  uVar1 = FUN_100345d90();
  fVar4 = (float)FUN_1003dfe60(uVar1,1,5,0x19,0);
  local_38[0] = DAT_101d90a38;
  fVar5 = (float)FUN_1003dfee8(uVar1,local_38,3,9);
  fVar4 = fVar4 - fVar4 * fVar5;
  *(float *)(param_1 + 0x318) = fVar4;
  if (*(float *)(param_1 + 0x31c) < fVar4) {
    *(float *)(param_1 + 0x31c) = fVar4;
  }
  *(uint *)(param_1 + 0x340) =
       *(uint *)(param_1 + 0x340) & 0xfffe0 | (uint)(fVar4 < 0.0) << 4 |
       *(uint *)(param_1 + 0x340) & 0xfff0000f;
  lVar2 = FUN_10042e2c8(param_1);
  plVar3 = (long *)FUN_100441e68(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x60))();
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Baron_A_Warning_Talent");
  (**(code **)(*plVar3 + 0xb0))(plVar3,1);
  lVar2 = FUN_10042fdc4(param_1);
  FUN_100434ac8(lVar2 + 0x10);
  return;
}




void FUN_100405420(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  code *local_40;
  undefined4 local_38;
  
  lVar1 = FUN_10042e498();
  plVar2 = (long *)FUN_10049bd60(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))();
  plVar2 = (long *)(**(code **)(*plVar2 + 0x10))(0x3dcccccd);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x18))(0x3f19999a);
  (**(code **)(*plVar2 + 0x20))(0x41700000);
  lVar1 = FUN_10042e3b0(param_1);
  plVar2 = (long *)FUN_10049bd60(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))();
  plVar2 = (long *)(**(code **)(*plVar2 + 0x10))(0x3dcccccd);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x18))(0x3f666666);
  (**(code **)(*plVar2 + 0x20))(0x41700000);
  local_40 = FUN_100433144;
  local_38 = 4;
  FUN_10042feac(0,0x3f800000,param_1,&local_40);
  return;
}




void FUN_100405518(void)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar1 = FUN_10042e2c8();
  lVar1 = lVar1 + 0x10;
  plVar2 = (long *)FUN_100441e68(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,"Bone_Backpack");
  (**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Baron_B_JumpStartup");
  plVar2 = (long *)FUN_100441e68(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,"Bone_LeftJet");
  (**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Baron_B_JumpStartup_LeftJet");
  plVar2 = (long *)FUN_100441e68(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,"Bone_RightJet");
  (**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Baron_B_JumpStartup_RightJet");
  plVar2 = (long *)FUN_10049bdb0(lVar1);
  (**(code **)(*plVar2 + 0x30))(plVar2,"Ability02_Charging_Idle");
  plVar2 = (long *)FUN_10049b7c4(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))(plVar2,"Sound_Baron_Ability_B_Windup");
  uVar3 = FUN_1010a1520();
  lVar4 = FUN_1010a0e0c(uVar3,0,"*KindredSoundBalance*",0);
  FUN_1003a4c78(*(undefined4 *)(lVar4 + 0x334));
  (**(code **)(*plVar2 + 0x28))(plVar2);
  lVar1 = FUN_10049be00(lVar1);
  *(undefined4 *)(lVar1 + 0x58) = 2;
  *(code **)(lVar1 + 0x10) = FUN_10043314c;
  *(undefined4 *)(lVar1 + 0x18) = 3;
  return;
}




void FUN_100405658(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  
  lVar1 = FUN_10042e2c8();
  lVar1 = lVar1 + 0x10;
  lVar2 = FUN_10049be00(lVar1);
  *(undefined4 *)(lVar2 + 0x58) = 1;
  *(code **)(lVar2 + 0x10) = FUN_100433160;
  *(undefined4 *)(lVar2 + 0x18) = 3;
  plVar3 = (long *)FUN_100451f14(lVar1);
  (**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Ability__Baron__QuickAttack_1018593c0);
  plVar3 = (long *)FUN_100441e68(lVar1);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x78))(plVar3,"Bone_Backpack");
  (**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Baron_B_Thruster_Buff");
  plVar3 = (long *)FUN_100441e68(lVar1);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x78))(plVar3,"Bone_LeftJet");
  (**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Baron_B_LeftThruster_Buff");
  plVar3 = (long *)FUN_100441e68(lVar1);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x78))(plVar3,"Bone_RightJet");
  (**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Baron_B_RightThruster_Buff");
  plVar3 = (long *)FUN_100441e68(lVar1);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x78))(plVar3,"Bone_Weapon");
  (**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Baron_B_Weapon_Buff");
  plVar3 = (long *)FUN_10049b7c4(lVar1);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,"Sound_Baron_B_Land_SpeedBoost_Loop");
  uVar4 = FUN_1010a1520();
  lVar1 = FUN_1010a0e0c(uVar4,0,"*KindredSoundBalance*",0);
  FUN_1003a4c78(*(undefined4 *)(lVar1 + 0x334));
  (**(code **)(*plVar3 + 0x28))(plVar3);
  lVar1 = FUN_10042fdc4(param_1);
  plVar3 = (long *)FUN_100441e18(lVar1 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))(plVar3,"Sound_Baron_B_Land_SpeedBoost_End");
  uVar4 = FUN_1010a1520();
  lVar1 = FUN_1010a0e0c(uVar4,0,"*KindredSoundBalance*",0);
  FUN_1003a4c78(*(undefined4 *)(lVar1 + 0x334));
                    /* WARNING: Could not recover jumptable at 0x000100405824. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x28))(plVar3);
  return;
}




void FUN_100405828(void)

{
  long lVar1;
  
  lVar1 = FUN_10042e2c8();
  lVar1 = FUN_10049be50(lVar1 + 0x10);
  *(undefined1 *)(lVar1 + 0x2c) = 0x11;
  return;
}




void FUN_10040584c(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  float fVar4;
  float local_40 [2];
  undefined4 local_38;
  
  FUN_1003461dc(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x10));
  uVar1 = FUN_100345d90();
  fVar4 = (float)FUN_1003dfe60(uVar1,3,3,0x19,0);
  local_40[0] = (float)FUN_1003dfe60(uVar1,3,8,0x19,0);
  fVar4 = fVar4 - local_40[0];
  *(float *)(param_1 + 0x318) = fVar4;
  if (*(float *)(param_1 + 0x31c) < fVar4) {
    *(float *)(param_1 + 0x31c) = fVar4;
  }
  *(uint *)(param_1 + 0x340) =
       *(uint *)(param_1 + 0x340) & 0xfffe0 | (uint)(fVar4 < 0.0) << 4 |
       *(uint *)(param_1 + 0x340) & 0xfff0000f;
  lVar2 = FUN_10042e2c8(param_1);
  plVar3 = (long *)FUN_100441e68(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x98))(plVar3,2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x60))();
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Baron_C_AllyPreWarning");
  (**(code **)(*plVar3 + 0xb0))(plVar3,1);
  lVar2 = FUN_10042fdc4(param_1);
  plVar3 = (long *)FUN_100433e34(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))
                             (plVar3,PTR_s_Buff_Baron_C_Warning_Everybody_10185c9d0);
  local_38 = 1;
  (**(code **)(*plVar3 + 0x18))(plVar3,local_40);
  return;
}




void FUN_100405988(long param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  float fVar8;
  code *local_50;
  undefined4 local_48;
  
  FUN_1003461dc(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x10));
  lVar1 = FUN_100345d90();
  lVar2 = FUN_10042e498(param_1);
  plVar3 = (long *)FUN_100441e68(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x60))();
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Baron_C_Warning_A");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x78))(plVar3,1);
  (**(code **)(*plVar3 + 0x80))(plVar3,0);
  plVar3 = (long *)FUN_100441e18(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))(plVar3,"Sound_Baron_Ability_C_Start");
  uVar4 = FUN_1010a1520();
  lVar2 = FUN_1010a0e0c(uVar4,0,"*KindredSoundBalance*",0);
  FUN_1003a4c78(*(undefined4 *)(lVar2 + 0x340));
  (**(code **)(*plVar3 + 0x28))(plVar3);
  lVar1 = *(long *)(lVar1 + 0x40);
  fVar5 = *(float *)(lVar1 + 0x4c) + *(float *)(lVar1 + 0x100) * (*(float *)(lVar1 + 0x268) + 1.0);
  NEON_fminnm(fVar5 + fVar5 * *(float *)(lVar1 + 0x1b4),DAT_101e94334);
  fVar5 = DAT_101e94274;
  if (DAT_101e94274 <= 0.0) {
    fVar8 = 0.2;
    fVar6 = DAT_101e94274;
    uVar7 = DAT_101e94334;
  }
  else if (300.0 <= DAT_101e94274) {
    fVar8 = 0.0;
    fVar6 = 0.0;
    uVar7 = 0x43960000;
    fVar5 = 1.0;
    if (300.0 <= DAT_101e94274) {
      fVar8 = 1.0;
    }
  }
  else {
    fVar8 = DAT_101e94274 * 0.0026666669 + 0.2;
    fVar6 = 0.2;
    uVar7 = 0x3b2ec33f;
  }
  lVar1 = FUN_10042fdc4(fVar5,fVar6,uVar7,0x3f800000,param_1);
  lVar1 = lVar1 + 0x10;
  lVar2 = FUN_10049bea0(lVar1);
  *(code **)(lVar2 + 0x10) = FUN_100433284;
  plVar3 = (long *)FUN_10043ab94(lVar1);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x40))();
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))(plVar3,"Damage at Center",3);
  local_50 = FUN_100433174;
  local_48 = 5;
  (**(code **)(*plVar3 + 0x88))(plVar3,&local_50);
  plVar3 = (long *)FUN_100434b18(lVar1);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))
                             (plVar3,PTR_s_Buff_GloballyVisibleTrueSight_10185a878);
  local_50 = FUN_100433370;
  local_48 = 3;
  (**(code **)(*plVar3 + 0x18))(plVar3,&local_50);
  plVar3 = (long *)FUN_100434b18(lVar1);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_ShowGloballyVisible_10185a880);
  local_50 = FUN_100433370;
  local_48 = 3;
  (**(code **)(*plVar3 + 0x18))(plVar3,&local_50);
  plVar3 = (long *)FUN_10049bd60(lVar1);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x40))();
  plVar3 = (long *)(**(code **)(*plVar3 + 0x10))(fVar8);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x18))(0x3f800000);
  (**(code **)(*plVar3 + 0x20))(0x41700000);
  plVar3 = (long *)FUN_100441e18(lVar1);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))(plVar3,"Sound_Baron_Ability_C_Impact");
  uVar4 = FUN_1010a1520();
  lVar2 = FUN_1010a0e0c(uVar4,0,"*KindredSoundBalance*",0);
  FUN_1003a4c78(*(undefined4 *)(lVar2 + 0x348));
  plVar3 = (long *)(**(code **)(*plVar3 + 0x28))(plVar3);
  (**(code **)(*plVar3 + 0x38))();
  plVar3 = (long *)FUN_100433e34(lVar1);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_DelayedKill_10185bd70);
  local_50 = (code *)CONCAT44(local_50._4_4_,0x3f800000);
  local_48 = 1;
  (**(code **)(*plVar3 + 0x18))(plVar3,&local_50);
  return;
}




void FUN_100405cc0(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_100430b44();
  plVar2 = (long *)FUN_10043594c(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))(plVar2,"Spawn");
  (**(code **)(*plVar2 + 0x18))(plVar2,"AttackToIdle");
  lVar1 = FUN_100432f48(param_1);
  plVar2 = (long *)FUN_10043594c(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))(plVar2,"Spawn");
                    /* WARNING: Could not recover jumptable at 0x000100405d48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x18))(plVar2,"AttackToIdle");
  return;
}




void FUN_100405d4c(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  char cVar4;
  uint uVar5;
  char *pcVar6;
  uint uVar7;
  code *local_40;
  undefined4 local_38;
  
  uVar7 = 0x811c9dc5;
  lVar1 = FUN_100433030();
  if (PTR_s_Ability__Baron__A_1018593c8 == (undefined *)0x0) {
    uVar5 = 0;
  }
  else {
    cVar4 = *PTR_s_Ability__Baron__A_1018593c8;
    uVar5 = 0x811c9dc5;
    if (cVar4 != '\0') {
      uVar5 = 0x811c9dc5;
      pcVar6 = PTR_s_Ability__Baron__A_1018593c8;
      do {
        pcVar6 = pcVar6 + 1;
        uVar5 = (uVar5 ^ (int)cVar4) * 0x1000193;
        cVar4 = *pcVar6;
      } while (cVar4 != '\0');
    }
  }
  *(uint *)(lVar1 + 0x28) = uVar5;
  lVar2 = FUN_10049c888(lVar1 + 0x10);
  if (PTR_s_Ability__Baron__A_1018593c8 == (undefined *)0x0) {
    uVar7 = 0;
  }
  else {
    cVar4 = *PTR_s_Ability__Baron__A_1018593c8;
    pcVar6 = PTR_s_Ability__Baron__A_1018593c8;
    while (cVar4 != '\0') {
      pcVar6 = pcVar6 + 1;
      uVar7 = (uVar7 ^ (int)cVar4) * 0x1000193;
      cVar4 = *pcVar6;
    }
  }
  *(uint *)(lVar2 + 0x20) = uVar7;
  *(code **)(lVar2 + 0x10) = FUN_10049259c;
  *(undefined4 *)(lVar2 + 0x18) = 3;
  lVar1 = FUN_10049d0e0(lVar1 + 0x10);
  *(undefined **)(lVar1 + 0x10) = PTR_s_Ability__Baron__A_1018593c8;
  *(code **)(lVar1 + 0x18) = FUN_1004925d4;
  *(undefined4 *)(lVar1 + 0x20) = 3;
  *(byte *)(lVar1 + 0x2c) = *(byte *)(lVar1 + 0x2c) | 4;
  *(undefined4 *)(lVar1 + 0x28) = 0x3f800000;
  lVar1 = FUN_10042e694(param_1);
  *(ushort *)(lVar1 + 0x48) = *(ushort *)(lVar1 + 0x48) | 8;
  *(byte *)(lVar1 + 0x60) = *(byte *)(lVar1 + 0x60) & 0xfc | 1;
  *(undefined4 *)(lVar1 + 0x40) = 0x865ec0c2;
  plVar3 = (long *)FUN_10043187c(lVar1 + 0x10);
  local_40 = FUN_100492608;
  local_38 = 3;
  (**(code **)(*plVar3 + 0x30))(plVar3,&local_40);
  return;
}




void FUN_100405eb8(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  uint uVar4;
  char cVar5;
  char *pcVar6;
  uint uVar7;
  code *local_60;
  undefined4 local_58;
  
  uVar7 = 0x811c9dc5;
  lVar1 = FUN_100433030();
  if (PTR_s_Ability__Baron__C_1018593d8 == (undefined *)0x0) {
    uVar4 = 0;
  }
  else {
    cVar5 = *PTR_s_Ability__Baron__C_1018593d8;
    uVar4 = 0x811c9dc5;
    if (cVar5 != '\0') {
      uVar4 = 0x811c9dc5;
      pcVar6 = PTR_s_Ability__Baron__C_1018593d8;
      do {
        pcVar6 = pcVar6 + 1;
        uVar4 = (uVar4 ^ (int)cVar5) * 0x1000193;
        cVar5 = *pcVar6;
      } while (cVar5 != '\0');
    }
  }
  *(uint *)(lVar1 + 0x28) = uVar4;
  *(undefined1 *)(lVar1 + 0x2c) = 1;
  lVar1 = lVar1 + 0x10;
  lVar2 = FUN_10049bf40(lVar1);
  if (PTR_s_Ability__Baron__C_1018593d8 == (undefined *)0x0) {
    uVar4 = 0;
  }
  else {
    cVar5 = *PTR_s_Ability__Baron__C_1018593d8;
    uVar4 = 0x811c9dc5;
    if (cVar5 != '\0') {
      uVar4 = 0x811c9dc5;
      pcVar6 = PTR_s_Ability__Baron__C_1018593d8;
      do {
        pcVar6 = pcVar6 + 1;
        uVar4 = (uVar4 ^ (int)cVar5) * 0x1000193;
        cVar5 = *pcVar6;
      } while (cVar5 != '\0');
    }
  }
  *(uint *)(lVar2 + 0x20) = uVar4;
  *(code **)(lVar2 + 0x10) = FUN_10049242c;
  *(undefined4 *)(lVar2 + 0x18) = 3;
  *(undefined4 *)(lVar2 + 0x28) = 1;
  lVar2 = FUN_10049bf40(lVar1);
  *(undefined4 *)(lVar2 + 0x20) = 0x9fc950db;
  *(code **)(lVar2 + 0x10) = FUN_100492460;
  *(undefined4 *)(lVar2 + 0x18) = 3;
  *(undefined4 *)(lVar2 + 0x28) = 2;
  lVar1 = FUN_10049c888(lVar1);
  if (PTR_s_Ability__Baron__C_1018593d8 == (undefined *)0x0) {
    uVar7 = 0;
  }
  else {
    cVar5 = *PTR_s_Ability__Baron__C_1018593d8;
    pcVar6 = PTR_s_Ability__Baron__C_1018593d8;
    while (cVar5 != '\0') {
      pcVar6 = pcVar6 + 1;
      uVar7 = (uVar7 ^ (int)cVar5) * 0x1000193;
      cVar5 = *pcVar6;
    }
  }
  *(uint *)(lVar1 + 0x20) = uVar7;
  *(code **)(lVar1 + 0x10) = FUN_100492494;
  *(undefined4 *)(lVar1 + 0x18) = 3;
  lVar1 = FUN_10042e2c8(param_1);
  plVar3 = (long *)FUN_100430a84(lVar1 + 0x10);
  local_60 = FUN_1004924cc;
  local_58 = 3;
  (**(code **)(*plVar3 + 0x30))(plVar3,0x10,1,&local_60);
  lVar1 = FUN_10042e694(param_1);
  *(ushort *)(lVar1 + 0x48) = *(ushort *)(lVar1 + 0x48) | 8;
  *(byte *)(lVar1 + 0x60) = *(byte *)(lVar1 + 0x60) & 0xfc | 1;
  *(undefined4 *)(lVar1 + 0x40) = 0x845ebd9c;
  plVar3 = (long *)FUN_10043187c(lVar1 + 0x10);
  local_60 = FUN_100492500;
  local_58 = 3;
  (**(code **)(*plVar3 + 0x30))(plVar3,&local_60);
  return;
}




void FUN_1004060c8(undefined8 param_1)

{
  char cVar1;
  long lVar2;
  long *plVar3;
  uint uVar4;
  char *pcVar5;
  code *local_30;
  undefined4 local_28;
  
  lVar2 = FUN_10042e2c8();
  lVar2 = FUN_10049bf40(lVar2 + 0x10);
  if (PTR_s_Ability__Baron__B_1018593d0 == (undefined *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = 0x811c9dc5;
    cVar1 = *PTR_s_Ability__Baron__B_1018593d0;
    pcVar5 = PTR_s_Ability__Baron__B_1018593d0;
    while (cVar1 != '\0') {
      pcVar5 = pcVar5 + 1;
      uVar4 = (uVar4 ^ (int)cVar1) * 0x1000193;
      cVar1 = *pcVar5;
    }
  }
  *(uint *)(lVar2 + 0x20) = uVar4;
  *(code **)(lVar2 + 0x10) = FUN_100492534;
  *(undefined4 *)(lVar2 + 0x18) = 3;
  *(undefined4 *)(lVar2 + 0x28) = 1;
  lVar2 = FUN_10042e694(param_1);
  *(ushort *)(lVar2 + 0x48) = *(ushort *)(lVar2 + 0x48) | 8;
  *(byte *)(lVar2 + 0x60) = *(byte *)(lVar2 + 0x60) & 0xfc | 1;
  *(undefined4 *)(lVar2 + 0x40) = 0x71b1f263;
  plVar3 = (long *)FUN_10043187c(lVar2 + 0x10);
  local_30 = FUN_100492568;
  local_28 = 3;
  (**(code **)(*plVar3 + 0x30))(plVar3,&local_30);
  return;
}




void FUN_1004061b4(void)

{
  long lVar1;
  long *plVar2;
  code *local_30;
  undefined4 local_28;
  
  lVar1 = FUN_10042e694();
  *(ushort *)(lVar1 + 0x48) = *(ushort *)(lVar1 + 0x48) | 0x40;
  *(byte *)(lVar1 + 0x60) = *(byte *)(lVar1 + 0x60) & 0xfc | 1;
  *(ushort *)(lVar1 + 0x5a) = *(ushort *)(lVar1 + 0x5a) | 4;
  lVar1 = lVar1 + 0x10;
  FUN_10043b4e8(lVar1);
  plVar2 = (long *)FUN_100434b18(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_Skye_LockedOn_Target_10185b0d8);
  local_30 = FUN_1003bf0c4;
  local_28 = 3;
  (**(code **)(*plVar2 + 0x18))(plVar2,&local_30);
  plVar2 = (long *)FUN_100433e34(lVar1);
  (**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_Skye_LockedOn_Skye_10185c9f0);
  return;
}




void FUN_100406268(long param_1)

{
  long lVar1;
  uint uVar2;
  undefined *puVar3;
  undefined4 uVar4;
  long lVar5;
  undefined1 auStack_58 [24];
  
  puVar3 = PTR_s_onApplyName_10185d540;
  if (DAT_101d23a38 != '\0') {
    uVar4 = FUN_1004d2524(PTR_s_onApplyName_10185d540);
    uVar4 = FUN_100015208(puVar3,uVar4,0x12345678);
    lVar5 = param_1 + 0xa0;
    *(undefined4 *)(lVar5 + (ulong)*(uint *)(param_1 + 0x160) * 4) = uVar4;
    uVar2 = *(uint *)(param_1 + 0x160);
    lVar1 = param_1 + 0xe0;
    *(code **)(lVar1 + (ulong)uVar2 * 8) = FUN_10044acd8;
    *(uint *)(param_1 + 0x160) = uVar2 + 1;
    puVar3 = PTR_s_onAfterReApplyName_10185d690;
    uVar4 = FUN_1004d2524(PTR_s_onAfterReApplyName_10185d690);
    uVar4 = FUN_100015208(puVar3,uVar4,0x12345678);
    *(undefined4 *)(lVar5 + (ulong)*(uint *)(param_1 + 0x160) * 4) = uVar4;
    uVar2 = *(uint *)(param_1 + 0x160);
    *(code **)(lVar1 + (ulong)uVar2 * 8) = FUN_10044acd8;
    *(uint *)(param_1 + 0x160) = uVar2 + 1;
    puVar3 = PTR_s_onBuffIntervalName_10185d558;
    uVar4 = FUN_1004d2524(PTR_s_onBuffIntervalName_10185d558);
    uVar4 = FUN_100015208(puVar3,uVar4,0x12345678);
    *(undefined4 *)(lVar5 + (ulong)*(uint *)(param_1 + 0x160) * 4) = uVar4;
    uVar2 = *(uint *)(param_1 + 0x160);
    *(code **)(lVar1 + (ulong)uVar2 * 8) = FUN_10044ae04;
    *(uint *)(param_1 + 0x160) = uVar2 + 1;
    puVar3 = PTR_s_onAbilityTriggeredName_10185d618;
    uVar4 = FUN_1004d2524(PTR_s_onAbilityTriggeredName_10185d618);
    uVar4 = FUN_100015208(puVar3,uVar4,0x12345678);
    *(undefined4 *)(lVar5 + (ulong)*(uint *)(param_1 + 0x160) * 4) = uVar4;
    uVar2 = *(uint *)(param_1 + 0x160);
    *(code **)(lVar1 + (ulong)uVar2 * 8) = FUN_10044afc0;
    *(uint *)(param_1 + 0x160) = uVar2 + 1;
    puVar3 = PTR_s_onEndName_10185d548;
    uVar4 = FUN_1004d2524(PTR_s_onEndName_10185d548);
    uVar4 = FUN_100015208(puVar3,uVar4,0x12345678);
    *(undefined4 *)(lVar5 + (ulong)*(uint *)(param_1 + 0x160) * 4) = uVar4;
    uVar2 = *(uint *)(param_1 + 0x160);
    *(code **)(lVar1 + (ulong)uVar2 * 8) = FUN_10044af70;
    *(uint *)(param_1 + 0x160) = uVar2 + 1;
  }
  FUN_100450f38(auStack_58,param_1 + 0x70);
  FUN_1004354f8(auStack_58);
  FUN_100450f38(auStack_58,param_1 + 0x80);
  FUN_100431d2c(auStack_58);
  lVar5 = FUN_100436680(auStack_58);
  *(undefined **)(lVar5 + 0x10) = PTR_s_Buff_Skye_CircleStrafing_10185b0e0;
  FUN_100431f2c(auStack_58);
  return;
}




void FUN_100406440(long param_1)

{
  undefined4 uVar1;
  byte bVar2;
  long lVar3;
  undefined1 auStack_38 [24];
  
  lVar3 = FUN_1003e10f0();
  bVar2 = *(byte *)(lVar3 + 0xe5);
  FUN_100450f38(auStack_38,param_1 + 0x68);
  lVar3 = FUN_100437600(auStack_38);
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
  *(undefined8 *)(lVar3 + 0x58) = 0xffffffff00000000;
  *(byte *)(lVar3 + 0x6a) = bVar2 | 0x14;
  *(undefined2 *)(lVar3 + 0x68) = 0x4130;
  *(byte *)(lVar3 + 0x94) = *(byte *)(lVar3 + 0x94) & 0xfc | DAT_101d23a38 != '\0';
  uVar1 = *(undefined4 *)(param_1 + 0x308);
  *(undefined **)(lVar3 + 0x70) = PTR_s_Buff_Skye_LockedOn_Target_10185b0d8;
  *(undefined4 *)(lVar3 + 0x90) = uVar1;
  lVar3 = FUN_100436680(auStack_38);
  *(undefined **)(lVar3 + 0x10) = PTR_s_Buff_Skye_LockedOn_Target_10185b0d8;
  *(undefined4 *)(lVar3 + 0x1c) = *(undefined4 *)(param_1 + 0x308);
  FUN_100431f2c(auStack_38);
  FUN_100431d2c(auStack_38);
  lVar3 = FUN_100431e0c(auStack_38);
  *(undefined **)(lVar3 + 0x10) = PTR_s_Buff_Skye_LockedOn_HardLockIndic_10185c9f8;
  *(undefined4 *)(lVar3 + 0x30) = 0xbf800000;
  *(undefined8 *)(lVar3 + 0x34) = 0xffffffff00000001;
  *(undefined8 *)(lVar3 + 0x44) = 0;
  *(undefined8 *)(lVar3 + 0x3c) = 0;
  FUN_100431f2c(auStack_38);
  FUN_100450f38(auStack_38,param_1 + 0x70);
  FUN_1004354f8(auStack_38);
  FUN_100450f38(auStack_38,param_1 + 0x80);
  FUN_100431d2c(auStack_38);
  lVar3 = FUN_100436680(auStack_38);
  *(undefined **)(lVar3 + 0x10) = PTR_s_Buff_Skye_LockedOn_HardLockIndic_10185c9f8;
  *(undefined4 *)(lVar3 + 0x1c) = *(undefined4 *)(param_1 + 0x308);
  FUN_100431f2c(auStack_38);
  return;
}




void FUN_1004065b0(undefined8 param_1)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long *plVar4;
  
  lVar3 = FUN_10042e2c8();
  plVar4 = (long *)FUN_100441e68(lVar3 + 0x10);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x68))(plVar4,"CenterBody");
  plVar4 = (long *)(**(code **)(*plVar4 + 0x48))(plVar4,"Effect_Skye_Reticle_Ready_E");
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))(plVar4,"Effect_Skye_Reticle_Ready_A");
  plVar4 = (long *)(**(code **)(*plVar4 + 0x90))();
  (**(code **)(*plVar4 + 0xb0))(plVar4,1);
  plVar4 = (long *)FUN_10049bf9c(lVar3 + 0x10);
  uVar2 = FUN_100451a18(param_1);
  uVar1 = 0;
  if (uVar2 != 0xff) {
    uVar1 = 1 << (ulong)(uVar2 & 0x1f);
  }
                    /* WARNING: Could not recover jumptable at 0x000100406670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar4 + 0x30))(plVar4,uVar1 & 0xff,3);
  return;
}




void FUN_100406674(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  long lVar4;
  long *plVar5;
  
  puVar2 = PTR_s_onApplyName_10185d540;
  uVar3 = FUN_1004d2524(PTR_s_onApplyName_10185d540);
  uVar3 = FUN_100015208(puVar2,uVar3,0x12345678);
  *(undefined4 *)(param_1 + 0xa0 + (ulong)*(uint *)(param_1 + 0x160) * 4) = uVar3;
  uVar1 = *(uint *)(param_1 + 0x160);
  *(code **)(param_1 + 0xe0 + (ulong)uVar1 * 8) = FUN_10044b06c;
  *(uint *)(param_1 + 0x160) = uVar1 + 1;
  puVar2 = PTR_s_onEndName_10185d548;
  uVar3 = FUN_1004d2524(PTR_s_onEndName_10185d548);
  uVar3 = FUN_100015208(puVar2,uVar3,0x12345678);
  *(undefined4 *)(param_1 + 0xa0 + (ulong)*(uint *)(param_1 + 0x160) * 4) = uVar3;
  uVar1 = *(uint *)(param_1 + 0x160);
  *(code **)(param_1 + 0xe0 + (ulong)uVar1 * 8) = FUN_10044b160;
  *(uint *)(param_1 + 0x160) = uVar1 + 1;
  lVar4 = FUN_10042e2c8(param_1);
  plVar5 = (long *)FUN_10049ba04(lVar4 + 0x10);
  (**(code **)(*plVar5 + 0x30))(plVar5,"Idle","StrafeIdle");
  lVar4 = FUN_10042e3b0(param_1);
  FUN_10049b814(lVar4 + 0x10);
  return;
}




void FUN_100406760(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  code *local_30;
  undefined4 local_28;
  
  lVar1 = FUN_100436184();
  FUN_1004385f0(lVar1 + 0x10);
  plVar2 = (long *)FUN_100433e34(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_Skye_JumpJets_10185ca00);
  local_30 = FUN_10044b234;
  local_28 = 5;
  plVar2 = (long *)(**(code **)(*plVar2 + 0x18))(plVar2,&local_30);
  (**(code **)(*plVar2 + 0x58))(plVar2,FUN_10044b268);
  lVar1 = FUN_10042e3b0(param_1);
  FUN_10049b814(lVar1 + 0x10);
  return;
}




void FUN_1004067f8(long param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  lVar1 = FUN_10044b4ec();
  lVar1 = FUN_10049be00(lVar1 + 0x10);
  *(undefined4 *)(lVar1 + 0x58) = 1;
  *(code **)(lVar1 + 0x10) = FUN_10044b2b0;
  *(undefined4 *)(lVar1 + 0x18) = 5;
  *(undefined1 *)(lVar1 + 0x61) = 1;
  lVar1 = FUN_10042e498(param_1);
  plVar2 = (long *)FUN_100441e18(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x38))(plVar2,"Sound_Skye_Perk");
  uVar3 = FUN_1010a1520();
  lVar1 = FUN_1010a0e0c(uVar3,0,"*KindredSoundBalance*",0);
  FUN_1003be59c(*(undefined4 *)(lVar1 + 0x204));
  (**(code **)(*plVar2 + 0x28))(plVar2);
  lVar1 = FUN_10042e2c8(param_1);
  lVar1 = lVar1 + 0x10;
  plVar2 = (long *)FUN_100441e68(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,"Bone_wingJet_L");
  (**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Skye_Thruster_WL");
  plVar2 = (long *)FUN_100441e68(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,"Bone_wingJet_R");
  (**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Skye_Thruster_WR");
  plVar2 = (long *)FUN_100441e68(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,"Bone_Footjet_L");
  (**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Skye_Thruster_FL");
  plVar2 = (long *)FUN_100441e68(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,"Bone_Footjet_R");
  (**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Skye_Thruster_FR");
  plVar2 = (long *)FUN_100441e68(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,"Bone_S2_LFan");
  (**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Skye_LFan");
  plVar2 = (long *)FUN_100441e68(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,"Bone_S2_RFan");
  (**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Skye_RFan");
  uVar4 = FUN_1003a47d0(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x10),
                        PTR_s_Buff_Skye_Barrage_10185b0c8);
  if ((uVar4 & 1) == 0) {
    plVar2 = (long *)FUN_10049ba04(lVar1);
    (**(code **)(*plVar2 + 0x30))(plVar2,"StrafeForward","StrafeFastForward");
    plVar2 = (long *)FUN_10049ba04(lVar1);
    (**(code **)(*plVar2 + 0x30))(plVar2,"StrafeForwardStart","StrafeFastForward");
    plVar2 = (long *)FUN_10049ba04(lVar1);
    (**(code **)(*plVar2 + 0x30))(plVar2,"StrafeBack","StrafeFastBack");
    plVar2 = (long *)FUN_10049ba04(lVar1);
    (**(code **)(*plVar2 + 0x30))(plVar2,"StrafeBackStart","StrafeFastBack");
    plVar2 = (long *)FUN_10049ba04(lVar1);
    (**(code **)(*plVar2 + 0x30))(plVar2,"StrafeRight","StrafeFastRight");
    plVar2 = (long *)FUN_10049ba04(lVar1);
    (**(code **)(*plVar2 + 0x30))(plVar2,"StrafeRightStart","StrafeFastRight");
    plVar2 = (long *)FUN_10049ba04(lVar1);
    (**(code **)(*plVar2 + 0x30))(plVar2,"StrafeLeft","StrafeFastLeft");
    plVar2 = (long *)FUN_10049ba04(lVar1);
    (**(code **)(*plVar2 + 0x30))(plVar2,"StrafeLeftStart","StrafeFastLeft");
  }
  lVar1 = FUN_10042e3b0(param_1);
  FUN_10049b814(lVar1 + 0x10);
  return;
}




void FUN_100406b10(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  float fVar8;
  undefined1 auStack_48 [24];
  
  fVar8 = (float)FUN_1003dfe60(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x10),0,5,0x19,0);
  *(float *)(param_1 + 0x328) = 1.0 / fVar8;
  puVar2 = PTR_s_onBuffIntervalName_10185d558;
  uVar3 = FUN_1004d2524(PTR_s_onBuffIntervalName_10185d558);
  uVar3 = FUN_100015208(puVar2,uVar3,0x12345678);
  *(undefined4 *)(param_1 + 0xa0 + (ulong)*(uint *)(param_1 + 0x160) * 4) = uVar3;
  uVar1 = *(uint *)(param_1 + 0x160);
  *(code **)(param_1 + 0xa0 + (ulong)uVar1 * 8 + 0x40) = FUN_10044b5d4;
  *(uint *)(param_1 + 0x160) = uVar1 + 1;
  lVar4 = FUN_10042e2c8(param_1);
  lVar4 = lVar4 + 0x10;
  FUN_10049d460(lVar4);
  lVar5 = FUN_10049d090(lVar4);
  *(code **)(lVar5 + 0x20) = FUN_100458a84;
  *(undefined8 *)(lVar5 + 0x28) = 0xc800000001;
  lVar5 = FUN_100451f64(lVar4);
  puVar2 = PTR_s_Ability__Skye__A_Cancel_101859428;
  *(undefined **)(lVar5 + 0x10) = PTR_s_Ability__Skye__A_101859420;
  *(undefined **)(lVar5 + 0x18) = puVar2;
  plVar6 = (long *)FUN_100441e68(lVar4);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x60))();
  (**(code **)(*plVar6 + 0x48))(plVar6,"Effect_Skye_Barrage_MF");
  plVar6 = (long *)FUN_10049b7c4(lVar4);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x30))(plVar6,"Sound_Skye_Ability_A_Barrage_Loop_1");
  plVar6 = (long *)(**(code **)(*plVar6 + 0x18))(plVar6,"Sound_Skye_Ability_A_Barrage_Loop_2");
  uVar7 = FUN_1010a1520();
  lVar4 = FUN_1010a0e0c(uVar7,0,"*KindredSoundBalance*",0);
  FUN_1003be59c(*(undefined4 *)(lVar4 + 0x20c));
  (**(code **)(*plVar6 + 0x28))(plVar6);
  FUN_100450f38(auStack_48,param_1 + 0x98);
  lVar4 = FUN_1004479b4(auStack_48);
  *(char **)(lVar4 + 0x10) = "Idle";
  *(char **)(lVar4 + 0x18) = "BarrageIdle";
  lVar4 = FUN_1004479b4(auStack_48);
  *(char **)(lVar4 + 0x10) = "IdleCombat";
  *(char **)(lVar4 + 0x18) = "BarrageIdle";
  lVar4 = FUN_1004479b4(auStack_48);
  *(char **)(lVar4 + 0x10) = "MoveStop";
  *(char **)(lVar4 + 0x18) = "BarrageIdle";
  lVar4 = FUN_1004479b4(auStack_48);
  *(char **)(lVar4 + 0x10) = "StrafeForward";
  *(char **)(lVar4 + 0x18) = "BarrageForward";
  lVar4 = FUN_1004479b4(auStack_48);
  *(char **)(lVar4 + 0x10) = "StrafeBack";
  *(char **)(lVar4 + 0x18) = "BarrageBack";
  lVar4 = FUN_1004479b4(auStack_48);
  *(char **)(lVar4 + 0x10) = "StrafeRight";
  *(char **)(lVar4 + 0x18) = "BarrageRight";
  lVar4 = FUN_1004479b4(auStack_48);
  *(char **)(lVar4 + 0x10) = "StrafeLeft";
  *(char **)(lVar4 + 0x18) = "BarrageLeft";
  lVar4 = FUN_1004479b4(auStack_48);
  *(char **)(lVar4 + 0x10) = "StrafeBackStart";
  *(char **)(lVar4 + 0x18) = "BarrageBackStart";
  lVar4 = FUN_1004479b4(auStack_48);
  *(char **)(lVar4 + 0x10) = "StrafeRightStart";
  *(char **)(lVar4 + 0x18) = "BarrageRightStart";
  lVar4 = FUN_1004479b4(auStack_48);
  *(char **)(lVar4 + 0x10) = "StrafeLeftStart";
  *(char **)(lVar4 + 0x18) = "BarrageLeftStart";
  lVar4 = FUN_100433910(param_1);
  *(byte *)(lVar4 + 0x38) = *(byte *)(lVar4 + 0x38) | 2;
  FUN_1004385f0(lVar4 + 0x10);
  lVar4 = FUN_10042fdc4(param_1);
  plVar6 = (long *)FUN_10049c8e4(lVar4 + 0x10);
  (**(code **)(*plVar6 + 0x30))(plVar6,PTR_s_Ability__Skye__A_101859420);
  plVar6 = (long *)FUN_100441e18(lVar4 + 0x10);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x38))(plVar6,"Sound_Skye_Ability_A_Barrage_End_1");
  plVar6 = (long *)(**(code **)(*plVar6 + 0x18))(plVar6,"Sound_Skye_Ability_A_Barrage_End_2");
  plVar6 = (long *)(**(code **)(*plVar6 + 0x18))(plVar6,"Sound_Skye_Ability_A_Barrage_End_3");
  uVar7 = FUN_1010a1520();
  lVar4 = FUN_1010a0e0c(uVar7,0,"*KindredSoundBalance*",0);
  FUN_1003be59c(*(undefined4 *)(lVar4 + 0x20c));
  (**(code **)(*plVar6 + 0x28))(plVar6);
  return;
}




void FUN_100406e54(long param_1)

{
  long lVar1;
  long lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 auStack_58 [24];
  
  lVar1 = FUN_100345d90(*(undefined4 *)(param_1 + 0x308));
  FUN_100450f38(auStack_58,param_1 + 0x98);
  lVar2 = FUN_10043255c(auStack_58);
  uVar3 = FUN_1003dfe60(lVar1,0,10,5,0);
  uVar4 = FUN_1003dfe60(lVar1,0,0xb,0x19,0);
  uVar3 = NEON_fminnm(uVar3,uVar4);
  *(undefined4 *)(lVar2 + 0x10) = 2;
  *(undefined4 *)(lVar2 + 0x14) = uVar3;
  uVar3 = *(undefined4 *)(lVar1 + 0x30);
  *(long *)(lVar2 + 0x18) = lVar1 + 0x28;
  *(undefined4 *)(lVar2 + 0x20) = uVar3;
  *(undefined4 *)(lVar2 + 0x30) = 1;
  FUN_100450f38(auStack_58,param_1 + 0x70);
  FUN_100432680(auStack_58);
  return;
}




void FUN_100406f1c(long param_1)

{
  undefined4 uVar1;
  uint uVar2;
  long lVar3;
  long *plVar4;
  undefined *puVar5;
  
  puVar5 = PTR_s_onEndName_10185d548;
  uVar1 = FUN_1004d2524(PTR_s_onEndName_10185d548);
  uVar1 = FUN_100015208(puVar5,uVar1,0x12345678);
  *(undefined4 *)(param_1 + 0xa0 + (ulong)*(uint *)(param_1 + 0x160) * 4) = uVar1;
  uVar2 = *(uint *)(param_1 + 0x160);
  *(code **)(param_1 + 0xa0 + (ulong)uVar2 * 8 + 0x40) = FUN_10044b6dc;
  *(uint *)(param_1 + 0x160) = uVar2 + 1;
  uVar2 = FUN_100432d40(param_1);
  lVar3 = FUN_10042e498(param_1);
  plVar4 = (long *)FUN_10043594c(lVar3 + 0x10);
  if (uVar2 < 4) {
    puVar5 = (&PTR_s_Ability02_DashForward_10149dd60)[(int)uVar2];
  }
  else {
    puVar5 = (undefined *)0x0;
  }
  (**(code **)(*plVar4 + 0x30))(plVar4,puVar5);
  lVar3 = FUN_10042e2c8(param_1);
  lVar3 = lVar3 + 0x10;
  plVar4 = (long *)FUN_100441e68(lVar3);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x78))(plVar4,"Bone_wingJet_L");
  (**(code **)(*plVar4 + 0x48))(plVar4,"Effect_Skye_Thruster_WL");
  plVar4 = (long *)FUN_100441e68(lVar3);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x78))(plVar4,"Bone_wingJet_R");
  (**(code **)(*plVar4 + 0x48))(plVar4,"Effect_Skye_Thruster_WR");
  plVar4 = (long *)FUN_100441e68(lVar3);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x78))(plVar4,"Bone_wingJet_L");
  (**(code **)(*plVar4 + 0x48))(plVar4,"Effect_Skye_LightTrail");
  lVar3 = FUN_10042fdc4(param_1);
  if (uVar2 - 1 < 3) {
    puVar5 = (&PTR_s_Ability02_DashAcross_Stop_10149dd80)[(int)(uVar2 - 1)];
    plVar4 = (long *)FUN_10043594c(lVar3 + 0x10);
    plVar4 = (long *)(**(code **)(*plVar4 + 0x30))(plVar4,puVar5);
    (**(code **)(*plVar4 + 0x18))(plVar4,"AttackToIdleCombat");
  }
  plVar4 = (long *)FUN_100441e68(lVar3 + 0x10);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x60))();
                    /* WARNING: Could not recover jumptable at 0x0001004070dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar4 + 0x48))(plVar4,"Effect_Skye_B_Dust");
  return;
}




void FUN_1004070e0(long param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined4 *puVar7;
  int *piVar8;
  long *plVar9;
  long lVar10;
  float fVar11;
  code *local_70;
  undefined4 local_68;
  
  lVar10 = *(long *)(*(long *)(param_1 + 0x10) + 0x10);
  fVar11 = (float)FUN_1003dfe60(lVar10,2,3,0x19,0);
  *(float *)(param_1 + 0x328) = *(float *)(param_1 + 0x31c) / (float)(int)fVar11;
  lVar5 = FUN_1003be600(lVar10);
  if (lVar5 != 0) {
    lVar10 = lVar5;
  }
  uVar4 = *(undefined4 *)(lVar10 + 0x250);
  uVar1 = *(undefined4 *)(lVar10 + 600);
  lVar10 = param_1 + 0x168;
  (*(code *)**(undefined8 **)(param_1 + 0x168))(lVar10,PTR_s_target_pos_10185d6a0);
  puVar2 = PTR_s_target_pos_10185d6a0;
  uVar3 = FUN_1004d2524(PTR_s_target_pos_10185d6a0);
  uVar6 = FUN_100015208(puVar2,uVar3,0x12345678);
  puVar7 = (undefined4 *)(**(code **)(*(long *)(param_1 + 0x168) + 0x10))(lVar10,uVar6);
  *puVar7 = uVar4;
  puVar7[1] = uVar1;
  (*(code *)**(undefined8 **)(param_1 + 0x168))(lVar10,PTR_s_num_missiles_left_10185d6a8);
  puVar2 = PTR_s_num_missiles_left_10185d6a8;
  uVar4 = FUN_1004d2524(PTR_s_num_missiles_left_10185d6a8);
  uVar6 = FUN_100015208(puVar2,uVar4,0x12345678);
  piVar8 = (int *)(**(code **)(*(long *)(param_1 + 0x168) + 0x10))(lVar10,uVar6);
  *piVar8 = (int)fVar11;
  lVar10 = FUN_10042e580(param_1);
  *(float *)(lVar10 + 0x40) = *(float *)(param_1 + 0x31c) / (float)(int)fVar11;
  *(byte *)(lVar10 + 0x44) = *(byte *)(lVar10 + 0x44) | 1;
  lVar10 = lVar10 + 0x10;
  plVar9 = (long *)FUN_100432a84(lVar10);
  plVar9 = (long *)(**(code **)(*plVar9 + 0x30))(plVar9,0x6f);
  plVar9 = (long *)(**(code **)(*plVar9 + 0x20))(plVar9,FUN_10044b7b8);
  plVar9 = (long *)(**(code **)(*plVar9 + 0x30))(plVar9,FUN_10044b840);
  local_70 = FUN_10044b9a0;
  local_68 = 4;
  (**(code **)(*plVar9 + 0x38))(plVar9,&local_70);
  plVar9 = (long *)FUN_100441e68(lVar10);
  plVar9 = (long *)(**(code **)(*plVar9 + 0x70))(plVar9,thunk_FUN_10044b7b8);
  plVar9 = (long *)(**(code **)(*plVar9 + 0x48))(plVar9,"Effect_Skye_B_MF");
  (**(code **)(*plVar9 + 0x88))(plVar9,1);
  plVar9 = (long *)FUN_100441e18(lVar10);
  plVar9 = (long *)(**(code **)(*plVar9 + 0x38))(plVar9,"Sound_Skye_Ability_B_Launch_1");
  plVar9 = (long *)(**(code **)(*plVar9 + 0x18))(plVar9,"Sound_Skye_Ability_B_Launch_2");
  plVar9 = (long *)(**(code **)(*plVar9 + 0x18))(plVar9,"Sound_Skye_Ability_B_Launch_3");
  plVar9 = (long *)(**(code **)(*plVar9 + 0x18))(plVar9,"Sound_Skye_Ability_B_Launch_4");
  plVar9 = (long *)(**(code **)(*plVar9 + 0x18))(plVar9,"Sound_Skye_Ability_B_Launch_5");
  uVar6 = FUN_1010a1520();
  lVar5 = FUN_1010a0e0c(uVar6,0,"*KindredSoundBalance*",0);
  FUN_1003be59c(*(undefined4 *)(lVar5 + 0x210));
  plVar9 = (long *)(**(code **)(*plVar9 + 0x28))(plVar9);
  (**(code **)(*plVar9 + 0x38))();
  lVar10 = FUN_100437ccc(lVar10);
  *(undefined **)(lVar10 + 0x20) = PTR_s_num_missiles_left_10185d6a8;
  *(undefined4 *)(lVar10 + 0x28) = 2;
  *(code **)(lVar10 + 0x40) = FUN_10044ba14;
  return;
}




void FUN_1004073ac(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_10042e498();
  FUN_1004386bc(lVar1 + 0x10);
  plVar2 = (long *)FUN_10043ab94(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x40))();
  (**(code **)(*plVar2 + 0x30))(plVar2,2);
  lVar1 = FUN_10042e3b0(param_1);
  FUN_1004386bc(lVar1 + 0x10);
  plVar2 = (long *)FUN_10043ab94(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x40))();
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))(plVar2,2);
                    /* WARNING: Could not recover jumptable at 0x000100407440. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x60))(plVar2,FUN_10044ba84);
  return;
}




void FUN_100407444(undefined8 param_1)

{
  FUN_10044bd98(param_1,PTR_s_Buff_Skye_ClusterMissileVolley_E_10185ca20);
  return;
}




void FUN_100407450(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  code *local_50;
  undefined4 local_48;
  
  lVar1 = FUN_10042e498();
  plVar2 = (long *)FUN_10043fc58(lVar1 + 0x10);
  local_50 = (code *)CONCAT44(local_50._4_4_,0x40200000);
  local_48 = 1;
  (**(code **)(*plVar2 + 0x30))(plVar2,&local_50);
  plVar2 = (long *)FUN_100434b18(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_Stunned_10185a208);
  local_50 = FUN_10044bf70;
  local_48 = 3;
  (**(code **)(*plVar2 + 0x18))(plVar2,&local_50);
  lVar1 = FUN_10042e580(param_1);
  *(undefined4 *)(lVar1 + 0x40) = 0x3dcccccd;
  *(byte *)(lVar1 + 0x44) = *(byte *)(lVar1 + 0x44) & 0xfe;
  lVar1 = lVar1 + 0x10;
  plVar2 = (long *)FUN_10043fc58(lVar1);
  local_50._0_4_ = 0x40200000;
  local_48 = 1;
  (**(code **)(*plVar2 + 0x30))(plVar2,&local_50);
  plVar2 = (long *)FUN_100434b18(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))
                             (plVar2,PTR_s_Buff_Skye_HitByMissileVolley_10185ca48);
  local_50 = (code *)CONCAT44(local_50._4_4_,0x3dcccccd);
  local_48 = 1;
  (**(code **)(*plVar2 + 0x18))(plVar2,&local_50);
  plVar2 = (long *)FUN_10043ab94(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x40))();
  (**(code **)(*plVar2 + 0x30))(plVar2,4);
  lVar1 = FUN_10042fdc4(param_1);
  FUN_10044c418(lVar1 + 0x10);
  return;
}




void FUN_1004075a0(undefined8 param_1)

{
  FUN_10044bd98(param_1,PTR_s_Buff_Skye_LineMissileVolley_Expl_10185ca30);
  return;
}




void FUN_1004075ac(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  code *local_60;
  undefined4 local_58;
  
  lVar1 = FUN_10042e498();
  lVar2 = FUN_10049d76c(lVar1 + 0x10);
  *(undefined2 *)(lVar2 + 0x40) = 0x100;
  *(undefined1 *)(lVar2 + 0x42) = 0;
  *(code **)(lVar2 + 0x38) = FUN_10044bf84;
  *(undefined4 *)(lVar2 + 0x10) = 0x3f800000;
  *(undefined4 *)(lVar2 + 0x30) = 0x40000;
  plVar3 = (long *)FUN_100434b18(lVar1 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Stunned_10185a208);
  local_60 = FUN_10044bf70;
  local_58 = 3;
  (**(code **)(*plVar3 + 0x18))(plVar3,&local_60);
  lVar1 = FUN_10042e580(param_1);
  *(undefined4 *)(lVar1 + 0x40) = 0x3dcccccd;
  *(byte *)(lVar1 + 0x44) = *(byte *)(lVar1 + 0x44) & 0xfe;
  lVar1 = lVar1 + 0x10;
  lVar2 = FUN_10049d76c(lVar1);
  *(undefined2 *)(lVar2 + 0x40) = 0x100;
  *(undefined1 *)(lVar2 + 0x42) = 0;
  *(code **)(lVar2 + 0x38) = FUN_10044bf84;
  *(undefined4 *)(lVar2 + 0x10) = 0x3f800000;
  *(undefined4 *)(lVar2 + 0x30) = 0x40000;
  plVar3 = (long *)FUN_100434b18(lVar1);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))
                             (plVar3,PTR_s_Buff_Skye_HitByMissileVolley_10185ca48);
  local_60 = (code *)CONCAT44(local_60._4_4_,0x3dcccccd);
  local_58 = 1;
  (**(code **)(*plVar3 + 0x18))(plVar3,&local_60);
  plVar3 = (long *)FUN_10043ab94(lVar1);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x40))();
  (**(code **)(*plVar3 + 0x30))(plVar3,4);
  lVar1 = FUN_10042fdc4(param_1);
  FUN_10044c418(lVar1 + 0x10);
  return;
}




void FUN_10040770c(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  float fVar4;
  undefined1 auStack_48 [24];
  
  FUN_1003461dc(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x10));
  uVar2 = FUN_100345d90();
  fVar4 = (float)FUN_1003dfe60(uVar2,4,3,0x19,0);
  fVar4 = fVar4 + -0.2;
  *(float *)(param_1 + 0x318) = fVar4;
  if (*(float *)(param_1 + 0x31c) < fVar4) {
    *(float *)(param_1 + 0x31c) = fVar4;
  }
  *(uint *)(param_1 + 0x340) =
       *(uint *)(param_1 + 0x340) & 0xfffe0 | (uint)(fVar4 < 0.0) << 4 |
       *(uint *)(param_1 + 0x340) & 0xfff0000f;
  FUN_100450f38(auStack_48,param_1 + 0x88);
  FUN_100431d2c(auStack_48);
  lVar3 = FUN_100431e0c(auStack_48);
  puVar1 = PTR_s_Buff_Skye_MissileVolley_PlayMiss_10185ca40;
  fVar4 = (float)FUN_1003dfe60(uVar2,4,4,0x19,0);
  *(undefined **)(lVar3 + 0x10) = puVar1;
  *(float *)(lVar3 + 0x30) = fVar4 + 0.2;
  *(undefined8 *)(lVar3 + 0x34) = 0xffffffff00000001;
  *(undefined8 *)(lVar3 + 0x44) = 0;
  *(undefined8 *)(lVar3 + 0x3c) = 0;
  FUN_100431f2c(auStack_48);
  return;
}




void FUN_100407810(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  
  puVar2 = PTR_s_num_pfx_spawned_10185d6b0;
  if (DAT_101d23a38 == '\0') {
    uVar3 = FUN_1004d2524(PTR_s_num_pfx_spawned_10185d6b0);
    uVar4 = FUN_100015208(puVar2,uVar3,0x12345678);
    (**(code **)(*(long *)(param_1 + 0x168) + 8))(param_1 + 0x168,uVar4);
    puVar2 = PTR_s_num_pfx_spawned_10185d6b0;
    uVar3 = FUN_1004d2524(PTR_s_num_pfx_spawned_10185d6b0);
    uVar4 = FUN_100015208(puVar2,uVar3,0x12345678);
    puVar5 = (undefined4 *)(**(code **)(*(long *)(param_1 + 0x168) + 0x10))(param_1 + 0x168,uVar4);
    *puVar5 = 0;
    *(undefined4 *)(param_1 + 0x328) = 0x3e4ccccd;
    puVar2 = PTR_s_onBuffIntervalName_10185d558;
    uVar3 = FUN_1004d2524(PTR_s_onBuffIntervalName_10185d558);
    uVar3 = FUN_100015208(puVar2,uVar3,0x12345678);
    *(undefined4 *)(param_1 + 0xa0 + (ulong)*(uint *)(param_1 + 0x160) * 4) = uVar3;
    uVar1 = *(uint *)(param_1 + 0x160);
    *(code **)(param_1 + 0xa0 + (ulong)uVar1 * 8 + 0x40) = FUN_10044c034;
    *(uint *)(param_1 + 0x160) = uVar1 + 1;
  }
  return;
}




void FUN_10040790c(long param_1)

{
  undefined8 uVar1;
  undefined4 local_30 [2];
  undefined4 local_28;
  
  uVar1 = FUN_100345d90(*(undefined4 *)(param_1 + 0x308));
  local_30[0] = FUN_1003dfe60(uVar1,4,6,0x19,0);
  local_28 = 1;
  FUN_10042eb40(param_1,local_30);
  return;
}




void FUN_100407964(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_100430b44();
  plVar2 = (long *)FUN_10043594c(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))(plVar2,"Spawn");
  (**(code **)(*plVar2 + 0x18))(plVar2,"AttackToIdle");
  lVar1 = FUN_100432f48(param_1);
  plVar2 = (long *)FUN_10043594c(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))(plVar2,"Spawn");
                    /* WARNING: Could not recover jumptable at 0x0001004079ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x18))(plVar2,"AttackToIdle");
  return;
}




void FUN_1004079f0(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  
  FUN_10042ebc4(param_1,1);
  lVar1 = FUN_10042e2c8(param_1);
  plVar2 = (long *)FUN_10049b7c4(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))(plVar2,"Sound_Skye_Withdraw1");
  uVar3 = FUN_1010a1520();
  lVar4 = FUN_1010a0e0c(uVar3,0,"*KindredSoundBalance*",0);
  FUN_1003be59c(*(undefined4 *)(lVar4 + 0x218));
  (**(code **)(*plVar2 + 0x28))(plVar2);
  plVar2 = (long *)FUN_10049bef0(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))(plVar2,"u_wheel_spin");
  (**(code **)(*plVar2 + 0x38))(0x3f800000);
  lVar1 = FUN_1004303b0(param_1);
  plVar2 = (long *)FUN_100441e18(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x38))(plVar2,"Sound_Skye_Withdraw2");
  uVar3 = FUN_1010a1520();
  lVar1 = FUN_1010a0e0c(uVar3,0,"*KindredSoundBalance*",0);
  FUN_1003be59c(*(undefined4 *)(lVar1 + 0x218));
                    /* WARNING: Could not recover jumptable at 0x000100407af4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x28))(plVar2);
  return;
}




void FUN_100407af8(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  uint uVar4;
  char cVar5;
  char *pcVar6;
  uint uVar7;
  code *local_60;
  undefined4 local_58;
  
  uVar7 = 0x811c9dc5;
  lVar1 = FUN_100433030();
  if (PTR_s_Ability__Skye__C_101859438 == (undefined *)0x0) {
    uVar4 = 0;
  }
  else {
    cVar5 = *PTR_s_Ability__Skye__C_101859438;
    uVar4 = 0x811c9dc5;
    if (cVar5 != '\0') {
      uVar4 = 0x811c9dc5;
      pcVar6 = PTR_s_Ability__Skye__C_101859438;
      do {
        pcVar6 = pcVar6 + 1;
        uVar4 = (uVar4 ^ (int)cVar5) * 0x1000193;
        cVar5 = *pcVar6;
      } while (cVar5 != '\0');
    }
  }
  *(uint *)(lVar1 + 0x28) = uVar4;
  *(undefined1 *)(lVar1 + 0x2c) = 1;
  lVar1 = lVar1 + 0x10;
  lVar2 = FUN_10049bf40(lVar1);
  if (PTR_s_Ability__Skye__C_101859438 == (undefined *)0x0) {
    uVar4 = 0;
  }
  else {
    cVar5 = *PTR_s_Ability__Skye__C_101859438;
    uVar4 = 0x811c9dc5;
    if (cVar5 != '\0') {
      uVar4 = 0x811c9dc5;
      pcVar6 = PTR_s_Ability__Skye__C_101859438;
      do {
        pcVar6 = pcVar6 + 1;
        uVar4 = (uVar4 ^ (int)cVar5) * 0x1000193;
        cVar5 = *pcVar6;
      } while (cVar5 != '\0');
    }
  }
  *(uint *)(lVar2 + 0x20) = uVar4;
  *(code **)(lVar2 + 0x10) = FUN_1004943e0;
  *(undefined4 *)(lVar2 + 0x18) = 3;
  *(undefined4 *)(lVar2 + 0x28) = 1;
  lVar2 = FUN_10049bf40(lVar1);
  *(undefined4 *)(lVar2 + 0x20) = 0x7c0cad61;
  *(code **)(lVar2 + 0x10) = FUN_100494414;
  *(undefined4 *)(lVar2 + 0x18) = 3;
  *(undefined4 *)(lVar2 + 0x28) = 2;
  lVar1 = FUN_10049c888(lVar1);
  if (PTR_s_Ability__Skye__C_101859438 == (undefined *)0x0) {
    uVar4 = 0;
  }
  else {
    cVar5 = *PTR_s_Ability__Skye__C_101859438;
    uVar4 = 0x811c9dc5;
    if (cVar5 != '\0') {
      uVar4 = 0x811c9dc5;
      pcVar6 = PTR_s_Ability__Skye__C_101859438;
      do {
        pcVar6 = pcVar6 + 1;
        uVar4 = (uVar4 ^ (int)cVar5) * 0x1000193;
        cVar5 = *pcVar6;
      } while (cVar5 != '\0');
    }
  }
  *(uint *)(lVar1 + 0x20) = uVar4;
  *(code **)(lVar1 + 0x10) = FUN_100494448;
  *(undefined4 *)(lVar1 + 0x18) = 3;
  lVar1 = FUN_10042e694(param_1);
  *(ushort *)(lVar1 + 0x48) = *(ushort *)(lVar1 + 0x48) | 8;
  *(byte *)(lVar1 + 0x60) = *(byte *)(lVar1 + 0x60) & 0xfc | 1;
  if (PTR_s_Ability__Skye__C_101859438 == (undefined *)0x0) {
    uVar7 = 0;
  }
  else {
    cVar5 = *PTR_s_Ability__Skye__C_101859438;
    pcVar6 = PTR_s_Ability__Skye__C_101859438;
    while (cVar5 != '\0') {
      pcVar6 = pcVar6 + 1;
      uVar7 = (uVar7 ^ (int)cVar5) * 0x1000193;
      cVar5 = *pcVar6;
    }
  }
  *(uint *)(lVar1 + 0x40) = uVar7;
  plVar3 = (long *)FUN_10043187c(lVar1 + 0x10);
  local_60 = FUN_100494480;
  local_58 = 3;
  (**(code **)(*plVar3 + 0x30))(plVar3,&local_60);
  return;
}




void FUN_100407d0c(void)

{
  char cVar1;
  long lVar2;
  uint uVar3;
  char *pcVar4;
  
  lVar2 = FUN_100433030();
  if (PTR_s_Ability__Skye__A_101859420 == (undefined *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = 0x811c9dc5;
    cVar1 = *PTR_s_Ability__Skye__A_101859420;
    pcVar4 = PTR_s_Ability__Skye__A_101859420;
    while (cVar1 != '\0') {
      pcVar4 = pcVar4 + 1;
      uVar3 = (uVar3 ^ (int)cVar1) * 0x1000193;
      cVar1 = *pcVar4;
    }
  }
  *(uint *)(lVar2 + 0x28) = uVar3;
  lVar2 = FUN_10049da9c(lVar2 + 0x10);
  *(undefined **)(lVar2 + 0x10) = PTR_s_Ability__Skye__A_101859420;
  *(code **)(lVar2 + 0x18) = FUN_1004944b4;
  *(undefined4 *)(lVar2 + 0x20) = 3;
  *(undefined4 *)(lVar2 + 0x2c) = 0;
  return;
}




void FUN_100407d94(long param_1)

{
  long lVar1;
  undefined1 auStack_58 [24];
  
  FUN_100450f38(auStack_58,param_1 + 0x68);
  lVar1 = FUN_100436540(auStack_58);
  *(char **)(lVar1 + 0x20) = "CenterBody";
  *(char **)(lVar1 + 0x10) = "Effect_Skye_Barrage_Impact";
  *(ushort *)(lVar1 + 0x74) = *(ushort *)(lVar1 + 0x74) & 0xfd98 | 0x222;
  FUN_100450f38(auStack_58,param_1 + 0x70);
  lVar1 = FUN_100436540(auStack_58);
  *(char **)(lVar1 + 0x20) = "CenterBody";
  *(char **)(lVar1 + 0x10) = "Effect_Skye_Barrage_Impact";
  *(ushort *)(lVar1 + 0x74) = *(ushort *)(lVar1 + 0x74) & 0xfd98 | 0x222;
  return;
}




void FUN_100407e38(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined1 auStack_50 [24];
  undefined4 local_38 [2];
  
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x10);
  FUN_100450f38(auStack_50,param_1 + 0x98);
  lVar1 = FUN_100436e1c(auStack_50);
  local_38[0] = DAT_101d90d50;
  uVar3 = FUN_1003dfee8(uVar2,local_38,2,9);
  *(undefined8 *)(lVar1 + 0x10) = 0x200000005;
  *(undefined4 *)(lVar1 + 0x18) = uVar3;
  lVar1 = FUN_100436e1c(auStack_50);
  local_38[0] = DAT_101d90d50;
  uVar3 = FUN_1003dfee8(uVar2,local_38,2,9);
  *(undefined8 *)(lVar1 + 0x10) = 0x200000004;
  *(undefined4 *)(lVar1 + 0x18) = uVar3;
  return;
}




void FUN_100407ee8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  FUN_100450f38(auStack_38,param_1 + 0x68);
  lVar1 = FUN_1004356bc(auStack_38);
  *(undefined4 *)(lVar1 + 0x10) = 0x41200000;
  FUN_100450f38(auStack_38,param_1 + 0x70);
  lVar1 = FUN_1004356bc(auStack_38);
  *(undefined4 *)(lVar1 + 0x10) = 0x41200000;
  return;
}




void FUN_100407f40(void)

{
  long lVar1;
  
  lVar1 = FUN_10042e2c8();
  lVar1 = FUN_10049be00(lVar1 + 0x10);
  *(undefined4 *)(lVar1 + 0x58) = 1;
  *(code **)(lVar1 + 0x10) = FUN_1004944e8;
  *(undefined4 *)(lVar1 + 0x18) = 3;
  return;
}




void FUN_100407f78(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  long lVar6;
  long *plVar7;
  code *local_40;
  undefined4 local_38;
  
  lVar6 = param_1 + 0x168;
  uVar3 = FUN_1004d2524("lastGainedBarrier");
  uVar4 = FUN_100015208("lastGainedBarrier",uVar3,0x12345678);
  uVar4 = (**(code **)(*(long *)(param_1 + 0x168) + 8))(lVar6,uVar4);
  puVar5 = (undefined4 *)(**(code **)(*(long *)(param_1 + 0x168) + 0x10))(lVar6,uVar4);
  *puVar5 = 0;
  uVar3 = FUN_1004d2524("currentMaxFortifiedHealth");
  uVar4 = FUN_100015208("currentMaxFortifiedHealth",uVar3,0x12345678);
  uVar4 = (**(code **)(*(long *)(param_1 + 0x168) + 8))(lVar6,uVar4);
  puVar5 = (undefined4 *)(**(code **)(*(long *)(param_1 + 0x168) + 0x10))(lVar6,uVar4);
  *puVar5 = 0;
  *(undefined4 *)(param_1 + 0x328) = 0x3dcccccd;
  puVar2 = PTR_s_onPostCalculateAttackName_10185d580;
  uVar3 = FUN_1004d2524(PTR_s_onPostCalculateAttackName_10185d580);
  uVar3 = FUN_100015208(puVar2,uVar3,0x12345678);
  *(undefined4 *)(param_1 + 0xa0 + (ulong)*(uint *)(param_1 + 0x160) * 4) = uVar3;
  uVar1 = *(uint *)(param_1 + 0x160);
  *(code **)(param_1 + 0xe0 + (ulong)uVar1 * 8) = thunk_FUN_1004469cc;
  *(uint *)(param_1 + 0x160) = uVar1 + 1;
  puVar2 = PTR_s_onBuffIntervalName_10185d558;
  uVar3 = FUN_1004d2524(PTR_s_onBuffIntervalName_10185d558);
  uVar3 = FUN_100015208(puVar2,uVar3,0x12345678);
  *(undefined4 *)(param_1 + 0xa0 + (ulong)*(uint *)(param_1 + 0x160) * 4) = uVar3;
  uVar1 = *(uint *)(param_1 + 0x160);
  *(code **)(param_1 + 0xe0 + (ulong)uVar1 * 8) = FUN_100446e90;
  *(uint *)(param_1 + 0x160) = uVar1 + 1;
  lVar6 = FUN_10042e694(param_1);
  *(ushort *)(lVar6 + 0x48) = *(ushort *)(lVar6 + 0x48) | 0x40;
  *(byte *)(lVar6 + 0x60) = *(byte *)(lVar6 + 0x60) & 0xfc | 1;
  *(ushort *)(lVar6 + 0x5a) = *(ushort *)(lVar6 + 0x5a) | 4;
  lVar6 = lVar6 + 0x10;
  FUN_10043b4e8(lVar6);
  plVar7 = (long *)FUN_100434b18(lVar6);
  plVar7 = (long *)(**(code **)(*plVar7 + 0x30))(plVar7,PTR_s_Buff_Reim_FrostDoT_10185ca98);
  local_40 = FUN_1004470e4;
  local_38 = 3;
  (**(code **)(*plVar7 + 0x18))(plVar7,&local_40);
  plVar7 = (long *)FUN_100434b18(lVar6);
  plVar7 = (long *)(**(code **)(*plVar7 + 0x30))(plVar7,PTR_s_Buff_Reim_FrostSlow_10185ca90);
  local_40 = FUN_1004470f0;
  local_38 = 3;
  (**(code **)(*plVar7 + 0x18))(plVar7,&local_40);
  return;
}




void FUN_10040819c(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  float fVar5;
  code *local_40;
  undefined4 local_38;
  
  FUN_1003461dc(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x10));
  uVar1 = FUN_100345d90();
  fVar5 = (float)FUN_1003dfe60(uVar1,0,5,0x19,0);
  *(float *)(param_1 + 0x318) = fVar5;
  if (*(float *)(param_1 + 0x31c) < fVar5) {
    *(float *)(param_1 + 0x31c) = fVar5;
  }
  *(uint *)(param_1 + 0x340) =
       *(uint *)(param_1 + 0x340) & 0xfffe0 | (uint)(fVar5 < 0.0) << 4 |
       *(uint *)(param_1 + 0x340) & 0xfff0000f;
  lVar2 = FUN_10042e498(param_1);
  lVar2 = lVar2 + 0x10;
  plVar3 = (long *)FUN_100441e18(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))(plVar3,"Sound_Reim_Ability_A_Rise");
  uVar1 = FUN_1010a1520();
  lVar4 = FUN_1010a0e0c(uVar1,0,"*KindredSoundBalance*",0);
  (**(code **)(*plVar3 + 0x28))(*(undefined4 *)(lVar4 + 0x27c),plVar3);
  plVar3 = (long *)FUN_100441e68(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x60))();
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Reim_A_Impact_EnemyFirst");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x50))(plVar3,"Effect_Reim_A_Impact_First");
  (**(code **)(*plVar3 + 0x80))(plVar3,0);
  plVar3 = (long *)FUN_10043fc58(lVar2);
  local_40 = FUN_10044715c;
  local_38 = 3;
  (**(code **)(*plVar3 + 0x30))(plVar3,&local_40);
  plVar3 = (long *)FUN_10043ab94(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x40))();
  (**(code **)(*plVar3 + 0x38))(plVar3,"Damage First Hit",0);
  lVar2 = FUN_10042fdc4(param_1);
  lVar2 = lVar2 + 0x10;
  plVar3 = (long *)FUN_10043fc58(lVar2);
  local_40 = FUN_10044715c;
  local_38 = 3;
  (**(code **)(*plVar3 + 0x30))(plVar3,&local_40);
  plVar3 = (long *)FUN_10043ab94(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x40))();
  (**(code **)(*plVar3 + 0x38))(plVar3,"Damage Second Hit",0);
  FUN_10044c418(lVar2);
  return;
}




void FUN_10040837c(undefined8 param_1)

{
  FUN_100435a7c(param_1,0x23,"Effect_Reim_Root",0);
  return;
}




void FUN_100408390(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  float fVar5;
  code *local_40;
  undefined4 local_38;
  
  FUN_1003461dc(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x10));
  uVar1 = FUN_100345d90();
  fVar5 = (float)FUN_1003dfe60(uVar1,2,4,0x19,0);
  *(float *)(param_1 + 0x318) = fVar5;
  if (*(float *)(param_1 + 0x31c) < fVar5) {
    *(float *)(param_1 + 0x31c) = fVar5;
  }
  *(uint *)(param_1 + 0x340) =
       *(uint *)(param_1 + 0x340) & 0xfffe0 | (uint)(fVar5 < 0.0) << 4 |
       *(uint *)(param_1 + 0x340) & 0xfff0000f;
  lVar2 = FUN_10042e498(param_1);
  plVar3 = (long *)FUN_100441e18(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))(plVar3,"Sound_Reim_Ability_A_Swing");
  uVar1 = FUN_1010a1520();
  lVar4 = FUN_1010a0e0c(uVar1,0,"*KindredSoundBalance*",0);
  FUN_1003bb940(*(undefined4 *)(lVar4 + 0x284));
  (**(code **)(*plVar3 + 0x28))(plVar3);
  plVar3 = (long *)FUN_100441e68(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x60))();
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Reim_C_Enemy");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x50))(plVar3,"Effect_Reim_C");
  local_40 = (code *)CONCAT44(local_40._4_4_,0x3f800000);
  local_38 = 1;
  plVar3 = (long *)(**(code **)(*plVar3 + 0x60))(plVar3,&local_40);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x78))(plVar3,1);
  (**(code **)(*plVar3 + 0x88))(plVar3,1);
  lVar2 = FUN_10042fdc4(param_1);
  lVar2 = lVar2 + 0x10;
  plVar3 = (long *)FUN_100441e18(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))(plVar3,"Sound_Reim_Ability_C_Impact");
  uVar1 = FUN_1010a1520();
  lVar4 = FUN_1010a0e0c(uVar1,0,"*KindredSoundBalance*",0);
  FUN_1003bb940(*(undefined4 *)(lVar4 + 0x284));
  (**(code **)(*plVar3 + 0x28))(plVar3);
  plVar3 = (long *)FUN_10043fc58(lVar2);
  local_40 = FUN_1004471ec;
  local_38 = 3;
  (**(code **)(*plVar3 + 0x30))(plVar3,&local_40);
  plVar3 = (long *)FUN_10043ab94(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x40))();
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))(plVar3,"Damage at Center",2);
  local_40 = FUN_100447200;
  local_38 = 5;
  (**(code **)(*plVar3 + 0x88))(plVar3,&local_40);
  plVar3 = (long *)FUN_100434b18(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Reim_C_Slow_10185caa0);
  local_40 = FUN_100447324;
  local_38 = 5;
  (**(code **)(*plVar3 + 0x18))(plVar3,&local_40);
  FUN_10044c418(lVar2);
  lVar2 = FUN_10042fdc4(param_1);
  plVar3 = (long *)FUN_10043fc58(lVar2 + 0x10);
  local_40 = FUN_100447310;
  local_38 = 3;
  (**(code **)(*plVar3 + 0x30))(plVar3,&local_40);
  plVar3 = (long *)FUN_100434b18(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Stunned_10185a208);
  local_40 = FUN_1004473b8;
  local_38 = 3;
  (**(code **)(*plVar3 + 0x18))(plVar3,&local_40);
  return;
}




void FUN_100408678(long param_1)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  code *local_30;
  undefined4 local_28;
  
  uVar1 = FUN_100345d90(*(undefined4 *)(param_1 + 0x308));
  local_30 = FUN_1004470fc;
  local_28 = 3;
  auVar2 = FUN_1003df710(uVar1,3,1);
  FUN_10042feac(auVar2,0x3f800000,param_1,&local_30);
  return;
}




void FUN_1004086d4(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  code *local_30;
  undefined4 local_28;
  
  lVar1 = FUN_10042e580();
  *(undefined4 *)(lVar1 + 0x40) = 0x3f000000;
  *(byte *)(lVar1 + 0x44) = *(byte *)(lVar1 + 0x44) & 0xfe;
  FUN_1004386bc(lVar1 + 0x10);
  plVar2 = (long *)FUN_10043ab94(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x40))();
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))();
  local_30 = FUN_100447108;
  local_28 = 4;
  (**(code **)(*plVar2 + 0x18))(plVar2,&local_30,1,3);
  lVar1 = FUN_10042e3b0(param_1);
  FUN_10049b814(lVar1 + 0x10);
  lVar1 = FUN_10042e2c8(param_1);
  plVar2 = (long *)FUN_100441e68(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,"Bone_CenterMass");
  (**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Reim_Buff_Frosted");
  return;
}




void FUN_1004087b0(undefined8 param_1)

{
  code *local_20;
  undefined4 local_18;
  
  local_20 = FUN_1004473cc;
  local_18 = 3;
  FUN_10042feac(0,0x3f000000,param_1,&local_20);
  return;
}




void FUN_1004087ec(void)

{
  long lVar1;
  long *plVar2;
  code *local_20;
  undefined4 local_18;
  
  lVar1 = FUN_10042e694();
  *(ushort *)(lVar1 + 0x48) = *(ushort *)(lVar1 + 0x48) | 8;
  *(byte *)(lVar1 + 0x60) = *(byte *)(lVar1 + 0x60) & 0xfc | 1;
  *(undefined4 *)(lVar1 + 0x40) = 0x6e9d90f4;
  plVar2 = (long *)FUN_10043187c(lVar1 + 0x10);
  local_20 = FUN_100493e48;
  local_18 = 3;
  (**(code **)(*plVar2 + 0x30))(plVar2,&local_20);
  return;
}




void FUN_10040885c(void)

{
  long lVar1;
  long *plVar2;
  code *local_20;
  undefined4 local_18;
  
  lVar1 = FUN_10042e2c8();
  plVar2 = (long *)FUN_100430a84(lVar1 + 0x10);
  local_20 = FUN_100493e7c;
  local_18 = 3;
  (**(code **)(*plVar2 + 0x30))(plVar2,5,2,&local_20);
  return;
}




void FUN_1004088ac(void)

{
  char cVar1;
  long lVar2;
  long *plVar3;
  uint uVar4;
  char *pcVar5;
  code *local_20;
  undefined4 local_18;
  
  lVar2 = FUN_100433910();
  if (PTR_s_Ability__Reim__B_1018594a0 == (undefined *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = 0x811c9dc5;
    cVar1 = *PTR_s_Ability__Reim__B_1018594a0;
    pcVar5 = PTR_s_Ability__Reim__B_1018594a0;
    while (cVar1 != '\0') {
      pcVar5 = pcVar5 + 1;
      uVar4 = (uVar4 ^ (int)cVar1) * 0x1000193;
      cVar1 = *pcVar5;
    }
  }
  *(uint *)(lVar2 + 0x28) = uVar4;
  *(byte *)(lVar2 + 0x38) = *(byte *)(lVar2 + 0x38) & 0xfb;
  plVar3 = (long *)FUN_100433e34(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))
                             (plVar3,PTR_s_Buff_Reim_Talent_Revenant_Barrie_10185cac0);
  local_20 = FUN_100493eb0;
  local_18 = 3;
  (**(code **)(*plVar3 + 0x18))(plVar3,&local_20);
  return;
}




void FUN_10040895c(void)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_10042e2c8();
  plVar2 = (long *)FUN_10049b864(lVar1 + 0x10);
  (**(code **)(*plVar2 + 0x30))(plVar2,4,FUN_100493ee4);
  lVar1 = FUN_10049be50(lVar1 + 0x10);
  *(undefined1 *)(lVar1 + 0x2c) = 8;
  return;
}




void FUN_1004089ac(long param_1)

{
  uint uVar1;
  int iVar2;
  undefined *puVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  int *piVar7;
  long lVar8;
  long *plVar9;
  
  if (DAT_101d23a38 == '\0') {
    *(undefined4 *)(param_1 + 0x328) = 0x3e800000;
    puVar3 = PTR_s_num_charges_10185d600;
    lVar8 = param_1 + 0x168;
    uVar4 = FUN_1004d2524(PTR_s_num_charges_10185d600);
    uVar5 = FUN_100015208(puVar3,uVar4,0x12345678);
    uVar5 = (**(code **)(*(long *)(param_1 + 0x168) + 8))(lVar8,uVar5);
    puVar6 = (undefined4 *)(**(code **)(*(long *)(param_1 + 0x168) + 0x10))(lVar8,uVar5);
    *puVar6 = 0;
    puVar3 = PTR_s_pfx_id_10185d608;
    iVar2 = DAT_1018589d8;
    DAT_1018589d8 = DAT_1018589d8 + 1;
    uVar4 = FUN_1004d2524(PTR_s_pfx_id_10185d608);
    uVar5 = FUN_100015208(puVar3,uVar4,0x12345678);
    uVar5 = (**(code **)(*(long *)(param_1 + 0x168) + 8))(lVar8,uVar5);
    piVar7 = (int *)(**(code **)(*(long *)(param_1 + 0x168) + 0x10))(lVar8,uVar5);
    *piVar7 = iVar2;
    puVar3 = PTR_s_onBuffIntervalName_10185d558;
    uVar4 = FUN_1004d2524(PTR_s_onBuffIntervalName_10185d558);
    uVar4 = FUN_100015208(puVar3,uVar4,0x12345678);
    *(undefined4 *)(param_1 + 0xa0 + (ulong)*(uint *)(param_1 + 0x160) * 4) = uVar4;
    uVar1 = *(uint *)(param_1 + 0x160);
    *(code **)(param_1 + 0xa0 + (ulong)uVar1 * 8 + 0x40) = FUN_100441664;
    *(uint *)(param_1 + 0x160) = uVar1 + 1;
  }
  lVar8 = FUN_10042e2c8(param_1);
  plVar9 = (long *)FUN_10049bbfc(lVar8 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x000100408b00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar9 + 0x50))(plVar9,PTR_s_Ability__Kestrel__A_101859570);
  return;
}




void FUN_100408b04(undefined8 param_1)

{
  char cVar1;
  long lVar2;
  long *plVar3;
  uint uVar4;
  char *pcVar5;
  undefined4 local_50 [2];
  undefined4 local_48;
  code *local_40;
  undefined4 local_38;
  
  lVar2 = FUN_10042e694();
  *(ushort *)(lVar2 + 0x48) = *(ushort *)(lVar2 + 0x48) | 0x40;
  *(byte *)(lVar2 + 0x60) = *(byte *)(lVar2 + 0x60) & 0xfc | 1;
  *(ushort *)(lVar2 + 0x5a) = *(ushort *)(lVar2 + 0x5a) | 4;
  plVar3 = (long *)FUN_100433e34(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Kestrel_Adrenaline_10185cad8);
  local_40 = FUN_100441940;
  local_38 = 3;
  (**(code **)(*plVar3 + 0x18))(plVar3,&local_40);
  lVar2 = FUN_10042e694(param_1);
  *(ushort *)(lVar2 + 0x48) = *(ushort *)(lVar2 + 0x48) | 0x40;
  *(byte *)(lVar2 + 0x60) = *(byte *)(lVar2 + 0x60) & 0xfc | 1;
  if (PTR_s_Ability__Kestrel__C_101859590 == (undefined *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = 0x811c9dc5;
    cVar1 = *PTR_s_Ability__Kestrel__C_101859590;
    pcVar5 = PTR_s_Ability__Kestrel__C_101859590;
    while (cVar1 != '\0') {
      pcVar5 = pcVar5 + 1;
      uVar4 = (uVar4 ^ (int)cVar1) * 0x1000193;
      cVar1 = *pcVar5;
    }
  }
  *(uint *)(lVar2 + 0x40) = uVar4;
  plVar3 = (long *)FUN_100433e34(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Kestrel_Adrenaline_10185cad8);
  local_40 = FUN_100441940;
  local_38 = 3;
  plVar3 = (long *)(**(code **)(*plVar3 + 0x18))(plVar3,&local_40);
  local_50[0] = 5;
  local_48 = 1;
  (**(code **)(*plVar3 + 0x20))(plVar3,local_50);
  return;
}




void FUN_100408c58(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = FUN_10043099c();
  lVar1 = lVar1 + 0x10;
  lVar2 = FUN_10049d0e0(lVar1);
  *(undefined **)(lVar2 + 0x10) = PTR_s_Ability__Kestrel__A_101859570;
  *(code **)(lVar2 + 0x18) = FUN_100441954;
  *(undefined4 *)(lVar2 + 0x20) = 3;
  *(undefined4 *)(lVar2 + 0x28) = 0x3f800000;
  *(byte *)(lVar2 + 0x2c) = *(byte *)(lVar2 + 0x2c) | 7;
  lVar2 = FUN_10049d0e0(lVar1);
  *(undefined **)(lVar2 + 0x10) = PTR_s_Ability__Kestrel__B_101859578;
  *(code **)(lVar2 + 0x18) = FUN_100441954;
  *(undefined4 *)(lVar2 + 0x20) = 3;
  *(undefined4 *)(lVar2 + 0x28) = 0x3f800000;
  *(byte *)(lVar2 + 0x2c) = *(byte *)(lVar2 + 0x2c) | 7;
  lVar1 = FUN_10049d0e0(lVar1);
  *(undefined **)(lVar1 + 0x10) = PTR_s_Ability__Kestrel__C_101859590;
  *(code **)(lVar1 + 0x18) = FUN_100441954;
  *(undefined4 *)(lVar1 + 0x20) = 3;
  *(undefined4 *)(lVar1 + 0x28) = 0x3f800000;
  *(byte *)(lVar1 + 0x2c) = *(byte *)(lVar1 + 0x2c) | 7;
  lVar1 = FUN_10042e3b0(param_1);
  FUN_10049b814(lVar1 + 0x10);
  return;
}




void FUN_100408d20(void)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  
  lVar1 = FUN_10042e498();
  plVar2 = (long *)FUN_100441e18(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x38))(plVar2,"Sound_Kestrel_Ability_A_Explode_1");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x18))(plVar2,"Sound_Kestrel_Ability_A_Explode_2");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x18))(plVar2,"Sound_Kestrel_Ability_A_Explode_3");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x18))(plVar2,"Sound_Kestrel_Ability_A_Explode_4");
  uVar3 = FUN_1010a1520();
  lVar1 = FUN_1010a0e0c(uVar3,0,"*KindredSoundBalance*",0);
  FUN_1003b2f3c(*(undefined4 *)(lVar1 + 0x260));
                    /* WARNING: Could not recover jumptable at 0x000100408dc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x28))(plVar2);
  return;
}




void FUN_100408dc4(undefined8 param_1)

{
  char cVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  uint uVar6;
  char *pcVar7;
  
  lVar2 = FUN_10043e568();
  if (PTR_s_Ability__Kestrel__A_101859570 == (undefined *)0x0) {
    uVar6 = 0;
  }
  else {
    uVar6 = 0x811c9dc5;
    cVar1 = *PTR_s_Ability__Kestrel__A_101859570;
    pcVar7 = PTR_s_Ability__Kestrel__A_101859570;
    while (cVar1 != '\0') {
      pcVar7 = pcVar7 + 1;
      uVar6 = (uVar6 ^ (int)cVar1) * 0x1000193;
      cVar1 = *pcVar7;
    }
  }
  *(uint *)(lVar2 + 0x28) = uVar6;
  plVar3 = (long *)FUN_10049bbfc(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))();
  (**(code **)(*plVar3 + 0x58))(plVar3,1);
  lVar2 = FUN_1004303b0(param_1);
  plVar3 = (long *)FUN_100441e18(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))(plVar3,"Sound_Kestrel_Ability_A_Reload");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x20))(0x3f800000);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))();
  uVar4 = FUN_1010a1520();
  lVar5 = FUN_1010a0e0c(uVar4,0,"*KindredSoundBalance*",0);
  FUN_1003b2f3c(*(undefined4 *)(lVar5 + 0x264));
  (**(code **)(*plVar3 + 0x28))(plVar3);
  lVar2 = FUN_10049c934(lVar2 + 0x10);
  *(undefined **)(lVar2 + 0x10) = PTR_s_Ability__Kestrel__A_101859570;
  *(undefined2 *)(lVar2 + 0x28) = 0x101;
  return;
}




void FUN_100408ee8(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  
  puVar2 = PTR_s_onAfterApplyDamageName_10185d578;
  if (DAT_101d23a38 != '\0') {
    uVar3 = FUN_1004d2524(PTR_s_onAfterApplyDamageName_10185d578);
    uVar3 = FUN_100015208(puVar2,uVar3,0x12345678);
    *(undefined4 *)(param_1 + 0xa0 + (ulong)*(uint *)(param_1 + 0x160) * 4) = uVar3;
    uVar1 = *(uint *)(param_1 + 0x160);
    *(code **)(param_1 + 0xa0 + (ulong)uVar1 * 8 + 0x40) = FUN_100441960;
    *(uint *)(param_1 + 0x160) = uVar1 + 1;
  }
  return;
}




void FUN_100408f5c(void)

{
  long lVar1;
  
  lVar1 = FUN_10042e2c8();
  FUN_10049c460(lVar1 + 0x10);
  return;
}




void FUN_100408f74(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  float fVar4;
  code *local_40;
  undefined4 local_38;
  
  FUN_1003461dc(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x10));
  uVar1 = FUN_100345d90();
  fVar4 = (float)FUN_1003dfe60(uVar1,1,7,0x19,0);
  *(float *)(param_1 + 0x318) = fVar4;
  if (*(float *)(param_1 + 0x31c) < fVar4) {
    *(float *)(param_1 + 0x31c) = fVar4;
  }
  *(uint *)(param_1 + 0x340) =
       *(uint *)(param_1 + 0x340) & 0xfffe0 | (uint)(fVar4 < 0.0) << 4 |
       *(uint *)(param_1 + 0x340) & 0xfff0000f;
  lVar2 = FUN_10042e2c8(param_1);
  plVar3 = (long *)FUN_100441e68(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x60))();
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Kestrel_Trap_Timer_Enemy");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x50))(plVar3,"Effect_Kestrel_Trap_Timer");
  (**(code **)(*plVar3 + 0xb0))(plVar3,1);
  lVar2 = FUN_10042fdc4(param_1);
  lVar2 = lVar2 + 0x10;
  plVar3 = (long *)FUN_100433e34(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Kestrel_Trap_Ready_10185ac60);
  local_40 = FUN_100441acc;
  local_38 = 3;
  (**(code **)(*plVar3 + 0x18))(plVar3,&local_40);
  FUN_10043aa04(lVar2);
  plVar3 = (long *)FUN_100434b18(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Kestrel_CanTriggerTrap_10185caf8)
  ;
  local_40 = FUN_100441acc;
  local_38 = 3;
  (**(code **)(*plVar3 + 0x18))(plVar3,&local_40);
  return;
}




void FUN_1004090d4(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_10042e2c8();
  plVar2 = (long *)FUN_100441e68(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x60))();
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Kestrel_Trap_Enemy");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x50))(plVar2,"Effect_Kestrel_Trap");
  (**(code **)(*plVar2 + 0xb0))(plVar2,1);
  lVar1 = FUN_1004303b0(param_1);
  FUN_100434ac8(lVar1 + 0x10);
  return;
}




void FUN_10040914c(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  
  lVar1 = FUN_10042e498();
  plVar2 = (long *)FUN_100441e68(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x60))();
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Kestrel_Trap_Ignite");
  (**(code **)(*plVar2 + 0x78))(plVar2,1);
  plVar2 = (long *)FUN_100441e18(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x38))(plVar2,"Sound_Kestrel_Ability_B_Explode");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x20))(0x3f800000);
  uVar3 = FUN_1010a1520();
  lVar1 = FUN_1010a0e0c(uVar3,0,"*KindredSoundBalance*",0);
  FUN_1003b2f3c(*(undefined4 *)(lVar1 + 0x26c));
  (**(code **)(*plVar2 + 0x28))(plVar2);
  lVar1 = FUN_10042fdc4(param_1);
  FUN_100434ac8(lVar1 + 0x10);
  return;
}




void FUN_100409214(void)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_10042ea44();
  FUN_1004386bc(lVar1 + 0x10);
  plVar2 = (long *)FUN_10043ab94(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x40))();
                    /* WARNING: Could not recover jumptable at 0x000100409260. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x38))(plVar2,"TrapDamage",1);
  return;
}




void FUN_100409264(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  long lVar4;
  
  puVar2 = PTR_s_onAfterApplyDamageName_10185d578;
  if (DAT_101d23a38 != '\0') {
    uVar3 = FUN_1004d2524(PTR_s_onAfterApplyDamageName_10185d578);
    uVar3 = FUN_100015208(puVar2,uVar3,0x12345678);
    *(undefined4 *)(param_1 + 0xa0 + (ulong)*(uint *)(param_1 + 0x160) * 4) = uVar3;
    uVar1 = *(uint *)(param_1 + 0x160);
    *(code **)(param_1 + 0xa0 + (ulong)uVar1 * 8 + 0x40) = FUN_100441ae0;
    *(uint *)(param_1 + 0x160) = uVar1 + 1;
  }
  lVar4 = FUN_10042e3b0(param_1);
  FUN_10049b814(lVar4 + 0x10);
  return;
}




void FUN_1004092e4(long param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  
  *(uint *)(param_1 + 0x340) = *(uint *)(param_1 + 0x340) | 0x80;
  lVar1 = FUN_10042e498();
  plVar2 = (long *)FUN_100441e18(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x38))(plVar2,"Sound_Kestrel_Ability_B_In");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))();
  uVar3 = FUN_1010a1520();
  lVar4 = FUN_1010a0e0c(uVar3,0,"*KindredSoundBalance*",0);
  FUN_1003b2f3c(*(undefined4 *)(lVar4 + 0x268));
  (**(code **)(*plVar2 + 0x28))(plVar2);
  plVar2 = (long *)FUN_100441e68(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x98))(plVar2,4);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x60))();
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Kestrel_Stealthing");
  (**(code **)(*plVar2 + 0x80))(plVar2,0);
  lVar1 = FUN_10042e3b0(param_1);
  FUN_10049b814(lVar1 + 0x10);
  lVar1 = FUN_10042fdc4(param_1);
  plVar2 = (long *)FUN_100441e18(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x38))(plVar2,"Sound_Kestrel_Ability_B_Out");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x20))(0x3f800000);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))();
  uVar3 = FUN_1010a1520();
  lVar4 = FUN_1010a0e0c(uVar3,0,"*KindredSoundBalance*",0);
  FUN_1003b2f3c(*(undefined4 *)(lVar4 + 0x268));
  (**(code **)(*plVar2 + 0x28))(plVar2);
  plVar2 = (long *)FUN_100441e68(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x60))();
  (**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Kestrel_Stealth_out");
  lVar1 = FUN_10042e2c8(param_1);
  lVar1 = lVar1 + 0x10;
  FUN_10049c460(lVar1);
  lVar4 = FUN_10049be00(lVar1);
  *(undefined4 *)(lVar4 + 0x58) = 1;
  *(code **)(lVar4 + 0x10) = FUN_100441db4;
  *(undefined4 *)(lVar4 + 0x18) = 3;
  plVar2 = (long *)FUN_100441e68(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,"Bone_Head");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Kestrel_B_Head");
  (**(code **)(*plVar2 + 0xb8))(plVar2,1);
  plVar2 = (long *)FUN_100441e68(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,"Bone_Body1");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Kestrel_B_Body");
  (**(code **)(*plVar2 + 0xb8))(plVar2,1);
  plVar2 = (long *)FUN_100441e68(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,"Bone_Body2");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Kestrel_B_Body");
  (**(code **)(*plVar2 + 0xb8))(plVar2,1);
  plVar2 = (long *)FUN_100441e68(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,"Bone_LegTopL");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Kestrel_B_Leg_Yneg");
  (**(code **)(*plVar2 + 0xb8))(plVar2,1);
  plVar2 = (long *)FUN_100441e68(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,"Bone_LegTopR");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Kestrel_B_Leg_Ypos");
  (**(code **)(*plVar2 + 0xb8))(plVar2,1);
  plVar2 = (long *)FUN_100441e68(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,"Bone_LegBotL");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Kestrel_B_Leg_Yneg");
  (**(code **)(*plVar2 + 0xb8))(plVar2,1);
  plVar2 = (long *)FUN_100441e68(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,"Bone_LegBotR");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Kestrel_B_Leg_Ypos");
  (**(code **)(*plVar2 + 0xb8))(plVar2,1);
  plVar2 = (long *)FUN_100441e68(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,"Bone_ArmTopL");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Kestrel_B_Leg_Yneg");
  (**(code **)(*plVar2 + 0xb8))(plVar2,1);
  plVar2 = (long *)FUN_100441e68(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,"Bone_ArmTopR");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Kestrel_B_Leg_Ypos");
  (**(code **)(*plVar2 + 0xb8))(plVar2,1);
  plVar2 = (long *)FUN_100441e68(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,"Bone_ArmBotL");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Kestrel_B_Leg_Yneg");
  (**(code **)(*plVar2 + 0xb8))(plVar2,1);
  plVar2 = (long *)FUN_100441e68(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,"Bone_ArmBotR");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Kestrel_B_Leg_Ypos");
  (**(code **)(*plVar2 + 0xb8))(plVar2,1);
  plVar2 = (long *)FUN_100441e68(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x60))();
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Kestrel_Stealthed");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x90))();
  (**(code **)(*plVar2 + 0xb0))(plVar2,1);
  plVar2 = (long *)FUN_10049b7c4(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))(plVar2,"Sound_Kestrel_Ability_B_Loop");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))();
  uVar3 = FUN_1010a1520();
  lVar4 = FUN_1010a0e0c(uVar3,0,"*KindredSoundBalance*",0);
  FUN_1003b2f3c(*(undefined4 *)(lVar4 + 0x268));
  (**(code **)(*plVar2 + 0x28))(plVar2);
  plVar2 = (long *)FUN_10049c148(lVar1);
  (**(code **)(*plVar2 + 0x30))(plVar2,0xf);
  FUN_10049c4b0(lVar1);
  lVar1 = FUN_10042e694(param_1);
  *(ushort *)(lVar1 + 0x48) = *(ushort *)(lVar1 + 0x48) | 0x40;
  *(byte *)(lVar1 + 0x60) = *(byte *)(lVar1 + 0x60) & 0xfc | 2;
  *(undefined2 *)(lVar1 + 0x5e) = 0x10;
  lVar1 = FUN_10043fc08(lVar1 + 0x10);
  lVar4 = FUN_10049c198(lVar1 + 0x10);
  *(code **)(lVar4 + 8) = FUN_100441d40;
  FUN_1004385f0(lVar1 + 0x88);
  return;
}




void FUN_10040986c(void)

{
  long lVar1;
  long *plVar2;
  undefined4 local_20 [2];
  undefined4 local_18;
  
  lVar1 = FUN_10042e498();
  plVar2 = (long *)FUN_100441e68(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x60))();
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Kestrel_C_Shot");
  local_20[0] = 0x3e99999a;
  local_18 = 1;
  plVar2 = (long *)(**(code **)(*plVar2 + 0x60))(plVar2,local_20);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,0);
  plVar2 = (long *)(**(code **)(*plVar2 + 0xb8))(plVar2,0);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x88))(plVar2,1);
  (**(code **)(*plVar2 + 0xa8))(plVar2,FUN_100441dc8);
  return;
}




void FUN_100409918(void)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar1 = FUN_10042e498();
  plVar2 = (long *)FUN_100441e18(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x38))(plVar2,"Sound_Kestrel_Ability_C_Impact");
  uVar3 = FUN_1010a1520();
  lVar4 = FUN_1010a0e0c(uVar3,0,"*KindredSoundBalance*",0);
  (**(code **)(*plVar2 + 0x28))(*(undefined4 *)(lVar4 + 0x270),plVar2);
  lVar1 = FUN_10043fc08(lVar1 + 0x10);
  lVar4 = FUN_10049d130(lVar1 + 0x10);
  *(char **)(lVar4 + 0x20) = "__VAR1_INT__";
  *(undefined4 *)(lVar4 + 8) = 1;
  *(undefined4 *)(lVar4 + 0x10) = 1;
  plVar2 = (long *)FUN_100441e18(lVar1 + 0x88);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x38))(plVar2,"Sound_Kestrel_Ability_C_Kill");
  uVar3 = FUN_1010a1520();
  lVar4 = FUN_1010a0e0c(uVar3,0,"*KindredSoundBalance*",0);
  (**(code **)(*plVar2 + 0x28))(*(undefined4 *)(lVar4 + 0x270),plVar2);
  plVar2 = (long *)FUN_100441e68(lVar1 + 0x88);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x40))();
  plVar2 = (long *)(**(code **)(*plVar2 + 0x60))();
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Kestrel_C_Impact");
                    /* WARNING: Could not recover jumptable at 0x000100409a44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x88))(plVar2,1);
  return;
}




void FUN_100409a48(void)

{
  long lVar1;
  char cVar2;
  uint uVar3;
  char *pcVar4;
  uint uVar5;
  
  uVar5 = 0x811c9dc5;
  lVar1 = FUN_100433030();
  if (PTR_s_Ability__Kestrel__C_101859590 == (undefined *)0x0) {
    uVar3 = 0;
  }
  else {
    cVar2 = *PTR_s_Ability__Kestrel__C_101859590;
    uVar3 = 0x811c9dc5;
    if (cVar2 != '\0') {
      uVar3 = 0x811c9dc5;
      pcVar4 = PTR_s_Ability__Kestrel__C_101859590;
      do {
        pcVar4 = pcVar4 + 1;
        uVar3 = (uVar3 ^ (int)cVar2) * 0x1000193;
        cVar2 = *pcVar4;
      } while (cVar2 != '\0');
    }
  }
  *(uint *)(lVar1 + 0x28) = uVar3;
  lVar1 = FUN_10049bf40(lVar1 + 0x10);
  if (PTR_s_Ability__Kestrel__C_101859590 == (undefined *)0x0) {
    uVar5 = 0;
  }
  else {
    cVar2 = *PTR_s_Ability__Kestrel__C_101859590;
    pcVar4 = PTR_s_Ability__Kestrel__C_101859590;
    while (cVar2 != '\0') {
      pcVar4 = pcVar4 + 1;
      uVar5 = (uVar5 ^ (int)cVar2) * 0x1000193;
      cVar2 = *pcVar4;
    }
  }
  *(uint *)(lVar1 + 0x20) = uVar5;
  *(code **)(lVar1 + 0x10) = FUN_1004933a0;
  *(undefined4 *)(lVar1 + 0x18) = 3;
  *(undefined4 *)(lVar1 + 0x28) = 1;
  return;
}




void FUN_100409b1c(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  char cVar3;
  uint uVar4;
  char *pcVar5;
  uint uVar6;
  code *local_40;
  undefined4 local_38;
  
  uVar6 = 0x811c9dc5;
  lVar1 = FUN_100433030();
  if (PTR_s_Ability__Kestrel__A_101859570 == (undefined *)0x0) {
    uVar4 = 0;
  }
  else {
    cVar3 = *PTR_s_Ability__Kestrel__A_101859570;
    uVar4 = 0x811c9dc5;
    if (cVar3 != '\0') {
      uVar4 = 0x811c9dc5;
      pcVar5 = PTR_s_Ability__Kestrel__A_101859570;
      do {
        pcVar5 = pcVar5 + 1;
        uVar4 = (uVar4 ^ (int)cVar3) * 0x1000193;
        cVar3 = *pcVar5;
      } while (cVar3 != '\0');
    }
  }
  *(uint *)(lVar1 + 0x28) = uVar4;
  lVar1 = FUN_10049da9c(lVar1 + 0x10);
  *(undefined **)(lVar1 + 0x10) = PTR_s_Ability__Kestrel__A_101859570;
  *(code **)(lVar1 + 0x18) = FUN_1004933d4;
  *(undefined4 *)(lVar1 + 0x20) = 3;
  *(undefined4 *)(lVar1 + 0x2c) = 1;
  lVar1 = FUN_10042e694(param_1);
  *(ushort *)(lVar1 + 0x48) = *(ushort *)(lVar1 + 0x48) | 8;
  *(byte *)(lVar1 + 0x60) = *(byte *)(lVar1 + 0x60) & 0xfc | 1;
  if (PTR_s_Ability__Kestrel__A_101859570 == (undefined *)0x0) {
    uVar6 = 0;
  }
  else {
    cVar3 = *PTR_s_Ability__Kestrel__A_101859570;
    pcVar5 = PTR_s_Ability__Kestrel__A_101859570;
    while (cVar3 != '\0') {
      pcVar5 = pcVar5 + 1;
      uVar6 = (uVar6 ^ (int)cVar3) * 0x1000193;
      cVar3 = *pcVar5;
    }
  }
  *(uint *)(lVar1 + 0x40) = uVar6;
  plVar2 = (long *)FUN_10043187c(lVar1 + 0x10);
  local_40 = FUN_100493408;
  local_38 = 3;
  (**(code **)(*plVar2 + 0x30))(plVar2,&local_40);
  return;
}




void FUN_100409c54(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  uint uVar4;
  char cVar5;
  char *pcVar6;
  uint uVar7;
  code *local_60;
  undefined4 local_58;
  
  uVar7 = 0x811c9dc5;
  lVar1 = FUN_100433030();
  if (PTR_s_Ability__Kestrel__A_101859570 == (undefined *)0x0) {
    uVar4 = 0;
  }
  else {
    cVar5 = *PTR_s_Ability__Kestrel__A_101859570;
    uVar4 = 0x811c9dc5;
    if (cVar5 != '\0') {
      uVar4 = 0x811c9dc5;
      pcVar6 = PTR_s_Ability__Kestrel__A_101859570;
      do {
        pcVar6 = pcVar6 + 1;
        uVar4 = (uVar4 ^ (int)cVar5) * 0x1000193;
        cVar5 = *pcVar6;
      } while (cVar5 != '\0');
    }
  }
  *(uint *)(lVar1 + 0x28) = uVar4;
  *(undefined1 *)(lVar1 + 0x2c) = 1;
  lVar2 = FUN_10049c888(lVar1 + 0x10);
  if (PTR_s_Ability__Kestrel__A_101859570 == (undefined *)0x0) {
    uVar4 = 0;
  }
  else {
    cVar5 = *PTR_s_Ability__Kestrel__A_101859570;
    uVar4 = 0x811c9dc5;
    if (cVar5 != '\0') {
      uVar4 = 0x811c9dc5;
      pcVar6 = PTR_s_Ability__Kestrel__A_101859570;
      do {
        pcVar6 = pcVar6 + 1;
        uVar4 = (uVar4 ^ (int)cVar5) * 0x1000193;
        cVar5 = *pcVar6;
      } while (cVar5 != '\0');
    }
  }
  *(uint *)(lVar2 + 0x20) = uVar4;
  *(code **)(lVar2 + 0x10) = FUN_100493300;
  *(undefined4 *)(lVar2 + 0x18) = 3;
  lVar1 = FUN_10049bf40(lVar1 + 0x10);
  if (PTR_s_Ability__Kestrel__B_101859578 == (undefined *)0x0) {
    uVar4 = 0;
  }
  else {
    cVar5 = *PTR_s_Ability__Kestrel__B_101859578;
    uVar4 = 0x811c9dc5;
    if (cVar5 != '\0') {
      uVar4 = 0x811c9dc5;
      pcVar6 = PTR_s_Ability__Kestrel__B_101859578;
      do {
        pcVar6 = pcVar6 + 1;
        uVar4 = (uVar4 ^ (int)cVar5) * 0x1000193;
        cVar5 = *pcVar6;
      } while (cVar5 != '\0');
    }
  }
  *(uint *)(lVar1 + 0x20) = uVar4;
  *(code **)(lVar1 + 0x10) = FUN_100493338;
  *(undefined4 *)(lVar1 + 0x18) = 3;
  *(undefined4 *)(lVar1 + 0x28) = 1;
  lVar1 = FUN_100433030(param_1);
  if (PTR_s_Ability__Kestrel__B_101859578 == (undefined *)0x0) {
    uVar4 = 0;
  }
  else {
    cVar5 = *PTR_s_Ability__Kestrel__B_101859578;
    uVar4 = 0x811c9dc5;
    if (cVar5 != '\0') {
      uVar4 = 0x811c9dc5;
      pcVar6 = PTR_s_Ability__Kestrel__B_101859578;
      do {
        pcVar6 = pcVar6 + 1;
        uVar4 = (uVar4 ^ (int)cVar5) * 0x1000193;
        cVar5 = *pcVar6;
      } while (cVar5 != '\0');
    }
  }
  *(uint *)(lVar1 + 0x28) = uVar4;
  lVar2 = FUN_10049d0e0(lVar1 + 0x10);
  *(undefined **)(lVar2 + 0x10) = PTR_s_Ability__Kestrel__B_101859578;
  *(code **)(lVar2 + 0x18) = FUN_1004932cc;
  *(undefined4 *)(lVar2 + 0x20) = 3;
  *(byte *)(lVar2 + 0x2c) = *(byte *)(lVar2 + 0x2c) | 4;
  *(undefined4 *)(lVar2 + 0x28) = 0x3f800000;
  lVar1 = FUN_10049d0e0(lVar1 + 0x10);
  *(undefined **)(lVar1 + 0x10) = PTR_s_Ability__Kestrel__A_101859570;
  *(code **)(lVar1 + 0x18) = FUN_1004932cc;
  *(undefined4 *)(lVar1 + 0x20) = 3;
  *(byte *)(lVar1 + 0x2c) = *(byte *)(lVar1 + 0x2c) | 4;
  *(undefined4 *)(lVar1 + 0x28) = 0x3f800000;
  lVar1 = FUN_10042e694(param_1);
  *(ushort *)(lVar1 + 0x48) = *(ushort *)(lVar1 + 0x48) | 8;
  *(byte *)(lVar1 + 0x60) = *(byte *)(lVar1 + 0x60) & 0xfc | 1;
  if (PTR_s_Ability__Kestrel__A_101859570 == (undefined *)0x0) {
    uVar4 = 0;
  }
  else {
    cVar5 = *PTR_s_Ability__Kestrel__A_101859570;
    uVar4 = 0x811c9dc5;
    if (cVar5 != '\0') {
      uVar4 = 0x811c9dc5;
      pcVar6 = PTR_s_Ability__Kestrel__A_101859570;
      do {
        pcVar6 = pcVar6 + 1;
        uVar4 = (uVar4 ^ (int)cVar5) * 0x1000193;
        cVar5 = *pcVar6;
      } while (cVar5 != '\0');
    }
  }
  *(uint *)(lVar1 + 0x40) = uVar4;
  plVar3 = (long *)FUN_10043187c(lVar1 + 0x10);
  local_60 = FUN_10049336c;
  local_58 = 3;
  (**(code **)(*plVar3 + 0x30))(plVar3,&local_60);
  lVar1 = FUN_10042e498(param_1);
  plVar3 = (long *)FUN_100433e34(lVar1 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Kestrel_Reloading_10185ac38);
  local_60 = FUN_100493260;
  local_58 = 5;
  (**(code **)(*plVar3 + 0x18))(plVar3,&local_60);
  lVar1 = FUN_100438a9c(param_1);
  if (PTR_s_Ability__Kestrel__A_101859570 == (undefined *)0x0) {
    uVar7 = 0;
  }
  else {
    cVar5 = *PTR_s_Ability__Kestrel__A_101859570;
    pcVar6 = PTR_s_Ability__Kestrel__A_101859570;
    while (cVar5 != '\0') {
      pcVar6 = pcVar6 + 1;
      uVar7 = (uVar7 ^ (int)cVar5) * 0x1000193;
      cVar5 = *pcVar6;
    }
  }
  *(uint *)(lVar1 + 0x28) = uVar7;
  plVar3 = (long *)FUN_100433e34(lVar1 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Kestrel_Reloading_10185ac38);
  local_60 = FUN_100493260;
  local_58 = 5;
  (**(code **)(*plVar3 + 0x18))(plVar3,&local_60);
  return;
}




void FUN_100409fac(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  code *local_50;
  undefined4 local_48;
  
  lVar4 = FUN_10042f284();
  plVar5 = (long *)FUN_100430a84(lVar4 + 0x10);
  local_50 = FUN_10042f240;
  local_48 = 4;
  (**(code **)(*plVar5 + 0x30))(plVar5,0x2c,0,&local_50);
  plVar5 = (long *)FUN_100430a84(lVar4 + 0x10);
  local_50._0_4_ = 0x42c80000;
  local_48 = 1;
  (**(code **)(*plVar5 + 0x30))(plVar5,0x2b,0,&local_50);
  lVar4 = FUN_10042e498(param_1);
  lVar6 = FUN_10043aaf4(lVar4 + 0x10);
  *(code **)(lVar6 + 0x10) = FUN_10042f264;
  plVar5 = (long *)FUN_1004519c8(lVar4 + 0x10);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x30))();
  plVar5 = (long *)(**(code **)(*plVar5 + 0x48))();
  local_50 = (code *)CONCAT44(local_50._4_4_,0x42c80000);
  local_48 = 1;
  (**(code **)(*plVar5 + 0x20))(plVar5,3,&local_50);
  lVar4 = FUN_10042f36c(param_1);
  plVar5 = (long *)FUN_100433e34(lVar4 + 0x10);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x30))(plVar5,PTR_s_Buff_Alpha_Rebooting_10185cb08);
  local_50 = FUN_10042ec2c;
  local_48 = 3;
  (**(code **)(*plVar5 + 0x18))(plVar5,&local_50);
  lVar4 = FUN_10042f454(param_1);
  plVar5 = (long *)FUN_1004519c8(lVar4 + 0x10);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x30))();
  plVar5 = (long *)(**(code **)(*plVar5 + 0x48))();
  local_50 = FUN_10042f240;
  local_48 = 4;
  (**(code **)(*plVar5 + 0x20))(plVar5,1,&local_50);
  puVar2 = PTR_s_onHostDieName_10185d528;
  uVar3 = FUN_1004d2524(PTR_s_onHostDieName_10185d528);
  uVar3 = FUN_100015208(puVar2,uVar3,0x12345678);
  *(undefined4 *)(param_1 + 0xa0 + (ulong)*(uint *)(param_1 + 0x160) * 4) = uVar3;
  uVar1 = *(uint *)(param_1 + 0x160);
  *(code **)(param_1 + 0xe0 + (ulong)uVar1 * 8) = FUN_10042eef4;
  *(uint *)(param_1 + 0x160) = uVar1 + 1;
  puVar2 = PTR_s_onActorAttributesChangedName_10185d530;
  uVar3 = FUN_1004d2524(PTR_s_onActorAttributesChangedName_10185d530);
  uVar3 = FUN_100015208(puVar2,uVar3,0x12345678);
  *(undefined4 *)(param_1 + 0xa0 + (ulong)*(uint *)(param_1 + 0x160) * 4) = uVar3;
  uVar1 = *(uint *)(param_1 + 0x160);
  *(code **)(param_1 + 0xe0 + (ulong)uVar1 * 8) = FUN_10042ef80;
  *(uint *)(param_1 + 0x160) = uVar1 + 1;
  return;
}




void FUN_10040a1c4(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  code *local_50;
  undefined4 local_48;
  
  puVar2 = PTR_s_onTimeoutName_10185d538;
  uVar3 = FUN_1004d2524(PTR_s_onTimeoutName_10185d538);
  uVar3 = FUN_100015208(puVar2,uVar3,0x12345678);
  *(undefined4 *)(param_1 + 0xa0 + (ulong)*(uint *)(param_1 + 0x160) * 4) = uVar3;
  uVar1 = *(uint *)(param_1 + 0x160);
  *(code **)(param_1 + 0xa0 + (ulong)uVar1 * 8 + 0x40) = FUN_10042f53c;
  *(uint *)(param_1 + 0x160) = uVar1 + 1;
  fVar8 = *(float *)(param_1 + 0x31c);
  fVar9 = *(float *)(**(long **)(*(long *)(*(long *)(*(long *)(param_1 + 0x10) + 0x10) + 0x38) +
                                0x228) + 8);
  lVar4 = FUN_10042e580(param_1);
  *(undefined4 *)(lVar4 + 0x40) = 0x3dcccccd;
  *(byte *)(lVar4 + 0x44) = *(byte *)(lVar4 + 0x44) & 0xfe;
  plVar5 = (long *)FUN_1004519c8(lVar4 + 0x10);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x48))();
  local_50 = FUN_10042f880;
  local_48 = 4;
  (**(code **)(*plVar5 + 0x10))(plVar5,3,&local_50);
  lVar4 = FUN_10042e498(param_1);
  lVar4 = lVar4 + 0x10;
  plVar5 = (long *)FUN_1004385a0(lVar4);
  (**(code **)(*plVar5 + 0x30))(plVar5,PTR_s_Buff_Alpha_B_Stacks_Buff_10185a288);
  plVar5 = (long *)FUN_1004385a0(lVar4);
  (**(code **)(*plVar5 + 0x30))(plVar5,PTR_s_Buff_Alpha_B_Stacks_Debuff_10185a280);
  plVar5 = (long *)FUN_10043594c(lVar4);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x30))(plVar5,"Reboot");
  plVar5 = (long *)(**(code **)(*plVar5 + 0x18))(plVar5,"AttackToIdle");
  (**(code **)(*plVar5 + 0x10))(2.0 - fVar8 / fVar9);
  FUN_10049b914(lVar4);
  lVar4 = FUN_10042e2c8(param_1);
  lVar4 = lVar4 + 0x10;
  FUN_10049b964(lVar4);
  lVar6 = FUN_10049b9b4(lVar4);
  *(undefined2 *)(lVar6 + 0x10) = 0x1f;
  plVar5 = (long *)FUN_10049ba04(lVar4);
  (**(code **)(*plVar5 + 0x30))(plVar5,"Stun","Reboot");
  plVar5 = (long *)FUN_10049ba04(lVar4);
  (**(code **)(*plVar5 + 0x30))(plVar5,"Idle","Reboot");
  plVar5 = (long *)FUN_100441e68(lVar4);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x60))();
  plVar5 = (long *)(**(code **)(*plVar5 + 0x48))(plVar5,"Effect_Alpha_C_Rebooting");
  (**(code **)(*plVar5 + 0xb0))(plVar5,1);
  plVar5 = (long *)FUN_10049b7c4(lVar4);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x30))(plVar5,"Sound_Alpha_Ability_C_Reboot");
  uVar7 = FUN_1010a1520();
  lVar4 = FUN_1010a0e0c(uVar7,0,"*KindredSoundBalance*",0);
  FUN_1003a2a20(*(undefined4 *)(lVar4 + 0x2ac));
  (**(code **)(*plVar5 + 0x28))(plVar5);
  lVar4 = FUN_10042f8e8(param_1);
  plVar5 = (long *)FUN_1004519c8(lVar4 + 0x10);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x48))();
  local_50 = (code *)((ulong)local_50 & 0xffffffff00000000);
  local_48 = 1;
  (**(code **)(*plVar5 + 0x20))(plVar5,3,&local_50);
  return;
}




void FUN_10040a480(long param_1)

{
  long lVar1;
  uint uVar2;
  undefined *puVar3;
  undefined4 uVar4;
  long lVar5;
  long *plVar6;
  undefined8 local_40;
  undefined4 local_38;
  
  puVar3 = PTR_s_onApplyName_10185d540;
  uVar4 = FUN_1004d2524(PTR_s_onApplyName_10185d540);
  uVar4 = FUN_100015208(puVar3,uVar4,0x12345678);
  lVar5 = param_1 + 0xa0;
  *(undefined4 *)(lVar5 + (ulong)*(uint *)(param_1 + 0x160) * 4) = uVar4;
  uVar2 = *(uint *)(param_1 + 0x160);
  lVar1 = param_1 + 0xe0;
  *(code **)(lVar1 + (ulong)uVar2 * 8) = FUN_10042f9d0;
  *(uint *)(param_1 + 0x160) = uVar2 + 1;
  puVar3 = PTR_s_onEndName_10185d548;
  uVar4 = FUN_1004d2524(PTR_s_onEndName_10185d548);
  uVar4 = FUN_100015208(puVar3,uVar4,0x12345678);
  *(undefined4 *)(lVar5 + (ulong)*(uint *)(param_1 + 0x160) * 4) = uVar4;
  uVar2 = *(uint *)(param_1 + 0x160);
  *(code **)(lVar1 + (ulong)uVar2 * 8) = FUN_10042fa24;
  *(uint *)(param_1 + 0x160) = uVar2 + 1;
  puVar3 = PTR_s_onAbilityUpgradedName_10185d550;
  uVar4 = FUN_1004d2524(PTR_s_onAbilityUpgradedName_10185d550);
  uVar4 = FUN_100015208(puVar3,uVar4,0x12345678);
  *(undefined4 *)(lVar5 + (ulong)*(uint *)(param_1 + 0x160) * 4) = uVar4;
  uVar2 = *(uint *)(param_1 + 0x160);
  *(code **)(lVar1 + (ulong)uVar2 * 8) = FUN_10042fa6c;
  *(uint *)(param_1 + 0x160) = uVar2 + 1;
  puVar3 = PTR_s_onBuffIntervalName_10185d558;
  uVar4 = FUN_1004d2524(PTR_s_onBuffIntervalName_10185d558);
  uVar4 = FUN_100015208(puVar3,uVar4,0x12345678);
  *(undefined4 *)(lVar5 + (ulong)*(uint *)(param_1 + 0x160) * 4) = uVar4;
  uVar2 = *(uint *)(param_1 + 0x160);
  *(code **)(lVar1 + (ulong)uVar2 * 8) = FUN_10042fc08;
  *(uint *)(param_1 + 0x160) = uVar2 + 1;
  *(undefined4 *)(param_1 + 0x328) = 0x3dcccccd;
  lVar5 = FUN_10042e498(param_1);
  plVar6 = (long *)FUN_1004519c8(lVar5 + 0x10);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x48))();
  local_40 = (code *)((ulong)local_40._4_4_ << 0x20);
  local_38 = 1;
  (**(code **)(*plVar6 + 0x20))(plVar6,3,&local_40);
  lVar5 = FUN_10042e580(param_1);
  *(undefined4 *)(lVar5 + 0x40) = 0x3dcccccd;
  *(byte *)(lVar5 + 0x44) = *(byte *)(lVar5 + 0x44) & 0xfe;
  plVar6 = (long *)FUN_1004519c8(lVar5 + 0x10);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x48))();
  local_40 = FUN_10042fcec;
  local_38 = 4;
  (**(code **)(*plVar6 + 0x20))(plVar6,3,&local_40);
  lVar5 = FUN_10042fdc4(param_1);
  plVar6 = (long *)FUN_1004519c8(lVar5 + 0x10);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x48))();
  (**(code **)(*plVar6 + 0x28))(plVar6,3);
  return;
}




void FUN_10040a68c(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  
  puVar2 = PTR_s_onAfterApplyDamageName_10185d578;
  uVar3 = FUN_1004d2524(PTR_s_onAfterApplyDamageName_10185d578);
  uVar3 = FUN_100015208(puVar2,uVar3,0x12345678);
  *(undefined4 *)(param_1 + 0xa0 + (ulong)*(uint *)(param_1 + 0x160) * 4) = uVar3;
  uVar1 = *(uint *)(param_1 + 0x160);
  *(code **)(param_1 + 0xa0 + (ulong)uVar1 * 8 + 0x40) = FUN_100430618;
  *(uint *)(param_1 + 0x160) = uVar1 + 1;
  return;
}




void FUN_10040a6f4(long param_1)

{
  long lVar1;
  uint uVar2;
  undefined *puVar3;
  undefined4 uVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  float local_50 [2];
  undefined4 local_48;
  
  puVar3 = PTR_s_onActorResourcesChangedName_10185d560;
  uVar4 = FUN_1004d2524(PTR_s_onActorResourcesChangedName_10185d560);
  uVar4 = FUN_100015208(puVar3,uVar4,0x12345678);
  lVar5 = param_1 + 0xa0;
  *(undefined4 *)(lVar5 + (ulong)*(uint *)(param_1 + 0x160) * 4) = uVar4;
  uVar2 = *(uint *)(param_1 + 0x160);
  lVar1 = param_1 + 0xe0;
  *(code **)(lVar1 + (ulong)uVar2 * 8) = FUN_10042ff70;
  *(uint *)(param_1 + 0x160) = uVar2 + 1;
  puVar3 = PTR_s_onBeforeApplyHealName_10185d568;
  uVar4 = FUN_1004d2524(PTR_s_onBeforeApplyHealName_10185d568);
  uVar4 = FUN_100015208(puVar3,uVar4,0x12345678);
  *(undefined4 *)(lVar5 + (ulong)*(uint *)(param_1 + 0x160) * 4) = uVar4;
  uVar2 = *(uint *)(param_1 + 0x160);
  *(code **)(lVar1 + (ulong)uVar2 * 8) = FUN_100430124;
  *(uint *)(param_1 + 0x160) = uVar2 + 1;
  puVar3 = PTR_s_onBeforeApplyDamageName_10185d570;
  uVar4 = FUN_1004d2524(PTR_s_onBeforeApplyDamageName_10185d570);
  uVar4 = FUN_100015208(puVar3,uVar4,0x12345678);
  *(undefined4 *)(lVar5 + (ulong)*(uint *)(param_1 + 0x160) * 4) = uVar4;
  uVar2 = *(uint *)(param_1 + 0x160);
  *(code **)(lVar1 + (ulong)uVar2 * 8) = FUN_100430210;
  *(uint *)(param_1 + 0x160) = uVar2 + 1;
  uVar7 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x10);
  lVar5 = FUN_10042e498(param_1);
  fVar9 = *(float *)(param_1 + 0x318);
  fVar8 = (float)FUN_1003dfe60(uVar7,2,8,0x19,0);
  plVar6 = (long *)FUN_100433e34(lVar5 + 0x10);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x30))
                             (plVar6,PTR_s_Buff_Alpha_SelfDestruct_SelfSpee_10185cb28);
  local_48 = 1;
  local_50[0] = fVar8 * fVar9;
  (**(code **)(*plVar6 + 0x18))(plVar6,local_50);
  plVar6 = (long *)FUN_1004519c8(lVar5 + 0x10);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x48))();
  local_50[0] = 1.0;
  local_48 = 1;
  (**(code **)(*plVar6 + 0x20))(plVar6,0,local_50);
  lVar5 = FUN_10042e2c8(param_1);
  lVar5 = lVar5 + 0x10;
  plVar6 = (long *)FUN_10049b864(lVar5);
  (**(code **)(*plVar6 + 0x30))(plVar6,4,FUN_100430260);
  plVar6 = (long *)FUN_100430a84(lVar5);
  local_50[0] = -1.0;
  local_48 = 1;
  (**(code **)(*plVar6 + 0x30))(plVar6,1,2,local_50);
  plVar6 = (long *)FUN_100441e68(lVar5);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x78))(plVar6,"Bone_Chest");
  plVar6 = (long *)(**(code **)(*plVar6 + 0x48))(plVar6,"Effect_Alpha_C_Charging");
  plVar6 = (long *)(**(code **)(*plVar6 + 0x90))();
  (**(code **)(*plVar6 + 0xa0))(plVar6,FUN_100430104);
  plVar6 = (long *)FUN_100441e68(lVar5);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x60))();
  plVar6 = (long *)(**(code **)(*plVar6 + 0x48))(plVar6,"Effect_Alpha_C_Ground");
  (**(code **)(*plVar6 + 0x90))();
  plVar6 = (long *)FUN_10049b7c4(lVar5);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x30))(plVar6,"Sound_Alpha_Ability_C_Loop");
  uVar7 = FUN_1010a1520();
  lVar5 = FUN_1010a0e0c(uVar7,0,"*KindredSoundBalance*",0);
  FUN_1003a2a20(*(undefined4 *)(lVar5 + 0x2ac));
  (**(code **)(*plVar6 + 0x28))(plVar6);
  lVar5 = FUN_1004303b0(param_1);
  plVar6 = (long *)FUN_100454548(lVar5 + 0x10);
  (**(code **)(*plVar6 + 0x30))(plVar6,PTR_s_Ability__Alpha__SelfDestruct_1018595d0);
  return;
}




void FUN_10040a9f0(undefined8 param_1)

{
  code *local_20;
  undefined4 local_18;
  
  local_20 = FUN_10042ff5c;
  local_18 = 3;
  FUN_10042feac(0,0x3f800000,param_1,&local_20);
  return;
}




void FUN_10040aa2c(long param_1)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  code *local_50;
  undefined4 local_48;
  
  puVar1 = PTR_s_Buff_Alpha_Talent_Acceleration_10185cb38;
  uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x10);
  lVar3 = FUN_100345d90(*(undefined4 *)(param_1 + 0x308));
  if ((lVar3 != 0) && (iVar2 = FUN_1003a47d0(lVar3,puVar1), iVar2 != 0)) {
    fVar6 = (float)FUN_1003dfe60(uVar5,2,1,0x19,0);
    *(float *)(param_1 + 0x318) = fVar6;
    if (*(float *)(param_1 + 0x31c) < fVar6) {
      *(float *)(param_1 + 0x31c) = fVar6;
    }
    *(uint *)(param_1 + 0x340) =
         *(uint *)(param_1 + 0x340) & 0xfffe0 | (uint)(fVar6 < 0.0) << 4 |
         *(uint *)(param_1 + 0x340) & 0xfff0000f;
    local_50 = (code *)CONCAT44(local_50._4_4_,DAT_101d909f4);
    FUN_1003dfee8(uVar5,&local_50,1,9);
    FUN_100430498(param_1);
    return;
  }
  local_50 = FUN_10043058c;
  local_48 = 3;
  FUN_10043050c(0,0x3f800000,param_1,&local_50);
  fVar6 = (float)FUN_1003dfe60(uVar5,2,1,0x19,0);
  fVar7 = (float)FUN_1003dfe60(uVar5,2,8,0x19,0);
  lVar3 = FUN_10042fdc4(param_1);
  plVar4 = (long *)FUN_100433e34(lVar3 + 0x10);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x30))
                             (plVar4,PTR_s_Buff_Alpha_SelfDestruct_SelfSlow_10185cb30);
  local_50 = (code *)CONCAT44(local_50._4_4_,fVar6 - fVar6 * fVar7);
  local_48 = 1;
  (**(code **)(*plVar4 + 0x18))(plVar4,&local_50);
  return;
}




void FUN_10040abb0(long param_1)

{
  FUN_1003dfe60(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x10),2,7,0x19,0);
  FUN_1004305a0(param_1);
  return;
}




void FUN_10040abec(long param_1)

{
  char cVar1;
  undefined *puVar2;
  undefined4 uVar3;
  long lVar4;
  long *plVar5;
  uint uVar6;
  char *pcVar7;
  code *local_40;
  undefined4 local_38;
  
  *(uint *)(param_1 + 0x340) = *(uint *)(param_1 + 0x340) | 0x1000;
  *(code **)(param_1 + 0x338) = FUN_100430760;
  lVar4 = FUN_10042e2c8();
  plVar5 = (long *)FUN_100441e68(lVar4 + 0x10);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x78))(plVar5,"Bone_Chest");
  (**(code **)(*plVar5 + 0x48))(plVar5,"Effect_Alpha_B_Buff");
  lVar4 = FUN_10043099c(param_1);
  lVar4 = FUN_10043ab44(lVar4 + 0x10);
  puVar2 = PTR_s_Buff_Alpha_Talent_CoreOverclock_10185cb40;
  *(undefined1 *)(lVar4 + 0x58) = 2;
  *(undefined8 *)(lVar4 + 0x48) = 0;
  *(undefined8 *)(lVar4 + 0x50) = 0;
  *(undefined1 *)(lVar4 + 0x50) = 2;
  *(undefined **)(lVar4 + 0x40) = puVar2;
  plVar5 = (long *)FUN_100430a84(lVar4 + 0x10);
  local_40 = FUN_100430ad4;
  local_38 = 3;
  plVar5 = (long *)(**(code **)(*plVar5 + 0x30))(plVar5,0xf,1,&local_40);
  (**(code **)(*plVar5 + 0x38))();
  lVar4 = FUN_10042e3b0(param_1);
  FUN_10049b814(lVar4 + 0x10);
  puVar2 = PTR_s_onAfterApplyDamageName_10185d578;
  uVar3 = FUN_1004d2524(PTR_s_onAfterApplyDamageName_10185d578);
  uVar3 = FUN_100015208(puVar2,uVar3,0x12345678);
  *(undefined4 *)(param_1 + 0xa0 + (ulong)*(uint *)(param_1 + 0x160) * 4) = uVar3;
  uVar6 = *(uint *)(param_1 + 0x160);
  *(code **)(param_1 + 0xa0 + (ulong)uVar6 * 8 + 0x40) = FUN_100430850;
  *(uint *)(param_1 + 0x160) = uVar6 + 1;
  lVar4 = FUN_10042e694(param_1);
  *(ushort *)(lVar4 + 0x48) = *(ushort *)(lVar4 + 0x48) | 0x40;
  *(byte *)(lVar4 + 0x60) = *(byte *)(lVar4 + 0x60) & 0xfc | 1;
  *(undefined2 *)(lVar4 + 0x5a) = 4;
  plVar5 = (long *)FUN_10045562c(lVar4 + 0x10);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x30))();
  local_40 = (code *)CONCAT44(local_40._4_4_,*(undefined4 *)(param_1 + 0x31c));
  local_38 = 1;
  (**(code **)(*plVar5 + 0x10))(plVar5,&local_40);
  lVar4 = FUN_10042e694(param_1);
  *(ushort *)(lVar4 + 0x48) = *(ushort *)(lVar4 + 0x48) | 0x10;
  *(byte *)(lVar4 + 0x60) = *(byte *)(lVar4 + 0x60) & 0xfc | 1;
  if (PTR_s_Ability__Alpha__B_1018595b8 == (undefined *)0x0) {
    uVar6 = 0;
  }
  else {
    uVar6 = 0x811c9dc5;
    cVar1 = *PTR_s_Ability__Alpha__B_1018595b8;
    pcVar7 = PTR_s_Ability__Alpha__B_1018595b8;
    while (cVar1 != '\0') {
      pcVar7 = pcVar7 + 1;
      uVar6 = (uVar6 ^ (int)cVar1) * 0x1000193;
      cVar1 = *pcVar7;
    }
  }
  *(uint *)(lVar4 + 0x40) = uVar6;
  plVar5 = (long *)FUN_10043187c(lVar4 + 0x10);
  local_40 = FUN_100430b08;
  local_38 = 3;
  plVar5 = (long *)(**(code **)(*plVar5 + 0x38))(plVar5,&local_40);
  (**(code **)(*plVar5 + 0x48))();
  return;
}




void FUN_10040ae2c(long param_1)

{
  long lVar1;
  long *plVar2;
  char cVar3;
  uint uVar4;
  char *pcVar5;
  uint uVar6;
  code *local_40;
  undefined4 local_38;
  
  uVar6 = 0x811c9dc5;
  *(uint *)(param_1 + 0x340) = *(uint *)(param_1 + 0x340) | 0x1000;
  *(code **)(param_1 + 0x338) = FUN_100430760;
  lVar1 = FUN_10042e3b0();
  FUN_10049b814(lVar1 + 0x10);
  lVar1 = FUN_10042e694(param_1);
  *(ushort *)(lVar1 + 0x48) = *(ushort *)(lVar1 + 0x48) | 0x40;
  *(byte *)(lVar1 + 0x60) = *(byte *)(lVar1 + 0x60) & 0xfc | 1;
  *(undefined2 *)(lVar1 + 0x5a) = 4;
  plVar2 = (long *)FUN_10045562c(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))();
  local_40 = (code *)CONCAT44(local_40._4_4_,*(undefined4 *)(param_1 + 0x31c));
  local_38 = 1;
  (**(code **)(*plVar2 + 0x10))(plVar2,&local_40);
  lVar1 = FUN_10042e694(param_1);
  *(ushort *)(lVar1 + 0x48) = *(ushort *)(lVar1 + 0x48) | 4;
  *(byte *)(lVar1 + 0x60) = *(byte *)(lVar1 + 0x60) & 0xfc | 1;
  if (PTR_s_Ability__Alpha__A_1018595b0 == (undefined *)0x0) {
    uVar4 = 0;
  }
  else {
    cVar3 = *PTR_s_Ability__Alpha__A_1018595b0;
    uVar4 = 0x811c9dc5;
    if (cVar3 != '\0') {
      uVar4 = 0x811c9dc5;
      pcVar5 = PTR_s_Ability__Alpha__A_1018595b0;
      do {
        pcVar5 = pcVar5 + 1;
        uVar4 = (uVar4 ^ (int)cVar3) * 0x1000193;
        cVar3 = *pcVar5;
      } while (cVar3 != '\0');
    }
  }
  *(uint *)(lVar1 + 0x40) = uVar4;
  *(undefined1 *)(lVar1 + 0x58) = 1;
  plVar2 = (long *)FUN_10043e658(lVar1 + 0x10);
  local_40 = FUN_100430b1c;
  local_38 = 3;
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))(plVar2,&local_40);
  (**(code **)(*plVar2 + 0x38))();
  lVar1 = FUN_10042e694(param_1);
  *(ushort *)(lVar1 + 0x48) = *(ushort *)(lVar1 + 0x48) | 4;
  *(byte *)(lVar1 + 0x60) = *(byte *)(lVar1 + 0x60) & 0xfc | 1;
  if (PTR_s_Ability__Alpha__A_1018595b0 == (undefined *)0x0) {
    uVar6 = 0;
  }
  else {
    cVar3 = *PTR_s_Ability__Alpha__A_1018595b0;
    pcVar5 = PTR_s_Ability__Alpha__A_1018595b0;
    while (cVar3 != '\0') {
      pcVar5 = pcVar5 + 1;
      uVar6 = (uVar6 ^ (int)cVar3) * 0x1000193;
      cVar3 = *pcVar5;
    }
  }
  *(uint *)(lVar1 + 0x40) = uVar6;
  *(undefined1 *)(lVar1 + 0x58) = 2;
  plVar2 = (long *)FUN_10043e658(lVar1 + 0x10);
  local_40 = FUN_100430b30;
  local_38 = 3;
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))(plVar2,&local_40);
  (**(code **)(*plVar2 + 0x38))();
  return;
}




void FUN_10040b030(void)

{
  long lVar1;
  
  lVar1 = FUN_10042e2c8();
  FUN_10049b964(lVar1 + 0x10);
  return;
}




void FUN_10040b048(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_10042e2c8();
  plVar2 = (long *)FUN_100441e68(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,"Bone_LRocket");
  (**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Alpha_Thruster");
  plVar2 = (long *)FUN_100441e68(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,"Bone_RRocket");
  (**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Alpha_Thruster_R");
  lVar1 = FUN_10042fdc4(param_1);
  plVar2 = (long *)FUN_100441e68(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,"Bone_LRocket");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Alpha_Thruster_Shutdown");
  (**(code **)(*plVar2 + 0x78))(plVar2,1);
  plVar2 = (long *)FUN_100441e68(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,"Bone_RRocket");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Alpha_Thruster_Shutdown_R");
                    /* WARNING: Could not recover jumptable at 0x00010040b158. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x78))(plVar2,1);
  return;
}




void FUN_10040b15c(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  
  FUN_10042ebc4(param_1,1);
  lVar1 = FUN_10042e2c8(param_1);
  lVar1 = lVar1 + 0x10;
  plVar2 = (long *)FUN_100433e34(lVar1);
  (**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_Alpha_ThrusterPfx_10185a268);
  plVar2 = (long *)FUN_100441e68(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,"Bone_LeftKnee");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Alpha_String");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x90))();
  (**(code **)(*plVar2 + 0xb0))(plVar2,1);
  plVar2 = (long *)FUN_100441e68(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,"Bone_RightKnee");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Alpha_String");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x90))();
  (**(code **)(*plVar2 + 0xb0))(plVar2,1);
  plVar2 = (long *)FUN_100441e68(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,"Bone_LeftHand");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Alpha_String");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x90))();
  (**(code **)(*plVar2 + 0xb0))(plVar2,1);
  plVar2 = (long *)FUN_100441e68(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,"Bone_RightHand");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Alpha_String");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x90))();
                    /* WARNING: Could not recover jumptable at 0x00010040b2c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0xb0))(plVar2,1);
  return;
}




void FUN_10040b2cc(void)

{
  long lVar1;
  char cVar2;
  uint uVar3;
  char *pcVar4;
  uint uVar5;
  
  uVar5 = 0x811c9dc5;
  lVar1 = FUN_100433030();
  if (PTR_s_Ability__Alpha__C_1018595c0 == (undefined *)0x0) {
    uVar3 = 0;
  }
  else {
    cVar2 = *PTR_s_Ability__Alpha__C_1018595c0;
    uVar3 = 0x811c9dc5;
    if (cVar2 != '\0') {
      uVar3 = 0x811c9dc5;
      pcVar4 = PTR_s_Ability__Alpha__C_1018595c0;
      do {
        pcVar4 = pcVar4 + 1;
        uVar3 = (uVar3 ^ (int)cVar2) * 0x1000193;
        cVar2 = *pcVar4;
      } while (cVar2 != '\0');
    }
  }
  *(uint *)(lVar1 + 0x28) = uVar3;
  lVar1 = FUN_10049bf40(lVar1 + 0x10);
  if (PTR_s_Ability__Alpha__C_1018595c0 == (undefined *)0x0) {
    uVar5 = 0;
  }
  else {
    cVar2 = *PTR_s_Ability__Alpha__C_1018595c0;
    pcVar4 = PTR_s_Ability__Alpha__C_1018595c0;
    while (cVar2 != '\0') {
      pcVar4 = pcVar4 + 1;
      uVar5 = (uVar5 ^ (int)cVar2) * 0x1000193;
      cVar2 = *pcVar4;
    }
  }
  *(uint *)(lVar1 + 0x20) = uVar5;
  *(code **)(lVar1 + 0x10) = FUN_100492124;
  *(undefined4 *)(lVar1 + 0x18) = 3;
  *(undefined4 *)(lVar1 + 0x28) = 1;
  return;
}




void FUN_10040b3a0(void)

{
  char cVar1;
  long lVar2;
  uint uVar3;
  char *pcVar4;
  
  lVar2 = FUN_10042e2c8();
  lVar2 = FUN_10049bf40(lVar2 + 0x10);
  if (PTR_s_Ability__Alpha__A_1018595b0 == (undefined *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = 0x811c9dc5;
    cVar1 = *PTR_s_Ability__Alpha__A_1018595b0;
    pcVar4 = PTR_s_Ability__Alpha__A_1018595b0;
    while (cVar1 != '\0') {
      pcVar4 = pcVar4 + 1;
      uVar3 = (uVar3 ^ (int)cVar1) * 0x1000193;
      cVar1 = *pcVar4;
    }
  }
  *(uint *)(lVar2 + 0x20) = uVar3;
  *(code **)(lVar2 + 0x10) = FUN_100492158;
  *(undefined4 *)(lVar2 + 0x18) = 3;
  *(undefined4 *)(lVar2 + 0x28) = 1;
  return;
}




void FUN_10040b420(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_10042e95c();
  plVar2 = (long *)FUN_10049b864(lVar1 + 0x10);
  (**(code **)(*plVar2 + 0x30))(plVar2,5,FUN_10049218c);
  lVar1 = FUN_10042e3b0(param_1);
  FUN_10049b814(lVar1 + 0x10);
  return;
}




void FUN_10040b46c(void)

{
  long lVar1;
  long *plVar2;
  code *local_20;
  undefined4 local_18;
  
  lVar1 = FUN_10042e2c8();
  plVar2 = (long *)FUN_100430a84(lVar1 + 0x10);
  local_20 = FUN_10049227c;
  local_18 = 3;
  (**(code **)(*plVar2 + 0x30))(plVar2,4,2,&local_20);
  return;
}




void FUN_10040b4bc(void)

{
  char cVar1;
  long lVar2;
  long *plVar3;
  uint uVar4;
  char *pcVar5;
  code *local_20;
  undefined4 local_18;
  
  lVar2 = FUN_100433030();
  if (PTR_s_Ability__Lyra__C_101859610 == (undefined *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = 0x811c9dc5;
    cVar1 = *PTR_s_Ability__Lyra__C_101859610;
    pcVar5 = PTR_s_Ability__Lyra__C_101859610;
    while (cVar1 != '\0') {
      pcVar5 = pcVar5 + 1;
      uVar4 = (uVar4 ^ (int)cVar1) * 0x1000193;
      cVar1 = *pcVar5;
    }
  }
  *(uint *)(lVar2 + 0x28) = uVar4;
  *(undefined1 *)(lVar2 + 0x2c) = 1;
  plVar3 = (long *)FUN_100430a84(lVar2 + 0x10);
  local_20 = FUN_100444038;
  local_18 = 3;
  (**(code **)(*plVar3 + 0x30))(plVar3,0x10,1,&local_20);
  return;
}




void FUN_10040b55c(undefined8 param_1)

{
  code *local_20;
  undefined4 local_18;
  
  local_20 = FUN_10044404c;
  local_18 = 5;
  FUN_10042feac(0,0x3f800000,param_1,&local_20);
  return;
}




void FUN_10040b598(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  float fVar4;
  undefined4 uVar5;
  undefined1 auStack_48 [24];
  
  FUN_1003461dc(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x10));
  uVar2 = FUN_100345d90();
  fVar4 = (float)FUN_1003dfe60(uVar2,3,3,0x19,0);
  *(float *)(param_1 + 0x318) = fVar4;
  if (*(float *)(param_1 + 0x31c) < fVar4) {
    *(float *)(param_1 + 0x31c) = fVar4;
  }
  *(uint *)(param_1 + 0x340) =
       *(uint *)(param_1 + 0x340) & 0xfffe0 | (uint)(fVar4 < 0.0) << 4 |
       *(uint *)(param_1 + 0x340) & 0xfff0000f;
  FUN_100450f38(auStack_48,param_1 + 0x98);
  lVar3 = FUN_100431ad4(auStack_48);
  *(ushort *)(lVar3 + 0x74) = *(ushort *)(lVar3 + 0x74) & 0xff98 | 0x21;
  *(char **)(lVar3 + 0x10) = "Effect_Lyra_Portal_Form_E";
  *(char **)(lVar3 + 0x18) = "Effect_Lyra_Portal_Form_A";
  FUN_100450f38(auStack_48,param_1 + 0x80);
  FUN_100431d2c(auStack_48);
  lVar3 = FUN_100431e0c(auStack_48);
  puVar1 = PTR_s_Buff_Lyra_Portal_10185cb60;
  uVar5 = FUN_1003dfe60(uVar2,3,4,0x19,0);
  *(undefined **)(lVar3 + 0x10) = puVar1;
  *(undefined4 *)(lVar3 + 0x30) = uVar5;
  *(undefined8 *)(lVar3 + 0x34) = 0xffffffff00000001;
  *(undefined8 *)(lVar3 + 0x44) = 0;
  *(undefined8 *)(lVar3 + 0x3c) = 0;
  FUN_100431f2c(auStack_48);
  return;
}




void FUN_10040b6c4(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  undefined4 *puVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  int *piVar12;
  ulong uVar13;
  ushort *puVar14;
  int *piVar15;
  undefined4 local_68 [2];
  undefined4 local_60;
  
  FUN_1003461dc(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x10));
  lVar5 = FUN_100345d90();
  *(undefined4 *)(param_1 + 0x328) = 0x3dcccccd;
  if (DAT_101d23a38 == '\0') {
    lVar9 = param_1 + 0x168;
    uVar3 = FUN_1004440bc();
    uVar6 = (*(code *)**(undefined8 **)(param_1 + 0x168))(lVar9,PTR_s_portal_cooldown_10185d648);
    puVar7 = (undefined1 *)(**(code **)(*(long *)(param_1 + 0x168) + 0x10))(lVar9,uVar6);
    *puVar7 = uVar3;
    puVar2 = PTR_s_pfx_id_10185d650;
    uVar4 = FUN_1004d2524(PTR_s_pfx_id_10185d650);
    uVar6 = FUN_100015208(puVar2,uVar4,0x12345678);
    uVar6 = (**(code **)(*(long *)(param_1 + 0x168) + 8))(lVar9,uVar6);
    puVar8 = (undefined4 *)(**(code **)(*(long *)(param_1 + 0x168) + 0x10))(lVar9,uVar6);
    *puVar8 = 0xffffffff;
    puVar2 = PTR_s_onBuffIntervalName_10185d558;
    uVar4 = FUN_1004d2524(PTR_s_onBuffIntervalName_10185d558);
    uVar4 = FUN_100015208(puVar2,uVar4,0x12345678);
    *(undefined4 *)(param_1 + 0xa0 + (ulong)*(uint *)(param_1 + 0x160) * 4) = uVar4;
    uVar1 = *(uint *)(param_1 + 0x160);
    *(code **)(param_1 + 0xa0 + (ulong)uVar1 * 8 + 0x40) = FUN_100444164;
    *(uint *)(param_1 + 0x160) = uVar1 + 1;
    FUN_100450f38(local_68,param_1 + 0x80);
    uVar13 = (ulong)DAT_101e94150;
    if (uVar13 == 0xffff) {
      puVar14 = (ushort *)0x0;
    }
    else {
      puVar14 = &DAT_101e48150 + uVar13 * 0x4c;
      if (DAT_101e94150 == DAT_101e94152) {
        DAT_101e94150 = 0xffff;
      }
      else {
        DAT_101e94150 = *puVar14;
      }
      DAT_101e94154 = DAT_101e94154 + 1;
      lVar9 = uVar13 * 0x98;
      *(undefined8 *)(&DAT_101e48158 + lVar9) = 0;
      *(undefined8 *)(&DAT_101e48160 + lVar9) = 0;
      *(undefined ***)puVar14 = &PTR_FUN_101498428;
      *(undefined8 *)(&DAT_101e48160 + lVar9) = 0;
      *(undefined8 *)(&DAT_101e48168 + lVar9) = 0;
      *(undefined4 *)(&DAT_101e48168 + lVar9) = 0xffffffff;
      (&DAT_101e4816c)[lVar9] = 0;
      DAT_101e94160 = DAT_101e94160 + 1;
      if (DAT_101e94164 < DAT_101e94160) {
        DAT_101e94164 = DAT_101e94160;
      }
    }
    FUN_100450f94(local_68,puVar14);
    *(code **)(puVar14 + 8) = FUN_100444408;
  }
  lVar9 = FUN_10042e498(param_1);
  lVar9 = lVar9 + 0x10;
  plVar10 = (long *)FUN_100441e18(lVar9);
  plVar10 = (long *)(**(code **)(*plVar10 + 0x38))(plVar10,"Sound_Lyra_Ability_C_Start");
  uVar6 = FUN_1010a1520();
  lVar11 = FUN_1010a0e0c(uVar6,0,"*KindredSoundBalance*",0);
  FUN_1003b77c4(*(undefined4 *)(lVar11 + 0x300));
  (**(code **)(*plVar10 + 0x28))(plVar10);
  lVar11 = FUN_10043d65c(lVar9);
  *(code **)(lVar11 + 0x10) = FUN_1004446ac;
  plVar10 = (long *)FUN_100434b18(lVar9);
  plVar10 = (long *)(**(code **)(*plVar10 + 0x30))
                              (plVar10,PTR_s_Buff_Lyra_PortalRecentlyUsed_10185adc8);
  local_68[0] = FUN_1003dfe60(lVar5,3,7,0x19,0);
  local_60 = 1;
  (**(code **)(*plVar10 + 0x18))(plVar10,local_68);
  lVar9 = FUN_10042e498(param_1);
  lVar11 = FUN_10043d65c(lVar9 + 0x10);
  *(code **)(lVar11 + 0x10) = FUN_100444700;
  plVar10 = (long *)FUN_100434b18(lVar9 + 0x10);
  plVar10 = (long *)(**(code **)(*plVar10 + 0x30))
                              (plVar10,PTR_s_Buff_Lyra_PortalAntiSnipe_10185cb68);
  (**(code **)(*plVar10 + 0x30))(plVar10,*(undefined4 *)(lVar5 + 0x260));
  lVar9 = FUN_10042e2c8(param_1);
  plVar10 = (long *)FUN_100441e68(lVar9 + 0x10);
  plVar10 = (long *)(**(code **)(*plVar10 + 0x68))(plVar10,"CenterBody");
  plVar10 = (long *)(**(code **)(*plVar10 + 0x48))(plVar10,"Effect_Lyra_Portal_Link_E");
  plVar10 = (long *)(**(code **)(*plVar10 + 0x50))(plVar10,"Effect_Lyra_Portal_Link_A");
  plVar10 = (long *)(**(code **)(*plVar10 + 0xa8))(plVar10,FUN_1004445cc);
  (**(code **)(*plVar10 + 0x90))();
  lVar9 = FUN_10042e580(param_1);
  *(undefined4 *)(lVar9 + 0x40) = 0x3dcccccd;
  *(byte *)(lVar9 + 0x44) = *(byte *)(lVar9 + 0x44) & 0xfe;
  lVar9 = lVar9 + 0x10;
  lVar11 = FUN_10043aaa4(lVar9);
  *(code **)(lVar11 + 0x10) = FUN_100444748;
  piVar15 = (int *)(lVar11 + 0x20);
  piVar12 = piVar15;
  if ((((*piVar15 == 0) || (piVar12 = (int *)(lVar11 + 0x24), *piVar12 == 0)) &&
      (FUN_1003a4e5c(piVar12,PTR_s_Buff_Lyra_PortalRecentlyUsed_10185adc8), *piVar15 == 0)) ||
     (piVar15 = (int *)(lVar11 + 0x24), *piVar15 == 0)) {
    FUN_1003a4e5c(piVar15,PTR_s_Buff_Lyra_PortalAntiSnipe_10185cb68);
  }
  plVar10 = (long *)FUN_100434b18(lVar9);
  plVar10 = (long *)(**(code **)(*plVar10 + 0x30))
                              (plVar10,PTR_s_Buff_Lyra_PortalRecentlyUsed_10185adc8);
  local_68[0] = FUN_1003dfe60(lVar5,3,6,0x19,0);
  local_60 = 1;
  (**(code **)(*plVar10 + 0x18))(plVar10,local_68);
  plVar10 = (long *)FUN_100434b18(lVar9);
  plVar10 = (long *)(**(code **)(*plVar10 + 0x30))
                              (plVar10,PTR_s_Buff_Lyra_PortalSpeedBoost_10185add0);
  local_68[0] = FUN_1003dfe60(lVar5,3,9,0x19,0);
  local_60 = 1;
  plVar10 = (long *)(**(code **)(*plVar10 + 0x18))(plVar10,local_68);
  (**(code **)(*plVar10 + 0x30))(plVar10,*(undefined4 *)(lVar5 + 0x260));
  plVar10 = (long *)FUN_10049d314(lVar9);
  (**(code **)(*plVar10 + 0x30))(plVar10,FUN_100444474);
  plVar10 = (long *)FUN_100441e18(lVar9);
  plVar10 = (long *)(**(code **)(*plVar10 + 0x30))();
  plVar10 = (long *)(**(code **)(*plVar10 + 0x38))(plVar10,"Sound_Lyra_Ability_C_Arriving");
  plVar10 = (long *)(**(code **)(*plVar10 + 0x18))(plVar10,"Sound_Lyra_Ability_C_Leaving");
  uVar6 = FUN_1010a1520();
  lVar5 = FUN_1010a0e0c(uVar6,0,"*KindredSoundBalance*",0);
  FUN_1003b77c4(*(undefined4 *)(lVar5 + 0x300));
  (**(code **)(*plVar10 + 0x28))(plVar10);
  lVar5 = FUN_10043ab44(lVar9);
  *(undefined1 *)(lVar5 + 0x58) = 6;
  plVar10 = (long *)FUN_100441e68(lVar5 + 0x10);
  plVar10 = (long *)(**(code **)(*plVar10 + 0x60))();
  (**(code **)(*plVar10 + 0x48))(plVar10,"Effect_Lyra_Portal_Use");
  lVar5 = FUN_10042fdc4(param_1);
  lVar5 = lVar5 + 0x10;
  plVar10 = (long *)FUN_100441e18(lVar5);
  plVar10 = (long *)(**(code **)(*plVar10 + 0x38))(plVar10,"Sound_Lyra_Ability_C_End");
  uVar6 = FUN_1010a1520();
  lVar9 = FUN_1010a0e0c(uVar6,0,"*KindredSoundBalance*",0);
  FUN_1003b77c4(*(undefined4 *)(lVar9 + 0x300));
  (**(code **)(*plVar10 + 0x28))(plVar10);
  plVar10 = (long *)FUN_100441e68(lVar5);
  plVar10 = (long *)(**(code **)(*plVar10 + 0x60))();
  plVar10 = (long *)(**(code **)(*plVar10 + 0x48))(plVar10,"Effect_Lyra_Portal_E_Collapse");
  plVar10 = (long *)(**(code **)(*plVar10 + 0x50))(plVar10,"Effect_Lyra_Portal_A_Collapse");
  (**(code **)(*plVar10 + 0x80))(plVar10,0);
  FUN_100434ac8(lVar5);
  return;
}




void FUN_10040bd24(long param_1)

{
  undefined1 auStack_28 [24];
  
  FUN_100450f38(auStack_28,param_1 + 0x70);
  FUN_100432680(auStack_28);
  return;
}




void FUN_10040bd50(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  
  if (DAT_101d23a38 != '\0') {
    *(undefined4 *)(param_1 + 0x328) = 0x3e4ccccd;
    puVar2 = PTR_s_onBuffIntervalName_10185d558;
    uVar3 = FUN_1004d2524(PTR_s_onBuffIntervalName_10185d558);
    uVar3 = FUN_100015208(puVar2,uVar3,0x12345678);
    *(undefined4 *)(param_1 + 0xa0 + (ulong)*(uint *)(param_1 + 0x160) * 4) = uVar3;
    uVar1 = *(uint *)(param_1 + 0x160);
    *(code **)(param_1 + 0xa0 + (ulong)uVar1 * 8 + 0x40) = FUN_100444804;
    *(uint *)(param_1 + 0x160) = uVar1 + 1;
  }
  return;
}




void FUN_10040bdd0(undefined8 param_1)

{
  code *local_20;
  undefined4 local_18;
  
  local_20 = FUN_100444974;
  local_18 = 3;
  FUN_10043050c(0,0x3f800000,param_1,&local_20);
  return;
}




void FUN_10040be0c(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_10042e498();
  plVar2 = (long *)FUN_10043594c(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))(plVar2,"Ability03_Arrive");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x28))();
  (**(code **)(*plVar2 + 0x18))(plVar2,"AttackToIdle");
  lVar1 = FUN_10042e2c8(param_1);
  plVar2 = (long *)FUN_10049bdb0(lVar1 + 0x10);
  (**(code **)(*plVar2 + 0x30))(plVar2,"Ability03_Arrive");
  FUN_10049d364(lVar1 + 0x10);
  return;
}




void FUN_10040be94(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  ushort *puVar6;
  undefined4 uVar7;
  undefined1 auStack_48 [24];
  
  uVar1 = FUN_100345d90(*(undefined4 *)(param_1 + 0x308));
  lVar2 = FUN_10042e2c8(param_1);
  lVar3 = FUN_10049b9b4(lVar2 + 0x10);
  *(undefined2 *)(lVar3 + 0x10) = 0x20;
  plVar4 = (long *)FUN_10049c148(lVar2 + 0x10);
  (**(code **)(*plVar4 + 0x30))(plVar4,0xb);
  FUN_100450f38(auStack_48,param_1 + 0x90);
  uVar5 = (ulong)DAT_101e94150;
  if (uVar5 == 0xffff) {
    puVar6 = (ushort *)0x0;
  }
  else {
    puVar6 = &DAT_101e48150 + uVar5 * 0x4c;
    if (DAT_101e94150 == DAT_101e94152) {
      DAT_101e94150 = 0xffff;
    }
    else {
      DAT_101e94150 = *puVar6;
    }
    DAT_101e94154 = DAT_101e94154 + 1;
    lVar2 = uVar5 * 0x98;
    *(undefined8 *)(&DAT_101e48158 + lVar2) = 0;
    *(undefined8 *)(&DAT_101e48160 + lVar2) = 0;
    *(undefined ***)puVar6 = &PTR_FUN_1014989f8;
    *(undefined8 *)(&DAT_101e48160 + lVar2) = 0xffffffff00000000;
    DAT_101e94160 = DAT_101e94160 + 1;
    if (DAT_101e94164 < DAT_101e94160) {
      DAT_101e94164 = DAT_101e94160;
    }
  }
  FUN_100450f94(auStack_48,puVar6);
  uVar7 = FUN_1003dfe60(uVar1,2,3,0x19,0);
  *(undefined4 *)(puVar6 + 8) = uVar7;
  uVar7 = FUN_100432d40(param_1);
  *(undefined4 *)(puVar6 + 10) = uVar7;
  return;
}




void FUN_10040c004(long param_1)

{
  undefined4 uVar1;
  byte bVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined1 auStack_c8 [3];
  undefined8 local_c5;
  undefined4 uStack_bd;
  undefined4 uStack_b9;
  undefined4 uStack_b5;
  undefined8 uStack_b1;
  undefined4 local_a8 [6];
  undefined4 local_90;
  undefined7 uStack_8c;
  undefined4 uStack_85;
  undefined4 uStack_81;
  undefined4 uStack_7d;
  undefined8 uStack_79;
  
  FUN_1003461dc(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x10));
  lVar5 = FUN_100345d90();
  *(undefined4 *)(param_1 + 0x328) = 0x3dcccccd;
  fVar9 = (float)FUN_1003dfe60(lVar5,2,4,0x19,0);
  puVar3 = PTR_s_Buff_Lyra_Talent_MobileBulwark_10185cba0;
  lVar6 = FUN_100345d90(*(undefined4 *)(lVar5 + 0x260));
  if ((lVar6 != 0) && (iVar4 = FUN_1003a47d0(lVar6,puVar3), iVar4 != 0)) {
    local_90 = DAT_101d90c18;
    fVar10 = (float)FUN_1003dfee8(lVar5,&local_90,0,9);
    fVar9 = fVar10 + fVar9;
  }
  *(float *)(param_1 + 0x318) = fVar9;
  if (*(float *)(param_1 + 0x31c) < fVar9) {
    *(float *)(param_1 + 0x31c) = fVar9;
  }
  *(uint *)(param_1 + 0x340) =
       *(uint *)(param_1 + 0x340) & 0xfffe0 | (uint)(fVar9 < 0.0) << 4 |
       *(uint *)(param_1 + 0x340) & 0xfff0000f;
  lVar6 = FUN_10042e498(param_1);
  plVar7 = (long *)FUN_100441e18(lVar6 + 0x10);
  plVar7 = (long *)(**(code **)(*plVar7 + 0x38))(plVar7,"Sound_Lyra_Ability_B_Start");
  uVar8 = FUN_1010a1520();
  lVar6 = FUN_1010a0e0c(uVar8,0,"*KindredSoundBalance*",0);
  FUN_1003b77c4(*(undefined4 *)(lVar6 + 0x2fc));
  (**(code **)(*plVar7 + 0x28))(plVar7);
  FUN_100450f38(auStack_c8,param_1 + 0x68);
  iVar4 = FUN_1003a47d0(lVar5,PTR_s_Buff_Lyra_Talent_GythianWard_10185cba8);
  if (iVar4 != 0) {
    lVar6 = FUN_1003e10f0();
    bVar2 = *(byte *)(lVar6 + 0xe5);
    fVar9 = (float)FUN_1003dfe60(lVar5,2,3,0x19,0);
    uStack_79 = 0;
    uStack_81 = 0;
    uStack_7d = 0;
    local_90 = local_90 & 0xffffff;
    uStack_8c = 0;
    uStack_85 = 0;
    lVar6 = FUN_100437600(auStack_c8);
    *(undefined8 *)(lVar6 + 0x18) = 0;
    *(undefined1 *)(lVar6 + 0x20) = 1;
    *(ulong *)(lVar6 + 0x2c) = CONCAT44(uStack_81,uStack_85);
    *(ulong *)(lVar6 + 0x24) = CONCAT71(uStack_8c,local_90._3_1_);
    *(undefined8 *)(lVar6 + 0x38) = uStack_79;
    *(ulong *)(lVar6 + 0x30) = CONCAT44(uStack_7d,uStack_81);
    *(float *)(lVar6 + 0x40) = (fVar9 + 0.75) * (fVar9 + 0.75);
    *(undefined8 *)(lVar6 + 0x4c) = 0x3f800000bf800000;
    *(undefined8 *)(lVar6 + 0x44) = 0xc0000000bf800000;
    *(undefined1 *)(lVar6 + 0x54) = 0xff;
    *(undefined8 *)(lVar6 + 0x60) = 0xffffffff00000000;
    *(undefined8 *)(lVar6 + 0x58) = 0xffffffff00040000;
    *(byte *)(lVar6 + 0x6a) = bVar2 | 0x14;
    *(undefined2 *)(lVar6 + 0x68) = 0xc150;
    *(byte *)(lVar6 + 0x94) = *(byte *)(lVar6 + 0x94) & 0xfc | DAT_101d23a38 != '\0';
    lVar6 = FUN_100431e0c(auStack_c8);
    puVar3 = PTR_s_Buff_Lyra_Talent_WardBarrier_10185cbb0;
    local_a8[0] = DAT_101d90c28;
    uVar11 = FUN_1003dfee8(lVar5,local_a8,0,9);
    uVar1 = *(undefined4 *)(lVar5 + 0x260);
    uVar12 = *(undefined4 *)(*(long *)(*(long *)(param_1 + 0x10) + 0x10) + 0x260);
    *(undefined **)(lVar6 + 0x10) = puVar3;
    *(undefined4 *)(lVar6 + 0x30) = uVar11;
    *(undefined4 *)(lVar6 + 0x34) = 1;
    *(undefined4 *)(lVar6 + 0x38) = uVar1;
    *(undefined4 *)(lVar6 + 0x3c) = 0;
    *(undefined4 *)(lVar6 + 0x40) = 0;
    *(undefined4 *)(lVar6 + 0x44) = uVar12;
    *(undefined4 *)(lVar6 + 0x48) = 0;
    FUN_100431f2c(auStack_c8);
  }
  lVar6 = FUN_10042e2c8(param_1);
  iVar4 = FUN_1003a47d0(lVar5,PTR_s_Buff_Lyra_Talent_MobileBulwark_10185cba0);
  lVar6 = lVar6 + 0x10;
  if (iVar4 == 0) {
    plVar7 = (long *)FUN_100441e68(lVar6);
    plVar7 = (long *)(**(code **)(*plVar7 + 0x60))();
    plVar7 = (long *)(**(code **)(*plVar7 + 0x48))(plVar7,"Effect_Lyra_B_E");
    (**(code **)(*plVar7 + 0x50))(plVar7,"Effect_Lyra_B_A");
  }
  else {
    plVar7 = (long *)FUN_10049ca24(lVar6);
    plVar7 = (long *)(**(code **)(*plVar7 + 0x30))(plVar7,FUN_10048ba98);
    (**(code **)(*plVar7 + 0x18))(plVar7,"CenterBody");
    plVar7 = (long *)FUN_100441e68(lVar6);
    plVar7 = (long *)(**(code **)(*plVar7 + 0x60))();
    plVar7 = (long *)(**(code **)(*plVar7 + 0x48))(plVar7,"Effect_Lyra_B_E");
    plVar7 = (long *)(**(code **)(*plVar7 + 0x50))(plVar7,"Effect_Lyra_B_A");
    (**(code **)(*plVar7 + 0x78))(plVar7,1);
  }
  plVar7 = (long *)FUN_10049d3b4(lVar6);
  plVar7 = (long *)(**(code **)(*plVar7 + 0x48))();
  plVar7 = (long *)(**(code **)(*plVar7 + 0x30))();
  FUN_1003dfe60(lVar5,2,3,0x19,0);
  plVar7 = (long *)(**(code **)(*plVar7 + 0x10))(plVar7);
  (**(code **)(*plVar7 + 0x30))(plVar7,1);
  plVar7 = (long *)FUN_10049b7c4(lVar6);
  plVar7 = (long *)(**(code **)(*plVar7 + 0x30))(plVar7,"Sound_Lyra_Ability_B_Loop");
  uVar8 = FUN_1010a1520();
  lVar6 = FUN_1010a0e0c(uVar8,0,"*KindredSoundBalance*",0);
  FUN_1003b77c4(*(undefined4 *)(lVar6 + 0x2fc));
  (**(code **)(*plVar7 + 0x28))(plVar7);
  FUN_100450f38(local_a8,param_1 + 0x90);
  lVar6 = FUN_1003e10f0();
  bVar2 = *(byte *)(lVar6 + 0xe5);
  fVar9 = (float)FUN_1003dfe60(lVar5,2,3,0x19,0);
  uStack_79 = 0;
  uStack_81 = 0;
  uStack_7d = 0;
  local_90._3_1_ = 0;
  uStack_8c = 0;
  uStack_85 = 0;
  lVar6 = FUN_100437600(local_a8);
  *(undefined8 *)(lVar6 + 0x18) = 0;
  *(undefined1 *)(lVar6 + 0x20) = 1;
  *(ulong *)(lVar6 + 0x2c) = CONCAT44(uStack_81,uStack_85);
  *(ulong *)(lVar6 + 0x24) = CONCAT71(uStack_8c,local_90._3_1_);
  *(undefined8 *)(lVar6 + 0x38) = uStack_79;
  *(ulong *)(lVar6 + 0x30) = CONCAT44(uStack_7d,uStack_81);
  *(ulong *)(lVar6 + 0x40) =
       CONCAT44((fVar9 + -0.75) * (fVar9 + -0.75),(fVar9 + 0.75) * (fVar9 + 0.75));
  *(undefined8 *)(lVar6 + 0x48) = 0xbf800000c0000000;
  *(undefined4 *)(lVar6 + 0x50) = 0x3f800000;
  *(undefined1 *)(lVar6 + 0x54) = 0xff;
  *(undefined8 *)(lVar6 + 0x60) = 0xffffffff00000000;
  *(undefined8 *)(lVar6 + 0x58) = 0xffffffff00040000;
  *(byte *)(lVar6 + 0x6a) = bVar2 | 0x14;
  *(undefined2 *)(lVar6 + 0x68) = 0xc120;
  *(byte *)(lVar6 + 0x94) = *(byte *)(lVar6 + 0x94) & 0xfc | DAT_101d23a38 != '\0';
  lVar6 = FUN_100431e0c(local_a8);
  puVar3 = PTR_s_Buff_Lyra_ImmuneToWall_10185adc0;
  uVar12 = FUN_1003dfe60(lVar5,2,7,0x19,0);
  uVar1 = *(undefined4 *)(lVar5 + 0x260);
  *(undefined **)(lVar6 + 0x10) = puVar3;
  *(undefined4 *)(lVar6 + 0x30) = uVar12;
  *(undefined4 *)(lVar6 + 0x34) = 1;
  *(undefined4 *)(lVar6 + 0x38) = uVar1;
  *(undefined8 *)(lVar6 + 0x3c) = 0;
  *(undefined8 *)(lVar6 + 0x44) = 0;
  *(code **)(lVar6 + 0x50) = FUN_1004449d4;
  lVar6 = FUN_100431e0c(local_a8);
  fVar9 = *(float *)(param_1 + 0x328);
  uVar1 = *(undefined4 *)(lVar5 + 0x260);
  *(undefined **)(lVar6 + 0x10) = PTR_s_Buff_Lyra_WallSlow_10185adb8;
  *(float *)(lVar6 + 0x30) = fVar9 + 0.1;
  *(undefined4 *)(lVar6 + 0x34) = 1;
  *(undefined4 *)(lVar6 + 0x38) = uVar1;
  *(undefined8 *)(lVar6 + 0x44) = 0;
  *(undefined8 *)(lVar6 + 0x3c) = 0;
  FUN_100431f2c(local_a8);
  lVar6 = FUN_1003e10f0();
  bVar2 = *(byte *)(lVar6 + 0xe5);
  fVar9 = (float)FUN_1003dfe60(lVar5,2,3,0x19,0);
  uStack_b1 = 0;
  uStack_b9 = 0;
  uStack_b5 = 0;
  local_c5 = 0;
  uStack_bd = 0;
  lVar6 = FUN_100437600(local_a8);
  *(undefined8 *)(lVar6 + 0x18) = 0;
  *(undefined1 *)(lVar6 + 0x20) = 1;
  *(ulong *)(lVar6 + 0x2c) = CONCAT44(uStack_b9,uStack_bd);
  *(undefined8 *)(lVar6 + 0x24) = local_c5;
  *(undefined8 *)(lVar6 + 0x38) = uStack_b1;
  *(ulong *)(lVar6 + 0x30) = CONCAT44(uStack_b5,uStack_b9);
  *(float *)(lVar6 + 0x40) = (fVar9 + 0.75) * (fVar9 + 0.75);
  *(undefined8 *)(lVar6 + 0x4c) = 0x3f800000bf800000;
  *(undefined8 *)(lVar6 + 0x44) = 0xc0000000bf800000;
  *(undefined1 *)(lVar6 + 0x54) = 0xff;
  *(undefined8 *)(lVar6 + 0x60) = 0xffffffff00000000;
  *(undefined8 *)(lVar6 + 0x58) = 0xffffffff00040000;
  *(byte *)(lVar6 + 0x6a) = bVar2 | 0x14;
  *(undefined2 *)(lVar6 + 0x68) = 0xc120;
  *(byte *)(lVar6 + 0x94) = *(byte *)(lVar6 + 0x94) & 0xfc | DAT_101d23a38 != '\0';
  lVar5 = *(long *)(*(long *)(lVar5 + 0x58) + 0x68);
  if ((lVar5 != 0) && ((*(byte *)(lVar5 + 0x239) & 0x1c) != 0)) {
    lVar5 = FUN_100431e0c(local_a8);
    fVar9 = *(float *)(param_1 + 0x328);
    *(undefined **)(lVar5 + 0x10) = PTR_s_Buff_Lyra_PortalRecentlyUsed_10185adc8;
    *(float *)(lVar5 + 0x30) = fVar9 + 0.1;
    *(undefined8 *)(lVar5 + 0x34) = 0xffffffff00000001;
    *(undefined8 *)(lVar5 + 0x44) = 0;
    *(undefined8 *)(lVar5 + 0x3c) = 0;
    *(code **)(lVar5 + 0x50) = FUN_100444988;
  }
  FUN_100431f2c(local_a8);
  lVar5 = FUN_10042fdc4(param_1);
  plVar7 = (long *)FUN_100441e18(lVar5 + 0x10);
  plVar7 = (long *)(**(code **)(*plVar7 + 0x38))(plVar7,"Sound_Lyra_Ability_B_End");
  uVar8 = FUN_1010a1520();
  lVar6 = FUN_1010a0e0c(uVar8,0,"*KindredSoundBalance*",0);
  FUN_1003b77c4(*(undefined4 *)(lVar6 + 0x2fc));
  plVar7 = (long *)(**(code **)(*plVar7 + 0x28))(plVar7);
  (**(code **)(*plVar7 + 0x38))();
  FUN_100434ac8(lVar5 + 0x10);
  return;
}




void FUN_10040c710(long param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  code *local_30;
  undefined4 local_28;
  
  local_30 = FUN_100444a38;
  local_28 = 3;
  FUN_10042eb40(param_1,&local_30);
  if ((*(byte *)(*(long *)(*(long *)(param_1 + 0x10) + 0x10) + 0x2f4) & 1) == 0) {
    return;
  }
  lVar1 = FUN_10042e498(param_1);
  plVar2 = (long *)FUN_100441e18(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x38))(plVar2,"Sound_Lyra_Ability_B_Impact");
  uVar3 = FUN_1010a1520();
  lVar1 = FUN_1010a0e0c(uVar3,0,"*KindredSoundBalance*",0);
  FUN_1003b77c4(*(undefined4 *)(lVar1 + 0x2fc));
                    /* WARNING: Could not recover jumptable at 0x00010040c7c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x28))(plVar2);
  return;
}




void FUN_10040c7c4(void)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_10042e498();
  FUN_1004386bc(lVar1 + 0x10);
  plVar2 = (long *)FUN_10043ab94(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x40))();
                    /* WARNING: Could not recover jumptable at 0x00010040c810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x38))(plVar2,"Damage",2);
  return;
}




void FUN_10040c814(long param_1)

{
  int iVar1;
  uint uVar2;
  byte bVar3;
  undefined *puVar4;
  undefined4 uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  ushort *puVar11;
  ulong uVar12;
  float fVar13;
  undefined4 uVar14;
  undefined1 auStack_a8 [3];
  undefined8 local_a5;
  undefined4 uStack_9d;
  undefined4 uStack_99;
  undefined4 uStack_95;
  undefined8 uStack_91;
  undefined1 auStack_88 [24];
  
  FUN_1003461dc(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x10));
  lVar6 = FUN_100345d90();
  *(undefined4 *)(param_1 + 0x328) = 0x3dcccccd;
  puVar4 = PTR_s_onBuffIntervalName_10185d558;
  if (DAT_101d23a38 != '\0') {
    uVar5 = FUN_1004d2524(PTR_s_onBuffIntervalName_10185d558);
    uVar5 = FUN_100015208(puVar4,uVar5,0x12345678);
    *(undefined4 *)(param_1 + 0xa0 + (ulong)*(uint *)(param_1 + 0x160) * 4) = uVar5;
    uVar2 = *(uint *)(param_1 + 0x160);
    *(code **)(param_1 + 0xa0 + (ulong)uVar2 * 8 + 0x40) = FUN_100444a4c;
    *(uint *)(param_1 + 0x160) = uVar2 + 1;
  }
  FUN_100450f38(auStack_a8,param_1 + 0x68);
  uVar12 = (ulong)DAT_101e94150;
  if (uVar12 == 0xffff) {
    puVar11 = (ushort *)0x0;
  }
  else {
    puVar11 = &DAT_101e48150 + uVar12 * 0x4c;
    if (DAT_101e94150 == DAT_101e94152) {
      DAT_101e94150 = 0xffff;
    }
    else {
      DAT_101e94150 = *puVar11;
    }
    DAT_101e94154 = DAT_101e94154 + 1;
    *(undefined8 *)(&DAT_101e48158 + uVar12 * 0x98) = 0;
    *(undefined ***)puVar11 = &PTR_FUN_10149bbc8;
    DAT_101e94160 = DAT_101e94160 + 1;
    if (DAT_101e94164 < DAT_101e94160) {
      DAT_101e94164 = DAT_101e94160;
    }
  }
  FUN_100450f94(auStack_a8,puVar11);
  lVar7 = FUN_100431e0c(auStack_a8);
  *(undefined **)(lVar7 + 0x10) = PTR_s_Buff_Lyra_SpiritFlame_DetonateAv_10185cb98;
  *(undefined4 *)(lVar7 + 0x30) = 0xbf800000;
  *(undefined8 *)(lVar7 + 0x34) = 0xffffffff00000001;
  *(undefined8 *)(lVar7 + 0x44) = 0;
  *(undefined8 *)(lVar7 + 0x3c) = 0;
  FUN_100431f2c(auStack_a8);
  lVar7 = FUN_10042fdc4(param_1);
  lVar7 = lVar7 + 0x10;
  FUN_10043aa04(lVar7);
  plVar8 = (long *)FUN_10043b538(lVar7);
  (**(code **)(*plVar8 + 0x30))(plVar8,PTR_s_Buff_Lyra_SpiritFlame_DetonateAv_10185cb98);
  plVar8 = (long *)FUN_100441e18(lVar7);
  plVar8 = (long *)(**(code **)(*plVar8 + 0x38))(plVar8,"Sound_Lyra_Ability_A_Detonation");
  uVar9 = FUN_1010a1520();
  lVar10 = FUN_1010a0e0c(uVar9,0,"*KindredSoundBalance*",0);
  FUN_1003b77c4(*(undefined4 *)(lVar10 + 0x2f8));
  plVar8 = (long *)(**(code **)(*plVar8 + 0x28))(plVar8);
  (**(code **)(*plVar8 + 0x38))();
  plVar8 = (long *)FUN_100441e68(lVar7);
  plVar8 = (long *)(**(code **)(*plVar8 + 0x60))();
  plVar8 = (long *)(**(code **)(*plVar8 + 0x48))(plVar8,"Effect_Lyra_A_Explosion_E");
  plVar8 = (long *)(**(code **)(*plVar8 + 0x50))(plVar8,"Effect_Lyra_A_Explosion_A");
  (**(code **)(*plVar8 + 0x80))(plVar8,0);
  FUN_100450f38(auStack_88,param_1 + 0x80);
  lVar7 = FUN_1003e10f0();
  bVar3 = *(byte *)(lVar7 + 0xe5);
  fVar13 = (float)FUN_1003dfe60(lVar6,0,4,0x19,0);
  uStack_91 = 0;
  uStack_99 = 0;
  uStack_95 = 0;
  local_a5 = 0;
  uStack_9d = 0;
  iVar1 = ((uint)bVar3 << 0x10 | 0x14c120) + 0x30;
  lVar7 = FUN_100437600(auStack_88);
  *(undefined8 *)(lVar7 + 0x18) = 0;
  *(undefined1 *)(lVar7 + 0x20) = 1;
  *(ulong *)(lVar7 + 0x2c) = CONCAT44(uStack_99,uStack_9d);
  *(undefined8 *)(lVar7 + 0x24) = local_a5;
  *(undefined8 *)(lVar7 + 0x38) = uStack_91;
  *(ulong *)(lVar7 + 0x30) = CONCAT44(uStack_95,uStack_99);
  *(float *)(lVar7 + 0x40) = fVar13 * fVar13;
  *(undefined8 *)(lVar7 + 0x4c) = 0x3f800000bf800000;
  *(undefined8 *)(lVar7 + 0x44) = 0xc0000000bf800000;
  *(undefined1 *)(lVar7 + 0x54) = 0xff;
  *(undefined8 *)(lVar7 + 0x60) = 0xffffffff00000000;
  *(undefined8 *)(lVar7 + 0x58) = 0xffffffff00000001;
  *(char *)(lVar7 + 0x6a) = (char)((uint)iVar1 >> 0x10);
  *(short *)(lVar7 + 0x68) = (short)iVar1;
  *(byte *)(lVar7 + 0x94) = *(byte *)(lVar7 + 0x94) & 0xfc | DAT_101d23a38 != '\0';
  lVar7 = FUN_100436378(auStack_88);
  *(code **)(lVar7 + 0x18) = FUN_100445130;
  lVar7 = FUN_100431e0c(auStack_88);
  puVar4 = PTR_s_Buff_Lyra_SpiritFlame_SpeedBoost_10185cb80;
  uVar14 = FUN_1003dfe60(lVar6,0,0x10,0x19,0);
  uVar5 = *(undefined4 *)(lVar6 + 0x260);
  *(undefined **)(lVar7 + 0x10) = puVar4;
  *(undefined4 *)(lVar7 + 0x30) = uVar14;
  *(undefined4 *)(lVar7 + 0x34) = 1;
  *(undefined4 *)(lVar7 + 0x38) = uVar5;
  *(undefined8 *)(lVar7 + 0x3c) = 0;
  *(undefined8 *)(lVar7 + 0x44) = 0;
  FUN_100431f2c(auStack_88);
  lVar7 = FUN_1003e10f0();
  bVar3 = *(byte *)(lVar7 + 0xe5);
  fVar13 = (float)FUN_1003dfe60(lVar6,0,4,0x19,0);
  lVar6 = FUN_100437600(auStack_88);
  *(undefined8 *)(lVar6 + 0x18) = 0;
  *(undefined1 *)(lVar6 + 0x20) = 1;
  *(undefined8 *)(lVar6 + 0x2c) = 0;
  *(undefined8 *)(lVar6 + 0x24) = 0;
  *(undefined8 *)(lVar6 + 0x38) = 0;
  *(undefined8 *)(lVar6 + 0x30) = 0;
  *(float *)(lVar6 + 0x40) = fVar13 * fVar13;
  *(undefined8 *)(lVar6 + 0x4c) = 0x3f800000bf800000;
  *(undefined8 *)(lVar6 + 0x44) = 0xc0000000bf800000;
  *(undefined1 *)(lVar6 + 0x54) = 0xff;
  *(undefined8 *)(lVar6 + 0x60) = 0xffffffff00000000;
  *(undefined8 *)(lVar6 + 0x58) = 0xffffffff00040000;
  *(byte *)(lVar6 + 0x6a) = bVar3 | 0x14;
  *(undefined2 *)(lVar6 + 0x68) = 0xc120;
  *(byte *)(lVar6 + 0x94) = *(byte *)(lVar6 + 0x94) & 0xfc | DAT_101d23a38 != '\0';
  lVar6 = FUN_100440f9c(auStack_88);
  *(code **)(lVar6 + 0x18) = FUN_100445330;
  *(undefined8 *)(lVar6 + 0x20) = 0x200000001;
  *(byte *)(lVar6 + 0x30) = *(byte *)(lVar6 + 0x30) & 0xfe;
  FUN_100431f2c(auStack_88);
  FUN_10043200c(auStack_88);
  FUN_100450f38(auStack_a8,param_1 + 0x98);
  lVar6 = FUN_100431ad4(auStack_a8);
  *(ushort *)(lVar6 + 0x74) = *(ushort *)(lVar6 + 0x74) & 0xff98 | 0x21;
  *(char **)(lVar6 + 0x10) = "Effect_Lyra_A_E";
  *(char **)(lVar6 + 0x18) = "Effect_Lyra_A_A";
  lVar6 = FUN_100431c28(auStack_a8);
  uVar9 = FUN_1010a1520();
  lVar7 = FUN_1010a0e0c(uVar9,0,"*KindredSoundBalance*",0);
  uVar5 = FUN_1003b77c4(*(undefined4 *)(lVar7 + 0x2f8));
  *(char **)(lVar6 + 0x10) = "Sound_Lyra_Ability_A_Loop";
  *(undefined1 *)(lVar6 + 0x38) = 0xff;
  *(undefined4 *)(lVar6 + 0x34) = uVar5;
  *(uint *)(lVar6 + 0x30) = ((int)lVar6 + 0xfe1b7eb0U >> 3) * 0xca1b & 0xffff;
  *(byte *)(lVar6 + 0x39) = *(byte *)(lVar6 + 0x39) & 0x80 | 0x49;
  return;
}




void FUN_10040cd84(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined4 uVar3;
  undefined1 auStack_38 [24];
  
  uVar1 = FUN_100345d90(*(undefined4 *)(param_1 + 0x308));
  FUN_100450f38(auStack_38,param_1 + 0x98);
  lVar2 = FUN_10043255c(auStack_38);
  uVar3 = FUN_1003dfe60(uVar1,0,0xf,0x19,0);
  *(undefined4 *)(lVar2 + 0x10) = 1;
  *(undefined4 *)(lVar2 + 0x14) = uVar3;
  return;
}




void FUN_10040cdf0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined4 uVar4;
  undefined1 auStack_38 [24];
  
  FUN_100450f38(auStack_38,param_1 + 0x98);
  lVar1 = FUN_100431ad4(auStack_38);
  *(char **)(lVar1 + 0x20) = "CenterBody";
  *(char **)(lVar1 + 0x10) = "Effect_Lyra_A_Heal";
  *(code **)(lVar1 + 0x40) = FUN_1004453b8;
  *(undefined4 *)(lVar1 + 0x5c) = 0;
  *(ushort *)(lVar1 + 0x74) = *(ushort *)(lVar1 + 0x74) & 0xfc98 | 0x322;
  lVar1 = FUN_100431c28(auStack_38);
  uVar2 = FUN_1010a1520();
  lVar3 = FUN_1010a0e0c(uVar2,0,"*KindredSoundBalance*",0);
  uVar4 = FUN_1003b77c4(*(undefined4 *)(lVar3 + 0x2f8));
  *(char **)(lVar1 + 0x10) = "Sound_Lyra_Ability_A_Healing";
  *(undefined1 *)(lVar1 + 0x38) = 0xff;
  *(undefined4 *)(lVar1 + 0x34) = uVar4;
  *(uint *)(lVar1 + 0x30) = ((int)lVar1 + 0xfe1b7eb0U >> 3) * 0xca1b & 0xffff;
  *(byte *)(lVar1 + 0x39) = *(byte *)(lVar1 + 0x39) & 0x80 | 0x49;
  FUN_100450f38(auStack_38,param_1 + 0x70);
  FUN_100432680(auStack_38);
  return;
}




void FUN_10040cefc(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined4 uVar4;
  undefined1 auStack_38 [24];
  
  FUN_100450f38(auStack_38,param_1 + 0x98);
  lVar1 = FUN_100431ad4(auStack_38);
  *(char **)(lVar1 + 0x20) = "CenterBody";
  *(char **)(lVar1 + 0x10) = "Effect_Lyra_A_Damage";
  *(code **)(lVar1 + 0x40) = FUN_1004453b8;
  *(undefined4 *)(lVar1 + 0x5c) = 0;
  *(ushort *)(lVar1 + 0x74) = *(ushort *)(lVar1 + 0x74) & 0xfc98 | 0x322;
  lVar1 = FUN_100431c28(auStack_38);
  uVar2 = FUN_1010a1520();
  lVar3 = FUN_1010a0e0c(uVar2,0,"*KindredSoundBalance*",0);
  uVar4 = FUN_1003b77c4(*(undefined4 *)(lVar3 + 0x2f8));
  *(char **)(lVar1 + 0x10) = "Sound_Lyra_Ability_A_Hurting";
  *(undefined1 *)(lVar1 + 0x38) = 0xff;
  *(undefined4 *)(lVar1 + 0x34) = uVar4;
  *(uint *)(lVar1 + 0x30) = ((int)lVar1 + 0xfe1b7eb0U >> 3) * 0xca1b & 0xffff;
  *(byte *)(lVar1 + 0x39) = *(byte *)(lVar1 + 0x39) & 0x80 | 0x49;
  FUN_100450f38(auStack_38,param_1 + 0x70);
  FUN_100432680(auStack_38);
  return;
}




void FUN_10040d008(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  
  lVar2 = FUN_10042e2c8();
  lVar2 = FUN_100451f64(lVar2 + 0x10);
  puVar1 = PTR_s_Ability__Lyra__A_Detonate_101859600;
  *(undefined **)(lVar2 + 0x10) = PTR_s_Ability__Lyra__A_1018595f8;
  *(undefined **)(lVar2 + 0x18) = puVar1;
  lVar2 = FUN_10042fdc4(param_1);
  plVar3 = (long *)FUN_10049c8e4(lVar2 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010040d05c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Ability__Lyra__A_1018595f8);
  return;
}




void FUN_10040d060(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined1 auStack_40 [24];
  undefined4 local_28 [2];
  
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x10);
  FUN_100450f38(auStack_40,param_1 + 0x98);
  lVar1 = FUN_100436e1c(auStack_40);
  local_28[0] = DAT_101d90c18;
  uVar3 = FUN_1003dfee8(uVar2,local_28,1,9);
  *(undefined8 *)(lVar1 + 0x10) = 0x200000005;
  *(undefined4 *)(lVar1 + 0x18) = uVar3;
  return;
}




void FUN_10040d0d0(void)

{
  long lVar1;
  long *plVar2;
  code *local_20;
  undefined4 local_18;
  
  lVar1 = FUN_10042e694();
  *(ushort *)(lVar1 + 0x48) = *(ushort *)(lVar1 + 0x48) | 8;
  *(byte *)(lVar1 + 0x60) = *(byte *)(lVar1 + 0x60) & 0xfc | 1;
  *(undefined4 *)(lVar1 + 0x40) = 0x3c00cd3f;
  plVar2 = (long *)FUN_10043187c(lVar1 + 0x10);
  local_20 = FUN_1004939c0;
  local_18 = 3;
  (**(code **)(*plVar2 + 0x30))(plVar2,&local_20);
  return;
}




void FUN_10040d140(void)

{
  return;
}




void FUN_10040d144(long param_1)

{
  long lVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  undefined1 auStack_50 [24];
  undefined4 local_38 [2];
  
  lVar1 = FUN_100345d90(*(undefined4 *)(param_1 + 0x308));
  FUN_100450f38(auStack_50,param_1 + 0x98);
  lVar2 = *(long *)(lVar1 + 0x40);
  fVar3 = *(float *)(lVar2 + 0x38) + *(float *)(lVar2 + 0xec) * (*(float *)(lVar2 + 0x254) + 1.0);
  fVar4 = (float)NEON_fminnm(fVar3 + fVar3 * *(float *)(lVar2 + 0x1a0),DAT_101e94320);
  fVar3 = DAT_101e94260;
  if (DAT_101e94260 <= fVar4) {
    fVar3 = fVar4;
  }
  local_38[0] = DAT_101d90c28;
  fVar4 = (float)FUN_1003dfee8(lVar1,local_38,1,9);
  FUN_100431d2c(auStack_50);
  lVar1 = FUN_100436680(auStack_50);
  *(undefined4 *)(lVar1 + 0x18) = 2;
  lVar1 = FUN_1004337f4(auStack_50);
  *(undefined4 *)(lVar1 + 0x10) = 4;
  *(float *)(lVar1 + 0x14) = fVar4 * fVar3;
  FUN_100431f2c(auStack_50);
  lVar1 = FUN_10042e2c8(param_1);
  lVar1 = FUN_10049be50(lVar1 + 0x10);
  *(undefined1 *)(lVar1 + 0x2c) = 0x11;
  return;
}




void FUN_10040d234(long param_1)

{
  long lVar1;
  undefined1 auStack_28 [24];
  
  *(code **)(param_1 + 0x330) = FUN_100437424;
  FUN_100450f38(auStack_28,param_1 + 0x80);
  FUN_100431d2c(auStack_28);
  lVar1 = FUN_100431e0c(auStack_28);
  *(undefined **)(lVar1 + 0x10) = PTR_s_Buff_Samuel_EmpoweredAttackAvail_10185b020;
  *(undefined4 *)(lVar1 + 0x30) = 0xbf800000;
  *(undefined8 *)(lVar1 + 0x34) = 0xffffffff00000001;
  *(undefined8 *)(lVar1 + 0x44) = 0;
  *(undefined8 *)(lVar1 + 0x3c) = 0;
  FUN_100431f2c(auStack_28);
  return;
}




void FUN_10040d2a4(long param_1)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  uint uVar4;
  undefined *puVar5;
  undefined4 uVar6;
  int iVar7;
  undefined8 uVar8;
  float *pfVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  undefined4 local_68 [6];
  
  uVar4 = DAT_1018589d8;
  lVar12 = *(long *)(*(long *)(param_1 + 0x10) + 0x10);
  uVar1 = DAT_1018589d8 + 1;
  iVar7 = DAT_1018589d8 + 2;
  if (DAT_101d23a38 == '\0') {
    lVar10 = param_1 + 0x168;
    uVar3 = (ulong)DAT_1018589d8;
    DAT_1018589d8 = DAT_1018589d8 + 2;
    uVar8 = (*(code *)**(undefined8 **)(param_1 + 0x168))(lVar10,PTR_s_left_pfx_id_10185d670);
    pfVar9 = (float *)(**(code **)(*(long *)(param_1 + 0x168) + 0x10))(lVar10,uVar8);
    *pfVar9 = (float)uVar3;
    uVar8 = (*(code *)**(undefined8 **)(param_1 + 0x168))(lVar10,PTR_s_right_pfx_id_10185d678);
    pfVar9 = (float *)(**(code **)(*(long *)(param_1 + 0x168) + 0x10))(lVar10,uVar8);
    *pfVar9 = (float)uVar1;
    puVar5 = PTR_s_onActorRespawnName_10185d680;
    uVar6 = FUN_1004d2524(PTR_s_onActorRespawnName_10185d680);
    uVar6 = FUN_100015208(puVar5,uVar6,0x12345678);
    *(undefined4 *)(param_1 + 0xa0 + (ulong)*(uint *)(param_1 + 0x160) * 4) = uVar6;
    uVar2 = *(uint *)(param_1 + 0x160);
    *(code **)(param_1 + 0xa0 + (ulong)uVar2 * 8 + 0x40) = FUN_100447e0c;
    *(uint *)(param_1 + 0x160) = uVar2 + 1;
    iVar7 = DAT_1018589d8;
  }
  DAT_1018589d8 = iVar7;
  puVar5 = PTR_s_Buff_Samuel_Talent_PowerSiphon_10185cbf0;
  uVar6 = *(undefined4 *)(**(long **)(*(long *)(lVar12 + 0x38) + 0x228) + 8);
  lVar10 = FUN_100345d90(*(undefined4 *)(lVar12 + 0x260));
  if ((lVar10 != 0) && (iVar7 = FUN_1003a47d0(lVar10,puVar5), iVar7 != 0)) {
    local_68[0] = DAT_101d90dac;
    uVar6 = FUN_1003dfee8(lVar12,local_68,1,9);
  }
  lVar12 = FUN_10042e498(param_1);
  plVar11 = (long *)FUN_100441e18(lVar12 + 0x10);
  plVar11 = (long *)(**(code **)(*plVar11 + 0x38))(plVar11,"Sound_Samuel_attack_empowered_ready");
  uVar8 = FUN_1010a1520();
  lVar12 = FUN_1010a0e0c(uVar8,0,"*KindredSoundBalance*",0);
  FUN_1003bcfb0(*(undefined4 *)(lVar12 + 0x30c));
  (**(code **)(*plVar11 + 0x28))(plVar11);
  FUN_100450f38(local_68,param_1 + 0x98);
  lVar12 = FUN_1004432e0(local_68);
  *(undefined **)(lVar12 + 0x10) = PTR_s_Ability__Samuel__EmpoweredAttack_1018596d8;
  lVar12 = FUN_100431ad4(local_68);
  *(char **)(lVar12 + 0x28) = "Bone_Wand_L";
  *(ushort *)(lVar12 + 0x74) = *(ushort *)(lVar12 + 0x74) & 0xff98 | 0x43;
  *(char **)(lVar12 + 0x10) = "Effect_Samuel_EmpoweredAttackAvailable";
  *(uint *)(lVar12 + 0x6c) = uVar4;
  lVar12 = FUN_100431ad4(local_68);
  *(char **)(lVar12 + 0x28) = "Bone_Wand_R";
  *(ushort *)(lVar12 + 0x74) = *(ushort *)(lVar12 + 0x74) & 0xff98 | 0x43;
  *(char **)(lVar12 + 0x10) = "Effect_Samuel_EmpoweredAttackAvailable";
  *(uint *)(lVar12 + 0x6c) = uVar1;
  FUN_100450f38(local_68,param_1 + 0x80);
  FUN_100431d2c(local_68);
  lVar12 = FUN_100431e0c(local_68);
  *(undefined **)(lVar12 + 0x10) = PTR_s_Buff_Samuel_EmpoweredAttackCharg_10185cbb8;
  *(undefined4 *)(lVar12 + 0x30) = uVar6;
  *(undefined8 *)(lVar12 + 0x34) = 0xffffffff00000001;
  *(undefined8 *)(lVar12 + 0x44) = 0;
  *(undefined8 *)(lVar12 + 0x3c) = 0;
  FUN_100431f2c(local_68);
  return;
}




void FUN_10040d53c(void)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined4 local_30 [2];
  undefined4 local_28;
  
  lVar1 = FUN_10042e498();
  plVar2 = (long *)FUN_100441e68(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x68))(plVar2,"CenterBody");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Samuel_EmpoweredAttackBeam");
  local_30[0] = 0x3e4ccccd;
  local_28 = 1;
  plVar2 = (long *)(**(code **)(*plVar2 + 0x60))(plVar2,local_30);
  plVar2 = (long *)(**(code **)(*plVar2 + 0xa8))(plVar2,FUN_100448064);
  (**(code **)(*plVar2 + 0x88))(plVar2,1);
  plVar2 = (long *)FUN_100441e18(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x38))(plVar2,"Sound_Samuel_attack_empowered");
  uVar3 = FUN_1010a1520();
  lVar1 = FUN_1010a0e0c(uVar3,0,"*KindredSoundBalance*",0);
  FUN_1003bcfb0(*(undefined4 *)(lVar1 + 0x310));
  (**(code **)(*plVar2 + 0x28))(plVar2);
  return;
}




void FUN_10040d62c(void)

{
  long lVar1;
  
  lVar1 = FUN_10042e2c8();
  lVar1 = FUN_10049be00(lVar1 + 0x10);
  *(undefined4 *)(lVar1 + 0x58) = 1;
  *(code **)(lVar1 + 0x10) = FUN_1004480bc;
  *(undefined4 *)(lVar1 + 0x18) = 3;
  return;
}




void FUN_10040d664(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  
  lVar1 = FUN_10042e2c8();
  lVar1 = lVar1 + 0x10;
  lVar2 = FUN_10049d090(lVar1);
  *(undefined4 *)(lVar2 + 0x28) = 2;
  *(code **)(lVar2 + 0x20) = FUN_100458ac4;
  plVar3 = (long *)FUN_10049bdb0(lVar1);
  (**(code **)(*plVar3 + 0x30))(plVar3,"Ability01");
  FUN_10049d364(lVar1);
  return;
}




void FUN_10040d6c0(long param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined1 auStack_68 [24];
  
  FUN_1003461dc(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x10));
  lVar3 = FUN_100345d90();
  fVar7 = (float)FUN_1003dfe60(lVar3,3,4,0x19,0);
  *(float *)(param_1 + 0x318) = fVar7;
  if (*(float *)(param_1 + 0x31c) < fVar7) {
    *(float *)(param_1 + 0x31c) = fVar7;
  }
  *(uint *)(param_1 + 0x340) =
       *(uint *)(param_1 + 0x340) & 0xfffe0 | (uint)(fVar7 < 0.0) << 4 |
       *(uint *)(param_1 + 0x340) & 0xfff0000f;
  lVar4 = FUN_10042e498(param_1);
  plVar5 = (long *)FUN_100441e68(lVar4 + 0x10);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x60))();
  plVar5 = (long *)(**(code **)(*plVar5 + 0x48))(plVar5,"Effect_Samuel_B_DarkFieldForming_E");
  plVar5 = (long *)(**(code **)(*plVar5 + 0x50))(plVar5,"Effect_Samuel_B_DarkFieldForming_A");
  (**(code **)(*plVar5 + 0x78))(plVar5,1);
  plVar5 = (long *)FUN_100441e18(lVar4 + 0x10);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x38))(plVar5,"Sound_Samuel_ability_b_cast");
  uVar6 = FUN_1010a1520();
  lVar4 = FUN_1010a0e0c(uVar6,0,"*KindredSoundBalance*",0);
  FUN_1003bcfb0(*(undefined4 *)(lVar4 + 0x318));
  (**(code **)(*plVar5 + 0x28))(plVar5);
  FUN_100450f38(auStack_68,param_1 + 0x88);
  lVar4 = *(long *)(*(long *)(lVar3 + 0x58) + 0x68);
  if (lVar4 == 0) {
    fVar7 = 0.0;
  }
  else {
    fVar7 = (float)FUN_10045f34c(lVar4 + 0x220);
  }
  fVar8 = (float)FUN_1003dfe60(lVar3,3,5,0x19,0);
  FUN_100431d2c(auStack_68);
  lVar4 = FUN_100431e0c(auStack_68);
  puVar2 = PTR_s_Buff_Samuel_B_DarkField_10185cbc0;
  uVar1 = *(undefined4 *)(lVar3 + 0x260);
  uVar6 = FUN_100432e08(param_1);
  uVar10 = FUN_100432da4(param_1);
  uVar9 = _atan2f(uVar6,uVar10);
  *(undefined **)(lVar4 + 0x10) = puVar2;
  *(float *)(lVar4 + 0x30) = fVar7 / fVar8;
  *(undefined4 *)(lVar4 + 0x34) = 1;
  *(undefined4 *)(lVar4 + 0x38) = uVar1;
  *(undefined4 *)(lVar4 + 0x3c) = uVar9;
  *(undefined4 *)(lVar4 + 0x48) = 0;
  *(undefined8 *)(lVar4 + 0x40) = 0;
  FUN_100431f2c(auStack_68);
  return;
}




void FUN_10040d8ac(long param_1)

{
  uint uVar1;
  byte bVar2;
  bool bVar3;
  undefined *puVar4;
  undefined4 uVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  float fVar12;
  undefined4 uVar13;
  undefined4 local_90;
  undefined7 uStack_8c;
  undefined4 uStack_85;
  undefined4 uStack_81;
  undefined4 uStack_7d;
  undefined8 uStack_79;
  undefined1 auStack_70 [24];
  undefined4 local_58 [2];
  
  uVar7 = FUN_1003461dc(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x10));
  uVar8 = FUN_100345d90();
  *(undefined4 *)(param_1 + 0x328) = 0x3f000000;
  puVar4 = PTR_s_onBuffIntervalName_10185d558;
  if (DAT_101d23a38 != '\0') {
    uVar5 = FUN_1004d2524(PTR_s_onBuffIntervalName_10185d558);
    uVar5 = FUN_100015208(puVar4,uVar5,0x12345678);
    *(undefined4 *)(param_1 + 0xa0 + (ulong)*(uint *)(param_1 + 0x160) * 4) = uVar5;
    uVar1 = *(uint *)(param_1 + 0x160);
    *(code **)(param_1 + 0xa0 + (ulong)uVar1 * 8 + 0x40) = FUN_1004480d0;
    *(uint *)(param_1 + 0x160) = uVar1 + 1;
  }
  puVar4 = PTR_s_Buff_Samuel_Talent_ViscousDarkne_10185cbf8;
  lVar9 = FUN_100345d90(uVar7);
  if ((lVar9 == 0) || (iVar6 = FUN_1003a47d0(lVar9,puVar4), iVar6 == 0)) {
    bVar3 = false;
  }
  else {
    local_90 = DAT_101d90d9c;
    fVar12 = (float)FUN_1003dfee8(uVar8,&local_90,2,9);
    *(float *)(param_1 + 0x318) = fVar12;
    if (*(float *)(param_1 + 0x31c) < fVar12) {
      *(float *)(param_1 + 0x31c) = fVar12;
    }
    *(uint *)(param_1 + 0x340) =
         *(uint *)(param_1 + 0x340) & 0xfffe0 | (uint)(fVar12 < 0.0) << 4 |
         *(uint *)(param_1 + 0x340) & 0xfff0000f;
    bVar3 = true;
  }
  lVar9 = FUN_10042e498(param_1);
  FUN_1004386bc(lVar9 + 0x10);
  plVar10 = (long *)FUN_10049bd10(lVar9 + 0x10);
  (**(code **)(*plVar10 + 0x30))(plVar10,FUN_1004481ac);
  FUN_100450f38(&local_90,param_1 + 0x98);
  lVar9 = FUN_100431ad4(&local_90);
  *(ushort *)(lVar9 + 0x74) = *(ushort *)(lVar9 + 0x74) & 0xff98 | 0x21;
  *(char **)(lVar9 + 0x10) = "Effect_Samuel_B_DarkField_E";
  *(char **)(lVar9 + 0x18) = "Effect_Samuel_B_DarkField_A";
  lVar9 = FUN_100431c28(&local_90);
  uVar7 = FUN_1010a1520();
  lVar11 = FUN_1010a0e0c(uVar7,0,"*KindredSoundBalance*",0);
  uVar5 = FUN_1003bcfb0(*(undefined4 *)(lVar11 + 0x318));
  *(char **)(lVar9 + 0x10) = "Sound_Samuel_ability_b_loop";
  *(undefined1 *)(lVar9 + 0x38) = 0xff;
  *(undefined4 *)(lVar9 + 0x34) = uVar5;
  *(uint *)(lVar9 + 0x30) = ((int)lVar9 + 0xfe1b7eb0U >> 3) * 0xca1b & 0xffff;
  *(byte *)(lVar9 + 0x39) = *(byte *)(lVar9 + 0x39) & 0x80 | 0x49;
  FUN_100450f38(auStack_70,param_1 + 0x90);
  lVar9 = FUN_1003e10f0();
  bVar2 = *(byte *)(lVar9 + 0xe5);
  fVar12 = (float)FUN_1003dfe60(uVar8,3,6,0x19,0);
  uStack_79 = 0;
  uStack_81 = 0;
  uStack_7d = 0;
  local_90._3_1_ = 0;
  uStack_8c = 0;
  uStack_85 = 0;
  lVar9 = FUN_100437600(auStack_70);
  *(undefined8 *)(lVar9 + 0x18) = 0;
  *(undefined1 *)(lVar9 + 0x20) = 1;
  *(ulong *)(lVar9 + 0x2c) = CONCAT44(uStack_81,uStack_85);
  *(ulong *)(lVar9 + 0x24) = CONCAT71(uStack_8c,local_90._3_1_);
  *(undefined8 *)(lVar9 + 0x38) = uStack_79;
  *(ulong *)(lVar9 + 0x30) = CONCAT44(uStack_7d,uStack_81);
  *(float *)(lVar9 + 0x40) = fVar12 * fVar12;
  *(undefined8 *)(lVar9 + 0x4c) = 0x3f800000bf800000;
  *(undefined8 *)(lVar9 + 0x44) = 0xc0000000bf800000;
  *(undefined1 *)(lVar9 + 0x54) = 0xff;
  *(undefined8 *)(lVar9 + 0x60) = 0xffffffff00000000;
  *(undefined8 *)(lVar9 + 0x58) = 0xffffffff00040000;
  *(byte *)(lVar9 + 0x6a) = bVar2 | 0x14;
  *(undefined2 *)(lVar9 + 0x68) = 0xc120;
  *(byte *)(lVar9 + 0x94) = *(byte *)(lVar9 + 0x94) & 0xfc | DAT_101d23a38 != '\0';
  lVar9 = FUN_100440f9c(auStack_70);
  *(code **)(lVar9 + 0x18) = FUN_1004482d4;
  *(undefined8 *)(lVar9 + 0x20) = 0x200000001;
  *(byte *)(lVar9 + 0x30) = *(byte *)(lVar9 + 0x30) & 0xfe | 4;
  lVar9 = FUN_100431e0c(auStack_70);
  fVar12 = *(float *)(param_1 + 0x328);
  *(undefined **)(lVar9 + 0x10) = PTR_s_Buff_Samuel_B_PlayDamageSfx_10185cbd0;
  *(float *)(lVar9 + 0x30) = fVar12 + 0.1;
  *(undefined8 *)(lVar9 + 0x34) = 0xffffffff00000001;
  *(undefined8 *)(lVar9 + 0x44) = 0;
  *(undefined8 *)(lVar9 + 0x3c) = 0;
  if (bVar3) {
    lVar9 = FUN_100431e0c(auStack_70);
    puVar4 = PTR_s_Buff_SlowUsingBuffVar_10185bde0;
    uVar5 = *(undefined4 *)(param_1 + 0x308);
    local_58[0] = DAT_101d90d9c;
    uVar13 = FUN_1003dfee8(uVar8,local_58,4,9);
    *(undefined **)(lVar9 + 0x10) = puVar4;
    *(undefined8 *)(lVar9 + 0x30) = 0x13f800000;
    *(undefined4 *)(lVar9 + 0x38) = uVar5;
    *(undefined4 *)(lVar9 + 0x3c) = uVar13;
    *(undefined4 *)(lVar9 + 0x48) = 0;
    *(undefined8 *)(lVar9 + 0x40) = 0;
  }
  lVar9 = FUN_100435fb4(auStack_70);
  *(code **)(lVar9 + 0x10) = FUN_1004483b8;
  FUN_100431f2c(auStack_70);
  lVar9 = FUN_10042fdc4(param_1);
  plVar10 = (long *)FUN_100441e18(lVar9 + 0x10);
  plVar10 = (long *)(**(code **)(*plVar10 + 0x38))(plVar10,"Sound_Samuel_ability_b_end");
  uVar7 = FUN_1010a1520();
  lVar11 = FUN_1010a0e0c(uVar7,0,"*KindredSoundBalance*",0);
  FUN_1003bcfb0(*(undefined4 *)(lVar11 + 0x318));
  (**(code **)(*plVar10 + 0x28))(plVar10);
  FUN_100434ac8(lVar9 + 0x10);
  return;
}




void FUN_10040dcdc(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  
  lVar2 = FUN_10042e2c8();
  lVar3 = FUN_100451f64(lVar2 + 0x10);
  puVar1 = PTR_s_Ability__Samuel__A_Empowered_1018596e8;
  *(undefined **)(lVar3 + 0x10) = PTR_s_Ability__Samuel__A_1018596e0;
  *(undefined **)(lVar3 + 0x18) = puVar1;
  plVar4 = (long *)FUN_10049b7c4(lVar2 + 0x10);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x30))(plVar4,"Sound_Samuel_ability_b_drain_loop");
  uVar5 = FUN_1010a1520();
  lVar2 = FUN_1010a0e0c(uVar5,0,"*KindredSoundBalance*",0);
  FUN_1003bcfb0(*(undefined4 *)(lVar2 + 0x318));
  (**(code **)(*plVar4 + 0x28))(plVar4);
  lVar2 = FUN_10042e3b0(param_1);
  FUN_10049b814(lVar2 + 0x10);
  return;
}




void FUN_10040dd78(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  
  lVar1 = FUN_10042e2c8();
  plVar2 = (long *)FUN_10049b7c4(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))(plVar2,"Sound_Samuel_ability_b_hit_loop");
  uVar3 = FUN_1010a1520();
  lVar1 = FUN_1010a0e0c(uVar3,0,"*KindredSoundBalance*",0);
  FUN_1003bcfb0(*(undefined4 *)(lVar1 + 0x318));
  (**(code **)(*plVar2 + 0x28))(plVar2);
  lVar1 = FUN_10042e3b0(param_1);
  FUN_10049b814(lVar1 + 0x10);
  return;
}




void FUN_10040ddf4(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  undefined1 auStack_48 [24];
  
  FUN_1003461dc(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x10));
  uVar1 = FUN_100345d90();
  fVar3 = (float)FUN_1003dfe60(uVar1,4,2,0x19,0);
  fVar4 = (float)FUN_1003dfe60(uVar1,4,3,0x19,0);
  fVar4 = fVar4 + fVar3;
  *(float *)(param_1 + 0x318) = fVar4;
  if (*(float *)(param_1 + 0x31c) < fVar4) {
    *(float *)(param_1 + 0x31c) = fVar4;
  }
  *(uint *)(param_1 + 0x340) =
       *(uint *)(param_1 + 0x340) & 0xfffe0 | (uint)(fVar4 < 0.0) << 4 |
       *(uint *)(param_1 + 0x340) & 0xfff0000f;
  FUN_100450f38(auStack_48,param_1 + 0x68);
  lVar2 = FUN_100436540(auStack_48);
  *(char **)(lVar2 + 0x10) = "Effect_Samuel_C_Warning_E";
  *(char **)(lVar2 + 0x18) = "Effect_Samuel_C_Warning_A";
  *(ushort *)(lVar2 + 0x74) = *(ushort *)(lVar2 + 0x74) & 0xff80 | 0x29;
  FUN_100450f38(auStack_48,param_1 + 0x80);
  FUN_10043200c(auStack_48);
  return;
}




void FUN_10040deec(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  
  *(undefined4 *)(param_1 + 0x328) = 0x3f000000;
  FUN_100435a7c(param_1,0x1f,"Effect_Sleep","OverHead");
  puVar2 = PTR_s_Buff_Samuel_Talent_UnwakingNight_10185cbe8;
  if (DAT_101d23a38 != '\0') {
    lVar4 = FUN_100345d90(*(undefined4 *)(param_1 + 0x308));
    if ((lVar4 == 0) || (uVar5 = FUN_1003a47d0(lVar4,puVar2), (uVar5 & 1) == 0)) {
      puVar2 = PTR_s_onAfterApplyDamageName_10185d578;
      uVar3 = FUN_1004d2524(PTR_s_onAfterApplyDamageName_10185d578);
      uVar3 = FUN_100015208(puVar2,uVar3,0x12345678);
      *(undefined4 *)(param_1 + 0xa0 + (ulong)*(uint *)(param_1 + 0x160) * 4) = uVar3;
      uVar1 = *(uint *)(param_1 + 0x160);
      *(code **)(param_1 + 0xa0 + (ulong)uVar1 * 8 + 0x40) = FUN_100448600;
      *(uint *)(param_1 + 0x160) = uVar1 + 1;
    }
  }
  lVar4 = FUN_10042e498(param_1);
  lVar4 = lVar4 + 0x10;
  plVar6 = (long *)FUN_1004385a0(lVar4);
  (**(code **)(*plVar6 + 0x38))();
  FUN_10049c260(lVar4);
  lVar4 = FUN_10043aaf4(lVar4);
  *(code **)(lVar4 + 0x10) = FUN_1004486e8;
  lVar4 = FUN_10042e2c8(param_1);
  plVar6 = (long *)FUN_10049b7c4(lVar4 + 0x10);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x30))(plVar6,"Sound_Samuel_ability_c_loop");
  uVar7 = FUN_1010a1520();
  lVar8 = FUN_1010a0e0c(uVar7,0,"*KindredSoundBalance*",0);
  FUN_1003bcfb0(*(undefined4 *)(lVar8 + 800));
  (**(code **)(*plVar6 + 0x28))(plVar6);
  plVar6 = (long *)FUN_10049c148(lVar4 + 0x10);
  (**(code **)(*plVar6 + 0x30))(plVar6,4);
  lVar4 = FUN_10042fdc4(param_1);
  plVar6 = (long *)FUN_10043594c(lVar4 + 0x10);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x30))(plVar6,"Idle");
  plVar6 = (long *)(**(code **)(*plVar6 + 0x20))();
  (**(code **)(*plVar6 + 0x28))();
  plVar6 = (long *)FUN_100441e18(lVar4 + 0x10);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x38))(plVar6,"Sound_Samuel_ability_c_end");
  uVar7 = FUN_1010a1520();
  lVar4 = FUN_1010a0e0c(uVar7,0,"*KindredSoundBalance*",0);
  FUN_1003bcfb0(*(undefined4 *)(lVar4 + 0x31c));
                    /* WARNING: Could not recover jumptable at 0x00010040e0e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar6 + 0x28))(plVar6);
  return;
}




void FUN_10040e0e4(void)

{
  char cVar1;
  long lVar2;
  uint uVar3;
  char *pcVar4;
  
  lVar2 = FUN_10042e2c8();
  lVar2 = FUN_10049bf40(lVar2 + 0x10);
  if (PTR_s_Ability__Samuel__C_1018596f8 == (undefined *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = 0x811c9dc5;
    cVar1 = *PTR_s_Ability__Samuel__C_1018596f8;
    pcVar4 = PTR_s_Ability__Samuel__C_1018596f8;
    while (cVar1 != '\0') {
      pcVar4 = pcVar4 + 1;
      uVar3 = (uVar3 ^ (int)cVar1) * 0x1000193;
      cVar1 = *pcVar4;
    }
  }
  *(uint *)(lVar2 + 0x20) = uVar3;
  *(code **)(lVar2 + 0x10) = FUN_100494a1c;
  *(undefined4 *)(lVar2 + 0x18) = 3;
  *(undefined4 *)(lVar2 + 0x28) = 1;
  return;
}




void FUN_10040e164(void)

{
  return;
}




void FUN_10040e168(void)

{
  return;
}




void FUN_10040e16c(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  long lVar4;
  undefined1 auStack_38 [24];
  
  puVar2 = PTR_s_onActorLevelUpName_10185d598;
  if (DAT_101d23a38 != '\0') {
    uVar3 = FUN_1004d2524(PTR_s_onActorLevelUpName_10185d598);
    uVar3 = FUN_100015208(puVar2,uVar3,0x12345678);
    *(undefined4 *)(param_1 + 0xa0 + (ulong)*(uint *)(param_1 + 0x160) * 4) = uVar3;
    uVar1 = *(uint *)(param_1 + 0x160);
    *(code **)(param_1 + 0xa0 + (ulong)uVar1 * 8 + 0x40) = FUN_100445620;
    *(uint *)(param_1 + 0x160) = uVar1 + 1;
  }
  FUN_100450f38(auStack_38,param_1 + 0x68);
  FUN_100431d2c(auStack_38);
  lVar4 = FUN_100431e0c(auStack_38);
  *(undefined **)(lVar4 + 0x10) = PTR_s_Buff_Ozo_HealAmp_10185cc08;
  *(undefined4 *)(lVar4 + 0x30) = 0xbf800000;
  *(undefined8 *)(lVar4 + 0x34) = 0xffffffff00000001;
  *(undefined8 *)(lVar4 + 0x44) = 0;
  *(undefined8 *)(lVar4 + 0x3c) = 0;
  FUN_100431f2c(auStack_38);
  return;
}




void FUN_10040e234(long param_1)

{
  long lVar1;
  ulong uVar2;
  ushort *puVar3;
  undefined1 auStack_38 [24];
  
  FUN_100450f38(auStack_38,param_1 + 0x98);
  uVar2 = (ulong)DAT_101e94150;
  if (uVar2 == 0xffff) {
    puVar3 = (ushort *)0x0;
  }
  else {
    puVar3 = &DAT_101e48150 + uVar2 * 0x4c;
    if (DAT_101e94150 == DAT_101e94152) {
      DAT_101e94150 = 0xffff;
    }
    else {
      DAT_101e94150 = *puVar3;
    }
    DAT_101e94154 = DAT_101e94154 + 1;
    lVar1 = uVar2 * 0x98;
    *(undefined8 *)(&DAT_101e48160 + lVar1) = 0;
    *(undefined8 *)(&DAT_101e48158 + lVar1) = 0;
    *(undefined8 *)(&DAT_101e48170 + lVar1) = 0;
    *(undefined8 *)(&DAT_101e48168 + lVar1) = 0;
    *(undefined8 *)(&DAT_101e48178 + lVar1) = 0;
    *(undefined ***)puVar3 = &PTR_FUN_1014985e8;
    *(undefined8 *)(&DAT_101e48160 + lVar1) = 0;
    *(undefined8 *)(&DAT_101e48168 + lVar1) = 0;
    *(undefined4 *)(&DAT_101e48170 + lVar1) = 0;
    *(undefined8 *)(&DAT_101e48174 + lVar1) = 0x40000002d;
    DAT_101e94160 = DAT_101e94160 + 1;
    if (DAT_101e94164 < DAT_101e94160) {
      DAT_101e94164 = DAT_101e94160;
    }
  }
  FUN_100450f94(auStack_38,puVar3);
  puVar3[0x12] = 0x23;
  puVar3[0x13] = 0;
  puVar3[0x14] = 2;
  puVar3[0x15] = 0;
  *(code **)(puVar3 + 8) = FUN_1004456c4;
  *(code **)(puVar3 + 0xc) = FUN_1004456d8;
  return;
}




void FUN_10040e368(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  
  lVar2 = FUN_10042e2c8();
  lVar2 = FUN_100451f64(lVar2 + 0x10);
  puVar1 = PTR_s_Ability__Ozo__A2_101859638;
  *(undefined **)(lVar2 + 0x10) = PTR_s_Ability__Ozo__A1_101859630;
  *(undefined **)(lVar2 + 0x18) = puVar1;
  lVar2 = FUN_1004303b0(param_1);
  plVar3 = (long *)FUN_10049c8e4(lVar2 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010040e3bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Ability__Ozo__A1_101859630);
  return;
}




void FUN_10040e3c0(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  
  lVar2 = FUN_10042e2c8();
  lVar2 = FUN_100451f64(lVar2 + 0x10);
  puVar1 = PTR_s_Ability__Ozo__A3_101859640;
  *(undefined **)(lVar2 + 0x10) = PTR_s_Ability__Ozo__A1_101859630;
  *(undefined **)(lVar2 + 0x18) = puVar1;
  lVar2 = FUN_10042fdc4(param_1);
  plVar3 = (long *)FUN_10049c8e4(lVar2 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010040e414. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Ability__Ozo__A1_101859630);
  return;
}




void FUN_10040e418(void)

{
  return;
}




void FUN_10040e41c(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  long lVar6;
  undefined1 auStack_48 [24];
  
  if (DAT_101d23a38 == '\0') {
    *(undefined4 *)(param_1 + 0x328) = 0x3d4ccccd;
    puVar2 = PTR_s_shownBounceModal_10185d658;
    uVar3 = FUN_1004d2524(PTR_s_shownBounceModal_10185d658);
    uVar4 = FUN_100015208(puVar2,uVar3,0x12345678);
    uVar4 = (**(code **)(*(long *)(param_1 + 0x168) + 8))(param_1 + 0x168,uVar4);
    puVar5 = (undefined1 *)(**(code **)(*(long *)(param_1 + 0x168) + 0x10))(param_1 + 0x168,uVar4);
    *puVar5 = 0;
    puVar2 = PTR_s_onBuffIntervalName_10185d558;
    uVar3 = FUN_1004d2524(PTR_s_onBuffIntervalName_10185d558);
    uVar3 = FUN_100015208(puVar2,uVar3,0x12345678);
    *(undefined4 *)(param_1 + 0xa0 + (ulong)*(uint *)(param_1 + 0x160) * 4) = uVar3;
    uVar1 = *(uint *)(param_1 + 0x160);
    *(code **)(param_1 + 0xe0 + (ulong)uVar1 * 8) = FUN_1004456e4;
    *(uint *)(param_1 + 0x160) = uVar1 + 1;
    puVar2 = PTR_s_onTimeoutName_10185d538;
    uVar3 = FUN_1004d2524(PTR_s_onTimeoutName_10185d538);
    uVar3 = FUN_100015208(puVar2,uVar3,0x12345678);
    *(undefined4 *)(param_1 + 0xa0 + (ulong)*(uint *)(param_1 + 0x160) * 4) = uVar3;
    uVar1 = *(uint *)(param_1 + 0x160);
    *(code **)(param_1 + 0xe0 + (ulong)uVar1 * 8) = FUN_10044599c;
    *(uint *)(param_1 + 0x160) = uVar1 + 1;
  }
  FUN_100450f38(auStack_48,param_1 + 0x98);
  lVar6 = FUN_100445aa0(auStack_48);
  puVar2 = PTR_s_Ability__Ozo__B_QueueBounce_101859650;
  *(undefined **)(lVar6 + 0x10) = PTR_s_Ability__Ozo__B_101859648;
  *(undefined **)(lVar6 + 0x18) = puVar2;
  return;
}




void FUN_10040e56c(long param_1)

{
  undefined1 auStack_28 [24];
  
  FUN_100450f38(auStack_28,param_1 + 0x98);
  FUN_10043599c(auStack_28);
  return;
}




void FUN_10040e598(long param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  undefined4 local_48 [6];
  
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x10);
  fVar4 = (float)FUN_1003dfe60(uVar3,3,0x10,0x19,0);
  iVar1 = FUN_1003a47d0(uVar3,PTR_s_Buff_Ozo_Talent_SecondWind_10185ae50);
  if (iVar1 != 0) {
    local_48[0] = DAT_101d90c54;
    fVar5 = (float)FUN_1003dfee8(uVar3,local_48,1,9);
    fVar4 = fVar5 * fVar4;
  }
  FUN_100450f38(local_48,param_1 + 0x98);
  lVar2 = FUN_1004337f4(local_48);
  *(undefined4 *)(lVar2 + 0x10) = 5;
  *(float *)(lVar2 + 0x14) = fVar4;
  FUN_100450f38(local_48,param_1 + 0x70);
  FUN_100432680(local_48);
  return;
}




void FUN_10040e654(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  long lVar4;
  long *plVar5;
  char *pcVar6;
  undefined1 auStack_48 [24];
  
  lVar4 = FUN_100345d90(*(undefined4 *)(param_1 + 0x308));
  puVar2 = PTR_s_onActorDieName_10185d5b0;
  if (DAT_101d23a38 != '\0') {
    uVar3 = FUN_1004d2524(PTR_s_onActorDieName_10185d5b0);
    uVar3 = FUN_100015208(puVar2,uVar3,0x12345678);
    *(undefined4 *)(param_1 + 0xa0 + (ulong)*(uint *)(param_1 + 0x160) * 4) = uVar3;
    uVar1 = *(uint *)(param_1 + 0x160);
    *(code **)(param_1 + 0xa0 + (ulong)uVar1 * 8 + 0x40) = FUN_100445b84;
    *(uint *)(param_1 + 0x160) = uVar1 + 1;
  }
  FUN_100450f38(auStack_48,param_1 + 0x68);
  plVar5 = (long *)(lVar4 + 0x18);
  do {
    lVar4 = *plVar5;
    plVar5 = (long *)(lVar4 + 0x20);
  } while (*(int *)(*(long *)(lVar4 + 8) + 0xa4) != DAT_10184daa8);
  lVar4 = *(long *)(lVar4 + 0x28);
  if (lVar4 == 0) {
    pcVar6 = "Effect_Ozo_B_BounceTarget_2";
  }
  else {
    do {
      if ((*(int *)(lVar4 + 0x314) == DAT_101d2ca2c) &&
         (pcVar6 = "Effect_Ozo_B_BounceTarget_3", *(int *)(lVar4 + 0x310) == 0)) break;
      lVar4 = *(long *)(lVar4 + 0x350);
      pcVar6 = "Effect_Ozo_B_BounceTarget_2";
    } while (lVar4 != 0);
  }
  lVar4 = FUN_10043749c(auStack_48);
  *(undefined4 *)(lVar4 + 0x78) = 2;
  *(char **)(lVar4 + 0x10) = pcVar6;
  *(ushort *)(lVar4 + 0x74) = *(ushort *)(lVar4 + 0x74) & 0xff90 | 0x29;
  return;
}




void FUN_10040e78c(void)

{
  return;
}




void FUN_10040e790(long param_1)

{
  undefined1 auStack_28 [24];
  
  FUN_100450f38(auStack_28,param_1 + 0x70);
  FUN_100432680(auStack_28);
  return;
}




void FUN_10040e7bc(undefined8 param_1)

{
  code *local_20;
  undefined4 local_18;
  
  local_20 = FUN_100445bf8;
  local_18 = 3;
  FUN_10042feac(0,0x3f800000,param_1,&local_20);
  return;
}




void FUN_10040e7f8(undefined8 param_1)

{
  code *local_20;
  undefined4 local_18;
  
  local_20 = FUN_100445c0c;
  local_18 = 3;
  FUN_10043050c(0,0x3f800000,param_1,&local_20);
  return;
}




void FUN_10040e834(long param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined1 auStack_38 [24];
  
  FUN_100450f38(auStack_38,param_1 + 0x98);
  lVar1 = FUN_1004432e0(auStack_38);
  *(undefined **)(lVar1 + 0x10) = PTR_s_Ability__Ozo__C_Finisher_101859678;
  lVar1 = FUN_10042e2c8(param_1);
  lVar1 = lVar1 + 0x10;
  lVar2 = FUN_10049b9b4(lVar1);
  *(undefined2 *)(lVar2 + 0x10) = 2;
  plVar3 = (long *)FUN_10049c404(lVar1);
  (**(code **)(*plVar3 + 0x30))(plVar3,0x52);
  lVar2 = FUN_10049be00(lVar1);
  *(undefined4 *)(lVar2 + 0x58) = 1;
  *(code **)(lVar2 + 0x10) = FUN_100445c80;
  *(undefined4 *)(lVar2 + 0x18) = 3;
  FUN_10049d364(lVar1);
  plVar3 = (long *)FUN_10049bdb0(lVar1);
  (**(code **)(*plVar3 + 0x30))(plVar3,"Ability03_Travel");
  plVar3 = (long *)FUN_100441e68(lVar1);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x60))();
  (**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Ozo_C_Spinball");
  return;
}




void FUN_10040e91c(void)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_10042e2c8();
  plVar2 = (long *)FUN_100441e68(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x68))(plVar2,"OverHead");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Ozo_C_Target");
  (**(code **)(*plVar2 + 0xb0))(plVar2,1);
  plVar2 = (long *)FUN_100433e34(lVar1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010040e990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_RevealToBestowersTeamTrueSi_10185b3a0);
  return;
}




void FUN_10040e994(void)

{
  return;
}




void FUN_10040e998(void)

{
  return;
}




void FUN_10040e99c(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  uint uVar4;
  char cVar5;
  char *pcVar6;
  uint uVar7;
  code *local_60;
  undefined4 local_58;
  
  uVar7 = 0x811c9dc5;
  lVar1 = FUN_100433030();
  if (PTR_s_Ability__Ozo__C_101859670 == (undefined *)0x0) {
    uVar4 = 0;
  }
  else {
    cVar5 = *PTR_s_Ability__Ozo__C_101859670;
    uVar4 = 0x811c9dc5;
    if (cVar5 != '\0') {
      uVar4 = 0x811c9dc5;
      pcVar6 = PTR_s_Ability__Ozo__C_101859670;
      do {
        pcVar6 = pcVar6 + 1;
        uVar4 = (uVar4 ^ (int)cVar5) * 0x1000193;
        cVar5 = *pcVar6;
      } while (cVar5 != '\0');
    }
  }
  *(uint *)(lVar1 + 0x28) = uVar4;
  *(undefined1 *)(lVar1 + 0x2c) = 1;
  lVar1 = lVar1 + 0x10;
  lVar2 = FUN_10049bf40(lVar1);
  if (PTR_s_Ability__Ozo__C_101859670 == (undefined *)0x0) {
    uVar4 = 0;
  }
  else {
    cVar5 = *PTR_s_Ability__Ozo__C_101859670;
    uVar4 = 0x811c9dc5;
    if (cVar5 != '\0') {
      uVar4 = 0x811c9dc5;
      pcVar6 = PTR_s_Ability__Ozo__C_101859670;
      do {
        pcVar6 = pcVar6 + 1;
        uVar4 = (uVar4 ^ (int)cVar5) * 0x1000193;
        cVar5 = *pcVar6;
      } while (cVar5 != '\0');
    }
  }
  *(uint *)(lVar2 + 0x20) = uVar4;
  *(code **)(lVar2 + 0x10) = FUN_100493bb8;
  *(undefined4 *)(lVar2 + 0x18) = 3;
  *(undefined4 *)(lVar2 + 0x28) = 1;
  lVar2 = FUN_10049bf40(lVar1);
  *(undefined4 *)(lVar2 + 0x20) = 0x757a571;
  *(code **)(lVar2 + 0x10) = FUN_100493bec;
  *(undefined4 *)(lVar2 + 0x18) = 3;
  *(undefined4 *)(lVar2 + 0x28) = 2;
  lVar1 = FUN_10049c888(lVar1);
  if (PTR_s_Ability__Ozo__C_101859670 == (undefined *)0x0) {
    uVar4 = 0;
  }
  else {
    cVar5 = *PTR_s_Ability__Ozo__C_101859670;
    uVar4 = 0x811c9dc5;
    if (cVar5 != '\0') {
      uVar4 = 0x811c9dc5;
      pcVar6 = PTR_s_Ability__Ozo__C_101859670;
      do {
        pcVar6 = pcVar6 + 1;
        uVar4 = (uVar4 ^ (int)cVar5) * 0x1000193;
        cVar5 = *pcVar6;
      } while (cVar5 != '\0');
    }
  }
  *(uint *)(lVar1 + 0x20) = uVar4;
  *(code **)(lVar1 + 0x10) = FUN_100493b80;
  *(undefined4 *)(lVar1 + 0x18) = 3;
  lVar1 = FUN_10042e694(param_1);
  *(ushort *)(lVar1 + 0x48) = *(ushort *)(lVar1 + 0x48) | 0x10;
  *(byte *)(lVar1 + 0x60) = *(byte *)(lVar1 + 0x60) & 0xfc | 1;
  if (PTR_s_Ability__Ozo__C_101859670 == (undefined *)0x0) {
    uVar7 = 0;
  }
  else {
    cVar5 = *PTR_s_Ability__Ozo__C_101859670;
    pcVar6 = PTR_s_Ability__Ozo__C_101859670;
    while (cVar5 != '\0') {
      pcVar6 = pcVar6 + 1;
      uVar7 = (uVar7 ^ (int)cVar5) * 0x1000193;
      cVar5 = *pcVar6;
    }
  }
  *(uint *)(lVar1 + 0x40) = uVar7;
  plVar3 = (long *)FUN_10043187c(lVar1 + 0x10);
  local_60 = FUN_100493c20;
  local_58 = 3;
  (**(code **)(*plVar3 + 0x30))(plVar3,&local_60);
  return;
}




void FUN_10040ebb0(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  long lVar4;
  undefined1 auStack_48 [24];
  
  *(undefined4 *)(param_1 + 0x328) = 0x3dcccccd;
  puVar2 = PTR_s_onActorAttributesChangedName_10185d530;
  uVar3 = FUN_1004d2524(PTR_s_onActorAttributesChangedName_10185d530);
  uVar3 = FUN_100015208(puVar2,uVar3,0x12345678);
  *(undefined4 *)(param_1 + 0xa0 + (ulong)*(uint *)(param_1 + 0x160) * 4) = uVar3;
  uVar1 = *(uint *)(param_1 + 0x160);
  *(code **)(param_1 + 0xa0 + (ulong)uVar1 * 8 + 0x40) = FUN_1004430bc;
  *(uint *)(param_1 + 0x160) = uVar1 + 1;
  FUN_100450f38(auStack_48,param_1 + 0x68);
  lVar4 = FUN_100430f18(auStack_48);
  uVar3 = *(undefined4 *)
           (**(long **)(*(long *)(*(long *)(*(long *)(param_1 + 0x10) + 0x10) + 0x38) + 0x228) + 8);
  *(undefined8 *)(lVar4 + 0x10) = 0x2b;
  *(undefined4 *)(lVar4 + 0x20) = uVar3;
  *(undefined2 *)(lVar4 + 0x24) = 1;
  lVar4 = FUN_10043101c(auStack_48);
  uVar3 = *(undefined4 *)
           (**(long **)(*(long *)(*(long *)(*(long *)(param_1 + 0x10) + 0x10) + 0x38) + 0x228) + 8);
  *(undefined4 *)(lVar4 + 0x10) = 3;
  *(undefined4 *)(lVar4 + 0x14) = uVar3;
  *(undefined1 *)(lVar4 + 0x20) = 1;
  FUN_100450f38(auStack_48,param_1 + 0x90);
  lVar4 = FUN_10043101c(auStack_48);
  *(undefined4 *)(lVar4 + 0x10) = 3;
  *(code **)(lVar4 + 0x18) = FUN_100443180;
  *(undefined1 *)(lVar4 + 0x20) = 0;
  return;
}




void FUN_10040ecd0(long param_1)

{
  undefined1 auStack_28 [24];
  
  FUN_100450f38(auStack_28,param_1 + 0x70);
  FUN_100432680(auStack_28);
  return;
}




void FUN_10040ecfc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  FUN_100450f38(auStack_38,param_1 + 0x98);
  lVar1 = FUN_100431ad4(auStack_38);
  *(char **)(lVar1 + 0x28) = "Bone_Weapon";
  *(char **)(lVar1 + 0x10) = "Effect_Lance_Empowered_AA_Available";
  *(ushort *)(lVar1 + 0x74) = *(ushort *)(lVar1 + 0x74) & 0xfd98 | 0x243;
  lVar1 = FUN_1004432e0(auStack_38);
  *(undefined **)(lVar1 + 0x10) = PTR_s_Ability__Lance__EmpoweredAttack_101859698;
  FUN_100450f38(auStack_38,param_1 + 0x70);
  FUN_100432680(auStack_38);
  return;
}




void FUN_10040ed8c(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  
  lVar1 = FUN_10042e498();
  plVar2 = (long *)FUN_10045607c(lVar1 + 0x10);
  (**(code **)(*plVar2 + 0x30))(plVar2,5);
  lVar1 = FUN_10042e2c8(param_1);
  FUN_10049b964(lVar1 + 0x10);
  lVar1 = FUN_10042e3b0(param_1);
  FUN_10049b814(lVar1 + 0x10);
  lVar1 = FUN_10042fdc4(param_1);
  plVar2 = (long *)FUN_100441e18(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x38))(plVar2,"Sound_Lance_Ability_A_End");
  uVar3 = FUN_1010a1520();
  lVar1 = FUN_1010a0e0c(uVar3,0,"*KindredSoundBalance*",0);
  FUN_1003b6154(*(undefined4 *)(lVar1 + 0x2dc));
                    /* WARNING: Could not recover jumptable at 0x00010040ee34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x28))(plVar2);
  return;
}




void FUN_10040ee38(long param_1)

{
  uint uVar1;
  byte bVar2;
  undefined *puVar3;
  undefined4 uVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined1 auStack_80 [3];
  undefined8 local_7d;
  undefined4 uStack_75;
  undefined4 uStack_71;
  undefined4 uStack_6d;
  undefined8 uStack_69;
  undefined1 auStack_60 [24];
  undefined4 local_48 [2];
  
  puVar3 = PTR_s_onPreCalculateDamageExchangeName_10185d520;
  if (DAT_101d23a38 != '\0') {
    uVar4 = FUN_1004d2524(PTR_s_onPreCalculateDamageExchangeName_10185d520);
    uVar4 = FUN_100015208(puVar3,uVar4,0x12345678);
    lVar6 = param_1 + 0xa0;
    *(undefined4 *)(lVar6 + (ulong)*(uint *)(param_1 + 0x160) * 4) = uVar4;
    uVar1 = *(uint *)(param_1 + 0x160);
    lVar7 = param_1 + 0xe0;
    *(code **)(lVar7 + (ulong)uVar1 * 8) = FUN_100443544;
    *(uint *)(param_1 + 0x160) = uVar1 + 1;
    puVar3 = PTR_s_onActorMoveName_10185d610;
    uVar4 = FUN_1004d2524(PTR_s_onActorMoveName_10185d610);
    uVar4 = FUN_100015208(puVar3,uVar4,0x12345678);
    *(undefined4 *)(lVar6 + (ulong)*(uint *)(param_1 + 0x160) * 4) = uVar4;
    uVar1 = *(uint *)(param_1 + 0x160);
    *(code **)(lVar7 + (ulong)uVar1 * 8) = FUN_1004435fc;
    *(uint *)(param_1 + 0x160) = uVar1 + 1;
    puVar3 = PTR_s_onAbilityTriggeredName_10185d618;
    uVar4 = FUN_1004d2524(PTR_s_onAbilityTriggeredName_10185d618);
    uVar4 = FUN_100015208(puVar3,uVar4,0x12345678);
    *(undefined4 *)(lVar6 + (ulong)*(uint *)(param_1 + 0x160) * 4) = uVar4;
    uVar1 = *(uint *)(param_1 + 0x160);
    *(code **)(lVar7 + (ulong)uVar1 * 8) = FUN_1004435fc;
    *(uint *)(param_1 + 0x160) = uVar1 + 1;
  }
  uVar8 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x10);
  FUN_100450f38(auStack_60,param_1 + 0x68);
  puVar3 = PTR_s_Buff_Lance_Talent_ReinforcedWall_10185cc38;
  lVar6 = FUN_100345d90(*(undefined4 *)(param_1 + 0x308));
  if ((lVar6 != 0) && (iVar5 = FUN_1003a47d0(lVar6,puVar3), iVar5 != 0)) {
    lVar6 = FUN_1003e10f0();
    bVar2 = *(byte *)(lVar6 + 0xe5);
    uStack_69 = 0;
    uStack_71 = 0;
    uStack_6d = 0;
    local_7d = 0;
    uStack_75 = 0;
    lVar6 = FUN_100437600(auStack_60);
    *(undefined8 *)(lVar6 + 0x18) = 0;
    *(undefined1 *)(lVar6 + 0x20) = 1;
    *(ulong *)(lVar6 + 0x2c) = CONCAT44(uStack_71,uStack_75);
    *(undefined8 *)(lVar6 + 0x24) = local_7d;
    *(undefined8 *)(lVar6 + 0x38) = uStack_69;
    *(ulong *)(lVar6 + 0x30) = CONCAT44(uStack_6d,uStack_71);
    *(undefined8 *)(lVar6 + 0x48) = 0xbf800000c0000000;
    *(undefined8 *)(lVar6 + 0x40) = 0xbf80000042800000;
    *(undefined4 *)(lVar6 + 0x50) = 0x3f800000;
    *(undefined1 *)(lVar6 + 0x54) = 0xff;
    *(undefined8 *)(lVar6 + 0x60) = 0xffffffff00000000;
    *(undefined8 *)(lVar6 + 0x58) = 0xffffffff00000001;
    *(byte *)(lVar6 + 0x6a) = bVar2 | 0x14;
    *(undefined2 *)(lVar6 + 0x68) = 0xc150;
    *(byte *)(lVar6 + 0x94) = *(byte *)(lVar6 + 0x94) & 0xfc | DAT_101d23a38 != '\0';
    lVar6 = FUN_100431e0c(auStack_60);
    puVar3 = PTR_s_Buff_Lance_ReinforcedWalls_Barri_10185cc40;
    local_48[0] = DAT_101d90c00;
    uVar4 = FUN_1003dfee8(uVar8,local_48,1,9);
    *(undefined **)(lVar6 + 0x10) = puVar3;
    *(undefined4 *)(lVar6 + 0x30) = uVar4;
    *(undefined8 *)(lVar6 + 0x34) = 0xffffffff00000001;
    *(undefined8 *)(lVar6 + 0x44) = 0;
    *(undefined8 *)(lVar6 + 0x3c) = 0;
    FUN_100431f2c(auStack_60);
  }
  lVar6 = *(long *)(*(long *)(*(long *)(*(long *)(param_1 + 0x10) + 0x10) + 0x58) + 0x58);
  if (lVar6 != 0) {
    iVar5 = 5;
    if (*(char *)(*(long *)(lVar6 + 0x38) + 0x8d) != '\0') {
      iVar5 = 3;
    }
    if ((*(uint *)(lVar6 + 0x238) >> 10 & 7) != iVar5 + *(int *)(*(long *)(lVar6 + 0x38) + 0x78))
    goto LAB_10040f0d8;
  }
  FUN_100431d2c(auStack_60);
  lVar6 = FUN_100431e0c(auStack_60);
  *(undefined **)(lVar6 + 0x10) = PTR_s_Buff_Lance_GuardOverdrive_10185cc20;
  *(undefined4 *)(lVar6 + 0x30) = 0xbf800000;
  *(undefined8 *)(lVar6 + 0x34) = 0xffffffff00000001;
  *(undefined8 *)(lVar6 + 0x44) = 0;
  *(undefined8 *)(lVar6 + 0x3c) = 0;
  FUN_100431f2c(auStack_60);
LAB_10040f0d8:
  FUN_100450f38(auStack_80,param_1 + 0x80);
  FUN_100431d2c(auStack_80);
  lVar6 = FUN_100436680(auStack_80);
  *(undefined **)(lVar6 + 0x10) = PTR_s_Buff_Lance_GuardOverdrive_10185cc20;
  FUN_100431f2c(auStack_80);
  FUN_100450f38(auStack_80,param_1 + 0x98);
  lVar6 = FUN_100431ad4(auStack_80);
  *(char **)(lVar6 + 0x28) = "Bone_Shield";
  *(char **)(lVar6 + 0x10) = "Effect_Lance_DirShield";
  *(ushort *)(lVar6 + 0x74) = *(ushort *)(lVar6 + 0x74) & 0xfd98 | 0x243;
  lVar6 = FUN_100431ad4(auStack_80);
  *(char **)(lVar6 + 0x10) = "Effect_Lance_Shield_Ground";
  *(ushort *)(lVar6 + 0x74) = *(ushort *)(lVar6 + 0x74) & 0xfd98 | 0x221;
  lVar6 = FUN_100431c28(auStack_80);
  uVar8 = FUN_1010a1520();
  lVar7 = FUN_1010a0e0c(uVar8,0,"*KindredSoundBalance*",0);
  uVar4 = FUN_1003b6154(*(undefined4 *)(lVar7 + 0x2e0));
  *(char **)(lVar6 + 0x10) = "Sound_Lance_Block";
  *(undefined1 *)(lVar6 + 0x38) = 0xff;
  *(undefined4 *)(lVar6 + 0x34) = uVar4;
  *(uint *)(lVar6 + 0x30) = ((int)lVar6 + 0xfe1b7eb0U >> 3) * 0xca1b & 0xffff;
  *(byte *)(lVar6 + 0x39) = *(byte *)(lVar6 + 0x39) & 0x80 | 0x49;
  return;
}




void FUN_10040f208(void)

{
  long lVar1;
  
  lVar1 = FUN_10042e2c8();
  lVar1 = FUN_10049be50(lVar1 + 0x10);
  *(undefined1 *)(lVar1 + 0x2c) = 0x11;
  return;
}




void FUN_10040f22c(void)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  
  lVar1 = FUN_10042e498();
  plVar2 = (long *)FUN_100441e68(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))();
  plVar2 = (long *)(**(code **)(*plVar2 + 0x68))(plVar2,"CenterBody");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Lance_Shield_Impact");
  (**(code **)(*plVar2 + 0x78))(plVar2,1);
  plVar2 = (long *)FUN_100441e18(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x38))(plVar2,"Sound_Lance_Shield_Damage");
  uVar3 = FUN_1010a1520();
  lVar1 = FUN_1010a0e0c(uVar3,0,"*KindredSoundBalance*",0);
  FUN_1003b6154(*(undefined4 *)(lVar1 + 0x2d8));
                    /* WARNING: Could not recover jumptable at 0x00010040f2e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x28))(plVar2);
  return;
}




void FUN_10040f2e4(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = FUN_1010a1520();
  lVar2 = FUN_1010a0e0c(uVar1,0,"*KindredSoundBalance*",0);
  FUN_1003b6154(*(undefined4 *)(lVar2 + 0x2d0));
  FUN_100443658(param_1,"Effect_Lance_AA_Impact",&PTR_s_Sound_Lance_Impact_1_10185d620,3);
  return;
}




void FUN_10040f338(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = FUN_1010a1520();
  lVar2 = FUN_1010a0e0c(uVar1,0,"*KindredSoundBalance*",0);
  FUN_1003b6154(*(undefined4 *)(lVar2 + 0x2d4));
  FUN_100443658(param_1,"Effect_Lance_AA_Impact_Crit",&PTR_s_Sound_Lance_Crit_Impact_1_10185d638,2);
  return;
}




void FUN_10040f38c(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = FUN_1010a1520();
  lVar2 = FUN_1010a0e0c(uVar1,0,"*KindredSoundBalance*",0);
  FUN_1003b6154(*(undefined4 *)(lVar2 + 0x2d0));
  FUN_100443658(param_1,"Effect_Lance_Empowered_AA_Impact",&PTR_s_Sound_Lance_Impact_1_10185d620,3);
  return;
}




void FUN_10040f3e0(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  
  puVar2 = PTR_s_onPreCalculateDamageExchangeName_10185d520;
  if (DAT_101d23a38 != '\0') {
    uVar3 = FUN_1004d2524(PTR_s_onPreCalculateDamageExchangeName_10185d520);
    uVar3 = FUN_100015208(puVar2,uVar3,0x12345678);
    *(undefined4 *)(param_1 + 0xa0 + (ulong)*(uint *)(param_1 + 0x160) * 4) = uVar3;
    uVar1 = *(uint *)(param_1 + 0x160);
    *(code **)(param_1 + 0xa0 + (ulong)uVar1 * 8 + 0x40) = FUN_100443734;
    *(uint *)(param_1 + 0x160) = uVar1 + 1;
  }
  lVar4 = FUN_10042e3b0(param_1);
  FUN_10049d2c4(lVar4 + 0x10);
  FUN_10049b814(lVar4 + 0x10);
  lVar4 = FUN_10042e95c(param_1);
  lVar4 = FUN_10049d090(lVar4 + 0x10);
  *(undefined4 *)(lVar4 + 0x28) = 3;
  *(code **)(lVar4 + 0x20) = FUN_100458b64;
  lVar4 = FUN_10042e2c8(param_1);
  lVar4 = lVar4 + 0x10;
  plVar5 = (long *)FUN_10049ba04(lVar4);
  (**(code **)(*plVar5 + 0x30))(plVar5,"Idle","StrafeIdle");
  plVar5 = (long *)FUN_10049ba04(lVar4);
  (**(code **)(*plVar5 + 0x30))(plVar5,"IdleCombat","StrafeIdle");
  plVar5 = (long *)FUN_100441e68(lVar4);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x78))(plVar5,"Bone_Shield");
  plVar5 = (long *)(**(code **)(*plVar5 + 0x48))(plVar5,"Effect_Lance_Shield_Attack");
  (**(code **)(*plVar5 + 0xb0))(plVar5,1);
  plVar5 = (long *)FUN_100441e68(lVar4);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x60))();
  plVar5 = (long *)(**(code **)(*plVar5 + 0x48))(plVar5,"Effect_Lance_Shield_Ground");
  (**(code **)(*plVar5 + 0xb0))(plVar5,1);
  lVar4 = FUN_10042e580(param_1);
  *(undefined4 *)(lVar4 + 0x40) = 0x3dcccccd;
  *(byte *)(lVar4 + 0x44) = *(byte *)(lVar4 + 0x44) & 0xfe;
  lVar4 = FUN_10043fc08(lVar4 + 0x10);
  lVar6 = FUN_10049c198(lVar4 + 0x10);
  *(code **)(lVar6 + 8) = FUN_1004437ec;
  FUN_1004385f0(lVar4 + 0x88);
  return;
}




void FUN_10040f5ac(undefined8 param_1)

{
  FUN_100435a7c(param_1,0x23,"Effect_Lance_Immobilize",0);
  return;
}




void FUN_10040f5c0(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = FUN_1010a1520();
  lVar2 = FUN_1010a0e0c(uVar1,0,"*KindredSoundBalance*",0);
  FUN_1003b6154(*(undefined4 *)(lVar2 + 0x2e0));
  FUN_100443658(param_1,"Effect_Lance_B_Burst_Impact",0,1);
  return;
}




void FUN_10040f610(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 local_50 [2];
  undefined4 local_48;
  
  if (*(int *)(param_1 + 0x308) == -1) {
    lVar2 = 0;
  }
  else {
    lVar2 = *(long *)(*(long *)(param_1 + 0x10) + 0x10);
    if (*(int *)(lVar2 + 0x260) != *(int *)(param_1 + 0x308)) {
      lVar2 = FUN_100345d90();
    }
  }
  uVar3 = FUN_1003dfe60(lVar2,1,8,0x19,0);
  uVar4 = FUN_1003dfe60(lVar2,1,9,0x19,0);
  uVar3 = NEON_fminnm(uVar3,uVar4);
  lVar2 = FUN_1004303b0(param_1);
  plVar1 = (long *)FUN_100433e34(lVar2 + 0x10);
  plVar1 = (long *)(**(code **)(*plVar1 + 0x30))(plVar1,PTR_s_Buff_Stunned_10185a208);
  local_48 = 1;
  local_50[0] = uVar3;
  (**(code **)(*plVar1 + 0x18))(plVar1,local_50);
  return;
}




void FUN_10040f6ec(void)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_10042e2c8();
  plVar2 = (long *)FUN_100441e68(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x60))();
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Lance_A_Warning_A");
                    /* WARNING: Could not recover jumptable at 0x00010040f730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0xb0))(plVar2,1);
  return;
}




void FUN_10040f734(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  
  FUN_100443914(param_1,1);
  lVar1 = FUN_10042e2c8(param_1);
  plVar2 = (long *)FUN_100441e68(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x60))();
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Lance_Withdraw");
  (**(code **)(*plVar2 + 0xb0))(plVar2,1);
  plVar2 = (long *)FUN_10049b7c4(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))(plVar2,"Sound_Lance_Withdraw");
  uVar3 = FUN_1010a1520();
  lVar1 = FUN_1010a0e0c(uVar3,0,"*KindredSoundBalance*",0);
  FUN_1003b6154(*(undefined4 *)(lVar1 + 0x2e8));
  (**(code **)(*plVar2 + 0x28))(plVar2);
  lVar1 = FUN_1004303b0(param_1);
  plVar2 = (long *)FUN_100441e18(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x38))(plVar2,"Sound_Lance_Withdraw2");
  uVar3 = FUN_1010a1520();
  lVar1 = FUN_1010a0e0c(uVar3,0,"*KindredSoundBalance*",0);
  FUN_1003b6154(*(undefined4 *)(lVar1 + 0x2e8));
                    /* WARNING: Could not recover jumptable at 0x00010040f844. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x28))(plVar2);
  return;
}




void FUN_10040f848(void)

{
  char cVar1;
  long lVar2;
  long *plVar3;
  uint uVar4;
  char *pcVar5;
  code *local_20;
  undefined4 local_18;
  
  lVar2 = FUN_10042e694();
  *(ushort *)(lVar2 + 0x48) = *(ushort *)(lVar2 + 0x48) | 0x10;
  *(byte *)(lVar2 + 0x60) = *(byte *)(lVar2 + 0x60) & 0xfc | 1;
  if (PTR_s_Ability__Lance__A_1018596a0 == (undefined *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = 0x811c9dc5;
    cVar1 = *PTR_s_Ability__Lance__A_1018596a0;
    pcVar5 = PTR_s_Ability__Lance__A_1018596a0;
    while (cVar1 != '\0') {
      pcVar5 = pcVar5 + 1;
      uVar4 = (uVar4 ^ (int)cVar1) * 0x1000193;
      cVar1 = *pcVar5;
    }
  }
  *(uint *)(lVar2 + 0x40) = uVar4;
  plVar3 = (long *)FUN_10043187c(lVar2 + 0x10);
  local_20 = FUN_1004938f0;
  local_18 = 3;
  (**(code **)(*plVar3 + 0x30))(plVar3,&local_20);
  return;
}




void FUN_10040f8f4(void)

{
  char cVar1;
  long lVar2;
  uint uVar3;
  char *pcVar4;
  
  lVar2 = FUN_10042e2c8();
  lVar2 = FUN_10049bf40(lVar2 + 0x10);
  if (PTR_s_Ability__Lance__B_1018596a8 == (undefined *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = 0x811c9dc5;
    cVar1 = *PTR_s_Ability__Lance__B_1018596a8;
    pcVar4 = PTR_s_Ability__Lance__B_1018596a8;
    while (cVar1 != '\0') {
      pcVar4 = pcVar4 + 1;
      uVar3 = (uVar3 ^ (int)cVar1) * 0x1000193;
      cVar1 = *pcVar4;
    }
  }
  *(uint *)(lVar2 + 0x20) = uVar3;
  *(code **)(lVar2 + 0x10) = FUN_100493924;
  *(undefined4 *)(lVar2 + 0x18) = 3;
  *(undefined4 *)(lVar2 + 0x28) = 1;
  return;
}




void FUN_10040f974(long param_1)

{
  long lVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  undefined1 auStack_50 [24];
  undefined4 local_38 [2];
  
  lVar1 = FUN_100345d90(*(undefined4 *)(param_1 + 0x308));
  FUN_100450f38(auStack_50,param_1 + 0x98);
  lVar2 = *(long *)(lVar1 + 0x40);
  fVar3 = *(float *)(lVar2 + 0x38) + *(float *)(lVar2 + 0xec) * (*(float *)(lVar2 + 0x254) + 1.0);
  fVar4 = (float)NEON_fminnm(fVar3 + fVar3 * *(float *)(lVar2 + 0x1a0),DAT_101e94320);
  fVar3 = DAT_101e94260;
  if (DAT_101e94260 <= fVar4) {
    fVar3 = fVar4;
  }
  local_38[0] = DAT_101d90c00;
  fVar4 = (float)FUN_1003dfee8(lVar1,local_38,0,9);
  lVar1 = FUN_1004337f4(auStack_50);
  *(undefined4 *)(lVar1 + 0x10) = 4;
  *(float *)(lVar1 + 0x14) = fVar4 * fVar3;
  return;
}




void FUN_10040fa2c(void)

{
  long lVar1;
  long lVar2;
  char cVar3;
  uint uVar4;
  char *pcVar5;
  uint uVar6;
  
  uVar6 = 0x811c9dc5;
  lVar1 = FUN_100433030();
  if (PTR_s_Ability__Lance__C_1018596b0 == (undefined *)0x0) {
    uVar4 = 0;
  }
  else {
    cVar3 = *PTR_s_Ability__Lance__C_1018596b0;
    uVar4 = 0x811c9dc5;
    if (cVar3 != '\0') {
      uVar4 = 0x811c9dc5;
      pcVar5 = PTR_s_Ability__Lance__C_1018596b0;
      do {
        pcVar5 = pcVar5 + 1;
        uVar4 = (uVar4 ^ (int)cVar3) * 0x1000193;
        cVar3 = *pcVar5;
      } while (cVar3 != '\0');
    }
  }
  *(uint *)(lVar1 + 0x28) = uVar4;
  lVar2 = FUN_10049bf40(lVar1 + 0x10);
  if (PTR_s_Ability__Lance__C_1018596b0 == (undefined *)0x0) {
    uVar6 = 0;
  }
  else {
    cVar3 = *PTR_s_Ability__Lance__C_1018596b0;
    pcVar5 = PTR_s_Ability__Lance__C_1018596b0;
    while (cVar3 != '\0') {
      pcVar5 = pcVar5 + 1;
      uVar6 = (uVar6 ^ (int)cVar3) * 0x1000193;
      cVar3 = *pcVar5;
    }
  }
  *(uint *)(lVar2 + 0x20) = uVar6;
  *(code **)(lVar2 + 0x10) = FUN_100493958;
  *(undefined4 *)(lVar2 + 0x18) = 3;
  *(undefined4 *)(lVar2 + 0x28) = 1;
  lVar1 = FUN_10049da9c(lVar1 + 0x10);
  *(undefined **)(lVar1 + 0x10) = PTR_s_Ability__Lance__C_1018596b0;
  *(code **)(lVar1 + 0x18) = FUN_10049398c;
  *(undefined4 *)(lVar1 + 0x20) = 3;
  *(undefined4 *)(lVar1 + 0x2c) = 0;
  return;
}




void FUN_10040fb2c(long param_1)

{
  long lVar1;
  undefined1 auStack_28 [24];
  
  FUN_100450f38(auStack_28,param_1 + 0x98);
  lVar1 = FUN_100439be4(auStack_28);
  *(undefined4 *)(lVar1 + 0x10) = 0x3e;
  return;
}




void FUN_10040fb60(long param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined1 auStack_48 [24];
  
  FUN_100450f38(auStack_48,param_1 + 0x68);
  lVar1 = FUN_100430f18(auStack_48);
  uVar2 = FUN_1003df710(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x10),1,1);
  *(undefined8 *)(lVar1 + 0x10) = 0x13;
  *(undefined4 *)(lVar1 + 0x20) = uVar2;
  *(undefined2 *)(lVar1 + 0x24) = 1;
  lVar1 = FUN_10042e2c8(param_1);
  lVar1 = FUN_10049be50(lVar1 + 0x10);
  *(undefined1 *)(lVar1 + 0x2c) = 0x14;
  *(code **)(lVar1 + 0x20) = FUN_100436b80;
  *(undefined4 *)(lVar1 + 0x30) = 9;
  return;
}




void FUN_10040fbfc(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  code *local_30;
  undefined4 local_28;
  
  local_30 = FUN_100436d4c;
  local_28 = 3;
  FUN_10042eb40(param_1,&local_30);
  lVar1 = FUN_10042e498(param_1);
  plVar2 = (long *)FUN_10043626c(lVar1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010040fc58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x30))(plVar2,"perk_laugh");
  return;
}




void FUN_10040fc5c(undefined8 param_1)

{
  code *local_20;
  undefined4 local_18;
  
  local_20 = FUN_100436d58;
  local_18 = 3;
  FUN_10042eb40(param_1,&local_20);
  return;
}




void FUN_10040fc90(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  undefined1 auStack_48 [24];
  
  puVar2 = PTR_s_onActorLevelUpName_10185d598;
  uVar3 = FUN_1004d2524(PTR_s_onActorLevelUpName_10185d598);
  uVar3 = FUN_100015208(puVar2,uVar3,0x12345678);
  *(undefined4 *)(param_1 + 0xa0 + (ulong)*(uint *)(param_1 + 0x160) * 4) = uVar3;
  uVar1 = *(uint *)(param_1 + 0x160);
  *(code **)(param_1 + 0xa0 + (ulong)uVar1 * 8 + 0x40) = FUN_100436d6c;
  *(uint *)(param_1 + 0x160) = uVar1 + 1;
  FUN_100450f38(auStack_48,param_1 + 0x98);
  lVar5 = *(long *)(*(long *)(param_1 + 0x10) + 0x10);
  lVar4 = FUN_100436e1c(auStack_48);
  fVar6 = *(float *)(*(long *)(lVar5 + 0x38) + 0xe0);
  fVar7 = *(float *)(**(long **)(*(long *)(lVar5 + 0x38) + 0x228) + 8);
  *(mach_header **)(lVar4 + 0x10) = &__mh_execute_header;
  *(float *)(lVar4 + 0x18) = fVar6 / (fVar7 + 1.0) - fVar6;
  lVar4 = FUN_100436e1c(auStack_48);
  fVar6 = *(float *)(*(long *)(lVar5 + 0x38) + 0x110);
  fVar7 = *(float *)(**(long **)(*(long *)(lVar5 + 0x38) + 0x228) + 8);
  *(undefined8 *)(lVar4 + 0x10) = 0x100000007;
  *(float *)(lVar4 + 0x18) = fVar6 / (fVar7 + 1.0) - fVar6;
  lVar4 = FUN_100436e1c(auStack_48);
  fVar6 = *(float *)(*(long *)(lVar5 + 0x38) + 0x118);
  lVar5 = **(long **)(*(long *)(lVar5 + 0x38) + 0x228);
  fVar7 = *(float *)(lVar5 + 8);
  *(undefined8 *)(lVar4 + 0x10) = 0x100000008;
  *(float *)(lVar4 + 0x18) = fVar6 / (fVar7 + 1.0) - fVar6;
  uVar3 = *(undefined4 *)(lVar5 + 8);
  lVar4 = FUN_100436e1c(auStack_48);
  *(undefined8 *)(lVar4 + 0x10) = 0x200000000;
  *(undefined4 *)(lVar4 + 0x18) = uVar3;
  lVar4 = FUN_100436e1c(auStack_48);
  *(undefined8 *)(lVar4 + 0x10) = 0x200000007;
  *(undefined4 *)(lVar4 + 0x18) = uVar3;
  lVar4 = FUN_100436e1c(auStack_48);
  *(undefined8 *)(lVar4 + 0x10) = 0x200000008;
  *(undefined4 *)(lVar4 + 0x18) = uVar3;
  return;
}




void FUN_10040fe14(long param_1)

{
  long lVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  undefined1 auStack_48 [24];
  
  FUN_100450f38(auStack_48,param_1 + 0x98);
  lVar2 = *(long *)(*(long *)(param_1 + 0x10) + 0x10);
  lVar1 = FUN_100436e1c(auStack_48);
  fVar3 = *(float *)(*(long *)(lVar2 + 0x38) + 0xe4);
  fVar4 = *(float *)(**(long **)(*(long *)(lVar2 + 0x38) + 0x228) + 8);
  *(mach_header **)(lVar1 + 0x10) = &__mh_execute_header;
  *(float *)(lVar1 + 0x18) = fVar3 / (fVar4 + 1.0) - fVar3;
  lVar1 = FUN_100436e1c(auStack_48);
  fVar3 = *(float *)(*(long *)(lVar2 + 0x38) + 0x114);
  fVar4 = *(float *)(**(long **)(*(long *)(lVar2 + 0x38) + 0x228) + 8);
  *(undefined8 *)(lVar1 + 0x10) = 0x100000007;
  *(float *)(lVar1 + 0x18) = fVar3 / (fVar4 + 1.0) - fVar3;
  lVar1 = FUN_100436e1c(auStack_48);
  fVar3 = *(float *)(*(long *)(lVar2 + 0x38) + 0x11c);
  fVar4 = *(float *)(**(long **)(*(long *)(lVar2 + 0x38) + 0x228) + 8);
  *(undefined8 *)(lVar1 + 0x10) = 0x100000008;
  *(float *)(lVar1 + 0x18) = fVar3 / (fVar4 + 1.0) - fVar3;
  return;
}




void FUN_10040ff00(long param_1)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined4 uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined1 auStack_90 [24];
  undefined4 local_78 [2];
  
  lVar3 = FUN_100345d90(*(undefined4 *)(param_1 + 0x308));
  lVar4 = FUN_10042e498(param_1);
  plVar5 = (long *)FUN_100441e18(lVar4 + 0x10);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x38))(plVar5,"Sound_Phinn_Ability_B_Defense_Bonus");
  uVar6 = FUN_1010a1520();
  lVar4 = FUN_1010a0e0c(uVar6,0,"*KindredSoundBalance*",0);
  FUN_1003a798c(*(undefined4 *)(lVar4 + 0x22c));
  (**(code **)(*plVar5 + 0x28))(plVar5);
  FUN_100450f38(auStack_90,param_1 + 0x98);
  lVar4 = *(long *)(lVar3 + 0x40);
  fVar13 = *(float *)(lVar4 + 0x108);
  fVar14 = *(float *)(lVar4 + 0x54);
  fVar7 = *(float *)(**(long **)(*(long *)(lVar3 + 0x38) + 0x228) + 8);
  fVar8 = (float)FUN_1003dfe60(lVar3,1,8,0x19,0);
  fVar16 = *(float *)(lVar4 + 0x10c);
  fVar17 = *(float *)(lVar4 + 0x58);
  fVar9 = *(float *)(lVar4 + 0xec);
  fVar12 = *(float *)(lVar4 + 0x38);
  fVar15 = 1.0 / (fVar7 + 1.0);
  fVar7 = (float)FUN_1003dfe60(lVar3,1,7,0x19,0);
  fVar10 = (float)FUN_1003dfe60(lVar3,1,6,0x19,0);
  puVar1 = PTR_s_Buff_Phinn_Talent_Phaster_10185a680;
  fVar7 = (fVar10 - fVar8 * ((((fVar14 * fVar15 - (fVar14 + fVar13)) - fVar16) - fVar17) +
                            fVar15 * fVar17)) + fVar7 * ((fVar12 + fVar9) - fVar15 * fVar12);
  lVar4 = FUN_100345d90(*(undefined4 *)(param_1 + 0x308));
  if ((lVar4 != 0) && (iVar2 = FUN_1003a47d0(lVar4,puVar1), iVar2 != 0)) {
    local_78[0] = DAT_101d90c90;
    fVar8 = (float)FUN_1003dfee8(lVar3,local_78,0,9);
    fVar7 = fVar8 * fVar7;
    lVar4 = FUN_10043255c(auStack_90);
    local_78[0] = DAT_101d90c90;
    uVar11 = FUN_1003dfee8(lVar3,local_78,1,9);
    *(undefined4 *)(lVar4 + 0x10) = 1;
    *(undefined4 *)(lVar4 + 0x14) = uVar11;
  }
  lVar4 = FUN_1004337f4(auStack_90);
  *(undefined4 *)(lVar4 + 0x10) = 5;
  *(float *)(lVar4 + 0x14) = fVar7;
  lVar4 = FUN_100431ad4(auStack_90);
  *(char **)(lVar4 + 0x20) = "CenterBody";
  *(ushort *)(lVar4 + 0x74) = *(ushort *)(lVar4 + 0x74) & 0xff98 | 0x22;
  *(char **)(lVar4 + 0x10) = "Effect_Phinn_B_Buff";
  FUN_100450f38(auStack_90,param_1 + 0x70);
  FUN_100432680(auStack_90);
  return;
}

