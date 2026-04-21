// functions/00f19 — 19 functions
#include "libGameKindred.h"




void FUN_00f1900c(int *param_1,undefined8 param_2)

{
  if (*param_1 - 1U < 2) {
    if (*(long *)(param_1 + 2) != 0) {
      FUN_00f1c874();
    }
    memset(param_1 + 2,0,0x48);
  }
  if (*(long *)(param_1 + 0x14) != 0) {
    FUN_00f05200(param_2);
    param_1[0x14] = 0;
    param_1[0x15] = 0;
  }
  *param_1 = 3;
  param_1[0x16] = 0;
  return;
}




uint FUN_00f19084(long param_1)

{
  uint uVar1;
  
  if ((*(long *)(param_1 + 0x50) != 0) &&
     (uVar1 = (uint)*(ushort *)(*(long *)(*(long *)(param_1 + 0x50) + 8) + 0x36),
     ((uVar1 ^ 0xf) & 0x1f) != 0)) {
    return 0x39e5ffeaU >> (ulong)((uVar1 ^ 0x10) & 0x1f) & 1;
  }
  return 1;
}




uint FUN_00f190c4(long *param_1,int param_2)

{
  undefined1 *puVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  ushort uVar7;
  long lVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  long lVar12;
  float fVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  float fVar17;
  float fVar18;
  undefined4 local_90;
  int local_8c;
  undefined4 local_88;
  int local_84;
  int local_80;
  float local_7c;
  float local_78;
  float local_74;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  long local_58;
  
  lVar8 = tpidr_el0;
  local_58 = *(long *)(lVar8 + 0x28);
  uVar4 = *(uint *)(param_1 + 5);
  if (uVar4 != 0) {
    uVar10 = 0;
    do {
      if (*(int *)(param_1[6] + (ulong)uVar10 * 0x28) == param_2) goto LAB_00f192f8;
      uVar10 = uVar10 + 1;
    } while (uVar10 < uVar4);
  }
  lVar12 = *param_1;
  if ((lVar12 == 0) || (1 < *(int *)((long)param_1 + 0x24) - 1U)) {
    uVar10 = 0xffff;
  }
  else {
    iVar3 = param_2 + -0x1d7c6;
    if (9 < param_2 - 0x1d7f6U) {
      iVar3 = param_2;
    }
    local_80 = 0;
    iVar9 = FUN_00f1adfc(lVar12 + 0x18,iVar3);
    lVar2 = *(long *)(lVar12 + 0x20) + (long)*(int *)(lVar12 + 0x3c);
    uVar4 = (uint)CONCAT11(*(undefined1 *)(lVar2 + 0x22),*(undefined1 *)(lVar2 + 0x23));
    iVar11 = iVar9 << 2;
    if ((int)uVar4 <= iVar9) {
      iVar11 = uVar4 * 4 + -4;
    }
    puVar1 = (undefined1 *)(*(long *)(lVar12 + 0x20) + (long)*(int *)(lVar12 + 0x40) + (long)iVar11)
    ;
    uVar5 = *puVar1;
    uVar6 = puVar1[1];
    FUN_00f1b0a4(0x3f800000,0x3f800000,lVar12 + 0x18,iVar9,&local_84,&local_88,&local_8c,&local_90);
    if (param_2 - 0x1d7f6U < 10) {
      fVar13 = (float)local_8c;
      local_8c = (int)*(float *)((long)param_1 + 0x1c);
      local_84 = (int)((*(float *)((long)param_1 + 0x1c) - fVar13) * 0.5 + (float)local_84);
      iVar11 = (int)*(float *)(param_1 + 4);
    }
    else {
      iVar11 = (int)CONCAT11(uVar5,uVar6);
    }
    uVar7 = *(ushort *)(*(long *)(*param_1 + 0x20) + (long)*(int *)(*param_1 + 0x34) + 0x12);
    fVar13 = (float)NEON_ucvtf((uint)*(ushort *)((long)param_1 + 0xc));
    fVar13 = fVar13 / (float)(ushort)(uVar7 >> 8 | uVar7 << 8);
    uVar15 = NEON_scvtf(CONCAT44(local_88,local_84),4);
    uVar16 = NEON_scvtf(CONCAT44(local_90,local_8c),4);
    fVar17 = (float)param_1[7];
    fVar18 = (float)((ulong)param_1[7] >> 0x20);
    local_7c = fVar13 * (float)iVar11;
    uVar14 = NEON_fmov(0x3f800000,4);
    local_78 = ((float)(int)((float)uVar15 * fVar13 * fVar17) + 0.0) / fVar17;
    local_74 = ((float)(int)((float)((ulong)uVar15 >> 0x20) * fVar13 * fVar18) + 0.0) / fVar18;
    local_70 = CONCAT44(((float)(int)((float)((ulong)uVar16 >> 0x20) * fVar13 * fVar18) +
                        (float)((ulong)uVar14 >> 0x20)) / fVar18 - local_74,
                        ((float)(int)((float)uVar16 * fVar13 * fVar17) + (float)uVar14) / fVar17 -
                        local_78);
    local_74 = -local_74;
    local_68 = 0;
    uStack_60 = 0;
    local_80 = iVar3;
    FUN_00f1932c(param_1 + 5,&local_80);
    uVar10 = (int)param_1[5] + 0xffff;
  }
LAB_00f192f8:
  if (*(long *)(lVar8 + 0x28) == local_58) {
    return uVar10 & 0xffff;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00f1932c(uint *param_1,undefined8 *param_2)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  
  uVar4 = *param_1;
  if (uVar4 == param_1[1]) {
    if (uVar4 < 0x20) {
      uVar3 = uVar4 << 1;
    }
    else if (uVar4 == 0xffffffff) {
      uVar3 = 0;
    }
    else {
      uVar3 = (uVar4 + 0x10) - (uVar4 & 0xf);
    }
    uVar1 = uVar4 + 1;
    if (uVar4 + 1 <= uVar3) {
      uVar1 = uVar3;
    }
    FUN_00f1bfa4(param_1,uVar1);
    uVar4 = *param_1;
  }
  *param_1 = uVar4 + 1;
  lVar2 = *(long *)(param_1 + 2) + (ulong)(uVar4 + 1) * 0x28;
  *(undefined8 *)(lVar2 + -8) = param_2[4];
  uVar5 = param_2[2];
  *(undefined8 *)(lVar2 + -0x10) = param_2[3];
  *(undefined8 *)(lVar2 + -0x18) = uVar5;
  uVar5 = *param_2;
  *(undefined8 *)(lVar2 + -0x20) = param_2[1];
  *(undefined8 *)(lVar2 + -0x28) = uVar5;
  return;
}




void FUN_00f193c8(undefined4 param_1,undefined4 param_2,undefined8 *param_3)

{
  *(undefined4 *)(param_3 + 7) = param_1;
  *(undefined4 *)((long)param_3 + 0x3c) = param_2;
  if ((((int *)*param_3 != (int *)0x0) && (*(int *)*param_3 != 0)) && (param_3[6] != 0)) {
    *(undefined4 *)(param_3 + 5) = 0;
  }
  return;
}




void FUN_00f193ec(long *param_1,undefined8 param_2)

{
  if (*param_1 != 0) {
    FUN_00f05764(param_2,*param_1);
  }
  *param_1 = 0;
  if ((void *)param_1[6] != (void *)0x0) {
    operator_delete__((void *)param_1[6]);
    param_1[5] = 0;
    param_1[6] = 0;
  }
  return;
}




undefined8 FUN_00f19430(uint *param_1,uint param_2)

{
  ulong uVar1;
  uint *puVar2;
  
  if (*param_1 != 0) {
    uVar1 = 0;
    puVar2 = param_1 + 3;
    do {
      if ((puVar2[-1] <= param_2) && (param_2 <= *puVar2)) {
        return 1;
      }
      uVar1 = uVar1 + 1;
      puVar2 = puVar2 + 2;
    } while (uVar1 < *param_1);
  }
  return 0;
}




undefined2 FUN_00f19478(long param_1,uint param_2)

{
  uint uVar1;
  undefined2 uVar2;
  ulong uVar3;
  uint *puVar4;
  ulong uVar5;
  uint *puVar6;
  
  if (*(uint *)(param_1 + 0x10) != 0) {
    uVar3 = 0;
    puVar4 = (uint *)(param_1 + 0x24);
    do {
      uVar1 = *(uint *)(param_1 + 0x18 + uVar3 * 0x90);
      if (uVar1 != 0) {
        uVar5 = 0;
        puVar6 = puVar4;
        do {
          if ((puVar6[-1] <= param_2) && (param_2 <= *puVar6)) {
            uVar2 = FUN_00f058ec(*(undefined8 *)(param_1 + 0x938),
                                 *(undefined8 *)
                                  (param_1 + 0x18 + (uVar3 & 0xffffffff) * 0x90 + 0x88));
            return uVar2;
          }
          uVar5 = uVar5 + 1;
          puVar6 = puVar6 + 2;
        } while (uVar5 < uVar1);
      }
      uVar3 = uVar3 + 1;
      puVar4 = puVar4 + 0x24;
    } while (uVar3 < *(uint *)(param_1 + 0x10));
  }
  return 0xffff;
}




void FUN_00f1951c(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (*(byte *)(param_3 + 0x12) < 2) {
    FUN_00f19538();
    return;
  }
  if (*(byte *)(param_3 + 0x12) == 2) {
    FUN_00f19798();
    return;
  }
  return;
}




void FUN_00f19538(uint *param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined2 *puVar1;
  undefined4 uVar2;
  uint uVar3;
  ushort uVar4;
  ushort uVar5;
  long lVar6;
  undefined1 uVar7;
  undefined2 uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  undefined4 *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  ushort *puVar17;
  uint *puVar18;
  undefined8 local_200;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined8 uStack_1ec;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined1 auStack_1b0 [256];
  ushort local_b0;
  short sStack_ae;
  undefined2 uStack_ac;
  undefined2 uStack_aa;
  undefined6 uStack_a8;
  undefined2 uStack_a2;
  undefined2 uStack_a0;
  byte bStack_9e;
  undefined5 uStack_9d;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined4 local_80;
  
  lVar6 = tpidr_el0;
  lVar10 = *(long *)(lVar6 + 0x28);
  puVar18 = param_1 + 4;
  uVar3 = *puVar18;
  *(undefined8 *)(param_1 + 0x24e) = param_2;
  memset(puVar18 + (ulong)uVar3 * 0x24 + 2,0,0x90);
  *puVar18 = uVar3 + 1;
  (puVar18 + (ulong)uVar3 * 0x24 + 4)[0] = 0;
  (puVar18 + (ulong)uVar3 * 0x24 + 4)[1] = 0xffff;
  puVar18[(ulong)uVar3 * 0x24 + 2] = 1;
  uVar13 = *param_3;
  uStack_a8 = (undefined6)param_3[1];
  uStack_a2 = (undefined2)((ulong)param_3[1] >> 0x30);
  local_b0 = (ushort)uVar13;
  sStack_ae = (short)((ulong)uVar13 >> 0x10);
  uStack_ac = (undefined2)((ulong)uVar13 >> 0x20);
  uStack_aa = (undefined2)((ulong)uVar13 >> 0x30);
  local_80 = *(undefined4 *)(param_3 + 6);
  uStack_88 = param_3[5];
  local_90 = param_3[4];
  uStack_98 = param_3[3];
  uVar13 = param_3[2];
  uStack_a0 = (undefined2)uVar13;
  bStack_9e = (byte)((ulong)uVar13 >> 0x10);
  uStack_9d = (undefined5)((ulong)uVar13 >> 0x18);
  *(undefined2 *)(param_1 + 0x246) = uStack_ac;
  *(ulong *)(param_1 + 0x247) = CONCAT62(uStack_a8,uStack_aa);
  param_1[0x249] = CONCAT22(uStack_a0,uStack_a2);
  param_1[0x24c] = (uint)bStack_9e;
  FUN_00e6faf4(auStack_1b0,"%s://%.2s/%s",param_5,&uStack_9d,&uStack_9d);
  uVar7 = FUN_00f055d0(param_2,param_1[0x24c],auStack_1b0);
  local_200 = *(undefined8 *)(param_1 + 0x246);
  uStack_1f8 = (undefined4)*(undefined8 *)(param_1 + 0x248);
  uStack_1ec = *(undefined8 *)(param_1 + 0x24b);
  uStack_1f4 = (undefined4)*(undefined8 *)(param_1 + 0x249);
  uStack_1f0 = (undefined4)((ulong)*(undefined8 *)(param_1 + 0x249) >> 0x20);
  uVar8 = FUN_00f054c4(param_2,uVar7,&local_200);
  lVar9 = FUN_00f058b4(param_2,uVar8);
  *(long *)(puVar18 + (ulong)uVar3 * 0x24 + 0x24) = lVar9;
  if (local_b0 != 0 || sStack_ae != 0) {
    puVar17 = (ushort *)((long)param_3 + 0x34);
    local_1b8 = 0;
    uStack_1c0 = 0;
    local_1c8 = 0;
    uStack_1d0 = 0;
    local_1d8 = 0;
    FUN_00f19950(lVar9 + 0x28,local_b0,&local_1d8);
    FUN_00f199f4(param_1,sStack_ae,0xffff0000ffff,0);
    if (local_b0 != 0) {
      uVar11 = 0;
      puVar12 = (undefined4 *)(*(long *)(lVar9 + 0x30) + 0x14);
      do {
        uVar15 = *(undefined8 *)(puVar17 + 1);
        uVar16 = *(undefined8 *)(puVar17 + 5);
        uVar2 = *(undefined4 *)(puVar17 + 9);
        uVar4 = *puVar17;
        uVar14 = *(undefined8 *)(puVar17 + 0xb);
        uVar13 = *(undefined8 *)(puVar17 + 0xf);
        puVar17 = puVar17 + 0x13;
        puVar12[-5] = (uint)uVar4;
        *(undefined8 *)(puVar12 + -4) = uVar15;
        *(undefined8 *)(puVar12 + -2) = uVar16;
        *puVar12 = uVar2;
        if (bStack_9e == 0) {
          *(undefined8 *)(puVar12 + 1) = uVar14;
          *(undefined8 *)(puVar12 + 3) = uVar13;
        }
        uVar11 = uVar11 + 1;
        puVar12 = puVar12 + 10;
      } while (uVar11 < local_b0);
    }
    if (*param_1 != 0) {
      lVar9 = 0;
      uVar11 = 0;
      do {
        uVar4 = *puVar17;
        uVar5 = puVar17[1];
        uVar2 = *(undefined4 *)(puVar17 + 2);
        puVar1 = (undefined2 *)(*(long *)(param_1 + 2) + lVar9);
        *puVar1 = uVar8;
        puVar1[1] = uVar4;
        puVar1[2] = uVar8;
        puVar1[3] = uVar5;
        *(undefined4 *)(puVar1 + 4) = uVar2;
        uVar11 = uVar11 + 1;
        lVar9 = lVar9 + 0xc;
        puVar17 = puVar17 + 4;
      } while (uVar11 < *param_1);
    }
  }
  if (*(long *)(lVar6 + 0x28) != lVar10) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00f19798(long param_1,undefined8 param_2,ushort *param_3,undefined8 param_4,
                 undefined8 param_5)

{
  uint *puVar1;
  uint uVar2;
  undefined4 uVar3;
  ushort uVar4;
  long lVar5;
  ushort uVar6;
  undefined4 uVar7;
  undefined1 uVar8;
  undefined2 uVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  uint uVar13;
  uint *__s;
  uint uVar14;
  undefined2 local_200 [2];
  undefined8 local_1fc;
  undefined4 local_1f4;
  undefined4 local_1e8;
  undefined1 auStack_1e0 [256];
  undefined2 local_e0;
  undefined8 local_de;
  undefined4 local_d6;
  undefined1 auStack_d2 [33];
  ushort local_b1 [40];
  
  lVar5 = tpidr_el0;
  lVar10 = *(long *)(lVar5 + 0x28);
  *(undefined8 *)(param_1 + 0x938) = param_2;
  uVar12 = *(undefined8 *)(param_3 + 3);
  uVar3 = *(undefined4 *)(param_3 + 7);
  uVar6 = param_3[9];
  uVar4 = *param_3;
  *(ushort *)(param_1 + 0x918) = param_3[2];
  *(undefined8 *)(param_1 + 0x91c) = uVar12;
  *(undefined4 *)(param_1 + 0x924) = uVar3;
  *(uint *)(param_1 + 0x930) = (uint)(byte)uVar6;
  if (uVar4 != 0) {
    uVar14 = 0;
    param_3 = param_3 + 0x1a;
    do {
      uVar13 = *(uint *)(param_1 + 0x10);
      __s = (uint *)(param_1 + 0x18 + (ulong)uVar13 * 0x90);
      memset(__s,0,0x90);
      *(uint *)(param_1 + 0x10) = uVar13 + 1;
      memcpy(&local_e0,param_3,0x6f);
      uVar7 = local_d6;
      uVar12 = local_de;
      uVar9 = local_e0;
      uVar3 = *(undefined4 *)(param_1 + 0x930);
      FUN_00e6faf4(auStack_1e0,"%s://%.2s/%s",param_5,auStack_d2,auStack_d2);
      uVar8 = FUN_00f055d0(*(undefined8 *)(param_1 + 0x938),*(undefined4 *)(param_1 + 0x930),
                           auStack_1e0);
      local_200[0] = uVar9;
      local_1fc = uVar12;
      local_1f4 = uVar7;
      local_1e8 = uVar3;
      uVar9 = FUN_00f054c4(*(undefined8 *)(param_1 + 0x938),uVar8,local_200);
      uVar12 = FUN_00f058b4(*(undefined8 *)(param_1 + 0x938),uVar9);
      lVar11 = 0;
      *(undefined8 *)(__s + 0x22) = uVar12;
      do {
        uVar13 = (uint)*(ushort *)((long)local_b1 + lVar11 + 2);
        if (uVar13 != 0) {
          uVar2 = *__s;
          uVar6 = *(ushort *)((long)local_b1 + lVar11);
          puVar1 = __s + (ulong)uVar2 * 2 + 2;
          puVar1[0] = 0;
          puVar1[1] = 0;
          *__s = uVar2 + 1;
          *puVar1 = (uint)uVar6;
          puVar1[1] = uVar13;
        }
        lVar11 = lVar11 + 4;
      } while (lVar11 != 0x40);
      uVar14 = uVar14 + 1;
      param_3 = (ushort *)((long)param_3 + 0x6f);
    } while (uVar14 != uVar4);
  }
  if (*(long *)(lVar5 + 0x28) == lVar10) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00f19950(uint *param_1,uint param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  if (param_2 == 0) {
    if (*(long *)(param_1 + 2) != 0) {
      *param_1 = 0;
    }
  }
  else {
    if (param_1[1] < param_2) {
      FUN_00f1bfa4(param_1,param_2);
    }
    uVar2 = *param_1;
    if (uVar2 < param_2) {
      lVar3 = (ulong)uVar2 * 0x28;
      lVar4 = (ulong)param_2 - (ulong)uVar2;
      do {
        lVar4 = lVar4 + -1;
        puVar1 = (undefined8 *)(*(long *)(param_1 + 2) + lVar3);
        puVar1[4] = param_3[4];
        uVar5 = param_3[2];
        lVar3 = lVar3 + 0x28;
        puVar1[3] = param_3[3];
        puVar1[2] = uVar5;
        uVar5 = *param_3;
        puVar1[1] = param_3[1];
        *puVar1 = uVar5;
      } while (lVar4 != 0);
    }
    *param_1 = param_2;
  }
  return;
}




void FUN_00f199f4(uint *param_1,uint param_2,undefined8 param_3,undefined4 param_4)

{
  undefined8 *puVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  
  if (param_2 == 0) {
    if (*(long *)(param_1 + 2) != 0) {
      *param_1 = 0;
    }
  }
  else {
    if (param_1[1] < param_2) {
      FUN_00f1c03c(param_1,param_2);
    }
    uVar2 = *param_1;
    if (uVar2 < param_2) {
      lVar3 = (ulong)uVar2 * 0xc;
      lVar4 = (ulong)param_2 - (ulong)uVar2;
      do {
        lVar4 = lVar4 + -1;
        puVar1 = (undefined8 *)(*(long *)(param_1 + 2) + lVar3);
        lVar3 = lVar3 + 0xc;
        *puVar1 = param_3;
        *(undefined4 *)(puVar1 + 1) = param_4;
      } while (lVar4 != 0);
    }
    *param_1 = param_2;
  }
  return;
}




void FUN_00f19a8c(undefined4 *param_1)

{
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  *param_1 = 3;
  param_1[0x16] = 0;
  return;
}




void FUN_00f19aa4(int *param_1,undefined8 param_2,int param_3,byte *param_4)

{
  ushort *puVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  ushort uVar4;
  long lVar5;
  byte *pbVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  ulong uVar14;
  undefined8 uVar15;
  uint uVar16;
  uint uVar17;
  long lVar18;
  undefined8 local_88;
  ulong local_80 [2];
  void *local_70;
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  *param_1 = param_3;
  if (param_4 == (byte *)0x0) {
    uVar8 = 0;
  }
  else {
    uVar16 = (uint)*param_4;
    uVar8 = 0x811c9dc5;
    pbVar6 = param_4;
    if (*param_4 != 0) {
      do {
        uVar17 = (uint)pbVar6[1];
        uVar8 = (uVar8 ^ uVar16) * 0x1000193;
        uVar16 = uVar17;
        pbVar6 = pbVar6 + 1;
      } while (uVar17 != 0);
    }
  }
  param_1[0x16] = uVar8;
  if (param_3 - 1U < 2) {
    local_80[0] = 0;
    local_80[1] = 0;
    local_70 = (void *)0x0;
    FUN_00f1c8ec(param_4,local_80);
    iVar7 = FUN_00f1c7b0(param_4,1);
    if (iVar7 != -1) {
      uVar14 = FUN_00f1c844(iVar7,&local_88);
      *(undefined8 *)(param_1 + 2) = local_88;
      *(ulong *)(param_1 + 4) = uVar14 & 0xffffffff;
      FUN_00f1c7c8(iVar7);
      if (*(long *)(param_1 + 4) == 0) {
        FUN_00f1900c(param_1,param_2);
      }
      else {
        lVar18 = *(long *)(param_1 + 2);
        param_1[10] = 0;
        *(long *)(param_1 + 8) = lVar18;
        uVar8 = FUN_00f1b24c(lVar18,&DAT_01bf47b1);
        iVar7 = FUN_00f1b24c(lVar18,&DAT_01bf47b6);
        param_1[0xc] = iVar7;
        iVar9 = FUN_00f1b24c(lVar18,&DAT_01bf47bb);
        param_1[0xd] = iVar9;
        iVar10 = FUN_00f1b24c(lVar18,&DAT_01bf47c0);
        param_1[0xe] = iVar10;
        iVar11 = FUN_00f1b24c(lVar18,&DAT_01bf47c5);
        param_1[0xf] = iVar11;
        iVar12 = FUN_00f1b24c(lVar18,&DAT_01bf47ca);
        param_1[0x10] = iVar12;
        iVar13 = FUN_00f1b24c(lVar18,&DAT_01bf47cf);
        param_1[0x11] = iVar13;
        if (((((uVar8 != 0) && (iVar7 != 0)) && (iVar9 != 0)) && ((iVar10 != 0 && (iVar11 != 0))))
           && (iVar12 != 0)) {
          uVar16 = FUN_00f1b24c(lVar18,&DAT_01bf47d4);
          if (uVar16 == 0) {
            uVar16 = 0xffff;
          }
          else {
            uVar16 = (uint)CONCAT11(*(undefined1 *)(lVar18 + (ulong)uVar16 + 4),
                                    *(undefined1 *)(lVar18 + (ulong)uVar16 + 5));
          }
          param_1[0xb] = uVar16;
          uVar2 = *(undefined1 *)(lVar18 + (ulong)uVar8 + 2);
          uVar3 = *(undefined1 *)(lVar18 + (ulong)uVar8 + 3);
          param_1[0x12] = 0;
          uVar16 = (uint)CONCAT11(uVar2,uVar3);
          uVar14 = (ulong)uVar16;
          if (uVar16 != 0) {
            iVar7 = 0;
            uVar16 = uVar8 + 4;
            do {
              puVar1 = (ushort *)(lVar18 + (ulong)uVar16);
              uVar4 = *puVar1 >> 8 | *puVar1 << 8;
              if ((uVar4 == 0) ||
                 ((uVar4 == 3 &&
                  ((uVar4 = puVar1[1] >> 8 | puVar1[1] << 8, uVar4 == 10 || (uVar4 == 1)))))) {
                uVar17 = (*(uint *)(puVar1 + 2) & 0xff00ff00) >> 8 |
                         (*(uint *)(puVar1 + 2) & 0xff00ff) << 8;
                iVar7 = (uVar17 >> 0x10 | uVar17 << 0x10) + uVar8;
                param_1[0x12] = iVar7;
              }
              uVar14 = uVar14 - 1;
              uVar16 = uVar16 + 8;
            } while (uVar14 != 0);
            if (iVar7 != 0) {
              param_1[0x13] =
                   (uint)CONCAT11(*(undefined1 *)(lVar18 + iVar9 + 0x32),
                                  *(undefined1 *)(lVar18 + iVar9 + 0x33));
            }
          }
        }
      }
    }
    if ((local_80[0] & 1) != 0) {
      operator_delete(local_70);
    }
  }
  else if (param_3 == 0) {
    uVar15 = FUN_00f050fc(param_2,param_4);
    *(undefined8 *)(param_1 + 0x14) = uVar15;
  }
  if (*(long *)(lVar5 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00f19d6c(undefined8 *param_1,undefined8 param_2,undefined1 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00f058d0(param_2,param_3);
  *param_1 = uVar1;
  *(undefined2 *)(param_1 + 1) = *(undefined2 *)param_4;
  uVar1 = *(undefined8 *)((long)param_4 + 0xc);
  param_1[4] = *(undefined8 *)((long)param_4 + 0x14);
  param_1[3] = uVar1;
  uVar1 = *param_4;
  *(undefined8 *)((long)param_1 + 0x14) = param_4[1];
  *(undefined8 *)((long)param_1 + 0xc) = uVar1;
  FUN_00f0036c(param_1 + 7,(long)param_1 + 0x3c);
  return;
}




undefined4 FUN_00f19dc0(long param_1,uint param_2)

{
  uint uVar1;
  short sVar2;
  short sVar3;
  ulong uVar4;
  uint *puVar5;
  ulong uVar6;
  uint *puVar7;
  long lVar8;
  
  if (*(uint *)(param_1 + 0x10) != 0) {
    uVar4 = 0;
    puVar5 = (uint *)(param_1 + 0x24);
    do {
      uVar1 = *(uint *)(param_1 + 0x18 + uVar4 * 0x90);
      if (uVar1 != 0) {
        uVar6 = 0;
        puVar7 = puVar5;
        do {
          if ((puVar7[-1] <= param_2) && (param_2 <= *puVar7)) {
            lVar8 = param_1 + 0x18 + (uVar4 & 0xffffffff) * 0x90;
            sVar2 = FUN_00f058ec(*(undefined8 *)(param_1 + 0x938),*(undefined8 *)(lVar8 + 0x88));
            sVar3 = FUN_00f190c4(*(undefined8 *)(lVar8 + 0x88),param_2);
            if (sVar2 == -1) {
              return 0xffffffff;
            }
            if (sVar3 == -1) {
              return 0xffffffff;
            }
            return CONCAT22(sVar3,sVar2);
          }
          uVar6 = uVar6 + 1;
          puVar7 = puVar7 + 2;
        } while (uVar6 < uVar1);
      }
      uVar4 = uVar4 + 1;
      puVar5 = puVar5 + 0x24;
    } while (uVar4 < *(uint *)(param_1 + 0x10));
  }
  return 0xffffffff;
}




void FUN_00f19eb0(undefined8 *param_1,undefined8 param_2)

{
  uint uVar1;
  ulong uVar2;
  int *piVar3;
  ulong uVar4;
  undefined8 *puVar5;
  
  if ((void *)param_1[1] != (void *)0x0) {
    operator_delete__((void *)param_1[1]);
    *param_1 = 0;
    param_1[1] = 0;
  }
  param_1[0x127] = 0;
  if (*(int *)(param_1 + 2) != 0) {
    uVar4 = 0;
    puVar5 = param_1 + 0x14;
    do {
      FUN_00f056c8(param_2,*puVar5);
      uVar1 = *(uint *)(param_1 + 2);
      uVar2 = (ulong)uVar1;
      uVar4 = uVar4 + 1;
      puVar5 = puVar5 + 0x12;
    } while (uVar4 < uVar2);
    if (uVar1 != 0) {
      piVar3 = (int *)(param_1 + (ulong)(uVar1 - 1) * 0x12 + 3);
      do {
        if (*piVar3 != 0) {
          *piVar3 = 0;
        }
        uVar1 = (int)uVar2 - 1;
        uVar2 = (ulong)uVar1;
        piVar3 = piVar3 + -0x24;
      } while (uVar1 != 0);
      *(undefined4 *)(param_1 + 2) = 0;
    }
  }
  return;
}




void FUN_00f19f48(uint *param_1,ulong param_2,ulong param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  ushort uVar4;
  long lVar5;
  int iVar6;
  uint uVar7;
  long *plVar8;
  ulong uVar9;
  ushort *puVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  long lVar14;
  float fVar15;
  undefined8 local_78;
  float local_70;
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  uVar13 = (uint)param_2;
  uVar12 = (uint)param_3;
  if (*param_1 != 0) {
    uVar9 = 0;
    puVar10 = (ushort *)(*(long *)(param_1 + 2) + 4);
    do {
      if (((((uint)puVar10[-2] == (uVar13 & 0xffff)) && ((uint)puVar10[-1] == uVar13 >> 0x10)) &&
          ((uint)*puVar10 == (uVar12 & 0xffff))) && ((uint)puVar10[1] == uVar12 >> 0x10)) {
        fVar15 = *(float *)(puVar10 + 2);
        goto LAB_00f1a114;
      }
      uVar9 = uVar9 + 1;
      puVar10 = puVar10 + 6;
    } while (uVar9 < *param_1);
  }
  fVar15 = 0.0;
  if (((uVar13 & 0xffff) == (uVar12 & 0xffff)) && (param_1[0x24c] - 1 < 2)) {
    plVar8 = (long *)FUN_00f058b4(0,*(undefined8 *)(param_1 + 0x24e),param_2 & 0xffff);
    lVar14 = *plVar8;
    local_78 = 0xffff0000ffff;
    iVar11 = *(int *)(lVar14 + 0x44);
    fVar15 = 0.0;
    local_70 = 0.0;
    if (iVar11 != 0) {
      uVar3 = *(undefined4 *)(plVar8[6] + (param_3 >> 0x10 & 0xffff) * 0x28);
      iVar6 = FUN_00f1adfc(lVar14 + 0x18,
                           *(undefined4 *)(plVar8[6] + (param_2 >> 0x10 & 0xffff) * 0x28));
      uVar7 = FUN_00f1adfc(lVar14 + 0x18,uVar3);
      lVar14 = *(long *)(lVar14 + 0x20) + (long)iVar11;
      local_70 = fVar15;
      if (((*(ushort *)(lVar14 + 2) >> 8 != 0 || (*(ushort *)(lVar14 + 2) & 0xff) != 0) &&
          ((ushort)(*(ushort *)(lVar14 + 8) >> 8 | *(ushort *)(lVar14 + 8) << 8) == 1)) &&
         (uVar2 = (uint)CONCAT11(*(undefined1 *)(lVar14 + 10),*(undefined1 *)(lVar14 + 0xb)),
         uVar2 != 0)) {
        iVar11 = 0;
        uVar7 = uVar7 | iVar6 << 0x10;
        iVar6 = uVar2 - 1;
        do {
          iVar1 = iVar11 + iVar6 >> 1;
          uVar2 = *(uint *)(lVar14 + 0x12 + (long)iVar1 * 6);
          uVar2 = (uVar2 & 0xff00ff00) >> 8 | (uVar2 & 0xff00ff) << 8;
          uVar2 = uVar2 >> 0x10 | uVar2 << 0x10;
          if (uVar7 < uVar2) {
            iVar6 = iVar1 + -1;
          }
          else {
            if (uVar7 == uVar2) {
              uVar4 = *(ushort *)(lVar14 + (long)iVar1 * 6 + 0x16);
              local_70 = (float)(int)(short)(uVar4 >> 8 | uVar4 << 8);
              break;
            }
            iVar11 = iVar1 + 1;
          }
        } while (iVar11 <= iVar6);
      }
    }
    local_78 = CONCAT44(uVar12,uVar13);
    FUN_00f1a150(param_1,&local_78);
    fVar15 = local_70;
  }
LAB_00f1a114:
  if (*(long *)(lVar5 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(fVar15);
  }
  return;
}

