// functions/00f1a — 4 functions
#include "libGameKindred.h"




void FUN_00f1a150(uint *param_1,undefined8 *param_2)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  
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
    FUN_00f1c03c(param_1,uVar1);
    uVar4 = *param_1;
  }
  *param_1 = uVar4 + 1;
  lVar2 = *(long *)(param_1 + 2) + (ulong)(uVar4 + 1) * 0xc;
  *(undefined4 *)(lVar2 + -4) = *(undefined4 *)(param_2 + 1);
  *(undefined8 *)(lVar2 + -0xc) = *param_2;
  return;
}




long FUN_00f1a1e4(long param_1,ulong param_2)

{
  long lVar1;
  
  lVar1 = FUN_00f058b4(*(undefined8 *)(param_1 + 0x938),param_2 & 0xffff);
  return *(long *)(lVar1 + 0x30) + (param_2 >> 0x10 & 0xffff) * 0x28;
}




/* WARNING: Type propagation algorithm not settling */

void FUN_00f1a218(float param_1,float param_2,long *param_3,long param_4,int param_5,int param_6,
                 int param_7,ulong param_8,undefined8 param_9)

{
  char cVar1;
  ushort uVar2;
  short sVar3;
  short sVar4;
  long lVar5;
  ulong uVar6;
  bool bVar7;
  undefined4 uVar8;
  uint uVar9;
  int *piVar10;
  float *pfVar11;
  float *pfVar12;
  undefined8 *puVar13;
  uint uVar14;
  undefined8 uVar15;
  ulong uVar16;
  ulong uVar17;
  undefined8 *******pppppppuVar18;
  undefined8 *******pppppppuVar19;
  float *pfVar20;
  int iVar21;
  int iVar22;
  short *psVar23;
  int *piVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  long lVar28;
  long lVar29;
  int iVar30;
  float *pfVar31;
  undefined8 *******pppppppuVar32;
  long lVar33;
  undefined8 *puVar34;
  undefined8 *******pppppppuVar35;
  int iVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  undefined8 uVar41;
  ushort uVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  undefined8 *local_308;
  short *local_2d0;
  int local_2c8;
  int local_2c4;
  undefined8 *******local_2c0;
  undefined8 local_2b8;
  float local_2b0;
  long local_b0;
  
  lVar5 = tpidr_el0;
  local_b0 = *(long *)(lVar5 + 0x28);
  lVar33 = *param_3;
  if (*(long *)(lVar33 + 0x10) != 0) {
    lVar28 = param_3[6];
    uVar2 = *(ushort *)(*(long *)(lVar33 + 0x20) + (long)*(int *)(lVar33 + 0x34) + 0x12);
    uVar42 = *(ushort *)((long)param_3 + 0xc);
    puVar34 = (undefined8 *)(lVar33 + 0x18);
    *puVar34 = param_9;
    fVar43 = (float)NEON_ucvtf((uint)uVar42);
    fVar43 = fVar43 / (float)(ushort)(uVar2 >> 8 | uVar2 << 8);
    param_1 = fVar43 * param_1;
    fVar43 = fVar43 * param_2;
    uVar8 = FUN_00f1adfc(puVar34,*(undefined4 *)(lVar28 + (param_8 & 0xffff) * 0x28));
    uVar9 = FUN_00f1b2c8(puVar34,uVar8,&local_2d0);
    FUN_00f1b0a4(param_1,fVar43,puVar34,uVar8,&local_2c4,&local_2c8,0,0);
    if ((param_5 != 0) && (param_6 != 0)) {
      fVar39 = fVar43;
      if (param_1 <= fVar43) {
        fVar39 = param_1;
      }
      uVar15 = *puVar34;
      local_2b8 = local_2b8 & 0xffffffff00000000;
      if (0 < (int)uVar9) {
        uVar14 = 0;
        psVar23 = local_2d0 + 4;
        uVar16 = (ulong)uVar9;
        do {
          if ((char)*psVar23 == '\x01') {
            uVar14 = uVar14 + 1;
          }
          uVar16 = uVar16 - 1;
          psVar23 = psVar23 + 5;
        } while (uVar16 != 0);
        if (uVar14 != 0) {
          uVar16 = (ulong)uVar14;
          piVar10 = (int *)FUN_00f1ba1c(uVar16 << 2,uVar15);
          if (piVar10 != (int *)0x0) {
            uVar14 = 0;
            fVar49 = 0.0;
            lVar33 = 0;
            do {
              if (uVar14 == 1) {
                lVar33 = FUN_00f1ba1c((long)(int)(float)local_2b8 << 3,uVar15);
                if (lVar33 == 0) goto LAB_00f1adb0;
              }
              iVar36 = -1;
              fVar38 = 0.0;
              fVar37 = 0.0;
              local_2b8 = local_2b8 & 0xffffffff00000000;
              psVar23 = local_2d0;
              uVar17 = (ulong)uVar9;
              do {
                cVar1 = (char)psVar23[4];
                if (cVar1 == '\x03') {
                  FUN_00f1bb68(fVar37,fVar38,(float)(int)psVar23[2],(float)(int)psVar23[3],
                               (float)(int)*psVar23,(float)(int)psVar23[1],
                               (0.35 / fVar39) * (0.35 / fVar39),lVar33,&local_2b8,0);
                  fVar37 = (float)(int)*psVar23;
                  fVar38 = (float)(int)psVar23[1];
                  uVar6 = local_2b8;
                }
                else {
                  if (cVar1 == '\x02') {
                    sVar3 = *psVar23;
                    sVar4 = psVar23[1];
                  }
                  else {
                    uVar6 = local_2b8;
                    if (cVar1 != '\x01') goto LAB_00f1a4b0;
                    if (-1 < iVar36) {
                      piVar10[iVar36] = (int)(float)local_2b8 - (int)fVar49;
                    }
                    sVar3 = *psVar23;
                    sVar4 = psVar23[1];
                    iVar36 = iVar36 + 1;
                    fVar49 = (float)local_2b8;
                  }
                  uVar6 = CONCAT44(local_2b8._4_4_,(int)(float)local_2b8 + 1);
                  fVar38 = (float)(int)sVar4;
                  fVar37 = (float)(int)sVar3;
                  if (lVar33 != 0) {
                    pfVar11 = (float *)(lVar33 + (long)(int)(float)local_2b8 * 8);
                    *pfVar11 = fVar37;
                    pfVar11[1] = fVar38;
                  }
                }
LAB_00f1a4b0:
                local_2b8 = uVar6;
                uVar17 = uVar17 - 1;
                psVar23 = psVar23 + 5;
              } while (uVar17 != 0);
              uVar14 = uVar14 + 1;
              piVar10[iVar36] = (int)(float)local_2b8 - (int)fVar49;
            } while (uVar14 < 2);
            if (lVar33 != 0) {
              iVar36 = 0;
              piVar24 = piVar10;
              uVar17 = uVar16;
              do {
                uVar17 = uVar17 - 1;
                iVar36 = *piVar24 + iVar36;
                piVar24 = piVar24 + 1;
              } while (uVar17 != 0);
              pfVar11 = (float *)FUN_00f1ba1c((long)(iVar36 + 1) * 0x14,uVar15);
              if (pfVar11 != (float *)0x0) {
                uVar17 = 0;
                uVar9 = 0;
                iVar36 = 0;
                do {
                  iVar30 = piVar10[uVar17];
                  iVar25 = iVar30 + iVar36;
                  if (0 < iVar30) {
                    lVar29 = 0;
                    lVar28 = lVar33 + (long)iVar36 * 8;
                    pfVar12 = (float *)(lVar33 + 4 + (long)iVar36 * 8);
                    iVar36 = iVar30 + -1;
                    do {
                      fVar39 = *(float *)(lVar28 + (long)iVar36 * 8 + 4);
                      bVar7 = *pfVar12 <= fVar39;
                      iVar26 = (int)lVar29;
                      if (fVar39 != *pfVar12) {
                        pfVar31 = pfVar11 + (long)(int)uVar9 * 5;
                        iVar30 = iVar36;
                        if (!bVar7) {
                          iVar30 = iVar26;
                        }
                        pfVar31[4] = (float)(uint)bVar7;
                        uVar41 = *(undefined8 *)(lVar28 + (long)iVar30 * 8);
                        iVar30 = iVar26;
                        if (!bVar7) {
                          iVar30 = iVar36;
                        }
                        uVar9 = uVar9 + 1;
                        *(ulong *)pfVar31 =
                             CONCAT44(-fVar43 * (float)((ulong)uVar41 >> 0x20) + 0.0,
                                      param_1 * (float)uVar41 + 0.0);
                        uVar41 = *(undefined8 *)(lVar28 + (long)iVar30 * 8);
                        *(ulong *)(pfVar31 + 2) =
                             CONCAT44(-fVar43 * (float)((ulong)uVar41 >> 0x20) + 0.0,
                                      param_1 * (float)uVar41 + 0.0);
                        iVar30 = piVar10[uVar17];
                      }
                      lVar29 = lVar29 + 1;
                      pfVar12 = pfVar12 + 2;
                      iVar36 = iVar26;
                    } while (lVar29 < iVar30);
                  }
                  uVar17 = uVar17 + 1;
                  iVar36 = iVar25;
                } while (uVar17 != uVar16);
                FUN_00f1bcc0(pfVar11,uVar9);
                if (1 < (int)uVar9) {
                  uVar16 = 1;
                  lVar33 = 2;
                  pfVar12 = pfVar11;
                  do {
                    pfVar31 = pfVar11 + uVar16 * 5;
                    local_2b0 = pfVar31[4];
                    fVar43 = *pfVar31;
                    fVar39 = pfVar31[1];
                    local_2b8 = *(ulong *)(pfVar31 + 2);
                    lVar28 = lVar33;
                    pfVar31 = pfVar12;
                    do {
                      if (pfVar31[1] <= fVar39) break;
                      lVar28 = lVar28 + -1;
                      pfVar31[9] = pfVar31[4];
                      *(undefined8 *)(pfVar31 + 7) = *(undefined8 *)(pfVar31 + 2);
                      *(undefined8 *)(pfVar31 + 5) = *(undefined8 *)pfVar31;
                      pfVar31 = pfVar31 + -5;
                    } while (1 < lVar28);
                    uVar14 = (int)lVar28 - 1;
                    if (uVar16 != uVar14) {
                      pfVar31 = pfVar11 + (long)(int)uVar14 * 5;
                      *pfVar31 = fVar43;
                      pfVar31[1] = fVar39;
                      pfVar31[4] = local_2b0;
                      *(ulong *)(pfVar31 + 2) = local_2b8;
                    }
                    uVar16 = uVar16 + 1;
                    lVar33 = lVar33 + 1;
                    pfVar12 = pfVar12 + 5;
                  } while (uVar16 != uVar9);
                }
                local_2c0 = (undefined8 *******)0x0;
                if (param_5 < 0x41) {
                  pfVar12 = (float *)&local_2b8;
                }
                else {
                  pfVar12 = (float *)FUN_00f1ba1c(-(ulong)((uint)(param_5 << 1) >> 0x1f) &
                                                  0xfffffffc00000000 |
                                                  (ulong)(param_5 << 1 | 1) << 2,uVar15);
                }
                pfVar11[(long)(int)uVar9 * 5 + 1] = (float)(local_2c8 + param_6) + 1.0;
                if (0 < param_6) {
                  pfVar31 = pfVar12 + param_5;
                  lVar33 = (long)param_5;
                  iVar30 = 0;
                  pppppppuVar32 = (undefined8 *******)0x0;
                  iVar25 = 0;
                  pppppppuVar35 = (undefined8 *******)0x0;
                  iVar26 = 0;
                  fVar43 = (float)param_5;
                  local_308 = (undefined8 *)0x0;
                  iVar36 = local_2c8;
                  do {
                    fVar49 = (float)iVar36;
                    fVar39 = fVar49 + 1.0;
                    memset(pfVar12,0,lVar33 << 2);
                    memset(pfVar31,0,
                           -(ulong)(param_5 + 1U >> 0x1f) & 0xfffffffc00000000 |
                           (ulong)(param_5 + 1U) << 2);
                    if (pppppppuVar32 != (undefined8 *******)0x0) {
                      pppppppuVar18 = &local_2c0;
                      do {
                        pppppppuVar19 = pppppppuVar32;
                        if (*(float *)((long)pppppppuVar32 + 0x1c) <= fVar49) {
                          *pppppppuVar18 = *pppppppuVar32;
                          *(undefined4 *)((long)pppppppuVar32 + 0x14) = 0;
                          *pppppppuVar32 = pppppppuVar35;
                          pppppppuVar19 = pppppppuVar18;
                          pppppppuVar35 = pppppppuVar32;
                        }
                        pppppppuVar32 = (undefined8 *******)*pppppppuVar19;
                        pppppppuVar18 = pppppppuVar19;
                      } while (pppppppuVar32 != (undefined8 *******)0x0);
                    }
                    fVar37 = pfVar11[1];
                    while (pppppppuVar32 = local_2c0, pppppppuVar18 = local_2c0, fVar37 <= fVar39) {
                      if (fVar37 != pfVar11[3]) {
                        if (pppppppuVar35 == (undefined8 *******)0x0) {
                          if (iVar26 == 0) {
                            puVar13 = (undefined8 *)FUN_00f1ba1c(0x6408,uVar15);
                            if (puVar13 == (undefined8 *)0x0) {
                              iVar26 = 0;
                              pppppppuVar35 = (undefined8 *******)0x0;
                              goto LAB_00f1a888;
                            }
                            *puVar13 = local_308;
                            iVar26 = 799;
                          }
                          else {
                            iVar26 = iVar26 + -1;
                            puVar13 = local_308;
                          }
                          pppppppuVar18 = (undefined8 *******)0x0;
                          local_308 = puVar13;
                          pppppppuVar32 = (undefined8 *******)(puVar13 + (long)iVar26 * 4);
                        }
                        else {
                          pppppppuVar18 = (undefined8 *******)*pppppppuVar35;
                          pppppppuVar32 = pppppppuVar35;
                        }
                        pppppppuVar35 = pppppppuVar18;
                        if (pppppppuVar32 != (undefined8 *******)0x0) {
                          fVar40 = pfVar11[3];
                          fVar44 = *pfVar11;
                          fVar46 = pfVar11[1];
                          fVar38 = (pfVar11[2] - fVar44) / (fVar40 - fVar46);
                          fVar37 = 1.0 / fVar38;
                          if (fVar38 == 0.0) {
                            fVar37 = 0.0;
                          }
                          *(float *)((long)pppppppuVar32 + 0xc) = fVar38;
                          *(float *)(pppppppuVar32 + 2) = fVar37;
                          *(float *)(pppppppuVar32 + 1) =
                               (fVar44 + (fVar49 - fVar46) * fVar38) - (float)local_2c4;
                          fVar37 = pfVar11[4];
                          *(float *)(pppppppuVar32 + 3) = fVar46;
                          *(float *)((long)pppppppuVar32 + 0x1c) = fVar40;
                          *pppppppuVar32 = (undefined8 ******)0x0;
                          uVar8 = 0xbf800000;
                          if (fVar37 != 0.0) {
                            uVar8 = 0x3f800000;
                          }
                          *(undefined4 *)((long)pppppppuVar32 + 0x14) = uVar8;
                          *pppppppuVar32 = local_2c0;
                          local_2c0 = pppppppuVar32;
                        }
                      }
LAB_00f1a888:
                      pfVar20 = pfVar11 + 6;
                      pfVar11 = pfVar11 + 5;
                      fVar37 = *pfVar20;
                    }
                    for (; local_2c0 = pppppppuVar32, pppppppuVar18 != (undefined8 *******)0x0;
                        pppppppuVar18 = (undefined8 *******)*pppppppuVar18) {
                      fVar37 = *(float *)(pppppppuVar18 + 1);
                      fVar38 = *(float *)((long)pppppppuVar18 + 0xc);
                      if (fVar38 == 0.0) {
                        if (fVar37 < fVar43) {
                          if (0.0 <= fVar37) {
                            FUN_00f1beb4(fVar37,fVar49,fVar37,fVar39,pfVar12,(int)fVar37,
                                         pppppppuVar18);
                            iVar22 = (int)fVar37 + 1;
                          }
                          else {
                            iVar22 = 0;
                          }
                          FUN_00f1beb4(fVar37,fVar49,fVar37,fVar39,pfVar31,iVar22,pppppppuVar18);
                        }
                      }
                      else {
                        fVar45 = *(float *)(pppppppuVar18 + 3);
                        fVar46 = *(float *)(pppppppuVar18 + 2);
                        fVar40 = fVar37;
                        fVar44 = fVar49;
                        if (fVar49 < fVar45) {
                          fVar40 = fVar37 + fVar38 * (fVar45 - fVar49);
                          fVar44 = fVar45;
                        }
                        fVar48 = *(float *)((long)pppppppuVar18 + 0x1c);
                        fVar50 = fVar38 + fVar37;
                        fVar45 = fVar39;
                        fVar47 = fVar50;
                        if (fVar48 < fVar39) {
                          fVar47 = fVar37 + fVar38 * (fVar48 - fVar49);
                          fVar45 = fVar48;
                        }
                        if ((((fVar40 < 0.0) || (fVar47 < 0.0)) || (fVar43 <= fVar40)) ||
                           (fVar43 <= fVar47)) {
                          if (0 < param_5) {
                            iVar22 = 0;
                            do {
                              fVar44 = (float)iVar22;
                              iVar27 = iVar22 + 1;
                              fVar46 = (float)iVar27;
                              fVar40 = (fVar44 - fVar37) / fVar38 + fVar49;
                              fVar45 = (fVar46 - fVar37) / fVar38 + fVar49;
                              if ((fVar44 <= fVar37) || (fVar50 <= fVar46)) {
                                if ((fVar44 <= fVar50) || (fVar37 <= fVar46)) {
                                  fVar47 = fVar49;
                                  fVar48 = fVar37;
                                  if (((fVar44 <= fVar37) || (fVar50 <= fVar44)) &&
                                     ((fVar44 <= fVar50 || (fVar37 <= fVar44)))) {
                                    fVar40 = fVar49;
                                    fVar44 = fVar37;
                                    if (((fVar37 < fVar46) && (fVar46 < fVar50)) ||
                                       ((fVar50 < fVar46 && (fVar46 < fVar37)))) goto LAB_00f1abcc;
                                    goto LAB_00f1ac8c;
                                  }
                                }
                                else {
                                  FUN_00f1beb4(fVar37,fVar49,fVar46,fVar45,pfVar12,iVar22,
                                               pppppppuVar18);
                                  fVar47 = fVar45;
                                  fVar48 = fVar46;
                                }
                                FUN_00f1beb4(fVar48,fVar47,fVar44,fVar40,pfVar12,iVar22,
                                             pppppppuVar18);
                              }
                              else {
                                FUN_00f1beb4(fVar37,fVar49,fVar44,fVar40,pfVar12,iVar22,
                                             pppppppuVar18);
LAB_00f1abcc:
                                FUN_00f1beb4(fVar44,fVar40,fVar46,fVar45,pfVar12,iVar22,
                                             pppppppuVar18);
                                fVar40 = fVar45;
                                fVar44 = fVar46;
                              }
LAB_00f1ac8c:
                              FUN_00f1beb4(fVar44,fVar40,fVar50,fVar39,pfVar12,iVar22,pppppppuVar18)
                              ;
                              iVar22 = iVar27;
                            } while (param_5 != iVar27);
                          }
                        }
                        else {
                          iVar27 = (int)fVar40;
                          iVar22 = (int)fVar47;
                          if (iVar27 == iVar22) {
                            pfVar12[iVar27] =
                                 pfVar12[iVar27] +
                                 (fVar45 - fVar44) *
                                 (((fVar40 - (float)iVar27) + (fVar47 - (float)iVar27)) * -0.5 + 1.0
                                 ) * *(float *)((long)pppppppuVar18 + 0x14);
                            pfVar31[(long)iVar27 + 1] =
                                 pfVar31[(long)iVar27 + 1] +
                                 (fVar45 - fVar44) * *(float *)((long)pppppppuVar18 + 0x14);
                          }
                          else {
                            iVar21 = iVar27;
                            fVar38 = fVar40;
                            if (fVar47 < fVar40) {
                              fVar37 = fVar45 - fVar49;
                              fVar46 = -fVar46;
                              fVar45 = fVar39 - (fVar44 - fVar49);
                              fVar44 = fVar39 - fVar37;
                              iVar21 = iVar22;
                              fVar38 = fVar47;
                              iVar22 = iVar27;
                              fVar47 = fVar40;
                              fVar37 = fVar50;
                            }
                            iVar27 = iVar21 + 1;
                            fVar40 = *(float *)((long)pppppppuVar18 + 0x14);
                            fVar48 = fVar46 * ((float)iVar27 - fVar37) + fVar49;
                            fVar37 = fVar40 * (fVar48 - fVar44);
                            pfVar12[iVar21] =
                                 pfVar12[iVar21] +
                                 (((fVar38 - (float)iVar21) + 1.0) * -0.5 + 1.0) * fVar37;
                            if (iVar22 - iVar27 != 0 && iVar27 <= iVar22) {
                              iVar21 = (iVar22 + -1) - iVar21;
                              pfVar20 = pfVar12 + iVar27;
                              do {
                                fVar38 = fVar46 * fVar40 * 0.5 + fVar37;
                                iVar21 = iVar21 + -1;
                                fVar37 = fVar46 * fVar40 + fVar37;
                                *pfVar20 = fVar38 + *pfVar20;
                                pfVar20 = pfVar20 + 1;
                              } while (iVar21 != 0);
                            }
                            pfVar12[iVar22] =
                                 fVar40 * (((fVar47 - (float)iVar22) + 0.0) * -0.5 + 1.0) *
                                 (fVar45 - (fVar46 * (float)(iVar22 - iVar27) + fVar48)) + fVar37 +
                                 pfVar12[iVar22];
                            pfVar31[(long)iVar22 + 1] =
                                 (fVar45 - fVar44) * fVar40 + pfVar31[(long)iVar22 + 1];
                          }
                        }
                      }
                      pppppppuVar32 = local_2c0;
                    }
                    pppppppuVar18 = pppppppuVar32;
                    if (0 < param_5) {
                      fVar39 = 0.0;
                      pfVar20 = pfVar12;
                      lVar28 = lVar33;
                      iVar22 = iVar30;
                      do {
                        fVar39 = fVar39 + pfVar20[lVar33];
                        iVar27 = (int)(ABS(*pfVar20 + fVar39) * 255.0 + 0.5);
                        if (0xfe < iVar27) {
                          iVar27 = 0xff;
                        }
                        lVar28 = lVar28 + -1;
                        *(char *)(param_4 + iVar22) = (char)iVar27;
                        iVar22 = iVar22 + 1;
                        pfVar20 = pfVar20 + 1;
                      } while (lVar28 != 0);
                    }
                    for (; pppppppuVar18 != (undefined8 *******)0x0;
                        pppppppuVar18 = (undefined8 *******)*pppppppuVar18) {
                      *(float *)(pppppppuVar18 + 1) =
                           *(float *)((long)pppppppuVar18 + 0xc) + *(float *)(pppppppuVar18 + 1);
                    }
                    iVar36 = iVar36 + 1;
                    iVar25 = iVar25 + 1;
                    iVar30 = iVar30 + param_7;
                  } while (iVar25 != param_6);
                }
              }
            }
          }
        }
      }
    }
LAB_00f1adb0:
    *puVar34 = 0;
  }
  if (*(long *)(lVar5 + 0x28) != local_b0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




uint FUN_00f1adfc(long param_1,uint param_2)

{
  ushort *puVar1;
  undefined1 *puVar2;
  uint uVar3;
  uint uVar4;
  ushort uVar5;
  ushort uVar6;
  long lVar7;
  ulong uVar8;
  uint uVar9;
  long lVar10;
  ulong uVar11;
  int iVar12;
  uint uVar13;
  ushort uVar14;
  uint *puVar15;
  uint uVar16;
  
  lVar10 = *(long *)(param_1 + 8);
  uVar9 = *(uint *)(param_1 + 0x30);
  puVar1 = (ushort *)(lVar10 + (ulong)uVar9);
  uVar6 = *puVar1 >> 8;
  uVar5 = *puVar1 << 8;
  uVar14 = uVar6 | uVar5;
  switch(uVar14) {
  case 0:
    if ((int)param_2 < (int)(CONCAT11((char)puVar1[1],*(undefined1 *)((long)puVar1 + 3)) - 6)) {
      return (uint)*(byte *)((long)puVar1 + (long)(int)param_2 + 6);
    }
    break;
  default:
    if (((uVar6 & 0xfffe | uVar5) == 0xc) &&
       (uVar9 = (*(uint *)(puVar1 + 6) & 0xff00ff00) >> 8 | (*(uint *)(puVar1 + 6) & 0xff00ff) << 8,
       uVar9 = uVar9 >> 0x10 | uVar9 << 0x10, 0 < (int)uVar9)) {
      iVar12 = 0;
      do {
        uVar13 = iVar12 + ((int)(uVar9 - iVar12) >> 1);
        puVar15 = (uint *)(puVar1 + (long)(int)uVar13 * 6 + 8);
        uVar4 = (*puVar15 & 0xff00ff00) >> 8 | (*puVar15 & 0xff00ff) << 8;
        uVar4 = uVar4 >> 0x10 | uVar4 << 0x10;
        if (uVar4 <= param_2) {
          uVar16 = (puVar15[1] & 0xff00ff00) >> 8 | (puVar15[1] & 0xff00ff) << 8;
          if (param_2 <= (uVar16 >> 0x10 | uVar16 << 0x10)) {
            iVar12 = param_2 - uVar4;
            if (uVar14 != 0xc) {
              iVar12 = 0;
            }
            uVar9 = (puVar15[2] & 0xff00ff00) >> 8 | (puVar15[2] & 0xff00ff) << 8;
            return (uVar9 >> 0x10 | uVar9 << 0x10) + iVar12;
          }
          iVar12 = uVar13 + 1;
          uVar13 = uVar9;
        }
        uVar9 = uVar13;
      } while (iVar12 < (int)uVar9);
    }
    break;
  case 2:
    break;
  case 4:
    if ((int)param_2 < 0x10000) {
      uVar13 = *(byte *)((long)puVar1 + 0xd) & 0xfe;
      uVar4 = (uint)(byte)puVar1[6] << 8;
      puVar2 = (undefined1 *)(lVar10 + (ulong)(uVar9 + 0xe) + (ulong)(uVar13 | uVar4));
      uVar16 = 0;
      if ((int)(uint)CONCAT11(*puVar2,puVar2[1]) <= (int)param_2) {
        uVar16 = uVar13 | uVar4;
      }
      uVar4 = (uint)(puVar1[3] >> 8) | (puVar1[3] & 0xff00ff) << 8;
      uVar14 = puVar1[5] >> 8 | puVar1[5] << 8;
      uVar13 = uVar9 + uVar16 + 0xc;
      if (uVar14 != 0) {
        uVar16 = (uint)(puVar1[4] >> 8) | (puVar1[4] & 0xff00ff) << 8;
        do {
          uVar3 = uVar16 >> 1 & 0x7ffe;
          puVar2 = (undefined1 *)(lVar10 + (ulong)uVar13 + (ulong)uVar3);
          uVar14 = uVar14 - 1;
          uVar16 = uVar16 >> 1;
          if ((int)param_2 <= (int)(uint)CONCAT11(*puVar2,puVar2[1])) {
            uVar3 = 0;
          }
          uVar13 = uVar3 + uVar13;
        } while (uVar14 != 0);
      }
      uVar8 = (ulong)((uVar13 - uVar9) + 0x1fff4 & 0x1fffe);
      lVar7 = uVar8 + ((ulong)uVar4 & 0xfffe) + 0xe;
      uVar16 = (uint)CONCAT11(*(undefined1 *)((long)puVar1 + lVar7 + 2),
                              *(undefined1 *)((long)puVar1 + lVar7 + 3));
      uVar13 = 0;
      if ((int)uVar16 <= (int)param_2) {
        uVar13 = (uVar4 << 0x10) >> 0x11;
        uVar11 = (ulong)(uVar13 * 6);
        uVar14 = *(ushort *)((long)puVar1 + uVar8 + uVar11 + 0x10);
        uVar4 = (uint)(uVar14 >> 8) | (uVar14 & 0xff00ff) << 8;
        if (uVar4 == 0) {
          lVar10 = uVar8 + (ulong)(uVar13 << 2) + 0xe;
          uVar13 = CONCAT11(*(undefined1 *)((long)puVar1 + lVar10 + 2),
                            *(undefined1 *)((long)puVar1 + lVar10 + 3)) + param_2;
        }
        else {
          lVar10 = lVar10 + (ulong)uVar4 + (long)(int)((param_2 - uVar16) * 2) + (ulong)uVar9 +
                   uVar11 + uVar8;
          uVar13 = (uint)CONCAT11(*(undefined1 *)(lVar10 + 0x10),*(undefined1 *)(lVar10 + 0x11));
        }
      }
      return uVar13 & 0xffff;
    }
    break;
  case 6:
    uVar9 = (uint)CONCAT11((char)puVar1[3],*(undefined1 *)((long)puVar1 + 7));
    if ((uVar9 <= param_2) &&
       (param_2 < CONCAT11((char)puVar1[4],*(undefined1 *)((long)puVar1 + 9)) + uVar9)) {
      return (uint)CONCAT11(*(undefined1 *)((long)puVar1 + (ulong)((param_2 - uVar9) * 2) + 10),
                            *(undefined1 *)((long)puVar1 + (ulong)((param_2 - uVar9) * 2) + 0xb));
    }
  }
  return 0;
}

