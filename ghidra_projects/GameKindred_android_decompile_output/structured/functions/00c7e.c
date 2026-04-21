// functions/00c7e — 27 functions
#include "libGameKindred.h"




void thunk_FUN_00c7e020(long param_1)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + 0x860) != '\0') {
    uVar1 = FUN_00eff108(0x3ba3d70a,param_1 + 0xb8,&DAT_0313c214,0,2);
    FUN_00f02308(param_1 + 0xb8,uVar1,0);
    return;
  }
  return;
}




void thunk_FUN_00c7e074(long param_1)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + 0x860) != '\0') {
    uVar1 = FUN_00eff108(0x3ba3d70a,param_1 + 0xb8,&DAT_0313c210,0,2);
    FUN_00f02308(param_1 + 0xb8,uVar1,0);
    return;
  }
  return;
}




void FUN_00c7e020(long param_1)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + 0x860) != '\0') {
    uVar1 = FUN_00eff108(0x3ba3d70a,param_1 + 0xb8,&DAT_0313c214,0,2);
    FUN_00f02308(param_1 + 0xb8,uVar1,0);
    return;
  }
  return;
}




void FUN_00c7e074(long param_1)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + 0x860) != '\0') {
    uVar1 = FUN_00eff108(0x3ba3d70a,param_1 + 0xb8,&DAT_0313c210,0,2);
    FUN_00f02308(param_1 + 0xb8,uVar1,0);
    return;
  }
  return;
}




void FUN_00c7e0c8(long param_1,int *param_2)

{
  long lVar1;
  long lVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  bool bVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  
  if (*(int *)(param_1 + 0x840) != *param_2) {
    return;
  }
  uVar6 = FUN_009f2588();
  lVar7 = FUN_009f25a4(uVar6,*(undefined4 *)(param_1 + 0x840));
  bVar5 = *(char *)(param_1 + 0x862) != '\0';
  lVar8 = 0x30;
  lVar1 = 0x2c;
  if (bVar5) {
    lVar1 = 0x20;
    lVar8 = 0x24;
  }
  lVar2 = 0x34;
  if (bVar5) {
    lVar2 = 0x28;
  }
  uVar3 = *(undefined4 *)(lVar7 + lVar8);
  uVar4 = *(undefined1 *)(lVar7 + lVar2);
  *(undefined4 *)(param_1 + 0x844) = *(undefined4 *)(lVar7 + lVar1);
  *(undefined4 *)(param_1 + 0x848) = uVar3;
  *(undefined1 *)(param_1 + 0x84c) = uVar4;
  FUN_00c7db54(param_1);
  return;
}




void FUN_00c7e154(undefined8 *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  
  FUN_00f13ca4();
  *param_1 = &PTR_FUN_02803320;
  FUN_00f13ca4(param_1 + 0x17);
  FUN_00f0d160(param_1 + 0x2e);
  FUN_00f0d160(param_1 + 0x54);
  FUN_00f13ca4(param_1 + 0x7a);
  FUN_00c7d1e0(param_1 + 0x91);
  FUN_00c7d1e0(param_1 + 0x19e);
  FUN_00c93600(param_1 + 0x2ab,0);
  *(undefined4 *)(param_1 + 0x3f4) = *param_2;
  uVar1 = *(undefined8 *)(param_2 + 2);
  param_1[0x3f6] = *(undefined8 *)(param_2 + 4);
  param_1[0x3f5] = uVar1;
  param_1[0x3f7] = *(undefined8 *)(param_2 + 6);
  param_1[0x3f8] = *(undefined8 *)(param_2 + 8);
  *(undefined1 *)(param_1 + 0x3f9) = *(undefined1 *)(param_2 + 10);
  *(undefined8 *)((long)param_1 + 0x1fcc) = *(undefined8 *)(param_2 + 0xb);
  *(undefined1 *)((long)param_1 + 0x1fd4) = *(undefined1 *)(param_2 + 0xd);
  FUN_00c7e214(param_1);
  return;
}




void FUN_00c7e214(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  int iVar6;
  undefined8 uVar7;
  code *local_98;
  long *plStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  plVar1 = param_1 + 0x17;
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  plVar2 = param_1 + 0x2e;
  FUN_00f023ec(plVar1,plVar2,1);
  plVar3 = param_1 + 0x54;
  FUN_00f023ec(plVar1,plVar3,1);
  plVar1 = param_1 + 0x7a;
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  FUN_00f023ec(plVar1,param_1 + 0x91,1);
  FUN_00f023ec(plVar1,param_1 + 0x19e,1);
  plVar4 = param_1 + 0x2ab;
  FUN_00f023ec(plVar1,plVar4,1);
  FUN_00f0d92c(plVar2,PTR_s_build___Fonts_Brandon_Bold_60_fo_02be9c90,&DAT_01bee7fa);
  uVar7 = FUN_00e6ce7c(param_1[0x3f6],0);
  FUN_00f0d75c(plVar2,uVar7);
  FUN_00f0d92c(plVar3,PTR_s_build___Fonts_Brandon_Regular_40_02be9c48,&DAT_01bee7fa);
  FUN_00f0d9b0(plVar3,1);
  uVar7 = FUN_00e6ce7c(param_1[0x3f7],0);
  FUN_00f0d75c(plVar3,uVar7);
  *(int *)(param_1 + 0x199) = (int)param_1[0x3f4];
  *(long *)((long)param_1 + 0xccc) = param_1[0x3f8];
  *(char *)((long)param_1 + 0xcd4) = (char)param_1[0x3f9];
  *(undefined1 *)((long)param_1 + 0xcea) = 1;
  FUN_00c7db54(param_1 + 0x91);
  *(undefined1 *)(param_1 + 0x19d) = 1;
  *(uint *)((long)param_1 + 0x50c) = *(uint *)((long)param_1 + 0x50c) | 0x10;
  *(int *)(param_1 + 0x2a6) = (int)param_1[0x3f4];
  *(undefined8 *)((long)param_1 + 0x1534) = *(undefined8 *)((long)param_1 + 0x1fcc);
  *(undefined1 *)((long)param_1 + 0x153c) = *(undefined1 *)((long)param_1 + 0x1fd4);
  *(undefined1 *)((long)param_1 + 0x1552) = 0;
  FUN_00c7db54(param_1 + 0x19e);
  *(undefined1 *)(param_1 + 0x2aa) = 1;
  *(uint *)((long)param_1 + 0xd74) = *(uint *)((long)param_1 + 0xd74) | 0x10;
  FUN_00c93864(plVar4,PTR_s_build___Fonts_Brandon_Regular_40_02be9c48);
  FUN_00c938a4(plVar4,&DAT_01bee7fa);
  local_70 = DAT_03210c64;
  local_98 = FUN_00c7e858;
  local_80 = 0;
  uStack_78 = 0;
  local_88 = 0;
  plStack_90 = param_1;
  FUN_009693a0(param_1 + 0x2ac,&local_98);
  FUN_00c9279c(plVar4,PTR_s_build___MenuPartsCommon_tga_02be3530,"white_background");
  FUN_00c927dc(plVar4,&DAT_0313c210);
  FUN_00c928a0(0x42480000,0x41400000,plVar4);
  uVar7 = FUN_00e6ce7c("KEYBINDING_RESET_TO_DEFAULT",0);
  FUN_00c938d4(plVar4,uVar7);
  iVar6 = strcmp((char *)param_1[0x3f7],"");
  if (iVar6 == 0) {
    *(uint *)((long)param_1 + 0x324) = *(uint *)((long)param_1 + 0x324) & 0xfffffffb;
  }
  (**(code **)(*param_1 + 0x90))(param_1);
  if (*(long *)(lVar5 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c7e4ec(undefined8 param_1,float param_2,long param_3)

{
  float fVar1;
  float fVar2;
  
  FUN_00f0d548(param_3 + 0x170);
  fVar1 = param_2;
  FUN_00f0d548(param_3 + 0x2a0);
  fVar2 = param_2 + fVar1;
  if (param_2 + fVar1 <= 150.0) {
    fVar2 = 150.0;
  }
  FUN_00f13f08(param_1,fVar2,param_3);
  return;
}




void FUN_00c7e540(undefined1 param_1 [16],undefined4 param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  int iVar7;
  long *plVar8;
  undefined8 uVar9;
  long *plVar10;
  undefined8 uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined4 local_70;
  undefined4 uStack_6c;
  long local_68;
  
  lVar6 = tpidr_el0;
  local_68 = *(long *)(lVar6 + 0x28);
  FUN_00f13db4();
  plVar1 = param_3 + 0x19e;
  plVar5 = param_3 + 0x2ab;
  local_70 = FUN_00f13e54(plVar1);
  uStack_6c = param_2;
  FUN_00f13f18(plVar5,&local_70);
  plVar2 = param_3 + 0x91;
  fVar12 = (float)FUN_00f13e54(plVar2);
  fVar13 = (float)FUN_00f13e54(plVar1);
  fVar14 = (float)FUN_00f13e54(plVar5);
  plVar3 = param_3 + 0x7a;
  (**(code **)(*param_3 + 0x48))(param_3);
  FUN_00f13f08(fVar14 + fVar12 + 20.0 + fVar13 + 20.0,plVar3);
  fVar12 = (float)(**(code **)(*param_3 + 0x48))(param_3);
  fVar13 = (float)FUN_00f13e54(plVar3);
  fVar12 = (fVar12 - fVar13) + -50.0;
  plVar10 = param_3 + 0x17;
  (**(code **)(*param_3 + 0x48))(param_3);
  FUN_00f13f08(fVar12,plVar10);
  FUN_00f0dad0(fVar12,param_3 + 0x54,1);
  FUN_00f07b18(0,plVar10,5,param_3,5);
  FUN_00f07b18(0,plVar3,5,param_3,5);
  FUN_00f07b18(0,plVar10,3,param_3,3);
  FUN_00f07b18(0x42480000,plVar3,3,plVar10,1);
  iVar7 = strcmp((char *)param_3[0x3f7],"");
  plVar4 = param_3 + 0x2e;
  if (iVar7 == 0) {
    FUN_00f07b18(0,plVar4,3,plVar10,3);
    uVar9 = 5;
    uVar11 = 5;
    plVar8 = plVar4;
  }
  else {
    FUN_00f07940(0,0,plVar4,0,plVar10,0);
    uVar11 = 2;
    uVar9 = 0;
    plVar8 = param_3 + 0x54;
    plVar10 = plVar4;
  }
  FUN_00f07b18(0,plVar8,uVar9,plVar10,uVar11);
  FUN_00f07b18(0,plVar2,5,plVar3,5);
  FUN_00f07b18(0,plVar1,5,plVar3,5);
  FUN_00f07b18(0,plVar5,5,plVar3,5);
  FUN_00f07b18(0,plVar2,3,plVar3,3);
  FUN_00f07b18(0x41a00000,plVar1,3,plVar2,1);
  FUN_00f07b18(0x41a00000,plVar5,3,plVar1,1);
  if (*(long *)(lVar6 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c7e7f0(long param_1)

{
  long lVar1;
  undefined1 auStack_48 [32];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00f048e0(auStack_48,DAT_0313c200,param_1 + 0x488);
  FUN_00f04760(param_1,auStack_48,1);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c7e858(long param_1)

{
  long lVar1;
  undefined1 auStack_48 [32];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00f048e0(auStack_48,DAT_0313c200,param_1 + 0x488);
  FUN_00f04760(param_1,auStack_48,1);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c7e8c0(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  code *local_68;
  long *plStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined4 local_40;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  FUN_00f13ca4();
  plVar1 = param_1 + 0x1b;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  *param_1 = (long)&PTR_FUN_02803468;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  FUN_00f0d160(plVar1);
  plVar2 = param_1 + 0x41;
  FUN_00ed66ec(plVar2);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  FUN_00f0d92c(plVar1,PTR_s_build___Fonts_Brandon_Bold_60_fo_02be9c90,&DAT_01bee7fa);
  uVar4 = FUN_00e6ce7c("KEYBIND_BLURB",0);
  FUN_00f0d75c(plVar1,uVar4);
  local_68 = (code *)CONCAT71(local_68._1_7_,9);
  FUN_00ed5ab0(plVar2,&local_68);
  FUN_00ed5b20(plVar2,PTR_s_build___MenuPartsCommon_tga_02be3530,1);
  plVar1 = param_1 + 1;
  local_40 = DAT_0313c1f4;
  local_68 = FUN_00c7ea88;
  local_50 = 0;
  uStack_48 = 0;
  local_58 = 0;
  plStack_60 = param_1;
  FUN_009693a0(plVar1,&local_68);
  local_40 = DAT_0313c1f8;
  local_68 = FUN_00c7ea90;
  local_50 = 0;
  uStack_48 = 0;
  local_58 = 0;
  plStack_60 = param_1;
  FUN_009693a0(plVar1,&local_68);
  local_40 = DAT_0313c1fc;
  local_68 = FUN_00c7ea98;
  local_50 = 0;
  uStack_48 = 0;
  local_58 = 0;
  plStack_60 = param_1;
  FUN_009693a0(plVar1,&local_68);
  local_40 = DAT_0313c200;
  local_68 = FUN_00c7eaa0;
  local_50 = 0;
  uStack_48 = 0;
  local_58 = 0;
  plStack_60 = param_1;
  FUN_009693a0(plVar1,&local_68);
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c7ea88(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_00c7eeb8(param_1,param_4);
  return;
}




void FUN_00c7ea90(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_00c7ef1c(param_1,param_4);
  return;
}




void FUN_00c7ea98(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_00c7eff0(param_1,param_4);
  return;
}




void FUN_00c7eaa0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_00c7ef7c(param_1,param_4);
  return;
}




void FUN_00c7eaa8(undefined8 *param_1)

{
  long *plVar1;
  uint uVar2;
  undefined8 *puVar3;
  uint *puVar4;
  long lVar5;
  ulong uVar6;
  
  *param_1 = &PTR_FUN_02803468;
  param_1[0x1a] = 0;
  puVar4 = (uint *)(param_1 + 0x18);
  uVar2 = *puVar4;
  if (uVar2 != 0) {
    lVar5 = 0;
    uVar6 = 0;
    do {
      plVar1 = *(long **)(param_1[0x19] + lVar5);
      if (plVar1 == (long *)0x0) {
        puVar3 = (undefined8 *)(param_1[0x19] + uVar6 * 8);
      }
      else {
        (**(code **)(*plVar1 + 8))();
        uVar2 = *(uint *)(param_1 + 0x18);
        puVar3 = (undefined8 *)(param_1[0x19] + lVar5);
      }
      uVar6 = uVar6 + 1;
      lVar5 = lVar5 + 8;
      *puVar3 = 0;
    } while (uVar6 < uVar2);
  }
  if (param_1[0x19] != 0) {
    *puVar4 = 0;
  }
  thunk_FUN_00ed5534(param_1 + 0x41);
  FUN_00f0d3a4(param_1 + 0x1b);
  if ((void *)param_1[0x19] != (void *)0x0) {
    operator_delete__((void *)param_1[0x19]);
    puVar4[0] = 0;
    puVar4[1] = 0;
    param_1[0x19] = 0;
  }
  FUN_00f13d08(param_1);
  return;
}




void FUN_00c7eb64(void *param_1)

{
  FUN_00c7eaa8();
  operator_delete(param_1);
  return;
}




void FUN_00c7eb88(undefined8 param_1,float param_2,long *param_3)

{
  float fVar1;
  float fVar2;
  
  fVar2 = param_2;
  FUN_00f0d548(param_3 + 0x1b);
  fVar1 = fVar2;
  FUN_00ed5a98(param_3 + 0x41);
  fVar2 = fVar2 + fVar1 + 100.0;
  FUN_00f13f08(param_1,fVar2,param_3);
  FUN_00f0d548(param_3 + 0x1b);
  fVar1 = (float)(**(code **)(*param_3 + 0x48))(param_3);
  FUN_00f13f08(fVar1 + -100.0,param_2 - (fVar2 + 100.0),param_3 + 0x41);
                    /* WARNING: Could not recover jumptable at 0x00c7ec3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_3 + 0x90))(param_3);
  return;
}




void FUN_00c7ec40(long param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  long *plVar6;
  int iVar7;
  undefined8 uVar8;
  
  FUN_00f13db4();
  lVar3 = param_1 + 0xd8;
  FUN_00f07b18(0,lVar3,4,param_1,4);
  lVar1 = param_1 + 0x208;
  FUN_00f07b18(0,lVar1,4,param_1,4);
  FUN_00f07b18(0x42480000,lVar3,0,param_1,0);
  FUN_00f07b18(0x42480000,lVar1,0,lVar3,2);
  lVar3 = FUN_00ed5aa8(lVar1);
  if (*(long **)(lVar3 + 0x28) != (long *)0x0) {
    iVar7 = 0;
    plVar2 = *(long **)(lVar3 + 0x28);
    plVar4 = (long *)0x0;
    do {
      plVar6 = plVar2;
      uVar8 = FUN_00f13e54(lVar1);
      (**(code **)(*plVar6 + 0x48))(plVar6);
      FUN_00f13f08(uVar8,plVar6);
      if (iVar7 == 0) {
        plVar4 = (long *)plVar6[4];
        uVar8 = 0;
        uVar5 = 0;
      }
      else {
        uVar5 = 3;
        uVar8 = 0x41a00000;
      }
      FUN_00f07940(0,uVar8,plVar6,0,plVar4,uVar5);
      iVar7 = iVar7 + -1;
      plVar2 = (long *)plVar6[6];
      plVar4 = plVar6;
    } while ((long *)plVar6[6] != (long *)0x0);
  }
  return;
}




void FUN_00c7ed74(long param_1,undefined4 *param_2)

{
  long lVar1;
  void *pvVar2;
  void *local_78;
  undefined4 local_70 [2];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined1 local_48;
  undefined8 local_44;
  undefined1 local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  pvVar2 = operator_new(0x1fd8);
  local_70[0] = *param_2;
  uStack_60 = *(undefined8 *)(param_2 + 4);
  local_68 = *(undefined8 *)(param_2 + 2);
  local_58 = *(undefined8 *)(param_2 + 6);
  local_50 = *(undefined8 *)(param_2 + 8);
  local_48 = *(undefined1 *)(param_2 + 10);
  local_44 = *(undefined8 *)(param_2 + 0xb);
  local_3c = *(undefined1 *)(param_2 + 0xd);
  FUN_00c7e154(pvVar2,local_70);
  local_78 = pvVar2;
  FUN_00ed5664(param_1 + 0x208,pvVar2,1);
  FUN_00c7ee30(param_1 + 0xc0,&local_78);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c7ee30(uint *param_1,undefined8 *param_2)

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
    FUN_00c7f438(param_1,uVar1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




void FUN_00c7eeb8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = FUN_00f04924(param_2);
  lVar2 = *(long *)(param_1 + 0xd0);
  if (lVar2 != 0) {
    *(undefined1 *)(lVar2 + 0x861) = 0;
    *(undefined1 *)(lVar2 + 0x858) = 0;
    *(undefined8 *)(lVar2 + 0x850) = 0x300000069;
    FUN_00c7ded0(lVar2);
    *(undefined4 *)(lVar2 + 0x85c) = 0;
    FUN_00c7db54(lVar2);
  }
  *(undefined8 *)(param_1 + 0xd0) = uVar1;
  return;
}




void FUN_00c7ef1c(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = FUN_00f04924(param_2);
  FUN_00c7dd44(*(undefined8 *)(param_1 + 0xd0),0,0);
  *(undefined8 *)(param_1 + 0xd0) = 0;
                    /* WARNING: Could not recover jumptable at 0x00c7ef78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)**(undefined8 **)(param_1 + 0xb8))
            (*(undefined8 **)(param_1 + 0xb8),*(undefined4 *)(lVar1 + 0x840),
             *(undefined1 *)(lVar1 + 0x862),*(undefined4 *)(lVar1 + 0x844),
             *(undefined4 *)(lVar1 + 0x848),*(undefined1 *)(lVar1 + 0x84c));
  return;
}




void FUN_00c7ef7c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = FUN_00f04924(param_2);
  lVar2 = *(long *)(param_1 + 0xd0);
  if (lVar2 != 0) {
    *(undefined1 *)(lVar2 + 0x861) = 0;
    *(undefined1 *)(lVar2 + 0x858) = 0;
    *(undefined8 *)(lVar2 + 0x850) = 0x300000069;
    FUN_00c7ded0(lVar2);
    *(undefined4 *)(lVar2 + 0x85c) = 0;
    FUN_00c7db54(lVar2);
    *(undefined8 *)(param_1 + 0xd0) = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00c7efec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0xb8) + 0x10))
            (*(long **)(param_1 + 0xb8),*(undefined4 *)(lVar1 + 0x840));
  return;
}




void FUN_00c7eff0(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = FUN_00f04924(param_2);
  lVar2 = *(long *)(param_1 + 0xd0);
  if (lVar2 != 0) {
    *(undefined1 *)(lVar2 + 0x861) = 0;
    *(undefined1 *)(lVar2 + 0x858) = 0;
    *(undefined8 *)(lVar2 + 0x850) = 0x300000069;
    FUN_00c7ded0(lVar2);
    *(undefined4 *)(lVar2 + 0x85c) = 0;
    FUN_00c7db54(lVar2);
    *(undefined8 *)(param_1 + 0xd0) = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00c7f064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0xb8) + 8))
            (*(long **)(param_1 + 0xb8),*(undefined4 *)(lVar1 + 0x840),
             *(undefined1 *)(lVar1 + 0x862));
  return;
}




void thunk_FUN_00c7e0c8(long param_1,int *param_2)

{
  long lVar1;
  long lVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  bool bVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  
  if (*(int *)(param_1 + 0x840) != *param_2) {
    return;
  }
  uVar6 = FUN_009f2588();
  lVar7 = FUN_009f25a4(uVar6,*(undefined4 *)(param_1 + 0x840));
  bVar5 = *(char *)(param_1 + 0x862) != '\0';
  lVar8 = 0x30;
  lVar1 = 0x2c;
  if (bVar5) {
    lVar1 = 0x20;
    lVar8 = 0x24;
  }
  lVar2 = 0x34;
  if (bVar5) {
    lVar2 = 0x28;
  }
  uVar3 = *(undefined4 *)(lVar7 + lVar8);
  uVar4 = *(undefined1 *)(lVar7 + lVar2);
  *(undefined4 *)(param_1 + 0x844) = *(undefined4 *)(lVar7 + lVar1);
  *(undefined4 *)(param_1 + 0x848) = uVar3;
  *(undefined1 *)(param_1 + 0x84c) = uVar4;
  FUN_00c7db54(param_1);
  return;
}

