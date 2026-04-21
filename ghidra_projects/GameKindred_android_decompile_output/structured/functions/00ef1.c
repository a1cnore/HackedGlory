// functions/00ef1 — 19 functions
#include "libGameKindred.h"




void FUN_00ef1174(long param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  if (1 < *(uint *)(param_1 + 0x764)) {
    param_1 = param_1 + (long)*(int *)(param_1 + 0x774) * 0xc;
    fVar2 = (float)*(undefined8 *)(param_1 + 0x170) - (float)*(undefined8 *)(param_1 + 0x164);
    fVar3 = (float)((ulong)*(undefined8 *)(param_1 + 0x170) >> 0x20) -
            (float)((ulong)*(undefined8 *)(param_1 + 0x164) >> 0x20);
    fVar1 = *(float *)(param_1 + 0x178) - *(float *)(param_1 + 0x16c);
    fVar1 = fVar2 * fVar2 + fVar3 * fVar3 + fVar1 * fVar1;
    if ((0.0001 <= fVar1) && (NAN(SQRT(fVar1)))) {
      sqrtf(fVar1);
    }
  }
  return;
}




void FUN_00ef1218(void)

{
  return;
}




void FUN_00ef121c(code *param_1,code *param_2)

{
  PTR_FUN_02bf2580 = FUN_00ef1250;
  if (param_1 != (code *)0x0) {
    PTR_FUN_02bf2580 = param_1;
  }
  PTR_free_02bf2588 = free;
  if (param_2 != (code *)0x0) {
    PTR_free_02bf2588 = param_2;
  }
  return;
}




void FUN_00ef1250(int param_1)

{
  malloc((long)param_1);
  return;
}




void thunk_FUN_00ef1250(void)

{
  (*(code *)PTR_FUN_02bf2580)();
  return;
}




void FUN_00ef1268(long param_1)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00ef1274. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR_free_02bf2588)();
    return;
  }
  return;
}




void FUN_00ef127c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)thunk_FUN_00ef1250(0x68,0);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 7) = 0;
    puVar1[6] = 0;
    puVar1[3] = 0;
    puVar1[2] = 0;
    puVar1[5] = 0;
    puVar1[4] = 0;
    puVar1[1] = 0;
    *puVar1 = 0;
    puVar1[9] = 0;
    puVar1[8] = 0;
    puVar1[0xb] = 0;
    puVar1[10] = 0;
    *(undefined4 *)(puVar1 + 0xc) = 0;
  }
  return;
}




void FUN_00ef12b8(long param_1)

{
  if (param_1 != 0) {
    FUN_00ef1310(param_1);
    FUN_00ef1268(param_1);
    return;
  }
  return;
}




void FUN_00ef12f0(undefined8 *param_1)

{
  *(undefined4 *)(param_1 + 7) = 0;
  param_1[6] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}




void FUN_00ef1310(long param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  
  iVar2 = *(int *)(param_1 + 0x30);
  if (0 < iVar2) {
    lVar1 = *(long *)(param_1 + 0x50);
    lVar3 = 0;
    lVar4 = 0;
    do {
      if ((*(byte *)(lVar1 + lVar3 + 0x5c) & 1) != 0) {
        FUN_00ef1268(*(undefined8 *)(lVar1 + lVar3 + 0x50));
        lVar1 = *(long *)(param_1 + 0x50);
        *(undefined8 *)(lVar1 + lVar3 + 0x50) = 0;
        *(undefined4 *)(lVar1 + lVar3 + 0x58) = 0;
        iVar2 = *(int *)(param_1 + 0x30);
      }
      lVar4 = lVar4 + 1;
      lVar3 = lVar3 + 0x68;
    } while (lVar4 < iVar2);
  }
  FUN_00ef1268(*(undefined8 *)(param_1 + 0x40));
  FUN_00ef1268(*(undefined8 *)(param_1 + 0x50));
  return;
}




undefined4 FUN_00ef1390(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  long lVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  byte bVar8;
  byte bVar11;
  byte bVar12;
  uint uVar9;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar17;
  byte bVar18;
  uint uVar16;
  byte bVar19;
  byte bVar20;
  undefined8 uVar10;
  uint uVar21;
  uint uVar23;
  ulong uVar22;
  ulong uVar24;
  ulong uVar25;
  ulong uVar26;
  
  uVar10 = *(undefined8 *)((long)param_2 + 0xc);
  *(undefined8 *)((long)param_1 + 0x14) = *(undefined8 *)((long)param_2 + 0x14);
  *(undefined8 *)((long)param_1 + 0xc) = uVar10;
  uVar10 = *param_2;
  uVar7 = 0x80000004;
  param_1[1] = param_2[1];
  *param_1 = uVar10;
  *(undefined4 *)((long)param_1 + 0x1c) = *(undefined4 *)param_2;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)((long)param_2 + 4);
  *(undefined4 *)((long)param_1 + 0x24) = *(undefined4 *)(param_2 + 1);
  param_1[5] = *(undefined8 *)((long)param_2 + 0xc);
  iVar1 = *(int *)((long)param_2 + 0x14);
  iVar4 = iVar1 + 3;
  if (-1 < iVar1) {
    iVar4 = iVar1;
  }
  uVar9 = (iVar4 >> 2) - 1;
  uVar9 = uVar9 | uVar9 >> 1;
  uVar9 = uVar9 | uVar9 >> 2;
  uVar9 = uVar9 | uVar9 >> 4;
  uVar9 = uVar9 | uVar9 >> 8;
  uVar9 = uVar9 | uVar9 >> 0x10;
  iVar4 = 1;
  if (uVar9 != 0xffffffff) {
    iVar4 = uVar9 + 1;
  }
  *(int *)(param_1 + 6) = iVar1;
  *(int *)((long)param_1 + 0x34) = iVar4;
  *(int *)(param_1 + 7) = iVar4 + -1;
  lVar2 = thunk_FUN_00ef1250(iVar1 * 0x68,0);
  param_1[10] = lVar2;
  if (lVar2 != 0) {
    lVar2 = thunk_FUN_00ef1250(*(int *)((long)param_1 + 0x34) << 3,0);
    param_1[8] = lVar2;
    if (lVar2 != 0) {
      memset((void *)param_1[10],0,(long)*(int *)(param_1 + 6) * 0x68);
      memset((void *)param_1[8],0,(long)*(int *)((long)param_1 + 0x34) << 3);
      iVar4 = *(int *)(param_1 + 6);
      param_1[9] = 0;
      if (0 < iVar4) {
        lVar2 = (long)iVar4 + 1;
        puVar3 = (undefined4 *)0x0;
        puVar6 = (undefined4 *)(param_1[10] + (long)iVar4 * 0x68);
        do {
          puVar5 = puVar6 + -0x1a;
          lVar2 = lVar2 + -1;
          *puVar5 = 1;
          *(undefined4 **)(puVar6 + -2) = puVar3;
          puVar3 = puVar5;
          puVar6 = puVar5;
        } while (1 < lVar2);
        param_1[9] = puVar5;
      }
      uVar9 = (int)*(undefined8 *)((long)param_2 + 0x14) - 1;
      uVar16 = (int)((ulong)*(undefined8 *)((long)param_2 + 0x14) >> 0x20) - 1;
      uVar21 = uVar9 >> 1;
      uVar23 = uVar16 >> 1;
      bVar8 = (byte)uVar21 | (byte)uVar9;
      bVar11 = (byte)(uVar21 >> 8) | (byte)(uVar9 >> 8);
      bVar12 = (byte)(uVar21 >> 0x10) | (byte)(uVar9 >> 0x10);
      bVar14 = (byte)(uVar9 >> 0x18);
      bVar14 = bVar14 >> 1 | bVar14;
      uVar9 = CONCAT13(bVar14,CONCAT12(bVar12,CONCAT11(bVar11,bVar8)));
      bVar15 = (byte)uVar23 | (byte)uVar16;
      bVar17 = (byte)(uVar23 >> 8) | (byte)(uVar16 >> 8);
      bVar20 = (byte)(uVar16 >> 0x18);
      bVar18 = (byte)(uVar23 >> 0x10) | (byte)(uVar16 >> 0x10);
      bVar20 = bVar20 >> 1 | bVar20;
      uVar16 = uVar9 >> 2;
      uVar21 = (uint)(CONCAT17(bVar20,CONCAT16(bVar18,CONCAT15(bVar17,CONCAT14(bVar15,uVar9)))) >>
                     0x22);
      bVar8 = (byte)uVar16 | bVar8;
      bVar11 = (byte)(uVar16 >> 8) | bVar11;
      bVar12 = (byte)(uVar16 >> 0x10) | bVar12;
      bVar14 = bVar14 >> 2 | bVar14;
      uVar9 = CONCAT13(bVar14,CONCAT12(bVar12,CONCAT11(bVar11,bVar8)));
      bVar15 = (byte)uVar21 | bVar15;
      bVar17 = (byte)(uVar21 >> 8) | bVar17;
      bVar18 = (byte)(uVar21 >> 0x10) | bVar18;
      bVar20 = bVar20 >> 2 | bVar20;
      uVar16 = uVar9 >> 4;
      uVar21 = (uint)(CONCAT17(bVar20,CONCAT16(bVar18,CONCAT15(bVar17,CONCAT14(bVar15,uVar9)))) >>
                     0x24);
      bVar11 = (byte)(uVar16 >> 8) | bVar11;
      bVar12 = (byte)(uVar16 >> 0x10) | bVar12;
      bVar14 = bVar14 >> 4 | bVar14;
      bVar17 = (byte)(uVar21 >> 8) | bVar17;
      bVar18 = (byte)(uVar21 >> 0x10) | bVar18;
      bVar20 = bVar20 >> 4 | bVar20;
      bVar13 = bVar14 | bVar12;
      bVar19 = bVar20 | bVar18;
      iVar4 = CONCAT13(bVar14,CONCAT12(bVar13,CONCAT11(bVar14 | bVar12 | bVar11,
                                                       bVar13 | bVar11 | (byte)uVar16 | bVar8)));
      uVar9 = iVar4 + 1;
      uVar16 = (int)(CONCAT17(bVar20,CONCAT16(bVar19,CONCAT15(bVar20 | bVar18 | bVar17,
                                                              CONCAT14(bVar19 | bVar17 | (byte)
                                                  uVar21 | bVar15,iVar4)))) >> 0x20) + 1;
      uVar22 = CONCAT44(-(uint)(0xffff < uVar16),-(uint)(0xffff < uVar9)) & 0x1000000010;
      uVar10 = NEON_ushl(CONCAT44(uVar16,uVar9),CONCAT44(-(int)(uVar22 >> 0x20),-(int)uVar22),4);
      uVar24 = CONCAT44(-(uint)(0xff < (uint)((ulong)uVar10 >> 0x20)),-(uint)(0xff < (uint)uVar10))
               & 0x800000008;
      uVar10 = NEON_ushl(uVar10,CONCAT44(-(int)(uVar24 >> 0x20),-(int)uVar24),4);
      uVar25 = CONCAT44(-(uint)(0xf < (uint)((ulong)uVar10 >> 0x20)),-(uint)(0xf < (uint)uVar10)) &
               0x400000004;
      uVar10 = NEON_ushl(uVar10,CONCAT44(-(int)(uVar25 >> 0x20),-(int)uVar25),4);
      uVar26 = CONCAT44(-(uint)(3 < (uint)((ulong)uVar10 >> 0x20)),-(uint)(3 < (uint)uVar10)) &
               0x200000002;
      uVar10 = NEON_ushl(uVar10,CONCAT44(-(int)(uVar26 >> 0x20),-(int)uVar26),4);
      uVar9 = (uint)uVar10 >> 1;
      uVar16 = (uint)((ulong)uVar10 >> 0x21);
      iVar4 = CONCAT13((byte)((ulong)uVar10 >> 0x18) >> 1,
                       CONCAT12((char)(uVar9 >> 0x10),
                                CONCAT11((char)(uVar9 >> 8),
                                         (byte)uVar24 | (byte)uVar22 | (byte)uVar25 | (byte)uVar26 |
                                         (byte)uVar9)));
      uVar10 = CONCAT17((byte)((ulong)uVar10 >> 0x39),
                        CONCAT16((char)((uint3)((ulong)uVar10 >> 0x29) >> 8),
                                 CONCAT15((char)(uVar16 >> 8),
                                          CONCAT14((byte)(uVar24 >> 0x20) | (byte)(uVar22 >> 0x20) |
                                                   (byte)(uVar25 >> 0x20) | (byte)(uVar26 >> 0x20) |
                                                   (byte)uVar16,iVar4))));
      uVar9 = (0x20 - iVar4) - (int)((ulong)uVar10 >> 0x20);
      if (0x1e < uVar9) {
        uVar9 = 0x1f;
      }
      uVar7 = 0x80000008;
      *(uint *)(param_1 + 0xb) = uVar9;
      if (9 < uVar9) {
        uVar7 = 0x40000000;
      }
      *(undefined8 *)((long)param_1 + 0x5c) = uVar10;
    }
  }
  return uVar7;
}




void FUN_00ef15cc(undefined8 param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 local_68;
  float local_60;
  float local_5c;
  float local_58;
  undefined4 local_54;
  int iStack_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (*param_2 == 0x444e4156) {
    if (param_2[1] == 7) {
      local_68 = *(undefined8 *)(param_2 + 0x12);
      local_60 = (float)param_2[0x14];
      local_5c = (float)param_2[0x15] - (float)local_68;
      local_58 = (float)param_2[0x17] - local_60;
      iStack_50 = param_2[6];
      local_54 = 1;
      uVar2 = FUN_00ef1390(param_1,&local_68);
      if (-1 < (int)uVar2) {
        uVar2 = FUN_00ef16c4(param_1,param_2,param_3,param_4,0,0);
      }
    }
    else {
      uVar2 = 0x80000002;
    }
  }
  else {
    uVar2 = 0x80000001;
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}




undefined4
FUN_00ef16c4(long param_1,int *param_2,uint param_3,uint param_4,uint param_5,uint *param_6)

{
  long lVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  long lVar12;
  uint uVar13;
  long lVar14;
  uint *puVar15;
  undefined4 *puVar16;
  ulong uVar17;
  uint *puVar18;
  uint *puVar19;
  uint *puVar20;
  int iVar21;
  undefined8 *puVar22;
  undefined8 uVar23;
  undefined4 uVar24;
  undefined8 local_170 [32];
  long local_70;
  
  lVar12 = tpidr_el0;
  local_70 = *(long *)(lVar12 + 0x28);
  if (*param_2 == 0x444e4156) {
    uVar24 = 0x80000004;
    if (param_2[1] == 7) {
      iVar21 = param_2[2];
      iVar6 = param_2[3];
      lVar14 = FUN_00ef30b4(param_1,iVar21,iVar6,param_2[4]);
      if (lVar14 == 0) {
        if (param_5 == 0) {
          puVar20 = *(uint **)(param_1 + 0x48);
          if (puVar20 == (uint *)0x0) goto LAB_00ef1760;
          puVar15 = puVar20 + 0x18;
          *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)puVar15;
          puVar15[0] = 0;
          puVar15[1] = 0;
        }
        else {
          uVar4 = *(uint *)(param_1 + 0x5c);
          uVar7 = *(uint *)(param_1 + 0x60);
          uVar13 = param_5 >> (ulong)(uVar7 & 0x1f) & (1 << (ulong)(uVar4 & 0x1f)) - 1U;
          if (*(int *)(param_1 + 0x30) <= (int)uVar13) goto LAB_00ef1760;
          puVar20 = (uint *)(*(long *)(param_1 + 0x50) + (long)(int)uVar13 * 0x68);
          puVar19 = (uint *)0x0;
          puVar15 = (uint *)(param_1 + 0x48);
          do {
            puVar18 = puVar19;
            puVar19 = *(uint **)puVar15;
            if (puVar19 == puVar20) break;
            puVar15 = puVar19 + 0x18;
          } while (puVar19 != (uint *)0x0);
          if (puVar19 != puVar20) goto LAB_00ef1760;
          puVar15 = (uint *)(*(long *)(param_1 + 0x50) + (long)(int)uVar13 * 0x68 + 0x60);
          puVar19 = (uint *)(param_1 + 0x48);
          if (puVar18 != (uint *)0x0) {
            puVar19 = puVar18 + 0x18;
          }
          *(undefined8 *)puVar19 = *(undefined8 *)puVar15;
          *puVar20 = (1 << (ulong)(*(uint *)(param_1 + 0x58) & 0x1f)) - 1U &
                     param_5 >> (ulong)(uVar7 + uVar4 & 0x1f);
        }
        lVar14 = *(long *)(param_1 + 0x40);
        uVar13 = *(uint *)(param_1 + 0x38) & iVar21 * -0x72594cbd + iVar6 * -0x27e9c7bf;
        *(undefined8 *)puVar15 = *(undefined8 *)(lVar14 + (long)(int)uVar13 * 8);
        *(uint **)(lVar14 + (long)(int)uVar13 * 8) = puVar20;
        iVar21 = param_2[6];
        iVar8 = param_2[7];
        iVar6 = param_2[8];
        iVar9 = param_2[9];
        iVar5 = param_2[10];
        iVar10 = param_2[0xb];
        iVar11 = param_2[0xc];
        lVar14 = (long)(param_2 + 0x19) + (long)(iVar8 * 0xc);
        *(long *)(puVar20 + 4) = lVar14;
        *(int **)(puVar20 + 6) = param_2 + 0x19;
        lVar14 = lVar14 + (iVar21 << 5);
        lVar1 = lVar14 + iVar6 * 0xc;
        lVar2 = lVar1 + iVar9 * 0xc;
        lVar3 = lVar2 + iVar5 * 0xc;
        *(long *)(puVar20 + 0xc) = lVar2;
        *(long *)(puVar20 + 0xe) = lVar3;
        lVar3 = lVar3 + (iVar10 << 2);
        *(long *)(puVar20 + 8) = lVar14;
        *(long *)(puVar20 + 10) = lVar1;
        *(long *)(puVar20 + 0x10) = lVar3;
        *(long *)(puVar20 + 0x12) = lVar3 + (iVar11 << 4);
        if (iVar11 << 4 == 0) {
          puVar20[0x10] = 0;
          puVar20[0x11] = 0;
        }
        puVar20[1] = 0;
        *(undefined4 *)(lVar14 + (long)(int)(iVar6 - 1U) * 0xc + 4) = 0xffffffff;
        if (1 < iVar6) {
          uVar17 = 0;
          puVar16 = (undefined4 *)((long)param_2 + (long)(iVar21 << 5) + (long)(iVar8 * 0xc) + 0x68)
          ;
          do {
            uVar17 = uVar17 + 1;
            *puVar16 = (int)uVar17;
            puVar16 = puVar16 + 3;
          } while (iVar6 - 1U != uVar17);
        }
        *(int **)(puVar20 + 2) = param_2;
        *(int **)(puVar20 + 0x14) = param_2;
        puVar20[0x16] = param_3;
        puVar20[0x17] = param_4;
        FUN_00ef2660(param_1,puVar20);
        FUN_00ef2750(param_1,puVar20);
        uVar13 = FUN_00ef3118(param_1,param_2[2],param_2[3],local_170,0x20);
        if (0 < (int)uVar13) {
          uVar17 = (ulong)uVar13;
          puVar22 = local_170;
          do {
            puVar15 = (uint *)*puVar22;
            if (puVar15 != puVar20) {
              FUN_00ef200c(param_1,puVar20,puVar15,0xffffffff);
              FUN_00ef200c(param_1,puVar15,puVar20,0xffffffff);
            }
            FUN_00ef2270(param_1,puVar20,puVar15,0xffffffff);
            FUN_00ef2270(param_1,puVar15,puVar20,0xffffffff);
            uVar17 = uVar17 - 1;
            puVar22 = puVar22 + 1;
          } while (uVar17 != 0);
        }
        iVar21 = 0;
        do {
          uVar13 = FUN_00ef3190(param_1,param_2[2],param_2[3],iVar21,local_170,0x20);
          if (0 < (int)uVar13) {
            uVar17 = (ulong)uVar13;
            uVar13 = iVar21 + 4U & 7;
            puVar22 = local_170;
            do {
              uVar23 = *puVar22;
              FUN_00ef200c(param_1,puVar20,uVar23,iVar21);
              FUN_00ef200c(param_1,uVar23,puVar20,uVar13);
              FUN_00ef2270(param_1,puVar20,uVar23,iVar21);
              FUN_00ef2270(param_1,uVar23,puVar20,uVar13);
              uVar17 = uVar17 - 1;
              puVar22 = puVar22 + 1;
            } while (uVar17 != 0);
          }
          iVar21 = iVar21 + 1;
        } while (iVar21 != 8);
        if (param_6 != (uint *)0x0) {
          *param_6 = *puVar20 <<
                     (ulong)(*(int *)(param_1 + 0x5c) + *(uint *)(param_1 + 0x60) & 0x1f) |
                     (int)((ulong)((long)puVar20 - *(long *)(param_1 + 0x50)) >> 3) * -0x3b13b13b <<
                     (ulong)(*(uint *)(param_1 + 0x60) & 0x1f);
        }
        uVar24 = 0x40000000;
      }
      else {
        uVar24 = 0x80000000;
      }
    }
    else {
      uVar24 = 0x80000002;
    }
  }
  else {
    uVar24 = 0x80000001;
  }
LAB_00ef1760:
  if (*(long *)(lVar12 + 0x28) == local_70) {
    return uVar24;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ef1adc(void)

{
  return;
}




ulong FUN_00ef1ae0(long param_1,float *param_2,undefined8 param_3,int *param_4,uint param_5,
                  long param_6,long param_7,int param_8)

{
  long lVar1;
  ulong uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  long lVar7;
  float *pfVar8;
  long lVar9;
  float *pfVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  int iVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  float fStack_b0;
  float local_ac;
  long local_a8;
  
  lVar7 = tpidr_el0;
  local_a8 = *(long *)(lVar7 + 0x28);
  if (param_4 == (int *)0x0) {
    uVar15 = 0;
    goto LAB_00ef1dd0;
  }
  FUN_00ef1e18(param_2,param_3,&fStack_b0,&local_b8,param_5);
  uVar6 = param_5 | 4;
  if (uVar6 == 4) {
LAB_00ef1b70:
    fVar22 = *param_2;
  }
  else {
    fVar22 = 0.0;
    if (uVar6 == 6) {
      param_2 = param_2 + 2;
      goto LAB_00ef1b70;
    }
  }
  lVar9 = *(long *)(param_4 + 2);
  if (*(int *)(lVar9 + 0x18) < 1) {
    uVar15 = 0;
  }
  else {
    iVar3 = *(int *)(param_1 + 0x5c);
    uVar4 = *(uint *)(param_1 + 0x60);
    iVar5 = *param_4;
    lVar11 = *(long *)(param_1 + 0x50);
    fVar24 = (local_b4 - local_ac) / (local_b8 - fStack_b0);
    lVar17 = 0;
    uVar15 = 0;
    fVar23 = local_ac - fStack_b0 * fVar24;
    do {
      lVar12 = *(long *)(param_4 + 4);
      uVar13 = (ulong)*(byte *)(lVar12 + lVar17 * 0x20 + 0x1e);
      if (uVar13 != 0) {
        uVar16 = 0;
        do {
          lVar1 = lVar12 + lVar17 * 0x20;
          if ((param_5 & 0x7fff | 0x8000) == (uint)*(ushort *)(lVar1 + uVar16 * 2 + 0x10)) {
            lVar1 = lVar1 + 4;
            uVar2 = 0;
            if (uVar16 + 1 != uVar13) {
              uVar2 = uVar16 + 1 & 0xffffffff;
            }
            pfVar8 = (float *)(*(long *)(param_4 + 6) + (ulong)*(ushort *)(lVar1 + uVar16 * 2) * 0xc
                              );
            pfVar10 = pfVar8;
            if (uVar6 == 4) {
LAB_00ef1ccc:
              fVar18 = *pfVar10;
            }
            else {
              fVar18 = 0.0;
              if (uVar6 == 6) {
                pfVar10 = pfVar8 + 2;
                goto LAB_00ef1ccc;
              }
            }
            fVar18 = fVar22 - fVar18;
            fVar19 = -fVar18;
            if (0.0 <= fVar18) {
              fVar19 = fVar18;
            }
            if (fVar19 <= 0.01) {
              FUN_00ef1e18(pfVar8,*(long *)(param_4 + 6) +
                                  (ulong)*(ushort *)(lVar1 + uVar2 * 2) * 0xc,&local_c0,&local_c8,
                           param_5);
              lVar9 = *(long *)(param_4 + 2);
              fVar18 = fStack_b0 + 0.01;
              if (fStack_b0 + 0.01 <= local_c0 + 0.01) {
                fVar18 = local_c0 + 0.01;
              }
              fVar19 = local_b8 + -0.01;
              if (local_c8 + -0.01 <= local_b8 + -0.01) {
                fVar19 = local_c8 + -0.01;
              }
              if (fVar18 <= fVar19) {
                fVar20 = (local_c4 - local_bc) / (local_c8 - local_c0);
                fVar21 = local_bc - local_c0 * fVar20;
                fVar18 = (fVar18 * fVar20 + fVar21) - (fVar18 * fVar24 + fVar23);
                fVar19 = (fVar19 * fVar20 + fVar21) - (fVar19 * fVar24 + fVar23);
                if (((fVar18 * fVar19 < 0.0) ||
                    (fVar20 = *(float *)(lVar9 + 0x44) + *(float *)(lVar9 + 0x44),
                    fVar20 = fVar20 * fVar20, fVar19 * fVar19 <= fVar20)) ||
                   (fVar18 * fVar18 <= fVar20)) {
                  iVar14 = (int)uVar15;
                  if (iVar14 < param_8) {
                    fVar18 = fStack_b0;
                    if (fStack_b0 <= local_c0) {
                      fVar18 = local_c0;
                    }
                    *(float *)(param_7 + (-(uVar15 >> 0x1f) & 0xfffffff800000000 | uVar15 << 3)) =
                         fVar18;
                    fVar18 = local_b8;
                    if (local_c8 <= local_b8) {
                      fVar18 = local_c8;
                    }
                    *(float *)(param_7 + (long)(int)(iVar14 << 1 | 1) * 4) = fVar18;
                    *(uint *)(param_6 + (long)iVar14 * 4) =
                         iVar5 << (ulong)(iVar3 + uVar4 & 0x1f) |
                         (int)((ulong)((long)param_4 - lVar11) >> 3) * -0x3b13b13b <<
                         (ulong)(uVar4 & 0x1f) | (uint)lVar17;
                    uVar15 = (ulong)(iVar14 + 1);
                  }
                  break;
                }
              }
            }
          }
          uVar16 = uVar16 + 1;
        } while (uVar16 < uVar13);
      }
      lVar17 = lVar17 + 1;
    } while (lVar17 < *(int *)(lVar9 + 0x18));
  }
LAB_00ef1dd0:
  if (*(long *)(lVar7 + 0x28) == local_a8) {
    return uVar15;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ef1e18(float *param_1,float *param_2,float *param_3,float *param_4,uint param_5)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  
  pfVar2 = param_1;
  pfVar3 = param_2;
  if ((param_5 | 4) == 6) {
    pfVar1 = param_2;
    fVar4 = *param_1;
    if (*param_2 <= *param_1) {
      pfVar1 = param_1;
      pfVar2 = param_2;
      pfVar3 = param_1;
      fVar4 = *param_2;
    }
  }
  else {
    if ((param_5 | 4) != 4) {
      return;
    }
    fVar4 = param_1[2];
    fVar5 = param_2[2];
    pfVar1 = param_2 + 2;
    if (fVar5 <= fVar4) {
      pfVar1 = param_1 + 2;
      pfVar2 = param_2;
      pfVar3 = param_1;
      fVar4 = fVar5;
    }
  }
  *param_3 = fVar4;
  param_3[1] = pfVar2[1];
  *param_4 = *pfVar1;
  param_4[1] = pfVar3[1];
  return;
}




uint FUN_00ef1e90(long param_1,int *param_2)

{
  if (param_2 != (int *)0x0) {
    return *param_2 << (ulong)(*(int *)(param_1 + 0x5c) + *(uint *)(param_1 + 0x60) & 0x1f) |
           (int)((ulong)((long)param_2 - *(long *)(param_1 + 0x50)) >> 3) * -0x3b13b13b <<
           (ulong)(*(uint *)(param_1 + 0x60) & 0x1f);
  }
  return 0;
}




void FUN_00ef1ed0(long param_1,long param_2,int *param_3)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  uint uVar14;
  ulong uVar15;
  
  if (((param_2 != 0) && (param_3 != (int *)0x0)) &&
     (iVar7 = *(int *)(*(long *)(param_2 + 8) + 0x18), 0 < iVar7)) {
    uVar3 = *(uint *)(param_1 + 0x5c);
    uVar4 = *(uint *)(param_1 + 0x60);
    lVar11 = *(long *)(param_1 + 0x50);
    iVar5 = *param_3;
    lVar12 = *(long *)(param_2 + 0x10);
    lVar10 = 0;
    do {
      puVar1 = (uint *)(lVar12 + lVar10 * 0x20);
      uVar14 = *puVar1;
      if (uVar14 != 0xffffffff) {
        lVar13 = *(long *)(param_2 + 0x20);
        uVar15 = 0xffffffff;
        do {
          uVar8 = (ulong)uVar14;
          if ((*(char *)(lVar13 + (ulong)uVar14 * 0xc + 9) == -1) ||
             (((*(uint *)(lVar13 + uVar8 * 0xc) ^
               (iVar5 << (ulong)(uVar3 + uVar4 & 0x1f) |
               (int)((ulong)((long)param_3 - lVar11) >> 3) * -0x3b13b13b << (ulong)(uVar4 & 0x1f)))
               >> (ulong)(uVar4 & 0x1f) & (1 << (ulong)(uVar3 & 0x1f)) - 1U) != 0)) {
            uVar15 = (ulong)uVar14;
            uVar14 = *(uint *)(lVar13 + uVar8 * 0xc + 4);
          }
          else {
            lVar9 = lVar13 + uVar8 * 0xc;
            uVar6 = *(uint *)(lVar9 + 4);
            puVar2 = puVar1;
            if ((int)uVar15 != -1) {
              puVar2 = (uint *)(lVar13 + uVar15 * 0xc + 4);
            }
            *puVar2 = uVar6;
            *(undefined4 *)(lVar9 + 4) = *(undefined4 *)(param_2 + 4);
            *(uint *)(param_2 + 4) = uVar14;
            uVar14 = uVar6;
          }
        } while (uVar14 != 0xffffffff);
      }
      lVar10 = lVar10 + 1;
    } while (lVar10 < iVar7);
  }
  return;
}




uint FUN_00ef1fcc(long param_1,int *param_2)

{
  if (param_2 != (int *)0x0) {
    return *param_2 << (ulong)(*(int *)(param_1 + 0x5c) + *(uint *)(param_1 + 0x60) & 0x1f) |
           (int)((ulong)((long)param_2 - *(long *)(param_1 + 0x50)) >> 3) * -0x3b13b13b <<
           (ulong)(*(uint *)(param_1 + 0x60) & 0x1f);
  }
  return 0;
}

