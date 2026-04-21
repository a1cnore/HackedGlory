// functions/00b44 — 16 functions
#include "libGameKindred.h"




void FUN_00b445a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_00b45790(param_1,param_4);
  return;
}




void FUN_00b445b0(long param_1)

{
  long lVar1;
  undefined1 *puVar2;
  
  lVar1 = 3;
  puVar2 = (undefined1 *)(param_1 + 0x342c2);
  do {
    *puVar2 = 1;
    lVar1 = lVar1 + -1;
    puVar2 = puVar2 + 0xbd10;
  } while (lVar1 != 0);
  FUN_00b45264();
  return;
}




void FUN_00b445dc(undefined8 param_1)

{
  FUN_00b45660(param_1,1);
  return;
}




void FUN_00b445e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  FUN_00b4584c(param_1,param_4,param_5);
  return;
}




void FUN_00b445f4(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  
  puVar2 = param_1 + 0xafae;
  *param_1 = &PTR_FUN_027e14f0;
  param_1[0x17] = &PTR_FUN_027e1650;
  param_1[0x1a] = &PTR_FUN_027e19e8;
  lVar3 = -0x408;
  DAT_0313a0d0 = 0;
  do {
    FUN_00936630(puVar2);
    if ((*(byte *)(puVar2 + -5) & 1) != 0) {
      operator_delete((void *)puVar2[-3]);
    }
    if ((*(byte *)(puVar2 + -8) & 1) != 0) {
      operator_delete((void *)puVar2[-6]);
    }
    if ((*(byte *)(puVar2 + -0xb) & 1) != 0) {
      operator_delete((void *)puVar2[-9]);
    }
    if ((*(byte *)(puVar2 + -0xe) & 1) != 0) {
      operator_delete((void *)puVar2[-0xc]);
    }
    lVar3 = lVar3 + 0x158;
    puVar2 = puVar2 + -0x2b;
  } while (lVar3 != 0);
  FUN_00936630(param_1 + 0xaf2d);
  FUN_00b44844(param_1 + 0x979d);
  puVar2 = param_1 + 0x8bd5;
  puVar4 = param_1 + 0x979d;
  do {
    puVar1 = puVar4 + -0x17a2;
    *puVar1 = &PTR_FUN_027d72e8;
    if ((*(byte *)(puVar4 + -5) & 1) != 0) {
      operator_delete((void *)puVar4[-3]);
    }
    lVar3 = -0xbc30;
    puVar4 = puVar2;
    do {
      FUN_00ad1e04(puVar4);
      lVar3 = lVar3 + 0x5e18;
      puVar4 = puVar4 + -0xbc3;
    } while (lVar3 != 0);
    FUN_00f13d08(puVar1);
    puVar2 = puVar2 + -0x17a2;
    puVar4 = puVar1;
  } while (puVar1 != param_1 + 0x50b7);
  FUN_00f13d08(param_1 + 0x509e);
  puVar2 = param_1 + 0x44d6;
  puVar4 = param_1 + 0x509e;
  do {
    puVar1 = puVar4 + -0x17a2;
    *puVar1 = &PTR_FUN_027d72e8;
    if ((*(byte *)(puVar4 + -5) & 1) != 0) {
      operator_delete((void *)puVar4[-3]);
    }
    lVar3 = -0xbc30;
    puVar4 = puVar2;
    do {
      FUN_00ad1e04(puVar4);
      lVar3 = lVar3 + 0x5e18;
      puVar4 = puVar4 + -0xbc3;
    } while (lVar3 != 0);
    FUN_00f13d08(puVar1);
    puVar2 = puVar2 + -0x17a2;
    puVar4 = puVar1;
  } while (puVar1 != param_1 + 0x9b8);
  FUN_00f13d08(param_1 + 0x99f);
  FUN_009c7fa8(param_1 + 0x6e7);
  FUN_009c7fa8(param_1 + 0x42f);
  FUN_009c7fa8(param_1 + 0x177);
  FUN_00b1f8e8(param_1 + 0x1d);
  FUN_00e835e0(param_1 + 0x1a);
  FUN_00948d58(param_1 + 0x17);
  FUN_00f13d08(param_1);
  return;
}




void FUN_00b44844(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027eaa90;
  FUN_00936630(param_1 + 0x1772);
  FUN_00936630(param_1 + 0x1755);
  FUN_009c7fa8(param_1 + 0x149d);
  FUN_00f13d08(param_1 + 0x1486);
  param_1[0xda2] = &PTR_FUN_027e13a8;
  FUN_00b03c00(param_1 + 0xdfd);
  FUN_00f0d3a4(param_1 + 0xdd7);
  param_1[0xda2] = &PTR_FUN_027ead80;
  param_1[0xdb9] = &PTR_FUN_028266f0;
  param_1[0xdd0] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xdd3);
  FUN_00f13d08(param_1 + 0xdb9);
  FUN_00f13d08(param_1 + 0xda2);
  param_1[0x6be] = &PTR_FUN_027e13a8;
  FUN_00b03c00(param_1 + 0x719);
  FUN_00f0d3a4(param_1 + 0x6f3);
  param_1[0x6be] = &PTR_FUN_027ead80;
  param_1[0x6d5] = &PTR_FUN_028266f0;
  param_1[0x6ec] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x6ef);
  FUN_00f13d08(param_1 + 0x6d5);
  FUN_00f13d08(param_1 + 0x6be);
  param_1[0x13c] = &PTR_FUN_027e1260;
  FUN_00ac848c(param_1 + 0x197);
  FUN_00f0d3a4(param_1 + 0x171);
  param_1[0x13c] = &PTR_FUN_027ead80;
  param_1[0x153] = &PTR_FUN_028266f0;
  param_1[0x16a] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x16d);
  FUN_00f13d08(param_1 + 0x153);
  FUN_00f13d08(param_1 + 0x13c);
  *param_1 = &PTR_FUN_027da1e0;
  FUN_00f13d08(param_1 + 0x121);
  FUN_00f01868(param_1 + 0x110);
  FUN_00ed00e0(param_1 + 0x69);
  FUN_00f13d08(param_1 + 0x52);
  param_1[0x34] = &PTR_FUN_028266f0;
  param_1[0x4b] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x4e);
  FUN_00f13d08(param_1 + 0x34);
  FUN_00f13d08(param_1);
  return;
}




void FUN_00b44a24(long param_1)

{
  FUN_00b445f4(param_1 + -0xb8);
  return;
}




void FUN_00b44a2c(long param_1)

{
  FUN_00b445f4(param_1 + -0xd0);
  return;
}




void FUN_00b44a34(void *param_1)

{
  FUN_00b445f4();
  operator_delete(param_1);
  return;
}




void FUN_00b44a58(long param_1)

{
  FUN_00b445f4((void *)(param_1 + -0xb8));
  operator_delete((void *)(param_1 + -0xb8));
  return;
}




void FUN_00b44a80(long param_1)

{
  FUN_00b445f4((void *)(param_1 + -0xd0));
  operator_delete((void *)(param_1 + -0xd0));
  return;
}




void FUN_00b44aa8(long *param_1)

{
  if ((char)param_1[0xafcb] != '\0') {
    *(char *)(param_1 + 0xafcb) = '\0';
                    /* WARNING: Could not recover jumptable at 0x00b44ac8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x138))();
    return;
  }
  return;
}




void FUN_00b44ad0(long param_1)

{
  *(undefined1 *)(param_1 + 0x57e58) = 1;
  return;
}




void FUN_00b44ae4(long param_1)

{
  *(undefined1 *)(param_1 + 0x57e58) = 1;
  return;
}




void FUN_00b44af8(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined8 local_a0;
  float local_94;
  float local_90;
  float local_8c;
  long local_88;
  
  lVar3 = tpidr_el0;
  local_88 = *(long *)(lVar3 + 0x28);
  uVar4 = FUN_0092e8e0();
  FUN_00a9bd24(param_1,uVar4 & 1,&local_8c,&local_90,&local_94);
  fVar12 = local_8c - local_94;
  uVar5 = FUN_0092ea9c();
  lVar9 = param_1 + 0xe8;
  lVar6 = FUN_00b2097c(lVar9,0);
  fVar14 = *(float *)(lVar6 + 0x15b0);
  lVar6 = param_1 + 0x2178;
  fVar15 = *(float *)(param_1 + 300) + fVar14 * 0.5;
  fVar13 = 24.0;
  if ((uVar5 & 1) == 0) {
    fVar13 = 44.0;
  }
  fVar10 = (float)FUN_00f01c20(lVar6);
  lVar2 = param_1 + 0x3738;
  fVar11 = (float)FUN_00f01c20(lVar2);
  lVar1 = param_1 + 3000;
  FUN_00ab75d0(0,0x42c80000,((fVar12 * 0.4 - fVar10) - fVar11) + -96.0,lVar1);
  fVar10 = (float)FUN_00f01c20(lVar1);
  fVar10 = (fVar12 - fVar10 * 0.5) + -24.0 + 6.0;
  if ((*(float *)(param_1 + 0xbf8) != fVar10) || (*(float *)(param_1 + 0xbfc) != fVar15)) {
    *(float *)(param_1 + 0xbf8) = fVar10;
    *(float *)(param_1 + 0xbfc) = fVar15;
    FUN_0091ada4(lVar1);
  }
  local_a0 = 0x3f0000003f000000;
  (**(code **)(*(long *)(param_1 + 3000) + 0x28))(lVar1,&local_a0);
  fVar16 = *(float *)(param_1 + 0xbf8);
  fVar10 = (float)FUN_00f01c20(lVar1);
  fVar11 = (float)FUN_00f01c20(lVar6);
  fVar10 = ((fVar16 - fVar10 * 0.5) - fVar11 * 0.5) + -24.0;
  if ((*(float *)(param_1 + 0x21b8) != fVar10) || (*(float *)(param_1 + 0x21bc) != fVar15)) {
    *(float *)(param_1 + 0x21b8) = fVar10;
    *(float *)(param_1 + 0x21bc) = fVar15;
    FUN_0091ada4(lVar6);
  }
  local_a0 = 0x3f0000003f000000;
  (**(code **)(*(long *)(param_1 + 0x2178) + 0x28))(lVar6,&local_a0);
  fVar16 = *(float *)(param_1 + 0x21b8);
  fVar10 = (float)FUN_00f01c20(lVar6);
  fVar11 = (float)FUN_00f01c20(lVar2);
  fVar10 = ((fVar16 - fVar10 * 0.5) - fVar11 * 0.5) + -24.0;
  if ((*(float *)(param_1 + 0x3778) != fVar10) || (*(float *)(param_1 + 0x377c) != fVar15)) {
    *(float *)(param_1 + 0x3778) = fVar10;
    *(float *)(param_1 + 0x377c) = fVar15;
    FUN_0091ada4(lVar2);
  }
  local_a0 = 0x3f0000003f000000;
  (**(code **)(*(long *)(param_1 + 0x3738) + 0x28))(lVar2,&local_a0);
  fVar10 = *(float *)(param_1 + 0x3778);
  fVar15 = (float)FUN_00f01c20(lVar2);
  fVar16 = (fVar10 - fVar15 * 0.5) + -24.0;
  fVar15 = (float)FUN_00b20abc(lVar9,0,0,1,1);
  fVar11 = fVar12 * 0.5 - fVar15 * 0.5;
  fVar10 = (float)FUN_00b20abc(lVar9,0,0,1,1);
  fVar15 = fVar11 - ((fVar10 + fVar11) - fVar16);
  if (fVar10 + fVar11 <= fVar16) {
    fVar15 = fVar11;
  }
  if ((*(float *)(param_1 + 0x128) != fVar15) || (*(float *)(param_1 + 300) != fVar13)) {
    *(float *)(param_1 + 0x128) = fVar15;
    *(float *)(param_1 + 300) = fVar13;
    FUN_0091ada4(lVar9);
  }
  local_a0 = 0;
  (**(code **)(*(long *)(param_1 + 0xe8) + 0x28))(lVar9,&local_a0);
  fVar14 = fVar14 + *(float *)(param_1 + 300) + 24.0;
  lVar9 = 3;
  plVar7 = (long *)(param_1 + 0x4dc0);
  plVar8 = (long *)(param_1 + 0x285b8);
  fVar13 = (local_90 - DAT_02be3670) - fVar14;
  fVar12 = (fVar12 + -72.0 + -40.0) / 3.0;
  do {
    FUN_00f13f08(fVar12,fVar13,plVar7);
    FUN_00f13f08(fVar12,fVar13,plVar8);
    local_a0 = 0x3f000000;
    (**(code **)(*plVar7 + 0x28))(plVar7,&local_a0);
    local_a0 = 0x3f000000;
    (**(code **)(*plVar8 + 0x28))(plVar8,&local_a0);
    plVar7 = plVar7 + 0x17a2;
    lVar9 = lVar9 + -1;
    plVar8 = plVar8 + 0x17a2;
  } while (lVar9 != 0);
  lVar9 = param_1 + 0x4cf8;
  if ((*(float *)(param_1 + 0x4d38) != 40.0) || (*(float *)(param_1 + 0x4d3c) != fVar14)) {
    *(float *)(param_1 + 0x4d38) = 40.0;
    *(float *)(param_1 + 0x4d3c) = fVar14;
    FUN_0091ada4(lVar9);
  }
  FUN_00f0bc10(0,0,0x41c00000,&local_a0);
  FUN_00f0c168(lVar9,&local_a0);
  (**(code **)(*(long *)(param_1 + 0x4cf8) + 0x90))(lVar9);
  plVar7 = (long *)(param_1 + 0x284f0);
  if ((*(float *)(param_1 + 0x28530) != 40.0) || (*(float *)(param_1 + 0x28534) != fVar14)) {
    *(float *)(param_1 + 0x28530) = 40.0;
    *(float *)(param_1 + 0x28534) = fVar14;
    FUN_0091ada4(plVar7);
  }
  FUN_00f0bc10(0,0,0x41c00000,&local_a0);
  FUN_00f0c168(plVar7,&local_a0);
  (**(code **)(*plVar7 + 0x90))(plVar7);
  FUN_00bb848c(param_1 + 0x4bce8);
  if (*(long *)(lVar3 + 0x28) == local_88) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b44fe4(long param_1)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  uint *puVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  float fVar8;
  
  lVar3 = FUN_009580b8();
  uVar1 = *(uint *)(lVar3 + 0x53d8);
  lVar7 = param_1 + 0xe8;
  if ((uVar1 == 0) && (iVar2 = FUN_00b20974(lVar7), iVar2 == 1)) {
    FUN_00b20790(lVar7,0,1);
  }
  FUN_00b208d0(lVar7,1,uVar1 != 0);
  lVar7 = 0;
  uVar6 = 0;
  lVar5 = param_1 + 0x4dc0;
  fVar8 = 0.0;
  do {
    if (*(uint *)(lVar3 + 0x53d8) <= uVar6) goto LAB_00b450c0;
    *(uint *)(lVar5 + 0x84) = *(uint *)(lVar5 + 0x84) | 4;
    FUN_00ad1b60(fVar8,lVar5,*(long *)(lVar3 + 0x53e0) + lVar7);
    uVar6 = uVar6 + 1;
    fVar8 = fVar8 + 0.15;
    lVar5 = lVar5 + 0xbd10;
    lVar7 = lVar7 + 0x1a8;
  } while (uVar6 < 3);
  if ((uint)uVar6 < 3) {
LAB_00b450c0:
    puVar4 = (uint *)(param_1 + (uVar6 & 0xffffffff) * 0xbd10 + 0x4e44);
    lVar7 = 3 - (uVar6 & 0xffffffff);
    do {
      lVar7 = lVar7 + -1;
      *puVar4 = *puVar4 & 0xfffffffb;
      puVar4 = puVar4 + 0x2f44;
    } while (lVar7 != 0);
  }
  *(undefined1 *)(param_1 + 0x57e58) = 1;
  return;
}

