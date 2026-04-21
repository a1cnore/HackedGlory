// functions/019a8 — 5 functions
#include "libGameKindred.h"




undefined8
FUN_019a836c(undefined4 *param_1,long param_2,int param_3,int param_4,int param_5,code *param_6)

{
  uint *puVar1;
  ulong *puVar2;
  long *plVar3;
  uint uVar4;
  int iVar5;
  byte bVar6;
  int iVar7;
  ulong uVar8;
  int *piVar9;
  long lVar10;
  uint *puVar11;
  uint uVar12;
  undefined4 uVar13;
  long lVar14;
  ulong uVar15;
  uint *puVar16;
  uint *puVar17;
  uint uVar18;
  long lVar19;
  int iVar20;
  ulong uVar21;
  int iVar22;
  int iVar23;
  uint uVar24;
  int iVar25;
  uint uVar26;
  uint uVar27;
  uint *local_70;
  
  iVar25 = param_1[0x1b];
  uVar4 = param_1[0x25];
  uVar24 = 0;
  if (param_3 != 0) {
    uVar24 = iVar25 / param_3;
  }
  uVar27 = iVar25 - uVar24 * param_3;
  if (uVar4 == 0) {
    lVar14 = 0;
  }
  else {
    lVar14 = (long)*(int *)(*(long *)(param_1 + 0x28) +
                           (long)(((int)uVar27 >> (uVar4 & 0x1f)) +
                                 param_1[0x26] * ((int)uVar24 >> (uVar4 & 0x1f))) * 4);
  }
  puVar2 = (ulong *)(param_1 + 0xc);
  iVar5 = param_1[0x1e];
  puVar17 = (uint *)(param_2 + (long)iVar25 * 4);
  uVar4 = param_1[0x24];
  puVar1 = (uint *)(param_2 + (long)(param_4 * param_3) * 4);
  plVar3 = (long *)(param_1 + 0x20);
  lVar14 = *(long *)(param_1 + 0x2c) + lVar14 * 0xcd0;
  local_70 = puVar17;
  if (iVar5 < 1) {
    plVar3 = (long *)0x0;
  }
  while ((puVar17 < (uint *)(param_2 + (long)(param_5 * param_3) * 4) && (param_1[0x15] == 0))) {
    if ((uVar27 & uVar4) == 0) {
      uVar26 = param_1[0x25];
      if (uVar26 == 0) {
        lVar14 = 0;
      }
      else {
        lVar14 = (long)*(int *)(*(long *)(param_1 + 0x28) +
                               (long)(((int)uVar27 >> (uVar26 & 0x1f)) +
                                     param_1[0x26] * ((int)uVar24 >> (uVar26 & 0x1f))) * 4);
      }
      lVar14 = *(long *)(param_1 + 0x2c) + lVar14 * 0xcd0;
    }
    uVar26 = param_1[0x14];
    if (0x1f < (int)uVar26) {
      FUN_019b6b5c(puVar2);
      uVar26 = param_1[0x14];
    }
    uVar8 = *puVar2;
    uVar15 = uVar8 >> ((ulong)uVar26 & 0x3f);
    uVar21 = uVar15 & 0x7f;
    if (*(byte *)(lVar14 + uVar21) < 8) {
      lVar10 = *(long *)(param_1 + 0x10);
      lVar19 = *(long *)(param_1 + 0x12);
      uVar26 = uVar26 + *(byte *)(lVar14 + uVar21);
      param_1[0x14] = uVar26;
      param_1[0x15] = (uint)(0x40 < (int)uVar26 && lVar19 == lVar10);
      iVar25 = (int)*(short *)(lVar14 + uVar21 * 2 + 0x80);
    }
    else {
      uVar15 = uVar15 >> 7 & 0x1ffffff;
      piVar9 = (int *)(*(long *)(lVar14 + 0x280) + (long)*(short *)(lVar14 + uVar21 * 2 + 0x180) * 8
                      );
      iVar23 = piVar9[1];
      iVar25 = uVar26 + 6;
      do {
        iVar7 = iVar25;
        piVar9 = piVar9 + (long)iVar23 * 2 + (ulong)((uint)uVar15 & 1) * 2;
        iVar23 = piVar9[1];
        uVar15 = (ulong)((uint)uVar15 >> 1);
        iVar25 = iVar7 + 1;
      } while (iVar23 != 0);
      lVar10 = *(long *)(param_1 + 0x10);
      lVar19 = *(long *)(param_1 + 0x12);
      uVar26 = iVar7 + 2;
      param_1[0x14] = uVar26;
      param_1[0x15] = (uint)(0x3f < iVar25 && lVar19 == lVar10);
      iVar25 = *piVar9;
    }
    if (iVar25 < 0x100) {
      uVar21 = uVar8 >> ((ulong)uVar26 & 0x3f);
      uVar15 = uVar21 & 0x7f;
      bVar6 = *(byte *)(lVar14 + uVar15 + 0x290);
      if (bVar6 < 8) {
        uVar26 = uVar26 + bVar6;
        param_1[0x14] = uVar26;
        param_1[0x15] = (uint)(0x40 < (int)uVar26 && lVar19 == lVar10);
        iVar23 = (int)*(short *)(lVar14 + uVar15 * 2 + 0x310);
      }
      else {
        piVar9 = (int *)(*(long *)(lVar14 + 0x510) +
                        (long)*(short *)(lVar14 + uVar15 * 2 + 0x410) * 8);
        iVar7 = piVar9[1];
        uVar15 = uVar21 >> 7 & 0x1ffffff;
        iVar23 = uVar26 + 6;
        do {
          iVar22 = iVar23;
          piVar9 = piVar9 + (long)iVar7 * 2 + (ulong)((uint)uVar15 & 1) * 2;
          iVar7 = piVar9[1];
          uVar15 = (ulong)((uint)uVar15 >> 1);
          iVar23 = iVar22 + 1;
        } while (iVar7 != 0);
        uVar26 = iVar22 + 2;
        param_1[0x14] = uVar26;
        param_1[0x15] = (uint)(0x3f < iVar23 && lVar19 == lVar10);
        iVar23 = *piVar9;
      }
      if (0x1f < (int)uVar26) {
        FUN_019b6b5c(puVar2);
        uVar8 = *(ulong *)(param_1 + 0xc);
        uVar26 = param_1[0x14];
      }
      uVar15 = uVar8 >> ((ulong)uVar26 & 0x3f);
      uVar21 = uVar15 & 0x7f;
      bVar6 = *(byte *)(lVar14 + uVar21 + 0x520);
      if (bVar6 < 8) {
        lVar10 = *(long *)(param_1 + 0x10);
        lVar19 = *(long *)(param_1 + 0x12);
        uVar26 = uVar26 + bVar6;
        param_1[0x14] = uVar26;
        param_1[0x15] = (uint)(0x40 < (int)uVar26 && lVar19 == lVar10);
        uVar12 = (uint)*(short *)(lVar14 + uVar21 * 2 + 0x5a0);
      }
      else {
        uVar15 = uVar15 >> 7 & 0x1ffffff;
        puVar11 = (uint *)(*(long *)(lVar14 + 0x7a0) +
                          (long)*(short *)(lVar14 + uVar21 * 2 + 0x6a0) * 8);
        uVar12 = puVar11[1];
        iVar7 = uVar26 + 6;
        do {
          iVar22 = iVar7;
          puVar11 = puVar11 + (long)(int)uVar12 * 2 + (ulong)((uint)uVar15 & 1) * 2;
          uVar12 = puVar11[1];
          uVar15 = (ulong)((uint)uVar15 >> 1);
          iVar7 = iVar22 + 1;
        } while (uVar12 != 0);
        lVar10 = *(long *)(param_1 + 0x10);
        lVar19 = *(long *)(param_1 + 0x12);
        uVar26 = iVar22 + 2;
        param_1[0x14] = uVar26;
        param_1[0x15] = (uint)(0x3f < iVar7 && lVar19 == lVar10);
        uVar12 = *puVar11;
      }
      uVar8 = uVar8 >> ((ulong)uVar26 & 0x3f);
      uVar15 = uVar8 & 0x7f;
      bVar6 = *(byte *)(lVar14 + uVar15 + 0x7b0);
      if (bVar6 < 8) {
        iVar7 = uVar26 + bVar6;
        param_1[0x14] = iVar7;
        param_1[0x15] = (uint)(0x40 < iVar7 && lVar19 == lVar10);
        iVar7 = (int)*(short *)(lVar14 + uVar15 * 2 + 0x830);
      }
      else {
        uVar8 = uVar8 >> 7 & 0x1ffffff;
        piVar9 = (int *)(*(long *)(lVar14 + 0xa30) +
                        (long)*(short *)(lVar14 + uVar15 * 2 + 0x930) * 8);
        iVar22 = piVar9[1];
        iVar7 = uVar26 + 6;
        do {
          iVar20 = iVar7;
          piVar9 = piVar9 + (long)iVar22 * 2 + (ulong)((uint)uVar8 & 1) * 2;
          iVar22 = piVar9[1];
          uVar8 = (ulong)((uint)uVar8 >> 1);
          iVar7 = iVar20 + 1;
        } while (iVar22 != 0);
        param_1[0x14] = iVar20 + 2;
        param_1[0x15] = (uint)(0x3f < iVar7 && lVar19 == lVar10);
        iVar7 = *piVar9;
      }
      uVar26 = iVar23 << 0x10 | iVar25 << 8 | uVar12 | iVar7 << 0x18;
LAB_019a8850:
      uVar27 = uVar27 + 1;
      puVar11 = puVar17 + 1;
      *puVar17 = uVar26;
      if (param_3 <= (int)uVar27) {
        uVar24 = uVar24 + 1;
        if ((param_6 != (code *)0x0) && ((uVar24 & 0xf) == 0)) {
          (*param_6)(param_1,uVar24);
        }
        if ((iVar5 < 1) || (puVar11 <= local_70)) {
          uVar27 = 0;
        }
        else {
          lVar10 = *plVar3;
          puVar16 = local_70;
          if (local_70 <= puVar17) {
            puVar16 = puVar17;
          }
          uVar8 = (long)puVar16 + (3 - (long)local_70);
          puVar16 = local_70 + -1;
          do {
            puVar16 = puVar16 + 1;
            *(uint *)(lVar10 + (ulong)(*puVar16 * 0x1e35a7bd >>
                                      (ulong)(*(uint *)(plVar3 + 1) & 0x1f)) * 4) = *puVar16;
          } while (puVar16 < puVar17);
          uVar27 = 0;
LAB_019a8ae4:
          local_70 = (uint *)((long)local_70 + (uVar8 & 0xfffffffffffffffc) + 4);
        }
      }
    }
    else {
      if (0x117 < iVar25) {
        if (iVar25 < iVar5 + 0x118) {
          lVar10 = *plVar3;
          if (local_70 < puVar17) {
            puVar11 = local_70;
            do {
              puVar16 = puVar11 + 1;
              *(uint *)(lVar10 + (ulong)(*puVar11 * 0x1e35a7bd >>
                                        (ulong)(*(uint *)(plVar3 + 1) & 0x1f)) * 4) = *puVar11;
              puVar11 = puVar16;
            } while (puVar16 < puVar17);
            local_70 = (uint *)((long)local_70 +
                               ((long)puVar17 + (-1 - (long)local_70) & 0xfffffffffffffffcU) + 4);
          }
          uVar26 = *(uint *)(lVar10 + (ulong)(iVar25 - 0x118) * 4);
          goto LAB_019a8850;
        }
        goto LAB_019a8b30;
      }
      uVar12 = iVar25 - 0x100;
      if (0x103 < iVar25) {
        iVar23 = FUN_019b6c0c(puVar2);
        uVar8 = *(ulong *)(param_1 + 0xc);
        uVar26 = param_1[0x14];
        uVar12 = iVar23 + ((uVar12 & 1 | 2) << (ulong)(iVar25 + -0x102 >> 1 & 0x1f));
      }
      uVar8 = uVar8 >> ((ulong)uVar26 & 0x3f);
      uVar15 = uVar8 & 0x7f;
      bVar6 = *(byte *)(lVar14 + uVar15 + 0xa40);
      if (bVar6 < 8) {
        iVar23 = uVar26 + bVar6;
        param_1[0x14] = iVar23;
        param_1[0x15] =
             (uint)(0x40 < iVar23 && *(long *)(param_1 + 0x12) == *(long *)(param_1 + 0x10));
        uVar26 = (uint)*(short *)(lVar14 + uVar15 * 2 + 0xac0);
      }
      else {
        uVar8 = uVar8 >> 7 & 0x1ffffff;
        puVar11 = (uint *)(*(long *)(lVar14 + 0xcc0) +
                          (long)*(short *)(lVar14 + uVar15 * 2 + 0xbc0) * 8);
        uVar18 = puVar11[1];
        iVar25 = uVar26 + 6;
        do {
          iVar23 = iVar25;
          puVar11 = puVar11 + (long)(int)uVar18 * 2 + (ulong)((uint)uVar8 & 1) * 2;
          uVar18 = puVar11[1];
          uVar8 = (ulong)((uint)uVar8 >> 1);
          iVar25 = iVar23 + 1;
        } while (uVar18 != 0);
        iVar23 = iVar23 + 2;
        param_1[0x14] = iVar23;
        param_1[0x15] =
             (uint)(0x3f < iVar25 && *(long *)(param_1 + 0x12) == *(long *)(param_1 + 0x10));
        uVar26 = *puVar11;
      }
      if (0x1f < iVar23) {
        FUN_019b6b5c(puVar2);
      }
      if (3 < (int)uVar26) {
        iVar25 = FUN_019b6c0c(puVar2);
        uVar26 = iVar25 + ((uVar26 & 1 | 2) << (ulong)((int)(uVar26 - 2) >> 1 & 0x1f));
      }
      if ((int)(uVar26 + 1) < 0x79) {
        iVar25 = (8 - ((byte)(&DAT_01e1c810)[(int)uVar26] & 0xf)) +
                 (uint)((byte)(&DAT_01e1c810)[(int)uVar26] >> 4) * param_3;
        if (iVar25 < 2) {
          iVar25 = 1;
        }
      }
      else {
        iVar25 = uVar26 - 0x77;
      }
      if (((long)puVar17 - param_2 >> 2 < (long)iVar25) ||
         (uVar12 = uVar12 + 1, (long)puVar1 - (long)puVar17 >> 2 < (long)(int)uVar12))
      goto LAB_019a8b30;
      if (0 < (int)uVar12) {
        uVar8 = (ulong)uVar12;
        puVar11 = puVar17;
        do {
          uVar8 = uVar8 - 1;
          *puVar11 = puVar11[-(long)iVar25];
          puVar11 = puVar11 + 1;
        } while (uVar8 != 0);
      }
      uVar27 = uVar12 + uVar27;
      puVar11 = puVar17 + (int)uVar12;
      while (param_3 <= (int)uVar27) {
        uVar27 = uVar27 - param_3;
        uVar24 = uVar24 + 1;
        if ((param_6 != (code *)0x0) && ((uVar24 & 0xf) == 0)) {
          (*param_6)(param_1,uVar24);
        }
      }
      if (puVar11 < puVar1) {
        if ((uVar27 & uVar4) != 0) {
          uVar26 = param_1[0x25];
          if (uVar26 == 0) {
            lVar14 = 0;
          }
          else {
            lVar14 = (long)*(int *)(*(long *)(param_1 + 0x28) +
                                   (long)(((int)uVar27 >> (uVar26 & 0x1f)) +
                                         param_1[0x26] * ((int)uVar24 >> (uVar26 & 0x1f))) * 4);
          }
          lVar14 = *(long *)(param_1 + 0x2c) + lVar14 * 0xcd0;
        }
        if ((iVar5 < 1) || (puVar11 <= local_70)) goto LAB_019a8af4;
        lVar10 = *plVar3;
        uVar8 = (long)puVar17 + ((long)(int)uVar12 * 4 - (long)local_70) + -1;
        puVar17 = local_70;
        do {
          puVar16 = puVar17 + 1;
          *(uint *)(lVar10 + (ulong)(*puVar17 * 0x1e35a7bd >> (ulong)(*(uint *)(plVar3 + 1) & 0x1f))
                             * 4) = *puVar17;
          puVar17 = puVar16;
        } while (puVar16 < puVar11);
        goto LAB_019a8ae4;
      }
    }
LAB_019a8af4:
    puVar17 = puVar11;
    if (param_1[0x16] != 0) goto LAB_019a8b30;
  }
  if (param_6 != (code *)0x0) {
    (*param_6)(param_1,uVar24);
  }
  if ((param_1[0x16] == 0) && ((puVar1 <= puVar17 || (param_1[0x15] == 0)))) {
    param_1[0x1b] = (int)((ulong)((long)puVar17 - param_2) >> 2);
    if (puVar17 == puVar1) {
      param_1[2] = 0;
    }
    return 1;
  }
LAB_019a8b30:
  uVar13 = 3;
  if (param_1[0x15] != 0) {
    uVar13 = 5;
  }
  *param_1 = uVar13;
  return 0;
}




void FUN_019a8b94(long param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined1 *puVar5;
  ulong uVar6;
  
  iVar3 = param_2 - *(int *)(param_1 + 0x68);
  if (0 < iVar3) {
    FUN_019a92ac(param_1,iVar3,
                 *(long *)(param_1 + 0x20) +
                 (long)(*(int *)(param_1 + 0x60) * *(int *)(param_1 + 0x68)) * 4);
    iVar1 = **(int **)(param_1 + 0x10);
    uVar2 = iVar1 * iVar3;
    if (0 < (int)uVar2) {
      uVar6 = (ulong)uVar2;
      puVar4 = *(undefined4 **)(param_1 + 0x28);
      puVar5 = (undefined1 *)
               (*(long *)(*(int **)(param_1 + 0x10) + 0xe) +
               (long)*(int *)(param_1 + 0x68) * (long)iVar1);
      do {
        uVar6 = uVar6 - 1;
        *puVar5 = (char)((uint)*puVar4 >> 8);
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      } while (uVar6 != 0);
    }
    *(int *)(param_1 + 0x70) = param_2;
    *(int *)(param_1 + 0x68) = param_2;
  }
  return;
}




undefined8 FUN_019a8c2c(undefined4 *param_1,undefined4 *param_2)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 auStack_44 [4];
  undefined4 local_40;
  undefined4 uStack_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (param_1 != (undefined4 *)0x0) {
    if (param_2 == (undefined4 *)0x0) {
      *param_1 = 2;
      uVar3 = 0;
      goto LAB_019a8cdc;
    }
    *(undefined4 **)(param_1 + 4) = param_2;
    *param_1 = 0;
    FUN_019b6ac0(param_1 + 0xc,*(undefined8 *)(param_2 + 0x1a),*(undefined8 *)(param_2 + 0x18));
    iVar2 = FUN_019a7194(param_1 + 0xc,&uStack_3c,&local_40,auStack_44);
    if (iVar2 == 0) {
      *param_1 = 3;
    }
    else {
      *param_2 = uStack_3c;
      param_2[1] = local_40;
      *(undefined8 *)(param_1 + 1) = 0x200000001;
      uVar3 = 1;
      iVar2 = FUN_019a74f0(uStack_3c,local_40,1,param_1,0);
      if (iVar2 != 0) goto LAB_019a8cdc;
    }
    FUN_019a726c(param_1);
  }
  uVar3 = 0;
LAB_019a8cdc:
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar3;
}




undefined8 FUN_019a8d08(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  long lVar5;
  undefined4 *puVar6;
  undefined8 *puVar7;
  
  if (param_1 == (undefined4 *)0x0) {
    return 0;
  }
  puVar6 = *(undefined4 **)(param_1 + 4);
  *param_1 = 3;
  puVar7 = *(undefined8 **)(puVar6 + 0xe);
  *(undefined8 *)(param_1 + 6) = *puVar7;
  iVar4 = FUN_019a2bc8(puVar7[5],puVar6,3);
  if (iVar4 == 0) {
    *param_1 = 2;
    goto LAB_019a8e34;
  }
  iVar4 = FUN_019a7e50(param_1,*puVar6);
  if (iVar4 == 0) goto LAB_019a8e34;
  if (puVar6[0x22] == 0) {
LAB_019a8dd0:
    if (**(int **)(param_1 + 6) - 7U < 4) goto LAB_019a8de4;
  }
  else {
    iVar4 = puVar6[0x23];
    uVar2 = puVar6[0x24];
    uVar1 = puVar6[3];
    uVar3 = puVar6[4];
    lVar5 = FUN_019a2d40((long)iVar4 * 0x24 + 0x68,1);
    if (lVar5 == 0) {
      *param_1 = 1;
      goto LAB_019a8e34;
    }
    *(long *)(param_1 + 0x4a) = lVar5;
    *(long *)(param_1 + 0x4c) = lVar5;
    FUN_019b76d0(lVar5,uVar1,uVar3,lVar5 + 0x68 + (long)iVar4 * 0x20,iVar4,uVar2,0,4,lVar5 + 0x68);
    if (puVar6[0x22] == 0) goto LAB_019a8dd0;
LAB_019a8de4:
    FUN_019a96ec();
  }
  param_1[1] = 0;
  iVar4 = FUN_019a836c(param_1,*(undefined8 *)(param_1 + 8),param_1[0x18],param_1[0x19],
                       param_1[0x19],FUN_019a8e60);
  if (iVar4 != 0) {
    *(undefined4 *)(puVar7 + 4) = param_1[0x1c];
    FUN_019a726c(param_1);
    return 1;
  }
LAB_019a8e34:
  FUN_019a726c(param_1);
  return 0;
}




void FUN_019a8e60(long param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  int *piVar9;
  long lVar10;
  long lVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  long lVar15;
  undefined8 uVar16;
  long lVar17;
  long local_68;
  
  iVar13 = param_2 - *(int *)(param_1 + 0x68);
  if (0 < iVar13) {
    FUN_019a92ac(param_1,iVar13,
                 *(long *)(param_1 + 0x20) +
                 (long)(*(int *)(param_1 + 0x60) * *(int *)(param_1 + 0x68)) * 4);
    piVar9 = *(int **)(param_1 + 0x10);
    iVar12 = *(int *)(param_1 + 0x68);
    lVar10 = *(long *)(param_1 + 0x28);
    iVar13 = piVar9[0x20];
    uVar1 = piVar9[0x21];
    uVar2 = uVar1;
    if ((int)param_2 <= (int)uVar1) {
      uVar2 = param_2;
    }
    iVar5 = *piVar9 << 2;
    if (iVar13 - iVar12 != 0 && iVar12 <= iVar13) {
      lVar10 = lVar10 + (long)(iVar13 - iVar12) * (long)iVar5;
      iVar12 = iVar13;
    }
    iVar6 = uVar2 - iVar12;
    if (iVar6 != 0 && iVar12 <= (int)uVar2) {
      iVar14 = piVar9[0x1e];
      piVar9[4] = iVar6;
      iVar7 = piVar9[0x1f] - iVar14;
      piVar9[2] = iVar12 - iVar13;
      piVar9[3] = iVar7;
      puVar8 = *(uint **)(param_1 + 0x18);
      local_68 = lVar10 + (long)iVar14 * 4;
      uVar2 = *puVar8;
      if (uVar2 < 0xb) {
        uVar4 = puVar8[6];
        lVar11 = (long)(int)uVar4;
        lVar10 = *(long *)(puVar8 + 4) + lVar11 * *(int *)(param_1 + 0x70);
        if (piVar9[0x22] == 0) {
          iVar13 = iVar6;
          if (0 < iVar6) {
            uVar4 = ~param_2;
            if ((int)uVar4 < (int)~uVar1) {
              uVar4 = ~uVar1;
            }
            iVar12 = -uVar4 - iVar12;
            do {
              FUN_019ae918(local_68,iVar7,uVar2,lVar10);
              iVar12 = iVar12 + -1;
              local_68 = local_68 + iVar5;
              lVar10 = lVar10 + lVar11;
            } while (1 < iVar12);
          }
        }
        else if (iVar6 < 1) {
          iVar13 = 0;
        }
        else {
          iVar12 = 0;
          iVar13 = 0;
          do {
            lVar15 = local_68 + (long)iVar12 * (long)iVar5;
            iVar7 = FUN_019b787c(*(undefined8 *)(param_1 + 0x130),iVar6 - iVar12);
            FUN_019a9604(lVar15,iVar5,*(undefined4 *)(*(long *)(param_1 + 0x130) + 0x2c),iVar7,0);
            FUN_019b789c(*(undefined8 *)(param_1 + 0x130),iVar6 - iVar12,lVar15,iVar5);
            lVar15 = *(long *)(param_1 + 0x130);
            iVar14 = 0;
            iVar12 = iVar7 + iVar12;
            if (*(int *)(lVar15 + 0x40) < *(int *)(lVar15 + 0x38)) {
              uVar16 = *(undefined8 *)(lVar15 + 0x48);
              uVar3 = *(undefined4 *)(lVar15 + 0x34);
              iVar14 = 0;
              lVar17 = lVar10 + (int)(iVar13 * uVar4);
              do {
                if (0 < *(int *)(lVar15 + 0x18)) break;
                FUN_019b7490(lVar15);
                (*DAT_0321a730)(uVar16,uVar3,1);
                FUN_019ae918(uVar16,uVar3,uVar2,lVar17);
                iVar14 = iVar14 + 1;
                lVar17 = lVar17 + lVar11;
              } while (*(int *)(lVar15 + 0x40) < *(int *)(lVar15 + 0x38));
            }
            iVar13 = iVar14 + iVar13;
          } while (iVar12 < iVar6);
        }
        *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + iVar13;
      }
      else {
        iVar13 = *(int *)(param_1 + 0x70);
        if (piVar9[0x22] == 0) {
          if (0 < iVar6) {
            FUN_019a934c(local_68,iVar7,iVar13);
            iVar13 = iVar13 + 1;
            if (iVar6 != 1) {
              uVar2 = ~param_2;
              if ((int)uVar2 < (int)~uVar1) {
                uVar2 = ~uVar1;
              }
              lVar10 = lVar10 + (long)iVar5 + (long)iVar14 * 4;
              iVar12 = -uVar2 - iVar12;
              do {
                FUN_019a934c(lVar10,iVar7,iVar13,*(undefined8 *)(param_1 + 0x18));
                iVar12 = iVar12 + -1;
                iVar13 = iVar13 + 1;
                lVar10 = lVar10 + iVar5;
              } while (2 < iVar12);
            }
          }
        }
        else if (0 < iVar6) {
          iVar12 = 0;
          do {
            iVar7 = FUN_019b787c(*(undefined8 *)(param_1 + 0x130),iVar6 - iVar12);
            FUN_019a9604(local_68,iVar5,*(undefined4 *)(*(long *)(param_1 + 0x130) + 0x2c),iVar7,0);
            FUN_019b789c(*(undefined8 *)(param_1 + 0x130),iVar6 - iVar12,local_68,iVar5);
            lVar10 = *(long *)(param_1 + 0x130);
            iVar14 = 0;
            iVar12 = iVar7 + iVar12;
            local_68 = local_68 + (long)iVar7 * (long)iVar5;
            if (*(int *)(lVar10 + 0x40) < *(int *)(lVar10 + 0x38)) {
              uVar16 = *(undefined8 *)(lVar10 + 0x48);
              uVar3 = *(undefined4 *)(lVar10 + 0x34);
              iVar14 = 0;
              do {
                if (0 < *(int *)(lVar10 + 0x18)) break;
                FUN_019b7490(lVar10);
                (*DAT_0321a730)(uVar16,uVar3,1);
                FUN_019a934c(uVar16,uVar3,iVar13 + iVar14,*(undefined8 *)(param_1 + 0x18));
                iVar14 = iVar14 + 1;
              } while (*(int *)(lVar10 + 0x40) < *(int *)(lVar10 + 0x38));
            }
            iVar13 = iVar14 + iVar13;
          } while (iVar12 < iVar6);
        }
        *(int *)(param_1 + 0x70) = iVar13;
      }
    }
    *(uint *)(param_1 + 0x68) = param_2;
  }
  return;
}

