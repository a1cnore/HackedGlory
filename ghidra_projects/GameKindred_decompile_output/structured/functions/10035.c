// functions/10035 — 177 functions
#include "GameKindred.h"




undefined8 FUN_10035002c(void)

{
  byte bVar1;
  bool bVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_30 = 0;
  uStack_28 = 0;
  lVar3 = FUN_1003e10f0();
  bVar1 = *(byte *)(lVar3 + 0xe5);
  lVar3 = FUN_10000ed74();
  FUN_1003a985c(&local_30,lVar3);
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
  *(undefined2 *)(lVar3 + 0x68) = 0x4110;
  bVar2 = DAT_101d23a38 != '\0';
  *(undefined4 *)(lVar3 + 0xa4) = 0x41400000;
  *(byte *)(lVar3 + 0xa8) = *(byte *)(lVar3 + 0xa8) & 0xf0 | bVar2;
  lVar3 = FUN_10000cae4();
  FUN_1003a985c(&local_30,lVar3);
  *(code **)(lVar3 + 0x10) = FUN_1003a7428;
  uVar4 = FUN_10000c784();
  FUN_1003a985c(&local_30,uVar4);
  return local_30;
}




undefined8 FUN_100350120(void)

{
  byte bVar1;
  bool bVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_30 = 0;
  uStack_28 = 0;
  lVar3 = FUN_1003e10f0();
  bVar1 = *(byte *)(lVar3 + 0xe5);
  lVar3 = FUN_10000ed74();
  FUN_1003a985c(&local_30,lVar3);
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
  *(undefined8 *)(lVar3 + 0x58) = 0xffffffff00000010;
  *(byte *)(lVar3 + 0x6a) = bVar1 | 0x14;
  *(undefined2 *)(lVar3 + 0x68) = 0x4110;
  bVar2 = DAT_101d23a38 != '\0';
  *(undefined4 *)(lVar3 + 0xa4) = 0x447a0000;
  *(byte *)(lVar3 + 0xa8) = *(byte *)(lVar3 + 0xa8) & 0xf0 | bVar2;
  lVar3 = FUN_10000cae4();
  FUN_1003a985c(&local_30,lVar3);
  *(code **)(lVar3 + 0x10) = FUN_1003a7428;
  uVar4 = FUN_10000c784();
  FUN_1003a985c(&local_30,uVar4);
  return local_30;
}




undefined8 FUN_100350214(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_30 = 0;
  uStack_28 = 0;
  uVar1 = FUN_10000ba84();
  FUN_1003a985c(&local_30,uVar1);
  lVar2 = FUN_10000cae4();
  FUN_1003a985c(&local_30,lVar2);
  *(code **)(lVar2 + 0x10) = FUN_1003a7428;
  uVar1 = FUN_10000c784();
  FUN_1003a985c(&local_30,uVar1);
  return local_30;
}




undefined8 FUN_10035027c(void)

{
  byte bVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_30 = 0;
  uStack_28 = 0;
  lVar2 = FUN_1003e10f0();
  bVar1 = *(byte *)(lVar2 + 0xe5);
  uVar3 = FUN_10000c784();
  FUN_1003a985c(&local_30,uVar3);
  lVar2 = FUN_10000e9f4();
  FUN_1003a985c(&local_30,lVar2);
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
  *(undefined8 *)(lVar2 + 0x58) = 0xffffffff00008000;
  *(byte *)(lVar2 + 0x6a) = bVar1 | 0x14;
  *(undefined2 *)(lVar2 + 0x68) = 0x4110;
  *(bool *)(lVar2 + 0x70) = DAT_101d23a38 != '\0';
  lVar2 = FUN_10000c540();
  FUN_1003a985c(&local_30,lVar2);
  *(undefined **)(lVar2 + 0x10) = PTR_s_Buff_Invulnerable_10185a588;
  lVar2 = FUN_10000cae4();
  FUN_1003a985c(&local_30,lVar2);
  *(code **)(lVar2 + 0x10) = FUN_1003a7428;
  return local_30;
}




undefined8 FUN_10035037c(void)

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
  *(undefined **)(lVar2 + 0x10) = PTR_s_Buff_Debug_CrowdControl_10185a598;
  *(undefined4 *)(lVar2 + 0x18) = 0x40400000;
  *(undefined2 *)(lVar2 + 0x68) = 1;
  *(byte *)(lVar2 + 0x6a) = *(byte *)(lVar2 + 0x6a) & 0xfe;
  *(code **)(lVar2 + 0x50) = FUN_1003a7490;
  uVar1 = FUN_10000c784();
  FUN_1003a985c(&local_30,uVar1);
  return local_30;
}




undefined8 FUN_10035040c(void)

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
  *(undefined8 *)(lVar2 + 0x10) = DAT_10185a468;
  *(undefined4 *)(lVar2 + 0x18) = 0x40a00000;
  *(undefined2 *)(lVar2 + 0x68) = 1;
  *(byte *)(lVar2 + 0x6a) = *(byte *)(lVar2 + 0x6a) & 0xfe;
  uVar1 = FUN_10000c784();
  FUN_1003a985c(&local_30,uVar1);
  return local_30;
}




undefined8 FUN_100350490(void)

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
  *(undefined **)(lVar2 + 0x10) = PTR_s_Buff_Fear_10185a5b8;
  *(undefined4 *)(lVar2 + 0x18) = 0x40400000;
  *(undefined2 *)(lVar2 + 0x68) = 1;
  *(byte *)(lVar2 + 0x6a) = *(byte *)(lVar2 + 0x6a) & 0xfe;
  uVar1 = FUN_10000c784();
  FUN_1003a985c(&local_30,uVar1);
  return local_30;
}




undefined8 FUN_100350514(void)

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
  *(undefined **)(lVar2 + 0x10) = PTR_s_Buff_Silence_10185a560;
  *(undefined4 *)(lVar2 + 0x18) = 0x40a00000;
  *(undefined2 *)(lVar2 + 0x68) = 1;
  *(byte *)(lVar2 + 0x6a) = *(byte *)(lVar2 + 0x6a) & 0xfe;
  uVar1 = FUN_10000c784();
  FUN_1003a985c(&local_30,uVar1);
  return local_30;
}




undefined8 FUN_100350598(void)

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
  *(undefined **)(lVar2 + 0x10) = PTR_s_Buff_ItemSilence_10185a5a8;
  *(undefined4 *)(lVar2 + 0x18) = 0x40a00000;
  *(undefined2 *)(lVar2 + 0x68) = 1;
  *(byte *)(lVar2 + 0x6a) = *(byte *)(lVar2 + 0x6a) & 0xfe;
  uVar1 = FUN_10000c784();
  FUN_1003a985c(&local_30,uVar1);
  return local_30;
}




undefined8 FUN_10035061c(void)

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
  *(undefined **)(lVar2 + 0x10) = PTR_s_Buff_Slow_10185a5a0;
  *(undefined4 *)(lVar2 + 0x18) = 0x41200000;
  *(undefined2 *)(lVar2 + 0x68) = 1;
  *(byte *)(lVar2 + 0x6a) = *(byte *)(lVar2 + 0x6a) & 0xfe;
  uVar1 = FUN_10000c784();
  FUN_1003a985c(&local_30,uVar1);
  return local_30;
}




undefined8 FUN_1003506a0(void)

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
  *(undefined **)(lVar2 + 0x10) = PTR_s_Buff_Blind_10185a5b0;
  *(undefined4 *)(lVar2 + 0x18) = 0x40a00000;
  *(undefined2 *)(lVar2 + 0x68) = 1;
  *(byte *)(lVar2 + 0x6a) = *(byte *)(lVar2 + 0x6a) & 0xfe;
  uVar1 = FUN_10000c784();
  FUN_1003a985c(&local_30,uVar1);
  return local_30;
}




undefined8 FUN_100350724(void)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_30 = 0;
  uStack_28 = 0;
  plVar1 = (long *)FUN_10000f300();
  FUN_1003a985c(&local_30,plVar1);
  plVar1 = (long *)(**(code **)(*plVar1 + 0x50))(plVar1,"*GlaiveTutorial*",0);
  (**(code **)(*plVar1 + 0x20))(plVar1,FUN_1003a7150);
  uVar2 = FUN_10000f034();
  FUN_1003a985c(&local_30,uVar2);
  return local_30;
}




undefined8 FUN_1003507a0(void)

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
  *(undefined **)(lVar2 + 0x10) = PTR_s_Buff_Stunned_10185a208;
  *(undefined4 *)(lVar2 + 0x18) = 0x3f800000;
  *(undefined2 *)(lVar2 + 0x68) = 1;
  *(byte *)(lVar2 + 0x6a) = *(byte *)(lVar2 + 0x6a) & 0xfe;
  uVar1 = FUN_10000c784();
  FUN_1003a985c(&local_30,uVar1);
  return local_30;
}




undefined8 FUN_100350824(void)

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
  *(undefined **)(lVar2 + 0x10) = PTR_s_Buff_Stasis_10185a590;
  *(undefined4 *)(lVar2 + 0x18) = 0x3f800000;
  *(undefined2 *)(lVar2 + 0x68) = 1;
  *(byte *)(lVar2 + 0x6a) = *(byte *)(lVar2 + 0x6a) & 0xfe;
  uVar1 = FUN_10000c784();
  FUN_1003a985c(&local_30,uVar1);
  return local_30;
}




undefined8 FUN_1003508a8(void)

{
  long *plVar1;
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_30 = 0;
  uStack_28 = 0;
  plVar1 = (long *)FUN_10000f748();
  FUN_1003a985c(&local_30,plVar1);
  (**(code **)(*plVar1 + 0x50))(plVar1,FUN_1003a7480);
  return local_30;
}




undefined8 FUN_1003508fc(void)

{
  byte bVar1;
  bool bVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 local_40;
  undefined8 uStack_38;
  
  local_40 = 0;
  uStack_38 = 0;
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
  *(undefined4 *)(lVar3 + 0x50) = 0x3f800000;
  *(undefined1 *)(lVar3 + 0x54) = 0xff;
  *(undefined8 *)(lVar3 + 0x60) = 0xffffffff00000000;
  *(undefined8 *)(lVar3 + 0x58) = 0xffffffff00000010;
  *(byte *)(lVar3 + 0x6a) = bVar1 | 0x14;
  *(undefined2 *)(lVar3 + 0x68) = 0x4110;
  bVar2 = DAT_101d23a38 != '\0';
  *(undefined4 *)(lVar3 + 0xa4) = 0x43480000;
  *(byte *)(lVar3 + 0xa8) = *(byte *)(lVar3 + 0xa8) & 0xf0 | bVar2;
  lVar3 = FUN_10000bd3c();
  FUN_1003a985c(&local_40,lVar3);
  *(undefined **)(lVar3 + 0x10) = PTR_s_Buff_Minion_Ace_10185a5c0;
  *(undefined4 *)(lVar3 + 0x18) = 0x41200000;
  *(undefined2 *)(lVar3 + 0x68) = 1;
  *(byte *)(lVar3 + 0x6a) = *(byte *)(lVar3 + 0x6a) & 0xfe;
  uVar4 = FUN_10000c784();
  FUN_1003a985c(&local_40,uVar4);
  return local_40;
}




undefined8 FUN_100350a10(void)

{
  long *plVar1;
  undefined4 local_40 [2];
  undefined4 local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_30 = 0;
  uStack_28 = 0;
  plVar1 = (long *)FUN_10000de28();
  FUN_1003a985c(&local_30,plVar1);
  plVar1 = (long *)(**(code **)(*plVar1 + 0x50))(plVar1);
  local_40[0] = 0xc6ea6000;
  local_38 = 1;
  (**(code **)(*plVar1 + 0x10))(plVar1,6,local_40);
  return local_30;
}




undefined8 FUN_100350a84(void)

{
  long lVar1;
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_30 = 0;
  uStack_28 = 0;
  lVar1 = FUN_10000e94c();
  FUN_1003a985c(&local_30,lVar1);
  *(code **)(lVar1 + 0x10) = FUN_1003a758c;
  lVar1 = FUN_10000c3b0();
  FUN_1003a985c(&local_30,lVar1);
  *(code **)(lVar1 + 0x10) = FUN_1003a749c;
  return local_30;
}




undefined8 FUN_100350aec(void)

{
  undefined8 uVar1;
  undefined8 local_20;
  undefined8 uStack_18;
  
  local_20 = 0;
  uStack_18 = 0;
  uVar1 = FUN_10000d668();
  FUN_1003a985c(&local_20,uVar1);
  return local_20;
}




undefined8 FUN_100350b1c(void)

{
  long *plVar1;
  undefined4 local_40 [2];
  undefined4 local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_30 = 0;
  uStack_28 = 0;
  plVar1 = (long *)FUN_10000de28();
  FUN_1003a985c(&local_30,plVar1);
  plVar1 = (long *)(**(code **)(*plVar1 + 0x50))(plVar1);
  local_40[0] = 0;
  local_38 = 1;
  (**(code **)(*plVar1 + 0x20))(plVar1,2,local_40);
  return local_30;
}




undefined8 FUN_100350b88(void)

{
  byte bVar1;
  bool bVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 local_40;
  undefined8 uStack_38;
  
  local_40 = 0;
  uStack_38 = 0;
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
  *(undefined4 *)(lVar3 + 0x50) = 0x3f800000;
  *(undefined1 *)(lVar3 + 0x54) = 0xff;
  *(undefined8 *)(lVar3 + 0x60) = 0xffffffff00000000;
  *(undefined8 *)(lVar3 + 0x58) = 0xffffffff00040000;
  *(byte *)(lVar3 + 0x6a) = bVar1 | 0x14;
  *(undefined2 *)(lVar3 + 0x68) = 0x4170;
  bVar2 = DAT_101d23a38 != '\0';
  *(undefined4 *)(lVar3 + 0xa4) = 0x41f00000;
  *(byte *)(lVar3 + 0xa8) = *(byte *)(lVar3 + 0xa8) & 0xf0 | bVar2;
  lVar3 = FUN_10000bd3c();
  FUN_1003a985c(&local_40,lVar3);
  *(undefined **)(lVar3 + 0x10) = PTR_s_Buff_Debug_FortifiedHealth_10185a5c8;
  *(undefined4 *)(lVar3 + 0x18) = 0x40a00000;
  *(undefined2 *)(lVar3 + 0x68) = 1;
  *(byte *)(lVar3 + 0x6a) = *(byte *)(lVar3 + 0x6a) & 0xfe;
  uVar4 = FUN_10000c784();
  FUN_1003a985c(&local_40,uVar4);
  return local_40;
}




undefined8 FUN_100350c9c(void)

{
  long *plVar1;
  undefined4 local_50 [2];
  undefined4 local_48;
  undefined1 local_40 [8];
  undefined4 local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_30 = 0;
  uStack_28 = 0;
  plVar1 = (long *)FUN_10000f300();
  FUN_1003a985c(&local_30,plVar1);
  plVar1 = (long *)(**(code **)(*plVar1 + 0x50))(plVar1,"*Neutral_JungleMinion_TestDummy*",0);
  plVar1 = (long *)(**(code **)(*plVar1 + 0x20))(plVar1,FUN_10048fb04);
  local_40[0] = 0;
  local_38 = 1;
  plVar1 = (long *)(**(code **)(*plVar1 + 0x60))(plVar1,local_40);
  local_50[0] = 0;
  local_48 = 1;
  (**(code **)(*plVar1 + 0x68))(plVar1,local_50);
  return local_30;
}




undefined8 FUN_100350d3c(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_30 = 0;
  uStack_28 = 0;
  uVar1 = FUN_10000bb2c();
  FUN_1003a985c(&local_30,uVar1);
  lVar2 = FUN_10000f918();
  FUN_1003a985c(&local_30,lVar2);
  *(undefined8 *)(lVar2 + 0x10) = DAT_10185a5d0;
  uVar1 = FUN_10000c784();
  FUN_1003a985c(&local_30,uVar1);
  return local_30;
}




undefined8 FUN_100350da4(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_30 = 0;
  uStack_28 = 0;
  lVar1 = FUN_10000b928();
  FUN_1003a985c(&local_30,lVar1);
  *(undefined2 *)(lVar1 + 0x10) = 0x101;
  *(undefined1 *)(lVar1 + 0x12) = 1;
  lVar1 = FUN_10000f918();
  FUN_1003a985c(&local_30,lVar1);
  *(undefined8 *)(lVar1 + 0x10) = DAT_10185a5d0;
  uVar2 = FUN_10000c784();
  FUN_1003a985c(&local_30,uVar2);
  return local_30;
}




undefined8 FUN_100350e20(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_30 = 0;
  uStack_28 = 0;
  lVar1 = FUN_10000b928();
  FUN_1003a985c(&local_30,lVar1);
  *(undefined2 *)(lVar1 + 0x10) = 0x101;
  *(undefined1 *)(lVar1 + 0x12) = 1;
  lVar1 = FUN_10000cae4();
  FUN_1003a985c(&local_30,lVar1);
  *(code **)(lVar1 + 0x10) = FUN_1003a7680;
  uVar2 = FUN_10000c784();
  FUN_1003a985c(&local_30,uVar2);
  return local_30;
}




undefined8 FUN_100350e9c(void)

{
  long *plVar1;
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_30 = 0;
  uStack_28 = 0;
  plVar1 = (long *)FUN_10000ca34();
  FUN_1003a985c(&local_30,plVar1);
  (**(code **)(*plVar1 + 0x60))(plVar1);
  return local_30;
}




undefined8 FUN_100350ee8(void)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 local_70;
  undefined8 uStack_68;
  
  local_70 = 0;
  uStack_68 = 0;
  lVar2 = FUN_10000e1b4();
  FUN_1003a985c(&local_70,lVar2);
  *(undefined8 *)(lVar2 + 0x40) = 0;
  *(uint *)(lVar2 + 0x3c) = (uint)lVar2 & 0xffff;
  *(undefined8 *)(lVar2 + 0x20) = 0;
  *(undefined8 *)(lVar2 + 0x28) = 0x3f80000000000001;
  *(undefined4 *)(lVar2 + 0x10) = 0x18331508;
  *(ushort *)(lVar2 + 0x80) = *(ushort *)(lVar2 + 0x80) & 0xfe2c | 0xc3;
  lVar2 = FUN_10000dff8();
  FUN_1003a985c(&local_70,lVar2);
  *(undefined2 *)(lVar2 + 0x28) = 0;
  *(undefined8 *)(lVar2 + 0x30) = 0;
  uVar1 = FUN_1004d2524("Attack_BuildUp");
  uVar1 = FUN_100015208("Attack_BuildUp",uVar1,0x12345678);
  *(undefined4 *)(lVar2 + 0x10) = uVar1;
  uVar1 = FUN_1004d2524("AttackToIdle");
  uVar1 = FUN_100015208("AttackToIdle",uVar1,0x12345678);
  *(undefined4 *)(lVar2 + 0x20) = uVar1;
  uVar3 = FUN_10000e1b4();
  FUN_1003a985c(&local_70,uVar3);
  FUN_1003a4cdc(0x3f19999a,uVar3,"Effect_TurretChargeUp",1,"Projectile_RedLight",0,1,0,0);
  uVar3 = FUN_10000e1b4();
  FUN_1003a985c(&local_70,uVar3);
  FUN_1003a4cdc(0x3f19999a,uVar3,"Effect_TurretSpotlight",1,"Projectile_Spotlight",0,1,0,0);
  lVar2 = FUN_10000e524();
  FUN_1003a985c(&local_70,lVar2);
  uVar3 = FUN_1010a1520();
  lVar4 = FUN_1010a0e0c(uVar3,0,"*KindredSoundBalance*",0);
  uVar1 = FUN_1003bfc80(*(undefined4 *)(lVar4 + 0x30));
  *(undefined2 *)(lVar2 + 0x30) = 0x4ff;
  *(undefined4 *)(lVar2 + 0x34) = 1;
  *(undefined4 *)(lVar2 + 0x3c) = uVar1;
  *(undefined4 *)(lVar2 + 0x40) = 0xffffffff;
  *(byte *)(lVar2 + 0x38) = *(byte *)(lVar2 + 0x38) & 0xf8 | 4;
  *(undefined8 *)(lVar2 + 0x48) = 0;
  *(char **)(lVar2 + 0x10) = "build://Sounds/Turret.assetbundle/turret_reload_01.mp3";
  *(char **)(lVar2 + 0x18) = "build://Sounds/Turret.assetbundle/turret_reload_02.mp3";
  *(char **)(lVar2 + 0x20) = "build://Sounds/Turret.assetbundle/turret_reload_03.mp3";
  *(char **)(lVar2 + 0x28) = "build://Sounds/Turret.assetbundle/turret_reload_04.mp3";
  lVar2 = FUN_10000ceb8();
  FUN_1003a985c(&local_70,lVar2);
  *(undefined4 *)(lVar2 + 0x2c) = 0x3ecccccd;
  *(undefined8 *)(lVar2 + 0x10) = 0;
  uVar3 = FUN_10000e1b4();
  FUN_1003a985c(&local_70,uVar3);
  FUN_1003a4cdc(0x3f800000,uVar3,"Effect_TurretMuzzleFlare",1,"Projectile_TurretBarrelTip",0,1,0,0);
  lVar2 = FUN_10000e1b4();
  FUN_1003a985c(&local_70,lVar2);
  *(undefined8 *)(lVar2 + 0x40) = 0;
  *(ushort *)(lVar2 + 0x80) = *(ushort *)(lVar2 + 0x80) & 0xffef | 3;
  *(uint *)(lVar2 + 0x3c) = (uint)lVar2 & 0xffff;
  *(undefined8 *)(lVar2 + 0x20) = 0;
  *(undefined8 *)(lVar2 + 0x28) = 0x3f80000000000001;
  *(undefined4 *)(lVar2 + 0x10) = 0x2450e3e2;
  lVar2 = FUN_10000e524();
  FUN_1003a985c(&local_70,lVar2);
  uVar3 = FUN_1010a1520();
  lVar4 = FUN_1010a0e0c(uVar3,0,"*KindredSoundBalance*",0);
  uVar1 = FUN_1003bfc80(*(undefined4 *)(lVar4 + 0x34));
  *(undefined2 *)(lVar2 + 0x30) = 0x4ff;
  *(undefined4 *)(lVar2 + 0x34) = 1;
  *(undefined4 *)(lVar2 + 0x3c) = uVar1;
  *(undefined4 *)(lVar2 + 0x40) = 0xffffffff;
  *(byte *)(lVar2 + 0x38) = *(byte *)(lVar2 + 0x38) & 0xf8 | 4;
  *(undefined8 *)(lVar2 + 0x48) = 0;
  *(char **)(lVar2 + 0x10) = "build://Sounds/Turret.assetbundle/turret_fires_01.mp3";
  *(char **)(lVar2 + 0x18) = "build://Sounds/Turret.assetbundle/turret_fires_02.mp3";
  *(char **)(lVar2 + 0x20) = "build://Sounds/Turret.assetbundle/turret_fires_03.mp3";
  *(char **)(lVar2 + 0x28) = "build://Sounds/Turret.assetbundle/turret_fires_04.mp3";
  uVar3 = FUN_10000e1b4();
  FUN_1003a985c(&local_70,uVar3);
  FUN_1003a4cdc(0x3f800000,uVar3,"Effect_SparkBursts",1,"SparkEmissions",0,1,0,0);
  uVar3 = FUN_10000bc94();
  FUN_1003a985c(&local_70,uVar3);
  lVar2 = FUN_10000f250();
  FUN_1003a985c(&local_70,lVar2);
  *(undefined4 *)(lVar2 + 0x10) = 0x70;
  FUN_1003d266c(lVar2,"Projectile_TurretBarrelTip");
  lVar2 = FUN_10000dff8();
  FUN_1003a985c(&local_70,lVar2);
  *(undefined2 *)(lVar2 + 0x28) = 0;
  *(undefined8 *)(lVar2 + 0x30) = 0;
  uVar1 = FUN_1004d2524("Attack_Recoil");
  uVar1 = FUN_100015208("Attack_Recoil",uVar1,0x12345678);
  *(undefined4 *)(lVar2 + 0x10) = uVar1;
  uVar1 = FUN_1004d2524("AttackToIdle");
  uVar1 = FUN_100015208("AttackToIdle",uVar1,0x12345678);
  *(undefined4 *)(lVar2 + 0x20) = uVar1;
  uVar3 = FUN_10000f034();
  FUN_1003a985c(&local_70,uVar3);
  return local_70;
}




undefined8 FUN_100351324(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_30 = 0;
  uStack_28 = 0;
  lVar1 = FUN_10000e1b4();
  FUN_1003a985c(&local_30,lVar1);
  *(undefined8 *)(lVar1 + 0x40) = 0;
  *(uint *)(lVar1 + 0x3c) = (uint)lVar1 & 0xffff;
  *(undefined8 *)(lVar1 + 0x20) = 0;
  *(undefined8 *)(lVar1 + 0x28) = 0x3f80000000000001;
  *(undefined4 *)(lVar1 + 0x10) = 0x18331508;
  *(ushort *)(lVar1 + 0x80) = *(ushort *)(lVar1 + 0x80) & 0xfe2c | 0xc3;
  lVar1 = FUN_10000e524();
  FUN_1003a985c(&local_30,lVar1);
  *(char **)(lVar1 + 0x10) = "build://Sounds/Turret.assetbundle/turret_focus.mp3";
  *(undefined2 *)(lVar1 + 0x30) = 0x1ff;
  *(undefined4 *)(lVar1 + 0x34) = 1;
  *(undefined8 *)(lVar1 + 0x3c) = 0xffffffff3f800000;
  *(undefined8 *)(lVar1 + 0x48) = 0;
  *(byte *)(lVar1 + 0x38) = *(byte *)(lVar1 + 0x38) & 0xf0 | 0xc;
  uVar2 = FUN_10000bc94();
  FUN_1003a985c(&local_30,uVar2);
  uVar2 = FUN_10000ef8c();
  FUN_1003a985c(&local_30,uVar2);
  return local_30;
}




undefined8 FUN_10035140c(void)

{
  long lVar1;
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_30 = 0;
  uStack_28 = 0;
  lVar1 = FUN_10000ef8c();
  FUN_1003a985c(&local_30,lVar1);
  *(byte *)(lVar1 + 0x10) = *(byte *)(lVar1 + 0x10) & 0xfc | 1;
  return local_30;
}




undefined8 FUN_100351458(void)

{
  byte bVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 local_60;
  undefined8 uStack_58;
  
  local_60 = 0;
  uStack_58 = 0;
  lVar3 = FUN_1003e10f0();
  bVar1 = *(byte *)(lVar3 + 0xe5);
  lVar3 = FUN_10000dff8();
  FUN_1003a985c(&local_60,lVar3);
  *(undefined2 *)(lVar3 + 0x28) = 0;
  *(undefined8 *)(lVar3 + 0x30) = 0;
  uVar2 = FUN_1004d2524("Die");
  uVar2 = FUN_100015208("Die",uVar2,0x12345678);
  *(undefined4 *)(lVar3 + 0x10) = uVar2;
  *(undefined4 *)(lVar3 + 0x20) = 0;
  lVar3 = FUN_10000e524();
  FUN_1003a985c(&local_60,lVar3);
  uVar4 = FUN_1010a1520();
  lVar5 = FUN_1010a0e0c(uVar4,0,"*KindredSoundBalance*",0);
  uVar2 = FUN_1003bfc80(*(undefined4 *)(lVar5 + 0x3c));
  *(char **)(lVar3 + 0x10) = "build://Sounds/Turret.assetbundle/turret_death.mp3";
  *(undefined2 *)(lVar3 + 0x30) = 0x1ff;
  *(undefined4 *)(lVar3 + 0x34) = 1;
  *(undefined4 *)(lVar3 + 0x3c) = uVar2;
  *(undefined4 *)(lVar3 + 0x40) = 0xffffffff;
  *(byte *)(lVar3 + 0x38) = *(byte *)(lVar3 + 0x38) & 0xf8 | 4;
  *(undefined8 *)(lVar3 + 0x48) = 0;
  lVar3 = FUN_10000e1b4();
  FUN_1003a985c(&local_60,lVar3);
  *(undefined8 *)(lVar3 + 0x40) = 0;
  *(ushort *)(lVar3 + 0x80) = *(ushort *)(lVar3 + 0x80) & 0xffef | 3;
  *(uint *)(lVar3 + 0x3c) = (uint)lVar3 & 0xffff;
  *(undefined8 *)(lVar3 + 0x20) = 0;
  *(undefined8 *)(lVar3 + 0x28) = 0xbf80000000000001;
  *(undefined4 *)(lVar3 + 0x10) = 0x1799eb7d;
  lVar3 = FUN_10000ceb8();
  FUN_1003a985c(&local_60,lVar3);
  *(undefined4 *)(lVar3 + 0x2c) = 0x3f800000;
  *(undefined8 *)(lVar3 + 0x10) = 0;
  lVar3 = FUN_10000e1b4();
  FUN_1003a985c(&local_60,lVar3);
  *(undefined8 *)(lVar3 + 0x20) = 0;
  *(undefined8 *)(lVar3 + 0x28) = 0x4040000000000003;
  *(undefined8 *)(lVar3 + 0x40) = 0;
  *(ushort *)(lVar3 + 0x80) = *(ushort *)(lVar3 + 0x80) & 0xffec | 2;
  *(uint *)(lVar3 + 0x3c) = (uint)lVar3 & 0xffff;
  *(undefined4 *)(lVar3 + 0x10) = 0xd521e44e;
  *(char **)(lVar3 + 0x18) = "Bone_HeadWobble";
  lVar3 = FUN_10000ceb8();
  FUN_1003a985c(&local_60,lVar3);
  *(undefined4 *)(lVar3 + 0x2c) = 0x3f19999a;
  *(undefined8 *)(lVar3 + 0x10) = 0;
  lVar3 = FUN_10000e1b4();
  FUN_1003a985c(&local_60,lVar3);
  *(undefined8 *)(lVar3 + 0x20) = 0;
  *(undefined8 *)(lVar3 + 0x28) = 0x4040000000000003;
  *(undefined8 *)(lVar3 + 0x40) = 0;
  *(ushort *)(lVar3 + 0x80) = *(ushort *)(lVar3 + 0x80) & 0xffec | 2;
  *(uint *)(lVar3 + 0x3c) = (uint)lVar3 & 0xffff;
  *(undefined4 *)(lVar3 + 0x10) = 0xd521e44e;
  *(char **)(lVar3 + 0x18) = "Bone_SearchLight";
  lVar3 = FUN_10000e1b4();
  FUN_1003a985c(&local_60,lVar3);
  *(undefined8 *)(lVar3 + 0x20) = 0;
  *(undefined8 *)(lVar3 + 0x28) = 0x4080000000000003;
  *(undefined8 *)(lVar3 + 0x40) = 0;
  *(ushort *)(lVar3 + 0x80) = *(ushort *)(lVar3 + 0x80) & 0xffef | 3;
  *(uint *)(lVar3 + 0x3c) = (uint)lVar3 & 0xffff;
  *(undefined4 *)(lVar3 + 0x10) = 0x91bf8825;
  *(char **)(lVar3 + 0x18) = "Bone_SearchLight";
  lVar3 = FUN_10000ceb8();
  FUN_1003a985c(&local_60,lVar3);
  *(undefined4 *)(lVar3 + 0x2c) = 0x3f4ccccd;
  *(undefined8 *)(lVar3 + 0x10) = 0;
  lVar3 = FUN_10000e1b4();
  FUN_1003a985c(&local_60,lVar3);
  *(undefined8 *)(lVar3 + 0x40) = 0;
  *(ushort *)(lVar3 + 0x80) = *(ushort *)(lVar3 + 0x80) & 0xffef | 3;
  *(uint *)(lVar3 + 0x3c) = (uint)lVar3 & 0xffff;
  *(undefined8 *)(lVar3 + 0x20) = 0;
  *(undefined8 *)(lVar3 + 0x28) = 0x3f80000000000001;
  *(undefined4 *)(lVar3 + 0x10) = 0x2450e3e2;
  lVar3 = FUN_10000e524();
  FUN_1003a985c(&local_60,lVar3);
  *(char **)(lVar3 + 0x10) = "build://Sounds/Turret.assetbundle/turret_onfire_loop.mp3";
  *(undefined2 *)(lVar3 + 0x30) = 0x1ff;
  *(undefined4 *)(lVar3 + 0x34) = 1;
  *(undefined8 *)(lVar3 + 0x3c) = 0xffffffff3ecccccd;
  *(byte *)(lVar3 + 0x38) = *(byte *)(lVar3 + 0x38) & 0xf8 | 6;
  *(undefined8 *)(lVar3 + 0x48) = 0;
  lVar3 = FUN_10000ed74();
  FUN_1003a985c(&local_60,lVar3);
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
  *(undefined4 *)(lVar3 + 0xa4) = 0x40f00000;
  *(byte *)(lVar3 + 0xa8) = *(byte *)(lVar3 + 0xa8) & 0xf0 | 1;
  lVar3 = FUN_10000cae4();
  FUN_1003a985c(&local_60,lVar3);
  *(code **)(lVar3 + 0x10) = FUN_1003bfce4;
  return local_60;
}




undefined8 FUN_10035181c(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_30 = 0;
  uStack_28 = 0;
  uVar2 = FUN_10000ef8c();
  FUN_1003a985c(&local_30,uVar2);
  lVar3 = FUN_10000dff8();
  FUN_1003a985c(&local_30,lVar3);
  *(undefined2 *)(lVar3 + 0x28) = 1;
  *(undefined8 *)(lVar3 + 0x30) = 0;
  uVar1 = FUN_1004d2524("TurretIdle");
  uVar1 = FUN_100015208("TurretIdle",uVar1,0x12345678);
  *(undefined4 *)(lVar3 + 0x10) = uVar1;
  *(undefined4 *)(lVar3 + 0x20) = 0;
  return local_30;
}




undefined8 FUN_1003518a0(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_30 = 0;
  uStack_28 = 0;
  uVar2 = FUN_10000bb2c();
  FUN_1003a985c(&local_30,uVar2);
  uVar2 = FUN_10000d8b8();
  FUN_1003a985c(&local_30,uVar2);
  lVar3 = FUN_10000dff8();
  FUN_1003a985c(&local_30,lVar3);
  *(undefined2 *)(lVar3 + 0x28) = 0x100;
  *(undefined8 *)(lVar3 + 0x30) = 0;
  uVar1 = FUN_1004d2524("HitReact");
  uVar1 = FUN_100015208("HitReact",uVar1,0x12345678);
  *(undefined4 *)(lVar3 + 0x10) = uVar1;
  uVar1 = FUN_1004d2524("AttackToIdle");
  uVar1 = FUN_100015208("AttackToIdle",uVar1,0x12345678);
  *(undefined4 *)(lVar3 + 0x20) = uVar1;
  lVar3 = FUN_10000ceb8();
  FUN_1003a985c(&local_30,lVar3);
  *(undefined4 *)(lVar3 + 0x2c) = 0x3f800000;
  *(undefined8 *)(lVar3 + 0x10) = 0;
  lVar3 = FUN_10000d8b8();
  FUN_1003a985c(&local_30,lVar3);
  *(undefined1 *)(lVar3 + 0x10) = 0;
  return local_30;
}




undefined8 FUN_100351990(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_30 = 0;
  uStack_28 = 0;
  uVar2 = FUN_10000bb2c();
  FUN_1003a985c(&local_30,uVar2);
  uVar2 = FUN_10000d8b8();
  FUN_1003a985c(&local_30,uVar2);
  lVar3 = FUN_10000dff8();
  FUN_1003a985c(&local_30,lVar3);
  *(undefined2 *)(lVar3 + 0x28) = 0x100;
  *(undefined8 *)(lVar3 + 0x30) = 0;
  uVar1 = FUN_1004d2524("AltHitReact");
  uVar1 = FUN_100015208("AltHitReact",uVar1,0x12345678);
  *(undefined4 *)(lVar3 + 0x10) = uVar1;
  uVar1 = FUN_1004d2524("AttackToIdle");
  uVar1 = FUN_100015208("AttackToIdle",uVar1,0x12345678);
  *(undefined4 *)(lVar3 + 0x20) = uVar1;
  lVar3 = FUN_10000ceb8();
  FUN_1003a985c(&local_30,lVar3);
  *(undefined4 *)(lVar3 + 0x2c) = 0x3f800000;
  *(undefined8 *)(lVar3 + 0x10) = 0;
  lVar3 = FUN_10000d8b8();
  FUN_1003a985c(&local_30,lVar3);
  *(undefined1 *)(lVar3 + 0x10) = 0;
  return local_30;
}




undefined8 FUN_100351a80(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_30 = 0;
  uStack_28 = 0;
  uVar2 = FUN_10000bb2c();
  FUN_1003a985c(&local_30,uVar2);
  uVar2 = FUN_10000d8b8();
  FUN_1003a985c(&local_30,uVar2);
  lVar3 = FUN_10000dff8();
  FUN_1003a985c(&local_30,lVar3);
  *(undefined2 *)(lVar3 + 0x28) = 0x100;
  *(undefined8 *)(lVar3 + 0x30) = 0;
  uVar1 = FUN_1004d2524("CritHitReact");
  uVar1 = FUN_100015208("CritHitReact",uVar1,0x12345678);
  *(undefined4 *)(lVar3 + 0x10) = uVar1;
  uVar1 = FUN_1004d2524("AttackToIdle");
  uVar1 = FUN_100015208("AttackToIdle",uVar1,0x12345678);
  *(undefined4 *)(lVar3 + 0x20) = uVar1;
  lVar3 = FUN_10000ceb8();
  FUN_1003a985c(&local_30,lVar3);
  *(undefined4 *)(lVar3 + 0x2c) = 0x3f800000;
  *(undefined8 *)(lVar3 + 0x10) = 0;
  lVar3 = FUN_10000d8b8();
  FUN_1003a985c(&local_30,lVar3);
  *(undefined1 *)(lVar3 + 0x10) = 0;
  return local_30;
}




undefined8 FUN_100351b70(void)

{
  byte bVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 local_60;
  undefined8 uStack_58;
  
  local_60 = 0;
  uStack_58 = 0;
  lVar3 = FUN_1003e10f0();
  bVar1 = *(byte *)(lVar3 + 0xe5);
  lVar3 = FUN_10000dff8();
  FUN_1003a985c(&local_60,lVar3);
  *(undefined2 *)(lVar3 + 0x28) = 0;
  *(undefined8 *)(lVar3 + 0x30) = 0;
  uVar2 = FUN_1004d2524("Die");
  uVar2 = FUN_100015208("Die",uVar2,0x12345678);
  *(undefined4 *)(lVar3 + 0x10) = uVar2;
  *(undefined4 *)(lVar3 + 0x20) = 0;
  lVar3 = FUN_10000e524();
  FUN_1003a985c(&local_60,lVar3);
  uVar4 = FUN_1010a1520();
  lVar5 = FUN_1010a0e0c(uVar4,0,"*KindredSoundBalance*",0);
  uVar2 = FUN_1003bfc80(*(undefined4 *)(lVar5 + 0x3c));
  *(char **)(lVar3 + 0x10) = "build://Sounds/Turret.assetbundle/turret_death.mp3";
  *(undefined2 *)(lVar3 + 0x30) = 0x1ff;
  *(undefined4 *)(lVar3 + 0x34) = 1;
  *(undefined4 *)(lVar3 + 0x3c) = uVar2;
  *(undefined4 *)(lVar3 + 0x40) = 0xffffffff;
  *(byte *)(lVar3 + 0x38) = *(byte *)(lVar3 + 0x38) & 0xf8 | 4;
  *(undefined8 *)(lVar3 + 0x48) = 0;
  lVar3 = FUN_10000e1b4();
  FUN_1003a985c(&local_60,lVar3);
  *(undefined8 *)(lVar3 + 0x40) = 0;
  *(ushort *)(lVar3 + 0x80) = *(ushort *)(lVar3 + 0x80) & 0xffef | 3;
  *(uint *)(lVar3 + 0x3c) = (uint)lVar3 & 0xffff;
  *(undefined8 *)(lVar3 + 0x20) = 0;
  *(undefined8 *)(lVar3 + 0x28) = 0xbf80000000000001;
  *(undefined4 *)(lVar3 + 0x10) = 0xab04281e;
  lVar3 = FUN_10000ceb8();
  FUN_1003a985c(&local_60,lVar3);
  *(undefined4 *)(lVar3 + 0x2c) = 0x3f800000;
  *(undefined8 *)(lVar3 + 0x10) = 0;
  lVar3 = FUN_10000e1b4();
  FUN_1003a985c(&local_60,lVar3);
  *(undefined8 *)(lVar3 + 0x20) = 0;
  *(undefined8 *)(lVar3 + 0x28) = 0x4040000000000003;
  *(undefined8 *)(lVar3 + 0x40) = 0;
  *(ushort *)(lVar3 + 0x80) = *(ushort *)(lVar3 + 0x80) & 0xffec | 2;
  *(uint *)(lVar3 + 0x3c) = (uint)lVar3 & 0xffff;
  *(undefined4 *)(lVar3 + 0x10) = 0xd521e44e;
  *(char **)(lVar3 + 0x18) = "Bone_HeadWobble";
  lVar3 = FUN_10000ceb8();
  FUN_1003a985c(&local_60,lVar3);
  *(undefined4 *)(lVar3 + 0x2c) = 0x3f19999a;
  *(undefined8 *)(lVar3 + 0x10) = 0;
  lVar3 = FUN_10000e1b4();
  FUN_1003a985c(&local_60,lVar3);
  *(undefined8 *)(lVar3 + 0x20) = 0;
  *(undefined8 *)(lVar3 + 0x28) = 0x4040000000000003;
  *(undefined8 *)(lVar3 + 0x40) = 0;
  *(ushort *)(lVar3 + 0x80) = *(ushort *)(lVar3 + 0x80) & 0xffec | 2;
  *(uint *)(lVar3 + 0x3c) = (uint)lVar3 & 0xffff;
  *(undefined4 *)(lVar3 + 0x10) = 0xd521e44e;
  *(char **)(lVar3 + 0x18) = "Bone_SearchLight";
  lVar3 = FUN_10000e1b4();
  FUN_1003a985c(&local_60,lVar3);
  *(undefined8 *)(lVar3 + 0x20) = 0;
  *(undefined8 *)(lVar3 + 0x28) = 0x4080000000000003;
  *(undefined8 *)(lVar3 + 0x40) = 0;
  *(ushort *)(lVar3 + 0x80) = *(ushort *)(lVar3 + 0x80) & 0xffef | 3;
  *(uint *)(lVar3 + 0x3c) = (uint)lVar3 & 0xffff;
  *(undefined4 *)(lVar3 + 0x10) = 0x91bf8825;
  *(char **)(lVar3 + 0x18) = "Bone_SearchLight";
  lVar3 = FUN_10000ceb8();
  FUN_1003a985c(&local_60,lVar3);
  *(undefined4 *)(lVar3 + 0x2c) = 0x3f4ccccd;
  *(undefined8 *)(lVar3 + 0x10) = 0;
  lVar3 = FUN_10000e524();
  FUN_1003a985c(&local_60,lVar3);
  *(char **)(lVar3 + 0x10) = "build://Sounds/Turret.assetbundle/turret_onfire_loop.mp3";
  *(undefined2 *)(lVar3 + 0x30) = 0x1ff;
  *(undefined4 *)(lVar3 + 0x34) = 1;
  *(undefined8 *)(lVar3 + 0x3c) = 0xffffffff3ecccccd;
  *(byte *)(lVar3 + 0x38) = *(byte *)(lVar3 + 0x38) & 0xf8 | 6;
  *(undefined8 *)(lVar3 + 0x48) = 0;
  lVar3 = FUN_10000ed74();
  FUN_1003a985c(&local_60,lVar3);
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
  *(undefined4 *)(lVar3 + 0xa4) = 0x40f00000;
  *(byte *)(lVar3 + 0xa8) = *(byte *)(lVar3 + 0xa8) & 0xf0 | 1;
  lVar3 = FUN_10000cae4();
  FUN_1003a985c(&local_60,lVar3);
  *(code **)(lVar3 + 0x10) = FUN_1003bfce4;
  return local_60;
}




undefined8 FUN_100351eec(void)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 local_60;
  undefined8 uStack_58;
  
  local_60 = 0;
  uStack_58 = 0;
  lVar2 = FUN_10000e1b4();
  FUN_1003a985c(&local_60,lVar2);
  *(undefined8 *)(lVar2 + 0x40) = 0;
  *(uint *)(lVar2 + 0x3c) = (uint)lVar2 & 0xffff;
  *(undefined8 *)(lVar2 + 0x20) = 0;
  *(undefined8 *)(lVar2 + 0x28) = 0x3f80000000000001;
  *(undefined4 *)(lVar2 + 0x10) = 0x18331508;
  *(ushort *)(lVar2 + 0x80) = *(ushort *)(lVar2 + 0x80) & 0xfe2c | 0xc3;
  lVar2 = FUN_10000dff8();
  FUN_1003a985c(&local_60,lVar2);
  *(undefined2 *)(lVar2 + 0x28) = 0;
  *(undefined8 *)(lVar2 + 0x30) = 0;
  uVar1 = FUN_1004d2524("Attack_BuildUp");
  uVar1 = FUN_100015208("Attack_BuildUp",uVar1,0x12345678);
  *(undefined4 *)(lVar2 + 0x10) = uVar1;
  uVar1 = FUN_1004d2524("AttackToIdle");
  uVar1 = FUN_100015208("AttackToIdle",uVar1,0x12345678);
  *(undefined4 *)(lVar2 + 0x20) = uVar1;
  uVar3 = FUN_10000e1b4();
  FUN_1003a985c(&local_60,uVar3);
  FUN_1003a4cdc(0x3f800000,uVar3,"Effect_Turret_Shell_Casing",1,"Projectile_TurretBarrelTip",0,1,0,0
               );
  lVar2 = FUN_10000e1b4();
  FUN_1003a985c(&local_60,lVar2);
  *(undefined8 *)(lVar2 + 0x20) = 0;
  *(undefined8 *)(lVar2 + 0x28) = 0x3f19999a00000003;
  *(undefined8 *)(lVar2 + 0x40) = 0;
  *(ushort *)(lVar2 + 0x80) = *(ushort *)(lVar2 + 0x80) & 0xffef | 3;
  *(uint *)(lVar2 + 0x3c) = (uint)lVar2 & 0xffff;
  *(undefined4 *)(lVar2 + 0x10) = 0x4a1c4430;
  *(char **)(lVar2 + 0x18) = "Bone_SearchLight";
  lVar2 = FUN_10000e524();
  FUN_1003a985c(&local_60,lVar2);
  uVar3 = FUN_1010a1520();
  lVar4 = FUN_1010a0e0c(uVar3,0,"*KindredSoundBalance*",0);
  uVar1 = FUN_1003bfc80(*(undefined4 *)(lVar4 + 0x30));
  *(undefined2 *)(lVar2 + 0x30) = 0x4ff;
  *(undefined4 *)(lVar2 + 0x34) = 1;
  *(undefined4 *)(lVar2 + 0x3c) = uVar1;
  *(undefined4 *)(lVar2 + 0x40) = 0xffffffff;
  *(byte *)(lVar2 + 0x38) = *(byte *)(lVar2 + 0x38) & 0xf8 | 4;
  *(undefined8 *)(lVar2 + 0x48) = 0;
  *(char **)(lVar2 + 0x10) = "build://Sounds/Turret.assetbundle/turret_reload_01.mp3";
  *(char **)(lVar2 + 0x18) = "build://Sounds/Turret.assetbundle/turret_reload_02.mp3";
  *(char **)(lVar2 + 0x20) = "build://Sounds/Turret.assetbundle/turret_reload_03.mp3";
  *(char **)(lVar2 + 0x28) = "build://Sounds/Turret.assetbundle/turret_reload_04.mp3";
  lVar2 = FUN_10000ceb8();
  FUN_1003a985c(&local_60,lVar2);
  *(undefined4 *)(lVar2 + 0x2c) = 0x3e4ccccd;
  *(undefined8 *)(lVar2 + 0x10) = 0;
  uVar3 = FUN_10000e1b4();
  FUN_1003a985c(&local_60,uVar3);
  FUN_1003a4cdc(0x3f800000,uVar3,"Effect_TurretMuzzleFlare_5v5",1,"Projectile_TurretBarrelTip",0,1,0
                ,0);
  lVar2 = FUN_10000e1b4();
  FUN_1003a985c(&local_60,lVar2);
  *(undefined8 *)(lVar2 + 0x40) = 0;
  *(ushort *)(lVar2 + 0x80) = *(ushort *)(lVar2 + 0x80) & 0xffef | 3;
  *(uint *)(lVar2 + 0x3c) = (uint)lVar2 & 0xffff;
  *(undefined8 *)(lVar2 + 0x20) = 0;
  *(undefined8 *)(lVar2 + 0x28) = 0x3f80000000000001;
  *(undefined4 *)(lVar2 + 0x10) = 0x2450e3e2;
  lVar2 = FUN_10000e524();
  FUN_1003a985c(&local_60,lVar2);
  uVar3 = FUN_1010a1520();
  lVar4 = FUN_1010a0e0c(uVar3,0,"*KindredSoundBalance*",0);
  uVar1 = FUN_1003bfc80(*(undefined4 *)(lVar4 + 0x34));
  *(undefined2 *)(lVar2 + 0x30) = 0x4ff;
  *(undefined4 *)(lVar2 + 0x34) = 1;
  *(undefined4 *)(lVar2 + 0x3c) = uVar1;
  *(undefined4 *)(lVar2 + 0x40) = 0xffffffff;
  *(byte *)(lVar2 + 0x38) = *(byte *)(lVar2 + 0x38) & 0xf8 | 4;
  *(undefined8 *)(lVar2 + 0x48) = 0;
  *(char **)(lVar2 + 0x10) = "build://Sounds/Turret.assetbundle/turret_fires_01.mp3";
  *(char **)(lVar2 + 0x18) = "build://Sounds/Turret.assetbundle/turret_fires_02.mp3";
  *(char **)(lVar2 + 0x20) = "build://Sounds/Turret.assetbundle/turret_fires_03.mp3";
  *(char **)(lVar2 + 0x28) = "build://Sounds/Turret.assetbundle/turret_fires_04.mp3";
  uVar3 = FUN_10000bc94();
  FUN_1003a985c(&local_60,uVar3);
  lVar2 = FUN_10000f250();
  FUN_1003a985c(&local_60,lVar2);
  *(undefined4 *)(lVar2 + 0x10) = 0x71;
  FUN_1003d266c(lVar2,"Projectile_TurretBarrelTip");
  lVar2 = FUN_10000dff8();
  FUN_1003a985c(&local_60,lVar2);
  *(undefined2 *)(lVar2 + 0x28) = 0;
  *(undefined8 *)(lVar2 + 0x30) = 0;
  uVar1 = FUN_1004d2524("Attack_Recoil");
  uVar1 = FUN_100015208("Attack_Recoil",uVar1,0x12345678);
  *(undefined4 *)(lVar2 + 0x10) = uVar1;
  uVar1 = FUN_1004d2524("AttackToIdle");
  uVar1 = FUN_100015208("AttackToIdle",uVar1,0x12345678);
  *(undefined4 *)(lVar2 + 0x20) = uVar1;
  uVar3 = FUN_10000f034();
  FUN_1003a985c(&local_60,uVar3);
  return local_60;
}




undefined8 FUN_1003522e4(void)

{
  byte bVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 local_50;
  undefined8 uStack_48;
  
  local_50 = 0;
  uStack_48 = 0;
  lVar3 = FUN_1003e10f0();
  bVar1 = *(byte *)(lVar3 + 0xe5);
  lVar3 = FUN_10000dff8();
  FUN_1003a985c(&local_50,lVar3);
  *(undefined2 *)(lVar3 + 0x28) = 0;
  *(undefined8 *)(lVar3 + 0x30) = 0;
  uVar2 = FUN_1004d2524("Die");
  uVar2 = FUN_100015208("Die",uVar2,0x12345678);
  *(undefined4 *)(lVar3 + 0x10) = uVar2;
  *(undefined4 *)(lVar3 + 0x20) = 0;
  lVar3 = FUN_10000e524();
  FUN_1003a985c(&local_50,lVar3);
  uVar4 = FUN_1010a1520();
  lVar5 = FUN_1010a0e0c(uVar4,0,"*KindredSoundBalance*",0);
  uVar2 = FUN_1003bfc80(*(undefined4 *)(lVar5 + 0x3c));
  *(char **)(lVar3 + 0x10) = "build://Sounds/Turret.assetbundle/turret_death.mp3";
  *(undefined2 *)(lVar3 + 0x30) = 0x1ff;
  *(undefined4 *)(lVar3 + 0x34) = 1;
  *(undefined4 *)(lVar3 + 0x3c) = uVar2;
  *(undefined4 *)(lVar3 + 0x40) = 0xffffffff;
  *(byte *)(lVar3 + 0x38) = *(byte *)(lVar3 + 0x38) & 0xf8 | 4;
  *(undefined8 *)(lVar3 + 0x48) = 0;
  lVar3 = FUN_10000e1b4();
  FUN_1003a985c(&local_50,lVar3);
  *(undefined8 *)(lVar3 + 0x40) = 0;
  *(ushort *)(lVar3 + 0x80) = *(ushort *)(lVar3 + 0x80) & 0xffef | 3;
  *(uint *)(lVar3 + 0x3c) = (uint)lVar3 & 0xffff;
  *(undefined8 *)(lVar3 + 0x20) = 0;
  *(undefined8 *)(lVar3 + 0x28) = 0xbf80000000000001;
  *(undefined4 *)(lVar3 + 0x10) = 0x36a54e23;
  lVar3 = FUN_10000e1b4();
  FUN_1003a985c(&local_50,lVar3);
  *(undefined8 *)(lVar3 + 0x40) = 0;
  *(ushort *)(lVar3 + 0x80) = *(ushort *)(lVar3 + 0x80) & 0xffef | 3;
  *(uint *)(lVar3 + 0x3c) = (uint)lVar3 & 0xffff;
  *(undefined8 *)(lVar3 + 0x20) = 0;
  *(undefined8 *)(lVar3 + 0x28) = 0xbf80000000000001;
  *(undefined4 *)(lVar3 + 0x10) = 0xf9629648;
  lVar3 = FUN_10000ceb8();
  FUN_1003a985c(&local_50,lVar3);
  *(undefined4 *)(lVar3 + 0x2c) = 0x3f800000;
  *(undefined8 *)(lVar3 + 0x10) = 0;
  lVar3 = FUN_10000ceb8();
  FUN_1003a985c(&local_50,lVar3);
  *(undefined4 *)(lVar3 + 0x2c) = 0x3f19999a;
  *(undefined8 *)(lVar3 + 0x10) = 0;
  lVar3 = FUN_10000ceb8();
  FUN_1003a985c(&local_50,lVar3);
  *(undefined4 *)(lVar3 + 0x2c) = 0x3f4ccccd;
  *(undefined8 *)(lVar3 + 0x10) = 0;
  lVar3 = FUN_10000e1b4();
  FUN_1003a985c(&local_50,lVar3);
  *(undefined8 *)(lVar3 + 0x40) = 0;
  *(ushort *)(lVar3 + 0x80) = *(ushort *)(lVar3 + 0x80) & 0xffef | 3;
  *(uint *)(lVar3 + 0x3c) = (uint)lVar3 & 0xffff;
  *(undefined8 *)(lVar3 + 0x20) = 0;
  *(undefined8 *)(lVar3 + 0x28) = 0x3f80000000000001;
  *(undefined4 *)(lVar3 + 0x10) = 0x9a716b4f;
  lVar3 = FUN_10000e524();
  FUN_1003a985c(&local_50,lVar3);
  *(char **)(lVar3 + 0x10) = "build://Sounds/Turret.assetbundle/turret_onfire_loop.mp3";
  *(undefined2 *)(lVar3 + 0x30) = 0x1ff;
  *(undefined4 *)(lVar3 + 0x34) = 1;
  *(undefined8 *)(lVar3 + 0x3c) = 0xffffffff3ecccccd;
  *(byte *)(lVar3 + 0x38) = *(byte *)(lVar3 + 0x38) & 0xf8 | 6;
  *(undefined8 *)(lVar3 + 0x48) = 0;
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
  *(undefined4 *)(lVar3 + 0xa4) = 0x40f00000;
  *(byte *)(lVar3 + 0xa8) = *(byte *)(lVar3 + 0xa8) & 0xf0 | 1;
  lVar3 = FUN_10000cae4();
  FUN_1003a985c(&local_50,lVar3);
  *(code **)(lVar3 + 0x10) = FUN_1003bfce4;
  uVar4 = FUN_10000c784();
  FUN_1003a985c(&local_50,uVar4);
  return local_50;
}




undefined8 FUN_100352608(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  undefined8 local_50;
  undefined8 uStack_48;
  
  local_50 = 0;
  uStack_48 = 0;
  uVar2 = FUN_10000bb2c();
  FUN_1003a985c(&local_50,uVar2);
  lVar3 = FUN_10000e524();
  FUN_1003a985c(&local_50,lVar3);
  *(char **)(lVar3 + 0x10) = "build://Sounds/ActorFx.assetbundle/sfx__nexus_die.mp3";
  *(undefined2 *)(lVar3 + 0x30) = 0x1ff;
  *(undefined4 *)(lVar3 + 0x34) = 1;
  *(undefined8 *)(lVar3 + 0x3c) = 0xffffffff3f800000;
  *(byte *)(lVar3 + 0x38) = *(byte *)(lVar3 + 0x38) & 0xf8 | 4;
  *(undefined8 *)(lVar3 + 0x48) = 0;
  lVar3 = FUN_10000d180();
  FUN_1003a985c(&local_50,lVar3);
  *(char **)(lVar3 + 0x10) = "VainCrystal_IdleGlow";
  lVar3 = FUN_10000e1b4();
  FUN_1003a985c(&local_50,lVar3);
  *(undefined8 *)(lVar3 + 0x40) = 0;
  *(ushort *)(lVar3 + 0x80) = *(ushort *)(lVar3 + 0x80) & 0xffec | 2;
  *(uint *)(lVar3 + 0x3c) = (uint)lVar3 & 0xffff;
  *(undefined8 *)(lVar3 + 0x20) = 0;
  *(undefined8 *)(lVar3 + 0x28) = 1;
  *(undefined4 *)(lVar3 + 0x10) = 0x617a3150;
  plVar4 = (long *)thunk_FUN_10000f1a0();
  FUN_1003a985c(&local_50,plVar4);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x68))(plVar4);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x10))(0x3e19999a);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x18))(0x3f000000);
  (**(code **)(*plVar4 + 0x20))(0x41c00000);
  lVar3 = FUN_10000dff8();
  FUN_1003a985c(&local_50,lVar3);
  *(undefined2 *)(lVar3 + 0x28) = 0x100;
  *(undefined8 *)(lVar3 + 0x30) = 0;
  uVar1 = FUN_1004d2524("Die");
  uVar1 = FUN_100015208("Die",uVar1,0x12345678);
  *(undefined4 *)(lVar3 + 0x10) = uVar1;
  *(undefined4 *)(lVar3 + 0x20) = 0;
  lVar3 = FUN_10000ceb8();
  FUN_1003a985c(&local_50,lVar3);
  *(undefined4 *)(lVar3 + 0x2c) = 0x40200000;
  *(undefined8 *)(lVar3 + 0x10) = 0;
  plVar4 = (long *)thunk_FUN_10000f1a0();
  FUN_1003a985c(&local_50,plVar4);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x68))(plVar4);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x10))(0x3e19999a);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x18))(0x3fb33333);
  (**(code **)(*plVar4 + 0x20))(0x41c00000);
  lVar3 = FUN_10000e1b4();
  FUN_1003a985c(&local_50,lVar3);
  *(undefined8 *)(lVar3 + 0x40) = 0;
  *(ushort *)(lVar3 + 0x80) = *(ushort *)(lVar3 + 0x80) & 0xffec | 2;
  *(uint *)(lVar3 + 0x3c) = (uint)lVar3 & 0xffff;
  *(undefined8 *)(lVar3 + 0x20) = 0;
  *(undefined8 *)(lVar3 + 0x28) = 1;
  *(undefined4 *)(lVar3 + 0x10) = 0xef659f1f;
  plVar4 = (long *)thunk_FUN_10000f1a0();
  FUN_1003a985c(&local_50,plVar4);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x68))(plVar4);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x10))(0x3dcccccd);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x18))(0x4039999a);
  (**(code **)(*plVar4 + 0x20))(0x41700000);
  lVar3 = FUN_10000e1b4();
  FUN_1003a985c(&local_50,lVar3);
  *(undefined8 *)(lVar3 + 0x40) = 0;
  *(ushort *)(lVar3 + 0x80) = *(ushort *)(lVar3 + 0x80) & 0xffec | 2;
  *(uint *)(lVar3 + 0x3c) = (uint)lVar3 & 0xffff;
  *(undefined8 *)(lVar3 + 0x20) = 0;
  *(undefined8 *)(lVar3 + 0x28) = 1;
  *(undefined4 *)(lVar3 + 0x10) = 0x8781b8bd;
  lVar3 = FUN_10000ceb8();
  FUN_1003a985c(&local_50,lVar3);
  *(undefined4 *)(lVar3 + 0x2c) = 0x40200000;
  *(undefined8 *)(lVar3 + 0x10) = 0;
  lVar3 = FUN_10000e1b4();
  FUN_1003a985c(&local_50,lVar3);
  *(undefined8 *)(lVar3 + 0x40) = 0;
  *(ushort *)(lVar3 + 0x80) = *(ushort *)(lVar3 + 0x80) & 0xffec | 2;
  *(uint *)(lVar3 + 0x3c) = (uint)lVar3 & 0xffff;
  *(undefined8 *)(lVar3 + 0x20) = 0;
  *(undefined8 *)(lVar3 + 0x28) = 1;
  *(undefined4 *)(lVar3 + 0x10) = 0x6a323bf9;
  plVar4 = (long *)thunk_FUN_10000f1a0();
  FUN_1003a985c(&local_50,plVar4);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x68))(plVar4);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x10))(0x3ecccccd);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x18))(0x40000000);
  (**(code **)(*plVar4 + 0x20))(0x41c00000);
  lVar3 = FUN_10000e1b4();
  FUN_1003a985c(&local_50,lVar3);
  *(undefined8 *)(lVar3 + 0x40) = 0;
  *(ushort *)(lVar3 + 0x80) = *(ushort *)(lVar3 + 0x80) & 0xffec | 2;
  *(uint *)(lVar3 + 0x3c) = (uint)lVar3 & 0xffff;
  *(undefined8 *)(lVar3 + 0x20) = 0;
  *(undefined8 *)(lVar3 + 0x28) = 0xbf80000000000001;
  *(undefined4 *)(lVar3 + 0x10) = 0x27e96646;
  lVar3 = FUN_10000ceb8();
  FUN_1003a985c(&local_50,lVar3);
  *(undefined4 *)(lVar3 + 0x2c) = 0x40b00000;
  *(undefined8 *)(lVar3 + 0x10) = 0;
  uVar2 = FUN_10000d9a0();
  FUN_1003a985c(&local_50,uVar2);
  return local_50;
}




undefined8 FUN_100352a2c(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  undefined8 local_40;
  undefined8 uStack_38;
  
  local_40 = 0;
  uStack_38 = 0;
  uVar2 = FUN_10000bb2c();
  FUN_1003a985c(&local_40,uVar2);
  lVar3 = FUN_10000e524();
  FUN_1003a985c(&local_40,lVar3);
  *(char **)(lVar3 + 0x10) = "build://Sounds/ActorFx.assetbundle/nexus_right_explode.mp3";
  *(undefined2 *)(lVar3 + 0x30) = 0x1ff;
  *(undefined4 *)(lVar3 + 0x34) = 1;
  *(undefined8 *)(lVar3 + 0x3c) = 0xffffffff3f800000;
  *(byte *)(lVar3 + 0x38) = *(byte *)(lVar3 + 0x38) & 0xf8 | 4;
  *(undefined8 *)(lVar3 + 0x48) = 0;
  lVar3 = FUN_10000d180();
  FUN_1003a985c(&local_40,lVar3);
  *(char **)(lVar3 + 0x10) = "Away_VainCrystal_IdleGlow";
  lVar3 = FUN_10000dff8();
  FUN_1003a985c(&local_40,lVar3);
  *(undefined2 *)(lVar3 + 0x28) = 0x100;
  *(undefined8 *)(lVar3 + 0x30) = 0;
  uVar1 = FUN_1004d2524("Die");
  uVar1 = FUN_100015208("Die",uVar1,0x12345678);
  *(undefined4 *)(lVar3 + 0x10) = uVar1;
  *(undefined4 *)(lVar3 + 0x20) = 0;
  lVar3 = FUN_10000e1b4();
  FUN_1003a985c(&local_40,lVar3);
  *(undefined8 *)(lVar3 + 0x40) = 0;
  *(ushort *)(lVar3 + 0x80) = *(ushort *)(lVar3 + 0x80) & 0xffec | 2;
  *(uint *)(lVar3 + 0x3c) = (uint)lVar3 & 0xffff;
  *(undefined8 *)(lVar3 + 0x20) = 0;
  *(undefined8 *)(lVar3 + 0x28) = 0xbf80000000000001;
  *(undefined4 *)(lVar3 + 0x10) = 0x1e343911;
  plVar4 = (long *)thunk_FUN_10000f1a0();
  FUN_1003a985c(&local_40,plVar4);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x68))(plVar4);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x10))(0x3e19999a);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x18))(0x3f000000);
  (**(code **)(*plVar4 + 0x20))(0x41c00000);
  lVar3 = FUN_10000ceb8();
  FUN_1003a985c(&local_40,lVar3);
  *(undefined4 *)(lVar3 + 0x2c) = 0x40200000;
  *(undefined8 *)(lVar3 + 0x10) = 0;
  lVar3 = FUN_10000e1b4();
  FUN_1003a985c(&local_40,lVar3);
  *(undefined8 *)(lVar3 + 0x40) = 0;
  *(ushort *)(lVar3 + 0x80) = *(ushort *)(lVar3 + 0x80) & 0xffec | 2;
  *(uint *)(lVar3 + 0x3c) = (uint)lVar3 & 0xffff;
  *(undefined8 *)(lVar3 + 0x20) = 0;
  *(undefined8 *)(lVar3 + 0x28) = 1;
  *(undefined4 *)(lVar3 + 0x10) = 0x1a9788f8;
  lVar3 = FUN_10000ceb8();
  FUN_1003a985c(&local_40,lVar3);
  *(undefined4 *)(lVar3 + 0x2c) = 0x40200000;
  *(undefined8 *)(lVar3 + 0x10) = 0;
  lVar3 = FUN_10000e1b4();
  FUN_1003a985c(&local_40,lVar3);
  *(undefined8 *)(lVar3 + 0x40) = 0;
  *(ushort *)(lVar3 + 0x80) = *(ushort *)(lVar3 + 0x80) & 0xffec | 2;
  *(uint *)(lVar3 + 0x3c) = (uint)lVar3 & 0xffff;
  *(undefined8 *)(lVar3 + 0x20) = 0;
  *(undefined8 *)(lVar3 + 0x28) = 1;
  *(undefined4 *)(lVar3 + 0x10) = 0x7d51782e;
  plVar4 = (long *)thunk_FUN_10000f1a0();
  FUN_1003a985c(&local_40,plVar4);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x68))(plVar4);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x10))(0x3de147ae);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x18))(0x4039999a);
  (**(code **)(*plVar4 + 0x20))(0x41700000);
  lVar3 = FUN_10000ceb8();
  FUN_1003a985c(&local_40,lVar3);
  *(undefined4 *)(lVar3 + 0x2c) = 0x40b00000;
  *(undefined8 *)(lVar3 + 0x10) = 0;
  uVar2 = FUN_10000d9a0();
  FUN_1003a985c(&local_40,uVar2);
  return local_40;
}




undefined8 FUN_100352d14(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_30 = 0;
  uStack_28 = 0;
  uVar2 = FUN_10000bb2c();
  FUN_1003a985c(&local_30,uVar2);
  lVar3 = FUN_10000dff8();
  FUN_1003a985c(&local_30,lVar3);
  *(undefined2 *)(lVar3 + 0x28) = 0x100;
  *(undefined8 *)(lVar3 + 0x30) = 0;
  uVar1 = FUN_1004d2524("HitReact");
  uVar1 = FUN_100015208("HitReact",uVar1,0x12345678);
  *(undefined4 *)(lVar3 + 0x10) = uVar1;
  uVar1 = FUN_1004d2524("AttackToIdle");
  uVar1 = FUN_100015208("AttackToIdle",uVar1,0x12345678);
  *(undefined4 *)(lVar3 + 0x20) = uVar1;
  lVar3 = FUN_10000e1b4();
  FUN_1003a985c(&local_30,lVar3);
  *(undefined8 *)(lVar3 + 0x40) = 0;
  *(ushort *)(lVar3 + 0x80) = *(ushort *)(lVar3 + 0x80) & 0xffef | 3;
  *(uint *)(lVar3 + 0x3c) = (uint)lVar3 & 0xffff;
  *(undefined8 *)(lVar3 + 0x20) = 0;
  *(undefined8 *)(lVar3 + 0x28) = 1;
  *(undefined4 *)(lVar3 + 0x10) = 0xeca2101a;
  return local_30;
}




undefined8 FUN_100352e00(void)

{
  undefined *puVar1;
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
  if (*(char *)(DAT_101d23a68 + 0x3a) == '\0') {
    lVar2 = FUN_10000e524();
    FUN_1003a985c(&local_50,lVar2);
    *(char **)(lVar2 + 0x10) = "build://Sounds/5v5/SFX/sfx_halycon_missle_target_line.mp3";
    *(undefined2 *)(lVar2 + 0x30) = 0x1ff;
    *(undefined4 *)(lVar2 + 0x34) = 1;
    *(undefined8 *)(lVar2 + 0x3c) = 0xffffffff3f19999a;
    *(byte *)(lVar2 + 0x38) = *(byte *)(lVar2 + 0x38) & 0xf8 | 4;
    *(undefined8 *)(lVar2 + 0x48) = 0;
    uVar3 = FUN_10000bb2c();
    FUN_1003a985c(&local_50,uVar3);
    puVar1 = PTR_s_Buff_Nexus_5v5_Target_Laser_10185b148;
    lVar2 = FUN_10000bd3c();
    FUN_1003a985c(&local_50,lVar2);
    *(undefined **)(lVar2 + 0x10) = puVar1;
    *(undefined4 *)(lVar2 + 0x18) = 0x40600000;
    *(undefined2 *)(lVar2 + 0x68) = 1;
    *(byte *)(lVar2 + 0x6a) = *(byte *)(lVar2 + 0x6a) & 0xfe;
    *(code **)(lVar2 + 0x58) = FUN_1003bfd88;
    uVar3 = FUN_10000c784();
    FUN_1003a985c(&local_50,uVar3);
    uVar3 = FUN_10000bc94();
    FUN_1003a985c(&local_50,uVar3);
    puVar1 = PTR_s_Buff_Nexus_5v5_Target_Warning_10185b150;
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
    *(undefined4 *)(lVar2 + 0x2c) = 0x3f800000;
    *(undefined8 *)(lVar2 + 0x10) = 0;
    lVar2 = FUN_10000c838();
    FUN_1003a985c(&local_50,lVar2);
    puVar1 = PTR_s_Buff_Nexus_VainNodeSupport_10185b158;
    *(ushort *)(lVar2 + 0x58) = *(ushort *)(lVar2 + 0x58) & 0xf03f | 0x30;
    *(undefined4 *)(lVar2 + 0x51) = 0;
    *(undefined4 *)(lVar2 + 0x54) = 0;
    *(undefined1 *)(lVar2 + 0x50) = 3;
    *(undefined **)(lVar2 + 0x40) = puVar1;
    *(undefined8 *)(lVar2 + 0x48) = 0x300000003;
    uVar3 = FUN_10000bc94();
    FUN_1003a985c(lVar2 + 0x18,uVar3);
    lVar4 = FUN_10000f250();
    FUN_1003a985c(lVar2 + 0x18,lVar4);
    *(undefined4 *)(lVar4 + 0x10) = 0x72;
    FUN_1003d266c(lVar4,"CenterBody");
    lVar2 = FUN_10000c838();
    FUN_1003a985c(&local_50,lVar2);
    puVar1 = PTR_s_Buff_Nexus_VainNodeSupport_10185b158;
    *(ushort *)(lVar2 + 0x58) = *(ushort *)(lVar2 + 0x58) & 0xf03f | 0x30;
    *(undefined4 *)(lVar2 + 0x51) = 0;
    *(undefined4 *)(lVar2 + 0x54) = 0;
    *(undefined1 *)(lVar2 + 0x50) = 3;
    *(undefined **)(lVar2 + 0x40) = puVar1;
    *(undefined8 *)(lVar2 + 0x48) = 0x300000002;
    uVar3 = FUN_10000bc94();
    FUN_1003a985c(lVar2 + 0x18,uVar3);
    lVar4 = FUN_10000f250();
    FUN_1003a985c(lVar2 + 0x18,lVar4);
    *(undefined4 *)(lVar4 + 0x10) = 0x72;
    FUN_1003d266c(lVar4,"CenterBody");
    uVar3 = FUN_10000bc94();
    FUN_1003a985c(&local_50,uVar3);
    lVar2 = FUN_10000f250();
    FUN_1003a985c(&local_50,lVar2);
    *(undefined4 *)(lVar2 + 0x10) = 0x72;
    FUN_1003d266c(lVar2,"CenterBody");
    *(code **)(lVar2 + 0x38) = FUN_1003bfdf0;
    lVar2 = FUN_10000ceb8();
    FUN_1003a985c(&local_50,lVar2);
    *(undefined4 *)(lVar2 + 0x2c) = 0x3f800000;
    *(undefined8 *)(lVar2 + 0x10) = 0;
  }
  lVar2 = FUN_10000d8b8();
  FUN_1003a985c(&local_50,lVar2);
  *(undefined1 *)(lVar2 + 0x10) = 0;
  return local_50;
}




undefined8 FUN_100353108(void)

{
  long lVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  
  local_40 = 0;
  uStack_38 = 0;
  lVar1 = FUN_10000d8b8();
  FUN_1003a985c(&local_40,lVar1);
  *(undefined1 *)(lVar1 + 0x10) = 1;
  if (*(char *)(DAT_101d23a68 + 0x3a) == '\0') {
    lVar1 = FUN_10000ceb8();
    FUN_1003a985c(&local_40,lVar1);
    *(undefined4 *)(lVar1 + 0x2c) = 0x3e4ccccd;
    *(undefined8 *)(lVar1 + 0x10) = 0;
    lVar1 = FUN_10000e524();
    FUN_1003a985c(&local_40,lVar1);
    *(char **)(lVar1 + 0x10) = "build://Sounds/5v5/SFX/sfx_stunline_buildup.mp3";
    *(undefined2 *)(lVar1 + 0x30) = 0x1ff;
    *(undefined4 *)(lVar1 + 0x34) = 1;
    *(undefined8 *)(lVar1 + 0x3c) = 0xffffffff3f4ccccd;
    *(byte *)(lVar1 + 0x38) = *(byte *)(lVar1 + 0x38) & 0xf8 | 4;
    *(undefined8 *)(lVar1 + 0x48) = 0;
    FUN_1003bfed8(0x3dcccccd,&local_40);
    FUN_1003bffd0(0x3dcccccd,&local_40);
    FUN_1003c00c8(0x3dcccccd,&local_40);
    FUN_1003c01c0(0x3dcccccd,&local_40);
    FUN_1003c02b8(0x3dcccccd,&local_40);
    FUN_1003c03b0(0x3dcccccd,&local_40);
    FUN_1003c04a8(0x3f99999a,&local_40);
  }
  lVar1 = FUN_10000d8b8();
  FUN_1003a985c(&local_40,lVar1);
  *(undefined1 *)(lVar1 + 0x10) = 0;
  return local_40;
}




undefined8 FUN_10035324c(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  undefined8 local_40;
  undefined8 uStack_38;
  
  local_40 = 0;
  uStack_38 = 0;
  uVar2 = FUN_10000bb2c();
  FUN_1003a985c(&local_40,uVar2);
  lVar3 = FUN_10000c540();
  FUN_1003a985c(&local_40,lVar3);
  *(undefined **)(lVar3 + 0x10) = PTR_s_Buff_Nexus_5v5_Target_Laser_10185b148;
  lVar3 = FUN_10000e524();
  FUN_1003a985c(&local_40,lVar3);
  *(char **)(lVar3 + 0x10) = "build://Sounds/5v5/SFX/sfx_death_explosion.mp3";
  *(undefined2 *)(lVar3 + 0x30) = 0x1ff;
  *(undefined4 *)(lVar3 + 0x34) = 1;
  *(undefined8 *)(lVar3 + 0x3c) = 0xffffffff3f800000;
  *(byte *)(lVar3 + 0x38) = *(byte *)(lVar3 + 0x38) & 0xf8 | 4;
  *(undefined8 *)(lVar3 + 0x48) = 0;
  lVar3 = FUN_10000dff8();
  FUN_1003a985c(&local_40,lVar3);
  *(undefined2 *)(lVar3 + 0x28) = 0x100;
  *(undefined8 *)(lVar3 + 0x30) = 0;
  uVar1 = FUN_1004d2524("Die");
  uVar1 = FUN_100015208("Die",uVar1,0x12345678);
  *(undefined4 *)(lVar3 + 0x10) = uVar1;
  *(undefined4 *)(lVar3 + 0x20) = 0;
  lVar3 = FUN_10000e1b4();
  FUN_1003a985c(&local_40,lVar3);
  *(undefined8 *)(lVar3 + 0x40) = 0;
  *(ushort *)(lVar3 + 0x80) = *(ushort *)(lVar3 + 0x80) & 0xffec | 2;
  *(uint *)(lVar3 + 0x3c) = (uint)lVar3 & 0xffff;
  *(undefined8 *)(lVar3 + 0x20) = 0;
  *(undefined8 *)(lVar3 + 0x28) = 0xbf80000000000001;
  *(undefined4 *)(lVar3 + 0x10) = 0xcf737189;
  plVar4 = (long *)thunk_FUN_10000f1a0();
  FUN_1003a985c(&local_40,plVar4);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x68))(plVar4);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x10))(0x3e19999a);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x18))(0x3f000000);
  (**(code **)(*plVar4 + 0x20))(0x41c00000);
  lVar3 = FUN_10000ceb8();
  FUN_1003a985c(&local_40,lVar3);
  *(undefined4 *)(lVar3 + 0x2c) = 0x40533333;
  *(undefined8 *)(lVar3 + 0x10) = 0;
  lVar3 = FUN_10000e1b4();
  FUN_1003a985c(&local_40,lVar3);
  *(undefined8 *)(lVar3 + 0x40) = 0;
  *(ushort *)(lVar3 + 0x80) = *(ushort *)(lVar3 + 0x80) & 0xffec | 2;
  *(uint *)(lVar3 + 0x3c) = (uint)lVar3 & 0xffff;
  *(undefined8 *)(lVar3 + 0x20) = 0;
  *(undefined8 *)(lVar3 + 0x28) = 0xbf80000000000001;
  *(undefined4 *)(lVar3 + 0x10) = 0x214e9726;
  plVar4 = (long *)thunk_FUN_10000f1a0();
  FUN_1003a985c(&local_40,plVar4);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x68))(plVar4);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x10))(0x3dcccccd);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x18))(0x4039999a);
  (**(code **)(*plVar4 + 0x20))(0x41700000);
  lVar3 = FUN_10000ceb8();
  FUN_1003a985c(&local_40,lVar3);
  *(undefined4 *)(lVar3 + 0x2c) = 0x40b00000;
  *(undefined8 *)(lVar3 + 0x10) = 0;
  uVar2 = FUN_10000d9a0();
  FUN_1003a985c(&local_40,uVar2);
  return local_40;
}




undefined8 FUN_1003534dc(void)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_30 = 0;
  uStack_28 = 0;
  lVar2 = FUN_10000e1b4();
  FUN_1003a985c(&local_30,lVar2);
  *(undefined8 *)(lVar2 + 0x40) = 0;
  *(ushort *)(lVar2 + 0x80) = *(ushort *)(lVar2 + 0x80) & 0xffec | 2;
  *(uint *)(lVar2 + 0x3c) = (uint)lVar2 & 0xffff;
  *(undefined8 *)(lVar2 + 0x20) = 0;
  *(undefined8 *)(lVar2 + 0x28) = 0xbf80000000000001;
  *(undefined4 *)(lVar2 + 0x10) = 0x68404919;
  lVar2 = FUN_10000e524();
  FUN_1003a985c(&local_30,lVar2);
  *(char **)(lVar2 + 0x10) = "build://Sounds/5v5/SFX/sfx_armory_destroyed.mp3";
  *(undefined2 *)(lVar2 + 0x30) = 0x1ff;
  *(undefined4 *)(lVar2 + 0x34) = 1;
  *(undefined8 *)(lVar2 + 0x3c) = 0xffffffff3f800000;
  *(byte *)(lVar2 + 0x38) = *(byte *)(lVar2 + 0x38) & 0xf8 | 4;
  *(undefined8 *)(lVar2 + 0x48) = 0;
  lVar2 = FUN_10000dff8();
  FUN_1003a985c(&local_30,lVar2);
  *(undefined2 *)(lVar2 + 0x28) = 0x100;
  *(undefined8 *)(lVar2 + 0x30) = 0;
  uVar1 = FUN_1004d2524("Die");
  uVar1 = FUN_100015208("Die",uVar1,0x12345678);
  *(undefined4 *)(lVar2 + 0x10) = uVar1;
  *(undefined4 *)(lVar2 + 0x20) = 0;
  lVar2 = FUN_10000ceb8();
  FUN_1003a985c(&local_30,lVar2);
  *(undefined4 *)(lVar2 + 0x2c) = 0x40b00000;
  *(undefined8 *)(lVar2 + 0x10) = 0;
  uVar3 = FUN_10000d9a0();
  FUN_1003a985c(&local_30,uVar3);
  return local_30;
}




undefined8 FUN_10035361c(void)

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
  uVar1 = FUN_1004d2524("HitReact");
  uVar1 = FUN_100015208("HitReact",uVar1,0x12345678);
  *(undefined4 *)(lVar2 + 0x10) = uVar1;
  uVar1 = FUN_1004d2524("AttackToIdle");
  uVar1 = FUN_100015208("AttackToIdle",uVar1,0x12345678);
  *(undefined4 *)(lVar2 + 0x20) = uVar1;
  return local_30;
}




undefined8 FUN_1003536b4(void)

{
  long *plVar1;
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_30 = 0;
  uStack_28 = 0;
  plVar1 = (long *)thunk_FUN_10000e358();
  FUN_1003a985c(&local_30,plVar1);
  plVar1 = (long *)(**(code **)(*plVar1 + 0x58))(plVar1);
  plVar1 = (long *)(**(code **)(*plVar1 + 0x48))(plVar1,"Effect_VainCrystal_Node_Spawn");
  (**(code **)(*plVar1 + 0x78))(plVar1,1);
  return local_30;
}




undefined8 FUN_100353724(void)

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
  uVar1 = FUN_1004d2524("Attack");
  uVar1 = FUN_100015208("Attack",uVar1,0x12345678);
  *(undefined4 *)(lVar3 + 0x10) = uVar1;
  uVar1 = FUN_1004d2524("AttackToIdle");
  uVar1 = FUN_100015208("AttackToIdle",uVar1,0x12345678);
  *(undefined4 *)(lVar3 + 0x20) = uVar1;
  lVar3 = FUN_10000ceb8();
  FUN_1003a985c(&local_40,lVar3);
  *(undefined4 *)(lVar3 + 0x2c) = 0x3f19999a;
  *(code **)(lVar3 + 0x10) = FUN_1003a24a0;
  lVar3 = FUN_10000f250();
  FUN_1003a985c(&local_40,lVar3);
  *(undefined4 *)(lVar3 + 0x10) = 0x4f;
  FUN_1003d266c(lVar3,"GunMuzzle");
  *(code **)(lVar3 + 0x38) = FUN_1003b7180;
  uVar2 = FUN_10000f034();
  FUN_1003a985c(&local_40,uVar2);
  return local_40;
}




undefined8 FUN_100353848(void)

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
  uVar1 = FUN_1004d2524("Attack2");
  uVar1 = FUN_100015208("Attack2",uVar1,0x12345678);
  *(undefined4 *)(lVar3 + 0x10) = uVar1;
  uVar1 = FUN_1004d2524("AttackToIdle");
  uVar1 = FUN_100015208("AttackToIdle",uVar1,0x12345678);
  *(undefined4 *)(lVar3 + 0x20) = uVar1;
  lVar3 = FUN_10000ceb8();
  FUN_1003a985c(&local_40,lVar3);
  *(undefined4 *)(lVar3 + 0x2c) = 0x3f19999a;
  *(code **)(lVar3 + 0x10) = FUN_1003a24a0;
  lVar3 = FUN_10000f250();
  FUN_1003a985c(&local_40,lVar3);
  *(undefined4 *)(lVar3 + 0x10) = 0x4f;
  FUN_1003d266c(lVar3,"GunMuzzle");
  *(code **)(lVar3 + 0x38) = FUN_1003b7180;
  uVar2 = FUN_10000f034();
  FUN_1003a985c(&local_40,uVar2);
  return local_40;
}




undefined8 FUN_10035396c(void)

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
  uVar1 = FUN_1004d2524("Attack3");
  uVar1 = FUN_100015208("Attack3",uVar1,0x12345678);
  *(undefined4 *)(lVar3 + 0x10) = uVar1;
  uVar1 = FUN_1004d2524("AttackToIdle");
  uVar1 = FUN_100015208("AttackToIdle",uVar1,0x12345678);
  *(undefined4 *)(lVar3 + 0x20) = uVar1;
  lVar3 = FUN_10000ceb8();
  FUN_1003a985c(&local_40,lVar3);
  *(undefined4 *)(lVar3 + 0x2c) = 0x3f19999a;
  *(code **)(lVar3 + 0x10) = FUN_1003a24a0;
  lVar3 = FUN_10000f250();
  FUN_1003a985c(&local_40,lVar3);
  *(undefined4 *)(lVar3 + 0x10) = 0x4f;
  FUN_1003d266c(lVar3,"GunMuzzle");
  *(code **)(lVar3 + 0x38) = FUN_1003b7180;
  uVar2 = FUN_10000f034();
  FUN_1003a985c(&local_40,uVar2);
  return local_40;
}




undefined8 FUN_100353a90(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined4 uVar4;
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_30 = 0;
  uStack_28 = 0;
  uVar1 = FUN_10000bb2c();
  FUN_1003a985c(&local_30,uVar1);
  lVar2 = FUN_10000e524();
  FUN_1003a985c(&local_30,lVar2);
  uVar1 = FUN_1010a1520();
  lVar3 = FUN_1010a0e0c(uVar1,0,"*KindredSoundBalance*",0);
  uVar4 = FUN_1003ad578(*(undefined4 *)(lVar3 + 0x360));
  *(char **)(lVar2 + 0x10) = "build://Sounds/Gwen/SFX/Default/gwen_ability_b.mp3";
  *(undefined2 *)(lVar2 + 0x30) = 0x1ff;
  *(undefined4 *)(lVar2 + 0x34) = 1;
  *(undefined4 *)(lVar2 + 0x3c) = uVar4;
  *(undefined4 *)(lVar2 + 0x40) = 0xffffffff;
  *(byte *)(lVar2 + 0x38) = *(byte *)(lVar2 + 0x38) & 0xf8 | 4;
  *(undefined8 *)(lVar2 + 0x48) = 0;
  lVar2 = FUN_10000bd3c();
  FUN_1003a985c(&local_30,lVar2);
  *(undefined **)(lVar2 + 0x10) = PTR_s_Buff_Minion_TutorialSpeedBoost_10185ada0;
  *(undefined4 *)(lVar2 + 0x18) = 0x40000000;
  *(undefined2 *)(lVar2 + 0x68) = 1;
  *(byte *)(lVar2 + 0x6a) = *(byte *)(lVar2 + 0x6a) & 0xfe;
  uVar1 = FUN_10000f034();
  FUN_1003a985c(&local_30,uVar1);
  return local_30;
}




undefined8 FUN_100353b80(void)

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
  uVar1 = FUN_1004d2524("Attack");
  uVar1 = FUN_100015208("Attack",uVar1,0x12345678);
  *(undefined4 *)(lVar3 + 0x10) = uVar1;
  uVar1 = FUN_1004d2524("AttackToIdle");
  uVar1 = FUN_100015208("AttackToIdle",uVar1,0x12345678);
  *(undefined4 *)(lVar3 + 0x20) = uVar1;
  lVar3 = FUN_10000ceb8();
  FUN_1003a985c(&local_40,lVar3);
  *(undefined4 *)(lVar3 + 0x2c) = 0x3f0ccccd;
  *(code **)(lVar3 + 0x10) = FUN_1003a24a0;
  uVar2 = FUN_10000bc94();
  FUN_1003a985c(&local_40,uVar2);
  lVar3 = FUN_10000cae4();
  FUN_1003a985c(&local_40,lVar3);
  *(code **)(lVar3 + 0x10) = FUN_1003b72fc;
  uVar2 = FUN_10000f034();
  FUN_1003a985c(&local_40,uVar2);
  return local_40;
}




undefined8 FUN_100353c9c(void)

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
  uVar1 = FUN_1004d2524("Attack2");
  uVar1 = FUN_100015208("Attack2",uVar1,0x12345678);
  *(undefined4 *)(lVar3 + 0x10) = uVar1;
  uVar1 = FUN_1004d2524("AttackToIdle");
  uVar1 = FUN_100015208("AttackToIdle",uVar1,0x12345678);
  *(undefined4 *)(lVar3 + 0x20) = uVar1;
  lVar3 = FUN_10000ceb8();
  FUN_1003a985c(&local_40,lVar3);
  *(undefined4 *)(lVar3 + 0x2c) = 0x3f0ccccd;
  *(code **)(lVar3 + 0x10) = FUN_1003a24a0;
  uVar2 = FUN_10000bc94();
  FUN_1003a985c(&local_40,uVar2);
  lVar3 = FUN_10000cae4();
  FUN_1003a985c(&local_40,lVar3);
  *(code **)(lVar3 + 0x10) = FUN_1003b72fc;
  uVar2 = FUN_10000f034();
  FUN_1003a985c(&local_40,uVar2);
  return local_40;
}




undefined8 FUN_100353db8(void)

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
  uVar1 = FUN_1004d2524("Attack3");
  uVar1 = FUN_100015208("Attack3",uVar1,0x12345678);
  *(undefined4 *)(lVar3 + 0x10) = uVar1;
  uVar1 = FUN_1004d2524("AttackToIdle");
  uVar1 = FUN_100015208("AttackToIdle",uVar1,0x12345678);
  *(undefined4 *)(lVar3 + 0x20) = uVar1;
  lVar3 = FUN_10000ceb8();
  FUN_1003a985c(&local_40,lVar3);
  *(undefined4 *)(lVar3 + 0x2c) = 0x3f0ccccd;
  *(code **)(lVar3 + 0x10) = FUN_1003a24a0;
  uVar2 = FUN_10000bc94();
  FUN_1003a985c(&local_40,uVar2);
  lVar3 = FUN_10000cae4();
  FUN_1003a985c(&local_40,lVar3);
  *(code **)(lVar3 + 0x10) = FUN_1003b72fc;
  uVar2 = FUN_10000f034();
  FUN_1003a985c(&local_40,uVar2);
  return local_40;
}




undefined8 FUN_100353ed4(void)

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
  uVar1 = FUN_1004d2524("Attack");
  uVar1 = FUN_100015208("Attack",uVar1,0x12345678);
  *(undefined4 *)(lVar3 + 0x10) = uVar1;
  uVar1 = FUN_1004d2524("AttackToIdle");
  uVar1 = FUN_100015208("AttackToIdle",uVar1,0x12345678);
  *(undefined4 *)(lVar3 + 0x20) = uVar1;
  lVar3 = FUN_10000ceb8();
  FUN_1003a985c(&local_40,lVar3);
  *(undefined4 *)(lVar3 + 0x2c) = 0x3f19999a;
  *(code **)(lVar3 + 0x10) = FUN_1003a24a0;
  uVar2 = FUN_10000e1b4();
  FUN_1003a985c(&local_40,uVar2);
  FUN_1003a4cdc(0,uVar2,"Effect_MinionLead_MF",0,"GunMuzzle",0,1,0,0);
  lVar3 = FUN_10000f250();
  FUN_1003a985c(&local_40,lVar3);
  *(undefined4 *)(lVar3 + 0x10) = 0x4f;
  FUN_1003d266c(lVar3,"GunMuzzle");
  *(code **)(lVar3 + 0x38) = FUN_1003b7180;
  uVar2 = FUN_10000f034();
  FUN_1003a985c(&local_40,uVar2);
  return local_40;
}




undefined8 FUN_10035403c(void)

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
  uVar1 = FUN_1004d2524("Attack2");
  uVar1 = FUN_100015208("Attack2",uVar1,0x12345678);
  *(undefined4 *)(lVar3 + 0x10) = uVar1;
  uVar1 = FUN_1004d2524("AttackToIdle");
  uVar1 = FUN_100015208("AttackToIdle",uVar1,0x12345678);
  *(undefined4 *)(lVar3 + 0x20) = uVar1;
  lVar3 = FUN_10000ceb8();
  FUN_1003a985c(&local_40,lVar3);
  *(undefined4 *)(lVar3 + 0x2c) = 0x3f19999a;
  *(code **)(lVar3 + 0x10) = FUN_1003a24a0;
  uVar2 = FUN_10000e1b4();
  FUN_1003a985c(&local_40,uVar2);
  FUN_1003a4cdc(0,uVar2,"Effect_MinionLead_MF",0,"GunMuzzle",0,1,0,0);
  lVar3 = FUN_10000f250();
  FUN_1003a985c(&local_40,lVar3);
  *(undefined4 *)(lVar3 + 0x10) = 0x4f;
  FUN_1003d266c(lVar3,"GunMuzzle");
  *(code **)(lVar3 + 0x38) = FUN_1003b7180;
  uVar2 = FUN_10000f034();
  FUN_1003a985c(&local_40,uVar2);
  return local_40;
}




undefined8 FUN_1003541a4(void)

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
  *(code **)(lVar2 + 0x30) = FUN_1003a24a0;
  uVar1 = FUN_1004d2524("Attack");
  uVar1 = FUN_100015208("Attack",uVar1,0x12345678);
  *(undefined4 *)(lVar2 + 0x10) = uVar1;
  uVar1 = FUN_1004d2524("AttackToIdle");
  uVar1 = FUN_100015208("AttackToIdle",uVar1,0x12345678);
  *(undefined4 *)(lVar2 + 0x20) = uVar1;
  lVar2 = FUN_10000ceb8();
  FUN_1003a985c(&local_40,lVar2);
  *(undefined4 *)(lVar2 + 0x2c) = 0x3f000000;
  *(undefined8 *)(lVar2 + 0x10) = 0;
  lVar2 = FUN_10000e1b4();
  FUN_1003a985c(&local_40,lVar2);
  *(undefined8 *)(lVar2 + 0x40) = 0;
  *(ushort *)(lVar2 + 0x80) = *(ushort *)(lVar2 + 0x80) & 0xffef | 3;
  *(uint *)(lVar2 + 0x3c) = (uint)lVar2 & 0xffff;
  *(undefined8 *)(lVar2 + 0x20) = 0;
  *(undefined8 *)(lVar2 + 0x28) = 1;
  *(undefined4 *)(lVar2 + 0x10) = 0xd99de294;
  uVar3 = FUN_10000bc94();
  FUN_1003a985c(&local_40,uVar3);
  lVar2 = FUN_10000cae4();
  FUN_1003a985c(&local_40,lVar2);
  *(code **)(lVar2 + 0x10) = FUN_1003b2704;
  uVar3 = FUN_10000c784();
  FUN_1003a985c(&local_40,uVar3);
  lVar2 = FUN_10000ceb8();
  FUN_1003a985c(&local_40,lVar2);
  *(undefined4 *)(lVar2 + 0x2c) = 0x3ecccccd;
  *(undefined8 *)(lVar2 + 0x10) = 0;
  lVar2 = FUN_10000e1b4();
  FUN_1003a985c(&local_40,lVar2);
  *(undefined8 *)(lVar2 + 0x40) = 0;
  *(ushort *)(lVar2 + 0x80) = *(ushort *)(lVar2 + 0x80) & 0xffef | 3;
  *(uint *)(lVar2 + 0x3c) = (uint)lVar2 & 0xffff;
  *(undefined8 *)(lVar2 + 0x20) = 0;
  *(undefined8 *)(lVar2 + 0x28) = 1;
  *(undefined4 *)(lVar2 + 0x10) = 0xa7349170;
  uVar3 = FUN_10000bc94();
  FUN_1003a985c(&local_40,uVar3);
  lVar2 = FUN_10000cae4();
  FUN_1003a985c(&local_40,lVar2);
  *(code **)(lVar2 + 0x10) = FUN_1003b2704;
  uVar3 = FUN_10000c784();
  FUN_1003a985c(&local_40,uVar3);
  lVar2 = FUN_10000d8b8();
  FUN_1003a985c(&local_40,lVar2);
  *(undefined1 *)(lVar2 + 0x10) = 0;
  uVar3 = FUN_10000f034();
  FUN_1003a985c(&local_40,uVar3);
  return local_40;
}




undefined8 FUN_1003543dc(void)

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
  *(code **)(lVar2 + 0x30) = FUN_1003a24a0;
  uVar1 = FUN_1004d2524("AltAttack");
  uVar1 = FUN_100015208("AltAttack",uVar1,0x12345678);
  *(undefined4 *)(lVar2 + 0x10) = uVar1;
  uVar1 = FUN_1004d2524("AttackToIdle");
  uVar1 = FUN_100015208("AttackToIdle",uVar1,0x12345678);
  *(undefined4 *)(lVar2 + 0x20) = uVar1;
  lVar2 = FUN_10000ceb8();
  FUN_1003a985c(&local_40,lVar2);
  *(undefined4 *)(lVar2 + 0x2c) = 0x3f19999a;
  *(undefined8 *)(lVar2 + 0x10) = 0;
  lVar2 = FUN_10000e1b4();
  FUN_1003a985c(&local_40,lVar2);
  *(undefined8 *)(lVar2 + 0x40) = 0;
  *(ushort *)(lVar2 + 0x80) = *(ushort *)(lVar2 + 0x80) & 0xffef | 3;
  *(uint *)(lVar2 + 0x3c) = (uint)lVar2 & 0xffff;
  *(undefined8 *)(lVar2 + 0x20) = 0;
  *(undefined8 *)(lVar2 + 0x28) = 1;
  *(undefined4 *)(lVar2 + 0x10) = 0xd630cbaa;
  uVar3 = FUN_10000bc94();
  FUN_1003a985c(&local_40,uVar3);
  lVar2 = FUN_10000cae4();
  FUN_1003a985c(&local_40,lVar2);
  *(code **)(lVar2 + 0x10) = FUN_1003b26d0;
  lVar2 = FUN_10000d8b8();
  FUN_1003a985c(&local_40,lVar2);
  *(undefined1 *)(lVar2 + 0x10) = 0;
  uVar3 = FUN_10000f034();
  FUN_1003a985c(&local_40,uVar3);
  return local_40;
}




undefined8 FUN_10035456c(void)

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
  *(code **)(lVar2 + 0x30) = FUN_1003a24a0;
  uVar1 = FUN_1004d2524("Alt2Attack");
  uVar1 = FUN_100015208("Alt2Attack",uVar1,0x12345678);
  *(undefined4 *)(lVar2 + 0x10) = uVar1;
  uVar1 = FUN_1004d2524("AttackToIdle");
  uVar1 = FUN_100015208("AttackToIdle",uVar1,0x12345678);
  *(undefined4 *)(lVar2 + 0x20) = uVar1;
  lVar2 = FUN_10000ceb8();
  FUN_1003a985c(&local_40,lVar2);
  *(undefined4 *)(lVar2 + 0x2c) = 0x3f4ccccd;
  *(undefined8 *)(lVar2 + 0x10) = 0;
  lVar2 = FUN_10000e1b4();
  FUN_1003a985c(&local_40,lVar2);
  *(undefined8 *)(lVar2 + 0x40) = 0;
  *(ushort *)(lVar2 + 0x80) = *(ushort *)(lVar2 + 0x80) & 0xffef | 3;
  *(uint *)(lVar2 + 0x3c) = (uint)lVar2 & 0xffff;
  *(undefined8 *)(lVar2 + 0x20) = 0;
  *(undefined8 *)(lVar2 + 0x28) = 1;
  *(undefined4 *)(lVar2 + 0x10) = 0xc6d08048;
  uVar3 = FUN_10000bc94();
  FUN_1003a985c(&local_40,uVar3);
  lVar2 = FUN_10000cae4();
  FUN_1003a985c(&local_40,lVar2);
  *(code **)(lVar2 + 0x10) = FUN_1003b26d0;
  lVar2 = FUN_10000d8b8();
  FUN_1003a985c(&local_40,lVar2);
  *(undefined1 *)(lVar2 + 0x10) = 0;
  uVar3 = FUN_10000f034();
  FUN_1003a985c(&local_40,uVar3);
  return local_40;
}




undefined8 FUN_1003546fc(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_30 = 0;
  uStack_28 = 0;
  uVar2 = FUN_10000d8b8();
  FUN_1003a985c(&local_30,uVar2);
  uVar2 = FUN_10000ef8c();
  FUN_1003a985c(&local_30,uVar2);
  lVar3 = FUN_10000dff8();
  FUN_1003a985c(&local_30,lVar3);
  *(undefined2 *)(lVar3 + 0x28) = 0x100;
  *(undefined8 *)(lVar3 + 0x30) = 0;
  uVar1 = FUN_1004d2524("RootAbility");
  uVar1 = FUN_100015208("RootAbility",uVar1,0x12345678);
  *(undefined4 *)(lVar3 + 0x10) = uVar1;
  uVar1 = FUN_1004d2524("AttackToIdle");
  uVar1 = FUN_100015208("AttackToIdle",uVar1,0x12345678);
  *(undefined4 *)(lVar3 + 0x20) = uVar1;
  lVar3 = FUN_10000ceb8();
  FUN_1003a985c(&local_30,lVar3);
  *(undefined4 *)(lVar3 + 0x2c) = 0x3f19999a;
  *(undefined8 *)(lVar3 + 0x10) = 0;
  plVar4 = (long *)FUN_10000f300();
  FUN_1003a985c(&local_30,plVar4);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))
                             (plVar4,PTR_s__JungleMinion_TreeEnt_RootField__10185ac20,0);
  (**(code **)(*plVar4 + 0x20))(plVar4,FUN_10048fb04);
  lVar3 = FUN_10000ceb8();
  FUN_1003a985c(&local_30,lVar3);
  *(undefined4 *)(lVar3 + 0x2c) = 0x3ecccccd;
  *(undefined8 *)(lVar3 + 0x10) = 0;
  lVar3 = FUN_10000d8b8();
  FUN_1003a985c(&local_30,lVar3);
  *(undefined1 *)(lVar3 + 0x10) = 0;
  uVar2 = FUN_10000f034();
  FUN_1003a985c(&local_30,uVar2);
  return local_30;
}




undefined8 FUN_100354868(void)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_30 = 0;
  uStack_28 = 0;
  lVar2 = FUN_10000e524();
  FUN_1003a985c(&local_30,lVar2);
  *(char **)(lVar2 + 0x10) = "build://Sounds/Treant/tree_ent_emerge.mp3";
  *(undefined2 *)(lVar2 + 0x30) = 0x1ff;
  *(undefined4 *)(lVar2 + 0x34) = 1;
  *(undefined8 *)(lVar2 + 0x3c) = 0xffffffff3f000000;
  *(byte *)(lVar2 + 0x38) = *(byte *)(lVar2 + 0x38) & 0xf8 | 4;
  *(undefined8 *)(lVar2 + 0x48) = 0;
  lVar2 = FUN_10000e1b4();
  FUN_1003a985c(&local_30,lVar2);
  *(undefined8 *)(lVar2 + 0x40) = 0;
  *(ushort *)(lVar2 + 0x80) = *(ushort *)(lVar2 + 0x80) & 0xffef | 3;
  *(uint *)(lVar2 + 0x3c) = (uint)lVar2 & 0xffff;
  *(undefined8 *)(lVar2 + 0x20) = 0;
  *(undefined8 *)(lVar2 + 0x28) = 1;
  *(undefined4 *)(lVar2 + 0x10) = 0x8b1e3ff5;
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
  uVar3 = FUN_10000f034();
  FUN_1003a985c(&local_30,uVar3);
  return local_30;
}




undefined8 FUN_1003549a0(void)

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
  *(undefined4 *)(lVar2 + 0x10) = 0xf63394c4;
  lVar2 = FUN_10000ceb8();
  FUN_1003a985c(&local_30,lVar2);
  *(undefined4 *)(lVar2 + 0x2c) = 0x3fc00000;
  *(undefined8 *)(lVar2 + 0x10) = 0;
  lVar2 = FUN_10000b7cc();
  FUN_1003a985c(&local_30,lVar2);
  *(code **)(lVar2 + 0x10) = FUN_1003b2780;
  lVar2 = FUN_10000e524();
  FUN_1003a985c(&local_30,lVar2);
  *(char **)(lVar2 + 0x10) = "build://Sounds/Treant/tree_ent_heal_cast.mp3";
  *(undefined2 *)(lVar2 + 0x30) = 0x1ff;
  *(undefined4 *)(lVar2 + 0x34) = 1;
  *(undefined8 *)(lVar2 + 0x3c) = 0xffffffff3ecccccd;
  *(byte *)(lVar2 + 0x38) = *(byte *)(lVar2 + 0x38) & 0xf8 | 4;
  *(undefined8 *)(lVar2 + 0x48) = 0;
  lVar2 = FUN_10000f250();
  FUN_1003a985c(&local_30,lVar2);
  *(undefined4 *)(lVar2 + 0x10) = 0x2d;
  FUN_1003d266c(lVar2,"OverHead");
  *(undefined1 *)(lVar2 + 0x30) = 1;
  uVar3 = FUN_10000c784();
  FUN_1003a985c(&local_30,uVar3);
  lVar2 = FUN_10000ceb8();
  FUN_1003a985c(&local_30,lVar2);
  *(undefined4 *)(lVar2 + 0x2c) = 0x40200000;
  *(undefined8 *)(lVar2 + 0x10) = 0;
  uVar3 = FUN_10000d9a0();
  FUN_1003a985c(&local_30,uVar3);
  return local_30;
}




undefined8 FUN_100354b54(void)

{
  undefined4 uVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined4 local_50 [2];
  undefined4 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  local_40 = 0;
  uStack_38 = 0;
  lVar2 = FUN_10000b7cc();
  FUN_1003a985c(&local_40,lVar2);
  *(code **)(lVar2 + 0x10) = FUN_1003b283c;
  plVar3 = (long *)FUN_10000bed8();
  FUN_1003a985c(&local_40,plVar3);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x70))
                             (plVar3,PTR_s_Buff_JungleMinion_5v5_CrystalOrb_10185ac28);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x28))(plVar3,FUN_1003b2830);
  local_50[0] = 0x42b40000;
  local_48 = 1;
  (**(code **)(*plVar3 + 0x18))(plVar3,local_50);
  lVar2 = FUN_10000e524();
  FUN_1003a985c(&local_40,lVar2);
  *(char **)(lVar2 + 0x10) = "build://Sounds/Treant/tree_ent_heal_cast.mp3";
  *(undefined2 *)(lVar2 + 0x30) = 0x1ff;
  *(undefined4 *)(lVar2 + 0x34) = 1;
  *(undefined8 *)(lVar2 + 0x3c) = 0xffffffff3ecccccd;
  *(byte *)(lVar2 + 0x38) = *(byte *)(lVar2 + 0x38) & 0xf8 | 4;
  *(undefined8 *)(lVar2 + 0x48) = 0;
  lVar2 = FUN_10000f250();
  FUN_1003a985c(&local_40,lVar2);
  *(undefined4 *)(lVar2 + 0x10) = 0x2e;
  FUN_1003d266c(lVar2,"OverHead");
  *(undefined1 *)(lVar2 + 0x30) = 1;
  uVar4 = FUN_10000c784();
  FUN_1003a985c(&local_40,uVar4);
  lVar2 = FUN_10000dff8();
  FUN_1003a985c(&local_40,lVar2);
  *(undefined2 *)(lVar2 + 0x28) = 0x100;
  *(undefined8 *)(lVar2 + 0x30) = 0;
  uVar1 = FUN_1004d2524("Die");
  uVar1 = FUN_100015208("Die",uVar1,0x12345678);
  *(undefined4 *)(lVar2 + 0x10) = uVar1;
  *(undefined4 *)(lVar2 + 0x20) = 0;
  lVar2 = FUN_10000e1b4();
  FUN_1003a985c(&local_40,lVar2);
  *(undefined8 *)(lVar2 + 0x40) = 0;
  *(ushort *)(lVar2 + 0x80) = *(ushort *)(lVar2 + 0x80) & 0xffef | 3;
  *(uint *)(lVar2 + 0x3c) = (uint)lVar2 & 0xffff;
  *(undefined8 *)(lVar2 + 0x20) = 0;
  *(undefined8 *)(lVar2 + 0x28) = 1;
  *(undefined4 *)(lVar2 + 0x10) = 0xf63394c4;
  lVar2 = FUN_10000ceb8();
  FUN_1003a985c(&local_40,lVar2);
  *(undefined4 *)(lVar2 + 0x2c) = 0x40800000;
  *(undefined8 *)(lVar2 + 0x10) = 0;
  uVar4 = FUN_10000d9a0();
  FUN_1003a985c(&local_40,uVar4);
  return local_40;
}




undefined8 FUN_100354d4c(void)

{
  undefined4 uVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined4 local_50 [2];
  undefined4 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  local_40 = 0;
  uStack_38 = 0;
  lVar2 = FUN_10000b7cc();
  FUN_1003a985c(&local_40,lVar2);
  *(code **)(lVar2 + 0x10) = FUN_1003b283c;
  plVar3 = (long *)FUN_10000bed8();
  FUN_1003a985c(&local_40,plVar3);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x70))
                             (plVar3,PTR_s_Buff_JungleMinion_5v5_WeaponOrb_10185ac30);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x28))(plVar3,FUN_1003b2830);
  local_50[0] = 0x42b40000;
  local_48 = 1;
  (**(code **)(*plVar3 + 0x18))(plVar3,local_50);
  lVar2 = FUN_10000e524();
  FUN_1003a985c(&local_40,lVar2);
  *(char **)(lVar2 + 0x10) = "build://Sounds/Treant/tree_ent_heal_cast.mp3";
  *(undefined2 *)(lVar2 + 0x30) = 0x1ff;
  *(undefined4 *)(lVar2 + 0x34) = 1;
  *(undefined8 *)(lVar2 + 0x3c) = 0xffffffff3ecccccd;
  *(byte *)(lVar2 + 0x38) = *(byte *)(lVar2 + 0x38) & 0xf8 | 4;
  *(undefined8 *)(lVar2 + 0x48) = 0;
  lVar2 = FUN_10000f250();
  FUN_1003a985c(&local_40,lVar2);
  *(undefined4 *)(lVar2 + 0x10) = 0x2e;
  FUN_1003d266c(lVar2,"OverHead");
  *(undefined1 *)(lVar2 + 0x30) = 1;
  uVar4 = FUN_10000c784();
  FUN_1003a985c(&local_40,uVar4);
  lVar2 = FUN_10000dff8();
  FUN_1003a985c(&local_40,lVar2);
  *(undefined2 *)(lVar2 + 0x28) = 0x100;
  *(undefined8 *)(lVar2 + 0x30) = 0;
  uVar1 = FUN_1004d2524("Die");
  uVar1 = FUN_100015208("Die",uVar1,0x12345678);
  *(undefined4 *)(lVar2 + 0x10) = uVar1;
  *(undefined4 *)(lVar2 + 0x20) = 0;
  lVar2 = FUN_10000e1b4();
  FUN_1003a985c(&local_40,lVar2);
  *(undefined8 *)(lVar2 + 0x40) = 0;
  *(ushort *)(lVar2 + 0x80) = *(ushort *)(lVar2 + 0x80) & 0xffef | 3;
  *(uint *)(lVar2 + 0x3c) = (uint)lVar2 & 0xffff;
  *(undefined8 *)(lVar2 + 0x20) = 0;
  *(undefined8 *)(lVar2 + 0x28) = 1;
  *(undefined4 *)(lVar2 + 0x10) = 0xf63394c4;
  lVar2 = FUN_10000ceb8();
  FUN_1003a985c(&local_40,lVar2);
  *(undefined4 *)(lVar2 + 0x2c) = 0x40800000;
  *(undefined8 *)(lVar2 + 0x10) = 0;
  uVar4 = FUN_10000d9a0();
  FUN_1003a985c(&local_40,uVar4);
  return local_40;
}




undefined8 FUN_100354f44(void)

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
  *(code **)(lVar2 + 0x30) = FUN_1003a24a0;
  uVar1 = FUN_1004d2524("Attack");
  uVar1 = FUN_100015208("Attack",uVar1,0x12345678);
  *(undefined4 *)(lVar2 + 0x10) = uVar1;
  uVar1 = FUN_1004d2524("AttackToIdle");
  uVar1 = FUN_100015208("AttackToIdle",uVar1,0x12345678);
  *(undefined4 *)(lVar2 + 0x20) = uVar1;
  lVar2 = FUN_10000ceb8();
  FUN_1003a985c(&local_40,lVar2);
  *(undefined4 *)(lVar2 + 0x2c) = 0x3f333333;
  *(code **)(lVar2 + 0x10) = FUN_1003a24a0;
  uVar3 = FUN_10000e1b4();
  FUN_1003a985c(&local_40,uVar3);
  FUN_1003a4cdc(0,uVar3,"Effect_JMinion_Mine_Mf",0,"AxeImpact",0,1,0,0);
  lVar2 = FUN_10000f250();
  FUN_1003a985c(&local_40,lVar2);
  *(undefined4 *)(lVar2 + 0x10) = 0x2a;
  FUN_1003d266c(lVar2,"GunMuzzle");
  *(code **)(lVar2 + 0x38) = FUN_1003b2558;
  lVar2 = FUN_10000d8b8();
  FUN_1003a985c(&local_40,lVar2);
  *(undefined1 *)(lVar2 + 0x10) = 0;
  uVar3 = FUN_10000f034();
  FUN_1003a985c(&local_40,uVar3);
  return local_40;
}




undefined8 FUN_1003550e0(void)

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
  *(code **)(lVar2 + 0x30) = FUN_1003a24a0;
  uVar1 = FUN_1004d2524("AltAttack");
  uVar1 = FUN_100015208("AltAttack",uVar1,0x12345678);
  *(undefined4 *)(lVar2 + 0x10) = uVar1;
  uVar1 = FUN_1004d2524("AttackToIdle");
  uVar1 = FUN_100015208("AttackToIdle",uVar1,0x12345678);
  *(undefined4 *)(lVar2 + 0x20) = uVar1;
  lVar2 = FUN_10000ceb8();
  FUN_1003a985c(&local_40,lVar2);
  *(undefined4 *)(lVar2 + 0x2c) = 0x3f333333;
  *(code **)(lVar2 + 0x10) = FUN_1003a24a0;
  uVar3 = FUN_10000e1b4();
  FUN_1003a985c(&local_40,uVar3);
  FUN_1003a4cdc(0,uVar3,"Effect_JMinion_Mine_Mf",0,"AxeImpact",0,1,0,0);
  lVar2 = FUN_10000f250();
  FUN_1003a985c(&local_40,lVar2);
  *(undefined4 *)(lVar2 + 0x10) = 0x2a;
  FUN_1003d266c(lVar2,"GunMuzzle");
  *(code **)(lVar2 + 0x38) = FUN_1003b2558;
  lVar2 = FUN_10000d8b8();
  FUN_1003a985c(&local_40,lVar2);
  *(undefined1 *)(lVar2 + 0x10) = 0;
  uVar3 = FUN_10000f034();
  FUN_1003a985c(&local_40,uVar3);
  return local_40;
}




undefined8 FUN_10035527c(void)

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
  *(code **)(lVar2 + 0x30) = FUN_1003a24a0;
  uVar1 = FUN_1004d2524("Attack");
  uVar1 = FUN_100015208("Attack",uVar1,0x12345678);
  *(undefined4 *)(lVar2 + 0x10) = uVar1;
  uVar1 = FUN_1004d2524("AttackToIdle");
  uVar1 = FUN_100015208("AttackToIdle",uVar1,0x12345678);
  *(undefined4 *)(lVar2 + 0x20) = uVar1;
  lVar2 = FUN_10000ceb8();
  FUN_1003a985c(&local_40,lVar2);
  *(undefined4 *)(lVar2 + 0x2c) = 0x3f333333;
  *(code **)(lVar2 + 0x10) = FUN_1003a24a0;
  uVar3 = FUN_10000e1b4();
  FUN_1003a985c(&local_40,uVar3);
  FUN_1003a4cdc(0,uVar3,"Effect_JMinion_Mine_Mf",0,"AxeImpact",0,1,0,0);
  lVar2 = FUN_10000f250();
  FUN_1003a985c(&local_40,lVar2);
  *(undefined4 *)(lVar2 + 0x10) = 0x2b;
  FUN_1003d266c(lVar2,"GunMuzzle");
  *(code **)(lVar2 + 0x38) = FUN_1003b2558;
  lVar2 = FUN_10000d8b8();
  FUN_1003a985c(&local_40,lVar2);
  *(undefined1 *)(lVar2 + 0x10) = 0;
  uVar3 = FUN_10000f034();
  FUN_1003a985c(&local_40,uVar3);
  return local_40;
}




undefined8 FUN_100355418(void)

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
  *(code **)(lVar2 + 0x30) = FUN_1003a24a0;
  uVar1 = FUN_1004d2524("AltAttack");
  uVar1 = FUN_100015208("AltAttack",uVar1,0x12345678);
  *(undefined4 *)(lVar2 + 0x10) = uVar1;
  uVar1 = FUN_1004d2524("AttackToIdle");
  uVar1 = FUN_100015208("AttackToIdle",uVar1,0x12345678);
  *(undefined4 *)(lVar2 + 0x20) = uVar1;
  lVar2 = FUN_10000ceb8();
  FUN_1003a985c(&local_40,lVar2);
  *(undefined4 *)(lVar2 + 0x2c) = 0x3f333333;
  *(code **)(lVar2 + 0x10) = FUN_1003a24a0;
  uVar3 = FUN_10000e1b4();
  FUN_1003a985c(&local_40,uVar3);
  FUN_1003a4cdc(0,uVar3,"Effect_JMinion_Mine_Mf",0,"AxeImpact",0,1,0,0);
  lVar2 = FUN_10000f250();
  FUN_1003a985c(&local_40,lVar2);
  *(undefined4 *)(lVar2 + 0x10) = 0x2b;
  FUN_1003d266c(lVar2,"GunMuzzle");
  *(code **)(lVar2 + 0x38) = FUN_1003b2558;
  lVar2 = FUN_10000d8b8();
  FUN_1003a985c(&local_40,lVar2);
  *(undefined1 *)(lVar2 + 0x10) = 0;
  uVar3 = FUN_10000f034();
  FUN_1003a985c(&local_40,uVar3);
  return local_40;
}




undefined8 FUN_1003555b4(void)

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
  lVar2 = FUN_10000ceb8();
  FUN_1003a985c(&local_30,lVar2);
  *(undefined4 *)(lVar2 + 0x2c) = 0x40400000;
  *(undefined8 *)(lVar2 + 0x10) = 0;
  uVar3 = FUN_10000d9a0();
  FUN_1003a985c(&local_30,uVar3);
  return local_30;
}




undefined8 FUN_100355658(void)

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
  *(code **)(lVar2 + 0x30) = FUN_1003a24a0;
  uVar1 = FUN_1004d2524("Attack");
  uVar1 = FUN_100015208("Attack",uVar1,0x12345678);
  *(undefined4 *)(lVar2 + 0x10) = uVar1;
  uVar1 = FUN_1004d2524("AttackToIdle");
  uVar1 = FUN_100015208("AttackToIdle",uVar1,0x12345678);
  *(undefined4 *)(lVar2 + 0x20) = uVar1;
  lVar2 = FUN_10000ceb8();
  FUN_1003a985c(&local_40,lVar2);
  *(undefined4 *)(lVar2 + 0x2c) = 0x3f333333;
  *(code **)(lVar2 + 0x10) = FUN_1003a24a0;
  uVar3 = FUN_10000e1b4();
  FUN_1003a985c(&local_40,uVar3);
  FUN_1003a4cdc(0,uVar3,"Effect_JMinion_Mine_Mf",0,"AxeImpact",0,1,0,0);
  lVar2 = FUN_10000f250();
  FUN_1003a985c(&local_40,lVar2);
  *(undefined4 *)(lVar2 + 0x10) = 0x2c;
  FUN_1003d266c(lVar2,"GunMuzzle");
  *(code **)(lVar2 + 0x38) = FUN_1003b2668;
  lVar2 = FUN_10000d8b8();
  FUN_1003a985c(&local_40,lVar2);
  *(undefined1 *)(lVar2 + 0x10) = 0;
  uVar3 = FUN_10000f034();
  FUN_1003a985c(&local_40,uVar3);
  return local_40;
}




undefined8 FUN_1003557f4(void)

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
  *(code **)(lVar2 + 0x30) = FUN_1003a24a0;
  uVar1 = FUN_1004d2524("AltAttack");
  uVar1 = FUN_100015208("AltAttack",uVar1,0x12345678);
  *(undefined4 *)(lVar2 + 0x10) = uVar1;
  uVar1 = FUN_1004d2524("AttackToIdle");
  uVar1 = FUN_100015208("AttackToIdle",uVar1,0x12345678);
  *(undefined4 *)(lVar2 + 0x20) = uVar1;
  lVar2 = FUN_10000ceb8();
  FUN_1003a985c(&local_40,lVar2);
  *(undefined4 *)(lVar2 + 0x2c) = 0x3f333333;
  *(code **)(lVar2 + 0x10) = FUN_1003a24a0;
  uVar3 = FUN_10000e1b4();
  FUN_1003a985c(&local_40,uVar3);
  FUN_1003a4cdc(0,uVar3,"Effect_JMinion_Mine_Mf",0,"AxeImpact",0,1,0,0);
  lVar2 = FUN_10000f250();
  FUN_1003a985c(&local_40,lVar2);
  *(undefined4 *)(lVar2 + 0x10) = 0x2c;
  FUN_1003d266c(lVar2,"GunMuzzle");
  *(code **)(lVar2 + 0x38) = FUN_1003b2668;
  lVar2 = FUN_10000d8b8();
  FUN_1003a985c(&local_40,lVar2);
  *(undefined1 *)(lVar2 + 0x10) = 0;
  uVar3 = FUN_10000f034();
  FUN_1003a985c(&local_40,uVar3);
  return local_40;
}




undefined8 FUN_100355990(void)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_30 = 0;
  uStack_28 = 0;
  lVar2 = FUN_10000b7cc();
  FUN_1003a985c(&local_30,lVar2);
  *(code **)(lVar2 + 0x10) = FUN_1003b283c;
  lVar2 = FUN_10000f250();
  FUN_1003a985c(&local_30,lVar2);
  *(undefined4 *)(lVar2 + 0x10) = 0x2e;
  FUN_1003d266c(lVar2,"OverHead");
  *(undefined1 *)(lVar2 + 0x30) = 1;
  lVar2 = FUN_10000e524();
  FUN_1003a985c(&local_30,lVar2);
  *(char **)(lVar2 + 0x10) = "build://Sounds/Treant/tree_ent_heal_cast.mp3";
  *(undefined2 *)(lVar2 + 0x30) = 0x1ff;
  *(undefined4 *)(lVar2 + 0x34) = 1;
  *(undefined8 *)(lVar2 + 0x3c) = 0xffffffff3ecccccd;
  *(byte *)(lVar2 + 0x38) = *(byte *)(lVar2 + 0x38) & 0xf8 | 4;
  *(undefined8 *)(lVar2 + 0x48) = 0;
  uVar3 = FUN_10000c784();
  FUN_1003a985c(&local_30,uVar3);
  lVar2 = FUN_10000dff8();
  FUN_1003a985c(&local_30,lVar2);
  *(undefined2 *)(lVar2 + 0x28) = 0x100;
  *(undefined8 *)(lVar2 + 0x30) = 0;
  uVar1 = FUN_1004d2524("Die");
  uVar1 = FUN_100015208("Die",uVar1,0x12345678);
  *(undefined4 *)(lVar2 + 0x10) = uVar1;
  *(undefined4 *)(lVar2 + 0x20) = 0;
  lVar2 = FUN_10000ceb8();
  FUN_1003a985c(&local_30,lVar2);
  *(undefined4 *)(lVar2 + 0x2c) = 0x40800000;
  *(undefined8 *)(lVar2 + 0x10) = 0;
  uVar3 = FUN_10000d9a0();
  FUN_1003a985c(&local_30,uVar3);
  return local_30;
}




undefined8 FUN_100355ae4(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_30 = 0;
  uStack_28 = 0;
  uVar2 = FUN_10000ef8c();
  FUN_1003a985c(&local_30,uVar2);
  lVar3 = FUN_10000dff8();
  FUN_1003a985c(&local_30,lVar3);
  *(undefined2 *)(lVar3 + 0x28) = 0x100;
  *(code **)(lVar3 + 0x30) = FUN_1003a24a0;
  uVar1 = FUN_1004d2524("Attack");
  uVar1 = FUN_100015208("Attack",uVar1,0x12345678);
  *(undefined4 *)(lVar3 + 0x10) = uVar1;
  uVar1 = FUN_1004d2524("AttackToIdle");
  uVar1 = FUN_100015208("AttackToIdle",uVar1,0x12345678);
  *(undefined4 *)(lVar3 + 0x20) = uVar1;
  lVar3 = FUN_10000ceb8();
  FUN_1003a985c(&local_30,lVar3);
  *(undefined4 *)(lVar3 + 0x2c) = 0x3f19999a;
  *(undefined8 *)(lVar3 + 0x10) = 0;
  uVar2 = FUN_10000bc94();
  FUN_1003a985c(&local_30,uVar2);
  lVar3 = FUN_10000cae4();
  FUN_1003a985c(&local_30,lVar3);
  *(code **)(lVar3 + 0x10) = FUN_1003b26d0;
  uVar2 = FUN_10000f034();
  FUN_1003a985c(&local_30,uVar2);
  return local_30;
}




undefined8 FUN_100355bf8(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_30 = 0;
  uStack_28 = 0;
  uVar2 = FUN_10000ef8c();
  FUN_1003a985c(&local_30,uVar2);
  lVar3 = FUN_10000dff8();
  FUN_1003a985c(&local_30,lVar3);
  *(undefined2 *)(lVar3 + 0x28) = 0x100;
  *(code **)(lVar3 + 0x30) = FUN_1003a24a0;
  uVar1 = FUN_1004d2524("AltAttack");
  uVar1 = FUN_100015208("AltAttack",uVar1,0x12345678);
  *(undefined4 *)(lVar3 + 0x10) = uVar1;
  uVar1 = FUN_1004d2524("AttackToIdle");
  uVar1 = FUN_100015208("AttackToIdle",uVar1,0x12345678);
  *(undefined4 *)(lVar3 + 0x20) = uVar1;
  lVar3 = FUN_10000ceb8();
  FUN_1003a985c(&local_30,lVar3);
  *(undefined4 *)(lVar3 + 0x2c) = 0x3f19999a;
  *(undefined8 *)(lVar3 + 0x10) = 0;
  uVar2 = FUN_10000bc94();
  FUN_1003a985c(&local_30,uVar2);
  lVar3 = FUN_10000cae4();
  FUN_1003a985c(&local_30,lVar3);
  *(code **)(lVar3 + 0x10) = FUN_1003b26d0;
  uVar2 = FUN_10000f034();
  FUN_1003a985c(&local_30,uVar2);
  return local_30;
}




undefined8 FUN_100355d0c(void)

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
  lVar2 = FUN_10000ceb8();
  FUN_1003a985c(&local_30,lVar2);
  *(undefined4 *)(lVar2 + 0x2c) = 0x40800000;
  *(undefined8 *)(lVar2 + 0x10) = 0;
  uVar3 = FUN_10000d9a0();
  FUN_1003a985c(&local_30,uVar3);
  return local_30;
}




undefined8 FUN_100355db0(void)

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




undefined8 FUN_100355de0(void)

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
  *(code **)(lVar2 + 0x30) = FUN_1003a24a0;
  uVar1 = FUN_1004d2524("Attack");
  uVar1 = FUN_100015208("Attack",uVar1,0x12345678);
  *(undefined4 *)(lVar2 + 0x10) = uVar1;
  uVar1 = FUN_1004d2524("AttackToIdle");
  uVar1 = FUN_100015208("AttackToIdle",uVar1,0x12345678);
  *(undefined4 *)(lVar2 + 0x20) = uVar1;
  lVar2 = FUN_10000ceb8();
  FUN_1003a985c(&local_40,lVar2);
  *(undefined4 *)(lVar2 + 0x2c) = 0x3f333333;
  *(code **)(lVar2 + 0x10) = FUN_1003a24a0;
  uVar3 = FUN_10000e1b4();
  FUN_1003a985c(&local_40,uVar3);
  FUN_1003a4cdc(0,uVar3,"Effect_JMinion_Mine_Mf",0,"AxeImpact",0,1,0,0);
  lVar2 = FUN_10000f250();
  FUN_1003a985c(&local_40,lVar2);
  *(undefined4 *)(lVar2 + 0x10) = 0x2a;
  FUN_1003d266c(lVar2,"GunMuzzle");
  *(code **)(lVar2 + 0x38) = FUN_1003b24f0;
  lVar2 = FUN_10000d8b8();
  FUN_1003a985c(&local_40,lVar2);
  *(undefined1 *)(lVar2 + 0x10) = 0;
  uVar3 = FUN_10000f034();
  FUN_1003a985c(&local_40,uVar3);
  return local_40;
}




undefined8 FUN_100355f7c(void)

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
  *(code **)(lVar2 + 0x30) = FUN_1003a24a0;
  uVar1 = FUN_1004d2524("AltAttack");
  uVar1 = FUN_100015208("AltAttack",uVar1,0x12345678);
  *(undefined4 *)(lVar2 + 0x10) = uVar1;
  uVar1 = FUN_1004d2524("AttackToIdle");
  uVar1 = FUN_100015208("AttackToIdle",uVar1,0x12345678);
  *(undefined4 *)(lVar2 + 0x20) = uVar1;
  lVar2 = FUN_10000ceb8();
  FUN_1003a985c(&local_40,lVar2);
  *(undefined4 *)(lVar2 + 0x2c) = 0x3f333333;
  *(code **)(lVar2 + 0x10) = FUN_1003a24a0;
  uVar3 = FUN_10000e1b4();
  FUN_1003a985c(&local_40,uVar3);
  FUN_1003a4cdc(0,uVar3,"Effect_JMinion_Mine_Mf",0,"AxeImpact",0,1,0,0);
  lVar2 = FUN_10000f250();
  FUN_1003a985c(&local_40,lVar2);
  *(undefined4 *)(lVar2 + 0x10) = 0x2a;
  FUN_1003d266c(lVar2,"GunMuzzle");
  *(code **)(lVar2 + 0x38) = FUN_1003b24f0;
  lVar2 = FUN_10000d8b8();
  FUN_1003a985c(&local_40,lVar2);
  *(undefined1 *)(lVar2 + 0x10) = 0;
  uVar3 = FUN_10000f034();
  FUN_1003a985c(&local_40,uVar3);
  return local_40;
}




undefined8 FUN_100356118(void)

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
  *(code **)(lVar2 + 0x30) = FUN_1003a24a0;
  uVar1 = FUN_1004d2524("Attack");
  uVar1 = FUN_100015208("Attack",uVar1,0x12345678);
  *(undefined4 *)(lVar2 + 0x10) = uVar1;
  uVar1 = FUN_1004d2524("AttackToIdle");
  uVar1 = FUN_100015208("AttackToIdle",uVar1,0x12345678);
  *(undefined4 *)(lVar2 + 0x20) = uVar1;
  lVar2 = FUN_10000ceb8();
  FUN_1003a985c(&local_40,lVar2);
  *(undefined4 *)(lVar2 + 0x2c) = 0x3f19999a;
  *(undefined8 *)(lVar2 + 0x10) = 0;
  lVar2 = FUN_10000e1b4();
  FUN_1003a985c(&local_40,lVar2);
  *(undefined8 *)(lVar2 + 0x40) = 0;
  *(ushort *)(lVar2 + 0x80) = *(ushort *)(lVar2 + 0x80) & 0xffef | 3;
  *(uint *)(lVar2 + 0x3c) = (uint)lVar2 & 0xffff;
  *(undefined8 *)(lVar2 + 0x20) = 0;
  *(undefined8 *)(lVar2 + 0x28) = 1;
  *(undefined4 *)(lVar2 + 0x10) = 0xcbebbc0b;
  uVar3 = FUN_10000bc94();
  FUN_1003a985c(&local_40,uVar3);
  lVar2 = FUN_10000cae4();
  FUN_1003a985c(&local_40,lVar2);
  *(code **)(lVar2 + 0x10) = FUN_1003b26d0;
  lVar2 = FUN_10000d8b8();
  FUN_1003a985c(&local_40,lVar2);
  *(undefined1 *)(lVar2 + 0x10) = 0;
  uVar3 = FUN_10000f034();
  FUN_1003a985c(&local_40,uVar3);
  return local_40;
}




undefined8 FUN_1003562a8(void)

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
  *(code **)(lVar2 + 0x30) = FUN_1003a24a0;
  uVar1 = FUN_1004d2524("AltAttack");
  uVar1 = FUN_100015208("AltAttack",uVar1,0x12345678);
  *(undefined4 *)(lVar2 + 0x10) = uVar1;
  uVar1 = FUN_1004d2524("AttackToIdle");
  uVar1 = FUN_100015208("AttackToIdle",uVar1,0x12345678);
  *(undefined4 *)(lVar2 + 0x20) = uVar1;
  lVar2 = FUN_10000ceb8();
  FUN_1003a985c(&local_40,lVar2);
  *(undefined4 *)(lVar2 + 0x2c) = 0x3f19999a;
  *(undefined8 *)(lVar2 + 0x10) = 0;
  lVar2 = FUN_10000e1b4();
  FUN_1003a985c(&local_40,lVar2);
  *(undefined8 *)(lVar2 + 0x40) = 0;
  *(ushort *)(lVar2 + 0x80) = *(ushort *)(lVar2 + 0x80) & 0xffef | 3;
  *(uint *)(lVar2 + 0x3c) = (uint)lVar2 & 0xffff;
  *(undefined8 *)(lVar2 + 0x20) = 0;
  *(undefined8 *)(lVar2 + 0x28) = 1;
  *(undefined4 *)(lVar2 + 0x10) = 0x10be6f9f;
  uVar3 = FUN_10000bc94();
  FUN_1003a985c(&local_40,uVar3);
  lVar2 = FUN_10000cae4();
  FUN_1003a985c(&local_40,lVar2);
  *(code **)(lVar2 + 0x10) = FUN_1003b26d0;
  lVar2 = FUN_10000d8b8();
  FUN_1003a985c(&local_40,lVar2);
  *(undefined1 *)(lVar2 + 0x10) = 0;
  uVar3 = FUN_10000f034();
  FUN_1003a985c(&local_40,uVar3);
  return local_40;
}




undefined8 FUN_100356438(void)

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
  uVar1 = FUN_1004d2524("Attack");
  uVar1 = FUN_100015208("Attack",uVar1,0x12345678);
  *(undefined4 *)(lVar2 + 0x10) = uVar1;
  *(undefined4 *)(lVar2 + 0x20) = 0;
  lVar2 = FUN_10000e524();
  FUN_1003a985c(&local_40,lVar2);
  uVar3 = FUN_1010a1520();
  lVar4 = FUN_1010a0e0c(uVar3,0,"*KindredSoundBalance*",0);
  uVar1 = FUN_1003aa420(*(undefined4 *)(lVar4 + 0x104));
  *(undefined2 *)(lVar2 + 0x30) = 0x366;
  *(undefined4 *)(lVar2 + 0x34) = 1;
  *(undefined4 *)(lVar2 + 0x3c) = uVar1;
  *(undefined4 *)(lVar2 + 0x40) = 0xffffffff;
  *(byte *)(lVar2 + 0x38) = *(byte *)(lVar2 + 0x38) & 0xf8 | 4;
  *(undefined8 *)(lVar2 + 0x48) = 0;
  *(char **)(lVar2 + 0x10) = "build://Sounds/Kraken.assetbundle/kraken_ovrhnd_attack_vo_01.mp3";
  *(char **)(lVar2 + 0x18) = "build://Sounds/Kraken.assetbundle/kraken_ovrhnd_attack_vo_02.mp3";
  *(char **)(lVar2 + 0x20) = "build://Sounds/Kraken.assetbundle/kraken_ovrhnd_attack_vo_03.mp3";
  lVar2 = FUN_10000ceb8();
  FUN_1003a985c(&local_40,lVar2);
  *(undefined4 *)(lVar2 + 0x2c) = 0x3f8ccccd;
  *(undefined8 *)(lVar2 + 0x10) = 0;
  uVar3 = FUN_10000bc94();
  FUN_1003a985c(&local_40,uVar3);
  lVar2 = FUN_10000cae4();
  FUN_1003a985c(&local_40,lVar2);
  *(code **)(lVar2 + 0x10) = FUN_1003b4d30;
  lVar2 = FUN_10000e524();
  FUN_1003a985c(&local_40,lVar2);
  uVar3 = FUN_1010a1520();
  lVar4 = FUN_1010a0e0c(uVar3,0,"*KindredSoundBalance*",0);
  uVar1 = FUN_1003aa420(*(undefined4 *)(lVar4 + 0x104));
  *(undefined2 *)(lVar2 + 0x30) = 0x4ff;
  *(undefined4 *)(lVar2 + 0x40) = 0xffffffff;
  *(undefined4 *)(lVar2 + 0x34) = 1;
  *(undefined4 *)(lVar2 + 0x3c) = uVar1;
  *(byte *)(lVar2 + 0x38) = *(byte *)(lVar2 + 0x38) & 0xf8 | 4;
  *(undefined8 *)(lVar2 + 0x48) = 0;
  *(char **)(lVar2 + 0x10) = "build://Sounds/Kraken.assetbundle/kraken_ftstp_01.mp3";
  *(char **)(lVar2 + 0x18) = "build://Sounds/Kraken.assetbundle/kraken_ftstp_02.mp3";
  *(char **)(lVar2 + 0x20) = "build://Sounds/Kraken.assetbundle/kraken_ftstp_03.mp3";
  *(char **)(lVar2 + 0x28) = "build://Sounds/Kraken.assetbundle/kraken_ftstp_04.mp3";
  lVar2 = FUN_10000e1b4();
  FUN_1003a985c(&local_40,lVar2);
  *(undefined8 *)(lVar2 + 0x40) = 0;
  *(ushort *)(lVar2 + 0x80) = *(ushort *)(lVar2 + 0x80) & 0xffef | 3;
  *(uint *)(lVar2 + 0x3c) = (uint)lVar2 & 0xffff;
  *(undefined8 *)(lVar2 + 0x20) = 0;
  *(undefined8 *)(lVar2 + 0x28) = 1;
  *(undefined4 *)(lVar2 + 0x10) = 0x1a876cbb;
  lVar2 = FUN_10000d8b8();
  FUN_1003a985c(&local_40,lVar2);
  *(undefined1 *)(lVar2 + 0x10) = 0;
  uVar3 = FUN_10000f034();
  FUN_1003a985c(&local_40,uVar3);
  return local_40;
}




undefined8 FUN_1003566a0(void)

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
  uVar1 = FUN_1004d2524("AltAttack");
  uVar1 = FUN_100015208("AltAttack",uVar1,0x12345678);
  *(undefined4 *)(lVar2 + 0x10) = uVar1;
  *(undefined4 *)(lVar2 + 0x20) = 0;
  lVar2 = FUN_10000e524();
  FUN_1003a985c(&local_40,lVar2);
  uVar3 = FUN_1010a1520();
  lVar4 = FUN_1010a0e0c(uVar3,0,"*KindredSoundBalance*",0);
  uVar1 = FUN_1003aa420(*(undefined4 *)(lVar4 + 0x104));
  *(undefined2 *)(lVar2 + 0x30) = 0x366;
  *(undefined4 *)(lVar2 + 0x40) = 0xffffffff;
  *(undefined4 *)(lVar2 + 0x34) = 1;
  *(undefined4 *)(lVar2 + 0x3c) = uVar1;
  *(byte *)(lVar2 + 0x38) = *(byte *)(lVar2 + 0x38) & 0xf8 | 4;
  *(undefined8 *)(lVar2 + 0x48) = 0;
  *(char **)(lVar2 + 0x10) = "build://Sounds/Kraken.assetbundle/kraken_ovrhnd_attack_vo_01.mp3";
  *(char **)(lVar2 + 0x18) = "build://Sounds/Kraken.assetbundle/kraken_ovrhnd_attack_vo_02.mp3";
  *(char **)(lVar2 + 0x20) = "build://Sounds/Kraken.assetbundle/kraken_ovrhnd_attack_vo_03.mp3";
  lVar2 = FUN_10000ceb8();
  FUN_1003a985c(&local_40,lVar2);
  *(undefined4 *)(lVar2 + 0x2c) = 0x3f99999a;
  *(undefined8 *)(lVar2 + 0x10) = 0;
  uVar3 = FUN_10000bc94();
  FUN_1003a985c(&local_40,uVar3);
  lVar2 = FUN_10000cae4();
  FUN_1003a985c(&local_40,lVar2);
  *(code **)(lVar2 + 0x10) = FUN_1003b4d30;
  lVar2 = FUN_10000e1b4();
  FUN_1003a985c(&local_40,lVar2);
  *(undefined8 *)(lVar2 + 0x40) = 0;
  *(ushort *)(lVar2 + 0x80) = *(ushort *)(lVar2 + 0x80) & 0xffef | 3;
  *(uint *)(lVar2 + 0x3c) = (uint)lVar2 & 0xffff;
  *(undefined8 *)(lVar2 + 0x20) = 0;
  *(undefined8 *)(lVar2 + 0x28) = 1;
  *(undefined4 *)(lVar2 + 0x10) = 0x66bd23e7;
  lVar2 = FUN_10000d8b8();
  FUN_1003a985c(&local_40,lVar2);
  *(undefined1 *)(lVar2 + 0x10) = 0;
  uVar3 = FUN_10000f034();
  FUN_1003a985c(&local_40,uVar3);
  return local_40;
}




undefined8 FUN_100356884(void)

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
  uVar1 = FUN_1004d2524("CritAttack");
  uVar1 = FUN_100015208("CritAttack",uVar1,0x12345678);
  *(undefined4 *)(lVar2 + 0x10) = uVar1;
  *(undefined4 *)(lVar2 + 0x20) = 0;
  lVar2 = FUN_10000e524();
  FUN_1003a985c(&local_40,lVar2);
  uVar3 = FUN_1010a1520();
  lVar4 = FUN_1010a0e0c(uVar3,0,"*KindredSoundBalance*",0);
  uVar1 = FUN_1003aa420(*(undefined4 *)(lVar4 + 0x104));
  *(undefined2 *)(lVar2 + 0x30) = 0x366;
  *(undefined4 *)(lVar2 + 0x40) = 0xffffffff;
  *(undefined4 *)(lVar2 + 0x34) = 1;
  *(undefined4 *)(lVar2 + 0x3c) = uVar1;
  *(byte *)(lVar2 + 0x38) = *(byte *)(lVar2 + 0x38) & 0xf8 | 4;
  *(undefined8 *)(lVar2 + 0x48) = 0;
  *(char **)(lVar2 + 0x10) = "build://Sounds/Kraken.assetbundle/kraken_ovrhnd_attack_vo_01.mp3";
  *(char **)(lVar2 + 0x18) = "build://Sounds/Kraken.assetbundle/kraken_ovrhnd_attack_vo_02.mp3";
  *(char **)(lVar2 + 0x20) = "build://Sounds/Kraken.assetbundle/kraken_ovrhnd_attack_vo_03.mp3";
  lVar2 = FUN_10000ceb8();
  FUN_1003a985c(&local_40,lVar2);
  *(undefined4 *)(lVar2 + 0x2c) = 0x3f8ccccd;
  *(undefined8 *)(lVar2 + 0x10) = 0;
  uVar3 = FUN_10000bc94();
  FUN_1003a985c(&local_40,uVar3);
  lVar2 = FUN_10000cae4();
  FUN_1003a985c(&local_40,lVar2);
  *(code **)(lVar2 + 0x10) = FUN_1003b4d30;
  lVar2 = FUN_10000e1b4();
  FUN_1003a985c(&local_40,lVar2);
  *(undefined8 *)(lVar2 + 0x40) = 0;
  *(ushort *)(lVar2 + 0x80) = *(ushort *)(lVar2 + 0x80) & 0xffef | 3;
  *(uint *)(lVar2 + 0x3c) = (uint)lVar2 & 0xffff;
  *(undefined8 *)(lVar2 + 0x20) = 0;
  *(undefined8 *)(lVar2 + 0x28) = 1;
  *(undefined4 *)(lVar2 + 0x10) = 0x603add09;
  lVar2 = FUN_10000d8b8();
  FUN_1003a985c(&local_40,lVar2);
  *(undefined1 *)(lVar2 + 0x10) = 0;
  uVar3 = FUN_10000f034();
  FUN_1003a985c(&local_40,uVar3);
  return local_40;
}




undefined8 FUN_100356a68(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
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
  uVar1 = FUN_1004d2524("Attack");
  uVar1 = FUN_100015208("Attack",uVar1,0x12345678);
  *(undefined4 *)(lVar3 + 0x10) = uVar1;
  uVar1 = FUN_1004d2524("AttackToIdle");
  uVar1 = FUN_100015208("AttackToIdle",uVar1,0x12345678);
  *(undefined4 *)(lVar3 + 0x20) = uVar1;
  lVar3 = FUN_10000ceb8();
  FUN_1003a985c(&local_40,lVar3);
  *(undefined4 *)(lVar3 + 0x2c) = 0x3f4ccccd;
  *(code **)(lVar3 + 0x10) = FUN_1003a24a0;
  plVar4 = (long *)thunk_FUN_10000f1a0();
  FUN_1003a985c(&local_40,plVar4);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x68))(plVar4);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x10))(0x3ecccccd);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x18))(0x3f000000);
  (**(code **)(*plVar4 + 0x20))(0x41700000);
  uVar2 = FUN_10000bc94();
  FUN_1003a985c(&local_40,uVar2);
  lVar3 = FUN_10000cae4();
  FUN_1003a985c(&local_40,lVar3);
  *(code **)(lVar3 + 0x10) = FUN_1003a3a5c;
  lVar3 = FUN_10000e524();
  FUN_1003a985c(&local_40,lVar3);
  uVar2 = FUN_1010a1520();
  lVar5 = FUN_1010a0e0c(uVar2,0,"*KindredSoundBalance*",0);
  uVar1 = FUN_1003aa420(*(undefined4 *)(lVar5 + 0x108));
  *(undefined2 *)(lVar3 + 0x30) = 0x3ff;
  *(undefined4 *)(lVar3 + 0x40) = 0xffffffff;
  *(undefined4 *)(lVar3 + 0x34) = 1;
  *(undefined4 *)(lVar3 + 0x3c) = uVar1;
  *(byte *)(lVar3 + 0x38) = *(byte *)(lVar3 + 0x38) & 0xf8 | 4;
  *(undefined8 *)(lVar3 + 0x48) = 0;
  *(char **)(lVar3 + 0x10) = "build://Sounds/Kraken.assetbundle/kraken_hits_turret_01.mp3";
  *(char **)(lVar3 + 0x18) = "build://Sounds/Kraken.assetbundle/kraken_hits_turret_02.mp3";
  *(char **)(lVar3 + 0x20) = "build://Sounds/Kraken.assetbundle/kraken_hits_turret_03.mp3";
  lVar3 = FUN_10000e1b4();
  FUN_1003a985c(&local_40,lVar3);
  *(undefined8 *)(lVar3 + 0x40) = 0;
  *(ushort *)(lVar3 + 0x80) = *(ushort *)(lVar3 + 0x80) & 0xffef | 3;
  *(uint *)(lVar3 + 0x3c) = (uint)lVar3 & 0xffff;
  *(undefined8 *)(lVar3 + 0x20) = 0;
  *(undefined8 *)(lVar3 + 0x28) = 1;
  *(undefined4 *)(lVar3 + 0x10) = 0xc3fb5cf5;
  uVar2 = FUN_10000f034();
  FUN_1003a985c(&local_40,uVar2);
  return local_40;
}




undefined8 FUN_100356ca0(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
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
  uVar1 = FUN_1004d2524("Attack_Alt");
  uVar1 = FUN_100015208("Attack_Alt",uVar1,0x12345678);
  *(undefined4 *)(lVar3 + 0x10) = uVar1;
  uVar1 = FUN_1004d2524("AttackToIdle");
  uVar1 = FUN_100015208("AttackToIdle",uVar1,0x12345678);
  *(undefined4 *)(lVar3 + 0x20) = uVar1;
  lVar3 = FUN_10000ceb8();
  FUN_1003a985c(&local_40,lVar3);
  *(undefined4 *)(lVar3 + 0x2c) = 0x3fa00000;
  *(code **)(lVar3 + 0x10) = FUN_1003a24a0;
  plVar4 = (long *)thunk_FUN_10000f1a0();
  FUN_1003a985c(&local_40,plVar4);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x68))(plVar4);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x10))(0x3ecccccd);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x18))(0x3f000000);
  (**(code **)(*plVar4 + 0x20))(0x41700000);
  uVar2 = FUN_10000bc94();
  FUN_1003a985c(&local_40,uVar2);
  lVar3 = FUN_10000cae4();
  FUN_1003a985c(&local_40,lVar3);
  *(code **)(lVar3 + 0x10) = FUN_1003a3a5c;
  lVar3 = FUN_10000e524();
  FUN_1003a985c(&local_40,lVar3);
  uVar2 = FUN_1010a1520();
  lVar5 = FUN_1010a0e0c(uVar2,0,"*KindredSoundBalance*",0);
  uVar1 = FUN_1003aa420(*(undefined4 *)(lVar5 + 0x108));
  *(undefined2 *)(lVar3 + 0x30) = 0x3ff;
  *(undefined4 *)(lVar3 + 0x40) = 0xffffffff;
  *(undefined4 *)(lVar3 + 0x34) = 1;
  *(undefined4 *)(lVar3 + 0x3c) = uVar1;
  *(byte *)(lVar3 + 0x38) = *(byte *)(lVar3 + 0x38) & 0xf8 | 4;
  *(undefined8 *)(lVar3 + 0x48) = 0;
  *(char **)(lVar3 + 0x10) = "build://Sounds/Kraken.assetbundle/kraken_hits_turret_01.mp3";
  *(char **)(lVar3 + 0x18) = "build://Sounds/Kraken.assetbundle/kraken_hits_turret_02.mp3";
  *(char **)(lVar3 + 0x20) = "build://Sounds/Kraken.assetbundle/kraken_hits_turret_03.mp3";
  lVar3 = FUN_10000e1b4();
  FUN_1003a985c(&local_40,lVar3);
  *(undefined8 *)(lVar3 + 0x40) = 0;
  *(ushort *)(lVar3 + 0x80) = *(ushort *)(lVar3 + 0x80) & 0xffef | 3;
  *(uint *)(lVar3 + 0x3c) = (uint)lVar3 & 0xffff;
  *(undefined8 *)(lVar3 + 0x20) = 0;
  *(undefined8 *)(lVar3 + 0x28) = 1;
  *(undefined4 *)(lVar3 + 0x10) = 0xdfdcdfd;
  uVar2 = FUN_10000f034();
  FUN_1003a985c(&local_40,uVar2);
  return local_40;
}




undefined8 FUN_100356ed4(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
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
  uVar1 = FUN_1004d2524("Attack_Crit");
  uVar1 = FUN_100015208("Attack_Crit",uVar1,0x12345678);
  *(undefined4 *)(lVar3 + 0x10) = uVar1;
  uVar1 = FUN_1004d2524("AttackToIdle");
  uVar1 = FUN_100015208("AttackToIdle",uVar1,0x12345678);
  *(undefined4 *)(lVar3 + 0x20) = uVar1;
  lVar3 = FUN_10000ceb8();
  FUN_1003a985c(&local_40,lVar3);
  *(undefined4 *)(lVar3 + 0x2c) = 0x3f800000;
  *(code **)(lVar3 + 0x10) = FUN_1003a24a0;
  plVar4 = (long *)thunk_FUN_10000f1a0();
  FUN_1003a985c(&local_40,plVar4);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x68))(plVar4);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x10))(0x3ecccccd);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x18))(0x3f000000);
  (**(code **)(*plVar4 + 0x20))(0x41700000);
  uVar2 = FUN_10000bc94();
  FUN_1003a985c(&local_40,uVar2);
  lVar3 = FUN_10000cae4();
  FUN_1003a985c(&local_40,lVar3);
  *(code **)(lVar3 + 0x10) = FUN_1003a3a5c;
  lVar3 = FUN_10000e524();
  FUN_1003a985c(&local_40,lVar3);
  uVar2 = FUN_1010a1520();
  lVar5 = FUN_1010a0e0c(uVar2,0,"*KindredSoundBalance*",0);
  uVar1 = FUN_1003aa420(*(undefined4 *)(lVar5 + 0x108));
  *(undefined2 *)(lVar3 + 0x30) = 0x3ff;
  *(undefined4 *)(lVar3 + 0x40) = 0xffffffff;
  *(undefined4 *)(lVar3 + 0x34) = 1;
  *(undefined4 *)(lVar3 + 0x3c) = uVar1;
  *(byte *)(lVar3 + 0x38) = *(byte *)(lVar3 + 0x38) & 0xf8 | 4;
  *(undefined8 *)(lVar3 + 0x48) = 0;
  *(char **)(lVar3 + 0x10) = "build://Sounds/Kraken.assetbundle/kraken_hits_turret_01.mp3";
  *(char **)(lVar3 + 0x18) = "build://Sounds/Kraken.assetbundle/kraken_hits_turret_02.mp3";
  *(char **)(lVar3 + 0x20) = "build://Sounds/Kraken.assetbundle/kraken_hits_turret_03.mp3";
  lVar3 = FUN_10000e1b4();
  FUN_1003a985c(&local_40,lVar3);
  *(undefined8 *)(lVar3 + 0x40) = 0;
  *(ushort *)(lVar3 + 0x80) = *(ushort *)(lVar3 + 0x80) & 0xffef | 3;
  *(uint *)(lVar3 + 0x3c) = (uint)lVar3 & 0xffff;
  *(undefined8 *)(lVar3 + 0x20) = 0;
  *(undefined8 *)(lVar3 + 0x28) = 1;
  *(undefined4 *)(lVar3 + 0x10) = 0xd97cd73f;
  uVar2 = FUN_10000f034();
  FUN_1003a985c(&local_40,uVar2);
  return local_40;
}




undefined8 FUN_100357108(void)

{
  undefined4 uVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 local_40;
  undefined8 uStack_38;
  
  local_40 = 0;
  uStack_38 = 0;
  lVar2 = FUN_10000dff8();
  FUN_1003a985c(&local_40,lVar2);
  *(undefined2 *)(lVar2 + 0x28) = 0x100;
  *(undefined8 *)(lVar2 + 0x30) = 0;
  uVar1 = FUN_1004d2524("Die");
  uVar1 = FUN_100015208("Die",uVar1,0x12345678);
  *(undefined4 *)(lVar2 + 0x10) = uVar1;
  *(undefined4 *)(lVar2 + 0x20) = 0;
  lVar2 = FUN_10000ceb8();
  FUN_1003a985c(&local_40,lVar2);
  *(undefined4 *)(lVar2 + 0x2c) = 0x40351eb8;
  *(undefined8 *)(lVar2 + 0x10) = 0;
  plVar3 = (long *)thunk_FUN_10000f1a0();
  FUN_1003a985c(&local_40,plVar3);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x68))(plVar3);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x10))(0x3ecccccd);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x18))(0x3e99999a);
  (**(code **)(*plVar3 + 0x20))(0x41700000);
  lVar2 = FUN_10000e1b4();
  FUN_1003a985c(&local_40,lVar2);
  *(undefined8 *)(lVar2 + 0x40) = 0;
  *(ushort *)(lVar2 + 0x80) = *(ushort *)(lVar2 + 0x80) & 0xffef | 3;
  *(uint *)(lVar2 + 0x3c) = (uint)lVar2 & 0xffff;
  *(undefined8 *)(lVar2 + 0x20) = 0;
  *(undefined8 *)(lVar2 + 0x28) = 1;
  *(undefined4 *)(lVar2 + 0x10) = 0x4773d02;
  lVar2 = FUN_10000ceb8();
  FUN_1003a985c(&local_40,lVar2);
  *(undefined4 *)(lVar2 + 0x2c) = 0x3ecccccd;
  *(undefined8 *)(lVar2 + 0x10) = 0;
  plVar3 = (long *)thunk_FUN_10000f1a0();
  FUN_1003a985c(&local_40,plVar3);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x68))(plVar3);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x10))(0x3ecccccd);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x18))(0x3e99999a);
  (**(code **)(*plVar3 + 0x20))(0x41700000);
  lVar2 = FUN_10000ceb8();
  FUN_1003a985c(&local_40,lVar2);
  *(undefined4 *)(lVar2 + 0x2c) = 0x3f99999a;
  *(undefined8 *)(lVar2 + 0x10) = 0;
  plVar3 = (long *)thunk_FUN_10000f1a0();
  FUN_1003a985c(&local_40,plVar3);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x68))(plVar3);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x10))(0x3e99999a);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x18))(0x3fd47ae1);
  (**(code **)(*plVar3 + 0x20))(0x41700000);
  lVar2 = FUN_10000ceb8();
  FUN_1003a985c(&local_40,lVar2);
  *(undefined4 *)(lVar2 + 0x2c) = 0x3fee147b;
  *(undefined8 *)(lVar2 + 0x10) = 0;
  plVar3 = (long *)thunk_FUN_10000f1a0();
  FUN_1003a985c(&local_40,plVar3);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x68))(plVar3);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x10))(0x3f4ccccd);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x18))(0x3f4ccccd);
  (**(code **)(*plVar3 + 0x20))(0x41a00000);
  lVar2 = FUN_10000ceb8();
  FUN_1003a985c(&local_40,lVar2);
  *(undefined4 *)(lVar2 + 0x2c) = 0x3fee147b;
  *(undefined8 *)(lVar2 + 0x10) = 0;
  uVar4 = FUN_10000bb2c();
  FUN_1003a985c(&local_40,uVar4);
  plVar3 = (long *)thunk_FUN_10000c1fc();
  FUN_1003a985c(&local_40,plVar3);
  (**(code **)(*plVar3 + 0x58))(0x40000000,plVar3);
  uVar4 = FUN_10000c784();
  FUN_1003a985c(&local_40,uVar4);
  lVar2 = FUN_10000ceb8();
  FUN_1003a985c(&local_40,lVar2);
  *(undefined4 *)(lVar2 + 0x2c) = 0x40000000;
  *(undefined8 *)(lVar2 + 0x10) = 0;
  uVar4 = FUN_10000d9a0();
  FUN_1003a985c(&local_40,uVar4);
  return local_40;
}




undefined8 FUN_100357458(void)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 local_40;
  undefined8 uStack_38;
  
  local_40 = 0;
  uStack_38 = 0;
  lVar2 = FUN_10000dff8();
  FUN_1003a985c(&local_40,lVar2);
  *(undefined2 *)(lVar2 + 0x28) = 0x100;
  *(undefined8 *)(lVar2 + 0x30) = 0;
  uVar1 = FUN_1004d2524("Spawn");
  uVar1 = FUN_100015208("Spawn",uVar1,0x12345678);
  *(undefined4 *)(lVar2 + 0x10) = uVar1;
  uVar1 = FUN_1004d2524("AttackToIdle");
  uVar1 = FUN_100015208("AttackToIdle",uVar1,0x12345678);
  *(undefined4 *)(lVar2 + 0x20) = uVar1;
  lVar2 = FUN_10000e1b4();
  FUN_1003a985c(&local_40,lVar2);
  *(undefined8 *)(lVar2 + 0x40) = 0;
  *(ushort *)(lVar2 + 0x80) = *(ushort *)(lVar2 + 0x80) & 0xffef | 3;
  *(uint *)(lVar2 + 0x3c) = (uint)lVar2 & 0xffff;
  *(undefined8 *)(lVar2 + 0x20) = 0;
  *(undefined8 *)(lVar2 + 0x28) = 1;
  *(undefined4 *)(lVar2 + 0x10) = 0xe023720f;
  lVar2 = FUN_10000ceb8();
  FUN_1003a985c(&local_40,lVar2);
  *(undefined4 *)(lVar2 + 0x2c) = 0x40900000;
  *(undefined8 *)(lVar2 + 0x10) = 0;
  lVar2 = FUN_10000e524();
  FUN_1003a985c(&local_40,lVar2);
  *(char **)(lVar2 + 0x10) = "build://Sounds/Kraken.assetbundle/kraken_spawn_roar.mp3";
  *(undefined2 *)(lVar2 + 0x30) = 0x1ff;
  *(undefined4 *)(lVar2 + 0x34) = 1;
  *(undefined8 *)(lVar2 + 0x3c) = 0xffffffff3f4ccccd;
  *(byte *)(lVar2 + 0x38) = *(byte *)(lVar2 + 0x38) & 0xf8 | 4;
  *(undefined8 *)(lVar2 + 0x48) = 0;
  lVar2 = FUN_10000ceb8();
  FUN_1003a985c(&local_40,lVar2);
  *(undefined4 *)(lVar2 + 0x2c) = 0x40800000;
  *(undefined8 *)(lVar2 + 0x10) = 0;
  lVar2 = FUN_10000e524();
  FUN_1003a985c(&local_40,lVar2);
  *(char **)(lVar2 + 0x10) = "build://Sounds/Kraken.assetbundle/kraken_spawn_gutterals.mp3";
  *(undefined2 *)(lVar2 + 0x30) = 0x1ff;
  *(undefined4 *)(lVar2 + 0x34) = 1;
  *(undefined8 *)(lVar2 + 0x3c) = 0xffffffff3f333333;
  *(byte *)(lVar2 + 0x38) = *(byte *)(lVar2 + 0x38) & 0xf8 | 4;
  *(undefined8 *)(lVar2 + 0x48) = 0;
  uVar3 = FUN_10000f034();
  FUN_1003a985c(&local_40,uVar3);
  return local_40;
}




undefined8 FUN_100357620(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 local_40;
  undefined8 uStack_38;
  
  local_40 = 0;
  uStack_38 = 0;
  uVar2 = FUN_10000bb2c();
  FUN_1003a985c(&local_40,uVar2);
  lVar3 = FUN_10000dff8();
  FUN_1003a985c(&local_40,lVar3);
  *(undefined2 *)(lVar3 + 0x28) = 0x100;
  *(undefined8 *)(lVar3 + 0x30) = 0;
  uVar1 = FUN_1004d2524("Spawn");
  uVar1 = FUN_100015208("Spawn",uVar1,0x12345678);
  *(undefined4 *)(lVar3 + 0x10) = uVar1;
  uVar1 = FUN_1004d2524("AttackToIdle");
  uVar1 = FUN_100015208("AttackToIdle",uVar1,0x12345678);
  *(undefined4 *)(lVar3 + 0x20) = uVar1;
  lVar3 = FUN_10000ceb8();
  FUN_1003a985c(&local_40,lVar3);
  *(undefined4 *)(lVar3 + 0x2c) = 0x3fe66666;
  *(undefined8 *)(lVar3 + 0x10) = 0;
  lVar3 = FUN_10000e524();
  FUN_1003a985c(&local_40,lVar3);
  *(char **)(lVar3 + 0x10) = "build://Sounds/Kraken.assetbundle/kraken_captured_1stroar.mp3";
  *(undefined2 *)(lVar3 + 0x30) = 0x1ff;
  *(undefined4 *)(lVar3 + 0x34) = 1;
  *(undefined8 *)(lVar3 + 0x3c) = 0xffffffff3f4ccccd;
  *(byte *)(lVar3 + 0x38) = *(byte *)(lVar3 + 0x38) & 0xf8 | 4;
  *(undefined8 *)(lVar3 + 0x48) = 0;
  lVar3 = FUN_10000ceb8();
  FUN_1003a985c(&local_40,lVar3);
  *(undefined4 *)(lVar3 + 0x2c) = 0x40800000;
  *(undefined8 *)(lVar3 + 0x10) = 0;
  lVar3 = FUN_10000e524();
  FUN_1003a985c(&local_40,lVar3);
  *(char **)(lVar3 + 0x10) = "build://Sounds/Kraken.assetbundle/kraken_captured_2ndroar.mp3";
  *(undefined2 *)(lVar3 + 0x30) = 0x1ff;
  *(undefined4 *)(lVar3 + 0x34) = 1;
  *(undefined8 *)(lVar3 + 0x3c) = 0xffffffff3f4ccccd;
  *(byte *)(lVar3 + 0x38) = *(byte *)(lVar3 + 0x38) & 0xf8 | 4;
  *(undefined8 *)(lVar3 + 0x48) = 0;
  lVar3 = FUN_10000ceb8();
  FUN_1003a985c(&local_40,lVar3);
  *(undefined4 *)(lVar3 + 0x2c) = 0x40200000;
  *(undefined8 *)(lVar3 + 0x10) = 0;
  uVar2 = FUN_10000f034();
  FUN_1003a985c(&local_40,uVar2);
  return local_40;
}




undefined8 FUN_1003577d4(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 local_40;
  undefined8 uStack_38;
  
  local_40 = 0;
  uStack_38 = 0;
  uVar2 = FUN_10000bb2c();
  FUN_1003a985c(&local_40,uVar2);
  lVar3 = FUN_10000dff8();
  FUN_1003a985c(&local_40,lVar3);
  *(undefined2 *)(lVar3 + 0x28) = 0x101;
  *(undefined8 *)(lVar3 + 0x30) = 0;
  uVar1 = FUN_1004d2524("VictoryRoar");
  uVar1 = FUN_100015208("VictoryRoar",uVar1,0x12345678);
  *(undefined4 *)(lVar3 + 0x10) = uVar1;
  *(undefined4 *)(lVar3 + 0x20) = 0;
  lVar3 = FUN_10000ceb8();
  FUN_1003a985c(&local_40,lVar3);
  *(undefined4 *)(lVar3 + 0x2c) = 0x3fcccccd;
  *(undefined8 *)(lVar3 + 0x10) = 0;
  lVar3 = FUN_10000e524();
  FUN_1003a985c(&local_40,lVar3);
  *(char **)(lVar3 + 0x10) = "build://Sounds/Kraken.assetbundle/kraken_endgame_roar1.mp3";
  *(undefined2 *)(lVar3 + 0x30) = 0x1ff;
  *(undefined4 *)(lVar3 + 0x34) = 1;
  *(undefined8 *)(lVar3 + 0x3c) = 0xffffffff3f4ccccd;
  *(byte *)(lVar3 + 0x38) = *(byte *)(lVar3 + 0x38) & 0xf8 | 4;
  *(undefined8 *)(lVar3 + 0x48) = 0;
  lVar3 = FUN_10000ceb8();
  FUN_1003a985c(&local_40,lVar3);
  *(undefined4 *)(lVar3 + 0x2c) = 0x40900000;
  *(undefined8 *)(lVar3 + 0x10) = 0;
  lVar3 = FUN_10000e524();
  FUN_1003a985c(&local_40,lVar3);
  *(char **)(lVar3 + 0x10) = "build://Sounds/Kraken.assetbundle/kraken_endgame_roar2.mp3";
  *(undefined2 *)(lVar3 + 0x30) = 0x1ff;
  *(undefined4 *)(lVar3 + 0x34) = 1;
  *(undefined8 *)(lVar3 + 0x3c) = 0xffffffff3f000000;
  *(byte *)(lVar3 + 0x38) = *(byte *)(lVar3 + 0x38) & 0xf8 | 4;
  *(undefined8 *)(lVar3 + 0x48) = 0;
  uVar2 = FUN_10000c784();
  FUN_1003a985c(&local_40,uVar2);
  return local_40;
}




void FUN_10035794c(void)

{
  FUN_1003b4da4("Attack","Effect_Kraken_Attack2_Impact",
                &PTR_s_build___Sounds_Kraken_assetbundl_10185acc8,3,FUN_1003a3a5c);
  return;
}




void FUN_100357974(void)

{
  FUN_1003b4da4("Attack_Alt","Effect_Kraken_Attack2_Impact",
                &PTR_s_build___Sounds_Kraken_assetbundl_10185acc8,3,FUN_1003a3a5c);
  return;
}




void FUN_10035799c(void)

{
  FUN_1003b4da4("Attack_Crit","Effect_Kraken_Attack2_Impact",
                &PTR_s_build___Sounds_Kraken_assetbundl_10185acc8,3,FUN_1003a3acc);
  return;
}




void FUN_1003579c4(void)

{
  FUN_1003a552c(0x3f800000,0x3f000000,"Attack","Effect_Blackclaw_Cleave",
                &PTR_s_build___Sounds_5v5_SFX_sfx_black_10185a470,3,FUN_1003a3a5c,0);
  return;
}




void FUN_1003579f8(void)

{
  FUN_1003a552c(0x3f800000,0x3f000000,"Attack_Alt","Effect_Blackclaw_Cleave_Alt",
                &PTR_s_build___Sounds_5v5_SFX_sfx_black_10185a470,3,FUN_1003a3a5c,0);
  return;
}




void FUN_100357a2c(void)

{
  FUN_1003a552c(0x3f800000,0x3f000000,"Attack_Crit","Effect_Blackclaw_Cleave",
                &PTR_s_build___Sounds_5v5_SFX_sfx_black_10185a470,3,FUN_1003a3acc,0);
  return;
}




undefined8 FUN_100357a60(void)

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
  lVar2 = FUN_10000dff8();
  FUN_1003a985c(&local_50,lVar2);
  *(undefined2 *)(lVar2 + 0x28) = 0x100;
  *(undefined8 *)(lVar2 + 0x30) = 0;
  uVar1 = FUN_1004d2524("FireBreath");
  uVar1 = FUN_100015208("FireBreath",uVar1,0x12345678);
  *(undefined4 *)(lVar2 + 0x10) = uVar1;
  uVar1 = FUN_1004d2524("AttackToIdle");
  uVar1 = FUN_100015208("AttackToIdle",uVar1,0x12345678);
  *(undefined4 *)(lVar2 + 0x20) = uVar1;
  lVar2 = FUN_10000e524();
  FUN_1003a985c(&local_50,lVar2);
  *(char **)(lVar2 + 0x10) = "build://Sounds/5v5/SFX/sfx_blackclaw_breath_attack_in.mp3";
  *(undefined2 *)(lVar2 + 0x30) = 0x1ff;
  *(undefined4 *)(lVar2 + 0x34) = 1;
  *(undefined8 *)(lVar2 + 0x3c) = 0xffffffff3f800000;
  *(byte *)(lVar2 + 0x38) = *(byte *)(lVar2 + 0x38) & 0xf8 | 4;
  *(undefined8 *)(lVar2 + 0x48) = 0;
  lVar2 = FUN_10000ceb8();
  FUN_1003a985c(&local_50,lVar2);
  *(undefined4 *)(lVar2 + 0x2c) = 0x400eb852;
  *(undefined8 *)(lVar2 + 0x10) = 0;
  lVar2 = FUN_10000e524();
  FUN_1003a985c(&local_50,lVar2);
  *(char **)(lVar2 + 0x10) = "build://Sounds/5v5/SFX/sfx_blackclaw_breath_attack_out.mp3";
  *(undefined2 *)(lVar2 + 0x30) = 0x1ff;
  *(undefined4 *)(lVar2 + 0x34) = 1;
  *(undefined8 *)(lVar2 + 0x3c) = 0xffffffff3f800000;
  *(byte *)(lVar2 + 0x38) = *(byte *)(lVar2 + 0x38) & 0xf8 | 4;
  *(undefined8 *)(lVar2 + 0x48) = 0;
  plVar4 = (long *)thunk_FUN_10000e358();
  FUN_1003a985c(&local_50,plVar4);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x58))(plVar4);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x48))(plVar4,"Effect_Blackclaw_BreathSelf");
  local_60[0] = 0x3fb33333;
  local_58 = 1;
  plVar4 = (long *)(**(code **)(*plVar4 + 0x60))(plVar4,local_60);
  (**(code **)(*plVar4 + 0x78))(plVar4,1);
  lVar2 = FUN_10000f250();
  FUN_1003a985c(&local_50,lVar2);
  *(undefined4 *)(lVar2 + 0x10) = 0x3b;
  FUN_1003d266c(lVar2,"Mouth");
  lVar2 = FUN_10000f250();
  FUN_1003a985c(&local_50,lVar2);
  *(undefined4 *)(lVar2 + 0x10) = 0x3a;
  FUN_1003d266c(lVar2,"Mouth");
  lVar2 = FUN_10000ceb8();
  FUN_1003a985c(&local_50,lVar2);
  *(undefined4 *)(lVar2 + 0x2c) = 0x3e4ccccd;
  *(undefined8 *)(lVar2 + 0x10) = 0;
  lVar2 = FUN_10000f250();
  FUN_1003a985c(&local_50,lVar2);
  *(undefined4 *)(lVar2 + 0x10) = 0x3b;
  FUN_1003d266c(lVar2,"Mouth");
  lVar2 = FUN_10000f250();
  FUN_1003a985c(&local_50,lVar2);
  *(undefined4 *)(lVar2 + 0x10) = 0x3a;
  FUN_1003d266c(lVar2,"Mouth");
  lVar2 = FUN_10000ceb8();
  FUN_1003a985c(&local_50,lVar2);
  *(undefined4 *)(lVar2 + 0x2c) = 0x3e4ccccd;
  *(undefined8 *)(lVar2 + 0x10) = 0;
  lVar2 = FUN_10000f250();
  FUN_1003a985c(&local_50,lVar2);
  *(undefined4 *)(lVar2 + 0x10) = 0x3b;
  FUN_1003d266c(lVar2,"Mouth");
  lVar2 = FUN_10000f250();
  FUN_1003a985c(&local_50,lVar2);
  *(undefined4 *)(lVar2 + 0x10) = 0x3a;
  FUN_1003d266c(lVar2,"Mouth");
  lVar2 = FUN_10000ceb8();
  FUN_1003a985c(&local_50,lVar2);
  *(undefined4 *)(lVar2 + 0x2c) = 0x3e4ccccd;
  *(undefined8 *)(lVar2 + 0x10) = 0;
  lVar2 = FUN_10000f250();
  FUN_1003a985c(&local_50,lVar2);
  *(undefined4 *)(lVar2 + 0x10) = 0x3b;
  FUN_1003d266c(lVar2,"Mouth");
  lVar2 = FUN_10000f250();
  FUN_1003a985c(&local_50,lVar2);
  *(undefined4 *)(lVar2 + 0x10) = 0x3a;
  FUN_1003d266c(lVar2,"Mouth");
  lVar2 = FUN_10000ceb8();
  FUN_1003a985c(&local_50,lVar2);
  *(undefined4 *)(lVar2 + 0x2c) = 0x3e4ccccd;
  *(undefined8 *)(lVar2 + 0x10) = 0;
  lVar2 = FUN_10000f250();
  FUN_1003a985c(&local_50,lVar2);
  *(undefined4 *)(lVar2 + 0x10) = 0x3b;
  FUN_1003d266c(lVar2,"Mouth");
  lVar2 = FUN_10000f250();
  FUN_1003a985c(&local_50,lVar2);
  *(undefined4 *)(lVar2 + 0x10) = 0x3a;
  FUN_1003d266c(lVar2,"Mouth");
  lVar2 = FUN_10000ceb8();
  FUN_1003a985c(&local_50,lVar2);
  *(undefined4 *)(lVar2 + 0x2c) = 0x3e4ccccd;
  *(undefined8 *)(lVar2 + 0x10) = 0;
  lVar2 = FUN_10000f250();
  FUN_1003a985c(&local_50,lVar2);
  *(undefined4 *)(lVar2 + 0x10) = 0x3b;
  FUN_1003d266c(lVar2,"Mouth");
  lVar2 = FUN_10000f250();
  FUN_1003a985c(&local_50,lVar2);
  *(undefined4 *)(lVar2 + 0x10) = 0x3a;
  FUN_1003d266c(lVar2,"Mouth");
  lVar2 = FUN_10000ceb8();
  FUN_1003a985c(&local_50,lVar2);
  *(undefined4 *)(lVar2 + 0x2c) = 0x3e4ccccd;
  *(undefined8 *)(lVar2 + 0x10) = 0;
  lVar2 = FUN_10000f250();
  FUN_1003a985c(&local_50,lVar2);
  *(undefined4 *)(lVar2 + 0x10) = 0x3b;
  FUN_1003d266c(lVar2,"Mouth");
  lVar2 = FUN_10000f250();
  FUN_1003a985c(&local_50,lVar2);
  *(undefined4 *)(lVar2 + 0x10) = 0x3a;
  FUN_1003d266c(lVar2,"Mouth");
  lVar2 = FUN_10000ceb8();
  FUN_1003a985c(&local_50,lVar2);
  *(undefined4 *)(lVar2 + 0x2c) = 0x3e4ccccd;
  *(undefined8 *)(lVar2 + 0x10) = 0;
  lVar2 = FUN_10000f250();
  FUN_1003a985c(&local_50,lVar2);
  *(undefined4 *)(lVar2 + 0x10) = 0x3b;
  FUN_1003d266c(lVar2,"Mouth");
  lVar2 = FUN_10000f250();
  FUN_1003a985c(&local_50,lVar2);
  *(undefined4 *)(lVar2 + 0x10) = 0x3a;
  FUN_1003d266c(lVar2,"Mouth");
  lVar2 = FUN_10000ceb8();
  FUN_1003a985c(&local_50,lVar2);
  *(undefined4 *)(lVar2 + 0x2c) = 0x3e4ccccd;
  *(undefined8 *)(lVar2 + 0x10) = 0;
  lVar2 = FUN_10000f250();
  FUN_1003a985c(&local_50,lVar2);
  *(undefined4 *)(lVar2 + 0x10) = 0x3b;
  FUN_1003d266c(lVar2,"Mouth");
  lVar2 = FUN_10000f250();
  FUN_1003a985c(&local_50,lVar2);
  *(undefined4 *)(lVar2 + 0x10) = 0x3a;
  FUN_1003d266c(lVar2,"Mouth");
  uVar3 = FUN_10000f034();
  FUN_1003a985c(&local_50,uVar3);
  lVar2 = FUN_10000d8b8();
  FUN_1003a985c(&local_50,lVar2);
  *(undefined1 *)(lVar2 + 0x10) = 0;
  return local_50;
}




void FUN_100357ff4(void)

{
  FUN_1003a5a20(0x3f800000,0x3f000000,"Attack","Effect_Blackclaw_Cleave",
                &PTR_s_build___Sounds_5v5_SFX_sfx_black_10185a488,2,FUN_1003a3a5c,0);
  return;
}




void FUN_100358028(void)

{
  FUN_1003a5a20(0x3f800000,0x3e428f5c,"Attack_Alt","Effect_Blackclaw_Cleave_Alt",
                &PTR_s_build___Sounds_5v5_SFX_sfx_black_10185a498,1,FUN_1003a3a5c,0);
  return;
}




void FUN_100358060(void)

{
  FUN_1003a5a20(0x3f800000,0x3f000000,"Attack_Crit","Effect_Blackclaw_Cleave",
                &PTR_s_build___Sounds_5v5_SFX_sfx_black_10185a488,2,FUN_1003a3acc,0);
  return;
}




undefined8 FUN_100358094(void)

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
  lVar2 = FUN_10000dff8();
  FUN_1003a985c(&local_50,lVar2);
  *(undefined2 *)(lVar2 + 0x28) = 0x100;
  *(undefined8 *)(lVar2 + 0x30) = 0;
  uVar1 = FUN_1004d2524("FireBreath");
  uVar1 = FUN_100015208("FireBreath",uVar1,0x12345678);
  *(undefined4 *)(lVar2 + 0x10) = uVar1;
  uVar1 = FUN_1004d2524("AttackToIdle");
  uVar1 = FUN_100015208("AttackToIdle",uVar1,0x12345678);
  *(undefined4 *)(lVar2 + 0x20) = uVar1;
  lVar2 = FUN_10000e524();
  FUN_1003a985c(&local_50,lVar2);
  *(char **)(lVar2 + 0x10) =
       "build://Sounds/5v5/SFX/sfx_blackclaw_turret_attacks_breath_attack_breathe_in.mp3";
  *(undefined2 *)(lVar2 + 0x30) = 0x1ff;
  *(undefined4 *)(lVar2 + 0x34) = 1;
  *(undefined8 *)(lVar2 + 0x3c) = 0xffffffff3f800000;
  *(byte *)(lVar2 + 0x38) = *(byte *)(lVar2 + 0x38) & 0xf8 | 4;
  *(undefined8 *)(lVar2 + 0x48) = 0;
  lVar2 = FUN_10000ceb8();
  FUN_1003a985c(&local_50,lVar2);
  *(undefined4 *)(lVar2 + 0x2c) = 0x3ff33333;
  *(undefined8 *)(lVar2 + 0x10) = 0;
  lVar2 = FUN_10000e524();
  FUN_1003a985c(&local_50,lVar2);
  *(char **)(lVar2 + 0x10) =
       "build://Sounds/5v5/SFX/sfx_blackclaw_turret_attacks_breath_attack_breathe_out.mp3";
  *(undefined2 *)(lVar2 + 0x30) = 0x1ff;
  *(undefined4 *)(lVar2 + 0x34) = 1;
  *(undefined8 *)(lVar2 + 0x3c) = 0xffffffff3f800000;
  *(byte *)(lVar2 + 0x38) = *(byte *)(lVar2 + 0x38) & 0xf8 | 4;
  *(undefined8 *)(lVar2 + 0x48) = 0;
  plVar4 = (long *)thunk_FUN_10000e358();
  FUN_1003a985c(&local_50,plVar4);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x58))(plVar4);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x48))(plVar4,"Effect_Blackclaw_Lane_BreathSelf");
  local_60[0] = 0x3fc00000;
  local_58 = 1;
  plVar4 = (long *)(**(code **)(*plVar4 + 0x60))(plVar4,local_60);
  (**(code **)(*plVar4 + 0x78))(plVar4,1);
  lVar2 = FUN_10000f250();
  FUN_1003a985c(&local_50,lVar2);
  *(undefined4 *)(lVar2 + 0x10) = 0x3b;
  FUN_1003d266c(lVar2,"Mouth");
  lVar2 = FUN_10000f250();
  FUN_1003a985c(&local_50,lVar2);
  *(undefined4 *)(lVar2 + 0x10) = 0x3a;
  FUN_1003d266c(lVar2,"Mouth");
  lVar2 = FUN_10000ceb8();
  FUN_1003a985c(&local_50,lVar2);
  *(undefined4 *)(lVar2 + 0x2c) = 0x3e4ccccd;
  *(undefined8 *)(lVar2 + 0x10) = 0;
  lVar2 = FUN_10000f250();
  FUN_1003a985c(&local_50,lVar2);
  *(undefined4 *)(lVar2 + 0x10) = 0x3b;
  FUN_1003d266c(lVar2,"Mouth");
  lVar2 = FUN_10000f250();
  FUN_1003a985c(&local_50,lVar2);
  *(undefined4 *)(lVar2 + 0x10) = 0x3a;
  FUN_1003d266c(lVar2,"Mouth");
  lVar2 = FUN_10000ceb8();
  FUN_1003a985c(&local_50,lVar2);
  *(undefined4 *)(lVar2 + 0x2c) = 0x3e4ccccd;
  *(undefined8 *)(lVar2 + 0x10) = 0;
  lVar2 = FUN_10000f250();
  FUN_1003a985c(&local_50,lVar2);
  *(undefined4 *)(lVar2 + 0x10) = 0x3b;
  FUN_1003d266c(lVar2,"Mouth");
  lVar2 = FUN_10000f250();
  FUN_1003a985c(&local_50,lVar2);
  *(undefined4 *)(lVar2 + 0x10) = 0x3a;
  FUN_1003d266c(lVar2,"Mouth");
  lVar2 = FUN_10000ceb8();
  FUN_1003a985c(&local_50,lVar2);
  *(undefined4 *)(lVar2 + 0x2c) = 0x3e4ccccd;
  *(undefined8 *)(lVar2 + 0x10) = 0;
  lVar2 = FUN_10000f250();
  FUN_1003a985c(&local_50,lVar2);
  *(undefined4 *)(lVar2 + 0x10) = 0x3b;
  FUN_1003d266c(lVar2,"Mouth");
  lVar2 = FUN_10000f250();
  FUN_1003a985c(&local_50,lVar2);
  *(undefined4 *)(lVar2 + 0x10) = 0x3a;
  FUN_1003d266c(lVar2,"Mouth");
  lVar2 = FUN_10000ceb8();
  FUN_1003a985c(&local_50,lVar2);
  *(undefined4 *)(lVar2 + 0x2c) = 0x3e4ccccd;
  *(undefined8 *)(lVar2 + 0x10) = 0;
  lVar2 = FUN_10000f250();
  FUN_1003a985c(&local_50,lVar2);
  *(undefined4 *)(lVar2 + 0x10) = 0x3b;
  FUN_1003d266c(lVar2,"Mouth");
  lVar2 = FUN_10000f250();
  FUN_1003a985c(&local_50,lVar2);
  *(undefined4 *)(lVar2 + 0x10) = 0x3a;
  FUN_1003d266c(lVar2,"Mouth");
  lVar2 = FUN_10000ceb8();
  FUN_1003a985c(&local_50,lVar2);
  *(undefined4 *)(lVar2 + 0x2c) = 0x3e4ccccd;
  *(undefined8 *)(lVar2 + 0x10) = 0;
  lVar2 = FUN_10000f250();
  FUN_1003a985c(&local_50,lVar2);
  *(undefined4 *)(lVar2 + 0x10) = 0x3b;
  FUN_1003d266c(lVar2,"Mouth");
  lVar2 = FUN_10000f250();
  FUN_1003a985c(&local_50,lVar2);
  *(undefined4 *)(lVar2 + 0x10) = 0x3a;
  FUN_1003d266c(lVar2,"Mouth");
  lVar2 = FUN_10000ceb8();
  FUN_1003a985c(&local_50,lVar2);
  *(undefined4 *)(lVar2 + 0x2c) = 0x3e4ccccd;
  *(undefined8 *)(lVar2 + 0x10) = 0;
  lVar2 = FUN_10000f250();
  FUN_1003a985c(&local_50,lVar2);
  *(undefined4 *)(lVar2 + 0x10) = 0x3b;
  FUN_1003d266c(lVar2,"Mouth");
  lVar2 = FUN_10000f250();
  FUN_1003a985c(&local_50,lVar2);
  *(undefined4 *)(lVar2 + 0x10) = 0x3a;
  FUN_1003d266c(lVar2,"Mouth");
  lVar2 = FUN_10000ceb8();
  FUN_1003a985c(&local_50,lVar2);
  *(undefined4 *)(lVar2 + 0x2c) = 0x3e4ccccd;
  *(undefined8 *)(lVar2 + 0x10) = 0;
  lVar2 = FUN_10000f250();
  FUN_1003a985c(&local_50,lVar2);
  *(undefined4 *)(lVar2 + 0x10) = 0x3b;
  FUN_1003d266c(lVar2,"Mouth");
  lVar2 = FUN_10000f250();
  FUN_1003a985c(&local_50,lVar2);
  *(undefined4 *)(lVar2 + 0x10) = 0x3a;
  FUN_1003d266c(lVar2,"Mouth");
  lVar2 = FUN_10000ceb8();
  FUN_1003a985c(&local_50,lVar2);
  *(undefined4 *)(lVar2 + 0x2c) = 0x3e4ccccd;
  *(undefined8 *)(lVar2 + 0x10) = 0;
  lVar2 = FUN_10000f250();
  FUN_1003a985c(&local_50,lVar2);
  *(undefined4 *)(lVar2 + 0x10) = 0x3b;
  FUN_1003d266c(lVar2,"Mouth");
  lVar2 = FUN_10000f250();
  FUN_1003a985c(&local_50,lVar2);
  *(undefined4 *)(lVar2 + 0x10) = 0x3a;
  FUN_1003d266c(lVar2,"Mouth");
  uVar3 = FUN_10000f034();
  FUN_1003a985c(&local_50,uVar3);
  lVar2 = FUN_10000d8b8();
  FUN_1003a985c(&local_50,lVar2);
  *(undefined1 *)(lVar2 + 0x10) = 0;
  return local_50;
}




undefined8 FUN_100358624(void)

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
  lVar2 = FUN_10000dff8();
  FUN_1003a985c(&local_40,lVar2);
  *(undefined2 *)(lVar2 + 0x28) = 0x100;
  *(undefined8 *)(lVar2 + 0x30) = 0;
  uVar1 = FUN_1004d2524("Spawn");
  uVar1 = FUN_100015208("Spawn",uVar1,0x12345678);
  *(undefined4 *)(lVar2 + 0x10) = uVar1;
  uVar1 = FUN_1004d2524("AttackToIdle");
  uVar1 = FUN_100015208("AttackToIdle",uVar1,0x12345678);
  *(undefined4 *)(lVar2 + 0x20) = uVar1;
  lVar2 = FUN_10000e524();
  FUN_1003a985c(&local_40,lVar2);
  *(char **)(lVar2 + 0x10) = "build://Sounds/5v5/SFX/sfx_ghostwing_spawn_fly_in.mp3";
  *(undefined2 *)(lVar2 + 0x30) = 0x1ff;
  *(undefined4 *)(lVar2 + 0x34) = 1;
  *(undefined8 *)(lVar2 + 0x3c) = 0xffffffff3f800000;
  *(byte *)(lVar2 + 0x38) = *(byte *)(lVar2 + 0x38) & 0xf8 | 4;
  *(undefined8 *)(lVar2 + 0x48) = 0;
  uVar3 = FUN_10000bb2c();
  FUN_1003a985c(&local_40,uVar3);
  lVar2 = FUN_10000bd3c();
  FUN_1003a985c(&local_40,lVar2);
  *(undefined **)(lVar2 + 0x10) = PTR_s_Buff_Kraken5v5_BlackclawUncaptur_10185a4a0;
  *(undefined4 *)(lVar2 + 0x18) = 0x40a00000;
  *(undefined2 *)(lVar2 + 0x68) = 1;
  *(byte *)(lVar2 + 0x6a) = *(byte *)(lVar2 + 0x6a) & 0xfe;
  lVar2 = FUN_10000bd3c();
  FUN_1003a985c(&local_40,lVar2);
  *(undefined **)(lVar2 + 0x10) = PTR_s_Buff_GloballyVisibleTrueSight_5v_10185a4a8;
  *(undefined4 *)(lVar2 + 0x18) = 0x409ccccd;
  *(undefined2 *)(lVar2 + 0x68) = 1;
  *(byte *)(lVar2 + 0x6a) = *(byte *)(lVar2 + 0x6a) & 0xfe;
  uVar3 = FUN_10000c784();
  FUN_1003a985c(&local_40,uVar3);
  lVar2 = FUN_10000ceb8();
  FUN_1003a985c(&local_40,lVar2);
  *(undefined4 *)(lVar2 + 0x2c) = 0x40266666;
  *(undefined8 *)(lVar2 + 0x10) = 0;
  lVar2 = FUN_10000e524();
  FUN_1003a985c(&local_40,lVar2);
  *(char **)(lVar2 + 0x10) = "build://Sounds/5v5/SFX/sfx_ghostwing_spawn_landing.mp3";
  *(undefined2 *)(lVar2 + 0x30) = 0x1ff;
  *(undefined4 *)(lVar2 + 0x34) = 1;
  *(undefined8 *)(lVar2 + 0x3c) = 0xffffffff3f19999a;
  *(byte *)(lVar2 + 0x38) = *(byte *)(lVar2 + 0x38) & 0xf8 | 4;
  *(undefined8 *)(lVar2 + 0x48) = 0;
  lVar2 = FUN_10000ceb8();
  FUN_1003a985c(&local_40,lVar2);
  *(undefined4 *)(lVar2 + 0x2c) = 0x3f4ccccd;
  *(undefined8 *)(lVar2 + 0x10) = 0;
  lVar2 = FUN_10000e524();
  FUN_1003a985c(&local_40,lVar2);
  *(char **)(lVar2 + 0x10) = "build://Sounds/5v5/SFX/sfx_ghostwing_spawn_global_roar.mp3";
  *(undefined2 *)(lVar2 + 0x30) = 0x1ff;
  *(undefined4 *)(lVar2 + 0x34) = 1;
  *(undefined8 *)(lVar2 + 0x3c) = 0xffffffff3f800000;
  *(byte *)(lVar2 + 0x38) = *(byte *)(lVar2 + 0x38) & 0xf8 | 4;
  *(undefined8 *)(lVar2 + 0x48) = 0;
  lVar2 = FUN_10000d8b8();
  FUN_1003a985c(&local_40,lVar2);
  *(undefined1 *)(lVar2 + 0x10) = 0;
  return local_40;
}




void FUN_1003588a8(void)

{
  FUN_1003a9b94();
  return;
}




void FUN_1003588b0(void)

{
  FUN_1003a9b94();
  return;
}




void FUN_1003588b8(void)

{
  FUN_1003a9b94();
  return;
}




void FUN_1003588c0(void)

{
  FUN_1003a9fd4(0x3f800000,0x3f000000,"Ability_A","Effect_Ghostwing_Cleave",
                &PTR_s_build___Sounds_5v5_SFX_sfx_ghost_10185a700,3,FUN_1003a3a5c);
  return;
}




void FUN_1003588f0(void)

{
  FUN_1003a9fd4(0x3f800000,0x3f000000,"Ability_A_Alt","Effect_Ghostwing_Cleave_Alt",
                &PTR_s_build___Sounds_5v5_SFX_sfx_ghost_10185a700,3,FUN_1003a3a5c);
  return;
}




undefined8 FUN_100358920(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 local_40;
  undefined8 uStack_38;
  
  local_40 = 0;
  uStack_38 = 0;
  uVar2 = FUN_10000bb2c();
  FUN_1003a985c(&local_40,uVar2);
  lVar3 = FUN_10000bd3c();
  FUN_1003a985c(&local_40,lVar3);
  *(undefined **)(lVar3 + 0x10) = PTR_s_Buff_GloballyVisibleTrueSight_5v_10185a4a8;
  *(undefined4 *)(lVar3 + 0x18) = 0x40e9999a;
  *(undefined2 *)(lVar3 + 0x68) = 1;
  *(byte *)(lVar3 + 0x6a) = *(byte *)(lVar3 + 0x6a) & 0xfe;
  uVar2 = FUN_10000c784();
  FUN_1003a985c(&local_40,uVar2);
  lVar3 = FUN_10000dff8();
  FUN_1003a985c(&local_40,lVar3);
  *(undefined2 *)(lVar3 + 0x28) = 0x100;
  *(undefined8 *)(lVar3 + 0x30) = 0;
  uVar1 = FUN_1004d2524("Die");
  uVar1 = FUN_100015208("Die",uVar1,0x12345678);
  *(undefined4 *)(lVar3 + 0x10) = uVar1;
  *(undefined4 *)(lVar3 + 0x20) = 0;
  lVar3 = FUN_10000ceb8();
  FUN_1003a985c(&local_40,lVar3);
  *(undefined4 *)(lVar3 + 0x2c) = 0x3f19999a;
  *(undefined8 *)(lVar3 + 0x10) = 0;
  lVar3 = FUN_10000e524();
  FUN_1003a985c(&local_40,lVar3);
  *(char **)(lVar3 + 0x10) = "build://Sounds/5v5/SFX/sfx_ghostwing_spawn_global_roar.mp3";
  *(undefined2 *)(lVar3 + 0x30) = 0x1ff;
  *(undefined4 *)(lVar3 + 0x34) = 1;
  *(undefined8 *)(lVar3 + 0x3c) = 0xffffffff3f19999a;
  *(byte *)(lVar3 + 0x38) = *(byte *)(lVar3 + 0x38) & 0xf8 | 4;
  *(undefined8 *)(lVar3 + 0x48) = 0;
  lVar3 = FUN_10000ceb8();
  FUN_1003a985c(&local_40,lVar3);
  *(undefined4 *)(lVar3 + 0x2c) = 0x402ccccd;
  *(undefined8 *)(lVar3 + 0x10) = 0;
  lVar3 = FUN_10000e524();
  FUN_1003a985c(&local_40,lVar3);
  *(char **)(lVar3 + 0x10) = "build://Sounds/5v5/SFX/sfx_ghostwing_buff_activation_fly_away.mp3";
  *(undefined2 *)(lVar3 + 0x30) = 0x1ff;
  *(undefined4 *)(lVar3 + 0x34) = 1;
  *(undefined8 *)(lVar3 + 0x3c) = 0xffffffff3f800000;
  *(byte *)(lVar3 + 0x38) = *(byte *)(lVar3 + 0x38) & 0xf8 | 4;
  *(undefined8 *)(lVar3 + 0x48) = 0;
  lVar3 = FUN_10000ceb8();
  FUN_1003a985c(&local_40,lVar3);
  *(undefined4 *)(lVar3 + 0x2c) = 0x40000000;
  *(undefined8 *)(lVar3 + 0x10) = 0;
  uVar2 = FUN_10000d9a0();
  FUN_1003a985c(&local_40,uVar2);
  return local_40;
}




undefined8 FUN_100358b08(void)

{
  undefined4 uVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 local_40;
  undefined8 uStack_38;
  
  local_40 = 0;
  uStack_38 = 0;
  lVar2 = FUN_10000dff8();
  FUN_1003a985c(&local_40,lVar2);
  *(undefined2 *)(lVar2 + 0x28) = 0x100;
  *(undefined8 *)(lVar2 + 0x30) = 0;
  uVar1 = FUN_1004d2524("Die");
  uVar1 = FUN_100015208("Die",uVar1,0x12345678);
  *(undefined4 *)(lVar2 + 0x10) = uVar1;
  *(undefined4 *)(lVar2 + 0x20) = 0;
  lVar2 = FUN_10000ceb8();
  FUN_1003a985c(&local_40,lVar2);
  *(undefined4 *)(lVar2 + 0x2c) = 0x40351eb8;
  *(undefined8 *)(lVar2 + 0x10) = 0;
  plVar3 = (long *)thunk_FUN_10000f1a0();
  FUN_1003a985c(&local_40,plVar3);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x68))(plVar3);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x10))(0x3ecccccd);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x18))(0x3e99999a);
  (**(code **)(*plVar3 + 0x20))(0x41700000);
  lVar2 = FUN_10000e1b4();
  FUN_1003a985c(&local_40,lVar2);
  *(undefined8 *)(lVar2 + 0x40) = 0;
  *(ushort *)(lVar2 + 0x80) = *(ushort *)(lVar2 + 0x80) & 0xffef | 3;
  *(uint *)(lVar2 + 0x3c) = (uint)lVar2 & 0xffff;
  *(undefined8 *)(lVar2 + 0x20) = 0;
  *(undefined8 *)(lVar2 + 0x28) = 1;
  *(undefined4 *)(lVar2 + 0x10) = 0x4773d02;
  lVar2 = FUN_10000ceb8();
  FUN_1003a985c(&local_40,lVar2);
  *(undefined4 *)(lVar2 + 0x2c) = 0x3ecccccd;
  *(undefined8 *)(lVar2 + 0x10) = 0;
  plVar3 = (long *)thunk_FUN_10000f1a0();
  FUN_1003a985c(&local_40,plVar3);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x68))(plVar3);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x10))(0x3ecccccd);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x18))(0x3e99999a);
  (**(code **)(*plVar3 + 0x20))(0x41700000);
  lVar2 = FUN_10000ceb8();
  FUN_1003a985c(&local_40,lVar2);
  *(undefined4 *)(lVar2 + 0x2c) = 0x3f99999a;
  *(undefined8 *)(lVar2 + 0x10) = 0;
  plVar3 = (long *)thunk_FUN_10000f1a0();
  FUN_1003a985c(&local_40,plVar3);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x68))(plVar3);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x10))(0x3e99999a);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x18))(0x3fd47ae1);
  (**(code **)(*plVar3 + 0x20))(0x41700000);
  lVar2 = FUN_10000ceb8();
  FUN_1003a985c(&local_40,lVar2);
  *(undefined4 *)(lVar2 + 0x2c) = 0x3fee147b;
  *(undefined8 *)(lVar2 + 0x10) = 0;
  plVar3 = (long *)thunk_FUN_10000f1a0();
  FUN_1003a985c(&local_40,plVar3);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x68))(plVar3);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x10))(0x3f4ccccd);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x18))(0x3f4ccccd);
  (**(code **)(*plVar3 + 0x20))(0x41a00000);
  lVar2 = FUN_10000ceb8();
  FUN_1003a985c(&local_40,lVar2);
  *(undefined4 *)(lVar2 + 0x2c) = 0x3fee147b;
  *(undefined8 *)(lVar2 + 0x10) = 0;
  uVar4 = FUN_10000d9a0();
  FUN_1003a985c(&local_40,uVar4);
  return local_40;
}




undefined8 FUN_100358df0(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 local_40;
  undefined8 uStack_38;
  
  local_40 = 0;
  uStack_38 = 0;
  uVar2 = FUN_10000bb2c();
  FUN_1003a985c(&local_40,uVar2);
  lVar3 = FUN_10000dff8();
  FUN_1003a985c(&local_40,lVar3);
  *(undefined2 *)(lVar3 + 0x28) = 0x101;
  *(undefined8 *)(lVar3 + 0x30) = 0;
  uVar1 = FUN_1004d2524("VictoryRoar");
  uVar1 = FUN_100015208("VictoryRoar",uVar1,0x12345678);
  *(undefined4 *)(lVar3 + 0x10) = uVar1;
  *(undefined4 *)(lVar3 + 0x20) = 0;
  lVar3 = FUN_10000ceb8();
  FUN_1003a985c(&local_40,lVar3);
  *(undefined4 *)(lVar3 + 0x2c) = 0x3fcccccd;
  *(undefined8 *)(lVar3 + 0x10) = 0;
  lVar3 = FUN_10000e524();
  FUN_1003a985c(&local_40,lVar3);
  *(char **)(lVar3 + 0x10) = "build://Sounds/Kraken.assetbundle/kraken_endgame_roar1.mp3";
  *(undefined2 *)(lVar3 + 0x30) = 0x1ff;
  *(undefined4 *)(lVar3 + 0x34) = 1;
  *(undefined8 *)(lVar3 + 0x3c) = 0xffffffff3f4ccccd;
  *(byte *)(lVar3 + 0x38) = *(byte *)(lVar3 + 0x38) & 0xf8 | 4;
  *(undefined8 *)(lVar3 + 0x48) = 0;
  lVar3 = FUN_10000ceb8();
  FUN_1003a985c(&local_40,lVar3);
  *(undefined4 *)(lVar3 + 0x2c) = 0x40900000;
  *(undefined8 *)(lVar3 + 0x10) = 0;
  lVar3 = FUN_10000e524();
  FUN_1003a985c(&local_40,lVar3);
  *(char **)(lVar3 + 0x10) = "build://Sounds/Kraken.assetbundle/kraken_endgame_roar2.mp3";
  *(undefined2 *)(lVar3 + 0x30) = 0x1ff;
  *(undefined4 *)(lVar3 + 0x34) = 1;
  *(undefined8 *)(lVar3 + 0x3c) = 0xffffffff3f000000;
  *(byte *)(lVar3 + 0x38) = *(byte *)(lVar3 + 0x38) & 0xf8 | 4;
  *(undefined8 *)(lVar3 + 0x48) = 0;
  uVar2 = FUN_10000c784();
  FUN_1003a985c(&local_40,uVar2);
  return local_40;
}




undefined8 FUN_100358f68(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 local_40;
  undefined8 uStack_38;
  
  local_40 = 0;
  uStack_38 = 0;
  uVar2 = FUN_10000bb2c();
  FUN_1003a985c(&local_40,uVar2);
  lVar3 = FUN_10000dff8();
  FUN_1003a985c(&local_40,lVar3);
  *(undefined2 *)(lVar3 + 0x28) = 0x100;
  *(undefined8 *)(lVar3 + 0x30) = 0;
  uVar1 = FUN_1004d2524("Spawn");
  uVar1 = FUN_100015208("Spawn",uVar1,0x12345678);
  *(undefined4 *)(lVar3 + 0x10) = uVar1;
  uVar1 = FUN_1004d2524("AttackToIdle");
  uVar1 = FUN_100015208("AttackToIdle",uVar1,0x12345678);
  *(undefined4 *)(lVar3 + 0x20) = uVar1;
  lVar3 = FUN_10000ceb8();
  FUN_1003a985c(&local_40,lVar3);
  *(undefined4 *)(lVar3 + 0x2c) = 0x3fe66666;
  *(undefined8 *)(lVar3 + 0x10) = 0;
  lVar3 = FUN_10000e524();
  FUN_1003a985c(&local_40,lVar3);
  *(char **)(lVar3 + 0x10) = "build://Sounds/Kraken.assetbundle/kraken_captured_1stroar.mp3";
  *(undefined2 *)(lVar3 + 0x30) = 0x1ff;
  *(undefined4 *)(lVar3 + 0x34) = 1;
  *(undefined8 *)(lVar3 + 0x3c) = 0xffffffff3f4ccccd;
  *(byte *)(lVar3 + 0x38) = *(byte *)(lVar3 + 0x38) & 0xf8 | 4;
  *(undefined8 *)(lVar3 + 0x48) = 0;
  lVar3 = FUN_10000ceb8();
  FUN_1003a985c(&local_40,lVar3);
  *(undefined4 *)(lVar3 + 0x2c) = 0x40800000;
  *(undefined8 *)(lVar3 + 0x10) = 0;
  lVar3 = FUN_10000e524();
  FUN_1003a985c(&local_40,lVar3);
  *(char **)(lVar3 + 0x10) = "build://Sounds/Kraken.assetbundle/kraken_captured_2ndroar.mp3";
  *(undefined2 *)(lVar3 + 0x30) = 0x1ff;
  *(undefined4 *)(lVar3 + 0x34) = 1;
  *(undefined8 *)(lVar3 + 0x3c) = 0xffffffff3f4ccccd;
  *(byte *)(lVar3 + 0x38) = *(byte *)(lVar3 + 0x38) & 0xf8 | 4;
  *(undefined8 *)(lVar3 + 0x48) = 0;
  lVar3 = FUN_10000ceb8();
  FUN_1003a985c(&local_40,lVar3);
  *(undefined4 *)(lVar3 + 0x2c) = 0x40200000;
  *(undefined8 *)(lVar3 + 0x10) = 0;
  uVar2 = FUN_10000f034();
  FUN_1003a985c(&local_40,uVar2);
  return local_40;
}




undefined8 FUN_10035911c(void)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 local_40;
  undefined8 uStack_38;
  
  local_40 = 0;
  uStack_38 = 0;
  lVar2 = FUN_10000dff8();
  FUN_1003a985c(&local_40,lVar2);
  *(undefined2 *)(lVar2 + 0x28) = 0x100;
  *(undefined8 *)(lVar2 + 0x30) = 0;
  uVar1 = FUN_1004d2524("Spawn");
  uVar1 = FUN_100015208("Spawn",uVar1,0x12345678);
  *(undefined4 *)(lVar2 + 0x10) = uVar1;
  uVar1 = FUN_1004d2524("AttackToIdle");
  uVar1 = FUN_100015208("AttackToIdle",uVar1,0x12345678);
  *(undefined4 *)(lVar2 + 0x20) = uVar1;
  lVar2 = FUN_10000e524();
  FUN_1003a985c(&local_40,lVar2);
  *(char **)(lVar2 + 0x10) = "build://Sounds/5v5/SFX/sfx_blackclaw_spawn_fly_in.mp3";
  *(undefined2 *)(lVar2 + 0x30) = 0x1ff;
  *(undefined4 *)(lVar2 + 0x34) = 1;
  *(undefined8 *)(lVar2 + 0x3c) = 0xffffffff3f800000;
  *(byte *)(lVar2 + 0x38) = *(byte *)(lVar2 + 0x38) & 0xf8 | 4;
  *(undefined8 *)(lVar2 + 0x48) = 0;
  uVar3 = FUN_10000bb2c();
  FUN_1003a985c(&local_40,uVar3);
  lVar2 = FUN_10000bd3c();
  FUN_1003a985c(&local_40,lVar2);
  *(undefined **)(lVar2 + 0x10) = PTR_s_Buff_Kraken5v5_BlackclawUncaptur_10185a4a0;
  *(undefined4 *)(lVar2 + 0x18) = 0x40a00000;
  *(undefined2 *)(lVar2 + 0x68) = 1;
  *(byte *)(lVar2 + 0x6a) = *(byte *)(lVar2 + 0x6a) & 0xfe;
  lVar2 = FUN_10000bd3c();
  FUN_1003a985c(&local_40,lVar2);
  *(undefined **)(lVar2 + 0x10) = PTR_s_Buff_GloballyVisibleTrueSight_5v_10185a4a8;
  *(undefined4 *)(lVar2 + 0x18) = 0x409ccccd;
  *(undefined2 *)(lVar2 + 0x68) = 1;
  *(byte *)(lVar2 + 0x6a) = *(byte *)(lVar2 + 0x6a) & 0xfe;
  uVar3 = FUN_10000c784();
  FUN_1003a985c(&local_40,uVar3);
  lVar2 = FUN_10000ceb8();
  FUN_1003a985c(&local_40,lVar2);
  *(undefined4 *)(lVar2 + 0x2c) = 0x40266666;
  *(undefined8 *)(lVar2 + 0x10) = 0;
  lVar2 = FUN_10000e524();
  FUN_1003a985c(&local_40,lVar2);
  *(char **)(lVar2 + 0x10) = "build://Sounds/5v5/SFX/sfx_blackclaw_spawn_land.mp3";
  *(undefined2 *)(lVar2 + 0x30) = 0x1ff;
  *(undefined4 *)(lVar2 + 0x34) = 1;
  *(undefined8 *)(lVar2 + 0x3c) = 0xffffffff3f19999a;
  *(byte *)(lVar2 + 0x38) = *(byte *)(lVar2 + 0x38) & 0xf8 | 4;
  *(undefined8 *)(lVar2 + 0x48) = 0;
  lVar2 = FUN_10000ceb8();
  FUN_1003a985c(&local_40,lVar2);
  *(undefined4 *)(lVar2 + 0x2c) = 0x3f4ccccd;
  *(undefined8 *)(lVar2 + 0x10) = 0;
  lVar2 = FUN_10000e524();
  FUN_1003a985c(&local_40,lVar2);
  *(char **)(lVar2 + 0x10) = "build://Sounds/5v5/SFX/sfx_blackclaw_land_landing_global_roar.mp3";
  *(undefined2 *)(lVar2 + 0x30) = 0x1ff;
  *(undefined4 *)(lVar2 + 0x34) = 1;
  *(undefined8 *)(lVar2 + 0x3c) = 0xffffffff3f800000;
  *(byte *)(lVar2 + 0x38) = *(byte *)(lVar2 + 0x38) & 0xf8 | 4;
  *(undefined8 *)(lVar2 + 0x48) = 0;
  uVar3 = FUN_10000f034();
  FUN_1003a985c(&local_40,uVar3);
  return local_40;
}




undefined8 FUN_100359380(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 local_40;
  undefined8 uStack_38;
  
  local_40 = 0;
  uStack_38 = 0;
  uVar2 = FUN_10000bb2c();
  FUN_1003a985c(&local_40,uVar2);
  lVar3 = FUN_10000bd3c();
  FUN_1003a985c(&local_40,lVar3);
  *(undefined **)(lVar3 + 0x10) = PTR_s_Buff_GloballyVisibleTrueSight_5v_10185a4a8;
  *(undefined4 *)(lVar3 + 0x18) = 0x40e9999a;
  *(undefined2 *)(lVar3 + 0x68) = 1;
  *(byte *)(lVar3 + 0x6a) = *(byte *)(lVar3 + 0x6a) & 0xfe;
  lVar3 = FUN_10000bd3c();
  FUN_1003a985c(&local_40,lVar3);
  *(undefined **)(lVar3 + 0x10) = PTR_s_Buff_Kraken5v5_UncapturedColor_10185a4b0;
  *(undefined4 *)(lVar3 + 0x18) = 0x40e9999a;
  *(undefined2 *)(lVar3 + 0x68) = 1;
  *(byte *)(lVar3 + 0x6a) = *(byte *)(lVar3 + 0x6a) & 0xfe;
  *(code **)(lVar3 + 0x58) = FUN_1003a5ce0;
  uVar2 = FUN_10000c784();
  FUN_1003a985c(&local_40,uVar2);
  lVar3 = FUN_10000dff8();
  FUN_1003a985c(&local_40,lVar3);
  *(undefined2 *)(lVar3 + 0x28) = 0x100;
  *(undefined8 *)(lVar3 + 0x30) = 0;
  uVar1 = FUN_1004d2524("Die");
  uVar1 = FUN_100015208("Die",uVar1,0x12345678);
  *(undefined4 *)(lVar3 + 0x10) = uVar1;
  *(undefined4 *)(lVar3 + 0x20) = 0;
  lVar3 = FUN_10000ceb8();
  FUN_1003a985c(&local_40,lVar3);
  *(undefined4 *)(lVar3 + 0x2c) = 0x3f19999a;
  *(undefined8 *)(lVar3 + 0x10) = 0;
  lVar3 = FUN_10000e524();
  FUN_1003a985c(&local_40,lVar3);
  *(char **)(lVar3 + 0x10) = "build://Sounds/5v5/SFX/sfx_blackclaw_land_landing_global_roar.mp3";
  *(undefined2 *)(lVar3 + 0x30) = 0x1ff;
  *(undefined4 *)(lVar3 + 0x34) = 1;
  *(undefined8 *)(lVar3 + 0x3c) = 0xffffffff3f19999a;
  *(byte *)(lVar3 + 0x38) = *(byte *)(lVar3 + 0x38) & 0xf8 | 4;
  *(undefined8 *)(lVar3 + 0x48) = 0;
  lVar3 = FUN_10000ceb8();
  FUN_1003a985c(&local_40,lVar3);
  *(undefined4 *)(lVar3 + 0x2c) = 0x402ccccd;
  *(undefined8 *)(lVar3 + 0x10) = 0;
  lVar3 = FUN_10000e524();
  FUN_1003a985c(&local_40,lVar3);
  *(char **)(lVar3 + 0x10) = "build://Sounds/5v5/SFX/sfx_blackclaw_captured_fly_away.mp3";
  *(undefined2 *)(lVar3 + 0x30) = 0x1ff;
  *(undefined4 *)(lVar3 + 0x34) = 1;
  *(undefined8 *)(lVar3 + 0x3c) = 0xffffffff3f800000;
  *(byte *)(lVar3 + 0x38) = *(byte *)(lVar3 + 0x38) & 0xf8 | 4;
  *(undefined8 *)(lVar3 + 0x48) = 0;
  lVar3 = FUN_10000ceb8();
  FUN_1003a985c(&local_40,lVar3);
  *(undefined4 *)(lVar3 + 0x2c) = 0x40000000;
  *(undefined8 *)(lVar3 + 0x10) = 0;
  uVar2 = FUN_10000d9a0();
  FUN_1003a985c(&local_40,uVar2);
  return local_40;
}




undefined8 FUN_1003595a8(void)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 local_40;
  undefined8 uStack_38;
  
  local_40 = 0;
  uStack_38 = 0;
  lVar2 = FUN_10000dff8();
  FUN_1003a985c(&local_40,lVar2);
  *(undefined2 *)(lVar2 + 0x28) = 0x100;
  *(undefined8 *)(lVar2 + 0x30) = 0;
  uVar1 = FUN_1004d2524("Spawn");
  uVar1 = FUN_100015208("Spawn",uVar1,0x12345678);
  *(undefined4 *)(lVar2 + 0x10) = uVar1;
  uVar1 = FUN_1004d2524("AttackToIdle");
  uVar1 = FUN_100015208("AttackToIdle",uVar1,0x12345678);
  *(undefined4 *)(lVar2 + 0x20) = uVar1;
  uVar3 = FUN_10000bb2c();
  FUN_1003a985c(&local_40,uVar3);
  lVar2 = FUN_10000bd3c();
  FUN_1003a985c(&local_40,lVar2);
  *(undefined **)(lVar2 + 0x10) = PTR_s_Buff_Kraken5v5_BlackclawUncaptur_10185a4a0;
  *(undefined4 *)(lVar2 + 0x18) = 0x40a00000;
  *(undefined2 *)(lVar2 + 0x68) = 1;
  *(byte *)(lVar2 + 0x6a) = *(byte *)(lVar2 + 0x6a) & 0xfe;
  uVar3 = FUN_10000c784();
  FUN_1003a985c(&local_40,uVar3);
  lVar2 = FUN_10000ceb8();
  FUN_1003a985c(&local_40,lVar2);
  *(undefined4 *)(lVar2 + 0x2c) = 0x40133333;
  *(undefined8 *)(lVar2 + 0x10) = 0;
  lVar2 = FUN_10000e524();
  FUN_1003a985c(&local_40,lVar2);
  *(char **)(lVar2 + 0x10) = "build://Sounds/5v5/SFX/sfx_blackclaw_lane_landing_fly_in.mp3";
  *(undefined2 *)(lVar2 + 0x30) = 0x1ff;
  *(undefined4 *)(lVar2 + 0x34) = 1;
  *(undefined8 *)(lVar2 + 0x3c) = 0xffffffff3f19999a;
  *(byte *)(lVar2 + 0x38) = *(byte *)(lVar2 + 0x38) & 0xf8 | 4;
  *(undefined8 *)(lVar2 + 0x48) = 0;
  lVar2 = FUN_10000ceb8();
  FUN_1003a985c(&local_40,lVar2);
  *(undefined4 *)(lVar2 + 0x2c) = 0x3fc00000;
  *(undefined8 *)(lVar2 + 0x10) = 0;
  lVar2 = FUN_10000e524();
  FUN_1003a985c(&local_40,lVar2);
  *(char **)(lVar2 + 0x10) = "build://Sounds/5v5/SFX/sfx_blackclaw_captured_global_roar.mp3";
  *(undefined2 *)(lVar2 + 0x30) = 0x1ff;
  *(undefined4 *)(lVar2 + 0x34) = 1;
  *(undefined8 *)(lVar2 + 0x3c) = 0xffffffff3f19999a;
  *(byte *)(lVar2 + 0x38) = *(byte *)(lVar2 + 0x38) & 0xf8 | 4;
  *(undefined8 *)(lVar2 + 0x48) = 0;
  lVar2 = FUN_10000ceb8();
  FUN_1003a985c(&local_40,lVar2);
  *(undefined4 *)(lVar2 + 0x2c) = 0x3f99999a;
  *(undefined8 *)(lVar2 + 0x10) = 0;
  uVar3 = FUN_10000f034();
  FUN_1003a985c(&local_40,uVar3);
  return local_40;
}




undefined8 FUN_1003597a8(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 local_40;
  undefined8 uStack_38;
  
  local_40 = 0;
  uStack_38 = 0;
  uVar2 = FUN_10000bb2c();
  FUN_1003a985c(&local_40,uVar2);
  lVar3 = FUN_10000bd3c();
  FUN_1003a985c(&local_40,lVar3);
  *(undefined **)(lVar3 + 0x10) = PTR_s_Buff_GloballyVisibleTrueSight_5v_10185a4a8;
  *(undefined4 *)(lVar3 + 0x18) = 0x40e9999a;
  *(undefined2 *)(lVar3 + 0x68) = 1;
  *(byte *)(lVar3 + 0x6a) = *(byte *)(lVar3 + 0x6a) & 0xfe;
  uVar2 = FUN_10000c784();
  FUN_1003a985c(&local_40,uVar2);
  lVar3 = FUN_10000dff8();
  FUN_1003a985c(&local_40,lVar3);
  *(undefined2 *)(lVar3 + 0x28) = 0x100;
  *(undefined8 *)(lVar3 + 0x30) = 0;
  uVar1 = FUN_1004d2524("Die");
  uVar1 = FUN_100015208("Die",uVar1,0x12345678);
  *(undefined4 *)(lVar3 + 0x10) = uVar1;
  *(undefined4 *)(lVar3 + 0x20) = 0;
  lVar3 = FUN_10000ceb8();
  FUN_1003a985c(&local_40,lVar3);
  *(undefined4 *)(lVar3 + 0x2c) = 0x3f19999a;
  *(undefined8 *)(lVar3 + 0x10) = 0;
  lVar3 = FUN_10000e524();
  FUN_1003a985c(&local_40,lVar3);
  *(char **)(lVar3 + 0x10) = "build://Sounds/5v5/SFX/sfx_blackclaw_land_landing_global_roar.mp3";
  *(undefined2 *)(lVar3 + 0x30) = 0x1ff;
  *(undefined4 *)(lVar3 + 0x34) = 1;
  *(undefined8 *)(lVar3 + 0x3c) = 0xffffffff3f19999a;
  *(byte *)(lVar3 + 0x38) = *(byte *)(lVar3 + 0x38) & 0xf8 | 4;
  *(undefined8 *)(lVar3 + 0x48) = 0;
  lVar3 = FUN_10000ceb8();
  FUN_1003a985c(&local_40,lVar3);
  *(undefined4 *)(lVar3 + 0x2c) = 0x402ccccd;
  *(undefined8 *)(lVar3 + 0x10) = 0;
  lVar3 = FUN_10000e524();
  FUN_1003a985c(&local_40,lVar3);
  *(char **)(lVar3 + 0x10) = "build://Sounds/5v5/SFX/sfx_blackclaw_captured_fly_away.mp3";
  *(undefined2 *)(lVar3 + 0x30) = 0x1ff;
  *(undefined4 *)(lVar3 + 0x34) = 1;
  *(undefined8 *)(lVar3 + 0x3c) = 0xffffffff3f800000;
  *(byte *)(lVar3 + 0x38) = *(byte *)(lVar3 + 0x38) & 0xf8 | 4;
  *(undefined8 *)(lVar3 + 0x48) = 0;
  lVar3 = FUN_10000ceb8();
  FUN_1003a985c(&local_40,lVar3);
  *(undefined4 *)(lVar3 + 0x2c) = 0x40000000;
  *(undefined8 *)(lVar3 + 0x10) = 0;
  uVar2 = FUN_10000d9a0();
  FUN_1003a985c(&local_40,uVar2);
  return local_40;
}




undefined8 FUN_100359990(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_30 = 0;
  uStack_28 = 0;
  uVar2 = FUN_10000bb2c();
  FUN_1003a985c(&local_30,uVar2);
  lVar3 = FUN_10000dff8();
  FUN_1003a985c(&local_30,lVar3);
  *(undefined2 *)(lVar3 + 0x28) = 0x100;
  *(undefined8 *)(lVar3 + 0x30) = 0;
  uVar1 = FUN_1004d2524("VictoryRoar");
  uVar1 = FUN_100015208("VictoryRoar",uVar1,0x12345678);
  *(undefined4 *)(lVar3 + 0x10) = uVar1;
  *(undefined4 *)(lVar3 + 0x20) = 0;
  lVar3 = FUN_10000ceb8();
  FUN_1003a985c(&local_30,lVar3);
  *(undefined4 *)(lVar3 + 0x2c) = 0x40a00000;
  *(undefined8 *)(lVar3 + 0x10) = 0;
  uVar2 = FUN_10000c784();
  FUN_1003a985c(&local_30,uVar2);
  return local_30;
}




undefined8 FUN_100359a44(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined4 uVar5;
  undefined8 local_30;
  undefined8 uStack_28;
  
  puVar1 = PTR_s__Item_HealingFlask__10185aaf0;
  uVar2 = FUN_1010a1520();
  lVar3 = FUN_1010a0e0c(uVar2,0,puVar1,0);
  local_30 = 0;
  uStack_28 = 0;
  uVar2 = FUN_10000bb2c();
  FUN_1003a985c(&local_30,uVar2);
  lVar4 = FUN_10000bd3c();
  FUN_1003a985c(&local_30,lVar4);
  if (**(long **)(lVar3 + 0x1a8) == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(undefined4 *)(**(long **)(lVar3 + 0x1a8) + 8);
  }
  *(undefined **)(lVar4 + 0x10) = PTR_s_Buff_Item_HealingFlask_10185aaf8;
  *(undefined4 *)(lVar4 + 0x18) = uVar5;
  *(undefined2 *)(lVar4 + 0x68) = 1;
  *(byte *)(lVar4 + 0x6a) = *(byte *)(lVar4 + 0x6a) & 0xfe;
  uVar2 = FUN_10000c784();
  FUN_1003a985c(&local_30,uVar2);
  uVar2 = FUN_10000f034();
  FUN_1003a985c(&local_30,uVar2);
  return local_30;
}




void FUN_100359b0c(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  undefined4 uVar7;
  
  puVar1 = PTR_s__Item_SprintBoots__10185ab00;
  uVar2 = FUN_1010a1520();
  lVar3 = FUN_1010a0e0c(uVar2,0,puVar1,0);
  uVar7 = 0;
  if (**(long **)(lVar3 + 0x1a8) != 0) {
    lVar5 = 0;
    do {
      lVar6 = *(long *)((long)*(long **)(lVar3 + 0x1a8) + lVar5 + 8);
      iVar4 = (int)lVar5;
      lVar5 = lVar5 + 8;
    } while (lVar6 != 0 && iVar4 != 8);
    if (lVar6 != 0) {
      uVar7 = *(undefined4 *)(lVar6 + 8);
    }
  }
  FUN_1003b0150(uVar7,PTR_s_Buff_Item_SprintBootsSprint_10185ab08);
  return;
}




void FUN_100359b80(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  undefined4 uVar7;
  
  puVar1 = PTR_s__Item_TravelBoots__10185ab10;
  uVar2 = FUN_1010a1520();
  lVar3 = FUN_1010a0e0c(uVar2,0,puVar1,0);
  uVar7 = 0;
  if (**(long **)(lVar3 + 0x1a8) != 0) {
    lVar5 = 0;
    do {
      lVar6 = *(long *)((long)*(long **)(lVar3 + 0x1a8) + lVar5 + 8);
      iVar4 = (int)lVar5;
      lVar5 = lVar5 + 8;
    } while (lVar6 != 0 && iVar4 != 0x10);
    if (lVar6 != 0) {
      uVar7 = *(undefined4 *)(lVar6 + 8);
    }
  }
  FUN_1003b0150(uVar7,PTR_s_Buff_Item_TravelBootsSprint_10185ab18);
  return;
}




void FUN_100359bf4(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  undefined4 uVar7;
  
  puVar1 = PTR_s__Item_JourneyBoots__10185ab20;
  uVar2 = FUN_1010a1520();
  lVar3 = FUN_1010a0e0c(uVar2,0,puVar1,0);
  uVar7 = 0;
  if (**(long **)(lVar3 + 0x1a8) != 0) {
    lVar5 = 0;
    do {
      lVar6 = *(long *)((long)*(long **)(lVar3 + 0x1a8) + lVar5 + 8);
      iVar4 = (int)lVar5;
      lVar5 = lVar5 + 8;
    } while (lVar6 != 0 && iVar4 != 0x10);
    if (lVar6 != 0) {
      uVar7 = *(undefined4 *)(lVar6 + 8);
    }
  }
  FUN_1003b0150(uVar7,PTR_s_Buff_Item_JourneyBootsSprint_10185ab28);
  return;
}




void FUN_100359c68(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  undefined4 uVar7;
  
  puVar1 = PTR_s__Item_HalcyonChargers__10185ab30;
  uVar2 = FUN_1010a1520();
  lVar3 = FUN_1010a0e0c(uVar2,0,puVar1,0);
  uVar7 = 0;
  if (**(long **)(lVar3 + 0x1a8) != 0) {
    lVar5 = 0;
    do {
      lVar6 = *(long *)((long)*(long **)(lVar3 + 0x1a8) + lVar5 + 8);
      iVar4 = (int)lVar5;
      lVar5 = lVar5 + 8;
    } while (lVar6 != 0 && iVar4 != 0x10);
    if (lVar6 != 0) {
      uVar7 = *(undefined4 *)(lVar6 + 8);
    }
  }
  FUN_1003b0150(uVar7,PTR_s_Buff_Item_HalcyonChargersSprint_10185ab38);
  return;
}




undefined8 FUN_100359cdc(void)

{
  byte bVar1;
  byte bVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  undefined4 uVar10;
  undefined8 local_70;
  undefined8 uStack_68;
  
  local_70 = 0;
  uStack_68 = 0;
  lVar4 = FUN_1003e10f0();
  bVar1 = *(byte *)(lVar4 + 0xe5);
  lVar4 = FUN_1003e10f0();
  puVar3 = PTR_s__Item_MinionCandy__10185ab40;
  bVar2 = *(byte *)(lVar4 + 0xe5);
  uVar5 = FUN_1010a1520();
  lVar4 = FUN_1010a0e0c(uVar5,0,puVar3,0);
  lVar6 = FUN_10000e94c();
  FUN_1003a985c(&local_70,lVar6);
  *(code **)(lVar6 + 0x10) = FUN_1003b0260;
  lVar6 = FUN_10000ed74();
  FUN_1003a985c(&local_70,lVar6);
  uVar10 = 0;
  if (**(long **)(lVar4 + 0x1a8) != 0) {
    lVar8 = 0;
    do {
      lVar9 = *(long *)((long)*(long **)(lVar4 + 0x1a8) + lVar8 + 8);
      iVar7 = (int)lVar8;
      lVar8 = lVar8 + 8;
    } while (lVar9 != 0 && iVar7 != 8);
    uVar10 = 0;
    if (lVar9 != 0) {
      uVar10 = *(undefined4 *)(lVar9 + 8);
    }
  }
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
  *(undefined8 *)(lVar6 + 0x58) = 0x21000000000;
  *(undefined2 *)(lVar6 + 0x68) = 0x4110;
  *(byte *)(lVar6 + 0x6a) = bVar1 | 0x14;
  *(undefined4 *)(lVar6 + 0xa4) = uVar10;
  *(byte *)(lVar6 + 0xa8) = *(byte *)(lVar6 + 0xa8) & 0xf0 | 1;
  lVar6 = FUN_10000ed74();
  FUN_1003a985c(&local_70,lVar6);
  uVar10 = 0;
  if (**(long **)(lVar4 + 0x1a8) != 0) {
    lVar8 = 0;
    do {
      lVar9 = *(long *)((long)*(long **)(lVar4 + 0x1a8) + lVar8 + 8);
      iVar7 = (int)lVar8;
      lVar8 = lVar8 + 8;
    } while (lVar9 != 0 && iVar7 != 8);
    uVar10 = 0;
    if (lVar9 != 0) {
      uVar10 = *(undefined4 *)(lVar9 + 8);
    }
  }
  *(undefined8 *)(lVar6 + 0x18) = 0;
  *(undefined1 *)(lVar6 + 0x20) = 1;
  *(undefined8 *)(lVar6 + 0x24) = 0;
  *(undefined8 *)(lVar6 + 0x34) = 0;
  *(undefined8 *)(lVar6 + 0x2c) = 0;
  *(undefined4 *)(lVar6 + 0x3c) = 0;
  *(undefined8 *)(lVar6 + 0x48) = 0xbf800000c0000000;
  *(undefined8 *)(lVar6 + 0x40) = 0xbf800000bf800000;
  *(undefined4 *)(lVar6 + 0x50) = 0x3f800000;
  *(undefined1 *)(lVar6 + 0x54) = 0;
  *(undefined8 *)(lVar6 + 0x60) = 0xffffffff00000000;
  *(undefined8 *)(lVar6 + 0x58) = 0xffffffff00000200;
  *(undefined2 *)(lVar6 + 0x68) = 0x4110;
  *(byte *)(lVar6 + 0x6a) = bVar2 | 0x14;
  *(undefined4 *)(lVar6 + 0xa4) = uVar10;
  *(byte *)(lVar6 + 0xa8) = *(byte *)(lVar6 + 0xa8) & 0xf0 | 1;
  lVar4 = FUN_10000bd3c();
  FUN_1003a985c(&local_70,lVar4);
  *(undefined **)(lVar4 + 0x10) = PTR_s_Buff_Item_MinionCandy_10185ab48;
  *(code **)(lVar4 + 0x28) = FUN_1003b01e8;
  *(undefined2 *)(lVar4 + 0x68) = 1;
  *(byte *)(lVar4 + 0x6a) = *(byte *)(lVar4 + 0x6a) & 0xfe;
  uVar5 = FUN_10000f034();
  FUN_1003a985c(&local_70,uVar5);
  return local_70;
}




undefined8 FUN_100359f20(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  undefined8 local_40;
  undefined8 uStack_38;
  
  local_40 = 0;
  uStack_38 = 0;
  lVar1 = FUN_10000e524();
  FUN_1003a985c(&local_40,lVar1);
  uVar2 = FUN_1010a1520();
  lVar3 = FUN_1010a0e0c(uVar2,0,"*KindredSoundBalance*",0);
  fVar5 = *(float *)(lVar3 + 0x10);
  uVar2 = FUN_1010a1520();
  lVar3 = FUN_1010a0e0c(uVar2,0,"*KindredSoundBalance*",0);
  fVar4 = *(float *)(lVar3 + 0xc);
  *(char **)(lVar1 + 0x10) = "build://Sounds/Items/item_flare_start.mp3";
  *(undefined2 *)(lVar1 + 0x30) = 0x1ff;
  *(undefined4 *)(lVar1 + 0x34) = 1;
  *(float *)(lVar1 + 0x3c) = fVar4 + fVar5;
  *(undefined4 *)(lVar1 + 0x40) = 0xffffffff;
  *(byte *)(lVar1 + 0x38) = *(byte *)(lVar1 + 0x38) & 0xf8 | 4;
  *(undefined8 *)(lVar1 + 0x48) = 0;
  lVar1 = FUN_10000f250();
  FUN_1003a985c(&local_40,lVar1);
  *(undefined4 *)(lVar1 + 0x10) = 0x25;
  FUN_1003d266c(lVar1,"CenterBody");
  uVar2 = FUN_10000f034();
  FUN_1003a985c(&local_40,uVar2);
  return local_40;
}




undefined8 FUN_10035a018(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  undefined8 local_40;
  undefined8 uStack_38;
  
  local_40 = 0;
  uStack_38 = 0;
  lVar1 = FUN_10000e524();
  FUN_1003a985c(&local_40,lVar1);
  uVar2 = FUN_1010a1520();
  lVar3 = FUN_1010a0e0c(uVar2,0,"*KindredSoundBalance*",0);
  fVar5 = *(float *)(lVar3 + 0x10);
  uVar2 = FUN_1010a1520();
  lVar3 = FUN_1010a0e0c(uVar2,0,"*KindredSoundBalance*",0);
  fVar4 = *(float *)(lVar3 + 0xc);
  *(char **)(lVar1 + 0x10) = "build://Sounds/Items/item_flare_start.mp3";
  *(undefined2 *)(lVar1 + 0x30) = 0x1ff;
  *(undefined4 *)(lVar1 + 0x34) = 1;
  *(float *)(lVar1 + 0x3c) = fVar4 + fVar5;
  *(undefined4 *)(lVar1 + 0x40) = 0xffffffff;
  *(byte *)(lVar1 + 0x38) = *(byte *)(lVar1 + 0x38) & 0xf8 | 4;
  *(undefined8 *)(lVar1 + 0x48) = 0;
  lVar1 = FUN_10000f250();
  FUN_1003a985c(&local_40,lVar1);
  *(undefined4 *)(lVar1 + 0x10) = 0x26;
  FUN_1003d266c(lVar1,"CenterBody");
  uVar2 = FUN_10000f034();
  FUN_1003a985c(&local_40,uVar2);
  return local_40;
}




undefined8 FUN_10035a110(void)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  float fVar8;
  undefined4 uVar9;
  float fVar10;
  undefined8 local_50;
  undefined8 uStack_48;
  
  local_50 = 0;
  uStack_48 = 0;
  lVar2 = FUN_10000e524();
  FUN_1003a985c(&local_50,lVar2);
  uVar3 = FUN_1010a1520();
  lVar4 = FUN_1010a0e0c(uVar3,0,"*KindredSoundBalance*",0);
  fVar10 = *(float *)(lVar4 + 0x20);
  uVar3 = FUN_1010a1520();
  lVar4 = FUN_1010a0e0c(uVar3,0,"*KindredSoundBalance*",0);
  fVar8 = *(float *)(lVar4 + 0xc);
  *(char **)(lVar2 + 0x10) = "build://Sounds/Items/item_reflex_block.mp3";
  *(undefined2 *)(lVar2 + 0x30) = 0x1ff;
  *(undefined4 *)(lVar2 + 0x34) = 1;
  *(float *)(lVar2 + 0x3c) = fVar8 + fVar10;
  *(undefined4 *)(lVar2 + 0x40) = 0xffffffff;
  *(byte *)(lVar2 + 0x38) = *(byte *)(lVar2 + 0x38) & 0xf8 | 4;
  *(undefined8 *)(lVar2 + 0x48) = 0;
  uVar3 = FUN_10000bb2c();
  FUN_1003a985c(&local_50,uVar3);
  puVar1 = PTR_s__Item_ReflexBlock__10185ab50;
  uVar3 = FUN_1010a1520();
  lVar2 = FUN_1010a0e0c(uVar3,0,puVar1,0);
  lVar4 = FUN_10000bd3c();
  FUN_1003a985c(&local_50,lVar4);
  uVar9 = 0;
  if (**(long **)(lVar2 + 0x1a8) != 0) {
    lVar6 = 0;
    do {
      lVar7 = *(long *)((long)*(long **)(lVar2 + 0x1a8) + lVar6 + 8);
      iVar5 = (int)lVar6;
      lVar6 = lVar6 + 8;
    } while (lVar7 != 0 && iVar5 != 8);
    uVar9 = 0;
    if (lVar7 != 0) {
      uVar9 = *(undefined4 *)(lVar7 + 8);
    }
  }
  *(undefined **)(lVar4 + 0x10) = PTR_s_Buff_Item_ReflexBlock_10185ab58;
  *(undefined4 *)(lVar4 + 0x18) = uVar9;
  *(undefined2 *)(lVar4 + 0x68) = 1;
  *(byte *)(lVar4 + 0x6a) = *(byte *)(lVar4 + 0x6a) & 0xfe;
  lVar4 = FUN_10000bd3c();
  FUN_1003a985c(&local_50,lVar4);
  uVar9 = 0;
  if (**(long **)(lVar2 + 0x1a8) != 0) {
    lVar6 = 0;
    do {
      lVar7 = *(long *)((long)*(long **)(lVar2 + 0x1a8) + lVar6 + 8);
      iVar5 = (int)lVar6;
      lVar6 = lVar6 + 8;
    } while (lVar7 != 0 && iVar5 != 8);
    uVar9 = 0;
    if (lVar7 != 0) {
      uVar9 = *(undefined4 *)(lVar7 + 8);
    }
  }
  *(undefined **)(lVar4 + 0x10) = PTR_s_Buff_BlockDebuffs_10185a528;
  *(undefined4 *)(lVar4 + 0x18) = uVar9;
  *(undefined2 *)(lVar4 + 0x68) = 1;
  *(byte *)(lVar4 + 0x6a) = *(byte *)(lVar4 + 0x6a) & 0xfe;
  uVar3 = FUN_10000f034();
  FUN_1003a985c(&local_50,uVar3);
  return local_50;
}




undefined8 FUN_10035a2ec(void)

{
  byte bVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  float fVar7;
  undefined4 uVar8;
  float fVar9;
  code *local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  local_50 = 0;
  uStack_48 = 0;
  lVar3 = FUN_1003e10f0();
  bVar1 = *(byte *)(lVar3 + 0xe5);
  plVar4 = (long *)FUN_10000bdf0();
  FUN_1003a985c(&local_50,plVar4);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))(plVar4,PTR_s_Buff_Item_FountainOfRenewal_10185ab60)
  ;
  local_60 = FUN_1003b06c4;
  local_58 = 2;
  (**(code **)(*plVar4 + 0x18))(plVar4,&local_60);
  lVar3 = FUN_10000e524();
  FUN_1003a985c(&local_50,lVar3);
  uVar5 = FUN_1010a1520();
  lVar6 = FUN_1010a0e0c(uVar5,0,"*KindredSoundBalance*",0);
  fVar9 = *(float *)(lVar6 + 0x1c);
  uVar5 = FUN_1010a1520();
  lVar6 = FUN_1010a0e0c(uVar5,0,"*KindredSoundBalance*",0);
  fVar7 = *(float *)(lVar6 + 0xc);
  *(char **)(lVar3 + 0x10) = "build://Sounds/Items/item_fountain_of_renewal.mp3";
  *(undefined2 *)(lVar3 + 0x30) = 0x1ff;
  *(undefined4 *)(lVar3 + 0x34) = 1;
  *(float *)(lVar3 + 0x3c) = fVar7 + fVar9;
  *(undefined4 *)(lVar3 + 0x40) = 0xffffffff;
  *(byte *)(lVar3 + 0x38) = *(byte *)(lVar3 + 0x38) & 0xf8 | 4;
  *(undefined8 *)(lVar3 + 0x48) = 0;
  lVar3 = FUN_10000ed74();
  FUN_1003a985c(&local_50,lVar3);
  uVar8 = FUN_1003df6c8(PTR_s__Item_FountainOfRenewal__10185ba58,2,1);
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
  *(undefined4 *)(lVar3 + 0xa4) = uVar8;
  *(byte *)(lVar3 + 0xa8) = *(byte *)(lVar3 + 0xa8) & 0xf0 | bVar2;
  lVar3 = FUN_10000f250();
  FUN_1003a985c(&local_50,lVar3);
  *(undefined4 *)(lVar3 + 0x10) = 0x24;
  FUN_1003d266c(lVar3,"CenterBody");
  *(undefined1 *)(lVar3 + 0x30) = 1;
  uVar5 = FUN_10000f034();
  FUN_1003a985c(&local_50,uVar5);
  return local_50;
}




undefined8 FUN_10035a4e8(void)

{
  byte bVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  undefined8 local_60;
  undefined8 uStack_58;
  
  local_60 = 0;
  uStack_58 = 0;
  uVar3 = FUN_10000bb2c();
  FUN_1003a985c(&local_60,uVar3);
  puVar2 = PTR_s__Item_ReflexBlock__10185ab50;
  uVar3 = FUN_1010a1520();
  lVar4 = FUN_1010a0e0c(uVar3,0,puVar2,0);
  lVar5 = FUN_10000bd3c();
  FUN_1003a985c(&local_60,lVar5);
  uVar9 = 0;
  if (**(long **)(lVar4 + 0x1a8) != 0) {
    lVar7 = 0;
    do {
      lVar8 = *(long *)((long)*(long **)(lVar4 + 0x1a8) + lVar7 + 8);
      iVar6 = (int)lVar7;
      lVar7 = lVar7 + 8;
    } while (lVar8 != 0 && iVar6 != 8);
    uVar9 = 0;
    if (lVar8 != 0) {
      uVar9 = *(undefined4 *)(lVar8 + 8);
    }
  }
  *(undefined **)(lVar5 + 0x10) = PTR_s_Buff_Item_ReflexBlock_10185ab58;
  *(undefined4 *)(lVar5 + 0x18) = uVar9;
  *(undefined2 *)(lVar5 + 0x68) = 1;
  *(byte *)(lVar5 + 0x6a) = *(byte *)(lVar5 + 0x6a) & 0xfe;
  lVar5 = FUN_10000bd3c();
  FUN_1003a985c(&local_60,lVar5);
  uVar9 = 0;
  if (**(long **)(lVar4 + 0x1a8) != 0) {
    lVar7 = 0;
    do {
      lVar8 = *(long *)((long)*(long **)(lVar4 + 0x1a8) + lVar7 + 8);
      iVar6 = (int)lVar7;
      lVar7 = lVar7 + 8;
    } while (lVar8 != 0 && iVar6 != 8);
    uVar9 = 0;
    if (lVar8 != 0) {
      uVar9 = *(undefined4 *)(lVar8 + 8);
    }
  }
  *(undefined **)(lVar5 + 0x10) = PTR_s_Buff_BlockDebuffs_10185a528;
  *(undefined4 *)(lVar5 + 0x18) = uVar9;
  *(undefined2 *)(lVar5 + 0x68) = 1;
  *(byte *)(lVar5 + 0x6a) = *(byte *)(lVar5 + 0x6a) & 0xfe;
  uVar3 = FUN_10000c784();
  FUN_1003a985c(&local_60,uVar3);
  lVar5 = FUN_1003e10f0();
  puVar2 = PTR_s__Item_Crucible__10185ab68;
  bVar1 = *(byte *)(lVar5 + 0xe5);
  uVar3 = FUN_1010a1520();
  lVar5 = FUN_1010a0e0c(uVar3,0,puVar2,0);
  lVar7 = FUN_10000ed74();
  FUN_1003a985c(&local_60,lVar7);
  uVar9 = 0;
  if (**(long **)(lVar5 + 0x1a8) != 0) {
    uVar9 = *(undefined4 *)(**(long **)(lVar5 + 0x1a8) + 8);
  }
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
  *(undefined8 *)(lVar7 + 0x58) = 0xffffffff00000001;
  *(undefined2 *)(lVar7 + 0x68) = 0x4110;
  *(byte *)(lVar7 + 0x6a) = bVar1 | 0x14;
  *(undefined4 *)(lVar7 + 0xa4) = uVar9;
  *(byte *)(lVar7 + 0xa8) = *(byte *)(lVar7 + 0xa8) & 0xf0 | 1;
  lVar5 = FUN_10000bd3c();
  FUN_1003a985c(&local_60,lVar5);
  uVar9 = 0;
  if (**(long **)(lVar4 + 0x1a8) != 0) {
    lVar7 = 0;
    do {
      lVar8 = *(long *)((long)*(long **)(lVar4 + 0x1a8) + lVar7 + 8);
      iVar6 = (int)lVar7;
      lVar7 = lVar7 + 8;
    } while (lVar8 != 0 && iVar6 != 8);
    uVar9 = 0;
    if (lVar8 != 0) {
      uVar9 = *(undefined4 *)(lVar8 + 8);
    }
  }
  *(undefined **)(lVar5 + 0x10) = PTR_s_Buff_Item_ReflexBlock_10185ab58;
  *(undefined4 *)(lVar5 + 0x18) = uVar9;
  *(undefined2 *)(lVar5 + 0x68) = 1;
  *(byte *)(lVar5 + 0x6a) = *(byte *)(lVar5 + 0x6a) & 0xfe;
  lVar5 = FUN_10000bd3c();
  FUN_1003a985c(&local_60,lVar5);
  uVar9 = 0;
  if (**(long **)(lVar4 + 0x1a8) != 0) {
    lVar7 = 0;
    do {
      lVar8 = *(long *)((long)*(long **)(lVar4 + 0x1a8) + lVar7 + 8);
      iVar6 = (int)lVar7;
      lVar7 = lVar7 + 8;
    } while (lVar8 != 0 && iVar6 != 8);
    if (lVar8 != 0) {
      uVar9 = *(undefined4 *)(lVar8 + 8);
    }
  }
  *(undefined **)(lVar5 + 0x10) = PTR_s_Buff_BlockDebuffs_10185a528;
  *(undefined4 *)(lVar5 + 0x18) = uVar9;
  *(undefined2 *)(lVar5 + 0x68) = 1;
  *(byte *)(lVar5 + 0x6a) = *(byte *)(lVar5 + 0x6a) & 0xfe;
  lVar4 = FUN_10000e524();
  FUN_1003a985c(&local_60,lVar4);
  uVar3 = FUN_1010a1520();
  lVar5 = FUN_1010a0e0c(uVar3,0,"*KindredSoundBalance*",0);
  fVar11 = *(float *)(lVar5 + 0x20);
  uVar3 = FUN_1010a1520();
  lVar5 = FUN_1010a0e0c(uVar3,0,"*KindredSoundBalance*",0);
  fVar10 = *(float *)(lVar5 + 0xc);
  *(char **)(lVar4 + 0x10) = "build://Sounds/Items/item_reflex_block.mp3";
  *(undefined2 *)(lVar4 + 0x30) = 0x1ff;
  *(undefined4 *)(lVar4 + 0x34) = 1;
  *(float *)(lVar4 + 0x3c) = fVar10 + fVar11;
  *(undefined4 *)(lVar4 + 0x40) = 0xffffffff;
  *(byte *)(lVar4 + 0x38) = *(byte *)(lVar4 + 0x38) & 0xf8 | 4;
  *(undefined8 *)(lVar4 + 0x48) = 0;
  lVar4 = FUN_10000e474();
  FUN_1003a985c(&local_60,lVar4);
  *(undefined4 *)(lVar4 + 0x10) = 2;
  *(char **)(lVar4 + 0x18) = "Effect_Crucible_Beam";
  *(undefined4 *)(lVar4 + 0x20) = 0x3e3270a0;
  *(undefined8 *)(lVar4 + 0x28) = 0;
  *(undefined4 *)(lVar4 + 0x30) = 0x3f4ccccd;
  *(uint *)(lVar4 + 0x4c) = (uint)lVar4 & 0xffff;
  *(byte *)(lVar4 + 0x58) = *(byte *)(lVar4 + 0x58) | 3;
  lVar4 = FUN_10000ceb8();
  FUN_1003a985c(&local_60,lVar4);
  *(undefined4 *)(lVar4 + 0x2c) = 0x3f800000;
  *(undefined8 *)(lVar4 + 0x10) = 0;
  uVar3 = FUN_10000f034();
  FUN_1003a985c(&local_60,uVar3);
  return local_60;
}




undefined8 FUN_10035a8dc(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  undefined4 uVar8;
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_30 = 0;
  uStack_28 = 0;
  uVar2 = FUN_10000bb2c();
  FUN_1003a985c(&local_30,uVar2);
  puVar1 = PTR_s__Item_WeaponInfusion__10185ab70;
  uVar2 = FUN_1010a1520();
  lVar3 = FUN_1010a0e0c(uVar2,0,puVar1,0);
  lVar4 = FUN_10000bd3c();
  FUN_1003a985c(&local_30,lVar4);
  uVar8 = 0;
  if (**(long **)(lVar3 + 0x1a8) != 0) {
    lVar6 = 0;
    do {
      lVar7 = *(long *)((long)*(long **)(lVar3 + 0x1a8) + lVar6 + 8);
      if (lVar7 == 0) break;
      iVar5 = (int)lVar6;
      lVar6 = lVar6 + 8;
    } while (iVar5 != 0x40);
    if (lVar7 != 0) {
      uVar8 = *(undefined4 *)(lVar7 + 8);
    }
  }
  *(undefined **)(lVar4 + 0x10) = PTR_s_Buff_Item_WeaponInfusion_10185ab78;
  *(undefined4 *)(lVar4 + 0x18) = uVar8;
  *(undefined2 *)(lVar4 + 0x68) = 1;
  *(byte *)(lVar4 + 0x6a) = *(byte *)(lVar4 + 0x6a) & 0xfe;
  lVar3 = FUN_10000c540();
  FUN_1003a985c(&local_30,lVar3);
  *(undefined **)(lVar3 + 0x10) = PTR_s_Buff_Item_CrystalInfusion_10185ab80;
  uVar2 = FUN_10000c784();
  FUN_1003a985c(&local_30,uVar2);
  uVar2 = FUN_10000f034();
  FUN_1003a985c(&local_30,uVar2);
  return local_30;
}




undefined8 FUN_10035a9e4(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  undefined4 uVar8;
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_30 = 0;
  uStack_28 = 0;
  uVar2 = FUN_10000bb2c();
  FUN_1003a985c(&local_30,uVar2);
  puVar1 = PTR_s__Item_CrystalInfusion__10185ab88;
  uVar2 = FUN_1010a1520();
  lVar3 = FUN_1010a0e0c(uVar2,0,puVar1,0);
  lVar4 = FUN_10000bd3c();
  FUN_1003a985c(&local_30,lVar4);
  uVar8 = 0;
  if (**(long **)(lVar3 + 0x1a8) != 0) {
    lVar6 = 0;
    do {
      lVar7 = *(long *)((long)*(long **)(lVar3 + 0x1a8) + lVar6 + 8);
      if (lVar7 == 0) break;
      iVar5 = (int)lVar6;
      lVar6 = lVar6 + 8;
    } while (iVar5 != 0x40);
    if (lVar7 != 0) {
      uVar8 = *(undefined4 *)(lVar7 + 8);
    }
  }
  *(undefined **)(lVar4 + 0x10) = PTR_s_Buff_Item_CrystalInfusion_10185ab80;
  *(undefined4 *)(lVar4 + 0x18) = uVar8;
  *(undefined2 *)(lVar4 + 0x68) = 1;
  *(byte *)(lVar4 + 0x6a) = *(byte *)(lVar4 + 0x6a) & 0xfe;
  lVar3 = FUN_10000c540();
  FUN_1003a985c(&local_30,lVar3);
  *(undefined **)(lVar3 + 0x10) = PTR_s_Buff_Item_WeaponInfusion_10185ab78;
  uVar2 = FUN_10000c784();
  FUN_1003a985c(&local_30,uVar2);
  uVar2 = FUN_10000f034();
  FUN_1003a985c(&local_30,uVar2);
  return local_30;
}




undefined8 FUN_10035aaec(void)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_30 = 0;
  uStack_28 = 0;
  plVar1 = (long *)FUN_10000f300();
  FUN_1003a985c(&local_30,plVar1);
  (**(code **)(*plVar1 + 0x50))(plVar1,"*ScoutTrap*",0);
  uVar2 = FUN_10000f034();
  FUN_1003a985c(&local_30,uVar2);
  return local_30;
}




undefined8 FUN_10035ab54(void)

{
  byte bVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  undefined4 uVar9;
  undefined8 local_50;
  undefined8 uStack_48;
  
  local_50 = 0;
  uStack_48 = 0;
  lVar3 = FUN_1003e10f0();
  puVar2 = PTR_s__Item_WarTreads__10185aba8;
  bVar1 = *(byte *)(lVar3 + 0xe5);
  uVar4 = FUN_1010a1520();
  lVar3 = FUN_1010a0e0c(uVar4,0,puVar2,0);
  uVar4 = FUN_10000bb2c();
  FUN_1003a985c(&local_50,uVar4);
  uVar4 = FUN_10000e1b4();
  FUN_1003a985c(&local_50,uVar4);
  FUN_1003a4cdc(0,uVar4,"Effect_WarTreads",1,"OverHead",0,1,0,0);
  uVar4 = FUN_10000c784();
  FUN_1003a985c(&local_50,uVar4);
  lVar5 = FUN_10000ed74();
  FUN_1003a985c(&local_50,lVar5);
  uVar9 = 0;
  if (**(long **)(lVar3 + 0x1a8) != 0) {
    lVar7 = 0;
    do {
      lVar8 = *(long *)((long)*(long **)(lVar3 + 0x1a8) + lVar7 + 8);
      iVar6 = (int)lVar7;
      lVar7 = lVar7 + 8;
    } while (lVar8 != 0 && iVar6 != 0x10);
    uVar9 = 0;
    if (lVar8 != 0) {
      uVar9 = *(undefined4 *)(lVar8 + 8);
    }
  }
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
  *(undefined8 *)(lVar5 + 0x60) = 0xffffffff00001000;
  *(undefined8 *)(lVar5 + 0x58) = 0xffffffff00000000;
  *(undefined2 *)(lVar5 + 0x68) = 0x4150;
  *(byte *)(lVar5 + 0x6a) = bVar1 | 0x14;
  *(undefined4 *)(lVar5 + 0xa4) = uVar9;
  *(byte *)(lVar5 + 0xa8) = *(byte *)(lVar5 + 0xa8) & 0xf0 | 1;
  lVar3 = FUN_10000bd3c();
  FUN_1003a985c(&local_50,lVar3);
  *(undefined **)(lVar3 + 0x10) = PTR_s_Buff_Item_WarTreads_Speed_10185abb0;
  *(code **)(lVar3 + 0x28) = FUN_1003b0b48;
  *(undefined2 *)(lVar3 + 0x68) = 1;
  *(byte *)(lVar3 + 0x6a) = *(byte *)(lVar3 + 0x6a) & 0xfe;
  uVar4 = FUN_10000f034();
  FUN_1003a985c(&local_50,uVar4);
  return local_50;
}




undefined8 FUN_10035ad18(void)

{
  byte bVar1;
  undefined *puVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  long lVar9;
  float fVar10;
  undefined4 uVar11;
  float fVar12;
  undefined8 local_60;
  undefined8 uStack_58;
  
  local_60 = 0;
  uStack_58 = 0;
  lVar4 = FUN_1003e10f0();
  bVar1 = *(byte *)(lVar4 + 0xe5);
  uVar5 = FUN_10000bb2c();
  FUN_1003a985c(&local_60,uVar5);
  lVar4 = FUN_10000c540();
  FUN_1003a985c(&local_60,lVar4);
  *(undefined **)(lVar4 + 0x10) = PTR_s_Buff_Stealth_10185aba0;
  uVar5 = FUN_10000c784();
  FUN_1003a985c(&local_60,uVar5);
  lVar4 = FUN_10000e524();
  FUN_1003a985c(&local_60,lVar4);
  uVar5 = FUN_1010a1520();
  lVar6 = FUN_1010a0e0c(uVar5,0,"*KindredSoundBalance*",0);
  fVar12 = *(float *)(lVar6 + 0x24);
  uVar5 = FUN_1010a1520();
  lVar6 = FUN_1010a0e0c(uVar5,0,"*KindredSoundBalance*",0);
  fVar10 = *(float *)(lVar6 + 8);
  *(char **)(lVar4 + 0x10) = "build://Sounds/ScoutTrap.assetbundle/sfx_scouttrap_beep.mp3";
  *(undefined2 *)(lVar4 + 0x30) = 0x1ff;
  *(undefined4 *)(lVar4 + 0x34) = 1;
  *(float *)(lVar4 + 0x3c) = fVar10 + fVar12;
  *(undefined4 *)(lVar4 + 0x40) = 0xffffffff;
  *(byte *)(lVar4 + 0x38) = *(byte *)(lVar4 + 0x38) & 0xf8 | 4;
  *(undefined8 *)(lVar4 + 0x48) = 0;
  puVar2 = PTR_s__Item_ScoutTrap__10185ab90;
  uVar5 = FUN_1010a1520();
  lVar4 = FUN_1010a0e0c(uVar5,0,puVar2,0);
  lVar6 = FUN_10000e1b4();
  FUN_1003a985c(&local_60,lVar6);
  uVar11 = 0;
  if (**(long **)(lVar4 + 0x1a8) != 0) {
    lVar7 = 8;
    do {
      lVar9 = *(long *)((long)*(long **)(lVar4 + 0x1a8) + lVar7);
      if (lVar9 == 0) break;
      iVar8 = (int)lVar7;
      lVar7 = lVar7 + 8;
    } while (iVar8 != 0x30);
    uVar11 = 0;
    if (lVar9 != 0) {
      uVar11 = *(undefined4 *)(lVar9 + 8);
    }
  }
  bVar1 = bVar1 | 0x14;
  *(undefined4 *)(lVar6 + 0x28) = 1;
  *(undefined4 *)(lVar6 + 0x2c) = uVar11;
  *(undefined8 *)(lVar6 + 0x40) = 0;
  *(ushort *)(lVar6 + 0x80) = *(ushort *)(lVar6 + 0x80) | 0x13;
  *(uint *)(lVar6 + 0x3c) = (uint)lVar6 & 0xffff;
  *(char **)(lVar6 + 0x20) = "Effect_ScoutTrap_Active";
  *(undefined4 *)(lVar6 + 0x10) = 0xfa340882;
  lVar6 = FUN_10000ceb8();
  FUN_1003a985c(&local_60,lVar6);
  uVar11 = 0;
  if (**(long **)(lVar4 + 0x1a8) != 0) {
    lVar7 = 8;
    do {
      lVar9 = *(long *)((long)*(long **)(lVar4 + 0x1a8) + lVar7);
      if (lVar9 == 0) break;
      iVar8 = (int)lVar7;
      lVar7 = lVar7 + 8;
    } while (iVar8 != 0x30);
    uVar11 = 0;
    if (lVar9 != 0) {
      uVar11 = *(undefined4 *)(lVar9 + 8);
    }
  }
  *(undefined4 *)(lVar6 + 0x2c) = uVar11;
  *(undefined8 *)(lVar6 + 0x10) = 0;
  uVar5 = FUN_10000e1b4();
  FUN_1003a985c(&local_60,uVar5);
  FUN_1003a4cdc(0x40000000,uVar5,"Effect_ScoutTrap_Explosion",0,"CenterBody",0,0,0,0);
  lVar6 = FUN_10000e524();
  FUN_1003a985c(&local_60,lVar6);
  uVar5 = FUN_1010a1520();
  lVar7 = FUN_1010a0e0c(uVar5,0,"*KindredSoundBalance*",0);
  fVar12 = *(float *)(lVar7 + 0x28);
  uVar5 = FUN_1010a1520();
  lVar7 = FUN_1010a0e0c(uVar5,0,"*KindredSoundBalance*",0);
  fVar10 = *(float *)(lVar7 + 0xc);
  *(char **)(lVar6 + 0x10) = "build://Sounds/Turret.assetbundle/turret_hits_player_01.mp3";
  *(undefined2 *)(lVar6 + 0x30) = 0x1ff;
  *(undefined4 *)(lVar6 + 0x34) = 0;
  *(float *)(lVar6 + 0x3c) = fVar10 + fVar12;
  *(undefined4 *)(lVar6 + 0x40) = 0xffffffff;
  *(byte *)(lVar6 + 0x38) = *(byte *)(lVar6 + 0x38) & 0xf8 | 4;
  *(undefined8 *)(lVar6 + 0x48) = 0;
  lVar6 = FUN_10000ed74();
  FUN_1003a985c(&local_60,lVar6);
  uVar11 = 0;
  if (**(long **)(lVar4 + 0x1a8) != 0) {
    lVar7 = 0;
    do {
      lVar9 = *(long *)((long)*(long **)(lVar4 + 0x1a8) + lVar7 + 8);
      if (lVar9 == 0) break;
      iVar8 = (int)lVar7;
      lVar7 = lVar7 + 8;
    } while (iVar8 != 0x20);
    uVar11 = 0;
    if (lVar9 != 0) {
      uVar11 = *(undefined4 *)(lVar9 + 8);
    }
  }
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
  *(undefined8 *)(lVar6 + 0x58) = 0xffffffff00000001;
  *(undefined2 *)(lVar6 + 0x68) = 0x4120;
  *(byte *)(lVar6 + 0x6a) = bVar1;
  bVar3 = DAT_101d23a38 != '\0';
  *(undefined4 *)(lVar6 + 0xa4) = uVar11;
  *(byte *)(lVar6 + 0xa8) = *(byte *)(lVar6 + 0xa8) & 0xf0 | bVar3;
  lVar6 = FUN_10000bd3c();
  FUN_1003a985c(&local_60,lVar6);
  uVar11 = 0;
  if (**(long **)(lVar4 + 0x1a8) != 0) {
    lVar7 = 8;
    do {
      lVar9 = *(long *)((long)*(long **)(lVar4 + 0x1a8) + lVar7);
      if (lVar9 == 0) break;
      iVar8 = (int)lVar7;
      lVar7 = lVar7 + 8;
    } while (iVar8 != 0x38);
    uVar11 = 0;
    if (lVar9 != 0) {
      uVar11 = *(undefined4 *)(lVar9 + 8);
    }
  }
  *(undefined **)(lVar6 + 0x10) = PTR_s_Buff_GloballyVisibleTrueSight_10185a878;
  *(undefined4 *)(lVar6 + 0x18) = uVar11;
  *(undefined2 *)(lVar6 + 0x68) = 1;
  *(byte *)(lVar6 + 0x6a) = *(byte *)(lVar6 + 0x6a) & 0xfe;
  lVar6 = FUN_10000bd3c();
  FUN_1003a985c(&local_60,lVar6);
  uVar11 = 0;
  if (**(long **)(lVar4 + 0x1a8) != 0) {
    lVar7 = 8;
    do {
      lVar9 = *(long *)((long)*(long **)(lVar4 + 0x1a8) + lVar7);
      if (lVar9 == 0) break;
      iVar8 = (int)lVar7;
      lVar7 = lVar7 + 8;
    } while (iVar8 != 0x38);
    uVar11 = 0;
    if (lVar9 != 0) {
      uVar11 = *(undefined4 *)(lVar9 + 8);
    }
  }
  *(undefined **)(lVar6 + 0x10) = PTR_s_Buff_ShowGloballyVisible_10185a880;
  *(undefined4 *)(lVar6 + 0x18) = uVar11;
  *(undefined2 *)(lVar6 + 0x68) = 1;
  *(byte *)(lVar6 + 0x6a) = *(byte *)(lVar6 + 0x6a) & 0xfe;
  uVar5 = FUN_10000c784();
  FUN_1003a985c(&local_60,uVar5);
  lVar6 = FUN_10000ed74();
  FUN_1003a985c(&local_60,lVar6);
  uVar11 = 0;
  if (**(long **)(lVar4 + 0x1a8) != 0) {
    lVar7 = 0;
    do {
      lVar9 = *(long *)((long)*(long **)(lVar4 + 0x1a8) + lVar7 + 8);
      if (lVar9 == 0) break;
      iVar8 = (int)lVar7;
      lVar7 = lVar7 + 8;
    } while (iVar8 != 0x20);
    uVar11 = 0;
    if (lVar9 != 0) {
      uVar11 = *(undefined4 *)(lVar9 + 8);
    }
  }
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
  *(undefined2 *)(lVar6 + 0x68) = 0x4120;
  *(byte *)(lVar6 + 0x6a) = bVar1;
  bVar3 = DAT_101d23a38 != '\0';
  *(undefined4 *)(lVar6 + 0xa4) = uVar11;
  *(byte *)(lVar6 + 0xa8) = *(byte *)(lVar6 + 0xa8) & 0xf0 | bVar3;
  lVar4 = FUN_10000cae4();
  FUN_1003a985c(&local_60,lVar4);
  *(code **)(lVar4 + 0x10) = FUN_1003b06d8;
  *(code **)(lVar4 + 0x18) = FUN_1003b074c;
  lVar4 = FUN_10000ceb8();
  FUN_1003a985c(&local_60,lVar4);
  *(undefined4 *)(lVar4 + 0x2c) = 0x3f000000;
  *(undefined8 *)(lVar4 + 0x10) = 0;
  uVar5 = FUN_10000d0cc();
  FUN_1003a985c(&local_60,uVar5);
  uVar5 = FUN_10000f034();
  FUN_1003a985c(&local_60,uVar5);
  return local_60;
}




undefined8 FUN_10035b2c4(void)

{
  byte bVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  undefined4 uVar9;
  undefined8 local_50;
  undefined8 uStack_48;
  
  local_50 = 0;
  uStack_48 = 0;
  lVar3 = FUN_1003e10f0();
  bVar1 = *(byte *)(lVar3 + 0xe5);
  uVar4 = FUN_10000bb2c();
  FUN_1003a985c(&local_50,uVar4);
  puVar2 = PTR_s__Item_AtlasPauldron__10185abb8;
  uVar4 = FUN_1010a1520();
  lVar3 = FUN_1010a0e0c(uVar4,0,puVar2,0);
  lVar5 = FUN_10000e1b4();
  FUN_1003a985c(&local_50,lVar5);
  uVar9 = 0;
  if (**(long **)(lVar3 + 0x1a8) != 0) {
    lVar7 = 0;
    do {
      lVar8 = *(long *)((long)*(long **)(lVar3 + 0x1a8) + lVar7 + 8);
      iVar6 = (int)lVar7;
      lVar7 = lVar7 + 8;
    } while (lVar8 != 0 && iVar6 != 0x10);
    uVar9 = 0;
    if (lVar8 != 0) {
      uVar9 = *(undefined4 *)(lVar8 + 8);
    }
  }
  *(undefined4 *)(lVar5 + 0x28) = 1;
  *(undefined4 *)(lVar5 + 0x2c) = uVar9;
  *(undefined8 *)(lVar5 + 0x40) = 0;
  *(ushort *)(lVar5 + 0x80) = *(ushort *)(lVar5 + 0x80) & 0xffef | 3;
  *(uint *)(lVar5 + 0x3c) = (uint)lVar5 & 0xffff;
  *(undefined8 *)(lVar5 + 0x20) = 0;
  *(undefined4 *)(lVar5 + 0x10) = 0x855f1fee;
  lVar5 = FUN_10000ceb8();
  FUN_1003a985c(&local_50,lVar5);
  uVar9 = 0;
  if (**(long **)(lVar3 + 0x1a8) != 0) {
    lVar7 = 0;
    do {
      lVar8 = *(long *)((long)*(long **)(lVar3 + 0x1a8) + lVar7 + 8);
      iVar6 = (int)lVar7;
      lVar7 = lVar7 + 8;
    } while (lVar8 != 0 && iVar6 != 0x10);
    uVar9 = 0;
    if (lVar8 != 0) {
      uVar9 = *(undefined4 *)(lVar8 + 8);
    }
  }
  *(undefined4 *)(lVar5 + 0x2c) = uVar9;
  *(undefined8 *)(lVar5 + 0x10) = 0;
  lVar5 = FUN_10000e1b4();
  FUN_1003a985c(&local_50,lVar5);
  *(undefined8 *)(lVar5 + 0x40) = 0;
  *(ushort *)(lVar5 + 0x80) = *(ushort *)(lVar5 + 0x80) & 0xffec | 2;
  *(uint *)(lVar5 + 0x3c) = (uint)lVar5 & 0xffff;
  *(undefined8 *)(lVar5 + 0x20) = 0;
  *(undefined8 *)(lVar5 + 0x28) = 1;
  *(undefined4 *)(lVar5 + 0x10) = 0xb663e900;
  uVar4 = FUN_10000c784();
  FUN_1003a985c(&local_50,uVar4);
  lVar5 = FUN_10000ed74();
  FUN_1003a985c(&local_50,lVar5);
  uVar9 = 0;
  if (**(long **)(lVar3 + 0x1a8) != 0) {
    lVar7 = 0;
    do {
      lVar8 = *(long *)((long)*(long **)(lVar3 + 0x1a8) + lVar7 + 8);
      iVar6 = (int)lVar7;
      lVar7 = lVar7 + 8;
    } while (lVar8 != 0 && iVar6 != 8);
    uVar9 = 0;
    if (lVar8 != 0) {
      uVar9 = *(undefined4 *)(lVar8 + 8);
    }
  }
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
  *(undefined8 *)(lVar5 + 0x58) = 0xffffffff00000001;
  *(undefined2 *)(lVar5 + 0x68) = 0x4120;
  *(byte *)(lVar5 + 0x6a) = bVar1 | 0x14;
  *(undefined4 *)(lVar5 + 0xa4) = uVar9;
  *(byte *)(lVar5 + 0xa8) = *(byte *)(lVar5 + 0xa8) & 0xf0 | 1;
  lVar5 = FUN_10000bd3c();
  FUN_1003a985c(&local_50,lVar5);
  uVar9 = 0;
  if ((**(long **)(lVar3 + 0x1a8) != 0) &&
     (lVar3 = (*(long **)(lVar3 + 0x1a8))[1], uVar9 = 0, lVar3 != 0)) {
    uVar9 = *(undefined4 *)(lVar3 + 8);
  }
  *(undefined **)(lVar5 + 0x10) = PTR_s_Buff_Item_AtlasPauldronSlow_10185abc0;
  *(undefined4 *)(lVar5 + 0x18) = uVar9;
  *(undefined2 *)(lVar5 + 0x68) = 1;
  *(byte *)(lVar5 + 0x6a) = *(byte *)(lVar5 + 0x6a) & 0xfe;
  uVar4 = FUN_10000f034();
  FUN_1003a985c(&local_50,uVar4);
  return local_50;
}




undefined8 FUN_10035b57c(void)

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
  *(undefined **)(lVar2 + 0x10) = PTR_s_Buff_Item_Shiversteel_10185abd0;
  *(code **)(lVar2 + 0x28) = FUN_1003b0c4c;
  *(undefined2 *)(lVar2 + 0x68) = 1;
  *(byte *)(lVar2 + 0x6a) = *(byte *)(lVar2 + 0x6a) & 0xfe;
  uVar1 = FUN_10000c784();
  FUN_1003a985c(&local_30,uVar1);
  uVar1 = FUN_10000f034();
  FUN_1003a985c(&local_30,uVar1);
  return local_30;
}




undefined8 FUN_10035b614(void)

{
  long *plVar1;
  undefined4 local_40 [2];
  undefined4 local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_30 = 0;
  uStack_28 = 0;
  plVar1 = (long *)FUN_10000de28();
  FUN_1003a985c(&local_30,plVar1);
  plVar1 = (long *)(**(code **)(*plVar1 + 0x50))(plVar1);
  local_40[0] = 0x447a0000;
  local_38 = 1;
  (**(code **)(*plVar1 + 0x10))(plVar1,6,local_40);
  return local_30;
}




undefined8 FUN_10035b684(void)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined4 local_40 [2];
  undefined4 local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_30 = 0;
  uStack_28 = 0;
  plVar1 = (long *)FUN_10000dd40();
  FUN_1003a985c(&local_30,plVar1);
  puVar2 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1);
  local_40[0] = 1;
  local_38 = 1;
  (**(code **)*puVar2)(puVar2,local_40);
  return local_30;
}




undefined8 FUN_10035b6ec(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  float fVar5;
  undefined8 local_50;
  undefined8 uStack_48;
  
  local_50 = 0;
  uStack_48 = 0;
  lVar1 = FUN_10000c8e8();
  FUN_1003a985c(&local_50,lVar1);
  lVar2 = FUN_10049ac6c(lVar1 + 0x10);
  *(code **)(lVar2 + 8) = FUN_1003b0658;
  plVar3 = (long *)FUN_10000f300();
  FUN_1003a985c(lVar1 + 0xb0,plVar3);
  (**(code **)(*plVar3 + 0x50))(plVar3,"*ScoutTrap*",0);
  lVar2 = FUN_10000f250();
  FUN_1003a985c(lVar1 + 200,lVar2);
  *(undefined4 *)(lVar2 + 0x10) = 0x25;
  FUN_1003d266c(lVar2,"CenterBody");
  *(undefined4 *)(lVar2 + 0x34) = 0;
  plVar3 = (long *)thunk_FUN_10000e5dc();
  FUN_1003a985c(lVar1 + 200,plVar3);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x58))(plVar3,"build://Sounds/Items/item_flare_start.mp3")
  ;
  uVar4 = FUN_1010a1520();
  lVar1 = FUN_1010a0e0c(uVar4,0,"*KindredSoundBalance*",0);
  fVar5 = *(float *)(lVar1 + 0x10);
  uVar4 = FUN_1010a1520();
  lVar1 = FUN_1010a0e0c(uVar4,0,"*KindredSoundBalance*",0);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x28))(*(float *)(lVar1 + 0xc) + fVar5,plVar3);
  (**(code **)(*plVar3 + 0x38))();
  uVar4 = FUN_10000f034();
  FUN_1003a985c(&local_50,uVar4);
  return local_50;
}




undefined8 FUN_10035b84c(void)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_30 = 0;
  uStack_28 = 0;
  plVar1 = (long *)FUN_10000f300();
  FUN_1003a985c(&local_30,plVar1);
  (**(code **)(*plVar1 + 0x50))(plVar1,"*Boombox*",0);
  uVar2 = FUN_10000f034();
  FUN_1003a985c(&local_30,uVar2);
  return local_30;
}




undefined8 FUN_10035b8b4(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_30 = 0;
  uStack_28 = 0;
  lVar1 = FUN_10000f250();
  FUN_1003a985c(&local_30,lVar1);
  *(undefined4 *)(lVar1 + 0x10) = 0x27;
  FUN_1003d266c(lVar1,"CenterBody");
  uVar2 = FUN_10000f034();
  FUN_1003a985c(&local_30,uVar2);
  return local_30;
}




undefined8 FUN_10035b918(void)

{
  long *plVar1;
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_30 = 0;
  uStack_28 = 0;
  plVar1 = (long *)FUN_10000f300();
  FUN_1003a985c(&local_30,plVar1);
  plVar1 = (long *)(**(code **)(*plVar1 + 0x50))(plVar1,PTR_s__VisionTotem__10185abd8,0);
  (**(code **)(*plVar1 + 0x20))(plVar1,FUN_1003b0c7c);
  return local_30;
}




undefined8 FUN_10035b984(void)

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
  uVar1 = FUN_1004d2524("Spawn");
  uVar1 = FUN_100015208("Spawn",uVar1,0x12345678);
  *(undefined4 *)(lVar2 + 0x10) = uVar1;
  uVar1 = FUN_1004d2524("AttackToIdle");
  uVar1 = FUN_100015208("AttackToIdle",uVar1,0x12345678);
  *(undefined4 *)(lVar2 + 0x20) = uVar1;
  uVar3 = FUN_10000f034();
  FUN_1003a985c(&local_30,uVar3);
  return local_30;
}




undefined8 FUN_10035ba2c(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  int *piVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  float fVar11;
  float fVar12;
  float local_70 [2];
  undefined4 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  fVar11 = (float)FUN_1003df6c8(PTR_s__Item_TeleportBoots__10185bad0,1,1);
  local_60 = 0;
  uStack_58 = 0;
  lVar3 = FUN_10000d8b8();
  FUN_1003a985c(&local_60,lVar3);
  *(undefined1 *)(lVar3 + 0x10) = 1;
  uVar4 = FUN_10000c6d4();
  FUN_1003a985c(&local_60,uVar4);
  lVar3 = FUN_10000dff8();
  FUN_1003a985c(&local_60,lVar3);
  *(undefined2 *)(lVar3 + 0x28) = 0x101;
  *(undefined8 *)(lVar3 + 0x30) = 0;
  uVar2 = FUN_1004d2524("Idle");
  uVar2 = FUN_100015208("Idle",uVar2,0x12345678);
  *(undefined4 *)(lVar3 + 0x10) = uVar2;
  *(undefined4 *)(lVar3 + 0x20) = 0;
  plVar5 = (long *)FUN_10000f300();
  FUN_1003a985c(&local_60,plVar5);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x50))(plVar5,"*GenericLocator*",0);
  uVar4 = (**(code **)(*plVar5 + 0x20))(plVar5,FUN_1003b1278);
  plVar5 = (long *)FUN_10000bfc0();
  FUN_1003a985c(&local_60,plVar5);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x50))
                             (plVar5,PTR_s_Buff_Item_TeleportBoots_EndPoint_10185abe0,uVar4);
  local_68 = 1;
  local_70[0] = fVar11;
  (**(code **)(*plVar5 + 0x18))(plVar5,local_70);
  plVar5 = (long *)FUN_10000bfc0();
  FUN_1003a985c(&local_60,plVar5);
  (**(code **)(*plVar5 + 0x50))(plVar5,PTR_s_Buff_GloballyVisibleTrueSight_10185a878,uVar4);
  plVar5 = (long *)thunk_FUN_10000e358();
  FUN_1003a985c(&local_60,plVar5);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x58))(plVar5);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x48))(plVar5,"Effect_Teleport_Channel");
  (**(code **)(*plVar5 + 0xb0))(plVar5,1);
  puVar1 = PTR_s__Item_SprintBoots__10185ab00;
  uVar4 = FUN_1010a1520();
  lVar3 = FUN_1010a0e0c(uVar4,0,puVar1,0);
  uVar4 = FUN_10000bb2c();
  FUN_1003a985c(&local_60,uVar4);
  lVar6 = FUN_10000bd3c();
  FUN_1003a985c(&local_60,lVar6);
  *(undefined **)(lVar6 + 0x10) = PTR_s_Buff_Item_TeleportBoots_Channeli_10185abe8;
  *(float *)(lVar6 + 0x18) = fVar11;
  *(undefined2 *)(lVar6 + 0x68) = 1;
  *(byte *)(lVar6 + 0x6a) = *(byte *)(lVar6 + 0x6a) & 0xfe;
  lVar6 = FUN_10000bd3c();
  FUN_1003a985c(&local_60,lVar6);
  fVar12 = 0.0;
  if (**(long **)(lVar3 + 0x1a8) != 0) {
    lVar9 = 0;
    do {
      lVar10 = *(long *)((long)*(long **)(lVar3 + 0x1a8) + lVar9 + 8);
      iVar8 = (int)lVar9;
      lVar9 = lVar9 + 8;
    } while (lVar10 != 0 && iVar8 != 8);
    if (lVar10 != 0) {
      fVar12 = *(float *)(lVar10 + 8);
    }
  }
  *(undefined **)(lVar6 + 0x10) = PTR_s_Buff_Item_SprintBootsSprint_10185ab08;
  *(float *)(lVar6 + 0x18) = fVar12 + fVar11;
  *(undefined2 *)(lVar6 + 0x68) = 1;
  *(byte *)(lVar6 + 0x6a) = *(byte *)(lVar6 + 0x6a) & 0xfe;
  uVar4 = FUN_10000c784();
  FUN_1003a985c(&local_60,uVar4);
  uVar4 = FUN_10000bc94();
  FUN_1003a985c(&local_60,uVar4);
  lVar3 = FUN_10000bd3c();
  FUN_1003a985c(&local_60,lVar3);
  *(undefined **)(lVar3 + 0x10) = PTR_s_Buff_Item_TeleportBoots_Structur_10185abf0;
  *(float *)(lVar3 + 0x18) = fVar11;
  *(undefined2 *)(lVar3 + 0x68) = 1;
  *(byte *)(lVar3 + 0x6a) = *(byte *)(lVar3 + 0x6a) & 0xfe;
  lVar3 = FUN_10000bd3c();
  FUN_1003a985c(&local_60,lVar3);
  *(undefined **)(lVar3 + 0x10) = PTR_s_Buff_GloballyVisibleTrueSight_10185a878;
  *(float *)(lVar3 + 0x18) = fVar11;
  *(undefined2 *)(lVar3 + 0x68) = 1;
  *(byte *)(lVar3 + 0x6a) = *(byte *)(lVar3 + 0x6a) & 0xfe;
  uVar4 = FUN_10000c784();
  FUN_1003a985c(&local_60,uVar4);
  lVar3 = FUN_10000ceb8();
  FUN_1003a985c(&local_60,lVar3);
  *(float *)(lVar3 + 0x2c) = fVar11 + -0.2;
  plVar5 = (long *)thunk_FUN_10000e358();
  FUN_1003a985c(&local_60,plVar5);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x58))(plVar5);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x48))(plVar5,"Effect_Teleport_Channel_End");
  (**(code **)(*plVar5 + 0x78))(plVar5,0);
  lVar3 = FUN_10000ceb8();
  FUN_1003a985c(&local_60,lVar3);
  *(undefined4 *)(lVar3 + 0x2c) = 0x3e4ccccd;
  uVar4 = FUN_10000bb2c();
  FUN_1003a985c(&local_60,uVar4);
  uVar4 = FUN_10000eed8();
  FUN_1003a985c(&local_60,uVar4);
  plVar5 = (long *)FUN_10000f830();
  FUN_1003a985c(&local_60,plVar5);
  (**(code **)(*plVar5 + 0x50))(plVar5,FUN_1003b1464);
  lVar3 = FUN_10000ec0c();
  FUN_1003a985c(&local_60,lVar3);
  *(code **)(lVar3 + 0x10) = FUN_1003b1660;
  piVar7 = (int *)(lVar3 + 0x18);
  if ((*piVar7 == 0) || (piVar7 = (int *)(lVar3 + 0x1c), *piVar7 == 0)) {
    FUN_1003a4e5c(piVar7,PTR_s_Buff_Item_TeleportBoots_EndPoint_10185abe0);
  }
  lVar3 = FUN_10000e474();
  FUN_1003a985c(&local_60,lVar3);
  *(undefined4 *)(lVar3 + 0x10) = 1;
  *(char **)(lVar3 + 0x18) = "Effect_Teleport_Finish";
  *(undefined8 *)(lVar3 + 0x28) = 0;
  *(undefined4 *)(lVar3 + 0x30) = 0x40000000;
  *(byte *)(lVar3 + 0x58) = *(byte *)(lVar3 + 0x58) & 0xfe;
  *(uint *)(lVar3 + 0x4c) = (uint)lVar3 & 0xffff;
  lVar3 = FUN_10000ceb8();
  FUN_1003a985c(&local_60,lVar3);
  *(undefined4 *)(lVar3 + 0x2c) = 0x3dcccccd;
  lVar3 = FUN_10000d8b8();
  FUN_1003a985c(&local_60,lVar3);
  *(undefined1 *)(lVar3 + 0x10) = 0;
  return local_60;
}




undefined8 FUN_10035bf00(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 local_40;
  undefined8 uStack_38;
  
  local_40 = 0;
  uStack_38 = 0;
  FUN_1003e10f0();
  uVar1 = FUN_10000bb2c();
  FUN_1003a985c(&local_40,uVar1);
  lVar2 = FUN_10000c540();
  FUN_1003a985c(&local_40,lVar2);
  *(undefined **)(lVar2 + 0x10) = PTR_s_Buff_Stealth_10185aba0;
  lVar2 = FUN_10000e524();
  FUN_1003a985c(&local_40,lVar2);
  *(char **)(lVar2 + 0x10) = "build://Sounds/UI.assetbundle/ui_tutorial_frontend_chest_open.mp3";
  *(undefined2 *)(lVar2 + 0x30) = 0x1ff;
  *(undefined4 *)(lVar2 + 0x34) = 1;
  *(undefined8 *)(lVar2 + 0x3c) = 0xffffffff3f800000;
  *(byte *)(lVar2 + 0x38) = *(byte *)(lVar2 + 0x38) & 0xf8;
  *(undefined8 *)(lVar2 + 0x48) = 0;
  lVar2 = FUN_10000ceb8();
  FUN_1003a985c(&local_40,lVar2);
  *(undefined4 *)(lVar2 + 0x2c) = 0x3fa66666;
  *(undefined8 *)(lVar2 + 0x10) = 0;
  uVar1 = FUN_10000e1b4();
  FUN_1003a985c(&local_40,uVar1);
  FUN_1003a4cdc(0x40000000,uVar1,"Effect_ScoutTrap_Explosion",0,"CenterBody",0,1,0,0);
  lVar2 = FUN_10000e524();
  FUN_1003a985c(&local_40,lVar2);
  *(char **)(lVar2 + 0x10) = "build://Sounds/UI.assetbundle/ui_tutorial_frontend_cards_whoosh.mp3";
  *(undefined2 *)(lVar2 + 0x30) = 0x1ff;
  *(undefined4 *)(lVar2 + 0x34) = 1;
  *(undefined8 *)(lVar2 + 0x3c) = 0xffffffff3f800000;
  *(byte *)(lVar2 + 0x38) = *(byte *)(lVar2 + 0x38) & 0xf8;
  *(undefined8 *)(lVar2 + 0x48) = 0;
  lVar2 = FUN_10000c3b0();
  FUN_1003a985c(&local_40,lVar2);
  *(code **)(lVar2 + 0x10) = FUN_1003b16a8;
  lVar2 = FUN_10000ceb8();
  FUN_1003a985c(&local_40,lVar2);
  *(undefined4 *)(lVar2 + 0x2c) = 0x3f000000;
  *(undefined8 *)(lVar2 + 0x10) = 0;
  uVar1 = FUN_10000d0cc();
  FUN_1003a985c(&local_40,uVar1);
  uVar1 = FUN_10000f034();
  FUN_1003a985c(&local_40,uVar1);
  return local_40;
}




void FUN_10035c0b4(undefined8 param_1,undefined8 param_2)

{
  FUN_1003ad750("Attack",param_2,FUN_1003a3a5c);
  return;
}




void FUN_10035c0c8(undefined8 param_1,undefined8 param_2)

{
  FUN_1003ad750("AltAttack",param_2,FUN_1003a3a5c);
  return;
}




void FUN_10035c0dc(undefined8 param_1,undefined8 param_2)

{
  FUN_1003ad750("CritAttack",param_2,FUN_1003a3acc);
  return;
}




undefined8 FUN_10035c0f0(void)

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




undefined8 FUN_10035c120(void)

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




undefined8 FUN_10035c150(void)

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




undefined8 FUN_10035c180(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
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
  uVar1 = FUN_1004d2524("Attack");
  uVar1 = FUN_100015208("Attack",uVar1,0x12345678);
  *(undefined4 *)(lVar3 + 0x10) = uVar1;
  uVar1 = FUN_1004d2524("AttackToIdle");
  uVar1 = FUN_100015208("AttackToIdle",uVar1,0x12345678);
  *(undefined4 *)(lVar3 + 0x20) = uVar1;
  lVar3 = FUN_10000e524();
  FUN_1003a985c(&local_50,lVar3);
  *(undefined2 *)(lVar3 + 0x30) = 0x3ff;
  *(undefined4 *)(lVar3 + 0x34) = 1;
  *(undefined8 *)(lVar3 + 0x3c) = 0xffffffff3f000000;
  *(byte *)(lVar3 + 0x38) = *(byte *)(lVar3 + 0x38) & 0xf8 | 4;
  *(undefined8 *)(lVar3 + 0x48) = 0;
  *(char **)(lVar3 + 0x10) = "Sound_Catherine_Stab_1";
  *(char **)(lVar3 + 0x18) = "Sound_Catherine_Stab_2";
  *(char **)(lVar3 + 0x20) = "Sound_Catherine_Stab_3";
  lVar3 = FUN_10000ceb8();
  FUN_1003a985c(&local_50,lVar3);
  *(code **)(lVar3 + 0x10) = FUN_1003a24a0;
  *(code **)(lVar3 + 0x18) = FUN_1003c5148;
  lVar3 = FUN_10000e1b4();
  FUN_1003a985c(&local_50,lVar3);
  *(undefined8 *)(lVar3 + 0x40) = 0;
  *(ushort *)(lVar3 + 0x80) = *(ushort *)(lVar3 + 0x80) & 0xffec | 2;
  *(uint *)(lVar3 + 0x3c) = (uint)lVar3 & 0xffff;
  *(undefined8 *)(lVar3 + 0x20) = 0;
  *(undefined8 *)(lVar3 + 0x28) = 1;
  *(undefined4 *)(lVar3 + 0x10) = 0xa6747405;
  lVar3 = FUN_10000e524();
  FUN_1003a985c(&local_50,lVar3);
  *(undefined2 *)(lVar3 + 0x30) = 0x3ff;
  *(undefined4 *)(lVar3 + 0x34) = 1;
  *(undefined8 *)(lVar3 + 0x3c) = 0xffffffff3f000000;
  *(byte *)(lVar3 + 0x38) = *(byte *)(lVar3 + 0x38) & 0xf8 | 4;
  *(undefined8 *)(lVar3 + 0x48) = 0;
  *(char **)(lVar3 + 0x10) = "Sound_Catherine_Sweep_Impact_1";
  *(char **)(lVar3 + 0x18) = "Sound_Catherine_Sweep_Impact_2";
  *(char **)(lVar3 + 0x20) = "Sound_Catherine_Sweep_Impact_3";
  plVar4 = (long *)FUN_10000cc74();
  FUN_1003a985c(&local_50,plVar4);
  (**(code **)(*plVar4 + 0x58))(plVar4,0);
  uVar2 = FUN_10000f034();
  FUN_1003a985c(&local_50,uVar2);
  return local_50;
}




undefined8 FUN_10035c394(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
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
  uVar1 = FUN_1004d2524("AltAttack");
  uVar1 = FUN_100015208("AltAttack",uVar1,0x12345678);
  *(undefined4 *)(lVar3 + 0x10) = uVar1;
  uVar1 = FUN_1004d2524("AttackToIdle");
  uVar1 = FUN_100015208("AttackToIdle",uVar1,0x12345678);
  *(undefined4 *)(lVar3 + 0x20) = uVar1;
  lVar3 = FUN_10000e524();
  FUN_1003a985c(&local_50,lVar3);
  *(undefined2 *)(lVar3 + 0x30) = 0x3ff;
  *(undefined4 *)(lVar3 + 0x34) = 1;
  *(undefined8 *)(lVar3 + 0x3c) = 0xffffffff3f000000;
  *(byte *)(lVar3 + 0x38) = *(byte *)(lVar3 + 0x38) & 0xf8 | 4;
  *(undefined8 *)(lVar3 + 0x48) = 0;
  *(char **)(lVar3 + 0x10) = "Sound_Catherine_Sweep_1";
  *(char **)(lVar3 + 0x18) = "Sound_Catherine_Sweep_2";
  *(char **)(lVar3 + 0x20) = "Sound_Catherine_Sweep_3";
  lVar3 = FUN_10000ceb8();
  FUN_1003a985c(&local_50,lVar3);
  *(code **)(lVar3 + 0x10) = FUN_1003a24a0;
  *(code **)(lVar3 + 0x18) = FUN_1003c5148;
  lVar3 = FUN_10000e1b4();
  FUN_1003a985c(&local_50,lVar3);
  *(undefined8 *)(lVar3 + 0x40) = 0;
  *(ushort *)(lVar3 + 0x80) = *(ushort *)(lVar3 + 0x80) & 0xffec | 2;
  *(uint *)(lVar3 + 0x3c) = (uint)lVar3 & 0xffff;
  *(undefined8 *)(lVar3 + 0x20) = 0;
  *(undefined8 *)(lVar3 + 0x28) = 1;
  *(undefined4 *)(lVar3 + 0x10) = 0x4ae6b8a8;
  lVar3 = FUN_10000e524();
  FUN_1003a985c(&local_50,lVar3);
  *(undefined2 *)(lVar3 + 0x30) = 0x3ff;
  *(undefined4 *)(lVar3 + 0x34) = 1;
  *(undefined8 *)(lVar3 + 0x3c) = 0xffffffff3f000000;
  *(byte *)(lVar3 + 0x38) = *(byte *)(lVar3 + 0x38) & 0xf8 | 4;
  *(undefined8 *)(lVar3 + 0x48) = 0;
  *(char **)(lVar3 + 0x10) = "Sound_Catherine_Sweep_Impact_1";
  *(char **)(lVar3 + 0x18) = "Sound_Catherine_Sweep_Impact_2";
  *(char **)(lVar3 + 0x20) = "Sound_Catherine_Sweep_Impact_3";
  plVar4 = (long *)FUN_10000cc74();
  FUN_1003a985c(&local_50,plVar4);
  (**(code **)(*plVar4 + 0x58))(plVar4,0);
  uVar2 = FUN_10000f034();
  FUN_1003a985c(&local_50,uVar2);
  return local_50;
}




undefined8 FUN_10035c5a8(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
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
  uVar1 = FUN_1004d2524("CritAttack");
  uVar1 = FUN_100015208("CritAttack",uVar1,0x12345678);
  *(undefined4 *)(lVar3 + 0x10) = uVar1;
  uVar1 = FUN_1004d2524("AttackToIdle");
  uVar1 = FUN_100015208("AttackToIdle",uVar1,0x12345678);
  *(undefined4 *)(lVar3 + 0x20) = uVar1;
  lVar3 = FUN_10000e524();
  FUN_1003a985c(&local_50,lVar3);
  *(undefined2 *)(lVar3 + 0x30) = 0x3ff;
  *(undefined4 *)(lVar3 + 0x34) = 1;
  *(undefined8 *)(lVar3 + 0x3c) = 0xffffffff3f000000;
  *(byte *)(lVar3 + 0x38) = *(byte *)(lVar3 + 0x38) & 0xf8 | 4;
  *(undefined8 *)(lVar3 + 0x48) = 0;
  *(char **)(lVar3 + 0x10) = "Sound_Catherine_Sweep_1";
  *(char **)(lVar3 + 0x18) = "Sound_Catherine_Sweep_2";
  *(char **)(lVar3 + 0x20) = "Sound_Catherine_Sweep_3";
  lVar3 = FUN_10000ceb8();
  FUN_1003a985c(&local_50,lVar3);
  *(code **)(lVar3 + 0x10) = FUN_1003a24a0;
  *(code **)(lVar3 + 0x18) = FUN_1003c5148;
  lVar3 = FUN_10000e1b4();
  FUN_1003a985c(&local_50,lVar3);
  *(undefined8 *)(lVar3 + 0x40) = 0;
  *(ushort *)(lVar3 + 0x80) = *(ushort *)(lVar3 + 0x80) & 0xffec | 2;
  *(uint *)(lVar3 + 0x3c) = (uint)lVar3 & 0xffff;
  *(undefined8 *)(lVar3 + 0x20) = 0;
  *(undefined8 *)(lVar3 + 0x28) = 1;
  *(undefined4 *)(lVar3 + 0x10) = 0xf47fcbd;
  lVar3 = FUN_10000e524();
  FUN_1003a985c(&local_50,lVar3);
  *(undefined2 *)(lVar3 + 0x30) = 0x3ff;
  *(undefined4 *)(lVar3 + 0x34) = 1;
  *(undefined8 *)(lVar3 + 0x3c) = 0xffffffff3f000000;
  *(byte *)(lVar3 + 0x38) = *(byte *)(lVar3 + 0x38) & 0xf8 | 4;
  *(undefined8 *)(lVar3 + 0x48) = 0;
  *(char **)(lVar3 + 0x10) = "Sound_Catherine_Stab_Impact_1";
  *(char **)(lVar3 + 0x18) = "Sound_Catherine_Stab_Impact_2";
  *(char **)(lVar3 + 0x20) = "Sound_Catherine_Stab_Impact_3";
  plVar4 = (long *)FUN_10000cc74();
  FUN_1003a985c(&local_50,plVar4);
  (**(code **)(*plVar4 + 0x58))(plVar4,2);
  uVar2 = FUN_10000f034();
  FUN_1003a985c(&local_50,uVar2);
  return local_50;
}




undefined8 FUN_10035c7bc(void)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  code *local_50;
  undefined4 local_48;
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
  *(code **)(lVar2 + 0x30) = FUN_1003a24a0;
  uVar1 = FUN_1004d2524("AssassinsChargeDefAttack");
  uVar1 = FUN_100015208("AssassinsChargeDefAttack",uVar1,0x12345678);
  *(undefined4 *)(lVar2 + 0x10) = uVar1;
  uVar1 = FUN_1004d2524("AttackToIdle");
  uVar1 = FUN_100015208("AttackToIdle",uVar1,0x12345678);
  *(undefined4 *)(lVar2 + 0x20) = uVar1;
  lVar2 = FUN_10000ceb8();
  FUN_1003a985c(&local_40,lVar2);
  *(code **)(lVar2 + 0x10) = FUN_1003a24a0;
  *(code **)(lVar2 + 0x18) = FUN_1003c5148;
  uVar3 = FUN_10000bc94();
  FUN_1003a985c(&local_40,uVar3);
  plVar4 = (long *)FUN_10000bed8();
  FUN_1003a985c(&local_40,plVar4);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x70))(plVar4,PTR_s_Buff_Stunned_10185a208);
  local_50 = FUN_1003a6ec8;
  local_48 = 3;
  (**(code **)(*plVar4 + 0x18))(plVar4,&local_50);
  plVar4 = (long *)FUN_10000cb8c();
  FUN_1003a985c(&local_40,plVar4);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))(plVar4);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x38))(plVar4,"Damage",1);
  (**(code **)(*plVar4 + 0x70))(plVar4,1);
  uVar3 = FUN_10000c784();
  FUN_1003a985c(&local_40,uVar3);
  lVar2 = FUN_10000e524();
  FUN_1003a985c(&local_40,lVar2);
  *(char **)(lVar2 + 0x10) = "Sound_Catherine_Ability_A_Impact";
  *(undefined2 *)(lVar2 + 0x30) = 0x1ff;
  *(undefined4 *)(lVar2 + 0x34) = 1;
  *(undefined8 *)(lVar2 + 0x3c) = 0xffffffff3f000000;
  *(byte *)(lVar2 + 0x38) = *(byte *)(lVar2 + 0x38) & 0xf8 | 4;
  *(undefined8 *)(lVar2 + 0x48) = 0;
  lVar2 = FUN_10000e1b4();
  FUN_1003a985c(&local_40,lVar2);
  *(undefined8 *)(lVar2 + 0x40) = 0;
  *(ushort *)(lVar2 + 0x80) = *(ushort *)(lVar2 + 0x80) & 0xffec | 2;
  *(uint *)(lVar2 + 0x3c) = (uint)lVar2 & 0xffff;
  *(undefined8 *)(lVar2 + 0x20) = 0;
  *(undefined8 *)(lVar2 + 0x28) = 1;
  *(undefined4 *)(lVar2 + 0x10) = 0x7f61e5ce;
  uVar3 = FUN_10000bb2c();
  FUN_1003a985c(&local_40,uVar3);
  lVar2 = FUN_10000c540();
  FUN_1003a985c(&local_40,lVar2);
  *(undefined **)(lVar2 + 0x10) = PTR_s_Buff_Catherine_MercilessPursuit__10185a540;
  lVar2 = FUN_10000c540();
  FUN_1003a985c(&local_40,lVar2);
  *(undefined **)(lVar2 + 0x10) = PTR_s_Buff_Catherine_MercilessPursuit__10185a548;
  uVar3 = FUN_10000c784();
  FUN_1003a985c(&local_40,uVar3);
  lVar2 = FUN_10000ceb8();
  FUN_1003a985c(&local_40,lVar2);
  *(code **)(lVar2 + 0x20) = FUN_1003a6edc;
  *(code **)(lVar2 + 0x10) = FUN_1003a24a0;
  lVar2 = FUN_10000d8b8();
  FUN_1003a985c(&local_40,lVar2);
  *(undefined1 *)(lVar2 + 0x10) = 0;
  plVar4 = (long *)thunk_FUN_10000e6f4();
  FUN_1003a985c(&local_40,plVar4);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))(plVar4,"ability1");
  (**(code **)(*plVar4 + 0x18))(0x3ea8f5c3);
  uVar3 = FUN_10000f034();
  FUN_1003a985c(&local_40,uVar3);
  return local_40;
}




undefined8 FUN_10035cae8(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 local_40;
  undefined8 uStack_38;
  
  local_40 = 0;
  uStack_38 = 0;
  lVar1 = FUN_10000e524();
  FUN_1003a985c(&local_40,lVar1);
  *(char **)(lVar1 + 0x10) = "Sound_Catherine_Ability_A";
  *(undefined2 *)(lVar1 + 0x30) = 0x1ff;
  *(undefined4 *)(lVar1 + 0x34) = 1;
  *(undefined8 *)(lVar1 + 0x3c) = 0xffffffff3f000000;
  *(byte *)(lVar1 + 0x38) = *(byte *)(lVar1 + 0x38) & 0xf8 | 4;
  *(undefined8 *)(lVar1 + 0x48) = 0;
  uVar2 = FUN_10000bb2c();
  FUN_1003a985c(&local_40,uVar2);
  lVar1 = FUN_10000bd3c();
  FUN_1003a985c(&local_40,lVar1);
  *(undefined **)(lVar1 + 0x10) = PTR_s_Buff_Catherine_MercilessPursuit__10185a548;
  *(code **)(lVar1 + 0x30) = FUN_1003a6ef0;
  *(undefined2 *)(lVar1 + 0x68) = 1;
  *(byte *)(lVar1 + 0x6a) = *(byte *)(lVar1 + 0x6a) & 0xfe;
  lVar1 = FUN_10000bd3c();
  FUN_1003a985c(&local_40,lVar1);
  *(undefined **)(lVar1 + 0x10) = PTR_s_Buff_Catherine_MercilessPursuit__10185a540;
  *(code **)(lVar1 + 0x30) = FUN_1003a6ef0;
  *(undefined2 *)(lVar1 + 0x68) = 1;
  *(byte *)(lVar1 + 0x6a) = *(byte *)(lVar1 + 0x6a) & 0xfe;
  uVar2 = FUN_10000c784();
  FUN_1003a985c(&local_40,uVar2);
  lVar1 = FUN_10000e7fc();
  FUN_1003a985c(&local_40,lVar1);
  *(undefined4 *)(lVar1 + 0x10) = 0;
  uVar2 = FUN_10000f034();
  FUN_1003a985c(&local_40,uVar2);
  return local_40;
}




undefined8 FUN_10035cc20(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_30 = 0;
  uStack_28 = 0;
  lVar1 = FUN_10000e524();
  FUN_1003a985c(&local_30,lVar1);
  *(char **)(lVar1 + 0x10) = "Sound_Catherine_Ability_B";
  *(undefined2 *)(lVar1 + 0x30) = 0x1ff;
  *(undefined4 *)(lVar1 + 0x34) = 1;
  *(undefined8 *)(lVar1 + 0x3c) = 0xffffffff3f000000;
  *(byte *)(lVar1 + 0x38) = *(byte *)(lVar1 + 0x38) & 0xf8 | 4;
  *(undefined8 *)(lVar1 + 0x48) = 0;
  lVar1 = FUN_10000e1b4();
  FUN_1003a985c(&local_30,lVar1);
  *(undefined8 *)(lVar1 + 0x40) = 0;
  *(ushort *)(lVar1 + 0x80) = *(ushort *)(lVar1 + 0x80) & 0xffef | 3;
  *(uint *)(lVar1 + 0x3c) = (uint)lVar1 & 0xffff;
  *(undefined8 *)(lVar1 + 0x20) = 0;
  *(undefined8 *)(lVar1 + 0x28) = 1;
  *(undefined4 *)(lVar1 + 0x10) = 0x39d07651;
  uVar2 = FUN_10000f034();
  FUN_1003a985c(&local_30,uVar2);
  return local_30;
}




undefined8 FUN_10035cce8(void)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  code *local_40;
  undefined4 local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_30 = 0;
  uStack_28 = 0;
  plVar1 = (long *)thunk_FUN_10000e6f4();
  FUN_1003a985c(&local_30,plVar1);
  plVar1 = (long *)(**(code **)(*plVar1 + 0x50))(plVar1,"ability2");
  (**(code **)(*plVar1 + 0x18))(0x3ea8f5c3);
  lVar2 = FUN_10000e524();
  FUN_1003a985c(&local_30,lVar2);
  *(char **)(lVar2 + 0x10) = "Sound_Catherine_Ability_B";
  *(undefined2 *)(lVar2 + 0x30) = 0x1ff;
  *(undefined4 *)(lVar2 + 0x34) = 1;
  *(undefined8 *)(lVar2 + 0x3c) = 0xffffffff3f000000;
  *(byte *)(lVar2 + 0x38) = *(byte *)(lVar2 + 0x38) & 0xf8 | 4;
  *(undefined8 *)(lVar2 + 0x48) = 0;
  plVar1 = (long *)FUN_10000bdf0();
  FUN_1003a985c(&local_30,plVar1);
  plVar1 = (long *)(**(code **)(*plVar1 + 0x50))(plVar1,PTR_s_Buff_Catherine_Stormguard_10185a550);
  local_40 = FUN_1003a6f04;
  local_38 = 3;
  (**(code **)(*plVar1 + 0x18))(plVar1,&local_40);
  lVar2 = FUN_10000ceb8();
  FUN_1003a985c(&local_30,lVar2);
  *(code **)(lVar2 + 0x20) = FUN_1003a6f04;
  *(undefined8 *)(lVar2 + 0x10) = 0;
  uVar3 = FUN_10000f034();
  FUN_1003a985c(&local_30,uVar3);
  return local_30;
}




undefined8 FUN_10035ce1c(void)

{
  byte bVar1;
  byte bVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined4 local_e0 [2];
  undefined4 local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  code *local_c0;
  undefined4 local_b8;
  undefined8 local_ad;
  undefined4 uStack_a5;
  undefined4 uStack_a1;
  undefined4 local_9d;
  undefined4 uStack_99;
  undefined4 local_95;
  undefined8 local_90;
  undefined8 uStack_88;
  
  local_90 = 0;
  uStack_88 = 0;
  lVar4 = FUN_1003e10f0();
  bVar1 = *(byte *)(lVar4 + 0xe5);
  uVar8 = _cosf(0x3f490fdb);
  local_ad = 0;
  local_9d = 0;
  uStack_99 = 0;
  uStack_a5 = 0;
  uStack_a1 = 0;
  local_95 = 0;
  lVar4 = FUN_1003e10f0();
  bVar2 = *(byte *)(lVar4 + 0xe5);
  uVar5 = FUN_10000ef8c();
  FUN_1003a985c(&local_90,uVar5);
  lVar4 = FUN_10000d8b8();
  FUN_1003a985c(&local_90,lVar4);
  *(undefined1 *)(lVar4 + 0x10) = 1;
  lVar4 = FUN_10000dff8();
  FUN_1003a985c(&local_90,lVar4);
  *(undefined2 *)(lVar4 + 0x28) = 0x100;
  *(undefined8 *)(lVar4 + 0x30) = 0;
  uVar3 = FUN_1004d2524("DeadlyGrace");
  uVar3 = FUN_100015208("DeadlyGrace",uVar3,0x12345678);
  *(undefined4 *)(lVar4 + 0x10) = uVar3;
  uVar3 = FUN_1004d2524("AttackToIdle");
  uVar3 = FUN_100015208("AttackToIdle",uVar3,0x12345678);
  *(undefined4 *)(lVar4 + 0x20) = uVar3;
  plVar6 = (long *)thunk_FUN_10000e6f4();
  FUN_1003a985c(&local_90,plVar6);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x50))(plVar6,"ability3");
  (**(code **)(*plVar6 + 0x18))(0x3ea8f5c3);
  lVar4 = FUN_10000ceb8();
  FUN_1003a985c(&local_90,lVar4);
  *(code **)(lVar4 + 0x20) = FUN_1003a6f18;
  *(undefined8 *)(lVar4 + 0x10) = 0;
  plVar6 = (long *)FUN_10000bdf0();
  FUN_1003a985c(&local_90,plVar6);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x50))(plVar6,PTR_s_Buff_Revealed_10185a448);
  local_c0._0_4_ = 0x40400000;
  local_b8 = 1;
  (**(code **)(*plVar6 + 0x18))(plVar6,&local_c0);
  lVar4 = FUN_10000e524();
  FUN_1003a985c(&local_90,lVar4);
  *(char **)(lVar4 + 0x10) = "Sound_Catherine_Ability_C";
  *(undefined2 *)(lVar4 + 0x30) = 0x1ff;
  *(undefined4 *)(lVar4 + 0x34) = 1;
  *(undefined8 *)(lVar4 + 0x3c) = 0xffffffff3f000000;
  *(byte *)(lVar4 + 0x38) = *(byte *)(lVar4 + 0x38) & 0xf8 | 4;
  *(undefined8 *)(lVar4 + 0x48) = 0;
  lVar4 = FUN_10000e1b4();
  FUN_1003a985c(&local_90,lVar4);
  *(undefined8 *)(lVar4 + 0x40) = 0;
  *(ushort *)(lVar4 + 0x80) = *(ushort *)(lVar4 + 0x80) & 0xffec | 2;
  *(uint *)(lVar4 + 0x3c) = (uint)lVar4 & 0xffff;
  *(undefined8 *)(lVar4 + 0x20) = 0;
  *(undefined8 *)(lVar4 + 0x28) = 1;
  *(undefined4 *)(lVar4 + 0x10) = 0xe7d016f8;
  lVar4 = FUN_10000ceb8();
  FUN_1003a985c(&local_90,lVar4);
  *(undefined4 *)(lVar4 + 0x2c) = 0x3dcccccd;
  *(undefined8 *)(lVar4 + 0x10) = 0;
  plVar6 = (long *)thunk_FUN_10000f1a0();
  FUN_1003a985c(&local_90,plVar6);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x68))(plVar6);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x10))(0x3f19999a);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x18))(0x3f4ccccd);
  (**(code **)(*plVar6 + 0x20))(0x41700000);
  lVar4 = FUN_10000ed74();
  FUN_1003a985c(&local_90,lVar4);
  *(undefined8 *)(lVar4 + 0x18) = 0;
  *(undefined1 *)(lVar4 + 0x20) = 1;
  *(undefined8 *)(lVar4 + 0x24) = 0;
  *(undefined8 *)(lVar4 + 0x34) = 0;
  *(undefined8 *)(lVar4 + 0x2c) = 0;
  *(undefined4 *)(lVar4 + 0x3c) = 0;
  uVar9 = NEON_fmov(0xbf800000,4);
  *(undefined8 *)(lVar4 + 0x40) = uVar9;
  *(undefined4 *)(lVar4 + 0x48) = uVar8;
  *(undefined8 *)(lVar4 + 0x4c) = 0x3f800000bf800000;
  *(undefined1 *)(lVar4 + 0x54) = 0xff;
  *(undefined8 *)(lVar4 + 0x60) = 0xffffffff00000000;
  *(undefined8 *)(lVar4 + 0x58) = 0xffffffff00040000;
  *(byte *)(lVar4 + 0x6a) = bVar1 | 0x14;
  *(undefined2 *)(lVar4 + 0x68) = 0x6120;
  *(code **)(lVar4 + 0x78) = FUN_1003a6f2c;
  *(byte *)(lVar4 + 0xa8) = *(byte *)(lVar4 + 0xa8) & 0xf0 | 1;
  lVar4 = FUN_10000c8e8();
  FUN_1003a985c(&local_90,lVar4);
  lVar7 = FUN_10049ab34(lVar4 + 0x10);
  *(undefined **)(lVar7 + 8) = PTR_s_Buff_Catherine_Talent_Shockwave_10185a558;
  lVar4 = lVar4 + 0xb0;
  plVar6 = (long *)FUN_10000bed8();
  FUN_1003a985c(lVar4,plVar6);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x70))(plVar6,PTR_s_Buff_GloballyVisible_10185a1f0);
  local_c0 = (code *)CONCAT44(local_c0._4_4_,0x3f800000);
  local_b8 = 1;
  (**(code **)(*plVar6 + 0x18))(plVar6,&local_c0);
  plVar6 = (long *)FUN_10000bed8();
  FUN_1003a985c(lVar4,plVar6);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x70))(plVar6,PTR_s_Buff_Stunned_10185a208);
  local_c0 = FUN_1003a6f40;
  local_b8 = 3;
  (**(code **)(*plVar6 + 0x18))(plVar6,&local_c0);
  plVar6 = (long *)FUN_10000d7d0();
  FUN_1003a985c(lVar4,plVar6);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x50))(plVar6);
  local_c0 = FUN_1003a6f74;
  local_b8 = 3;
  plVar6 = (long *)(**(code **)(*plVar6 + 0x20))(plVar6,&local_c0);
  local_d0 = FUN_1003a6f40;
  local_c8 = 3;
  plVar6 = (long *)(**(code **)(*plVar6 + 0x18))(plVar6,&local_d0);
  local_e0[0] = 0x40a00000;
  local_d8 = 1;
  (**(code **)(*plVar6 + 0x30))(plVar6,local_e0);
  uVar5 = FUN_10000cb8c();
  FUN_1003a985c(&local_90,uVar5);
  lVar4 = FUN_10000e474();
  FUN_1003a985c(&local_90,lVar4);
  *(undefined4 *)(lVar4 + 0x10) = 2;
  *(char **)(lVar4 + 0x18) = "Effect_Catherine_UltImpact";
  *(undefined4 *)(lVar4 + 0x20) = 0x3e3270a0;
  *(undefined8 *)(lVar4 + 0x28) = 0;
  *(undefined4 *)(lVar4 + 0x30) = 0x3f800000;
  *(byte *)(lVar4 + 0x58) = *(byte *)(lVar4 + 0x58) | 1;
  *(uint *)(lVar4 + 0x4c) = (uint)lVar4 & 0xffff;
  uVar5 = FUN_10000c784();
  FUN_1003a985c(&local_90,uVar5);
  lVar4 = FUN_10000c8e8();
  FUN_1003a985c(&local_90,lVar4);
  lVar7 = FUN_10049ab34(lVar4 + 0x10);
  *(undefined **)(lVar7 + 8) = PTR_s_Buff_Catherine_Talent_Shockwave_10185a558;
  lVar7 = FUN_10000ed74();
  FUN_1003a985c(lVar4 + 200,lVar7);
  *(undefined8 *)(lVar7 + 0x18) = 0;
  *(undefined1 *)(lVar7 + 0x20) = 1;
  *(ulong *)(lVar7 + 0x2c) = CONCAT44(uStack_a1,uStack_a5);
  *(undefined8 *)(lVar7 + 0x24) = local_ad;
  *(ulong *)(lVar7 + 0x38) = CONCAT44(local_95,uStack_99);
  *(ulong *)(lVar7 + 0x30) = CONCAT44(local_9d,uStack_a1);
  *(undefined8 *)(lVar7 + 0x40) = uVar9;
  *(undefined4 *)(lVar7 + 0x48) = uVar8;
  *(undefined8 *)(lVar7 + 0x4c) = 0x3f800000bf800000;
  *(undefined1 *)(lVar7 + 0x54) = 0xff;
  *(undefined2 *)(lVar7 + 0x55) = (undefined2)local_d0;
  *(undefined1 *)(lVar7 + 0x57) = local_d0._2_1_;
  *(undefined8 *)(lVar7 + 0x60) = 0xffffffff00000000;
  *(undefined8 *)(lVar7 + 0x58) = 0xffffffff00000001;
  *(byte *)(lVar7 + 0x6a) = bVar2 | 0x14;
  *(undefined2 *)(lVar7 + 0x68) = 0x6120;
  *(code **)(lVar7 + 0x78) = FUN_1003a6f2c;
  *(byte *)(lVar7 + 0xa8) = *(byte *)(lVar7 + 0xa8) & 0xf0 | 1;
  plVar6 = (long *)FUN_10000bed8();
  FUN_1003a985c(lVar4 + 200,plVar6);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x70))(plVar6,PTR_s_Buff_Silence_10185a560);
  local_c0 = FUN_1003a6fa8;
  local_b8 = 3;
  (**(code **)(*plVar6 + 0x18))(plVar6,&local_c0);
  uVar5 = FUN_10000c784();
  FUN_1003a985c(&local_90,uVar5);
  lVar4 = FUN_10000ceb8();
  FUN_1003a985c(&local_90,lVar4);
  *(code **)(lVar4 + 0x20) = FUN_1003a6fbc;
  *(undefined8 *)(lVar4 + 0x10) = 0;
  lVar4 = FUN_10000d8b8();
  FUN_1003a985c(&local_90,lVar4);
  *(undefined1 *)(lVar4 + 0x10) = 0;
  uVar5 = FUN_10000f034();
  FUN_1003a985c(&local_90,uVar5);
  return local_90;
}




void FUN_10035d494(void)

{
  FUN_1003bc0a0("Attack","Effect_Ringo_MuzzleFlash","GunMuzzleTip_Attack",FUN_1003bbad4,0);
  return;
}




void FUN_10035d4bc(void)

{
  FUN_1003bc0a0("AltAttack","Effect_Ringo_MuzzleFlash","GunMuzzleTip_Attack",FUN_1003bbb84,0);
  return;
}




void FUN_10035d4e4(void)

{
  FUN_1003bc0a0("CritAttack","Effect_Ringo_CritMuzzleFlash","GunMuzzleTip_CritAttack",FUN_1003bbc34,
                0);
  return;
}




void FUN_10035d50c(void)

{
  FUN_1003bc0a0("CritAttack","Effect_Ringo_CritMuzzleFlash","GunMuzzleTip_CritAttack",FUN_1003bbc34,
                1);
  return;
}




undefined8 FUN_10035d534(void)

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
  lVar2 = FUN_10000ef8c();
  FUN_1003a985c(&local_40,lVar2);
  *(byte *)(lVar2 + 0x10) = *(byte *)(lVar2 + 0x10) & 0xe7 | 4;
  lVar2 = FUN_10000dff8();
  FUN_1003a985c(&local_40,lVar2);
  *(undefined2 *)(lVar2 + 0x28) = 0x100;
  *(undefined8 *)(lVar2 + 0x30) = 0;
  uVar1 = FUN_1004d2524("AchillesCut");
  uVar1 = FUN_100015208("AchillesCut",uVar1,0x12345678);
  *(undefined4 *)(lVar2 + 0x10) = uVar1;
  uVar1 = FUN_1004d2524("AttackToIdle");
  uVar1 = FUN_100015208("AttackToIdle",uVar1,0x12345678);
  *(undefined4 *)(lVar2 + 0x20) = uVar1;
  lVar2 = FUN_10000e524();
  FUN_1003a985c(&local_40,lVar2);
  uVar3 = FUN_1010a1520();
  lVar4 = FUN_1010a0e0c(uVar3,0,"*KindredSoundBalance*",0);
  uVar1 = FUN_1003bc3c8(*(undefined4 *)(lVar4 + 0x78));
  *(char **)(lVar2 + 0x10) = "Sound_Ringo_Ability_A";
  *(undefined2 *)(lVar2 + 0x30) = 0x1ff;
  *(undefined4 *)(lVar2 + 0x34) = 1;
  *(undefined4 *)(lVar2 + 0x3c) = uVar1;
  *(undefined4 *)(lVar2 + 0x40) = 0xffffffff;
  *(byte *)(lVar2 + 0x38) = *(byte *)(lVar2 + 0x38) & 0xf8 | 4;
  *(undefined8 *)(lVar2 + 0x48) = 0;
  lVar2 = FUN_10000ceb8();
  FUN_1003a985c(&local_40,lVar2);
  *(undefined4 *)(lVar2 + 0x2c) = 0x3e4ccccd;
  *(undefined8 *)(lVar2 + 0x10) = 0;
  uVar3 = FUN_10000e1b4();
  FUN_1003a985c(&local_40,uVar3);
  FUN_1003a4cdc(0x3f800000,uVar3,"Effect_Ringo_MuzzleFlash",0,"Projectile_RightHandThrow",0,1,0,0);
  lVar2 = FUN_10000f250();
  FUN_1003a985c(&local_40,lVar2);
  *(undefined4 *)(lVar2 + 0x10) = 0x5d;
  FUN_1003d266c(lVar2,"Projectile_RightHandThrow");
  lVar2 = FUN_10000d8b8();
  FUN_1003a985c(&local_40,lVar2);
  *(undefined1 *)(lVar2 + 0x10) = 0;
  uVar3 = FUN_10000f034();
  FUN_1003a985c(&local_40,uVar3);
  lVar2 = FUN_10000ceb8();
  FUN_1003a985c(&local_40,lVar2);
  *(undefined4 *)(lVar2 + 0x2c) = 0x3e4ccccd;
  *(undefined8 *)(lVar2 + 0x10) = 0;
  return local_40;
}




undefined8 FUN_10035d758(void)

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
  *(undefined **)(lVar2 + 0x10) = PTR_s_Buff_Ringo_TwirlingSilver_10185af80;
  *(code **)(lVar2 + 0x28) = FUN_1003bc42c;
  *(undefined2 *)(lVar2 + 0x68) = 1;
  *(byte *)(lVar2 + 0x6a) = *(byte *)(lVar2 + 0x6a) & 0xfe;
  uVar1 = FUN_10000f034();
  FUN_1003a985c(&local_30,uVar1);
  return local_30;
}




undefined8 FUN_10035d7e0(void)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 local_40;
  undefined8 uStack_38;
  
  local_40 = 0;
  uStack_38 = 0;
  lVar2 = FUN_10000dff8();
  FUN_1003a985c(&local_40,lVar2);
  *(undefined2 *)(lVar2 + 0x28) = 0x100;
  *(undefined8 *)(lVar2 + 0x30) = 0;
  uVar1 = FUN_1004d2524("HeartOfTheMatter");
  uVar1 = FUN_100015208("HeartOfTheMatter",uVar1,0x12345678);
  *(undefined4 *)(lVar2 + 0x10) = uVar1;
  *(undefined4 *)(lVar2 + 0x20) = 0;
  lVar2 = FUN_10000e1b4();
  FUN_1003a985c(&local_40,lVar2);
  *(undefined8 *)(lVar2 + 0x40) = 0;
  *(ushort *)(lVar2 + 0x80) = *(ushort *)(lVar2 + 0x80) & 0xffef | 3;
  *(uint *)(lVar2 + 0x3c) = (uint)lVar2 & 0xffff;
  *(undefined8 *)(lVar2 + 0x20) = 0;
  *(undefined8 *)(lVar2 + 0x28) = 1;
  *(undefined4 *)(lVar2 + 0x10) = 0x24ca3dd9;
  lVar2 = FUN_10000e1b4();
  FUN_1003a985c(&local_40,lVar2);
  *(undefined8 *)(lVar2 + 0x20) = 0;
  *(undefined8 *)(lVar2 + 0x28) = 0x3ff9999a00000003;
  *(undefined8 *)(lVar2 + 0x40) = 0;
  *(ushort *)(lVar2 + 0x80) = *(ushort *)(lVar2 + 0x80) & 0xffef | 3;
  *(uint *)(lVar2 + 0x3c) = (uint)lVar2 & 0xffff;
  *(undefined4 *)(lVar2 + 0x10) = 0xa98a2b26;
  *(char **)(lVar2 + 0x18) = "Bone_HeartOfTheMatter_Aura";
  lVar2 = FUN_10000e524();
  FUN_1003a985c(&local_40,lVar2);
  uVar3 = FUN_1010a1520();
  lVar4 = FUN_1010a0e0c(uVar3,0,"*KindredSoundBalance*",0);
  uVar1 = FUN_1003bc3c8(*(undefined4 *)(lVar4 + 0x80));
  *(char **)(lVar2 + 0x10) = "Sound_Ringo_Ability_C_Intro";
  *(undefined2 *)(lVar2 + 0x30) = 0x1ff;
  *(undefined4 *)(lVar2 + 0x34) = 1;
  *(undefined4 *)(lVar2 + 0x3c) = uVar1;
  *(undefined4 *)(lVar2 + 0x40) = 0xffffffff;
  *(byte *)(lVar2 + 0x38) = *(byte *)(lVar2 + 0x38) & 0xf8 | 4;
  *(undefined8 *)(lVar2 + 0x48) = 0;
  lVar2 = FUN_10000d8b8();
  FUN_1003a985c(&local_40,lVar2);
  *(undefined1 *)(lVar2 + 0x10) = 1;
  lVar2 = FUN_10000ef8c();
  FUN_1003a985c(&local_40,lVar2);
  *(byte *)(lVar2 + 0x10) = *(byte *)(lVar2 + 0x10) & 0xe7 | 4;
  lVar2 = FUN_10000ceb8();
  FUN_1003a985c(&local_40,lVar2);
  *(undefined4 *)(lVar2 + 0x2c) = 0x3fd9999a;
  *(undefined8 *)(lVar2 + 0x10) = 0;
  uVar3 = FUN_10000bc94();
  FUN_1003a985c(&local_40,uVar3);
  lVar2 = FUN_10000e474();
  FUN_1003a985c(&local_40,lVar2);
  *(undefined4 *)(lVar2 + 0x10) = 1;
  *(char **)(lVar2 + 0x18) = "Effect_Ringo_Ult_Tell";
  *(undefined8 *)(lVar2 + 0x28) = 0;
  *(undefined4 *)(lVar2 + 0x30) = 0x3f800000;
  *(byte *)(lVar2 + 0x58) = *(byte *)(lVar2 + 0x58) | 1;
  *(uint *)(lVar2 + 0x4c) = (uint)lVar2 & 0xffff;
  uVar3 = FUN_10000c784();
  FUN_1003a985c(&local_40,uVar3);
  lVar2 = FUN_10000e524();
  FUN_1003a985c(&local_40,lVar2);
  *(char **)(lVar2 + 0x10) = "Sound_Ringo_Ability_C";
  *(undefined2 *)(lVar2 + 0x30) = 0x1ff;
  *(undefined4 *)(lVar2 + 0x34) = 1;
  *(undefined8 *)(lVar2 + 0x3c) = 0xffffffff3f000000;
  *(byte *)(lVar2 + 0x38) = *(byte *)(lVar2 + 0x38) & 0xf8 | 4;
  *(undefined8 *)(lVar2 + 0x48) = 0;
  lVar2 = FUN_10000ceb8();
  FUN_1003a985c(&local_40,lVar2);
  *(undefined4 *)(lVar2 + 0x2c) = 0x3e800000;
  *(undefined8 *)(lVar2 + 0x10) = 0;
  lVar2 = FUN_10000f250();
  FUN_1003a985c(&local_40,lVar2);
  *(undefined4 *)(lVar2 + 0x10) = 0x5e;
  FUN_1003d266c(lVar2,"Projectile_HeartOfTheMatter_Mouth");
  uVar3 = FUN_10000bb2c();
  FUN_1003a985c(&local_40,uVar3);
  lVar2 = FUN_10000bd3c();
  FUN_1003a985c(&local_40,lVar2);
  *(undefined **)(lVar2 + 0x10) = PTR_s_Buff_Revealed_10185a448;
  *(undefined4 *)(lVar2 + 0x18) = 0x40400000;
  *(undefined2 *)(lVar2 + 0x68) = 1;
  *(byte *)(lVar2 + 0x6a) = *(byte *)(lVar2 + 0x6a) & 0xfe;
  uVar3 = FUN_10000c784();
  FUN_1003a985c(&local_40,uVar3);
  lVar2 = FUN_10000d8b8();
  FUN_1003a985c(&local_40,lVar2);
  *(undefined1 *)(lVar2 + 0x10) = 0;
  uVar3 = FUN_10000f034();
  FUN_1003a985c(&local_40,uVar3);
  lVar2 = FUN_10000ceb8();
  FUN_1003a985c(&local_40,lVar2);
  *(undefined4 *)(lVar2 + 0x2c) = 0x3ecccccd;
  *(undefined8 *)(lVar2 + 0x10) = 0;
  return local_40;
}




undefined8 FUN_10035db60(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
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
  uVar1 = FUN_1004d2524("Attack");
  uVar1 = FUN_100015208("Attack",uVar1,0x12345678);
  *(undefined4 *)(lVar3 + 0x10) = uVar1;
  uVar1 = FUN_1004d2524("AttackToIdle");
  uVar1 = FUN_100015208("AttackToIdle",uVar1,0x12345678);
  *(undefined4 *)(lVar3 + 0x20) = uVar1;
  lVar3 = FUN_10000e524();
  FUN_1003a985c(&local_40,lVar3);
  uVar2 = FUN_1010a1520();
  lVar4 = FUN_1010a0e0c(uVar2,0,"*KindredSoundBalance*",0);
  uVar1 = FUN_1003a24c8(*(undefined4 *)(lVar4 + 0xa4));
  *(undefined2 *)(lVar3 + 0x30) = 0x3ff;
  *(undefined4 *)(lVar3 + 0x34) = 1;
  *(undefined4 *)(lVar3 + 0x40) = 0xffffffff;
  *(undefined4 *)(lVar3 + 0x3c) = uVar1;
  *(byte *)(lVar3 + 0x38) = *(byte *)(lVar3 + 0x38) & 0xf8 | 4;
  *(undefined8 *)(lVar3 + 0x48) = 0;
  *(char **)(lVar3 + 0x10) = "Sound_Adagio_Basic_Attack_1";
  *(char **)(lVar3 + 0x18) = "Sound_Adagio_Basic_Attack_2";
  *(char **)(lVar3 + 0x20) = "Sound_Adagio_Basic_Attack_3";
  lVar3 = FUN_10000ceb8();
  FUN_1003a985c(&local_40,lVar3);
  *(undefined4 *)(lVar3 + 0x2c) = 0x3e800000;
  *(code **)(lVar3 + 0x10) = FUN_1003a24a0;
  lVar3 = FUN_10000f250();
  FUN_1003a985c(&local_40,lVar3);
  *(undefined4 *)(lVar3 + 0x10) = 0;
  FUN_1003d266c(lVar3,"DefaultAttack_Projectile");
  uVar2 = FUN_10000f034();
  FUN_1003a985c(&local_40,uVar2);
  return local_40;
}




undefined8 FUN_10035dcf4(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
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
  uVar1 = FUN_1004d2524("AltAttack");
  uVar1 = FUN_100015208("AltAttack",uVar1,0x12345678);
  *(undefined4 *)(lVar3 + 0x10) = uVar1;
  uVar1 = FUN_1004d2524("AttackToIdle");
  uVar1 = FUN_100015208("AttackToIdle",uVar1,0x12345678);
  *(undefined4 *)(lVar3 + 0x20) = uVar1;
  lVar3 = FUN_10000e524();
  FUN_1003a985c(&local_40,lVar3);
  uVar2 = FUN_1010a1520();
  lVar4 = FUN_1010a0e0c(uVar2,0,"*KindredSoundBalance*",0);
  uVar1 = FUN_1003a24c8(*(undefined4 *)(lVar4 + 0xa4));
  *(undefined2 *)(lVar3 + 0x30) = 0x3ff;
  *(undefined4 *)(lVar3 + 0x34) = 1;
  *(undefined4 *)(lVar3 + 0x40) = 0xffffffff;
  *(undefined4 *)(lVar3 + 0x3c) = uVar1;
  *(byte *)(lVar3 + 0x38) = *(byte *)(lVar3 + 0x38) & 0xf8 | 4;
  *(undefined8 *)(lVar3 + 0x48) = 0;
  *(char **)(lVar3 + 0x10) = "Sound_Adagio_Basic_Attack_1";
  *(char **)(lVar3 + 0x18) = "Sound_Adagio_Basic_Attack_2";
  *(char **)(lVar3 + 0x20) = "Sound_Adagio_Basic_Attack_3";
  lVar3 = FUN_10000ceb8();
  FUN_1003a985c(&local_40,lVar3);
  *(undefined4 *)(lVar3 + 0x2c) = 0x3e800000;
  *(code **)(lVar3 + 0x10) = FUN_1003a24a0;
  lVar3 = FUN_10000f250();
  FUN_1003a985c(&local_40,lVar3);
  *(undefined4 *)(lVar3 + 0x10) = 0;
  FUN_1003d266c(lVar3,"DefaultAttack_Projectile");
  uVar2 = FUN_10000f034();
  FUN_1003a985c(&local_40,uVar2);
  return local_40;
}




undefined8 FUN_10035de88(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
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
  uVar1 = FUN_1004d2524("CritAttack");
  uVar1 = FUN_100015208("CritAttack",uVar1,0x12345678);
  *(undefined4 *)(lVar3 + 0x10) = uVar1;
  uVar1 = FUN_1004d2524("AttackToIdle");
  uVar1 = FUN_100015208("AttackToIdle",uVar1,0x12345678);
  *(undefined4 *)(lVar3 + 0x20) = uVar1;
  lVar3 = FUN_10000e524();
  FUN_1003a985c(&local_40,lVar3);
  uVar2 = FUN_1010a1520();
  lVar4 = FUN_1010a0e0c(uVar2,0,"*KindredSoundBalance*",0);
  uVar1 = FUN_1003a24c8(*(undefined4 *)(lVar4 + 0xa4));
  *(undefined2 *)(lVar3 + 0x30) = 0x3ff;
  *(undefined4 *)(lVar3 + 0x40) = 0xffffffff;
  *(undefined4 *)(lVar3 + 0x34) = 1;
  *(undefined4 *)(lVar3 + 0x3c) = uVar1;
  *(byte *)(lVar3 + 0x38) = *(byte *)(lVar3 + 0x38) & 0xf8 | 4;
  *(undefined8 *)(lVar3 + 0x48) = 0;
  *(char **)(lVar3 + 0x10) = "Sound_Adagio_Basic_Attack_1";
  *(char **)(lVar3 + 0x18) = "Sound_Adagio_Basic_Attack_2";
  *(char **)(lVar3 + 0x20) = "Sound_Adagio_Basic_Attack_3";
  lVar3 = FUN_10000ceb8();
  FUN_1003a985c(&local_40,lVar3);
  *(undefined4 *)(lVar3 + 0x2c) = 0x3e800000;
  *(code **)(lVar3 + 0x10) = FUN_1003a24a0;
  lVar3 = FUN_10000f250();
  FUN_1003a985c(&local_40,lVar3);
  *(undefined4 *)(lVar3 + 0x10) = 1;
  FUN_1003d266c(lVar3,"DefaultAttack_Projectile");
  uVar2 = FUN_10000f034();
  FUN_1003a985c(&local_40,uVar2);
  return local_40;
}




undefined8 FUN_10035e01c(void)

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
  uVar1 = FUN_1004d2524("Ability01_Cast");
  uVar1 = FUN_100015208("Ability01_Cast",uVar1,0x12345678);
  *(undefined4 *)(lVar2 + 0x10) = uVar1;
  uVar1 = FUN_1004d2524("AttackToIdle");
  uVar1 = FUN_100015208("AttackToIdle",uVar1,0x12345678);
  *(undefined4 *)(lVar2 + 0x20) = uVar1;
  lVar2 = FUN_10000e524();
  FUN_1003a985c(&local_40,lVar2);
  uVar3 = FUN_1010a1520();
  lVar4 = FUN_1010a0e0c(uVar3,0,"*KindredSoundBalance*",0);
  uVar1 = FUN_1003a24c8(*(undefined4 *)(lVar4 + 0xa8));
  *(undefined2 *)(lVar2 + 0x30) = 0x3ff;
  *(undefined4 *)(lVar2 + 0x40) = 0xffffffff;
  *(undefined4 *)(lVar2 + 0x34) = 1;
  *(undefined4 *)(lVar2 + 0x3c) = uVar1;
  *(byte *)(lVar2 + 0x38) = *(byte *)(lVar2 + 0x38) & 0xf8 | 4;
  *(undefined8 *)(lVar2 + 0x48) = 0;
  *(char **)(lVar2 + 0x10) = "Sound_Adagio_Ability_A_Projectile_1";
  *(char **)(lVar2 + 0x18) = "Sound_Adagio_Ability_A_Projectile_2";
  *(char **)(lVar2 + 0x20) = "Sound_Adagio_Ability_A_Projectile_3";
  lVar2 = FUN_10000e1b4();
  FUN_1003a985c(&local_40,lVar2);
  *(undefined8 *)(lVar2 + 0x40) = 0;
  *(ushort *)(lVar2 + 0x80) = *(ushort *)(lVar2 + 0x80) & 0xffef | 3;
  *(uint *)(lVar2 + 0x3c) = (uint)lVar2 & 0xffff;
  *(undefined8 *)(lVar2 + 0x20) = 0;
  *(undefined8 *)(lVar2 + 0x28) = 1;
  *(undefined4 *)(lVar2 + 0x10) = 0xd578543f;
  lVar2 = FUN_10000ceb8();
  FUN_1003a985c(&local_40,lVar2);
  *(undefined4 *)(lVar2 + 0x2c) = 0x3e6b851f;
  *(undefined8 *)(lVar2 + 0x10) = 0;
  lVar2 = FUN_10000f250();
  FUN_1003a985c(&local_40,lVar2);
  *(undefined4 *)(lVar2 + 0x10) = 2;
  FUN_1003d266c(lVar2,"Ability01_Projectile");
  lVar2 = FUN_10000d8b8();
  FUN_1003a985c(&local_40,lVar2);
  *(undefined1 *)(lVar2 + 0x10) = 0;
  uVar3 = FUN_10000f034();
  FUN_1003a985c(&local_40,uVar3);
  lVar2 = FUN_10000ceb8();
  FUN_1003a985c(&local_40,lVar2);
  *(undefined4 *)(lVar2 + 0x2c) = 0x3dcccccd;
  *(undefined8 *)(lVar2 + 0x10) = 0;
  uVar3 = FUN_10000f0e8();
  FUN_1003a985c(&local_40,uVar3);
  return local_40;
}




undefined8 FUN_10035e254(void)

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
  lVar2 = FUN_10000dff8();
  FUN_1003a985c(&local_40,lVar2);
  *(undefined2 *)(lVar2 + 0x28) = 0x100;
  *(undefined8 *)(lVar2 + 0x30) = 0;
  uVar1 = FUN_1004d2524("Ability02_Cast");
  uVar1 = FUN_100015208("Ability02_Cast",uVar1,0x12345678);
  *(undefined4 *)(lVar2 + 0x10) = uVar1;
  uVar1 = FUN_1004d2524("AttackToIdle");
  uVar1 = FUN_100015208("AttackToIdle",uVar1,0x12345678);
  *(undefined4 *)(lVar2 + 0x20) = uVar1;
  lVar2 = FUN_10000e524();
  FUN_1003a985c(&local_40,lVar2);
  uVar3 = FUN_1010a1520();
  lVar4 = FUN_1010a0e0c(uVar3,0,"*KindredSoundBalance*",0);
  uVar1 = FUN_1003a24c8(*(undefined4 *)(lVar4 + 0xa8));
  *(undefined2 *)(lVar2 + 0x30) = 0x3ff;
  *(undefined4 *)(lVar2 + 0x40) = 0xffffffff;
  *(undefined4 *)(lVar2 + 0x34) = 1;
  *(undefined4 *)(lVar2 + 0x3c) = uVar1;
  *(byte *)(lVar2 + 0x38) = *(byte *)(lVar2 + 0x38) & 0xf8 | 4;
  *(undefined8 *)(lVar2 + 0x48) = 0;
  *(char **)(lVar2 + 0x10) = "Sound_Adagio_Ability_A_Projectile_1";
  *(char **)(lVar2 + 0x18) = "Sound_Adagio_Ability_A_Projectile_2";
  *(char **)(lVar2 + 0x20) = "Sound_Adagio_Ability_A_Projectile_3";
  lVar2 = FUN_10000e1b4();
  FUN_1003a985c(&local_40,lVar2);
  *(undefined8 *)(lVar2 + 0x40) = 0;
  *(ushort *)(lVar2 + 0x80) = *(ushort *)(lVar2 + 0x80) & 0xffef | 3;
  *(uint *)(lVar2 + 0x3c) = (uint)lVar2 & 0xffff;
  *(undefined8 *)(lVar2 + 0x20) = 0;
  *(undefined8 *)(lVar2 + 0x28) = 1;
  *(undefined4 *)(lVar2 + 0x10) = 0xef2cebec;
  lVar2 = FUN_10000ceb8();
  FUN_1003a985c(&local_40,lVar2);
  *(undefined4 *)(lVar2 + 0x2c) = 0x3e6b851f;
  *(undefined8 *)(lVar2 + 0x10) = 0;
  lVar2 = FUN_10000f250();
  FUN_1003a985c(&local_40,lVar2);
  *(undefined4 *)(lVar2 + 0x10) = 3;
  FUN_1003d266c(lVar2,"Projectile_GunBarrelTip");
  lVar2 = FUN_10000d8b8();
  FUN_1003a985c(&local_40,lVar2);
  *(undefined1 *)(lVar2 + 0x10) = 0;
  uVar3 = FUN_10000f034();
  FUN_1003a985c(&local_40,uVar3);
  lVar2 = FUN_10000ceb8();
  FUN_1003a985c(&local_40,lVar2);
  *(undefined4 *)(lVar2 + 0x2c) = 0x3dcccccd;
  *(undefined8 *)(lVar2 + 0x10) = 0;
  uVar3 = FUN_10000f0e8();
  FUN_1003a985c(&local_40,uVar3);
  return local_40;
}




undefined8 FUN_10035e47c(void)

{
  int iVar1;
  byte bVar2;
  byte bVar3;
  undefined *puVar4;
  undefined4 uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  undefined2 local_93;
  undefined1 local_91;
  undefined8 local_70;
  undefined8 uStack_68;
  
  local_70 = 0;
  uStack_68 = 0;
  lVar6 = FUN_1003e10f0();
  bVar2 = *(byte *)(lVar6 + 0xe5);
  lVar6 = FUN_1003e10f0();
  bVar3 = *(byte *)(lVar6 + 0xe5);
  lVar6 = FUN_10000dff8();
  FUN_1003a985c(&local_70,lVar6);
  *(undefined2 *)(lVar6 + 0x28) = 0x100;
  *(undefined8 *)(lVar6 + 0x30) = 0;
  uVar5 = FUN_1004d2524("Ability03_Cast");
  uVar5 = FUN_100015208("Ability03_Cast",uVar5,0x12345678);
  *(undefined4 *)(lVar6 + 0x10) = uVar5;
  uVar5 = FUN_1004d2524("AttackToIdle");
  uVar5 = FUN_100015208("AttackToIdle",uVar5,0x12345678);
  *(undefined4 *)(lVar6 + 0x20) = uVar5;
  lVar6 = FUN_10000e524();
  FUN_1003a985c(&local_70,lVar6);
  uVar7 = FUN_1010a1520();
  lVar8 = FUN_1010a0e0c(uVar7,0,"*KindredSoundBalance*",0);
  uVar5 = FUN_1003a24c8(*(undefined4 *)(lVar8 + 0xbc));
  *(char **)(lVar6 + 0x10) = "Sound_Adagio_Ability_C";
  *(undefined2 *)(lVar6 + 0x30) = 0x1ff;
  *(undefined4 *)(lVar6 + 0x34) = 1;
  *(undefined4 *)(lVar6 + 0x3c) = uVar5;
  *(undefined4 *)(lVar6 + 0x40) = 0xffffffff;
  *(byte *)(lVar6 + 0x38) = *(byte *)(lVar6 + 0x38) & 0xf8 | 4;
  *(undefined8 *)(lVar6 + 0x48) = 0;
  lVar6 = FUN_10000d8b8();
  FUN_1003a985c(&local_70,lVar6);
  *(undefined1 *)(lVar6 + 0x10) = 1;
  uVar7 = FUN_10000bb2c();
  FUN_1003a985c(&local_70,uVar7);
  lVar6 = FUN_10000bd3c();
  FUN_1003a985c(&local_70,lVar6);
  *(undefined **)(lVar6 + 0x10) = PTR_s_Buff_Adagio_VerseOfJudgement_For_10185a1e8;
  *(undefined4 *)(lVar6 + 0x18) = 0x40200000;
  *(undefined2 *)(lVar6 + 0x68) = 1;
  *(byte *)(lVar6 + 0x6a) = *(byte *)(lVar6 + 0x6a) & 0xfe;
  lVar6 = FUN_10000bd3c();
  FUN_1003a985c(&local_70,lVar6);
  *(undefined **)(lVar6 + 0x10) = PTR_s_Buff_GloballyVisible_10185a1f0;
  *(undefined4 *)(lVar6 + 0x18) = 0x40200000;
  *(undefined2 *)(lVar6 + 0x68) = 1;
  *(byte *)(lVar6 + 0x6a) = *(byte *)(lVar6 + 0x6a) & 0xfe;
  uVar7 = FUN_10000c784();
  FUN_1003a985c(&local_70,uVar7);
  plVar9 = (long *)thunk_FUN_10000e358();
  FUN_1003a985c(&local_70,plVar9);
  plVar9 = (long *)(**(code **)(*plVar9 + 0x58))(plVar9);
  plVar9 = (long *)(**(code **)(*plVar9 + 0x48))(plVar9,"Effect_Adagio_Ult_Enemy");
  plVar9 = (long *)(**(code **)(*plVar9 + 0x78))(plVar9,1);
  plVar9 = (long *)(**(code **)(*plVar9 + 0x80))(plVar9,1);
  plVar9 = (long *)(**(code **)(*plVar9 + 0xb0))(plVar9,1);
  plVar9 = (long *)(**(code **)(*plVar9 + 0x50))(plVar9,"Effect_AdagioFriendship");
  plVar9 = (long *)(**(code **)(*plVar9 + 0x90))();
  uVar5 = (**(code **)(*plVar9 + 0x108))();
  lVar6 = FUN_10000e1b4();
  FUN_1003a985c(&local_70,lVar6);
  *(undefined8 *)(lVar6 + 0x20) = 0;
  *(undefined8 *)(lVar6 + 0x28) = 0x4000000000000003;
  *(undefined8 *)(lVar6 + 0x40) = 0;
  *(ushort *)(lVar6 + 0x80) = *(ushort *)(lVar6 + 0x80) & 0xffef | 3;
  *(uint *)(lVar6 + 0x3c) = (uint)lVar6 & 0xffff;
  *(undefined4 *)(lVar6 + 0x10) = 0xc391c24d;
  *(char **)(lVar6 + 0x18) = "Bone_LeftHand";
  lVar6 = FUN_10000e1b4();
  FUN_1003a985c(&local_70,lVar6);
  *(undefined8 *)(lVar6 + 0x20) = 0;
  *(undefined8 *)(lVar6 + 0x28) = 0x4000000000000003;
  *(undefined8 *)(lVar6 + 0x40) = 0;
  *(ushort *)(lVar6 + 0x80) = *(ushort *)(lVar6 + 0x80) & 0xffef | 3;
  *(uint *)(lVar6 + 0x3c) = (uint)lVar6 & 0xffff;
  *(undefined4 *)(lVar6 + 0x10) = 0xc391c24d;
  *(char **)(lVar6 + 0x18) = "Bone_RightHand";
  lVar6 = FUN_10000ceb8();
  FUN_1003a985c(&local_70,lVar6);
  *(undefined4 *)(lVar6 + 0x2c) = 0x40000000;
  *(undefined8 *)(lVar6 + 0x10) = 0;
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
  *(undefined4 *)(lVar6 + 0x50) = 0x3f800000;
  *(undefined1 *)(lVar6 + 0x54) = 0xff;
  *(undefined8 *)(lVar6 + 0x60) = 0xffffffff00000000;
  *(undefined8 *)(lVar6 + 0x58) = 0xffffffff00040000;
  *(byte *)(lVar6 + 0x6a) = bVar2 | 0x14;
  *(undefined2 *)(lVar6 + 0x68) = 0x4120;
  *(code **)(lVar6 + 0x78) = FUN_1003a264c;
  *(byte *)(lVar6 + 0xa8) = *(byte *)(lVar6 + 0xa8) & 0xf0 | 1;
  lVar6 = FUN_10000e474();
  FUN_1003a985c(&local_70,lVar6);
  *(undefined4 *)(lVar6 + 0x10) = 2;
  *(char **)(lVar6 + 0x18) = "Effect_AdagioArcaneFire_Impact";
  *(undefined4 *)(lVar6 + 0x20) = 0x3e3270a0;
  *(undefined8 *)(lVar6 + 0x28) = 0;
  *(undefined4 *)(lVar6 + 0x30) = 0x3f800000;
  *(byte *)(lVar6 + 0x58) = *(byte *)(lVar6 + 0x58) | 1;
  *(uint *)(lVar6 + 0x4c) = (uint)lVar6 & 0xffff;
  uVar7 = FUN_10000cb8c();
  FUN_1003a985c(&local_70,uVar7);
  uVar7 = FUN_10000c784();
  FUN_1003a985c(&local_70,uVar7);
  lVar6 = FUN_1003e10f0();
  iVar1 = ((uint)*(byte *)(lVar6 + 0xe5) << 0x10 | 0x144120) + 0x30;
  lVar6 = FUN_10000c8e8();
  FUN_1003a985c(&local_70,lVar6);
  lVar8 = FUN_10049ab34(lVar6 + 0x10);
  *(undefined **)(lVar8 + 8) = PTR_s_Buff_Adagio_Talent_HealingVerse_10185a1f8;
  lVar6 = lVar6 + 0xb0;
  lVar8 = FUN_10000ed74();
  FUN_1003a985c(lVar6,lVar8);
  *(undefined8 *)(lVar8 + 0x18) = 0;
  *(undefined1 *)(lVar8 + 0x20) = 1;
  *(undefined8 *)(lVar8 + 0x24) = 0;
  *(undefined8 *)(lVar8 + 0x34) = 0;
  *(undefined8 *)(lVar8 + 0x2c) = 0;
  *(undefined4 *)(lVar8 + 0x3c) = 0;
  *(undefined8 *)(lVar8 + 0x48) = 0xbf800000c0000000;
  *(undefined8 *)(lVar8 + 0x40) = 0xbf800000bf800000;
  *(undefined4 *)(lVar8 + 0x50) = 0x3f800000;
  *(undefined1 *)(lVar8 + 0x54) = 0xff;
  *(undefined8 *)(lVar8 + 0x60) = 0xffffffff00000000;
  *(undefined8 *)(lVar8 + 0x58) = 0xffffffff00000001;
  *(char *)(lVar8 + 0x6a) = (char)((uint)iVar1 >> 0x10);
  *(short *)(lVar8 + 0x68) = (short)iVar1;
  *(code **)(lVar8 + 0x78) = FUN_1003a264c;
  *(byte *)(lVar8 + 0xa8) = *(byte *)(lVar8 + 0xa8) & 0xf0 | 1;
  lVar8 = FUN_10000d580();
  FUN_1003a985c(lVar6,lVar8);
  *(code **)(lVar8 + 0x10) = FUN_1003a2550;
  *(undefined4 *)(lVar8 + 0x18) = 4;
  uVar7 = FUN_10000c784();
  FUN_1003a985c(lVar6,uVar7);
  lVar6 = FUN_10000eaac();
  FUN_1003a985c(&local_70,lVar6);
  puVar4 = PTR_s_Buff_Adagio_ArcaneFire_10185a200;
  *(undefined8 *)(lVar6 + 0x18) = 0;
  *(undefined1 *)(lVar6 + 0x20) = 1;
  *(undefined8 *)(lVar6 + 0x2c) = 0;
  *(undefined8 *)(lVar6 + 0x24) = 0;
  *(undefined8 *)(lVar6 + 0x38) = 0;
  *(undefined8 *)(lVar6 + 0x30) = 0;
  *(undefined8 *)(lVar6 + 0x48) = 0xbf800000c0000000;
  *(undefined8 *)(lVar6 + 0x40) = 0xbf800000bf800000;
  *(undefined4 *)(lVar6 + 0x50) = 0x3f800000;
  *(undefined1 *)(lVar6 + 0x54) = 0xff;
  *(undefined2 *)(lVar6 + 0x55) = local_93;
  *(undefined1 *)(lVar6 + 0x57) = local_91;
  *(undefined8 *)(lVar6 + 0x60) = 0xffffffff00000000;
  *(undefined8 *)(lVar6 + 0x58) = 0xffffffff00040000;
  *(byte *)(lVar6 + 0x6a) = bVar3 | 0x14;
  *(undefined2 *)(lVar6 + 0x68) = 0x4120;
  *(byte *)(lVar6 + 0x80) = *(byte *)(lVar6 + 0x80) & 0xfc | 1;
  *(code **)(lVar6 + 0x70) = FUN_1003a264c;
  *(undefined **)(lVar6 + 0x78) = puVar4;
  lVar6 = FUN_10000bd3c();
  FUN_1003a985c(&local_70,lVar6);
  *(undefined **)(lVar6 + 0x10) = PTR_s_Buff_Stunned_10185a208;
  *(code **)(lVar6 + 0x30) = FUN_1003a2660;
  *(undefined2 *)(lVar6 + 0x68) = 1;
  *(byte *)(lVar6 + 0x6a) = *(byte *)(lVar6 + 0x6a) & 0xfe;
  lVar6 = FUN_10000c540();
  FUN_1003a985c(&local_70,lVar6);
  *(undefined **)(lVar6 + 0x10) = PTR_s_Buff_Adagio_ArcaneFire_10185a200;
  lVar6 = FUN_10000d228();
  FUN_1003a985c(&local_70,lVar6);
  *(undefined4 *)(lVar6 + 0x10) = uVar5;
  uVar7 = FUN_10000c784();
  FUN_1003a985c(&local_70,uVar7);
  lVar6 = FUN_10000d8b8();
  FUN_1003a985c(&local_70,lVar6);
  *(undefined1 *)(lVar6 + 0x10) = 0;
  uVar7 = FUN_10000f034();
  FUN_1003a985c(&local_70,uVar7);
  return local_70;
}




void FUN_10035eab8(void)

{
  FUN_1003a2678(DAT_10185a210);
  return;
}




undefined8 FUN_10035eac4(void)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  undefined8 local_50;
  undefined8 uStack_48;
  
  local_50 = 0;
  uStack_48 = 0;
  lVar2 = FUN_10000dff8();
  FUN_1003a985c(&local_50,lVar2);
  *(undefined2 *)(lVar2 + 0x28) = 0x100;
  *(code **)(lVar2 + 0x30) = FUN_1003a24a0;
  uVar1 = FUN_1004d2524("Attack");
  uVar1 = FUN_100015208("Attack",uVar1,0x12345678);
  *(undefined4 *)(lVar2 + 0x10) = uVar1;
  uVar1 = FUN_1004d2524("AttackToIdle");
  uVar1 = FUN_100015208("AttackToIdle",uVar1,0x12345678);
  *(undefined4 *)(lVar2 + 0x20) = uVar1;
  lVar2 = FUN_10000ceb8();
  FUN_1003a985c(&local_50,lVar2);
  *(code **)(lVar2 + 0x10) = FUN_1003a24a0;
  *(code **)(lVar2 + 0x18) = FUN_1003c5148;
  uVar3 = FUN_10000ef8c();
  FUN_1003a985c(&local_50,uVar3);
  lVar2 = FUN_10000e1b4();
  FUN_1003a985c(&local_50,lVar2);
  *(undefined8 *)(lVar2 + 0x40) = 0;
  *(ushort *)(lVar2 + 0x80) = *(ushort *)(lVar2 + 0x80) & 0xffef | 3;
  *(uint *)(lVar2 + 0x3c) = (uint)lVar2 & 0xffff;
  *(undefined8 *)(lVar2 + 0x20) = 0;
  *(undefined8 *)(lVar2 + 0x28) = 1;
  *(undefined4 *)(lVar2 + 0x10) = 0xba19b345;
  lVar2 = FUN_10000e524();
  FUN_1003a985c(&local_50,lVar2);
  uVar3 = FUN_1010a1520();
  lVar4 = FUN_1010a0e0c(uVar3,0,"*KindredSoundBalance*",0);
  uVar1 = FUN_1003b44ac(*(undefined4 *)(lVar4 + 0x44));
  *(undefined2 *)(lVar2 + 0x30) = 0x3ff;
  *(undefined4 *)(lVar2 + 0x34) = 1;
  *(undefined4 *)(lVar2 + 0x3c) = uVar1;
  *(byte *)(lVar2 + 0x38) = *(byte *)(lVar2 + 0x38) & 0xf8 | 4;
  *(code **)(lVar2 + 0x48) = FUN_1003b42e4;
  *(undefined4 *)(lVar2 + 0x40) = 0xffffffff;
  *(char **)(lVar2 + 0x10) = "Sound_Koshka_basic_attack_01";
  *(char **)(lVar2 + 0x18) = "Sound_Koshka_basic_attack_02";
  *(char **)(lVar2 + 0x20) = "Sound_Koshka_basic_attack_03";
  lVar2 = FUN_10000e524();
  FUN_1003a985c(&local_50,lVar2);
  uVar3 = FUN_1010a1520();
  lVar4 = FUN_1010a0e0c(uVar3,0,"*KindredSoundBalance*",0);
  uVar1 = FUN_1003b44ac(*(undefined4 *)(lVar4 + 0x44));
  *(undefined2 *)(lVar2 + 0x30) = 0x3ff;
  *(undefined4 *)(lVar2 + 0x34) = 1;
  *(undefined4 *)(lVar2 + 0x3c) = uVar1;
  *(byte *)(lVar2 + 0x38) = *(byte *)(lVar2 + 0x38) & 0xf8 | 4;
  *(code **)(lVar2 + 0x48) = FUN_1003b4260;
  *(undefined4 *)(lVar2 + 0x40) = 0xffffffff;
  *(char **)(lVar2 + 0x10) = "Sound_Koshka_catnip_attack_01";
  *(char **)(lVar2 + 0x18) = "Sound_Koshka_catnip_attack_02";
  *(char **)(lVar2 + 0x20) = "Sound_Koshka_catnip_attack_03";
  uVar3 = FUN_10000bc94();
  FUN_1003a985c(&local_50,uVar3);
  plVar5 = (long *)FUN_10000cb8c();
  FUN_1003a985c(&local_50,plVar5);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x50))(plVar5);
  (**(code **)(*plVar5 + 0x58))(plVar5,0);
  lVar2 = FUN_10000e524();
  FUN_1003a985c(&local_50,lVar2);
  uVar3 = FUN_1010a1520();
  lVar4 = FUN_1010a0e0c(uVar3,0,"*KindredSoundBalance*",0);
  uVar1 = FUN_1003b44ac(*(undefined4 *)(lVar4 + 0x44));
  *(undefined2 *)(lVar2 + 0x30) = 0x3ff;
  *(undefined4 *)(lVar2 + 0x34) = 1;
  *(undefined4 *)(lVar2 + 0x3c) = uVar1;
  *(undefined4 *)(lVar2 + 0x40) = 0xffffffff;
  *(byte *)(lVar2 + 0x38) = *(byte *)(lVar2 + 0x38) & 0xf8 | 4;
  *(undefined8 *)(lVar2 + 0x48) = 0;
  *(char **)(lVar2 + 0x10) = "Sound_Koshka_basic_impact_01";
  *(char **)(lVar2 + 0x18) = "Sound_Koshka_basic_impact_02";
  *(char **)(lVar2 + 0x20) = "Sound_Koshka_basic_impact_03";
  FUN_1003b436c(&local_50);
  uVar3 = FUN_10000f034();
  FUN_1003a985c(&local_50,uVar3);
  return local_50;
}




undefined8 FUN_10035edc0(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined8 local_50;
  undefined8 uStack_48;
  
  local_50 = 0;
  uStack_48 = 0;
  uVar2 = FUN_10000ef8c();
  FUN_1003a985c(&local_50,uVar2);
  lVar3 = FUN_10000ceb8();
  FUN_1003a985c(&local_50,lVar3);
  *(code **)(lVar3 + 0x10) = FUN_1003a24a0;
  *(code **)(lVar3 + 0x18) = FUN_1003c5148;
  lVar3 = FUN_10000dff8();
  FUN_1003a985c(&local_50,lVar3);
  *(undefined2 *)(lVar3 + 0x28) = 0x100;
  *(code **)(lVar3 + 0x30) = FUN_1003a24a0;
  uVar1 = FUN_1004d2524("AltAttack");
  uVar1 = FUN_100015208("AltAttack",uVar1,0x12345678);
  *(undefined4 *)(lVar3 + 0x10) = uVar1;
  uVar1 = FUN_1004d2524("AttackToIdle");
  uVar1 = FUN_100015208("AttackToIdle",uVar1,0x12345678);
  *(undefined4 *)(lVar3 + 0x20) = uVar1;
  lVar3 = FUN_10000e1b4();
  FUN_1003a985c(&local_50,lVar3);
  *(undefined8 *)(lVar3 + 0x40) = 0;
  *(ushort *)(lVar3 + 0x80) = *(ushort *)(lVar3 + 0x80) & 0xffef | 3;
  *(uint *)(lVar3 + 0x3c) = (uint)lVar3 & 0xffff;
  *(undefined8 *)(lVar3 + 0x20) = 0;
  *(undefined8 *)(lVar3 + 0x28) = 1;
  *(undefined4 *)(lVar3 + 0x10) = 0xe2784977;
  lVar3 = FUN_10000e524();
  FUN_1003a985c(&local_50,lVar3);
  uVar2 = FUN_1010a1520();
  lVar4 = FUN_1010a0e0c(uVar2,0,"*KindredSoundBalance*",0);
  uVar1 = FUN_1003b44ac(*(undefined4 *)(lVar4 + 0x44));
  *(undefined2 *)(lVar3 + 0x30) = 0x3ff;
  *(undefined4 *)(lVar3 + 0x34) = 1;
  *(undefined4 *)(lVar3 + 0x3c) = uVar1;
  *(byte *)(lVar3 + 0x38) = *(byte *)(lVar3 + 0x38) & 0xf8 | 4;
  *(code **)(lVar3 + 0x48) = FUN_1003b42e4;
  *(undefined4 *)(lVar3 + 0x40) = 0xffffffff;
  *(char **)(lVar3 + 0x10) = "Sound_Koshka_basic_kick_01";
  *(char **)(lVar3 + 0x18) = "Sound_Koshka_basic_kick_02";
  *(char **)(lVar3 + 0x20) = "Sound_Koshka_basic_kick_03";
  lVar3 = FUN_10000e524();
  FUN_1003a985c(&local_50,lVar3);
  uVar2 = FUN_1010a1520();
  lVar4 = FUN_1010a0e0c(uVar2,0,"*KindredSoundBalance*",0);
  uVar1 = FUN_1003b44ac(*(undefined4 *)(lVar4 + 0x44));
  *(undefined2 *)(lVar3 + 0x30) = 0x3ff;
  *(undefined4 *)(lVar3 + 0x34) = 1;
  *(undefined4 *)(lVar3 + 0x3c) = uVar1;
  *(byte *)(lVar3 + 0x38) = *(byte *)(lVar3 + 0x38) & 0xf8 | 4;
  *(code **)(lVar3 + 0x48) = FUN_1003b4260;
  *(undefined4 *)(lVar3 + 0x40) = 0xffffffff;
  *(char **)(lVar3 + 0x10) = "Sound_Koshka_catnip_kick_01";
  *(char **)(lVar3 + 0x18) = "Sound_Koshka_catnip_kick_02";
  *(char **)(lVar3 + 0x20) = "Sound_Koshka_catnip_kick_03";
  uVar2 = FUN_10000bc94();
  FUN_1003a985c(&local_50,uVar2);
  plVar5 = (long *)FUN_10000cb8c();
  FUN_1003a985c(&local_50,plVar5);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x50))(plVar5);
  (**(code **)(*plVar5 + 0x58))(plVar5,0);
  lVar3 = FUN_10000e524();
  FUN_1003a985c(&local_50,lVar3);
  uVar2 = FUN_1010a1520();
  lVar4 = FUN_1010a0e0c(uVar2,0,"*KindredSoundBalance*",0);
  uVar1 = FUN_1003b44ac(*(undefined4 *)(lVar4 + 0x44));
  *(undefined2 *)(lVar3 + 0x30) = 0x3ff;
  *(undefined4 *)(lVar3 + 0x34) = 1;
  *(undefined4 *)(lVar3 + 0x3c) = uVar1;
  *(undefined4 *)(lVar3 + 0x40) = 0xffffffff;
  *(byte *)(lVar3 + 0x38) = *(byte *)(lVar3 + 0x38) & 0xf8 | 4;
  *(undefined8 *)(lVar3 + 0x48) = 0;
  *(char **)(lVar3 + 0x10) = "Sound_Koshka_basic_impact_04";
  *(char **)(lVar3 + 0x18) = "Sound_Koshka_basic_impact_05";
  *(char **)(lVar3 + 0x20) = "Sound_Koshka_basic_impact_06";
  FUN_1003b436c(&local_50);
  uVar2 = FUN_10000f034();
  FUN_1003a985c(&local_50,uVar2);
  return local_50;
}




undefined8 FUN_10035f0bc(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
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
  uVar1 = FUN_1004d2524("CritAttack");
  uVar1 = FUN_100015208("CritAttack",uVar1,0x12345678);
  *(undefined4 *)(lVar3 + 0x10) = uVar1;
  uVar1 = FUN_1004d2524("AttackToIdle");
  uVar1 = FUN_100015208("AttackToIdle",uVar1,0x12345678);
  *(undefined4 *)(lVar3 + 0x20) = uVar1;
  lVar3 = FUN_10000e524();
  FUN_1003a985c(&local_50,lVar3);
  uVar2 = FUN_1010a1520();
  lVar4 = FUN_1010a0e0c(uVar2,0,"*KindredSoundBalance*",0);
  uVar1 = FUN_1003b44ac(*(undefined4 *)(lVar4 + 0x44));
  *(char **)(lVar3 + 0x10) = "Sound_Koshka_crit";
  *(undefined2 *)(lVar3 + 0x30) = 0x1ff;
  *(undefined4 *)(lVar3 + 0x34) = 1;
  *(undefined4 *)(lVar3 + 0x3c) = uVar1;
  *(undefined4 *)(lVar3 + 0x40) = 0xffffffff;
  *(byte *)(lVar3 + 0x38) = *(byte *)(lVar3 + 0x38) & 0xf8 | 4;
  *(undefined8 *)(lVar3 + 0x48) = 0;
  lVar3 = FUN_10000ceb8();
  FUN_1003a985c(&local_50,lVar3);
  *(code **)(lVar3 + 0x10) = FUN_1003a24a0;
  *(code **)(lVar3 + 0x18) = FUN_1003c5148;
  uVar2 = FUN_10000bc94();
  FUN_1003a985c(&local_50,uVar2);
  lVar3 = FUN_10000e1b4();
  FUN_1003a985c(&local_50,lVar3);
  *(undefined8 *)(lVar3 + 0x40) = 0;
  *(ushort *)(lVar3 + 0x80) = *(ushort *)(lVar3 + 0x80) & 0xffef | 3;
  *(uint *)(lVar3 + 0x3c) = (uint)lVar3 & 0xffff;
  *(undefined8 *)(lVar3 + 0x20) = 0;
  *(undefined8 *)(lVar3 + 0x28) = 1;
  *(undefined4 *)(lVar3 + 0x10) = 0x8959f284;
  plVar5 = (long *)FUN_10000cb8c();
  FUN_1003a985c(&local_50,plVar5);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x50))(plVar5);
  (**(code **)(*plVar5 + 0x58))(plVar5,2);
  lVar3 = FUN_10000e524();
  FUN_1003a985c(&local_50,lVar3);
  uVar2 = FUN_1010a1520();
  lVar4 = FUN_1010a0e0c(uVar2,0,"*KindredSoundBalance*",0);
  uVar1 = FUN_1003b44ac(*(undefined4 *)(lVar4 + 0x44));
  *(undefined2 *)(lVar3 + 0x30) = 0x3ff;
  *(undefined4 *)(lVar3 + 0x34) = 1;
  *(undefined4 *)(lVar3 + 0x3c) = uVar1;
  *(undefined4 *)(lVar3 + 0x40) = 0xffffffff;
  *(byte *)(lVar3 + 0x38) = *(byte *)(lVar3 + 0x38) & 0xf8 | 4;
  *(undefined8 *)(lVar3 + 0x48) = 0;
  *(char **)(lVar3 + 0x10) = "Sound_Koshka_basic_impact_04";
  *(char **)(lVar3 + 0x18) = "Sound_Koshka_basic_impact_05";
  *(char **)(lVar3 + 0x20) = "Sound_Koshka_basic_impact_06";
  FUN_1003b436c(&local_50);
  uVar2 = FUN_10000f034();
  FUN_1003a985c(&local_50,uVar2);
  return local_50;
}




undefined8 FUN_10035f324(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
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
  uVar1 = FUN_1004d2524("CatnipAttack");
  uVar1 = FUN_100015208("CatnipAttack",uVar1,0x12345678);
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
  *(undefined4 *)(lVar3 + 0x10) = 0xaaadfe70;
  lVar3 = FUN_10000e524();
  FUN_1003a985c(&local_40,lVar3);
  uVar2 = FUN_1010a1520();
  lVar4 = FUN_1010a0e0c(uVar2,0,"*KindredSoundBalance*",0);
  uVar1 = FUN_1003b44ac(*(undefined4 *)(lVar4 + 0x44));
  *(char **)(lVar3 + 0x10) = "Sound_Koshka_crit";
  *(undefined2 *)(lVar3 + 0x30) = 0x1ff;
  *(undefined4 *)(lVar3 + 0x34) = 1;
  *(undefined4 *)(lVar3 + 0x3c) = uVar1;
  *(undefined4 *)(lVar3 + 0x40) = 0xffffffff;
  *(byte *)(lVar3 + 0x38) = *(byte *)(lVar3 + 0x38) & 0xf8 | 4;
  *(undefined8 *)(lVar3 + 0x48) = 0;
  lVar3 = FUN_10000ceb8();
  FUN_1003a985c(&local_40,lVar3);
  *(undefined4 *)(lVar3 + 0x2c) = 0x3e99999a;
  *(code **)(lVar3 + 0x10) = FUN_1003a24a0;
  uVar2 = FUN_10000bc94();
  FUN_1003a985c(&local_40,uVar2);
  plVar5 = (long *)FUN_10000cb8c();
  FUN_1003a985c(&local_40,plVar5);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x50))(plVar5);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x38))(plVar5,"EmpoweredAttackDamage",1);
  (**(code **)(*plVar5 + 0x70))(plVar5,1);
  uVar2 = FUN_10000c784();
  FUN_1003a985c(&local_40,uVar2);
  uVar2 = FUN_10000bb2c();
  FUN_1003a985c(&local_40,uVar2);
  lVar3 = FUN_10000ce0c();
  FUN_1003a985c(&local_40,lVar3);
  *(undefined **)(lVar3 + 0x18) = PTR_s_Buff_Koshka_TwirlEmpoweredAttack_10185ac98;
  *(undefined4 *)(lVar3 + 0x20) = 1;
  *(undefined1 *)(lVar3 + 0x24) = 1;
  uVar2 = FUN_10000c784();
  FUN_1003a985c(&local_40,uVar2);
  FUN_1003b436c(&local_40);
  uVar2 = FUN_10000f034();
  FUN_1003a985c(&local_40,uVar2);
  lVar3 = FUN_10000ceb8();
  FUN_1003a985c(&local_40,lVar3);
  *(undefined4 *)(lVar3 + 0x2c) = 0x3dcccccd;
  *(code **)(lVar3 + 0x10) = FUN_1003a24a0;
  return local_40;
}




undefined8 FUN_10035f5a0(void)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  undefined8 local_50;
  undefined8 uStack_48;
  
  local_50 = 0;
  uStack_48 = 0;
  lVar2 = FUN_10000ef8c();
  FUN_1003a985c(&local_50,lVar2);
  *(byte *)(lVar2 + 0x10) = *(byte *)(lVar2 + 0x10) & 0xe7 | 4;
  lVar2 = FUN_10000d8b8();
  FUN_1003a985c(&local_50,lVar2);
  *(undefined1 *)(lVar2 + 0x10) = 1;
  lVar2 = FUN_10000dff8();
  FUN_1003a985c(&local_50,lVar2);
  *(undefined2 *)(lVar2 + 0x28) = 0x101;
  *(undefined8 *)(lVar2 + 0x30) = 0;
  uVar1 = FUN_1004d2524("Pounce_Windup");
  uVar1 = FUN_100015208("Pounce_Windup",uVar1,0x12345678);
  *(undefined4 *)(lVar2 + 0x10) = uVar1;
  *(undefined4 *)(lVar2 + 0x20) = 0;
  lVar2 = FUN_10000e524();
  FUN_1003a985c(&local_50,lVar2);
  uVar3 = FUN_1010a1520();
  lVar4 = FUN_1010a0e0c(uVar3,0,"*KindredSoundBalance*",0);
  uVar1 = FUN_1003b44ac(*(undefined4 *)(lVar4 + 0x48));
  *(char **)(lVar2 + 0x10) = "Sound_Koshka_Ability1_start";
  *(undefined2 *)(lVar2 + 0x30) = 0x1ff;
  *(undefined4 *)(lVar2 + 0x34) = 1;
  *(undefined4 *)(lVar2 + 0x3c) = uVar1;
  *(undefined4 *)(lVar2 + 0x40) = 0xffffffff;
  *(byte *)(lVar2 + 0x38) = *(byte *)(lVar2 + 0x38) & 0xf8 | 4;
  *(undefined8 *)(lVar2 + 0x48) = 0;
  uVar3 = FUN_10000bb2c();
  FUN_1003a985c(&local_50,uVar3);
  lVar2 = FUN_10000c150();
  FUN_1003a985c(&local_50,lVar2);
  *(code **)(lVar2 + 0x10) = FUN_1003b4534;
  *(byte *)(lVar2 + 0x18) = *(byte *)(lVar2 + 0x18) & 0xfc | 1;
  uVar3 = FUN_10000c784();
  FUN_1003a985c(&local_50,uVar3);
  lVar2 = FUN_10000ceb8();
  FUN_1003a985c(&local_50,lVar2);
  *(code **)(lVar2 + 0x18) = FUN_1003b474c;
  uVar3 = FUN_10000f9c0();
  FUN_1003a985c(&local_50,uVar3);
  lVar2 = FUN_10000e1b4();
  FUN_1003a985c(&local_50,lVar2);
  *(undefined8 *)(lVar2 + 0x40) = 0;
  *(ushort *)(lVar2 + 0x80) = *(ushort *)(lVar2 + 0x80) & 0xffec | 2;
  *(uint *)(lVar2 + 0x3c) = (uint)lVar2 & 0xffff;
  *(undefined8 *)(lVar2 + 0x20) = 0;
  *(undefined8 *)(lVar2 + 0x28) = 1;
  *(undefined4 *)(lVar2 + 0x10) = 0x608e73d7;
  lVar2 = FUN_10000bd3c();
  FUN_1003a985c(&local_50,lVar2);
  *(undefined **)(lVar2 + 0x10) = PTR_s_Buff_Koshka_Claws_10185aca0;
  *(code **)(lVar2 + 0x28) = FUN_1003b47d0;
  *(undefined2 *)(lVar2 + 0x68) = 1;
  *(byte *)(lVar2 + 0x6a) = *(byte *)(lVar2 + 0x6a) & 0xfe;
  lVar2 = FUN_10000dff8();
  FUN_1003a985c(&local_50,lVar2);
  *(undefined2 *)(lVar2 + 0x28) = 0x100;
  *(undefined8 *)(lVar2 + 0x30) = 0;
  uVar1 = FUN_1004d2524("Pounce_Finish");
  uVar1 = FUN_100015208("Pounce_Finish",uVar1,0x12345678);
  *(undefined4 *)(lVar2 + 0x10) = uVar1;
  uVar1 = FUN_1004d2524("AttackToIdle");
  uVar1 = FUN_100015208("AttackToIdle",uVar1,0x12345678);
  *(undefined4 *)(lVar2 + 0x20) = uVar1;
  uVar3 = FUN_10000bc94();
  FUN_1003a985c(&local_50,uVar3);
  lVar2 = FUN_10000e474();
  FUN_1003a985c(&local_50,lVar2);
  *(undefined4 *)(lVar2 + 0x10) = 1;
  *(char **)(lVar2 + 0x18) = "Effect_Koshka_Pounce_Hit";
  *(undefined8 *)(lVar2 + 0x28) = 0;
  *(undefined4 *)(lVar2 + 0x30) = 0;
  *(byte *)(lVar2 + 0x58) = *(byte *)(lVar2 + 0x58) & 0xfe;
  *(uint *)(lVar2 + 0x4c) = (uint)lVar2 & 0xffff;
  uVar3 = FUN_10000c784();
  FUN_1003a985c(&local_50,uVar3);
  lVar2 = FUN_10000ceb8();
  FUN_1003a985c(&local_50,lVar2);
  *(undefined4 *)(lVar2 + 0x2c) = 0x3d4ccccd;
  *(undefined8 *)(lVar2 + 0x10) = 0;
  uVar3 = FUN_10000bc94();
  FUN_1003a985c(&local_50,uVar3);
  plVar5 = (long *)FUN_10000cb8c();
  FUN_1003a985c(&local_50,plVar5);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x50))(plVar5);
  (**(code **)(*plVar5 + 0x70))(plVar5,1);
  uVar3 = FUN_10000c784();
  FUN_1003a985c(&local_50,uVar3);
  lVar2 = FUN_10000e524();
  FUN_1003a985c(&local_50,lVar2);
  uVar3 = FUN_1010a1520();
  lVar4 = FUN_1010a0e0c(uVar3,0,"*KindredSoundBalance*",0);
  uVar1 = FUN_1003b44ac(*(undefined4 *)(lVar4 + 0x48));
  *(char **)(lVar2 + 0x10) = "Sound_Koshka_ability1_impact";
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
  lVar2 = FUN_10000e7fc();
  FUN_1003a985c(&local_50,lVar2);
  *(undefined4 *)(lVar2 + 0x10) = 0x3f000000;
  lVar2 = FUN_10000d8b8();
  FUN_1003a985c(&local_50,lVar2);
  *(undefined1 *)(lVar2 + 0x10) = 0;
  lVar2 = FUN_10000e524();
  FUN_1003a985c(&local_50,lVar2);
  uVar3 = FUN_1010a1520();
  lVar4 = FUN_1010a0e0c(uVar3,0,"*KindredSoundBalance*",0);
  uVar1 = FUN_1003b44ac(*(undefined4 *)(lVar4 + 0x48));
  *(char **)(lVar2 + 0x10) = "Sound_Koshka_ability1_end";
  *(undefined2 *)(lVar2 + 0x30) = 0x1ff;
  *(undefined4 *)(lVar2 + 0x34) = 1;
  *(undefined4 *)(lVar2 + 0x3c) = uVar1;
  *(undefined4 *)(lVar2 + 0x40) = 0xffffffff;
  *(byte *)(lVar2 + 0x38) = *(byte *)(lVar2 + 0x38) & 0xf8 | 4;
  *(undefined8 *)(lVar2 + 0x48) = 0;
  uVar3 = FUN_10000f034();
  FUN_1003a985c(&local_50,uVar3);
  lVar2 = FUN_10000ceb8();
  FUN_1003a985c(&local_50,lVar2);
  *(undefined4 *)(lVar2 + 0x2c) = 0x3dcccccd;
  *(undefined8 *)(lVar2 + 0x10) = 0;
  uVar3 = FUN_10000f0e8();
  FUN_1003a985c(&local_50,uVar3);
  return local_50;
}




undefined8 FUN_10035fa78(void)

{
  byte bVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  code *local_60;
  undefined4 local_58;
  code *local_50;
  undefined4 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  local_40 = 0;
  uStack_38 = 0;
  lVar3 = FUN_1003e10f0();
  bVar1 = *(byte *)(lVar3 + 0xe5);
  lVar3 = FUN_10000d8b8();
  FUN_1003a985c(&local_40,lVar3);
  *(undefined1 *)(lVar3 + 0x10) = 1;
  lVar3 = FUN_10000dff8();
  FUN_1003a985c(&local_40,lVar3);
  *(undefined2 *)(lVar3 + 0x28) = 0x100;
  *(undefined8 *)(lVar3 + 0x30) = 0;
  uVar2 = FUN_1004d2524("JackhammerKick");
  uVar2 = FUN_100015208("JackhammerKick",uVar2,0x12345678);
  *(undefined4 *)(lVar3 + 0x10) = uVar2;
  uVar2 = FUN_1004d2524("AttackToIdle");
  uVar2 = FUN_100015208("AttackToIdle",uVar2,0x12345678);
  *(undefined4 *)(lVar3 + 0x20) = uVar2;
  lVar3 = FUN_10000e524();
  FUN_1003a985c(&local_40,lVar3);
  uVar4 = FUN_1010a1520();
  lVar5 = FUN_1010a0e0c(uVar4,0,"*KindredSoundBalance*",0);
  uVar2 = FUN_1003b44ac(*(undefined4 *)(lVar5 + 0x4c));
  *(char **)(lVar3 + 0x10) = "Sound_Koshka_ability2";
  *(undefined2 *)(lVar3 + 0x30) = 0x1ff;
  *(undefined4 *)(lVar3 + 0x34) = 1;
  *(undefined4 *)(lVar3 + 0x3c) = uVar2;
  *(undefined4 *)(lVar3 + 0x40) = 0xffffffff;
  *(byte *)(lVar3 + 0x38) = *(byte *)(lVar3 + 0x38) & 0xf8 | 4;
  *(undefined8 *)(lVar3 + 0x48) = 0;
  lVar3 = FUN_10000ceb8();
  FUN_1003a985c(&local_40,lVar3);
  *(undefined4 *)(lVar3 + 0x2c) = 0x3e083127;
  *(undefined8 *)(lVar3 + 0x10) = 0;
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
  *(code **)(lVar3 + 0x78) = FUN_1003b4800;
  *(byte *)(lVar3 + 0xa8) = *(byte *)(lVar3 + 0xa8) & 0xf0 | 1;
  plVar6 = (long *)FUN_10000cb8c();
  FUN_1003a985c(&local_40,plVar6);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x50))(plVar6);
  (**(code **)(*plVar6 + 0x20))(plVar6,"TwirlDamage");
  plVar6 = (long *)FUN_10000bdf0();
  FUN_1003a985c(&local_40,plVar6);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x50))(plVar6,PTR_s_Buff_Koshka_B_Barrier_10185aca8);
  local_50 = FUN_1003b4814;
  local_48 = 5;
  plVar6 = (long *)(**(code **)(*plVar6 + 0x20))(plVar6,&local_50);
  local_60 = FUN_1003b488c;
  local_58 = 3;
  (**(code **)(*plVar6 + 0x18))(plVar6,&local_60);
  lVar3 = FUN_10000e1b4();
  FUN_1003a985c(&local_40,lVar3);
  *(undefined8 *)(lVar3 + 0x40) = 0;
  *(ushort *)(lVar3 + 0x80) = *(ushort *)(lVar3 + 0x80) & 0xffec | 2;
  *(uint *)(lVar3 + 0x3c) = (uint)lVar3 & 0xffff;
  *(undefined8 *)(lVar3 + 0x20) = 0;
  *(undefined8 *)(lVar3 + 0x28) = 1;
  *(undefined4 *)(lVar3 + 0x10) = 0x73db0912;
  lVar3 = FUN_10000e474();
  FUN_1003a985c(&local_40,lVar3);
  *(undefined4 *)(lVar3 + 0x10) = 2;
  *(char **)(lVar3 + 0x18) = "Effect_Koshka_Twirl_HitEffect";
  *(undefined4 *)(lVar3 + 0x20) = 0x3e3270a0;
  *(undefined8 *)(lVar3 + 0x28) = 0;
  *(undefined4 *)(lVar3 + 0x30) = 0x3eb33333;
  *(byte *)(lVar3 + 0x58) = *(byte *)(lVar3 + 0x58) & 0xfe;
  *(uint *)(lVar3 + 0x4c) = (uint)lVar3 & 0xffff;
  uVar4 = FUN_10000c784();
  FUN_1003a985c(&local_40,uVar4);
  lVar3 = FUN_10000c8e8();
  FUN_1003a985c(&local_40,lVar3);
  lVar5 = FUN_10049ab34(lVar3 + 0x10);
  *(undefined **)(lVar5 + 8) = PTR_s_Buff_Koshka_Talent_TwirlyLife_10185acb0;
  lVar3 = lVar3 + 0xb0;
  uVar4 = FUN_10000bb2c();
  FUN_1003a985c(lVar3,uVar4);
  lVar5 = FUN_10000bd3c();
  FUN_1003a985c(lVar3,lVar5);
  *(undefined **)(lVar5 + 0x10) = PTR_s_Buff_Koshka_FortifiedHealthTwirl_10185acb8;
  *(code **)(lVar5 + 0x30) = FUN_1003b48a0;
  *(undefined2 *)(lVar5 + 0x68) = 1;
  *(byte *)(lVar5 + 0x6a) = *(byte *)(lVar5 + 0x6a) & 0xfe;
  uVar4 = FUN_10000c784();
  FUN_1003a985c(lVar3,uVar4);
  plVar6 = (long *)FUN_10000bdf0();
  FUN_1003a985c(&local_40,plVar6);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x50))
                             (plVar6,PTR_s_Buff_Koshka_TwirlEmpoweredAttack_10185ac98);
  local_50 = FUN_1003b48d4;
  local_48 = 3;
  plVar6 = (long *)(**(code **)(*plVar6 + 0x20))(plVar6,&local_50);
  local_60 = FUN_1003b48fc;
  local_58 = 3;
  (**(code **)(*plVar6 + 0x18))(plVar6,&local_60);
  lVar3 = FUN_10000ceb8();
  FUN_1003a985c(&local_40,lVar3);
  *(undefined4 *)(lVar3 + 0x2c) = 0x3e883127;
  *(undefined8 *)(lVar3 + 0x10) = 0;
  lVar3 = FUN_10000d8b8();
  FUN_1003a985c(&local_40,lVar3);
  *(undefined1 *)(lVar3 + 0x10) = 0;
  uVar4 = FUN_10000f034();
  FUN_1003a985c(&local_40,uVar4);
  lVar3 = FUN_10000ceb8();
  FUN_1003a985c(&local_40,lVar3);
  *(undefined4 *)(lVar3 + 0x2c) = 0x3dcccccd;
  *(undefined8 *)(lVar3 + 0x10) = 0;
  uVar4 = FUN_10000f0e8();
  FUN_1003a985c(&local_40,uVar4);
  return local_40;
}




undefined8 FUN_10035ff20(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  undefined4 uVar5;
  undefined4 local_90 [2];
  undefined4 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  
  local_80 = 0;
  uStack_78 = 0;
  lVar1 = FUN_10000ef8c();
  FUN_1003a985c(&local_80,lVar1);
  *(byte *)(lVar1 + 0x10) = *(byte *)(lVar1 + 0x10) & 0xe7 | 4;
  lVar1 = FUN_10000d8b8();
  FUN_1003a985c(&local_80,lVar1);
  *(undefined1 *)(lVar1 + 0x10) = 1;
  lVar1 = FUN_10000e524();
  FUN_1003a985c(&local_80,lVar1);
  uVar2 = FUN_1010a1520();
  lVar3 = FUN_1010a0e0c(uVar2,0,"*KindredSoundBalance*",0);
  uVar5 = FUN_1003b44ac(*(undefined4 *)(lVar3 + 0x50));
  *(char **)(lVar1 + 0x10) = "Sound_Koshka_ability3_start";
  *(undefined2 *)(lVar1 + 0x30) = 0x1ff;
  *(undefined4 *)(lVar1 + 0x34) = 1;
  *(undefined4 *)(lVar1 + 0x3c) = uVar5;
  *(undefined4 *)(lVar1 + 0x40) = 0xffffffff;
  *(byte *)(lVar1 + 0x38) = *(byte *)(lVar1 + 0x38) & 0xf8 | 4;
  *(undefined8 *)(lVar1 + 0x48) = 0;
  lVar1 = FUN_10000e1b4();
  FUN_1003a985c(&local_80,lVar1);
  *(undefined8 *)(lVar1 + 0x40) = 0;
  *(ushort *)(lVar1 + 0x80) = *(ushort *)(lVar1 + 0x80) & 0xffec | 2;
  *(uint *)(lVar1 + 0x3c) = (uint)lVar1 & 0xffff;
  *(undefined8 *)(lVar1 + 0x20) = 0;
  *(undefined8 *)(lVar1 + 0x28) = 1;
  *(undefined4 *)(lVar1 + 0x10) = 0x5218f297;
  lVar1 = FUN_10000e1b4();
  FUN_1003a985c(&local_80,lVar1);
  *(undefined8 *)(lVar1 + 0x40) = 0;
  *(ushort *)(lVar1 + 0x80) = *(ushort *)(lVar1 + 0x80) & 0xffec | 2;
  *(uint *)(lVar1 + 0x3c) = (uint)lVar1 & 0xffff;
  *(undefined8 *)(lVar1 + 0x20) = 0;
  *(undefined8 *)(lVar1 + 0x28) = 1;
  *(undefined4 *)(lVar1 + 0x10) = 0x865acb47;
  uVar2 = FUN_10000bc94();
  FUN_1003a985c(&local_80,uVar2);
  lVar1 = FUN_10000e474();
  FUN_1003a985c(&local_80,lVar1);
  *(undefined4 *)(lVar1 + 0x10) = 3;
  *(char **)(lVar1 + 0x18) = "Effect_Koshka_UltTell_2";
  *(char **)(lVar1 + 0x28) = "Bone_Head";
  *(undefined4 *)(lVar1 + 0x30) = 0;
  *(byte *)(lVar1 + 0x58) = *(byte *)(lVar1 + 0x58) | 1;
  *(uint *)(lVar1 + 0x4c) = (uint)lVar1 & 0xffff;
  uVar2 = FUN_10000c784();
  FUN_1003a985c(&local_80,uVar2);
  lVar1 = FUN_10000c8e8();
  FUN_1003a985c(&local_80,lVar1);
  lVar3 = FUN_10049ab34(lVar1 + 0x10);
  *(undefined8 *)(lVar3 + 8) = DAT_10185acc0;
  lVar3 = FUN_10000dff8();
  FUN_1003a985c(lVar1 + 200,lVar3);
  *(undefined2 *)(lVar3 + 0x28) = 0x100;
  *(code **)(lVar3 + 0x30) = FUN_1003b491c;
  uVar5 = FUN_1004d2524("YummyCatnipFrenzy_Start");
  uVar5 = FUN_100015208("YummyCatnipFrenzy_Start",uVar5,0x12345678);
  *(undefined4 *)(lVar3 + 0x10) = uVar5;
  *(undefined4 *)(lVar3 + 0x20) = 0;
  lVar3 = FUN_10000ceb8();
  FUN_1003a985c(lVar1 + 200,lVar3);
  *(undefined4 *)(lVar3 + 0x2c) = 0x3f333333;
  *(undefined8 *)(lVar3 + 0x10) = 0;
  lVar3 = FUN_10000ceb8();
  FUN_1003a985c(lVar1 + 0xb0,lVar3);
  *(undefined4 *)(lVar3 + 0x2c) = 0x3e4ccccd;
  *(undefined8 *)(lVar3 + 0x10) = 0;
  lVar1 = FUN_10000dff8();
  FUN_1003a985c(&local_80,lVar1);
  *(undefined2 *)(lVar1 + 0x28) = 0x101;
  *(undefined8 *)(lVar1 + 0x30) = 0;
  uVar5 = FUN_1004d2524("YummyCatnipFrenzy_Dash");
  uVar5 = FUN_100015208("YummyCatnipFrenzy_Dash",uVar5,0x12345678);
  *(undefined4 *)(lVar1 + 0x10) = uVar5;
  *(undefined4 *)(lVar1 + 0x20) = 0;
  uVar2 = FUN_10000c308();
  FUN_1003a985c(&local_80,uVar2);
  FUN_10000b604(uVar2,FUN_1003b4910);
  lVar1 = FUN_10000ceb8();
  FUN_1003a985c(&local_80,lVar1);
  *(undefined4 *)(lVar1 + 0x2c) = 0x3dcccccd;
  *(undefined8 *)(lVar1 + 0x10) = 0;
  uVar2 = FUN_10000f9c0();
  FUN_1003a985c(&local_80,uVar2);
  uVar2 = DAT_10185acc0;
  lVar1 = FUN_10000c838();
  FUN_1003a985c(&local_80,lVar1);
  *(ushort *)(lVar1 + 0x58) = *(ushort *)(lVar1 + 0x58) & 0xf00f | 0x20;
  *(undefined8 *)(lVar1 + 0x48) = 0;
  *(undefined8 *)(lVar1 + 0x50) = 0;
  *(undefined1 *)(lVar1 + 0x50) = 2;
  *(undefined8 *)(lVar1 + 0x40) = uVar2;
  lVar3 = FUN_10000c3b0();
  FUN_1003a985c(lVar1 + 0x18,lVar3);
  *(code **)(lVar3 + 0x10) = FUN_1003b4a54;
  lVar1 = lVar1 + 0x30;
  uVar2 = FUN_10000bc94();
  FUN_1003a985c(lVar1,uVar2);
  plVar4 = (long *)FUN_10000cb8c();
  FUN_1003a985c(lVar1,plVar4);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))(plVar4);
  local_90[0] = 0x3dcccccd;
  local_88 = 1;
  (**(code **)(*plVar4 + 0x88))(plVar4,local_90);
  lVar3 = FUN_10000c3b0();
  FUN_1003a985c(lVar1,lVar3);
  *(code **)(lVar3 + 0x10) = FUN_1003b4938;
  lVar1 = FUN_10000bd3c();
  FUN_1003a985c(&local_80,lVar1);
  *(undefined **)(lVar1 + 0x10) = PTR_s_Buff_Stunned_10185a208;
  *(code **)(lVar1 + 0x30) = FUN_1003b4c3c;
  *(undefined2 *)(lVar1 + 0x68) = 1;
  *(byte *)(lVar1 + 0x6a) = *(byte *)(lVar1 + 0x6a) & 0xfe;
  uVar2 = FUN_10000c784();
  FUN_1003a985c(&local_80,uVar2);
  lVar1 = FUN_10000dff8();
  FUN_1003a985c(&local_80,lVar1);
  *(undefined2 *)(lVar1 + 0x28) = 0x100;
  *(undefined8 *)(lVar1 + 0x30) = 0;
  uVar5 = FUN_1004d2524("YummyCatnipFrenzy_Flurry");
  uVar5 = FUN_100015208("YummyCatnipFrenzy_Flurry",uVar5,0x12345678);
  *(undefined4 *)(lVar1 + 0x10) = uVar5;
  uVar5 = FUN_1004d2524("AttackToIdle");
  uVar5 = FUN_100015208("AttackToIdle",uVar5,0x12345678);
  *(undefined4 *)(lVar1 + 0x20) = uVar5;
  lVar1 = FUN_10000e1b4();
  FUN_1003a985c(&local_80,lVar1);
  *(undefined8 *)(lVar1 + 0x40) = 0;
  *(ushort *)(lVar1 + 0x80) = *(ushort *)(lVar1 + 0x80) & 0xffec | 2;
  *(uint *)(lVar1 + 0x3c) = (uint)lVar1 & 0xffff;
  *(undefined8 *)(lVar1 + 0x20) = 0;
  *(undefined8 *)(lVar1 + 0x28) = 1;
  *(undefined4 *)(lVar1 + 0x10) = 0xbac8b4f9;
  lVar1 = FUN_10000ceb8();
  FUN_1003a985c(&local_80,lVar1);
  *(undefined4 *)(lVar1 + 0x2c) = 0x3d872b02;
  *(undefined8 *)(lVar1 + 0x10) = 0;
  uVar2 = FUN_10000bc94();
  FUN_1003a985c(&local_80,uVar2);
  plVar4 = (long *)thunk_FUN_10000f1a0();
  FUN_1003a985c(&local_80,plVar4);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x60))(plVar4);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x10))(0x3df5c28f);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x18))(0x3e4ccccd);
  (**(code **)(*plVar4 + 0x20))(0x41400000);
  uVar2 = FUN_10000c784();
  FUN_1003a985c(&local_80,uVar2);
  lVar1 = FUN_10000e524();
  FUN_1003a985c(&local_80,lVar1);
  uVar2 = FUN_1010a1520();
  lVar3 = FUN_1010a0e0c(uVar2,0,"*KindredSoundBalance*",0);
  uVar5 = FUN_1003b44ac(*(undefined4 *)(lVar3 + 0x50));
  *(char **)(lVar1 + 0x10) = "Sound_Koshka_ability3_swipe_01";
  *(undefined2 *)(lVar1 + 0x30) = 0x1ff;
  *(undefined4 *)(lVar1 + 0x34) = 1;
  *(undefined4 *)(lVar1 + 0x3c) = uVar5;
  *(undefined4 *)(lVar1 + 0x40) = 0xffffffff;
  *(byte *)(lVar1 + 0x38) = *(byte *)(lVar1 + 0x38) & 0xf8 | 4;
  *(undefined8 *)(lVar1 + 0x48) = 0;
  lVar1 = FUN_10000ceb8();
  FUN_1003a985c(&local_80,lVar1);
  *(undefined4 *)(lVar1 + 0x2c) = 0x3e6e978d;
  *(undefined8 *)(lVar1 + 0x10) = 0;
  uVar2 = FUN_10000bc94();
  FUN_1003a985c(&local_80,uVar2);
  plVar4 = (long *)thunk_FUN_10000f1a0();
  FUN_1003a985c(&local_80,plVar4);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x60))(plVar4);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x10))(0x3df5c28f);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x18))(0x3e4ccccd);
  (**(code **)(*plVar4 + 0x20))(0x41400000);
  plVar4 = (long *)FUN_10000cb8c();
  FUN_1003a985c(&local_80,plVar4);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))(plVar4);
  local_90[0] = 0x3dcccccd;
  local_88 = 1;
  (**(code **)(*plVar4 + 0x88))(plVar4,local_90);
  uVar2 = FUN_10000c784();
  FUN_1003a985c(&local_80,uVar2);
  lVar1 = FUN_10000e524();
  FUN_1003a985c(&local_80,lVar1);
  uVar2 = FUN_1010a1520();
  lVar3 = FUN_1010a0e0c(uVar2,0,"*KindredSoundBalance*",0);
  uVar5 = FUN_1003b44ac(*(undefined4 *)(lVar3 + 0x50));
  *(char **)(lVar1 + 0x10) = "Sound_Koshka_ability3_swipe_01";
  *(undefined2 *)(lVar1 + 0x30) = 0x1ff;
  *(undefined4 *)(lVar1 + 0x34) = 1;
  *(undefined4 *)(lVar1 + 0x3c) = uVar5;
  *(undefined4 *)(lVar1 + 0x40) = 0xffffffff;
  *(byte *)(lVar1 + 0x38) = *(byte *)(lVar1 + 0x38) & 0xf8 | 4;
  *(undefined8 *)(lVar1 + 0x48) = 0;
  lVar1 = FUN_10000ceb8();
  FUN_1003a985c(&local_80,lVar1);
  *(undefined4 *)(lVar1 + 0x2c) = 0x3e4ccccd;
  *(undefined8 *)(lVar1 + 0x10) = 0;
  uVar2 = FUN_10000bc94();
  FUN_1003a985c(&local_80,uVar2);
  plVar4 = (long *)thunk_FUN_10000f1a0();
  FUN_1003a985c(&local_80,plVar4);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x60))(plVar4);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x10))(0x3df5c28f);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x18))(0x3e4ccccd);
  (**(code **)(*plVar4 + 0x20))(0x41400000);
  plVar4 = (long *)FUN_10000cb8c();
  FUN_1003a985c(&local_80,plVar4);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))(plVar4);
  local_90[0] = 0x3dcccccd;
  local_88 = 1;
  (**(code **)(*plVar4 + 0x88))(plVar4,local_90);
  uVar2 = FUN_10000c784();
  FUN_1003a985c(&local_80,uVar2);
  lVar1 = FUN_10000e524();
  FUN_1003a985c(&local_80,lVar1);
  uVar2 = FUN_1010a1520();
  lVar3 = FUN_1010a0e0c(uVar2,0,"*KindredSoundBalance*",0);
  uVar5 = FUN_1003b44ac(*(undefined4 *)(lVar3 + 0x50));
  *(char **)(lVar1 + 0x10) = "Sound_Koshka_ability3_swipe_02";
  *(undefined1 *)(lVar1 + 0x30) = 0xff;
  *(undefined1 *)(lVar1 + 0x31) = 1;
  *(undefined4 *)(lVar1 + 0x34) = 1;
  *(undefined4 *)(lVar1 + 0x3c) = uVar5;
  *(undefined4 *)(lVar1 + 0x40) = 0xffffffff;
  *(byte *)(lVar1 + 0x38) = *(byte *)(lVar1 + 0x38) & 0xf8 | 4;
  *(undefined8 *)(lVar1 + 0x48) = 0;
  lVar1 = FUN_10000ceb8();
  FUN_1003a985c(&local_80,lVar1);
  *(undefined4 *)(lVar1 + 0x2c) = 0x3e4ccccd;
  *(undefined8 *)(lVar1 + 0x10) = 0;
  uVar2 = FUN_10000bc94();
  FUN_1003a985c(&local_80,uVar2);
  plVar4 = (long *)thunk_FUN_10000f1a0();
  FUN_1003a985c(&local_80,plVar4);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x60))(plVar4);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x10))(0x3df5c28f);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x18))(0x3e4ccccd);
  (**(code **)(*plVar4 + 0x20))(0x41400000);
  plVar4 = (long *)FUN_10000cb8c();
  FUN_1003a985c(&local_80,plVar4);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))(plVar4);
  local_90[0] = 0x3dcccccd;
  local_88 = 1;
  (**(code **)(*plVar4 + 0x88))(plVar4,local_90);
  uVar2 = FUN_10000c784();
  FUN_1003a985c(&local_80,uVar2);
  lVar1 = FUN_10000e524();
  FUN_1003a985c(&local_80,lVar1);
  uVar2 = FUN_1010a1520();
  lVar3 = FUN_1010a0e0c(uVar2,0,"*KindredSoundBalance*",0);
  uVar5 = FUN_1003b44ac(*(undefined4 *)(lVar3 + 0x50));
  *(char **)(lVar1 + 0x10) = "Sound_Koshka_ability3_swipe_03";
  *(undefined1 *)(lVar1 + 0x30) = 0xff;
  *(undefined1 *)(lVar1 + 0x31) = 1;
  *(undefined4 *)(lVar1 + 0x34) = 1;
  *(undefined4 *)(lVar1 + 0x3c) = uVar5;
  *(undefined4 *)(lVar1 + 0x40) = 0xffffffff;
  *(byte *)(lVar1 + 0x38) = *(byte *)(lVar1 + 0x38) & 0xf8 | 4;
  *(undefined8 *)(lVar1 + 0x48) = 0;
  lVar1 = FUN_10000ceb8();
  FUN_1003a985c(&local_80,lVar1);
  *(undefined4 *)(lVar1 + 0x2c) = 0x3e4ccccd;
  *(undefined8 *)(lVar1 + 0x10) = 0;
  uVar2 = FUN_10000bc94();
  FUN_1003a985c(&local_80,uVar2);
  plVar4 = (long *)thunk_FUN_10000f1a0();
  FUN_1003a985c(&local_80,plVar4);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x60))(plVar4);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x10))(0x3df5c28f);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x18))(0x3e4ccccd);
  (**(code **)(*plVar4 + 0x20))(0x41400000);
  plVar4 = (long *)FUN_10000cb8c();
  FUN_1003a985c(&local_80,plVar4);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))(plVar4);
  local_90[0] = 0x3dcccccd;
  local_88 = 1;
  (**(code **)(*plVar4 + 0x88))(plVar4,local_90);
  uVar2 = FUN_10000c784();
  FUN_1003a985c(&local_80,uVar2);
  lVar1 = FUN_10000e524();
  FUN_1003a985c(&local_80,lVar1);
  uVar2 = FUN_1010a1520();
  lVar3 = FUN_1010a0e0c(uVar2,0,"*KindredSoundBalance*",0);
  uVar5 = FUN_1003b44ac(*(undefined4 *)(lVar3 + 0x50));
  *(char **)(lVar1 + 0x10) = "Sound_Koshka_ability3_swipe_04";
  *(undefined1 *)(lVar1 + 0x30) = 0xff;
  *(undefined1 *)(lVar1 + 0x31) = 1;
  *(undefined4 *)(lVar1 + 0x34) = 1;
  *(undefined4 *)(lVar1 + 0x3c) = uVar5;
  *(undefined4 *)(lVar1 + 0x40) = 0xffffffff;
  *(byte *)(lVar1 + 0x38) = *(byte *)(lVar1 + 0x38) & 0xf8 | 4;
  *(undefined8 *)(lVar1 + 0x48) = 0;
  lVar1 = FUN_10000ceb8();
  FUN_1003a985c(&local_80,lVar1);
  *(undefined4 *)(lVar1 + 0x2c) = 0x3ea8f5c3;
  *(undefined8 *)(lVar1 + 0x10) = 0;
  uVar2 = FUN_10000bc94();
  FUN_1003a985c(&local_80,uVar2);
  plVar4 = (long *)thunk_FUN_10000f1a0();
  FUN_1003a985c(&local_80,plVar4);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x60))(plVar4);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x10))(0x3f333333);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x18))(0x3f4ccccd);
  (**(code **)(*plVar4 + 0x20))(0x41500000);
  plVar4 = (long *)FUN_10000cb8c();
  FUN_1003a985c(&local_80,plVar4);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))(plVar4);
  local_90[0] = 0x3f000000;
  local_88 = 1;
  (**(code **)(*plVar4 + 0x88))(plVar4,local_90);
  uVar2 = FUN_10000c784();
  FUN_1003a985c(&local_80,uVar2);
  lVar1 = FUN_10000e524();
  FUN_1003a985c(&local_80,lVar1);
  uVar2 = FUN_1010a1520();
  lVar3 = FUN_1010a0e0c(uVar2,0,"*KindredSoundBalance*",0);
  uVar5 = FUN_1003b44ac(*(undefined4 *)(lVar3 + 0x50));
  *(char **)(lVar1 + 0x10) = "Sound_Koshka_ability3_end";
  *(undefined1 *)(lVar1 + 0x30) = 0xff;
  *(undefined1 *)(lVar1 + 0x31) = 1;
  *(undefined4 *)(lVar1 + 0x34) = 1;
  *(undefined4 *)(lVar1 + 0x3c) = uVar5;
  *(undefined4 *)(lVar1 + 0x40) = 0xffffffff;
  *(byte *)(lVar1 + 0x38) = *(byte *)(lVar1 + 0x38) & 0xf8 | 4;
  *(undefined8 *)(lVar1 + 0x48) = 0;
  lVar1 = FUN_10000c8e8();
  FUN_1003a985c(&local_80,lVar1);
  lVar3 = FUN_10049ab34(lVar1 + 0x10);
  *(undefined8 *)(lVar3 + 8) = DAT_10185acc0;
  lVar3 = FUN_10000ceb8();
  FUN_1003a985c(lVar1 + 200,lVar3);
  *(undefined4 *)(lVar3 + 0x2c) = 0x3f666666;
  *(undefined8 *)(lVar3 + 0x10) = 0;
  lVar3 = FUN_10000ceb8();
  FUN_1003a985c(lVar1 + 0xb0,lVar3);
  *(undefined4 *)(lVar3 + 0x2c) = 0x3e99999a;
  *(undefined8 *)(lVar3 + 0x10) = 0;
  lVar1 = FUN_10000d8b8();
  FUN_1003a985c(&local_80,lVar1);
  *(undefined1 *)(lVar1 + 0x10) = 0;
  uVar2 = FUN_10000f034();
  FUN_1003a985c(&local_80,uVar2);
  return local_80;
}

