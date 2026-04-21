// functions/00ee4 — 14 functions
#include "libGameKindred.h"




void FUN_00ee4010(long param_1,long param_2)

{
  long lVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  ulong uVar9;
  long lVar10;
  uint uVar11;
  ulong uVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  ushort *puVar19;
  ulong uVar20;
  code *pcVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  uint uVar25;
  short *psVar26;
  short *psVar27;
  int iVar28;
  int iVar29;
  long lVar30;
  int iVar31;
  short *psVar32;
  int iVar33;
  uint uVar34;
  long local_1c8;
  long local_110;
  int local_100;
  int local_fc;
  int local_f8;
  int local_f4;
  undefined1 auStack_f0 [2];
  short local_ee;
  short local_ec;
  short local_e0;
  short local_de;
  short local_d0;
  long local_70;
  
  lVar4 = tpidr_el0;
  local_70 = *(long *)(lVar4 + 0x28);
  iVar2 = *(int *)(param_1 + 0x1b0);
  lVar16 = *(long *)(param_1 + 0x250);
  do {
    if ((*(int *)(param_1 + 0xb4) < *(int *)(param_1 + 0xac)) ||
       (*(int *)((long)*(undefined8 **)(param_1 + 0x260) + 0x24) != 0)) {
LAB_00ee40ac:
      if (*(int *)(param_1 + 0x38) < 1) goto LAB_00ee466c;
      lVar30 = *(long *)(param_1 + 0x130);
      local_1c8 = 0;
      goto LAB_00ee40c8;
    }
    if (*(int *)(param_1 + 0xac) == *(int *)(param_1 + 0xb4)) {
      uVar34 = *(uint *)(param_1 + 0xb8);
      if (*(int *)(param_1 + 0x21c) == 0) {
        uVar34 = uVar34 + 1;
      }
      if (uVar34 < *(uint *)(param_1 + 0xb0)) goto LAB_00ee40ac;
    }
    uVar9 = (*(code *)**(undefined8 **)(param_1 + 0x260))(param_1);
  } while ((int)uVar9 != 0);
  goto LAB_00ee468c;
LAB_00ee40c8:
  do {
    if (*(int *)(lVar30 + 0x34) != 0) {
      uVar34 = *(uint *)(param_1 + 0xb8);
      if (uVar34 < iVar2 - 1U) {
        uVar13 = *(uint *)(lVar30 + 0xc);
        bVar6 = false;
        uVar11 = uVar13 << 1;
        uVar25 = uVar13;
        if (uVar34 == 0) goto LAB_00ee4158;
LAB_00ee40f4:
        lVar10 = (**(code **)(*(long *)(param_1 + 8) + 0x40))
                           (param_1,*(undefined8 *)(lVar16 + local_1c8 * 8 + 0x88),
                            uVar13 * (uVar34 - 1),uVar13 + uVar11,0);
        bVar5 = false;
        lVar10 = lVar10 + (long)*(int *)(lVar30 + 0xc) * 8;
      }
      else {
        uVar13 = *(uint *)(lVar30 + 0xc);
        uVar11 = 0;
        if (uVar13 != 0) {
          uVar11 = *(uint *)(lVar30 + 0x20) / uVar13;
        }
        uVar25 = *(uint *)(lVar30 + 0x20) - uVar11 * uVar13;
        uVar11 = uVar13;
        if (uVar25 != 0) {
          uVar11 = uVar25;
        }
        bVar6 = true;
        uVar25 = uVar11;
        if (uVar34 != 0) goto LAB_00ee40f4;
LAB_00ee4158:
        lVar10 = (**(code **)(*(long *)(param_1 + 8) + 0x40))
                           (param_1,*(undefined8 *)(lVar16 + local_1c8 * 8 + 0x88),0,uVar11,0);
        bVar5 = true;
      }
      if (0 < (int)uVar25) {
        puVar19 = *(ushort **)(lVar30 + 0x50);
        local_110 = *(long *)(param_2 + local_1c8 * 8);
        lVar1 = *(long *)(lVar16 + 0xd8) + (ulong)(uint)((int)local_1c8 * 6) * 4;
        uVar17 = (ulong)puVar19[1];
        uVar22 = (ulong)puVar19[8];
        uVar23 = (ulong)puVar19[0x10];
        uVar12 = (ulong)*puVar19;
        pcVar21 = *(code **)(*(long *)(param_1 + 0x278) + local_1c8 * 8 + 8);
        uVar24 = (ulong)puVar19[9];
        uVar20 = (ulong)puVar19[2];
        uVar9 = 0;
        do {
          psVar32 = *(short **)(lVar10 + uVar9 * 8);
          if ((!bVar5) || (psVar27 = psVar32, uVar9 != 0)) {
            psVar27 = *(short **)(lVar10 + uVar9 * 8 + -8);
          }
          if ((!bVar6) || (psVar26 = psVar32, uVar9 != uVar25 - 1)) {
            psVar26 = *(short **)(lVar10 + uVar9 * 8 + 8);
          }
          uVar34 = 0;
          iVar33 = 0;
          uVar13 = *(int *)(lVar30 + 0x1c) - 1;
          local_fc = (int)*psVar27;
          local_100 = (int)*psVar26;
          iVar29 = (int)*psVar32;
          iVar31 = (int)*psVar27;
          local_f8 = local_100;
          local_f4 = (int)*psVar32;
          do {
            iVar28 = iVar29;
            iVar8 = local_f8;
            iVar7 = local_fc;
            iVar15 = local_100;
            psVar27 = psVar27 + 0x40;
            psVar26 = psVar26 + 0x40;
            local_f8 = local_100;
            FUN_00ee12b4(psVar32,auStack_f0,1);
            iVar29 = iVar28;
            if (uVar34 < uVar13) {
              iVar29 = (int)psVar32[0x40];
              local_fc = (int)*psVar27;
              local_100 = (int)*psVar26;
            }
            uVar11 = *(uint *)(lVar1 + 4);
            if ((uVar11 != 0) && (local_ee == 0)) {
              lVar18 = uVar12 * 0x24 * (long)(local_f4 - iVar29);
              if (lVar18 < 0) {
                iVar14 = 0;
                if (uVar17 != 0) {
                  iVar14 = (int)((long)(uVar17 * 0x80 - lVar18) / (long)(uVar17 << 8));
                }
                if ((0 < (int)uVar11) && (iVar3 = 1 << (ulong)(uVar11 & 0x1f), iVar3 <= iVar14)) {
                  iVar14 = iVar3 + -1;
                }
                iVar14 = -iVar14;
              }
              else {
                iVar14 = 0;
                if (uVar17 != 0) {
                  iVar14 = (int)((long)(lVar18 + uVar17 * 0x80) / (long)(uVar17 << 8));
                }
                if ((0 < (int)uVar11) && (iVar3 = 1 << (ulong)(uVar11 & 0x1f), iVar3 <= iVar14)) {
                  iVar14 = iVar3 + -1;
                }
              }
              local_ee = (short)iVar14;
            }
            uVar11 = *(uint *)(lVar1 + 8);
            if ((uVar11 != 0) && (local_e0 == 0)) {
              lVar18 = uVar12 * 0x24 * (long)(iVar7 - iVar15);
              if (lVar18 < 0) {
                iVar14 = 0;
                if (uVar22 != 0) {
                  iVar14 = (int)((long)(uVar22 * 0x80 - lVar18) / (long)(uVar22 << 8));
                }
                if ((0 < (int)uVar11) && (iVar3 = 1 << (ulong)(uVar11 & 0x1f), iVar3 <= iVar14)) {
                  iVar14 = iVar3 + -1;
                }
                iVar14 = -iVar14;
              }
              else {
                iVar14 = 0;
                if (uVar22 != 0) {
                  iVar14 = (int)((long)(lVar18 + uVar22 * 0x80) / (long)(uVar22 << 8));
                }
                if ((0 < (int)uVar11) && (iVar3 = 1 << (ulong)(uVar11 & 0x1f), iVar3 <= iVar14)) {
                  iVar14 = iVar3 + -1;
                }
              }
              local_e0 = (short)iVar14;
            }
            uVar11 = *(uint *)(lVar1 + 0xc);
            if ((uVar11 != 0) && (local_d0 == 0)) {
              lVar18 = uVar12 * 9 * (long)(iVar7 + iVar28 * -2 + iVar15);
              if (lVar18 < 0) {
                iVar15 = 0;
                if (uVar23 != 0) {
                  iVar15 = (int)((long)(uVar23 * 0x80 - lVar18) / (long)(uVar23 << 8));
                }
                if ((0 < (int)uVar11) && (iVar14 = 1 << (ulong)(uVar11 & 0x1f), iVar14 <= iVar15)) {
                  iVar15 = iVar14 + -1;
                }
                iVar15 = -iVar15;
              }
              else {
                iVar15 = 0;
                if (uVar23 != 0) {
                  iVar15 = (int)((long)(lVar18 + uVar23 * 0x80) / (long)(uVar23 << 8));
                }
                if ((0 < (int)uVar11) && (iVar14 = 1 << (ulong)(uVar11 & 0x1f), iVar14 <= iVar15)) {
                  iVar15 = iVar14 + -1;
                }
              }
              local_d0 = (short)iVar15;
            }
            uVar11 = *(uint *)(lVar1 + 0x10);
            if ((uVar11 != 0) && (local_de == 0)) {
              lVar18 = uVar12 * 5 * (long)(((iVar31 - iVar8) - local_fc) + local_100);
              if (lVar18 < 0) {
                iVar31 = 0;
                if (uVar24 != 0) {
                  iVar31 = (int)((long)(uVar24 * 0x80 - lVar18) / (long)(uVar24 << 8));
                }
                if ((0 < (int)uVar11) && (iVar15 = 1 << (ulong)(uVar11 & 0x1f), iVar15 <= iVar31)) {
                  iVar31 = iVar15 + -1;
                }
                iVar31 = -iVar31;
              }
              else {
                iVar31 = 0;
                if (uVar24 != 0) {
                  iVar31 = (int)((long)(lVar18 + uVar24 * 0x80) / (long)(uVar24 << 8));
                }
                if ((0 < (int)uVar11) && (iVar15 = 1 << (ulong)(uVar11 & 0x1f), iVar15 <= iVar31)) {
                  iVar31 = iVar15 + -1;
                }
              }
              local_de = (short)iVar31;
            }
            uVar11 = *(uint *)(lVar1 + 0x14);
            if ((uVar11 != 0) && (local_ec == 0)) {
              lVar18 = uVar12 * 9 * (long)(local_f4 + iVar28 * -2 + iVar29);
              if (lVar18 < 0) {
                iVar31 = 0;
                if (uVar20 != 0) {
                  iVar31 = (int)((long)(uVar20 * 0x80 - lVar18) / (long)(uVar20 << 8));
                }
                if ((0 < (int)uVar11) && (iVar15 = 1 << (ulong)(uVar11 & 0x1f), iVar15 <= iVar31)) {
                  iVar31 = iVar15 + -1;
                }
                iVar31 = -iVar31;
              }
              else {
                iVar31 = 0;
                if (uVar20 != 0) {
                  iVar31 = (int)((long)(lVar18 + uVar20 * 0x80) / (long)(uVar20 << 8));
                }
                if ((0 < (int)uVar11) && (iVar15 = 1 << (ulong)(uVar11 & 0x1f), iVar15 <= iVar31)) {
                  iVar31 = iVar15 + -1;
                }
              }
              local_ec = (short)iVar31;
            }
            (*pcVar21)(param_1,lVar30,auStack_f0,local_110,iVar33);
            uVar34 = uVar34 + 1;
            psVar32 = psVar32 + 0x40;
            iVar33 = *(int *)(lVar30 + 0x24) + iVar33;
            iVar31 = iVar7;
            local_f4 = iVar28;
          } while (uVar34 <= uVar13);
          uVar9 = uVar9 + 1;
          local_110 = local_110 + (long)*(int *)(lVar30 + 0x28) * 8;
        } while (uVar9 != uVar25);
      }
    }
    lVar30 = lVar30 + 0x60;
    local_1c8 = local_1c8 + 1;
  } while (local_1c8 < *(int *)(param_1 + 0x38));
LAB_00ee466c:
  uVar34 = *(int *)(param_1 + 0xb8) + 1;
  *(uint *)(param_1 + 0xb8) = uVar34;
  uVar13 = 3;
  if (*(uint *)(param_1 + 0x1b0) <= uVar34) {
    uVar13 = 4;
  }
  uVar9 = (ulong)uVar13;
LAB_00ee468c:
  if (*(long *)(lVar4 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar9);
  }
  return;
}




void FUN_00ee46c0(long *param_1)

{
  long *plVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  code *pcVar6;
  long lVar7;
  undefined4 *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  
  puVar3 = (undefined8 *)(**(code **)param_1[1])(param_1,1,0x38);
  param_1[0x51] = (long)puVar3;
  *puVar3 = FUN_00ee4a08;
  iVar2 = *(int *)((long)param_1 + 0x3c);
  if (iVar2 - 2U < 2) {
    if ((int)param_1[7] != 3) goto LAB_00ee4730;
  }
  else if (iVar2 - 4U < 2) {
    if ((int)param_1[7] != 4) goto LAB_00ee4730;
  }
  else if (iVar2 == 1) {
    if ((int)param_1[7] != 1) {
LAB_00ee4730:
      puVar5 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar5 + 5) = 0xb;
      (*(code *)*puVar5)(param_1);
    }
  }
  else if ((int)param_1[7] < 1) goto LAB_00ee4730;
  if ((*(int *)((long)param_1 + 0x18c) != 0) && (*(int *)((long)param_1 + 0x3c) != 2)) {
    puVar5 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar5 + 5) = 0x1c;
    (*(code *)*puVar5)(param_1);
  }
  iVar2 = (int)param_1[8];
  if (iVar2 == 4) {
    *(undefined4 *)(param_1 + 0x12) = 4;
    if (*(int *)((long)param_1 + 0x3c) != 4) {
      if (*(int *)((long)param_1 + 0x3c) == 5) {
        pcVar6 = FUN_00ee4e68;
LAB_00ee4858:
        puVar3[1] = pcVar6;
        FUN_00ee4c08(param_1);
        goto LAB_00ee49e4;
      }
      goto LAB_00ee48ec;
    }
    pcVar6 = FUN_00ee4f34;
  }
  else {
    if (iVar2 != 2) {
      if (iVar2 != 1) {
        if (iVar2 == *(int *)((long)param_1 + 0x3c)) {
          *(int *)(param_1 + 0x12) = (int)param_1[7];
          puVar3[1] = FUN_00ee4f34;
          goto LAB_00ee49e4;
        }
        goto LAB_00ee48ec;
      }
      iVar2 = *(int *)((long)param_1 + 0x3c);
      *(undefined4 *)(param_1 + 0x12) = 1;
      if (iVar2 != 3) {
        if (iVar2 == 2) {
          if (*(int *)((long)param_1 + 0x18c) == 1) {
            pcVar6 = FUN_00ee4ab4;
LAB_00ee4910:
            puVar3[1] = pcVar6;
          }
          else {
            if (*(int *)((long)param_1 + 0x18c) == 0) {
              pcVar6 = FUN_00ee4a28;
              goto LAB_00ee4910;
            }
            puVar3 = (undefined8 *)*param_1;
            *(undefined4 *)(puVar3 + 5) = 0x1c;
            (*(code *)*puVar3)(param_1);
          }
          lVar11 = param_1[0x51];
          lVar9 = (**(code **)param_1[1])(param_1,1,0x1800);
          lVar13 = 1;
          lVar12 = 0;
          lVar7 = 0;
          *(long *)(lVar11 + 0x30) = lVar9;
          do {
            plVar1 = (long *)(lVar9 + lVar7);
            plVar1[1] = lVar13 * 0x4c8b;
            *plVar1 = lVar12 * 0x4c8b;
            lVar10 = lVar12 * 0x1d2f;
            lVar11 = lVar13 * 0x1d2f;
            plVar1[0x101] = lVar13 * 0x9646;
            plVar1[0x100] = lVar12 * 0x9646;
            lVar7 = lVar7 + 0x10;
            lVar12 = lVar12 + 2;
            lVar13 = lVar13 + 2;
            plVar1[0x201] = lVar11 + 0x8000;
            plVar1[0x200] = lVar10 + 0x8000;
          } while (lVar7 != 0x800);
          goto LAB_00ee49e4;
        }
        if (iVar2 != 1) goto LAB_00ee48ec;
      }
      puVar3[1] = FUN_00ee4a0c;
      lVar7 = param_1[7];
      if (1 < (int)lVar7) {
        lVar9 = 1;
        puVar8 = (undefined4 *)(param_1[0x26] + 0x94);
        do {
          lVar9 = lVar9 + 1;
          *puVar8 = 0;
          puVar8 = puVar8 + 0x18;
        } while (lVar9 < (int)lVar7);
      }
      goto LAB_00ee49e4;
    }
    iVar2 = *(int *)((long)param_1 + 0x3c);
    *(undefined4 *)(param_1 + 0x12) = 3;
    if (iVar2 == 1) {
      pcVar6 = FUN_00ee4d0c;
    }
    else {
      if (iVar2 != 2) {
        if (iVar2 == 3) {
          pcVar6 = FUN_00ee4b4c;
          goto LAB_00ee4858;
        }
LAB_00ee48ec:
        puVar3 = (undefined8 *)*param_1;
        *(undefined4 *)(puVar3 + 5) = 0x1c;
        (*(code *)*puVar3)(param_1);
        goto LAB_00ee49e4;
      }
      if (*(int *)((long)param_1 + 0x18c) == 1) {
        pcVar6 = FUN_00ee4de4;
      }
      else {
        if (*(int *)((long)param_1 + 0x18c) != 0) goto LAB_00ee48ec;
        pcVar6 = FUN_00ee4d70;
      }
    }
  }
  puVar3[1] = pcVar6;
LAB_00ee49e4:
  if (*(int *)((long)param_1 + 0x6c) == 0) {
    uVar4 = (undefined4)param_1[0x12];
  }
  else {
    uVar4 = 1;
  }
  *(undefined4 *)((long)param_1 + 0x94) = uVar4;
  return;
}




void FUN_00ee4a08(void)

{
  return;
}




void FUN_00ee4a0c(long param_1,undefined8 *param_2,undefined4 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  FUN_00ee1260(*param_2,param_3,param_4,0,param_5,*(undefined4 *)(param_1 + 0x88));
  return;
}




void FUN_00ee4a28(long param_1,long *param_2,uint param_3,undefined8 *param_4,int param_5)

{
  bool bVar1;
  uint uVar2;
  long lVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  undefined1 *puVar7;
  ulong uVar8;
  
  if (0 < param_5) {
    uVar2 = *(uint *)(param_1 + 0x88);
    lVar3 = *(long *)(*(long *)(param_1 + 0x288) + 0x30);
    do {
      pbVar4 = *(byte **)(*param_2 + (ulong)param_3 * 8);
      pbVar5 = *(byte **)(param_2[1] + (ulong)param_3 * 8);
      pbVar6 = *(byte **)(param_2[2] + (ulong)param_3 * 8);
      puVar7 = (undefined1 *)*param_4;
      param_3 = param_3 + 1;
      uVar8 = (ulong)uVar2;
      if (uVar2 != 0) {
        do {
          uVar8 = uVar8 - 1;
          *puVar7 = (char)((uint)(*(int *)(lVar3 + ((ulong)*pbVar5 << 3 | 0x800)) +
                                  (int)*(undefined8 *)(lVar3 + (ulong)*pbVar4 * 8) +
                                 *(int *)(lVar3 + ((ulong)*pbVar6 << 3 | 0x1000))) >> 0x10);
          pbVar4 = pbVar4 + 1;
          pbVar5 = pbVar5 + 1;
          pbVar6 = pbVar6 + 1;
          puVar7 = puVar7 + 1;
        } while (uVar8 != 0);
      }
      bVar1 = 1 < param_5;
      param_4 = param_4 + 1;
      param_5 = param_5 + -1;
    } while (bVar1);
  }
  return;
}




void FUN_00ee4ab4(long param_1,long *param_2,uint param_3,undefined8 *param_4,int param_5)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  undefined1 *puVar8;
  ulong uVar9;
  
  if (0 < param_5) {
    uVar3 = *(uint *)(param_1 + 0x88);
    lVar4 = *(long *)(*(long *)(param_1 + 0x288) + 0x30);
    do {
      pbVar5 = *(byte **)(*param_2 + (ulong)param_3 * 8);
      pbVar6 = *(byte **)(param_2[1] + (ulong)param_3 * 8);
      pbVar7 = *(byte **)(param_2[2] + (ulong)param_3 * 8);
      puVar8 = (undefined1 *)*param_4;
      param_3 = param_3 + 1;
      uVar9 = (ulong)uVar3;
      if (uVar3 != 0) {
        do {
          uVar9 = uVar9 - 1;
          iVar2 = *pbVar6 + 0x80;
          *puVar8 = (char)((uint)((int)*(undefined8 *)(lVar4 + (ulong)(*pbVar6 | 0x100) * 8) +
                                  (int)*(undefined8 *)
                                        (lVar4 + (ulong)(iVar2 + (uint)*pbVar5 & 0xff) * 8) +
                                 (int)*(undefined8 *)
                                       (lVar4 + (ulong)(iVar2 + (uint)*pbVar7 & 0xff | 0x200) * 8))
                          >> 0x10);
          pbVar5 = pbVar5 + 1;
          pbVar6 = pbVar6 + 1;
          pbVar7 = pbVar7 + 1;
          puVar8 = puVar8 + 1;
        } while (uVar9 != 0);
      }
      bVar1 = 1 < param_5;
      param_4 = param_4 + 1;
      param_5 = param_5 + -1;
    } while (bVar1);
  }
  return;
}




void FUN_00ee4b4c(long param_1,long *param_2,uint param_3,undefined8 *param_4,int param_5)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  byte bVar6;
  byte bVar7;
  byte *pbVar8;
  undefined1 *puVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  byte *pbVar14;
  byte *pbVar15;
  
  if (0 < param_5) {
    lVar13 = *(long *)(param_1 + 0x288);
    uVar5 = *(uint *)(param_1 + 0x88);
    lVar12 = *(long *)(param_1 + 0x1b8);
    lVar2 = *(long *)(lVar13 + 0x10);
    lVar4 = *(long *)(lVar13 + 0x18);
    lVar3 = *(long *)(lVar13 + 0x20);
    lVar13 = *(long *)(lVar13 + 0x28);
    do {
      if (uVar5 != 0) {
        puVar9 = (undefined1 *)*param_4;
        pbVar8 = *(byte **)(param_2[2] + (ulong)param_3 * 8);
        uVar10 = (ulong)uVar5;
        pbVar14 = *(byte **)(*param_2 + (ulong)param_3 * 8);
        pbVar15 = *(byte **)(param_2[1] + (ulong)param_3 * 8);
        do {
          uVar11 = (ulong)*pbVar14;
          bVar6 = *pbVar8;
          uVar10 = uVar10 - 1;
          bVar7 = *pbVar15;
          *puVar9 = *(undefined1 *)(lVar12 + (long)*(int *)(lVar2 + (ulong)bVar6 * 4) + uVar11);
          puVar9[1] = *(undefined1 *)
                       (lVar12 + uVar11 + (long)(int)((ulong)(*(long *)(lVar3 + (ulong)bVar6 * 8) +
                                                             *(long *)(lVar13 + (ulong)bVar7 * 8))
                                                     >> 0x10));
          puVar9[2] = *(undefined1 *)(lVar12 + (long)*(int *)(lVar4 + (ulong)bVar7 * 4) + uVar11);
          puVar9 = puVar9 + 3;
          pbVar8 = pbVar8 + 1;
          pbVar14 = pbVar14 + 1;
          pbVar15 = pbVar15 + 1;
        } while (uVar10 != 0);
      }
      bVar1 = 1 < param_5;
      param_4 = param_4 + 1;
      param_5 = param_5 + -1;
      param_3 = param_3 + 1;
    } while (bVar1);
  }
  return;
}




void FUN_00ee4c08(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
  lVar11 = *(long *)(param_1 + 0x288);
  uVar3 = (*(code *)**(undefined8 **)(param_1 + 8))(param_1,1,0x400);
  *(undefined8 *)(lVar11 + 0x10) = uVar3;
  uVar3 = (*(code *)**(undefined8 **)(param_1 + 8))(param_1,1,0x400);
  *(undefined8 *)(lVar11 + 0x18) = uVar3;
  uVar3 = (*(code *)**(undefined8 **)(param_1 + 8))(param_1,1,0x800);
  *(undefined8 *)(lVar11 + 0x20) = uVar3;
  lVar4 = (*(code *)**(undefined8 **)(param_1 + 8))(param_1,1,0x800);
  lVar1 = *(long *)(lVar11 + 0x10);
  lVar2 = *(long *)(lVar11 + 0x18);
  lVar6 = *(long *)(lVar11 + 0x20);
  lVar5 = 0;
  lVar7 = -0xb2f480;
  lVar8 = -0xe25100;
  lVar9 = 0x5b6900;
  lVar10 = 0x2c8d00;
  *(long *)(lVar11 + 0x28) = lVar4;
  do {
    *(int *)(lVar1 + lVar5 * 4) = (int)((ulong)lVar7 >> 0x10);
    *(int *)(lVar2 + lVar5 * 4) = (int)((ulong)lVar8 >> 0x10);
    *(long *)(lVar6 + lVar5 * 8) = lVar9;
    *(long *)(lVar4 + lVar5 * 8) = lVar10;
    lVar5 = lVar5 + 1;
    lVar7 = lVar7 + 0x166e9;
    lVar8 = lVar8 + 0x1c5a2;
    lVar9 = lVar9 + -0xb6d2;
    lVar10 = lVar10 + -0x581a;
  } while (lVar5 != 0x100);
  return;
}




void FUN_00ee4d0c(long param_1,long *param_2,uint param_3,long *param_4,int param_5)

{
  bool bVar1;
  uint uVar2;
  undefined1 uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  ulong uVar6;
  
  if (0 < param_5) {
    uVar2 = *(uint *)(param_1 + 0x88);
    do {
      if (uVar2 != 0) {
        puVar5 = (undefined1 *)(*param_4 + 2);
        puVar4 = *(undefined1 **)(*param_2 + (ulong)param_3 * 8);
        uVar6 = (ulong)uVar2;
        do {
          uVar3 = *puVar4;
          uVar6 = uVar6 - 1;
          *puVar5 = uVar3;
          puVar5[-1] = uVar3;
          puVar5[-2] = uVar3;
          puVar5 = puVar5 + 3;
          puVar4 = puVar4 + 1;
        } while (uVar6 != 0);
      }
      bVar1 = 1 < param_5;
      param_4 = param_4 + 1;
      param_5 = param_5 + -1;
      param_3 = param_3 + 1;
    } while (bVar1);
  }
  return;
}




void FUN_00ee4d70(long param_1,long *param_2,uint param_3,undefined8 *param_4,int param_5)

{
  bool bVar1;
  uint uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  ulong uVar7;
  
  if (0 < param_5) {
    uVar2 = *(uint *)(param_1 + 0x88);
    do {
      if (uVar2 != 0) {
        puVar6 = (undefined1 *)*param_4;
        puVar3 = *(undefined1 **)(*param_2 + (ulong)param_3 * 8);
        puVar4 = *(undefined1 **)(param_2[1] + (ulong)param_3 * 8);
        puVar5 = *(undefined1 **)(param_2[2] + (ulong)param_3 * 8);
        uVar7 = (ulong)uVar2;
        do {
          uVar7 = uVar7 - 1;
          *puVar6 = *puVar3;
          puVar6[1] = *puVar4;
          puVar6[2] = *puVar5;
          puVar6 = puVar6 + 3;
          puVar3 = puVar3 + 1;
          puVar4 = puVar4 + 1;
          puVar5 = puVar5 + 1;
        } while (uVar7 != 0);
      }
      bVar1 = 1 < param_5;
      param_4 = param_4 + 1;
      param_5 = param_5 + -1;
      param_3 = param_3 + 1;
    } while (bVar1);
  }
  return;
}




void FUN_00ee4de4(long param_1,long *param_2,uint param_3,undefined8 *param_4,int param_5)

{
  bool bVar1;
  uint uVar2;
  char cVar3;
  byte bVar4;
  char cVar5;
  char *pcVar6;
  byte *pbVar7;
  char *pcVar8;
  byte *pbVar9;
  ulong uVar10;
  
  if (0 < param_5) {
    uVar2 = *(uint *)(param_1 + 0x88);
    do {
      if (uVar2 != 0) {
        pbVar9 = (byte *)*param_4;
        pcVar6 = *(char **)(*param_2 + (ulong)param_3 * 8);
        pbVar7 = *(byte **)(param_2[1] + (ulong)param_3 * 8);
        pcVar8 = *(char **)(param_2[2] + (ulong)param_3 * 8);
        uVar10 = (ulong)uVar2;
        do {
          cVar3 = *pcVar6;
          bVar4 = *pbVar7;
          cVar5 = *pcVar8;
          uVar10 = uVar10 - 1;
          pbVar9[1] = bVar4;
          *pbVar9 = bVar4 + cVar3 ^ 0x80;
          pbVar9[2] = cVar5 + bVar4 ^ 0x80;
          pbVar9 = pbVar9 + 3;
          pcVar6 = pcVar6 + 1;
          pbVar7 = pbVar7 + 1;
          pcVar8 = pcVar8 + 1;
        } while (uVar10 != 0);
      }
      bVar1 = 1 < param_5;
      param_4 = param_4 + 1;
      param_5 = param_5 + -1;
      param_3 = param_3 + 1;
    } while (bVar1);
  }
  return;
}




void FUN_00ee4e68(long param_1,long *param_2,uint param_3,undefined8 *param_4,int param_5)

{
  bool bVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  byte bVar7;
  byte bVar8;
  byte *pbVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  byte *pbVar15;
  byte *pbVar16;
  
  if (0 < param_5) {
    lVar14 = *(long *)(param_1 + 0x288);
    uVar6 = *(uint *)(param_1 + 0x88);
    lVar13 = *(long *)(param_1 + 0x1b8);
    lVar3 = *(long *)(lVar14 + 0x10);
    lVar5 = *(long *)(lVar14 + 0x18);
    lVar4 = *(long *)(lVar14 + 0x20);
    lVar14 = *(long *)(lVar14 + 0x28);
    do {
      if (uVar6 != 0) {
        puVar11 = (undefined1 *)*param_4;
        pbVar9 = *(byte **)(param_2[2] + (ulong)param_3 * 8);
        puVar10 = *(undefined1 **)(param_2[3] + (ulong)param_3 * 8);
        uVar12 = (ulong)uVar6;
        pbVar15 = *(byte **)(*param_2 + (ulong)param_3 * 8);
        pbVar16 = *(byte **)(param_2[1] + (ulong)param_3 * 8);
        do {
          bVar7 = *pbVar9;
          uVar12 = uVar12 - 1;
          uVar2 = *pbVar15 ^ 0xff;
          bVar8 = *pbVar16;
          *puVar11 = *(undefined1 *)(lVar13 + (int)(uVar2 - *(int *)(lVar3 + (ulong)bVar7 * 4)));
          puVar11[1] = *(undefined1 *)
                        (lVar13 + (int)(uVar2 - (int)((ulong)(*(long *)(lVar4 + (ulong)bVar7 * 8) +
                                                             *(long *)(lVar14 + (ulong)bVar8 * 8))
                                                     >> 0x10)));
          puVar11[2] = *(undefined1 *)(lVar13 + (int)(uVar2 - *(int *)(lVar5 + (ulong)bVar8 * 4)));
          puVar11[3] = *puVar10;
          puVar11 = puVar11 + 4;
          pbVar9 = pbVar9 + 1;
          puVar10 = puVar10 + 1;
          pbVar15 = pbVar15 + 1;
          pbVar16 = pbVar16 + 1;
        } while (uVar12 != 0);
      }
      bVar1 = 1 < param_5;
      param_4 = param_4 + 1;
      param_5 = param_5 + -1;
      param_3 = param_3 + 1;
    } while (bVar1);
  }
  return;
}




void FUN_00ee4f34(long param_1,long param_2,uint param_3,long *param_4,int param_5)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  undefined1 *puVar7;
  
  if (0 < param_5) {
    uVar3 = *(uint *)(param_1 + 0x38);
    iVar2 = *(int *)(param_1 + 0x88);
    do {
      if (0 < (int)uVar3) {
        uVar5 = 0;
        do {
          if (iVar2 != 0) {
            lVar6 = *param_4;
            puVar7 = *(undefined1 **)(*(long *)(param_2 + uVar5 * 8) + (ulong)param_3 * 8);
            iVar4 = iVar2;
            do {
              iVar4 = iVar4 + -1;
              *(undefined1 *)(lVar6 + uVar5) = *puVar7;
              lVar6 = lVar6 + (int)uVar3;
              puVar7 = puVar7 + 1;
            } while (iVar4 != 0);
          }
          uVar5 = uVar5 + 1;
        } while (uVar5 != uVar3);
      }
      param_3 = param_3 + 1;
      param_4 = param_4 + 1;
      bVar1 = 1 < param_5;
      param_5 = param_5 + -1;
    } while (bVar1);
  }
  return;
}




void FUN_00ee4fa8(long param_1)

{
  undefined8 *puVar1;
  void *__s;
  long lVar2;
  undefined8 *puVar3;
  
  puVar1 = (undefined8 *)(*(code *)**(undefined8 **)(param_1 + 8))(param_1,1,0x80);
  *(undefined8 **)(param_1 + 0x278) = puVar1;
  *puVar1 = FUN_00ee5054;
  if (0 < *(int *)(param_1 + 0x38)) {
    lVar2 = 0;
    puVar3 = (undefined8 *)(*(long *)(param_1 + 0x130) + 0x58);
    do {
      __s = (void *)(*(code *)**(undefined8 **)(param_1 + 8))(param_1,1,0x100);
      *puVar3 = __s;
      memset(__s,0,0x100);
      *(undefined4 *)((long)puVar1 + lVar2 * 4 + 0x58) = 0xffffffff;
      lVar2 = lVar2 + 1;
      puVar3 = puVar3 + 0xc;
    } while (lVar2 < *(int *)(param_1 + 0x38));
  }
  return;
}

