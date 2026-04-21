// functions/00af8 — 28 functions
#include "libGameKindred.h"




void thunk_FUN_00af83e4(void)

{
  FUN_00e6ce7c("MARKET_GLORY_EXPLANATION_TITLE",0);
  FUN_00e6ce7c("MARKET_GLORY_EXPLANATION_MESSAGE",0);
  FUN_00e6ce7c("GENERIC_DIALOG_OKAY",0);
  FUN_009b8d90();
  FUN_009bb9fc();
  return;
}




void thunk_FUN_00af8428(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = FUN_00e6ce7c("MARKET_OPAL_EXPLANATION_TITLE",0);
  uVar2 = FUN_00e6ce7c("MARKET_OPAL_EXPLANATION_MESSAGE",0);
  uVar3 = FUN_00e6ce7c("GENERIC_DIALOG_OKAY",0);
  uVar4 = FUN_00e6ce7c("MARKET_DIALOG_GET_OPALS",0);
  FUN_00a9b9f8(uVar1,uVar2,uVar3,uVar4,&DAT_03210450,param_1,0,FUN_00af84d0,0);
  return;
}




void FUN_00af8228(long param_1,undefined4 param_2)

{
  long lVar1;
  undefined8 local_48;
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00e70510(&local_48);
  FUN_00e70e18(&local_48,&DAT_01bb6d43,param_2);
  FUN_00ab7498(param_1 + 0xb8,&local_48);
  FUN_00af7d24(param_1);
  if (local_40 != (void *)0x0) {
    operator_delete__(local_40);
    local_48 = 0;
    local_40 = (void *)0x0;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00af82b8(long param_1,undefined4 param_2)

{
  long lVar1;
  undefined8 local_48;
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00e70510(&local_48);
  FUN_00e70e18(&local_48,&DAT_01bb6d43,param_2);
  FUN_00ab7498(param_1 + 0x1858,&local_48);
  FUN_00af7d24(param_1);
  if (local_40 != (void *)0x0) {
    operator_delete__(local_40);
    local_48 = 0;
    local_40 = (void *)0x0;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00af834c(long param_1,undefined4 param_2)

{
  long lVar1;
  undefined8 local_48;
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00e70510(&local_48);
  FUN_00e70e18(&local_48,&DAT_01bb6d43,param_2);
  FUN_00ab7498(param_1 + 0x2ff8,&local_48);
  FUN_00af7d24(param_1);
  if (local_40 != (void *)0x0) {
    operator_delete__(local_40);
    local_48 = 0;
    local_40 = (void *)0x0;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00af83e4(void)

{
  FUN_00e6ce7c("MARKET_GLORY_EXPLANATION_TITLE",0);
  FUN_00e6ce7c("MARKET_GLORY_EXPLANATION_MESSAGE",0);
  FUN_00e6ce7c("GENERIC_DIALOG_OKAY",0);
  FUN_009b8d90();
  FUN_009bb9fc();
  return;
}




void FUN_00af8428(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = FUN_00e6ce7c("MARKET_OPAL_EXPLANATION_TITLE",0);
  uVar2 = FUN_00e6ce7c("MARKET_OPAL_EXPLANATION_MESSAGE",0);
  uVar3 = FUN_00e6ce7c("GENERIC_DIALOG_OKAY",0);
  uVar4 = FUN_00e6ce7c("MARKET_DIALOG_GET_OPALS",0);
  FUN_00a9b9f8(uVar1,uVar2,uVar3,uVar4,&DAT_03210450,param_1,0,FUN_00af84d0,0);
  return;
}




void FUN_00af84d0(void)

{
  FUN_009b8d90();
  FUN_009bba7c();
  return;
}




void FUN_00af84e4(void)

{
  FUN_009b8d90();
  FUN_009bba7c();
  return;
}




void FUN_00af84f8(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0198ab78();
  param_1[2] = uVar1;
  *(undefined4 *)(param_1 + 1) = 0x7000000;
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = &PTR_FUN_027daa08;
  param_1[3] = &PTR_FUN_027daa48;
  FUN_0198ab90(param_1 + 6);
  param_1[0x11] = param_3;
  FUN_0198ab3c(param_1 + 6,param_2,param_1 + 3);
  param_1[0x10] = 0x3f80000000000000;
  param_1[0xf] = 0;
  param_1[0xe] = 0x3f800000;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0x3f80000000000000;
  param_1[10] = 0;
  param_1[9] = 0x3f800000;
  return;
}




void FUN_00af85a4(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1 + 6;
  *param_1 = &PTR_FUN_027daa08;
  param_1[3] = &PTR_FUN_027daa48;
  FUN_0198acb4(puVar1);
  FUN_0198ab58(puVar1);
  thunk_FUN_0198aba0(puVar1);
  return;
}




void FUN_00af85f0(long param_1)

{
  FUN_00af85a4(param_1 + -0x18);
  return;
}




void FUN_00af85f8(void *param_1)

{
  FUN_00af85a4();
  operator_delete(param_1);
  return;
}




void FUN_00af861c(long param_1)

{
  FUN_00af85a4((void *)(param_1 + -0x18));
  operator_delete((void *)(param_1 + -0x18));
  return;
}




void FUN_00af8644(long param_1,int param_2)

{
  if (param_2 == 0) {
    FUN_0198aba0(param_1 + 0x30);
    return;
  }
  if ((param_2 == 1) && (*(long *)(param_1 + 0x88) != 0)) {
    FUN_0198ac34(param_1 + 0x30);
    return;
  }
  return;
}




void FUN_00af866c(long param_1)

{
  FUN_00af8644(param_1 + -0x18);
  return;
}




void FUN_00af8674(long param_1,uint param_2)

{
  undefined8 uVar1;
  
  if ((param_2 & 1) == 0) {
    uVar1 = FUN_0198ab78();
  }
  else {
    uVar1 = FUN_0198ab84();
  }
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  return;
}




void FUN_00af86a4(undefined8 *param_1,undefined8 param_2)

{
  FUN_0199b368();
  *param_1 = &PTR_FUN_027dabd0;
  param_1[0x15] = param_2;
  param_1[0x16] = 0;
  return;
}




void FUN_00af86dc(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0xb0) = param_2;
  return;
}




void FUN_00af86e4(float param_1,long param_2,float *param_3)

{
  long lVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  float fStack_80;
  float local_7c;
  long local_78;
  
  lVar1 = tpidr_el0;
  local_78 = *(long *)(lVar1 + 0x28);
  FUN_00f00238(&local_7c,&fStack_80);
  (**(code **)(**(long **)(param_2 + 0xa8) + 0x68))(*(long **)(param_2 + 0xa8),&local_88,&local_90);
  fVar7 = fStack_80 - local_84;
  local_84 = fStack_80 - local_8c;
  lVar2 = *(long *)(param_2 + 0xb0);
  fVar10 = local_84 / fStack_80;
  fVar5 = fVar7 - local_84;
  fVar11 = *(float *)(lVar2 + 0x28);
  fVar12 = *(float *)(lVar2 + 0x2c);
  local_8c = fVar7;
  fVar7 = tanf(*(float *)(lVar2 + 0x24) * 0.5 * 0.017453292);
  fVar4 = ((local_90 - local_88) / local_7c) * 0.5;
  fVar6 = (fVar5 / fStack_80) * 0.5;
  fVar9 = local_88 / local_7c + fVar4;
  fVar10 = fVar10 + fVar6;
  param_3[10] = (fVar11 + fVar12) / (fVar11 - fVar12);
  fVar5 = fVar11 + fVar11;
  fVar8 = (fVar9 * -(fVar11 * fVar7) * param_1) / fVar4;
  fVar3 = (fVar10 * -(fVar11 * fVar7)) / fVar6;
  fVar4 = ((1.0 - fVar9) * fVar11 * fVar7 * param_1) / fVar4;
  fVar6 = ((1.0 - fVar10) * fVar11 * fVar7) / fVar6;
  fVar7 = fVar4 - fVar8;
  fVar9 = fVar6 - fVar3;
  param_3[0xe] = (fVar5 * fVar12) / (fVar11 - fVar12);
  param_3[8] = (fVar8 + fVar4) / fVar7;
  param_3[9] = (fVar3 + fVar6) / fVar9;
  param_3[0xd] = 0.0;
  param_3[6] = 0.0;
  param_3[7] = 0.0;
  param_3[1] = 0.0;
  param_3[2] = 0.0;
  param_3[3] = 0.0;
  param_3[4] = 0.0;
  param_3[0xf] = 0.0;
  param_3[0xb] = -1.0;
  param_3[0xc] = 0.0;
  *param_3 = fVar5 / fVar7;
  param_3[5] = fVar5 / fVar9;
  if (*(long *)(lVar1 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00af88c0(undefined8 *param_1)

{
  *param_1 = CONCAT44(-(float)((ulong)*param_1 >> 0x20),-(float)*param_1);
  *(float *)(param_1 + 1) = -*(float *)(param_1 + 1);
  param_1[4] = CONCAT44(-(float)((ulong)param_1[4] >> 0x20),-(float)param_1[4]);
  *(float *)(param_1 + 5) = -*(float *)(param_1 + 5);
  return;
}




void FUN_00af88f4(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float local_138;
  float fStack_134;
  float fStack_130;
  undefined4 uStack_12c;
  float local_128;
  float fStack_124;
  float fStack_120;
  undefined4 uStack_11c;
  float local_118;
  float fStack_114;
  float fStack_110;
  undefined4 uStack_10c;
  float local_108;
  float fStack_104;
  float fStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  long local_78;
  
  lVar1 = tpidr_el0;
  local_78 = *(long *)(lVar1 + 0x28);
  FUN_00af86e4(param_1,&local_b8);
  pfVar4 = *(float **)(param_1 + 0xb0);
  fVar9 = *pfVar4;
  fVar10 = pfVar4[1];
  fVar17 = pfVar4[2];
  fVar14 = pfVar4[6];
  fVar15 = pfVar4[7];
  fVar7 = pfVar4[8];
  fVar11 = pfVar4[3] - fVar9;
  fVar12 = pfVar4[4] - fVar10;
  fVar13 = pfVar4[5] - fVar17;
  fVar6 = fVar11 * fVar11 + fVar12 * fVar12 + fVar13 * fVar13;
  fVar5 = SQRT(fVar6);
  if (NAN(fVar5)) {
    fVar5 = sqrtf(fVar6);
  }
  fVar12 = fVar12 / fVar5;
  fVar13 = fVar13 / fVar5;
  fVar11 = fVar11 / fVar5;
  fVar8 = fVar15 * fVar13 - fVar7 * fVar12;
  fVar16 = fVar7 * fVar11 - fVar14 * fVar13;
  fVar6 = fVar14 * fVar12 - fVar15 * fVar11;
  fVar7 = fVar6 * fVar6 + fVar8 * fVar8 + fVar16 * fVar16;
  fVar5 = SQRT(fVar7);
  if (NAN(fVar5)) {
    fVar5 = sqrtf(fVar7);
  }
  fVar8 = fVar8 / fVar5;
  fVar16 = fVar16 / fVar5;
  fVar6 = fVar6 / fVar5;
  local_128 = fVar12 * fVar6 - fVar13 * fVar16;
  local_118 = -fVar11;
  fStack_124 = fVar13 * fVar8 - fVar11 * fVar6;
  fStack_114 = -fVar12;
  fStack_110 = -fVar13;
  local_138 = -fVar8;
  fStack_134 = -fVar16;
  fStack_130 = -fVar6;
  fStack_120 = fVar11 * fVar16 - fVar12 * fVar8;
  uStack_12c = 0;
  uStack_11c = 0;
  uStack_10c = 0;
  uStack_fc = 0x3f800000;
  local_108 = fVar9;
  fStack_104 = fVar10;
  fStack_100 = fVar17;
  lVar2 = FUN_009b8d90();
  *(ulong *)(lVar2 + 0xe378) = CONCAT44(uStack_12c,fStack_130);
  *(ulong *)(lVar2 + 0xe370) = CONCAT44(fStack_134,local_138);
  *(ulong *)(lVar2 + 0xe388) = CONCAT44(uStack_11c,fStack_120);
  *(ulong *)(lVar2 + 0xe380) = CONCAT44(fStack_124,local_128);
  *(ulong *)(lVar2 + 0xe398) = CONCAT44(uStack_10c,fStack_110);
  *(ulong *)(lVar2 + 0xe390) = CONCAT44(fStack_114,local_118);
  *(ulong *)(lVar2 + 0xe3a8) = CONCAT44(uStack_fc,fStack_100);
  *(ulong *)(lVar2 + 0xe3a0) = CONCAT44(fStack_104,local_108);
  FUN_00967cc0(&local_f8,&local_138);
  *(undefined8 *)(param_1 + 0x40) = uStack_c0;
  *(undefined8 *)(param_1 + 0x38) = local_c8;
  *(undefined8 *)(param_1 + 0x30) = uStack_d0;
  *(undefined8 *)(param_1 + 0x28) = local_d8;
  *(undefined8 *)(param_1 + 0x20) = uStack_e0;
  *(undefined8 *)(param_1 + 0x18) = local_e8;
  *(undefined8 *)(param_1 + 0x10) = uStack_f0;
  *(undefined8 *)(param_1 + 8) = local_f8;
  *(undefined8 *)(param_1 + 0x60) = uStack_a0;
  *(undefined8 *)(param_1 + 0x58) = local_a8;
  *(undefined8 *)(param_1 + 0x70) = uStack_90;
  *(undefined8 *)(param_1 + 0x68) = local_98;
  *(undefined8 *)(param_1 + 0x80) = uStack_80;
  *(undefined8 *)(param_1 + 0x78) = local_88;
  *(undefined8 *)(param_1 + 0x50) = uStack_b0;
  *(undefined8 *)(param_1 + 0x48) = local_b8;
  uVar3 = FUN_01997b28();
  FUN_00f2e304(4,uVar3,param_1 + 8);
  if (*(long *)(lVar1 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00af8b20(undefined8 *param_1)

{
  FUN_00f11234();
  param_1[0x34] = 0;
  *param_1 = &PTR_FUN_027daa70;
  FUN_0199b368(param_1 + 0x35);
  param_1[0x4a] = param_1;
  param_1[0x35] = &PTR_FUN_027dabd0;
  param_1[0x50] = 0;
  param_1[0x4f] = 0;
  param_1[0x4d] = 0;
  param_1[0x4c] = 0;
  *(undefined4 *)(param_1 + 0x4e) = 0;
  param_1[0x4b] = 0;
  *(undefined4 *)(param_1 + 0x51) = 0xffffffff;
  param_1[0x53] = 0;
  param_1[0x52] = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  param_1[0x56] = 0;
  param_1[0x55] = 0;
  *(undefined4 *)(param_1 + 0x57) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x5a) = 0;
  param_1[0x59] = 0;
  param_1[0x58] = 0;
  param_1[0x5c] = 0;
  param_1[0x5b] = 0;
  *(undefined4 *)(param_1 + 0x5d) = 0xffffffff;
  param_1[0x62] = 0;
  param_1[0x5f] = 0;
  param_1[0x5e] = 0;
  param_1[0x61] = 0;
  param_1[0x60] = 0;
  FUN_0198f4cc(param_1 + 99);
  param_1[0x74] = 0;
  param_1[0x73] = 0;
  param_1[0x72] = 0;
  param_1[0x71] = 0;
  *(undefined1 *)(param_1 + 0x75) = 0;
  param_1[0x31] = FUN_00af8bf8;
  param_1[0x32] = param_1;
  *(uint *)((long)param_1 + 0x84) = *(uint *)((long)param_1 + 0x84) & 0xfffffffb;
  return;
}




void FUN_00af8bf8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00afad08(param_3,param_1,param_2);
  return;
}




void FUN_00af8c0c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027daa70;
  FUN_00af8c84();
  if ((*(byte *)(param_1 + 0x72) & 1) != 0) {
    operator_delete((void *)param_1[0x74]);
  }
  thunk_FUN_0198f500(param_1 + 99);
  if ((void *)param_1[0x5f] != (void *)0x0) {
    operator_delete__((void *)param_1[0x5f]);
    param_1[0x5f] = 0;
    param_1[0x5e] = 0;
  }
  FUN_00af8f4c(param_1 + 0x58);
  FUN_00af8ff8(param_1 + 0x52);
  FUN_00af907c(param_1 + 0x4c);
  FUN_00f13d08(param_1);
  return;
}




void FUN_00af8c84(long param_1)

{
  uint uVar1;
  uint uVar2;
  long *plVar3;
  undefined8 uVar4;
  ulong uVar5;
  uint uVar6;
  uint uVar7;
  void *pvVar8;
  undefined8 uVar9;
  
  *(uint *)(param_1 + 0x84) = *(uint *)(param_1 + 0x84) & 0xfffffffb;
  if (*(long *)(param_1 + 0x2f8) != 0) {
    *(undefined4 *)(param_1 + 0x2f0) = 0;
  }
  if (*(long *)(param_1 + 0x310) != 0) {
    FUN_0198fe30(param_1 + 0x318);
    *(undefined8 *)(param_1 + 0x310) = 0;
  }
  uVar1 = *(uint *)(param_1 + 0x260);
  *(undefined8 *)(param_1 + 0x1a0) = 0;
  uVar2 = 0;
  do {
    uVar6 = uVar2;
    uVar5 = (ulong)uVar6;
    uVar7 = uVar1;
    if (uVar1 <= uVar6) break;
    uVar2 = uVar6 + 1;
  } while (*(int *)(*(long *)(param_1 + 0x268) + uVar5 * 8 + 4) == -1);
joined_r0x00af8d00:
  if (uVar1 != uVar6) {
    plVar3 = *(long **)(*(long *)(param_1 + 0x280) +
                       (ulong)*(uint *)(*(long *)(param_1 + 0x268) + uVar5 * 8 + 4) * 8);
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
      uVar7 = *(uint *)(param_1 + 0x260);
    }
    uVar6 = (uint)uVar5;
    do {
      uVar6 = uVar6 + 1;
      uVar5 = (ulong)uVar6;
      if (uVar7 <= uVar6) break;
    } while (*(int *)(*(long *)(param_1 + 0x268) + uVar5 * 8 + 4) == -1);
    goto joined_r0x00af8d00;
  }
  FUN_00af9834((uint *)(param_1 + 0x260));
  uVar1 = *(uint *)(param_1 + 0x290);
  uVar2 = 0;
  do {
    uVar7 = uVar2;
    uVar5 = (ulong)uVar7;
    if (uVar1 <= uVar7) break;
    uVar2 = uVar7 + 1;
  } while (*(int *)(*(long *)(param_1 + 0x298) + uVar5 * 8 + 4) == -1);
joined_r0x00af8dac:
  if (uVar1 != uVar7) {
    uVar9 = *(undefined8 *)
             (*(long *)(param_1 + 0x2b0) +
             (ulong)*(uint *)(*(long *)(param_1 + 0x298) + uVar5 * 8 + 4) * 8);
    uVar4 = FUN_0198ff3c();
    FUN_019901e8(uVar4,uVar9);
    uVar7 = (uint)uVar5;
    do {
      uVar7 = uVar7 + 1;
      uVar5 = (ulong)uVar7;
      if (*(uint *)(param_1 + 0x290) <= uVar7) break;
    } while (*(int *)(*(long *)(param_1 + 0x298) + uVar5 * 8 + 4) == -1);
    goto joined_r0x00af8dac;
  }
  FUN_00af98a4(param_1 + 0x290);
  FUN_0198f500(param_1 + 0x318);
  if (*(long *)(param_1 + 0x388) != 0) {
    FUN_01995718();
    *(undefined8 *)(param_1 + 0x388) = 0;
  }
  FUN_00af9914(param_1);
  uVar1 = *(uint *)(param_1 + 0x2c0);
  uVar2 = 0;
  do {
    uVar6 = uVar2;
    uVar5 = (ulong)uVar6;
    uVar7 = uVar1;
    if (uVar1 <= uVar6) break;
    uVar2 = uVar6 + 1;
  } while (*(int *)(*(long *)(param_1 + 0x2c8) + uVar5 * 8 + 4) == -1);
  do {
    if (uVar1 == uVar6) {
      FUN_00af99f0((uint *)(param_1 + 0x2c0));
      *(undefined8 *)(param_1 + 0x310) = 0;
      *(undefined8 *)(param_1 + 0x388) = 0;
      *(undefined8 *)(param_1 + 0x300) = 0;
      FUN_008fce60(param_1 + 0x390,&DAT_0320ffa8);
      if (*(long *)(param_1 + 0x308) != 0) {
        FUN_01996e00(*(long *)(param_1 + 0x308),0);
        pvVar8 = *(void **)(param_1 + 0x308);
        if (pvVar8 != (void *)0x0) {
          FUN_01996dbc(pvVar8);
          operator_delete(pvVar8);
        }
      }
      *(undefined8 *)(param_1 + 0x308) = 0;
      return;
    }
    plVar3 = (long *)(*(long *)(param_1 + 0x2e0) +
                      (ulong)*(uint *)(*(long *)(param_1 + 0x2c8) + uVar5 * 8 + 4) * 0xa8 + 0x48);
    if (*plVar3 != 0) {
      FUN_00f34268();
      *plVar3 = 0;
      uVar7 = *(uint *)(param_1 + 0x2c0);
    }
    uVar6 = (uint)uVar5;
    do {
      uVar6 = uVar6 + 1;
      uVar5 = (ulong)uVar6;
      if (uVar7 <= uVar6) break;
    } while (*(int *)(*(long *)(param_1 + 0x2c8) + uVar5 * 8 + 4) == -1);
  } while( true );
}




void FUN_00af8f4c(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  ulong uVar4;
  long lVar5;
  
  uVar2 = *param_1;
  if (uVar2 != 0) {
    uVar4 = 0;
    lVar5 = 4;
    do {
      uVar1 = *(uint *)(*(long *)(param_1 + 2) + lVar5);
      if (uVar1 != 0xffffffff) {
        puVar3 = (uint *)(*(long *)(param_1 + 8) + (ulong)uVar1 * 0xa8);
        (*(code *)**(undefined8 **)puVar3)(puVar3);
        *puVar3 = param_1[10];
        uVar2 = *param_1;
        param_1[10] = uVar1;
      }
      uVar4 = uVar4 + 1;
      lVar5 = lVar5 + 8;
    } while (uVar4 < uVar2);
  }
  if (*(void **)(param_1 + 8) != (void *)0x0) {
    operator_delete__(*(void **)(param_1 + 8));
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
  }
  if (*(void **)(param_1 + 2) != (void *)0x0) {
    operator_delete__(*(void **)(param_1 + 2));
    param_1[0] = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
  }
  return;
}




void FUN_00af8ff8(uint *param_1)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  uint uVar4;
  
  uVar4 = *param_1;
  if (uVar4 != 0) {
    uVar2 = 0;
    lVar3 = 4;
    do {
      uVar1 = *(uint *)(*(long *)(param_1 + 2) + lVar3);
      if (uVar1 != 0xffffffff) {
        *(uint *)(*(long *)(param_1 + 8) + (ulong)uVar1 * 8) = param_1[10];
        uVar4 = *param_1;
        param_1[10] = uVar1;
      }
      uVar2 = uVar2 + 1;
      lVar3 = lVar3 + 8;
    } while (uVar2 < uVar4);
  }
  if (*(void **)(param_1 + 8) != (void *)0x0) {
    operator_delete__(*(void **)(param_1 + 8));
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
  }
  if (*(void **)(param_1 + 2) != (void *)0x0) {
    operator_delete__(*(void **)(param_1 + 2));
    param_1[0] = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
  }
  return;
}

