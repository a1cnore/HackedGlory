// functions/00da7 — 43 functions
#include "libGameKindred.h"




void FUN_00da7010(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  code *local_38;
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d6639c();
  lVar3 = FUN_00d4b23c(uVar2,PTR_s_Ability__Skaarf__A_02bef518);
  uVar2 = FUN_00da4ee4(lVar3 + 0x10);
  uVar2 = FUN_00d986e0(uVar2,PTR_s_Ability__Skaarf__A_02bef518);
  local_38 = FUN_00da7090;
  local_30 = 3;
  FUN_00d986e8(uVar2,&local_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00da7090(undefined8 param_1)

{
  FUN_00d5a3d0(param_1,DAT_031ac544,3,9);
  return;
}




void FUN_00da70a4(undefined8 param_1)

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
  FUN_00d4b23c(uVar2,PTR_s_Ability__Skye__C_02bef5a0);
  lVar3 = FUN_00d4b280();
  lVar3 = lVar3 + 0x10;
  uVar2 = FUN_00d2dea4(lVar3);
  local_58 = FUN_00da71d4;
  local_50 = 3;
  FUN_00d97d24(uVar2,PTR_s_Ability__Skye__C_02bef5a0,&local_58,1);
  uVar2 = FUN_00d2dea4(lVar3);
  local_58 = FUN_00da71e8;
  local_50 = 3;
  FUN_00d97d24(uVar2,"Skye_C_RecastDelay",&local_58,2);
  uVar2 = FUN_00d39b2c(lVar3);
  local_58 = FUN_00da71fc;
  local_50 = 3;
  FUN_00d97fd0(uVar2,PTR_s_Ability__Skye__C_02bef5a0,&local_58);
  uVar2 = FUN_00d64464(param_1);
  FUN_00d4bbf8(uVar2,3);
  uVar2 = FUN_00d4bc10();
  lVar3 = FUN_00d4bc60(uVar2,PTR_s_Ability__Skye__C_02bef5a0);
  plVar4 = (long *)FUN_00d2b728(lVar3 + 0x10);
  local_58 = FUN_00da7224;
  local_50 = 3;
  (**(code **)(*plVar4 + 0x30))(plVar4,&local_58);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00da71d4(undefined8 param_1)

{
  FUN_00d5a3d0(param_1,DAT_031ac54c,2,9);
  return;
}




void FUN_00da71e8(undefined8 param_1)

{
  FUN_00d5a3d0(param_1,DAT_031ac54c,3,9);
  return;
}




int FUN_00da71fc(undefined4 param_1)

{
  float fVar1;
  
  fVar1 = (float)FUN_00d5a3d0(param_1,DAT_031ac54c,1,9);
  return (int)fVar1;
}




void FUN_00da7224(undefined8 param_1)

{
  FUN_00d5a3d0(param_1,DAT_031ac54c,0,9);
  return;
}




void FUN_00da7238(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  code *local_38;
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d6639c();
  lVar3 = FUN_00d4b23c(uVar2,PTR_s_Ability__Skye__A_02bef588);
  uVar2 = FUN_00da4ee4(lVar3 + 0x10);
  uVar2 = FUN_00d986e0(uVar2,PTR_s_Ability__Skye__A_02bef588);
  local_38 = FUN_00da72b8;
  local_30 = 3;
  FUN_00d98704(uVar2,&local_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00da72b8(undefined8 param_1)

{
  FUN_00d5a3d0(param_1,DAT_031ac554,1,9);
  return;
}




void FUN_00da72cc(undefined8 param_1)

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
  uVar2 = FUN_00da2040(uVar2,"Effect_Skye_Barrage_Impact");
  FUN_00da20dc(uVar2,1);
  lVar3 = FUN_00d67c60(param_1);
  FUN_00d425ec(auStack_50,lVar3 + 8);
  FUN_00d3e534();
  uVar2 = FUN_00d2a8bc();
  FUN_00d42654(auStack_50,uVar2);
  uVar2 = FUN_00d47c3c(uVar2,"CenterBody");
  uVar2 = FUN_00da2040(uVar2,"Effect_Skye_Barrage_Impact");
  FUN_00da20dc(uVar2,1);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00da73b4(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auStack_50 [24];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d66d28();
  lVar3 = FUN_00d67c60(param_1);
  FUN_00d425ec(auStack_50,lVar3 + 0x30);
  FUN_00d3e534();
  uVar4 = FUN_00d395d4();
  FUN_00d42654(auStack_50,uVar4);
  FUN_00d5a3d0(uVar2,DAT_031ac560,2,9);
  FUN_00d40e24(uVar4,5,2);
  FUN_00d3e534();
  uVar4 = FUN_00d395d4();
  FUN_00d42654(auStack_50,uVar4);
  FUN_00d5a3d0(uVar2,DAT_031ac560,2,9);
  FUN_00d40e24(uVar4,4,2);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00da7498(undefined8 param_1)

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
  lVar3 = FUN_00d29818();
  FUN_00d42654(auStack_50,lVar3);
  *(undefined4 *)(lVar3 + 0x10) = 0x41200000;
  lVar3 = FUN_00d67c60(param_1);
  FUN_00d425ec(auStack_50,lVar3 + 8);
  FUN_00d3e534();
  lVar3 = FUN_00d29818();
  FUN_00d42654(auStack_50,lVar3);
  *(undefined4 *)(lVar3 + 0x10) = 0x41200000;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00da7544(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  code *local_38;
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d65010();
  uVar3 = FUN_00d29f44(lVar2 + 0x10);
  local_38 = FUN_00da75b0;
  local_30 = 3;
  FUN_00d47690(uVar3,1,&local_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00da75b0(undefined8 param_1)

{
  FUN_00d5a3d0(param_1,DAT_031ac560,0,9);
  return;
}




void FUN_00da75c4(void)

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
  FUN_00d4bbf8(uVar2,6);
  FUN_00d4bc10();
  lVar3 = FUN_00d4bc38();
  plVar4 = (long *)FUN_00d2887c(lVar3 + 0x10);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x30))
                             (plVar4,PTR_s_Buff_Vox_SoundBarrier_Barrier_02bee1f0);
  local_38 = FUN_00da7658;
  local_30 = 3;
  (**(code **)(*plVar4 + 0x18))(plVar4,&local_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00da7658(undefined8 param_1)

{
  FUN_00d5a3d0(param_1,DAT_031ac574,1,9);
  return;
}




float FUN_00da766c(void)

{
  long lVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  
  FUN_00d67b84();
  lVar1 = FUN_00d9e390();
  lVar2 = *(long *)(lVar1 + 0x40);
  fVar3 = (*(float *)(lVar2 + 0x1a0) + 1.0) *
          (*(float *)(lVar2 + 0x38) + *(float *)(lVar2 + 0xec) * (*(float *)(lVar2 + 0x254) + 1.0));
  if (DAT_031ac660 <= fVar3) {
    fVar3 = DAT_031ac660;
  }
  fVar4 = DAT_031ac5a0;
  if (DAT_031ac5a0 <= fVar3) {
    fVar4 = fVar3;
  }
  fVar3 = (float)FUN_00d5a3d0(lVar1,DAT_031ac574,0,9);
  return fVar3 * fVar4;
}




void FUN_00da76f0(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [24];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d67c60();
  FUN_00d425ec(auStack_50,lVar2 + 0x30);
  FUN_00d3e534();
  uVar3 = FUN_00d2b564();
  FUN_00d42654(auStack_50,uVar3);
  FUN_00da766c(param_1);
  FUN_00d40908(uVar3,4);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00da7778(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  code *local_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d65010();
  plVar3 = (long *)FUN_00d2a110(lVar2 + 0x10);
  local_48 = FUN_00da783c;
  local_40 = 3;
  (**(code **)(*plVar3 + 0x30))(plVar3,0xf,1,&local_48);
  uVar4 = FUN_00d6639c(param_1);
  lVar2 = FUN_00d4b23c(uVar4,PTR_s_Ability__Vox__A_02bef6e0);
  uVar4 = FUN_00d2dea4(lVar2 + 0x10);
  local_48 = FUN_00da7850;
  local_40 = 3;
  FUN_00d97d24(uVar4,PTR_s_Ability__Vox__A_02bef6e0,&local_48,1);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00da783c(undefined8 param_1)

{
  FUN_00d5a3d0(param_1,DAT_031ac580,1,9);
  return;
}




void FUN_00da7850(undefined8 param_1)

{
  FUN_00d5a3d0(param_1,DAT_031ac580,2,9);
  return;
}




void FUN_00da7864(void)

{
  return;
}




void FUN_00da7868(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long *plVar13;
  float fVar14;
  undefined8 uVar15;
  float fVar16;
  undefined1 auStack_7d0 [16];
  undefined1 auStack_7c0 [16];
  undefined8 local_7b0;
  undefined1 auStack_7a8 [96];
  undefined1 auStack_748 [40];
  undefined1 auStack_720 [96];
  long local_6c0 [200];
  long local_80;
  
  lVar1 = tpidr_el0;
  local_80 = *(long *)(lVar1 + 0x28);
  FUN_00d69224(param_1,&local_7b0);
  FUN_00d67b84(local_7b0);
  lVar9 = FUN_00d9e390();
  lVar10 = FUN_00d66d28(local_7b0);
  FUN_00d55794(lVar10,auStack_7c0,0);
  FUN_00d55794(lVar9,auStack_7d0,0);
  FUN_00d4d9e8(auStack_720);
  FUN_00d4daf4(auStack_720,0,1,0,lVar9);
  FUN_00d4dabc(auStack_720,0x40000);
  fVar14 = (float)thunk_FUN_00d086f0(lVar9,2,1);
  fVar16 = *(float *)(*(long *)(lVar10 + 0x38) + 100);
  FUN_00d4db48(fVar14 + (*(float *)(*(long *)(lVar10 + 0x38) + 0x68) *
                        (fVar16 + *(float *)(lVar10 + 0x2e8))) / fVar16,auStack_720,auStack_7c0);
  FUN_00d4eb08(auStack_748,auStack_7c0,3,1);
  uVar3 = FUN_00d9e840(auStack_720,local_6c0,200,auStack_748);
  if (uVar3 != 0) {
    uVar12 = (ulong)uVar3;
    plVar13 = local_6c0;
    do {
      puVar2 = PTR_s_Buff_Vox_Resonance_02bf1238;
      lVar11 = *plVar13;
      iVar4 = *(int *)(lVar11 + 0x260);
      if (iVar4 == *(int *)(lVar10 + 0x260)) {
        uVar6 = *(undefined4 *)(lVar9 + 0x260);
        uVar15 = thunk_FUN_00d086f0(lVar9,4,1);
        uVar5 = FUN_00ceb350();
        FUN_00cfe864(uVar15,0,0,auStack_7a8,uVar6,iVar4,puVar2,uVar5,0,0,0);
      }
      else {
        if (((DAT_031ac590 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_031ac590), iVar4 != 0)) {
          DAT_031ac58c = 0x3e3270a0;
          __cxa_guard_release(&DAT_031ac590);
        }
        uVar6 = FUN_00d5ba88(lVar9);
        uVar5 = FUN_00d5ba88(lVar10);
        uVar7 = FUN_00d5ba88(lVar11);
        uVar8 = FUN_00ceb350();
        FUN_00d02a78(0,auStack_7a8,uVar6,uVar5,uVar7,0x76,&DAT_031ac58c,uVar8);
      }
      FUN_00ce20fc(auStack_7a8);
      uVar12 = uVar12 - 1;
      plVar13 = plVar13 + 1;
    } while (uVar12 != 0);
  }
  if (*(long *)(lVar1 + 0x28) == local_80) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00da7ac8(undefined8 param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  ulong uVar4;
  long lVar5;
  
  uVar4 = FUN_00ceab48();
  if ((uVar4 & 1) != 0) {
    lVar5 = FUN_00d67c60(param_1);
    puVar2 = PTR_s_onApplyName_02bed4f8;
    uVar3 = FUN_00e6a474(PTR_s_onApplyName_02bed4f8);
    uVar3 = FUN_0091ed5c(puVar2,uVar3,0x12345678);
    *(undefined4 *)(lVar5 + 0x38 + (ulong)*(uint *)(lVar5 + 0xf8) * 4) = uVar3;
    uVar1 = *(uint *)(lVar5 + 0xf8);
    *(code **)(lVar5 + 0x38 + (ulong)uVar1 * 8 + 0x40) = FUN_00da7868;
    *(uint *)(lVar5 + 0xf8) = uVar1 + 1;
    lVar5 = FUN_00d67c60(param_1);
    puVar2 = PTR_s_onAfterReApplyName_02bed508;
    uVar3 = FUN_00e6a474(PTR_s_onAfterReApplyName_02bed508);
    uVar3 = FUN_0091ed5c(puVar2,uVar3,0x12345678);
    *(undefined4 *)(lVar5 + 0x38 + (ulong)*(uint *)(lVar5 + 0xf8) * 4) = uVar3;
    uVar1 = *(uint *)(lVar5 + 0xf8);
    *(code **)(lVar5 + 0x38 + (ulong)uVar1 * 8 + 0x40) = FUN_00da7868;
    *(uint *)(lVar5 + 0xf8) = uVar1 + 1;
  }
  return;
}




void FUN_00da7ba4(void)

{
  return;
}




void FUN_00da7ba8(void)

{
  return;
}




void FUN_00da7bac(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  code *local_38;
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d65010();
  uVar3 = FUN_00d2dea4(lVar2 + 0x10);
  local_38 = FUN_00da7c24;
  local_30 = 3;
  FUN_00d97d24(uVar3,PTR_s_Ability__Samuel__C_02bef4a8,&local_38,1);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00da7c24(undefined8 param_1)

{
  FUN_00d5a3d0(param_1,DAT_031ac728,0,9);
  return;
}




void FUN_00da7c38(void)

{
  return;
}




void FUN_00da7c3c(void)

{
  return;
}




void FUN_00da7c40(void)

{
  return;
}




void FUN_00da7c44(undefined8 param_1)

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
  lVar3 = FUN_00d4b23c(uVar2,PTR_s_Ability__Baptiste__C_02bee600);
  uVar2 = FUN_00da4ee4(lVar3 + 0x10);
  uVar2 = FUN_00d986e0(uVar2,PTR_s_Ability__Baptiste__C_02bee600);
  local_58 = FUN_00da7d50;
  local_50 = 3;
  FUN_00d986e8(uVar2,&local_58);
  uVar2 = FUN_00d2dea4(lVar3 + 0x10);
  local_58 = FUN_00da7d64;
  local_50 = 3;
  FUN_00d97d24(uVar2,PTR_s_Ability__Baptiste__C_02bee600,&local_58,1);
  uVar2 = FUN_00d64464(param_1);
  FUN_00d4bbf8(uVar2,2);
  uVar2 = FUN_00d4bc10();
  lVar3 = FUN_00d4bc60(uVar2,PTR_s_Buff_Baptiste_Ultimate_DOT_02bf0310);
  plVar4 = (long *)FUN_00d2b728(lVar3 + 0x10);
  local_58 = FUN_00da7d78;
  local_50 = 3;
  (**(code **)(*plVar4 + 0x30))(plVar4,&local_58);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00da7d50(undefined8 param_1)

{
  FUN_00d5a3d0(param_1,DAT_031ac748,1,9);
  return;
}




void FUN_00da7d64(undefined8 param_1)

{
  FUN_00d5a3d0(param_1,DAT_031ac748,0,9);
  return;
}




void FUN_00da7d78(undefined8 param_1)

{
  FUN_00d5a3d0(param_1,DAT_031ac748,2,9);
  return;
}




void FUN_00da7d8c(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auStack_50 [24];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d66d28();
  lVar3 = FUN_00d67c60(param_1);
  FUN_00d425ec(auStack_50,lVar3 + 0x30);
  FUN_00d3e534();
  uVar4 = FUN_00d395d4();
  FUN_00d42654(auStack_50,uVar4);
  FUN_00d5a3d0(uVar2,DAT_031ac750,0,9);
  FUN_00d40e24(uVar4,0xf,1);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00da7e34(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  code *local_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d6639c();
  lVar3 = FUN_00d4b23c(uVar2,PTR_s_Ability__Baptiste__A_02bee5f0);
  uVar2 = FUN_00da4ee4(lVar3 + 0x10);
  uVar2 = FUN_00d986e0(uVar2,PTR_s_Ability__Baptiste__A_02bee5f0);
  local_48 = FUN_00da7ee8;
  local_40 = 3;
  FUN_00d98704(uVar2,&local_48);
  uVar2 = FUN_00d2dea4(lVar3 + 0x10);
  local_48 = FUN_00da7efc;
  local_40 = 3;
  FUN_00d97d24(uVar2,PTR_s_Ability__Baptiste__A_02bee5f0,&local_48,1);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00da7ee8(undefined8 param_1)

{
  FUN_00d5a3d0(param_1,DAT_031ac758,0,9);
  return;
}




void FUN_00da7efc(undefined8 param_1)

{
  FUN_00d5a3d0(param_1,DAT_031ac758,1,9);
  return;
}




void FUN_00da7f10(void)

{
  return;
}




void FUN_00da7f14(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auStack_50 [24];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d66d28();
  lVar3 = FUN_00d67c60(param_1);
  FUN_00d425ec(auStack_50,lVar3 + 0x30);
  FUN_00d3e534();
  uVar4 = FUN_00d395d4();
  FUN_00d42654(auStack_50,uVar4);
  FUN_00d5a3d0(uVar2,DAT_031ac764,0,9);
  FUN_00d40e24(uVar4,0xf,1);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00da7fbc(void)

{
  return;
}




void FUN_00da7fc0(undefined8 *param_1,float *param_2,float *param_3)

{
  long lVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  
  lVar1 = FUN_00d426b0(*param_1);
  lVar2 = *(long *)(lVar1 + 0x40);
  fVar3 = (*(float *)(lVar2 + 0x1a0) + 1.0) *
          (*(float *)(lVar2 + 0x38) + *(float *)(lVar2 + 0xec) * (*(float *)(lVar2 + 0x254) + 1.0));
  if (DAT_031ac840 <= fVar3) {
    fVar3 = DAT_031ac840;
  }
  fVar4 = DAT_031ac780;
  if (DAT_031ac780 <= fVar3) {
    fVar4 = fVar3;
  }
  fVar3 = (float)FUN_00d5a3d0(lVar1,DAT_031ac77c,0,9);
  *param_2 = fVar3 * fVar4;
  *param_3 = fVar3 * fVar4;
  return;
}

