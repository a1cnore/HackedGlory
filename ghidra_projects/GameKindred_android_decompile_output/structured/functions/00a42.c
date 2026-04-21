// functions/00a42 — 3 functions
#include "libGameKindred.h"




void FUN_00a42658(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 float param_5,float param_6,long param_7,undefined8 param_8,undefined8 param_9,
                 long param_10)

{
  uint uVar1;
  byte bVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
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
  float fVar20;
  uint local_b8;
  float local_b4;
  float local_b0;
  undefined2 local_ac;
  undefined1 local_aa;
  byte local_a9;
  long local_a8;
  
  lVar3 = tpidr_el0;
  local_a8 = *(long *)(lVar3 + 0x28);
  plVar4 = *(long **)(param_7 + 200);
  uVar5 = 0;
  if (plVar4 != (long *)0x0) {
    if (*(int *)(param_7 + 0xd0) == (int)plVar4[1]) {
      uVar5 = (**(code **)(*plVar4 + 0x10))();
    }
    else {
      *(undefined8 *)(param_7 + 200) = 0;
      uVar5 = 0;
      *(undefined4 *)(param_7 + 0xd0) = DAT_03214ce8;
    }
  }
  FUN_009de99c(uVar5,&local_b0,&local_b4,&local_b8);
  if (0.0 < local_b4) {
    if ((*(byte *)(param_7 + 0x140) & 3) == 0) {
      FUN_00a42ae0(param_1,param_2,param_3,param_4,param_7,param_8,param_9,param_10,0);
    }
    fVar14 = (float)param_1;
    bVar2 = *(byte *)(param_10 + 3);
    fVar19 = (((float)param_3 - (param_5 + param_5)) -
             ((float)(local_b8 - 1) + (float)(local_b8 - 1))) / (float)local_b8;
    fVar10 = (local_b0 * (float)local_b8) / local_b4;
    fVar18 = (float)param_4;
    fVar16 = (float)param_2;
    if (local_b8 != 0) {
      uVar8 = 0;
      do {
        local_ac = 0xffff;
        local_aa = 0xff;
        local_a9 = bVar2 >> 2;
        lVar6 = FUN_00f0a7d4(param_7 + 0xa0,*(undefined4 *)(param_7 + 0x13c));
        fVar11 = (float)NEON_ucvtf((uint)*(ushort *)(lVar6 + 8));
        fVar15 = (float)NEON_ucvtf((uint)*(ushort *)(lVar6 + 10));
        uVar1 = *(uint *)(*(long *)(*(long *)(param_7 + 0xa0) + 8) + 0x3c);
        fVar17 = (float)NEON_ucvtf((uint)*(ushort *)(lVar6 + 6));
        fVar13 = (float)NEON_ucvtf((uint)*(ushort *)(lVar6 + 4));
        fVar20 = 1.0 / (float)(uVar1 & 0x3fff);
        fVar12 = (fVar14 + param_5 + (fVar19 + 2.0) * (float)(int)uVar8) - fVar11 * 0.0;
        fVar15 = fVar16 - fVar15 * 0.0;
        FUN_00965b68(fVar12,fVar15,fVar19 + fVar12,(fVar18 - param_6) + fVar15,0,fVar20 * fVar13,
                     1.0 - (1.0 / (float)(uVar1 >> 0xe & 0x3fff)) * fVar17,
                     (fVar13 + fVar11) * fVar20,param_8,&local_ac,0);
        uVar8 = uVar8 + 1;
      } while (uVar8 < local_b8);
    }
    iVar7 = (int)fVar10;
    if (0 < iVar7) {
      iVar9 = 0;
      do {
        local_ac = 0xffff;
        local_aa = 0xff;
        local_a9 = bVar2;
        lVar6 = FUN_00f0a7d4((long *)(param_7 + 0xa0),*(undefined4 *)(param_7 + 0x13c));
        fVar11 = (float)NEON_ucvtf((uint)*(ushort *)(lVar6 + 8));
        fVar15 = (float)NEON_ucvtf((uint)*(ushort *)(lVar6 + 10));
        uVar8 = *(uint *)(*(long *)(*(long *)(param_7 + 0xa0) + 8) + 0x3c);
        fVar17 = (float)NEON_ucvtf((uint)*(ushort *)(lVar6 + 6));
        fVar13 = (float)NEON_ucvtf((uint)*(ushort *)(lVar6 + 4));
        fVar20 = 1.0 / (float)(uVar8 & 0x3fff);
        fVar12 = (fVar14 + param_5 + (fVar19 + 2.0) * (float)iVar9) - fVar11 * 0.0;
        fVar15 = fVar16 - fVar15 * 0.0;
        FUN_00965b68(fVar12,fVar15,fVar19 + fVar12,(fVar18 - param_6) + fVar15,0,fVar20 * fVar13,
                     1.0 - (1.0 / (float)(uVar8 >> 0xe & 0x3fff)) * fVar17,
                     (fVar13 + fVar11) * fVar20,param_8,&local_ac,0);
        iVar9 = iVar9 + 1;
      } while (iVar7 != iVar9);
    }
    local_a9 = bVar2 >> 1;
    local_ac = 0xffff;
    local_aa = 0xff;
    fVar13 = fmodf(fVar10,1.0);
    lVar6 = FUN_00f0a7d4((long *)(param_7 + 0xa0),*(undefined4 *)(param_7 + 0x13c));
    fVar11 = (float)NEON_ucvtf((uint)*(ushort *)(lVar6 + 8));
    uVar8 = *(uint *)(*(long *)(*(long *)(param_7 + 0xa0) + 8) + 0x3c);
    fVar12 = (float)NEON_ucvtf((uint)*(ushort *)(lVar6 + 10));
    fVar10 = (float)NEON_ucvtf((uint)*(ushort *)(lVar6 + 6));
    fVar15 = (float)NEON_ucvtf((uint)*(ushort *)(lVar6 + 4));
    fVar14 = (fVar14 + param_5 + (fVar19 + 2.0) * (float)iVar7) - fVar11 * 0.0;
    fVar16 = fVar16 - fVar12 * 0.0;
    fVar12 = 1.0 / (float)(uVar8 & 0x3fff);
    FUN_00965b68(fVar14,fVar16,fVar19 * fVar13 + fVar14,(fVar18 - param_6) + fVar16,0,
                 fVar12 * fVar15,1.0 - (1.0 / (float)(uVar8 >> 0xe & 0x3fff)) * fVar10,
                 (fVar15 + fVar11) * fVar12,param_8,&local_ac,0);
  }
  if (*(long *)(lVar3 + 0x28) == local_a8) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a42ae0(float param_1,float param_2,float param_3,float param_4,long param_5,
                 undefined8 param_6,float *param_7,long param_8,uint param_9)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
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
  char local_8c;
  char local_8b;
  char local_8a;
  undefined1 local_89;
  long local_88;
  
  lVar2 = tpidr_el0;
  local_88 = *(long *)(lVar2 + 0x28);
  fVar12 = *param_7;
  fVar10 = param_7[1];
  local_8c = -((byte)(((uint)*(byte *)(param_5 + 0x140) << 4) >> 7) & 1);
  local_89 = *(undefined1 *)(param_8 + 3);
  lVar5 = param_5 + 0xa0;
  fVar15 = fVar12 * 7.0;
  fVar6 = fVar10 * 7.0;
  param_4 = param_4 - fVar6;
  local_8b = local_8c;
  local_8a = local_8c;
  lVar4 = FUN_00f0a7d4(lVar5,DAT_0313241c);
  fVar13 = fVar15 + fVar12 + fVar12;
  fVar16 = fVar6 + fVar10 + fVar10;
  fVar9 = (float)NEON_ucvtf((uint)*(ushort *)(lVar4 + 10));
  fVar8 = (float)NEON_ucvtf((uint)*(ushort *)(lVar4 + 6));
  bVar3 = (param_9 & 1) == 0;
  fVar17 = fVar8 + fVar9;
  if (bVar3) {
    fVar17 = fVar8;
  }
  fVar10 = -(fVar10 + fVar10);
  if (bVar3) {
    fVar10 = param_4;
  }
  uVar1 = *(uint *)(*(long *)(*(long *)(param_5 + 0xa0) + 8) + 0x3c);
  fVar8 = (float)NEON_ucvtf((uint)*(ushort *)(lVar4 + 8));
  fVar11 = (float)NEON_ucvtf((uint)*(ushort *)(lVar4 + 4));
  fVar7 = (param_1 - (fVar12 + fVar12)) - fVar8 * 0.0;
  fVar14 = 1.0 / (float)(uVar1 & 0x3fff);
  fVar12 = (fVar10 + param_2) - fVar9 * 0.0;
  FUN_00965b68(fVar7,SUB42(fVar12,0),SUB42(fVar13 + fVar7,0),SUB42(fVar16 + fVar12,0),0,
               SUB42(fVar14 * fVar11,0),1.0 - (1.0 / (float)(uVar1 >> 0xe & 0x3fff)) * fVar17,
               (fVar11 + fVar8) * fVar14,param_6,&local_8c,0);
  lVar4 = FUN_00f0a7d4(lVar5,DAT_0313241c);
  bVar3 = (param_9 & 1) == 0;
  fVar8 = (float)NEON_ucvtf((uint)*(ushort *)(lVar4 + 10));
  fVar12 = (float)NEON_ucvtf((uint)*(ushort *)(lVar4 + 6));
  fVar9 = fVar12 + fVar8;
  if (bVar3) {
    fVar9 = fVar12;
  }
  fVar12 = fVar6;
  if (bVar3) {
    fVar12 = 0.0;
  }
  fVar17 = 0.0;
  if (bVar3) {
    fVar17 = param_4;
  }
  uVar1 = *(uint *)(*(long *)(*(long *)(param_5 + 0xa0) + 8) + 0x3c);
  fVar7 = (float)NEON_ucvtf((uint)*(ushort *)(lVar4 + 8));
  fVar14 = (float)NEON_ucvtf((uint)*(ushort *)(lVar4 + 4));
  fVar11 = ((param_1 + param_3) - fVar15) - fVar7 * 0.0;
  fVar10 = (fVar10 + param_2) - fVar8 * 0.0;
  fVar8 = 1.0 / (float)(uVar1 & 0x3fff);
  FUN_00965b68(fVar11,SUB42(fVar10,0),SUB42(fVar13 + fVar11,0),SUB42(fVar16 + fVar10,0),0,
               SUB42((fVar14 + fVar7) * fVar8,0),
               1.0 - (1.0 / (float)(uVar1 >> 0xe & 0x3fff)) * fVar9,fVar8 * fVar14,param_6,&local_8c
               ,0);
  lVar4 = FUN_00f0a7d4(lVar5,DAT_03132414);
  fVar9 = (float)NEON_ucvtf((uint)*(ushort *)(lVar4 + 10));
  fVar13 = (float)NEON_ucvtf((uint)*(ushort *)(lVar4 + 6));
  uVar1 = *(uint *)(*(long *)(*(long *)(param_5 + 0xa0) + 8) + 0x3c);
  fVar12 = (fVar12 + param_2) - fVar9 * 0.0;
  fVar9 = (float)NEON_ucvtf((uint)*(ushort *)(lVar4 + 8));
  fVar8 = (float)NEON_ucvtf((uint)*(ushort *)(lVar4 + 4));
  fVar16 = 1.0 / (float)(uVar1 & 0x3fff);
  fVar10 = param_1 - fVar9 * 0.0;
  FUN_00965b68(fVar10,SUB42(fVar12,0),SUB42(fVar10 + param_3,0),SUB42(param_4 + fVar12,0),0,
               SUB42(fVar16 * fVar8,0),1.0 - (1.0 / (float)(uVar1 >> 0xe & 0x3fff)) * fVar13,
               (fVar8 + fVar9) * fVar16,param_6,&local_8c,0);
  lVar5 = FUN_00f0a7d4(lVar5,DAT_03132414);
  fVar12 = (float)NEON_ucvtf((uint)*(ushort *)(lVar5 + 10));
  fVar13 = (float)NEON_ucvtf((uint)*(ushort *)(lVar5 + 6));
  uVar1 = *(uint *)(*(long *)(*(long *)(param_5 + 0xa0) + 8) + 0x3c);
  fVar12 = (fVar17 + param_2) - fVar12 * 0.0;
  fVar9 = (float)NEON_ucvtf((uint)*(ushort *)(lVar5 + 8));
  fVar8 = (float)NEON_ucvtf((uint)*(ushort *)(lVar5 + 4));
  fVar17 = 1.0 / (float)(uVar1 & 0x3fff);
  fVar10 = (fVar15 + param_1) - fVar9 * 0.0;
  FUN_00965b68(fVar10,SUB42(fVar12,0),SUB42((param_3 - (fVar15 + fVar15)) + fVar10,0),
               SUB42(fVar6 + fVar12,0),0,SUB42(fVar17 * fVar8,0),
               1.0 - (1.0 / (float)(uVar1 >> 0xe & 0x3fff)) * fVar13,(fVar8 + fVar9) * fVar17,
               param_6,&local_8c,0);
  if (*(long *)(lVar2 + 0x28) != local_88) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00a42eec(float param_1,float param_2,float param_3,float param_4,long param_5,
                 undefined8 param_6,float *param_7,undefined8 param_8)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  long lVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  fVar9 = *param_7 * 9.0;
  lVar6 = param_5 + 0xa0;
  lVar5 = FUN_00f0a7d4(lVar6,*(undefined4 *)(param_5 + 0x118));
  uVar1 = *(uint *)(*(long *)(*(long *)(param_5 + 0xa0) + 8) + 0x3c);
  fVar2 = (float)NEON_ucvtf((uint)*(ushort *)(lVar5 + 8));
  fVar4 = (float)NEON_ucvtf((uint)*(ushort *)(lVar5 + 10));
  fVar8 = (float)NEON_ucvtf((uint)*(ushort *)(lVar5 + 6));
  fVar7 = (float)NEON_ucvtf((uint)*(ushort *)(lVar5 + 4));
  fVar10 = 1.0 / (float)(uVar1 & 0x3fff);
  fVar3 = param_1 - fVar2 * 0.0;
  fVar4 = param_2 - fVar4 * 0.0;
  FUN_00965b68(SUB42(fVar3,0),SUB42(fVar4,0),SUB42(fVar9 + fVar3,0),SUB42(fVar4 + param_4,0),0,
               fVar10 * fVar7,1.0 - (1.0 / (float)(uVar1 >> 0xe & 0x3fff)) * fVar8,
               (fVar7 + fVar2) * fVar10,param_6,param_8,0);
  lVar5 = FUN_00f0a7d4(lVar6,*(undefined4 *)(param_5 + 0x11c));
  fVar2 = (float)NEON_ucvtf((uint)*(ushort *)(lVar5 + 8));
  fVar7 = (float)NEON_ucvtf((uint)*(ushort *)(lVar5 + 4));
  uVar1 = *(uint *)(*(long *)(*(long *)(param_5 + 0xa0) + 8) + 0x3c);
  fVar3 = (fVar9 + param_1) - fVar2 * 0.0;
  fVar4 = (float)NEON_ucvtf((uint)*(ushort *)(lVar5 + 10));
  fVar8 = (float)NEON_ucvtf((uint)*(ushort *)(lVar5 + 6));
  fVar10 = 1.0 / (float)(uVar1 & 0x3fff);
  fVar4 = param_2 - fVar4 * 0.0;
  FUN_00965b68(SUB42(fVar3,0),SUB42(fVar4,0),SUB42((param_3 - (fVar9 + fVar9)) + fVar3,0),
               SUB42(fVar4 + param_4,0),0,fVar10 * fVar7,
               1.0 - (1.0 / (float)(uVar1 >> 0xe & 0x3fff)) * fVar8,(fVar7 + fVar2) * fVar10,param_6
               ,param_8,0);
  lVar6 = FUN_00f0a7d4(lVar6,*(undefined4 *)(param_5 + 0x120));
  fVar2 = (float)NEON_ucvtf((uint)*(ushort *)(lVar6 + 8));
  fVar4 = (float)NEON_ucvtf((uint)*(ushort *)(lVar6 + 10));
  uVar1 = *(uint *)(*(long *)(*(long *)(param_5 + 0xa0) + 8) + 0x3c);
  fVar8 = (float)NEON_ucvtf((uint)*(ushort *)(lVar6 + 6));
  fVar7 = (float)NEON_ucvtf((uint)*(ushort *)(lVar6 + 4));
  fVar10 = 1.0 / (float)(uVar1 & 0x3fff);
  fVar3 = ((param_1 + param_3) - fVar9) - fVar2 * 0.0;
  param_2 = param_2 - fVar4 * 0.0;
  FUN_00965b68(SUB42(fVar3,0),SUB42(param_2,0),SUB42(fVar9 + fVar3,0),SUB42(param_2 + param_4,0),0,
               fVar10 * fVar7,1.0 - (1.0 / (float)(uVar1 >> 0xe & 0x3fff)) * fVar8,
               (fVar7 + fVar2) * fVar10,param_6,param_8,0);
  return;
}

