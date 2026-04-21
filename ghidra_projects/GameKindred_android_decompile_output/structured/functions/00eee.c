// functions/00eee — 44 functions
#include "libGameKindred.h"




void FUN_00eee0f4(long param_1,long param_2,long param_3,long param_4,uint param_5)

{
  long *plVar1;
  int *piVar2;
  short *psVar3;
  long lVar4;
  undefined1 *puVar5;
  ulong uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  int iVar14;
  long lVar15;
  long lVar16;
  int *piVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  int local_80 [18];
  long local_38;
  
  piVar17 = local_80;
  lVar10 = tpidr_el0;
  local_38 = *(long *)(lVar10 + 0x28);
  lVar16 = *(long *)(param_1 + 0x1b8);
  lVar18 = *(long *)(param_2 + 0x58);
  lVar15 = 0;
  do {
    piVar2 = (int *)(lVar18 + lVar15 * 4);
    psVar3 = (short *)(param_3 + lVar15 * 2);
    lVar12 = (long)piVar2[8] * (long)psVar3[8];
    lVar20 = (long)piVar2[0x18] * (long)psVar3[0x18];
    lVar19 = (long)piVar2[0x28] * (long)psVar3[0x28];
    uVar6 = (long)(*piVar2 * (int)*psVar3) << 0xd | 0x400;
    lVar11 = (lVar19 + lVar12) * 0xbb6;
    iVar9 = ((int)lVar12 - (int)lVar20) - (int)lVar19;
    lVar13 = uVar6 + (long)piVar2[0x20] * (long)psVar3[0x20] * 0x16a1;
    lVar4 = lVar11 + (lVar20 + lVar12) * 0x2000;
    lVar11 = lVar11 + (lVar19 - lVar20) * 0x2000;
    lVar19 = (long)piVar2[0x10] * (long)psVar3[0x10] * 0x2731 + lVar13;
    lVar13 = lVar13 + (long)piVar2[0x10] * (long)psVar3[0x10] * -0x2731;
    lVar12 = lVar15 + 1;
    iVar14 = (int)(uVar6 + (long)piVar2[0x20] * (long)psVar3[0x20] * -0x2d42 >> 0xb);
    local_80[lVar15 + 0xc] = iVar14 + iVar9 * -4;
    local_80[lVar15 + 3] = iVar14 + iVar9 * 4;
    local_80[lVar15] = (int)((ulong)(lVar4 + lVar19) >> 0xb);
    local_80[lVar15 + 0xf] = (int)((ulong)(lVar19 - lVar4) >> 0xb);
    local_80[lVar15 + 6] = (int)((ulong)(lVar11 + lVar13) >> 0xb);
    local_80[lVar15 + 9] = (int)((ulong)(lVar13 - lVar11) >> 0xb);
    lVar15 = lVar12;
  } while ((int)lVar12 != 3);
  lVar15 = 0;
  lVar16 = lVar16 + 0x80;
  do {
    iVar14 = piVar17[1];
    iVar7 = piVar17[2];
    plVar1 = (long *)(param_4 + lVar15);
    lVar15 = lVar15 + 8;
    iVar9 = *piVar17 * 0x2000 + 0x20000;
    iVar8 = iVar9 + iVar7 * 0x16a1;
    puVar5 = (undefined1 *)(*plVar1 + (ulong)param_5);
    *puVar5 = *(undefined1 *)(lVar16 + ((ulong)((uint)(iVar8 + iVar14 * 0x2731) >> 0x12) & 0x3ff));
    puVar5[2] = *(undefined1 *)
                 (lVar16 + ((ulong)((uint)(iVar8 + iVar14 * -0x2731) >> 0x12) & 0x3ff));
    piVar17 = piVar17 + 3;
    puVar5[1] = *(undefined1 *)(lVar16 + ((ulong)((uint)(iVar9 + iVar7 * -0x2d42) >> 0x12) & 0x3ff))
    ;
  } while (lVar15 != 0x30);
  if (*(long *)(lVar10 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00eee2bc(long param_1,long param_2,long param_3,long param_4,uint param_5)

{
  long *plVar1;
  short *psVar2;
  undefined1 *puVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  int iVar11;
  int iVar13;
  long lVar12;
  long lVar14;
  int iVar15;
  int iVar17;
  long lVar16;
  long lVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  long lVar23;
  long lVar24;
  long local_58;
  long alStack_50 [8];
  
  lVar4 = tpidr_el0;
  alStack_50[7] = *(long *)(lVar4 + 0x28);
  lVar7 = *(long *)(param_1 + 0x1b8);
  lVar5 = 0;
  puVar8 = (undefined8 *)(*(long *)(param_2 + 0x58) + 0x40);
  plVar6 = alStack_50 + 3;
  do {
    psVar2 = (short *)(param_3 + 0x20 + lVar5);
    iVar11 = (int)puVar8[-8] * (int)psVar2[-0x10];
    iVar13 = (int)((ulong)puVar8[-8] >> 0x20) * (int)psVar2[-0xf];
    iVar15 = (int)*puVar8 * (int)*psVar2;
    iVar17 = (int)((ulong)*puVar8 >> 0x20) * (int)psVar2[1];
    iVar19 = (int)puVar8[-4] * (int)psVar2[-8];
    iVar20 = (int)((ulong)puVar8[-4] >> 0x20) * (int)psVar2[-7];
    iVar21 = (int)puVar8[4] * (int)psVar2[8];
    iVar22 = (int)((ulong)puVar8[4] >> 0x20) * (int)psVar2[9];
    lVar10 = ((long)iVar21 + (long)iVar19) * 0x1151;
    lVar9 = ((long)iVar22 + (long)iVar20) * 0x1151;
    lVar23 = ((long)iVar15 + (long)iVar11) * 0x2000;
    lVar24 = ((long)iVar17 + (long)iVar13) * 0x2000;
    lVar12 = ((long)iVar11 - (long)iVar15) * 0x2000;
    lVar14 = ((long)iVar13 - (long)iVar17) * 0x2000;
    lVar16 = lVar10 + (long)iVar21 * -0x3b21;
    lVar18 = lVar9 + (long)iVar22 * -0x3b21;
    lVar10 = lVar10 + (long)iVar19 * 0x187e;
    lVar9 = lVar9 + (long)iVar20 * 0x187e;
    lVar5 = lVar5 + 4;
    plVar6[-3] = lVar9 + lVar24;
    plVar6[-4] = lVar10 + lVar23;
    plVar6[-1] = lVar18 + lVar14;
    plVar6[-2] = lVar16 + lVar12;
    plVar6[3] = lVar24 - lVar9;
    plVar6[2] = lVar23 - lVar10;
    plVar6[1] = lVar14 - lVar18;
    *plVar6 = lVar12 - lVar16;
    puVar8 = puVar8 + 1;
    plVar6 = plVar6 + 2;
  } while (lVar5 != 4);
  lVar5 = 0;
  plVar6 = &local_58;
  lVar7 = lVar7 + 0x80;
  do {
    lVar9 = plVar6[1];
    plVar1 = (long *)(param_4 + lVar5);
    lVar5 = lVar5 + 8;
    iVar11 = (int)*plVar6 + 0x8000;
    puVar3 = (undefined1 *)(*plVar1 + (ulong)param_5);
    *puVar3 = *(undefined1 *)(lVar7 + ((ulong)((uint)(iVar11 + (int)lVar9) >> 0x10) & 0x3ff));
    plVar6 = plVar6 + 2;
    puVar3[1] = *(undefined1 *)(lVar7 + ((ulong)((uint)(iVar11 - (int)lVar9) >> 0x10) & 0x3ff));
  } while (lVar5 != 0x20);
  if (*(long *)(lVar4 + 0x28) == alStack_50[7]) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00eee448(long param_1,long param_2,short *param_3,long *param_4,uint param_5)

{
  long lVar1;
  int iVar2;
  int iVar3;
  
  lVar1 = *(long *)(param_1 + 0x1b8) + 0x80;
  iVar2 = **(int **)(param_2 + 0x58) * (int)*param_3 + 4;
  iVar3 = (*(int **)(param_2 + 0x58))[8] * (int)param_3[8];
  *(undefined1 *)(*param_4 + (ulong)param_5) =
       *(undefined1 *)(lVar1 + ((ulong)((uint)(iVar2 + iVar3) >> 3) & 0x3ff));
  *(undefined1 *)(param_4[1] + (ulong)param_5) =
       *(undefined1 *)(lVar1 + ((ulong)((uint)(iVar2 - iVar3) >> 3) & 0x3ff));
  return;
}




void FUN_00eee49c(void)

{
  undefined8 *puVar1;
  
  puVar1 = operator_new(0x18);
  FUN_00e7bdec(puVar1,0);
  *puVar1 = &PTR_FUN_02824588;
  FUN_00e7bd4c(puVar1);
  FUN_00e7be08(puVar1);
  return;
}




void FUN_00eee4e4(undefined8 *param_1)

{
  FUN_00e7bdec();
  *param_1 = &PTR_FUN_02824588;
  return;
}




void FUN_00eee514(void)

{
  return;
}




void FUN_00eee51c(void)

{
  return;
}




void FUN_00eee520(void)

{
  return;
}




void FUN_00eee524(void)

{
  return;
}




void FUN_00eee528(void)

{
  return;
}




undefined8 FUN_00eee52c(void)

{
  return 1;
}




void FUN_00eee534(void)

{
  return;
}




void FUN_00eee538(undefined4 param_1,undefined8 param_2,byte param_3,undefined4 param_4)

{
  undefined8 *puVar1;
  
  puVar1 = operator_new(0x40);
  FUN_00e7bdec(puVar1,3);
  *(undefined4 *)(puVar1 + 3) = param_1;
  *(undefined4 *)((long)puVar1 + 0x1c) = param_4;
  puVar1[4] = param_2;
  *puVar1 = &PTR_FUN_028245d8;
  *(byte *)(puVar1 + 5) = param_3 & 1;
  FUN_00e7bd4c(puVar1);
  FUN_00e7be08(puVar1);
  return;
}




void FUN_00eee5b0(undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                 byte param_5,undefined4 param_6)

{
  FUN_00e7bdec();
  *(undefined4 *)(param_1 + 3) = param_3;
  *(undefined4 *)((long)param_1 + 0x1c) = param_6;
  param_1[4] = param_4;
  *param_1 = &PTR_FUN_028245d8;
  *(byte *)(param_1 + 5) = param_5 & 1;
  return;
}




void FUN_00eee60c(void)

{
  return;
}




void FUN_00eee614(long param_1)

{
  FUN_00ef0034();
  FUN_00eee864(1);
  FUN_019883c4(*(undefined4 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20),
               *(undefined1 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x1c));
  return;
}




void FUN_00eee648(void)

{
  FUN_019885a8();
  FUN_00ef0064();
  return;
}




undefined8 FUN_00eee664(long param_1)

{
  undefined8 uVar1;
  long *plVar2;
  void *pvVar3;
  
  uVar1 = FUN_00e7bda0(1);
  *(undefined8 *)(param_1 + 0x30) = uVar1;
  plVar2 = (long *)FUN_00efc8e0();
  pvVar3 = operator_new(0x10);
  uVar1 = FUN_01988718();
  FUN_00eee828(pvVar3,uVar1,plVar2);
  *(void **)(param_1 + 0x38) = pvVar3;
  uVar1 = FUN_01988718();
  FUN_01986c00(uVar1,*(undefined8 *)(param_1 + 0x38));
  pvVar3 = operator_new(0x10);
  uVar1 = FUN_01988718();
  FUN_00eee718(pvVar3,uVar1);
  (**(code **)(*plVar2 + 0x10))(plVar2,pvVar3);
  return 1;
}




void FUN_00eee700(void)

{
  return;
}




void FUN_00eee704(void)

{
  FUN_01988718();
  return;
}




void FUN_00eee718(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = &PTR_FUN_02824628;
  param_1[1] = param_2;
  return;
}




char * FUN_00eee72c(void)

{
  return "defData";
}




undefined8 FUN_00eee738(long param_1,undefined8 param_2)

{
  void *pvVar1;
  long lVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  long local_58;
  ulong local_50 [2];
  void *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  uVar5 = FUN_00f20e74(param_2);
  local_50[0] = 0;
  local_50[1] = 0;
  local_40 = (void *)0x0;
  FUN_00f1c904(uVar5,local_50);
  pvVar1 = (void *)((ulong)local_50 | 1);
  if ((local_50[0] & 1) != 0) {
    pvVar1 = local_40;
  }
  iVar3 = FUN_00f1c7b0(pvVar1,1);
  if (iVar3 != -1) {
    local_58 = 0;
    uVar4 = FUN_00f1c844(iVar3,&local_58);
    FUN_00f1c7c8(iVar3);
    if (local_58 != 0) {
      FUN_01987070(*(undefined8 *)(param_1 + 8),0,local_58,uVar4);
      FUN_00f1c874(local_58);
    }
  }
  if ((local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00eee818(void)

{
  return;
}




void FUN_00eee820(void)

{
  return;
}




void FUN_00eee824(void)

{
  return;
}




void FUN_00eee828(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = &PTR_FUN_02824688;
  param_1[1] = param_3;
  return;
}




void FUN_00eee83c(long param_1,undefined8 param_2,int param_3)

{
  FUN_00f20ac4(*(undefined8 *)(param_1 + 8),"defData",param_2,(long)param_3,0);
  return;
}




void FUN_00eee860(void)

{
  return;
}




void FUN_00eee864(ulong param_1)

{
  void *pvVar1;
  
  if ((param_1 & 1) != 0) {
    pvVar1 = operator_new(0x18);
    FUN_00eef6a0(0x3f800000);
    DAT_03210ca0 = pvVar1;
  }
  return;
}




void FUN_00eee89c(void)

{
  void *pvVar1;
  
  pvVar1 = DAT_03210ca0;
  if (DAT_03210ca0 != (void *)0x0) {
    FUN_00eef6ac(DAT_03210ca0);
    operator_delete(pvVar1);
  }
  DAT_03210ca0 = (void *)0x0;
  return;
}




void FUN_00eee8d4(void)

{
  if (DAT_03210ca0 != 0) {
    FUN_00eefbf4();
    return;
  }
  return;
}




void FUN_00eee8e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10)

{
  undefined4 uVar1;
  
  if (DAT_03210ca0 != 0) {
    uVar1 = FUN_00e6a474(param_7);
    uVar1 = FUN_0091ed5c(param_7,uVar1,0x12345678);
    FUN_00eef6b4(param_1,param_2,param_3,param_4,param_5,param_6,DAT_03210ca0,uVar1,param_8,param_9,
                 param_10,param_7);
    return;
  }
  return;
}




void FUN_00eee9cc(undefined8 param_1)

{
  undefined4 uVar1;
  
  if (DAT_03210ca0 != 0) {
    uVar1 = FUN_00e6a474(param_1);
    uVar1 = FUN_0091ed5c(param_1,uVar1,0x12345678);
    FUN_00eef8c8(DAT_03210ca0,uVar1);
    return;
  }
  return;
}




undefined1  [16] FUN_00eeea28(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined1 auVar2 [16];
  
  if (DAT_03210ca0 != 0) {
    uVar1 = FUN_00e6a474(param_3);
    uVar1 = FUN_0091ed5c(param_3,uVar1,0x12345678);
    auVar2 = FUN_00eefb10(param_1,param_2,DAT_03210ca0,uVar1);
    return auVar2;
  }
  return ZEXT416(0);
}




undefined8 FUN_00eeeaa4(undefined8 param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_03210ca0 != 0) {
    uVar1 = FUN_00e6a474(param_1);
    uVar1 = FUN_0091ed5c(param_1,uVar1,0x12345678);
    uVar2 = FUN_00eefba4(DAT_03210ca0,uVar1);
    return uVar2;
  }
  return 0;
}




void FUN_00eeeb04(long param_1,uint param_2,uint param_3)

{
  void *pvVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(uint *)(param_1 + 0x18) =
       param_2 & 0x7fff | (param_3 & 0x7fff) << 0xf | *(uint *)(param_1 + 0x18) & 0xc0000000;
  do {
    pvVar1 = operator_new__((ulong)(param_3 * param_2));
    *(void **)(param_1 + lVar2) = pvVar1;
    lVar2 = lVar2 + 8;
  } while (lVar2 != 0x18);
  uVar3 = NEON_fmov(0x3f800000,4);
  *(undefined8 *)(param_1 + 0x2c) = 0;
  *(undefined8 *)(param_1 + 0x24) = 0;
  *(undefined8 *)(param_1 + 0x34) = uVar3;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  return;
}




void FUN_00eeeb78(long param_1)

{
  long lVar1;
  
  lVar1 = 0;
  do {
    if (*(void **)(param_1 + lVar1) != (void *)0x0) {
      operator_delete__(*(void **)(param_1 + lVar1));
    }
    *(undefined8 *)(param_1 + lVar1) = 0;
    lVar1 = lVar1 + 8;
  } while (lVar1 != 0x18);
  return;
}




void FUN_00eeebb4(float param_1,float param_2,float param_3,float param_4,undefined4 param_5,
                 undefined4 param_6,undefined8 *param_7,undefined4 param_8)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  
  *(float *)((long)param_7 + 0x24) = param_1;
  *(float *)(param_7 + 5) = param_2;
  *(float *)((long)param_7 + 0x2c) = param_3;
  *(float *)(param_7 + 6) = param_4;
  uVar1 = *(uint *)(param_7 + 3) & 0x7fff;
  uVar2 = *(uint *)(param_7 + 3) >> 0xf & 0x7fff;
  *(float *)((long)param_7 + 0x34) = (param_3 - param_1) / (float)uVar1;
  *(float *)(param_7 + 7) = (param_4 - param_2) / (float)uVar2;
  memset((void *)*param_7,0,(ulong)(uVar2 * uVar1));
  lVar3 = 0;
  do {
    memset(*(void **)((long)param_7 + lVar3 + 8),0,
           (ulong)((*(uint *)(param_7 + 3) >> 0xf & 0x7fff) * (*(uint *)(param_7 + 3) & 0x7fff)));
    lVar3 = lVar3 + 8;
  } while (lVar3 != 0x10);
  *(undefined4 *)((long)param_7 + 0x1c) = param_5;
  *(undefined4 *)(param_7 + 4) = param_6;
  *(undefined4 *)((long)param_7 + 0x3c) = 0;
  *(undefined4 *)(param_7 + 8) = param_8;
  return;
}




void FUN_00eeec64(long param_1,ulong param_2,int param_3)

{
  memset(*(void **)(param_1 + (param_2 & 0xffffffff) * 8),param_3,
         (ulong)((*(uint *)(param_1 + 0x18) >> 0xf & 0x7fff) * (*(uint *)(param_1 + 0x18) & 0x7fff))
        );
  return;
}




void FUN_00eeec84(float param_1,float param_2,float param_3,long param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  uVar5 = (uint)(param_3 * 255.0);
  uVar1 = *(uint *)(param_4 + 0x18) & 0x7fff;
  uVar3 = uVar1 - 1;
  uVar7 = (uint)((param_1 - *(float *)(param_4 + 0x24)) / *(float *)(param_4 + 0x34));
  uVar4 = (*(uint *)(param_4 + 0x18) >> 0xf & 0x7fff) - 1;
  if (0xfe < (int)uVar5) {
    uVar5 = 0xff;
  }
  uVar6 = (uint)((param_2 - *(float *)(param_4 + 0x28)) / *(float *)(param_4 + 0x38));
  if ((int)uVar3 <= (int)uVar7) {
    uVar7 = uVar3;
  }
  if ((int)uVar4 <= (int)uVar6) {
    uVar6 = uVar4;
  }
  if ((((*(float *)(param_4 + 0x24) <= (float)(int)param_1) &&
       ((float)(int)param_1 <= *(float *)(param_4 + 0x2c))) &&
      (*(float *)(param_4 + 0x28) <= (float)(int)param_2)) &&
     ((float)(int)param_2 <= *(float *)(param_4 + 0x30))) {
    iVar2 = (uVar7 & ((int)uVar7 >> 0x1f ^ 0xffffffffU)) +
            (uVar6 & ((int)uVar6 >> 0x1f ^ 0xffffffffU)) * uVar1;
    uVar1 = (uint)*(byte *)(*(long *)(param_4 + 0x10) + (long)iVar2) +
            (uVar5 & ((int)uVar5 >> 0x1f ^ 0xffffffffU) & 0xff);
    if (0xfe < uVar1) {
      uVar1 = 0xff;
    }
    *(char *)(*(long *)(param_4 + 0x10) + (long)iVar2) = (char)uVar1;
  }
  return;
}




void FUN_00eeed4c(float param_1,float param_2,float param_3,float param_4,long param_5,ulong param_6
                 )

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  ulong uVar10;
  
  uVar3 = (uint)(param_3 * 255.0);
  if (0xfe < (int)uVar3) {
    uVar3 = 0xff;
  }
  if ((param_6 & 1) == 0) {
    uVar6 = *(uint *)(param_5 + 0x18);
    uVar1 = (uVar6 & 0x7fff) - 1;
    uVar4 = (uint)(((param_1 - param_4) - *(float *)(param_5 + 0x24)) / *(float *)(param_5 + 0x34));
    uVar2 = (uVar6 >> 0xf & 0x7fff) - 1;
    uVar7 = (uint)(((param_2 - param_4) - *(float *)(param_5 + 0x28)) / *(float *)(param_5 + 0x38));
    uVar8 = (uint)(((param_1 + param_4) - *(float *)(param_5 + 0x24)) / *(float *)(param_5 + 0x34));
    if ((int)uVar1 <= (int)uVar4) {
      uVar4 = uVar1;
    }
    uVar9 = (uint)(((param_2 + param_4) - *(float *)(param_5 + 0x28)) / *(float *)(param_5 + 0x38));
    if ((int)uVar2 <= (int)uVar7) {
      uVar7 = uVar2;
    }
    if ((int)uVar1 <= (int)uVar8) {
      uVar8 = uVar1;
    }
    if ((int)uVar2 <= (int)uVar9) {
      uVar9 = uVar2;
    }
    uVar7 = uVar7 & ((int)uVar7 >> 0x1f ^ 0xffffffffU);
    uVar9 = uVar9 & ((int)uVar9 >> 0x1f ^ 0xffffffffU);
    if (uVar7 <= uVar9) {
      lVar5 = *(long *)(param_5 + 0x10);
      uVar4 = uVar4 & ((int)uVar4 >> 0x1f ^ 0xffffffffU);
      uVar8 = uVar8 & ((int)uVar8 >> 0x1f ^ 0xffffffffU);
      while( true ) {
        if (uVar4 <= uVar8) {
          uVar10 = (ulong)uVar4 - 1;
          do {
            uVar1 = uVar7 * (uVar6 & 0x7fff) + (int)uVar10 + 1;
            uVar10 = uVar10 + 1;
            uVar2 = (uVar3 & ((int)uVar3 >> 0x1f ^ 0xffffffffU) & 0xff) +
                    (uint)*(byte *)(lVar5 + (ulong)uVar1);
            if (0xfe < uVar2) {
              uVar2 = 0xff;
            }
            *(char *)(lVar5 + (ulong)uVar1) = (char)uVar2;
          } while (uVar10 < uVar8);
        }
        if (uVar9 <= uVar7) break;
        uVar6 = *(uint *)(param_5 + 0x18);
        uVar7 = uVar7 + 1;
      }
    }
  }
  return;
}




float FUN_00eeee70(float param_1,float param_2,long param_3)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  float fVar7;
  
  uVar2 = *(uint *)(param_3 + 0x18);
  lVar1 = 0;
  if ((uVar2 & 0x40000000) != 0) {
    lVar1 = 8;
  }
  uVar3 = (uVar2 & 0x7fff) - 1;
  uVar5 = (uint)((param_1 - *(float *)(param_3 + 0x24)) / *(float *)(param_3 + 0x34));
  uVar4 = (uVar2 >> 0xf & 0x7fff) - 1;
  uVar6 = (uint)((param_2 - *(float *)(param_3 + 0x28)) / *(float *)(param_3 + 0x38));
  if ((int)uVar3 <= (int)uVar5) {
    uVar5 = uVar3;
  }
  if ((int)uVar4 <= (int)uVar6) {
    uVar6 = uVar4;
  }
  fVar7 = 0.0;
  if ((((*(float *)(param_3 + 0x24) <= (float)(int)param_1) &&
       ((float)(int)param_1 <= *(float *)(param_3 + 0x2c))) &&
      (*(float *)(param_3 + 0x28) <= (float)(int)param_2)) &&
     ((float)(int)param_2 <= *(float *)(param_3 + 0x30))) {
    fVar7 = (float)NEON_ucvtf((uint)*(byte *)(*(long *)(param_3 + lVar1) +
                                             (ulong)((uVar5 & ((int)uVar5 >> 0x1f ^ 0xffffffffU)) +
                                                    (uVar6 & ((int)uVar6 >> 0x1f ^ 0xffffffffU)) *
                                                    (uVar2 & 0x7fff))));
    fVar7 = fVar7 / 255.0;
  }
  return fVar7;
}




void FUN_00eeef24(float param_1,float param_2,long param_3,undefined8 param_4,undefined8 param_5,
                 undefined4 param_6,int param_7)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int local_74;
  undefined4 local_6c;
  long local_68;
  
  lVar6 = tpidr_el0;
  local_68 = *(long *)(lVar6 + 0x28);
  local_6c = 0;
  uVar11 = (*(uint *)(param_3 + 0x18) & 0x7fff) - 1;
  uVar3 = (*(uint *)(param_3 + 0x18) >> 0xf & 0x7fff) - 1;
  uVar8 = (uint)((param_1 - *(float *)(param_3 + 0x24)) / *(float *)(param_3 + 0x34));
  uVar9 = (uint)((param_2 - *(float *)(param_3 + 0x28)) / *(float *)(param_3 + 0x38));
  if ((int)uVar11 <= (int)uVar8) {
    uVar8 = uVar11;
  }
  if ((int)uVar3 <= (int)uVar9) {
    uVar9 = uVar3;
  }
  if ((((*(float *)(param_3 + 0x24) <= (float)(int)param_1) &&
       ((float)(int)param_1 <= *(float *)(param_3 + 0x2c))) &&
      (*(float *)(param_3 + 0x28) <= (float)(int)param_2)) &&
     (((float)(int)param_2 <= *(float *)(param_3 + 0x30) && (-1 < param_7)))) {
    uVar8 = uVar8 & ((int)uVar8 >> 0x1f ^ 0xffffffffU);
    uVar9 = uVar9 & ((int)uVar9 >> 0x1f ^ 0xffffffffU);
    local_74 = 0;
    do {
      uVar5 = uVar8 - local_74;
      uVar3 = local_74 + uVar8;
      uVar11 = uVar5;
      if (uVar3 < uVar5) {
        iVar10 = uVar9 - local_74;
      }
      else {
        do {
          uVar7 = FUN_00eef15c(param_3,uVar11,local_74 + uVar9,param_4,param_5,param_6,&local_6c);
          if ((uVar7 & 1) == 0) goto LAB_00eeefd8;
          uVar11 = uVar11 + 1;
        } while (uVar11 <= uVar3);
        iVar10 = uVar9 - local_74;
        for (uVar11 = uVar5; uVar11 <= uVar3; uVar11 = uVar11 + 1) {
          uVar7 = FUN_00eef15c(param_3,uVar11,iVar10,param_4,param_5,param_6,&local_6c);
          if ((uVar7 & 1) == 0) goto LAB_00eeefd8;
        }
      }
      uVar11 = iVar10 + 1;
      uVar4 = (local_74 + uVar9) - 1;
      uVar2 = uVar11;
      while (uVar2 <= uVar4) {
        uVar7 = FUN_00eef15c(param_3,uVar3,uVar2,param_4,param_5,param_6,&local_6c);
        uVar2 = uVar2 + 1;
        if ((uVar7 & 1) == 0) goto LAB_00eeefd8;
      }
      while (uVar11 <= uVar4) {
        uVar7 = FUN_00eef15c(param_3,uVar5,uVar11,param_4,param_5,param_6,&local_6c);
        uVar11 = uVar11 + 1;
        if ((uVar7 & 1) == 0) goto LAB_00eeefd8;
      }
      bVar1 = local_74 < param_7;
      local_74 = local_74 + 1;
    } while (bVar1);
  }
LAB_00eeefd8:
  if (*(long *)(lVar6 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_6c);
}

