// functions/00f09 — 16 functions
#include "libGameKindred.h"




void FUN_00f092ec(uint *param_1,undefined8 *param_2)

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
    FUN_00f0a490(param_1,uVar1);
    uVar4 = *param_1;
  }
  *param_1 = uVar4 + 1;
  lVar2 = *(long *)(param_1 + 2) + (ulong)(uVar4 + 1) * 0x18;
  *(undefined8 *)(lVar2 + -8) = param_2[2];
  uVar5 = *param_2;
  *(undefined8 *)(lVar2 + -0x10) = param_2[1];
  *(undefined8 *)(lVar2 + -0x18) = uVar5;
  return;
}




undefined8 FUN_00f09380(undefined8 param_1,int param_2)

{
  short sVar1;
  uint uVar2;
  
  sVar1 = FUN_00e70b1c();
  if (((sVar1 == 0x5c) && (uVar2 = FUN_00e70b14(param_1), param_2 + 1U < uVar2)) &&
     (sVar1 = FUN_00e70b1c(param_1), sVar1 == 0x7b)) {
    return 1;
  }
  return 0;
}




undefined8 FUN_00f093e4(undefined8 param_1,int param_2)

{
  short sVar1;
  undefined8 uVar2;
  
  sVar1 = FUN_00e70b1c();
  if ((sVar1 == 0x7b) &&
     ((param_2 == 0 || (sVar1 = FUN_00e70b1c(param_1,param_2 + -1), sVar1 != 0x5c)))) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}




undefined8 FUN_00f0943c(undefined8 param_1,int param_2)

{
  short sVar1;
  uint uVar2;
  
  uVar2 = FUN_00e70b14();
  if (((param_2 + 2U < uVar2) && (sVar1 = FUN_00e70b1c(param_1,param_2 + 1), sVar1 == 0x5c)) &&
     (sVar1 = FUN_00e70b1c(param_1,param_2 + 2U), sVar1 == 0x7d)) {
    return 1;
  }
  return 0;
}




void FUN_00f094b0(undefined8 param_1,int param_2,undefined1 *param_3,uint param_4)

{
  long lVar1;
  undefined1 uVar2;
  short sVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  uint uVar8;
  uint uVar9;
  ulong uVar10;
  undefined1 *puVar11;
  undefined1 auStack_168 [256];
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  FUN_00e70978(param_1,auStack_168,0x100);
  uVar6 = param_2 + 1;
  uVar4 = FUN_00e70b14(param_1);
  uVar9 = 0;
  uVar8 = uVar6;
  if (uVar6 < uVar4) {
    uVar9 = 0;
    do {
      sVar3 = FUN_00e70b1c(param_1,uVar6 + uVar9);
      if (sVar3 == 0x7b) goto LAB_00f095d4;
      sVar3 = FUN_00e70b1c(param_1,uVar6 + uVar9);
      if (sVar3 == 0x7d) {
        uVar8 = uVar6 + uVar9;
        break;
      }
      uVar9 = uVar9 + 1;
      uVar4 = FUN_00e70b14(param_1);
      uVar8 = uVar6 + uVar9;
    } while (uVar8 < uVar4);
  }
  uVar5 = FUN_00e70b14(param_1);
  uVar4 = 0xffffffff;
  if ((uVar9 < param_4) && (uVar8 < uVar5)) {
    sVar3 = FUN_00e70b1c(param_1,uVar8);
    if (sVar3 == 0x7d) {
      if (uVar9 == 0) {
        uVar7 = 0;
      }
      else {
        uVar7 = (ulong)uVar9;
        uVar10 = uVar7;
        puVar11 = param_3;
        do {
          uVar2 = FUN_00e70b1c(param_1,uVar6);
          *puVar11 = uVar2;
          uVar10 = uVar10 - 1;
          uVar6 = uVar6 + 1;
          puVar11 = puVar11 + 1;
        } while (uVar10 != 0);
      }
      param_3[uVar7] = 0;
      uVar4 = uVar8;
    }
    else {
LAB_00f095d4:
      uVar4 = 0xffffffff;
    }
  }
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar4);
  }
  return;
}




void FUN_00f0961c(long *param_1)

{
  ulong *puVar1;
  uint uVar2;
  long lVar3;
  bool bVar4;
  bool bVar5;
  ulong uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  undefined4 *puVar10;
  ulong uVar11;
  float *pfVar12;
  int iVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  int iVar17;
  long lVar18;
  uint uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  ulong local_b0;
  ulong uStack_a8;
  float local_a0;
  float fStack_9c;
  undefined8 local_98;
  undefined8 local_90;
  long local_88;
  
  lVar3 = tpidr_el0;
  local_88 = *(long *)(lVar3 + 0x28);
  uVar7 = *(uint *)(param_1 + 3);
  if ((uVar7 == 0) || ((*(byte *)(param_1 + 9) >> 6 & 1) == 0)) {
LAB_00f098fc:
    if (*(long *)(lVar3 + 0x28) == local_88) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  uVar9 = 0;
  fVar21 = 0.0;
  iVar8 = 0;
  if (*(float *)((long)param_1 + 0x44) == 0.0) {
    iVar8 = 4;
  }
  fVar22 = 0.0;
  local_90 = 0;
LAB_00f09708:
  uVar16 = (ulong)uVar9;
  local_98 = local_90;
  do {
    do {
    } while (uVar7 <= uVar9);
    lVar18 = 0;
    iVar13 = 1;
    lVar15 = (uVar16 * 2 + (ulong)uVar9) * 8;
    uVar19 = 0xffffffff;
    do {
      lVar14 = param_1[4];
      uVar11 = uVar16 + lVar18;
      puVar10 = (undefined4 *)(lVar14 + lVar15) + 6;
      if (uVar7 - 1 <= uVar11) {
        puVar10 = (undefined4 *)0x0;
      }
      uVar6 = FUN_00f0a9cc(*(undefined4 *)(lVar14 + lVar15),puVar10);
      uVar2 = (uint)uVar11;
      if ((uVar6 & 1) == 0) {
        uVar2 = uVar19;
      }
      if (iVar8 == 0) {
        uVar6 = FUN_00f0a9a4(*(undefined4 *)(lVar14 + lVar15));
        iVar8 = 2;
        if ((uVar6 & 1) == 0) {
          iVar8 = 3;
        }
      }
      uVar6 = FUN_00f0a97c(*(undefined4 *)(lVar14 + lVar15));
      if (((uVar6 & 1) == 0) || (uVar7 = *(uint *)(param_1 + 3), uVar7 - 1 <= uVar11)) {
        puVar1 = (ulong *)(lVar14 + lVar15);
        uStack_a8 = puVar1[1];
        local_b0 = *puVar1;
        local_a0 = (float)puVar1[2];
        fStack_9c = (float)(puVar1[2] >> 0x20);
        _local_a0 = CONCAT44(fVar22 + fStack_9c,fVar21 + local_a0);
        FUN_00f09ffc(param_1,&local_b0,&local_90,&local_98);
        iVar17 = (int)lVar18;
        if (uVar16 < uVar11) {
          if ((float)local_98 - (float)local_90 <= *(float *)(param_1 + 5)) goto LAB_00f097ec;
          uVar7 = *(uint *)(param_1 + 3);
          uVar19 = uVar9 - iVar13;
          if (uVar9 + iVar17 != uVar2 && uVar2 != 0xffffffff) {
            uVar19 = uVar2;
          }
          uVar11 = (ulong)uVar19;
          bVar5 = (uVar9 - uVar7) + iVar17 == -1;
          bVar4 = (uVar9 - uVar19) + iVar17 == 0;
LAB_00f098a0:
          uVar19 = (uint)uVar11;
          bVar4 = (bool)(bVar4 & bVar5);
        }
        else {
LAB_00f097ec:
          uVar6 = FUN_00f0a998(local_b0 & 0xffffffff);
          if ((uVar6 & 1) == 0) {
            uVar7 = *(uint *)(param_1 + 3);
            bVar4 = uVar11 == uVar7 - 1;
            if (!bVar4) goto LAB_00f09808;
            uVar11 = uVar16 + lVar18;
            bVar5 = (uVar11 & 0xffffffff00000000) == 0;
            goto LAB_00f098a0;
          }
          uVar7 = *(uint *)(param_1 + 3);
          uVar19 = uVar9 + iVar17;
          iVar8 = 0;
          if (*(float *)((long)param_1 + 0x44) == 0.0) {
            iVar8 = 4;
          }
          bVar4 = (uVar9 - uVar7) + iVar17 == -1;
        }
        if ((uVar19 < uVar9) || (uVar7 <= uVar9)) goto LAB_00f098f4;
        pfVar12 = (float *)(param_1[4] + uVar16 * 0x18 + 0x14);
        goto LAB_00f098cc;
      }
LAB_00f09808:
      lVar18 = lVar18 + 1;
      iVar13 = iVar13 + -1;
      lVar15 = lVar15 + 0x18;
      uVar19 = uVar2;
    } while (uVar16 + lVar18 < (ulong)uVar7);
  } while( true );
  while( true ) {
    uVar16 = uVar16 + 1;
    pfVar12 = pfVar12 + 6;
    if (uVar7 <= uVar16) break;
LAB_00f098cc:
    pfVar12[-1] = fVar21 + pfVar12[-1];
    *pfVar12 = fVar22 + *pfVar12;
    if (uVar19 <= uVar16) break;
  }
LAB_00f098f4:
  if (bVar4) goto LAB_00f098fc;
  uVar9 = uVar19 + 1;
  fVar20 = *(float *)(param_1[4] + (ulong)uVar9 * 0x18 + 0x10);
  fVar22 = fVar22 + *(float *)(*param_1 + 0x924) * (*(float *)(param_1 + 6) + 1.0);
  fVar21 = -0.0;
  if (iVar8 == 2) {
    fVar21 = (float)NEON_ucvtf((uint)*(ushort *)(*param_1 + 0x918));
    fVar21 = *(float *)((long)param_1 + 0x44) * fVar21;
  }
  fVar21 = fVar21 - fVar20;
  local_98 = CONCAT44(fVar22 + *(float *)(param_1[4] + (ulong)uVar9 * 0x18 + 0x14),fVar20 + fVar21);
  local_90 = local_98;
  goto LAB_00f09708;
}




void FUN_00f09938(long param_1)

{
  ulong uVar1;
  byte bVar2;
  ulong uVar3;
  uint uVar4;
  long lVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  int iVar9;
  
  if (((*(byte *)(param_1 + 0x48) & 7) != 0) && (uVar4 = *(uint *)(param_1 + 0x18), uVar4 != 0)) {
    uVar6 = 0;
    do {
      lVar5 = *(long *)(param_1 + 0x20);
      uVar8 = (ulong)uVar6;
      lVar7 = 0;
      do {
        uVar1 = uVar8 + lVar7;
        iVar9 = (int)lVar7;
        if (uVar4 - 1 <= uVar1) break;
        lVar7 = lVar7 + 1;
      } while (*(float *)(lVar5 + (ulong)uVar6 * 0x18 + 0x14) ==
               *(float *)(lVar5 + (ulong)(uVar6 + iVar9 + 1) * 0x18 + 0x14));
      uVar3 = FUN_00f0a998(*(undefined4 *)(lVar5 + (uVar1 & 0xffffffff) * 0x18));
      if (((uVar6 + (1 - uVar4) + iVar9 != 0) && ((uVar3 & 1) == 0)) ||
         ((*(byte *)(param_1 + 0x48) & 7) != 2)) {
        bVar2 = *(byte *)(param_1 + 0x48) & 7;
        if (bVar2 == 3) {
          FUN_00f0a37c(param_1,uVar8,uVar1 & 0xffffffff);
        }
        else if (bVar2 == 2) {
          FUN_00f0a1c8(param_1,uVar8,uVar1 & 0xffffffff);
        }
        else if (bVar2 == 1) {
          FUN_00f0a0c8(param_1,uVar6,uVar1 & 0xffffffff);
        }
      }
      uVar4 = *(uint *)(param_1 + 0x18);
      uVar6 = uVar6 + iVar9 + 1;
    } while (uVar6 < uVar4);
  }
  return;
}




void FUN_00f09a70(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 local_48;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_48 = 0;
  local_40 = 0;
  if (*(int *)(param_1 + 0x18) != 0) {
    lVar2 = 0;
    uVar3 = 0;
    do {
      FUN_00f09ffc(param_1,*(long *)(param_1 + 0x20) + lVar2,&local_40,&local_48);
      uVar3 = uVar3 + 1;
      lVar2 = lVar2 + 0x18;
    } while (uVar3 < *(uint *)(param_1 + 0x18));
  }
  *(undefined8 *)(param_1 + 0x34) = local_40;
  *(undefined8 *)(param_1 + 0x3c) = local_48;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined4 FUN_00f09b10(long param_1)

{
  return *(undefined4 *)(param_1 + 0x18);
}




void FUN_00f09b18(long param_1,float *param_2,float *param_3)

{
  FUN_00f09b68();
  *param_2 = *(float *)(param_1 + 0x3c) - *(float *)(param_1 + 0x34);
  *param_3 = *(float *)(param_1 + 0x40) - *(float *)(param_1 + 0x38);
  return;
}




void FUN_00f09b68(long *param_1)

{
  if (-1 < (char)*(byte *)(param_1 + 9)) {
    return;
  }
  if (*param_1 != 0) {
    FUN_00f08d78();
    return;
  }
  *(undefined8 *)((long)param_1 + 0x3c) = 0;
  *(undefined8 *)((long)param_1 + 0x34) = 0;
  if (param_1[4] != 0) {
    *(undefined4 *)(param_1 + 3) = 0;
  }
  *(byte *)(param_1 + 9) = *(byte *)(param_1 + 9) & 0x7f;
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00f09ba0(long *param_1,int param_2)

{
  FUN_00f09b68();
  if ((((int)param_1[3] != 0) && ((int)param_1[3] == param_2)) && (*param_1 != 0)) {
    FUN_00f1a1e4(*param_1,*(undefined4 *)(param_1[4] + (ulong)(param_2 - 1) * 0x18 + 8));
  }
  return;
}




void FUN_00f09c44(long param_1)

{
  *(byte *)(param_1 + 0x48) = *(byte *)(param_1 + 0x48) | 0x80;
  return;
}




int FUN_00f09c54(float param_1,float param_2,float param_3,float param_4,long *param_5,
                undefined1 *param_6,float *param_7,undefined4 *param_8,long param_9,uint param_10,
                uint param_11,uint param_12,byte param_13)

{
  float *pfVar1;
  float *pfVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  byte bVar7;
  undefined1 uVar8;
  uint uVar9;
  bool bVar10;
  bool bVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  undefined1 uVar15;
  undefined1 *puVar16;
  int iVar17;
  long lVar18;
  ulong uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  long local_a0;
  int local_94;
  
  FUN_00f09b68();
  FUN_00f09b68(param_5);
  if (((0.0 < *(float *)(param_5 + 8) - *(float *)(param_5 + 7)) && ((param_11 & 1) == 0)) &&
     (*param_5 != 0)) {
    param_2 = *(float *)(*param_5 + 0x91c) * param_4 + param_2;
  }
  uVar4 = (int)param_12 / 6;
  if (*(uint *)(param_5 + 3) * 6 <= param_12 || 0x7fffffff < param_12) {
    uVar4 = *(uint *)(param_5 + 3);
  }
  if (uVar4 == 0) {
    local_94 = 0;
  }
  else {
    uVar19 = 0;
    uVar9 = param_10 >> 2;
    local_94 = 0;
    local_a0 = param_9;
    do {
      lVar18 = param_5[4];
      uVar12 = FUN_00f0a988(*(undefined4 *)(lVar18 + uVar19 * 0x18));
      if (((uVar12 & 1) == 0) &&
         ((*(short *)(lVar18 + uVar19 * 0x18 + 8) != -1 ||
          (*(short *)(lVar18 + uVar19 * 0x18 + 10) != -1)))) {
        lVar13 = FUN_00f1a1e4(*param_5);
        lVar14 = lVar18 + uVar19 * 0x18;
        pfVar1 = param_7 + uVar9;
        pfVar2 = pfVar1 + uVar9;
        fVar22 = *(float *)(lVar13 + 0x10);
        fVar21 = param_2 + (*(float *)(lVar14 + 0x14) - *(float *)(lVar13 + 0xc)) * param_4;
        fVar20 = (*(float *)(lVar14 + 0x10) + *(float *)(lVar13 + 8)) * param_3 + param_1;
        fVar23 = fVar21 + *(float *)(lVar13 + 0x14) * param_4;
        param_7[2] = 0.0;
        *param_7 = fVar20;
        param_7[1] = fVar21;
        pfVar1[2] = 0.0;
        *pfVar1 = fVar20;
        pfVar1[1] = fVar23;
        pfVar1 = pfVar2 + uVar9;
        fVar22 = fVar20 + fVar22 * param_3;
        *pfVar2 = fVar22;
        pfVar2[1] = fVar21;
        pfVar2[2] = 0.0;
        pfVar2 = pfVar1 + uVar9;
        param_7 = pfVar2 + uVar9;
        *pfVar1 = fVar20;
        pfVar1[1] = fVar23;
        pfVar1[2] = 0.0;
        *pfVar2 = fVar22;
        pfVar2[1] = fVar23;
        pfVar2[2] = 0.0;
        *param_7 = fVar22;
        param_7[1] = fVar21;
        param_7[2] = 0.0;
        puVar3 = param_8 + uVar9;
        param_7 = param_7 + uVar9;
        *param_8 = *(undefined4 *)(lVar13 + 0x18);
        param_8[1] = *(undefined4 *)(lVar13 + 0x1c);
        *puVar3 = *(undefined4 *)(lVar13 + 0x18);
        puVar3[1] = *(undefined4 *)(lVar13 + 0x24);
        puVar3 = puVar3 + uVar9;
        *puVar3 = *(undefined4 *)(lVar13 + 0x20);
        puVar3[1] = *(undefined4 *)(lVar13 + 0x1c);
        puVar3 = puVar3 + uVar9;
        *puVar3 = *(undefined4 *)(lVar13 + 0x18);
        puVar3[1] = *(undefined4 *)(lVar13 + 0x24);
        puVar3 = puVar3 + uVar9;
        *puVar3 = *(undefined4 *)(lVar13 + 0x20);
        puVar3[1] = *(undefined4 *)(lVar13 + 0x24);
        puVar3 = puVar3 + uVar9;
        param_8 = puVar3 + uVar9;
        *puVar3 = *(undefined4 *)(lVar13 + 0x20);
        puVar3[1] = *(undefined4 *)(lVar13 + 0x1c);
        bVar7 = *(byte *)(lVar14 + 0xc);
        if ((bVar7 & 1) == 0 || ((param_13 ^ 1) & 1) != 0) {
          uVar15 = param_6[3];
          lVar13 = lVar18 + uVar19 * 0x18;
        }
        else {
          lVar13 = lVar18 + uVar19 * 0x18;
          fVar21 = (float)NEON_ucvtf((uint)*(byte *)(lVar13 + 7));
          fVar20 = (float)NEON_ucvtf((uint)(byte)param_6[3]);
          uVar15 = (undefined1)(int)((fVar21 / 255.0) * 255.0 * (fVar20 / 255.0));
        }
        iVar17 = 5;
        puVar16 = (undefined1 *)(local_a0 + 3);
        while( true ) {
          bVar11 = (bVar7 & 1) != 0;
          bVar10 = ((param_13 ^ 1) & 1) == 0;
          puVar5 = param_6;
          if (bVar11 && bVar10) {
            puVar5 = (undefined1 *)(lVar13 + 4);
          }
          puVar6 = param_6;
          if (bVar11 && bVar10) {
            puVar6 = (undefined1 *)(lVar18 + uVar19 * 0x18 + 4);
          }
          puVar16[-3] = *puVar5;
          puVar16[-2] = puVar6[1];
          uVar8 = puVar6[2];
          *puVar16 = uVar15;
          puVar16[-1] = uVar8;
          if (iVar17 == 0) break;
          bVar7 = *(byte *)(lVar14 + 0xc);
          iVar17 = iVar17 + -1;
          puVar16 = puVar16 + param_10;
        }
        local_a0 = local_a0 + (ulong)param_10 * 6;
        local_94 = local_94 + 6;
      }
      uVar19 = uVar19 + 1;
    } while (uVar19 != uVar4);
  }
  return local_94;
}




void FUN_00f09fcc(long *param_1,undefined1 param_2)

{
  if (((*param_1 != 0) && (*(int *)(*param_1 + 0x930) != 0)) && ((int)param_1[3] != 0)) {
    FUN_00f07428(param_2,param_1[4] + 8,(int)param_1[3],0x18);
    return;
  }
  return;
}




void FUN_00f09ffc(long *param_1,long param_2,float *param_3,float *param_4)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  if ((*(short *)(param_2 + 8) != -1) || (*(short *)(param_2 + 10) != -1)) {
    lVar1 = FUN_00f1a1e4(*param_1,*(undefined4 *)(param_2 + 8));
    fVar2 = *(float *)(param_2 + 0x14);
    fVar4 = *(float *)(lVar1 + 0x10);
    fVar3 = *(float *)(*param_1 + 0x920);
    fVar6 = *(float *)(param_2 + 0x10) + *(float *)(lVar1 + 8);
    fVar5 = fVar2 - *(float *)(*param_1 + 0x91c);
    if (fVar6 < *param_3) {
      *param_3 = fVar6;
    }
    fVar6 = fVar6 + fVar4;
    if (fVar5 < param_3[1]) {
      param_3[1] = fVar5;
    }
    fVar2 = fVar2 - fVar3;
    if (*param_4 < fVar6) {
      *param_4 = fVar6;
    }
    if (param_4[1] < fVar2) {
      param_4[1] = fVar2;
    }
  }
  return;
}

