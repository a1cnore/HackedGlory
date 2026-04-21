// functions/00a07 — 41 functions
#include "libGameKindred.h"




void FUN_00a070ac(long param_1)

{
  FUN_00a07204();
  *(undefined4 *)(param_1 + 0x68) = 0;
  return;
}




void FUN_00a070d0(long param_1)

{
  long lVar1;
  long local_38;
  code *pcStack_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  pcStack_30 = thunk_FUN_00a072e0;
  local_38 = param_1;
  FUN_00f03390(&local_38);
  *(undefined1 *)(param_1 + 0x6c) = 0;
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a07130(uint *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  if (*param_1 != 0) {
    puVar1 = *(undefined8 **)(param_1 + 2);
    do {
      if ((code *)*puVar1 == (code *)0x0) {
        (*(code *)puVar1[3])(puVar1[2],param_2);
      }
      else {
        (*(code *)*puVar1)(param_2);
      }
      puVar1 = puVar1 + 4;
    } while (puVar1 != (undefined8 *)(*(long *)(param_1 + 2) + (ulong)*param_1 * 0x20));
  }
  return;
}




void FUN_00a0719c(long param_1)

{
  *(undefined4 *)(param_1 + 0x60) = 0;
  FUN_00a07130(param_1 + 0x30,param_1 + 100);
  FUN_00a07130(param_1 + 0x40,(undefined4 *)(param_1 + 0x60));
  return;
}




void FUN_00a071d0(long param_1)

{
  *(undefined4 *)(param_1 + 0x48) = 0;
  FUN_00a07130(param_1 + 0x18,param_1 + 0x4c);
  FUN_00a07130(param_1 + 0x28,(undefined4 *)(param_1 + 0x48));
  return;
}




void FUN_00a07204(long param_1)

{
  long lVar1;
  long local_48;
  code *pcStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (*(char *)(param_1 + 0x6c) == '\0') {
    pcStack_40 = thunk_FUN_00a072e0;
    local_48 = param_1;
    FUN_00f02e98(0x3dcccccd,&local_48,0,1);
    *(undefined1 *)(param_1 + 0x6c) = 1;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a07284(long param_1)

{
  long lVar1;
  long local_38;
  code *pcStack_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  pcStack_30 = thunk_FUN_00a072e0;
  local_38 = param_1;
  FUN_00f03390(&local_38);
  *(undefined1 *)(param_1 + 0x6c) = 0;
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a072e0(float param_1,long param_2)

{
  long lVar1;
  float fVar2;
  float fVar3;
  int local_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  fVar3 = *(float *)(param_2 + 0x68);
  param_1 = fVar3 + param_1;
  fVar2 = (float)(int)param_1;
  *(float *)(param_2 + 0x68) = param_1;
  if ((float)(int)fVar3 != fVar2) {
    local_2c = (int)fVar2;
    FUN_00a07350(param_2 + 0x50,&local_2c);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a07350(uint *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  if (*param_1 != 0) {
    puVar1 = *(undefined8 **)(param_1 + 2);
    do {
      if ((code *)*puVar1 == (code *)0x0) {
        (*(code *)puVar1[3])(puVar1[2],param_2);
      }
      else {
        (*(code *)*puVar1)(param_2);
      }
      puVar1 = puVar1 + 4;
    } while (puVar1 != (undefined8 *)(*(long *)(param_1 + 2) + (ulong)*param_1 * 0x20));
  }
  return;
}




void thunk_FUN_00a072e0(float param_1,long param_2)

{
  long lVar1;
  float fVar2;
  float fVar3;
  int iStack_2c;
  long lStack_28;
  
  lVar1 = tpidr_el0;
  lStack_28 = *(long *)(lVar1 + 0x28);
  fVar3 = *(float *)(param_2 + 0x68);
  param_1 = fVar3 + param_1;
  fVar2 = (float)(int)param_1;
  *(float *)(param_2 + 0x68) = param_1;
  if ((float)(int)fVar3 != fVar2) {
    iStack_2c = (int)fVar2;
    FUN_00a07350(param_2 + 0x50,&iStack_2c);
  }
  if (*(long *)(lVar1 + 0x28) == lStack_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a073c0(void)

{
  long lVar1;
  long *plVar2;
  undefined **local_2a0 [5];
  undefined1 auStack_278 [16];
  undefined1 auStack_268 [16];
  undefined8 local_258;
  void *local_250;
  undefined1 auStack_248 [40];
  undefined1 auStack_220 [296];
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined4 local_e8;
  undefined8 local_e4;
  undefined8 uStack_dc;
  undefined8 local_d4;
  undefined8 local_cc;
  undefined4 local_c4;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined8 local_b4;
  undefined8 uStack_ac;
  undefined8 local_a4;
  undefined8 local_9c;
  undefined4 local_94;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  plVar2 = operator_new(0xc0);
  FUN_00a07564();
  DAT_03130a70 = plVar2;
  FUN_00e84dac(local_2a0);
  local_2a0[0] = &PTR_FUN_027bb448;
  memset(auStack_278,0,0x58);
  FUN_00964684(auStack_220);
  local_f8 = 0xffffffffffffffff;
  uStack_f0 = 0xffffffffffffffff;
  local_e8 = 0xffffffff;
  uStack_dc = 0x3f4000003e800000;
  local_e4 = 0;
  local_cc = 0;
  local_d4 = 0;
  local_b8 = 0xffffffff;
  local_c4 = 0;
  local_c0 = 0xffffffffffffffff;
  uStack_ac = 0x3f4000003e800000;
  local_b4 = 0;
  local_9c = 0;
  local_a4 = 0;
  local_94 = 0;
  (**(code **)(*DAT_03130a70 + 0x18))(DAT_03130a70,local_2a0);
  local_2a0[0] = &PTR_FUN_027bb448;
  FUN_009515b0(auStack_220);
  FUN_00951478(auStack_248,1);
  if (local_250 != (void *)0x0) {
    operator_delete__(local_250);
    local_258 = 0;
    local_250 = (void *)0x0;
  }
  FUN_0095132c(auStack_268,1);
  FUN_009512b0(auStack_278,1);
  FUN_00e84dd8(local_2a0);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a07524(void)

{
  if (DAT_03130a70 != (long *)0x0) {
    (**(code **)(*DAT_03130a70 + 8))();
  }
  DAT_03130a70 = (long *)0x0;
  return;
}




undefined8 FUN_00a07558(void)

{
  return DAT_03130a70;
}




void FUN_00a07564(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  FUN_00948cd8();
  puVar1 = param_1 + 5;
  *param_1 = &PTR_FUN_027c7658;
  param_1[3] = 0;
  param_1[4] = 0;
  do {
    *puVar1 = 0xffffffffffffffff;
    *(undefined4 *)(puVar1 + 1) = 0xffffffff;
    *(undefined8 *)((long)puVar1 + 0x14) = 0x3f4000003e800000;
    *(undefined8 *)((long)puVar1 + 0xc) = 0;
    *(undefined8 *)((long)puVar1 + 0x1c) = 0;
    puVar1[5] = 0x765dc60f;
    puVar1 = puVar1 + 6;
  } while (puVar1 != param_1 + 0x17);
  return;
}




void FUN_00a075d8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027c7658;
  if ((void *)param_1[4] != (void *)0x0) {
    operator_delete__((void *)param_1[4]);
    param_1[3] = 0;
    param_1[4] = 0;
  }
  FUN_00948d58(param_1);
  return;
}




void FUN_00a07618(void *param_1)

{
  FUN_00a075d8();
  operator_delete(param_1);
  return;
}




undefined1 FUN_00a0763c(long param_1)

{
  return *(undefined1 *)(param_1 + 0xb8);
}




undefined1 FUN_00a07644(long param_1)

{
  return *(undefined1 *)(param_1 + 0xb9);
}




undefined8 FUN_00a0764c(void)

{
  return 0xe;
}




undefined8 FUN_00a07654(void)

{
  return 8;
}




undefined8 FUN_00a0765c(void)

{
  return 10;
}




undefined8 FUN_00a07664(void)

{
  return 10;
}




long FUN_00a0766c(long param_1,uint param_2)

{
  return param_1 + (ulong)param_2 * 0x30 + 0x28;
}




void FUN_00a0767c(undefined8 *param_1)

{
  *(undefined8 *)((long)param_1 + 0x1c) = 0;
  *param_1 = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 1) = 0xffffffff;
  *(undefined8 *)((long)param_1 + 0x14) = 0x3f4000003e800000;
  *(undefined8 *)((long)param_1 + 0xc) = 0;
  param_1[5] = 0x765dc60f;
  return;
}




void FUN_00a076ac(long param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  float fVar3;
  
  *(undefined1 *)(param_1 + 0xb8) = 1;
  uVar1 = FUN_00a077ec(param_1,param_2 + 0x1b0,param_1 + 0x28);
  *(undefined1 *)(param_1 + 0xb9) = 1;
  FUN_00a07938(uVar1,param_2 + 0x1e0,param_1 + 0x58);
  *(undefined4 *)(param_1 + 0xa4) = *(undefined4 *)(param_2 + 0x22c);
  *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(param_2 + 0x218);
  FUN_008ffcf8("skillTier5v5",*(undefined4 *)(param_1 + 0x2c),1);
  FUN_008ffcf8("eloTier5v5",*(undefined4 *)(param_1 + 0x28),1);
  FUN_008ffcf8("skillTier3v3",*(undefined4 *)(param_1 + 0x5c),1);
  FUN_008ffcf8("eloTier3v3",*(undefined4 *)(param_1 + 0x58),1);
  fVar3 = (float)*(int *)(param_1 + 0x2c);
  if ((float)*(int *)(param_1 + 0x2c) <= (float)*(int *)(param_1 + 0x5c)) {
    fVar3 = (float)*(int *)(param_1 + 0x5c);
  }
  FUN_008ffcf8("highestSkillTier",(int)fVar3,1);
  fVar3 = (float)*(int *)(param_1 + 0x28);
  if ((float)*(int *)(param_1 + 0x28) <= (float)*(int *)(param_1 + 0x58)) {
    fVar3 = (float)*(int *)(param_1 + 0x58);
  }
  FUN_008ffcf8("highestEloTier",(int)fVar3,1);
  if (*(int *)(param_1 + 0x18) != 0) {
    lVar2 = *(long *)(param_1 + 0x20);
    do {
      if (*(code **)(lVar2 + 8) == (code *)0x0) {
        (**(code **)(lVar2 + 0x18))(*(undefined8 *)(lVar2 + 0x10));
      }
      else {
        (**(code **)(lVar2 + 8))();
      }
      lVar2 = lVar2 + 0x20;
    } while (lVar2 != *(long *)(param_1 + 0x20) + (ulong)*(uint *)(param_1 + 0x18) * 0x20);
  }
  return;
}




void FUN_00a077ec(undefined8 param_1,long param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  uVar1 = FUN_00937424("new5v5RankedDataEloBucket",0);
  param_3[1] = uVar1;
  param_3[2] = *(undefined4 *)(param_2 + 4);
  iVar2 = FUN_00937424("new5v5RankedDataEloBucket",0);
  param_3[7] = (float)iVar2;
  uVar1 = FUN_00937424("new5v5RankedDataEloBucket",0);
  *param_3 = uVar1;
  fVar3 = (float)NEON_fminnm(*(undefined4 *)(param_2 + 0xc),0x3f800000);
  if (fVar3 <= 0.0) {
    fVar3 = 0.0;
  }
  param_3[3] = fVar3;
  fVar3 = *(float *)(param_2 + 0x10);
  param_3[4] = fVar3;
  fVar4 = *(float *)(param_2 + 0x14);
  param_3[5] = fVar4;
  fVar5 = *(float *)(param_2 + 0x18);
  param_3[6] = fVar5;
  param_3[8] = *(undefined4 *)(param_2 + 0x20);
  *(undefined8 *)(param_3 + 10) = *(undefined8 *)(param_2 + 0x28);
  if ((fVar3 < 0.0) || (1.0 <= fVar3)) {
    fVar3 = 0.1;
    param_3[4] = 0x3dcccccd;
  }
  if ((fVar4 <= 0.0) || (1.0 <= fVar4)) {
    fVar4 = 0.4;
    param_3[5] = 0x3ecccccd;
  }
  if ((fVar5 <= 0.0) || (1.0 <= fVar5)) {
    fVar5 = 0.7;
    param_3[6] = 0x3f333333;
  }
  if (fVar4 <= fVar3) {
    fVar4 = fVar3 + 0.1;
    param_3[5] = fVar4;
  }
  if (fVar5 <= fVar4) {
    param_3[6] = 0x3f800000;
  }
  return;
}




void FUN_00a07938(undefined8 param_1,long param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  uVar1 = FUN_00937424("new3v3RankedDataEloBucket",0);
  param_3[1] = uVar1;
  param_3[2] = *(undefined4 *)(param_2 + 4);
  iVar2 = FUN_00937424("new3v3RankedDataEloBucket",0);
  param_3[7] = (float)iVar2;
  uVar1 = FUN_00937424("new3v3RankedDataEloBucket",0);
  *param_3 = uVar1;
  fVar3 = (float)NEON_fminnm(*(undefined4 *)(param_2 + 0xc),0x3f800000);
  if (fVar3 <= 0.0) {
    fVar3 = 0.0;
  }
  param_3[3] = fVar3;
  fVar3 = *(float *)(param_2 + 0x10);
  param_3[4] = fVar3;
  fVar4 = *(float *)(param_2 + 0x14);
  param_3[5] = fVar4;
  fVar5 = *(float *)(param_2 + 0x18);
  param_3[6] = fVar5;
  param_3[8] = *(undefined4 *)(param_2 + 0x20);
  *(undefined8 *)(param_3 + 10) = *(undefined8 *)(param_2 + 0x28);
  if ((fVar3 < 0.0) || (1.0 <= fVar3)) {
    fVar3 = 0.1;
    param_3[4] = 0x3dcccccd;
  }
  if ((fVar4 <= 0.0) || (1.0 <= fVar4)) {
    fVar4 = 0.4;
    param_3[5] = 0x3ecccccd;
  }
  if ((fVar5 <= 0.0) || (1.0 <= fVar5)) {
    fVar5 = 0.7;
    param_3[6] = 0x3f333333;
  }
  if (fVar4 <= fVar3) {
    fVar4 = fVar3 + 0.1;
    param_3[5] = fVar4;
  }
  if (fVar5 <= fVar4) {
    param_3[6] = 0x3f800000;
  }
  return;
}




void FUN_00a07a84(void)

{
  void *pvVar1;
  
  if (DAT_03130a78 == (void *)0x0) {
    pvVar1 = operator_new(0x230);
    FUN_00a07afc();
    DAT_03130a78 = pvVar1;
  }
  return;
}




void FUN_00a07abc(void)

{
  if (DAT_03130a78 != (long *)0x0) {
    (**(code **)(*DAT_03130a78 + 8))();
    DAT_03130a78 = (long *)0x0;
  }
  return;
}




undefined8 FUN_00a07af0(void)

{
  return DAT_03130a78;
}




void FUN_00a07afc(undefined8 *param_1)

{
  long lVar1;
  undefined8 *local_38;
  code *pcStack_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00e83560();
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  *param_1 = &PTR_FUN_027c79f0;
  param_1[4] = 0;
  param_1[3] = 0;
  FUN_00e84dac(param_1 + 9);
  param_1[9] = &PTR_FUN_027c7a20;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0x11] = param_1 + 0x12;
  param_1[0x16] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = param_1 + 0x15;
  param_1[0x19] = 0;
  param_1[0x18] = 0;
  param_1[0x17] = param_1 + 0x18;
  param_1[0x1c] = 0;
  param_1[0x1b] = 0;
  param_1[0x1a] = param_1 + 0x1b;
  FUN_00e84dac(param_1 + 0x1e);
  param_1[0x1e] = &PTR_FUN_027c7a50;
  param_1[0x28] = 0;
  param_1[0x27] = 0;
  param_1[0x26] = 0;
  param_1[0x25] = 0;
  param_1[0x24] = 0;
  param_1[0x23] = 0;
  FUN_00e84dac(param_1 + 0x2a);
  param_1[0x2a] = &PTR_FUN_027bb778;
  param_1[0x34] = 0;
  param_1[0x33] = 0;
  param_1[0x32] = 0;
  param_1[0x31] = 0;
  param_1[0x30] = 0;
  param_1[0x2f] = 0;
  param_1[0x38] = 0;
  param_1[0x37] = 0;
  param_1[0x36] = param_1 + 0x37;
  param_1[0x39] = param_1 + 0x3a;
  param_1[0x3b] = 0;
  param_1[0x3a] = 0;
  param_1[0x3e] = 0;
  param_1[0x3d] = 0;
  param_1[0x3c] = param_1 + 0x3d;
  param_1[0x3f] = param_1 + 0x40;
  param_1[0x41] = 0;
  param_1[0x40] = 0;
  param_1[0x43] = 0;
  param_1[0x42] = 0;
  *(undefined8 *)((long)param_1 + 0x225) = 0;
  param_1[0x44] = 0;
  pcStack_30 = FUN_00a08eb8;
  local_38 = param_1;
  FUN_00f02e98(0x3dcccccd,&local_38,0,1);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a07c84(undefined8 *param_1)

{
  long lVar1;
  undefined8 *local_48;
  code *pcStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_027c79f0;
  pcStack_40 = FUN_00a08eb8;
  local_48 = param_1;
  FUN_00f03390(&local_48);
  if ((*(byte *)(param_1 + 0x42) & 1) != 0) {
    operator_delete((void *)param_1[0x44]);
  }
  FUN_00a086fc(param_1 + 0x3f,param_1[0x40]);
  FUN_00a086fc(param_1 + 0x3c,param_1[0x3d]);
  FUN_00a08748(param_1 + 0x39,param_1[0x3a]);
  FUN_00a08748(param_1 + 0x36,param_1[0x37]);
  param_1[0x2a] = &PTR_FUN_027bb778;
  if ((*(byte *)(param_1 + 0x32) & 1) != 0) {
    operator_delete((void *)param_1[0x34]);
  }
  FUN_00e84dd8(param_1 + 0x2a);
  param_1[0x1e] = &PTR_FUN_027c7a50;
  if ((*(byte *)(param_1 + 0x26) & 1) != 0) {
    operator_delete((void *)param_1[0x28]);
  }
  FUN_00e84dd8(param_1 + 0x1e);
  param_1[9] = &PTR_FUN_027c7a20;
  FUN_00a08748(param_1 + 0x1a,param_1[0x1b]);
  FUN_00a08748(param_1 + 0x17,param_1[0x18]);
  FUN_00a086fc(param_1 + 0x14,param_1[0x15]);
  FUN_00a086fc(param_1 + 0x11,param_1[0x12]);
  FUN_00e84dd8(param_1 + 9);
  if ((void *)param_1[8] != (void *)0x0) {
    operator_delete__((void *)param_1[8]);
    param_1[7] = 0;
    param_1[8] = 0;
  }
  if ((void *)param_1[6] != (void *)0x0) {
    operator_delete__((void *)param_1[6]);
    param_1[5] = 0;
    param_1[6] = 0;
  }
  if ((void *)param_1[4] != (void *)0x0) {
    operator_delete__((void *)param_1[4]);
    param_1[3] = 0;
    param_1[4] = 0;
  }
  FUN_00e835e0(param_1);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a07e10(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027c7a50;
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    operator_delete((void *)param_1[10]);
  }
  FUN_00e84dd8(param_1);
  return;
}




void FUN_00a07e50(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027c7a20;
  FUN_00a08748(param_1 + 0x11,param_1[0x12]);
  FUN_00a08748(param_1 + 0xe,param_1[0xf]);
  FUN_00a086fc(param_1 + 0xb,param_1[0xc]);
  FUN_00a086fc(param_1 + 8,param_1[9]);
  FUN_00e84dd8(param_1);
  return;
}




void FUN_00a07eac(void *param_1)

{
  FUN_00a07c84();
  operator_delete(param_1);
  return;
}




undefined1 FUN_00a07ed0(long param_1)

{
  return *(undefined1 *)(param_1 + 0x22c);
}




void FUN_00a07ed8(long param_1)

{
  if (*(char *)(param_1 + 0x22c) != '\0') {
    return;
  }
  FUN_00a07ee8();
  return;
}




void FUN_00a07ee8(long param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_00e80f6c();
  if (((uVar1 & 1) != 0) && (uVar1 = FUN_0093dbe8(), (uVar1 & 1) == 0)) {
    FUN_00e828dc(param_1 + 0x48);
    return;
  }
  return;
}




void FUN_00a07f24(long param_1)

{
  *(undefined1 *)(param_1 + 0x22c) = 0;
  return;
}




void FUN_00a07f2c(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  byte local_50 [16];
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_008fa54c(local_50,*param_2);
  lVar2 = FUN_00a08ee4(param_1 + 0x1c8,local_50);
  if ((local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1 + 0x1d0 != lVar2);
}




ulong FUN_00a07fb0(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  byte local_50 [16];
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (*(int *)(param_2 + 4) == 0) {
    uVar4 = FUN_009580b8();
    uVar3 = FUN_00961804(uVar4,param_2[2],1);
    if (*(long *)(lVar1 + 0x28) == local_38) {
      return (ulong)((uint)uVar3 & 1);
    }
  }
  else {
    FUN_008fa54c(local_50,*param_2);
    lVar2 = FUN_00a08ee4(param_1 + 0x1b0,local_50);
    if ((local_50[0] & 1) != 0) {
      operator_delete(local_40);
    }
    uVar3 = (ulong)(param_1 + 0x1b8 != lVar2);
    if (*(long *)(lVar1 + 0x28) == local_38) {
      return uVar3;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}

