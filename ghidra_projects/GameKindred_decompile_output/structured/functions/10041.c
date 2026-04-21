// functions/10041 — 289 functions
#include "GameKindred.h"




void FUN_10041013c(void)

{
  long lVar1;
  long *plVar2;
  code *local_20;
  undefined4 local_18;
  
  lVar1 = FUN_1004303b0();
  plVar2 = (long *)FUN_10043d6ac(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Ability__Phinn__C_101859478);
  local_20 = FUN_100436f10;
  local_18 = 4;
  (**(code **)(*plVar2 + 0x20))(plVar2,&local_20);
  return;
}




void FUN_100410198(void)

{
  return;
}




void FUN_10041019c(void)

{
  return;
}




void FUN_1004101a0(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  long lVar4;
  undefined1 auStack_38 [24];
  
  puVar2 = PTR_s_onBeforeApplyDamageName_10185d570;
  uVar3 = FUN_1004d2524(PTR_s_onBeforeApplyDamageName_10185d570);
  uVar3 = FUN_100015208(puVar2,uVar3,0x12345678);
  *(undefined4 *)(param_1 + 0xa0 + (ulong)*(uint *)(param_1 + 0x160) * 4) = uVar3;
  uVar1 = *(uint *)(param_1 + 0x160);
  *(code **)(param_1 + 0xa0 + (ulong)uVar1 * 8 + 0x40) = FUN_100493d38;
  *(uint *)(param_1 + 0x160) = uVar1 + 1;
  *(undefined4 *)(param_1 + 0x328) = 0x3f800000;
  FUN_100450f38(auStack_38,param_1 + 0x90);
  lVar4 = FUN_1004355d8(auStack_38);
  *(code **)(lVar4 + 0x18) = FUN_100493da8;
  return;
}




void FUN_100410238(undefined8 param_1)

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
  if (PTR_s_Ability__Phinn__A_101859468 == (undefined *)0x0) {
    uVar4 = 0;
  }
  else {
    cVar5 = *PTR_s_Ability__Phinn__A_101859468;
    uVar4 = 0x811c9dc5;
    if (cVar5 != '\0') {
      uVar4 = 0x811c9dc5;
      pcVar6 = PTR_s_Ability__Phinn__A_101859468;
      do {
        pcVar6 = pcVar6 + 1;
        uVar4 = (uVar4 ^ (int)cVar5) * 0x1000193;
        cVar5 = *pcVar6;
      } while (cVar5 != '\0');
    }
  }
  *(uint *)(lVar1 + 0x28) = uVar4;
  lVar2 = FUN_10049d0e0(lVar1 + 0x10);
  *(undefined **)(lVar2 + 0x10) = PTR_s_Ability__Phinn__A_101859468;
  *(code **)(lVar2 + 0x18) = FUN_100493cbc;
  *(undefined4 *)(lVar2 + 0x20) = 4;
  *(byte *)(lVar2 + 0x2c) = *(byte *)(lVar2 + 0x2c) | 4;
  *(undefined4 *)(lVar2 + 0x28) = 0x3f800000;
  lVar1 = FUN_10049d0e0(lVar1 + 0x10);
  *(undefined **)(lVar1 + 0x10) = PTR_s_Ability__Phinn__B_101859470;
  *(code **)(lVar1 + 0x18) = FUN_100493cbc;
  *(undefined4 *)(lVar1 + 0x20) = 4;
  *(byte *)(lVar1 + 0x2c) = *(byte *)(lVar1 + 0x2c) | 4;
  *(undefined4 *)(lVar1 + 0x28) = 0x3f800000;
  lVar1 = FUN_10042e694(param_1);
  *(ushort *)(lVar1 + 0x48) = *(ushort *)(lVar1 + 0x48) | 0x10;
  *(byte *)(lVar1 + 0x60) = *(byte *)(lVar1 + 0x60) & 0xfc | 1;
  if (PTR_s_Ability__Phinn__A_101859468 == (undefined *)0x0) {
    uVar4 = 0;
  }
  else {
    cVar5 = *PTR_s_Ability__Phinn__A_101859468;
    uVar4 = 0x811c9dc5;
    if (cVar5 != '\0') {
      uVar4 = 0x811c9dc5;
      pcVar6 = PTR_s_Ability__Phinn__A_101859468;
      do {
        pcVar6 = pcVar6 + 1;
        uVar4 = (uVar4 ^ (int)cVar5) * 0x1000193;
        cVar5 = *pcVar6;
      } while (cVar5 != '\0');
    }
  }
  *(uint *)(lVar1 + 0x40) = uVar4;
  plVar3 = (long *)FUN_10043187c(lVar1 + 0x10);
  local_60 = FUN_100493d04;
  local_58 = 3;
  (**(code **)(*plVar3 + 0x30))(plVar3,&local_60);
  lVar1 = FUN_10042e694(param_1);
  *(ushort *)(lVar1 + 0x48) = *(ushort *)(lVar1 + 0x48) | 0x10;
  *(byte *)(lVar1 + 0x60) = *(byte *)(lVar1 + 0x60) & 0xfc | 1;
  if (PTR_s_Ability__Phinn__B_101859470 == (undefined *)0x0) {
    uVar7 = 0;
  }
  else {
    cVar5 = *PTR_s_Ability__Phinn__B_101859470;
    pcVar6 = PTR_s_Ability__Phinn__B_101859470;
    while (cVar5 != '\0') {
      pcVar6 = pcVar6 + 1;
      uVar7 = (uVar7 ^ (int)cVar5) * 0x1000193;
      cVar5 = *pcVar6;
    }
  }
  *(uint *)(lVar1 + 0x40) = uVar7;
  plVar3 = (long *)FUN_10043187c(lVar1 + 0x10);
  local_60 = FUN_100493d04;
  local_58 = 3;
  (**(code **)(*plVar3 + 0x30))(plVar3,&local_60);
  return;
}




void FUN_10041043c(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  undefined1 auStack_48 [24];
  
  lVar5 = *(long *)(*(long *)(param_1 + 0x10) + 0x10);
  *(undefined4 *)(param_1 + 0x328) = 0x3dcccccd;
  puVar2 = PTR_s_onAfterApplyDamageName_10185d578;
  uVar3 = FUN_1004d2524(PTR_s_onAfterApplyDamageName_10185d578);
  uVar3 = FUN_100015208(puVar2,uVar3,0x12345678);
  *(undefined4 *)(param_1 + 0xa0 + (ulong)*(uint *)(param_1 + 0x160) * 4) = uVar3;
  uVar1 = *(uint *)(param_1 + 0x160);
  *(code **)(param_1 + 0xa0 + (ulong)uVar1 * 8 + 0x40) = FUN_1004334e4;
  *(uint *)(param_1 + 0x160) = uVar1 + 1;
  FUN_100450f38(auStack_48,param_1 + 0x68);
  lVar4 = FUN_100430f18(auStack_48);
  uVar3 = *(undefined4 *)(**(long **)(*(long *)(lVar5 + 0x38) + 0x228) + 8);
  *(undefined8 *)(lVar4 + 0x10) = 0x2b;
  *(undefined4 *)(lVar4 + 0x20) = uVar3;
  *(undefined2 *)(lVar4 + 0x24) = 1;
  lVar4 = FUN_10043101c(auStack_48);
  uVar3 = *(undefined4 *)(**(long **)(*(long *)(lVar5 + 0x38) + 0x228) + 8);
  *(undefined4 *)(lVar4 + 0x10) = 3;
  *(undefined4 *)(lVar4 + 0x14) = uVar3;
  *(undefined1 *)(lVar4 + 0x20) = 1;
  FUN_100450f38(auStack_48,param_1 + 0x90);
  lVar4 = FUN_10043101c(auStack_48);
  fVar6 = (float)FUN_1003df710(lVar5,1,1);
  fVar7 = *(float *)(param_1 + 0x328);
  *(undefined4 *)(lVar4 + 0x10) = 3;
  *(float *)(lVar4 + 0x14) = fVar7 * fVar6;
  *(undefined1 *)(lVar4 + 0x20) = 0;
  return;
}




void FUN_100410568(void)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_10042e498();
  plVar2 = (long *)FUN_100441e68(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x38))();
  plVar2 = (long *)(**(code **)(*plVar2 + 0x68))(plVar2,"CenterBody");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Blackfeather_A_Impact");
                    /* WARNING: Could not recover jumptable at 0x0001004105c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0xb0))(plVar2,1);
  return;
}




void FUN_1004105c4(long param_1)

{
  char *pcVar1;
  uint uVar2;
  undefined *puVar3;
  undefined4 uVar4;
  long lVar5;
  undefined1 auStack_58 [24];
  
  puVar3 = PTR_s_onBeforeApplyDamageName_10185d570;
  if (DAT_101d23a38 != '\0') {
    uVar4 = FUN_1004d2524(PTR_s_onBeforeApplyDamageName_10185d570);
    uVar4 = FUN_100015208(puVar3,uVar4,0x12345678);
    *(undefined4 *)(param_1 + 0xa0 + (ulong)*(uint *)(param_1 + 0x160) * 4) = uVar4;
    uVar2 = *(uint *)(param_1 + 0x160);
    *(code **)(param_1 + 0xa0 + (ulong)uVar2 * 8 + 0x40) = FUN_1004335c4;
    *(uint *)(param_1 + 0x160) = uVar2 + 1;
  }
  puVar3 = PTR_s_onApplyName_10185d540;
  uVar4 = FUN_1004d2524(PTR_s_onApplyName_10185d540);
  uVar4 = FUN_100015208(puVar3,uVar4,0x12345678);
  *(undefined4 *)(param_1 + 0xa0 + (ulong)*(uint *)(param_1 + 0x160) * 4) = uVar4;
  uVar2 = *(uint *)(param_1 + 0x160);
  *(code **)(param_1 + 0xe0 + (ulong)uVar2 * 8) = FUN_100433770;
  *(uint *)(param_1 + 0x160) = uVar2 + 1;
  puVar3 = PTR_s_onBeforeReApplyName_10185d588;
  uVar4 = FUN_1004d2524(PTR_s_onBeforeReApplyName_10185d588);
  uVar4 = FUN_100015208(puVar3,uVar4,0x12345678);
  *(undefined4 *)(param_1 + 0xa0 + (ulong)*(uint *)(param_1 + 0x160) * 4) = uVar4;
  uVar2 = *(uint *)(param_1 + 0x160);
  *(code **)(param_1 + 0xe0 + (ulong)uVar2 * 8) = FUN_100433770;
  *(uint *)(param_1 + 0x160) = uVar2 + 1;
  FUN_100450f38(auStack_58,param_1 + 0x98);
  pcVar1 = "CenterBody";
  if ((*(uint *)(*(long *)(*(long *)(param_1 + 0x10) + 0x10) + 0x2f4) & 0x20001110) != 0) {
    pcVar1 = "OverHead";
  }
  lVar5 = FUN_100431ad4(auStack_58);
  *(byte *)(lVar5 + 0x78) = *(byte *)(lVar5 + 0x78) | 4;
  *(char **)(lVar5 + 0x20) = pcVar1;
  *(code **)(lVar5 + 0x30) = FUN_100433580;
  *(undefined4 *)(lVar5 + 0x5c) = 0;
  *(ushort *)(lVar5 + 0x74) = *(ushort *)(lVar5 + 0x74) & 0xfc98 | 0x322;
  FUN_100450f38(auStack_58,param_1 + 0x70);
  FUN_100432680(auStack_58);
  return;
}




void FUN_100410764(long param_1)

{
  int iVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined1 auStack_60 [24];
  undefined4 local_48 [2];
  
  FUN_100450f38(auStack_60,param_1 + 0x98);
  lVar2 = FUN_100345d90(*(undefined4 *)(param_1 + 0x308));
  fVar3 = (float)FUN_1003dfe60(lVar2,1,7,0x19,0);
  fVar4 = (float)FUN_1003dfe60(lVar2,1,8,0x19,0);
  fVar3 = fVar3 + fVar4 * *(float *)(*(long *)(lVar2 + 0x40) + 0xec);
  iVar1 = FUN_1003a47d0(lVar2,PTR_s_Buff_Blackfeather_Talent_PointGu_10185a508);
  if (iVar1 != 0) {
    local_48[0] = DAT_101d90a40;
    fVar4 = (float)FUN_1003dfee8(lVar2,local_48,0,9);
    local_48[0] = DAT_101d90a40;
    fVar5 = (float)FUN_1003dfee8(lVar2,local_48,1,9);
    *(float *)(param_1 + 0x318) = fVar5;
    if (*(float *)(param_1 + 0x31c) < fVar5) {
      *(float *)(param_1 + 0x31c) = fVar5;
    }
    fVar3 = fVar4 * fVar3;
    *(uint *)(param_1 + 0x340) =
         *(uint *)(param_1 + 0x340) & 0xfffe0 | (uint)(fVar5 < 0.0) << 4 |
         *(uint *)(param_1 + 0x340) & 0xfff0000f;
  }
  lVar2 = FUN_1004337f4(auStack_60);
  *(undefined4 *)(lVar2 + 0x10) = 4;
  *(float *)(lVar2 + 0x14) = fVar3;
  FUN_100450f38(auStack_60,param_1 + 0x70);
  FUN_100432680(auStack_60);
  return;
}




void FUN_1004108a0(long param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  long lVar5;
  long *plVar6;
  uint uVar7;
  char *pcVar8;
  undefined4 local_40 [2];
  undefined4 local_38;
  
  if (DAT_101d23a38 != '\0') {
    uVar2 = FUN_1004d2524("marked_actor");
    uVar3 = FUN_100015208("marked_actor",uVar2,0x12345678);
    uVar3 = (**(code **)(*(long *)(param_1 + 0x168) + 8))(param_1 + 0x168,uVar3);
    puVar4 = (undefined4 *)(**(code **)(*(long *)(param_1 + 0x168) + 0x10))(param_1 + 0x168,uVar3);
    *puVar4 = 0xffffffff;
    lVar5 = FUN_10042e694(param_1);
    *(ushort *)(lVar5 + 0x48) = *(ushort *)(lVar5 + 0x48) | 0x10;
    *(byte *)(lVar5 + 0x60) = *(byte *)(lVar5 + 0x60) & 0xfc | 1;
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
    *(uint *)(lVar5 + 0x40) = uVar7;
    lVar5 = FUN_100437ccc(lVar5 + 0x10);
    *(char **)(lVar5 + 0x20) = "marked_actor";
    *(undefined4 *)(lVar5 + 0x28) = 3;
    *(code **)(lVar5 + 0x40) = FUN_1004338f4;
    lVar5 = FUN_100431114(param_1);
    *(char **)(lVar5 + 0x58) = "marked_actor";
    plVar6 = (long *)FUN_100433e34(lVar5 + 0x10);
    plVar6 = (long *)(**(code **)(*plVar6 + 0x30))
                               (plVar6,PTR_s_Buff_Blackfeather_LungeReset_10185cc78);
    local_40[0] = 0x3f800000;
    local_38 = 1;
    (**(code **)(*plVar6 + 0x18))(plVar6,local_40);
    FUN_1004385f0(lVar5 + 0x10);
  }
  return;
}




void FUN_100410a10(undefined8 param_1)

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
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Ability__Blackfeather__A_1018594c8);
  local_40[0] = 0;
  local_38 = 1;
  (**(code **)(*plVar2 + 0x20))(plVar2,local_40);
  lVar1 = FUN_10042e2c8(param_1);
  lVar1 = FUN_10049bf40(lVar1 + 0x10);
  if (PTR_s_Ability__Blackfeather__A_1018594c8 == (undefined *)0x0) {
    uVar4 = 0;
  }
  else {
    cVar3 = *PTR_s_Ability__Blackfeather__A_1018594c8;
    uVar4 = 0x811c9dc5;
    if (cVar3 != '\0') {
      uVar4 = 0x811c9dc5;
      pcVar5 = PTR_s_Ability__Blackfeather__A_1018594c8;
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
  if (PTR_s_Ability__Blackfeather__A_1018594c8 == (undefined *)0x0) {
    uVar6 = 0;
  }
  else {
    cVar3 = *PTR_s_Ability__Blackfeather__A_1018594c8;
    pcVar5 = PTR_s_Ability__Blackfeather__A_1018594c8;
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




void FUN_100410b44(void)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  code *local_30;
  undefined4 local_28;
  
  lVar1 = FUN_10042e498();
  lVar1 = lVar1 + 0x10;
  plVar2 = (long *)FUN_100441e68(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x68))(plVar2,"CenterBody");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Blackfeather_HitByDash");
  (**(code **)(*plVar2 + 0x78))(plVar2,1);
  plVar2 = (long *)FUN_100441e18(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x38))(plVar2,"Sound_Blackfthr_Ability_C_Impact_1");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x18))(plVar2,"Sound_Blackfthr_Ability_C_Impact_2");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x18))(plVar2,"Sound_Blackfthr_Ability_C_Impact_3");
  uVar3 = FUN_1010a1520();
  lVar4 = FUN_1010a0e0c(uVar3,0,"*KindredSoundBalance*",0);
  FUN_1003a5f8c(*(undefined4 *)(lVar4 + 0x24c));
  (**(code **)(*plVar2 + 0x28))(plVar2);
  FUN_1004386bc(lVar1);
  plVar2 = (long *)FUN_100434b18(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))(plVar2,DAT_10185a4b8);
  local_30 = FUN_1003a5ff0;
  local_28 = 3;
  (**(code **)(*plVar2 + 0x18))(plVar2,&local_30);
  return;
}




void FUN_100410c6c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined1 auStack_38 [24];
  
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x10);
  FUN_100450f38(auStack_38,param_1 + 0x98);
  lVar1 = FUN_1004337f4(auStack_38);
  uVar3 = FUN_1003dfe60(uVar2,2,4,0x19,0);
  *(undefined4 *)(lVar1 + 0x10) = 5;
  *(undefined4 *)(lVar1 + 0x14) = uVar3;
  return;
}




void FUN_100410cd0(undefined8 param_1)

{
  code *local_20;
  undefined4 local_18;
  
  local_20 = FUN_100433a0c;
  local_18 = 3;
  FUN_10043050c(0,0x3f800000,param_1,&local_20);
  return;
}




void FUN_100410d0c(undefined8 param_1)

{
  code *local_20;
  undefined4 local_18;
  
  local_20 = FUN_100433a20;
  local_18 = 3;
  FUN_10043050c(0,0x3f800000,param_1,&local_20);
  return;
}




void FUN_100410d48(void)

{
  return;
}




void FUN_100410d4c(long param_1)

{
  char cVar1;
  long lVar2;
  long *plVar3;
  uint uVar4;
  char *pcVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  code *local_40;
  undefined4 local_38;
  undefined4 local_28 [2];
  
  uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x10);
  lVar2 = FUN_10042e2c8();
  plVar3 = (long *)FUN_100430a84(lVar2 + 0x10);
  local_40 = FUN_1004926d0;
  local_38 = 3;
  (**(code **)(*plVar3 + 0x30))(plVar3,0xf,1,&local_40);
  lVar2 = FUN_100434180(param_1);
  if (DAT_10185a4b8 == (char *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = 0x811c9dc5;
    cVar1 = *DAT_10185a4b8;
    pcVar5 = DAT_10185a4b8;
    while (cVar1 != '\0') {
      pcVar5 = pcVar5 + 1;
      uVar4 = (uVar4 ^ (int)cVar1) * 0x1000193;
      cVar1 = *pcVar5;
    }
  }
  *(uint *)(lVar2 + 0x28) = uVar4;
  plVar3 = (long *)FUN_10045562c(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))();
  local_40 = FUN_10049263c;
  local_38 = 4;
  plVar3 = (long *)(**(code **)(*plVar3 + 0x10))(plVar3,&local_40);
  (**(code **)(*plVar3 + 0x20))(plVar3,FUN_10044d964);
  FUN_100450f38(&local_40,param_1 + 0x98);
  lVar2 = FUN_100436e1c(&local_40);
  local_28[0] = DAT_101d90a48;
  uVar7 = FUN_1003dfee8(uVar6,local_28,1,9);
  *(undefined8 *)(lVar2 + 0x10) = 0x200000004;
  *(undefined4 *)(lVar2 + 0x18) = uVar7;
  return;
}




void FUN_100410e94(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  uint uVar4;
  char cVar5;
  char *pcVar6;
  uint uVar7;
  code *local_50;
  undefined4 local_48;
  
  uVar7 = 0x811c9dc5;
  lVar1 = FUN_100433030();
  if (PTR_s_Ability__Blackfeather__C_1018594d8 == (undefined *)0x0) {
    uVar4 = 0;
  }
  else {
    cVar5 = *PTR_s_Ability__Blackfeather__C_1018594d8;
    uVar4 = 0x811c9dc5;
    if (cVar5 != '\0') {
      uVar4 = 0x811c9dc5;
      pcVar6 = PTR_s_Ability__Blackfeather__C_1018594d8;
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
  if (PTR_s_Ability__Blackfeather__C_1018594d8 == (undefined *)0x0) {
    uVar4 = 0;
  }
  else {
    cVar5 = *PTR_s_Ability__Blackfeather__C_1018594d8;
    uVar4 = 0x811c9dc5;
    if (cVar5 != '\0') {
      uVar4 = 0x811c9dc5;
      pcVar6 = PTR_s_Ability__Blackfeather__C_1018594d8;
      do {
        pcVar6 = pcVar6 + 1;
        uVar4 = (uVar4 ^ (int)cVar5) * 0x1000193;
        cVar5 = *pcVar6;
      } while (cVar5 != '\0');
    }
  }
  *(uint *)(lVar2 + 0x20) = uVar4;
  *(code **)(lVar2 + 0x10) = FUN_100492704;
  *(undefined4 *)(lVar2 + 0x18) = 3;
  lVar1 = FUN_10049d0e0(lVar1 + 0x10);
  *(undefined **)(lVar1 + 0x10) = PTR_s_Ability__Blackfeather__C_1018594d8;
  *(code **)(lVar1 + 0x18) = FUN_10049273c;
  *(undefined4 *)(lVar1 + 0x20) = 3;
  *(byte *)(lVar1 + 0x2c) = *(byte *)(lVar1 + 0x2c) | 4;
  *(undefined4 *)(lVar1 + 0x28) = 0x3f800000;
  lVar1 = FUN_10042e694(param_1);
  *(ushort *)(lVar1 + 0x48) = *(ushort *)(lVar1 + 0x48) | 0x10;
  *(byte *)(lVar1 + 0x60) = *(byte *)(lVar1 + 0x60) & 0xfc | 1;
  if (PTR_s_Ability__Blackfeather__C_1018594d8 == (undefined *)0x0) {
    uVar7 = 0;
  }
  else {
    cVar5 = *PTR_s_Ability__Blackfeather__C_1018594d8;
    pcVar6 = PTR_s_Ability__Blackfeather__C_1018594d8;
    while (cVar5 != '\0') {
      pcVar6 = pcVar6 + 1;
      uVar7 = (uVar7 ^ (int)cVar5) * 0x1000193;
      cVar5 = *pcVar6;
    }
  }
  *(uint *)(lVar1 + 0x40) = uVar7;
  plVar3 = (long *)FUN_10043187c(lVar1 + 0x10);
  local_50 = FUN_100492770;
  local_48 = 3;
  (**(code **)(*plVar3 + 0x30))(plVar3,&local_50);
  return;
}




void FUN_100411040(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  long lVar4;
  long *plVar5;
  
  if (DAT_101d23a38 != '\0') {
    *(undefined4 *)(param_1 + 0x328) = 0x3dcccccd;
    puVar2 = PTR_s_onBuffIntervalName_10185d558;
    uVar3 = FUN_1004d2524(PTR_s_onBuffIntervalName_10185d558);
    uVar3 = FUN_100015208(puVar2,uVar3,0x12345678);
    *(undefined4 *)(param_1 + 0xa0 + (ulong)*(uint *)(param_1 + 0x160) * 4) = uVar3;
    uVar1 = *(uint *)(param_1 + 0x160);
    *(code **)(param_1 + 0xa0 + (ulong)uVar1 * 8 + 0x40) = FUN_100437148;
    *(uint *)(param_1 + 0x160) = uVar1 + 1;
  }
  lVar4 = FUN_10042e2c8(param_1);
  plVar5 = (long *)FUN_10049bbfc(lVar4 + 0x10);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x30))();
                    /* WARNING: Could not recover jumptable at 0x0001004110e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar5 + 0x58))(plVar5,0);
  return;
}




void FUN_1004110e8(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  long lVar6;
  long *plVar7;
  float fVar8;
  undefined1 auStack_58 [24];
  
  *(code **)(param_1 + 0x330) = FUN_100437424;
  puVar2 = PTR_s_grace_period_10185d5a0;
  if (DAT_101d23a38 != '\0') {
    uVar3 = FUN_1004d2524(PTR_s_grace_period_10185d5a0);
    uVar4 = FUN_100015208(puVar2,uVar3,0x12345678);
    uVar4 = (**(code **)(*(long *)(param_1 + 0x168) + 8))(param_1 + 0x168,uVar4);
    puVar5 = (undefined4 *)(**(code **)(*(long *)(param_1 + 0x168) + 0x10))(param_1 + 0x168,uVar4);
    *puVar5 = 0;
    puVar2 = PTR_s_onAfterApplyDamageName_10185d578;
    uVar3 = FUN_1004d2524(PTR_s_onAfterApplyDamageName_10185d578);
    uVar3 = FUN_100015208(puVar2,uVar3,0x12345678);
    *(undefined4 *)(param_1 + 0xa0 + (ulong)*(uint *)(param_1 + 0x160) * 4) = uVar3;
    uVar1 = *(uint *)(param_1 + 0x160);
    *(code **)(param_1 + 0xa0 + (ulong)uVar1 * 8 + 0x40) = FUN_100436f98;
    *(uint *)(param_1 + 0x160) = uVar1 + 1;
  }
  lVar6 = FUN_100433910(param_1);
  *(code **)(lVar6 + 0x30) = FUN_1004370fc;
  FUN_1004385f0(lVar6 + 0x10);
  FUN_100450f38(auStack_58,param_1 + 0x68);
  FUN_100431d2c(auStack_58);
  lVar6 = FUN_100431e0c(auStack_58);
  fVar8 = *(float *)(param_1 + 0x318);
  *(undefined **)(lVar6 + 0x10) = PTR_s_Buff_Flicker_BrushStealth_Chargi_10185cca8;
  *(float *)(lVar6 + 0x30) = fVar8 + 0.1;
  *(undefined8 *)(lVar6 + 0x34) = 0xffffffff00000001;
  *(undefined8 *)(lVar6 + 0x44) = 0;
  *(undefined8 *)(lVar6 + 0x3c) = 0;
  FUN_100431f2c(auStack_58);
  FUN_100450f38(auStack_58,param_1 + 0x78);
  FUN_100431d2c(auStack_58);
  lVar6 = FUN_100436680(auStack_58);
  *(undefined **)(lVar6 + 0x10) = PTR_s_Buff_Flicker_BrushStealth_Chargi_10185cca8;
  FUN_100431f2c(auStack_58);
  FUN_100450f38(auStack_58,param_1 + 0x88);
  FUN_100431d2c(auStack_58);
  lVar6 = FUN_100431e0c(auStack_58);
  *(undefined **)(lVar6 + 0x10) = PTR_s_Buff_Flicker_BrushStealth_10185ccb0;
  *(undefined4 *)(lVar6 + 0x30) = 0xbf800000;
  *(undefined8 *)(lVar6 + 0x34) = 0xffffffff00000001;
  *(undefined8 *)(lVar6 + 0x44) = 0;
  *(undefined8 *)(lVar6 + 0x3c) = 0;
  FUN_100431f2c(auStack_58);
  lVar6 = FUN_10042e2c8(param_1);
  plVar7 = (long *)FUN_10049bbfc(lVar6 + 0x10);
  plVar7 = (long *)(**(code **)(*plVar7 + 0x48))();
  (**(code **)(*plVar7 + 0x58))(plVar7,1);
  return;
}




void FUN_1004112e4(void)

{
  return;
}




void FUN_1004112e8(long param_1)

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
  long lVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined4 local_90 [2];
  undefined4 local_88;
  undefined4 local_78 [2];
  
  *(uint *)(param_1 + 0x340) = *(uint *)(param_1 + 0x340) | 0x1080;
  *(code **)(param_1 + 0x338) = FUN_100437448;
  *(undefined4 *)(param_1 + 0x328) = 0x3f000000;
  puVar2 = PTR_s_grace_period_10185d5a0;
  lVar10 = *(long *)(*(long *)(param_1 + 0x10) + 0x10);
  if (DAT_101d23a38 != '\0') {
    uVar3 = FUN_1004d2524(PTR_s_grace_period_10185d5a0);
    uVar5 = FUN_100015208(puVar2,uVar3,0x12345678);
    uVar5 = (**(code **)(*(long *)(param_1 + 0x168) + 8))(param_1 + 0x168,uVar5);
    puVar6 = (undefined4 *)(**(code **)(*(long *)(param_1 + 0x168) + 0x10))(param_1 + 0x168,uVar5);
    *puVar6 = 0;
    puVar2 = PTR_s_onAfterApplyDamageName_10185d578;
    uVar3 = FUN_1004d2524(PTR_s_onAfterApplyDamageName_10185d578);
    uVar3 = FUN_100015208(puVar2,uVar3,0x12345678);
    *(undefined4 *)(param_1 + 0xa0 + (ulong)*(uint *)(param_1 + 0x160) * 4) = uVar3;
    uVar1 = *(uint *)(param_1 + 0x160);
    *(code **)(param_1 + 0xa0 + (ulong)uVar1 * 8 + 0x40) = FUN_100436f98;
    *(uint *)(param_1 + 0x160) = uVar1 + 1;
  }
  lVar7 = FUN_100433910(param_1);
  *(code **)(lVar7 + 0x30) = FUN_1004370fc;
  FUN_1004385f0(lVar7 + 0x10);
  FUN_100450f38(local_90,param_1 + 0x68);
  lVar7 = FUN_10043749c(local_90);
  *(undefined4 *)(lVar7 + 0x78) = 4;
  *(char **)(lVar7 + 0x20) = "CenterBody";
  *(char **)(lVar7 + 0x10) = "Effect_Flicker_Stealth_Activate";
  *(undefined4 *)(lVar7 + 0x58) = 0x3f800000;
  *(undefined1 *)(lVar7 + 0x74) = 0xaa;
  lVar7 = FUN_10042e498(param_1);
  plVar8 = (long *)FUN_100441e18(lVar7 + 0x10);
  plVar8 = (long *)(**(code **)(*plVar8 + 0x38))(plVar8,"Sound_Flicker_Stealth_In");
  uVar5 = FUN_1010a1520();
  lVar9 = FUN_1010a0e0c(uVar5,0,"*KindredSoundBalance*",0);
  FUN_1003a8878(*(undefined4 *)(lVar9 + 0x37c));
  (**(code **)(*plVar8 + 0x28))(plVar8);
  lVar7 = FUN_10043ab44(lVar7 + 0x10);
  puVar2 = PTR_s_Buff_Flicker_Talent_FairyHealing_10185ccf0;
  *(undefined8 *)(lVar7 + 0x48) = 0;
  *(undefined8 *)(lVar7 + 0x50) = 0;
  *(undefined1 *)(lVar7 + 0x50) = 2;
  *(undefined **)(lVar7 + 0x40) = puVar2;
  *(ushort *)(lVar7 + 0x58) = *(ushort *)(lVar7 + 0x58) & 0xff00 | 0x402;
  plVar8 = (long *)FUN_100433e34(lVar7 + 0x10);
  plVar8 = (long *)(**(code **)(*plVar8 + 0x30))(plVar8,PTR_s_Buff_TalentSuiteStandard_10185bdd0);
  local_90[0] = 0x3f800000;
  local_88 = 1;
  (**(code **)(*plVar8 + 0x18))(plVar8,local_90);
  lVar7 = FUN_10042e2c8(param_1);
  lVar7 = lVar7 + 0x10;
  FUN_10049c500(lVar7);
  plVar8 = (long *)FUN_100441e68(lVar7);
  plVar8 = (long *)(**(code **)(*plVar8 + 0x68))(plVar8,"OverHead");
  plVar8 = (long *)(**(code **)(*plVar8 + 0x48))(plVar8,"Effect_Totem_TrueVision");
  (**(code **)(*plVar8 + 0xb0))(plVar8,1);
  plVar8 = (long *)FUN_100441e68(lVar7);
  plVar8 = (long *)(**(code **)(*plVar8 + 0x68))(plVar8,"CenterBody");
  plVar8 = (long *)(**(code **)(*plVar8 + 0x48))(plVar8,"Effect_Flicker_Ethereal_Form");
  (**(code **)(*plVar8 + 0x88))(plVar8,1);
  lVar9 = FUN_10049be00(lVar7);
  *(undefined4 *)(lVar9 + 0x58) = 1;
  *(code **)(lVar9 + 0x10) = FUN_1004375e0;
  *(undefined4 *)(lVar9 + 0x18) = 3;
  FUN_10049c460(lVar7);
  plVar8 = (long *)FUN_10049c148(lVar7);
  (**(code **)(*plVar8 + 0x30))(plVar8,0xf);
  FUN_10049c4b0(lVar7);
  FUN_100450f38(local_90,param_1 + 0x70);
  lVar7 = FUN_100433e90(local_90);
  *(code **)(lVar7 + 0x18) = FUN_100437490;
  lVar7 = FUN_10043749c(local_90);
  *(undefined4 *)(lVar7 + 0x78) = 4;
  *(char **)(lVar7 + 0x20) = "CenterBody";
  *(char **)(lVar7 + 0x10) = "Effect_Flicker_Stealth_Activate";
  *(undefined4 *)(lVar7 + 0x58) = 0x3f800000;
  *(undefined1 *)(lVar7 + 0x74) = 0xaa;
  lVar7 = FUN_10042e3b0(param_1);
  plVar8 = (long *)FUN_100441e18(lVar7 + 0x10);
  plVar8 = (long *)(**(code **)(*plVar8 + 0x38))(plVar8,"Sound_Flicker_Stealth_In");
  uVar5 = FUN_1010a1520();
  lVar7 = FUN_1010a0e0c(uVar5,0,"*KindredSoundBalance*",0);
  FUN_1003a8878(*(undefined4 *)(lVar7 + 0x37c));
  (**(code **)(*plVar8 + 0x28))(plVar8);
  puVar2 = PTR_s_Buff_Flicker_Talent_FairyHealing_10185ccf0;
  lVar7 = FUN_100345d90(*(undefined4 *)(lVar10 + 0x260));
  if ((lVar7 != 0) && (iVar4 = FUN_1003a47d0(lVar7,puVar2), iVar4 != 0)) {
    FUN_100450f38(local_90,param_1 + 0x90);
    lVar7 = *(long *)(lVar10 + 0x40);
    fVar11 = *(float *)(lVar7 + 0x38) + *(float *)(lVar7 + 0xec) * (*(float *)(lVar7 + 0x254) + 1.0)
    ;
    fVar12 = (float)NEON_fminnm(fVar11 + fVar11 * *(float *)(lVar7 + 0x1a0),DAT_101e94320);
    fVar11 = DAT_101e94260;
    if (DAT_101e94260 <= fVar12) {
      fVar11 = fVar12;
    }
    local_78[0] = DAT_101d90ae4;
    fVar12 = (float)FUN_1003dfee8(lVar10,local_78,0,9);
    fVar13 = *(float *)(param_1 + 0x328);
    lVar10 = FUN_1004355d8(local_90);
    *(float *)(lVar10 + 0x10) = fVar11 * fVar12 * fVar13;
  }
  lVar10 = FUN_10042fdc4(param_1);
  plVar8 = (long *)FUN_100441e18(lVar10 + 0x10);
  plVar8 = (long *)(**(code **)(*plVar8 + 0x38))(plVar8,"Sound_Flicker_Stealth_Out");
  uVar5 = FUN_1010a1520();
  lVar10 = FUN_1010a0e0c(uVar5,0,"*KindredSoundBalance*",0);
  FUN_1003a8878(*(undefined4 *)(lVar10 + 0x37c));
  (**(code **)(*plVar8 + 0x28))(plVar8);
  return;
}




void FUN_1004117a0(long param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  float fVar9;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  undefined4 uVar13;
  code *local_78;
  undefined4 local_70;
  
  lVar8 = *(long *)(*(long *)(param_1 + 0x10) + 0x10);
  FUN_1003461dc(lVar8);
  uVar3 = FUN_100345d90();
  fVar9 = (float)FUN_1003dfe60(uVar3,0,4,0x19,0);
  *(float *)(param_1 + 0x318) = fVar9;
  if (*(float *)(param_1 + 0x31c) < fVar9) {
    *(float *)(param_1 + 0x31c) = fVar9;
  }
  *(uint *)(param_1 + 0x340) =
       *(uint *)(param_1 + 0x340) & 0xfffe0 | (uint)(fVar9 < 0.0) << 4 |
       *(uint *)(param_1 + 0x340) & 0xfff0000f;
  *(undefined4 *)(param_1 + 0x328) = 0x3f000000;
  lVar4 = FUN_10042e580(param_1);
  *(undefined4 *)(lVar4 + 0x40) = 0x3f000000;
  *(byte *)(lVar4 + 0x44) = *(byte *)(lVar4 + 0x44) | 1;
  plVar5 = (long *)FUN_10043fc58(lVar4 + 0x10);
  local_78 = FUN_1004375ec;
  local_70 = 3;
  (**(code **)(*plVar5 + 0x30))(plVar5,&local_78);
  plVar5 = (long *)FUN_10043ab94(lVar4 + 0x10);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x40))();
  (**(code **)(*plVar5 + 0x38))(plVar5,"FieldDPS",0);
  FUN_100450f38(&local_78,param_1 + 0x98);
  lVar4 = FUN_100431ad4(&local_78);
  *(ushort *)(lVar4 + 0x74) = *(ushort *)(lVar4 + 0x74) & 0xff98 | 0x21;
  *(char **)(lVar4 + 0x10) = "Effect_Flicker_A_AOE_A";
  lVar4 = FUN_100431c28(&local_78);
  uVar6 = FUN_1010a1520();
  lVar7 = FUN_1010a0e0c(uVar6,0,"*KindredSoundBalance*",0);
  uVar10 = FUN_1003a8878(*(undefined4 *)(lVar7 + 0x374));
  *(char **)(lVar4 + 0x10) = "Sound_Flicker_Ability_A_Loop";
  *(undefined1 *)(lVar4 + 0x38) = 0xff;
  *(undefined4 *)(lVar4 + 0x34) = uVar10;
  *(uint *)(lVar4 + 0x30) = ((int)lVar4 + 0xfe1b7eb0U >> 3) * 0xca1b & 0xffff;
  *(byte *)(lVar4 + 0x39) = *(byte *)(lVar4 + 0x39) & 0x80 | 0x49;
  FUN_100450f38(&local_78,param_1 + 0x88);
  lVar4 = FUN_1003e10f0();
  bVar1 = *(byte *)(lVar4 + 0xe5);
  uVar10 = *(undefined4 *)(lVar8 + 0x250);
  fVar9 = *(float *)(lVar8 + 0x254);
  uVar13 = *(undefined4 *)(lVar8 + 600);
  fVar12 = *(float *)(lVar8 + 0x2ec);
  fVar11 = (float)FUN_1003dfe60(uVar3,0,3,0x19,0);
  lVar8 = FUN_100437600(&local_78);
  *(undefined8 *)(lVar8 + 0x18) = uVar3;
  *(undefined1 *)(lVar8 + 0x20) = 1;
  *(undefined4 *)(lVar8 + 0x24) = uVar10;
  *(float *)(lVar8 + 0x28) = fVar12 + fVar9;
  *(undefined4 *)(lVar8 + 0x2c) = uVar13;
  *(undefined8 *)(lVar8 + 0x30) = 0;
  *(undefined8 *)(lVar8 + 0x38) = 0;
  *(float *)(lVar8 + 0x40) = fVar11 * fVar11;
  *(undefined8 *)(lVar8 + 0x4c) = 0x3f800000bf800000;
  *(undefined8 *)(lVar8 + 0x44) = 0xc0000000bf800000;
  *(undefined1 *)(lVar8 + 0x54) = 0xff;
  *(undefined8 *)(lVar8 + 0x60) = 0xffffffff00000000;
  *(undefined8 *)(lVar8 + 0x58) = 0xffffffff00000001;
  *(byte *)(lVar8 + 0x6a) = bVar1 | 0x14;
  *(undefined2 *)(lVar8 + 0x68) = 0xc120;
  *(byte *)(lVar8 + 0x94) = *(byte *)(lVar8 + 0x94) & 0xfc | 1;
  lVar8 = FUN_100431e0c(&local_78);
  puVar2 = PTR_s_Buff_Flicker_A_Immobilize_10185ccc0;
  uVar10 = FUN_1003dfe60(uVar3,0,5,0x19,0);
  *(undefined **)(lVar8 + 0x10) = puVar2;
  *(undefined4 *)(lVar8 + 0x30) = uVar10;
  *(undefined8 *)(lVar8 + 0x34) = 0xffffffff00000001;
  *(undefined8 *)(lVar8 + 0x44) = 0;
  *(undefined8 *)(lVar8 + 0x3c) = 0;
  FUN_100431f2c(&local_78);
  FUN_100450f38(&local_78,param_1 + 0x80);
  FUN_100435830(&local_78);
  return;
}




void FUN_100411a84(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  
  FUN_100435a7c(param_1,0x23,"Effect_Flicker_Immobilize",0);
  lVar1 = FUN_10042e498(param_1);
  plVar2 = (long *)FUN_100441e18(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x38))(plVar2,"Sound_Flicker_Ability_B_Plant_Roots");
  uVar3 = FUN_1010a1520();
  lVar1 = FUN_1010a0e0c(uVar3,0,"*KindredSoundBalance*",0);
  FUN_1003a8878(*(undefined4 *)(lVar1 + 0x374));
                    /* WARNING: Could not recover jumptable at 0x000100411b04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x28))(plVar2);
  return;
}




void FUN_100411b08(long param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  code *local_60;
  undefined4 local_58;
  undefined4 local_48 [2];
  
  lVar7 = *(long *)(*(long *)(param_1 + 0x10) + 0x10);
  plVar5 = (long *)(lVar7 + 0x18);
  do {
    lVar6 = *plVar5;
    plVar5 = (long *)(lVar6 + 0x20);
  } while (*(int *)(*(long *)(lVar6 + 8) + 0xa4) != DAT_10184dab8);
  if (*(long *)(lVar6 + 0x58) == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = FUN_10045f34c(*(long *)(lVar6 + 0x58) + 0x220);
  }
  FUN_100450f38(&local_60,param_1 + 0x98);
  lVar6 = FUN_100431ad4(&local_60);
  *(char **)(lVar6 + 0x10) = "Effect_Flicker_B_AOE_Range";
  *(ushort *)(lVar6 + 0x74) = *(ushort *)(lVar6 + 0x74) & 0xfe98 | 0x121;
  *(undefined4 *)(lVar6 + 0x5c) = 0;
  lVar6 = FUN_100431c28(&local_60);
  uVar3 = FUN_1010a1520();
  lVar4 = FUN_1010a0e0c(uVar3,0,"*KindredSoundBalance*",0);
  uVar9 = FUN_1003a8878(*(undefined4 *)(lVar4 + 0x378));
  *(char **)(lVar6 + 0x10) = "Sound_Flicker_Ability_B_Loop";
  *(undefined1 *)(lVar6 + 0x38) = 0xff;
  *(undefined4 *)(lVar6 + 0x34) = uVar9;
  *(uint *)(lVar6 + 0x30) = ((int)lVar6 + 0xfe1b7eb0U >> 3) * 0xca1b & 0xffff;
  *(byte *)(lVar6 + 0x39) = *(byte *)(lVar6 + 0x39) & 0x80 | 0x49;
  puVar1 = PTR_s_Buff_Flicker_Talent_BindingDust_10185cce0;
  lVar6 = FUN_100345d90(*(undefined4 *)(param_1 + 0x308));
  if ((lVar6 != 0) && (iVar2 = FUN_1003a47d0(lVar6,puVar1), iVar2 != 0)) {
    lVar6 = FUN_100436e1c(&local_60);
    local_48[0] = DAT_101d90ad4;
    uVar9 = FUN_1003dfee8(lVar7,local_48,1,9);
    *(undefined8 *)(lVar6 + 0x10) = 0x100000012;
    *(undefined4 *)(lVar6 + 0x18) = uVar9;
  }
  lVar7 = FUN_10042e580(param_1);
  *(undefined4 *)(lVar7 + 0x40) = 0x3f000000;
  *(byte *)(lVar7 + 0x44) = *(byte *)(lVar7 + 0x44) | 1;
  lVar7 = lVar7 + 0x10;
  plVar5 = (long *)FUN_10043fc58(lVar7);
  local_58 = 1;
  local_60._0_4_ = uVar8;
  plVar5 = (long *)(**(code **)(*plVar5 + 0x30))(plVar5,&local_60);
  (**(code **)(*plVar5 + 0x20))(0x3f800000);
  plVar5 = (long *)FUN_10043ab94(lVar7);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x40))();
  (**(code **)(*plVar5 + 0x38))(plVar5,"DustDPS",1);
  plVar5 = (long *)FUN_100434b18(lVar7);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x30))(plVar5,PTR_s_Buff_Flicker_B_Slow_10185ccc8);
  local_60._0_4_ = 0x3f19999a;
  local_58 = 1;
  (**(code **)(*plVar5 + 0x18))(plVar5,&local_60);
  lVar7 = FUN_1004303b0(param_1);
  lVar7 = lVar7 + 0x10;
  plVar5 = (long *)FUN_10043fc58(lVar7);
  local_60 = (code *)CONCAT44(local_60._4_4_,uVar8);
  local_58 = 1;
  plVar5 = (long *)(**(code **)(*plVar5 + 0x30))(plVar5,&local_60);
  (**(code **)(*plVar5 + 0x20))(0x3f800000);
  lVar6 = FUN_10043fc08(lVar7);
  lVar4 = FUN_10049c300(lVar6 + 0x10);
  *(undefined **)(lVar4 + 8) = PTR_s_Buff_Flicker_Talent_BindingDust_10185cce0;
  plVar5 = (long *)FUN_100434b18(lVar6 + 0x88);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x30))(plVar5,PTR_s_Buff_Flicker_A_Immobilize_10185ccc0);
  local_60 = FUN_10043773c;
  local_58 = 3;
  (**(code **)(*plVar5 + 0x18))(plVar5,&local_60);
  plVar5 = (long *)FUN_10043ab94(lVar7);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x40))();
  (**(code **)(*plVar5 + 0x38))(plVar5,"DustBurstDamage",1);
  plVar5 = (long *)FUN_100441e18(lVar7);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x38))(plVar5,"Sound_Flicker_Ability_A_Impact_3");
  uVar3 = FUN_1010a1520();
  lVar7 = FUN_1010a0e0c(uVar3,0,"*KindredSoundBalance*",0);
  FUN_1003a8878(*(undefined4 *)(lVar7 + 0x378));
  (**(code **)(*plVar5 + 0x28))(plVar5);
  return;
}




void FUN_100411e6c(long param_1)

{
  undefined8 uVar1;
  undefined4 local_30 [2];
  undefined4 local_28;
  
  uVar1 = FUN_100345d90(*(undefined4 *)(param_1 + 0x308));
  local_30[0] = FUN_1003dfe60(uVar1,1,4,0x19,0);
  local_28 = 1;
  FUN_10042eb40(param_1,local_30);
  return;
}




void FUN_100411ec4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  FUN_100450f38(auStack_38,param_1 + 0x90);
  lVar1 = FUN_100435fb4(auStack_38);
  *(code **)(lVar1 + 0x10) = FUN_100437770;
  FUN_100450f38(auStack_38,param_1 + 0x70);
  FUN_100432680(auStack_38);
  FUN_100450f38(auStack_38,param_1 + 0x80);
  FUN_100431d2c(auStack_38);
  lVar1 = FUN_100436680(auStack_38);
  *(undefined **)(lVar1 + 0x10) = PTR_s_Buff_Flicker_C_Warning_10185ccd0;
  FUN_100431f2c(auStack_38);
  return;
}




void FUN_100411f4c(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  float *pfVar6;
  long lVar7;
  long lVar8;
  float fVar9;
  float fVar10;
  undefined1 auStack_58 [24];
  
  uVar4 = FUN_100345d90(*(undefined4 *)(param_1 + 0x308));
  if (DAT_101d23a38 != '\0') {
    fVar9 = (float)FUN_100032228();
    fVar10 = (float)FUN_1003dfe60(uVar4,2,7,0x19,0);
    puVar2 = PTR_s_grace_period_10185d5a0;
    uVar3 = FUN_1004d2524(PTR_s_grace_period_10185d5a0);
    uVar5 = FUN_100015208(puVar2,uVar3,0x12345678);
    uVar5 = (**(code **)(*(long *)(param_1 + 0x168) + 8))(param_1 + 0x168,uVar5);
    pfVar6 = (float *)(**(code **)(*(long *)(param_1 + 0x168) + 0x10))(param_1 + 0x168,uVar5);
    *pfVar6 = fVar10 + fVar9;
    puVar2 = PTR_s_onAfterApplyDamageName_10185d578;
    uVar3 = FUN_1004d2524(PTR_s_onAfterApplyDamageName_10185d578);
    uVar3 = FUN_100015208(puVar2,uVar3,0x12345678);
    *(undefined4 *)(param_1 + 0xa0 + (ulong)*(uint *)(param_1 + 0x160) * 4) = uVar3;
    uVar1 = *(uint *)(param_1 + 0x160);
    *(code **)(param_1 + 0xa0 + (ulong)uVar1 * 8 + 0x40) = FUN_100436f98;
    *(uint *)(param_1 + 0x160) = uVar1 + 1;
  }
  lVar7 = FUN_100433910(param_1);
  *(code **)(lVar7 + 0x30) = FUN_1004370fc;
  FUN_1004385f0(lVar7 + 0x10);
  FUN_100450f38(auStack_58,param_1 + 0x98);
  lVar7 = FUN_100431ad4(auStack_58);
  *(char **)(lVar7 + 0x20) = "OverHead";
  *(char **)(lVar7 + 0x10) = "Effect_Flicker_C_Warning";
  *(ushort *)(lVar7 + 0x74) = *(ushort *)(lVar7 + 0x74) & 0xfe98 | 0x122;
  *(undefined4 *)(lVar7 + 0x5c) = 0;
  lVar7 = FUN_100431c28(auStack_58);
  uVar5 = FUN_1010a1520();
  lVar8 = FUN_1010a0e0c(uVar5,0,"*KindredSoundBalance*",0);
  uVar3 = FUN_1003a8878(*(undefined4 *)(lVar8 + 0x37c));
  *(char **)(lVar7 + 0x10) = "Sound_Flicker_Ability_C_Ally";
  *(undefined1 *)(lVar7 + 0x38) = 0xff;
  *(undefined4 *)(lVar7 + 0x34) = uVar3;
  *(uint *)(lVar7 + 0x30) = ((int)lVar7 + 0xfe1b7eb0U >> 3) * 0xca1b & 0xffff;
  *(byte *)(lVar7 + 0x39) = *(byte *)(lVar7 + 0x39) & 0x80 | 0x49;
  FUN_100450f38(auStack_58,param_1 + 0x88);
  FUN_100431d2c(auStack_58);
  lVar7 = FUN_100431e0c(auStack_58);
  puVar2 = PTR_s_Buff_Flicker_C_Stealth_10185ccd8;
  uVar3 = FUN_1003dfe60(uVar4,2,8,0x19,0);
  *(undefined **)(lVar7 + 0x10) = puVar2;
  *(undefined4 *)(lVar7 + 0x30) = uVar3;
  *(undefined8 *)(lVar7 + 0x34) = 0xffffffff00000001;
  *(undefined8 *)(lVar7 + 0x44) = 0;
  *(undefined8 *)(lVar7 + 0x3c) = 0;
  FUN_100431f2c(auStack_58);
  return;
}




void FUN_1004121a4(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  float *pfVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auStack_70 [24];
  undefined4 local_58 [2];
  
  lVar5 = FUN_100345d90(*(undefined4 *)(param_1 + 0x308));
  *(uint *)(param_1 + 0x340) = *(uint *)(param_1 + 0x340) | 0x1000;
  *(code **)(param_1 + 0x338) = FUN_1004378d0;
  *(undefined4 *)(param_1 + 0x328) = 0x3f000000;
  if (DAT_101d23a38 != '\0') {
    fVar11 = (float)FUN_100032228();
    fVar12 = (float)FUN_1003dfe60(lVar5,2,3,0x19,0);
    puVar2 = PTR_s_grace_period_10185d5a0;
    uVar3 = FUN_1004d2524(PTR_s_grace_period_10185d5a0);
    uVar6 = FUN_100015208(puVar2,uVar3,0x12345678);
    uVar6 = (**(code **)(*(long *)(param_1 + 0x168) + 8))(param_1 + 0x168,uVar6);
    pfVar7 = (float *)(**(code **)(*(long *)(param_1 + 0x168) + 0x10))(param_1 + 0x168,uVar6);
    *pfVar7 = fVar12 + fVar11;
    puVar2 = PTR_s_onAfterApplyDamageName_10185d578;
    uVar3 = FUN_1004d2524(PTR_s_onAfterApplyDamageName_10185d578);
    uVar3 = FUN_100015208(puVar2,uVar3,0x12345678);
    *(undefined4 *)(param_1 + 0xa0 + (ulong)*(uint *)(param_1 + 0x160) * 4) = uVar3;
    uVar1 = *(uint *)(param_1 + 0x160);
    *(code **)(param_1 + 0xa0 + (ulong)uVar1 * 8 + 0x40) = FUN_100436f98;
    *(uint *)(param_1 + 0x160) = uVar1 + 1;
  }
  lVar8 = FUN_100433910(param_1);
  *(code **)(lVar8 + 0x30) = FUN_1004370fc;
  FUN_1004385f0(lVar8 + 0x10);
  lVar8 = FUN_10042e498(param_1);
  plVar9 = (long *)FUN_100441e18(lVar8 + 0x10);
  plVar9 = (long *)(**(code **)(*plVar9 + 0x38))(plVar9,"Sound_Flicker_Stealth_In");
  uVar6 = FUN_1010a1520();
  lVar8 = FUN_1010a0e0c(uVar6,0,"*KindredSoundBalance*",0);
  FUN_1003a8878(*(undefined4 *)(lVar8 + 0x37c));
  (**(code **)(*plVar9 + 0x28))(plVar9);
  FUN_100450f38(auStack_70,param_1 + 0x68);
  lVar8 = FUN_10043749c(auStack_70);
  *(undefined4 *)(lVar8 + 0x78) = 4;
  *(char **)(lVar8 + 0x20) = "CenterBody";
  *(char **)(lVar8 + 0x10) = "Effect_Flicker_Stealth_Activate";
  *(undefined4 *)(lVar8 + 0x58) = 0x3f800000;
  *(undefined1 *)(lVar8 + 0x74) = 0xaa;
  lVar8 = FUN_10042e2c8(param_1);
  lVar8 = lVar8 + 0x10;
  FUN_10049c500(lVar8);
  plVar9 = (long *)FUN_100441e68(lVar8);
  plVar9 = (long *)(**(code **)(*plVar9 + 0x68))(plVar9,"OverHead");
  plVar9 = (long *)(**(code **)(*plVar9 + 0x48))(plVar9,"Effect_Totem_TrueVision");
  (**(code **)(*plVar9 + 0xb0))(plVar9,1);
  plVar9 = (long *)FUN_100441e68(lVar8);
  plVar9 = (long *)(**(code **)(*plVar9 + 0x68))(plVar9,"CenterBody");
  plVar9 = (long *)(**(code **)(*plVar9 + 0x48))(plVar9,"Effect_Flicker_Ethereal_Form");
  (**(code **)(*plVar9 + 0x88))(plVar9,1);
  lVar10 = FUN_10049be00(lVar8);
  *(undefined4 *)(lVar10 + 0x58) = 1;
  *(code **)(lVar10 + 0x10) = FUN_100437938;
  *(undefined4 *)(lVar10 + 0x18) = 3;
  FUN_10049c460(lVar8);
  plVar9 = (long *)FUN_10049c148(lVar8);
  (**(code **)(*plVar9 + 0x30))(plVar9,0xf);
  FUN_10049c4b0(lVar8);
  plVar9 = (long *)FUN_10049bfec(lVar8);
  (**(code **)(*plVar9 + 0x38))();
  puVar2 = PTR_s_Buff_Flicker_Talent_FairyHealing_10185ccf0;
  lVar8 = FUN_100345d90(*(undefined4 *)(lVar5 + 0x260));
  if ((lVar8 != 0) && (iVar4 = FUN_1003a47d0(lVar8,puVar2), iVar4 != 0)) {
    FUN_100450f38(auStack_70,param_1 + 0x90);
    lVar8 = *(long *)(lVar5 + 0x40);
    fVar11 = *(float *)(lVar8 + 0x38) + *(float *)(lVar8 + 0xec) * (*(float *)(lVar8 + 0x254) + 1.0)
    ;
    fVar12 = (float)NEON_fminnm(fVar11 + fVar11 * *(float *)(lVar8 + 0x1a0),DAT_101e94320);
    fVar11 = DAT_101e94260;
    if (DAT_101e94260 <= fVar12) {
      fVar11 = fVar12;
    }
    local_58[0] = DAT_101d90ae4;
    fVar12 = (float)FUN_1003dfee8(lVar5,local_58,0,9);
    fVar13 = *(float *)(param_1 + 0x328);
    lVar5 = FUN_1004355d8(auStack_70);
    *(float *)(lVar5 + 0x10) = fVar11 * fVar12 * fVar13;
  }
  lVar5 = FUN_10042e3b0(param_1);
  FUN_10049b814(lVar5 + 0x10);
  lVar5 = FUN_10042fdc4(param_1);
  plVar9 = (long *)FUN_100441e18(lVar5 + 0x10);
  plVar9 = (long *)(**(code **)(*plVar9 + 0x38))(plVar9,"Sound_Flicker_Stealth_Out");
  uVar6 = FUN_1010a1520();
  lVar5 = FUN_1010a0e0c(uVar6,0,"*KindredSoundBalance*",0);
  FUN_1003a8878(*(undefined4 *)(lVar5 + 0x37c));
  (**(code **)(*plVar9 + 0x28))(plVar9);
  return;
}




void FUN_10041258c(void)

{
  long lVar1;
  long *plVar2;
  code *local_20;
  undefined4 local_18;
  
  lVar1 = FUN_10042e694();
  *(ushort *)(lVar1 + 0x48) = *(ushort *)(lVar1 + 0x48) | 8;
  *(byte *)(lVar1 + 0x60) = *(byte *)(lVar1 + 0x60) & 0xfc | 1;
  *(undefined4 *)(lVar1 + 0x40) = 0x8c937a4f;
  plVar2 = (long *)FUN_10043187c(lVar1 + 0x10);
  local_20 = FUN_1004929e0;
  local_18 = 3;
  (**(code **)(*plVar2 + 0x30))(plVar2,&local_20);
  return;
}




void FUN_1004125fc(undefined8 param_1)

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
  if (PTR_s_Ability__Flicker__A_101859958 == (undefined *)0x0) {
    uVar4 = 0;
  }
  else {
    cVar5 = *PTR_s_Ability__Flicker__A_101859958;
    uVar4 = 0x811c9dc5;
    if (cVar5 != '\0') {
      uVar4 = 0x811c9dc5;
      pcVar6 = PTR_s_Ability__Flicker__A_101859958;
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
  if (PTR_s_Ability__Flicker__A_101859958 == (undefined *)0x0) {
    uVar4 = 0;
  }
  else {
    cVar5 = *PTR_s_Ability__Flicker__A_101859958;
    uVar4 = 0x811c9dc5;
    if (cVar5 != '\0') {
      uVar4 = 0x811c9dc5;
      pcVar6 = PTR_s_Ability__Flicker__A_101859958;
      do {
        pcVar6 = pcVar6 + 1;
        uVar4 = (uVar4 ^ (int)cVar5) * 0x1000193;
        cVar5 = *pcVar6;
      } while (cVar5 != '\0');
    }
  }
  *(uint *)(lVar2 + 0x20) = uVar4;
  *(code **)(lVar2 + 0x10) = FUN_100492a14;
  *(undefined4 *)(lVar2 + 0x18) = 3;
  *(undefined4 *)(lVar2 + 0x28) = 1;
  lVar2 = FUN_10049bf40(lVar1);
  *(undefined4 *)(lVar2 + 0x20) = 0xa7c083d1;
  *(code **)(lVar2 + 0x10) = FUN_100492a48;
  *(undefined4 *)(lVar2 + 0x18) = 3;
  *(undefined4 *)(lVar2 + 0x28) = 2;
  lVar1 = FUN_10049c888(lVar1);
  if (PTR_s_Ability__Flicker__A_101859958 == (undefined *)0x0) {
    uVar4 = 0;
  }
  else {
    cVar5 = *PTR_s_Ability__Flicker__A_101859958;
    uVar4 = 0x811c9dc5;
    if (cVar5 != '\0') {
      uVar4 = 0x811c9dc5;
      pcVar6 = PTR_s_Ability__Flicker__A_101859958;
      do {
        pcVar6 = pcVar6 + 1;
        uVar4 = (uVar4 ^ (int)cVar5) * 0x1000193;
        cVar5 = *pcVar6;
      } while (cVar5 != '\0');
    }
  }
  *(uint *)(lVar1 + 0x20) = uVar4;
  *(code **)(lVar1 + 0x10) = FUN_100492a7c;
  *(undefined4 *)(lVar1 + 0x18) = 3;
  lVar1 = FUN_10042e694(param_1);
  *(ushort *)(lVar1 + 0x48) = *(ushort *)(lVar1 + 0x48) | 8;
  *(byte *)(lVar1 + 0x60) = *(byte *)(lVar1 + 0x60) & 0xfc | 1;
  if (PTR_s_Ability__Flicker__A_101859958 == (undefined *)0x0) {
    uVar7 = 0;
  }
  else {
    cVar5 = *PTR_s_Ability__Flicker__A_101859958;
    pcVar6 = PTR_s_Ability__Flicker__A_101859958;
    while (cVar5 != '\0') {
      pcVar6 = pcVar6 + 1;
      uVar7 = (uVar7 ^ (int)cVar5) * 0x1000193;
      cVar5 = *pcVar6;
    }
  }
  *(uint *)(lVar1 + 0x40) = uVar7;
  plVar3 = (long *)FUN_10043187c(lVar1 + 0x10);
  local_60 = FUN_100492ab4;
  local_58 = 3;
  (**(code **)(*plVar3 + 0x30))(plVar3,&local_60);
  return;
}




void FUN_100412810(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined1 auStack_40 [24];
  undefined4 local_28 [2];
  
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x10);
  FUN_100450f38(auStack_40,param_1 + 0x98);
  lVar1 = FUN_100436e1c(auStack_40);
  local_28[0] = DAT_101d90ae4;
  uVar3 = FUN_1003dfee8(uVar2,local_28,1,9);
  *(undefined8 *)(lVar1 + 0x10) = 0x200000005;
  *(undefined4 *)(lVar1 + 0x18) = uVar3;
  return;
}




void FUN_100412880(long param_1)

{
  long lVar1;
  undefined1 auStack_28 [24];
  
  FUN_100450f38(auStack_28,param_1 + 0x68);
  FUN_100431d2c(auStack_28);
  lVar1 = FUN_100431e0c(auStack_28);
  *(undefined **)(lVar1 + 0x10) = PTR_s_Buff_Gwen_PerkReady_10185a868;
  *(undefined4 *)(lVar1 + 0x30) = 0xbf800000;
  *(undefined8 *)(lVar1 + 0x34) = 0xffffffff00000001;
  *(undefined8 *)(lVar1 + 0x44) = 0;
  *(undefined8 *)(lVar1 + 0x3c) = 0;
  FUN_100431f2c(auStack_28);
  return;
}




void FUN_1004128e4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  FUN_100450f38(auStack_38,param_1 + 0x70);
  FUN_100432680(auStack_38);
  FUN_100450f38(auStack_38,param_1 + 0x88);
  FUN_100431d2c(auStack_38);
  lVar1 = FUN_100431e0c(auStack_38);
  *(undefined **)(lVar1 + 0x10) = PTR_s_Buff_Gwen_PerkReady_10185a868;
  *(undefined4 *)(lVar1 + 0x30) = 0xbf800000;
  *(undefined8 *)(lVar1 + 0x34) = 0xffffffff00000001;
  *(undefined8 *)(lVar1 + 0x44) = 0;
  *(undefined8 *)(lVar1 + 0x3c) = 0;
  FUN_100431f2c(auStack_38);
  return;
}




void FUN_100412968(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  
  lVar1 = FUN_10042e498();
  plVar2 = (long *)FUN_100441e18(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x38))(plVar2,"Sound_Gwen_Empowered_Loaded");
  uVar3 = FUN_1010a1520();
  lVar1 = FUN_1010a0e0c(uVar3,0,"*KindredSoundBalance*",0);
  FUN_1003ad578(*(undefined4 *)(lVar1 + 0x354));
  (**(code **)(*plVar2 + 0x28))(plVar2);
  lVar1 = FUN_10042e2c8(param_1);
  plVar2 = (long *)FUN_100451f14(lVar1 + 0x10);
  (**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Ability__Gwen__PerkAttack_101859990);
  plVar2 = (long *)FUN_100441e68(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,"Bone_Pistol");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Gwen_PowerUp");
                    /* WARNING: Could not recover jumptable at 0x000100412a38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x88))(plVar2,1);
  return;
}




void FUN_100412a3c(undefined8 param_1)

{
  code *local_20;
  undefined4 local_18;
  
  local_20 = FUN_100439ce0;
  local_18 = 3;
  FUN_10042feac(0,0x3f800000,param_1,&local_20);
  return;
}




void FUN_100412a78(long param_1)

{
  long lVar1;
  long *plVar2;
  undefined4 local_38 [2];
  undefined4 local_30;
  
  lVar1 = FUN_10042e498();
  plVar2 = (long *)FUN_100441e68(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x68))(plVar2,"CenterBody");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Gwen_Cleanse");
  local_38[0] = 0x3f800000;
  local_30 = 1;
  plVar2 = (long *)(**(code **)(*plVar2 + 0x60))(plVar2,local_38);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,1);
  (**(code **)(*plVar2 + 0x90))();
  FUN_100450f38(local_38,param_1 + 0x68);
  lVar1 = FUN_100436780(local_38);
  *(undefined4 *)(lVar1 + 0x10) = 0xd;
  FUN_100431d2c(local_38);
  lVar1 = FUN_100436680(local_38);
  *(undefined4 *)(lVar1 + 0x18) = 2;
  FUN_100431f2c(local_38);
  lVar1 = FUN_10042e2c8(param_1);
  lVar1 = FUN_10049be50(lVar1 + 0x10);
  *(undefined1 *)(lVar1 + 0x2c) = 0x12;
  return;
}




void FUN_100412b60(long param_1)

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
    *(code **)(lVar2 + (ulong)uVar3 * 8) = FUN_100439dbc;
    *(uint *)(param_1 + 0x160) = uVar3 + 1;
    puVar4 = PTR_s_onPreCalculateDamageExchangeName_10185d520;
    uVar5 = FUN_1004d2524(PTR_s_onPreCalculateDamageExchangeName_10185d520);
    uVar5 = FUN_100015208(puVar4,uVar5,0x12345678);
    *(undefined4 *)(lVar1 + (ulong)*(uint *)(param_1 + 0x160) * 4) = uVar5;
    uVar3 = *(uint *)(param_1 + 0x160);
    *(code **)(lVar2 + (ulong)uVar3 * 8) = FUN_10043a04c;
    *(uint *)(param_1 + 0x160) = uVar3 + 1;
    puVar4 = PTR_s_onEndName_10185d548;
    uVar5 = FUN_1004d2524(PTR_s_onEndName_10185d548);
    uVar5 = FUN_100015208(puVar4,uVar5,0x12345678);
    *(undefined4 *)(lVar1 + (ulong)*(uint *)(param_1 + 0x160) * 4) = uVar5;
    uVar3 = *(uint *)(param_1 + 0x160);
    *(code **)(lVar2 + (ulong)uVar3 * 8) = FUN_100439fc8;
    *(uint *)(param_1 + 0x160) = uVar3 + 1;
  }
  FUN_100450f38(auStack_48,param_1 + 0x70);
  FUN_1004354f8(auStack_48);
  return;
}




void FUN_100412d5c(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  
  puVar2 = PTR_s_onAbilityUpgradedName_10185d550;
  uVar3 = FUN_1004d2524(PTR_s_onAbilityUpgradedName_10185d550);
  uVar3 = FUN_100015208(puVar2,uVar3,0x12345678);
  *(undefined4 *)(param_1 + 0xa0 + (ulong)*(uint *)(param_1 + 0x160) * 4) = uVar3;
  uVar1 = *(uint *)(param_1 + 0x160);
  *(code **)(param_1 + 0xa0 + (ulong)uVar1 * 8 + 0x40) = FUN_10043a1a4;
  *(uint *)(param_1 + 0x160) = uVar1 + 1;
  return;
}




void FUN_100412dc4(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_100431764();
  *(undefined4 *)(lVar1 + 0x40) = 0x3dcccccd;
  *(byte *)(lVar1 + 0x44) = *(byte *)(lVar1 + 0x44) & 0xfe;
  lVar1 = FUN_10049be00(lVar1 + 0x10);
  *(undefined4 *)(lVar1 + 0x58) = 1;
  *(code **)(lVar1 + 0x10) = FUN_100439cf4;
  *(undefined4 *)(lVar1 + 0x18) = 3;
  *(undefined8 *)(lVar1 + 0x24) = 0x3f80000000000000;
  lVar1 = FUN_10042e2c8(param_1);
  plVar2 = (long *)FUN_10049bfec(lVar1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x000100412e40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x38))();
  return;
}




void FUN_100412e44(undefined8 param_1)

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
  if (PTR_s_Ability__Gwen__B_1018599a0 == (undefined *)0x0) {
    uVar4 = 0;
  }
  else {
    cVar3 = *PTR_s_Ability__Gwen__B_1018599a0;
    uVar4 = 0x811c9dc5;
    if (cVar3 != '\0') {
      uVar4 = 0x811c9dc5;
      pcVar5 = PTR_s_Ability__Gwen__B_1018599a0;
      do {
        pcVar5 = pcVar5 + 1;
        uVar4 = (uVar4 ^ (int)cVar3) * 0x1000193;
        cVar3 = *pcVar5;
      } while (cVar3 != '\0');
    }
  }
  *(uint *)(lVar1 + 0x28) = uVar4;
  lVar1 = FUN_10049bf40(lVar1 + 0x10);
  if (PTR_s_Ability__Gwen__B_1018599a0 == (undefined *)0x0) {
    uVar6 = 0;
  }
  else {
    cVar3 = *PTR_s_Ability__Gwen__B_1018599a0;
    pcVar5 = PTR_s_Ability__Gwen__B_1018599a0;
    while (cVar3 != '\0') {
      pcVar5 = pcVar5 + 1;
      uVar6 = (uVar6 ^ (int)cVar3) * 0x1000193;
      cVar3 = *pcVar5;
    }
  }
  *(uint *)(lVar1 + 0x20) = uVar6;
  *(code **)(lVar1 + 0x10) = FUN_10049315c;
  *(undefined4 *)(lVar1 + 0x18) = 3;
  *(undefined4 *)(lVar1 + 0x28) = 1;
  lVar1 = FUN_10042e2c8(param_1);
  plVar2 = (long *)FUN_100430a84(lVar1 + 0x10);
  local_40 = FUN_100493190;
  local_38 = 3;
  (**(code **)(*plVar2 + 0x30))(plVar2,4,2,&local_40);
  return;
}




void FUN_100412f64(undefined8 param_1)

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
  if (PTR_s_Ability__Gwen__A_101859998 == (undefined *)0x0) {
    uVar4 = 0;
  }
  else {
    cVar3 = *PTR_s_Ability__Gwen__A_101859998;
    uVar4 = 0x811c9dc5;
    if (cVar3 != '\0') {
      uVar4 = 0x811c9dc5;
      pcVar5 = PTR_s_Ability__Gwen__A_101859998;
      do {
        pcVar5 = pcVar5 + 1;
        uVar4 = (uVar4 ^ (int)cVar3) * 0x1000193;
        cVar3 = *pcVar5;
      } while (cVar3 != '\0');
    }
  }
  *(uint *)(lVar1 + 0x28) = uVar4;
  lVar1 = FUN_10049d0e0(lVar1 + 0x10);
  *(undefined **)(lVar1 + 0x10) = PTR_s_Ability__Gwen__A_101859998;
  *(code **)(lVar1 + 0x18) = FUN_10049308c;
  *(undefined4 *)(lVar1 + 0x20) = 3;
  *(byte *)(lVar1 + 0x2c) = *(byte *)(lVar1 + 0x2c) | 4;
  *(undefined4 *)(lVar1 + 0x28) = 0x3f800000;
  lVar1 = FUN_10042e694(param_1);
  *(ushort *)(lVar1 + 0x48) = *(ushort *)(lVar1 + 0x48) | 8;
  *(byte *)(lVar1 + 0x60) = *(byte *)(lVar1 + 0x60) & 0xfc | 1;
  if (PTR_s_Ability__Gwen__A_101859998 == (undefined *)0x0) {
    uVar6 = 0;
  }
  else {
    cVar3 = *PTR_s_Ability__Gwen__A_101859998;
    pcVar5 = PTR_s_Ability__Gwen__A_101859998;
    while (cVar3 != '\0') {
      pcVar5 = pcVar5 + 1;
      uVar6 = (uVar6 ^ (int)cVar3) * 0x1000193;
      cVar3 = *pcVar5;
    }
  }
  *(uint *)(lVar1 + 0x40) = uVar6;
  plVar2 = (long *)FUN_10043187c(lVar1 + 0x10);
  local_40 = FUN_1004930c0;
  local_38 = 3;
  (**(code **)(*plVar2 + 0x30))(plVar2,&local_40);
  return;
}




void FUN_1004130a8(undefined8 param_1)

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
  if (PTR_s_Ability__Gwen__C_1018599a8 == (undefined *)0x0) {
    uVar4 = 0;
  }
  else {
    cVar3 = *PTR_s_Ability__Gwen__C_1018599a8;
    uVar4 = 0x811c9dc5;
    if (cVar3 != '\0') {
      uVar4 = 0x811c9dc5;
      pcVar5 = PTR_s_Ability__Gwen__C_1018599a8;
      do {
        pcVar5 = pcVar5 + 1;
        uVar4 = (uVar4 ^ (int)cVar3) * 0x1000193;
        cVar3 = *pcVar5;
      } while (cVar3 != '\0');
    }
  }
  *(uint *)(lVar1 + 0x28) = uVar4;
  lVar1 = FUN_10049bf40(lVar1 + 0x10);
  if (PTR_s_Ability__Gwen__C_1018599a8 == (undefined *)0x0) {
    uVar6 = 0;
  }
  else {
    cVar3 = *PTR_s_Ability__Gwen__C_1018599a8;
    pcVar5 = PTR_s_Ability__Gwen__C_1018599a8;
    while (cVar3 != '\0') {
      pcVar5 = pcVar5 + 1;
      uVar6 = (uVar6 ^ (int)cVar3) * 0x1000193;
      cVar3 = *pcVar5;
    }
  }
  *(uint *)(lVar1 + 0x20) = uVar6;
  *(code **)(lVar1 + 0x10) = FUN_1004930f4;
  *(undefined4 *)(lVar1 + 0x18) = 3;
  *(undefined4 *)(lVar1 + 0x28) = 1;
  lVar1 = FUN_10042e694(param_1);
  *(ushort *)(lVar1 + 0x48) = *(ushort *)(lVar1 + 0x48) | 8;
  *(byte *)(lVar1 + 0x60) = *(byte *)(lVar1 + 0x60) & 0xfc | 1;
  *(undefined4 *)(lVar1 + 0x40) = 0x37422281;
  plVar2 = (long *)FUN_10043187c(lVar1 + 0x10);
  local_40 = FUN_100493128;
  local_38 = 3;
  (**(code **)(*plVar2 + 0x30))(plVar2,&local_40);
  return;
}




void FUN_1004131e8(long param_1)

{
  char cVar1;
  undefined *puVar2;
  undefined4 uVar3;
  long lVar4;
  long *plVar5;
  uint uVar6;
  char *pcVar7;
  
  *(undefined4 *)(param_1 + 0x328) = 0x3dcccccd;
  puVar2 = PTR_s_onAfterApplyDamageName_10185d578;
  if (DAT_101d23a38 != '\0') {
    uVar3 = FUN_1004d2524(PTR_s_onAfterApplyDamageName_10185d578);
    uVar3 = FUN_100015208(puVar2,uVar3,0x12345678);
    *(undefined4 *)(param_1 + 0xa0 + (ulong)*(uint *)(param_1 + 0x160) * 4) = uVar3;
    uVar6 = *(uint *)(param_1 + 0x160);
    *(code **)(param_1 + 0xa0 + (ulong)uVar6 * 8 + 0x40) = FUN_10043b5c4;
    *(uint *)(param_1 + 0x160) = uVar6 + 1;
  }
  lVar4 = FUN_100433030(param_1);
  if (PTR_s_Ability__Idris__A_101859738 == (undefined *)0x0) {
    uVar6 = 0;
  }
  else {
    uVar6 = 0x811c9dc5;
    cVar1 = *PTR_s_Ability__Idris__A_101859738;
    pcVar7 = PTR_s_Ability__Idris__A_101859738;
    while (cVar1 != '\0') {
      pcVar7 = pcVar7 + 1;
      uVar6 = (uVar6 ^ (int)cVar1) * 0x1000193;
      cVar1 = *pcVar7;
    }
  }
  *(uint *)(lVar4 + 0x28) = uVar6;
  plVar5 = (long *)FUN_10049bbfc(lVar4 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x0001004132c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar5 + 0x38))();
  return;
}




void FUN_1004132c8(void)

{
  long lVar1;
  
  lVar1 = FUN_10042e3b0();
  FUN_10049b814(lVar1 + 0x10);
  return;
}




void FUN_1004132e0(long param_1)

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
  *(code **)(param_1 + 0xa0 + (ulong)uVar1 * 8 + 0x40) = FUN_10043b6f4;
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
  *(code **)(lVar4 + 0x18) = FUN_10043b7b8;
  *(undefined1 *)(lVar4 + 0x20) = 0;
  return;
}




void FUN_100413400(long param_1)

{
  undefined1 auStack_28 [24];
  
  FUN_100450f38(auStack_28,param_1 + 0x70);
  FUN_100432680(auStack_28);
  return;
}




void FUN_10041342c(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  long lVar4;
  undefined1 auStack_38 [24];
  
  puVar2 = PTR_s_onActorAttributesChangedName_10185d530;
  uVar3 = FUN_1004d2524(PTR_s_onActorAttributesChangedName_10185d530);
  uVar3 = FUN_100015208(puVar2,uVar3,0x12345678);
  *(undefined4 *)(param_1 + 0xa0 + (ulong)*(uint *)(param_1 + 0x160) * 4) = uVar3;
  uVar1 = *(uint *)(param_1 + 0x160);
  *(code **)(param_1 + 0xa0 + (ulong)uVar1 * 8 + 0x40) = FUN_10043bca8;
  *(uint *)(param_1 + 0x160) = uVar1 + 1;
  *(undefined4 *)(param_1 + 0x328) = 0x40200000;
  FUN_100450f38(auStack_38,param_1 + 0x90);
  lVar4 = FUN_100435fb4(auStack_38);
  *(code **)(lVar4 + 0x10) = FUN_10043b950;
  FUN_100450f38(auStack_38,param_1 + 0x70);
  lVar4 = FUN_100435fb4(auStack_38);
  *(code **)(lVar4 + 0x10) = FUN_10043b950;
  return;
}




void FUN_1004134dc(void)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_10042e2c8();
  plVar2 = (long *)FUN_100441e68(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,"Bone_Blade");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Idris_WeaponPathIdentifier");
  plVar2 = (long *)(**(code **)(*plVar2 + 0xb0))(plVar2,1);
  (**(code **)(*plVar2 + 0x88))(plVar2,1);
  plVar2 = (long *)FUN_10049bef0(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))(plVar2,"u_Weapon_Path");
                    /* WARNING: Could not recover jumptable at 0x000100413570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x38))(0x3f800000);
  return;
}




void FUN_100413574(void)

{
  long lVar1;
  long *plVar2;
  code *local_30;
  undefined4 local_28;
  
  lVar1 = FUN_10042e2c8();
  lVar1 = lVar1 + 0x10;
  plVar2 = (long *)FUN_100430a84(lVar1);
  local_30 = FUN_10043bcf8;
  local_28 = 3;
  (**(code **)(*plVar2 + 0x30))(plVar2,0x10,1,&local_30);
  plVar2 = (long *)FUN_100441e68(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,"Bone_Back");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Idris_CrystalPathIdentifier");
  plVar2 = (long *)(**(code **)(*plVar2 + 0xb0))(plVar2,1);
  (**(code **)(*plVar2 + 0x88))(plVar2,1);
  plVar2 = (long *)FUN_10049bef0(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))(plVar2,"u_Crystal_Path");
  (**(code **)(*plVar2 + 0x38))(0x3f800000);
  return;
}




void FUN_10041364c(void)

{
  long lVar1;
  long *plVar2;
  code *local_30;
  undefined4 local_28;
  
  lVar1 = FUN_10042e2c8();
  lVar1 = lVar1 + 0x10;
  plVar2 = (long *)FUN_100430a84(lVar1);
  local_30 = FUN_10043bcf8;
  local_28 = 3;
  (**(code **)(*plVar2 + 0x30))(plVar2,0x10,1,&local_30);
  plVar2 = (long *)FUN_100441e68(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,"Bone_Back");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Idris_CrystalPathIdentifier");
  plVar2 = (long *)(**(code **)(*plVar2 + 0xb0))(plVar2,1);
  (**(code **)(*plVar2 + 0x88))(plVar2,1);
  plVar2 = (long *)FUN_100441e68(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,"Bone_Blade");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Idris_WeaponPathIdentifier");
  plVar2 = (long *)(**(code **)(*plVar2 + 0xb0))(plVar2,1);
  (**(code **)(*plVar2 + 0x88))(plVar2,1);
  plVar2 = (long *)FUN_10049bef0(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))(plVar2,"u_Weapon_Path");
  (**(code **)(*plVar2 + 0x38))(0x3f800000);
  plVar2 = (long *)FUN_10049bef0(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))(plVar2,"u_Crystal_Path");
  (**(code **)(*plVar2 + 0x38))(0x3f800000);
  return;
}




void FUN_1004137a0(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  code *local_30;
  undefined4 local_28;
  
  local_30 = FUN_10043bd04;
  local_28 = 3;
  FUN_10043050c(0,0x3f800000,param_1,&local_30);
  lVar1 = FUN_10042e2c8(param_1);
  plVar2 = (long *)FUN_100430a84(lVar1 + 0x10);
  local_30 = FUN_10043bd10;
  local_28 = 3;
  (**(code **)(*plVar2 + 0x30))(plVar2,0x10,1,&local_30);
  return;
}




void FUN_100413820(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_10042e3b0();
  FUN_10049b814(lVar1 + 0x10);
  lVar1 = FUN_10042e2c8(param_1);
  plVar2 = (long *)FUN_10049bbfc(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))();
                    /* WARNING: Could not recover jumptable at 0x00010041386c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x58))(plVar2,1);
  return;
}




void FUN_100413870(long param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined1 auStack_38 [24];
  
  FUN_100450f38(auStack_38,param_1 + 0x98);
  lVar1 = FUN_1004337f4(auStack_38);
  uVar2 = FUN_1003dfe60(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x10),0,5,5,0);
  *(undefined4 *)(lVar1 + 0x10) = 4;
  *(undefined4 *)(lVar1 + 0x14) = uVar2;
  FUN_100450f38(auStack_38,param_1 + 0x70);
  FUN_100432680(auStack_38);
  return;
}




void FUN_1004138e8(long param_1)

{
  long lVar1;
  long *plVar2;
  undefined1 auStack_38 [24];
  
  FUN_100450f38(auStack_38,param_1 + 0x98);
  lVar1 = FUN_100431ad4(auStack_38);
  *(char **)(lVar1 + 0x20) = "CenterBody";
  *(ushort *)(lVar1 + 0x74) = *(ushort *)(lVar1 + 0x74) & 0xff98 | 0x22;
  *(char **)(lVar1 + 0x10) = "Effect_Idris_A_Empowered_Available";
  lVar1 = FUN_10042fdc4(param_1);
  plVar2 = (long *)FUN_10049c8e4(lVar1 + 0x10);
  (**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Ability__Idris__A_101859738);
  return;
}




void FUN_100413974(void)

{
  return;
}




void FUN_100413978(void)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  
  lVar1 = FUN_10042ea44();
  plVar2 = (long *)FUN_100441e68(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x68))(plVar2,"CenterBody");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Idris_B_Chakram_Impact");
  (**(code **)(*plVar2 + 0x100))(plVar2,FUN_10043bd1c);
  plVar2 = (long *)FUN_100441e18(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x38))(plVar2,"Sound_Idris_Ability_B_Impact_2");
  uVar3 = FUN_1010a1520();
  lVar1 = FUN_1010a0e0c(uVar3,0,"*KindredSoundBalance*",0);
  FUN_1003af8d8(*(undefined4 *)(lVar1 + 0x398));
                    /* WARNING: Could not recover jumptable at 0x000100413a24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x28))(plVar2);
  return;
}




void FUN_100413a28(long param_1)

{
  long lVar1;
  long *plVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = FUN_10042e498();
  lVar1 = FUN_10043aaf4(lVar1 + 0x10);
  *(code **)(lVar1 + 0x10) = FUN_10043bf08;
  FUN_100450f38(auStack_48,param_1 + 0x98);
  FUN_10043599c(auStack_48);
  lVar1 = FUN_1004303b0(param_1);
  plVar2 = (long *)FUN_10045309c(lVar1 + 0x10);
  (**(code **)(*plVar2 + 0x40))(plVar2,PTR_s_Ability__Idris__C_LeapOff_101859760);
  plVar2 = (long *)FUN_100454548(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Ability__Idris__C_LeapOff_101859760);
  (**(code **)(*plVar2 + 0x28))(plVar2,FUN_10043bfd8);
  FUN_100450f38(auStack_48,param_1 + 0x80);
  FUN_100431d2c(auStack_48);
  lVar1 = FUN_100436680(auStack_48);
  *(undefined **)(lVar1 + 0x10) = PTR_s_Buff_Idris_C_Attached_10185aad8;
  lVar1 = FUN_100436680(auStack_48);
  *(undefined **)(lVar1 + 0x10) = PTR_s_Buff_Idris_C_AttachedLeapModal_10185aae0;
  FUN_100431f2c(auStack_48);
  lVar1 = FUN_10043b0d8(auStack_48);
  *(code **)(lVar1 + 0x10) = FUN_10043bfac;
  lVar1 = FUN_100436680(auStack_48);
  *(undefined **)(lVar1 + 0x10) = PTR_s_Buff_Idris_C_AttachedEnemy_10185aac8;
  *(byte *)(lVar1 + 0x20) = *(byte *)(lVar1 + 0x20) | 1;
  lVar1 = FUN_100436680(auStack_48);
  *(undefined **)(lVar1 + 0x10) = PTR_s_Buff_Idris_C_AttachedAlly_10185aac0;
  *(byte *)(lVar1 + 0x20) = *(byte *)(lVar1 + 0x20) | 1;
  FUN_100431f2c(auStack_48);
  lVar1 = FUN_10042fdc4(param_1);
  plVar2 = (long *)FUN_10049c8e4(lVar1 + 0x10);
  (**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Ability__Idris__C_101859758);
  return;
}




void FUN_100413b98(long param_1)

{
  long lVar1;
  long *plVar2;
  code *local_38;
  undefined4 local_30;
  
  lVar1 = FUN_10042e498();
  FUN_1004386bc(lVar1 + 0x10);
  plVar2 = (long *)FUN_10043ab94(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x40))();
  local_38 = (code *)CONCAT44(local_38._4_4_,0x3f800000);
  local_30 = 1;
  (**(code **)(*plVar2 + 0x18))(plVar2,&local_38,2,3);
  lVar1 = FUN_10042e580(param_1);
  *(undefined4 *)(lVar1 + 0x40) = 0x3ecccccd;
  *(byte *)(lVar1 + 0x44) = *(byte *)(lVar1 + 0x44) & 0xfe;
  FUN_1004386bc(lVar1 + 0x10);
  plVar2 = (long *)FUN_10043ab94(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x40))();
  local_38 = FUN_10043c014;
  local_30 = 4;
  (**(code **)(*plVar2 + 0x18))(plVar2,&local_38,1,2);
  FUN_100450f38(&local_38,param_1 + 0x98);
  lVar1 = FUN_100431ad4(&local_38);
  *(char **)(lVar1 + 0x10) = "Effect_Idris_C_OnAttachedHero";
  *(undefined4 *)(lVar1 + 0x5c) = 0;
  *(ushort *)(lVar1 + 0x74) = *(ushort *)(lVar1 + 0x74) & 0xfe18 | 0x1a1;
  lVar1 = FUN_100431ad4(&local_38);
  *(char **)(lVar1 + 0x20) = "CenterBody";
  *(char **)(lVar1 + 0x10) = "Effect_Idris_C_FlashAtDestination";
  *(undefined4 *)(lVar1 + 0x5c) = 0;
  *(ushort *)(lVar1 + 0x74) = *(ushort *)(lVar1 + 0x74) & 0xfc18 | 0x3a2;
  return;
}




void FUN_100413cec(long param_1)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined1 auStack_50 [24];
  undefined4 local_38 [2];
  
  puVar1 = PTR_s_Buff_Idris_Talent_ShimmerHeal_10185cd50;
  lVar3 = FUN_100345d90(*(undefined4 *)(param_1 + 0x308));
  if ((lVar3 != 0) && (iVar2 = FUN_1003a47d0(lVar3,puVar1), iVar2 != 0)) {
    uVar4 = FUN_100345d90(*(undefined4 *)(param_1 + 0x308));
    FUN_100450f38(auStack_50,param_1 + 0x68);
    FUN_100431d2c(auStack_50);
    lVar3 = FUN_100431e0c(auStack_50);
    puVar1 = PTR_s_Buff_HealPercentUsingBuffVar_10185bdd8;
    local_38[0] = DAT_101d90b7c;
    uVar5 = FUN_1003dfee8(uVar4,local_38,0,9);
    *(undefined **)(lVar3 + 0x10) = puVar1;
    *(undefined4 *)(lVar3 + 0x30) = 0xbf800000;
    *(undefined8 *)(lVar3 + 0x34) = 0xffffffff00000001;
    *(undefined4 *)(lVar3 + 0x3c) = uVar5;
    *(undefined4 *)(lVar3 + 0x48) = 0;
    *(undefined8 *)(lVar3 + 0x40) = 0;
    FUN_100431f2c(auStack_50);
  }
  FUN_100450f38(auStack_50,param_1 + 0x98);
  lVar3 = FUN_100431ad4(auStack_50);
  *(char **)(lVar3 + 0x10) = "Effect_Idris_C_OnAttachedHero";
  *(undefined4 *)(lVar3 + 0x5c) = 0;
  *(ushort *)(lVar3 + 0x74) = *(ushort *)(lVar3 + 0x74) & 0xfe18 | 0x1a1;
  lVar3 = FUN_100431ad4(auStack_50);
  *(char **)(lVar3 + 0x20) = "CenterBody";
  *(char **)(lVar3 + 0x10) = "Effect_Idris_C_FlashAtDestination";
  *(undefined4 *)(lVar3 + 0x5c) = 0;
  *(ushort *)(lVar3 + 0x74) = *(ushort *)(lVar3 + 0x74) & 0xfc18 | 0x3a2;
  return;
}




void FUN_100413e30(long param_1)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  code *local_30;
  undefined4 local_28;
  
  puVar1 = PTR_s_Buff_Idris_Talent_ShimmerHeal_10185cd50;
  lVar3 = FUN_100345d90(*(undefined4 *)(param_1 + 0x308));
  if ((lVar3 != 0) && (iVar2 = FUN_1003a47d0(lVar3,puVar1), iVar2 != 0)) {
    lVar3 = FUN_10042e498(param_1);
    FUN_1004386bc(lVar3 + 0x10);
    plVar4 = (long *)FUN_10043aa54(lVar3 + 0x10);
    local_30 = FUN_10043c04c;
    local_28 = 3;
    plVar4 = (long *)(**(code **)(*plVar4 + 0x30))(plVar4,&local_30);
    (**(code **)(*plVar4 + 0x18))();
  }
  lVar3 = FUN_10042e498(param_1);
  lVar3 = lVar3 + 0x10;
  lVar5 = FUN_10043aaf4(lVar3);
  *(code **)(lVar5 + 0x10) = FUN_10043c080;
  plVar4 = (long *)FUN_1004385a0(lVar3);
  (**(code **)(*plVar4 + 0x48))();
  plVar4 = (long *)FUN_1004385a0(lVar3);
  (**(code **)(*plVar4 + 0x50))();
  lVar3 = FUN_10042e2c8(param_1);
  lVar3 = lVar3 + 0x10;
  FUN_10049b964(lVar3);
  plVar4 = (long *)FUN_10049b7c4(lVar3);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x30))(plVar4,"Sound_Idris_Ability_C_Loop");
  uVar6 = FUN_1010a1520();
  lVar5 = FUN_1010a0e0c(uVar6,0,"*KindredSoundBalance*",0);
  FUN_1003af8d8(*(undefined4 *)(lVar5 + 0x39c));
  (**(code **)(*plVar4 + 0x28))(plVar4);
  FUN_10049c4b0(lVar3);
  FUN_10049c210(lVar3);
  plVar4 = (long *)FUN_10049ca24(lVar3);
  (**(code **)(*plVar4 + 0x30))(plVar4,FUN_10043c0b8);
  lVar5 = FUN_10049b9b4(lVar3);
  *(undefined2 *)(lVar5 + 0x10) = 0x1500;
  plVar4 = (long *)FUN_100433e34(lVar3);
  (**(code **)(*plVar4 + 0x30))(plVar4,PTR_s_Buff_Invulnerable_10185a588);
  plVar4 = (long *)FUN_100433e34(lVar3);
  (**(code **)(*plVar4 + 0x30))(plVar4,PTR_s_Buff_Idris_DontCatch_10185aaa0);
  return;
}




void FUN_100413fe0(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  
  lVar1 = FUN_10042e498();
  lVar2 = FUN_10043aaf4(lVar1 + 0x10);
  *(code **)(lVar2 + 0x10) = FUN_10043c080;
  plVar3 = (long *)FUN_10045309c(lVar1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x000100414030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Ability__Idris__C_LeapOff_101859760,2,1);
  return;
}




void FUN_100414034(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  
  FUN_10042ebc4(param_1,1);
  lVar1 = FUN_10042e2c8(param_1);
  plVar2 = (long *)FUN_100441e68(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x60))();
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Idris_Withdraw");
                    /* WARNING: Could not recover jumptable at 0x000100414090. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0xb0))(plVar2,1);
  return;
}




void FUN_100414094(undefined8 param_1)

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
  if (PTR_s_Ability__Idris__B_101859750 == (undefined *)0x0) {
    uVar4 = 0;
  }
  else {
    cVar3 = *PTR_s_Ability__Idris__B_101859750;
    uVar4 = 0x811c9dc5;
    if (cVar3 != '\0') {
      uVar4 = 0x811c9dc5;
      pcVar5 = PTR_s_Ability__Idris__B_101859750;
      do {
        pcVar5 = pcVar5 + 1;
        uVar4 = (uVar4 ^ (int)cVar3) * 0x1000193;
        cVar3 = *pcVar5;
      } while (cVar3 != '\0');
    }
  }
  *(uint *)(lVar1 + 0x28) = uVar4;
  lVar1 = FUN_10049bf40(lVar1 + 0x10);
  if (PTR_s_Ability__Idris__B_101859750 == (undefined *)0x0) {
    uVar6 = 0;
  }
  else {
    cVar3 = *PTR_s_Ability__Idris__B_101859750;
    pcVar5 = PTR_s_Ability__Idris__B_101859750;
    while (cVar3 != '\0') {
      pcVar5 = pcVar5 + 1;
      uVar6 = (uVar6 ^ (int)cVar3) * 0x1000193;
      cVar3 = *pcVar5;
    }
  }
  *(uint *)(lVar1 + 0x20) = uVar6;
  *(code **)(lVar1 + 0x10) = FUN_1004931c4;
  *(undefined4 *)(lVar1 + 0x18) = 3;
  *(undefined4 *)(lVar1 + 0x28) = 1;
  lVar1 = FUN_10042e694(param_1);
  *(ushort *)(lVar1 + 0x48) = *(ushort *)(lVar1 + 0x48) | 8;
  *(byte *)(lVar1 + 0x60) = *(byte *)(lVar1 + 0x60) & 0xfc | 1;
  *(undefined4 *)(lVar1 + 0x40) = 0x5cb5e744;
  plVar2 = (long *)FUN_10043187c(lVar1 + 0x10);
  local_40 = FUN_1004931f8;
  local_38 = 3;
  (**(code **)(*plVar2 + 0x30))(plVar2,&local_40);
  return;
}




void FUN_1004141d4(void)

{
  long lVar1;
  char cVar2;
  uint uVar3;
  char *pcVar4;
  uint uVar5;
  
  uVar5 = 0x811c9dc5;
  lVar1 = FUN_100433030();
  if (PTR_s_Ability__Idris__C_101859758 == (undefined *)0x0) {
    uVar3 = 0;
  }
  else {
    cVar2 = *PTR_s_Ability__Idris__C_101859758;
    uVar3 = 0x811c9dc5;
    if (cVar2 != '\0') {
      uVar3 = 0x811c9dc5;
      pcVar4 = PTR_s_Ability__Idris__C_101859758;
      do {
        pcVar4 = pcVar4 + 1;
        uVar3 = (uVar3 ^ (int)cVar2) * 0x1000193;
        cVar2 = *pcVar4;
      } while (cVar2 != '\0');
    }
  }
  *(uint *)(lVar1 + 0x28) = uVar3;
  lVar1 = FUN_10049bf40(lVar1 + 0x10);
  if (PTR_s_Ability__Idris__C_101859758 == (undefined *)0x0) {
    uVar5 = 0;
  }
  else {
    cVar2 = *PTR_s_Ability__Idris__C_101859758;
    pcVar4 = PTR_s_Ability__Idris__C_101859758;
    while (cVar2 != '\0') {
      pcVar4 = pcVar4 + 1;
      uVar5 = (uVar5 ^ (int)cVar2) * 0x1000193;
      cVar2 = *pcVar4;
    }
  }
  *(uint *)(lVar1 + 0x20) = uVar5;
  *(code **)(lVar1 + 0x10) = FUN_10049322c;
  *(undefined4 *)(lVar1 + 0x18) = 3;
  *(undefined4 *)(lVar1 + 0x28) = 1;
  return;
}




void FUN_1004142a8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined1 auStack_50 [24];
  undefined4 local_38 [2];
  
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x10);
  FUN_100450f38(auStack_50,param_1 + 0x98);
  lVar1 = FUN_100436e1c(auStack_50);
  local_38[0] = DAT_101d90b84;
  uVar3 = FUN_1003dfee8(uVar2,local_38,0,9);
  *(undefined8 *)(lVar1 + 0x10) = 0x200000004;
  *(undefined4 *)(lVar1 + 0x18) = uVar3;
  lVar1 = FUN_100436e1c(auStack_50);
  local_38[0] = DAT_101d90b84;
  uVar3 = FUN_1003dfee8(uVar2,local_38,1,9);
  *(undefined8 *)(lVar1 + 0x10) = 0x200000005;
  *(undefined4 *)(lVar1 + 0x18) = uVar3;
  return;
}




void FUN_100414358(long param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  int *piVar5;
  code *local_60;
  undefined4 local_58;
  
  local_60 = (code *)((ulong)local_60 & 0xffffffff00000000);
  FUN_10043a96c(param_1,PTR_s_lastDamager_10185d5c0,&local_60);
  lVar1 = FUN_10042e2c8(param_1);
  lVar1 = lVar1 + 0x10;
  plVar2 = (long *)FUN_100441e68(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,"Bone_CenterMass");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Churnwalker_ChainTether");
  plVar2 = (long *)(**(code **)(*plVar2 + 0xa0))(plVar2,FUN_10043a294);
  plVar2 = (long *)(**(code **)(*plVar2 + 0xb0))(plVar2,1);
  (**(code **)(*plVar2 + 0xb8))(plVar2,1);
  plVar2 = (long *)FUN_100441e68(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x68))(plVar2,"CenterBody");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))
                             (plVar2,"Effect_Churnwalker_ChainTetherDamageDebuff");
  (**(code **)(*plVar2 + 0xb0))(plVar2,1);
  plVar2 = (long *)FUN_100433e34(lVar1);
  (**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_RevealToBestowersTeamTrueSi_10185b3a0);
  lVar1 = FUN_10042e498(param_1);
  lVar1 = lVar1 + 0x10;
  lVar3 = FUN_100437ccc(lVar1);
  *(undefined4 *)(lVar3 + 0x48) = 1;
  *(undefined **)(lVar3 + 0x20) = PTR_s_freehooks_10185d5c8;
  *(undefined4 *)(lVar3 + 0x18) = DAT_101d3e8d8;
  *(undefined4 *)(lVar3 + 0x28) = 3;
  *(code **)(lVar3 + 0x40) = FUN_10043a7d8;
  *(undefined2 *)(lVar3 + 0x2c) = 0x101;
  FUN_10043aa04(lVar1);
  plVar2 = (long *)FUN_100434b18(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_Churnwalker_A_CD_Reset_10185cd70)
  ;
  local_60 = (code *)((ulong)local_60 & 0xffffffff00000000);
  local_58 = 1;
  (**(code **)(*plVar2 + 0x18))(plVar2,&local_60);
  plVar2 = (long *)FUN_100434b18(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))
                             (plVar2,PTR_s_Buff_Churnwalker_ChainTetherSelf_10185a8b8);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))
                             (plVar2,*(undefined4 *)
                                      (*(long *)(*(long *)(param_1 + 0x10) + 0x10) + 0x260));
  (**(code **)(*plVar2 + 0x50))(plVar2,*(undefined4 *)(param_1 + 0x30c));
  lVar1 = FUN_10042e580(param_1);
  *(undefined4 *)(lVar1 + 0x40) = 0x3dcccccd;
  *(byte *)(lVar1 + 0x44) = *(byte *)(lVar1 + 0x44) & 0xfe;
  lVar1 = FUN_10043ab44(lVar1 + 0x10);
  *(undefined1 *)(lVar1 + 0x58) = 1;
  *(code **)(lVar1 + 0x40) = FUN_10043a2f4;
  FUN_1004385f0(lVar1 + 0x10);
  lVar1 = FUN_10042e694(param_1);
  *(ushort *)(lVar1 + 0x48) = *(ushort *)(lVar1 + 0x48) | 0x20;
  *(byte *)(lVar1 + 0x60) = *(byte *)(lVar1 + 0x60) & 0xfc | 2;
  lVar1 = FUN_10043ab44(lVar1 + 0x10);
  *(undefined1 *)(lVar1 + 0x58) = 1;
  *(code **)(lVar1 + 0x40) = FUN_10043a578;
  FUN_10043aa04(lVar1 + 0x10);
  plVar2 = (long *)FUN_10043aa54(lVar1 + 0x10);
  local_60 = FUN_10043a4e8;
  local_58 = 4;
  (**(code **)(*plVar2 + 0x30))(plVar2,&local_60);
  lVar1 = FUN_10042e694(param_1);
  *(ushort *)(lVar1 + 0x48) = *(ushort *)(lVar1 + 0x48) | 0x20;
  *(byte *)(lVar1 + 0x60) = *(byte *)(lVar1 + 0x60) & 0xfc | 2;
  lVar1 = FUN_10043ab44(lVar1 + 0x10);
  *(undefined1 *)(lVar1 + 0x58) = 1;
  *(code **)(lVar1 + 0x40) = FUN_10043a578;
  lVar1 = lVar1 + 0x10;
  lVar3 = FUN_10043aaa4(lVar1);
  *(code **)(lVar3 + 0x10) = FUN_10043a5dc;
  piVar5 = (int *)(lVar3 + 0x18);
  if ((*piVar5 == 0) || (piVar5 = (int *)(lVar3 + 0x1c), *piVar5 == 0)) {
    FUN_1003a4e5c(piVar5,PTR_s_Buff_Churnwalker_ChainTether_10185a8d0);
  }
  lVar3 = FUN_10043aaf4(lVar1);
  *(code **)(lVar3 + 0x10) = FUN_10043a61c;
  lVar3 = FUN_100437ccc(lVar1);
  *(undefined **)(lVar3 + 0x20) = PTR_s_lastDamager_10185d5c0;
  *(undefined4 *)(lVar3 + 0x28) = 3;
  *(code **)(lVar3 + 0x40) = FUN_10043a888;
  *(undefined1 *)(lVar3 + 0x2c) = 1;
  lVar1 = FUN_10043ab44(lVar1);
  *(undefined1 *)(lVar1 + 0x58) = 1;
  *(code **)(lVar1 + 0x40) = FUN_10043a898;
  plVar2 = (long *)FUN_10043ab94(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x40))();
  local_60 = (code *)((ulong)local_60 & 0xffffffff00000000);
  local_58 = 1;
  plVar2 = (long *)(**(code **)(*plVar2 + 0x18))(plVar2,&local_60,1,3);
  (**(code **)(*plVar2 + 0x60))(plVar2,FUN_10043a68c);
  plVar2 = (long *)FUN_100434b18(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))
                             (plVar2,PTR_s_Buff_Churnwalker_ChainTetherDama_10185cd68);
  local_60 = (code *)CONCAT44(local_60._4_4_,0x3dcccccd);
  local_58 = 1;
  (**(code **)(*plVar2 + 0x18))(plVar2,&local_60);
  lVar1 = FUN_10042e580(param_1);
  *(undefined4 *)(lVar1 + 0x40) = 0x3f000000;
  *(byte *)(lVar1 + 0x44) = *(byte *)(lVar1 + 0x44) & 0xfe;
  FUN_1004386bc(lVar1 + 0x10);
  plVar2 = (long *)FUN_10043ab94(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x40))();
  (**(code **)(*plVar2 + 0x38))(plVar2,"DamagePercent",0);
  lVar1 = FUN_10042e580(param_1);
  *(undefined4 *)(lVar1 + 0x40) = 0x3dcccccd;
  *(byte *)(lVar1 + 0x44) = *(byte *)(lVar1 + 0x44) & 0xfe;
  lVar1 = FUN_10043ab44(lVar1 + 0x10);
  *(undefined1 *)(lVar1 + 0x58) = 1;
  *(code **)(lVar1 + 0x40) = FUN_10043a8f0;
  FUN_1004385f0(lVar1 + 0x10);
  lVar1 = FUN_10042fdc4(param_1);
  lVar3 = FUN_100437ccc(lVar1 + 0x10);
  *(undefined4 *)(lVar3 + 0x48) = 1;
  *(undefined **)(lVar3 + 0x20) = PTR_s_freehooks_10185d5c8;
  *(undefined4 *)(lVar3 + 0x18) = DAT_101d3e8d8;
  *(undefined4 *)(lVar3 + 0x28) = 3;
  *(code **)(lVar3 + 0x40) = FUN_10043a830;
  *(undefined2 *)(lVar3 + 0x2c) = 0x101;
  plVar2 = (long *)FUN_100441e18(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x38))(plVar2,"Sound_Churnwalker_Chain_Break_1");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x18))(plVar2,"Sound_Churnwalker_Chain_Break_2");
  uVar4 = FUN_1010a1520();
  lVar1 = FUN_1010a0e0c(uVar4,0,"*KindredSoundBalance*",0);
  FUN_1003ada58(*(undefined4 *)(lVar1 + 0x420));
  (**(code **)(*plVar2 + 0x28))(plVar2);
  return;
}




void FUN_10041487c(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_10042e2c8();
  plVar2 = (long *)FUN_100433e34(lVar1 + 0x10);
  (**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_RevealToBestowersTeamTrueSi_10185b3a0);
  plVar2 = (long *)FUN_100441e68(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,"Bone_CenterMass");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Churnwalker_Healing");
  (**(code **)(*plVar2 + 0xb0))(plVar2,1);
  lVar1 = FUN_10042e580(param_1);
  *(undefined4 *)(lVar1 + 0x40) = 0x3dcccccd;
  *(byte *)(lVar1 + 0x44) = *(byte *)(lVar1 + 0x44) & 0xfe;
  lVar1 = FUN_10043ab44(lVar1 + 0x10);
  *(undefined1 *)(lVar1 + 0x58) = 1;
  *(code **)(lVar1 + 0x40) = FUN_10043a74c;
  FUN_1004385f0(lVar1 + 0x10);
  return;
}




void FUN_10041493c(void)

{
  long lVar1;
  
  lVar1 = FUN_10042e2c8();
  FUN_10049b964(lVar1 + 0x10);
  return;
}




void FUN_100414954(undefined8 param_1)

{
  int iVar1;
  undefined4 local_24;
  
  local_24 = 0xffffffff;
  FUN_10043a96c(param_1,PTR_s_freehooks_10185d5c8,&local_24);
  iVar1 = 0;
  do {
    FUN_10043acc4(param_1,iVar1);
    iVar1 = iVar1 + 1;
  } while (iVar1 != 4);
  return;
}




void FUN_1004149ac(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  
  FUN_10043ae24();
  iVar1 = FUN_100432d40(param_1);
  if (iVar1 != -1) {
    lVar2 = FUN_10042e2c8(param_1);
    plVar3 = (long *)FUN_100441e68(lVar2 + 0x10);
    plVar3 = (long *)(**(code **)(*plVar3 + 0x78))(plVar3,"Bone_CenterMass");
    plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Churnwalker_ChainTetherDamage");
    plVar3 = (long *)(**(code **)(*plVar3 + 0xa0))(plVar3,FUN_10043af8c);
                    /* WARNING: Could not recover jumptable at 0x000100414a30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + 0x78))(plVar3,1);
    return;
  }
  return;
}




void FUN_100414a40(long param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  float fVar4;
  code *local_30;
  undefined4 local_28;
  
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x10);
  lVar1 = FUN_10042e2c8();
  plVar2 = (long *)FUN_100441e68(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x68))(plVar2,"CenterBody");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Churnwalker_ChurnCloud");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,1);
  (**(code **)(*plVar2 + 0x90))();
  lVar1 = FUN_10042e580(param_1);
  local_30 = (code *)CONCAT44(local_30._4_4_,DAT_101d90e0c);
  fVar4 = (float)FUN_1003dfee8(uVar3,&local_30,1,9);
  *(float *)(lVar1 + 0x40) = 1.0 / fVar4;
  *(byte *)(lVar1 + 0x44) = *(byte *)(lVar1 + 0x44) & 0xfe;
  plVar2 = (long *)FUN_10043fc58(lVar1 + 0x10);
  local_30 = FUN_10043adbc;
  local_28 = 3;
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))(plVar2,&local_30);
  (**(code **)(*plVar2 + 0x20))(0x3f800000);
  plVar2 = (long *)FUN_10043ab94(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x40))();
  local_30 = FUN_10043adf0;
  local_28 = 3;
  plVar2 = (long *)(**(code **)(*plVar2 + 0x18))(plVar2,&local_30,1,3);
  (**(code **)(*plVar2 + 0x78))();
  return;
}




void FUN_100414b88(void)

{
  return;
}




void FUN_100414b8c(void)

{
  long lVar1;
  long *plVar2;
  code *local_20;
  undefined4 local_18;
  
  lVar1 = FUN_10042fdc4();
  plVar2 = (long *)FUN_10043d6ac(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Ability__Churnwalker__A_101859788);
  local_20 = FUN_10043b03c;
  local_18 = 3;
  (**(code **)(*plVar2 + 0x30))(plVar2,&local_20);
  return;
}




void FUN_100414be8(void)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_10042e2c8();
  plVar2 = (long *)FUN_10049bef0(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))(plVar2,"u_chainHook1_hide");
                    /* WARNING: Could not recover jumptable at 0x000100414c20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x38))(0x3f800000);
  return;
}




void FUN_100414c24(void)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_10042e2c8();
  plVar2 = (long *)FUN_10049bef0(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))(plVar2,"u_chainHook2_hide");
                    /* WARNING: Could not recover jumptable at 0x000100414c5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x38))(0x3f800000);
  return;
}




void FUN_100414c60(void)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_10042e2c8();
  plVar2 = (long *)FUN_10049bef0(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))(plVar2,"u_chainHook3_hide");
                    /* WARNING: Could not recover jumptable at 0x000100414c98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x38))(0x3f800000);
  return;
}




void FUN_100414c9c(void)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_10042e2c8();
  plVar2 = (long *)FUN_10049bef0(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))(plVar2,"u_chainHook4_hide");
                    /* WARNING: Could not recover jumptable at 0x000100414cd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x38))(0x3f800000);
  return;
}




void FUN_100414cd8(void)

{
  return;
}




void FUN_100414cdc(void)

{
  long lVar1;
  char cVar2;
  uint uVar3;
  char *pcVar4;
  uint uVar5;
  
  uVar5 = 0x811c9dc5;
  lVar1 = FUN_100433030();
  if (PTR_s_Ability__Churnwalker__B_101859790 == (undefined *)0x0) {
    uVar3 = 0;
  }
  else {
    cVar2 = *PTR_s_Ability__Churnwalker__B_101859790;
    uVar3 = 0x811c9dc5;
    if (cVar2 != '\0') {
      uVar3 = 0x811c9dc5;
      pcVar4 = PTR_s_Ability__Churnwalker__B_101859790;
      do {
        pcVar4 = pcVar4 + 1;
        uVar3 = (uVar3 ^ (int)cVar2) * 0x1000193;
        cVar2 = *pcVar4;
      } while (cVar2 != '\0');
    }
  }
  *(uint *)(lVar1 + 0x28) = uVar3;
  lVar1 = FUN_10049bf40(lVar1 + 0x10);
  if (PTR_s_Ability__Churnwalker__B_101859790 == (undefined *)0x0) {
    uVar5 = 0;
  }
  else {
    cVar2 = *PTR_s_Ability__Churnwalker__B_101859790;
    pcVar4 = PTR_s_Ability__Churnwalker__B_101859790;
    while (cVar2 != '\0') {
      pcVar4 = pcVar4 + 1;
      uVar5 = (uVar5 ^ (int)cVar2) * 0x1000193;
      cVar2 = *pcVar4;
    }
  }
  *(uint *)(lVar1 + 0x20) = uVar5;
  *(code **)(lVar1 + 0x10) = FUN_100494d14;
  *(undefined4 *)(lVar1 + 0x18) = 3;
  *(undefined4 *)(lVar1 + 0x28) = 0;
  return;
}




void FUN_100414dac(void)

{
  char cVar1;
  long lVar2;
  uint uVar3;
  char *pcVar4;
  
  lVar2 = FUN_100433030();
  if (PTR_s_Ability__Churnwalker__A_101859788 == (undefined *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = 0x811c9dc5;
    cVar1 = *PTR_s_Ability__Churnwalker__A_101859788;
    pcVar4 = PTR_s_Ability__Churnwalker__A_101859788;
    while (cVar1 != '\0') {
      pcVar4 = pcVar4 + 1;
      uVar3 = (uVar3 ^ (int)cVar1) * 0x1000193;
      cVar1 = *pcVar4;
    }
  }
  *(uint *)(lVar2 + 0x28) = uVar3;
  lVar2 = FUN_10049da9c(lVar2 + 0x10);
  *(undefined **)(lVar2 + 0x10) = PTR_s_Ability__Churnwalker__A_101859788;
  *(code **)(lVar2 + 0x18) = FUN_100494d48;
  *(undefined4 *)(lVar2 + 0x20) = 3;
  *(undefined4 *)(lVar2 + 0x2c) = 0;
  return;
}




void FUN_100414e34(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  FUN_100450f38(auStack_38,param_1 + 0x98);
  lVar1 = FUN_100431ad4(auStack_38);
  *(char **)(lVar1 + 0x20) = "CenterBody";
  *(ushort *)(lVar1 + 0x74) = *(ushort *)(lVar1 + 0x74) & 0xff98 | 0x22;
  *(char **)(lVar1 + 0x10) = "Effect_Hero034_PfxShaderParamAura";
  *(undefined2 *)(lVar1 + 0x70) = 0xff00;
  *(undefined1 *)(lVar1 + 0x72) = 0xff;
  lVar1 = FUN_100431ad4(auStack_38);
  *(char **)(lVar1 + 0x10) = "Effect_Hero034_PfxRadiusParamTest";
  *(undefined2 *)(lVar1 + 0x70) = 0xff00;
  *(undefined1 *)(lVar1 + 0x72) = 0xff;
  *(ushort *)(lVar1 + 0x74) = *(ushort *)(lVar1 + 0x74) & 0xfd98 | 0x221;
  return;
}




void FUN_100414edc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  FUN_100450f38(auStack_38,param_1 + 0x98);
  lVar1 = FUN_100431ad4(auStack_38);
  *(char **)(lVar1 + 0x20) = "CenterBody";
  *(ushort *)(lVar1 + 0x74) = *(ushort *)(lVar1 + 0x74) & 0xff98 | 0x22;
  *(char **)(lVar1 + 0x10) = "Effect_Hero034_PfxShaderParamAura";
  *(undefined2 *)(lVar1 + 0x70) = 0xff;
  *(undefined1 *)(lVar1 + 0x72) = 0xff;
  lVar1 = FUN_100431ad4(auStack_38);
  *(char **)(lVar1 + 0x10) = "Effect_Hero034_PfxRadiusParamTest";
  *(undefined2 *)(lVar1 + 0x70) = 0xff;
  *(undefined1 *)(lVar1 + 0x72) = 0xff;
  *(undefined4 *)(lVar1 + 0x60) = 0x40400000;
  *(ushort *)(lVar1 + 0x74) = *(ushort *)(lVar1 + 0x74) & 0xfd98 | 0x221;
  return;
}




void FUN_100414f88(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  FUN_100450f38(auStack_38,param_1 + 0x98);
  lVar1 = FUN_100431ad4(auStack_38);
  *(char **)(lVar1 + 0x20) = "CenterBody";
  *(ushort *)(lVar1 + 0x74) = *(ushort *)(lVar1 + 0x74) & 0xff98 | 0x22;
  *(char **)(lVar1 + 0x10) = "Effect_Hero034_PfxShaderParamAura";
  *(undefined2 *)(lVar1 + 0x70) = 0xffff;
  *(undefined1 *)(lVar1 + 0x72) = 0;
  lVar1 = FUN_100431ad4(auStack_38);
  *(char **)(lVar1 + 0x10) = "Effect_Hero034_PfxRadiusParamTest";
  *(undefined2 *)(lVar1 + 0x70) = 0xffff;
  *(undefined1 *)(lVar1 + 0x72) = 0;
  *(undefined4 *)(lVar1 + 0x60) = 0x40c00000;
  *(ushort *)(lVar1 + 0x74) = *(ushort *)(lVar1 + 0x74) & 0xfd98 | 0x221;
  return;
}




void FUN_100415034(long param_1)

{
  long lVar1;
  ushort *puVar2;
  ulong uVar3;
  undefined1 auStack_28 [24];
  
  *(undefined4 *)(param_1 + 0x318) = 0x40a00000;
  if (*(float *)(param_1 + 0x31c) < 5.0) {
    *(undefined4 *)(param_1 + 0x31c) = 0x40a00000;
  }
  *(uint *)(param_1 + 0x340) = *(uint *)(param_1 + 0x340) & 0xffffffef;
  FUN_100450f38(auStack_28,param_1 + 0x80);
  uVar3 = (ulong)DAT_101e94150;
  if (uVar3 == 0xffff) {
    puVar2 = (ushort *)0x0;
  }
  else {
    puVar2 = &DAT_101e48150 + uVar3 * 0x4c;
    if (DAT_101e94150 == DAT_101e94152) {
      DAT_101e94150 = 0xffff;
    }
    else {
      DAT_101e94150 = *puVar2;
    }
    DAT_101e94154 = DAT_101e94154 + 1;
    *(undefined8 *)(&DAT_101e48158 + uVar3 * 0x98) = 0;
    *(undefined ***)puVar2 = &PTR_FUN_10149bf28;
    DAT_101e94160 = DAT_101e94160 + 1;
    if (DAT_101e94164 < DAT_101e94160) {
      DAT_101e94164 = DAT_101e94160;
    }
  }
  FUN_100450f94(auStack_28,puVar2);
  lVar1 = FUN_100431e0c(auStack_28);
  *(undefined **)(lVar1 + 0x10) = PTR_s_Buff_Hero034_VitalityControl_10185cdc8;
  *(undefined4 *)(lVar1 + 0x30) = 0xbf800000;
  *(undefined8 *)(lVar1 + 0x34) = 0xffffffff00000001;
  *(undefined8 *)(lVar1 + 0x44) = 0;
  *(undefined8 *)(lVar1 + 0x3c) = 0;
  FUN_100431f2c(auStack_28);
  return;
}




void FUN_10041517c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  FUN_100450f38(auStack_38,param_1 + 0x90);
  FUN_100431d2c(auStack_38);
  lVar1 = FUN_100431e0c(auStack_38);
  *(undefined **)(lVar1 + 0x10) = PTR_s_Buff_Hero034_Vitality_10185cdd0;
  *(undefined4 *)(lVar1 + 0x30) = 0xbf800000;
  *(undefined8 *)(lVar1 + 0x34) = 0xffffffff00000001;
  *(undefined8 *)(lVar1 + 0x44) = 0;
  *(undefined8 *)(lVar1 + 0x3c) = 0;
  *(code **)(lVar1 + 0x50) = FUN_10043b050;
  FUN_100431f2c(auStack_38);
  FUN_100450f38(auStack_38,param_1 + 0x80);
  FUN_100431d2c(auStack_38);
  lVar1 = FUN_100436680(auStack_38);
  *(undefined **)(lVar1 + 0x10) = PTR_s_Buff_Hero034_Vitality_10185cdd0;
  FUN_100431f2c(auStack_38);
  return;
}




void FUN_100415224(long param_1)

{
  long lVar1;
  undefined1 auStack_28 [24];
  
  FUN_100450f38(auStack_28,param_1 + 0x98);
  lVar1 = FUN_100431ad4(auStack_28);
  *(char **)(lVar1 + 0x20) = "OverHead";
  *(ushort *)(lVar1 + 0x74) = *(ushort *)(lVar1 + 0x74) & 0xff98 | 0x22;
  *(char **)(lVar1 + 0x10) = "Effect_Hero034_Vitality";
  return;
}




void FUN_100415280(long param_1)

{
  long lVar1;
  undefined1 auStack_28 [24];
  
  FUN_100450f38(auStack_28,param_1 + 0x98);
  lVar1 = FUN_100431ad4(auStack_28);
  *(char **)(lVar1 + 0x20) = "OverHead";
  *(ushort *)(lVar1 + 0x74) = *(ushort *)(lVar1 + 0x74) & 0xff98 | 0x22;
  *(char **)(lVar1 + 0x10) = "Effect_Hero034_VitalityDrained";
  return;
}




void FUN_1004152dc(long param_1)

{
  long lVar1;
  undefined1 auStack_28 [24];
  
  FUN_100450f38(auStack_28,param_1 + 0x98);
  lVar1 = FUN_100439be4(auStack_28);
  *(undefined4 *)(lVar1 + 0x10) = 0x20;
  return;
}




void FUN_100415310(long param_1)

{
  undefined4 uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  float local_48 [2];
  undefined4 local_40;
  
  uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x10);
  *(undefined4 *)(param_1 + 0x328) = 0x3e4ccccd;
  lVar2 = FUN_10042e498();
  plVar3 = (long *)FUN_10043594c(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,"Ability01_Seduce");
  (**(code **)(*plVar3 + 0x20))();
  lVar2 = FUN_10042e2c8(param_1);
  lVar2 = FUN_10049b9b4(lVar2 + 0x10);
  *(undefined2 *)(lVar2 + 0x10) = 2;
  lVar2 = FUN_10042e580(param_1);
  lVar4 = FUN_10049cac4(lVar2 + 0x10);
  *(undefined **)(lVar4 + 0x10) = PTR_s_Buff_Hero034_A_Seducing_10185cde8;
  *(char **)(lVar4 + 0x18) = "__VAR1_FLOAT__";
  plVar3 = (long *)FUN_10043ab94(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x40))();
  plVar3 = (long *)(**(code **)(*plVar3 + 0x78))();
  local_48[0] = (float)FUN_1003dfe60(uVar5,0,5,0x19,0);
  local_48[0] = local_48[0] / *(float *)(param_1 + 0x31c);
  local_40 = 1;
  (**(code **)(*plVar3 + 0x18))(plVar3,local_48,1,2);
  lVar2 = FUN_10042fdc4(param_1);
  plVar3 = (long *)FUN_10043594c(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,"Idle");
  (**(code **)(*plVar3 + 0x20))();
  FUN_100450f38(local_48,param_1 + 0x80);
  lVar2 = FUN_10043b0d8(local_48);
  uVar1 = FUN_100432d40(param_1);
  *(undefined4 *)(lVar2 + 0x18) = uVar1;
  lVar2 = FUN_100436680(local_48);
  *(undefined **)(lVar2 + 0x10) = PTR_s_Buff_Hero034_A_Seduced_10185cdf0;
  FUN_100431f2c(local_48);
  return;
}




void FUN_100415498(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  
  lVar1 = FUN_10042e2c8();
  lVar2 = FUN_10049b9b4(lVar1 + 0x10);
  *(undefined2 *)(lVar2 + 0x10) = 0x1e;
  plVar3 = (long *)FUN_10049c148(lVar1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x0001004154d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x30))(plVar3,2);
  return;
}




void FUN_1004154dc(undefined8 param_1)

{
  char cVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  uint uVar5;
  char *pcVar6;
  
  lVar3 = FUN_10042e2c8();
  lVar3 = lVar3 + 0x10;
  FUN_10049b964(lVar3);
  plVar4 = (long *)FUN_100441e68(lVar3);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x60))();
  (**(code **)(*plVar4 + 0x48))(plVar4,"Effect_Stunned_buff");
  lVar3 = FUN_100451f64(lVar3);
  puVar2 = PTR_s_Ability__Hero034__B_Cancel_1018597d8;
  *(undefined **)(lVar3 + 0x10) = PTR_s_Ability__Hero034__B_1018597c8;
  *(undefined **)(lVar3 + 0x18) = puVar2;
  lVar3 = FUN_10043b1c4(param_1);
  if (PTR_s_Ability__Hero034__B2_1018597d0 == (undefined *)0x0) {
    uVar5 = 0;
  }
  else {
    uVar5 = 0x811c9dc5;
    cVar1 = *PTR_s_Ability__Hero034__B2_1018597d0;
    pcVar6 = PTR_s_Ability__Hero034__B2_1018597d0;
    while (cVar1 != '\0') {
      pcVar6 = pcVar6 + 1;
      uVar5 = (uVar5 ^ (int)cVar1) * 0x1000193;
      cVar1 = *pcVar6;
    }
  }
  *(uint *)(lVar3 + 0x28) = uVar5;
  plVar4 = (long *)FUN_10045309c(lVar3 + 0x10);
  (**(code **)(*plVar4 + 0x30))(plVar4,PTR_s_Ability__Hero034__B2_1018597d0,3,0);
  lVar3 = FUN_10042fdc4(param_1);
  plVar4 = (long *)FUN_10045309c(lVar3 + 0x10);
  (**(code **)(*plVar4 + 0x40))(plVar4,PTR_s_Ability__Hero034__B2_1018597d0);
  plVar4 = (long *)FUN_10049c8e4(lVar3 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x0001004155f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar4 + 0x30))(plVar4,PTR_s_Ability__Hero034__B_1018597c8);
  return;
}




void FUN_1004155fc(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  code *local_58;
  undefined4 local_50;
  
  *(uint *)(param_1 + 0x340) = *(uint *)(param_1 + 0x340) | 0x1280;
  *(code **)(param_1 + 0x338) = FUN_1004394e4;
  *(code **)(param_1 + 0x330) = FUN_100437424;
  lVar2 = FUN_10042e694();
  *(ushort *)(lVar2 + 0x48) = *(ushort *)(lVar2 + 0x48) | 0x20;
  *(byte *)(lVar2 + 0x60) = *(byte *)(lVar2 + 0x60) & 0xfc | 2;
  plVar3 = (long *)FUN_10043187c(lVar2 + 0x10);
  local_58 = FUN_100439568;
  local_50 = 4;
  (**(code **)(*plVar3 + 0x30))(plVar3,&local_58);
  lVar2 = FUN_10042e694(param_1);
  *(ushort *)(lVar2 + 0x48) = *(ushort *)(lVar2 + 0x48) | 0x40;
  *(ushort *)(lVar2 + 0x5a) = *(ushort *)(lVar2 + 0x5a) | 4;
  *(byte *)(lVar2 + 0x60) = *(byte *)(lVar2 + 0x60) & 0xfd | 0x21;
  plVar3 = (long *)FUN_100433de4(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))(plVar3,PTR_s_Buff_Grumpjaw_Perk_Armor_10185ce00);
  local_58 = (code *)CONCAT44(local_58._4_4_,1);
  local_50 = 1;
  (**(code **)(*plVar3 + 0x10))(plVar3,&local_58);
  lVar2 = FUN_10042e694(param_1);
  *(ushort *)(lVar2 + 0x48) = *(ushort *)(lVar2 + 0x48) | 0x40;
  *(byte *)(lVar2 + 0x60) = *(byte *)(lVar2 + 0x60) & 0xfc | 2;
  lVar2 = FUN_10043ab44(lVar2 + 0x10);
  puVar1 = PTR_s_Buff_Grumpjaw_Perk_CooldownCheck_10185ce08;
  *(undefined1 *)(lVar2 + 0x58) = 2;
  *(undefined8 *)(lVar2 + 0x48) = 0;
  *(undefined8 *)(lVar2 + 0x50) = 0;
  *(undefined1 *)(lVar2 + 0x50) = 2;
  *(undefined **)(lVar2 + 0x40) = puVar1;
  plVar3 = (long *)FUN_100433de4(lVar2 + 0x28);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))(plVar3,PTR_s_Buff_Grumpjaw_Perk_Armor_10185ce00);
  local_58 = FUN_100439550;
  local_50 = 4;
  (**(code **)(*plVar3 + 0x18))(plVar3,&local_58);
  plVar3 = (long *)FUN_100433e34(lVar2 + 0x28);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))
                             (plVar3,PTR_s_Buff_Grumpjaw_Perk_CooldownCheck_10185ce08);
  local_58 = FUN_1004395a8;
  local_50 = 3;
  (**(code **)(*plVar3 + 0x18))(plVar3,&local_58);
  lVar2 = FUN_10042e2c8(param_1);
  plVar3 = (long *)FUN_10049bbfc(lVar2 + 0x10);
  (**(code **)(*plVar3 + 0x38))();
  FUN_100450f38(&local_58,param_1 + 0x98);
  lVar2 = FUN_100433e90(&local_58);
  *(code **)(lVar2 + 0x18) = FUN_100439510;
  return;
}




void FUN_10041580c(void)

{
  return;
}




void FUN_100415810(long param_1)

{
  undefined8 uVar1;
  undefined4 local_30 [2];
  undefined4 local_28;
  
  uVar1 = FUN_100345d90(*(undefined4 *)(param_1 + 0x308));
  local_30[0] = FUN_1003dfe60(uVar1,1,0xb,0x19,0);
  local_28 = 1;
  FUN_10042eb40(param_1,local_30);
  return;
}




void FUN_100415868(void)

{
  long lVar1;
  long *plVar2;
  code *local_30;
  undefined4 local_28;
  
  lVar1 = FUN_10042e498();
  FUN_1004386bc(lVar1 + 0x10);
  plVar2 = (long *)FUN_10043ab94(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x40))();
  local_30 = FUN_1004395b4;
  local_28 = 4;
  (**(code **)(*plVar2 + 0x18))(plVar2,&local_30,1,2);
  return;
}




void FUN_1004158d8(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  code *local_30;
  undefined4 local_28;
  
  lVar1 = FUN_10042e2c8();
  lVar1 = lVar1 + 0x10;
  plVar2 = (long *)FUN_100441e68(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,"Bone_Spine");
  (**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Grumpjaw_Spike");
  plVar2 = (long *)FUN_10049bef0(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))(plVar2,"u_jaw_glow");
  (**(code **)(*plVar2 + 0x38))(0x3f800000);
  plVar2 = (long *)FUN_100451f14(lVar1);
  (**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Ability__Grumpjaw__B_FrenzyAttac_101859800);
  plVar2 = (long *)FUN_100430a84(lVar1);
  local_30 = FUN_1004396c4;
  local_28 = 3;
  (**(code **)(*plVar2 + 0x30))(plVar2,0xf,1,&local_30);
  lVar1 = FUN_10042e3b0(param_1);
  FUN_10049b814(lVar1 + 0x10);
  return;
}




void FUN_1004159c0(undefined8 param_1)

{
  undefined *puVar1;
  uint uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  char cVar7;
  uint uVar8;
  char *pcVar9;
  undefined4 local_40 [2];
  undefined4 local_38 [2];
  
  lVar3 = FUN_10042e2c8();
  lVar3 = lVar3 + 0x10;
  plVar4 = (long *)FUN_10049bf9c(lVar3);
  uVar2 = FUN_100451a18(param_1);
  uVar8 = 0xffffffff;
  if (uVar2 != 0xff) {
    uVar8 = ~(1 << (ulong)(uVar2 & 0x1f));
  }
  (**(code **)(*plVar4 + 0x30))(plVar4,uVar8 & 0xff,3);
  lVar5 = FUN_10049be00(lVar3);
  *(undefined4 *)(lVar5 + 0x58) = 2;
  *(code **)(lVar5 + 0x10) = FUN_100439878;
  *(undefined4 *)(lVar5 + 0x18) = 3;
  lVar5 = FUN_100451f64(lVar3);
  puVar1 = PTR_s_Ability__Grumpjaw__C_SpitOut_101859820;
  *(undefined **)(lVar5 + 0x10) = PTR_s_Ability__Grumpjaw__C_101859818;
  *(undefined **)(lVar5 + 0x18) = puVar1;
  plVar4 = (long *)FUN_100441e68(lVar3);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x60))();
  plVar4 = (long *)(**(code **)(*plVar4 + 0x48))(plVar4,"Effect_Grumpjaw_C_Drool");
  (**(code **)(*plVar4 + 0xb0))(plVar4,1);
  plVar4 = (long *)FUN_10049b7c4(lVar3);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x30))(plVar4,"Sound_Grumpjaw_Ability_C_Swallow");
  uVar6 = FUN_1010a1520();
  lVar3 = FUN_1010a0e0c(uVar6,0,"*KindredSoundBalance*",0);
  FUN_1003ac828(*(undefined4 *)(lVar3 + 0x3b4));
  (**(code **)(*plVar4 + 0x28))(plVar4);
  lVar3 = FUN_10042e498(param_1);
  plVar4 = (long *)FUN_10045607c(lVar3 + 0x10);
  (**(code **)(*plVar4 + 0x30))(plVar4,0x12);
  lVar3 = FUN_10042e580(param_1);
  *(undefined4 *)(lVar3 + 0x40) = 0x3f333333;
  *(byte *)(lVar3 + 0x44) = *(byte *)(lVar3 + 0x44) & 0xfe;
  plVar4 = (long *)FUN_10045607c(lVar3 + 0x10);
  (**(code **)(*plVar4 + 0x30))(plVar4,0x13);
  lVar3 = FUN_1004303b0(param_1);
  plVar4 = (long *)FUN_100454548(lVar3 + 0x10);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x30))
                             (plVar4,PTR_s_Ability__Grumpjaw__C_SpitOut_101859820);
  (**(code **)(*plVar4 + 0x28))(plVar4,FUN_1004397e8);
  lVar3 = FUN_10042f8e8(param_1);
  lVar5 = FUN_10049ca74(lVar3 + 0x10);
  FUN_1003a4e5c(local_40,PTR_s_Buff_Grumpjaw_Eaten_10185a858);
  *(undefined4 *)(lVar5 + 0x10) = local_40[0];
  *(byte *)(lVar5 + 0x28) = *(byte *)(lVar5 + 0x28) | 3;
  plVar4 = (long *)FUN_10043b538(lVar3 + 0x10);
  (**(code **)(*plVar4 + 0x30))(plVar4,PTR_s_Buff_Grumpjaw_Eaten_10185a858);
  if (DAT_101d23a38 != '\0') {
    lVar3 = FUN_10042fdc4(param_1);
    lVar5 = FUN_10049ca74(lVar3 + 0x10);
    FUN_1003a4e5c(local_38,PTR_s_Buff_Grumpjaw_Eaten_10185a858);
    *(undefined4 *)(lVar5 + 0x10) = local_38[0];
    *(byte *)(lVar5 + 0x28) = *(byte *)(lVar5 + 0x28) | 3;
    lVar3 = FUN_10043aaf4(lVar3 + 0x10);
    *(code **)(lVar3 + 0x10) = FUN_1004396d8;
  }
  uVar8 = 0x811c9dc5;
  lVar3 = FUN_10043988c(param_1);
  if (PTR_s_Buff_Withdraw_10185a458 == (undefined *)0x0) {
    uVar2 = 0;
  }
  else {
    cVar7 = *PTR_s_Buff_Withdraw_10185a458;
    uVar2 = 0x811c9dc5;
    if (cVar7 != '\0') {
      uVar2 = 0x811c9dc5;
      pcVar9 = PTR_s_Buff_Withdraw_10185a458;
      do {
        pcVar9 = pcVar9 + 1;
        uVar2 = (uVar2 ^ (int)cVar7) * 0x1000193;
        cVar7 = *pcVar9;
      } while (cVar7 != '\0');
    }
  }
  *(uint *)(lVar3 + 0x28) = uVar2;
  FUN_1004385f0(lVar3 + 0x10);
  lVar3 = FUN_10043988c(param_1);
  if (PTR_s_Buff_Item_TeleportBoots_Channeli_10185abe8 == (undefined *)0x0) {
    uVar8 = 0;
  }
  else {
    cVar7 = *PTR_s_Buff_Item_TeleportBoots_Channeli_10185abe8;
    pcVar9 = PTR_s_Buff_Item_TeleportBoots_Channeli_10185abe8;
    while (cVar7 != '\0') {
      pcVar9 = pcVar9 + 1;
      uVar8 = (uVar8 ^ (int)cVar7) * 0x1000193;
      cVar7 = *pcVar9;
    }
  }
  *(uint *)(lVar3 + 0x28) = uVar8;
  FUN_1004385f0(lVar3 + 0x10);
  return;
}




void FUN_100415ce8(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  undefined4 local_40 [2];
  undefined4 local_38;
  
  *(undefined4 *)(param_1 + 0x328) = 0x3dcccccd;
  puVar2 = PTR_s_onBeforeApplyHealName_10185d568;
  uVar3 = FUN_1004d2524(PTR_s_onBeforeApplyHealName_10185d568);
  uVar3 = FUN_100015208(puVar2,uVar3,0x12345678);
  lVar4 = param_1 + 0xa0;
  *(undefined4 *)(lVar4 + (ulong)*(uint *)(param_1 + 0x160) * 4) = uVar3;
  uVar1 = *(uint *)(param_1 + 0x160);
  *(code **)(param_1 + 0xe0 + (ulong)uVar1 * 8) = FUN_100439978;
  *(uint *)(param_1 + 0x160) = uVar1 + 1;
  puVar2 = PTR_s_onBuffIntervalName_10185d558;
  uVar3 = FUN_1004d2524(PTR_s_onBuffIntervalName_10185d558);
  uVar3 = FUN_100015208(puVar2,uVar3,0x12345678);
  *(undefined4 *)(lVar4 + (ulong)*(uint *)(param_1 + 0x160) * 4) = uVar3;
  uVar1 = *(uint *)(param_1 + 0x160);
  *(code **)(param_1 + 0xe0 + (ulong)uVar1 * 8) = FUN_1004399b0;
  *(uint *)(param_1 + 0x160) = uVar1 + 1;
  puVar2 = PTR_s_onActorDieName_10185d5b0;
  if (DAT_101d23a38 != '\0') {
    uVar3 = FUN_1004d2524(PTR_s_onActorDieName_10185d5b0);
    uVar3 = FUN_100015208(puVar2,uVar3,0x12345678);
    *(undefined4 *)(lVar4 + (ulong)*(uint *)(param_1 + 0x160) * 4) = uVar3;
    uVar1 = *(uint *)(param_1 + 0x160);
    *(code **)(lVar4 + (ulong)uVar1 * 8 + 0x40) = FUN_100439ac0;
    *(uint *)(param_1 + 0x160) = uVar1 + 1;
  }
  lVar4 = FUN_10042e2c8(param_1);
  lVar4 = lVar4 + 0x10;
  FUN_10049c4b0(lVar4);
  FUN_10049c210(lVar4);
  plVar5 = (long *)FUN_10049ca24(lVar4);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x30))(plVar5,FUN_10048ba98);
  (**(code **)(*plVar5 + 0x18))(plVar5,"AbilityCAttachPoint");
  plVar5 = (long *)FUN_100430a84(lVar4);
  local_40[0] = 0xbf800000;
  local_38 = 1;
  (**(code **)(*plVar5 + 0x30))(plVar5,0x11,2,local_40);
  lVar6 = FUN_10049b9b4(lVar4);
  *(undefined2 *)(lVar6 + 0x10) = 0x171e;
  FUN_10049b964(lVar4);
  return;
}




void FUN_100415e98(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  long lVar4;
  undefined1 auStack_38 [24];
  
  puVar2 = PTR_s_onAbilityEnterCancelledName_10185d5b8;
  uVar3 = FUN_1004d2524(PTR_s_onAbilityEnterCancelledName_10185d5b8);
  uVar3 = FUN_100015208(puVar2,uVar3,0x12345678);
  *(undefined4 *)(param_1 + 0xa0 + (ulong)*(uint *)(param_1 + 0x160) * 4) = uVar3;
  uVar1 = *(uint *)(param_1 + 0x160);
  *(code **)(param_1 + 0xa0 + (ulong)uVar1 * 8 + 0x40) = FUN_100439b98;
  *(uint *)(param_1 + 0x160) = uVar1 + 1;
  FUN_100450f38(auStack_38,param_1 + 0x98);
  lVar4 = FUN_100439be4(auStack_38);
  *(undefined4 *)(lVar4 + 0x10) = 0x17;
  *(char **)(lVar4 + 0x18) = "AbilityCSelfProjectile";
  return;
}




void FUN_100415f30(long param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  
  lVar1 = FUN_100345d90(*(undefined4 *)(param_1 + 0x308));
  if ((lVar1 != 0) && ((*(byte *)(lVar1 + 0x2f8) >> 3 & 1) != 0)) {
    FUN_1004370a0(param_1);
    return;
  }
  lVar1 = FUN_10042e498(param_1);
  lVar1 = lVar1 + 0x10;
  plVar2 = (long *)FUN_10043594c(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))(plVar2,"Stun");
  (**(code **)(*plVar2 + 0x20))();
  FUN_10049c260(lVar1);
  plVar2 = (long *)FUN_1004385a0(lVar1);
  (**(code **)(*plVar2 + 0x38))();
  plVar2 = (long *)FUN_1004385a0(lVar1);
  (**(code **)(*plVar2 + 0x50))();
  lVar1 = FUN_10042e2c8(param_1);
  lVar1 = lVar1 + 0x10;
  FUN_10049b964(lVar1);
  lVar3 = FUN_10049b9b4(lVar1);
  *(undefined2 *)(lVar3 + 0x10) = 0x51e;
  plVar2 = (long *)FUN_10049ca24(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))(plVar2,FUN_10048ba98);
                    /* WARNING: Could not recover jumptable at 0x000100416010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x18))(plVar2,"AbilityCAttachPoint");
  return;
}




void FUN_100416024(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  
  puVar2 = PTR_s_onBeforeApplyHealName_10185d568;
  uVar3 = FUN_1004d2524(PTR_s_onBeforeApplyHealName_10185d568);
  uVar3 = FUN_100015208(puVar2,uVar3,0x12345678);
  *(undefined4 *)(param_1 + 0xa0 + (ulong)*(uint *)(param_1 + 0x160) * 4) = uVar3;
  uVar1 = *(uint *)(param_1 + 0x160);
  *(code **)(param_1 + 0xa0 + (ulong)uVar1 * 8 + 0x40) = FUN_100439978;
  *(uint *)(param_1 + 0x160) = uVar1 + 1;
  lVar4 = FUN_10042e2c8(param_1);
  lVar4 = lVar4 + 0x10;
  FUN_10049b964(lVar4);
  lVar5 = FUN_10049b9b4(lVar4);
  *(undefined2 *)(lVar5 + 0x10) = 0x71e;
  FUN_10049c210(lVar4);
  return;
}




void FUN_1004160b4(void)

{
  long lVar1;
  char cVar2;
  uint uVar3;
  char *pcVar4;
  uint uVar5;
  
  uVar5 = 0x811c9dc5;
  lVar1 = FUN_100433030();
  if (PTR_s_Ability__Grumpjaw__B_101859810 == (undefined *)0x0) {
    uVar3 = 0;
  }
  else {
    cVar2 = *PTR_s_Ability__Grumpjaw__B_101859810;
    uVar3 = 0x811c9dc5;
    if (cVar2 != '\0') {
      uVar3 = 0x811c9dc5;
      pcVar4 = PTR_s_Ability__Grumpjaw__B_101859810;
      do {
        pcVar4 = pcVar4 + 1;
        uVar3 = (uVar3 ^ (int)cVar2) * 0x1000193;
        cVar2 = *pcVar4;
      } while (cVar2 != '\0');
    }
  }
  *(uint *)(lVar1 + 0x28) = uVar3;
  lVar1 = FUN_10049bf40(lVar1 + 0x10);
  if (PTR_s_Ability__Grumpjaw__B_101859810 == (undefined *)0x0) {
    uVar5 = 0;
  }
  else {
    cVar2 = *PTR_s_Ability__Grumpjaw__B_101859810;
    pcVar4 = PTR_s_Ability__Grumpjaw__B_101859810;
    while (cVar2 != '\0') {
      pcVar4 = pcVar4 + 1;
      uVar5 = (uVar5 ^ (int)cVar2) * 0x1000193;
      cVar2 = *pcVar4;
    }
  }
  *(uint *)(lVar1 + 0x20) = uVar5;
  *(code **)(lVar1 + 0x10) = FUN_100493024;
  *(undefined4 *)(lVar1 + 0x18) = 3;
  *(undefined4 *)(lVar1 + 0x28) = 1;
  return;
}




void FUN_100416188(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined1 auStack_50 [24];
  undefined4 local_38 [2];
  
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x10);
  FUN_100450f38(auStack_50,param_1 + 0x98);
  lVar1 = FUN_100436e1c(auStack_50);
  local_38[0] = DAT_101d90b3c;
  uVar3 = FUN_1003dfee8(uVar2,local_38,1,9);
  *(undefined8 *)(lVar1 + 0x10) = 0x100000017;
  *(undefined4 *)(lVar1 + 0x18) = uVar3;
  lVar1 = FUN_100436e1c(auStack_50);
  local_38[0] = DAT_101d90b3c;
  uVar3 = FUN_1003dfee8(uVar2,local_38,1,9);
  *(undefined8 *)(lVar1 + 0x10) = 0x100000018;
  *(undefined4 *)(lVar1 + 0x18) = uVar3;
  lVar1 = FUN_10042e3b0(param_1);
  FUN_10049b814(lVar1 + 0x10);
  return;
}




void FUN_10041624c(void)

{
  return;
}




void FUN_100416250(long param_1)

{
  long lVar1;
  undefined1 auStack_28 [24];
  
  FUN_100450f38(auStack_28,param_1 + 0x98);
  lVar1 = FUN_100439be4(auStack_28);
  *(undefined4 *)(lVar1 + 0x10) = 0x18;
  return;
}




void FUN_100416284(void)

{
  long lVar1;
  char cVar2;
  uint uVar3;
  char *pcVar4;
  uint uVar5;
  
  uVar5 = 0x811c9dc5;
  lVar1 = FUN_100433030();
  if (PTR_s_Ability__Grumpjaw__C_101859818 == (undefined *)0x0) {
    uVar3 = 0;
  }
  else {
    cVar2 = *PTR_s_Ability__Grumpjaw__C_101859818;
    uVar3 = 0x811c9dc5;
    if (cVar2 != '\0') {
      uVar3 = 0x811c9dc5;
      pcVar4 = PTR_s_Ability__Grumpjaw__C_101859818;
      do {
        pcVar4 = pcVar4 + 1;
        uVar3 = (uVar3 ^ (int)cVar2) * 0x1000193;
        cVar2 = *pcVar4;
      } while (cVar2 != '\0');
    }
  }
  *(uint *)(lVar1 + 0x28) = uVar3;
  lVar1 = FUN_10049bf40(lVar1 + 0x10);
  if (PTR_s_Ability__Grumpjaw__C_101859818 == (undefined *)0x0) {
    uVar5 = 0;
  }
  else {
    cVar2 = *PTR_s_Ability__Grumpjaw__C_101859818;
    pcVar4 = PTR_s_Ability__Grumpjaw__C_101859818;
    while (cVar2 != '\0') {
      pcVar4 = pcVar4 + 1;
      uVar5 = (uVar5 ^ (int)cVar2) * 0x1000193;
      cVar2 = *pcVar4;
    }
  }
  *(uint *)(lVar1 + 0x20) = uVar5;
  *(code **)(lVar1 + 0x10) = FUN_100493058;
  *(undefined4 *)(lVar1 + 0x18) = 3;
  *(undefined4 *)(lVar1 + 0x28) = 1;
  return;
}




void FUN_100416358(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  code *local_40;
  undefined4 local_38;
  
  lVar2 = FUN_10042e694();
  *(ushort *)(lVar2 + 0x48) = *(ushort *)(lVar2 + 0x48) | 0x40;
  *(byte *)(lVar2 + 0x60) = *(byte *)(lVar2 + 0x60) & 0xfc | 1;
  *(ushort *)(lVar2 + 0x5a) = *(ushort *)(lVar2 + 0x5a) | 4;
  lVar3 = FUN_10043ab44(lVar2 + 0x10);
  puVar1 = PTR_s_Buff_Reza_VolatileSpark_10185aa40;
  *(undefined1 *)(lVar3 + 0x58) = 0xe;
  *(undefined **)(lVar3 + 0x40) = puVar1;
  lVar2 = lVar3 + 0x10;
  FUN_10043b4e8(lVar2);
  plVar4 = (long *)FUN_10043ab94(lVar2);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x40))();
  local_40 = FUN_10043b43c;
  local_38 = 5;
  (**(code **)(*plVar4 + 0x18))(plVar4,&local_40,1,1);
  plVar4 = (long *)FUN_100434b18(lVar2);
  (**(code **)(*plVar4 + 0x30))(plVar4,DAT_10185aa48);
  plVar4 = (long *)FUN_10043b538(lVar2);
  (**(code **)(*plVar4 + 0x30))(plVar4,PTR_s_Buff_Reza_VolatileSpark_10185aa40);
  lVar2 = FUN_10043ab44(lVar3 + 0x28);
  puVar1 = PTR_s_Buff_Reza_C_Netherform_10185aa28;
  *(undefined1 *)(lVar2 + 0x58) = 2;
  *(undefined8 *)(lVar2 + 0x48) = 0;
  *(undefined8 *)(lVar2 + 0x50) = 0;
  *(undefined1 *)(lVar2 + 0x50) = 2;
  *(undefined **)(lVar2 + 0x40) = puVar1;
  FUN_10043b4e8(lVar2 + 0x10);
  plVar4 = (long *)FUN_100434b18(lVar2 + 0x10);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x30))(plVar4,PTR_s_Buff_Reza_VolatileSpark_10185aa40);
  local_40 = FUN_1003aeff4;
  local_38 = 3;
  (**(code **)(*plVar4 + 0x18))(plVar4,&local_40);
  return;
}




void FUN_1004164b8(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  undefined4 local_30 [2];
  undefined4 local_28;
  
  lVar1 = FUN_10042e2c8();
  plVar2 = (long *)FUN_100441e68(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x68))(plVar2,"CenterBody");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Reza_Perk_Marker");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0xb0))(plVar2,1);
  local_30[0] = 0x3f99999a;
  local_28 = 1;
  plVar2 = (long *)(**(code **)(*plVar2 + 0xd0))(plVar2,local_30);
  (**(code **)(*plVar2 + 0xc0))(0x3f800000,0x3f000000,0x3e4ccccd);
  lVar1 = FUN_10042e3b0(param_1);
  FUN_10049b814(lVar1 + 0x10);
  return;
}




void FUN_100416580(long param_1)

{
  long lVar1;
  long *plVar2;
  
  *(undefined4 *)(param_1 + 0x318) = 0x3dcccccd;
  if (*(float *)(param_1 + 0x31c) < 0.1) {
    *(undefined4 *)(param_1 + 0x31c) = 0x3dcccccd;
  }
  *(uint *)(param_1 + 0x340) = *(uint *)(param_1 + 0x340) & 0xffffffef;
  lVar1 = FUN_10042ea44();
  plVar2 = (long *)FUN_100441e68(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x68))(plVar2,"CenterBody");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Reza_Explosion_5mr");
  plVar2 = (long *)(**(code **)(*plVar2 + 0xb0))(plVar2,1);
                    /* WARNING: Could not recover jumptable at 0x00010041660c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x88))(plVar2,1);
  return;
}




void FUN_100416610(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar2 = FUN_10042e498();
  lVar2 = FUN_10043ab44(lVar2 + 0x10);
  puVar1 = PTR_s_Buff_Reza_Talent_NetherRage_10185aa10;
  *(undefined1 *)(lVar2 + 0x58) = 2;
  *(undefined8 *)(lVar2 + 0x48) = 0;
  *(undefined8 *)(lVar2 + 0x50) = 0;
  *(undefined1 *)(lVar2 + 0x50) = 2;
  *(undefined **)(lVar2 + 0x40) = puVar1;
  plVar3 = (long *)FUN_100433e34(lVar2 + 0x10);
  (**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Reza_NetherRage_BonusAttack_10185ce28);
  lVar2 = FUN_10042e2c8(param_1);
  lVar2 = lVar2 + 0x10;
  plVar3 = (long *)FUN_10049ba04(lVar2);
  (**(code **)(*plVar3 + 0x30))(plVar3,"Idle","Ability03_Idle");
  plVar3 = (long *)FUN_10049ba04(lVar2);
  (**(code **)(*plVar3 + 0x30))(plVar3,"IdleCombat","Ability03_IdleCombat");
  plVar3 = (long *)FUN_10049ba04(lVar2);
  (**(code **)(*plVar3 + 0x30))(plVar3,"Move","Ability03_Move");
  plVar3 = (long *)FUN_10049ba04(lVar2);
  (**(code **)(*plVar3 + 0x30))(plVar3,"FastMove","Ability03_Move");
  plVar3 = (long *)FUN_10049ba04(lVar2);
  (**(code **)(*plVar3 + 0x30))(plVar3,"Sprint","Ability03_Move");
  plVar3 = (long *)FUN_10049ba04(lVar2);
  (**(code **)(*plVar3 + 0x30))(plVar3,"MoveCombat","Ability03_MoveCombat");
  plVar3 = (long *)FUN_10049ba04(lVar2);
  (**(code **)(*plVar3 + 0x30))(plVar3,"MoveStart","Ability03_MoveStart");
  plVar3 = (long *)FUN_10049ba04(lVar2);
  (**(code **)(*plVar3 + 0x30))(plVar3,"MoveStop","Ability03_MoveStop");
  plVar3 = (long *)FUN_10049ba04(lVar2);
  (**(code **)(*plVar3 + 0x30))(plVar3,"IdleBrush","Ability03_Idle");
  plVar3 = (long *)FUN_10049ba04(lVar2);
  (**(code **)(*plVar3 + 0x30))(plVar3,"MoveBrush","Ability03_Move");
  plVar3 = (long *)FUN_10049ba04(lVar2);
  (**(code **)(*plVar3 + 0x30))(plVar3,"MoveStartBrush","Ability03_MoveStart");
  plVar3 = (long *)FUN_10049ba04(lVar2);
  (**(code **)(*plVar3 + 0x30))(plVar3,"MoveStopBrush","Ability03_MoveStop");
  plVar3 = (long *)FUN_10049ba04(lVar2);
  (**(code **)(*plVar3 + 0x30))(plVar3,"MoveIntoBrush","Ability03_Move");
  plVar3 = (long *)FUN_10049ba04(lVar2);
  (**(code **)(*plVar3 + 0x30))(plVar3,"MoveFromBrush","Ability03_Move");
  plVar3 = (long *)FUN_100451f14(lVar2);
  (**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Ability__Reza__C_NetherformAttac_1018598f0);
  plVar3 = (long *)FUN_10049b7c4(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,"Sound_Reza_Ability_C_Burning_Aura_Loop");
  uVar4 = FUN_1010a1520();
  lVar5 = FUN_1010a0e0c(uVar4,0,"*KindredSoundBalance*",0);
  FUN_1003aec0c(*(undefined4 *)(lVar5 + 0x404));
  (**(code **)(*plVar3 + 0x28))(plVar3);
  plVar3 = (long *)FUN_100441e68(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x60))();
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Reza_C_FireAura");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x78))(plVar3,1);
  plVar3 = (long *)(**(code **)(*plVar3 + 0xb0))(plVar3,1);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x90))();
  (**(code **)(*plVar3 + 0xb8))(plVar3,2);
  plVar3 = (long *)FUN_100441e68(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x78))(plVar3,"Bone_Head");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Reza_C_HeadFire");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x78))(plVar3,1);
  (**(code **)(*plVar3 + 0xb0))(plVar3,1);
  plVar3 = (long *)FUN_100441e68(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x78))(plVar3,"Bone_FlailL");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Reza_C_EmpoweredBolas");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x78))(plVar3,1);
  (**(code **)(*plVar3 + 0xb0))(plVar3,1);
  plVar3 = (long *)FUN_100441e68(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x78))(plVar3,"Bone_FlailR");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Reza_C_EmpoweredBolas");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x78))(plVar3,1);
  (**(code **)(*plVar3 + 0xb0))(plVar3,1);
  lVar2 = FUN_10042e95c(param_1);
  plVar3 = (long *)FUN_10049b864(lVar2 + 0x10);
  (**(code **)(*plVar3 + 0x30))(plVar3,5,FUN_10049cbb4);
  lVar2 = FUN_10042e3b0(param_1);
  FUN_10049b814(lVar2 + 0x10);
  lVar2 = FUN_10042fdc4(param_1);
  plVar3 = (long *)FUN_100441e68(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x78))(plVar3,"Bone_Head");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Reza_C_End");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x78))(plVar3,1);
                    /* WARNING: Could not recover jumptable at 0x000100416abc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0xb0))(plVar3,1);
  return;
}




void FUN_100416ac0(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  code *local_40;
  undefined4 local_38;
  
  lVar1 = FUN_10042e2c8();
  lVar1 = lVar1 + 0x10;
  plVar2 = (long *)FUN_100441e68(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,"Bone_FlailL");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Reza_B_EmpoweredAura");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0xb8))(plVar2,2);
  (**(code **)(*plVar2 + 0xb0))(plVar2,1);
  plVar2 = (long *)FUN_100441e68(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,"Bone_FlailR");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Reza_B_EmpoweredAura");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0xb8))(plVar2,2);
  (**(code **)(*plVar2 + 0xb0))(plVar2,1);
  lVar1 = FUN_10049bf40(lVar1);
  *(undefined4 *)(lVar1 + 0x20) = DAT_101d2c66c;
  *(undefined4 *)(lVar1 + 0x10) = 0xbe4ccccd;
  *(undefined4 *)(lVar1 + 0x18) = 1;
  *(undefined4 *)(lVar1 + 0x28) = 0;
  lVar1 = FUN_10042e694(param_1);
  *(ushort *)(lVar1 + 0x48) = *(ushort *)(lVar1 + 0x48) | 4;
  *(byte *)(lVar1 + 0x60) = *(byte *)(lVar1 + 0x60) & 0xfc | 1;
  *(ushort *)(lVar1 + 0x5a) = *(ushort *)(lVar1 + 0x5a) | 4;
  FUN_10043b4e8(lVar1 + 0x10);
  plVar2 = (long *)FUN_10043ab94(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x40))();
  local_40 = FUN_10043b59c;
  local_38 = 3;
  (**(code **)(*plVar2 + 0x18))(plVar2,&local_40,1,1);
  lVar1 = FUN_10042e694(param_1);
  *(ushort *)(lVar1 + 0x48) = *(ushort *)(lVar1 + 0x48) | 0x40;
  *(byte *)(lVar1 + 0x60) = *(byte *)(lVar1 + 0x60) & 0xfc | 1;
  *(ushort *)(lVar1 + 0x5a) = *(ushort *)(lVar1 + 0x5a) | 4;
  FUN_1004385f0(lVar1 + 0x10);
  lVar1 = FUN_10042e3b0(param_1);
  FUN_10049b814(lVar1 + 0x10);
  return;
}




void FUN_100416ca4(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar1 = FUN_10042ea44();
  plVar2 = (long *)FUN_100441e18(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x38))(plVar2,"Sound_Reza_Ability_C_Disappear");
  uVar3 = FUN_1010a1520();
  lVar4 = FUN_1010a0e0c(uVar3,0,"*KindredSoundBalance*",0);
  FUN_1003aec0c(*(undefined4 *)(lVar4 + 0x404));
  (**(code **)(*plVar2 + 0x28))(plVar2);
  plVar2 = (long *)FUN_1004385a0(lVar1 + 0x10);
  (**(code **)(*plVar2 + 0x50))();
  lVar1 = FUN_10042e2c8(param_1);
  lVar1 = lVar1 + 0x10;
  FUN_10049c4b0(lVar1);
  FUN_10049c210(lVar1);
  FUN_10049cb64(lVar1);
  lVar1 = FUN_10049b9b4(lVar1);
  *(undefined2 *)(lVar1 + 0x10) = 0x1500;
  lVar1 = FUN_10042fdc4(param_1);
  lVar1 = lVar1 + 0x10;
  plVar2 = (long *)FUN_10043594c(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))(plVar2,"Ability03_End");
  (**(code **)(*plVar2 + 0x18))(plVar2,"AttackToIdleCombat");
  plVar2 = (long *)FUN_100441e68(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x60))();
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Reza_C_Explosion");
  (**(code **)(*plVar2 + 0x78))(plVar2,1);
  plVar2 = (long *)FUN_100441e18(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x38))(plVar2,"Sound_Reza_Ability_C_Reappear");
  uVar3 = FUN_1010a1520();
  lVar4 = FUN_1010a0e0c(uVar3,0,"*KindredSoundBalance*",0);
  FUN_1003aec0c(*(undefined4 *)(lVar4 + 0x404));
  (**(code **)(*plVar2 + 0x28))(plVar2);
  plVar2 = (long *)FUN_100441e18(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x38))(plVar2,"Sound_Reza_Ability_C_Landing");
  uVar3 = FUN_1010a1520();
  lVar1 = FUN_1010a0e0c(uVar3,0,"*KindredSoundBalance*",0);
  FUN_1003aec0c(*(undefined4 *)(lVar1 + 0x404));
                    /* WARNING: Could not recover jumptable at 0x000100416e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x28))(plVar2);
  return;
}




void FUN_100416e74(void)

{
  long lVar1;
  
  lVar1 = FUN_10042e2c8();
  lVar1 = FUN_10049b9b4(lVar1 + 0x10);
  *(undefined2 *)(lVar1 + 0x10) = 0x500;
  return;
}




void FUN_100416e98(long param_1)

{
  long lVar1;
  long *plVar2;
  
  *(undefined4 *)(param_1 + 0x318) = 0x3f800000;
  if (*(float *)(param_1 + 0x31c) < 1.0) {
    *(undefined4 *)(param_1 + 0x31c) = 0x3f800000;
  }
  *(uint *)(param_1 + 0x340) = *(uint *)(param_1 + 0x340) & 0xffffffef;
  lVar1 = FUN_10042e2c8();
  plVar2 = (long *)FUN_100441e68(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x98))(plVar2,2);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x60))();
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Reza_Ring_A_4mr");
                    /* WARNING: Could not recover jumptable at 0x000100416f14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0xb0))(plVar2,1);
  return;
}




void FUN_100416f18(void)

{
  long lVar1;
  long *plVar2;
  code *local_30;
  undefined4 local_28;
  
  lVar1 = FUN_1004303b0();
  plVar2 = (long *)FUN_10043fc58(lVar1 + 0x10);
  local_30 = FUN_10043b588;
  local_28 = 3;
  (**(code **)(*plVar2 + 0x30))(plVar2,&local_30);
  plVar2 = (long *)FUN_10043ab94(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x40))();
  (**(code **)(*plVar2 + 0x38))(plVar2,"DAMAGE",2);
  return;
}




void FUN_100416f98(undefined8 param_1)

{
  code *local_20;
  undefined4 local_18;
  
  local_20 = FUN_10043b5b0;
  local_18 = 3;
  FUN_10043050c(0,0x3f800000,param_1,&local_20);
  return;
}




void FUN_100416fd4(void)

{
  return;
}




void FUN_100416fd8(void)

{
  return;
}




void FUN_100416fdc(void)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_10042e2c8();
  plVar2 = (long *)FUN_10049b864(lVar1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x000100417008. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x30))(plVar2,4,FUN_100494b54);
  return;
}




void FUN_10041700c(void)

{
  return;
}




void FUN_100417010(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined1 auStack_40 [24];
  undefined4 local_28 [2];
  
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x10);
  FUN_100450f38(auStack_40,param_1 + 0x98);
  lVar1 = FUN_100436e1c(auStack_40);
  local_28[0] = DAT_101d90dcc;
  uVar3 = FUN_1003dfee8(uVar2,local_28,0,9);
  *(undefined8 *)(lVar1 + 0x10) = 0x10000000f;
  *(undefined4 *)(lVar1 + 0x18) = uVar3;
  return;
}




void FUN_100417080(void)

{
  long lVar1;
  long *plVar2;
  undefined4 local_20 [2];
  undefined4 local_18;
  
  lVar1 = FUN_10042ea44();
  plVar2 = (long *)FUN_100441e68(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x38))();
  plVar2 = (long *)(**(code **)(*plVar2 + 0x68))(plVar2,"CenterBody");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Reza_B_Attack_Hit");
  local_20[0] = 0x3e4ccccd;
  local_18 = 1;
  (**(code **)(*plVar2 + 0x60))(plVar2,local_20);
  return;
}




void FUN_1004170fc(long param_1)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  char *pcVar5;
  undefined8 uVar6;
  undefined4 local_40 [2];
  undefined4 local_38;
  
  if (DAT_101d23a38 == '\0') {
    uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x10);
    lVar2 = FUN_10042ea44();
    uVar3 = FUN_1003a47d0(uVar6,PTR_s_Buff_Reza_B_EmpoweredAttack_10185a9e0);
    if ((uVar3 & 1) == 0) {
      iVar1 = FUN_100432d40(param_1);
      if (iVar1 == DAT_101d2c748) {
        pcVar5 = "Effect_Reza_AA";
      }
      else {
        iVar1 = FUN_100432d40(param_1);
        if (iVar1 == DAT_101d2c74c) {
          pcVar5 = "Effect_Reza_AA_Alt";
        }
        else {
          iVar1 = FUN_100432d40(param_1);
          if (iVar1 == DAT_101d2c750) {
            pcVar5 = "Effect_Reza_AA_Crit";
          }
          else {
            iVar1 = FUN_100432d40(param_1);
            pcVar5 = "Effect_Reza_C_Attack";
            if (iVar1 != DAT_101d2c754) {
              pcVar5 = (char *)0x0;
            }
          }
        }
      }
    }
    else {
      pcVar5 = "Effect_Reza_B_Attack";
    }
    plVar4 = (long *)FUN_100441e68(lVar2 + 0x10);
    plVar4 = (long *)(**(code **)(*plVar4 + 0x60))();
    plVar4 = (long *)(**(code **)(*plVar4 + 0x48))(plVar4,pcVar5);
    local_40[0] = 0x3e4ccccd;
    local_38 = 1;
    (**(code **)(*plVar4 + 0x60))(plVar4,local_40);
  }
  return;
}




void FUN_100417238(void)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_10042e2c8();
  plVar2 = (long *)FUN_10049bbfc(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))();
                    /* WARNING: Could not recover jumptable at 0x000100417268. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x58))(plVar2,1);
  return;
}




void FUN_10041726c(void)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_10042e95c();
  plVar2 = (long *)FUN_10049b864(lVar1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x000100417298. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x30))(plVar2,4,FUN_10043b2b0);
  return;
}




void FUN_10041729c(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  code *local_40;
  undefined4 local_38;
  
  lVar2 = FUN_10042e694();
  *(ushort *)(lVar2 + 0x48) = *(ushort *)(lVar2 + 0x48) | 0x10;
  *(byte *)(lVar2 + 0x60) = *(byte *)(lVar2 + 0x60) & 0xfc | 2;
  lVar2 = FUN_10043ab44(lVar2 + 0x10);
  puVar1 = PTR_s_Buff_Tony_Perk_BarrierControl_10185ce30;
  *(undefined1 *)(lVar2 + 0x58) = 0xe;
  *(undefined **)(lVar2 + 0x40) = puVar1;
  plVar3 = (long *)FUN_100433e34(lVar2 + 0x28);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Tony_Perk_Barrier_10185ce38);
  local_40 = FUN_10043b3b0;
  local_38 = 3;
  (**(code **)(*plVar3 + 0x18))(plVar3,&local_40);
  plVar3 = (long *)FUN_100433e34(lVar2 + 0x28);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))
                             (plVar3,PTR_s_Buff_Tony_Perk_BarrierControl_10185ce30);
  local_40 = FUN_10043b3bc;
  local_38 = 3;
  (**(code **)(*plVar3 + 0x18))(plVar3,&local_40);
  lVar2 = FUN_10042e2c8(param_1);
  plVar3 = (long *)FUN_10049bbfc(lVar2 + 0x10);
  (**(code **)(*plVar3 + 0x38))();
  return;
}




void FUN_10041739c(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_10042e2c8();
  lVar1 = lVar1 + 0x10;
  plVar2 = (long *)FUN_100451f14(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Ability__Tony__A1_101859850);
  (**(code **)(*plVar2 + 0x40))(0x40600000);
  plVar2 = (long *)FUN_100441e68(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,"Bone_Rightjet");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Tony_Buff_A");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,1);
  (**(code **)(*plVar2 + 0xb0))(plVar2,0);
  plVar2 = (long *)FUN_100441e68(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,"Bone_Leftjet");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Tony_Buff_A_L");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,1);
  (**(code **)(*plVar2 + 0xb0))(plVar2,0);
  lVar1 = FUN_10042e3b0(param_1);
  FUN_10049b814(lVar1 + 0x10);
  return;
}




void FUN_100417498(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_10042e2c8();
  lVar1 = lVar1 + 0x10;
  plVar2 = (long *)FUN_100451f14(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Ability__Tony__A2_101859858);
  (**(code **)(*plVar2 + 0x40))(0x40600000);
  plVar2 = (long *)FUN_100441e68(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,"Bone_Rightjet");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Tony_Buff_A_2");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,1);
  (**(code **)(*plVar2 + 0xb0))(plVar2,0);
  plVar2 = (long *)FUN_100441e68(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,"Bone_Leftjet");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Tony_Buff_A_L_2");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,1);
  (**(code **)(*plVar2 + 0xb0))(plVar2,0);
  lVar1 = FUN_10042e3b0(param_1);
  FUN_10049b814(lVar1 + 0x10);
  return;
}




void FUN_100417594(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_10042e2c8();
  lVar1 = lVar1 + 0x10;
  plVar2 = (long *)FUN_100451f14(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Ability__Tony__A3_101859860);
  (**(code **)(*plVar2 + 0x40))(0x40600000);
  plVar2 = (long *)FUN_100441e68(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,"Bone_Rightjet");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Tony_Buff_A_3");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,1);
  (**(code **)(*plVar2 + 0xb0))(plVar2,0);
  plVar2 = (long *)FUN_100441e68(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,"Bone_Leftjet");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Tony_Buff_A_L_3");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,1);
  (**(code **)(*plVar2 + 0xb0))(plVar2,0);
  lVar1 = FUN_10042e3b0(param_1);
  FUN_10049b814(lVar1 + 0x10);
  return;
}




void FUN_100417690(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  code *local_40;
  undefined4 local_38;
  
  local_40 = FUN_10043b414;
  local_38 = 3;
  FUN_10043050c(0,0x3f800000,param_1,&local_40);
  lVar1 = FUN_10042e694(param_1);
  *(ushort *)(lVar1 + 0x48) = *(ushort *)(lVar1 + 0x48) | 4;
  *(byte *)(lVar1 + 0x60) = *(byte *)(lVar1 + 0x60) & 0xfc | 1;
  *(ushort *)(lVar1 + 0x5a) = *(ushort *)(lVar1 + 0x5a) | 4;
  lVar1 = FUN_10043aaf4(lVar1 + 0x10);
  *(code **)(lVar1 + 0x10) = FUN_10043b3c8;
  lVar1 = FUN_10042e3b0(param_1);
  FUN_10049b814(lVar1 + 0x10);
  lVar1 = FUN_10042e2c8(param_1);
  plVar2 = (long *)FUN_10049b7c4(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))(plVar2,"Sound_Tony_Ability_A_Loop");
  uVar3 = FUN_1010a1520();
  lVar1 = FUN_1010a0e0c(uVar3,0,"*KindredSoundBalance*",0);
  FUN_1003ae36c(*(undefined4 *)(lVar1 + 0x478));
  (**(code **)(*plVar2 + 0x28))(plVar2);
  lVar1 = FUN_10042fdc4(param_1);
  plVar2 = (long *)FUN_100441e18(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x38))(plVar2,"Sound_Tony_Ability_A_End");
  uVar3 = FUN_1010a1520();
  lVar1 = FUN_1010a0e0c(uVar3,0,"*KindredSoundBalance*",0);
  FUN_1003ae36c(*(undefined4 *)(lVar1 + 0x474));
                    /* WARNING: Could not recover jumptable at 0x0001004177dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x28))(plVar2);
  return;
}




void FUN_1004177e0(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  code *local_30;
  undefined4 local_28;
  
  lVar1 = FUN_10042ea44();
  plVar2 = (long *)FUN_1004385a0(lVar1 + 0x10);
  (**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_Tony_Perk_BarrierControl_10185ce30);
  lVar1 = FUN_10042e694(param_1);
  *(ushort *)(lVar1 + 0x48) = *(ushort *)(lVar1 + 0x48) | 0x10;
  *(byte *)(lVar1 + 0x60) = *(byte *)(lVar1 + 0x60) & 0xfc | 2;
  plVar2 = (long *)FUN_10043187c(lVar1 + 0x10);
  local_30 = FUN_10043b428;
  local_28 = 3;
  (**(code **)(*plVar2 + 0x40))(plVar2,&local_30);
  lVar1 = FUN_10042e3b0(param_1);
  FUN_10049b814(lVar1 + 0x10);
  return;
}




void FUN_100417884(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  
  lVar1 = FUN_10042e498();
  plVar2 = (long *)FUN_100441e18(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x38))(plVar2,"Sound_Tony_Attack_Impact_01");
  uVar3 = FUN_1010a1520();
  lVar1 = FUN_1010a0e0c(uVar3,0,"*KindredSoundBalance*",0);
  FUN_1003ae36c(*(undefined4 *)(lVar1 + 0x474));
  plVar2 = (long *)(**(code **)(*plVar2 + 0x28))(plVar2);
  (**(code **)(*plVar2 + 0x18))(plVar2,"Sound_Tony_Attack_Impact_02");
  lVar1 = FUN_10042e2c8(param_1);
  plVar2 = (long *)FUN_10049b7c4(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))(plVar2,"Sound_Tony_Ability_B_Taunted_loop");
  uVar3 = FUN_1010a1520();
  lVar1 = FUN_1010a0e0c(uVar3,0,"*KindredSoundBalance*",0);
  FUN_1003ae36c(*(undefined4 *)(lVar1 + 0x474));
  (**(code **)(*plVar2 + 0x28))(plVar2);
  lVar1 = FUN_10042e3b0(param_1);
  plVar2 = (long *)FUN_100441e18(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x38))(plVar2,"Sound_Tony_Ability_B_End");
  uVar3 = FUN_1010a1520();
  lVar1 = FUN_1010a0e0c(uVar3,0,"*KindredSoundBalance*",0);
  FUN_1003ae36c(*(undefined4 *)(lVar1 + 0x474));
                    /* WARNING: Could not recover jumptable at 0x0001004179b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x28))(plVar2);
  return;
}




void FUN_1004179b8(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = FUN_100437bc0();
  FUN_10049cb14(lVar1 + 0x10);
  lVar1 = FUN_10042e498(param_1);
  FUN_10049b914(lVar1 + 0x10);
  return;
}




void FUN_1004179ec(long param_1)

{
  long lVar1;
  long *plVar2;
  
  *(undefined4 *)(param_1 + 0x318) = 0x3f800000;
  if (*(float *)(param_1 + 0x31c) < 1.0) {
    *(undefined4 *)(param_1 + 0x31c) = 0x3f800000;
  }
  *(uint *)(param_1 + 0x340) = *(uint *)(param_1 + 0x340) & 0xffffffef;
  lVar1 = FUN_10042e2c8(param_1);
  plVar2 = (long *)FUN_100441e68(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x60))();
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Tony_C_Warning");
  (**(code **)(*plVar2 + 0xb0))(plVar2,1);
  lVar1 = FUN_10042fdc4(param_1);
  FUN_100434ac8(lVar1 + 0x10);
  return;
}




void FUN_100417a7c(void)

{
  long lVar1;
  long *plVar2;
  code *local_20;
  undefined4 local_18;
  
  lVar1 = FUN_10042e2c8();
  plVar2 = (long *)FUN_100430a84(lVar1 + 0x10);
  local_20 = FUN_100494f1c;
  local_18 = 3;
  (**(code **)(*plVar2 + 0x30))(plVar2,0xf,1,&local_20);
  return;
}




void FUN_100417acc(void)

{
  long lVar1;
  long *plVar2;
  undefined4 local_20 [2];
  undefined4 local_18;
  
  lVar1 = FUN_10042e694();
  *(ushort *)(lVar1 + 0x48) = *(ushort *)(lVar1 + 0x48) | 0x10;
  *(byte *)(lVar1 + 0x60) = *(byte *)(lVar1 + 0x60) & 0xfc | 1;
  plVar2 = (long *)FUN_10043187c(lVar1 + 0x10);
  local_20[0] = 0;
  local_18 = 1;
  (**(code **)(*plVar2 + 0x30))(plVar2,local_20);
  return;
}




void FUN_100417b28(void)

{
  return;
}




void FUN_100417b2c(void)

{
  return;
}




void FUN_100417b30(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  undefined4 local_40 [2];
  undefined4 local_38;
  
  FUN_10042ebc4(param_1,1);
  lVar1 = FUN_10042e2c8(param_1);
  lVar1 = lVar1 + 0x10;
  plVar2 = (long *)FUN_100441e68(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,"Bone_Rightjet");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Tony_W_R_Thruster");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,1);
  local_40[0] = 0x3fc00000;
  local_38 = 1;
  plVar2 = (long *)(**(code **)(*plVar2 + 0x60))(plVar2,local_40);
  (**(code **)(*plVar2 + 0xb0))(plVar2,0);
  plVar2 = (long *)FUN_100441e68(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,"Bone_Leftjet");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Tony_W_L_Thruster");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,1);
  local_40[0] = 0x3fc00000;
  local_38 = 1;
  plVar2 = (long *)(**(code **)(*plVar2 + 0x60))(plVar2,local_40);
  (**(code **)(*plVar2 + 0xb0))(plVar2,0);
  plVar2 = (long *)FUN_100441e68(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x60))();
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Tony_Withdraw");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,1);
  local_40[0] = 0x3fc00000;
  local_38 = 1;
  plVar2 = (long *)(**(code **)(*plVar2 + 0x60))(plVar2,local_40);
  (**(code **)(*plVar2 + 0xb0))(plVar2,0);
  return;
}




void FUN_100417ca8(void)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  
  lVar1 = FUN_10042e498();
  plVar2 = (long *)FUN_100441e18(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x38))(plVar2,"Sound_Grace_Heavy_Impact_01");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x18))(plVar2,"Sound_Grace_Heavy_Impact_02");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x18))(plVar2,"Sound_Grace_Heavy_Impact_03");
  uVar3 = FUN_1010a1520();
  lVar1 = FUN_1010a0e0c(uVar3,0,"*KindredSoundBalance*",0);
  FUN_1003abdc8(*(undefined4 *)(lVar1 + 0x3d4));
                    /* WARNING: Could not recover jumptable at 0x000100417d34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x28))(plVar2);
  return;
}




void FUN_100417d38(void)

{
  char cVar1;
  long lVar2;
  long *plVar3;
  uint uVar4;
  char *pcVar5;
  
  lVar2 = FUN_100438a9c();
  if (PTR_s_Ability__Grace__A_101859928 == (undefined *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = 0x811c9dc5;
    cVar1 = *PTR_s_Ability__Grace__A_101859928;
    pcVar5 = PTR_s_Ability__Grace__A_101859928;
    while (cVar1 != '\0') {
      pcVar5 = pcVar5 + 1;
      uVar4 = (uVar4 ^ (int)cVar1) * 0x1000193;
      cVar1 = *pcVar5;
    }
  }
  *(uint *)(lVar2 + 0x28) = uVar4;
  plVar3 = (long *)FUN_100433e34(lVar2 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x000100417da8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Grace_Passive_A_10185ce60);
  return;
}




void FUN_100417dac(undefined8 param_1)

{
  code *local_20;
  undefined4 local_18;
  
  local_20 = FUN_100438b8c;
  local_18 = 3;
  FUN_10043050c(0,0x3f800000,param_1,&local_20);
  return;
}




void FUN_100417de8(void)

{
  long lVar1;
  long *plVar2;
  code *local_20;
  undefined4 local_18;
  
  lVar1 = FUN_10042e694();
  *(ushort *)(lVar1 + 0x48) = *(ushort *)(lVar1 + 0x48) | 0x10;
  *(byte *)(lVar1 + 0x60) = *(byte *)(lVar1 + 0x60) & 0xfc | 2;
  plVar2 = (long *)FUN_10043187c(lVar1 + 0x10);
  local_20 = FUN_100438b98;
  local_18 = 3;
  (**(code **)(*plVar2 + 0x40))(plVar2,&local_20);
  return;
}




void FUN_100417e4c(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_10042e3b0();
  FUN_10049b814(lVar1 + 0x10);
  lVar1 = FUN_10042fdc4(param_1);
  plVar2 = (long *)FUN_10049c8e4(lVar1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x000100417e90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Ability__Grace__A_101859928);
  return;
}




void FUN_100417e94(void)

{
  return;
}




void FUN_100417e98(long param_1)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  undefined4 local_40 [2];
  undefined4 local_38;
  
  lVar2 = FUN_10042fdc4();
  plVar3 = (long *)FUN_10043d6ac(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Ability__Grace__A_101859928);
  local_40[0] = 0;
  local_38 = 1;
  (**(code **)(*plVar3 + 0x20))(plVar3,local_40);
  iVar1 = FUN_1003a47d0(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x10),
                        PTR_s_Buff_Grace_Talent_DoubleBenedict_10185ce80);
  if (iVar1 != 0) {
    lVar2 = FUN_10049c934(lVar2 + 0x10);
    *(undefined **)(lVar2 + 0x10) = PTR_s_Ability__Grace__A_101859928;
    *(code **)(lVar2 + 0x18) = FUN_100438bac;
    *(undefined4 *)(lVar2 + 0x20) = 3;
    *(undefined1 *)(lVar2 + 0x28) = 0;
  }
  return;
}




void FUN_100417f40(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  code *local_40;
  undefined4 local_38;
  
  lVar1 = FUN_10042e498();
  lVar1 = lVar1 + 0x10;
  plVar2 = (long *)FUN_100441e18(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x38))(plVar2,"Sound_Grace_A_Shielded_01");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x18))(plVar2,"Sound_Grace_A_Shielded_02");
  uVar3 = FUN_1010a1520();
  lVar4 = FUN_1010a0e0c(uVar3,0,"*KindredSoundBalance*",0);
  FUN_1003abdc8(*(undefined4 *)(lVar4 + 0x3d8));
  (**(code **)(*plVar2 + 0x28))(plVar2);
  plVar2 = (long *)FUN_100451bac(lVar1);
  plVar5 = (long *)(**(code **)(*plVar2 + 0x30))(plVar2,"*Grace_A_Guard*",1);
  (**(code **)(*plVar5 + 0x18))(plVar5,"CenterBody");
  plVar5 = (long *)FUN_100492d2c(lVar1);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x30))
                             (plVar5,PTR_s_Buff_Grace_A_GuardOmniVisuals_10185ce68,plVar2 + 2);
  (**(code **)(*plVar5 + 0x20))(plVar5,FUN_100438da4);
  lVar1 = FUN_10042e2c8(param_1);
  plVar5 = (long *)FUN_10049b7c4(lVar1 + 0x10);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x30))(plVar5,"Sound_Grace_A_ShieldLoop_01");
  plVar5 = (long *)(**(code **)(*plVar5 + 0x18))(plVar5,"Sound_Grace_A_ShieldLoop_02");
  uVar3 = FUN_1010a1520();
  lVar1 = FUN_1010a0e0c(uVar3,0,"*KindredSoundBalance*",0);
  FUN_1003abdc8(*(undefined4 *)(lVar1 + 0x3d8));
  (**(code **)(*plVar5 + 0x28))(plVar5);
  lVar1 = FUN_10042e694(param_1);
  *(ushort *)(lVar1 + 0x48) = *(ushort *)(lVar1 + 0x48) | 0x10;
  *(byte *)(lVar1 + 0x60) = *(byte *)(lVar1 + 0x60) & 0xfc | 2;
  *(code **)(lVar1 + 0x30) = FUN_100438be4;
  plVar5 = (long *)FUN_10043187c(lVar1 + 0x10);
  local_40 = FUN_100438cbc;
  local_38 = 4;
  (**(code **)(*plVar5 + 0x40))(plVar5,&local_40);
  lVar1 = FUN_10042e3b0(param_1);
  FUN_10049b814(lVar1 + 0x10);
  lVar1 = FUN_10042fdc4(param_1);
  lVar4 = FUN_10049c984(lVar1 + 0x10);
  *(long **)(lVar4 + 0x10) = plVar2 + 2;
  FUN_10049c9d4(lVar1 + 0x10);
  return;
}




void FUN_10041813c(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_10042e498();
  plVar2 = (long *)FUN_10043594c(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))(plVar2,"Spawn_Omni");
  (**(code **)(*plVar2 + 0x18))(plVar2,"AttackToIdleCombat");
  lVar1 = FUN_10043aaf4(lVar1 + 0x10);
  *(code **)(lVar1 + 0x10) = FUN_100438de8;
  lVar1 = FUN_10042e580(param_1);
  *(undefined4 *)(lVar1 + 0x40) = 0x3dcccccd;
  *(byte *)(lVar1 + 0x44) = *(byte *)(lVar1 + 0x44) & 0xfe;
  lVar1 = FUN_10043aaf4(lVar1 + 0x10);
  *(code **)(lVar1 + 0x10) = FUN_100438de8;
  lVar1 = FUN_10042e2c8(param_1);
  plVar2 = (long *)FUN_10049ca24(lVar1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x0001004181ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x30))(plVar2,FUN_100438dbc);
  return;
}




void FUN_1004181f0(long param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  undefined4 uVar6;
  code *local_40;
  undefined4 local_38;
  
  lVar1 = FUN_10042e498();
  lVar1 = lVar1 + 0x10;
  plVar2 = (long *)FUN_100441e18(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x38))(plVar2,"Sound_Grace_A_Shielded_01");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x18))(plVar2,"Sound_Grace_A_Shielded_02");
  uVar3 = FUN_1010a1520();
  lVar4 = FUN_1010a0e0c(uVar3,0,"*KindredSoundBalance*",0);
  FUN_1003abdc8(*(undefined4 *)(lVar4 + 0x3d8));
  (**(code **)(*plVar2 + 0x28))(plVar2);
  lVar4 = FUN_10043aaf4(lVar1);
  *(code **)(lVar4 + 0x10) = FUN_100438e84;
  plVar2 = (long *)FUN_100451bac(lVar1);
  plVar5 = (long *)(**(code **)(*plVar2 + 0x30))(plVar2,"*Grace_A_Guard*",1);
  (**(code **)(*plVar5 + 0x18))(plVar5,"CenterBody");
  plVar5 = (long *)FUN_100492d2c(lVar1);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x30))
                             (plVar5,PTR_s_Buff_Grace_A_GuardDirectionalVis_10185ce70,plVar2 + 2);
  (**(code **)(*plVar5 + 0x20))(plVar5,FUN_100439250);
  lVar1 = FUN_10042e580(param_1);
  *(undefined4 *)(lVar1 + 0x40) = 0x3dcccccd;
  *(byte *)(lVar1 + 0x44) = *(byte *)(lVar1 + 0x44) & 0xfe;
  lVar1 = FUN_10043aaf4(lVar1 + 0x10);
  *(code **)(lVar1 + 0x10) = FUN_1004390d4;
  lVar1 = FUN_10042e694(param_1);
  *(ushort *)(lVar1 + 0x48) = *(ushort *)(lVar1 + 0x48) | 0x10;
  *(byte *)(lVar1 + 0x60) = *(byte *)(lVar1 + 0x60) & 0xfc | 2;
  lVar4 = *(long *)(*(long *)(param_1 + 0x10) + 0x10);
  if (*(int *)(lVar4 + 0x260) != *(int *)(param_1 + 0x308)) {
    lVar4 = FUN_100345d90(*(int *)(param_1 + 0x308));
  }
  uVar6 = FUN_1003dfe60(lVar4,0,9,0x19,0);
  *(code **)(lVar1 + 0x28) = FUN_1004392c4;
  *(undefined4 *)(lVar1 + 0x44) = uVar6;
  plVar5 = (long *)FUN_10043187c(lVar1 + 0x10);
  local_40 = FUN_100438cbc;
  local_38 = 4;
  (**(code **)(*plVar5 + 0x40))(plVar5,&local_40);
  plVar5 = (long *)FUN_100433e34(lVar1 + 0x10);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x30))(plVar5,PTR_s_Buff_Grace_A_GuardHitImpact_10185ce78)
  ;
  (**(code **)(*plVar5 + 0x58))(plVar5,FUN_1004392f8);
  lVar1 = FUN_10042e2c8(param_1);
  plVar5 = (long *)FUN_10049b7c4(lVar1 + 0x10);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x30))(plVar5,"Sound_Grace_A_ShieldLoop_01");
  plVar5 = (long *)(**(code **)(*plVar5 + 0x18))(plVar5,"Sound_Grace_A_ShieldLoop_02");
  uVar3 = FUN_1010a1520();
  lVar1 = FUN_1010a0e0c(uVar3,0,"*KindredSoundBalance*",0);
  FUN_1003abdc8(*(undefined4 *)(lVar1 + 0x3d8));
  (**(code **)(*plVar5 + 0x28))(plVar5);
  lVar1 = FUN_10042e3b0(param_1);
  FUN_10049b814(lVar1 + 0x10);
  lVar1 = FUN_10042fdc4(param_1);
  lVar4 = FUN_10049c984(lVar1 + 0x10);
  *(long **)(lVar4 + 0x10) = plVar2 + 2;
  FUN_10049c9d4(lVar1 + 0x10);
  return;
}




void FUN_1004184a4(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  
  lVar1 = FUN_10042e498();
  lVar1 = lVar1 + 0x10;
  lVar2 = FUN_10043aaf4(lVar1);
  *(code **)(lVar2 + 0x10) = FUN_100438e84;
  plVar3 = (long *)FUN_10043594c(lVar1);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,"Spawn_Directional");
  (**(code **)(*plVar3 + 0x18))(plVar3,"AttackToIdle");
  lVar1 = FUN_10043aaf4(lVar1);
  *(code **)(lVar1 + 0x10) = FUN_100439448;
  lVar1 = FUN_10042e580(param_1);
  *(undefined4 *)(lVar1 + 0x40) = 0x3dcccccd;
  *(byte *)(lVar1 + 0x44) = *(byte *)(lVar1 + 0x44) | 1;
  lVar2 = FUN_10043aaf4(lVar1 + 0x10);
  *(code **)(lVar2 + 0x10) = FUN_1004390d4;
  lVar1 = FUN_10043aaf4(lVar1 + 0x10);
  *(code **)(lVar1 + 0x10) = FUN_100439328;
  lVar1 = FUN_10042e580(param_1);
  *(undefined4 *)(lVar1 + 0x40) = 0x3dcccccd;
  *(byte *)(lVar1 + 0x44) = *(byte *)(lVar1 + 0x44) & 0xfe;
  lVar1 = FUN_10043aaf4(lVar1 + 0x10);
  *(code **)(lVar1 + 0x10) = FUN_100439448;
  lVar1 = FUN_10042e2c8(param_1);
  plVar3 = (long *)FUN_10049ca24(lVar1 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,FUN_1004393b8);
                    /* WARNING: Could not recover jumptable at 0x0001004185c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x18))(plVar3,"CenterBody");
  return;
}




void FUN_1004185cc(long param_1)

{
  long lVar1;
  long *plVar2;
  
  *(undefined4 *)(param_1 + 0x318) = 0x3e4ccccd;
  if (*(float *)(param_1 + 0x31c) < 0.2) {
    *(undefined4 *)(param_1 + 0x31c) = 0x3e4ccccd;
  }
  *(uint *)(param_1 + 0x340) = *(uint *)(param_1 + 0x340) & 0xffffffef;
  lVar1 = FUN_10042e498();
  plVar2 = (long *)FUN_100441e68(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))();
  plVar2 = (long *)(**(code **)(*plVar2 + 0x68))(plVar2,"CenterBody");
                    /* WARNING: Could not recover jumptable at 0x000100418644. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Grace_A_GuardBlockDamage");
  return;
}




void FUN_100418648(void)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined4 local_30 [2];
  undefined4 local_28;
  
  lVar1 = FUN_10042e2c8();
  plVar2 = (long *)FUN_100441e68(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x60))();
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Grace_C_TargetIndicator");
  plVar2 = (long *)(**(code **)(*plVar2 + 0xb0))(plVar2,1);
  local_30[0] = 0x3f000000;
  local_28 = 1;
  plVar2 = (long *)(**(code **)(*plVar2 + 0xd0))(plVar2,local_30);
  plVar2 = (long *)(**(code **)(*plVar2 + 0xc0))(0x3f800000,0x3f800000,0x3e99999a);
  (**(code **)(*plVar2 + 0xd8))(0x3f800000);
  plVar2 = (long *)FUN_10049b7c4(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))(plVar2,"Sound_Grace_C_Loop_01");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x18))(plVar2,"Sound_Grace_C_Loop_02");
  uVar3 = FUN_1010a1520();
  lVar1 = FUN_1010a0e0c(uVar3,0,"*KindredSoundBalance*",0);
  FUN_1003abdc8(*(undefined4 *)(lVar1 + 0x3e4));
  (**(code **)(*plVar2 + 0x28))(plVar2);
  return;
}




void FUN_100418758(void)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined4 local_30 [2];
  undefined4 local_28;
  
  lVar1 = FUN_10042e498();
  plVar2 = (long *)FUN_100441e68(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x60))();
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Grace_C_TargetImpact");
  plVar2 = (long *)(**(code **)(*plVar2 + 0xb0))(plVar2,1);
  local_30[0] = 0x3f000000;
  local_28 = 1;
  plVar2 = (long *)(**(code **)(*plVar2 + 0xd0))(plVar2,local_30);
  plVar2 = (long *)(**(code **)(*plVar2 + 0xc0))(0x3f800000,0x3f800000,0x3e99999a);
  (**(code **)(*plVar2 + 0xd8))(0x3f800000);
  plVar2 = (long *)FUN_100441e18(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x38))(plVar2,"Sound_Grace_C_End_01");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x18))(plVar2,"Sound_Grace_C_End_02");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x18))(plVar2,"Sound_Grace_C_End_03");
  uVar3 = FUN_1010a1520();
  lVar1 = FUN_1010a0e0c(uVar3,0,"*KindredSoundBalance*",0);
  FUN_1003abdc8(*(undefined4 *)(lVar1 + 1000));
  (**(code **)(*plVar2 + 0x28))(plVar2);
  return;
}




void FUN_10041887c(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  code *local_40;
  undefined4 local_38;
  
  lVar1 = FUN_10042e2c8();
  plVar2 = (long *)FUN_10049b7c4(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))(plVar2,"Sound_Grace_C_Loop_01");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x18))(plVar2,"Sound_Grace_C_Loop_02");
  uVar3 = FUN_1010a1520();
  lVar1 = FUN_1010a0e0c(uVar3,0,"*KindredSoundBalance*",0);
  FUN_1003abdc8(*(undefined4 *)(lVar1 + 0x3e4));
  (**(code **)(*plVar2 + 0x28))(plVar2);
  lVar1 = FUN_100431114(param_1);
  *(byte *)(lVar1 + 0x60) = *(byte *)(lVar1 + 0x60) | 8;
  *(undefined **)(lVar1 + 0x38) = PTR_s_Buff_Grace_C_TargetWarmup_10185a798;
  lVar1 = lVar1 + 0x10;
  plVar2 = (long *)FUN_100452858(lVar1);
  puVar4 = (undefined8 *)(**(code **)(*plVar2 + 0x30))();
  (**(code **)*puVar4)(puVar4,PTR_s_Ability__Grace__C_101859938);
  FUN_1004385f0(lVar1);
  plVar2 = (long *)FUN_100441e18(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x38))(plVar2,"Sound_Grace_C_Fizzle_01");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x18))(plVar2,"Sound_Grace_C_Fizzle_02");
  uVar3 = FUN_1010a1520();
  lVar1 = FUN_1010a0e0c(uVar3,0,"*KindredSoundBalance*",0);
  FUN_1003abdc8(*(undefined4 *)(lVar1 + 0x3e4));
  (**(code **)(*plVar2 + 0x28))(plVar2);
  lVar1 = FUN_10042f8e8(param_1);
  plVar2 = (long *)FUN_10045607c(lVar1 + 0x10);
  (**(code **)(*plVar2 + 0x30))(plVar2,5);
  lVar1 = FUN_10042fdc4(param_1);
  plVar2 = (long *)FUN_100433e34(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))
                             (plVar2,PTR_s_Buff_Grace_PostAbilityBonuses_10185a788);
  local_40 = FUN_1003ac1f0;
  local_38 = 3;
  (**(code **)(*plVar2 + 0x18))(plVar2,&local_40);
  return;
}




void FUN_100418a30(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined1 auStack_40 [24];
  undefined4 local_28 [2];
  
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x10);
  FUN_100450f38(auStack_40,param_1 + 0x98);
  lVar1 = FUN_100436e1c(auStack_40);
  local_28[0] = DAT_101d90b34;
  uVar3 = FUN_1003dfee8(uVar2,local_28,1,9);
  *(undefined8 *)(lVar1 + 0x10) = 0x200000005;
  *(undefined4 *)(lVar1 + 0x18) = uVar3;
  return;
}




void FUN_100418aa0(void)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  char cVar4;
  char *pcVar5;
  uint uVar6;
  
  uVar6 = 0x811c9dc5;
  lVar1 = FUN_100433030();
  if (PTR_s_Ability__Grace__A_101859928 == (undefined *)0x0) {
    uVar3 = 0;
  }
  else {
    cVar4 = *PTR_s_Ability__Grace__A_101859928;
    uVar3 = 0x811c9dc5;
    if (cVar4 != '\0') {
      uVar3 = 0x811c9dc5;
      pcVar5 = PTR_s_Ability__Grace__A_101859928;
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
  if (PTR_s_Ability__Grace__A_101859928 == (undefined *)0x0) {
    uVar3 = 0;
  }
  else {
    cVar4 = *PTR_s_Ability__Grace__A_101859928;
    uVar3 = 0x811c9dc5;
    if (cVar4 != '\0') {
      uVar3 = 0x811c9dc5;
      pcVar5 = PTR_s_Ability__Grace__A_101859928;
      do {
        pcVar5 = pcVar5 + 1;
        uVar3 = (uVar3 ^ (int)cVar4) * 0x1000193;
        cVar4 = *pcVar5;
      } while (cVar4 != '\0');
    }
  }
  *(uint *)(lVar2 + 0x20) = uVar3;
  *(code **)(lVar2 + 0x10) = FUN_100492f84;
  *(undefined4 *)(lVar2 + 0x18) = 3;
  *(undefined4 *)(lVar2 + 0x28) = 1;
  lVar2 = FUN_10049bf40(lVar1);
  *(undefined4 *)(lVar2 + 0x20) = 0xcb450845;
  *(code **)(lVar2 + 0x10) = FUN_100492fb8;
  *(undefined4 *)(lVar2 + 0x18) = 3;
  *(undefined4 *)(lVar2 + 0x28) = 2;
  lVar1 = FUN_10049c888(lVar1);
  if (PTR_s_Ability__Grace__A_101859928 == (undefined *)0x0) {
    uVar6 = 0;
  }
  else {
    cVar4 = *PTR_s_Ability__Grace__A_101859928;
    pcVar5 = PTR_s_Ability__Grace__A_101859928;
    while (cVar4 != '\0') {
      pcVar5 = pcVar5 + 1;
      uVar6 = (uVar6 ^ (int)cVar4) * 0x1000193;
      cVar4 = *pcVar5;
    }
  }
  *(uint *)(lVar1 + 0x20) = uVar6;
  *(code **)(lVar1 + 0x10) = FUN_100492fec;
  *(undefined4 *)(lVar1 + 0x18) = 3;
  return;
}




void FUN_100418c0c(void)

{
  long lVar1;
  char cVar2;
  uint uVar3;
  char *pcVar4;
  uint uVar5;
  
  uVar5 = 0x811c9dc5;
  lVar1 = FUN_100433030();
  if (PTR_s_Ability__Grace__C_101859938 == (undefined *)0x0) {
    uVar3 = 0;
  }
  else {
    cVar2 = *PTR_s_Ability__Grace__C_101859938;
    uVar3 = 0x811c9dc5;
    if (cVar2 != '\0') {
      uVar3 = 0x811c9dc5;
      pcVar4 = PTR_s_Ability__Grace__C_101859938;
      do {
        pcVar4 = pcVar4 + 1;
        uVar3 = (uVar3 ^ (int)cVar2) * 0x1000193;
        cVar2 = *pcVar4;
      } while (cVar2 != '\0');
    }
  }
  *(uint *)(lVar1 + 0x28) = uVar3;
  lVar1 = FUN_10049bf40(lVar1 + 0x10);
  if (PTR_s_Ability__Grace__C_101859938 == (undefined *)0x0) {
    uVar5 = 0;
  }
  else {
    cVar2 = *PTR_s_Ability__Grace__C_101859938;
    pcVar4 = PTR_s_Ability__Grace__C_101859938;
    while (cVar2 != '\0') {
      pcVar4 = pcVar4 + 1;
      uVar5 = (uVar5 ^ (int)cVar2) * 0x1000193;
      cVar2 = *pcVar4;
    }
  }
  *(uint *)(lVar1 + 0x20) = uVar5;
  *(code **)(lVar1 + 0x10) = FUN_100492f50;
  *(undefined4 *)(lVar1 + 0x18) = 3;
  *(undefined4 *)(lVar1 + 0x28) = 1;
  return;
}




void FUN_100418ce0(long param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 local_40;
  undefined4 local_38;
  
  *(uint *)(param_1 + 0x340) = *(uint *)(param_1 + 0x340) | 0x800;
  lVar1 = FUN_100430b44();
  plVar2 = (long *)FUN_100433de4(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x38))(plVar2,DAT_10185a390);
  local_40._0_4_ = 0;
  local_38 = 1;
  (**(code **)(*plVar2 + 0x18))(plVar2,&local_40);
  lVar1 = FUN_100431114(param_1);
  *(byte *)(lVar1 + 0x60) = *(byte *)(lVar1 + 0x60) | 1;
  plVar2 = (long *)FUN_100433de4(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x38))(plVar2,DAT_10185a390);
  local_40 = (code *)((ulong)local_40._4_4_ << 0x20);
  local_38 = 1;
  (**(code **)(*plVar2 + 0x18))(plVar2,&local_40);
  lVar1 = FUN_10042ea44(param_1);
  FUN_1004386bc(lVar1 + 0x10);
  plVar2 = (long *)FUN_10043aa54(lVar1 + 0x10);
  local_40 = FUN_100432760;
  local_38 = 4;
  (**(code **)(*plVar2 + 0x30))(plVar2,&local_40);
  lVar1 = FUN_1004328a0(param_1);
  plVar2 = (long *)FUN_100433e34(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_Baptiste_PerkEmpowered_10185a3f8)
  ;
  local_40 = FUN_10043298c;
  local_38 = 3;
  (**(code **)(*plVar2 + 0x18))(plVar2,&local_40);
  lVar1 = FUN_10042e2c8(param_1);
  plVar2 = (long *)FUN_10049bbfc(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x38))();
  (**(code **)(*plVar2 + 0x58))(plVar2,0);
  return;
}




void FUN_100418e4c(long param_1)

{
  long lVar1;
  long *plVar2;
  undefined4 local_40 [2];
  undefined4 local_38;
  
  *(uint *)(param_1 + 0x340) = *(uint *)(param_1 + 0x340) | 0x80;
  lVar1 = FUN_10042e2c8();
  plVar2 = (long *)FUN_100441e68(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,"Bone_Weapon");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Baptiste_Empowered");
  (**(code **)(*plVar2 + 0xb0))(plVar2,1);
  plVar2 = (long *)FUN_10049bbfc(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x40))();
  (**(code **)(*plVar2 + 0x58))(plVar2,1);
  lVar1 = FUN_10042fdc4(param_1);
  plVar2 = (long *)FUN_100433de4(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x38))(plVar2,DAT_10185a390);
  local_40[0] = 0;
  local_38 = 1;
  (**(code **)(*plVar2 + 0x18))(plVar2,local_40);
  return;
}




void FUN_100418f30(void)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_10042e498();
  plVar2 = (long *)FUN_100432a84(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x38))();
  plVar2 = (long *)(**(code **)(*plVar2 + 0x50))();
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))(plVar2,5);
                    /* WARNING: Could not recover jumptable at 0x000100418f80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x18))(plVar2,"CenterBody");
  return;
}




void FUN_100418f84(undefined8 param_1)

{
  code *local_20;
  undefined4 local_18;
  
  local_20 = FUN_100432998;
  local_18 = 3;
  FUN_10042feac(0,0x3f800000,param_1,&local_20);
  return;
}




void FUN_100418fc0(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  code *local_50;
  undefined4 local_48;
  
  lVar1 = FUN_10042e498();
  lVar1 = lVar1 + 0x10;
  plVar2 = (long *)FUN_100441e18(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x38))(plVar2,"Sound_Baptiste_Ability_B_Tether");
  uVar3 = FUN_1010a1520();
  lVar4 = FUN_1010a0e0c(uVar3,0,"*KindredSoundBalance*",0);
  FUN_1003a4634(*(undefined4 *)(lVar4 + 0x3c4));
  (**(code **)(*plVar2 + 0x28))(plVar2);
  FUN_1004386bc(lVar1);
  plVar2 = (long *)FUN_10043ab94(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x40))();
  local_50 = FUN_1004329dc;
  local_48 = 4;
  (**(code **)(*plVar2 + 0x18))(plVar2,&local_50,1,2);
  lVar1 = FUN_10043fc08(lVar1);
  lVar4 = FUN_10049bc4c(lVar1 + 0x10);
  *(undefined4 *)(lVar4 + 8) = 1;
  plVar2 = (long *)FUN_100432a84(lVar1 + 0x88);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x38))();
  plVar2 = (long *)(**(code **)(*plVar2 + 0x50))();
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))(plVar2,5);
  (**(code **)(*plVar2 + 0x18))(plVar2,"CenterBody");
  lVar1 = FUN_10042e2c8(param_1);
  plVar2 = (long *)FUN_100441e68(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0xa0))();
  plVar2 = (long *)(**(code **)(*plVar2 + 0x60))();
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Baptiste_B_RadiusIndicator");
  plVar2 = (long *)(**(code **)(*plVar2 + 0xb0))(plVar2,1);
  (**(code **)(*plVar2 + 0x78))(plVar2,0);
  plVar2 = (long *)FUN_100441e68(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x68))(plVar2,"CenterBody");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Baptiste_B_Beam");
  plVar2 = (long *)(**(code **)(*plVar2 + 0xa8))(plVar2,FUN_1004329ac);
  plVar2 = (long *)(**(code **)(*plVar2 + 0xc0))(0x3dcccccd,0x3f4ccccd,0x3f0ccccd);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x90))();
  plVar2 = (long *)(**(code **)(*plVar2 + 0xb0))(plVar2,1);
  (**(code **)(*plVar2 + 0x78))(plVar2,1);
  lVar1 = FUN_100432ad4(param_1);
  *(code **)(lVar1 + 0x40) = FUN_10045ac18;
  *(code **)(lVar1 + 0x48) = FUN_10049bcbc;
  lVar1 = lVar1 + 0x10;
  FUN_1004386bc(lVar1);
  plVar2 = (long *)FUN_10043ab94(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x40))();
  local_50 = FUN_100432bdc;
  local_48 = 4;
  (**(code **)(*plVar2 + 0x18))(plVar2,&local_50,1,2);
  plVar2 = (long *)FUN_100433e34(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_Baptiste_B_Tether_CC_10185ce98);
  local_50 = (code *)CONCAT44(local_50._4_4_,0x3f800000);
  local_48 = 1;
  (**(code **)(*plVar2 + 0x18))(plVar2,&local_50);
  plVar2 = (long *)FUN_100433e34(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_Stunned_10185a208);
  local_50 = FUN_100432c84;
  local_48 = 3;
  (**(code **)(*plVar2 + 0x18))(plVar2,&local_50);
  FUN_1004385f0(lVar1);
  return;
}




void FUN_1004192cc(void)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  
  lVar1 = FUN_10042e498();
  plVar2 = (long *)FUN_100441e18(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x38))(plVar2,"Sound_Baptiste_Ability_B_TetherSnap");
  uVar3 = FUN_1010a1520();
  lVar1 = FUN_1010a0e0c(uVar3,0,"*KindredSoundBalance*",0);
  FUN_1003a4634(*(undefined4 *)(lVar1 + 0x3c4));
                    /* WARNING: Could not recover jumptable at 0x000100419330. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x28))(plVar2);
  return;
}




void FUN_100419334(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  code *local_30;
  undefined4 local_28;
  
  lVar1 = FUN_10042e498();
  plVar2 = (long *)FUN_100441e18(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x38))(plVar2,"Sound_Baptiste_Ability_C_Impact_1");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x18))(plVar2,"Sound_Baptiste_Ability_C_Impact_2");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x18))(plVar2,"Sound_Baptiste_Ability_C_Impact_3");
  uVar3 = FUN_1010a1520();
  lVar1 = FUN_1010a0e0c(uVar3,0,"*KindredSoundBalance*",0);
  FUN_1003a4634(*(undefined4 *)(lVar1 + 0x3c8));
  (**(code **)(*plVar2 + 0x28))(plVar2);
  lVar1 = FUN_10042e580(param_1);
  *(undefined4 *)(lVar1 + 0x40) = 0x3ecccccd;
  *(byte *)(lVar1 + 0x44) = *(byte *)(lVar1 + 0x44) | 1;
  FUN_1004386bc(lVar1 + 0x10);
  plVar2 = (long *)FUN_10043ab94(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x40))();
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))();
  local_30 = FUN_100432c98;
  local_28 = 4;
  (**(code **)(*plVar2 + 0x10))(plVar2,&local_30,1,0x4a);
  lVar1 = FUN_10042e3b0(param_1);
  FUN_10049b814(lVar1 + 0x10);
  return;
}




void FUN_10041945c(long param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined4 local_40 [2];
  undefined4 local_38;
  
  lVar1 = FUN_10042e498();
  plVar2 = (long *)FUN_100433e34(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_FearDirection_10185bdb0);
  local_40[0] = *(undefined4 *)(param_1 + 0x31c);
  local_38 = 1;
  plVar2 = (long *)(**(code **)(*plVar2 + 0x18))(plVar2,local_40);
  FUN_100432da4(param_1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x38))(plVar2);
  FUN_100432e08(param_1);
  (**(code **)(*plVar2 + 0x40))(plVar2);
  lVar1 = FUN_10042e580(param_1);
  *(undefined4 *)(lVar1 + 0x40) = 0x3e4ccccd;
  *(byte *)(lVar1 + 0x44) = *(byte *)(lVar1 + 0x44) | 1;
  plVar2 = (long *)FUN_100433e34(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_Baptiste_Ultimate_DOT_10185cea0);
  local_40[0] = 0x3ecccccd;
  local_38 = 1;
  plVar2 = (long *)(**(code **)(*plVar2 + 0x18))(plVar2,local_40);
  uVar3 = FUN_100432d40(param_1);
  (**(code **)(*plVar2 + 0x48))(plVar2,uVar3);
  return;
}




void FUN_10041957c(long param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  
  FUN_1003461dc(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x10));
  lVar1 = FUN_100345d90();
  lVar3 = *(long *)(*(long *)(lVar1 + 0x58) + 0x60);
  if (lVar3 == 0) {
    fVar4 = 0.0;
  }
  else {
    fVar4 = (float)FUN_10045f34c(lVar3 + 0x220);
  }
  fVar5 = (float)FUN_1003dfe60(lVar1,2,6,0x19,0);
  fVar4 = fVar4 / fVar5 + 0.1;
  *(float *)(param_1 + 0x318) = fVar4;
  if (*(float *)(param_1 + 0x31c) < fVar4) {
    *(float *)(param_1 + 0x31c) = fVar4;
  }
  *(uint *)(param_1 + 0x340) =
       *(uint *)(param_1 + 0x340) & 0xfffe0 | (uint)(fVar4 < 0.0) << 4 |
       *(uint *)(param_1 + 0x340) & 0xfff0000f;
  lVar1 = FUN_10042e498(param_1);
  FUN_1004386bc(lVar1 + 0x10);
  plVar2 = (long *)FUN_10049bd10(lVar1 + 0x10);
  (**(code **)(*plVar2 + 0x30))(plVar2,FUN_100432e6c);
  lVar1 = FUN_10042fdc4(param_1);
  FUN_10044c418(lVar1 + 0x10);
  return;
}




void FUN_10041966c(void)

{
  long lVar1;
  long lVar2;
  char cVar3;
  uint uVar4;
  char *pcVar5;
  uint uVar6;
  
  uVar6 = 0x811c9dc5;
  lVar1 = FUN_100433030();
  if (PTR_s_Ability__Baptiste__A_1018598b0 == (undefined *)0x0) {
    uVar4 = 0;
  }
  else {
    cVar3 = *PTR_s_Ability__Baptiste__A_1018598b0;
    uVar4 = 0x811c9dc5;
    if (cVar3 != '\0') {
      uVar4 = 0x811c9dc5;
      pcVar5 = PTR_s_Ability__Baptiste__A_1018598b0;
      do {
        pcVar5 = pcVar5 + 1;
        uVar4 = (uVar4 ^ (int)cVar3) * 0x1000193;
        cVar3 = *pcVar5;
      } while (cVar3 != '\0');
    }
  }
  *(uint *)(lVar1 + 0x28) = uVar4;
  lVar2 = FUN_10049da9c(lVar1 + 0x10);
  *(undefined **)(lVar2 + 0x10) = PTR_s_Ability__Baptiste__A_1018598b0;
  *(code **)(lVar2 + 0x18) = FUN_100494aec;
  *(undefined4 *)(lVar2 + 0x20) = 3;
  *(undefined4 *)(lVar2 + 0x2c) = 0;
  lVar1 = FUN_10049bf40(lVar1 + 0x10);
  if (PTR_s_Ability__Baptiste__A_1018598b0 == (undefined *)0x0) {
    uVar6 = 0;
  }
  else {
    cVar3 = *PTR_s_Ability__Baptiste__A_1018598b0;
    pcVar5 = PTR_s_Ability__Baptiste__A_1018598b0;
    while (cVar3 != '\0') {
      pcVar5 = pcVar5 + 1;
      uVar6 = (uVar6 ^ (int)cVar3) * 0x1000193;
      cVar3 = *pcVar5;
    }
  }
  *(uint *)(lVar1 + 0x20) = uVar6;
  *(code **)(lVar1 + 0x10) = FUN_100494b20;
  *(undefined4 *)(lVar1 + 0x18) = 3;
  *(undefined4 *)(lVar1 + 0x28) = 1;
  return;
}




void FUN_10041976c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined1 auStack_40 [24];
  undefined4 local_28 [2];
  
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x10);
  FUN_100450f38(auStack_40,param_1 + 0x98);
  lVar1 = FUN_100436e1c(auStack_40);
  local_28[0] = DAT_101d90dbc;
  uVar3 = FUN_1003dfee8(uVar2,local_28,0,9);
  *(undefined8 *)(lVar1 + 0x10) = 0x10000000f;
  *(undefined4 *)(lVar1 + 0x18) = uVar3;
  return;
}




void FUN_1004197dc(undefined8 param_1)

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
  if (PTR_s_Ability__Baptiste__C_1018598c0 == (undefined *)0x0) {
    uVar4 = 0;
  }
  else {
    cVar5 = *PTR_s_Ability__Baptiste__C_1018598c0;
    uVar4 = 0x811c9dc5;
    if (cVar5 != '\0') {
      uVar4 = 0x811c9dc5;
      pcVar6 = PTR_s_Ability__Baptiste__C_1018598c0;
      do {
        pcVar6 = pcVar6 + 1;
        uVar4 = (uVar4 ^ (int)cVar5) * 0x1000193;
        cVar5 = *pcVar6;
      } while (cVar5 != '\0');
    }
  }
  *(uint *)(lVar1 + 0x28) = uVar4;
  lVar2 = FUN_10049da9c(lVar1 + 0x10);
  *(undefined **)(lVar2 + 0x10) = PTR_s_Ability__Baptiste__C_1018598c0;
  *(code **)(lVar2 + 0x18) = FUN_100494a50;
  *(undefined4 *)(lVar2 + 0x20) = 3;
  *(undefined4 *)(lVar2 + 0x2c) = 1;
  lVar1 = FUN_10049bf40(lVar1 + 0x10);
  if (PTR_s_Ability__Baptiste__C_1018598c0 == (undefined *)0x0) {
    uVar4 = 0;
  }
  else {
    cVar5 = *PTR_s_Ability__Baptiste__C_1018598c0;
    uVar4 = 0x811c9dc5;
    if (cVar5 != '\0') {
      uVar4 = 0x811c9dc5;
      pcVar6 = PTR_s_Ability__Baptiste__C_1018598c0;
      do {
        pcVar6 = pcVar6 + 1;
        uVar4 = (uVar4 ^ (int)cVar5) * 0x1000193;
        cVar5 = *pcVar6;
      } while (cVar5 != '\0');
    }
  }
  *(uint *)(lVar1 + 0x20) = uVar4;
  *(code **)(lVar1 + 0x10) = FUN_100494a84;
  *(undefined4 *)(lVar1 + 0x18) = 3;
  *(undefined4 *)(lVar1 + 0x28) = 1;
  lVar1 = FUN_10042e694(param_1);
  *(ushort *)(lVar1 + 0x48) = *(ushort *)(lVar1 + 0x48) | 4;
  *(byte *)(lVar1 + 0x60) = *(byte *)(lVar1 + 0x60) & 0xfc | 1;
  if (PTR_s_Buff_Baptiste_Ultimate_DOT_10185cea0 == (undefined *)0x0) {
    uVar7 = 0;
  }
  else {
    cVar5 = *PTR_s_Buff_Baptiste_Ultimate_DOT_10185cea0;
    pcVar6 = PTR_s_Buff_Baptiste_Ultimate_DOT_10185cea0;
    while (cVar5 != '\0') {
      pcVar6 = pcVar6 + 1;
      uVar7 = (uVar7 ^ (int)cVar5) * 0x1000193;
      cVar5 = *pcVar6;
    }
  }
  *(uint *)(lVar1 + 0x40) = uVar7;
  plVar3 = (long *)FUN_10043187c(lVar1 + 0x10);
  local_60 = FUN_100494ab8;
  local_58 = 3;
  (**(code **)(*plVar3 + 0x30))(plVar3,&local_60);
  return;
}




void FUN_100419988(void)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_10042e498();
  plVar2 = (long *)FUN_100441e68(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x60))();
                    /* WARNING: Could not recover jumptable at 0x0001004199bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Malene_LightAura");
  return;
}




void FUN_1004199c0(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  lVar2 = FUN_10042e498();
  plVar3 = (long *)FUN_10049c8e4(lVar2 + 0x10);
  (**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Ability__Malene__C2_101859548);
  lVar2 = FUN_10042e2c8(param_1);
  lVar2 = lVar2 + 0x10;
  lVar4 = FUN_100451f64(lVar2);
  puVar1 = PTR_s_Ability__Malene__C2_101859548;
  *(undefined **)(lVar4 + 0x10) = PTR_s_Ability__Malene__C1_101859540;
  *(undefined **)(lVar4 + 0x18) = puVar1;
  lVar4 = FUN_100451f64(lVar2);
  puVar1 = PTR_s_Ability__Malene__B2_101859538;
  *(undefined **)(lVar4 + 0x10) = PTR_s_Ability__Malene__B1_101859530;
  *(undefined **)(lVar4 + 0x18) = puVar1;
  lVar4 = FUN_100451f64(lVar2);
  puVar1 = PTR_s_Ability__Malene__A2_101859528;
  *(undefined **)(lVar4 + 0x10) = PTR_s_Ability__Malene__A1_101859520;
  *(undefined **)(lVar4 + 0x18) = puVar1;
  plVar3 = (long *)FUN_10049d404(lVar2);
  (**(code **)(*plVar3 + 0x30))(plVar3,"DarkForm");
  plVar3 = (long *)FUN_100441e68(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x60))();
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Malene_DarkAura");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x90))();
  plVar3 = (long *)(**(code **)(*plVar3 + 0xb0))(plVar3,1);
  (**(code **)(*plVar3 + 0x88))(plVar3,1);
  plVar3 = (long *)FUN_10049bef0(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,"u_LightDarkSwitch");
  (**(code **)(*plVar3 + 0x38))(0x3f800000);
  lVar2 = FUN_10042fdc4(param_1);
  plVar3 = (long *)FUN_10049c8e4(lVar2 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x000100419b14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Ability__Malene__C1_101859540);
  return;
}




void FUN_100419b18(void)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_10042e2c8();
  lVar1 = lVar1 + 0x10;
  plVar2 = (long *)FUN_10049ba04(lVar1);
  (**(code **)(*plVar2 + 0x30))(plVar2,"Idle","DarkIdle");
  plVar2 = (long *)FUN_10049ba04(lVar1);
  (**(code **)(*plVar2 + 0x30))(plVar2,"Move","DarkMove");
  plVar2 = (long *)FUN_10049ba04(lVar1);
  (**(code **)(*plVar2 + 0x30))(plVar2,"MoveStart","DarkMoveStart");
  plVar2 = (long *)FUN_10049ba04(lVar1);
  (**(code **)(*plVar2 + 0x30))(plVar2,"MoveStop","DarkMoveStop");
  plVar2 = (long *)FUN_10049ba04(lVar1);
  (**(code **)(*plVar2 + 0x30))(plVar2,"IdleBrush","DarkIdleBrush");
  plVar2 = (long *)FUN_10049ba04(lVar1);
  (**(code **)(*plVar2 + 0x30))(plVar2,"MoveBrush","DarkMoveBrush");
  plVar2 = (long *)FUN_10049ba04(lVar1);
  (**(code **)(*plVar2 + 0x30))(plVar2,"Sprint","DarkSprint");
  plVar2 = (long *)FUN_10049ba04(lVar1);
  (**(code **)(*plVar2 + 0x30))(plVar2,"Attack","DarkAttack");
  plVar2 = (long *)FUN_10049ba04(lVar1);
  (**(code **)(*plVar2 + 0x30))(plVar2,"AltAttack","DarkAltAttack");
  plVar2 = (long *)FUN_10049ba04(lVar1);
  (**(code **)(*plVar2 + 0x30))(plVar2,"CritAttack","DarkCritAttack");
  plVar2 = (long *)FUN_10049ba04(lVar1);
  (**(code **)(*plVar2 + 0x30))(plVar2,"Withdraw","DarkWithdraw");
  plVar2 = (long *)FUN_10049ba04(lVar1);
                    /* WARNING: Could not recover jumptable at 0x000100419ce0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x30))(plVar2,"Die","DarkDie");
  return;
}




void FUN_100419ce4(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_10042e2c8();
  plVar2 = (long *)FUN_100441e68(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,"Bone_Mask");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Malene_LightEmpReady");
  (**(code **)(*plVar2 + 0xb0))(plVar2,1);
  lVar1 = FUN_10042e3b0(param_1);
  FUN_10049b814(lVar1 + 0x10);
  return;
}




void FUN_100419d50(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_10042e2c8();
  plVar2 = (long *)FUN_100441e68(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,"Bone_Mask");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Malene_DarkEmpReady");
  (**(code **)(*plVar2 + 0xb0))(plVar2,1);
  lVar1 = FUN_10042e3b0(param_1);
  FUN_10049b814(lVar1 + 0x10);
  return;
}




void FUN_100419dbc(undefined8 param_1)

{
  code *local_20;
  undefined4 local_18;
  
  local_20 = FUN_1004453f0;
  local_18 = 3;
  FUN_10042eb40(param_1,&local_20);
  return;
}




void FUN_100419df0(undefined8 param_1)

{
  FUN_100435a7c(param_1,0x23,"Effect_Malene_A_Root",0);
  return;
}




void FUN_100419e04(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  char *pcVar7;
  code *local_50;
  undefined4 local_48;
  
  uVar2 = FUN_100345d90(*(undefined4 *)(param_1 + 0x308));
  iVar1 = FUN_1003a47d0(uVar2,PTR_s_Buff_Malene_Talent_TalentC_10185cee0);
  if (iVar1 == 0) {
    lVar3 = FUN_10042ea44(param_1);
    pcVar7 = "Sound_Malene_Good_Ability_B_Shield";
  }
  else {
    lVar3 = FUN_10042e498(param_1);
    pcVar7 = "Sound_Malene_Good_Ability_B_Talent";
  }
  plVar4 = (long *)FUN_100441e18(lVar3 + 0x10);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x38))(plVar4,pcVar7);
  uVar5 = FUN_1010a1520();
  lVar3 = FUN_1010a0e0c(uVar5,0,"*KindredSoundBalance*",0);
  FUN_1003b7e84(*(undefined4 *)(lVar3 + 0x4a0));
  (**(code **)(*plVar4 + 0x28))(plVar4);
  lVar3 = FUN_10042e95c(param_1);
  lVar3 = lVar3 + 0x10;
  lVar6 = FUN_10049be00(lVar3);
  *(undefined4 *)(lVar6 + 0x58) = 1;
  *(code **)(lVar6 + 0x10) = FUN_100445578;
  *(undefined4 *)(lVar6 + 0x18) = 3;
  plVar4 = (long *)FUN_10049b864(lVar3);
  (**(code **)(*plVar4 + 0x30))(plVar4,4,FUN_100445404);
  plVar4 = (long *)FUN_100441e68(lVar3);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x68))(plVar4,"CenterBody");
  plVar4 = (long *)(**(code **)(*plVar4 + 0x90))();
  plVar4 = (long *)(**(code **)(*plVar4 + 0x48))(plVar4,"Effect_Malene_B1_Buff");
  (**(code **)(*plVar4 + 0xb0))(plVar4,1);
  iVar1 = FUN_1003a47d0(uVar2,PTR_s_Buff_Malene_Talent_TalentC_10185cee0);
  if (iVar1 != 0) {
    lVar3 = FUN_10042fdc4(param_1);
    lVar3 = lVar3 + 0x10;
    plVar4 = (long *)FUN_100441e68(lVar3);
    plVar4 = (long *)(**(code **)(*plVar4 + 0x68))(plVar4,"CenterBody");
    plVar4 = (long *)(**(code **)(*plVar4 + 0x48))(plVar4,"Effect_Malene_TalentC_Explosion");
    (**(code **)(*plVar4 + 0xb0))(plVar4,1);
    lVar6 = FUN_10043d65c(lVar3);
    *(code **)(lVar6 + 0x10) = FUN_1004454b8;
    plVar4 = (long *)FUN_10043ab94(lVar3);
    plVar4 = (long *)(**(code **)(*plVar4 + 0x40))();
    local_50 = FUN_100445538;
    local_48 = 4;
    (**(code **)(*plVar4 + 0x18))(plVar4,&local_50,1,2);
    return;
  }
  lVar3 = FUN_10042e3b0(param_1);
  FUN_10049b814(lVar3 + 0x10);
  return;
}




void FUN_10041a038(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  
  lVar1 = FUN_10042e498();
  plVar2 = (long *)FUN_1004385a0(lVar1 + 0x10);
  (**(code **)(*plVar2 + 0x50))();
  plVar2 = (long *)FUN_10043594c(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))(plVar2,"AbilityB2_Start");
  (**(code **)(*plVar2 + 0x28))();
  lVar1 = FUN_10042e2c8(param_1);
  lVar1 = lVar1 + 0x10;
  FUN_10049c210(lVar1);
  lVar3 = FUN_10049b9b4(lVar1);
  *(undefined2 *)(lVar3 + 0x10) = 0x4704;
  FUN_10049d364(lVar1);
  plVar2 = (long *)FUN_10049bdb0(lVar1);
  (**(code **)(*plVar2 + 0x30))(plVar2,"AbilityB2_Start");
  lVar1 = FUN_10049be50(lVar1);
  *(undefined1 *)(lVar1 + 0x2c) = 0x11;
  lVar1 = FUN_10042fdc4(param_1);
  plVar2 = (long *)FUN_100433e34(lVar1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010041a114. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_Malene_DarkFormAnimOverride_10185ae10);
  return;
}




void FUN_10041a118(undefined8 param_1)

{
  code *local_20;
  undefined4 local_18;
  
  local_20 = FUN_10044558c;
  local_18 = 3;
  FUN_10042eb40(param_1,&local_20);
  return;
}




void FUN_10041a14c(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  float fVar5;
  
  uVar1 = FUN_100345d90(*(undefined4 *)(param_1 + 0x308));
  fVar5 = (float)FUN_1003dfe60(uVar1,3,4,0x19,0);
  *(float *)(param_1 + 0x318) = fVar5;
  if (*(float *)(param_1 + 0x31c) < fVar5) {
    *(float *)(param_1 + 0x31c) = fVar5;
  }
  *(uint *)(param_1 + 0x340) =
       *(uint *)(param_1 + 0x340) & 0xfffe0 | (uint)(fVar5 < 0.0) << 4 |
       *(uint *)(param_1 + 0x340) & 0xfff0000f;
  lVar2 = FUN_10042e2c8(param_1);
  plVar3 = (long *)FUN_100441e68(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x60))();
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Malene_B2_SpikesWarning");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x78))(plVar3,1);
  plVar3 = (long *)(**(code **)(*plVar3 + 0xb0))(plVar3,0);
  (**(code **)(*plVar3 + 0x90))();
  lVar2 = FUN_100433b70(param_1);
  *(code **)(lVar2 + 0x40) = FUN_10049d454;
  lVar4 = FUN_10043d65c(lVar2 + 0x10);
  *(code **)(lVar4 + 0x10) = FUN_1004455a0;
  plVar3 = (long *)FUN_10043ab94(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x40))();
  (**(code **)(*plVar3 + 0x38))(plVar3,"Shadow Burst Damage",3);
  lVar2 = FUN_10042fdc4(param_1);
  FUN_100434ac8(lVar2 + 0x10);
  return;
}




void FUN_10041a278(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  
  lVar1 = FUN_10042e2c8();
  plVar2 = (long *)FUN_100441e68(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x60))();
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Malene_B2_SpikesWarning");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0xb0))(plVar2,0);
  (**(code **)(*plVar2 + 0x90))();
  lVar1 = FUN_10042fdc4(param_1);
  lVar3 = FUN_10043d65c(lVar1 + 0x10);
  *(code **)(lVar3 + 0x10) = FUN_1004455a0;
  plVar2 = (long *)FUN_10043ab94(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x40))();
                    /* WARNING: Could not recover jumptable at 0x00010041a330. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x38))(plVar2,"Shadow Burst Damage",3);
  return;
}




void FUN_10041a334(undefined8 param_1)

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
  if (PTR_s_Ability__Malene__B2_101859538 == (undefined *)0x0) {
    uVar4 = 0;
  }
  else {
    cVar3 = *PTR_s_Ability__Malene__B2_101859538;
    uVar4 = 0x811c9dc5;
    if (cVar3 != '\0') {
      uVar4 = 0x811c9dc5;
      pcVar5 = PTR_s_Ability__Malene__B2_101859538;
      do {
        pcVar5 = pcVar5 + 1;
        uVar4 = (uVar4 ^ (int)cVar3) * 0x1000193;
        cVar3 = *pcVar5;
      } while (cVar3 != '\0');
    }
  }
  *(uint *)(lVar1 + 0x28) = uVar4;
  *(undefined1 *)(lVar1 + 0x2c) = 1;
  lVar1 = FUN_10049bf40(lVar1 + 0x10);
  if (PTR_s_Ability__Malene__B2_101859538 == (undefined *)0x0) {
    uVar6 = 0;
  }
  else {
    cVar3 = *PTR_s_Ability__Malene__B2_101859538;
    pcVar5 = PTR_s_Ability__Malene__B2_101859538;
    while (cVar3 != '\0') {
      pcVar5 = pcVar5 + 1;
      uVar6 = (uVar6 ^ (int)cVar3) * 0x1000193;
      cVar3 = *pcVar5;
    }
  }
  *(uint *)(lVar1 + 0x20) = uVar6;
  *(code **)(lVar1 + 0x10) = FUN_1004939f4;
  *(undefined4 *)(lVar1 + 0x18) = 3;
  *(undefined4 *)(lVar1 + 0x28) = 1;
  lVar1 = FUN_10042e694(param_1);
  *(ushort *)(lVar1 + 0x48) = *(ushort *)(lVar1 + 0x48) | 0x10;
  *(byte *)(lVar1 + 0x60) = *(byte *)(lVar1 + 0x60) & 0xfc | 1;
  *(undefined4 *)(lVar1 + 0x40) = 0x297292e9;
  plVar2 = (long *)FUN_10043187c(lVar1 + 0x10);
  local_40 = FUN_100493a28;
  local_38 = 3;
  (**(code **)(*plVar2 + 0x30))(plVar2,&local_40);
  lVar1 = FUN_10042e694(param_1);
  *(ushort *)(lVar1 + 0x48) = *(ushort *)(lVar1 + 0x48) | 0x10;
  *(byte *)(lVar1 + 0x60) = *(byte *)(lVar1 + 0x60) & 0xfc | 1;
  *(undefined4 *)(lVar1 + 0x40) = 0x297292e9;
  plVar2 = (long *)FUN_10043187c(lVar1 + 0x10);
  local_40 = FUN_100493a28;
  local_38 = 3;
  (**(code **)(*plVar2 + 0x30))(plVar2,&local_40);
  return;
}




void FUN_10041a4c0(void)

{
  long lVar1;
  long *plVar2;
  code *local_20;
  undefined4 local_18;
  
  lVar1 = FUN_10042e694();
  *(ushort *)(lVar1 + 0x48) = *(ushort *)(lVar1 + 0x48) | 0x10;
  *(byte *)(lVar1 + 0x60) = *(byte *)(lVar1 + 0x60) & 0xfc | 1;
  *(undefined4 *)(lVar1 + 0x40) = 0xb76b23ae;
  plVar2 = (long *)FUN_10043187c(lVar1 + 0x10);
  local_20 = FUN_100493a5c;
  local_18 = 3;
  (**(code **)(*plVar2 + 0x30))(plVar2,&local_20);
  return;
}




void FUN_10041a530(void)

{
  char cVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  uint uVar5;
  char *pcVar6;
  code *local_30;
  undefined4 local_28;
  
  lVar2 = FUN_100433910();
  if (PTR_s_Ability__Malene__B1_101859530 == (undefined *)0x0) {
    uVar5 = 0;
  }
  else {
    uVar5 = 0x811c9dc5;
    cVar1 = *PTR_s_Ability__Malene__B1_101859530;
    pcVar6 = PTR_s_Ability__Malene__B1_101859530;
    while (cVar1 != '\0') {
      pcVar6 = pcVar6 + 1;
      uVar5 = (uVar5 ^ (int)cVar1) * 0x1000193;
      cVar1 = *pcVar6;
    }
  }
  *(uint *)(lVar2 + 0x28) = uVar5;
  *(byte *)(lVar2 + 0x38) = *(byte *)(lVar2 + 0x38) & 0xfb;
  lVar3 = FUN_10049bea0(lVar2 + 0x10);
  *(code **)(lVar3 + 0x10) = FUN_100493a90;
  plVar4 = (long *)FUN_100434b18(lVar2 + 0x10);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x30))
                             (plVar4,PTR_s_Buff_Malene_B1_MirrorsBlessing_10185adf8);
  local_30 = FUN_1003b7f10;
  local_28 = 3;
  (**(code **)(*plVar4 + 0x18))(plVar4,&local_30);
  return;
}




void FUN_10041a600(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  code *local_40;
  undefined4 local_38;
  
  lVar2 = FUN_10042e498();
  plVar3 = (long *)FUN_100433e34(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))
                             (plVar3,PTR_s_Buff_HeroPLU_TempNonRecoveryHeli_10185cef0);
  local_40._0_4_ = 0xbf800000;
  local_38 = 1;
  (**(code **)(*plVar3 + 0x18))(plVar3,&local_40);
  lVar2 = FUN_10042e580(param_1);
  *(undefined4 *)(lVar2 + 0x40) = 0x3f800000;
  *(byte *)(lVar2 + 0x44) = *(byte *)(lVar2 + 0x44) & 0xfe;
  lVar2 = FUN_10043ab44(lVar2 + 0x10);
  *(ushort *)(lVar2 + 0x58) = (ushort)*(byte *)(lVar2 + 0x59) << 8;
  *(undefined8 *)(lVar2 + 0x4c) = 0;
  *(undefined8 *)(lVar2 + 0x44) = 0;
  *(undefined4 *)(lVar2 + 0x54) = 0;
  *(undefined1 *)(lVar2 + 0x50) = 1;
  *(undefined4 *)(lVar2 + 0x40) = 0;
  lVar2 = lVar2 + 0x10;
  lVar4 = FUN_100451b5c(lVar2);
  *(char **)(lVar4 + 0x10) = "poop\n";
  plVar3 = (long *)FUN_100451bac(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,"*HeroPLUSmokeCloud*",1);
  (**(code **)(*plVar3 + 0x18))(plVar3,"CenterBody");
  plVar3 = (long *)FUN_1004519c8(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))();
  local_40 = (code *)CONCAT44(local_40._4_4_,0x420c0000);
  local_38 = 1;
  (**(code **)(*plVar3 + 0x10))(plVar3,3,&local_40);
  plVar3 = (long *)FUN_100441e68(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x60))();
  (**(code **)(*plVar3 + 0x48))(plVar3,"Effect_HeroPLU_SmokeCloudSput");
  plVar3 = (long *)FUN_100433e34(lVar2);
  (**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_HeroPLU_EngineStacks_10185b190);
  lVar2 = FUN_10042e580(param_1);
  *(undefined4 *)(lVar2 + 0x40) = 0x3dcccccd;
  *(byte *)(lVar2 + 0x44) = *(byte *)(lVar2 + 0x44) & 0xfe;
  lVar2 = FUN_10043ab44(lVar2 + 0x10);
  puVar1 = PTR_s_Buff_HeroPLU_EngineRecovery_10185b1a0;
  *(undefined1 *)(lVar2 + 0x58) = 2;
  *(undefined8 *)(lVar2 + 0x48) = 0;
  *(undefined8 *)(lVar2 + 0x50) = 0;
  *(undefined1 *)(lVar2 + 0x50) = 2;
  *(undefined **)(lVar2 + 0x40) = puVar1;
  lVar2 = FUN_10043ab44(lVar2 + 0x28);
  puVar1 = PTR_s_Buff_HeroPLU_EngineOverheat_10185b198;
  *(undefined1 *)(lVar2 + 0x58) = 2;
  *(undefined8 *)(lVar2 + 0x48) = 0;
  *(undefined8 *)(lVar2 + 0x50) = 0;
  *(undefined1 *)(lVar2 + 0x50) = 2;
  *(undefined **)(lVar2 + 0x40) = puVar1;
  plVar3 = (long *)FUN_1004519c8(lVar2 + 0x28);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))();
  local_40 = FUN_100451bfc;
  local_38 = 3;
  (**(code **)(*plVar3 + 0x10))(plVar3,3,&local_40);
  lVar2 = FUN_10042e2c8(param_1);
  plVar3 = (long *)FUN_100430a84(lVar2 + 0x10);
  local_40 = (code *)CONCAT44(local_40._4_4_,0x42c80000);
  local_38 = 1;
  (**(code **)(*plVar3 + 0x30))(plVar3,0x2b,0,&local_40);
  return;
}




void FUN_10041a848(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_10042e2c8();
  plVar2 = (long *)FUN_100441e68(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x68))(plVar2,"Back");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_HeroPLU_Helicopter");
  plVar2 = (long *)(**(code **)(*plVar2 + 0xf8))(plVar2,FUN_100451a7c);
  (**(code **)(*plVar2 + 0x78))(plVar2,1);
  lVar1 = FUN_10042e2c8(param_1);
  plVar2 = (long *)FUN_100441e68(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x68))(plVar2,"Back");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_HeroPLU_Helicopter");
  plVar2 = (long *)(**(code **)(*plVar2 + 0xf8))(plVar2,FUN_100451aa4);
  (**(code **)(*plVar2 + 0x78))(plVar2,1);
  lVar1 = FUN_10042e2c8(param_1);
  plVar2 = (long *)FUN_100441e68(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x68))(plVar2,"Back");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_HeroPLU_Helicopter");
  plVar2 = (long *)(**(code **)(*plVar2 + 0xf8))(plVar2,FUN_100451adc);
  (**(code **)(*plVar2 + 0x78))(plVar2,1);
  lVar1 = FUN_10042e2c8(param_1);
  plVar2 = (long *)FUN_100441e68(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x68))(plVar2,"Back");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_HeroPLU_Helicopter");
  plVar2 = (long *)(**(code **)(*plVar2 + 0xf8))(plVar2,FUN_100451b1c);
  (**(code **)(*plVar2 + 0x78))(plVar2,1);
  lVar1 = FUN_10042e580(param_1);
  *(undefined4 *)(lVar1 + 0x40) = 0x3cf5c28f;
  *(byte *)(lVar1 + 0x44) = *(byte *)(lVar1 + 0x44) & 0xfe;
  lVar1 = FUN_10043aaf4(lVar1 + 0x10);
  *(code **)(lVar1 + 0x10) = FUN_1000e5cb8;
  return;
}




void FUN_10041a9fc(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  float fVar5;
  code *local_50;
  undefined4 local_48;
  
  local_50 = (code *)((ulong)local_50 & 0xffffffff00000000);
  FUN_10044e224(param_1,PTR_s_EngineRevLastDuration_10185d710,&local_50);
  lVar2 = FUN_10042ea44(param_1);
  lVar2 = lVar2 + 0x10;
  lVar3 = FUN_100437ccc(lVar2);
  *(undefined **)(lVar3 + 0x20) = PTR_s_EngineRevLastDuration_10185d710;
  *(undefined4 *)(lVar3 + 0x28) = 1;
  *(code **)(lVar3 + 0x40) = FUN_100451d28;
  *(undefined1 *)(lVar3 + 0x2c) = 1;
  lVar3 = FUN_10043aaf4(lVar2);
  *(code **)(lVar3 + 0x10) = FUN_100451c9c;
  lVar2 = FUN_10043ab44(lVar2);
  fVar5 = (float)FUN_1003dfe60(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x10),0,2,0x19,0);
  *(undefined1 *)(lVar2 + 0x58) = 0xc;
  *(undefined8 *)(lVar2 + 0x4c) = 0;
  *(undefined4 *)(lVar2 + 0x54) = 0;
  *(undefined1 *)(lVar2 + 0x50) = 4;
  *(undefined4 *)(lVar2 + 0x40) = 3;
  *(undefined4 *)(lVar2 + 0x48) = 1;
  *(float *)(lVar2 + 0x44) = 100.0 - fVar5;
  lVar2 = FUN_10043ab44(lVar2 + 0x28);
  puVar1 = PTR_s_Ability__HeroPLU__C_1018599e8;
  *(undefined1 *)(lVar2 + 0x58) = 7;
  *(undefined4 *)(lVar2 + 0x51) = 0;
  *(undefined4 *)(lVar2 + 0x54) = 0;
  *(undefined1 *)(lVar2 + 0x50) = 7;
  *(undefined **)(lVar2 + 0x40) = puVar1;
  *(undefined8 *)(lVar2 + 0x48) = 0;
  lVar3 = FUN_10043ab44(lVar2 + 0x10);
  puVar1 = PTR_s_Ability__HeroPLU__A_1018599d8;
  *(undefined1 *)(lVar3 + 0x58) = 9;
  *(undefined4 *)(lVar3 + 0x51) = 0;
  *(undefined4 *)(lVar3 + 0x54) = 0;
  *(undefined1 *)(lVar3 + 0x50) = 7;
  *(undefined **)(lVar3 + 0x40) = puVar1;
  *(undefined8 *)(lVar3 + 0x48) = 4;
  plVar4 = (long *)FUN_1004385a0(lVar3 + 0x10);
  (**(code **)(*plVar4 + 0x30))(plVar4,PTR_s_Buff_HeroPLU_A_Empowered_10185cf10);
  plVar4 = (long *)FUN_100433e34(lVar2 + 0x10);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x30))(plVar4,PTR_s_Buff_HeroPLU_EngineOverheat_10185b198)
  ;
  local_50 = FUN_100451e24;
  local_48 = 3;
  (**(code **)(*plVar4 + 0x18))(plVar4,&local_50);
  lVar2 = lVar2 + 0x28;
  plVar4 = (long *)FUN_100441e18(lVar2);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x38))(plVar4,"Sound_HeroPLU_Overheat_NoUlt");
  (**(code **)(*plVar4 + 0x28))(0x3f800000);
  plVar4 = (long *)FUN_1004385a0(lVar2);
  (**(code **)(*plVar4 + 0x30))(plVar4,PTR_s_Buff_HeroPLU_TempNonRecoveryHeli_10185cef0);
  plVar4 = (long *)FUN_100433e34(lVar2);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x30))(plVar4,PTR_s_Buff_HeroPLU_EngineRecovery_10185b1a0)
  ;
  local_50 = FUN_100451e30;
  local_48 = 3;
  (**(code **)(*plVar4 + 0x18))(plVar4,&local_50);
  lVar2 = FUN_10043099c(param_1);
  lVar2 = FUN_10049be00(lVar2 + 0x10);
  *(undefined4 *)(lVar2 + 0x58) = 1;
  *(code **)(lVar2 + 0x10) = FUN_100451da8;
  *(undefined4 *)(lVar2 + 0x18) = 5;
  *(undefined1 *)(lVar2 + 0x61) = 1;
  lVar2 = FUN_1004303b0(param_1);
  lVar2 = FUN_10043aaf4(lVar2 + 0x10);
  *(code **)(lVar2 + 0x10) = FUN_100451d4c;
  lVar2 = FUN_10042e2c8(param_1);
  plVar4 = (long *)FUN_100433e34(lVar2 + 0x10);
  (**(code **)(*plVar4 + 0x30))(plVar4,PTR_s_Buff_HeroPLU_A_Empowered_10185cf10);
  return;
}




void FUN_10041ac94(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  undefined4 local_30 [2];
  undefined4 local_28;
  
  lVar1 = FUN_10042e694();
  *(ushort *)(lVar1 + 0x48) = *(ushort *)(lVar1 + 0x48) | 0x10;
  *(byte *)(lVar1 + 0x60) = *(byte *)(lVar1 + 0x60) & 0xfc | 2;
  *(undefined2 *)(lVar1 + 0x5a) = 4;
  lVar1 = FUN_10043ab44(lVar1 + 0x10);
  *(ushort *)(lVar1 + 0x58) = (ushort)*(byte *)(lVar1 + 0x59) << 8;
  *(undefined8 *)(lVar1 + 0x4c) = 0;
  *(undefined8 *)(lVar1 + 0x44) = 0;
  *(undefined4 *)(lVar1 + 0x54) = 0;
  *(undefined1 *)(lVar1 + 0x50) = 1;
  *(undefined4 *)(lVar1 + 0x40) = 0x3e99999a;
  plVar2 = (long *)FUN_10043187c(lVar1 + 0x10);
  local_30[0] = 0;
  local_28 = 1;
  (**(code **)(*plVar2 + 0x30))(plVar2,local_30);
  lVar1 = FUN_10042e3b0(param_1);
  FUN_10049b814(lVar1 + 0x10);
  return;
}




void FUN_10041ad44(undefined8 param_1)

{
  long lVar1;
  undefined4 local_30 [2];
  undefined4 local_28;
  
  local_30[0] = 0x3f000000;
  local_28 = 1;
  FUN_10042eb40(param_1,local_30);
  lVar1 = FUN_10042e3b0(param_1);
  FUN_10049b814(lVar1 + 0x10);
  return;
}




void FUN_10041ad8c(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  undefined8 local_60;
  undefined4 local_58;
  
  FUN_100435a7c(param_1,0x10,"Effect_ItemSilence","OverHead");
  lVar2 = FUN_10042e498(param_1);
  plVar3 = (long *)FUN_10045562c(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))();
  local_60._0_4_ = 0x42c80000;
  local_58 = 1;
  plVar3 = (long *)(**(code **)(*plVar3 + 0x10))(plVar3,&local_60);
  (**(code **)(*plVar3 + 0x20))(plVar3,FUN_100451e6c);
  plVar3 = (long *)FUN_100441e18(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))(plVar3,"Sound_HeroPLU_Overheat");
  (**(code **)(*plVar3 + 0x28))(0x3f800000);
  lVar2 = FUN_10042e2c8(param_1);
  lVar2 = lVar2 + 0x10;
  plVar3 = (long *)FUN_100441e68(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x60))();
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_HeroPLU_OVERHEATING");
  (**(code **)(*plVar3 + 0x78))(plVar3,1);
  lVar4 = FUN_10043ab44(lVar2);
  puVar1 = PTR_s_Ability__HeroPLU__A_1018599d8;
  *(undefined1 *)(lVar4 + 0x58) = 9;
  *(undefined4 *)(lVar4 + 0x51) = 0;
  *(undefined4 *)(lVar4 + 0x54) = 0;
  *(undefined1 *)(lVar4 + 0x50) = 7;
  *(undefined **)(lVar4 + 0x40) = puVar1;
  *(undefined8 *)(lVar4 + 0x48) = 4;
  plVar3 = (long *)FUN_100451f14(lVar4 + 0x10);
  (**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Ability__HeroPLU__OverheatEmpowe_1018599d0);
  lVar4 = FUN_10043ab44(lVar2);
  puVar1 = PTR_s_Ability__HeroPLU__B_1018599e0;
  *(undefined4 *)(lVar4 + 0x51) = 0;
  *(undefined4 *)(lVar4 + 0x54) = 0;
  *(undefined1 *)(lVar4 + 0x50) = 7;
  *(undefined **)(lVar4 + 0x40) = puVar1;
  *(undefined8 *)(lVar4 + 0x48) = 4;
  *(ushort *)(lVar4 + 0x58) = *(ushort *)(lVar4 + 0x58) & 0xff01 | 0x409;
  lVar4 = FUN_100451f64(lVar4 + 0x10);
  puVar1 = PTR_s_Ability__HeroPLU__TossEngine_101859a00;
  *(undefined **)(lVar4 + 0x10) = PTR_s_Ability__HeroPLU__B_1018599e0;
  *(undefined **)(lVar4 + 0x18) = puVar1;
  lVar2 = FUN_100451f64(lVar2);
  puVar1 = PTR_s_Ability__HeroPLU__Kaboom_1018599f8;
  *(undefined **)(lVar2 + 0x10) = PTR_s_Ability__HeroPLU__C_1018599e8;
  *(undefined **)(lVar2 + 0x18) = puVar1;
  lVar2 = FUN_10042fdc4(param_1);
  lVar2 = lVar2 + 0x10;
  plVar3 = (long *)FUN_100433de4(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))(plVar3,PTR_s_Buff_HeroPLU_EngineStacks_10185b190);
  local_60 = (code *)((ulong)local_60._4_4_ << 0x20);
  local_58 = 1;
  (**(code **)(*plVar3 + 0x18))(plVar3,&local_60);
  plVar3 = (long *)FUN_100433e34(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_HeroPLU_EngineRecovery_10185b1a0)
  ;
  local_60 = FUN_100451e30;
  local_58 = 3;
  (**(code **)(*plVar3 + 0x18))(plVar3,&local_60);
  plVar3 = (long *)FUN_1004385a0(lVar2);
  (**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_HeroPLU_TempNonRecoveryHeli_10185cef0);
  lVar2 = FUN_1004303b0(param_1);
  plVar3 = (long *)FUN_100454548(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Ability__HeroPLU__Kaboom_1018599f8);
  (**(code **)(*plVar3 + 0x28))(plVar3,FUN_100451e3c);
  return;
}




void FUN_10041b034(void)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_10042e2c8();
  plVar2 = (long *)FUN_100433e34(lVar1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010041b05c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_Slow_10185a5a0);
  return;
}




void FUN_10041b060(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  code *local_30;
  undefined4 local_28;
  
  lVar2 = FUN_10042e2c8();
  lVar2 = FUN_10043ab44(lVar2 + 0x10);
  puVar1 = PTR_s_Ability__HeroPLU__C_1018599e8;
  *(undefined1 *)(lVar2 + 0x58) = 10;
  *(undefined4 *)(lVar2 + 0x51) = 0;
  *(undefined4 *)(lVar2 + 0x54) = 0;
  *(undefined1 *)(lVar2 + 0x50) = 7;
  *(undefined **)(lVar2 + 0x40) = puVar1;
  *(undefined8 *)(lVar2 + 0x48) = 0x200000003;
  plVar3 = (long *)FUN_100433e34(lVar2 + 0x10);
  (**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_HeroPLU_RecoveryDebrisSwap_10185cf18);
  lVar2 = FUN_10042e580(param_1);
  *(undefined4 *)(lVar2 + 0x40) = 0x3dcccccd;
  *(byte *)(lVar2 + 0x44) = *(byte *)(lVar2 + 0x44) & 0xfe;
  plVar3 = (long *)FUN_1004519c8(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))();
  local_30 = FUN_100451fb4;
  local_28 = 4;
  (**(code **)(*plVar3 + 0x10))(plVar3,3,&local_30);
  lVar2 = FUN_10042fdc4(param_1);
  plVar3 = (long *)FUN_100433e34(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))
                             (plVar3,PTR_s_Buff_HeroPLU_TempNonRecoveryHeli_10185cef0);
  local_30 = (code *)CONCAT44(local_30._4_4_,0xbf800000);
  local_28 = 1;
  (**(code **)(*plVar3 + 0x18))(plVar3,&local_30);
  plVar3 = (long *)FUN_100441e18(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))(plVar3,"Sound_HeroPLU_RecoveryFinished");
  (**(code **)(*plVar3 + 0x28))(0x3f800000);
  return;
}




void FUN_10041b1ac(void)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_10042e2c8();
  plVar2 = (long *)FUN_100451f14(lVar1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010041b1d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Ability__HeroPLU__EmpoweredAttac_1018599c8);
  return;
}




void FUN_10041b1d8(void)

{
  long lVar1;
  long *plVar2;
  code *local_40;
  undefined4 local_38;
  
  lVar1 = FUN_10042e498();
  lVar1 = lVar1 + 0x10;
  plVar2 = (long *)FUN_100441e68(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x60))();
  (**(code **)(*plVar2 + 0x48))(plVar2,"Effect_HeroPLU_Explosion");
  plVar2 = (long *)FUN_100433e34(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))
                             (plVar2,PTR_s_Buff_HeroPLU_EngineSelfExplosion_10185cf08);
  local_40 = FUN_1004520f0;
  local_38 = 3;
  (**(code **)(*plVar2 + 0x18))(plVar2,&local_40);
  plVar2 = (long *)FUN_10043fc58(lVar1);
  local_40 = FUN_100452104;
  local_38 = 3;
  (**(code **)(*plVar2 + 0x30))(plVar2,&local_40);
  plVar2 = (long *)FUN_10049bd10(lVar1);
  (**(code **)(*plVar2 + 0x30))(plVar2,FUN_100451fe8);
  plVar2 = (long *)FUN_10043ab94(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x40))();
  local_40 = FUN_100452118;
  local_38 = 3;
  (**(code **)(*plVar2 + 0x18))(plVar2,&local_40,1,3);
  plVar2 = (long *)FUN_100434b18(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_Stunned_10185a208);
  local_40._0_4_ = 0x3f800000;
  local_38 = 1;
  (**(code **)(*plVar2 + 0x18))(plVar2,&local_40);
  plVar2 = (long *)FUN_100433e34(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_Stunned_10185a208);
  local_40 = (code *)CONCAT44(local_40._4_4_,0x3f800000);
  local_38 = 1;
  (**(code **)(*plVar2 + 0x18))(plVar2,&local_40);
  return;
}




void FUN_10041b35c(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = FUN_10042e2c8();
  lVar3 = FUN_100451b5c(lVar2 + 0x10);
  *(char **)(lVar3 + 0x10) = "recovery lifetime";
  lVar2 = FUN_100451f64(lVar2 + 0x10);
  puVar1 = PTR_s_Ability__HeroPLU__C_Debris_101859a08;
  *(undefined **)(lVar2 + 0x10) = PTR_s_Ability__HeroPLU__C_1018599e8;
  *(undefined **)(lVar2 + 0x18) = puVar1;
  return;
}




void FUN_10041b3ac(void)

{
  return;
}




void FUN_10041b3b0(long param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined4 local_50 [2];
  undefined4 local_48;
  
  *(undefined4 *)(param_1 + 0x318) = 0x41200000;
  if (*(float *)(param_1 + 0x31c) < 10.0) {
    *(undefined4 *)(param_1 + 0x31c) = 0x41200000;
  }
  *(uint *)(param_1 + 0x340) = *(uint *)(param_1 + 0x340) & 0xffffffef;
  lVar1 = FUN_10042e580(param_1);
  *(undefined4 *)(lVar1 + 0x40) = 0x3dcccccd;
  *(byte *)(lVar1 + 0x44) = *(byte *)(lVar1 + 0x44) | 1;
  lVar2 = FUN_10043d65c(lVar1 + 0x10);
  *(code **)(lVar2 + 0x10) = FUN_1004521b0;
  plVar3 = (long *)FUN_100434b18(lVar1 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))
                             (plVar3,PTR_s_Buff_HeroPLU_SmokeCloudSelfBuff_10185cef8);
  local_50[0] = 0x3e4ccccd;
  local_48 = 1;
  (**(code **)(*plVar3 + 0x18))(plVar3,local_50);
  lVar1 = FUN_10042e580(param_1);
  *(undefined4 *)(lVar1 + 0x40) = 0x3dcccccd;
  *(byte *)(lVar1 + 0x44) = *(byte *)(lVar1 + 0x44) | 1;
  lVar2 = FUN_10043d65c(lVar1 + 0x10);
  *(code **)(lVar2 + 0x10) = FUN_10045212c;
  plVar3 = (long *)FUN_100434b18(lVar1 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))
                             (plVar3,PTR_s_Buff_HeroPLU_SmokeCloudEnemyDebu_10185cf00);
  local_50[0] = 0x3e4ccccd;
  local_48 = 1;
  (**(code **)(*plVar3 + 0x18))(plVar3,local_50);
  lVar1 = FUN_10042e2c8(param_1);
  plVar3 = (long *)FUN_100441e68(lVar1 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x60))();
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_HeroPLU_SmokeCloud");
  plVar3 = (long *)(**(code **)(*plVar3 + 0xb0))(plVar3,1);
  (**(code **)(*plVar3 + 0x78))(plVar3,1);
  lVar1 = FUN_10042fdc4(param_1);
  FUN_10044c418(lVar1 + 0x10);
  return;
}




void FUN_10041b548(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  int *piVar4;
  code *local_30;
  undefined4 local_28;
  
  lVar1 = FUN_10042e580();
  *(undefined4 *)(lVar1 + 0x40) = 0x3dcccccd;
  *(byte *)(lVar1 + 0x44) = *(byte *)(lVar1 + 0x44) & 0xfe;
  lVar1 = FUN_10043fc08(lVar1 + 0x10);
  FUN_10049cf78(lVar1 + 0x10);
  lVar2 = FUN_10043aaa4(lVar1 + 0x88);
  *(code **)(lVar2 + 0x10) = FUN_100454030;
  piVar4 = (int *)(lVar2 + 0x20);
  if ((*piVar4 == 0) || (piVar4 = (int *)(lVar2 + 0x24), *piVar4 == 0)) {
    FUN_1003a4e5c(piVar4,PTR_s_Buff_Ylva_Perk_Detected_10185cf38);
  }
  plVar3 = (long *)FUN_100434b18(lVar1 + 0x88);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Ylva_Perk_Detected_10185cf38);
  local_30 = FUN_100454104;
  local_28 = 3;
  (**(code **)(*plVar3 + 0x18))(plVar3,&local_30);
  return;
}




void FUN_10041b614(void)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_10042e498();
  plVar2 = (long *)FUN_100441e68(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x98))(plVar2,2);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))();
  plVar2 = (long *)(**(code **)(*plVar2 + 0x60))();
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Ylva_Perk_Ping");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,0);
                    /* WARNING: Could not recover jumptable at 0x00010041b684. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x80))(plVar2,0);
  return;
}




void FUN_10041b688(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  code *local_60;
  undefined4 local_58;
  
  *(code **)(param_1 + 0x330) = FUN_100454198;
  lVar2 = FUN_10042e498();
  plVar3 = (long *)FUN_100433e34(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Ylva_A_Charging_10185cf40);
  local_60 = FUN_100454118;
  local_58 = 3;
  (**(code **)(*plVar3 + 0x18))(plVar3,&local_60);
  lVar2 = FUN_10042e2c8(param_1);
  lVar2 = lVar2 + 0x10;
  lVar4 = FUN_10049be00(lVar2);
  *(undefined4 *)(lVar4 + 0x58) = 2;
  *(code **)(lVar4 + 0x10) = FUN_1004542e4;
  *(undefined4 *)(lVar4 + 0x18) = 3;
  lVar4 = FUN_100451f64(lVar2);
  puVar1 = PTR_s_Ability__Ylva__A_Cancel_101859b10;
  *(undefined **)(lVar4 + 0x10) = PTR_s_Ability__Ylva__A_101859b08;
  *(undefined **)(lVar4 + 0x18) = puVar1;
  plVar3 = (long *)FUN_10049ba04(lVar2);
  (**(code **)(*plVar3 + 0x30))(plVar3,"Idle","Ability01_Idle");
  plVar3 = (long *)FUN_10049ba04(lVar2);
  (**(code **)(*plVar3 + 0x30))(plVar3,"IdleCombat","Ability01_Idle");
  plVar3 = (long *)FUN_10049ba04(lVar2);
  (**(code **)(*plVar3 + 0x30))(plVar3,"IdleSheath","Ability01_Idle");
  plVar3 = (long *)FUN_10049ba04(lVar2);
  (**(code **)(*plVar3 + 0x30))(plVar3,"IdleBrush","Ability01_Idle");
  plVar3 = (long *)FUN_10049ba04(lVar2);
  (**(code **)(*plVar3 + 0x30))(plVar3,"Move","Ability01_Move");
  plVar3 = (long *)FUN_10049ba04(lVar2);
  (**(code **)(*plVar3 + 0x30))(plVar3,"MoveStart","Ability01_MoveStart");
  plVar3 = (long *)FUN_10049ba04(lVar2);
  (**(code **)(*plVar3 + 0x30))(plVar3,"MoveStop","Ability01_MoveStop");
  plVar3 = (long *)FUN_10049ba04(lVar2);
  (**(code **)(*plVar3 + 0x30))(plVar3,"MoveCombat","Ability01_Move");
  plVar3 = (long *)FUN_10049ba04(lVar2);
  (**(code **)(*plVar3 + 0x30))(plVar3,"MoveStartCombat","Ability01_MoveStart");
  plVar3 = (long *)FUN_10049ba04(lVar2);
  (**(code **)(*plVar3 + 0x30))(plVar3,"MoveStopCombat","Ability01_MoveStop");
  plVar3 = (long *)FUN_10049ba04(lVar2);
  (**(code **)(*plVar3 + 0x30))(plVar3,"MoveSheath","Ability01_Move");
  plVar3 = (long *)FUN_10049ba04(lVar2);
  (**(code **)(*plVar3 + 0x30))(plVar3,"MoveBrush","Ability01_Move");
  plVar3 = (long *)FUN_10049ba04(lVar2);
  (**(code **)(*plVar3 + 0x30))(plVar3,"MoveStartBrush","Ability01_MoveStart");
  plVar3 = (long *)FUN_10049ba04(lVar2);
  (**(code **)(*plVar3 + 0x30))(plVar3,"MoveStopBrush","Ability01_MoveStop");
  plVar3 = (long *)FUN_10049ba04(lVar2);
  (**(code **)(*plVar3 + 0x30))(plVar3,"Sprint","Ability01_Move");
  plVar3 = (long *)FUN_10049ba04(lVar2);
  (**(code **)(*plVar3 + 0x30))(plVar3,"Attack","Ability01_Idle");
  plVar3 = (long *)FUN_10049ba04(lVar2);
  (**(code **)(*plVar3 + 0x30))(plVar3,"AltAttack","Ability01_Idle");
  plVar3 = (long *)FUN_10049ba04(lVar2);
  (**(code **)(*plVar3 + 0x30))(plVar3,"CritAttack","Ability01_Idle");
  lVar2 = FUN_10042fdc4(param_1);
  lVar2 = lVar2 + 0x10;
  plVar3 = (long *)FUN_1004385a0(lVar2);
  (**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Ylva_A_Charging_10185cf40);
  plVar3 = (long *)FUN_1004385a0(lVar2);
  (**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Ylva_A_Charged_10185cf48);
  plVar3 = (long *)FUN_10049c8e4(lVar2);
  (**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Ability__Ylva__A_101859b08);
  return;
}




void FUN_10041ba14(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  
  lVar1 = FUN_10042e2c8();
  lVar1 = lVar1 + 0x10;
  plVar2 = (long *)FUN_100441e68(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,"Bone_RightHand");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Ylva_A_Charging");
  plVar2 = (long *)(**(code **)(*plVar2 + 0xc0))(0x3f800000,0,0);
  (**(code **)(*plVar2 + 0xb0))(plVar2,1);
  plVar2 = (long *)FUN_10049bbfc(lVar1);
  (**(code **)(*plVar2 + 0x48))();
  plVar2 = (long *)FUN_10049b7c4(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))(plVar2,"Sound_Ylva_A_Charging");
  uVar3 = FUN_1010a1520();
  lVar1 = FUN_1010a0e0c(uVar3,0,"*KindredSoundBalance*",0);
  FUN_1003c9258(*(undefined4 *)(lVar1 + 0x57c));
  (**(code **)(*plVar2 + 0x28))(plVar2);
  lVar1 = FUN_1004303b0(param_1);
  plVar2 = (long *)FUN_100433e34(lVar1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010041bb10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_Ylva_A_Charged_10185cf48);
  return;
}




void FUN_10041bb14(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  
  lVar1 = FUN_10042e498();
  lVar1 = FUN_10043fc08(lVar1 + 0x10);
  lVar2 = FUN_10049c198(lVar1 + 0x10);
  *(code **)(lVar2 + 8) = FUN_1004542f8;
  FUN_1004385f0(lVar1 + 0x88);
  lVar1 = FUN_10042e2c8(param_1);
  lVar1 = lVar1 + 0x10;
  plVar3 = (long *)FUN_100441e68(lVar1);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x78))(plVar3,"Bone_RightHand");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Ylva_A_Charged");
  plVar3 = (long *)(**(code **)(*plVar3 + 0xc0))(0x3f800000,0,0);
  (**(code **)(*plVar3 + 0xb0))(plVar3,1);
  plVar3 = (long *)FUN_10049bbfc(lVar1);
  (**(code **)(*plVar3 + 0x38))();
  plVar3 = (long *)FUN_10049b7c4(lVar1);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,"Sound_Ylva_A_Charging_Complete");
  uVar4 = FUN_1010a1520();
  lVar1 = FUN_1010a0e0c(uVar4,0,"*KindredSoundBalance*",0);
  FUN_1003c9258(*(undefined4 *)(lVar1 + 0x57c));
                    /* WARNING: Could not recover jumptable at 0x00010041bc1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x28))(plVar3);
  return;
}




void FUN_10041bc20(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  code *local_40;
  undefined4 local_38;
  
  lVar1 = FUN_10042e3b0();
  FUN_10049b814(lVar1 + 0x10);
  lVar1 = FUN_10042e2c8(param_1);
  lVar1 = lVar1 + 0x10;
  plVar2 = (long *)FUN_100441e68(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,"Bone_CenterMass");
  (**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Ylva_B_Adrenaline");
  plVar2 = (long *)FUN_100430a84(lVar1);
  local_40 = FUN_100454388;
  local_38 = 3;
  (**(code **)(*plVar2 + 0x30))(plVar2,0xf,1,&local_40);
  lVar1 = FUN_10049be00(lVar1);
  *(undefined4 *)(lVar1 + 0x58) = 1;
  *(code **)(lVar1 + 0x10) = FUN_10045439c;
  *(undefined4 *)(lVar1 + 0x18) = 3;
  return;
}




void FUN_10041bce8(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  long lVar4;
  long *plVar5;
  float fVar6;
  code *local_50;
  undefined4 local_48;
  
  lVar4 = *(long *)(*(long *)(param_1 + 0x10) + 0x10);
  if (*(int *)(lVar4 + 0x260) != *(int *)(param_1 + 0x308)) {
    lVar4 = FUN_100345d90(*(int *)(param_1 + 0x308));
  }
  fVar6 = (float)FUN_1003dfe60(lVar4,3,7,9,1);
  *(float *)(param_1 + 0x318) = fVar6;
  if (*(float *)(param_1 + 0x31c) < fVar6) {
    *(float *)(param_1 + 0x31c) = fVar6;
  }
  *(uint *)(param_1 + 0x340) =
       *(uint *)(param_1 + 0x340) & 0xfffe0 | (uint)(fVar6 < 0.0) << 4 |
       *(uint *)(param_1 + 0x340) & 0xfff0000f;
  lVar4 = FUN_10042e498(param_1);
  plVar5 = (long *)FUN_100433e34(lVar4 + 0x10);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x30))(plVar5,PTR_s_Buff_Ylva_C_Trap_Arming_10185cf58);
  local_50 = FUN_10045442c;
  local_48 = 3;
  (**(code **)(*plVar5 + 0x18))(plVar5,&local_50);
  plVar5 = (long *)FUN_10049baf4(lVar4 + 0x10);
  local_50 = FUN_100454418;
  local_48 = 3;
  (**(code **)(*plVar5 + 0x38))(plVar5,0,&local_50);
  puVar2 = PTR_s_onBeforeApplyDamageName_10185d570;
  uVar3 = FUN_1004d2524(PTR_s_onBeforeApplyDamageName_10185d570);
  uVar3 = FUN_100015208(puVar2,uVar3,0x12345678);
  *(undefined4 *)(param_1 + 0xa0 + (ulong)*(uint *)(param_1 + 0x160) * 4) = uVar3;
  uVar1 = *(uint *)(param_1 + 0x160);
  *(code **)(param_1 + 0xa0 + (ulong)uVar1 * 8 + 0x40) = FUN_1004543b0;
  *(uint *)(param_1 + 0x160) = uVar1 + 1;
  lVar4 = FUN_10042e580(param_1);
  *(undefined4 *)(lVar4 + 0x40) = 0x3f800000;
  *(byte *)(lVar4 + 0x44) = *(byte *)(lVar4 + 0x44) & 0xfe;
  plVar5 = (long *)FUN_1004519c8(lVar4 + 0x10);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x48))();
  local_50._0_4_ = 0xbf800000;
  local_48 = 1;
  (**(code **)(*plVar5 + 0x10))(plVar5,0,&local_50);
  lVar4 = FUN_10042fdc4(param_1);
  lVar4 = lVar4 + 0x10;
  plVar5 = (long *)FUN_1004385a0(lVar4);
  (**(code **)(*plVar5 + 0x30))(plVar5,PTR_s_Buff_Ylva_C_Trap_Arming_10185cf58);
  plVar5 = (long *)FUN_1004385a0(lVar4);
  (**(code **)(*plVar5 + 0x30))(plVar5,PTR_s_Buff_Ylva_C_Trap_Armed_10185cf60);
  plVar5 = (long *)FUN_100433e34(lVar4);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x30))(plVar5,PTR_s_Buff_Ylva_C_Trap_Disarmed_10185b350);
  local_50 = (code *)CONCAT44(local_50._4_4_,0x40a00000);
  local_48 = 1;
  (**(code **)(*plVar5 + 0x18))(plVar5,&local_50);
  return;
}




void FUN_10041bf14(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_1004303b0();
  plVar2 = (long *)FUN_100433e34(lVar1 + 0x10);
  (**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_Ylva_C_Trap_Armed_10185cf60);
  lVar1 = FUN_10042e2c8(param_1);
  plVar2 = (long *)FUN_100441e68(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x60))();
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Ylva_C_Trap_Arming");
                    /* WARNING: Could not recover jumptable at 0x00010041bf88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0xb0))(plVar2,1);
  return;
}




void FUN_10041bf8c(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  code *local_40;
  undefined4 local_38;
  
  lVar1 = FUN_10042e2c8();
  lVar1 = lVar1 + 0x10;
  FUN_10049c460(lVar1);
  plVar2 = (long *)FUN_100441e68(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x60))();
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Ylva_C_Trap_Armed");
  (**(code **)(*plVar2 + 0xb0))(plVar2,1);
  plVar2 = (long *)FUN_100441e68(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x60))();
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Hero000_Ring");
  local_40 = FUN_100454534;
  local_38 = 3;
  plVar2 = (long *)(**(code **)(*plVar2 + 0xd0))(plVar2,&local_40);
  (**(code **)(*plVar2 + 0xb0))(plVar2,1);
  lVar1 = FUN_10042e498(param_1);
  plVar2 = (long *)FUN_100441e18(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x38))(plVar2,"Sound_Ylva_C_Arming");
  uVar3 = FUN_1010a1520();
  lVar1 = FUN_1010a0e0c(uVar3,0,"*KindredSoundBalance*",0);
  FUN_1003c9258(*(undefined4 *)(lVar1 + 0x598));
  (**(code **)(*plVar2 + 0x28))(plVar2);
  lVar1 = FUN_10042e580(param_1);
  *(undefined4 *)(lVar1 + 0x40) = 0x3dcccccd;
  *(byte *)(lVar1 + 0x44) = *(byte *)(lVar1 + 0x44) & 0xfe;
  lVar4 = FUN_10049bea0(lVar1 + 0x10);
  *(code **)(lVar4 + 0x10) = FUN_100454440;
  *(undefined4 *)(lVar4 + 0x20) = 1;
  lVar1 = FUN_10043fc08(lVar1 + 0x10);
  lVar4 = FUN_10049c03c(lVar1 + 0x10);
  *(undefined4 *)(lVar4 + 0x18) = 0;
  *(undefined4 *)(lVar4 + 8) = 0;
  *(undefined4 *)(lVar4 + 0x10) = 1;
  lVar1 = lVar1 + 0x88;
  FUN_1004385f0(lVar1);
  plVar2 = (long *)FUN_100433e34(lVar1);
  (**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_Untargetable_10185bda8);
  plVar2 = (long *)FUN_100454548(lVar1);
  (**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Ability__Ylva__C_Trap_Explode_101859b30);
  return;
}




void FUN_10041c158(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = FUN_10042e3b0();
  FUN_10049b814(lVar1 + 0x10);
  lVar1 = FUN_10042e2c8(param_1);
  lVar1 = lVar1 + 0x10;
  FUN_10049d9bc(lVar1);
  FUN_10049c4b0(lVar1);
  FUN_10049c210(lVar1);
  FUN_10049cb64(lVar1);
  lVar1 = FUN_10049b9b4(lVar1);
  *(undefined2 *)(lVar1 + 0x10) = 0x1500;
  lVar1 = FUN_10042fdc4(param_1);
  FUN_100434ac8(lVar1 + 0x10);
  return;
}




void FUN_10041c1c8(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined4 local_30 [2];
  undefined4 local_28;
  
  FUN_100435a7c(param_1,0x23,"Effect_Ylva_C_Trap_Root",0);
  lVar1 = FUN_10042e498(param_1);
  plVar2 = (long *)FUN_1004560cc(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))
                             (plVar2,PTR_s_Buff_Ylva_C_Trap_CaughtSomeoneRe_10185cf68);
  local_30[0] = 0x40400000;
  local_28 = 1;
  (**(code **)(*plVar2 + 0x18))(plVar2,local_30);
  plVar2 = (long *)FUN_10049da1c(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x38))(plVar2,"Sound_Ylva_C_Root");
  uVar3 = FUN_1010a1520();
  lVar1 = FUN_1010a0e0c(uVar3,0,"*KindredSoundBalance*",0);
  FUN_1003c9258(*(undefined4 *)(lVar1 + 0x5a0));
  (**(code **)(*plVar2 + 0x28))(plVar2);
  return;
}




void FUN_10041c298(void)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_10042ea44();
  FUN_1004386bc(lVar1 + 0x10);
  plVar2 = (long *)FUN_10043ab94(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x40))();
  plVar2 = (long *)(**(code **)(*plVar2 + 0x38))(plVar2,"DAMAGE",3);
                    /* WARNING: Could not recover jumptable at 0x00010041c2f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x98))();
  return;
}




void FUN_10041c2f4(void)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_10042e498();
  plVar2 = (long *)FUN_10043626c(lVar1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010041c31c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x30))(plVar2,"ability3");
  return;
}




void FUN_10041c320(undefined8 param_1)

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
  lVar1 = FUN_10042e694();
  *(ushort *)(lVar1 + 0x48) = *(ushort *)(lVar1 + 0x48) | 8;
  *(byte *)(lVar1 + 0x60) = *(byte *)(lVar1 + 0x60) & 0xfc | 1;
  *(undefined4 *)(lVar1 + 0x40) = 0x649508d4;
  plVar2 = (long *)FUN_10043187c(lVar1 + 0x10);
  local_40 = FUN_1004897d0;
  local_38 = 3;
  (**(code **)(*plVar2 + 0x30))(plVar2,&local_40);
  lVar1 = FUN_100433030(param_1);
  if (PTR_s_Ability__Ylva__A_101859b08 == (undefined *)0x0) {
    uVar4 = 0;
  }
  else {
    cVar3 = *PTR_s_Ability__Ylva__A_101859b08;
    uVar4 = 0x811c9dc5;
    if (cVar3 != '\0') {
      uVar4 = 0x811c9dc5;
      pcVar5 = PTR_s_Ability__Ylva__A_101859b08;
      do {
        pcVar5 = pcVar5 + 1;
        uVar4 = (uVar4 ^ (int)cVar3) * 0x1000193;
        cVar3 = *pcVar5;
      } while (cVar3 != '\0');
    }
  }
  *(uint *)(lVar1 + 0x28) = uVar4;
  *(undefined1 *)(lVar1 + 0x2c) = 1;
  lVar1 = FUN_10049bf40(lVar1 + 0x10);
  if (PTR_s_Ability__Ylva__A_101859b08 == (undefined *)0x0) {
    uVar6 = 0;
  }
  else {
    cVar3 = *PTR_s_Ability__Ylva__A_101859b08;
    pcVar5 = PTR_s_Ability__Ylva__A_101859b08;
    while (cVar3 != '\0') {
      pcVar5 = pcVar5 + 1;
      uVar6 = (uVar6 ^ (int)cVar3) * 0x1000193;
      cVar3 = *pcVar5;
    }
  }
  *(uint *)(lVar1 + 0x20) = uVar6;
  *(code **)(lVar1 + 0x10) = FUN_10049508c;
  *(undefined4 *)(lVar1 + 0x18) = 3;
  *(undefined4 *)(lVar1 + 0x28) = 1;
  return;
}




void FUN_10041c468(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  uint uVar4;
  char cVar5;
  char *pcVar6;
  uint uVar7;
  code *local_60;
  undefined4 local_58;
  
  uVar7 = 0x811c9dc5;
  lVar1 = FUN_10042e694();
  *(ushort *)(lVar1 + 0x48) = *(ushort *)(lVar1 + 0x48) | 8;
  *(byte *)(lVar1 + 0x60) = *(byte *)(lVar1 + 0x60) & 0xfc | 1;
  *(undefined4 *)(lVar1 + 0x40) = 0x66950bfa;
  plVar2 = (long *)FUN_10043187c(lVar1 + 0x10);
  local_60 = FUN_100494fb8;
  local_58 = 3;
  (**(code **)(*plVar2 + 0x30))(plVar2,&local_60);
  lVar1 = FUN_100433030(param_1);
  if (PTR_s_Ability__Ylva__C_101859b20 == (undefined *)0x0) {
    uVar4 = 0;
  }
  else {
    cVar5 = *PTR_s_Ability__Ylva__C_101859b20;
    uVar4 = 0x811c9dc5;
    if (cVar5 != '\0') {
      uVar4 = 0x811c9dc5;
      pcVar6 = PTR_s_Ability__Ylva__C_101859b20;
      do {
        pcVar6 = pcVar6 + 1;
        uVar4 = (uVar4 ^ (int)cVar5) * 0x1000193;
        cVar5 = *pcVar6;
      } while (cVar5 != '\0');
    }
  }
  *(uint *)(lVar1 + 0x28) = uVar4;
  *(undefined1 *)(lVar1 + 0x2c) = 1;
  lVar3 = FUN_10049bf40(lVar1 + 0x10);
  if (PTR_s_Ability__Ylva__C_101859b20 == (undefined *)0x0) {
    uVar4 = 0;
  }
  else {
    cVar5 = *PTR_s_Ability__Ylva__C_101859b20;
    uVar4 = 0x811c9dc5;
    if (cVar5 != '\0') {
      uVar4 = 0x811c9dc5;
      pcVar6 = PTR_s_Ability__Ylva__C_101859b20;
      do {
        pcVar6 = pcVar6 + 1;
        uVar4 = (uVar4 ^ (int)cVar5) * 0x1000193;
        cVar5 = *pcVar6;
      } while (cVar5 != '\0');
    }
  }
  *(uint *)(lVar3 + 0x20) = uVar4;
  *(code **)(lVar3 + 0x10) = FUN_100494fec;
  *(undefined4 *)(lVar3 + 0x18) = 3;
  *(undefined4 *)(lVar3 + 0x28) = 1;
  lVar1 = FUN_10049c888(lVar1 + 0x10);
  if (PTR_s_Ability__Ylva__C_101859b20 == (undefined *)0x0) {
    uVar4 = 0;
  }
  else {
    cVar5 = *PTR_s_Ability__Ylva__C_101859b20;
    uVar4 = 0x811c9dc5;
    if (cVar5 != '\0') {
      uVar4 = 0x811c9dc5;
      pcVar6 = PTR_s_Ability__Ylva__C_101859b20;
      do {
        pcVar6 = pcVar6 + 1;
        uVar4 = (uVar4 ^ (int)cVar5) * 0x1000193;
        cVar5 = *pcVar6;
      } while (cVar5 != '\0');
    }
  }
  *(uint *)(lVar1 + 0x20) = uVar4;
  *(code **)(lVar1 + 0x10) = FUN_100495020;
  *(undefined4 *)(lVar1 + 0x18) = 3;
  lVar1 = FUN_100433030(param_1);
  if (PTR_s_Ability__Ylva__C_101859b20 == (undefined *)0x0) {
    uVar7 = 0;
  }
  else {
    cVar5 = *PTR_s_Ability__Ylva__C_101859b20;
    pcVar6 = PTR_s_Ability__Ylva__C_101859b20;
    while (cVar5 != '\0') {
      pcVar6 = pcVar6 + 1;
      uVar7 = (uVar7 ^ (int)cVar5) * 0x1000193;
      cVar5 = *pcVar6;
    }
  }
  *(uint *)(lVar1 + 0x28) = uVar7;
  lVar1 = FUN_10049da9c(lVar1 + 0x10);
  *(undefined **)(lVar1 + 0x10) = PTR_s_Ability__Ylva__C_101859b20;
  *(code **)(lVar1 + 0x18) = FUN_100495058;
  *(undefined4 *)(lVar1 + 0x20) = 3;
  *(undefined4 *)(lVar1 + 0x2c) = 0;
  return;
}




void FUN_10041c688(undefined8 param_1)

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
  lVar1 = FUN_10042e694();
  *(ushort *)(lVar1 + 0x48) = *(ushort *)(lVar1 + 0x48) | 8;
  *(byte *)(lVar1 + 0x60) = *(byte *)(lVar1 + 0x60) & 0xfc | 1;
  *(undefined4 *)(lVar1 + 0x40) = 0x67950d8d;
  plVar2 = (long *)FUN_10043187c(lVar1 + 0x10);
  local_40 = FUN_100494f50;
  local_38 = 3;
  (**(code **)(*plVar2 + 0x30))(plVar2,&local_40);
  plVar2 = (long *)FUN_100454548(lVar1 + 0x10);
  (**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Ability__Ylva__Talent_ShatteredF_101859b38);
  lVar1 = FUN_100433030(param_1);
  if (PTR_s_Ability__Ylva__B_101859b18 == (undefined *)0x0) {
    uVar4 = 0;
  }
  else {
    cVar3 = *PTR_s_Ability__Ylva__B_101859b18;
    uVar4 = 0x811c9dc5;
    if (cVar3 != '\0') {
      uVar4 = 0x811c9dc5;
      pcVar5 = PTR_s_Ability__Ylva__B_101859b18;
      do {
        pcVar5 = pcVar5 + 1;
        uVar4 = (uVar4 ^ (int)cVar3) * 0x1000193;
        cVar3 = *pcVar5;
      } while (cVar3 != '\0');
    }
  }
  *(uint *)(lVar1 + 0x28) = uVar4;
  *(undefined1 *)(lVar1 + 0x2c) = 1;
  lVar1 = FUN_10049bf40(lVar1 + 0x10);
  if (PTR_s_Ability__Ylva__B_101859b18 == (undefined *)0x0) {
    uVar6 = 0;
  }
  else {
    cVar3 = *PTR_s_Ability__Ylva__B_101859b18;
    pcVar5 = PTR_s_Ability__Ylva__B_101859b18;
    while (cVar3 != '\0') {
      pcVar5 = pcVar5 + 1;
      uVar6 = (uVar6 ^ (int)cVar3) * 0x1000193;
      cVar3 = *pcVar5;
    }
  }
  *(uint *)(lVar1 + 0x20) = uVar6;
  *(code **)(lVar1 + 0x10) = FUN_100494f84;
  *(undefined4 *)(lVar1 + 0x18) = 3;
  *(undefined4 *)(lVar1 + 0x28) = 1;
  return;
}




void FUN_10041c7f0(long param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined8 local_40;
  undefined4 local_38;
  
  *(uint *)(param_1 + 0x340) = *(uint *)(param_1 + 0x340) | 0x800;
  lVar1 = FUN_100430b44();
  plVar2 = (long *)FUN_100433de4(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))();
  local_40 = (code *)((ulong)local_40._4_4_ << 0x20);
  local_38 = 1;
  (**(code **)(*plVar2 + 0x18))(plVar2,&local_40);
  lVar1 = FUN_10042e3b0(param_1);
  FUN_10049b814(lVar1 + 0x10);
  lVar1 = FUN_10042e2c8(param_1);
  plVar2 = (long *)FUN_10049bbfc(lVar1 + 0x10);
  (**(code **)(*plVar2 + 0x38))();
  lVar1 = FUN_10042e694(param_1);
  *(ushort *)(lVar1 + 0x48) = *(ushort *)(lVar1 + 0x48) | 8;
  *(byte *)(lVar1 + 0x60) = *(byte *)(lVar1 + 0x60) & 0xfc | 1;
  *(undefined2 *)(lVar1 + 0x5c) = 0xc;
  *(undefined4 *)(lVar1 + 0x50) = 0x301;
  plVar2 = (long *)FUN_100433e34(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))
                             (plVar2,PTR_s_Buff_Kensei_PassiveBehaviors_Con_10185cf80);
  local_40 = FUN_100453e1c;
  local_38 = 3;
  (**(code **)(*plVar2 + 0x18))(plVar2,&local_40);
  lVar1 = FUN_1004328a0(param_1);
  plVar2 = (long *)FUN_100433e34(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))
                             (plVar2,PTR_s_Buff_Kensei_PassiveBehaviors_Pay_10185cf88);
  local_40 = FUN_100453e1c;
  local_38 = 3;
  (**(code **)(*plVar2 + 0x18))(plVar2,&local_40);
  lVar1 = FUN_10042e694(param_1);
  *(ushort *)(lVar1 + 0x48) = *(ushort *)(lVar1 + 0x48) | 8;
  *(byte *)(lVar1 + 0x60) = *(byte *)(lVar1 + 0x60) & 0xfc | 1;
  *(undefined4 *)(lVar1 + 0x4c) = 1;
  lVar1 = FUN_10043fc08(lVar1 + 0x10);
  lVar3 = FUN_10049c198(lVar1 + 0x10);
  *(code **)(lVar3 + 8) = FUN_100453d98;
  plVar2 = (long *)FUN_10043187c(lVar1 + 0x88);
  local_40 = FUN_100453e28;
  local_38 = 3;
  (**(code **)(*plVar2 + 0x38))(plVar2,&local_40);
  return;
}




void FUN_10041c9a8(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  code *local_40;
  undefined4 local_38;
  
  lVar1 = FUN_10042e3b0();
  FUN_10049b814(lVar1 + 0x10);
  lVar1 = FUN_10042e694(param_1);
  *(ushort *)(lVar1 + 0x48) = *(ushort *)(lVar1 + 0x48) | 8;
  *(byte *)(lVar1 + 0x60) = *(byte *)(lVar1 + 0x60) & 0xfc | 1;
  *(undefined2 *)(lVar1 + 0x5a) = 8;
  *(undefined4 *)(lVar1 + 0x50) = 0x301;
  plVar2 = (long *)FUN_100433e34(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))
                             (plVar2,PTR_s_Buff_Kensei_PassiveBehaviors_Pay_10185cf88);
  local_40 = FUN_100453e1c;
  local_38 = 3;
  (**(code **)(*plVar2 + 0x18))(plVar2,&local_40);
  lVar1 = FUN_10042e694(param_1);
  *(ushort *)(lVar1 + 0x48) = *(ushort *)(lVar1 + 0x48) | 8;
  *(byte *)(lVar1 + 0x60) = *(byte *)(lVar1 + 0x60) & 0xfc | 1;
  *(ushort *)(lVar1 + 0x5a) = *(ushort *)(lVar1 + 0x5a) | 4;
  lVar1 = lVar1 + 0x10;
  FUN_1004386bc(lVar1);
  plVar2 = (long *)FUN_100434b18(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))
                             (plVar2,PTR_s_Buff_Kensei_PassiveBehaviors_Bar_10185cf90);
  local_40 = FUN_100453e34;
  local_38 = 3;
  (**(code **)(*plVar2 + 0x18))(plVar2,&local_40);
  plVar2 = (long *)FUN_100433de4(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x38))
                             (plVar2,PTR_s_Buff_Kensei_PassiveBehaviors_Con_10185cf80);
  local_40 = (code *)((ulong)local_40 & 0xffffffff00000000);
  local_38 = 1;
  (**(code **)(*plVar2 + 0x18))(plVar2,&local_40);
  FUN_1004385f0(lVar1);
  lVar1 = FUN_10042fdc4(param_1);
  plVar2 = (long *)FUN_100433de4(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x38))
                             (plVar2,PTR_s_Buff_Kensei_PassiveBehaviors_Con_10185cf80);
  local_40 = (code *)((ulong)local_40 & 0xffffffff00000000);
  local_38 = 1;
  (**(code **)(*plVar2 + 0x18))(plVar2,&local_40);
  return;
}




void FUN_10041cb44(void)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_10042e2c8();
  plVar2 = (long *)FUN_10049b864(lVar1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010041cb70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x30))(plVar2,4,FUN_100453e40);
  return;
}




void FUN_10041cb74(void)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_10042ea44();
  plVar2 = (long *)FUN_100441e68(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x38))();
  plVar2 = (long *)(**(code **)(*plVar2 + 0x68))(plVar2,"CenterBody");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Kensei_AA_Impact");
                    /* WARNING: Could not recover jumptable at 0x00010041cbcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0xb0))(plVar2,1);
  return;
}




void FUN_10041cbd0(void)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_10042ea44();
  plVar2 = (long *)FUN_100441e68(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x38))();
  plVar2 = (long *)(**(code **)(*plVar2 + 0x68))(plVar2,"CenterBody");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Kensei_AA_Alt_Impact");
                    /* WARNING: Could not recover jumptable at 0x00010041cc28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0xb0))(plVar2,1);
  return;
}




void FUN_10041cc2c(void)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_10042ea44();
  plVar2 = (long *)FUN_100441e68(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x38))();
  plVar2 = (long *)(**(code **)(*plVar2 + 0x60))();
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Kensei_AA_Crit_Impact");
                    /* WARNING: Could not recover jumptable at 0x00010041cc7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0xb0))(plVar2,1);
  return;
}




void FUN_10041cc80(undefined8 param_1)

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
  if (PTR_s_Ability__Kensei__A_101859ac8 == (undefined *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = 0x811c9dc5;
    cVar1 = *PTR_s_Ability__Kensei__A_101859ac8;
    pcVar5 = PTR_s_Ability__Kensei__A_101859ac8;
    while (cVar1 != '\0') {
      pcVar5 = pcVar5 + 1;
      uVar4 = (uVar4 ^ (int)cVar1) * 0x1000193;
      cVar1 = *pcVar5;
    }
  }
  *(uint *)(lVar2 + 0x20) = uVar4;
  *(code **)(lVar2 + 0x10) = FUN_100453f30;
  *(undefined4 *)(lVar2 + 0x18) = 3;
  *(undefined4 *)(lVar2 + 0x28) = 2;
  lVar2 = FUN_10042e3b0(param_1);
  FUN_10049b814(lVar2 + 0x10);
  lVar2 = FUN_10042fdc4(param_1);
  plVar3 = (long *)FUN_10043d6ac(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Ability__Kensei__A_101859ac8);
  local_30 = FUN_100453ee4;
  local_28 = 4;
  (**(code **)(*plVar3 + 0x20))(plVar3,&local_30);
  return;
}




void FUN_10041cd68(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined4 local_30 [2];
  undefined4 local_28;
  
  lVar1 = FUN_10042e498();
  lVar1 = lVar1 + 0x10;
  FUN_1004386bc(lVar1);
  plVar2 = (long *)FUN_10043ab94(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x40))();
  (**(code **)(*plVar2 + 0x38))(plVar2,"DAMAGE",0);
  plVar2 = (long *)FUN_100441e18(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x38))(plVar2,"Sound_Kensei_A_Ability_Hit_01");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x18))(plVar2,"Sound_Kensei_A_Ability_Hit_02");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x18))(plVar2,"Sound_Kensei_A_Ability_Hit_03");
  uVar3 = FUN_1010a1520();
  lVar1 = FUN_1010a0e0c(uVar3,0,"*KindredSoundBalance*",0);
  FUN_1003c8e98(*(undefined4 *)(lVar1 + 0x4b8));
  (**(code **)(*plVar2 + 0x28))(plVar2);
  lVar1 = FUN_10042e3b0(param_1);
  plVar2 = (long *)FUN_10043ab94(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x40))();
  local_30[0] = 0;
  local_28 = 1;
  (**(code **)(*plVar2 + 0x10))(plVar2,local_30,0,2);
  return;
}




void FUN_10041ce80(undefined8 param_1)

{
  code *local_20;
  undefined4 local_18;
  
  local_20 = FUN_100453f44;
  local_18 = 3;
  FUN_10042eb40(param_1,&local_20);
  return;
}




void FUN_10041ceb4(undefined8 param_1)

{
  char cVar1;
  long lVar2;
  long *plVar3;
  uint uVar4;
  char *pcVar5;
  
  lVar2 = FUN_10042e2c8();
  plVar3 = (long *)FUN_100441e68(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x78))(plVar3,"Bone_Weapon");
  (**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Kensei_B_Empowered");
  lVar2 = FUN_100433030(param_1);
  if (PTR_s_Ability__Kensei__A_101859ac8 == (undefined *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = 0x811c9dc5;
    cVar1 = *PTR_s_Ability__Kensei__A_101859ac8;
    pcVar5 = PTR_s_Ability__Kensei__A_101859ac8;
    while (cVar1 != '\0') {
      pcVar5 = pcVar5 + 1;
      uVar4 = (uVar4 ^ (int)cVar1) * 0x1000193;
      cVar1 = *pcVar5;
    }
  }
  *(uint *)(lVar2 + 0x28) = uVar4;
  lVar2 = FUN_10049da9c(lVar2 + 0x10);
  *(undefined **)(lVar2 + 0x10) = PTR_s_Ability__Kensei__A_101859ac8;
  *(code **)(lVar2 + 0x18) = FUN_100453f58;
  *(undefined4 *)(lVar2 + 0x20) = 3;
  *(undefined4 *)(lVar2 + 0x2c) = 1;
  lVar2 = FUN_10042e3b0(param_1);
  FUN_10049b814(lVar2 + 0x10);
  lVar2 = FUN_10042fdc4(param_1);
  FUN_1004385f0(lVar2 + 0x10);
  plVar3 = (long *)FUN_1004385a0(lVar2 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010041cfb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Kensei_B_BonusMovespeed_10185cfa0);
  return;
}




void FUN_10041cfb8(long param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  code *local_60;
  undefined4 local_58;
  
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x10);
  lVar1 = FUN_10042e580();
  fVar4 = (float)FUN_1003dfe60(uVar3,1,8,0x19,0);
  fVar5 = (float)FUN_1003dfe60(uVar3,1,10,0x19,0);
  *(float *)(lVar1 + 0x40) = fVar4 / fVar5;
  *(byte *)(lVar1 + 0x44) = *(byte *)(lVar1 + 0x44) | 1;
  plVar2 = (long *)FUN_100433e34(lVar1 + 0x10);
  (**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_Kensei_B_FortifiedHealth_10185cf98);
  plVar2 = (long *)FUN_100433e34(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_Kensei_B_EmpoweredByB_10185b2f8);
  local_60 = FUN_1003c8f24;
  local_58 = 3;
  (**(code **)(*plVar2 + 0x18))(plVar2,&local_60);
  lVar1 = FUN_100433910(param_1);
  FUN_1004385f0(lVar1 + 0x10);
  lVar1 = FUN_100436184(param_1);
  plVar2 = (long *)FUN_100433e34(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_Kensei_B_EmpoweredByB_10185b2f8);
  local_60 = FUN_1003c8f24;
  local_58 = 3;
  (**(code **)(*plVar2 + 0x18))(plVar2,&local_60);
  FUN_1004385f0(lVar1 + 0x10);
  lVar1 = FUN_10042fdc4(param_1);
  lVar1 = lVar1 + 0x10;
  FUN_1004385f0(lVar1);
  plVar2 = (long *)FUN_1004385a0(lVar1);
  (**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_Kensei_B_FortifiedHealth_10185cf98);
  plVar2 = (long *)FUN_100433e34(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_Kensei_B_EmpoweredByB_10185b2f8);
  local_60 = FUN_1003c8f24;
  local_58 = 3;
  (**(code **)(*plVar2 + 0x18))(plVar2,&local_60);
  plVar2 = (long *)FUN_100433e34(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))
                             (plVar2,PTR_s_Buff_Kensei_B_BonusMovespeed_10185cfa0);
  local_60 = FUN_100453f6c;
  local_58 = 3;
  (**(code **)(*plVar2 + 0x18))(plVar2,&local_60);
  return;
}




void FUN_10041d198(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  code *local_30;
  undefined4 local_28;
  
  lVar1 = FUN_10042e2c8();
  plVar2 = (long *)FUN_10049b864(lVar1 + 0x10);
  (**(code **)(*plVar2 + 0x30))(plVar2,5,FUN_100453f80);
  lVar1 = FUN_100433910(param_1);
  FUN_1004385f0(lVar1 + 0x10);
  lVar1 = FUN_100436184(param_1);
  plVar2 = (long *)FUN_100433e34(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_Kensei_B_EmpoweredByB_10185b2f8);
  local_30 = FUN_1003c8f24;
  local_28 = 3;
  (**(code **)(*plVar2 + 0x18))(plVar2,&local_30);
  FUN_1004385f0(lVar1 + 0x10);
  return;
}




void FUN_10041d244(undefined8 param_1)

{
  code *local_20;
  undefined4 local_18;
  
  local_20 = FUN_10045401c;
  local_18 = 3;
  FUN_10043050c(0,0x3f800000,param_1,&local_20);
  return;
}




void FUN_10041d280(long param_1)

{
  char *pcVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  undefined4 local_30 [2];
  undefined4 local_28;
  
  lVar3 = FUN_10042e498();
  lVar3 = FUN_10043ab44(lVar3 + 0x10);
  puVar2 = PTR_s_Buff_Kensei_Talent_TalentC_10185cfb8;
  *(undefined1 *)(lVar3 + 0x58) = 4;
  *(undefined8 *)(lVar3 + 0x48) = 0;
  *(undefined8 *)(lVar3 + 0x50) = 0;
  *(undefined1 *)(lVar3 + 0x50) = 2;
  *(undefined **)(lVar3 + 0x40) = puVar2;
  FUN_10043aa04(lVar3 + 0x10);
  plVar4 = (long *)FUN_100434b18(lVar3 + 0x10);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x30))
                             (plVar4,PTR_s_Buff_Kensei_Talent_TalentC_UltRe_10185cfc0);
  local_30[0] = 0x3f800000;
  local_28 = 1;
  (**(code **)(*plVar4 + 0x18))(plVar4,local_30);
  lVar3 = FUN_10042fdc4(param_1);
  lVar3 = lVar3 + 0x10;
  plVar4 = (long *)FUN_100441e68(lVar3);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x68))(plVar4,"CenterBody");
  pcVar1 = "Effect_Kensei_C_Impact";
  if ((*(uint *)(*(long *)(*(long *)(param_1 + 0x10) + 0x10) + 0x2f4) & 0x110) != 0) {
    pcVar1 = "Effect_Kensei_C_Impact_Small";
  }
  (**(code **)(*plVar4 + 0x48))(plVar4,pcVar1);
  plVar4 = (long *)FUN_100441e18(lVar3);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x38))(plVar4,"Sound_Kensei_C_HitExplosion_01");
  plVar4 = (long *)(**(code **)(*plVar4 + 0x18))(plVar4,"Sound_Kensei_C_HitExplosion_02");
  uVar5 = FUN_1010a1520();
  lVar6 = FUN_1010a0e0c(uVar5,0,"*KindredSoundBalance*",0);
  FUN_1003c8e98(*(undefined4 *)(lVar6 + 0x4c0));
  (**(code **)(*plVar4 + 0x28))(plVar4);
  FUN_1004386bc(lVar3);
  plVar4 = (long *)FUN_10043ab94(lVar3);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x40))();
  (**(code **)(*plVar4 + 0x38))(plVar4,"DAMAGE",2);
  return;
}




void FUN_10041d40c(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  undefined4 local_50 [2];
  undefined4 local_48;
  code *local_40;
  undefined4 local_38;
  
  lVar1 = FUN_10042e2c8();
  plVar2 = (long *)FUN_100430a84(lVar1 + 0x10);
  local_40 = FUN_100494ee8;
  local_38 = 3;
  (**(code **)(*plVar2 + 0x30))(plVar2,0xf,1,&local_40);
  lVar1 = FUN_10042e694(param_1);
  *(ushort *)(lVar1 + 0x48) = *(ushort *)(lVar1 + 0x48) | 8;
  *(byte *)(lVar1 + 0x60) = *(byte *)(lVar1 + 0x60) & 0xfc | 1;
  *(undefined2 *)(lVar1 + 0x5e) = 0x10;
  *(undefined4 *)(lVar1 + 0x50) = 0x301;
  plVar2 = (long *)FUN_100433e34(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))
                             (plVar2,PTR_s_Buff_Kensei_PassiveBehaviors_Con_10185cf80);
  local_40 = FUN_100453e1c;
  local_38 = 3;
  plVar2 = (long *)(**(code **)(*plVar2 + 0x18))(plVar2,&local_40);
  local_50[0] = 2;
  local_48 = 1;
  (**(code **)(*plVar2 + 0x20))(plVar2,local_50);
  return;
}




void FUN_10041d500(undefined8 param_1)

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
  if (PTR_s_Ability__Kensei__B_101859ad0 == (undefined *)0x0) {
    uVar4 = 0;
  }
  else {
    cVar3 = *PTR_s_Ability__Kensei__B_101859ad0;
    uVar4 = 0x811c9dc5;
    if (cVar3 != '\0') {
      uVar4 = 0x811c9dc5;
      pcVar5 = PTR_s_Ability__Kensei__B_101859ad0;
      do {
        pcVar5 = pcVar5 + 1;
        uVar4 = (uVar4 ^ (int)cVar3) * 0x1000193;
        cVar3 = *pcVar5;
      } while (cVar3 != '\0');
    }
  }
  *(uint *)(lVar1 + 0x28) = uVar4;
  lVar1 = FUN_10049bf40(lVar1 + 0x10);
  if (PTR_s_Ability__Kensei__B_101859ad0 == (undefined *)0x0) {
    uVar6 = 0;
  }
  else {
    cVar3 = *PTR_s_Ability__Kensei__B_101859ad0;
    pcVar5 = PTR_s_Ability__Kensei__B_101859ad0;
    while (cVar3 != '\0') {
      pcVar5 = pcVar5 + 1;
      uVar6 = (uVar6 ^ (int)cVar3) * 0x1000193;
      cVar3 = *pcVar5;
    }
  }
  *(uint *)(lVar1 + 0x20) = uVar6;
  *(code **)(lVar1 + 0x10) = FUN_100494e80;
  *(undefined4 *)(lVar1 + 0x18) = 3;
  *(undefined4 *)(lVar1 + 0x28) = 1;
  lVar1 = FUN_10042e2c8(param_1);
  plVar2 = (long *)FUN_100430a84(lVar1 + 0x10);
  local_40 = FUN_100494eb4;
  local_38 = 3;
  (**(code **)(*plVar2 + 0x30))(plVar2,4,2,&local_40);
  return;
}




void FUN_10041d620(undefined8 param_1)

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
  lVar1 = FUN_100433030();
  if (PTR_s_Ability__Kensei__C_101859ad8 == (undefined *)0x0) {
    uVar3 = 0;
  }
  else {
    cVar4 = *PTR_s_Ability__Kensei__C_101859ad8;
    uVar3 = 0x811c9dc5;
    if (cVar4 != '\0') {
      uVar3 = 0x811c9dc5;
      pcVar5 = PTR_s_Ability__Kensei__C_101859ad8;
      do {
        pcVar5 = pcVar5 + 1;
        uVar3 = (uVar3 ^ (int)cVar4) * 0x1000193;
        cVar4 = *pcVar5;
      } while (cVar4 != '\0');
    }
  }
  *(uint *)(lVar1 + 0x28) = uVar3;
  lVar1 = FUN_10049bf40(lVar1 + 0x10);
  if (PTR_s_Ability__Kensei__C_101859ad8 == (undefined *)0x0) {
    uVar3 = 0;
  }
  else {
    cVar4 = *PTR_s_Ability__Kensei__C_101859ad8;
    uVar3 = 0x811c9dc5;
    if (cVar4 != '\0') {
      uVar3 = 0x811c9dc5;
      pcVar5 = PTR_s_Ability__Kensei__C_101859ad8;
      do {
        pcVar5 = pcVar5 + 1;
        uVar3 = (uVar3 ^ (int)cVar4) * 0x1000193;
        cVar4 = *pcVar5;
      } while (cVar4 != '\0');
    }
  }
  *(uint *)(lVar1 + 0x20) = uVar3;
  *(code **)(lVar1 + 0x10) = FUN_100494e18;
  *(undefined4 *)(lVar1 + 0x18) = 3;
  *(undefined4 *)(lVar1 + 0x28) = 1;
  lVar1 = FUN_10042e694(param_1);
  *(ushort *)(lVar1 + 0x48) = *(ushort *)(lVar1 + 0x48) | 0x10;
  *(byte *)(lVar1 + 0x60) = *(byte *)(lVar1 + 0x60) & 0xfc | 1;
  if (PTR_s_Buff_Kensei_C_EffectOnHit_10185cfa8 == (undefined *)0x0) {
    uVar6 = 0;
  }
  else {
    cVar4 = *PTR_s_Buff_Kensei_C_EffectOnHit_10185cfa8;
    pcVar5 = PTR_s_Buff_Kensei_C_EffectOnHit_10185cfa8;
    while (cVar4 != '\0') {
      pcVar5 = pcVar5 + 1;
      uVar6 = (uVar6 ^ (int)cVar4) * 0x1000193;
      cVar4 = *pcVar5;
    }
  }
  *(uint *)(lVar1 + 0x40) = uVar6;
  plVar2 = (long *)FUN_10043187c(lVar1 + 0x10);
  local_40 = FUN_100494e4c;
  local_38 = 3;
  (**(code **)(*plVar2 + 0x30))(plVar2,&local_40);
  return;
}




void FUN_10041d794(undefined8 param_1)

{
  long lVar1;
  char cVar2;
  uint uVar3;
  char *pcVar4;
  uint uVar5;
  
  uVar5 = 0x811c9dc5;
  lVar1 = FUN_10042e2c8();
  lVar1 = FUN_10049bf40(lVar1 + 0x10);
  if (PTR_s_Ability__Kensei__C_101859ad8 == (undefined *)0x0) {
    uVar3 = 0;
  }
  else {
    cVar2 = *PTR_s_Ability__Kensei__C_101859ad8;
    uVar3 = 0x811c9dc5;
    if (cVar2 != '\0') {
      uVar3 = 0x811c9dc5;
      pcVar4 = PTR_s_Ability__Kensei__C_101859ad8;
      do {
        pcVar4 = pcVar4 + 1;
        uVar3 = (uVar3 ^ (int)cVar2) * 0x1000193;
        cVar2 = *pcVar4;
      } while (cVar2 != '\0');
    }
  }
  *(uint *)(lVar1 + 0x20) = uVar3;
  *(undefined4 *)(lVar1 + 0x10) = 0;
  *(undefined4 *)(lVar1 + 0x18) = 1;
  *(undefined4 *)(lVar1 + 0x28) = 2;
  lVar1 = FUN_100433910(param_1);
  if (PTR_s_Ability__Kensei__C_101859ad8 == (undefined *)0x0) {
    uVar5 = 0;
  }
  else {
    cVar2 = *PTR_s_Ability__Kensei__C_101859ad8;
    pcVar4 = PTR_s_Ability__Kensei__C_101859ad8;
    while (cVar2 != '\0') {
      pcVar4 = pcVar4 + 1;
      uVar5 = (uVar5 ^ (int)cVar2) * 0x1000193;
      cVar2 = *pcVar4;
    }
  }
  *(uint *)(lVar1 + 0x28) = uVar5;
  *(byte *)(lVar1 + 0x38) = *(byte *)(lVar1 + 0x38) & 0xfb;
  FUN_1004385f0(lVar1 + 0x10);
  return;
}




void FUN_10041d884(void)

{
  return;
}




void FUN_10041d888(long param_1)

{
  char *pcVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  
  if (*(int *)(param_1 + 0x308) == -1) {
    lVar5 = 0;
  }
  else {
    lVar5 = *(long *)(*(long *)(param_1 + 0x10) + 0x10);
    if (*(int *)(lVar5 + 0x260) != *(int *)(param_1 + 0x308)) {
      lVar5 = FUN_100345d90();
    }
  }
  lVar3 = FUN_10042e2c8(param_1);
  plVar4 = (long *)FUN_100441e68(lVar3 + 0x10);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x68))(plVar4,"OverHead");
  pcVar1 = "Effect_Magnus_Perk_ArcaneMarkPFX";
  if ((*(uint *)(*(long *)(*(long *)(param_1 + 0x10) + 0x10) + 0x2f4) & 0x20000110) != 0) {
    pcVar1 = "Effect_Magnus_Perk_ArcaneMarkPFX_SM";
  }
  plVar4 = (long *)(**(code **)(*plVar4 + 0x48))(plVar4,pcVar1);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x88))(plVar4,0);
  (**(code **)(*plVar4 + 0xb0))(plVar4,1);
  iVar2 = FUN_1003a47d0(lVar5,PTR_s_Buff_Magnus_Talent_TalentA_10185cfe0);
  if (iVar2 != 0) {
    plVar4 = (long *)FUN_100433e34(lVar3 + 0x10);
    (**(code **)(*plVar4 + 0x30))(plVar4,PTR_s_Buff_RevealToBestowersTeamTrueSi_10185b3a0);
  }
  lVar5 = FUN_10042e3b0(param_1);
  FUN_10049b814(lVar5 + 0x10);
  return;
}




void FUN_10041d998(void)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  
  lVar1 = FUN_10042ea44();
  plVar2 = (long *)FUN_100441e68(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x60))();
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Magnus_Perk_MarkProcPFX");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x88))(plVar2,1);
  (**(code **)(*plVar2 + 0x90))();
  plVar2 = (long *)FUN_100441e18(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x38))(plVar2,"Sound_Magnus_Perk_Impact");
  uVar3 = FUN_1010a1520();
  lVar1 = FUN_1010a0e0c(uVar3,0,"*KindredSoundBalance*",0);
  FUN_1003c9788(*(undefined4 *)(lVar1 + 0x550));
                    /* WARNING: Could not recover jumptable at 0x00010041da44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x28))(plVar2);
  return;
}




void FUN_10041da48(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  code *local_40;
  undefined4 local_38;
  
  lVar2 = FUN_10042ea44();
  lVar3 = FUN_10043ab44(lVar2 + 0x10);
  puVar1 = PTR_s_Buff_Magnus_Perk_SpellMark_10185b368;
  *(undefined1 *)(lVar3 + 0x58) = 2;
  *(undefined8 *)(lVar3 + 0x48) = 0;
  *(undefined8 *)(lVar3 + 0x50) = 0;
  *(undefined1 *)(lVar3 + 0x50) = 2;
  *(undefined **)(lVar3 + 0x40) = puVar1;
  plVar4 = (long *)FUN_10043fc58(lVar3 + 0x10);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x38))();
  local_40 = FUN_100454598;
  local_38 = 4;
  (**(code **)(*plVar4 + 0x30))(plVar4,&local_40);
  plVar4 = (long *)FUN_100432a84(lVar3 + 0x10);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x38))();
  plVar4 = (long *)(**(code **)(*plVar4 + 0x70))();
  plVar4 = (long *)(**(code **)(*plVar4 + 0x30))(plVar4,0x8b);
  (**(code **)(*plVar4 + 0x18))(plVar4,"CenterBody");
  lVar2 = FUN_10043ab44(lVar2 + 0x10);
  puVar1 = PTR_s_Buff_Magnus_Perk_SpellMark_10185b368;
  *(undefined8 *)(lVar2 + 0x48) = 0;
  *(undefined8 *)(lVar2 + 0x50) = 0;
  *(undefined1 *)(lVar2 + 0x50) = 2;
  *(undefined **)(lVar2 + 0x40) = puVar1;
  *(ushort *)(lVar2 + 0x58) = *(ushort *)(lVar2 + 0x58) & 0xff00 | 0x402;
  plVar4 = (long *)FUN_100441e68(lVar2 + 0x10);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x68))(plVar4,"CenterBody");
  plVar4 = (long *)(**(code **)(*plVar4 + 0x48))(plVar4,"Effect_Magnus_A_MissileSplitPFX");
  plVar4 = (long *)(**(code **)(*plVar4 + 0x88))(plVar4,1);
  (**(code **)(*plVar4 + 0xb0))(plVar4,1);
  plVar4 = (long *)FUN_100441e18(lVar2 + 0x10);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x38))(plVar4,"Sound_Magnus_Ability_A_Split");
  uVar5 = FUN_1010a1520();
  lVar3 = FUN_1010a0e0c(uVar5,0,"*KindredSoundBalance*",0);
  FUN_1003c9788(*(undefined4 *)(lVar3 + 0x55c));
  (**(code **)(*plVar4 + 0x28))(plVar4);
  plVar4 = (long *)FUN_100441e68(lVar2 + 0x28);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x68))(plVar4,"CenterBody");
  plVar4 = (long *)(**(code **)(*plVar4 + 0x48))(plVar4,"Effect_Magnus_A_Impact");
  plVar4 = (long *)(**(code **)(*plVar4 + 0x88))(plVar4,1);
  (**(code **)(*plVar4 + 0xb0))(plVar4,1);
  plVar4 = (long *)FUN_100441e18(lVar2 + 0x28);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x38))(plVar4,"Sound_Magnus_Ability_A_Impact");
  uVar5 = FUN_1010a1520();
  lVar2 = FUN_1010a0e0c(uVar5,0,"*KindredSoundBalance*",0);
  FUN_1003c9788(*(undefined4 *)(lVar2 + 0x55c));
  (**(code **)(*plVar4 + 0x28))(plVar4);
  return;
}




void FUN_10041dc90(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  code *local_40;
  undefined4 local_38;
  
  lVar2 = FUN_10042ea44();
  lVar2 = FUN_10043ab44(lVar2 + 0x10);
  puVar1 = PTR_s_Buff_Magnus_Perk_SpellMark_10185b368;
  *(undefined1 *)(lVar2 + 0x58) = 2;
  *(undefined8 *)(lVar2 + 0x48) = 0;
  *(undefined8 *)(lVar2 + 0x50) = 0;
  *(undefined1 *)(lVar2 + 0x50) = 2;
  *(undefined **)(lVar2 + 0x40) = puVar1;
  plVar3 = (long *)FUN_100433e34(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Stunned_10185a208);
  local_40 = FUN_1004545c8;
  local_38 = 3;
  (**(code **)(*plVar3 + 0x18))(plVar3,&local_40);
  lVar2 = FUN_10042ea44(param_1);
  lVar2 = FUN_10043ab44(lVar2 + 0x10);
  puVar1 = PTR_s_Buff_Magnus_Perk_SpellMark_10185b368;
  *(undefined8 *)(lVar2 + 0x48) = 0;
  *(undefined8 *)(lVar2 + 0x50) = 0;
  *(undefined1 *)(lVar2 + 0x50) = 2;
  *(undefined **)(lVar2 + 0x40) = puVar1;
  *(ushort *)(lVar2 + 0x58) = *(ushort *)(lVar2 + 0x58) & 0xff00 | 0x402;
  plVar3 = (long *)FUN_100441e68(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x78))(plVar3,"Bone_CenterMass");
  (**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Magnus_B_Hit_Mark");
  plVar3 = (long *)FUN_100441e18(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))(plVar3,"Sound_Magnus_Ability_B_Stun");
  uVar4 = FUN_1010a1520();
  lVar5 = FUN_1010a0e0c(uVar4,0,"*KindredSoundBalance*",0);
  FUN_1003c9788(*(undefined4 *)(lVar5 + 0x564));
  (**(code **)(*plVar3 + 0x28))(plVar3);
  plVar3 = (long *)FUN_100441e68(lVar2 + 0x28);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x78))(plVar3,"Bone_CenterMass");
  (**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Magnus_B_Hit");
  plVar3 = (long *)FUN_100441e18(lVar2 + 0x28);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))(plVar3,"Sound_Magnus_Ability_B_Impact");
  uVar4 = FUN_1010a1520();
  lVar2 = FUN_1010a0e0c(uVar4,0,"*KindredSoundBalance*",0);
  FUN_1003c9788(*(undefined4 *)(lVar2 + 0x564));
  (**(code **)(*plVar3 + 0x28))(plVar3);
  return;
}




void FUN_10041de64(void)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined4 local_30 [2];
  undefined4 local_28;
  
  lVar1 = FUN_10042ea44();
  plVar2 = (long *)FUN_100441e68(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x60))();
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Magnus_C_Impact");
  local_30[0] = 0x3ecccccd;
  local_28 = 1;
  plVar2 = (long *)(**(code **)(*plVar2 + 0x60))(plVar2,local_30);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x88))(plVar2,1);
  (**(code **)(*plVar2 + 0x90))();
  plVar2 = (long *)FUN_100441e18(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x38))(plVar2,"Sound_Magnus_Ability_C_Impact");
  uVar3 = FUN_1010a1520();
  lVar1 = FUN_1010a0e0c(uVar3,0,"*KindredSoundBalance*",0);
  FUN_1003c9788(*(undefined4 *)(lVar1 + 0x568));
  (**(code **)(*plVar2 + 0x28))(plVar2);
  return;
}




void FUN_10041df44(void)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  code *local_40;
  undefined4 local_38;
  
  lVar2 = FUN_10042f8e8();
  lVar2 = FUN_10043ab44(lVar2 + 0x10);
  puVar1 = PTR_s_Ability__Magnus__A_101859b60;
  *(undefined4 *)(lVar2 + 0x51) = 0;
  *(undefined4 *)(lVar2 + 0x54) = 0;
  *(undefined1 *)(lVar2 + 0x50) = 7;
  *(undefined **)(lVar2 + 0x40) = puVar1;
  *(undefined8 *)(lVar2 + 0x48) = 0;
  *(ushort *)(lVar2 + 0x58) = *(ushort *)(lVar2 + 0x58) & 0xff00 | 0x408;
  lVar2 = lVar2 + 0x10;
  plVar3 = (long *)FUN_100441e68(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x68))(plVar3,"CenterBody");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Magnus_A_MissileSplitPFX");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x88))(plVar3,1);
  (**(code **)(*plVar3 + 0xb0))(plVar3,1);
  plVar3 = (long *)FUN_100441e18(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))(plVar3,"Sound_Magnus_Ability_A_Split");
  uVar4 = FUN_1010a1520();
  lVar5 = FUN_1010a0e0c(uVar4,0,"*KindredSoundBalance*",0);
  FUN_1003c9788(*(undefined4 *)(lVar5 + 0x558));
  (**(code **)(*plVar3 + 0x28))(plVar3);
  plVar3 = (long *)FUN_10043fc58(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))();
  local_40 = FUN_100454598;
  local_38 = 4;
  (**(code **)(*plVar3 + 0x30))(plVar3,&local_40);
  plVar3 = (long *)FUN_100432a84(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))();
  plVar3 = (long *)(**(code **)(*plVar3 + 0x70))();
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,0x8d);
  (**(code **)(*plVar3 + 0x18))(plVar3,"CenterBody");
  return;
}




void FUN_10041e0c8(void)

{
  char cVar1;
  long lVar2;
  long *plVar3;
  uint uVar4;
  char *pcVar5;
  code *local_20;
  undefined4 local_18;
  
  lVar2 = FUN_100434180();
  if (PTR_s_Buff_Magnus_Perk_SpellMark_10185b368 == (undefined *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = 0x811c9dc5;
    cVar1 = *PTR_s_Buff_Magnus_Perk_SpellMark_10185b368;
    pcVar5 = PTR_s_Buff_Magnus_Perk_SpellMark_10185b368;
    while (cVar1 != '\0') {
      pcVar5 = pcVar5 + 1;
      uVar4 = (uVar4 ^ (int)cVar1) * 0x1000193;
      cVar1 = *pcVar5;
    }
  }
  *(uint *)(lVar2 + 0x28) = uVar4;
  plVar3 = (long *)FUN_10045562c(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))();
  local_20 = FUN_100495128;
  local_18 = 3;
  plVar3 = (long *)(**(code **)(*plVar3 + 0x18))(plVar3,&local_20);
  (**(code **)(*plVar3 + 0x20))(plVar3,FUN_10044d964);
  return;
}




void FUN_10041e178(void)

{
  long lVar1;
  long *plVar2;
  code *local_20;
  undefined4 local_18;
  
  lVar1 = FUN_10042e2c8();
  plVar2 = (long *)FUN_100430a84(lVar1 + 0x10);
  local_20 = FUN_1004950f4;
  local_18 = 3;
  (**(code **)(*plVar2 + 0x30))(plVar2,0xf,1,&local_20);
  return;
}




void FUN_10041e1c8(void)

{
  long lVar1;
  long *plVar2;
  code *local_30;
  undefined4 local_28;
  
  lVar1 = FUN_10042e694();
  *(ushort *)(lVar1 + 0x48) = *(ushort *)(lVar1 + 0x48) | 0x10;
  *(byte *)(lVar1 + 0x60) = *(byte *)(lVar1 + 0x60) & 0xfc | 1;
  *(undefined4 *)(lVar1 + 0x4c) = 1;
  *(undefined2 *)(lVar1 + 0x5a) = 8;
  plVar2 = (long *)FUN_10043d6ac(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x40))(plVar2,3);
  local_30 = FUN_1004950c0;
  local_28 = 3;
  (**(code **)(*plVar2 + 0x40))(plVar2,&local_30);
  return;
}




void FUN_10041e254(long param_1)

{
  long lVar1;
  long *plVar2;
  undefined4 local_30 [2];
  undefined4 local_28;
  
  *(uint *)(param_1 + 0x340) = *(uint *)(param_1 + 0x340) | 0x800;
  lVar1 = FUN_100430b44();
  plVar2 = (long *)FUN_100433de4(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))();
  local_30[0] = 0;
  local_28 = 1;
  (**(code **)(*plVar2 + 0x18))(plVar2,local_30);
  lVar1 = FUN_10042e2c8(param_1);
  plVar2 = (long *)FUN_10049bbfc(lVar1 + 0x10);
  (**(code **)(*plVar2 + 0x38))();
  lVar1 = FUN_10042e3b0(param_1);
  FUN_10049b814(lVar1 + 0x10);
  return;
}




void FUN_10041e2e4(undefined8 param_1)

{
  code *local_20;
  undefined4 local_18;
  
  local_20 = FUN_1004545dc;
  local_18 = 3;
  FUN_10042eb40(param_1,&local_20);
  return;
}




void FUN_10041e318(undefined8 param_1)

{
  char cVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  uint uVar5;
  char *pcVar6;
  undefined4 local_40 [2];
  undefined4 local_38;
  
  lVar3 = FUN_10042e2c8();
  plVar4 = (long *)FUN_100441e68(lVar3 + 0x10);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x78))(plVar4,"Bone_StaffEnergy");
  plVar4 = (long *)(**(code **)(*plVar4 + 0x48))(plVar4,"Effect_Kinetic_B_A2_Available");
  plVar4 = (long *)(**(code **)(*plVar4 + 0x78))(plVar4,1);
  (**(code **)(*plVar4 + 0xb0))(plVar4,1);
  lVar3 = FUN_100433030(param_1);
  if (PTR_s_Ability__Kinetic__A_101859b90 == (undefined *)0x0) {
    uVar5 = 0;
  }
  else {
    uVar5 = 0x811c9dc5;
    cVar1 = *PTR_s_Ability__Kinetic__A_101859b90;
    pcVar6 = PTR_s_Ability__Kinetic__A_101859b90;
    while (cVar1 != '\0') {
      pcVar6 = pcVar6 + 1;
      uVar5 = (uVar5 ^ (int)cVar1) * 0x1000193;
      cVar1 = *pcVar6;
    }
  }
  *(uint *)(lVar3 + 0x28) = uVar5;
  *(undefined1 *)(lVar3 + 0x2c) = 1;
  lVar3 = FUN_10049da9c(lVar3 + 0x10);
  *(undefined **)(lVar3 + 0x10) = PTR_s_Ability__Kinetic__A_101859b90;
  *(code **)(lVar3 + 0x18) = FUN_1004545f0;
  *(undefined4 *)(lVar3 + 0x20) = 3;
  *(undefined4 *)(lVar3 + 0x2c) = 0;
  lVar3 = FUN_10042ea44(param_1);
  lVar3 = FUN_10043ab44(lVar3 + 0x10);
  puVar2 = PTR_s_Ability__Kinetic__A_101859b90;
  *(undefined1 *)(lVar3 + 0x58) = 7;
  *(undefined4 *)(lVar3 + 0x51) = 0;
  *(undefined4 *)(lVar3 + 0x54) = 0;
  *(undefined1 *)(lVar3 + 0x50) = 7;
  *(undefined **)(lVar3 + 0x40) = puVar2;
  *(undefined8 *)(lVar3 + 0x48) = 0;
  plVar4 = (long *)FUN_10043d6ac(lVar3 + 0x10);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x30))(plVar4,PTR_s_Ability__Kinetic__A_101859b90);
  local_40[0] = 0;
  local_38 = 1;
  (**(code **)(*plVar4 + 0x20))(plVar4,local_40);
  lVar3 = FUN_10042e3b0(param_1);
  FUN_10049b814(lVar3 + 0x10);
  return;
}




void FUN_10041e480(void)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_10042e2c8();
  plVar2 = (long *)FUN_100441e68(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x38))();
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,"Bone_CenterMass");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Kinetic_C_Target_Laser");
  plVar2 = (long *)(**(code **)(*plVar2 + 0xa0))(plVar2,FUN_100454604);
  plVar2 = (long *)(**(code **)(*plVar2 + 0xb0))(plVar2,1);
                    /* WARNING: Could not recover jumptable at 0x00010041e4fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0xb8))(plVar2,1);
  return;
}




void FUN_10041e500(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  code *local_30;
  undefined4 local_28;
  
  lVar1 = FUN_10042e2c8();
  plVar2 = (long *)FUN_100430a84(lVar1 + 0x10);
  local_30 = FUN_10049522c;
  local_28 = 3;
  (**(code **)(*plVar2 + 0x30))(plVar2,0xf,1,&local_30);
  lVar1 = FUN_10042e694(param_1);
  *(ushort *)(lVar1 + 0x48) = *(ushort *)(lVar1 + 0x48) | 0x10;
  *(byte *)(lVar1 + 0x60) = *(byte *)(lVar1 + 0x60) & 0xfc | 1;
  *(undefined4 *)(lVar1 + 0x40) = 0x81937f97;
  plVar2 = (long *)FUN_10043187c(lVar1 + 0x10);
  local_30 = FUN_100495260;
  local_28 = 3;
  (**(code **)(*plVar2 + 0x30))(plVar2,&local_30);
  return;
}




void FUN_10041e5b4(undefined8 param_1)

{
  char cVar1;
  long lVar2;
  long *plVar3;
  uint uVar4;
  char *pcVar5;
  code *local_30;
  undefined4 local_28;
  
  lVar2 = FUN_100433030();
  if (PTR_s_Ability__Kinetic__A_101859b90 == (undefined *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = 0x811c9dc5;
    cVar1 = *PTR_s_Ability__Kinetic__A_101859b90;
    pcVar5 = PTR_s_Ability__Kinetic__A_101859b90;
    while (cVar1 != '\0') {
      pcVar5 = pcVar5 + 1;
      uVar4 = (uVar4 ^ (int)cVar1) * 0x1000193;
      cVar1 = *pcVar5;
    }
  }
  *(uint *)(lVar2 + 0x28) = uVar4;
  lVar2 = FUN_10049da9c(lVar2 + 0x10);
  *(undefined **)(lVar2 + 0x10) = PTR_s_Ability__Kinetic__A_101859b90;
  *(code **)(lVar2 + 0x18) = FUN_1004951c4;
  *(undefined4 *)(lVar2 + 0x20) = 3;
  *(undefined4 *)(lVar2 + 0x2c) = 0;
  lVar2 = FUN_10042e694(param_1);
  *(ushort *)(lVar2 + 0x48) = *(ushort *)(lVar2 + 0x48) | 0x10;
  *(byte *)(lVar2 + 0x60) = *(byte *)(lVar2 + 0x60) & 0xfc | 1;
  *(undefined4 *)(lVar2 + 0x40) = 0x23ac9ce8;
  plVar3 = (long *)FUN_10043187c(lVar2 + 0x10);
  local_30 = FUN_1004951f8;
  local_28 = 3;
  (**(code **)(*plVar3 + 0x30))(plVar3,&local_30);
  return;
}




void FUN_10041e6a0(undefined8 param_1)

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
  if (PTR_s_Ability__Kinetic__B_101859b98 == (undefined *)0x0) {
    uVar4 = 0;
  }
  else {
    cVar3 = *PTR_s_Ability__Kinetic__B_101859b98;
    uVar4 = 0x811c9dc5;
    if (cVar3 != '\0') {
      uVar4 = 0x811c9dc5;
      pcVar5 = PTR_s_Ability__Kinetic__B_101859b98;
      do {
        pcVar5 = pcVar5 + 1;
        uVar4 = (uVar4 ^ (int)cVar3) * 0x1000193;
        cVar3 = *pcVar5;
      } while (cVar3 != '\0');
    }
  }
  *(uint *)(lVar1 + 0x28) = uVar4;
  lVar1 = FUN_10049bf40(lVar1 + 0x10);
  if (PTR_s_Ability__Kinetic__B_101859b98 == (undefined *)0x0) {
    uVar6 = 0;
  }
  else {
    cVar3 = *PTR_s_Ability__Kinetic__B_101859b98;
    pcVar5 = PTR_s_Ability__Kinetic__B_101859b98;
    while (cVar3 != '\0') {
      pcVar5 = pcVar5 + 1;
      uVar6 = (uVar6 ^ (int)cVar3) * 0x1000193;
      cVar3 = *pcVar5;
    }
  }
  *(uint *)(lVar1 + 0x20) = uVar6;
  *(code **)(lVar1 + 0x10) = FUN_10049515c;
  *(undefined4 *)(lVar1 + 0x18) = 3;
  *(undefined4 *)(lVar1 + 0x28) = 1;
  lVar1 = FUN_10042e694(param_1);
  *(ushort *)(lVar1 + 0x48) = *(ushort *)(lVar1 + 0x48) | 0x10;
  *(byte *)(lVar1 + 0x60) = *(byte *)(lVar1 + 0x60) & 0xfc | 1;
  *(undefined4 *)(lVar1 + 0x40) = 0x23ac9ce8;
  plVar2 = (long *)FUN_10043187c(lVar1 + 0x10);
  local_40 = FUN_100495190;
  local_38 = 3;
  (**(code **)(*plVar2 + 0x30))(plVar2,&local_40);
  return;
}




void FUN_10041e7e0(void)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_10042e498();
  plVar2 = (long *)FUN_100451bac(lVar1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010041e80c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x30))(plVar2,"*Hero049_Pet*",1);
  return;
}




void FUN_10041e810(void)

{
  long lVar1;
  long *plVar2;
  undefined4 local_30 [2];
  undefined4 local_28;
  
  lVar1 = FUN_10042ea44();
  lVar1 = lVar1 + 0x10;
  FUN_1004386bc(lVar1);
  plVar2 = (long *)FUN_100434b18(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_Hero049_DashToHero_10185d010);
  local_30[0] = 0x3dcccccd;
  local_28 = 1;
  (**(code **)(*plVar2 + 0x18))(plVar2,local_30);
  plVar2 = (long *)FUN_100441e68(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x68))(plVar2,"CenterBody");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Hero049_Proj_Hit");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0xb0))(plVar2,1);
  local_30[0] = 0x40400000;
  local_28 = 1;
  (**(code **)(*plVar2 + 0xd0))(plVar2,local_30);
  return;
}




void FUN_10041e8ec(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_10042ea44();
  lVar1 = lVar1 + 0x10;
  FUN_10043aa04(lVar1);
  plVar2 = (long *)FUN_100434b18(lVar1);
  (**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_Hero049_PetIsAttached_10185b3b0);
  plVar2 = (long *)FUN_10043b538(lVar1);
  (**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_Hero049_PetIsDetatched_10185b3c8);
  lVar1 = FUN_10042ea44(param_1);
  FUN_1004386bc(lVar1 + 0x10);
  plVar2 = (long *)FUN_10043b538(lVar1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010041e978. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_Hero049_RingPFXForPetRange_10185b3d0);
  return;
}




void FUN_10041e97c(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  undefined4 local_30 [2];
  undefined4 local_28;
  
  lVar1 = FUN_10042e498();
  FUN_1004386bc(lVar1 + 0x10);
  plVar2 = (long *)FUN_10049bd10(lVar1 + 0x10);
  (**(code **)(*plVar2 + 0x30))(plVar2,FUN_100454640);
  lVar1 = FUN_10042e2c8(param_1);
  plVar2 = (long *)FUN_100441e68(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x68))(plVar2,"CenterBody");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Hero049_B_DashFx");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0xb0))(plVar2,1);
  local_30[0] = 0x40400000;
  local_28 = 1;
  (**(code **)(*plVar2 + 0xd0))(plVar2,local_30);
  lVar1 = FUN_10042fdc4(param_1);
  FUN_1004386bc(lVar1 + 0x10);
  plVar2 = (long *)FUN_100434b18(lVar1 + 0x10);
  (**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_Hero049_AttachToHero_10185b3c0);
  return;
}




void FUN_10041ea74(void)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_10042ea44();
  plVar2 = (long *)FUN_100454548(lVar1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010041ea9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Ability__Hero049_Pet__DashToHero_101859bf0);
  return;
}




void FUN_10041eaa0(long param_1)

{
  long lVar1;
  long *plVar2;
  undefined4 local_48 [2];
  undefined4 local_40;
  undefined1 auStack_38 [24];
  
  FUN_100450f38(auStack_38,param_1 + 0x98);
  lVar1 = FUN_10042e2c8(param_1);
  plVar2 = (long *)FUN_100441e68(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x68))(plVar2,"CenterBody");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Pet_Model_Placeholder");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0xb0))(plVar2,1);
  local_48[0] = 0x40400000;
  local_40 = 1;
  (**(code **)(*plVar2 + 0xd0))(plVar2,local_48);
  lVar1 = FUN_10042e580(param_1);
  *(undefined4 *)(lVar1 + 0x40) = 0x3dcccccd;
  *(byte *)(lVar1 + 0x44) = *(byte *)(lVar1 + 0x44) & 0xfe;
  lVar1 = FUN_10043ab44(lVar1 + 0x10);
  *(undefined1 *)(lVar1 + 0x58) = 1;
  *(code **)(lVar1 + 0x40) = FUN_10045469c;
  lVar1 = lVar1 + 0x10;
  plVar2 = (long *)FUN_100433e34(lVar1);
  (**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_Hero049_PetDistanceCheck_10185b3b8);
  FUN_1004386bc(lVar1);
  plVar2 = (long *)FUN_10043b538(lVar1);
  (**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_Hero049_RingPFXForPetRange_10185b3d0);
  return;
}




void FUN_10041ebc4(void)

{
  return;
}




void FUN_10041ebc8(undefined8 param_1)

{
  code *local_20;
  undefined4 local_18;
  
  local_20 = FUN_10045471c;
  local_18 = 4;
  FUN_10042feac(0,0x3f800000,param_1,&local_20);
  return;
}




void FUN_10041ec04(long param_1)

{
  long lVar1;
  long *plVar2;
  undefined4 local_48 [2];
  undefined4 local_40;
  undefined1 auStack_38 [24];
  
  FUN_100450f38(auStack_38,param_1 + 0x98);
  lVar1 = FUN_10042e2c8(param_1);
  plVar2 = (long *)FUN_100441e68(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x68))(plVar2,"CenterBody");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Hero049_PetAttackCircle");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0xb0))(plVar2,1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0xd8))(0x3e4ccccd);
  plVar2 = (long *)(**(code **)(*plVar2 + 0xc0))(0,0,0);
  local_48[0] = 0x41600000;
  local_40 = 1;
  (**(code **)(*plVar2 + 0xd0))(plVar2,local_48);
  return;
}




void FUN_10041ecd8(void)

{
  return;
}




void FUN_10041ecdc(void)

{
  long lVar1;
  long *plVar2;
  undefined4 local_20 [2];
  undefined4 local_18;
  
  lVar1 = FUN_10042e694();
  *(ushort *)(lVar1 + 0x48) = *(ushort *)(lVar1 + 0x48) | 0x40;
  *(byte *)(lVar1 + 0x60) = *(byte *)(lVar1 + 0x60) & 0xf7 | 4;
  plVar2 = (long *)FUN_100433e34(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_Hero050_GamblersRush_10185d028);
  local_20[0] = 0x40400000;
  local_18 = 1;
  (**(code **)(*plVar2 + 0x18))(plVar2,local_20);
  return;
}




void FUN_10041ed50(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = FUN_100431764();
  *(undefined4 *)(lVar1 + 0x40) = 0x3dcccccd;
  *(byte *)(lVar1 + 0x44) = *(byte *)(lVar1 + 0x44) & 0xfe;
  lVar1 = FUN_10049be00(lVar1 + 0x10);
  *(undefined4 *)(lVar1 + 0x58) = 1;
  *(undefined4 *)(lVar1 + 0x10) = 0x3fc00000;
  *(undefined4 *)(lVar1 + 0x18) = 1;
  *(undefined8 *)(lVar1 + 0x24) = 0x3f80000000000000;
  lVar1 = FUN_10042e3b0(param_1);
  FUN_10049b814(lVar1 + 0x10);
  return;
}




void FUN_10041edbc(void)

{
  long lVar1;
  long *plVar2;
  undefined4 local_20 [2];
  undefined4 local_18;
  
  lVar1 = FUN_10042e2c8();
  plVar2 = (long *)FUN_100441e68(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,"Bone_RightHand");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Hero050_StackedDeck");
  plVar2 = (long *)(**(code **)(*plVar2 + 0xc0))(0x3dcccccd,0x3e4ccccd,0x3e99999a);
  local_20[0] = 0x3e99999a;
  local_18 = 1;
  plVar2 = (long *)(**(code **)(*plVar2 + 0xd0))(plVar2,local_20);
  (**(code **)(*plVar2 + 0xb0))(plVar2,1);
  return;
}




void FUN_10041ee60(long param_1)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  undefined *puVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  
  *(undefined4 *)(param_1 + 0x328) = 0x3f800000;
  puVar4 = PTR_s_initial_facing_10185d718;
  uVar5 = FUN_1004d2524(PTR_s_initial_facing_10185d718);
  uVar6 = FUN_100015208(puVar4,uVar5,0x12345678);
  (**(code **)(*(long *)(param_1 + 0x168) + 8))(param_1 + 0x168,uVar6);
  puVar4 = PTR_s_onApplyName_10185d540;
  uVar5 = FUN_1004d2524(PTR_s_onApplyName_10185d540);
  uVar5 = FUN_100015208(puVar4,uVar5,0x12345678);
  lVar1 = param_1 + 0xa0;
  *(undefined4 *)(lVar1 + (ulong)*(uint *)(param_1 + 0x160) * 4) = uVar5;
  uVar3 = *(uint *)(param_1 + 0x160);
  lVar2 = param_1 + 0xe0;
  *(code **)(lVar2 + (ulong)uVar3 * 8) = FUN_100454760;
  *(uint *)(param_1 + 0x160) = uVar3 + 1;
  puVar4 = PTR_s_onBuffIntervalName_10185d558;
  uVar5 = FUN_1004d2524(PTR_s_onBuffIntervalName_10185d558);
  uVar5 = FUN_100015208(puVar4,uVar5,0x12345678);
  *(undefined4 *)(lVar1 + (ulong)*(uint *)(param_1 + 0x160) * 4) = uVar5;
  uVar3 = *(uint *)(param_1 + 0x160);
  *(code **)(lVar2 + (ulong)uVar3 * 8) = FUN_100454840;
  *(uint *)(param_1 + 0x160) = uVar3 + 1;
  puVar4 = PTR_s_onEndName_10185d548;
  uVar5 = FUN_1004d2524(PTR_s_onEndName_10185d548);
  uVar5 = FUN_100015208(puVar4,uVar5,0x12345678);
  *(undefined4 *)(lVar1 + (ulong)*(uint *)(param_1 + 0x160) * 4) = uVar5;
  uVar3 = *(uint *)(param_1 + 0x160);
  *(code **)(lVar2 + (ulong)uVar3 * 8) = FUN_1004548f4;
  *(uint *)(param_1 + 0x160) = uVar3 + 1;
  return;
}




void FUN_10041ef9c(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  *(undefined4 *)(param_1 + 0x328) = 0x3e4ccccd;
  puVar2 = PTR_s_initial_facing_10185d718;
  uVar3 = FUN_1004d2524(PTR_s_initial_facing_10185d718);
  uVar4 = FUN_100015208(puVar2,uVar3,0x12345678);
  (**(code **)(*(long *)(param_1 + 0x168) + 8))(param_1 + 0x168,uVar4);
  puVar2 = PTR_s_onBuffIntervalName_10185d558;
  uVar3 = FUN_1004d2524(PTR_s_onBuffIntervalName_10185d558);
  uVar3 = FUN_100015208(puVar2,uVar3,0x12345678);
  *(undefined4 *)(param_1 + 0xa0 + (ulong)*(uint *)(param_1 + 0x160) * 4) = uVar3;
  uVar1 = *(uint *)(param_1 + 0x160);
  *(code **)(param_1 + 0xa0 + (ulong)uVar1 * 8 + 0x40) = FUN_100454968;
  *(uint *)(param_1 + 0x160) = uVar1 + 1;
  return;
}




void FUN_10041f054(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = FUN_100431764();
  *(undefined4 *)(lVar1 + 0x40) = 0x3dcccccd;
  *(byte *)(lVar1 + 0x44) = *(byte *)(lVar1 + 0x44) & 0xfe;
  lVar1 = FUN_10049be00(lVar1 + 0x10);
  *(undefined4 *)(lVar1 + 0x58) = 2;
  *(undefined4 *)(lVar1 + 0x10) = 0x3f400000;
  *(undefined4 *)(lVar1 + 0x18) = 1;
  *(undefined8 *)(lVar1 + 0x24) = 0x3f80000000000000;
  lVar1 = FUN_10042e3b0(param_1);
  FUN_10049b814(lVar1 + 0x10);
  return;
}




void FUN_10041f0c4(void)

{
  return;
}




void FUN_10041f0c8(void)

{
  return;
}




void FUN_10041f0cc(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = FUN_10042e2c8();
  lVar1 = FUN_10049be00(lVar1 + 0x10);
  *(undefined4 *)(lVar1 + 0x58) = 1;
  *(code **)(lVar1 + 0x10) = FUN_100454a78;
  *(undefined4 *)(lVar1 + 0x18) = 3;
  lVar1 = FUN_10042e3b0(param_1);
  FUN_10049b814(lVar1 + 0x10);
  return;
}




void FUN_10041f11c(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  code *local_30;
  undefined4 local_28;
  
  lVar1 = FUN_10042e498();
  FUN_1004386bc(lVar1 + 0x10);
  plVar2 = (long *)FUN_10043ab94(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x40))();
  local_30 = FUN_100454b18;
  local_28 = 3;
  (**(code **)(*plVar2 + 0x18))(plVar2,&local_30,0,2);
  lVar1 = FUN_10042e3b0(param_1);
  FUN_1004386bc(lVar1 + 0x10);
  plVar2 = (long *)FUN_10043ab94(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x40))();
  local_30 = FUN_100454a8c;
  local_28 = 4;
  (**(code **)(*plVar2 + 0x18))(plVar2,&local_30,0,2);
  return;
}




void FUN_10041f1e4(void)

{
  long lVar1;
  long *plVar2;
  undefined4 local_30 [2];
  undefined4 local_28;
  
  lVar1 = FUN_10042e2c8();
  plVar2 = (long *)FUN_100441e68(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x68))(plVar2,"CenterBody");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Ball_PFX");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0xb0))(plVar2,1);
  local_30[0] = 0x40400000;
  local_28 = 1;
  (**(code **)(*plVar2 + 0xd0))(plVar2,local_30);
  return;
}




void FUN_10041f278(void)

{
  long lVar1;
  long *plVar2;
  undefined4 local_30 [2];
  undefined4 local_28;
  
  lVar1 = FUN_10042e2c8();
  plVar2 = (long *)FUN_100441e68(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x68))(plVar2,"CenterBody");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Ball_PFX");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0xb0))(plVar2,1);
  local_30[0] = 0x40400000;
  local_28 = 1;
  (**(code **)(*plVar2 + 0xd0))(plVar2,local_30);
  return;
}




void FUN_10041f30c(void)

{
  return;
}




void FUN_10041f310(void)

{
  return;
}




void FUN_10041f314(void)

{
  return;
}




void FUN_10041f318(long param_1)

{
  long lVar1;
  long *plVar2;
  undefined4 local_40 [2];
  undefined4 local_38;
  
  *(code **)(param_1 + 0x330) = FUN_100454b2c;
  lVar1 = FUN_100430b44();
  plVar2 = (long *)FUN_100433e34(lVar1 + 0x10);
  (**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_Anka_Perk_Ready_10185b408);
  lVar1 = FUN_100432f48(param_1);
  plVar2 = (long *)FUN_100433e34(lVar1 + 0x10);
  (**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_Anka_Perk_Ready_10185b408);
  lVar1 = FUN_100431114(param_1);
  *(undefined4 *)(lVar1 + 0x28) = 1;
  *(byte *)(lVar1 + 0x60) = *(byte *)(lVar1 + 0x60) | 0x20;
  plVar2 = (long *)FUN_100433e34(lVar1 + 0x10);
  (**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_Anka_Perk_Ready_10185b408);
  plVar2 = (long *)FUN_10043d6ac(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Ability__Anka__A_101859d08);
  local_40[0] = 0;
  local_38 = 1;
  (**(code **)(*plVar2 + 0x20))(plVar2,local_40);
  return;
}




void FUN_10041f3fc(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  code *local_40;
  undefined4 local_38;
  
  lVar1 = FUN_10042e498();
  plVar2 = (long *)FUN_1004385a0(lVar1 + 0x10);
  (**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_Anka_Perk_Cooldown_10185d078);
  lVar1 = FUN_10042e2c8(param_1);
  plVar2 = (long *)FUN_100441e68(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,"Bone_RDagger");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Anka_Perk_Buff");
  (**(code **)(*plVar2 + 0x88))(plVar2,0);
  plVar2 = (long *)FUN_100441e68(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,"Bone_LDagger");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Anka_Perk_Buff");
  (**(code **)(*plVar2 + 0x88))(plVar2,0);
  lVar1 = FUN_10042fdc4(param_1);
  plVar2 = (long *)FUN_100433e34(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_Anka_Perk_Cooldown_10185d078);
  local_40 = FUN_100454c14;
  local_38 = 3;
  (**(code **)(*plVar2 + 0x18))(plVar2,&local_40);
  return;
}




void FUN_10041f518(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_10042e498();
  plVar2 = (long *)FUN_1004385a0(lVar1 + 0x10);
  (**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_Anka_Perk_Ready_10185b408);
  lVar1 = FUN_10042fdc4(param_1);
  plVar2 = (long *)FUN_100433e34(lVar1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010041f56c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Buff_Anka_Perk_Ready_10185b408);
  return;
}




void FUN_10041f570(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  code *local_40;
  undefined4 local_38;
  
  lVar1 = FUN_10042ea44();
  lVar1 = lVar1 + 0x10;
  lVar2 = FUN_10049ca74(lVar1);
  *(undefined1 *)(lVar2 + 0x30) = 1;
  FUN_1003a4e5c(&local_40,PTR_s_Buff_Anka_A_DaggerMark_10185b410);
  *(undefined4 *)(lVar2 + 0x10) = local_40._0_4_;
  *(byte *)(lVar2 + 0x28) = *(byte *)(lVar2 + 0x28) | 3;
  plVar3 = (long *)FUN_10043b538(lVar1);
  (**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Anka_A_DaggerMark_10185b410);
  plVar3 = (long *)FUN_1004560cc(lVar1);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Anka_A_CanBlink_10185b428);
  local_40 = FUN_100454c20;
  local_38 = 3;
  (**(code **)(*plVar3 + 0x18))(plVar3,&local_40);
  lVar1 = FUN_10042e2c8(param_1);
  plVar3 = (long *)FUN_100441e68(lVar1 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x68))(plVar3,"OverHead");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Anka_A_Target");
  (**(code **)(*plVar3 + 0x88))(plVar3,0);
  plVar3 = (long *)FUN_100433e34(lVar1 + 0x10);
  (**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_RevealToBestowersTeamTrueSi_10185b3a0);
  lVar1 = FUN_10042fdc4(param_1);
  FUN_10043aa04(lVar1 + 0x10);
  plVar3 = (long *)FUN_10043b538(lVar1 + 0x10);
  (**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Anka_A_CanBlink_10185b428);
  return;
}




void FUN_10041f6c8(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  
  lVar2 = FUN_10042e2c8();
  lVar2 = FUN_100451f64(lVar2 + 0x10);
  puVar1 = PTR_s_Ability__Anka__A2_101859d10;
  *(undefined **)(lVar2 + 0x10) = PTR_s_Ability__Anka__A_101859d08;
  *(undefined **)(lVar2 + 0x18) = puVar1;
  lVar2 = FUN_10042f8e8(param_1);
  FUN_10049cb14(lVar2 + 0x10);
  return;
}




void FUN_10041f710(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = FUN_100431764();
  *(undefined4 *)(lVar1 + 0x40) = 0x3dcccccd;
  *(byte *)(lVar1 + 0x44) = *(byte *)(lVar1 + 0x44) & 0xfe;
  lVar1 = FUN_10049be00(lVar1 + 0x10);
  *(undefined4 *)(lVar1 + 0x58) = 1;
  *(code **)(lVar1 + 0x10) = FUN_100454c34;
  *(undefined4 *)(lVar1 + 0x18) = 3;
  *(undefined8 *)(lVar1 + 0x24) = 0x3f80000000000000;
  lVar1 = FUN_10042e3b0(param_1);
  FUN_10049b814(lVar1 + 0x10);
  return;
}




void FUN_10041f784(void)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_10042e498();
  plVar2 = (long *)FUN_100441e68(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x38))();
  plVar2 = (long *)(**(code **)(*plVar2 + 0x60))();
                    /* WARNING: Could not recover jumptable at 0x00010041f7c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Anka_A2_End");
  return;
}




void FUN_10041f7c8(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  code *local_40;
  undefined4 local_38;
  
  lVar1 = FUN_10042e498();
  lVar1 = lVar1 + 0x10;
  FUN_1004386bc(lVar1);
  plVar2 = (long *)FUN_10043ab94(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x40))();
  (**(code **)(*plVar2 + 0x38))(plVar2,"Damage",2);
  plVar2 = (long *)FUN_100441e18(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x38))(plVar2,"Sound_Anka_Ability_B_Impact_1");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x18))(plVar2,"Sound_Anka_Ability_B_Impact_2");
  uVar3 = FUN_1010a1520();
  lVar4 = FUN_1010a0e0c(uVar3,0,"*KindredSoundBalance*",0);
  FUN_1003cbcdc(*(undefined4 *)(lVar4 + 0x4e4));
  (**(code **)(*plVar2 + 0x28))(plVar2);
  plVar2 = (long *)FUN_100441e68(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x38))();
  plVar2 = (long *)(**(code **)(*plVar2 + 0x68))(plVar2,"CenterBody");
  (**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Anka_B_Hit");
  lVar1 = FUN_10042e3b0(param_1);
  FUN_1004386bc(lVar1 + 0x10);
  plVar2 = (long *)FUN_10043ab94(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x40))();
  plVar2 = (long *)(**(code **)(*plVar2 + 0x38))(plVar2,"Damage",2);
  local_40 = FUN_100454c48;
  local_38 = 3;
  (**(code **)(*plVar2 + 0x88))(plVar2,&local_40);
  return;
}




void FUN_10041f934(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  
  lVar1 = FUN_10042e498();
  plVar2 = (long *)FUN_1004385a0(lVar1 + 0x10);
  (**(code **)(*plVar2 + 0x50))();
  lVar1 = FUN_10042e2c8(param_1);
  lVar1 = lVar1 + 0x10;
  FUN_10049cb64(lVar1);
  FUN_10049c210(lVar1);
  lVar3 = FUN_10049b9b4(lVar1);
  *(undefined2 *)(lVar3 + 0x10) = 0x1700;
  lVar1 = FUN_10049be50(lVar1);
  *(undefined1 *)(lVar1 + 0x2c) = 0x11;
  return;
}




void FUN_10041f9a4(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  
  lVar1 = FUN_10042e498();
  plVar2 = (long *)FUN_100454548(lVar1 + 0x10);
  (**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Ability__Anka_C_Clone__InitialDa_101859d28);
  lVar1 = FUN_10042e2c8(param_1);
  lVar3 = FUN_10049b9b4(lVar1 + 0x10);
  *(undefined2 *)(lVar3 + 0x10) = 0x1700;
  lVar1 = FUN_10049be50(lVar1 + 0x10);
  *(undefined1 *)(lVar1 + 0x2c) = 0x11;
  lVar1 = FUN_100433b70(param_1);
  *(code **)(lVar1 + 0x40) = FUN_10049daec;
  plVar2 = (long *)FUN_100454548(lVar1 + 0x10);
  (**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Ability__Anka_C_Clone__FinalDash_101859d30);
  lVar1 = FUN_10042fdc4(param_1);
  FUN_100434ac8(lVar1 + 0x10);
  return;
}




void FUN_10041fa48(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  code *local_50;
  undefined4 local_48;
  
  lVar1 = FUN_10042e498();
  lVar1 = lVar1 + 0x10;
  FUN_1004386bc(lVar1);
  plVar2 = (long *)FUN_10043ab94(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x40))();
  (**(code **)(*plVar2 + 0x38))(plVar2,"INITIAL_DAMAGE",3);
  plVar2 = (long *)FUN_100441e18(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x38))(plVar2,"Sound_Anka_Ability_C_Impact_1");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x18))(plVar2,"Sound_Anka_Ability_C_Impact_2");
  uVar3 = FUN_1010a1520();
  lVar4 = FUN_1010a0e0c(uVar3,0,"*KindredSoundBalance*",0);
  FUN_1003cbcdc(*(undefined4 *)(lVar4 + 0x4e8));
  (**(code **)(*plVar2 + 0x28))(plVar2);
  plVar2 = (long *)FUN_100441e68(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x68))(plVar2,"CenterBody");
  (**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Anka_C_Clone_Hit");
  lVar1 = FUN_10042e3b0(param_1);
  FUN_1004386bc(lVar1 + 0x10);
  plVar2 = (long *)FUN_10043ab94(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x40))();
  plVar2 = (long *)(**(code **)(*plVar2 + 0x38))(plVar2,"INITIAL_DAMAGE",3);
  local_50 = FUN_100454c5c;
  local_48 = 3;
  (**(code **)(*plVar2 + 0x88))(plVar2,&local_50);
  return;
}




void FUN_10041fbb0(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  code *local_50;
  undefined4 local_48;
  
  lVar1 = FUN_10042e498();
  lVar1 = lVar1 + 0x10;
  FUN_1004386bc(lVar1);
  plVar2 = (long *)FUN_10043ab94(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x40))();
  (**(code **)(*plVar2 + 0x38))(plVar2,"SECONDARY_DAMAGE",3);
  plVar2 = (long *)FUN_100441e18(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x38))(plVar2,"Sound_Anka_Ability_C_Impact_1");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x18))(plVar2,"Sound_Anka_Ability_C_Impact_2");
  uVar3 = FUN_1010a1520();
  lVar4 = FUN_1010a0e0c(uVar3,0,"*KindredSoundBalance*",0);
  FUN_1003cbcdc(*(undefined4 *)(lVar4 + 0x4e8));
  (**(code **)(*plVar2 + 0x28))(plVar2);
  plVar2 = (long *)FUN_100441e68(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x68))(plVar2,"CenterBody");
  (**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Anka_C_Clone_Hit");
  lVar1 = FUN_10042e3b0(param_1);
  FUN_1004386bc(lVar1 + 0x10);
  plVar2 = (long *)FUN_10043ab94(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x40))();
  plVar2 = (long *)(**(code **)(*plVar2 + 0x38))(plVar2,"SECONDARY_DAMAGE",3);
  local_50 = FUN_100454c70;
  local_48 = 3;
  (**(code **)(*plVar2 + 0x88))(plVar2,&local_50);
  return;
}




void FUN_10041fd18(undefined8 param_1)

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
  lVar1 = FUN_100434180();
  if (PTR_s_Buff_Anka_A_BlinkedSpeedBoost_10185b420 == (undefined *)0x0) {
    uVar4 = 0;
  }
  else {
    cVar3 = *PTR_s_Buff_Anka_A_BlinkedSpeedBoost_10185b420;
    uVar4 = 0x811c9dc5;
    if (cVar3 != '\0') {
      uVar4 = 0x811c9dc5;
      pcVar5 = PTR_s_Buff_Anka_A_BlinkedSpeedBoost_10185b420;
      do {
        pcVar5 = pcVar5 + 1;
        uVar4 = (uVar4 ^ (int)cVar3) * 0x1000193;
        cVar3 = *pcVar5;
      } while (cVar3 != '\0');
    }
  }
  *(uint *)(lVar1 + 0x28) = uVar4;
  plVar2 = (long *)FUN_10045562c(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))();
  local_30 = FUN_100495364;
  local_28 = 4;
  plVar2 = (long *)(**(code **)(*plVar2 + 0x10))(plVar2,&local_30);
  (**(code **)(*plVar2 + 0x20))(plVar2,FUN_10044d964);
  lVar1 = FUN_10042e694(param_1);
  *(ushort *)(lVar1 + 0x48) = *(ushort *)(lVar1 + 0x48) | 0x10;
  *(byte *)(lVar1 + 0x60) = *(byte *)(lVar1 + 0x60) & 0xfc | 1;
  if (PTR_s_Ability__Anka__A_101859d08 == (undefined *)0x0) {
    uVar6 = 0;
  }
  else {
    cVar3 = *PTR_s_Ability__Anka__A_101859d08;
    pcVar5 = PTR_s_Ability__Anka__A_101859d08;
    while (cVar3 != '\0') {
      pcVar5 = pcVar5 + 1;
      uVar6 = (uVar6 ^ (int)cVar3) * 0x1000193;
      cVar3 = *pcVar5;
    }
  }
  *(uint *)(lVar1 + 0x40) = uVar6;
  plVar2 = (long *)FUN_10043187c(lVar1 + 0x10);
  local_30 = FUN_100495400;
  local_28 = 3;
  (**(code **)(*plVar2 + 0x30))(plVar2,&local_30);
  return;
}




void FUN_10041fe74(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  code *local_30;
  undefined4 local_28;
  
  lVar1 = FUN_10042e2c8();
  plVar2 = (long *)FUN_100430a84(lVar1 + 0x10);
  local_30 = FUN_100495330;
  local_28 = 3;
  (**(code **)(*plVar2 + 0x30))(plVar2,5,1,&local_30);
  lVar1 = FUN_100431114(param_1);
  *(undefined4 *)(lVar1 + 0x28) = 1;
  *(byte *)(lVar1 + 0x60) = *(byte *)(lVar1 + 0x60) | 0x20;
  plVar2 = (long *)FUN_10043d6ac(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Ability__Anka__B_101859d18);
  local_30 = (code *)((ulong)local_30 & 0xffffffff00000000);
  local_28 = 1;
  (**(code **)(*plVar2 + 0x20))(plVar2,&local_30);
  plVar2 = (long *)FUN_10043d6ac(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Ability__Anka__C_101859d20);
  local_30 = (code *)((ulong)local_30 & 0xffffffff00000000);
  local_28 = 1;
  (**(code **)(*plVar2 + 0x20))(plVar2,&local_30);
  return;
}




void FUN_10041ff58(undefined8 param_1)

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
  if (PTR_s_Ability__Anka__A_101859d08 == (undefined *)0x0) {
    uVar3 = 0;
  }
  else {
    cVar4 = *PTR_s_Ability__Anka__A_101859d08;
    uVar3 = 0x811c9dc5;
    if (cVar4 != '\0') {
      uVar3 = 0x811c9dc5;
      pcVar5 = PTR_s_Ability__Anka__A_101859d08;
      do {
        pcVar5 = pcVar5 + 1;
        uVar3 = (uVar3 ^ (int)cVar4) * 0x1000193;
        cVar4 = *pcVar5;
      } while (cVar4 != '\0');
    }
  }
  *(uint *)(lVar1 + 0x28) = uVar3;
  lVar1 = FUN_10049bf40(lVar1 + 0x10);
  if (PTR_s_Ability__Anka__A_101859d08 == (undefined *)0x0) {
    uVar3 = 0;
  }
  else {
    cVar4 = *PTR_s_Ability__Anka__A_101859d08;
    uVar3 = 0x811c9dc5;
    if (cVar4 != '\0') {
      uVar3 = 0x811c9dc5;
      pcVar5 = PTR_s_Ability__Anka__A_101859d08;
      do {
        pcVar5 = pcVar5 + 1;
        uVar3 = (uVar3 ^ (int)cVar4) * 0x1000193;
        cVar4 = *pcVar5;
      } while (cVar4 != '\0');
    }
  }
  *(uint *)(lVar1 + 0x20) = uVar3;
  *(code **)(lVar1 + 0x10) = FUN_100495294;
  *(undefined4 *)(lVar1 + 0x18) = 3;
  *(undefined4 *)(lVar1 + 0x28) = 1;
  lVar1 = FUN_100433030(param_1);
  if (PTR_s_Ability__Anka__A_101859d08 == (undefined *)0x0) {
    uVar3 = 0;
  }
  else {
    cVar4 = *PTR_s_Ability__Anka__A_101859d08;
    uVar3 = 0x811c9dc5;
    if (cVar4 != '\0') {
      uVar3 = 0x811c9dc5;
      pcVar5 = PTR_s_Ability__Anka__A_101859d08;
      do {
        pcVar5 = pcVar5 + 1;
        uVar3 = (uVar3 ^ (int)cVar4) * 0x1000193;
        cVar4 = *pcVar5;
      } while (cVar4 != '\0');
    }
  }
  *(uint *)(lVar1 + 0x28) = uVar3;
  lVar1 = FUN_10049da9c(lVar1 + 0x10);
  *(undefined **)(lVar1 + 0x10) = PTR_s_Ability__Anka__A_101859d08;
  *(code **)(lVar1 + 0x18) = FUN_1004952c8;
  *(undefined4 *)(lVar1 + 0x20) = 3;
  *(undefined4 *)(lVar1 + 0x2c) = 0;
  lVar1 = FUN_10042e694(param_1);
  *(ushort *)(lVar1 + 0x48) = *(ushort *)(lVar1 + 0x48) | 0x10;
  *(byte *)(lVar1 + 0x60) = *(byte *)(lVar1 + 0x60) & 0xfc | 1;
  if (PTR_s_Ability__Anka__A_101859d08 == (undefined *)0x0) {
    uVar6 = 0;
  }
  else {
    cVar4 = *PTR_s_Ability__Anka__A_101859d08;
    pcVar5 = PTR_s_Ability__Anka__A_101859d08;
    while (cVar4 != '\0') {
      pcVar5 = pcVar5 + 1;
      uVar6 = (uVar6 ^ (int)cVar4) * 0x1000193;
      cVar4 = *pcVar5;
    }
  }
  *(uint *)(lVar1 + 0x40) = uVar6;
  plVar2 = (long *)FUN_10043187c(lVar1 + 0x10);
  local_50 = FUN_1004952fc;
  local_48 = 3;
  (**(code **)(*plVar2 + 0x30))(plVar2,&local_50);
  return;
}

