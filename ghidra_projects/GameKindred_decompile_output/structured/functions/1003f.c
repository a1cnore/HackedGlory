// functions/1003f — 290 functions
#include "GameKindred.h"




void FUN_1003f0024(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  long lVar6;
  undefined1 auStack_48 [24];
  
  puVar2 = PTR_s_onPreCalculateDamageExchangeName_10185d520;
  uVar3 = FUN_1004d2524(PTR_s_onPreCalculateDamageExchangeName_10185d520);
  uVar3 = FUN_100015208(puVar2,uVar3,0x12345678);
  *(undefined4 *)(param_1 + 0xa0 + (ulong)*(uint *)(param_1 + 0x160) * 4) = uVar3;
  uVar1 = *(uint *)(param_1 + 0x160);
  *(code **)(param_1 + 0xa0 + (ulong)uVar1 * 8 + 0x40) = FUN_10043cd84;
  *(uint *)(param_1 + 0x160) = uVar1 + 1;
  uVar3 = FUN_1004d2524("attackCounter");
  uVar4 = FUN_100015208("attackCounter",uVar3,0x12345678);
  (**(code **)(*(long *)(param_1 + 0x168) + 8))(param_1 + 0x168,uVar4);
  uVar3 = FUN_1004d2524("attackCounter");
  uVar4 = FUN_100015208("attackCounter",uVar3,0x12345678);
  puVar5 = (undefined4 *)(**(code **)(*(long *)(param_1 + 0x168) + 0x10))(param_1 + 0x168,uVar4);
  *puVar5 = 0;
  FUN_100450f38(auStack_48,param_1 + 0x80);
  FUN_100431d2c(auStack_48);
  lVar6 = FUN_100436680(auStack_48);
  *(undefined **)(lVar6 + 0x10) = PTR_s_Buff_Item_AlternatingCurrent_10185c2d0;
  FUN_100431f2c(auStack_48);
  return;
}




void FUN_1003f013c(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  long lVar4;
  undefined1 auStack_48 [24];
  
  puVar2 = PTR_s_onPreCalculateDamageExchangeName_10185d520;
  uVar3 = FUN_1004d2524(PTR_s_onPreCalculateDamageExchangeName_10185d520);
  uVar3 = FUN_100015208(puVar2,uVar3,0x12345678);
  *(undefined4 *)(param_1 + 0xa0 + (ulong)*(uint *)(param_1 + 0x160) * 4) = uVar3;
  uVar1 = *(uint *)(param_1 + 0x160);
  *(code **)(param_1 + 0xa0 + (ulong)uVar1 * 8 + 0x40) = FUN_10043cf20;
  *(uint *)(param_1 + 0x160) = uVar1 + 1;
  FUN_100450f38(auStack_48,param_1 + 0x98);
  lVar4 = FUN_100431ad4(auStack_48);
  *(char **)(lVar4 + 0x28) = "Bone_LeftHand";
  *(ushort *)(lVar4 + 0x74) = *(ushort *)(lVar4 + 0x74) & 0xff98 | 0x43;
  *(char **)(lVar4 + 0x10) = "Effect_StormGuard";
  lVar4 = FUN_100431ad4(auStack_48);
  *(char **)(lVar4 + 0x28) = "Bone_RightHand";
  *(ushort *)(lVar4 + 0x74) = *(ushort *)(lVar4 + 0x74) & 0xff98 | 0x43;
  *(char **)(lVar4 + 0x10) = "Effect_StormGuard";
  FUN_100450f38(auStack_48,param_1 + 0x70);
  FUN_1004354f8(auStack_48);
  return;
}




void FUN_1003f0234(long param_1)

{
  long lVar1;
  undefined1 auStack_58 [24];
  
  FUN_100450f38(auStack_58,param_1 + 0x68);
  lVar1 = FUN_100436540(auStack_58);
  *(char **)(lVar1 + 0x28) = "Bone_CenterMass";
  *(char **)(lVar1 + 0x10) = "Effect_AC_Proc";
  *(ushort *)(lVar1 + 0x74) = *(ushort *)(lVar1 + 0x74) & 0xff90 | 0x4b;
  FUN_100450f38(auStack_58,param_1 + 0x70);
  lVar1 = FUN_100436540(auStack_58);
  *(char **)(lVar1 + 0x28) = "Bone_CenterMass";
  *(char **)(lVar1 + 0x10) = "Effect_AC_Proc";
  *(ushort *)(lVar1 + 0x74) = *(ushort *)(lVar1 + 0x74) & 0xff90 | 0x4b;
  return;
}




void FUN_1003f02d8(long param_1)

{
  long lVar1;
  undefined1 auStack_58 [24];
  
  FUN_100450f38(auStack_58,param_1 + 0x68);
  lVar1 = FUN_100436540(auStack_58);
  *(char **)(lVar1 + 0x28) = "Bone_CenterMass";
  *(char **)(lVar1 + 0x10) = "Effect_AfterShock_Proc";
  *(ushort *)(lVar1 + 0x74) = *(ushort *)(lVar1 + 0x74) & 0xff90 | 0x4b;
  FUN_100450f38(auStack_58,param_1 + 0x70);
  lVar1 = FUN_100436540(auStack_58);
  *(char **)(lVar1 + 0x28) = "Bone_CenterMass";
  *(char **)(lVar1 + 0x10) = "Effect_AfterShock_Proc";
  *(ushort *)(lVar1 + 0x74) = *(ushort *)(lVar1 + 0x74) & 0xff90 | 0x4b;
  return;
}




void FUN_1003f037c(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined4 *puVar6;
  undefined1 *puVar7;
  long lVar8;
  undefined4 uVar9;
  undefined1 auStack_58 [24];
  
  puVar2 = PTR_s_onBuffIntervalName_10185d558;
  if (DAT_101d23a38 != '\0') {
    uVar3 = FUN_1004d2524(PTR_s_onBuffIntervalName_10185d558);
    uVar3 = FUN_100015208(puVar2,uVar3,0x12345678);
    *(undefined4 *)(param_1 + 0xa0 + (ulong)*(uint *)(param_1 + 0x160) * 4) = uVar3;
    uVar1 = *(uint *)(param_1 + 0x160);
    *(code **)(param_1 + 0xa0 + (ulong)uVar1 * 8 + 0x40) = FUN_10043ddc8;
    *(uint *)(param_1 + 0x160) = uVar1 + 1;
    *(undefined4 *)(param_1 + 0x328) = 0x3dcccccd;
    uVar4 = FUN_1010a1520();
    lVar5 = FUN_1010a0e0c(uVar4,0,"*FlareGun*",0);
    uVar9 = FUN_100032228();
    lVar8 = param_1 + 0x168;
    uVar3 = FUN_1004d2524("spawnTime");
    uVar4 = FUN_100015208("spawnTime",uVar3,0x12345678);
    uVar4 = (**(code **)(*(long *)(param_1 + 0x168) + 8))(lVar8,uVar4);
    puVar6 = (undefined4 *)(**(code **)(*(long *)(param_1 + 0x168) + 0x10))(lVar8,uVar4);
    *puVar6 = uVar9;
    uVar3 = FUN_1004d2524("bDecloaked");
    uVar4 = FUN_100015208("bDecloaked",uVar3,0x12345678);
    uVar4 = (**(code **)(*(long *)(param_1 + 0x168) + 8))(lVar8,uVar4);
    puVar7 = (undefined1 *)(**(code **)(*(long *)(param_1 + 0x168) + 0x10))(lVar8,uVar4);
    *puVar7 = 0;
    uVar3 = FUN_1004d2524("bArmed");
    uVar4 = FUN_100015208("bArmed",uVar3,0x12345678);
    uVar4 = (**(code **)(*(long *)(param_1 + 0x168) + 8))(lVar8,uVar4);
    puVar7 = (undefined1 *)(**(code **)(*(long *)(param_1 + 0x168) + 0x10))(lVar8,uVar4);
    *puVar7 = 0;
    uVar9 = *(undefined4 *)(lVar5 + 0x144);
    uVar3 = FUN_1004d2524("flareVisionRange");
    uVar4 = FUN_100015208("flareVisionRange",uVar3,0x12345678);
    uVar4 = (**(code **)(*(long *)(param_1 + 0x168) + 8))(lVar8,uVar4);
    puVar6 = (undefined4 *)(**(code **)(*(long *)(param_1 + 0x168) + 0x10))(lVar8,uVar4);
    *puVar6 = uVar9;
  }
  lVar8 = FUN_100433b70(param_1);
  *(code **)(lVar8 + 0x40) = FUN_10043e288;
  lVar8 = FUN_10043aaf4(lVar8 + 0x10);
  *(code **)(lVar8 + 0x10) = FUN_10043e2f8;
  FUN_100450f38(auStack_58,param_1 + 0x98);
  lVar8 = FUN_100431ad4(auStack_58);
  *(ushort *)(lVar8 + 0x74) = *(ushort *)(lVar8 + 0x74) & 0xff98 | 0x21;
  *(char **)(lVar8 + 0x10) = "Effect_ScoutTrap_Enemy";
  *(char **)(lVar8 + 0x18) = "Effect_ScoutTrap";
  return;
}




void FUN_1003f05e8(long param_1)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  long *plVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  code *local_50;
  undefined4 local_48;
  
  lVar3 = *(long *)(*(long *)(param_1 + 0x10) + 0x10);
  if (*(int *)(lVar3 + 0x260) != *(int *)(param_1 + 0x308)) {
    lVar3 = FUN_100345d90(*(int *)(param_1 + 0x308));
  }
  iVar2 = FUN_1003a47d0(lVar3,PTR_s_Buff_Item_SuperScout2000_Control_10185c2f8);
  if (iVar2 == 0) {
    lVar3 = *(long *)(*(long *)(param_1 + 0x10) + 0x10);
    if (*(int *)(lVar3 + 0x260) != *(int *)(param_1 + 0x308)) {
      lVar3 = FUN_100345d90(*(int *)(param_1 + 0x308));
    }
    iVar2 = FUN_1003a47d0(lVar3,PTR_s_Buff_Item_ScoutTuff_Control_10185c300);
    if (iVar2 == 0) {
      fVar10 = (float)FUN_1003df6c8(PTR_s__Item_VisionTotem__10185bae8,0,1);
      *(float *)(param_1 + 0x318) = fVar10;
      fVar9 = *(float *)(param_1 + 0x31c);
      uVar8 = 0;
      goto LAB_1003f070c;
    }
    uVar8 = FUN_1003df6c8(PTR_s__Item_ScoutTuff__10185baf8,0,1);
    fVar9 = (float)FUN_1003df6c8(PTR_s__Item_VisionTotem__10185bae8,0,1);
    puVar4 = PTR_s__Item_ScoutTuff__10185baf8;
  }
  else {
    uVar8 = FUN_1003df6c8(PTR_s__Item_SuperScout2000__10185bb00,0,1);
    fVar9 = (float)FUN_1003df6c8(PTR_s__Item_VisionTotem__10185bae8,0,1);
    puVar4 = PTR_s__Item_SuperScout2000__10185bb00;
  }
  fVar10 = (float)FUN_1003df6c8(puVar4,1,1);
  fVar10 = fVar10 + fVar9;
  *(float *)(param_1 + 0x318) = fVar10;
  fVar9 = *(float *)(param_1 + 0x31c);
LAB_1003f070c:
  if (fVar9 < fVar10) {
    *(float *)(param_1 + 0x31c) = fVar10;
  }
  *(uint *)(param_1 + 0x340) =
       *(uint *)(param_1 + 0x340) & 0xfffe0 | (uint)(fVar10 < 0.0) << 4 |
       *(uint *)(param_1 + 0x340) & 0xfff0000f;
  uVar5 = (*(code *)**(undefined8 **)(param_1 + 0x168))
                    (param_1 + 0x168,PTR_s___VAR1_FLOAT___10185d7e8);
  puVar6 = (undefined4 *)(**(code **)(*(long *)(param_1 + 0x168) + 0x10))(param_1 + 0x168,uVar5);
  *puVar6 = uVar8;
  puVar4 = PTR_s_onBeforeApplyDamageName_10185d570;
  uVar8 = FUN_1004d2524(PTR_s_onBeforeApplyDamageName_10185d570);
  uVar8 = FUN_100015208(puVar4,uVar8,0x12345678);
  *(undefined4 *)(param_1 + 0xa0 + (ulong)*(uint *)(param_1 + 0x160) * 4) = uVar8;
  uVar1 = *(uint *)(param_1 + 0x160);
  *(code **)(param_1 + 0xa0 + (ulong)uVar1 * 8 + 0x40) = FUN_10043fa4c;
  *(uint *)(param_1 + 0x160) = uVar1 + 1;
  lVar3 = FUN_10042e498(param_1);
  plVar7 = (long *)FUN_10049cee4(lVar3 + 0x10);
  (**(code **)(*plVar7 + 0x30))(plVar7,"u_visionTotem_status");
  lVar3 = FUN_10042e580(param_1);
  *(undefined4 *)(lVar3 + 0x40) = 0x3f800000;
  *(byte *)(lVar3 + 0x44) = *(byte *)(lVar3 + 0x44) & 0xfe;
  plVar7 = (long *)FUN_1004519c8(lVar3 + 0x10);
  plVar7 = (long *)(**(code **)(*plVar7 + 0x48))();
  local_50 = FUN_10043f9ec;
  local_48 = 4;
  (**(code **)(*plVar7 + 0x10))(plVar7,0,&local_50);
  lVar3 = FUN_100433b70(param_1);
  *(code **)(lVar3 + 0x40) = FUN_10049cf34;
  plVar7 = (long *)FUN_100433e34(lVar3 + 0x10);
  (**(code **)(*plVar7 + 0x30))(plVar7,PTR_s_Buff_Stealth_10185aba0);
  lVar3 = FUN_10042e2c8(param_1);
  plVar7 = (long *)FUN_100430a84(lVar3 + 0x10);
  local_50 = FUN_100433144;
  local_48 = 4;
  (**(code **)(*plVar7 + 0x30))(plVar7,0,1,&local_50);
  plVar7 = (long *)FUN_100441e68(lVar3 + 0x10);
  plVar7 = (long *)(**(code **)(*plVar7 + 0x68))(plVar7,"OverHead");
  plVar7 = (long *)(**(code **)(*plVar7 + 0x48))(plVar7,"Effect_Totem_TrueVision");
  (**(code **)(*plVar7 + 0xb0))(plVar7,1);
  lVar3 = FUN_10042fdc4(param_1);
  FUN_100434ac8(lVar3 + 0x10);
  return;
}




void FUN_1003f0908(void)

{
  long lVar1;
  long lVar2;
  char cVar3;
  uint uVar4;
  char *pcVar5;
  uint uVar6;
  
  uVar6 = 0x811c9dc5;
  lVar1 = FUN_10042e2c8();
  lVar2 = FUN_10049bf40(lVar1 + 0x10);
  if (PTR_s_Ability__Item__VisionTotem_101858eb8 == (undefined *)0x0) {
    uVar4 = 0;
  }
  else {
    cVar3 = *PTR_s_Ability__Item__VisionTotem_101858eb8;
    uVar4 = 0x811c9dc5;
    if (cVar3 != '\0') {
      uVar4 = 0x811c9dc5;
      pcVar5 = PTR_s_Ability__Item__VisionTotem_101858eb8;
      do {
        pcVar5 = pcVar5 + 1;
        uVar4 = (uVar4 ^ (int)cVar3) * 0x1000193;
        cVar3 = *pcVar5;
      } while (cVar3 != '\0');
    }
  }
  *(uint *)(lVar2 + 0x20) = uVar4;
  *(code **)(lVar2 + 0x10) = FUN_10043fa98;
  *(undefined4 *)(lVar2 + 0x18) = 2;
  *(undefined4 *)(lVar2 + 0x28) = 0;
  lVar1 = FUN_10049c888(lVar1 + 0x10);
  if (PTR_s_Ability__Item__VisionTotem_101858eb8 == (undefined *)0x0) {
    uVar6 = 0;
  }
  else {
    cVar3 = *PTR_s_Ability__Item__VisionTotem_101858eb8;
    pcVar5 = PTR_s_Ability__Item__VisionTotem_101858eb8;
    while (cVar3 != '\0') {
      pcVar5 = pcVar5 + 1;
      uVar6 = (uVar6 ^ (int)cVar3) * 0x1000193;
      cVar3 = *pcVar5;
    }
  }
  *(uint *)(lVar1 + 0x20) = uVar6;
  *(code **)(lVar1 + 0x10) = FUN_10043fae0;
  *(undefined4 *)(lVar1 + 0x18) = 2;
  return;
}




void FUN_1003f09fc(void)

{
  return;
}




void FUN_1003f0a00(void)

{
  long lVar1;
  long lVar2;
  char cVar3;
  uint uVar4;
  char *pcVar5;
  uint uVar6;
  
  uVar6 = 0x811c9dc5;
  lVar1 = FUN_10042e2c8();
  lVar2 = FUN_10049bf40(lVar1 + 0x10);
  if (PTR_s_Ability__Item__VisionTotem_101858eb8 == (undefined *)0x0) {
    uVar4 = 0;
  }
  else {
    cVar3 = *PTR_s_Ability__Item__VisionTotem_101858eb8;
    uVar4 = 0x811c9dc5;
    if (cVar3 != '\0') {
      uVar4 = 0x811c9dc5;
      pcVar5 = PTR_s_Ability__Item__VisionTotem_101858eb8;
      do {
        pcVar5 = pcVar5 + 1;
        uVar4 = (uVar4 ^ (int)cVar3) * 0x1000193;
        cVar3 = *pcVar5;
      } while (cVar3 != '\0');
    }
  }
  *(uint *)(lVar2 + 0x20) = uVar4;
  *(code **)(lVar2 + 0x10) = FUN_10043fb2c;
  *(undefined4 *)(lVar2 + 0x18) = 2;
  *(undefined4 *)(lVar2 + 0x28) = 0;
  lVar1 = FUN_10049c888(lVar1 + 0x10);
  if (PTR_s_Ability__Item__VisionTotem_101858eb8 == (undefined *)0x0) {
    uVar6 = 0;
  }
  else {
    cVar3 = *PTR_s_Ability__Item__VisionTotem_101858eb8;
    pcVar5 = PTR_s_Ability__Item__VisionTotem_101858eb8;
    while (cVar3 != '\0') {
      pcVar5 = pcVar5 + 1;
      uVar6 = (uVar6 ^ (int)cVar3) * 0x1000193;
      cVar3 = *pcVar5;
    }
  }
  *(uint *)(lVar1 + 0x20) = uVar6;
  *(code **)(lVar1 + 0x10) = FUN_10043fb54;
  *(undefined4 *)(lVar1 + 0x18) = 2;
  return;
}




void FUN_1003f0af4(void)

{
  long lVar1;
  
  lVar1 = FUN_10042e2c8();
  lVar1 = FUN_10049be00(lVar1 + 0x10);
  *(undefined4 *)(lVar1 + 0x58) = 0;
  *(code **)(lVar1 + 0x10) = FUN_10043fb7c;
  *(undefined4 *)(lVar1 + 0x18) = 2;
  return;
}




void FUN_1003f0b28(long param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  int *piVar4;
  undefined4 local_40 [2];
  undefined4 local_38;
  
  *(uint *)(param_1 + 0x340) = *(uint *)(param_1 + 0x340) | 0x80;
  lVar1 = FUN_10042e2c8();
  plVar2 = (long *)FUN_10049b7c4(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))
                             (plVar2,"build://Sounds/Environment.assetbundle/sfx_teleport.mp3");
  (**(code **)(*plVar2 + 0x28))(0x3f666666);
  lVar1 = FUN_10042e498(param_1);
  plVar2 = (long *)FUN_100433e34(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_Withdraw_Ping_10185bd90);
  local_40[0] = *(undefined4 *)(param_1 + 0x31c);
  local_38 = 1;
  (**(code **)(*plVar2 + 0x18))(plVar2,local_40);
  lVar1 = FUN_10042f8e8(param_1);
  lVar3 = FUN_10043aaa4(lVar1 + 0x10);
  *(code **)(lVar3 + 0x10) = FUN_10043fb90;
  piVar4 = (int *)(lVar3 + 0x18);
  if ((*piVar4 == 0) || (piVar4 = (int *)(lVar3 + 0x1c), *piVar4 == 0)) {
    FUN_1003a4e5c(piVar4,PTR_s_Buff_Item_TeleportBoots_EndPoint_10185abe0);
  }
  plVar2 = (long *)FUN_10043b538(lVar1 + 0x10);
  (**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_Item_TeleportBoots_EndPoint_10185abe0);
  lVar1 = FUN_10042fdc4(param_1);
  plVar2 = (long *)FUN_1004385a0(lVar1 + 0x10);
  (**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_Withdraw_Ping_10185bd90);
  return;
}




void FUN_1003f0c58(long param_1)

{
  long lVar1;
  long *plVar2;
  undefined4 local_40 [2];
  undefined4 local_38;
  
  *(uint *)(param_1 + 0x340) = *(uint *)(param_1 + 0x340) | 0x80;
  lVar1 = FUN_10042e2c8();
  plVar2 = (long *)FUN_100441e68(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x60))();
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Teleport_Channel");
  (**(code **)(*plVar2 + 0xb0))(plVar2,1);
  plVar2 = (long *)FUN_10049b7c4(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))
                             (plVar2,"build://Sounds/Environment.assetbundle/sfx_teleport.mp3");
  (**(code **)(*plVar2 + 0x28))(0x3f666666);
  lVar1 = FUN_10042e498(param_1);
  plVar2 = (long *)FUN_100433e34(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_Withdraw_Ping_10185bd90);
  local_40[0] = *(undefined4 *)(param_1 + 0x31c);
  local_38 = 1;
  (**(code **)(*plVar2 + 0x18))(plVar2,local_40);
  lVar1 = FUN_100433b70(param_1);
  *(code **)(lVar1 + 0x40) = FUN_10049cf68;
  FUN_10044c418(lVar1 + 0x10);
  lVar1 = FUN_1004303b0(param_1);
  plVar2 = (long *)FUN_100441e18(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x38))
                             (plVar2,"build://Sounds/Environment.assetbundle/sfx_teleport_land.mp3")
  ;
  (**(code **)(*plVar2 + 0x28))(0x3f4ccccd);
  lVar1 = FUN_10042fdc4(param_1);
  FUN_10044c418(lVar1 + 0x10);
  return;
}




void FUN_1003f0da8(long param_1)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_10042e2c8();
  plVar2 = (long *)FUN_10049b864(lVar1 + 0x10);
  (**(code **)(*plVar2 + 0x30))(plVar2,4,FUN_10043fbb8);
  if ((*(byte *)(*(long *)(*(long *)(param_1 + 0x10) + 0x10) + 0x2f5) >> 4 & 1) == 0) {
    FUN_100435a7c(param_1,0x1f,"Effect_Teleport_TargetIndicator","CenterBody");
    return;
  }
  lVar1 = FUN_10042e2c8(param_1);
  plVar2 = (long *)FUN_100441e68(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,"Bone_CenterMass");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Teleport_StructureIndicator");
                    /* WARNING: Could not recover jumptable at 0x0001003f0e5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0xb0))(plVar2,1);
  return;
}




void FUN_1003f0e60(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  
  lVar1 = FUN_10042e2c8();
  lVar2 = FUN_10049be00(lVar1 + 0x10);
  *(undefined4 *)(lVar2 + 0x58) = 1;
  *(code **)(lVar2 + 0x10) = FUN_10043e380;
  *(undefined4 *)(lVar2 + 0x18) = 2;
  plVar3 = (long *)FUN_10049bfec(lVar1 + 0x10);
  (**(code **)(*plVar3 + 0x38))();
  lVar1 = FUN_10042e3b0(param_1);
  FUN_10049b814(lVar1 + 0x10);
  return;
}




void FUN_1003f0ec8(long param_1)

{
  long lVar1;
  long *plVar2;
  code *local_38;
  undefined4 local_30;
  
  lVar1 = FUN_10042e2c8();
  lVar1 = lVar1 + 0x10;
  plVar2 = (long *)FUN_10049c148(lVar1);
  (**(code **)(*plVar2 + 0x30))(plVar2,0xd);
  plVar2 = (long *)FUN_100441e68(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,"Bone_CenterMass");
  (**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Slowed_buff");
  plVar2 = (long *)FUN_100430a84(lVar1);
  local_38 = FUN_10043e394;
  local_30 = 2;
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))(plVar2,0xf,2,&local_38);
  (**(code **)(*plVar2 + 0x40))();
  plVar2 = (long *)FUN_100430a84(lVar1);
  local_38 = (code *)CONCAT44(local_38._4_4_,0x3e99999a);
  local_30 = 1;
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))(plVar2,0xd,1,&local_38);
  (**(code **)(*plVar2 + 0x40))();
  FUN_100450f38(&local_38,param_1 + 0x70);
  FUN_100432680(&local_38);
  return;
}




void FUN_1003f0fd0(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined4 uVar4;
  undefined1 auStack_48 [24];
  
  puVar1 = PTR_s__Item_SprintBoots__10185ab00;
  uVar2 = FUN_1010a1520();
  lVar3 = FUN_1010a0e0c(uVar2,0,puVar1,0);
  if (**(long **)(lVar3 + 0x1a8) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined4 *)(**(long **)(lVar3 + 0x1a8) + 8);
  }
  FUN_100450f38(auStack_48,param_1 + 0x98);
  lVar3 = FUN_10043255c(auStack_48);
  *(undefined4 *)(lVar3 + 0x10) = 0;
  *(undefined4 *)(lVar3 + 0x14) = uVar4;
  return;
}




void FUN_1003f104c(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined4 uVar4;
  undefined1 auStack_48 [24];
  
  puVar1 = PTR_s__Item_TravelBoots__10185ab10;
  uVar2 = FUN_1010a1520();
  lVar3 = FUN_1010a0e0c(uVar2,0,puVar1,0);
  if (**(long **)(lVar3 + 0x1a8) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined4 *)(**(long **)(lVar3 + 0x1a8) + 8);
  }
  FUN_100450f38(auStack_48,param_1 + 0x98);
  lVar3 = FUN_10043255c(auStack_48);
  *(undefined4 *)(lVar3 + 0x10) = 0;
  *(undefined4 *)(lVar3 + 0x14) = uVar4;
  return;
}




void FUN_1003f10c8(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 auStack_48 [24];
  
  puVar2 = PTR_s_onPreCalculateDamageExchangeName_10185d520;
  uVar3 = FUN_1004d2524(PTR_s_onPreCalculateDamageExchangeName_10185d520);
  uVar3 = FUN_100015208(puVar2,uVar3,0x12345678);
  *(undefined4 *)(param_1 + 0xa0 + (ulong)*(uint *)(param_1 + 0x160) * 4) = uVar3;
  uVar1 = *(uint *)(param_1 + 0x160);
  *(code **)(param_1 + 0xa0 + (ulong)uVar1 * 8 + 0x40) = FUN_10043d798;
  *(uint *)(param_1 + 0x160) = uVar1 + 1;
  puVar2 = PTR_s__Item_JourneyBoots__10185ab20;
  uVar4 = FUN_1010a1520();
  lVar5 = FUN_1010a0e0c(uVar4,0,puVar2,0);
  if (**(long **)(lVar5 + 0x1a8) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined4 *)(**(long **)(lVar5 + 0x1a8) + 8);
  }
  FUN_100450f38(auStack_48,param_1 + 0x98);
  lVar5 = FUN_10043255c(auStack_48);
  *(undefined4 *)(lVar5 + 0x10) = 0;
  *(undefined4 *)(lVar5 + 0x14) = uVar3;
  return;
}




void FUN_1003f1190(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined4 uVar4;
  undefined1 auStack_48 [24];
  
  puVar1 = PTR_s__Item_HalcyonChargers__10185ab30;
  uVar2 = FUN_1010a1520();
  lVar3 = FUN_1010a0e0c(uVar2,0,puVar1,0);
  if (**(long **)(lVar3 + 0x1a8) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined4 *)(**(long **)(lVar3 + 0x1a8) + 8);
  }
  FUN_100450f38(auStack_48,param_1 + 0x98);
  lVar3 = FUN_10043255c(auStack_48);
  *(undefined4 *)(lVar3 + 0x10) = 0;
  *(undefined4 *)(lVar3 + 0x14) = uVar4;
  return;
}




void FUN_1003f120c(undefined8 param_1)

{
  FUN_10043da34(param_1,FUN_10043daa0);
  return;
}




void FUN_1003f1218(undefined8 param_1)

{
  FUN_10043da34(param_1,FUN_10043dab4);
  return;
}




void FUN_1003f1224(undefined8 param_1)

{
  FUN_10043da34(param_1,FUN_10043dac8);
  return;
}




void FUN_1003f1230(undefined8 param_1)

{
  FUN_10043da34(param_1,FUN_10043dadc);
  return;
}




void FUN_1003f123c(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  long lVar4;
  undefined1 auStack_38 [24];
  
  puVar2 = PTR_s_onBuffIntervalName_10185d558;
  uVar3 = FUN_1004d2524(PTR_s_onBuffIntervalName_10185d558);
  uVar3 = FUN_100015208(puVar2,uVar3,0x12345678);
  *(undefined4 *)(param_1 + 0xa0 + (ulong)*(uint *)(param_1 + 0x160) * 4) = uVar3;
  uVar1 = *(uint *)(param_1 + 0x160);
  *(code **)(param_1 + 0xa0 + (ulong)uVar1 * 8 + 0x40) = FUN_10043e7d8;
  *(uint *)(param_1 + 0x160) = uVar1 + 1;
  FUN_100450f38(auStack_38,param_1 + 0x98);
  lVar4 = FUN_100431ad4(auStack_38);
  *(ushort *)(lVar4 + 0x74) = *(ushort *)(lVar4 + 0x74) & 0xff98 | 0x21;
  *(char **)(lVar4 + 0x10) = "Effect_MulledWine_buff";
  FUN_100450f38(auStack_38,param_1 + 0x70);
  FUN_1004354f8(auStack_38);
  return;
}




void FUN_1003f12f8(long param_1)

{
  undefined1 auStack_28 [24];
  
  *(code **)(param_1 + 0x330) = FUN_100437424;
  FUN_100450f38(auStack_28,param_1 + 0x70);
  FUN_1004354f8(auStack_28);
  return;
}




void FUN_1003f1330(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  
  *(undefined4 *)(param_1 + 0x328) = 0x3f000000;
  uVar3 = FUN_1004d2524("timeOfLastDamageExchange");
  uVar4 = FUN_100015208("timeOfLastDamageExchange",uVar3,0x12345678);
  (**(code **)(*(long *)(param_1 + 0x168) + 8))(param_1 + 0x168,uVar4);
  uVar3 = FUN_1004d2524("timeOfLastDamageExchange");
  uVar4 = FUN_100015208("timeOfLastDamageExchange",uVar3,0x12345678);
  puVar5 = (undefined4 *)(**(code **)(*(long *)(param_1 + 0x168) + 0x10))(param_1 + 0x168,uVar4);
  *puVar5 = 0;
  puVar2 = PTR_s_onBuffIntervalName_10185d558;
  uVar3 = FUN_1004d2524(PTR_s_onBuffIntervalName_10185d558);
  uVar3 = FUN_100015208(puVar2,uVar3,0x12345678);
  *(undefined4 *)(param_1 + 0xa0 + (ulong)*(uint *)(param_1 + 0x160) * 4) = uVar3;
  uVar1 = *(uint *)(param_1 + 0x160);
  *(code **)(param_1 + 0xe0 + (ulong)uVar1 * 8) = FUN_10043c50c;
  *(uint *)(param_1 + 0x160) = uVar1 + 1;
  puVar2 = PTR_s_onPreCalculateDamageExchangeName_10185d520;
  uVar3 = FUN_1004d2524(PTR_s_onPreCalculateDamageExchangeName_10185d520);
  uVar3 = FUN_100015208(puVar2,uVar3,0x12345678);
  *(undefined4 *)(param_1 + 0xa0 + (ulong)*(uint *)(param_1 + 0x160) * 4) = uVar3;
  uVar1 = *(uint *)(param_1 + 0x160);
  *(code **)(param_1 + 0xe0 + (ulong)uVar1 * 8) = FUN_10043c66c;
  *(uint *)(param_1 + 0x160) = uVar1 + 1;
  return;
}




void FUN_1003f145c(long param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  int iVar9;
  float fVar10;
  undefined4 uVar11;
  float fVar12;
  undefined4 uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined1 auStack_88 [24];
  
  puVar2 = PTR_s__Item_Flare__10185ba48;
  uVar4 = FUN_1010a1520();
  lVar5 = FUN_1010a0e0c(uVar4,0,puVar2,0);
  if (**(long **)(lVar5 + 0x1a8) == 0) {
    fVar10 = 0.0;
  }
  else {
    fVar10 = *(float *)(**(long **)(lVar5 + 0x1a8) + 8);
  }
  *(float *)(param_1 + 0x318) = fVar10;
  if (*(float *)(param_1 + 0x31c) < fVar10) {
    *(float *)(param_1 + 0x31c) = fVar10;
  }
  *(uint *)(param_1 + 0x340) =
       *(uint *)(param_1 + 0x340) & 0xfffe0 | (uint)(fVar10 < 0.0) << 4 |
       *(uint *)(param_1 + 0x340) & 0xfff0000f;
  lVar5 = FUN_10042e498(param_1);
  plVar6 = (long *)FUN_100433e34(lVar5 + 0x10);
  (**(code **)(*plVar6 + 0x30))(plVar6,PTR_s_Buff_Revealed_10185a448);
  FUN_100450f38(auStack_88,param_1 + 0x68);
  lVar5 = FUN_1003e10f0();
  uVar3 = DAT_101e94364;
  fVar10 = DAT_101e942a4;
  puVar2 = PTR_s__Item_ScoutTrap__10185ab90;
  bVar1 = *(byte *)(lVar5 + 0xe5);
  lVar5 = *(long *)(*(long *)(param_1 + 0x10) + 0x10);
  uVar13 = *(undefined4 *)(lVar5 + 0x250);
  fVar15 = *(float *)(lVar5 + 0x254);
  uVar11 = *(undefined4 *)(lVar5 + 600);
  fVar16 = *(float *)(lVar5 + 0x2ec);
  lVar5 = *(long *)(lVar5 + 0x40);
  fVar17 = *(float *)(lVar5 + 0x7c);
  fVar18 = *(float *)(lVar5 + 0x130);
  fVar14 = *(float *)(lVar5 + 0x298);
  fVar19 = *(float *)(lVar5 + 0x1e4);
  uVar4 = FUN_1010a1520();
  lVar5 = FUN_1010a0e0c(uVar4,0,puVar2,0);
  fVar12 = 0.0;
  if (**(long **)(lVar5 + 0x1a8) != 0) {
    lVar7 = 8;
    do {
      lVar8 = *(long *)((long)*(long **)(lVar5 + 0x1a8) + lVar7);
      if (lVar8 == 0) break;
      iVar9 = (int)lVar7;
      lVar7 = lVar7 + 8;
    } while (iVar9 != 0x20);
    fVar12 = 0.0;
    if (lVar8 != 0) {
      fVar12 = *(float *)(lVar8 + 8);
    }
  }
  fVar17 = fVar17 + fVar18 * (fVar14 + 1.0);
  NEON_fminnm(fVar17 + fVar17 * fVar19,uVar3);
  fVar10 = fVar10 + fVar12 + -0.1;
  lVar5 = FUN_100437600(auStack_88);
  *(undefined8 *)(lVar5 + 0x18) = 0;
  *(undefined1 *)(lVar5 + 0x20) = 1;
  *(undefined4 *)(lVar5 + 0x24) = uVar13;
  *(float *)(lVar5 + 0x28) = fVar16 + fVar15;
  *(undefined4 *)(lVar5 + 0x2c) = uVar11;
  *(undefined8 *)(lVar5 + 0x30) = 0;
  *(undefined8 *)(lVar5 + 0x38) = 0;
  *(float *)(lVar5 + 0x40) = fVar10 * fVar10;
  *(undefined8 *)(lVar5 + 0x4c) = 0x3f800000bf800000;
  *(undefined8 *)(lVar5 + 0x44) = 0xc0000000bf800000;
  *(undefined1 *)(lVar5 + 0x54) = 0xff;
  *(undefined8 *)(lVar5 + 0x60) = 0xffffffff00000000;
  *(undefined8 *)(lVar5 + 0x58) = 0xffffffff00080000;
  *(byte *)(lVar5 + 0x6a) = bVar1 | 0x14;
  *(undefined2 *)(lVar5 + 0x68) = 0xc120;
  *(byte *)(lVar5 + 0x94) = *(byte *)(lVar5 + 0x94) & 0xfc | 1;
  lVar5 = FUN_100436680(auStack_88);
  *(undefined **)(lVar5 + 0x10) = PTR_s_Buff_Stealth_10185aba0;
  lVar5 = FUN_100431e0c(auStack_88);
  *(undefined **)(lVar5 + 0x10) = PTR_s_Buff_GloballyVisible_10185a1f0;
  *(undefined4 *)(lVar5 + 0x30) = 0xbf800000;
  *(undefined8 *)(lVar5 + 0x34) = 0xffffffff00000001;
  *(undefined8 *)(lVar5 + 0x44) = 0;
  *(undefined8 *)(lVar5 + 0x3c) = 0;
  FUN_100431f2c(auStack_88);
  lVar5 = FUN_10042e2c8(param_1);
  lVar5 = lVar5 + 0x10;
  plVar6 = (long *)FUN_100441e68(lVar5);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x68))(plVar6,"FlareHoverPoint");
  plVar6 = (long *)(**(code **)(*plVar6 + 0x48))(plVar6,"Effect_Flare_Proj_E");
  (**(code **)(*plVar6 + 0x50))(plVar6,"Effect_Flare_Proj_A");
  plVar6 = (long *)FUN_100441e68(lVar5);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x60))();
  plVar6 = (long *)(**(code **)(*plVar6 + 0x48))(plVar6,"Effect_Flare_Ring_E");
  plVar6 = (long *)(**(code **)(*plVar6 + 0x50))(plVar6,"Effect_Flare_Ring_A");
  (**(code **)(*plVar6 + 0xb0))(plVar6,1);
  plVar6 = (long *)FUN_10049b7c4(lVar5);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x30))(plVar6,"build://Sounds/Items/item_flare_loop.mp3");
  uVar4 = FUN_1010a1520();
  lVar5 = FUN_1010a0e0c(uVar4,0,"*KindredSoundBalance*",0);
  fVar10 = *(float *)(lVar5 + 0x14);
  uVar4 = FUN_1010a1520();
  lVar5 = FUN_1010a0e0c(uVar4,0,"*KindredSoundBalance*",0);
  (**(code **)(*plVar6 + 0x28))(*(float *)(lVar5 + 0xc) + fVar10,plVar6);
  lVar5 = FUN_10042fdc4(param_1);
  plVar6 = (long *)FUN_100441e18(lVar5 + 0x10);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x38))(plVar6,"build://Sounds/Items/item_flare_end.mp3");
  uVar4 = FUN_1010a1520();
  lVar7 = FUN_1010a0e0c(uVar4,0,"*KindredSoundBalance*",0);
  fVar10 = *(float *)(lVar7 + 0x18);
  uVar4 = FUN_1010a1520();
  lVar7 = FUN_1010a0e0c(uVar4,0,"*KindredSoundBalance*",0);
  (**(code **)(*plVar6 + 0x28))(*(float *)(lVar7 + 0xc) + fVar10,plVar6);
  FUN_100434ac8(lVar5 + 0x10);
  return;
}




void FUN_1003f1844(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  float fVar6;
  
  puVar1 = PTR_s__Item_FlareLoader__10185ba50;
  uVar2 = FUN_1010a1520();
  lVar3 = FUN_1010a0e0c(uVar2,0,puVar1,0);
  if (**(long **)(lVar3 + 0x1a8) == 0) {
    fVar6 = 0.0;
  }
  else {
    fVar6 = *(float *)(**(long **)(lVar3 + 0x1a8) + 8);
  }
  *(float *)(param_1 + 0x318) = fVar6;
  if (*(float *)(param_1 + 0x31c) < fVar6) {
    *(float *)(param_1 + 0x31c) = fVar6;
  }
  *(uint *)(param_1 + 0x340) =
       *(uint *)(param_1 + 0x340) & 0xfffe0 | (uint)(fVar6 < 0.0) << 4 |
       *(uint *)(param_1 + 0x340) & 0xfff0000f;
  lVar3 = FUN_10042e498(param_1);
  plVar4 = (long *)FUN_100433e34(lVar3 + 0x10);
  (**(code **)(*plVar4 + 0x30))(plVar4,PTR_s_Buff_Revealed_10185a448);
  lVar3 = FUN_10042e2c8(param_1);
  lVar3 = lVar3 + 0x10;
  plVar4 = (long *)FUN_100441e68(lVar3);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x68))(plVar4,"FlareHoverPoint");
  plVar4 = (long *)(**(code **)(*plVar4 + 0x48))(plVar4,"Effect_Flare_Proj_E");
  (**(code **)(*plVar4 + 0x50))(plVar4,"Effect_Flare_Proj_A");
  plVar4 = (long *)FUN_100441e68(lVar3);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x60))();
  plVar4 = (long *)(**(code **)(*plVar4 + 0x48))(plVar4,"Effect_Flare_Ring_E");
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))(plVar4,"Effect_Flare_Ring_A");
  (**(code **)(*plVar4 + 0xb0))(plVar4,1);
  plVar4 = (long *)FUN_10049b7c4(lVar3);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x30))(plVar4,"build://Sounds/Items/item_flare_loop.mp3");
  uVar2 = FUN_1010a1520();
  lVar3 = FUN_1010a0e0c(uVar2,0,"*KindredSoundBalance*",0);
  fVar6 = *(float *)(lVar3 + 0x14);
  uVar2 = FUN_1010a1520();
  lVar3 = FUN_1010a0e0c(uVar2,0,"*KindredSoundBalance*",0);
  (**(code **)(*plVar4 + 0x28))(*(float *)(lVar3 + 0xc) + fVar6,plVar4);
  lVar3 = FUN_10042fdc4(param_1);
  plVar4 = (long *)FUN_100441e18(lVar3 + 0x10);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x38))(plVar4,"build://Sounds/Items/item_flare_end.mp3");
  uVar2 = FUN_1010a1520();
  lVar5 = FUN_1010a0e0c(uVar2,0,"*KindredSoundBalance*",0);
  fVar6 = *(float *)(lVar5 + 0x18);
  uVar2 = FUN_1010a1520();
  lVar5 = FUN_1010a0e0c(uVar2,0,"*KindredSoundBalance*",0);
  (**(code **)(*plVar4 + 0x28))(*(float *)(lVar5 + 0xc) + fVar6,plVar4);
  FUN_100434ac8(lVar3 + 0x10);
  return;
}




void FUN_1003f1a78(void)

{
  return;
}




void FUN_1003f1a7c(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  
  puVar2 = PTR_s_onBeforeApplyDamageName_10185d570;
  uVar3 = FUN_1004d2524(PTR_s_onBeforeApplyDamageName_10185d570);
  uVar3 = FUN_100015208(puVar2,uVar3,0x12345678);
  *(undefined4 *)(param_1 + 0xa0 + (ulong)*(uint *)(param_1 + 0x160) * 4) = uVar3;
  uVar1 = *(uint *)(param_1 + 0x160);
  *(code **)(param_1 + 0xa0 + (ulong)uVar1 * 8 + 0x40) = FUN_10043c734;
  *(uint *)(param_1 + 0x160) = uVar1 + 1;
  return;
}




void FUN_1003f1ae4(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  
  *(uint *)(param_1 + 0x340) = *(uint *)(param_1 + 0x340) | 0x10;
  puVar2 = PTR_s_onBuffIntervalName_10185d558;
  if (DAT_101d23a38 != '\0') {
    uVar3 = FUN_1004d2524(PTR_s_onBuffIntervalName_10185d558);
    uVar3 = FUN_100015208(puVar2,uVar3,0x12345678);
    *(undefined4 *)(param_1 + 0xa0 + (ulong)*(uint *)(param_1 + 0x160) * 4) = uVar3;
    uVar1 = *(uint *)(param_1 + 0x160);
    *(code **)(param_1 + 0xe0 + (ulong)uVar1 * 8) = FUN_10043c7ac;
    *(uint *)(param_1 + 0x160) = uVar1 + 1;
    puVar2 = PTR_s_onAfterApplyDamageName_10185d578;
    uVar3 = FUN_1004d2524(PTR_s_onAfterApplyDamageName_10185d578);
    uVar3 = FUN_100015208(puVar2,uVar3,0x12345678);
    *(undefined4 *)(param_1 + 0xa0 + (ulong)*(uint *)(param_1 + 0x160) * 4) = uVar3;
    uVar1 = *(uint *)(param_1 + 0x160);
    *(code **)(param_1 + 0xe0 + (ulong)uVar1 * 8) = FUN_10043c920;
    *(uint *)(param_1 + 0x160) = uVar1 + 1;
  }
  return;
}




void FUN_1003f1bb0(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  undefined1 auStack_48 [24];
  
  FUN_100450f38(auStack_48,param_1 + 0x68);
  FUN_100431d2c(auStack_48);
  puVar1 = PTR_s__Item_SerpentMask__10185baa0;
  uVar2 = FUN_1010a1520();
  lVar3 = FUN_1010a0e0c(uVar2,0,puVar1,0);
  lVar4 = FUN_100431e0c(auStack_48);
  if (**(long **)(lVar3 + 0x1a8) != 0) {
    lVar6 = 0;
    do {
      lVar7 = *(long *)((long)*(long **)(lVar3 + 0x1a8) + lVar6 + 8);
      iVar5 = (int)lVar6;
      lVar6 = lVar6 + 8;
    } while (lVar7 != 0 && iVar5 != 8);
    if (lVar7 != 0) {
      iVar5 = (int)*(float *)(lVar7 + 8);
      goto LAB_1003f1c48;
    }
  }
  iVar5 = 0;
LAB_1003f1c48:
  *(undefined **)(lVar4 + 0x10) = PTR_s_Buff_Item_SerpentMask_10185c368;
  *(undefined4 *)(lVar4 + 0x30) = 0xbf800000;
  *(int *)(lVar4 + 0x34) = iVar5;
  *(undefined4 *)(lVar4 + 0x38) = 0xffffffff;
  *(undefined8 *)(lVar4 + 0x44) = 0;
  *(undefined8 *)(lVar4 + 0x3c) = 0;
  FUN_100431f2c(auStack_48);
  FUN_100450f38(auStack_48,param_1 + 0x80);
  FUN_100431d2c(auStack_48);
  lVar3 = FUN_100436680(auStack_48);
  *(undefined **)(lVar3 + 0x10) = PTR_s_Buff_Item_SerpentMask_10185c368;
  FUN_100431f2c(auStack_48);
  return;
}




void FUN_1003f1cac(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  
  *(uint *)(param_1 + 0x340) = *(uint *)(param_1 + 0x340) | 0x10;
  puVar2 = PTR_s_onBuffIntervalName_10185d558;
  if (DAT_101d23a38 != '\0') {
    uVar3 = FUN_1004d2524(PTR_s_onBuffIntervalName_10185d558);
    uVar3 = FUN_100015208(puVar2,uVar3,0x12345678);
    *(undefined4 *)(param_1 + 0xa0 + (ulong)*(uint *)(param_1 + 0x160) * 4) = uVar3;
    uVar1 = *(uint *)(param_1 + 0x160);
    *(code **)(param_1 + 0xe0 + (ulong)uVar1 * 8) = FUN_10043ca94;
    *(uint *)(param_1 + 0x160) = uVar1 + 1;
    puVar2 = PTR_s_onAfterApplyDamageName_10185d578;
    uVar3 = FUN_1004d2524(PTR_s_onAfterApplyDamageName_10185d578);
    uVar3 = FUN_100015208(puVar2,uVar3,0x12345678);
    *(undefined4 *)(param_1 + 0xa0 + (ulong)*(uint *)(param_1 + 0x160) * 4) = uVar3;
    uVar1 = *(uint *)(param_1 + 0x160);
    *(code **)(param_1 + 0xe0 + (ulong)uVar1 * 8) = FUN_10043cc08;
    *(uint *)(param_1 + 0x160) = uVar1 + 1;
  }
  return;
}




void FUN_1003f1d78(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  undefined1 auStack_48 [24];
  
  FUN_100450f38(auStack_48,param_1 + 0x68);
  FUN_100431d2c(auStack_48);
  puVar1 = PTR_s__Item_EveOfHarvest__10185ba40;
  uVar2 = FUN_1010a1520();
  lVar3 = FUN_1010a0e0c(uVar2,0,puVar1,0);
  lVar4 = FUN_100431e0c(auStack_48);
  if (**(long **)(lVar3 + 0x1a8) != 0) {
    lVar6 = 0;
    do {
      lVar7 = *(long *)((long)*(long **)(lVar3 + 0x1a8) + lVar6 + 8);
      iVar5 = (int)lVar6;
      lVar6 = lVar6 + 8;
    } while (lVar7 != 0 && iVar5 != 8);
    if (lVar7 != 0) {
      iVar5 = (int)*(float *)(lVar7 + 8);
      goto LAB_1003f1e10;
    }
  }
  iVar5 = 0;
LAB_1003f1e10:
  *(undefined **)(lVar4 + 0x10) = PTR_s_Buff_Item_EveOfHarvest_10185c378;
  *(undefined4 *)(lVar4 + 0x30) = 0xbf800000;
  *(int *)(lVar4 + 0x34) = iVar5;
  *(undefined4 *)(lVar4 + 0x38) = 0xffffffff;
  *(undefined8 *)(lVar4 + 0x44) = 0;
  *(undefined8 *)(lVar4 + 0x3c) = 0;
  FUN_100431f2c(auStack_48);
  FUN_100450f38(auStack_48,param_1 + 0x80);
  FUN_100431d2c(auStack_48);
  lVar3 = FUN_100436680(auStack_48);
  *(undefined **)(lVar3 + 0x10) = PTR_s_Buff_Item_EveOfHarvest_10185c378;
  FUN_100431f2c(auStack_48);
  return;
}




void FUN_1003f1e74(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  undefined4 uVar8;
  undefined1 auStack_48 [24];
  
  FUN_100450f38(auStack_48,param_1 + 0x98);
  lVar2 = FUN_100431ad4(auStack_48);
  *(char **)(lVar2 + 0x20) = "OverHead";
  *(ushort *)(lVar2 + 0x74) = *(ushort *)(lVar2 + 0x74) & 0xff98 | 0x22;
  *(char **)(lVar2 + 0x10) = "Effect_MinionCandy_buff";
  FUN_100450f38(auStack_48,param_1 + 0x70);
  FUN_1004354f8(auStack_48);
  FUN_100450f38(auStack_48,param_1 + 0x98);
  puVar1 = PTR_s__Item_MinionCandy__10185ab40;
  uVar3 = FUN_1010a1520();
  lVar2 = FUN_1010a0e0c(uVar3,0,puVar1,0);
  lVar4 = FUN_100436e1c(auStack_48);
  uVar8 = 0;
  if (**(long **)(lVar2 + 0x1a8) != 0) {
    lVar6 = 0;
    do {
      lVar7 = *(long *)((long)*(long **)(lVar2 + 0x1a8) + lVar6 + 8);
      if (lVar7 == 0) break;
      iVar5 = (int)lVar6;
      lVar6 = lVar6 + 8;
    } while (iVar5 != 0x20);
    uVar8 = 0;
    if (lVar7 != 0) {
      uVar8 = *(undefined4 *)(lVar7 + 8);
    }
  }
  *(undefined8 *)(lVar4 + 0x10) = 0x100000007;
  *(undefined4 *)(lVar4 + 0x18) = uVar8;
  lVar4 = FUN_100436e1c(auStack_48);
  uVar8 = 0;
  if (**(long **)(lVar2 + 0x1a8) != 0) {
    lVar6 = 8;
    do {
      lVar7 = *(long *)((long)*(long **)(lVar2 + 0x1a8) + lVar6);
      if (lVar7 == 0) break;
      iVar5 = (int)lVar6;
      lVar6 = lVar6 + 8;
    } while (iVar5 != 0x30);
    uVar8 = 0;
    if (lVar7 != 0) {
      uVar8 = *(undefined4 *)(lVar7 + 8);
    }
  }
  *(undefined8 *)(lVar4 + 0x10) = 0x100000008;
  *(undefined4 *)(lVar4 + 0x18) = uVar8;
  lVar4 = FUN_100436e1c(auStack_48);
  uVar8 = 0;
  if (**(long **)(lVar2 + 0x1a8) != 0) {
    lVar6 = 0;
    do {
      lVar7 = *(long *)((long)*(long **)(lVar2 + 0x1a8) + lVar6 + 8);
      iVar5 = (int)lVar6;
      lVar6 = lVar6 + 8;
    } while (lVar7 != 0 && iVar5 != 0x10);
    uVar8 = 0;
    if (lVar7 != 0) {
      uVar8 = *(undefined4 *)(lVar7 + 8);
    }
  }
  *(undefined8 *)(lVar4 + 0x10) = 0x200000004;
  *(undefined4 *)(lVar4 + 0x18) = uVar8;
  lVar4 = FUN_100436e1c(auStack_48);
  uVar8 = 0;
  if (**(long **)(lVar2 + 0x1a8) != 0) {
    lVar6 = 8;
    do {
      lVar7 = *(long *)((long)*(long **)(lVar2 + 0x1a8) + lVar6);
      if (lVar7 == 0) break;
      iVar5 = (int)lVar6;
      lVar6 = lVar6 + 8;
    } while (iVar5 != 0x20);
    uVar8 = 0;
    if (lVar7 != 0) {
      uVar8 = *(undefined4 *)(lVar7 + 8);
    }
  }
  *(undefined8 *)(lVar4 + 0x10) = 0x20000001c;
  *(undefined4 *)(lVar4 + 0x18) = uVar8;
  lVar4 = FUN_10043255c(auStack_48);
  uVar8 = 0;
  if (**(long **)(lVar2 + 0x1a8) != 0) {
    lVar6 = 8;
    do {
      lVar7 = *(long *)((long)*(long **)(lVar2 + 0x1a8) + lVar6);
      if (lVar7 == 0) break;
      iVar5 = (int)lVar6;
      lVar6 = lVar6 + 8;
    } while (iVar5 != 0x40);
    uVar8 = 0;
    if (lVar7 != 0) {
      uVar8 = *(undefined4 *)(lVar7 + 8);
    }
  }
  *(undefined4 *)(lVar4 + 0x10) = 1;
  *(undefined4 *)(lVar4 + 0x14) = uVar8;
  return;
}




void FUN_1003f20ac(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  code *local_40;
  undefined4 local_38;
  
  lVar1 = FUN_10042e2c8();
  plVar2 = (long *)FUN_100441e68(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,"Bone_CenterMass");
  (**(code **)(*plVar2 + 0x48))(plVar2,"Effect_ShiverSteel");
  lVar1 = FUN_10042e694(param_1);
  *(ushort *)(lVar1 + 0x48) = *(ushort *)(lVar1 + 0x48) | 4;
  *(byte *)(lVar1 + 0x60) = *(byte *)(lVar1 + 0x60) & 0xfc | 1;
  *(ushort *)(lVar1 + 0x5a) = *(ushort *)(lVar1 + 0x5a) | 4;
  *(undefined4 *)(lVar1 + 0x54) = 0x100000;
  lVar1 = FUN_10043fc08(lVar1 + 0x10);
  lVar3 = FUN_10049c198(lVar1 + 0x10);
  *(code **)(lVar3 + 8) = FUN_10043e3a8;
  FUN_10043b4e8(lVar1 + 0x88);
  plVar2 = (long *)FUN_100434b18(lVar1 + 0x88);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))
                             (plVar2,PTR_s_Buff_Item_ShiversteelMeleeSlow_10185c388);
  local_40 = FUN_10043e3c0;
  local_38 = 2;
  (**(code **)(*plVar2 + 0x18))(plVar2,&local_40);
  FUN_10043b4e8(lVar1 + 0xa0);
  plVar2 = (long *)FUN_100434b18(lVar1 + 0xa0);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))
                             (plVar2,PTR_s_Buff_Item_ShiversteelRangedSlow_10185c390);
  local_40 = FUN_10043e3c0;
  local_38 = 2;
  (**(code **)(*plVar2 + 0x18))(plVar2,&local_40);
  return;
}




void FUN_1003f21f0(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined4 local_30 [2];
  undefined4 local_28;
  
  puVar1 = PTR_s__Item_Shiversteel__10185abc8;
  uVar2 = FUN_1010a1520();
  lVar3 = FUN_1010a0e0c(uVar2,0,puVar1,0);
  local_30[0] = 0;
  if ((**(long **)(lVar3 + 0x1a8) != 0) && (lVar3 = (*(long **)(lVar3 + 0x1a8))[1], lVar3 != 0)) {
    local_30[0] = *(undefined4 *)(lVar3 + 8);
  }
  local_28 = 1;
  FUN_10042eb40(param_1,local_30);
  return;
}




void FUN_1003f2264(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  undefined4 local_30 [2];
  undefined4 local_28;
  
  puVar1 = PTR_s__Item_Shiversteel__10185abc8;
  uVar2 = FUN_1010a1520();
  lVar3 = FUN_1010a0e0c(uVar2,0,puVar1,0);
  local_30[0] = 0;
  if (**(long **)(lVar3 + 0x1a8) != 0) {
    lVar5 = 0;
    do {
      lVar6 = *(long *)((long)*(long **)(lVar3 + 0x1a8) + lVar5 + 8);
      iVar4 = (int)lVar5;
      lVar5 = lVar5 + 8;
    } while (lVar6 != 0 && iVar4 != 8);
    if (lVar6 != 0) {
      local_30[0] = *(undefined4 *)(lVar6 + 8);
    }
  }
  local_28 = 1;
  FUN_10042eb40(param_1,local_30);
  return;
}




void FUN_1003f22f0(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  
  puVar2 = PTR_s_onAfterApplyDamageName_10185d578;
  uVar3 = FUN_1004d2524(PTR_s_onAfterApplyDamageName_10185d578);
  uVar3 = FUN_100015208(puVar2,uVar3,0x12345678);
  *(undefined4 *)(param_1 + 0xa0 + (ulong)*(uint *)(param_1 + 0x160) * 4) = uVar3;
  uVar1 = *(uint *)(param_1 + 0x160);
  *(code **)(param_1 + 0xa0 + (ulong)uVar1 * 8 + 0x40) = FUN_10043e3d4;
  *(uint *)(param_1 + 0x160) = uVar1 + 1;
  return;
}




void FUN_1003f2358(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  
  lVar1 = FUN_100433910();
  *(byte *)(lVar1 + 0x38) = *(byte *)(lVar1 + 0x38) | 1;
  lVar1 = FUN_10043fc08(lVar1 + 0x10);
  lVar2 = FUN_10049cc18(lVar1 + 0x10);
  *(undefined4 *)(lVar2 + 8) = 0x704bbe25;
  plVar3 = (long *)FUN_100433e34(lVar1 + 0xa0);
  (**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Item_Aftershock_attackBuff_10185c3a8);
  lVar1 = FUN_10042fdc4(param_1);
  plVar3 = (long *)FUN_1004385a0(lVar1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x0001003f23d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Item_Aftershock_attackBuff_10185c3a8);
  return;
}




void FUN_1003f23dc(long param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  code *local_68;
  undefined4 local_60;
  
  lVar1 = FUN_10042e694();
  *(ushort *)(lVar1 + 0x48) = *(ushort *)(lVar1 + 0x48) | 0x40;
  *(byte *)(lVar1 + 0x60) = *(byte *)(lVar1 + 0x60) & 0xfc | 1;
  *(undefined2 *)(lVar1 + 0x5a) = 4;
  lVar1 = FUN_10043fc08(lVar1 + 0x10);
  lVar2 = FUN_10049cc18(lVar1 + 0x10);
  *(undefined4 *)(lVar2 + 8) = 0x704bbe25;
  lVar1 = lVar1 + 0xa0;
  plVar3 = (long *)FUN_10043d6ac(lVar1);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,"Aftershock");
  local_68 = FUN_10043d784;
  local_60 = 2;
  plVar3 = (long *)(**(code **)(*plVar3 + 0x20))(plVar3,&local_68);
  (**(code **)(*plVar3 + 0x58))();
  FUN_10043b4e8(lVar1);
  plVar3 = (long *)FUN_10043ab94(lVar1);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x40))();
  (**(code **)(*plVar3 + 0x48))(plVar3,"PCT_MAX_HEALTH",PTR_s__Item_Aftershock__10185b9f0);
  plVar3 = (long *)FUN_100434b18(lVar1);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))
                             (plVar3,PTR_s_Buff_Item_ShowAftershockHitEffec_10185c2e0);
  local_68 = (code *)CONCAT44(local_68._4_4_,0x3dcccccd);
  local_60 = 1;
  (**(code **)(*plVar3 + 0x18))(plVar3,&local_68);
  FUN_1004385f0(lVar1);
  FUN_100450f38(&local_68,param_1 + 0x98);
  lVar1 = FUN_100431ad4(&local_68);
  *(char **)(lVar1 + 0x28) = "Bone_LeftHand";
  *(ushort *)(lVar1 + 0x74) = *(ushort *)(lVar1 + 0x74) & 0xff98 | 0x43;
  *(char **)(lVar1 + 0x10) = "Effect_AfterShock_Armed";
  lVar1 = FUN_100431ad4(&local_68);
  *(char **)(lVar1 + 0x28) = "Bone_RightHand";
  *(ushort *)(lVar1 + 0x74) = *(ushort *)(lVar1 + 0x74) & 0xff98 | 0x43;
  *(char **)(lVar1 + 0x10) = "Effect_AfterShock_Armed";
  FUN_100450f38(&local_68,param_1 + 0x70);
  FUN_1004354f8(&local_68);
  lVar1 = FUN_10042fdc4(param_1);
  plVar3 = (long *)FUN_10043d6ac(lVar1 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,"Aftershock");
  local_68 = FUN_10043d784;
  local_60 = 2;
  (**(code **)(*plVar3 + 0x20))(plVar3,&local_68);
  return;
}




void FUN_1003f25ec(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  float fVar7;
  undefined1 auStack_48 [24];
  
  puVar2 = PTR_s__Item_Bonesaw__10185ba08;
  uVar4 = FUN_1010a1520();
  lVar5 = FUN_1010a0e0c(uVar4,0,puVar2,0);
  puVar2 = PTR_s_onTimeoutName_10185d538;
  uVar3 = FUN_1004d2524(PTR_s_onTimeoutName_10185d538);
  uVar3 = FUN_100015208(puVar2,uVar3,0x12345678);
  *(undefined4 *)(param_1 + 0xa0 + (ulong)*(uint *)(param_1 + 0x160) * 4) = uVar3;
  uVar1 = *(uint *)(param_1 + 0x160);
  *(code **)(param_1 + 0xa0 + (ulong)uVar1 * 8 + 0x40) = FUN_10043e500;
  *(uint *)(param_1 + 0x160) = uVar1 + 1;
  FUN_100450f38(auStack_48,param_1 + 0x70);
  FUN_1004354f8(auStack_48);
  FUN_100450f38(auStack_48,param_1 + 0x98);
  lVar6 = FUN_100436e1c(auStack_48);
  fVar7 = 0.0;
  if ((**(long **)(lVar5 + 0x1a8) != 0) && (lVar5 = (*(long **)(lVar5 + 0x1a8))[1], lVar5 != 0)) {
    fVar7 = *(float *)(lVar5 + 8);
  }
  *(undefined8 *)(lVar6 + 0x10) = 0x200000007;
  *(float *)(lVar6 + 0x18) = -fVar7;
  return;
}




void FUN_1003f26dc(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  code *local_50;
  undefined4 local_48;
  
  lVar1 = FUN_10043e568();
  *(undefined4 *)(lVar1 + 0x28) = 0x646f4313;
  *(undefined1 *)(lVar1 + 0x2d) = 1;
  plVar2 = (long *)FUN_100441e68(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,"Bone_LeftHand");
  (**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Tension");
  plVar2 = (long *)FUN_100441e68(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,"Bone_RightHand");
  (**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Tension");
  lVar1 = FUN_10042e694(param_1);
  *(ushort *)(lVar1 + 0x48) = *(ushort *)(lVar1 + 0x48) | 4;
  *(byte *)(lVar1 + 0x60) = *(byte *)(lVar1 + 0x60) & 0xfc | 1;
  *(ushort *)(lVar1 + 0x5a) = *(ushort *)(lVar1 + 0x5a) | 4;
  *(undefined4 *)(lVar1 + 0x54) = 0x100000;
  lVar1 = FUN_10043fc08(lVar1 + 0x10);
  lVar3 = FUN_10049cc18(lVar1 + 0x10);
  *(undefined4 *)(lVar3 + 8) = 0x646f4313;
  lVar1 = lVar1 + 0xa0;
  FUN_10043b4e8(lVar1);
  plVar2 = (long *)FUN_10043e658(lVar1);
  local_50 = FUN_10043e6a8;
  local_48 = 3;
  (**(code **)(*plVar2 + 0x30))(plVar2,&local_50);
  plVar2 = (long *)FUN_100434b18(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))
                             (plVar2,PTR_s_Buff_Item_ShowTensionBowHitEffec_10185c3c0);
  local_50 = (code *)CONCAT44(local_50._4_4_,0x3dcccccd);
  local_48 = 1;
  (**(code **)(*plVar2 + 0x18))(plVar2,&local_50);
  plVar2 = (long *)FUN_10043d6ac(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))(plVar2,"TensionBow");
  local_50 = FUN_10043e6bc;
  local_48 = 2;
  plVar2 = (long *)(**(code **)(*plVar2 + 0x20))(plVar2,&local_50);
  (**(code **)(*plVar2 + 0x58))();
  return;
}




void FUN_1003f289c(void)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_10042ea44();
  plVar2 = (long *)FUN_100441e68(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,"Bone_CenterMass");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Tension_Proc");
                    /* WARNING: Could not recover jumptable at 0x0001003f28e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x78))(plVar2,1);
  return;
}




void FUN_1003f28ec(long param_1)

{
  undefined1 auStack_28 [24];
  
  FUN_100450f38(auStack_28,param_1 + 0x70);
  FUN_1004354f8(auStack_28);
  return;
}




void FUN_1003f2918(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  FUN_100450f38(auStack_38,param_1 + 0x68);
  FUN_100431d2c(auStack_38);
  lVar1 = FUN_100431e0c(auStack_38);
  *(undefined **)(lVar1 + 0x10) = PTR_s_Buff_Item_BreakingPoint_10185c3d0;
  *(undefined4 *)(lVar1 + 0x30) = 0xbf800000;
  *(undefined8 *)(lVar1 + 0x34) = 0xffffffff00000001;
  *(undefined8 *)(lVar1 + 0x44) = 0;
  *(undefined8 *)(lVar1 + 0x3c) = 0;
  FUN_100431f2c(auStack_38);
  FUN_100450f38(auStack_38,param_1 + 0x80);
  FUN_100431d2c(auStack_38);
  lVar1 = FUN_100436680(auStack_38);
  *(undefined **)(lVar1 + 0x10) = PTR_s_Buff_Item_BreakingPoint_10185c3d0;
  FUN_100431f2c(auStack_38);
  return;
}




void FUN_1003f29b4(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  long lVar6;
  long lVar7;
  undefined1 auStack_48 [24];
  
  puVar2 = PTR_s_onAfterApplyDamageName_10185d578;
  uVar3 = FUN_1004d2524(PTR_s_onAfterApplyDamageName_10185d578);
  uVar3 = FUN_100015208(puVar2,uVar3,0x12345678);
  *(undefined4 *)(param_1 + 0xa0 + (ulong)*(uint *)(param_1 + 0x160) * 4) = uVar3;
  uVar1 = *(uint *)(param_1 + 0x160);
  *(code **)(param_1 + 0xe0 + (ulong)uVar1 * 8) = FUN_10043d17c;
  *(uint *)(param_1 + 0x160) = uVar1 + 1;
  puVar2 = PTR_s_onBuffIntervalName_10185d558;
  uVar3 = FUN_1004d2524(PTR_s_onBuffIntervalName_10185d558);
  uVar3 = FUN_100015208(puVar2,uVar3,0x12345678);
  *(undefined4 *)(param_1 + 0xa0 + (ulong)*(uint *)(param_1 + 0x160) * 4) = uVar3;
  uVar1 = *(uint *)(param_1 + 0x160);
  *(code **)(param_1 + 0xe0 + (ulong)uVar1 * 8) = FUN_10043d408;
  *(uint *)(param_1 + 0x160) = uVar1 + 1;
  puVar2 = PTR_s_breakingPointTimeOfLastAttack_10185d5d8;
  lVar6 = param_1 + 0x168;
  uVar3 = FUN_1004d2524(PTR_s_breakingPointTimeOfLastAttack_10185d5d8);
  uVar4 = FUN_100015208(puVar2,uVar3,0x12345678);
  (**(code **)(*(long *)(param_1 + 0x168) + 8))(lVar6,uVar4);
  puVar2 = PTR_s_breakingPointRemainingDamage_10185d5d0;
  uVar3 = FUN_1004d2524(PTR_s_breakingPointRemainingDamage_10185d5d0);
  uVar4 = FUN_100015208(puVar2,uVar3,0x12345678);
  (**(code **)(*(long *)(param_1 + 0x168) + 8))(lVar6,uVar4);
  puVar2 = PTR_s_breakingPointRemainingDamage_10185d5d0;
  uVar3 = FUN_1004d2524(PTR_s_breakingPointRemainingDamage_10185d5d0);
  uVar4 = FUN_100015208(puVar2,uVar3,0x12345678);
  puVar5 = (undefined4 *)(**(code **)(*(long *)(param_1 + 0x168) + 0x10))(lVar6,uVar4);
  *puVar5 = 0;
  *(ulong *)(param_1 + 0x344) = *(ulong *)(param_1 + 0x344) & 0xffff0000ffffffff;
  FUN_100450f38(auStack_48,param_1 + 0x98);
  puVar2 = PTR_s__Item_BreakingPoint__10185ba18;
  uVar4 = FUN_1010a1520();
  lVar6 = FUN_1010a0e0c(uVar4,0,puVar2,0);
  lVar7 = FUN_100436e1c(auStack_48);
  uVar3 = 0;
  if ((**(long **)(lVar6 + 0x1a8) != 0) && (lVar6 = (*(long **)(lVar6 + 0x1a8))[1], lVar6 != 0)) {
    uVar3 = *(undefined4 *)(lVar6 + 8);
  }
  *(undefined8 *)(lVar7 + 0x10) = 0x100000004;
  *(undefined4 *)(lVar7 + 0x18) = uVar3;
  return;
}




void FUN_1003f2b8c(long param_1)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  undefined *puVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined4 *puVar7;
  undefined1 auStack_48 [24];
  
  if (DAT_101d23a38 != '\0') {
    lVar1 = param_1 + 0x168;
    uVar5 = FUN_1004d2524("rampTimer");
    uVar6 = FUN_100015208("rampTimer",uVar5,0x12345678);
    (**(code **)(*(long *)(param_1 + 0x168) + 8))(lVar1,uVar6);
    uVar5 = FUN_1004d2524("disableTimer");
    uVar6 = FUN_100015208("disableTimer",uVar5,0x12345678);
    (**(code **)(*(long *)(param_1 + 0x168) + 8))(lVar1,uVar6);
    uVar5 = FUN_1004d2524("rampTimer");
    uVar6 = FUN_100015208("rampTimer",uVar5,0x12345678);
    puVar7 = (undefined4 *)(**(code **)(*(long *)(param_1 + 0x168) + 0x10))(lVar1,uVar6);
    *puVar7 = 0;
    uVar5 = FUN_1004d2524("disableTimer");
    uVar6 = FUN_100015208("disableTimer",uVar5,0x12345678);
    puVar7 = (undefined4 *)(**(code **)(*(long *)(param_1 + 0x168) + 0x10))(lVar1,uVar6);
    *puVar7 = 0;
    puVar4 = PTR_s_onBuffIntervalName_10185d558;
    uVar5 = FUN_1004d2524(PTR_s_onBuffIntervalName_10185d558);
    uVar5 = FUN_100015208(puVar4,uVar5,0x12345678);
    lVar1 = param_1 + 0xa0;
    *(undefined4 *)(lVar1 + (ulong)*(uint *)(param_1 + 0x160) * 4) = uVar5;
    uVar3 = *(uint *)(param_1 + 0x160);
    lVar2 = param_1 + 0xe0;
    *(code **)(lVar2 + (ulong)uVar3 * 8) = FUN_10043c0e0;
    *(uint *)(param_1 + 0x160) = uVar3 + 1;
    puVar4 = PTR_s_onPreCalculateDamageExchangeName_10185d520;
    uVar5 = FUN_1004d2524(PTR_s_onPreCalculateDamageExchangeName_10185d520);
    uVar5 = FUN_100015208(puVar4,uVar5,0x12345678);
    *(undefined4 *)(lVar1 + (ulong)*(uint *)(param_1 + 0x160) * 4) = uVar5;
    uVar3 = *(uint *)(param_1 + 0x160);
    *(code **)(lVar2 + (ulong)uVar3 * 8) = FUN_10043c36c;
    *(uint *)(param_1 + 0x160) = uVar3 + 1;
    puVar4 = PTR_s_onEndName_10185d548;
    uVar5 = FUN_1004d2524(PTR_s_onEndName_10185d548);
    uVar5 = FUN_100015208(puVar4,uVar5,0x12345678);
    *(undefined4 *)(lVar1 + (ulong)*(uint *)(param_1 + 0x160) * 4) = uVar5;
    uVar3 = *(uint *)(param_1 + 0x160);
    *(code **)(lVar2 + (ulong)uVar3 * 8) = FUN_10043c29c;
    *(uint *)(param_1 + 0x160) = uVar3 + 1;
  }
  FUN_100450f38(auStack_48,param_1 + 0x70);
  FUN_1004354f8(auStack_48);
  return;
}




void FUN_1003f2d88(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  long lVar4;
  undefined1 auStack_38 [24];
  
  puVar2 = PTR_s_onAfterApplyDamageName_10185d578;
  uVar3 = FUN_1004d2524(PTR_s_onAfterApplyDamageName_10185d578);
  uVar3 = FUN_100015208(puVar2,uVar3,0x12345678);
  *(undefined4 *)(param_1 + 0xa0 + (ulong)*(uint *)(param_1 + 0x160) * 4) = uVar3;
  uVar1 = *(uint *)(param_1 + 0x160);
  *(code **)(param_1 + 0xa0 + (ulong)uVar1 * 8 + 0x40) = FUN_10043e8e0;
  *(uint *)(param_1 + 0x160) = uVar1 + 1;
  FUN_100450f38(auStack_38,param_1 + 0x80);
  FUN_100431d2c(auStack_38);
  lVar4 = FUN_100436680(auStack_38);
  *(undefined **)(lVar4 + 0x10) = PTR_s_Buff_Item_PoisonedShiv_Payload_10185c3e8;
  FUN_100431f2c(auStack_38);
  return;
}




void FUN_1003f2e28(void)

{
  return;
}




void FUN_1003f2e2c(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  code *local_30;
  undefined4 local_28;
  
  lVar1 = FUN_10042e2c8();
  plVar2 = (long *)FUN_100441e68(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,"Bone_CenterMass");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Item_NullwaveGauntlet_Charge");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,1);
  (**(code **)(*plVar2 + 0x90))();
  lVar1 = FUN_1004303b0(param_1);
  lVar1 = lVar1 + 0x10;
  plVar2 = (long *)FUN_100433e34(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_Item_EMP_ItemSilence_10185c3f8);
  local_30 = FUN_10043eb4c;
  local_28 = 2;
  (**(code **)(*plVar2 + 0x18))(plVar2,&local_30);
  FUN_1004386bc(lVar1);
  plVar2 = (long *)FUN_10043ab94(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x40))();
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))
                             (plVar2,"BaseDamage",PTR_s__Item_NullwaveGauntlet__10185ba70);
  (**(code **)(*plVar2 + 0x20))(plVar2,"PctHealthDamage");
  return;
}




void FUN_1003f2f38(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  FUN_100435a7c(param_1,0x10,"Effect_ItemSilence","OverHead");
  FUN_100450f38(auStack_38,param_1 + 0x98);
  lVar1 = FUN_100431ad4(auStack_38);
  *(char **)(lVar1 + 0x28) = "Bone_CenterMass";
  *(ushort *)(lVar1 + 0x74) = *(ushort *)(lVar1 + 0x74) & 0xff98 | 0x43;
  *(char **)(lVar1 + 0x10) = "Effect_Item_EMP_Hit";
  return;
}




void FUN_1003f2fb8(long param_1)

{
  long lVar1;
  uint uVar2;
  undefined *puVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  undefined1 *puVar7;
  long lVar8;
  long *plVar9;
  
  *(undefined4 *)(param_1 + 0x328) = 0x3e4ccccd;
  if (DAT_101d23a38 != '\0') {
    lVar8 = param_1 + 0x168;
    uVar5 = (*(code *)**(undefined8 **)(param_1 + 0x168))
                      (lVar8,PTR_s_var_SlumberingHusk_DamageTaken_10185d5e0);
    puVar6 = (undefined4 *)(**(code **)(*(long *)(param_1 + 0x168) + 0x10))(lVar8,uVar5);
    *puVar6 = 0;
    uVar5 = (*(code *)**(undefined8 **)(param_1 + 0x168))
                      (lVar8,PTR_s_var_SlumberingHusk_FortifiedHeal_10185d5e8);
    puVar7 = (undefined1 *)(**(code **)(*(long *)(param_1 + 0x168) + 0x10))(lVar8,uVar5);
    *puVar7 = 0;
    puVar3 = PTR_s_onBuffIntervalName_10185d558;
    uVar4 = FUN_1004d2524(PTR_s_onBuffIntervalName_10185d558);
    uVar4 = FUN_100015208(puVar3,uVar4,0x12345678);
    lVar8 = param_1 + 0xa0;
    *(undefined4 *)(lVar8 + (ulong)*(uint *)(param_1 + 0x160) * 4) = uVar4;
    uVar2 = *(uint *)(param_1 + 0x160);
    lVar1 = param_1 + 0xe0;
    *(code **)(lVar1 + (ulong)uVar2 * 8) = FUN_10043efcc;
    *(uint *)(param_1 + 0x160) = uVar2 + 1;
    puVar3 = PTR_s_onBeforeApplyDamageName_10185d570;
    uVar4 = FUN_1004d2524(PTR_s_onBeforeApplyDamageName_10185d570);
    uVar4 = FUN_100015208(puVar3,uVar4,0x12345678);
    *(undefined4 *)(lVar8 + (ulong)*(uint *)(param_1 + 0x160) * 4) = uVar4;
    uVar2 = *(uint *)(param_1 + 0x160);
    *(code **)(lVar1 + (ulong)uVar2 * 8) = FUN_10043eb60;
    *(uint *)(param_1 + 0x160) = uVar2 + 1;
    puVar3 = PTR_s_onBeforeReceiveBuffName_10185d5f0;
    uVar4 = FUN_1004d2524(PTR_s_onBeforeReceiveBuffName_10185d5f0);
    uVar4 = FUN_100015208(puVar3,uVar4,0x12345678);
    *(undefined4 *)(lVar8 + (ulong)*(uint *)(param_1 + 0x160) * 4) = uVar4;
    uVar2 = *(uint *)(param_1 + 0x160);
    *(code **)(lVar1 + (ulong)uVar2 * 8) = FUN_10043eec8;
    *(uint *)(param_1 + 0x160) = uVar2 + 1;
  }
  lVar8 = FUN_10043e568(param_1);
  *(undefined4 *)(lVar8 + 0x28) = 0xdf582d96;
  *(undefined1 *)(lVar8 + 0x2d) = 1;
  plVar9 = (long *)FUN_100441e68(lVar8 + 0x10);
  plVar9 = (long *)(**(code **)(*plVar9 + 0x78))(plVar9,"Bone_CenterMass");
  plVar9 = (long *)(**(code **)(*plVar9 + 0x48))(plVar9,"Effect_SlumberingHusk_Ready");
  plVar9 = (long *)(**(code **)(*plVar9 + 0x88))(plVar9,1);
  (**(code **)(*plVar9 + 0xb8))(plVar9,2);
  lVar8 = FUN_10042fdc4(param_1);
  plVar9 = (long *)FUN_1004385a0(lVar8 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x0001003f31b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar9 + 0x30))(plVar9,PTR_s_Buff_Item_SlumberingHuskFortifie_10185c408);
  return;
}




void FUN_1003f31b8(long param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined1 auStack_48 [24];
  
  FUN_100450f38(auStack_48,param_1 + 0x98);
  uVar2 = *(undefined4 *)(*(long *)(*(long *)(*(long *)(param_1 + 0x10) + 0x10) + 0x40) + 0x308);
  lVar1 = FUN_1004337f4(auStack_48);
  *(undefined4 *)(lVar1 + 0x10) = 5;
  *(undefined4 *)(lVar1 + 0x14) = uVar2;
  return;
}




void FUN_1003f3214(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  
  puVar2 = PTR_s_onPreCalculateDamageExchangeName_10185d520;
  uVar3 = FUN_1004d2524(PTR_s_onPreCalculateDamageExchangeName_10185d520);
  uVar3 = FUN_100015208(puVar2,uVar3,0x12345678);
  *(undefined4 *)(param_1 + 0xa0 + (ulong)*(uint *)(param_1 + 0x160) * 4) = uVar3;
  uVar1 = *(uint *)(param_1 + 0x160);
  *(code **)(param_1 + 0xa0 + (ulong)uVar1 * 8 + 0x40) = FUN_10043f108;
  *(uint *)(param_1 + 0x160) = uVar1 + 1;
  return;
}




void FUN_1003f327c(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined1 auStack_48 [24];
  
  puVar1 = PTR_s__Item_Spellsword__10185bab8;
  uVar2 = FUN_1010a1520();
  lVar3 = FUN_1010a0e0c(uVar2,0,puVar1,0);
  FUN_100450f38(auStack_48,param_1 + 0x68);
  lVar4 = FUN_1004356bc(auStack_48);
  uVar6 = 0;
  uVar5 = 0;
  if (**(long **)(lVar3 + 0x1a8) != 0) {
    uVar5 = *(undefined4 *)(**(long **)(lVar3 + 0x1a8) + 8);
  }
  *(undefined4 *)(lVar4 + 0x10) = uVar5;
  FUN_100450f38(auStack_48,param_1 + 0x70);
  lVar4 = FUN_1004356bc(auStack_48);
  if (**(long **)(lVar3 + 0x1a8) != 0) {
    uVar6 = *(undefined4 *)(**(long **)(lVar3 + 0x1a8) + 8);
  }
  *(undefined4 *)(lVar4 + 0x10) = uVar6;
  return;
}




void FUN_1003f3320(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined4 uVar6;
  undefined1 auStack_48 [24];
  
  puVar1 = PTR_s__Item_Spellsword__10185bab8;
  uVar2 = FUN_1010a1520();
  lVar3 = FUN_1010a0e0c(uVar2,0,puVar1,0);
  FUN_100450f38(auStack_48,param_1 + 0x68);
  lVar4 = FUN_1004356bc(auStack_48);
  uVar6 = 0;
  if (**(long **)(lVar3 + 0x1a8) != 0) {
    lVar5 = (*(long **)(lVar3 + 0x1a8))[1];
    uVar6 = 0;
    if (lVar5 != 0) {
      uVar6 = *(undefined4 *)(lVar5 + 8);
    }
  }
  *(undefined4 *)(lVar4 + 0x10) = uVar6;
  FUN_100450f38(auStack_48,param_1 + 0x70);
  lVar4 = FUN_1004356bc(auStack_48);
  uVar6 = 0;
  if ((**(long **)(lVar3 + 0x1a8) != 0) &&
     (lVar3 = (*(long **)(lVar3 + 0x1a8))[1], uVar6 = 0, lVar3 != 0)) {
    uVar6 = *(undefined4 *)(lVar3 + 8);
  }
  *(undefined4 *)(lVar4 + 0x10) = uVar6;
  return;
}




void FUN_1003f33d8(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  code *local_68;
  undefined4 local_60;
  
  puVar1 = PTR_s__Item_HealingFlask__10185aaf0;
  uVar2 = FUN_1010a1520();
  lVar3 = FUN_1010a0e0c(uVar2,0,puVar1,0);
  fVar12 = 0.0;
  if (**(long **)(lVar3 + 0x1a8) != 0) {
    fVar12 = *(float *)(**(long **)(lVar3 + 0x1a8) + 8);
  }
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x10);
  *(undefined4 *)(param_1 + 0x328) = 0x3e99999a;
  lVar4 = FUN_10042e580(param_1);
  *(undefined4 *)(lVar4 + 0x40) = 0x3e99999a;
  *(byte *)(lVar4 + 0x44) = *(byte *)(lVar4 + 0x44) & 0xfe;
  FUN_1004386bc(lVar4 + 0x10);
  plVar5 = (long *)FUN_10043aa54(lVar4 + 0x10);
  local_68 = FUN_10043d0f8;
  local_60 = 5;
  (**(code **)(*plVar5 + 0x30))(plVar5,&local_68);
  FUN_100450f38(&local_68,param_1 + 0x98);
  uVar9 = FUN_1003e001c(uVar2,lVar3,1,3);
  lVar4 = FUN_1004337f4(&local_68);
  *(undefined4 *)(lVar4 + 0x10) = 4;
  *(undefined4 *)(lVar4 + 0x14) = uVar9;
  lVar4 = FUN_100431ad4(&local_68);
  *(char **)(lVar4 + 0x28) = "Bone_CenterMass";
  *(char **)(lVar4 + 0x10) = "Effect_HealingFlask";
  *(ushort *)(lVar4 + 0x74) = *(ushort *)(lVar4 + 0x74) & 0xfe98 | 0x143;
  *(undefined4 *)(lVar4 + 0x5c) = 0;
  lVar4 = *(long *)(*(long *)(*(long *)(param_1 + 0x10) + 0x10) + 0x40);
  fVar13 = 0.0;
  if (**(long **)(lVar3 + 0x1a8) != 0) {
    lVar7 = 0;
    do {
      lVar8 = *(long *)((long)*(long **)(lVar3 + 0x1a8) + lVar7 + 8);
      iVar6 = (int)lVar7;
      lVar7 = lVar7 + 8;
    } while (lVar8 != 0 && iVar6 != 0x10);
    fVar13 = 0.0;
    if (lVar8 != 0) {
      fVar13 = *(float *)(lVar8 + 8);
    }
  }
  fVar10 = *(float *)(lVar4 + 0x40) + *(float *)(lVar4 + 0xf4) * (*(float *)(lVar4 + 0x25c) + 1.0);
  fVar11 = (float)NEON_fminnm(fVar10 + fVar10 * *(float *)(lVar4 + 0x1a8),DAT_101e94328);
  fVar10 = DAT_101e94268;
  if (DAT_101e94268 <= fVar11) {
    fVar10 = fVar11;
  }
  FUN_100450f38(&local_68,param_1 + 0x90);
  lVar3 = FUN_1004356bc(&local_68);
  *(float *)(lVar3 + 0x10) = (fVar10 * fVar13 * 0.3) / fVar12;
  return;
}




void FUN_1003f35c4(void)

{
  long lVar1;
  long *plVar2;
  code *local_20;
  undefined4 local_18;
  
  lVar1 = FUN_10042e2c8();
  plVar2 = (long *)FUN_100430a84(lVar1 + 0x10);
  local_20 = FUN_10043f1d4;
  local_18 = 2;
  (**(code **)(*plVar2 + 0x30))(plVar2,0xb,1,&local_20);
  return;
}




void FUN_1003f3614(void)

{
  long lVar1;
  long *plVar2;
  code *local_20;
  undefined4 local_18;
  
  lVar1 = FUN_10042e2c8();
  plVar2 = (long *)FUN_100430a84(lVar1 + 0x10);
  local_20 = FUN_10043f1e8;
  local_18 = 2;
  (**(code **)(*plVar2 + 0x30))(plVar2,0xb,1,&local_20);
  return;
}




void FUN_1003f3664(void)

{
  long lVar1;
  long *plVar2;
  code *local_30;
  undefined4 local_28;
  
  lVar1 = FUN_10042e694();
  *(ushort *)(lVar1 + 0x48) = *(ushort *)(lVar1 + 0x48) | 4;
  *(byte *)(lVar1 + 0x60) = *(byte *)(lVar1 + 0x60) & 0xfc | 1;
  *(undefined4 *)(lVar1 + 0x4c) = 1;
  *(undefined2 *)(lVar1 + 0x5a) = 8;
  FUN_10043b4e8(lVar1 + 0x10);
  plVar2 = (long *)FUN_100434b18(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_Item_Frostburn_Slow_10185c440);
  local_30 = FUN_10043f230;
  local_28 = 2;
  (**(code **)(*plVar2 + 0x18))(plVar2,&local_30);
  return;
}




void FUN_1003f3700(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  
  lVar1 = FUN_10042e2c8();
  lVar2 = FUN_10049be00(lVar1 + 0x10);
  *(undefined4 *)(lVar2 + 0x58) = 2;
  *(code **)(lVar2 + 0x10) = FUN_10043f244;
  *(undefined4 *)(lVar2 + 0x18) = 2;
  plVar3 = (long *)FUN_100441e68(lVar1 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x60))();
  (**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Slowed_buff");
  lVar1 = FUN_10042e3b0(param_1);
  FUN_10049b814(lVar1 + 0x10);
  return;
}




void FUN_1003f3778(void)

{
  long lVar1;
  long *plVar2;
  code *local_40;
  undefined4 local_38;
  
  lVar1 = FUN_10042e694();
  *(ushort *)(lVar1 + 0x48) = *(ushort *)(lVar1 + 0x48) | 0x10;
  *(byte *)(lVar1 + 0x60) = *(byte *)(lVar1 + 0x60) & 0xfc | 1;
  *(undefined4 *)(lVar1 + 0x4c) = 0x440000;
  *(undefined2 *)(lVar1 + 0x5a) = 8;
  lVar1 = lVar1 + 0x10;
  FUN_10043b4e8(lVar1);
  plVar2 = (long *)FUN_100434b18(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_Item_Spellfire_Damage_10185c450);
  local_40 = FUN_10043f258;
  local_38 = 2;
  (**(code **)(*plVar2 + 0x18))(plVar2,&local_40);
  plVar2 = (long *)FUN_100434b18(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))(plVar2,DAT_10185a468);
  local_40 = FUN_10043f258;
  local_38 = 2;
  (**(code **)(*plVar2 + 0x18))(plVar2,&local_40);
  return;
}




void FUN_1003f3850(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  float fVar3;
  code *local_30;
  undefined4 local_28;
  
  lVar1 = FUN_10042e2c8();
  plVar2 = (long *)FUN_100441e68(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,"Bone_CenterMass");
  (**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Clockwork_Burst");
  lVar1 = FUN_10042e580(param_1);
  fVar3 = (float)FUN_1003df6c8(PTR_s__Item_Spellfire__10185bab0,2,1);
  *(float *)(lVar1 + 0x40) = 1.0 / fVar3;
  *(byte *)(lVar1 + 0x44) = *(byte *)(lVar1 + 0x44) & 0xfe;
  FUN_1004386bc(lVar1 + 0x10);
  plVar2 = (long *)FUN_10043ab94(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x40))();
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))();
  local_30 = FUN_10043f26c;
  local_28 = 3;
  (**(code **)(*plVar2 + 0x18))(plVar2,&local_30,1,3);
  lVar1 = FUN_10042e3b0(param_1);
  FUN_10049b814(lVar1 + 0x10);
  return;
}




void FUN_1003f3948(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  
  uVar3 = FUN_1004d2524("Guid_lastMinionProced");
  uVar4 = FUN_100015208("Guid_lastMinionProced",uVar3,0x12345678);
  uVar4 = (**(code **)(*(long *)(param_1 + 0x168) + 8))(param_1 + 0x168,uVar4);
  puVar5 = (undefined4 *)(**(code **)(*(long *)(param_1 + 0x168) + 0x10))(param_1 + 0x168,uVar4);
  *puVar5 = 0xffffffff;
  puVar2 = PTR_s_onBeforeApplyDamageName_10185d570;
  uVar3 = FUN_1004d2524(PTR_s_onBeforeApplyDamageName_10185d570);
  uVar3 = FUN_100015208(puVar2,uVar3,0x12345678);
  *(undefined4 *)(param_1 + 0xa0 + (ulong)*(uint *)(param_1 + 0x160) * 4) = uVar3;
  uVar1 = *(uint *)(param_1 + 0x160);
  *(code **)(param_1 + 0xa0 + (ulong)uVar1 * 8 + 0x40) = FUN_10043f384;
  *(uint *)(param_1 + 0x160) = uVar1 + 1;
  return;
}




void FUN_1003f3a10(void)

{
  return;
}




void FUN_1003f3a14(void)

{
  return;
}




void FUN_1003f3a18(void)

{
  return;
}




void FUN_1003f3a1c(void)

{
  long lVar1;
  
  lVar1 = FUN_10042e694();
  *(ushort *)(lVar1 + 0x48) = *(ushort *)(lVar1 + 0x48) | 0x10;
  *(byte *)(lVar1 + 0x60) = *(byte *)(lVar1 + 0x60) & 0xfc | 1;
  lVar1 = FUN_10043aaf4(lVar1 + 0x10);
  *(code **)(lVar1 + 0x10) = FUN_10043f574;
  return;
}




void FUN_1003f3a60(void)

{
  long lVar1;
  long *plVar2;
  code *local_20;
  undefined4 local_18;
  
  lVar1 = FUN_10042e2c8();
  plVar2 = (long *)FUN_100430a84(lVar1 + 0x10);
  local_20 = FUN_10043f6a0;
  local_18 = 2;
  (**(code **)(*plVar2 + 0x30))(plVar2,9,1,&local_20);
  return;
}




void FUN_1003f3ab0(void)

{
  long lVar1;
  long *plVar2;
  code *local_20;
  undefined4 local_18;
  
  lVar1 = FUN_10042e2c8();
  plVar2 = (long *)FUN_100430a84(lVar1 + 0x10);
  local_20 = FUN_10043f6b4;
  local_18 = 2;
  (**(code **)(*plVar2 + 0x30))(plVar2,9,1,&local_20);
  return;
}




void FUN_1003f3b00(void)

{
  long lVar1;
  long *plVar2;
  code *local_20;
  undefined4 local_18;
  
  lVar1 = FUN_10042e2c8();
  plVar2 = (long *)FUN_100430a84(lVar1 + 0x10);
  local_20 = FUN_10043f6fc;
  local_18 = 2;
  (**(code **)(*plVar2 + 0x30))(plVar2,9,1,&local_20);
  return;
}




void FUN_1003f3b50(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  code *local_40;
  undefined4 local_38;
  
  lVar1 = FUN_10042e694();
  *(ushort *)(lVar1 + 0x48) = *(ushort *)(lVar1 + 0x48) | 0x40;
  *(byte *)(lVar1 + 0x60) = *(byte *)(lVar1 + 0x60) & 0xfc | 1;
  *(ushort *)(lVar1 + 0x5a) = *(ushort *)(lVar1 + 0x5a) | 4;
  *(undefined4 *)(lVar1 + 0x50) = 0x300;
  lVar1 = FUN_10043fc08(lVar1 + 0x10);
  lVar2 = FUN_10049cc18(lVar1 + 0x10);
  *(undefined4 *)(lVar2 + 8) = 0xdb161949;
  lVar1 = FUN_10043fc08(lVar1 + 0xa0);
  lVar2 = FUN_10049c300(lVar1 + 0x10);
  *(undefined **)(lVar2 + 8) = PTR_s_Buff_Item_Stormcrown_10185c4a8;
  lVar1 = lVar1 + 0xa0;
  FUN_10043b4e8(lVar1);
  plVar3 = (long *)FUN_10043ab94(lVar1);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))();
  plVar3 = (long *)(**(code **)(*plVar3 + 0x40))();
  local_40 = FUN_10043fd0c;
  local_38 = 4;
  (**(code **)(*plVar3 + 0x18))(plVar3,&local_40,2,1);
  plVar3 = (long *)FUN_100434b18(lVar1);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))
                             (plVar3,PTR_s_Buff_Item_StormguardBannerHitPfx_10185c4a0);
  local_40 = (code *)CONCAT44(local_40._4_4_,0x3dcccccd);
  local_38 = 1;
  (**(code **)(*plVar3 + 0x18))(plVar3,&local_40);
  plVar3 = (long *)FUN_10043d6ac(lVar1);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,"StormguardBanner");
  local_40 = FUN_10043fdc8;
  local_38 = 4;
  plVar3 = (long *)(**(code **)(*plVar3 + 0x20))(plVar3,&local_40);
  (**(code **)(*plVar3 + 0x58))();
  return;
}




void FUN_1003f3ccc(void)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_10042ea44();
  plVar2 = (long *)FUN_100441e68(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,"Bone_CenterMass");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Tension_Proc");
                    /* WARNING: Could not recover jumptable at 0x0001003f3d18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x78))(plVar2,1);
  return;
}




void FUN_1003f3d1c(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  code *local_40;
  undefined4 local_38;
  
  lVar1 = FUN_10042e694();
  *(ushort *)(lVar1 + 0x48) = *(ushort *)(lVar1 + 0x48) | 0x40;
  *(byte *)(lVar1 + 0x60) = *(byte *)(lVar1 + 0x60) & 0xfc | 1;
  *(ushort *)(lVar1 + 0x5a) = *(ushort *)(lVar1 + 0x5a) | 4;
  *(undefined4 *)(lVar1 + 0x54) = 0x100000;
  lVar1 = FUN_10043fc08(lVar1 + 0x10);
  lVar2 = FUN_10049cc18(lVar1 + 0x10);
  *(undefined4 *)(lVar2 + 8) = 0xdb161949;
  lVar1 = lVar1 + 0xa0;
  FUN_10043b4e8(lVar1);
  plVar3 = (long *)FUN_10043ab94(lVar1);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))();
  plVar3 = (long *)(**(code **)(*plVar3 + 0x40))();
  local_40 = FUN_10043fd0c;
  local_38 = 4;
  (**(code **)(*plVar3 + 0x18))(plVar3,&local_40,2,1);
  plVar3 = (long *)FUN_100434b18(lVar1);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))
                             (plVar3,PTR_s_Buff_Item_StormguardBannerHitPfx_10185c4a0);
  local_40 = (code *)CONCAT44(local_40._4_4_,0x3dcccccd);
  local_38 = 1;
  (**(code **)(*plVar3 + 0x18))(plVar3,&local_40);
  plVar3 = (long *)FUN_10043d6ac(lVar1);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,"StormguardBanner");
  local_40 = FUN_10043fdc8;
  local_38 = 4;
  plVar3 = (long *)(**(code **)(*plVar3 + 0x20))(plVar3,&local_40);
  (**(code **)(*plVar3 + 0x58))();
  return;
}




void FUN_1003f3e78(void)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_10042e2c8();
  plVar2 = (long *)FUN_100433e34(lVar1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x0001003f3ea0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_Item_DragonsEye_CrystalBonu_10185c4b8);
  return;
}




void FUN_1003f3ea4(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined1 auStack_48 [24];
  
  *(undefined4 *)(param_1 + 0x328) = 0x3e4ccccd;
  *(ulong *)(param_1 + 0x344) = *(ulong *)(param_1 + 0x344) & 0xffff0000ffffffff;
  puVar1 = PTR_s__Item_DragonsEye__10185ba38;
  uVar2 = FUN_1010a1520();
  lVar3 = FUN_1010a0e0c(uVar2,0,puVar1,0);
  plVar6 = *(long **)(lVar3 + 0x1a8);
  uVar9 = 0;
  if (*plVar6 == 0) {
    iVar4 = 0;
    uVar8 = 0;
  }
  else {
    if (plVar6[1] == 0) {
      uVar8 = 0;
      lVar5 = 0;
    }
    else {
      uVar8 = *(undefined4 *)(plVar6[1] + 8);
      lVar7 = 0;
      do {
        lVar5 = *(long *)((long)plVar6 + lVar7 + 0x10);
        iVar4 = (int)lVar7;
        lVar7 = lVar7 + 8;
      } while (lVar5 != 0 && iVar4 != 0);
    }
    if (lVar5 == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = (int)*(float *)(lVar5 + 8);
    }
  }
  FUN_10043f744(0x3f800000,uVar8,param_1,0,0,iVar4);
  FUN_100450f38(auStack_48,param_1 + 0x98);
  lVar5 = FUN_100436e1c(auStack_48);
  if (**(long **)(lVar3 + 0x1a8) != 0) {
    uVar9 = *(undefined4 *)(**(long **)(lVar3 + 0x1a8) + 8);
  }
  *(undefined8 *)(lVar5 + 0x10) = 0x100000005;
  *(undefined4 *)(lVar5 + 0x18) = uVar9;
  return;
}




void FUN_1003f3fc8(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  code *local_50;
  undefined4 local_48;
  code *local_40;
  undefined4 local_38;
  
  lVar1 = FUN_10042e694();
  *(ushort *)(lVar1 + 0x48) = *(ushort *)(lVar1 + 0x48) | 0x10;
  *(byte *)(lVar1 + 0x60) = *(byte *)(lVar1 + 0x60) & 0xfc | 1;
  *(undefined4 *)(lVar1 + 0x4c) = 1;
  *(undefined2 *)(lVar1 + 0x5a) = 8;
  lVar1 = FUN_10043fc08(lVar1 + 0x10);
  lVar2 = FUN_10049cc18(lVar1 + 0x10);
  *(undefined4 *)(lVar2 + 8) = 0xcee0d798;
  lVar1 = lVar1 + 0xa0;
  plVar3 = (long *)FUN_10043d6ac(lVar1);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x40))(plVar3,3);
  local_40 = FUN_10043f99c;
  local_38 = 2;
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))(plVar3,&local_40);
  local_50 = FUN_10043f9c4;
  local_48 = 2;
  (**(code **)(*plVar3 + 0x50))(plVar3,&local_50);
  plVar3 = (long *)FUN_10043d6ac(lVar1);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,"Clockwork");
  local_40 = FUN_10043f9d8;
  local_38 = 2;
  plVar3 = (long *)(**(code **)(*plVar3 + 0x20))(plVar3,&local_40);
  (**(code **)(*plVar3 + 0x58))();
  plVar3 = (long *)FUN_100433e34(lVar1);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Item_Clockwork_ShowPfx_10185c4c8)
  ;
  local_40 = (code *)CONCAT44(local_40._4_4_,0x3dcccccd);
  local_38 = 1;
  (**(code **)(*plVar3 + 0x18))(plVar3,&local_40);
  return;
}




void FUN_1003f4124(void)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_10042e498();
  plVar2 = (long *)FUN_100441e68(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,"Bone_CenterMass");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Clockwork_Burst");
                    /* WARNING: Could not recover jumptable at 0x0001003f4170. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0xb0))(plVar2,1);
  return;
}




void FUN_1003f4174(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  code *local_50;
  undefined4 local_48;
  
  lVar1 = FUN_10042e2c8();
  plVar2 = (long *)FUN_100430a84(lVar1 + 0x10);
  local_50 = FUN_10043fbf4;
  local_48 = 2;
  (**(code **)(*plVar2 + 0x30))(plVar2,0x12,2,&local_50);
  lVar1 = FUN_10042e580(param_1);
  *(undefined4 *)(lVar1 + 0x40) = 0x3f000000;
  *(byte *)(lVar1 + 0x44) = *(byte *)(lVar1 + 0x44) | 1;
  lVar1 = FUN_10043fc08(lVar1 + 0x10);
  lVar3 = FUN_10049cc18(lVar1 + 0x10);
  *(undefined4 *)(lVar3 + 8) = 0x891ec0a0;
  lVar1 = FUN_10043fc08(lVar1 + 0xa0);
  FUN_10049cf78(lVar1 + 0x10);
  plVar2 = (long *)FUN_10043fc58(lVar1 + 0x88);
  local_50 = FUN_10043fca8;
  local_48 = 2;
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))(plVar2,&local_50);
  (**(code **)(*plVar2 + 0x48))(plVar2,0x1000);
  plVar2 = (long *)FUN_10043ab94(lVar1 + 0x88);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x40))();
  (**(code **)(*plVar2 + 0x48))(plVar2,"DAMAGE_BURN",PTR_s__Item_Pulseweave__10185ba90);
  lVar1 = FUN_10042e694(param_1);
  *(ushort *)(lVar1 + 0x48) = *(ushort *)(lVar1 + 0x48) | 8;
  *(undefined4 *)(lVar1 + 0x4c) = 1;
  *(undefined2 *)(lVar1 + 0x5e) = 0x10;
  *(byte *)(lVar1 + 0x60) = *(byte *)(lVar1 + 0x60) & 0xfc | 2;
  lVar1 = FUN_10043fc08(lVar1 + 0x10);
  lVar3 = FUN_10049cc18(lVar1 + 0x10);
  *(undefined4 *)(lVar3 + 8) = 0x891ec0a0;
  plVar2 = (long *)FUN_10043d6ac(lVar1 + 0xa0);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))(plVar2,"Pulseweave");
  local_50 = FUN_10043fcbc;
  local_48 = 2;
  (**(code **)(*plVar2 + 0x20))(plVar2,&local_50);
  plVar2 = (long *)FUN_100433e34(lVar1 + 0xa0);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_Item_Pulseweave_Active_10185c4d8)
  ;
  local_50 = FUN_10043fcd0;
  local_48 = 2;
  (**(code **)(*plVar2 + 0x18))(plVar2,&local_50);
  lVar1 = FUN_10043e568(param_1);
  *(undefined4 *)(lVar1 + 0x28) = 0x891ec0a0;
  *(undefined1 *)(lVar1 + 0x2d) = 1;
  plVar2 = (long *)FUN_100441e68(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,"Bone_CenterMass");
  plVar2 = (long *)(**(code **)(*plVar2 + 0xc0))(0x3ecccccd,0x3e4ccccd,0x3e4ccccd);
  local_50 = (code *)CONCAT44(local_50._4_4_,0x3f99999a);
  local_48 = 1;
  plVar2 = (long *)(**(code **)(*plVar2 + 0xd0))(plVar2,&local_50);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Pulseweave_Available");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x88))(plVar2,1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x90))();
  (**(code **)(*plVar2 + 0xb0))(plVar2,1);
  return;
}




void FUN_1003f4420(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined4 local_70 [2];
  undefined4 local_68;
  code *local_60;
  undefined4 local_58;
  
  lVar1 = FUN_10042e2c8();
  lVar2 = FUN_10049be00(lVar1 + 0x10);
  *(undefined4 *)(lVar2 + 0x58) = 1;
  *(code **)(lVar2 + 0x10) = FUN_10043fce4;
  *(undefined4 *)(lVar2 + 0x18) = 2;
  plVar3 = (long *)FUN_100441e68(lVar1 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x60))();
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Pulseweave_TriggerRing");
  plVar3 = (long *)(**(code **)(*plVar3 + 0xc0))(0x3ecccccd,0x3e4ccccd,0x3e4ccccd);
  local_60._0_4_ = 0x3e99999a;
  local_58 = 1;
  plVar3 = (long *)(**(code **)(*plVar3 + 0x60))(plVar3,&local_60);
  local_70[0] = 0x40a00000;
  local_68 = 1;
  plVar3 = (long *)(**(code **)(*plVar3 + 0xd0))(plVar3,local_70);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x78))(plVar3,1);
  (**(code **)(*plVar3 + 0xb0))(plVar3,1);
  lVar1 = FUN_10042fdc4(param_1);
  lVar1 = lVar1 + 0x10;
  plVar3 = (long *)FUN_10043fc58(lVar1);
  local_60 = (code *)CONCAT44(local_60._4_4_,0x40a00000);
  local_58 = 1;
  (**(code **)(*plVar3 + 0x30))(plVar3,&local_60);
  plVar3 = (long *)FUN_10043ab94(lVar1);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x40))();
  (**(code **)(*plVar3 + 0x48))(plVar3,"DAMAGE_BASE",PTR_s__Item_Pulseweave__10185ba90);
  plVar3 = (long *)FUN_100434b18(lVar1);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Item_Pulseweave_Slow_10185c4e0);
  local_60 = FUN_10043fcf8;
  local_58 = 2;
  (**(code **)(*plVar3 + 0x18))(plVar3,&local_60);
  plVar3 = (long *)FUN_100441e68(lVar1);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x60))();
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Pulseweave_Explosion");
  plVar3 = (long *)(**(code **)(*plVar3 + 0xc0))(0x3ecccccd,0x3e4ccccd,0x3e4ccccd);
  local_60 = (code *)CONCAT44(local_60._4_4_,0x3e99999a);
  local_58 = 1;
  plVar3 = (long *)(**(code **)(*plVar3 + 0x60))(plVar3,&local_60);
  (**(code **)(*plVar3 + 0xb0))(plVar3,1);
  return;
}




void FUN_1003f4634(long param_1)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float local_50 [2];
  undefined4 local_48;
  
  lVar1 = FUN_100345d90(*(undefined4 *)(param_1 + 0x308));
  if (lVar1 != 0) {
    fVar2 = (float)FUN_1003df6c8(PTR_s__Item_Pulseweave__10185ba90,5,1);
    fVar4 = *(float *)(*(long *)(lVar1 + 0x40) + 0xec);
    fVar3 = (float)FUN_1003df6c8(PTR_s__Item_Pulseweave__10185ba90,6,1);
    local_50[0] = fVar2 + fVar4 * fVar3;
    local_48 = 1;
    FUN_10042eb40(param_1,local_50);
  }
  return;
}




void FUN_1003f46c4(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  code *local_40;
  undefined4 local_38;
  
  lVar1 = FUN_10042e2c8();
  plVar2 = (long *)FUN_100430a84(lVar1 + 0x10);
  local_40 = FUN_10043fe14;
  local_38 = 2;
  (**(code **)(*plVar2 + 0x30))(plVar2,0x24,2,&local_40);
  plVar2 = (long *)FUN_100430a84(lVar1 + 0x10);
  local_40 = FUN_10043fe28;
  local_38 = 2;
  (**(code **)(*plVar2 + 0x30))(plVar2,0x22,0,&local_40);
  lVar1 = FUN_10043fe3c(param_1);
  *(ushort *)(lVar1 + 0x40) = *(ushort *)(lVar1 + 0x40) | 0x48;
  *(byte *)(lVar1 + 0x42) = *(byte *)(lVar1 + 0x42) & 0xfd | 0x21;
  *(undefined4 *)(lVar1 + 0x34) = 1;
  FUN_10049d040(lVar1 + 0x10);
  plVar2 = (long *)FUN_100434b18(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))
                             (plVar2,PTR_s_Buff_Item_CapacitorPlate_Lockout_10185c4f8);
  local_40 = FUN_10043ff44;
  local_38 = 2;
  (**(code **)(*plVar2 + 0x18))(plVar2,&local_40);
  return;
}




void FUN_1003f47d8(void)

{
  long lVar1;
  
  lVar1 = FUN_10042e2c8();
  lVar1 = FUN_10049be00(lVar1 + 0x10);
  *(undefined4 *)(lVar1 + 0x58) = 1;
  *(code **)(lVar1 + 0x10) = FUN_10043ff58;
  *(undefined4 *)(lVar1 + 0x18) = 2;
  return;
}




void FUN_1003f4810(void)

{
  long lVar1;
  long *plVar2;
  code *local_20;
  undefined4 local_18;
  
  lVar1 = FUN_10042e498();
  plVar2 = (long *)FUN_100433e34(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))
                             (plVar2,PTR_s_Buff_Item_CapacitorPlate_SpeedBo_10185c4f0);
  local_20 = FUN_10043ff6c;
  local_18 = 2;
  (**(code **)(*plVar2 + 0x18))(plVar2,&local_20);
  return;
}




void FUN_1003f486c(void)

{
  long lVar1;
  long *plVar2;
  code *local_20;
  undefined4 local_18;
  
  lVar1 = FUN_10042e694();
  *(ushort *)(lVar1 + 0x48) = *(ushort *)(lVar1 + 0x48) | 0x10;
  *(byte *)(lVar1 + 0x60) = *(byte *)(lVar1 + 0x60) & 0xfc | 1;
  *(ushort *)(lVar1 + 0x5a) = *(ushort *)(lVar1 + 0x5a) | 4;
  plVar2 = (long *)FUN_100433e34(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))
                             (plVar2,PTR_s_Buff_Item_TornadoTrigger_Movespe_10185c508);
  local_20 = FUN_10043ff80;
  local_18 = 2;
  (**(code **)(*plVar2 + 0x18))(plVar2,&local_20);
  return;
}




void FUN_1003f48f0(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  code *local_30;
  undefined4 local_28;
  
  lVar1 = FUN_10042e2c8();
  plVar2 = (long *)FUN_100430a84(lVar1 + 0x10);
  local_30 = FUN_10043ff94;
  local_28 = 2;
  (**(code **)(*plVar2 + 0x30))(plVar2,0x12,2,&local_30);
  lVar1 = FUN_10042e3b0(param_1);
  FUN_10049b814(lVar1 + 0x10);
  return;
}




void FUN_1003f495c(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  
  lVar1 = FUN_100433910();
  *(byte *)(lVar1 + 0x38) = *(byte *)(lVar1 + 0x38) | 1;
  lVar1 = FUN_10043fc08(lVar1 + 0x10);
  lVar2 = FUN_10049cc18(lVar1 + 0x10);
  *(undefined4 *)(lVar2 + 8) = 0x2e363791;
  plVar3 = (long *)FUN_100433e34(lVar1 + 0xa0);
  (**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Item_RooksDecree_AttackBuff_10185c518);
  lVar1 = FUN_10042fdc4(param_1);
  plVar3 = (long *)FUN_1004385a0(lVar1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x0001003f49dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Item_RooksDecree_AttackBuff_10185c518);
  return;
}




void FUN_1003f49e0(long param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  code *local_40;
  undefined4 local_38;
  
  uVar1 = FUN_1004d2524("Consumed");
  uVar2 = FUN_100015208("Consumed",uVar1,0x12345678);
  (**(code **)(*(long *)(param_1 + 0x168) + 8))(param_1 + 0x168,uVar2);
  uVar1 = FUN_1004d2524("Consumed");
  uVar2 = FUN_100015208("Consumed",uVar1,0x12345678);
  puVar3 = (undefined1 *)(**(code **)(*(long *)(param_1 + 0x168) + 0x10))(param_1 + 0x168,uVar2);
  *puVar3 = 0;
  lVar4 = FUN_10042e694(param_1);
  *(ushort *)(lVar4 + 0x48) = *(ushort *)(lVar4 + 0x48) | 0x20;
  *(ushort *)(lVar4 + 0x5a) = *(ushort *)(lVar4 + 0x5a) | 4;
  *(byte *)(lVar4 + 0x60) = *(byte *)(lVar4 + 0x60) & 0xfc | 1;
  *(undefined4 *)(lVar4 + 0x4c) = 1;
  lVar4 = FUN_10043fc08(lVar4 + 0x10);
  lVar5 = FUN_10049cccc(lVar4 + 0x10);
  *(char **)(lVar5 + 0x20) = "Consumed";
  *(undefined4 *)(lVar5 + 0x18) = 0;
  *(undefined1 *)(lVar5 + 8) = 1;
  *(undefined4 *)(lVar5 + 0x10) = 1;
  lVar4 = lVar4 + 0xa0;
  lVar5 = FUN_10043d65c(lVar4);
  *(code **)(lVar5 + 0x10) = FUN_10043d5dc;
  plVar6 = (long *)FUN_100432a84(lVar4);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x70))();
  (**(code **)(*plVar6 + 0x30))(plVar6,0x29);
  plVar6 = (long *)FUN_10043d6ac(lVar4);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x30))(plVar6,"RooksDecree");
  local_40 = FUN_10043d6fc;
  local_38 = 2;
  (**(code **)(*plVar6 + 0x20))(plVar6,&local_40);
  lVar5 = FUN_100437ccc(lVar4);
  *(char **)(lVar5 + 0x20) = "Consumed";
  *(undefined4 *)(lVar5 + 0x28) = 4;
  *(undefined1 *)(lVar5 + 0x30) = 1;
  *(undefined1 *)(lVar5 + 0x2c) = 1;
  plVar6 = (long *)FUN_1004385a0(lVar4);
  (**(code **)(*plVar6 + 0x30))(plVar6,PTR_s_Buff_Item_RooksDecree_AttackBuff_10185c518);
  return;
}




void FUN_1003f4b8c(void)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_10042e2c8();
  plVar2 = (long *)FUN_10049b864(lVar1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x0001003f4bb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x30))(plVar2,4,FUN_10043d710);
  return;
}




void FUN_1003f4bbc(void)

{
  long lVar1;
  long *plVar2;
  code *local_20;
  undefined4 local_18;
  
  lVar1 = FUN_10042e694();
  *(ushort *)(lVar1 + 0x48) = *(ushort *)(lVar1 + 0x48) | 0x10;
  *(byte *)(lVar1 + 0x60) = *(byte *)(lVar1 + 0x60) & 0xfc | 2;
  *(ushort *)(lVar1 + 0x5a) = *(ushort *)(lVar1 + 0x5a) | 4;
  plVar2 = (long *)FUN_10043187c(lVar1 + 0x10);
  local_20 = FUN_10044086c;
  local_18 = 2;
  (**(code **)(*plVar2 + 0x40))(plVar2,&local_20);
  return;
}




void FUN_1003f4c2c(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  code *local_50;
  undefined4 local_48;
  
  lVar1 = FUN_10043e568();
  *(undefined4 *)(lVar1 + 0x28) = 0x1d654a0e;
  *(undefined1 *)(lVar1 + 0x2d) = 1;
  plVar2 = (long *)FUN_100441e68(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,"Bone_CenterMass");
  plVar2 = (long *)(**(code **)(*plVar2 + 0xc0))(0x3ecccccd,0x3e4ccccd,0x3e4ccccd);
  local_50 = (code *)CONCAT44(local_50._4_4_,0x3f99999a);
  local_48 = 1;
  plVar2 = (long *)(**(code **)(*plVar2 + 0xd0))(plVar2,&local_50);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_SeraphicShell_Barrier");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x88))(plVar2,1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x90))();
  (**(code **)(*plVar2 + 0xb0))(plVar2,1);
  lVar1 = FUN_10049be50(lVar1 + 0x10);
  *(undefined1 *)(lVar1 + 0x2c) = 0x11;
  lVar1 = FUN_10042e694(param_1);
  *(ushort *)(lVar1 + 0x48) = *(ushort *)(lVar1 + 0x48) | 8;
  *(undefined4 *)(lVar1 + 0x4c) = 1;
  *(undefined2 *)(lVar1 + 0x5c) = 10;
  *(byte *)(lVar1 + 0x60) = *(byte *)(lVar1 + 0x60) & 0xfc | 2;
  *(code **)(lVar1 + 0x30) = FUN_100440880;
  lVar1 = FUN_10043fc08(lVar1 + 0x10);
  lVar3 = FUN_10049cc18(lVar1 + 0x10);
  *(undefined4 *)(lVar3 + 8) = 0x1d654a0e;
  plVar2 = (long *)FUN_10043d6ac(lVar1 + 0xa0);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))(plVar2,"SeraphicShell");
  local_50 = FUN_100440894;
  local_48 = 2;
  (**(code **)(*plVar2 + 0x20))(plVar2,&local_50);
  plVar2 = (long *)FUN_100433e34(lVar1 + 0xa0);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))
                             (plVar2,PTR_s_Buff_Item_SeraphicShell_IsActive_10185c538);
  local_50 = FUN_1004408a8;
  local_48 = 2;
  (**(code **)(*plVar2 + 0x18))(plVar2,&local_50);
  lVar1 = FUN_10042e694(param_1);
  *(ushort *)(lVar1 + 0x48) = *(ushort *)(lVar1 + 0x48) | 8;
  *(undefined4 *)(lVar1 + 0x4c) = 1;
  *(undefined2 *)(lVar1 + 0x5c) = 0x1a;
  *(byte *)(lVar1 + 0x60) = *(byte *)(lVar1 + 0x60) & 0xfc | 2;
  lVar1 = FUN_10043fc08(lVar1 + 0x10);
  lVar3 = FUN_10049cc18(lVar1 + 0x10);
  *(undefined4 *)(lVar3 + 8) = 0x1d654a0e;
  plVar2 = (long *)FUN_10043187c(lVar1 + 0xa0);
  local_50 = FUN_1004408bc;
  local_48 = 2;
  (**(code **)(*plVar2 + 0x40))(plVar2,&local_50);
  return;
}




void FUN_1003f4e7c(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  code *local_40;
  undefined4 local_38;
  
  lVar1 = FUN_10042e2c8();
  plVar2 = (long *)FUN_100441e68(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,"Bone_CenterMass");
  plVar2 = (long *)(**(code **)(*plVar2 + 0xc0))(0x3dcccccd,0x3f800000,0x3ecccccd);
  local_40 = (code *)CONCAT44(local_40._4_4_,0x3f99999a);
  local_38 = 1;
  plVar2 = (long *)(**(code **)(*plVar2 + 0xd0))(plVar2,&local_40);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_SeraphicShell_BarrierFinishing");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x88))(plVar2,1);
  (**(code **)(*plVar2 + 0xb0))(plVar2,1);
  lVar1 = FUN_10049be50(lVar1 + 0x10);
  *(undefined1 *)(lVar1 + 0x2c) = 0x11;
  lVar1 = FUN_10042e694(param_1);
  *(ushort *)(lVar1 + 0x48) = *(ushort *)(lVar1 + 0x48) | 8;
  *(undefined4 *)(lVar1 + 0x4c) = 1;
  *(undefined2 *)(lVar1 + 0x5c) = 0x1a;
  *(byte *)(lVar1 + 0x60) = *(byte *)(lVar1 + 0x60) & 0xfc | 2;
  plVar2 = (long *)FUN_10043187c(lVar1 + 0x10);
  local_40 = FUN_1004408bc;
  local_38 = 2;
  (**(code **)(*plVar2 + 0x40))(plVar2,&local_40);
  return;
}




void FUN_1003f4fc0(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  
  lVar1 = FUN_100433910();
  *(byte *)(lVar1 + 0x38) = *(byte *)(lVar1 + 0x38) | 1;
  lVar1 = FUN_10043fc08(lVar1 + 0x10);
  lVar2 = FUN_10049c300(lVar1 + 0x10);
  *(undefined **)(lVar2 + 8) = PTR_s_Buff_Item_RooksDecree_10185c510;
  lVar1 = FUN_10043fc08(lVar1 + 0xa0);
  lVar2 = FUN_10049cc18(lVar1 + 0x10);
  *(undefined4 *)(lVar2 + 8) = 0x19191ccf;
  plVar3 = (long *)FUN_100433e34(lVar1 + 0xa0);
  (**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Item_ProtectorContract_Atta_10185c548);
  lVar1 = FUN_10042fdc4(param_1);
  plVar3 = (long *)FUN_1004385a0(lVar1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x0001003f5060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Item_ProtectorContract_Atta_10185c548);
  return;
}




void FUN_1003f5064(long param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  code *local_40;
  undefined4 local_38;
  
  uVar1 = FUN_1004d2524("Consumed");
  uVar2 = FUN_100015208("Consumed",uVar1,0x12345678);
  (**(code **)(*(long *)(param_1 + 0x168) + 8))(param_1 + 0x168,uVar2);
  uVar1 = FUN_1004d2524("Consumed");
  uVar2 = FUN_100015208("Consumed",uVar1,0x12345678);
  puVar3 = (undefined1 *)(**(code **)(*(long *)(param_1 + 0x168) + 0x10))(param_1 + 0x168,uVar2);
  *puVar3 = 0;
  lVar4 = FUN_10042e694(param_1);
  *(ushort *)(lVar4 + 0x48) = *(ushort *)(lVar4 + 0x48) | 0x20;
  *(ushort *)(lVar4 + 0x5a) = *(ushort *)(lVar4 + 0x5a) | 4;
  *(byte *)(lVar4 + 0x60) = *(byte *)(lVar4 + 0x60) & 0xfc | 1;
  *(undefined4 *)(lVar4 + 0x4c) = 1;
  lVar4 = FUN_10043fc08(lVar4 + 0x10);
  lVar5 = FUN_10049cccc(lVar4 + 0x10);
  *(char **)(lVar5 + 0x20) = "Consumed";
  *(undefined4 *)(lVar5 + 0x18) = 0;
  *(undefined1 *)(lVar5 + 8) = 1;
  *(undefined4 *)(lVar5 + 0x10) = 1;
  lVar4 = lVar4 + 0xa0;
  lVar5 = FUN_10043d65c(lVar4);
  *(code **)(lVar5 + 0x10) = FUN_100440400;
  plVar6 = (long *)FUN_100432a84(lVar4);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x70))();
  (**(code **)(*plVar6 + 0x30))(plVar6,0x28);
  plVar6 = (long *)FUN_10043d6ac(lVar4);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x30))(plVar6,"ProtectorContract");
  local_40 = FUN_100440480;
  local_38 = 2;
  (**(code **)(*plVar6 + 0x20))(plVar6,&local_40);
  lVar5 = FUN_100437ccc(lVar4);
  *(char **)(lVar5 + 0x20) = "Consumed";
  *(undefined4 *)(lVar5 + 0x28) = 4;
  *(undefined1 *)(lVar5 + 0x30) = 1;
  *(undefined1 *)(lVar5 + 0x2c) = 1;
  plVar6 = (long *)FUN_1004385a0(lVar4);
  (**(code **)(*plVar6 + 0x30))(plVar6,PTR_s_Buff_Item_ProtectorContract_Atta_10185c548);
  return;
}




void FUN_1003f5210(void)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_10042e2c8();
  plVar2 = (long *)FUN_10049b864(lVar1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x0001003f523c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x30))(plVar2,4,FUN_100440494);
  return;
}




void FUN_1003f5240(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  code *local_50;
  undefined4 local_48;
  
  lVar1 = FUN_10043e568();
  *(undefined4 *)(lVar1 + 0x28) = 0xd55ca6c;
  *(undefined1 *)(lVar1 + 0x2d) = 1;
  plVar2 = (long *)FUN_100441e68(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,"Bone_CenterMass");
  (**(code **)(*plVar2 + 0x48))(plVar2,"Effect_ShiverSteel");
  lVar1 = FUN_10042e694(param_1);
  *(ushort *)(lVar1 + 0x48) = *(ushort *)(lVar1 + 0x48) | 4;
  *(byte *)(lVar1 + 0x60) = *(byte *)(lVar1 + 0x60) & 0xfc | 1;
  *(ushort *)(lVar1 + 0x5a) = *(ushort *)(lVar1 + 0x5a) | 4;
  *(undefined4 *)(lVar1 + 0x54) = 0x100000;
  lVar1 = FUN_10043fc08(lVar1 + 0x10);
  lVar3 = FUN_10049c300(lVar1 + 0x10);
  *(undefined **)(lVar3 + 8) = PTR_s_Buff_Item_Shiversteel_10185abd0;
  lVar1 = FUN_10043fc08(lVar1 + 0xa0);
  lVar3 = FUN_10049cc18(lVar1 + 0x10);
  *(undefined4 *)(lVar3 + 8) = 0xd55ca6c;
  lVar3 = FUN_10043fc08(lVar1 + 0xa0);
  lVar1 = FUN_10049c198(lVar3 + 0x10);
  *(code **)(lVar1 + 8) = FUN_10043e3a8;
  lVar1 = lVar3 + 0x88;
  FUN_10043b4e8(lVar1);
  plVar2 = (long *)FUN_100434b18(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))
                             (plVar2,PTR_s_Buff_Item_DragonbloodContract_Me_10185c568);
  local_50 = FUN_1004404d4;
  local_48 = 2;
  (**(code **)(*plVar2 + 0x18))(plVar2,&local_50);
  plVar2 = (long *)FUN_10043d6ac(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))(plVar2,"DragonbloodContract");
  local_50 = FUN_1004404e8;
  local_48 = 2;
  plVar2 = (long *)(**(code **)(*plVar2 + 0x20))(plVar2,&local_50);
  (**(code **)(*plVar2 + 0x58))();
  lVar3 = lVar3 + 0xa0;
  FUN_10043b4e8(lVar3);
  plVar2 = (long *)FUN_100434b18(lVar3);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))
                             (plVar2,PTR_s_Buff_Item_DragonbloodContract_Ra_10185c560);
  local_50 = FUN_1004404d4;
  local_48 = 2;
  (**(code **)(*plVar2 + 0x18))(plVar2,&local_50);
  plVar2 = (long *)FUN_10043d6ac(lVar3);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))(plVar2,"DragonbloodContract");
  local_50 = FUN_1004404e8;
  local_48 = 2;
  plVar2 = (long *)(**(code **)(*plVar2 + 0x20))(plVar2,&local_50);
  (**(code **)(*plVar2 + 0x58))();
  return;
}




void FUN_1003f5460(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  undefined4 local_30 [2];
  undefined4 local_28;
  
  puVar1 = PTR_s__Item_DragonbloodContract__10185bb18;
  uVar2 = FUN_1010a1520();
  lVar3 = FUN_1010a0e0c(uVar2,0,puVar1,0);
  local_30[0] = 0;
  if (**(long **)(lVar3 + 0x1a8) != 0) {
    lVar5 = 0;
    do {
      lVar6 = *(long *)((long)*(long **)(lVar3 + 0x1a8) + lVar5 + 8);
      iVar4 = (int)lVar5;
      lVar5 = lVar5 + 8;
    } while (lVar6 != 0 && iVar4 != 8);
    if (lVar6 != 0) {
      local_30[0] = *(undefined4 *)(lVar6 + 8);
    }
  }
  local_28 = 1;
  FUN_10042eb40(param_1,local_30);
  return;
}




void FUN_1003f54ec(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined4 local_30 [2];
  undefined4 local_28;
  
  puVar1 = PTR_s__Item_DragonbloodContract__10185bb18;
  uVar2 = FUN_1010a1520();
  lVar3 = FUN_1010a0e0c(uVar2,0,puVar1,0);
  local_30[0] = 0;
  if ((**(long **)(lVar3 + 0x1a8) != 0) && (lVar3 = (*(long **)(lVar3 + 0x1a8))[1], lVar3 != 0)) {
    local_30[0] = *(undefined4 *)(lVar3 + 8);
  }
  local_28 = 1;
  FUN_10042eb40(param_1,local_30);
  return;
}




void FUN_1003f5560(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  
  puVar2 = PTR_s_onActorDieName_10185d5b0;
  if (DAT_101d23a38 != '\0') {
    uVar3 = FUN_1004d2524(PTR_s_onActorDieName_10185d5b0);
    uVar3 = FUN_100015208(puVar2,uVar3,0x12345678);
    *(undefined4 *)(param_1 + 0xa0 + (ulong)*(uint *)(param_1 + 0x160) * 4) = uVar3;
    uVar1 = *(uint *)(param_1 + 0x160);
    *(code **)(param_1 + 0xa0 + (ulong)uVar1 * 8 + 0x40) = FUN_1004404fc;
    *(uint *)(param_1 + 0x160) = uVar1 + 1;
  }
  return;
}




void FUN_1003f55d4(long param_1)

{
  long lVar1;
  undefined1 auStack_28 [24];
  
  FUN_100450f38(auStack_28,param_1 + 0x68);
  FUN_100431d2c(auStack_28);
  lVar1 = FUN_100436540(auStack_28);
  *(char **)(lVar1 + 0x10) = "Effect_IGC_BurstHeal";
  *(ushort *)(lVar1 + 0x74) = *(ushort *)(lVar1 + 0x74) & 0xff90 | 0x29;
  FUN_100431f2c(auStack_28);
  return;
}




void FUN_1003f5634(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  
  uVar3 = FUN_1004d2524("chargeupTimer");
  uVar4 = FUN_100015208("chargeupTimer",uVar3,0x12345678);
  (**(code **)(*(long *)(param_1 + 0x168) + 8))(param_1 + 0x168,uVar4);
  uVar3 = FUN_1004d2524("chargeupTimer");
  uVar4 = FUN_100015208("chargeupTimer",uVar3,0x12345678);
  puVar5 = (undefined4 *)(**(code **)(*(long *)(param_1 + 0x168) + 0x10))(param_1 + 0x168,uVar4);
  *puVar5 = 0x40a00000;
  puVar2 = PTR_s_onBuffIntervalName_10185d558;
  if (DAT_101d23a38 != '\0') {
    uVar3 = FUN_1004d2524(PTR_s_onBuffIntervalName_10185d558);
    uVar3 = FUN_100015208(puVar2,uVar3,0x12345678);
    *(undefined4 *)(param_1 + 0xa0 + (ulong)*(uint *)(param_1 + 0x160) * 4) = uVar3;
    uVar1 = *(uint *)(param_1 + 0x160);
    *(code **)(param_1 + 0xa0 + (ulong)uVar1 * 8 + 0x40) = FUN_10043ffa8;
    *(uint *)(param_1 + 0x160) = uVar1 + 1;
    *(undefined4 *)(param_1 + 0x328) = 0x3e4ccccd;
  }
  return;
}




void FUN_1003f5730(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined1 auStack_38 [24];
  
  *(undefined4 *)(param_1 + 0x318) = 0x42700000;
  if (*(float *)(param_1 + 0x31c) < 60.0) {
    *(undefined4 *)(param_1 + 0x31c) = 0x42700000;
  }
  *(uint *)(param_1 + 0x340) = *(uint *)(param_1 + 0x340) & 0xffffffef;
  *(undefined4 *)(param_1 + 0x328) = 0x3dcccccd;
  puVar2 = PTR_s_onBuffIntervalName_10185d558;
  uVar3 = FUN_1004d2524(PTR_s_onBuffIntervalName_10185d558);
  uVar3 = FUN_100015208(puVar2,uVar3,0x12345678);
  *(undefined4 *)(param_1 + 0xa0 + (ulong)*(uint *)(param_1 + 0x160) * 4) = uVar3;
  uVar1 = *(uint *)(param_1 + 0x160);
  *(code **)(param_1 + 0xa0 + (ulong)uVar1 * 8 + 0x40) = FUN_10043db40;
  *(uint *)(param_1 + 0x160) = uVar1 + 1;
  FUN_100450f38(auStack_38,param_1 + 0x80);
  FUN_10043200c(auStack_38);
  return;
}




void FUN_1003f57e8(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined1 auStack_38 [24];
  
  *(undefined4 *)(param_1 + 0x318) = 0x42700000;
  if (*(float *)(param_1 + 0x31c) < 60.0) {
    *(undefined4 *)(param_1 + 0x31c) = 0x42700000;
  }
  *(uint *)(param_1 + 0x340) = *(uint *)(param_1 + 0x340) & 0xffffffef;
  *(undefined4 *)(param_1 + 0x328) = 0x3dcccccd;
  puVar2 = PTR_s_onBuffIntervalName_10185d558;
  uVar3 = FUN_1004d2524(PTR_s_onBuffIntervalName_10185d558);
  uVar3 = FUN_100015208(puVar2,uVar3,0x12345678);
  *(undefined4 *)(param_1 + 0xa0 + (ulong)*(uint *)(param_1 + 0x160) * 4) = uVar3;
  uVar1 = *(uint *)(param_1 + 0x160);
  *(code **)(param_1 + 0xa0 + (ulong)uVar1 * 8 + 0x40) = FUN_1004401c8;
  *(uint *)(param_1 + 0x160) = uVar1 + 1;
  FUN_100450f38(auStack_38,param_1 + 0x80);
  FUN_10043200c(auStack_38);
  return;
}




void FUN_1003f58a0(long param_1)

{
  ushort uVar1;
  long lVar2;
  long lVar3;
  float fVar4;
  undefined1 auStack_38 [24];
  
  FUN_100450f38(auStack_38,param_1 + 0x98);
  lVar2 = FUN_100431ad4(auStack_38);
  *(char **)(lVar2 + 0x28) = "Bone_RightHand";
  uVar1 = *(ushort *)(lVar2 + 0x74) & 0xff98;
  *(ushort *)(lVar2 + 0x74) = uVar1 | 0x43;
  *(char **)(lVar2 + 0x10) = "Effect_Hero000_HandSpear";
  lVar3 = *(long *)(*(long *)(*(long *)(param_1 + 0x10) + 0x10) + 0x40);
  fVar4 = *(float *)(lVar3 + 0x78) + *(float *)(lVar3 + 300) * (*(float *)(lVar3 + 0x294) + 1.0);
  NEON_fminnm(fVar4 + fVar4 * *(float *)(lVar3 + 0x1e0),DAT_101e94360);
  *(undefined4 *)(lVar2 + 100) = DAT_101e942a0;
  *(undefined4 *)(lVar2 + 0x68) = 0x3e99999a;
  *(ushort *)(lVar2 + 0x74) = uVar1 | 0x243;
  return;
}




void FUN_1003f5968(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  code *local_40;
  undefined4 local_38;
  
  lVar1 = FUN_10042e2c8();
  plVar2 = (long *)FUN_100441e68(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x68))(plVar2,"OverHead");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Lorelai_Buff_A");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,0);
  (**(code **)(*plVar2 + 0xb0))(plVar2,1);
  plVar2 = (long *)FUN_100430a84(lVar1 + 0x10);
  local_40 = FUN_1004523a4;
  local_38 = 3;
  (**(code **)(*plVar2 + 0x30))(plVar2,5,1,&local_40);
  lVar1 = FUN_100433910(param_1);
  *(byte *)(lVar1 + 0x38) = *(byte *)(lVar1 + 0x38) | 1;
  lVar1 = lVar1 + 0x10;
  lVar3 = FUN_10049c984(lVar1);
  *(char **)(lVar3 + 0x18) = "__VAR1_INT__";
  plVar2 = (long *)FUN_100441e18(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x38))(plVar2,"Sound_Lorelai_Basic_Attack");
  uVar4 = FUN_1010a1520();
  lVar3 = FUN_1010a0e0c(uVar4,0,"*KindredSoundBalance*",0);
  FUN_1003c7210(*(undefined4 *)(lVar3 + 0x430));
  (**(code **)(*plVar2 + 0x28))(plVar2);
  plVar2 = (long *)FUN_100434b18(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_DelayedKill_10185bd70);
  local_40 = (code *)CONCAT44(local_40._4_4_,0x3ecccccd);
  local_38 = 1;
  (**(code **)(*plVar2 + 0x18))(plVar2,&local_40);
  lVar1 = FUN_10042e3b0(param_1);
  FUN_10049b814(lVar1 + 0x10);
  FUN_10049d2c4(lVar1 + 0x10);
  return;
}




void FUN_1003f5af8(void)

{
  return;
}




void FUN_1003f5afc(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  code *local_30;
  undefined4 local_28;
  
  lVar1 = FUN_10042e2c8();
  plVar2 = (long *)FUN_100441e68(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x68))(plVar2,"CenterBody");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Lorelai_Ring_A_2mr");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x50))(plVar2,"Effect_Lorelai_Ring_A_2mr_Ally");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,0);
  plVar2 = (long *)(**(code **)(*plVar2 + 0xb0))(plVar2,1);
  local_30 = (code *)CONCAT44(local_30._4_4_,0x40000000);
  local_28 = 1;
  (**(code **)(*plVar2 + 0xd0))(plVar2,&local_30);
  lVar1 = FUN_10042fdc4(param_1);
  lVar1 = lVar1 + 0x10;
  plVar2 = (long *)FUN_100441e18(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x38))(plVar2,"Sound_Lorelai_Ability_B_Start");
  uVar3 = FUN_1010a1520();
  lVar4 = FUN_1010a0e0c(uVar3,0,"*KindredSoundBalance*",0);
  FUN_1003c7210(*(undefined4 *)(lVar4 + 0x440));
  (**(code **)(*plVar2 + 0x28))(plVar2);
  plVar2 = (long *)FUN_10043594c(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))(plVar2,"Spawn");
  (**(code **)(*plVar2 + 0x18))(plVar2,0);
  lVar4 = FUN_10043d65c(lVar1);
  *(code **)(lVar4 + 0x10) = FUN_100452324;
  plVar2 = (long *)FUN_100434b18(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_Stunned_10185a208);
  local_30 = FUN_1004523b0;
  local_28 = 4;
  (**(code **)(*plVar2 + 0x18))(plVar2,&local_30);
  plVar2 = (long *)FUN_10043ab94(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x40))();
  (**(code **)(*plVar2 + 0x38))(plVar2,"IMPACT_DAMAGE",0);
  plVar2 = (long *)FUN_100433e34(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))
                             (plVar2,PTR_s_Buff_Lorelai_FishFoodDamagePerSe_10185c5a0);
  local_30 = FUN_1004524f8;
  local_28 = 3;
  (**(code **)(*plVar2 + 0x18))(plVar2,&local_30);
  return;
}




void FUN_1003f5cf0(long param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  undefined4 local_40 [2];
  undefined4 local_38;
  
  lVar1 = FUN_10042e2c8();
  plVar2 = (long *)FUN_100441e68(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x68))(plVar2,"CenterBody");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Lorelai_Pillar");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,0);
  plVar2 = (long *)(**(code **)(*plVar2 + 0xb0))(plVar2,1);
  local_40[0] = 0x40000000;
  local_38 = 1;
  plVar2 = (long *)(**(code **)(*plVar2 + 0xd0))(plVar2,local_40);
  (**(code **)(*plVar2 + 0xc0))(0,0x3f333333,0x3f800000);
  plVar2 = (long *)FUN_10049b7c4(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))(plVar2,"Sound_Lorelai_Ability_A_Piranha_Loop");
  uVar3 = FUN_1010a1520();
  lVar1 = FUN_1010a0e0c(uVar3,0,"*KindredSoundBalance*",0);
  FUN_1003c7210(*(undefined4 *)(lVar1 + 0x438));
  (**(code **)(*plVar2 + 0x28))(plVar2);
  lVar1 = FUN_10042e580(param_1);
  *(undefined4 *)(lVar1 + 0x40) = 0x3e4ccccd;
  *(byte *)(lVar1 + 0x44) = *(byte *)(lVar1 + 0x44) | 1;
  lVar4 = FUN_10043d65c(lVar1 + 0x10);
  *(code **)(lVar4 + 0x10) = FUN_100452324;
  plVar2 = (long *)FUN_10043ab94(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x40))();
  (**(code **)(*plVar2 + 0x38))(plVar2,"DAMAGE_PER_SEC",0);
  lVar1 = FUN_10042e580(param_1);
  *(undefined4 *)(lVar1 + 0x40) = 0x3dcccccd;
  *(byte *)(lVar1 + 0x44) = *(byte *)(lVar1 + 0x44) | 1;
  lVar4 = FUN_10043d65c(lVar1 + 0x10);
  *(code **)(lVar4 + 0x10) = FUN_100452234;
  plVar2 = (long *)FUN_100434b18(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))
                             (plVar2,PTR_s_Buff_Lorelai_WaterSourceEmpowere_10185b1b0);
  local_40[0] = 0x3e4ccccd;
  local_38 = 1;
  plVar2 = (long *)(**(code **)(*plVar2 + 0x18))(plVar2,local_40);
  (**(code **)(*plVar2 + 0x48))
            (plVar2,*(undefined4 *)(*(long *)(*(long *)(param_1 + 0x10) + 0x10) + 0x260));
  lVar1 = FUN_10042fdc4(param_1);
  plVar2 = (long *)FUN_100433e34(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_DelayedKill_10185bd70);
  local_40[0] = 0x3e99999a;
  local_38 = 1;
  (**(code **)(*plVar2 + 0x18))(plVar2,local_40);
  return;
}




void FUN_1003f5f2c(long param_1)

{
  long lVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  float fVar5;
  undefined4 local_50 [2];
  undefined4 local_48;
  
  lVar1 = FUN_100345d90(*(undefined4 *)(param_1 + 0x308));
  fVar2 = (float)FUN_1003dfe60(lVar1,1,3,0x19,0);
  fVar5 = *(float *)(*(long *)(lVar1 + 0x40) + 0xec);
  fVar3 = (float)FUN_1003dfe60(lVar1,1,4,0x19,0);
  uVar4 = FUN_1003dfe60(lVar1,1,5,0x19,0);
  local_50[0] = NEON_fminnm(fVar2 + fVar5 * fVar3,uVar4);
  local_48 = 1;
  FUN_10042eb40(param_1,local_50);
  return;
}




void FUN_1003f5fdc(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = FUN_10042e2c8();
  lVar1 = FUN_10049be00(lVar1 + 0x10);
  *(undefined4 *)(lVar1 + 0x58) = 1;
  *(code **)(lVar1 + 0x10) = FUN_10045250c;
  *(undefined4 *)(lVar1 + 0x18) = 3;
  lVar1 = FUN_10042e3b0(param_1);
  FUN_10049b814(lVar1 + 0x10);
  return;
}




void FUN_1003f602c(long param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  float fVar4;
  undefined4 local_40 [2];
  undefined4 local_38;
  
  lVar1 = FUN_100345d90(*(undefined4 *)(param_1 + 0x308));
  fVar4 = *(float *)(**(long **)(*(long *)(lVar1 + 0x38) + 0x228) + 8);
  *(float *)(param_1 + 0x318) = fVar4;
  if (*(float *)(param_1 + 0x31c) < fVar4) {
    *(float *)(param_1 + 0x31c) = fVar4;
  }
  *(uint *)(param_1 + 0x340) =
       *(uint *)(param_1 + 0x340) & 0xfffe0 | (uint)(fVar4 < 0.0) << 4 |
       *(uint *)(param_1 + 0x340) & 0xfff0000f;
  lVar1 = FUN_10042e580(param_1);
  *(undefined4 *)(lVar1 + 0x40) = 0x3dcccccd;
  *(byte *)(lVar1 + 0x44) = *(byte *)(lVar1 + 0x44) & 0xfe;
  lVar1 = lVar1 + 0x10;
  lVar2 = FUN_10043d65c(lVar1);
  *(code **)(lVar2 + 0x10) = FUN_1004522b4;
  plVar3 = (long *)FUN_100434b18(lVar1);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Lorelai_SplashdownSlow_10185c5a8)
  ;
  local_40[0] = 0x3e4ccccd;
  local_38 = 1;
  plVar3 = (long *)(**(code **)(*plVar3 + 0x18))(plVar3,local_40);
  (**(code **)(*plVar3 + 0x60))(plVar3,FUN_100452520);
  plVar3 = (long *)FUN_100434b18(lVar1);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))
                             (plVar3,PTR_s_Buff_Lorelai_SplashdownSpeedBoos_10185c5b0);
  local_40[0] = 0x3e4ccccd;
  local_38 = 1;
  plVar3 = (long *)(**(code **)(*plVar3 + 0x18))(plVar3,local_40);
  (**(code **)(*plVar3 + 0x60))(plVar3,FUN_10045256c);
  plVar3 = (long *)FUN_100434b18(lVar1);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))
                             (plVar3,PTR_s_Buff_Lorelai_WaterSourceEmpowere_10185b1b0);
  local_40[0] = 0x3e4ccccd;
  local_38 = 1;
  plVar3 = (long *)(**(code **)(*plVar3 + 0x18))(plVar3,local_40);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))
                             (plVar3,*(undefined4 *)
                                      (*(long *)(*(long *)(param_1 + 0x10) + 0x10) + 0x260));
  (**(code **)(*plVar3 + 0x60))(plVar3,FUN_1004525b8);
  lVar1 = FUN_10042e2c8(param_1);
  plVar3 = (long *)FUN_100441e68(lVar1 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x68))(plVar3,"CenterBody");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Lorelai_Ring_A_3mr");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x78))(plVar3,0);
  plVar3 = (long *)(**(code **)(*plVar3 + 0xb0))(plVar3,1);
  local_40[0] = 0x40400000;
  local_38 = 1;
  (**(code **)(*plVar3 + 0xd0))(plVar3,local_40);
  lVar1 = FUN_10042fdc4(param_1);
  plVar3 = (long *)FUN_100433e34(lVar1 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_DelayedKill_10185bd70);
  local_40[0] = 0x3e99999a;
  local_38 = 1;
  (**(code **)(*plVar3 + 0x18))(plVar3,local_40);
  return;
}




void FUN_1003f6290(long param_1)

{
  code *pcVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined4 local_40 [2];
  undefined4 local_38;
  
  uVar4 = FUN_100345d90(*(undefined4 *)(param_1 + 0x308));
  lVar5 = FUN_10042ea44(param_1);
  plVar6 = (long *)FUN_1004385a0(lVar5 + 0x10);
  (**(code **)(*plVar6 + 0x48))();
  lVar5 = FUN_10042e95c(param_1);
  plVar6 = (long *)FUN_100441e68(lVar5 + 0x10);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x68))(plVar6,"CenterBody");
  plVar6 = (long *)(**(code **)(*plVar6 + 0x48))(plVar6,"Effect_Lorelai_Shield");
  plVar6 = (long *)(**(code **)(*plVar6 + 0x78))(plVar6,0);
  plVar6 = (long *)(**(code **)(*plVar6 + 0xb0))(plVar6,1);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x90))();
  local_40[0] = 0x3f800000;
  local_38 = 1;
  plVar6 = (long *)(**(code **)(*plVar6 + 0xd0))(plVar6,local_40);
  (**(code **)(*plVar6 + 0xc0))(0,0x3f333333,0x3f800000);
  iVar3 = FUN_1003a47d0(uVar4,PTR_s_Buff_Lorelai_WaterSourceEmpowere_10185b1b0);
  plVar6 = (long *)FUN_10049b864(lVar5 + 0x10);
  pcVar1 = FUN_10045266c;
  if (iVar3 == 0) {
    pcVar1 = FUN_1004525d0;
  }
  (**(code **)(*plVar6 + 0x30))(plVar6,4,pcVar1);
  lVar5 = FUN_10042e2c8(param_1);
  plVar6 = (long *)FUN_10049b7c4(lVar5 + 0x10);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x30))(plVar6,"Sound_Lorelai_Ability_C_Loop");
  uVar4 = FUN_1010a1520();
  lVar5 = FUN_1010a0e0c(uVar4,0,"*KindredSoundBalance*",0);
  FUN_1003c7210(*(undefined4 *)(lVar5 + 0x450));
  (**(code **)(*plVar6 + 0x28))(plVar6);
  lVar5 = FUN_10042e3b0(param_1);
  FUN_10049b814(lVar5 + 0x10);
  lVar5 = FUN_1004303b0(param_1);
  plVar6 = (long *)FUN_100441e18(lVar5 + 0x10);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x38))(plVar6,"Sound_Lorelai_Ability_C_End");
  uVar4 = FUN_1010a1520();
  lVar7 = FUN_1010a0e0c(uVar4,0,"*KindredSoundBalance*",0);
  FUN_1003c7210(*(undefined4 *)(lVar7 + 0x454));
  (**(code **)(*plVar6 + 0x28))(plVar6);
  lVar5 = FUN_10043ab44(lVar5 + 0x10);
  puVar2 = PTR_s_Ability__Lorelai__B_101859a30;
  *(undefined4 *)(lVar5 + 0x51) = 0;
  *(undefined4 *)(lVar5 + 0x54) = 0;
  *(undefined1 *)(lVar5 + 0x50) = 7;
  *(undefined **)(lVar5 + 0x40) = puVar2;
  *(undefined8 *)(lVar5 + 0x48) = 0;
  *(ushort *)(lVar5 + 0x58) = *(ushort *)(lVar5 + 0x58) & 0xff00 | 0x408;
  lVar5 = lVar5 + 0x10;
  plVar6 = (long *)FUN_100441e68(lVar5);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x60))();
  plVar6 = (long *)(**(code **)(*plVar6 + 0x48))(plVar6,"Effect_Lorelai_Shield_Drop");
  plVar6 = (long *)(**(code **)(*plVar6 + 0x78))(plVar6,0);
  plVar6 = (long *)(**(code **)(*plVar6 + 0xb0))(plVar6,0);
  (**(code **)(*plVar6 + 0x90))();
  plVar6 = (long *)FUN_100441e18(lVar5);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x38))(plVar6,"Sound_Lorelai_Ability_B_Start");
  uVar4 = FUN_1010a1520();
  lVar7 = FUN_1010a0e0c(uVar4,0,"*KindredSoundBalance*",0);
  FUN_1003c7210(*(undefined4 *)(lVar7 + 0x440));
  (**(code **)(*plVar6 + 0x28))(plVar6);
  plVar6 = (long *)FUN_100451bac(lVar5);
  (**(code **)(*plVar6 + 0x30))(plVar6,"*Lorelai_Splashdown*",0);
  return;
}




void FUN_1003f658c(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  undefined4 local_40 [2];
  undefined4 local_38;
  
  lVar2 = FUN_10042ea44();
  plVar3 = (long *)FUN_1004385a0(lVar2 + 0x10);
  (**(code **)(*plVar3 + 0x48))();
  lVar2 = FUN_10042e2c8(param_1);
  lVar2 = lVar2 + 0x10;
  plVar3 = (long *)FUN_10049b7c4(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,"Sound_Lorelai_Ability_C_Loop");
  uVar4 = FUN_1010a1520();
  lVar5 = FUN_1010a0e0c(uVar4,0,"*KindredSoundBalance*",0);
  FUN_1003c7210(*(undefined4 *)(lVar5 + 0x450));
  (**(code **)(*plVar3 + 0x28))(plVar3);
  plVar3 = (long *)FUN_100441e68(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x68))(plVar3,"CenterBody");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Lorelai_Shield");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x78))(plVar3,0);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x90))();
  plVar3 = (long *)(**(code **)(*plVar3 + 0xb0))(plVar3,1);
  local_40[0] = 0x3f800000;
  local_38 = 1;
  plVar3 = (long *)(**(code **)(*plVar3 + 0xd0))(plVar3,local_40);
  (**(code **)(*plVar3 + 0xc0))(0,0x3f333333,0x3f800000);
  plVar3 = (long *)FUN_10049c148(lVar2);
  (**(code **)(*plVar3 + 0x30))(plVar3,1);
  lVar2 = FUN_10049b9b4(lVar2);
  *(undefined2 *)(lVar2 + 0x10) = 0x200;
  lVar2 = FUN_10042e3b0(param_1);
  FUN_10049b814(lVar2 + 0x10);
  lVar2 = FUN_1004303b0(param_1);
  plVar3 = (long *)FUN_100441e18(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))(plVar3,"Sound_Lorelai_Ability_C_End");
  uVar4 = FUN_1010a1520();
  lVar5 = FUN_1010a0e0c(uVar4,0,"*KindredSoundBalance*",0);
  FUN_1003c7210(*(undefined4 *)(lVar5 + 0x454));
  (**(code **)(*plVar3 + 0x28))(plVar3);
  lVar2 = FUN_10043ab44(lVar2 + 0x10);
  puVar1 = PTR_s_Ability__Lorelai__B_101859a30;
  *(undefined4 *)(lVar2 + 0x51) = 0;
  *(undefined4 *)(lVar2 + 0x54) = 0;
  *(undefined1 *)(lVar2 + 0x50) = 7;
  *(undefined **)(lVar2 + 0x40) = puVar1;
  *(undefined8 *)(lVar2 + 0x48) = 0;
  *(ushort *)(lVar2 + 0x58) = *(ushort *)(lVar2 + 0x58) & 0xff00 | 0x408;
  plVar3 = (long *)FUN_100441e68(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x60))();
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Lorelai_Shield_Drop");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x78))(plVar3,0);
  plVar3 = (long *)(**(code **)(*plVar3 + 0xb0))(plVar3,0);
  (**(code **)(*plVar3 + 0x90))();
  plVar3 = (long *)FUN_100451bac(lVar2 + 0x10);
  (**(code **)(*plVar3 + 0x30))(plVar3,"*Lorelai_Splashdown*",0);
  return;
}




void FUN_1003f6808(void)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  char cVar4;
  char *pcVar5;
  uint uVar6;
  
  uVar6 = 0x811c9dc5;
  lVar1 = FUN_100433030();
  if (PTR_s_Ability__Lorelai__B_101859a30 == (undefined *)0x0) {
    uVar3 = 0;
  }
  else {
    cVar4 = *PTR_s_Ability__Lorelai__B_101859a30;
    uVar3 = 0x811c9dc5;
    if (cVar4 != '\0') {
      uVar3 = 0x811c9dc5;
      pcVar5 = PTR_s_Ability__Lorelai__B_101859a30;
      do {
        pcVar5 = pcVar5 + 1;
        uVar3 = (uVar3 ^ (int)cVar4) * 0x1000193;
        cVar4 = *pcVar5;
      } while (cVar4 != '\0');
    }
  }
  *(uint *)(lVar1 + 0x28) = uVar3;
  *(undefined1 *)(lVar1 + 0x2c) = 1;
  lVar1 = lVar1 + 0x10;
  lVar2 = FUN_10049bf40(lVar1);
  if (PTR_s_Ability__Lorelai__B_101859a30 == (undefined *)0x0) {
    uVar3 = 0;
  }
  else {
    cVar4 = *PTR_s_Ability__Lorelai__B_101859a30;
    uVar3 = 0x811c9dc5;
    if (cVar4 != '\0') {
      uVar3 = 0x811c9dc5;
      pcVar5 = PTR_s_Ability__Lorelai__B_101859a30;
      do {
        pcVar5 = pcVar5 + 1;
        uVar3 = (uVar3 ^ (int)cVar4) * 0x1000193;
        cVar4 = *pcVar5;
      } while (cVar4 != '\0');
    }
  }
  *(uint *)(lVar2 + 0x20) = uVar3;
  *(code **)(lVar2 + 0x10) = FUN_100494c0c;
  *(undefined4 *)(lVar2 + 0x18) = 3;
  *(undefined4 *)(lVar2 + 0x28) = 1;
  lVar2 = FUN_10049bf40(lVar1);
  *(undefined4 *)(lVar2 + 0x20) = 0xb6c5daa2;
  *(code **)(lVar2 + 0x10) = FUN_100494c40;
  *(undefined4 *)(lVar2 + 0x18) = 3;
  *(undefined4 *)(lVar2 + 0x28) = 2;
  lVar2 = FUN_10049c888(lVar1);
  if (PTR_s_Ability__Lorelai__B_101859a30 == (undefined *)0x0) {
    uVar6 = 0;
  }
  else {
    cVar4 = *PTR_s_Ability__Lorelai__B_101859a30;
    pcVar5 = PTR_s_Ability__Lorelai__B_101859a30;
    while (cVar4 != '\0') {
      pcVar5 = pcVar5 + 1;
      uVar6 = (uVar6 ^ (int)cVar4) * 0x1000193;
      cVar4 = *pcVar5;
    }
  }
  *(uint *)(lVar2 + 0x20) = uVar6;
  *(code **)(lVar2 + 0x10) = FUN_100494c74;
  *(undefined4 *)(lVar2 + 0x18) = 3;
  lVar1 = FUN_10049d0e0(lVar1);
  *(undefined **)(lVar1 + 0x10) = PTR_s_Ability__Lorelai__B_101859a30;
  *(code **)(lVar1 + 0x18) = FUN_100494cac;
  *(undefined4 *)(lVar1 + 0x20) = 3;
  *(byte *)(lVar1 + 0x2c) = *(byte *)(lVar1 + 0x2c) | 4;
  *(undefined4 *)(lVar1 + 0x28) = 0x3f800000;
  return;
}




void FUN_1003f69a4(void)

{
  return;
}




void FUN_1003f69a8(void)

{
  long lVar1;
  char cVar2;
  uint uVar3;
  char *pcVar4;
  uint uVar5;
  
  uVar5 = 0x811c9dc5;
  lVar1 = FUN_100433030();
  if (PTR_s_Ability__Lorelai__C_101859a38 == (undefined *)0x0) {
    uVar3 = 0;
  }
  else {
    cVar2 = *PTR_s_Ability__Lorelai__C_101859a38;
    uVar3 = 0x811c9dc5;
    if (cVar2 != '\0') {
      uVar3 = 0x811c9dc5;
      pcVar4 = PTR_s_Ability__Lorelai__C_101859a38;
      do {
        pcVar4 = pcVar4 + 1;
        uVar3 = (uVar3 ^ (int)cVar2) * 0x1000193;
        cVar2 = *pcVar4;
      } while (cVar2 != '\0');
    }
  }
  *(uint *)(lVar1 + 0x28) = uVar3;
  *(undefined1 *)(lVar1 + 0x2c) = 1;
  lVar1 = FUN_10049bf40(lVar1 + 0x10);
  if (PTR_s_Ability__Lorelai__C_101859a38 == (undefined *)0x0) {
    uVar5 = 0;
  }
  else {
    cVar2 = *PTR_s_Ability__Lorelai__C_101859a38;
    pcVar4 = PTR_s_Ability__Lorelai__C_101859a38;
    while (cVar2 != '\0') {
      pcVar4 = pcVar4 + 1;
      uVar5 = (uVar5 ^ (int)cVar2) * 0x1000193;
      cVar2 = *pcVar4;
    }
  }
  *(uint *)(lVar1 + 0x20) = uVar5;
  *(code **)(lVar1 + 0x10) = FUN_100494ce0;
  *(undefined4 *)(lVar1 + 0x18) = 3;
  *(undefined4 *)(lVar1 + 0x28) = 1;
  return;
}




void FUN_1003f6a88(void)

{
  char cVar1;
  long lVar2;
  long *plVar3;
  uint uVar4;
  char *pcVar5;
  
  lVar2 = FUN_100438a9c();
  if (PTR_s_Ability__Varya__C_101859aa8 == (undefined *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = 0x811c9dc5;
    cVar1 = *PTR_s_Ability__Varya__C_101859aa8;
    pcVar5 = PTR_s_Ability__Varya__C_101859aa8;
    while (cVar1 != '\0') {
      pcVar5 = pcVar5 + 1;
      uVar4 = (uVar4 ^ (int)cVar1) * 0x1000193;
      cVar1 = *pcVar5;
    }
  }
  *(uint *)(lVar2 + 0x28) = uVar4;
  plVar3 = (long *)FUN_100433e34(lVar2 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x0001003f6af8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Varya_Passive_C_Aspd_10185c5d8);
  return;
}




void FUN_1003f6afc(void)

{
  long lVar1;
  long *plVar2;
  code *local_20;
  undefined4 local_18;
  
  lVar1 = FUN_10043099c();
  plVar2 = (long *)FUN_100430a84(lVar1 + 0x10);
  local_20 = FUN_100452740;
  local_18 = 3;
  (**(code **)(*plVar2 + 0x30))(plVar2,0xf,1,&local_20);
  return;
}




void FUN_1003f6b4c(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  undefined4 local_40 [2];
  undefined4 local_38;
  
  lVar1 = FUN_10042ea44();
  lVar1 = lVar1 + 0x10;
  FUN_1004386bc(lVar1);
  plVar2 = (long *)FUN_10043ab94(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x40))();
  (**(code **)(*plVar2 + 0x58))(plVar2,1);
  plVar2 = (long *)FUN_100441e18(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x38))(plVar2,"Sound_Varya_Chain_Lightning_First_Hit_1");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x18))(plVar2,"Sound_Varya_Chain_Lightning_First_Hit_2");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x18))(plVar2,"Sound_Varya_Chain_Lightning_First_Hit_3");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x18))(plVar2,"Sound_Varya_Chain_Lightning_First_Hit_4");
  uVar3 = FUN_1010a1520();
  lVar4 = FUN_1010a0e0c(uVar3,0,"*KindredSoundBalance*",0);
  FUN_1003c7e38(*(undefined4 *)(lVar4 + 0x45c));
  (**(code **)(*plVar2 + 0x28))(plVar2);
  plVar2 = (long *)FUN_100434b18(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))
                             (plVar2,PTR_s_Buff_RevealToBestowersTeamTrueSi_10185b3a0);
  local_40[0] = 0x3f800000;
  local_38 = 1;
  (**(code **)(*plVar2 + 0x18))(plVar2,local_40);
  lVar1 = FUN_10042e3b0(param_1);
  FUN_10049b814(lVar1 + 0x10);
  return;
}




void FUN_1003f6c84(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  undefined4 local_30 [2];
  undefined4 local_28;
  
  lVar1 = FUN_10042ea44();
  plVar2 = (long *)FUN_100441e68(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,"Bone_CenterMass");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Varya_AA_Beam");
  local_30[0] = 0x3ecccccd;
  local_28 = 1;
  plVar2 = (long *)(**(code **)(*plVar2 + 0x60))(plVar2,local_30);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x88))(plVar2,1);
  (**(code **)(*plVar2 + 0xa8))(plVar2,FUN_1004527c4);
  lVar1 = FUN_10042e3b0(param_1);
  FUN_10049b814(lVar1 + 0x10);
  return;
}




void FUN_1003f6d34(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  undefined4 local_40 [2];
  undefined4 local_38;
  
  lVar1 = FUN_10042ea44();
  plVar2 = (long *)FUN_100441e68(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,"Bone_CenterMass");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Varya_AA_Beam");
  local_40[0] = 0x3ecccccd;
  local_38 = 1;
  plVar2 = (long *)(**(code **)(*plVar2 + 0x60))(plVar2,local_40);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x88))(plVar2,1);
  (**(code **)(*plVar2 + 0xa8))(plVar2,FUN_1004527c4);
  lVar1 = FUN_10042e3b0(param_1);
  FUN_10049b814(lVar1 + 0x10);
  lVar1 = FUN_10042e498(param_1);
  lVar1 = lVar1 + 0x10;
  plVar2 = (long *)FUN_100441e18(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x38))(plVar2,"Sound_Varya_Chain_Lightning_Second_Hit_1");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x18))(plVar2,"Sound_Varya_Chain_Lightning_Second_Hit_2");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x18))(plVar2,"Sound_Varya_Chain_Lightning_Second_Hit_3");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x18))(plVar2,"Sound_Varya_Chain_Lightning_Second_Hit_4");
  uVar3 = FUN_1010a1520();
  lVar4 = FUN_1010a0e0c(uVar3,0,"*KindredSoundBalance*",0);
  FUN_1003c7e38(*(undefined4 *)(lVar4 + 0x45c));
  (**(code **)(*plVar2 + 0x28))(plVar2);
  FUN_1004386bc(lVar1);
  plVar2 = (long *)FUN_10043ab94(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x40))();
  (**(code **)(*plVar2 + 0x20))(plVar2,"CHAIN_LIGHTNING_DAMAGE_PRIMARY");
  plVar2 = (long *)FUN_10043ab94(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x40))();
  (**(code **)(*plVar2 + 0x20))(plVar2,"CHAIN_LIGHTNING_WEAPON_PRIMARY");
  plVar2 = (long *)FUN_100434b18(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))
                             (plVar2,PTR_s_Buff_RevealToBestowersTeamTrueSi_10185b3a0);
  local_40[0] = 0x3f800000;
  local_38 = 1;
  (**(code **)(*plVar2 + 0x18))(plVar2,local_40);
  return;
}




void FUN_1003f6f14(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  undefined4 local_30 [2];
  undefined4 local_28;
  
  lVar1 = FUN_10042ea44();
  plVar2 = (long *)FUN_100441e68(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,"Bone_CenterMass");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Varya_AA_Beam");
  local_30[0] = 0x3ecccccd;
  local_28 = 1;
  plVar2 = (long *)(**(code **)(*plVar2 + 0x60))(plVar2,local_30);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x88))(plVar2,1);
  (**(code **)(*plVar2 + 0xa0))(plVar2,FUN_100452754);
  lVar1 = FUN_10042e3b0(param_1);
  FUN_10049b814(lVar1 + 0x10);
  lVar1 = FUN_10042e498(param_1);
  lVar1 = lVar1 + 0x10;
  FUN_1004386bc(lVar1);
  plVar2 = (long *)FUN_10043ab94(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x40))();
  (**(code **)(*plVar2 + 0x20))(plVar2,"CHAIN_LIGHTNING_DAMAGE_SECONDARY");
  plVar2 = (long *)FUN_100434b18(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))
                             (plVar2,PTR_s_Buff_RevealToBestowersTeamTrueSi_10185b3a0);
  local_30[0] = 0x3f800000;
  local_28 = 1;
  (**(code **)(*plVar2 + 0x18))(plVar2,local_30);
  return;
}




void FUN_1003f7038(void)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  
  lVar1 = FUN_10043988c();
  lVar1 = FUN_10043ab44(lVar1 + 0x10);
  *(undefined1 *)(lVar1 + 0x58) = 1;
  *(code **)(lVar1 + 0x40) = FUN_100452708;
  lVar1 = lVar1 + 0x10;
  plVar2 = (long *)FUN_100452858(lVar1);
  puVar3 = (undefined8 *)(**(code **)(*plVar2 + 0x30))();
  (**(code **)*puVar3)(puVar3,PTR_s_Ability__Varya__A_101859a68);
  plVar2 = (long *)FUN_100452858(lVar1);
  puVar3 = (undefined8 *)(**(code **)(*plVar2 + 0x30))();
  (**(code **)*puVar3)(puVar3,PTR_s_Ability__Varya__A_Default_101859a70);
  plVar2 = (long *)FUN_100452858(lVar1);
  puVar3 = (undefined8 *)(**(code **)(*plVar2 + 0x30))();
                    /* WARNING: Could not recover jumptable at 0x0001003f70e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*puVar3)(puVar3,PTR_s_Ability__Varya__A_Quick_101859a78);
  return;
}




void FUN_1003f70e8(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined4 local_30 [2];
  undefined4 local_28;
  
  lVar1 = FUN_10042e498();
  lVar1 = lVar1 + 0x10;
  lVar2 = FUN_10043aaf4(lVar1);
  *(code **)(lVar2 + 0x10) = FUN_1004528a8;
  FUN_1004386bc(lVar1);
  plVar3 = (long *)FUN_10043ab94(lVar1);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x40))();
  (**(code **)(*plVar3 + 0x38))(plVar3,"DAMAGE",0);
  plVar3 = (long *)FUN_100434b18(lVar1);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))
                             (plVar3,PTR_s_Buff_RevealToBestowersTeamTrueSi_10185b3a0);
  local_30[0] = 0x3f800000;
  local_28 = 1;
  (**(code **)(*plVar3 + 0x18))(plVar3,local_30);
  return;
}




void FUN_1003f7194(void)

{
  long lVar1;
  long *plVar2;
  undefined4 local_30 [2];
  undefined4 local_28;
  
  lVar1 = FUN_10042e498();
  lVar1 = lVar1 + 0x10;
  plVar2 = (long *)FUN_100441e68(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,"Bone_CenterMass");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Varya_A_Beam");
  local_30[0] = 0x3ecccccd;
  local_28 = 1;
  plVar2 = (long *)(**(code **)(*plVar2 + 0x60))(plVar2,local_30);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x88))(plVar2,1);
  (**(code **)(*plVar2 + 0xa0))(plVar2,FUN_100452cbc);
  FUN_1004386bc(lVar1);
  plVar2 = (long *)FUN_10043ab94(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x40))();
  (**(code **)(*plVar2 + 0x38))(plVar2,"BOUNCE_DAMAGE",0);
  plVar2 = (long *)FUN_100434b18(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))
                             (plVar2,PTR_s_Buff_RevealToBestowersTeamTrueSi_10185b3a0);
  local_30[0] = 0x3f800000;
  local_28 = 1;
  (**(code **)(*plVar2 + 0x18))(plVar2,local_30);
  return;
}




void FUN_1003f72a0(void)

{
  long lVar1;
  
  lVar1 = FUN_10042e3b0();
  FUN_10049b814(lVar1 + 0x10);
  return;
}




void FUN_1003f72b8(long param_1)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  undefined8 *puVar6;
  uint uVar7;
  char cVar8;
  char *pcVar9;
  uint uVar10;
  code *local_70;
  undefined4 local_68;
  
  uVar10 = 0x811c9dc5;
  uVar1 = (*(code *)**(undefined8 **)(param_1 + 0x168))
                    (param_1 + 0x168,PTR_s___VAR1_INT___10185d7f8);
  puVar2 = (undefined4 *)(**(code **)(*(long *)(param_1 + 0x168) + 0x10))(param_1 + 0x168,uVar1);
  *puVar2 = 0xffffffff;
  lVar3 = FUN_10042e2c8(param_1);
  FUN_10049b964(lVar3 + 0x10);
  plVar4 = (long *)FUN_10049b7c4(lVar3 + 0x10);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x30))(plVar4,"Sound_Varya_Ability_B_Hum_Loop_1");
  plVar4 = (long *)(**(code **)(*plVar4 + 0x18))(plVar4,"Sound_Varya_Ability_B_Hum_Loop_2");
  uVar1 = FUN_1010a1520();
  lVar3 = FUN_1010a0e0c(uVar1,0,"*KindredSoundBalance*",0);
  FUN_1003c7e38(*(undefined4 *)(lVar3 + 0x464));
  (**(code **)(*plVar4 + 0x28))(plVar4);
  lVar3 = FUN_10042e498(param_1);
  plVar4 = (long *)FUN_100433e34(lVar3 + 0x10);
  (**(code **)(*plVar4 + 0x30))(plVar4,PTR_s_Buff_Varya_B_Combo_A_SwapInIcon_10185c5f0);
  plVar4 = (long *)FUN_100441e18(lVar3 + 0x10);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x38))(plVar4,"Sound_Varya_Ability_B_Activation_1");
  plVar4 = (long *)(**(code **)(*plVar4 + 0x18))(plVar4,"Sound_Varya_Ability_B_Activation_2");
  uVar1 = FUN_1010a1520();
  lVar3 = FUN_1010a0e0c(uVar1,0,"*KindredSoundBalance*",0);
  FUN_1003c7e38(*(undefined4 *)(lVar3 + 0x464));
  (**(code **)(*plVar4 + 0x28))(plVar4);
  lVar3 = FUN_10042e3b0(param_1);
  FUN_10049b814(lVar3 + 0x10);
  lVar3 = FUN_100433b70(param_1);
  *(code **)(lVar3 + 0x40) = FUN_10049da0c;
  plVar4 = (long *)FUN_100433e34(lVar3 + 0x10);
  (**(code **)(*plVar4 + 0x30))(plVar4,PTR_s_Buff_Varya_B_Combo_A_Pressable_10185b230);
  lVar3 = FUN_100433b70(param_1);
  *(code **)(lVar3 + 0x40) = FUN_100452e94;
  plVar4 = (long *)FUN_100441e18(lVar3 + 0x10);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x38))(plVar4,"Sound_Varya_Ability_B_Fully_Charged_1");
  plVar4 = (long *)(**(code **)(*plVar4 + 0x18))(plVar4,"Sound_Varya_Ability_B_Fully_Charged_2");
  uVar1 = FUN_1010a1520();
  lVar5 = FUN_1010a0e0c(uVar1,0,"*KindredSoundBalance*",0);
  FUN_1003c7e38(*(undefined4 *)(lVar5 + 0x464));
  (**(code **)(*plVar4 + 0x28))(plVar4);
  lVar3 = FUN_10043ab44(lVar3 + 0x10);
  *(undefined1 *)(lVar3 + 0x58) = 1;
  *(code **)(lVar3 + 0x40) = FUN_100452f50;
  plVar4 = (long *)FUN_100433e34(lVar3 + 0x10);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x30))(plVar4,PTR_s_Buff_Varya_B_DoubleDash_10185b248);
  local_70 = FUN_1003c8810;
  local_68 = 3;
  (**(code **)(*plVar4 + 0x18))(plVar4,&local_70);
  lVar3 = FUN_100433910(param_1);
  if (PTR_s_Ability__Varya__A_Queue_101859a80 == (undefined *)0x0) {
    uVar7 = 0;
  }
  else {
    cVar8 = *PTR_s_Ability__Varya__A_Queue_101859a80;
    uVar7 = 0x811c9dc5;
    if (cVar8 != '\0') {
      uVar7 = 0x811c9dc5;
      pcVar9 = PTR_s_Ability__Varya__A_Queue_101859a80;
      do {
        pcVar9 = pcVar9 + 1;
        uVar7 = (uVar7 ^ (int)cVar8) * 0x1000193;
        cVar8 = *pcVar9;
      } while (cVar8 != '\0');
    }
  }
  *(uint *)(lVar3 + 0x28) = uVar7;
  *(byte *)(lVar3 + 0x38) = *(byte *)(lVar3 + 0x38) & 0xfb;
  lVar3 = lVar3 + 0x10;
  plVar4 = (long *)FUN_1004385a0(lVar3);
  (**(code **)(*plVar4 + 0x30))(plVar4,PTR_s_Buff_Varya_B_Combo_A_SwapInIcon_10185c5f0);
  plVar4 = (long *)FUN_1004385a0(lVar3);
  (**(code **)(*plVar4 + 0x30))(plVar4,PTR_s_Buff_Varya_B_Combo_A_Pressable_10185b230);
  lVar3 = FUN_10043aaf4(lVar3);
  *(code **)(lVar3 + 0x10) = FUN_100452df0;
  lVar3 = FUN_100433910(param_1);
  if (PTR_s_Ability__Varya__A_101859a68 == (undefined *)0x0) {
    uVar7 = 0;
  }
  else {
    cVar8 = *PTR_s_Ability__Varya__A_101859a68;
    uVar7 = 0x811c9dc5;
    if (cVar8 != '\0') {
      uVar7 = 0x811c9dc5;
      pcVar9 = PTR_s_Ability__Varya__A_101859a68;
      do {
        pcVar9 = pcVar9 + 1;
        uVar7 = (uVar7 ^ (int)cVar8) * 0x1000193;
        cVar8 = *pcVar9;
      } while (cVar8 != '\0');
    }
  }
  *(uint *)(lVar3 + 0x28) = uVar7;
  *(byte *)(lVar3 + 0x38) = *(byte *)(lVar3 + 0x38) & 0xfb;
  lVar3 = lVar3 + 0x10;
  plVar4 = (long *)FUN_1004385a0(lVar3);
  (**(code **)(*plVar4 + 0x30))(plVar4,PTR_s_Buff_Varya_B_MoveAvailable_10185b228);
  plVar4 = (long *)FUN_1004385a0(lVar3);
  (**(code **)(*plVar4 + 0x30))(plVar4,PTR_s_Buff_Varya_B_MoveDefaultAvailabl_10185b220);
  plVar4 = (long *)FUN_100433e34(lVar3);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x30))(plVar4,PTR_s_Buff_Varya_B_Control_10185b208);
  local_70 = FUN_1003c849c;
  local_68 = 3;
  (**(code **)(*plVar4 + 0x18))(plVar4,&local_70);
  lVar3 = FUN_10043aaf4(lVar3);
  *(code **)(lVar3 + 0x10) = FUN_100452e44;
  lVar3 = FUN_100433910(param_1);
  if (PTR_s_Ability__Varya__B_Move_Charged_101859aa0 == (undefined *)0x0) {
    uVar7 = 0;
  }
  else {
    cVar8 = *PTR_s_Ability__Varya__B_Move_Charged_101859aa0;
    uVar7 = 0x811c9dc5;
    if (cVar8 != '\0') {
      uVar7 = 0x811c9dc5;
      pcVar9 = PTR_s_Ability__Varya__B_Move_Charged_101859aa0;
      do {
        pcVar9 = pcVar9 + 1;
        uVar7 = (uVar7 ^ (int)cVar8) * 0x1000193;
        cVar8 = *pcVar9;
      } while (cVar8 != '\0');
    }
  }
  *(uint *)(lVar3 + 0x28) = uVar7;
  *(byte *)(lVar3 + 0x38) = *(byte *)(lVar3 + 0x38) & 0xfb;
  lVar3 = lVar3 + 0x10;
  plVar4 = (long *)FUN_1004385a0(lVar3);
  (**(code **)(*plVar4 + 0x30))(plVar4,PTR_s_Buff_Varya_B_MoveAvailable_10185b228);
  plVar4 = (long *)FUN_1004385a0(lVar3);
  (**(code **)(*plVar4 + 0x30))(plVar4,PTR_s_Buff_Varya_B_ChargingFx_10185b240);
  plVar4 = (long *)FUN_1004385a0(lVar3);
  (**(code **)(*plVar4 + 0x30))(plVar4,PTR_s_Buff_Varya_B_DoubleDash_10185b248);
  plVar4 = (long *)FUN_100433e34(lVar3);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x30))
                             (plVar4,PTR_s_Buff_Varya_A_QuickSpearAvailable_10185b210);
  local_70 = FUN_100452fcc;
  local_68 = 3;
  (**(code **)(*plVar4 + 0x18))(plVar4,&local_70);
  plVar4 = (long *)FUN_100433e34(lVar3);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x30))(plVar4,PTR_s_Buff_Varya_B_Control_10185b208);
  local_70 = FUN_1003c849c;
  local_68 = 3;
  (**(code **)(*plVar4 + 0x18))(plVar4,&local_70);
  lVar5 = FUN_10043aaf4(lVar3);
  *(code **)(lVar5 + 0x10) = FUN_100452cf8;
  lVar3 = FUN_10043aaf4(lVar3);
  *(code **)(lVar3 + 0x10) = FUN_100452d4c;
  lVar3 = FUN_100433910(param_1);
  if (PTR_s_Ability__Varya__B_Move_Default_101859a98 == (undefined *)0x0) {
    uVar7 = 0;
  }
  else {
    cVar8 = *PTR_s_Ability__Varya__B_Move_Default_101859a98;
    uVar7 = 0x811c9dc5;
    if (cVar8 != '\0') {
      uVar7 = 0x811c9dc5;
      pcVar9 = PTR_s_Ability__Varya__B_Move_Default_101859a98;
      do {
        pcVar9 = pcVar9 + 1;
        uVar7 = (uVar7 ^ (int)cVar8) * 0x1000193;
        cVar8 = *pcVar9;
      } while (cVar8 != '\0');
    }
  }
  *(uint *)(lVar3 + 0x28) = uVar7;
  *(byte *)(lVar3 + 0x38) = *(byte *)(lVar3 + 0x38) & 0xfb;
  lVar3 = lVar3 + 0x10;
  plVar4 = (long *)FUN_1004385a0(lVar3);
  (**(code **)(*plVar4 + 0x30))(plVar4,PTR_s_Buff_Varya_B_ChargingFx_10185b240);
  plVar4 = (long *)FUN_1004385a0(lVar3);
  (**(code **)(*plVar4 + 0x30))(plVar4,PTR_s_Buff_Varya_B_MoveDefaultAvailabl_10185b220);
  plVar4 = (long *)FUN_1004385a0(lVar3);
  (**(code **)(*plVar4 + 0x30))(plVar4,PTR_s_Buff_Varya_B_MoveAvailable_10185b228);
  plVar4 = (long *)FUN_100433e34(lVar3);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x30))
                             (plVar4,PTR_s_Buff_Varya_A_QuickSpearAvailable_10185b210);
  local_70 = FUN_100452fcc;
  local_68 = 3;
  (**(code **)(*plVar4 + 0x18))(plVar4,&local_70);
  plVar4 = (long *)FUN_100433e34(lVar3);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x30))(plVar4,PTR_s_Buff_Varya_B_Control_10185b208);
  local_70 = FUN_1003c849c;
  local_68 = 3;
  (**(code **)(*plVar4 + 0x18))(plVar4,&local_70);
  lVar5 = FUN_10043aaf4(lVar3);
  *(code **)(lVar5 + 0x10) = FUN_100452da0;
  lVar3 = FUN_10043aaf4(lVar3);
  *(code **)(lVar3 + 0x10) = FUN_100452d4c;
  lVar3 = FUN_10043988c(param_1);
  lVar3 = FUN_10043ab44(lVar3 + 0x10);
  *(undefined1 *)(lVar3 + 0x58) = 1;
  *(code **)(lVar3 + 0x40) = FUN_100452720;
  FUN_1004385f0(lVar3 + 0x10);
  lVar3 = FUN_10044cb4c(param_1);
  if (PTR_s_Ability__Varya__B_Move_Charged_101859aa0 == (undefined *)0x0) {
    uVar7 = 0;
  }
  else {
    cVar8 = *PTR_s_Ability__Varya__B_Move_Charged_101859aa0;
    uVar7 = 0x811c9dc5;
    if (cVar8 != '\0') {
      uVar7 = 0x811c9dc5;
      pcVar9 = PTR_s_Ability__Varya__B_Move_Charged_101859aa0;
      do {
        pcVar9 = pcVar9 + 1;
        uVar7 = (uVar7 ^ (int)cVar8) * 0x1000193;
        cVar8 = *pcVar9;
      } while (cVar8 != '\0');
    }
  }
  *(uint *)(lVar3 + 0x28) = uVar7;
  FUN_1004385f0(lVar3 + 0x10);
  lVar3 = FUN_10044cb4c(param_1);
  if (PTR_s_Ability__Varya__B_Move_Default_101859a98 == (undefined *)0x0) {
    uVar10 = 0;
  }
  else {
    cVar8 = *PTR_s_Ability__Varya__B_Move_Default_101859a98;
    pcVar9 = PTR_s_Ability__Varya__B_Move_Default_101859a98;
    while (cVar8 != '\0') {
      pcVar9 = pcVar9 + 1;
      uVar10 = (uVar10 ^ (int)cVar8) * 0x1000193;
      cVar8 = *pcVar9;
    }
  }
  *(uint *)(lVar3 + 0x28) = uVar10;
  FUN_1004385f0(lVar3 + 0x10);
  lVar3 = FUN_10042fdc4(param_1);
  lVar3 = lVar3 + 0x10;
  plVar4 = (long *)FUN_10049c8e4(lVar3);
  (**(code **)(*plVar4 + 0x30))(plVar4,PTR_s_Ability__Varya__B_101859a88);
  plVar4 = (long *)FUN_1004385a0(lVar3);
  (**(code **)(*plVar4 + 0x30))(plVar4,PTR_s_Buff_Varya_B_Combo_A_SwapInIcon_10185c5f0);
  plVar4 = (long *)FUN_1004385a0(lVar3);
  (**(code **)(*plVar4 + 0x30))(plVar4,PTR_s_Buff_Varya_B_Combo_A_Pressable_10185b230);
  plVar4 = (long *)FUN_1004385a0(lVar3);
  (**(code **)(*plVar4 + 0x30))(plVar4,PTR_s_Buff_Varya_B_ChargingFx_10185b240);
  plVar4 = (long *)FUN_1004385a0(lVar3);
  (**(code **)(*plVar4 + 0x30))(plVar4,PTR_s_Buff_Varya_B_DoubleDash_10185b248);
  plVar4 = (long *)FUN_1004385a0(lVar3);
  (**(code **)(*plVar4 + 0x30))(plVar4,PTR_s_Buff_Varya_B_MoveAvailable_10185b228);
  plVar4 = (long *)FUN_1004385a0(lVar3);
  (**(code **)(*plVar4 + 0x30))(plVar4,PTR_s_Buff_Varya_B_MoveDefaultAvailabl_10185b220);
  plVar4 = (long *)FUN_100452858(lVar3);
  puVar6 = (undefined8 *)(**(code **)(*plVar4 + 0x30))();
  (**(code **)*puVar6)(puVar6,PTR_s_Ability__Varya__A_Queue_101859a80);
  plVar4 = (long *)FUN_10045309c(lVar3);
  (**(code **)(*plVar4 + 0x40))(plVar4,PTR_s_Ability__Varya__B_101859a88);
  plVar4 = (long *)FUN_10045309c(lVar3);
  (**(code **)(*plVar4 + 0x40))(plVar4,PTR_s_Ability__Varya__B_Move_Default_101859a98);
  return;
}




void FUN_1003f7b6c(void)

{
  undefined *puVar1;
  long lVar2;
  
  lVar2 = FUN_10042e2c8();
  lVar2 = FUN_100451f64(lVar2 + 0x10);
  puVar1 = PTR_s_Ability__Varya__A_Queue_101859a80;
  *(undefined **)(lVar2 + 0x10) = PTR_s_Ability__Varya__A_101859a68;
  *(undefined **)(lVar2 + 0x18) = puVar1;
  return;
}




void FUN_1003f7b9c(void)

{
  return;
}




void FUN_1003f7ba0(void)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_10042e498();
  plVar2 = (long *)FUN_10045309c(lVar1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x0001003f7bd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Ability__Varya__A_101859a68,0,0);
  return;
}




void FUN_1003f7bd4(void)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_10042e2c8();
  plVar2 = (long *)FUN_10049bbfc(lVar1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x0001003f7bf4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x38))();
  return;
}




void FUN_1003f7bf8(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_10043099c();
  plVar2 = (long *)FUN_10049b864(lVar1 + 0x10);
  (**(code **)(*plVar2 + 0x30))(plVar2,4,FUN_10045319c);
  lVar1 = FUN_10042e3b0(param_1);
  FUN_10049b814(lVar1 + 0x10);
  return;
}




void FUN_1003f7c44(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  undefined4 local_40 [2];
  undefined4 local_38;
  
  lVar1 = FUN_10042e2c8();
  plVar2 = (long *)FUN_100441e68(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x60))();
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Varya_B_Charging");
  plVar2 = (long *)(**(code **)(*plVar2 + 0xb0))(plVar2,0);
  (**(code **)(*plVar2 + 0x78))(plVar2,0);
  plVar2 = (long *)FUN_10049bbfc(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))();
  (**(code **)(*plVar2 + 0x58))(plVar2,1);
  lVar1 = FUN_10042e498(param_1);
  plVar2 = (long *)FUN_100441e68(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x60))();
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Varya_B_RepeatableChargeFlash");
  (**(code **)(*plVar2 + 0xb0))(plVar2,0);
  lVar1 = FUN_100433b70(param_1);
  *(code **)(lVar1 + 0x40) = FUN_1004530ec;
  plVar2 = (long *)FUN_100441e68(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x60))();
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Varya_B_RepeatableChargeFlash");
  plVar2 = (long *)(**(code **)(*plVar2 + 0xb0))(plVar2,0);
  local_40[0] = 0x3dcccccd;
  local_38 = 1;
  plVar2 = (long *)(**(code **)(*plVar2 + 0xd0))(plVar2,local_40);
  plVar2 = (long *)(**(code **)(*plVar2 + 0xc0))(0x3f800000,0x3f800000,0x3f666666);
  (**(code **)(*plVar2 + 0xd8))(0x3f800000);
  return;
}




void FUN_1003f7dc0(long param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  code *local_50;
  undefined4 local_48;
  
  lVar1 = FUN_10042ea44();
  lVar1 = lVar1 + 0x10;
  plVar2 = (long *)FUN_100441e68(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,"Bone_CenterMass");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Varya_B_DamageBeam");
  local_50 = (code *)CONCAT44(local_50._4_4_,0x3ecccccd);
  local_48 = 1;
  plVar2 = (long *)(**(code **)(*plVar2 + 0x60))(plVar2,&local_50);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x88))(plVar2,1);
  (**(code **)(*plVar2 + 0xa0))(plVar2,FUN_1004532d8);
  plVar2 = (long *)FUN_100441e18(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x38))(plVar2,"Sound_Varya_Ability_B_Damage_1");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x18))(plVar2,"Sound_Varya_Ability_B_Damage_2");
  uVar3 = FUN_1010a1520();
  lVar4 = FUN_1010a0e0c(uVar3,0,"*KindredSoundBalance*",0);
  FUN_1003c7e38(*(undefined4 *)(lVar4 + 0x464));
  (**(code **)(*plVar2 + 0x28))(plVar2);
  FUN_1004386bc(lVar1);
  plVar2 = (long *)FUN_10043ab94(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x40))();
  (**(code **)(*plVar2 + 0x38))(plVar2,"DAMAGE",4);
  plVar2 = (long *)FUN_1004519c8(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))();
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))();
  local_50 = FUN_100453314;
  local_48 = 4;
  (**(code **)(*plVar2 + 0x10))(plVar2,2,&local_50);
  lVar1 = FUN_10042ea44(param_1);
  lVar1 = lVar1 + 0x10;
  FUN_10043aa04(lVar1);
  plVar2 = (long *)FUN_100434b18(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_Varya_B_Barrier_10185c5f8);
  local_50 = FUN_1004533e0;
  local_48 = 3;
  (**(code **)(*plVar2 + 0x18))(plVar2,&local_50);
  if ((*(byte *)(*(long *)(*(long *)(param_1 + 0x10) + 0x10) + 0x2f4) & 1) != 0) {
    plVar2 = (long *)FUN_100434b18(lVar1);
    plVar2 = (long *)(**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_Varya_B_Barrier_10185c5f8);
    local_50 = FUN_1004533e0;
    local_48 = 3;
    (**(code **)(*plVar2 + 0x18))(plVar2,&local_50);
  }
  return;
}




void FUN_1003f7fe8(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_10042e498();
  lVar1 = FUN_10043ab44(lVar1 + 0x10);
  *(code **)(lVar1 + 0x40) = FUN_100452fe0;
  *(ushort *)(lVar1 + 0x58) = *(ushort *)(lVar1 + 0x58) & 0xff01 | 0x401;
  plVar2 = (long *)FUN_10045309c(lVar1 + 0x28);
  (**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Ability__Varya__B_Move_101859a90,3,1);
  lVar1 = FUN_10042e580(param_1);
  *(undefined4 *)(lVar1 + 0x40) = 0x3dcccccd;
  *(byte *)(lVar1 + 0x44) = *(byte *)(lVar1 + 0x44) | 1;
  lVar1 = FUN_10043ab44(lVar1 + 0x10);
  *(code **)(lVar1 + 0x40) = FUN_100452fe0;
  *(ushort *)(lVar1 + 0x58) = *(ushort *)(lVar1 + 0x58) & 0xff01 | 0x401;
  plVar2 = (long *)FUN_10045309c(lVar1 + 0x10);
  (**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Ability__Varya__A_101859a68,0,0);
  lVar1 = FUN_10042fdc4(param_1);
  plVar2 = (long *)FUN_10045309c(lVar1 + 0x10);
  (**(code **)(*plVar2 + 0x40))(plVar2,PTR_s_Ability__Varya__B_Move_101859a90);
  lVar1 = FUN_1004303b0(param_1);
  plVar2 = (long *)FUN_1004385a0(lVar1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x0001003f80f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_Varya_B_Control_10185b208);
  return;
}




void FUN_1003f80fc(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_10042e498();
  lVar1 = FUN_10043ab44(lVar1 + 0x10);
  *(code **)(lVar1 + 0x40) = FUN_100452fe0;
  *(ushort *)(lVar1 + 0x58) = *(ushort *)(lVar1 + 0x58) & 0xff01 | 0x401;
  plVar2 = (long *)FUN_10045309c(lVar1 + 0x28);
  (**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Ability__Varya__B_Move_Default_101859a98,3,1);
  lVar1 = FUN_10042e580(param_1);
  *(undefined4 *)(lVar1 + 0x40) = 0x3dcccccd;
  *(byte *)(lVar1 + 0x44) = *(byte *)(lVar1 + 0x44) | 1;
  lVar1 = FUN_10043ab44(lVar1 + 0x10);
  *(code **)(lVar1 + 0x40) = FUN_100452fe0;
  *(ushort *)(lVar1 + 0x58) = *(ushort *)(lVar1 + 0x58) & 0xff01 | 0x401;
  plVar2 = (long *)FUN_10045309c(lVar1 + 0x10);
  (**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Ability__Varya__A_101859a68,0,0);
  lVar1 = FUN_10042fdc4(param_1);
  plVar2 = (long *)FUN_10045309c(lVar1 + 0x10);
  (**(code **)(*plVar2 + 0x40))(plVar2,PTR_s_Ability__Varya__B_Move_Default_101859a98);
  lVar1 = FUN_1004303b0(param_1);
  plVar2 = (long *)FUN_1004385a0(lVar1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x0001003f820c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_Varya_B_Control_10185b208);
  return;
}




void FUN_1003f8210(long param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  int *piVar5;
  code *local_40;
  undefined4 local_38;
  
  lVar1 = FUN_10042e498();
  lVar1 = lVar1 + 0x10;
  lVar2 = FUN_10043d65c(lVar1);
  *(code **)(lVar2 + 0x10) = FUN_1004533f4;
  plVar3 = (long *)FUN_100434b18(lVar1);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Varya_C_Marked_10185c600);
  local_40 = FUN_10045355c;
  local_38 = 4;
  (**(code **)(*plVar3 + 0x18))(plVar3,&local_40);
  plVar3 = (long *)FUN_10049da1c(lVar1);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))(plVar3,"Sound_Varya_Ability_C_Thunder_Storm_1");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x18))(plVar3,"Sound_Varya_Ability_C_Thunder_Storm_2");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x18))(plVar3,"Sound_Varya_Ability_C_Thunder_Storm_3");
  uVar4 = FUN_1010a1520();
  lVar1 = FUN_1010a0e0c(uVar4,0,"*KindredSoundBalance*",0);
  FUN_1003c7e38(*(undefined4 *)(lVar1 + 0x468));
  (**(code **)(*plVar3 + 0x28))(plVar3);
  lVar1 = FUN_10042e3b0(param_1);
  FUN_10049b814(lVar1 + 0x10);
  lVar1 = FUN_10042f8e8(param_1);
  lVar2 = FUN_10043aaa4(lVar1 + 0x10);
  *(code **)(lVar2 + 0x10) = FUN_1004534a8;
  piVar5 = (int *)(lVar2 + 0x18);
  if (*piVar5 != 0) {
    piVar5 = (int *)(lVar2 + 0x1c);
    if (*piVar5 != 0) goto LAB_1003f834c;
  }
  FUN_1003a4e5c(piVar5,PTR_s_Buff_Varya_C_Marked_10185c600);
LAB_1003f834c:
  *(undefined4 *)(lVar2 + 0x28) =
       *(undefined4 *)(*(long *)(*(long *)(param_1 + 0x10) + 0x10) + 0x260);
  plVar3 = (long *)FUN_10043b538(lVar1 + 0x10);
  (**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Varya_C_Marked_10185c600);
  lVar1 = FUN_10042fdc4(param_1);
  plVar3 = (long *)FUN_10049c8e4(lVar1 + 0x10);
  (**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Ability__Varya__C_101859aa8);
  return;
}




void FUN_1003f83ac(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  undefined4 local_30 [2];
  undefined4 local_28;
  
  lVar1 = FUN_100433b70();
  *(code **)(lVar1 + 0x40) = FUN_10049da6c;
  plVar2 = (long *)FUN_100433e34(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_Varya_C_ComboWindow_10185b200);
  local_30[0] = 0x40000000;
  local_28 = 1;
  (**(code **)(*plVar2 + 0x18))(plVar2,local_30);
  lVar1 = FUN_10042f8e8(param_1);
  plVar2 = (long *)FUN_1004385a0(lVar1 + 0x10);
  (**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_Varya_C_Control_10185b268);
  lVar1 = FUN_10042e2c8(param_1);
  plVar2 = (long *)FUN_10049bbfc(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))();
  (**(code **)(*plVar2 + 0x58))(plVar2,0);
  return;
}




void FUN_1003f846c(void)

{
  return;
}




void FUN_1003f8470(long param_1)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  undefined *puVar4;
  bool bVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  undefined4 local_60 [2];
  undefined4 local_58;
  
  puVar4 = PTR_s_Buff_Varya_Talent_TalentC_10185c650;
  lVar7 = FUN_100345d90(*(undefined4 *)(param_1 + 0x308));
  if (lVar7 == 0) {
    iVar6 = 0;
  }
  else {
    iVar6 = FUN_1003a47d0(lVar7,puVar4);
  }
  lVar7 = FUN_10042e2c8(param_1);
  plVar8 = (long *)FUN_100441e68(lVar7 + 0x10);
  plVar8 = (long *)(**(code **)(*plVar8 + 0x60))();
  plVar8 = (long *)(**(code **)(*plVar8 + 0x48))(plVar8,"Effect_Varya_C_EnemyWarning");
  plVar8 = (long *)(**(code **)(*plVar8 + 0xc0))(0x3f333333,0x3ecccccd,0x3f800000);
  plVar8 = (long *)(**(code **)(*plVar8 + 0x78))(plVar8,1);
  plVar8 = (long *)(**(code **)(*plVar8 + 0xb0))(plVar8,1);
  local_60[0] = 0x3d4ccccd;
  local_58 = 1;
  plVar8 = (long *)(**(code **)(*plVar8 + 0xd0))(plVar8,local_60);
  (**(code **)(*plVar8 + 0xd8))(0x3f666666);
  lVar7 = FUN_100433b70(param_1);
  *(code **)(lVar7 + 0x40) = FUN_100453618;
  plVar8 = (long *)FUN_100451bac(lVar7 + 0x10);
  pcVar1 = "*Varya_C_StrikeTalent*";
  bVar5 = iVar6 == 0;
  pcVar2 = pcVar1;
  if (bVar5) {
    pcVar2 = "*Varya_C_StrikeA*";
  }
  pcVar3 = pcVar1;
  if (bVar5) {
    pcVar3 = "*Varya_C_StrikeB*";
  }
  if (bVar5) {
    pcVar1 = "*Varya_C_StrikeC*";
  }
  (**(code **)(*plVar8 + 0x30))(plVar8,pcVar2,1);
  lVar9 = FUN_100433b70(param_1);
  *(code **)(lVar9 + 0x40) = FUN_100453654;
  *(long *)(lVar7 + 0x48) = lVar9;
  *(byte *)(lVar9 + 0x50) = *(byte *)(lVar9 + 0x50) & 0xfe;
  plVar8 = (long *)FUN_100451bac(lVar9 + 0x10);
  (**(code **)(*plVar8 + 0x30))(plVar8,pcVar3,1);
  lVar7 = FUN_100433b70(param_1);
  *(code **)(lVar7 + 0x40) = FUN_100453654;
  *(long *)(lVar9 + 0x48) = lVar7;
  *(byte *)(lVar7 + 0x50) = *(byte *)(lVar7 + 0x50) & 0xfe;
  plVar8 = (long *)FUN_100451bac(lVar7 + 0x10);
  (**(code **)(*plVar8 + 0x30))(plVar8,pcVar1,1);
  lVar9 = FUN_100433b70(param_1);
  if (iVar6 != 0) {
    *(code **)(lVar9 + 0x40) = FUN_100453654;
    *(long *)(lVar7 + 0x48) = lVar9;
    *(byte *)(lVar9 + 0x50) = *(byte *)(lVar9 + 0x50) & 0xfe;
    plVar8 = (long *)FUN_100451bac(lVar9 + 0x10);
    (**(code **)(*plVar8 + 0x30))(plVar8,"*Varya_C_StrikeTalent*",1);
    lVar7 = FUN_100433b70(param_1);
    *(code **)(lVar7 + 0x40) = FUN_100453654;
    *(long *)(lVar9 + 0x48) = lVar7;
    *(byte *)(lVar7 + 0x50) = *(byte *)(lVar7 + 0x50) & 0xfe;
    plVar8 = (long *)FUN_100451bac(lVar7 + 0x10);
    (**(code **)(*plVar8 + 0x30))(plVar8,"*Varya_C_StrikeTalent*",1);
    lVar9 = FUN_100433b70(param_1);
  }
  *(code **)(lVar9 + 0x40) = FUN_10049da7c;
  *(long *)(lVar7 + 0x48) = lVar9;
  *(byte *)(lVar9 + 0x50) = *(byte *)(lVar9 + 0x50) & 0xfe;
  FUN_1004385f0(lVar9 + 0x10);
  return;
}




void FUN_1003f8710(undefined8 param_1)

{
  FUN_1004536cc(param_1,PTR_s_Buff_Varya_C_StrikeADamage_10185c628);
  return;
}




void FUN_1003f871c(undefined8 param_1)

{
  FUN_1004536cc(param_1,PTR_s_Buff_Varya_C_StrikeBDamage_10185c630);
  return;
}




void FUN_1003f8728(undefined8 param_1)

{
  FUN_1004536cc(param_1,PTR_s_Buff_Varya_C_StrikeCDamage_10185c638);
  return;
}




void FUN_1003f8734(undefined8 param_1)

{
  FUN_1004536cc(param_1,PTR_s_Buff_Varya_C_StrikeTalentDamage_10185c640);
  return;
}




void FUN_1003f8740(undefined8 param_1)

{
  FUN_100453c3c(param_1,0);
  return;
}




void FUN_1003f8748(undefined8 param_1)

{
  FUN_100453c3c(param_1,0);
  return;
}




void FUN_1003f8750(undefined8 param_1)

{
  FUN_100453c3c(param_1,0);
  return;
}




void FUN_1003f8758(undefined8 param_1)

{
  FUN_100453c3c(param_1,1);
  return;
}




void FUN_1003f8760(undefined8 param_1)

{
  char cVar1;
  long lVar2;
  long *plVar3;
  uint uVar4;
  char *pcVar5;
  code *local_40;
  undefined4 local_38;
  
  lVar2 = FUN_100433030();
  if (PTR_s_Ability__Varya__A_101859a68 == (undefined *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = 0x811c9dc5;
    cVar1 = *PTR_s_Ability__Varya__A_101859a68;
    pcVar5 = PTR_s_Ability__Varya__A_101859a68;
    while (cVar1 != '\0') {
      pcVar5 = pcVar5 + 1;
      uVar4 = (uVar4 ^ (int)cVar1) * 0x1000193;
      cVar1 = *pcVar5;
    }
  }
  *(uint *)(lVar2 + 0x28) = uVar4;
  lVar2 = FUN_10049da9c(lVar2 + 0x10);
  *(undefined **)(lVar2 + 0x10) = PTR_s_Ability__Varya__A_101859a68;
  *(code **)(lVar2 + 0x18) = FUN_100494d7c;
  *(undefined4 *)(lVar2 + 0x20) = 3;
  *(undefined4 *)(lVar2 + 0x2c) = 0;
  lVar2 = FUN_10042e694(param_1);
  *(ushort *)(lVar2 + 0x48) = *(ushort *)(lVar2 + 0x48) | 0x10;
  *(byte *)(lVar2 + 0x60) = *(byte *)(lVar2 + 0x60) & 0xfc | 1;
  *(undefined4 *)(lVar2 + 0x40) = 0x54cb5381;
  lVar2 = lVar2 + 0x10;
  plVar3 = (long *)FUN_10043187c(lVar2);
  local_40 = FUN_100494db0;
  local_38 = 3;
  (**(code **)(*plVar3 + 0x30))(plVar3,&local_40);
  FUN_10043b4e8(lVar2);
  plVar3 = (long *)FUN_100434b18(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Stunned_10185a208);
  local_40 = FUN_100494de4;
  local_38 = 3;
  (**(code **)(*plVar3 + 0x18))(plVar3,&local_40);
  lVar2 = FUN_10042e694(param_1);
  *(ushort *)(lVar2 + 0x48) = *(ushort *)(lVar2 + 0x48) | 0x10;
  *(byte *)(lVar2 + 0x60) = *(byte *)(lVar2 + 0x60) & 0xfc | 1;
  *(undefined4 *)(lVar2 + 0x40) = 0x9561c370;
  plVar3 = (long *)FUN_10043187c(lVar2 + 0x10);
  local_40 = FUN_100494db0;
  local_38 = 3;
  (**(code **)(*plVar3 + 0x30))(plVar3,&local_40);
  return;
}




void FUN_1003f88ec(void)

{
  return;
}




void FUN_1003f88f0(void)

{
  return;
}




void FUN_1003f88f4(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  char cVar3;
  uint uVar4;
  char *pcVar5;
  uint uVar6;
  
  uVar6 = 0x811c9dc5;
  lVar1 = FUN_100434180();
  *(undefined4 *)(lVar1 + 0x2c) = 1;
  if (PTR_s_Buff_Stunned_10185a208 == (undefined *)0x0) {
    uVar4 = 0;
  }
  else {
    cVar3 = *PTR_s_Buff_Stunned_10185a208;
    uVar4 = 0x811c9dc5;
    if (cVar3 != '\0') {
      uVar4 = 0x811c9dc5;
      pcVar5 = PTR_s_Buff_Stunned_10185a208;
      do {
        pcVar5 = pcVar5 + 1;
        uVar4 = (uVar4 ^ (int)cVar3) * 0x1000193;
        cVar3 = *pcVar5;
      } while (cVar3 != '\0');
    }
  }
  *(uint *)(lVar1 + 0x28) = uVar4;
  plVar2 = (long *)FUN_100433e34(lVar1 + 0x10);
  (**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_Catherine_HeroicPerk_Captai_10185c660);
  lVar1 = FUN_100434180(param_1);
  *(undefined4 *)(lVar1 + 0x2c) = 1;
  if (PTR_s_Buff_Silence_10185a560 == (undefined *)0x0) {
    uVar6 = 0;
  }
  else {
    cVar3 = *PTR_s_Buff_Silence_10185a560;
    pcVar5 = PTR_s_Buff_Silence_10185a560;
    while (cVar3 != '\0') {
      pcVar5 = pcVar5 + 1;
      uVar6 = (uVar6 ^ (int)cVar3) * 0x1000193;
      cVar3 = *pcVar5;
    }
  }
  *(uint *)(lVar1 + 0x28) = uVar6;
  plVar2 = (long *)FUN_100433e34(lVar1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x0001003f89f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_Catherine_HeroicPerk_Captai_10185c660);
  return;
}




void FUN_1003f89f8(void)

{
  long lVar1;
  long *plVar2;
  code *local_40;
  undefined4 local_38;
  
  lVar1 = FUN_10043099c();
  plVar2 = (long *)FUN_100430a84(lVar1 + 0x10);
  local_40 = FUN_10043427c;
  local_38 = 3;
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))(plVar2,7,1,&local_40);
  (**(code **)(*plVar2 + 0x38))();
  plVar2 = (long *)FUN_100430a84(lVar1 + 0x10);
  local_40 = FUN_10043427c;
  local_38 = 3;
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))(plVar2,8,1,&local_40);
  (**(code **)(*plVar2 + 0x38))();
  return;
}




void FUN_1003f8a9c(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  code *local_30;
  undefined4 local_28;
  
  lVar1 = FUN_10042e3b0();
  FUN_10049b814(lVar1 + 0x10);
  lVar1 = FUN_10042e2c8(param_1);
  lVar1 = lVar1 + 0x10;
  plVar2 = (long *)FUN_100430a84(lVar1);
  local_30 = FUN_1004346d8;
  local_28 = 3;
  (**(code **)(*plVar2 + 0x30))(plVar2,0x10,1,&local_30);
  plVar2 = (long *)FUN_100451f14(lVar1);
  (**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Ability__Catherine__A_DefaultAtt_101858f20);
  plVar2 = (long *)FUN_10049ba04(lVar1);
  (**(code **)(*plVar2 + 0x30))(plVar2,"Idle","AssassinsCharge_Idle");
  plVar2 = (long *)FUN_100441e68(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,"Bone_Shield");
  (**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Catherine_AssassinsChargeShieldGlow");
  return;
}




void FUN_1003f8b7c(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  
  lVar1 = FUN_10042e3b0();
  FUN_10049b814(lVar1 + 0x10);
  lVar1 = FUN_10042e2c8(param_1);
  lVar1 = lVar1 + 0x10;
  lVar2 = FUN_10049be00(lVar1);
  *(undefined4 *)(lVar2 + 0x58) = 1;
  *(code **)(lVar2 + 0x10) = FUN_1004346ec;
  *(undefined4 *)(lVar2 + 0x18) = 3;
  plVar3 = (long *)FUN_10049bfec(lVar1);
  (**(code **)(*plVar3 + 0x30))(plVar3,"Effect_Catherine_AssassinsChargeDash");
  plVar3 = (long *)FUN_10049ba04(lVar1);
  (**(code **)(*plVar3 + 0x30))(plVar3,"Move","AssassinsCharge_Run");
  plVar3 = (long *)FUN_10049ba04(lVar1);
  (**(code **)(*plVar3 + 0x30))(plVar3,"FastMove","AssassinsCharge_Run");
  plVar3 = (long *)FUN_10049ba04(lVar1);
                    /* WARNING: Could not recover jumptable at 0x0001003f8c50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x30))(plVar3,"Sprint","AssassinsCharge_Run");
  return;
}




void FUN_1003f8c54(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  code *local_30;
  undefined4 local_28;
  
  lVar1 = FUN_10042e694();
  *(ushort *)(lVar1 + 0x48) = *(ushort *)(lVar1 + 0x48) | 8;
  *(byte *)(lVar1 + 0x60) = *(byte *)(lVar1 + 0x60) & 0xfc | 0x42;
  *(undefined1 *)(lVar1 + 0x58) = 0xfb;
  *(code **)(lVar1 + 0x38) = FUN_100434674;
  lVar1 = FUN_10043aaf4(lVar1 + 0x10);
  *(code **)(lVar1 + 0x10) = FUN_100434290;
  lVar1 = FUN_10042e2c8(param_1);
  plVar2 = (long *)FUN_100441e68(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x60))();
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Catherine_ArcaneShield_Buff");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,1);
  (**(code **)(*plVar2 + 0x90))();
  plVar2 = (long *)FUN_10049b7c4(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))(plVar2,"Sound_Catherine_Ability_B_Loop");
  uVar3 = FUN_1010a1520();
  lVar1 = FUN_1010a0e0c(uVar3,0,"*KindredSoundBalance*",0);
  FUN_1003e0110(*(undefined4 *)(lVar1 + 100));
  (**(code **)(*plVar2 + 0x28))(plVar2);
  lVar1 = FUN_10042e580(param_1);
  *(undefined4 *)(lVar1 + 0x40) = 0x3f000000;
  *(byte *)(lVar1 + 0x44) = *(byte *)(lVar1 + 0x44) | 1;
  plVar2 = (long *)FUN_10043fc58(lVar1 + 0x10);
  local_30 = FUN_1004346c4;
  local_28 = 3;
  (**(code **)(*plVar2 + 0x30))(plVar2,&local_30);
  plVar2 = (long *)FUN_10043ab94(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x40))();
  (**(code **)(*plVar2 + 0x38))(plVar2,"BurnDamagePerSecond",2);
  lVar1 = FUN_10042e3b0(param_1);
  FUN_10049b814(lVar1 + 0x10);
  lVar1 = FUN_10042fdc4(param_1);
  plVar2 = (long *)FUN_100452858(lVar1 + 0x10);
  puVar4 = (undefined8 *)(**(code **)(*plVar2 + 0x30))();
  (**(code **)*puVar4)(puVar4,PTR_s_Ability__Catherine__B_101858f38);
  return;
}




void FUN_1003f8e1c(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  code *local_40;
  undefined4 local_38;
  
  lVar1 = FUN_10043099c();
  plVar2 = (long *)FUN_100430a84(lVar1 + 0x10);
  local_40 = FUN_1004927a4;
  local_38 = 3;
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))(plVar2,4,2,&local_40);
  (**(code **)(*plVar2 + 0x38))();
  plVar2 = (long *)FUN_100430a84(lVar1 + 0x10);
  local_40 = FUN_1004927d8;
  local_38 = 3;
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))(plVar2,5,2,&local_40);
  (**(code **)(*plVar2 + 0x38))();
  lVar1 = FUN_10042e3b0(param_1);
  FUN_10049b814(lVar1 + 0x10);
  return;
}




void FUN_1003f8edc(void)

{
  char cVar1;
  long lVar2;
  long *plVar3;
  uint uVar4;
  char *pcVar5;
  code *local_20;
  undefined4 local_18;
  
  lVar2 = FUN_10043988c();
  if (PTR_s_Buff_Catherine_HeroicPerk_Captai_10185c660 == (undefined *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = 0x811c9dc5;
    cVar1 = *PTR_s_Buff_Catherine_HeroicPerk_Captai_10185c660;
    pcVar5 = PTR_s_Buff_Catherine_HeroicPerk_Captai_10185c660;
    while (cVar1 != '\0') {
      pcVar5 = pcVar5 + 1;
      uVar4 = (uVar4 ^ (int)cVar1) * 0x1000193;
      cVar1 = *pcVar5;
    }
  }
  *(uint *)(lVar2 + 0x28) = uVar4;
  plVar3 = (long *)FUN_100433e34(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))
                             (plVar3,PTR_s_Buff_Catherine_Talent_CaptainOfT_10185c668);
  local_20 = FUN_10049280c;
  local_18 = 3;
  (**(code **)(*plVar3 + 0x18))(plVar3,&local_20);
  return;
}




void FUN_1003f8f80(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  code *local_30;
  undefined4 local_28;
  
  lVar1 = FUN_10042e694();
  *(ushort *)(lVar1 + 0x48) = *(ushort *)(lVar1 + 0x48) | 0x40;
  *(byte *)(lVar1 + 0x60) = *(byte *)(lVar1 + 0x60) & 0xfc | 1;
  *(ushort *)(lVar1 + 0x5a) = *(ushort *)(lVar1 + 0x5a) | 4;
  lVar1 = FUN_10043fc08(lVar1 + 0x10);
  lVar2 = FUN_10049c300(lVar1 + 0x10);
  *(undefined **)(lVar2 + 8) = PTR_s_Buff_Catherine_Stormguard_10185a550;
  plVar3 = (long *)FUN_10043d6ac(lVar1 + 0x88);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Ability__Catherine__A_101858f28);
  local_30 = FUN_100492840;
  local_28 = 3;
  (**(code **)(*plVar3 + 0x40))(plVar3,&local_30);
  plVar3 = (long *)FUN_10043d6ac(lVar1 + 0x88);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Ability__Catherine__C_101858f40);
  local_30 = FUN_100492874;
  local_28 = 3;
  (**(code **)(*plVar3 + 0x40))(plVar3,&local_30);
  return;
}




void FUN_1003f906c(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  uint uVar3;
  char cVar4;
  char *pcVar5;
  uint uVar6;
  code *local_40;
  undefined4 local_38;
  
  uVar6 = 0x811c9dc5;
  lVar1 = FUN_10042e2c8();
  lVar1 = FUN_10049bf40(lVar1 + 0x10);
  if (PTR_s_Ability__Catherine__C_101858f40 == (undefined *)0x0) {
    uVar3 = 0;
  }
  else {
    cVar4 = *PTR_s_Ability__Catherine__C_101858f40;
    uVar3 = 0x811c9dc5;
    if (cVar4 != '\0') {
      uVar3 = 0x811c9dc5;
      pcVar5 = PTR_s_Ability__Catherine__C_101858f40;
      do {
        pcVar5 = pcVar5 + 1;
        uVar3 = (uVar3 ^ (int)cVar4) * 0x1000193;
        cVar4 = *pcVar5;
      } while (cVar4 != '\0');
    }
  }
  *(uint *)(lVar1 + 0x20) = uVar3;
  *(code **)(lVar1 + 0x10) = FUN_1004928a8;
  *(undefined4 *)(lVar1 + 0x18) = 3;
  *(undefined4 *)(lVar1 + 0x28) = 1;
  lVar1 = FUN_10042e694(param_1);
  *(ushort *)(lVar1 + 0x48) = *(ushort *)(lVar1 + 0x48) | 8;
  *(byte *)(lVar1 + 0x60) = *(byte *)(lVar1 + 0x60) & 0xfc | 1;
  if (PTR_s_Ability__Catherine__C_101858f40 == (undefined *)0x0) {
    uVar6 = 0;
  }
  else {
    cVar4 = *PTR_s_Ability__Catherine__C_101858f40;
    pcVar5 = PTR_s_Ability__Catherine__C_101858f40;
    while (cVar4 != '\0') {
      pcVar5 = pcVar5 + 1;
      uVar6 = (uVar6 ^ (int)cVar4) * 0x1000193;
      cVar4 = *pcVar5;
    }
  }
  *(uint *)(lVar1 + 0x40) = uVar6;
  plVar2 = (long *)FUN_10043187c(lVar1 + 0x10);
  local_40 = FUN_1004928dc;
  local_38 = 3;
  (**(code **)(*plVar2 + 0x30))(plVar2,&local_40);
  return;
}




void FUN_1003f91a0(void)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_100431114();
  *(byte *)(lVar1 + 0x60) = *(byte *)(lVar1 + 0x60) | 0x10;
  plVar2 = (long *)FUN_100433e34(lVar1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x0001003f91d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_Ringo_DoubleDown_CritNext_10185af88);
  return;
}




void FUN_1003f91d8(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_10042e498();
  plVar2 = (long *)FUN_100441e18(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x38))(plVar2,"Sound_Ringo_Ability_B_Holster");
  (**(code **)(*plVar2 + 0x28))(0x3f266666);
  lVar1 = FUN_10042e2c8(param_1);
  plVar2 = (long *)FUN_100441e68(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x68))(plVar2,"OverHead");
  (**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Ringo_Perk_DoubleDown");
  plVar2 = (long *)FUN_100451f14(lVar1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x0001003f9278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Ability__Ringo__CritAttack_Doubl_101858f60);
  return;
}




void FUN_1003f927c(undefined8 param_1)

{
  code *local_20;
  undefined4 local_18;
  
  local_20 = FUN_1004473e0;
  local_18 = 3;
  FUN_10042eb40(param_1,&local_20);
  return;
}




void FUN_1003f92b0(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  code *local_40;
  undefined4 local_38;
  
  lVar1 = FUN_10042e498();
  plVar2 = (long *)FUN_100441e18(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x38))(plVar2,"Sound_Ringo_Ability_B_Cloak");
  (**(code **)(*plVar2 + 0x28))(0x3f800000);
  lVar1 = FUN_10042e3b0(param_1);
  FUN_10049b814(lVar1 + 0x10);
  lVar1 = FUN_10042e2c8(param_1);
  lVar1 = lVar1 + 0x10;
  plVar2 = (long *)FUN_100441e68(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x60))();
  (**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Ringo_Ability02_Aura");
  plVar2 = (long *)FUN_100441e68(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,"Bone_RightHand");
  (**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Ringo_Ability02_Hands");
  plVar2 = (long *)FUN_100441e68(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,"Bone_RightHand_Aura");
  (**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Ringo_Ability02_ArmAura");
  plVar2 = (long *)FUN_10049b7c4(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))(plVar2,"Sound_Ringo_Ability_B_Loop");
  (**(code **)(*plVar2 + 0x28))(0x3f266666);
  plVar2 = (long *)FUN_10049ba04(lVar1);
  (**(code **)(*plVar2 + 0x30))(plVar2,"Attack","Ability02_Attack");
  plVar2 = (long *)FUN_10049ba04(lVar1);
  (**(code **)(*plVar2 + 0x30))(plVar2,"AltAttack","Ability02_AltAttack");
  plVar2 = (long *)FUN_10049ba04(lVar1);
  (**(code **)(*plVar2 + 0x30))(plVar2,"CritAttack","Ability02_CritAttack");
  plVar2 = (long *)FUN_10049ba04(lVar1);
  (**(code **)(*plVar2 + 0x30))(plVar2,"Idle","Ability02_Idle");
  plVar2 = (long *)FUN_10049ba04(lVar1);
  (**(code **)(*plVar2 + 0x30))(plVar2,"Move","Ability02_Move");
  plVar2 = (long *)FUN_10049ba04(lVar1);
  (**(code **)(*plVar2 + 0x30))(plVar2,"FastMove","Ability02_Move");
  plVar2 = (long *)FUN_10049ba04(lVar1);
  (**(code **)(*plVar2 + 0x30))(plVar2,"Sprint","Ability02_Move");
  plVar2 = (long *)FUN_10049ba04(lVar1);
  (**(code **)(*plVar2 + 0x30))(plVar2,"MoveStop","Ability02_MoveStop");
  plVar2 = (long *)FUN_100430a84(lVar1);
  local_40 = FUN_1004473f4;
  local_38 = 3;
  (**(code **)(*plVar2 + 0x30))(plVar2,0xf,1,&local_40);
  lVar1 = FUN_10049be00(lVar1);
  *(undefined4 *)(lVar1 + 0x58) = 1;
  *(code **)(lVar1 + 0x10) = FUN_100447408;
  *(undefined4 *)(lVar1 + 0x18) = 3;
  lVar1 = FUN_10042e694(param_1);
  *(ushort *)(lVar1 + 0x48) = *(ushort *)(lVar1 + 0x48) | 4;
  *(byte *)(lVar1 + 0x60) = *(byte *)(lVar1 + 0x60) & 0xfc | 1;
  *(ushort *)(lVar1 + 0x5a) = *(ushort *)(lVar1 + 0x5a) | 4;
  FUN_10043b4e8(lVar1 + 0x10);
  plVar2 = (long *)FUN_10043ab94(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x40))();
  (**(code **)(*plVar2 + 0x38))(plVar2,"BonusCrystalDamage",1);
  lVar1 = FUN_10042fdc4(param_1);
  plVar2 = (long *)FUN_100441e18(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x38))(plVar2,"Sound_Ringo_Ability_B_Holster");
  (**(code **)(*plVar2 + 0x28))(0x3f800000);
  return;
}




void FUN_1003f95ec(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  float fVar4;
  code *local_40;
  undefined4 local_38;
  
  uVar1 = FUN_100345d90(*(undefined4 *)(param_1 + 0x308));
  lVar2 = FUN_10042e2c8(param_1);
  plVar3 = (long *)FUN_100441e68(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x60))();
  (**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Ringo_Ult_DOT");
  plVar3 = (long *)FUN_10049b7c4(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,"Sound_Ability_C_Burn_Loop");
  (**(code **)(*plVar3 + 0x28))(0x3ecccccd);
  lVar2 = FUN_10042e580(param_1);
  fVar4 = (float)FUN_1003dfe60(uVar1,2,4,0x19,0);
  *(float *)(lVar2 + 0x40) = 1.0 / fVar4;
  *(byte *)(lVar2 + 0x44) = *(byte *)(lVar2 + 0x44) & 0xfe;
  plVar3 = (long *)FUN_10043fc58(lVar2 + 0x10);
  local_40 = FUN_10044741c;
  local_38 = 3;
  (**(code **)(*plVar3 + 0x30))(plVar3,&local_40);
  plVar3 = (long *)FUN_10043ab94(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x40))();
  (**(code **)(*plVar3 + 0x38))(plVar3,"BurnDamagePerSecond",2);
  lVar2 = FUN_10042e3b0(param_1);
  FUN_10049b814(lVar2 + 0x10);
  return;
}




void FUN_1003f9730(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  char cVar4;
  uint uVar5;
  char *pcVar6;
  uint uVar7;
  code *local_50;
  undefined4 local_48;
  
  uVar7 = 0x811c9dc5;
  lVar2 = FUN_10042e694();
  *(ushort *)(lVar2 + 0x48) = *(ushort *)(lVar2 + 0x48) | 8;
  *(byte *)(lVar2 + 0x60) = *(byte *)(lVar2 + 0x60) & 0xfc | 1;
  *(ushort *)(lVar2 + 0x5a) = *(ushort *)(lVar2 + 0x5a) | 4;
  lVar2 = FUN_10043ab44(lVar2 + 0x10);
  puVar1 = PTR_s_Buff_Ringo_TwirlingSilver_10185af80;
  *(undefined1 *)(lVar2 + 0x58) = 2;
  *(undefined8 *)(lVar2 + 0x48) = 0;
  *(undefined8 *)(lVar2 + 0x50) = 0;
  *(undefined1 *)(lVar2 + 0x50) = 2;
  *(undefined **)(lVar2 + 0x40) = puVar1;
  plVar3 = (long *)FUN_10043187c(lVar2 + 0x10);
  local_50 = FUN_100494024;
  local_48 = 3;
  (**(code **)(*plVar3 + 0x30))(plVar3,&local_50);
  lVar2 = FUN_10042e694(param_1);
  *(ushort *)(lVar2 + 0x48) = *(ushort *)(lVar2 + 0x48) | 8;
  *(byte *)(lVar2 + 0x60) = *(byte *)(lVar2 + 0x60) & 0xfc | 1;
  if (PTR_s_Ability__Ringo__B_101858f70 == (undefined *)0x0) {
    uVar5 = 0;
  }
  else {
    cVar4 = *PTR_s_Ability__Ringo__B_101858f70;
    uVar5 = 0x811c9dc5;
    if (cVar4 != '\0') {
      uVar5 = 0x811c9dc5;
      pcVar6 = PTR_s_Ability__Ringo__B_101858f70;
      do {
        pcVar6 = pcVar6 + 1;
        uVar5 = (uVar5 ^ (int)cVar4) * 0x1000193;
        cVar4 = *pcVar6;
      } while (cVar4 != '\0');
    }
  }
  *(uint *)(lVar2 + 0x40) = uVar5;
  plVar3 = (long *)FUN_10043187c(lVar2 + 0x10);
  local_50 = FUN_100494024;
  local_48 = 3;
  (**(code **)(*plVar3 + 0x30))(plVar3,&local_50);
  lVar2 = FUN_10042e2c8(param_1);
  lVar2 = FUN_10049bf40(lVar2 + 0x10);
  if (PTR_s_Ability__Ringo__B_101858f70 == (undefined *)0x0) {
    uVar7 = 0;
  }
  else {
    cVar4 = *PTR_s_Ability__Ringo__B_101858f70;
    pcVar6 = PTR_s_Ability__Ringo__B_101858f70;
    while (cVar4 != '\0') {
      pcVar6 = pcVar6 + 1;
      uVar7 = (uVar7 ^ (int)cVar4) * 0x1000193;
      cVar4 = *pcVar6;
    }
  }
  *(uint *)(lVar2 + 0x20) = uVar7;
  *(code **)(lVar2 + 0x10) = FUN_100494058;
  *(undefined4 *)(lVar2 + 0x18) = 3;
  *(undefined4 *)(lVar2 + 0x28) = 1;
  return;
}




void FUN_1003f98e4(undefined8 param_1)

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
  if (PTR_s_Ability__Ringo__C_101858f78 == (undefined *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = 0x811c9dc5;
    cVar1 = *PTR_s_Ability__Ringo__C_101858f78;
    pcVar5 = PTR_s_Ability__Ringo__C_101858f78;
    while (cVar1 != '\0') {
      pcVar5 = pcVar5 + 1;
      uVar4 = (uVar4 ^ (int)cVar1) * 0x1000193;
      cVar1 = *pcVar5;
    }
  }
  *(uint *)(lVar2 + 0x20) = uVar4;
  *(code **)(lVar2 + 0x10) = FUN_10049408c;
  *(undefined4 *)(lVar2 + 0x18) = 3;
  *(undefined4 *)(lVar2 + 0x28) = 1;
  lVar2 = FUN_10042e694(param_1);
  *(ushort *)(lVar2 + 0x48) = *(ushort *)(lVar2 + 0x48) | 8;
  *(byte *)(lVar2 + 0x60) = *(byte *)(lVar2 + 0x60) & 0xfc | 1;
  *(undefined4 *)(lVar2 + 0x40) = 0xcad52059;
  plVar3 = (long *)FUN_10043187c(lVar2 + 0x10);
  local_30 = FUN_1004940c0;
  local_28 = 3;
  (**(code **)(*plVar3 + 0x30))(plVar3,&local_30);
  return;
}




void FUN_1003f99d0(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  code *local_30;
  undefined4 local_28;
  
  lVar1 = FUN_10042e2c8();
  plVar2 = (long *)FUN_100430a84(lVar1 + 0x10);
  local_30 = FUN_1004940f4;
  local_28 = 3;
  (**(code **)(*plVar2 + 0x30))(plVar2,5,2,&local_30);
  lVar1 = FUN_100431114(param_1);
  *(byte *)(lVar1 + 0x60) = *(byte *)(lVar1 + 0x60) | 0x10;
  *(undefined4 *)(lVar1 + 0x28) = 1;
  plVar2 = (long *)FUN_10043d6ac(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Ability__Ringo__C_101858f78);
  local_30 = (code *)((ulong)local_30 & 0xffffffff00000000);
  local_28 = 1;
  (**(code **)(*plVar2 + 0x20))(plVar2,&local_30);
  return;
}




void FUN_1003f9a7c(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  char cVar4;
  uint uVar5;
  char *pcVar6;
  uint uVar7;
  code *local_50;
  undefined4 local_48;
  
  uVar7 = 0x811c9dc5;
  lVar1 = FUN_10042e2c8();
  lVar2 = FUN_10049da9c(lVar1 + 0x10);
  *(undefined **)(lVar2 + 0x10) = PTR_s_Ability__Ringo__A_101858f68;
  *(code **)(lVar2 + 0x18) = FUN_100493f88;
  *(undefined4 *)(lVar2 + 0x20) = 3;
  *(undefined4 *)(lVar2 + 0x2c) = 0;
  lVar1 = FUN_10049bf40(lVar1 + 0x10);
  if (PTR_s_Ability__Ringo__A_101858f68 == (undefined *)0x0) {
    uVar5 = 0;
  }
  else {
    cVar4 = *PTR_s_Ability__Ringo__A_101858f68;
    uVar5 = 0x811c9dc5;
    if (cVar4 != '\0') {
      uVar5 = 0x811c9dc5;
      pcVar6 = PTR_s_Ability__Ringo__A_101858f68;
      do {
        pcVar6 = pcVar6 + 1;
        uVar5 = (uVar5 ^ (int)cVar4) * 0x1000193;
        cVar4 = *pcVar6;
      } while (cVar4 != '\0');
    }
  }
  *(uint *)(lVar1 + 0x20) = uVar5;
  *(code **)(lVar1 + 0x10) = FUN_100493fbc;
  *(undefined4 *)(lVar1 + 0x18) = 3;
  *(undefined4 *)(lVar1 + 0x28) = 1;
  lVar1 = FUN_10042e694(param_1);
  *(ushort *)(lVar1 + 0x48) = *(ushort *)(lVar1 + 0x48) | 8;
  *(byte *)(lVar1 + 0x60) = *(byte *)(lVar1 + 0x60) & 0xfc | 1;
  if (PTR_s_Ability__Ringo__A_101858f68 == (undefined *)0x0) {
    uVar7 = 0;
  }
  else {
    cVar4 = *PTR_s_Ability__Ringo__A_101858f68;
    pcVar6 = PTR_s_Ability__Ringo__A_101858f68;
    while (cVar4 != '\0') {
      pcVar6 = pcVar6 + 1;
      uVar7 = (uVar7 ^ (int)cVar4) * 0x1000193;
      cVar4 = *pcVar6;
    }
  }
  *(uint *)(lVar1 + 0x40) = uVar7;
  plVar3 = (long *)FUN_10043187c(lVar1 + 0x10);
  local_50 = FUN_100493ff0;
  local_48 = 3;
  (**(code **)(*plVar3 + 0x30))(plVar3,&local_50);
  return;
}




void FUN_1003f9be0(long param_1)

{
  char *pcVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  float fVar6;
  code *local_40;
  undefined4 local_38;
  
  uVar2 = FUN_100345d90(*(undefined4 *)(param_1 + 0x308));
  lVar3 = FUN_10042e498(param_1);
  plVar4 = (long *)FUN_100441e68(lVar3 + 0x10);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x60))();
  plVar4 = (long *)(**(code **)(*plVar4 + 0x48))(plVar4,"Effect_AdagioArcaneFire_Impact");
  (**(code **)(*plVar4 + 0x78))(plVar4,1);
  lVar3 = FUN_10042e2c8(param_1);
  plVar4 = (long *)FUN_100441e68(lVar3 + 0x10);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x60))();
  pcVar1 = "Effect_Adagio_Fire_DOT_Minion";
  if ((*(uint *)(*(long *)(*(long *)(param_1 + 0x10) + 0x10) + 0x2f4) & 1) != 0) {
    pcVar1 = "Effect_Adagio_Fire_DOT_Hero";
  }
  (**(code **)(*plVar4 + 0x48))(plVar4,pcVar1);
  plVar4 = (long *)FUN_10049b7c4(lVar3 + 0x10);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x30))(plVar4,"Sound_Adagio_Ability_A_Fire");
  uVar5 = FUN_1010a1520();
  lVar3 = FUN_1010a0e0c(uVar5,0,"*KindredSoundBalance*",0);
  FUN_1003a24c8(*(undefined4 *)(lVar3 + 0xb0));
  (**(code **)(*plVar4 + 0x28))(plVar4);
  lVar3 = FUN_10042e3b0(param_1);
  FUN_10049b814(lVar3 + 0x10);
  plVar4 = (long *)FUN_100441e68(lVar3 + 0x10);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x60))();
  plVar4 = (long *)(**(code **)(*plVar4 + 0x48))(plVar4,"Effect_AdagioArcaneFire_Impact");
  (**(code **)(*plVar4 + 0x78))(plVar4,1);
  lVar3 = FUN_10042e580(param_1);
  fVar6 = (float)FUN_1003dfe60(uVar2,0,3,0x19,0);
  *(float *)(lVar3 + 0x40) = 1.0 / fVar6;
  *(byte *)(lVar3 + 0x44) = *(byte *)(lVar3 + 0x44) & 0xfe;
  FUN_1004386bc(lVar3 + 0x10);
  plVar4 = (long *)FUN_10043ab94(lVar3 + 0x10);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x40))();
  (**(code **)(*plVar4 + 0x38))(plVar4,"BurnDamagePerSecond",0);
  lVar3 = FUN_10042e694(param_1);
  *(ushort *)(lVar3 + 0x48) = *(ushort *)(lVar3 + 0x48) | 0x40;
  *(byte *)(lVar3 + 0x60) = *(byte *)(lVar3 + 0x60) & 0xfc | 2;
  *(undefined2 *)(lVar3 + 0x5e) = 0x10;
  FUN_10043aa04(lVar3 + 0x10);
  plVar4 = (long *)FUN_1004519c8(lVar3 + 0x10);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x30))();
  plVar4 = (long *)(**(code **)(*plVar4 + 0x40))();
  plVar4 = (long *)(**(code **)(*plVar4 + 0x48))();
  local_40 = FUN_10042e7bc;
  local_38 = 3;
  (**(code **)(*plVar4 + 0x10))(plVar4,2,&local_40);
  return;
}




void FUN_1003f9e44(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  float fVar4;
  code *local_40;
  undefined4 local_38;
  
  uVar1 = FUN_100345d90(*(undefined4 *)(param_1 + 0x308));
  lVar2 = FUN_10042e2c8(param_1);
  plVar3 = (long *)FUN_100441e68(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x60))();
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_AdagioFortunesSmile_buff");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x90))();
  (**(code **)(*plVar3 + 0xb0))(plVar3,1);
  lVar2 = FUN_10042e95c(param_1);
  plVar3 = (long *)FUN_10049b864(lVar2 + 0x10);
  (**(code **)(*plVar3 + 0x30))(plVar3,5,FUN_10042e898);
  lVar2 = FUN_10042ea44(param_1);
  FUN_1004386bc(lVar2 + 0x10);
  plVar3 = (long *)FUN_10043aa54(lVar2 + 0x10);
  local_40 = FUN_10042e7d0;
  local_38 = 4;
  (**(code **)(*plVar3 + 0x30))(plVar3,&local_40);
  lVar2 = FUN_10042e3b0(param_1);
  FUN_10049b814(lVar2 + 0x10);
  lVar2 = FUN_10042e580(param_1);
  fVar4 = (float)FUN_1003dfe60(uVar1,0,3,0x19,0);
  *(float *)(lVar2 + 0x40) = 1.0 / fVar4;
  *(byte *)(lVar2 + 0x44) = *(byte *)(lVar2 + 0x44) & 0xfe;
  FUN_1004386bc(lVar2 + 0x10);
  plVar3 = (long *)FUN_10043aa54(lVar2 + 0x10);
  local_40 = FUN_10042eb2c;
  local_38 = 3;
  (**(code **)(*plVar3 + 0x38))(plVar3,&local_40);
  return;
}




void FUN_1003f9fb4(long param_1)

{
  undefined8 uVar1;
  undefined4 local_30 [2];
  undefined4 local_28;
  
  uVar1 = FUN_100345d90(*(undefined4 *)(param_1 + 0x308));
  local_30[0] = FUN_1003dfe60(uVar1,0,10,0x19,0);
  local_28 = 1;
  FUN_10042eb40(param_1,local_30);
  return;
}




void FUN_1003fa00c(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  
  puVar2 = PTR_s_onPreCalculateDamageExchangeName_10185d520;
  uVar3 = FUN_1004d2524(PTR_s_onPreCalculateDamageExchangeName_10185d520);
  uVar3 = FUN_100015208(puVar2,uVar3,0x12345678);
  *(undefined4 *)(param_1 + 0xa0 + (ulong)*(uint *)(param_1 + 0x160) * 4) = uVar3;
  uVar1 = *(uint *)(param_1 + 0x160);
  *(code **)(param_1 + 0xa0 + (ulong)uVar1 * 8 + 0x40) = FUN_10042dea0;
  *(uint *)(param_1 + 0x160) = uVar1 + 1;
  lVar4 = FUN_10042e2c8(param_1);
  plVar5 = (long *)FUN_100441e68(lVar4 + 0x10);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x60))();
  plVar5 = (long *)(**(code **)(*plVar5 + 0x48))(plVar5,"Effect_AdagioGasolineSoaked_buff");
  plVar5 = (long *)(**(code **)(*plVar5 + 0x90))();
  (**(code **)(*plVar5 + 0xb0))(plVar5,1);
  plVar5 = (long *)FUN_10049b7c4(lVar4 + 0x10);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x30))(plVar5,"Sound_Adagio_Ability_B_Loop");
  uVar6 = FUN_1010a1520();
  lVar4 = FUN_1010a0e0c(uVar6,0,"*KindredSoundBalance*",0);
  FUN_1003a24c8(*(undefined4 *)(lVar4 + 0xb8));
  (**(code **)(*plVar5 + 0x28))(plVar5);
  lVar4 = FUN_10042e3b0(param_1);
  FUN_10049b814(lVar4 + 0x10);
  return;
}




void FUN_1003fa120(void)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_10042e2c8();
  plVar2 = (long *)FUN_10049b864(lVar1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x0001003fa14c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x30))(plVar2,5,FUN_10049b8b4);
  return;
}




void FUN_1003fa150(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  
  FUN_10042ebc4(param_1,1);
  lVar1 = FUN_10042e2c8(param_1);
  plVar2 = (long *)FUN_100441e68(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x60))();
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Adagio_WithdrawRunes");
                    /* WARNING: Could not recover jumptable at 0x0001003fa1ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0xb0))(plVar2,1);
  return;
}




void FUN_1003fa1b0(void)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  char cVar4;
  char *pcVar5;
  uint uVar6;
  
  uVar6 = 0x811c9dc5;
  lVar1 = FUN_100433030();
  if (PTR_s_Ability__Adagio__B_101858fa0 == (undefined *)0x0) {
    uVar3 = 0;
  }
  else {
    cVar4 = *PTR_s_Ability__Adagio__B_101858fa0;
    uVar3 = 0x811c9dc5;
    if (cVar4 != '\0') {
      uVar3 = 0x811c9dc5;
      pcVar5 = PTR_s_Ability__Adagio__B_101858fa0;
      do {
        pcVar5 = pcVar5 + 1;
        uVar3 = (uVar3 ^ (int)cVar4) * 0x1000193;
        cVar4 = *pcVar5;
      } while (cVar4 != '\0');
    }
  }
  *(uint *)(lVar1 + 0x28) = uVar3;
  *(undefined1 *)(lVar1 + 0x2c) = 1;
  lVar1 = lVar1 + 0x10;
  lVar2 = FUN_10049bf40(lVar1);
  if (PTR_s_Ability__Adagio__B_101858fa0 == (undefined *)0x0) {
    uVar3 = 0;
  }
  else {
    cVar4 = *PTR_s_Ability__Adagio__B_101858fa0;
    uVar3 = 0x811c9dc5;
    if (cVar4 != '\0') {
      uVar3 = 0x811c9dc5;
      pcVar5 = PTR_s_Ability__Adagio__B_101858fa0;
      do {
        pcVar5 = pcVar5 + 1;
        uVar3 = (uVar3 ^ (int)cVar4) * 0x1000193;
        cVar4 = *pcVar5;
      } while (cVar4 != '\0');
    }
  }
  *(uint *)(lVar2 + 0x20) = uVar3;
  *(code **)(lVar2 + 0x10) = FUN_100491fe8;
  *(undefined4 *)(lVar2 + 0x18) = 3;
  *(undefined4 *)(lVar2 + 0x28) = 1;
  lVar2 = FUN_10049bf40(lVar1);
  *(undefined4 *)(lVar2 + 0x20) = 0x4454d39b;
  *(code **)(lVar2 + 0x10) = FUN_10049201c;
  *(undefined4 *)(lVar2 + 0x18) = 3;
  *(undefined4 *)(lVar2 + 0x28) = 2;
  lVar1 = FUN_10049c888(lVar1);
  if (PTR_s_Ability__Adagio__B_101858fa0 == (undefined *)0x0) {
    uVar6 = 0;
  }
  else {
    cVar4 = *PTR_s_Ability__Adagio__B_101858fa0;
    pcVar5 = PTR_s_Ability__Adagio__B_101858fa0;
    while (cVar4 != '\0') {
      pcVar5 = pcVar5 + 1;
      uVar6 = (uVar6 ^ (int)cVar4) * 0x1000193;
      cVar4 = *pcVar5;
    }
  }
  *(uint *)(lVar1 + 0x20) = uVar6;
  *(code **)(lVar1 + 0x10) = FUN_100492050;
  *(undefined4 *)(lVar1 + 0x18) = 3;
  return;
}




void FUN_1003fa31c(void)

{
  char cVar1;
  long lVar2;
  uint uVar3;
  char *pcVar4;
  
  lVar2 = FUN_10042e2c8();
  lVar2 = FUN_10049bf40(lVar2 + 0x10);
  if (PTR_s_Ability__Adagio__A_101858f98 == (undefined *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = 0x811c9dc5;
    cVar1 = *PTR_s_Ability__Adagio__A_101858f98;
    pcVar4 = PTR_s_Ability__Adagio__A_101858f98;
    while (cVar1 != '\0') {
      pcVar4 = pcVar4 + 1;
      uVar3 = (uVar3 ^ (int)cVar1) * 0x1000193;
      cVar1 = *pcVar4;
    }
  }
  *(uint *)(lVar2 + 0x20) = uVar3;
  *(code **)(lVar2 + 0x10) = FUN_100492088;
  *(undefined4 *)(lVar2 + 0x18) = 3;
  *(undefined4 *)(lVar2 + 0x28) = 1;
  return;
}




void FUN_1003fa39c(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  uint uVar3;
  char cVar4;
  char *pcVar5;
  uint uVar6;
  code *local_40;
  undefined4 local_38;
  
  uVar6 = 0x811c9dc5;
  lVar1 = FUN_10042e2c8();
  lVar1 = FUN_10049bf40(lVar1 + 0x10);
  if (PTR_s_Ability__Adagio__C_101858fa8 == (undefined *)0x0) {
    uVar3 = 0;
  }
  else {
    cVar4 = *PTR_s_Ability__Adagio__C_101858fa8;
    uVar3 = 0x811c9dc5;
    if (cVar4 != '\0') {
      uVar3 = 0x811c9dc5;
      pcVar5 = PTR_s_Ability__Adagio__C_101858fa8;
      do {
        pcVar5 = pcVar5 + 1;
        uVar3 = (uVar3 ^ (int)cVar4) * 0x1000193;
        cVar4 = *pcVar5;
      } while (cVar4 != '\0');
    }
  }
  *(uint *)(lVar1 + 0x20) = uVar3;
  *(code **)(lVar1 + 0x10) = FUN_1004920bc;
  *(undefined4 *)(lVar1 + 0x18) = 3;
  *(undefined4 *)(lVar1 + 0x28) = 1;
  lVar1 = FUN_10042e694(param_1);
  *(ushort *)(lVar1 + 0x48) = *(ushort *)(lVar1 + 0x48) | 8;
  *(byte *)(lVar1 + 0x60) = *(byte *)(lVar1 + 0x60) & 0xfc | 1;
  if (PTR_s_Ability__Adagio__C_101858fa8 == (undefined *)0x0) {
    uVar6 = 0;
  }
  else {
    cVar4 = *PTR_s_Ability__Adagio__C_101858fa8;
    pcVar5 = PTR_s_Ability__Adagio__C_101858fa8;
    while (cVar4 != '\0') {
      pcVar5 = pcVar5 + 1;
      uVar6 = (uVar6 ^ (int)cVar4) * 0x1000193;
      cVar4 = *pcVar5;
    }
  }
  *(uint *)(lVar1 + 0x40) = uVar6;
  plVar2 = (long *)FUN_10043187c(lVar1 + 0x10);
  local_40 = FUN_1004920f0;
  local_38 = 3;
  (**(code **)(*plVar2 + 0x30))(plVar2,&local_40);
  return;
}




void FUN_1003fa4d0(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  
  lVar1 = FUN_10042e2c8();
  lVar1 = lVar1 + 0x10;
  lVar2 = FUN_10049bf40(lVar1);
  *(undefined4 *)(lVar2 + 0x20) = DAT_101d2c66c;
  *(undefined4 *)(lVar2 + 0x10) = 0xbe99999a;
  *(undefined4 *)(lVar2 + 0x18) = 1;
  *(undefined4 *)(lVar2 + 0x28) = 0;
  plVar3 = (long *)FUN_100451f14(lVar1);
  (**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Ability__Koshka__TwirlEmpoweredA_101858fd0);
  plVar3 = (long *)FUN_100441e68(lVar1);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x60))();
  (**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Koshka_Perk_MoveFx");
  lVar1 = FUN_10042e3b0(param_1);
  FUN_10049b814(lVar1 + 0x10);
  return;
}




void FUN_1003fa570(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  
  puVar2 = PTR_s_onPreCalculateDamageExchangeName_10185d520;
  uVar3 = FUN_1004d2524(PTR_s_onPreCalculateDamageExchangeName_10185d520);
  uVar3 = FUN_100015208(puVar2,uVar3,0x12345678);
  *(undefined4 *)(param_1 + 0xa0 + (ulong)*(uint *)(param_1 + 0x160) * 4) = uVar3;
  uVar1 = *(uint *)(param_1 + 0x160);
  *(code **)(param_1 + 0xa0 + (ulong)uVar1 * 8 + 0x40) = FUN_100441eb8;
  *(uint *)(param_1 + 0x160) = uVar1 + 1;
  return;
}




void FUN_1003fa5d8(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  
  lVar1 = FUN_10042e2c8();
  lVar2 = FUN_10049be00(lVar1 + 0x10);
  *(undefined4 *)(lVar2 + 0x58) = 1;
  *(code **)(lVar2 + 0x10) = FUN_100441fb0;
  *(undefined4 *)(lVar2 + 0x18) = 3;
  plVar3 = (long *)FUN_10049bfec(lVar1 + 0x10);
  (**(code **)(*plVar3 + 0x38))();
  lVar1 = FUN_10042e3b0(param_1);
  FUN_10049b814(lVar1 + 0x10);
  return;
}




void FUN_1003fa640(void)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  
  lVar1 = FUN_10042e2c8();
  lVar3 = 0;
  do {
    plVar2 = (long *)FUN_100441e68(lVar1 + 0x10);
    plVar2 = (long *)(**(code **)(*plVar2 + 0x78))
                               (plVar2,*(undefined8 *)
                                        ((long)&PTR_s_Bone_LeftThumb_1014980d8 + lVar3));
    plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Koshka_Pounce_Trail");
    (**(code **)(*plVar2 + 0x78))(plVar2,1);
    lVar3 = lVar3 + 8;
  } while (lVar3 != 0x50);
  return;
}




void FUN_1003fa6c0(void)

{
  long lVar1;
  long *plVar2;
  code *local_20;
  undefined4 local_18;
  
  lVar1 = FUN_10042e694();
  *(ushort *)(lVar1 + 0x48) = *(ushort *)(lVar1 + 0x48) | 8;
  *(byte *)(lVar1 + 0x60) = *(byte *)(lVar1 + 0x60) & 0xfc | 1;
  *(undefined4 *)(lVar1 + 0x40) = 0x6db3a994;
  plVar2 = (long *)FUN_10043187c(lVar1 + 0x10);
  local_20 = FUN_1004934dc;
  local_18 = 3;
  (**(code **)(*plVar2 + 0x30))(plVar2,&local_20);
  return;
}




void FUN_1003fa730(void)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_10043099c();
  plVar2 = (long *)FUN_10049b864(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))(plVar2,4,FUN_10049d264);
                    /* WARNING: Could not recover jumptable at 0x0001003fa768. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x38))();
  return;
}




void FUN_1003fa76c(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_10042e95c();
  plVar2 = (long *)FUN_10049b864(lVar1 + 0x10);
  (**(code **)(*plVar2 + 0x30))(plVar2,4,FUN_10049343c);
  lVar1 = FUN_10042e3b0(param_1);
  FUN_10049b814(lVar1 + 0x10);
  return;
}




void FUN_1003fa7b8(void)

{
  long lVar1;
  long *plVar2;
  code *local_20;
  undefined4 local_18;
  
  lVar1 = FUN_10042e694();
  *(ushort *)(lVar1 + 0x48) = *(ushort *)(lVar1 + 0x48) | 8;
  *(byte *)(lVar1 + 0x60) = *(byte *)(lVar1 + 0x60) & 0xfc | 1;
  *(undefined2 *)(lVar1 + 0x5a) = 2;
  plVar2 = (long *)FUN_10043187c(lVar1 + 0x10);
  local_20 = FUN_100493510;
  local_18 = 3;
  (**(code **)(*plVar2 + 0x30))(plVar2,&local_20);
  return;
}




void FUN_1003fa824(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  uint uVar3;
  char cVar4;
  char *pcVar5;
  uint uVar6;
  code *local_40;
  undefined4 local_38;
  
  uVar6 = 0x811c9dc5;
  lVar1 = FUN_10042e2c8();
  lVar1 = FUN_10049bf40(lVar1 + 0x10);
  if (PTR_s_Ability__Koshka__C_101858fe8 == (undefined *)0x0) {
    uVar3 = 0;
  }
  else {
    cVar4 = *PTR_s_Ability__Koshka__C_101858fe8;
    uVar3 = 0x811c9dc5;
    if (cVar4 != '\0') {
      uVar3 = 0x811c9dc5;
      pcVar5 = PTR_s_Ability__Koshka__C_101858fe8;
      do {
        pcVar5 = pcVar5 + 1;
        uVar3 = (uVar3 ^ (int)cVar4) * 0x1000193;
        cVar4 = *pcVar5;
      } while (cVar4 != '\0');
    }
  }
  *(uint *)(lVar1 + 0x20) = uVar3;
  *(code **)(lVar1 + 0x10) = FUN_100493544;
  *(undefined4 *)(lVar1 + 0x18) = 3;
  *(undefined4 *)(lVar1 + 0x28) = 1;
  lVar1 = FUN_10042e694(param_1);
  *(ushort *)(lVar1 + 0x48) = *(ushort *)(lVar1 + 0x48) | 8;
  *(byte *)(lVar1 + 0x60) = *(byte *)(lVar1 + 0x60) & 0xfc | 1;
  if (PTR_s_Ability__Koshka__C_101858fe8 == (undefined *)0x0) {
    uVar6 = 0;
  }
  else {
    cVar4 = *PTR_s_Ability__Koshka__C_101858fe8;
    pcVar5 = PTR_s_Ability__Koshka__C_101858fe8;
    while (cVar4 != '\0') {
      pcVar5 = pcVar5 + 1;
      uVar6 = (uVar6 ^ (int)cVar4) * 0x1000193;
      cVar4 = *pcVar5;
    }
  }
  *(uint *)(lVar1 + 0x40) = uVar6;
  plVar2 = (long *)FUN_10043187c(lVar1 + 0x10);
  local_40 = FUN_100493578;
  local_38 = 3;
  (**(code **)(*plVar2 + 0x30))(plVar2,&local_40);
  return;
}




void FUN_1003fa958(void)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_10042ea44();
  plVar2 = (long *)FUN_100441e68(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x68))(plVar2,"CenterBody");
                    /* WARNING: Could not recover jumptable at 0x0001003fa994. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Glaive_Attack_Crit_Hit");
  return;
}




void FUN_1003fa998(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  code *local_40;
  undefined4 local_38;
  
  lVar1 = FUN_10042e694();
  *(ushort *)(lVar1 + 0x48) = *(ushort *)(lVar1 + 0x48) | 0x40;
  *(byte *)(lVar1 + 0x60) = *(byte *)(lVar1 + 0x60) & 0xfc | 1;
  *(ushort *)(lVar1 + 0x5a) = *(ushort *)(lVar1 + 0x5a) | 4;
  FUN_1004385f0(lVar1 + 0x10);
  lVar1 = FUN_10042e2c8(param_1);
  lVar1 = lVar1 + 0x10;
  plVar2 = (long *)FUN_100441e68(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,"Bone_JetEngine");
  (**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Glaive_Axe_Jet");
  plVar2 = (long *)FUN_10049b7c4(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))(plVar2,"Sound_Glaive_Ability_A_Loop3");
  uVar3 = FUN_1010a1520();
  lVar4 = FUN_1010a0e0c(uVar3,0,"*KindredSoundBalance*",0);
  FUN_1003aa484(*(undefined4 *)(lVar4 + 0x90));
  (**(code **)(*plVar2 + 0x28))(plVar2);
  plVar2 = (long *)FUN_10049ba04(lVar1);
  (**(code **)(*plVar2 + 0x30))(plVar2,"Idle","Ability01_Idle");
  plVar2 = (long *)FUN_10049ba04(lVar1);
  (**(code **)(*plVar2 + 0x30))(plVar2,"Move","Ability01_Run");
  plVar2 = (long *)FUN_10049ba04(lVar1);
  (**(code **)(*plVar2 + 0x30))(plVar2,"FastMove","Ability01_Run");
  plVar2 = (long *)FUN_10049ba04(lVar1);
  (**(code **)(*plVar2 + 0x30))(plVar2,"Sprint","Ability01_Run");
  plVar2 = (long *)FUN_10049ba04(lVar1);
  (**(code **)(*plVar2 + 0x30))(plVar2,"MoveStart","Ability01_RunStart");
  plVar2 = (long *)FUN_10049ba04(lVar1);
  (**(code **)(*plVar2 + 0x30))(plVar2,"MoveStop","Ability01_RunStop");
  plVar2 = (long *)FUN_100430a84(lVar1);
  local_40 = FUN_100438960;
  local_38 = 3;
  (**(code **)(*plVar2 + 0x30))(plVar2,0x10,1,&local_40);
  lVar4 = FUN_10049be00(lVar1);
  *(undefined4 *)(lVar4 + 0x58) = 1;
  *(code **)(lVar4 + 0x10) = FUN_100438974;
  *(undefined4 *)(lVar4 + 0x18) = 3;
  plVar2 = (long *)FUN_100451f14(lVar1);
  (**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Ability__Glaive__A_KnockbackDefA_101859020);
  lVar1 = FUN_10042e3b0(param_1);
  FUN_10049b814(lVar1 + 0x10);
  return;
}




void FUN_1003fabd8(void)

{
  long lVar1;
  long *plVar2;
  code *local_30;
  undefined4 local_28;
  
  lVar1 = FUN_1004303b0();
  plVar2 = (long *)FUN_100441e68(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x60))();
  (**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Glaive_Dust");
  lVar1 = FUN_10043ab44(lVar1 + 0x10);
  *(undefined1 *)(lVar1 + 0x58) = 1;
  *(code **)(lVar1 + 0x40) = FUN_10043867c;
  FUN_1004386bc(lVar1 + 0x10);
  plVar2 = (long *)FUN_100434b18(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_Stunned_10185a208);
  local_30 = FUN_1003aa868;
  local_28 = 3;
  (**(code **)(*plVar2 + 0x18))(plVar2,&local_30);
  return;
}




void FUN_1003fac90(undefined8 param_1)

{
  char cVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  uint uVar5;
  char *pcVar6;
  code *local_50;
  undefined4 local_48;
  
  lVar3 = FUN_100433030();
  if (PTR_s_Ability__Glaive__B_101859028 == (undefined *)0x0) {
    uVar5 = 0;
  }
  else {
    uVar5 = 0x811c9dc5;
    cVar1 = *PTR_s_Ability__Glaive__B_101859028;
    pcVar6 = PTR_s_Ability__Glaive__B_101859028;
    while (cVar1 != '\0') {
      pcVar6 = pcVar6 + 1;
      uVar5 = (uVar5 ^ (int)cVar1) * 0x1000193;
      cVar1 = *pcVar6;
    }
  }
  *(uint *)(lVar3 + 0x28) = uVar5;
  *(undefined1 *)(lVar3 + 0x2c) = 1;
  plVar4 = (long *)FUN_100430a84(lVar3 + 0x10);
  local_50 = FUN_10043870c;
  local_48 = 3;
  (**(code **)(*plVar4 + 0x30))(plVar4,0x1e,1,&local_50);
  lVar3 = FUN_10042e694(param_1);
  *(ushort *)(lVar3 + 0x48) = *(ushort *)(lVar3 + 0x48) | 8;
  *(byte *)(lVar3 + 0x60) = *(byte *)(lVar3 + 0x60) & 0xfc | 1;
  *(undefined4 *)(lVar3 + 0x40) = 0x8f74f75d;
  lVar3 = FUN_10043ab44(lVar3 + 0x10);
  puVar2 = PTR_s_Ability__Glaive__B_101859028;
  *(undefined1 *)(lVar3 + 0x58) = 7;
  *(undefined4 *)(lVar3 + 0x51) = 0;
  *(undefined4 *)(lVar3 + 0x54) = 0;
  *(undefined1 *)(lVar3 + 0x50) = 7;
  *(undefined **)(lVar3 + 0x40) = puVar2;
  *(undefined8 *)(lVar3 + 0x48) = 0;
  plVar4 = (long *)FUN_10043187c(lVar3 + 0x10);
  local_50 = FUN_100438720;
  local_48 = 3;
  (**(code **)(*plVar4 + 0x30))(plVar4,&local_50);
  lVar3 = FUN_10042e694(param_1);
  *(ushort *)(lVar3 + 0x48) = *(ushort *)(lVar3 + 0x48) | 8;
  *(byte *)(lVar3 + 0x60) = *(byte *)(lVar3 + 0x60) & 0xfc | 1;
  *(undefined4 *)(lVar3 + 0x40) = 0x4c6e6855;
  lVar3 = FUN_10043ab44(lVar3 + 0x10);
  puVar2 = PTR_s_Ability__Glaive__B_101859028;
  *(undefined1 *)(lVar3 + 0x58) = 7;
  *(undefined4 *)(lVar3 + 0x51) = 0;
  *(undefined4 *)(lVar3 + 0x54) = 0;
  *(undefined1 *)(lVar3 + 0x50) = 7;
  *(undefined **)(lVar3 + 0x40) = puVar2;
  *(undefined8 *)(lVar3 + 0x48) = 0;
  plVar4 = (long *)FUN_10043187c(lVar3 + 0x10);
  local_50 = FUN_100438720;
  local_48 = 3;
  (**(code **)(*plVar4 + 0x30))(plVar4,&local_50);
  plVar4 = (long *)FUN_10043187c(lVar3 + 0x28);
  local_50 = FUN_100438734;
  local_48 = 3;
  (**(code **)(*plVar4 + 0x30))(plVar4,&local_50);
  return;
}




void FUN_1003fae74(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  
  puVar2 = PTR_s_onAbilityUpgradedName_10185d550;
  uVar3 = FUN_1004d2524(PTR_s_onAbilityUpgradedName_10185d550);
  uVar3 = FUN_100015208(puVar2,uVar3,0x12345678);
  *(undefined4 *)(param_1 + 0xa0 + (ulong)*(uint *)(param_1 + 0x160) * 4) = uVar3;
  uVar1 = *(uint *)(param_1 + 0x160);
  *(code **)(param_1 + 0xe0 + (ulong)uVar1 * 8) = FUN_100438740;
  *(uint *)(param_1 + 0x160) = uVar1 + 1;
  puVar2 = PTR_s_onAfterApplyDamageName_10185d578;
  uVar3 = FUN_1004d2524(PTR_s_onAfterApplyDamageName_10185d578);
  uVar3 = FUN_100015208(puVar2,uVar3,0x12345678);
  *(undefined4 *)(param_1 + 0xa0 + (ulong)*(uint *)(param_1 + 0x160) * 4) = uVar3;
  uVar1 = *(uint *)(param_1 + 0x160);
  *(code **)(param_1 + 0xe0 + (ulong)uVar1 * 8) = FUN_100438860;
  *(uint *)(param_1 + 0x160) = uVar1 + 1;
  return;
}




void FUN_1003faf28(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  code *local_40;
  undefined4 local_38;
  
  lVar1 = FUN_10042e2c8();
  plVar2 = (long *)FUN_10049bbfc(lVar1 + 0x10);
  (**(code **)(*plVar2 + 0x38))();
  lVar1 = FUN_10043099c(param_1);
  plVar2 = (long *)FUN_100430a84(lVar1 + 0x10);
  local_40 = FUN_10043894c;
  local_38 = 3;
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))(plVar2,0x17,1,&local_40);
  (**(code **)(*plVar2 + 0x38))();
  plVar2 = (long *)FUN_100430a84(lVar1 + 0x10);
  local_40 = FUN_10043894c;
  local_38 = 3;
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))(plVar2,0x18,1,&local_40);
  (**(code **)(*plVar2 + 0x38))();
  return;
}




void FUN_1003fafec(void)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_10042e2c8();
  plVar2 = (long *)FUN_10049c404(lVar1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x0001003fb010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x30))(plVar2,0x16);
  return;
}




void FUN_1003fb014(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  
  FUN_10042ebc4(param_1,1);
  lVar1 = FUN_100438988(param_1);
  *(code **)(lVar1 + 0x40) = FUN_10049c8d8;
  plVar2 = (long *)FUN_100441e68(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x60))();
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Glaive_Withdraw");
                    /* WARNING: Could not recover jumptable at 0x0001003fb07c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0xb0))(plVar2,1);
  return;
}




void FUN_1003fb080(void)

{
  char cVar1;
  long lVar2;
  uint uVar3;
  char *pcVar4;
  
  lVar2 = FUN_10042e2c8();
  lVar2 = FUN_10049bf40(lVar2 + 0x10);
  if (PTR_s_Ability__Glaive__C_101859030 == (undefined *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = 0x811c9dc5;
    cVar1 = *PTR_s_Ability__Glaive__C_101859030;
    pcVar4 = PTR_s_Ability__Glaive__C_101859030;
    while (cVar1 != '\0') {
      pcVar4 = pcVar4 + 1;
      uVar3 = (uVar3 ^ (int)cVar1) * 0x1000193;
      cVar1 = *pcVar4;
    }
  }
  *(uint *)(lVar2 + 0x20) = uVar3;
  *(code **)(lVar2 + 0x10) = FUN_100492e80;
  *(undefined4 *)(lVar2 + 0x18) = 3;
  *(undefined4 *)(lVar2 + 0x28) = 1;
  return;
}




void FUN_1003fb100(undefined8 param_1)

{
  char cVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  uint uVar5;
  char *pcVar6;
  code *local_40;
  undefined4 local_38;
  
  lVar2 = FUN_10042e2c8();
  lVar3 = FUN_10049bf40(lVar2 + 0x10);
  if (PTR_s_Ability__Glaive__B_101859028 == (undefined *)0x0) {
    uVar5 = 0;
  }
  else {
    uVar5 = 0x811c9dc5;
    cVar1 = *PTR_s_Ability__Glaive__B_101859028;
    pcVar6 = PTR_s_Ability__Glaive__B_101859028;
    while (cVar1 != '\0') {
      pcVar6 = pcVar6 + 1;
      uVar5 = (uVar5 ^ (int)cVar1) * 0x1000193;
      cVar1 = *pcVar6;
    }
  }
  *(uint *)(lVar3 + 0x20) = uVar5;
  *(code **)(lVar3 + 0x10) = FUN_100492eb4;
  *(undefined4 *)(lVar3 + 0x18) = 3;
  *(undefined4 *)(lVar3 + 0x28) = 1;
  lVar2 = FUN_10049da9c(lVar2 + 0x10);
  *(undefined **)(lVar2 + 0x10) = PTR_s_Ability__Glaive__B_101859028;
  *(code **)(lVar2 + 0x18) = FUN_100492ee8;
  *(undefined4 *)(lVar2 + 0x20) = 3;
  *(undefined4 *)(lVar2 + 0x2c) = 0;
  lVar2 = FUN_10042e694(param_1);
  *(ushort *)(lVar2 + 0x48) = *(ushort *)(lVar2 + 0x48) | 8;
  *(byte *)(lVar2 + 0x60) = *(byte *)(lVar2 + 0x60) & 0xfc | 1;
  *(undefined4 *)(lVar2 + 0x40) = 0x20cee669;
  plVar4 = (long *)FUN_10043187c(lVar2 + 0x10);
  local_40 = FUN_100492f1c;
  local_38 = 3;
  (**(code **)(*plVar4 + 0x30))(plVar4,&local_40);
  lVar2 = FUN_10042e694(param_1);
  *(ushort *)(lVar2 + 0x48) = *(ushort *)(lVar2 + 0x48) | 8;
  *(byte *)(lVar2 + 0x60) = *(byte *)(lVar2 + 0x60) & 0xfc | 1;
  *(undefined4 *)(lVar2 + 0x40) = 0x8f74f75d;
  plVar4 = (long *)FUN_10043187c(lVar2 + 0x10);
  local_40 = FUN_100492f1c;
  local_38 = 3;
  (**(code **)(*plVar4 + 0x30))(plVar4,&local_40);
  return;
}




void FUN_1003fb268(undefined8 param_1)

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
  if (PTR_s_Ability__Glaive__A_101859010 == (undefined *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = 0x811c9dc5;
    cVar1 = *PTR_s_Ability__Glaive__A_101859010;
    pcVar5 = PTR_s_Ability__Glaive__A_101859010;
    while (cVar1 != '\0') {
      pcVar5 = pcVar5 + 1;
      uVar4 = (uVar4 ^ (int)cVar1) * 0x1000193;
      cVar1 = *pcVar5;
    }
  }
  *(uint *)(lVar2 + 0x20) = uVar4;
  *(code **)(lVar2 + 0x10) = FUN_100492e18;
  *(undefined4 *)(lVar2 + 0x18) = 3;
  *(undefined4 *)(lVar2 + 0x28) = 1;
  lVar2 = FUN_10042e694(param_1);
  *(ushort *)(lVar2 + 0x48) = *(ushort *)(lVar2 + 0x48) | 0x10;
  *(byte *)(lVar2 + 0x60) = *(byte *)(lVar2 + 0x60) & 0xfc | 1;
  *(undefined4 *)(lVar2 + 0x40) = 0x1dcee1b0;
  plVar3 = (long *)FUN_10043187c(lVar2 + 0x10);
  local_30 = FUN_100492e4c;
  local_28 = 3;
  (**(code **)(*plVar3 + 0x30))(plVar3,&local_30);
  return;
}




void FUN_1003fb354(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  
  puVar2 = PTR_s_onAfterApplyDamageName_10185d578;
  uVar3 = FUN_1004d2524(PTR_s_onAfterApplyDamageName_10185d578);
  uVar3 = FUN_100015208(puVar2,uVar3,0x12345678);
  *(undefined4 *)(param_1 + 0xa0 + (ulong)*(uint *)(param_1 + 0x160) * 4) = uVar3;
  uVar1 = *(uint *)(param_1 + 0x160);
  *(code **)(param_1 + 0xa0 + (ulong)uVar1 * 8 + 0x40) = FUN_100445f88;
  *(uint *)(param_1 + 0x160) = uVar1 + 1;
  return;
}




void FUN_1003fb3bc(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  long lVar4;
  long *plVar5;
  
  *(undefined4 *)(param_1 + 0x328) = 0x3dcccccd;
  puVar2 = PTR_s_onBuffIntervalName_10185d558;
  uVar3 = FUN_1004d2524(PTR_s_onBuffIntervalName_10185d558);
  uVar3 = FUN_100015208(puVar2,uVar3,0x12345678);
  *(undefined4 *)(param_1 + 0xa0 + (ulong)*(uint *)(param_1 + 0x160) * 4) = uVar3;
  uVar1 = *(uint *)(param_1 + 0x160);
  *(code **)(param_1 + 0xa0 + (ulong)uVar1 * 8 + 0x40) = FUN_100446174;
  *(uint *)(param_1 + 0x160) = uVar1 + 1;
  lVar4 = FUN_10042e2c8(param_1);
  plVar5 = (long *)FUN_10049bbfc(lVar4 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x0001003fb444. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar5 + 0x38))();
  return;
}




void FUN_1003fb448(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  
  puVar2 = PTR_s_onAbilityUpgradedName_10185d550;
  if (DAT_101d23a38 != '\0') {
    uVar3 = FUN_1004d2524(PTR_s_onAbilityUpgradedName_10185d550);
    uVar3 = FUN_100015208(puVar2,uVar3,0x12345678);
    *(undefined4 *)(param_1 + 0xa0 + (ulong)*(uint *)(param_1 + 0x160) * 4) = uVar3;
    uVar1 = *(uint *)(param_1 + 0x160);
    *(code **)(param_1 + 0xa0 + (ulong)uVar1 * 8 + 0x40) = FUN_100445f64;
    *(uint *)(param_1 + 0x160) = uVar1 + 1;
  }
  return;
}




void FUN_1003fb4bc(long param_1)

{
  long lVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined1 auStack_58 [24];
  
  lVar2 = *(long *)(*(long *)(param_1 + 0x10) + 0x10);
  lVar1 = *(long *)(lVar2 + 0x40);
  fVar3 = *(float *)(lVar1 + 0xd8) + *(float *)(lVar1 + 0x18c) * (*(float *)(lVar1 + 0x2f4) + 1.0);
  NEON_fminnm(fVar3 + fVar3 * *(float *)(lVar1 + 0x240),DAT_101e943c0);
  fVar3 = DAT_101e94300 * 0.09090909;
  fVar4 = (float)FUN_1003df710(fVar3,0x3f8ba2e9,DAT_101e943c0,0x3f800000,lVar2,6,1);
  fVar5 = (float)FUN_1003df710(lVar2,7,1);
  FUN_100450f38(auStack_58,param_1 + 0x98);
  FUN_100431d2c(auStack_58);
  lVar1 = FUN_100436e1c(auStack_58);
  *(undefined8 *)(lVar1 + 0x10) = 0x10000000f;
  *(float *)(lVar1 + 0x18) = (fVar3 + -0.09090909) * fVar5 + fVar4 * (1.0909091 - fVar3);
  FUN_100431f2c(auStack_58);
  FUN_100450f38(auStack_58,param_1 + 0x70);
  FUN_1004354f8(auStack_58);
  return;
}




void FUN_1003fb5cc(long param_1)

{
  undefined1 auStack_28 [24];
  
  FUN_100450f38(auStack_28,param_1 + 0x70);
  FUN_1004354f8(auStack_28);
  return;
}




void FUN_1003fb5f8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined1 auStack_48 [24];
  
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x10);
  FUN_100450f38(auStack_48,param_1 + 0x98);
  lVar1 = FUN_100446070(auStack_48);
  uVar3 = FUN_1003dfe60(uVar2,1,6,0x19,0);
  *(undefined8 *)(lVar1 + 0x10) = 0x200000005;
  *(undefined4 *)(lVar1 + 0x18) = uVar3;
  *(undefined1 *)(lVar1 + 0x1c) = 0;
  *(uint *)(lVar1 + 0x20) = (uint)*(ushort *)(param_1 + 0x344);
  lVar1 = FUN_100446070(auStack_48);
  uVar3 = FUN_1003dfe60(uVar2,1,7,0x19,0);
  *(undefined8 *)(lVar1 + 0x10) = 0x200000004;
  *(undefined4 *)(lVar1 + 0x18) = uVar3;
  *(undefined1 *)(lVar1 + 0x1c) = 0;
  *(uint *)(lVar1 + 0x20) = (uint)*(ushort *)(param_1 + 0x344);
  lVar1 = FUN_100446070(auStack_48);
  uVar3 = FUN_1003dfe60(uVar2,1,5,0x19,0);
  *(undefined8 *)(lVar1 + 0x10) = 0x100000010;
  *(undefined4 *)(lVar1 + 0x18) = uVar3;
  *(undefined1 *)(lVar1 + 0x1c) = 0;
  *(uint *)(lVar1 + 0x20) = (uint)*(ushort *)(param_1 + 0x344);
  lVar1 = FUN_10042e3b0(param_1);
  FUN_10049b814(lVar1 + 0x10);
  return;
}




void FUN_1003fb708(long param_1)

{
  float fVar1;
  undefined1 auStack_38 [24];
  
  fVar1 = (float)FUN_1003e00a8(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x10),0,7,9,1);
  *(float *)(param_1 + 0x318) = fVar1;
  if (*(float *)(param_1 + 0x31c) < fVar1) {
    *(float *)(param_1 + 0x31c) = fVar1;
  }
  *(uint *)(param_1 + 0x340) =
       *(uint *)(param_1 + 0x340) & 0xfffe0 | (uint)(fVar1 < 0.0) << 4 |
       *(uint *)(param_1 + 0x340) & 0xfff0000f;
  FUN_100450f38(auStack_38,param_1 + 0x80);
  FUN_10043200c(auStack_38);
  return;
}




void FUN_1003fb790(long param_1)

{
  float fVar1;
  
  fVar1 = (float)FUN_1003e00a8(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x10),0,10,9,1);
  *(float *)(param_1 + 0x318) = fVar1;
  if (*(float *)(param_1 + 0x31c) < fVar1) {
    *(float *)(param_1 + 0x31c) = fVar1;
  }
  *(uint *)(param_1 + 0x340) =
       *(uint *)(param_1 + 0x340) & 0xfffe0 | (uint)(fVar1 < 0.0) << 4 |
       *(uint *)(param_1 + 0x340) & 0xfff0000f;
  return;
}




void FUN_1003fb7fc(long param_1)

{
  long lVar1;
  float fVar2;
  undefined1 auStack_38 [24];
  
  fVar2 = (float)FUN_1003e00a8(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x10),0,9,9,1);
  *(float *)(param_1 + 0x318) = fVar2;
  if (*(float *)(param_1 + 0x31c) < fVar2) {
    *(float *)(param_1 + 0x31c) = fVar2;
  }
  *(uint *)(param_1 + 0x340) =
       *(uint *)(param_1 + 0x340) & 0xfffe0 | (uint)(fVar2 < 0.0) << 4 |
       *(uint *)(param_1 + 0x340) & 0xfff0000f;
  FUN_100450f38(auStack_38,param_1 + 0x88);
  FUN_100431d2c(auStack_38);
  lVar1 = FUN_100431e0c(auStack_38);
  *(undefined **)(lVar1 + 0x10) = PTR_s_Buff_PetalSeed_LandMine_10185c738;
  *(undefined4 *)(lVar1 + 0x30) = 0xbf800000;
  *(undefined8 *)(lVar1 + 0x34) = 0xffffffff00000001;
  *(undefined8 *)(lVar1 + 0x44) = 0;
  *(undefined8 *)(lVar1 + 0x3c) = 0;
  FUN_100431f2c(auStack_38);
  return;
}




void FUN_1003fb8bc(long param_1)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  undefined *puVar4;
  undefined4 uVar5;
  
  puVar4 = PTR_s_onApplyName_10185d540;
  uVar5 = FUN_1004d2524(PTR_s_onApplyName_10185d540);
  uVar5 = FUN_100015208(puVar4,uVar5,0x12345678);
  lVar1 = param_1 + 0xa0;
  *(undefined4 *)(lVar1 + (ulong)*(uint *)(param_1 + 0x160) * 4) = uVar5;
  uVar3 = *(uint *)(param_1 + 0x160);
  lVar2 = param_1 + 0xe0;
  *(code **)(lVar2 + (ulong)uVar3 * 8) = FUN_100446898;
  *(uint *)(param_1 + 0x160) = uVar3 + 1;
  puVar4 = PTR_s_onBuffIntervalName_10185d558;
  uVar5 = FUN_1004d2524(PTR_s_onBuffIntervalName_10185d558);
  uVar5 = FUN_100015208(puVar4,uVar5,0x12345678);
  *(undefined4 *)(lVar1 + (ulong)*(uint *)(param_1 + 0x160) * 4) = uVar5;
  uVar3 = *(uint *)(param_1 + 0x160);
  *(code **)(lVar2 + (ulong)uVar3 * 8) = FUN_100446898;
  *(uint *)(param_1 + 0x160) = uVar3 + 1;
  puVar4 = PTR_s_onActorLevelUpName_10185d598;
  uVar5 = FUN_1004d2524(PTR_s_onActorLevelUpName_10185d598);
  uVar5 = FUN_100015208(puVar4,uVar5,0x12345678);
  *(undefined4 *)(lVar1 + (ulong)*(uint *)(param_1 + 0x160) * 4) = uVar5;
  uVar3 = *(uint *)(param_1 + 0x160);
  *(code **)(lVar2 + (ulong)uVar3 * 8) = FUN_100446898;
  *(uint *)(param_1 + 0x160) = uVar3 + 1;
  puVar4 = PTR_s_onLeaveCombatName_10185d660;
  uVar5 = FUN_1004d2524(PTR_s_onLeaveCombatName_10185d660);
  uVar5 = FUN_100015208(puVar4,uVar5,0x12345678);
  *(undefined4 *)(lVar1 + (ulong)*(uint *)(param_1 + 0x160) * 4) = uVar5;
  uVar3 = *(uint *)(param_1 + 0x160);
  *(code **)(lVar2 + (ulong)uVar3 * 8) = FUN_100446414;
  *(uint *)(param_1 + 0x160) = uVar3 + 1;
  *(undefined4 *)(param_1 + 0x328) = 0x40a00000;
  return;
}




void FUN_1003fb9f8(long param_1)

{
  undefined1 auStack_28 [24];
  
  FUN_100450f38(auStack_28,param_1 + 0x70);
  FUN_1004354f8(auStack_28);
  return;
}




void FUN_1003fba24(long param_1)

{
  undefined1 auStack_28 [24];
  
  FUN_100450f38(auStack_28,param_1 + 0x70);
  FUN_1004354f8(auStack_28);
  return;
}




void FUN_1003fba50(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  
  puVar2 = PTR_s_onBuffIntervalName_10185d558;
  if (DAT_101d23a38 != '\0') {
    uVar3 = FUN_1004d2524(PTR_s_onBuffIntervalName_10185d558);
    uVar3 = FUN_100015208(puVar2,uVar3,0x12345678);
    *(undefined4 *)(param_1 + 0xa0 + (ulong)*(uint *)(param_1 + 0x160) * 4) = uVar3;
    uVar1 = *(uint *)(param_1 + 0x160);
    *(code **)(param_1 + 0xa0 + (ulong)uVar1 * 8 + 0x40) = FUN_1004466b8;
    *(uint *)(param_1 + 0x160) = uVar1 + 1;
    *(undefined4 *)(param_1 + 0x328) = 0x3e4ccccd;
  }
  return;
}




void FUN_1003fbad0(long param_1)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  undefined *puVar4;
  undefined4 uVar5;
  
  puVar4 = PTR_s_onApplyName_10185d540;
  uVar5 = FUN_1004d2524(PTR_s_onApplyName_10185d540);
  uVar5 = FUN_100015208(puVar4,uVar5,0x12345678);
  lVar1 = param_1 + 0xa0;
  *(undefined4 *)(lVar1 + (ulong)*(uint *)(param_1 + 0x160) * 4) = uVar5;
  uVar3 = *(uint *)(param_1 + 0x160);
  lVar2 = param_1 + 0xe0;
  *(code **)(lVar2 + (ulong)uVar3 * 8) = FUN_100446490;
  *(uint *)(param_1 + 0x160) = uVar3 + 1;
  puVar4 = PTR_s_onBuffIntervalName_10185d558;
  uVar5 = FUN_1004d2524(PTR_s_onBuffIntervalName_10185d558);
  uVar5 = FUN_100015208(puVar4,uVar5,0x12345678);
  *(undefined4 *)(lVar1 + (ulong)*(uint *)(param_1 + 0x160) * 4) = uVar5;
  uVar3 = *(uint *)(param_1 + 0x160);
  *(code **)(lVar2 + (ulong)uVar3 * 8) = FUN_100446490;
  *(uint *)(param_1 + 0x160) = uVar3 + 1;
  puVar4 = PTR_s_onActorLevelUpName_10185d598;
  uVar5 = FUN_1004d2524(PTR_s_onActorLevelUpName_10185d598);
  uVar5 = FUN_100015208(puVar4,uVar5,0x12345678);
  *(undefined4 *)(lVar1 + (ulong)*(uint *)(param_1 + 0x160) * 4) = uVar5;
  uVar3 = *(uint *)(param_1 + 0x160);
  *(code **)(lVar2 + (ulong)uVar3 * 8) = FUN_100446490;
  *(uint *)(param_1 + 0x160) = uVar3 + 1;
  puVar4 = PTR_s_onLeaveCombatName_10185d660;
  uVar5 = FUN_1004d2524(PTR_s_onLeaveCombatName_10185d660);
  uVar5 = FUN_100015208(puVar4,uVar5,0x12345678);
  *(undefined4 *)(lVar1 + (ulong)*(uint *)(param_1 + 0x160) * 4) = uVar5;
  uVar3 = *(uint *)(param_1 + 0x160);
  *(code **)(lVar2 + (ulong)uVar3 * 8) = FUN_100446414;
  *(uint *)(param_1 + 0x160) = uVar3 + 1;
  *(undefined4 *)(param_1 + 0x328) = 0x40a00000;
  return;
}




void FUN_1003fbc0c(long param_1)

{
  undefined1 auStack_28 [24];
  
  FUN_100450f38(auStack_28,param_1 + 0x70);
  FUN_1004354f8(auStack_28);
  return;
}




void FUN_1003fbc38(long param_1)

{
  undefined1 auStack_38 [24];
  
  FUN_100435a7c(param_1,0x23,"Effect_Petal_Talent_Immobilize",0);
  FUN_100450f38(auStack_38,param_1 + 0x68);
  return;
}




void FUN_1003fbc7c(long param_1)

{
  undefined8 uVar1;
  undefined4 local_30 [2];
  undefined4 local_28;
  
  uVar1 = FUN_100345d90(*(undefined4 *)(param_1 + 0x308));
  local_30[0] = FUN_1003e00a8(uVar1,2,4,9,0);
  local_28 = 1;
  FUN_10042eb40(param_1,local_30);
  return;
}




void FUN_1003fbcd4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  FUN_100450f38(auStack_38,param_1 + 0x98);
  lVar1 = FUN_10043255c(auStack_38);
  *(undefined8 *)(lVar1 + 0x10) = 0x4033333300000001;
  FUN_100450f38(auStack_38,param_1 + 0x70);
  FUN_1004354f8(auStack_38);
  return;
}




void FUN_1003fbd30(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  ushort *puVar4;
  ulong uVar5;
  undefined4 uVar6;
  undefined1 auStack_48 [24];
  
  FUN_100450f38(auStack_48,param_1 + 0x98);
  lVar1 = FUN_1004432e0(auStack_48);
  *(undefined **)(lVar1 + 0x10) = PTR_s_Ability__PetalMinion__DefaultAtt_1018590a0;
  lVar1 = FUN_100431ad4(auStack_48);
  *(char **)(lVar1 + 0x20) = "ThornstormFuse";
  *(ushort *)(lVar1 + 0x74) = *(ushort *)(lVar1 + 0x74) & 0xff98 | 0x22;
  *(char **)(lVar1 + 0x10) = "Effect_PetalMinion_Ult";
  lVar1 = FUN_100431c28(auStack_48);
  uVar2 = FUN_1010a1520();
  lVar3 = FUN_1010a0e0c(uVar2,0,"*KindredSoundBalance*",0);
  uVar6 = FUN_1003ba66c(*(undefined4 *)(lVar3 + 0xd8));
  *(char **)(lVar1 + 0x10) = "Sound_Petal_ability_3_fuse_1";
  *(undefined1 *)(lVar1 + 0x38) = 0xff;
  *(undefined4 *)(lVar1 + 0x34) = uVar6;
  *(uint *)(lVar1 + 0x30) = ((int)lVar1 + 0xfe1b7eb0U >> 3) * 0xca1b & 0xffff;
  *(byte *)(lVar1 + 0x39) = *(byte *)(lVar1 + 0x39) & 0x80 | 0x49;
  FUN_100450f38(auStack_48,param_1 + 0x80);
  uVar5 = (ulong)DAT_101e94150;
  if (uVar5 == 0xffff) {
    puVar4 = (ushort *)0x0;
  }
  else {
    puVar4 = &DAT_101e48150 + uVar5 * 0x4c;
    if (DAT_101e94150 == DAT_101e94152) {
      DAT_101e94150 = 0xffff;
    }
    else {
      DAT_101e94150 = *puVar4;
    }
    DAT_101e94154 = DAT_101e94154 + 1;
    *(undefined8 *)(&DAT_101e48158 + uVar5 * 0x98) = 0;
    *(undefined ***)puVar4 = &PTR_FUN_10149bd48;
    DAT_101e94160 = DAT_101e94160 + 1;
    if (DAT_101e94164 < DAT_101e94160) {
      DAT_101e94164 = DAT_101e94160;
    }
  }
  FUN_100450f94(auStack_48,puVar4);
  lVar1 = FUN_1004369e4(auStack_48);
  *(undefined **)(lVar1 + 0x10) = PTR_s_Ability__PetalMinion__Explode_1018590a8;
  return;
}




void FUN_1003fbf14(void)

{
  return;
}




void FUN_1003fbf18(void)

{
  return;
}




void FUN_1003fbf1c(void)

{
  long lVar1;
  char cVar2;
  uint uVar3;
  char *pcVar4;
  uint uVar5;
  
  uVar5 = 0x811c9dc5;
  lVar1 = FUN_100433030();
  if (PTR_s_Ability__Petal__B_101859068 == (undefined *)0x0) {
    uVar3 = 0;
  }
  else {
    cVar2 = *PTR_s_Ability__Petal__B_101859068;
    uVar3 = 0x811c9dc5;
    if (cVar2 != '\0') {
      uVar3 = 0x811c9dc5;
      pcVar4 = PTR_s_Ability__Petal__B_101859068;
      do {
        pcVar4 = pcVar4 + 1;
        uVar3 = (uVar3 ^ (int)cVar2) * 0x1000193;
        cVar2 = *pcVar4;
      } while (cVar2 != '\0');
    }
  }
  *(uint *)(lVar1 + 0x28) = uVar3;
  lVar1 = FUN_10049bf40(lVar1 + 0x10);
  if (PTR_s_Ability__Petal__B_101859068 == (undefined *)0x0) {
    uVar5 = 0;
  }
  else {
    cVar2 = *PTR_s_Ability__Petal__B_101859068;
    pcVar4 = PTR_s_Ability__Petal__B_101859068;
    while (cVar2 != '\0') {
      pcVar4 = pcVar4 + 1;
      uVar5 = (uVar5 ^ (int)cVar2) * 0x1000193;
      cVar2 = *pcVar4;
    }
  }
  *(uint *)(lVar1 + 0x20) = uVar5;
  *(code **)(lVar1 + 0x10) = FUN_100493c88;
  *(undefined4 *)(lVar1 + 0x18) = 3;
  *(undefined4 *)(lVar1 + 0x28) = 2;
  return;
}




void FUN_1003fbff0(undefined8 param_1)

{
  char cVar1;
  long lVar2;
  uint uVar3;
  char *pcVar4;
  
  lVar2 = FUN_100433030();
  if (PTR_s_Ability__Petal__B_101859068 == (undefined *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = 0x811c9dc5;
    cVar1 = *PTR_s_Ability__Petal__B_101859068;
    pcVar4 = PTR_s_Ability__Petal__B_101859068;
    while (cVar1 != '\0') {
      pcVar4 = pcVar4 + 1;
      uVar3 = (uVar3 ^ (int)cVar1) * 0x1000193;
      cVar1 = *pcVar4;
    }
  }
  *(uint *)(lVar2 + 0x28) = uVar3;
  lVar2 = FUN_10049d0e0(lVar2 + 0x10);
  *(undefined **)(lVar2 + 0x10) = PTR_s_Ability__Petal__B_101859068;
  *(code **)(lVar2 + 0x18) = FUN_100493c54;
  *(undefined4 *)(lVar2 + 0x20) = 3;
  *(byte *)(lVar2 + 0x2c) = *(byte *)(lVar2 + 0x2c) | 4;
  *(undefined4 *)(lVar2 + 0x28) = 0x3f800000;
  lVar2 = FUN_10042e3b0(param_1);
  FUN_10049b814(lVar2 + 0x10);
  return;
}




void FUN_1003fc098(void)

{
  return;
}




void FUN_1003fc09c(void)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_10042e2c8();
  plVar2 = (long *)FUN_10049d4b0(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))(plVar2,"barrel_bnd",FUN_10044876c);
                    /* WARNING: Could not recover jumptable at 0x0001003fc0d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x48))();
  return;
}




void FUN_1003fc0dc(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined8 local_30;
  undefined4 local_28;
  
  lVar1 = FUN_100430b44();
  plVar2 = (long *)FUN_100433de4(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))();
  local_30 = (code *)((ulong)local_30._4_4_ << 0x20);
  local_28 = 1;
  (**(code **)(*plVar2 + 0x18))(plVar2,&local_30);
  lVar1 = FUN_10042e2c8(param_1);
  plVar2 = (long *)FUN_10049bbfc(lVar1 + 0x10);
  (**(code **)(*plVar2 + 0x38))();
  lVar1 = FUN_10043099c(param_1);
  plVar2 = (long *)FUN_100430a84(lVar1 + 0x10);
  local_30 = FUN_100448a08;
  local_28 = 3;
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))(plVar2,0xf,1,&local_30);
  (**(code **)(*plVar2 + 0x38))();
  plVar2 = (long *)FUN_100430a84(lVar1 + 0x10);
  local_30 = FUN_100448960;
  local_28 = 4;
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))(plVar2,0x12,1,&local_30);
  (**(code **)(*plVar2 + 0x38))();
  lVar1 = FUN_10042e3b0(param_1);
  lVar3 = FUN_10043aaf4(lVar1 + 0x10);
  *(code **)(lVar3 + 0x10) = FUN_10044894c;
  FUN_10049b814(lVar1 + 0x10);
  lVar1 = FUN_1004303b0(param_1);
  lVar1 = FUN_10043aaf4(lVar1 + 0x10);
  *(code **)(lVar1 + 0x10) = FUN_1004488ac;
  return;
}




void FUN_1003fc220(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  
  lVar4 = FUN_10042e2c8();
  lVar4 = lVar4 + 0x10;
  lVar5 = FUN_10049be00(lVar4);
  *(undefined4 *)(lVar5 + 0x58) = 1;
  *(code **)(lVar5 + 0x10) = FUN_100448a14;
  *(undefined4 *)(lVar5 + 0x18) = 4;
  plVar6 = (long *)FUN_100451f14(lVar4);
  (**(code **)(*plVar6 + 0x30))(plVar6,PTR_s_Ability__SAW__Shank_1018590d8);
  plVar6 = (long *)FUN_10049ba04(lVar4);
  (**(code **)(*plVar6 + 0x30))(plVar6,"Idle","RoadieRunIdle");
  plVar6 = (long *)FUN_10049ba04(lVar4);
  (**(code **)(*plVar6 + 0x30))(plVar6,"Move","RoadieRun");
  plVar6 = (long *)FUN_10049ba04(lVar4);
  (**(code **)(*plVar6 + 0x30))(plVar6,"MoveStart","RoadieRun_MoveStart");
  plVar6 = (long *)FUN_10049ba04(lVar4);
  (**(code **)(*plVar6 + 0x30))(plVar6,"MoveStop","RoadieRun_MoveStop");
  plVar6 = (long *)FUN_10049ba04(lVar4);
  (**(code **)(*plVar6 + 0x30))(plVar6,"Sprint","RoadieRun");
  plVar6 = (long *)FUN_10049ba04(lVar4);
  (**(code **)(*plVar6 + 0x30))(plVar6,"IdleCombat","RoadieRunIdle");
  plVar6 = (long *)FUN_10049ba04(lVar4);
  (**(code **)(*plVar6 + 0x30))(plVar6,"MoveCombat","RoadieRun");
  plVar6 = (long *)FUN_10049ba04(lVar4);
  (**(code **)(*plVar6 + 0x30))(plVar6,"MoveStartCombat","RoadieRun_MoveStart");
  plVar6 = (long *)FUN_10049ba04(lVar4);
  (**(code **)(*plVar6 + 0x30))(plVar6,"MoveStopCombat","RoadieRun_MoveStop");
  plVar6 = (long *)FUN_10049ba04(lVar4);
  (**(code **)(*plVar6 + 0x30))(plVar6,"MoveSheath","RoadieRun");
  plVar6 = (long *)FUN_10049ba04(lVar4);
  (**(code **)(*plVar6 + 0x30))(plVar6,"IdleSheath","RoadieRunIdle");
  lVar4 = FUN_10042e3b0(param_1);
  FUN_10049b814(lVar4 + 0x10);
  puVar2 = PTR_s_onEndName_10185d548;
  uVar3 = FUN_1004d2524(PTR_s_onEndName_10185d548);
  uVar3 = FUN_100015208(puVar2,uVar3,0x12345678);
  *(undefined4 *)(param_1 + 0xa0 + (ulong)*(uint *)(param_1 + 0x160) * 4) = uVar3;
  uVar1 = *(uint *)(param_1 + 0x160);
  *(code **)(param_1 + 0xa0 + (ulong)uVar1 * 8 + 0x40) = FUN_100448a78;
  *(uint *)(param_1 + 0x160) = uVar1 + 1;
  return;
}




void FUN_1003fc470(long param_1)

{
  undefined8 uVar1;
  undefined4 local_30 [2];
  undefined4 local_28;
  
  uVar1 = FUN_100345d90(*(undefined4 *)(param_1 + 0x308));
  local_30[0] = FUN_1003dfe60(uVar1,2,6,0x19,0);
  local_28 = 1;
  FUN_10042eb40(param_1,local_30);
  return;
}




void FUN_1003fc4c8(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  
  lVar2 = FUN_10042e2c8();
  lVar3 = FUN_100451f64(lVar2 + 0x10);
  puVar1 = PTR_s_Ability__SAW__B_Cancel_1018590f0;
  *(undefined **)(lVar3 + 0x10) = PTR_s_Ability__SAW__B_1018590e8;
  *(undefined **)(lVar3 + 0x18) = puVar1;
  plVar4 = (long *)FUN_10049b7c4(lVar2 + 0x10);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x30))(plVar4,"Sound_SAW_ability_2");
  uVar5 = FUN_1010a1520();
  lVar2 = FUN_1010a0e0c(uVar5,0,"*KindredSoundBalance*",0);
  FUN_1003bdb78(*(undefined4 *)(lVar2 + 0xf4));
                    /* WARNING: Could not recover jumptable at 0x0001003fc54c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar4 + 0x28))(plVar4);
  return;
}




void FUN_1003fc550(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  code *local_30;
  undefined4 local_28;
  
  lVar1 = FUN_10042e580();
  *(undefined4 *)(lVar1 + 0x40) = 0x3dcccccd;
  *(byte *)(lVar1 + 0x44) = *(byte *)(lVar1 + 0x44) & 0xfe;
  plVar2 = (long *)FUN_100433e34(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_SAW_HeroicPerk_SpinUp_10185b040);
  local_30 = FUN_1003bd4c0;
  local_28 = 3;
  (**(code **)(*plVar2 + 0x18))(plVar2,&local_30);
  lVar1 = FUN_10042e3b0(param_1);
  FUN_10049b814(lVar1 + 0x10);
  return;
}




void FUN_1003fc5e0(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  
  lVar1 = FUN_10042e3b0();
  FUN_10049d2c4(lVar1 + 0x10);
  FUN_10049b814(lVar1 + 0x10);
  lVar1 = FUN_10042e95c(param_1);
  lVar1 = FUN_10049d090(lVar1 + 0x10);
  *(undefined4 *)(lVar1 + 0x28) = 3;
  *(code **)(lVar1 + 0x20) = FUN_100458b64;
  lVar1 = FUN_10042e2c8(param_1);
  plVar2 = (long *)FUN_10049ba04(lVar1 + 0x10);
  (**(code **)(*plVar2 + 0x30))(plVar2,"Idle","StrafeIdle");
  plVar2 = (long *)FUN_10049ba04(lVar1 + 0x10);
  (**(code **)(*plVar2 + 0x30))(plVar2,"IdleBrush","StrafeIdle");
  lVar1 = FUN_10042e580(param_1);
  *(undefined4 *)(lVar1 + 0x40) = 0x3e4ccccd;
  *(byte *)(lVar1 + 0x44) = *(byte *)(lVar1 + 0x44) & 0xfe;
  lVar1 = FUN_10043fc08(lVar1 + 0x10);
  lVar3 = FUN_10049d500(lVar1 + 0x10);
  *(undefined1 *)(lVar3 + 0x20) = 1;
  *(undefined4 *)(lVar3 + 0x18) = 0;
  *(undefined4 *)(lVar3 + 8) = 0x40933333;
  *(undefined4 *)(lVar3 + 0x10) = 1;
  FUN_1004385f0(lVar1 + 0x88);
  return;
}




void FUN_1003fc6e8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  FUN_10042ebc4(param_1,1);
  FUN_100450f38(auStack_38,param_1 + 0x98);
  lVar1 = FUN_100431ad4(auStack_38);
  *(char **)(lVar1 + 0x10) = "Effect_SAW_Withdraw";
  *(ushort *)(lVar1 + 0x74) = *(ushort *)(lVar1 + 0x74) & 0xfd98 | 0x221;
  return;
}




void FUN_1003fc74c(void)

{
  return;
}




void FUN_1003fc750(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  code *local_30;
  undefined4 local_28;
  
  lVar1 = FUN_10042e694();
  *(ushort *)(lVar1 + 0x48) = *(ushort *)(lVar1 + 0x48) | 8;
  *(byte *)(lVar1 + 0x60) = *(byte *)(lVar1 + 0x60) & 0xfc | 1;
  *(ushort *)(lVar1 + 0x5a) = *(ushort *)(lVar1 + 0x5a) | 4;
  lVar1 = FUN_10043fc08(lVar1 + 0x10);
  lVar2 = FUN_10049c300(lVar1 + 0x10);
  *(undefined **)(lVar2 + 8) = PTR_s_Buff_SAW_RoadieRun_10185b060;
  plVar3 = (long *)FUN_10043187c(lVar1 + 0xa0);
  local_30 = FUN_1004941c4;
  local_28 = 3;
  (**(code **)(*plVar3 + 0x30))(plVar3,&local_30);
  lVar1 = FUN_10042e2c8(param_1);
  plVar3 = (long *)FUN_100430a84(lVar1 + 0x10);
  local_30 = FUN_10048878c;
  local_28 = 3;
  (**(code **)(*plVar3 + 0x30))(plVar3,0x10,1,&local_30);
  return;
}




void FUN_1003fc824(long param_1)

{
  long lVar1;
  undefined1 auStack_58 [24];
  
  FUN_100450f38(auStack_58,param_1 + 0x68);
  lVar1 = FUN_100436540(auStack_58);
  *(char **)(lVar1 + 0x20) = "CenterBody";
  *(ushort *)(lVar1 + 0x74) = *(ushort *)(lVar1 + 0x74) & 0xff98 | 0x22;
  *(char **)(lVar1 + 0x10) = "Effect_SAW_Projectile_Impact";
  FUN_100450f38(auStack_58,param_1 + 0x70);
  lVar1 = FUN_100436540(auStack_58);
  *(char **)(lVar1 + 0x20) = "CenterBody";
  *(ushort *)(lVar1 + 0x74) = *(ushort *)(lVar1 + 0x74) & 0xff98 | 0x22;
  *(char **)(lVar1 + 0x10) = "Effect_SAW_Projectile_Impact";
  return;
}




void FUN_1003fc8c8(void)

{
  return;
}




void FUN_1003fc8cc(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  
  puVar2 = PTR_s_onPreCalculateDamageExchangeName_10185d520;
  if (DAT_101d23a38 != '\0') {
    uVar3 = FUN_1004d2524(PTR_s_onPreCalculateDamageExchangeName_10185d520);
    uVar3 = FUN_100015208(puVar2,uVar3,0x12345678);
    *(undefined4 *)(param_1 + 0xa0 + (ulong)*(uint *)(param_1 + 0x160) * 4) = uVar3;
    uVar1 = *(uint *)(param_1 + 0x160);
    *(code **)(param_1 + 0xa0 + (ulong)uVar1 * 8 + 0x40) = FUN_1004408d0;
    *(uint *)(param_1 + 0x160) = uVar1 + 1;
  }
  return;
}




void FUN_1003fc940(long param_1)

{
  long lVar1;
  undefined1 auStack_28 [24];
  
  *(undefined4 *)(param_1 + 0x318) = 0x3fb33333;
  if (*(float *)(param_1 + 0x31c) < 1.4) {
    *(undefined4 *)(param_1 + 0x31c) = 0x3fb33333;
  }
  *(uint *)(param_1 + 0x340) = *(uint *)(param_1 + 0x340) & 0xffffffef;
  FUN_100450f38(auStack_28,param_1 + 0x80);
  FUN_100431d2c(auStack_28);
  lVar1 = FUN_1004369e4(auStack_28);
  *(undefined **)(lVar1 + 0x10) = PTR_s_Ability__Joule__A_PreTarget_Remo_101859120;
  FUN_100431f2c(auStack_28);
  return;
}




void FUN_1003fc9b8(long param_1)

{
  undefined8 uVar1;
  undefined4 local_30 [2];
  undefined4 local_28;
  
  uVar1 = FUN_100345d90(*(undefined4 *)(param_1 + 0x308));
  local_30[0] = FUN_1003dfe60(uVar1,0,3,0x19,0);
  local_28 = 1;
  FUN_10042eb40(param_1,local_30);
  return;
}




void FUN_1003fca10(void)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_10042e2c8();
  lVar1 = lVar1 + 0x10;
  plVar2 = (long *)FUN_100441e68(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,"Bone_Buttjet");
  (**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Joule_Mechlights");
  plVar2 = (long *)FUN_100441e68(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,"Bone_Fork");
  (**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Joule_MechFork");
  plVar2 = (long *)FUN_100441e68(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,"Bone_Buttjet");
                    /* WARNING: Could not recover jumptable at 0x0001003fcab8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Joule_HeadBuff");
  return;
}




void FUN_1003fcabc(void)

{
  long lVar1;
  
  lVar1 = FUN_10042e2c8();
  lVar1 = FUN_10049d090(lVar1 + 0x10);
  *(undefined4 *)(lVar1 + 0x28) = 1;
  *(code **)(lVar1 + 0x20) = FUN_100458afc;
  return;
}




void FUN_1003fcaec(long param_1)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  FUN_10042ebc4(param_1,1);
  FUN_100450f38(auStack_48,param_1 + 0x98);
  lVar1 = FUN_100431ad4(auStack_48);
  *(char **)(lVar1 + 0x28) = "Bone_LFootMech";
  *(char **)(lVar1 + 0x10) = "Effect_Joule_MechJets";
  *(ushort *)(lVar1 + 0x74) = *(ushort *)(lVar1 + 0x74) & 0xfd98 | 0x243;
  lVar1 = FUN_100431ad4(auStack_48);
  *(char **)(lVar1 + 0x28) = "Bone_RFootMech";
  *(char **)(lVar1 + 0x10) = "Effect_Joule_MechJets";
  *(ushort *)(lVar1 + 0x74) = *(ushort *)(lVar1 + 0x74) & 0xfd98 | 0x243;
  lVar1 = FUN_100431ad4(auStack_48);
  *(char **)(lVar1 + 0x28) = "Bone_Buttjet";
  *(char **)(lVar1 + 0x10) = "Effect_Joule_Buttjet";
  *(ushort *)(lVar1 + 0x74) = *(ushort *)(lVar1 + 0x74) & 0xfd98 | 0x243;
  lVar1 = FUN_100431ad4(auStack_48);
  *(char **)(lVar1 + 0x10) = "Effect_Joule_RecallDust";
  *(ushort *)(lVar1 + 0x74) = *(ushort *)(lVar1 + 0x74) & 0xfd98 | 0x221;
  return;
}




void FUN_1003fcbe4(long param_1)

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
  local_38[0] = DAT_101d90bcc;
  uVar7 = FUN_1003dfee8(uVar6,local_38,2,9);
  *(undefined8 *)(lVar2 + 0x10) = 0x200000004;
  *(undefined4 *)(lVar2 + 0x18) = uVar7;
  lVar2 = FUN_10042e694(param_1);
  *(ushort *)(lVar2 + 0x48) = *(ushort *)(lVar2 + 0x48) | 8;
  *(byte *)(lVar2 + 0x60) = *(byte *)(lVar2 + 0x60) & 0xfc | 1;
  if (PTR_s_Ability__Joule__B_101859130 == (undefined *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = 0x811c9dc5;
    cVar1 = *PTR_s_Ability__Joule__B_101859130;
    pcVar5 = PTR_s_Ability__Joule__B_101859130;
    while (cVar1 != '\0') {
      pcVar5 = pcVar5 + 1;
      uVar4 = (uVar4 ^ (int)cVar1) * 0x1000193;
      cVar1 = *pcVar5;
    }
  }
  *(uint *)(lVar2 + 0x40) = uVar4;
  plVar3 = (long *)FUN_100433e34(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))
                             (plVar3,PTR_s_Buff_Joule_ThunderingStepsBonuse_10185c798);
  local_50 = FUN_100493780;
  local_48 = 3;
  (**(code **)(*plVar3 + 0x18))(plVar3,&local_50);
  return;
}




void FUN_1003fcd0c(long param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  char cVar6;
  uint uVar7;
  char *pcVar8;
  uint uVar9;
  code *local_40;
  undefined4 local_38;
  
  puVar1 = PTR_s_onBeforeApplyDamageName_10185d570;
  uVar9 = 0x811c9dc5;
  uVar2 = FUN_1004d2524(PTR_s_onBeforeApplyDamageName_10185d570);
  uVar2 = FUN_100015208(puVar1,uVar2,0x12345678);
  *(undefined4 *)(param_1 + 0xa0 + (ulong)*(uint *)(param_1 + 0x160) * 4) = uVar2;
  uVar7 = *(uint *)(param_1 + 0x160);
  *(code **)(param_1 + 0xa0 + (ulong)uVar7 * 8 + 0x40) = FUN_1004935ac;
  *(uint *)(param_1 + 0x160) = uVar7 + 1;
  lVar3 = FUN_10042e2c8(param_1);
  plVar4 = (long *)FUN_100430a84(lVar3 + 0x10);
  local_40 = FUN_1004936b0;
  local_38 = 3;
  (**(code **)(*plVar4 + 0x30))(plVar4,7,2,&local_40);
  plVar4 = (long *)FUN_100430a84(lVar3 + 0x10);
  local_40 = FUN_1004936e4;
  local_38 = 3;
  (**(code **)(*plVar4 + 0x30))(plVar4,8,2,&local_40);
  lVar3 = FUN_100433030(param_1);
  if (PTR_s_Ability__Joule__A_101859128 == (undefined *)0x0) {
    uVar7 = 0;
  }
  else {
    cVar6 = *PTR_s_Ability__Joule__A_101859128;
    uVar7 = 0x811c9dc5;
    if (cVar6 != '\0') {
      uVar7 = 0x811c9dc5;
      pcVar8 = PTR_s_Ability__Joule__A_101859128;
      do {
        pcVar8 = pcVar8 + 1;
        uVar7 = (uVar7 ^ (int)cVar6) * 0x1000193;
        cVar6 = *pcVar8;
      } while (cVar6 != '\0');
    }
  }
  *(uint *)(lVar3 + 0x28) = uVar7;
  lVar5 = FUN_10049d0e0(lVar3 + 0x10);
  *(undefined **)(lVar5 + 0x10) = PTR_s_Ability__Joule__A_101859128;
  *(code **)(lVar5 + 0x18) = FUN_100493718;
  *(undefined4 *)(lVar5 + 0x20) = 3;
  *(byte *)(lVar5 + 0x2c) = *(byte *)(lVar5 + 0x2c) | 4;
  *(undefined4 *)(lVar5 + 0x28) = 0x3f800000;
  lVar3 = FUN_10049bf40(lVar3 + 0x10);
  if (PTR_s_Ability__Joule__A_101859128 == (undefined *)0x0) {
    uVar9 = 0;
  }
  else {
    cVar6 = *PTR_s_Ability__Joule__A_101859128;
    pcVar8 = PTR_s_Ability__Joule__A_101859128;
    while (cVar6 != '\0') {
      pcVar8 = pcVar8 + 1;
      uVar9 = (uVar9 ^ (int)cVar6) * 0x1000193;
      cVar6 = *pcVar8;
    }
  }
  *(uint *)(lVar3 + 0x20) = uVar9;
  *(code **)(lVar3 + 0x10) = FUN_10049374c;
  *(undefined4 *)(lVar3 + 0x18) = 3;
  *(undefined4 *)(lVar3 + 0x28) = 1;
  return;
}




void FUN_1003fcee8(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  char cVar3;
  uint uVar4;
  char *pcVar5;
  uint uVar6;
  undefined4 local_40 [2];
  undefined4 local_38;
  
  uVar6 = 0x811c9dc5;
  lVar1 = FUN_10042e498();
  plVar2 = (long *)FUN_10043d6ac(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Ability__Joule__A_101859128);
  local_40[0] = 0;
  local_38 = 1;
  (**(code **)(*plVar2 + 0x20))(plVar2,local_40);
  lVar1 = FUN_10042e2c8(param_1);
  lVar1 = FUN_10049bf40(lVar1 + 0x10);
  if (PTR_s_Ability__Joule__A_101859128 == (undefined *)0x0) {
    uVar4 = 0;
  }
  else {
    cVar3 = *PTR_s_Ability__Joule__A_101859128;
    uVar4 = 0x811c9dc5;
    if (cVar3 != '\0') {
      uVar4 = 0x811c9dc5;
      pcVar5 = PTR_s_Ability__Joule__A_101859128;
      do {
        pcVar5 = pcVar5 + 1;
        uVar4 = (uVar4 ^ (int)cVar3) * 0x1000193;
        cVar3 = *pcVar5;
      } while (cVar3 != '\0');
    }
  }
  *(uint *)(lVar1 + 0x20) = uVar4;
  *(undefined4 *)(lVar1 + 0x10) = 0;
  *(undefined4 *)(lVar1 + 0x18) = 1;
  *(undefined4 *)(lVar1 + 0x28) = 2;
  lVar1 = FUN_100433910(param_1);
  if (PTR_s_Ability__Joule__A_101859128 == (undefined *)0x0) {
    uVar6 = 0;
  }
  else {
    cVar3 = *PTR_s_Ability__Joule__A_101859128;
    pcVar5 = PTR_s_Ability__Joule__A_101859128;
    while (cVar3 != '\0') {
      pcVar5 = pcVar5 + 1;
      uVar6 = (uVar6 ^ (int)cVar3) * 0x1000193;
      cVar3 = *pcVar5;
    }
  }
  *(uint *)(lVar1 + 0x28) = uVar6;
  *(byte *)(lVar1 + 0x38) = *(byte *)(lVar1 + 0x38) & 0xfb;
  FUN_1004385f0(lVar1 + 0x10);
  return;
}




void FUN_1003fd01c(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  
  lVar1 = FUN_10042e2c8();
  lVar2 = FUN_10049be00(lVar1 + 0x10);
  *(undefined4 *)(lVar2 + 0x58) = 1;
  *(code **)(lVar2 + 0x10) = FUN_1004937b4;
  *(undefined4 *)(lVar2 + 0x18) = 3;
  plVar3 = (long *)FUN_10049bfec(lVar1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x0001003fd074. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x30))(plVar3,"Effect_GoFast");
  return;
}




void FUN_1003fd078(void)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  char cVar4;
  char *pcVar5;
  uint uVar6;
  
  uVar6 = 0x811c9dc5;
  lVar1 = FUN_100433030();
  if (PTR_s_Ability__Joule__C_101859138 == (undefined *)0x0) {
    uVar3 = 0;
  }
  else {
    cVar4 = *PTR_s_Ability__Joule__C_101859138;
    uVar3 = 0x811c9dc5;
    if (cVar4 != '\0') {
      uVar3 = 0x811c9dc5;
      pcVar5 = PTR_s_Ability__Joule__C_101859138;
      do {
        pcVar5 = pcVar5 + 1;
        uVar3 = (uVar3 ^ (int)cVar4) * 0x1000193;
        cVar4 = *pcVar5;
      } while (cVar4 != '\0');
    }
  }
  *(uint *)(lVar1 + 0x28) = uVar3;
  *(undefined1 *)(lVar1 + 0x2c) = 1;
  lVar1 = lVar1 + 0x10;
  lVar2 = FUN_10049bf40(lVar1);
  if (PTR_s_Ability__Joule__C_101859138 == (undefined *)0x0) {
    uVar3 = 0;
  }
  else {
    cVar4 = *PTR_s_Ability__Joule__C_101859138;
    uVar3 = 0x811c9dc5;
    if (cVar4 != '\0') {
      uVar3 = 0x811c9dc5;
      pcVar5 = PTR_s_Ability__Joule__C_101859138;
      do {
        pcVar5 = pcVar5 + 1;
        uVar3 = (uVar3 ^ (int)cVar4) * 0x1000193;
        cVar4 = *pcVar5;
      } while (cVar4 != '\0');
    }
  }
  *(uint *)(lVar2 + 0x20) = uVar3;
  *(code **)(lVar2 + 0x10) = FUN_1004937e8;
  *(undefined4 *)(lVar2 + 0x18) = 3;
  *(undefined4 *)(lVar2 + 0x28) = 1;
  lVar2 = FUN_10049bf40(lVar1);
  *(undefined4 *)(lVar2 + 0x20) = 0x65bbcc86;
  *(code **)(lVar2 + 0x10) = FUN_10049381c;
  *(undefined4 *)(lVar2 + 0x18) = 3;
  *(undefined4 *)(lVar2 + 0x28) = 2;
  lVar1 = FUN_10049c888(lVar1);
  if (PTR_s_Ability__Joule__C_101859138 == (undefined *)0x0) {
    uVar6 = 0;
  }
  else {
    cVar4 = *PTR_s_Ability__Joule__C_101859138;
    pcVar5 = PTR_s_Ability__Joule__C_101859138;
    while (cVar4 != '\0') {
      pcVar5 = pcVar5 + 1;
      uVar6 = (uVar6 ^ (int)cVar4) * 0x1000193;
      cVar4 = *pcVar5;
    }
  }
  *(uint *)(lVar1 + 0x20) = uVar6;
  *(code **)(lVar1 + 0x10) = FUN_100493850;
  *(undefined4 *)(lVar1 + 0x18) = 3;
  return;
}




void FUN_1003fd1e4(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  
  *(undefined4 *)(param_1 + 0x328) = 0x3dcccccd;
  puVar2 = PTR_s_onBuffIntervalName_10185d558;
  uVar3 = FUN_1004d2524(PTR_s_onBuffIntervalName_10185d558);
  uVar3 = FUN_100015208(puVar2,uVar3,0x12345678);
  *(undefined4 *)(param_1 + 0xa0 + (ulong)*(uint *)(param_1 + 0x160) * 4) = uVar3;
  uVar1 = *(uint *)(param_1 + 0x160);
  *(code **)(param_1 + 0xe0 + (ulong)uVar1 * 8) = FUN_1004423dc;
  *(uint *)(param_1 + 0x160) = uVar1 + 1;
  uVar3 = FUN_1004d2524("lastTime");
  uVar4 = FUN_100015208("lastTime",uVar3,0x12345678);
  (**(code **)(*(long *)(param_1 + 0x168) + 8))(param_1 + 0x168,uVar4);
  puVar2 = PTR_s_onAfterApplyDamageName_10185d578;
  uVar3 = FUN_1004d2524(PTR_s_onAfterApplyDamageName_10185d578);
  uVar3 = FUN_100015208(puVar2,uVar3,0x12345678);
  *(undefined4 *)(param_1 + 0xa0 + (ulong)*(uint *)(param_1 + 0x160) * 4) = uVar3;
  uVar1 = *(uint *)(param_1 + 0x160);
  *(code **)(param_1 + 0xe0 + (ulong)uVar1 * 8) = FUN_100442b1c;
  *(uint *)(param_1 + 0x160) = uVar1 + 1;
  uVar3 = FUN_1004d2524("timeLastSentReceivedDamage");
  uVar4 = FUN_100015208("timeLastSentReceivedDamage",uVar3,0x12345678);
  (**(code **)(*(long *)(param_1 + 0x168) + 8))(param_1 + 0x168,uVar4);
  lVar5 = FUN_10042e2c8(param_1);
  plVar6 = (long *)FUN_10049bbfc(lVar5 + 0x10);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x30))();
                    /* WARNING: Could not recover jumptable at 0x0001003fd344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar6 + 0x58))(plVar6,0);
  return;
}




void FUN_1003fd348(long param_1)

{
  long lVar1;
  long *plVar2;
  
  *(code **)(param_1 + 0x330) = FUN_100437424;
  lVar1 = FUN_10042e2c8();
  plVar2 = (long *)FUN_10049bbfc(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))();
                    /* WARNING: Could not recover jumptable at 0x0001003fd384. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x58))(plVar2,1);
  return;
}




void FUN_1003fd388(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  
  *(uint *)(param_1 + 0x340) = *(uint *)(param_1 + 0x340) | 0x80;
  puVar2 = PTR_s_onBeforeApplyDamageName_10185d570;
  uVar3 = FUN_1004d2524(PTR_s_onBeforeApplyDamageName_10185d570);
  uVar3 = FUN_100015208(puVar2,uVar3,0x12345678);
  *(undefined4 *)(param_1 + 0xa0 + (ulong)*(uint *)(param_1 + 0x160) * 4) = uVar3;
  uVar1 = *(uint *)(param_1 + 0x160);
  *(code **)(param_1 + 0xa0 + (ulong)uVar1 * 8 + 0x40) = FUN_100442a08;
  *(uint *)(param_1 + 0x160) = uVar1 + 1;
  lVar4 = FUN_10042e2c8(param_1);
  lVar4 = lVar4 + 0x10;
  lVar5 = FUN_10049be00(lVar4);
  *(undefined4 *)(lVar5 + 0x58) = 1;
  *(code **)(lVar5 + 0x10) = FUN_100442c78;
  *(undefined4 *)(lVar5 + 0x18) = 3;
  plVar6 = (long *)FUN_10049bfec(lVar4);
  (**(code **)(*plVar6 + 0x30))(plVar6,"Effect_ShadowsEmpowerMe_GoFast");
  plVar6 = (long *)FUN_100441e68(lVar4);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x78))(plVar6,"Bone_Sword");
  (**(code **)(*plVar6 + 0x48))(plVar6,"Effect_Hero009_SwordAura_Out");
  plVar6 = (long *)FUN_10049bef0(lVar4);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x30))(plVar6,"u_ghost");
  (**(code **)(*plVar6 + 0x38))(0x3f800000);
  plVar6 = (long *)FUN_10049ba04(lVar4);
  (**(code **)(*plVar6 + 0x30))(plVar6,"IdleBrush","IdleBrushShadow");
  plVar6 = (long *)FUN_10049ba04(lVar4);
  (**(code **)(*plVar6 + 0x30))(plVar6,"Sprint","FastMoveShadowsEmpowerMe");
  plVar6 = (long *)FUN_10049bbfc(lVar4);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x38))();
                    /* WARNING: Could not recover jumptable at 0x0001003fd508. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar6 + 0x58))(plVar6,2);
  return;
}




void FUN_1003fd50c(long param_1)

{
  undefined8 uVar1;
  undefined4 local_30 [2];
  undefined4 local_28;
  
  uVar1 = FUN_100345d90(*(undefined4 *)(param_1 + 0x308));
  local_30[0] = FUN_1003df710(uVar1,2,1);
  local_28 = 1;
  FUN_10042eb40(param_1,local_30);
  return;
}




void FUN_1003fd55c(long param_1)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  undefined1 auStack_50 [24];
  undefined4 local_38 [2];
  
  FUN_100450f38(auStack_50,param_1 + 0x70);
  FUN_1004354f8(auStack_50);
  FUN_100450f38(auStack_50,param_1 + 0x98);
  lVar3 = *(long *)(*(long *)(param_1 + 0x10) + 0x10);
  fVar4 = (float)FUN_1003dfe60(lVar3,0,2,0x19,0);
  puVar1 = PTR_s_Buff_Krul_Talent_DeadMansBarrier_10185c7d8;
  lVar3 = FUN_100345d90(*(undefined4 *)(lVar3 + 0x260));
  if ((lVar3 != 0) && (iVar2 = FUN_1003a47d0(lVar3,puVar1), iVar2 != 0)) {
    local_38[0] = DAT_101d90be8;
    fVar5 = (float)FUN_1003dfee8(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x10),local_38,0,9);
    fVar4 = fVar5 * fVar4;
  }
  lVar3 = FUN_1004337f4(auStack_50);
  *(undefined4 *)(lVar3 + 0x10) = 4;
  *(float *)(lVar3 + 0x14) = fVar4;
  return;
}




void FUN_1003fd628(long param_1)

{
  long lVar1;
  long *plVar2;
  code *local_30;
  undefined4 local_28;
  
  lVar1 = FUN_10043099c();
  plVar2 = (long *)FUN_100441e68(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x68))(plVar2,"OverHead");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Hero009_Weakness");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x90))();
  (**(code **)(*plVar2 + 0xb0))(plVar2,1);
  lVar1 = FUN_10042e3b0(param_1);
  FUN_10049b814(lVar1 + 0x10);
  lVar1 = FUN_10042e694(param_1);
  *(ushort *)(lVar1 + 0x48) = *(ushort *)(lVar1 + 0x48) | 4;
  *(byte *)(lVar1 + 0x60) = *(byte *)(lVar1 + 0x60) & 0xfc | 0x12;
  *(ushort *)(lVar1 + 0x5a) = *(ushort *)(lVar1 + 0x5a) | 4;
  lVar1 = FUN_10043aaf4(lVar1 + 0x10);
  *(code **)(lVar1 + 0x10) = FUN_100442c84;
  if ((*(byte *)(*(long *)(*(long *)(param_1 + 0x10) + 0x10) + 0x2f6) & 1) == 0) {
    lVar1 = FUN_10042e694(param_1);
    *(ushort *)(lVar1 + 0x48) = *(ushort *)(lVar1 + 0x48) | 0x10;
    *(byte *)(lVar1 + 0x60) = *(byte *)(lVar1 + 0x60) & 0xfc | 1;
    plVar2 = (long *)FUN_10043187c(lVar1 + 0x10);
    local_30 = FUN_100442d04;
    local_28 = 4;
    (**(code **)(*plVar2 + 0x30))(plVar2,&local_30);
  }
  return;
}




void FUN_1003fd754(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined1 auStack_48 [24];
  
  puVar2 = PTR_s_onAbilityUpgradedName_10185d550;
  uVar3 = FUN_1004d2524(PTR_s_onAbilityUpgradedName_10185d550);
  uVar3 = FUN_100015208(puVar2,uVar3,0x12345678);
  *(undefined4 *)(param_1 + 0xa0 + (ulong)*(uint *)(param_1 + 0x160) * 4) = uVar3;
  uVar1 = *(uint *)(param_1 + 0x160);
  *(code **)(param_1 + 0xe0 + (ulong)uVar1 * 8) = FUN_100442d74;
  *(uint *)(param_1 + 0x160) = uVar1 + 1;
  puVar2 = PTR_s_onAfterApplyDamageName_10185d578;
  uVar3 = FUN_1004d2524(PTR_s_onAfterApplyDamageName_10185d578);
  uVar3 = FUN_100015208(puVar2,uVar3,0x12345678);
  *(undefined4 *)(param_1 + 0xa0 + (ulong)*(uint *)(param_1 + 0x160) * 4) = uVar3;
  uVar1 = *(uint *)(param_1 + 0x160);
  *(code **)(param_1 + 0xe0 + (ulong)uVar1 * 8) = FUN_100442e94;
  *(uint *)(param_1 + 0x160) = uVar1 + 1;
  FUN_100450f38(auStack_48,param_1 + 0x70);
  return;
}




void FUN_1003fd81c(long param_1)

{
  undefined8 uVar1;
  undefined4 local_30 [2];
  undefined4 local_28;
  
  uVar1 = FUN_100345d90(*(undefined4 *)(param_1 + 0x308));
  local_30[0] = FUN_1003dfe60(uVar1,2,6,0x19,0);
  local_28 = 1;
  FUN_10042eb40(param_1,local_30);
  return;
}




void FUN_1003fd874(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined1 auStack_88 [24];
  
  uVar4 = FUN_100345d90(*(undefined4 *)(param_1 + 0x308));
  uVar3 = FUN_1004d2524("slowAmount");
  uVar5 = FUN_100015208("slowAmount",uVar3,0x12345678);
  (**(code **)(*(long *)(param_1 + 0x168) + 8))(param_1 + 0x168,uVar5);
  puVar2 = PTR_s_onApplyName_10185d540;
  uVar3 = FUN_1004d2524(PTR_s_onApplyName_10185d540);
  uVar3 = FUN_100015208(puVar2,uVar3,0x12345678);
  *(undefined4 *)(param_1 + 0xa0 + (ulong)*(uint *)(param_1 + 0x160) * 4) = uVar3;
  uVar1 = *(uint *)(param_1 + 0x160);
  *(code **)(param_1 + 0xe0 + (ulong)uVar1 * 8) = FUN_100442fbc;
  *(uint *)(param_1 + 0x160) = uVar1 + 1;
  FUN_100450f38(auStack_88,param_1 + 0x68);
  FUN_100431d2c(auStack_88);
  fVar9 = *(float *)(param_1 + 0x31c);
  fVar7 = (float)FUN_1003dfe60(uVar4,2,4,0x19,0);
  fVar8 = (float)FUN_1003dfe60(uVar4,2,5,0x19,0);
  lVar6 = FUN_100431e0c(auStack_88);
  *(undefined **)(lVar6 + 0x10) = PTR_s_Buff_Stunned_10185a208;
  *(float *)(lVar6 + 0x30) = (fVar8 * fVar9) / fVar7;
  *(undefined8 *)(lVar6 + 0x34) = 0xffffffff00000001;
  *(undefined8 *)(lVar6 + 0x44) = 0;
  *(undefined8 *)(lVar6 + 0x3c) = 0;
  lVar6 = FUN_100431e0c(auStack_88);
  uVar3 = *(undefined4 *)(param_1 + 0x318);
  *(undefined **)(lVar6 + 0x10) = PTR_s_Buff_Krul_Hellrazor_Slow_10185c7c8;
  *(undefined4 *)(lVar6 + 0x30) = uVar3;
  *(undefined8 *)(lVar6 + 0x34) = 0xffffffff00000001;
  *(undefined8 *)(lVar6 + 0x44) = 0;
  *(undefined8 *)(lVar6 + 0x3c) = 0;
  FUN_100431f2c(auStack_88);
  puVar2 = PTR_s_onBeforeReApplyName_10185d588;
  uVar3 = FUN_1004d2524(PTR_s_onBeforeReApplyName_10185d588);
  uVar3 = FUN_100015208(puVar2,uVar3,0x12345678);
  *(undefined4 *)(param_1 + 0xa0 + (ulong)*(uint *)(param_1 + 0x160) * 4) = uVar3;
  uVar1 = *(uint *)(param_1 + 0x160);
  *(code **)(param_1 + 0xe0 + (ulong)uVar1 * 8) = FUN_100442fbc;
  *(uint *)(param_1 + 0x160) = uVar1 + 1;
  FUN_100450f38(auStack_88,param_1 + 0x70);
  FUN_100431d2c(auStack_88);
  fVar9 = *(float *)(param_1 + 0x31c);
  fVar7 = (float)FUN_1003dfe60(uVar4,2,4,0x19,0);
  fVar8 = (float)FUN_1003dfe60(uVar4,2,5,0x19,0);
  lVar6 = FUN_100431e0c(auStack_88);
  *(undefined **)(lVar6 + 0x10) = PTR_s_Buff_Stunned_10185a208;
  *(float *)(lVar6 + 0x30) = (fVar8 * fVar9) / fVar7;
  *(undefined8 *)(lVar6 + 0x34) = 0xffffffff00000001;
  *(undefined8 *)(lVar6 + 0x44) = 0;
  *(undefined8 *)(lVar6 + 0x3c) = 0;
  lVar6 = FUN_100431e0c(auStack_88);
  uVar3 = *(undefined4 *)(param_1 + 0x318);
  *(undefined **)(lVar6 + 0x10) = PTR_s_Buff_Krul_Hellrazor_Slow_10185c7c8;
  *(undefined4 *)(lVar6 + 0x30) = uVar3;
  *(undefined8 *)(lVar6 + 0x34) = 0xffffffff00000001;
  *(undefined8 *)(lVar6 + 0x44) = 0;
  *(undefined8 *)(lVar6 + 0x3c) = 0;
  FUN_100431f2c(auStack_88);
  FUN_100450f38(auStack_88,param_1 + 0x98);
  lVar6 = FUN_100431ad4(auStack_88);
  *(char **)(lVar6 + 0x20) = "CenterBody";
  *(ushort *)(lVar6 + 0x74) = *(ushort *)(lVar6 + 0x74) & 0xff98 | 0x22;
  *(char **)(lVar6 + 0x10) = "Effect_Hero009_Sword_Impaled";
  return;
}




void FUN_1003fdb28(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  FUN_10042ebc4(param_1,1);
  FUN_100450f38(auStack_38,param_1 + 0x98);
  lVar1 = FUN_100431ad4(auStack_38);
  *(char **)(lVar1 + 0x10) = "Effect_Hero009_Withdraw";
  *(ushort *)(lVar1 + 0x74) = *(ushort *)(lVar1 + 0x74) & 0xfd98 | 0x221;
  lVar1 = FUN_100431ad4(auStack_38);
  *(char **)(lVar1 + 0x28) = "Bone_Sword";
  *(char **)(lVar1 + 0x10) = "Effect_Hero009_Withdraw_2";
  *(ushort *)(lVar1 + 0x74) = *(ushort *)(lVar1 + 0x74) & 0xfd98 | 0x243;
  return;
}




void FUN_1003fdbc0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined1 auStack_40 [24];
  undefined4 local_28 [2];
  
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x10);
  FUN_100450f38(auStack_40,param_1 + 0x98);
  lVar1 = FUN_100436e1c(auStack_40);
  local_28[0] = DAT_101d90be0;
  uVar3 = FUN_1003dfee8(uVar2,local_28,1,9);
  *(undefined8 *)(lVar1 + 0x10) = 0x200000005;
  *(undefined4 *)(lVar1 + 0x18) = uVar3;
  return;
}




void FUN_1003fdc30(void)

{
  char cVar1;
  long lVar2;
  uint uVar3;
  char *pcVar4;
  
  lVar2 = FUN_100433030();
  if (PTR_s_Ability__Krul__A_101859160 == (undefined *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = 0x811c9dc5;
    cVar1 = *PTR_s_Ability__Krul__A_101859160;
    pcVar4 = PTR_s_Ability__Krul__A_101859160;
    while (cVar1 != '\0') {
      pcVar4 = pcVar4 + 1;
      uVar3 = (uVar3 ^ (int)cVar1) * 0x1000193;
      cVar1 = *pcVar4;
    }
  }
  *(uint *)(lVar2 + 0x28) = uVar3;
  lVar2 = FUN_10049da9c(lVar2 + 0x10);
  *(undefined **)(lVar2 + 0x10) = PTR_s_Ability__Krul__A_101859160;
  *(code **)(lVar2 + 0x18) = FUN_100493888;
  *(undefined4 *)(lVar2 + 0x20) = 3;
  *(undefined4 *)(lVar2 + 0x2c) = 0;
  return;
}




void FUN_1003fdcb8(void)

{
  char cVar1;
  long lVar2;
  uint uVar3;
  char *pcVar4;
  
  lVar2 = FUN_10042e2c8();
  lVar2 = FUN_10049bf40(lVar2 + 0x10);
  if (PTR_s_Ability__Krul__C_101859170 == (undefined *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = 0x811c9dc5;
    cVar1 = *PTR_s_Ability__Krul__C_101859170;
    pcVar4 = PTR_s_Ability__Krul__C_101859170;
    while (cVar1 != '\0') {
      pcVar4 = pcVar4 + 1;
      uVar3 = (uVar3 ^ (int)cVar1) * 0x1000193;
      cVar1 = *pcVar4;
    }
  }
  *(uint *)(lVar2 + 0x20) = uVar3;
  *(code **)(lVar2 + 0x10) = FUN_1004938bc;
  *(undefined4 *)(lVar2 + 0x18) = 3;
  *(undefined4 *)(lVar2 + 0x28) = 1;
  return;
}




void FUN_1003fdd38(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  code *local_40;
  undefined4 local_38;
  
  lVar1 = FUN_10042e2c8();
  plVar2 = (long *)FUN_100441e68(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,"Bone_CenterMass");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Hero010_OnFire");
  (**(code **)(*plVar2 + 0x78))(plVar2,1);
  lVar1 = FUN_10042e580(param_1);
  *(undefined4 *)(lVar1 + 0x40) = 0x3f000000;
  *(byte *)(lVar1 + 0x44) = *(byte *)(lVar1 + 0x44) & 0xfe;
  FUN_1004386bc(lVar1 + 0x10);
  plVar2 = (long *)FUN_10043ab94(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x40))();
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))();
  local_40 = FUN_1004493dc;
  local_38 = 3;
  (**(code **)(*plVar2 + 0x18))(plVar2,&local_40,1,3);
  lVar1 = FUN_10042e694(param_1);
  *(ushort *)(lVar1 + 0x48) = *(ushort *)(lVar1 + 0x48) | 8;
  *(byte *)(lVar1 + 0x60) = *(byte *)(lVar1 + 0x60) & 0xfc | 0x12;
  *(ushort *)(lVar1 + 0x5a) = *(ushort *)(lVar1 + 0x5a) | 4;
  lVar1 = lVar1 + 0x10;
  plVar2 = (long *)FUN_100433e34(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))
                             (plVar2,PTR_s_Buff_Skaarf_ShowReigniteHitEffec_10185c7f0);
  local_40 = (code *)CONCAT44(local_40._4_4_,0x3f000000);
  local_38 = 1;
  (**(code **)(*plVar2 + 0x18))(plVar2,&local_40);
  FUN_1004386bc(lVar1);
  plVar2 = (long *)FUN_10043ab94(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x40))();
  local_40 = FUN_1004492dc;
  local_38 = 5;
  (**(code **)(*plVar2 + 0x18))(plVar2,&local_40,1,1);
  lVar1 = FUN_10042e3b0(param_1);
  FUN_10049b814(lVar1 + 0x10);
  return;
}




void FUN_1003fdee4(void)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  
  lVar1 = FUN_10042ea44();
  plVar2 = (long *)FUN_100441e68(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,"Bone_CenterMass");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Hero010_REignition");
  (**(code **)(*plVar2 + 0x88))(plVar2,1);
  plVar2 = (long *)FUN_100441e18(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x38))(plVar2,"Sound_Skaarf_Attack_1");
  uVar3 = FUN_1010a1520();
  lVar1 = FUN_1010a0e0c(uVar3,0,"*KindredSoundBalance*",0);
  FUN_1003be168(*(undefined4 *)(lVar1 + 0x150));
                    /* WARNING: Could not recover jumptable at 0x0001003fdf8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x28))(plVar2);
  return;
}




void FUN_1003fdf90(long param_1)

{
  undefined1 auStack_28 [24];
  
  FUN_100450f38(auStack_28,param_1 + 0x70);
  FUN_1004354f8(auStack_28);
  return;
}




void FUN_1003fdfbc(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  long lVar5;
  float fVar6;
  undefined1 auStack_38 [24];
  
  FUN_1003461dc(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x10));
  uVar4 = FUN_100345d90();
  fVar6 = (float)FUN_1003dfe60(uVar4,1,4,0x19,0);
  *(float *)(param_1 + 0x318) = fVar6;
  if (*(float *)(param_1 + 0x31c) < fVar6) {
    *(float *)(param_1 + 0x31c) = fVar6;
  }
  *(uint *)(param_1 + 0x340) =
       *(uint *)(param_1 + 0x340) & 0xfffe0 | (uint)(fVar6 < 0.0) << 4 |
       *(uint *)(param_1 + 0x340) & 0xfff0000f;
  puVar2 = PTR_s_onBuffIntervalName_10185d558;
  if (DAT_101d23a38 != '\0') {
    uVar3 = FUN_1004d2524(PTR_s_onBuffIntervalName_10185d558);
    uVar3 = FUN_100015208(puVar2,uVar3,0x12345678);
    *(undefined4 *)(param_1 + 0xa0 + (ulong)*(uint *)(param_1 + 0x160) * 4) = uVar3;
    uVar1 = *(uint *)(param_1 + 0x160);
    *(code **)(param_1 + 0xa0 + (ulong)uVar1 * 8 + 0x40) = FUN_1004493e8;
    *(uint *)(param_1 + 0x160) = uVar1 + 1;
    *(undefined4 *)(param_1 + 0x328) = 0x3e4ccccd;
  }
  FUN_100450f38(auStack_38,param_1 + 0x98);
  lVar5 = FUN_100431ad4(auStack_38);
  *(char **)(lVar5 + 0x10) = "Effect_Hero010_Pool";
  *(ushort *)(lVar5 + 0x74) = *(ushort *)(lVar5 + 0x74) & 0xfd98 | 0x221;
  FUN_100450f38(auStack_38,param_1 + 0x88);
  FUN_100435830(auStack_38);
  return;
}




void FUN_1003fe0e8(void)

{
  return;
}




void FUN_1003fe0ec(long param_1)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  undefined1 auStack_60 [24];
  undefined4 local_48 [2];
  
  lVar3 = FUN_100345d90(*(undefined4 *)(param_1 + 0x308));
  FUN_100450f38(auStack_60,param_1 + 0x98);
  fVar5 = (float)FUN_1003dfe60(lVar3,1,6,0x19,0);
  puVar1 = PTR_s_Buff_Skaarf_Talent_FlamingSludge_10185c848;
  lVar4 = FUN_100345d90(*(undefined4 *)(lVar3 + 0x260));
  if ((lVar4 != 0) && (iVar2 = FUN_1003a47d0(lVar4,puVar1), iVar2 != 0)) {
    local_48[0] = DAT_101d90d34;
    fVar6 = (float)FUN_1003dfee8(lVar3,local_48,2,9);
    fVar5 = fVar6 * fVar5;
  }
  lVar3 = FUN_10043255c(auStack_60);
  *(undefined4 *)(lVar3 + 0x10) = 2;
  *(float *)(lVar3 + 0x14) = fVar5;
  FUN_100450f38(auStack_60,param_1 + 0x70);
  FUN_1004354f8(auStack_60);
  return;
}




void FUN_1003fe1c0(long param_1)

{
  uint uVar1;
  byte bVar2;
  undefined *puVar3;
  undefined4 uVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  float fVar9;
  float fVar10;
  undefined4 uVar11;
  code *local_68;
  undefined4 local_60;
  
  puVar3 = PTR_s_onBuffIntervalName_10185d558;
  if (DAT_101d23a38 == '\0') {
    fVar9 = *(float *)(param_1 + 0x328);
  }
  else {
    uVar4 = FUN_1004d2524(PTR_s_onBuffIntervalName_10185d558);
    uVar4 = FUN_100015208(puVar3,uVar4,0x12345678);
    *(undefined4 *)(param_1 + 0xa0 + (ulong)*(uint *)(param_1 + 0x160) * 4) = uVar4;
    uVar1 = *(uint *)(param_1 + 0x160);
    *(code **)(param_1 + 0xa0 + (ulong)uVar1 * 8 + 0x40) = FUN_100449734;
    *(uint *)(param_1 + 0x160) = uVar1 + 1;
    *(undefined4 *)(param_1 + 0x328) = 0x3e4ccccd;
    fVar9 = 0.2;
  }
  *(float *)(param_1 + 800) = *(float *)(param_1 + 800) + fVar9;
  *(uint *)(param_1 + 0x340) = *(uint *)(param_1 + 0x340) | 0x100;
  lVar5 = FUN_10042e498(param_1);
  plVar6 = (long *)FUN_10043594c(lVar5 + 0x10);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x30))(plVar6,"OnFire");
  (**(code **)(*plVar6 + 0x20))();
  plVar6 = (long *)FUN_100433e34(lVar5 + 0x10);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x30))(plVar6,PTR_s_Buff_DelayedDestroy_10185bd78);
  local_68 = FUN_100449e3c;
  local_60 = 3;
  (**(code **)(*plVar6 + 0x18))(plVar6,&local_68);
  FUN_100450f38(&local_68,param_1 + 0x68);
  lVar5 = *(long *)(*(long *)(param_1 + 0x10) + 0x10);
  uVar4 = *(undefined4 *)(lVar5 + 0x250);
  fVar9 = *(float *)(lVar5 + 0x254);
  uVar11 = *(undefined4 *)(lVar5 + 600);
  fVar10 = *(float *)(lVar5 + 0x2ec);
  lVar5 = FUN_1003e10f0();
  bVar2 = *(byte *)(lVar5 + 0xe5);
  lVar5 = FUN_100437600(&local_68);
  *(undefined8 *)(lVar5 + 0x18) = 0;
  *(undefined1 *)(lVar5 + 0x20) = 1;
  *(undefined4 *)(lVar5 + 0x24) = uVar4;
  *(float *)(lVar5 + 0x28) = fVar10 + fVar9;
  *(undefined4 *)(lVar5 + 0x2c) = uVar11;
  *(undefined8 *)(lVar5 + 0x30) = 0;
  *(undefined8 *)(lVar5 + 0x38) = 0;
  *(undefined8 *)(lVar5 + 0x48) = 0xbf800000c0000000;
  *(undefined8 *)(lVar5 + 0x40) = 0xbf80000040c80000;
  *(undefined4 *)(lVar5 + 0x50) = 0x3f800000;
  *(undefined1 *)(lVar5 + 0x54) = 0xff;
  *(undefined8 *)(lVar5 + 0x60) = 0xffffffff00000000;
  *(undefined8 *)(lVar5 + 0x58) = 0xffffffff00040000;
  *(byte *)(lVar5 + 0x6a) = bVar2 | 0x14;
  *(undefined2 *)(lVar5 + 0x68) = 0xc120;
  *(byte *)(lVar5 + 0x94) = *(byte *)(lVar5 + 0x94) & 0xfc | 1;
  lVar5 = FUN_100440f9c(&local_68);
  *(code **)(lVar5 + 0x18) = FUN_100449d50;
  *(undefined8 *)(lVar5 + 0x20) = 0x200000001;
  *(byte *)(lVar5 + 0x30) = *(byte *)(lVar5 + 0x30) & 0xfe;
  *(code **)(lVar5 + 0x28) = FUN_100449df4;
  FUN_100431f2c(&local_68);
  FUN_100450f38(&local_68,param_1 + 0x98);
  lVar5 = FUN_100431ad4(&local_68);
  *(ushort *)(lVar5 + 0x74) = *(ushort *)(lVar5 + 0x74) & 0xff98 | 0x21;
  *(char **)(lVar5 + 0x10) = "Effect_Hero010_Pool_Fire";
  lVar5 = FUN_100431c28(&local_68);
  uVar7 = FUN_1010a1520();
  lVar8 = FUN_1010a0e0c(uVar7,0,"*KindredSoundBalance*",0);
  uVar4 = FUN_1003be168(*(undefined4 *)(lVar8 + 0x158));
  *(char **)(lVar5 + 0x10) = "Sound_Skaarf_Ability_B_Impact";
  *(undefined1 *)(lVar5 + 0x38) = 0xff;
  *(undefined4 *)(lVar5 + 0x34) = uVar4;
  *(uint *)(lVar5 + 0x30) = ((int)lVar5 + 0xfe1b7eb0U >> 3) * 0xca1b & 0xffff;
  *(byte *)(lVar5 + 0x39) = *(byte *)(lVar5 + 0x39) & 0x80 | 0x49;
  return;
}




void FUN_1003fe490(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined4 uVar3;
  undefined1 auStack_48 [24];
  
  uVar1 = FUN_100345d90(*(undefined4 *)(param_1 + 0x308));
  FUN_100450f38(auStack_48,param_1 + 0x98);
  lVar2 = FUN_10043255c(auStack_48);
  uVar3 = FUN_1003dfe60(uVar1,1,7,0x19,0);
  *(undefined4 *)(lVar2 + 0x10) = 2;
  *(undefined4 *)(lVar2 + 0x14) = uVar3;
  FUN_100450f38(auStack_48,param_1 + 0x70);
  FUN_1004354f8(auStack_48);
  return;
}




void FUN_1003fe518(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  long lVar6;
  long lVar7;
  undefined4 uVar8;
  undefined1 auStack_58 [24];
  
  puVar2 = PTR_s_onBuffIntervalName_10185d558;
  if (DAT_101d23a38 != '\0') {
    uVar3 = FUN_1004d2524(PTR_s_onBuffIntervalName_10185d558);
    uVar3 = FUN_100015208(puVar2,uVar3,0x12345678);
    *(undefined4 *)(param_1 + 0xa0 + (ulong)*(uint *)(param_1 + 0x160) * 4) = uVar3;
    uVar1 = *(uint *)(param_1 + 0x160);
    *(code **)(param_1 + 0xe0 + (ulong)uVar1 * 8) = FUN_100449e50;
    *(uint *)(param_1 + 0x160) = uVar1 + 1;
    puVar2 = PTR_s_onEndName_10185d548;
    uVar3 = FUN_1004d2524(PTR_s_onEndName_10185d548);
    uVar3 = FUN_100015208(puVar2,uVar3,0x12345678);
    *(undefined4 *)(param_1 + 0xa0 + (ulong)*(uint *)(param_1 + 0x160) * 4) = uVar3;
    uVar1 = *(uint *)(param_1 + 0x160);
    *(code **)(param_1 + 0xe0 + (ulong)uVar1 * 8) = FUN_10044a174;
    *(uint *)(param_1 + 0x160) = uVar1 + 1;
    uVar3 = FUN_1004d2524("startTime");
    uVar4 = FUN_100015208("startTime",uVar3,0x12345678);
    (**(code **)(*(long *)(param_1 + 0x168) + 8))(param_1 + 0x168,uVar4);
    uVar8 = FUN_100032228();
    uVar3 = FUN_1004d2524("startTime");
    uVar4 = FUN_100015208("startTime",uVar3,0x12345678);
    puVar5 = (undefined4 *)(**(code **)(*(long *)(param_1 + 0x168) + 0x10))(param_1 + 0x168,uVar4);
    *puVar5 = uVar8;
    *(undefined4 *)(param_1 + 0x328) = 0x3e4ccccd;
  }
  FUN_100450f38(auStack_58,param_1 + 0x98);
  lVar6 = FUN_100431ad4(auStack_58);
  *(ushort *)(lVar6 + 0x74) = *(ushort *)(lVar6 + 0x74) & 0xff98 | 0x21;
  *(char **)(lVar6 + 0x10) = "Effect_Hero010_Sucking_Cont";
  lVar6 = FUN_100431c28(auStack_58);
  uVar4 = FUN_1010a1520();
  lVar7 = FUN_1010a0e0c(uVar4,0,"*KindredSoundBalance*",0);
  uVar3 = FUN_1003be168(*(undefined4 *)(lVar7 + 0x15c));
  *(char **)(lVar6 + 0x10) = "Sound_Skaarf_Ability_C_Suck";
  *(undefined1 *)(lVar6 + 0x38) = 0xff;
  *(undefined4 *)(lVar6 + 0x34) = uVar3;
  *(uint *)(lVar6 + 0x30) = ((int)lVar6 + 0xfe1b7eb0U >> 3) * 0xca1b & 0xffff;
  *(byte *)(lVar6 + 0x39) = *(byte *)(lVar6 + 0x39) & 0x80 | 0x49;
  return;
}




void FUN_1003fe724(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  undefined4 uVar10;
  undefined4 local_48 [2];
  
  puVar2 = PTR_s_onBuffIntervalName_10185d558;
  if (DAT_101d23a38 != '\0') {
    uVar3 = FUN_1004d2524(PTR_s_onBuffIntervalName_10185d558);
    uVar3 = FUN_100015208(puVar2,uVar3,0x12345678);
    *(undefined4 *)(param_1 + 0xa0 + (ulong)*(uint *)(param_1 + 0x160) * 4) = uVar3;
    uVar1 = *(uint *)(param_1 + 0x160);
    *(code **)(param_1 + 0xa0 + (ulong)uVar1 * 8 + 0x40) = FUN_10044a2fc;
    *(uint *)(param_1 + 0x160) = uVar1 + 1;
    uVar3 = FUN_1004d2524("startTime");
    uVar5 = FUN_100015208("startTime",uVar3,0x12345678);
    (**(code **)(*(long *)(param_1 + 0x168) + 8))(param_1 + 0x168,uVar5);
    uVar10 = FUN_100032228();
    uVar3 = FUN_1004d2524("startTime");
    uVar5 = FUN_100015208("startTime",uVar3,0x12345678);
    puVar6 = (undefined4 *)(**(code **)(*(long *)(param_1 + 0x168) + 0x10))(param_1 + 0x168,uVar5);
    *puVar6 = uVar10;
    *(undefined4 *)(param_1 + 0x328) = 0x3e4ccccd;
  }
  lVar7 = FUN_10042e2c8(param_1);
  lVar7 = lVar7 + 0x10;
  plVar8 = (long *)FUN_100441e68(lVar7);
  plVar8 = (long *)(**(code **)(*plVar8 + 0x68))(plVar8,"CenterBody");
  (**(code **)(*plVar8 + 0x48))(plVar8,"Effect_Hero010_Blowing_Cont");
  plVar8 = (long *)FUN_10049b7c4(lVar7);
  plVar8 = (long *)(**(code **)(*plVar8 + 0x30))(plVar8,"Sound_Skaarf_Ability_C_Blow");
  uVar5 = FUN_1010a1520();
  lVar9 = FUN_1010a0e0c(uVar5,0,"*KindredSoundBalance*",0);
  FUN_1003be168(*(undefined4 *)(lVar9 + 0x15c));
  (**(code **)(*plVar8 + 0x28))(plVar8);
  lVar9 = FUN_10049b9b4(lVar7);
  *(undefined2 *)(lVar9 + 0x10) = 8;
  plVar8 = (long *)FUN_10049bdb0(lVar7);
  (**(code **)(*plVar8 + 0x30))(plVar8,"Ability03_Exhale");
  FUN_10049d460(lVar7);
  lVar7 = FUN_10049d090(lVar7);
  *(undefined4 *)(lVar7 + 0x28) = 4;
  puVar2 = PTR_s_Buff_Skaarf_Talent_GoopBreath_10185d698;
  lVar7 = *(long *)(*(long *)(param_1 + 0x10) + 0x10);
  lVar9 = *(long *)(*(long *)(lVar7 + 0x58) + 0x58);
  if ((lVar9 != 0) && ((*(byte *)(lVar9 + 0x239) & 0x1c) != 0)) {
    lVar7 = FUN_100345d90(*(undefined4 *)(lVar7 + 0x260));
    if ((lVar7 != 0) && (iVar4 = FUN_1003a47d0(lVar7,puVar2), iVar4 != 0)) {
      lVar7 = FUN_10042e580(param_1);
      local_48[0] = DAT_101d90d14;
      uVar3 = FUN_1003dfee8(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x10),local_48,0,9);
      *(undefined4 *)(lVar7 + 0x40) = uVar3;
      *(byte *)(lVar7 + 0x44) = *(byte *)(lVar7 + 0x44) & 0xfe;
      plVar8 = (long *)FUN_100451bac(lVar7 + 0x10);
      plVar8 = (long *)(**(code **)(*plVar8 + 0x30))(plVar8,PTR_s__SkaarfGoopPool__10185b098,1);
                    /* WARNING: Could not recover jumptable at 0x0001003fe9b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar8 + 0x20))(plVar8,FUN_10044aab0);
      return;
    }
  }
  return;
}




void FUN_1003fe9cc(long param_1)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  undefined1 auStack_50 [24];
  undefined4 local_38 [2];
  
  lVar4 = *(long *)(*(long *)(param_1 + 0x10) + 0x10);
  FUN_100450f38(auStack_50,param_1 + 0x98);
  fVar5 = (float)FUN_1003dfe60(lVar4,2,6,0x19,0);
  puVar1 = PTR_s_Buff_Skaarf_Talent_GoopBreath_10185d698;
  lVar3 = FUN_100345d90(*(undefined4 *)(lVar4 + 0x260));
  if ((lVar3 != 0) && (iVar2 = FUN_1003a47d0(lVar3,puVar1), iVar2 != 0)) {
    local_38[0] = DAT_101d90d14;
    fVar6 = (float)FUN_1003dfee8(lVar4,local_38,1,9);
    fVar5 = fVar6 * fVar5;
  }
  lVar3 = FUN_1004337f4(auStack_50);
  *(undefined4 *)(lVar3 + 0x10) = 5;
  *(float *)(lVar3 + 0x14) = fVar5;
  return;
}




void FUN_1003fea7c(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined4 uVar3;
  undefined1 auStack_48 [24];
  
  uVar1 = FUN_100345d90(*(undefined4 *)(param_1 + 0x308));
  FUN_100450f38(auStack_48,param_1 + 0x98);
  lVar2 = FUN_10043255c(auStack_48);
  uVar3 = FUN_1003dfe60(uVar1,2,7,0x19,0);
  *(undefined4 *)(lVar2 + 0x10) = 1;
  *(undefined4 *)(lVar2 + 0x14) = uVar3;
  FUN_100450f38(auStack_48,param_1 + 0x70);
  FUN_1004354f8(auStack_48);
  return;
}




void FUN_1003feb04(long param_1)

{
  undefined8 uVar1;
  undefined4 local_30 [2];
  undefined4 local_28;
  
  uVar1 = FUN_100345d90(*(undefined4 *)(param_1 + 0x308));
  local_30[0] = FUN_1003dfe60(uVar1,2,8,0x19,0);
  local_28 = 1;
  FUN_10042eb40(param_1,local_30);
  return;
}




void FUN_1003feb5c(void)

{
  long lVar1;
  long *plVar2;
  undefined4 local_30 [2];
  undefined4 local_28;
  
  lVar1 = FUN_10042e2c8();
  plVar2 = (long *)FUN_100430a84(lVar1 + 0x10);
  local_30[0] = 0x40000000;
  local_28 = 1;
  (**(code **)(*plVar2 + 0x30))(plVar2,0x12,1,local_30);
  plVar2 = (long *)FUN_10049bfec(lVar1 + 0x10);
  (**(code **)(*plVar2 + 0x38))();
  return;
}




void FUN_1003febc8(void)

{
  return;
}




void FUN_1003febcc(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  code *local_30;
  undefined4 local_28;
  
  lVar1 = FUN_10042e498();
  FUN_1004386bc(lVar1 + 0x10);
  plVar2 = (long *)FUN_10043ab94(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x40))();
  local_30 = FUN_1004941f8;
  local_28 = 4;
  (**(code **)(*plVar2 + 0x18))(plVar2,&local_30,1,2);
  lVar1 = FUN_10042e3b0(param_1);
  FUN_1004386bc(lVar1 + 0x10);
  plVar2 = (long *)FUN_10043ab94(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x40))();
  local_30 = FUN_1004942a4;
  local_28 = 4;
  (**(code **)(*plVar2 + 0x18))(plVar2,&local_30,1,2);
  return;
}




void FUN_1003fec90(void)

{
  char cVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  char *pcVar6;
  
  lVar3 = FUN_10042e2c8();
  lVar4 = FUN_10049bf40(lVar3 + 0x10);
  if (PTR_s_Ability__Skaarf__Talent_FlashFir_1018591d0 == (undefined *)0x0) {
    uVar5 = 0;
  }
  else {
    uVar5 = 0x811c9dc5;
    cVar1 = *PTR_s_Ability__Skaarf__Talent_FlashFir_1018591d0;
    pcVar6 = PTR_s_Ability__Skaarf__Talent_FlashFir_1018591d0;
    while (cVar1 != '\0') {
      pcVar6 = pcVar6 + 1;
      uVar5 = (uVar5 ^ (int)cVar1) * 0x1000193;
      cVar1 = *pcVar6;
    }
  }
  *(uint *)(lVar4 + 0x20) = uVar5;
  *(code **)(lVar4 + 0x10) = FUN_100494378;
  *(undefined4 *)(lVar4 + 0x18) = 3;
  *(undefined4 *)(lVar4 + 0x28) = 1;
  lVar3 = FUN_100451f64(lVar3 + 0x10);
  puVar2 = PTR_s_Ability__Skaarf__Talent_FlashFir_1018591d0;
  *(undefined **)(lVar3 + 0x10) = PTR_s_Ability__Skaarf__C_1018591b0;
  *(undefined **)(lVar3 + 0x18) = puVar2;
  return;
}




void FUN_1003fed34(void)

{
  char cVar1;
  long lVar2;
  uint uVar3;
  char *pcVar4;
  
  lVar2 = FUN_100433030();
  if (PTR_s_Ability__Skaarf__A_1018591a0 == (undefined *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = 0x811c9dc5;
    cVar1 = *PTR_s_Ability__Skaarf__A_1018591a0;
    pcVar4 = PTR_s_Ability__Skaarf__A_1018591a0;
    while (cVar1 != '\0') {
      pcVar4 = pcVar4 + 1;
      uVar3 = (uVar3 ^ (int)cVar1) * 0x1000193;
      cVar1 = *pcVar4;
    }
  }
  *(uint *)(lVar2 + 0x28) = uVar3;
  lVar2 = FUN_10049da9c(lVar2 + 0x10);
  *(undefined **)(lVar2 + 0x10) = PTR_s_Ability__Skaarf__A_1018591a0;
  *(code **)(lVar2 + 0x18) = FUN_1004943ac;
  *(undefined4 *)(lVar2 + 0x20) = 3;
  *(undefined4 *)(lVar2 + 0x2c) = 1;
  return;
}




void FUN_1003fedc0(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined4 local_40 [2];
  undefined4 local_38;
  
  lVar1 = FUN_10042e498();
  plVar2 = (long *)FUN_100441e18(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x38))(plVar2,"Sound_Taka_BladesOn");
  uVar3 = FUN_1010a1520();
  lVar1 = FUN_1010a0e0c(uVar3,0,"*KindredSoundBalance*",0);
  FUN_1003bf378(*(undefined4 *)(lVar1 + 0x138));
  (**(code **)(*plVar2 + 0x28))(plVar2);
  lVar1 = FUN_10042e2c8(param_1);
  lVar1 = lVar1 + 0x10;
  plVar2 = (long *)FUN_100441e68(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,"Bone_LeftHand");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Taka_Mortal_Buff");
  (**(code **)(*plVar2 + 0x88))(plVar2,1);
  plVar2 = (long *)FUN_100441e68(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,"Bone_RightHand");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Taka_Mortal_Buff");
  (**(code **)(*plVar2 + 0x88))(plVar2,1);
  plVar2 = (long *)FUN_100441e68(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,"Bone_LBlade");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Taka_Mortal_Buff_S2_L");
  (**(code **)(*plVar2 + 0x88))(plVar2,1);
  plVar2 = (long *)FUN_100441e68(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,"Bone_RBlade");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Taka_Mortal_Buff_S2_R");
  (**(code **)(*plVar2 + 0x88))(plVar2,1);
  plVar2 = (long *)FUN_10049d7bc(lVar1);
  (**(code **)(*plVar2 + 0x30))
            (plVar2,PTR_s_Ability__Taka__DefaultAttack_1018591d8,
             PTR_s_Ability__Taka__MortalStrike_1018591f0,1);
  plVar2 = (long *)FUN_10049d7bc(lVar1);
  (**(code **)(*plVar2 + 0x30))
            (plVar2,PTR_s_Ability__Taka__AltAttack_1018591e0,
             PTR_s_Ability__Taka__MortalStrike_1018591f0,1);
  plVar2 = (long *)FUN_10049d7bc(lVar1);
  (**(code **)(*plVar2 + 0x30))
            (plVar2,PTR_s_Ability__Taka__CritAttack_1018591e8,
             PTR_s_Ability__Taka__MortalStrike_Crit_1018591f8,1);
  lVar1 = FUN_10042fdc4(param_1);
  plVar2 = (long *)FUN_100433e34(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))
                             (plVar2,PTR_s_Buff_Taka_HeroicPerk_Ki_Control_10185c858);
  local_40[0] = 0x3f800000;
  local_38 = 1;
  (**(code **)(*plVar2 + 0x18))(plVar2,local_40);
  return;
}




void FUN_1003ff004(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  undefined4 local_30 [2];
  undefined4 local_28;
  
  lVar1 = FUN_10042e2c8();
  plVar2 = (long *)FUN_10049bef0(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))(plVar2,"u_ambient_T3");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x38))(0x3f800000);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x38))(0x3f800000);
  (**(code **)(*plVar2 + 0x38))(0x3f800000);
  plVar2 = (long *)FUN_100441e68(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x60))();
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Taka_Ki_Aura");
  (**(code **)(*plVar2 + 0x88))(plVar2,0);
  lVar1 = FUN_10042fdc4(param_1);
  plVar2 = (long *)FUN_100441e68(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x60))();
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Taka_Ki_Aura_End");
  local_30[0] = 0x3f800000;
  local_28 = 1;
  plVar2 = (long *)(**(code **)(*plVar2 + 0x60))(plVar2,local_30);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,1);
  (**(code **)(*plVar2 + 0x88))(plVar2,0);
  return;
}




void FUN_1003ff124(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  long lVar4;
  long *plVar5;
  
  puVar2 = PTR_s_onBeforeReApplyName_10185d588;
  uVar3 = FUN_1004d2524(PTR_s_onBeforeReApplyName_10185d588);
  uVar3 = FUN_100015208(puVar2,uVar3,0x12345678);
  *(undefined4 *)(param_1 + 0xa0 + (ulong)*(uint *)(param_1 + 0x160) * 4) = uVar3;
  uVar1 = *(uint *)(param_1 + 0x160);
  *(code **)(param_1 + 0xe0 + (ulong)uVar1 * 8) = FUN_10044c56c;
  *(uint *)(param_1 + 0x160) = uVar1 + 1;
  puVar2 = PTR_s_onTimeoutName_10185d538;
  uVar3 = FUN_1004d2524(PTR_s_onTimeoutName_10185d538);
  uVar3 = FUN_100015208(puVar2,uVar3,0x12345678);
  *(undefined4 *)(param_1 + 0xa0 + (ulong)*(uint *)(param_1 + 0x160) * 4) = uVar3;
  uVar1 = *(uint *)(param_1 + 0x160);
  *(code **)(param_1 + 0xe0 + (ulong)uVar1 * 8) = FUN_10044c790;
  *(uint *)(param_1 + 0x160) = uVar1 + 1;
  *(code **)(param_1 + 0x330) = FUN_100437424;
  *(uint *)(param_1 + 0x340) = *(uint *)(param_1 + 0x340) | 0x400;
  lVar4 = FUN_10042e498(param_1);
  plVar5 = (long *)FUN_100433e34(lVar4 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x0001003ff20c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar5 + 0x30))(plVar5,PTR_s_Buff_Taka_HeroicPerk_Ki_10185b108);
  return;
}




void FUN_1003ff210(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  char cVar4;
  uint uVar5;
  char *pcVar6;
  uint uVar7;
  
  uVar7 = 0x811c9dc5;
  lVar1 = FUN_1004328a0();
  *(undefined1 *)(lVar1 + 0x28) = 1;
  plVar2 = (long *)FUN_100433e34(lVar1 + 0x10);
  (**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_Taka_HeroicPerk_ShowMaxKiSt_10185c850);
  lVar1 = FUN_10043099c(param_1);
  lVar1 = lVar1 + 0x10;
  lVar3 = FUN_10049bf40(lVar1);
  if (PTR_s_Ability__Taka__A_101859200 == (undefined *)0x0) {
    uVar5 = 0;
  }
  else {
    cVar4 = *PTR_s_Ability__Taka__A_101859200;
    uVar5 = 0x811c9dc5;
    if (cVar4 != '\0') {
      uVar5 = 0x811c9dc5;
      pcVar6 = PTR_s_Ability__Taka__A_101859200;
      do {
        pcVar6 = pcVar6 + 1;
        uVar5 = (uVar5 ^ (int)cVar4) * 0x1000193;
        cVar4 = *pcVar6;
      } while (cVar4 != '\0');
    }
  }
  *(uint *)(lVar3 + 0x20) = uVar5;
  *(code **)(lVar3 + 0x10) = FUN_10044cc38;
  *(undefined4 *)(lVar3 + 0x18) = 4;
  *(undefined4 *)(lVar3 + 0x28) = 1;
  lVar3 = FUN_10049bf40(lVar1);
  if (PTR_s_Ability__Taka__B_101859208 == (undefined *)0x0) {
    uVar7 = 0;
  }
  else {
    cVar4 = *PTR_s_Ability__Taka__B_101859208;
    pcVar6 = PTR_s_Ability__Taka__B_101859208;
    while (cVar4 != '\0') {
      pcVar6 = pcVar6 + 1;
      uVar7 = (uVar7 ^ (int)cVar4) * 0x1000193;
      cVar4 = *pcVar6;
    }
  }
  *(uint *)(lVar3 + 0x20) = uVar7;
  *(code **)(lVar3 + 0x10) = FUN_10044cc38;
  *(undefined4 *)(lVar3 + 0x18) = 4;
  *(undefined4 *)(lVar3 + 0x28) = 1;
  lVar1 = FUN_10049bf40(lVar1);
  *(undefined4 *)(lVar1 + 0x20) = 0x44d21b88;
  *(code **)(lVar1 + 0x10) = FUN_10044cc38;
  *(undefined4 *)(lVar1 + 0x18) = 4;
  *(undefined4 *)(lVar1 + 0x28) = 1;
  lVar1 = FUN_10042e3b0(param_1);
  FUN_10049b814(lVar1 + 0x10);
  return;
}




void FUN_1003ff36c(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined4 local_50 [2];
  undefined4 local_48;
  undefined4 local_40 [2];
  undefined4 local_38;
  
  puVar2 = PTR_s_onPreCalculateDamageExchangeName_10185d520;
  if (DAT_101d23a38 != '\0') {
    uVar3 = FUN_1004d2524(PTR_s_onPreCalculateDamageExchangeName_10185d520);
    uVar3 = FUN_100015208(puVar2,uVar3,0x12345678);
    *(undefined4 *)(param_1 + 0xa0 + (ulong)*(uint *)(param_1 + 0x160) * 4) = uVar3;
    uVar1 = *(uint *)(param_1 + 0x160);
    *(code **)(param_1 + 0xa0 + (ulong)uVar1 * 8 + 0x40) = FUN_10044c86c;
    *(uint *)(param_1 + 0x160) = uVar1 + 1;
    *(float *)(param_1 + 800) = *(float *)(param_1 + 800) + *(float *)(param_1 + 0x328);
    *(uint *)(param_1 + 0x340) = *(uint *)(param_1 + 0x340) | 0x100;
  }
  lVar4 = FUN_10042e580(param_1);
  *(undefined4 *)(lVar4 + 0x40) = 0x3f000000;
  *(byte *)(lVar4 + 0x44) = *(byte *)(lVar4 + 0x44) & 0xfe;
  FUN_1004386bc(lVar4 + 0x10);
  plVar5 = (long *)FUN_10043ab94(lVar4 + 0x10);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x40))();
  (**(code **)(*plVar5 + 0x38))(plVar5,"WoundDamagePerSecond",2);
  lVar4 = FUN_10042e498(param_1);
  plVar5 = (long *)FUN_100433e34(lVar4 + 0x10);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x30))(plVar5,DAT_10185a468);
  local_40[0] = *(undefined4 *)(param_1 + 0x31c);
  local_38 = 1;
  (**(code **)(*plVar5 + 0x18))(plVar5,local_40);
  lVar4 = FUN_10042e3b0(param_1);
  FUN_10049b814(lVar4 + 0x10);
  plVar5 = (long *)FUN_100433e34(lVar4 + 0x10);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x30))(plVar5,DAT_10185a468);
  local_40[0] = *(undefined4 *)(param_1 + 0x31c);
  local_38 = 1;
  plVar5 = (long *)(**(code **)(*plVar5 + 0x18))(plVar5,local_40);
  local_50[0] = 0;
  local_48 = 1;
  (**(code **)(*plVar5 + 0x20))(plVar5,local_50);
  lVar4 = FUN_10042e2c8(param_1);
  plVar5 = (long *)FUN_10049b7c4(lVar4 + 0x10);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x30))(plVar5,"Sounds_Taka_Perk");
  uVar6 = FUN_1010a1520();
  lVar4 = FUN_1010a0e0c(uVar6,0,"*KindredSoundBalance*",0);
  FUN_1003bf378(*(undefined4 *)(lVar4 + 0x138));
  (**(code **)(*plVar5 + 0x28))(plVar5);
  return;
}




void FUN_1003ff55c(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  
  lVar1 = FUN_10042e2c8();
  lVar1 = lVar1 + 0x10;
  lVar2 = FUN_10049be00(lVar1);
  *(undefined4 *)(lVar2 + 0x58) = 1;
  *(code **)(lVar2 + 0x10) = FUN_10044c9f8;
  *(undefined4 *)(lVar2 + 0x18) = 3;
  plVar3 = (long *)FUN_10049ba04(lVar1);
  (**(code **)(*plVar3 + 0x30))(plVar3,"Move","KiRun");
  plVar3 = (long *)FUN_10049ba04(lVar1);
  (**(code **)(*plVar3 + 0x30))(plVar3,"MoveStart","KiRun");
  plVar3 = (long *)FUN_10049ba04(lVar1);
  (**(code **)(*plVar3 + 0x30))(plVar3,"MoveStartCombat","KiRun");
  lVar1 = FUN_10042e3b0(param_1);
  FUN_10049b814(lVar1 + 0x10);
  return;
}




void FUN_1003ff620(long param_1)

{
  char cVar1;
  undefined *puVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  undefined8 *puVar10;
  uint uVar11;
  char *pcVar12;
  undefined8 uVar13;
  undefined4 uVar14;
  float fVar15;
  float fVar16;
  float local_80 [2];
  undefined4 local_78;
  
  uVar13 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x10);
  uVar3 = FUN_1003a47d0(uVar13,PTR_s_Buff_Taka_Talent_ProtectiveDecoy_10185c860);
  if (DAT_101d23a38 != '\0') {
    uVar14 = FUN_100032228();
    puVar2 = PTR_s_pBuffVar_Taka_SmokeBombInvisibil_10185d6b8;
    uVar4 = FUN_1004d2524(PTR_s_pBuffVar_Taka_SmokeBombInvisibil_10185d6b8);
    uVar5 = FUN_100015208(puVar2,uVar4,0x12345678);
    uVar5 = (**(code **)(*(long *)(param_1 + 0x168) + 8))(param_1 + 0x168,uVar5);
    puVar6 = (undefined4 *)(**(code **)(*(long *)(param_1 + 0x168) + 0x10))(param_1 + 0x168,uVar5);
    *puVar6 = uVar14;
    puVar2 = PTR_s_onPreCalculateDamageExchangeName_10185d520;
    uVar4 = FUN_1004d2524(PTR_s_onPreCalculateDamageExchangeName_10185d520);
    uVar4 = FUN_100015208(puVar2,uVar4,0x12345678);
    *(undefined4 *)(param_1 + 0xa0 + (ulong)*(uint *)(param_1 + 0x160) * 4) = uVar4;
    uVar11 = *(uint *)(param_1 + 0x160);
    *(code **)(param_1 + 0xa0 + (ulong)uVar11 * 8 + 0x40) = FUN_10044ca38;
    *(uint *)(param_1 + 0x160) = uVar11 + 1;
  }
  lVar7 = FUN_10042e498(param_1);
  plVar8 = (long *)FUN_100441e68(lVar7 + 0x10);
  plVar8 = (long *)(**(code **)(*plVar8 + 0x98))(plVar8,4);
  plVar8 = (long *)(**(code **)(*plVar8 + 0x60))();
  plVar8 = (long *)(**(code **)(*plVar8 + 0x48))(plVar8,"Effect_Taka_SmokeBomb");
  (**(code **)(*plVar8 + 0x80))(plVar8,0);
  plVar8 = (long *)FUN_100441e18(lVar7 + 0x10);
  plVar8 = (long *)(**(code **)(*plVar8 + 0x38))(plVar8,"Sound_Taka_Abilty_2_Start");
  uVar5 = FUN_1010a1520();
  lVar7 = FUN_1010a0e0c(uVar5,0,"*KindredSoundBalance*",0);
  FUN_1003bf378(*(undefined4 *)(lVar7 + 0x144));
  (**(code **)(*plVar8 + 0x28))(plVar8);
  lVar7 = FUN_10042e2c8(param_1);
  lVar7 = lVar7 + 0x10;
  plVar8 = (long *)FUN_100441e68(lVar7);
  plVar8 = (long *)(**(code **)(*plVar8 + 0x60))();
  (**(code **)(*plVar8 + 0x48))(plVar8,"Effect_Taka_SmokeBomb_Trail");
  plVar8 = (long *)FUN_10049ba04(lVar7);
  (**(code **)(*plVar8 + 0x30))(plVar8,"Idle","IdleBox");
  plVar8 = (long *)FUN_10049ba04(lVar7);
  (**(code **)(*plVar8 + 0x30))(plVar8,"Move","MoveBox");
  plVar8 = (long *)FUN_10049ba04(lVar7);
  (**(code **)(*plVar8 + 0x30))(plVar8,"MoveStart","MoveBox_Start");
  plVar8 = (long *)FUN_10049ba04(lVar7);
  (**(code **)(*plVar8 + 0x30))(plVar8,"MoveStop","MoveBox_Stop");
  plVar8 = (long *)FUN_10049ba04(lVar7);
  (**(code **)(*plVar8 + 0x30))(plVar8,"Sprint","MoveBox");
  plVar8 = (long *)FUN_10049ba04(lVar7);
  (**(code **)(*plVar8 + 0x30))(plVar8,"IdleCombat","IdleBox");
  plVar8 = (long *)FUN_10049ba04(lVar7);
  (**(code **)(*plVar8 + 0x30))(plVar8,"MoveCombat","MoveBox");
  plVar8 = (long *)FUN_10049ba04(lVar7);
  (**(code **)(*plVar8 + 0x30))(plVar8,"MoveStartCombat","MoveBox_Start");
  plVar8 = (long *)FUN_10049ba04(lVar7);
  (**(code **)(*plVar8 + 0x30))(plVar8,"MoveStopCombat","MoveBox_Stop");
  plVar8 = (long *)FUN_10049ba04(lVar7);
  (**(code **)(*plVar8 + 0x30))(plVar8,"MoveSheath","MoveBox");
  plVar8 = (long *)FUN_10049ba04(lVar7);
  (**(code **)(*plVar8 + 0x30))(plVar8,"IdleSheath","IdleBox");
  lVar9 = FUN_10049be00(lVar7);
  *(undefined4 *)(lVar9 + 0x58) = 1;
  *(code **)(lVar9 + 0x10) = FUN_10044cb38;
  *(undefined4 *)(lVar9 + 0x18) = 3;
  FUN_10049c460(lVar7);
  plVar8 = (long *)FUN_10049c148(lVar7);
  (**(code **)(*plVar8 + 0x30))(plVar8,0xf);
  lVar7 = FUN_10044cb4c(param_1);
  if (PTR_s_Ability__Taka__B_101859208 == (undefined *)0x0) {
    uVar11 = 0;
  }
  else {
    uVar11 = 0x811c9dc5;
    cVar1 = *PTR_s_Ability__Taka__B_101859208;
    pcVar12 = PTR_s_Ability__Taka__B_101859208;
    while (cVar1 != '\0') {
      pcVar12 = pcVar12 + 1;
      uVar11 = (uVar11 ^ (int)cVar1) * 0x1000193;
      cVar1 = *pcVar12;
    }
  }
  *(uint *)(lVar7 + 0x28) = uVar11;
  FUN_1004385f0(lVar7 + 0x10);
  lVar7 = FUN_10042fdc4(param_1);
  lVar7 = lVar7 + 0x10;
  plVar8 = (long *)FUN_100441e68(lVar7);
  plVar8 = (long *)(**(code **)(*plVar8 + 0x60))();
  plVar8 = (long *)(**(code **)(*plVar8 + 0x48))(plVar8,"Effect_Taka_SmokeBomb_Reveal");
  (**(code **)(*plVar8 + 0x78))(plVar8,1);
  plVar8 = (long *)FUN_100441e18(lVar7);
  plVar8 = (long *)(**(code **)(*plVar8 + 0x38))(plVar8,"Sound_Taka_Abilty_2_End");
  uVar5 = FUN_1010a1520();
  lVar9 = FUN_1010a0e0c(uVar5,0,"*KindredSoundBalance*",0);
  FUN_1003bf378(*(undefined4 *)(lVar9 + 0x144));
  (**(code **)(*plVar8 + 0x28))(plVar8);
  plVar8 = (long *)FUN_100452858(lVar7);
  puVar10 = (undefined8 *)(**(code **)(*plVar8 + 0x30))();
  (**(code **)*puVar10)(puVar10,PTR_s_Ability__Taka__B_101859208);
  if ((DAT_101d23a38 != '\0') && (((uVar3 ^ 1) & 1) == 0)) {
    local_80[0] = DAT_101d90d68;
    fVar15 = (float)FUN_1003dfee8(uVar13,local_80,2,9);
    local_80[0] = DAT_101d90d68;
    fVar16 = (float)FUN_1003dfee8(uVar13,local_80,3,9);
    lVar7 = FUN_10042e580(param_1);
    *(undefined4 *)(lVar7 + 0x40) = 0x3f000000;
    *(byte *)(lVar7 + 0x44) = *(byte *)(lVar7 + 0x44) | 1;
    FUN_1004386bc(lVar7 + 0x10);
    plVar8 = (long *)FUN_10043aa54(lVar7 + 0x10);
    local_78 = 1;
    local_80[0] = fVar15 * 0.5 * fVar16;
    (**(code **)(*plVar8 + 0x30))(plVar8,local_80);
  }
  return;
}




void FUN_1003ffb8c(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  
  FUN_10042ebc4(param_1,0);
  lVar1 = FUN_10042e498(param_1);
  plVar2 = (long *)FUN_1004385a0(lVar1 + 0x10);
  (**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_Taka_SmokeBombInvisibility_10185b128);
  lVar1 = FUN_10042e2c8(param_1);
  plVar2 = (long *)FUN_100441e68(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x60))();
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Taka_Recall_Smoke");
  (**(code **)(*plVar2 + 0xb0))(plVar2,1);
  lVar1 = FUN_1004303b0(param_1);
  plVar2 = (long *)FUN_100441e68(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x60))();
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Taka_Recall_Smoke_Landing");
                    /* WARNING: Could not recover jumptable at 0x0001003ffc4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x78))(plVar2,1);
  return;
}




void FUN_1003ffc50(void)

{
  long lVar1;
  long *plVar2;
  code *local_20;
  undefined4 local_18;
  
  lVar1 = FUN_10042e694();
  *(ushort *)(lVar1 + 0x48) = *(ushort *)(lVar1 + 0x48) | 8;
  *(byte *)(lVar1 + 0x60) = *(byte *)(lVar1 + 0x60) & 0xfc | 1;
  *(undefined4 *)(lVar1 + 0x40) = 0xf1cf7d9f;
  plVar2 = (long *)FUN_10043187c(lVar1 + 0x10);
  local_20 = FUN_10049451c;
  local_18 = 3;
  (**(code **)(*plVar2 + 0x30))(plVar2,&local_20);
  return;
}




void FUN_1003ffcc0(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  uint uVar3;
  char cVar4;
  char *pcVar5;
  uint uVar6;
  code *local_50;
  undefined4 local_48;
  
  uVar6 = 0x811c9dc5;
  lVar1 = FUN_100433030();
  if (PTR_s_Ability__Taka__B_101859208 == (undefined *)0x0) {
    uVar3 = 0;
  }
  else {
    cVar4 = *PTR_s_Ability__Taka__B_101859208;
    uVar3 = 0x811c9dc5;
    if (cVar4 != '\0') {
      uVar3 = 0x811c9dc5;
      pcVar5 = PTR_s_Ability__Taka__B_101859208;
      do {
        pcVar5 = pcVar5 + 1;
        uVar3 = (uVar3 ^ (int)cVar4) * 0x1000193;
        cVar4 = *pcVar5;
      } while (cVar4 != '\0');
    }
  }
  *(uint *)(lVar1 + 0x28) = uVar3;
  lVar1 = FUN_10049bf40(lVar1 + 0x10);
  if (PTR_s_Ability__Taka__B_101859208 == (undefined *)0x0) {
    uVar3 = 0;
  }
  else {
    cVar4 = *PTR_s_Ability__Taka__B_101859208;
    uVar3 = 0x811c9dc5;
    if (cVar4 != '\0') {
      uVar3 = 0x811c9dc5;
      pcVar5 = PTR_s_Ability__Taka__B_101859208;
      do {
        pcVar5 = pcVar5 + 1;
        uVar3 = (uVar3 ^ (int)cVar4) * 0x1000193;
        cVar4 = *pcVar5;
      } while (cVar4 != '\0');
    }
  }
  *(uint *)(lVar1 + 0x20) = uVar3;
  *(code **)(lVar1 + 0x10) = FUN_100494550;
  *(undefined4 *)(lVar1 + 0x18) = 3;
  *(undefined4 *)(lVar1 + 0x28) = 1;
  lVar1 = FUN_100433910(param_1);
  if (PTR_s_Ability__Taka__B_101859208 == (undefined *)0x0) {
    uVar6 = 0;
  }
  else {
    cVar4 = *PTR_s_Ability__Taka__B_101859208;
    pcVar5 = PTR_s_Ability__Taka__B_101859208;
    while (cVar4 != '\0') {
      pcVar5 = pcVar5 + 1;
      uVar6 = (uVar6 ^ (int)cVar4) * 0x1000193;
      cVar4 = *pcVar5;
    }
  }
  *(uint *)(lVar1 + 0x28) = uVar6;
  *(byte *)(lVar1 + 0x38) = *(byte *)(lVar1 + 0x38) & 0xfb;
  plVar2 = (long *)FUN_100433e34(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))
                             (plVar2,PTR_s_Buff_Taka_Talent_ProtectiveDecoy_10185c868);
  local_50 = FUN_10044ca04;
  local_48 = 3;
  (**(code **)(*plVar2 + 0x18))(plVar2,&local_50);
  return;
}




void FUN_1003ffe3c(void)

{
  long lVar1;
  
  lVar1 = FUN_10042e2c8();
  lVar1 = FUN_10049b9b4(lVar1 + 0x10);
  *(undefined2 *)(lVar1 + 0x10) = 0x200;
  return;
}




void FUN_1003ffe60(undefined8 param_1)

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
  if (PTR_s_Ability__Taka__A_101859200 == (undefined *)0x0) {
    uVar4 = 0;
  }
  else {
    cVar3 = *PTR_s_Ability__Taka__A_101859200;
    uVar4 = 0x811c9dc5;
    if (cVar3 != '\0') {
      uVar4 = 0x811c9dc5;
      pcVar5 = PTR_s_Ability__Taka__A_101859200;
      do {
        pcVar5 = pcVar5 + 1;
        uVar4 = (uVar4 ^ (int)cVar3) * 0x1000193;
        cVar3 = *pcVar5;
      } while (cVar3 != '\0');
    }
  }
  *(uint *)(lVar1 + 0x28) = uVar4;
  lVar1 = FUN_10049da9c(lVar1 + 0x10);
  *(undefined **)(lVar1 + 0x10) = PTR_s_Ability__Taka__A_101859200;
  *(code **)(lVar1 + 0x18) = FUN_100494584;
  *(undefined4 *)(lVar1 + 0x20) = 3;
  *(undefined4 *)(lVar1 + 0x2c) = 0;
  lVar1 = FUN_10042e694(param_1);
  *(ushort *)(lVar1 + 0x48) = *(ushort *)(lVar1 + 0x48) | 8;
  *(byte *)(lVar1 + 0x60) = *(byte *)(lVar1 + 0x60) & 0xfc | 1;
  if (PTR_s_Ability__Taka__A_101859200 == (undefined *)0x0) {
    uVar6 = 0;
  }
  else {
    cVar3 = *PTR_s_Ability__Taka__A_101859200;
    pcVar5 = PTR_s_Ability__Taka__A_101859200;
    while (cVar3 != '\0') {
      pcVar5 = pcVar5 + 1;
      uVar6 = (uVar6 ^ (int)cVar3) * 0x1000193;
      cVar3 = *pcVar5;
    }
  }
  *(uint *)(lVar1 + 0x40) = uVar6;
  plVar2 = (long *)FUN_10043187c(lVar1 + 0x10);
  local_40 = FUN_1004945b8;
  local_38 = 3;
  (**(code **)(*plVar2 + 0x30))(plVar2,&local_40);
  return;
}




void FUN_1003fff94(long param_1)

{
  char cVar1;
  undefined *puVar2;
  undefined4 uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  uint uVar7;
  char *pcVar8;
  code *local_40;
  undefined4 local_38;
  
  puVar2 = PTR_s_onAfterApplyDamageName_10185d578;
  if (DAT_101d23a38 != '\0') {
    uVar3 = FUN_1004d2524(PTR_s_onAfterApplyDamageName_10185d578);
    uVar3 = FUN_100015208(puVar2,uVar3,0x12345678);
    *(undefined4 *)(param_1 + 0xa0 + (ulong)*(uint *)(param_1 + 0x160) * 4) = uVar3;
    uVar7 = *(uint *)(param_1 + 0x160);
    *(code **)(param_1 + 0xe0 + (ulong)uVar7 * 8) = FUN_10043121c;
    *(uint *)(param_1 + 0x160) = uVar7 + 1;
    puVar2 = PTR_s_onBuffIntervalName_10185d558;
    uVar3 = FUN_1004d2524(PTR_s_onBuffIntervalName_10185d558);
    uVar3 = FUN_100015208(puVar2,uVar3,0x12345678);
    *(undefined4 *)(param_1 + 0xa0 + (ulong)*(uint *)(param_1 + 0x160) * 4) = uVar3;
    uVar7 = *(uint *)(param_1 + 0x160);
    *(code **)(param_1 + 0xe0 + (ulong)uVar7 * 8) = FUN_100431444;
    *(uint *)(param_1 + 0x160) = uVar7 + 1;
    *(undefined4 *)(param_1 + 0x328) = 0x3dcccccd;
  }
  lVar4 = FUN_100431764(param_1);
  *(undefined4 *)(lVar4 + 0x40) = 0x3f800000;
  *(byte *)(lVar4 + 0x44) = *(byte *)(lVar4 + 0x44) & 0xfe;
  plVar5 = (long *)FUN_100430a84(lVar4 + 0x10);
  local_40 = FUN_1004316ac;
  local_38 = 4;
  (**(code **)(*plVar5 + 0x30))(plVar5,5,1,&local_40);
  lVar4 = FUN_10042e694(param_1);
  *(ushort *)(lVar4 + 0x48) = *(ushort *)(lVar4 + 0x48) | 8;
  *(byte *)(lVar4 + 0x60) = *(byte *)(lVar4 + 0x60) & 0xfc | 1;
  *(undefined4 *)(lVar4 + 0x40) = 0xd875fe29;
  lVar4 = FUN_10043fc08(lVar4 + 0x10);
  lVar6 = FUN_10049bb94(lVar4 + 0x10);
  if (PTR_s_Ability__Ardan__B_101859250 == (undefined *)0x0) {
    uVar7 = 0;
  }
  else {
    uVar7 = 0x811c9dc5;
    cVar1 = *PTR_s_Ability__Ardan__B_101859250;
    pcVar8 = PTR_s_Ability__Ardan__B_101859250;
    while (cVar1 != '\0') {
      pcVar8 = pcVar8 + 1;
      uVar7 = (uVar7 ^ (int)cVar1) * 0x1000193;
      cVar1 = *pcVar8;
    }
  }
  *(uint *)(lVar6 + 8) = uVar7;
  plVar5 = (long *)FUN_10043187c(lVar4 + 0x88);
  local_40 = FUN_1004318cc;
  local_38 = 3;
  (**(code **)(*plVar5 + 0x38))(plVar5,&local_40);
  return;
}

