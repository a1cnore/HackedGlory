// functions/00ef6 — 6 functions
#include "libGameKindred.h"




void FUN_00ef642c(void)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *in_x7;
  long lVar4;
  undefined8 local_48;
  float local_40;
  undefined8 local_38;
  float local_30;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  iVar2 = FUN_00ef4d34();
  if (iVar2 < 0) {
    uVar3 = 0x80000008;
  }
  else {
    uVar3 = 0x40000000;
    *in_x7 = CONCAT44(((float)((ulong)local_38 >> 0x20) + (float)((ulong)local_48 >> 0x20)) * 0.5,
                      ((float)local_38 + (float)local_48) * 0.5);
    *(float *)(in_x7 + 1) = (local_30 + local_40) * 0.5;
  }
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}




undefined4
FUN_00ef64c4(undefined8 *param_1,float param_2,float param_3,float *param_4,float *param_5,
            undefined8 param_6)

{
  int iVar1;
  ulong uVar2;
  float *pfVar3;
  long lVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  float fVar7;
  
  puVar6 = param_1 + 1;
  param_1[2] = 0;
  *puVar6 = 0;
  param_1[7] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  *(undefined4 *)puVar6 = 0x80000000;
  *(float *)((long)param_1 + 0x1c) = param_2;
  *(float *)(param_1 + 4) = param_3;
  *(float *)((long)param_1 + 0x24) = *param_4;
  *(float *)(param_1 + 5) = param_4[1];
  uVar5 = 0x80000008;
  *(float *)((long)param_1 + 0x2c) = param_4[2];
  *(float *)(param_1 + 6) = *param_5;
  *(float *)((long)param_1 + 0x34) = param_5[1];
  fVar7 = param_5[2];
  param_1[8] = param_6;
  *(float *)(param_1 + 7) = fVar7;
  if ((((param_2 != 0.0) && (param_3 != 0.0)) &&
      (uVar2 = FUN_00ef34e0(*param_1,param_2), (uVar2 & 1) != 0)) &&
     (uVar2 = FUN_00ef34e0(*param_1,param_3), uVar5 = 0x80000008, (uVar2 & 1) != 0)) {
    if (param_2 == param_3) {
      uVar5 = 0x40000000;
      *(undefined4 *)puVar6 = 0x40000000;
    }
    else {
      FUN_00efa084(param_1[10]);
      *(undefined4 *)(param_1[0xb] + 0xc) = 0;
      pfVar3 = (float *)FUN_00efa13c(param_1[10],param_2);
      *pfVar3 = *param_4;
      pfVar3[1] = param_4[1];
      fVar7 = param_4[2];
      pfVar3[5] = (float)((uint)pfVar3[5] & 0xc0000000);
      pfVar3[2] = fVar7;
      pfVar3[3] = 0.0;
      fVar7 = (float)FUN_00efa36c((*param_5 - *param_4) * (*param_5 - *param_4) +
                                  (param_5[1] - param_4[1]) * (param_5[1] - param_4[1]) +
                                  (param_5[2] - param_4[2]) * (param_5[2] - param_4[2]));
      pfVar3[4] = fVar7 * 0.999;
      pfVar3[5] = (float)((uint)pfVar3[5] & 0x3fffffff | 0x40000000);
      pfVar3[6] = param_2;
      lVar4 = param_1[0xb];
      iVar1 = *(int *)(lVar4 + 0xc);
      *(int *)(lVar4 + 0xc) = iVar1 + 1;
      FUN_00efa24c(lVar4,iVar1,pfVar3);
      uVar5 = 0x20000000;
      *(undefined4 *)(param_1 + 1) = 0x20000000;
      param_1[2] = pfVar3;
      *(float *)(param_1 + 3) = pfVar3[4];
    }
  }
  return uVar5;
}




uint FUN_00ef6668(undefined8 *param_1,int param_2,int *param_3)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  long lVar4;
  bool bVar5;
  uint *puVar6;
  int iVar7;
  ulong uVar8;
  long *plVar9;
  float *pfVar10;
  long lVar11;
  uint uVar12;
  float *pfVar13;
  long lVar14;
  float fVar15;
  uint uVar16;
  int iVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  long local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  uint *local_98;
  long local_90;
  long local_88;
  
  lVar4 = tpidr_el0;
  local_88 = *(long *)(lVar4 + 0x28);
  uVar16 = *(uint *)(param_1 + 1);
  if ((uVar16 >> 0x1d & 1) != 0) {
    uVar8 = FUN_00ef34e0(*param_1,*(undefined4 *)((long)param_1 + 0x1c));
    if (((uVar8 & 1) == 0) ||
       (uVar8 = FUN_00ef34e0(*param_1,*(undefined4 *)(param_1 + 4)), (uVar8 & 1) == 0)) {
      uVar16 = 0x80000000;
      *(undefined4 *)(param_1 + 1) = 0x80000000;
    }
    else {
      iVar17 = 0;
      do {
        plVar9 = (long *)param_1[0xb];
        iVar7 = *(int *)((long)plVar9 + 0xc);
        if (param_2 <= iVar17) {
          if (iVar7 == 0) goto LAB_00ef6ac0;
LAB_00ef6ac8:
          if (param_3 != (int *)0x0) {
LAB_00ef6af0:
            *param_3 = iVar17;
          }
          uVar16 = *(uint *)(param_1 + 1);
          break;
        }
        if (iVar7 == 0) {
LAB_00ef6ac0:
          *(undefined1 *)((long)param_1 + 0xb) = 0x40;
          goto LAB_00ef6ac8;
        }
        iVar17 = iVar17 + 1;
        pfVar13 = *(float **)*plVar9;
        *(int *)((long)plVar9 + 0xc) = iVar7 + -1;
        FUN_00efa2a0(plVar9,0,((long *)*plVar9)[iVar7 + -1]);
        fVar2 = pfVar13[6];
        pfVar13[5] = (float)((uint)pfVar13[5] & 0x3fffffff | 0x80000000);
        if (fVar2 == *(float *)(param_1 + 4)) {
          param_1[2] = pfVar13;
          uVar16 = *(uint *)(param_1 + 1) & 0xffffff | 0x40000000;
LAB_00ef6ae8:
          *(uint *)(param_1 + 1) = uVar16;
          if (param_3 != (int *)0x0) goto LAB_00ef6af0;
          break;
        }
        local_98 = (uint *)0x0;
        local_90 = 0;
        iVar7 = FUN_00ef33d4(*param_1,fVar2,&local_90,&local_98);
        if (iVar7 < 0) {
          uVar16 = 0x80000000;
          goto LAB_00ef6ae8;
        }
        local_a8 = 0;
        uStack_a0 = 0;
        if (((uint)pfVar13[5] & 0x3fffffff) == 0) {
          fVar15 = 0.0;
LAB_00ef67c0:
          uVar12 = *local_98;
          if (uVar12 != 0xffffffff) {
            lVar11 = *(long *)(local_90 + 0x20);
            do {
              fVar3 = *(float *)(lVar11 + (ulong)uVar12 * 0xc);
              if ((fVar3 != 0.0) && (fVar3 != fVar15)) {
                local_b8 = 0;
                uStack_b0 = 0;
                FUN_00ef3494(*param_1,fVar3,&uStack_b0,&local_b8);
                if (((*(ushort *)(param_1[8] + 0x100) & *(ushort *)(local_b8 + 0x1c)) != 0) &&
                   ((*(ushort *)(param_1[8] + 0x102) & *(ushort *)(local_b8 + 0x1c)) == 0)) {
                  pfVar10 = (float *)FUN_00efa13c(param_1[10],fVar3);
                  if (pfVar10 == (float *)0x0) {
                    *(uint *)(param_1 + 1) = *(uint *)(param_1 + 1) | 0x20;
                  }
                  else {
                    if ((uint)pfVar10[5] >> 0x1e == 0) {
                      FUN_00ef642c(pfVar10,fVar2,local_98,local_90,fVar3,local_b8,uStack_b0,pfVar10)
                      ;
                    }
                    puVar6 = local_98;
                    fVar21 = *(float *)(param_1 + 4);
                    lVar14 = param_1[8];
                    fVar18 = (float)FUN_00efa36c((*pfVar10 - *pfVar13) * (*pfVar10 - *pfVar13) +
                                                 (pfVar10[1] - pfVar13[1]) *
                                                 (pfVar10[1] - pfVar13[1]) +
                                                 (pfVar10[2] - pfVar13[2]) *
                                                 (pfVar10[2] - pfVar13[2]));
                    lVar11 = local_b8;
                    fVar18 = fVar18 * *(float *)(lVar14 + ((ulong)*(byte *)((long)puVar6 + 0x1f) &
                                                          0x3f) * 4);
                    if (fVar3 == fVar21) {
                      lVar14 = param_1[8];
                      fVar21 = *(float *)((long)param_1 + 0x34) - pfVar10[1];
                      fVar19 = (float)FUN_00efa36c((*(float *)(param_1 + 6) - *pfVar10) *
                                                   (*(float *)(param_1 + 6) - *pfVar10) +
                                                   fVar21 * fVar21 +
                                                   (*(float *)(param_1 + 7) - pfVar10[2]) *
                                                   (*(float *)(param_1 + 7) - pfVar10[2]));
                      fVar21 = 0.0;
                      fVar18 = fVar19 * *(float *)(lVar14 + ((ulong)*(byte *)(lVar11 + 0x1f) & 0x3f)
                                                            * 4) + fVar18 + pfVar13[3];
                    }
                    else {
                      fVar18 = fVar18 + pfVar13[3];
                      fVar21 = *(float *)((long)param_1 + 0x34) - pfVar10[1];
                      fVar21 = (float)FUN_00efa36c((*(float *)(param_1 + 6) - *pfVar10) *
                                                   (*(float *)(param_1 + 6) - *pfVar10) +
                                                   fVar21 * fVar21 +
                                                   (*(float *)(param_1 + 7) - pfVar10[2]) *
                                                   (*(float *)(param_1 + 7) - pfVar10[2]));
                      fVar21 = fVar21 * 0.999;
                    }
                    fVar19 = pfVar10[5];
                    fVar20 = fVar18 + fVar21;
                    if (((((uint)fVar19 >> 0x1e & 1) == 0) || (fVar20 < pfVar10[4])) &&
                       ((-1 < (int)fVar19 || (fVar20 < pfVar10[4])))) {
                      iVar7 = *(int *)param_1[10];
                      pfVar10[3] = fVar18;
                      pfVar10[4] = fVar20;
                      uVar1 = ((uint)((int)pfVar13 - iVar7) >> 2) * -0x49249249 + 1 & 0x3fffffff;
                      pfVar10[5] = (float)(uVar1 | (uint)fVar19 & 0x40000000);
                      pfVar10[6] = fVar3;
                      if (((uint)fVar19 & 0x40000000) == 0) {
                        pfVar10[5] = (float)(uVar1 | 0x40000000);
                        plVar9 = (long *)param_1[0xb];
                        uVar8 = (ulong)*(uint *)((long)plVar9 + 0xc);
                        *(uint *)((long)plVar9 + 0xc) = *(uint *)((long)plVar9 + 0xc) + 1;
LAB_00ef69d0:
                        FUN_00efa24c(plVar9,uVar8,pfVar10);
                      }
                      else {
                        plVar9 = (long *)param_1[0xb];
                        if (0 < *(int *)((long)plVar9 + 0xc)) {
                          uVar8 = 0;
                          do {
                            if (*(float **)(*plVar9 + uVar8 * 8) == pfVar10) goto LAB_00ef69d0;
                            uVar8 = uVar8 + 1;
                          } while ((long)uVar8 < (long)*(int *)((long)plVar9 + 0xc));
                        }
                      }
                      if (fVar21 < *(float *)(param_1 + 3)) {
                        *(float *)(param_1 + 3) = fVar21;
                        param_1[2] = pfVar10;
                      }
                    }
                  }
                }
                lVar11 = *(long *)(local_90 + 0x20);
              }
              uVar12 = *(uint *)(lVar11 + (ulong)uVar12 * 0xc + 4);
            } while (uVar12 != 0xffffffff);
          }
          bVar5 = true;
        }
        else {
          fVar15 = *(float *)(*(long *)param_1[10] +
                              (ulong)(((uint)pfVar13[5] & 0x3fffffff) - 1) * 0x1c + 0x18);
          if ((fVar15 == 0.0) ||
             (iVar7 = FUN_00ef33d4(*param_1,fVar15,&uStack_a0,&local_a8), -1 < iVar7))
          goto LAB_00ef67c0;
          uVar16 = 0x80000000;
          *(undefined4 *)(param_1 + 1) = 0x80000000;
          if (param_3 != (int *)0x0) {
            *param_3 = iVar17;
            uVar16 = *(uint *)(param_1 + 1);
          }
          bVar5 = false;
        }
      } while (bVar5);
    }
  }
  if (*(long *)(lVar4 + 0x28) == local_88) {
    return uVar16;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




uint FUN_00ef6b00(long param_1,int *param_2,int *param_3,int param_4)

{
  uint *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  
  *param_3 = 0;
  puVar1 = (uint *)(param_1 + 8);
  if ((int)*puVar1 < 0) {
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined8 *)(param_1 + 0x40) = 0;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
    puVar1[0] = 0;
    puVar1[1] = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
    return 0x80000000;
  }
  if (*(int *)(param_1 + 0x1c) == *(int *)(param_1 + 0x20)) {
    *param_2 = *(int *)(param_1 + 0x1c);
    iVar2 = 1;
  }
  else {
    if (*(int *)(*(long *)(param_1 + 0x10) + 0x18) != *(int *)(param_1 + 0x20)) {
      *puVar1 = *puVar1 | 0x40;
    }
    lVar4 = *(long *)(param_1 + 0x10);
    lVar6 = 0;
    do {
      lVar3 = lVar4;
      uVar5 = *(uint *)(lVar3 + 0x14) & 0x3fffffff;
      if (uVar5 == 0) {
        lVar4 = 0;
      }
      else {
        lVar4 = **(long **)(param_1 + 0x50) + (ulong)(uVar5 - 1) * 0x1c;
      }
      uVar5 = 0;
      if (lVar6 != 0) {
        uVar5 = (int)((ulong)(lVar6 - **(long **)(param_1 + 0x50)) >> 2) * -0x49249249 + 1;
      }
      *(uint *)(lVar3 + 0x14) = *(uint *)(lVar3 + 0x14) & 0xc0000000 | uVar5 & 0x3fffffff;
      lVar6 = lVar3;
    } while (lVar4 != 0);
    lVar4 = 0;
    do {
      param_2[lVar4] = *(int *)(lVar3 + 0x18);
      iVar2 = (int)lVar4;
      if ((long)param_4 <= lVar4 + 1) {
        iVar2 = iVar2 + 1;
        *puVar1 = *puVar1 | 0x10;
        goto LAB_00ef6c1c;
      }
      uVar5 = *(uint *)(lVar3 + 0x14) & 0x3fffffff;
    } while ((uVar5 != 0) &&
            (lVar3 = **(long **)(param_1 + 0x50) + (ulong)(uVar5 - 1) * 0x1c, lVar4 = lVar4 + 1,
            lVar3 != 0));
    iVar2 = iVar2 + 1;
  }
LAB_00ef6c1c:
  uVar5 = *puVar1;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  puVar1[0] = 0;
  puVar1[1] = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *param_3 = iVar2;
  return uVar5 & 0xffffff | 0x40000000;
}




uint FUN_00ef6c40(long param_1,long param_2,int param_3,int *param_4,int *param_5,int param_6)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  uint *puVar6;
  
  *param_5 = 0;
  if (param_3 != 0) {
    puVar6 = (uint *)(param_1 + 8);
    if (-1 < (int)*puVar6) {
      if (*(int *)(param_1 + 0x1c) == *(int *)(param_1 + 0x20)) {
        *param_4 = *(int *)(param_1 + 0x1c);
        iVar2 = 1;
      }
      else {
        lVar3 = (long)param_3;
        do {
          if (lVar3 < 1) {
            lVar1 = *(long *)(param_1 + 0x10);
            *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 0x40;
            break;
          }
          lVar1 = FUN_00efa0b8(*(undefined8 *)(param_1 + 0x50),
                               *(undefined4 *)(param_2 + lVar3 * 4 + -4));
          lVar3 = lVar3 + -1;
        } while (lVar1 == 0);
        lVar3 = 0;
        do {
          lVar4 = lVar1;
          uVar5 = *(uint *)(lVar4 + 0x14) & 0x3fffffff;
          if (uVar5 == 0) {
            lVar1 = 0;
          }
          else {
            lVar1 = **(long **)(param_1 + 0x50) + (ulong)(uVar5 - 1) * 0x1c;
          }
          uVar5 = 0;
          if (lVar3 != 0) {
            uVar5 = (int)((ulong)(lVar3 - **(long **)(param_1 + 0x50)) >> 2) * -0x49249249 + 1;
          }
          *(uint *)(lVar4 + 0x14) = *(uint *)(lVar4 + 0x14) & 0xc0000000 | uVar5 & 0x3fffffff;
          lVar3 = lVar4;
        } while (lVar1 != 0);
        lVar3 = 0;
        do {
          param_4[lVar3] = *(int *)(lVar4 + 0x18);
          iVar2 = (int)lVar3;
          if ((long)param_6 <= lVar3 + 1) {
            iVar2 = iVar2 + 1;
            *puVar6 = *puVar6 | 0x10;
            goto LAB_00ef6dac;
          }
          uVar5 = *(uint *)(lVar4 + 0x14) & 0x3fffffff;
        } while ((uVar5 != 0) &&
                (lVar4 = **(long **)(param_1 + 0x50) + (ulong)(uVar5 - 1) * 0x1c, lVar3 = lVar3 + 1,
                lVar4 != 0));
        iVar2 = iVar2 + 1;
      }
LAB_00ef6dac:
      uVar5 = *puVar6;
      *(undefined8 *)(param_1 + 0x38) = 0;
      *(undefined8 *)(param_1 + 0x40) = 0;
      *(undefined8 *)(param_1 + 0x28) = 0;
      *(undefined8 *)(param_1 + 0x30) = 0;
      *(undefined8 *)(param_1 + 0x18) = 0;
      *(undefined8 *)(param_1 + 0x20) = 0;
      puVar6[0] = 0;
      puVar6[1] = 0;
      *(undefined8 *)(param_1 + 0x10) = 0;
      *param_5 = iVar2;
      return uVar5 & 0xffffff | 0x40000000;
    }
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined8 *)(param_1 + 0x40) = 0;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
    puVar6[0] = 0;
    puVar6[1] = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  return 0x80000000;
}




undefined4
FUN_00ef6de4(undefined8 param_1,float *param_2,char param_3,undefined4 param_4,long param_5,
            long param_6,long param_7,int *param_8,int param_9)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined8 uVar9;
  
  iVar3 = *param_8;
  if (iVar3 < 1) {
    fVar5 = *param_2;
  }
  else {
    pfVar4 = (float *)(param_5 + (long)(iVar3 * 3 + -3) * 4);
    if (((DAT_03210cd0 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_03210cd0), iVar3 != 0)) {
      DAT_03210cc8 = 3.7252903e-09;
      __cxa_guard_release(&DAT_03210cd0);
    }
    fVar5 = *param_2;
    uVar9 = *(undefined8 *)(pfVar4 + 1);
    fVar6 = fVar5 - *pfVar4;
    fVar7 = (float)*(undefined8 *)(param_2 + 1) - (float)uVar9;
    fVar8 = (float)((ulong)*(undefined8 *)(param_2 + 1) >> 0x20) - (float)((ulong)uVar9 >> 0x20);
    if (fVar6 * fVar6 + fVar7 * fVar7 + fVar8 * fVar8 < DAT_03210cc8) {
      if (param_6 != 0) {
        *(char *)(param_6 + *param_8 + -1) = param_3;
      }
      if (param_7 != 0) {
        *(undefined4 *)(param_7 + (long)*param_8 * 4 + -4) = param_4;
      }
      return 0x20000000;
    }
    iVar3 = *param_8;
  }
  pfVar4 = (float *)(param_5 + (long)iVar3 * 0xc);
  *pfVar4 = fVar5;
  pfVar4[1] = param_2[1];
  pfVar4[2] = param_2[2];
  if (param_6 != 0) {
    *(char *)(param_6 + iVar3) = param_3;
  }
  if (param_7 != 0) {
    *(undefined4 *)(param_7 + (long)*param_8 * 4) = param_4;
  }
  iVar3 = *param_8 + 1;
  uVar1 = 0x40000000;
  if (param_9 <= iVar3) {
    uVar1 = 0x40000010;
  }
  uVar2 = 0x20000000;
  if (param_9 <= iVar3 || param_3 == '\x02') {
    uVar2 = uVar1;
  }
  *param_8 = iVar3;
  return uVar2;
}

