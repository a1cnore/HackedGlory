// functions/00d27 — 23 functions
#include "libGameKindred.h"




void FUN_00d27110(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [24];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d63f30();
  FUN_00d298f8(lVar2 + 0x10);
  lVar2 = FUN_00d67c60(param_1);
  FUN_00d425ec(auStack_50,lVar2 + 0x30);
  FUN_00d3e534();
  uVar3 = FUN_00d29948();
  FUN_00d42654(auStack_50,uVar3);
  lVar2 = FUN_00d66d28(param_1);
  FUN_00d41780(uVar3,*(undefined4 *)(lVar2 + 0x260),0xffffffff);
  FUN_00d41788();
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d271b8(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  float fVar4;
  undefined1 auStack_40 [24];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d65010();
  uVar3 = FUN_00d29a18(lVar2 + 0x10);
  FUN_00d46cdc(uVar3,0x11);
  fVar4 = (float)FUN_00d67b3c(param_1);
  if (0.0 < fVar4) {
    lVar2 = FUN_00d67c60(param_1);
    FUN_00d425ec(auStack_40,lVar2 + 8);
    FUN_00d3e534();
    uVar3 = FUN_00d29a68();
    FUN_00d42654(auStack_40,uVar3);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d27248(undefined8 *param_1,undefined8 param_2,float *param_3,undefined4 *param_4)

{
  float fVar1;
  
  *param_4 = 0x3f800000;
  fVar1 = (float)FUN_00d67b3c(*param_1);
  *param_3 = 1.0 / fVar1 + 1.0 / fVar1;
  return;
}




void FUN_00d27284(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_00d63f30();
  lVar1 = lVar1 + 0x10;
  plVar2 = (long *)FUN_00d2779c(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))(plVar2,"Idle");
  (**(code **)(*plVar2 + 0x20))();
  plVar2 = (long *)FUN_00d29b44(lVar1);
  (**(code **)(*plVar2 + 0x30))(plVar2,FUN_00d27248);
  FUN_00d29b94(lVar1);
  lVar1 = FUN_00d65010(param_1);
  FUN_00d29be4(lVar1 + 0x10);
  return;
}




void FUN_00d27300(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  float fVar5;
  undefined1 auStack_50 [24];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d65010();
  lVar2 = lVar2 + 0x10;
  plVar3 = (long *)FUN_00d29c34(lVar2);
  (**(code **)(*plVar3 + 0x30))(plVar3,1);
  uVar4 = FUN_00d29a18(lVar2);
  uVar4 = FUN_00d46cdc(uVar4,0x11);
  FUN_00d46d30(uVar4,6);
  uVar4 = FUN_00d29c84(lVar2);
  FUN_00d46b64(uVar4,0x200);
  fVar5 = (float)FUN_00d67b3c(param_1);
  if (0.0 < fVar5) {
    lVar2 = FUN_00d67c60(param_1);
    FUN_00d425ec(auStack_50,lVar2 + 8);
    FUN_00d3e534();
    uVar4 = FUN_00d29a68();
    FUN_00d42654(auStack_50,uVar4);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d273cc(undefined8 param_1)

{
  undefined4 uVar1;
  long lVar2;
  undefined4 uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  uVar4 = FUN_00ceab48();
  if ((uVar4 & 1) != 0) {
    FUN_00d69224(param_1,&local_40);
    lVar5 = FUN_00d66d28(local_40);
    uVar6 = FUN_00d67b2c(local_40);
    uVar1 = *(undefined4 *)(lVar5 + 0x260);
    uVar3 = FUN_00d66d34(local_40);
    FUN_00d04628(uVar6,auStack_68,uVar1,uVar3);
    FUN_00ce20fc(auStack_68);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d27470(undefined8 param_1)

{
  uint uVar1;
  long lVar2;
  undefined *puVar3;
  undefined4 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auStack_50 [24];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  lVar5 = FUN_00d67c60();
  puVar3 = PTR_s_onBeforeReApplyName_02bed500;
  uVar4 = FUN_00e6a474(PTR_s_onBeforeReApplyName_02bed500);
  uVar4 = FUN_0091ed5c(puVar3,uVar4,0x12345678);
  *(undefined4 *)(lVar5 + 0x38 + (ulong)*(uint *)(lVar5 + 0xf8) * 4) = uVar4;
  uVar1 = *(uint *)(lVar5 + 0xf8);
  *(code **)(lVar5 + 0x38 + (ulong)uVar1 * 8 + 0x40) = FUN_00d273cc;
  *(uint *)(lVar5 + 0xf8) = uVar1 + 1;
  lVar5 = FUN_00d67c60(param_1);
  FUN_00d425ec(auStack_50,lVar5 + 0x10);
  FUN_00d3e534();
  uVar6 = FUN_00d29cd4();
  FUN_00d42654(auStack_50,uVar6);
  lVar5 = FUN_00d67c60(param_1);
  FUN_00d425ec(auStack_50,lVar5 + 0x18);
  FUN_00d3e534();
  uVar6 = FUN_00d29cd4();
  FUN_00d42654(auStack_50,uVar6);
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d27564(undefined8 param_1)

{
  uint uVar1;
  long lVar2;
  undefined *puVar3;
  undefined4 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auStack_50 [24];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  lVar5 = FUN_00d67c60();
  puVar3 = PTR_s_onBeforeReApplyName_02bed500;
  uVar4 = FUN_00e6a474(PTR_s_onBeforeReApplyName_02bed500);
  uVar4 = FUN_0091ed5c(puVar3,uVar4,0x12345678);
  *(undefined4 *)(lVar5 + 0x38 + (ulong)*(uint *)(lVar5 + 0xf8) * 4) = uVar4;
  uVar1 = *(uint *)(lVar5 + 0xf8);
  *(code **)(lVar5 + 0x38 + (ulong)uVar1 * 8 + 0x40) = FUN_00d273cc;
  *(uint *)(lVar5 + 0xf8) = uVar1 + 1;
  lVar5 = FUN_00d67c60(param_1);
  FUN_00d425ec(auStack_50,lVar5 + 0x10);
  FUN_00d3e534();
  uVar6 = FUN_00d29db0();
  FUN_00d42654(auStack_50,uVar6);
  lVar5 = FUN_00d67c60(param_1);
  FUN_00d425ec(auStack_50,lVar5 + 0x18);
  FUN_00d3e534();
  uVar6 = FUN_00d29db0();
  FUN_00d42654(auStack_50,uVar6);
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




bool FUN_00d27658(undefined8 *param_1)

{
  uint uVar1;
  bool bVar2;
  long lVar3;
  
  lVar3 = FUN_00d66d28(*param_1);
  uVar1 = *(ushort *)(lVar3 + 0x88) & 0x1f;
  bVar2 = false;
  if (uVar1 != 0x1f) {
    bVar2 = *(short *)(lVar3 + (ulong)uVar1 * 0x38 + 0x90) == 5;
  }
  return bVar2;
}




void FUN_00d276a0(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  
  FUN_00d2770c();
  lVar1 = FUN_00d64980(param_1);
  lVar1 = FUN_00d29e8c(lVar1 + 0x10);
  lVar2 = FUN_00d29edc(lVar1 + 0x10);
  *(code **)(lVar2 + 8) = FUN_00d27658;
  plVar3 = (long *)FUN_00d2779c(lVar1 + 0xa0);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,"Idle");
                    /* WARNING: Could not recover jumptable at 0x00d27708. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x20))();
  return;
}




void FUN_00d2770c(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [24];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d67c60();
  FUN_00d425ec(auStack_40,lVar2 + 0x30);
  FUN_00d3e534();
  uVar3 = FUN_00d2a034();
  FUN_00d42654(auStack_40,uVar3);
  lVar2 = FUN_00d67c60(param_1);
  FUN_00d425ec(auStack_40,lVar2 + 8);
  FUN_00d3e534();
  uVar3 = FUN_00d29a68();
  FUN_00d42654(auStack_40,uVar3);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d2779c(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_009a2e98();
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




void FUN_00d277ec(undefined8 param_1)

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
  local_38 = FUN_00d44db8;
  local_30 = 4;
  FUN_00d47690(uVar3,1,&local_38);
  lVar2 = FUN_00d65e5c(param_1);
  FUN_00d29f94(lVar2 + 0x10);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d2786c(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  
  lVar1 = FUN_00d65010();
  plVar2 = (long *)FUN_00d29c34(lVar1 + 0x10);
  (**(code **)(*plVar2 + 0x30))(plVar2,1);
  uVar3 = FUN_00d29c84(lVar1 + 0x10);
  FUN_00d46b64(uVar3,0x200);
  lVar1 = FUN_00d65e5c(param_1);
  FUN_00d29f94(lVar1 + 0x10);
  return;
}




void FUN_00d278c4(void)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_00d65010();
  uVar2 = FUN_00d29c84(lVar1 + 0x10);
  FUN_00d46b64(uVar2,0x100);
  FUN_00d29fe4(lVar1 + 0x10);
  return;
}




void FUN_00d278f8(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined4 local_48 [2];
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d65e5c();
  FUN_00d29f94(lVar2 + 0x10);
  lVar2 = FUN_00d65010(param_1);
  lVar2 = lVar2 + 0x10;
  plVar3 = (long *)FUN_00d2945c(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x68))(plVar3,"OverHead");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_MortalWound");
  (**(code **)(*plVar3 + 0xb0))(plVar3,1);
  plVar3 = (long *)FUN_00d2a110(lVar2);
  local_48[0] = 0xbea8f5c3;
  local_40 = 1;
  (**(code **)(*plVar3 + 0x30))(plVar3,0x23,2,local_48);
  plVar3 = (long *)FUN_00d2a110(lVar2);
  local_48[0] = 0xbea8f5c3;
  local_40 = 1;
  (**(code **)(*plVar3 + 0x30))(plVar3,0x21,1,local_48);
  plVar3 = (long *)FUN_00d29c34(lVar2);
  (**(code **)(*plVar3 + 0x30))(plVar3,0xe);
  uVar4 = FUN_00d29c84(lVar2);
  FUN_00d46b64(uVar4,0x800);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d27a20(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  
  FUN_00d42ce8(param_1,0x10,"Effect_ItemSilence","OverHead");
  lVar1 = FUN_00d65010(param_1);
  plVar2 = (long *)FUN_00d29c34(lVar1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00d27a6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x30))(plVar2,9);
  return;
}




void FUN_00d27a70(undefined8 param_1)

{
  FUN_00d42ce8(param_1,0x18,"Effect_Silence","OverHead");
  return;
}




void FUN_00d27a88(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  
  FUN_00d42ce8(param_1,0x1f,"Effect_Stunned_buff","OverHead");
  lVar1 = FUN_00d63f30(param_1);
  lVar1 = lVar1 + 0x10;
  plVar2 = (long *)FUN_00d2779c(lVar1);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))(plVar2,"Stun");
  (**(code **)(*plVar2 + 0x20))();
  plVar2 = (long *)FUN_00d2a160(lVar1);
  (**(code **)(*plVar2 + 0x38))();
  FUN_00d2a1b0(lVar1);
  lVar1 = FUN_00d65010(param_1);
  plVar2 = (long *)FUN_00d29c34(lVar1 + 0x10);
  (**(code **)(*plVar2 + 0x30))(plVar2,2);
  lVar1 = FUN_00d64980(param_1);
  plVar2 = (long *)FUN_00d2779c(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x30))(plVar2,"Idle");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x20))();
                    /* WARNING: Could not recover jumptable at 0x00d27b60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x28))();
  return;
}




void FUN_00d27b64(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined4 local_48 [2];
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00d42ce8(param_1,0x1f,"Effect_Stunned_buff","OverHead");
  lVar2 = FUN_00d6624c(param_1);
  plVar3 = (long *)FUN_00d2887c(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Stunned_02beb430);
  local_48[0] = FUN_00d6a1f8(param_1);
  local_40 = 1;
  (**(code **)(*plVar3 + 0x18))(plVar3,local_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d27c18(undefined8 param_1)

{
  long lVar1;
  undefined4 local_38 [2];
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_38[0] = 0x3f000000;
  local_30 = 1;
  FUN_00d42c70(param_1,local_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d27c70(undefined8 param_1)

{
  long lVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  undefined4 *puVar6;
  undefined4 local_58 [2];
  undefined4 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d67b84();
  iVar3 = FUN_00d6a078(param_1);
  if (iVar3 != 0) {
    iVar3 = FUN_00d6a078(param_1);
    if (iVar3 != -1) {
      uVar2 = FUN_00d6a078(param_1);
    }
  }
  uVar4 = FUN_00d9e390(uVar2);
  FUN_00d55794(uVar4,local_58,0);
  lVar5 = FUN_00d67c60(param_1);
  uVar2 = FUN_00e6a474("fearPositionX");
  uVar2 = FUN_0091ed5c("fearPositionX",uVar2,0x12345678);
  puVar6 = (undefined4 *)(**(code **)(*(long *)(lVar5 + 0x100) + 0x10))(lVar5 + 0x100,uVar2);
  *puVar6 = local_58[0];
  lVar5 = FUN_00d67c60(param_1);
  uVar2 = FUN_00e6a474("fearPositionZ");
  uVar2 = FUN_0091ed5c("fearPositionZ",uVar2,0x12345678);
  puVar6 = (undefined4 *)(**(code **)(*(long *)(lVar5 + 0x100) + 0x10))(lVar5 + 0x100,uVar2);
  *puVar6 = local_50;
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d27db4(undefined8 param_1)

{
  long lVar1;
  undefined4 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  float *pfVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  ulong local_c8;
  float local_c0;
  undefined8 local_b8;
  float local_b0;
  float local_a8;
  float fStack_a4;
  float local_a0;
  undefined1 auStack_98 [16];
  undefined8 local_88;
  undefined1 auStack_80 [40];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  uVar3 = FUN_00ceab48();
  if ((uVar3 & 1) == 0) goto LAB_00d2803c;
  FUN_00d69224(param_1,&local_88);
  uVar4 = FUN_00d66d28(local_88);
  lVar5 = FUN_00d67c60(local_88);
  uVar2 = FUN_00e6a474("fearPositionX");
  uVar2 = FUN_0091ed5c("fearPositionX",uVar2,0x12345678);
  pfVar6 = (float *)(**(code **)(*(long *)(lVar5 + 0x100) + 0x10))(lVar5 + 0x100,uVar2);
  fVar9 = *pfVar6;
  lVar5 = FUN_00d67c60(local_88);
  uVar2 = FUN_00e6a474("fearPositionZ");
  uVar2 = FUN_0091ed5c("fearPositionZ",uVar2,0x12345678);
  pfVar6 = (float *)(**(code **)(*(long *)(lVar5 + 0x100) + 0x10))(lVar5 + 0x100,uVar2);
  fVar10 = *pfVar6;
  FUN_00d55794(uVar4,&local_a8,0);
  fStack_a4 = 0.0;
  fVar7 = fVar9 - local_a8;
  fVar8 = fVar10 - local_a0;
  if (fVar7 * fVar7 + 0.0 + fVar8 * fVar8 <= 0.0) {
    FUN_00d557c4(uVar4,&local_c8,&DAT_03218f68);
    fVar9 = (float)local_c8;
    fVar7 = (float)(local_c8 >> 0x20);
    local_c8 = CONCAT44(-fVar7,-fVar9);
    fVar7 = fVar9 * fVar9 + fVar7 * fVar7 + local_c0 * local_c0;
    local_c0 = -local_c0;
    if (1e-08 <= fVar7) goto LAB_00d27f98;
    local_c0 = DAT_03218f70;
    local_c8 = DAT_03218f68;
  }
  else {
    fVar9 = local_a8 - fVar9;
    local_c0 = local_a0 - fVar10;
    fVar7 = fVar9 * fVar9 + 0.0 + local_c0 * local_c0;
    local_c8 = (ulong)(uint)fVar9;
    if (1e-08 <= fVar7) {
LAB_00d27f98:
      fVar9 = SQRT(fVar7);
      if (NAN(fVar9)) {
        fVar9 = sqrtf(fVar7);
      }
      local_c8 = CONCAT44((float)(local_c8 >> 0x20) / fVar9,(float)local_c8 / fVar9);
      local_c0 = local_c0 / fVar9;
    }
    else {
      local_c0 = DAT_03218f70;
      local_c8 = DAT_03218f68;
    }
  }
  local_b0 = local_c0 + local_c0 + local_a0;
  local_b8 = CONCAT44(*(float *)((ulong)&local_c8 | 4) + *(float *)((ulong)&local_c8 | 4) +
                      fStack_a4,(float)local_c8 + (float)local_c8 + local_a8);
  uVar2 = FUN_00da2eb4(uVar4);
  FUN_00da32b0(auStack_80,&local_a8,&local_b8,uVar2);
  FUN_00da32dc(auStack_80,auStack_98,0);
  uVar4 = FUN_00d66d28(local_88);
  FUN_00cb6ef8(uVar4,auStack_98,0);
LAB_00d2803c:
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

