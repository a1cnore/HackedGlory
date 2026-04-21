// functions/00ab7 — 34 functions
#include "libGameKindred.h"




void FUN_00ab7030(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00ab7038. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x178))();
  return;
}




void FUN_00ab703c(undefined4 param_1,undefined4 param_2,undefined4 param_3,long *param_4,
                 undefined4 param_5,undefined8 param_6,undefined4 *param_7,long *param_8,
                 undefined *param_9)

{
  undefined **ppuVar1;
  undefined4 uVar2;
  ulong uVar3;
  char *pcVar4;
  
  if (param_9 == (undefined *)0x0) {
    uVar3 = FUN_0092ea9c();
    ppuVar1 = &PTR_s_build___Fonts_Brandon_Bold_48_fo_02be9c88;
    if ((uVar3 & 1) == 0) {
      ppuVar1 = &PTR_s_build___Fonts_Brandon_Bold_36_fo_02be9c78;
    }
    param_9 = *ppuVar1;
  }
  FUN_00f0d378(param_4 + 0xe4,param_9);
  switch(param_5) {
  case 0:
    FUN_00f0d75c(param_4 + 0xe4,param_6);
    *(uint *)((long)param_4 + 0x7a4) = *(uint *)((long)param_4 + 0x7a4) | 4;
    *(uint *)((long)param_4 + 0x8d4) = *(uint *)((long)param_4 + 0x8d4) & 0xfffffffb;
    goto LAB_00ab7168;
  case 1:
    pcVar4 = "capsule_button_check";
    break;
  case 2:
    pcVar4 = "capsule_button_x";
    break;
  case 3:
    pcVar4 = "capsule_button_plus";
    break;
  case 4:
    pcVar4 = "capsule_button_star";
    break;
  default:
    goto switchD_00ab70cc_caseD_5;
  case 6:
    pcVar4 = "arrow_right";
  }
  FUN_00f0e578(param_4 + 0x10a,pcVar4);
switchD_00ab70cc_caseD_5:
  *(uint *)((long)param_4 + 0x8d4) = *(uint *)((long)param_4 + 0x8d4) | 4;
  *(uint *)((long)param_4 + 0x7a4) = *(uint *)((long)param_4 + 0x7a4) & 0xfffffffb;
LAB_00ab7168:
  *(undefined4 *)(param_4 + 0x2b1) = 0;
  (**(code **)(*param_4 + 0x180))(param_4);
  FUN_00f0d7fc(param_4 + 0xe4,param_7);
  FUN_00f0e670(param_4 + 0x10a,param_7,2);
  *(undefined4 *)(param_4 + 0x2b0) = param_5;
  FUN_00910394(param_4 + 0x2ab,param_6);
  uVar2 = *param_7;
  *(undefined4 *)((long)param_4 + 0x158c) = param_1;
  *(undefined4 *)(param_4 + 0x2b2) = param_2;
  *(undefined4 *)((long)param_4 + 0x1594) = param_3;
  *(undefined4 *)(param_4 + 0x2ad) = uVar2;
  param_4[0x128] = *param_8;
  *(undefined1 *)(param_4 + 0x2b7) = 1;
                    /* WARNING: Could not recover jumptable at 0x00ab71f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_4 + 0x180))(param_4);
  return;
}




void FUN_00ab71fc(long *param_1,int param_2)

{
  undefined4 uVar1;
  float fVar2;
  
  *(int *)(param_1 + 0x2b1) = param_2;
  if (param_2 == 2) {
    FUN_00f0e578(param_1 + 0x26f,"button_decorative_fill_upgrade");
    FUN_00f10428(param_1 + 0x245,"button_green_top_left",0,0,0,"button_green_top_middle",0,0,0,
                 "button_green_middle_left",0,0,0,0);
    uVar1 = DAT_03133fdc;
LAB_00ab7378:
    *(undefined4 *)((long)param_1 + 0x15ac) = 0x3f800000;
    *(undefined4 *)((long)param_1 + 0x157c) = uVar1;
    FUN_00b13cb4(0x3f800000,param_1 + 0x129,(long)param_1 + 0x157c);
  }
  else {
    if (param_2 == 1) {
      FUN_00f0e578(param_1 + 0x26f,"button_decorative_fill_purchase");
      FUN_00f0ff74(param_1 + 0x245,"button_lively_top_left",0,0,0,"button_lively_top_middle",0,0,0,
                   "button_lively_top_left",1,0,0,"button_lively_middle_left",0,0,0,0,0,0,0,
                   "button_lively_middle_left",1,0,0,"button_lively_bottom_left",0,0,0,
                   "button_lively_bottom_middle",0,0,0,"button_lively_bottom_left",1,0,0);
      uVar1 = DAT_03133fd8;
      goto LAB_00ab7378;
    }
    if (param_2 == 0) goto LAB_00ab73bc;
  }
  fVar2 = *(float *)(param_1 + 0x2b6);
  if (*(float *)(param_1 + 0x2b6) <= 50.0) {
    fVar2 = 50.0;
  }
  *(float *)(param_1 + 0x2b6) = fVar2;
  (**(code **)(*param_1 + 0x180))(param_1);
LAB_00ab73bc:
                    /* WARNING: Could not recover jumptable at 0x00ab73d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x180))(param_1);
  return;
}




void FUN_00ab73d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00ab703c(param_1,5,&DAT_03210450,param_3,&DAT_03218ef8,0);
  FUN_00f0e578(param_1 + 0x850,param_2);
  return;
}




undefined8 FUN_00ab7420(undefined1 param_1 [16],float param_2,long *param_3)

{
  float fVar1;
  
  fVar1 = (float)(**(code **)(*param_3 + 0x48))();
  return CONCAT44((int)param_2,(int)fVar1);
}




undefined8 FUN_00ab7448(undefined1 param_1 [16],float param_2,long *param_3)

{
  float fVar1;
  
  fVar1 = (float)(**(code **)(*param_3 + 0x48))();
  return CONCAT44((int)param_2,(int)fVar1);
}




undefined8 FUN_00ab7470(undefined1 param_1 [16],float param_2,long *param_3)

{
  float fVar1;
  
  fVar1 = (float)(**(code **)(*param_3 + 0x48))();
  return CONCAT44((int)param_2,(int)fVar1);
}




void FUN_00ab7498(long *param_1)

{
  FUN_00f0d75c(param_1 + 0xe4);
                    /* WARNING: Could not recover jumptable at 0x00ab74c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x180))(param_1);
  return;
}




void FUN_00ab74c8(long *param_1,undefined4 param_2)

{
  *(undefined4 *)((long)param_1 + 0x1584) = param_2;
  FUN_00f0dac8(param_1 + 0xe4);
                    /* WARNING: Could not recover jumptable at 0x00ab74f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x180))(param_1);
  return;
}




void FUN_00ab74fc(undefined4 param_1,undefined4 param_2,long *param_3)

{
  *(undefined4 *)(param_3 + 0x128) = param_1;
  *(undefined4 *)((long)param_3 + 0x944) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00ab750c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_3 + 0x180))();
  return;
}




void FUN_00ab7510(undefined4 param_1,long *param_2)

{
  *(undefined4 *)((long)param_2 + 0x15b4) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00ab751c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x180))();
  return;
}




void FUN_00ab7520(long param_1,uint param_2)

{
  *(uint *)(param_1 + 0x4fc) =
       *(uint *)(param_1 + 0x4fc) & 0xfffffff8 |
       *(uint *)(param_1 + 0x4fc) & 3 | (~param_2 & 1) << 2;
  return;
}




void FUN_00ab7538(undefined4 param_1,long *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  uVar1 = *param_3;
  *(undefined4 *)(param_2 + 0x2b5) = param_1;
  *(undefined4 *)(param_2 + 0x2af) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00ab754c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x168))();
  return;
}




void FUN_00ab7550(undefined4 param_1,long param_2,undefined4 *param_3)

{
  *(undefined4 *)(param_2 + 0x157c) = *param_3;
  *(undefined4 *)(param_2 + 0x15ac) = param_1;
  FUN_00b13cb4(param_2 + 0x948,param_2 + 0x157c);
  return;
}




void FUN_00ab7570(undefined4 param_1,long *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  uVar1 = *param_3;
  *(undefined4 *)(param_2 + 0x2b3) = param_1;
  *(undefined4 *)(param_2 + 0x2ad) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00ab7584. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x168))();
  return;
}




void FUN_00ab7588(undefined4 param_1,long param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  uVar1 = *param_3;
  *(undefined4 *)(param_2 + 0x159c) = param_1;
  *(undefined4 *)(param_2 + 0x156c) = uVar1;
  return;
}




void FUN_00ab7598(undefined4 param_1,long *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  uVar1 = *param_3;
  *(undefined4 *)(param_2 + 0x2b4) = param_1;
  *(undefined4 *)(param_2 + 0x2ae) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00ab75ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x168))();
  return;
}




void FUN_00ab75b0(undefined4 param_1,long param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  uVar1 = *param_3;
  *(undefined4 *)(param_2 + 0x15a4) = param_1;
  *(undefined4 *)(param_2 + 0x1574) = uVar1;
  return;
}




void FUN_00ab75c0(undefined4 param_1,long *param_2)

{
  *(undefined4 *)((long)param_2 + 0x158c) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00ab75cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x180))();
  return;
}




void FUN_00ab75d0(undefined4 param_1,undefined4 param_2,undefined4 param_3,long *param_4)

{
  *(undefined4 *)((long)param_4 + 0x158c) = param_1;
  *(undefined4 *)(param_4 + 0x2b2) = param_2;
  *(undefined4 *)((long)param_4 + 0x1594) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00ab75e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_4 + 0x180))();
  return;
}




void FUN_00ab75e8(long *param_1,long param_2)

{
  if (param_2 != 0) {
    FUN_00f0d378(param_1 + 0xe4);
                    /* WARNING: Could not recover jumptable at 0x00ab7618. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x180))(param_1);
    return;
  }
  return;
}




void FUN_00ab7628(undefined4 param_1,long *param_2)

{
  *(undefined4 *)(param_2 + 0x2b6) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00ab7634. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x180))();
  return;
}




void FUN_00ab7638(float param_1,long param_2)

{
  if ((*(float *)(param_2 + 0x14b0) == param_1) && (*(float *)(param_2 + 0x14b4) == param_1)) {
    return;
  }
  *(float *)(param_2 + 0x14b0) = param_1;
  *(float *)(param_2 + 0x14b4) = param_1;
  FUN_0091ada4(param_2 + 0x1468);
  return;
}




void FUN_00ab766c(long param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = param_1 + 0x1468;
  if ((param_2 & 1) == 0) {
    FUN_00f01a4c(lVar1,1);
    return;
  }
  uVar2 = FUN_00f02540(lVar1);
  if ((uVar2 & 1) != 0) {
    return;
  }
  FUN_00f02408(lVar1,param_1 + 0x11a0,1);
  return;
}




void FUN_00ab76d0(float param_1,long *param_2,ulong param_3)

{
  if ((*(float *)(param_2 + 0x57) != param_1) || (*(float *)((long)param_2 + 700) != param_1)) {
    *(float *)(param_2 + 0x57) = param_1;
    *(float *)((long)param_2 + 700) = param_1;
    FUN_0091ada4(param_2 + 0x4e);
  }
  if ((param_3 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00ab7724. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_2 + 0x180))(param_2);
    return;
  }
  return;
}




void FUN_00ab7734(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  ushort uVar6;
  ushort *puVar7;
  
  lVar1 = param_1 + 0x948;
  FUN_00f01980(lVar1);
  uVar5 = *(uint *)(param_1 + 0x9cc) | 4;
  *(uint *)(param_1 + 0x9cc) = uVar5;
  if ((*(float *)(param_1 + 0x990) != 1.2) || (*(float *)(param_1 + 0x994) != 1.2)) {
    *(undefined8 *)(param_1 + 0x990) = 0x3f99999a3f99999a;
    FUN_0091ada4(lVar1);
    uVar5 = *(uint *)(param_1 + 0x9cc);
  }
  if ((uVar5 & 0x7f80) != 0x6600) {
    *(uint *)(param_1 + 0x9cc) = uVar5 & 0xffff8000 | uVar5 & 0x7f | 0x6600;
    FUN_0091ada4(lVar1);
  }
  uVar3 = FUN_00efee28(0,0x3f000000,FUN_0091aa80);
  uVar4 = FUN_00eff63c(0x40000000,0x40000000,0x3f000000,FUN_0091aa80);
  lVar2 = DAT_03210d00;
  uVar6 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar6 == 0xffff) {
    puVar7 = (ushort *)0x0;
  }
  else {
    puVar7 = (ushort *)(DAT_03210d00 + (ulong)uVar6 * 0x40 + 0x10);
    if (uVar6 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar6 = 0xffff;
    }
    else {
      uVar6 = *puVar7;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar6;
    *(int *)(lVar2 + 0x20014) = *(int *)(lVar2 + 0x20014) + 1;
    FUN_00efcd98(puVar7);
    *(int *)(lVar2 + 0x20020) = *(int *)(lVar2 + 0x20020) + 1;
  }
  FUN_00efcea4(puVar7,uVar3,uVar4,0);
  FUN_00f022a0(lVar1,puVar7);
  lVar2 = DAT_03210d00;
  uVar6 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar6 == 0xffff) {
    puVar7 = (ushort *)0x0;
  }
  else {
    puVar7 = (ushort *)(DAT_03210d00 + (ulong)uVar6 * 0x40 + 0x10);
    if (uVar6 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar6 = 0xffff;
    }
    else {
      uVar6 = *puVar7;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar6;
    *(int *)(lVar2 + 0x20014) = *(int *)(lVar2 + 0x20014) + 1;
    FUN_00efc8e8(puVar7);
    *(undefined ***)puVar7 = &PTR_FUN_02825148;
    *(int *)(lVar2 + 0x20020) = *(int *)(lVar2 + 0x20020) + 1;
  }
  FUN_00f022a0(lVar1,puVar7);
  return;
}




void FUN_00ab7960(long param_1)

{
  *(undefined8 *)(param_1 + 0x1590) = 0;
  return;
}




void FUN_00ab796c(long param_1)

{
  uint uVar1;
  uint uVar2;
  
  FUN_00b1326c(*(undefined4 *)(param_1 + 0x15ac),param_1 + 0x270,param_1 + 0x157c);
  FUN_00b132e8(*(undefined4 *)(param_1 + 0x15a4),param_1 + 0x270,param_1 + 0x1574);
  FUN_00f0e670(param_1 + 0x850,param_1 + 0x156c,2);
  if (*(float *)(param_1 + 0x159c) != -1.0) {
    uVar1 = *(uint *)(param_1 + 0x8d4);
    uVar2 = (uint)(*(float *)(param_1 + 0x159c) * 255.0);
    if ((uVar1 >> 7 & 0xff) != uVar2) {
      *(uint *)(param_1 + 0x8d4) = uVar1 & 0xffff8000 | uVar1 & 0x7f | (uVar2 & 0xff) << 7;
      FUN_0091ada4(param_1 + 0x850);
    }
  }
  FUN_00f0d7fc(param_1 + 0x720,param_1 + 0x156c);
  if (*(char *)(param_1 + 0x15ba) != '\0') {
    FUN_00ab7a44(param_1);
    return;
  }
  return;
}




void FUN_00ab7a44(long param_1)

{
  long lVar1;
  long lVar2;
  ushort uVar3;
  ushort *puVar4;
  byte local_60 [16];
  void *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_00ab7734();
  if ((*(float *)(param_1 + 0x1e8) != 0.95) || (*(float *)(param_1 + 0x1ec) != 0.95)) {
    *(undefined8 *)(param_1 + 0x1e8) = 0x3f7333333f733333;
    FUN_0091ada4(param_1 + 0x1a0);
  }
  if ((*(byte *)(param_1 + 0x250) & 1) == 0) {
    if (*(byte *)(param_1 + 0x250) >> 1 == 0) goto LAB_00ab7bc8;
  }
  else if (*(long *)(param_1 + 600) == 0) goto LAB_00ab7bc8;
  FUN_00f01980(param_1);
  lVar2 = DAT_03210d00;
  uVar3 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar3 == 0xffff) {
    puVar4 = (ushort *)0x0;
  }
  else {
    puVar4 = (ushort *)(DAT_03210d00 + 0x10 + (ulong)uVar3 * 0x40);
    if (uVar3 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar3 = 0xffff;
    }
    else {
      uVar3 = *puVar4;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar3;
    *(int *)(lVar2 + 0x20014) = *(int *)(lVar2 + 0x20014) + 1;
    FUN_00efc8e8(puVar4);
    puVar4[8] = 0;
    puVar4[9] = 0;
    puVar4[10] = 0;
    puVar4[0xb] = 0;
    puVar4[0xc] = 0;
    puVar4[0xd] = 0;
    puVar4[0xe] = 0;
    puVar4[0xf] = 0;
    puVar4[0x14] = 0;
    puVar4[0x10] = 0;
    puVar4[0x11] = 0;
    puVar4[0x12] = 0;
    puVar4[0x13] = 0;
    *(undefined ***)puVar4 = &PTR_FUN_027d0db0;
    *(int *)(lVar2 + 0x20020) = *(int *)(lVar2 + 0x20020) + 1;
  }
  if ((*(byte *)(param_1 + 0x250) & 1) == 0) {
    lVar2 = param_1 + 0x251;
  }
  else {
    lVar2 = *(long *)(param_1 + 0x260);
  }
  FUN_008fa54c(local_60,lVar2);
  FUN_00a99c48(puVar4,local_60,*(undefined1 *)(param_1 + 0x15b9),0);
  if ((local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
  FUN_00f022a0(param_1,puVar4);
LAB_00ab7bc8:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ab7bf4(long param_1)

{
  uint uVar1;
  uint uVar2;
  
  FUN_00b1326c(*(undefined4 *)(param_1 + 0x15a8),param_1 + 0x270,param_1 + 0x1578);
  FUN_00b132e8(*(undefined4 *)(param_1 + 0x15a0),param_1 + 0x270,param_1 + 0x1570);
  FUN_00f0e670(param_1 + 0x850,param_1 + 0x1568,2);
  if (*(float *)(param_1 + 0x1598) != -1.0) {
    uVar1 = *(uint *)(param_1 + 0x8d4);
    uVar2 = (uint)(*(float *)(param_1 + 0x1598) * 255.0);
    if ((uVar1 >> 7 & 0xff) != uVar2) {
      *(uint *)(param_1 + 0x8d4) = uVar1 & 0xffff8000 | uVar1 & 0x7f | (uVar2 & 0xff) << 7;
      FUN_0091ada4(param_1 + 0x850);
    }
  }
  FUN_00f0d7fc(param_1 + 0x720,param_1 + 0x1568);
  return;
}




void FUN_00ab7ca8(long *param_1,byte param_2)

{
  *(byte *)((long)param_1 + 0x26c) = *(byte *)((long)param_1 + 0x26c) & 0xfe | param_2 & 1;
                    /* WARNING: Could not recover jumptable at 0x00ab7cbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x180))();
  return;
}




void FUN_00ab7cc0(long param_1)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + 0x15ba) != '\0') {
    uVar1 = FUN_00eff63c(0x3f800000,0x3f800000,0x3e4ccccd,FUN_0091aa80);
    FUN_00f022a0(param_1 + 0x1a0,uVar1);
    return;
  }
  return;
}




void FUN_00ab7d1c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00eff63c(0x3f800000,0x3f800000,0x3e4ccccd,FUN_0091aa80);
  FUN_00f022a0(param_1 + 0x1a0,uVar1);
  return;
}




void FUN_00ab7d60(long *param_1)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  byte bVar4;
  long lVar5;
  long lVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  float fVar10;
  float fVar11;
  undefined4 uVar12;
  undefined8 uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined8 local_70;
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  fVar10 = *(float *)((long)param_1 + 0x15b4);
  lVar6 = param_1[0x2b1];
  if (fVar10 <= 0.0) {
    if (0.0 < *(float *)((long)param_1 + 0x1594)) {
      fVar10 = *(float *)((long)param_1 + 0x1594) -
               (*(float *)((long)param_1 + 0x158c) + *(float *)((long)param_1 + 0x158c));
      goto LAB_00ab7dc4;
    }
  }
  else {
LAB_00ab7dc4:
    FUN_00f0db64(fVar10,0,0x3f800000,param_1 + 0xe4);
  }
  if ((int)param_1[0x2b0] == 0) {
    fVar10 = (float)FUN_00f01c20(param_1 + 0xe4);
  }
  else {
    fVar10 = (float)FUN_00f0eac0(param_1 + 0x10a);
  }
  fVar10 = fVar10 + *(float *)((long)param_1 + 0x158c) + *(float *)((long)param_1 + 0x158c);
  if (*(float *)((long)param_1 + 0x1594) <= fVar10) {
    fVar10 = *(float *)((long)param_1 + 0x1594);
  }
  plVar1 = param_1 + 0x4e;
  fVar11 = *(float *)(param_1 + 0x2b2);
  if (*(float *)(param_1 + 0x2b2) <= fVar10) {
    fVar11 = fVar10;
  }
  fVar10 = (float)FUN_00f10374(param_1 + 0x8f,0);
  fVar10 = fVar10 * *(float *)(param_1 + 0xe3);
  FUN_00f13f08(fVar11 + fVar10 + fVar10,(int)param_1[0x2b6],plVar1);
  uVar13 = FUN_00f13e54(plVar1);
  FUN_00f13e54(plVar1);
  FUN_00f13f08(uVar13,param_1 + 0x129);
  if (*(int *)((long)param_1 + 0x1584) == 0) {
    fVar16 = *(float *)(param_1 + 0x56);
    fVar11 = (float)FUN_00f01c20(plVar1);
    fVar14 = *(float *)(param_1 + 0x128);
    fVar15 = *(float *)(param_1 + 0xec);
    fVar10 = fVar10 + fVar16 + fVar11 * -0.5;
  }
  else {
    if (*(int *)((long)param_1 + 0x1584) != 1) {
      fVar14 = *(float *)((long)param_1 + 0x944);
      if ((*(float *)(param_1 + 0xec) != *(float *)(param_1 + 0x128)) ||
         (*(float *)((long)param_1 + 0x764) != fVar14)) {
        *(float *)(param_1 + 0xec) = *(float *)(param_1 + 0x128);
        *(float *)((long)param_1 + 0x764) = fVar14;
        FUN_0091ada4(param_1 + 0xe4);
      }
      local_70 = 0x3f0000003f000000;
      goto LAB_00ab7f30;
    }
    fVar16 = *(float *)(param_1 + 0x56);
    fVar11 = (float)FUN_00f01c20(plVar1);
    fVar14 = *(float *)(param_1 + 0x128);
    fVar15 = *(float *)(param_1 + 0xec);
    fVar10 = (fVar16 + fVar11 * 0.5) - fVar10;
  }
  fVar14 = fVar14 + fVar10;
  if ((fVar15 != fVar14) || (*(float *)((long)param_1 + 0x764) != *(float *)((long)param_1 + 0x944))
     ) {
    *(float *)(param_1 + 0xec) = fVar14;
    *(float *)((long)param_1 + 0x764) = *(float *)((long)param_1 + 0x944);
    FUN_0091ada4(param_1 + 0xe4);
  }
  local_70 = 0x3f00000000000000;
LAB_00ab7f30:
  (**(code **)(param_1[0xe4] + 0x28))(param_1 + 0xe4,&local_70);
  if ((*(float *)(param_1 + 0x112) != 0.0) || (*(float *)((long)param_1 + 0x894) != 0.0)) {
    param_1[0x112] = 0;
    FUN_0091ada4(param_1 + 0x10a);
  }
  local_70 = 0x3f0000003f000000;
  (**(code **)(param_1[0x10a] + 0x28))(param_1 + 0x10a,&local_70);
  if ((int)param_1[0x2b1] != 0) {
    uVar8 = 0;
    if ((int)param_1[0x2b1] == 1) {
      uVar8 = *(byte *)((long)param_1 + 0x26c) >> 2 & 4;
    }
    plVar2 = param_1 + 0x245;
    *(uint *)((long)param_1 + 0x14ec) = *(uint *)((long)param_1 + 0x14ec) & 0xfffffffb | uVar8;
    fVar10 = (float)FUN_00f10374(plVar2,0);
    fVar15 = fVar14 * 1.2;
    fVar11 = (float)FUN_00f01c20(plVar1);
    FUN_00f10644(fVar10 * 1.2,fVar11 + -50.0,fVar10 * 1.2,fVar15,fVar14 + -40.0,fVar15,plVar2);
    fVar11 = 0.0;
    FUN_00f07940(0,plVar2,8,plVar1,8);
    fVar10 = (float)FUN_00f01c20(plVar1);
    local_70 = CONCAT44(fVar11 + -20.0,fVar10 + -20.0);
    FUN_00f13f18(param_1 + 0x26f,&local_70);
    FUN_00f07940(0,0,param_1 + 0x26f,8,plVar1,8);
    fVar14 = 0.5;
    FUN_00f07b78(0x3f000000,0x3f000000,0,0,0x41600000,0x41400000,param_1 + 0x28d,plVar1);
  }
  uVar12 = DAT_03133fb0;
  if ((*(byte *)((long)param_1 + 0x26c) >> 4 & 1) == 0) {
    *(undefined4 *)(param_1 + 0x2b5) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x2af) = uVar12;
    (**(code **)(*param_1 + 0x168))(param_1);
    uVar12 = DAT_03133fb4;
    *(undefined4 *)((long)param_1 + 0x15ac) = 0x3f800000;
  }
  else {
    *(undefined4 *)(param_1 + 0x2b5) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x2af) = 0xffffffff;
    (**(code **)(*param_1 + 0x168))(param_1);
    uVar12 = 0xffffffff;
    *(undefined4 *)((long)param_1 + 0x15ac) = 0x3f800000;
  }
  *(undefined4 *)((long)param_1 + 0x157c) = uVar12;
  FUN_00b13cb4(0x3f800000,param_1 + 0x129,(long)param_1 + 0x157c);
  bVar7 = (int)lVar6 == 0;
  uVar12 = 0;
  if ((*(byte *)((long)param_1 + 0x26c) & 0x10) != 0) {
    uVar12 = 0x3f800000;
  }
  *(uint *)((long)param_1 + 0x2f4) =
       *(uint *)((long)param_1 + 0x2f4) & 0xfffffff8 |
       *(uint *)((long)param_1 + 0x2f4) & 3 | (uint)bVar7 << 2;
  *(uint *)((long)param_1 + 0x1224) =
       *(uint *)((long)param_1 + 0x1224) & 0xfffffff8 |
       *(uint *)((long)param_1 + 0x1224) & 3 | (uint)!bVar7 << 2;
  FUN_00f0e6bc(uVar12,param_1 + 0x26f);
  uVar12 = 0;
  if ((*(byte *)((long)param_1 + 0x26c) & 0x10) != 0) {
    uVar12 = 0x3f800000;
  }
  FUN_00f10698(uVar12,param_1 + 0x245);
  bVar4 = *(byte *)((long)param_1 + 0x26c);
  uVar3 = *(uint *)((long)param_1 + 0x13fc);
  uVar9 = 0xb2;
  uVar8 = uVar9;
  if ((bVar4 & 1) != 0) {
    uVar8 = 0xff;
  }
  if ((uVar3 >> 7 & 0xff) != uVar8) {
    *(uint *)((long)param_1 + 0x13fc) = uVar3 & 0xffff8000 | uVar3 & 0x7f | uVar8 << 7;
    FUN_0091ada4(param_1 + 0x26f);
    bVar4 = *(byte *)((long)param_1 + 0x26c);
  }
  uVar8 = *(uint *)((long)param_1 + 0x2f4);
  if ((bVar4 & 1) != 0) {
    uVar9 = 0xff;
  }
  if ((uVar8 >> 7 & 0xff) != uVar9) {
    *(uint *)((long)param_1 + 0x2f4) = uVar8 & 0xffff8000 | uVar8 & 0x7f | uVar9 << 7;
    FUN_0091ada4(plVar1);
    bVar4 = *(byte *)((long)param_1 + 0x26c);
  }
  uVar9 = *(uint *)((long)param_1 + 0x7a4);
  uVar8 = 0x99;
  if ((bVar4 & 1) != 0) {
    uVar8 = 0xff;
  }
  if ((uVar9 >> 7 & 0xff) != uVar8) {
    *(uint *)((long)param_1 + 0x7a4) = uVar9 & 0xffff8000 | uVar9 & 0x7f | uVar8 << 7;
    FUN_0091ada4(param_1 + 0xe4);
  }
  uVar12 = FUN_00f01c20(plVar1);
  local_70 = CONCAT44(fVar14,uVar12);
  FUN_00f13f18(param_1,&local_70);
  if (*(long *)(lVar5 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

