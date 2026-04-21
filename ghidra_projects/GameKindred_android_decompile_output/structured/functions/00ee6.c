// functions/00ee6 — 5 functions
#include "libGameKindred.h"




void FUN_00ee60f4(long param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  int iVar5;
  uint uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  ushort *puVar11;
  undefined8 local_80;
  undefined8 uStack_78;
  ulong local_70;
  int local_68;
  long local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  lVar9 = *(long *)(param_1 + 0x270);
  uVar1 = *(uint *)(param_1 + 0x228);
  if (((*(int *)(param_1 + 0x174) == 0) || (*(int *)(lVar9 + 0x38) != 0)) ||
     (uVar3 = FUN_00ee71d0(param_1), (int)uVar3 != 0)) {
    puVar8 = *(undefined8 **)(param_1 + 0x28);
    local_80 = *puVar8;
    uStack_78 = puVar8[1];
    uVar4 = *(ulong *)(lVar9 + 0x10);
    uVar6 = *(uint *)(lVar9 + 0x18);
    uVar7 = (ulong)uVar6;
    local_60 = param_1;
    if (0 < *(int *)(param_1 + 0x1f0)) {
      lVar10 = 0;
      do {
        puVar11 = *(ushort **)(param_2 + lVar10 * 8);
        iVar5 = (int)uVar7;
        if (((int)uVar7 < 1) &&
           (uVar3 = FUN_00ee7264(&local_80,uVar4,uVar7,1), uVar4 = local_70, iVar5 = local_68,
           (int)uVar3 == 0)) goto LAB_00ee61f0;
        uVar6 = iVar5 - 1;
        uVar7 = (ulong)uVar6;
        if ((1L << (uVar7 & 0x3f) & uVar4) != 0) {
          *puVar11 = *puVar11 | (ushort)(1 << (ulong)(uVar1 & 0x1f));
        }
        lVar10 = lVar10 + 1;
      } while (lVar10 < *(int *)(param_1 + 0x1f0));
      puVar8 = *(undefined8 **)(param_1 + 0x28);
    }
    *puVar8 = local_80;
    puVar8[1] = uStack_78;
    uVar3 = 1;
    *(ulong *)(lVar9 + 0x10) = uVar4;
    *(uint *)(lVar9 + 0x18) = uVar6;
    *(int *)(lVar9 + 0x38) = *(int *)(lVar9 + 0x38) + -1;
  }
LAB_00ee61f0:
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
  }
  return;
}




void FUN_00ee6220(long *param_1,long *param_2)

{
  bool bVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  short sVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  undefined8 uVar11;
  int *piVar12;
  undefined8 *puVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  uint uVar17;
  ulong uVar18;
  uint uVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  int iVar25;
  uint local_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  ulong local_190;
  uint local_188;
  long *local_180;
  int local_170 [64];
  long local_70;
  
  lVar6 = tpidr_el0;
  local_70 = *(long *)(lVar6 + 0x28);
  lVar20 = param_1[0x4e];
  if (((*(int *)((long)param_1 + 0x174) == 0) || (*(int *)(lVar20 + 0x38) != 0)) ||
     (uVar11 = FUN_00ee71d0(param_1), (int)uVar11 != 0)) {
    if (*(int *)(lVar20 + 0x34) == 0) {
      iVar3 = (int)param_1[0x44];
      lVar21 = param_1[0x46];
      uStack_198 = ((undefined8 *)param_1[5])[1];
      local_1a0 = *(undefined8 *)param_1[5];
      uVar16 = *(ulong *)(lVar20 + 0x10);
      uVar18 = (ulong)*(uint *)(lVar20 + 0x18);
      local_1a8 = *(int *)(lVar20 + 0x20);
      lVar24 = *param_2;
      iVar8 = *(int *)((long)param_1 + 0x21c);
      uVar4 = 1 << (ulong)(*(uint *)(param_1 + 0x45) & 0x1f);
      uVar5 = -1 << (ulong)(*(uint *)(param_1 + 0x45) & 0x1f);
      local_180 = param_1;
      if (local_1a8 == 0) {
        lVar15 = *(long *)(lVar20 + 0x60);
        iVar25 = 0;
        do {
          if ((int)uVar18 < 8) {
            iVar9 = FUN_00ee7264(&local_1a0,uVar16,uVar18,0);
            if (iVar9 == 0) goto LAB_00ee65f4;
            uVar18 = (ulong)local_188;
            uVar16 = local_190;
            if (7 < (int)local_188) goto LAB_00ee6404;
            uVar11 = 1;
LAB_00ee6430:
            uVar10 = FUN_00ee73b0(&local_1a0,uVar16,uVar18,lVar15,uVar11);
            uVar16 = local_190;
            uVar17 = local_188;
            if ((int)uVar10 < 0) goto LAB_00ee65f4;
          }
          else {
LAB_00ee6404:
            uVar14 = (long)uVar16 >> ((ulong)((int)uVar18 - 8) & 0x3f);
            iVar9 = *(int *)(lVar15 + (uVar14 & 0xff) * 4 + 0x120);
            if (iVar9 == 0) {
              uVar11 = 9;
              goto LAB_00ee6430;
            }
            uVar10 = (uint)*(byte *)(lVar15 + (uVar14 & 0xff) + 0x520);
            uVar17 = (int)uVar18 - iVar9;
          }
          uVar18 = (ulong)uVar17;
          uVar19 = uVar10 >> 4;
          if ((uVar10 & 0xf) == 0) {
            if (uVar19 != 0xf) {
              if (uVar19 == 0) {
                local_1a8 = 1;
                goto LAB_00ee62d4;
              }
              if (((int)uVar17 < (int)uVar19) &&
                 (iVar9 = FUN_00ee7264(&local_1a0,uVar16,uVar18,uVar19), uVar16 = local_190,
                 uVar17 = local_188, iVar9 == 0)) goto LAB_00ee65f4;
              uVar17 = uVar17 - uVar19;
              uVar18 = (ulong)uVar17;
              local_1a8 = (*(uint *)(&DAT_01bf3a5c + (ulong)uVar19 * 4) &
                          (uint)((long)uVar16 >> (uVar18 & 0x3f))) + (1 << (ulong)(uVar19 & 0x1f));
              if (local_1a8 != 0) goto LAB_00ee62d4;
              iVar8 = 0;
              goto LAB_00ee6358;
            }
            local_1a8 = 0;
          }
          else {
            if ((uVar10 & 0xf) != 1) {
              lVar22 = *param_1;
              *(undefined4 *)(lVar22 + 0x28) = 0x79;
              (**(code **)(lVar22 + 8))(param_1,0xffffffff);
            }
            if (((int)uVar17 < 1) &&
               (iVar9 = FUN_00ee7264(&local_1a0,uVar16,uVar18,1), uVar16 = local_190,
               uVar17 = local_188, iVar9 == 0)) goto LAB_00ee65f4;
            uVar18 = (ulong)(uVar17 - 1);
            local_1a8 = uVar5;
            if ((1L << (uVar18 & 0x3f) & uVar16) != 0) {
              local_1a8 = uVar4;
            }
          }
          lVar22 = (long)iVar8;
          do {
            lVar23 = (long)*(int *)(lVar21 + lVar22 * 4);
            if (*(short *)(lVar24 + lVar23 * 2) == 0) {
              bVar1 = (int)uVar19 < 1;
              uVar19 = uVar19 - 1;
              if (bVar1) break;
            }
            else {
              uVar17 = (uint)uVar18;
              if (((int)(uint)uVar18 < 1) &&
                 (iVar8 = FUN_00ee7264(&local_1a0,uVar16,uVar18,1), uVar16 = local_190,
                 uVar17 = local_188, iVar8 == 0)) goto LAB_00ee65f4;
              uVar18 = (ulong)(uVar17 - 1);
              if ((1L << (uVar18 & 0x3f) & uVar16) != 0) {
                sVar2 = *(short *)(lVar24 + lVar23 * 2);
                if ((uVar4 & (int)sVar2) == 0) {
                  uVar17 = uVar5;
                  if (-1 < sVar2) {
                    uVar17 = uVar4;
                  }
                  *(short *)(lVar24 + lVar23 * 2) = sVar2 + (short)uVar17;
                }
              }
            }
            lVar23 = lVar22 + 1;
            bVar1 = lVar22 < iVar3;
            lVar22 = lVar23;
          } while (bVar1);
          uVar17 = (uint)uVar18;
          iVar9 = (int)lVar22;
          if (local_1a8 != 0) {
            iVar8 = *(int *)(lVar21 + (long)iVar9 * 4);
            *(short *)(lVar24 + (long)iVar8 * 2) = (short)local_1a8;
            local_170[iVar25] = iVar8;
            iVar25 = iVar25 + 1;
          }
          iVar8 = iVar9 + 1;
        } while (iVar9 < iVar3);
        iVar8 = 0;
      }
      else {
        iVar25 = 0;
LAB_00ee62d4:
        lVar15 = (long)iVar8;
        do {
          lVar22 = (long)*(int *)(lVar21 + lVar15 * 4);
          if (*(short *)(lVar24 + lVar22 * 2) != 0) {
            uVar17 = (uint)uVar18;
            if (((int)(uint)uVar18 < 1) &&
               (iVar8 = FUN_00ee7264(&local_1a0,uVar16,uVar18,1), uVar16 = local_190,
               uVar17 = local_188, iVar8 == 0)) goto LAB_00ee65f4;
            uVar18 = (ulong)(uVar17 - 1);
            if ((1L << (uVar18 & 0x3f) & uVar16) != 0) {
              sVar2 = *(short *)(lVar24 + lVar22 * 2);
              if ((uVar4 & (int)sVar2) == 0) {
                if (sVar2 < 0) {
                  sVar7 = (short)uVar5;
                }
                else {
                  sVar7 = (short)uVar4;
                }
                *(short *)(lVar24 + lVar22 * 2) = sVar2 + sVar7;
              }
            }
          }
          uVar17 = (uint)uVar18;
          bVar1 = lVar15 < iVar3;
          lVar15 = lVar15 + 1;
        } while (bVar1);
        iVar8 = local_1a8 + -1;
      }
LAB_00ee6358:
      puVar13 = (undefined8 *)param_1[5];
      puVar13[1] = uStack_198;
      *puVar13 = local_1a0;
      *(ulong *)(lVar20 + 0x10) = uVar16;
      *(uint *)(lVar20 + 0x18) = uVar17;
      *(int *)(lVar20 + 0x20) = iVar8;
    }
    uVar11 = 1;
    *(int *)(lVar20 + 0x38) = *(int *)(lVar20 + 0x38) + -1;
  }
LAB_00ee6388:
  if (*(long *)(lVar6 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar11);
  }
  return;
LAB_00ee65f4:
  if (iVar25 != 0) {
    piVar12 = local_170 + iVar25;
    do {
      piVar12 = piVar12 + -1;
      iVar25 = iVar25 + -1;
      *(undefined2 *)(lVar24 + (long)*piVar12 * 2) = 0;
    } while (iVar25 != 0);
  }
  uVar11 = 0;
  goto LAB_00ee6388;
}




void FUN_00ee6630(long *param_1,int param_2,uint param_3,long *param_4)

{
  byte bVar1;
  uint uVar2;
  long lVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  uint *puVar8;
  long lVar9;
  int iVar10;
  byte *pbVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  uint uVar16;
  uint uVar17;
  uint local_578 [257];
  byte local_174 [260];
  long local_70;
  
  lVar3 = tpidr_el0;
  local_70 = *(long *)(lVar3 + 0x28);
  if (3 < param_3) {
    lVar5 = *param_1;
    *(undefined4 *)(lVar5 + 0x28) = 0x34;
    *(uint *)(lVar5 + 0x2c) = param_3;
    (**(code **)*param_1)(param_1);
  }
  lVar5 = (long)(int)param_3 + 0x1d;
  if (param_2 == 0) {
    lVar5 = (long)(int)param_3 + 0x21;
  }
  lVar5 = param_1[lVar5];
  if (lVar5 == 0) {
    lVar6 = *param_1;
    *(undefined4 *)(lVar6 + 0x28) = 0x34;
    *(uint *)(lVar6 + 0x2c) = param_3;
    (**(code **)*param_1)(param_1);
  }
  lVar6 = *param_4;
  if (lVar6 == 0) {
    lVar6 = (**(code **)param_1[1])(param_1,1,0x620);
    *param_4 = lVar6;
  }
  uVar16 = 0;
  lVar13 = 1;
  *(long *)(lVar6 + 0x118) = lVar5;
  do {
    bVar1 = *(byte *)(lVar5 + lVar13);
    if (0x100 < (int)(uVar16 + bVar1)) {
      puVar7 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar7 + 5) = 9;
      (*(code *)*puVar7)(param_1);
    }
    if (bVar1 != 0) {
      memset(local_174 + (int)uVar16,(int)lVar13,(ulong)bVar1);
      uVar16 = uVar16 + bVar1;
    }
    lVar13 = lVar13 + 1;
  } while (lVar13 != 0x11);
  local_174[(int)uVar16] = 0;
  uVar14 = (ulong)local_174[0];
  if (uVar14 != 0) {
    iVar10 = 0;
    uVar17 = 0;
    uVar15 = uVar14;
    do {
      if (uVar15 == uVar14) {
        puVar8 = local_578 + iVar10;
        pbVar11 = (byte *)(((ulong)local_174 | 1) + (long)iVar10);
        do {
          *puVar8 = uVar17;
          bVar1 = *pbVar11;
          uVar17 = uVar17 + 1;
          iVar10 = iVar10 + 1;
          puVar8 = puVar8 + 1;
          pbVar11 = pbVar11 + 1;
        } while (uVar15 == bVar1);
      }
      if (1L << (uVar15 & 0x3f) <= (long)(ulong)uVar17) {
        puVar7 = (undefined8 *)*param_1;
        *(undefined4 *)(puVar7 + 5) = 9;
        (*(code *)*puVar7)(param_1);
      }
      bVar1 = local_174[iVar10];
      uVar14 = (ulong)bVar1;
      uVar17 = uVar17 << 1;
      uVar15 = uVar15 + 1;
    } while (bVar1 != 0);
  }
  lVar9 = 0;
  lVar13 = 0;
  do {
    if (*(char *)(lVar5 + 1 + lVar9) == '\0') {
      uVar14 = 0xffffffffffffffff;
    }
    else {
      iVar10 = (int)lVar13;
      *(ulong *)(lVar6 + lVar9 * 8 + 0x98) = (long)iVar10 - (ulong)local_578[iVar10];
      lVar13 = (ulong)*(byte *)(lVar5 + 1 + lVar9) + (long)iVar10;
      uVar14 = (ulong)local_578[lVar13 + -1];
    }
    lVar12 = lVar9 * 8;
    lVar9 = lVar9 + 1;
    *(ulong *)(lVar6 + lVar12 + 8) = uVar14;
  } while (lVar9 != 0x10);
  *(undefined8 *)(lVar6 + 0x88) = 0xfffff;
  memset((void *)(lVar6 + 0x120),0,0x400);
  lVar13 = 0;
  lVar9 = 1;
  do {
    if (*(char *)(lVar5 + lVar9) != '\0') {
      uVar2 = 8 - (int)lVar9;
      uVar17 = 1;
      lVar13 = (long)(int)lVar13;
      do {
        lVar12 = (long)(int)(local_578[lVar13] << (ulong)(uVar2 & 0x1f));
        iVar10 = (1 << (ulong)(uVar2 & 0x1f)) + 1;
        do {
          *(int *)(lVar6 + 0x520 + lVar12 * 4 + -0x400) = (int)lVar9;
          iVar10 = iVar10 + -1;
          *(undefined1 *)(lVar6 + 0x520 + lVar12) = *(undefined1 *)(lVar5 + lVar13 + 0x11);
          lVar12 = lVar12 + 1;
        } while (1 < iVar10);
        lVar13 = lVar13 + 1;
        bVar4 = uVar17 < *(byte *)(lVar5 + lVar9);
        uVar17 = uVar17 + 1;
      } while (bVar4);
    }
    lVar9 = lVar9 + 1;
  } while (lVar9 != 9);
  if ((param_2 != 0) && (0 < (int)uVar16)) {
    uVar14 = (ulong)uVar16;
    pbVar11 = (byte *)(lVar5 + 0x11);
    do {
      if (0xf < *pbVar11) {
        puVar7 = (undefined8 *)*param_1;
        *(undefined4 *)(puVar7 + 5) = 9;
        (*(code *)*puVar7)(param_1);
      }
      uVar14 = uVar14 - 1;
      pbVar11 = pbVar11 + 1;
    } while (uVar14 != 0);
  }
  if (*(long *)(lVar3 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ee6954(long param_1,long param_2)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  uint uVar7;
  undefined8 uVar8;
  long lVar9;
  uint uVar10;
  ulong uVar11;
  int iVar12;
  long lVar13;
  undefined8 *puVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  undefined2 *puVar19;
  undefined8 local_a8;
  undefined8 uStack_a0;
  long local_98;
  uint local_90;
  long local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  long local_68;
  
  lVar6 = tpidr_el0;
  local_68 = *(long *)(lVar6 + 0x28);
  lVar17 = *(long *)(param_1 + 0x270);
  if (((*(int *)(param_1 + 0x174) == 0) || (*(int *)(lVar17 + 0x38) != 0)) ||
     (uVar8 = FUN_00ee71d0(param_1), (int)uVar8 != 0)) {
    if (*(int *)(lVar17 + 0x34) == 0) {
      lVar13 = *(long *)(param_1 + 0x230);
      iVar3 = *(int *)(param_1 + 0x238);
      puVar14 = *(undefined8 **)(param_1 + 0x28);
      local_a8 = *puVar14;
      uStack_a0 = puVar14[1];
      lVar9 = *(long *)(lVar17 + 0x10);
      uVar10 = *(uint *)(lVar17 + 0x18);
      uVar11 = (ulong)uVar10;
      local_70 = *(undefined4 *)(lVar17 + 0x30);
      local_80 = *(undefined8 *)(lVar17 + 0x20);
      uStack_78 = *(undefined8 *)(lVar17 + 0x28);
      local_88 = param_1;
      if (0 < *(int *)(param_1 + 0x1f0)) {
        lVar18 = 0;
        do {
          puVar19 = *(undefined2 **)(param_2 + lVar18 * 8);
          lVar16 = *(long *)(lVar17 + lVar18 * 8 + 0xa8);
          if ((int)uVar11 < 8) {
            uVar8 = FUN_00ee7264(&local_a8,lVar9,uVar11,0);
            if ((int)uVar8 == 0) goto LAB_00ee6d64;
            uVar11 = (ulong)local_90;
            lVar9 = local_98;
            if (7 < (int)local_90) goto LAB_00ee6a48;
            uVar8 = 1;
LAB_00ee6a74:
            uVar7 = FUN_00ee73b0(&local_a8,lVar9,uVar11,lVar16,uVar8);
            lVar9 = local_98;
            uVar10 = local_90;
            if ((int)uVar7 < 0) {
LAB_00ee6d5c:
              uVar8 = 0;
              goto LAB_00ee6d64;
            }
          }
          else {
LAB_00ee6a48:
            uVar15 = lVar9 >> ((ulong)((int)uVar11 - 8) & 0x3f);
            iVar4 = *(int *)(lVar16 + (uVar15 & 0xff) * 4 + 0x120);
            if (iVar4 == 0) {
              uVar8 = 9;
              goto LAB_00ee6a74;
            }
            uVar7 = (uint)*(byte *)(lVar16 + (uVar15 & 0xff) + 0x520);
            uVar10 = (int)uVar11 - iVar4;
          }
          uVar11 = (ulong)uVar10;
          iVar4 = *(int *)(lVar17 + lVar18 * 4 + 0x148);
          lVar16 = *(long *)(lVar17 + lVar18 * 8 + 0xf8);
          if (iVar4 == 0) {
            if (uVar7 != 0) {
              if (((int)uVar10 < (int)uVar7) &&
                 (uVar8 = FUN_00ee7264(&local_a8,lVar9,uVar11,uVar7), lVar9 = local_98,
                 uVar10 = local_90, (int)uVar8 == 0)) goto LAB_00ee6d64;
              uVar11 = (ulong)(uVar10 - uVar7);
            }
LAB_00ee6c50:
            iVar12 = 1;
          }
          else {
            if (uVar7 == 0) {
              iVar12 = 0;
            }
            else {
              if (((int)uVar10 < (int)uVar7) &&
                 (uVar8 = FUN_00ee7264(&local_a8,lVar9,uVar11,uVar7), lVar9 = local_98,
                 uVar10 = local_90, (int)uVar8 == 0)) goto LAB_00ee6d64;
              uVar11 = (ulong)(uVar10 - uVar7);
              uVar10 = *(uint *)(&DAT_01bf3a5c + (long)(int)uVar7 * 4) &
                       (uint)(lVar9 >> (uVar11 & 0x3f));
              uVar2 = 0;
              if ((int)uVar10 <= *(int *)(&DAT_01bf3a58 + (long)(int)uVar7 * 4)) {
                uVar2 = *(uint *)(&DAT_01bf3a5c + (long)(int)uVar7 * 4);
              }
              iVar12 = uVar10 - uVar2;
            }
            lVar1 = (long)*(int *)(param_1 + lVar18 * 4 + 500) * 4;
            iVar12 = *(int *)((long)&local_80 + lVar1 + 4) + iVar12;
            *(int *)((long)&local_80 + lVar1 + 4) = iVar12;
            *puVar19 = (short)iVar12;
            if (iVar4 < 2) goto LAB_00ee6c50;
            iVar12 = 1;
            do {
              if ((int)uVar11 < 8) {
                uVar8 = FUN_00ee7264(&local_a8,lVar9,uVar11,0);
                if ((int)uVar8 == 0) goto LAB_00ee6d64;
                uVar11 = (ulong)local_90;
                lVar9 = local_98;
                if (7 < (int)local_90) goto LAB_00ee6b80;
                uVar8 = 1;
LAB_00ee6bac:
                uVar7 = FUN_00ee73b0(&local_a8,lVar9,uVar11,lVar16,uVar8);
                lVar9 = local_98;
                uVar10 = local_90;
                if ((int)uVar7 < 0) goto LAB_00ee6d5c;
              }
              else {
LAB_00ee6b80:
                uVar15 = lVar9 >> ((ulong)((int)uVar11 - 8) & 0x3f);
                iVar5 = *(int *)(lVar16 + (uVar15 & 0xff) * 4 + 0x120);
                if (iVar5 == 0) {
                  uVar8 = 9;
                  goto LAB_00ee6bac;
                }
                uVar7 = (uint)*(byte *)(lVar16 + (uVar15 & 0xff) + 0x520);
                uVar10 = (int)uVar11 - iVar5;
              }
              uVar11 = (ulong)uVar10;
              uVar2 = uVar7 & 0xf;
              if ((uVar7 & 0xf) == 0) {
                if (uVar7 >> 4 != 0xf) goto LAB_00ee6d18;
                iVar12 = iVar12 + 0xf;
              }
              else {
                if (((int)uVar10 < (int)uVar2) &&
                   (uVar8 = FUN_00ee7264(&local_a8,lVar9,uVar11,uVar2), lVar9 = local_98,
                   uVar10 = local_90, (int)uVar8 == 0)) goto LAB_00ee6d64;
                uVar11 = (ulong)(uVar10 - uVar2);
                iVar12 = (uVar7 >> 4) + iVar12;
                uVar10 = *(uint *)(&DAT_01bf3a5c + (ulong)uVar2 * 4) &
                         (uint)(lVar9 >> (uVar11 & 0x3f));
                uVar7 = 0;
                if ((int)uVar10 <= *(int *)(&DAT_01bf3a58 + (long)(int)uVar2 * 4)) {
                  uVar7 = *(uint *)(&DAT_01bf3a5c + (ulong)uVar2 * 4);
                }
                puVar19[*(int *)(lVar13 + (long)iVar12 * 4)] = (short)uVar10 - (short)uVar7;
              }
              iVar12 = iVar12 + 1;
            } while (iVar12 < iVar4);
          }
          for (; iVar12 <= iVar3; iVar12 = iVar12 + (uVar7 >> 4) + 1) {
            if ((int)uVar11 < 8) {
              uVar8 = FUN_00ee7264(&local_a8,lVar9,uVar11,0);
              if ((int)uVar8 == 0) goto LAB_00ee6d64;
              uVar11 = (ulong)local_90;
              lVar9 = local_98;
              if (7 < (int)local_90) goto LAB_00ee6c98;
              uVar8 = 1;
LAB_00ee6cc4:
              uVar7 = FUN_00ee73b0(&local_a8,lVar9,uVar11,lVar16,uVar8);
              lVar9 = local_98;
              uVar10 = local_90;
              if ((int)uVar7 < 0) goto LAB_00ee6d5c;
            }
            else {
LAB_00ee6c98:
              uVar15 = lVar9 >> ((ulong)((int)uVar11 - 8) & 0x3f);
              iVar4 = *(int *)(lVar16 + (uVar15 & 0xff) * 4 + 0x120);
              if (iVar4 == 0) {
                uVar8 = 9;
                goto LAB_00ee6cc4;
              }
              uVar7 = (uint)*(byte *)(lVar16 + (uVar15 & 0xff) + 0x520);
              uVar10 = (int)uVar11 - iVar4;
            }
            uVar11 = (ulong)uVar10;
            uVar2 = uVar7 & 0xf;
            if ((uVar7 & 0xf) == 0) {
              if (uVar7 >> 4 != 0xf) break;
            }
            else {
              if (((int)uVar10 < (int)uVar2) &&
                 (uVar8 = FUN_00ee7264(&local_a8,lVar9,uVar11,uVar2), lVar9 = local_98,
                 uVar10 = local_90, (int)uVar8 == 0)) goto LAB_00ee6d64;
              uVar11 = (ulong)(uVar10 - uVar2);
            }
          }
LAB_00ee6d18:
          uVar10 = (uint)uVar11;
          lVar18 = lVar18 + 1;
        } while (lVar18 < *(int *)(param_1 + 0x1f0));
        puVar14 = *(undefined8 **)(param_1 + 0x28);
      }
      *puVar14 = local_a8;
      puVar14[1] = uStack_a0;
      *(long *)(lVar17 + 0x10) = lVar9;
      *(uint *)(lVar17 + 0x18) = uVar10;
      *(undefined4 *)(lVar17 + 0x30) = local_70;
      *(undefined8 *)(lVar17 + 0x28) = uStack_78;
      *(undefined8 *)(lVar17 + 0x20) = local_80;
    }
    uVar8 = 1;
    *(int *)(lVar17 + 0x38) = *(int *)(lVar17 + 0x38) + -1;
  }
LAB_00ee6d64:
  if (*(long *)(lVar6 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar8);
  }
  return;
}




void FUN_00ee6d98(long param_1,long param_2)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  uint uVar6;
  undefined8 uVar7;
  long lVar8;
  uint uVar9;
  ulong uVar10;
  int iVar11;
  undefined8 *puVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined2 *puVar17;
  undefined8 local_a8;
  undefined8 uStack_a0;
  long local_98;
  uint local_90;
  long local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  lVar15 = *(long *)(param_1 + 0x270);
  if (((*(int *)(param_1 + 0x174) == 0) || (*(int *)(lVar15 + 0x38) != 0)) ||
     (uVar7 = FUN_00ee71d0(param_1), (int)uVar7 != 0)) {
    if (*(int *)(lVar15 + 0x34) == 0) {
      puVar12 = *(undefined8 **)(param_1 + 0x28);
      local_a8 = *puVar12;
      uStack_a0 = puVar12[1];
      lVar8 = *(long *)(lVar15 + 0x10);
      uVar9 = *(uint *)(lVar15 + 0x18);
      uVar10 = (ulong)uVar9;
      local_70 = *(undefined4 *)(lVar15 + 0x30);
      local_80 = *(undefined8 *)(lVar15 + 0x20);
      uStack_78 = *(undefined8 *)(lVar15 + 0x28);
      local_88 = param_1;
      if (0 < *(int *)(param_1 + 0x1f0)) {
        lVar16 = 0;
        do {
          puVar17 = *(undefined2 **)(param_2 + lVar16 * 8);
          lVar14 = *(long *)(lVar15 + lVar16 * 8 + 0xa8);
          if ((int)uVar10 < 8) {
            uVar7 = FUN_00ee7264(&local_a8,lVar8,uVar10,0);
            if ((int)uVar7 == 0) goto LAB_00ee6e04;
            uVar10 = (ulong)local_90;
            lVar8 = local_98;
            if (7 < (int)local_90) goto LAB_00ee6eac;
            uVar7 = 1;
LAB_00ee6ed8:
            uVar6 = FUN_00ee73b0(&local_a8,lVar8,uVar10,lVar14,uVar7);
            lVar8 = local_98;
            uVar9 = local_90;
            if ((int)uVar6 < 0) {
LAB_00ee71c4:
              uVar7 = 0;
              goto LAB_00ee6e04;
            }
          }
          else {
LAB_00ee6eac:
            uVar13 = lVar8 >> ((ulong)((int)uVar10 - 8) & 0x3f);
            iVar4 = *(int *)(lVar14 + (uVar13 & 0xff) * 4 + 0x120);
            if (iVar4 == 0) {
              uVar7 = 9;
              goto LAB_00ee6ed8;
            }
            uVar6 = (uint)*(byte *)(lVar14 + (uVar13 & 0xff) + 0x520);
            uVar9 = (int)uVar10 - iVar4;
          }
          uVar10 = (ulong)uVar9;
          iVar4 = *(int *)(lVar15 + lVar16 * 4 + 0x148);
          lVar14 = *(long *)(lVar15 + lVar16 * 8 + 0xf8);
          if (iVar4 == 0) {
            if (uVar6 != 0) {
              if (((int)uVar9 < (int)uVar6) &&
                 (uVar7 = FUN_00ee7264(&local_a8,lVar8,uVar10,uVar6), lVar8 = local_98,
                 uVar9 = local_90, (int)uVar7 == 0)) goto LAB_00ee6e04;
              uVar10 = (ulong)(uVar9 - uVar6);
            }
LAB_00ee70c0:
            iVar11 = 1;
LAB_00ee70c4:
            do {
              if ((int)uVar10 < 8) {
                uVar7 = FUN_00ee7264(&local_a8,lVar8,uVar10,0);
                if ((int)uVar7 == 0) goto LAB_00ee6e04;
                uVar10 = (ulong)local_90;
                lVar8 = local_98;
                if (7 < (int)local_90) goto LAB_00ee70f4;
                uVar7 = 1;
LAB_00ee7120:
                uVar6 = FUN_00ee73b0(&local_a8,lVar8,uVar10,lVar14,uVar7);
                lVar8 = local_98;
                uVar9 = local_90;
                if ((int)uVar6 < 0) goto LAB_00ee71c4;
              }
              else {
LAB_00ee70f4:
                uVar13 = lVar8 >> ((ulong)((int)uVar10 - 8) & 0x3f);
                iVar4 = *(int *)(lVar14 + (uVar13 & 0xff) * 4 + 0x120);
                if (iVar4 == 0) {
                  uVar7 = 9;
                  goto LAB_00ee7120;
                }
                uVar6 = (uint)*(byte *)(lVar14 + (uVar13 & 0xff) + 0x520);
                uVar9 = (int)uVar10 - iVar4;
              }
              uVar10 = (ulong)uVar9;
              uVar3 = uVar6 & 0xf;
              if ((uVar6 & 0xf) == 0) {
                if (uVar6 >> 4 != 0xf) break;
              }
              else {
                if (((int)uVar9 < (int)uVar3) &&
                   (uVar7 = FUN_00ee7264(&local_a8,lVar8,uVar10,uVar3), lVar8 = local_98,
                   uVar9 = local_90, (int)uVar7 == 0)) goto LAB_00ee6e04;
                uVar10 = (ulong)(uVar9 - uVar3);
              }
              iVar11 = iVar11 + (uVar6 >> 4) + 1;
            } while (iVar11 < 0x40);
          }
          else {
            if (uVar6 == 0) {
              iVar11 = 0;
            }
            else {
              if (((int)uVar9 < (int)uVar6) &&
                 (uVar7 = FUN_00ee7264(&local_a8,lVar8,uVar10,uVar6), lVar8 = local_98,
                 uVar9 = local_90, (int)uVar7 == 0)) goto LAB_00ee6e04;
              uVar10 = (ulong)(uVar9 - uVar6);
              uVar9 = *(uint *)(&DAT_01bf3a5c + (long)(int)uVar6 * 4) &
                      (uint)(lVar8 >> (uVar10 & 0x3f));
              uVar3 = 0;
              if ((int)uVar9 <= *(int *)(&DAT_01bf3a58 + (long)(int)uVar6 * 4)) {
                uVar3 = *(uint *)(&DAT_01bf3a5c + (long)(int)uVar6 * 4);
              }
              iVar11 = uVar9 - uVar3;
            }
            lVar1 = (long)*(int *)(param_1 + lVar16 * 4 + 500) * 4;
            iVar11 = *(int *)((long)&local_80 + lVar1 + 4) + iVar11;
            *(int *)((long)&local_80 + lVar1 + 4) = iVar11;
            *puVar17 = (short)iVar11;
            if (iVar4 < 2) goto LAB_00ee70c0;
            iVar11 = 1;
            do {
              if ((int)uVar10 < 8) {
                uVar7 = FUN_00ee7264(&local_a8,lVar8,uVar10,0);
                if ((int)uVar7 == 0) goto LAB_00ee6e04;
                uVar10 = (ulong)local_90;
                lVar8 = local_98;
                if (7 < (int)local_90) goto LAB_00ee6fe4;
                uVar7 = 1;
LAB_00ee7010:
                uVar6 = FUN_00ee73b0(&local_a8,lVar8,uVar10,lVar14,uVar7);
                lVar8 = local_98;
                uVar9 = local_90;
                if ((int)uVar6 < 0) goto LAB_00ee71c4;
              }
              else {
LAB_00ee6fe4:
                uVar13 = lVar8 >> ((ulong)((int)uVar10 - 8) & 0x3f);
                iVar2 = *(int *)(lVar14 + (uVar13 & 0xff) * 4 + 0x120);
                if (iVar2 == 0) {
                  uVar7 = 9;
                  goto LAB_00ee7010;
                }
                uVar6 = (uint)*(byte *)(lVar14 + (uVar13 & 0xff) + 0x520);
                uVar9 = (int)uVar10 - iVar2;
              }
              uVar10 = (ulong)uVar9;
              uVar3 = uVar6 & 0xf;
              if ((uVar6 & 0xf) == 0) {
                if (uVar6 >> 4 != 0xf) goto LAB_00ee7184;
                iVar2 = iVar11 + 0xf;
              }
              else {
                if (((int)uVar9 < (int)uVar3) &&
                   (uVar7 = FUN_00ee7264(&local_a8,lVar8,uVar10,uVar3), lVar8 = local_98,
                   uVar9 = local_90, (int)uVar7 == 0)) goto LAB_00ee6e04;
                uVar10 = (ulong)(uVar9 - uVar3);
                iVar2 = (uVar6 >> 4) + iVar11;
                uVar9 = *(uint *)(&DAT_01bf3a5c + (ulong)uVar3 * 4) &
                        (uint)(lVar8 >> (uVar10 & 0x3f));
                uVar6 = 0;
                if ((int)uVar9 <= *(int *)(&DAT_01bf3a58 + (long)(int)uVar3 * 4)) {
                  uVar6 = *(uint *)(&DAT_01bf3a5c + (ulong)uVar3 * 4);
                }
                puVar17[*(int *)(&DAT_01bf3110 + (long)iVar2 * 4)] = (short)uVar9 - (short)uVar6;
              }
              iVar11 = iVar2 + 1;
            } while (iVar11 < iVar4);
            if (iVar2 < 0x3f) goto LAB_00ee70c4;
          }
LAB_00ee7184:
          uVar9 = (uint)uVar10;
          lVar16 = lVar16 + 1;
        } while (lVar16 < *(int *)(param_1 + 0x1f0));
        puVar12 = *(undefined8 **)(param_1 + 0x28);
      }
      *puVar12 = local_a8;
      puVar12[1] = uStack_a0;
      *(long *)(lVar15 + 0x10) = lVar8;
      *(uint *)(lVar15 + 0x18) = uVar9;
      *(undefined4 *)(lVar15 + 0x30) = local_70;
      *(undefined8 *)(lVar15 + 0x28) = uStack_78;
      *(undefined8 *)(lVar15 + 0x20) = local_80;
    }
    uVar7 = 1;
    *(int *)(lVar15 + 0x38) = *(int *)(lVar15 + 0x38) + -1;
  }
LAB_00ee6e04:
  if (*(long *)(lVar5 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar7);
  }
  return;
}

