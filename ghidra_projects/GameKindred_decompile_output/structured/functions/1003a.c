// functions/1003a — 431 functions
#include "GameKindred.h"




void FUN_1003a005c(void)

{
  FUN_1003d2080("Attack",0xe8,"Effect_Karas_DefaultAttacks_Static","CenterBody");
  return;
}




void FUN_1003a007c(void)

{
  FUN_1003d2080("AltAttack",0xe9,"Effect_Karas_DefaultAttacks_Static","CenterBody");
  return;
}




void FUN_1003a009c(void)

{
  FUN_1003d2080("CritAttack",0xea,"Effect_Karas_DefaultAttacks_Static","CenterBody");
  return;
}




undefined8 FUN_1003a00bc(void)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_30 = 0;
  uStack_28 = 0;
  lVar2 = FUN_10000d8b8();
  FUN_1003a985c(&local_30,lVar2);
  *(undefined1 *)(lVar2 + 0x10) = 1;
  lVar2 = FUN_10000ef8c();
  FUN_1003a985c(&local_30,lVar2);
  *(byte *)(lVar2 + 0x10) = *(byte *)(lVar2 + 0x10) & 0xe7 | 4;
  lVar2 = FUN_10000dff8();
  FUN_1003a985c(&local_30,lVar2);
  *(undefined2 *)(lVar2 + 0x28) = 0x100;
  *(undefined8 *)(lVar2 + 0x30) = 0;
  uVar1 = FUN_1004d2524("Ability01");
  uVar1 = FUN_100015208("Ability01",uVar1,0x12345678);
  *(undefined4 *)(lVar2 + 0x10) = uVar1;
  uVar1 = FUN_1004d2524("AttackToIdle");
  uVar1 = FUN_100015208("AttackToIdle",uVar1,0x12345678);
  *(undefined4 *)(lVar2 + 0x20) = uVar1;
  lVar2 = FUN_10000ceb8();
  FUN_1003a985c(&local_30,lVar2);
  *(undefined4 *)(lVar2 + 0x2c) = 0x3e4ccccd;
  *(undefined8 *)(lVar2 + 0x10) = 0;
  lVar2 = FUN_10000f250();
  FUN_1003a985c(&local_30,lVar2);
  *(undefined4 *)(lVar2 + 0x10) = 0xec;
  FUN_1003d266c(lVar2,"CenterBody");
  lVar2 = FUN_10000ceb8();
  FUN_1003a985c(&local_30,lVar2);
  *(undefined4 *)(lVar2 + 0x2c) = 0x3dcccccd;
  *(undefined8 *)(lVar2 + 0x10) = 0;
  lVar2 = FUN_10000d8b8();
  FUN_1003a985c(&local_30,lVar2);
  *(undefined1 *)(lVar2 + 0x10) = 0;
  uVar3 = FUN_10000f034();
  FUN_1003a985c(&local_30,uVar3);
  return local_30;
}




undefined8 FUN_1003a0230(void)

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
  (**(code **)(*plVar2 + 0x50))(plVar2,"Ability02");
  lVar1 = FUN_10000f250();
  FUN_1003a985c(&local_30,lVar1);
  *(undefined4 *)(lVar1 + 0x10) = 0xed;
  FUN_1003d266c(lVar1,"CenterBody");
  lVar1 = FUN_10000ceb8();
  FUN_1003a985c(&local_30,lVar1);
  *(undefined4 *)(lVar1 + 0x2c) = 0x3dcccccd;
  *(undefined8 *)(lVar1 + 0x10) = 0;
  lVar1 = FUN_10000d8b8();
  FUN_1003a985c(&local_30,lVar1);
  *(undefined1 *)(lVar1 + 0x10) = 0;
  uVar3 = FUN_10000f034();
  FUN_1003a985c(&local_30,uVar3);
  return local_30;
}




undefined8 FUN_1003a033c(void)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
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
  uVar2 = FUN_10000bb2c();
  FUN_1003a985c(&local_30,uVar2);
  plVar3 = (long *)FUN_10000bed8();
  FUN_1003a985c(&local_30,plVar3);
  (**(code **)(*plVar3 + 0x70))(plVar3,PTR_s_Buff_Maaya_C_Attachment_Target_10185b9c0);
  uVar2 = FUN_10000c784();
  FUN_1003a985c(&local_30,uVar2);
  lVar1 = FUN_10000ceb8();
  FUN_1003a985c(&local_30,lVar1);
  *(undefined4 *)(lVar1 + 0x2c) = 0x3e4ccccd;
  *(undefined8 *)(lVar1 + 0x10) = 0;
  plVar3 = (long *)FUN_10000bdf0();
  FUN_1003a985c(&local_30,plVar3);
  (**(code **)(*plVar3 + 0x50))(plVar3,PTR_s_Buff_Maaya_C_Selected_10185b9c8);
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




undefined8 FUN_1003a0488(void)

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
  lVar1 = FUN_10000eaac();
  FUN_1003a985c(&local_30,lVar1);
  *(undefined **)(lVar1 + 0x78) = PTR_s_Buff_Maaya_C_Attachment_Target_10185b9c0;
  *(byte *)(lVar1 + 0x80) = *(byte *)(lVar1 + 0x80) & 0xfc | DAT_101d23a38 != '\0';
  plVar2 = (long *)FUN_10000f830();
  FUN_1003a985c(&local_30,plVar2);
  (**(code **)(*plVar2 + 0x58))(plVar2);
  plVar2 = (long *)FUN_10000f748();
  FUN_1003a985c(&local_30,plVar2);
  (**(code **)(*plVar2 + 0x58))(plVar2);
  lVar1 = FUN_10000c540();
  FUN_1003a985c(&local_30,lVar1);
  *(undefined **)(lVar1 + 0x10) = PTR_s_Buff_Maaya_C_Attachment_Target_10185b9c0;
  plVar2 = (long *)FUN_10000c5ec();
  FUN_1003a985c(&local_30,plVar2);
  (**(code **)(*plVar2 + 0x50))(plVar2,PTR_s_Buff_Maaya_C_Attachment_Target_10185b9c0);
  uVar3 = FUN_10000c784();
  FUN_1003a985c(&local_30,uVar3);
  uVar3 = FUN_10000bb2c();
  FUN_1003a985c(&local_30,uVar3);
  lVar1 = FUN_10000c540();
  FUN_1003a985c(&local_30,lVar1);
  *(undefined **)(lVar1 + 0x10) = PTR_s_Buff_Maaya_C_Selected_10185b9c8;
  uVar3 = FUN_10000c784();
  FUN_1003a985c(&local_30,uVar3);
  lVar1 = FUN_10000ceb8();
  FUN_1003a985c(&local_30,lVar1);
  *(undefined4 *)(lVar1 + 0x2c) = 0x3e4ccccd;
  *(undefined8 *)(lVar1 + 0x10) = 0;
  uVar3 = FUN_10000f9c0();
  FUN_1003a985c(&local_30,uVar3);
  lVar1 = FUN_10000d8b8();
  FUN_1003a985c(&local_30,lVar1);
  *(undefined1 *)(lVar1 + 0x10) = 0;
  uVar3 = FUN_10000f034();
  FUN_1003a985c(&local_30,uVar3);
  return local_30;
}




undefined8 FUN_1003a0644(void)

{
  byte bVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  undefined4 local_70 [2];
  undefined4 local_68;
  undefined4 local_60 [2];
  undefined4 local_58;
  undefined4 local_50 [2];
  undefined4 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  local_40 = 0;
  uStack_38 = 0;
  plVar3 = (long *)thunk_FUN_10000e358();
  FUN_1003a985c(&local_40,plVar3);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x58))(plVar3);
  (**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Hero000_Explosion_5mr");
  lVar4 = FUN_1003e10f0();
  bVar1 = *(byte *)(lVar4 + 0xe5);
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
  bVar2 = DAT_101d23a38 != '\0';
  *(undefined4 *)(lVar4 + 0xa4) = 0x40a00000;
  *(byte *)(lVar4 + 0xa8) = *(byte *)(lVar4 + 0xa8) & 0xf0 | bVar2;
  plVar3 = (long *)FUN_10000d7d0();
  FUN_1003a985c(&local_40,plVar3);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x50))(plVar3);
  local_50[0] = 0x42000000;
  local_48 = 1;
  plVar3 = (long *)(**(code **)(*plVar3 + 0x10))(plVar3,local_50);
  local_60[0] = 0xbf800000;
  local_58 = 1;
  plVar3 = (long *)(**(code **)(*plVar3 + 0x28))(plVar3,local_60);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x70))();
  plVar3 = (long *)(**(code **)(*plVar3 + 0x50))();
  local_70[0] = 0x40666666;
  local_68 = 1;
  (**(code **)(*plVar3 + 0x30))(plVar3,local_70);
  uVar5 = FUN_10000c784();
  FUN_1003a985c(&local_40,uVar5);
  lVar4 = FUN_10000ceb8();
  FUN_1003a985c(&local_40,lVar4);
  *(undefined4 *)(lVar4 + 0x2c) = 0x3f000000;
  *(undefined8 *)(lVar4 + 0x10) = 0;
  uVar5 = FUN_10000d668();
  FUN_1003a985c(&local_40,uVar5);
  return local_40;
}




undefined8 FUN_1003a081c(void)

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
  undefined4 local_b0;
  undefined7 uStack_ac;
  undefined4 uStack_a5;
  undefined4 uStack_a1;
  undefined4 uStack_9d;
  undefined4 uStack_99;
  undefined4 uStack_95;
  undefined8 local_90;
  undefined8 uStack_88;
  
  local_90 = 0;
  uStack_88 = 0;
  lVar3 = FUN_10000ef8c();
  FUN_1003a985c(&local_90,lVar3);
  *(byte *)(lVar3 + 0x10) = *(byte *)(lVar3 + 0x10) & 0xe7 | 4;
  uVar4 = FUN_10000d8b8();
  FUN_1003a985c(&local_90,uVar4);
  lVar3 = FUN_10000dbb0();
  FUN_1003a985c(&local_90,lVar3);
  FUN_1003a4e5c(&local_b0,PTR_s_Buff_Shin_SetFlameMeter_10185b9b8);
  *(undefined4 *)(lVar3 + 0x10) = local_b0;
  *(undefined4 *)(lVar3 + 0x14) = 0xfffffffc;
  *(byte *)(lVar3 + 0x18) = *(byte *)(lVar3 + 0x18) & 0xfe;
  local_b0._3_1_ = 0;
  uStack_ac = 0;
  uStack_9d = 0;
  uStack_99 = 0;
  uStack_a5 = 0;
  uStack_a1 = 0;
  uStack_95 = 0;
  lVar3 = FUN_1003e10f0();
  bVar1 = *(byte *)(lVar3 + 0xe5);
  uVar6 = _cosf(0x3f490fdb);
  plVar5 = (long *)thunk_FUN_10000e0ac();
  FUN_1003a985c(&local_90,plVar5);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x50))(plVar5,"Ability03_01");
  (**(code **)(*plVar5 + 0x18))(plVar5,"AttackToIdleCombat");
  lVar3 = FUN_10000ceb8();
  FUN_1003a985c(&local_90,lVar3);
  *(undefined4 *)(lVar3 + 0x2c) = 0x3f000000;
  *(undefined8 *)(lVar3 + 0x10) = 0;
  lVar3 = FUN_10000e1b4();
  FUN_1003a985c(&local_90,lVar3);
  *(undefined8 *)(lVar3 + 0x40) = 0;
  *(ushort *)(lVar3 + 0x80) = *(ushort *)(lVar3 + 0x80) & 0xffec | 2;
  *(uint *)(lVar3 + 0x3c) = (uint)lVar3 & 0xffff;
  *(undefined8 *)(lVar3 + 0x20) = 0;
  *(undefined8 *)(lVar3 + 0x28) = 0x3e4ccccd00000001;
  *(undefined4 *)(lVar3 + 0x10) = 0xc256ea7f;
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
  *(undefined4 *)(lVar3 + 0xa4) = 0x41200000;
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
  *(undefined4 *)(lVar3 + 0x10) = 0xc256ea7f;
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
  *(undefined4 *)(lVar3 + 0xa4) = 0x41200000;
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
  *(undefined4 *)(lVar3 + 0x10) = 0xc256ea7f;
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
  *(undefined4 *)(lVar3 + 0xa4) = 0x41200000;
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
  *(undefined4 *)(lVar3 + 0x10) = 0xc256ea7f;
  lVar3 = FUN_10000ceb8();
  FUN_1003a985c(&local_90,lVar3);
  *(undefined4 *)(lVar3 + 0x2c) = 0x3e4ccccd;
  *(undefined8 *)(lVar3 + 0x10) = 0;
  lVar3 = FUN_10000ed74();
  FUN_1003a985c(&local_90,lVar3);
  *(undefined8 *)(lVar3 + 0x18) = 0;
  *(undefined1 *)(lVar3 + 0x20) = 1;
  *(ulong *)(lVar3 + 0x2c) = CONCAT44(uStack_a1,uStack_a5);
  *(ulong *)(lVar3 + 0x24) = CONCAT71(uStack_ac,local_b0._3_1_);
  *(ulong *)(lVar3 + 0x38) = CONCAT44(uStack_95,uStack_99);
  *(ulong *)(lVar3 + 0x30) = CONCAT44(uStack_9d,uStack_a1);
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
  *(undefined4 *)(lVar3 + 0xa4) = 0x41200000;
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
  *(undefined4 *)(lVar3 + 0x10) = 0xc256ea7f;
  lVar3 = FUN_10000ceb8();
  FUN_1003a985c(&local_90,lVar3);
  *(undefined4 *)(lVar3 + 0x2c) = 0x3e4ccccd;
  *(undefined8 *)(lVar3 + 0x10) = 0;
  lVar3 = FUN_10000ed74();
  FUN_1003a985c(&local_90,lVar3);
  *(undefined8 *)(lVar3 + 0x18) = 0;
  *(undefined1 *)(lVar3 + 0x20) = 1;
  *(ulong *)(lVar3 + 0x2c) = CONCAT44(uStack_a1,uStack_a5);
  *(ulong *)(lVar3 + 0x24) = CONCAT71(uStack_ac,local_b0._3_1_);
  *(ulong *)(lVar3 + 0x38) = CONCAT44(uStack_95,uStack_99);
  *(ulong *)(lVar3 + 0x30) = CONCAT44(uStack_9d,uStack_a1);
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
  *(undefined4 *)(lVar3 + 0xa4) = 0x41200000;
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
  *(undefined4 *)(lVar3 + 0x10) = 0xc256ea7f;
  lVar3 = FUN_10000ceb8();
  FUN_1003a985c(&local_90,lVar3);
  *(undefined4 *)(lVar3 + 0x2c) = 0x3e4ccccd;
  *(undefined8 *)(lVar3 + 0x10) = 0;
  lVar3 = FUN_10000ed74();
  FUN_1003a985c(&local_90,lVar3);
  *(undefined8 *)(lVar3 + 0x18) = 0;
  *(undefined1 *)(lVar3 + 0x20) = 1;
  *(ulong *)(lVar3 + 0x2c) = CONCAT44(uStack_a1,uStack_a5);
  *(ulong *)(lVar3 + 0x24) = CONCAT71(uStack_ac,local_b0._3_1_);
  *(ulong *)(lVar3 + 0x38) = CONCAT44(uStack_95,uStack_99);
  *(ulong *)(lVar3 + 0x30) = CONCAT44(uStack_9d,uStack_a1);
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
  *(undefined4 *)(lVar3 + 0xa4) = 0x41200000;
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




undefined8 FUN_1003a1064(void)

{
  byte bVar1;
  bool bVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  undefined4 local_50 [2];
  undefined4 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  local_40 = 0;
  uStack_38 = 0;
  uVar3 = FUN_10000d8b8();
  FUN_1003a985c(&local_40,uVar3);
  lVar4 = FUN_10000dbb0();
  FUN_1003a985c(&local_40,lVar4);
  FUN_1003a4e5c(local_50,PTR_s_Buff_Shin_SetFlameMeter_10185b9b8);
  *(undefined4 *)(lVar4 + 0x10) = local_50[0];
  *(undefined4 *)(lVar4 + 0x14) = 0xfffffffc;
  *(byte *)(lVar4 + 0x18) = *(byte *)(lVar4 + 0x18) & 0xfe;
  plVar5 = (long *)thunk_FUN_10000e358();
  FUN_1003a985c(&local_40,plVar5);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x68))(plVar5,"Bone_Cape_02_U_L");
  plVar5 = (long *)(**(code **)(*plVar5 + 0x48))(plVar5,"Effect_Shin_Cape_02_U_L");
  plVar5 = (long *)(**(code **)(*plVar5 + 0x78))(plVar5,1);
  plVar5 = (long *)(**(code **)(*plVar5 + 0xb0))(plVar5,1);
  local_50[0] = 0x3f000000;
  local_48 = 1;
  (**(code **)(*plVar5 + 0x60))(plVar5,local_50);
  plVar5 = (long *)thunk_FUN_10000e358();
  FUN_1003a985c(&local_40,plVar5);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x68))(plVar5,"Bone_Cape_02_L_L");
  plVar5 = (long *)(**(code **)(*plVar5 + 0x48))(plVar5,"Effect_Shin_Cape_02_L_L");
  plVar5 = (long *)(**(code **)(*plVar5 + 0x78))(plVar5,1);
  plVar5 = (long *)(**(code **)(*plVar5 + 0xb0))(plVar5,1);
  local_50[0] = 0x3f000000;
  local_48 = 1;
  (**(code **)(*plVar5 + 0x60))(plVar5,local_50);
  plVar5 = (long *)thunk_FUN_10000e358();
  FUN_1003a985c(&local_40,plVar5);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x68))(plVar5,"Bone_Cape_02_U_R");
  plVar5 = (long *)(**(code **)(*plVar5 + 0x48))(plVar5,"Effect_Shin_Cape_02_U_R");
  plVar5 = (long *)(**(code **)(*plVar5 + 0x78))(plVar5,1);
  plVar5 = (long *)(**(code **)(*plVar5 + 0xb0))(plVar5,1);
  local_50[0] = 0x3f000000;
  local_48 = 1;
  (**(code **)(*plVar5 + 0x60))(plVar5,local_50);
  plVar5 = (long *)thunk_FUN_10000e358();
  FUN_1003a985c(&local_40,plVar5);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x68))(plVar5,"Bone_Cape_02_L_R");
  plVar5 = (long *)(**(code **)(*plVar5 + 0x48))(plVar5,"Effect_Shin_Cape_02_L_R");
  plVar5 = (long *)(**(code **)(*plVar5 + 0x78))(plVar5,1);
  plVar5 = (long *)(**(code **)(*plVar5 + 0xb0))(plVar5,1);
  local_50[0] = 0x3f000000;
  local_48 = 1;
  (**(code **)(*plVar5 + 0x60))(plVar5,local_50);
  plVar5 = (long *)thunk_FUN_10000e358();
  FUN_1003a985c(&local_40,plVar5);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x68))(plVar5,"Bone_LeftHand");
  plVar5 = (long *)(**(code **)(*plVar5 + 0x48))(plVar5,"Effect_Shin_LeftHand");
  plVar5 = (long *)(**(code **)(*plVar5 + 0x78))(plVar5,1);
  plVar5 = (long *)(**(code **)(*plVar5 + 0xb0))(plVar5,1);
  local_50[0] = 0x3f000000;
  local_48 = 1;
  (**(code **)(*plVar5 + 0x60))(plVar5,local_50);
  plVar5 = (long *)thunk_FUN_10000e0ac();
  FUN_1003a985c(&local_40,plVar5);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x50))(plVar5,"Ability03_01");
  plVar5 = (long *)(**(code **)(*plVar5 + 0x18))(plVar5,"AttackToIdleCombat");
  plVar5 = (long *)(**(code **)(*plVar5 + 0x28))();
  (**(code **)(*plVar5 + 0x10))(0x40800000);
  plVar5 = (long *)thunk_FUN_10000e5dc();
  FUN_1003a985c(&local_40,plVar5);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x58))(plVar5,"Sound_Shin_Ability_C2_Cast");
  uVar3 = FUN_1010a1520();
  lVar4 = FUN_1010a0e0c(uVar3,0,"*KindredSoundBalance*",0);
  FUN_1003d1de4(*(undefined4 *)(lVar4 + 0x748));
  (**(code **)(*plVar5 + 0x28))(plVar5);
  plVar5 = (long *)thunk_FUN_10000e6f4();
  FUN_1003a985c(&local_40,plVar5);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x50))(plVar5,"ability3");
  plVar5 = (long *)(**(code **)(*plVar5 + 0x18))(0x3dcccccd);
  (**(code **)(*plVar5 + 0x20))();
  lVar4 = FUN_10000ceb8();
  FUN_1003a985c(&local_40,lVar4);
  *(undefined4 *)(lVar4 + 0x2c) = 0x3f4ccccd;
  *(undefined8 *)(lVar4 + 0x10) = 0;
  plVar5 = (long *)thunk_FUN_10000e5dc();
  FUN_1003a985c(&local_40,plVar5);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x58))(plVar5,"Sound_Shin_Ability_C2_Impact");
  uVar3 = FUN_1010a1520();
  lVar4 = FUN_1010a0e0c(uVar3,0,"*KindredSoundBalance*",0);
  FUN_1003d1de4(*(undefined4 *)(lVar4 + 0x74c));
  (**(code **)(*plVar5 + 0x28))(plVar5);
  plVar5 = (long *)FUN_10000e26c();
  FUN_1003a985c(&local_40,plVar5);
  (**(code **)(*plVar5 + 0x50))(plVar5,"Effect_Shin_C2_Cast_WIP",FUN_1003d1f8c);
  lVar4 = FUN_1003e10f0();
  bVar1 = *(byte *)(lVar4 + 0xe5);
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
  bVar2 = DAT_101d23a38 != '\0';
  *(code **)(lVar4 + 0x78) = FUN_1003d206c;
  *(byte *)(lVar4 + 0xa8) = *(byte *)(lVar4 + 0xa8) & 0xf0 | bVar2;
  plVar5 = (long *)FUN_10000cb8c();
  FUN_1003a985c(&local_40,plVar5);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x50))(plVar5);
  (**(code **)(*plVar5 + 0x38))(plVar5,"Damage",6);
  uVar3 = FUN_10000c784();
  FUN_1003a985c(&local_40,uVar3);
  lVar4 = FUN_10000d8b8();
  FUN_1003a985c(&local_40,lVar4);
  *(undefined1 *)(lVar4 + 0x10) = 0;
  return local_40;
}




undefined8 FUN_1003a1600(void)

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
  (**(code **)(*plVar1 + 0x50))(plVar1,"Ability03_v2");
  plVar1 = (long *)thunk_FUN_10000e5dc();
  FUN_1003a985c(&local_30,plVar1);
  plVar1 = (long *)(**(code **)(*plVar1 + 0x58))(plVar1,"Sound_Viola_C_Start");
  uVar2 = FUN_1010a1520();
  lVar3 = FUN_1010a0e0c(uVar2,0,"*KindredSoundBalance*",0);
  FUN_1003d0fb8(*(undefined4 *)(lVar3 + 0x6c4));
  (**(code **)(*plVar1 + 0x28))(plVar1);
  plVar1 = (long *)FUN_10000bdf0();
  FUN_1003a985c(&local_30,plVar1);
  plVar1 = (long *)(**(code **)(*plVar1 + 0x50))(plVar1,PTR_s_Buff_Viola_C2_Aura_10185b8c0);
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




undefined8 FUN_1003a1a30(void)

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
  (**(code **)(*plVar1 + 0x50))(plVar1,"Ability03_v3");
  plVar1 = (long *)thunk_FUN_10000e5dc();
  FUN_1003a985c(&local_30,plVar1);
  plVar1 = (long *)(**(code **)(*plVar1 + 0x58))(plVar1,"Sound_Viola_C_Start");
  uVar2 = FUN_1010a1520();
  lVar3 = FUN_1010a0e0c(uVar2,0,"*KindredSoundBalance*",0);
  FUN_1003d0fb8(*(undefined4 *)(lVar3 + 0x6c4));
  (**(code **)(*plVar1 + 0x28))(plVar1);
  plVar1 = (long *)FUN_10000bdf0();
  FUN_1003a985c(&local_30,plVar1);
  plVar1 = (long *)(**(code **)(*plVar1 + 0x50))(plVar1,PTR_s_Buff_Viola_C3_Aura_10185b8c8);
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




undefined8 FUN_1003a1e60(void)

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
  (**(code **)(*plVar1 + 0x50))(plVar1,"Ability03_v4");
  plVar1 = (long *)thunk_FUN_10000e5dc();
  FUN_1003a985c(&local_30,plVar1);
  plVar1 = (long *)(**(code **)(*plVar1 + 0x58))(plVar1,"Sound_Viola_C_Start");
  uVar2 = FUN_1010a1520();
  lVar3 = FUN_1010a0e0c(uVar2,0,"*KindredSoundBalance*",0);
  FUN_1003d0fb8(*(undefined4 *)(lVar3 + 0x6c4));
  (**(code **)(*plVar1 + 0x28))(plVar1);
  plVar1 = (long *)FUN_10000bdf0();
  FUN_1003a985c(&local_30,plVar1);
  plVar1 = (long *)(**(code **)(*plVar1 + 0x50))(plVar1,DAT_10185b8d0);
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




undefined8 FUN_1003a2290(void)

{
  long lVar1;
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_30 = 0;
  uStack_28 = 0;
  lVar1 = FUN_10000e94c();
  FUN_1003a985c(&local_30,lVar1);
  *(code **)(lVar1 + 0x10) = FUN_1003d101c;
  return local_30;
}




undefined8 FUN_1003a22d8(void)

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
  plVar2 = (long *)(**(code **)(*plVar2 + 0x50))(plVar2,"Ability02");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x18))(plVar2,"AttackToIdleCombat");
  (**(code **)(*plVar2 + 0x10))(0x3f4ccccd);
  lVar1 = FUN_10000ceb8();
  FUN_1003a985c(&local_30,lVar1);
  *(undefined4 *)(lVar1 + 0x2c) = 0x3e4ccccd;
  *(undefined8 *)(lVar1 + 0x10) = 0;
  lVar1 = FUN_10000f250();
  FUN_1003a985c(&local_30,lVar1);
  *(undefined4 *)(lVar1 + 0x10) = 0xda;
  FUN_1003d266c(lVar1,"FireBall");
  uVar3 = FUN_10000bb2c();
  FUN_1003a985c(&local_30,uVar3);
  lVar1 = FUN_10000c540();
  FUN_1003a985c(&local_30,lVar1);
  *(undefined8 *)(lVar1 + 0x10) = DAT_10185b588;
  uVar3 = FUN_10000c784();
  FUN_1003a985c(&local_30,uVar3);
  lVar1 = FUN_10000d8b8();
  FUN_1003a985c(&local_30,lVar1);
  *(undefined1 *)(lVar1 + 0x10) = 0;
  lVar1 = FUN_10000ceb8();
  FUN_1003a985c(&local_30,lVar1);
  *(undefined4 *)(lVar1 + 0x2c) = 0x3dcccccd;
  *(undefined8 *)(lVar1 + 0x10) = 0;
  plVar2 = (long *)thunk_FUN_10000e0ac();
  FUN_1003a985c(&local_30,plVar2);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x50))(plVar2,"Idle");
  (**(code **)(*plVar2 + 0x18))(plVar2,"AttackToIdleCombat");
  return local_30;
}




void FUN_1003a24a0(long param_1)

{
  do {
    param_1 = *(long *)(param_1 + 0x10);
  } while (*(int *)(*(long *)(param_1 + 8) + 0xa4) != DAT_10184dd68);
  FUN_1003ad33c();
  return;
}




float FUN_1003a24c8(float param_1)

{
  undefined8 uVar1;
  long lVar2;
  float fVar3;
  
  uVar1 = FUN_1010a1520();
  lVar2 = FUN_1010a0e0c(uVar1,0,"*KindredSoundBalance*",0);
  fVar3 = *(float *)(lVar2 + 4);
  uVar1 = FUN_1010a1520();
  lVar2 = FUN_1010a0e0c(uVar1,0,"*KindredSoundBalance*",0);
  return fVar3 + param_1 + *(float *)(lVar2 + 0xa0);
}




void FUN_1003a252c(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1010a1520();
  FUN_1010a0e0c(uVar1,0,"*KindredSoundBalance*",0);
  return;
}




float FUN_1003a2550(long param_1)

{
  long lVar1;
  float fVar2;
  float fVar3;
  undefined4 local_28 [2];
  
  do {
    param_1 = *(long *)(param_1 + 0x10);
  } while (*(int *)(*(long *)(param_1 + 8) + 0xa4) != DAT_10184dd68);
  lVar1 = *(long *)(param_1 + 0x40);
  fVar2 = *(float *)(lVar1 + 0x38) + *(float *)(lVar1 + 0xec) * (*(float *)(lVar1 + 0x254) + 1.0);
  fVar3 = (float)NEON_fminnm(fVar2 + fVar2 * *(float *)(lVar1 + 0x1a0),DAT_101e94320);
  fVar2 = DAT_101e94260;
  if (DAT_101e94260 <= fVar3) {
    fVar2 = fVar3;
  }
  local_28[0] = DAT_101d909ec;
  fVar3 = (float)FUN_1003dfee8(param_1,local_28,2,9);
  return fVar3 * fVar2;
}




void FUN_1003a25f4(long param_1,int param_2,int param_3,int param_4,long param_5)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  
  if (param_5 != 0) {
    *(long *)(param_1 + 8) = param_5;
  }
  uVar1 = 0x10;
  if (param_2 == 0) {
    uVar1 = 0;
  }
  uVar2 = 0x20;
  if (param_3 == 0) {
    uVar2 = 0;
  }
  uVar3 = 0x40;
  if (param_4 == 0) {
    uVar3 = 0;
  }
  *(ushort *)(param_1 + 0x58) = uVar2 | uVar1 | uVar3 | *(ushort *)(param_1 + 0x58) & 0xff8f;
  return;
}




void FUN_1003a2644(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x48) = param_2;
  return;
}




void FUN_1003a264c(undefined8 param_1)

{
  FUN_1003dfe60(param_1,2,2,0x19,0);
  return;
}




void FUN_1003a2660(undefined8 param_1)

{
  FUN_1003dfe60(param_1,2,5,0x19,0);
  return;
}




void FUN_1003a2674(void)

{
  return;
}




undefined8 FUN_1003a2678(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
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
  *(undefined8 *)(lVar2 + 0x10) = param_1;
  *(undefined4 *)(lVar2 + 0x18) = 0x40800000;
  *(undefined2 *)(lVar2 + 0x68) = 1;
  *(byte *)(lVar2 + 0x6a) = *(byte *)(lVar2 + 0x6a) & 0xfe;
  uVar1 = FUN_10000c784();
  FUN_1003a985c(&local_30,uVar1);
  return local_30;
}




undefined8
FUN_1003a2708(undefined8 param_1,char *param_2,undefined8 *param_3,undefined8 *param_4,uint param_5,
             undefined8 param_6)

{
  char cVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  byte bVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  undefined8 local_70;
  undefined8 uStack_68;
  
  local_70 = 0;
  uStack_68 = 0;
  uVar2 = FUN_10000ef8c();
  FUN_1003a985c(&local_70,uVar2);
  plVar3 = (long *)thunk_FUN_10000e0ac();
  FUN_1003a985c(&local_70,plVar3);
  (**(code **)(*plVar3 + 0x58))(plVar3,param_1);
  if (param_5 == 0) {
    lVar4 = FUN_10000ceb8();
    FUN_1003a985c(&local_70,lVar4);
    *(undefined4 *)(lVar4 + 0x2c) = 0x3dcccccd;
    *(undefined8 *)(lVar4 + 0x10) = 0;
  }
  else {
    lVar4 = FUN_10000e524();
    FUN_1003a985c(&local_70,lVar4);
    uVar8 = *param_3;
    uVar2 = FUN_1010a1520();
    lVar5 = FUN_1010a0e0c(uVar2,0,"*KindredSoundBalance*",0);
    uVar9 = FUN_1003a2a20(*(undefined4 *)(lVar5 + 0x2b0));
    *(undefined8 *)(lVar4 + 0x10) = uVar8;
    *(undefined2 *)(lVar4 + 0x30) = 0x1ff;
    *(undefined4 *)(lVar4 + 0x34) = 1;
    *(undefined4 *)(lVar4 + 0x3c) = uVar9;
    *(undefined4 *)(lVar4 + 0x40) = 0xffffffff;
    *(byte *)(lVar4 + 0x38) = *(byte *)(lVar4 + 0x38) & 0xf8 | 4;
    *(undefined8 *)(lVar4 + 0x48) = 0;
    if (param_5 != 1) {
      lVar5 = (ulong)param_5 - 1;
      bVar7 = 1;
      do {
        param_3 = param_3 + 1;
        *(undefined8 *)(lVar4 + (ulong)bVar7 * 8 + 0x10) = *param_3;
        bVar7 = bVar7 + 1;
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
      *(byte *)(lVar4 + 0x31) = bVar7;
    }
    lVar4 = FUN_10000ceb8();
    FUN_1003a985c(&local_70,lVar4);
    *(undefined4 *)(lVar4 + 0x2c) = 0x3dcccccd;
    *(undefined8 *)(lVar4 + 0x10) = 0;
    lVar4 = FUN_10000e524();
    FUN_1003a985c(&local_70,lVar4);
    uVar8 = *param_4;
    uVar2 = FUN_1010a1520();
    lVar5 = FUN_1010a0e0c(uVar2,0,"*KindredSoundBalance*",0);
    uVar9 = FUN_1003a2a20(*(undefined4 *)(lVar5 + 0x2b0));
    *(undefined8 *)(lVar4 + 0x10) = uVar8;
    *(undefined2 *)(lVar4 + 0x30) = 0x1ff;
    *(undefined4 *)(lVar4 + 0x34) = 1;
    *(undefined4 *)(lVar4 + 0x3c) = uVar9;
    *(undefined4 *)(lVar4 + 0x40) = 0xffffffff;
    *(byte *)(lVar4 + 0x38) = *(byte *)(lVar4 + 0x38) & 0xf8 | 4;
    *(undefined8 *)(lVar4 + 0x48) = 0;
    if (1 < param_5) {
      lVar5 = (ulong)param_5 - 1;
      bVar7 = 1;
      do {
        param_4 = param_4 + 1;
        *(undefined8 *)(lVar4 + (ulong)bVar7 * 8 + 0x10) = *param_4;
        bVar7 = bVar7 + 1;
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
      *(byte *)(lVar4 + 0x31) = bVar7;
    }
  }
  lVar4 = FUN_10000ceb8();
  FUN_1003a985c(&local_70,lVar4);
  *(undefined4 *)(lVar4 + 0x2c) = 0x3e4ccccd;
  *(code **)(lVar4 + 0x10) = FUN_1003a24a0;
  lVar4 = FUN_10000e1b4();
  FUN_1003a985c(&local_70,lVar4);
  *(undefined8 *)(lVar4 + 0x40) = 0;
  *(ushort *)(lVar4 + 0x80) = *(ushort *)(lVar4 + 0x80) & 0xffec | 2;
  *(uint *)(lVar4 + 0x3c) = (uint)lVar4 & 0xffff;
  *(undefined8 *)(lVar4 + 0x20) = 0;
  *(undefined8 *)(lVar4 + 0x28) = 1;
  if (param_2 == (char *)0x0) {
    uVar6 = 0;
  }
  else {
    uVar6 = 0x811c9dc5;
    cVar1 = *param_2;
    while (cVar1 != '\0') {
      param_2 = param_2 + 1;
      uVar6 = (uVar6 ^ (int)cVar1) * 0x1000193;
      cVar1 = *param_2;
    }
  }
  *(uint *)(lVar4 + 0x10) = uVar6;
  uVar2 = FUN_10000bc94();
  FUN_1003a985c(&local_70,uVar2);
  plVar3 = (long *)FUN_10000cb8c();
  FUN_1003a985c(&local_70,plVar3);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x50))(plVar3);
  (**(code **)(*plVar3 + 0x58))(plVar3,param_6);
  uVar2 = FUN_10000f034();
  FUN_1003a985c(&local_70,uVar2);
  return local_70;
}




float FUN_1003a2a20(float param_1)

{
  undefined8 uVar1;
  long lVar2;
  float fVar3;
  
  uVar1 = FUN_1010a1520();
  lVar2 = FUN_1010a0e0c(uVar1,0,"*KindredSoundBalance*",0);
  fVar3 = *(float *)(lVar2 + 4);
  uVar1 = FUN_1010a1520();
  lVar2 = FUN_1010a0e0c(uVar1,0,"*KindredSoundBalance*",0);
  return fVar3 + param_1 + *(float *)(lVar2 + 0x2a8);
}




void FUN_1003a2a84(undefined8 param_1,undefined8 param_2,float *param_3)

{
  float fVar1;
  
  fVar1 = (float)FUN_1003dfe60(param_2,0,4,0x19,0);
  *param_3 = fVar1 + -0.2;
  return;
}




void FUN_1003a2ac8(undefined8 param_1)

{
  FUN_1003dfe60(param_1,0,4,0x19,0);
  return;
}




void FUN_1003a2adc(long param_1,undefined8 param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  
  do {
    param_1 = *(long *)(param_1 + 0x10);
  } while (*(int *)(*(long *)(param_1 + 8) + 0xa4) != DAT_10184dd68);
  fVar1 = (float)FUN_1003dfe60(param_1,0,2,0x19,0);
  fVar2 = (float)FUN_1003dfe60(param_1,0,5,0x19,0);
  *param_3 = fVar1 / fVar2 + 0.1;
  return;
}




void FUN_1003a2b6c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  while ((lVar1 != 0 && (*(int *)(*(long *)(lVar1 + 8) + 0xa4) != DAT_10184dd68))) {
    lVar1 = *(long *)(lVar1 + 0x10);
  }
  return;
}




void FUN_1003a2b98(long param_1)

{
  char *pcVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  undefined8 uVar6;
  char *pcVar7;
  long lVar8;
  long *plVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  uint local_a0;
  float local_9c;
  undefined4 local_98;
  undefined7 local_94;
  undefined4 uStack_8d;
  undefined1 local_89;
  undefined4 local_88;
  undefined8 local_84;
  undefined8 local_7c;
  undefined4 local_74;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined4 local_60;
  undefined1 local_5c;
  undefined2 local_5b;
  undefined1 local_59;
  undefined1 local_58;
  
  if (DAT_101d23a38 == '\0') {
    plVar9 = (long *)(param_1 + 0x10);
    lVar8 = *plVar9;
    while ((lVar8 != 0 && (*(int *)(*(long *)(lVar8 + 8) + 0xa4) != DAT_10184dd68))) {
      lVar8 = *(long *)(lVar8 + 0x10);
    }
    uVar2 = *(uint *)(param_1 + 0x238);
    uVar5 = FUN_10034f06c();
    bVar4 = uVar5 != *(byte *)(lVar8 + 0x264);
    pcVar7 = "Effect_Alpha_A_Warning_OD_A";
    if (bVar4) {
      pcVar7 = "Effect_Alpha_A_Warning_OD_E";
    }
    pcVar1 = "Effect_Alpha_A_Warning_A";
    if (bVar4) {
      pcVar1 = "Effect_Alpha_A_Warning_E";
    }
    if ((uVar2 & 0x1c00) != 0x1400) {
      pcVar7 = pcVar1;
    }
    fVar10 = (float)FUN_1003dfe60(lVar8,0,2,0x19,0);
    fVar11 = (float)FUN_1003dfe60(lVar8,0,5,0x19,0);
    fVar12 = (float)FUN_1003dfe60(lVar8,0,4,0x19,0);
    local_9c = fVar10 / fVar11 + fVar12 + -0.1;
    uStack_b8 = 0;
    local_c0 = 0;
    local_a8 = 0;
    uStack_b0 = 0;
    cVar3 = *pcVar7;
    local_a0 = 0x811c9dc5;
    while (cVar3 != '\0') {
      pcVar7 = pcVar7 + 1;
      local_a0 = (local_a0 ^ (int)cVar3) * 0x1000193;
      cVar3 = *pcVar7;
    }
    local_98 = 0xffffffff;
    local_94 = 0;
    uStack_8d = 0;
    local_89 = 0xff;
    local_88 = 0;
    local_84 = DAT_101dc1cb8;
    local_7c = 0x3f8000003f800000;
    local_74 = 0x3f800000;
    local_70 = 0;
    uStack_68 = 0;
    local_5b = 1;
    local_59 = 0;
    local_5c = 0;
    local_60 = 0;
    uVar6 = 0;
    if (*(long **)(lVar8 + 0x50) != (long *)0x0) {
      uVar6 = (**(code **)(**(long **)(lVar8 + 0x50) + 0x178))();
    }
    local_58 = 1;
    do {
      lVar8 = *plVar9;
      plVar9 = (long *)(lVar8 + 0x10);
    } while (*(int *)(*(long *)(lVar8 + 8) + 0xa4) != DAT_10184dd68);
    plVar9 = *(long **)(lVar8 + 0x50);
    if (plVar9 != (long *)0x0) {
      local_a8 = uVar6;
      (**(code **)(*plVar9 + 0xa0))(plVar9,&local_c0);
    }
  }
  return;
}




bool FUN_1003a2d9c(long param_1)

{
  uint uVar1;
  
  uVar1 = FUN_10034f06c();
  return uVar1 == *(byte *)(param_1 + 0x264);
}




void FUN_1003a2dc8(long param_1)

{
  if (*(long **)(param_1 + 0x50) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001003a2dd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x50) + 0x178))();
    return;
  }
  return;
}




void FUN_1003a2de0(long param_1)

{
  if (*(long **)(param_1 + 0x50) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001003a2df0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x50) + 0xa0))();
    return;
  }
  return;
}




undefined8 FUN_1003a2df8(long param_1)

{
  int iVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  
  do {
    param_1 = *(long *)(param_1 + 0x10);
  } while (*(int *)(*(long *)(param_1 + 8) + 0xa4) != DAT_10184dd68);
  lVar2 = *(long *)(param_1 + 0x18);
  iVar3 = *(int *)(*(long *)(lVar2 + 8) + 0xa4);
  lVar4 = lVar2;
  iVar1 = iVar3;
  while (iVar1 != DAT_10184dab8) {
    lVar4 = *(long *)(lVar4 + 0x20);
    iVar1 = *(int *)(*(long *)(lVar4 + 8) + 0xa4);
  }
  lVar4 = *(long *)(lVar4 + 0x70);
  if (((lVar4 == 0) || (uVar5 = (ulong)*(ushort *)(lVar4 + 0x68) & 0x1f, (int)uVar5 == 0x1f)) ||
     (*(short *)(lVar4 + uVar5 * 0x38 + 0x70) != 2)) {
    while (iVar3 != DAT_10184daa8) {
      lVar2 = *(long *)(lVar2 + 0x20);
      iVar3 = *(int *)(*(long *)(lVar2 + 8) + 0xa4);
    }
    lVar4 = *(long *)(lVar2 + 0x28);
    while( true ) {
      if (lVar4 == 0) {
        return 0;
      }
      if ((*(int *)(lVar4 + 0x314) == DAT_101d2aae4) && (*(int *)(lVar4 + 0x310) == 0)) break;
      lVar4 = *(long *)(lVar4 + 0x350);
    }
  }
  return 0x400;
}




undefined2 FUN_1003a2edc(long param_1,uint param_2)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = *(long *)(param_1 + (ulong)param_2 * 8 + 0x50);
  if (lVar1 == 0) {
    return 0;
  }
  uVar2 = (ulong)*(ushort *)(lVar1 + 0x68) & 0x1f;
  if ((int)uVar2 == 0x1f) {
    return 0x1f;
  }
  return *(undefined2 *)(lVar1 + uVar2 * 0x38 + 0x70);
}




undefined8 FUN_1003a2f18(long param_1,int param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x28);
  do {
    if (lVar3 == 0) {
      uVar1 = 0;
      if (param_3 != (undefined4 *)0x0) {
        uVar2 = 0xffffffff;
LAB_1003a2f58:
        *param_3 = uVar2;
      }
      return uVar1;
    }
    if ((*(int *)(lVar3 + 0x314) == param_2) && (*(int *)(lVar3 + 0x310) == 0)) {
      if (param_3 == (undefined4 *)0x0) {
        return 1;
      }
      uVar2 = *(undefined4 *)(lVar3 + 0x30c);
      uVar1 = 1;
      goto LAB_1003a2f58;
    }
    lVar3 = *(long *)(lVar3 + 0x350);
  } while( true );
}




void FUN_1003a2f68(undefined8 param_1,undefined8 param_2,float *param_3)

{
  float fVar1;
  
  fVar1 = (float)FUN_1003dfe60(param_2,0,9,0x19,0);
  *param_3 = fVar1;
  if (DAT_101d23a38 != '\0') {
    *param_3 = fVar1 + 0.1;
  }
  return;
}




void FUN_1003a2fbc(undefined8 param_1)

{
  FUN_1003dfe60(param_1,0,9,0x19,0);
  return;
}




void FUN_1003a2fd0(undefined8 param_1)

{
  FUN_1003dfe60(param_1,0,8,0x19,0);
  return;
}




void FUN_1003a2fe4(undefined8 param_1)

{
  FUN_1003dfe60(param_1,0,3,0x19,0);
  return;
}




void FUN_1003a2ff8(undefined8 param_1)

{
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d909fc;
  FUN_1003dfee8(param_1,local_18,1,9);
  return;
}




void FUN_1003a302c(undefined8 param_1)

{
  FUN_1003dfe60(param_1,0,10,0x19,0);
  return;
}




void FUN_1003a3040(long param_1,undefined8 param_2,float *param_3)

{
  long lVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  lVar2 = *(long *)(param_1 + 0x10);
  while ((lVar2 != 0 && (*(int *)(*(long *)(lVar2 + 8) + 0xa4) != DAT_10184dd68))) {
    lVar2 = *(long *)(lVar2 + 0x10);
  }
  lVar1 = (**(code **)(**(long **)(param_1 + 0x1c8) + 0x10))();
  fVar3 = *(float *)(lVar2 + 0x250) - *(float *)(lVar1 + 0x250);
  fVar4 = *(float *)(lVar2 + 600) - *(float *)(lVar1 + 600);
  lVar1 = *(long *)(lVar2 + 0x40);
  fVar5 = *(float *)(lVar1 + 0x78) + *(float *)(lVar1 + 300) * (*(float *)(lVar1 + 0x294) + 1.0);
  NEON_fminnm(fVar5 + fVar5 * *(float *)(lVar1 + 0x1e0),DAT_101e94360);
  fVar3 = (SQRT(fVar3 * fVar3 + fVar4 * fVar4) + -0.5) - DAT_101e942a0;
  fVar4 = (float)FUN_1003dfe60(lVar2,1,10,0x19,0);
  fVar3 = fVar3 / fVar4;
  if (fVar3 <= 0.1) {
    fVar3 = 0.1;
  }
  *param_3 = fVar3;
  return;
}




void FUN_1003a3134(undefined8 param_1)

{
  FUN_1003dfe60(param_1,1,10,0x19,0);
  return;
}




void FUN_1003a3148(undefined8 param_1,long param_2,undefined8 param_3,undefined8 *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar1 = *(float *)(param_2 + 600);
  fVar5 = *(float *)(param_2 + 0x248);
  fVar3 = (float)*(undefined8 *)(param_2 + 0x240);
  fVar4 = (float)((ulong)*(undefined8 *)(param_2 + 0x240) >> 0x20);
  fVar2 = fVar3 * fVar3 + fVar4 * fVar4 + fVar5 * fVar5;
  if (1e-08 <= fVar2) {
    fVar2 = SQRT(fVar2);
    fVar3 = fVar3 / fVar2;
    fVar4 = fVar4 / fVar2;
    fVar5 = fVar5 / fVar2;
  }
  else {
    fVar3 = 1.0;
    fVar4 = 0.0;
    fVar5 = 0.0;
  }
  *param_4 = CONCAT44(*(float *)(param_2 + 0x2ec) + *(float *)(param_2 + 0x254) + fVar4 * 0.5,
                      (float)*(undefined8 *)(param_2 + 0x250) + fVar3 * 0.5);
  *(float *)(param_4 + 1) = fVar1 + fVar5 * 0.5;
  return;
}




void FUN_1003a31c8(long param_1,float *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar2 = *(float *)(param_1 + 0x240);
  *param_2 = fVar2;
  fVar3 = *(float *)(param_1 + 0x244);
  param_2[1] = fVar3;
  fVar4 = *(float *)(param_1 + 0x248);
  param_2[2] = fVar4;
  fVar5 = fVar2 * fVar2 + fVar3 * fVar3 + fVar4 * fVar4;
  if (fVar5 < 1e-08) {
    uVar1 = *param_3;
    param_2[2] = *(float *)(param_3 + 1);
    *(undefined8 *)param_2 = uVar1;
    return;
  }
  fVar5 = 1.0 / SQRT(fVar5);
  *param_2 = fVar2 * fVar5;
  param_2[1] = fVar3 * fVar5;
  param_2[2] = fVar4 * fVar5;
  return;
}




void FUN_1003a3238(undefined8 param_1,long param_2,undefined8 param_3,undefined8 *param_4)

{
  float fVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar1 = *(float *)(param_2 + 600);
  fVar6 = *(float *)(param_2 + 0x248);
  fVar4 = (float)*(undefined8 *)(param_2 + 0x240);
  fVar5 = (float)((ulong)*(undefined8 *)(param_2 + 0x240) >> 0x20);
  fVar3 = fVar4 * fVar4 + fVar5 * fVar5 + fVar6 * fVar6;
  if (1e-08 <= fVar3) {
    fVar3 = SQRT(fVar3);
    fVar4 = fVar4 / fVar3;
    fVar5 = fVar5 / fVar3;
    fVar6 = fVar6 / fVar3;
  }
  else {
    fVar4 = 1.0;
    fVar5 = 0.0;
    fVar6 = 0.0;
  }
  uVar2 = NEON_fmov(0x40600000,4);
  *param_4 = CONCAT44(*(float *)(param_2 + 0x2ec) + *(float *)(param_2 + 0x254) +
                      (float)((ulong)uVar2 >> 0x20) * fVar5,
                      (float)*(undefined8 *)(param_2 + 0x250) + (float)uVar2 * fVar4);
  *(float *)(param_4 + 1) = fVar1 + fVar6 * 3.5;
  return;
}




void FUN_1003a32b8(long param_1)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined **local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined1 local_58;
  undefined4 local_54;
  undefined4 uStack_50;
  float local_4c;
  undefined2 local_48;
  undefined1 local_46;
  
  lVar5 = *(long *)(param_1 + 0x10);
  while ((lVar5 != 0 && (*(int *)(*(long *)(lVar5 + 8) + 0xa4) != DAT_10184dd68))) {
    lVar5 = *(long *)(lVar5 + 0x10);
  }
  uVar3 = (ulong)*(ushort *)(lVar5 + 0x88) & 0x1f;
  if (((int)uVar3 == 0x1f) || (1 < *(ushort *)(lVar5 + uVar3 * 0x38 + 0x90) - 3)) {
    fVar8 = (float)FUN_1003dfe60(lVar5,1,1,0x19,0);
    iVar1 = DAT_101d2aaec;
    plVar7 = (long *)(lVar5 + 0x18);
    do {
      lVar6 = *plVar7;
      plVar7 = (long *)(lVar6 + 0x20);
    } while (*(int *)(*(long *)(lVar6 + 8) + 0xa4) != DAT_10184daa8);
    for (lVar4 = *(long *)(lVar6 + 0x28); lVar4 != 0; lVar4 = *(long *)(lVar4 + 0x350)) {
      if ((*(int *)(lVar4 + 0x314) == DAT_101d2aaec) && (*(int *)(lVar4 + 0x310) == 0)) {
        fVar9 = (float)FUN_1003dfe60(lVar5,1,2,0x19,0);
        uVar2 = FUN_1003a34a4(lVar6,iVar1);
        fVar8 = fVar8 + (float)uVar2 * fVar9;
        break;
      }
    }
    fVar10 = *(float *)(*(long *)(lVar5 + 0x40) + 0x308);
    fVar9 = fVar10 * -fVar8;
    if (fVar10 * -fVar8 + fVar10 <= 0.0) {
      fVar9 = 1.0 - fVar10;
    }
    if (fVar9 <= -1.0) {
      if (DAT_101d23a38 == '\0') {
        plVar7 = *(long **)(lVar5 + 0x50);
        if (plVar7 != (long *)0x0) {
          (**(code **)(*plVar7 + 0x118))(fVar9,plVar7,2,3,0);
                    /* WARNING: Could not recover jumptable at 0x0001003a34a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar7 + 0x148))(fVar9,plVar7,lVar5);
          return;
        }
      }
      else {
        local_54 = *(undefined4 *)(lVar5 + 0x260);
        local_68 = 0;
        uStack_60 = 0;
        local_58 = 0;
        local_70 = &PTR_FUN_101497218;
        uStack_50 = 0;
        local_48 = 0x100;
        local_46 = 0;
        local_4c = fVar9;
        FUN_100496328(&local_70,&DAT_101e47d30);
      }
    }
  }
  return;
}




undefined2 FUN_1003a34a4(long param_1,int param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x28);
  lVar2 = lVar1;
  while( true ) {
    if (lVar2 == 0) {
      return 0;
    }
    if ((*(int *)(lVar2 + 0x314) == param_2) && (*(int *)(lVar2 + 0x310) == 0)) break;
    lVar2 = *(long *)(lVar2 + 0x350);
  }
  for (; *(int *)(lVar1 + 0x30c) != *(int *)(lVar2 + 0x30c); lVar1 = *(long *)(lVar1 + 0x350)) {
  }
  return *(undefined2 *)(lVar1 + 0x344);
}




void FUN_1003a34f4(undefined4 param_1,undefined8 *param_2,undefined4 param_3,undefined4 param_4,
                  undefined1 param_5)

{
  param_2[1] = 0;
  param_2[2] = 0;
  *(undefined1 *)(param_2 + 3) = 0;
  *param_2 = &PTR_FUN_101497218;
  *(undefined4 *)((long)param_2 + 0x1c) = param_3;
  *(undefined4 *)(param_2 + 4) = param_4;
  *(undefined4 *)((long)param_2 + 0x24) = param_1;
  *(undefined1 *)(param_2 + 5) = param_5;
  *(undefined2 *)((long)param_2 + 0x29) = 1;
  return;
}




void FUN_1003a3520(void)

{
  return;
}




undefined8 FUN_1003a3524(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}




void FUN_1003a352c(undefined8 param_1)

{
  FUN_1003dfe60(param_1,1,9,0x19,0);
  return;
}




void FUN_1003a3540(undefined8 param_1)

{
  FUN_1003dfe60(param_1,1,8,0x19,0);
  return;
}




void FUN_1003a3554(undefined8 param_1)

{
  FUN_1003dfe60(param_1,2,1,0x19,0);
  return;
}




undefined8 FUN_1003a3568(long param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  do {
    param_1 = *(long *)(param_1 + 0x10);
  } while (*(int *)(*(long *)(param_1 + 8) + 0xa4) != DAT_10184dd68);
  plVar2 = (long *)(param_1 + 0x18);
  do {
    lVar3 = *plVar2;
    plVar2 = (long *)(lVar3 + 0x20);
  } while (*(int *)(*(long *)(lVar3 + 8) + 0xa4) != DAT_10184daa8);
  lVar1 = *(long *)(lVar3 + 0x28);
  lVar3 = lVar1;
  if (lVar1 != 0) {
    do {
      if ((*(int *)(lVar3 + 0x314) == DAT_101d2aaf8) && (*(int *)(lVar3 + 0x310) == 0)) {
        return 2;
      }
      plVar2 = (long *)(lVar3 + 0x350);
      lVar4 = lVar1;
      lVar3 = *plVar2;
    } while (*plVar2 != 0);
    do {
      if ((*(int *)(lVar4 + 0x314) == DAT_101d2aae4) && (*(int *)(lVar4 + 0x310) == 0)) {
        return 2;
      }
      plVar2 = (long *)(lVar4 + 0x350);
      lVar4 = *plVar2;
    } while (*plVar2 != 0);
    do {
      if ((*(int *)(lVar1 + 0x314) == DAT_101d2aaf4) && (*(int *)(lVar1 + 0x310) == 0)) {
        return 4;
      }
      lVar1 = *(long *)(lVar1 + 0x350);
    } while (lVar1 != 0);
  }
  return 0;
}




void FUN_1003a3644(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  while ((lVar1 != 0 && (*(int *)(*(long *)(lVar1 + 8) + 0xa4) != DAT_10184daa8))) {
    lVar1 = *(long *)(lVar1 + 0x20);
  }
  return;
}




void FUN_1003a3670(undefined8 param_1)

{
  FUN_1003dfe60(param_1,2,2,0x19,0);
  return;
}




void FUN_1003a3684(undefined8 param_1)

{
  FUN_1003dfe60(param_1,2,3,0x19,0);
  return;
}




undefined8
FUN_1003a3698(undefined8 param_1,char *param_2,undefined8 *param_3,uint param_4,undefined8 *param_5,
             uint param_6,undefined8 param_7)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  uint uVar7;
  byte bVar8;
  undefined8 uVar9;
  undefined8 local_70;
  undefined8 uStack_68;
  
  local_70 = 0;
  uStack_68 = 0;
  uVar3 = FUN_10000ef8c();
  FUN_1003a985c(&local_70,uVar3);
  lVar4 = FUN_10000dff8();
  FUN_1003a985c(&local_70,lVar4);
  *(undefined2 *)(lVar4 + 0x28) = 0x100;
  *(code **)(lVar4 + 0x30) = FUN_1003a24a0;
  FUN_1003a4e5c(lVar4 + 0x10,param_1);
  uVar2 = FUN_1004d2524("AttackToIdleCombat");
  uVar2 = FUN_100015208("AttackToIdleCombat",uVar2,0x12345678);
  *(undefined4 *)(lVar4 + 0x20) = uVar2;
  if (0 < (int)param_4) {
    lVar4 = FUN_10000e524();
    FUN_1003a985c(&local_70,lVar4);
    uVar9 = *param_3;
    uVar3 = FUN_1010a1520();
    lVar5 = FUN_1010a0e0c(uVar3,0,"*KindredSoundBalance*",0);
    uVar2 = FUN_1003a39f8(*(undefined4 *)(lVar5 + 0x164));
    *(undefined8 *)(lVar4 + 0x10) = uVar9;
    *(undefined2 *)(lVar4 + 0x30) = 0x1ff;
    *(undefined4 *)(lVar4 + 0x34) = 1;
    *(undefined4 *)(lVar4 + 0x3c) = uVar2;
    *(undefined4 *)(lVar4 + 0x40) = 0xffffffff;
    *(byte *)(lVar4 + 0x38) = *(byte *)(lVar4 + 0x38) & 0xf8 | 4;
    *(undefined8 *)(lVar4 + 0x48) = 0;
    if (param_4 != 1) {
      lVar5 = (ulong)param_4 - 1;
      bVar8 = 1;
      do {
        param_3 = param_3 + 1;
        *(undefined8 *)(lVar4 + (ulong)bVar8 * 8 + 0x10) = *param_3;
        bVar8 = bVar8 + 1;
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
      *(byte *)(lVar4 + 0x31) = bVar8;
    }
  }
  plVar6 = (long *)thunk_FUN_10000e6f4();
  FUN_1003a985c(&local_70,plVar6);
  (**(code **)(*plVar6 + 0x50))(plVar6,"autoAttackVO");
  lVar4 = FUN_10000ceb8();
  FUN_1003a985c(&local_70,lVar4);
  *(undefined4 *)(lVar4 + 0x2c) =
       *(undefined4 *)(&DAT_101159b98 + (ulong)(DAT_101d23a38 == '\0') * 4);
  *(code **)(lVar4 + 0x10) = FUN_1003a24a0;
  lVar4 = FUN_10000e1b4();
  FUN_1003a985c(&local_70,lVar4);
  *(undefined8 *)(lVar4 + 0x40) = 0;
  *(ushort *)(lVar4 + 0x80) = *(ushort *)(lVar4 + 0x80) & 0xffef | 3;
  *(uint *)(lVar4 + 0x3c) = (uint)lVar4 & 0xffff;
  *(undefined8 *)(lVar4 + 0x20) = 0;
  *(undefined8 *)(lVar4 + 0x28) = 1;
  if (param_2 == (char *)0x0) {
    uVar7 = 0;
  }
  else {
    uVar7 = 0x811c9dc5;
    cVar1 = *param_2;
    while (cVar1 != '\0') {
      param_2 = param_2 + 1;
      uVar7 = (uVar7 ^ (int)cVar1) * 0x1000193;
      cVar1 = *param_2;
    }
  }
  *(uint *)(lVar4 + 0x10) = uVar7;
  if (0 < (int)param_6) {
    lVar4 = FUN_10000e524();
    FUN_1003a985c(&local_70,lVar4);
    uVar9 = *param_5;
    uVar3 = FUN_1010a1520();
    lVar5 = FUN_1010a0e0c(uVar3,0,"*KindredSoundBalance*",0);
    uVar2 = FUN_1003a39f8(*(undefined4 *)(lVar5 + 0x164));
    *(undefined8 *)(lVar4 + 0x10) = uVar9;
    *(undefined2 *)(lVar4 + 0x30) = 0x1ff;
    *(undefined4 *)(lVar4 + 0x34) = 1;
    *(undefined4 *)(lVar4 + 0x3c) = uVar2;
    *(undefined4 *)(lVar4 + 0x40) = 0xffffffff;
    *(byte *)(lVar4 + 0x38) = *(byte *)(lVar4 + 0x38) & 0xf8 | 4;
    *(undefined8 *)(lVar4 + 0x48) = 0;
    if (param_6 != 1) {
      lVar5 = (ulong)param_6 - 1;
      bVar8 = 1;
      do {
        param_5 = param_5 + 1;
        *(undefined8 *)(lVar4 + (ulong)bVar8 * 8 + 0x10) = *param_5;
        bVar8 = bVar8 + 1;
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
      *(byte *)(lVar4 + 0x31) = bVar8;
    }
  }
  if (DAT_101d23a38 == '\0') {
    lVar4 = FUN_10000ceb8();
    FUN_1003a985c(&local_70,lVar4);
    *(undefined4 *)(lVar4 + 0x2c) = 0x3d8f5c29;
    *(code **)(lVar4 + 0x10) = FUN_1003a24a0;
  }
  uVar3 = FUN_10000bc94();
  FUN_1003a985c(&local_70,uVar3);
  lVar4 = FUN_10000cae4();
  FUN_1003a985c(&local_70,lVar4);
  *(undefined8 *)(lVar4 + 0x10) = param_7;
  uVar3 = FUN_10000f034();
  FUN_1003a985c(&local_70,uVar3);
  return local_70;
}




float FUN_1003a39f8(float param_1)

{
  undefined8 uVar1;
  long lVar2;
  float fVar3;
  
  uVar1 = FUN_1010a1520();
  lVar2 = FUN_1010a0e0c(uVar1,0,"*KindredSoundBalance*",0);
  fVar3 = *(float *)(lVar2 + 4);
  uVar1 = FUN_1010a1520();
  lVar2 = FUN_1010a0e0c(uVar1,0,"*KindredSoundBalance*",0);
  return fVar3 + param_1 + *(float *)(lVar2 + 0x160);
}




void FUN_1003a3a5c(long param_1,undefined8 param_2,undefined4 *param_3,undefined4 *param_4,
                  undefined4 *param_5)

{
  long lVar1;
  float fVar2;
  
  do {
    param_1 = *(long *)(param_1 + 0x10);
  } while (*(int *)(*(long *)(param_1 + 8) + 0xa4) != DAT_10184dd68);
  lVar1 = *(long *)(param_1 + 0x40);
  fVar2 = *(float *)(lVar1 + 0x48) + *(float *)(lVar1 + 0xfc) * (*(float *)(lVar1 + 0x264) + 1.0);
  NEON_fminnm(fVar2 + fVar2 * *(float *)(lVar1 + 0x1b0),DAT_101e94330);
  *param_3 = DAT_101e94270;
  *param_4 = 0;
  *param_5 = 0;
  return;
}




void FUN_1003a3acc(long param_1,undefined8 param_2,float *param_3,undefined4 *param_4,
                  undefined4 *param_5,undefined1 *param_6)

{
  float fVar1;
  long lVar2;
  float fVar3;
  
  fVar1 = DAT_101e94270;
  do {
    param_1 = *(long *)(param_1 + 0x10);
  } while (*(int *)(*(long *)(param_1 + 8) + 0xa4) != DAT_10184dd68);
  lVar2 = *(long *)(param_1 + 0x40);
  fVar3 = *(float *)(lVar2 + 0x48) + *(float *)(lVar2 + 0xfc) * (*(float *)(lVar2 + 0x264) + 1.0);
  NEON_fminnm(fVar3 + fVar3 * *(float *)(lVar2 + 0x1b0),DAT_101e94330);
  *param_3 = DAT_101e94270;
  *param_4 = 0;
  *param_5 = 0;
  *param_6 = 1;
  fVar3 = *(float *)(lVar2 + 0xb4) + *(float *)(lVar2 + 0x168) * (*(float *)(lVar2 + 0x2d0) + 1.0);
  NEON_fminnm(fVar3 + fVar3 * *(float *)(lVar2 + 0x21c),DAT_101e9439c);
  *param_3 = fVar1 + fVar1 * DAT_101e942dc;
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1003a3b80(long param_1,long param_2,undefined4 *param_3,float *param_4)

{
  byte bVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined8 uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined8 local_90;
  undefined4 local_88;
  undefined8 local_80;
  float local_78;
  undefined8 local_70;
  float local_68;
  
  lVar3 = param_1;
  do {
    lVar3 = *(long *)(lVar3 + 0x10);
  } while (*(int *)(*(long *)(lVar3 + 8) + 0xa4) != DAT_10184dd68);
  uVar5 = FUN_1003dfe60(lVar3,0,0xe,0x19,0);
  *param_3 = uVar5;
  fVar12 = *(float *)(param_2 + 0x250);
  fVar13 = *(float *)(param_2 + 600);
  fVar19 = *(float *)(param_2 + 0x2ec) + *(float *)(param_2 + 0x254);
  uVar15 = *(undefined8 *)(param_1 + 0x1d8);
  fVar17 = *(float *)(param_1 + 0x1e0);
  plVar4 = *(long **)(param_1 + 0x1c8);
  fVar18 = 0.8;
  fVar11 = 0.0;
  if (plVar4 == (long *)0x0) goto LAB_1003a3cdc;
  fVar11 = 0.0;
  if (*(int *)(param_1 + 0x1d0) == (int)plVar4[1]) {
    lVar3 = (**(code **)(*plVar4 + 0x10))();
    if (lVar3 == 0) {
      fVar18 = 0.8;
    }
    else {
      lVar3 = (**(code **)(**(long **)(param_1 + 0x1c8) + 0x10))();
      fVar18 = *(float *)((long)&DAT_101159ba0 + (ulong)((*(byte *)(lVar3 + 0x2f4) & 1) == 0) * 4);
    }
    plVar4 = *(long **)(param_1 + 0x1c8);
    if (plVar4 == (long *)0x0) goto LAB_1003a3cdc;
    if (*(int *)(param_1 + 0x1d0) == (int)plVar4[1]) {
      lVar3 = (**(code **)(*plVar4 + 0x10))();
      fVar11 = 0.0;
      if (lVar3 != 0) {
        lVar3 = (**(code **)(**(long **)(param_1 + 0x1c8) + 0x10))();
        fVar11 = 0.0;
        if ((*(byte *)(lVar3 + 0x2f5) & 0x10) != 0) {
          fVar11 = 0.5;
        }
      }
      goto LAB_1003a3cdc;
    }
  }
  *(undefined8 *)(param_1 + 0x1c8) = 0;
  *(undefined4 *)(param_1 + 0x1d0) = DAT_101dc0b88;
LAB_1003a3cdc:
  fVar14 = (float)uVar15;
  fVar7 = fVar12 - fVar14;
  fVar16 = (float)((ulong)uVar15 >> 0x20);
  fVar8 = fVar19 - fVar16;
  fVar6 = fVar13 - fVar17;
  fVar9 = fVar7 * fVar7 + fVar8 * fVar8 + fVar6 * fVar6;
  if (fVar9 <= 0.01) {
    *param_4 = fVar12;
    param_4[1] = fVar19;
  }
  else {
    fVar9 = SQRT(fVar9);
    lVar3 = *(long *)(param_2 + 0x40);
    fVar10 = *(float *)(lVar3 + 0x78) + *(float *)(lVar3 + 300) * (*(float *)(lVar3 + 0x294) + 1.0);
    NEON_fminnm(fVar10 + fVar10 * *(float *)(lVar3 + 0x1e0),DAT_101e94360);
    fVar11 = fVar11 + fVar18 + DAT_101e942a0;
    local_70 = CONCAT44((fVar8 * fVar11) / fVar9 + fVar16,(fVar7 * fVar11) / fVar9 + fVar14);
    local_68 = (fVar11 * fVar6) / fVar9 + fVar17;
    local_90 = 0x4000000040000000;
    local_88 = 0x40000000;
    for (lVar3 = *(long *)(param_2 + 0x18); lVar3 != 0; lVar3 = *(long *)(lVar3 + 0x20)) {
      if (*(int *)(*(long *)(lVar3 + 8) + 0xa4) == ram0x0001018672a0) {
        bVar1 = *(byte *)(lVar3 + 0x818) >> 3 & 3;
        goto LAB_1003a3dcc;
      }
    }
    bVar1 = 0;
LAB_1003a3dcc:
    iVar2 = FUN_10054e044(bVar1,&local_70,&local_80,&local_90);
    if (iVar2 != 0) {
      *(undefined8 *)param_4 = local_80;
      param_4[2] = local_78;
      return;
    }
    *param_4 = fVar12;
    param_4[1] = fVar19;
  }
  param_4[2] = fVar13;
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_1003a3e24(long param_1)

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




void FUN_1003a3e60(undefined8 param_1,long param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float local_50;
  float fStack_4c;
  float local_48;
  float local_44;
  
  fVar3 = *(float *)(param_2 + 0x250);
  fVar1 = *(float *)(param_2 + 0x254);
  fVar4 = *(float *)(param_2 + 600);
  fVar2 = *(float *)(param_2 + 0x2ec);
  FUN_1003a3b80(param_1,param_2,&local_44,&local_50);
  fVar3 = fVar3 - local_50;
  fStack_4c = (fVar2 + fVar1) - fStack_4c;
  fVar4 = fVar4 - local_48;
  local_44 = SQRT(fVar3 * fVar3 + fStack_4c * fStack_4c + fVar4 * fVar4) / local_44;
  if (local_44 <= 0.1) {
    local_44 = 0.1;
  }
  *param_3 = local_44;
  return;
}




void FUN_1003a3ef0(undefined8 param_1)

{
  FUN_1003dfe60(param_1,0,0xd,0x19,0);
  return;
}




void FUN_1003a3f04(undefined8 param_1)

{
  FUN_1003dfe60(param_1,0,5,0x19,0);
  return;
}




void FUN_1003a3f18(undefined8 param_1)

{
  FUN_1003dfe60(param_1,0,2,0x19,0);
  return;
}




void FUN_1003a3f2c(undefined8 param_1)

{
  FUN_1003dfe60(param_1,0,8,0x19,0);
  return;
}




void FUN_1003a3f40(undefined8 param_1)

{
  FUN_1003dfe60(param_1,0,0xf,0x19,0);
  return;
}




void FUN_1003a3f54(undefined8 param_1)

{
  FUN_1003dfe60(param_1,1,3,0x19,0);
  return;
}




void FUN_1003a3f68(undefined8 param_1)

{
  FUN_1003dfe60(param_1,1,4,0x19,0);
  return;
}




void FUN_1003a3f7c(undefined8 param_1)

{
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d90a10;
  FUN_1003dfee8(param_1,local_18,0,9);
  return;
}




void FUN_1003a3fb0(undefined8 param_1)

{
  FUN_1003dfe60(param_1,1,5,0x19,0);
  return;
}




void FUN_1003a3fc4(long param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  
  do {
    param_1 = *(long *)(param_1 + 0x10);
  } while (*(int *)(*(long *)(param_1 + 8) + 0xa4) != DAT_10184dd68);
  uVar1 = *(undefined4 *)(param_1 + 600);
  *param_2 = *(undefined4 *)(param_1 + 0x250);
  param_2[1] = 0;
  param_2[2] = uVar1;
  FUN_1003a31c8(param_1,param_3,&DAT_1013cd824);
  return;
}




void FUN_1003a4010(long param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  do {
    param_1 = *(long *)(param_1 + 0x10);
  } while (*(int *)(*(long *)(param_1 + 8) + 0xa4) != DAT_10184dd68);
  uVar1 = FUN_1003dfe60(param_1,2,5,0x19,0);
  *param_3 = uVar1;
  return;
}




void FUN_1003a4068(long param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  
  do {
    param_1 = *(long *)(param_1 + 0x10);
  } while (*(int *)(*(long *)(param_1 + 8) + 0xa4) != DAT_10184dd68);
  fVar1 = (float)FUN_1003dfe60(param_1,2,4,0x19,0);
  fVar2 = (float)FUN_1003dfe60(param_1,2,6,0x19,0);
  *param_2 = fVar1 + fVar2 * 0.5;
  return;
}




void FUN_1003a40f0(long param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  
  do {
    param_1 = *(long *)(param_1 + 0x10);
  } while (*(int *)(*(long *)(param_1 + 8) + 0xa4) != DAT_10184dd68);
  fVar1 = (float)FUN_1003dfe60(param_1,2,4,0x19,0);
  fVar2 = (float)FUN_1003dfe60(param_1,2,6,0x19,0);
  *param_2 = fVar1 + fVar2 * -0.5;
  return;
}




void FUN_1003a4178(undefined8 param_1)

{
  FUN_1003dfe60(param_1,2,9,0x19,0);
  return;
}




void FUN_1003a418c(undefined8 param_1)

{
  FUN_1003dfe60(param_1,2,2,0x19,0);
  return;
}




void FUN_1003a41a0(undefined8 param_1)

{
  FUN_1003dfe60(param_1,2,7,0x19,0);
  return;
}




void FUN_1003a41b4(undefined8 param_1)

{
  FUN_1003dfe60(param_1,2,8,0x19,0);
  return;
}




void FUN_1003a41c8(undefined8 param_1)

{
  FUN_1003dfe60(param_1,2,10,0x19,0);
  return;
}




float FUN_1003a41dc(long param_1)

{
  long lVar1;
  float fVar2;
  float fVar3;
  
  do {
    param_1 = *(long *)(param_1 + 0x10);
  } while (*(int *)(*(long *)(param_1 + 8) + 0xa4) != DAT_10184dd68);
  lVar1 = *(long *)(param_1 + 0x40);
  fVar2 = *(float *)(lVar1 + 0x48) + *(float *)(lVar1 + 0xfc) * (*(float *)(lVar1 + 0x264) + 1.0);
  fVar3 = (float)NEON_fminnm(fVar2 + fVar2 * *(float *)(lVar1 + 0x1b0),DAT_101e94330);
  fVar2 = DAT_101e94270;
  if (DAT_101e94270 <= fVar3) {
    fVar2 = fVar3;
  }
  fVar3 = (float)FUN_1003df710(param_1,5,1);
  return fVar2 + fVar2 * fVar3;
}




undefined8
FUN_1003a4264(undefined8 param_1,char *param_2,undefined8 param_3,ulong param_4,undefined8 *param_5,
             uint param_6,undefined8 *param_7,uint param_8)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  uint uVar7;
  code *pcVar8;
  byte bVar9;
  undefined8 uVar10;
  code *local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  local_70 = 0;
  uStack_68 = 0;
  uVar3 = FUN_10000ef8c();
  FUN_1003a985c(&local_70,uVar3);
  lVar4 = FUN_10000dff8();
  FUN_1003a985c(&local_70,lVar4);
  *(undefined2 *)(lVar4 + 0x28) = 0x100;
  *(code **)(lVar4 + 0x30) = FUN_1003a24a0;
  FUN_1003a4e5c(lVar4 + 0x10,param_1);
  uVar2 = FUN_1004d2524("AttackToIdleCombat");
  uVar2 = FUN_100015208("AttackToIdleCombat",uVar2,0x12345678);
  *(undefined4 *)(lVar4 + 0x20) = uVar2;
  lVar4 = FUN_10000e524();
  FUN_1003a985c(&local_70,lVar4);
  uVar10 = *param_5;
  uVar3 = FUN_1010a1520();
  lVar5 = FUN_1010a0e0c(uVar3,0,"*KindredSoundBalance*",0);
  uVar2 = FUN_1003a4634(*(undefined4 *)(lVar5 + 0x3bc));
  *(undefined8 *)(lVar4 + 0x10) = uVar10;
  *(undefined2 *)(lVar4 + 0x30) = 0x1ff;
  *(undefined4 *)(lVar4 + 0x34) = 1;
  *(undefined4 *)(lVar4 + 0x3c) = uVar2;
  *(undefined4 *)(lVar4 + 0x40) = 0xffffffff;
  *(byte *)(lVar4 + 0x38) = *(byte *)(lVar4 + 0x38) & 0xf8 | 4;
  *(undefined8 *)(lVar4 + 0x48) = 0;
  if (1 < param_6) {
    lVar5 = (ulong)param_6 - 1;
    bVar9 = 1;
    do {
      param_5 = param_5 + 1;
      *(undefined8 *)(lVar4 + (ulong)bVar9 * 8 + 0x10) = *param_5;
      bVar9 = bVar9 + 1;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
    *(byte *)(lVar4 + 0x31) = bVar9;
  }
  lVar4 = FUN_10000ceb8();
  FUN_1003a985c(&local_70,lVar4);
  *(undefined4 *)(lVar4 + 0x2c) = 0x3e99999a;
  *(code **)(lVar4 + 0x10) = FUN_1003a24a0;
  lVar4 = FUN_10000e1b4();
  FUN_1003a985c(&local_70,lVar4);
  *(undefined8 *)(lVar4 + 0x40) = 0;
  *(ushort *)(lVar4 + 0x80) = *(ushort *)(lVar4 + 0x80) & 0xffec | 2;
  *(uint *)(lVar4 + 0x3c) = (uint)lVar4 & 0xffff;
  *(undefined8 *)(lVar4 + 0x20) = 0;
  *(undefined8 *)(lVar4 + 0x28) = 1;
  if (param_2 == (char *)0x0) {
    uVar7 = 0;
  }
  else {
    uVar7 = 0x811c9dc5;
    cVar1 = *param_2;
    while (cVar1 != '\0') {
      param_2 = param_2 + 1;
      uVar7 = (uVar7 ^ (int)cVar1) * 0x1000193;
      cVar1 = *param_2;
    }
  }
  *(uint *)(lVar4 + 0x10) = uVar7;
  lVar4 = FUN_10000e524();
  FUN_1003a985c(&local_70,lVar4);
  uVar10 = *param_7;
  uVar3 = FUN_1010a1520();
  lVar5 = FUN_1010a0e0c(uVar3,0,"*KindredSoundBalance*",0);
  uVar2 = FUN_1003a4634(*(undefined4 *)(lVar5 + 0x3bc));
  *(undefined8 *)(lVar4 + 0x10) = uVar10;
  *(undefined2 *)(lVar4 + 0x30) = 0x1ff;
  *(undefined4 *)(lVar4 + 0x34) = 1;
  *(undefined4 *)(lVar4 + 0x3c) = uVar2;
  *(undefined4 *)(lVar4 + 0x40) = 0xffffffff;
  *(byte *)(lVar4 + 0x38) = *(byte *)(lVar4 + 0x38) & 0xf8 | 4;
  *(undefined8 *)(lVar4 + 0x48) = 0;
  if (1 < param_8) {
    lVar5 = (ulong)param_8 - 1;
    bVar9 = 1;
    do {
      param_7 = param_7 + 1;
      *(undefined8 *)(lVar4 + (ulong)bVar9 * 8 + 0x10) = *param_7;
      bVar9 = bVar9 + 1;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
    *(byte *)(lVar4 + 0x31) = bVar9;
  }
  plVar6 = (long *)FUN_10000cc74();
  FUN_1003a985c(&local_70,plVar6);
  if ((param_4 & 1) == 0) {
    (**(code **)(*plVar6 + 0x58))(plVar6,param_3);
    plVar6 = (long *)FUN_10000bdf0();
    FUN_1003a985c(&local_70,plVar6);
    pcVar8 = *(code **)(*plVar6 + 0x50);
  }
  else {
    plVar6 = (long *)(**(code **)(*plVar6 + 0x50))(plVar6);
    local_80 = FUN_1003a41dc;
    local_78 = 4;
    plVar6 = (long *)(**(code **)(*plVar6 + 0x18))(plVar6,&local_80,0,0);
    (**(code **)(*plVar6 + 0x70))(plVar6,param_3);
    lVar4 = FUN_10000c8e8();
    FUN_1003a985c(&local_70,lVar4);
    lVar5 = FUN_10049ab34(lVar4 + 0x10);
    *(undefined **)(lVar5 + 8) = PTR_s_Buff_Baptiste_Talent_TheReaper_10185a388;
    plVar6 = (long *)FUN_10000bdf0();
    FUN_1003a985c(lVar4 + 0xb0,plVar6);
    pcVar8 = *(code **)(*plVar6 + 0x50);
  }
  plVar6 = (long *)(*pcVar8)(plVar6,DAT_10185a390);
  (**(code **)(*plVar6 + 0x60))(plVar6,FUN_1003a4698);
  uVar3 = FUN_10000f034();
  FUN_1003a985c(&local_70,uVar3);
  return local_70;
}




float FUN_1003a4634(float param_1)

{
  undefined8 uVar1;
  long lVar2;
  float fVar3;
  
  uVar1 = FUN_1010a1520();
  lVar2 = FUN_1010a0e0c(uVar1,0,"*KindredSoundBalance*",0);
  fVar3 = *(float *)(lVar2 + 4);
  uVar1 = FUN_1010a1520();
  lVar2 = FUN_1010a0e0c(uVar1,0,"*KindredSoundBalance*",0);
  return fVar3 + param_1 + *(float *)(lVar2 + 0x3b8);
}




bool FUN_1003a4698(long param_1,long param_2)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  
  plVar2 = *(long **)(param_1 + 0x1c8);
  bVar1 = false;
  if (plVar2 != (long *)0x0) {
    if (*(int *)(param_1 + 0x1d0) == (int)plVar2[1]) {
      lVar3 = (**(code **)(*plVar2 + 0x10))();
      bVar1 = false;
      if (lVar3 != 0) {
        bVar1 = (*(byte *)(param_2 + 0x2f5) & 0x10) == 0;
      }
    }
    else {
      bVar1 = false;
      *(undefined8 *)(param_1 + 0x1c8) = 0;
      *(undefined4 *)(param_1 + 0x1d0) = DAT_101dc0b88;
    }
  }
  return bVar1;
}




void FUN_1003a4708(undefined8 param_1)

{
  FUN_1003dfe60(param_1,1,5,0x19,0);
  return;
}




void FUN_1003a471c(long param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  long *plVar1;
  long lVar2;
  undefined4 uVar3;
  
  plVar1 = *(long **)(param_1 + 0x1c8);
  if (plVar1 != (long *)0x0) {
    if (*(int *)(param_1 + 0x1d0) == (int)plVar1[1]) {
      lVar2 = (**(code **)(*plVar1 + 0x10))();
      if (lVar2 != 0) {
        uVar3 = *(undefined4 *)(lVar2 + 600);
        *param_2 = *(undefined4 *)(lVar2 + 0x250);
        *param_3 = uVar3;
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x1c8) = 0;
      *(undefined4 *)(param_1 + 0x1d0) = DAT_101dc0b88;
    }
  }
  do {
    param_1 = *(long *)(param_1 + 0x10);
  } while (*(int *)(*(long *)(param_1 + 8) + 0xa4) != DAT_10184dd68);
  uVar3 = FUN_1003a47d0(param_1,PTR_s_Buff_Baptiste_PerkEmpowered_10185a3f8);
  *param_4 = uVar3;
  return;
}




undefined8 FUN_1003a47d0(long param_1)

{
  long lVar1;
  int local_28 [2];
  
  lVar1 = *(long *)(param_1 + 0x18);
  while( true ) {
    if (lVar1 == 0) {
      return 0;
    }
    if (*(int *)(*(long *)(lVar1 + 8) + 0xa4) == DAT_10184daa8) break;
    lVar1 = *(long *)(lVar1 + 0x20);
  }
  FUN_1003a4e5c(local_28);
  lVar1 = *(long *)(lVar1 + 0x28);
  while( true ) {
    if (lVar1 == 0) {
      return 0;
    }
    if ((*(int *)(lVar1 + 0x314) == local_28[0]) && (*(int *)(lVar1 + 0x310) == 0)) break;
    lVar1 = *(long *)(lVar1 + 0x350);
  }
  return 1;
}




void FUN_1003a4858(long param_1,float *param_2,float *param_3)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  lVar1 = param_1;
  do {
    lVar1 = *(long *)(lVar1 + 0x10);
  } while (*(int *)(*(long *)(lVar1 + 8) + 0xa4) != DAT_10184dd68);
  fVar2 = *(float *)(param_1 + 0x1d8) - *(float *)(lVar1 + 0x250);
  fVar4 = *(float *)(param_1 + 0x1e0) - *(float *)(lVar1 + 600);
  fVar6 = fVar2 * fVar2 + fVar4 * fVar4;
  fVar3 = (float)DAT_101873a50;
  fVar5 = DAT_101873a50._4_4_;
  if (1e-08 <= fVar6) {
    fVar6 = SQRT(fVar6);
    fVar3 = fVar2 / fVar6;
    fVar5 = fVar4 / fVar6;
  }
  *param_2 = fVar3;
  *param_3 = fVar5;
  return;
}




float FUN_1003a48d8(long param_1)

{
  long *plVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  
  plVar1 = (long *)(param_1 + 0x18);
  do {
    lVar2 = *plVar1;
    plVar1 = (long *)(lVar2 + 0x20);
  } while (*(int *)(*(long *)(lVar2 + 8) + 0xa4) != DAT_10184dab8);
  lVar2 = *(long *)(lVar2 + 0x60);
  fVar3 = 0.0;
  if ((lVar2 != 0) && ((*(byte *)(lVar2 + 0x239) & 0x1c) != 0)) {
    if (*(long *)(lVar2 + 0x1f8) == 0) {
      fVar3 = -0.0;
    }
    else {
      fVar3 = (float)FUN_1003ad218(0);
      fVar3 = -fVar3;
    }
    fVar4 = (float)FUN_1003dfe60(param_1,2,9,0x19,0);
    fVar3 = fVar3 * fVar4;
  }
  return fVar3;
}




uint FUN_1003a4970(long param_1,uint param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + (ulong)param_2 * 8 + 0x50);
  if (lVar1 != 0) {
    return *(uint *)(lVar1 + 0x238) >> 10 & 7;
  }
  return 0;
}




undefined1  [16] FUN_1003a4990(long param_1,uint param_2)

{
  long lVar1;
  undefined4 extraout_s0;
  undefined4 extraout_var;
  undefined8 extraout_var_00;
  undefined1 auVar2 [16];
  
  lVar1 = *(long *)(param_1 + (ulong)param_2 * 8 + 0x50);
  if ((lVar1 != 0) && (*(long *)(lVar1 + 0x1f8) != 0)) {
    FUN_1003ad218();
    auVar2._4_4_ = extraout_var;
    auVar2._0_4_ = extraout_s0;
    auVar2._8_8_ = extraout_var_00;
    return auVar2;
  }
  return ZEXT816(0);
}




undefined8 FUN_1003a49b0(undefined8 param_1,undefined4 param_2,long param_3)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined4 uVar5;
  undefined4 local_70 [2];
  undefined4 local_68;
  code *local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  local_50 = 0;
  uStack_48 = 0;
  plVar1 = (long *)FUN_10000bdf0();
  FUN_1003a985c(&local_50,plVar1);
  plVar1 = (long *)(**(code **)(*plVar1 + 0x50))(plVar1,PTR_s_Buff_Baron_B_Charging_10185a420);
  local_60 = (code *)CONCAT44(local_60._4_4_,0x3f000000);
  local_58 = 1;
  plVar1 = (long *)(**(code **)(*plVar1 + 0x18))(plVar1,&local_60);
  local_70[0] = 0;
  local_68 = 1;
  (**(code **)(*plVar1 + 0x20))(plVar1,local_70);
  uVar2 = FUN_10000ef8c();
  FUN_1003a985c(&local_50,uVar2);
  plVar1 = (long *)thunk_FUN_10000e0ac();
  FUN_1003a985c(&local_50,plVar1);
  plVar1 = (long *)(**(code **)(*plVar1 + 0x58))(plVar1,param_1);
  (**(code **)(*plVar1 + 0x18))(plVar1,"AttackToIdleCombat");
  lVar3 = FUN_10000ceb8();
  FUN_1003a985c(&local_50,lVar3);
  *(code **)(lVar3 + 0x10) = FUN_1003a24a0;
  *(code **)(lVar3 + 0x18) = FUN_1003c5148;
  lVar3 = FUN_10000e524();
  FUN_1003a985c(&local_50,lVar3);
  uVar2 = FUN_1010a1520();
  lVar4 = FUN_1010a0e0c(uVar2,0,"*KindredSoundBalance*",0);
  uVar5 = FUN_1003a4c78(*(undefined4 *)(lVar4 + 0x328));
  *(char **)(lVar3 + 0x10) = "Sound_Baron_Rocket_Fire";
  *(undefined2 *)(lVar3 + 0x30) = 0x1ff;
  *(undefined4 *)(lVar3 + 0x34) = 1;
  *(undefined4 *)(lVar3 + 0x3c) = uVar5;
  *(undefined4 *)(lVar3 + 0x40) = 0xffffffff;
  *(byte *)(lVar3 + 0x38) = *(byte *)(lVar3 + 0x38) & 0xf8 | 4;
  *(undefined8 *)(lVar3 + 0x48) = 0;
  if (param_3 != 0) {
    uVar2 = FUN_10000e1b4();
    FUN_1003a985c(&local_50,uVar2);
    FUN_1003a4cdc(0x3f800000,uVar2,param_3,0,"RocketLauncher_Attack",0,1,0,0);
  }
  lVar3 = FUN_10000e1b4();
  FUN_1003a985c(&local_50,lVar3);
  *(undefined8 *)(lVar3 + 0x20) = 0;
  *(undefined8 *)(lVar3 + 0x28) = 0x3f40000000000003;
  *(undefined8 *)(lVar3 + 0x40) = 0;
  *(ushort *)(lVar3 + 0x80) = *(ushort *)(lVar3 + 0x80) & 0xffef | 3;
  *(uint *)(lVar3 + 0x3c) = (uint)lVar3 & 0xffff;
  *(undefined4 *)(lVar3 + 0x10) = 0xab435b9f;
  *(char **)(lVar3 + 0x18) = "Bone_Weapon";
  lVar3 = FUN_10000f250();
  FUN_1003a985c(&local_50,lVar3);
  *(undefined4 *)(lVar3 + 0x10) = param_2;
  FUN_1003d266c(lVar3,"RocketLauncher_Attack");
  uVar2 = FUN_10000bb2c();
  FUN_1003a985c(&local_50,uVar2);
  plVar1 = (long *)FUN_10000dc58();
  FUN_1003a985c(&local_50,plVar1);
  plVar1 = (long *)(**(code **)(*plVar1 + 0x50))(plVar1,PTR_s_Ability__Baron__B_1018593d0);
  local_60 = FUN_1003a48d8;
  local_58 = 3;
  (**(code **)(*plVar1 + 0x28))(plVar1,&local_60);
  uVar2 = FUN_10000c784();
  FUN_1003a985c(&local_50,uVar2);
  uVar2 = FUN_10000f034();
  FUN_1003a985c(&local_50,uVar2);
  return local_50;
}




float FUN_1003a4c78(float param_1)

{
  undefined8 uVar1;
  long lVar2;
  float fVar3;
  
  uVar1 = FUN_1010a1520();
  lVar2 = FUN_1010a0e0c(uVar1,0,"*KindredSoundBalance*",0);
  fVar3 = *(float *)(lVar2 + 4);
  uVar1 = FUN_1010a1520();
  lVar2 = FUN_1010a0e0c(uVar1,0,"*KindredSoundBalance*",0);
  return fVar3 + param_1 + *(float *)(lVar2 + 0x324);
}




uint FUN_1003a4cdc(undefined4 param_1,long param_2,char *param_3,ushort param_4,char *param_5,
                  undefined8 param_6,int param_7,int param_8,undefined8 param_9)

{
  uint uVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  char cVar5;
  ushort uVar6;
  
  uVar2 = 2;
  *(undefined4 *)(param_2 + 0x28) = 2;
  uVar3 = 0x811c9dc5;
  if (param_5 == (char *)0x0) {
    uVar4 = 0;
  }
  else {
    cVar5 = *param_5;
    uVar4 = 0x811c9dc5;
    if (cVar5 != '\0') {
      uVar4 = 0x811c9dc5;
      do {
        param_5 = param_5 + 1;
        uVar4 = (uVar4 ^ (int)cVar5) * 0x1000193;
        cVar5 = *param_5;
      } while (cVar5 != '\0');
    }
  }
  *(undefined8 *)(param_2 + 0x40) = param_6;
  *(undefined4 *)(param_2 + 0x2c) = param_1;
  if (param_7 == 0) {
    uVar2 = 0;
  }
  uVar6 = 0x10;
  if (param_8 == 0) {
    uVar6 = 0;
  }
  *(ushort *)(param_2 + 0x80) = uVar2 | param_4 | uVar6 | *(ushort *)(param_2 + 0x80) & 0xffec;
  uVar1 = (uint)param_2 & 0xffff;
  *(uint *)(param_2 + 0x38) = uVar4;
  *(uint *)(param_2 + 0x3c) = uVar1;
  *(undefined8 *)(param_2 + 0x20) = param_9;
  if (param_3 == (char *)0x0) {
    uVar3 = 0;
  }
  else {
    cVar5 = *param_3;
    while (cVar5 != '\0') {
      param_3 = param_3 + 1;
      uVar3 = (uVar3 ^ (int)cVar5) * 0x1000193;
      cVar5 = *param_3;
    }
  }
  *(uint *)(param_2 + 0x10) = uVar3;
  return uVar1;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1003a4db4(long param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  long lVar2;
  char *pcVar3;
  
  do {
    param_1 = *(long *)(param_1 + 0x10);
  } while (*(int *)(*(long *)(param_1 + 8) + 0xa4) != DAT_10184dd68);
  lVar2 = *(long *)(param_1 + 0x18);
  do {
    if (lVar2 == 0) {
LAB_1003a4e28:
      pcVar3 = "Ability01";
LAB_1003a4e30:
      uVar1 = FUN_1004d2524(pcVar3);
      uVar1 = FUN_100015208(pcVar3,uVar1,0x12345678);
      *param_2 = uVar1;
      return;
    }
    if (*(int *)(*(long *)(lVar2 + 8) + 0xa4) == ram0x0001018672a0) {
      if (*(long *)(lVar2 + 0x18) != 0) {
        pcVar3 = "Ability01_Midair";
        goto LAB_1003a4e30;
      }
      goto LAB_1003a4e28;
    }
    lVar2 = *(long *)(lVar2 + 0x20);
  } while( true );
}




void FUN_1003a4e5c(undefined4 *param_1,long param_2)

{
  undefined4 uVar1;
  
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_1004d2524(param_2);
    uVar1 = FUN_100015208(param_2,uVar1,0x12345678);
  }
  *param_1 = uVar1;
  return;
}




void FUN_1003a4ea8(long param_1,undefined8 param_2,undefined4 *param_3,undefined8 *param_4)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  char *pcVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
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
  
  *param_3 = 0xd;
  lVar8 = *(long *)(param_1 + 0x10);
  while (*(int *)(*(long *)(lVar8 + 8) + 0xa4) != DAT_10184dd68) {
    lVar8 = *(long *)(lVar8 + 0x10);
  }
  lVar3 = *(long *)(lVar8 + 0x18);
  lVar5 = lVar3;
  if (lVar3 == 0) {
    lVar5 = 0;
  }
  else {
    do {
      if (*(int *)(*(long *)(lVar5 + 8) + 0xa4) == DAT_10184daa8) break;
      lVar5 = *(long *)(lVar5 + 0x20);
    } while (lVar5 != 0);
  }
  plVar1 = (long *)(lVar5 + 0x28);
  plVar6 = plVar1;
  while ((lVar5 = *plVar6, *(int *)(lVar5 + 0x314) != DAT_101d2ab5c ||
         (*(int *)(lVar5 + 0x310) != 0))) {
    plVar6 = (long *)(lVar5 + 0x350);
  }
  while (*(int *)(*(long *)(lVar3 + 8) + 0xa4) != DAT_10184dab8) {
    lVar3 = *(long *)(lVar3 + 0x20);
  }
  lVar3 = *(long *)(lVar3 + 0x60);
  if (((lVar3 == 0) || (uVar7 = (ulong)*(ushort *)(lVar3 + 0x68) & 0x1f, (int)uVar7 == 0x1f)) ||
     (*(short *)(lVar3 + uVar7 * 0x38 + 0x70) != 2)) {
    for (lVar3 = *plVar1; (lVar3 != 0 && (*(int *)(lVar3 + 0x30c) != *(int *)(lVar5 + 0x30c)));
        lVar3 = *(long *)(lVar3 + 0x350)) {
    }
    iVar2 = FUN_100432d40();
    if (iVar2 != 1) {
      pcVar4 = "Ability_A_Attack2";
      goto LAB_1003a5060;
    }
    pcVar4 = "Ability_A_Attack1";
  }
  else {
    for (lVar3 = *plVar1; (lVar3 != 0 && (*(int *)(lVar3 + 0x30c) != *(int *)(lVar5 + 0x30c)));
        lVar3 = *(long *)(lVar3 + 0x350)) {
    }
    iVar2 = FUN_100432d40();
    if (iVar2 != 1) {
      pcVar4 = "Ability_A_Attack2_Fly";
LAB_1003a5060:
      *param_4 = pcVar4;
      uStack_58 = *(undefined4 *)(lVar8 + 0x260);
      local_3c = 1;
      local_54 = DAT_1018589d8;
      goto LAB_1003a50bc;
    }
    pcVar4 = "Ability_A_Attack1_Fly";
  }
  *param_4 = pcVar4;
  uStack_58 = *(undefined4 *)(lVar8 + 0x260);
  local_3c = 0;
  local_54 = DAT_1018589d8;
LAB_1003a50bc:
  local_44 = 0;
  DAT_1018589d8 = local_54 + 1;
  local_30 = 0;
  local_4c = 0x1bf800000;
  local_60 = 0;
  uStack_68 = 0;
  local_70 = 0;
  local_78 = &PTR_FUN_101496b18;
  local_28 = DAT_101dc0b88;
  local_5c = uStack_58;
  local_50 = FUN_1003d4e0c(PTR_s_Buff_Baron_Perk_A_AlternateTubes_10185a438);
  FUN_10049639c(&local_78,&DAT_101e47d30);
  return;
}




void FUN_1003a5100(long param_1,int param_2)

{
  long lVar1;
  
  for (lVar1 = *(long *)(param_1 + 0x28); (lVar1 != 0 && (*(int *)(lVar1 + 0x30c) != param_2));
      lVar1 = *(long *)(lVar1 + 0x350)) {
  }
  FUN_100432d40();
  return;
}




void FUN_1003a5120(void)

{
  return;
}




void FUN_1003a5124(undefined8 param_1)

{
  FUN_1003dfe60(param_1,1,7,0x19,0);
  return;
}




void FUN_1003a5138(undefined8 param_1)

{
  FUN_1003dfe60(param_1,1,8,0x19,0);
  return;
}




void FUN_1003a514c(long param_1,undefined8 param_2,float *param_3)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  puVar1 = PTR_s_Buff_Baron_Talent_TurboJets_10185a430;
  lVar4 = param_1;
  do {
    lVar4 = *(long *)(lVar4 + 0x10);
  } while (*(int *)(*(long *)(lVar4 + 8) + 0xa4) != DAT_10184dd68);
  fVar8 = *(float *)(lVar4 + 0x250);
  fVar6 = *(float *)(lVar4 + 0x254);
  fVar7 = *(float *)(lVar4 + 600);
  fVar9 = *(float *)(lVar4 + 0x2ec);
  lVar2 = FUN_100345d90(*(undefined4 *)(lVar4 + 0x260));
  if ((lVar2 == 0) || (uVar3 = FUN_1003a47d0(lVar2,puVar1), (uVar3 & 1) == 0)) {
    fVar5 = (float)FUN_1003dfe60(lVar4,2,3,0x19,0);
    fVar8 = fVar8 - *(float *)(param_1 + 0x1d8);
    fVar6 = (fVar9 + fVar6) - *(float *)(param_1 + 0x1dc);
    fVar7 = fVar7 - *(float *)(param_1 + 0x1e0);
    fVar7 = SQRT(fVar8 * fVar8 + fVar6 * fVar6 + fVar7 * fVar7);
    fVar8 = (float)FUN_1003dfe60(lVar4,2,4,0xd,0);
    if (fVar8 <= 0.1) {
      fVar8 = 0.1;
    }
    fVar6 = (float)FUN_1003dfe60(lVar4,2,5,0xd,0);
    if ((fVar5 < fVar7) && (fVar7 = fVar8 + fVar6 * (fVar7 - fVar5), fVar8 <= fVar7)) {
      fVar8 = fVar7;
    }
  }
  else {
    fVar8 = 0.1;
  }
  *param_3 = fVar8;
  return;
}




void FUN_1003a5284(long param_1,long param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = *(float *)(param_2 + 0x250) - *(float *)(param_1 + 0x1d8);
  fVar3 = (*(float *)(param_2 + 0x2ec) + *(float *)(param_2 + 0x254)) - *(float *)(param_1 + 0x1dc);
  fVar4 = *(float *)(param_2 + 600) - *(float *)(param_1 + 0x1e0);
  fVar2 = (float)FUN_1003dfe60(param_2,2,8,0x19,0);
  *param_3 = SQRT(fVar1 * fVar1 + fVar3 * fVar3 + fVar4 * fVar4) / fVar2;
  return;
}




void FUN_1003a5304(undefined8 param_1)

{
  FUN_1003dfe60(param_1,2,8,0x19,0);
  return;
}




void FUN_1003a5318(long param_1,undefined8 param_2,float *param_3)

{
  float fVar1;
  
  if (DAT_101d23a38 != '\0') {
    FUN_1003a5284();
    do {
      param_1 = *(long *)(param_1 + 0x10);
    } while (*(int *)(*(long *)(param_1 + 8) + 0xa4) != DAT_10184dd68);
    fVar1 = (float)FUN_1003dfe60(param_1,2,0xd,0x19,0);
    *param_3 = *param_3 + fVar1;
  }
  return;
}




void FUN_1003a538c(undefined8 param_1,undefined8 param_2,float *param_3,float *param_4)

{
  float local_24;
  
  *param_3 = 1.6667;
  local_24 = 0.0;
  FUN_1003a5284(param_1,param_2,&local_24);
  *param_4 = *param_3 * local_24;
  return;
}




void FUN_1003a53dc(undefined8 param_1)

{
  FUN_1003dfe60(param_1,2,7,0x19,0);
  return;
}




bool FUN_1003a53f0(long param_1)

{
  int iVar1;
  
  iVar1 = 5;
  if (*(char *)(*(long *)(param_1 + 0x38) + 0x8d) != '\0') {
    iVar1 = 3;
  }
  return (*(uint *)(param_1 + 0x238) >> 10 & 7) ==
         iVar1 + *(int *)(*(long *)(param_1 + 0x38) + 0x78);
}




void FUN_1003a5424(undefined8 param_1)

{
  FUN_1003dfe60(param_1,2,0xb,0x19,0);
  return;
}




undefined8 FUN_1003a5438(long param_1)

{
  int iVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  
  do {
    param_1 = *(long *)(param_1 + 0x10);
  } while (*(int *)(*(long *)(param_1 + 8) + 0xa4) != DAT_10184dd68);
  lVar2 = *(long *)(param_1 + 0x18);
  iVar3 = *(int *)(*(long *)(lVar2 + 8) + 0xa4);
  lVar4 = lVar2;
  iVar1 = iVar3;
  while (iVar1 != DAT_10184dab8) {
    lVar4 = *(long *)(lVar4 + 0x20);
    iVar1 = *(int *)(*(long *)(lVar4 + 8) + 0xa4);
  }
  lVar4 = *(long *)(lVar4 + 0x60);
  if (((lVar4 == 0) || (uVar5 = (ulong)*(ushort *)(lVar4 + 0x68) & 0x1f, (int)uVar5 == 0x1f)) ||
     (*(short *)(lVar4 + uVar5 * 0x38 + 0x70) != 2)) {
    while (iVar3 != DAT_10184daa8) {
      lVar2 = *(long *)(lVar2 + 0x20);
      iVar3 = *(int *)(*(long *)(lVar2 + 8) + 0xa4);
    }
    lVar4 = *(long *)(lVar2 + 0x28);
    while( true ) {
      if (lVar4 == 0) {
        return 0;
      }
      if ((*(int *)(lVar4 + 0x314) == DAT_101d2ab6c) && (*(int *)(lVar4 + 0x310) == 0)) break;
      lVar4 = *(long *)(lVar4 + 0x350);
    }
  }
  return 2;
}




void FUN_1003a551c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3ee66666;
  return;
}




undefined8
FUN_1003a552c(float param_1,float param_2,undefined8 param_3,undefined8 param_4,undefined8 *param_5,
             uint param_6,undefined8 param_7)

{
  undefined *puVar1;
  bool bVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  byte bVar7;
  long lVar8;
  undefined8 local_70;
  undefined8 uStack_68;
  
  local_70 = 0;
  uStack_68 = 0;
  lVar4 = FUN_10000d8b8();
  FUN_1003a985c(&local_70,lVar4);
  *(undefined1 *)(lVar4 + 0x10) = 1;
  uVar5 = FUN_10000ef8c();
  FUN_1003a985c(&local_70,uVar5);
  lVar4 = FUN_10000dff8();
  FUN_1003a985c(&local_70,lVar4);
  *(undefined2 *)(lVar4 + 0x28) = 0x100;
  *(undefined8 *)(lVar4 + 0x30) = 0;
  FUN_1003a4e5c(lVar4 + 0x10,param_3);
  uVar3 = FUN_1004d2524("AttackToIdle");
  uVar3 = FUN_100015208("AttackToIdle",uVar3,0x12345678);
  *(undefined4 *)(lVar4 + 0x20) = uVar3;
  lVar4 = FUN_10000ceb8();
  FUN_1003a985c(&local_70,lVar4);
  *(float *)(lVar4 + 0x2c) = param_2;
  *(undefined8 *)(lVar4 + 0x10) = 0;
  if (0 < (int)param_6) {
    lVar4 = FUN_10000e524();
    FUN_1003a985c(&local_70,lVar4);
    *(undefined8 *)(lVar4 + 0x10) = *param_5;
    *(undefined2 *)(lVar4 + 0x30) = 0x1ff;
    *(undefined4 *)(lVar4 + 0x34) = 1;
    *(undefined8 *)(lVar4 + 0x3c) = 0xffffffff3f800000;
    *(byte *)(lVar4 + 0x38) = *(byte *)(lVar4 + 0x38) & 0xf8 | 4;
    *(undefined8 *)(lVar4 + 0x48) = 0;
    if (param_6 != 1) {
      lVar8 = (ulong)param_6 - 1;
      bVar7 = 1;
      do {
        param_5 = param_5 + 1;
        *(undefined8 *)(lVar4 + (ulong)bVar7 * 8 + 0x10) = *param_5;
        bVar7 = bVar7 + 1;
        lVar8 = lVar8 + -1;
      } while (lVar8 != 0);
      *(byte *)(lVar4 + 0x31) = bVar7;
    }
  }
  lVar4 = FUN_10000ceb8();
  FUN_1003a985c(&local_70,lVar4);
  *(float *)(lVar4 + 0x2c) = param_1 - param_2;
  *(undefined8 *)(lVar4 + 0x10) = 0;
  plVar6 = (long *)thunk_FUN_10000f1a0();
  FUN_1003a985c(&local_70,plVar6);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x68))(plVar6);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x10))(0x3ecccccd);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x18))(0x3f000000);
  (**(code **)(*plVar6 + 0x20))(0x41700000);
  uVar5 = FUN_10000bc94();
  FUN_1003a985c(&local_70,uVar5);
  lVar4 = FUN_1003e10f0();
  bVar7 = *(byte *)(lVar4 + 0xe5);
  uVar3 = _cosf(0x40060a92);
  lVar4 = FUN_10000ed74();
  FUN_1003a985c(&local_70,lVar4);
  *(undefined8 *)(lVar4 + 0x18) = 0;
  *(undefined1 *)(lVar4 + 0x20) = 0;
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
  *(byte *)(lVar4 + 0x6a) = bVar7 | 0x14;
  *(undefined2 *)(lVar4 + 0x68) = 0x6120;
  bVar2 = DAT_101d23a38 != '\0';
  *(undefined4 *)(lVar4 + 0xa4) = 0x40a00000;
  *(byte *)(lVar4 + 0xa8) = *(byte *)(lVar4 + 0xa8) & 0xf0 | bVar2 | 4;
  puVar1 = PTR_s_Buff_SlowDecayingUsingBuffVar_10185a460;
  lVar4 = FUN_10000bd3c();
  FUN_1003a985c(&local_70,lVar4);
  *(undefined **)(lVar4 + 0x10) = puVar1;
  *(undefined4 *)(lVar4 + 0x18) = 0x40200000;
  *(undefined2 *)(lVar4 + 0x68) = 1;
  *(byte *)(lVar4 + 0x6a) = *(byte *)(lVar4 + 0x6a) & 0xfe;
  *(code **)(lVar4 + 0x58) = FUN_1003a551c;
  lVar4 = FUN_10000cae4();
  FUN_1003a985c(&local_70,lVar4);
  *(undefined8 *)(lVar4 + 0x10) = param_7;
  FUN_1003a59a0(0x40400000,&local_70,DAT_10185a468);
  uVar5 = FUN_10000e1b4();
  FUN_1003a985c(&local_70,uVar5);
  FUN_1003a4cdc(0,uVar5,param_4,1,"CenterBody",0,1,0,0);
  lVar4 = FUN_10000ceb8();
  FUN_1003a985c(&local_70,lVar4);
  *(undefined4 *)(lVar4 + 0x2c) = 0x3f4ccccd;
  *(undefined8 *)(lVar4 + 0x10) = 0;
  lVar4 = FUN_10000e524();
  FUN_1003a985c(&local_70,lVar4);
  *(char **)(lVar4 + 0x10) = "build://Sounds/5v5/SFX/sfx_blackclaw_post_basic_attack_roar.mp3";
  *(undefined2 *)(lVar4 + 0x30) = 0x1ff;
  *(undefined4 *)(lVar4 + 0x34) = 1;
  *(undefined8 *)(lVar4 + 0x3c) = 0xffffffff3f333333;
  *(byte *)(lVar4 + 0x38) = *(byte *)(lVar4 + 0x38) & 0xf8 | 4;
  *(undefined8 *)(lVar4 + 0x48) = 0;
  lVar4 = FUN_10000ceb8();
  FUN_1003a985c(&local_70,lVar4);
  *(undefined4 *)(lVar4 + 0x2c) = 0x3e4ccccd;
  *(undefined8 *)(lVar4 + 0x10) = 0;
  uVar5 = FUN_10000f034();
  FUN_1003a985c(&local_70,uVar5);
  lVar4 = FUN_10000d8b8();
  FUN_1003a985c(&local_70,lVar4);
  *(undefined1 *)(lVar4 + 0x10) = 0;
  return local_70;
}




void FUN_1003a5964(long param_1,int param_2)

{
  ushort uVar1;
  
  uVar1 = 0x2000;
  if (param_2 == 0) {
    uVar1 = 0;
  }
  *(ushort *)(param_1 + 0x58) = *(ushort *)(param_1 + 0x58) & 0xdfff | uVar1;
  return;
}




void FUN_1003a598c(long param_1,byte param_2)

{
  *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) & 0xfe | param_2;
  return;
}




void FUN_1003a59a0(undefined4 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = FUN_10000bc94();
  FUN_1003a985c(param_2,uVar1);
  lVar2 = FUN_10000bd3c();
  FUN_1003a985c(param_2,lVar2);
  *(undefined8 *)(lVar2 + 0x10) = param_3;
  *(undefined4 *)(lVar2 + 0x18) = param_1;
  *(undefined2 *)(lVar2 + 0x68) = 1;
  *(byte *)(lVar2 + 0x6a) = *(byte *)(lVar2 + 0x6a) & 0xfe;
  uVar1 = FUN_10000c784();
  FUN_1003a985c(param_2,uVar1);
  return;
}




undefined8
FUN_1003a5a20(float param_1,float param_2,undefined8 param_3,undefined8 param_4,undefined8 *param_5,
             uint param_6,undefined8 param_7)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  byte bVar5;
  long lVar6;
  undefined8 local_70;
  undefined8 uStack_68;
  
  local_70 = 0;
  uStack_68 = 0;
  lVar2 = FUN_10000d8b8();
  FUN_1003a985c(&local_70,lVar2);
  *(undefined1 *)(lVar2 + 0x10) = 1;
  uVar3 = FUN_10000ef8c();
  FUN_1003a985c(&local_70,uVar3);
  lVar2 = FUN_10000dff8();
  FUN_1003a985c(&local_70,lVar2);
  *(undefined2 *)(lVar2 + 0x28) = 0x100;
  *(undefined8 *)(lVar2 + 0x30) = 0;
  FUN_1003a4e5c(lVar2 + 0x10,param_3);
  uVar1 = FUN_1004d2524("AttackToIdle");
  uVar1 = FUN_100015208("AttackToIdle",uVar1,0x12345678);
  *(undefined4 *)(lVar2 + 0x20) = uVar1;
  lVar2 = FUN_10000ceb8();
  FUN_1003a985c(&local_70,lVar2);
  *(float *)(lVar2 + 0x2c) = param_2;
  *(undefined8 *)(lVar2 + 0x10) = 0;
  if (0 < (int)param_6) {
    lVar2 = FUN_10000e524();
    FUN_1003a985c(&local_70,lVar2);
    *(undefined8 *)(lVar2 + 0x10) = *param_5;
    *(undefined2 *)(lVar2 + 0x30) = 0x1ff;
    *(undefined4 *)(lVar2 + 0x34) = 1;
    *(undefined8 *)(lVar2 + 0x3c) = 0xffffffff3f800000;
    *(byte *)(lVar2 + 0x38) = *(byte *)(lVar2 + 0x38) & 0xf8 | 4;
    *(undefined8 *)(lVar2 + 0x48) = 0;
    if (param_6 != 1) {
      lVar6 = (ulong)param_6 - 1;
      bVar5 = 1;
      do {
        param_5 = param_5 + 1;
        *(undefined8 *)(lVar2 + (ulong)bVar5 * 8 + 0x10) = *param_5;
        bVar5 = bVar5 + 1;
        lVar6 = lVar6 + -1;
      } while (lVar6 != 0);
      *(byte *)(lVar2 + 0x31) = bVar5;
    }
  }
  lVar2 = FUN_10000ceb8();
  FUN_1003a985c(&local_70,lVar2);
  *(float *)(lVar2 + 0x2c) = param_1 - param_2;
  *(undefined8 *)(lVar2 + 0x10) = 0;
  plVar4 = (long *)thunk_FUN_10000f1a0();
  FUN_1003a985c(&local_70,plVar4);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x68))(plVar4);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x10))(0x3ecccccd);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x18))(0x3f000000);
  (**(code **)(*plVar4 + 0x20))(0x41700000);
  uVar3 = FUN_10000bc94();
  FUN_1003a985c(&local_70,uVar3);
  lVar2 = FUN_10000cae4();
  FUN_1003a985c(&local_70,lVar2);
  *(undefined8 *)(lVar2 + 0x10) = param_7;
  uVar3 = FUN_10000e1b4();
  FUN_1003a985c(&local_70,uVar3);
  FUN_1003a4cdc(0,uVar3,param_4,1,"CenterBody",0,1,0,0);
  uVar3 = FUN_10000c784();
  FUN_1003a985c(&local_70,uVar3);
  lVar2 = FUN_10000ceb8();
  FUN_1003a985c(&local_70,lVar2);
  *(undefined4 *)(lVar2 + 0x2c) = 0x3e4ccccd;
  *(undefined8 *)(lVar2 + 0x10) = 0;
  uVar3 = FUN_10000f034();
  FUN_1003a985c(&local_70,uVar3);
  lVar2 = FUN_10000d8b8();
  FUN_1003a985c(&local_70,lVar2);
  *(undefined1 *)(lVar2 + 0x10) = 0;
  return local_70;
}




void FUN_1003a5ce0(long param_1,undefined8 param_2,undefined8 param_3,uint *param_4)

{
  do {
    param_1 = *(long *)(param_1 + 0x10);
  } while (*(int *)(*(long *)(param_1 + 8) + 0xa4) != DAT_10184dd68);
  *param_4 = (uint)*(byte *)(param_1 + 0x2c8);
  return;
}




undefined1 FUN_1003a5d10(long param_1)

{
  return *(undefined1 *)(param_1 + 0x2c8);
}




undefined8
FUN_1003a5d18(undefined8 param_1,char *param_2,undefined8 *param_3,uint param_4,undefined8 param_5)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  byte bVar7;
  undefined8 uVar8;
  undefined8 local_60;
  undefined8 uStack_58;
  
  local_60 = 0;
  uStack_58 = 0;
  uVar3 = FUN_10000ef8c();
  FUN_1003a985c(&local_60,uVar3);
  lVar4 = FUN_10000dff8();
  FUN_1003a985c(&local_60,lVar4);
  *(undefined2 *)(lVar4 + 0x28) = 0x100;
  *(code **)(lVar4 + 0x30) = FUN_1003a24a0;
  FUN_1003a4e5c(lVar4 + 0x10,param_1);
  uVar2 = FUN_1004d2524("AttackToIdleCombat");
  uVar2 = FUN_100015208("AttackToIdleCombat",uVar2,0x12345678);
  *(undefined4 *)(lVar4 + 0x20) = uVar2;
  lVar4 = FUN_10000e524();
  FUN_1003a985c(&local_60,lVar4);
  uVar8 = *param_3;
  uVar3 = FUN_1010a1520();
  lVar5 = FUN_1010a0e0c(uVar3,0,"*KindredSoundBalance*",0);
  uVar2 = FUN_1003a5f8c(*(undefined4 *)(lVar5 + 0x240));
  *(undefined8 *)(lVar4 + 0x10) = uVar8;
  *(undefined2 *)(lVar4 + 0x30) = 0x1ff;
  *(undefined4 *)(lVar4 + 0x34) = 1;
  *(undefined4 *)(lVar4 + 0x3c) = uVar2;
  *(undefined4 *)(lVar4 + 0x40) = 0xffffffff;
  *(byte *)(lVar4 + 0x38) = *(byte *)(lVar4 + 0x38) & 0xf8 | 4;
  *(undefined8 *)(lVar4 + 0x48) = 0;
  if (1 < param_4) {
    lVar5 = (ulong)param_4 - 1;
    bVar7 = 1;
    do {
      param_3 = param_3 + 1;
      *(undefined8 *)(lVar4 + (ulong)bVar7 * 8 + 0x10) = *param_3;
      bVar7 = bVar7 + 1;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
    *(byte *)(lVar4 + 0x31) = bVar7;
  }
  lVar4 = FUN_10000ceb8();
  FUN_1003a985c(&local_60,lVar4);
  *(undefined4 *)(lVar4 + 0x2c) = 0x3e99999a;
  *(code **)(lVar4 + 0x10) = FUN_1003a24a0;
  lVar4 = FUN_10000e1b4();
  FUN_1003a985c(&local_60,lVar4);
  *(undefined8 *)(lVar4 + 0x40) = 0;
  *(ushort *)(lVar4 + 0x80) = *(ushort *)(lVar4 + 0x80) & 0xffec | 2;
  *(uint *)(lVar4 + 0x3c) = (uint)lVar4 & 0xffff;
  *(undefined8 *)(lVar4 + 0x20) = 0;
  *(undefined8 *)(lVar4 + 0x28) = 1;
  if (param_2 == (char *)0x0) {
    uVar6 = 0;
  }
  else {
    uVar6 = 0x811c9dc5;
    cVar1 = *param_2;
    while (cVar1 != '\0') {
      param_2 = param_2 + 1;
      uVar6 = (uVar6 ^ (int)cVar1) * 0x1000193;
      cVar1 = *param_2;
    }
  }
  *(uint *)(lVar4 + 0x10) = uVar6;
  uVar3 = FUN_10000bc94();
  FUN_1003a985c(&local_60,uVar3);
  lVar4 = FUN_10000cae4();
  FUN_1003a985c(&local_60,lVar4);
  *(undefined8 *)(lVar4 + 0x10) = param_5;
  lVar4 = FUN_10000bd3c();
  FUN_1003a985c(&local_60,lVar4);
  *(undefined8 *)(lVar4 + 0x10) = DAT_10185a4b8;
  *(code **)(lVar4 + 0x30) = FUN_1003a5ff0;
  *(undefined2 *)(lVar4 + 0x68) = 1;
  *(byte *)(lVar4 + 0x6a) = *(byte *)(lVar4 + 0x6a) & 0xfe;
  uVar3 = FUN_10000f034();
  FUN_1003a985c(&local_60,uVar3);
  return local_60;
}




float FUN_1003a5f8c(float param_1)

{
  undefined8 uVar1;
  long lVar2;
  float fVar3;
  
  uVar1 = FUN_1010a1520();
  lVar2 = FUN_1010a0e0c(uVar1,0,"*KindredSoundBalance*",0);
  fVar3 = *(float *)(lVar2 + 4);
  uVar1 = FUN_1010a1520();
  lVar2 = FUN_1010a0e0c(uVar1,0,"*KindredSoundBalance*",0);
  return fVar3 + param_1 + *(float *)(lVar2 + 0x238);
}




void FUN_1003a5ff0(undefined8 param_1)

{
  FUN_1003df710(param_1,3,1);
  return;
}




float FUN_1003a5ffc(long param_1)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  lVar1 = *(long *)(param_1 + 0x10);
  while ((lVar1 != 0 && (*(int *)(*(long *)(lVar1 + 8) + 0xa4) != DAT_10184dd68))) {
    lVar1 = *(long *)(lVar1 + 0x10);
  }
  fVar2 = (float)FUN_1003dfe60(lVar1,0,2,0x19,0);
  fVar3 = (float)FUN_10045f34c(param_1 + 0x220,param_1);
  fVar4 = (float)FUN_1003dfe60(lVar1,0,3,0x19,0);
  fVar5 = (float)FUN_1003dfe60(lVar1,0,4,0x19,0);
  fVar6 = (float)FUN_1003dfe60(lVar1,0,5,0x19,0);
  return fVar3 / fVar4 + fVar2 + fVar5 + fVar6;
}




void FUN_1003a60cc(undefined8 param_1)

{
  FUN_1003dfe60(param_1,0,3,0x19,0);
  return;
}




void FUN_1003a60e0(long param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  do {
    param_1 = *(long *)(param_1 + 0x10);
  } while (*(int *)(*(long *)(param_1 + 8) + 0xa4) != DAT_10184dd68);
  uVar1 = FUN_1003dfe60(param_1,0,2,0x19,0);
  *param_3 = uVar1;
  return;
}




float FUN_1003a6138(long param_1,long param_2)

{
  long lVar1;
  float fVar2;
  float fVar3;
  
  fVar2 = *(float *)(*(long *)(param_2 + 0x38) + 100);
  lVar1 = *(long *)(param_1 + 0x40);
  fVar3 = *(float *)(lVar1 + 0x78) + *(float *)(lVar1 + 300) * (*(float *)(lVar1 + 0x294) + 1.0);
  NEON_fminnm(fVar3 + fVar3 * *(float *)(lVar1 + 0x1e0),DAT_101e94360);
  return ((*(float *)(param_2 + 0x2e8) + fVar2) * *(float *)(*(long *)(param_2 + 0x38) + 0x68)) /
         fVar2 + DAT_101e942a0 * 0.5;
}




void FUN_1003a6198(long param_1,undefined8 param_2,float *param_3)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  lVar3 = param_1;
  do {
    lVar3 = *(long *)(lVar3 + 0x10);
  } while (*(int *)(*(long *)(lVar3 + 8) + 0xa4) != DAT_10184dd68);
  plVar1 = *(long **)(param_1 + 0x1c8);
  fVar4 = 0.0;
  if (plVar1 != (long *)0x0) {
    fVar4 = 0.0;
    if (*(int *)(param_1 + 0x1d0) == (int)plVar1[1]) {
      fVar6 = *(float *)(lVar3 + 0x250);
      fVar7 = *(float *)(lVar3 + 0x254);
      fVar5 = *(float *)(lVar3 + 600);
      fVar8 = *(float *)(lVar3 + 0x2ec);
      lVar2 = (**(code **)(*plVar1 + 0x10))();
      if (lVar2 != 0) {
        fVar6 = fVar6 - *(float *)(param_1 + 0x1d8);
        fVar4 = (fVar8 + fVar7) - *(float *)(param_1 + 0x1dc);
        fVar5 = fVar5 - *(float *)(param_1 + 0x1e0);
        fVar7 = (float)FUN_1003a6138(lVar3,lVar2);
        fVar7 = SQRT(fVar6 * fVar6 + fVar4 * fVar4 + fVar5 * fVar5) - fVar7;
        if (fVar7 <= 0.0) {
          fVar7 = 0.0;
        }
        fVar4 = (float)FUN_1003dfe60(lVar3,0,3,0x19,0);
        fVar4 = fVar7 / fVar4;
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x1c8) = 0;
      *(undefined4 *)(param_1 + 0x1d0) = DAT_101dc0b88;
    }
  }
  *param_3 = fVar4;
  return;
}




void FUN_1003a62b4(long param_1,int *param_2)

{
  float fVar1;
  
  do {
    param_1 = *(long *)(param_1 + 0x10);
  } while (*(int *)(*(long *)(param_1 + 8) + 0xa4) != DAT_10184dd68);
  fVar1 = (float)FUN_1003dfe60(param_1,0,6,0x19,0);
  *param_2 = (int)fVar1;
  return;
}




void FUN_1003a6310(long param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  do {
    param_1 = *(long *)(param_1 + 0x10);
  } while (*(int *)(*(long *)(param_1 + 8) + 0xa4) != DAT_10184dd68);
  uVar1 = FUN_1003dfe60(param_1,0,4,0x19,0);
  *param_3 = uVar1;
  return;
}




undefined8 FUN_1003a6368(long param_1)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  plVar2 = *(long **)(param_1 + 0x1c8);
  uVar5 = 0;
  if (plVar2 != (long *)0x0) {
    if (*(int *)(param_1 + 0x1d0) == (int)plVar2[1]) {
      lVar3 = (**(code **)(*plVar2 + 0x10))();
      uVar5 = 0;
      if (lVar3 != 0) {
        lVar4 = *(long *)(lVar3 + 0x18);
        while ((lVar4 != 0 && (*(int *)(*(long *)(lVar4 + 8) + 0xa4) != DAT_10184daa8))) {
          lVar4 = *(long *)(lVar4 + 0x20);
        }
        iVar1 = FUN_1003a34a4(lVar4,DAT_101d2abb4);
        if ((iVar1 == 0) ||
           ((uVar5 = 1, (*(uint *)(lVar3 + 0x2f4) & 0x20000110) == 0 || iVar1 != 2 && (iVar1 != 5)))
           ) {
          uVar5 = 0;
        }
      }
    }
    else {
      uVar5 = 0;
      *(undefined8 *)(param_1 + 0x1c8) = 0;
      *(undefined4 *)(param_1 + 0x1d0) = DAT_101dc0b88;
    }
  }
  return uVar5;
}




void FUN_1003a643c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = FUN_10000bb2c();
  FUN_1003a985c(param_1,uVar1);
  lVar2 = FUN_10000bd3c();
  FUN_1003a985c(param_1,lVar2);
  *(undefined8 *)(lVar2 + 0x10) = param_2;
  *(undefined8 *)(lVar2 + 0x30) = param_3;
  *(undefined2 *)(lVar2 + 0x68) = 1;
  *(byte *)(lVar2 + 0x6a) = *(byte *)(lVar2 + 0x6a) & 0xfe;
  uVar1 = FUN_10000c784();
  FUN_1003a985c(param_1,uVar1);
  return;
}




void FUN_1003a64b4(undefined8 param_1)

{
  FUN_1003dfe60(param_1,0,8,0x19,0);
  return;
}




void FUN_1003a64c8(long param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  do {
    param_1 = *(long *)(param_1 + 0x10);
  } while (*(int *)(*(long *)(param_1 + 8) + 0xa4) != DAT_10184dd68);
  uVar1 = FUN_1003dfe60(param_1,1,3,0x19,0);
  *param_3 = uVar1;
  return;
}




void FUN_1003a6520(long param_1)

{
  char cVar1;
  undefined8 uVar2;
  long *plVar3;
  char *pcVar4;
  long lVar5;
  long *plVar6;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 local_78;
  uint local_70;
  undefined8 local_6c;
  undefined7 local_64;
  undefined4 uStack_5d;
  undefined1 local_59;
  undefined4 local_58;
  undefined8 local_54;
  undefined8 local_4c;
  undefined4 local_44;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_34;
  undefined1 local_2c;
  undefined4 local_2b;
  
  if (DAT_101d23a38 == '\0') {
    local_70 = 0x811c9dc5;
    pcVar4 = "Effect_Blackfeather_B_Lvl5";
    if ((*(uint *)(param_1 + 0x238) & 0x1c00) != 0x1400) {
      pcVar4 = "Effect_Blackfeather_B";
    }
    uStack_88 = 0;
    local_90 = 0;
    local_78 = 0;
    uStack_80 = 0;
    cVar1 = *pcVar4;
    while (cVar1 != '\0') {
      pcVar4 = pcVar4 + 1;
      local_70 = (local_70 ^ (int)cVar1) * 0x1000193;
      cVar1 = *pcVar4;
    }
    local_6c = 0xffffffff00000000;
    local_64 = 0;
    uStack_5d = 0;
    local_59 = 0xff;
    local_58 = 0;
    local_54 = DAT_101dc1cb8;
    local_4c = 0x3f8000003f800000;
    local_44 = 0x3f800000;
    local_40 = 0;
    local_38 = 0;
    local_34 = 2;
    local_2b = 1;
    local_2c = 0;
    plVar6 = (long *)(param_1 + 0x10);
    plVar3 = plVar6;
    do {
      lVar5 = *plVar3;
      plVar3 = (long *)(lVar5 + 0x10);
    } while (*(int *)(*(long *)(lVar5 + 8) + 0xa4) != DAT_10184dd68);
    uVar2 = 0;
    if (*(long **)(lVar5 + 0x50) != (long *)0x0) {
      uVar2 = (**(code **)(**(long **)(lVar5 + 0x50) + 0x178))();
    }
    do {
      local_78 = uVar2;
      lVar5 = *plVar6;
      plVar6 = (long *)(lVar5 + 0x10);
      uVar2 = local_78;
    } while (*(int *)(*(long *)(lVar5 + 8) + 0xa4) != DAT_10184dd68);
    plVar3 = *(long **)(lVar5 + 0x50);
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 0xa0))(plVar3,&local_90);
    }
  }
  return;
}




void FUN_1003a6684(long param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  float fVar1;
  
  do {
    param_1 = *(long *)(param_1 + 0x10);
  } while (*(int *)(*(long *)(param_1 + 8) + 0xa4) != DAT_10184dd68);
  *param_4 = *(undefined4 *)(param_1 + 0x250);
  fVar1 = *(float *)(param_1 + 0x254);
  param_4[1] = fVar1;
  param_4[2] = *(undefined4 *)(param_1 + 600);
  param_4[1] = *(float *)(param_1 + 0x2ec) + fVar1;
  return;
}




void FUN_1003a66d0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  lVar1 = param_1;
  do {
    lVar1 = *(long *)(lVar1 + 0x10);
  } while (*(int *)(*(long *)(lVar1 + 8) + 0xa4) != DAT_10184dd68);
  fVar2 = *(float *)(lVar1 + 0x250);
  fVar3 = *(float *)(lVar1 + 0x254);
  fVar7 = *(float *)(lVar1 + 600);
  fVar4 = *(float *)(lVar1 + 0x2ec);
  fVar5 = *(float *)(lVar1 + 0x248);
  fVar8 = (float)*(undefined8 *)(lVar1 + 0x240);
  fVar9 = (float)((ulong)*(undefined8 *)(lVar1 + 0x240) >> 0x20);
  fVar6 = fVar8 * fVar8 + fVar9 * fVar9 + fVar5 * fVar5;
  if (1e-08 <= fVar6) {
    fVar6 = SQRT(fVar6);
    fVar8 = fVar8 / fVar6;
    fVar9 = fVar9 / fVar6;
    fVar5 = fVar5 / fVar6;
  }
  else {
    fVar8 = 1.0;
    fVar9 = 0.0;
    fVar5 = 0.0;
  }
  fVar6 = (float)FUN_10045f34c(param_1 + 0x220);
  *param_4 = CONCAT44(fVar4 + fVar3 + fVar9 * fVar6,fVar2 + fVar8 * fVar6);
  *(float *)(param_4 + 1) = fVar7 + fVar5 * fVar6;
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1003a67b4(long param_1)

{
  byte bVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined ***pppuVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined **local_818;
  undefined8 local_810;
  undefined8 uStack_808;
  undefined1 local_800;
  undefined4 local_7fc;
  undefined4 uStack_7f8;
  int local_7f4;
  undefined4 local_7f0;
  undefined4 local_7ec;
  undefined4 local_7e8;
  undefined8 local_7e4;
  undefined8 uStack_7dc;
  undefined8 local_7d0;
  undefined4 local_7c8;
  undefined **local_7c0;
  long local_7b8;
  undefined1 local_7b0;
  undefined4 local_7ac;
  float fStack_7a8;
  undefined4 local_7a4;
  undefined8 local_7a0;
  undefined8 uStack_798;
  float local_790;
  undefined8 local_78c;
  undefined8 uStack_784;
  undefined1 local_77c;
  undefined4 local_778;
  undefined8 local_774;
  undefined4 local_76c;
  undefined2 local_768;
  byte local_766;
  undefined **local_760;
  undefined8 local_758;
  undefined8 uStack_750;
  undefined1 local_748;
  undefined4 local_744;
  undefined4 uStack_740;
  int local_73c;
  undefined4 local_738;
  undefined4 local_734;
  undefined4 local_730;
  undefined8 local_72c;
  undefined8 local_724;
  undefined8 local_718;
  undefined4 local_710;
  undefined **local_708;
  undefined8 local_700;
  undefined8 uStack_6f8;
  undefined1 local_6f0;
  undefined4 local_6ec;
  undefined4 local_6e8;
  float local_6e4;
  undefined2 local_6e0;
  undefined1 local_6de;
  undefined4 local_6d8 [2];
  undefined **local_6d0 [3];
  undefined1 local_6b8;
  undefined4 local_6b4;
  undefined4 local_6b0;
  int local_6ac;
  undefined4 local_6a8;
  undefined4 local_6a4;
  undefined4 local_6a0;
  undefined8 local_69c;
  undefined8 local_694;
  undefined8 local_688;
  undefined4 local_680;
  long local_90;
  
  local_90 = *(long *)PTR____stack_chk_guard_101444218;
  if (DAT_101d23a38 != '\0') {
    lVar6 = *(long *)(param_1 + 0x10);
    while ((lVar6 != 0 && (*(int *)(*(long *)(lVar6 + 8) + 0xa4) != DAT_10184dd68))) {
      lVar6 = *(long *)(lVar6 + 0x10);
    }
    lVar7 = *(long *)(param_1 + 0x60);
    if (lVar7 != 0) {
      uVar5 = 0;
      while (uVar3 = FUN_10045fb10(lVar7), uVar5 < uVar3) {
        lVar7 = FUN_10045fa7c(lVar7,uVar5);
        if ((lVar7 != 0) && ((*(byte *)(lVar7 + 0x2f4) & 1) != 0)) {
          fVar10 = (float)FUN_1003dfe60(lVar6,1,4,0x19,0);
          fVar11 = (float)FUN_1003dfe60(lVar6,1,5,0x19,0);
          lVar7 = *(long *)(lVar6 + 0x40);
          fVar12 = *(float *)(lVar7 + 0x44) +
                   *(float *)(lVar7 + 0xf8) * (*(float *)(lVar7 + 0x260) + 1.0);
          NEON_fminnm(fVar12 + fVar12 * *(float *)(lVar7 + 0x1ac),_DAT_101e9432c);
          fVar11 = fVar11 * _DAT_101e9426c;
          fVar12 = (float)FUN_1003dfe60(lVar6,1,6,0x19,0);
          fVar13 = *(float *)(lVar7 + 0x40) +
                   *(float *)(lVar7 + 0xf4) * (*(float *)(lVar7 + 0x25c) + 1.0);
          NEON_fminnm(fVar13 + fVar13 * *(float *)(lVar7 + 0x1a8),DAT_101e94328);
          local_6e4 = fVar10 + fVar11 + fVar12 * DAT_101e94268;
          local_6ec = *(undefined4 *)(lVar6 + 0x260);
          local_700 = 0;
          uStack_6f8 = 0;
          local_6f0 = 0;
          local_708 = &PTR_FUN_101497218;
          local_6e8 = 3;
          local_6e0 = 0x100;
          local_6de = 0;
          FUN_100496328(&local_708,&DAT_101e47d30);
          puVar2 = PTR_s_Buff_Blackfeather_Talent_PointGu_10185a508;
          lVar7 = FUN_100345d90(*(undefined4 *)(lVar6 + 0x260));
          if ((lVar7 == 0) ||
             (iVar4 = FUN_1003a47d0(lVar7,puVar2), puVar2 = PTR_s_Buff_TalentSuiteStrong_10185a510,
             iVar4 == 0)) {
            puVar2 = PTR_s_Buff_Blackfeather_SlashBarrier_10185a518;
            uVar14 = *(undefined4 *)(lVar6 + 0x260);
            local_6a4 = FUN_1003dfe60(lVar6,1,9,0x19,0);
            local_6d0[1] = (undefined **)0x0;
            local_6d0[2] = (undefined **)0x0;
            local_6b8 = 0;
            local_6d0[0] = &PTR_FUN_101496b18;
            local_6ac = DAT_1018589d8;
            local_6a0 = 1;
            local_688 = 0;
            local_694 = 0;
            local_69c = 0;
            local_680 = DAT_101dc0b88;
            DAT_1018589d8 = DAT_1018589d8 + 1;
            local_6b4 = uVar14;
            local_6b0 = uVar14;
            local_6a8 = FUN_1003d4e0c(puVar2);
            FUN_10049639c(local_6d0,&DAT_101e47d30);
          }
          else {
            uVar14 = *(undefined4 *)(lVar6 + 0x260);
            local_6d0[0]._0_4_ = DAT_101d90a40;
            local_734 = FUN_1003dfee8(lVar6,local_6d0,1,9);
            local_758 = 0;
            uStack_750 = 0;
            local_748 = 0;
            local_760 = &PTR_FUN_101496b18;
            local_73c = DAT_1018589d8;
            local_730 = 1;
            local_718 = 0;
            local_724 = 0;
            local_72c = 0;
            local_710 = DAT_101dc0b88;
            DAT_1018589d8 = DAT_1018589d8 + 1;
            local_744 = uVar14;
            uStack_740 = uVar14;
            local_738 = FUN_1003d4e0c(puVar2);
            FUN_10049639c(&local_760,&DAT_101e47d30);
            uVar14 = *(undefined4 *)(lVar6 + 0x250);
            fVar11 = *(float *)(lVar6 + 0x254);
            uVar15 = *(undefined4 *)(lVar6 + 600);
            fVar10 = *(float *)(lVar6 + 0x2ec);
            local_7c0 = &PTR_FUN_101499960;
            local_7a0 = 0;
            uStack_798 = 0;
            uStack_784 = 0x3f800000bf800000;
            local_78c = 0xc0000000bf800000;
            local_77c = 0xff;
            local_774 = 0xffffffff;
            local_76c = 0xffffffff;
            local_7b0 = 1;
            lVar7 = FUN_1003e10f0();
            bVar1 = *(byte *)(lVar7 + 0xe5);
            local_778 = 1;
            local_6d0[0] = (undefined **)CONCAT44(local_6d0[0]._4_4_,DAT_101d90a40);
            local_7b8 = lVar6;
            local_790 = (float)FUN_1003dfee8(lVar6,local_6d0,2,9);
            local_790 = local_790 * local_790;
            local_766 = bVar1 | 0x14;
            local_768 = 0xc150;
            local_7ac = uVar14;
            fStack_7a8 = fVar10 + fVar11;
            local_7a4 = uVar15;
            uVar5 = FUN_1003a6ce4(&local_7c0,local_6d0,200,0);
            if (uVar5 != 0) {
              uVar8 = (ulong)uVar5;
              pppuVar9 = local_6d0;
              do {
                puVar2 = PTR_s_Buff_Blackfeather_SlashBarrier_10185a518;
                if (*pppuVar9 != (undefined **)0x0) {
                  uVar14 = *(undefined4 *)(lVar6 + 0x260);
                  uVar15 = *(undefined4 *)(*pppuVar9 + 0x4c);
                  local_6d8[0] = DAT_101d90a40;
                  local_7ec = FUN_1003dfee8(lVar6,local_6d8,1,9);
                  local_810 = 0;
                  uStack_808 = 0;
                  local_800 = 0;
                  local_818 = &PTR_FUN_101496b18;
                  local_7f4 = DAT_1018589d8;
                  local_7f0 = 0;
                  local_7e8 = 1;
                  local_7d0 = 0;
                  local_7e4 = 0;
                  uStack_7dc = 0;
                  local_7c8 = DAT_101dc0b88;
                  DAT_1018589d8 = DAT_1018589d8 + 1;
                  local_7fc = uVar14;
                  uStack_7f8 = uVar15;
                  local_7f0 = FUN_1003d4e0c(puVar2);
                  (*(code *)local_818[4])(&local_818,&DAT_101e47d30);
                }
                pppuVar9 = pppuVar9 + 1;
                uVar8 = uVar8 - 1;
              } while (uVar8 != 0);
            }
          }
          break;
        }
        uVar5 = uVar5 + 1;
        lVar7 = *(long *)(param_1 + 0x60);
        if (lVar7 == 0) break;
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_101444218 != local_90) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}




void FUN_1003a6c94(long param_1)

{
  if (*(long *)(param_1 + 0x60) != 0) {
    FUN_10045fb10();
    return;
  }
  return;
}




void FUN_1003a6ca4(long param_1)

{
  if (*(long *)(param_1 + 0x60) != 0) {
    FUN_10045fa7c();
    return;
  }
  return;
}




void FUN_1003a6cb4(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 8) = param_2;
  return;
}




void FUN_1003a6cbc(float param_1,long param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_3;
  *(undefined4 *)(param_2 + 0x1c) = *(undefined4 *)(param_3 + 1);
  *(undefined8 *)(param_2 + 0x14) = uVar1;
  *(float *)(param_2 + 0x30) = param_1 * param_1;
  *(ushort *)(param_2 + 0x58) = *(ushort *)(param_2 + 0x58) | 0x8000;
  return;
}




ulong FUN_1003a6ce4(long *param_1,undefined8 *param_2,uint param_3,long param_4)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 local_6b0 [200];
  long local_70;
  
  local_70 = *(long *)PTR____stack_chk_guard_101444218;
  uVar1 = FUN_1010a1958(local_6b0,200,DAT_10184dd68,0);
  uVar3 = 0;
  if (uVar1 != 0 && param_3 != 0) {
    uVar5 = 0;
    uVar3 = 0;
    puVar6 = param_2;
    do {
      uVar4 = local_6b0[uVar5];
      iVar2 = (**(code **)(*param_1 + 0x18))(param_1,uVar4);
      puVar7 = puVar6;
      if (iVar2 != 0) {
        puVar7 = puVar6 + 1;
        *puVar6 = uVar4;
        uVar3 = (ulong)((int)uVar3 + 1);
      }
      uVar5 = uVar5 + 1;
    } while ((uVar5 < uVar1) && (puVar6 = puVar7, (uint)uVar3 < param_3));
  }
  if (param_4 != 0) {
    uVar3 = FUN_10045d69c(param_4,param_2,uVar3);
  }
  if (*(long *)PTR____stack_chk_guard_101444218 == local_70) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_1003a6df0(long param_1,undefined8 param_2,float *param_3)

{
  float fVar1;
  
  do {
    param_1 = *(long *)(param_1 + 0x10);
  } while (*(int *)(*(long *)(param_1 + 8) + 0xa4) != DAT_10184dd68);
  fVar1 = (float)FUN_1003dfe60(param_1,2,3,0x19,0);
  *param_3 = fVar1 + 0.05;
  return;
}




void FUN_1003a6e5c(undefined8 param_1)

{
  FUN_1003dfe60(param_1,2,3,0x19,0);
  return;
}




void FUN_1003a6e70(undefined8 param_1,undefined8 param_2,float *param_3)

{
  float fVar1;
  
  fVar1 = (float)FUN_1003dfe60(param_2,2,3,0x19,0);
  *param_3 = fVar1 + 0.2;
  return;
}




void FUN_1003a6eb4(undefined8 param_1)

{
  FUN_1003dfe60(param_1,2,6,0x19,0);
  return;
}




void FUN_1003a6ec8(undefined8 param_1)

{
  FUN_1003dfe60(param_1,1,6,0x19,0);
  return;
}




void FUN_1003a6edc(undefined8 param_1)

{
  FUN_1003dfe60(param_1,1,7,0x19,0);
  return;
}




void FUN_1003a6ef0(undefined8 param_1)

{
  FUN_1003dfe60(param_1,1,4,0x19,0);
  return;
}




void FUN_1003a6f04(undefined8 param_1)

{
  FUN_1003dfe60(param_1,2,2,0x19,0);
  return;
}




void FUN_1003a6f18(undefined8 param_1)

{
  FUN_1003dfe60(param_1,3,5,0x19,0);
  return;
}




void FUN_1003a6f2c(undefined8 param_1)

{
  FUN_1003dfe60(param_1,3,2,0x19,0);
  return;
}




void FUN_1003a6f40(undefined8 param_1)

{
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d90a6c;
  FUN_1003dfee8(param_1,local_18,1,9);
  return;
}




void FUN_1003a6f74(undefined8 param_1)

{
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d90a6c;
  FUN_1003dfee8(param_1,local_18,0,9);
  return;
}




void FUN_1003a6fa8(undefined8 param_1)

{
  FUN_1003dfe60(param_1,3,3,0x19,0);
  return;
}




void FUN_1003a6fbc(undefined8 param_1)

{
  FUN_1003dfe60(param_1,3,6,0x19,0);
  return;
}




float FUN_1003a6fd0(float param_1)

{
  undefined8 uVar1;
  long lVar2;
  float fVar3;
  
  uVar1 = FUN_1010a1520();
  lVar2 = FUN_1010a0e0c(uVar1,0,"*KindredSoundBalance*",0);
  fVar3 = *(float *)(lVar2 + 4);
  uVar1 = FUN_1010a1520();
  lVar2 = FUN_1010a0e0c(uVar1,0,"*KindredSoundBalance*",0);
  return fVar3 + param_1 + *(float *)(lVar2 + 0x184);
}




void FUN_1003a7034(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 0x1e0);
  *param_2 = *(undefined8 *)(param_1 + 0x1d8);
  *(undefined4 *)(param_2 + 1) = uVar1;
  *(undefined4 *)(param_3 + 1) = 0x3f800000;
  *param_3 = 0;
  return;
}




void FUN_1003a7060(long param_1,undefined8 *param_2)

{
  float fVar1;
  
  fVar1 = *(float *)(param_1 + 0x1e0);
  *param_2 = *(undefined8 *)(param_1 + 0x1d8);
  *(float *)(param_2 + 1) = fVar1 + 1.5;
  return;
}




void FUN_1003a707c(long param_1,undefined8 *param_2)

{
  float fVar1;
  
  fVar1 = *(float *)(param_1 + 0x1e0);
  *param_2 = *(undefined8 *)(param_1 + 0x1d8);
  *(float *)(param_2 + 1) = fVar1 + -1.5;
  return;
}




void FUN_1003a7098(long param_1,float *param_2)

{
  float fVar1;
  
  fVar1 = *(float *)(param_1 + 0x1d8);
  *(undefined8 *)(param_2 + 1) = *(undefined8 *)(param_1 + 0x1dc);
  *param_2 = fVar1 + -1.5;
  return;
}




void FUN_1003a70b8(long param_1,float *param_2)

{
  float fVar1;
  
  fVar1 = *(float *)(param_1 + 0x1d8);
  *(undefined8 *)(param_2 + 1) = *(undefined8 *)(param_1 + 0x1dc);
  *param_2 = fVar1 + 1.5;
  return;
}




undefined8 FUN_1003a70d8(void)

{
  return 0x400;
}




bool FUN_1003a70e0(long param_1)

{
  int *piVar1;
  
  do {
    param_1 = *(long *)(param_1 + 0x10);
  } while (*(int *)(*(long *)(param_1 + 8) + 0xa4) != DAT_10184dd68);
  piVar1 = (int *)FUN_10034ede0(*(undefined4 *)(param_1 + 0x260),6);
  return *piVar1 != -0x7ee3623b && *piVar1 != 0;
}




void FUN_1003a7150(long param_1,undefined4 *param_2,undefined8 *param_3)

{
  int iVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined8 uVar9;
  float fVar10;
  undefined4 local_40;
  float local_3c;
  undefined4 uStack_38;
  
  lVar2 = *(long *)(param_1 + 0x10);
  iVar3 = *(int *)(*(long *)(lVar2 + 8) + 0xa4);
  lVar4 = lVar2;
  iVar1 = iVar3;
  while (iVar1 != DAT_10184dd68) {
    lVar4 = *(long *)(lVar4 + 0x10);
    iVar1 = *(int *)(*(long *)(lVar4 + 8) + 0xa4);
  }
  local_40 = *(undefined4 *)(lVar4 + 0x250);
  uStack_38 = *(undefined4 *)(lVar4 + 600);
  local_3c = *(float *)(lVar4 + 0x2ec) + *(float *)(lVar4 + 0x254);
  while (iVar3 != DAT_10184dd68) {
    lVar2 = *(long *)(lVar2 + 0x10);
    iVar3 = *(int *)(*(long *)(lVar2 + 8) + 0xa4);
  }
  fVar7 = *(float *)(lVar2 + 0x248);
  fVar10 = (float)*(undefined8 *)(lVar2 + 0x240);
  fVar6 = (float)((ulong)*(undefined8 *)(lVar2 + 0x240) >> 0x20);
  fVar8 = fVar10 * fVar10 + fVar6 * fVar6 + fVar7 * fVar7;
  if (1e-08 <= fVar8) {
    fVar8 = SQRT(fVar8);
    uVar9 = CONCAT44(fVar6 / fVar8,fVar10 / fVar8);
    fVar10 = fVar7 / fVar8;
  }
  else {
    uVar9 = 0x3f800000;
    fVar10 = 0.0;
  }
  uVar5 = FUN_1003a7268(0x41700000,&DAT_101d2ac34,&local_40,&local_40,DAT_1018589d8);
  *param_2 = uVar5;
  param_2[1] = fVar7;
  param_2[2] = fVar8;
  *param_3 = uVar9;
  *(float *)(param_3 + 1) = fVar10;
  return;
}




float FUN_1003a7268(float param_1,float *param_2,float *param_3,float *param_4,undefined8 param_5)

{
  bool bVar1;
  bool bVar2;
  short *psVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  ulong uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  
  FUN_1003e19b8(param_2,param_5);
  fVar14 = param_4[2];
  fVar13 = *param_2;
  fVar15 = 1.0 / fVar13;
  iVar4 = (int)((fVar14 - param_1) * fVar15);
  iVar5 = (int)((fVar14 + param_1) * fVar15);
  fVar12 = *param_3;
  if (iVar4 <= iVar5) {
    fVar16 = *param_4;
    iVar8 = (int)((fVar16 - param_1) * fVar15);
    iVar9 = (int)((fVar16 + param_1) * fVar15);
    fVar15 = fVar13 * 0.5;
    fVar17 = 3.4028235e+38;
    iVar6 = 0xffff;
    iVar7 = 0xffff;
    do {
      if (iVar8 <= iVar9) {
        fVar19 = fVar15 + (float)iVar4 * fVar13;
        fVar18 = fVar14 - fVar19;
        fVar19 = param_3[2] - fVar19;
        iVar10 = iVar8;
        do {
          fVar20 = fVar15 + (float)iVar10 * fVar13;
          fVar21 = fVar16 - fVar20;
          fVar20 = fVar12 - fVar20;
          fVar20 = fVar19 * fVar19 + fVar20 * fVar20;
          bVar2 = false;
          bVar1 = false;
          if (fVar18 * fVar18 + fVar21 * fVar21 <= param_1 * param_1) {
            bVar2 = false;
            bVar1 = true;
            if (!NAN(fVar20) && !NAN(fVar17 * fVar17)) {
              bVar2 = fVar20 < fVar17 * fVar17;
              bVar1 = false;
            }
          }
          if (bVar2 != bVar1) {
            uVar11 = (ulong)(uint)param_2[0x641];
            if (param_2[0x641] != 0.0) {
              bVar2 = false;
              psVar3 = (short *)((long)param_2 + 10);
              do {
                if (iVar10 == psVar3[-1]) {
                  bVar2 = (bool)(iVar4 == *psVar3 | bVar2);
                }
                psVar3 = psVar3 + 4;
                uVar11 = uVar11 - 1;
              } while (uVar11 != 0);
              if (bVar2) goto LAB_1003a7370;
            }
            fVar17 = SQRT(fVar20);
            iVar6 = iVar4;
            iVar7 = iVar10;
          }
LAB_1003a7370:
          bVar2 = iVar10 != iVar9;
          iVar10 = iVar10 + 1;
        } while (bVar2);
      }
      bVar2 = iVar4 != iVar5;
      iVar4 = iVar4 + 1;
    } while (bVar2);
    if ((iVar7 != 0xffff) && (iVar6 != 0xffff)) {
      fVar12 = param_2[0x641];
      param_2[(ulong)(uint)fVar12 * 2 + 1] = (float)param_5;
      *(short *)(param_2 + (ulong)(uint)fVar12 * 2 + 2) = (short)iVar7;
      *(short *)((long)param_2 + (ulong)(uint)fVar12 * 8 + 10) = (short)iVar6;
      param_2[0x641] = (float)((int)fVar12 + 1);
      fVar12 = fVar15 + (float)iVar7 * fVar13;
    }
  }
  return fVar12;
}




void FUN_1003a7428(undefined8 param_1,long param_2,float *param_3,undefined4 *param_4,
                  undefined4 *param_5)

{
  long lVar1;
  float fVar2;
  
  lVar1 = *(long *)(param_2 + 0x40);
  fVar2 = *(float *)(lVar1 + 0x38) + *(float *)(lVar1 + 0xec) * (*(float *)(lVar1 + 0x254) + 1.0);
  NEON_fminnm(fVar2 + fVar2 * *(float *)(lVar1 + 0x1a0),DAT_101e94320);
  *param_3 = DAT_101e94260 * 0.33;
  *param_4 = 0;
  *param_5 = 0;
  return;
}




void FUN_1003a7480(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  *param_3 = 0;
  *(undefined4 *)(param_3 + 1) = 0x41f00000;
  return;
}




void FUN_1003a7490(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  *param_3 = 0x23;
  return;
}




void FUN_1003a749c(long param_1)

{
  long lVar1;
  long *plVar2;
  undefined **local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined1 local_20;
  undefined4 local_1c;
  undefined4 uStack_18;
  
  if (DAT_101d23a38 != '\0') {
    do {
      param_1 = *(long *)(param_1 + 0x10);
    } while (*(int *)(*(long *)(param_1 + 8) + 0xa4) != DAT_10184dd68);
    plVar2 = (long *)(param_1 + 0x18);
    do {
      lVar1 = *plVar2;
      plVar2 = (long *)(lVar1 + 0x20);
    } while (*(int *)(*(long *)(lVar1 + 8) + 0xa4) != DAT_10184dab8);
    uStack_18 = *(undefined4 *)(lVar1 + (ulong)*(byte *)(lVar1 + 0x19a) * 4 + 0x158);
    local_1c = *(undefined4 *)(param_1 + 0x260);
    local_30 = 0;
    uStack_28 = 0;
    local_20 = 0;
    local_38 = &PTR_FUN_101496e60;
    FUN_100496428(&local_38,&DAT_101e47d30);
  }
  return;
}




void FUN_1003a7540(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  while ((lVar1 != 0 && (*(int *)(*(long *)(lVar1 + 8) + 0xa4) != DAT_10184dab8))) {
    lVar1 = *(long *)(lVar1 + 0x20);
  }
  return;
}




void FUN_1003a756c(undefined8 *param_1,undefined4 param_2,undefined4 param_3)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  *param_1 = &PTR_FUN_101496e60;
  *(undefined4 *)((long)param_1 + 0x1c) = param_2;
  *(undefined4 *)(param_1 + 4) = param_3;
  return;
}




void FUN_1003a7588(void)

{
  return;
}




undefined4 FUN_1003a758c(long param_1)

{
  int iVar1;
  long lVar2;
  undefined4 uVar3;
  
  do {
    param_1 = *(long *)(param_1 + 0x10);
  } while (*(int *)(*(long *)(param_1 + 8) + 0xa4) != DAT_10184dd68);
  lVar2 = *(long *)(param_1 + 0x18);
  while ((lVar2 != 0 && (*(int *)(*(long *)(lVar2 + 8) + 0xa4) != DAT_10184dab8))) {
    lVar2 = *(long *)(lVar2 + 0x20);
  }
  iVar1 = FUN_1003a7624();
  uVar3 = 0;
  if (iVar1 == 0) {
    uVar3 = 0x400;
  }
  return uVar3;
}




void FUN_1003a75f8(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  while ((lVar1 != 0 && (*(int *)(*(long *)(lVar1 + 8) + 0xa4) != DAT_10184dab8))) {
    lVar1 = *(long *)(lVar1 + 0x20);
  }
  return;
}




bool FUN_1003a7624(long param_1)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  
  uVar2 = (ulong)*(byte *)(param_1 + 0x198);
  if (uVar2 == 0) {
    bVar1 = false;
  }
  else {
    uVar3 = 0;
    bVar1 = true;
    do {
      lVar4 = *(long *)(param_1 + 0x50 + uVar3 * 8);
      lVar5 = *(long *)(lVar4 + 0x38);
      if (((*(char *)(lVar5 + 0x7c) != '\0') && (*(char *)(lVar5 + 0x8b) != '\0')) &&
         ((*(byte *)(lVar4 + 0x239) & 0x1c) != 0)) {
        return bVar1;
      }
      uVar3 = uVar3 + 1;
      bVar1 = uVar3 < uVar2;
    } while (uVar2 != uVar3);
  }
  return bVar1;
}




void FUN_1003a7680(undefined8 param_1,long param_2,float *param_3,undefined4 *param_4,
                  undefined4 *param_5)

{
  *param_3 = *(float *)(*(long *)(param_2 + 0x40) + 0x308) * 0.9;
  *param_4 = 0;
  *param_5 = 2;
  return;
}




undefined8
FUN_1003a76a8(undefined8 param_1,char *param_2,undefined8 *param_3,uint param_4,undefined8 *param_5,
             uint param_6,undefined8 param_7)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  byte bVar7;
  undefined8 uVar8;
  undefined8 local_70;
  undefined8 uStack_68;
  
  local_70 = 0;
  uStack_68 = 0;
  uVar3 = FUN_10000ef8c();
  FUN_1003a985c(&local_70,uVar3);
  lVar4 = FUN_10000dff8();
  FUN_1003a985c(&local_70,lVar4);
  *(undefined2 *)(lVar4 + 0x28) = 0x100;
  *(code **)(lVar4 + 0x30) = FUN_1003a24a0;
  FUN_1003a4e5c(lVar4 + 0x10,param_1);
  uVar2 = FUN_1004d2524("AttackToIdleCombat");
  uVar2 = FUN_100015208("AttackToIdleCombat",uVar2,0x12345678);
  *(undefined4 *)(lVar4 + 0x20) = uVar2;
  lVar4 = FUN_10000e524();
  FUN_1003a985c(&local_70,lVar4);
  uVar8 = *param_3;
  uVar3 = FUN_1010a1520();
  lVar5 = FUN_1010a0e0c(uVar3,0,"*KindredSoundBalance*",0);
  uVar2 = FUN_1003a798c(*(undefined4 *)(lVar5 + 0x224));
  *(undefined8 *)(lVar4 + 0x10) = uVar8;
  *(undefined2 *)(lVar4 + 0x30) = 0x1ff;
  *(undefined4 *)(lVar4 + 0x34) = 1;
  *(undefined4 *)(lVar4 + 0x3c) = uVar2;
  *(undefined4 *)(lVar4 + 0x40) = 0xffffffff;
  *(byte *)(lVar4 + 0x38) = *(byte *)(lVar4 + 0x38) & 0xf8 | 4;
  *(undefined8 *)(lVar4 + 0x48) = 0;
  if (1 < (int)param_4) {
    lVar5 = (ulong)param_4 - 1;
    bVar7 = 1;
    do {
      param_3 = param_3 + 1;
      *(undefined8 *)(lVar4 + (ulong)bVar7 * 8 + 0x10) = *param_3;
      bVar7 = bVar7 + 1;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
    *(byte *)(lVar4 + 0x31) = bVar7;
  }
  lVar4 = FUN_10000ceb8();
  FUN_1003a985c(&local_70,lVar4);
  *(undefined4 *)(lVar4 + 0x2c) = 0x3e99999a;
  *(code **)(lVar4 + 0x10) = FUN_1003a24a0;
  lVar4 = FUN_10000e1b4();
  FUN_1003a985c(&local_70,lVar4);
  *(undefined8 *)(lVar4 + 0x40) = 0;
  *(ushort *)(lVar4 + 0x80) = *(ushort *)(lVar4 + 0x80) & 0xffec | 2;
  *(uint *)(lVar4 + 0x3c) = (uint)lVar4 & 0xffff;
  *(undefined8 *)(lVar4 + 0x20) = 0;
  *(undefined8 *)(lVar4 + 0x28) = 1;
  if (param_2 == (char *)0x0) {
    uVar6 = 0;
  }
  else {
    uVar6 = 0x811c9dc5;
    cVar1 = *param_2;
    while (cVar1 != '\0') {
      param_2 = param_2 + 1;
      uVar6 = (uVar6 ^ (int)cVar1) * 0x1000193;
      cVar1 = *param_2;
    }
  }
  *(uint *)(lVar4 + 0x10) = uVar6;
  lVar4 = FUN_10000e524();
  FUN_1003a985c(&local_70,lVar4);
  uVar8 = *param_5;
  uVar3 = FUN_1010a1520();
  lVar5 = FUN_1010a0e0c(uVar3,0,"*KindredSoundBalance*",0);
  uVar2 = FUN_1003a798c(*(undefined4 *)(lVar5 + 0x224));
  *(undefined8 *)(lVar4 + 0x10) = uVar8;
  *(undefined2 *)(lVar4 + 0x30) = 0x1ff;
  *(undefined4 *)(lVar4 + 0x34) = 1;
  *(undefined4 *)(lVar4 + 0x3c) = uVar2;
  *(undefined4 *)(lVar4 + 0x40) = 0xffffffff;
  *(byte *)(lVar4 + 0x38) = *(byte *)(lVar4 + 0x38) & 0xf8 | 4;
  *(undefined8 *)(lVar4 + 0x48) = 0;
  if (1 < (int)param_6) {
    lVar5 = (ulong)param_6 - 1;
    bVar7 = 1;
    do {
      param_5 = param_5 + 1;
      *(undefined8 *)(lVar4 + (ulong)bVar7 * 8 + 0x10) = *param_5;
      bVar7 = bVar7 + 1;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
    *(byte *)(lVar4 + 0x31) = bVar7;
  }
  uVar3 = FUN_10000bc94();
  FUN_1003a985c(&local_70,uVar3);
  lVar4 = FUN_10000cae4();
  FUN_1003a985c(&local_70,lVar4);
  *(undefined8 *)(lVar4 + 0x10) = param_7;
  uVar3 = FUN_10000f034();
  FUN_1003a985c(&local_70,uVar3);
  return local_70;
}




float FUN_1003a798c(float param_1)

{
  undefined8 uVar1;
  long lVar2;
  float fVar3;
  
  uVar1 = FUN_1010a1520();
  lVar2 = FUN_1010a0e0c(uVar1,0,"*KindredSoundBalance*",0);
  fVar3 = *(float *)(lVar2 + 4);
  uVar1 = FUN_1010a1520();
  lVar2 = FUN_1010a0e0c(uVar1,0,"*KindredSoundBalance*",0);
  return fVar3 + param_1 + *(float *)(lVar2 + 0x21c);
}




void FUN_1003a79f0(undefined8 param_1)

{
  FUN_1003dfe60(param_1,0,2,0x19,0);
  return;
}




void FUN_1003a7a04(undefined8 param_1)

{
  FUN_1003dfe60(param_1,0,5,0x19,0);
  return;
}




bool FUN_1003a7a18(long param_1)

{
  int iVar1;
  
  iVar1 = 5;
  if (*(char *)(*(long *)(param_1 + 0x38) + 0x8d) != '\0') {
    iVar1 = 3;
  }
  return (*(uint *)(param_1 + 0x238) >> 10 & 7) !=
         iVar1 + *(int *)(*(long *)(param_1 + 0x38) + 0x78);
}




void FUN_1003a7a4c(undefined8 param_1)

{
  FUN_1003dfe60(param_1,0,3,0x19,0);
  return;
}




void FUN_1003a7a60(long param_1,undefined8 param_2,float *param_3)

{
  float fVar1;
  
  do {
    param_1 = *(long *)(param_1 + 0x10);
  } while (*(int *)(*(long *)(param_1 + 8) + 0xa4) != DAT_10184dd68);
  fVar1 = (float)FUN_1003dfe60(param_1,1,2,0x19,0);
  *param_3 = fVar1 + -0.2;
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1003a7ac4(long param_1)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  long lVar8;
  float fVar9;
  float fVar10;
  undefined8 uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined **local_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined1 local_150;
  undefined4 local_14c;
  float local_148;
  undefined4 local_144;
  undefined1 local_140;
  undefined **local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined1 local_120;
  undefined4 local_11c;
  undefined4 uStack_118;
  int local_114;
  undefined4 local_110;
  float local_10c;
  undefined4 local_108;
  undefined8 local_104;
  undefined8 uStack_fc;
  undefined8 local_f0;
  undefined4 local_e8;
  float local_e0;
  float fStack_dc;
  float local_d8;
  float local_d0;
  float fStack_cc;
  float local_c8;
  float fStack_c4;
  float local_c0;
  float fStack_bc;
  undefined4 local_b8;
  uint uStack_b4;
  undefined2 local_b0;
  
  if (DAT_101d23a38 != '\0') {
    lVar6 = *(long *)(param_1 + 0x10);
    while ((lVar6 != 0 && (*(int *)(*(long *)(lVar6 + 8) + 0xa4) != DAT_10184dd68))) {
      lVar6 = *(long *)(lVar6 + 0x10);
    }
    lVar8 = *(long *)(param_1 + 0x60);
    if (lVar8 != 0) {
      uVar7 = 0;
      fVar14 = *(float *)(lVar6 + 0x250);
      fVar9 = *(float *)(lVar6 + 0x254);
      fVar12 = *(float *)(lVar6 + 600);
      fVar13 = *(float *)(lVar6 + 0x2ec);
      do {
        uVar2 = FUN_10045fb10(lVar8);
        if (uVar2 <= uVar7) {
          return;
        }
        lVar8 = FUN_10045fa7c(lVar8,uVar7);
        if (((*(byte *)(lVar8 + 0x2f6) >> 5 & 1) != 0) &&
           (uVar4 = FUN_1003a7e54(lVar8,0x10), (uVar4 & 1) == 0)) {
          for (lVar5 = *(long *)(lVar8 + 0x18); lVar5 != 0; lVar5 = *(long *)(lVar5 + 0x20)) {
            if (*(int *)(*(long *)(lVar5 + 8) + 0xa4) == ram0x0001018672a0) {
              if (*(long *)(lVar5 + 0x18) != 0) goto LAB_1003a7e18;
              break;
            }
          }
          fVar23 = *(float *)(lVar8 + 0x250);
          fVar15 = *(float *)(lVar8 + 600);
          fVar21 = *(float *)(lVar8 + 0x2ec) + *(float *)(lVar8 + 0x254);
          fVar16 = fVar14 - fVar23;
          fVar18 = (fVar13 + fVar9) - fVar21;
          fVar19 = fVar12 - fVar15;
          fVar22 = fVar16 * fVar16 + fVar19 * fVar19 + fVar18 * fVar18;
          fVar20 = SQRT(fVar22);
          fVar10 = (float)FUN_1003dfe60(lVar6,1,3,0x19,0);
          puVar1 = PTR_s_Buff_Phinn_Talent_ExtraPolite_10185a670;
          fVar10 = fVar20 * fVar10;
          lVar5 = FUN_100345d90(*(undefined4 *)(lVar6 + 0x260));
          fVar17 = fVar10;
          if (lVar5 != 0) {
            iVar3 = FUN_1003a47d0(lVar5,puVar1);
            fVar17 = fVar10 + fVar10;
            if (iVar3 == 0) {
              fVar17 = fVar10;
            }
          }
          if (1e-08 <= fVar22) {
            fVar20 = 1.0 / fVar20;
            fVar16 = fVar16 * fVar20;
            fVar18 = fVar18 * fVar20;
            fVar19 = fVar19 * fVar20;
          }
          else {
            fVar16 = 1.0;
            fVar18 = 0.0;
            fVar19 = 0.0;
          }
          lVar5 = *(long *)(lVar8 + 0x18);
          uStack_b4 = 0;
          if (lVar5 != 0) {
            do {
              if (*(int *)(*(long *)(lVar5 + 8) + 0xa4) == ram0x0001018672a0) {
                uStack_b4 = *(byte *)(lVar5 + 0x818) >> 3 & 3;
                goto LAB_1003a7cd8;
              }
              lVar5 = *(long *)(lVar5 + 0x20);
            } while (lVar5 != 0);
            uStack_b4 = 0;
          }
LAB_1003a7cd8:
          fStack_c4 = fVar23 + fVar17 * fVar16;
          local_c0 = fVar21 + fVar17 * fVar18;
          fStack_bc = fVar15 + fVar17 * fVar19;
          local_b8 = 0;
          local_b0 = 0;
          local_d0 = fVar23;
          fStack_cc = fVar21;
          local_c8 = fVar15;
          FUN_1003a7f34(&local_d0,&local_e0,0);
          uVar11 = FUN_1003dfe60(lVar6,1,4,0x19,0);
          local_11c = *(undefined4 *)(lVar6 + 0x260);
          uStack_118 = *(undefined4 *)(lVar8 + 0x260);
          local_130 = 0;
          uStack_128 = 0;
          local_120 = 0;
          local_138 = &PTR_FUN_101496b18;
          fVar17 = SQRT((local_e0 - fVar23) * (local_e0 - fVar23) +
                        (fStack_dc - fVar21) * (fStack_dc - fVar21) +
                        (local_d8 - fVar15) * (local_d8 - fVar15)) / (float)uVar11;
          local_114 = DAT_1018589d8;
          local_110 = 0;
          local_108 = 1;
          local_f0 = 0;
          local_104 = 0;
          uStack_fc = 0;
          local_e8 = DAT_101dc0b88;
          DAT_1018589d8 = DAT_1018589d8 + 1;
          local_10c = fVar17;
          local_110 = FUN_1003d4e0c(PTR_s_Buff_DisplacementLock_10185a678);
          (*(code *)local_138[4])(&local_138,&DAT_101e47d30);
          FUN_1000f3e04(uVar11,lVar8,&local_e0,1);
          local_14c = *(undefined4 *)(lVar8 + 0x260);
          local_160 = 0;
          uStack_158 = 0;
          local_150 = 0;
          local_168 = &PTR_FUN_101496b50;
          local_148 = 1.0 / fVar17;
          local_144 = 0x3f000000;
          local_140 = 1;
          FUN_100496494(&local_168,&DAT_101e47d30);
        }
LAB_1003a7e18:
        uVar7 = uVar7 + 1;
        lVar8 = *(long *)(param_1 + 0x60);
      } while (lVar8 != 0);
    }
  }
  return;
}




void FUN_1003a7e54(undefined8 param_1,byte param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long local_128 [32];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_101444218;
  uVar2 = FUN_1010a0218(param_1,local_128,0x20,DAT_1018673b0);
  if ((int)uVar2 != 0) {
    if ((*(byte *)(local_128[0] + 0x46) & param_2) == 0) {
      uVar1 = 1;
      do {
        uVar3 = uVar1;
        if ((uVar2 & 0xffffffff) == uVar3) break;
        uVar1 = uVar3 + 1;
      } while ((*(byte *)(local_128[uVar3] + 0x46) & param_2) == 0);
      uVar2 = (ulong)(uVar3 < (uVar2 & 0xffffffff));
    }
    else {
      uVar2 = 1;
    }
  }
  if (*(long *)PTR____stack_chk_guard_101444218 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(uVar2);
}




void FUN_1003a7f08(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar2 = *param_2;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *param_1 = uVar2;
  uVar1 = *(undefined4 *)(param_3 + 1);
  *(undefined8 *)((long)param_1 + 0xc) = *param_3;
  *(undefined4 *)((long)param_1 + 0x14) = uVar1;
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined4 *)((long)param_1 + 0x1c) = param_4;
  *(undefined2 *)(param_1 + 4) = 0;
  return;
}




void FUN_1003a7f34(undefined8 *param_1,undefined8 *param_2,byte *param_3)

{
  bool bVar1;
  bool bVar2;
  byte bVar3;
  int iVar4;
  ulong uVar5;
  undefined8 uVar6;
  float *pfVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined8 uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float local_a4;
  undefined8 local_a0;
  float local_98;
  undefined8 local_90;
  float local_88;
  undefined8 local_80;
  float local_78;
  undefined8 local_70;
  undefined4 local_68;
  
  local_70 = 0x412000003e800000;
  pfVar7 = (float *)((long)param_1 + 0xc);
  local_68 = 0x3e800000;
  fVar8 = (float)*param_1;
  fVar13 = (float)*(undefined8 *)pfVar7 - fVar8;
  fVar12 = (float)((ulong)*param_1 >> 0x20);
  fVar14 = (float)((ulong)*(undefined8 *)pfVar7 >> 0x20) - fVar12;
  fVar15 = *(float *)((long)param_1 + 0x14) - *(float *)(param_1 + 1);
  fVar9 = fVar13 * fVar13 + fVar14 * fVar14 + fVar15 * fVar15;
  if (fVar9 < 0.1) {
    uVar6 = *(undefined8 *)pfVar7;
    *(undefined4 *)(param_2 + 1) = *(undefined4 *)((long)param_1 + 0x14);
    *param_2 = uVar6;
    return;
  }
  local_80 = *(undefined8 *)pfVar7;
  local_78 = *(float *)((long)param_1 + 0x14);
  fVar10 = *(float *)(param_1 + 3);
  if (1.1920929e-07 <= ABS(fVar10)) {
    fVar9 = SQRT(fVar9);
    bVar1 = false;
    bVar2 = false;
    if (fVar9 < ABS(fVar10)) {
      bVar1 = false;
      bVar2 = true;
      if (!NAN(fVar10)) {
        bVar1 = fVar10 < 0.0;
        bVar2 = false;
      }
    }
    fVar16 = -fVar9;
    if (bVar1 == bVar2 || *(char *)((long)param_1 + 0x21) != '\0') {
      fVar16 = fVar10;
    }
    fVar13 = (fVar13 * fVar16) / fVar9 + (float)local_80;
    fVar14 = (fVar14 * fVar16) / fVar9 + (float)((ulong)local_80 >> 0x20);
    local_80 = CONCAT44(fVar14,fVar13);
    local_78 = (fVar16 * fVar15) / fVar9 + local_78;
    fVar13 = fVar13 - fVar8;
    fVar14 = fVar14 - fVar12;
    fVar15 = local_78 - *(float *)(param_1 + 1);
  }
  local_90 = local_80;
  local_88 = local_78;
  if (*(char *)(param_1 + 4) == '\0') {
    local_a0 = local_a0 & 0xffffffff00000000;
    bVar3 = FUN_10054e09c(*(undefined4 *)((long)param_1 + 0x1c),param_1,&local_80,&local_a0,0,
                          &local_70);
    if (param_3 != (byte *)0x0) {
      *param_3 = bVar3 ^ 1;
    }
    local_90 = local_80;
    local_88 = local_78;
    if ((bVar3 & 1) == 0) {
      local_90 = CONCAT44((float)((ulong)*param_1 >> 0x20) + fVar14 * (float)local_a0,
                          (float)*param_1 + fVar13 * (float)local_a0);
      local_88 = *(float *)(param_1 + 1) + fVar15 * (float)local_a0;
    }
  }
  else {
    uVar5 = FUN_10054e044(*(undefined4 *)((long)param_1 + 0x1c),&local_80,&local_90,&local_70);
    if ((uVar5 & 1) == 0) {
      if ((((1.1920929e-07 <= ABS((float)local_90 - *pfVar7)) ||
           (1.1920929e-07 <= ABS(local_90._4_4_ - *(float *)(param_1 + 2)))) ||
          (1.1920929e-07 <= ABS(local_88 - *(float *)((long)param_1 + 0x14)))) &&
         (uVar5 = FUN_10054e044(*(undefined4 *)((long)param_1 + 0x1c),pfVar7,&local_a0,&local_70),
         (uVar5 & 1) != 0)) {
        FUN_10054e09c(*(undefined4 *)((long)param_1 + 0x1c),&local_a0,&local_80,&local_a4,0,
                      &local_70);
        fVar8 = (float)(local_a0 >> 0x20);
        local_90 = CONCAT44(fVar8 + ((float)((ulong)local_80 >> 0x20) - fVar8) * local_a4,
                            (float)local_a0 + ((float)local_80 - (float)local_a0) * local_a4);
        local_88 = local_98 + local_a4 * (local_78 - local_98);
        uVar5 = FUN_10054e044(*(undefined4 *)((long)param_1 + 0x1c),&local_90,&local_90,&local_70);
        if ((uVar5 & 1) != 0) goto LAB_1003a821c;
      }
      uVar6 = *param_1;
      fVar9 = (float)local_90 - (float)uVar6;
      fVar13 = (float)((ulong)local_90 >> 0x20) - (float)((ulong)uVar6 >> 0x20);
      fVar8 = *(float *)(param_1 + 1);
      fVar14 = local_88 - fVar8;
      fVar12 = SQRT(fVar9 * fVar9 + fVar13 * fVar13 + fVar14 * fVar14);
      if (fVar12 <= 3.0) {
LAB_1003a8274:
        uVar6 = *param_1;
        *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_1 + 1);
        *param_2 = uVar6;
        goto LAB_1003a822c;
      }
      uVar11 = NEON_fmov(0x3f800000,4);
      fVar15 = (float)uVar11 / fVar12;
      fVar10 = (float)((ulong)uVar11 >> 0x20) / fVar12;
      fVar16 = 1.0 / fVar12;
      while( true ) {
        fVar12 = fVar12 + -3.0;
        local_a0 = CONCAT44((float)((ulong)uVar6 >> 0x20) + fVar10 * fVar13 * fVar12,
                            (float)uVar6 + fVar15 * fVar9 * fVar12);
        local_98 = fVar8 + fVar16 * fVar12 * fVar14;
        iVar4 = FUN_10054e044(*(undefined4 *)((long)param_1 + 0x1c),&local_a0,0,&local_70);
        if (iVar4 != 0) break;
        if (fVar12 <= 3.0) goto LAB_1003a8274;
        uVar6 = *param_1;
        fVar8 = *(float *)(param_1 + 1);
      }
      local_a4 = 0.0;
      FUN_10054e09c(*(undefined4 *)((long)param_1 + 0x1c),&local_a0,&local_90,&local_a4,0,&local_70)
      ;
      fVar8 = (float)(local_a0 >> 0x20);
      local_90 = CONCAT44(fVar8 + ((float)((ulong)local_90 >> 0x20) - fVar8) * local_a4,
                          (float)local_a0 + ((float)local_90 - (float)local_a0) * local_a4);
      local_88 = local_98 + local_a4 * (local_88 - local_98);
    }
  }
LAB_1003a821c:
  *param_2 = local_90;
  *(float *)(param_2 + 1) = local_88;
LAB_1003a822c:
  local_a0 = (ulong)local_a0._4_4_ << 0x20;
  iVar4 = FUN_10054e07c(*(undefined4 *)((long)param_1 + 0x1c),param_2,&local_a0,0,&local_70);
  if (iVar4 != 0) {
    *(float *)((long)param_2 + 4) = (float)local_a0;
  }
  return;
}




void FUN_1003a82d8(undefined4 param_1,undefined4 param_2,undefined8 *param_3,undefined4 param_4,
                  undefined1 param_5)

{
  param_3[1] = 0;
  param_3[2] = 0;
  *(undefined1 *)(param_3 + 3) = 0;
  *param_3 = &PTR_FUN_101496b50;
  *(undefined4 *)((long)param_3 + 0x1c) = param_4;
  *(undefined4 *)(param_3 + 4) = param_1;
  *(undefined4 *)((long)param_3 + 0x24) = param_2;
  *(undefined1 *)(param_3 + 5) = param_5;
  return;
}




void FUN_1003a8300(void)

{
  return;
}




long FUN_1003a8304(undefined8 param_1,undefined8 param_2)

{
  byte bVar1;
  bool bVar2;
  long lVar3;
  
  lVar3 = FUN_1003e10f0();
  bVar1 = *(byte *)(lVar3 + 0xe5);
  lVar3 = FUN_10000ed74();
  FUN_1003a985c(param_1,lVar3);
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
  *(undefined8 *)(lVar3 + 0x58) = 0xffffffff00000001;
  *(byte *)(lVar3 + 0x6a) = bVar1 | 0x14;
  *(undefined2 *)(lVar3 + 0x68) = 0x4110;
  bVar2 = DAT_101d23a38 != '\0';
  *(undefined8 *)(lVar3 + 0x78) = param_2;
  *(byte *)(lVar3 + 0xa8) = *(byte *)(lVar3 + 0xa8) & 0xf0 | bVar2;
  return lVar3;
}




void FUN_1003a83c8(undefined8 param_1)

{
  FUN_1003dfe60(param_1,1,9,0x19,0);
  return;
}




long FUN_1003a83dc(undefined8 param_1,long param_2)

{
  ushort uVar1;
  ushort uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  lVar3 = FUN_10000c838();
  FUN_1003a985c(param_1,lVar3);
  uVar2 = *(ushort *)(lVar3 + 0x58);
  uVar1 = *(ushort *)(param_2 + 0x58) & 0xf;
  *(ushort *)(lVar3 + 0x58) = uVar2 & 0xfff0 | uVar1;
  *(ushort *)(lVar3 + 0x58) = uVar2 & 0xf000 | uVar1 | *(ushort *)(param_2 + 0x58) & 0xff0;
  uVar5 = *(undefined8 *)(param_2 + 0x48);
  uVar4 = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(lVar3 + 0x50) = *(undefined8 *)(param_2 + 0x50);
  *(undefined8 *)(lVar3 + 0x48) = uVar5;
  *(undefined8 *)(lVar3 + 0x40) = uVar4;
  return lVar3;
}




void FUN_1003a8450(undefined8 param_1)

{
  FUN_1003dfe60(param_1,1,5,0x19,0);
  return;
}




long FUN_1003a8464(undefined8 param_1,undefined8 param_2)

{
  byte bVar1;
  bool bVar2;
  long lVar3;
  
  lVar3 = FUN_1003e10f0();
  bVar1 = *(byte *)(lVar3 + 0xe5);
  lVar3 = FUN_10000ed74();
  FUN_1003a985c(param_1,lVar3);
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
  *(undefined8 *)(lVar3 + 0x78) = param_2;
  *(byte *)(lVar3 + 0xa8) = *(byte *)(lVar3 + 0xa8) & 0xf0 | bVar2;
  return lVar3;
}




void FUN_1003a8528(long param_1,undefined8 param_2,float *param_3)

{
  float fVar1;
  
  do {
    param_1 = *(long *)(param_1 + 0x10);
  } while (*(int *)(*(long *)(param_1 + 8) + 0xa4) != DAT_10184dd68);
  fVar1 = (float)FUN_1003dfe60(param_1,2,2,0x19,0);
  *param_3 = fVar1 + -0.49;
  return;
}




void FUN_1003a858c(undefined8 param_1)

{
  FUN_1003dfe60(param_1,2,2,0x19,0);
  return;
}




float FUN_1003a85a0(undefined8 param_1)

{
  float fVar1;
  
  fVar1 = (float)FUN_1003dfe60(param_1,2,4,0x19,0);
  return fVar1 + 0.2;
}




undefined8 FUN_1003a85d0(undefined8 param_1,char *param_2,char *param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  undefined8 local_60;
  undefined8 uStack_58;
  
  local_60 = 0;
  uStack_58 = 0;
  uVar7 = 0x811c9dc5;
  uVar2 = FUN_10000ef8c();
  FUN_1003a985c(&local_60,uVar2);
  lVar3 = FUN_10000dff8();
  FUN_1003a985c(&local_60,lVar3);
  *(undefined2 *)(lVar3 + 0x28) = 0x100;
  *(code **)(lVar3 + 0x30) = FUN_1003a24a0;
  FUN_1003a4e5c(lVar3 + 0x10,param_1);
  uVar1 = FUN_1004d2524("AttackToIdleCombat");
  uVar1 = FUN_100015208("AttackToIdleCombat",uVar1,0x12345678);
  *(undefined4 *)(lVar3 + 0x20) = uVar1;
  lVar3 = FUN_10000e524();
  FUN_1003a985c(&local_60,lVar3);
  uVar2 = FUN_1010a1520();
  lVar4 = FUN_1010a0e0c(uVar2,0,"*KindredSoundBalance*",0);
  uVar1 = FUN_1003a8878(*(undefined4 *)(lVar4 + 0x36c));
  *(char **)(lVar3 + 0x10) = "Sound_Flicker_basic_Attack_1";
  *(undefined2 *)(lVar3 + 0x30) = 0x1ff;
  *(undefined4 *)(lVar3 + 0x34) = 1;
  *(undefined4 *)(lVar3 + 0x3c) = uVar1;
  *(undefined4 *)(lVar3 + 0x40) = 0xffffffff;
  *(byte *)(lVar3 + 0x38) = *(byte *)(lVar3 + 0x38) & 0xf8 | 4;
  *(undefined8 *)(lVar3 + 0x48) = 0;
  lVar3 = FUN_10000e1b4();
  FUN_1003a985c(&local_60,lVar3);
  *(undefined8 *)(lVar3 + 0x40) = 0;
  *(ushort *)(lVar3 + 0x80) = *(ushort *)(lVar3 + 0x80) & 0xffef | 3;
  *(uint *)(lVar3 + 0x3c) = (uint)lVar3 & 0xffff;
  *(undefined8 *)(lVar3 + 0x20) = 0;
  *(undefined8 *)(lVar3 + 0x28) = 0x3ecccccd00000003;
  if (param_2 == (char *)0x0) {
    uVar6 = 0;
  }
  else {
    cVar5 = *param_2;
    uVar6 = 0x811c9dc5;
    if (cVar5 != '\0') {
      uVar6 = 0x811c9dc5;
      do {
        param_2 = param_2 + 1;
        uVar6 = (uVar6 ^ (int)cVar5) * 0x1000193;
        cVar5 = *param_2;
      } while (cVar5 != '\0');
    }
  }
  *(uint *)(lVar3 + 0x10) = uVar6;
  *(char **)(lVar3 + 0x18) = "Bone_Lantern";
  lVar3 = FUN_10000ceb8();
  FUN_1003a985c(&local_60,lVar3);
  *(undefined4 *)(lVar3 + 0x2c) = 0x3e99999a;
  *(code **)(lVar3 + 0x10) = FUN_1003a24a0;
  lVar3 = FUN_10000e1b4();
  FUN_1003a985c(&local_60,lVar3);
  *(undefined8 *)(lVar3 + 0x40) = 0;
  *(ushort *)(lVar3 + 0x80) = *(ushort *)(lVar3 + 0x80) & 0xffec | 2;
  *(uint *)(lVar3 + 0x3c) = (uint)lVar3 & 0xffff;
  *(undefined8 *)(lVar3 + 0x20) = 0;
  *(undefined8 *)(lVar3 + 0x28) = 1;
  if (param_3 == (char *)0x0) {
    uVar7 = 0;
  }
  else {
    cVar5 = *param_3;
    while (cVar5 != '\0') {
      param_3 = param_3 + 1;
      uVar7 = (uVar7 ^ (int)cVar5) * 0x1000193;
      cVar5 = *param_3;
    }
  }
  *(uint *)(lVar3 + 0x10) = uVar7;
  uVar2 = FUN_10000bc94();
  FUN_1003a985c(&local_60,uVar2);
  lVar3 = FUN_10000cae4();
  FUN_1003a985c(&local_60,lVar3);
  *(undefined8 *)(lVar3 + 0x10) = param_4;
  uVar2 = FUN_10000c784();
  FUN_1003a985c(&local_60,uVar2);
  uVar2 = FUN_10000f034();
  FUN_1003a985c(&local_60,uVar2);
  return local_60;
}




float FUN_1003a8878(float param_1)

{
  undefined8 uVar1;
  long lVar2;
  float fVar3;
  
  uVar1 = FUN_1010a1520();
  lVar2 = FUN_1010a0e0c(uVar1,0,"*KindredSoundBalance*",0);
  fVar3 = *(float *)(lVar2 + 4);
  uVar1 = FUN_1010a1520();
  lVar2 = FUN_1010a0e0c(uVar1,0,"*KindredSoundBalance*",0);
  return fVar3 + param_1 + *(float *)(lVar2 + 0x368);
}




void FUN_1003a88dc(undefined8 param_1)

{
  FUN_1003dfe60(param_1,0,6,0x19,0);
  return;
}




void FUN_1003a88f0(undefined8 param_1)

{
  FUN_1003dfe60(param_1,1,5,0x19,0);
  return;
}




void FUN_1003a8904(undefined8 param_1)

{
  FUN_1003dfe60(param_1,1,3,0x19,0);
  return;
}




void FUN_1003a8918(undefined8 param_1)

{
  FUN_1003dfe60(param_1,2,6,0x19,0);
  return;
}




void FUN_1003a892c(undefined8 param_1)

{
  FUN_1003dfe60(param_1,2,4,0x19,0);
  return;
}




float FUN_1003a8940(float param_1)

{
  undefined8 uVar1;
  long lVar2;
  float fVar3;
  
  uVar1 = FUN_1010a1520();
  lVar2 = FUN_1010a0e0c(uVar1,0,"*KindredSoundBalance*",0);
  fVar3 = *(float *)(lVar2 + 4);
  uVar1 = FUN_1010a1520();
  lVar2 = FUN_1010a0e0c(uVar1,0,"*KindredSoundBalance*",0);
  return fVar3 + param_1 + *(float *)(lVar2 + 0x1c8);
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1003a89a4(long param_1,long param_2,undefined4 *param_3,float *param_4)

{
  undefined *puVar1;
  byte bVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  float local_98;
  float local_90;
  float fStack_8c;
  float local_88;
  
  puVar1 = PTR_s_Buff_Fortress_Talent_Longtooth_10185a6b8;
  lVar4 = FUN_100345d90(*(undefined4 *)(param_2 + 0x260));
  if (lVar4 == 0) {
    uVar6 = 0x41900000;
  }
  else {
    iVar3 = FUN_1003a47d0(lVar4,puVar1);
    uVar6 = 0x41c00000;
    if (iVar3 == 0) {
      uVar6 = 0x41900000;
    }
  }
  *param_3 = uVar6;
  fVar13 = *(float *)(param_2 + 0x250);
  fVar12 = *(float *)(param_2 + 600);
  fVar14 = *(float *)(param_2 + 0x2ec) + *(float *)(param_2 + 0x254);
  fVar15 = *(float *)(param_1 + 0x1d8);
  fVar16 = *(float *)(param_1 + 0x1dc);
  fVar17 = *(float *)(param_1 + 0x1e0);
  plVar5 = *(long **)(param_1 + 0x1c8);
  fVar10 = 2.0;
  fVar11 = 0.0;
  if (plVar5 == (long *)0x0) goto LAB_1003a8afc;
  if (*(int *)(param_1 + 0x1d0) == (int)plVar5[1]) {
    lVar4 = (**(code **)(*plVar5 + 0x10))();
    if (lVar4 == 0) {
      fVar10 = 2.0;
    }
    else {
      lVar4 = (**(code **)(**(long **)(param_1 + 0x1c8) + 0x10))();
      fVar10 = 2.0;
      if ((*(byte *)(lVar4 + 0x2f4) & 1) != 0) {
        fVar10 = 1.3;
      }
    }
    plVar5 = *(long **)(param_1 + 0x1c8);
    fVar11 = 0.0;
    if (plVar5 == (long *)0x0) goto LAB_1003a8afc;
    if (*(int *)(param_1 + 0x1d0) == (int)plVar5[1]) {
      lVar4 = (**(code **)(*plVar5 + 0x10))();
      if (lVar4 == 0) {
        fVar11 = 0.0;
      }
      else {
        lVar4 = (**(code **)(**(long **)(param_1 + 0x1c8) + 0x10))();
        fVar11 = 0.0;
        if ((*(byte *)(lVar4 + 0x2f5) & 0x10) != 0) {
          fVar11 = 0.5;
        }
      }
      goto LAB_1003a8afc;
    }
  }
  *(undefined8 *)(param_1 + 0x1c8) = 0;
  *(undefined4 *)(param_1 + 0x1d0) = DAT_101dc0b88;
  fVar11 = 0.0;
LAB_1003a8afc:
  fVar9 = fVar13 - fVar15;
  fVar8 = fVar14 - fVar16;
  fVar7 = fVar12 - fVar17;
  fVar18 = fVar9 * fVar9 + fVar8 * fVar8 + fVar7 * fVar7;
  if (fVar18 <= 0.01) {
    *param_4 = fVar13;
    param_4[1] = fVar14;
    param_4[2] = fVar12;
  }
  else {
    fVar11 = fVar11 + fVar10;
    fVar10 = 1.0 / SQRT(fVar18);
    fVar9 = fVar11 * fVar9 * fVar10;
    fVar8 = fVar11 * fVar8 * fVar10;
    fVar10 = fVar11 * fVar7 * fVar10;
    local_90 = fVar9 + fVar15;
    fStack_8c = fVar8 + fVar16;
    local_88 = fVar10 + fVar17;
    local_b0 = 0x4000000040000000;
    local_a8 = 0x40000000;
    for (lVar4 = *(long *)(param_2 + 0x18); lVar4 != 0; lVar4 = *(long *)(lVar4 + 0x20)) {
      if (*(int *)(*(long *)(lVar4 + 8) + 0xa4) == ram0x0001018672a0) {
        bVar2 = *(byte *)(lVar4 + 0x818) >> 3 & 3;
        goto LAB_1003a8bb8;
      }
    }
    bVar2 = 0;
LAB_1003a8bb8:
    iVar3 = FUN_10054e044(bVar2,&local_90,&local_a0,&local_b0);
    if ((iVar3 == 0) || (fVar18 <= fVar9 * fVar9 + fVar8 * fVar8 + fVar10 * fVar10)) {
      *param_4 = fVar13;
      param_4[1] = fVar14;
      param_4[2] = fVar12;
    }
    else {
      *(undefined8 *)param_4 = local_a0;
      param_4[2] = local_98;
    }
  }
  return;
}




void FUN_1003a8c34(undefined8 param_1,long param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float local_50;
  float fStack_4c;
  float local_48;
  float local_44;
  
  fVar3 = *(float *)(param_2 + 0x250);
  fVar1 = *(float *)(param_2 + 0x254);
  fVar4 = *(float *)(param_2 + 600);
  fVar2 = *(float *)(param_2 + 0x2ec);
  FUN_1003a89a4(param_1,param_2,&local_44,&local_50);
  fVar3 = fVar3 - local_50;
  fStack_4c = (fVar2 + fVar1) - fStack_4c;
  fVar4 = fVar4 - local_48;
  *param_3 = SQRT(fVar3 * fVar3 + fStack_4c * fStack_4c + fVar4 * fVar4) / local_44;
  return;
}




void FUN_1003a8cb8(undefined8 param_1)

{
  FUN_1003dfe60(param_1,0,4,0x19,0);
  return;
}




void FUN_1003a8ccc(undefined8 param_1)

{
  FUN_1003dfe60(param_1,1,7,1,1);
  return;
}




void FUN_1003a8ce0(long param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined **local_90;
  undefined8 uStack_88;
  undefined4 local_80;
  float fStack_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined1 local_70;
  undefined **local_68;
  undefined8 uStack_60;
  undefined2 local_58;
  undefined1 local_56;
  long local_50 [5];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_101444218;
  do {
    param_1 = *(long *)(param_1 + 0x10);
  } while (*(int *)(*(long *)(param_1 + 8) + 0xa4) != DAT_10184dd68);
  local_68 = &PTR_FUN_1014998d0;
  uStack_60 = 0;
  iVar1 = FUN_10034e738(*(undefined4 *)(param_1 + 0x260));
  local_56 = 1;
  if (iVar1 == 1) {
    local_56 = 2;
  }
  local_58 = 0xffff;
  local_80 = *(undefined4 *)(param_1 + 0x250);
  local_78 = *(undefined4 *)(param_1 + 600);
  fStack_7c = *(float *)(param_1 + 0x2ec) + *(float *)(param_1 + 0x254);
  local_90 = &PTR_FUN_101499a08;
  uStack_88 = 0;
  local_74 = 1000;
  local_70 = 1;
  uVar2 = FUN_1003a6ce4(&local_68,local_50,5,&local_90);
  if (uVar2 == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    if (uVar2 <= param_2) {
      param_2 = 0;
    }
    uVar3 = *(undefined4 *)(local_50[(int)param_2] + 0x260);
  }
  if (*(long *)PTR____stack_chk_guard_101444218 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(uVar3);
}




void FUN_1003a8de8(undefined8 *param_1)

{
  *(byte *)(param_1 + 2) = *(byte *)(param_1 + 2) | 3;
  *param_1 = &PTR_FUN_1014998d0;
  param_1[1] = 0;
  *(byte *)((long)param_1 + 0x11) = *(byte *)((long)param_1 + 0x11) & 0xfe;
  *(undefined1 *)((long)param_1 + 0x12) = 0xff;
  return;
}




void FUN_1003a8e18(undefined8 *param_1,undefined8 *param_2,undefined4 param_3,undefined1 param_4)

{
  undefined4 uVar1;
  
  *param_1 = &PTR_FUN_101499a08;
  param_1[1] = 0;
  uVar1 = *(undefined4 *)(param_2 + 1);
  param_1[2] = *param_2;
  *(undefined4 *)(param_1 + 3) = uVar1;
  *(undefined4 *)((long)param_1 + 0x1c) = param_3;
  *(undefined1 *)(param_1 + 4) = param_4;
  return;
}




void FUN_1003a8e3c(void)

{
  return;
}




void FUN_1003a8e40(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  
  uVar1 = FUN_1003a8ce0(param_1,0);
  *param_4 = uVar1;
  return;
}




void FUN_1003a8e68(long param_1,float *param_2,undefined8 param_3)

{
  long *plVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  do {
    param_1 = *(long *)(param_1 + 0x10);
  } while (*(int *)(*(long *)(param_1 + 8) + 0xa4) != DAT_10184dd68);
  plVar1 = *(long **)(DAT_101d23a68 + 0x28);
  lVar2 = *plVar1;
  while (lVar2 != 0) {
    plVar1 = plVar1 + 1;
    lVar2 = *plVar1;
  }
  fVar5 = *(float *)(param_1 + 0x250);
  *param_2 = fVar5;
  fVar4 = *(float *)(param_1 + 0x254);
  param_2[1] = fVar4;
  fVar6 = *(float *)(param_1 + 600);
  fVar4 = *(float *)(param_1 + 0x2ec) + fVar4;
  param_2[1] = fVar4;
  fVar3 = (float)___sincosf_stret(0x40490fdb);
  *param_2 = fVar5 - fVar3 * 3.0;
  param_2[2] = fVar6 + fVar4 * 3.0;
  FUN_1003a31c8(param_1,param_3,&DAT_1013cd824);
  return;
}




void FUN_1003a8f30(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  
  uVar1 = FUN_1003a8ce0(param_1,1);
  *param_4 = uVar1;
  return;
}




void FUN_1003a8f58(long param_1,float *param_2,undefined8 param_3)

{
  int iVar1;
  uint uVar2;
  undefined8 *puVar3;
  int *piVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  do {
    param_1 = *(long *)(param_1 + 0x10);
  } while (*(int *)(*(long *)(param_1 + 8) + 0xa4) != DAT_10184dd68);
  puVar3 = *(undefined8 **)(DAT_101d23a68 + 0x28);
  piVar4 = (int *)*puVar3;
  if (piVar4 == (int *)0x0) {
    fVar5 = 1.0;
  }
  else {
    iVar1 = 0;
    uVar2 = (uint)*(byte *)(param_1 + 0x264);
    do {
      uVar2 = uVar2 - 1;
      puVar3 = puVar3 + 1;
      if (uVar2 != 0) {
        iVar1 = *piVar4 + iVar1;
      }
      piVar4 = (int *)*puVar3;
    } while (piVar4 != (int *)0x0);
    if (iVar1 < 2) {
      iVar1 = 1;
    }
    fVar5 = (float)iVar1;
  }
  fVar7 = *(float *)(param_1 + 0x250);
  *param_2 = fVar7;
  fVar6 = *(float *)(param_1 + 0x254);
  param_2[1] = fVar6;
  fVar8 = *(float *)(param_1 + 600);
  fVar6 = *(float *)(param_1 + 0x2ec) + fVar6;
  param_2[1] = fVar6;
  fVar5 = (float)___sincosf_stret(6.2831855 / fVar5 - 3.1415927);
  *param_2 = fVar7 + fVar5 * 3.0;
  param_2[2] = fVar8 + fVar6 * 3.0;
  FUN_1003a31c8(param_1,param_3,&DAT_1013cd824);
  return;
}




void FUN_1003a9064(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  
  uVar1 = FUN_1003a8ce0(param_1,2);
  *param_4 = uVar1;
  return;
}




void FUN_1003a908c(long param_1,float *param_2,undefined8 param_3)

{
  int iVar1;
  uint uVar2;
  undefined8 *puVar3;
  int *piVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  do {
    param_1 = *(long *)(param_1 + 0x10);
  } while (*(int *)(*(long *)(param_1 + 8) + 0xa4) != DAT_10184dd68);
  puVar3 = *(undefined8 **)(DAT_101d23a68 + 0x28);
  piVar4 = (int *)*puVar3;
  if (piVar4 == (int *)0x0) {
    fVar5 = 1.0;
  }
  else {
    iVar1 = 0;
    uVar2 = (uint)*(byte *)(param_1 + 0x264);
    do {
      uVar2 = uVar2 - 1;
      puVar3 = puVar3 + 1;
      if (uVar2 != 0) {
        iVar1 = *piVar4 + iVar1;
      }
      piVar4 = (int *)*puVar3;
    } while (piVar4 != (int *)0x0);
    if (iVar1 < 2) {
      iVar1 = 1;
    }
    fVar5 = (float)iVar1;
  }
  fVar7 = *(float *)(param_1 + 0x250);
  *param_2 = fVar7;
  fVar6 = *(float *)(param_1 + 0x254);
  param_2[1] = fVar6;
  fVar8 = *(float *)(param_1 + 600);
  fVar6 = *(float *)(param_1 + 0x2ec) + fVar6;
  param_2[1] = fVar6;
  fVar5 = (float)___sincosf_stret(12.566371 / fVar5 - 3.1415927);
  *param_2 = fVar7 + fVar5 * 3.0;
  param_2[2] = fVar8 + fVar6 * 3.0;
  FUN_1003a31c8(param_1,param_3,&DAT_1013cd824);
  return;
}




void FUN_1003a919c(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  
  uVar1 = FUN_1003a8ce0(param_1,3);
  *param_4 = uVar1;
  return;
}




void FUN_1003a91c4(long param_1,float *param_2,undefined8 param_3)

{
  int iVar1;
  uint uVar2;
  undefined8 *puVar3;
  int *piVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  do {
    param_1 = *(long *)(param_1 + 0x10);
  } while (*(int *)(*(long *)(param_1 + 8) + 0xa4) != DAT_10184dd68);
  puVar3 = *(undefined8 **)(DAT_101d23a68 + 0x28);
  piVar4 = (int *)*puVar3;
  if (piVar4 == (int *)0x0) {
    fVar5 = 1.0;
  }
  else {
    iVar1 = 0;
    uVar2 = (uint)*(byte *)(param_1 + 0x264);
    do {
      uVar2 = uVar2 - 1;
      puVar3 = puVar3 + 1;
      if (uVar2 != 0) {
        iVar1 = *piVar4 + iVar1;
      }
      piVar4 = (int *)*puVar3;
    } while (piVar4 != (int *)0x0);
    if (iVar1 < 2) {
      iVar1 = 1;
    }
    fVar5 = (float)iVar1;
  }
  fVar7 = *(float *)(param_1 + 0x250);
  *param_2 = fVar7;
  fVar6 = *(float *)(param_1 + 0x254);
  param_2[1] = fVar6;
  fVar8 = *(float *)(param_1 + 600);
  fVar6 = *(float *)(param_1 + 0x2ec) + fVar6;
  param_2[1] = fVar6;
  fVar5 = (float)___sincosf_stret(18.849556 / fVar5 - 3.1415927);
  *param_2 = fVar7 + fVar5 * 3.0;
  param_2[2] = fVar8 + fVar6 * 3.0;
  FUN_1003a31c8(param_1,param_3,&DAT_1013cd824);
  return;
}




void FUN_1003a92dc(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  
  uVar1 = FUN_1003a8ce0(param_1,4);
  *param_4 = uVar1;
  return;
}




void FUN_1003a9304(long param_1,float *param_2,undefined8 param_3)

{
  int iVar1;
  uint uVar2;
  undefined8 *puVar3;
  int *piVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  do {
    param_1 = *(long *)(param_1 + 0x10);
  } while (*(int *)(*(long *)(param_1 + 8) + 0xa4) != DAT_10184dd68);
  puVar3 = *(undefined8 **)(DAT_101d23a68 + 0x28);
  piVar4 = (int *)*puVar3;
  if (piVar4 == (int *)0x0) {
    fVar5 = 1.0;
  }
  else {
    iVar1 = 0;
    uVar2 = (uint)*(byte *)(param_1 + 0x264);
    do {
      uVar2 = uVar2 - 1;
      puVar3 = puVar3 + 1;
      if (uVar2 != 0) {
        iVar1 = *piVar4 + iVar1;
      }
      piVar4 = (int *)*puVar3;
    } while (piVar4 != (int *)0x0);
    if (iVar1 < 2) {
      iVar1 = 1;
    }
    fVar5 = (float)iVar1;
  }
  fVar7 = *(float *)(param_1 + 0x250);
  *param_2 = fVar7;
  fVar6 = *(float *)(param_1 + 0x254);
  param_2[1] = fVar6;
  fVar8 = *(float *)(param_1 + 600);
  fVar6 = *(float *)(param_1 + 0x2ec) + fVar6;
  param_2[1] = fVar6;
  fVar5 = (float)___sincosf_stret(25.132742 / fVar5 - 3.1415927);
  *param_2 = fVar7 + fVar5 * 3.0;
  param_2[2] = fVar8 + fVar6 * 3.0;
  FUN_1003a31c8(param_1,param_3,&DAT_1013cd824);
  return;
}




void FUN_1003a9418(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  
  uVar1 = FUN_1003a8ce0(param_1,5);
  *param_4 = uVar1;
  return;
}




void FUN_1003a9440(long param_1,float *param_2,undefined8 param_3)

{
  int iVar1;
  uint uVar2;
  undefined8 *puVar3;
  int *piVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  do {
    param_1 = *(long *)(param_1 + 0x10);
  } while (*(int *)(*(long *)(param_1 + 8) + 0xa4) != DAT_10184dd68);
  puVar3 = *(undefined8 **)(DAT_101d23a68 + 0x28);
  piVar4 = (int *)*puVar3;
  if (piVar4 == (int *)0x0) {
    fVar5 = 1.0;
  }
  else {
    iVar1 = 0;
    uVar2 = (uint)*(byte *)(param_1 + 0x264);
    do {
      uVar2 = uVar2 - 1;
      puVar3 = puVar3 + 1;
      if (uVar2 != 0) {
        iVar1 = *piVar4 + iVar1;
      }
      piVar4 = (int *)*puVar3;
    } while (piVar4 != (int *)0x0);
    if (iVar1 < 2) {
      iVar1 = 1;
    }
    fVar5 = (float)iVar1;
  }
  fVar7 = *(float *)(param_1 + 0x250);
  *param_2 = fVar7;
  fVar6 = *(float *)(param_1 + 0x254);
  param_2[1] = fVar6;
  fVar8 = *(float *)(param_1 + 600);
  fVar6 = *(float *)(param_1 + 0x2ec) + fVar6;
  param_2[1] = fVar6;
  fVar5 = (float)___sincosf_stret(31.415928 / fVar5 - 3.1415927);
  *param_2 = fVar7 + fVar5 * 3.0;
  param_2[2] = fVar8 + fVar6 * 3.0;
  FUN_1003a31c8(param_1,param_3,&DAT_1013cd824);
  return;
}




void FUN_1003a9554(undefined8 param_1)

{
  FUN_1003dfe60(param_1,2,2,9,1);
  return;
}




void FUN_1003a9568(long param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x10);
  while ((lVar2 != 0 && (*(int *)(*(long *)(lVar2 + 8) + 0xa4) != DAT_10184dd68))) {
    lVar2 = *(long *)(lVar2 + 0x10);
  }
  uVar1 = FUN_1003461dc();
  *param_3 = uVar1;
  return;
}




undefined8 FUN_1003a95b4(undefined8 param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  uint uVar7;
  char *pcVar8;
  code *local_50;
  undefined4 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  local_40 = 0;
  uStack_38 = 0;
  uVar3 = FUN_10000ef8c();
  FUN_1003a985c(&local_40,uVar3);
  lVar4 = FUN_10000dff8();
  FUN_1003a985c(&local_40,lVar4);
  *(undefined2 *)(lVar4 + 0x28) = 0x100;
  *(code **)(lVar4 + 0x30) = FUN_1003a24a0;
  FUN_1003a4e5c(lVar4 + 0x10,param_1);
  uVar2 = FUN_1004d2524("AttackToIdle");
  uVar2 = FUN_100015208("AttackToIdle",uVar2,0x12345678);
  *(undefined4 *)(lVar4 + 0x20) = uVar2;
  lVar4 = FUN_10000ceb8();
  FUN_1003a985c(&local_40,lVar4);
  *(undefined4 *)(lVar4 + 0x2c) = 0x3e99999a;
  *(code **)(lVar4 + 0x10) = FUN_1003a24a0;
  lVar4 = FUN_10000e1b4();
  FUN_1003a985c(&local_40,lVar4);
  *(undefined8 *)(lVar4 + 0x40) = 0;
  *(ushort *)(lVar4 + 0x80) = *(ushort *)(lVar4 + 0x80) & 0xffec | 2;
  *(uint *)(lVar4 + 0x3c) = (uint)lVar4 & 0xffff;
  *(undefined8 *)(lVar4 + 0x20) = 0;
  *(undefined8 *)(lVar4 + 0x28) = 1;
  *(undefined4 *)(lVar4 + 0x10) = 0x92d6a902;
  plVar5 = (long *)thunk_FUN_10000e6f4();
  FUN_1003a985c(&local_40,plVar5);
  (**(code **)(*plVar5 + 0x50))(plVar5,"minionAttack");
  uVar3 = FUN_10000bc94();
  FUN_1003a985c(&local_40,uVar3);
  plVar5 = (long *)FUN_10000cb8c();
  FUN_1003a985c(&local_40,plVar5);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x50))(plVar5);
  local_50 = FUN_1003a9834;
  local_48 = 3;
  (**(code **)(*plVar5 + 0x10))(plVar5,&local_50,0,1);
  lVar4 = FUN_10000c8e8();
  FUN_1003a985c(&local_40,lVar4);
  lVar6 = FUN_10049ad9c(lVar4 + 0x10);
  if (PTR_s_Ability__Fortress__B_101859310 == (undefined *)0x0) {
    uVar7 = 0;
  }
  else {
    uVar7 = 0x811c9dc5;
    cVar1 = *PTR_s_Ability__Fortress__B_101859310;
    pcVar8 = PTR_s_Ability__Fortress__B_101859310;
    while (cVar1 != '\0') {
      pcVar8 = pcVar8 + 1;
      uVar7 = (uVar7 ^ (int)cVar1) * 0x1000193;
      cVar1 = *pcVar8;
    }
  }
  *(uint *)(lVar6 + 8) = uVar7;
  *(undefined4 *)(lVar6 + 0xc) = 1;
  plVar5 = (long *)FUN_10000bed8();
  FUN_1003a985c(lVar4 + 0xb0,plVar5);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x70))(plVar5,PTR_s_Buff_Fortress_Bleeding_10185a6c8);
  local_50 = FUN_1003a9848;
  local_48 = 3;
  plVar5 = (long *)(**(code **)(*plVar5 + 0x18))(plVar5,&local_50);
  (**(code **)(*plVar5 + 0x28))(plVar5,FUN_1003a9568);
  uVar3 = FUN_10000c784();
  FUN_1003a985c(&local_40,uVar3);
  uVar3 = FUN_10000f034();
  FUN_1003a985c(&local_40,uVar3);
  return local_40;
}




void FUN_1003a9834(undefined8 param_1)

{
  FUN_1003e00a8(param_1,2,5,9,1);
  return;
}




void FUN_1003a9848(undefined8 param_1)

{
  FUN_1003e00a8(param_1,1,7,9,1);
  return;
}




void FUN_1003a985c(long *param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  
  if (*param_1 == 0) {
    *param_1 = (long)param_2;
  }
  else {
    plVar3 = (long *)(param_1[1] + 8);
    plVar2 = param_2;
    if (*plVar3 != 0) {
      do {
        lVar1 = (**(code **)(*plVar2 + 0x40))(plVar2);
        if (lVar1 == 0) break;
        plVar2 = (long *)(**(code **)(*plVar2 + 0x40))(plVar2);
      } while (plVar2 != (long *)0x0);
      plVar3 = plVar2 + 1;
    }
    *plVar3 = (long)param_2;
  }
  param_1[1] = (long)param_2;
  return;
}




void FUN_1003a98dc(long param_1,long param_2,float *param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar4 = *(float *)(param_2 + 0x250) - *(float *)(param_1 + 0x1d8);
  fVar6 = (*(float *)(param_2 + 0x2ec) + *(float *)(param_2 + 0x254)) - *(float *)(param_1 + 0x1dc);
  fVar7 = *(float *)(param_2 + 600) - *(float *)(param_1 + 0x1e0);
  uVar3 = *(undefined8 *)(param_2 + 0x58);
  uVar1 = FUN_1004d2524("Ability__Generic__Jump");
  uVar2 = FUN_100015208("Ability__Generic__Jump",uVar1,0x12345678);
  uVar2 = FUN_1003e2b0c(uVar3,uVar2);
  fVar5 = (float)FUN_1003dfe60(param_2,uVar2,3,0x19,0);
  *param_3 = SQRT(fVar4 * fVar4 + fVar6 * fVar6 + fVar7 * fVar7) / fVar5;
  return;
}




void FUN_1003a999c(long param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x58);
  uVar1 = FUN_1004d2524("Ability__Generic__Jump");
  uVar2 = FUN_100015208("Ability__Generic__Jump",uVar1,0x12345678);
  uVar2 = FUN_1003e2b0c(uVar3,uVar2);
  FUN_1003dfe60(param_1,uVar2,3,0x19,0);
  return;
}




void FUN_1003a9a08(undefined8 param_1,long param_2,float *param_3,float *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  float fVar4;
  float local_44;
  
  uVar3 = *(undefined8 *)(param_2 + 0x58);
  uVar1 = FUN_1004d2524("Ability__Generic__Jump");
  uVar2 = FUN_100015208("Ability__Generic__Jump",uVar1,0x12345678);
  uVar2 = FUN_1003e2b0c(uVar3,uVar2);
  fVar4 = (float)FUN_1003dfe60(param_2,uVar2,4,0x19,0);
  *param_3 = fVar4;
  local_44 = 0.0;
  FUN_1003a98dc(param_1,param_2,&local_44);
  *param_4 = *param_3 * local_44;
  return;
}




void FUN_1003a9abc(long param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x58);
  uVar1 = FUN_1004d2524("Ability__Generic__Jump");
  uVar2 = FUN_100015208("Ability__Generic__Jump",uVar1,0x12345678);
  uVar2 = FUN_1003e2b0c(uVar3,uVar2);
  FUN_1003dfe60(param_1,uVar2,2,0x19,0);
  return;
}




void FUN_1003a9b28(long param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x58);
  uVar1 = FUN_1004d2524("Ability__Generic__Jump");
  uVar2 = FUN_100015208("Ability__Generic__Jump",uVar1,0x12345678);
  uVar2 = FUN_1003e2b0c(uVar3,uVar2);
  FUN_1003dfe60(param_1,uVar2,5,0x19,0);
  return;
}




undefined8 FUN_1003a9b94(void)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
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
  uVar1 = FUN_1004d2524("Breath");
  uVar1 = FUN_100015208("Breath",uVar1,0x12345678);
  *(undefined4 *)(lVar2 + 0x10) = uVar1;
  uVar1 = FUN_1004d2524("AttackToIdleCombat");
  uVar1 = FUN_100015208("AttackToIdleCombat",uVar1,0x12345678);
  *(undefined4 *)(lVar2 + 0x20) = uVar1;
  lVar2 = FUN_10000e524();
  FUN_1003a985c(&local_40,lVar2);
  *(char **)(lVar2 + 0x10) = "build://Sounds/5v5/SFX/sfx_ghostwing_fireball_breathe_in.mp3";
  *(undefined2 *)(lVar2 + 0x30) = 0x1ff;
  *(undefined4 *)(lVar2 + 0x34) = 1;
  *(undefined8 *)(lVar2 + 0x3c) = 0xffffffff3f800000;
  *(byte *)(lVar2 + 0x38) = *(byte *)(lVar2 + 0x38) & 0xf8 | 4;
  *(undefined8 *)(lVar2 + 0x48) = 0;
  lVar2 = FUN_10000ceb8();
  FUN_1003a985c(&local_40,lVar2);
  *(undefined4 *)(lVar2 + 0x2c) = 0x3f99999a;
  *(undefined8 *)(lVar2 + 0x10) = 0;
  lVar2 = FUN_10000e524();
  FUN_1003a985c(&local_40,lVar2);
  *(char **)(lVar2 + 0x10) = "build://Sounds/5v5/SFX/sfx_ghostwing_fireball_stream_attack.mp3";
  *(undefined2 *)(lVar2 + 0x30) = 0x1ff;
  *(undefined4 *)(lVar2 + 0x34) = 1;
  *(undefined8 *)(lVar2 + 0x3c) = 0xffffffff3f800000;
  *(byte *)(lVar2 + 0x38) = *(byte *)(lVar2 + 0x38) & 0xf8 | 4;
  *(undefined8 *)(lVar2 + 0x48) = 0;
  lVar2 = FUN_10000ceb8();
  FUN_1003a985c(&local_40,lVar2);
  *(undefined4 *)(lVar2 + 0x2c) = 0x3e4ccccd;
  *(undefined8 *)(lVar2 + 0x10) = 0;
  lVar2 = FUN_10000f250();
  FUN_1003a985c(&local_40,lVar2);
  *(undefined4 *)(lVar2 + 0x10) = 0x3c;
  FUN_1003d266c(lVar2,"Mouth");
  lVar2 = FUN_10000ceb8();
  FUN_1003a985c(&local_40,lVar2);
  *(undefined4 *)(lVar2 + 0x2c) = 0x3dcccccd;
  *(undefined8 *)(lVar2 + 0x10) = 0;
  lVar2 = FUN_10000f250();
  FUN_1003a985c(&local_40,lVar2);
  *(undefined4 *)(lVar2 + 0x10) = 0x3c;
  FUN_1003d266c(lVar2,"Mouth");
  lVar2 = FUN_10000ceb8();
  FUN_1003a985c(&local_40,lVar2);
  *(undefined4 *)(lVar2 + 0x2c) = 0x3dcccccd;
  *(undefined8 *)(lVar2 + 0x10) = 0;
  lVar2 = FUN_10000f250();
  FUN_1003a985c(&local_40,lVar2);
  *(undefined4 *)(lVar2 + 0x10) = 0x3c;
  FUN_1003d266c(lVar2,"Mouth");
  lVar2 = FUN_10000ceb8();
  FUN_1003a985c(&local_40,lVar2);
  *(undefined4 *)(lVar2 + 0x2c) = 0x3dcccccd;
  *(undefined8 *)(lVar2 + 0x10) = 0;
  lVar2 = FUN_10000f250();
  FUN_1003a985c(&local_40,lVar2);
  *(undefined4 *)(lVar2 + 0x10) = 0x3c;
  FUN_1003d266c(lVar2,"Mouth");
  lVar2 = FUN_10000ceb8();
  FUN_1003a985c(&local_40,lVar2);
  *(undefined4 *)(lVar2 + 0x2c) = 0x3dcccccd;
  *(undefined8 *)(lVar2 + 0x10) = 0;
  lVar2 = FUN_10000f250();
  FUN_1003a985c(&local_40,lVar2);
  *(undefined4 *)(lVar2 + 0x10) = 0x3c;
  FUN_1003d266c(lVar2,"Mouth");
  lVar2 = FUN_10000ceb8();
  FUN_1003a985c(&local_40,lVar2);
  *(undefined4 *)(lVar2 + 0x2c) = 0x3dcccccd;
  *(undefined8 *)(lVar2 + 0x10) = 0;
  lVar2 = FUN_10000f250();
  FUN_1003a985c(&local_40,lVar2);
  *(undefined4 *)(lVar2 + 0x10) = 0x3c;
  FUN_1003d266c(lVar2,"Mouth");
  lVar2 = FUN_10000ceb8();
  FUN_1003a985c(&local_40,lVar2);
  *(undefined4 *)(lVar2 + 0x2c) = 0x3dcccccd;
  *(undefined8 *)(lVar2 + 0x10) = 0;
  lVar2 = FUN_10000f250();
  FUN_1003a985c(&local_40,lVar2);
  *(undefined4 *)(lVar2 + 0x10) = 0x3c;
  FUN_1003d266c(lVar2,"Mouth");
  lVar2 = FUN_10000ceb8();
  FUN_1003a985c(&local_40,lVar2);
  *(undefined4 *)(lVar2 + 0x2c) = 0x3dcccccd;
  *(undefined8 *)(lVar2 + 0x10) = 0;
  lVar2 = FUN_10000f250();
  FUN_1003a985c(&local_40,lVar2);
  *(undefined4 *)(lVar2 + 0x10) = 0x3c;
  FUN_1003d266c(lVar2,"Mouth");
  lVar2 = FUN_10000ceb8();
  FUN_1003a985c(&local_40,lVar2);
  *(undefined4 *)(lVar2 + 0x2c) = 0x3dcccccd;
  *(undefined8 *)(lVar2 + 0x10) = 0;
  lVar2 = FUN_10000f250();
  FUN_1003a985c(&local_40,lVar2);
  *(undefined4 *)(lVar2 + 0x10) = 0x3c;
  FUN_1003d266c(lVar2,"Mouth");
  lVar2 = FUN_10000ceb8();
  FUN_1003a985c(&local_40,lVar2);
  *(undefined4 *)(lVar2 + 0x2c) = 0x3dcccccd;
  *(undefined8 *)(lVar2 + 0x10) = 0;
  lVar2 = FUN_10000f250();
  FUN_1003a985c(&local_40,lVar2);
  *(undefined4 *)(lVar2 + 0x10) = 0x3c;
  FUN_1003d266c(lVar2,"Mouth");
  lVar2 = FUN_10000d8b8();
  FUN_1003a985c(&local_40,lVar2);
  *(undefined1 *)(lVar2 + 0x10) = 0;
  return local_40;
}




void FUN_1003a9fc4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3eb33333;
  return;
}




undefined8
FUN_1003a9fd4(float param_1,float param_2,undefined8 param_3,char *param_4,undefined8 *param_5,
             uint param_6,undefined8 param_7)

{
  char cVar1;
  undefined *puVar2;
  bool bVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  uint uVar9;
  byte bVar10;
  undefined8 uVar11;
  undefined8 local_60;
  undefined8 uStack_58;
  
  local_60 = 0;
  uStack_58 = 0;
  uVar5 = FUN_10000ef8c();
  FUN_1003a985c(&local_60,uVar5);
  lVar6 = FUN_10000dff8();
  FUN_1003a985c(&local_60,lVar6);
  *(undefined2 *)(lVar6 + 0x28) = 0x100;
  *(undefined8 *)(lVar6 + 0x30) = 0;
  FUN_1003a4e5c(lVar6 + 0x10,param_3);
  uVar4 = FUN_1004d2524("AttackToCombatIdle");
  uVar4 = FUN_100015208("AttackToCombatIdle",uVar4,0x12345678);
  *(undefined4 *)(lVar6 + 0x20) = uVar4;
  lVar6 = FUN_10000ceb8();
  FUN_1003a985c(&local_60,lVar6);
  *(float *)(lVar6 + 0x2c) = param_2;
  *(undefined8 *)(lVar6 + 0x10) = 0;
  if (0 < (int)param_6) {
    lVar6 = FUN_10000e524();
    FUN_1003a985c(&local_60,lVar6);
    uVar11 = *param_5;
    uVar5 = FUN_1010a1520();
    lVar7 = FUN_1010a0e0c(uVar5,0,"*KindredSoundBalance*",0);
    uVar4 = FUN_1003aa420(*(undefined4 *)(lVar7 + 0x108));
    *(undefined8 *)(lVar6 + 0x10) = uVar11;
    *(undefined2 *)(lVar6 + 0x30) = 0x1ff;
    *(undefined4 *)(lVar6 + 0x34) = 1;
    *(undefined4 *)(lVar6 + 0x3c) = uVar4;
    *(undefined4 *)(lVar6 + 0x40) = 0xffffffff;
    *(byte *)(lVar6 + 0x38) = *(byte *)(lVar6 + 0x38) & 0xf8 | 4;
    *(undefined8 *)(lVar6 + 0x48) = 0;
    if (param_6 != 1) {
      lVar7 = (ulong)param_6 - 1;
      bVar10 = 1;
      do {
        param_5 = param_5 + 1;
        *(undefined8 *)(lVar6 + (ulong)bVar10 * 8 + 0x10) = *param_5;
        bVar10 = bVar10 + 1;
        lVar7 = lVar7 + -1;
      } while (lVar7 != 0);
      *(byte *)(lVar6 + 0x31) = bVar10;
    }
  }
  lVar6 = FUN_10000ceb8();
  FUN_1003a985c(&local_60,lVar6);
  *(float *)(lVar6 + 0x2c) = param_1 - param_2;
  *(undefined8 *)(lVar6 + 0x10) = 0;
  plVar8 = (long *)thunk_FUN_10000f1a0();
  FUN_1003a985c(&local_60,plVar8);
  plVar8 = (long *)(**(code **)(*plVar8 + 0x68))(plVar8);
  plVar8 = (long *)(**(code **)(*plVar8 + 0x10))(0x3ecccccd);
  plVar8 = (long *)(**(code **)(*plVar8 + 0x18))(0x3f000000);
  (**(code **)(*plVar8 + 0x20))(0x41700000);
  uVar5 = FUN_10000bc94();
  FUN_1003a985c(&local_60,uVar5);
  lVar6 = FUN_1003e10f0();
  bVar10 = *(byte *)(lVar6 + 0xe5);
  uVar4 = _cosf(0x40060a92);
  lVar6 = FUN_10000ed74();
  FUN_1003a985c(&local_60,lVar6);
  *(undefined8 *)(lVar6 + 0x18) = 0;
  *(undefined1 *)(lVar6 + 0x20) = 0;
  *(undefined8 *)(lVar6 + 0x24) = 0;
  *(undefined8 *)(lVar6 + 0x34) = 0;
  *(undefined8 *)(lVar6 + 0x2c) = 0;
  *(undefined4 *)(lVar6 + 0x3c) = 0;
  uVar5 = NEON_fmov(0xbf800000,4);
  *(undefined8 *)(lVar6 + 0x40) = uVar5;
  *(undefined4 *)(lVar6 + 0x48) = uVar4;
  *(undefined8 *)(lVar6 + 0x4c) = 0x3f266666bf800000;
  *(undefined1 *)(lVar6 + 0x54) = 0xff;
  *(undefined8 *)(lVar6 + 0x60) = 0xffffffff00000000;
  *(undefined8 *)(lVar6 + 0x58) = 0xffffffff00040000;
  *(byte *)(lVar6 + 0x6a) = bVar10 | 0x14;
  *(undefined2 *)(lVar6 + 0x68) = 0x6120;
  bVar3 = DAT_101d23a38 != '\0';
  *(undefined4 *)(lVar6 + 0xa4) = 0x40a9999a;
  *(byte *)(lVar6 + 0xa8) = *(byte *)(lVar6 + 0xa8) & 0xf0 | bVar3 | 4;
  puVar2 = PTR_s_Buff_SlowDecayingUsingBuffVar_10185a460;
  lVar6 = FUN_10000bd3c();
  FUN_1003a985c(&local_60,lVar6);
  *(undefined **)(lVar6 + 0x10) = puVar2;
  *(undefined4 *)(lVar6 + 0x18) = 0x40200000;
  *(undefined2 *)(lVar6 + 0x68) = 1;
  *(byte *)(lVar6 + 0x6a) = *(byte *)(lVar6 + 0x6a) & 0xfe;
  *(code **)(lVar6 + 0x58) = FUN_1003a9fc4;
  lVar6 = FUN_10000cae4();
  FUN_1003a985c(&local_60,lVar6);
  *(undefined8 *)(lVar6 + 0x10) = param_7;
  FUN_1003a59a0(0x40400000,&local_60,DAT_10185a468);
  lVar6 = FUN_10000e1b4();
  FUN_1003a985c(&local_60,lVar6);
  *(undefined8 *)(lVar6 + 0x40) = 0;
  *(ushort *)(lVar6 + 0x80) = *(ushort *)(lVar6 + 0x80) & 0xffef | 3;
  *(uint *)(lVar6 + 0x3c) = (uint)lVar6 & 0xffff;
  *(undefined8 *)(lVar6 + 0x20) = 0;
  *(undefined8 *)(lVar6 + 0x28) = 1;
  if (param_4 == (char *)0x0) {
    uVar9 = 0;
  }
  else {
    uVar9 = 0x811c9dc5;
    cVar1 = *param_4;
    while (cVar1 != '\0') {
      param_4 = param_4 + 1;
      uVar9 = (uVar9 ^ (int)cVar1) * 0x1000193;
      cVar1 = *param_4;
    }
  }
  *(uint *)(lVar6 + 0x10) = uVar9;
  lVar6 = FUN_10000ceb8();
  FUN_1003a985c(&local_60,lVar6);
  *(undefined4 *)(lVar6 + 0x2c) = 0x3f4ccccd;
  *(undefined8 *)(lVar6 + 0x10) = 0;
  lVar6 = FUN_10000e524();
  FUN_1003a985c(&local_60,lVar6);
  *(char **)(lVar6 + 0x10) = "build://Sounds/5v5/SFX/sfx_ghostwing_post_basic_attack_roar.mp3";
  *(undefined2 *)(lVar6 + 0x30) = 0x1ff;
  *(undefined4 *)(lVar6 + 0x34) = 1;
  *(undefined8 *)(lVar6 + 0x3c) = 0xffffffff3f333333;
  *(byte *)(lVar6 + 0x38) = *(byte *)(lVar6 + 0x38) & 0xf8 | 4;
  *(undefined8 *)(lVar6 + 0x48) = 0;
  lVar6 = FUN_10000ceb8();
  FUN_1003a985c(&local_60,lVar6);
  *(undefined4 *)(lVar6 + 0x2c) = 0x3e99999a;
  *(undefined8 *)(lVar6 + 0x10) = 0;
  return local_60;
}




float FUN_1003aa420(float param_1)

{
  undefined8 uVar1;
  long lVar2;
  float fVar3;
  
  uVar1 = FUN_1010a1520();
  lVar2 = FUN_1010a0e0c(uVar1,0,"*KindredSoundBalance*",0);
  fVar3 = *(float *)(lVar2 + 4);
  uVar1 = FUN_1010a1520();
  lVar2 = FUN_1010a0e0c(uVar1,0,"*KindredSoundBalance*",0);
  return fVar3 + param_1 + *(float *)(lVar2 + 0xfc);
}




float FUN_1003aa484(float param_1)

{
  undefined8 uVar1;
  long lVar2;
  float fVar3;
  
  uVar1 = FUN_1010a1520();
  lVar2 = FUN_1010a0e0c(uVar1,0,"*KindredSoundBalance*",0);
  fVar3 = *(float *)(lVar2 + 4);
  uVar1 = FUN_1010a1520();
  lVar2 = FUN_1010a0e0c(uVar1,0,"*KindredSoundBalance*",0);
  return fVar3 + param_1 + *(float *)(lVar2 + 0x84);
}




undefined4 FUN_1003aa4e8(long param_1)

{
  return *(undefined4 *)(**(long **)(*(long *)(param_1 + 0x38) + 0x228) + 8);
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1003aa4fc(long param_1,long param_2,undefined4 *param_3,undefined8 param_4)

{
  long lVar1;
  float fVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float local_78;
  float fStack_74;
  float local_70;
  undefined8 local_6c;
  float local_64;
  undefined4 local_60;
  uint uStack_5c;
  undefined2 local_58;
  
  fVar6 = *(float *)(param_2 + 0x250);
  fVar9 = *(float *)(param_2 + 600);
  fVar8 = *(float *)(param_2 + 0x2ec) + *(float *)(param_2 + 0x254);
  fVar2 = (float)*(undefined8 *)(param_1 + 0x1d8) - fVar6;
  fVar4 = (float)((ulong)*(undefined8 *)(param_1 + 0x1d8) >> 0x20) - fVar8;
  fVar5 = *(float *)(param_1 + 0x1e0) - fVar9;
  fVar7 = fVar2 * fVar2 + fVar4 * fVar4 + fVar5 * fVar5;
  if (1e-08 <= fVar7) {
    fVar7 = SQRT(fVar7);
    fVar2 = fVar2 / fVar7;
    fVar4 = fVar4 / fVar7;
    fVar5 = fVar5 / fVar7;
  }
  else {
    fVar2 = 1.0;
    fVar4 = 0.0;
    fVar5 = 0.0;
  }
  fVar7 = (float)FUN_10045f34c(param_1 + 0x220,param_1);
  do {
    param_1 = *(long *)(param_1 + 0x10);
  } while (*(int *)(*(long *)(param_1 + 8) + 0xa4) != DAT_10184dd68);
  uVar3 = FUN_1003dfe60(param_1,0,3,0x19,0);
  *param_3 = uVar3;
  lVar1 = *(long *)(param_2 + 0x18);
  if (lVar1 == 0) {
    uStack_5c = 0;
  }
  else {
    do {
      if (*(int *)(*(long *)(lVar1 + 8) + 0xa4) == ram0x0001018672a0) {
        uStack_5c = *(byte *)(lVar1 + 0x818) >> 3 & 3;
        goto LAB_1003aa630;
      }
      lVar1 = *(long *)(lVar1 + 0x20);
    } while (lVar1 != 0);
    uStack_5c = 0;
  }
LAB_1003aa630:
  local_64 = fVar9 + fVar5 * fVar7;
  local_6c = CONCAT44(fVar8 + fVar4 * fVar7,fVar6 + fVar2 * fVar7);
  local_60 = 0;
  local_58 = 1;
  local_78 = fVar6;
  fStack_74 = fVar8;
  local_70 = fVar9;
  FUN_1003a7f34(&local_78,param_4,0);
  return;
}




void FUN_1003aa680(undefined8 param_1)

{
  FUN_1003dfe60(param_1,0,3,0x19,0);
  return;
}




void FUN_1003aa694(undefined8 param_1,long param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float local_50;
  float fStack_4c;
  float local_48;
  float local_44;
  
  fVar3 = *(float *)(param_2 + 0x250);
  fVar1 = *(float *)(param_2 + 0x254);
  fVar4 = *(float *)(param_2 + 600);
  fVar2 = *(float *)(param_2 + 0x2ec);
  FUN_1003aa4fc(param_1,param_2,&local_44,&local_50);
  fVar3 = fVar3 - local_50;
  fStack_4c = (fVar2 + fVar1) - fStack_4c;
  fVar4 = fVar4 - local_48;
  *param_3 = SQRT(fVar3 * fVar3 + fStack_4c * fStack_4c + fVar4 * fVar4) / local_44;
  return;
}




void FUN_1003aa718(undefined8 param_1,undefined8 param_2,float *param_3)

{
  FUN_1003aa694();
  *param_3 = *param_3 + 0.1;
  return;
}




void FUN_1003aa74c(undefined8 param_1)

{
  FUN_1003dfe60(param_1,0,6,0x19,0);
  return;
}




float FUN_1003aa760(long param_1)

{
  float fVar1;
  float fVar2;
  
  do {
    param_1 = *(long *)(param_1 + 0x10);
  } while (*(int *)(*(long *)(param_1 + 8) + 0xa4) != DAT_10184dd68);
  fVar1 = (float)FUN_1003dfe60(param_1,0,4,0x19,0);
  fVar2 = (float)FUN_1003dfe60(param_1,0,5,0x19,0);
  return fVar1 / fVar2;
}




void FUN_1003aa7dc(undefined8 param_1)

{
  FUN_1003dfe60(param_1,0,4,0x19,0);
  return;
}




void FUN_1003aa7f0(undefined8 param_1)

{
  FUN_1003dfe60(param_1,0,5,0x19,0);
  return;
}




undefined4 FUN_1003aa804(long param_1)

{
  long lVar1;
  float fVar2;
  
  do {
    param_1 = *(long *)(param_1 + 0x10);
  } while (*(int *)(*(long *)(param_1 + 8) + 0xa4) != DAT_10184dd68);
  lVar1 = *(long *)(param_1 + 0x40);
  fVar2 = *(float *)(lVar1 + 0x48) + *(float *)(lVar1 + 0xfc) * (*(float *)(lVar1 + 0x264) + 1.0);
  NEON_fminnm(fVar2 + fVar2 * *(float *)(lVar1 + 0x1b0),DAT_101e94330);
  return DAT_101e94270;
}




void FUN_1003aa868(undefined8 param_1)

{
  FUN_1003dfe60(param_1,0,9,0x19,0);
  return;
}




void FUN_1003aa87c(undefined8 param_1)

{
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d90b1c;
  FUN_1003dfee8(param_1,local_18,2,9);
  return;
}




void FUN_1003aa8b0(long param_1,undefined8 param_2,float *param_3,undefined4 *param_4,
                  undefined4 *param_5)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  undefined4 local_58 [2];
  
  lVar5 = *(long *)(param_1 + 0x10);
  while (*(int *)(*(long *)(lVar5 + 8) + 0xa4) != DAT_10184dd68) {
    lVar5 = *(long *)(lVar5 + 0x10);
  }
  lVar4 = *(long *)(lVar5 + 0x18);
  while ((lVar4 != 0 && (*(int *)(*(long *)(lVar4 + 8) + 0xa4) != DAT_10184daa8))) {
    lVar4 = *(long *)(lVar4 + 0x20);
  }
  uVar2 = FUN_1003a34a4(lVar4,DAT_101d2c65c);
  fVar6 = (float)FUN_1003dfe60(lVar5,3,2,0x19,0);
  fVar7 = (float)FUN_1003dfe60(lVar5,3,3,0x19,0);
  *param_3 = fVar6 + (float)uVar2 * fVar7;
  puVar1 = PTR_s_Buff_Glaive_Talent_StunningBlood_10185a740;
  lVar4 = FUN_100345d90(*(undefined4 *)(lVar5 + 0x260));
  if ((lVar4 != 0) && (iVar3 = FUN_1003a47d0(lVar4,puVar1), iVar3 != 0)) {
    local_58[0] = DAT_101d90b14;
    fVar6 = (float)FUN_1003dfee8(lVar5,local_58,2,9);
    *param_3 = *param_3 * fVar6;
  }
  *param_4 = 2;
  *param_5 = 1;
  return;
}




void FUN_1003aa9ec(long param_1,undefined8 param_2,float *param_3)

{
  float fVar1;
  
  FUN_1003aa8b0();
  do {
    param_1 = *(long *)(param_1 + 0x10);
  } while (*(int *)(*(long *)(param_1 + 8) + 0xa4) != DAT_10184dd68);
  fVar1 = (float)FUN_1003dfe60(param_1,3,7,0x19,0);
  *param_3 = *param_3 * fVar1;
  return;
}




void FUN_1003aaa54(long param_1,undefined8 param_2,float *param_3)

{
  float fVar1;
  
  FUN_1003aa8b0();
  do {
    param_1 = *(long *)(param_1 + 0x10);
  } while (*(int *)(*(long *)(param_1 + 8) + 0xa4) != DAT_10184dd68);
  fVar1 = (float)FUN_1003dfe60(param_1,3,8,0x19,0);
  *param_3 = *param_3 * fVar1;
  return;
}




void FUN_1003aaabc(long param_1,undefined8 param_2,float *param_3)

{
  float fVar1;
  
  FUN_1003aa8b0();
  do {
    param_1 = *(long *)(param_1 + 0x10);
  } while (*(int *)(*(long *)(param_1 + 8) + 0xa4) != DAT_10184dd68);
  fVar1 = (float)FUN_1003dfe60(param_1,3,9,0x19,0);
  *param_3 = *param_3 * fVar1;
  return;
}




void FUN_1003aab24(undefined8 param_1)

{
  FUN_1003dfe60(param_1,3,10,0x19,0);
  return;
}




void FUN_1003aab38(undefined8 param_1)

{
  FUN_1003dfe60(param_1,3,4,0x19,0);
  return;
}




void FUN_1003aab4c(undefined8 param_1)

{
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d90b14;
  FUN_1003dfee8(param_1,local_18,1,9);
  return;
}




void FUN_1003aab80(undefined8 param_1)

{
  FUN_1003dfe60(param_1,3,0xb,0x19,0);
  return;
}




void FUN_1003aab94(undefined8 param_1)

{
  FUN_1003dfe60(param_1,3,0xc,0x19,0);
  return;
}




void FUN_1003aaba8(undefined8 param_1)

{
  FUN_1003dfe60(param_1,3,0xd,0x19,0);
  return;
}




void FUN_1003aabbc(long param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  do {
    param_1 = *(long *)(param_1 + 0x10);
  } while (*(int *)(*(long *)(param_1 + 8) + 0xa4) != DAT_10184dd68);
  uVar1 = FUN_1003df710(param_1,2,1);
  *param_2 = uVar1;
  return;
}




float FUN_1003aac0c(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  undefined4 local_48 [2];
  
  lVar3 = param_1;
  do {
    lVar3 = *(long *)(lVar3 + 0x10);
  } while (*(int *)(*(long *)(lVar3 + 8) + 0xa4) != DAT_10184dd68);
  lVar2 = *(long *)(lVar3 + 0x40);
  fVar4 = *(float *)(lVar2 + 0x4c) + *(float *)(lVar2 + 0x100) * (*(float *)(lVar2 + 0x268) + 1.0);
  fVar5 = (float)NEON_fminnm(fVar4 + fVar4 * *(float *)(lVar2 + 0x1b4),DAT_101e94334);
  fVar4 = DAT_101e94274;
  if (DAT_101e94274 <= fVar5) {
    fVar4 = fVar5;
  }
  local_48[0] = DAT_101d90b34;
  fVar5 = (float)FUN_1003dfee8(lVar3,local_48,0,9);
  fVar4 = fVar5 * fVar4 - fVar4;
  plVar1 = *(long **)(param_1 + 0x1c8);
  if (plVar1 != (long *)0x0) {
    if (*(int *)(param_1 + 0x1d0) == (int)plVar1[1]) {
      lVar2 = (**(code **)(*plVar1 + 0x10))();
      if (((lVar2 != 0) && (*(int *)(lVar2 + 0x260) != *(int *)(param_2 + 0x260))) &&
         (*(char *)(param_2 + 0x2f6) < '\0')) {
        fVar5 = (float)FUN_1003df710(lVar3,1,1);
        fVar4 = fVar5 * fVar4;
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x1c8) = 0;
      *(undefined4 *)(param_1 + 0x1d0) = DAT_101dc0b88;
    }
  }
  return fVar4;
}




float FUN_1003aad38(long param_1,long param_2)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  undefined1 local_45;
  float local_44;
  
  lVar4 = *(long *)(param_1 + 0x10);
  while ((lVar4 != 0 && (*(int *)(*(long *)(lVar4 + 8) + 0xa4) != DAT_10184dd68))) {
    lVar4 = *(long *)(lVar4 + 0x10);
  }
  lVar3 = *(long *)(lVar4 + 0x40);
  fVar5 = *(float *)(lVar3 + 0x48) + *(float *)(lVar3 + 0xfc) * (*(float *)(lVar3 + 0x264) + 1.0);
  NEON_fminnm(fVar5 + fVar5 * *(float *)(lVar3 + 0x1b0),DAT_101e94330);
  local_44 = DAT_101e94270;
  fVar5 = *(float *)(lVar3 + 0xb0) + *(float *)(lVar3 + 0x164) * (*(float *)(lVar3 + 0x2cc) + 1.0);
  fVar6 = (float)NEON_fminnm(fVar5 + fVar5 * *(float *)(lVar3 + 0x218),DAT_101e94398);
  fVar5 = DAT_101e942d8;
  if (DAT_101e942d8 <= fVar6) {
    fVar5 = fVar6;
  }
  local_45 = 0;
  iVar1 = _rand();
  if ((float)iVar1 * 4.656613e-10 <= fVar5) {
    local_45 = 1;
  }
  FUN_1003aaed8(lVar4,&local_44,&local_45,0);
  fVar5 = (float)FUN_1003df74c(lVar4,**(undefined8 **)(*(long *)(lVar4 + 0x38) + 0x228),0xb);
  fVar5 = local_44 + fVar5;
  plVar2 = *(long **)(param_1 + 0x1c8);
  if (plVar2 != (long *)0x0) {
    if (*(int *)(param_1 + 0x1d0) == (int)plVar2[1]) {
      lVar3 = (**(code **)(*plVar2 + 0x10))();
      if (((lVar3 != 0) && (*(int *)(lVar3 + 0x260) != *(int *)(param_2 + 0x260))) &&
         (*(char *)(param_2 + 0x2f6) < '\0')) {
        fVar6 = (float)FUN_1003df710(lVar4,1,1);
        fVar5 = fVar6 * fVar5;
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x1c8) = 0;
      *(undefined4 *)(param_1 + 0x1d0) = DAT_101dc0b88;
    }
  }
  return fVar5;
}




void FUN_1003aaed8(long param_1,float *param_2,undefined1 *param_3,int param_4)

{
  int iVar1;
  long lVar2;
  float fVar3;
  
  if (param_4 == 0) {
    iVar1 = FUN_1003c65d4(param_1);
    *param_3 = (char)iVar1;
    if (iVar1 == 0) {
      return;
    }
  }
  else {
    *param_3 = 1;
  }
  lVar2 = *(long *)(param_1 + 0x40);
  fVar3 = *(float *)(lVar2 + 0xb4) + *(float *)(lVar2 + 0x168) * (*(float *)(lVar2 + 0x2d0) + 1.0);
  NEON_fminnm(fVar3 + fVar3 * *(float *)(lVar2 + 0x21c),DAT_101e9439c);
  *param_2 = *param_2 + *param_2 * DAT_101e942dc;
  return;
}




float FUN_1003aaf6c(long param_1,long param_2)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined1 local_45;
  float local_44;
  
  lVar4 = *(long *)(param_1 + 0x10);
  while ((lVar4 != 0 && (*(int *)(*(long *)(lVar4 + 8) + 0xa4) != DAT_10184dd68))) {
    lVar4 = *(long *)(lVar4 + 0x10);
  }
  lVar3 = *(long *)(lVar4 + 0x40);
  fVar5 = *(float *)(lVar3 + 0x48) + *(float *)(lVar3 + 0xfc) * (*(float *)(lVar3 + 0x264) + 1.0);
  NEON_fminnm(fVar5 + fVar5 * *(float *)(lVar3 + 0x1b0),DAT_101e94330);
  local_44 = DAT_101e94270;
  fVar5 = *(float *)(lVar3 + 0xb0) + *(float *)(lVar3 + 0x164) * (*(float *)(lVar3 + 0x2cc) + 1.0);
  fVar6 = (float)NEON_fminnm(fVar5 + fVar5 * *(float *)(lVar3 + 0x218),DAT_101e94398);
  fVar5 = DAT_101e942d8;
  if (DAT_101e942d8 <= fVar6) {
    fVar5 = fVar6;
  }
  local_45 = 0;
  iVar1 = _rand();
  if ((float)iVar1 * 4.656613e-10 <= fVar5) {
    local_45 = 1;
  }
  FUN_1003aaed8(lVar4,&local_44,&local_45,0);
  fVar6 = (float)FUN_1003df74c(lVar4,**(undefined8 **)(*(long *)(lVar4 + 0x38) + 0x228),0xb);
  fVar5 = local_44;
  fVar7 = (float)FUN_1003dfe60(lVar4,0,3,4,0);
  fVar6 = fVar6 + fVar5 + fVar7;
  plVar2 = *(long **)(param_1 + 0x1c8);
  if (plVar2 != (long *)0x0) {
    if (*(int *)(param_1 + 0x1d0) == (int)plVar2[1]) {
      lVar3 = (**(code **)(*plVar2 + 0x10))();
      if (((lVar3 != 0) && (*(int *)(lVar3 + 0x260) != *(int *)(param_2 + 0x260))) &&
         (*(char *)(param_2 + 0x2f6) < '\0')) {
        fVar5 = (float)FUN_1003df710(lVar4,1,1);
        fVar6 = fVar5 * fVar6;
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x1c8) = 0;
      *(undefined4 *)(param_1 + 0x1d0) = DAT_101dc0b88;
    }
  }
  return fVar6;
}




undefined1  [16] FUN_1003ab12c(long param_1,long param_2)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  float fVar6;
  undefined1 auVar7 [16];
  ulong uVar8;
  undefined8 uVar9;
  undefined4 local_48 [2];
  
  lVar5 = *(long *)(param_1 + 0x10);
  while ((lVar5 != 0 && (*(int *)(*(long *)(lVar5 + 8) + 0xa4) != DAT_10184dd68))) {
    lVar5 = *(long *)(lVar5 + 0x10);
  }
  auVar7 = FUN_1003dfe60(lVar5,0,3,0x19,0);
  puVar1 = PTR_s_Buff_Grace_Talent_SealOfRetribut_10185a750;
  uVar9 = auVar7._8_8_;
  uVar8 = auVar7._0_8_;
  lVar3 = FUN_100345d90(*(undefined4 *)(lVar5 + 0x260));
  if ((lVar3 != 0) && (iVar2 = FUN_1003a47d0(lVar3,puVar1), iVar2 != 0)) {
    local_48[0] = DAT_101d90b34;
    fVar6 = (float)FUN_1003dfee8(lVar5,local_48,0,9);
    uVar8 = (ulong)(uint)(fVar6 * auVar7._0_4_);
    uVar9 = 0;
  }
  plVar4 = *(long **)(param_1 + 0x1c8);
  if (plVar4 != (long *)0x0) {
    if (*(int *)(param_1 + 0x1d0) == (int)plVar4[1]) {
      lVar3 = (**(code **)(*plVar4 + 0x10))();
      if (((lVar3 != 0) && (*(int *)(lVar3 + 0x260) != *(int *)(param_2 + 0x260))) &&
         (*(char *)(param_2 + 0x2f6) < '\0')) {
        fVar6 = (float)FUN_1003df710(lVar5,1,1);
        uVar8 = (ulong)(uint)(fVar6 * (float)uVar8);
        uVar9 = 0;
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x1c8) = 0;
      *(undefined4 *)(param_1 + 0x1d0) = DAT_101dc0b88;
    }
  }
  auVar7._8_8_ = uVar9;
  auVar7._0_8_ = uVar8;
  return auVar7;
}




void FUN_1003ab25c(long param_1)

{
  long lVar1;
  float fVar2;
  undefined **local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined1 local_38;
  undefined4 local_34;
  undefined4 uStack_30;
  float local_2c;
  undefined1 local_28;
  
  if (DAT_101d23a38 != '\0') {
    do {
      param_1 = *(long *)(param_1 + 0x10);
    } while (*(int *)(*(long *)(param_1 + 8) + 0xa4) != DAT_10184dd68);
    local_2c = (float)FUN_1003df710(param_1,5,1);
    lVar1 = *(long *)(param_1 + 0x40);
    fVar2 = *(float *)(lVar1 + 0x74) + *(float *)(lVar1 + 0x128) * (*(float *)(lVar1 + 0x290) + 1.0)
    ;
    NEON_fminnm(fVar2 + fVar2 * *(float *)(lVar1 + 0x1dc),DAT_101e9435c);
    fVar2 = DAT_101e9429c;
    if (DAT_101e9429c <= 0.1) {
      fVar2 = 0.1;
    }
    local_34 = *(undefined4 *)(param_1 + 0x260);
    local_48 = 0;
    uStack_40 = 0;
    local_38 = 0;
    local_50 = &PTR_FUN_101497330;
    uStack_30 = DAT_101d2c66c;
    local_2c = local_2c / fVar2;
    local_28 = 1;
    FUN_10049650c(&local_50,&DAT_101e47d30);
  }
  return;
}




void FUN_1003ab348(undefined4 param_1,undefined8 *param_2,undefined4 param_3,undefined4 param_4,
                  undefined1 param_5)

{
  param_2[1] = 0;
  param_2[2] = 0;
  *(undefined1 *)(param_2 + 3) = 0;
  *param_2 = &PTR_FUN_101497330;
  *(undefined4 *)((long)param_2 + 0x1c) = param_3;
  *(undefined4 *)(param_2 + 4) = param_4;
  *(undefined4 *)((long)param_2 + 0x24) = param_1;
  *(undefined1 *)(param_2 + 5) = param_5;
  return;
}




void FUN_1003ab36c(void)

{
  return;
}




float FUN_1003ab370(undefined8 param_1)

{
  float fVar1;
  
  fVar1 = (float)FUN_1003df710(param_1,4,1);
  return -fVar1;
}




void FUN_1003ab390(long param_1,undefined8 *param_2,undefined4 *param_3)

{
  long lVar1;
  float fVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  undefined4 local_78 [2];
  undefined1 auStack_70 [48];
  undefined8 local_40;
  undefined4 local_38;
  
  lVar1 = *(long *)(param_1 + 0x10);
  while ((lVar1 != 0 && (*(int *)(*(long *)(lVar1 + 8) + 0xa4) != DAT_10184dd68))) {
    lVar1 = *(long *)(lVar1 + 0x10);
  }
  local_78[0] = 0x747cbb1d;
  FUN_1003ab468(lVar1,local_78,auStack_70);
  *param_2 = local_40;
  *(undefined4 *)(param_2 + 1) = local_38;
  fVar2 = *(float *)(lVar1 + 0x240);
  fVar5 = *(float *)(lVar1 + 0x248);
  fVar4 = fVar2 * fVar2 + *(float *)(lVar1 + 0x244) * *(float *)(lVar1 + 0x244) + fVar5 * fVar5;
  if (1e-08 <= fVar4) {
    fVar4 = SQRT(fVar4);
    fVar2 = fVar2 / fVar4;
    fVar5 = fVar5 / fVar4;
  }
  else {
    fVar2 = 1.0;
    fVar5 = 0.0;
  }
  uVar3 = _atan2f(fVar5,fVar2);
  *param_3 = uVar3;
  return;
}




undefined8 FUN_1003ab468(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float local_70;
  float fStack_6c;
  float local_68;
  undefined4 local_64;
  float local_60;
  float fStack_5c;
  float local_58;
  undefined4 local_54;
  float local_50;
  float fStack_4c;
  float local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_34;
  
  plVar1 = *(long **)(param_1 + 0x70);
  uVar2 = 0;
  if (plVar1 != (long *)0x0) {
    if (*(int *)(param_1 + 0x78) == (int)plVar1[1]) {
      uVar2 = (**(code **)(*plVar1 + 0x10))();
    }
    else {
      uVar2 = 0;
      *(undefined8 *)(param_1 + 0x70) = 0;
      *(undefined4 *)(param_1 + 0x78) = DAT_101dc0b88;
    }
  }
  uVar2 = FUN_100464130(uVar2,param_2,param_3);
  if ((int)uVar2 != 0) {
    local_40 = *(undefined8 *)(param_1 + 0x250);
    local_38 = *(undefined4 *)(param_1 + 600);
    fVar3 = *(float *)(param_1 + 0x240);
    fVar4 = *(float *)(param_1 + 0x244);
    fVar5 = *(float *)(param_1 + 0x248);
    fVar6 = 1.0 / SQRT(fVar3 * fVar3 + fVar4 * fVar4 + fVar5 * fVar5);
    local_70 = fVar5 * fVar6 * 1.0 - fVar4 * fVar6 * 0.0;
    fStack_6c = fVar3 * fVar6 * 0.0 - fVar5 * fVar6 * 0.0;
    local_68 = fVar4 * fVar6 * 0.0 - fVar3 * fVar6 * 1.0;
    fVar3 = 1.0 / SQRT(local_70 * local_70 + fStack_6c * fStack_6c + local_68 * local_68);
    local_70 = local_70 * fVar3;
    fStack_6c = fStack_6c * fVar3;
    local_68 = local_68 * fVar3;
    fVar4 = fStack_6c * 0.0 - local_68 * 1.0;
    fVar5 = local_68 * 0.0 - local_70 * 0.0;
    fVar6 = local_70 * 1.0 - fStack_6c * 0.0;
    local_64 = 0;
    local_54 = 0;
    local_44 = 0;
    local_34 = 0x3f800000;
    fVar3 = *(float *)(param_1 + 0x2e8) + *(float *)(*(long *)(param_1 + 0x38) + 100);
    local_70 = fVar3 * local_70;
    fStack_6c = fVar3 * fStack_6c;
    local_68 = fVar3 * local_68;
    local_60 = fVar3 * 0.0;
    fStack_5c = fVar3 * 1.0;
    local_58 = fVar3 * 0.0;
    local_48 = 1.0 / SQRT(fVar4 * fVar4 + fVar5 * fVar5 + fVar6 * fVar6);
    local_50 = fVar4 * fVar3 * local_48;
    fStack_4c = fVar5 * fVar3 * local_48;
    local_48 = fVar6 * fVar3 * local_48;
    FUN_10002a9fc(param_3,param_3,&local_70);
  }
  return uVar2;
}




void FUN_1003ab624(undefined8 param_1,uint param_2)

{
  char *pcVar1;
  byte bVar2;
  undefined *puVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  code *local_60;
  undefined4 local_58;
  
  plVar5 = (long *)FUN_10000e26c();
  FUN_1003a985c(param_1,plVar5);
  pcVar1 = "Effect_Grace_A_Retribution";
  if (param_2 == 0) {
    pcVar1 = "Effect_Grace_AA_Impact";
  }
  (**(code **)(*plVar5 + 0x50))(plVar5,pcVar1,FUN_1003ab390);
  lVar6 = FUN_1003e10f0();
  bVar2 = *(byte *)(lVar6 + 0xe5);
  uVar8 = _cosf(0x3f490fdb);
  lVar6 = FUN_10000ed74();
  FUN_1003a985c(param_1,lVar6);
  *(undefined8 *)(lVar6 + 0x18) = 0;
  *(undefined1 *)(lVar6 + 0x20) = 1;
  *(undefined8 *)(lVar6 + 0x24) = 0;
  *(undefined8 *)(lVar6 + 0x34) = 0;
  *(undefined8 *)(lVar6 + 0x2c) = 0;
  *(undefined4 *)(lVar6 + 0x3c) = 0;
  uVar9 = NEON_fmov(0xbf800000,4);
  *(undefined8 *)(lVar6 + 0x40) = uVar9;
  *(undefined4 *)(lVar6 + 0x48) = uVar8;
  *(undefined8 *)(lVar6 + 0x4c) = 0x3f266666bf800000;
  *(undefined1 *)(lVar6 + 0x54) = 0xff;
  *(undefined8 *)(lVar6 + 0x60) = 0xffffffff00000000;
  *(undefined8 *)(lVar6 + 0x58) = 0xffffffff00040000;
  *(byte *)(lVar6 + 0x6a) = bVar2 | 0x14;
  *(undefined2 *)(lVar6 + 0x68) = 0x6120;
  bVar4 = DAT_101d23a38 != '\0';
  *(undefined4 *)(lVar6 + 0xa4) = 0x40b00000;
  *(byte *)(lVar6 + 0xa8) = *(byte *)(lVar6 + 0xa8) & 0xf0 | bVar4;
  puVar3 = PTR_s_Buff_SlowDecayingUsingBuffVar_10185a460;
  lVar6 = FUN_10000bd3c();
  FUN_1003a985c(param_1,lVar6);
  *(undefined **)(lVar6 + 0x10) = puVar3;
  *(code **)(lVar6 + 0x30) = FUN_1003aba4c;
  *(undefined2 *)(lVar6 + 0x68) = 1;
  *(byte *)(lVar6 + 0x6a) = *(byte *)(lVar6 + 0x6a) & 0xfe;
  *(code **)(lVar6 + 0x58) = FUN_1003aabbc;
  plVar5 = (long *)FUN_10000cb8c();
  FUN_1003a985c(param_1,plVar5);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x50))(plVar5);
  if (param_2 == 0) {
    local_60 = FUN_1003aad38;
    local_58 = 5;
    (**(code **)(*plVar5 + 0x10))(plVar5,&local_60,0,5);
    puVar3 = PTR_s_Buff_Grace_Talent_SealOfRetribut_10185a750;
    lVar6 = FUN_10000c838();
    FUN_1003a985c(param_1,lVar6);
    *(undefined8 *)(lVar6 + 0x48) = 0;
    *(undefined8 *)(lVar6 + 0x50) = 0;
    *(undefined1 *)(lVar6 + 0x50) = 2;
    *(undefined **)(lVar6 + 0x40) = puVar3;
    *(ushort *)(lVar6 + 0x58) = *(ushort *)(lVar6 + 0x58) & 0xf000 | 0x20;
    plVar5 = (long *)FUN_10000cb8c();
    FUN_1003a985c(lVar6 + 0x18,plVar5);
    plVar5 = (long *)(**(code **)(*plVar5 + 0x50))(plVar5);
    local_60 = FUN_1003aac0c;
    local_58 = 5;
    (**(code **)(*plVar5 + 0x10))(plVar5,&local_60,1,9);
    lVar6 = FUN_10000c3b0();
    FUN_1003a985c(param_1,lVar6);
    *(code **)(lVar6 + 0x10) = FUN_1003ab25c;
  }
  else {
    local_60 = FUN_1003ab12c;
    local_58 = 5;
    (**(code **)(*plVar5 + 0x10))(plVar5,&local_60,1,0xb);
    plVar5 = (long *)FUN_10000cb8c();
    FUN_1003a985c(param_1,plVar5);
    plVar5 = (long *)(**(code **)(*plVar5 + 0x50))(plVar5);
    local_60 = FUN_1003aaf6c;
    local_58 = 5;
    (**(code **)(*plVar5 + 0x10))(plVar5,&local_60,0,7);
  }
  lVar6 = FUN_10000c8e8();
  FUN_1003a985c(param_1,lVar6);
  lVar7 = FUN_10049ae50(lVar6 + 0x10);
  *(undefined4 *)(lVar7 + 0x18) = 0;
  *(undefined4 *)(lVar7 + 8) = 0;
  *(undefined4 *)(lVar7 + 0x10) = 1;
  if ((param_2 & 1) == 0) {
    plVar5 = (long *)FUN_10000dc58();
    FUN_1003a985c(lVar6 + 0xb0,plVar5);
    plVar5 = (long *)(**(code **)(*plVar5 + 0x50))(plVar5,PTR_s_Ability__Grace__A_101859928);
    local_60 = FUN_1003ab370;
    local_58 = 3;
    (**(code **)(*plVar5 + 0x28))(plVar5,&local_60);
  }
  plVar5 = (long *)FUN_10000dc58();
  FUN_1003a985c(lVar6 + 0xb0,plVar5);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x50))(plVar5,PTR_s_Ability__Grace__B_101859930);
  local_60 = FUN_1003ab370;
  local_58 = 3;
  (**(code **)(*plVar5 + 0x28))(plVar5,&local_60);
  plVar5 = (long *)FUN_10000dc58();
  FUN_1003a985c(lVar6 + 0xb0,plVar5);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x50))(plVar5,PTR_s_Ability__Grace__C_101859938);
  local_60 = FUN_1003ab370;
  local_58 = 3;
  (**(code **)(*plVar5 + 0x28))(plVar5,&local_60);
  uVar9 = FUN_10000c784();
  FUN_1003a985c(param_1,uVar9);
  return;
}




void FUN_1003aba4c(undefined8 param_1)

{
  FUN_1003df710(param_1,3,0x91);
  return;
}




void FUN_1003aba58(long param_1,undefined4 *param_2)

{
  long lVar1;
  float fVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  
  lVar1 = param_1;
  do {
    lVar1 = *(long *)(lVar1 + 0x10);
  } while (*(int *)(*(long *)(lVar1 + 8) + 0xa4) != DAT_10184dd68);
  fVar2 = *(float *)(param_1 + 0x1d8) - *(float *)(lVar1 + 0x250);
  fVar4 = *(float *)(param_1 + 0x1dc) - (*(float *)(lVar1 + 0x254) + *(float *)(lVar1 + 0x2ec));
  fVar5 = *(float *)(param_1 + 0x1e0) - *(float *)(lVar1 + 600);
  fVar4 = fVar2 * fVar2 + fVar4 * fVar4 + fVar5 * fVar5;
  if (0.001 <= fVar4) {
    fVar4 = SQRT(fVar4);
    fVar2 = fVar2 / fVar4;
    fVar5 = fVar5 / fVar4;
  }
  else {
    fVar2 = 0.0;
    fVar5 = 1.0;
  }
  uVar3 = _atan2f(fVar5,fVar2);
  *param_2 = uVar3;
  return;
}




undefined8 FUN_1003abb08(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  undefined4 uVar5;
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
  plVar2 = (long *)(**(code **)(*plVar2 + 0x68))(plVar2,"Bone_Mace");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Grace_AA");
  local_50[0] = 0x3fa00000;
  local_48 = 1;
  plVar2 = (long *)(**(code **)(*plVar2 + 0x60))(plVar2,local_50);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,1);
  (**(code **)(*plVar2 + 0xb0))(plVar2,1);
  plVar2 = (long *)thunk_FUN_10000e0ac();
  FUN_1003a985c(&local_40,plVar2);
  (**(code **)(*plVar2 + 0x58))(plVar2,param_1);
  lVar1 = FUN_10000ceb8();
  FUN_1003a985c(&local_40,lVar1);
  *(code **)(lVar1 + 0x10) = FUN_1003a24a0;
  *(code **)(lVar1 + 0x18) = FUN_1003c5148;
  uVar3 = FUN_10000bc94();
  FUN_1003a985c(&local_40,uVar3);
  lVar1 = FUN_10000cae4();
  FUN_1003a985c(&local_40,lVar1);
  *(undefined8 *)(lVar1 + 0x10) = param_2;
  lVar1 = FUN_10000e474();
  FUN_1003a985c(&local_40,lVar1);
  *(undefined4 *)(lVar1 + 0x10) = 1;
  *(char **)(lVar1 + 0x18) = "Effect_Grace_AA_Impact_Lt";
  *(undefined8 *)(lVar1 + 0x28) = 0;
  *(undefined4 *)(lVar1 + 0x30) = 0x3f800000;
  *(byte *)(lVar1 + 0x58) = *(byte *)(lVar1 + 0x58) & 0xfe | 0x10;
  *(undefined4 *)(lVar1 + 0x48) = 0;
  *(uint *)(lVar1 + 0x4c) = (uint)lVar1 & 0xffff;
  *(code **)(lVar1 + 0x40) = FUN_1003aba58;
  uVar3 = FUN_10000c784();
  FUN_1003a985c(&local_40,uVar3);
  lVar1 = FUN_10000e524();
  FUN_1003a985c(&local_40,lVar1);
  uVar3 = FUN_1010a1520();
  lVar4 = FUN_1010a0e0c(uVar3,0,"*KindredSoundBalance*",0);
  uVar5 = FUN_1003abdc8(*(undefined4 *)(lVar4 + 0x3d0));
  *(undefined2 *)(lVar1 + 0x30) = 0x3ff;
  *(undefined4 *)(lVar1 + 0x40) = 0xffffffff;
  *(undefined4 *)(lVar1 + 0x34) = 1;
  *(undefined4 *)(lVar1 + 0x3c) = uVar5;
  *(byte *)(lVar1 + 0x38) = *(byte *)(lVar1 + 0x38) & 0xf8 | 4;
  *(undefined8 *)(lVar1 + 0x48) = 0;
  *(char **)(lVar1 + 0x10) = "Sound_Grace_Light_Impact_01";
  *(char **)(lVar1 + 0x18) = "Sound_Grace_Light_Impact_02";
  *(char **)(lVar1 + 0x20) = "Sound_Grace_Light_Impact_03";
  uVar3 = FUN_10000f034();
  FUN_1003a985c(&local_40,uVar3);
  lVar1 = FUN_10000ceb8();
  FUN_1003a985c(&local_40,lVar1);
  *(code **)(lVar1 + 0x10) = FUN_1003a24a0;
  *(code **)(lVar1 + 0x18) = FUN_1003c5158;
  FUN_1003ab624(&local_40,0);
  plVar2 = (long *)FUN_10000bdf0();
  FUN_1003a985c(&local_40,plVar2);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x50))
                             (plVar2,PTR_s_Buff_Grace_PlayRetributionImpact_10185a758);
  local_50[0] = 0x3e4ccccd;
  local_48 = 1;
  (**(code **)(*plVar2 + 0x18))(plVar2,local_50);
  return local_40;
}




float FUN_1003abdc8(float param_1)

{
  undefined8 uVar1;
  long lVar2;
  float fVar3;
  
  uVar1 = FUN_1010a1520();
  lVar2 = FUN_1010a0e0c(uVar1,0,"*KindredSoundBalance*",0);
  fVar3 = *(float *)(lVar2 + 4);
  uVar1 = FUN_1010a1520();
  lVar2 = FUN_1010a0e0c(uVar1,0,"*KindredSoundBalance*",0);
  return fVar3 + param_1 + *(float *)(lVar2 + 0x3cc);
}




void FUN_1003abe2c(long param_1,undefined8 param_2,undefined4 *param_3,undefined4 *param_4,
                  undefined4 *param_5)

{
  long lVar1;
  float fVar2;
  
  do {
    param_1 = *(long *)(param_1 + 0x10);
  } while (*(int *)(*(long *)(param_1 + 8) + 0xa4) != DAT_10184dd68);
  lVar1 = *(long *)(param_1 + 0x40);
  fVar2 = *(float *)(lVar1 + 0x48) + *(float *)(lVar1 + 0xfc) * (*(float *)(lVar1 + 0x264) + 1.0);
  NEON_fminnm(fVar2 + fVar2 * *(float *)(lVar1 + 0x1b0),DAT_101e94330);
  *param_3 = DAT_101e94270;
  *param_4 = 0;
  *param_5 = 0;
  return;
}




void FUN_1003abe9c(long param_1,undefined8 param_2,float *param_3,undefined4 *param_4,
                  undefined4 *param_5,undefined1 *param_6)

{
  float fVar1;
  long lVar2;
  float fVar3;
  
  fVar1 = DAT_101e94270;
  do {
    param_1 = *(long *)(param_1 + 0x10);
  } while (*(int *)(*(long *)(param_1 + 8) + 0xa4) != DAT_10184dd68);
  lVar2 = *(long *)(param_1 + 0x40);
  fVar3 = *(float *)(lVar2 + 0x48) + *(float *)(lVar2 + 0xfc) * (*(float *)(lVar2 + 0x264) + 1.0);
  NEON_fminnm(fVar3 + fVar3 * *(float *)(lVar2 + 0x1b0),DAT_101e94330);
  *param_3 = DAT_101e94270;
  *param_4 = 0;
  *param_5 = 0;
  *param_6 = 1;
  fVar3 = *(float *)(lVar2 + 0xb4) + *(float *)(lVar2 + 0x168) * (*(float *)(lVar2 + 0x2d0) + 1.0);
  NEON_fminnm(fVar3 + fVar3 * *(float *)(lVar2 + 0x21c),DAT_101e9439c);
  *param_3 = fVar1 + fVar1 * DAT_101e942dc;
  return;
}




void FUN_1003abf50(long param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  undefined4 uVar6;
  
  plVar2 = *(long **)(param_1 + 0x1c8);
  if (plVar2 != (long *)0x0) {
    if (*(int *)(param_1 + 0x1d0) == (int)plVar2[1]) {
      lVar3 = (**(code **)(*plVar2 + 0x10))();
      if (lVar3 != 0) {
        uVar6 = *(undefined4 *)(param_1 + 0x1e0);
        *param_2 = *(undefined4 *)(param_1 + 0x1d8);
        *param_3 = uVar6;
        goto LAB_1003ac02c;
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x1c8) = 0;
      *(undefined4 *)(param_1 + 0x1d0) = DAT_101dc0b88;
    }
  }
  lVar3 = *(long *)(param_1 + 0x10);
  iVar4 = *(int *)(*(long *)(lVar3 + 8) + 0xa4);
  lVar5 = lVar3;
  iVar1 = iVar4;
  while (iVar1 != DAT_10184dd68) {
    lVar5 = *(long *)(lVar5 + 0x10);
    iVar1 = *(int *)(*(long *)(lVar5 + 8) + 0xa4);
  }
  uVar6 = *(undefined4 *)(lVar5 + 600);
  *param_2 = *(undefined4 *)(lVar5 + 0x250);
  *param_3 = uVar6;
  while (iVar4 != DAT_10184dd68) {
    lVar3 = *(long *)(lVar3 + 0x10);
    iVar4 = *(int *)(*(long *)(lVar3 + 8) + 0xa4);
  }
LAB_1003ac02c:
  *param_4 = *(undefined4 *)(lVar3 + 0x260);
  return;
}




void FUN_1003ac044(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = FUN_10000d8b8();
  FUN_1003a985c(param_1,lVar1);
  *(undefined1 *)(lVar1 + 0x10) = 1;
  lVar1 = FUN_10000ef8c();
  FUN_1003a985c(param_1,lVar1);
  *(byte *)(lVar1 + 0x10) = *(byte *)(lVar1 + 0x10) & 0xe7 | 4;
  return;
}




void FUN_1003ac0a0(undefined8 param_1)

{
  FUN_1003dfe60(param_1,0,5,0x19,0);
  return;
}




long FUN_1003ac0b4(undefined8 param_1,undefined8 param_2)

{
  byte bVar1;
  bool bVar2;
  long lVar3;
  
  lVar3 = FUN_1003e10f0();
  bVar1 = *(byte *)(lVar3 + 0xe5);
  lVar3 = FUN_10000ed74();
  FUN_1003a985c(param_1,lVar3);
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
  *(undefined8 *)(lVar3 + 0x58) = 0xffffffff00000001;
  *(byte *)(lVar3 + 0x6a) = bVar1 | 0x14;
  *(undefined2 *)(lVar3 + 0x68) = 0x4110;
  bVar2 = DAT_101d23a38 != '\0';
  *(undefined8 *)(lVar3 + 0x78) = param_2;
  *(byte *)(lVar3 + 0xa8) = *(byte *)(lVar3 + 0xa8) & 0xf0 | bVar2 | 8;
  return lVar3;
}




void FUN_1003ac17c(undefined8 param_1)

{
  FUN_1003dfe60(param_1,0,8,0x19,0);
  return;
}




void FUN_1003ac190(undefined8 param_1)

{
  FUN_1003dfe60(param_1,0,6,0x89,0);
  return;
}




void FUN_1003ac1a4(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_10000ceb8();
  FUN_1003a985c(param_1,lVar1);
  *(undefined4 *)(lVar1 + 0x2c) = 0x3dcccccd;
  *(undefined8 *)(lVar1 + 0x10) = 0;
  uVar2 = FUN_10000f9c0();
  FUN_1003a985c(param_1,uVar2);
  return;
}




void FUN_1003ac1f0(undefined8 param_1)

{
  FUN_1003df710(param_1,7,1);
  return;
}




void FUN_1003ac1fc(undefined8 param_1,undefined8 param_2,undefined4 *param_3,undefined4 *param_4)

{
  *param_4 = 0x40000000;
  *param_3 = 0x40800000;
  return;
}




void FUN_1003ac210(undefined4 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = FUN_10000bb2c();
  FUN_1003a985c(param_2,uVar1);
  lVar2 = FUN_10000bd3c();
  FUN_1003a985c(param_2,lVar2);
  *(undefined8 *)(lVar2 + 0x10) = param_3;
  *(undefined4 *)(lVar2 + 0x18) = param_1;
  *(undefined2 *)(lVar2 + 0x68) = 1;
  *(byte *)(lVar2 + 0x6a) = *(byte *)(lVar2 + 0x6a) & 0xfe;
  uVar1 = FUN_10000c784();
  FUN_1003a985c(param_2,uVar1);
  return;
}




void FUN_1003ac290(undefined8 param_1)

{
  FUN_1003dfe60(param_1,1,4,0x19,0);
  return;
}




void FUN_1003ac2a4(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = FUN_10000c8e8();
  FUN_1003a985c(param_1,lVar1);
  lVar2 = FUN_10049ae50(lVar1 + 0x10);
  *(undefined4 *)(lVar2 + 0x18) = 0;
  *(undefined4 *)(lVar2 + 8) = 0;
  *(undefined4 *)(lVar2 + 0x10) = 1;
  FUN_1003a643c(lVar1 + 200,PTR_s_Buff_LockedFromMissing_10185bdf0,param_2);
  return;
}




void FUN_1003ac308(undefined8 param_1)

{
  FUN_1003dfe60(param_1,1,3,0x19,0);
  return;
}




undefined1  [16] FUN_1003ac31c(long param_1)

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
  
  lVar4 = *(long *)(param_1 + 0x10);
  while ((lVar4 != 0 && (*(int *)(*(long *)(lVar4 + 8) + 0xa4) != DAT_10184dd68))) {
    lVar4 = *(long *)(lVar4 + 0x10);
  }
  auVar6 = FUN_1003dfe60(lVar4,2,1,0x19,0);
  puVar1 = PTR_s_Buff_Grace_Talent_UnitedFront_10185a790;
  uVar8 = auVar6._8_8_;
  uVar7 = auVar6._0_8_;
  lVar3 = FUN_100345d90(*(undefined4 *)(lVar4 + 0x260));
  if ((lVar3 != 0) && (iVar2 = FUN_1003a47d0(lVar3,puVar1), iVar2 != 0)) {
    local_38[0] = DAT_101d90b24;
    fVar5 = (float)FUN_1003dfee8(lVar4,local_38,0,9);
    uVar7 = (ulong)(uint)(fVar5 * auVar6._0_4_);
    uVar8 = 0;
  }
  auVar6._8_8_ = uVar8;
  auVar6._0_8_ = uVar7;
  return auVar6;
}




void FUN_1003ac3d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = FUN_10000bc94();
  FUN_1003a985c(param_1,uVar1);
  lVar2 = FUN_10000bd3c();
  FUN_1003a985c(param_1,lVar2);
  *(undefined8 *)(lVar2 + 0x10) = param_2;
  *(undefined8 *)(lVar2 + 0x30) = param_3;
  *(undefined2 *)(lVar2 + 0x68) = 1;
  *(byte *)(lVar2 + 0x6a) = *(byte *)(lVar2 + 0x6a) & 0xfe;
  uVar1 = FUN_10000c784();
  FUN_1003a985c(param_1,uVar1);
  return;
}




void FUN_1003ac448(undefined8 param_1)

{
  FUN_1003dfe60(param_1,2,2,0x19,0);
  return;
}




void FUN_1003ac45c(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = FUN_10000d8b8();
  FUN_1003a985c(param_1,lVar1);
  *(undefined1 *)(lVar1 + 0x10) = 1;
  lVar1 = FUN_10000ef8c();
  FUN_1003a985c(param_1,lVar1);
  *(byte *)(lVar1 + 0x10) = *(byte *)(lVar1 + 0x10) & 0xe3 | 8;
  return;
}




undefined8
FUN_1003ac4b8(undefined8 param_1,char *param_2,undefined8 param_3,undefined8 *param_4,uint param_5,
             undefined8 *param_6,uint param_7)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  uint uVar7;
  byte bVar8;
  undefined8 uVar9;
  undefined8 local_70;
  undefined8 uStack_68;
  
  local_70 = 0;
  uStack_68 = 0;
  uVar3 = FUN_10000ef8c();
  FUN_1003a985c(&local_70,uVar3);
  lVar4 = FUN_10000dff8();
  FUN_1003a985c(&local_70,lVar4);
  *(undefined2 *)(lVar4 + 0x28) = 0x100;
  *(code **)(lVar4 + 0x30) = FUN_1003a24a0;
  FUN_1003a4e5c(lVar4 + 0x10,param_1);
  uVar2 = FUN_1004d2524("AttackToIdle");
  uVar2 = FUN_100015208("AttackToIdle",uVar2,0x12345678);
  *(undefined4 *)(lVar4 + 0x20) = uVar2;
  lVar4 = FUN_10000e524();
  FUN_1003a985c(&local_70,lVar4);
  uVar9 = *param_4;
  uVar3 = FUN_1010a1520();
  lVar5 = FUN_1010a0e0c(uVar3,0,"*KindredSoundBalance*",0);
  uVar2 = FUN_1003ac828(*(undefined4 *)(lVar5 + 0x3a8));
  *(undefined8 *)(lVar4 + 0x10) = uVar9;
  *(undefined2 *)(lVar4 + 0x30) = 0x1ff;
  *(undefined4 *)(lVar4 + 0x34) = 1;
  *(undefined4 *)(lVar4 + 0x3c) = uVar2;
  *(undefined4 *)(lVar4 + 0x40) = 0xffffffff;
  *(byte *)(lVar4 + 0x38) = *(byte *)(lVar4 + 0x38) & 0xf8 | 4;
  *(undefined8 *)(lVar4 + 0x48) = 0;
  if (1 < param_5) {
    lVar5 = (ulong)param_5 - 1;
    bVar8 = 1;
    do {
      param_4 = param_4 + 1;
      *(undefined8 *)(lVar4 + (ulong)bVar8 * 8 + 0x10) = *param_4;
      bVar8 = bVar8 + 1;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
    *(byte *)(lVar4 + 0x31) = bVar8;
  }
  lVar4 = FUN_10000ceb8();
  FUN_1003a985c(&local_70,lVar4);
  *(undefined4 *)(lVar4 + 0x2c) = 0x3e4ccccd;
  *(code **)(lVar4 + 0x10) = FUN_1003a24a0;
  lVar4 = FUN_10000e1b4();
  FUN_1003a985c(&local_70,lVar4);
  *(undefined8 *)(lVar4 + 0x40) = 0;
  *(ushort *)(lVar4 + 0x80) = *(ushort *)(lVar4 + 0x80) & 0xffec | 2;
  *(uint *)(lVar4 + 0x3c) = (uint)lVar4 & 0xffff;
  *(undefined8 *)(lVar4 + 0x20) = 0;
  *(undefined8 *)(lVar4 + 0x28) = 1;
  if (param_2 == (char *)0x0) {
    uVar7 = 0;
  }
  else {
    uVar7 = 0x811c9dc5;
    cVar1 = *param_2;
    while (cVar1 != '\0') {
      param_2 = param_2 + 1;
      uVar7 = (uVar7 ^ (int)cVar1) * 0x1000193;
      cVar1 = *param_2;
    }
  }
  *(uint *)(lVar4 + 0x10) = uVar7;
  lVar4 = FUN_10000ceb8();
  FUN_1003a985c(&local_70,lVar4);
  *(undefined4 *)(lVar4 + 0x2c) = 0x3dcccccd;
  *(code **)(lVar4 + 0x10) = FUN_1003a24a0;
  lVar4 = FUN_10000e524();
  FUN_1003a985c(&local_70,lVar4);
  uVar9 = *param_6;
  uVar3 = FUN_1010a1520();
  lVar5 = FUN_1010a0e0c(uVar3,0,"*KindredSoundBalance*",0);
  uVar2 = FUN_1003ac828(*(undefined4 *)(lVar5 + 0x3a8));
  *(undefined8 *)(lVar4 + 0x10) = uVar9;
  *(undefined2 *)(lVar4 + 0x30) = 0x1ff;
  *(undefined4 *)(lVar4 + 0x34) = 1;
  *(undefined4 *)(lVar4 + 0x3c) = uVar2;
  *(undefined4 *)(lVar4 + 0x40) = 0xffffffff;
  *(byte *)(lVar4 + 0x38) = *(byte *)(lVar4 + 0x38) & 0xf8 | 4;
  *(undefined8 *)(lVar4 + 0x48) = 0;
  if (1 < param_7) {
    lVar5 = (ulong)param_7 - 1;
    bVar8 = 1;
    do {
      param_6 = param_6 + 1;
      *(undefined8 *)(lVar4 + (ulong)bVar8 * 8 + 0x10) = *param_6;
      bVar8 = bVar8 + 1;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
    *(byte *)(lVar4 + 0x31) = bVar8;
  }
  uVar3 = FUN_10000bc94();
  FUN_1003a985c(&local_70,uVar3);
  lVar4 = FUN_10000c8e8();
  FUN_1003a985c(&local_70,lVar4);
  lVar5 = FUN_10049ab34(lVar4 + 0x10);
  *(undefined8 *)(lVar5 + 8) = DAT_10185a7b0;
  plVar6 = (long *)FUN_10000cb8c();
  FUN_1003a985c(lVar4 + 0xb0,plVar6);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x50))(plVar6);
  (**(code **)(*plVar6 + 0x38))(plVar6,"BONUS_DAMAGE",2);
  lVar4 = FUN_10000cae4();
  FUN_1003a985c(&local_70,lVar4);
  *(undefined8 *)(lVar4 + 0x10) = param_3;
  uVar3 = FUN_10000f034();
  FUN_1003a985c(&local_70,uVar3);
  return local_70;
}




float FUN_1003ac828(float param_1)

{
  undefined8 uVar1;
  long lVar2;
  float fVar3;
  
  uVar1 = FUN_1010a1520();
  lVar2 = FUN_1010a0e0c(uVar1,0,"*KindredSoundBalance*",0);
  fVar3 = *(float *)(lVar2 + 4);
  uVar1 = FUN_1010a1520();
  lVar2 = FUN_1010a0e0c(uVar1,0,"*KindredSoundBalance*",0);
  return fVar3 + param_1 + *(float *)(lVar2 + 0x3a4);
}




void FUN_1003ac88c(long param_1,undefined8 param_2,undefined4 *param_3,undefined4 *param_4,
                  undefined4 *param_5,undefined8 param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  long lVar3;
  float fVar4;
  
  uVar2 = DAT_101e94330;
  uVar1 = DAT_101e94270;
  do {
    param_1 = *(long *)(param_1 + 0x10);
  } while (*(int *)(*(long *)(param_1 + 8) + 0xa4) != DAT_10184dd68);
  lVar3 = *(long *)(param_1 + 0x40);
  fVar4 = *(float *)(lVar3 + 0x48) + *(float *)(lVar3 + 0xfc) * (*(float *)(lVar3 + 0x264) + 1.0);
  NEON_fminnm(fVar4 + fVar4 * *(float *)(lVar3 + 0x1b0),DAT_101e94330);
  *param_3 = DAT_101e94270;
  *param_4 = 0;
  *param_5 = 0;
  FUN_1003aaed8(uVar1,uVar1,uVar2,0x3f800000,param_1,param_3,param_6,0);
  return;
}




void FUN_1003ac908(long param_1,undefined8 param_2,float *param_3)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  lVar1 = param_1;
  do {
    lVar1 = *(long *)(lVar1 + 0x10);
  } while (*(int *)(*(long *)(lVar1 + 8) + 0xa4) != DAT_10184dd68);
  fVar2 = *(float *)(param_1 + 0x1d8) - *(float *)(lVar1 + 0x250);
  fVar4 = *(float *)(param_1 + 0x1dc) - (*(float *)(lVar1 + 0x254) + *(float *)(lVar1 + 0x2ec));
  fVar5 = *(float *)(param_1 + 0x1e0) - *(float *)(lVar1 + 600);
  fVar3 = (float)FUN_1003dfe60(lVar1,1,7,0x19,0);
  *param_3 = SQRT(fVar2 * fVar2 + fVar4 * fVar4 + fVar5 * fVar5) / fVar3;
  return;
}




void FUN_1003ac9ac(undefined8 param_1)

{
  FUN_1003dfe60(param_1,1,7,0x19,0);
  return;
}




float FUN_1003ac9c0(long param_1,undefined8 param_2)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float local_44;
  
  lVar1 = *(long *)(param_1 + 0x10);
  while ((lVar1 != 0 && (*(int *)(*(long *)(lVar1 + 8) + 0xa4) != DAT_10184dd68))) {
    lVar1 = *(long *)(lVar1 + 0x10);
  }
  FUN_1003ac908(param_1,param_2,&local_44);
  fVar2 = (float)FUN_1003dfe60(lVar1,1,8,0x19,0);
  fVar3 = (float)FUN_1003dfe60(lVar1,1,0xc,0x19,0);
  fVar4 = (float)FUN_1003dfe60(lVar1,1,9,0x19,0);
  return fVar3 + 0.1 + fVar2 + local_44 + fVar4;
}




void FUN_1003aca8c(undefined8 param_1)

{
  FUN_1003dfe60(param_1,1,8,0x19,0);
  return;
}




void FUN_1003acaa0(undefined8 param_1)

{
  FUN_1003dfe60(param_1,1,0xc,0x19,0);
  return;
}




void FUN_1003acab4(undefined8 param_1)

{
  FUN_1003dfe60(param_1,1,9,0x19,0);
  return;
}




void FUN_1003acac8(long param_1,long param_2)

{
  ushort uVar1;
  undefined4 uVar2;
  float fVar3;
  undefined4 uVar4;
  float fVar5;
  
  do {
    param_1 = *(long *)(param_1 + 0x10);
  } while (*(int *)(*(long *)(param_1 + 8) + 0xa4) != DAT_10184dd68);
  uVar2 = *(undefined4 *)(param_1 + 0x250);
  fVar3 = *(float *)(param_1 + 0x254);
  uVar4 = *(undefined4 *)(param_1 + 600);
  fVar5 = *(float *)(param_1 + 0x2ec);
  uVar1 = *(ushort *)(param_2 + 0x58);
  *(long *)(param_2 + 8) = param_1;
  *(undefined4 *)(param_2 + 0x48) = 0x40000;
  *(undefined4 *)(param_2 + 0x14) = uVar2;
  *(float *)(param_2 + 0x18) = fVar5 + fVar3;
  *(undefined4 *)(param_2 + 0x1c) = uVar4;
  *(undefined4 *)(param_2 + 0x30) = 0x41440000;
  uVar2 = _cosf(0x3fdf66f4);
  *(undefined4 *)(param_2 + 0x38) = uVar2;
  *(ushort *)(param_2 + 0x58) = uVar1 & 0xff8f | 0xa020;
  *(undefined4 *)(param_2 + 0x40) = 0x3f59999a;
  return;
}




void FUN_1003acb84(long param_1,long param_2)

{
  undefined4 uVar1;
  float fVar2;
  undefined4 uVar3;
  float fVar4;
  
  do {
    param_1 = *(long *)(param_1 + 0x10);
  } while (*(int *)(*(long *)(param_1 + 8) + 0xa4) != DAT_10184dd68);
  uVar1 = *(undefined4 *)(param_1 + 0x250);
  fVar2 = *(float *)(param_1 + 0x254);
  uVar3 = *(undefined4 *)(param_1 + 600);
  fVar4 = *(float *)(param_1 + 0x2ec);
  *(long *)(param_2 + 8) = param_1;
  *(undefined4 *)(param_2 + 0x48) = 0x40000;
  *(undefined4 *)(param_2 + 0x14) = uVar1;
  *(float *)(param_2 + 0x18) = fVar4 + fVar2;
  *(undefined4 *)(param_2 + 0x1c) = uVar3;
  *(undefined4 *)(param_2 + 0x30) = 0x3f23d70b;
  *(ushort *)(param_2 + 0x58) = *(ushort *)(param_2 + 0x58) & 0xff8f | 0xa020;
  *(undefined4 *)(param_2 + 0x40) = 0x3f59999a;
  return;
}




void FUN_1003acc0c(undefined8 param_1)

{
  FUN_1003dfe60(param_1,1,10,0x19,0);
  return;
}




void FUN_1003acc20(undefined8 param_1)

{
  FUN_1003dfe60(param_1,2,3,0x19,0);
  return;
}




void FUN_1003acc34(undefined8 param_1)

{
  FUN_1003dfe60(param_1,2,2,0x19,0);
  return;
}




void FUN_1003acc48(long param_1,undefined8 param_2,float *param_3)

{
  float fVar1;
  
  do {
    param_1 = *(long *)(param_1 + 0x10);
  } while (*(int *)(*(long *)(param_1 + 8) + 0xa4) != DAT_10184dd68);
  fVar1 = (float)FUN_1003dfe60(param_1,3,5,0x19,0);
  *param_3 = fVar1 + 0.1;
  return;
}




void FUN_1003accac(undefined8 param_1)

{
  FUN_1003dfe60(param_1,3,5,0x19,0);
  return;
}




void FUN_1003accc0(undefined8 param_1)

{
  FUN_1003dfe60(param_1,3,7,0x19,0);
  return;
}




void FUN_1003accd4(undefined8 param_1)

{
  FUN_1003dfe60(param_1,3,8,0x19,0);
  return;
}




void FUN_1003acce8(long param_1,undefined8 param_2,float *param_3,undefined4 *param_4)

{
  float fVar1;
  
  *param_4 = 0x40c00000;
  do {
    param_1 = *(long *)(param_1 + 0x10);
  } while (*(int *)(*(long *)(param_1 + 8) + 0xa4) != DAT_10184dd68);
  fVar1 = (float)FUN_1003dfe60(param_1,3,6,0x19,0);
  *param_3 = 6.0 / (fVar1 + 0.1);
  return;
}




void FUN_1003acd5c(undefined8 param_1)

{
  FUN_1003dfe60(param_1,3,6,0x19,0);
  return;
}




void FUN_1003acd70(long param_1,long param_2,float *param_3,undefined4 *param_4)

{
  float fVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  do {
    param_1 = *(long *)(param_1 + 0x10);
  } while (*(int *)(*(long *)(param_1 + 8) + 0xa4) != DAT_10184dd68);
  *param_4 = *(undefined4 *)(param_1 + 0x250);
  fVar1 = *(float *)(param_1 + 0x254);
  param_4[1] = fVar1;
  uVar2 = *(undefined4 *)(param_1 + 600);
  fVar4 = *(float *)(param_1 + 0x2ec);
  param_4[1] = fVar4 + fVar1;
  param_4[2] = uVar2;
  fVar1 = *(float *)(param_2 + 0x250) - *(float *)(param_1 + 0x250);
  fVar3 = (*(float *)(param_2 + 0x254) + *(float *)(param_2 + 0x2ec)) -
          (fVar4 + *(float *)(param_1 + 0x254));
  fVar5 = *(float *)(param_2 + 600) - *(float *)(param_1 + 600);
  fVar4 = (float)FUN_1003dfe60(param_1,3,6,0x19,0);
  *param_3 = SQRT(fVar1 * fVar1 + fVar3 * fVar3 + fVar5 * fVar5) / fVar4;
  return;
}




float FUN_1003ace34(long param_1,long param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = *(float *)(param_1 + 0x250) - *(float *)(param_2 + 0x250);
  fVar2 = (*(float *)(param_1 + 0x2ec) + *(float *)(param_1 + 0x254)) -
          (*(float *)(param_2 + 0x254) + *(float *)(param_2 + 0x2ec));
  fVar3 = *(float *)(param_1 + 600) - *(float *)(param_2 + 600);
  return SQRT(fVar1 * fVar1 + fVar3 * fVar3 + fVar2 * fVar2);
}




undefined8 FUN_1003ace7c(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  long lVar4;
  
  uVar2 = (ulong)*(ushort *)(param_2 + 0x88) & 0x1f;
  if (((((int)uVar2 == 0x1f) || (1 < *(ushort *)(param_2 + uVar2 * 0x38 + 0x90) - 3)) &&
      ((*(byte *)(param_2 + 0x2f8) >> 3 & 1) == 0)) &&
     (lVar4 = *(long *)(param_1 + 0x60), lVar4 != 0)) {
    uVar3 = 0;
    do {
      uVar1 = FUN_10045fb10(lVar4);
      if (uVar1 <= uVar3) {
        return 0;
      }
      lVar4 = FUN_10045fa7c(lVar4,uVar3);
      uVar2 = (ulong)*(ushort *)(lVar4 + 0x88) & 0x1f;
      if (((int)uVar2 == 0x1f) || (1 < *(ushort *)(lVar4 + uVar2 * 0x38 + 0x90) - 3)) {
        return 1;
      }
      uVar3 = uVar3 + 1;
      lVar4 = *(long *)(param_1 + 0x60);
    } while (lVar4 != 0);
  }
  return 0;
}




undefined1  [16] FUN_1003acf38(long param_1)

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
  
  lVar4 = *(long *)(param_1 + 0x10);
  while ((lVar4 != 0 && (*(int *)(*(long *)(lVar4 + 8) + 0xa4) != DAT_10184dd68))) {
    lVar4 = *(long *)(lVar4 + 0x10);
  }
  auVar6 = FUN_1003dfe60(lVar4,3,3,0x19,0);
  puVar1 = PTR_s_Buff_Grumpjaw_Talent_BigAppetite_10185a848;
  uVar8 = auVar6._8_8_;
  uVar7 = auVar6._0_8_;
  lVar3 = FUN_100345d90(*(undefined4 *)(lVar4 + 0x260));
  if ((lVar3 != 0) && (iVar2 = FUN_1003a47d0(lVar3,puVar1), iVar2 != 0)) {
    local_38[0] = DAT_101d90b54;
    fVar5 = (float)FUN_1003dfee8(lVar4,local_38,1,9);
    uVar7 = (ulong)(uint)(fVar5 + auVar6._0_4_);
    uVar8 = 0;
  }
  auVar6._8_8_ = uVar8;
  auVar6._0_8_ = uVar7;
  return auVar6;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1003acfec(long param_1,long param_2,undefined4 *param_3,undefined8 param_4)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float local_68;
  float fStack_64;
  float local_60;
  undefined8 local_5c;
  float local_54;
  undefined4 local_50;
  uint uStack_4c;
  undefined2 local_48;
  
  *param_3 = 0x41a00000;
  lVar1 = param_1;
  do {
    lVar1 = *(long *)(lVar1 + 0x10);
  } while (*(int *)(*(long *)(lVar1 + 8) + 0xa4) != DAT_10184dd68);
  fVar7 = *(float *)(lVar1 + 0x250);
  fVar8 = *(float *)(lVar1 + 600);
  fVar5 = *(float *)(lVar1 + 0x2ec) + *(float *)(lVar1 + 0x254);
  fVar2 = (float)*(undefined8 *)(param_1 + 0x1d8) - fVar7;
  fVar3 = (float)((ulong)*(undefined8 *)(param_1 + 0x1d8) >> 0x20) - fVar5;
  fVar4 = *(float *)(param_1 + 0x1e0) - fVar8;
  fVar6 = fVar2 * fVar2 + fVar4 * fVar4 + fVar3 * fVar3;
  if (1e-08 <= fVar6) {
    fVar6 = SQRT(fVar6);
    fVar2 = fVar2 / fVar6;
    fVar3 = fVar3 / fVar6;
    fVar4 = fVar4 / fVar6;
  }
  else {
    fVar2 = 1.0;
    fVar3 = 0.0;
    fVar4 = 0.0;
  }
  fVar6 = (float)FUN_10045f34c(param_1 + 0x220);
  lVar1 = *(long *)(param_2 + 0x18);
  if (lVar1 == 0) {
    uStack_4c = 0;
  }
  else {
    do {
      if (*(int *)(*(long *)(lVar1 + 8) + 0xa4) == ram0x0001018672a0) {
        uStack_4c = *(byte *)(lVar1 + 0x818) >> 3 & 3;
        goto LAB_1003ad104;
      }
      lVar1 = *(long *)(lVar1 + 0x20);
    } while (lVar1 != 0);
    uStack_4c = 0;
  }
LAB_1003ad104:
  local_54 = fVar8 + fVar4 * fVar6;
  local_5c = CONCAT44(fVar5 + fVar3 * fVar6,fVar7 + fVar2 * fVar6);
  local_50 = 0;
  local_48 = 0;
  local_68 = fVar7;
  fStack_64 = fVar5;
  local_60 = fVar8;
  FUN_1003a7f34(&local_68,param_4,0);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_1003ad14c(long param_1)

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




void FUN_1003ad188(long param_1)

{
  char cVar1;
  long lVar2;
  char *pcVar3;
  uint local_18 [2];
  
  lVar2 = *(long *)(param_1 + 0x10);
  while ((lVar2 != 0 && (*(int *)(*(long *)(lVar2 + 8) + 0xa4) != DAT_10184dd68))) {
    lVar2 = *(long *)(lVar2 + 0x10);
  }
  if (PTR_s_Ability__Grumpjaw__C_101859818 == (undefined *)0x0) {
    local_18[0] = 0;
  }
  else {
    local_18[0] = 0x811c9dc5;
    cVar1 = *PTR_s_Ability__Grumpjaw__C_101859818;
    pcVar3 = PTR_s_Ability__Grumpjaw__C_101859818;
    while (cVar1 != '\0') {
      pcVar3 = pcVar3 + 1;
      local_18[0] = (local_18[0] ^ (int)cVar1) * 0x1000193;
      cVar1 = *pcVar3;
    }
  }
  FUN_1003dc44c(lVar2,local_18);
  FUN_1003ad218();
  return;
}




float FUN_1003ad218(long param_1)

{
  long lVar1;
  float fVar2;
  float fVar3;
  
  fVar2 = *(float *)(param_1 + 0x60);
  if (fVar2 < 0.0) {
    fVar2 = (*(float *)(param_1 + 0x58) + *(float *)(param_1 + 0x54)) * *(float *)(param_1 + 0x5c);
  }
  if ((*(byte *)(param_1 + 0x6b) >> 3 & 1) != 0) {
    lVar1 = *(long *)(param_1 + 0x10);
    if (*(int *)(*(long *)(lVar1 + 8) + 0xa4) != DAT_10184dd68) {
      lVar1 = 0;
    }
    lVar1 = *(long *)(lVar1 + 0x40);
    fVar3 = *(float *)(lVar1 + 0x9c) + *(float *)(lVar1 + 0x150) * (*(float *)(lVar1 + 0x2b8) + 1.0)
    ;
    NEON_fminnm(fVar3 + fVar3 * *(float *)(lVar1 + 0x204),DAT_101e94384);
    fVar2 = fVar2 - fVar2 * DAT_101e942c4;
  }
  if ((*(byte *)(param_1 + 0x6b) >> 4 & 1) == 0) {
    return fVar2;
  }
  lVar1 = *(long *)(param_1 + 0x10);
  if (*(int *)(*(long *)(lVar1 + 8) + 0xa4) != DAT_10184dd68) {
    lVar1 = 0;
  }
  lVar1 = *(long *)(lVar1 + 0x40);
  fVar3 = *(float *)(lVar1 + 0x74) + *(float *)(lVar1 + 0x128) * (*(float *)(lVar1 + 0x290) + 1.0);
  NEON_fminnm(fVar3 + fVar3 * *(float *)(lVar1 + 0x1dc),DAT_101e9435c);
  fVar3 = DAT_101e9429c;
  if (DAT_101e9429c <= 1.0) {
    fVar3 = 1.0;
  }
  return fVar2 / fVar3;
}




void FUN_1003ad304(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1003df710(param_2,3,1);
  FUN_1003ad33c(param_2,param_3);
  return;
}




void FUN_1003ad33c(float param_1,long param_2,float *param_3)

{
  long lVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  
  lVar1 = *(long *)(param_2 + 0x38);
  lVar2 = *(long *)(param_2 + 0x40);
  fVar3 = *(float *)(lVar2 + 0x74) + *(float *)(lVar2 + 0x128) * (*(float *)(lVar2 + 0x290) + 1.0);
  NEON_fminnm(fVar3 + fVar3 * *(float *)(lVar2 + 0x1dc),DAT_101e9435c);
  fVar3 = DAT_101e9429c;
  if (DAT_101e9429c <= 1.0) {
    fVar3 = 1.0;
  }
  fVar4 = param_1 / fVar3;
  if (param_1 / fVar3 <= 0.1) {
    fVar4 = 0.1;
  }
  *param_3 = fVar4;
  *param_3 = param_1 + *(float *)(lVar1 + 0x134) * (fVar4 - param_1);
  return;
}




undefined8 FUN_1003ad3a4(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 local_50;
  undefined8 uStack_48;
  
  local_50 = 0;
  uStack_48 = 0;
  uVar2 = FUN_10000ef8c();
  FUN_1003a985c(&local_50,uVar2);
  lVar3 = FUN_10000dff8();
  FUN_1003a985c(&local_50,lVar3);
  *(undefined2 *)(lVar3 + 0x28) = 0x100;
  *(code **)(lVar3 + 0x30) = FUN_1003a24a0;
  FUN_1003a4e5c(lVar3 + 0x10,param_1);
  uVar1 = FUN_1004d2524("AttackToIdleCombat");
  uVar1 = FUN_100015208("AttackToIdleCombat",uVar1,0x12345678);
  *(undefined4 *)(lVar3 + 0x20) = uVar1;
  lVar3 = FUN_10000ceb8();
  FUN_1003a985c(&local_50,lVar3);
  *(undefined4 *)(lVar3 + 0x2c) = 0x3e99999a;
  *(code **)(lVar3 + 0x10) = FUN_1003a24a0;
  lVar3 = FUN_10000e524();
  FUN_1003a985c(&local_50,lVar3);
  uVar2 = FUN_1010a1520();
  lVar4 = FUN_1010a0e0c(uVar2,0,"*KindredSoundBalance*",0);
  uVar1 = FUN_1003ad578(*(undefined4 *)(lVar4 + 0x350));
  *(char **)(lVar3 + 0x10) = "Sound_Gwen_Empowered_Release";
  *(undefined2 *)(lVar3 + 0x30) = 0x1ff;
  *(undefined4 *)(lVar3 + 0x34) = 1;
  *(undefined4 *)(lVar3 + 0x3c) = uVar1;
  *(undefined4 *)(lVar3 + 0x40) = 0xffffffff;
  *(byte *)(lVar3 + 0x38) = *(byte *)(lVar3 + 0x38) & 0xf8 | 4;
  *(undefined8 *)(lVar3 + 0x48) = 0;
  lVar3 = FUN_10000f250();
  FUN_1003a985c(&local_50,lVar3);
  *(undefined4 *)(lVar3 + 0x10) = param_3;
  FUN_1003d266c(lVar3,param_2);
  uVar2 = FUN_10000bb2c();
  FUN_1003a985c(&local_50,uVar2);
  lVar3 = FUN_10000bd3c();
  FUN_1003a985c(&local_50,lVar3);
  *(undefined **)(lVar3 + 0x10) = PTR_s_Buff_Gwen_PerkTimer_10185a860;
  *(code **)(lVar3 + 0x28) = FUN_1003ad304;
  *(undefined2 *)(lVar3 + 0x68) = 1;
  *(byte *)(lVar3 + 0x6a) = *(byte *)(lVar3 + 0x6a) & 0xfe;
  uVar2 = FUN_10000c784();
  FUN_1003a985c(&local_50,uVar2);
  uVar2 = FUN_10000f034();
  FUN_1003a985c(&local_50,uVar2);
  return local_50;
}




float FUN_1003ad578(float param_1)

{
  undefined8 uVar1;
  long lVar2;
  float fVar3;
  
  uVar1 = FUN_1010a1520();
  lVar2 = FUN_1010a0e0c(uVar1,0,"*KindredSoundBalance*",0);
  fVar3 = *(float *)(lVar2 + 4);
  uVar1 = FUN_1010a1520();
  lVar2 = FUN_1010a0e0c(uVar1,0,"*KindredSoundBalance*",0);
  return fVar3 + param_1 + *(float *)(lVar2 + 0x34c);
}




void FUN_1003ad5dc(undefined8 param_1)

{
  FUN_1003dfe60(param_1,1,5,0x19,0);
  return;
}




void FUN_1003ad5f0(undefined8 param_1)

{
  FUN_1003dfe60(param_1,1,2,0x19,0);
  return;
}




void FUN_1003ad604(undefined8 param_1)

{
  FUN_1003dfe60(param_1,1,4,0x19,0);
  return;
}




uint FUN_1003ad618(undefined8 param_1,long param_2)

{
  return *(uint *)(param_2 + 0x2f4) & 1;
}




undefined1  [16] FUN_1003ad624(long param_1)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  float fVar4;
  undefined1 auVar5 [16];
  ulong uVar6;
  undefined8 uVar7;
  undefined4 local_38 [2];
  
  auVar5 = FUN_1003dfe60(param_1,2,2,0x19,0);
  puVar1 = PTR_s_Buff_Gwen_Talent_Skedaddling_10185a888;
  uVar7 = auVar5._8_8_;
  uVar6 = auVar5._0_8_;
  lVar3 = FUN_100345d90(*(undefined4 *)(param_1 + 0x260));
  if ((lVar3 != 0) && (iVar2 = FUN_1003a47d0(lVar3,puVar1), iVar2 != 0)) {
    local_38[0] = DAT_101d90b6c;
    fVar4 = (float)FUN_1003dfee8(param_1,local_38,0,9);
    uVar6 = (ulong)(uint)(fVar4 + auVar5._0_4_);
    uVar7 = 0;
  }
  auVar5._8_8_ = uVar7;
  auVar5._0_8_ = uVar6;
  return auVar5;
}




undefined1  [16] FUN_1003ad6b0(long param_1)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  float fVar4;
  undefined1 auVar5 [16];
  ulong uVar6;
  undefined8 uVar7;
  undefined4 local_38 [2];
  
  auVar5 = FUN_1003dfe60(param_1,2,4,0x19,0);
  puVar1 = PTR_s_Buff_Gwen_Talent_Skedaddling_10185a888;
  uVar7 = auVar5._8_8_;
  uVar6 = auVar5._0_8_;
  lVar3 = FUN_100345d90(*(undefined4 *)(param_1 + 0x260));
  if ((lVar3 != 0) && (iVar2 = FUN_1003a47d0(lVar3,puVar1), iVar2 != 0)) {
    local_38[0] = DAT_101d90b6c;
    fVar4 = (float)FUN_1003dfee8(param_1,local_38,0,9);
    uVar6 = (ulong)(uint)(fVar4 + auVar5._0_4_);
    uVar7 = 0;
  }
  auVar5._8_8_ = uVar7;
  auVar5._0_8_ = uVar6;
  return auVar5;
}




void FUN_1003ad73c(undefined8 param_1)

{
  FUN_1003dfe60(param_1,3,5,0x19,0);
  return;
}




undefined8 FUN_1003ad750(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 local_40;
  undefined8 uStack_38;
  
  local_40 = 0;
  uStack_38 = 0;
  uVar2 = FUN_10000ef8c();
  FUN_1003a985c(&local_40,uVar2);
  lVar3 = FUN_10000dff8();
  FUN_1003a985c(&local_40,lVar3);
  *(undefined2 *)(lVar3 + 0x28) = 0x100;
  *(code **)(lVar3 + 0x30) = FUN_1003a24a0;
  FUN_1003a4e5c(lVar3 + 0x10,param_1);
  uVar1 = FUN_1004d2524("AttackToIdleCombat");
  uVar1 = FUN_100015208("AttackToIdleCombat",uVar1,0x12345678);
  *(undefined4 *)(lVar3 + 0x20) = uVar1;
  lVar3 = FUN_10000ceb8();
  FUN_1003a985c(&local_40,lVar3);
  *(undefined4 *)(lVar3 + 0x2c) = 0x3e99999a;
  *(code **)(lVar3 + 0x10) = FUN_1003a24a0;
  uVar2 = FUN_10000bc94();
  FUN_1003a985c(&local_40,uVar2);
  lVar3 = FUN_10000cae4();
  FUN_1003a985c(&local_40,lVar3);
  *(undefined8 *)(lVar3 + 0x10) = param_3;
  uVar2 = FUN_10000f034();
  FUN_1003a985c(&local_40,uVar2);
  return local_40;
}




undefined8 FUN_1003ad850(undefined8 param_1,char *param_2,undefined8 param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  undefined8 local_50;
  undefined8 uStack_48;
  
  local_50 = 0;
  uStack_48 = 0;
  uVar3 = FUN_10000ef8c();
  FUN_1003a985c(&local_50,uVar3);
  lVar4 = FUN_10000dff8();
  FUN_1003a985c(&local_50,lVar4);
  *(undefined2 *)(lVar4 + 0x28) = 0x100;
  *(code **)(lVar4 + 0x30) = FUN_1003a24a0;
  FUN_1003a4e5c(lVar4 + 0x10,param_1);
  uVar2 = FUN_1004d2524("AttackToIdleCombat");
  uVar2 = FUN_100015208("AttackToIdleCombat",uVar2,0x12345678);
  *(undefined4 *)(lVar4 + 0x20) = uVar2;
  lVar4 = FUN_10000ceb8();
  FUN_1003a985c(&local_50,lVar4);
  *(undefined4 *)(lVar4 + 0x2c) = 0x3e99999a;
  *(code **)(lVar4 + 0x10) = FUN_1003a24a0;
  lVar4 = FUN_10000e524();
  FUN_1003a985c(&local_50,lVar4);
  uVar3 = FUN_1010a1520();
  lVar5 = FUN_1010a0e0c(uVar3,0,"*KindredSoundBalance*",0);
  uVar2 = FUN_1003ada58(*(undefined4 *)(lVar5 + 0x40c));
  *(undefined2 *)(lVar4 + 0x30) = 0x3ff;
  *(undefined4 *)(lVar4 + 0x40) = 0xffffffff;
  *(undefined4 *)(lVar4 + 0x34) = 1;
  *(undefined4 *)(lVar4 + 0x3c) = uVar2;
  *(byte *)(lVar4 + 0x38) = *(byte *)(lVar4 + 0x38) & 0xf8 | 4;
  *(undefined8 *)(lVar4 + 0x48) = 0;
  *(char **)(lVar4 + 0x10) = "Sound_Churnwalker_basic_attack_01";
  *(char **)(lVar4 + 0x18) = "Sound_Churnwalker_basic_attack_02";
  *(char **)(lVar4 + 0x20) = "Sound_Churnwalker_basic_attack_03";
  lVar4 = FUN_10000e1b4();
  FUN_1003a985c(&local_50,lVar4);
  *(undefined8 *)(lVar4 + 0x40) = 0;
  *(ushort *)(lVar4 + 0x80) = *(ushort *)(lVar4 + 0x80) & 0xffec | 2;
  *(uint *)(lVar4 + 0x3c) = (uint)lVar4 & 0xffff;
  *(undefined8 *)(lVar4 + 0x20) = 0;
  *(undefined8 *)(lVar4 + 0x28) = 1;
  if (param_2 == (char *)0x0) {
    uVar6 = 0;
  }
  else {
    uVar6 = 0x811c9dc5;
    cVar1 = *param_2;
    while (cVar1 != '\0') {
      param_2 = param_2 + 1;
      uVar6 = (uVar6 ^ (int)cVar1) * 0x1000193;
      cVar1 = *param_2;
    }
  }
  *(uint *)(lVar4 + 0x10) = uVar6;
  uVar3 = FUN_10000bc94();
  FUN_1003a985c(&local_50,uVar3);
  lVar4 = FUN_10000cae4();
  FUN_1003a985c(&local_50,lVar4);
  *(undefined8 *)(lVar4 + 0x10) = param_3;
  uVar3 = FUN_10000f034();
  FUN_1003a985c(&local_50,uVar3);
  return local_50;
}




float FUN_1003ada58(float param_1)

{
  undefined8 uVar1;
  long lVar2;
  float fVar3;
  
  uVar1 = FUN_1010a1520();
  lVar2 = FUN_1010a0e0c(uVar1,0,"*KindredSoundBalance*",0);
  fVar3 = *(float *)(lVar2 + 4);
  uVar1 = FUN_1010a1520();
  lVar2 = FUN_1010a0e0c(uVar1,0,"*KindredSoundBalance*",0);
  return fVar3 + param_1 + *(float *)(lVar2 + 0x408);
}




void FUN_1003adabc(long param_1,undefined8 param_2,float *param_3)

{
  long lVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  
  lVar1 = *(long *)(param_1 + 0x10);
  while ((lVar1 != 0 && (*(int *)(*(long *)(lVar1 + 8) + 0xa4) != DAT_10184dd68))) {
    lVar1 = *(long *)(lVar1 + 0x10);
  }
  uVar2 = FUN_10045f34c(param_1 + 0x220);
  fVar4 = (float)NEON_fminnm(uVar2,0x41200000);
  fVar3 = (float)FUN_1003dfe60(lVar1,0,3,0x19,0);
  *param_3 = fVar4 / fVar3;
  return;
}




void FUN_1003adb3c(long param_1,float *param_2)

{
  uint uVar1;
  undefined1 auStack_24 [4];
  
  do {
    param_1 = *(long *)(param_1 + 0x10);
  } while (*(int *)(*(long *)(param_1 + 8) + 0xa4) != DAT_10184dd68);
  uVar1 = FUN_1003adb94(param_1,auStack_24);
  *param_2 = (float)uVar1;
  return;
}




uint FUN_1003adb94(long param_1,uint *param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined8 uVar5;
  uint *puVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  puVar2 = PTR_s_freehooks_10185d5c8;
  plVar7 = (long *)(param_1 + 0x18);
  do {
    lVar9 = *plVar7;
    plVar7 = (long *)(lVar9 + 0x20);
  } while (*(int *)(*(long *)(lVar9 + 8) + 0xa4) != DAT_10184daa8);
  lVar10 = *(long *)(lVar9 + 0x28);
  lVar9 = lVar10;
  while( true ) {
    if (lVar9 == 0) {
      *param_2 = 0xffffffff;
      return 0;
    }
    if ((*(int *)(lVar9 + 0x314) == DAT_101d3e8d8) && (lVar8 = lVar10, *(int *)(lVar9 + 0x310) == 0)
       ) break;
    lVar9 = *(long *)(lVar9 + 0x350);
  }
  for (; (*(int *)(lVar8 + 0x314) != DAT_101d3e8d8 || (*(int *)(lVar8 + 0x310) != 0));
      lVar8 = *(long *)(lVar8 + 0x350)) {
  }
  do {
    if (*(int *)(lVar10 + 0x30c) == *(int *)(lVar8 + 0x30c)) break;
    lVar10 = *(long *)(lVar10 + 0x350);
  } while (lVar10 != 0);
  uVar3 = FUN_1004d2524(PTR_s_freehooks_10185d5c8);
  uVar5 = FUN_100015208(puVar2,uVar3,0x12345678);
  puVar6 = (uint *)(**(code **)(*(long *)(lVar10 + 0x168) + 0x18))(lVar10 + 0x168,uVar5);
  uVar4 = 0;
  uVar1 = *puVar6;
  *param_2 = uVar1;
  do {
    if ((uVar1 >> (ulong)(uVar4 & 0x1f) & 1) != 0) {
      return uVar4;
    }
    uVar4 = uVar4 + 1;
  } while (uVar4 != 0x20);
  return 0xffffffff;
}




void FUN_1003adcb8(long param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  undefined1 auStack_24 [4];
  
  do {
    param_1 = *(long *)(param_1 + 0x10);
  } while (*(int *)(*(long *)(param_1 + 8) + 0xa4) != DAT_10184dd68);
  uVar1 = FUN_1003adb94(param_1,auStack_24);
  *param_4 = uVar1;
  return;
}




void FUN_1003add0c(long param_1,undefined4 *param_2)

{
  char *pcVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 auStack_24 [4];
  
  do {
    param_1 = *(long *)(param_1 + 0x10);
  } while (*(int *)(*(long *)(param_1 + 8) + 0xa4) != DAT_10184dd68);
  iVar2 = FUN_1003adb94(param_1,auStack_24);
  pcVar1 = "Ability01";
  if (iVar2 != 1) {
    pcVar1 = "Ability01_Right";
  }
  uVar3 = FUN_1004d2524(pcVar1);
  uVar3 = FUN_100015208(pcVar1,uVar3,0x12345678);
  *param_2 = uVar3;
  return;
}




void FUN_1003add94(undefined8 param_1)

{
  FUN_1003dfe60(param_1,0,4,0x19,0);
  return;
}




void FUN_1003adda8(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  while ((lVar1 != 0 && (*(int *)(*(long *)(lVar1 + 8) + 0xa4) != DAT_10184dd68))) {
    lVar1 = *(long *)(lVar1 + 0x10);
  }
  *(long *)(param_2 + 8) = lVar1;
  *(ushort *)(param_2 + 0x58) = *(ushort *)(param_2 + 0x58) & 0xff8f | 0x20;
  *(undefined4 *)(param_2 + 0x48) = 0x40000;
  return;
}




undefined8 FUN_1003addf8(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 0x18);
  while ((lVar1 != 0 && (*(int *)(*(long *)(lVar1 + 8) + 0xa4) != DAT_10184daa8))) {
    lVar1 = *(long *)(lVar1 + 0x20);
  }
  do {
    param_1 = *(long *)(param_1 + 0x10);
  } while (*(int *)(*(long *)(param_1 + 8) + 0xa4) != DAT_10184dd68);
  lVar1 = *(long *)(lVar1 + 0x28);
  if (lVar1 != 0) {
    do {
      if (((*(int *)(lVar1 + 0x314) == DAT_101d2c6f0) && (*(int *)(lVar1 + 0x310) == 0)) &&
         ((*(int *)(param_1 + 0x260) == -1 || (*(int *)(lVar1 + 0x308) == *(int *)(param_1 + 0x260))
          ))) {
        return 1;
      }
      lVar1 = *(long *)(lVar1 + 0x350);
    } while (lVar1 != 0);
  }
  return 0;
}




undefined4 FUN_1003ade98(long param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  do {
    param_1 = *(long *)(param_1 + 0x10);
  } while (*(int *)(*(long *)(param_1 + 8) + 0xa4) != DAT_10184dd68);
  iVar1 = FUN_1003a47d0(param_1,PTR_s_Buff_Churnwalker_ChainTetherSelf_10185a8b8);
  uVar2 = 0;
  if (iVar1 == 0) {
    uVar2 = 0x400;
  }
  return uVar2;
}




void FUN_1003adee4(undefined8 param_1)

{
  FUN_1003dfe60(param_1,1,2,0x19,0);
  return;
}




void FUN_1003adef8(undefined8 param_1)

{
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d90e0c;
  FUN_1003dfee8(param_1,local_18,0,9);
  return;
}




void FUN_1003adf2c(undefined8 param_1)

{
  FUN_1003dfe60(param_1,1,3,0x19,0);
  return;
}




void FUN_1003adf40(undefined8 param_1)

{
  FUN_1003dfe60(param_1,1,4,0x19,0);
  return;
}




void FUN_1003adf54(undefined8 param_1)

{
  FUN_1003dfe60(param_1,2,5,0x19,0);
  return;
}




void FUN_1003adf68(undefined8 param_1)

{
  FUN_1003dfe60(param_1,2,3,0x19,0);
  return;
}




void FUN_1003adf7c(undefined8 param_1)

{
  FUN_1003dfe60(param_1,2,4,0x19,0);
  return;
}




undefined8 FUN_1003adf90(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 local_40;
  undefined8 uStack_38;
  
  local_40 = 0;
  uStack_38 = 0;
  uVar2 = FUN_10000ef8c();
  FUN_1003a985c(&local_40,uVar2);
  lVar3 = FUN_10000dff8();
  FUN_1003a985c(&local_40,lVar3);
  *(undefined2 *)(lVar3 + 0x28) = 0x100;
  *(code **)(lVar3 + 0x30) = FUN_1003a24a0;
  FUN_1003a4e5c(lVar3 + 0x10,param_1);
  uVar1 = FUN_1004d2524("AttackToIdleCombat");
  uVar1 = FUN_100015208("AttackToIdleCombat",uVar1,0x12345678);
  *(undefined4 *)(lVar3 + 0x20) = uVar1;
  lVar3 = FUN_10000ceb8();
  FUN_1003a985c(&local_40,lVar3);
  *(undefined4 *)(lVar3 + 0x2c) = 0x3e99999a;
  *(code **)(lVar3 + 0x10) = FUN_1003a24a0;
  uVar2 = FUN_10000bc94();
  FUN_1003a985c(&local_40,uVar2);
  lVar3 = FUN_10000cae4();
  FUN_1003a985c(&local_40,lVar3);
  *(undefined8 *)(lVar3 + 0x10) = param_3;
  uVar2 = FUN_10000f034();
  FUN_1003a985c(&local_40,uVar2);
  return local_40;
}




undefined8 FUN_1003ae090(undefined8 param_1,char *param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  char cVar6;
  bool bVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  uint uVar13;
  undefined *puVar14;
  undefined8 local_70;
  undefined8 uStack_68;
  
  local_70 = 0;
  uStack_68 = 0;
  uVar9 = FUN_10000ef8c();
  FUN_1003a985c(&local_70,uVar9);
  lVar10 = FUN_10000dff8();
  FUN_1003a985c(&local_70,lVar10);
  *(undefined2 *)(lVar10 + 0x28) = 0x100;
  *(code **)(lVar10 + 0x30) = FUN_1003a24a0;
  FUN_1003a4e5c(lVar10 + 0x10,param_1);
  uVar8 = FUN_1004d2524("AttackToIdle");
  uVar8 = FUN_100015208("AttackToIdle",uVar8,0x12345678);
  *(undefined4 *)(lVar10 + 0x20) = uVar8;
  lVar10 = FUN_10000e1b4();
  FUN_1003a985c(&local_70,lVar10);
  *(undefined8 *)(lVar10 + 0x40) = 0;
  *(ushort *)(lVar10 + 0x80) = *(ushort *)(lVar10 + 0x80) & 0xffec | 2;
  *(uint *)(lVar10 + 0x3c) = (uint)lVar10 & 0xffff;
  *(undefined8 *)(lVar10 + 0x20) = 0;
  *(undefined8 *)(lVar10 + 0x28) = 1;
  if (param_2 == (char *)0x0) {
    uVar13 = 0;
  }
  else {
    uVar13 = 0x811c9dc5;
    cVar6 = *param_2;
    while (cVar6 != '\0') {
      param_2 = param_2 + 1;
      uVar13 = (uVar13 ^ (int)cVar6) * 0x1000193;
      cVar6 = *param_2;
    }
  }
  *(uint *)(lVar10 + 0x10) = uVar13;
  lVar10 = FUN_10000ceb8();
  FUN_1003a985c(&local_70,lVar10);
  *(code **)(lVar10 + 0x10) = FUN_1003a24a0;
  *(code **)(lVar10 + 0x18) = FUN_1003c5148;
  lVar10 = FUN_10000e524();
  FUN_1003a985c(&local_70,lVar10);
  bVar7 = (int)param_3 != 2;
  ppuVar1 = &PTR_s_Sound_Tony_Crit_Attack_10185a8f8;
  if (bVar7) {
    ppuVar1 = &PTR_s_Sound_Tony_Attack_01_10185a8e0;
  }
  puVar14 = *ppuVar1;
  ppuVar1 = &PTR_s_Sound_Tony_Crit_Attack_10185a900;
  if (bVar7) {
    ppuVar1 = &PTR_s_Sound_Tony_Attack_02_10185a8e8;
  }
  ppuVar2 = &PTR_s_Sound_Tony_Crit_Attack_10185a908;
  if (bVar7) {
    ppuVar2 = &PTR_s_Sound_Tony_Attack_03_10185a8f0;
  }
  ppuVar3 = &PTR_s_Sound_Tony_Crit_Impact_10185a910;
  if (bVar7) {
    ppuVar3 = &PTR_s_Sound_Tony_Attack_Impact_01_10185a928;
  }
  ppuVar4 = &PTR_s_Sound_Tony_Crit_Impact_10185a918;
  if (bVar7) {
    ppuVar4 = &PTR_s_Sound_Tony_Attack_Impact_02_10185a930;
  }
  ppuVar5 = &PTR_s_Sound_Tony_Crit_Impact_10185a920;
  if (bVar7) {
    ppuVar5 = &PTR_s_Sound_Tony_Attack_Impact_03_10185a938;
  }
  uVar9 = FUN_1010a1520();
  lVar11 = FUN_1010a0e0c(uVar9,0,"*KindredSoundBalance*",0);
  uVar8 = FUN_1003ae36c(*(undefined4 *)(lVar11 + 0x470));
  *(undefined **)(lVar10 + 0x10) = puVar14;
  *(undefined2 *)(lVar10 + 0x30) = 0x3ff;
  *(undefined4 *)(lVar10 + 0x34) = 1;
  *(undefined4 *)(lVar10 + 0x3c) = uVar8;
  *(undefined4 *)(lVar10 + 0x40) = 0xffffffff;
  *(byte *)(lVar10 + 0x38) = *(byte *)(lVar10 + 0x38) & 0xf8 | 4;
  *(undefined8 *)(lVar10 + 0x48) = 0;
  *(undefined **)(lVar10 + 0x18) = *ppuVar1;
  *(undefined **)(lVar10 + 0x20) = *ppuVar2;
  plVar12 = (long *)FUN_10000cc74();
  FUN_1003a985c(&local_70,plVar12);
  (**(code **)(*plVar12 + 0x58))(plVar12,param_3);
  lVar10 = FUN_10000e524();
  FUN_1003a985c(&local_70,lVar10);
  puVar14 = *ppuVar3;
  uVar9 = FUN_1010a1520();
  lVar11 = FUN_1010a0e0c(uVar9,0,"*KindredSoundBalance*",0);
  uVar8 = FUN_1003ae36c(*(undefined4 *)(lVar11 + 0x470));
  *(undefined **)(lVar10 + 0x10) = puVar14;
  *(undefined2 *)(lVar10 + 0x30) = 0x3ff;
  *(undefined4 *)(lVar10 + 0x34) = 1;
  *(undefined4 *)(lVar10 + 0x3c) = uVar8;
  *(undefined4 *)(lVar10 + 0x40) = 0xffffffff;
  *(byte *)(lVar10 + 0x38) = *(byte *)(lVar10 + 0x38) & 0xf8 | 4;
  *(undefined8 *)(lVar10 + 0x48) = 0;
  *(undefined **)(lVar10 + 0x18) = *ppuVar4;
  *(undefined **)(lVar10 + 0x20) = *ppuVar5;
  uVar9 = FUN_10000f034();
  FUN_1003a985c(&local_70,uVar9);
  return local_70;
}




float FUN_1003ae36c(float param_1)

{
  undefined8 uVar1;
  long lVar2;
  float fVar3;
  
  uVar1 = FUN_1010a1520();
  lVar2 = FUN_1010a0e0c(uVar1,0,"*KindredSoundBalance*",0);
  fVar3 = *(float *)(lVar2 + 4);
  uVar1 = FUN_1010a1520();
  lVar2 = FUN_1010a0e0c(uVar1,0,"*KindredSoundBalance*",0);
  return fVar3 + param_1 + *(float *)(lVar2 + 0x46c);
}




void FUN_1003ae3d0(undefined8 param_1)

{
  FUN_1003dfe60(param_1,0,3,0x19,0);
  return;
}




void FUN_1003ae3e4(undefined8 param_1)

{
  FUN_1003dfe60(param_1,0,10,0x19,0);
  return;
}




float FUN_1003ae3f8(long param_1)

{
  long lVar1;
  float fVar2;
  float fVar3;
  undefined4 local_28 [2];
  
  do {
    param_1 = *(long *)(param_1 + 0x10);
  } while (*(int *)(*(long *)(param_1 + 8) + 0xa4) != DAT_10184dd68);
  lVar1 = *(long *)(param_1 + 0x40);
  fVar2 = *(float *)(lVar1 + 0x48) + *(float *)(lVar1 + 0xfc) * (*(float *)(lVar1 + 0x264) + 1.0);
  fVar3 = (float)NEON_fminnm(fVar2 + fVar2 * *(float *)(lVar1 + 0x1b0),DAT_101e94330);
  fVar2 = DAT_101e94270;
  if (DAT_101e94270 <= fVar3) {
    fVar2 = fVar3;
  }
  local_28[0] = DAT_101d90e60;
  fVar3 = (float)FUN_1003dfee8(param_1,local_28,0,9);
  return fVar3 * fVar2;
}




void FUN_1003ae498(undefined8 param_1)

{
  FUN_1003dfe60(param_1,0,6,0x19,0);
  return;
}




undefined4 FUN_1003ae4ac(long param_1)

{
  long lVar1;
  float fVar2;
  
  do {
    param_1 = *(long *)(param_1 + 0x10);
  } while (*(int *)(*(long *)(param_1 + 8) + 0xa4) != DAT_10184dd68);
  lVar1 = *(long *)(param_1 + 0x40);
  fVar2 = *(float *)(lVar1 + 0x48) + *(float *)(lVar1 + 0xfc) * (*(float *)(lVar1 + 0x264) + 1.0);
  NEON_fminnm(fVar2 + fVar2 * *(float *)(lVar1 + 0x1b0),DAT_101e94330);
  return DAT_101e94270;
}




void FUN_1003ae510(undefined8 param_1)

{
  FUN_1003dfe60(param_1,0,0xb,0x19,0);
  return;
}




void FUN_1003ae524(long param_1,undefined8 param_2,float *param_3)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  float fVar8;
  undefined4 local_48 [2];
  
  lVar4 = *(long *)(param_1 + 0x10);
  while ((lVar4 != 0 && (*(int *)(*(long *)(lVar4 + 8) + 0xa4) != DAT_10184dd68))) {
    lVar4 = *(long *)(lVar4 + 0x10);
  }
  fVar5 = (float)FUN_1003dfe60(lVar4,4,6,0x19,0);
  fVar8 = *(float *)(*(long *)(lVar4 + 0x40) + 0xfc);
  fVar6 = (float)FUN_1003dfe60(lVar4,4,7,0x19,0);
  uVar7 = FUN_1003dfe60(lVar4,4,9,0x19,0);
  fVar5 = (float)NEON_fminnm(fVar5 + fVar8 * fVar6,uVar7);
  *param_3 = fVar5;
  puVar1 = PTR_s_Buff_Tony_Talent_TalentC_10185a968;
  lVar3 = FUN_100345d90(*(undefined4 *)(lVar4 + 0x260));
  if ((lVar3 != 0) && (iVar2 = FUN_1003a47d0(lVar3,puVar1), iVar2 != 0)) {
    local_48[0] = DAT_101d90e68;
    fVar5 = (float)FUN_1003dfee8(lVar4,local_48,0,9);
    *param_3 = *param_3 + fVar5;
  }
  return;
}




void FUN_1003ae62c(undefined8 param_1)

{
  FUN_1003dfe60(param_1,4,6,0x19,0);
  return;
}




void FUN_1003ae640(undefined8 param_1)

{
  FUN_1003dfe60(param_1,4,3,0x19,0);
  return;
}




void FUN_1003ae654(undefined8 param_1)

{
  FUN_1003dfe60(param_1,4,2,0x19,0);
  return;
}




void FUN_1003ae668(undefined8 param_1)

{
  FUN_1003dfe60(param_1,4,4,0x19,0);
  return;
}




float FUN_1003ae67c(undefined8 param_1)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (float)FUN_1003dfe60(param_1,5,7,0x19,0);
  fVar2 = (float)FUN_1003dfe60(param_1,5,9,0x19,0);
  return fVar1 / fVar2;
}




void FUN_1003ae6d4(undefined8 param_1)

{
  FUN_1003dfe60(param_1,5,7,0x19,0);
  return;
}




void FUN_1003ae6e8(undefined8 param_1)

{
  FUN_1003dfe60(param_1,5,9,0x19,0);
  return;
}




void FUN_1003ae6fc(undefined8 param_1)

{
  FUN_1003dfe60(param_1,5,2,0x19,0);
  return;
}




void FUN_1003ae710(undefined8 param_1)

{
  FUN_1003dfe60(param_1,5,5,0x19,0);
  return;
}




void FUN_1003ae724(undefined8 param_1)

{
  FUN_1003dfe60(param_1,5,10,0x19,0);
  return;
}




void FUN_1003ae738(undefined8 param_1)

{
  FUN_1003dfe60(param_1,5,4,0x19,0);
  return;
}




void FUN_1003ae74c(long param_1,undefined8 param_2,undefined4 *param_3)

{
  char *pcVar1;
  undefined4 local_28 [2];
  
  pcVar1 = *(char **)(param_1 + 0x200);
  if (pcVar1 == (char *)0x0) {
    if (*(long *)(param_1 + 0x38) == 0) {
      pcVar1 = "<null>";
    }
    else {
      pcVar1 = *(char **)(*(long *)(param_1 + 0x38) + 8);
    }
  }
  FUN_1003a4e5c(local_28,pcVar1);
  *param_3 = local_28[0];
  return;
}




undefined8
FUN_1003ae7a0(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,uint param_4,
             undefined8 param_5)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  byte bVar6;
  undefined8 uVar7;
  undefined8 local_70;
  undefined8 local_68;
  
  local_70 = 0;
  local_68 = 0;
  lVar2 = FUN_10000ef8c();
  FUN_1003a985c(&local_70,lVar2);
  *(byte *)(lVar2 + 0x10) = *(byte *)(lVar2 + 0x10) & 0xe7 | 4;
  lVar2 = FUN_10000c8e8();
  FUN_1003a985c(&local_70,lVar2);
  lVar3 = FUN_10049ab34(lVar2 + 0x10);
  *(undefined **)(lVar3 + 8) = PTR_s_Buff_Reza_B_EmpoweredAttack_10185a9e0;
  lVar3 = FUN_10000dff8();
  FUN_1003a985c(lVar2 + 0xb0,lVar3);
  *(undefined2 *)(lVar3 + 0x28) = 0x100;
  *(code **)(lVar3 + 0x30) = FUN_1003a24a0;
  uVar1 = FUN_1004d2524("EmpoweredDefAttack");
  uVar1 = FUN_100015208("EmpoweredDefAttack",uVar1,0x12345678);
  *(undefined4 *)(lVar3 + 0x10) = uVar1;
  uVar1 = FUN_1004d2524("AttackToIdleCombat");
  uVar1 = FUN_100015208("AttackToIdleCombat",uVar1,0x12345678);
  *(undefined4 *)(lVar3 + 0x20) = uVar1;
  lVar3 = FUN_10000dff8();
  FUN_1003a985c(lVar2 + 200,lVar3);
  *(undefined2 *)(lVar3 + 0x28) = 0x100;
  *(code **)(lVar3 + 0x30) = FUN_1003a24a0;
  FUN_1003a4e5c(lVar3 + 0x10,param_1);
  uVar1 = FUN_1004d2524("AttackToIdleCombat");
  uVar1 = FUN_100015208("AttackToIdleCombat",uVar1,0x12345678);
  *(undefined4 *)(lVar3 + 0x20) = uVar1;
  lVar3 = FUN_10000e524();
  FUN_1003a985c(lVar2 + 0xb0,lVar3);
  uVar4 = FUN_1010a1520();
  lVar5 = FUN_1010a0e0c(uVar4,0,"*KindredSoundBalance*",0);
  uVar1 = FUN_1003aec0c(*(undefined4 *)(lVar5 + 0x3f0));
  *(char **)(lVar3 + 0x10) = "Sound_Reza_Ability_B_Empowered_Attack";
  *(undefined2 *)(lVar3 + 0x30) = 0x1ff;
  *(undefined4 *)(lVar3 + 0x34) = 1;
  *(undefined4 *)(lVar3 + 0x3c) = uVar1;
  *(undefined4 *)(lVar3 + 0x40) = 0xffffffff;
  *(byte *)(lVar3 + 0x38) = *(byte *)(lVar3 + 0x38) & 0xf8 | 4;
  *(undefined8 *)(lVar3 + 0x48) = 0;
  if (param_4 == 0) {
    lVar2 = FUN_10000ceb8();
    FUN_1003a985c(&local_70,lVar2);
    *(undefined4 *)(lVar2 + 0x2c) = 0x3e4ccccd;
    *(code **)(lVar2 + 0x10) = FUN_1003a24a0;
  }
  else {
    lVar3 = FUN_10000e524();
    FUN_1003a985c(lVar2 + 200,lVar3);
    uVar7 = *param_2;
    uVar4 = FUN_1010a1520();
    lVar2 = FUN_1010a0e0c(uVar4,0,"*KindredSoundBalance*",0);
    uVar1 = FUN_1003aec0c(*(undefined4 *)(lVar2 + 0x3f0));
    *(undefined8 *)(lVar3 + 0x10) = uVar7;
    *(undefined2 *)(lVar3 + 0x30) = 0x1ff;
    *(undefined4 *)(lVar3 + 0x34) = 1;
    *(undefined4 *)(lVar3 + 0x3c) = uVar1;
    *(undefined4 *)(lVar3 + 0x40) = 0xffffffff;
    *(byte *)(lVar3 + 0x38) = *(byte *)(lVar3 + 0x38) & 0xf8 | 4;
    *(undefined8 *)(lVar3 + 0x48) = 0;
    if (param_4 != 1) {
      lVar2 = (ulong)param_4 - 1;
      bVar6 = 1;
      do {
        param_2 = param_2 + 1;
        *(undefined8 *)(lVar3 + (ulong)bVar6 * 8 + 0x10) = *param_2;
        bVar6 = bVar6 + 1;
        lVar2 = lVar2 + -1;
      } while (lVar2 != 0);
      *(byte *)(lVar3 + 0x31) = bVar6;
    }
    lVar2 = FUN_10000ceb8();
    FUN_1003a985c(&local_70,lVar2);
    *(undefined4 *)(lVar2 + 0x2c) = 0x3e4ccccd;
    *(code **)(lVar2 + 0x10) = FUN_1003a24a0;
    lVar2 = FUN_10000e524();
    FUN_1003a985c(&local_70,lVar2);
    uVar7 = *param_3;
    uVar4 = FUN_1010a1520();
    lVar3 = FUN_1010a0e0c(uVar4,0,"*KindredSoundBalance*",0);
    uVar1 = FUN_1003aec0c(*(undefined4 *)(lVar3 + 0x3f0));
    *(undefined8 *)(lVar2 + 0x10) = uVar7;
    *(undefined2 *)(lVar2 + 0x30) = 0x1ff;
    *(undefined4 *)(lVar2 + 0x34) = 1;
    *(undefined4 *)(lVar2 + 0x3c) = uVar1;
    *(undefined4 *)(lVar2 + 0x40) = 0xffffffff;
    *(byte *)(lVar2 + 0x38) = *(byte *)(lVar2 + 0x38) & 0xf8 | 4;
    *(undefined8 *)(lVar2 + 0x48) = 0;
    if (1 < param_4) {
      lVar3 = (ulong)param_4 - 1;
      bVar6 = 1;
      do {
        param_3 = param_3 + 1;
        *(undefined8 *)(lVar2 + (ulong)bVar6 * 8 + 0x10) = *param_3;
        bVar6 = bVar6 + 1;
        lVar3 = lVar3 + -1;
      } while (lVar3 != 0);
      *(byte *)(lVar2 + 0x31) = bVar6;
    }
  }
  uVar4 = FUN_10000bb2c();
  FUN_1003a985c(&local_70,uVar4);
  lVar2 = FUN_10000bd3c();
  FUN_1003a985c(&local_70,lVar2);
  *(undefined **)(lVar2 + 0x10) = PTR_s_Buff_Reza_EmpoweredAttackPfx_OnR_10185a9e8;
  *(undefined4 *)(lVar2 + 0x18) = 0x3e4ccccd;
  *(undefined2 *)(lVar2 + 0x68) = 1;
  *(byte *)(lVar2 + 0x6a) = *(byte *)(lVar2 + 0x6a) & 0xfe;
  *(code **)(lVar2 + 0x50) = FUN_1003ae74c;
  uVar4 = FUN_10000c784();
  FUN_1003a985c(&local_70,uVar4);
  uVar4 = FUN_10000bc94();
  FUN_1003a985c(&local_70,uVar4);
  lVar2 = FUN_10000c8e8();
  FUN_1003a985c(&local_70,lVar2);
  lVar3 = FUN_10049ab34(lVar2 + 0x10);
  *(undefined **)(lVar3 + 8) = PTR_s_Buff_Reza_B_EmpoweredAttack_10185a9e0;
  lVar3 = FUN_10000bd3c();
  FUN_1003a985c(lVar2 + 0xb0,lVar3);
  *(undefined **)(lVar3 + 0x10) = PTR_s_Buff_Reza_EmpoweredAttackPfx_10185a9f0;
  *(undefined4 *)(lVar3 + 0x18) = 0x3e4ccccd;
  *(undefined2 *)(lVar3 + 0x68) = 1;
  *(byte *)(lVar3 + 0x6a) = *(byte *)(lVar3 + 0x6a) & 0xfe;
  lVar2 = FUN_10000cae4();
  FUN_1003a985c(&local_70,lVar2);
  *(undefined8 *)(lVar2 + 0x10) = param_5;
  uVar4 = FUN_10000f034();
  FUN_1003a985c(&local_70,uVar4);
  return local_70;
}




float FUN_1003aec0c(float param_1)

{
  undefined8 uVar1;
  long lVar2;
  float fVar3;
  
  uVar1 = FUN_1010a1520();
  lVar2 = FUN_1010a0e0c(uVar1,0,"*KindredSoundBalance*",0);
  fVar3 = *(float *)(lVar2 + 4);
  uVar1 = FUN_1010a1520();
  lVar2 = FUN_1010a0e0c(uVar1,0,"*KindredSoundBalance*",0);
  return fVar3 + param_1 + *(float *)(lVar2 + 0x3ec);
}




void FUN_1003aec70(undefined8 param_1)

{
  FUN_1003dfe60(param_1,0,5,0x19,0);
  return;
}




void FUN_1003aec84(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40000000;
  return;
}




void FUN_1003aec90(undefined8 param_1,undefined8 param_2,float *param_3)

{
  float fVar1;
  
  fVar1 = (float)FUN_1003dfe60(param_2,1,6,0x19,0);
  *param_3 = fVar1 + 0.2;
  return;
}




void FUN_1003aecd4(undefined8 param_1)

{
  FUN_1003dfe60(param_1,1,5,0x19,0);
  return;
}




void FUN_1003aece8(undefined8 param_1)

{
  FUN_1003dfe60(param_1,1,4,0x19,0);
  return;
}




void FUN_1003aecfc(long param_1,undefined8 param_2,undefined4 *param_3,undefined4 *param_4,
                  undefined4 *param_5,undefined1 *param_6)

{
  undefined4 uVar1;
  
  do {
    param_1 = *(long *)(param_1 + 0x10);
  } while (*(int *)(*(long *)(param_1 + 8) + 0xa4) != DAT_10184dd68);
  uVar1 = FUN_1003df710(param_1,1,0x13);
  *param_3 = uVar1;
  *param_5 = 1;
  *param_4 = 1;
  *param_6 = 0;
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1003aed78(long param_1,float *param_2,float *param_3)

{
  byte bVar1;
  int iVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_40;
  float local_38;
  
  lVar3 = param_1;
  do {
    lVar3 = *(long *)(lVar3 + 0x10);
  } while (*(int *)(*(long *)(lVar3 + 8) + 0xa4) != DAT_10184dd68);
  fVar6 = *(float *)(lVar3 + 0x250);
  fVar5 = *(float *)(lVar3 + 600);
  fVar4 = *(float *)(param_1 + 0x1e0);
  *(undefined8 *)param_2 = *(undefined8 *)(param_1 + 0x1d8);
  param_2[2] = fVar4;
  local_50 = 0x412000003e800000;
  local_48 = 0x3e800000;
  lVar3 = *(long *)(lVar3 + 0x18);
  do {
    if (lVar3 == 0) {
      bVar1 = 0;
LAB_1003aee1c:
      iVar2 = FUN_10054e044(bVar1,param_2,&local_40,&local_50);
      if (iVar2 != 0) {
        *(undefined8 *)param_2 = local_40;
        param_2[2] = local_38;
      }
      fVar6 = fVar6 - *param_2;
      fVar5 = fVar5 - param_2[2];
      *param_3 = fVar6;
      param_3[2] = fVar5;
      param_3[1] = 0.0;
      fVar4 = fVar6 * fVar6 + fVar5 * fVar5;
      if (1e-08 <= fVar4) {
        fVar4 = SQRT(fVar4);
        *param_3 = fVar6 / fVar4;
        param_3[1] = 0.0;
        param_3[2] = fVar5 / fVar4;
      }
      else {
        param_3[2] = 0.0;
        param_3[0] = 1.0;
        param_3[1] = 0.0;
      }
      return;
    }
    if (*(int *)(*(long *)(lVar3 + 8) + 0xa4) == ram0x0001018672a0) {
      bVar1 = *(byte *)(lVar3 + 0x818) >> 3 & 3;
      goto LAB_1003aee1c;
    }
    lVar3 = *(long *)(lVar3 + 0x20);
  } while( true );
}




void FUN_1003aeec0(long param_1,undefined8 param_2,float *param_3)

{
  int iVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  undefined4 local_38 [2];
  
  lVar2 = *(long *)(param_1 + 0x10);
  while ((lVar2 != 0 && (*(int *)(*(long *)(lVar2 + 8) + 0xa4) != DAT_10184dd68))) {
    lVar2 = *(long *)(lVar2 + 0x10);
  }
  fVar3 = (float)FUN_1003dfe60(lVar2,2,3,0x19,0);
  fVar4 = (float)FUN_1003dfe60(lVar2,2,9,0x19,0);
  *param_3 = fVar4 + fVar3;
  iVar1 = FUN_1003a47d0(lVar2,PTR_s_Buff_Reza_Talent_NetherRage_10185aa10);
  if (iVar1 != 0) {
    local_38[0] = DAT_101d90dcc;
    fVar3 = (float)FUN_1003dfee8(lVar2,local_38,1,9);
    *param_3 = *param_3 + fVar3;
  }
  return;
}




void FUN_1003aef90(undefined8 param_1)

{
  FUN_1003dfe60(param_1,2,9,0x19,0);
  return;
}




void FUN_1003aefa4(undefined8 param_1)

{
  FUN_1003dfe60(param_1,2,4,0x19,0);
  return;
}




void FUN_1003aefb8(undefined8 param_1)

{
  FUN_1003dfe60(param_1,2,7,0x19,0);
  return;
}




void FUN_1003aefcc(undefined8 param_1)

{
  FUN_1003dfe60(param_1,2,5,0x19,0);
  return;
}




void FUN_1003aefe0(undefined8 param_1)

{
  FUN_1003dfe60(param_1,2,0xb,0x19,0);
  return;
}




undefined4 FUN_1003aeff4(long param_1)

{
  return *(undefined4 *)(**(long **)(*(long *)(param_1 + 0x38) + 0x228) + 8);
}




void FUN_1003af008(undefined8 param_1)

{
  FUN_1003dfe60(param_1,2,6,0x19,0);
  return;
}




undefined8 FUN_1003af01c(long param_1,int param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  
  plVar2 = (long *)(param_1 + 0x18);
  do {
    lVar3 = *plVar2;
    plVar2 = (long *)(lVar3 + 0x20);
  } while (*(int *)(*(long *)(lVar3 + 8) + 0xa4) != DAT_10184daa8);
  lVar1 = *(long *)(lVar3 + 0x28);
  lVar3 = lVar1;
  if (lVar1 != 0) {
    do {
      if ((*(int *)(lVar3 + 0x314) == DAT_101d2c764) && (*(int *)(lVar3 + 0x310) == 0)) {
        return 1;
      }
      plVar2 = (long *)(lVar3 + 0x350);
      lVar3 = *plVar2;
    } while (*plVar2 != 0);
    if (param_2 == 0) {
      do {
        if ((*(int *)(lVar1 + 0x314) == DAT_101d2c76c) && (*(int *)(lVar1 + 0x310) == 0)) {
          return 1;
        }
        lVar1 = *(long *)(lVar1 + 0x350);
      } while (lVar1 != 0);
    }
    else {
      do {
        if ((*(int *)(lVar1 + 0x314) == DAT_101d2c768) && (*(int *)(lVar1 + 0x310) == 0)) {
          return 1;
        }
        lVar1 = *(long *)(lVar1 + 0x350);
      } while (lVar1 != 0);
    }
  }
  return 0;
}




float FUN_1003af0d0(undefined8 param_1)

{
  int iVar1;
  float fVar2;
  
  iVar1 = FUN_1003af01c(param_1,1);
  fVar2 = 0.0;
  if (iVar1 != 0) {
    fVar2 = (float)FUN_1003df710(0,param_1,6,1);
    fVar2 = -fVar2;
  }
  return fVar2;
}




void FUN_1003af110(long param_1,undefined8 param_2,float *param_3,undefined4 *param_4,
                  undefined4 *param_5,undefined1 *param_6)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  undefined **local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined1 local_50;
  undefined4 local_4c;
  undefined4 uStack_48;
  
  lVar3 = *(long *)(param_1 + 0x10);
  while ((lVar3 != 0 && (*(int *)(*(long *)(lVar3 + 8) + 0xa4) != DAT_10184dd68))) {
    lVar3 = *(long *)(lVar3 + 0x10);
  }
  *param_3 = 0.0;
  *param_6 = 0;
  *param_4 = 1;
  *param_5 = 1;
  iVar1 = FUN_1003af01c(lVar3,0);
  if (iVar1 != 0) {
    lVar4 = *(long *)(lVar3 + 0x18);
    while ((lVar4 != 0 && (*(int *)(*(long *)(lVar4 + 8) + 0xa4) != DAT_10184daa8))) {
      lVar4 = *(long *)(lVar4 + 0x20);
    }
    lVar2 = *(long *)(lVar3 + 0x40);
    fVar5 = *(float *)(lVar2 + 0x4c) + *(float *)(lVar2 + 0x100) * (*(float *)(lVar2 + 0x268) + 1.0)
    ;
    fVar6 = (float)NEON_fminnm(fVar5 + fVar5 * *(float *)(lVar2 + 0x1b4),DAT_101e94334);
    fVar5 = DAT_101e94274;
    if (DAT_101e94274 <= fVar6) {
      fVar5 = fVar6;
    }
    fVar6 = (float)FUN_1003df710(lVar3,8,1);
    fVar5 = fVar5 * fVar6;
    *param_3 = fVar5;
    lVar2 = *(long *)(lVar4 + 0x28);
    for (lVar4 = lVar2; lVar4 != 0; lVar4 = *(long *)(lVar4 + 0x350)) {
      if ((*(int *)(lVar4 + 0x314) == DAT_101d2c770) && (*(int *)(lVar4 + 0x310) == 0)) {
        fVar6 = (float)FUN_1003dfe60(lVar3,0,2,0x19,0);
        *param_3 = fVar5 + fVar5 * fVar6;
        local_4c = *(undefined4 *)(lVar3 + 0x260);
        for (; (*(int *)(lVar2 + 0x314) != DAT_101d2c770 || (*(int *)(lVar2 + 0x310) != 0));
            lVar2 = *(long *)(lVar2 + 0x350)) {
        }
        uStack_48 = *(undefined4 *)(lVar2 + 0x30c);
        local_60 = 0;
        uStack_58 = 0;
        local_50 = 0;
        local_68 = &PTR_FUN_101496cd8;
        FUN_100496580(&local_68,&DAT_101e47d30);
        return;
      }
    }
  }
  return;
}




void FUN_1003af2b0(undefined8 *param_1,undefined4 param_2,undefined4 param_3)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  *param_1 = &PTR_FUN_101496cd8;
  *(undefined4 *)((long)param_1 + 0x1c) = param_2;
  *(undefined4 *)(param_1 + 4) = param_3;
  return;
}




void FUN_1003af2cc(void)

{
  return;
}




void FUN_1003af2d0(long param_1,undefined8 param_2,float *param_3)

{
  long lVar1;
  long lVar2;
  float fVar3;
  undefined **local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined1 local_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  
  lVar1 = *(long *)(param_1 + 0x10);
  while (*(int *)(*(long *)(lVar1 + 8) + 0xa4) != DAT_10184dd68) {
    lVar1 = *(long *)(lVar1 + 0x10);
  }
  lVar2 = *(long *)(lVar1 + 0x18);
  while ((lVar2 != 0 && (*(int *)(*(long *)(lVar2 + 8) + 0xa4) != DAT_10184daa8))) {
    lVar2 = *(long *)(lVar2 + 0x20);
  }
  FUN_1003ac88c(param_1,param_2,param_3);
  fVar3 = (float)FUN_1003dfe60(lVar1,0,2,0x19,0);
  *param_3 = *param_3 + *param_3 * fVar3;
  lVar2 = *(long *)(lVar2 + 0x28);
  while( true ) {
    if (lVar2 == 0) {
      return;
    }
    if ((*(int *)(lVar2 + 0x314) == DAT_101d2c774) && (*(int *)(lVar2 + 0x310) == 0)) break;
    lVar2 = *(long *)(lVar2 + 0x350);
  }
  uStack_38 = *(undefined4 *)(lVar2 + 0x30c);
  local_3c = *(undefined4 *)(lVar1 + 0x260);
  local_50 = 0;
  uStack_48 = 0;
  local_40 = 0;
  local_58 = &PTR_FUN_101496cd8;
  FUN_100496580(&local_58,&DAT_101e47d30);
  return;
}




void FUN_1003af3d4(long param_1)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  undefined **local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined1 local_38;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 local_2c;
  undefined2 local_28;
  undefined1 local_26;
  
  if (DAT_101d23a38 != '\0') {
    lVar3 = *(long *)(param_1 + 0x10);
    while ((lVar3 != 0 && (*(int *)(*(long *)(lVar3 + 8) + 0xa4) != DAT_10184dd68))) {
      lVar3 = *(long *)(lVar3 + 0x10);
    }
    iVar2 = FUN_1003af01c(lVar3,1);
    if (iVar2 != 0) {
      uVar1 = *(undefined4 *)(lVar3 + 0x260);
      local_2c = FUN_1003df710(lVar3,7,1);
      local_48 = 0;
      uStack_40 = 0;
      local_38 = 0;
      local_50 = &PTR_FUN_101497218;
      uStack_30 = 3;
      local_28 = 0x100;
      local_26 = 0;
      local_34 = uVar1;
      FUN_100496328(&local_50,&DAT_101e47d30);
    }
  }
  return;
}




void FUN_1003af488(long param_1,undefined8 *param_2,undefined4 *param_3,float *param_4)

{
  uint uVar1;
  
  *param_2 = "u_Weapon_Path";
  *param_3 = 1;
  do {
    param_1 = *(long *)(param_1 + 0x10);
  } while (*(int *)(*(long *)(param_1 + 8) + 0xa4) != DAT_10184dd68);
  uVar1 = FUN_1003af01c(param_1,1);
  *param_4 = (float)uVar1;
  return;
}




void FUN_1003af4ec(long param_1,undefined8 *param_2,undefined4 *param_3,float *param_4)

{
  uint uVar1;
  
  *param_2 = "u_Crystal_Path";
  *param_3 = 1;
  do {
    param_1 = *(long *)(param_1 + 0x10);
  } while (*(int *)(*(long *)(param_1 + 8) + 0xa4) != DAT_10184dd68);
  uVar1 = FUN_1003af01c(param_1,0);
  *param_4 = (float)uVar1;
  return;
}




undefined8
FUN_1003af550(undefined8 param_1,undefined8 param_2,undefined8 *param_3,uint param_4,
             undefined8 param_5)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  byte bVar6;
  undefined8 uVar7;
  code *local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  local_70 = 0;
  uStack_68 = 0;
  lVar2 = FUN_10000ef8c();
  FUN_1003a985c(&local_70,lVar2);
  *(byte *)(lVar2 + 0x10) = *(byte *)(lVar2 + 0x10) & 0xe7 | 4;
  lVar2 = FUN_10000dff8();
  FUN_1003a985c(&local_70,lVar2);
  *(undefined2 *)(lVar2 + 0x28) = 0x100;
  *(code **)(lVar2 + 0x30) = FUN_1003a24a0;
  FUN_1003a4e5c(lVar2 + 0x10,param_1);
  uVar1 = FUN_1004d2524("AttackToIdle");
  uVar1 = FUN_100015208("AttackToIdle",uVar1,0x12345678);
  *(undefined4 *)(lVar2 + 0x20) = uVar1;
  lVar2 = FUN_10000e524();
  FUN_1003a985c(&local_70,lVar2);
  uVar3 = FUN_1010a1520();
  lVar4 = FUN_1010a0e0c(uVar3,0,"*KindredSoundBalance*",0);
  uVar1 = FUN_1003af8d8(*(undefined4 *)(lVar4 + 900));
  *(undefined2 *)(lVar2 + 0x30) = 0x4ff;
  *(undefined4 *)(lVar2 + 0x34) = 1;
  *(undefined4 *)(lVar2 + 0x3c) = uVar1;
  *(undefined4 *)(lVar2 + 0x40) = 0xffffffff;
  *(byte *)(lVar2 + 0x38) = *(byte *)(lVar2 + 0x38) & 0xf8 | 4;
  *(undefined8 *)(lVar2 + 0x48) = 0;
  *(char **)(lVar2 + 0x10) = "Sound_Idris_Attack 1";
  *(char **)(lVar2 + 0x18) = "Sound_Idris_Attack 2";
  *(char **)(lVar2 + 0x20) = "Sound_Idris_Attack 3";
  *(char **)(lVar2 + 0x28) = "Sound_Idris_Attack 4";
  lVar2 = FUN_10000ceb8();
  FUN_1003a985c(&local_70,lVar2);
  *(undefined4 *)(lVar2 + 0x2c) = 0x3e99999a;
  *(code **)(lVar2 + 0x10) = FUN_1003a24a0;
  plVar5 = (long *)thunk_FUN_10000e358();
  FUN_1003a985c(&local_70,plVar5);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x58))(plVar5);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x48))(plVar5,param_2);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x78))(plVar5,0);
  (**(code **)(*plVar5 + 0x100))(plVar5,FUN_1003af488);
  uVar3 = FUN_10000bc94();
  FUN_1003a985c(&local_70,uVar3);
  lVar2 = FUN_10000cae4();
  FUN_1003a985c(&local_70,lVar2);
  *(undefined8 *)(lVar2 + 0x10) = param_5;
  lVar2 = FUN_10000cae4();
  FUN_1003a985c(&local_70,lVar2);
  *(code **)(lVar2 + 0x10) = FUN_1003af110;
  plVar5 = (long *)FUN_10000dc58();
  FUN_1003a985c(&local_70,plVar5);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x50))(plVar5,PTR_s_Ability__Idris__A_101859738);
  local_80 = FUN_1003af0d0;
  local_78 = 3;
  (**(code **)(*plVar5 + 0x28))(plVar5,&local_80);
  plVar5 = (long *)FUN_10000dc58();
  FUN_1003a985c(&local_70,plVar5);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x50))(plVar5,PTR_s_Ability__Idris__C_101859758);
  local_80 = FUN_1003af0d0;
  local_78 = 3;
  (**(code **)(*plVar5 + 0x28))(plVar5,&local_80);
  lVar2 = FUN_10000e524();
  FUN_1003a985c(&local_70,lVar2);
  uVar7 = *param_3;
  uVar3 = FUN_1010a1520();
  lVar4 = FUN_1010a0e0c(uVar3,0,"*KindredSoundBalance*",0);
  uVar1 = FUN_1003af8d8(*(undefined4 *)(lVar4 + 0x388));
  *(undefined8 *)(lVar2 + 0x10) = uVar7;
  *(undefined2 *)(lVar2 + 0x30) = 0x1ff;
  *(undefined4 *)(lVar2 + 0x34) = 1;
  *(undefined4 *)(lVar2 + 0x3c) = uVar1;
  *(undefined4 *)(lVar2 + 0x40) = 0xffffffff;
  *(byte *)(lVar2 + 0x38) = *(byte *)(lVar2 + 0x38) & 0xf8 | 4;
  *(undefined8 *)(lVar2 + 0x48) = 0;
  if (1 < param_4) {
    lVar4 = (ulong)param_4 - 1;
    bVar6 = 1;
    do {
      param_3 = param_3 + 1;
      *(undefined8 *)(lVar2 + (ulong)bVar6 * 8 + 0x10) = *param_3;
      bVar6 = bVar6 + 1;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
    *(byte *)(lVar2 + 0x31) = bVar6;
  }
  lVar2 = FUN_10000c3b0();
  FUN_1003a985c(&local_70,lVar2);
  *(code **)(lVar2 + 0x10) = FUN_1003af3d4;
  uVar3 = FUN_10000f034();
  FUN_1003a985c(&local_70,uVar3);
  return local_70;
}




float FUN_1003af8d8(float param_1)

{
  undefined8 uVar1;
  long lVar2;
  float fVar3;
  
  uVar1 = FUN_1010a1520();
  lVar2 = FUN_1010a0e0c(uVar1,0,"*KindredSoundBalance*",0);
  fVar3 = *(float *)(lVar2 + 4);
  uVar1 = FUN_1010a1520();
  lVar2 = FUN_1010a0e0c(uVar1,0,"*KindredSoundBalance*",0);
  return fVar3 + param_1 + *(float *)(lVar2 + 0x380);
}




undefined8 FUN_1003af93c(undefined8 param_1)

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
  FUN_1003a4e5c(lVar2 + 0x10,param_1);
  uVar1 = FUN_1004d2524("AttackToIdle");
  uVar1 = FUN_100015208("AttackToIdle",uVar1,0x12345678);
  *(undefined4 *)(lVar2 + 0x20) = uVar1;
  lVar2 = FUN_10000ceb8();
  FUN_1003a985c(&local_40,lVar2);
  *(undefined4 *)(lVar2 + 0x2c) = 0x3e99999a;
  *(code **)(lVar2 + 0x10) = FUN_1003a24a0;
  lVar2 = FUN_10000e524();
  FUN_1003a985c(&local_40,lVar2);
  uVar3 = FUN_1010a1520();
  lVar4 = FUN_1010a0e0c(uVar3,0,"*KindredSoundBalance*",0);
  uVar1 = FUN_1003af8d8(*(undefined4 *)(lVar4 + 900));
  *(undefined2 *)(lVar2 + 0x30) = 0x2ff;
  *(undefined4 *)(lVar2 + 0x34) = 1;
  *(undefined4 *)(lVar2 + 0x40) = 0xffffffff;
  *(undefined4 *)(lVar2 + 0x3c) = uVar1;
  *(byte *)(lVar2 + 0x38) = *(byte *)(lVar2 + 0x38) & 0xf8 | 4;
  *(undefined8 *)(lVar2 + 0x48) = 0;
  *(char **)(lVar2 + 0x10) = "Sound_Idris_Ranged_Attack_1";
  *(char **)(lVar2 + 0x18) = "Sound_Idris_Ranged_Attack_2";
  lVar2 = FUN_10000f250();
  FUN_1003a985c(&local_40,lVar2);
  *(undefined4 *)(lVar2 + 0x10) = 0x7a;
  FUN_1003d266c(lVar2,"CenterBody");
  uVar3 = FUN_10000f034();
  FUN_1003a985c(&local_40,uVar3);
  return local_40;
}




undefined8 FUN_1003afac8(undefined8 param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)(param_2 + 0x18);
  do {
    lVar2 = *plVar1;
    plVar1 = (long *)(lVar2 + 0x20);
  } while (*(int *)(*(long *)(lVar2 + 8) + 0xa4) != DAT_10184daa8);
  lVar2 = *(long *)(lVar2 + 0x28);
  while( true ) {
    if (lVar2 == 0) {
      return 1;
    }
    if ((*(int *)(lVar2 + 0x314) == DAT_101d2c794) && (*(int *)(lVar2 + 0x310) == 0)) break;
    lVar2 = *(long *)(lVar2 + 0x350);
  }
  return 0;
}




void FUN_1003afb28(undefined8 param_1,undefined8 param_2)

{
  FUN_1003af01c(param_2,0);
  return;
}




void FUN_1003afb34(long param_1)

{
  do {
    param_1 = *(long *)(param_1 + 0x10);
  } while (*(int *)(*(long *)(param_1 + 8) + 0xa4) != DAT_10184dd68);
  FUN_1003af01c(param_1,1);
  return;
}




uint FUN_1003afb60(long param_1)

{
  uint uVar1;
  
  do {
    param_1 = *(long *)(param_1 + 0x10);
  } while (*(int *)(*(long *)(param_1 + 8) + 0xa4) != DAT_10184dd68);
  uVar1 = FUN_1003af01c(param_1,1);
  return uVar1 ^ 1;
}




void FUN_1003afba0(undefined8 param_1)

{
  FUN_1003dfe60(param_1,0,6,0x19,0);
  return;
}




void FUN_1003afbb4(undefined8 param_1)

{
  FUN_1003dfe60(param_1,0,3,0x19,0);
  return;
}




void FUN_1003afbc8(undefined8 param_1)

{
  FUN_1003df710(param_1,4,1);
  return;
}




void FUN_1003afbd4(long param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 0x1e0);
  *param_2 = *(undefined8 *)(param_1 + 0x1d8);
  *(undefined4 *)(param_2 + 1) = uVar1;
  return;
}




void FUN_1003afbe8(undefined8 param_1)

{
  FUN_1003df710(param_1,0xc,1);
  return;
}




void FUN_1003afbf4(undefined8 param_1)

{
  FUN_1003dfe60(param_1,0,4,0x19,0);
  return;
}




void FUN_1003afc08(long param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 local_28 [2];
  
  do {
    param_1 = *(long *)(param_1 + 0x10);
  } while (*(int *)(*(long *)(param_1 + 8) + 0xa4) != DAT_10184dd68);
  local_28[0] = DAT_101d90b74;
  uVar1 = FUN_1003dfee8(param_1,local_28,2,9);
  *param_2 = uVar1;
  return;
}




void FUN_1003afc70(long param_1,float *param_2)

{
  float fVar1;
  undefined4 local_28 [2];
  
  do {
    param_1 = *(long *)(param_1 + 0x10);
  } while (*(int *)(*(long *)(param_1 + 8) + 0xa4) != DAT_10184dd68);
  local_28[0] = DAT_101d90b74;
  fVar1 = (float)FUN_1003dfee8(param_1,local_28,2,9);
  *param_2 = -fVar1;
  return;
}




void FUN_1003afcdc(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  undefined **local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined1 local_90;
  undefined4 local_8c;
  undefined4 uStack_88;
  int local_84;
  undefined4 local_80;
  undefined8 local_7c;
  undefined8 local_74;
  undefined8 local_6c;
  undefined8 local_60;
  undefined4 local_58;
  
  if (DAT_101d23a38 != '\0') {
    lVar4 = *(long *)(param_1 + 0x10);
    while ((lVar4 != 0 && (*(int *)(*(long *)(lVar4 + 8) + 0xa4) != DAT_10184dd68))) {
      lVar4 = *(long *)(lVar4 + 0x10);
    }
    plVar1 = *(long **)(param_1 + 0x1c8);
    if (plVar1 == (long *)0x0) {
      lVar2 = 0;
    }
    else if (*(int *)(param_1 + 0x1d0) == (int)plVar1[1]) {
      lVar2 = (**(code **)(*plVar1 + 0x10))();
    }
    else {
      lVar2 = 0;
      *(undefined8 *)(param_1 + 0x1c8) = 0;
      *(undefined4 *)(param_1 + 0x1d0) = DAT_101dc0b88;
    }
    fVar6 = (float)FUN_1003dfe60(lVar4,4,4,0x19,0);
    if (*(char *)(lVar4 + 0x264) == *(char *)(lVar2 + 0x264)) {
      fVar7 = (float)FUN_1003dfe60(lVar4,4,6,0x19,0);
      uVar5 = *(undefined4 *)(lVar4 + 0x260);
      lVar2 = (**(code **)(**(long **)(param_1 + 0x1c8) + 0x10))();
      uStack_88 = *(undefined4 *)(lVar2 + 0x260);
      puVar3 = PTR_s_Buff_Idris_C_AttachedAlly_10185aac0;
    }
    else {
      fVar7 = (float)FUN_1003dfe60(lVar4,4,5,0x19,0);
      uVar5 = *(undefined4 *)(lVar4 + 0x260);
      lVar2 = (**(code **)(**(long **)(param_1 + 0x1c8) + 0x10))();
      uStack_88 = *(undefined4 *)(lVar2 + 0x260);
      puVar3 = PTR_s_Buff_Idris_C_AttachedEnemy_10185aac8;
    }
    local_a0 = 0;
    uStack_98 = 0;
    local_90 = 0;
    local_a8 = &PTR_FUN_101496b18;
    local_84 = DAT_1018589d8;
    local_7c = 0x1bf800000;
    local_60 = 0;
    local_6c = 0;
    local_74 = 0;
    local_58 = DAT_101dc0b88;
    DAT_1018589d8 = DAT_1018589d8 + 1;
    local_8c = uVar5;
    local_80 = FUN_1003d4e0c(puVar3);
    FUN_10049639c(&local_a8,&DAT_101e47d30);
    local_8c = *(undefined4 *)(lVar4 + 0x260);
    local_a0 = 0;
    uStack_98 = 0;
    local_90 = 0;
    local_a8 = &PTR_FUN_101496b18;
    local_84 = DAT_1018589d8;
    local_7c = CONCAT44(1,fVar7 + fVar6);
    local_60 = 0;
    local_6c = 0;
    local_74 = 0;
    local_58 = DAT_101dc0b88;
    DAT_1018589d8 = DAT_1018589d8 + 1;
    uStack_88 = local_8c;
    local_80 = FUN_1003d4e0c(PTR_s_Buff_Idris_C_AttachmentHandler_10185aad0);
    FUN_10049639c(&local_a8,&DAT_101e47d30);
  }
  return;
}




void FUN_1003aff04(undefined8 param_1)

{
  FUN_1003dfe60(param_1,4,4,0x19,0);
  return;
}




void FUN_1003aff18(undefined8 param_1)

{
  FUN_1003dfe60(param_1,4,3,0x19,0);
  return;
}




void FUN_1003aff2c(long param_1)

{
  char *pcVar1;
  int iVar2;
  long *plVar3;
  
  if (DAT_101d23a38 == '\0') {
    do {
      param_1 = *(long *)(param_1 + 0x10);
    } while (*(int *)(*(long *)(param_1 + 8) + 0xa4) != DAT_10184dd68);
    iVar2 = FUN_1003af01c(param_1,0);
    FUN_100463dac(param_1);
    plVar3 = *(long **)(param_1 + 0x50);
    if (plVar3 != (long *)0x0) {
      pcVar1 = "Ability03_RangedLeap";
      if (iVar2 == 0) {
        pcVar1 = "Ability03_MeleeLeap";
      }
                    /* WARNING: Could not recover jumptable at 0x0001003affcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x68))(0x3f800000,plVar3,pcVar1,0,"AttackToIdle");
      return;
    }
  }
  return;
}




void FUN_1003affd0(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,int param_5
                  ,undefined8 param_6)

{
  long *plVar1;
  
  if (param_5 != 0) {
    FUN_100463dac(param_2);
  }
  plVar1 = *(long **)(param_2 + 0x50);
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001003b0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x68))(param_1,plVar1,param_3,param_4,param_6);
    return;
  }
  return;
}

