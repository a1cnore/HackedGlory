// functions/10048 — 412 functions
#include "GameKindred.h"




void thunk_FUN_10048737c(void)

{
  FUN_10048737c();
  return;
}




void thunk_FUN_10048737c(void)

{
  FUN_10048737c();
  return;
}




void thunk_FUN_100487cc4(void)

{
  FUN_100487cc4();
  return;
}




void FUN_10048007c(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  undefined4 uVar5;
  code *local_40;
  undefined4 local_38;
  
  uVar1 = FUN_1004743d4();
  *param_2 = "Effect_Kinetic_C";
  param_2[4] = "Effect_Kinetic_C_Impact";
  param_2[0xc] = "Sound_Kinetic_C_Impact";
  uVar2 = FUN_1010a1520();
  lVar3 = FUN_1010a0e0c(uVar2,0,"*KindredSoundBalance*",0);
  uVar5 = FUN_1003c9d10(*(undefined4 *)(lVar3 + 0x4d4));
  *(undefined4 *)(param_2 + 0x15) = uVar5;
  *(undefined4 *)(param_1 + 0x88) = 0x3ecccccd;
  *(undefined4 *)(param_1 + 0x13c) = 0;
  uVar2 = NEON_fmov(0xbf800000,4);
  *(undefined8 *)(param_1 + 0x128) = uVar2;
  *(undefined4 *)(param_1 + 0x130) = 0;
  *(undefined8 *)(param_1 + 0x134) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x140) = 0;
  *(long *)(param_1 + 0x118) = param_1 + 0x120;
  *(undefined ***)(param_1 + 0x120) = &PTR_FUN_10149aaa8;
  uVar5 = FUN_1003dfe60(uVar1,2,4,0x19,0);
  *(undefined4 *)(param_1 + 0x128) = uVar5;
  lVar3 = FUN_10049fe0c(param_1 + 0x100);
  FUN_1004747d0(param_1);
  *(undefined8 *)(lVar3 + 0x40) = 0x100500000000;
  *(undefined4 *)(lVar3 + 0x48) = 0;
  lVar3 = lVar3 + 0x10;
  plVar4 = (long *)FUN_10048602c(lVar3);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x38))();
  local_40 = FUN_100489afc;
  local_38 = 4;
  (**(code **)(*plVar4 + 0x18))(plVar4,&local_40,1,2);
  plVar4 = (long *)FUN_10048602c(lVar3);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x38))();
  local_40 = FUN_100489b6c;
  local_38 = 4;
  (**(code **)(*plVar4 + 0x18))(plVar4,&local_40,0,2);
  lVar3 = FUN_100486124(lVar3);
  *(undefined1 *)(lVar3 + 0x18) = 1;
  lVar3 = FUN_10049fefc(param_1 + 0x100);
  lVar3 = FUN_100486124(lVar3 + 0x10);
  *(undefined1 *)(lVar3 + 0x18) = 1;
  return;
}




void FUN_100480228(long param_1,undefined8 *param_2)

{
  char cVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  char *pcVar7;
  code *local_40;
  undefined4 local_38;
  
  *param_2 = "Effect_Hero049_DefaultAttack_Shot";
  param_2[4] = "Effect_Hero049_DefaultAttack_Impact";
  *(undefined8 *)(param_1 + 0x134) = 0x3f800000;
  *(undefined8 *)(param_1 + 300) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x13c) = 0;
  *(undefined1 *)(param_1 + 0x140) = 0;
  *(long *)(param_1 + 0x118) = param_1 + 0x120;
  *(undefined ***)(param_1 + 0x120) = &PTR_FUN_10149aaa8;
  *(undefined4 *)(param_1 + 0x128) = 0x41900000;
  lVar2 = FUN_10049fdbc(param_1 + 0x100);
  lVar2 = lVar2 + 0x10;
  plVar3 = (long *)FUN_10048602c(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))();
  local_40 = FUN_10048990c;
  local_38 = 4;
  plVar3 = (long *)(**(code **)(*plVar3 + 0x18))(plVar3,&local_40,0,0);
  (**(code **)(*plVar3 + 0x70))(plVar3,1);
  lVar4 = FUN_100486650(lVar2);
  lVar5 = FUN_1004a01c8(lVar4 + 0x10);
  if (PTR_s_Ability__Hero049__A_101859bc0 == (undefined *)0x0) {
    uVar6 = 0;
  }
  else {
    uVar6 = 0x811c9dc5;
    cVar1 = *PTR_s_Ability__Hero049__A_101859bc0;
    pcVar7 = PTR_s_Ability__Hero049__A_101859bc0;
    while (cVar1 != '\0') {
      pcVar7 = pcVar7 + 1;
      uVar6 = (uVar6 ^ (int)cVar1) * 0x1000193;
      cVar1 = *pcVar7;
    }
  }
  *(uint *)(lVar5 + 8) = uVar6;
  *(undefined4 *)(lVar5 + 0xc) = 1;
  plVar3 = (long *)FUN_100486d38(lVar4 + 0x58);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))();
  plVar3 = (long *)(**(code **)(*plVar3 + 0x10))(plVar3,PTR_s_Ability__Hero049__A_101859bc0);
  local_40 = FUN_100489970;
  local_38 = 3;
  (**(code **)(*plVar3 + 0x30))(plVar3,&local_40);
  FUN_100486124(lVar2);
  return;
}




void FUN_1004803b4(long param_1,undefined8 *param_2)

{
  long lVar1;
  long *plVar2;
  
  *param_2 = "Effect_Hero049_DefaultAttack_Shot";
  param_2[4] = "Effect_Hero049_DefaultAttack_Impact";
  *(undefined8 *)(param_1 + 0x134) = 0x3f800000;
  *(undefined8 *)(param_1 + 300) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x13c) = 0;
  *(undefined1 *)(param_1 + 0x140) = 0;
  *(long *)(param_1 + 0x118) = param_1 + 0x120;
  *(undefined ***)(param_1 + 0x120) = &PTR_FUN_10149aaa8;
  *(undefined4 *)(param_1 + 0x128) = 0x41900000;
  lVar1 = FUN_10049fdbc(param_1 + 0x100);
  plVar2 = (long *)FUN_10048602c(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x38))();
  (**(code **)(*plVar2 + 0x58))(plVar2,0);
  FUN_100486124(lVar1 + 0x10);
  return;
}




void FUN_100480458(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  code *local_30;
  undefined4 local_28;
  
  uVar1 = FUN_1004744e4();
  *(undefined4 *)(param_1 + 0x88) = 0x3f8ccccd;
  *(undefined8 *)(param_1 + 0x130) = 0;
  *(undefined8 *)(param_1 + 0x138) = 0;
  *(undefined8 *)(param_1 + 0x128) = 0;
  *(undefined4 *)(param_1 + 0x130) = DAT_101dc0b88;
  *(long *)(param_1 + 0x118) = param_1 + 0x120;
  *(undefined ***)(param_1 + 0x120) = &PTR_FUN_10149d360;
  FUN_1004766b8(param_1 + 0x120,param_1,uVar1);
  lVar2 = FUN_10049fe0c(param_1 + 0x100);
  FUN_1004747d0(param_1);
  *(undefined4 *)(lVar2 + 0x40) = 0x40000;
  plVar3 = (long *)FUN_10048602c(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))();
  local_30 = FUN_100489984;
  local_28 = 3;
  (**(code **)(*plVar3 + 0x18))(plVar3,&local_30,1,2);
  return;
}




void FUN_10048051c(undefined8 param_1,undefined8 param_2)

{
  FUN_100489bdc(param_1,param_2,0);
  return;
}




void FUN_100480524(undefined8 param_1,undefined8 param_2)

{
  FUN_100489bdc(param_1,param_2,0);
  return;
}




void FUN_10048052c(undefined8 param_1,undefined8 param_2)

{
  FUN_100489bdc(param_1,param_2,2);
  return;
}




void FUN_100480534(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined4 uVar4;
  
  uVar1 = FUN_1004743d4();
  *param_2 = "Effect_Hero050_B";
  param_2[4] = "Effect_Hero050_Proj_Hit";
  *(undefined4 *)(param_1 + 0x88) = 0x3f000000;
  *(undefined4 *)(param_1 + 300) = 0;
  *(undefined1 *)(param_1 + 0x134) = 1;
  *(undefined4 *)(param_1 + 0x128) = 0;
  *(undefined4 *)(param_1 + 0x130) = 0;
  *(long *)(param_1 + 0x118) = param_1 + 0x120;
  *(undefined ***)(param_1 + 0x120) = &PTR_FUN_10149aa80;
  FUN_1003dfe60(uVar1,1,4,0x19,0);
  FUN_1004779e0(param_1 + 0x120,param_1,1);
  lVar2 = FUN_10049fe0c(param_1 + 0x100);
  FUN_1004747d0(param_1);
  *(undefined4 *)(lVar2 + 0x40) = 0x40000;
  lVar2 = lVar2 + 0x10;
  lVar3 = FUN_10049ff4c(lVar2);
  *(code **)(lVar3 + 0x20) = FUN_100489c98;
  lVar3 = FUN_10049ff4c(lVar2);
  uVar4 = FUN_1003dfe60(uVar1,1,3,0x19,0);
  *(undefined4 *)(lVar3 + 0x10) = uVar4;
  *(undefined8 *)(lVar3 + 0x28) = 0x200000001;
  *(undefined4 *)(lVar3 + 0x30) = 0;
  FUN_100486124(lVar2);
  lVar2 = FUN_10049feac(param_1 + 0x100);
  FUN_100486124(lVar2 + 0x10);
  return;
}




void FUN_100480650(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  code *local_40;
  undefined4 local_38;
  
  uVar1 = FUN_1004743d4();
  *param_2 = "Effect_Hero050_C";
  param_2[4] = "Effect_Hero050_C_Explosion";
  *(undefined4 *)(param_1 + 0x88) = 0x3f000000;
  *(undefined4 *)(param_1 + 300) = 0;
  *(undefined4 *)(param_1 + 0x128) = 0;
  *(undefined4 *)(param_1 + 0x130) = 0;
  *(undefined1 *)(param_1 + 0x134) = 1;
  *(long *)(param_1 + 0x118) = param_1 + 0x120;
  *(undefined ***)(param_1 + 0x120) = &PTR_FUN_10149aa80;
  FUN_1003dfe60(uVar1,2,5,0x19,0);
  FUN_1004779e0(param_1 + 0x120,param_1,2);
  lVar2 = FUN_10049fe0c(param_1 + 0x100);
  FUN_1004747d0(param_1);
  *(undefined4 *)(lVar2 + 0x40) = 1;
  lVar2 = lVar2 + 0x10;
  plVar3 = (long *)FUN_10048602c(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))();
  local_40 = FUN_100489ccc;
  local_38 = 3;
  (**(code **)(*plVar3 + 0x18))(plVar3,&local_40,0,2);
  plVar3 = (long *)FUN_10048602c(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(0x40a00000,0xbf800000,0xbf800000,plVar3,0x40000,0);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))();
  local_40 = FUN_100489ce0;
  local_38 = 3;
  (**(code **)(*plVar3 + 0x18))(plVar3,&local_40,0,2);
  plVar3 = (long *)FUN_100485fa8(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(0x40a00000,0xbf800000,plVar3,0x40000,0);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))(plVar3,PTR_s_Buff_Hero050_C_Slow_10185d038);
  local_40 = (code *)CONCAT44(local_40._4_4_,0x40400000);
  local_38 = 1;
  (**(code **)(*plVar3 + 0x18))(plVar3,&local_40);
  FUN_100486124(lVar2);
  lVar2 = FUN_10049feac(param_1 + 0x100);
  FUN_100486124(lVar2 + 0x10);
  return;
}




void FUN_100480814(undefined8 param_1,undefined8 param_2)

{
  FUN_100489cf4(param_1,param_2,0);
  return;
}




void thunk_FUN_100489e24(void)

{
  FUN_100489e24();
  return;
}




void FUN_100480820(undefined8 param_1,undefined8 param_2)

{
  FUN_100489cf4(param_1,param_2,2);
  return;
}




void FUN_100480828(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  
  *param_2 = "Effect_Hero051_B_Shot";
  param_2[4] = "Effect_Hero051_B_Shot_Impact";
  *(undefined4 *)(param_1 + 0x88) = 0x3f000000;
  *(undefined4 *)(param_1 + 0x128) = 0;
  *(undefined1 *)(param_1 + 0x134) = 1;
  *(undefined4 *)(param_1 + 300) = 0;
  *(undefined4 *)(param_1 + 0x130) = 0;
  *(long *)(param_1 + 0x118) = param_1 + 0x120;
  *(undefined ***)(param_1 + 0x120) = &PTR_FUN_10149aa80;
  FUN_1004779e0(0x41a00000,param_1 + 0x120,param_1,0);
  lVar1 = FUN_10049fe0c(param_1 + 0x100);
  FUN_1004747d0(param_1);
  *(undefined4 *)(lVar1 + 0x40) = 0x40000;
  lVar2 = FUN_10049ff4c(lVar1 + 0x10);
  *(code **)(lVar2 + 0x18) = FUN_10048a088;
  *(undefined8 *)(lVar2 + 0x28) = 0x200000000;
  *(undefined4 *)(lVar2 + 0x30) = 0;
  FUN_100486124(lVar1 + 0x10);
  lVar1 = FUN_10049feac(param_1 + 0x100);
  FUN_100486124(lVar1 + 0x10);
  return;
}




void FUN_1004808fc(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined4 local_50 [2];
  undefined4 local_48;
  
  uVar1 = FUN_1004743d4();
  *param_2 = "Effect_Hero051_GunA2Attack";
  param_2[4] = "Effect_Hero051_GunA2_Impact";
  *(undefined4 *)(param_1 + 0x88) = 0x3f000000;
  *(undefined4 *)(param_1 + 300) = 0;
  *(undefined4 *)(param_1 + 0x128) = 0;
  *(undefined4 *)(param_1 + 0x130) = 0;
  *(undefined1 *)(param_1 + 0x134) = 1;
  *(long *)(param_1 + 0x118) = param_1 + 0x120;
  *(undefined ***)(param_1 + 0x120) = &PTR_FUN_10149aa80;
  uVar4 = FUN_1003dfe60(uVar1,2,6,0x19,0);
  uVar1 = FUN_1003dfe60(uVar1,2,5,0x19,0);
  FUN_1004778c4(uVar4,uVar1,param_1 + 0x120,param_1);
  lVar2 = FUN_10049fe0c(param_1 + 0x100);
  FUN_1004747d0(param_1);
  *(undefined4 *)(lVar2 + 0x40) = 0x40000;
  plVar3 = (long *)FUN_100485fa8(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))(plVar3,PTR_s_Buff_Hero051_CDamage_10185d050);
  local_50[0] = 0x3f800000;
  local_48 = 1;
  (**(code **)(*plVar3 + 0x18))(plVar3,local_50);
  FUN_100486124(lVar2 + 0x10);
  lVar2 = FUN_10049feac(param_1 + 0x100);
  FUN_100486124(lVar2 + 0x10);
  return;
}




void FUN_100480a38(long param_1,undefined8 *param_2)

{
  long lVar1;
  long *plVar2;
  code *local_40;
  undefined4 local_38;
  
  *param_2 = "Effect_Hero051_GunA2Attack";
  param_2[4] = "Effect_Hero051_GunA2_Impact";
  *(undefined4 *)(param_1 + 0x88) = 0x3f000000;
  *(undefined4 *)(param_1 + 0x128) = 0;
  *(undefined4 *)(param_1 + 300) = 0;
  *(undefined4 *)(param_1 + 0x130) = 0;
  *(undefined1 *)(param_1 + 0x134) = 1;
  *(long *)(param_1 + 0x118) = param_1 + 0x120;
  *(undefined ***)(param_1 + 0x120) = &PTR_FUN_10149aa80;
  FUN_1004779e0(0x41a00000,param_1 + 0x120,param_1,0);
  lVar1 = FUN_10049fe0c(param_1 + 0x100);
  FUN_1004747d0(param_1);
  *(undefined4 *)(lVar1 + 0x40) = 0x40000;
  plVar2 = (long *)FUN_10048602c(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))(0x40400000,0x3fd33333,0xbf800000,plVar2,0x40000,0);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x38))();
  local_40 = FUN_1003caac8;
  local_38 = 3;
  (**(code **)(*plVar2 + 0x18))(plVar2,&local_40,0,2);
  FUN_100486124(lVar1 + 0x10);
  lVar1 = FUN_10049feac(param_1 + 0x100);
  lVar1 = FUN_100486124(lVar1 + 0x10);
  *(undefined1 *)(lVar1 + 0x18) = 1;
  return;
}




void FUN_100480b5c(long param_1,undefined8 *param_2)

{
  long lVar1;
  long *plVar2;
  
  *param_2 = "Effect_Hero052_Shot";
  param_2[4] = "Effect_Hero052_Shot_HitImpact";
  *(undefined8 *)(param_1 + 0x134) = 0x3f800000;
  *(undefined8 *)(param_1 + 300) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x13c) = 0;
  *(undefined1 *)(param_1 + 0x140) = 0;
  *(long *)(param_1 + 0x118) = param_1 + 0x120;
  *(undefined ***)(param_1 + 0x120) = &PTR_FUN_10149aaa8;
  *(undefined4 *)(param_1 + 0x128) = 0x41900000;
  lVar1 = FUN_10049fdbc(param_1 + 0x100);
  plVar2 = (long *)FUN_10048602c(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x38))();
  (**(code **)(*plVar2 + 0x58))(plVar2,0);
  FUN_100486124(lVar1 + 0x10);
  return;
}




void FUN_100480c00(long param_1,undefined8 *param_2)

{
  long lVar1;
  long *plVar2;
  
  *param_2 = "Effect_Hero052_Ball_DefaultAttack";
  param_2[4] = "Effect_Hero052_Shot_HitImpact";
  *(undefined8 *)(param_1 + 0x134) = 0x3f800000;
  *(undefined8 *)(param_1 + 300) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x13c) = 0;
  *(undefined1 *)(param_1 + 0x140) = 0;
  *(long *)(param_1 + 0x118) = param_1 + 0x120;
  *(undefined ***)(param_1 + 0x120) = &PTR_FUN_10149aaa8;
  *(undefined4 *)(param_1 + 0x128) = 0x41900000;
  lVar1 = FUN_10049fdbc(param_1 + 0x100);
  plVar2 = (long *)FUN_10048602c(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x38))();
  (**(code **)(*plVar2 + 0x58))(plVar2,0);
  FUN_100486124(lVar1 + 0x10);
  return;
}




void FUN_100480ca4(long param_1,undefined8 *param_2)

{
  long lVar1;
  long *plVar2;
  code *local_60;
  undefined4 local_58;
  undefined4 local_50 [2];
  undefined4 local_48;
  
  *param_2 = "Effect_Hero052_Ball_DefaultAttack";
  param_2[4] = "Effect_Hero052_Shot_HitImpact";
  *(undefined4 *)(param_1 + 0x88) = 0x3e4ccccd;
  *(undefined4 *)(param_1 + 0x128) = 0;
  *(undefined4 *)(param_1 + 300) = 0;
  *(undefined4 *)(param_1 + 0x130) = 0;
  *(undefined1 *)(param_1 + 0x134) = 1;
  *(long *)(param_1 + 0x118) = param_1 + 0x120;
  *(undefined ***)(param_1 + 0x120) = &PTR_FUN_10149aa80;
  FUN_1004779e0(0x41c80000,param_1 + 0x120,param_1,3);
  lVar1 = FUN_10049fe0c(param_1 + 0x100);
  FUN_1004747d0(param_1);
  *(undefined4 *)(lVar1 + 0x40) = 0x200000;
  plVar2 = (long *)FUN_1004a026c(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x50))();
  local_50[0] = 0x41f00000;
  local_48 = 1;
  plVar2 = (long *)(**(code **)(*plVar2 + 0x10))(plVar2,local_50);
  local_60 = FUN_10048a0e8;
  local_58 = 3;
  plVar2 = (long *)(**(code **)(*plVar2 + 0x28))(plVar2,&local_60);
  (**(code **)(*plVar2 + 0x80))();
  lVar1 = FUN_10049feac(param_1 + 0x100);
  FUN_100486124(lVar1 + 0x10);
  return;
}




void FUN_100480dc0(long param_1,undefined8 *param_2)

{
  long lVar1;
  long *plVar2;
  code *local_40;
  undefined4 local_38;
  
  *param_2 = "Effect_Hero052_Shot_B";
  param_2[4] = "Effect_Hero052_Shot_HitImpact";
  *(undefined4 *)(param_1 + 0x128) = 0;
  *(undefined4 *)(param_1 + 300) = 0;
  *(undefined1 *)(param_1 + 0x134) = 1;
  *(undefined4 *)(param_1 + 0x130) = 0;
  *(long *)(param_1 + 0x118) = param_1 + 0x120;
  *(undefined ***)(param_1 + 0x120) = &PTR_FUN_10149aa80;
  FUN_1004779e0(0x41f00000,param_1 + 0x120,param_1,2);
  lVar1 = FUN_10049fe0c(param_1 + 0x100);
  FUN_1004747d0(param_1);
  *(undefined4 *)(lVar1 + 0x40) = 0x40000;
  plVar2 = (long *)FUN_10048602c(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x38))();
  local_40 = FUN_10048a0c0;
  local_38 = 3;
  (**(code **)(*plVar2 + 0x18))(plVar2,&local_40,1,2);
  FUN_100486124(lVar1 + 0x10);
  lVar1 = FUN_10049feac(param_1 + 0x100);
  FUN_100486124(lVar1 + 0x10);
  return;
}




void FUN_100480eb4(long param_1,undefined8 *param_2)

{
  long lVar1;
  long *plVar2;
  code *local_40;
  undefined4 local_38;
  
  *param_2 = "Effect_Hero052_Shot_B";
  param_2[4] = "Effect_Hero052_Shot_HitImpact";
  *(undefined4 *)(param_1 + 0x128) = 0;
  *(undefined4 *)(param_1 + 300) = 0;
  *(undefined1 *)(param_1 + 0x134) = 1;
  *(undefined4 *)(param_1 + 0x130) = 0;
  *(long *)(param_1 + 0x118) = param_1 + 0x120;
  *(undefined ***)(param_1 + 0x120) = &PTR_FUN_10149aa80;
  FUN_1004779e0(0x41f00000,param_1 + 0x120,param_1,1);
  lVar1 = FUN_10049fe0c(param_1 + 0x100);
  FUN_1004747d0(param_1);
  *(undefined4 *)(lVar1 + 0x40) = 0x40000;
  plVar2 = (long *)FUN_10048602c(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x38))();
  local_40 = FUN_10048a0d4;
  local_38 = 3;
  (**(code **)(*plVar2 + 0x18))(plVar2,&local_40,1,2);
  FUN_100486124(lVar1 + 0x10);
  lVar1 = FUN_10049feac(param_1 + 0x100);
  FUN_100486124(lVar1 + 0x10);
  return;
}




void FUN_100480fa8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1004743d4();
  *(undefined4 *)(param_1 + 0x88) = 0x3f99999a;
  *(undefined8 *)(param_1 + 0x130) = 0;
  *(undefined8 *)(param_1 + 0x138) = 0;
  *(undefined4 *)(param_1 + 0x130) = DAT_101dc0b88;
  *(undefined ***)(param_1 + 0x120) = &PTR_FUN_10149d360;
  *(undefined8 *)(param_1 + 0x128) = 0;
  *(long *)(param_1 + 0x118) = param_1 + 0x120;
  FUN_1004766b8(param_1 + 0x120,param_1,uVar1);
  return;
}




void FUN_100481004(long param_1,undefined8 *param_2)

{
  long lVar1;
  long *plVar2;
  undefined4 local_30 [2];
  undefined4 local_28;
  
  *param_2 = "Effect_Hero053_B_Proj";
  param_2[4] = "Effect_Hero053_B_Impact";
  *(undefined8 *)(param_1 + 0x88) = 0x3e4ccccd3e99999a;
  *(undefined4 *)(param_1 + 0x90) = 0x3f333333;
  *(undefined4 *)(param_1 + 0xcc) = 0x40c00000;
  *(undefined8 *)(param_1 + 0x13c) = 0x7f7fffff7f7fffff;
  *(undefined8 *)(param_1 + 0x134) = 0x7f7fffff7f7fffff;
  *(undefined4 *)(param_1 + 0x144) = 0x7f7fffff;
  *(undefined4 *)(param_1 + 0x148) = 0x7f7fffff;
  *(undefined4 *)(param_1 + 0x14c) = 0;
  *(long *)(param_1 + 0x118) = param_1 + 0x120;
  *(undefined ***)(param_1 + 0x120) = &PTR_FUN_10149aa08;
  *(undefined8 *)(param_1 + 0x128) = *(undefined8 *)(param_1 + 0x6c);
  *(undefined4 *)(param_1 + 0x130) = *(undefined4 *)(param_1 + 0x74);
  *(undefined8 *)(param_1 + 0x150) = 0x40000000;
  FUN_100476ac4(0x3e99999a,0xbe99999a,0,param_1 + 0x120,param_1);
  lVar1 = FUN_10049fe0c(param_1 + 0x100);
  FUN_1004747d0(param_1);
  *(undefined4 *)(lVar1 + 0x40) = 0x40000;
  plVar2 = (long *)FUN_100485fa8(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x38))(plVar2,PTR_s_Buff_Stunned_10185a208);
  local_30[0] = 0x40000000;
  local_28 = 1;
  (**(code **)(*plVar2 + 0x18))(plVar2,local_30);
  FUN_100486124(lVar1 + 0x10);
  return;
}




void FUN_10048112c(long param_1,undefined8 *param_2)

{
  long lVar1;
  long *plVar2;
  undefined4 local_30 [2];
  undefined4 local_28;
  
  *param_2 = "Effect_Hero053_B_Proj";
  param_2[4] = "Effect_Hero053_B_Impact";
  *(undefined8 *)(param_1 + 0x88) = 0x3e4ccccd3e99999a;
  *(undefined4 *)(param_1 + 0x90) = 0x3f333333;
  *(undefined4 *)(param_1 + 0xcc) = 0x40c00000;
  *(undefined8 *)(param_1 + 0x13c) = 0x7f7fffff7f7fffff;
  *(undefined8 *)(param_1 + 0x134) = 0x7f7fffff7f7fffff;
  *(undefined4 *)(param_1 + 0x144) = 0x7f7fffff;
  *(undefined4 *)(param_1 + 0x148) = 0x7f7fffff;
  *(undefined4 *)(param_1 + 0x14c) = 0;
  *(long *)(param_1 + 0x118) = param_1 + 0x120;
  *(undefined ***)(param_1 + 0x120) = &PTR_FUN_10149aa08;
  *(undefined8 *)(param_1 + 0x128) = *(undefined8 *)(param_1 + 0x6c);
  *(undefined4 *)(param_1 + 0x130) = *(undefined4 *)(param_1 + 0x74);
  *(undefined8 *)(param_1 + 0x150) = 0x40000000;
  FUN_100476ac4(0x3e99999a,0xbe99999a,0,param_1 + 0x120,param_1);
  lVar1 = FUN_10049fe0c(param_1 + 0x100);
  FUN_1004747d0(param_1);
  *(undefined4 *)(lVar1 + 0x40) = 0x40000;
  plVar2 = (long *)FUN_100485fa8(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x38))(plVar2,PTR_s_Buff_Stunned_10185a208);
  local_30[0] = 0x40000000;
  local_28 = 1;
  (**(code **)(*plVar2 + 0x18))(plVar2,local_30);
  FUN_100486124(lVar1 + 0x10);
  return;
}




void FUN_100481254(long param_1,undefined8 *param_2)

{
  long lVar1;
  long *plVar2;
  undefined4 local_40 [2];
  undefined4 local_38;
  
  *param_2 = "Effect_Hero053_B_Proj";
  param_2[4] = "Effect_Hero053_B_Impact";
  *(undefined8 *)(param_1 + 0x88) = 0x3e4ccccd3e99999a;
  *(undefined4 *)(param_1 + 0x90) = 0x3f333333;
  *(undefined4 *)(param_1 + 0xcc) = 0x40c00000;
  *(undefined4 *)(param_1 + 0x128) = 0;
  *(undefined4 *)(param_1 + 300) = 0;
  *(undefined4 *)(param_1 + 0x130) = 0;
  *(undefined1 *)(param_1 + 0x134) = 1;
  *(long *)(param_1 + 0x118) = param_1 + 0x120;
  *(undefined ***)(param_1 + 0x120) = &PTR_FUN_10149aa80;
  FUN_1004778c4(0x40c00000,0x41400000,param_1 + 0x120,param_1);
  lVar1 = FUN_10049fe0c(param_1 + 0x100);
  FUN_1004747d0(param_1);
  *(undefined4 *)(lVar1 + 0x40) = 0x40000;
  plVar2 = (long *)FUN_100485fa8(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x38))(plVar2,PTR_s_Buff_Stunned_10185a208);
  local_40[0] = 0x40000000;
  local_38 = 1;
  (**(code **)(*plVar2 + 0x18))(plVar2,local_40);
  FUN_100486124(lVar1 + 0x10);
  return;
}




void FUN_10048134c(long param_1,undefined8 *param_2)

{
  long lVar1;
  long *plVar2;
  undefined4 local_30 [2];
  undefined4 local_28;
  
  *param_2 = "Effect_Hero053_B_Proj";
  param_2[4] = "Effect_Hero053_B_Impact";
  *(undefined8 *)(param_1 + 0x88) = 0x3e4ccccd3e99999a;
  *(undefined4 *)(param_1 + 0x90) = 0x3f333333;
  *(undefined4 *)(param_1 + 0xcc) = 0x40c00000;
  *(undefined8 *)(param_1 + 0x13c) = 0x7f7fffff7f7fffff;
  *(undefined8 *)(param_1 + 0x134) = 0x7f7fffff7f7fffff;
  *(undefined4 *)(param_1 + 0x144) = 0x7f7fffff;
  *(undefined4 *)(param_1 + 0x148) = 0x7f7fffff;
  *(undefined4 *)(param_1 + 0x14c) = 0;
  *(long *)(param_1 + 0x118) = param_1 + 0x120;
  *(undefined ***)(param_1 + 0x120) = &PTR_FUN_10149aa08;
  *(undefined8 *)(param_1 + 0x128) = *(undefined8 *)(param_1 + 0x6c);
  *(undefined4 *)(param_1 + 0x130) = *(undefined4 *)(param_1 + 0x74);
  *(undefined8 *)(param_1 + 0x150) = 0x40000000;
  FUN_100476ac4(0x3e99999a,0x3e99999a,0,param_1 + 0x120,param_1);
  lVar1 = FUN_10049fe0c(param_1 + 0x100);
  FUN_1004747d0(param_1);
  *(undefined4 *)(lVar1 + 0x40) = 0x40000;
  plVar2 = (long *)FUN_100485fa8(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x38))(plVar2,PTR_s_Buff_Stunned_10185a208);
  local_30[0] = 0x40000000;
  local_28 = 1;
  (**(code **)(*plVar2 + 0x18))(plVar2,local_30);
  FUN_100486124(lVar1 + 0x10);
  return;
}




void FUN_100481470(long param_1,undefined8 *param_2)

{
  long lVar1;
  long *plVar2;
  undefined4 local_30 [2];
  undefined4 local_28;
  
  *param_2 = "Effect_Hero053_B_Proj";
  param_2[4] = "Effect_Hero053_B_Impact";
  *(undefined8 *)(param_1 + 0x88) = 0x3e4ccccd3e99999a;
  *(undefined4 *)(param_1 + 0x90) = 0x3f333333;
  *(undefined4 *)(param_1 + 0xcc) = 0x40c00000;
  *(undefined8 *)(param_1 + 0x13c) = 0x7f7fffff7f7fffff;
  *(undefined8 *)(param_1 + 0x134) = 0x7f7fffff7f7fffff;
  *(undefined4 *)(param_1 + 0x144) = 0x7f7fffff;
  *(undefined4 *)(param_1 + 0x148) = 0x7f7fffff;
  *(undefined4 *)(param_1 + 0x14c) = 0;
  *(long *)(param_1 + 0x118) = param_1 + 0x120;
  *(undefined ***)(param_1 + 0x120) = &PTR_FUN_10149aa08;
  *(undefined8 *)(param_1 + 0x128) = *(undefined8 *)(param_1 + 0x6c);
  *(undefined4 *)(param_1 + 0x130) = *(undefined4 *)(param_1 + 0x74);
  *(undefined8 *)(param_1 + 0x150) = 0x40000000;
  FUN_100476ac4(0x3e99999a,0x3e99999a,0,param_1 + 0x120,param_1);
  lVar1 = FUN_10049fe0c(param_1 + 0x100);
  FUN_1004747d0(param_1);
  *(undefined4 *)(lVar1 + 0x40) = 0x40000;
  plVar2 = (long *)FUN_100485fa8(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x38))(plVar2,PTR_s_Buff_Stunned_10185a208);
  local_30[0] = 0x40000000;
  local_28 = 1;
  (**(code **)(*plVar2 + 0x18))(plVar2,local_30);
  FUN_100486124(lVar1 + 0x10);
  return;
}




void FUN_100481594(long param_1,undefined8 *param_2)

{
  long lVar1;
  long *plVar2;
  undefined4 local_40 [2];
  undefined4 local_38;
  
  *param_2 = "Effect_Hero053_B_Proj";
  param_2[4] = "Effect_Hero053_B_Impact";
  *(undefined4 *)(param_1 + 0xcc) = 0x40c00000;
  *(undefined4 *)(param_1 + 0x88) = 0x3f000000;
  *(undefined4 *)(param_1 + 0x128) = 0x7f7fffff;
  *(undefined4 *)(param_1 + 300) = 0x7f7fffff;
  *(undefined4 *)(param_1 + 0x130) = 0x7f7fffff;
  *(byte *)(param_1 + 0x148) = *(byte *)(param_1 + 0x148) & 0xc0;
  *(undefined8 *)(param_1 + 0x13c) = 0xbf800000bf800000;
  *(undefined8 *)(param_1 + 0x134) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x144) = 0;
  *(long *)(param_1 + 0x118) = param_1 + 0x120;
  *(undefined ***)(param_1 + 0x120) = &PTR_FUN_10149aa58;
  FUN_10047717c(0x41900000,0x41600000,param_1 + 0x120,param_1);
  *(byte *)(param_1 + 0x148) = *(byte *)(param_1 + 0x148) | 8;
  lVar1 = FUN_10049fe0c(param_1 + 0x100);
  FUN_1004747d0(param_1);
  *(undefined4 *)(lVar1 + 0x40) = 0x40000;
  plVar2 = (long *)FUN_100485fa8(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x38))(plVar2,PTR_s_Buff_Stunned_10185a208);
  local_40[0] = 0x40000000;
  local_38 = 1;
  (**(code **)(*plVar2 + 0x18))(plVar2,local_40);
  lVar1 = FUN_10049fefc(param_1 + 0x100);
  FUN_100486124(lVar1 + 0x10);
  return;
}




void FUN_1004816b4(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  code *local_40;
  undefined4 local_38;
  
  uVar1 = FUN_1004743d4();
  *param_2 = "Effect_Anka_A_Proj";
  param_2[4] = "Effect_Anka_A_Proj_Hit";
  param_2[0xc] = "Sound_Anka_Ability_A1_Impact";
  *(undefined4 *)(param_1 + 0x88) = 0x3f19999a;
  *(undefined4 *)(param_1 + 300) = 0;
  *(undefined1 *)(param_1 + 0x134) = 1;
  *(undefined4 *)(param_1 + 0x128) = 0;
  *(undefined4 *)(param_1 + 0x130) = 0;
  *(long *)(param_1 + 0x118) = param_1 + 0x120;
  *(undefined ***)(param_1 + 0x120) = &PTR_FUN_10149aa80;
  FUN_1003dfe60(uVar1,0,5,0x19,0);
  FUN_1004779e0(param_1 + 0x120,param_1,0);
  lVar2 = FUN_10049fe0c(param_1 + 0x100);
  FUN_1004747d0(param_1);
  *(undefined4 *)(lVar2 + 0x40) = 0x40000;
  lVar2 = lVar2 + 0x10;
  plVar3 = (long *)FUN_10048602c(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))();
  (**(code **)(*plVar3 + 0x38))(plVar3,"Damage",0);
  plVar3 = (long *)FUN_100485fa8(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))(plVar3,PTR_s_Buff_Anka_A_DaggerMark_10185b410);
  local_40 = FUN_10048a0fc;
  local_38 = 3;
  (**(code **)(*plVar3 + 0x18))(plVar3,&local_40);
  FUN_100486124(lVar2);
  lVar2 = FUN_10049feac(param_1 + 0x100);
  FUN_100486124(lVar2 + 0x10);
  return;
}




void FUN_100481808(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  undefined4 local_50 [2];
  undefined4 local_48;
  
  uVar1 = FUN_1004743d4();
  *param_2 = "Effect_Anka_B_Proj";
  param_2[4] = "Effect_Nothing";
  *(undefined4 *)(param_1 + 0x88) = 0x3e99999a;
  *(undefined4 *)(param_1 + 300) = 0;
  *(undefined4 *)(param_1 + 0x128) = 0;
  *(undefined4 *)(param_1 + 0x130) = 0;
  *(undefined1 *)(param_1 + 0x134) = 1;
  *(long *)(param_1 + 0x118) = param_1 + 0x120;
  *(undefined ***)(param_1 + 0x120) = &PTR_FUN_10149aa80;
  FUN_1003dfe60(uVar1,2,4,0x19,0);
  FUN_1004779e0(param_1 + 0x120,param_1,2);
  lVar2 = FUN_10049fe0c(param_1 + 0x100);
  FUN_1004747d0(param_1);
  *(undefined4 *)(lVar2 + 0x40) = 0x40000;
  plVar3 = (long *)FUN_100485fa8(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))(plVar3,PTR_s_Buff_Anka_B_KnifeHit_10185d080);
  local_50[0] = 0x3e99999a;
  local_48 = 1;
  (**(code **)(*plVar3 + 0x18))(plVar3,local_50);
  lVar2 = FUN_10049feac(param_1 + 0x100);
  FUN_100486124(lVar2 + 0x10);
  return;
}




void FUN_100481914(long param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  undefined4 local_30 [2];
  undefined4 local_28;
  
  uVar2 = FUN_1004744e4();
  *param_2 = "Effect_Anka_C_Clone";
  *(undefined4 *)(param_1 + 0x88) = 0x3f8ccccd;
  *(undefined8 *)(param_1 + 0x138) = 0;
  uVar1 = DAT_101dc0b88;
  *(undefined8 *)(param_1 + 0x128) = 0;
  *(undefined8 *)(param_1 + 0x130) = 0;
  *(undefined4 *)(param_1 + 0x130) = uVar1;
  *(long *)(param_1 + 0x118) = param_1 + 0x120;
  *(undefined ***)(param_1 + 0x120) = &PTR_FUN_10149d360;
  FUN_1004766b8(param_1 + 0x120,param_1,uVar2);
  lVar3 = FUN_10049fe0c(param_1 + 0x100);
  FUN_1004747d0(param_1);
  *(undefined4 *)(lVar3 + 0x40) = 0x40000;
  plVar4 = (long *)FUN_100485fa8(lVar3 + 0x10);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x38))(plVar4,PTR_s_Buff_Anka_C_InitialDashHit_10185d088);
  local_30[0] = 0x3f000000;
  local_28 = 1;
  (**(code **)(*plVar4 + 0x18))(plVar4,local_30);
  return;
}




void FUN_1004819e4(long param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  undefined4 local_30 [2];
  undefined4 local_28;
  
  uVar2 = FUN_1004744e4();
  *param_2 = "Effect_Anka_C_Clone";
  *(undefined4 *)(param_1 + 0x88) = 0x3f8ccccd;
  *(undefined8 *)(param_1 + 0x138) = 0;
  uVar1 = DAT_101dc0b88;
  *(undefined8 *)(param_1 + 0x128) = 0;
  *(undefined8 *)(param_1 + 0x130) = 0;
  *(undefined4 *)(param_1 + 0x130) = uVar1;
  *(long *)(param_1 + 0x118) = param_1 + 0x120;
  *(undefined ***)(param_1 + 0x120) = &PTR_FUN_10149d360;
  FUN_1004766b8(param_1 + 0x120,param_1,uVar2);
  lVar3 = FUN_10049fe0c(param_1 + 0x100);
  FUN_1004747d0(param_1);
  *(undefined4 *)(lVar3 + 0x40) = 0x40000;
  plVar4 = (long *)FUN_100485fa8(lVar3 + 0x10);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x38))
                             (plVar4,PTR_s_Buff_Anka_C_SecondaryDashHit_10185d090);
  local_30[0] = 0x3f000000;
  local_28 = 1;
  (**(code **)(*plVar4 + 0x18))(plVar4,local_30);
  return;
}




void FUN_100481ab4(undefined8 param_1,undefined8 param_2)

{
  FUN_10048a110(param_1,param_2,0);
  return;
}




void FUN_100481abc(undefined8 param_1,undefined8 param_2)

{
  FUN_10048a110(param_1,param_2,2);
  return;
}




void FUN_100481ac4(undefined8 param_1,undefined8 param_2)

{
  FUN_10048a330(param_1,param_2,0);
  return;
}




void FUN_100481acc(undefined8 param_1,undefined8 param_2)

{
  FUN_10048a330(param_1,param_2,2);
  return;
}




void FUN_100481ad4(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  undefined4 uVar5;
  code *local_50;
  undefined4 local_48;
  
  uVar1 = FUN_1004743d4();
  *param_2 = "Effect_Silvernail_B";
  param_2[4] = "Effect_Silvernail_B_Impact";
  param_2[0xc] = "Sound_Silvernail_B_Impact";
  uVar2 = FUN_1010a1520();
  lVar3 = FUN_1010a0e0c(uVar2,0,"*KindredSoundBalance*",0);
  uVar5 = FUN_1003cc63c(*(undefined4 *)(lVar3 + 0x4f8));
  *(undefined4 *)(param_2 + 0x15) = uVar5;
  *(undefined8 *)(param_1 + 0x13c) = 0x7f7fffff7f7fffff;
  *(undefined8 *)(param_1 + 0x134) = 0x7f7fffff7f7fffff;
  *(undefined4 *)(param_1 + 0x144) = 0x7f7fffff;
  *(undefined4 *)(param_1 + 0x148) = 0x7f7fffff;
  *(undefined4 *)(param_1 + 0x14c) = 0;
  *(undefined4 *)(param_1 + 0x150) = 0;
  *(undefined4 *)(param_1 + 0x154) = 0;
  *(long *)(param_1 + 0x118) = param_1 + 0x120;
  *(undefined ***)(param_1 + 0x120) = &PTR_FUN_10149aa08;
  uVar5 = FUN_1003dfe60(uVar1,3,3,0x19,0);
  *(undefined8 *)(param_1 + 0x128) = *(undefined8 *)(param_1 + 0x6c);
  *(undefined4 *)(param_1 + 0x130) = *(undefined4 *)(param_1 + 0x74);
  *(undefined4 *)(param_1 + 0x150) = uVar5;
  FUN_100476ac4(0x3f000000,0,0x3f32b8c3,param_1 + 0x120,param_1);
  uVar1 = FUN_1003dfe60(uVar1,3,4,0x19,0);
  lVar3 = FUN_10049fefc(param_1 + 0x100);
  lVar3 = lVar3 + 0x10;
  plVar4 = (long *)FUN_10048602c(lVar3);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x30))(uVar1,0x3ee66666,0xbf800000,plVar4,0x40000,0);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x38))();
  (**(code **)(*plVar4 + 0x38))(plVar4,"DAMAGE",3);
  plVar4 = (long *)FUN_100485fa8(lVar3);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x30))(uVar1,0x3ee66666,plVar4,0x40000,0);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x38))
                             (plVar4,PTR_s_Buff_Silvernail_B_DamageOverTime_10185d108);
  local_50 = FUN_10048a498;
  local_48 = 3;
  (**(code **)(*plVar4 + 0x18))(plVar4,&local_50);
  plVar4 = (long *)FUN_100485fa8(lVar3);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x30))(uVar1,0x3ee66666,plVar4,0x40000,0);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x38))(plVar4,PTR_s_Buff_RevealToBestowersTeam_10185be10);
  local_50 = FUN_10048a498;
  local_48 = 3;
  (**(code **)(*plVar4 + 0x18))(plVar4,&local_50);
  lVar3 = FUN_100486124(lVar3);
  *(undefined1 *)(lVar3 + 0x18) = 1;
  return;
}




void FUN_100481d24(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  code *local_60;
  undefined4 local_58;
  code *local_50;
  undefined4 local_48;
  
  uVar1 = FUN_1004743d4();
  *param_2 = "Effect_Silvernail_C";
  *(undefined4 *)(param_1 + 0x88) = 0x3e99999a;
  *(undefined4 *)(param_1 + 300) = 0;
  *(undefined4 *)(param_1 + 0x128) = 0;
  *(undefined4 *)(param_1 + 0x130) = 0;
  *(undefined1 *)(param_1 + 0x134) = 1;
  *(long *)(param_1 + 0x118) = param_1 + 0x120;
  *(undefined ***)(param_1 + 0x120) = &PTR_FUN_10149aa80;
  FUN_1003dfe60(uVar1,4,3,0x19,0);
  FUN_1004779e0(param_1 + 0x120,param_1,4);
  lVar2 = FUN_10049fe0c(param_1 + 0x100);
  FUN_1004747d0(param_1);
  *(undefined4 *)(lVar2 + 0x40) = 0x40000;
  lVar2 = lVar2 + 0x10;
  plVar3 = (long *)FUN_100485fa8(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))(plVar3,PTR_s_Buff_Silvernail_C_HitEffect_10185d110)
  ;
  local_50._0_4_ = 0x3dcccccd;
  local_48 = 1;
  (**(code **)(*plVar3 + 0x18))(plVar3,&local_50);
  plVar3 = (long *)FUN_100485fa8(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))
                             (plVar3,PTR_s_Buff_Silvernail_C_BeingKnockedBa_10185d118);
  local_50 = (code *)CONCAT44(local_50._4_4_,0x3f000000);
  local_48 = 1;
  (**(code **)(*plVar3 + 0x18))(plVar3,&local_50);
  plVar3 = (long *)FUN_1004a026c(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,param_1);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))(plVar3,param_1);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x50))();
  local_50 = FUN_10048a5dc;
  local_48 = 3;
  plVar3 = (long *)(**(code **)(*plVar3 + 0x10))(plVar3,&local_50);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x80))();
  local_60 = FUN_10048a4ac;
  local_58 = 4;
  plVar3 = (long *)(**(code **)(*plVar3 + 0x28))(plVar3,&local_60);
  (**(code **)(*plVar3 + 0x60))(plVar3,FUN_10048a50c);
  lVar2 = FUN_10049feac(param_1 + 0x100);
  FUN_100486124(lVar2 + 0x10);
  return;
}




void FUN_100481f04(long param_1,undefined8 *param_2)

{
  byte bVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  float fVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  code *local_60;
  undefined4 local_58;
  
  uVar2 = FUN_1004743d4();
  *param_2 = "Effect_Hero057_A";
  *(undefined4 *)(param_1 + 0x88) = 0x3ecccccd;
  lVar5 = param_1 + 0x120;
  *(undefined4 *)(param_1 + 0x128) = 0x7f7fffff;
  *(undefined4 *)(param_1 + 300) = 0x7f7fffff;
  *(undefined4 *)(param_1 + 0x130) = 0x7f7fffff;
  *(byte *)(param_1 + 0x148) = *(byte *)(param_1 + 0x148) & 0xc0;
  *(undefined8 *)(param_1 + 0x13c) = 0xbf800000bf800000;
  *(undefined8 *)(param_1 + 0x134) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x144) = 0;
  *(long *)(param_1 + 0x118) = lVar5;
  *(undefined ***)(param_1 + 0x120) = &PTR_FUN_10149aa58;
  uVar7 = FUN_1003dfe60(uVar2,0,3,0x19,0);
  uVar2 = FUN_1003dfe60(uVar2,0,2,0x19,0);
  FUN_10047717c(uVar7,uVar2,lVar5,param_1);
  bVar1 = *(byte *)(param_1 + 0x148) & 0xfc;
  *(byte *)(param_1 + 0x148) = bVar1;
  *(undefined4 *)(param_1 + 0x138) = 0x3f333333;
  fVar8 = *(float *)(param_1 + 0x13c);
  fVar9 = *(float *)(param_1 + 0x134);
  fVar6 = (float)FUN_100477248(lVar5);
  *(float *)(param_1 + 0x134) = (fVar9 * fVar8 - fVar6) / fVar8 + 0.7;
  *(byte *)(param_1 + 0x148) = bVar1 | 8;
  lVar5 = param_1 + 0x100;
  lVar3 = FUN_10049fe0c(lVar5);
  FUN_1004747d0(param_1);
  *(undefined4 *)(lVar3 + 0x40) = 0x40000;
  plVar4 = (long *)FUN_10048602c(lVar3 + 0x10);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x38))();
  local_60 = FUN_1003cda0c;
  local_58 = 3;
  (**(code **)(*plVar4 + 0x18))(plVar4,&local_60,1,2);
  plVar4 = (long *)FUN_10048602c(lVar3 + 0x10);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x38))();
  local_60 = FUN_10048a628;
  local_58 = 3;
  (**(code **)(*plVar4 + 0x18))(plVar4,&local_60,0,2);
  lVar3 = FUN_10049fe0c(lVar5);
  FUN_1004747d0(param_1);
  *(undefined4 *)(lVar3 + 0x40) = 1;
  *(undefined1 *)(lVar3 + 0x68) = 1;
  lVar3 = FUN_1004a030c(lVar3 + 0x10);
  *(code **)(lVar3 + 0x18) = FUN_10048a5f0;
  lVar5 = FUN_10049fefc(lVar5);
  FUN_100486124(lVar5 + 0x10);
  return;
}




void FUN_100482118(long param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  undefined4 uVar7;
  code *local_60;
  undefined4 local_58;
  code *local_50;
  undefined4 local_48;
  
  *(undefined1 *)(param_1 + 0xd5) = 1;
  uVar2 = FUN_1004743d4();
  *param_2 = "Effect_Yates_A";
  param_2[4] = "Effect_Yates_A_Impact";
  param_2[0xc] = "Sound_Yates_A_Shot_Impact";
  uVar3 = FUN_1010a1520();
  lVar4 = FUN_1010a0e0c(uVar3,0,"*KindredSoundBalance*",0);
  uVar7 = FUN_1003cdee0(*(undefined4 *)(lVar4 + 0x508));
  *(undefined4 *)(param_2 + 0x15) = uVar7;
  param_2[8] = "Effect_Yates_A_Beam";
  param_2[0xb] = "Bone_Mace";
  *(undefined1 *)(param_2 + 0x16) = 1;
  *(undefined4 *)(param_1 + 0x88) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x128) = 0;
  *(undefined4 *)(param_1 + 300) = 0;
  *(undefined4 *)(param_1 + 0x130) = 0;
  *(undefined1 *)(param_1 + 0x134) = 1;
  *(long *)(param_1 + 0x118) = param_1 + 0x120;
  *(undefined ***)(param_1 + 0x120) = &PTR_FUN_10149aa80;
  FUN_1003dfe60(uVar2,0,3,0x19,0);
  FUN_1004779e0(param_1 + 0x120,param_1,0);
  lVar4 = FUN_10049fe0c(param_1 + 0x100);
  FUN_1004747d0(param_1);
  *(undefined4 *)(lVar4 + 0x40) = 0x40000;
  lVar4 = lVar4 + 0x10;
  plVar5 = (long *)FUN_1004a026c(lVar4);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x40))();
  plVar5 = (long *)(**(code **)(*plVar5 + 0x50))();
  plVar5 = (long *)(**(code **)(*plVar5 + 0x70))();
  local_50 = FUN_10048a63c;
  local_48 = 3;
  plVar5 = (long *)(**(code **)(*plVar5 + 0x10))(plVar5,&local_50);
  local_60 = FUN_10048a650;
  local_58 = 3;
  plVar5 = (long *)(**(code **)(*plVar5 + 0x28))(plVar5,&local_60);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x48))();
  (**(code **)(*plVar5 + 0x50))();
  plVar5 = (long *)FUN_10048602c(lVar4);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x38))();
  (**(code **)(*plVar5 + 0x38))(plVar5,"DAMAGE",0);
  lVar6 = FUN_10049fe5c(lVar4);
  *(undefined4 *)(lVar6 + 0x10) = 1;
  plVar5 = (long *)FUN_100485fa8(lVar4);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x38))(plVar5,PTR_s_Buff_Yates_A_ReturnShot_10185d160);
  local_50 = (code *)CONCAT44(local_50._4_4_,0x3dcccccd);
  local_48 = 1;
  (**(code **)(*plVar5 + 0x18))(plVar5,&local_50);
  lVar4 = FUN_100486124(lVar4);
  *(undefined1 *)(lVar4 + 0x18) = 1;
  lVar4 = FUN_10049feac(param_1 + 0x100);
  lVar4 = lVar4 + 0x10;
  lVar6 = FUN_1004a0178(lVar4);
  *(byte *)(lVar6 + 0x40) = *(byte *)(lVar6 + 0x40) & 0xfe;
  *(code **)(lVar6 + 0x30) = FUN_100476024;
  *(undefined4 *)(lVar6 + 0x38) = 4;
  puVar1 = PTR_s_Buff_Yates_A_ReturnShot_10185d160;
  *(char **)(lVar6 + 0x10) = "*GenericLocator*";
  *(undefined **)(lVar6 + 0x18) = puVar1;
  *(undefined4 *)(lVar6 + 0x20) = 0x40a00000;
  lVar6 = FUN_10049fe5c(lVar4);
  *(undefined4 *)(lVar6 + 0x10) = 1;
  FUN_100486124(lVar4);
  return;
}




void FUN_1004823a0(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined4 uVar4;
  
  uVar1 = FUN_1004743d4();
  *param_2 = "Effect_Yates_A_Return";
  param_2[0xc] = "Sound_Yates_A_Shot_Impact";
  uVar2 = FUN_1010a1520();
  lVar3 = FUN_1010a0e0c(uVar2,0,"*KindredSoundBalance*",0);
  uVar4 = FUN_1003cdee0(*(undefined4 *)(lVar3 + 0x508));
  *(undefined4 *)(param_2 + 0x15) = uVar4;
  param_2[8] = "Effect_Yates_A_Beam";
  param_2[0xb] = "Bone_Mace";
  *(undefined2 *)(param_2 + 0x16) = 0x101;
  *(undefined4 *)(param_1 + 0x88) = 0x3dcccccd;
  *(undefined4 *)(param_1 + 0x13c) = 0;
  uVar2 = NEON_fmov(0xbf800000,4);
  *(undefined8 *)(param_1 + 0x128) = uVar2;
  *(undefined4 *)(param_1 + 0x130) = 0;
  *(undefined8 *)(param_1 + 0x134) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x140) = 0;
  *(long *)(param_1 + 0x118) = param_1 + 0x120;
  *(undefined ***)(param_1 + 0x120) = &PTR_FUN_10149aaa8;
  uVar4 = FUN_1003dfe60(uVar1,0,5,0x19,0);
  *(undefined4 *)(param_1 + 0x128) = uVar4;
  lVar3 = FUN_10049fdbc(param_1 + 0x100);
  lVar3 = FUN_100486124(lVar3 + 0x10);
  *(undefined1 *)(lVar3 + 0x18) = 1;
  lVar3 = FUN_10049fefc(param_1 + 0x100);
  FUN_100486124(lVar3 + 0x10);
  return;
}




void FUN_1004824b4(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  
  *(undefined1 *)(param_1 + 0xd5) = 1;
  uVar1 = FUN_1004743d4();
  *(undefined4 *)(param_1 + 0x88) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x130) = 0;
  *(undefined8 *)(param_1 + 0x138) = 0;
  *(undefined8 *)(param_1 + 0x128) = 0;
  *(undefined4 *)(param_1 + 0x130) = DAT_101dc0b88;
  *(long *)(param_1 + 0x118) = param_1 + 0x120;
  *(undefined ***)(param_1 + 0x120) = &PTR_FUN_10149d360;
  FUN_1004766b8(param_1 + 0x120,param_1,uVar1);
  lVar2 = FUN_10049fe0c(param_1 + 0x100);
  FUN_1004747d0(param_1);
  *(undefined4 *)(lVar2 + 0x40) = 0x40000;
  plVar3 = (long *)FUN_10048602c(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))();
                    /* WARNING: Could not recover jumptable at 0x000100482558. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x38))(plVar3,"DAMAGE",3);
  return;
}




void FUN_10048255c(undefined8 param_1,undefined8 param_2)

{
  FUN_100489504(param_1,param_2,0);
  return;
}




void FUN_100482564(undefined8 param_1,undefined8 param_2)

{
  FUN_100489504(param_1,param_2,0);
  return;
}




void FUN_10048256c(undefined8 param_1,undefined8 param_2)

{
  FUN_100489504(param_1,param_2,2);
  return;
}




void FUN_100482574(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined4 uVar5;
  undefined1 auStack_34 [4];
  
  *param_2 = "Effect_Ylva_A_ChargingShot";
  param_2[4] = "Effect_Ylva_A_ChargingShot_Impact";
  param_2[0xc] = "Sound_Ylva_A_Partial_Charged_Shot_Impact_01";
  param_2[0xd] = "Sound_Ylva_A_Partial_Charged_Shot_Impact_02";
  param_2[0xe] = "Sound_Ylva_A_Partial_Charged_Shot_Impact_03";
  uVar1 = FUN_1010a1520();
  lVar2 = FUN_1010a0e0c(uVar1,0,"*KindredSoundBalance*",0);
  uVar5 = FUN_1003c9258(*(undefined4 *)(lVar2 + 0x584));
  *(undefined4 *)(param_2 + 0x15) = uVar5;
  uVar5 = FUN_1004895ec(param_1,auStack_34);
  *(undefined8 *)(param_1 + 0x134) = 0x3f800000;
  *(undefined8 *)(param_1 + 300) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x13c) = 0;
  *(undefined1 *)(param_1 + 0x140) = 0;
  *(long *)(param_1 + 0x118) = param_1 + 0x120;
  *(undefined ***)(param_1 + 0x120) = &PTR_FUN_10149aaa8;
  *(undefined4 *)(param_1 + 0x128) = 0x41e00000;
  lVar2 = FUN_10049fdbc(param_1 + 0x100);
  lVar2 = lVar2 + 0x10;
  lVar3 = FUN_10049ff4c(lVar2);
  *(undefined4 *)(lVar3 + 0x10) = uVar5;
  *(undefined8 *)(lVar3 + 0x28) = 0x100000001;
  *(undefined4 *)(lVar3 + 0x30) = 0;
  plVar4 = (long *)FUN_10048602c(lVar2);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x38))();
  plVar4 = (long *)(**(code **)(*plVar4 + 0x38))(plVar4,"DAMAGE",0);
  (**(code **)(*plVar4 + 0x70))(plVar4,1);
  FUN_100486124(lVar2);
  return;
}




void FUN_1004826b4(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined4 uVar5;
  code *local_30;
  undefined4 local_28;
  
  *param_2 = "Effect_Ylva_A_ChargedShot";
  param_2[4] = "Effect_Ylva_A_ChargedShot_Impact";
  param_2[0xc] = "Sound_Ylva_A_Partial_Charged_Shot_Impact_01";
  param_2[0xd] = "Sound_Ylva_A_Partial_Charged_Shot_Impact_02";
  param_2[0xe] = "Sound_Ylva_A_Partial_Charged_Shot_Impact_03";
  uVar1 = FUN_1010a1520();
  lVar2 = FUN_1010a0e0c(uVar1,0,"*KindredSoundBalance*",0);
  uVar5 = FUN_1003c9258(*(undefined4 *)(lVar2 + 0x584));
  *(undefined4 *)(param_2 + 0x15) = uVar5;
  *(undefined4 *)(param_1 + 0x13c) = 0;
  *(undefined8 *)(param_1 + 300) = 0xbf800000;
  *(undefined8 *)(param_1 + 0x134) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x140) = 0;
  *(long *)(param_1 + 0x118) = param_1 + 0x120;
  *(undefined ***)(param_1 + 0x120) = &PTR_FUN_10149aaa8;
  *(undefined4 *)(param_1 + 0x128) = 0x42280000;
  lVar2 = FUN_10049fdbc(param_1 + 0x100);
  lVar2 = lVar2 + 0x10;
  lVar3 = FUN_10049ff4c(lVar2);
  *(code **)(lVar3 + 0x20) = FUN_100489804;
  plVar4 = (long *)FUN_10048602c(lVar2);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x38))();
  plVar4 = (long *)(**(code **)(*plVar4 + 0x38))(plVar4,"DAMAGE",0);
  (**(code **)(*plVar4 + 0x70))(plVar4,1);
  plVar4 = (long *)FUN_100485fa8(lVar2);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x38))(plVar4,PTR_s_Buff_Stunned_10185a208);
  local_30 = FUN_1004898f8;
  local_28 = 3;
  (**(code **)(*plVar4 + 0x18))(plVar4,&local_30);
  FUN_100486124(lVar2);
  return;
}




void FUN_10048281c(long param_1,undefined8 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  char *pcVar8;
  undefined4 uVar9;
  code *local_40;
  undefined4 local_38;
  
  *param_2 = "Effect_Caine_DefaultAttack";
  param_2[4] = "Effect_Caine_DefaultAttack_Impact";
  param_2[0xc] = "Sound_Caine_Attack_Impact_1";
  param_2[0xd] = "Sound_Caine_Attack_Impact_2";
  param_2[0xe] = "Sound_Caine_Attack_Impact_3";
  uVar2 = FUN_1010a1520();
  lVar3 = FUN_1010a0e0c(uVar2,0,"*KindredSoundBalance*",0);
  uVar9 = FUN_1003d0044(*(undefined4 *)(lVar3 + 0x5cc));
  *(undefined4 *)(param_2 + 0x15) = uVar9;
  *(undefined4 *)(param_1 + 0x13c) = 0;
  *(undefined8 *)(param_1 + 300) = 0xbf800000;
  *(undefined8 *)(param_1 + 0x134) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x140) = 0;
  *(long *)(param_1 + 0x118) = param_1 + 0x120;
  *(undefined ***)(param_1 + 0x120) = &PTR_FUN_10149aaa8;
  *(undefined4 *)(param_1 + 0x128) = 0x41a00000;
  lVar3 = FUN_10049fdbc(param_1 + 0x100);
  lVar3 = lVar3 + 0x10;
  plVar4 = (long *)FUN_10048602c(lVar3);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x38))();
  (**(code **)(*plVar4 + 0x58))(plVar4,1);
  lVar5 = FUN_100486650(lVar3);
  lVar6 = FUN_1004a01c8(lVar5 + 0x10);
  if (PTR_s_Ability__Caine__B_101859f98 == (undefined *)0x0) {
    uVar7 = 0;
  }
  else {
    uVar7 = 0x811c9dc5;
    cVar1 = *PTR_s_Ability__Caine__B_101859f98;
    pcVar8 = PTR_s_Ability__Caine__B_101859f98;
    while (cVar1 != '\0') {
      pcVar8 = pcVar8 + 1;
      uVar7 = (uVar7 ^ (int)cVar1) * 0x1000193;
      cVar1 = *pcVar8;
    }
  }
  *(uint *)(lVar6 + 8) = uVar7;
  *(undefined4 *)(lVar6 + 0xc) = 1;
  plVar4 = (long *)FUN_100486d38(lVar5 + 0x58);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x30))();
  plVar4 = (long *)(**(code **)(*plVar4 + 0x10))(plVar4,PTR_s_Ability__Caine__B_101859f98);
  local_40 = FUN_10048a670;
  local_38 = 3;
  (**(code **)(*plVar4 + 0x30))(plVar4,&local_40);
  FUN_100486124(lVar3);
  return;
}




void FUN_1004829c8(long param_1,undefined8 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  char *pcVar8;
  undefined4 uVar9;
  code *local_50;
  undefined4 local_48;
  
  *param_2 = "Effect_Caine_A_Bullet";
  param_2[4] = "Effect_Caine_DefaultAttack_Impact";
  param_2[0xc] = "Sound_Caine_Attack_Impact_1";
  param_2[0xd] = "Sound_Caine_Attack_Impact_2";
  param_2[0xe] = "Sound_Caine_Attack_Impact_3";
  uVar2 = FUN_1010a1520();
  lVar3 = FUN_1010a0e0c(uVar2,0,"*KindredSoundBalance*",0);
  uVar9 = FUN_1003d0044(*(undefined4 *)(lVar3 + 0x5dc));
  *(undefined4 *)(param_2 + 0x15) = uVar9;
  *(undefined4 *)(param_1 + 0x88) = 0x3e99999a;
  *(undefined4 *)(param_1 + 0x128) = 0;
  *(undefined4 *)(param_1 + 300) = 0;
  *(undefined4 *)(param_1 + 0x130) = 0;
  *(undefined1 *)(param_1 + 0x134) = 1;
  *(long *)(param_1 + 0x118) = param_1 + 0x120;
  *(undefined ***)(param_1 + 0x120) = &PTR_FUN_10149aa80;
  FUN_1004779e0(0x41c80000,param_1 + 0x120,param_1,0);
  lVar3 = FUN_10049fe0c(param_1 + 0x100);
  FUN_1004747d0(param_1);
  *(undefined4 *)(lVar3 + 0x40) = 0x40000;
  lVar3 = lVar3 + 0x10;
  plVar4 = (long *)FUN_10048602c(lVar3);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x38))();
  plVar4 = (long *)(**(code **)(*plVar4 + 0x38))(plVar4,"DAMAGE",0);
  (**(code **)(*plVar4 + 0x70))(plVar4,1);
  plVar4 = (long *)FUN_100485fa8(lVar3);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x38))(plVar4,PTR_s_Buff_Caine_A_Slow_10185d228);
  local_50 = FUN_10048a684;
  local_48 = 3;
  (**(code **)(*plVar4 + 0x18))(plVar4,&local_50);
  lVar5 = FUN_100486650(lVar3);
  lVar6 = FUN_1004a01c8(lVar5 + 0x10);
  if (PTR_s_Ability__Caine__B_101859f98 == (undefined *)0x0) {
    uVar7 = 0;
  }
  else {
    uVar7 = 0x811c9dc5;
    cVar1 = *PTR_s_Ability__Caine__B_101859f98;
    pcVar8 = PTR_s_Ability__Caine__B_101859f98;
    while (cVar1 != '\0') {
      pcVar8 = pcVar8 + 1;
      uVar7 = (uVar7 ^ (int)cVar1) * 0x1000193;
      cVar1 = *pcVar8;
    }
  }
  *(uint *)(lVar6 + 8) = uVar7;
  *(undefined4 *)(lVar6 + 0xc) = 1;
  plVar4 = (long *)FUN_100486d38(lVar5 + 0x58);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x30))();
  plVar4 = (long *)(**(code **)(*plVar4 + 0x10))(plVar4,PTR_s_Ability__Caine__B_101859f98);
  local_50 = FUN_10048a670;
  local_48 = 3;
  (**(code **)(*plVar4 + 0x30))(plVar4,&local_50);
  FUN_100486124(lVar3);
  lVar3 = FUN_10049feac(param_1 + 0x100);
  FUN_100486124(lVar3 + 0x10);
  return;
}




void FUN_100482bf4(long param_1,undefined8 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  uint uVar6;
  char *pcVar7;
  undefined4 uVar8;
  code *local_50;
  undefined4 local_48;
  
  *param_2 = "Effect_Caine_C_PierceBullet";
  param_2[4] = "Effect_Caine_C_Explosion";
  param_2[0xc] = "Sound_Caine_C_Explosion";
  uVar2 = FUN_1010a1520();
  lVar3 = FUN_1010a0e0c(uVar2,0,"*KindredSoundBalance*",0);
  uVar8 = FUN_1003d0044(*(undefined4 *)(lVar3 + 0x5f4));
  *(undefined4 *)(param_2 + 0x15) = uVar8;
  *(undefined4 *)(param_1 + 0x88) = 0x3e99999a;
  *(undefined4 *)(param_1 + 0x128) = 0;
  *(undefined4 *)(param_1 + 300) = 0;
  *(undefined4 *)(param_1 + 0x130) = 0;
  *(undefined1 *)(param_1 + 0x134) = 1;
  *(long *)(param_1 + 0x118) = param_1 + 0x120;
  *(undefined ***)(param_1 + 0x120) = &PTR_FUN_10149aa80;
  FUN_1004779e0(0x42480000,param_1 + 0x120,param_1,2);
  lVar3 = FUN_10049fe0c(param_1 + 0x100);
  FUN_1004747d0(param_1);
  *(undefined4 *)(lVar3 + 0x40) = 0x40000;
  lVar3 = lVar3 + 0x10;
  plVar4 = (long *)FUN_10048602c(lVar3);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x38))();
  plVar4 = (long *)(**(code **)(*plVar4 + 0x38))(plVar4,"DAMAGE",2);
  (**(code **)(*plVar4 + 0x70))(plVar4,1);
  plVar4 = (long *)FUN_100485fa8(lVar3);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x38))
                             (plVar4,PTR_s_Buff_Caine_C_Passthrough_PFX_10185d240);
  local_50 = (code *)CONCAT44(local_50._4_4_,0x3dcccccd);
  local_48 = 1;
  (**(code **)(*plVar4 + 0x18))(plVar4,&local_50);
  lVar3 = FUN_100486650(lVar3);
  lVar5 = FUN_1004a01c8(lVar3 + 0x10);
  if (PTR_s_Ability__Caine__B_101859f98 == (undefined *)0x0) {
    uVar6 = 0;
  }
  else {
    uVar6 = 0x811c9dc5;
    cVar1 = *PTR_s_Ability__Caine__B_101859f98;
    pcVar7 = PTR_s_Ability__Caine__B_101859f98;
    while (cVar1 != '\0') {
      pcVar7 = pcVar7 + 1;
      uVar6 = (uVar6 ^ (int)cVar1) * 0x1000193;
      cVar1 = *pcVar7;
    }
  }
  *(uint *)(lVar5 + 8) = uVar6;
  *(undefined4 *)(lVar5 + 0xc) = 1;
  plVar4 = (long *)FUN_100486d38(lVar3 + 0x58);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x30))();
  plVar4 = (long *)(**(code **)(*plVar4 + 0x10))(plVar4,PTR_s_Ability__Caine__B_101859f98);
  local_50 = FUN_10048a670;
  local_48 = 3;
  (**(code **)(*plVar4 + 0x30))(plVar4,&local_50);
  lVar3 = FUN_10049feac(param_1 + 0x100);
  plVar4 = (long *)FUN_100485fa8(lVar3 + 0x10);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x30))(0x40000000,0x3f266666,plVar4,0x40000,0);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x38))(plVar4,PTR_s_Buff_Caine_C_Damage_10185d258);
  local_50 = (code *)CONCAT44(local_50._4_4_,0x3dcccccd);
  local_48 = 1;
  (**(code **)(*plVar4 + 0x18))(plVar4,&local_50);
  lVar3 = FUN_100486124(lVar3 + 0x10);
  *(undefined1 *)(lVar3 + 0x18) = 1;
  return;
}




void FUN_100482e64(undefined8 param_1,undefined8 param_2)

{
  FUN_10048a698(param_1,param_2,0);
  return;
}




void FUN_100482e6c(undefined8 param_1,undefined8 param_2)

{
  FUN_10048a698(param_1,param_2,2);
  return;
}




void FUN_100482e74(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  undefined4 uVar4;
  
  *param_2 = "Effect_Warhawk_Enhanced_AA_Shot";
  param_2[4] = "Effect_Warhawk_Enhanced_AA_Shot_Impact";
  param_2[0xc] = "Sound_Warhawk_Enhanced_Basic_Attack_Impact";
  uVar1 = FUN_1010a1520();
  lVar2 = FUN_1010a0e0c(uVar1,0,"*KindredSoundBalance*",0);
  uVar4 = FUN_1003d04f8(*(undefined4 *)(lVar2 + 0x61c));
  *(undefined4 *)(param_2 + 0x15) = uVar4;
  *(undefined4 *)(param_1 + 0x13c) = 0;
  *(undefined8 *)(param_1 + 300) = 0xbf800000;
  *(undefined8 *)(param_1 + 0x134) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x140) = 0;
  *(long *)(param_1 + 0x118) = param_1 + 0x120;
  *(undefined ***)(param_1 + 0x120) = &PTR_FUN_10149aaa8;
  *(undefined4 *)(param_1 + 0x128) = 0x41a00000;
  lVar2 = FUN_10049fdbc(param_1 + 0x100);
  plVar3 = (long *)FUN_10048602c(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))();
  (**(code **)(*plVar3 + 0x20))(plVar3,"EMPOWERED_BONUS_ATTACK");
  FUN_100486124(lVar2 + 0x10);
  return;
}




void FUN_100482f54(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  undefined4 uVar4;
  
  *param_2 = "Effect_Warhawk_A_Shot";
  param_2[4] = "Effect_Warhawk_A_Shot_Impact";
  param_2[0xc] = "Sound_Warhawk_A_Attack_Impact_1";
  param_2[0xd] = "Sound_Warhawk_A_Attack_Impact_2";
  param_2[0xe] = "Sound_Warhawk_A_Attack_Impact_3";
  uVar1 = FUN_1010a1520();
  lVar2 = FUN_1010a0e0c(uVar1,0,"*KindredSoundBalance*",0);
  uVar4 = FUN_1003d04f8(*(undefined4 *)(lVar2 + 0x624));
  *(undefined4 *)(param_2 + 0x15) = uVar4;
  *(undefined4 *)(param_1 + 0x88) = 0x3ecccccd;
  *(undefined4 *)(param_1 + 0x128) = 0;
  *(undefined4 *)(param_1 + 300) = 0;
  *(undefined4 *)(param_1 + 0x130) = 0;
  *(undefined1 *)(param_1 + 0x134) = 1;
  *(long *)(param_1 + 0x118) = param_1 + 0x120;
  *(undefined ***)(param_1 + 0x120) = &PTR_FUN_10149aa80;
  FUN_1004779e0(0x41c00000,param_1 + 0x120,param_1,0);
  lVar2 = FUN_10049fe0c(param_1 + 0x100);
  FUN_1004747d0(param_1);
  *(undefined4 *)(lVar2 + 0x40) = 0x40000;
  plVar3 = (long *)FUN_10048602c(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(0x40000000,0x3f266666,0xbf800000,plVar3,0x40000,0);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))();
  (**(code **)(*plVar3 + 0x38))(plVar3,"DAMAGE",0);
  FUN_100486124(lVar2 + 0x10);
  lVar2 = FUN_10049feac(param_1 + 0x100);
  lVar2 = FUN_100486124(lVar2 + 0x10);
  *(undefined1 *)(lVar2 + 0x18) = 1;
  return;
}




void FUN_1004830a8(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  *param_2 = "Effect_Warhawk_B_Grenade_Proj";
  param_2[4] = "Effect_Warhawk_A_Shot_Impact";
  uVar1 = FUN_1010a1520();
  lVar2 = FUN_1010a0e0c(uVar1,0,"*KindredSoundBalance*",0);
  uVar4 = FUN_1003d04f8(*(undefined4 *)(lVar2 + 0x628));
  *(undefined4 *)(param_2 + 0x15) = uVar4;
  *(undefined1 *)(param_2 + 0x16) = 1;
  *(undefined8 *)(param_1 + 0x13c) = 0x7f7fffff7f7fffff;
  *(undefined8 *)(param_1 + 0x134) = 0x7f7fffff7f7fffff;
  *(undefined4 *)(param_1 + 0x144) = 0x7f7fffff;
  *(undefined4 *)(param_1 + 0x148) = 0x7f7fffff;
  *(undefined4 *)(param_1 + 0x14c) = 0;
  *(undefined4 *)(param_1 + 0x154) = 0;
  *(long *)(param_1 + 0x118) = param_1 + 0x120;
  *(undefined ***)(param_1 + 0x120) = &PTR_FUN_10149aa08;
  *(float *)(param_1 + 0x128) = *(float *)(param_1 + 0x6c);
  *(float *)(param_1 + 300) = *(float *)(param_1 + 0x70);
  fVar5 = *(float *)(param_1 + 0x6c) - *(float *)(param_1 + 0xec);
  *(float *)(param_1 + 0x130) = *(float *)(param_1 + 0x74);
  fVar6 = *(float *)(param_1 + 0x70) - *(float *)(param_1 + 0xf0);
  fVar7 = *(float *)(param_1 + 0x74) - *(float *)(param_1 + 0xf4);
  *(float *)(param_1 + 0x150) = SQRT(fVar5 * fVar5 + fVar6 * fVar6 + fVar7 * fVar7) * 0.05;
  FUN_100476c0c(0x3f000000,0,0x3f800000,param_1 + 0x120,param_1);
  lVar2 = FUN_10049fefc(param_1 + 0x100);
  lVar3 = FUN_1004a0178(lVar2 + 0x10);
  *(char **)(lVar3 + 0x10) = "*Warhawk_Grenade*";
  *(byte *)(lVar3 + 0x40) = *(byte *)(lVar3 + 0x40) & 0xfe;
  FUN_100486124(lVar2 + 0x10);
  return;
}




void FUN_1004831cc(long param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined4 local_40 [2];
  undefined4 local_38;
  
  *param_2 = "Effect_Warhawk_A_Shot";
  param_2[4] = "Effect_Warhawk_A_Shot_Impact";
  param_2[0xc] = "Sound_Warhawk_C_Impact";
  uVar3 = FUN_1010a1520();
  lVar4 = FUN_1010a0e0c(uVar3,0,"*KindredSoundBalance*",0);
  uVar6 = FUN_1003d04f8(*(undefined4 *)(lVar4 + 0x628));
  *(undefined4 *)(param_2 + 0x15) = uVar6;
  *(undefined4 *)(param_1 + 0x88) = 0x3e99999a;
  *(undefined8 *)(param_1 + 0x13c) = 0x7f7fffff7f7fffff;
  *(undefined8 *)(param_1 + 0x134) = 0x7f7fffff7f7fffff;
  *(undefined4 *)(param_1 + 0x144) = 0x7f7fffff;
  *(undefined4 *)(param_1 + 0x148) = 0x7f7fffff;
  *(undefined4 *)(param_1 + 0x14c) = 0;
  *(undefined4 *)(param_1 + 0x154) = 0;
  *(long *)(param_1 + 0x118) = param_1 + 0x120;
  *(undefined ***)(param_1 + 0x120) = &PTR_FUN_10149aa08;
  *(float *)(param_1 + 0x128) = *(float *)(param_1 + 0x6c);
  *(float *)(param_1 + 300) = *(float *)(param_1 + 0x70);
  fVar7 = *(float *)(param_1 + 0x6c) - *(float *)(param_1 + 0xec);
  *(float *)(param_1 + 0x130) = *(float *)(param_1 + 0x74);
  fVar8 = *(float *)(param_1 + 0x70) - *(float *)(param_1 + 0xf0);
  fVar9 = *(float *)(param_1 + 0x74) - *(float *)(param_1 + 0xf4);
  *(float *)(param_1 + 0x150) = SQRT(fVar7 * fVar7 + fVar8 * fVar8 + fVar9 * fVar9) * 0.05;
  iVar1 = _rand();
  iVar2 = _rand();
  FUN_100476ac4((float)iVar1 * 9.3132266e-11 + 0.4,(float)iVar2 * 2.3283064e-10 + 0.05,0x3f123a14,
                param_1 + 0x120,param_1);
  lVar4 = FUN_10049fdbc(param_1 + 0x100);
  lVar4 = lVar4 + 0x10;
  plVar5 = (long *)FUN_100485fa8(lVar4);
  (**(code **)(*plVar5 + 0x38))(plVar5,PTR_s_Buff_Warhawk_C_Burn_10185d2b0);
  plVar5 = (long *)FUN_100485fa8(lVar4);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x30))(0x3fc00000,0x3f266666,plVar5,0x40000,1);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x38))(plVar5,PTR_s_Buff_Warhawk_C_Damage_10185d2a8);
  local_40[0] = 0x3f800000;
  local_38 = 1;
  (**(code **)(*plVar5 + 0x18))(plVar5,local_40);
  lVar4 = FUN_100486124(lVar4);
  *(undefined1 *)(lVar4 + 0x18) = 1;
  return;
}




void FUN_1004833b4(undefined8 param_1,undefined8 *param_2)

{
  FUN_10048a788(param_1,param_2,0);
  *param_2 = "Effect_Ishtar_BasicAttack_Alt";
  param_2[4] = "Effect_Ishtar_BasicAttack_Impact";
  return;
}




void FUN_1004833f0(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined4 uVar3;
  
  FUN_10048a788(param_1,param_2,2);
  *param_2 = "Effect_Ishtar_BasicAttack_Crit";
  param_2[4] = "Effect_Ishtar_BasicAttack_Impact";
  param_2[0xc] = "Sound_Ishtar_Crit_Attack_01";
  param_2[0xd] = "Sound_Ishtar_Crit_Attack_02";
  param_2[0xe] = "Sound_Ishtar_Crit_Attack_03";
  uVar1 = FUN_1010a1520();
  lVar2 = FUN_1010a0e0c(uVar1,0,"*KindredSoundBalance*",0);
  uVar3 = FUN_1003d0cf8(*(undefined4 *)(lVar2 + 0x670));
  *(undefined4 *)(param_2 + 0x15) = uVar3;
  return;
}




void FUN_100483470(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  undefined4 uVar4;
  
  *param_2 = "Effect_Ishtar_BasicAttack_Empowered";
  param_2[4] = "Effect_Ishtar_BasicAttack_Impact";
  param_2[0xc] = "Sound_Ishtar_Empowered_Impact_01";
  param_2[0xd] = "Sound_Ishtar_Empowered_Impact_02";
  param_2[0xe] = "Sound_Ishtar_Empowered_Impact_03";
  uVar1 = FUN_1010a1520();
  lVar2 = FUN_1010a0e0c(uVar1,0,"*KindredSoundBalance*",0);
  uVar4 = FUN_1003d0cf8(*(undefined4 *)(lVar2 + 0x678));
  *(undefined4 *)(param_2 + 0x15) = uVar4;
  *(undefined4 *)(param_1 + 0x13c) = 0;
  *(undefined8 *)(param_1 + 300) = 0xbf800000;
  *(undefined8 *)(param_1 + 0x134) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x140) = 0;
  *(long *)(param_1 + 0x118) = param_1 + 0x120;
  *(undefined ***)(param_1 + 0x120) = &PTR_FUN_10149aaa8;
  *(undefined4 *)(param_1 + 0x128) = 0x41a00000;
  lVar2 = FUN_10049fdbc(param_1 + 0x100);
  plVar3 = (long *)FUN_10048602c(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))();
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))(plVar3,"DAMAGE",2);
  (**(code **)(*plVar3 + 0x70))(plVar3,1);
  FUN_100486124(lVar2 + 0x10);
  return;
}




void FUN_100483578(long param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  undefined4 uVar4;
  undefined4 local_40 [2];
  undefined4 local_38;
  
  *(undefined1 *)(param_1 + 0xd5) = 1;
  *(char **)(param_2 + 0x20) = "Effect_Ishtar_BasicAttack_Impact";
  *(char **)(param_2 + 0x60) = "Sound_Ishtar_AbilityA_Impact_01";
  *(char **)(param_2 + 0x68) = "Sound_Ishtar_AbilityA_Impact_02";
  *(char **)(param_2 + 0x70) = "Sound_Ishtar_AbilityA_Impact_03";
  uVar1 = FUN_1010a1520();
  lVar2 = FUN_1010a0e0c(uVar1,0,"*KindredSoundBalance*",0);
  uVar4 = FUN_1003d0cf8(*(undefined4 *)(lVar2 + 0x688));
  *(undefined4 *)(param_2 + 0xa8) = uVar4;
  uVar1 = FUN_1004743d4(param_1);
  *(undefined4 *)(param_1 + 0x88) = 0x3fc00000;
  *(undefined8 *)(param_1 + 0x130) = 0;
  *(undefined8 *)(param_1 + 0x138) = 0;
  *(undefined8 *)(param_1 + 0x128) = 0;
  *(undefined4 *)(param_1 + 0x130) = DAT_101dc0b88;
  *(long *)(param_1 + 0x118) = param_1 + 0x120;
  *(undefined ***)(param_1 + 0x120) = &PTR_FUN_10149d360;
  FUN_1004766b8(param_1 + 0x120,param_1,uVar1);
  lVar2 = FUN_10049fe0c(param_1 + 0x100);
  FUN_1004747d0(param_1);
  *(undefined4 *)(lVar2 + 0x40) = 0x40000;
  plVar3 = (long *)FUN_100485fa8(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))
                             (plVar3,PTR_s_Buff_Ishtar_Minion_A_DashDamage_10185d378);
  local_40[0] = 0x3f000000;
  local_38 = 1;
  (**(code **)(*plVar3 + 0x18))(plVar3,local_40);
  return;
}




void FUN_100483698(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  undefined4 uVar4;
  undefined4 local_40 [2];
  undefined4 local_38;
  
  *param_2 = "Effect_Ishtar_Minion_BasicAttack";
  param_2[4] = "Effect_Ishtar_Minion_BasicAttack_Impact";
  param_2[0xc] = "build://Sounds/Ishtar/SFX/Default/ishtar_blade_basic_attack_1.mp3";
  param_2[0xd] = "build://Sounds/Ishtar/SFX/Default/ishtar_blade_basic_attack_2.mp3";
  param_2[0xe] = "build://Sounds/Ishtar/SFX/Default/ishtar_blade_basic_attack_3.mp3";
  uVar1 = FUN_1010a1520();
  lVar2 = FUN_1010a0e0c(uVar1,0,"*KindredSoundBalance*",0);
  uVar4 = FUN_1003d0cf8(*(undefined4 *)(lVar2 + 0x680));
  *(undefined4 *)(param_2 + 0x15) = uVar4;
  *(undefined4 *)(param_1 + 0x88) = 0x3e99999a;
  *(undefined4 *)(param_1 + 0x13c) = 0;
  *(undefined8 *)(param_1 + 300) = 0xbf800000;
  *(undefined8 *)(param_1 + 0x134) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x140) = 0;
  *(long *)(param_1 + 0x118) = param_1 + 0x120;
  *(undefined ***)(param_1 + 0x120) = &PTR_FUN_10149aaa8;
  *(undefined4 *)(param_1 + 0x128) = 0x420c0000;
  lVar2 = FUN_10049fdbc(param_1 + 0x100);
  plVar3 = (long *)FUN_100485fa8(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))
                             (plVar3,PTR_s_Buff_Ishtar_Minion_BasicAttackDa_10185d370);
  local_40[0] = 0x3e4ccccd;
  local_38 = 1;
  (**(code **)(*plVar3 + 0x18))(plVar3,local_40);
  lVar2 = FUN_100486124(lVar2 + 0x10);
  *(undefined1 *)(lVar2 + 0x18) = 1;
  lVar2 = FUN_10049feac(param_1 + 0x100);
  lVar2 = FUN_100486124(lVar2 + 0x10);
  *(undefined1 *)(lVar2 + 0x18) = 1;
  return;
}




void FUN_1004837e0(undefined8 param_1,undefined8 param_2)

{
  FUN_10048a884(param_1,param_2,0);
  return;
}




void FUN_1004837e8(undefined8 param_1,undefined8 param_2)

{
  FUN_10048a884(param_1,param_2,2);
  return;
}




void FUN_1004837f0(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  undefined4 uVar4;
  code *local_40;
  undefined4 local_38;
  
  FUN_1004743d4();
  *param_2 = "Effect_Viola_A_Shot";
  *(undefined2 *)((long)param_2 + 0xa4) = 0;
  *(undefined1 *)((long)param_2 + 0xa6) = 0;
  param_2[4] = "Effect_Viola_A_Impact";
  param_2[0xc] = "Sound_Viola_A_Impact";
  uVar1 = FUN_1010a1520();
  lVar2 = FUN_1010a0e0c(uVar1,0,"*KindredSoundBalance*",0);
  uVar4 = FUN_1003d0fb8(*(undefined4 *)(lVar2 + 0x6b8));
  *(undefined4 *)(param_2 + 0x15) = uVar4;
  *(undefined4 *)(param_1 + 0x88) = 0x3f333333;
  *(undefined4 *)(param_1 + 0x128) = 0;
  *(undefined4 *)(param_1 + 300) = 0;
  *(undefined4 *)(param_1 + 0x130) = 0;
  *(undefined1 *)(param_1 + 0x134) = 1;
  *(long *)(param_1 + 0x118) = param_1 + 0x120;
  *(undefined ***)(param_1 + 0x120) = &PTR_FUN_10149aa80;
  FUN_1004779e0(0x41c00000,param_1 + 0x120,param_1,0);
  lVar2 = FUN_10049fe0c(param_1 + 0x100);
  FUN_1004747d0(param_1);
  *(undefined4 *)(lVar2 + 0x40) = 1;
  *(undefined1 *)(lVar2 + 0x68) = 1;
  plVar3 = (long *)FUN_100485fa8(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))(plVar3,PTR_s_Buff_Viola_A_Shield_10185d3d0);
  local_40 = FUN_10048a98c;
  local_38 = 3;
  (**(code **)(*plVar3 + 0x18))(plVar3,&local_40);
  lVar2 = FUN_10049feac(param_1 + 0x100);
  FUN_100486124(lVar2 + 0x10);
  return;
}




void FUN_100483924(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  undefined4 uVar4;
  code *local_40;
  undefined4 local_38;
  
  FUN_1004743d4();
  *param_2 = "Effect_Viola_B_Shot";
  *(undefined2 *)((long)param_2 + 0xa4) = 0xff;
  *(undefined1 *)((long)param_2 + 0xa6) = 0;
  param_2[4] = "Effect_Viola_B_Impact";
  param_2[0xc] = "Sound_Viola_B_Impact";
  uVar1 = FUN_1010a1520();
  lVar2 = FUN_1010a0e0c(uVar1,0,"*KindredSoundBalance*",0);
  uVar4 = FUN_1003d0fb8(*(undefined4 *)(lVar2 + 0x6c0));
  *(undefined4 *)(param_2 + 0x15) = uVar4;
  *(undefined4 *)(param_1 + 0x88) = 0x3f333333;
  *(undefined4 *)(param_1 + 0x128) = 0;
  *(undefined4 *)(param_1 + 300) = 0;
  *(undefined4 *)(param_1 + 0x130) = 0;
  *(undefined1 *)(param_1 + 0x134) = 1;
  *(long *)(param_1 + 0x118) = param_1 + 0x120;
  *(undefined ***)(param_1 + 0x120) = &PTR_FUN_10149aa80;
  FUN_1004779e0(0x41c00000,param_1 + 0x120,param_1,1);
  lVar2 = FUN_10049fe0c(param_1 + 0x100);
  FUN_1004747d0(param_1);
  *(undefined4 *)(lVar2 + 0x40) = 0x40000;
  lVar2 = lVar2 + 0x10;
  plVar3 = (long *)FUN_10048602c(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))();
  (**(code **)(*plVar3 + 0x38))(plVar3,"DAMAGE",1);
  plVar3 = (long *)FUN_100485fa8(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))(plVar3,PTR_s_Buff_Viola_B_Slow_10185d3d8);
  local_40 = FUN_10048a9a0;
  local_38 = 3;
  (**(code **)(*plVar3 + 0x18))(plVar3,&local_40);
  FUN_100486124(lVar2);
  lVar2 = FUN_10049feac(param_1 + 0x100);
  FUN_100486124(lVar2 + 0x10);
  return;
}




void FUN_100483a94(long param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  undefined4 local_50 [2];
  undefined4 local_48;
  
  *(undefined1 *)(param_1 + 0xd5) = 1;
  uVar1 = FUN_1004743d4();
  *(char **)(param_2 + 0x20) = "Effect_Miho_C_ShotImpact";
  *(undefined2 *)(param_2 + 0xa4) = 0x5a00;
  *(undefined1 *)(param_2 + 0xa6) = 0x82;
  *(undefined4 *)(param_1 + 0x88) = 0x40400000;
  *(undefined4 *)(param_1 + 300) = 0;
  *(undefined4 *)(param_1 + 0x128) = 0;
  *(undefined4 *)(param_1 + 0x130) = 0;
  *(long *)(param_1 + 0x118) = param_1 + 0x120;
  *(undefined ***)(param_1 + 0x120) = &PTR_FUN_10149aa80;
  *(undefined1 *)(param_1 + 0x134) = 0;
  FUN_1003dfe60(uVar1,2,2,0x19,0);
  FUN_1004779e0(param_1 + 0x120,param_1,2);
  lVar6 = param_1 + 0x100;
  lVar2 = FUN_10049fe0c(lVar6);
  FUN_1004747d0(param_1);
  *(undefined4 *)(lVar2 + 0x40) = 0x40000;
  lVar3 = FUN_100486650(lVar2 + 0x10);
  lVar4 = FUN_1004a0010(lVar3 + 0x10);
  *(undefined **)(lVar4 + 8) = PTR_s_Buff_Miho_Talent_TalentA_10185d318;
  plVar5 = (long *)FUN_100485fa8(lVar3 + 0x58);
  (**(code **)(*plVar5 + 0x38))(plVar5,PTR_s_Buff_Miho_TalentA_Marker_10185d330);
  plVar5 = (long *)FUN_100485fa8(lVar2 + 0x10);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x38))(plVar5,PTR_s_Buff_Miho_C_ApplyDamage_10185d308);
  local_50[0] = 0x3f800000;
  local_48 = 1;
  (**(code **)(*plVar5 + 0x18))(plVar5,local_50);
  lVar2 = FUN_10049fe0c(lVar6);
  FUN_1004747d0(param_1);
  *(undefined4 *)(lVar2 + 0x40) = 1;
  *(undefined1 *)(lVar2 + 0x68) = 1;
  lVar2 = FUN_100486650(lVar2 + 0x10);
  lVar3 = FUN_1004a0010(lVar2 + 0x10);
  *(undefined **)(lVar3 + 8) = PTR_s_Buff_Miho_Talent_TalentB_10185d320;
  plVar5 = (long *)FUN_100485fa8(lVar2 + 0x58);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x38))(plVar5,PTR_s_Buff_Miho_TalentB_Heal_10185d338);
  local_50[0] = 0x3f800000;
  local_48 = 1;
  (**(code **)(*plVar5 + 0x18))(plVar5,local_50);
  lVar6 = FUN_10049feac(lVar6);
  lVar6 = FUN_100486124(lVar6 + 0x10);
  *(undefined1 *)(lVar6 + 0x18) = 1;
  return;
}




void FUN_100483c5c(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  undefined4 local_40 [2];
  undefined4 local_38;
  
  *(undefined1 *)(param_1 + 0xd5) = 1;
  uVar1 = FUN_1004743d4();
  *(undefined4 *)(param_1 + 0x88) = 0x3fcccccd;
  *(undefined8 *)(param_1 + 0x130) = 0;
  *(undefined8 *)(param_1 + 0x138) = 0;
  *(undefined8 *)(param_1 + 0x128) = 0;
  *(undefined4 *)(param_1 + 0x130) = DAT_101dc0b88;
  *(long *)(param_1 + 0x118) = param_1 + 0x120;
  *(undefined ***)(param_1 + 0x120) = &PTR_FUN_10149d360;
  FUN_1004766b8(param_1 + 0x120,param_1,uVar1);
  lVar2 = FUN_10049fe0c(param_1 + 0x100);
  FUN_1004747d0(param_1);
  *(undefined4 *)(lVar2 + 0x40) = 0x40000;
  plVar3 = (long *)FUN_100485fa8(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))(plVar3,PTR_s_Buff_Miho_A_ApplyDamage_10185b788);
  local_40[0] = 0x3f000000;
  local_38 = 1;
  (**(code **)(*plVar3 + 0x18))(plVar3,local_40);
  return;
}




void FUN_100483d28(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  
  *(undefined1 *)(param_1 + 0xd5) = 1;
  uVar1 = FUN_1004743d4();
  *(undefined4 *)(param_1 + 0x88) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x130) = 0;
  *(undefined8 *)(param_1 + 0x138) = 0;
  *(undefined8 *)(param_1 + 0x128) = 0;
  *(undefined4 *)(param_1 + 0x130) = DAT_101dc0b88;
  *(long *)(param_1 + 0x118) = param_1 + 0x120;
  *(undefined ***)(param_1 + 0x120) = &PTR_FUN_10149d360;
  FUN_1004766b8(param_1 + 0x120,param_1,uVar1);
  lVar2 = FUN_10049fe0c(param_1 + 0x100);
  FUN_1004747d0(param_1);
  *(undefined4 *)(lVar2 + 0x40) = 0x40000;
  plVar3 = (long *)FUN_10048602c(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))();
  (**(code **)(*plVar3 + 0x38))(plVar3,"DAMAGE",1);
  lVar2 = FUN_10049feac(param_1 + 0x100);
  lVar2 = FUN_100486124(lVar2 + 0x10);
  *(undefined1 *)(lVar2 + 0x18) = 1;
  return;
}




void FUN_100483df4(long param_1,long param_2)

{
  undefined4 uVar1;
  long lVar2;
  long *plVar3;
  undefined4 local_70 [2];
  undefined4 local_68;
  code *local_60;
  undefined4 local_58;
  code *local_50;
  undefined4 local_48;
  undefined4 local_40 [2];
  undefined4 local_38;
  
  *(undefined1 *)(param_1 + 0xd5) = 1;
  *(char **)(param_2 + 0x20) = "Effect_Amael_Ability01_Impact";
  lVar2 = FUN_1004743d4();
  uVar1 = *(undefined4 *)(lVar2 + 0x30);
  *(long *)(param_1 + 0xd8) = lVar2 + 0x28;
  *(undefined4 *)(param_1 + 0xe0) = uVar1;
  *(undefined4 *)(param_1 + 0xe8) = 0;
  FUN_10047467c(param_1);
  *(undefined4 *)(param_1 + 0x88) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x130) = 0;
  *(undefined8 *)(param_1 + 0x138) = 0;
  *(undefined8 *)(param_1 + 0x128) = 0;
  *(undefined4 *)(param_1 + 0x130) = DAT_101dc0b88;
  *(long *)(param_1 + 0x118) = param_1 + 0x120;
  *(undefined ***)(param_1 + 0x120) = &PTR_FUN_10149d360;
  FUN_1004766b8(param_1 + 0x120,param_1,lVar2);
  lVar2 = FUN_10049fe0c(param_1 + 0x100);
  FUN_1004747d0(param_1);
  *(undefined4 *)(lVar2 + 0x40) = 0x200000;
  plVar3 = (long *)FUN_10048602c(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))();
  (**(code **)(*plVar3 + 0x38))(plVar3,"DAMAGE",0);
  plVar3 = (long *)FUN_1004a026c(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x50))();
  local_40[0] = 0x42700000;
  local_38 = 1;
  plVar3 = (long *)(**(code **)(*plVar3 + 0x68))(plVar3,local_40);
  local_50 = FUN_10048a9b4;
  local_48 = 3;
  plVar3 = (long *)(**(code **)(*plVar3 + 0x10))(plVar3,&local_50);
  local_60 = FUN_10048a9c8;
  local_58 = 3;
  plVar3 = (long *)(**(code **)(*plVar3 + 0x28))(plVar3,&local_60);
  local_70[0] = 0x41200000;
  local_68 = 1;
  (**(code **)(*plVar3 + 0x30))(plVar3,local_70);
  return;
}




void FUN_100483f70(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  undefined4 uVar4;
  code *local_50;
  undefined4 local_48;
  code *local_40;
  undefined4 local_38;
  
  uVar1 = FUN_1004743d4();
  *param_2 = "Effect_HeroPLU_TossEngineProjectile";
  param_2[4] = "Effect_HeroPLU_Explosion";
  param_2[0xc] = "Sound_HeroPLU_KABOOM";
  *(undefined8 *)(param_1 + 0x13c) = 0x7f7fffff7f7fffff;
  *(undefined8 *)(param_1 + 0x134) = 0x7f7fffff7f7fffff;
  *(undefined4 *)(param_1 + 0x144) = 0x7f7fffff;
  *(undefined4 *)(param_1 + 0x148) = 0x7f7fffff;
  *(undefined4 *)(param_1 + 0x14c) = 0;
  *(undefined4 *)(param_1 + 0x154) = 0;
  *(undefined4 *)(param_1 + 0x150) = 0;
  *(long *)(param_1 + 0x118) = param_1 + 0x120;
  *(undefined ***)(param_1 + 0x120) = &PTR_FUN_10149aa08;
  uVar4 = FUN_1003dfe60(uVar1,7,6,0x19,0);
  *(undefined8 *)(param_1 + 0x128) = *(undefined8 *)(param_1 + 0x6c);
  *(undefined4 *)(param_1 + 0x130) = *(undefined4 *)(param_1 + 0x74);
  *(undefined4 *)(param_1 + 0x150) = uVar4;
  FUN_100476ac4(0x3e4ccccd,0,0x3f123a14,param_1 + 0x120,param_1);
  lVar2 = FUN_10049fefc(param_1 + 0x100);
  lVar2 = lVar2 + 0x10;
  plVar3 = (long *)FUN_10048602c(lVar2);
  uVar4 = FUN_1003dfe60(uVar1,7,2,0x19,0);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(uVar4,0xbf800000,0xbf800000,plVar3,0x40000,0);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))();
  local_40 = FUN_1004891d4;
  local_38 = 3;
  (**(code **)(*plVar3 + 0x18))(plVar3,&local_40,1,2);
  plVar3 = (long *)FUN_1004a026c(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(0x40e00000,0xbf800000,0xbf800000,plVar3,0x200000);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x50))();
  local_40 = FUN_1004891e8;
  local_38 = 3;
  plVar3 = (long *)(**(code **)(*plVar3 + 0x20))(plVar3,&local_40);
  local_50 = FUN_1004891fc;
  local_48 = 3;
  plVar3 = (long *)(**(code **)(*plVar3 + 0x10))(plVar3,&local_50);
  (**(code **)(*plVar3 + 0x48))();
  FUN_100486124(lVar2);
  return;
}




void FUN_100484168(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  undefined4 uVar4;
  code *local_40;
  undefined4 local_38;
  
  uVar1 = FUN_1004743d4();
  *param_2 = "Effect_HeroPLU_DebrisProjectile";
  param_2[4] = "Effect_HeroPLU_DebrisProjectileImpact";
  param_2[0xc] = "Sound_HeroPLU_Debris_Impact";
  uVar4 = FUN_1003dfe60(uVar1,8,5,0x19,0);
  *(undefined4 *)(param_1 + 0x88) = uVar4;
  *(undefined4 *)(param_1 + 300) = 0;
  *(undefined4 *)(param_1 + 0x128) = 0;
  *(undefined4 *)(param_1 + 0x130) = 0;
  *(undefined1 *)(param_1 + 0x134) = 1;
  *(long *)(param_1 + 0x118) = param_1 + 0x120;
  *(undefined ***)(param_1 + 0x120) = &PTR_FUN_10149aa80;
  FUN_1003dfe60(uVar1,8,6,0x19,0);
  FUN_1004779e0(param_1 + 0x120,param_1,8);
  lVar2 = FUN_10049fe0c(param_1 + 0x100);
  FUN_1004747d0(param_1);
  *(undefined4 *)(lVar2 + 0x40) = 0x440000;
  lVar2 = lVar2 + 0x10;
  plVar3 = (long *)FUN_10048602c(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))();
  local_40 = FUN_100489210;
  local_38 = 3;
  (**(code **)(*plVar3 + 0x18))(plVar3,&local_40,2,2);
  plVar3 = (long *)FUN_100485fa8(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))(plVar3,PTR_s_Buff_Stunned_10185a208);
  local_40 = FUN_100489224;
  local_38 = 3;
  (**(code **)(*plVar3 + 0x18))(plVar3,&local_40);
  FUN_100486124(lVar2);
  lVar2 = FUN_10049feac(param_1 + 0x100);
  FUN_100486124(lVar2 + 0x10);
  return;
}




void FUN_1004842e0(long param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  iVar1 = _rand();
  *param_2 = (&PTR_s_Effect_TurretCore_10149aac0)[iVar1 % 10];
  param_2[4] = "Effect_Skye_C_Explosion";
  *(undefined8 *)(param_1 + 0x13c) = 0x7f7fffff7f7fffff;
  *(undefined8 *)(param_1 + 0x134) = 0x7f7fffff7f7fffff;
  *(undefined4 *)(param_1 + 0x144) = 0x7f7fffff;
  *(undefined4 *)(param_1 + 0x148) = 0x7f7fffff;
  *(undefined4 *)(param_1 + 0x14c) = 0;
  *(undefined4 *)(param_1 + 0x154) = 0;
  *(undefined4 *)(param_1 + 0x150) = 0;
  *(long *)(param_1 + 0x118) = param_1 + 0x120;
  *(undefined ***)(param_1 + 0x120) = &PTR_FUN_10149aa08;
  iVar1 = _rand();
  *(float *)(param_1 + 0x128) = *(float *)(param_1 + 0x6c);
  *(float *)(param_1 + 300) = *(float *)(param_1 + 0x70);
  fVar5 = *(float *)(param_1 + 0x6c) - *(float *)(param_1 + 0xec);
  *(float *)(param_1 + 0x130) = *(float *)(param_1 + 0x74);
  fVar6 = *(float *)(param_1 + 0x70) - *(float *)(param_1 + 0xf0);
  fVar7 = *(float *)(param_1 + 0x74) - *(float *)(param_1 + 0xf4);
  *(float *)(param_1 + 0x150) =
       SQRT(fVar5 * fVar5 + fVar6 * fVar6 + fVar7 * fVar7) / ((float)iVar1 * 2.3283064e-09 + 5.0);
  iVar1 = _rand();
  iVar2 = _rand();
  iVar3 = _rand();
  FUN_100476c0c((float)iVar1 * 9.3132266e-11 + 0.4,(float)iVar2 * 4.876394e-10 + -0.5235988,
                (float)iVar3 * 2.3283064e-09 + 2.0,param_1 + 0x120,param_1);
  lVar4 = FUN_10049fefc(param_1 + 0x100);
  lVar4 = FUN_100486124(lVar4 + 0x10);
  *(undefined1 *)(lVar4 + 0x18) = 1;
  return;
}




void FUN_100484468(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  
  uVar1 = FUN_1004743d4();
  *param_2 = "Effect_LanceBall_Lance_HoldingBall";
  *(undefined4 *)((long)param_2 + 0xac) = 0x3f000000;
  *(undefined2 *)((long)param_2 + 0xa4) = 0x66ff;
  *(undefined1 *)((long)param_2 + 0xa6) = 0;
  *(undefined4 *)(param_1 + 0x88) = 0x3dcccccd;
  *(undefined4 *)(param_1 + 0xcc) = 0x45610000;
  *(undefined4 *)(param_1 + 0x128) = 0;
  *(undefined4 *)(param_1 + 300) = 0;
  *(undefined4 *)(param_1 + 0x130) = 0;
  *(undefined1 *)(param_1 + 0x134) = 1;
  *(long *)(param_1 + 0x118) = param_1 + 0x120;
  *(undefined ***)(param_1 + 0x120) = &PTR_FUN_10149aa80;
  FUN_1003dfe60(uVar1,3,2,0x19,0);
  FUN_1004779e0(param_1 + 0x120,param_1,3);
  lVar2 = FUN_10049fe0c(param_1 + 0x100);
  FUN_1004747d0(param_1);
  *(undefined4 *)(lVar2 + 0x40) = 1;
  plVar3 = (long *)FUN_100485fa8(lVar2 + 0x10);
  (**(code **)(*plVar3 + 0x38))(plVar3,DAT_10185b588);
  lVar2 = FUN_100486124(lVar2 + 0x10);
  *(undefined1 *)(lVar2 + 0x18) = 1;
  lVar2 = FUN_10049fe0c(param_1 + 0x100);
  FUN_1004747d0(param_1);
  *(undefined4 *)(lVar2 + 0x40) = 1;
  *(undefined1 *)(lVar2 + 0x68) = 1;
  plVar3 = (long *)FUN_100485fa8(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))(plVar3,DAT_10185b588);
  (**(code **)(*plVar3 + 0x28))(plVar3,FUN_10048a664);
  lVar2 = FUN_100486124(lVar2 + 0x10);
  *(undefined1 *)(lVar2 + 0x18) = 1;
  return;
}




void FUN_1004845b8(long param_1,undefined8 *param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  
  *param_2 = "Effect_LanceBall_Lance_HoldingBall";
  *(undefined4 *)((long)param_2 + 0xac) = 0x3f000000;
  *(undefined2 *)((long)param_2 + 0xa4) = 0x66ff;
  *(undefined1 *)((long)param_2 + 0xa6) = 0;
  *(undefined4 *)(param_1 + 0x88) = 0x3e99999a;
  *(undefined4 *)(param_1 + 0xcc) = 0x45610000;
  *(undefined8 *)(param_1 + 0x13c) = 0x7f7fffff7f7fffff;
  *(undefined8 *)(param_1 + 0x134) = 0x7f7fffff7f7fffff;
  *(undefined4 *)(param_1 + 0x144) = 0x7f7fffff;
  *(undefined4 *)(param_1 + 0x148) = 0x7f7fffff;
  *(undefined4 *)(param_1 + 0x14c) = 0;
  *(long *)(param_1 + 0x118) = param_1 + 0x120;
  *(undefined ***)(param_1 + 0x120) = &PTR_FUN_10149aa08;
  *(undefined8 *)(param_1 + 0x128) = *(undefined8 *)(param_1 + 0x6c);
  *(undefined4 *)(param_1 + 0x130) = *(undefined4 *)(param_1 + 0x74);
  *(undefined8 *)(param_1 + 0x150) = 0x3f800000;
  FUN_100476c0c(0x3f000000,0,0x40800000,param_1 + 0x120,param_1);
  lVar3 = param_1 + 0x100;
  lVar1 = FUN_10049fe0c(lVar3);
  FUN_1004747d0(param_1);
  *(undefined4 *)(lVar1 + 0x40) = 1;
  plVar2 = (long *)FUN_100485fa8(lVar1 + 0x10);
  (**(code **)(*plVar2 + 0x38))(plVar2,DAT_10185b588);
  lVar1 = FUN_100486124(lVar1 + 0x10);
  *(undefined1 *)(lVar1 + 0x18) = 1;
  lVar1 = FUN_10049fe0c(lVar3);
  FUN_1004747d0(param_1);
  *(undefined4 *)(lVar1 + 0x40) = 1;
  *(undefined1 *)(lVar1 + 0x68) = 1;
  plVar2 = (long *)FUN_100485fa8(lVar1 + 0x10);
  (**(code **)(*plVar2 + 0x38))(plVar2,DAT_10185b588);
  lVar1 = FUN_100486124(lVar1 + 0x10);
  *(undefined1 *)(lVar1 + 0x18) = 1;
  lVar3 = FUN_10049feac(lVar3);
  lVar3 = FUN_100486124(lVar3 + 0x10);
  *(undefined1 *)(lVar3 + 0x18) = 1;
  return;
}




void FUN_10048471c(long param_1,undefined8 *param_2)

{
  long lVar1;
  long *plVar2;
  
  *param_2 = "Effect_LanceBall_Lance_HoldingBall";
  *(undefined4 *)((long)param_2 + 0xac) = 0x3f000000;
  *(undefined2 *)((long)param_2 + 0xa4) = 100;
  *(undefined1 *)((long)param_2 + 0xa6) = 100;
  *(undefined4 *)(param_1 + 0x88) = 0x3e99999a;
  *(undefined8 *)(param_1 + 0x13c) = 0x7f7fffff7f7fffff;
  *(undefined8 *)(param_1 + 0x134) = 0x7f7fffff7f7fffff;
  *(undefined4 *)(param_1 + 0x144) = 0x7f7fffff;
  *(undefined4 *)(param_1 + 0x148) = 0x7f7fffff;
  *(undefined4 *)(param_1 + 0x14c) = 0;
  *(long *)(param_1 + 0x118) = param_1 + 0x120;
  *(undefined ***)(param_1 + 0x120) = &PTR_FUN_10149aa08;
  *(undefined8 *)(param_1 + 0x128) = *(undefined8 *)(param_1 + 0x6c);
  *(undefined4 *)(param_1 + 0x130) = *(undefined4 *)(param_1 + 0x74);
  *(undefined8 *)(param_1 + 0x150) = 0x3f800000;
  FUN_100476c0c(0x3f000000,0,0x40800000,param_1 + 0x120,param_1);
  lVar1 = FUN_10049fdbc(param_1 + 0x100);
  plVar2 = (long *)FUN_100485fa8(lVar1 + 0x10);
  (**(code **)(*plVar2 + 0x38))(plVar2,PTR_s_Buff_LanceBall_Center_10185d1e0);
  lVar1 = FUN_100486124(lVar1 + 0x10);
  *(undefined1 *)(lVar1 + 0x18) = 1;
  return;
}




void FUN_1004847fc(long param_1,undefined8 *param_2)

{
  long lVar1;
  long *plVar2;
  
  *param_2 = "Effect_LanceBall_Lance_HoldingBall";
  *(undefined4 *)((long)param_2 + 0xac) = 0x3f000000;
  *(undefined2 *)((long)param_2 + 0xa4) = 0x66ff;
  *(undefined1 *)((long)param_2 + 0xa6) = 0;
  *(undefined4 *)(param_1 + 0x88) = 0x3e99999a;
  *(undefined4 *)(param_1 + 0xcc) = 0x45610000;
  *(undefined8 *)(param_1 + 0x13c) = 0x7f7fffff7f7fffff;
  *(undefined8 *)(param_1 + 0x134) = 0x7f7fffff7f7fffff;
  *(undefined4 *)(param_1 + 0x144) = 0x7f7fffff;
  *(undefined4 *)(param_1 + 0x148) = 0x7f7fffff;
  *(undefined4 *)(param_1 + 0x14c) = 0;
  *(long *)(param_1 + 0x118) = param_1 + 0x120;
  *(undefined ***)(param_1 + 0x120) = &PTR_FUN_10149aa08;
  *(undefined8 *)(param_1 + 0x128) = *(undefined8 *)(param_1 + 0x6c);
  *(undefined4 *)(param_1 + 0x130) = *(undefined4 *)(param_1 + 0x74);
  *(undefined8 *)(param_1 + 0x150) = 0x3f800000;
  FUN_100476c0c(0x3f000000,0,0x40800000,param_1 + 0x120,param_1);
  lVar1 = FUN_10049fe0c(param_1 + 0x100);
  FUN_1004747d0(param_1);
  *(undefined4 *)(lVar1 + 0x40) = 1;
  plVar2 = (long *)FUN_100485fa8(lVar1 + 0x10);
  (**(code **)(*plVar2 + 0x38))(plVar2,DAT_10185b588);
  lVar1 = FUN_100486124(lVar1 + 0x10);
  *(undefined1 *)(lVar1 + 0x18) = 1;
  lVar1 = FUN_10049fe0c(param_1 + 0x100);
  FUN_1004747d0(param_1);
  *(undefined4 *)(lVar1 + 0x40) = 1;
  *(undefined1 *)(lVar1 + 0x68) = 1;
  plVar2 = (long *)FUN_100485fa8(lVar1 + 0x10);
  (**(code **)(*plVar2 + 0x38))(plVar2,DAT_10185b588);
  lVar1 = FUN_100486124(lVar1 + 0x10);
  *(undefined1 *)(lVar1 + 0x18) = 1;
  return;
}




void FUN_10048494c(undefined8 param_1,undefined8 param_2)

{
  FUN_10048a9dc(param_1,param_2,0);
  return;
}




void FUN_100484954(undefined8 param_1,undefined8 param_2)

{
  FUN_10048aae8(param_1,param_2,0);
  return;
}




void FUN_10048495c(undefined8 param_1,undefined8 param_2)

{
  FUN_10048abf4(param_1,param_2,2);
  return;
}




void FUN_100484964(void)

{
  return;
}




void FUN_100484968(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined4 uVar6;
  code *local_40;
  undefined4 local_38;
  
  uVar1 = FUN_1004743d4();
  *param_2 = "Effect_Karas_A_Shot";
  param_2[4] = "Effect_Karas_A_Impact";
  param_2[0xc] = "Sound_Karas_Ability_A_Cast";
  param_2[0xd] = "Sound_Karas_Ability_A_Impact";
  uVar2 = FUN_1010a1520();
  lVar3 = FUN_1010a0e0c(uVar2,0,"*KindredSoundBalance*",0);
  uVar6 = FUN_1003d1b2c(*(undefined4 *)(lVar3 + 0x6f4));
  *(undefined4 *)(param_2 + 0x15) = uVar6;
  *(undefined4 *)(param_1 + 0x88) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x128) = 0;
  *(undefined4 *)(param_1 + 300) = 0;
  *(undefined4 *)(param_1 + 0x130) = 0;
  *(long *)(param_1 + 0x118) = param_1 + 0x120;
  *(undefined ***)(param_1 + 0x120) = &PTR_FUN_10149aa80;
  *(undefined1 *)(param_1 + 0x134) = 0;
  FUN_1003dfe60(uVar1,0,2,0x19,0);
  FUN_1004779e0(param_1 + 0x120,param_1,0);
  lVar3 = param_1 + 0x100;
  lVar4 = FUN_10049fe0c(lVar3);
  FUN_1004747d0(param_1);
  *(undefined4 *)(lVar4 + 0x40) = 1;
  plVar5 = (long *)FUN_100485fa8(lVar4 + 0x10);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x38))(plVar5,PTR_s_Buff_Karas_A_Slow_10185d488);
  local_40 = FUN_10048ad00;
  local_38 = 3;
  (**(code **)(*plVar5 + 0x18))(plVar5,&local_40);
  lVar4 = FUN_10049fe0c(lVar3);
  FUN_1004747d0(param_1);
  *(undefined4 *)(lVar4 + 0x40) = 0x40000;
  plVar5 = (long *)FUN_10048602c(lVar4 + 0x10);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x38))();
  (**(code **)(*plVar5 + 0x38))(plVar5,"Damage",0);
  lVar3 = FUN_10049feac(lVar3);
  lVar3 = FUN_100486124(lVar3 + 0x10);
  *(undefined1 *)(lVar3 + 0x18) = 1;
  return;
}




void FUN_100484afc(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  
  uVar1 = FUN_1004743d4();
  *param_2 = "Effect_Karas_C_Shot";
  param_2[4] = "Effect_Karas_C_Impact";
  param_2[0xc] = "Sound_Karas_Ability_C_Impact1";
  param_2[0xd] = "Sound_Karas_Ability_C_Impact2";
  param_2[0xe] = "Sound_Karas_Ability_C_Impact3";
  *(undefined4 *)(param_1 + 300) = 0;
  *(undefined4 *)(param_1 + 0x128) = 0;
  *(undefined4 *)(param_1 + 0x130) = 0;
  *(undefined1 *)(param_1 + 0x134) = 1;
  *(long *)(param_1 + 0x118) = param_1 + 0x120;
  *(undefined ***)(param_1 + 0x120) = &PTR_FUN_10149aa80;
  FUN_1003dfe60(uVar1,2,3,0x19,0);
  FUN_1004779e0(param_1 + 0x120,param_1,2);
  lVar2 = FUN_10049fe0c(param_1 + 0x100);
  FUN_1004747d0(param_1);
  *(undefined4 *)(lVar2 + 0x40) = 0x40000;
  plVar3 = (long *)FUN_10048602c(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))();
  (**(code **)(*plVar3 + 0x38))(plVar3,"Damage",2);
  FUN_100486124(lVar2 + 0x10);
  lVar2 = FUN_10049feac(param_1 + 0x100);
  lVar2 = FUN_100486124(lVar2 + 0x10);
  *(undefined1 *)(lVar2 + 0x18) = 1;
  return;
}




void FUN_100484c14(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  undefined4 uVar5;
  
  uVar1 = FUN_1004743d4();
  *param_2 = "Effect_Karas_C_Perk_Shot";
  param_2[4] = "Effect_Karas_C_Perk_Impact";
  uVar2 = FUN_1010a1520();
  lVar3 = FUN_1010a0e0c(uVar2,0,"*KindredSoundBalance*",0);
  uVar5 = FUN_1003d1b2c(*(undefined4 *)(lVar3 + 0x6e4));
  *(undefined4 *)(param_2 + 0x15) = uVar5;
  *(undefined4 *)(param_1 + 0x128) = 0;
  *(undefined4 *)(param_1 + 300) = 0;
  *(undefined4 *)(param_1 + 0x130) = 0;
  *(undefined1 *)(param_1 + 0x134) = 1;
  *(long *)(param_1 + 0x118) = param_1 + 0x120;
  *(undefined ***)(param_1 + 0x120) = &PTR_FUN_10149aa80;
  FUN_1003dfe60(uVar1,2,3,0x19,0);
  FUN_1004779e0(param_1 + 0x120,param_1,2);
  lVar3 = FUN_10049fe0c(param_1 + 0x100);
  FUN_1004747d0(param_1);
  *(undefined4 *)(lVar3 + 0x40) = 0x40000;
  plVar4 = (long *)FUN_10048602c(lVar3 + 0x10);
  uVar5 = FUN_1003dfe60(uVar1,2,2,0x19,0);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x30))(uVar5,0x3f266666,0xbf800000,plVar4,0x40000,0);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x38))();
  (**(code **)(*plVar4 + 0x38))(plVar4,"BlurPerkAoEDmg",2);
  FUN_100486124(lVar3 + 0x10);
  lVar3 = FUN_10049feac(param_1 + 0x100);
  lVar3 = FUN_100486124(lVar3 + 0x10);
  *(undefined1 *)(lVar3 + 0x18) = 1;
  return;
}




void FUN_100484d80(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  
  *(undefined1 *)(param_1 + 0xd5) = 1;
  uVar1 = FUN_1004743d4();
  *(undefined4 *)(param_1 + 0x88) = 0x3fcccccd;
  *(undefined8 *)(param_1 + 0x130) = 0;
  *(undefined8 *)(param_1 + 0x138) = 0;
  *(undefined8 *)(param_1 + 0x128) = 0;
  *(undefined4 *)(param_1 + 0x130) = DAT_101dc0b88;
  *(long *)(param_1 + 0x118) = param_1 + 0x120;
  *(undefined ***)(param_1 + 0x120) = &PTR_FUN_10149d360;
  FUN_1004766b8(param_1 + 0x120,param_1,uVar1);
  lVar2 = FUN_10049fe0c(param_1 + 0x100);
  FUN_1004747d0(param_1);
  *(undefined4 *)(lVar2 + 0x40) = 0x40000;
  plVar3 = (long *)FUN_10048602c(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))();
                    /* WARNING: Could not recover jumptable at 0x000100484e28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x38))(plVar3,"DAMAGE",1);
  return;
}




void FUN_100484e2c(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  undefined4 uVar4;
  code *local_30;
  undefined4 local_28;
  
  *param_2 = "Effect_Shin_B1_Shot";
  param_2[4] = "Effect_Shin_B1_Impact";
  param_2[0xc] = "Sound_Shin_Ability_B_Impact";
  uVar1 = FUN_1010a1520();
  lVar2 = FUN_1010a0e0c(uVar1,0,"*KindredSoundBalance*",0);
  uVar4 = FUN_1003d1de4(*(undefined4 *)(lVar2 + 0x734));
  *(undefined4 *)(param_2 + 0x15) = uVar4;
  *(undefined4 *)(param_1 + 0x88) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x13c) = 0;
  *(undefined8 *)(param_1 + 300) = 0xbf800000;
  *(undefined8 *)(param_1 + 0x134) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x140) = 0;
  *(long *)(param_1 + 0x118) = param_1 + 0x120;
  *(undefined ***)(param_1 + 0x120) = &PTR_FUN_10149aaa8;
  *(undefined4 *)(param_1 + 0x128) = 0x41700000;
  lVar2 = FUN_10049fdbc(param_1 + 0x100);
  lVar2 = lVar2 + 0x10;
  plVar3 = (long *)FUN_10048602c(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))();
  (**(code **)(*plVar3 + 0x30))(plVar3,1);
  plVar3 = (long *)FUN_100485fa8(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))(plVar3,PTR_s_Buff_Shin_B_Slow_10185d4a8);
  local_30 = FUN_10048ad14;
  local_28 = 3;
  (**(code **)(*plVar3 + 0x18))(plVar3,&local_30);
  FUN_100486124(lVar2);
  return;
}




void FUN_100484f5c(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  undefined4 uVar4;
  code *local_30;
  undefined4 local_28;
  
  *param_2 = "Effect_Shin_B2_Shot";
  param_2[4] = "Effect_Shin_B2_Impact";
  param_2[0xc] = "Sound_Shin_Ability_B1_Impact";
  uVar1 = FUN_1010a1520();
  lVar2 = FUN_1010a0e0c(uVar1,0,"*KindredSoundBalance*",0);
  uVar4 = FUN_1003d1de4(*(undefined4 *)(lVar2 + 0x73c));
  *(undefined4 *)(param_2 + 0x15) = uVar4;
  *(undefined4 *)(param_1 + 0x88) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x13c) = 0;
  *(undefined8 *)(param_1 + 300) = 0xbf800000;
  *(undefined8 *)(param_1 + 0x134) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x140) = 0;
  *(long *)(param_1 + 0x118) = param_1 + 0x120;
  *(undefined ***)(param_1 + 0x120) = &PTR_FUN_10149aaa8;
  *(undefined4 *)(param_1 + 0x128) = 0x41700000;
  lVar2 = FUN_10049fdbc(param_1 + 0x100);
  lVar2 = lVar2 + 0x10;
  plVar3 = (long *)FUN_10048602c(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))();
  (**(code **)(*plVar3 + 0x30))(plVar3,4);
  plVar3 = (long *)FUN_100485fa8(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))(plVar3,PTR_s_Buff_Shin_B_Root_10185d4b0);
  local_30 = FUN_10048ad28;
  local_28 = 3;
  (**(code **)(*plVar3 + 0x18))(plVar3,&local_30);
  FUN_100486124(lVar2);
  return;
}




void FUN_10048508c(undefined8 param_1,undefined8 param_2)

{
  FUN_10048ad3c(param_1,param_2,0);
  return;
}




void FUN_100485094(undefined8 param_1,undefined8 param_2)

{
  FUN_10048ae00(param_1,param_2,0);
  return;
}




void FUN_10048509c(undefined8 param_1,undefined8 param_2)

{
  FUN_10048aec4(param_1,param_2,2);
  return;
}




void FUN_1004850a4(long param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  code *local_40;
  undefined4 local_38;
  
  *(undefined1 *)(param_1 + 0xd5) = 1;
  uVar1 = FUN_1004743d4();
  *(char **)(param_2 + 0x30) = "Effect_Baptiste_Ultimate_GroundFX";
  *(undefined4 *)(param_1 + 0x88) = 0x3fa66666;
  *(undefined4 *)(param_1 + 300) = 0;
  *(undefined4 *)(param_1 + 0x128) = 0;
  *(undefined4 *)(param_1 + 0x130) = 0;
  *(long *)(param_1 + 0x118) = param_1 + 0x120;
  *(undefined ***)(param_1 + 0x120) = &PTR_FUN_10149aa80;
  *(undefined1 *)(param_1 + 0x134) = 0;
  FUN_1003dfe60(uVar1,0,6,0x19,0);
  FUN_1004779e0(param_1 + 0x120,param_1,0);
  lVar2 = FUN_10049fe0c(param_1 + 0x100);
  FUN_1004747d0(param_1);
  *(undefined4 *)(lVar2 + 0x40) = 0x40000;
  plVar3 = (long *)FUN_100485fa8(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))(plVar3,PTR_s_Buff_Maaya_A_Debuff_10185d4f0);
  local_40 = FUN_10048af88;
  local_38 = 3;
  (**(code **)(*plVar3 + 0x18))(plVar3,&local_40);
  lVar2 = FUN_10049feac(param_1 + 0x100);
  lVar2 = FUN_100486124(lVar2 + 0x10);
  *(undefined1 *)(lVar2 + 0x18) = 1;
  return;
}




void FUN_1004851b0(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined4 uVar4;
  
  uVar1 = FUN_1004743d4();
  *param_2 = "Effect_Maaya_BasicAttack";
  param_2[4] = "Effect_Lorelai_B_Proj_Hit";
  *(undefined2 *)((long)param_2 + 0xa4) = 0x6400;
  *(undefined1 *)((long)param_2 + 0xa6) = 200;
  *(undefined4 *)(param_1 + 0x88) = 0x3f000000;
  *(undefined8 *)(param_1 + 0x13c) = 0x7f7fffff7f7fffff;
  *(undefined8 *)(param_1 + 0x134) = 0x7f7fffff7f7fffff;
  *(undefined4 *)(param_1 + 0x144) = 0x7f7fffff;
  *(undefined4 *)(param_1 + 0x148) = 0x7f7fffff;
  *(undefined4 *)(param_1 + 0x14c) = 0;
  *(undefined4 *)(param_1 + 0x154) = 0;
  *(undefined4 *)(param_1 + 0x150) = 0;
  *(long *)(param_1 + 0x118) = param_1 + 0x120;
  *(undefined ***)(param_1 + 0x120) = &PTR_FUN_10149aa08;
  uVar4 = FUN_1003dfe60(uVar1,0,6,0x19,0);
  *(undefined8 *)(param_1 + 0x128) = *(undefined8 *)(param_1 + 0x6c);
  *(undefined4 *)(param_1 + 0x130) = *(undefined4 *)(param_1 + 0x74);
  *(undefined4 *)(param_1 + 0x150) = uVar4;
  FUN_100476ac4(0x3ee66666,0,0x3ee66666,param_1 + 0x120,param_1);
  lVar2 = FUN_10049fefc(param_1 + 0x100);
  lVar3 = FUN_1004a0178(lVar2 + 0x10);
  *(char **)(lVar3 + 0x10) = "*Maaya_GravityBall*";
  *(byte *)(lVar3 + 0x40) = *(byte *)(lVar3 + 0x40) | 1;
  lVar2 = FUN_100486124(lVar2 + 0x10);
  *(undefined1 *)(lVar2 + 0x18) = 1;
  return;
}




void FUN_1004852bc(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined4 uVar4;
  
  uVar1 = FUN_1004743d4();
  *param_2 = "Effect_Maaya_BasicAttack";
  param_2[4] = "Effect_Lorelai_B_Proj_Hit";
  *(undefined2 *)((long)param_2 + 0xa4) = 0x6400;
  *(undefined1 *)((long)param_2 + 0xa6) = 200;
  *(undefined4 *)(param_1 + 0x88) = 0x3f000000;
  *(undefined8 *)(param_1 + 0x13c) = 0x7f7fffff7f7fffff;
  *(undefined8 *)(param_1 + 0x134) = 0x7f7fffff7f7fffff;
  *(undefined4 *)(param_1 + 0x144) = 0x7f7fffff;
  *(undefined4 *)(param_1 + 0x148) = 0x7f7fffff;
  *(undefined4 *)(param_1 + 0x14c) = 0;
  *(undefined4 *)(param_1 + 0x154) = 0;
  *(undefined4 *)(param_1 + 0x150) = 0;
  *(long *)(param_1 + 0x118) = param_1 + 0x120;
  *(undefined ***)(param_1 + 0x120) = &PTR_FUN_10149aa08;
  uVar4 = FUN_1003dfe60(uVar1,1,2,0x19,0);
  *(undefined8 *)(param_1 + 0x128) = *(undefined8 *)(param_1 + 0x6c);
  *(undefined4 *)(param_1 + 0x130) = *(undefined4 *)(param_1 + 0x74);
  *(undefined4 *)(param_1 + 0x150) = uVar4;
  FUN_100476ac4(0x3f800000,0,0x3ee66666,param_1 + 0x120,param_1);
  lVar2 = FUN_10049fefc(param_1 + 0x100);
  lVar3 = FUN_1004a0178(lVar2 + 0x10);
  *(char **)(lVar3 + 0x10) = "*Maaya_GravityDisc*";
  *(byte *)(lVar3 + 0x40) = *(byte *)(lVar3 + 0x40) | 1;
  lVar2 = FUN_100486124(lVar2 + 0x10);
  *(undefined1 *)(lVar2 + 0x18) = 1;
  return;
}




void FUN_1004853d0(long param_1,undefined8 *param_2,undefined8 param_3)

{
  long lVar1;
  long *plVar2;
  
  *param_2 = "Effect_AdagioDefaultAttack_core";
  param_2[4] = "Effect_AdagioDefaultAttack_impact";
  param_2[6] = "Effect_AdagioProjectileGround";
  *(undefined4 *)(param_2 + 0x15) = 0x3f000000;
  param_2[0xc] = "Sound_Adagio_Basic_Attack_Impact";
  *(undefined8 *)(param_1 + 0x134) = 0x3f800000;
  *(undefined8 *)(param_1 + 300) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x13c) = 0;
  *(undefined1 *)(param_1 + 0x140) = 0;
  *(long *)(param_1 + 0x118) = param_1 + 0x120;
  *(undefined ***)(param_1 + 0x120) = &PTR_FUN_10149aaa8;
  *(undefined4 *)(param_1 + 0x128) = 0x41600000;
  lVar1 = FUN_10049fdbc(param_1 + 0x100);
  plVar2 = (long *)FUN_10048602c(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x38))();
  (**(code **)(*plVar2 + 0x58))(plVar2,param_3);
  FUN_100486124(lVar1 + 0x10);
  return;
}




void FUN_100485498(undefined8 param_1)

{
  FUN_1003dfe60(param_1,0,6,0x19,0);
  return;
}




void FUN_1004854ac(undefined8 param_1)

{
  FUN_1003dfe60(param_1,0,5,0x19,0);
  return;
}




void FUN_1004854c0(undefined8 param_1)

{
  FUN_1003dfe60(param_1,0,0xb,0x19,0);
  return;
}




void FUN_1004854d4(undefined8 param_1)

{
  FUN_1003dfe60(param_1,1,7,0x19,0);
  return;
}




int FUN_1004854e8(undefined4 param_1)

{
  float fVar1;
  
  fVar1 = (float)FUN_1003dfe60(param_1,1,3,0x19,0);
  return (int)fVar1;
}




void FUN_100485510(undefined8 param_1)

{
  FUN_1003dfe60(param_1,0,7,0x19,0);
  return;
}




undefined1  [16] FUN_100485524(undefined8 param_1,long param_2,int param_3,int param_4)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined4 uVar5;
  float fVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  ulong uVar9;
  undefined8 uVar10;
  undefined4 local_48 [2];
  
  lVar3 = FUN_10047434c();
  uVar5 = 3;
  if (param_4 != 0) {
    uVar5 = 4;
  }
  auVar7 = FUN_1003dfe60(lVar3,0,uVar5,0x19,0);
  uVar10 = auVar7._8_8_;
  if (param_3 != 0) {
    fVar6 = (float)FUN_1003df710(lVar3,6,1);
    auVar7._4_4_ = auVar7._4_4_;
    auVar7._0_4_ = auVar7._0_4_ + auVar7._0_4_ * fVar6;
    auVar7._8_8_ = uVar10;
  }
  if (*(char *)(param_2 + 0x2f6) < '\0') {
    fVar6 = (float)FUN_1003dfe60(lVar3,0,5,0x19,0);
    auVar7 = ZEXT416((uint)(fVar6 * auVar7._0_4_));
  }
  puVar1 = PTR_s_Buff_Baptiste_Talent_BadBadMojo_10185ceb0;
  uVar10 = auVar7._8_8_;
  uVar9 = auVar7._0_8_;
  lVar4 = FUN_100345d90(*(undefined4 *)(lVar3 + 0x260));
  if ((lVar4 != 0) && (iVar2 = FUN_1003a47d0(lVar4,puVar1), iVar2 != 0)) {
    local_48[0] = DAT_101d90dc4;
    fVar6 = (float)FUN_1003dfee8(lVar3,local_48,2,9);
    uVar9 = (ulong)(uint)(fVar6 * auVar7._0_4_);
    uVar10 = 0;
  }
  auVar8._8_8_ = uVar10;
  auVar8._0_8_ = uVar9;
  return auVar8;
}




void FUN_10048560c(undefined8 *param_1,undefined8 param_2)

{
  FUN_100485524(*param_1,param_2,0,0);
  return;
}




void FUN_10048561c(undefined8 *param_1,undefined8 param_2)

{
  FUN_100485524(*param_1,param_2,1,0);
  return;
}




void FUN_10048562c(undefined8 *param_1,undefined8 param_2)

{
  FUN_100485524(*param_1,param_2,0,1);
  return;
}




void FUN_10048563c(undefined8 *param_1,undefined8 param_2)

{
  FUN_100485524(*param_1,param_2,1,1);
  return;
}




void FUN_10048564c(long param_1,undefined8 *param_2,uint param_3)

{
  code *pcVar1;
  undefined *puVar2;
  uint uVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  code *local_70;
  undefined4 local_68;
  
  uVar4 = FUN_1004743d4();
  *param_2 = "Effect_Baptiste_A_Projectile";
  param_2[4] = "Effect_Baptiste_A_ProjectileImpact";
  param_2[0xc] = "Sound_Baptiste_Ability_A_Impact";
  *(undefined2 *)((long)param_2 + 0xa4) = 0x5a00;
  *(undefined1 *)((long)param_2 + 0xa6) = 0x82;
  *(undefined4 *)(param_1 + 0x88) = 0x3f000000;
  *(undefined1 *)(param_1 + 0x134) = 1;
  *(undefined4 *)(param_1 + 300) = 0;
  *(undefined4 *)(param_1 + 0x128) = 0;
  *(undefined4 *)(param_1 + 0x130) = 0;
  *(long *)(param_1 + 0x118) = param_1 + 0x120;
  *(undefined ***)(param_1 + 0x120) = &PTR_FUN_10149aa80;
  FUN_1003dfe60(uVar4,0,8,0x19,0);
  FUN_1004779e0(param_1 + 0x120,param_1,0);
  lVar5 = FUN_1004743d4(param_1);
  puVar2 = PTR_s_Buff_Baptiste_Talent_TheReaper_10185a388;
  lVar5 = FUN_100345d90(*(undefined4 *)(lVar5 + 0x260));
  if (lVar5 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_1003a47d0(lVar5,puVar2);
  }
  lVar5 = FUN_10049fe0c(param_1 + 0x100);
  FUN_1004747d0(param_1);
  *(undefined4 *)(lVar5 + 0x40) = 0x40000;
  lVar5 = lVar5 + 0x10;
  plVar6 = (long *)FUN_10048602c(lVar5);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x38))();
  local_70 = FUN_10048561c;
  if (param_3 == 0) {
    local_70 = FUN_10048560c;
  }
  local_68 = 5;
  (**(code **)(*plVar6 + 0x18))(plVar6,&local_70,1,2);
  plVar6 = (long *)FUN_100485fa8(lVar5);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x38))(plVar6,PTR_s_Buff_Baptiste_A_CC_10185ce90);
  local_70 = FUN_1004859d0;
  local_68 = 3;
  (**(code **)(*plVar6 + 0x18))(plVar6,&local_70);
  uVar3 = param_3 ^ 1 | uVar3;
  if (uVar3 == 1) {
    plVar6 = (long *)FUN_100485fa8(lVar5);
    plVar6 = (long *)(**(code **)(*plVar6 + 0x30))(0x40000000,0x3f266666,plVar6,1,0);
    plVar6 = (long *)(**(code **)(*plVar6 + 0x38))
                               (plVar6,PTR_s_Buff_Baptiste_PerkSoulSender_10185ce88);
    local_70 = (code *)CONCAT44(local_70._4_4_,0x3dcccccd);
    local_68 = 1;
    plVar6 = (long *)(**(code **)(*plVar6 + 0x18))(plVar6,&local_70);
    (**(code **)(*plVar6 + 0x60))(plVar6,FUN_1004766ac);
  }
  plVar6 = (long *)FUN_10048602c(lVar5);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x30))(0x40000000,0x3f266666,0xbf800000,plVar6,0x40000,1);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x38))();
  pcVar1 = FUN_10048563c;
  if (param_3 == 0) {
    pcVar1 = FUN_10048562c;
  }
  local_68 = 5;
  local_70 = pcVar1;
  (**(code **)(*plVar6 + 0x18))(plVar6,&local_70,1,2);
  lVar5 = FUN_100486124(lVar5);
  *(undefined1 *)(lVar5 + 0x18) = 1;
  lVar5 = FUN_10049feac(param_1 + 0x100);
  lVar5 = lVar5 + 0x10;
  plVar6 = (long *)FUN_10048602c(lVar5);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x30))(0x40000000,0x3f266666,0xbf800000,plVar6,0x40000,1);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x38))();
  local_68 = 5;
  local_70 = pcVar1;
  (**(code **)(*plVar6 + 0x18))(plVar6,&local_70,1,2);
  if (uVar3 != 0) {
    plVar6 = (long *)FUN_100485fa8(lVar5);
    plVar6 = (long *)(**(code **)(*plVar6 + 0x30))(0x40000000,0x3f266666,plVar6,1,0);
    plVar6 = (long *)(**(code **)(*plVar6 + 0x38))
                               (plVar6,PTR_s_Buff_Baptiste_PerkSoulSender_10185ce88);
    local_70 = (code *)CONCAT44(local_70._4_4_,0x3dcccccd);
    local_68 = 1;
    (**(code **)(*plVar6 + 0x18))(plVar6,&local_70);
  }
  lVar5 = FUN_100486124(lVar5);
  *(undefined1 *)(lVar5 + 0x18) = 1;
  return;
}




void FUN_1004859d0(undefined8 param_1)

{
  FUN_1003dfe60(param_1,0,7,0x19,0);
  return;
}




void FUN_1004859e4(long param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  code *local_60;
  undefined4 local_58;
  
  *(undefined1 *)(param_1 + 0xd5) = 1;
  uVar3 = FUN_1004743d4();
  *(char **)(param_2 + 0x30) = "Effect_Baptiste_Ultimate_GroundFX";
  *(char **)(param_2 + 0x60) = "Sound_Baptiste_Ability_C_Impact";
  *(undefined2 *)(param_2 + 0xa4) = 0x5a00;
  *(undefined1 *)(param_2 + 0xa6) = 0x82;
  *(undefined4 *)(param_1 + 0x88) = 0x3fa66666;
  *(undefined4 *)(param_1 + 300) = 0;
  *(undefined4 *)(param_1 + 0x128) = 0;
  *(undefined4 *)(param_1 + 0x130) = 0;
  *(long *)(param_1 + 0x118) = param_1 + 0x120;
  *(undefined ***)(param_1 + 0x120) = &PTR_FUN_10149aa80;
  *(undefined1 *)(param_1 + 0x134) = 0;
  FUN_1003dfe60(uVar3,2,6,0x19,0);
  FUN_1004779e0(param_1 + 0x120,param_1,2);
  uVar7 = *(undefined4 *)(param_1 + 0x7c);
  uVar8 = *(undefined4 *)(param_1 + 0x84);
  lVar6 = param_1 + 0x100;
  lVar4 = FUN_10049fe0c(lVar6);
  FUN_1004747d0(param_1);
  *(undefined4 *)(lVar4 + 0x40) = 0x40000;
  plVar5 = (long *)FUN_100485fa8(lVar4 + 0x10);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x38))(plVar5,PTR_s_Buff_Baptiste_Ultimate_CC_10185cea8);
  local_60 = FUN_100485c30;
  local_58 = 3;
  plVar5 = (long *)(**(code **)(*plVar5 + 0x18))(plVar5,&local_60);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x38))(uVar7);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x40))(uVar8);
  (**(code **)(*plVar5 + 0x48))(plVar5,param_3);
  plVar5 = (long *)FUN_100485fa8(lVar4 + 0x10);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x38))(plVar5,PTR_s_Buff_Baptiste_Ultimate_DOT_10185cea0);
  local_60 = (code *)CONCAT44(local_60._4_4_,0x3e4ccccd);
  local_58 = 1;
  plVar5 = (long *)(**(code **)(*plVar5 + 0x18))(plVar5,&local_60);
  (**(code **)(*plVar5 + 0x48))(plVar5,param_3);
  lVar4 = FUN_1004743d4(param_1);
  puVar1 = PTR_s_Buff_Baptiste_Talent_TheReaper_10185a388;
  lVar4 = FUN_100345d90(*(undefined4 *)(lVar4 + 0x260));
  iVar2 = 0;
  if (lVar4 != 0) {
    iVar2 = FUN_1003a47d0(lVar4,puVar1);
  }
  if (((int)param_3 == 0) || (iVar2 != 0)) {
    lVar4 = FUN_10049fe0c(lVar6);
    FUN_1004747d0(param_1);
    *(undefined4 *)(lVar4 + 0x40) = 1;
    plVar5 = (long *)FUN_100485fa8(lVar4 + 0x10);
    plVar5 = (long *)(**(code **)(*plVar5 + 0x38))
                               (plVar5,PTR_s_Buff_Baptiste_PerkSoulSender_10185ce88);
    local_60 = (code *)CONCAT44(local_60._4_4_,0x3dcccccd);
    local_58 = 1;
    (**(code **)(*plVar5 + 0x18))(plVar5,&local_60);
  }
  lVar6 = FUN_10049feac(lVar6);
  lVar6 = FUN_100486124(lVar6 + 0x10);
  *(undefined1 *)(lVar6 + 0x18) = 1;
  return;
}




void FUN_100485c30(undefined8 param_1)

{
  FUN_1003dfe60(param_1,2,4,0x19,0);
  return;
}




void FUN_100485c44(long param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  
  lVar1 = FUN_1004743d4();
  *param_2 = "Effect_Baron_DefaultAttack";
  param_2[4] = "Effect_Baron_DefaultAttack_Impact";
  param_2[0xc] = "Sound_Baron_Rocket_Impact";
  *(undefined4 *)(param_1 + 0x13c) = 0;
  *(undefined8 *)(param_1 + 300) = 0xbf800000;
  *(undefined8 *)(param_1 + 0x134) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x140) = 0;
  *(long *)(param_1 + 0x118) = param_1 + 0x120;
  *(undefined ***)(param_1 + 0x120) = &PTR_FUN_10149aaa8;
  *(undefined4 *)(param_1 + 0x128) = 0x41880000;
  lVar2 = FUN_10049fdbc(param_1 + 0x100);
  lVar2 = lVar2 + 0x10;
  plVar3 = (long *)FUN_10048602c(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))();
  plVar3 = (long *)(**(code **)(*plVar3 + 0x58))(plVar3,param_3);
  (**(code **)(*plVar3 + 0x68))(plVar3,param_4);
  plVar3 = (long *)FUN_10048602c(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))
                             (*(undefined4 *)(**(long **)(*(long *)(lVar1 + 0x38) + 0x228) + 8),
                              0xbf800000,0xbf800000,plVar3,0x40000,1);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))();
  plVar3 = (long *)(**(code **)(*plVar3 + 0x20))(plVar3,"DEFAULT_ATTACK_SPLASH_DAMAGE");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x70))(plVar3,param_3);
  (**(code **)(*plVar3 + 0x68))(plVar3,param_4);
  lVar2 = FUN_100486124(lVar2);
  *(undefined1 *)(lVar2 + 0x18) = 1;
  return;
}




void FUN_100485dac(undefined8 param_1)

{
  FUN_1003dfe60(param_1,1,0xb,0x19,0);
  return;
}




void FUN_100485dc0(undefined4 param_1,long param_2,undefined8 *param_3,undefined8 param_4)

{
  long lVar1;
  long *plVar2;
  code *local_40;
  undefined4 local_38;
  
  *param_3 = "Effect_Celeste_AA";
  param_3[1] = "Effect_Celeste_AA_Enemy";
  param_3[4] = "Effect_Celeste_AA_Impact";
  param_3[0xc] = "Sound_Celeste_Basic_Attack_Impact_1";
  param_3[0xd] = "Sound_Celeste_Basic_Attack_Impact_2";
  param_3[0xe] = "Sound_Celeste_Basic_Attack_Impact_3";
  *(undefined4 *)(param_3 + 0x15) = 0x3e4ccccd;
  *(undefined4 *)(param_2 + 0xcc) = 0x42700000;
  *(undefined4 *)(param_2 + 0x13c) = 0;
  *(undefined8 *)(param_2 + 300) = 0xbf800000;
  *(undefined8 *)(param_2 + 0x134) = 0x3f800000;
  *(undefined1 *)(param_2 + 0x140) = 0;
  *(long *)(param_2 + 0x118) = param_2 + 0x120;
  *(undefined ***)(param_2 + 0x120) = &PTR_FUN_10149aaa8;
  *(undefined4 *)(param_2 + 0x128) = param_1;
  lVar1 = FUN_10049fdbc(param_2 + 0x100);
  lVar1 = lVar1 + 0x10;
  plVar2 = (long *)FUN_10048602c(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x38))();
  (**(code **)(*plVar2 + 0x58))(plVar2,param_4);
  plVar2 = (long *)FUN_100485fa8(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x38))
                             (plVar2,PTR_s_Buff_GloballyVisibleTrueSight_10185a878);
  local_40 = FUN_100485f50;
  local_38 = 3;
  plVar2 = (long *)(**(code **)(*plVar2 + 0x18))(plVar2,&local_40);
  (**(code **)(*plVar2 + 0x60))(plVar2,FUN_100485f64);
  plVar2 = (long *)FUN_100485fa8(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x38))(plVar2,PTR_s_Buff_ShowGloballyVisible_10185a880);
  local_40 = FUN_100485f50;
  local_38 = 3;
  plVar2 = (long *)(**(code **)(*plVar2 + 0x18))(plVar2,&local_40);
  (**(code **)(*plVar2 + 0x60))(plVar2,FUN_100485f64);
  FUN_100486124(lVar1);
  return;
}




undefined4 FUN_100485f50(long param_1)

{
  return *(undefined4 *)(**(long **)(*(long *)(param_1 + 0x38) + 0x228) + 8);
}




uint FUN_100485f64(undefined8 param_1,long param_2)

{
  return *(uint *)(param_2 + 0x2f4) & 1;
}




bool FUN_100485f70(undefined8 *param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = param_1[1];
  if (lVar3 == 0) {
    bVar1 = false;
  }
  else {
    lVar2 = FUN_1004745f4(*param_1);
    bVar1 = lVar3 == lVar2;
  }
  return bVar1;
}




void FUN_100485fa8(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_10033da9c();
  puVar2 = (undefined8 *)(lVar1 + 8);
  *puVar2 = 0;
  if (*param_1 == 0) {
    *param_1 = (long)puVar2;
  }
  else {
    *(undefined8 **)param_1[1] = puVar2;
  }
  param_1[1] = (long)puVar2;
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  return;
}




void FUN_100485ff8(undefined8 param_1)

{
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d90b0c;
  FUN_1003dfee8(param_1,local_18,0,9);
  return;
}




void FUN_10048602c(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_10033de80();
  puVar2 = (undefined8 *)(lVar1 + 8);
  *puVar2 = 0;
  if (*param_1 == 0) {
    *param_1 = (long)puVar2;
  }
  else {
    *(undefined8 **)param_1[1] = puVar2;
  }
  param_1[1] = (long)puVar2;
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  return;
}




float FUN_10048607c(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  float fVar4;
  
  lVar1 = FUN_1004744e4(*param_1);
  plVar3 = (long *)(lVar1 + 0x18);
  do {
    lVar1 = *plVar3;
    plVar3 = (long *)(lVar1 + 0x20);
  } while (*(int *)(*(long *)(lVar1 + 8) + 0xa4) != DAT_10184daa8);
  lVar2 = *(long *)(lVar1 + 0x28);
  fVar4 = 0.0;
  lVar1 = lVar2;
  while( true ) {
    if (lVar1 == 0) goto LAB_100486104;
    if ((*(int *)(lVar1 + 0x314) == DAT_101d3e8a4) && (*(int *)(lVar1 + 0x310) == 0)) break;
    lVar1 = *(long *)(lVar1 + 0x350);
  }
  for (; *(int *)(lVar2 + 0x30c) != *(int *)(lVar1 + 0x30c); lVar2 = *(long *)(lVar2 + 0x350)) {
  }
  fVar4 = *(float *)(lVar2 + 0x318);
LAB_100486104:
  if (fVar4 <= 0.1) {
    fVar4 = 0.1;
  }
  return fVar4 + 0.2;
}




void FUN_100486124(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_10033df24();
  puVar2 = (undefined8 *)(lVar1 + 8);
  *puVar2 = 0;
  if (*param_1 == 0) {
    *param_1 = (long)puVar2;
  }
  else {
    *(undefined8 **)param_1[1] = puVar2;
  }
  param_1[1] = (long)puVar2;
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  return;
}




void FUN_100486174(long param_1,undefined8 *param_2,undefined4 param_3)

{
  long lVar1;
  long lVar2;
  
  *param_2 = "Effect_Gwen_AA";
  param_2[4] = "Effect_Gwen_AA_Impact";
  param_2[0xc] = "Sound_Gwen_Attack_Impact_1";
  param_2[0xd] = "Sound_Gwen_Attack_Impact_2";
  param_2[0xe] = "Sound_Gwen_Attack_Impact_3";
  *(undefined8 *)(param_1 + 0x134) = 0x3f800000;
  *(undefined8 *)(param_1 + 300) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x13c) = 0;
  *(undefined1 *)(param_1 + 0x140) = 0;
  *(long *)(param_1 + 0x118) = param_1 + 0x120;
  *(undefined ***)(param_1 + 0x120) = &PTR_FUN_10149aaa8;
  *(undefined4 *)(param_1 + 0x128) = 0x41a00000;
  lVar1 = FUN_10049fdbc(param_1 + 0x100);
  lVar2 = FUN_10049ff4c(lVar1 + 0x10);
  *(code **)(lVar2 + 0x18) = FUN_1004753b0;
  *(undefined8 *)(lVar2 + 0x28) = 0;
  *(undefined4 *)(lVar2 + 0x30) = param_3;
  FUN_100486124(lVar1 + 0x10);
  return;
}




void FUN_100486234(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  lVar1 = FUN_10047434c();
  lVar2 = *(long *)(lVar1 + 0x40);
  fVar3 = *(float *)(lVar2 + 0xd8) + *(float *)(lVar2 + 0x18c) * (*(float *)(lVar2 + 0x2f4) + 1.0);
  fVar4 = (float)NEON_fminnm(fVar3 + fVar3 * *(float *)(lVar2 + 0x240),DAT_101e943c0);
  fVar3 = DAT_101e94300;
  if (DAT_101e94300 <= fVar4) {
    fVar3 = fVar4;
  }
  FUN_1004755b4(lVar1,param_2);
  fVar5 = *(float *)(**(long **)(*(long *)(lVar1 + 0x38) + 0x228) + 8);
  fVar4 = (float)FUN_1003df710(lVar1,1,1);
  fVar4 = *(float *)(param_2 + 0x30) + fVar5 +
          (fVar4 - fVar5) * ((float)(int)fVar3 * 0.09090909 + -0.09090909);
  *(float *)(param_2 + 0x30) = fVar4;
  fVar5 = *(float *)(*(long *)(lVar1 + 0x40) + 0xfc);
  fVar3 = (float)FUN_1003df710(lVar1,2,1);
  *(float *)(param_2 + 0x30) = fVar4 + fVar5 * fVar3;
  return;
}




void FUN_100486310(undefined8 param_1)

{
  FUN_1003dfe60(param_1,3,3,0x19,0);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100486324(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined **local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined1 local_b8;
  undefined4 local_b4;
  undefined4 uStack_b0;
  int local_ac;
  undefined4 local_a8;
  float local_a4;
  undefined4 local_a0;
  undefined8 local_9c;
  undefined8 local_94;
  undefined8 local_88;
  undefined4 local_80;
  undefined1 auStack_78 [16];
  float local_68;
  float fStack_64;
  float local_60;
  undefined8 local_5c;
  float local_54;
  undefined4 local_50;
  uint uStack_4c;
  undefined2 local_48;
  
  if (DAT_101d23a38 != '\0') {
    lVar1 = FUN_1004743d4(*param_1);
    uVar4 = param_1[1];
    uVar2 = FUN_1003d4e0c(PTR_s_Buff_Churnwalker_ChainTether_10185a8d0);
    lVar3 = FUN_1003d5224(uVar4,uVar2);
    if (lVar3 == 0) {
      fVar8 = *(float *)(lVar1 + 0x250);
      fVar12 = *(float *)(lVar1 + 600);
      fVar10 = *(float *)(lVar1 + 0x2ec) + *(float *)(lVar1 + 0x254);
      lVar3 = param_1[1];
      fVar11 = *(float *)(lVar3 + 0x250);
      fVar13 = *(float *)(lVar3 + 600);
      fVar6 = *(float *)(lVar3 + 0x2ec) + *(float *)(lVar3 + 0x254);
      fVar5 = fVar8 - fVar11;
      fVar7 = fVar10 - fVar6;
      fVar9 = fVar12 - fVar13;
      fVar5 = SQRT(fVar5 * fVar5 + fVar9 * fVar9 + fVar7 * fVar7);
      local_d0 = (undefined **)CONCAT44(local_d0._4_4_,DAT_101d90e14);
      local_a4 = (float)FUN_1003dfee8(lVar1,&local_d0,2,9);
      if (local_a4 < fVar5) {
        local_a4 = fVar5 - local_a4;
        local_54 = (local_a4 * (fVar13 - fVar12)) / fVar5 + fVar12;
        lVar3 = *(long *)(lVar1 + 0x18);
        uStack_4c = 0;
        if (lVar3 != 0) {
          do {
            if (*(int *)(*(long *)(lVar3 + 8) + 0xa4) == ram0x0001018672a0) {
              uStack_4c = *(byte *)(lVar3 + 0x818) >> 3 & 3;
              goto LAB_100486474;
            }
            lVar3 = *(long *)(lVar3 + 0x20);
          } while (lVar3 != 0);
          uStack_4c = 0;
        }
LAB_100486474:
        local_5c = CONCAT44(((fVar6 - fVar10) * local_a4) / fVar5 + fVar10,
                            ((fVar11 - fVar8) * local_a4) / fVar5 + fVar8);
        local_50 = 0;
        local_48 = 1;
        local_68 = fVar8;
        fStack_64 = fVar10;
        local_60 = fVar12;
        FUN_1003a7f34(&local_68,auStack_78,0);
        local_b4 = *(undefined4 *)(lVar1 + 0x260);
        local_a4 = local_a4 * 0.04;
        local_c8 = 0;
        uStack_c0 = 0;
        local_b8 = 0;
        local_d0 = &PTR_FUN_101496b18;
        local_ac = DAT_1018589d8;
        local_a0 = 1;
        local_88 = 0;
        local_94 = 0;
        local_9c = 0;
        local_80 = DAT_101dc0b88;
        DAT_1018589d8 = DAT_1018589d8 + 1;
        uStack_b0 = local_b4;
        local_a8 = FUN_1003d4e0c(PTR_s_Buff_DisplacementLock_10185a678);
        FUN_10049639c(&local_d0,&DAT_101e47d30);
        FUN_1000f3e04(0x41c80000,lVar1,auStack_78,1);
      }
    }
  }
  return;
}




void FUN_100486550(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  puVar1 = PTR_s_Buff_Churnwalker_ChainTether_10185a8d0;
  lVar3 = *(long *)(param_1[1] + 0x18);
  while ((lVar3 != 0 && (*(int *)(*(long *)(lVar3 + 8) + 0xa4) != DAT_10184daa8))) {
    lVar3 = *(long *)(lVar3 + 0x20);
  }
  lVar2 = FUN_1004743d4(*param_1);
  FUN_1003c421c(lVar3,puVar1,*(undefined4 *)(lVar2 + 0x260));
  return;
}




void FUN_1004865b0(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_10033dc88();
  puVar2 = (undefined8 *)(lVar1 + 8);
  *puVar2 = 0;
  if (*param_1 == 0) {
    *param_1 = (long)puVar2;
  }
  else {
    *(undefined8 **)param_1[1] = puVar2;
  }
  param_1[1] = (long)puVar2;
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  return;
}




void FUN_100486600(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_10033dd2c();
  puVar2 = (undefined8 *)(lVar1 + 8);
  *puVar2 = 0;
  if (*param_1 == 0) {
    *param_1 = (long)puVar2;
  }
  else {
    *(undefined8 **)param_1[1] = puVar2;
  }
  param_1[1] = (long)puVar2;
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  return;
}




void FUN_100486650(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_10033e500();
  puVar2 = (undefined8 *)(lVar1 + 8);
  *puVar2 = 0;
  if (*param_1 == 0) {
    *param_1 = (long)puVar2;
  }
  else {
    *(undefined8 **)param_1[1] = puVar2;
  }
  param_1[1] = (long)puVar2;
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  return;
}




void FUN_1004866a0(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_10033dbe4();
  puVar2 = (undefined8 *)(lVar1 + 8);
  *puVar2 = 0;
  if (*param_1 == 0) {
    *param_1 = (long)puVar2;
  }
  else {
    *(undefined8 **)param_1[1] = puVar2;
  }
  param_1[1] = (long)puVar2;
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  return;
}




void FUN_1004866f0(undefined8 param_1)

{
  FUN_1003dfe60(param_1,0,4,0x19,0);
  return;
}




undefined4 FUN_100486704(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_100440cb4();
  uVar2 = 0x41700000;
  if (iVar1 != 2) {
    uVar2 = 0x41400000;
  }
  return uVar2;
}




undefined4 FUN_100486728(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_100440cb4();
  uVar2 = 0x41700000;
  if (iVar1 != 2) {
    uVar2 = 0x41400000;
  }
  return uVar2;
}




void FUN_10048674c(undefined8 param_1,long param_2,undefined4 *param_3)

{
  *param_3 = *(undefined4 *)(param_2 + 0x260);
  return;
}




void FUN_100486758(long param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined4 local_50 [2];
  undefined4 local_48;
  
  *param_2 = param_3;
  *(undefined4 *)((long)param_2 + 0xac) = 0x3f000000;
  *(undefined2 *)((long)param_2 + 0xa4) = 0x66ff;
  *(undefined1 *)((long)param_2 + 0xa6) = 0;
  *(undefined4 *)(param_1 + 0x88) = 0x3dcccccd;
  *(undefined4 *)(param_1 + 0xcc) = 0x41c80000;
  *(undefined8 *)(param_1 + 0x13c) = 0x7f7fffff7f7fffff;
  *(undefined8 *)(param_1 + 0x134) = 0x7f7fffff7f7fffff;
  *(undefined4 *)(param_1 + 0x144) = 0x7f7fffff;
  *(undefined4 *)(param_1 + 0x148) = 0x7f7fffff;
  *(undefined4 *)(param_1 + 0x14c) = 0;
  *(long *)(param_1 + 0x118) = param_1 + 0x120;
  *(undefined ***)(param_1 + 0x120) = &PTR_FUN_10149aa08;
  *(undefined8 *)(param_1 + 0x128) = *(undefined8 *)(param_1 + 0x6c);
  *(undefined4 *)(param_1 + 0x130) = *(undefined4 *)(param_1 + 0x74);
  *(undefined8 *)(param_1 + 0x150) = 0x3fc00000;
  FUN_100476c0c(0x3f000000,0,0x40800000,param_1 + 0x120,param_1);
  lVar3 = param_1 + 0x100;
  lVar1 = FUN_10049fe0c(lVar3);
  FUN_1004747d0(param_1);
  *(undefined4 *)(lVar1 + 0x40) = 1;
  plVar2 = (long *)FUN_100485fa8(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x38))(plVar2,param_4);
  local_50[0] = *(undefined4 *)(param_1 + 0xf8);
  local_48 = 1;
  (**(code **)(*plVar2 + 0x18))(plVar2,local_50);
  lVar1 = FUN_100486124(lVar1 + 0x10);
  *(undefined1 *)(lVar1 + 0x18) = 1;
  lVar1 = FUN_10049fe0c(lVar3);
  FUN_1004747d0(param_1);
  *(undefined4 *)(lVar1 + 0x40) = 1;
  *(undefined1 *)(lVar1 + 0x68) = 1;
  plVar2 = (long *)FUN_100485fa8(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x38))(plVar2,param_4);
  local_50[0] = *(undefined4 *)(param_1 + 0xf8);
  local_48 = 1;
  plVar2 = (long *)(**(code **)(*plVar2 + 0x18))(plVar2,local_50);
  (**(code **)(*plVar2 + 0x28))(plVar2,FUN_10048674c);
  lVar1 = FUN_100486124(lVar1 + 0x10);
  *(undefined1 *)(lVar1 + 0x18) = 1;
  lVar3 = FUN_10049feac(lVar3);
  lVar3 = FUN_100486124(lVar3 + 0x10);
  *(undefined1 *)(lVar3 + 0x18) = 1;
  return;
}




void FUN_100486908(undefined8 param_1,undefined8 param_2,float *param_3)

{
  long lVar1;
  float fVar2;
  float fVar3;
  
  lVar1 = FUN_10047434c();
  fVar3 = *(float *)(*(long *)(lVar1 + 0x40) + 0xfc);
  fVar2 = (float)FUN_1003df710(lVar1,9,1);
  fVar2 = fVar2 * fVar3;
  if (fVar2 <= 1.0) {
    fVar2 = 1.0;
  }
  *param_3 = fVar2;
  return;
}




void FUN_100486954(undefined8 param_1,undefined8 param_2,float *param_3)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  lVar1 = FUN_10047434c();
  *param_3 = 0.0;
  fVar2 = (float)FUN_1003df710(lVar1,0xe,3);
  *param_3 = fVar2;
  fVar4 = *(float *)(*(long *)(lVar1 + 0x40) + 0x100);
  fVar3 = (float)FUN_1003df710(lVar1,8,1);
  *param_3 = fVar2 + fVar4 * fVar3;
  return;
}




void FUN_1004869b8(undefined8 param_1,undefined8 param_2,float *param_3)

{
  long lVar1;
  float fVar2;
  float fVar3;
  
  lVar1 = FUN_10047434c();
  fVar3 = *(float *)(*(long *)(lVar1 + 0x40) + 0xfc);
  fVar2 = (float)FUN_1003df710(lVar1,9,1);
  fVar2 = fVar2 * fVar3;
  if (fVar2 <= 1.0) {
    fVar2 = 1.0;
  }
  *param_3 = fVar2;
  fVar3 = (float)FUN_1003dfe60(lVar1,0,2,0x19,0);
  *param_3 = fVar2 + fVar2 * fVar3;
  return;
}




void FUN_100486a28(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  float fVar2;
  
  uVar1 = FUN_10047434c();
  FUN_1004755b4(uVar1,param_2);
  fVar2 = (float)FUN_1003dfe60(uVar1,0,2,0x19,0);
  *(float *)(param_2 + 0x30) = *(float *)(param_2 + 0x30) + *(float *)(param_2 + 0x30) * fVar2;
  return;
}




void FUN_100486a78(undefined8 param_1,undefined8 param_2,float *param_3)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  lVar1 = FUN_10047434c();
  *param_3 = 0.0;
  fVar2 = (float)FUN_1003df710(lVar1,0xe,3);
  *param_3 = fVar2;
  fVar4 = *(float *)(*(long *)(lVar1 + 0x40) + 0x100);
  fVar3 = (float)FUN_1003df710(lVar1,8,1);
  fVar2 = fVar2 + fVar4 * fVar3;
  *param_3 = fVar2;
  fVar3 = (float)FUN_1003dfe60(lVar1,0,2,0x19,0);
  *param_3 = fVar2 + fVar2 * fVar3;
  return;
}




void FUN_100486afc(undefined8 param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_10047434c();
  uVar2 = FUN_1003dfe60(uVar1,3,2,0x19,0);
  *param_2 = uVar2;
  return;
}




void FUN_100486b34(void)

{
  FUN_1003df6c8(PTR_s__Item_NullwaveGauntlet__10185ba70,1,1);
  return;
}




void FUN_100486b48(void)

{
  FUN_1003df6c8(PTR_s__Item_ProtectorContract__10185bb10,1,1);
  return;
}




void FUN_100486b5c(void)

{
  FUN_1003df6c8(PTR_s__Item_RooksDecree__10185ba98,3,1);
  return;
}




void FUN_100486b70(long param_1,undefined8 *param_2,undefined4 param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined4 uVar4;
  float fVar5;
  
  lVar1 = FUN_1004743d4();
  *param_2 = "Effect_Kestrel_AA";
  param_2[4] = "Effect_Kestrel_AA_Hit";
  param_2[0xc] = "Sound_Kestrel_Attack_Impact_1";
  param_2[0xd] = "Sound_Kestrel_Attack_Impact_2";
  param_2[0xe] = "Sound_Kestrel_Attack_Impact_3";
  param_2[0xf] = "Sound_Kestrel_Attack_Impact_4";
  uVar2 = FUN_1010a1520();
  lVar3 = FUN_1010a0e0c(uVar2,0,"*KindredSoundBalance*",0);
  uVar4 = FUN_1003b2f3c(*(undefined4 *)(lVar3 + 600));
  *(undefined4 *)(param_2 + 0x15) = uVar4;
  fVar5 = *(float *)(*(long *)(lVar1 + 0x40) + 0x128);
  *(undefined8 *)(param_1 + 0x134) = 0x3f800000;
  *(undefined8 *)(param_1 + 300) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x13c) = 0;
  *(undefined1 *)(param_1 + 0x140) = 0;
  *(long *)(param_1 + 0x118) = param_1 + 0x120;
  *(undefined ***)(param_1 + 0x120) = &PTR_FUN_10149aaa8;
  *(float *)(param_1 + 0x128) = fVar5 * 27.0 + 27.0;
  lVar1 = FUN_10049fdbc(param_1 + 0x100);
  lVar3 = FUN_10049ff4c(lVar1 + 0x10);
  *(code **)(lVar3 + 0x18) = FUN_1004753b0;
  *(undefined8 *)(lVar3 + 0x28) = 0;
  *(undefined4 *)(lVar3 + 0x30) = param_3;
  FUN_100486124(lVar1 + 0x10);
  return;
}




float FUN_100486c88(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  
  lVar1 = FUN_1004743d4(*param_1);
  lVar2 = *(long *)(lVar1 + 0x40);
  fVar3 = *(float *)(lVar2 + 0x48) + *(float *)(lVar2 + 0xfc) * (*(float *)(lVar2 + 0x264) + 1.0);
  fVar4 = (float)NEON_fminnm(fVar3 + fVar3 * *(float *)(lVar2 + 0x1b0),DAT_101e94330);
  fVar3 = DAT_101e94270;
  if (DAT_101e94270 <= fVar4) {
    fVar3 = fVar4;
  }
  fVar4 = (float)FUN_1003dfe60(lVar1,0,7,0x19,0);
  return fVar3 * fVar4;
}




void FUN_100486cfc(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_1004743d4(*param_1);
  uVar2 = FUN_1003dfe60(uVar1,0,8,0x19,0);
  *(undefined4 *)(param_2 + 0x3c) = uVar2;
  return;
}




void FUN_100486d38(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_10033e114();
  puVar2 = (undefined8 *)(lVar1 + 8);
  *puVar2 = 0;
  if (*param_1 == 0) {
    *param_1 = (long)puVar2;
  }
  else {
    *(undefined8 **)param_1[1] = puVar2;
  }
  param_1[1] = (long)puVar2;
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  return;
}




void FUN_100486d88(undefined8 param_1)

{
  FUN_1003dfe60(param_1,1,0xb,0x19,0);
  return;
}




void FUN_100486d9c(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_10047434c();
  uVar2 = FUN_1003dfe60(uVar1,2,2,0x19,0);
  *param_3 = uVar2;
  return;
}




void FUN_100486dd4(undefined8 param_1,undefined8 param_2,float *param_3)

{
  undefined8 uVar1;
  float fVar2;
  undefined4 local_28 [2];
  
  uVar1 = FUN_10047434c();
  fVar2 = (float)FUN_1003dfe60(uVar1,2,2,0x19,0);
  *param_3 = fVar2;
  uVar1 = FUN_10047445c(param_1);
  local_28[0] = DAT_101d90bf0;
  fVar2 = (float)FUN_1003dfee8(uVar1,local_28,0,9);
  *param_3 = *param_3 * fVar2;
  return;
}




void FUN_100486e48(long param_1,undefined8 param_2,float *param_3)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  uVar1 = FUN_10047445c();
  fVar2 = (float)FUN_1003dfe60(uVar1,2,2,0x19,0);
  *param_3 = fVar2;
  fVar3 = (float)FUN_1003dfe60(uVar1,2,7,0x19,0);
  if (0.0 < fVar3) {
    fVar5 = (float)NEON_fminnm(*(undefined4 *)(param_1 + 200),fVar3);
    if (fVar5 <= 0.0) {
      fVar5 = 0.0;
    }
    fVar4 = (float)_sinf((fVar5 * 6.2831855) / fVar3);
    if (fVar3 * 0.5 <= fVar5) {
      fVar4 = 2.0 - fVar4;
    }
    fVar3 = (float)NEON_fminnm(fVar4,0x3fc00000);
    if (fVar3 <= 0.5) {
      fVar3 = 0.5;
    }
    *param_3 = fVar3 * fVar2;
  }
  return;
}




void FUN_100486f18(undefined8 param_1,undefined8 param_2,float *param_3)

{
  undefined8 uVar1;
  float fVar2;
  undefined4 local_28 [2];
  
  FUN_100486e48();
  uVar1 = FUN_10047445c(param_1);
  local_28[0] = DAT_101d90bf0;
  fVar2 = (float)FUN_1003dfee8(uVar1,local_28,0,9);
  *param_3 = *param_3 * fVar2;
  return;
}




undefined1  [16] FUN_100486f74(long *param_1)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  undefined1 auVar4 [16];
  float fVar5;
  ulong uVar6;
  undefined8 uVar7;
  
  uVar1 = FUN_1004744e4(*param_1);
  auVar4 = FUN_1003dfe60(uVar1,2,4,0x19,0);
  uVar7 = auVar4._8_8_;
  uVar6 = auVar4._0_8_;
  fVar2 = (float)FUN_1003dfe60(uVar1,2,7,0x19,0);
  if (0.0 < fVar2) {
    fVar5 = (float)NEON_fminnm(*(undefined4 *)(*param_1 + 200),fVar2);
    if (fVar5 <= 0.0) {
      fVar5 = 0.0;
    }
    fVar3 = (float)_sinf((fVar5 * 6.2831855) / fVar2);
    if (fVar2 * 0.5 <= fVar5) {
      fVar3 = 2.0 - fVar3;
    }
    fVar2 = (float)NEON_fminnm(fVar3,0x3fc00000);
    if (fVar2 <= 0.5) {
      fVar2 = 0.5;
    }
    uVar6 = (ulong)(uint)(fVar2 * auVar4._0_4_);
    uVar7 = 0;
  }
  auVar4._8_8_ = uVar7;
  auVar4._0_8_ = uVar6;
  return auVar4;
}




int FUN_10048703c(undefined4 param_1)

{
  float fVar1;
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d90bf0;
  fVar1 = (float)FUN_1003dfee8(param_1,local_18,2,9);
  return (int)fVar1;
}




int FUN_100487074(undefined4 param_1)

{
  float fVar1;
  
  fVar1 = (float)FUN_1003dfe60(param_1,2,8,0x19,0);
  return (int)fVar1;
}




void FUN_10048709c(long param_1,undefined8 *param_2,undefined8 param_3)

{
  long lVar1;
  long *plVar2;
  undefined4 local_40 [2];
  undefined4 local_38;
  
  *param_2 = "Effect_Kraken_Attack_Projectile_5v5";
  param_2[4] = "Effect_Kraken_Attack_Impact_5v5";
  *(undefined4 *)((long)param_2 + 0xac) = 0x3f19999a;
  *(undefined2 *)((long)param_2 + 0xa4) = 0x1eff;
  *(undefined1 *)((long)param_2 + 0xa6) = 0;
  *(undefined8 *)(param_1 + 0x134) = 0x3f800000;
  *(undefined8 *)(param_1 + 300) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x13c) = 0;
  *(undefined1 *)(param_1 + 0x140) = 0;
  *(long *)(param_1 + 0x118) = param_1 + 0x120;
  *(undefined ***)(param_1 + 0x120) = &PTR_FUN_10149aaa8;
  *(undefined4 *)(param_1 + 0x128) = 0x41100000;
  lVar1 = FUN_10049fdbc(param_1 + 0x100);
  lVar1 = lVar1 + 0x10;
  plVar2 = (long *)FUN_10048602c(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))(0x40800000,0x3f266666,0xbf800000,plVar2,0x40000,0);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x38))();
  (**(code **)(*plVar2 + 0x58))(plVar2,param_3);
  plVar2 = (long *)FUN_100485fa8(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))(0x40800000,0x3f266666,plVar2,0x40000,0);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x38))
                             (plVar2,PTR_s_Buff_SlowDecayingUsingBuffVar_10185a460);
  local_40[0] = 0x40200000;
  local_38 = 1;
  plVar2 = (long *)(**(code **)(*plVar2 + 0x18))(plVar2,local_40);
  (**(code **)(*plVar2 + 0x38))(0x3f000000);
  lVar1 = FUN_100486124(lVar1);
  *(undefined1 *)(lVar1 + 0x18) = 1;
  return;
}




void FUN_100487204(long param_1,undefined8 *param_2,undefined4 param_3)

{
  long lVar1;
  long lVar2;
  
  *param_2 = "Effect_Kraken_Attack_Projectile_5v5";
  param_2[4] = "Effect_Kraken_Attack_Impact_5v5";
  *(undefined4 *)((long)param_2 + 0xac) = 0x3f19999a;
  *(undefined2 *)((long)param_2 + 0xa4) = 0x1eff;
  *(undefined1 *)((long)param_2 + 0xa6) = 0;
  *(undefined8 *)(param_1 + 0x134) = 0x3f800000;
  *(undefined8 *)(param_1 + 300) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x13c) = 0;
  *(undefined1 *)(param_1 + 0x140) = 0;
  *(long *)(param_1 + 0x118) = param_1 + 0x120;
  *(undefined ***)(param_1 + 0x120) = &PTR_FUN_10149aaa8;
  *(undefined4 *)(param_1 + 0x128) = 0x41400000;
  lVar1 = FUN_10049fdbc(param_1 + 0x100);
  lVar2 = FUN_10049ff4c(lVar1 + 0x10);
  *(code **)(lVar2 + 0x18) = FUN_1004753b0;
  *(undefined8 *)(lVar2 + 0x28) = 0;
  *(undefined4 *)(lVar2 + 0x30) = param_3;
  lVar1 = FUN_100486124(lVar1 + 0x10);
  *(undefined1 *)(lVar1 + 0x18) = 1;
  return;
}




void FUN_1004872c8(undefined8 param_1,long param_2,float *param_3)

{
  long lVar1;
  long lVar2;
  float fVar3;
  
  lVar1 = FUN_10047434c();
  lVar2 = *(long *)(param_2 + 0x40);
  fVar3 = *(float *)(lVar2 + 0x38) + *(float *)(lVar2 + 0xec) * (*(float *)(lVar2 + 0x254) + 1.0);
  NEON_fminnm(fVar3 + fVar3 * *(float *)(lVar2 + 0x1a0),DAT_101e94320);
  lVar1 = *(long *)(lVar1 + 0x40);
  fVar3 = *(float *)(lVar1 + 0x48) + *(float *)(lVar1 + 0xfc) * (*(float *)(lVar1 + 0x264) + 1.0);
  NEON_fminnm(fVar3 + fVar3 * *(float *)(lVar1 + 0x1b0),DAT_101e94330);
  *param_3 = DAT_101e94260 * 0.02 + DAT_101e94270 * 0.1;
  return;
}




void FUN_10048737c(long param_1,undefined8 *param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined4 local_30 [2];
  undefined4 local_28;
  
  *param_2 = "Effect_Ghostwing_Attack_Projectile_5v5";
  param_2[4] = "Effect_Ghostwing_Attack_Impact_5v5";
  *(undefined2 *)((long)param_2 + 0xa4) = 0xe178;
  *(undefined1 *)((long)param_2 + 0xa6) = 0xaf;
  param_2[0xc] = "build://Sounds/5v5/SFX/sfx_ghostwing_fireball_impact.mp3";
  param_2[0x15] = 0x3ed1eb853e4ccccd;
  iVar1 = _rand();
  *(undefined8 *)(param_1 + 0x13c) = 0x7f7fffff7f7fffff;
  *(undefined8 *)(param_1 + 0x134) = 0x7f7fffff7f7fffff;
  *(undefined4 *)(param_1 + 0x144) = 0x7f7fffff;
  *(undefined4 *)(param_1 + 0x148) = 0x7f7fffff;
  *(undefined4 *)(param_1 + 0x14c) = 0;
  *(undefined4 *)(param_1 + 0x154) = 0;
  *(long *)(param_1 + 0x118) = param_1 + 0x120;
  *(undefined ***)(param_1 + 0x120) = &PTR_FUN_10149aa08;
  *(float *)(param_1 + 0x128) = *(float *)(param_1 + 0x6c);
  *(float *)(param_1 + 300) = *(float *)(param_1 + 0x70);
  fVar5 = *(float *)(param_1 + 0x6c) - *(float *)(param_1 + 0xec);
  *(float *)(param_1 + 0x130) = *(float *)(param_1 + 0x74);
  fVar6 = *(float *)(param_1 + 0x70) - *(float *)(param_1 + 0xf0);
  fVar7 = *(float *)(param_1 + 0x74) - *(float *)(param_1 + 0xf4);
  *(float *)(param_1 + 0x150) = SQRT(fVar5 * fVar5 + fVar6 * fVar6 + fVar7 * fVar7) * 0.06451613;
  FUN_100476c0c(0x3f266666,(float)iVar1 * 3.259629e-10 + -0.35,0x3e4ccccd,param_1 + 0x120,param_1);
  lVar2 = FUN_10049fdbc(param_1 + 0x100);
  *(undefined4 *)(lVar2 + 0x48) = 0x3e4ccccd;
  *(undefined1 *)(lVar2 + 0x4c) = 1;
  lVar2 = lVar2 + 0x10;
  lVar3 = FUN_10049ff4c(lVar2);
  *(code **)(lVar3 + 0x18) = FUN_1004872c8;
  *(undefined8 *)(lVar3 + 0x28) = 0x200000001;
  *(undefined4 *)(lVar3 + 0x30) = 0;
  plVar4 = (long *)FUN_100485fa8(lVar2);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x38))(plVar4,DAT_10185a468);
  local_30[0] = 0x40400000;
  local_28 = 1;
  (**(code **)(*plVar4 + 0x18))(plVar4,local_30);
  lVar2 = FUN_100486124(lVar2);
  *(undefined1 *)(lVar2 + 0x18) = 1;
  return;
}




void FUN_100487520(undefined8 param_1,long param_2,float *param_3)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  float fVar4;
  
  lVar2 = FUN_10047434c();
  lVar3 = *(long *)(param_2 + 0x40);
  fVar4 = *(float *)(lVar3 + 0x38) + *(float *)(lVar3 + 0xec) * (*(float *)(lVar3 + 0x254) + 1.0);
  NEON_fminnm(fVar4 + fVar4 * *(float *)(lVar3 + 0x1a0),DAT_101e94320);
  uVar1 = *(uint *)(param_2 + 0x2f4);
  if ((uVar1 >> 4 & 1) == 0) {
    lVar2 = *(long *)(lVar2 + 0x40);
    fVar4 = *(float *)(lVar2 + 0x48) + *(float *)(lVar2 + 0xfc) * (*(float *)(lVar2 + 0x264) + 1.0);
    NEON_fminnm(fVar4 + fVar4 * *(float *)(lVar2 + 0x1b0),DAT_101e94330);
    if ((uVar1 >> 0xd & 1) == 0) {
      if (((uVar1 >> 0xe & 1) == 0) && ((uVar1 >> 0xf & 1) == 0)) {
        fVar4 = 0.045;
      }
      else {
        fVar4 = 0.04;
      }
    }
    else {
      fVar4 = 0.06;
    }
    fVar4 = DAT_101e94270 * 0.11111111 + fVar4 * DAT_101e94260;
  }
  else {
    fVar4 = DAT_101e94260 * 0.25;
  }
  *param_3 = fVar4;
  return;
}




void FUN_100487624(undefined8 *param_1)

{
  undefined4 uVar1;
  long lVar2;
  undefined **local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined1 local_60;
  undefined4 local_5c;
  undefined4 uStack_58;
  int local_54;
  undefined4 local_50;
  undefined8 local_4c;
  undefined8 local_44;
  undefined8 local_3c;
  undefined8 local_30;
  undefined4 local_28;
  
  if (((DAT_101d23a38 != '\0') && (param_1[1] != 0)) &&
     (lVar2 = FUN_1004743d4(*param_1), lVar2 != 0)) {
    uVar1 = *(undefined4 *)(param_1[1] + 0x260);
    lVar2 = FUN_1004743d4(*param_1);
    uStack_58 = *(undefined4 *)(lVar2 + 0x260);
    local_70 = 0;
    uStack_68 = 0;
    local_60 = 0;
    local_78 = &PTR_FUN_101496b18;
    local_54 = DAT_1018589d8;
    local_4c = 0x140a00000;
    local_30 = 0;
    local_3c = 0;
    local_44 = 0;
    local_28 = DAT_101dc0b88;
    DAT_1018589d8 = DAT_1018589d8 + 1;
    local_5c = uVar1;
    local_50 = FUN_1003d4e0c(PTR_s_Buff_RevealToBestowersTeam_10185be10);
    FUN_10049639c(&local_78,&DAT_101e47d30);
  }
  return;
}




void FUN_1004876ec(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  undefined4 local_38 [2];
  
  uVar1 = FUN_10047434c();
  lVar2 = *(long *)(*(long *)(param_2 + 0x28) + 0x40);
  fVar3 = *(float *)(lVar2 + 0x48) + *(float *)(lVar2 + 0xfc) * (*(float *)(lVar2 + 0x264) + 1.0);
  fVar4 = (float)NEON_fminnm(fVar3 + fVar3 * *(float *)(lVar2 + 0x1b0),DAT_101e94330);
  fVar3 = DAT_101e94270;
  if (DAT_101e94270 <= fVar4) {
    fVar3 = fVar4;
  }
  local_38[0] = DAT_101d90c0c;
  fVar4 = (float)FUN_1003dfee8(uVar1,local_38,0,9);
  *(float *)(param_2 + 0x30) = fVar4 * fVar3;
  *(undefined4 *)(param_2 + 8) = 0;
  *(undefined2 *)(param_2 + 0xc) = 8;
  return;
}




void FUN_10048778c(long param_1,undefined8 *param_2,undefined8 param_3)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  
  lVar1 = FUN_1004743d4();
  *param_2 = "Effect_Lyra_AA";
  param_2[4] = "Effect_Lyra_AA_Impact";
  param_2[0xc] = "Sound_Lyra_Attack_Light_Impact";
  *(undefined4 *)(param_1 + 0x13c) = 0;
  uVar3 = NEON_fmov(0xbf800000,4);
  *(undefined8 *)(param_1 + 0x128) = uVar3;
  *(undefined4 *)(param_1 + 0x130) = 0;
  *(undefined8 *)(param_1 + 0x134) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x140) = 0;
  *(long *)(param_1 + 0x118) = param_1 + 0x120;
  *(undefined ***)(param_1 + 0x120) = &PTR_FUN_10149aaa8;
  *(float *)(param_1 + 0x128) = *(float *)(*(long *)(lVar1 + 0x40) + 0x128) * 9.0 + 9.0;
  lVar1 = FUN_10049fdbc(param_1 + 0x100);
  plVar2 = (long *)FUN_10048602c(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x38))();
  (**(code **)(*plVar2 + 0x58))(plVar2,param_3);
  FUN_100486124(lVar1 + 0x10);
  return;
}




void FUN_100487860(long param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  bool bVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  code *local_50;
  undefined4 local_48;
  
  lVar3 = FUN_1004743d4();
  puVar1 = PTR_s_Buff_Lyra_Talent_TwinMissiles_10185ada8;
  lVar3 = FUN_100345d90(*(undefined4 *)(lVar3 + 0x260));
  if (lVar3 == 0) {
    *param_2 = "Effect_Lyra_AA_Heavy";
    param_2[4] = "Effect_Lyra_AA_Heavy_Impact";
    param_2[0xc] = "Sound_Lyra_Attack_Heavy_Impact";
  }
  else {
    iVar2 = FUN_1003a47d0(lVar3,puVar1);
    *param_2 = "Effect_Lyra_AA_Heavy";
    param_2[4] = "Effect_Lyra_AA_Heavy_Impact";
    param_2[0xc] = "Sound_Lyra_Attack_Heavy_Impact";
    if (iVar2 != 0) {
      *(undefined8 *)(param_1 + 0x13c) = 0x7f7fffff7f7fffff;
      *(undefined8 *)(param_1 + 0x134) = 0x7f7fffff7f7fffff;
      *(undefined4 *)(param_1 + 0x144) = 0x7f7fffff;
      *(undefined4 *)(param_1 + 0x148) = 0x7f7fffff;
      *(undefined4 *)(param_1 + 0x14c) = 0;
      *(undefined4 *)(param_1 + 0x154) = 0;
      *(long *)(param_1 + 0x118) = param_1 + 0x120;
      *(undefined ***)(param_1 + 0x120) = &PTR_FUN_10149aa08;
      *(float *)(param_1 + 0x128) = *(float *)(param_1 + 0x6c);
      *(float *)(param_1 + 300) = *(float *)(param_1 + 0x70);
      fVar6 = *(float *)(param_1 + 0x6c) - *(float *)(param_1 + 0xec);
      *(float *)(param_1 + 0x130) = *(float *)(param_1 + 0x74);
      fVar7 = *(float *)(param_1 + 0x70) - *(float *)(param_1 + 0xf0);
      fVar8 = *(float *)(param_1 + 0x74) - *(float *)(param_1 + 0xf4);
      *(float *)(param_1 + 0x150) =
           SQRT(fVar6 * fVar6 + fVar7 * fVar7 + fVar8 * fVar8) * 0.055555556;
      FUN_100476ac4(0x3e19999a,*(float *)(param_1 + 0xf8) * 0.8,0x3e4ccccd,param_1 + 0x120,param_1);
      bVar5 = true;
      goto LAB_1004879e0;
    }
  }
  bVar5 = false;
  *(undefined8 *)(param_1 + 300) = 0xbf800000;
  *(undefined8 *)(param_1 + 0x134) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x13c) = 0;
  *(undefined1 *)(param_1 + 0x140) = 0;
  *(long *)(param_1 + 0x118) = param_1 + 0x120;
  *(undefined ***)(param_1 + 0x120) = &PTR_FUN_10149aaa8;
  *(undefined4 *)(param_1 + 0x128) = 0x41a80000;
LAB_1004879e0:
  lVar3 = FUN_10049fdbc(param_1 + 0x100);
  lVar3 = lVar3 + 0x10;
  plVar4 = (long *)FUN_10048602c(lVar3);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x38))();
  plVar4 = (long *)(**(code **)(*plVar4 + 0x20))(plVar4,"HEAVY_ATTACK_DAMAGE");
  (**(code **)(*plVar4 + 0x70))(plVar4,param_3);
  if (!bVar5) {
    plVar4 = (long *)FUN_100485fa8(lVar3);
    plVar4 = (long *)(**(code **)(*plVar4 + 0x38))(plVar4,PTR_s_Buff_Lyra_HeavyAttackSlow_10185cb50)
    ;
    local_50 = FUN_100487a88;
    local_48 = 3;
    (**(code **)(*plVar4 + 0x18))(plVar4,&local_50);
  }
  FUN_100486124(lVar3);
  return;
}




void FUN_100487a88(undefined8 param_1)

{
  FUN_1003df710(param_1,1,1);
  return;
}




void FUN_100487a94(long param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  undefined4 uVar4;
  
  *param_2 = "Effect_Malene_DefaultAttack";
  param_2[4] = "Effect_Malene_Proj_Hit";
  param_2[0xc] = "Sound_Malene_Good_Auto_Impact_1";
  param_2[0xd] = "Sound_Malene_Good_Auto_Impact_2";
  param_2[0xe] = "Sound_Malene_Good_Auto_Impact_3";
  uVar1 = FUN_1010a1520();
  lVar2 = FUN_1010a0e0c(uVar1,0,"*KindredSoundBalance*",0);
  uVar4 = FUN_1003b7e84(*(undefined4 *)(lVar2 + 0x488));
  *(undefined4 *)(param_2 + 0x15) = uVar4;
  *(undefined2 *)((long)param_2 + 0xa4) = 0x3219;
  *(undefined1 *)((long)param_2 + 0xa6) = 0x4b;
  *(undefined4 *)(param_1 + 0x88) = 0x3e19999a;
  *(undefined8 *)(param_1 + 0x134) = 0x3f800000;
  *(undefined8 *)(param_1 + 300) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x13c) = 0;
  *(undefined1 *)(param_1 + 0x140) = 0;
  *(long *)(param_1 + 0x118) = param_1 + 0x120;
  *(undefined ***)(param_1 + 0x120) = &PTR_FUN_10149aaa8;
  *(undefined4 *)(param_1 + 0x128) = 0x41600000;
  lVar2 = FUN_10049fdbc(param_1 + 0x100);
  plVar3 = (long *)FUN_10048602c(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))();
  (**(code **)(*plVar3 + 0x58))(plVar3,param_3);
  FUN_100486124(lVar2 + 0x10);
  return;
}




void FUN_100487bac(long param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  undefined4 uVar4;
  
  *param_2 = "Effect_Malene_DarkAttack";
  param_2[4] = "Effect_Malene_DarkHit";
  param_2[0xc] = "Sound_Malene_Evil_Auto_Impact_1";
  param_2[0xd] = "Sound_Malene_Evil_Auto_Impact_2";
  param_2[0xe] = "Sound_Malene_Evil_Auto_Impact_3";
  uVar1 = FUN_1010a1520();
  lVar2 = FUN_1010a0e0c(uVar1,0,"*KindredSoundBalance*",0);
  uVar4 = FUN_1003b7e84(*(undefined4 *)(lVar2 + 0x48c));
  *(undefined4 *)(param_2 + 0x15) = uVar4;
  *(undefined2 *)((long)param_2 + 0xa4) = 0x199a;
  *(undefined1 *)((long)param_2 + 0xa6) = 0xe6;
  *(undefined4 *)(param_1 + 0x88) = 0x3e19999a;
  *(undefined8 *)(param_1 + 0x134) = 0x3f800000;
  *(undefined8 *)(param_1 + 300) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x13c) = 0;
  *(undefined1 *)(param_1 + 0x140) = 0;
  *(long *)(param_1 + 0x118) = param_1 + 0x120;
  *(undefined ***)(param_1 + 0x120) = &PTR_FUN_10149aaa8;
  *(undefined4 *)(param_1 + 0x128) = 0x41600000;
  lVar2 = FUN_10049fdbc(param_1 + 0x100);
  plVar3 = (long *)FUN_10048602c(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))();
  (**(code **)(*plVar3 + 0x58))(plVar3,param_3);
  FUN_100486124(lVar2 + 0x10);
  return;
}




void FUN_100487cc4(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  undefined4 uVar4;
  code *local_30;
  undefined4 local_28;
  
  *param_2 = "Effect_Malene_LightEmpoweredAttack";
  param_2[4] = "Effect_Malene_LightEmpHit";
  param_2[0xc] = "Sound_Malene_Good_Empowered_Impact";
  uVar1 = FUN_1010a1520();
  lVar2 = FUN_1010a0e0c(uVar1,0,"*KindredSoundBalance*",0);
  uVar4 = FUN_1003b7e84(*(undefined4 *)(lVar2 + 0x490));
  *(undefined4 *)(param_2 + 0x15) = uVar4;
  *(undefined2 *)((long)param_2 + 0xa4) = 0x3219;
  *(undefined1 *)((long)param_2 + 0xa6) = 0x4b;
  *(undefined4 *)(param_1 + 0x88) = 0x3e99999a;
  *(undefined8 *)(param_1 + 0x134) = 0x3f800000;
  *(undefined8 *)(param_1 + 300) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x13c) = 0;
  *(undefined1 *)(param_1 + 0x140) = 0;
  *(long *)(param_1 + 0x118) = param_1 + 0x120;
  *(undefined ***)(param_1 + 0x120) = &PTR_FUN_10149aaa8;
  *(undefined4 *)(param_1 + 0x128) = 0x41a00000;
  lVar2 = FUN_10049fdbc(param_1 + 0x100);
  lVar2 = lVar2 + 0x10;
  plVar3 = (long *)FUN_10048602c(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))();
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))(plVar3,"LIGHT_EMP_DAMAGE",5);
  (**(code **)(*plVar3 + 0x70))(plVar3,1);
  plVar3 = (long *)FUN_100485fa8(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))
                             (plVar3,PTR_s_Buff_Malene_LightEmpAutoSlow_10185ceb8);
  local_30 = FUN_100487e20;
  local_28 = 3;
  (**(code **)(*plVar3 + 0x18))(plVar3,&local_30);
  FUN_100486124(lVar2);
  return;
}




void FUN_100487e20(undefined8 param_1)

{
  FUN_1003dfe60(param_1,5,4,0x19,0);
  return;
}




void FUN_100487e34(long param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  undefined4 uVar4;
  code *local_40;
  undefined4 local_38;
  
  *param_2 = "Effect_Malene_DarkEmpoweredAttack";
  param_2[4] = "Effect_Malene_DarkEmpHit";
  param_2[0xc] = "Sound_Malene_Evil_Empowered_Impact";
  uVar1 = FUN_1010a1520();
  lVar2 = FUN_1010a0e0c(uVar1,0,"*KindredSoundBalance*",0);
  uVar4 = FUN_1003b7e84(*(undefined4 *)(lVar2 + 0x494));
  *(undefined4 *)(param_2 + 0x15) = uVar4;
  *(undefined2 *)((long)param_2 + 0xa4) = 0x199a;
  *(undefined1 *)((long)param_2 + 0xa6) = 0xe6;
  *(undefined4 *)(param_1 + 0x88) = 0x3e99999a;
  *(undefined8 *)(param_1 + 0x134) = 0x3f800000;
  *(undefined8 *)(param_1 + 300) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x13c) = 0;
  *(undefined1 *)(param_1 + 0x140) = 0;
  *(long *)(param_1 + 0x118) = param_1 + 0x120;
  *(undefined ***)(param_1 + 0x120) = &PTR_FUN_10149aaa8;
  *(undefined4 *)(param_1 + 0x128) = 0x41a00000;
  lVar2 = FUN_10049fdbc(param_1 + 0x100);
  lVar2 = lVar2 + 0x10;
  plVar3 = (long *)FUN_10048602c(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))();
  (**(code **)(*plVar3 + 0x58))(plVar3,param_3);
  plVar3 = (long *)FUN_10048602c(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))();
  local_40 = FUN_100487f84;
  local_38 = 3;
  (**(code **)(*plVar3 + 0x18))(plVar3,&local_40,1,1);
  FUN_100486124(lVar2);
  return;
}




void FUN_100487f84(undefined8 param_1)

{
  FUN_1003dfe60(param_1,4,3,0x19,0);
  return;
}




void FUN_100487f98(undefined8 param_1)

{
  FUN_1003dfe60(param_1,0,5,0x19,0);
  return;
}




void FUN_100487fac(undefined8 param_1)

{
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d90c3c;
  FUN_1003dfee8(param_1,local_18,1,9);
  return;
}




void FUN_100487fe0(undefined8 param_1)

{
  FUN_1003dfe60(param_1,3,6,0x19,0);
  return;
}




void FUN_100487ff4(undefined8 param_1)

{
  FUN_1003dfe60(param_1,8,8,0x19,0);
  return;
}




void FUN_100488008(undefined8 param_1)

{
  FUN_1003dfe60(param_1,2,3,0x19,0);
  return;
}




void FUN_10048801c(undefined8 param_1)

{
  FUN_1003dfe60(param_1,0,4,0x19,0);
  return;
}




void FUN_100488030(undefined8 param_1,int *param_2)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  float fVar11;
  undefined **local_730;
  undefined8 uStack_728;
  undefined4 local_720;
  float fStack_71c;
  undefined4 local_718;
  undefined4 local_714;
  undefined1 local_710;
  undefined **local_708;
  undefined8 local_700;
  undefined1 local_6f8;
  undefined4 local_6f4;
  float fStack_6f0;
  undefined4 local_6ec;
  undefined8 local_6e8;
  undefined8 uStack_6e0;
  float local_6d8;
  undefined8 local_6d4;
  undefined8 uStack_6cc;
  undefined1 local_6c4;
  undefined4 local_6c0;
  undefined8 local_6bc;
  undefined4 local_6b4;
  undefined2 local_6b0;
  byte local_6ae;
  long local_6a8 [200];
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_101444218;
  uVar4 = FUN_10047434c();
  lVar5 = FUN_10047456c(param_1);
  *param_2 = -1;
  if (lVar5 != 0) {
    local_708 = &PTR_FUN_101499960;
    local_6e8 = 0;
    uStack_6e0 = 0;
    uStack_6cc = 0x3f800000bf800000;
    local_6d4 = 0xc0000000bf800000;
    local_6c4 = 0xff;
    local_6bc = 0xffffffff;
    local_6b4 = 0xffffffff;
    local_6f8 = 1;
    lVar6 = FUN_1003e10f0();
    bVar2 = *(byte *)(lVar6 + 0xe5);
    uVar9 = *(undefined4 *)(lVar5 + 0x250);
    uVar10 = *(undefined4 *)(lVar5 + 600);
    fVar11 = *(float *)(lVar5 + 0x2ec) + *(float *)(lVar5 + 0x254);
    local_6a8[0]._0_4_ = DAT_101d90cd0;
    local_700 = uVar4;
    local_6d8 = (float)FUN_1003dfee8(uVar4,local_6a8,2,9);
    local_6d8 = local_6d8 * local_6d8;
    local_6ae = bVar2 | 0x14;
    local_6b0 = 0xc120;
    local_6c0 = 1;
    local_730 = &PTR_FUN_101499a08;
    uStack_728 = 0;
    local_714 = 200;
    local_710 = 1;
    local_720 = uVar9;
    fStack_71c = fVar11;
    local_718 = uVar10;
    local_6f4 = uVar9;
    fStack_6f0 = fVar11;
    local_6ec = uVar10;
    uVar3 = FUN_1003a6ce4(&local_708,local_6a8,200,&local_730);
    if (uVar3 != 0) {
      uVar7 = (ulong)uVar3;
      plVar8 = local_6a8;
      do {
        if ((*plVar8 != 0) && (iVar1 = *(int *)(*plVar8 + 0x260), iVar1 != *(int *)(lVar5 + 0x260)))
        {
          *param_2 = iVar1;
          break;
        }
        plVar8 = plVar8 + 1;
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
    }
  }
  if (*(long *)PTR____stack_chk_guard_101444218 != local_68) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}




void FUN_1004881d0(undefined8 param_1)

{
  FUN_1003dfe60(param_1,2,5,0x19,0);
  return;
}




void FUN_1004881e4(long param_1,undefined8 *param_2,undefined4 param_3)

{
  long lVar1;
  long lVar2;
  
  *param_2 = "Effect_Samuel_AA";
  param_2[4] = "Effect_Samuel_AA_Impact";
  param_2[0xc] = "Sound_Samuel_attack_hit_1";
  param_2[0xd] = "Sound_Samuel_attack_hit_2";
  param_2[0xe] = "Sound_Samuel_attack_hit_3";
  param_2[0xf] = "Sound_Samuel_attack_hit_4";
  *(undefined4 *)(param_2 + 0x15) = 0x3f000000;
  *(undefined4 *)(param_1 + 0x88) = 0x3f000000;
  *(undefined8 *)(param_1 + 0x134) = 0x3f800000;
  *(undefined8 *)(param_1 + 300) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x13c) = 0;
  *(undefined1 *)(param_1 + 0x140) = 0;
  *(long *)(param_1 + 0x118) = param_1 + 0x120;
  *(undefined ***)(param_1 + 0x120) = &PTR_FUN_10149aaa8;
  *(undefined4 *)(param_1 + 0x128) = 0x41a00000;
  lVar1 = FUN_10049fdbc(param_1 + 0x100);
  lVar2 = FUN_10049ff4c(lVar1 + 0x10);
  *(code **)(lVar2 + 0x18) = FUN_1004753b0;
  *(undefined8 *)(lVar2 + 0x28) = 0;
  *(undefined4 *)(lVar2 + 0x30) = param_3;
  FUN_100486124(lVar1 + 0x10);
  return;
}




void FUN_1004882b8(undefined8 param_1,float *param_2)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined4 local_48 [2];
  
  lVar3 = FUN_10047434c();
  fVar5 = (float)FUN_1003df710(lVar3,1,1);
  fVar6 = (float)FUN_1003df710(lVar3,2,1);
  lVar4 = *(long *)(lVar3 + 0x40);
  fVar7 = *(float *)(lVar4 + 0xd8) + *(float *)(lVar4 + 0x18c) * (*(float *)(lVar4 + 0x2f4) + 1.0);
  NEON_fminnm(fVar7 + fVar7 * *(float *)(lVar4 + 0x240),DAT_101e943c0);
  *param_2 = fVar5 + (DAT_101e94300 + -1.0) * (fVar6 - fVar5) * 0.09090909;
  puVar1 = PTR_s_Buff_Samuel_Talent_PowerSiphon_10185cbf0;
  lVar4 = FUN_100345d90(*(undefined4 *)(lVar3 + 0x260));
  if ((lVar4 != 0) && (iVar2 = FUN_1003a47d0(lVar4,puVar1), iVar2 != 0)) {
    local_48[0] = DAT_101d90dac;
    fVar5 = (float)FUN_1003dfee8(lVar3,local_48,0,9);
    *param_2 = *param_2 * fVar5;
  }
  lVar4 = FUN_10047445c(param_1);
  if ((lVar4 == 0) || ((*(byte *)(lVar4 + 0x2f4) & 1) == 0)) {
    fVar5 = (float)FUN_1003df710(lVar3,5,1);
    *param_2 = *param_2 * fVar5;
  }
  return;
}




void FUN_1004883f0(undefined8 param_1,float *param_2)

{
  long lVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  lVar1 = FUN_10047434c();
  fVar3 = (float)FUN_1003df710(lVar1,3,1);
  fVar4 = (float)FUN_1003df710(lVar1,4,1);
  lVar2 = *(long *)(lVar1 + 0x40);
  fVar5 = *(float *)(lVar2 + 0xd8) + *(float *)(lVar2 + 0x18c) * (*(float *)(lVar2 + 0x2f4) + 1.0);
  NEON_fminnm(fVar5 + fVar5 * *(float *)(lVar2 + 0x240),DAT_101e943c0);
  *param_2 = fVar3 + (DAT_101e94300 + -1.0) * (fVar4 - fVar3) * 0.09090909;
  lVar2 = FUN_10047445c(param_1);
  if ((lVar2 == 0) || ((*(byte *)(lVar2 + 0x2f4) & 1) == 0)) {
    fVar3 = (float)FUN_1003df710(lVar1,5,1);
    *param_2 = *param_2 * fVar3;
  }
  return;
}




undefined1  [16] FUN_1004884d4(undefined8 *param_1)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  float fVar5;
  undefined1 auVar6 [16];
  ulong uVar7;
  undefined8 uVar8;
  undefined4 local_38 [2];
  
  lVar3 = FUN_1004743d4(*param_1);
  auVar6 = FUN_1003dfe60(lVar3,4,5,0x19,0);
  puVar1 = PTR_s_Buff_Samuel_Talent_UnwakingNight_10185cbe8;
  uVar8 = auVar6._8_8_;
  uVar7 = auVar6._0_8_;
  lVar4 = FUN_100345d90(*(undefined4 *)(lVar3 + 0x260));
  if ((lVar4 != 0) && (iVar2 = FUN_1003a47d0(lVar4,puVar1), iVar2 != 0)) {
    local_38[0] = DAT_101d90da4;
    fVar5 = (float)FUN_1003dfee8(lVar3,local_38,1,9);
    uVar7 = (ulong)(uint)(fVar5 * auVar6._0_4_);
    uVar8 = 0;
  }
  auVar6._8_8_ = uVar8;
  auVar6._0_8_ = uVar7;
  return auVar6;
}




void FUN_100488568(long param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  float fVar7;
  float fVar8;
  undefined4 local_60 [2];
  undefined4 local_58;
  
  *param_2 = "Effect_SAW_Projectile";
  *(undefined1 *)(param_2 + 0x16) = 1;
  lVar3 = FUN_1004743d4();
  puVar1 = PTR_s_Buff_SAW_Talent_PiercingBullets_10185b048;
  lVar3 = FUN_100345d90(*(undefined4 *)(lVar3 + 0x260));
  if ((lVar3 != 0) && (iVar2 = FUN_1003a47d0(lVar3,puVar1), iVar2 != 0)) {
    *(undefined4 *)(param_1 + 0x88) = 0x3e19999a;
    *(undefined4 *)(param_1 + 0x128) = 0;
    *(undefined4 *)(param_1 + 300) = 0;
    *(undefined4 *)(param_1 + 0x130) = 0;
    *(undefined1 *)(param_1 + 0x134) = 1;
    *(long *)(param_1 + 0x118) = param_1 + 0x120;
    *(undefined ***)(param_1 + 0x120) = &PTR_FUN_10149aa80;
    lVar3 = FUN_1004743d4(param_1);
    fVar8 = *(float *)(*(long *)(lVar3 + 0x40) + 0x78);
    uVar4 = FUN_1004743d4(param_1);
    local_60[0] = DAT_101d90d08;
    fVar7 = (float)FUN_1003dfee8(uVar4,local_60,0,9);
    FUN_1004778c4(0x42340000,fVar8 + fVar7 + 1.8,param_1 + 0x120,param_1);
    lVar3 = FUN_10049fe0c(param_1 + 0x100);
    FUN_1004747d0(param_1);
    *(undefined4 *)(lVar3 + 0x40) = 0x40000;
    lVar5 = FUN_10049ff4c(lVar3 + 0x10);
    *(code **)(lVar5 + 0x18) = FUN_1004753b0;
    *(undefined8 *)(lVar5 + 0x28) = 0;
    *(undefined4 *)(lVar5 + 0x30) = param_3;
    plVar6 = (long *)FUN_100485fa8(lVar3 + 0x10);
    plVar6 = (long *)(**(code **)(*plVar6 + 0x38))
                               (plVar6,PTR_s_Buff_SAW_PiercingBullets_ImpactP_10185c768);
    local_60[0] = 0x3f000000;
    local_58 = 1;
    (**(code **)(*plVar6 + 0x18))(plVar6,local_60);
    lVar3 = FUN_10049feac(param_1 + 0x100);
    lVar3 = FUN_100486124(lVar3 + 0x10);
    *(undefined1 *)(lVar3 + 0x18) = 1;
    return;
  }
  param_2[4] = "Effect_SAW_Projectile_Impact";
  *(undefined8 *)(param_1 + 0x134) = 0x3f800000;
  *(undefined8 *)(param_1 + 300) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x13c) = 0;
  *(undefined1 *)(param_1 + 0x140) = 0;
  *(long *)(param_1 + 0x118) = param_1 + 0x120;
  *(undefined ***)(param_1 + 0x120) = &PTR_FUN_10149aaa8;
  *(undefined4 *)(param_1 + 0x128) = 0x41f00000;
  lVar3 = FUN_10049fdbc(param_1 + 0x100);
  lVar5 = FUN_10049ff4c(lVar3 + 0x10);
  *(code **)(lVar5 + 0x18) = FUN_1004753b0;
  *(undefined8 *)(lVar5 + 0x28) = 0;
  *(undefined4 *)(lVar5 + 0x30) = param_3;
  FUN_100486124(lVar3 + 0x10);
  return;
}




void FUN_10048878c(undefined8 param_1)

{
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d90d08;
  FUN_1003dfee8(param_1,local_18,0,9);
  return;
}




void FUN_1004887c0(long param_1,long param_2,float *param_3)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  float fVar5;
  undefined4 local_48 [2];
  
  lVar3 = FUN_10047434c();
  fVar5 = (float)FUN_1003dfe60(lVar3,0,0,0x19,0);
  *param_3 = fVar5;
  puVar1 = PTR_s_Buff_Skaarf_Talent_FlamingSludge_10185c848;
  lVar4 = FUN_100345d90(*(undefined4 *)(lVar3 + 0x260));
  if ((lVar4 != 0) && (iVar2 = FUN_1003a47d0(lVar4,puVar1), iVar2 != 0)) {
    local_48[0] = DAT_101d90d34;
    fVar5 = (float)FUN_1003dfee8(lVar3,local_48,0,9);
    *param_3 = *param_3 * fVar5;
  }
  if (*(char *)(param_2 + 0x2f6) < '\0') {
    fVar5 = (float)FUN_1003dfe60(lVar3,0,6,0x19,0);
    fVar5 = *param_3 * fVar5;
    *param_3 = fVar5;
  }
  else {
    fVar5 = *param_3;
  }
  *param_3 = fVar5 * *(float *)(param_1 + 0xf8);
  return;
}




void FUN_1004888a8(long param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined4 local_40 [2];
  undefined4 local_38;
  
  *param_2 = "Effect_Skye_DefaultAttack";
  param_2[4] = "Effect_Skye_DefaultAttack_Impact";
  *(undefined8 *)(param_1 + 0x134) = 0x3f800000;
  *(undefined8 *)(param_1 + 300) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x13c) = 0;
  *(undefined1 *)(param_1 + 0x140) = 0;
  *(long *)(param_1 + 0x118) = param_1 + 0x120;
  *(undefined ***)(param_1 + 0x120) = &PTR_FUN_10149aaa8;
  *(undefined4 *)(param_1 + 0x128) = 0x42200000;
  lVar3 = FUN_10049fdbc(param_1 + 0x100);
  lVar3 = lVar3 + 0x10;
  lVar4 = FUN_10049ff4c(lVar3);
  *(code **)(lVar4 + 0x18) = FUN_1004753b0;
  *(undefined8 *)(lVar4 + 0x28) = 0;
  *(undefined4 *)(lVar4 + 0x30) = param_3;
  lVar4 = FUN_1004743d4(param_1);
  puVar1 = PTR_s_Buff_Skye_Talent_EnhancedThruste_10185b0f0;
  lVar4 = FUN_100345d90(*(undefined4 *)(lVar4 + 0x260));
  if ((lVar4 != 0) && (iVar2 = FUN_1003a47d0(lVar4,puVar1), iVar2 != 0)) {
    plVar5 = (long *)FUN_100488d18(lVar3);
    plVar5 = (long *)(**(code **)(*plVar5 + 0x38))
                               (plVar5,PTR_s_Buff_Skye_EnhancedThrustersRecha_10185ca70);
    local_40[0] = 0x3f800000;
    local_38 = 1;
    (**(code **)(*plVar5 + 0x18))(plVar5,local_40);
  }
  FUN_100486124(lVar3);
  return;
}




float FUN_1004889c4(float param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  int iVar2;
  float fVar3;
  
  fVar3 = (float)FUN_1003dfe60(param_2,0,5,0x19,0);
  lVar1 = FUN_1003be600(param_2);
  if (lVar1 == 0) {
    iVar2 = -1;
  }
  else {
    iVar2 = *(int *)(lVar1 + 0x260);
  }
  param_1 = param_1 / fVar3;
  if (iVar2 == *(int *)(param_3 + 0x260)) {
    fVar3 = (float)FUN_1003dfe60(param_2,0,8,0x19,0);
    param_1 = param_1 + param_1 * fVar3;
  }
  if ((*(byte *)(param_3 + 0x2f6) & 1) != 0) {
    fVar3 = (float)FUN_1003dfe60(param_2,0,9,0x19,0);
    param_1 = fVar3 * param_1;
  }
  return param_1;
}




void FUN_100488a74(undefined8 param_1,undefined8 param_2,float *param_3)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  float fVar5;
  undefined4 local_38 [2];
  
  lVar3 = FUN_10047434c();
  FUN_1003dfe60(lVar3,0,2,4,0);
  fVar5 = (float)FUN_1004889c4(lVar3,param_2);
  *param_3 = fVar5;
  puVar1 = PTR_s_Buff_Skye_Talent_PiercingBarrage_10185ca60;
  lVar4 = FUN_100345d90(*(undefined4 *)(lVar3 + 0x260));
  if ((lVar4 != 0) && (iVar2 = FUN_1003a47d0(lVar4,puVar1), iVar2 != 0)) {
    local_38[0] = DAT_101d90d44;
    fVar5 = (float)FUN_1003dfee8(lVar3,local_38,0,9);
    *param_3 = *param_3 * fVar5;
  }
  return;
}




void FUN_100488b1c(undefined8 param_1,undefined8 param_2,float *param_3)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  float fVar5;
  undefined4 local_38 [2];
  
  lVar3 = FUN_10047434c();
  FUN_1003dfe60(lVar3,0,2,9,0);
  fVar5 = (float)FUN_1004889c4(lVar3,param_2);
  *param_3 = fVar5;
  puVar1 = PTR_s_Buff_Skye_Talent_PiercingBarrage_10185ca60;
  lVar4 = FUN_100345d90(*(undefined4 *)(lVar3 + 0x260));
  if ((lVar4 != 0) && (iVar2 = FUN_1003a47d0(lVar4,puVar1), iVar2 != 0)) {
    local_38[0] = DAT_101d90d44;
    fVar5 = (float)FUN_1003dfee8(lVar3,local_38,0,9);
    *param_3 = *param_3 * fVar5;
  }
  return;
}




bool FUN_100488bc4(undefined8 *param_1)

{
  bool bVar1;
  long lVar2;
  int iVar3;
  
  FUN_1004743d4(*param_1);
  if (param_1[1] == 0) {
    bVar1 = false;
  }
  else {
    lVar2 = FUN_1003be600();
    if (lVar2 == 0) {
      iVar3 = -1;
    }
    else {
      iVar3 = *(int *)(lVar2 + 0x260);
    }
    bVar1 = iVar3 == *(int *)(param_1[1] + 0x260);
  }
  return bVar1;
}




void FUN_100488c1c(undefined8 param_1,long param_2,float *param_3)

{
  long lVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  
  if ((*(uint *)(param_2 + 0x2f4) >> 3 & 1) == 0) {
    if ((*(uint *)(param_2 + 0x2f4) & 0x20000010) == 0) {
      lVar1 = FUN_10047434c();
      lVar1 = *(long *)(lVar1 + 0x40);
      fVar2 = *(float *)(lVar1 + 0x48) +
              *(float *)(lVar1 + 0xfc) * (*(float *)(lVar1 + 0x264) + 1.0);
      fVar2 = fVar2 + fVar2 * *(float *)(lVar1 + 0x1b0);
      fVar3 = DAT_101e94270;
      uVar4 = DAT_101e94330;
    }
    else {
      lVar1 = *(long *)(param_2 + 0x40);
      fVar2 = *(float *)(lVar1 + 0x38) +
              *(float *)(lVar1 + 0xec) * (*(float *)(lVar1 + 0x254) + 1.0);
      fVar2 = fVar2 + fVar2 * *(float *)(lVar1 + 0x1a0);
      fVar3 = DAT_101e94260;
      uVar4 = DAT_101e94320;
    }
    NEON_fminnm(fVar2,uVar4);
  }
  else {
    lVar1 = *(long *)(param_2 + 0x40);
    fVar3 = *(float *)(lVar1 + 0x38) + *(float *)(lVar1 + 0xec) * (*(float *)(lVar1 + 0x254) + 1.0);
    NEON_fminnm(fVar3 + fVar3 * *(float *)(lVar1 + 0x1a0),DAT_101e94320);
    fVar3 = DAT_101e94260 * 0.01;
  }
  *param_3 = fVar3;
  return;
}




void FUN_100488d18(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_10033db40();
  puVar2 = (undefined8 *)(lVar1 + 8);
  *puVar2 = 0;
  if (*param_1 == 0) {
    *param_1 = (long)puVar2;
  }
  else {
    *(undefined8 **)param_1[1] = puVar2;
  }
  param_1[1] = (long)puVar2;
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  return;
}




void FUN_100488d68(undefined8 param_1,long param_2,float *param_3)

{
  undefined8 uVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  
  uVar1 = FUN_10047434c();
  lVar2 = *(long *)(param_2 + 0x40);
  fVar3 = *(float *)(lVar2 + 0x38) + *(float *)(lVar2 + 0xec) * (*(float *)(lVar2 + 0x254) + 1.0);
  fVar4 = (float)NEON_fminnm(fVar3 + fVar3 * *(float *)(lVar2 + 0x1a0),DAT_101e94320);
  fVar3 = DAT_101e94260;
  if (DAT_101e94260 <= fVar4) {
    fVar3 = fVar4;
  }
  fVar4 = (float)FUN_1003dfe60(uVar1,1,0,0x19,0);
  fVar4 = *param_3 + fVar4 * fVar3;
  *param_3 = fVar4;
  fVar3 = (float)FUN_1003dfe60(uVar1,1,3,0x19,0);
  fVar4 = fVar4 + fVar3;
  *param_3 = fVar4;
  fVar3 = 0.25;
  if (((*(uint *)(param_2 + 0x2f4) >> 2 & 1) != 0) ||
     (fVar3 = 10.0, (*(uint *)(param_2 + 0x2f4) >> 4 & 1) != 0)) {
    *param_3 = fVar4 * fVar3;
  }
  return;
}




void FUN_100488e38(undefined8 param_1)

{
  FUN_1003dfe60(param_1,1,2,0x19,0);
  return;
}




void FUN_100488e4c(undefined4 param_1,long param_2,undefined8 *param_3,undefined8 param_4)

{
  long lVar1;
  long *plVar2;
  
  *param_3 = "Effect_Vox_Proj";
  param_3[4] = "Effect_Vox_Proj_Impact";
  param_3[0xc] = "Sound_Vox_Attack_Impact_1";
  param_3[0xd] = "Sound_Vox_Attack_Impact_2";
  param_3[0xe] = "Sound_Vox_Attack_Impact_3";
  *(undefined8 *)(param_2 + 0x134) = 0x3f800000;
  *(undefined8 *)(param_2 + 300) = 0xbf800000;
  *(undefined4 *)(param_2 + 0x13c) = 0;
  *(undefined1 *)(param_2 + 0x140) = 0;
  *(long *)(param_2 + 0x118) = param_2 + 0x120;
  *(undefined ***)(param_2 + 0x120) = &PTR_FUN_10149aaa8;
  *(undefined4 *)(param_2 + 0x128) = param_1;
  lVar1 = FUN_10049fdbc(param_2 + 0x100);
  plVar2 = (long *)FUN_10048602c(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x38))();
  (**(code **)(*plVar2 + 0x58))(plVar2,param_4);
  FUN_100486124(lVar1 + 0x10);
  return;
}




void FUN_100488f10(undefined8 param_1,long param_2,float *param_3)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined4 local_48 [2];
  
  lVar3 = FUN_10047434c();
  fVar7 = *(float *)(**(long **)(*(long *)(lVar3 + 0x38) + 0x228) + 8);
  lVar4 = *(long *)(*(long *)(lVar3 + 0x58) + 0x58);
  fVar5 = 0.0;
  if ((lVar4 != 0) && ((*(byte *)(lVar4 + 0x239) & 0x1c) != 0)) {
    fVar5 = (float)FUN_1003dfe60(lVar3,1,2,0x19,0);
  }
  fVar5 = fVar5 + fVar7;
  *param_3 = fVar5;
  fVar7 = (float)FUN_1003df710(lVar3,1,1);
  lVar4 = *(long *)(lVar3 + 0x40);
  fVar6 = *(float *)(lVar4 + 0x4c) + *(float *)(lVar4 + 0x100) * (*(float *)(lVar4 + 0x268) + 1.0);
  NEON_fminnm(fVar6 + fVar6 * *(float *)(lVar4 + 0x1b4),DAT_101e94334);
  fVar5 = fVar5 + fVar7 * DAT_101e94274;
  *param_3 = fVar5;
  if (*(char *)(param_2 + 0x2f6) < '\0') {
    fVar7 = (float)FUN_1003df710(lVar3,3,1);
    *param_3 = fVar7 * fVar5;
  }
  puVar1 = PTR_s_Buff_Vox_Talent_EchoChamber_10185c928;
  lVar4 = FUN_100345d90(*(undefined4 *)(lVar3 + 0x260));
  if ((lVar4 != 0) && (iVar2 = FUN_1003a47d0(lVar4,puVar1), iVar2 != 0)) {
    local_48[0] = DAT_101d90d90;
    fVar5 = (float)FUN_1003dfee8(lVar3,local_48,0,9);
    *param_3 = *param_3 * fVar5;
  }
  return;
}




void FUN_10048905c(undefined8 param_1,long param_2,float *param_3)

{
  long lVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined4 local_48 [2];
  
  lVar1 = FUN_10047434c();
  fVar5 = *(float *)(**(long **)(*(long *)(lVar1 + 0x38) + 0x228) + 8);
  lVar2 = *(long *)(*(long *)(lVar1 + 0x58) + 0x58);
  fVar3 = 0.0;
  if ((lVar2 != 0) && ((*(byte *)(lVar2 + 0x239) & 0x1c) != 0)) {
    fVar3 = (float)FUN_1003dfe60(lVar1,1,2,0x19,0);
  }
  fVar3 = fVar3 + fVar5;
  *param_3 = fVar3;
  fVar5 = (float)FUN_1003df710(lVar1,1,1);
  lVar2 = *(long *)(lVar1 + 0x40);
  fVar4 = *(float *)(lVar2 + 0x4c) + *(float *)(lVar2 + 0x100) * (*(float *)(lVar2 + 0x268) + 1.0);
  NEON_fminnm(fVar4 + fVar4 * *(float *)(lVar2 + 0x1b4),DAT_101e94334);
  fVar3 = fVar3 + fVar5 * DAT_101e94274;
  *param_3 = fVar3;
  if (*(char *)(param_2 + 0x2f6) < '\0') {
    fVar5 = (float)FUN_1003df710(lVar1,3,1);
    *param_3 = fVar5 * fVar3;
  }
  local_48[0] = DAT_101d90d90;
  fVar3 = (float)FUN_1003dfee8(lVar1,local_48,0,9);
  *param_3 = *param_3 * fVar3;
  return;
}




void FUN_100489188(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_10047434c();
  uVar2 = FUN_1003dfe60(uVar1,2,2,0x19,0);
  *param_3 = uVar2;
  return;
}




void FUN_1004891c0(undefined8 param_1)

{
  FUN_1003dfe60(param_1,2,3,0x19,0);
  return;
}




void FUN_1004891d4(undefined8 param_1)

{
  FUN_1003dfe60(param_1,7,3,0x19,0);
  return;
}




void FUN_1004891e8(undefined8 param_1)

{
  FUN_1003dfe60(param_1,7,4,0x19,0);
  return;
}




void FUN_1004891fc(undefined8 param_1)

{
  FUN_1003dfe60(param_1,7,5,0x19,0);
  return;
}




void FUN_100489210(undefined8 param_1)

{
  FUN_1003dfe60(param_1,8,2,0x19,0);
  return;
}




void FUN_100489224(undefined8 param_1)

{
  FUN_1003dfe60(param_1,8,4,0x19,0);
  return;
}




void FUN_100489238(long param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  undefined4 uVar4;
  
  FUN_1004743d4();
  *param_2 = "Effect_Lorelai_Proj";
  param_2[4] = "Effect_Lorelai_Proj_Hit";
  param_2[0xc] = "Sound_Lorelai_Basic_Impact";
  uVar1 = FUN_1010a1520();
  lVar2 = FUN_1010a0e0c(uVar1,0,"*KindredSoundBalance*",0);
  uVar4 = FUN_1003c7210(*(undefined4 *)(lVar2 + 0x430));
  *(undefined4 *)(param_2 + 0x15) = uVar4;
  *(undefined2 *)((long)param_2 + 0xa4) = 0;
  *(undefined1 *)((long)param_2 + 0xa6) = 0xff;
  *(undefined8 *)(param_1 + 0x134) = 0x3f800000;
  *(undefined8 *)(param_1 + 300) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x13c) = 0;
  *(undefined1 *)(param_1 + 0x140) = 0;
  *(long *)(param_1 + 0x118) = param_1 + 0x120;
  *(undefined ***)(param_1 + 0x120) = &PTR_FUN_10149aaa8;
  *(undefined4 *)(param_1 + 0x128) = 0x41600000;
  lVar2 = FUN_10049fdbc(param_1 + 0x100);
  plVar3 = (long *)FUN_10048602c(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))();
  (**(code **)(*plVar3 + 0x58))(plVar3,param_3);
  FUN_100486124(lVar2 + 0x10);
  return;
}




void FUN_100489330(undefined8 param_1)

{
  FUN_1003dfe60(param_1,2,4,0x19,0);
  return;
}




void FUN_100489344(undefined8 param_1)

{
  FUN_1003dfe60(param_1,2,3,0x19,0);
  return;
}




void FUN_100489358(long param_1,undefined8 *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  *param_2 = "Effect_Magnus_BasicAttack";
  param_2[4] = "Effect_Magnus_BasicAttack_Impact";
  param_2[0xc] = "Sound_Magnus_Auto_Impact_1";
  param_2[0xd] = "Sound_Magnus_Auto_Impact_2";
  param_2[0xe] = "Sound_Magnus_Auto_Impact_3";
  uVar4 = FUN_1010a1520();
  lVar5 = FUN_1010a0e0c(uVar4,0,"*KindredSoundBalance*",0);
  uVar7 = FUN_1003c9788(*(undefined4 *)(lVar5 + 0x54c));
  *(undefined4 *)(param_2 + 0x15) = uVar7;
  iVar1 = _rand();
  iVar1 = iVar1 % 2;
  if (iVar1 == 0) {
    iVar1 = -1;
  }
  *(undefined8 *)(param_1 + 0x13c) = 0x7f7fffff7f7fffff;
  *(undefined8 *)(param_1 + 0x134) = 0x7f7fffff7f7fffff;
  *(undefined4 *)(param_1 + 0x144) = 0x7f7fffff;
  *(undefined4 *)(param_1 + 0x148) = 0x7f7fffff;
  *(undefined4 *)(param_1 + 0x14c) = 0;
  *(undefined4 *)(param_1 + 0x154) = 0;
  *(long *)(param_1 + 0x118) = param_1 + 0x120;
  *(undefined ***)(param_1 + 0x120) = &PTR_FUN_10149aa08;
  *(float *)(param_1 + 0x128) = *(float *)(param_1 + 0x6c);
  *(float *)(param_1 + 300) = *(float *)(param_1 + 0x70);
  fVar8 = *(float *)(param_1 + 0x6c) - *(float *)(param_1 + 0xec);
  *(float *)(param_1 + 0x130) = *(float *)(param_1 + 0x74);
  fVar9 = *(float *)(param_1 + 0x70) - *(float *)(param_1 + 0xf0);
  fVar10 = *(float *)(param_1 + 0x74) - *(float *)(param_1 + 0xf4);
  *(float *)(param_1 + 0x150) = SQRT(fVar8 * fVar8 + fVar9 * fVar9 + fVar10 * fVar10) * 0.05;
  iVar2 = _rand();
  iVar3 = _rand();
  FUN_100476ac4((float)iVar2 * 4.656614e-11 + 0.45,
                ((float)iVar3 * 6.9849196e-11 + 0.15) * (float)iVar1,0,param_1 + 0x120,param_1);
  lVar5 = FUN_10049fdbc(param_1 + 0x100);
  plVar6 = (long *)FUN_10048602c(lVar5 + 0x10);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x38))();
  (**(code **)(*plVar6 + 0x58))(plVar6,param_3);
  FUN_100486124(lVar5 + 0x10);
  return;
}




void FUN_100489504(long param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined4 uVar4;
  
  *param_2 = "Effect_Ylva_AA";
  param_2[4] = "Effect_Ylva_AA_Impact";
  param_2[0xc] = "Sound_Ylva_Default_Impact_01";
  param_2[0xd] = "Sound_Ylva_Default_Impact_03";
  uVar1 = FUN_1010a1520();
  lVar2 = FUN_1010a0e0c(uVar1,0,"*KindredSoundBalance*",0);
  uVar4 = FUN_1003c9258(*(undefined4 *)(lVar2 + 0x578));
  *(undefined4 *)(param_2 + 0x15) = uVar4;
  *(undefined4 *)(param_1 + 0x13c) = 0;
  *(undefined8 *)(param_1 + 300) = 0xbf800000;
  *(undefined8 *)(param_1 + 0x134) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x140) = 0;
  *(long *)(param_1 + 0x118) = param_1 + 0x120;
  *(undefined ***)(param_1 + 0x120) = &PTR_FUN_10149aaa8;
  *(undefined4 *)(param_1 + 0x128) = 0x41600000;
  lVar2 = FUN_10049fdbc(param_1 + 0x100);
  lVar3 = FUN_10049ff4c(lVar2 + 0x10);
  *(code **)(lVar3 + 0x18) = FUN_1004753b0;
  *(undefined8 *)(lVar3 + 0x28) = 0;
  *(undefined4 *)(lVar3 + 0x30) = param_3;
  FUN_100486124(lVar2 + 0x10);
  return;
}




float FUN_1004895ec(undefined8 param_1,float *param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int local_60 [2];
  int local_58 [2];
  int local_50 [2];
  undefined4 local_48 [2];
  
  if (DAT_101d23a38 == '\0') {
    fVar7 = 0.0;
  }
  else {
    lVar2 = FUN_10047434c();
    lVar5 = *(long *)(lVar2 + 0x18);
    while ((lVar5 != 0 && (*(int *)(*(long *)(lVar5 + 8) + 0xa4) != DAT_10184daa8))) {
      lVar5 = *(long *)(lVar5 + 0x20);
    }
    *param_2 = 0.0;
    FUN_1003a4e5c(local_50,PTR_s_Buff_Ylva_A_Charging_10185cf40);
    lVar3 = *(long *)(lVar5 + 0x28);
    lVar4 = lVar3;
    if (lVar3 != 0) {
LAB_10048966c:
      if ((*(int *)(lVar4 + 0x314) != local_50[0]) || (*(int *)(lVar4 + 0x310) != 0))
      goto LAB_100489680;
      for (; *(int *)(lVar3 + 0x30c) != *(int *)(lVar4 + 0x30c); lVar3 = *(long *)(lVar3 + 0x350)) {
      }
      fVar8 = *(float *)(lVar3 + 0x318);
      fVar7 = (float)FUN_1003dfe60(lVar2,0,4,0x19,0);
      FUN_1003a4e5c(local_58,PTR_s_Buff_Ylva_Talent_TalentA_10185cf70);
      lVar4 = *(long *)(lVar5 + 0x28);
      do {
        if (lVar4 == 0) {
LAB_100489728:
          *param_2 = 1.0 - fVar8 / fVar7;
          break;
        }
        if ((*(int *)(lVar4 + 0x314) == local_58[0]) && (*(int *)(lVar4 + 0x310) == 0)) {
          local_48[0] = DAT_101d90e80;
          fVar6 = (float)FUN_1003dfee8(lVar2,local_48,0,9);
          fVar7 = fVar6 * fVar7;
          goto LAB_100489728;
        }
        lVar4 = *(long *)(lVar4 + 0x350);
      } while( true );
    }
LAB_100489738:
    fVar8 = *param_2;
    fVar7 = (float)FUN_1003dfe60(lVar2,0,2,0x19,0);
    fVar7 = fVar7 * fVar8;
    FUN_1003a4e5c(local_60,PTR_s_Buff_Ylva_Talent_TalentA_10185cf70);
    for (lVar5 = *(long *)(lVar5 + 0x28); lVar5 != 0; lVar5 = *(long *)(lVar5 + 0x350)) {
      if ((*(int *)(lVar5 + 0x314) == local_60[0]) && (*(int *)(lVar5 + 0x310) == 0)) {
        local_48[0] = DAT_101d90e80;
        fVar8 = (float)FUN_1003dfee8(lVar2,local_48,2,9);
        return fVar8 * fVar7;
      }
    }
  }
  return fVar7;
LAB_100489680:
  plVar1 = (long *)(lVar4 + 0x350);
  lVar4 = *plVar1;
  if (*plVar1 == 0) goto LAB_100489738;
  goto LAB_10048966c;
}




void FUN_1004897d0(undefined8 param_1)

{
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d90e80;
  FUN_1003dfee8(param_1,local_18,2,9);
  return;
}




void FUN_100489804(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  int local_50 [2];
  undefined4 local_48 [2];
  
  lVar1 = FUN_10047434c();
  lVar2 = *(long *)(lVar1 + 0x18);
  while ((lVar2 != 0 && (*(int *)(*(long *)(lVar2 + 8) + 0xa4) != DAT_10184daa8))) {
    lVar2 = *(long *)(lVar2 + 0x20);
  }
  fVar3 = (float)FUN_1003dfe60(lVar1,0,2,0x19,0);
  FUN_1003a4e5c(local_50,PTR_s_Buff_Ylva_Talent_TalentA_10185cf70);
  lVar2 = *(long *)(lVar2 + 0x28);
  do {
    if (lVar2 == 0) {
LAB_1004898cc:
      *(float *)(param_2 + 0x30) = fVar3;
      *(undefined4 *)(param_2 + 8) = 1;
      *(undefined2 *)(param_2 + 0xc) = 0xb;
      return;
    }
    if ((*(int *)(lVar2 + 0x314) == local_50[0]) && (*(int *)(lVar2 + 0x310) == 0)) {
      local_48[0] = DAT_101d90e80;
      fVar4 = (float)FUN_1003dfee8(lVar1,local_48,2,9);
      fVar3 = fVar4 * fVar3;
      goto LAB_1004898cc;
    }
    lVar2 = *(long *)(lVar2 + 0x350);
  } while( true );
}




void FUN_1004898f8(undefined8 param_1)

{
  FUN_1003dfe60(param_1,0,3,0x19,0);
  return;
}




float FUN_10048990c(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  float fVar3;
  
  lVar2 = FUN_1004743d4(*param_1);
  lVar1 = *(long *)(lVar2 + 0x40);
  fVar3 = *(float *)(lVar1 + 0x48) + *(float *)(lVar1 + 0xfc) * (*(float *)(lVar1 + 0x264) + 1.0);
  NEON_fminnm(fVar3 + fVar3 * *(float *)(lVar1 + 0x1b0),DAT_101e94330);
  return *(float *)(**(long **)(*(long *)(lVar2 + 0x38) + 0x228) + 8) * DAT_101e94270;
}




void FUN_100489970(undefined8 param_1)

{
  FUN_1003dfe60(param_1,0,1,0x19,0);
  return;
}




void FUN_100489984(undefined8 param_1)

{
  FUN_1003dfe60(param_1,2,1,0x19,0);
  return;
}




void FUN_100489998(long param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  undefined4 uVar4;
  
  *param_2 = "Effect_Kinetic_BasicAttack";
  param_2[4] = "Effect_Kinetic_BasicAttack_Impact";
  param_2[0xc] = "Sound_Kinetic_Ranged_Attack_Impact_01";
  param_2[0xd] = "Sound_Kinetic_Ranged_Attack_Impact_02";
  param_2[0xe] = "Sound_Kinetic_Ranged_Attack_Impact_03";
  uVar1 = FUN_1010a1520();
  lVar2 = FUN_1010a0e0c(uVar1,0,"*KindredSoundBalance*",0);
  uVar4 = FUN_1003c9d10(*(undefined4 *)(lVar2 + 0x4c8));
  *(undefined4 *)(param_2 + 0x15) = uVar4;
  *(undefined4 *)(param_1 + 0x13c) = 0;
  *(undefined8 *)(param_1 + 300) = 0xbf800000;
  *(undefined8 *)(param_1 + 0x134) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x140) = 0;
  *(long *)(param_1 + 0x118) = param_1 + 0x120;
  *(undefined ***)(param_1 + 0x120) = &PTR_FUN_10149aaa8;
  *(undefined4 *)(param_1 + 0x128) = 0x41a00000;
  lVar2 = FUN_10049fdbc(param_1 + 0x100);
  plVar3 = (long *)FUN_10048602c(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))();
  (**(code **)(*plVar3 + 0x58))(plVar3,param_3);
  FUN_100486124(lVar2 + 0x10);
  return;
}




void FUN_100489a94(undefined8 param_1)

{
  FUN_1003df710(param_1,2,0xb);
  return;
}




float FUN_100489aa0(undefined8 *param_1)

{
  undefined8 uVar1;
  float fVar2;
  
  uVar1 = FUN_1004743d4(*param_1);
  fVar2 = (float)FUN_1003dfe60(uVar1,1,5,0x19,0);
  return fVar2 + 1.0;
}




void FUN_100489ad4(undefined8 param_1)

{
  FUN_1003dfe60(param_1,1,7,0x19,0);
  return;
}




void FUN_100489ae8(undefined8 param_1)

{
  FUN_1003dfe60(param_1,1,8,0x19,0);
  return;
}




float FUN_100489afc(long *param_1)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  
  uVar1 = FUN_1004743d4(*param_1);
  fVar2 = (float)FUN_1003dfe60(uVar1,2,5,0x19,0);
  fVar3 = (float)FUN_1003dfe60(uVar1,2,6,0x19,0);
  return fVar2 + *(float *)(*param_1 + 0xf8) * fVar3 * fVar2;
}




float FUN_100489b6c(long *param_1)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  
  uVar1 = FUN_1004743d4(*param_1);
  fVar2 = (float)FUN_1003dfe60(uVar1,2,5,4,0);
  fVar3 = (float)FUN_1003dfe60(uVar1,2,6,0x19,0);
  return fVar2 + *(float *)(*param_1 + 0xf8) * fVar3 * fVar2;
}




void FUN_100489bdc(long param_1,undefined8 *param_2,undefined4 param_3)

{
  long lVar1;
  long lVar2;
  
  *param_2 = "Effect_Hero050_Attack";
  param_2[4] = "Effect_Hero050_Proj_Hit";
  *(undefined2 *)((long)param_2 + 0xa4) = 0xe6e6;
  *(undefined1 *)((long)param_2 + 0xa6) = 0xfa;
  *(undefined4 *)(param_1 + 0x88) = 0x3e19999a;
  *(undefined8 *)(param_1 + 0x134) = 0x3f800000;
  *(undefined8 *)(param_1 + 300) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x13c) = 0;
  *(undefined1 *)(param_1 + 0x140) = 0;
  *(long *)(param_1 + 0x118) = param_1 + 0x120;
  *(undefined ***)(param_1 + 0x120) = &PTR_FUN_10149aaa8;
  *(undefined4 *)(param_1 + 0x128) = 0x41800000;
  lVar1 = FUN_10049fdbc(param_1 + 0x100);
  lVar2 = FUN_10049ff4c(lVar1 + 0x10);
  *(code **)(lVar2 + 0x18) = FUN_1004753b0;
  *(undefined8 *)(lVar2 + 0x28) = 0;
  *(undefined4 *)(lVar2 + 0x30) = param_3;
  FUN_100486124(lVar1 + 0x10);
  return;
}




void FUN_100489c98(undefined8 param_1,long param_2)

{
  FUN_1004755b4();
  *(float *)(param_2 + 0x30) = *(float *)(param_2 + 0x30) * 0.33;
  return;
}




void FUN_100489ccc(undefined8 param_1)

{
  FUN_1003dfe60(param_1,2,3,0x19,0);
  return;
}




void FUN_100489ce0(undefined8 param_1)

{
  FUN_1003dfe60(param_1,2,4,0x19,0);
  return;
}




void FUN_100489cf4(long param_1,undefined8 *param_2,undefined4 param_3)

{
  long lVar1;
  long lVar2;
  
  *param_2 = "Effect_Hero051_GunA2Attack";
  param_2[4] = "Effect_Hero051_GunA2_Impact";
  *(undefined8 *)(param_1 + 0x134) = 0x3f800000;
  *(undefined8 *)(param_1 + 300) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x13c) = 0;
  *(undefined1 *)(param_1 + 0x140) = 0;
  *(long *)(param_1 + 0x118) = param_1 + 0x120;
  *(undefined ***)(param_1 + 0x120) = &PTR_FUN_10149aaa8;
  *(undefined4 *)(param_1 + 0x128) = 0x41a00000;
  lVar1 = FUN_10049fdbc(param_1 + 0x100);
  lVar2 = FUN_10049ff4c(lVar1 + 0x10);
  *(code **)(lVar2 + 0x18) = FUN_1004753b0;
  *(undefined8 *)(lVar2 + 0x28) = 0;
  *(undefined4 *)(lVar2 + 0x30) = param_3;
  FUN_100486124(lVar1 + 0x10);
  return;
}




void FUN_100489d94(undefined8 param_1,undefined8 param_2,float *param_3)

{
  long lVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  
  lVar1 = FUN_10047434c();
  lVar2 = *(long *)(lVar1 + 0x40);
  fVar3 = *(float *)(lVar2 + 0x48) + *(float *)(lVar2 + 0xfc) * (*(float *)(lVar2 + 0x264) + 1.0);
  fVar4 = (float)NEON_fminnm(fVar3 + fVar3 * *(float *)(lVar2 + 0x1b0),DAT_101e94330);
  fVar3 = DAT_101e94270;
  if (DAT_101e94270 <= fVar4) {
    fVar3 = fVar4;
  }
  *param_3 = fVar3;
  fVar4 = (float)FUN_1003df710(lVar1,1,1);
  *param_3 = fVar3 * fVar4;
  return;
}




void FUN_100489e10(undefined8 param_1)

{
  FUN_1003dfe60(param_1,1,4,0x19,0);
  return;
}




void FUN_100489e24(long param_1,undefined8 *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  char *pcVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  code *local_50;
  undefined4 local_48;
  
  *param_2 = "Effect_Hero051_GunA2Attack";
  param_2[4] = "Effect_Hero051_GunA2_Impact";
  *(undefined8 *)(param_1 + 0x13c) = 0x7f7fffff7f7fffff;
  *(undefined8 *)(param_1 + 0x134) = 0x7f7fffff7f7fffff;
  *(undefined4 *)(param_1 + 0x144) = 0x7f7fffff;
  *(undefined4 *)(param_1 + 0x148) = 0x7f7fffff;
  *(undefined4 *)(param_1 + 0x14c) = 0;
  *(undefined4 *)(param_1 + 0x154) = 0;
  *(long *)(param_1 + 0x118) = param_1 + 0x120;
  *(undefined ***)(param_1 + 0x120) = &PTR_FUN_10149aa08;
  *(float *)(param_1 + 0x128) = *(float *)(param_1 + 0x6c);
  *(float *)(param_1 + 300) = *(float *)(param_1 + 0x70);
  fVar10 = *(float *)(param_1 + 0x6c) - *(float *)(param_1 + 0xec);
  *(float *)(param_1 + 0x130) = *(float *)(param_1 + 0x74);
  fVar11 = *(float *)(param_1 + 0x70) - *(float *)(param_1 + 0xf0);
  fVar12 = *(float *)(param_1 + 0x74) - *(float *)(param_1 + 0xf4);
  *(float *)(param_1 + 0x150) = SQRT(fVar10 * fVar10 + fVar11 * fVar11 + fVar12 * fVar12) * 0.1;
  iVar2 = _rand();
  iVar3 = _rand();
  FUN_100476ac4((float)iVar2 * 2.7939678e-10 + 0.2,(float)iVar3 * 3.7252904e-10 + -0.4,0x3f000000,
                param_1 + 0x120,param_1);
  lVar4 = FUN_10049fdbc(param_1 + 0x100);
  lVar4 = lVar4 + 0x10;
  plVar5 = (long *)FUN_100485fa8(lVar4);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x38))(plVar5,PTR_s_Buff_Hero051_GunA2_10185b3f0);
  local_50._0_4_ = 0x40400000;
  local_48 = 1;
  (**(code **)(*plVar5 + 0x18))(plVar5,&local_50);
  plVar5 = (long *)FUN_100488d18(lVar4);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x38))(plVar5,PTR_s_Buff_Hero051_Perk_10185d048);
  local_50 = (code *)CONCAT44(local_50._4_4_,0x3fc00000);
  local_48 = 1;
  (**(code **)(*plVar5 + 0x18))(plVar5,&local_50);
  lVar6 = FUN_10049ff4c(lVar4);
  *(code **)(lVar6 + 0x18) = FUN_100489d94;
  *(mach_header **)(lVar6 + 0x28) = &__mh_execute_header;
  *(undefined4 *)(lVar6 + 0x30) = 0;
  lVar6 = FUN_100486650(lVar4);
  lVar7 = FUN_1004a01c8(lVar6 + 0x10);
  if (PTR_s_Ability__Hero051__B_101859c50 == (undefined *)0x0) {
    uVar8 = 0;
  }
  else {
    uVar8 = 0x811c9dc5;
    cVar1 = *PTR_s_Ability__Hero051__B_101859c50;
    pcVar9 = PTR_s_Ability__Hero051__B_101859c50;
    while (cVar1 != '\0') {
      pcVar9 = pcVar9 + 1;
      uVar8 = (uVar8 ^ (int)cVar1) * 0x1000193;
      cVar1 = *pcVar9;
    }
  }
  *(uint *)(lVar7 + 8) = uVar8;
  *(undefined4 *)(lVar7 + 0xc) = 1;
  plVar5 = (long *)FUN_100486d38(lVar6 + 0x58);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x30))();
  plVar5 = (long *)(**(code **)(*plVar5 + 0x10))(plVar5,PTR_s_Ability__Hero051__B_101859c50);
  local_50 = FUN_100489e10;
  local_48 = 3;
  (**(code **)(*plVar5 + 0x30))(plVar5,&local_50);
  FUN_100486124(lVar4);
  return;
}




void FUN_10048a088(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_10047434c();
  uVar2 = FUN_1003dfe60(uVar1,0,2,5,0);
  *param_3 = uVar2;
  return;
}




void FUN_10048a0c0(undefined8 param_1)

{
  FUN_1003dfe60(param_1,2,2,0x19,0);
  return;
}




void FUN_10048a0d4(undefined8 param_1)

{
  FUN_1003dfe60(param_1,1,2,0x19,0);
  return;
}




void FUN_10048a0e8(undefined8 param_1)

{
  FUN_1003dfe60(param_1,3,3,0x19,0);
  return;
}




void FUN_10048a0fc(undefined8 param_1)

{
  FUN_1003dfe60(param_1,0,7,0x19,0);
  return;
}




void FUN_10048a110(long param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  undefined4 uVar4;
  
  *param_2 = "Effect_Silvernail_DefaultAttack";
  if ((int)param_3 == 2) {
    param_2[4] = "Effect_Silvernail_CritAttack_Impact";
    param_2[0xc] = "Sound_Silvernail_Crit_Attack_01_Impact";
  }
  else if ((int)param_3 == 0) {
    param_2[4] = "Effect_Silvernail_DefaultAttack_Impact";
    param_2[0xc] = "Sound_Silvernail_Default_Attack_01_Impact";
    param_2[0xd] = "Sound_Silvernail_Default_Attack_02_Impact";
    param_2[0xe] = "Sound_Silvernail_Default_Attack_03_Impact";
  }
  uVar1 = FUN_1010a1520();
  lVar2 = FUN_1010a0e0c(uVar1,0,"*KindredSoundBalance*",0);
  uVar4 = FUN_1003cc63c(*(undefined4 *)(lVar2 + 0x4f0));
  *(undefined4 *)(param_2 + 0x15) = uVar4;
  *(undefined4 *)(param_1 + 0x88) = 0x3dcccccd;
  *(undefined4 *)(param_1 + 0x13c) = 0;
  *(undefined8 *)(param_1 + 300) = 0xbf800000;
  *(undefined8 *)(param_1 + 0x134) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x140) = 0;
  *(long *)(param_1 + 0x118) = param_1 + 0x120;
  *(undefined ***)(param_1 + 0x120) = &PTR_FUN_10149aaa8;
  *(undefined4 *)(param_1 + 0x128) = 0x41b00000;
  lVar2 = FUN_10049fdbc(param_1 + 0x100);
  plVar3 = (long *)FUN_10048602c(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))();
  (**(code **)(*plVar3 + 0x58))(plVar3,param_3);
  FUN_100486124(lVar2 + 0x10);
  return;
}




float FUN_10048a240(undefined8 *param_1)

{
  float fVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  lVar3 = FUN_1004743d4(*param_1);
  uVar2 = DAT_101e94330;
  fVar1 = DAT_101e94270;
  lVar5 = *(long *)(lVar3 + 0x18);
  while ((lVar5 != 0 && (*(int *)(*(long *)(lVar5 + 8) + 0xa4) != DAT_10184dab8))) {
    lVar5 = *(long *)(lVar5 + 0x20);
  }
  lVar4 = *(long *)(lVar3 + 0x40);
  fVar8 = *(float *)(lVar4 + 0x48);
  fVar9 = *(float *)(lVar4 + 0xfc);
  fVar11 = *(float *)(lVar4 + 0x264);
  fVar10 = *(float *)(lVar4 + 0x1b0);
  fVar6 = (float)FUN_1003df710(lVar3,1,1);
  if ((*(long *)(lVar5 + 0x70) != 0) && ((*(byte *)(*(long *)(lVar5 + 0x70) + 0x239) & 0x1c) != 0))
  {
    fVar7 = (float)FUN_1003dfe60(lVar3,4,5,0x19,0);
    fVar6 = fVar7 + fVar6;
  }
  fVar8 = fVar8 + fVar9 * (fVar11 + 1.0);
  NEON_fminnm(fVar8 + fVar8 * fVar10,uVar2);
  return fVar6 * fVar1;
}




void FUN_10048a330(long param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  undefined4 uVar4;
  code *local_40;
  undefined4 local_38;
  
  *param_2 = "Effect_Silvernail_DefaultAttack";
  if ((int)param_3 == 2) {
    param_2[4] = "Effect_Silvernail_CritAttack_Impact";
    param_2[0xc] = "Sound_Silvernail_Crit_Attack_01_Impact";
  }
  else if ((int)param_3 == 0) {
    param_2[4] = "Effect_Silvernail_DefaultAttack_Impact";
    param_2[0xc] = "Sound_Silvernail_Default_Attack_01_Impact";
    param_2[0xd] = "Sound_Silvernail_Default_Attack_02_Impact";
    param_2[0xe] = "Sound_Silvernail_Default_Attack_03_Impact";
  }
  uVar1 = FUN_1010a1520();
  lVar2 = FUN_1010a0e0c(uVar1,0,"*KindredSoundBalance*",0);
  uVar4 = FUN_1003cc63c(*(undefined4 *)(lVar2 + 0x4f0));
  *(undefined4 *)(param_2 + 0x15) = uVar4;
  *(undefined4 *)(param_1 + 0x88) = 0x3dcccccd;
  *(undefined4 *)(param_1 + 0x13c) = 0;
  *(undefined8 *)(param_1 + 300) = 0xbf800000;
  *(undefined8 *)(param_1 + 0x134) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x140) = 0;
  *(long *)(param_1 + 0x118) = param_1 + 0x120;
  *(undefined ***)(param_1 + 0x120) = &PTR_FUN_10149aaa8;
  *(undefined4 *)(param_1 + 0x128) = 0x41b00000;
  lVar2 = FUN_10049fdbc(param_1 + 0x100);
  plVar3 = (long *)FUN_10048602c(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))();
  local_40 = FUN_10048a240;
  local_38 = 4;
  plVar3 = (long *)(**(code **)(*plVar3 + 0x18))(plVar3,&local_40,0,0);
  (**(code **)(*plVar3 + 0x70))(plVar3,param_3);
  FUN_100486124(lVar2 + 0x10);
  return;
}




void FUN_10048a498(undefined8 param_1)

{
  FUN_1003dfe60(param_1,3,5,0x19,0);
  return;
}




float FUN_10048a4ac(undefined8 *param_1)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  
  uVar1 = FUN_1004744e4(*param_1);
  fVar2 = (float)FUN_1003dfe60(uVar1,4,2,0x19,0);
  fVar3 = (float)FUN_1003dfe60(uVar1,4,6,0x19,0);
  return fVar3 + fVar2;
}




void FUN_10048a50c(undefined4 param_1,undefined8 *param_2,long param_3)

{
  long lVar1;
  undefined **local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined1 local_70;
  undefined4 local_6c;
  undefined4 uStack_68;
  int local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined8 local_54;
  undefined8 local_4c;
  undefined8 local_40;
  undefined4 local_38;
  
  lVar1 = FUN_1004743d4(*param_2);
  if (lVar1 == 0) {
    lVar1 = FUN_1004744e4(*param_2);
  }
  else {
    lVar1 = FUN_1004743d4();
  }
  local_6c = *(undefined4 *)(lVar1 + 0x260);
  uStack_68 = *(undefined4 *)(param_3 + 0x260);
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  local_88 = &PTR_FUN_101496b18;
  local_64 = DAT_1018589d8;
  local_58 = 1;
  local_40 = 0;
  local_4c = 0;
  local_54 = 0;
  local_38 = DAT_101dc0b88;
  DAT_1018589d8 = DAT_1018589d8 + 1;
  local_5c = param_1;
  local_60 = FUN_1003d4e0c(PTR_s_Buff_Silvernail_C_KnockedIntoWal_10185d120);
  FUN_10049639c(&local_88,&DAT_101e47d30);
  return;
}




void FUN_10048a5dc(undefined8 param_1)

{
  FUN_1003dfe60(param_1,4,3,0x19,0);
  return;
}




void FUN_10048a5f0(undefined8 param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_10047445c();
  uVar2 = FUN_1003dfe60(uVar1,0,5,0x19,0);
  *param_2 = uVar2;
  return;
}




void FUN_10048a628(undefined8 param_1)

{
  FUN_1003dfe60(param_1,0,4,4,0);
  return;
}




void FUN_10048a63c(undefined8 param_1)

{
  FUN_1003dfe60(param_1,0,5,0x19,0);
  return;
}




void FUN_10048a650(undefined8 param_1)

{
  FUN_1003dfe60(param_1,0,4,0x19,0);
  return;
}




void FUN_10048a664(undefined8 param_1,long param_2,undefined4 *param_3)

{
  *param_3 = *(undefined4 *)(param_2 + 0x260);
  return;
}




void FUN_10048a670(undefined8 param_1)

{
  FUN_1003dfe60(param_1,1,4,0x19,0);
  return;
}




void FUN_10048a684(undefined8 param_1)

{
  FUN_1003dfe60(param_1,0,2,0x19,0);
  return;
}




void FUN_10048a698(long param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  undefined4 uVar4;
  
  *param_2 = "Effect_Warhawk_AA_Shot";
  param_2[4] = "Effect_Warhawk_AA_Shot_Impact";
  param_2[0xc] = "Sound_Warhawk_Attack_Impact_1";
  param_2[0xd] = "Sound_Warhawk_Attack_Impact_2";
  uVar1 = FUN_1010a1520();
  lVar2 = FUN_1010a0e0c(uVar1,0,"*KindredSoundBalance*",0);
  uVar4 = FUN_1003d04f8(*(undefined4 *)(lVar2 + 0x61c));
  *(undefined4 *)(param_2 + 0x15) = uVar4;
  *(undefined4 *)(param_1 + 0x13c) = 0;
  *(undefined8 *)(param_1 + 300) = 0xbf800000;
  *(undefined8 *)(param_1 + 0x134) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x140) = 0;
  *(long *)(param_1 + 0x118) = param_1 + 0x120;
  *(undefined ***)(param_1 + 0x120) = &PTR_FUN_10149aaa8;
  *(undefined4 *)(param_1 + 0x128) = 0x41a00000;
  lVar2 = FUN_10049fdbc(param_1 + 0x100);
  plVar3 = (long *)FUN_10048602c(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))();
  (**(code **)(*plVar3 + 0x58))(plVar3,param_3);
  FUN_100486124(lVar2 + 0x10);
  return;
}




void FUN_10048a788(long param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  undefined4 uVar4;
  
  *param_2 = "Effect_Ishtar_BasicAttack";
  param_2[4] = "Effect_Ishtar_BasicAttack_Impact";
  param_2[0xc] = "Sound_Ishtar_Default_Impact_01";
  param_2[0xd] = "Sound_Ishtar_Default_Impact_02";
  param_2[0xe] = "Sound_Ishtar_Default_Impact_03";
  uVar1 = FUN_1010a1520();
  lVar2 = FUN_1010a0e0c(uVar1,0,"*KindredSoundBalance*",0);
  uVar4 = FUN_1003d0cf8(*(undefined4 *)(lVar2 + 0x668));
  *(undefined4 *)(param_2 + 0x15) = uVar4;
  *(undefined4 *)(param_1 + 0x13c) = 0;
  *(undefined8 *)(param_1 + 300) = 0xbf800000;
  *(undefined8 *)(param_1 + 0x134) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x140) = 0;
  *(long *)(param_1 + 0x118) = param_1 + 0x120;
  *(undefined ***)(param_1 + 0x120) = &PTR_FUN_10149aaa8;
  *(undefined4 *)(param_1 + 0x128) = 0x41a00000;
  lVar2 = FUN_10049fdbc(param_1 + 0x100);
  plVar3 = (long *)FUN_10048602c(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))();
  (**(code **)(*plVar3 + 0x58))(plVar3,param_3);
  FUN_100486124(lVar2 + 0x10);
  return;
}




void FUN_10048a884(long param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  undefined4 uVar4;
  
  *param_2 = "Effect_Viola_BasicAttack";
  *(undefined2 *)((long)param_2 + 0xa4) = 0xff00;
  param_2[4] = "Effect_Viola_BasicAttack_Impact";
  *(undefined1 *)((long)param_2 + 0xa6) = 0;
  param_2[0xc] = "Sound_Viola_Basic_Attack_Impact_01";
  param_2[0xd] = "Sound_Viola_Basic_Attack_Impact_02";
  param_2[0xe] = "Sound_Viola_Basic_Attack_Impact_03";
  uVar1 = FUN_1010a1520();
  lVar2 = FUN_1010a0e0c(uVar1,0,"*KindredSoundBalance*",0);
  uVar4 = FUN_1003d0fb8(*(undefined4 *)(lVar2 + 0x6a8));
  *(undefined4 *)(param_2 + 0x15) = uVar4;
  *(undefined4 *)(param_1 + 0x13c) = 0;
  *(undefined8 *)(param_1 + 300) = 0xbf800000;
  *(undefined8 *)(param_1 + 0x134) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x140) = 0;
  *(long *)(param_1 + 0x118) = param_1 + 0x120;
  *(undefined ***)(param_1 + 0x120) = &PTR_FUN_10149aaa8;
  *(undefined4 *)(param_1 + 0x128) = 0x41a00000;
  lVar2 = FUN_10049fdbc(param_1 + 0x100);
  plVar3 = (long *)FUN_10048602c(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))();
  (**(code **)(*plVar3 + 0x58))(plVar3,param_3);
  FUN_100486124(lVar2 + 0x10);
  return;
}




void FUN_10048a98c(undefined8 param_1)

{
  FUN_1003dfe60(param_1,0,4,0x19,0);
  return;
}




void FUN_10048a9a0(undefined8 param_1)

{
  FUN_1003dfe60(param_1,1,3,0x19,0);
  return;
}




void FUN_10048a9b4(undefined8 param_1)

{
  FUN_1003dfe60(param_1,0,0xb,0x19,0);
  return;
}




void FUN_10048a9c8(undefined8 param_1)

{
  FUN_1003dfe60(param_1,0,9,0x19,0);
  return;
}




void FUN_10048a9dc(long param_1,undefined8 *param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  undefined4 uVar5;
  
  lVar1 = FUN_1004743d4();
  *param_2 = "Effect_Karas_BasicAttack";
  param_2[4] = "Effect_Karas_BasicAttack_Impact";
  param_2[0xc] = "Sound_Karas_Attack_Impact_1";
  param_2[0xd] = "Sound_Karas_Attack_Impact_2";
  uVar2 = FUN_1010a1520();
  lVar3 = FUN_1010a0e0c(uVar2,0,"*KindredSoundBalance*",0);
  uVar5 = FUN_1003d1b2c(*(undefined4 *)(lVar3 + 0x6e4));
  *(undefined4 *)(param_2 + 0x15) = uVar5;
  *(undefined1 *)(param_2 + 0x16) = 1;
  *(undefined4 *)(param_1 + 0x13c) = 0;
  uVar2 = NEON_fmov(0xbf800000,4);
  *(undefined8 *)(param_1 + 0x128) = uVar2;
  *(undefined4 *)(param_1 + 0x130) = 0;
  *(undefined8 *)(param_1 + 0x134) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x140) = 0;
  *(long *)(param_1 + 0x118) = param_1 + 0x120;
  *(undefined ***)(param_1 + 0x120) = &PTR_FUN_10149aaa8;
  *(undefined4 *)(param_1 + 0x128) =
       *(undefined4 *)(**(long **)(*(long *)(lVar1 + 0x38) + 0x228) + 8);
  lVar1 = FUN_10049fdbc(param_1 + 0x100);
  plVar4 = (long *)FUN_10048602c(lVar1 + 0x10);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x38))();
  (**(code **)(*plVar4 + 0x58))(plVar4,param_3);
  FUN_100486124(lVar1 + 0x10);
  return;
}




void FUN_10048aae8(long param_1,undefined8 *param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  undefined4 uVar5;
  
  lVar1 = FUN_1004743d4();
  *param_2 = "Effect_Karas_AltAttack";
  param_2[4] = "Effect_Karas_BasicAttack_Impact";
  param_2[0xc] = "Sound_Karas_Attack_Impact_1";
  param_2[0xd] = "Sound_Karas_Attack_Impact_2";
  uVar2 = FUN_1010a1520();
  lVar3 = FUN_1010a0e0c(uVar2,0,"*KindredSoundBalance*",0);
  uVar5 = FUN_1003d1b2c(*(undefined4 *)(lVar3 + 0x6e4));
  *(undefined4 *)(param_2 + 0x15) = uVar5;
  *(undefined1 *)(param_2 + 0x16) = 1;
  *(undefined4 *)(param_1 + 0x13c) = 0;
  uVar2 = NEON_fmov(0xbf800000,4);
  *(undefined8 *)(param_1 + 0x128) = uVar2;
  *(undefined4 *)(param_1 + 0x130) = 0;
  *(undefined8 *)(param_1 + 0x134) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x140) = 0;
  *(long *)(param_1 + 0x118) = param_1 + 0x120;
  *(undefined ***)(param_1 + 0x120) = &PTR_FUN_10149aaa8;
  *(undefined4 *)(param_1 + 0x128) =
       *(undefined4 *)(**(long **)(*(long *)(lVar1 + 0x38) + 0x228) + 8);
  lVar1 = FUN_10049fdbc(param_1 + 0x100);
  plVar4 = (long *)FUN_10048602c(lVar1 + 0x10);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x38))();
  (**(code **)(*plVar4 + 0x58))(plVar4,param_3);
  FUN_100486124(lVar1 + 0x10);
  return;
}




void FUN_10048abf4(long param_1,undefined8 *param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  undefined4 uVar5;
  
  lVar1 = FUN_1004743d4();
  *param_2 = "Effect_Karas_CritAttack";
  param_2[4] = "Effect_Karas_BasicAttack_Impact";
  param_2[0xc] = "Sound_Karas_Attack_Impact_1";
  param_2[0xd] = "Sound_Karas_Attack_Impact_2";
  uVar2 = FUN_1010a1520();
  lVar3 = FUN_1010a0e0c(uVar2,0,"*KindredSoundBalance*",0);
  uVar5 = FUN_1003d1b2c(*(undefined4 *)(lVar3 + 0x6e4));
  *(undefined4 *)(param_2 + 0x15) = uVar5;
  *(undefined1 *)(param_2 + 0x16) = 1;
  *(undefined4 *)(param_1 + 0x13c) = 0;
  uVar2 = NEON_fmov(0xbf800000,4);
  *(undefined8 *)(param_1 + 0x128) = uVar2;
  *(undefined4 *)(param_1 + 0x130) = 0;
  *(undefined8 *)(param_1 + 0x134) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x140) = 0;
  *(long *)(param_1 + 0x118) = param_1 + 0x120;
  *(undefined ***)(param_1 + 0x120) = &PTR_FUN_10149aaa8;
  *(undefined4 *)(param_1 + 0x128) =
       *(undefined4 *)(**(long **)(*(long *)(lVar1 + 0x38) + 0x228) + 8);
  lVar1 = FUN_10049fdbc(param_1 + 0x100);
  plVar4 = (long *)FUN_10048602c(lVar1 + 0x10);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x38))();
  (**(code **)(*plVar4 + 0x58))(plVar4,param_3);
  FUN_100486124(lVar1 + 0x10);
  return;
}




void FUN_10048ad00(undefined8 param_1)

{
  FUN_1003dfe60(param_1,0,5,0x19,0);
  return;
}




void FUN_10048ad14(undefined8 param_1)

{
  FUN_1003dfe60(param_1,1,4,0x19,0);
  return;
}




void FUN_10048ad28(undefined8 param_1)

{
  FUN_1003dfe60(param_1,4,3,0x19,0);
  return;
}




void FUN_10048ad3c(long param_1,undefined8 *param_2,undefined8 param_3)

{
  long lVar1;
  long *plVar2;
  
  FUN_1004743d4();
  *param_2 = "Effect_Maaya_BasicAttack";
  param_2[4] = "Effect_Maaya_BasicAttack_Impact";
  *(undefined1 *)(param_2 + 0x16) = 1;
  *(undefined4 *)(param_1 + 0x13c) = 0;
  *(undefined8 *)(param_1 + 300) = 0xbf800000;
  *(undefined8 *)(param_1 + 0x134) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x140) = 0;
  *(long *)(param_1 + 0x118) = param_1 + 0x120;
  *(undefined ***)(param_1 + 0x120) = &PTR_FUN_10149aaa8;
  *(undefined4 *)(param_1 + 0x128) = 0x41f00000;
  lVar1 = FUN_10049fdbc(param_1 + 0x100);
  plVar2 = (long *)FUN_10048602c(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x38))();
  (**(code **)(*plVar2 + 0x58))(plVar2,param_3);
  FUN_100486124(lVar1 + 0x10);
  return;
}




void FUN_10048ae00(long param_1,undefined8 *param_2,undefined8 param_3)

{
  long lVar1;
  long *plVar2;
  
  FUN_1004743d4();
  *param_2 = "Effect_Maaya_AltAttack";
  param_2[4] = "Effect_Maaya_BasicAttack_Impact";
  *(undefined1 *)(param_2 + 0x16) = 1;
  *(undefined4 *)(param_1 + 0x13c) = 0;
  *(undefined8 *)(param_1 + 300) = 0xbf800000;
  *(undefined8 *)(param_1 + 0x134) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x140) = 0;
  *(long *)(param_1 + 0x118) = param_1 + 0x120;
  *(undefined ***)(param_1 + 0x120) = &PTR_FUN_10149aaa8;
  *(undefined4 *)(param_1 + 0x128) = 0x41f00000;
  lVar1 = FUN_10049fdbc(param_1 + 0x100);
  plVar2 = (long *)FUN_10048602c(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x38))();
  (**(code **)(*plVar2 + 0x58))(plVar2,param_3);
  FUN_100486124(lVar1 + 0x10);
  return;
}




void FUN_10048aec4(long param_1,undefined8 *param_2,undefined8 param_3)

{
  long lVar1;
  long *plVar2;
  
  FUN_1004743d4();
  *param_2 = "Effect_Maaya_CritAttack";
  param_2[4] = "Effect_Maaya_BasicAttack_Impact";
  *(undefined1 *)(param_2 + 0x16) = 1;
  *(undefined4 *)(param_1 + 0x13c) = 0;
  *(undefined8 *)(param_1 + 300) = 0xbf800000;
  *(undefined8 *)(param_1 + 0x134) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x140) = 0;
  *(long *)(param_1 + 0x118) = param_1 + 0x120;
  *(undefined ***)(param_1 + 0x120) = &PTR_FUN_10149aaa8;
  *(undefined4 *)(param_1 + 0x128) = 0x41f00000;
  lVar1 = FUN_10049fdbc(param_1 + 0x100);
  plVar2 = (long *)FUN_10048602c(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x38))();
  (**(code **)(*plVar2 + 0x58))(plVar2,param_3);
  FUN_100486124(lVar1 + 0x10);
  return;
}




void FUN_10048af88(undefined8 param_1)

{
  FUN_1003dfe60(param_1,0,4,0x19,0);
  return;
}




void FUN_10048af9c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10149ab20;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  return;
}




void FUN_10048afbc(long param_1,long *param_2)

{
  int iVar1;
  long lVar2;
  float fVar3;
  
  lVar2 = FUN_1003dc44c(*(undefined8 *)(*(long *)(*param_2 + 0x10) + 0x10),param_1 + 0x20);
  if (lVar2 != 0) {
    fVar3 = (float)FUN_1000bbea4(param_1 + 0x10,param_2,
                                 *(undefined8 *)(*(long *)(*param_2 + 0x10) + 0x10));
    *(float *)(param_1 + 0x24) = fVar3;
    iVar1 = *(int *)(param_1 + 0x28);
    if (iVar1 == 2) {
      *(float *)(lVar2 + 0x60) = fVar3;
    }
    else if (iVar1 == 1) {
      *(float *)(lVar2 + 0x5c) = *(float *)(lVar2 + 0x5c) * fVar3;
    }
    else if (iVar1 == 0) {
      *(float *)(lVar2 + 0x58) = *(float *)(lVar2 + 0x58) + fVar3;
    }
  }
  return;
}




void FUN_10048b058(long param_1,long *param_2)

{
  int iVar1;
  long lVar2;
  
  lVar2 = FUN_1003dc44c(*(undefined8 *)(*(long *)(*param_2 + 0x10) + 0x10),param_1 + 0x20);
  if (lVar2 != 0) {
    iVar1 = *(int *)(param_1 + 0x28);
    if (iVar1 == 2) {
      *(undefined4 *)(lVar2 + 0x60) = 0xbf800000;
    }
    else if (iVar1 == 1) {
      *(float *)(lVar2 + 0x5c) = *(float *)(lVar2 + 0x5c) / *(float *)(param_1 + 0x24);
    }
    else if (iVar1 == 0) {
      *(float *)(lVar2 + 0x58) = *(float *)(lVar2 + 0x58) - *(float *)(param_1 + 0x24);
    }
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  return;
}




void FUN_10048b0d8(long param_1,long *param_2)

{
  int iVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  
  lVar2 = FUN_1003dc44c(*(undefined8 *)(*(long *)(*param_2 + 0x10) + 0x10),param_1 + 0x20);
  if (lVar2 != 0) {
    fVar4 = *(float *)(param_1 + 0x24);
    fVar3 = (float)FUN_1000bbea4(param_1 + 0x10,param_2,
                                 *(undefined8 *)(*(long *)(*param_2 + 0x10) + 0x10));
    *(float *)(param_1 + 0x24) = fVar3;
    iVar1 = *(int *)(param_1 + 0x28);
    if (iVar1 == 2) {
      *(float *)(lVar2 + 0x60) = fVar3;
    }
    else if (iVar1 == 1) {
      *(float *)(lVar2 + 0x5c) = (*(float *)(lVar2 + 0x5c) * fVar3) / fVar4;
    }
    else if (iVar1 == 0) {
      *(float *)(lVar2 + 0x58) = (fVar3 - fVar4) + *(float *)(lVar2 + 0x58);
    }
  }
  return;
}




void FUN_10048b188(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10149ab60;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  param_1[4] = 0;
  return;
}




void FUN_10048b1a4(long param_1,long *param_2)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(*(long *)(*param_2 + 0x10) + 0x10);
  lVar2 = FUN_1003dc44c(uVar3,param_1 + 0x20);
  if (lVar2 != 0) {
    uVar1 = FUN_10048b224(param_1 + 0x10,param_2,uVar3);
    *(undefined4 *)(param_1 + 0x24) = uVar1;
    *(char *)(lVar2 + 0x69) = *(char *)(lVar2 + 0x69) + (char)uVar1;
    FUN_10046c5ac(lVar2,(int)(char)uVar1);
    return;
  }
  return;
}




ulong FUN_10048b224(uint *param_1,long *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  ulong uVar2;
  uint *puVar3;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar4;
  long lVar5;
  
  uVar2 = (ulong)param_1[2];
  switch(uVar2) {
  case 0:
    break;
  case 1:
    uVar2 = (ulong)*param_1;
    break;
  case 2:
                    /* WARNING: Could not recover jumptable at 0x00010048b27c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)param_1)();
    return uVar2;
  case 3:
    UNRECOVERED_JUMPTABLE = *(code **)param_1;
    lVar5 = *param_2;
    param_2 = *(long **)(*(long *)(lVar5 + 0x10) + 0x10);
    if ((int)param_2[0x4c] != *(int *)(lVar5 + 0x308)) {
      param_2 = (long *)FUN_100345d90();
    }
    goto LAB_10048b2c0;
  case 4:
    UNRECOVERED_JUMPTABLE = *(code **)param_1;
LAB_10048b2c0:
                    /* WARNING: Could not recover jumptable at 0x00010048b2d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*UNRECOVERED_JUMPTABLE)(param_2);
    return uVar2;
  case 5:
                    /* WARNING: Could not recover jumptable at 0x00010048b300. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)param_1)(param_2,param_3);
    return uVar2;
  case 6:
    lVar5 = *param_2;
    uVar4 = *(undefined8 *)param_1;
    uVar1 = FUN_1004d2524(uVar4);
    uVar4 = FUN_100015208(uVar4,uVar1,0x12345678);
    puVar3 = (uint *)(**(code **)(*(long *)(lVar5 + 0x168) + 0x18))(lVar5 + 0x168,uVar4);
    uVar2 = (ulong)*puVar3;
    break;
  default:
    FUN_1004d22dc(0);
    uVar2 = 0;
  }
  return uVar2;
}




void FUN_10048b358(long param_1,long *param_2)

{
  int iVar1;
  long lVar2;
  
  lVar2 = FUN_1003dc44c(*(undefined8 *)(*(long *)(*param_2 + 0x10) + 0x10),param_1 + 0x20);
  if (lVar2 != 0) {
    iVar1 = *(int *)(param_1 + 0x24);
    *(char *)(lVar2 + 0x69) = *(char *)(lVar2 + 0x69) - (char)iVar1;
    FUN_10046c5ac(lVar2,iVar1 * -0x1000000 >> 0x18);
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  return;
}




void FUN_10048b3ac(long param_1,long *param_2)

{
  int iVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  
  uVar6 = *(undefined8 *)(*(long *)(*param_2 + 0x10) + 0x10);
  lVar5 = FUN_1003dc44c(uVar6,param_1 + 0x20);
  if (lVar5 != 0) {
    iVar1 = *(int *)(param_1 + 0x24);
    iVar4 = FUN_10048b224(param_1 + 0x10,param_2,uVar6);
    *(int *)(param_1 + 0x24) = iVar4;
    if (*(char *)(param_1 + 0x28) == '\0') {
      cVar2 = *(char *)(lVar5 + 0x69);
    }
    else {
      cVar2 = *(char *)(lVar5 + 0x69);
      iVar4 = (iVar4 + iVar1) - ((uint)*(byte *)(lVar5 + 0x68) + (int)cVar2);
      *(int *)(param_1 + 0x24) = iVar4;
    }
    cVar3 = (char)iVar4 - (char)iVar1;
    *(char *)(lVar5 + 0x69) = cVar2 + cVar3;
    FUN_10046c5ac(lVar5,(int)cVar3);
    return;
  }
  return;
}




void FUN_10048b468(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_10149aba0;
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined2 *)(param_1 + 5) = 0;
  return;
}




void FUN_10048b488(long param_1,long *param_2)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  char *pcVar4;
  long lVar5;
  long lVar6;
  undefined **local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined1 local_48;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined4 local_3c;
  undefined1 local_38;
  
  if (DAT_101d23a38 != '\0') {
    lVar6 = *(long *)(*(long *)(*param_2 + 0x10) + 0x10);
    lVar5 = *(long *)(lVar6 + 0x18);
    while ((lVar5 != 0 && (*(int *)(*(long *)(lVar5 + 8) + 0xa4) != DAT_10184dab8))) {
      lVar5 = *(long *)(lVar5 + 0x20);
    }
    FUN_1003a4e5c(&local_60,*(undefined8 *)(param_1 + 0x10));
    uVar2 = FUN_1003e2b0c(lVar5,(ulong)local_60 & 0xffffffff);
    if (*(char *)(param_1 + 0x29) == '\0') {
      local_3c = FUN_10048b224(param_1 + 0x18,param_2,0);
    }
    else {
      pcVar4 = *(char **)(param_1 + 0x10);
      if (pcVar4 == (char *)0x0) {
        uVar3 = 0;
      }
      else {
        uVar3 = 0x811c9dc5;
        cVar1 = *pcVar4;
        while (cVar1 != '\0') {
          pcVar4 = pcVar4 + 1;
          uVar3 = (uVar3 ^ (int)cVar1) * 0x1000193;
          cVar1 = *pcVar4;
        }
      }
      local_60 = (undefined **)CONCAT44(local_60._4_4_,uVar3);
      local_3c = FUN_10048b5b8(param_2,&local_60);
    }
    local_44 = *(undefined4 *)(lVar6 + 0x260);
    local_38 = *(undefined1 *)(param_1 + 0x28);
    local_58 = 0;
    uStack_50 = 0;
    local_48 = 0;
    local_60 = &PTR_FUN_1014971a8;
    uStack_40 = uVar2;
    FUN_1004965f0(&local_60,&DAT_101e47d30);
  }
  return;
}




int FUN_10048b5b8(long *param_1,undefined4 *param_2)

{
  ulong uVar1;
  long lVar2;
  
  lVar2 = *(long *)(*(long *)(*(long *)(*param_1 + 0x10) + 0x10) + 0x18);
  while( true ) {
    if (lVar2 == 0) {
      return 0;
    }
    if (*(int *)(*(long *)(lVar2 + 8) + 0xa4) == DAT_10184dab8) break;
    lVar2 = *(long *)(lVar2 + 0x20);
  }
  uVar1 = FUN_1003e2b0c(lVar2,*param_2);
  lVar2 = *(long *)(lVar2 + (uVar1 & 0xffffffff) * 8 + 0x50);
  if (lVar2 == 0) {
    return 0;
  }
  lVar2 = *(long *)(lVar2 + 0x1f8);
  if (lVar2 == 0) {
    return 0;
  }
  return (int)*(char *)(lVar2 + 0x69) + (uint)*(byte *)(lVar2 + 0x68);
}




void FUN_10048b63c(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_10149abe0;
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *(byte *)((long)param_1 + 0x2c) = *(byte *)((long)param_1 + 0x2c) & 0xf8;
  return;
}




void FUN_10048b668(undefined8 param_1,long *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*(long *)(*param_2 + 0x10) + 0x10);
  FUN_10048b758();
  FUN_10048b69c(param_1,uVar1);
  return;
}




void FUN_10048b69c(float param_1,long param_2,long param_3)

{
  ushort uVar1;
  ulong uVar2;
  long lVar3;
  undefined4 local_38 [2];
  
  lVar3 = *(long *)(param_3 + 0x18);
  while ((lVar3 != 0 && (*(int *)(*(long *)(lVar3 + 8) + 0xa4) != DAT_10184dab8))) {
    lVar3 = *(long *)(lVar3 + 0x20);
  }
  FUN_1003a4e5c(local_38,*(undefined8 *)(param_2 + 0x10));
  uVar2 = FUN_1003e2b0c(lVar3,local_38[0]);
  if ((*(byte *)(param_2 + 0x2c) >> 2 & 1) == 0) {
    lVar3 = *(long *)(lVar3 + (uVar2 & 0xffffffff) * 8 + 0x50);
    uVar1 = *(ushort *)(lVar3 + 0x21e);
    *(ushort *)(lVar3 + 0x21e) =
         uVar1 & 0x8000 | uVar1 + (short)(int)(param_1 - *(float *)(param_2 + 0x28)) & 0x7fff;
  }
  else {
    lVar3 = *(long *)(lVar3 + (uVar2 & 0xffffffff) * 8 + 0x50);
    *(float *)(lVar3 + 0x218) = (*(float *)(lVar3 + 0x218) * param_1) / *(float *)(param_2 + 0x28);
  }
  *(float *)(param_2 + 0x28) = param_1;
  return;
}




float FUN_10048b758(long param_1,long *param_2)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  
  fVar3 = (float)FUN_1000bbea4(param_1 + 0x18,param_2,
                               *(undefined8 *)(*(long *)(*param_2 + 0x10) + 0x10));
  bVar1 = *(byte *)(param_1 + 0x2c);
  if ((bVar1 & 1) != 0) {
    fVar2 = (float)NEON_ucvtf((uint)*(ushort *)(*param_2 + 0x344));
    fVar3 = fVar3 * fVar2;
  }
  fVar2 = -fVar3;
  if ((bVar1 & 4) != 0) {
    fVar2 = 1.0 - fVar3;
  }
  if ((bVar1 & 2) != 0) {
    fVar3 = fVar2;
  }
  return fVar3;
}




void FUN_10048b7c0(long param_1,long *param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if ((*(byte *)(param_1 + 0x2c) & 4) != 0) {
    uVar1 = 0x3f800000;
  }
  FUN_10048b69c(uVar1,param_1,*(undefined8 *)(*(long *)(*param_2 + 0x10) + 0x10));
  return;
}




void FUN_10048b7e4(undefined8 param_1,long *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*(long *)(*param_2 + 0x10) + 0x10);
  FUN_10048b758();
  FUN_10048b69c(param_1,uVar1);
  return;
}




void FUN_10048b818(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_10149ac20;
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[5] = 0;
  return;
}




void thunk_FUN_10048b83c(long param_1,long *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  float fVar4;
  undefined4 auStack_48 [2];
  
  fVar4 = (float)FUN_1000bbea4(param_1 + 0x18,param_2,
                               *(undefined8 *)(*(long *)(*param_2 + 0x10) + 0x10));
  lVar3 = *(long *)(*(long *)(*param_2 + 0x10) + 0x10);
  uVar2 = *(undefined8 *)(lVar3 + 0x58);
  FUN_1003a4e5c(auStack_48,*(undefined8 *)(param_1 + 0x10));
  uVar1 = FUN_1003e2b0c(uVar2,auStack_48[0]);
  lVar3 = *(long *)(lVar3 + 0x18);
  while ((lVar3 != 0 && (*(int *)(*(long *)(lVar3 + 8) + 0xa4) != DAT_10184dab8))) {
    lVar3 = *(long *)(lVar3 + 0x20);
  }
  if (*(int *)(param_1 + 0x2c) == 0) {
    lVar3 = *(long *)(lVar3 + (uVar1 & 0xffffffff) * 8 + 0x50);
    *(float *)(lVar3 + 0x230) = (fVar4 - *(float *)(param_1 + 0x28)) + *(float *)(lVar3 + 0x230);
    *(float *)(param_1 + 0x28) = fVar4;
  }
  else if (*(int *)(param_1 + 0x2c) == 1) {
    *(float *)(*(long *)(lVar3 + (uVar1 & 0xffffffff) * 8 + 0x50) + 0x22c) = fVar4;
  }
  return;
}




void FUN_10048b83c(long param_1,long *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  float fVar4;
  undefined4 local_48 [2];
  
  fVar4 = (float)FUN_1000bbea4(param_1 + 0x18,param_2,
                               *(undefined8 *)(*(long *)(*param_2 + 0x10) + 0x10));
  lVar3 = *(long *)(*(long *)(*param_2 + 0x10) + 0x10);
  uVar2 = *(undefined8 *)(lVar3 + 0x58);
  FUN_1003a4e5c(local_48,*(undefined8 *)(param_1 + 0x10));
  uVar1 = FUN_1003e2b0c(uVar2,local_48[0]);
  lVar3 = *(long *)(lVar3 + 0x18);
  while ((lVar3 != 0 && (*(int *)(*(long *)(lVar3 + 8) + 0xa4) != DAT_10184dab8))) {
    lVar3 = *(long *)(lVar3 + 0x20);
  }
  if (*(int *)(param_1 + 0x2c) == 0) {
    lVar3 = *(long *)(lVar3 + (uVar1 & 0xffffffff) * 8 + 0x50);
    *(float *)(lVar3 + 0x230) = (fVar4 - *(float *)(param_1 + 0x28)) + *(float *)(lVar3 + 0x230);
    *(float *)(param_1 + 0x28) = fVar4;
  }
  else if (*(int *)(param_1 + 0x2c) == 1) {
    *(float *)(*(long *)(lVar3 + (uVar1 & 0xffffffff) * 8 + 0x50) + 0x22c) = fVar4;
  }
  return;
}




void thunk_FUN_10048b83c(long param_1,long *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  float fVar4;
  undefined4 auStack_48 [2];
  
  fVar4 = (float)FUN_1000bbea4(param_1 + 0x18,param_2,
                               *(undefined8 *)(*(long *)(*param_2 + 0x10) + 0x10));
  lVar3 = *(long *)(*(long *)(*param_2 + 0x10) + 0x10);
  uVar2 = *(undefined8 *)(lVar3 + 0x58);
  FUN_1003a4e5c(auStack_48,*(undefined8 *)(param_1 + 0x10));
  uVar1 = FUN_1003e2b0c(uVar2,auStack_48[0]);
  lVar3 = *(long *)(lVar3 + 0x18);
  while ((lVar3 != 0 && (*(int *)(*(long *)(lVar3 + 8) + 0xa4) != DAT_10184dab8))) {
    lVar3 = *(long *)(lVar3 + 0x20);
  }
  if (*(int *)(param_1 + 0x2c) == 0) {
    lVar3 = *(long *)(lVar3 + (uVar1 & 0xffffffff) * 8 + 0x50);
    *(float *)(lVar3 + 0x230) = (fVar4 - *(float *)(param_1 + 0x28)) + *(float *)(lVar3 + 0x230);
    *(float *)(param_1 + 0x28) = fVar4;
  }
  else if (*(int *)(param_1 + 0x2c) == 1) {
    *(float *)(*(long *)(lVar3 + (uVar1 & 0xffffffff) * 8 + 0x50) + 0x22c) = fVar4;
  }
  return;
}




void FUN_10048b920(long param_1,long *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined4 local_38 [2];
  
  lVar3 = *(long *)(*(long *)(*param_2 + 0x10) + 0x10);
  uVar2 = *(undefined8 *)(lVar3 + 0x58);
  FUN_1003a4e5c(local_38,*(undefined8 *)(param_1 + 0x10));
  uVar1 = FUN_1003e2b0c(uVar2,local_38[0]);
  lVar3 = *(long *)(lVar3 + 0x18);
  while ((lVar3 != 0 && (*(int *)(*(long *)(lVar3 + 8) + 0xa4) != DAT_10184dab8))) {
    lVar3 = *(long *)(lVar3 + 0x20);
  }
  if (*(int *)(param_1 + 0x2c) == 0) {
    lVar3 = *(long *)(lVar3 + (uVar1 & 0xffffffff) * 8 + 0x50);
    *(float *)(lVar3 + 0x230) = *(float *)(lVar3 + 0x230) - *(float *)(param_1 + 0x28);
  }
  else if (*(int *)(param_1 + 0x2c) == 1) {
    *(undefined4 *)(*(long *)(lVar3 + (uVar1 & 0xffffffff) * 8 + 0x50) + 0x22c) = 0xbf800000;
  }
  *(undefined4 *)(param_1 + 0x28) = 0;
  return;
}




void FUN_10048b9dc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10149ac60;
  param_1[1] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[2] = 0;
  return;
}




void FUN_10048b9f4(long param_1,long *param_2)

{
  if (*(code **)(param_1 + 0x20) != (code *)0x0) {
    *(undefined8 *)(param_1 + 0x18) = 0;
    (**(code **)(param_1 + 0x20))(*param_2);
  }
  FUN_1003c61fc(*(undefined8 *)(*(long *)(*param_2 + 0x10) + 0x10),*(undefined8 *)(param_1 + 0x10),
                *(undefined8 *)(param_1 + 0x18));
  return;
}




void FUN_10048ba3c(long param_1,long *param_2)

{
  FUN_1003c61fc(*(undefined8 *)(*(long *)(*param_2 + 0x10) + 0x10),*(undefined8 *)(param_1 + 0x18),
                *(undefined8 *)(param_1 + 0x10));
  return;
}




void FUN_10048ba54(long *param_1,undefined8 param_2)

{
  (**(code **)(*param_1 + 0x20))();
                    /* WARNING: Could not recover jumptable at 0x00010048ba8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,param_2);
  return;
}




void FUN_10048ba90(undefined8 *param_1)

{
  FUN_100432da4(*param_1);
  return;
}




void FUN_10048ba98(long *param_1,long *param_2)

{
  int iVar1;
  long lVar2;
  
  iVar1 = *(int *)(*param_1 + 0x308);
  if (iVar1 == -1) {
    lVar2 = 0;
  }
  else {
    lVar2 = *(long *)(*(long *)(*param_1 + 0x10) + 0x10);
    if (*(int *)(lVar2 + 0x260) != iVar1) {
      lVar2 = FUN_100345d90();
    }
  }
  *param_2 = lVar2;
  return;
}




void FUN_10048baec(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  FUN_100432d40(*param_1);
  uVar1 = FUN_100345d90();
  *param_2 = uVar1;
  return;
}




void FUN_10048bb18(long param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(*(long *)(param_1 + 0x410) + 0x10);
  if (lVar2 == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = *(undefined4 *)(lVar2 + 0x260);
  }
  *param_4 = uVar1;
  return;
}




void FUN_10048bb38(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10149aca0;
  param_1[1] = 0;
  param_1[2] = &PTR_FUN_10149dc40;
  param_1[3] = 0xffffffffffffffff;
  param_1[4] = 0;
  *(undefined8 *)((long)param_1 + 0x26) = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  return;
}




void FUN_10048bb70(long param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  
  if (*(int *)(param_1 + 0x18) == -1) {
    *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(*param_2 + 0x314);
  }
  lVar2 = *param_2;
  if (*(int *)(param_1 + 0x48) == 0) {
    lVar1 = *(long *)(*(long *)(lVar2 + 0x10) + 0x10);
  }
  else {
    lVar1 = *(long *)(*(long *)(lVar2 + 0x10) + 0x10);
    if (*(int *)(lVar1 + 0x260) != *(int *)(lVar2 + 0x308)) {
      lVar1 = FUN_100345d90();
    }
  }
  FUN_10048bbe8(param_1 + 0x10,param_2,lVar1);
  return;
}




void FUN_10048bbe8(long param_1,undefined8 param_2,long param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined **local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined1 local_78;
  undefined4 local_74;
  undefined4 uStack_70;
  undefined4 local_6c;
  int local_68;
  undefined4 local_64;
  undefined8 local_60;
  undefined4 local_58;
  undefined1 local_54;
  undefined8 local_50;
  undefined8 uStack_48;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_101444218;
  if (*(char *)(param_1 + 0x1d) != '\0' && DAT_101d23a38 == '\0') goto LAB_10048bdc8;
  uStack_48 = *(undefined8 *)(param_1 + 0x28);
  local_50 = *(undefined8 *)(param_1 + 0x20);
  if (*(code **)(param_1 + 0x30) != (code *)0x0) {
    switch(*(undefined4 *)(param_1 + 0x18)) {
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
      (**(code **)(param_1 + 0x30))(param_2,&local_50);
    }
  }
  uStack_70 = *(undefined4 *)(param_3 + 0x260);
  local_74 = *(undefined4 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  local_90 = &PTR_FUN_1014972f8;
  local_68 = -1;
  local_54 = 0;
  uVar1 = FUN_1004d2524(uVar2);
  local_6c = FUN_100015208(uVar2,uVar1,0x12345678);
  if (*(int *)(param_1 + 0xc) != -1) {
    local_68 = *(int *)(param_1 + 0xc);
  }
  switch(*(undefined4 *)(param_1 + 0x18)) {
  case 1:
    local_60 = CONCAT44(local_60._4_4_,(undefined4)local_50);
    local_64 = 1;
    break;
  case 2:
    local_60 = CONCAT44(local_60._4_4_,(undefined4)local_50);
    local_64 = 2;
    break;
  case 3:
    uVar1 = (undefined4)local_50;
LAB_10048bd74:
    local_60 = CONCAT44(local_60._4_4_,uVar1);
    goto LAB_10048bd78;
  case 4:
    local_60 = CONCAT71(local_60._1_7_,(undefined1)local_50);
    local_64 = 4;
    break;
  case 5:
    local_60 = local_50;
    local_58 = (undefined4)uStack_48;
    local_64 = 5;
    break;
  case 6:
    if (DAT_101d23a38 == '\0') {
      uVar1 = 0xffffffff;
      goto LAB_10048bd74;
    }
    uVar1 = (**(code **)(**(long **)(param_1 + 0x20) + 0x10))();
    local_60 = CONCAT44(local_60._4_4_,uVar1);
LAB_10048bd78:
    local_64 = 3;
  }
  if ((DAT_101d23a38 == '\0') || (*(char *)(param_1 + 0x1d) == '\0')) {
    local_78 = 1;
  }
  if (*(char *)(param_1 + 0x1c) != '\0') {
    local_54 = 1;
    FUN_1003dc0c0(&local_90);
  }
  (*(code *)local_90[4])(&local_90,&DAT_101e47d30);
LAB_10048bdc8:
  if (*(long *)PTR____stack_chk_guard_101444218 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}




void FUN_10048bdf8(undefined8 param_1,long *param_2)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  long lVar3;
  undefined4 uVar4;
  
  lVar3 = *param_2;
  uVar4 = *(undefined4 *)(param_2[0x84] + 8);
  uVar1 = (*(code *)**(undefined8 **)(lVar3 + 0x168))(lVar3 + 0x168,PTR_s___VAR1_FLOAT___10185d7e8);
  puVar2 = (undefined4 *)(**(code **)(*(long *)(lVar3 + 0x168) + 0x10))(lVar3 + 0x168,uVar1);
  *puVar2 = uVar4;
  lVar3 = *param_2;
  uVar4 = *(undefined4 *)(param_2[0x84] + 0xc);
  uVar1 = (*(code *)**(undefined8 **)(lVar3 + 0x168))(lVar3 + 0x168,PTR_s___VAR2_FLOAT___10185d7f0);
  puVar2 = (undefined4 *)(**(code **)(*(long *)(lVar3 + 0x168) + 0x10))(lVar3 + 0x168,uVar1);
  *puVar2 = uVar4;
  lVar3 = *param_2;
  uVar4 = *(undefined4 *)(param_2[0x84] + 0x10);
  uVar1 = (*(code *)**(undefined8 **)(lVar3 + 0x168))(lVar3 + 0x168,PTR_s___VAR1_INT___10185d7f8);
  puVar2 = (undefined4 *)(**(code **)(*(long *)(lVar3 + 0x168) + 0x10))(lVar3 + 0x168,uVar1);
  *puVar2 = uVar4;
  lVar3 = *param_2;
  uVar4 = *(undefined4 *)(param_2[0x84] + 0x14);
  uVar1 = (*(code *)**(undefined8 **)(lVar3 + 0x168))(lVar3 + 0x168,PTR_s___VAR2_INT___10185d800);
  puVar2 = (undefined4 *)(**(code **)(*(long *)(lVar3 + 0x168) + 0x10))(lVar3 + 0x168,uVar1);
  *puVar2 = uVar4;
  return;
}




bool FUN_10048bf24(long param_1,long *param_2)

{
  uint uVar1;
  long lVar2;
  
  lVar2 = *(long *)(*(long *)(*param_2 + 0x10) + 0x10);
  if (((lVar2 != 0) &&
      (uVar1 = *(uint *)(lVar2 + 0x2f4), (*(uint *)(param_1 + 8) & (uVar1 ^ 0xffffffff)) == 0)) &&
     (*(uint *)(param_1 + 0xc) == 0xffffffff || (*(uint *)(param_1 + 0xc) & uVar1) != 0)) {
    return (*(uint *)(param_1 + 0x10) & uVar1) == 0;
  }
  return false;
}




bool FUN_10048bf70(long param_1,long param_2)

{
  uint uVar1;
  
  if (((*(long *)(param_2 + 8) != 0) &&
      (uVar1 = *(uint *)(*(long *)(param_2 + 8) + 0x2f4),
      (*(uint *)(param_1 + 8) & (uVar1 ^ 0xffffffff)) == 0)) &&
     (*(uint *)(param_1 + 0xc) == 0xffffffff || (*(uint *)(param_1 + 0xc) & uVar1) != 0)) {
    return (*(uint *)(param_1 + 0x10) & uVar1) == 0;
  }
  return false;
}




bool FUN_10048bfb4(long param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  
  lVar3 = *(long *)(param_2 + 0x10);
  while( true ) {
    if (lVar3 == 0) {
      return false;
    }
    if (*(int *)(*(long *)(lVar3 + 8) + 0xa4) == DAT_10184dd68) break;
    lVar3 = *(long *)(lVar3 + 0x10);
  }
  lVar3 = *(long *)(lVar3 + 0x18);
  while( true ) {
    if (lVar3 == 0) {
      return false;
    }
    if (*(int *)(*(long *)(lVar3 + 8) + 0xa4) == DAT_10184dab8) break;
    lVar3 = *(long *)(lVar3 + 0x20);
  }
  uVar1 = FUN_1003e2b0c(lVar3,*(undefined4 *)(param_1 + 8));
  if (uVar1 == 0xffffffff) {
    return false;
  }
  lVar3 = *(long *)(lVar3 + (ulong)uVar1 * 8 + 0x50);
  if (lVar3 == 0) {
    uVar2 = 0;
    uVar1 = 0;
  }
  else {
    uVar2 = *(uint *)(lVar3 + 0x238) >> 10 & 7;
    iVar4 = 5;
    if (*(char *)(*(long *)(lVar3 + 0x38) + 0x8d) != '\0') {
      iVar4 = 3;
    }
    uVar1 = iVar4 + *(int *)(*(long *)(lVar3 + 0x38) + 0x78);
  }
  return uVar2 == uVar1;
}




bool FUN_10048c084(long param_1,long *param_2)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  
  iVar4 = *(int *)(*param_2 + 0x308);
  if (iVar4 != -1) {
    lVar3 = *(long *)(*(long *)(*param_2 + 0x10) + 0x10);
    if ((*(int *)(lVar3 + 0x260) != iVar4) && (lVar3 = FUN_100345d90(), lVar3 == 0)) {
      return false;
    }
    for (lVar3 = *(long *)(lVar3 + 0x18); lVar3 != 0; lVar3 = *(long *)(lVar3 + 0x20)) {
      if (*(int *)(*(long *)(lVar3 + 8) + 0xa4) == DAT_10184dab8) {
        uVar1 = FUN_1003e2b0c(lVar3,*(undefined4 *)(param_1 + 8));
        if (uVar1 == 0xffffffff) {
          return false;
        }
        lVar3 = *(long *)(lVar3 + (ulong)uVar1 * 8 + 0x50);
        if (lVar3 == 0) {
          uVar2 = 0;
          uVar1 = 0;
        }
        else {
          uVar2 = *(uint *)(lVar3 + 0x238) >> 10 & 7;
          iVar4 = 5;
          if (*(char *)(*(long *)(lVar3 + 0x38) + 0x8d) != '\0') {
            iVar4 = 3;
          }
          uVar1 = iVar4 + *(int *)(*(long *)(lVar3 + 0x38) + 0x78);
        }
        return uVar2 == uVar1;
      }
    }
  }
  return false;
}




void FUN_10048c15c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  while ((lVar1 != 0 && (*(int *)(*(long *)(lVar1 + 8) + 0xa4) != DAT_10184dd68))) {
    lVar1 = *(long *)(lVar1 + 0x10);
  }
  FUN_1003461dc();
  FUN_100345d90();
  return;
}




undefined4 FUN_10048c198(long *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  long lVar4;
  
  lVar4 = *param_1;
  uVar1 = FUN_1004d2524(param_2);
  uVar2 = FUN_100015208(param_2,uVar1,0x12345678);
  puVar3 = (undefined4 *)(**(code **)(*(long *)(lVar4 + 0x168) + 0x18))(lVar4 + 0x168,uVar2);
  return *puVar3;
}




undefined4 FUN_10048c1f8(long *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  long lVar4;
  
  lVar4 = *param_1;
  uVar1 = FUN_1004d2524(param_2);
  uVar2 = FUN_100015208(param_2,uVar1,0x12345678);
  puVar3 = (undefined4 *)(**(code **)(*(long *)(lVar4 + 0x168) + 0x18))(lVar4 + 0x168,uVar2);
  return *puVar3;
}




undefined1 FUN_10048c258(long *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  long lVar4;
  
  lVar4 = *param_1;
  uVar1 = FUN_1004d2524(param_2);
  uVar2 = FUN_100015208(param_2,uVar1,0x12345678);
  puVar3 = (undefined1 *)(**(code **)(*(long *)(lVar4 + 0x168) + 0x18))(lVar4 + 0x168,uVar2);
  return *puVar3;
}




void FUN_10048c2b8(long param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  
  uVar1 = *(uint *)(param_1 + 0x238) >> 3 & 7;
  if ((uVar1 == 2) || (uVar1 == 1)) {
    puVar2 = (undefined4 *)(param_1 + 0x1d8);
    puVar3 = (undefined4 *)(param_1 + 0x1e0);
  }
  else {
    do {
      param_1 = *(long *)(param_1 + 0x10);
    } while (*(int *)(*(long *)(param_1 + 8) + 0xa4) != DAT_10184dd68);
    puVar2 = (undefined4 *)(param_1 + 0x250);
    puVar3 = (undefined4 *)(param_1 + 600);
  }
  uVar4 = *puVar3;
  *param_2 = *puVar2;
  param_2[1] = uVar4;
  return;
}




byte FUN_10048c318(float param_1,float param_2,undefined8 param_3,undefined4 param_4)

{
  byte in_w8;
  
  switch(param_4) {
  case 0:
    in_w8 = param_2 < param_1;
    break;
  case 1:
    in_w8 = param_2 <= param_1;
    break;
  case 2:
    in_w8 = param_1 < param_2;
    break;
  case 3:
    in_w8 = param_1 <= param_2;
  }
  return in_w8 & 1;
}




bool FUN_10048c374(float param_1,uint *param_2,undefined4 param_3,long param_4,int param_5,
                  int param_6,int param_7)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined1 auStack_b8 [8];
  undefined **local_b0;
  long local_a8;
  undefined1 local_a0;
  ulong local_9c;
  undefined8 local_94;
  undefined8 local_8c;
  undefined4 local_84;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  undefined1 local_6c;
  undefined4 local_68;
  undefined8 local_64;
  undefined4 local_5c;
  ushort local_58;
  undefined1 local_56;
  
  local_b0 = &PTR_FUN_101499960;
  local_a8 = 0;
  local_9c = 0;
  local_8c = 0;
  local_94 = 0;
  local_84 = 0;
  uStack_78 = 0xbf800000c0000000;
  local_80 = 0xbf800000bf800000;
  local_70 = 0x3f800000;
  local_6c = 0xff;
  local_64 = 0xffffffff;
  local_5c = 0xffffffff;
  local_a0 = 1;
  lVar3 = FUN_1003e10f0();
  uVar1 = (uint)*(byte *)(lVar3 + 0xe5) << 0x10 | 0x144100;
  local_58 = 0x4100;
  local_56 = (undefined1)(uVar1 >> 0x10);
  if (param_4 != 0) {
    uVar4 = 0x10;
    if (param_5 == 0) {
      uVar4 = 0;
    }
    uVar5 = 0x20;
    if (param_6 == 0) {
      uVar5 = 0;
    }
    uVar6 = 0x40;
    if (param_7 == 0) {
      uVar6 = 0;
    }
    uVar1 = uVar5 | uVar4 | uVar6 | uVar1;
    local_58 = (ushort)uVar1;
    local_a8 = param_4;
  }
  if (0.0 < param_1) {
    local_9c = (ulong)*param_2;
    local_94 = CONCAT44(local_94._4_4_,param_2[1]);
    local_80 = CONCAT44(local_80._4_4_,param_1 * param_1);
    local_58 = (ushort)uVar1 | 0x8000;
    local_56 = (undefined1)(uVar1 >> 0x10);
  }
  local_68 = param_3;
  iVar2 = FUN_1003a6ce4(&local_b0,auStack_b8,1,0);
  return iVar2 != 0;
}




bool FUN_10048c4cc(long param_1,undefined4 param_2)

{
  bool bVar1;
  uint uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  undefined **local_708;
  long local_700;
  undefined1 local_6f8;
  undefined8 local_6f4;
  undefined8 local_6ec;
  undefined8 local_6e4;
  undefined4 local_6dc;
  undefined8 local_6d8;
  undefined8 uStack_6d0;
  undefined4 local_6c8;
  undefined1 local_6c4;
  undefined4 local_6c0;
  undefined8 local_6bc;
  undefined4 local_6b4;
  undefined2 local_6b0;
  byte local_6ae;
  long local_6a8 [200];
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_101444218;
  local_708 = &PTR_FUN_101499960;
  local_6f4 = 0;
  local_6e4 = 0;
  local_6ec = 0;
  local_6dc = 0;
  uStack_6d0 = 0xbf800000c0000000;
  local_6d8 = 0xbf800000bf800000;
  local_6c8 = 0x3f800000;
  local_6c4 = 0xff;
  local_6bc = 0xffffffff;
  local_6b4 = 0xffffffff;
  local_6f8 = 1;
  lVar3 = FUN_1003e10f0();
  local_6b0 = 0x4120;
  local_6ae = *(byte *)(lVar3 + 0xe5) | 0x14;
  local_700 = param_1;
  local_6c0 = param_2;
  uVar2 = FUN_1003a6ce4(&local_708,local_6a8,200,0);
  if (uVar2 == 0) {
    bVar1 = false;
  }
  else {
    uVar7 = 0;
    bVar1 = true;
    do {
      lVar3 = local_6a8[uVar7];
      plVar4 = *(long **)(lVar3 + 0x2b0);
      if (plVar4 != (long *)0x0) {
        if (*(int *)(lVar3 + 0x2b8) == (int)plVar4[1]) {
          lVar5 = (**(code **)(*plVar4 + 0x10))();
          if (lVar5 != 0) {
            plVar4 = *(long **)(lVar3 + 0x2b0);
            lVar5 = 0;
            if (plVar4 != (long *)0x0) {
              if (*(int *)(lVar3 + 0x2b8) == (int)plVar4[1]) {
                lVar5 = (**(code **)(*plVar4 + 0x10))();
              }
              else {
                lVar5 = 0;
                *(undefined8 *)(lVar3 + 0x2b0) = 0;
                *(undefined4 *)(lVar3 + 0x2b8) = DAT_101dc0b88;
              }
            }
            uVar6 = (ulong)*(ushort *)(lVar5 + 0x88) & 0x1f;
            if ((((int)uVar6 == 0x1f) || (1 < *(ushort *)(lVar5 + uVar6 * 0x38 + 0x90) - 3)) &&
               (plVar4 = *(long **)(lVar3 + 0x2b0), plVar4 != (long *)0x0)) {
              if (*(int *)(lVar3 + 0x2b8) != (int)plVar4[1]) goto LAB_10048c664;
              lVar3 = (**(code **)(*plVar4 + 0x10))();
              if (lVar3 == param_1) break;
            }
          }
        }
        else {
LAB_10048c664:
          *(undefined8 *)(lVar3 + 0x2b0) = 0;
          *(undefined4 *)(lVar3 + 0x2b8) = DAT_101dc0b88;
        }
      }
      uVar7 = uVar7 + 1;
      bVar1 = uVar7 < uVar2;
    } while (uVar2 != uVar7);
  }
  if (*(long *)PTR____stack_chk_guard_101444218 != local_68) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return bVar1;
}




bool FUN_10048c6cc(long param_1,undefined4 *param_2,uint param_3)

{
  uint uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x18);
  while( true ) {
    if (lVar2 == 0) {
      return false;
    }
    if (*(int *)(*(long *)(lVar2 + 8) + 0xa4) == DAT_10184dab8) break;
    lVar2 = *(long *)(lVar2 + 0x20);
  }
  uVar1 = FUN_1003e2b0c(lVar2,*param_2);
  if (uVar1 == 0xffffffff) {
    return false;
  }
  lVar2 = *(long *)(lVar2 + (ulong)uVar1 * 8 + 0x50);
  uVar1 = 0;
  if (lVar2 != 0) {
    uVar1 = *(uint *)(lVar2 + 0x238) >> 10 & 7;
  }
  return param_3 <= uVar1;
}




bool FUN_10048c74c(void)

{
  bool bVar1;
  long lVar2;
  float fVar3;
  
  lVar2 = FUN_1003dc44c();
  bVar1 = false;
  if (lVar2 != 0) {
    if (*(char *)(lVar2 + 0x6a) == '\0') {
      fVar3 = (float)FUN_10045f284();
      bVar1 = 0.0 < fVar3;
    }
    else {
      bVar1 = false;
    }
  }
  return bVar1;
}




ulong FUN_10048c780(long param_1,uint *param_2,int param_3)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  uint uVar6;
  long *plVar7;
  char cVar8;
  uint uVar9;
  long lVar10;
  char *pcVar11;
  
  if (param_3 == 0) {
    uVar4 = FUN_1003e2b0c(*(undefined8 *)(param_1 + 0x58),*param_2);
    uVar5 = FUN_1003c1088(param_1,uVar4);
    return uVar5;
  }
  lVar3 = *(long *)(param_1 + 0x18);
  if (lVar3 == 0) {
    return 0;
  }
  while (*(int *)(*(long *)(lVar3 + 8) + 0xa4) != DAT_10184e000) {
    lVar3 = *(long *)(lVar3 + 0x20);
    if (lVar3 == 0) {
      return 0;
    }
  }
  if (*(byte *)(lVar3 + 0xdc) != 0) {
    uVar9 = 0;
    plVar1 = (long *)(lVar3 + 0x38);
    plVar7 = plVar1;
    uVar6 = uVar9;
    do {
      for (; *plVar7 == 0; plVar7 = plVar7 + 1) {
LAB_10048c814:
      }
      if (uVar9 != 0) {
        uVar9 = uVar9 - 1;
        goto LAB_10048c814;
      }
      iVar2 = *(int *)(*plVar7 + 0x4c);
      for (plVar7 = plVar1; (lVar10 = *plVar7, lVar10 == 0 || (*(int *)(lVar10 + 0x4c) != iVar2));
          plVar7 = plVar7 + 1) {
      }
      plVar7 = plVar1;
      if (*(long *)(lVar10 + 0x30) != 0) {
        for (; (lVar10 = *plVar7, lVar10 == 0 || (*(int *)(lVar10 + 0x4c) != iVar2));
            plVar7 = plVar7 + 1) {
        }
        pcVar11 = *(char **)(*(long *)(*(long *)(lVar10 + 0x30) + 0x38) + 8);
        if (pcVar11 == (char *)0x0) {
          uVar9 = 0;
        }
        else {
          cVar8 = *pcVar11;
          uVar9 = 0x811c9dc5;
          if (cVar8 != '\0') {
            uVar9 = 0x811c9dc5;
            do {
              pcVar11 = pcVar11 + 1;
              uVar9 = (uVar9 ^ (int)cVar8) * 0x1000193;
              cVar8 = *pcVar11;
            } while (cVar8 != '\0');
          }
        }
        if (uVar9 == *param_2) {
          iVar2 = FUN_10046e740();
          return (ulong)(iVar2 == 0);
        }
      }
      uVar9 = uVar6 + 1;
      plVar7 = plVar1;
      uVar6 = uVar9;
    } while (uVar9 != *(byte *)(lVar3 + 0xdc));
  }
  return 0;
}




void FUN_10048c8e4(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  while ((lVar1 != 0 && (*(int *)(*(long *)(lVar1 + 8) + 0xa4) != DAT_10184e000))) {
    lVar1 = *(long *)(lVar1 + 0x20);
  }
  return;
}




bool FUN_10048c910(long param_1,undefined8 param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  int local_28 [2];
  
  lVar5 = *(long *)(param_1 + 0x18);
  while( true ) {
    if (lVar5 == 0) {
      return false;
    }
    if (*(int *)(*(long *)(lVar5 + 8) + 0xa4) == DAT_10184daa8) break;
    lVar5 = *(long *)(lVar5 + 0x20);
  }
  FUN_1003a4e5c(local_28);
  lVar3 = *(long *)(lVar5 + 0x28);
  lVar5 = lVar3;
  while( true ) {
    if (lVar5 == 0) {
      return false;
    }
    if ((*(int *)(lVar5 + 0x314) == local_28[0]) && (*(int *)(lVar5 + 0x310) == 0)) break;
    lVar5 = *(long *)(lVar5 + 0x350);
  }
  iVar1 = *(int *)(lVar5 + 0x30c);
  if (param_3 == 0xffffffff) {
    iVar2 = *(int *)(lVar3 + 0x30c);
    lVar5 = lVar3;
    while (iVar2 != iVar1) {
      lVar5 = *(long *)(lVar5 + 0x350);
      iVar2 = *(int *)(lVar5 + 0x30c);
    }
    iVar2 = *(int *)(lVar3 + 0x30c);
    lVar4 = lVar3;
    while (iVar2 != iVar1) {
      lVar4 = *(long *)(lVar4 + 0x350);
      iVar2 = *(int *)(lVar4 + 0x30c);
    }
    if ((((uint)*(ushort *)(lVar4 + 0x346) ^ (uint)*(undefined8 *)(lVar5 + 0x344)) & 0xffff) != 0) {
      return false;
    }
  }
  for (; *(int *)(lVar3 + 0x30c) != iVar1; lVar3 = *(long *)(lVar3 + 0x350)) {
  }
  return param_3 <= *(ushort *)(lVar3 + 0x344);
}




byte FUN_10048ca28(long param_1)

{
  return *(byte *)(param_1 + 0x303) & 1;
}




undefined8 FUN_10048ca38(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 0x18);
  while( true ) {
    if (lVar1 == 0) {
      return 0;
    }
    if (*(int *)(*(long *)(lVar1 + 8) + 0xa4) == DAT_10184dda8) break;
    lVar1 = *(long *)(lVar1 + 0x20);
  }
  uVar2 = FUN_1003e19fc();
  return uVar2;
}




bool FUN_10048ca6c(long param_1,undefined4 *param_2,uint param_3)

{
  ulong uVar1;
  uint uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x18);
  while ((lVar3 != 0 && (*(int *)(*(long *)(lVar3 + 8) + 0xa4) != DAT_10184dab8))) {
    lVar3 = *(long *)(lVar3 + 0x20);
  }
  uVar1 = FUN_1003e2b0c(lVar3,*param_2);
  lVar3 = *(long *)(lVar3 + (uVar1 & 0xffffffff) * 8 + 0x50);
  uVar2 = 0;
  if (lVar3 != 0) {
    uVar1 = (ulong)*(ushort *)(lVar3 + 0x68) & 0x1f;
    if ((int)uVar1 == 0x1f) {
      uVar2 = 0x1f;
    }
    else {
      uVar2 = (uint)*(ushort *)(lVar3 + uVar1 * 0x38 + 0x70);
    }
  }
  return uVar2 == param_3;
}




undefined8 FUN_10048caf4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined4 local_2c;
  long local_28;
  
  local_28 = 0;
  FUN_1010a1958(&local_28,1,DAT_10184e120,0);
  lVar1 = local_28;
  if ((local_28 != 0) && (*(int *)(*(long *)(local_28 + 8) + 0xa4) == DAT_10184e120)) {
    FUN_1003e0adc(param_1,&local_2c);
    uVar2 = FUN_1003e0bf8(param_1,lVar1,local_2c,1,1);
    if (((int)uVar2 != 0xffff) && (lVar3 = *(long *)(param_1 + 0x18), lVar3 != 0)) {
      do {
        if (*(int *)(*(long *)(lVar3 + 8) + 0xa4) == DAT_10184e000) {
          uVar2 = FUN_1003e148c((int)*(float *)(*(long *)(param_1 + 0x40) + 800),lVar3,lVar1,uVar2,0
                                ,0);
          return uVar2;
        }
        lVar3 = *(long *)(lVar3 + 0x20);
      } while (lVar3 != 0);
    }
  }
  return 0;
}




uint FUN_10048cbd4(long param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  if (*(long *)(param_2 + 0x60) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_10045fb10();
  }
  uVar2 = FUN_1003c3bf0(param_1 + 8,param_2,0);
  uVar3 = *(uint *)(param_1 + 0x18);
  switch(uVar3) {
  case 0:
    uVar3 = (uint)(uVar2 < uVar1);
    break;
  case 1:
    uVar3 = (uint)(uVar2 <= uVar1);
    break;
  case 2:
    uVar3 = (uint)(uVar2 == uVar1);
    break;
  case 3:
    uVar3 = (uint)(uVar2 != uVar1);
    break;
  case 4:
    uVar3 = (uint)(uVar1 < uVar2);
    break;
  case 5:
    uVar3 = (uint)(uVar1 <= uVar2);
  }
  return uVar3 & 1;
}




uint FUN_10048cc94(long param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = *(uint *)(param_2 + 0x408);
  uVar2 = FUN_1004a03ac(param_1 + 8,param_2,0);
  uVar3 = *(uint *)(param_1 + 0x18);
  switch(uVar3) {
  case 0:
    uVar3 = (uint)(uVar2 < uVar1);
    break;
  case 1:
    uVar3 = (uint)(uVar2 <= uVar1);
    break;
  case 2:
    uVar3 = (uint)(uVar2 == uVar1);
    break;
  case 3:
    uVar3 = (uint)(uVar2 != uVar1);
    break;
  case 4:
    uVar3 = (uint)(uVar1 < uVar2);
    break;
  case 5:
    uVar3 = (uint)(uVar1 <= uVar2);
  }
  return uVar3 & 1;
}




void FUN_10048cd30(undefined4 *param_1)

{
  *param_1 = 0;
  return;
}




bool FUN_10048cd38(int *param_1)

{
  int iVar1;
  bool bVar2;
  
  iVar1 = *param_1;
  if (iVar1 == 3) {
    return (char)DAT_101d23a68[0x12] != '\0';
  }
  if (iVar1 == 2) {
    bVar2 = *(char *)((long)DAT_101d23a68 + 0x3a) == '\0';
  }
  else {
    if ((iVar1 != 1) || (*(char *)((long)DAT_101d23a68 + 0x3a) != '\0')) {
      return false;
    }
    if (*(char *)((long)DAT_101d23a68 + 0x39) == '\0') {
      return true;
    }
    bVar2 = *DAT_101d23a68 == 7;
  }
  return bVar2;
}




undefined8 * FUN_10048cda8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10149ad30;
  FUN_1003c1770(param_1 + 0x15);
  FUN_1003c1770(param_1 + 0x18);
  return param_1;
}




void FUN_10048cde8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10149ad30;
  FUN_1003c1770(param_1 + 0x15);
  FUN_1003c1770(param_1 + 0x18);
  operator_delete(param_1);
  return;
}




void FUN_10048ce28(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = FUN_10048cf04();
  uVar3 = 1;
  if (iVar2 == 0) {
    uVar3 = 2;
  }
  *(undefined4 *)(param_2 + 0xd8) = uVar3;
  lVar1 = param_2 + 0xa8;
  if (iVar2 == 0) {
    lVar1 = param_2 + 0xc0;
  }
  FUN_1003c165c(param_1,lVar1,param_3);
  return;
}




float FUN_10048ce7c(long param_1,undefined8 param_2)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  float fVar4;
  float fVar5;
  
  iVar2 = FUN_10048cf04();
  lVar1 = 0xa8;
  if (iVar2 == 0) {
    lVar1 = 0xc0;
  }
  plVar3 = *(long **)(param_1 + lVar1 + 8);
  if (plVar3 == (long *)0x0) {
    fVar5 = 0.0;
  }
  else {
    fVar5 = 0.0;
    do {
      fVar4 = (float)(**(code **)(*plVar3 + 0x48))(plVar3,param_2);
      fVar5 = fVar4 + fVar5;
      plVar3 = (long *)(**(code **)(*plVar3 + 0x40))(plVar3);
    } while (plVar3 != (long *)0x0);
  }
  return fVar5;
}




undefined8 FUN_10048cf04(long param_1,undefined8 param_2)

{
  int iVar1;
  bool bVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  bool bVar6;
  
  iVar1 = *(int *)(param_1 + 0xd8);
  if (iVar1 == 2) {
    return 0;
  }
  if (iVar1 != 1) {
    if (iVar1 != 0) {
      return 0;
    }
    lVar5 = 0;
    bVar6 = false;
    while (plVar3 = *(long **)(param_1 + lVar5 * 0x48 + 0x18), plVar3 != (long *)0x0) {
      uVar4 = (**(code **)(*plVar3 + 0x10))(plVar3,param_2);
      lVar5 = 1;
      bVar2 = bVar6 || (((uint)uVar4 ^ 0xffffffff) & 1) != 0;
      bVar6 = true;
      if (bVar2) {
        return uVar4;
      }
    }
  }
  return 1;
}




void FUN_10048cf8c(long param_1,undefined8 param_2)

{
  long *plVar1;
  
  *(undefined4 *)(param_1 + 0xd8) = 0;
  for (plVar1 = *(long **)(param_1 + 0xb0); plVar1 != (long *)0x0;
      plVar1 = (long *)(**(code **)(*plVar1 + 0x40))(plVar1)) {
    (**(code **)(*plVar1 + 0x18))(plVar1,param_2);
  }
  for (plVar1 = *(long **)(param_1 + 200); plVar1 != (long *)0x0;
      plVar1 = (long *)(**(code **)(*plVar1 + 0x40))(plVar1)) {
    (**(code **)(*plVar1 + 0x18))(plVar1,param_2);
  }
  return;
}




undefined8 FUN_10048d020(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long *plVar2;
  
  if (*(int *)(param_1 + 0xd8) == 2) {
    plVar2 = *(long **)(param_1 + 0xc0);
    if (plVar2 != (long *)0x0) {
      do {
        uVar1 = (**(code **)(*plVar2 + 0x28))(plVar2,param_2);
        if ((int)uVar1 == 0) {
          return uVar1;
        }
        plVar2 = (long *)(**(code **)(*plVar2 + 0x40))(plVar2);
      } while (plVar2 != (long *)0x0);
      return uVar1;
    }
  }
  else {
    if (*(int *)(param_1 + 0xd8) != 1) {
      return 0;
    }
    plVar2 = *(long **)(param_1 + 0xa8);
    if (plVar2 != (long *)0x0) {
      do {
        uVar1 = (**(code **)(*plVar2 + 0x28))(plVar2,param_2);
        if ((int)uVar1 == 0) {
          return uVar1;
        }
        plVar2 = (long *)(**(code **)(*plVar2 + 0x40))(plVar2);
      } while (plVar2 != (long *)0x0);
      return uVar1;
    }
  }
  return 1;
}




void FUN_10048d0e8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 0xb0);
  if (plVar2 == (long *)0x0) {
    uVar1 = 0;
  }
  else {
    do {
      (**(code **)(*plVar2 + 0x10))(plVar2,param_2);
      plVar2 = (long *)(**(code **)(*plVar2 + 0x40))(plVar2);
    } while (plVar2 != (long *)0x0);
    uVar1 = *(undefined8 *)(param_1 + 0xb0);
  }
  *(undefined8 *)(param_1 + 0xa8) = uVar1;
  plVar2 = *(long **)(param_1 + 200);
  if (plVar2 == (long *)0x0) {
    uVar1 = 0;
  }
  else {
    do {
      (**(code **)(*plVar2 + 0x10))(plVar2,param_2);
      plVar2 = (long *)(**(code **)(*plVar2 + 0x40))(plVar2);
    } while (plVar2 != (long *)0x0);
    uVar1 = *(undefined8 *)(param_1 + 200);
  }
  *(undefined8 *)(param_1 + 0xc0) = uVar1;
  return;
}




uint FUN_10048d198(long param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  long *plVar4;
  
  iVar1 = *(int *)(param_1 + 0xd8);
  if (iVar1 == 0) {
    return 0;
  }
  if (iVar1 == 2) {
    plVar4 = *(long **)(param_1 + 200);
    if (plVar4 != (long *)0x0) {
      uVar3 = 0;
      do {
        uVar2 = (**(code **)(*plVar4 + 0x30))(plVar4,param_2);
        uVar3 = uVar2 | uVar3;
        plVar4 = (long *)(**(code **)(*plVar4 + 0x40))(plVar4);
      } while (plVar4 != (long *)0x0);
      return uVar3;
    }
  }
  else {
    if (iVar1 != 1) {
      return 0x400;
    }
    plVar4 = *(long **)(param_1 + 0xb0);
    if (plVar4 != (long *)0x0) {
      uVar3 = 0;
      do {
        uVar2 = (**(code **)(*plVar4 + 0x30))(plVar4,param_2);
        uVar3 = uVar2 | uVar3;
        plVar4 = (long *)(**(code **)(*plVar4 + 0x40))(plVar4);
      } while (plVar4 != (long *)0x0);
      return uVar3;
    }
  }
  return 0;
}




void FUN_10048d264(long param_1,undefined8 param_2)

{
  long *plVar1;
  
  if (*(int *)(param_1 + 0xd8) == 2) {
    for (plVar1 = *(long **)(param_1 + 200); plVar1 != (long *)0x0;
        plVar1 = (long *)(**(code **)(*plVar1 + 0x40))(plVar1)) {
      (**(code **)(*plVar1 + 0x20))(plVar1,param_2);
    }
  }
  else if (*(int *)(param_1 + 0xd8) == 1) {
    for (plVar1 = *(long **)(param_1 + 0xb0); plVar1 != (long *)0x0;
        plVar1 = (long *)(**(code **)(*plVar1 + 0x40))(plVar1)) {
      (**(code **)(*plVar1 + 0x20))(plVar1,param_2);
    }
  }
  return;
}




undefined8 * FUN_10048d300(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10149ad90;
  FUN_10044e548(param_1 + 0x11);
  FUN_10044e548(param_1 + 0x14);
  return param_1;
}




void FUN_10048d340(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10149ad90;
  FUN_10044e548(param_1 + 0x11);
  FUN_10044e548(param_1 + 0x14);
  operator_delete(param_1);
  return;
}




void FUN_10048d380(long param_1,undefined8 param_2)

{
  long *plVar1;
  bool bVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  bool bVar6;
  
  lVar5 = 0;
  bVar2 = true;
  do {
    bVar6 = bVar2;
    plVar3 = *(long **)(param_1 + lVar5 * 0x38 + 0x18);
    if (plVar3 == (long *)0x0) break;
    uVar4 = (**(code **)(*plVar3 + 0x10))(plVar3,param_2);
    if ((uVar4 & 1) == 0) {
      if (*(long *)(param_1 + 0xa0) == 0) {
        return;
      }
      plVar3 = (long *)(*(long *)(param_1 + 0xa0) + -8);
      while (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x10))(plVar3,param_2);
        plVar1 = plVar3 + 1;
        plVar3 = (long *)0x0;
        if (*plVar1 != 0) {
          plVar3 = (long *)(*plVar1 + -8);
        }
      }
      return;
    }
    lVar5 = 1;
    bVar2 = false;
  } while (bVar6);
  plVar3 = (long *)(*(long *)(param_1 + 0x88) + -8);
  if (*(long *)(param_1 + 0x88) != 0 && plVar3 != (long *)0x0) {
    do {
      (**(code **)(*plVar3 + 0x10))(plVar3,param_2);
      plVar1 = plVar3 + 1;
      plVar3 = (long *)0x0;
      if (*plVar1 != 0) {
        plVar3 = (long *)(*plVar1 + -8);
      }
    } while (plVar3 != (long *)0x0);
  }
  return;
}




ulong FUN_10048d45c(uint *param_1,long param_2)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  float fVar10;
  float fVar11;
  undefined4 local_48 [2];
  int local_40 [2];
  undefined4 local_38 [2];
  
  switch((char)param_1[4]) {
  case '\x02':
    uVar8 = *(undefined8 *)param_1;
    lVar9 = FUN_100345d90(*(undefined4 *)(param_2 + 0x260));
    if (lVar9 != 0) {
      uVar6 = FUN_1003a47d0(lVar9,uVar8);
      return uVar6;
    }
    return 0;
  case '\x03':
    lVar9 = *(long *)(param_2 + 0x18);
    while ((lVar9 != 0 && (*(int *)(*(long *)(lVar9 + 8) + 0xa4) != DAT_10184daa8))) {
      lVar9 = *(long *)(lVar9 + 0x20);
    }
    FUN_1003a4e5c(local_40,*(undefined8 *)param_1);
    for (lVar7 = *(long *)(lVar9 + 0x28); lVar7 != 0; lVar7 = *(long *)(lVar7 + 0x350)) {
      if ((*(int *)(lVar7 + 0x314) == local_40[0]) && (*(int *)(lVar7 + 0x310) == 0)) {
        FUN_1003a4e5c(local_48,*(undefined8 *)param_1);
        uVar5 = FUN_1003a34a4(lVar9,local_48[0]);
        goto LAB_10048d654;
      }
    }
    uVar5 = 0;
LAB_10048d654:
    if (4 < param_1[3]) {
      return 0;
    }
    uVar1 = param_1[2];
    switch(param_1[3]) {
    case 0:
      bVar3 = SBORROW4(uVar5,uVar1);
      bVar2 = (int)(uVar5 - uVar1) < 0;
      bVar4 = uVar5 == uVar1;
LAB_10048d680:
      return (ulong)(!bVar4 && bVar2 == bVar3);
    case 1:
      bVar3 = SBORROW4(uVar5,uVar1);
      bVar2 = (int)(uVar5 - uVar1) < 0;
LAB_10048d6e4:
      return (ulong)(bVar2 != bVar3);
    case 2:
      bVar3 = uVar5 == uVar1;
      break;
    case 3:
      bVar3 = SBORROW4(uVar5,uVar1);
      bVar2 = (int)(uVar5 - uVar1) < 0;
LAB_10048d6f8:
      return (ulong)(bVar2 == bVar3);
    case 4:
      bVar3 = SBORROW4(uVar5,uVar1);
      bVar2 = (int)(uVar5 - uVar1) < 0;
      bVar4 = uVar5 == uVar1;
LAB_10048d704:
      return (ulong)(bVar4 || bVar2 != bVar3);
    }
    break;
  case '\x04':
    if (4 < param_1[2]) {
      return 0;
    }
    fVar10 = *(float *)(*(long *)(param_2 + 0x40) + (ulong)*param_1 * 4 + 0x308);
    fVar11 = (float)param_1[1];
    switch(param_1[2]) {
    case 0:
      bVar3 = NAN(fVar10) || NAN(fVar11);
      bVar4 = fVar10 == fVar11;
      bVar2 = fVar10 < fVar11;
      goto LAB_10048d680;
    case 1:
      bVar3 = NAN(fVar10) || NAN(fVar11);
      bVar2 = fVar10 < fVar11;
      goto LAB_10048d6e4;
    case 2:
      bVar3 = fVar10 == fVar11;
      break;
    case 3:
      bVar3 = NAN(fVar10) || NAN(fVar11);
      bVar2 = fVar10 < fVar11;
      goto LAB_10048d6f8;
    case 4:
      bVar3 = NAN(fVar10) || NAN(fVar11);
      bVar4 = fVar10 == fVar11;
      bVar2 = fVar10 < fVar11;
      goto LAB_10048d704;
    }
    break;
  case '\x05':
    uVar6 = (ulong)*(ushort *)(param_2 + 0x88) & 0x1f;
    if ((int)uVar6 != 0x1f) {
      return (ulong)(1 < *(ushort *)(param_2 + uVar6 * 0x38 + 0x90) - 3);
    }
    return 1;
  case '\x06':
    bVar3 = (*(byte *)(param_2 + 0x2f9) & 1) == 0;
    break;
  case '\a':
    for (lVar9 = *(long *)(param_2 + 0x18); lVar9 != 0; lVar9 = *(long *)(lVar9 + 0x20)) {
      if (*(int *)(*(long *)(lVar9 + 8) + 0xa4) == DAT_10184dab8) {
        FUN_1003a4e5c(local_38,*(undefined8 *)param_1);
        uVar6 = FUN_1003e2b0c(lVar9,local_38[0]);
        lVar9 = *(long *)(*(long *)(param_2 + 0x58) + (uVar6 & 0xffffffff) * 8 + 0x50);
        uVar5 = 0;
        if (lVar9 != 0) {
          uVar5 = *(uint *)(lVar9 + 0x238) >> 10 & 7;
        }
        if (4 < param_1[3]) {
          return 0;
        }
        uVar1 = param_1[2];
        switch(param_1[3]) {
        case 0:
          bVar3 = SBORROW4(uVar5,uVar1);
          bVar2 = (int)(uVar5 - uVar1) < 0;
          bVar4 = uVar5 == uVar1;
          goto LAB_10048d680;
        case 1:
          bVar3 = SBORROW4(uVar5,uVar1);
          bVar2 = (int)(uVar5 - uVar1) < 0;
          goto LAB_10048d6e4;
        case 2:
          bVar3 = uVar5 == uVar1;
          goto LAB_10048d58c;
        case 3:
          bVar3 = SBORROW4(uVar5,uVar1);
          bVar2 = (int)(uVar5 - uVar1) < 0;
          goto LAB_10048d6f8;
        case 4:
          bVar3 = SBORROW4(uVar5,uVar1);
          bVar2 = (int)(uVar5 - uVar1) < 0;
          bVar4 = uVar5 == uVar1;
        }
        goto LAB_10048d704;
      }
    }
  default:
    return 0;
  }
LAB_10048d58c:
  return (ulong)bVar3;
}




void FUN_10048d70c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10149add0;
  param_1[1] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  *(ushort *)(param_1 + 0xb) = *(ushort *)(param_1 + 0xb) & 0xc000 | 0xb1;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[8] = 0;
  return;
}




undefined8 * FUN_10048d744(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10149add0;
  FUN_1003c1770(param_1 + 2);
  FUN_1003c1770(param_1 + 5);
  return param_1;
}




void FUN_10048d784(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10149add0;
  FUN_1003c1770(param_1 + 2);
  FUN_1003c1770(param_1 + 5);
  operator_delete(param_1);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10048d7c4(long param_1,long param_2)

{
  ushort uVar1;
  int iVar2;
  char *pcVar3;
  ushort uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  undefined **local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined1 local_58;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined4 local_4c;
  undefined1 local_48;
  
  *(ushort *)(param_1 + 0x58) = *(ushort *)(param_1 + 0x58) | 0x1000;
  iVar2 = FUN_10048d94c();
  uVar1 = *(ushort *)(param_1 + 0x58);
  uVar4 = 0x2000;
  if (iVar2 == 0) {
    uVar4 = 0;
  }
  uVar4 = uVar1 & 0xdfff | uVar4;
  *(ushort *)(param_1 + 0x58) = uVar4;
  if (DAT_101d23a38 != '\0') {
    if ((uVar1 & 0xf) != 2) {
      return;
    }
    if ((*(uint *)(param_2 + 0x238) & 7) == 2) {
      return;
    }
    lVar5 = *(long *)(param_2 + 0x10);
    uVar8 = _DAT_00000260;
    if (lVar5 != 0) {
      iVar2 = *(int *)(*(long *)(lVar5 + 8) + 0xa4);
      lVar6 = lVar5;
      if (iVar2 == DAT_10184dd68) {
        uVar8 = *(undefined4 *)(lVar5 + 0x260);
      }
      else {
        do {
          lVar6 = *(long *)(lVar6 + 0x10);
        } while (*(int *)(*(long *)(lVar6 + 8) + 0xa4) != DAT_10184dd68);
        while ((uVar8 = *(undefined4 *)(lVar6 + 0x260), iVar2 != DAT_10184dd68 &&
               (lVar5 = *(long *)(lVar5 + 0x10), lVar5 != 0))) {
          iVar2 = *(int *)(*(long *)(lVar5 + 8) + 0xa4);
        }
      }
    }
    pcVar3 = *(char **)(param_2 + 0x200);
    if (pcVar3 == (char *)0x0) {
      if (*(long *)(param_2 + 0x38) == 0) {
        pcVar3 = "<null>";
      }
      else {
        pcVar3 = *(char **)(*(long *)(param_2 + 0x38) + 8);
      }
    }
    uVar7 = *(undefined8 *)(lVar5 + 0x58);
    FUN_1003a4e5c(&local_70,pcVar3);
    local_54 = FUN_1003e2b0c(uVar7,(ulong)local_70 & 0xffffffff);
    local_68 = 0;
    uStack_60 = 0;
    uStack_50 = 2;
    if ((*(ushort *)(param_1 + 0x58) & 0x2000) == 0) {
      uStack_50 = 3;
    }
    local_58 = 0;
    local_70 = &PTR_FUN_1014978a8;
    local_48 = 0;
    local_4c = uVar8;
    FUN_100498454(&local_70,&DAT_101e47d30);
    if (DAT_101d23a38 != '\0') {
      return;
    }
    uVar4 = *(ushort *)(param_1 + 0x58);
  }
  if ((uVar4 & 0xf) == 2) {
    *(undefined4 *)(param_2 + 0x23c) = 0;
  }
  return;
}




ulong FUN_10048d94c(long param_1,long param_2)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  float fVar5;
  
  if (((DAT_101d23a38 == '\0') && ((*(ushort *)(param_1 + 0x58) & 0xf) == 2)) &&
     ((*(uint *)(param_2 + 0x23c) & 0xfffffffe) == 2)) {
    return (ulong)(*(uint *)(param_2 + 0x23c) == 2);
  }
  switch(*(ushort *)(param_1 + 0x58) >> 4 & 0xff) {
  case 0:
    if (*(char *)(param_1 + 0x50) == '\x01') {
      fVar5 = *(float *)(param_1 + 0x40);
      iVar1 = _rand();
      return (ulong)((float)iVar1 * 4.656613e-10 <= fVar5);
    }
  default:
    uVar4 = 0;
    break;
  case 1:
                    /* WARNING: Could not recover jumptable at 0x00010048dad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar4 = (**(code **)(param_1 + 0x40))(param_2);
    return uVar4;
  case 2:
  case 3:
  case 5:
  case 9:
    do {
      param_2 = *(long *)(param_2 + 0x10);
    } while (*(int *)(*(long *)(param_2 + 8) + 0xa4) != DAT_10184dd68);
    goto LAB_10048da74;
  case 4:
    uVar4 = 0;
    if (*(long *)(param_2 + 0x60) != 0) {
      iVar1 = FUN_10045fb10();
      uVar4 = (ulong)(iVar1 != 0);
    }
    break;
  case 6:
  case 7:
  case 8:
    plVar2 = *(long **)(param_2 + 0x1c8);
    uVar4 = 0;
    if (plVar2 != (long *)0x0) {
      if (*(int *)(param_2 + 0x1d0) == (int)plVar2[1]) {
        lVar3 = (**(code **)(*plVar2 + 0x10))();
        uVar4 = 0;
        if (lVar3 != 0) {
          param_2 = (**(code **)(**(long **)(param_2 + 0x1c8) + 0x10))();
          goto LAB_10048da74;
        }
      }
      else {
        uVar4 = 0;
        *(undefined8 *)(param_2 + 0x1c8) = 0;
        *(undefined4 *)(param_2 + 0x1d0) = DAT_101dc0b88;
      }
    }
    break;
  case 10:
    lVar3 = *(long *)(param_2 + 0x10);
    while ((lVar3 != 0 && (*(int *)(*(long *)(lVar3 + 8) + 0xa4) != DAT_10184dd68))) {
      lVar3 = *(long *)(lVar3 + 0x10);
    }
    FUN_1003461dc();
    param_2 = FUN_100345d90();
LAB_10048da74:
    uVar4 = FUN_10048d45c(param_1 + 0x40,param_2);
    return uVar4;
  }
  return uVar4;
}




void FUN_10048db14(void)

{
  return;
}




void FUN_10048db18(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  ushort uVar2;
  
  uVar2 = *(ushort *)(param_2 + 0x58);
  if ((DAT_101d23a38 == '\0' && (uVar2 & 0xf) != 0) &&
     (((uVar2 & 0xf) != 2 || (*(int *)(param_3 + 0x23c) == 0)))) {
    return;
  }
  if ((uVar2 >> 0xc & 1) == 0) {
    FUN_10048d7c4(param_2,param_3);
    uVar2 = *(ushort *)(param_2 + 0x58);
  }
  lVar1 = param_2 + 0x28;
  if ((uVar2 & 0x2000) != 0) {
    lVar1 = param_2 + 0x10;
  }
  FUN_1003c165c(param_1,lVar1,param_3);
  return;
}




float FUN_10048dbac(long param_1,long param_2)

{
  long lVar1;
  ushort uVar2;
  uint uVar3;
  long *plVar4;
  float fVar5;
  float fVar6;
  
  uVar2 = *(ushort *)(param_1 + 0x58);
  if ((DAT_101d23a38 == '\0' && (uVar2 & 0xf) != 0) &&
     (((uVar2 & 0xf) != 2 || (*(int *)(param_2 + 0x23c) == 0)))) {
    fVar6 = 100.0;
    if ((uVar2 & 0xf) != 2) {
      fVar6 = 0.0;
    }
  }
  else {
    if ((uVar2 >> 0xc & 1) == 0) {
      uVar3 = FUN_10048d94c(param_1,param_2);
    }
    else {
      uVar3 = uVar2 >> 0xd & 1;
    }
    lVar1 = 0x18;
    if (uVar3 == 0) {
      lVar1 = 0x30;
    }
    plVar4 = *(long **)(param_1 + lVar1);
    if (plVar4 == (long *)0x0) {
      fVar6 = 0.0;
    }
    else {
      fVar6 = 0.0;
      do {
        fVar5 = (float)(**(code **)(*plVar4 + 0x48))(plVar4,param_2);
        fVar6 = fVar5 + fVar6;
        plVar4 = (long *)(**(code **)(*plVar4 + 0x40))(plVar4);
      } while (plVar4 != (long *)0x0);
    }
  }
  return fVar6;
}




void FUN_10048dc88(long param_1,undefined8 param_2)

{
  long *plVar1;
  
  *(ushort *)(param_1 + 0x58) = *(ushort *)(param_1 + 0x58) & 0xefff;
  for (plVar1 = *(long **)(param_1 + 0x18); plVar1 != (long *)0x0;
      plVar1 = (long *)(**(code **)(*plVar1 + 0x40))(plVar1)) {
    (**(code **)(*plVar1 + 0x18))(plVar1,param_2);
  }
  for (plVar1 = *(long **)(param_1 + 0x30); plVar1 != (long *)0x0;
      plVar1 = (long *)(**(code **)(*plVar1 + 0x40))(plVar1)) {
    (**(code **)(*plVar1 + 0x18))(plVar1,param_2);
  }
  return;
}




ulong FUN_10048dd24(long param_1,long param_2)

{
  ushort uVar1;
  ulong uVar2;
  long *plVar3;
  
  uVar1 = *(ushort *)(param_1 + 0x58);
  if ((DAT_101d23a38 == '\0' && (uVar1 & 0xf) != 0) &&
     (((uVar1 & 0xf) != 2 || (*(int *)(param_2 + 0x23c) == 0)))) {
    uVar2 = (ulong)((uVar1 & 0xf) != 2);
  }
  else if ((uVar1 >> 0xc & 1) == 0) {
    uVar2 = 0;
  }
  else {
    if ((uVar1 >> 0xd & 1) == 0) {
      plVar3 = *(long **)(param_1 + 0x28);
      if (plVar3 != (long *)0x0) {
        do {
          uVar2 = (**(code **)(*plVar3 + 0x28))(plVar3,param_2);
          if ((int)uVar2 == 0) {
            return uVar2;
          }
          plVar3 = (long *)(**(code **)(*plVar3 + 0x40))(plVar3);
        } while (plVar3 != (long *)0x0);
        return uVar2;
      }
    }
    else {
      plVar3 = *(long **)(param_1 + 0x10);
      if (plVar3 != (long *)0x0) {
        do {
          uVar2 = (**(code **)(*plVar3 + 0x28))(plVar3,param_2);
          if ((int)uVar2 == 0) {
            return uVar2;
          }
          plVar3 = (long *)(**(code **)(*plVar3 + 0x40))(plVar3);
        } while (plVar3 != (long *)0x0);
        return uVar2;
      }
    }
    uVar2 = 1;
  }
  return uVar2;
}




void FUN_10048de18(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 0x18);
  if (plVar2 == (long *)0x0) {
    uVar1 = 0;
  }
  else {
    do {
      (**(code **)(*plVar2 + 0x10))(plVar2,param_2);
      plVar2 = (long *)(**(code **)(*plVar2 + 0x40))(plVar2);
    } while (plVar2 != (long *)0x0);
    uVar1 = *(undefined8 *)(param_1 + 0x18);
  }
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  plVar2 = *(long **)(param_1 + 0x30);
  if (plVar2 == (long *)0x0) {
    uVar1 = 0;
  }
  else {
    do {
      (**(code **)(*plVar2 + 0x10))(plVar2,param_2);
      plVar2 = (long *)(**(code **)(*plVar2 + 0x40))(plVar2);
    } while (plVar2 != (long *)0x0);
    uVar1 = *(undefined8 *)(param_1 + 0x30);
  }
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  return;
}




uint FUN_10048dec8(long param_1,long param_2)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  long *plVar4;
  
  uVar1 = *(ushort *)(param_1 + 0x58);
  if (((DAT_101d23a38 != '\0' || (uVar1 & 0xf) == 0) ||
      (((uVar1 & 0xf) == 2 && (*(int *)(param_2 + 0x23c) != 0)))) && ((uVar1 >> 0xc & 1) != 0)) {
    if ((uVar1 >> 0xd & 1) == 0) {
      plVar4 = *(long **)(param_1 + 0x30);
      if (plVar4 != (long *)0x0) {
        uVar3 = 0;
        do {
          uVar2 = (**(code **)(*plVar4 + 0x30))(plVar4,param_2);
          uVar3 = uVar2 | uVar3;
          plVar4 = (long *)(**(code **)(*plVar4 + 0x40))(plVar4);
        } while (plVar4 != (long *)0x0);
        return uVar3;
      }
    }
    else {
      plVar4 = *(long **)(param_1 + 0x18);
      if (plVar4 != (long *)0x0) {
        uVar3 = 0;
        do {
          uVar2 = (**(code **)(*plVar4 + 0x30))(plVar4,param_2);
          uVar3 = uVar2 | uVar3;
          plVar4 = (long *)(**(code **)(*plVar4 + 0x40))(plVar4);
        } while (plVar4 != (long *)0x0);
        return uVar3;
      }
    }
  }
  return 0;
}




void FUN_10048dfac(long param_1,long param_2)

{
  ushort uVar1;
  long *plVar2;
  
  uVar1 = *(ushort *)(param_1 + 0x58);
  if (((DAT_101d23a38 != '\0' || (uVar1 & 0xf) == 0) ||
      (((uVar1 & 0xf) == 2 && (*(int *)(param_2 + 0x23c) != 0)))) && ((uVar1 >> 0xc & 1) != 0)) {
    if ((uVar1 >> 0xd & 1) == 0) {
      for (plVar2 = *(long **)(param_1 + 0x30); plVar2 != (long *)0x0;
          plVar2 = (long *)(**(code **)(*plVar2 + 0x40))(plVar2)) {
        (**(code **)(*plVar2 + 0x20))(plVar2,param_2);
      }
    }
    else {
      for (plVar2 = *(long **)(param_1 + 0x18); plVar2 != (long *)0x0;
          plVar2 = (long *)(**(code **)(*plVar2 + 0x40))(plVar2)) {
        (**(code **)(*plVar2 + 0x20))(plVar2,param_2);
      }
    }
  }
  return;
}




void FUN_10048e06c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10149ae30;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  *(ushort *)(param_1 + 0xb) = *(ushort *)(param_1 + 0xb) & 0xf800 | 0x10;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[8] = 0;
  return;
}




undefined8 * FUN_10048e0a4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10149ae30;
  FUN_10044e548(param_1 + 2);
  FUN_10044e548(param_1 + 5);
  return param_1;
}




void FUN_10048e0e4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10149ae30;
  FUN_10044e548(param_1 + 2);
  FUN_10044e548(param_1 + 5);
  operator_delete(param_1);
  return;
}




void FUN_10048e124(long param_1,undefined8 param_2)

{
  long *plVar1;
  long *plVar2;
  int iVar3;
  
  if ((DAT_101d23a38 != '\0') || ((*(byte *)(param_1 + 0x59) >> 2 & 1) != 0)) {
    iVar3 = FUN_10048e1dc(param_1,param_2);
    if (iVar3 == 0) {
      if (*(long *)(param_1 + 0x28) != 0) {
        plVar2 = (long *)(*(long *)(param_1 + 0x28) + -8);
        while (plVar2 != (long *)0x0) {
          (**(code **)(*plVar2 + 0x10))(plVar2,param_2);
          plVar1 = plVar2 + 1;
          plVar2 = (long *)0x0;
          if (*plVar1 != 0) {
            plVar2 = (long *)(*plVar1 + -8);
          }
        }
      }
    }
    else if (*(long *)(param_1 + 0x10) != 0) {
      plVar2 = (long *)(*(long *)(param_1 + 0x10) + -8);
      while (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x10))(plVar2,param_2);
        plVar1 = plVar2 + 1;
        plVar2 = (long *)0x0;
        if (*plVar1 != 0) {
          plVar2 = (long *)(*plVar1 + -8);
        }
      }
    }
  }
  return;
}




ulong FUN_10048e1dc(long param_1,long *param_2)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  float fVar4;
  
  switch(*(undefined1 *)(param_1 + 0x58)) {
  case 0:
    if (*(char *)(param_1 + 0x50) == '\x01') {
      fVar4 = *(float *)(param_1 + 0x40);
      iVar1 = _rand();
      return (ulong)((float)iVar1 * 4.656613e-10 <= fVar4);
    }
  default:
switchD_10048e210_default:
    uVar2 = 0;
    break;
  case 1:
                    /* WARNING: Could not recover jumptable at 0x00010048e288. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(param_1 + 0x40))(param_2);
    return uVar2;
  case 2:
  case 3:
  case 5:
  case 7:
  case 9:
  case 10:
  case 0xc:
    lVar3 = *(long *)(*(long *)(*param_2 + 0x10) + 0x10);
    goto LAB_10048e2b4;
  case 4:
  case 0xb:
    lVar3 = FUN_100345d90(*(undefined4 *)(*param_2 + 0x308));
LAB_10048e2b4:
    uVar2 = FUN_10048d45c(param_1 + 0x40,lVar3);
    return uVar2;
  case 6:
    uVar2 = (ulong)((int)param_2[0x81] != 0);
    break;
  case 8:
    lVar3 = FUN_100345d90(*(undefined4 *)(*param_2 + 0x308));
    uVar2 = 0;
    if (lVar3 != 0) goto LAB_10048e2b4;
    break;
  case 0xd:
    uVar2 = (ulong)(*(int *)(param_2[0x85] + 0x18) ==
                   *(int *)(*(long *)(*(long *)(*param_2 + 0x10) + 0x10) + 0x260));
    break;
  case 0xe:
    uVar2 = 0;
    if (*(long *)(param_2[0x85] + 0x20) != 0) {
      uVar2 = FUN_1003a47d0(*(long *)(param_2[0x85] + 0x20),*(undefined8 *)(param_1 + 0x40));
      return uVar2;
    }
    break;
  case 0xf:
    if (*(long *)(param_2[0x85] + 0x20) != 0) {
      return (ulong)(*(byte *)(*(long *)(param_2[0x85] + 0x20) + 0x2f4) & 1);
    }
    goto switchD_10048e210_default;
  }
  return uVar2;
}




void FUN_10048e334(long param_1,undefined8 param_2)

{
  long *plVar1;
  long *plVar2;
  int iVar3;
  
  if ((DAT_101d23a38 != '\0') || ((*(byte *)(param_1 + 0x59) >> 2 & 1) != 0)) {
    iVar3 = FUN_10048e1dc(param_1,param_2);
    if (iVar3 == 0) {
      if (*(long *)(param_1 + 0x28) != 0) {
        plVar2 = (long *)(*(long *)(param_1 + 0x28) + -8);
        while (plVar2 != (long *)0x0) {
          (**(code **)(*plVar2 + 0x28))(plVar2,param_2);
          plVar1 = plVar2 + 1;
          plVar2 = (long *)0x0;
          if (*plVar1 != 0) {
            plVar2 = (long *)(*plVar1 + -8);
          }
        }
      }
    }
    else if (*(long *)(param_1 + 0x10) != 0) {
      plVar2 = (long *)(*(long *)(param_1 + 0x10) + -8);
      while (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x28))(plVar2,param_2);
        plVar1 = plVar2 + 1;
        plVar2 = (long *)0x0;
        if (*plVar1 != 0) {
          plVar2 = (long *)(*plVar1 + -8);
        }
      }
    }
  }
  return;
}




void FUN_10048e3ec(long param_1,undefined8 param_2)

{
  long *plVar1;
  long *plVar2;
  int iVar3;
  uint uVar4;
  
  if ((DAT_101d23a38 == '\0') && ((*(ushort *)(param_1 + 0x58) >> 10 & 1) == 0)) {
    *(ushort *)(param_1 + 0x58) = *(ushort *)(param_1 + 0x58) & 0xfdff | 0x100;
  }
  else {
    iVar3 = FUN_10048e1dc(param_1,param_2);
    uVar4 = 0x300;
    if (iVar3 == 0) {
      uVar4 = 0x100;
    }
    *(ushort *)(param_1 + 0x58) = *(ushort *)(param_1 + 0x58) & 0xfdff | (ushort)uVar4;
    if (uVar4 >> 9 == 0) {
      if (*(long *)(param_1 + 0x28) != 0) {
        plVar2 = (long *)(*(long *)(param_1 + 0x28) + -8);
        while (plVar2 != (long *)0x0) {
          (**(code **)(*plVar2 + 0x18))(plVar2,param_2);
          plVar1 = plVar2 + 1;
          plVar2 = (long *)0x0;
          if (*plVar1 != 0) {
            plVar2 = (long *)(*plVar1 + -8);
          }
        }
      }
    }
    else if (*(long *)(param_1 + 0x10) != 0) {
      plVar2 = (long *)(*(long *)(param_1 + 0x10) + -8);
      while (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x18))(plVar2,param_2);
        plVar1 = plVar2 + 1;
        plVar2 = (long *)0x0;
        if (*plVar1 != 0) {
          plVar2 = (long *)(*plVar1 + -8);
        }
      }
    }
  }
  return;
}




void FUN_10048e4d4(long param_1,undefined8 param_2)

{
  long *plVar1;
  long *plVar2;
  
  if ((*(byte *)(param_1 + 0x59) >> 1 & 1) == 0) {
    plVar2 = (long *)(*(long *)(param_1 + 0x28) + -8);
    if (*(long *)(param_1 + 0x28) != 0 && plVar2 != (long *)0x0) {
      do {
        (**(code **)(*plVar2 + 0x20))(plVar2,param_2);
        plVar1 = plVar2 + 1;
        plVar2 = (long *)0x0;
        if (*plVar1 != 0) {
          plVar2 = (long *)(*plVar1 + -8);
        }
      } while (plVar2 != (long *)0x0);
    }
  }
  else {
    plVar2 = (long *)(*(long *)(param_1 + 0x10) + -8);
    if (*(long *)(param_1 + 0x10) != 0 && plVar2 != (long *)0x0) {
      do {
        (**(code **)(*plVar2 + 0x20))(plVar2,param_2);
        plVar1 = plVar2 + 1;
        plVar2 = (long *)0x0;
        if (*plVar1 != 0) {
          plVar2 = (long *)(*plVar1 + -8);
        }
      } while (plVar2 != (long *)0x0);
    }
  }
  *(ushort *)(param_1 + 0x58) = *(ushort *)(param_1 + 0x58) & 0xfeff;
  return;
}




void FUN_10048e58c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  while ((lVar1 != 0 && (*(int *)(*(long *)(lVar1 + 8) + 0xa4) != DAT_10184daa8))) {
    lVar1 = *(long *)(lVar1 + 0x20);
  }
  return;
}




void FUN_10048e5b8(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_10149ae70;
  *(undefined2 *)(param_1 + 3) = 0;
  return;
}




void FUN_10048e5d0(long param_1,long *param_2)

{
  if (*(char *)(param_1 + 0x18) != '\0') {
    FUN_10048e58c(*(undefined8 *)(*(long *)(*param_2 + 0x10) + 0x10));
    return;
  }
  return;
}




void FUN_10048e5ec(long param_1,long *param_2)

{
  if (*(char *)(param_1 + 0x18) != '\0') {
    FUN_10048e58c(*(undefined8 *)(*(long *)(*param_2 + 0x10) + 0x10));
    return;
  }
  return;
}




void FUN_10048e608(long param_1,long *param_2)

{
  if (*(char *)(param_1 + 0x18) != '\0') {
    FUN_10048e58c(*(undefined8 *)(*(long *)(*param_2 + 0x10) + 0x10));
    return;
  }
  return;
}




void FUN_10048e624(long param_1,long *param_2)

{
  if (*(char *)(param_1 + 0x18) != '\0') {
    FUN_10048e58c(*(undefined8 *)(*(long *)(*param_2 + 0x10) + 0x10));
    return;
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_10048e640(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  while( true ) {
    if (lVar1 == 0) {
      return 0;
    }
    if (*(int *)(*(long *)(lVar1 + 8) + 0xa4) == ram0x0001018672a0) break;
    lVar1 = *(long *)(lVar1 + 0x20);
  }
  return *(byte *)(lVar1 + 0x818) >> 3 & 3;
}




void FUN_10048e680(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0xffffffff;
  return;
}




void FUN_10048e690(undefined8 *param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  undefined ***pppuVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined **local_718;
  undefined8 uStack_710;
  undefined8 local_708;
  undefined4 local_700;
  undefined4 uStack_6fc;
  undefined1 local_6f8;
  undefined1 local_6e9;
  undefined8 local_6e8;
  undefined4 local_6e0;
  undefined **local_6d8;
  undefined8 uStack_6d0;
  undefined1 local_6c8;
  undefined8 local_6c4;
  undefined8 local_6bc;
  undefined8 local_6b4;
  undefined4 local_6ac;
  undefined8 local_6a8;
  undefined8 uStack_6a0;
  undefined4 local_698;
  undefined1 local_694;
  undefined8 local_690;
  undefined8 uStack_688;
  undefined2 local_680;
  byte local_67e;
  undefined8 auStack_678 [200];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_101444218;
  local_6d8 = &PTR_FUN_101499960;
  uStack_6d0 = 0;
  local_6c4 = 0;
  local_6b4 = 0;
  local_6bc = 0;
  local_6ac = 0;
  uStack_6a0 = 0xbf800000c0000000;
  local_6a8 = 0xbf800000bf800000;
  local_698 = 0x3f800000;
  local_694 = 0xff;
  uStack_688 = 0xffffffff00000000;
  local_690 = 0xffffffff00000000;
  local_6c8 = 1;
  lVar2 = FUN_1003e10f0();
  local_680 = 0x4100;
  local_67e = *(byte *)(lVar2 + 0xe5) | 0x14;
  if ((code *)*param_1 != (code *)0x0) {
    (*(code *)*param_1)(param_2,&local_6d8);
  }
  if ((code *)param_1[1] == (code *)0x0) {
    pppuVar3 = (undefined ***)0x0;
  }
  else {
    local_6e8 = 0;
    local_6e0 = 0;
    local_6e9 = 0;
    (*(code *)param_1[1])(param_2,&local_6e8,&local_6e9);
    uStack_6fc = *(undefined4 *)(param_1 + 2);
    local_718 = &PTR_FUN_101499a08;
    uStack_710 = 0;
    local_708 = local_6e8;
    local_700 = local_6e0;
    local_6f8 = local_6e9;
    pppuVar3 = &local_718;
  }
  uVar1 = FUN_1003a6ce4(&local_6d8,auStack_678,200,pppuVar3);
  if (uVar1 != 0) {
    uVar4 = (ulong)*(uint *)(param_1 + 2);
    uVar5 = (ulong)uVar1;
    puVar6 = auStack_678;
    do {
      if (uVar4 == 0) break;
      uVar1 = *(uint *)(param_2 + 0x408);
      *(undefined8 *)(param_2 + (ulong)uVar1 * 8 + 8) = *puVar6;
      *(uint *)(param_2 + 0x408) = uVar1 + 1;
      uVar4 = uVar4 - 1;
      uVar5 = uVar5 - 1;
      puVar6 = puVar6 + 1;
    } while (uVar5 != 0);
  }
  if (*(long *)PTR____stack_chk_guard_101444218 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_10048e820(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}




void FUN_10048e828(undefined8 *param_1,long param_2,long param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  int local_38 [2];
  
  lVar7 = *(long *)(param_3 + 0x18);
  while ((lVar7 != 0 && (*(int *)(*(long *)(lVar7 + 8) + 0xa4) != DAT_10184daa8))) {
    lVar7 = *(long *)(lVar7 + 0x20);
  }
  FUN_1003a4e5c(local_38,*param_1);
  lVar5 = *(long *)(lVar7 + 0x28);
  while( true ) {
    if (lVar5 == 0) {
      return;
    }
    if ((*(int *)(lVar5 + 0x314) == local_38[0]) && (*(int *)(lVar5 + 0x310) == 0)) break;
    lVar5 = *(long *)(lVar5 + 0x350);
  }
  iVar1 = *(int *)(lVar5 + 0x30c);
  uVar6 = param_1[1];
  uVar3 = FUN_1004d2524(uVar6);
  uVar6 = FUN_100015208(uVar6,uVar3,0x12345678);
  for (lVar7 = *(long *)(lVar7 + 0x28); (lVar7 != 0 && (*(int *)(lVar7 + 0x30c) != iVar1));
      lVar7 = *(long *)(lVar7 + 0x350)) {
  }
  puVar4 = (undefined4 *)(**(code **)(*(long *)(lVar7 + 0x168) + 0x18))(lVar7 + 0x168,uVar6);
  lVar7 = FUN_100345d90(*puVar4);
  if (lVar7 != 0) {
    uVar2 = *(uint *)(param_2 + 0x408);
    *(long *)(param_2 + (ulong)uVar2 * 8 + 8) = lVar7;
    *(uint *)(param_2 + 0x408) = uVar2 + 1;
  }
  return;
}




void FUN_10048e92c(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[2] = 0;
  param_1[4] = 0;
  *(byte *)(param_1 + 6) = *(byte *)(param_1 + 6) & 0xf8;
  return;
}




void FUN_10048e948(undefined4 *param_1,long param_2,long param_3,long param_4)

{
  byte bVar1;
  bool bVar2;
  undefined4 uVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  undefined **local_6f8;
  undefined8 local_6f0;
  undefined1 local_6e8;
  undefined8 local_6e4;
  undefined8 local_6dc;
  undefined8 local_6d4;
  undefined4 local_6cc;
  undefined8 local_6c8;
  undefined8 uStack_6c0;
  undefined4 local_6b8;
  undefined1 local_6b4;
  undefined8 local_6b0;
  undefined8 uStack_6a8;
  undefined2 local_6a0;
  undefined1 local_69e;
  undefined4 local_69c;
  undefined4 local_698;
  undefined8 local_694;
  undefined1 local_68c;
  long local_688 [200];
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_101444218;
  uVar3 = *param_1;
  local_6f0 = 0;
  local_6e4 = 0;
  local_6d4 = 0;
  local_6dc = 0;
  local_6cc = 0;
  uStack_6c0 = 0xbf800000c0000000;
  local_6c8 = 0xbf800000bf800000;
  local_6b8 = 0x3f800000;
  local_6b4 = 0xff;
  uStack_6a8 = 0xffffffff00000000;
  local_6b0 = 0xffffffff00000000;
  local_6e8 = 1;
  lVar5 = FUN_1003e10f0();
  uVar4 = (uint)*(byte *)(lVar5 + 0xe5) << 0x10 | 0x144100;
  local_6a0 = 0x4100;
  local_69e = (undefined1)(uVar4 >> 0x10);
  local_6f8 = &PTR_FUN_1014999d0;
  local_698 = 0xffffffff;
  local_694 = 0;
  local_68c = 0;
  bVar1 = *(byte *)(param_1 + 6);
  if ((bVar1 & 1) != 0) {
    local_698 = *(undefined4 *)(param_3 + 0x260);
  }
  if ((bVar1 >> 1 & 1) != 0) {
    uVar4 = uVar4 & 0x154000;
    local_6a0 = (undefined2)uVar4;
    local_69e = (undefined1)(uVar4 >> 0x10);
  }
  bVar2 = (bVar1 >> 2 & 1) != 0;
  local_69c = uVar3;
  if (bVar2) {
    uVar3 = FUN_10048b224(param_1 + 2,param_2,0);
    local_694 = CONCAT44(local_694._4_4_,uVar3);
  }
  local_68c = bVar2;
  uVar4 = FUN_1003a6ce4(&local_6f8,local_688,200,0);
  if (uVar4 != 0) {
    uVar6 = (ulong)uVar4;
    plVar7 = local_688;
    do {
      if (*plVar7 != param_4) {
        uVar4 = *(uint *)(param_2 + 0x408);
        *(long *)(param_2 + (ulong)uVar4 * 8 + 8) = *plVar7;
        *(uint *)(param_2 + 0x408) = uVar4 + 1;
      }
      plVar7 = plVar7 + 1;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  if (*(long *)PTR____stack_chk_guard_101444218 == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_10048eadc(undefined8 param_1,long *param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_2 + 0x81);
  param_2[(ulong)uVar1 + 1] = *(long *)(*(long *)(*param_2 + 0x10) + 0x10);
  *(uint *)(param_2 + 0x81) = uVar1 + 1;
  return;
}




void FUN_10048eb00(long param_1,undefined8 param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x400);
  *(undefined8 *)(param_1 + (ulong)uVar1 * 8) = param_2;
  *(uint *)(param_1 + 0x400) = uVar1 + 1;
  return;
}




void FUN_10048eb14(undefined8 param_1,long *param_2)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  
  iVar1 = *(int *)(*param_2 + 0x308);
  if ((iVar1 != -1) &&
     ((lVar3 = *(long *)(*(long *)(*param_2 + 0x10) + 0x10), *(int *)(lVar3 + 0x260) == iVar1 ||
      (lVar3 = FUN_100345d90(iVar1), lVar3 != 0)))) {
    uVar2 = *(uint *)(param_2 + 0x81);
    param_2[(ulong)uVar2 + 1] = lVar3;
    *(uint *)(param_2 + 0x81) = uVar2 + 1;
  }
  return;
}




void FUN_10048eb74(undefined8 param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  
  lVar2 = *(long *)(*(long *)(param_2 + 0x428) + 0x20);
  if (lVar2 != 0) {
    uVar1 = *(uint *)(param_2 + 0x408);
    *(long *)(param_2 + (ulong)uVar1 * 8 + 8) = lVar2;
    *(uint *)(param_2 + 0x408) = uVar1 + 1;
  }
  return;
}




void FUN_10048eb98(undefined8 param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  
  lVar2 = *(long *)(*(long *)(param_2 + 0x430) + 0x10);
  if (lVar2 != 0) {
    uVar1 = *(uint *)(param_2 + 0x408);
    *(long *)(param_2 + (ulong)uVar1 * 8 + 8) = lVar2;
    *(uint *)(param_2 + 0x408) = uVar1 + 1;
  }
  return;
}




void FUN_10048ebbc(undefined8 param_1,long param_2)

{
  uint uVar1;
  
  if (*(long *)(param_2 + 0x438) != 0) {
    uVar1 = *(uint *)(param_2 + 0x408);
    *(long *)(param_2 + (ulong)uVar1 * 8 + 8) = *(long *)(param_2 + 0x438);
    *(uint *)(param_2 + 0x408) = uVar1 + 1;
  }
  return;
}




void FUN_10048ebdc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10149aeb0;
  param_1[1] = 0;
  *(byte *)(param_1 + 2) = *(byte *)(param_1 + 2) & 0xfe;
  return;
}




void FUN_10048ebf8(long param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  undefined **local_6d8;
  long local_6d0;
  undefined1 local_6c8;
  undefined8 local_6c4;
  undefined8 local_6bc;
  undefined8 local_6b4;
  undefined4 local_6ac;
  undefined8 local_6a8;
  undefined8 uStack_6a0;
  undefined4 local_698;
  undefined1 local_694;
  undefined4 local_690;
  undefined8 local_68c;
  undefined4 local_684;
  undefined2 local_680;
  byte local_67e;
  long local_678 [200];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_101444218;
  lVar2 = 0x2c0;
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    lVar2 = 0x2c4;
  }
  lVar2 = FUN_100345d90(*(undefined4 *)(*(long *)(param_2 + 0x440) + lVar2));
  if (lVar2 != 0) {
    uVar1 = *(uint *)(param_2 + 0x408);
    *(long *)(param_2 + (ulong)uVar1 * 8 + 8) = lVar2;
    *(uint *)(param_2 + 0x408) = uVar1 + 1;
    if ((*(byte *)(param_1 + 0x10) >> 1 & 1) != 0) {
      local_6d8 = &PTR_FUN_101499960;
      local_6c4 = 0;
      local_6b4 = 0;
      local_6bc = 0;
      local_6ac = 0;
      uStack_6a0 = 0xbf800000c0000000;
      local_6a8 = 0xbf800000bf800000;
      local_698 = 0x3f800000;
      local_694 = 0xff;
      local_68c = 0xffffffff;
      local_684 = 0xffffffff;
      local_6c8 = 1;
      lVar3 = FUN_1003e10f0();
      local_690 = 1;
      local_680 = 0x4150;
      local_67e = *(byte *)(lVar3 + 0xe5) | 0x14;
      local_6d0 = lVar2;
      uVar1 = FUN_1003a6ce4(&local_6d8,local_678,200,0);
      if (uVar1 != 0) {
        uVar4 = (ulong)uVar1;
        plVar5 = local_678;
        do {
          if (*plVar5 != lVar2) {
            uVar1 = *(uint *)(param_2 + 0x408);
            *(long *)(param_2 + (ulong)uVar1 * 8 + 8) = *plVar5;
            *(uint *)(param_2 + 0x408) = uVar1 + 1;
          }
          plVar5 = plVar5 + 1;
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_101444218 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_10048ed58(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_10149aef0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}




void FUN_10048ed70(long param_1,long *param_2)

{
  uint uVar1;
  ulong uVar2;
  long *plVar3;
  undefined **local_690;
  undefined8 uStack_688;
  undefined1 local_680;
  undefined4 local_67c;
  long local_678;
  undefined1 local_670;
  long local_668 [200];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_101444218;
  local_680 = 0xff;
  local_690 = &PTR_FUN_101499900;
  uStack_688 = 0;
  local_678 = 0;
  local_67c = *(undefined4 *)(*(long *)(*(long *)(*param_2 + 0x10) + 0x10) + 0x260);
  if (*(long *)(param_1 + 0x10) != 0) {
    local_678 = *(long *)(param_1 + 0x10);
  }
  local_670 = *(char *)(param_1 + 0x18) != '\0';
  uVar1 = FUN_1003a6ce4(&local_690,local_668,200,0);
  if (uVar1 != 0) {
    uVar2 = (ulong)uVar1;
    plVar3 = local_668;
    do {
      if (*plVar3 != 0) {
        uVar1 = *(uint *)(param_2 + 0x81);
        param_2[(ulong)uVar1 + 1] = *plVar3;
        *(uint *)(param_2 + 0x81) = uVar1 + 1;
      }
      plVar3 = plVar3 + 1;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  if (*(long *)PTR____stack_chk_guard_101444218 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_10048ee54(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10149af30;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  return;
}




void FUN_10048ee68(long param_1,long *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  ulong uVar3;
  uint *puVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  
  if (DAT_101d23a38 != '\0') {
    plVar6 = *(long **)(param_1 + 0x10);
    if (plVar6 == (long *)0x0) {
      lVar5 = *param_2;
      uVar7 = *(undefined8 *)(param_1 + 0x18);
      uVar2 = FUN_1004d2524(uVar7);
      uVar7 = FUN_100015208(uVar7,uVar2,0x12345678);
      puVar4 = (uint *)(**(code **)(*(long *)(lVar5 + 0x168) + 0x18))(lVar5 + 0x168,uVar7);
      uVar3 = (ulong)*puVar4;
    }
    else {
      uVar3 = (**(code **)(*plVar6 + 0x10))(plVar6);
    }
    lVar5 = FUN_100345d90(uVar3);
    if (lVar5 != 0) {
      uVar1 = *(uint *)(param_2 + 0x81);
      param_2[(ulong)uVar1 + 1] = lVar5;
      *(uint *)(param_2 + 0x81) = uVar1 + 1;
    }
  }
  return;
}




void FUN_10048ef10(long param_1,long *param_2)

{
  FUN_10048e690(param_1 + 0x10,param_2,*(undefined8 *)(*(long *)(*param_2 + 0x10) + 0x10));
  return;
}




void FUN_10048ef24(long param_1,long *param_2)

{
  FUN_10048e828(param_1 + 0x10,param_2,*(undefined8 *)(*(long *)(*param_2 + 0x10) + 0x10));
  return;
}




void FUN_10048ef38(long param_1,long *param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  iVar1 = *(int *)(*param_2 + 0x308);
  if (iVar1 == -1) {
    lVar2 = 0;
  }
  else {
    lVar2 = *(long *)(*(long *)(*param_2 + 0x10) + 0x10);
    if (*(int *)(lVar2 + 0x260) != iVar1) {
      lVar2 = FUN_100345d90();
    }
  }
  if (*(char *)(param_1 + 0x30) == '\0') {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(*(long *)(*param_2 + 0x10) + 0x10);
  }
  FUN_10048e948(param_1 + 0x10,param_2,lVar2,uVar3);
  return;
}




void FUN_10048efb0(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_10149af70;
  return;
}




void FUN_10048efc4(long param_1,undefined8 *param_2)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined **local_6d8;
  undefined8 uStack_6d0;
  undefined1 local_6c8;
  undefined8 local_6c4;
  undefined8 local_6bc;
  undefined8 local_6b4;
  undefined4 local_6ac;
  undefined8 local_6a8;
  undefined8 uStack_6a0;
  undefined4 local_698;
  undefined1 local_694;
  undefined8 local_690;
  undefined8 uStack_688;
  undefined2 local_680;
  byte local_67e;
  undefined8 auStack_678 [200];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_101444218;
  local_6d8 = &PTR_FUN_101499960;
  uStack_6d0 = 0;
  local_6c4 = 0;
  local_6b4 = 0;
  local_6bc = 0;
  local_6ac = 0;
  uStack_6a0 = 0xbf800000c0000000;
  local_6a8 = 0xbf800000bf800000;
  local_698 = 0x3f800000;
  local_694 = 0xff;
  uStack_688 = 0xffffffff00000000;
  local_690 = 0xffffffff00000000;
  local_6c8 = 1;
  lVar2 = FUN_1003e10f0();
  local_680 = 0x4100;
  local_67e = *(byte *)(lVar2 + 0xe5) | 0x14;
  (**(code **)(param_1 + 0x10))(*param_2,&local_6d8);
  uVar1 = FUN_1003a6ce4(&local_6d8,auStack_678,200,0);
  if (uVar1 != 0) {
    uVar3 = *(uint *)(param_2 + 0x81);
    uVar4 = (ulong)uVar1;
    puVar5 = auStack_678;
    do {
      param_2[(ulong)uVar3 + 1] = *puVar5;
      uVar3 = uVar3 + 1;
      uVar4 = uVar4 - 1;
      puVar5 = puVar5 + 1;
    } while (uVar4 != 0);
    *(uint *)(param_2 + 0x81) = uVar3;
  }
  if (*(long *)PTR____stack_chk_guard_101444218 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined8 FUN_10048f0d4(int *param_1,long param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  
  iVar1 = param_1[4];
  iVar2 = *param_1;
  if (iVar1 == -1) {
    if (iVar2 == 0) {
LAB_10048f184:
      if (param_1[1] == 0) {
LAB_10048f22c:
        if (param_1[2] != 0) {
          for (lVar3 = *(long *)(param_2 + 0x28); lVar3 != 0; lVar3 = *(long *)(lVar3 + 0x350)) {
            if ((*(int *)(lVar3 + 0x314) == param_1[2]) && (*(int *)(lVar3 + 0x310) == 0)) {
              return 0;
            }
          }
        }
        if (param_1[3] == 0) {
          return 1;
        }
        lVar3 = *(long *)(param_2 + 0x28);
        if (lVar3 == 0) {
          return 1;
        }
        while ((*(int *)(lVar3 + 0x314) != param_1[3] || (*(int *)(lVar3 + 0x310) != 0))) {
          lVar3 = *(long *)(lVar3 + 0x350);
          if (lVar3 == 0) {
            return 1;
          }
        }
      }
      else {
        for (lVar3 = *(long *)(param_2 + 0x28); lVar3 != 0; lVar3 = *(long *)(lVar3 + 0x350)) {
          if ((*(int *)(lVar3 + 0x314) == param_1[1]) && (*(int *)(lVar3 + 0x310) == 0))
          goto LAB_10048f22c;
        }
      }
    }
    else {
      for (lVar3 = *(long *)(param_2 + 0x28); lVar3 != 0; lVar3 = *(long *)(lVar3 + 0x350)) {
        if ((*(int *)(lVar3 + 0x314) == iVar2) && (*(int *)(lVar3 + 0x310) == 0))
        goto LAB_10048f184;
      }
    }
  }
  else if (iVar2 == 0) {
LAB_10048f148:
    if (param_1[1] == 0) {
LAB_10048f1b8:
      if (param_1[2] != 0) {
        for (lVar3 = *(long *)(param_2 + 0x28); lVar3 != 0; lVar3 = *(long *)(lVar3 + 0x350)) {
          if (((*(int *)(lVar3 + 0x314) == param_1[2]) && (*(int *)(lVar3 + 0x310) == 0)) &&
             (*(int *)(lVar3 + 0x308) == iVar1)) {
            return 0;
          }
        }
      }
      if (param_1[3] != 0) {
        for (lVar3 = *(long *)(param_2 + 0x28); lVar3 != 0; lVar3 = *(long *)(lVar3 + 0x350)) {
          if (((*(int *)(lVar3 + 0x314) == param_1[3]) && (*(int *)(lVar3 + 0x310) == 0)) &&
             (*(int *)(lVar3 + 0x308) == iVar1)) {
            return 0;
          }
        }
      }
      return 1;
    }
    for (lVar3 = *(long *)(param_2 + 0x28); lVar3 != 0; lVar3 = *(long *)(lVar3 + 0x350)) {
      if (((*(int *)(lVar3 + 0x314) == param_1[1]) && (*(int *)(lVar3 + 0x310) == 0)) &&
         (*(int *)(lVar3 + 0x308) == iVar1)) goto LAB_10048f1b8;
    }
  }
  else {
    for (lVar3 = *(long *)(param_2 + 0x28); lVar3 != 0; lVar3 = *(long *)(lVar3 + 0x350)) {
      if (((*(int *)(lVar3 + 0x314) == iVar2) && (*(int *)(lVar3 + 0x310) == 0)) &&
         (*(int *)(lVar3 + 0x308) == iVar1)) goto LAB_10048f148;
    }
  }
  return 0;
}




ulong FUN_10048f294(long param_1,long param_2,long param_3,long param_4)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined ***pppuVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  undefined **local_6d0;
  undefined8 uStack_6c8;
  undefined4 local_6c0;
  float fStack_6bc;
  undefined4 local_6b8;
  undefined4 local_6b4;
  undefined1 local_6b0;
  long local_6a8 [200];
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_101444218;
  bVar4 = (*(ushort *)(param_2 + 0x58) & 0x8000) != 0;
  puVar2 = (undefined4 *)(param_3 + 600);
  if (bVar4) {
    puVar2 = (undefined4 *)(param_2 + 0x1c);
  }
  local_6b8 = *puVar2;
  puVar2 = (undefined4 *)(param_3 + 0x250);
  fStack_6bc = *(float *)(param_3 + 0x2ec) + *(float *)(param_3 + 0x254);
  if (bVar4) {
    puVar2 = (undefined4 *)(param_2 + 0x14);
    fStack_6bc = *(float *)(param_2 + 0x18);
  }
  local_6c0 = *puVar2;
  local_6d0 = &PTR_FUN_101499a08;
  uStack_6c8 = 0;
  local_6b4 = 200;
  local_6b0 = 0;
  pppuVar3 = (undefined ***)(undefined1 *)0x0;
  if ((*(byte *)(param_1 + 0x18) & 1) != 0) {
    pppuVar3 = &local_6d0;
  }
  uVar6 = FUN_1003a6ce4(param_2,local_6a8,200,pppuVar3);
  iVar5 = DAT_10184daa8;
  if (uVar6 == 0) {
    uVar9 = 0;
  }
  else {
    uVar10 = 0;
    uVar9 = 0;
    do {
      lVar11 = local_6a8[uVar10];
      lVar8 = *(long *)(lVar11 + 0x18);
      while ((lVar8 != 0 && (*(int *)(*(long *)(lVar8 + 8) + 0xa4) != iVar5))) {
        lVar8 = *(long *)(lVar8 + 0x20);
      }
      iVar7 = FUN_10048f0d4(param_1);
      if (iVar7 != 0) {
        *(long *)(param_4 + uVar9 * 8) = lVar11;
        uVar1 = (int)uVar9 + 1;
        uVar9 = (ulong)uVar1;
        if (*(uint *)(param_1 + 0x14) <= uVar1) break;
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 != uVar6);
  }
  if (*(long *)PTR____stack_chk_guard_101444218 != local_68) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar9;
}




void FUN_10048f40c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10149afb0;
  param_1[1] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[2] = 0;
  param_1[5] = 0xffffffffffffffff;
  *(byte *)(param_1 + 6) = *(byte *)(param_1 + 6) & 0xfe;
  return;
}




void FUN_10048f438(long param_1,long *param_2)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  long *plVar5;
  undefined **local_6d8;
  undefined8 uStack_6d0;
  undefined1 local_6c8;
  undefined8 local_6c4;
  undefined8 local_6bc;
  undefined8 local_6b4;
  undefined4 local_6ac;
  undefined8 local_6a8;
  undefined8 uStack_6a0;
  undefined4 local_698;
  undefined1 local_694;
  undefined8 local_690;
  undefined8 uStack_688;
  undefined2 local_680;
  byte local_67e;
  long alStack_678 [200];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_101444218;
  local_6d8 = &PTR_FUN_101499960;
  uStack_6d0 = 0;
  local_6c4 = 0;
  local_6b4 = 0;
  local_6bc = 0;
  local_6ac = 0;
  uStack_6a0 = 0xbf800000c0000000;
  local_6a8 = 0xbf800000bf800000;
  local_698 = 0x3f800000;
  local_694 = 0xff;
  uStack_688 = 0xffffffff00000000;
  local_690 = 0xffffffff00000000;
  local_6c8 = 1;
  lVar2 = FUN_1003e10f0();
  local_680 = 0x4100;
  local_67e = *(byte *)(lVar2 + 0xe5) | 0x14;
  (**(code **)(param_1 + 0x10))(*param_2,&local_6d8);
  uVar1 = FUN_10048f294(param_1 + 0x18,&local_6d8,*(undefined8 *)(*(long *)(*param_2 + 0x10) + 0x10)
                        ,alStack_678);
  if (uVar1 != 0) {
    uVar3 = *(uint *)(param_2 + 0x81);
    uVar4 = (ulong)uVar1;
    plVar5 = alStack_678;
    do {
      param_2[(ulong)uVar3 + 1] = *plVar5;
      uVar3 = uVar3 + 1;
      uVar4 = uVar4 - 1;
      plVar5 = plVar5 + 1;
    } while (uVar4 != 0);
    *(uint *)(param_2 + 0x81) = uVar3;
  }
  if (*(long *)PTR____stack_chk_guard_101444218 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_10048f550(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10149aff0;
  param_1[1] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[2] = 0;
  param_1[5] = 0xffffffffffffffff;
  *(byte *)(param_1 + 6) = *(byte *)(param_1 + 6) & 0xfe;
  return;
}




void FUN_10048f57c(long param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined **local_6d8;
  undefined8 uStack_6d0;
  undefined1 local_6c8;
  undefined8 local_6c4;
  undefined8 local_6bc;
  undefined8 local_6b4;
  undefined4 local_6ac;
  undefined8 local_6a8;
  undefined8 uStack_6a0;
  undefined4 local_698;
  undefined1 local_694;
  undefined8 local_690;
  undefined8 uStack_688;
  undefined2 local_680;
  byte local_67e;
  undefined8 auStack_678 [200];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_101444218;
  local_6d8 = &PTR_FUN_101499960;
  uStack_6d0 = 0;
  local_6c4 = 0;
  local_6b4 = 0;
  local_6bc = 0;
  local_6ac = 0;
  uStack_6a0 = 0xbf800000c0000000;
  local_6a8 = 0xbf800000bf800000;
  local_698 = 0x3f800000;
  local_694 = 0xff;
  uStack_688 = 0xffffffff00000000;
  local_690 = 0xffffffff00000000;
  local_6c8 = 1;
  lVar2 = FUN_1003e10f0();
  local_680 = 0x4100;
  local_67e = *(byte *)(lVar2 + 0xe5) | 0x14;
  (**(code **)(param_1 + 0x10))(param_2,&local_6d8);
  lVar2 = param_2;
  do {
    lVar2 = *(long *)(lVar2 + 0x10);
  } while (*(int *)(*(long *)(lVar2 + 8) + 0xa4) != DAT_10184dd68);
  uVar1 = FUN_10048f294(param_1 + 0x18,&local_6d8,lVar2,auStack_678);
  if (uVar1 != 0) {
    uVar3 = (ulong)uVar1;
    puVar4 = auStack_678;
    do {
      FUN_1003b4bec(param_2,*puVar4);
      uVar3 = uVar3 - 1;
      puVar4 = puVar4 + 1;
    } while (uVar3 != 0);
  }
  if (*(long *)PTR____stack_chk_guard_101444218 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_10048f6a0(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_10149b050;
  return;
}




void FUN_10048f6b4(long param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long lVar7;
  uint uVar8;
  uint uVar9;
  undefined8 local_98 [8];
  long local_58;
  
  local_58 = *(long *)PTR____stack_chk_guard_101444218;
  lVar7 = *(long *)(param_2 + 0x60);
  if (lVar7 != 0) {
    uVar3 = FUN_10045fb10(lVar7);
    uVar1 = (uint)uVar3;
    if ((int)uVar1 < 1) {
      uVar8 = 0;
    }
    else {
      uVar8 = 0;
      uVar9 = 1;
      while( true ) {
        uVar4 = 0;
        if (lVar7 != 0) {
          uVar4 = FUN_10045fa7c(lVar7,uVar9 - 1);
        }
        iVar2 = (**(code **)(param_1 + 0x10))(param_2,uVar4,uVar9 - 1,uVar3);
        if (iVar2 != 0) {
          local_98[(int)uVar8] = uVar4;
          uVar8 = uVar8 + 1;
        }
        if (uVar1 == uVar9) break;
        lVar7 = *(long *)(param_2 + 0x60);
        uVar9 = uVar9 + 1;
      }
    }
    if (uVar8 != uVar1) {
      if (*(long *)(param_2 + 0x60) != 0) {
        FUN_1010a17e4();
        *(undefined8 *)(param_2 + 0x60) = 0;
      }
      if (0 < (int)uVar8) {
        uVar5 = (ulong)uVar8;
        puVar6 = local_98;
        do {
          FUN_1003b4bec(param_2,*puVar6);
          uVar5 = uVar5 - 1;
          puVar6 = puVar6 + 1;
        } while (uVar5 != 0);
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_101444218 == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_10048f7d8(undefined4 *param_1,long param_2,undefined8 *param_3,undefined8 *param_4,
                  long param_5,int param_6,int param_7,int param_8)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  long lVar9;
  undefined **local_728;
  long lStack_720;
  undefined1 local_718;
  undefined8 local_714;
  undefined8 local_70c;
  undefined8 local_704;
  undefined4 local_6fc;
  undefined8 local_6f8;
  undefined8 uStack_6f0;
  undefined4 local_6e8;
  undefined1 local_6e4;
  undefined4 local_6e0;
  undefined8 local_6dc;
  undefined4 local_6d4;
  undefined2 local_6d0;
  undefined1 local_6ce;
  undefined8 local_6cc;
  undefined8 uStack_6c4;
  undefined8 local_6bc;
  undefined4 local_6b4;
  undefined8 local_6b0;
  undefined4 uStack_6a8;
  undefined4 uStack_6a4;
  undefined4 uStack_6a0;
  undefined4 uStack_69c;
  long local_698 [200];
  long local_58;
  
  local_58 = *(long *)PTR____stack_chk_guard_101444218;
  local_6b0 = *param_3;
  uStack_6a8 = *(undefined4 *)(param_3 + 1);
  uStack_6a4 = (undefined4)*param_4;
  uStack_6a0 = (undefined4)((ulong)*param_4 >> 0x20);
  uStack_69c = *(undefined4 *)(param_4 + 1);
  lVar4 = FUN_1003e10f0();
  uVar2 = (uint)*(byte *)(lVar4 + 0xe5) << 0x10 | 0x144100;
  if (param_5 != 0) {
    uVar5 = 0x10;
    if (param_6 == 0) {
      uVar5 = 0;
    }
    uVar6 = 0x20;
    if (param_7 == 0) {
      uVar6 = 0;
    }
    uVar7 = 0x40;
    if (param_8 == 0) {
      uVar7 = 0;
    }
    uVar2 = uVar6 | uVar5 | uVar7 | uVar2;
  }
  local_718 = 1;
  local_6e8 = 0x3f800000;
  local_6e4 = 0xff;
  local_6e0 = param_1[8];
  local_714 = 0;
  local_704 = 0;
  local_70c = 0;
  local_6fc = 0;
  uStack_6f0 = 0xbf800000c0000000;
  local_6f8 = 0xbf800000bf800000;
  local_6dc = 0xffffffff;
  local_6d4 = 0xffffffff;
  local_6ce = (undefined1)(uVar2 >> 0x10);
  local_6d0 = (undefined2)uVar2;
  local_728 = &PTR_FUN_101499998;
  local_6b4 = *param_1;
  uStack_6c4 = CONCAT44(uStack_6a4,uStack_6a8);
  local_6cc = local_6b0;
  local_6bc = CONCAT44(uStack_69c,uStack_6a0);
  lStack_720 = param_5;
  uVar2 = FUN_1003a6ce4(&local_728,local_698,200,0);
  iVar1 = DAT_10184daa8;
  if (uVar2 != 0) {
    uVar8 = 0;
    do {
      lVar9 = local_698[uVar8];
      lVar4 = *(long *)(lVar9 + 0x18);
      while ((lVar4 != 0 && (*(int *)(*(long *)(lVar4 + 8) + 0xa4) != iVar1))) {
        lVar4 = *(long *)(lVar4 + 0x20);
      }
      iVar3 = FUN_10048f0d4(param_1 + 1);
      if (iVar3 != 0) {
        uVar5 = *(uint *)(param_2 + 0x400);
        *(long *)(param_2 + (ulong)uVar5 * 8) = lVar9;
        *(uint *)(param_2 + 0x400) = uVar5 + 1;
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 != uVar2);
  }
  if (*(long *)PTR____stack_chk_guard_101444218 != local_58) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}




void FUN_10048f9b4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10149b0b0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined8 *)((long)param_1 + 0x24) = 0xffffffffffffffff;
  *(byte *)((long)param_1 + 0x2c) = *(byte *)((long)param_1 + 0x2c) & 0xfe;
  *(undefined4 *)(param_1 + 6) = 0;
  *(undefined2 *)(param_1 + 8) = 0x101;
  *(undefined1 *)((long)param_1 + 0x42) = 1;
  return;
}




void FUN_10048f9f4(long param_1,long *param_2)

{
  int iVar1;
  long lVar2;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_30;
  undefined4 local_28;
  
  local_30 = 0;
  local_28 = 0;
  local_40 = 0;
  local_38 = 0;
  (**(code **)(param_1 + 0x38))(*param_2,&local_30,&local_40);
  iVar1 = *(int *)(*param_2 + 0x308);
  if (iVar1 == -1) {
    lVar2 = 0;
  }
  else {
    lVar2 = *(long *)(*(long *)(*param_2 + 0x10) + 0x10);
    if (*(int *)(lVar2 + 0x260) != iVar1) {
      lVar2 = FUN_100345d90();
    }
  }
  FUN_10048f7d8(param_1 + 0x10,param_2 + 1,&local_30,&local_40,lVar2,*(undefined1 *)(param_1 + 0x40)
                ,*(undefined1 *)(param_1 + 0x41),*(undefined1 *)(param_1 + 0x42));
  return;
}




void FUN_10048faa4(char *param_1)

{
  char cVar1;
  uint local_18 [2];
  
  if (param_1 == (char *)0x0) {
    local_18[0] = 0;
  }
  else {
    local_18[0] = 0x811c9dc5;
    cVar1 = *param_1;
    while (cVar1 != '\0') {
      param_1 = param_1 + 1;
      local_18[0] = (local_18[0] ^ (int)cVar1) * 0x1000193;
      cVar1 = *param_1;
    }
  }
  FUN_100491404(local_18);
  return;
}




void FUN_10048fb04(long param_1,undefined8 *param_2,undefined8 param_3)

{
  long lVar1;
  undefined4 uVar2;
  
  uVar2 = *(undefined4 *)(param_1 + 0x1e0);
  *param_2 = *(undefined8 *)(param_1 + 0x1d8);
  *(undefined4 *)(param_2 + 1) = uVar2;
  lVar1 = *(long *)(param_1 + 0x10);
  while ((lVar1 != 0 && (*(int *)(*(long *)(lVar1 + 8) + 0xa4) != DAT_10184dd68))) {
    lVar1 = *(long *)(lVar1 + 0x10);
  }
  FUN_1003a31c8(lVar1,param_3,&DAT_1013cd824);
  return;
}




void * FUN_10048fb50(void *param_1)

{
  _bzero(param_1,0x404);
  return param_1;
}




void FUN_10048fb78(void *param_1,void *param_2)

{
  *(undefined4 *)((long)param_1 + 0x400) = *(undefined4 *)((long)param_2 + 0x400);
  _memmove(param_1,param_2,0x400);
  return;
}




void FUN_10048fb88(float param_1,long param_2,uint param_3)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  long local_688 [200];
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_101444218;
  uVar1 = FUN_1010a1958(local_688,200,DAT_10184dd68,0);
  if (param_1 <= 0.0) {
    lVar4 = *(long *)(param_2 + 0x40);
    fVar8 = *(float *)(lVar4 + 0x7c) + *(float *)(lVar4 + 0x130) * (*(float *)(lVar4 + 0x298) + 1.0)
    ;
    fVar8 = (float)NEON_fminnm(fVar8 + fVar8 * *(float *)(lVar4 + 0x1e4),DAT_101e94364);
    param_1 = DAT_101e942a4;
    if (DAT_101e942a4 <= fVar8) {
      param_1 = fVar8;
    }
  }
  lVar4 = 0;
  if (uVar1 != 0) {
    uVar3 = (ulong)uVar1;
    plVar5 = local_688;
    lVar2 = lVar4;
    fVar8 = 3.4028235e+38;
    do {
      lVar6 = *plVar5;
      lVar4 = lVar2;
      fVar9 = fVar8;
      if ((*(char *)(lVar6 + 0x264) != *(char *)(param_2 + 0x264)) &&
         (((uVar7 = (ulong)*(ushort *)(lVar6 + 0x88) & 0x1f, (int)uVar7 == 0x1f ||
           (1 < *(ushort *)(lVar6 + uVar7 * 0x38 + 0x90) - 3)) &&
          ((param_3 & (*(uint *)(lVar6 + 0x2f4) ^ 0xffffffff)) == 0)))) {
        fVar9 = *(float *)(param_2 + 0x250) - *(float *)(lVar6 + 0x250);
        fVar10 = (*(float *)(param_2 + 0x2ec) + *(float *)(param_2 + 0x254)) -
                 (*(float *)(lVar6 + 0x254) + *(float *)(lVar6 + 0x2ec));
        fVar11 = *(float *)(param_2 + 600) - *(float *)(lVar6 + 600);
        fVar12 = *(float *)(*(long *)(lVar6 + 0x38) + 100);
        fVar9 = SQRT(fVar9 * fVar9 + fVar11 * fVar11 + fVar10 * fVar10) -
                ((*(float *)(lVar6 + 0x2e8) + fVar12) * *(float *)(*(long *)(lVar6 + 0x38) + 0x68))
                / fVar12;
        if (fVar9 <= 0.0) {
          fVar9 = 0.0;
        }
        lVar4 = lVar6;
        if (param_1 <= fVar9 || fVar8 <= fVar9) {
          lVar4 = lVar2;
          fVar9 = fVar8;
        }
      }
      plVar5 = plVar5 + 1;
      uVar3 = uVar3 - 1;
      lVar2 = lVar4;
      fVar8 = fVar9;
    } while (uVar3 != 0);
  }
  if (*(long *)PTR____stack_chk_guard_101444218 != local_48) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(lVar4);
  }
  return;
}




long FUN_10048fd44(undefined8 param_1,uint param_2,long *param_3)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  float fVar8;
  undefined8 local_6b8;
  undefined4 local_6b0;
  undefined4 local_6a8;
  float local_6a4;
  undefined4 uStack_6a0;
  long local_698 [200];
  long local_58;
  
  local_58 = *(long *)PTR____stack_chk_guard_101444218;
  uVar1 = FUN_1010a1958(local_698,200,DAT_10184dd68,0);
  if (uVar1 != 0) {
    uVar6 = (ulong)uVar1;
    plVar7 = local_698;
    do {
      lVar5 = *plVar7;
      if ((param_2 & (*(uint *)(lVar5 + 0x2f4) ^ 0xffffffff)) == 0) {
        uStack_6a0 = *(undefined4 *)(lVar5 + 600);
        local_6a4 = *(float *)(lVar5 + 0x2ec) + *(float *)(lVar5 + 0x254);
        local_6a8 = *(undefined4 *)(lVar5 + 0x250);
        local_6b8 = 0x3f80000000000000;
        local_6b0 = 0;
        lVar4 = *(long *)(lVar5 + 0x38);
        fVar8 = *(float *)(lVar4 + 0x70);
        if (fVar8 <= 0.0) {
          fVar8 = *(float *)(lVar4 + 0x68);
        }
        iVar2 = FUN_1010cfb10(((*(float *)(lVar5 + 0x2e8) + *(float *)(lVar4 + 100)) * fVar8) /
                              *(float *)(lVar4 + 100),*(undefined4 *)(lVar4 + 0x6c),param_1,
                              &local_6a8,&local_6b8,0,0);
        if ((iVar2 != 0) &&
           ((param_3 == (long *)0x0 ||
            (uVar3 = (**(code **)(*param_3 + 0x18))(param_3,lVar5), (uVar3 & 1) != 0))))
        goto LAB_10048fe58;
      }
      plVar7 = plVar7 + 1;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  lVar5 = 0;
LAB_10048fe58:
  if (*(long *)PTR____stack_chk_guard_101444218 == local_58) {
    return lVar5;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




long FUN_10048fe94(undefined8 param_1,uint param_2,long *param_3)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  float fVar8;
  float fVar9;
  undefined8 local_6d8;
  undefined4 local_6d0;
  undefined4 local_6c8;
  float local_6c4;
  undefined4 uStack_6c0;
  long local_6b8 [200];
  long local_78;
  
  local_78 = *(long *)PTR____stack_chk_guard_101444218;
  uVar1 = FUN_1010a1958(local_6b8,200,DAT_10184dd68,0);
  lVar4 = 0;
  if (uVar1 != 0) {
    uVar6 = (ulong)uVar1;
    plVar7 = local_6b8;
    fVar9 = 999999.0;
    do {
      lVar5 = *plVar7;
      if (((param_2 & (*(uint *)(lVar5 + 0x2f4) ^ 0xffffffff)) == 0) &&
         ((*(byte *)(lVar5 + 0x2f9) & 1) == 0)) {
        uStack_6c0 = *(undefined4 *)(lVar5 + 600);
        local_6c4 = *(float *)(lVar5 + 0x2ec) + *(float *)(lVar5 + 0x254);
        local_6c8 = *(undefined4 *)(lVar5 + 0x250);
        local_6d8 = 0x3f80000000000000;
        local_6d0 = 0;
        lVar3 = *(long *)(lVar5 + 0x38);
        fVar8 = *(float *)(lVar3 + 0x70);
        if (fVar8 <= 0.0) {
          fVar8 = *(float *)(lVar3 + 0x68);
        }
        iVar2 = FUN_1010cfb10(((*(float *)(lVar5 + 0x2e8) + *(float *)(lVar3 + 100)) * fVar8) /
                              *(float *)(lVar3 + 100),*(undefined4 *)(lVar3 + 0x6c),param_1,
                              &local_6c8,&local_6d8,0,0);
        if ((iVar2 != 0) &&
           (((param_3 == (long *)0x0 ||
             (iVar2 = (**(code **)(*param_3 + 0x18))(param_3,lVar5), iVar2 != 0)) &&
            (fVar8 = *(float *)(*(long *)(lVar5 + 0x40) + 0x308), fVar8 < fVar9)))) {
          lVar4 = lVar5;
          fVar9 = fVar8;
        }
      }
      plVar7 = plVar7 + 1;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  if (*(long *)PTR____stack_chk_guard_101444218 == local_78) {
    return lVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

