// functions/00a4a — 18 functions
#include "libGameKindred.h"




void FUN_00a4a078(undefined1 param_1 [16],float param_2,long *param_3,long param_4)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  void *pvVar5;
  long lVar6;
  char cVar7;
  char *__s;
  size_t sVar8;
  uint uVar9;
  float fVar10;
  byte local_88 [16];
  void *local_78;
  undefined4 local_6c;
  long local_68;
  
  lVar6 = tpidr_el0;
  local_68 = *(long *)(lVar6 + 0x28);
  FUN_00f017e8();
  plVar1 = param_3 + 0x11;
  *param_3 = (long)&PTR_FUN_027ca520;
  FUN_00f0e4a8(plVar1);
  plVar2 = param_3 + 0x2f;
  FUN_00f0e4a8(plVar2);
  plVar3 = param_3 + 0x4d;
  FUN_00f0e4a8(plVar3);
  plVar4 = param_3 + 0x6b;
  FUN_00f0d160(plVar4);
  FUN_00e70510(param_3 + 0x93);
  param_3[0x92] = param_4;
  (**(code **)(*param_3 + 0x78))(param_3,plVar2,1);
  (**(code **)(*param_3 + 0x78))(param_3,plVar1,1);
  (**(code **)(*param_3 + 0x78))(param_3,plVar3,1);
  (**(code **)(*param_3 + 0x78))(param_3,plVar4,1);
  cVar7 = FUN_00d55870(param_3[0x92]);
  local_6c = 0xffbc9c44;
  if (cVar7 != '\x01') {
    local_6c = 0xff1166f2;
  }
  FUN_008fa54c(local_88,"icon_hero_");
  __s = (char *)FUN_00d5bc38(param_4);
  sVar8 = strlen(__s);
  FUN_0090de84(local_88,__s,sVar8);
  pvVar5 = (void *)((ulong)local_88 | 1);
  if ((local_88[0] & 1) != 0) {
    pvVar5 = local_78;
  }
  FUN_00f0e548(plVar1,PTR_s_build___HUDPartsCommon_atlas_02be3440,pvVar5);
  if ((*(float *)(param_3 + 0x1b) != 0.5) || (*(float *)((long)param_3 + 0xdc) != 0.5)) {
    param_3[0x1b] = 0x3f0000003f000000;
    FUN_0091ada4(plVar1);
  }
  FUN_00f0e548(plVar2,PTR_s_build___HUDPartsCommon_atlas_02be3440,"circle_button_fill");
  FUN_00f0e670(plVar2,&local_6c,2);
  FUN_00f0eac0(plVar1);
  fVar10 = param_2 + 10.0;
  FUN_00f0e700(plVar2);
  fVar10 = fVar10 / param_2;
  if ((*(float *)(param_3 + 0x38) != fVar10) ||
     (param_2 = *(float *)((long)param_3 + 0x1c4), param_2 != fVar10)) {
    *(float *)(param_3 + 0x38) = fVar10;
    *(float *)((long)param_3 + 0x1c4) = fVar10;
    FUN_0091ada4(plVar2);
  }
  uVar9 = *(uint *)((long)param_3 + 0x1fc);
  if ((uVar9 & 0x7f80) != 0x3300) {
    *(uint *)((long)param_3 + 0x1fc) = uVar9 & 0xffff8000 | uVar9 & 0x7f | 0x3300;
    FUN_0091ada4(plVar2);
  }
  if ((*(float *)(param_3 + 0x39) != 0.5) || (*(float *)((long)param_3 + 0x1cc) != 0.5)) {
    param_3[0x39] = 0x3f0000003f000000;
    FUN_0091ada4(plVar2);
  }
  FUN_00f0e548(plVar3,PTR_s_build___HUDPartsCommon_atlas_02be3440,"circle_button_fill");
  FUN_00f0e670(plVar3,&DAT_01bee7f6,2);
  FUN_00f0eac0(plVar1);
  fVar10 = param_2;
  FUN_00f0e700(plVar2);
  param_2 = param_2 / fVar10;
  if ((*(float *)(param_3 + 0x56) != param_2) || (*(float *)((long)param_3 + 0x2b4) != param_2)) {
    *(float *)(param_3 + 0x56) = param_2;
    *(float *)((long)param_3 + 0x2b4) = param_2;
    FUN_0091ada4(plVar3);
  }
  uVar9 = *(uint *)((long)param_3 + 0x2ec);
  if ((uVar9 & 0x7f80) != 0x3300) {
    *(uint *)((long)param_3 + 0x2ec) = uVar9 & 0xffff8000 | uVar9 & 0x7f | 0x3300;
    FUN_0091ada4(plVar3);
    uVar9 = *(uint *)((long)param_3 + 0x2ec);
  }
  *(uint *)((long)param_3 + 0x2ec) = uVar9 & 0xfffffffb;
  if ((*(float *)(param_3 + 0x57) != 0.5) || (*(float *)((long)param_3 + 700) != 0.5)) {
    param_3[0x57] = 0x3f0000003f000000;
    FUN_0091ada4(plVar3);
  }
  FUN_00f0d92c(plVar4,PTR_s_build___Fonts_NorthwoodHigh_Regu_02be9cd8,&DAT_01bee7fa);
  if ((*(float *)(param_3 + 0x75) != 0.5) || (*(float *)((long)param_3 + 0x3ac) != 0.5)) {
    param_3[0x75] = 0x3f0000003f000000;
    FUN_0091ada4(plVar4);
  }
  if ((*(float *)(param_3 + 0x74) != 0.8) || (*(float *)((long)param_3 + 0x3a4) != 0.8)) {
    param_3[0x74] = 0x3f4ccccd3f4ccccd;
    FUN_0091ada4(plVar4);
  }
  if ((*(float *)(param_3 + 9) != 0.5) || (*(float *)((long)param_3 + 0x4c) != 0.5)) {
    param_3[9] = 0x3f0000003f000000;
    FUN_0091ada4(param_3);
  }
  if ((local_88[0] & 1) != 0) {
    operator_delete(local_78);
  }
  if (*(long *)(lVar6 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a4a470(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027ca520;
  if ((void *)param_1[0x94] != (void *)0x0) {
    operator_delete__((void *)param_1[0x94]);
    param_1[0x94] = 0;
    param_1[0x93] = 0;
  }
  FUN_00f0d3a4(param_1 + 0x6b);
  param_1[0x4d] = &PTR_FUN_028266f0;
  param_1[100] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x67);
  FUN_00f13d08(param_1 + 0x4d);
  param_1[0x2f] = &PTR_FUN_028266f0;
  param_1[0x46] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x49);
  FUN_00f13d08(param_1 + 0x2f);
  param_1[0x11] = &PTR_FUN_028266f0;
  param_1[0x28] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x2b);
  FUN_00f13d08(param_1 + 0x11);
  FUN_00f01868(param_1);
  return;
}




void FUN_00a4a52c(void *param_1)

{
  FUN_00a4a470();
  operator_delete(param_1);
  return;
}




void FUN_00a4a550(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_00f13ca4();
  uVar1 = DAT_03210cf8;
  *(undefined4 *)(param_1 + 0x18) = 0x7000000;
  *param_1 = &PTR_FUN_027ca620;
  *(undefined2 *)(param_1 + 0x1a) = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x17] = &PTR_FUN_027ca788;
  param_1[0x19] = uVar1;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  FUN_00f14070(param_1,&DAT_03211038);
  uVar1 = NEON_fmov(0xbf800000,4);
  param_1[0x12] = uVar1;
  return;
}




void FUN_00a4a5c8(undefined8 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)param_1[0x1b];
  *param_1 = &PTR_FUN_027ca620;
  param_1[0x17] = &PTR_FUN_027ca788;
  if (pvVar1 != (void *)0x0) {
    FUN_00f0a79c(pvVar1);
    operator_delete(pvVar1);
  }
  pvVar1 = (void *)param_1[0x1d];
  if (pvVar1 != (void *)0x0) {
    FUN_00f0a79c(pvVar1);
    operator_delete(pvVar1);
  }
  pvVar1 = (void *)param_1[0x1f];
  if (pvVar1 != (void *)0x0) {
    FUN_00f0a79c(pvVar1);
    operator_delete(pvVar1);
  }
  FUN_00f13d08(param_1);
  return;
}




void FUN_00a4a648(long param_1)

{
  FUN_00a4a5c8(param_1 + -0xb8);
  return;
}




void FUN_00a4a650(void *param_1)

{
  FUN_00a4a5c8();
  operator_delete(param_1);
  return;
}




void FUN_00a4a674(long param_1)

{
  FUN_00a4a5c8((void *)(param_1 + -0xb8));
  operator_delete((void *)(param_1 + -0xb8));
  return;
}




void FUN_00a4a69c(long param_1,undefined8 *param_2,int param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  int iVar3;
  void *pvVar4;
  undefined8 uVar5;
  ulong uVar6;
  long *plVar7;
  undefined1 uVar8;
  long lVar9;
  undefined1 uVar10;
  undefined1 auStack_b8 [128];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  *(undefined8 *)(param_1 + 0x100) = param_4;
  plVar7 = (long *)param_2[0xc];
  if (plVar7 == (long *)0x0) {
    lVar9 = 0;
  }
  else {
    lVar9 = 0;
    if (*plVar7 != 0) {
      lVar9 = 0;
      do {
        lVar2 = lVar9 + 1;
        lVar9 = lVar9 + 1;
      } while (plVar7[lVar2] != 0);
    }
  }
  uVar10 = 0;
  uVar8 = 0;
  if (param_3 < (int)lVar9) {
    uVar10 = *(undefined1 *)plVar7[param_3];
    uVar8 = ((undefined1 *)plVar7[param_3])[1];
  }
  *(undefined1 *)(param_1 + 0xd0) = uVar10;
  *(undefined1 *)(param_1 + 0xd1) = uVar8;
  FUN_00969b40(auStack_b8,"build://%s",*param_2);
  pvVar4 = operator_new(0x10);
  FUN_00f0a784();
  *(void **)(param_1 + 0xe8) = pvVar4;
  FUN_00f0a814(pvVar4,auStack_b8);
  uVar5 = FUN_00f0a7e0(*(undefined8 *)(param_1 + 0xe8),param_2[2]);
  *(undefined8 *)(param_1 + 0xf0) = uVar5;
  uVar6 = FUN_00934ec0();
  if (((uVar6 & 1) != 0) && (iVar3 = FUN_00e6a474(param_2[10]), iVar3 != 0)) {
    FUN_00969b40(auStack_b8,"build://%s",param_2[10]);
    pvVar4 = operator_new(0x10);
    FUN_00f0a784();
    *(void **)(param_1 + 0xd8) = pvVar4;
    FUN_00f0a814(pvVar4,auStack_b8);
    uVar5 = FUN_00f0a7e0(*(undefined8 *)(param_1 + 0xd8),param_2[0xb]);
    *(undefined8 *)(param_1 + 0xe0) = uVar5;
  }
  FUN_00a4a7ec(param_1);
  FUN_0091ada4(param_1);
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00a4a7ec(long param_1)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  char cVar4;
  char cVar5;
  float fVar6;
  float fVar7;
  long lVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  
  if (*(long *)(param_1 + 0xd8) == 0) {
    *(undefined8 *)(param_1 + 0x110) = 0;
    *(undefined8 *)(param_1 + 0x108) = 0x3f8000003f800000;
    *(undefined8 *)(param_1 + 0x120) = 0;
    *(undefined8 *)(param_1 + 0x118) = 0x3f800000;
    *(undefined8 *)(param_1 + 0x128) = 0x3f800000;
  }
  else {
    plVar1 = *(long **)(param_1 + 0xe8);
    cVar4 = *(char *)(param_1 + 0xd0);
    cVar5 = *(char *)(param_1 + 0xd1);
    lVar8 = FUN_00f0a7d4(plVar1,**(undefined4 **)(param_1 + 0xf0));
    fVar9 = (float)NEON_ucvtf((uint)*(ushort *)(lVar8 + 4));
    fVar11 = (float)NEON_ucvtf((uint)*(ushort *)(lVar8 + 8));
    fVar12 = (float)NEON_ucvtf((uint)*(ushort *)(lVar8 + 6));
    fVar7 = (float)NEON_ucvtf((uint)*(ushort *)(lVar8 + 10));
    fVar6 = fVar9;
    fVar18 = fVar9 + fVar11;
    if (cVar4 == '\0') {
      fVar6 = fVar9 + fVar11;
      fVar18 = fVar9;
    }
    fVar11 = fVar12;
    fVar9 = fVar12 + fVar7;
    if (cVar5 == '\0') {
      fVar11 = fVar12 + fVar7;
      fVar9 = fVar12;
    }
    plVar2 = *(long **)(param_1 + 0xd8);
    uVar3 = *(uint *)(*(long *)(*plVar1 + 8) + 0x3c);
    cVar4 = *(char *)(param_1 + 0xd0);
    cVar5 = *(char *)(param_1 + 0xd1);
    fVar15 = 1.0 / (float)(uVar3 & 0x3fff);
    fVar16 = 1.0 / (float)(uVar3 >> 0xe & 0x3fff);
    fVar18 = fVar15 * fVar18;
    fVar19 = 1.0 - fVar16 * fVar9;
    lVar8 = FUN_00f0a7d4(plVar2,**(undefined4 **)(param_1 + 0xe0));
    fVar10 = (float)NEON_ucvtf((uint)*(ushort *)(lVar8 + 4));
    fVar9 = (float)NEON_ucvtf((uint)*(ushort *)(lVar8 + 8));
    uVar3 = *(uint *)(*(long *)(*plVar2 + 8) + 0x3c);
    fVar13 = (float)NEON_ucvtf((uint)*(ushort *)(lVar8 + 6));
    fVar12 = (float)NEON_ucvtf((uint)*(ushort *)(lVar8 + 10));
    fVar7 = fVar10;
    fVar14 = fVar10 + fVar9;
    if (cVar4 == '\0') {
      fVar7 = fVar10 + fVar9;
      fVar14 = fVar10;
    }
    fVar9 = fVar13;
    fVar10 = fVar13 + fVar12;
    if (cVar5 == '\0') {
      fVar9 = fVar13 + fVar12;
      fVar10 = fVar13;
    }
    fVar13 = 1.0 / (float)(uVar3 & 0x3fff);
    fVar17 = 1.0 / (float)(uVar3 >> 0xe & 0x3fff);
    fVar14 = fVar13 * fVar14;
    fVar12 = 1.0 - fVar17 * fVar10;
    fVar6 = (fVar13 * fVar7 - fVar14) / (fVar15 * fVar6 - fVar18);
    fVar11 = ((1.0 - fVar17 * fVar9) - fVar12) / ((1.0 - fVar16 * fVar11) - fVar19);
    *(float *)(param_1 + 0x108) = fVar6;
    *(float *)(param_1 + 0x10c) = fVar11;
    *(float *)(param_1 + 0x110) = fVar14 - fVar18 * fVar6;
    *(float *)(param_1 + 0x114) = fVar12 - fVar19 * fVar11;
  }
  return;
}




undefined4 FUN_00a4aa00(long param_1)

{
  float fVar1;
  undefined4 uVar2;
  long lVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  
  lVar3 = *(long *)(param_1 + 0xf0);
  if ((lVar3 != 0) && (**(long **)(param_1 + 0xe8) != 0)) {
    fVar1 = *(float *)(param_1 + 0x90);
    uVar4 = SUB42(fVar1,0);
    uVar5 = (undefined2)((uint)fVar1 >> 0x10);
    if (fVar1 < 0.0) {
      uVar2 = NEON_ucvtf((uint)*(ushort *)(lVar3 + 8));
      uVar4 = (undefined2)uVar2;
      uVar5 = (undefined2)((uint)uVar2 >> 0x10);
    }
    if (*(float *)(param_1 + 0x94) < 0.0) {
      NEON_ucvtf((uint)*(ushort *)(lVar3 + 10));
    }
    return CONCAT22(uVar5,uVar4);
  }
  return DAT_03218ef8;
}




undefined8 FUN_00a4aa50(long param_1,long *param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0xd8);
  *param_2 = *(long *)(**(long **)(param_1 + 0xe8) + 8) + 0x30;
  if (lVar2 == 0) {
    uVar1 = 1;
  }
  else {
    param_2[1] = *(long *)(**(long **)(param_1 + 0xd8) + 8) + 0x30;
    lVar2 = FUN_00934ff0();
    param_2[2] = lVar2;
    uVar1 = 3;
  }
  return uVar1;
}




void FUN_00a4aab0(long param_1)

{
  FUN_00a4aa50(param_1 + -0xb8);
  return;
}




void FUN_00a4aab8(long param_1,undefined4 *param_2)

{
  long *plVar1;
  uint uVar2;
  char cVar3;
  char cVar4;
  long lVar5;
  long lVar6;
  float *pfVar7;
  undefined8 uVar8;
  long lVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float local_198;
  float fStack_194;
  undefined8 local_190;
  undefined4 local_184;
  undefined8 local_180;
  undefined4 local_174;
  undefined8 local_160;
  undefined4 local_154;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 local_118;
  float local_110;
  float fStack_10c;
  undefined8 local_108;
  float local_100;
  float fStack_fc;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  float local_e0;
  float fStack_dc;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  float local_a0;
  float local_9c;
  float fStack_98;
  undefined4 uStack_94;
  
  lVar5 = tpidr_el0;
  lVar9 = *(long *)(lVar5 + 0x28);
  if (*(long *)(param_1 + 0xd8) == 0) {
    uVar8 = 0;
  }
  else {
    plVar1 = *(long **)(param_1 + 0xe8);
    cVar3 = *(char *)(param_1 + 0xd0);
    cVar4 = *(char *)(param_1 + 0xd1);
    lVar6 = FUN_00f0a7d4(plVar1,**(undefined4 **)(param_1 + 0xf0));
    fVar10 = (float)NEON_ucvtf((uint)*(ushort *)(lVar6 + 4));
    uVar2 = *(uint *)(*(long *)(*plVar1 + 8) + 0x3c);
    fVar13 = (float)NEON_ucvtf((uint)*(ushort *)(lVar6 + 8));
    fVar12 = (float)NEON_ucvtf((uint)*(ushort *)(lVar6 + 6));
    fVar14 = (float)NEON_ucvtf((uint)*(ushort *)(lVar6 + 10));
    fVar11 = fVar10;
    fVar16 = fVar10 + fVar13;
    if (cVar3 == '\0') {
      fVar11 = fVar10 + fVar13;
      fVar16 = fVar10;
    }
    fVar10 = fVar12;
    fVar13 = fVar12 + fVar14;
    if (cVar4 == '\0') {
      fVar10 = fVar12 + fVar14;
      fVar13 = fVar12;
    }
    fVar14 = 1.0 / (float)(uVar2 & 0x3fff);
    fVar15 = 1.0 / (float)(uVar2 >> 0xe & 0x3fff);
    fVar16 = fVar14 * fVar16;
    fVar17 = 1.0 - fVar15 * fVar13;
    FUN_00f0a7d4(*(undefined8 *)(param_1 + 0xd8),**(undefined4 **)(param_1 + 0xe0));
    *param_2 = *(undefined4 *)(param_1 + 0x110);
    param_2[1] = *(undefined4 *)(param_1 + 0x114);
    param_2[2] = *(undefined4 *)(param_1 + 0x108);
    param_2[3] = *(undefined4 *)(param_1 + 0x10c);
    uStack_a8 = 0x3f800000;
    local_b0 = 0;
    uStack_c8 = 0;
    local_d0 = 0x3f800000;
    local_b8 = 0;
    local_c0 = 0x3f80000000000000;
    fStack_98 = 0.0;
    uStack_94 = 0x3f800000;
    local_a0 = 0.0;
    local_9c = 0.0;
    pfVar7 = (float *)FUN_00965ecc(param_1);
    fVar13 = *(float *)(param_1 + 0x90);
    fVar12 = *(float *)(param_1 + 0x94);
    if ((fVar13 < 0.0) || (fVar12 < 0.0)) {
      if (fVar13 < 0.0) {
        fVar13 = (float)NEON_ucvtf((uint)*(ushort *)(*(long *)(param_1 + 0xf0) + 8));
      }
      if (fVar12 < 0.0) {
        fVar12 = (float)NEON_ucvtf((uint)*(ushort *)(*(long *)(param_1 + 0xf0) + 10));
      }
    }
    fVar13 = (fVar13 * pfVar7[4]) / (fVar14 * fVar11 - fVar16);
    local_d0 = CONCAT44((float)((ulong)local_d0 >> 0x20) * fVar13,(float)local_d0 * fVar13);
    fVar11 = (fVar12 * pfVar7[5]) / ((1.0 - fVar15 * fVar10) - fVar17);
    uStack_c8 = CONCAT44(uStack_c8._4_4_,fVar13 * (float)uStack_c8);
    local_c0 = CONCAT44((float)((ulong)local_c0 >> 0x20) * fVar11,(float)local_c0 * fVar11);
    local_b8 = CONCAT44(local_b8._4_4_,fVar11 * (float)local_b8);
    fVar10 = pfVar7[1] - fVar17 * fVar11;
    local_a0 = (*pfVar7 - fVar16 * fVar13) + local_a0;
    local_9c = fVar10 + local_9c;
    fStack_98 = fStack_98 + 0.0;
    fVar12 = (float)FUN_009cf284(0,0,*(undefined8 *)(param_1 + 0x100));
    fVar16 = fVar10;
    fVar13 = (float)FUN_009cf284(0x3f800000,0,*(undefined8 *)(param_1 + 0x100));
    fVar11 = fVar16;
    local_100 = (float)FUN_009cf284(0,0x3f800000,*(undefined8 *)(param_1 + 0x100));
    local_110 = fVar13 - fVar12;
    fStack_10c = fVar16 - fVar10;
    local_100 = local_100 - fVar12;
    fStack_fc = fVar11 - fVar10;
    uStack_128 = 0x3f800000;
    local_130 = 0;
    local_118 = 0x3f80000000000000;
    local_120 = 0;
    uStack_148 = 0;
    local_150 = 0x3f800000;
    local_138 = 0;
    local_140 = 0x3f80000000000000;
    local_108 = 0;
    local_f0 = 0;
    uStack_e8 = 0x3f800000;
    local_d8 = 0x3f80000000000000;
    local_f8 = 0;
    local_e0 = fVar12;
    fStack_dc = fVar10;
    FUN_0093500c(&local_190,&local_198);
    local_150 = CONCAT44((float)((ulong)local_150 >> 0x20) * local_198,(float)local_150 * local_198)
    ;
    uStack_148 = CONCAT44(uStack_148._4_4_,local_198 * (float)uStack_148);
    local_140 = CONCAT44((float)((ulong)local_140 >> 0x20) * fStack_194,
                         (float)local_140 * fStack_194);
    local_138 = CONCAT44(local_138._4_4_,fStack_194 * (float)local_138);
    local_120 = CONCAT44((float)((ulong)local_190 >> 0x20) + (float)((ulong)local_120 >> 0x20),
                         (float)local_190 + (float)local_120);
    local_118 = CONCAT44(local_118._4_4_,(float)local_118 + 0.0);
    FUN_009b3960(&local_190,&local_d0,&local_110);
    FUN_009b3960(&local_190,&local_190,&local_150);
    uVar8 = 0x10;
    *(undefined8 *)(param_2 + 4) = local_190;
    param_2[6] = local_184;
    param_2[7] = 0;
    *(undefined8 *)(param_2 + 8) = local_180;
    param_2[10] = local_174;
    param_2[0xb] = 0;
    *(undefined8 *)(param_2 + 0xc) = local_160;
    param_2[0xe] = local_154;
    param_2[0xf] = 0;
  }
  if (*(long *)(lVar5 + 0x28) != lVar9) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar8);
  }
  return;
}




void FUN_00a4ae40(long param_1)

{
  FUN_00a4aab8(param_1 + -0xb8);
  return;
}




void FUN_00a4ae48(long param_1)

{
  undefined4 uVar1;
  
  uVar1 = 2;
  if (*(long *)(param_1 + 0xd8) != 0) {
    uVar1 = 8;
  }
  FUN_0199d9a4(uVar1);
  return;
}




void FUN_00a4ae70(long param_1)

{
  FUN_00a4ae48(param_1 + -0xb8);
  return;
}




void FUN_00a4ae88(long param_1,undefined8 param_2)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float *pfVar10;
  undefined2 uVar11;
  undefined2 uVar12;
  undefined2 uVar13;
  undefined2 uVar14;
  float fVar15;
  undefined2 local_40;
  undefined1 local_3e;
  undefined1 local_3d;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  if (*(long *)(param_1 + 0xf0) != 0) {
    pfVar10 = (float *)FUN_00965ecc(param_1);
    local_40 = 0xffff;
    local_3e = 0xff;
    local_3d = (undefined1)(int)(pfVar10[6] * 255.0);
    fVar4 = *(float *)(param_1 + 0x90);
    uVar11 = SUB42(fVar4,0);
    uVar12 = (undefined2)((uint)fVar4 >> 0x10);
    fVar6 = *(float *)(param_1 + 0x94);
    uVar13 = SUB42(fVar6,0);
    uVar14 = (undefined2)((uint)fVar6 >> 0x10);
    if ((fVar4 < 0.0) || (fVar6 < 0.0)) {
      if (fVar4 < 0.0) {
        uVar5 = NEON_ucvtf((uint)*(ushort *)(*(long *)(param_1 + 0xf0) + 8));
        uVar11 = (undefined2)uVar5;
        uVar12 = (undefined2)((uint)uVar5 >> 0x10);
      }
      if (fVar6 < 0.0) {
        uVar5 = NEON_ucvtf((uint)*(ushort *)(*(long *)(param_1 + 0xf0) + 10));
        uVar13 = (undefined2)uVar5;
        uVar14 = (undefined2)((uint)uVar5 >> 0x10);
      }
    }
    lVar1 = *(long *)(param_1 + 0xf0);
    fVar6 = (float)NEON_ucvtf((uint)*(ushort *)(lVar1 + 8));
    fVar7 = (float)NEON_ucvtf((uint)*(ushort *)(lVar1 + 4));
    uVar2 = *(uint *)(*(long *)(**(long **)(param_1 + 0xe8) + 8) + 0x3c);
    fVar8 = (float)NEON_ucvtf((uint)*(ushort *)(lVar1 + 10));
    fVar9 = (float)NEON_ucvtf((uint)*(ushort *)(lVar1 + 6));
    fVar4 = fVar7 + fVar6;
    if (*(char *)(param_1 + 0xd0) != '\0') {
      fVar4 = fVar7;
      fVar7 = fVar7 + fVar6;
    }
    fVar6 = *pfVar10 - pfVar10[4] * fVar6 * 0.0;
    if (*(char *)(param_1 + 0xd1) != '\0') {
      fVar9 = fVar9 + fVar8;
    }
    fVar15 = 1.0 / (float)(uVar2 & 0x3fff);
    fVar8 = pfVar10[1] - pfVar10[5] * fVar8 * 0.0;
    FUN_00965b68(SUB42(fVar6,0),SUB42(fVar8,0),(float)CONCAT22(uVar12,uVar11) * pfVar10[4] + fVar6,
                 (float)CONCAT22(uVar14,uVar13) * pfVar10[5] + fVar8,0,fVar15 * fVar7,
                 SUB42(1.0 - (1.0 / (float)(uVar2 >> 0xe & 0x3fff)) * fVar9,0),
                 SUB42(fVar15 * fVar4,0),param_2,&local_40,0);
  }
  if (*(long *)(lVar3 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

