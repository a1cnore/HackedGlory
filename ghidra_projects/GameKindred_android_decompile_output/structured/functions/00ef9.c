// functions/00ef9 — 6 functions
#include "libGameKindred.h"




/* WARNING: Type propagation algorithm not settling */

uint FUN_00ef939c(undefined8 *param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                 int *param_6,int param_7)

{
  int iVar1;
  ushort uVar2;
  ushort uVar3;
  short sVar4;
  long lVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  short *psVar10;
  undefined4 *puVar11;
  float *pfVar12;
  float *pfVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  float *pfVar16;
  int *piVar17;
  long lVar18;
  uint uVar19;
  uint uVar20;
  ulong uVar21;
  float fVar22;
  long local_128 [2];
  int local_114;
  uint *local_110;
  long local_108;
  undefined1 auStack_100 [14];
  short local_f2 [57];
  long local_80;
  
  lVar5 = tpidr_el0;
  local_80 = *(long *)(lVar5 + 0x28);
  *param_6 = 0;
  local_110 = (uint *)0x0;
  local_108 = 0;
  iVar6 = FUN_00ef33d4(*param_1,param_2,&local_108,&local_110);
  if (iVar6 < 0) {
    uVar19 = 0x80000008;
  }
  else {
    if (*(byte *)((long)local_110 + 0x1e) == 0) {
      iVar6 = 0;
      uVar19 = 0x40000000;
    }
    else {
      iVar6 = 0;
      uVar20 = *(byte *)((long)local_110 + 0x1e) - 1;
      uVar19 = 0x40000000;
      uVar21 = 0;
      do {
        local_114 = 0;
        uVar2 = *(ushort *)((long)local_110 + (long)(int)uVar20 * 2 + 0x10);
        if ((short)uVar2 < 0) {
          uVar7 = *local_110;
          if (uVar7 != 0xffffffff) {
            lVar18 = *(long *)(local_108 + 0x20);
            do {
              uVar9 = (ulong)uVar7;
              if (uVar20 == *(byte *)(lVar18 + uVar9 * 0xc + 8)) {
                piVar17 = (int *)(lVar18 + uVar9 * 0xc);
                iVar1 = *piVar17;
                if (iVar1 != 0) {
                  local_128[0] = 0;
                  local_128[1] = 0;
                  FUN_00ef3494(*param_1,iVar1,local_128 + 1,local_128);
                  if (((*(ushort *)(param_3 + 0x100) & *(ushort *)(local_128[0] + 0x1c)) != 0) &&
                     ((*(ushort *)(param_3 + 0x102) & *(ushort *)(local_128[0] + 0x1c)) == 0)) {
                    lVar18 = lVar18 + uVar9 * 0xc;
                    FUN_00ef9880(auStack_100,&local_114,*(undefined1 *)(lVar18 + 10),
                                 *(undefined1 *)(lVar18 + 0xb),*piVar17);
                  }
                  lVar18 = *(long *)(local_108 + 0x20);
                }
              }
              uVar7 = *(uint *)(lVar18 + uVar9 * 0xc + 4);
            } while (uVar7 != 0xffffffff);
          }
          FUN_00ef9880(auStack_100,&local_114,0xffff,0,0);
          FUN_00ef9880(auStack_100,&local_114,0xff,0x100,0);
          if (1 < local_114) {
            pfVar12 = (float *)(*(long *)(local_108 + 0x18) +
                               (ulong)*(ushort *)((long)local_110 + (long)(int)uVar20 * 2 + 4) * 0xc
                               );
            pfVar13 = (float *)(*(long *)(local_108 + 0x18) +
                               (ulong)*(ushort *)((long)local_110 + uVar21 * 2 + 4) * 0xc);
            lVar18 = 1;
            psVar10 = local_f2;
            do {
              if ((param_5 != 0) && (iVar1 = *(int *)(psVar10 + -3), iVar1 != 0)) {
                if (iVar6 < param_7) {
                  sVar4 = *psVar10;
                  fVar22 = (float)(int)psVar10[-1] / 255.0;
                  pfVar16 = (float *)(param_4 + (long)iVar6 * 0x18);
                  *pfVar16 = *pfVar12 + fVar22 * (*pfVar13 - *pfVar12);
                  pfVar16[1] = pfVar12[1] + fVar22 * (pfVar13[1] - pfVar12[1]);
                  pfVar16[2] = pfVar12[2] + fVar22 * (pfVar13[2] - pfVar12[2]);
                  fVar22 = (float)(int)sVar4 / 255.0;
                  pfVar16[3] = *pfVar12 + fVar22 * (*pfVar13 - *pfVar12);
                  pfVar16[4] = pfVar12[1] + fVar22 * (pfVar13[1] - pfVar12[1]);
                  pfVar16[5] = pfVar12[2] + fVar22 * (pfVar13[2] - pfVar12[2]);
                  *(int *)(param_5 + (long)iVar6 * 4) = iVar1;
                  iVar6 = iVar6 + 1;
                }
                else {
                  uVar19 = uVar19 | 0x10;
                }
              }
              sVar4 = psVar10[-1];
              if (psVar10[-4] != sVar4) {
                if (iVar6 < param_7) {
                  fVar22 = (float)(int)psVar10[-4] / 255.0;
                  pfVar16 = (float *)(param_4 + (long)iVar6 * 0x18);
                  *pfVar16 = *pfVar12 + fVar22 * (*pfVar13 - *pfVar12);
                  pfVar16[1] = pfVar12[1] + fVar22 * (pfVar13[1] - pfVar12[1]);
                  pfVar16[2] = pfVar12[2] + fVar22 * (pfVar13[2] - pfVar12[2]);
                  fVar22 = (float)(int)sVar4 / 255.0;
                  pfVar16[3] = *pfVar12 + fVar22 * (*pfVar13 - *pfVar12);
                  pfVar16[4] = pfVar12[1] + fVar22 * (pfVar13[1] - pfVar12[1]);
                  pfVar16[5] = pfVar12[2] + fVar22 * (pfVar13[2] - pfVar12[2]);
                  if (param_5 != 0) {
                    *(undefined4 *)(param_5 + (long)iVar6 * 4) = 0;
                  }
                  iVar6 = iVar6 + 1;
                }
                else {
                  uVar19 = uVar19 | 0x10;
                }
              }
              lVar18 = lVar18 + 1;
              psVar10 = psVar10 + 4;
            } while (lVar18 < local_114);
          }
        }
        else {
          if (uVar2 == 0) {
LAB_00ef977c:
            uVar8 = 0;
          }
          else {
            uVar7 = FUN_00ef1e90(*param_1,local_108);
            uVar3 = *(ushort *)(*(long *)(local_108 + 0x10) + (ulong)(uVar2 - 1) * 0x20 + 0x1c);
            if ((*(ushort *)(param_3 + 0x100) & uVar3) == 0) goto LAB_00ef977c;
            uVar8 = 0;
            if ((((*(ushort *)(param_3 + 0x102) & uVar3) == 0) &&
                (uVar8 = uVar7 | uVar2 - 1, param_5 == 0)) && (uVar8 != 0)) goto LAB_00ef9808;
          }
          if (iVar6 < param_7) {
            puVar15 = (undefined4 *)(param_4 + (long)iVar6 * 0x18);
            puVar14 = (undefined4 *)
                      (*(long *)(local_108 + 0x18) +
                      (ulong)*(ushort *)((long)local_110 + (long)(int)uVar20 * 2 + 4) * 0xc);
            puVar11 = (undefined4 *)
                      (*(long *)(local_108 + 0x18) +
                      (ulong)*(ushort *)((long)local_110 + uVar21 * 2 + 4) * 0xc);
            *puVar15 = *puVar14;
            puVar15[1] = puVar14[1];
            puVar15[2] = puVar14[2];
            puVar15[3] = *puVar11;
            puVar15[4] = puVar11[1];
            puVar15[5] = puVar11[2];
            if (param_5 != 0) {
              *(uint *)(param_5 + (long)iVar6 * 4) = uVar8;
            }
            iVar6 = iVar6 + 1;
          }
          else {
            uVar19 = uVar19 | 0x10;
          }
        }
LAB_00ef9808:
        uVar9 = uVar21 + 1;
        uVar20 = (uint)uVar21;
        uVar21 = uVar9;
      } while (uVar9 < *(byte *)((long)local_110 + 0x1e));
    }
    *param_6 = iVar6;
  }
  if (*(long *)(lVar5 + 0x28) != local_80) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar19;
}




void FUN_00ef9880(long param_1,int *param_2,undefined2 param_3,short param_4,undefined4 param_5)

{
  void *__src;
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  short *psVar5;
  
  iVar2 = *param_2;
  if (iVar2 < 0x10) {
    if (iVar2 < 1) {
      uVar4 = 0;
    }
    else {
      uVar4 = 0;
      psVar5 = (short *)(param_1 + 4);
      do {
        if (param_4 <= *psVar5) break;
        uVar4 = uVar4 + 1;
        psVar5 = psVar5 + 4;
      } while ((long)uVar4 < (long)iVar2);
    }
    uVar3 = iVar2 - (int)uVar4;
    if (uVar3 != 0) {
      __src = (void *)(param_1 + (uVar4 & 0xffffffff) * 8);
      memmove((void *)((long)__src + 8),__src,
              -(ulong)(uVar3 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar3 << 3);
    }
    puVar1 = (undefined4 *)(param_1 + (uVar4 & 0xffffffff) * 8);
    *puVar1 = param_5;
    *(undefined2 *)(puVar1 + 1) = param_3;
    *(short *)((long)puVar1 + 6) = param_4;
    *param_2 = *param_2 + 1;
  }
  return;
}




uint FUN_00ef9934(float param_1,undefined8 *param_2,float param_3,float *param_4,long param_5,
                 float *param_6,float *param_7,float *param_8)

{
  byte bVar1;
  byte bVar2;
  ushort uVar3;
  long lVar4;
  ulong uVar5;
  float *pfVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  int iVar10;
  uint uVar11;
  float *pfVar12;
  uint uVar13;
  float *pfVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  uint local_b4;
  undefined1 auStack_ac [4];
  long local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  uint *local_88;
  long local_80;
  long local_78;
  
  lVar4 = tpidr_el0;
  local_78 = *(long *)(lVar4 + 0x28);
  local_b4 = 0x80000008;
  if ((param_3 != 0.0) && (uVar5 = FUN_00ef34e0(*param_2,param_3), (uVar5 & 1) != 0)) {
    FUN_00efa084(param_2[10]);
    *(undefined4 *)(param_2[0xb] + 0xc) = 0;
    pfVar6 = (float *)FUN_00efa13c(param_2[10],param_3);
    *pfVar6 = *param_4;
    pfVar6[1] = param_4[1];
    fVar18 = param_4[2];
    pfVar6[5] = 2.0;
    pfVar6[6] = param_3;
    pfVar6[4] = 0.0;
    pfVar6[2] = fVar18;
    pfVar6[3] = 0.0;
    lVar7 = param_2[0xb];
    iVar10 = *(int *)(lVar7 + 0xc);
    *(int *)(lVar7 + 0xc) = iVar10 + 1;
    FUN_00efa24c(lVar7,iVar10,pfVar6);
    plVar8 = (long *)param_2[0xb];
    param_1 = param_1 * param_1;
    iVar10 = *(int *)((long)plVar8 + 0xc);
    if (iVar10 == 0) {
      local_b4 = 0x40000000;
    }
    else {
      local_b4 = 0x40000000;
      do {
        pfVar6 = *(float **)*plVar8;
        *(int *)((long)plVar8 + 0xc) = iVar10 + -1;
        FUN_00efa2a0(plVar8,0,((long *)*plVar8)[iVar10 + -1]);
        fVar18 = pfVar6[6];
        pfVar6[5] = (float)((uint)pfVar6[5] & 0x3fffffff | 0x80000000);
        local_88 = (uint *)0x0;
        local_80 = 0;
        FUN_00ef3494(*param_2,fVar18,&local_80,&local_88);
        local_98 = 0;
        uStack_90 = 0;
        if (((uint)pfVar6[5] & 0x3fffffff) == 0) {
          fVar19 = 0.0;
        }
        else {
          fVar19 = *(float *)(*(long *)param_2[10] +
                              (ulong)(((uint)pfVar6[5] & 0x3fffffff) - 1) * 0x1c + 0x18);
          if (fVar19 != 0.0) {
            FUN_00ef3494(*param_2,fVar19,&uStack_90,&local_98);
          }
        }
        if (*(byte *)((long)local_88 + 0x1e) != 0) {
          uVar13 = *(byte *)((long)local_88 + 0x1e) - 1;
          uVar5 = 0;
          do {
            uVar3 = *(ushort *)((long)local_88 + (long)(int)uVar13 * 2 + 0x10);
            if ((short)uVar3 < 0) {
              uVar11 = *local_88;
              if (uVar11 != 0xffffffff) {
                lVar7 = *(long *)(local_80 + 0x20);
                do {
                  if (uVar13 == *(byte *)(lVar7 + (ulong)uVar11 * 0xc + 8)) {
                    iVar10 = *(int *)(lVar7 + (ulong)uVar11 * 0xc);
                    if (iVar10 != 0) {
                      local_a8 = 0;
                      local_a0 = 0;
                      FUN_00ef3494(*param_2,iVar10,&local_a0,&local_a8);
                      lVar7 = local_a8;
                      goto LAB_00ef9b58;
                    }
                    break;
                  }
                  uVar11 = *(uint *)(lVar7 + (ulong)uVar11 * 0xc + 4);
                } while (uVar11 != 0xffffffff);
              }
LAB_00ef9b74:
              pfVar12 = (float *)(*(long *)(local_80 + 0x18) +
                                 (ulong)*(ushort *)((long)local_88 + (long)(int)uVar13 * 2 + 4) *
                                 0xc);
              pfVar14 = (float *)(*(long *)(local_80 + 0x18) +
                                 (ulong)*(ushort *)((long)local_88 + uVar5 * 2 + 4) * 0xc);
              fVar15 = (float)FUN_00efa76c(param_4,pfVar12,pfVar14,&local_a0);
              if (fVar15 <= param_1) {
                *param_7 = *pfVar12 + (*pfVar14 - *pfVar12) * (float)local_a0;
                param_7[1] = pfVar12[1] + (float)local_a0 * (pfVar14[1] - pfVar12[1]);
                param_7[2] = pfVar12[2] + (float)local_a0 * (pfVar14[2] - pfVar12[2]);
                param_1 = fVar15;
              }
            }
            else {
              if (uVar3 == 0) goto LAB_00ef9b74;
              FUN_00ef1e90(*param_2,local_80);
              lVar7 = *(long *)(local_80 + 0x10) + (ulong)(uVar3 - 1) * 0x20;
LAB_00ef9b58:
              if (((*(ushort *)(param_5 + 0x100) & *(ushort *)(lVar7 + 0x1c)) == 0) ||
                 ((*(ushort *)(param_5 + 0x102) & *(ushort *)(lVar7 + 0x1c)) != 0))
              goto LAB_00ef9b74;
            }
            uVar9 = uVar5 + 1;
            uVar13 = (uint)uVar5;
            uVar5 = uVar9;
          } while (uVar9 < *(byte *)((long)local_88 + 0x1e));
        }
        uVar13 = *local_88;
        if (uVar13 != 0xffffffff) {
          lVar7 = *(long *)(local_80 + 0x20);
          do {
            uVar5 = (ulong)uVar13;
            fVar15 = *(float *)(lVar7 + uVar5 * 0xc);
            if ((fVar15 != 0.0) && (fVar15 != fVar19)) {
              local_a8 = 0;
              local_a0 = 0;
              FUN_00ef3494(*param_2,fVar15,&local_a0,&local_a8);
              if ((*(byte *)(local_a8 + 0x1f) & 0xc0) != 0x40) {
                bVar1 = *(byte *)(lVar7 + uVar5 * 0xc + 8);
                bVar2 = *(byte *)((long)local_88 + 0x1e);
                uVar13 = bVar1 + 1;
                uVar11 = 0;
                if (bVar2 != 0) {
                  uVar11 = uVar13 / bVar2;
                }
                fVar17 = (float)FUN_00efa76c(param_4,*(long *)(local_80 + 0x18) +
                                                     (ulong)*(ushort *)
                                                             ((long)local_88 + (ulong)bVar1 * 2 + 4)
                                                     * 0xc,
                                             *(long *)(local_80 + 0x18) +
                                             (ulong)*(ushort *)
                                                     ((long)local_88 +
                                                     (ulong)(uVar13 - uVar11 * bVar2) * 2 + 4) * 0xc
                                             ,auStack_ac);
                if (((fVar17 <= param_1) &&
                    ((*(ushort *)(param_5 + 0x100) & *(ushort *)(local_a8 + 0x1c)) != 0)) &&
                   ((*(ushort *)(param_5 + 0x102) & *(ushort *)(local_a8 + 0x1c)) == 0)) {
                  pfVar12 = (float *)FUN_00efa13c(param_2[10],fVar15);
                  if (pfVar12 == (float *)0x0) {
                    local_b4 = local_b4 | 0x20;
                  }
                  else if (-1 < (int)pfVar12[5]) {
                    if ((uint)pfVar12[5] >> 0x1e == 0) {
                      FUN_00ef642c(pfVar12,fVar18,local_88,local_80,fVar15,local_a8,local_a0,pfVar12
                                  );
                    }
                    fVar20 = pfVar6[4];
                    fVar16 = (float)FUN_00efa36c((*pfVar12 - *pfVar6) * (*pfVar12 - *pfVar6) +
                                                 (pfVar12[1] - pfVar6[1]) * (pfVar12[1] - pfVar6[1])
                                                 + (pfVar12[2] - pfVar6[2]) *
                                                   (pfVar12[2] - pfVar6[2]));
                    fVar17 = pfVar12[5];
                    if ((((uint)fVar17 >> 0x1e & 1) == 0) || (fVar20 + fVar16 < pfVar12[4])) {
                      pfVar12[5] = ABS(fVar17);
                      pfVar12[6] = fVar15;
                      iVar10 = *(int *)param_2[10];
                      pfVar12[4] = fVar20 + fVar16;
                      uVar13 = ((uint)((int)pfVar6 - iVar10) >> 2) * -0x49249249 + 1 & 0x3fffffff;
                      pfVar12[5] = (float)(uVar13 | (uint)fVar17 & 0x40000000);
                      if (((uint)fVar17 & 0x40000000) == 0) {
                        pfVar12[5] = (float)(uVar13 | 0x40000000);
                        plVar8 = (long *)param_2[0xb];
                        uVar9 = (ulong)*(uint *)((long)plVar8 + 0xc);
                        *(uint *)((long)plVar8 + 0xc) = *(uint *)((long)plVar8 + 0xc) + 1;
LAB_00ef9d60:
                        FUN_00efa24c(plVar8,uVar9,pfVar12);
                      }
                      else {
                        plVar8 = (long *)param_2[0xb];
                        if (0 < *(int *)((long)plVar8 + 0xc)) {
                          uVar9 = 0;
                          do {
                            if (*(float **)(*plVar8 + uVar9 * 8) == pfVar12) goto LAB_00ef9d60;
                            uVar9 = uVar9 + 1;
                          } while ((long)uVar9 < (long)*(int *)((long)plVar8 + 0xc));
                        }
                      }
                    }
                  }
                }
              }
              lVar7 = *(long *)(local_80 + 0x20);
            }
            uVar13 = *(uint *)(lVar7 + uVar5 * 0xc + 4);
          } while (uVar13 != 0xffffffff);
        }
        plVar8 = (long *)param_2[0xb];
        iVar10 = *(int *)((long)plVar8 + 0xc);
      } while (iVar10 != 0);
    }
    fVar18 = *param_4 - *param_7;
    *param_8 = fVar18;
    fVar19 = param_4[1] - param_7[1];
    param_8[1] = fVar19;
    fVar15 = param_4[2] - param_7[2];
    param_8[2] = fVar15;
    fVar18 = (float)FUN_00efa36c(fVar18 * fVar18 + fVar19 * fVar19 + fVar15 * fVar15);
    fVar19 = SQRT(param_1);
    fVar18 = 1.0 / fVar18;
    *(ulong *)param_8 =
         CONCAT44((float)((ulong)*(undefined8 *)param_8 >> 0x20) * fVar18,
                  (float)*(undefined8 *)param_8 * fVar18);
    param_8[2] = fVar18 * param_8[2];
    if (NAN(fVar19)) {
      fVar19 = sqrtf(param_1);
    }
    *param_6 = fVar19;
  }
  if (*(long *)(lVar4 + 0x28) == local_78) {
    return local_b4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




/* WARNING: Type propagation algorithm not settling */

void FUN_00ef9f20(undefined8 *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  long local_38 [3];
  
  lVar1 = tpidr_el0;
  local_38[2] = *(long *)(lVar1 + 0x28);
  local_38[0] = 0;
  local_38[1] = 0;
  iVar3 = FUN_00ef33d4(*param_1,param_2,local_38 + 1,local_38);
  if ((iVar3 < 0) || ((*(ushort *)(param_3 + 0x100) & *(ushort *)(local_38[0] + 0x1c)) == 0)) {
    bVar2 = false;
  }
  else {
    bVar2 = (*(ushort *)(param_3 + 0x102) & *(ushort *)(local_38[0] + 0x1c)) == 0;
  }
  if (*(long *)(lVar1 + 0x28) == local_38[2]) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar2);
}




uint FUN_00ef9fa4(long param_1)

{
  uint uVar1;
  long lVar2;
  
  uVar1 = 0;
  if (*(long *)(param_1 + 0x50) != 0) {
    lVar2 = FUN_00efa0b8();
    uVar1 = 0;
    if (lVar2 != 0) {
      uVar1 = *(uint *)(lVar2 + 0x14) >> 0x1f;
    }
  }
  return uVar1;
}




void FUN_00ef9fcc(undefined8 *param_1,int param_2,int param_3)

{
  undefined8 uVar1;
  void *__s;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(int *)(param_1 + 3) = param_2;
  *(int *)((long)param_1 + 0x1c) = param_3;
  *(undefined4 *)(param_1 + 4) = 0;
  uVar1 = thunk_FUN_00ef1250(param_2 * 0x1c,0);
  *param_1 = uVar1;
  uVar1 = thunk_FUN_00ef1250(*(int *)(param_1 + 3) << 1,0);
  param_1[2] = uVar1;
  __s = (void *)thunk_FUN_00ef1250(param_3 << 1,0);
  param_1[1] = __s;
  memset(__s,0xff,(long)*(int *)((long)param_1 + 0x1c) << 1);
  memset((void *)param_1[2],0xff,(long)*(int *)(param_1 + 3) << 1);
  return;
}

