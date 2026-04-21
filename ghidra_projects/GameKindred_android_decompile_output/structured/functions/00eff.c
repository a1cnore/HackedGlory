// functions/00eff — 44 functions
#include "libGameKindred.h"




ushort * FUN_00eff008(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4)

{
  long lVar1;
  ushort uVar2;
  ushort *puVar3;
  
  lVar1 = DAT_03210d00;
  uVar2 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar2 == 0xffff) {
    puVar3 = (ushort *)0x0;
  }
  else {
    puVar3 = (ushort *)(DAT_03210d00 + 0x10 + (ulong)uVar2 * 0x40);
    if (uVar2 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar2 = 0xffff;
    }
    else {
      uVar2 = *puVar3;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar2;
    *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
    FUN_00efc8e8(puVar3);
    *(undefined ***)puVar3 = &PTR_FUN_02824bf0;
    puVar3[10] = 0;
    puVar3[0xb] = 0;
    puVar3[0xc] = 0;
    puVar3[0xd] = 0;
    puVar3[6] = 0;
    puVar3[7] = 0;
    puVar3[8] = 0;
    puVar3[9] = 0;
    puVar3[0x12] = 0;
    puVar3[0x13] = 0;
    puVar3[0x14] = 0;
    puVar3[0x15] = 0;
    puVar3[0xe] = 0;
    puVar3[0xf] = 0;
    puVar3[0x10] = 0;
    puVar3[0x11] = 0;
    *(undefined1 *)(puVar3 + 0x16) = 0;
    *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
  }
  *(undefined4 *)(puVar3 + 0x12) = param_1;
  *(undefined4 *)(puVar3 + 0x14) = param_2;
  *(undefined4 *)(puVar3 + 6) = param_3;
  *(undefined8 *)(puVar3 + 8) = param_4;
  return puVar3;
}




ushort * FUN_00eff108(undefined4 param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4,
                     undefined4 param_5)

{
  undefined4 uVar1;
  long lVar2;
  ushort uVar3;
  ushort *puVar4;
  
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
    puVar4[10] = 0;
    puVar4[0xb] = 0;
    puVar4[0xc] = 0;
    puVar4[0xd] = 0;
    puVar4[6] = 0;
    puVar4[7] = 0;
    puVar4[8] = 0;
    puVar4[9] = 0;
    puVar4[0x10] = 0;
    puVar4[0x11] = 0;
    puVar4[0x12] = 0;
    puVar4[0x13] = 0;
    *(undefined ***)puVar4 = &PTR_FUN_02824da0;
    *(undefined1 *)(puVar4 + 0x1a) = 0;
    puVar4[0x14] = 0xffff;
    puVar4[0x15] = 0xffff;
    puVar4[0x16] = 0xffff;
    puVar4[0x17] = 0xffff;
    *(int *)(lVar2 + 0x20020) = *(int *)(lVar2 + 0x20020) + 1;
  }
  *(undefined8 *)(puVar4 + 0x10) = param_2;
  uVar1 = *param_3;
  *(undefined4 *)(puVar4 + 0x18) = param_5;
  *(undefined4 *)(puVar4 + 6) = param_1;
  *(undefined8 *)(puVar4 + 8) = param_4;
  *(undefined4 *)(puVar4 + 0x14) = uVar1;
  return puVar4;
}




ushort * FUN_00eff224(undefined4 param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4)

{
  undefined4 uVar1;
  long lVar2;
  ushort uVar3;
  ushort *puVar4;
  
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
    puVar4[10] = 0;
    puVar4[0xb] = 0;
    puVar4[0xc] = 0;
    puVar4[0xd] = 0;
    puVar4[6] = 0;
    puVar4[7] = 0;
    puVar4[8] = 0;
    puVar4[9] = 0;
    puVar4[0x10] = 0;
    puVar4[0x11] = 0;
    puVar4[0x12] = 0;
    puVar4[0x13] = 0;
    *(undefined ***)puVar4 = &PTR_FUN_02824de8;
    *(undefined1 *)(puVar4 + 0x18) = 0;
    puVar4[0x14] = 0xffff;
    puVar4[0x15] = 0xffff;
    puVar4[0x16] = 0xffff;
    puVar4[0x17] = 0xffff;
    *(int *)(lVar2 + 0x20020) = *(int *)(lVar2 + 0x20020) + 1;
  }
  *(undefined8 *)(puVar4 + 0x10) = param_2;
  uVar1 = *param_3;
  *(undefined4 *)(puVar4 + 6) = param_1;
  *(undefined8 *)(puVar4 + 8) = param_4;
  *(undefined4 *)(puVar4 + 0x14) = uVar1;
  return puVar4;
}




ushort * FUN_00eff338(undefined4 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  ushort uVar2;
  ushort *puVar3;
  
  lVar1 = DAT_03210d00;
  uVar2 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar2 == 0xffff) {
    puVar3 = (ushort *)0x0;
  }
  else {
    puVar3 = (ushort *)(DAT_03210d00 + 0x10 + (ulong)uVar2 * 0x40);
    if (uVar2 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar2 = 0xffff;
    }
    else {
      uVar2 = *puVar3;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar2;
    *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
    FUN_00efc8e8(puVar3);
    *(undefined ***)puVar3 = &PTR_FUN_02824f08;
    puVar3[10] = 0;
    puVar3[0xb] = 0;
    puVar3[0xc] = 0;
    puVar3[0xd] = 0;
    puVar3[6] = 0;
    puVar3[7] = 0;
    puVar3[8] = 0;
    puVar3[9] = 0;
    puVar3[0x10] = 0;
    puVar3[0x11] = 0;
    puVar3[0x12] = 0;
    puVar3[0x13] = 0;
    puVar3[0x14] = 0;
    puVar3[0x15] = 0;
    puVar3[0x16] = 0;
    puVar3[0x17] = 0;
    *(undefined1 *)(puVar3 + 0x18) = 0;
    *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
  }
  *(undefined8 *)(puVar3 + 0x10) = param_3;
  *(undefined4 *)(puVar3 + 0x14) = param_1;
  *(undefined4 *)(puVar3 + 6) = param_2;
  *(undefined8 *)(puVar3 + 8) = param_4;
  return puVar3;
}




ushort * FUN_00eff430(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
                     undefined8 param_5)

{
  long lVar1;
  ushort uVar2;
  ushort *puVar3;
  undefined1 auVar4 [16];
  
  lVar1 = DAT_03210d00;
  uVar2 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar2 == 0xffff) {
    puVar3 = (ushort *)0x0;
  }
  else {
    puVar3 = (ushort *)(DAT_03210d00 + 0x10 + (ulong)uVar2 * 0x40);
    if (uVar2 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar2 = 0xffff;
    }
    else {
      uVar2 = *puVar3;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar2;
    *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
    FUN_00efc8e8(puVar3);
    auVar4 = NEON_fmov(0x3f800000,4);
    *(undefined ***)puVar3 = &PTR_FUN_02824f98;
    puVar3[10] = 0;
    puVar3[0xb] = 0;
    puVar3[0xc] = 0;
    puVar3[0xd] = 0;
    puVar3[6] = 0;
    puVar3[7] = 0;
    puVar3[8] = 0;
    puVar3[9] = 0;
    puVar3[0x10] = 0;
    puVar3[0x11] = 0;
    puVar3[0x12] = 0;
    puVar3[0x13] = 0;
    *(undefined1 *)(puVar3 + 0x1c) = 0;
    *(long *)(puVar3 + 0x18) = auVar4._8_8_;
    *(long *)(puVar3 + 0x14) = auVar4._0_8_;
    *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
  }
  *(undefined8 *)(puVar3 + 0x10) = param_4;
  *(undefined4 *)(puVar3 + 0x14) = param_1;
  *(undefined4 *)(puVar3 + 0x16) = param_2;
  *(undefined4 *)(puVar3 + 6) = param_3;
  *(undefined8 *)(puVar3 + 8) = param_5;
  return puVar3;
}




ushort * FUN_00eff53c(undefined4 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  ushort uVar2;
  ushort *puVar3;
  undefined8 uVar4;
  
  lVar1 = DAT_03210d00;
  uVar2 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar2 == 0xffff) {
    puVar3 = (ushort *)0x0;
  }
  else {
    puVar3 = (ushort *)(DAT_03210d00 + 0x10 + (ulong)uVar2 * 0x40);
    if (uVar2 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar2 = 0xffff;
    }
    else {
      uVar2 = *puVar3;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar2;
    *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
    FUN_00efc8e8(puVar3);
    uVar4 = NEON_fmov(0x3f800000,4);
    *(undefined ***)puVar3 = &PTR_FUN_02824d58;
    puVar3[10] = 0;
    puVar3[0xb] = 0;
    puVar3[0xc] = 0;
    puVar3[0xd] = 0;
    puVar3[6] = 0;
    puVar3[7] = 0;
    puVar3[8] = 0;
    puVar3[9] = 0;
    puVar3[0x10] = 0;
    puVar3[0x11] = 0;
    puVar3[0x12] = 0;
    puVar3[0x13] = 0;
    *(undefined1 *)(puVar3 + 0x18) = 0;
    *(undefined8 *)(puVar3 + 0x14) = uVar4;
    *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
  }
  *(undefined8 *)(puVar3 + 0x10) = param_3;
  *(undefined4 *)(puVar3 + 0x14) = param_1;
  *(undefined4 *)(puVar3 + 6) = param_2;
  *(undefined8 *)(puVar3 + 8) = param_4;
  return puVar3;
}




ushort * FUN_00eff63c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4)

{
  long lVar1;
  ushort uVar2;
  ushort *puVar3;
  undefined1 auVar4 [16];
  
  lVar1 = DAT_03210d00;
  uVar2 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar2 == 0xffff) {
    puVar3 = (ushort *)0x0;
  }
  else {
    puVar3 = (ushort *)(DAT_03210d00 + 0x10 + (ulong)uVar2 * 0x40);
    if (uVar2 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar2 = 0xffff;
    }
    else {
      uVar2 = *puVar3;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar2;
    *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
    FUN_00efc8e8(puVar3);
    auVar4 = NEON_fmov(0x3f800000,4);
    *(undefined ***)puVar3 = &PTR_FUN_02824e78;
    puVar3[10] = 0;
    puVar3[0xb] = 0;
    puVar3[0xc] = 0;
    puVar3[0xd] = 0;
    puVar3[6] = 0;
    puVar3[7] = 0;
    puVar3[8] = 0;
    puVar3[9] = 0;
    *(undefined1 *)(puVar3 + 0x16) = 0;
    *(long *)(puVar3 + 0x12) = auVar4._8_8_;
    *(long *)(puVar3 + 0xe) = auVar4._0_8_;
    *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
  }
  *(undefined4 *)(puVar3 + 0xe) = param_1;
  *(undefined4 *)(puVar3 + 0x10) = param_2;
  *(undefined4 *)(puVar3 + 6) = param_3;
  *(undefined8 *)(puVar3 + 8) = param_4;
  return puVar3;
}




ushort * FUN_00eff73c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
                     undefined8 param_5)

{
  long lVar1;
  ushort uVar2;
  ushort *puVar3;
  undefined1 auVar4 [16];
  
  lVar1 = DAT_03210d00;
  uVar2 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar2 == 0xffff) {
    puVar3 = (ushort *)0x0;
  }
  else {
    puVar3 = (ushort *)(DAT_03210d00 + 0x10 + (ulong)uVar2 * 0x40);
    if (uVar2 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar2 = 0xffff;
    }
    else {
      uVar2 = *puVar3;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar2;
    *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
    FUN_00efc8e8(puVar3);
    auVar4 = NEON_fmov(0x3f800000,4);
    *(undefined ***)puVar3 = &PTR_FUN_02824f50;
    puVar3[10] = 0;
    puVar3[0xb] = 0;
    puVar3[0xc] = 0;
    puVar3[0xd] = 0;
    puVar3[6] = 0;
    puVar3[7] = 0;
    puVar3[8] = 0;
    puVar3[9] = 0;
    puVar3[0x10] = 0;
    puVar3[0x11] = 0;
    puVar3[0x12] = 0;
    puVar3[0x13] = 0;
    *(undefined1 *)(puVar3 + 0x1c) = 0;
    *(long *)(puVar3 + 0x18) = auVar4._8_8_;
    *(long *)(puVar3 + 0x14) = auVar4._0_8_;
    *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
  }
  *(undefined8 *)(puVar3 + 0x10) = param_4;
  *(undefined4 *)(puVar3 + 0x14) = param_1;
  *(undefined4 *)(puVar3 + 0x16) = param_2;
  *(undefined4 *)(puVar3 + 6) = param_3;
  *(undefined8 *)(puVar3 + 8) = param_5;
  return puVar3;
}




ushort * FUN_00eff848(float param_1,uint param_2,undefined8 param_3)

{
  ushort *puVar1;
  long lVar2;
  ushort uVar3;
  ushort *puVar4;
  
  lVar2 = DAT_03210d00;
  if (param_2 == 0) {
    param_1 = 0.0;
  }
  else {
    param_1 = param_1 / (float)param_2;
  }
  uVar3 = *(ushort *)(DAT_03210d00 + 0x20010);
  puVar1 = (ushort *)(DAT_03210d00 + 0x10 + (ulong)uVar3 * 0x40);
  if (uVar3 == *(ushort *)(DAT_03210d00 + 0x20012)) {
    uVar3 = 0xffff;
  }
  else {
    uVar3 = *puVar1;
  }
  *(ushort *)(DAT_03210d00 + 0x20010) = uVar3;
  *(int *)(lVar2 + 0x20014) = *(int *)(lVar2 + 0x20014) + 1;
  FUN_00efc8e8(puVar1);
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  *(undefined ***)puVar1 = &PTR_FUN_027c1a60;
  *(int *)(lVar2 + 0x20020) = *(int *)(lVar2 + 0x20020) + 1;
  *(float *)(puVar1 + 6) = param_1;
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
    *(undefined ***)puVar4 = &PTR_FUN_02824ba8;
    puVar4[10] = 0;
    puVar4[0xb] = 0;
    puVar4[0xc] = 0;
    puVar4[0xd] = 0;
    puVar4[6] = 0;
    puVar4[7] = 0;
    puVar4[8] = 0;
    puVar4[9] = 0;
    puVar4[0x10] = 0;
    puVar4[0x11] = 0;
    puVar4[0x12] = 0;
    puVar4[0x13] = 0;
    puVar4[0x14] = 0;
    puVar4[0x15] = 0;
    puVar4[0x16] = 0;
    puVar4[0x17] = 0;
    puVar4[0x18] = 1;
    puVar4[0x19] = 0;
    *(int *)(lVar2 + 0x20020) = *(int *)(lVar2 + 0x20020) + 1;
  }
  FUN_00efd2dc(puVar4,param_3,puVar1,0);
  puVar4[0x18] = (ushort)param_2;
  return puVar4;
}




ushort * FUN_00eff9ec(undefined4 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  ushort uVar2;
  ushort *puVar3;
  
  lVar1 = DAT_03210d00;
  uVar2 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar2 == 0xffff) {
    puVar3 = (ushort *)0x0;
  }
  else {
    puVar3 = (ushort *)(DAT_03210d00 + 0x10 + (ulong)uVar2 * 0x40);
    if (uVar2 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar2 = 0xffff;
    }
    else {
      uVar2 = *puVar3;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar2;
    *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
    FUN_00efc8e8(puVar3);
    *(undefined ***)puVar3 = &PTR_FUN_028252f8;
    puVar3[10] = 0;
    puVar3[0xb] = 0;
    puVar3[0xc] = 0;
    puVar3[0xd] = 0;
    puVar3[6] = 0;
    puVar3[7] = 0;
    puVar3[8] = 0;
    puVar3[9] = 0;
    puVar3[0x14] = 0;
    puVar3[0x15] = 0;
    puVar3[0x16] = 0;
    puVar3[0x17] = 0;
    puVar3[0x18] = 0;
    puVar3[0x19] = 0;
    puVar3[0x1a] = 0;
    puVar3[0x1b] = 0;
    puVar3[0x10] = 0;
    puVar3[0x11] = 0;
    puVar3[0x12] = 0;
    puVar3[0x13] = 0;
    *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
  }
  *(undefined4 *)(puVar3 + 6) = param_1;
  if (param_2 == 0) {
    FUN_00e6a2fc("Inconsistency");
  }
  *(long *)(puVar3 + 0x10) = param_2;
  *(undefined8 *)(puVar3 + 0x18) = param_3;
  return puVar3;
}




void FUN_00effaec(void *param_1)

{
  FUN_00efc904();
  operator_delete(param_1);
  return;
}




void FUN_00effb10(void *param_1)

{
  FUN_00efc904();
  operator_delete(param_1);
  return;
}




void FUN_00effb34(void *param_1)

{
  FUN_00efc904();
  operator_delete(param_1);
  return;
}




void FUN_00effb58(void *param_1)

{
  FUN_00efc904();
  operator_delete(param_1);
  return;
}




void FUN_00effb7c(void *param_1)

{
  FUN_00efc904();
  operator_delete(param_1);
  return;
}




void FUN_00effba0(void *param_1)

{
  FUN_00efc904();
  operator_delete(param_1);
  return;
}




void FUN_00effbc4(void *param_1)

{
  FUN_00efc904();
  operator_delete(param_1);
  return;
}




void FUN_00effbe8(void *param_1)

{
  FUN_00efc904();
  operator_delete(param_1);
  return;
}




void FUN_00effc0c(void *param_1)

{
  FUN_00efc904();
  operator_delete(param_1);
  return;
}




void FUN_00effc30(void *param_1)

{
  FUN_00efc904();
  operator_delete(param_1);
  return;
}




void FUN_00effc54(void *param_1)

{
  FUN_00efc904();
  operator_delete(param_1);
  return;
}




void FUN_00effc78(void *param_1)

{
  FUN_00efc904();
  operator_delete(param_1);
  return;
}




void FUN_00effc9c(void *param_1)

{
  FUN_00efc904();
  operator_delete(param_1);
  return;
}




void FUN_00effcc0(void *param_1)

{
  FUN_00efc904();
  operator_delete(param_1);
  return;
}




void FUN_00effce4(void *param_1)

{
  FUN_00efc904();
  operator_delete(param_1);
  return;
}




void FUN_00effd08(void *param_1)

{
  FUN_00efc904();
  operator_delete(param_1);
  return;
}




void FUN_00effd2c(void *param_1)

{
  FUN_00efc904();
  operator_delete(param_1);
  return;
}




void FUN_00effd50(void *param_1)

{
  FUN_00efc904();
  operator_delete(param_1);
  return;
}




void FUN_00effd74(void *param_1)

{
  FUN_00efc904();
  operator_delete(param_1);
  return;
}




void FUN_00effd98(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_02824e30;
  if ((void *)param_1[4] != (void *)0x0) {
    operator_delete__((void *)param_1[4]);
    param_1[3] = 0;
    param_1[4] = 0;
  }
  FUN_00efc904(param_1);
  return;
}




void FUN_00effdd8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_02824e30;
  if ((void *)param_1[4] != (void *)0x0) {
    operator_delete__((void *)param_1[4]);
    param_1[3] = 0;
    param_1[4] = 0;
  }
  FUN_00efc904(param_1);
  operator_delete(param_1);
  return;
}




void FUN_00effe20(void *param_1)

{
  FUN_00efc904();
  operator_delete(param_1);
  return;
}




void FUN_00effe44(void *param_1)

{
  FUN_00efc904();
  operator_delete(param_1);
  return;
}




void FUN_00effe68(void *param_1)

{
  FUN_00efc904();
  operator_delete(param_1);
  return;
}




void FUN_00effe8c(void *param_1)

{
  FUN_00efc904();
  operator_delete(param_1);
  return;
}




void FUN_00effeb0(void *param_1)

{
  FUN_00efc904();
  operator_delete(param_1);
  return;
}




void FUN_00effed4(void *param_1)

{
  FUN_00efc904();
  operator_delete(param_1);
  return;
}




void FUN_00effef8(void *param_1)

{
  FUN_00efc904();
  operator_delete(param_1);
  return;
}




void FUN_00efff1c(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xefff20);
  (*pcVar1)();
}




void FUN_00efff20(void *param_1)

{
  FUN_00efc904();
  operator_delete(param_1);
  return;
}




void FUN_00efff44(long param_1)

{
  if (*(code **)(param_1 + 0x20) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00efff50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x30));
    return;
  }
  return;
}




void FUN_00efff58(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  
  *param_1 = &PTR_FUN_02825340;
  lVar2 = 1;
  puVar1 = param_1 + 2;
  do {
    *(short *)puVar1 = (short)lVar2;
    lVar2 = lVar2 + 1;
    puVar1 = puVar1 + 8;
  } while (lVar2 != 0x800);
  param_1[0x4002] = 0x7ff0000;
  *(undefined4 *)(param_1 + 0x4004) = 0;
  return;
}




void FUN_00efffa0(void)

{
  return;
}




void FUN_00efffa8(long param_1,undefined8 *param_2)

{
  ushort uVar1;
  undefined2 uVar2;
  short sVar3;
  int iVar4;
  
  (**(code **)*param_2)(param_2);
  *(int *)(param_1 + 0x20020) = *(int *)(param_1 + 0x20020) + -1;
  iVar4 = (int)(param_1 + 0x10);
  if (*(short *)(param_1 + 0x20010) == -1) {
    sVar3 = (short)((uint)((int)param_2 - iVar4) >> 6);
    *(short *)(param_1 + 0x20012) = sVar3;
    *(short *)(param_1 + 0x20010) = sVar3;
  }
  else {
    uVar1 = *(ushort *)(param_1 + 0x20012);
    uVar2 = (undefined2)((uint)((int)param_2 - iVar4) >> 6);
    *(undefined2 *)(param_1 + 0x20012) = uVar2;
    *(undefined2 *)(param_1 + 0x10 + (ulong)uVar1 * 0x40) = uVar2;
  }
  *(int *)(param_1 + 0x20014) = *(int *)(param_1 + 0x20014) + -1;
  return;
}

