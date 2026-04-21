// functions/00c82 — 31 functions
#include "libGameKindred.h"




void FUN_00c82018(undefined8 *param_1)

{
  long lVar1;
  uint *puVar2;
  long lVar3;
  long lVar4;
  
  *param_1 = &PTR_FUN_02803d70;
  param_1[0x11] = &PTR_FUN_02803e88;
  puVar2 = (uint *)FUN_009f2588();
  lVar4 = (ulong)*puVar2 << 5;
  lVar1 = *(long *)(puVar2 + 2);
  do {
    lVar3 = lVar1;
    if (lVar4 == 0) goto LAB_00c82070;
    lVar4 = lVar4 + -0x20;
    lVar1 = lVar3 + 0x20;
  } while (*(undefined8 **)(lVar3 + 8) != param_1);
  FUN_00c7f2c0(puVar2,lVar3);
LAB_00c82070:
  FUN_00f0a79c(param_1 + 0x3b);
  FUN_00f0d3a4(param_1 + 0x15);
  FUN_00f01868(param_1);
  return;
}




void FUN_00c82090(long param_1)

{
  FUN_00c82018(param_1 + -0x88);
  return;
}




void FUN_00c82098(void *param_1)

{
  FUN_00c82018();
  operator_delete(param_1);
  return;
}




void FUN_00c820bc(long param_1)

{
  FUN_00c82018((void *)(param_1 + -0x88));
  operator_delete((void *)(param_1 + -0x88));
  return;
}




void FUN_00c820e4(long param_1)

{
  FUN_00f0d75c(param_1 + 0xa8);
  if (*(char *)(param_1 + 0x1f8) != '\0') {
    FUN_00c8211c(param_1);
  }
  FUN_00c82184(param_1);
  return;
}




void FUN_00c8211c(long param_1)

{
  float fVar1;
  float fVar2;
  long lVar3;
  float fVar4;
  
  fVar1 = (float)FUN_00f0d4e0(param_1 + 0xa8);
  lVar3 = FUN_00f08c10(param_1 + 0x178);
  fVar2 = (float)NEON_ucvtf((uint)*(ushort *)(lVar3 + 0x918));
  fVar4 = fVar1 + 10.0;
  if (fVar1 + 10.0 <= 32.0) {
    fVar4 = 32.0;
  }
  fVar1 = fVar2 + 10.0;
  if (fVar2 + 10.0 <= 32.0) {
    fVar1 = 32.0;
  }
  *(float *)(param_1 + 0x1e8) = fVar4;
  *(float *)(param_1 + 0x1ec) = fVar1;
  FUN_00c82184(param_1);
  return;
}




void FUN_00c82184(undefined1 param_1 [16],float param_2,long param_3)

{
  long lVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  
  lVar1 = param_3 + 0xa8;
  lVar2 = FUN_00f08c10(param_3 + 0x178);
  fVar4 = (float)NEON_ucvtf((uint)*(ushort *)(lVar2 + 0x918));
  FUN_00f0d4e0(lVar1);
  if ((*(float *)(param_3 + 0xf8) != 0.5) || (*(float *)(param_3 + 0xfc) != 0.5)) {
    *(undefined8 *)(param_3 + 0xf8) = 0x3f0000003f000000;
    FUN_0091ada4(lVar1);
  }
  fVar3 = (*(float *)(param_3 + 0x1e8) * 0.5 -
          *(float *)(param_3 + 0x1e8) * *(float *)(param_3 + 0x50)) + -1.0;
  fVar4 = (*(float *)(param_3 + 0x1ec) * 0.5 -
          *(float *)(param_3 + 0x54) * *(float *)(param_3 + 0x1ec)) + (param_2 - fVar4) * -0.2;
  if ((*(float *)(param_3 + 0xe8) == fVar3) && (*(float *)(param_3 + 0xec) == fVar4)) {
    return;
  }
  *(float *)(param_3 + 0xe8) = fVar3;
  *(float *)(param_3 + 0xec) = fVar4;
  FUN_0091ada4(lVar1);
  return;
}




void FUN_00c8226c(float param_1,float param_2,long param_3)

{
  if (param_1 <= 32.0) {
    param_1 = 32.0;
  }
  if (param_2 <= 32.0) {
    param_2 = 32.0;
  }
  *(float *)(param_3 + 0x1e8) = param_1;
  *(float *)(param_3 + 0x1ec) = param_2;
  FUN_00c82184();
  return;
}




void FUN_00c82288(long param_1)

{
  *(undefined1 *)(param_1 + 0x1f8) = 1;
  FUN_00c8211c();
  return;
}




void FUN_00c82294(undefined4 param_1,long param_2,undefined4 *param_3,undefined8 param_4)

{
  undefined4 uVar1;
  
  uVar1 = *param_3;
  *(undefined4 *)(param_2 + 500) = param_1;
  *(undefined4 *)(param_2 + 0x1f0) = uVar1;
  FUN_00f0d7fc(param_2 + 0xa8,param_4);
  return;
}




undefined4 FUN_00c822b0(long param_1)

{
  return *(undefined4 *)(param_1 + 0x1e8);
}




void FUN_00c822bc(long param_1,undefined8 param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float *pfVar10;
  long lVar11;
  long lVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined2 local_a0;
  undefined1 local_9e;
  undefined1 local_9d;
  long local_98;
  
  lVar6 = tpidr_el0;
  local_98 = *(long *)(lVar6 + 0x28);
  pfVar10 = (float *)FUN_00965ecc();
  local_a0 = *(undefined2 *)(param_1 + 0x1f0);
  local_9e = *(undefined1 *)(param_1 + 0x1f2);
  local_9d = (undefined1)(int)(*(float *)(param_1 + 500) * pfVar10[6] * 255.0);
  DAT_0313c230 = (uint)*pfVar10;
  uVar4 = (ulong)DAT_0313c230;
  fVar9 = pfVar10[4] * 9.0;
  DAT_0313c234 = (uint)(fVar9 + (float)uVar4);
  DAT_0313c238 = (uint)(pfVar10[4] * (*(float *)(param_1 + 0x1e8) + -18.0) + (float)DAT_0313c234);
  DAT_0313c23c = (int)(fVar9 + (float)DAT_0313c238);
  uVar2 = DAT_0313c234 - DAT_0313c230;
  DAT_0313c240 = (uint)pfVar10[1];
  uVar5 = (ulong)DAT_0313c240;
  fVar9 = pfVar10[5] * 9.0;
  DAT_0313c244 = (uint)(fVar9 + (float)uVar5);
  uVar3 = DAT_0313c244 - DAT_0313c240;
  DAT_0313c248 = (uint)(pfVar10[5] * (*(float *)(param_1 + 0x1ec) + -18.0) + (float)DAT_0313c244);
  lVar12 = param_1 + 0x1d8;
  DAT_0313c24c = (int)(fVar9 + (float)DAT_0313c248);
  lVar11 = FUN_00f0a7e0(lVar12,"rounded_corner");
  uVar1 = *(uint *)(*(long *)(*(long *)(param_1 + 0x1d8) + 8) + 0x3c);
  fVar9 = (float)NEON_ucvtf((uint)*(ushort *)(lVar11 + 8));
  fVar8 = (float)NEON_ucvtf((uint)*(ushort *)(lVar11 + 10));
  fVar14 = (float)NEON_ucvtf((uint)*(ushort *)(lVar11 + 6));
  fVar13 = (float)NEON_ucvtf((uint)*(ushort *)(lVar11 + 4));
  fVar15 = 1.0 / (float)(uVar1 & 0x3fff);
  fVar7 = (float)uVar4 - fVar9 * 0.0;
  fVar8 = (float)uVar5 - fVar8 * 0.0;
  FUN_00965b68(SUB42(fVar7,0),SUB42(fVar8,0),SUB42(fVar7 + (float)uVar2,0),
               SUB42(fVar8 + (float)uVar3,0),0,fVar15 * fVar13,
               1.0 - (1.0 / (float)(uVar1 >> 0xe & 0x3fff)) * fVar14,(fVar13 + fVar9) * fVar15,
               param_2,&local_a0,0);
  uVar4 = (ulong)DAT_0313c238;
  uVar5 = (ulong)DAT_0313c240;
  uVar2 = DAT_0313c23c - DAT_0313c238;
  uVar3 = DAT_0313c244 - DAT_0313c240;
  lVar11 = FUN_00f0a7e0(lVar12,"rounded_corner");
  fVar9 = (float)NEON_ucvtf((uint)*(ushort *)(lVar11 + 8));
  fVar8 = (float)NEON_ucvtf((uint)*(ushort *)(lVar11 + 10));
  uVar1 = *(uint *)(*(long *)(*(long *)(param_1 + 0x1d8) + 8) + 0x3c);
  fVar13 = (float)NEON_ucvtf((uint)*(ushort *)(lVar11 + 4));
  fVar14 = (float)NEON_ucvtf((uint)*(ushort *)(lVar11 + 6));
  fVar15 = 1.0 / (float)(uVar1 & 0x3fff);
  fVar7 = (float)uVar4 - fVar9 * 0.0;
  fVar8 = (float)uVar5 - fVar8 * 0.0;
  FUN_00965b68(SUB42(fVar7,0),SUB42(fVar8,0),SUB42(fVar7 + (float)uVar2,0),
               SUB42(fVar8 + (float)uVar3,0),0,(fVar13 + fVar9) * fVar15,
               1.0 - (1.0 / (float)(uVar1 >> 0xe & 0x3fff)) * fVar14,fVar15 * fVar13,param_2,
               &local_a0,0);
  uVar4 = (ulong)DAT_0313c230;
  uVar5 = (ulong)DAT_0313c248;
  uVar2 = DAT_0313c234 - DAT_0313c230;
  uVar3 = DAT_0313c24c - DAT_0313c248;
  lVar11 = FUN_00f0a7e0(lVar12,"rounded_corner");
  fVar9 = (float)NEON_ucvtf((uint)*(ushort *)(lVar11 + 8));
  fVar8 = (float)NEON_ucvtf((uint)*(ushort *)(lVar11 + 10));
  uVar1 = *(uint *)(*(long *)(*(long *)(param_1 + 0x1d8) + 8) + 0x3c);
  fVar15 = (float)NEON_ucvtf((uint)*(ushort *)(lVar11 + 6));
  fVar14 = (float)NEON_ucvtf((uint)*(ushort *)(lVar11 + 4));
  fVar16 = 1.0 / (float)(uVar1 & 0x3fff);
  fVar7 = (float)uVar4 - fVar9 * 0.0;
  fVar13 = (float)uVar5 - fVar8 * 0.0;
  FUN_00965b68(SUB42(fVar7,0),SUB42(fVar13,0),SUB42(fVar7 + (float)uVar2,0),
               SUB42(fVar13 + (float)uVar3,0),0,fVar16 * fVar14,
               1.0 - (fVar15 + fVar8) * (1.0 / (float)(uVar1 >> 0xe & 0x3fff)),
               (fVar14 + fVar9) * fVar16,param_2,&local_a0,0);
  uVar4 = (ulong)DAT_0313c238;
  uVar5 = (ulong)DAT_0313c248;
  uVar2 = DAT_0313c23c - DAT_0313c238;
  uVar3 = DAT_0313c24c - DAT_0313c248;
  lVar11 = FUN_00f0a7e0(lVar12,"rounded_corner");
  fVar9 = (float)NEON_ucvtf((uint)*(ushort *)(lVar11 + 8));
  fVar8 = (float)NEON_ucvtf((uint)*(ushort *)(lVar11 + 10));
  uVar1 = *(uint *)(*(long *)(*(long *)(param_1 + 0x1d8) + 8) + 0x3c);
  fVar15 = (float)NEON_ucvtf((uint)*(ushort *)(lVar11 + 6));
  fVar14 = (float)NEON_ucvtf((uint)*(ushort *)(lVar11 + 4));
  fVar16 = 1.0 / (float)(uVar1 & 0x3fff);
  fVar7 = (float)uVar4 - fVar9 * 0.0;
  fVar13 = (float)uVar5 - fVar8 * 0.0;
  FUN_00965b68(SUB42(fVar7,0),SUB42(fVar13,0),SUB42(fVar7 + (float)uVar2,0),
               SUB42(fVar13 + (float)uVar3,0),0,(fVar14 + fVar9) * fVar16,
               1.0 - (fVar15 + fVar8) * (1.0 / (float)(uVar1 >> 0xe & 0x3fff)),fVar16 * fVar14,
               param_2,&local_a0,0);
  uVar4 = (ulong)DAT_0313c234;
  uVar5 = (ulong)DAT_0313c240;
  uVar2 = DAT_0313c238 - DAT_0313c234;
  uVar3 = DAT_0313c244 - DAT_0313c240;
  lVar11 = FUN_00f0a7e0(lVar12,"white_background");
  fVar9 = (float)NEON_ucvtf((uint)*(ushort *)(lVar11 + 8));
  fVar8 = (float)NEON_ucvtf((uint)*(ushort *)(lVar11 + 10));
  uVar1 = *(uint *)(*(long *)(*(long *)(param_1 + 0x1d8) + 8) + 0x3c);
  fVar14 = (float)NEON_ucvtf((uint)*(ushort *)(lVar11 + 6));
  fVar13 = (float)NEON_ucvtf((uint)*(ushort *)(lVar11 + 4));
  fVar15 = 1.0 / (float)(uVar1 & 0x3fff);
  fVar7 = (float)uVar4 - fVar9 * 0.0;
  fVar8 = (float)uVar5 - fVar8 * 0.0;
  FUN_00965b68(SUB42(fVar7,0),SUB42(fVar8,0),SUB42(fVar7 + (float)uVar2,0),
               SUB42(fVar8 + (float)uVar3,0),0,fVar15 * fVar13,
               1.0 - (1.0 / (float)(uVar1 >> 0xe & 0x3fff)) * fVar14,(fVar13 + fVar9) * fVar15,
               param_2,&local_a0,0);
  uVar4 = (ulong)DAT_0313c234;
  uVar5 = (ulong)DAT_0313c248;
  uVar2 = DAT_0313c238 - DAT_0313c234;
  uVar3 = DAT_0313c24c - DAT_0313c248;
  lVar11 = FUN_00f0a7e0(lVar12,"white_background");
  fVar9 = (float)NEON_ucvtf((uint)*(ushort *)(lVar11 + 8));
  fVar8 = (float)NEON_ucvtf((uint)*(ushort *)(lVar11 + 10));
  uVar1 = *(uint *)(*(long *)(*(long *)(param_1 + 0x1d8) + 8) + 0x3c);
  fVar14 = (float)NEON_ucvtf((uint)*(ushort *)(lVar11 + 6));
  fVar13 = (float)NEON_ucvtf((uint)*(ushort *)(lVar11 + 4));
  fVar15 = 1.0 / (float)(uVar1 & 0x3fff);
  fVar7 = (float)uVar4 - fVar9 * 0.0;
  fVar8 = (float)uVar5 - fVar8 * 0.0;
  FUN_00965b68(SUB42(fVar7,0),SUB42(fVar8,0),SUB42(fVar7 + (float)uVar2,0),
               SUB42(fVar8 + (float)uVar3,0),0,fVar15 * fVar13,
               1.0 - (1.0 / (float)(uVar1 >> 0xe & 0x3fff)) * fVar14,(fVar13 + fVar9) * fVar15,
               param_2,&local_a0,0);
  uVar4 = (ulong)DAT_0313c230;
  uVar5 = (ulong)DAT_0313c244;
  uVar2 = DAT_0313c23c - DAT_0313c230;
  uVar3 = DAT_0313c248 - DAT_0313c244;
  lVar12 = FUN_00f0a7e0(lVar12,"white_background");
  fVar9 = (float)NEON_ucvtf((uint)*(ushort *)(lVar12 + 8));
  fVar8 = (float)NEON_ucvtf((uint)*(ushort *)(lVar12 + 10));
  uVar1 = *(uint *)(*(long *)(*(long *)(param_1 + 0x1d8) + 8) + 0x3c);
  fVar14 = (float)NEON_ucvtf((uint)*(ushort *)(lVar12 + 6));
  fVar13 = (float)NEON_ucvtf((uint)*(ushort *)(lVar12 + 4));
  fVar15 = 1.0 / (float)(uVar1 & 0x3fff);
  fVar7 = (float)uVar4 - fVar9 * 0.0;
  fVar8 = (float)uVar5 - fVar8 * 0.0;
  FUN_00965b68(SUB42(fVar7,0),SUB42(fVar8,0),SUB42(fVar7 + (float)uVar2,0),
               SUB42(fVar8 + (float)uVar3,0),0,fVar15 * fVar13,
               1.0 - (1.0 / (float)(uVar1 >> 0xe & 0x3fff)) * fVar14,(fVar13 + fVar9) * fVar15,
               param_2,&local_a0,0);
  if (*(long *)(lVar6 + 0x28) == local_98) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c829d0(long param_1)

{
  FUN_00c822bc(param_1 + -0x88);
  return;
}




undefined8 FUN_00c829d8(long param_1,long *param_2)

{
  *param_2 = *(long *)(*(long *)(param_1 + 0x1d8) + 8) + 0x30;
  return 1;
}




undefined8 FUN_00c829f0(long param_1,long *param_2)

{
  *param_2 = *(long *)(*(long *)(param_1 + 0x150) + 8) + 0x30;
  return 1;
}




void FUN_00c82a08(void)

{
  FUN_0199d9a4(2);
  return;
}




void FUN_00c82a20(void)

{
  FUN_0199d9a4(2);
  return;
}




void FUN_00c82a38(long param_1,int *param_2)

{
  if (*param_2 == *(int *)(param_1 + 0xa0)) {
    FUN_00c81f10();
    return;
  }
  return;
}




void FUN_00c82a50(long param_1,int *param_2)

{
  if (*param_2 == *(int *)(param_1 + 0xa0)) {
    FUN_00c81f10();
    return;
  }
  return;
}




void FUN_00c82a68(long *param_1)

{
  FUN_00f13ca4();
  *param_1 = (long)&PTR_FUN_02803ed0;
  FUN_00bbefc4(param_1 + 0x17);
  *(undefined1 *)(param_1 + 0x20) = 0;
                    /* WARNING: Could not recover jumptable at 0x00c82ab4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x78))(param_1,param_1[0x18],1);
  return;
}




void FUN_00c82ab8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_02803ed0;
  FUN_00bbf034(param_1 + 0x17);
  FUN_00f13d08(param_1);
  return;
}




void FUN_00c82aec(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_02803ed0;
  FUN_00bbf034(param_1 + 0x17);
  FUN_00f13d08(param_1);
  operator_delete(param_1);
  return;
}




void FUN_00c82b28(long param_1,uint param_2)

{
  FUN_00bbf0ec(param_1 + 0xb8,param_2 & 1);
  return;
}




void FUN_00c82b34(long param_1)

{
  long lVar1;
  undefined4 local_30;
  undefined4 uStack_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (*(char *)(param_1 + 0x100) == '\0') {
    FUN_00bbf0b0(param_1 + 0xb8);
    *(undefined1 *)(param_1 + 0x100) = 1;
    FUN_00f00298(&uStack_2c,&local_30);
    FUN_00f13f08(uStack_2c,local_30,param_1);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c82ba8(long param_1)

{
  if (*(char *)(param_1 + 0x100) != '\0') {
    FUN_00f13f08(*(undefined8 *)(param_1 + 0xc0));
    return;
  }
  return;
}




void FUN_00c82bbc(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  long lVar9;
  code *local_98;
  long *plStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  long local_68;
  
  lVar9 = tpidr_el0;
  local_68 = *(long *)(lVar9 + 0x28);
  FUN_00f13ca4();
  plVar1 = param_1 + 0x17;
  *param_1 = (long)&PTR_FUN_02804018;
  FUN_00b89cd8(plVar1);
  FUN_00c83504(param_1 + 0x30);
  plVar2 = param_1 + 0xa1;
  FUN_00f0b3a4(plVar2);
  plVar3 = param_1 + 0xbc;
  FUN_00f0b3a4(plVar3);
  plVar4 = param_1 + 0xd7;
  FUN_00f0d160(plVar4);
  plVar5 = param_1 + 0xfd;
  FUN_00abaee8(plVar5,1);
  plVar6 = param_1 + 0x1bc;
  FUN_00b89cd8(plVar6);
  FUN_00f13ca4(param_1 + 0x1d5);
  param_1[0x1ec] = 0;
  param_1[0x1ee] = 0;
  param_1[0x1ed] = 0x43340000430c0000;
  param_1[0x1ef] = 0x4240000041800000;
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar3,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  FUN_00f023ec(plVar1,param_1 + 0x30,1);
  FUN_00f023ec(plVar1,plVar4,1);
  FUN_00f023ec(plVar1,plVar5,1);
  FUN_00f023ec(plVar1,plVar6,1);
  FUN_00f023ec(plVar6,param_1 + 0x1d5,1);
  FUN_00f0e578(param_1 + 0x198,"circle_button_x");
  FUN_00abb1c8(0x3f400000,plVar5,&DAT_01bee7f6);
  uVar7 = DAT_03210f58;
  local_98 = FUN_00c82e84;
  local_80 = 0;
  uStack_78 = 0;
  local_88 = 0;
  plStack_90 = param_1;
  local_70 = uVar7;
  FUN_009693a0(param_1 + 0xfe,&local_98);
  local_98 = FUN_00c82e84;
  uVar8 = DAT_03210f84;
  local_80 = 0;
  uStack_78 = 0;
  local_88 = 0;
  plStack_90 = param_1;
  local_70 = uVar8;
  FUN_009693a0(param_1 + 0xfe,&local_98);
  local_98 = FUN_00c82e84;
  local_80 = 0;
  uStack_78 = 0;
  local_88 = 0;
  plStack_90 = param_1;
  local_70 = uVar7;
  FUN_009693a0(param_1 + 0xa2,&local_98);
  local_98 = FUN_00c82e84;
  local_80 = 0;
  uStack_78 = 0;
  local_88 = 0;
  plStack_90 = param_1;
  local_70 = uVar8;
  FUN_009693a0(param_1 + 0xa2,&local_98);
  FUN_00f0b424(plVar2,1);
  local_98 = FUN_00c82e84;
  local_80 = 0;
  uStack_78 = 0;
  local_88 = 0;
  plStack_90 = param_1;
  local_70 = uVar7;
  FUN_009693a0(param_1 + 0xbd,&local_98);
  local_98 = FUN_00c82e84;
  local_80 = 0;
  uStack_78 = 0;
  local_88 = 0;
  plStack_90 = param_1;
  local_70 = uVar8;
  FUN_009693a0(param_1 + 0xbd,&local_98);
  FUN_00f0b424(plVar3,1);
  FUN_00f0d378(plVar4,PTR_s_build___Fonts_NorthwoodHigh_Regu_02be9ce0);
  (**(code **)(*param_1 + 0xe8))(param_1);
  if (*(long *)(lVar9 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c82e84(undefined8 param_1)

{
  long lVar1;
  undefined1 auStack_48 [32];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00f048e0(auStack_48,DAT_0313c3c8,0);
  FUN_00f04760(param_1,auStack_48,1);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c82eec(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0xf60) = param_2;
  FUN_00f023ec(param_1 + 0xea8,param_2,1);
  return;
}




void FUN_00c82f00(long *param_1,uint param_2)

{
  if ((param_2 & 1) != 0) {
    (**(code **)(*param_1 + 0xe8))(param_1);
  }
  param_2 = param_2 & 1;
  FUN_00b89d24(0x3e19999a,param_1 + 0x17,param_2,1,1);
  FUN_00b89d24(0x3e4ccccd,param_1 + 0x1bc,param_2,4,1);
  *(uint *)((long)param_1 + 0x58c) =
       *(uint *)((long)param_1 + 0x58c) & 0xfffffff0 |
       *(uint *)((long)param_1 + 0x58c) & 7 | param_2 << 3;
  *(uint *)((long)param_1 + 0x664) =
       *(uint *)((long)param_1 + 0x664) & 0xfffffff0 |
       *(uint *)((long)param_1 + 0x664) & 7 | param_2 << 3;
  return;
}




void FUN_00c82f88(long param_1)

{
  FUN_00f0d75c(param_1 + 0x6b8);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00c82f90(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float local_90;
  float fStack_8c;
  undefined1 auStack_88 [4];
  int local_84;
  int local_80;
  int local_7c;
  float local_78;
  float local_74;
  undefined4 local_70;
  undefined4 local_6c;
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  uVar6 = FUN_00f00438("root-layer");
  FUN_00f0025c(&local_6c,&local_70);
  FUN_00f00298(&local_74,&local_78);
  FUN_00967268(&local_7c,&local_80,&local_84,auStack_88);
  fVar10 = *(float *)(param_1 + 0xf8);
  fVar9 = *(float *)(param_1 + 0xfc);
  lVar1 = param_1 + 0xb8;
  fVar8 = local_78 - (*(float *)(param_1 + 0xf68) + *(float *)(param_1 + 0xf6c));
  if ((fVar10 != DAT_03218ef8) || (fVar9 != _DAT_03218efc)) {
    *(ulong *)(param_1 + 0xf8) = CONCAT44(_DAT_03218efc,DAT_03218ef8);
    FUN_0091ada4(lVar1);
  }
  FUN_00f13f08(local_6c,local_70,param_1);
  FUN_00f13f08(local_6c,local_70,lVar1);
  FUN_00f07940(0,0,lVar1,0,uVar6,0);
  lVar2 = param_1 + 0x180;
  FUN_00f13f08(local_6c,fVar8,lVar2);
  lVar3 = param_1 + 0x508;
  FUN_00f13f08(local_6c,*(undefined4 *)(param_1 + 0xf68),lVar3);
  lVar4 = param_1 + 0x5e0;
  FUN_00f13f08(local_6c,*(undefined4 *)(param_1 + 0xf6c),lVar4);
  FUN_00f07b18(0,lVar2,3,uVar6,3);
  FUN_00f07b18(*(undefined4 *)(param_1 + 0xf68),lVar2,0,param_1,0);
  fVar7 = *(float *)(param_1 + 0xf68) + (float)local_80;
  if ((*(float *)(param_1 + 0x1c0) != (float)-local_7c) || (*(float *)(param_1 + 0x1c4) != fVar7)) {
    *(float *)(param_1 + 0x1c0) = (float)-local_7c;
    *(float *)(param_1 + 0x1c4) = fVar7;
    FUN_0091ada4(lVar2);
  }
  FUN_00f07b18(0x80000000,lVar3,2,lVar2,0);
  FUN_00f07b18(0,lVar3,3,lVar2,3);
  FUN_00f07b18(0,lVar4,0,lVar2,2);
  FUN_00f07b18(0,lVar4,3,lVar2,3);
  lVar3 = param_1 + 0x7e8;
  if ((*(float *)(param_1 + 0x830) != 1.5) || (*(float *)(param_1 + 0x834) != 1.5)) {
    uVar6 = NEON_fmov(0x3fc00000,4);
    *(undefined8 *)(param_1 + 0x830) = uVar6;
    FUN_0091ada4(lVar3);
  }
  FUN_00f07b18(0x42100000,lVar3,2,lVar2,0);
  FUN_00f07b18(-(*(float *)(param_1 + 0xf78) + (float)local_84),lVar3,1,lVar2,1);
  FUN_00f07b18(*(undefined4 *)(param_1 + 0xf7c),param_1 + 0x6b8,3,param_1,3);
  FUN_00f07b18(0xc2480000,param_1 + 0x6b8,0,lVar2,0);
  lVar3 = param_1 + 0xea8;
  local_90 = local_74 - (*(float *)(param_1 + 0xf7c) + *(float *)(param_1 + 0xf7c));
  fStack_8c = (fVar8 - *(float *)(param_1 + 0xf70)) - *(float *)(param_1 + 0xf74);
  FUN_00f13f18(lVar3,&local_90);
  FUN_00f07b18(*(undefined4 *)(param_1 + 0xf7c),lVar3,3,param_1,3);
  FUN_00f07b18(*(undefined4 *)(param_1 + 0xf70),lVar3,0,lVar2,0);
  if (*(long *)(param_1 + 0xf60) != 0) {
    FUN_00f13f18(*(long *)(param_1 + 0xf60),&local_90);
  }
  if ((*(float *)(param_1 + 0xf8) != fVar10) || (*(float *)(param_1 + 0xfc) != fVar9)) {
    *(float *)(param_1 + 0xf8) = fVar10;
    *(float *)(param_1 + 0xfc) = fVar9;
    FUN_0091ada4(lVar1);
  }
  if (*(long *)(lVar5 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

