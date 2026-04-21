// functions/00ef8 — 4 functions
#include "libGameKindred.h"




/* WARNING: Type propagation algorithm not settling */

ulong FUN_00ef801c(undefined8 *param_1,int param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,float *param_6,float *param_7,long param_8,int *param_9,int param_10)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  byte bVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  bool bVar8;
  long lVar9;
  float *pfVar10;
  float *pfVar11;
  int *piVar12;
  uint uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  uint local_118;
  int local_114;
  long local_108 [2];
  uint local_f8;
  undefined1 auStack_f4 [4];
  float local_f0;
  undefined1 auStack_ec [4];
  uint *local_e8;
  long local_e0;
  float local_d8 [18];
  long local_90;
  
  lVar5 = tpidr_el0;
  local_90 = *(long *)(lVar5 + 0x28);
  *param_6 = 0.0;
  if (param_9 != (int *)0x0) {
    *param_9 = 0;
  }
  uVar13 = 0x80000008;
  if ((param_2 != 0) && (uVar6 = FUN_00ef34e0(*param_1,param_2), (uVar6 & 1) != 0)) {
    local_114 = 0;
    param_7[0] = 0.0;
    param_7[1] = 0.0;
    local_118 = 0x40000000;
    param_7[2] = 0.0;
    do {
      if (param_2 == 0) {
        uVar13 = local_118;
        if (param_9 != (int *)0x0) {
          *param_9 = local_114;
        }
        break;
      }
      local_e8 = (uint *)0x0;
      local_e0 = 0;
      FUN_00ef3494(*param_1,param_2,&local_e0,&local_e8);
      bVar4 = *(byte *)((long)local_e8 + 0x1e);
      if ((ulong)bVar4 == 0) {
        uVar6 = 0;
      }
      else {
        uVar6 = 0;
        lVar9 = *(long *)(local_e0 + 0x18);
        pfVar10 = local_d8 + 2;
        do {
          lVar1 = uVar6 * 2;
          uVar6 = uVar6 + 1;
          pfVar11 = (float *)(lVar9 + (ulong)*(ushort *)((long)local_e8 + lVar1 + 4) * 0xc);
          pfVar10[-2] = *pfVar11;
          pfVar10[-1] = pfVar11[1];
          *pfVar10 = pfVar11[2];
          pfVar10 = pfVar10 + 3;
        } while (uVar6 < bVar4);
      }
      uVar7 = FUN_00efa63c(param_3,param_4,local_d8,uVar6 & 0xffffffff,auStack_ec,&local_f0,
                           auStack_f4,&local_f8);
      if ((uVar7 & 1) == 0) {
        if (param_9 == (int *)0x0) goto LAB_00ef8480;
LAB_00ef81bc:
        bVar8 = false;
        *param_9 = local_114;
        uVar13 = local_118;
      }
      else {
        if (*param_6 < local_f0) {
          *param_6 = local_f0;
        }
        if (local_114 < param_10) {
          *(int *)(param_8 + (long)local_114 * 4) = param_2;
          local_114 = local_114 + 1;
        }
        else {
          local_118 = local_118 | 0x10;
        }
        if (local_f8 == 0xffffffff) {
          *param_6 = 3.4028235e+38;
          if (param_9 != (int *)0x0) goto LAB_00ef81bc;
LAB_00ef8480:
          bVar8 = false;
          uVar13 = local_118;
        }
        else {
          uVar2 = *local_e8;
          if (uVar2 != 0xffffffff) {
            lVar9 = *(long *)(local_e0 + 0x20);
            do {
              uVar7 = (ulong)uVar2;
              if (local_f8 == *(byte *)(lVar9 + uVar7 * 0xc + 8)) {
                local_108[0] = 0;
                local_108[1] = 0;
                piVar12 = (int *)(lVar9 + uVar7 * 0xc);
                FUN_00ef3494(*param_1,*piVar12,local_108 + 1,local_108);
                if ((((*(byte *)(local_108[0] + 0x1f) & 0xc0) != 0x40) &&
                    ((*(ushort *)(param_5 + 0x100) & *(ushort *)(local_108[0] + 0x1c)) != 0)) &&
                   ((*(ushort *)(param_5 + 0x102) & *(ushort *)(local_108[0] + 0x1c)) == 0)) {
                  bVar4 = *(byte *)(lVar9 + uVar7 * 0xc + 9);
                  if ((bVar4 == 0xff) ||
                     ((*(char *)(lVar9 + uVar7 * 0xc + 10) == '\0' &&
                      (*(char *)(lVar9 + uVar7 * 0xc + 0xb) == -1)))) {
                    iVar3 = *piVar12;
                    if (iVar3 != 0) {
                      bVar8 = true;
                      param_2 = iVar3;
                      goto LAB_00ef8488;
                    }
                    break;
                  }
                  if (bVar4 < 7) {
                    /* WARNING: Could not recover jumptable at 0x00ef8310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    uVar6 = (*(code *)(&DAT_01bf3e80 + *(int *)(&DAT_01bf3e80 + (ulong)bVar4 * 4)))
                                      ();
                    return uVar6;
                  }
                }
                lVar9 = *(long *)(local_e0 + 0x20);
              }
              uVar2 = *(uint *)(lVar9 + uVar7 * 0xc + 4);
            } while (uVar2 != 0xffffffff);
          }
          iVar3 = local_f8 * 3;
          lVar9 = (long)(iVar3 + 3);
          if ((int)uVar6 <= (int)(local_f8 + 1)) {
            lVar9 = 0;
          }
          fVar14 = local_d8[iVar3];
          fVar15 = local_d8[lVar9];
          fVar16 = local_d8[(long)iVar3 + 2];
          fVar17 = local_d8[lVar9 + 2];
          param_7[1] = 0.0;
          fVar15 = fVar15 - fVar14;
          fVar17 = fVar17 - fVar16;
          *param_7 = fVar17;
          param_7[2] = -fVar15;
          fVar14 = (float)FUN_00efa36c(fVar15 * fVar15 + fVar17 * fVar17 + 0.0);
          fVar14 = 1.0 / fVar14;
          bVar8 = false;
          *(ulong *)param_7 =
               CONCAT44((float)((ulong)*(undefined8 *)param_7 >> 0x20) * fVar14,
                        (float)*(undefined8 *)param_7 * fVar14);
          param_7[2] = fVar14 * param_7[2];
          uVar13 = local_118;
          if (param_9 != (int *)0x0) {
            *param_9 = local_114;
          }
        }
      }
LAB_00ef8488:
    } while (bVar8);
  }
  if (*(long *)(lVar5 + 0x28) == local_90) {
    return (ulong)uVar13;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




uint FUN_00ef84e4(float param_1,undefined8 *param_2,int param_3,undefined4 *param_4,long param_5,
                 undefined4 *param_6,undefined4 *param_7,undefined4 *param_8,int *param_9,
                 int param_10)

{
  float fVar1;
  undefined4 uVar2;
  float fVar3;
  long lVar4;
  int iVar5;
  ulong uVar6;
  undefined4 *puVar7;
  long lVar8;
  long *plVar9;
  float *pfVar10;
  undefined8 uVar11;
  uint uVar12;
  float *pfVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  int local_e4;
  uint local_e0;
  undefined1 auStack_dc [4];
  long local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  uint *local_b8;
  long local_b0;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  long local_90;
  
  lVar4 = tpidr_el0;
  local_90 = *(long *)(lVar4 + 0x28);
  local_e0 = 0x80000008;
  *param_9 = 0;
  if ((param_3 != 0) && (uVar6 = FUN_00ef34e0(*param_2,param_3), (uVar6 & 1) != 0)) {
    FUN_00efa084(param_2[10]);
    *(undefined4 *)(param_2[0xb] + 0xc) = 0;
    puVar7 = (undefined4 *)FUN_00efa13c(param_2[10],param_3);
    *puVar7 = *param_4;
    puVar7[1] = param_4[1];
    uVar2 = param_4[2];
    puVar7[5] = 0x40000000;
    puVar7[6] = param_3;
    puVar7[4] = 0;
    puVar7[2] = uVar2;
    puVar7[3] = 0;
    lVar8 = param_2[0xb];
    iVar5 = *(int *)(lVar8 + 0xc);
    *(int *)(lVar8 + 0xc) = iVar5 + 1;
    FUN_00efa24c(lVar8,iVar5,puVar7);
    if (param_10 < 1) {
      local_e4 = 0;
      local_e0 = 0x40000010;
    }
    else {
      if (param_6 != (undefined4 *)0x0) {
        *param_6 = puVar7[6];
      }
      if (param_7 != (undefined4 *)0x0) {
        *param_7 = 0;
      }
      if (param_8 != (undefined4 *)0x0) {
        *param_8 = 0;
      }
      local_e0 = 0x40000000;
      local_e4 = 1;
    }
    plVar9 = (long *)param_2[0xb];
    iVar5 = *(int *)((long)plVar9 + 0xc);
    if (iVar5 != 0) {
      do {
        pfVar13 = *(float **)*plVar9;
        *(int *)((long)plVar9 + 0xc) = iVar5 + -1;
        FUN_00efa2a0(plVar9,0,((long *)*plVar9)[iVar5 + -1]);
        fVar1 = pfVar13[6];
        pfVar13[5] = (float)((uint)pfVar13[5] & 0x3fffffff | 0x80000000);
        local_b8 = (uint *)0x0;
        local_b0 = 0;
        FUN_00ef3494(*param_2,fVar1,&local_b0,&local_b8);
        local_c8 = 0;
        uStack_c0 = 0;
        if (((uint)pfVar13[5] & 0x3fffffff) == 0) {
          fVar14 = 0.0;
        }
        else {
          fVar14 = *(float *)(*(long *)param_2[10] +
                              (ulong)(((uint)pfVar13[5] & 0x3fffffff) - 1) * 0x1c + 0x18);
          if (fVar14 != 0.0) {
            FUN_00ef3494(*param_2,fVar14,&uStack_c0,&local_c8);
          }
        }
        uVar12 = *local_b8;
        if (uVar12 != 0xffffffff) {
          lVar8 = *(long *)(local_b0 + 0x20);
          do {
            fVar3 = *(float *)(lVar8 + (ulong)uVar12 * 0xc);
            if ((fVar3 != 0.0) && (fVar3 != fVar14)) {
              local_d8 = 0;
              local_d0 = 0;
              uVar11 = FUN_00ef3494(*param_2,fVar3,&local_d0,&local_d8);
              if (((*(ushort *)(param_5 + 0x100) & *(ushort *)(local_d8 + 0x1c)) != 0) &&
                 ((((*(ushort *)(param_5 + 0x102) & *(ushort *)(local_d8 + 0x1c)) == 0 &&
                   (iVar5 = FUN_00ef4d34(uVar11,fVar1,local_b8,local_b0,fVar3,local_d8,local_d0,
                                         &local_9c,&local_a8), iVar5 != 0)) &&
                  (fVar15 = (float)FUN_00efa76c(param_4,&local_9c,&local_a8,auStack_dc),
                  fVar15 <= param_1 * param_1)))) {
                pfVar10 = (float *)FUN_00efa13c(param_2[10],fVar3);
                if (pfVar10 == (float *)0x0) {
                  local_e0 = local_e0 | 0x20;
                }
                else if (-1 < (int)pfVar10[5]) {
                  if ((uint)pfVar10[5] >> 0x1e == 0) {
                    fVar15 = local_9c + (local_a8 - local_9c) * 0.5;
                    *pfVar10 = fVar15;
                    fVar16 = local_98 + (local_a4 - local_98) * 0.5;
                    pfVar10[1] = fVar16;
                    fVar17 = local_94 + (local_a0 - local_94) * 0.5;
                    pfVar10[2] = fVar17;
                  }
                  else {
                    fVar15 = *pfVar10;
                    fVar16 = pfVar10[1];
                    fVar17 = pfVar10[2];
                  }
                  fVar18 = pfVar13[4];
                  fVar16 = (float)FUN_00efa36c((fVar15 - *pfVar13) * (fVar15 - *pfVar13) +
                                               (fVar16 - pfVar13[1]) * (fVar16 - pfVar13[1]) +
                                               (fVar17 - pfVar13[2]) * (fVar17 - pfVar13[2]));
                  fVar15 = pfVar10[5];
                  fVar18 = fVar18 + fVar16;
                  if ((((uint)fVar15 >> 0x1e & 1) == 0) || (fVar18 < pfVar10[4])) {
                    pfVar10[5] = ABS(fVar15);
                    pfVar10[6] = fVar3;
                    lVar8 = *(long *)param_2[10];
                    pfVar10[4] = fVar18;
                    fVar16 = (float)(((uint)((ulong)((long)pfVar13 - lVar8) >> 2) & 0x3fffffff) *
                                     -0x49249249 + 1 & 0x3fffffff | (uint)fVar15 & 0x40000000);
                    pfVar10[5] = fVar16;
                    if (((uint)fVar15 & 0x40000000) == 0) {
                      if (local_e4 < param_10) {
                        if (param_6 != (undefined4 *)0x0) {
                          param_6[local_e4] = fVar3;
                        }
                        if (param_7 != (undefined4 *)0x0) {
                          param_7[local_e4] =
                               *(undefined4 *)
                                (*(long *)param_2[10] +
                                 (ulong)(((uint)pfVar10[5] & 0x3fffffff) - 1) * 0x1c + 0x18);
                        }
                        if (param_8 != (undefined4 *)0x0) {
                          param_8[local_e4] = fVar18;
                        }
                        fVar16 = pfVar10[5];
                        local_e4 = local_e4 + 1;
                      }
                      else {
                        local_e0 = local_e0 | 0x10;
                      }
                      pfVar10[5] = (float)((uint)fVar16 & 0x3fffffff | 0x40000000);
                      plVar9 = (long *)param_2[0xb];
                      uVar6 = (ulong)*(uint *)((long)plVar9 + 0xc);
                      *(uint *)((long)plVar9 + 0xc) = *(uint *)((long)plVar9 + 0xc) + 1;
LAB_00ef88e8:
                      FUN_00efa24c(plVar9,uVar6,pfVar10);
                    }
                    else {
                      plVar9 = (long *)param_2[0xb];
                      if (0 < *(int *)((long)plVar9 + 0xc)) {
                        uVar6 = 0;
                        do {
                          if (*(float **)(*plVar9 + uVar6 * 8) == pfVar10) goto LAB_00ef88e8;
                          uVar6 = uVar6 + 1;
                        } while ((long)uVar6 < (long)*(int *)((long)plVar9 + 0xc));
                      }
                    }
                  }
                }
              }
              lVar8 = *(long *)(local_b0 + 0x20);
            }
            uVar12 = *(uint *)(lVar8 + (ulong)uVar12 * 0xc + 4);
          } while (uVar12 != 0xffffffff);
        }
        plVar9 = (long *)param_2[0xb];
        iVar5 = *(int *)((long)plVar9 + 0xc);
      } while (iVar5 != 0);
    }
    *param_9 = local_e4;
  }
  if (*(long *)(lVar4 + 0x28) == local_90) {
    return local_e0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




uint FUN_00ef89bc(undefined8 *param_1,int param_2,long param_3,uint param_4,long param_5,
                 undefined4 *param_6,undefined4 *param_7,undefined4 *param_8,int *param_9,
                 int param_10)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long lVar5;
  long *plVar6;
  float *pfVar7;
  uint uVar8;
  ulong uVar9;
  float *pfVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined8 uVar17;
  float fVar18;
  int local_f4;
  uint local_ec;
  undefined1 auStack_e8 [4];
  undefined1 auStack_e4 [4];
  float local_e0;
  float local_dc;
  long local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  uint *local_b8;
  long local_b0;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  long local_90;
  
  lVar1 = tpidr_el0;
  local_90 = *(long *)(lVar1 + 0x28);
  local_ec = 0x80000008;
  *param_9 = 0;
  if ((param_2 != 0) && (uVar3 = FUN_00ef34e0(*param_1,param_2), (uVar3 & 1) != 0)) {
    FUN_00efa084(param_1[10]);
    *(undefined4 *)(param_1[0xb] + 0xc) = 0;
    if ((int)param_4 < 1) {
      fVar11 = 0.0;
      fVar12 = 0.0;
      fVar13 = 0.0;
    }
    else {
      uVar3 = 0;
      uVar9 = (ulong)param_4;
      fVar11 = 0.0;
      fVar12 = 0.0;
      fVar13 = 0.0;
      do {
        puVar4 = (undefined8 *)(param_3 + (uVar3 & 0xffffffff) * 4);
        uVar17 = *puVar4;
        uVar9 = uVar9 - 1;
        uVar3 = uVar3 + 3;
        fVar11 = fVar11 + (float)uVar17;
        fVar12 = fVar12 + (float)((ulong)uVar17 >> 0x20);
        fVar13 = fVar13 + *(float *)(puVar4 + 1);
      } while (uVar9 != 0);
    }
    fVar15 = 1.0 / (float)(int)param_4;
    puVar4 = (undefined8 *)FUN_00efa13c(param_1[10],param_2);
    *puVar4 = CONCAT44(fVar12 * fVar15,fVar11 * fVar15);
    *(float *)(puVar4 + 1) = fVar15 * fVar13;
    *(undefined4 *)((long)puVar4 + 0xc) = 0;
    *(undefined4 *)(puVar4 + 2) = 0;
    *(undefined4 *)((long)puVar4 + 0x14) = 0x40000000;
    *(int *)(puVar4 + 3) = param_2;
    lVar5 = param_1[0xb];
    iVar2 = *(int *)(lVar5 + 0xc);
    *(int *)(lVar5 + 0xc) = iVar2 + 1;
    FUN_00efa24c(lVar5,iVar2,puVar4);
    if (param_10 < 1) {
      local_f4 = 0;
      local_ec = 0x40000010;
    }
    else {
      if (param_6 != (undefined4 *)0x0) {
        *param_6 = *(undefined4 *)(puVar4 + 3);
      }
      if (param_7 != (undefined4 *)0x0) {
        *param_7 = 0;
      }
      if (param_8 != (undefined4 *)0x0) {
        *param_8 = 0;
      }
      local_ec = 0x40000000;
      local_f4 = 1;
    }
    plVar6 = (long *)param_1[0xb];
    iVar2 = *(int *)((long)plVar6 + 0xc);
    while (iVar2 != 0) {
      pfVar10 = *(float **)*plVar6;
      *(int *)((long)plVar6 + 0xc) = iVar2 + -1;
      FUN_00efa2a0(plVar6,0,((long *)*plVar6)[iVar2 + -1]);
      fVar11 = pfVar10[6];
      pfVar10[5] = (float)((uint)pfVar10[5] & 0x3fffffff | 0x80000000);
      local_b8 = (uint *)0x0;
      local_b0 = 0;
      FUN_00ef3494(*param_1,fVar11,&local_b0,&local_b8);
      local_c8 = 0;
      uStack_c0 = 0;
      if (((uint)pfVar10[5] & 0x3fffffff) == 0) {
        fVar12 = 0.0;
      }
      else {
        fVar12 = *(float *)(*(long *)param_1[10] +
                            (ulong)(((uint)pfVar10[5] & 0x3fffffff) - 1) * 0x1c + 0x18);
        if (fVar12 != 0.0) {
          FUN_00ef3494(*param_1,fVar12,&uStack_c0,&local_c8);
        }
      }
      uVar8 = *local_b8;
      if (uVar8 != 0xffffffff) {
        lVar5 = *(long *)(local_b0 + 0x20);
        do {
          fVar13 = *(float *)(lVar5 + (ulong)uVar8 * 0xc);
          if ((fVar13 != 0.0) && (fVar13 != fVar12)) {
            local_d8 = 0;
            local_d0 = 0;
            uVar17 = FUN_00ef3494(*param_1,fVar13,&local_d0,&local_d8);
            if (((*(ushort *)(param_5 + 0x100) & *(ushort *)(local_d8 + 0x1c)) != 0) &&
               (((((*(ushort *)(param_5 + 0x102) & *(ushort *)(local_d8 + 0x1c)) == 0 &&
                  (iVar2 = FUN_00ef4d34(uVar17,fVar11,local_b8,local_b0,fVar13,local_d8,local_d0,
                                        &local_9c,&local_a8), iVar2 != 0)) &&
                 (uVar3 = FUN_00efa63c(&local_9c,&local_a8,param_3,param_4,&local_dc,&local_e0,
                                       auStack_e4,auStack_e8), (uVar3 & 1) != 0)) &&
                ((local_dc <= 1.0 && (0.0 <= local_e0)))))) {
              pfVar7 = (float *)FUN_00efa13c(param_1[10],fVar13);
              if (pfVar7 == (float *)0x0) {
                local_ec = local_ec | 0x20;
              }
              else if (-1 < (int)pfVar7[5]) {
                if ((uint)pfVar7[5] >> 0x1e == 0) {
                  fVar15 = local_9c + (local_a8 - local_9c) * 0.5;
                  *pfVar7 = fVar15;
                  fVar14 = local_98 + (local_a4 - local_98) * 0.5;
                  pfVar7[1] = fVar14;
                  fVar16 = local_94 + (local_a0 - local_94) * 0.5;
                  pfVar7[2] = fVar16;
                }
                else {
                  fVar15 = *pfVar7;
                  fVar14 = pfVar7[1];
                  fVar16 = pfVar7[2];
                }
                fVar18 = pfVar10[4];
                fVar14 = (float)FUN_00efa36c((fVar15 - *pfVar10) * (fVar15 - *pfVar10) +
                                             (fVar14 - pfVar10[1]) * (fVar14 - pfVar10[1]) +
                                             (fVar16 - pfVar10[2]) * (fVar16 - pfVar10[2]));
                fVar15 = pfVar7[5];
                fVar18 = fVar18 + fVar14;
                if ((((uint)fVar15 >> 0x1e & 1) == 0) || (fVar18 < pfVar7[4])) {
                  pfVar7[5] = ABS(fVar15);
                  pfVar7[6] = fVar13;
                  lVar5 = *(long *)param_1[10];
                  pfVar7[4] = fVar18;
                  fVar14 = (float)(((uint)((ulong)((long)pfVar10 - lVar5) >> 2) & 0x3fffffff) *
                                   -0x49249249 + 1 & 0x3fffffff | (uint)fVar15 & 0x40000000);
                  pfVar7[5] = fVar14;
                  if (((uint)fVar15 & 0x40000000) == 0) {
                    if (local_f4 < param_10) {
                      if (param_6 != (undefined4 *)0x0) {
                        param_6[local_f4] = fVar13;
                      }
                      if (param_7 != (undefined4 *)0x0) {
                        param_7[local_f4] =
                             *(undefined4 *)
                              (*(long *)param_1[10] +
                               (ulong)(((uint)pfVar7[5] & 0x3fffffff) - 1) * 0x1c + 0x18);
                      }
                      if (param_8 != (undefined4 *)0x0) {
                        param_8[local_f4] = fVar18;
                      }
                      fVar14 = pfVar7[5];
                      local_f4 = local_f4 + 1;
                    }
                    else {
                      local_ec = local_ec | 0x10;
                    }
                    pfVar7[5] = (float)((uint)fVar14 & 0x3fffffff | 0x40000000);
                    plVar6 = (long *)param_1[0xb];
                    uVar3 = (ulong)*(uint *)((long)plVar6 + 0xc);
                    *(uint *)((long)plVar6 + 0xc) = *(uint *)((long)plVar6 + 0xc) + 1;
LAB_00ef8e40:
                    FUN_00efa24c(plVar6,uVar3,pfVar7);
                  }
                  else {
                    plVar6 = (long *)param_1[0xb];
                    if (0 < *(int *)((long)plVar6 + 0xc)) {
                      uVar3 = 0;
                      do {
                        if (*(float **)(*plVar6 + uVar3 * 8) == pfVar7) goto LAB_00ef8e40;
                        uVar3 = uVar3 + 1;
                      } while ((long)uVar3 < (long)*(int *)((long)plVar6 + 0xc));
                    }
                  }
                }
              }
            }
            lVar5 = *(long *)(local_b0 + 0x20);
          }
          uVar8 = *(uint *)(lVar5 + (ulong)uVar8 * 0xc + 4);
        } while (uVar8 != 0xffffffff);
      }
      plVar6 = (long *)param_1[0xb];
      iVar2 = *(int *)((long)plVar6 + 0xc);
    }
    *param_9 = local_f4;
  }
  if (*(long *)(lVar1 + 0x28) == local_90) {
    return local_ec;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




uint FUN_00ef8f14(float param_1,undefined8 *param_2,int param_3,undefined8 param_4,long param_5,
                 int *param_6,undefined4 *param_7,int *param_8,int param_9)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  byte bVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  uint uVar9;
  ulong uVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  ushort *puVar16;
  undefined4 *puVar17;
  undefined4 *puVar18;
  uint uVar19;
  uint uVar20;
  float fVar21;
  uint local_31c;
  long local_2e0;
  long local_2d8;
  undefined1 auStack_2cc [4];
  long local_2c8;
  long local_2c0;
  uint *local_2b8;
  long local_2b0;
  undefined1 auStack_2a8 [12];
  undefined1 auStack_29c [12];
  undefined1 local_290 [8];
  undefined4 auStack_288 [16];
  undefined1 local_248 [8];
  undefined4 auStack_240 [16];
  long local_200 [48];
  long local_80;
  
  lVar6 = tpidr_el0;
  local_80 = *(long *)(lVar6 + 0x28);
  local_31c = 0x80000008;
  *param_8 = 0;
  if ((param_3 != 0) && (uVar10 = FUN_00ef34e0(*param_2,param_3), (uVar10 & 1) != 0)) {
    FUN_00efa084(param_2[9]);
    local_200[0] = FUN_00efa13c(param_2[9],param_3);
    *(undefined4 *)(local_200[0] + 0x14) = 0x80000000;
    *(int *)(local_200[0] + 0x18) = param_3;
    if (param_9 < 1) {
      iVar1 = 0;
      local_31c = 0x40000010;
    }
    else {
      *param_6 = param_3;
      if (param_7 != (undefined4 *)0x0) {
        *param_7 = 0;
      }
      local_31c = 0x40000000;
      iVar1 = 1;
    }
    uVar19 = 1;
    do {
      lVar7 = local_200[0];
      uVar20 = uVar19 - 1;
      if (1 < (int)uVar19) {
        uVar10 = (ulong)uVar20;
        plVar14 = local_200;
        do {
          plVar14 = plVar14 + 1;
          uVar10 = uVar10 - 1;
          plVar14[-1] = *plVar14;
        } while (uVar10 != 0);
      }
      uVar2 = *(undefined4 *)(local_200[0] + 0x18);
      local_2b8 = (uint *)0x0;
      local_2b0 = 0;
      FUN_00ef3494(*param_2,uVar2,&local_2b0,&local_2b8);
      uVar3 = *local_2b8;
      uVar19 = uVar20;
      if (uVar3 != 0xffffffff) {
        lVar15 = *(long *)(local_2b0 + 0x20);
        do {
          iVar4 = *(int *)(lVar15 + (ulong)uVar3 * 0xc);
          if (((iVar4 != 0) && (lVar15 = FUN_00efa13c(param_2[9],iVar4), lVar15 != 0)) &&
             (-1 < *(int *)(lVar15 + 0x14))) {
            local_2c8 = 0;
            local_2c0 = 0;
            uVar11 = FUN_00ef3494(*param_2,iVar4,&local_2c0,&local_2c8);
            if ((((*(byte *)(local_2c8 + 0x1f) & 0xc0) != 0x40) &&
                ((*(ushort *)(param_5 + 0x100) & *(ushort *)(local_2c8 + 0x1c)) != 0)) &&
               (((*(ushort *)(param_5 + 0x102) & *(ushort *)(local_2c8 + 0x1c)) == 0 &&
                ((iVar8 = FUN_00ef4d34(uVar11,uVar2,local_2b8,local_2b0,iVar4,local_2c8,local_2c0,
                                       auStack_29c,auStack_2a8), iVar8 != 0 &&
                 (fVar21 = (float)FUN_00efa76c(param_4,auStack_29c,auStack_2a8,auStack_2cc),
                 fVar21 <= param_1 * param_1)))))) {
              uVar20 = *(uint *)(lVar15 + 0x14);
              *(uint *)(lVar15 + 0x14) = uVar20 & 0x40000000 | 0x80000000 | uVar20 & 0x3fffffff;
              *(uint *)(lVar15 + 0x14) =
                   uVar20 & 0x40000000 | 0x80000000 |
                   ((uint)((ulong)(lVar7 - *(long *)param_2[9]) >> 2) & 0x3fffffff) * -0x49249249 +
                   1 & 0x3fffffff;
              bVar5 = *(byte *)(local_2c8 + 0x1e);
              uVar10 = (ulong)bVar5;
              if (bVar5 != 0) {
                lVar12 = *(long *)(local_2c0 + 0x18);
                puVar16 = (ushort *)(local_2c8 + 4);
                puVar17 = auStack_240;
                do {
                  uVar10 = uVar10 - 1;
                  puVar18 = (undefined4 *)(lVar12 + (ulong)*puVar16 * 0xc);
                  puVar17[-2] = *puVar18;
                  puVar17[-1] = puVar18[1];
                  *puVar17 = puVar18[2];
                  puVar16 = puVar16 + 1;
                  puVar17 = puVar17 + 3;
                } while (uVar10 != 0);
              }
              if (0 < iVar1) {
                lVar12 = 0;
                uVar20 = 0;
                do {
                  uVar9 = *local_2b8;
                  if (uVar9 != 0xffffffff) {
                    do {
                      if (*(int *)(*(long *)(local_2b0 + 0x20) + (ulong)uVar9 * 0xc) ==
                          param_6[lVar12]) goto LAB_00ef922c;
                      uVar9 = *(uint *)(*(long *)(local_2b0 + 0x20) + (ulong)uVar9 * 0xc + 4);
                    } while (uVar9 != 0xffffffff);
                  }
                  local_2e0 = 0;
                  local_2d8 = 0;
                  FUN_00ef3494(*param_2,param_6[lVar12],&local_2d8,&local_2e0);
                  uVar10 = (ulong)*(byte *)(local_2e0 + 0x1e);
                  if (*(byte *)(local_2e0 + 0x1e) != 0) {
                    lVar13 = *(long *)(local_2d8 + 0x18);
                    puVar16 = (ushort *)(local_2e0 + 4);
                    puVar17 = auStack_288;
                    do {
                      uVar10 = uVar10 - 1;
                      puVar18 = (undefined4 *)(lVar13 + (ulong)*puVar16 * 0xc);
                      puVar17[-2] = *puVar18;
                      puVar17[-1] = puVar18[1];
                      *puVar17 = puVar18[2];
                      puVar16 = puVar16 + 1;
                      puVar17 = puVar17 + 3;
                    } while (uVar10 != 0);
                  }
                  uVar9 = FUN_00efab3c(local_248,bVar5,local_290);
                  if ((uVar9 & 1) != 0) goto LAB_00ef9330;
                  uVar20 = uVar20 | uVar9;
LAB_00ef922c:
                  lVar12 = lVar12 + 1;
                } while (lVar12 < iVar1);
                if ((uVar20 & 1) != 0) goto LAB_00ef9330;
              }
              if (iVar1 < param_9) {
                param_6[iVar1] = iVar4;
                if (param_7 != (undefined4 *)0x0) {
                  param_7[iVar1] = uVar2;
                }
                iVar1 = iVar1 + 1;
              }
              else {
                local_31c = local_31c | 0x10;
              }
              if ((int)uVar19 < 0x30) {
                local_200[(int)uVar19] = lVar15;
                uVar19 = uVar19 + 1;
              }
            }
          }
LAB_00ef9330:
          lVar15 = *(long *)(local_2b0 + 0x20);
          uVar3 = *(uint *)(lVar15 + (ulong)uVar3 * 0xc + 4);
        } while (uVar3 != 0xffffffff);
      }
    } while (uVar19 != 0);
    *param_8 = iVar1;
  }
  if (*(long *)(lVar6 + 0x28) == local_80) {
    return local_31c;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

