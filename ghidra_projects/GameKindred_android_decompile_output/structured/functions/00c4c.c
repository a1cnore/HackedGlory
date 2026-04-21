// functions/00c4c — 20 functions
#include "libGameKindred.h"




void FUN_00c4c268(void *param_1)

{
  FUN_00c4bfd8();
  operator_delete(param_1);
  return;
}




void FUN_00c4c28c(long *param_1)

{
  long *plVar1;
  long *plVar2;
  undefined8 uVar3;
  
  FUN_00f13ca4();
  plVar1 = param_1 + 0x17;
  *param_1 = (long)&PTR_FUN_027fc928;
  FUN_00f0d160(plVar1);
  plVar2 = param_1 + 0x3d;
  FUN_00f0d160(plVar2);
  param_1[99] = 0;
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  FUN_00f0d92c(plVar1,DAT_0313bb30,&DAT_01bee7fa);
  uVar3 = FUN_00e6ce7c("MENU_BATTLE_PASS_DESC_UNLOCK_YOUR_BATTLE_PASS",0);
  FUN_00f0d75c(plVar1,uVar3);
  FUN_00f0d9b0(plVar2,1);
  FUN_00f0d92c(plVar2,DAT_0313bb38,&DAT_01bee7fa);
  uVar3 = FUN_00e6ce7c("MENU_BATTLE_PASS_DESC_3",0);
  FUN_00f0d75c(plVar2,uVar3);
  FUN_00f0dac8(plVar2,3);
  uVar3 = FUN_00f136e0();
  FUN_00f13fd8(param_1,uVar3);
  FUN_00f15134(uVar3,plVar1);
  FUN_00f15134(uVar3,plVar2);
  FUN_00f15198(uVar3,0x28);
  return;
}




void FUN_00c4c3c4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027fc928;
  if ((long *)param_1[99] != (long *)0x0) {
    (**(code **)(*(long *)param_1[99] + 8))();
  }
  FUN_00f0d3a4(param_1 + 0x3d);
  FUN_00f0d3a4(param_1 + 0x17);
  FUN_00f13d08(param_1);
  return;
}




void FUN_00c4c418(void *param_1)

{
  FUN_00c4c3c4();
  operator_delete(param_1);
  return;
}




void FUN_00c4c43c(long *param_1,undefined8 param_2)

{
  void *pvVar1;
  long *plVar2;
  
  pvVar1 = operator_new(0x24f8);
  FUN_00b0c060(0x3f800000,pvVar1,param_2,1);
  param_1[99] = (long)pvVar1;
  FUN_00ab75c0(0x41a00000,pvVar1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1[99],1);
  plVar2 = (long *)FUN_00f14058(param_1);
                    /* WARNING: Could not recover jumptable at 0x00c4c4b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x58))(plVar2,param_1[99]);
  return;
}




void FUN_00c4c4bc(long *param_1)

{
  long *plVar1;
  undefined8 uVar2;
  
  FUN_00f13ca4();
  plVar1 = param_1 + 0x17;
  *param_1 = (long)&PTR_FUN_027fca70;
  FUN_00f0d160(plVar1);
  param_1[0x3d] = 0;
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  FUN_00f0d92c(plVar1,DAT_0313bb40,&DAT_01bee7fa);
  uVar2 = FUN_00e6ce7c("MENU_PROFILE_ASCENSION_SKIP_LEVEL",0);
  FUN_00f0d75c(plVar1,uVar2);
  uVar2 = FUN_00f136e0();
  FUN_00f13fd8(param_1,uVar2);
  FUN_00f15134(uVar2,plVar1);
  FUN_00f15198(uVar2,0x28);
  return;
}




void FUN_00c4c578(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027fca70;
  if ((long *)param_1[0x3d] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x3d] + 8))();
  }
  FUN_00f0d3a4(param_1 + 0x17);
  FUN_00f13d08(param_1);
  return;
}




void FUN_00c4c5c4(void *param_1)

{
  FUN_00c4c578();
  operator_delete(param_1);
  return;
}




void FUN_00c4c5e8(long *param_1,undefined8 param_2)

{
  void *pvVar1;
  long *plVar2;
  
  pvVar1 = operator_new(0x24f8);
  FUN_00b0c060(0x3f800000,pvVar1,param_2,1);
  param_1[0x3d] = (long)pvVar1;
  FUN_00ab75c0(0x41a00000,pvVar1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1[0x3d],1);
  plVar2 = (long *)FUN_00f14058(param_1);
                    /* WARNING: Could not recover jumptable at 0x00c4c664. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x58))(plVar2,param_1[0x3d]);
  return;
}




void FUN_00c4c668(long *param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined2 local_50 [4];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  FUN_00f13ca4();
  plVar4 = param_1 + 0x17;
  *param_1 = (long)&PTR_FUN_027fcbb8;
  FUN_00b1571c(plVar4);
  plVar1 = param_1 + 0xc4;
  FUN_00f0d160(plVar1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar4,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  FUN_00b12b64(0x3f800000,plVar4,&DAT_01bee7f6);
  FUN_00b128a0(0,plVar4,&DAT_01bee7f6);
  FUN_00f0d92c(plVar1,DAT_0313bb48,&DAT_0313bb28);
  uVar3 = FUN_00f13624();
  FUN_00f13fd8(param_1,uVar3);
  FUN_00f1521c(uVar3,0,1);
  FUN_00f15134(uVar3,plVar1);
  FUN_00f1521c(uVar3,0,1);
  local_50[0] = 0x50;
  FUN_00f14070(param_1,local_50);
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c4c7ac(undefined1 param_1 [16],undefined1 param_2 [16],long param_3)

{
  FUN_00b1574c(param_1,param_2,0x40000000,param_3 + 0xb8);
  return;
}




undefined8 FUN_00c4c7b8(void)

{
  return 0xf000000096;
}




void FUN_00c4c7c4(long param_1,undefined4 param_2)

{
  long lVar1;
  undefined8 local_40;
  void *local_38;
  undefined1 auStack_30 [8];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00e6a8a8(auStack_30,&DAT_01bb6d43,param_2);
  FUN_00e705c8(&local_40,auStack_30);
  FUN_00f0d75c(param_1 + 0x620,&local_40);
  if (local_38 != (void *)0x0) {
    operator_delete__(local_38);
    local_40 = 0;
    local_38 = (void *)0x0;
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c4c848(long param_1,int param_2)

{
  if (param_2 == 4) {
    FUN_00f0d92c(param_1 + 0x620,DAT_0313bb48,&DAT_0313bb28);
    return;
  }
  if (param_2 == 3) {
    FUN_00f0d92c(param_1 + 0x620,DAT_0313bb50,&DAT_0313bb2c);
    return;
  }
  return;
}




void FUN_00c4c88c(long *param_1)

{
  FUN_00f11234();
  *param_1 = (long)&PTR_FUN_027fcd00;
  FUN_00f0e4a8(param_1 + 0x34);
  *(undefined1 *)(param_1 + 0x52) = 0;
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x34,1);
  FUN_00f14070(param_1,&DAT_03211038);
  return;
}




void FUN_00c4c8f0(undefined1 param_1 [16],undefined4 param_2,long *param_3)

{
  long lVar1;
  undefined4 local_40;
  undefined4 uStack_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  thunk_FUN_0091ada4();
  local_40 = (**(code **)(*param_3 + 0x48))(param_3);
  uStack_3c = param_2;
  FUN_00f13f18(param_3 + 0x34,&local_40);
  FUN_00f07940(0,0,param_3 + 0x34,8,param_3,8);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c4c980(long param_1,byte *param_2,int param_3,int param_4,uint param_5)

{
  long lVar1;
  byte *pbVar2;
  
  FUN_00f13f68(param_1,CONCAT44(param_4,param_3));
  lVar1 = param_1 + 0x1a0;
  if ((*param_2 & 1) == 0) {
    pbVar2 = param_2 + 1;
  }
  else {
    pbVar2 = *(byte **)(param_2 + 0x10);
  }
  if ((param_2[0x18] & 1) == 0) {
    param_2 = param_2 + 0x19;
  }
  else {
    param_2 = *(byte **)(param_2 + 0x28);
  }
  FUN_00f0e548(lVar1,pbVar2,param_2);
  if ((param_5 & 1) != 0) {
    FUN_00f0e670(lVar1,&DAT_01bee7f6,2);
  }
  FUN_00f13f08((float)param_3,(float)param_4,lVar1);
  FUN_00f07940(0,0,lVar1,8,param_1,8);
  return;
}




void FUN_00c4ca40(undefined8 param_1,undefined8 param_2,long *param_3,int param_4)

{
  float fVar1;
  long lVar2;
  undefined8 uVar3;
  ushort uVar4;
  ushort *puVar5;
  float fVar6;
  
  fVar6 = (float)(**(code **)(*param_3 + 0x48))();
  if (*(float *)(param_3 + 8) != -fVar6) {
    *(float *)(param_3 + 8) = -fVar6;
    FUN_0091ada4(param_3);
  }
  FUN_00f07b18(param_2,param_3,5,param_3[4],5);
  fVar6 = 0.2;
  fVar1 = (float)param_4 * 0.05;
  if ((char)param_3[0x52] != '\0') {
    fVar6 = 0.0;
    fVar1 = 0.0;
  }
  uVar3 = FUN_00efed6c(fVar1);
  lVar2 = DAT_03210d00;
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
    *(int *)(lVar2 + 0x20014) = *(int *)(lVar2 + 0x20014) + 1;
    FUN_00efdc08(puVar5);
    *(int *)(lVar2 + 0x20020) = *(int *)(lVar2 + 0x20020) + 1;
  }
  FUN_00efdc5c(param_1,param_2,puVar5,param_3,8,param_3[4],8);
  FUN_00efcac4(fVar6,puVar5);
  FUN_00efcb24(puVar5,FUN_00ab3980);
  FUN_00f02308(param_3,uVar3,puVar5,0);
  uVar3 = FUN_00efed6c(fVar1);
  lVar2 = DAT_03210d00;
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
    *(int *)(lVar2 + 0x20014) = *(int *)(lVar2 + 0x20014) + 1;
    FUN_00efe00c(puVar5);
    *(int *)(lVar2 + 0x20020) = *(int *)(lVar2 + 0x20020) + 1;
  }
  FUN_00efe060(puVar5,param_3 + 0x34,&DAT_01bee7fa,2);
  FUN_00efcac4(fVar6,puVar5);
  FUN_00f02308(param_3 + 0x34,uVar3,puVar5,0);
  *(undefined1 *)(param_3 + 0x52) = 1;
  return;
}




void FUN_00c4ccb0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  ushort uVar3;
  ushort *puVar4;
  ushort *puVar5;
  ushort *puVar6;
  
  lVar1 = DAT_03210d00;
  uVar3 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar3 == 0xffff) {
    puVar5 = (ushort *)0x0;
  }
  else {
    puVar5 = (ushort *)(DAT_03210d00 + (ulong)uVar3 * 0x40 + 0x10);
    if (uVar3 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar3 = 0xffff;
    }
    else {
      uVar3 = *puVar5;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar3;
    *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
    FUN_00efdc08(puVar5);
    *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
  }
  FUN_00efdc5c(0,0,puVar5,param_1,7,*(undefined8 *)(param_1 + 0x20),5);
  FUN_00efcac4(0x3e4ccccd,puVar5);
  FUN_00efcb24(puVar5,FUN_00ab3980);
  uVar2 = FUN_00efee28(0,0x3d888889,0);
  lVar1 = DAT_03210d00;
  uVar3 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar3 == 0xffff) {
    puVar4 = (ushort *)0x0;
  }
  else {
    puVar4 = (ushort *)(DAT_03210d00 + (ulong)uVar3 * 0x40 + 0x10);
    if (uVar3 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar3 = 0xffff;
    }
    else {
      uVar3 = *puVar4;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar3;
    *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
    FUN_00efcd98(puVar4);
    *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
  }
  FUN_00efcea4(puVar4,puVar5,uVar2,0);
  lVar1 = DAT_03210d00;
  uVar3 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar3 == 0xffff) {
    puVar5 = (ushort *)0x0;
  }
  else {
    puVar5 = (ushort *)(DAT_03210d00 + (ulong)uVar3 * 0x40 + 0x10);
    if (uVar3 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar3 = 0xffff;
    }
    else {
      uVar3 = *puVar5;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar3;
    *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
    FUN_00efc8e8(puVar5);
    *(undefined ***)puVar5 = &PTR_FUN_028251d8;
    *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
    lVar1 = DAT_03210d00;
    uVar3 = *(ushort *)(DAT_03210d00 + 0x20010);
    if ((ulong)uVar3 != 0xffff) {
      puVar6 = (ushort *)(DAT_03210d00 + (ulong)uVar3 * 0x40 + 0x10);
      if (uVar3 == *(ushort *)(DAT_03210d00 + 0x20012)) {
        uVar3 = 0xffff;
      }
      else {
        uVar3 = *puVar6;
      }
      *(ushort *)(DAT_03210d00 + 0x20010) = uVar3;
      *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
      FUN_00efd208(puVar6);
      *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
      goto LAB_00c4cf5c;
    }
  }
  puVar6 = (ushort *)0x0;
LAB_00c4cf5c:
  FUN_00efd2dc(puVar6,puVar4,puVar5,0);
  FUN_00f022a0(param_1,puVar6);
  return;
}




void FUN_00c4cf8c(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  uint uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined4 local_80 [2];
  long local_78;
  
  lVar10 = tpidr_el0;
  local_78 = *(long *)(lVar10 + 0x28);
  FUN_00f11234();
  plVar1 = param_1 + 0x34;
  *param_1 = (long)&PTR_FUN_027fce60;
  FUN_00b1571c(plVar1);
  plVar2 = param_1 + 0xe1;
  FUN_00f0e4a8(plVar2);
  FUN_00f13ca4(param_1 + 0xff);
  plVar3 = param_1 + 0x116;
  FUN_00f0e4a8(plVar3);
  plVar4 = param_1 + 0x134;
  FUN_00f0e4a8(plVar4);
  plVar5 = param_1 + 0x152;
  FUN_00f0d160(plVar5);
  plVar6 = param_1 + 0x178;
  FUN_00f0e4a8(plVar6);
  plVar7 = param_1 + 0x196;
  FUN_00f0e4a8(plVar7);
  plVar8 = param_1 + 0x1b4;
  FUN_00ab6c24(plVar8,0);
  param_1[0x46d] = 0;
  param_1[0x46c] = 0;
  FUN_00c4d3f8(param_1 + 0x46e);
  param_1[0x47d] = 0;
  *(undefined2 *)(param_1 + 0x47e) = 0x100;
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  FUN_00f023ec(plVar1,plVar2,1);
  FUN_00f023ec(plVar1,param_1 + 0xff,1);
  FUN_00f023ec(plVar1,plVar3,1);
  FUN_00f023ec(plVar1,plVar4,1);
  FUN_00f023ec(plVar1,plVar5,1);
  FUN_00f023ec(plVar1,plVar6,1);
  FUN_00f023ec(plVar1,plVar7,1);
  FUN_00f023ec(plVar1,plVar8,1);
  FUN_00f112f0(param_1,1);
  *(uint *)((long)param_1 + 0x224) = *(uint *)((long)param_1 + 0x224) & 0xfffffffb | 0x10;
  FUN_00b12b64(0x3f800000,plVar1,&DAT_01bee7f6);
  FUN_00b128a0(0x3f800000,plVar1,&DAT_0313bb20);
  FUN_00f0e548(plVar2,PTR_s_build___MenuPartsCommon_tga_02be3530,"splash_glass_shadow");
  uVar9 = *(uint *)((long)param_1 + 0x78c);
  *(byte *)(param_1 + 0xfc) =
       (*(byte *)(param_1 + 0xfc) & 0xfe | *(byte *)((long)param_1 + 0x23f1)) ^ 1;
  if ((uVar9 & 0x7f80) != 0x5900) {
    *(uint *)((long)param_1 + 0x78c) = uVar9 & 0xffff8000 | uVar9 & 0x7f | 0x5900;
    FUN_0091ada4(plVar2);
  }
  FUN_00f0e670(plVar2,&DAT_0313bb04,2);
  FUN_00f0e548(plVar3,PTR_s_build___MenuPartsCommon_tga_02be3530,"white_background");
  uVar9 = *(uint *)((long)param_1 + 0x934);
  *(byte *)(param_1 + 0x131) = *(byte *)(param_1 + 0x131) | 1;
  if ((uVar9 & 0x7f80) != 0x3300) {
    *(uint *)((long)param_1 + 0x934) = uVar9 & 0xffff8000 | uVar9 & 0x7f | 0x3300;
    FUN_0091ada4(plVar3);
  }
  FUN_00f0e670(plVar3,&DAT_01bee7f6,2);
  FUN_00f0e548(plVar4,PTR_s_build___MenuPartsCommon_tga_02be3530,"white_background");
  FUN_00f0e670(plVar4,&DAT_0313bb08,2);
  FUN_00f0d92c(plVar5,DAT_0313bb58,&DAT_0313bb14);
  FUN_00f0d9b0(plVar5,1);
  FUN_00f13f68(plVar5,0xf000000258);
  FUN_00f13fc4(plVar5,0xf000000258);
  FUN_00f0e548(plVar6,PTR_s_build___MenuHomepagePartsCommon__02be35e8,"white_checkmark");
  if ((*(float *)(param_1 + 0x181) != 1.8) || (*(float *)((long)param_1 + 0xc0c) != 1.8)) {
    param_1[0x181] = 0x3fe666663fe66666;
    FUN_0091ada4(plVar6);
  }
  *(uint *)((long)param_1 + 0xc44) = *(uint *)((long)param_1 + 0xc44) & 0xfffffffb;
  FUN_00f0e548(plVar7,PTR_s_build___MenuPartsCommon_tga_02be3530,"circle_button_lock");
  if ((*(float *)(param_1 + 0x19f) != 2.0) || (*(float *)((long)param_1 + 0xcfc) != 2.0)) {
    param_1[0x19f] = 0x4000000040000000;
    FUN_0091ada4(plVar7);
  }
  *(uint *)((long)param_1 + 0xd34) = *(uint *)((long)param_1 + 0xd34) & 0xfffffffb;
  uVar11 = FUN_00e6ce7c("MENU_MARKET_CTA_FREE",0);
  FUN_00ab703c(0x42000000,0x42f00000,0x44610000,plVar8,0,uVar11,&DAT_01bee7fa,&DAT_03218ef8,0);
  local_80[0] = 0xff5ac8f4;
  FUN_00ab7598(0x3f800000,plVar8,local_80);
  *(uint *)((long)param_1 + 0xe24) = *(uint *)((long)param_1 + 0xe24) & 0xfffffffb;
  local_80[0] = CONCAT22(local_80[0]._2_2_,0x10);
  FUN_00f14070(param_1,local_80);
  if (*(long *)(lVar10 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

