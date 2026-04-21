// functions/0091a — 57 functions
#include "libGameKindred.h"




void FUN_0091a034(long param_1)

{
  if (*(long **)(param_1 + 0x7080) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x7080) + 8))();
  }
  *(undefined8 *)(param_1 + 0x7080) = 0;
  return;
}




void FUN_0091a068(long param_1)

{
  ulong uVar1;
  
  *(undefined1 *)(param_1 + 0x7141) = 0;
  FUN_009213a0();
  if (*(long *)(param_1 + 0x7078) != 0) {
    FUN_009ba500();
  }
  uVar1 = FUN_00ec5ce8();
  if ((uVar1 & 1) != 0) {
    FUN_00ec5d04();
  }
  FUN_009e4b44();
  FUN_008fa0ec();
  FUN_008ff928();
  FUN_008ff8e8();
  uVar1 = FUN_00942694();
  if (((uVar1 & 1) != 0) || (uVar1 = FUN_009426a8(), (uVar1 & 1) != 0)) {
    FUN_009426bc();
  }
  FUN_0094800c();
  thunk_FUN_00e7f940();
  FUN_009426d0();
  FUN_009437b0();
  FUN_00ceb9e4();
  FUN_009305f0();
  FUN_00ec557c();
  return;
}




void FUN_0091a0e4(long param_1,byte param_2)

{
  *(byte *)(param_1 + 0x7141) = param_2 & 1;
  return;
}




void FUN_0091a0f4(long param_1)

{
  void *pvVar1;
  long lVar2;
  ulong uVar3;
  byte local_68 [16];
  void *local_58;
  undefined8 *local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  FUN_00ceb9e4();
  FUN_00948018();
  local_50 = &local_48;
  local_48 = 0;
  uStack_40 = 0;
  FUN_009198a4(&local_50);
  FUN_00ec54a8(&local_50,0x73fbf);
  FUN_009305a8();
  FUN_0092dba4();
  FUN_0092ec2c(local_68);
  pvVar1 = (void *)((ulong)local_68 | 1);
  if ((local_68[0] & 1) != 0) {
    pvVar1 = local_58;
  }
  FUN_00e7d748(pvVar1);
  if ((local_68[0] & 1) != 0) {
    operator_delete(local_58);
  }
  FUN_00943294(3000);
  FUN_008ffaf4();
  FUN_008fa0f0();
  FUN_009e4b70();
  uVar3 = FUN_00ec5ce8();
  if ((uVar3 & 1) != 0) {
    FUN_00ec5d04();
  }
  uVar3 = FUN_009bbf9c();
  if ((uVar3 & 1) != 0) {
    FUN_009bbfb0();
    uVar3 = FUN_009bd694();
    if ((uVar3 & 1) != 0) {
      FUN_00919c84(param_1,0);
    }
  }
  if (*(long *)(param_1 + 0x7078) != 0) {
    FUN_009ba428();
  }
  FUN_009213a0();
  FUN_00910328(&local_50,local_48);
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_0091a208(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x713c) = param_2;
  return;
}




bool FUN_0091a214(long param_1)

{
  return *(int *)(param_1 + 0x713c) != 0;
}




void FUN_0091a228(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  
  FUN_00930628();
  thunk_FUN_00e7f934();
  FUN_009115d8(param_1);
  FUN_00942708();
  if (*(int *)(param_3 + 0x713c) == 1) {
    FUN_0091a2fc(DAT_02c09218,0);
  }
  *(int *)(param_3 + 0x713c) = 0;
  FUN_0094813c();
  uVar1 = FUN_00e80f58();
  if ((uVar1 & 1) != 0) {
    lVar2 = FUN_00e829e0();
    if (*(uint *)(lVar2 + 0xa0) < 2) {
      FUN_00e7d1cc();
    }
    else {
      FUN_00e7d1e0(*(undefined8 *)(param_3 + 0x358));
    }
  }
  uVar1 = FUN_0092e920();
  if ((uVar1 & 1) != 0) {
    FUN_00931c28();
  }
  FUN_0090d6c4();
  FUN_0092daa0(param_2);
  thunk_FUN_00941d68(param_3 + 0x1848);
  FUN_0091a34c(param_3);
  FUN_0091a394(param_3 + 0x1d8);
  FUN_0095b6d8(param_3 + 0x19d8);
  FUN_00915eb4();
  return;
}




void FUN_0091a2fc(undefined8 param_1,undefined4 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  
  FUN_0091a468(param_1,0);
  FUN_009426bc();
  uVar1 = FUN_009bbf9c();
  if ((uVar1 & 1) != 0) {
    uVar2 = FUN_009bbfb0();
    FUN_009bd794(uVar2,0);
  }
  FUN_00919c84(param_1,0);
  FUN_00948128(param_2);
  return;
}




void FUN_0091a34c(int *param_1)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar1 = *(ushort *)(param_1 + 0x74) & 0x1f;
  if (uVar1 == 0x1f) {
    return;
  }
  if (*param_1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 2);
  }
                    /* WARNING: Could not recover jumptable at 0x0091a390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + (ulong)uVar1 * 0x16 + 0x12))
            (*(undefined8 *)(param_1 + 0x72),*(undefined8 *)(param_1 + (ulong)uVar1 * 0x16 + 6),
             *(undefined8 *)(param_1 + (ulong)uVar1 * 0x16 + 8),uVar2);
  return;
}




void FUN_0091a394(int *param_1)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar1 = *(ushort *)(param_1 + 0x5e) & 0x1f;
  if (uVar1 == 0x1f) {
    return;
  }
  if (*param_1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 2);
  }
                    /* WARNING: Could not recover jumptable at 0x0091a3d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + (ulong)uVar1 * 0x16 + 0x12))
            (*(undefined8 *)(param_1 + 0x5c),*(undefined8 *)(param_1 + (ulong)uVar1 * 0x16 + 6),
             *(undefined8 *)(param_1 + (ulong)uVar1 * 0x16 + 8),uVar2);
  return;
}




void FUN_0091a3dc(long param_1,ulong param_2)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  FUN_00919db0(param_1 + 0x1d8,2);
  uVar1 = *(ushort *)(param_1 + 0x1d0) & 0x1f;
  if ((uVar1 != 0x1f) && (*(int *)(param_1 + (ulong)uVar1 * 0x58 + 0x10) == 0)) {
    if ((param_2 & 1) == 0) {
      uVar3 = 2;
    }
    else {
      uVar3 = 1;
    }
    FUN_00919c84(param_1,uVar3);
    return;
  }
  uVar2 = FUN_009bbf9c();
  if ((uVar2 & 1) != 0) {
    uVar3 = FUN_009bbfb0();
    FUN_009bd794(uVar3,1);
    return;
  }
  return;
}




void FUN_0091a468(long param_1,uint param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_009bbf9c();
  if ((uVar1 & 1) != 0) {
    FUN_00ceace8();
    uVar1 = FUN_00ceae78();
    if ((uVar1 & 1) != 0) {
      return;
    }
  }
  FUN_019886e4(param_2 & 1);
  uVar1 = FUN_009bbf9c();
  if ((uVar1 & 1) != 0) {
    FUN_00ceace8();
    uVar1 = FUN_00ceae88();
    if ((uVar1 & 1) == 0) {
      FUN_00931838(param_1 + 0x360,param_2 & 1);
      return;
    }
  }
  return;
}




void FUN_0091a4cc(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  FUN_0091a468(param_1,0);
  uVar1 = FUN_009bbf9c();
  if ((uVar1 & 1) != 0) {
    uVar2 = FUN_009bbfb0();
    FUN_009bd794(uVar2,0);
  }
  FUN_00919db0(param_1 + 0x1d8,0);
  return;
}




void FUN_0091a50c(void)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  
  uVar2 = FUN_00e80f58();
  if ((uVar2 & 1) != 0) {
    lVar3 = FUN_00e829e0();
    if (*(int *)(lVar3 + 0xa0) == 7) {
      FUN_00ceab70(1,&DAT_03210450);
      return;
    }
  }
  uVar1 = FUN_009188d8();
  FUN_00ceab70(uVar1 & 1,&DAT_03210450);
  return;
}




void FUN_0091a558(undefined4 param_1,long param_2)

{
  *(undefined1 *)(param_2 + 0x7140) = 1;
  *(undefined4 *)(param_2 + 0x7138) = param_1;
  return;
}




bool FUN_0091a570(long param_1)

{
  uint uVar1;
  bool bVar2;
  
  uVar1 = *(ushort *)(param_1 + 0x1d0) & 0x1f;
  bVar2 = false;
  if (uVar1 != 0x1f) {
    bVar2 = *(int *)(param_1 + (ulong)uVar1 * 0x58 + 0x10) == 2;
  }
  return bVar2;
}




undefined1 FUN_0091a5a4(long param_1)

{
  return *(undefined1 *)(param_1 + 0x7141);
}




void FUN_0091a5b0(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  uVar1 = FUN_01988718();
  lVar2 = FUN_01987114(uVar1,0,"*KindredManifest*",0);
  if (lVar2 == 0) {
    FUN_01988700(0,"build://Levels/DefinitionManifest.def");
    FUN_019887c4("*KindredManifest*",0,0xffffffff,0);
  }
  if (*(long *)(param_1 + 0x7078) == 0) {
    FUN_009ba1e8();
    uVar1 = FUN_01988738(DAT_02c09230,0);
    *(undefined8 *)(param_1 + 0x7078) = uVar1;
    uVar3 = FUN_00931848(param_1 + 0x360);
    FUN_009b96fc(uVar1,uVar3,*(undefined1 *)(param_1 + 0x7144));
    *(undefined1 *)(param_1 + 0x7144) = 0;
  }
  else {
    FUN_009b9ab8(*(long *)(param_1 + 0x7078),0);
  }
  uVar1 = FUN_00efee28(0x3f800000,0x3f800000,FUN_0091aa80);
  FUN_00f022a0(param_1 + 0x360,uVar1);
  FUN_009481cc(1);
  FUN_009439c8(0);
  uVar1 = FUN_00e7d4c4();
  FUN_00e7d25c(uVar1,0);
  return;
}




void FUN_0091a69c(long param_1,long *param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  bool bVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  
  uVar5 = FUN_01988718();
  lVar6 = FUN_01987114(uVar5,0,"*KindredManifest*",0);
  if (lVar6 == 0) {
    FUN_01988700(0,"build://Levels/DefinitionManifest.def");
    FUN_019887c4("*KindredManifest*",0,0xffffffff,0);
  }
  FUN_00cead30();
  lVar6 = FUN_01988738(DAT_02c09250,0);
  uVar3 = DAT_03214ce8;
  plVar7 = (long *)(lVar6 + 0x28);
  if (lVar6 == 0) {
    *param_2 = 0;
  }
  else {
    iVar2 = *(int *)(lVar6 + 0x30);
    *param_2 = (long)plVar7;
    *(int *)(param_2 + 1) = iVar2;
    if (iVar2 == *(int *)(lVar6 + 0x30)) {
      uVar5 = (**(code **)(*plVar7 + 0x10))(plVar7);
      goto LAB_0091a76c;
    }
    *param_2 = 0;
  }
  uVar5 = 0;
  *(undefined4 *)(param_2 + 1) = uVar3;
LAB_0091a76c:
  FUN_009bd010(uVar5,param_1 + 0x1848);
  plVar7 = (long *)*param_2;
  uVar5 = 0;
  if (plVar7 != (long *)0x0) {
    if ((int)param_2[1] == (int)plVar7[1]) {
      uVar5 = (**(code **)(*plVar7 + 0x10))();
    }
    else {
      *param_2 = 0;
      uVar5 = 0;
      *(undefined4 *)(param_2 + 1) = DAT_03214ce8;
    }
  }
  bVar4 = false;
  uVar1 = *(ushort *)(param_1 + 0x350) & 0x1f;
  if (uVar1 != 0x1f) {
    bVar4 = *(int *)(param_1 + (ulong)uVar1 * 0x58 + 0x1e8) == 2;
  }
  FUN_009bd794(uVar5,bVar4);
  FUN_00ceace8();
  FUN_008ffe6c();
  uVar8 = FUN_00942ae8(1);
  if ((uVar8 & 1) != 0) {
    FUN_00942794();
  }
  FUN_0198080c();
  FUN_009439c8(1);
  return;
}




void FUN_0091a814(undefined8 param_1,long *param_2)

{
  undefined4 uVar1;
  long *plVar2;
  undefined8 uVar3;
  
  FUN_00ceace8();
  FUN_008ffea0();
  plVar2 = (long *)*param_2;
  uVar3 = 0;
  if (plVar2 != (long *)0x0) {
    if ((int)param_2[1] == (int)plVar2[1]) {
      uVar3 = (**(code **)(*plVar2 + 0x10))();
    }
    else {
      *param_2 = 0;
      uVar3 = 0;
      *(undefined4 *)(param_2 + 1) = DAT_03214ce8;
    }
  }
  FUN_009bd320(uVar3);
  plVar2 = (long *)*param_2;
  uVar3 = 0;
  if (plVar2 != (long *)0x0) {
    if ((int)param_2[1] == (int)plVar2[1]) {
      uVar3 = (**(code **)(*plVar2 + 0x10))();
    }
    else {
      *param_2 = 0;
      uVar3 = 0;
      *(undefined4 *)(param_2 + 1) = DAT_03214ce8;
    }
  }
  FUN_019888f4(uVar3);
  uVar1 = DAT_03214ce8;
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = uVar1;
  FUN_019889f0(DAT_02c09240);
  FUN_01988724(0);
  FUN_019802b4();
  FUN_009439c8(0);
  return;
}




void FUN_0091a8f0(void)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = FUN_00a9b890();
  if ((uVar1 & 1) != 0) {
    FUN_00ceace8();
    uVar1 = FUN_00ceae80();
    if ((uVar1 & 1) == 0) {
      uVar2 = FUN_00e6ce7c("MAIN_STARTUP_VALIDATION_DIALOG_MATCHENDED_TITLE",0);
      uVar3 = FUN_00e6ce7c("MAIN_STARTUP_VALIDATION_DIALOG_MATCHENDEDNOTENOUGHPLAYERS_MSG",0);
      uVar4 = FUN_00e6ce7c("GENERIC_DIALOG_OKAY",0);
      FUN_00a9b8b8(uVar2,uVar3,uVar4,0,0);
      return;
    }
  }
  return;
}




void FUN_0091a974(void)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = FUN_00a9b890();
  if ((uVar1 & 1) != 0) {
    uVar2 = FUN_00e6ce7c("MAIN_STARTUP_VALIDATION_DIALOG_MATCHENDED_TITLE",0);
    uVar3 = FUN_00e6ce7c("MAIN_STARTUP_VALIDATION_DIALOG_MATCHENDEDTEAMOVERLOADED_MSG",0);
    uVar4 = FUN_00e6ce7c("GENERIC_DIALOG_OKAY",0);
    FUN_00a9b8b8(uVar2,uVar3,uVar4,0,0);
    return;
  }
  return;
}




void FUN_0091a9ec(void)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = FUN_00a9b890();
  if (((uVar1 & 1) != 0) && (lVar2 = FUN_00ceace8(), lVar2 != 0)) {
    FUN_00ceace8();
    uVar1 = FUN_00ceae78();
    if ((uVar1 & 1) == 0) {
      uVar3 = FUN_00e6ce7c("MAIN_STARTUP_VALIDATION_DIALOG_MATCHENDED_TITLE",0);
      uVar4 = FUN_00e6ce7c("MAIN_STARTUP_VALIDATION_DIALOG_MATCHENDEDPLAYERNOTLOCKED_PRIVATE_MSG",0)
      ;
      uVar5 = FUN_00e6ce7c("GENERIC_DIALOG_OKAY",0);
      FUN_00a9b8b8(uVar3,uVar4,uVar5,0,0);
      return;
    }
  }
  return;
}




void FUN_0091aa78(undefined4 *param_1)

{
  *param_1 = 0;
  return;
}




float FUN_0091aa80(float param_1,float param_2,float param_3,float param_4)

{
  float fVar1;
  
  fVar1 = param_1 / param_4 + -1.0;
  return (fVar1 * fVar1 * fVar1 + 1.0) * param_3 + param_2;
}




bool FUN_0091aaa8(long param_1)

{
  return *(long *)(param_1 + 0x7078) != 0;
}




char * FUN_0091aab8(long param_1)

{
  uint uVar1;
  
  uVar1 = *(ushort *)(param_1 + 0x1d0) & 0x1f;
  if ((uVar1 != 0x1f) && (uVar1 = *(uint *)(param_1 + (ulong)uVar1 * 0x58 + 0x10), uVar1 < 5)) {
    return *(char **)(&DAT_027b9b20 + (long)(int)uVar1 * 8);
  }
  return "Unknown";
}




char * FUN_0091aafc(undefined8 param_1,uint param_2)

{
  if (param_2 < 5) {
    return *(char **)(&DAT_027b9b20 + (long)(int)param_2 * 8);
  }
  return "Unknown";
}




char * FUN_0091ab20(long param_1)

{
  uint uVar1;
  
  uVar1 = *(ushort *)(param_1 + 0x350) & 0x1f;
  if ((uVar1 != 0x1f) && (uVar1 = *(uint *)(param_1 + (ulong)uVar1 * 0x58 + 0x1e8), uVar1 < 4)) {
    return *(char **)(&DAT_027b9b50 + (long)(int)uVar1 * 8);
  }
  return "Unknown";
}




char * FUN_0091ab64(undefined8 param_1,uint param_2)

{
  if (param_2 < 4) {
    return *(char **)(&DAT_027b9b50 + (long)(int)param_2 * 8);
  }
  return "Unknown";
}




void FUN_0091ab88(undefined4 param_1,undefined4 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  
  switch(param_2) {
  case 5:
    FUN_0091a8f0();
    return;
  case 6:
    FUN_0091a974();
    return;
  case 7:
    FUN_0091a9ec();
    return;
  case 8:
    goto switchD_0091abb8_caseD_8;
  default:
    uVar1 = FUN_009bbf9c();
    if ((uVar1 & 1) != 0) {
      FUN_00923d48(0);
      uVar2 = FUN_009bbfb0();
      FUN_009bd3a8(uVar2,param_1,param_2);
      return;
    }
switchD_0091abb8_caseD_8:
    return;
  }
}




void FUN_0091ac14(undefined8 param_1)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_009bbf9c();
  if ((uVar1 & 1) != 0) {
    uVar2 = FUN_009bbfb0();
    FUN_009bdbb0(uVar2,param_1);
    return;
  }
  return;
}




void FUN_0091ac4c(int *param_1)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar1 = *(ushort *)(param_1 + 0x5e) & 0x1f;
  *(ushort *)(param_1 + 0x5e) = *(ushort *)(param_1 + 0x5e) | 0x3e0;
  if (uVar1 == 0x1f) {
    return;
  }
  if (*param_1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 2);
  }
                    /* WARNING: Could not recover jumptable at 0x0091ac98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + (ulong)uVar1 * 0x16 + 0x16))
            (*(undefined8 *)(param_1 + 0x5c),*(undefined8 *)(param_1 + (ulong)uVar1 * 0x16 + 0xe),
             *(undefined8 *)(param_1 + (ulong)uVar1 * 0x16 + 0x10),uVar2);
  return;
}




void FUN_0091ac9c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027b99e0;
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




void FUN_0091ad1c(void *param_1)

{
  FUN_0091ac9c();
  operator_delete(param_1);
  return;
}




void FUN_0091ad40(long param_1,float *param_2)

{
  if ((*(float *)(param_1 + 0x50) == *param_2) && (*(float *)(param_1 + 0x54) == param_2[1])) {
    return;
  }
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)param_2;
  FUN_0091ada4();
  return;
}




undefined4 FUN_0091ad70(long param_1)

{
  return *(undefined4 *)(param_1 + 0x58);
}




void FUN_0091ad78(undefined4 param_1,undefined4 param_2,long param_3)

{
  *(undefined4 *)(param_3 + 0x58) = param_1;
  *(undefined4 *)(param_3 + 0x5c) = param_2;
  return;
}




void FUN_0091ad80(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0x58) = param_1;
  *(undefined4 *)(param_2 + 0x5c) = param_1;
  return;
}




void FUN_0091ad88(void)

{
  return;
}




void FUN_0091ad8c(void)

{
  return;
}




void FUN_0091ad90(void)

{
  return;
}




void FUN_0091ad94(void)

{
  return;
}




void FUN_0091ad98(void)

{
  return;
}




void FUN_0091ad9c(void)

{
  return;
}




void FUN_0091ada0(void)

{
  return;
}




void FUN_0091ada4(long param_1)

{
  long lVar1;
  
  if ((*(uint *)(param_1 + 0x84) & 1) == 0) {
    lVar1 = *(long *)(param_1 + 0x28);
    *(uint *)(param_1 + 0x84) = *(uint *)(param_1 + 0x84) | 1;
    for (; lVar1 != 0; lVar1 = *(long *)(lVar1 + 0x30)) {
      if ((*(byte *)(lVar1 + 0x84) & 1) == 0) {
        FUN_0091ada4(lVar1);
      }
    }
  }
  return;
}




void FUN_0091adec(long param_1,code *UNRECOVERED_JUMPTABLE,ulong param_3)

{
  if ((param_3 & 1) != 0 || UNRECOVERED_JUMPTABLE != (code *)0x0) {
    if ((param_3 & 1) != 0) {
      UNRECOVERED_JUMPTABLE =
           *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(param_1 + ((long)param_3 >> 1)));
    }
                    /* WARNING: Could not recover jumptable at 0x0091ae08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  return;
}




void FUN_0091ae10(long param_1,code *UNRECOVERED_JUMPTABLE,ulong param_3,undefined8 param_4)

{
  long *plVar1;
  
  if ((param_3 & 1) != 0 || UNRECOVERED_JUMPTABLE != (code *)0x0) {
    plVar1 = (long *)(param_1 + ((long)param_3 >> 1));
    if ((param_3 & 1) != 0) {
      UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *plVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x0091ae34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(plVar1,param_4);
    return;
  }
  return;
}




void FUN_0091ae3c(long param_1,code *UNRECOVERED_JUMPTABLE,ulong param_3,undefined8 *param_4)

{
  long *plVar1;
  
  *param_4 = 0;
  param_4[1] = 0;
  *(undefined4 *)(param_4 + 1) = DAT_03214ce8;
  if ((param_3 & 1) != 0 || UNRECOVERED_JUMPTABLE != (code *)0x0) {
    plVar1 = (long *)(param_1 + ((long)param_3 >> 1));
    if ((param_3 & 1) != 0) {
      UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *plVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x0091ae74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(plVar1,param_4);
    return;
  }
  return;
}




void FUN_0091ae7c(long param_1,code *UNRECOVERED_JUMPTABLE,ulong param_3,undefined8 param_4)

{
  long *plVar1;
  
  if ((param_3 & 1) != 0 || UNRECOVERED_JUMPTABLE != (code *)0x0) {
    plVar1 = (long *)(param_1 + ((long)param_3 >> 1));
    if ((param_3 & 1) != 0) {
      UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *plVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x0091aea0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(plVar1,param_4);
    return;
  }
  return;
}




void FUN_0091aea8(uint *param_1,uint param_2,undefined1 param_3)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    if (*(long *)(param_1 + 2) != 0) {
      *param_1 = 0;
    }
  }
  else {
    if (param_1[1] < param_2) {
      FUN_0091af28(param_1,param_2);
    }
    uVar1 = (ulong)*param_1;
    if (*param_1 < param_2) {
      do {
        *(undefined1 *)(*(long *)(param_1 + 2) + uVar1) = param_3;
        uVar1 = uVar1 + 1;
      } while (param_2 != uVar1);
    }
    *param_1 = param_2;
  }
  return;
}




void FUN_0091af28(uint *param_1,uint param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  ulong uVar3;
  undefined1 *puVar4;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2);
    uVar3 = (ulong)*param_1;
    puVar2 = *(undefined1 **)(param_1 + 2);
    puVar4 = puVar1;
    if (*param_1 != 0) {
      do {
        uVar3 = uVar3 - 1;
        *puVar4 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar4 = puVar4 + 1;
      } while (uVar3 != 0);
      puVar2 = *(undefined1 **)(param_1 + 2);
    }
    param_1[1] = param_2;
    if (puVar2 != (undefined1 *)0x0) {
      operator_delete__(puVar2);
    }
    *(undefined1 **)(param_1 + 2) = puVar1;
  }
  return;
}




void FUN_0091afa0(long param_1,code *UNRECOVERED_JUMPTABLE,ulong param_3,undefined8 param_4)

{
  long *plVar1;
  
  if ((param_3 & 1) != 0 || UNRECOVERED_JUMPTABLE != (code *)0x0) {
    plVar1 = (long *)(param_1 + ((long)param_3 >> 1));
    if ((param_3 & 1) != 0) {
      UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *plVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x0091afc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(plVar1,param_4);
    return;
  }
  return;
}




void FUN_0091afcc(long param_1,code *UNRECOVERED_JUMPTABLE,ulong param_3,undefined4 *param_4)

{
  long *plVar1;
  
  *param_4 = 0;
  if ((param_3 & 1) != 0 || UNRECOVERED_JUMPTABLE != (code *)0x0) {
    plVar1 = (long *)(param_1 + ((long)param_3 >> 1));
    if ((param_3 & 1) != 0) {
      UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *plVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x0091aff4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(plVar1,param_4);
    return;
  }
  return;
}




void FUN_0091affc(long param_1,code *UNRECOVERED_JUMPTABLE,ulong param_3,undefined8 param_4)

{
  long *plVar1;
  
  if ((param_3 & 1) != 0 || UNRECOVERED_JUMPTABLE != (code *)0x0) {
    plVar1 = (long *)(param_1 + ((long)param_3 >> 1));
    if ((param_3 & 1) != 0) {
      UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *plVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x0091b020. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(plVar1,param_4);
    return;
  }
  return;
}




void thunk_FUN_0091ada4(long param_1)

{
  long lVar1;
  
  if ((*(uint *)(param_1 + 0x84) & 1) == 0) {
    lVar1 = *(long *)(param_1 + 0x28);
    *(uint *)(param_1 + 0x84) = *(uint *)(param_1 + 0x84) | 1;
    for (; lVar1 != 0; lVar1 = *(long *)(lVar1 + 0x30)) {
      if ((*(byte *)(lVar1 + 0x84) & 1) == 0) {
        FUN_0091ada4(lVar1);
      }
    }
  }
  return;
}

