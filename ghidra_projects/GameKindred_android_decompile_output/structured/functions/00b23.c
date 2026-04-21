// functions/00b23 — 29 functions
#include "libGameKindred.h"




void FUN_00b230c8(long param_1)

{
  long lVar1;
  int iVar2;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if ((*(char *)(param_1 + 0x2128) == '\0') || (*(char *)(param_1 + 0x212a) != '\0')) {
    FUN_00afd0d4(param_1 + 8000);
    iVar2 = 0;
  }
  else {
    FUN_00afc73c(param_1 + 8000);
    FUN_00afd018(param_1 + 8000,"Progress_Bar_Ready_For_Upgrade");
    iVar2 = 1;
  }
  *(uint *)(param_1 + 0x139c) =
       *(uint *)(param_1 + 0x139c) & 0xfffffff8 | *(uint *)(param_1 + 0x139c) & 3 | iVar2 << 2;
  *(byte *)(param_1 + 0x1312) = (byte)iVar2 ^ 1;
  *(uint *)(param_1 + 0x176c) =
       *(uint *)(param_1 + 0x176c) & 0xfffffff8 | *(uint *)(param_1 + 0x176c) & 3 | iVar2 << 2;
  if (*(char *)(param_1 + 0x2128) == '\0') {
    local_44 = *(undefined4 *)(param_1 + 0x2124);
    uStack_3c = *(undefined4 *)(param_1 + 0x2120);
  }
  else {
    uStack_3c = 0xff7fe801;
    if (*(char *)(param_1 + 0x212a) != '\0') {
      uStack_3c = *(undefined4 *)(param_1 + 0x2120);
    }
    local_44 = 0xff32e00e;
    if (*(char *)(param_1 + 0x212a) != '\0') {
      local_44 = *(undefined4 *)(param_1 + 0x2124);
    }
  }
  local_40 = uStack_3c;
  FUN_00b0a8a8(param_1,&uStack_3c,&local_40,&local_44);
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00b231f4(long param_1,undefined4 param_2)

{
  *(uint *)(param_1 + 0x139c) = *(uint *)(param_1 + 0x139c) | 4;
  FUN_00ca5d48(param_1 + 0x1318,0,param_2);
  return;
}




void FUN_00b23218(long param_1)

{
  FUN_00ca5d48(param_1 + 0x1318,1,0);
  return;
}




void FUN_00b2322c(long param_1)

{
  FUN_00ca639c(param_1 + 0x1318);
  return;
}




void FUN_00b23238(long param_1,byte param_2)

{
  *(byte *)(param_1 + 0x212a) = param_2 & 1;
  FUN_00b230c8();
  return;
}




void FUN_00b23248(long param_1)

{
  FUN_00b0b9f8();
  FUN_00afd0d4(param_1 + 8000);
  FUN_00afd018(param_1 + 8000,"Progress_Bar_Emptying_During_Upgrade");
  return;
}




bool FUN_00b23284(long param_1)

{
  if (*(char *)(param_1 + 0x2128) != '\0') {
    return *(char *)(param_1 + 0x212a) == '\0';
  }
  return false;
}




void FUN_00b232ac(long param_1)

{
  if ((*(char *)(param_1 + 0x2128) != '\0') && (*(char *)(param_1 + 0x212a) == '\0')) {
    FUN_00ca5d48(param_1 + 0x1318,1,0);
    return;
  }
  *(uint *)(param_1 + 0x139c) = *(uint *)(param_1 + 0x139c) & 0xfffffffb;
  return;
}




void FUN_00b232e8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027ddfa0;
  FUN_00afc0a4(param_1 + 1000);
  FUN_009c8134(param_1 + 0x2dd);
  param_1[0x263] = &PTR_FUN_027de118;
  FUN_00f0d3a4(param_1 + 0x2b6);
  param_1[0x298] = &PTR_FUN_028266f0;
  param_1[0x2af] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x2b2);
  FUN_00f13d08(param_1 + 0x298);
  param_1[0x27a] = &PTR_FUN_028266f0;
  param_1[0x291] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x294);
  FUN_00f13d08(param_1 + 0x27a);
  FUN_00f13d08(param_1 + 0x263);
  FUN_00ab0d88(param_1);
  return;
}




void FUN_00b233c4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027ddfa0;
  FUN_00afc0a4(param_1 + 1000);
  FUN_009c8134(param_1 + 0x2dd);
  param_1[0x263] = &PTR_FUN_027de118;
  FUN_00f0d3a4(param_1 + 0x2b6);
  param_1[0x298] = &PTR_FUN_028266f0;
  param_1[0x2af] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x2b2);
  FUN_00f13d08(param_1 + 0x298);
  param_1[0x27a] = &PTR_FUN_028266f0;
  param_1[0x291] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x294);
  FUN_00f13d08(param_1 + 0x27a);
  FUN_00f13d08(param_1 + 0x263);
  FUN_00ab0d88(param_1);
  operator_delete(param_1);
  return;
}




void FUN_00b234a8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027de118;
  FUN_00f0d3a4(param_1 + 0x53);
  param_1[0x35] = &PTR_FUN_028266f0;
  param_1[0x4c] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x4f);
  FUN_00f13d08(param_1 + 0x35);
  param_1[0x17] = &PTR_FUN_028266f0;
  param_1[0x2e] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x31);
  FUN_00f13d08(param_1 + 0x17);
  FUN_00f13d08(param_1);
  return;
}




void FUN_00b23530(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027de118;
  FUN_00f0d3a4(param_1 + 0x53);
  param_1[0x35] = &PTR_FUN_028266f0;
  param_1[0x4c] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x4f);
  FUN_00f13d08(param_1 + 0x35);
  param_1[0x17] = &PTR_FUN_028266f0;
  param_1[0x2e] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x31);
  FUN_00f13d08(param_1 + 0x17);
  FUN_00f13d08(param_1);
  operator_delete(param_1);
  return;
}




void FUN_00b235c0(undefined8 *param_1)

{
  FUN_00f13ca4();
  *param_1 = &PTR_FUN_027de260;
  FUN_00f0e4a8(param_1 + 0x17);
  FUN_00f0bdbc(param_1 + 0x35,0);
  param_1[0x35] = &PTR_FUN_027c3260;
  FUN_00f0e4a8(param_1 + 0x4e);
  FUN_00f0d160(param_1 + 0x6c);
  FUN_00e70510(param_1 + 0x92);
  *(undefined1 *)(param_1 + 0x94) = 0;
  FUN_00b23634(param_1);
  return;
}




void FUN_00b23634(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  uint uVar4;
  
  plVar1 = param_1 + 0x17;
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  plVar2 = param_1 + 0x35;
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  FUN_00f023ec(plVar2,param_1 + 0x4e,1);
  plVar3 = param_1 + 0x6c;
  FUN_00f023ec(plVar2,plVar3,1);
  FUN_00f0e548(plVar1,PTR_s_build___MenuPartsCommon_tga_02be3530,"black_background");
  uVar4 = *(uint *)((long)param_1 + 0x13c);
  if ((uVar4 & 0x7f80) != 0x4c80) {
    *(uint *)((long)param_1 + 0x13c) = uVar4 & 0xffff8000 | uVar4 & 0x7f | 0x4c80;
    FUN_0091ada4(plVar1);
  }
  FUN_00f0e540(param_1 + 0x4e,PTR_s_build___MenuPartsCommon_tga_02be3530);
  FUN_00f0d378(plVar3,PTR_s_build___Fonts_Brandon_Bold_40_fo_02be9c80);
  FUN_00f0db64(0x44540000,0,0x3f800000,plVar3);
  return;
}




void FUN_00b23734(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027de260;
  if ((void *)param_1[0x93] != (void *)0x0) {
    operator_delete__((void *)param_1[0x93]);
    param_1[0x93] = 0;
    param_1[0x92] = 0;
  }
  FUN_00f0d3a4(param_1 + 0x6c);
  param_1[0x4e] = &PTR_FUN_028266f0;
  param_1[0x65] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x68);
  FUN_00f13d08(param_1 + 0x4e);
  FUN_00f13d08(param_1 + 0x35);
  param_1[0x17] = &PTR_FUN_028266f0;
  param_1[0x2e] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x31);
  FUN_00f13d08(param_1 + 0x17);
  FUN_00f13d08(param_1);
  return;
}




void FUN_00b237d8(void *param_1)

{
  FUN_00b23734();
  operator_delete(param_1);
  return;
}




void FUN_00b237fc(long param_1,long param_2)

{
  long lVar1;
  undefined4 local_40 [2];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00910394(param_1 + 0x490);
  *(undefined1 *)(param_1 + 0x4a0) = *(undefined1 *)(param_2 + 0x10);
  FUN_00f0e578(param_1 + 0x270,"generic_warning");
  local_40[0] = 0xff2af0ff;
  FUN_00f0e670(param_1 + 0x270,local_40,2);
  FUN_00f0d75c(param_1 + 0x360,param_1 + 0x490);
  FUN_00b238a8(0,param_1);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b238a8(float param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  undefined4 local_68;
  float fStack_64;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  lVar1 = param_2 + 0xb8;
  if (param_1 <= 0.0) {
    fVar4 = (float)FUN_00f01c20(param_2 + 0x360);
    param_1 = fVar4 + 90.0 + 62.0;
  }
  fVar5 = 60.0;
  FUN_00f13f08(param_1,lVar1);
  FUN_00f0d4e0(param_2 + 0x360);
  fVar4 = fVar5 * 0.5;
  FUN_00f0e700(param_2 + 0x270);
  fVar4 = fVar4 - fVar5 * 0.5;
  if (*(float *)(param_2 + 0x2b4) != fVar4) {
    *(float *)(param_2 + 0x2b4) = fVar4;
    FUN_0091ada4(param_2 + 0x270);
  }
  fVar5 = 0.0;
  lVar2 = param_2 + 0x1a8;
  FUN_00f0bc10(0,0,0x41f00000,&local_68);
  FUN_00f0c168(lVar2,&local_68);
  (**(code **)(*(long *)(param_2 + 0x1a8) + 0x90))(lVar2);
  FUN_00f0e700(lVar1);
  fVar4 = fVar5 * 0.5;
  FUN_00f13e54(lVar2);
  fVar5 = fVar5 * 0.5;
  fVar4 = fVar4 - fVar5;
  if ((*(float *)(param_2 + 0x1e8) != 30.0) || (fVar5 = *(float *)(param_2 + 0x1ec), fVar5 != fVar4)
     ) {
    *(undefined4 *)(param_2 + 0x1e8) = 0x41f00000;
    *(float *)(param_2 + 0x1ec) = fVar4;
    FUN_0091ada4(lVar2);
  }
  local_68 = FUN_00f0e700(lVar1);
  fStack_64 = fVar5;
  FUN_00f13f18(param_2,&local_68);
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b23a14(float param_1)

{
  if (param_1 <= 152.0) {
    param_1 = 152.0;
  }
  FUN_00b238a8(param_1);
  return;
}




void FUN_00b23a24(undefined8 *param_1)

{
  long lVar1;
  
  FUN_00f13ca4();
  *param_1 = &PTR_FUN_027de3a8;
  FUN_00f0bdbc(param_1 + 0x17,1);
  lVar1 = 0;
  param_1[0x17] = &PTR_FUN_027ccd08;
  do {
    FUN_00b235c0((long)param_1 + lVar1 + 0x180);
    lVar1 = lVar1 + 0x4a8;
  } while (lVar1 != 0x12a0);
  FUN_00b23aa0(param_1);
  return;
}




void FUN_00b23aa0(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x17,1);
  plVar1 = param_1 + 0x30;
  lVar2 = 4;
  do {
    FUN_00f023ec(param_1 + 0x17,plVar1,1);
    lVar2 = lVar2 + -1;
    plVar1 = plVar1 + 0x95;
  } while (lVar2 != 0);
  return;
}




void FUN_00b23b00(undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = 0xf78;
  *param_1 = &PTR_FUN_027de3a8;
  do {
    FUN_00b23734((long)param_1 + lVar1);
    lVar1 = lVar1 + -0x4a8;
  } while (lVar1 != -0x328);
  FUN_00f13d08(param_1 + 0x17);
  FUN_00f13d08(param_1);
  return;
}




void FUN_00b23b50(void *param_1)

{
  FUN_00b23b00();
  operator_delete(param_1);
  return;
}




void FUN_00b23b74(long param_1,uint *param_2)

{
  uint *puVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  float fVar6;
  ulong uVar7;
  
  lVar5 = 0;
  uVar4 = 0;
  plVar2 = (long *)(param_1 + 0x180);
  uVar7 = 0;
  do {
    if (*param_2 <= uVar4) break;
    FUN_00b237fc(plVar2,*(long *)(param_2 + 2) + lVar5);
    *(uint *)((long)plVar2 + 0x84) = *(uint *)((long)plVar2 + 0x84) | 4;
    fVar6 = (float)(**(code **)(*plVar2 + 0x48))(plVar2);
    if ((float)uVar7 < fVar6) {
      uVar7 = (**(code **)(*plVar2 + 0x48))(plVar2);
    }
    uVar4 = uVar4 + 1;
    plVar2 = plVar2 + 0x95;
    lVar5 = lVar5 + 0x18;
  } while (uVar4 < 4);
  FUN_00f13f08(uVar7,(float)(uVar4 & 0xffffffff) * 60.0 + (float)((uint)uVar4 - 1) * 4.0,param_1);
  if ((uint)uVar4 < 4) {
    puVar1 = (uint *)(param_1 + (uVar4 & 0xffffffff) * 0x4a8 + 0x204);
    lVar5 = 4 - (uVar4 & 0xffffffff);
    do {
      lVar5 = lVar5 + -1;
      *puVar1 = *puVar1 & 0xfffffffb;
      puVar1 = puVar1 + 0x12a;
    } while (lVar5 != 0);
  }
  lVar5 = param_1 + 0x180;
  lVar3 = 4;
  uVar4 = uVar7 & 0xffffffff;
  if ((float)uVar7 <= 152.0) {
    uVar4 = 0x43180000;
  }
  do {
    if ((*(byte *)(lVar5 + 0x84) >> 2 & 1) != 0) {
      FUN_00b238a8(uVar4,lVar5);
    }
    lVar3 = lVar3 + -1;
    lVar5 = lVar5 + 0x4a8;
  } while (lVar3 != 0);
  FUN_00b23cc0(param_1);
  return;
}




void FUN_00b23cc0(long param_1)

{
  long lVar1;
  undefined1 auStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00f0bc10(0,0x3f000000,0x40800000,auStack_48);
  FUN_00f0c168(param_1 + 0xb8,auStack_48);
  (**(code **)(*(long *)(param_1 + 0xb8) + 0x90))(param_1 + 0xb8);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b23d40(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ushort uVar4;
  ushort *puVar5;
  
  if (*(float *)(param_2 + 0x40) != 500.0) {
    *(undefined4 *)(param_2 + 0x40) = 0x43fa0000;
    FUN_0091ada4(param_2);
  }
  if ((*(uint *)(param_2 + 0x84) & 0x7f80) != 0) {
    *(uint *)(param_2 + 0x84) = *(uint *)(param_2 + 0x84) & 0xffff807f;
    FUN_0091ada4(param_2);
  }
  FUN_00f01980(param_2);
  uVar2 = FUN_00efef08(0,*(undefined4 *)(param_2 + 0x44),0x3e99999a,FUN_009a71a4);
  uVar3 = FUN_00efee28(0x3f800000,0x3e99999a,FUN_009a71a4);
  lVar1 = DAT_03210d00;
  uVar4 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar4 == 0xffff) {
    puVar5 = (ushort *)0x0;
  }
  else {
    puVar5 = (ushort *)(DAT_03210d00 + (ulong)uVar4 * 0x40 + 0x10);
    if (uVar4 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar4 = 0xffff;
    }
    else {
      uVar4 = *puVar5;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar4;
    *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
    FUN_00efcd98(puVar5);
    *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
  }
  FUN_00efcea4(puVar5,uVar2,uVar3,0);
  FUN_00f022a0(param_2,puVar5);
  return;
}




void FUN_00b23ea0(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ushort uVar4;
  ushort *puVar5;
  
  if (*(float *)(param_2 + 0x40) != 0.0) {
    *(undefined4 *)(param_2 + 0x40) = 0;
    FUN_0091ada4(param_2);
  }
  if ((~*(uint *)(param_2 + 0x84) & 0x7f80) != 0) {
    *(uint *)(param_2 + 0x84) = *(uint *)(param_2 + 0x84) | 0x7f80;
    FUN_0091ada4(param_2);
  }
  FUN_00f01980(param_2);
  uVar2 = FUN_00efef08(0x43fa0000,0,0x3e99999a,FUN_009a71a4);
  uVar3 = FUN_00efee28(0,0x3e99999a,FUN_009a71a4);
  lVar1 = DAT_03210d00;
  uVar4 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar4 == 0xffff) {
    puVar5 = (ushort *)0x0;
  }
  else {
    puVar5 = (ushort *)(DAT_03210d00 + (ulong)uVar4 * 0x40 + 0x10);
    if (uVar4 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar4 = 0xffff;
    }
    else {
      uVar4 = *puVar5;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar4;
    *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
    FUN_00efcd98(puVar5);
    *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
  }
  FUN_00efcea4(puVar5,uVar2,uVar3,0);
  return;
}




void FUN_00b23fe8(void)

{
  return;
}




void FUN_00b23fec(undefined8 *param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  code *local_78;
  undefined8 *puStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  FUN_00ed7708();
  *param_1 = &PTR_FUN_027de4f0;
  param_1[0x17] = &PTR_FUN_027de6a8;
  FUN_00f0a784(param_1 + 0x1e);
  FUN_00f017e8(param_1 + 0x20);
  param_1[0x20] = &PTR_FUN_027c1f80;
  FUN_00f13ca4(param_1 + 0x31);
  FUN_00f0d160(param_1 + 0x48);
  FUN_00f0d160(param_1 + 0x6e);
  FUN_00f0d160(param_1 + 0x94);
  FUN_00ed78f4(param_1 + 0xba);
  FUN_00f13ca4(param_1 + 0x150);
  FUN_00abaee8(param_1 + 0x167,0);
  uVar4 = NEON_fmov(0xbf800000,4);
  *(undefined4 *)(param_1 + 0x227) = 0;
  *(undefined4 *)(param_1 + 0x228) = 0;
  param_1[0x226] = uVar4;
  *(undefined1 *)((long)param_1 + 0x1144) = 0;
  uVar2 = *(uint *)((long)param_1 + 0x84);
  *(uint *)((long)param_1 + 0x84) = uVar2 & 0xfffffffb;
  if ((uVar2 & 0x7f80) != 0) {
    *(uint *)((long)param_1 + 0x84) = uVar2 & 0xffff807b;
    FUN_0091ada4(param_1);
  }
  FUN_00f0d378(param_1 + 0x48,PTR_s_build___Fonts_Brandon_Bold_72_fo_02be9c98);
  FUN_00f0d378(param_1 + 0x6e,PTR_s_build___Fonts_Brandon_Bold_72_fo_02be9c98);
  FUN_00f0d378(param_1 + 0x94,PTR_s_build___Fonts_Brandon_Bold_72_fo_02be9c98);
  FUN_00f0d378(param_1 + 0xf3,PTR_s_build___Fonts_Brandon_Bold_72_fo_02be9c98);
  local_50 = DAT_03210c64;
  local_78 = thunk_FUN_00ed77f0;
  local_60 = 0;
  uStack_58 = 0;
  local_68 = 0;
  puStack_70 = param_1;
  FUN_009693a0(param_1 + 0x168,&local_78);
  puVar1 = param_1 + 0xbb;
  local_50 = DAT_03210fb4;
  local_78 = FUN_00b24204;
  local_60 = 0;
  uStack_58 = 0;
  local_68 = 0;
  puStack_70 = param_1;
  FUN_009693a0(puVar1,&local_78);
  local_50 = DAT_03210fbc;
  local_78 = FUN_00b24210;
  local_60 = 0;
  uStack_58 = 0;
  local_68 = 0;
  puStack_70 = param_1;
  FUN_009693a0(puVar1,&local_78);
  local_50 = DAT_03210fb8;
  local_78 = FUN_00b24218;
  local_60 = 0;
  uStack_58 = 0;
  local_68 = 0;
  puStack_70 = param_1;
  FUN_009693a0(puVar1,&local_78);
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

