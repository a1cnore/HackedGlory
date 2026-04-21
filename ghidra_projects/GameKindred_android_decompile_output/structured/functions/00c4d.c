// functions/00c4d — 15 functions
#include "libGameKindred.h"




void FUN_00c4d3f8(long param_1)

{
  FUN_00e70510();
  FUN_00e70510(param_1 + 0x10);
  FUN_00e70510(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  return;
}




void FUN_00c4d434(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027fce60;
  if (param_1[0x46d] != 0) {
    *(undefined4 *)(param_1 + 0x46c) = 0;
  }
  if ((void *)param_1[0x47d] != (void *)0x0) {
    operator_delete((void *)param_1[0x47d]);
  }
  param_1[0x47d] = 0;
  FUN_00be03d8(param_1 + 0x47a,1);
  if ((*(byte *)(param_1 + 0x477) & 1) != 0) {
    operator_delete((void *)param_1[0x479]);
  }
  if ((*(byte *)(param_1 + 0x474) & 1) != 0) {
    operator_delete((void *)param_1[0x476]);
  }
  if ((void *)param_1[0x473] != (void *)0x0) {
    operator_delete__((void *)param_1[0x473]);
    param_1[0x473] = 0;
    param_1[0x472] = 0;
  }
  if ((void *)param_1[0x471] != (void *)0x0) {
    operator_delete__((void *)param_1[0x471]);
    param_1[0x471] = 0;
    param_1[0x470] = 0;
  }
  if ((void *)param_1[0x46f] != (void *)0x0) {
    operator_delete__((void *)param_1[0x46f]);
    param_1[0x46e] = 0;
    param_1[0x46f] = 0;
  }
  if ((void *)param_1[0x46d] != (void *)0x0) {
    operator_delete__((void *)param_1[0x46d]);
    param_1[0x46c] = 0;
    param_1[0x46d] = 0;
  }
  FUN_009c7fa8(param_1 + 0x1b4);
  param_1[0x196] = &PTR_FUN_028266f0;
  param_1[0x1ad] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x1b0);
  FUN_00f13d08(param_1 + 0x196);
  param_1[0x178] = &PTR_FUN_028266f0;
  param_1[399] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x192);
  FUN_00f13d08(param_1 + 0x178);
  FUN_00f0d3a4(param_1 + 0x152);
  param_1[0x134] = &PTR_FUN_028266f0;
  param_1[0x14b] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x14e);
  FUN_00f13d08(param_1 + 0x134);
  param_1[0x116] = &PTR_FUN_028266f0;
  param_1[0x12d] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x130);
  FUN_00f13d08(param_1 + 0x116);
  FUN_00f13d08(param_1 + 0xff);
  param_1[0xe1] = &PTR_FUN_028266f0;
  param_1[0xf8] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xfb);
  FUN_00f13d08(param_1 + 0xe1);
  param_1[0xc3] = &PTR_FUN_028266f0;
  param_1[0xda] = &PTR_FUN_02826850;
  param_1[0x34] = &PTR_FUN_027dc7d8;
  FUN_00f0a79c(param_1 + 0xdd);
  FUN_00f13d08(param_1 + 0xc3);
  param_1[0xa5] = &PTR_FUN_028266f0;
  param_1[0xbc] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xbf);
  FUN_00f13d08(param_1 + 0xa5);
  param_1[0x87] = &PTR_FUN_028266f0;
  param_1[0x9e] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xa1);
  FUN_00f13d08(param_1 + 0x87);
  param_1[0x69] = &PTR_FUN_028266f0;
  param_1[0x80] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x83);
  FUN_00f13d08(param_1 + 0x69);
  param_1[0x4b] = &PTR_FUN_028266f0;
  param_1[0x62] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x65);
  FUN_00f13d08(param_1 + 0x4b);
  FUN_00f13d08(param_1 + 0x34);
  FUN_00f13d08(param_1);
  return;
}




void FUN_00c4d67c(void *param_1)

{
  FUN_00c4d434();
  operator_delete(param_1);
  return;
}




void FUN_00c4d6a0(undefined8 param_1,undefined8 param_2,long param_3)

{
  thunk_FUN_0091ada4();
  FUN_00b1574c(param_1,param_2,0x40000000,param_3 + 0x1a0);
  FUN_00f13f08(param_1,param_2,param_3 + 0x708);
  FUN_00f13f08(param_1,param_2,param_3 + 0x7f8);
  FUN_00f13f08(param_1,param_2,param_3 + 0x8b0);
  FUN_00f13f08(param_1,param_2,param_3 + 0x9a0);
  FUN_00f13f08((float)param_1 + -40.0,(float)param_2 + -40.0,param_3 + 0xa90);
  FUN_00c4d740(param_3);
  return;
}




void FUN_00c4d740(long param_1)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  
  FUN_00f07a18(0,0,param_1 + 0x708,1);
  uVar2 = *(uint *)(param_1 + 0x2360);
  if (uVar2 != 0) {
    iVar3 = 0;
    uVar4 = 0;
    do {
      FUN_00f07a18((float)(int)((uVar2 + iVar3) * -200 + 0xb4) + 208.0,0,
                   *(undefined8 *)(*(long *)(param_1 + 0x2368) + (ulong)uVar4 * 8),5);
      uVar2 = *(uint *)(param_1 + 0x2360);
      uVar4 = uVar4 + 1;
      iVar3 = iVar3 + -1;
    } while (uVar4 < uVar2);
  }
  FUN_00f07a18(0,0,param_1 + 0x8b0,1);
  FUN_00f07a18(0,0,param_1 + 0x9a0,1);
  bVar1 = *(char *)(param_1 + 0x23f1) == '\0';
  if (bVar1) {
    uVar5 = 0x41a00000;
  }
  else {
    uVar5 = 0xc1a00000;
  }
  FUN_00f07a18(uVar5,0x41a00000,param_1 + 0xa90,!bVar1);
  FUN_00f07a18(0xc2a00000,0,param_1 + 0xbc0,5);
  FUN_00f07a18(0xc1a00000,0xc1a00000,param_1 + 0xcb0,2);
  FUN_00f07a18(0xc1a00000,0xc1a00000,param_1 + 0xda0,2);
  return;
}




ulong FUN_00c4d870(undefined1 param_1 [16],float param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  if ((*(byte *)(param_3 + 0xe24) >> 2 & 1) == 0) {
    uVar2 = 0xf000000000;
  }
  else {
    FUN_00f13e54(param_3 + 0xda0);
    uVar2 = (ulong)((int)(param_2 * 1.4) + 0xf0) << 0x20;
  }
  uVar1 = 0x41a;
  if (*(char *)(param_3 + 0x23f1) != '\0') {
    uVar1 = 700;
  }
  return uVar1 | uVar2;
}




void FUN_00c4d8d8(long param_1,long param_2,undefined8 param_3,uint param_4,byte param_5)

{
  byte *pbVar1;
  long lVar2;
  code *pcVar3;
  ulong uVar4;
  long lVar5;
  code *local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  uint *local_88;
  undefined4 local_80;
  long local_78;
  
  lVar2 = tpidr_el0;
  local_78 = *(long *)(lVar2 + 0x28);
  pbVar1 = (byte *)(param_1 + 0x23f1);
  *pbVar1 = param_5 & 1;
  *(bool *)(param_1 + 0x23f0) = param_2 != 0;
  if (param_2 == 0) {
    *(uint *)(param_1 + 0x224) = *(uint *)(param_1 + 0x224) & 0xfffffffb;
  }
  else {
    FUN_00910394(param_1 + 0x2370,param_2);
    FUN_00910394(param_1 + 0x2380,param_2 + 0x10);
    FUN_00910394(param_1 + 0x2390,param_2 + 0x20);
    FUN_008fce60(param_1 + 0x23a0,param_2 + 0x30);
    FUN_008fce60(param_1 + 0x23b8,param_2 + 0x48);
    FUN_00c50850(param_1 + 0x23d0,param_2 + 0x60);
    *(undefined4 *)(param_1 + 0x23e0) = *(undefined4 *)(param_2 + 0x70);
    *(uint *)(param_1 + 0x224) = *(uint *)(param_1 + 0x224) | 4;
    local_88 = operator_new(8);
    local_88[0] = 0;
    local_88[1] = 0;
    *local_88 = param_4;
    *(byte *)(local_88 + 1) = param_5 & 1;
    local_80 = DAT_03210f60;
    *(uint **)(param_1 + 0x23e8) = local_88;
    local_a8 = FUN_00c4db7c;
    local_98 = 0;
    uStack_90 = 0;
    uStack_a0 = param_3;
    FUN_009693a0(param_1 + 0x1a8,&local_a8);
    local_88 = *(uint **)(param_1 + 0x23e8);
    local_80 = DAT_03210f8c;
    local_a8 = FUN_00c4db7c;
    local_98 = 0;
    uStack_90 = 0;
    uStack_a0 = param_3;
    FUN_009693a0(param_1 + 0x1a8,&local_a8);
    if (*(int *)(param_1 + 0x23d0) != 0) {
      lVar5 = 0;
      uVar4 = 0;
      do {
        pcVar3 = (code *)FUN_00c508f0(param_1 + 0x7f8,1);
        FUN_00c4c980(pcVar3,*(long *)(param_1 + 0x23d8) + lVar5,0x208,0x208,0);
        FUN_00f13f08(0x44020000,0x44020000,pcVar3);
        local_a8 = pcVar3;
        FUN_00c4db88(param_1 + 0x2360,&local_a8);
        uVar4 = uVar4 + 1;
        lVar5 = lVar5 + 0x38;
      } while (uVar4 < *(uint *)(param_1 + 0x23d0));
    }
    FUN_00f0d75c(param_1 + 0xa90,param_1 + 0x2370);
    pcVar3 = FUN_00c4dc28;
    if (*pbVar1 != 0) {
      FUN_00f0dac8(param_1 + 0xa90,1);
      if (*pbVar1 != 0) {
        pcVar3 = FUN_00c4dc10;
      }
    }
    local_80 = DAT_03210c64;
    local_88 = (uint *)(ulong)param_4;
    local_98 = 0;
    uStack_90 = 0;
    local_a8 = pcVar3;
    uStack_a0 = param_3;
    FUN_009693a0(param_1 + 0xda8,&local_a8);
    FUN_00c4dc40(param_1,*(undefined4 *)(param_1 + 0x23e0));
    FUN_00c4d740(param_1);
  }
  if (*(long *)(lVar2 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00c4db7c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  FUN_00c4fc88(param_1,param_4,param_5);
  return;
}




void FUN_00c4db88(uint *param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = *param_1;
  if (uVar3 == param_1[1]) {
    if (uVar3 < 0x20) {
      uVar2 = uVar3 << 1;
    }
    else if (uVar3 == 0xffffffff) {
      uVar2 = 0;
    }
    else {
      uVar2 = (uVar3 + 0x10) - (uVar3 & 0xf);
    }
    uVar1 = uVar3 + 1;
    if (uVar3 + 1 <= uVar2) {
      uVar1 = uVar2;
    }
    FUN_00c50958(param_1,uVar1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




void FUN_00c4dc10(long param_1)

{
  undefined8 in_x4;
  
                    /* WARNING: Could not recover jumptable at 0x00c4dc24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)**(undefined8 **)(param_1 + 0x1a0))(*(undefined8 **)(param_1 + 0x1a0),in_x4,1);
  return;
}




void FUN_00c4dc28(long param_1)

{
  undefined8 in_x4;
  
                    /* WARNING: Could not recover jumptable at 0x00c4dc3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)**(undefined8 **)(param_1 + 0x1a0))(*(undefined8 **)(param_1 + 0x1a0),in_x4,0);
  return;
}




void FUN_00c4dc40(long param_1,uint param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  byte bVar4;
  uint uVar5;
  bool bVar6;
  uint uVar7;
  
  *(uint *)(param_1 + 0x84) = *(uint *)(param_1 + 0x84) & 0xffffffef;
  bVar4 = *(byte *)(param_1 + 0x23f0);
  *(uint *)(param_1 + 0x78c) = *(uint *)(param_1 + 0x78c) & 0xfffffffb | (uint)bVar4 << 2;
  uVar5 = param_2 | 1;
  *(uint *)(param_1 + 0x934) =
       *(uint *)(param_1 + 0x934) & 0xfffffff8 |
       *(uint *)(param_1 + 0x934) & 3 | (uint)(param_2 < 2 && bVar4 != 0) << 2;
  if ((param_2 - 2 < 3) && (bVar4 != 0)) {
    *(uint *)(param_1 + 0xa24) = *(uint *)(param_1 + 0xa24) | 4;
    puVar1 = &DAT_0313bb08;
    if (uVar5 != 3) {
      puVar1 = &DAT_0313bb0c;
    }
    uVar7 = 0xa3;
    if (uVar5 != 3) {
      uVar7 = 0xbc;
    }
    FUN_00f0e670(param_1 + 0x9a0,puVar1,2);
    uVar3 = *(uint *)(param_1 + 0xa24);
    if ((uVar3 >> 7 & 0xff) != uVar7) {
      *(uint *)(param_1 + 0xa24) = uVar3 & 0xffff8000 | uVar3 & 0x7f | uVar7 << 7;
      FUN_0091ada4(param_1 + 0x9a0);
    }
  }
  else {
    *(uint *)(param_1 + 0xa24) = *(uint *)(param_1 + 0xa24) & 0xfffffffb;
  }
  bVar6 = param_2 == 4;
  puVar1 = &DAT_0313bb18;
  if (!bVar6) {
    puVar1 = &DAT_0313bb14;
  }
  puVar2 = &DAT_01bee7fa;
  if (uVar5 != 3) {
    puVar2 = puVar1;
  }
  FUN_00f0da30(param_1 + 0xa90,!bVar6 && uVar5 != 3);
  FUN_00f0d7fc(param_1 + 0xa90,puVar2);
  *(uint *)(param_1 + 0xc44) =
       *(uint *)(param_1 + 0xc44) & 0xfffffff8 | *(uint *)(param_1 + 0xc44) & 3 | (uint)bVar6 << 2;
  *(uint *)(param_1 + 0xd34) =
       *(uint *)(param_1 + 0xd34) & 0xfffffff8 |
       *(uint *)(param_1 + 0xd34) & 3 | (uint)(param_2 == 0) << 2;
  *(uint *)(param_1 + 0xe24) =
       *(uint *)(param_1 + 0xe24) & 0xfffffff8 |
       *(uint *)(param_1 + 0xe24) & 3 | (uint)(param_2 == 3) << 2;
  FUN_00c4d740(param_1);
  return;
}




long FUN_00c4ddbc(long param_1)

{
  long lVar1;
  
  lVar1 = 0;
  if (*(char *)(param_1 + 0x23f0) != '\0') {
    lVar1 = param_1 + 0x2370;
  }
  return lVar1;
}




void FUN_00c4ddd8(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  float fVar7;
  undefined2 local_50 [4];
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  FUN_00f13ca4();
  plVar6 = param_1 + 0x17;
  *param_1 = (long)&PTR_FUN_027fcfc0;
  FUN_00f0e4a8(plVar6);
  plVar1 = param_1 + 0x35;
  FUN_00f0d160(plVar1);
  plVar2 = param_1 + 0x5b;
  FUN_00f0d160(plVar2);
  plVar3 = param_1 + 0x81;
  FUN_00f0d160(plVar3);
  (**(code **)(*param_1 + 0x78))(param_1,plVar6,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar3,1);
  FUN_00f0e548(plVar6,PTR_s_build___MenuPartsCommon_tga_02be3530,"white_background");
  FUN_00f0e670(plVar6,&DAT_01bee7f6,2);
  FUN_00f0d92c(plVar1,DAT_0313bb60,&DAT_0313bb14);
  uVar5 = FUN_00e6ce7c("MENU_BATTLE_PASS_DESC_FREE_PASS",0);
  FUN_00f0d75c(plVar1,uVar5);
  FUN_00f0d92c(plVar2,DAT_0313bb68,&DAT_0313bb14);
  uVar5 = FUN_00e6ce7c("STAT_TABLE_LEVEL",0);
  FUN_00f0d75c(plVar2,uVar5);
  FUN_00f0d92c(plVar3,DAT_0313bb70,&DAT_0313bb14);
  uVar5 = FUN_00e6ce7c("MENU_BATTLE_PASS_DESC_BATTLE_PASS",0);
  FUN_00f0d75c(plVar3,uVar5);
  local_50[0] = 5;
  FUN_00f14070(param_1,local_50);
  fVar7 = (float)(**(code **)(*param_1 + 0x48))(param_1);
  FUN_00f13f68(param_1,(ulong)(uint)(int)fVar7 | 0x6400000000);
  if (*(long *)(lVar4 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c4dfd0(long param_1)

{
  FUN_00f13f08(param_1 + 0xb8);
  FUN_00f07b18(0,param_1 + 0x1a8,5,param_1,5);
  FUN_00f07b18(0,param_1 + 0x2d8,5,param_1,5);
  FUN_00f07b18(0,param_1 + 0x408,5,param_1,5);
  return;
}

