// functions/00da6 — 42 functions
#include "libGameKindred.h"




void FUN_00da6054(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  code *local_58;
  undefined4 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d6639c();
  FUN_00d4b23c(uVar2,PTR_s_Ability__Malene__B2_02bef200);
  lVar3 = FUN_00d4b280();
  uVar2 = FUN_00d2dea4(lVar3 + 0x10);
  local_58 = FUN_00da6174;
  local_50 = 3;
  FUN_00d97d24(uVar2,PTR_s_Ability__Malene__B2_02bef200,&local_58,1);
  uVar2 = FUN_00d64464(param_1);
  FUN_00d4bbf8(uVar2,4);
  uVar2 = FUN_00d4bc10();
  lVar3 = FUN_00d4bc60(uVar2,"Ability__Malene__B2");
  plVar4 = (long *)FUN_00d2b728(lVar3 + 0x10);
  local_58 = FUN_00da6188;
  local_50 = 3;
  (**(code **)(*plVar4 + 0x30))(plVar4,&local_58);
  uVar2 = FUN_00d64464(param_1);
  FUN_00d4bbf8(uVar2,4);
  uVar2 = FUN_00d4bc10();
  lVar3 = FUN_00d4bc60(uVar2,"Ability__Malene__B2");
  plVar4 = (long *)FUN_00d2b728(lVar3 + 0x10);
  local_58 = FUN_00da6188;
  local_50 = 3;
  (**(code **)(*plVar4 + 0x30))(plVar4,&local_58);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00da6174(undefined8 param_1)

{
  FUN_00d5a3d0(param_1,DAT_031ac338,1,9);
  return;
}




void FUN_00da6188(undefined8 param_1)

{
  FUN_00d5a3d0(param_1,DAT_031ac338,0,9);
  return;
}




void FUN_00da619c(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  code *local_38;
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d64464();
  FUN_00d4bbf8(uVar2,4);
  uVar2 = FUN_00d4bc10();
  lVar3 = FUN_00d4bc60(uVar2,"Ability__Malene__A2");
  plVar4 = (long *)FUN_00d2b728(lVar3 + 0x10);
  local_38 = FUN_00da6224;
  local_30 = 3;
  (**(code **)(*plVar4 + 0x30))(plVar4,&local_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00da6224(undefined8 param_1)

{
  FUN_00d5a3d0(param_1,DAT_031ac340,0,9);
  return;
}




void FUN_00da6238(undefined8 *param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00d67b84(*param_1);
  uVar2 = FUN_00d9e390();
  FUN_00d55794(uVar2,auStack_48,0);
  FUN_00d5a3d0(uVar2,DAT_031ac348,1,9);
  FUN_00d4db48(param_2,auStack_48);
  FUN_00d4dabc(param_2,1);
  uVar2 = FUN_00d44c78(*param_1);
  FUN_00d4daf4(param_2,1,0,0,uVar2);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00da62f4(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  code *local_38;
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d634b4();
  lVar3 = FUN_00d4aa10(uVar2,PTR_s_Ability__Malene__B1_02bef1f8);
  uVar2 = FUN_00da63b8(lVar3 + 0x10);
  FUN_00d9c89c(uVar2,FUN_00da6238);
  plVar4 = (long *)FUN_00d2cf7c(lVar3 + 0x10);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x30))
                             (plVar4,PTR_s_Buff_Malene_B1_MirrorsBlessing_02bf0c78);
  local_38 = FUN_00da63a4;
  local_30 = 3;
  (**(code **)(*plVar4 + 0x18))(plVar4,&local_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00da63a4(undefined8 param_1)

{
  FUN_00d59f54(param_1,2,2,0x19,0);
  return;
}




void FUN_00da63b8(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_009a056c();
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




void FUN_00da6408(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  code *local_38;
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d64464();
  FUN_00d4bbf8(uVar2,3);
  uVar2 = FUN_00d4bc10();
  lVar3 = FUN_00d4bc60(uVar2,"Ability__Reim__A_Passthrough");
  plVar4 = (long *)FUN_00d2b728(lVar3 + 0x10);
  local_38 = FUN_00da6490;
  local_30 = 3;
  (**(code **)(*plVar4 + 0x30))(plVar4,&local_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00da6490(undefined8 param_1)

{
  FUN_00d5a3d0(param_1,DAT_031ac354,0,9);
  return;
}




void FUN_00da64a4(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  code *local_38;
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d65010();
  plVar3 = (long *)FUN_00d2a110(lVar2 + 0x10);
  local_38 = FUN_00da651c;
  local_30 = 3;
  (**(code **)(*plVar3 + 0x30))(plVar3,5,2,&local_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00da651c(undefined8 param_1)

{
  FUN_00d5a3d0(param_1,DAT_031ac35c,0,9);
  return;
}




void FUN_00da6530(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  code *local_38;
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d634b4();
  lVar3 = FUN_00d4aa10(uVar2,PTR_s_Ability__Reim__B_02bef378);
  plVar4 = (long *)FUN_00d2887c(lVar3 + 0x10);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x30))
                             (plVar4,PTR_s_Buff_Reim_Talent_Revenant_Barrie_02bee0c8);
  local_38 = FUN_00da65c4;
  local_30 = 3;
  (**(code **)(*plVar4 + 0x18))(plVar4,&local_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00da65c4(undefined8 param_1)

{
  FUN_00d5a3d0(param_1,DAT_031ac364,1,9);
  return;
}




void FUN_00da65d8(undefined8 *param_1,float *param_2,undefined4 *param_3)

{
  long lVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  
  FUN_00d67b84(*param_1);
  lVar1 = FUN_00d9e390();
  lVar2 = *(long *)(lVar1 + 0x40);
  fVar3 = (*(float *)(lVar2 + 0x1a0) + 1.0) *
          (*(float *)(lVar2 + 0x38) + *(float *)(lVar2 + 0xec) * (*(float *)(lVar2 + 0x254) + 1.0));
  if (DAT_031ac430 <= fVar3) {
    fVar3 = DAT_031ac430;
  }
  fVar4 = DAT_031ac370;
  if (DAT_031ac370 <= fVar3) {
    fVar4 = fVar3;
  }
  fVar3 = (float)FUN_00d5a3d0(lVar1,DAT_031ac364,0,9);
  *param_2 = fVar3 * fVar4;
  *param_3 = 0xbf800000;
  return;
}




void FUN_00da667c(void)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  
  lVar1 = FUN_00d65010();
  plVar2 = (long *)FUN_00d2dfe4(lVar1 + 0x10);
  (**(code **)(*plVar2 + 0x30))(plVar2,4,FUN_00da65d8);
  uVar3 = FUN_00d29a18(lVar1 + 0x10);
  FUN_00d46cdc(uVar3,8);
  return;
}




void FUN_00da66c8(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  code *local_58;
  undefined4 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d65010();
  uVar3 = FUN_00da4ee4(lVar2 + 0x10);
  uVar3 = FUN_00d986e0(uVar3,PTR_s_Ability__Ringo__A_02bef3a8);
  local_58 = FUN_00da67c4;
  local_50 = 3;
  FUN_00d98704(uVar3,&local_58);
  uVar3 = FUN_00d2dea4(lVar2 + 0x10);
  local_58 = FUN_00da67d8;
  local_50 = 3;
  FUN_00d97d24(uVar3,PTR_s_Ability__Ringo__A_02bef3a8,&local_58,1);
  uVar3 = FUN_00d64464(param_1);
  FUN_00d4bbf8(uVar3,3);
  uVar3 = FUN_00d4bc10();
  lVar2 = FUN_00d4bc60(uVar3,PTR_s_Ability__Ringo__A_02bef3a8);
  plVar4 = (long *)FUN_00d2b728(lVar2 + 0x10);
  local_58 = FUN_00da67ec;
  local_50 = 3;
  (**(code **)(*plVar4 + 0x30))(plVar4,&local_58);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00da67c4(undefined8 param_1)

{
  FUN_00d5a3d0(param_1,DAT_031ac4e8,1,9);
  return;
}




void FUN_00da67d8(undefined8 param_1)

{
  FUN_00d5a3d0(param_1,DAT_031ac4e8,2,9);
  return;
}




void FUN_00da67ec(undefined8 param_1)

{
  FUN_00d5a3d0(param_1,DAT_031ac4e8,0,9);
  return;
}




void FUN_00da6800(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  code *local_58;
  undefined4 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d64464();
  FUN_00d4bbf8(uVar2,3);
  FUN_00d4bc10();
  lVar3 = FUN_00d4bc38();
  uVar2 = FUN_00d2d01c(lVar3 + 0x10);
  uVar4 = FUN_00d9b294();
  FUN_00d9b610(uVar4,PTR_s_Buff_Ringo_TwirlingSilver_02beba50);
  FUN_00d9b5b0(uVar2);
  plVar5 = (long *)FUN_00d2b728();
  local_58 = FUN_00da692c;
  local_50 = 3;
  (**(code **)(*plVar5 + 0x30))(plVar5,&local_58);
  uVar2 = FUN_00d64464(param_1);
  FUN_00d4bbf8(uVar2,3);
  uVar2 = FUN_00d4bc10();
  lVar3 = FUN_00d4bc60(uVar2,PTR_s_Ability__Ringo__B_02bef3b0);
  plVar5 = (long *)FUN_00d2b728(lVar3 + 0x10);
  local_58 = FUN_00da692c;
  local_50 = 3;
  (**(code **)(*plVar5 + 0x30))(plVar5,&local_58);
  lVar3 = FUN_00d65010(param_1);
  uVar2 = FUN_00d2dea4(lVar3 + 0x10);
  local_58 = FUN_00da6940;
  local_50 = 3;
  FUN_00d97d24(uVar2,PTR_s_Ability__Ringo__B_02bef3b0,&local_58,1);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00da692c(undefined8 param_1)

{
  FUN_00d5a3d0(param_1,DAT_031ac4f0,0,9);
  return;
}




void FUN_00da6940(undefined8 param_1)

{
  FUN_00d5a3d0(param_1,DAT_031ac4f0,1,9);
  return;
}




void FUN_00da6954(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  code *local_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d65010();
  uVar3 = FUN_00d2dea4(lVar2 + 0x10);
  local_48 = FUN_00da6a20;
  local_40 = 3;
  FUN_00d97d24(uVar3,PTR_s_Ability__Ringo__C_02bef3b8,&local_48,1);
  uVar3 = FUN_00d64464(param_1);
  FUN_00d4bbf8(uVar3,3);
  uVar3 = FUN_00d4bc10();
  lVar2 = FUN_00d4bc60(uVar3,"Ability__Ringo__C");
  plVar4 = (long *)FUN_00d2b728(lVar2 + 0x10);
  local_48 = FUN_00da6a34;
  local_40 = 3;
  (**(code **)(*plVar4 + 0x30))(plVar4,&local_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00da6a20(undefined8 param_1)

{
  FUN_00d5a3d0(param_1,DAT_031ac4f8,1,9);
  return;
}




void FUN_00da6a34(undefined8 param_1)

{
  FUN_00d5a3d0(param_1,DAT_031ac4f8,0,9);
  return;
}




void FUN_00da6a48(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  code *local_38;
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d65010();
  plVar3 = (long *)FUN_00d2a110(lVar2 + 0x10);
  local_38 = FUN_00da6b14;
  local_30 = 3;
  (**(code **)(*plVar3 + 0x30))(plVar3,5,2,&local_38);
  FUN_00d63b38(param_1);
  uVar4 = FUN_00d4b7c8();
  lVar2 = FUN_00d4b7b0(uVar4,1);
  plVar3 = (long *)FUN_00d2b6d8(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Ability__Ringo__C_02bef3b8);
  local_38 = (code *)((ulong)local_38 & 0xffffffff00000000);
  local_30 = 1;
  (**(code **)(*plVar3 + 0x20))(plVar3,&local_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00da6b14(undefined8 param_1)

{
  FUN_00d5a3d0(param_1,DAT_031ac500,0,9);
  return;
}




void FUN_00da6b28(void)

{
  return;
}




void FUN_00da6b2c(void)

{
  return;
}




void FUN_00da6b30(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  code *local_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d64464();
  FUN_00d4bbf8(uVar2,3);
  FUN_00d4bc10();
  lVar3 = FUN_00d4bc38();
  lVar3 = FUN_00d29e8c(lVar3 + 0x10);
  lVar4 = FUN_00d2a370(lVar3 + 0x10);
  *(undefined **)(lVar4 + 8) = PTR_s_Buff_SAW_RoadieRun_02bf0ee8;
  plVar5 = (long *)FUN_00d2b728(lVar3 + 0xa0);
  local_48 = FUN_00da6c18;
  local_40 = 3;
  (**(code **)(*plVar5 + 0x30))(plVar5,&local_48);
  lVar3 = FUN_00d65010(param_1);
  plVar5 = (long *)FUN_00d2a110(lVar3 + 0x10);
  local_48 = FUN_00da6c2c;
  local_40 = 3;
  (**(code **)(*plVar5 + 0x30))(plVar5,0x10,1,&local_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00da6c18(undefined8 param_1)

{
  FUN_00d5a3d0(param_1,DAT_031ac518,1,9);
  return;
}




void FUN_00da6c2c(undefined8 param_1)

{
  FUN_00d5a3d0(param_1,DAT_031ac518,0,9);
  return;
}




void FUN_00da6c40(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_50 [24];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d67c60();
  FUN_00d425ec(auStack_50,uVar2);
  FUN_00d3e534();
  uVar2 = FUN_00d2a8bc();
  FUN_00d42654(auStack_50,uVar2);
  uVar2 = FUN_00d47c3c(uVar2,"CenterBody");
  FUN_00da2040(uVar2,"Effect_SAW_Projectile_Impact");
  lVar3 = FUN_00d67c60(param_1);
  FUN_00d425ec(auStack_50,lVar3 + 8);
  FUN_00d3e534();
  uVar2 = FUN_00d2a8bc();
  FUN_00d42654(auStack_50,uVar2);
  uVar2 = FUN_00d47c3c(uVar2,"CenterBody");
  FUN_00da2040(uVar2,"Effect_SAW_Projectile_Impact");
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00da6d18(void)

{
  return;
}




float FUN_00da6d1c(undefined8 *param_1)

{
  undefined8 uVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  
  FUN_00d67b84(*param_1);
  uVar1 = FUN_00d9e390();
  fVar3 = (float)FUN_00d59f54(uVar1,0,0,0x19,0);
  fVar4 = (float)FUN_00d5a3d0(uVar1,DAT_031ac534,0,9);
  fVar3 = fVar3 * fVar4;
  lVar2 = FUN_00d66d28(*param_1);
  if (*(char *)(lVar2 + 0x2f6) < '\0') {
    fVar4 = (float)FUN_00d59f54(uVar1,0,6,0x19,0);
    fVar3 = fVar3 * fVar4;
  }
  return fVar3;
}




float FUN_00da6db4(undefined8 *param_1)

{
  undefined8 uVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  FUN_00d67b84(*param_1);
  uVar1 = FUN_00d9e390();
  fVar3 = (float)FUN_00d59f54(uVar1,0,0,0x19,0);
  fVar4 = (float)FUN_00d5a3d0(uVar1,DAT_031ac534,0,9);
  fVar5 = (float)FUN_00d5a3d0(uVar1,DAT_031ac534,1,9);
  fVar5 = fVar3 * fVar4 * fVar5;
  lVar2 = FUN_00d66d28(*param_1);
  if (*(char *)(lVar2 + 0x2f6) < '\0') {
    fVar3 = (float)FUN_00d59f54(uVar1,0,6,0x19,0);
    fVar5 = fVar5 * fVar3;
  }
  return fVar5;
}




void FUN_00da6e6c(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  code *local_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d63f30();
  FUN_00d39534(lVar2 + 0x10);
  plVar3 = (long *)FUN_00d2b818(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x40))();
  local_48 = FUN_00da6d1c;
  local_40 = 4;
  (**(code **)(*plVar3 + 0x18))(plVar3,&local_48,1,2);
  lVar2 = FUN_00d65e5c(param_1);
  FUN_00d39534(lVar2 + 0x10);
  plVar3 = (long *)FUN_00d2b818(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x40))();
  local_48 = FUN_00da6db4;
  local_40 = 4;
  (**(code **)(*plVar3 + 0x18))(plVar3,&local_48,1,2);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00da6f58(void)

{
  return;
}




void FUN_00da6f5c(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  code *local_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d65010();
  uVar3 = FUN_00d2dea4(lVar2 + 0x10);
  local_48 = FUN_00da6ffc;
  local_40 = 3;
  FUN_00d97d24(uVar3,PTR_s_Ability__Skaarf__Talent_FlashFir_02bef530,&local_48,1);
  uVar3 = FUN_00d45f10(lVar2 + 0x10);
  FUN_00d9886c(uVar3,PTR_s_Ability__Skaarf__C_02bef528,
               PTR_s_Ability__Skaarf__Talent_FlashFir_02bef530);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00da6ffc(undefined8 param_1)

{
  FUN_00d5a3d0(param_1,DAT_031ac53c,0,9);
  return;
}

