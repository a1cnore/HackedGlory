// functions/00ef7 — 4 functions
#include "libGameKindred.h"




uint FUN_00ef7188(undefined8 param_1,undefined8 param_2,undefined8 param_3,int *param_4,int param_5,
                 undefined8 param_6,undefined8 param_7,undefined8 param_8,int *param_9,int param_10,
                 uint param_11)

{
  uint uVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  uint uVar10;
  undefined8 uVar11;
  ulong uVar12;
  int iVar13;
  long lVar14;
  float extraout_s0;
  undefined8 in_stack_fffffffffffffeb0;
  undefined4 uVar17;
  undefined8 uVar15;
  int *piVar16;
  int local_114;
  undefined8 local_110;
  int local_108;
  int local_104;
  int local_100;
  int local_fc;
  undefined1 auStack_ec [4];
  byte local_e8 [4];
  undefined1 local_e4 [4];
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  float fStack_c4;
  float local_c0;
  float local_b8;
  float fStack_b4;
  float local_b0;
  float local_a8;
  float fStack_a4;
  float local_a0;
  float local_98;
  float fStack_94;
  float local_90;
  float local_8c;
  float fStack_88;
  float local_84;
  long local_80;
  
  uVar17 = (undefined4)((ulong)in_stack_fffffffffffffeb0 >> 0x20);
  lVar2 = tpidr_el0;
  local_80 = *(long *)(lVar2 + 0x28);
  uVar10 = 0x80000008;
  *param_9 = 0;
  if (((param_10 == 0) || (*param_4 == 0)) ||
     (iVar9 = FUN_00ef539c(param_1,*param_4,param_2,&local_8c), iVar9 < 0)) goto LAB_00ef78b0;
  uVar11 = FUN_00ef539c(param_1,param_4[param_5 + -1],param_3,&local_98);
  if ((int)uVar11 < 0) {
    uVar12 = 0x80000008;
  }
  else {
    uVar15 = CONCAT44(uVar17,param_10);
    uVar12 = FUN_00ef6de4(uVar11,&local_8c,1,*param_4,param_6,param_7,param_8,param_9,uVar15);
    uVar17 = (undefined4)((ulong)uVar15 >> 0x20);
    if ((int)uVar12 == 0x20000000) {
      if (1 < param_5) {
        local_110 = 0;
        local_a8 = local_8c;
        fStack_a4 = fStack_88;
        local_b8 = local_8c;
        fStack_b4 = fStack_88;
        local_c8 = local_8c;
        fStack_c4 = fStack_88;
        uVar1 = param_11 & 3;
        local_104 = 0;
        local_100 = 0;
        local_a0 = local_84;
        local_b0 = local_84;
        local_c0 = local_84;
        local_108 = *param_4;
        iVar9 = 0;
        local_114 = 0;
        local_fc = local_108;
        do {
          lVar14 = (long)iVar9;
          iVar13 = (int)(lVar14 + 1);
          if (iVar13 < param_5) {
            uVar12 = FUN_00ef78ec(param_1,param_4[lVar14],param_4[lVar14 + 1],&local_d4,&local_e0,
                                  local_e4,local_e8);
            uVar17 = (undefined4)((ulong)uVar15 >> 0x20);
            if ((int)uVar12 < 0) {
              uVar11 = FUN_00ef539c(param_1,param_4[lVar14],param_3,&local_98);
              if (-1 < (int)uVar11) {
                if (uVar1 != 0) {
                  piVar16 = param_9;
                  uVar11 = FUN_00ef6f84(param_1,local_114,iVar9,&local_98,param_4,param_6,param_7,
                                        param_8,param_9,param_10,param_11);
                  uVar17 = (undefined4)((ulong)piVar16 >> 0x20);
                }
                FUN_00ef6de4(uVar11,&local_98,0,param_4[lVar14],param_6,param_7,param_8,param_9,
                             CONCAT44(uVar17,param_10));
                uVar10 = 0x40000040;
                if (param_10 <= *param_9) {
                  uVar10 = 0x40000050;
                }
              }
              goto LAB_00ef78a8;
            }
            if ((iVar9 != 0) ||
               (uVar12 = FUN_00efa76c(&local_a8,&local_d4,&local_e0,auStack_ec),
               1.0000001e-06 <= extraout_s0)) goto LAB_00ef73a0;
            iVar9 = 0;
            fVar3 = local_c8;
            fVar4 = fStack_c4;
            fVar5 = local_c0;
            fVar6 = local_b8;
            fVar7 = fStack_b4;
            fVar8 = local_b0;
          }
          else {
            local_e8[0] = 0;
            local_e4[0] = 0;
            local_d4 = local_98;
            local_d0 = fStack_94;
            local_cc = local_90;
            local_e0 = local_98;
            local_dc = fStack_94;
            local_d8 = local_90;
LAB_00ef73a0:
            if ((local_c0 - local_a0) * (local_e0 - local_a8) -
                (local_c8 - local_a8) * (local_d8 - local_a0) <= 0.0) {
              if (((DAT_03210cd0 & 1) == 0) &&
                 (uVar12 = __cxa_guard_acquire(&DAT_03210cd0), (int)uVar12 != 0)) {
                DAT_03210cc8 = 3.7252903e-09;
                uVar12 = __cxa_guard_release(&DAT_03210cd0);
              }
              uVar17 = (undefined4)((ulong)uVar15 >> 0x20);
              if (((local_c8 - local_a8) * (local_c8 - local_a8) +
                   (fStack_c4 - fStack_a4) * (fStack_c4 - fStack_a4) +
                   (local_c0 - local_a0) * (local_c0 - local_a0) < DAT_03210cc8) ||
                 (0.0 < (local_b0 - local_a0) * (local_e0 - local_a8) -
                        (local_b8 - local_a8) * (local_d8 - local_a0))) {
                local_fc = 0;
                local_c0 = local_d8;
                local_c8 = local_e0;
                fStack_c4 = local_dc;
                if (iVar13 < param_5) {
                  local_fc = param_4[iVar13];
                }
                local_110 = (ulong)CONCAT14(local_e8[0],(int)local_110);
                local_100 = iVar9;
                goto LAB_00ef749c;
              }
              if (uVar1 == 0) {
LAB_00ef7658:
                local_a8 = local_b8;
                fStack_a4 = fStack_b4;
                local_a0 = local_b0;
                iVar9 = 2;
                if (local_108 != 0) {
                  iVar9 = (uint)((int)local_110 == 1) << 2;
                }
                uVar15 = CONCAT44(uVar17,param_10);
                uVar12 = FUN_00ef6de4(uVar12,&local_a8,iVar9,local_108,param_6,param_7,param_8,
                                      param_9,uVar15);
                if ((int)uVar12 == 0x20000000) {
                  local_100 = local_104;
                  iVar9 = local_104;
                  local_114 = local_100;
                  fVar3 = local_a8;
                  fVar4 = fStack_a4;
                  fVar5 = local_a0;
                  fVar6 = local_a8;
                  fVar7 = fStack_a4;
                  fVar8 = local_a0;
                  goto LAB_00ef7768;
                }
              }
              else {
                piVar16 = param_9;
                uVar12 = FUN_00ef6f84(param_1,local_114,local_104,&local_b8,param_4,param_6,param_7,
                                      param_8,param_9,param_10,param_11);
                uVar17 = (undefined4)((ulong)piVar16 >> 0x20);
                if ((int)uVar12 == 0x20000000) goto LAB_00ef7658;
              }
LAB_00ef78a4:
              uVar10 = (uint)uVar12;
              goto LAB_00ef78a8;
            }
LAB_00ef749c:
            fVar3 = local_c8;
            fVar4 = fStack_c4;
            fVar5 = local_c0;
            fVar6 = local_b8;
            fVar7 = fStack_b4;
            fVar8 = local_b0;
            if (0.0 <= (local_b0 - local_a0) * (local_d4 - local_a8) -
                       (local_b8 - local_a8) * (local_cc - local_a0)) {
              if (((DAT_03210cd0 & 1) == 0) &&
                 (uVar12 = __cxa_guard_acquire(&DAT_03210cd0), (int)uVar12 != 0)) {
                DAT_03210cc8 = 3.7252903e-09;
                uVar12 = __cxa_guard_release(&DAT_03210cd0);
              }
              uVar17 = (undefined4)((ulong)uVar15 >> 0x20);
              if (((local_b8 - local_a8) * (local_b8 - local_a8) +
                   (fStack_b4 - fStack_a4) * (fStack_b4 - fStack_a4) +
                   (local_b0 - local_a0) * (local_b0 - local_a0) < DAT_03210cc8) ||
                 ((local_c0 - local_a0) * (local_d4 - local_a8) -
                  (local_c8 - local_a8) * (local_cc - local_a0) < 0.0)) {
                local_108 = 0;
                local_b0 = local_cc;
                local_b8 = local_d4;
                fStack_b4 = local_d0;
                if (iVar13 < param_5) {
                  local_108 = param_4[iVar13];
                }
                local_110 = CONCAT44(local_110._4_4_,(uint)local_e8[0]);
                local_104 = iVar9;
                fVar3 = local_c8;
                fVar4 = fStack_c4;
                fVar5 = local_c0;
                fVar6 = local_b8;
                fVar7 = fStack_b4;
                fVar8 = local_b0;
              }
              else {
                if (uVar1 != 0) {
                  piVar16 = param_9;
                  uVar12 = FUN_00ef6f84(param_1,local_114,local_100,&local_c8,param_4,param_6,
                                        param_7,param_8,param_9,param_10,param_11);
                  uVar17 = (undefined4)((ulong)piVar16 >> 0x20);
                  if ((int)uVar12 != 0x20000000) goto LAB_00ef78a4;
                }
                local_a8 = local_c8;
                fStack_a4 = fStack_c4;
                local_a0 = local_c0;
                iVar9 = 2;
                if (local_fc != 0) {
                  iVar9 = (uint)(local_110._4_4_ == 1) << 2;
                }
                uVar15 = CONCAT44(uVar17,param_10);
                uVar12 = FUN_00ef6de4(uVar12,&local_a8,iVar9,local_fc,param_6,param_7,param_8,
                                      param_9,uVar15);
                iVar9 = local_100;
                local_114 = local_100;
                local_104 = local_100;
                fVar3 = local_a8;
                fVar4 = fStack_a4;
                fVar5 = local_a0;
                fVar6 = local_a8;
                fVar7 = fStack_a4;
                fVar8 = local_a0;
                if ((int)uVar12 != 0x20000000) goto LAB_00ef78a4;
              }
            }
          }
LAB_00ef7768:
          local_b0 = fVar8;
          fStack_b4 = fVar7;
          local_b8 = fVar6;
          local_c0 = fVar5;
          fStack_c4 = fVar4;
          local_c8 = fVar3;
          uVar17 = (undefined4)((ulong)uVar15 >> 0x20);
          iVar9 = iVar9 + 1;
        } while (iVar9 < param_5);
        if (uVar1 != 0) {
          piVar16 = param_9;
          uVar12 = FUN_00ef6f84(param_1,local_114,param_5 + -1,&local_98,param_4,param_6,param_7,
                                param_8,param_9,param_10,param_11);
          uVar17 = (undefined4)((ulong)piVar16 >> 0x20);
          uVar10 = (uint)uVar12;
          if ((uint)uVar12 != 0x20000000) {
LAB_00ef78a8:
            uVar12 = (ulong)uVar10;
            goto LAB_00ef78ac;
          }
        }
      }
      FUN_00ef6de4(uVar12,&local_98,2,0,param_6,param_7,param_8,param_9,CONCAT44(uVar17,param_10));
      uVar10 = 0x40000000;
      if (param_10 <= *param_9) {
        uVar10 = 0x40000010;
      }
      uVar12 = (ulong)uVar10;
    }
  }
LAB_00ef78ac:
  uVar10 = (uint)uVar12;
LAB_00ef78b0:
  if (*(long *)(lVar2 + 0x28) == local_80) {
    return uVar10;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined4
FUN_00ef78ec(undefined8 *param_1,ulong param_2,undefined4 param_3,undefined8 param_4,
            undefined8 param_5,byte *param_6,byte *param_7)

{
  long lVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  long local_88;
  undefined8 uStack_80;
  long local_78;
  undefined8 uStack_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  local_78 = 0;
  uStack_70 = 0;
  uVar3 = 0x80000008;
  iVar2 = FUN_00ef33d4(*param_1,param_2,&uStack_70,&local_78);
  if (-1 < iVar2) {
    *param_6 = *(byte *)(local_78 + 0x1f) >> 6;
    local_88 = 0;
    uStack_80 = 0;
    uVar4 = FUN_00ef33d4(*param_1,param_3,&uStack_80,&local_88);
    if (-1 < (int)uVar4) {
      *param_7 = *(byte *)(local_88 + 0x1f) >> 6;
      uVar3 = FUN_00ef4d34(uVar4,param_2 & 0xffffffff,local_78,uStack_70,param_3,local_88,uStack_80,
                           param_4,param_5);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined4
FUN_00ef79e4(undefined8 *param_1,int param_2,undefined8 *param_3,undefined8 *param_4,long param_5,
            undefined8 *param_6,long param_7,int *param_8,int param_9)

{
  ushort uVar1;
  ushort uVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  uint uVar11;
  ulong *puVar12;
  float *pfVar13;
  float *pfVar14;
  uint uVar15;
  undefined4 uVar16;
  uint *puVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  uint uVar20;
  uint uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  ulong local_2c8;
  float local_2bc;
  ulong local_2b0;
  long local_2a8;
  undefined8 local_2a0;
  uint *local_298;
  long local_290;
  uint local_288 [8];
  undefined8 local_268;
  float afStack_260 [16];
  undefined8 local_220;
  float local_218;
  ulong local_210 [48];
  long local_90;
  
  lVar3 = tpidr_el0;
  local_90 = *(long *)(lVar3 + 0x28);
  uVar16 = 0x80000008;
  *param_8 = 0;
  if ((param_2 != 0) && (uVar5 = FUN_00ef34e0(*param_1,param_2), (uVar5 & 1) != 0)) {
    FUN_00efa084(param_1[9]);
    local_2b0 = FUN_00efa13c(param_1[9],param_2);
    *(undefined4 *)(local_2b0 + 0xc) = 0;
    *(undefined4 *)(local_2b0 + 0x10) = 0;
    *(undefined4 *)(local_2b0 + 0x14) = 0x80000000;
    *(int *)(local_2b0 + 0x18) = param_2;
    uVar27 = *param_3;
    local_2bc = *(float *)(param_3 + 1);
    fVar22 = (float)*param_4 - (float)uVar27;
    fVar24 = (float)((ulong)uVar27 >> 0x20);
    fVar23 = (float)((ulong)*param_4 >> 0x20) - fVar24;
    local_220 = CONCAT44(fVar23 * 0.5 + fVar24,fVar22 * 0.5 + (float)uVar27);
    fVar24 = *(float *)(param_4 + 1) - local_2bc;
    local_218 = fVar24 * 0.5 + local_2bc;
    local_210[0] = local_2b0;
    fVar23 = (float)FUN_00efa36c(fVar22 * fVar22 + fVar23 * fVar23 + fVar24 * fVar24);
    fVar22 = 3.4028235e+38;
    fVar23 = fVar23 * 0.5 + 0.001;
    local_2c8 = 0;
    uVar4 = 1;
    while( true ) {
      uVar15 = uVar4 - 1;
      if (1 < (int)uVar4) {
        uVar5 = (ulong)uVar15;
        puVar12 = local_210;
        do {
          puVar12 = puVar12 + 1;
          uVar5 = uVar5 - 1;
          puVar12[-1] = *puVar12;
        } while (uVar5 != 0);
      }
      local_298 = (uint *)0x0;
      local_290 = 0;
      FUN_00ef3494(*param_1,*(undefined4 *)(local_2b0 + 0x18),&local_290,&local_298);
      uVar5 = (ulong)*(byte *)((long)local_298 + 0x1e);
      if (*(byte *)((long)local_298 + 0x1e) != 0) {
        lVar9 = *(long *)(local_290 + 0x18);
        puVar17 = local_298 + 1;
        pfVar13 = afStack_260;
        do {
          uVar5 = uVar5 - 1;
          pfVar14 = (float *)(lVar9 + (ulong)(ushort)*puVar17 * 0xc);
          pfVar13[-2] = *pfVar14;
          pfVar13[-1] = pfVar14[1];
          *pfVar13 = pfVar14[2];
          puVar17 = (uint *)((long)puVar17 + 2);
          pfVar13 = pfVar13 + 3;
        } while (uVar5 != 0);
      }
      uVar5 = FUN_00efa9a8(param_4,&local_268);
      if ((uVar5 & 1) != 0) break;
      if (*(byte *)((long)local_298 + 0x1e) != 0) {
        uVar4 = *(byte *)((long)local_298 + 0x1e) - 1;
        uVar5 = 0;
        do {
          uVar1 = *(ushort *)((long)local_298 + (long)(int)uVar4 * 2 + 0x10);
          lVar9 = (long)(int)uVar4;
          if ((short)uVar1 < 0) {
            uVar11 = *local_298;
            if (uVar11 != 0xffffffff) {
              uVar20 = 0;
              lVar8 = *(long *)(local_290 + 0x20);
              do {
                if (uVar4 == *(byte *)(lVar8 + (ulong)uVar11 * 0xc + 8)) {
                  puVar17 = (uint *)(lVar8 + (ulong)uVar11 * 0xc);
                  uVar21 = *puVar17;
                  if (uVar21 != 0) {
                    local_2a8 = 0;
                    local_2a0 = 0;
                    FUN_00ef3494(*param_1,uVar21,&local_2a0,&local_2a8);
                    uVar21 = uVar20;
                    if ((((*(ushort *)(param_5 + 0x100) & *(ushort *)(local_2a8 + 0x1c)) != 0) &&
                        ((int)uVar20 < 8)) &&
                       ((*(ushort *)(param_5 + 0x102) & *(ushort *)(local_2a8 + 0x1c)) == 0)) {
                      uVar21 = uVar20 + 1;
                      local_288[(int)uVar20] = *puVar17;
                    }
                    lVar8 = *(long *)(local_290 + 0x20);
                    uVar20 = uVar21;
                  }
                }
                uVar11 = *(uint *)(lVar8 + (ulong)uVar11 * 0xc + 4);
              } while (uVar11 != 0xffffffff);
              if (uVar20 != 0) {
                if (0 < (int)uVar20) goto LAB_00ef7c54;
                goto LAB_00ef7d70;
              }
            }
LAB_00ef7d0c:
            puVar18 = (undefined8 *)((long)&local_268 + lVar9 * 0xc);
            puVar19 = (undefined8 *)((long)&local_268 + uVar5 * 0xc);
            fVar24 = (float)FUN_00efa76c(param_4,puVar18,puVar19,&local_2a0);
            if (fVar24 < fVar22) {
              uVar27 = *puVar18;
              uVar26 = *puVar19;
              fVar22 = (float)uVar27;
              fVar25 = (float)((ulong)uVar27 >> 0x20);
              local_2bc = afStack_260[lVar9 * 3] +
                          (float)local_2a0 * (afStack_260[uVar5 * 3] - afStack_260[lVar9 * 3]);
              uVar27 = CONCAT44(fVar25 + ((float)((ulong)uVar26 >> 0x20) - fVar25) *
                                         (float)local_2a0,
                                fVar22 + ((float)uVar26 - fVar22) * (float)local_2a0);
              local_2c8 = local_2b0;
              fVar22 = fVar24;
            }
          }
          else {
            if (uVar1 == 0) goto LAB_00ef7d0c;
            uVar4 = FUN_00ef1e90(*param_1,local_290);
            uVar2 = *(ushort *)(*(long *)(local_290 + 0x10) + (ulong)(uVar1 - 1) * 0x20 + 0x1c);
            if (((*(ushort *)(param_5 + 0x100) & uVar2) == 0) ||
               ((*(ushort *)(param_5 + 0x102) & uVar2) != 0)) goto LAB_00ef7d0c;
            uVar20 = 1;
            local_288[0] = uVar4 | uVar1 - 1;
LAB_00ef7c54:
            uVar10 = (ulong)uVar20;
            puVar17 = local_288;
            do {
              uVar6 = FUN_00efa13c(param_1[9],*puVar17);
              if (((uVar6 != 0) && (-1 < *(int *)(uVar6 + 0x14))) &&
                 ((fVar24 = (float)FUN_00efa76c(&local_220,(long)&local_268 + lVar9 * 0xc,
                                                (long)&local_268 + uVar5 * 0xc,&local_2a0),
                  (int)uVar15 < 0x30 && (fVar24 <= fVar23 * fVar23)))) {
                if (local_2b0 == 0) {
                  uVar4 = 0;
                }
                else {
                  uVar4 = (int)(local_2b0 - *(long *)param_1[9] >> 2) * -0x49249249 + 1;
                }
                *(uint *)(uVar6 + 0x14) =
                     *(uint *)(uVar6 + 0x14) & 0x40000000 | uVar4 & 0x3fffffff | 0x80000000;
                local_210[(int)uVar15] = uVar6;
                uVar15 = uVar15 + 1;
              }
              uVar10 = uVar10 - 1;
              puVar17 = puVar17 + 1;
            } while (uVar10 != 0);
          }
LAB_00ef7d70:
          uVar10 = uVar5 + 1;
          uVar4 = (uint)uVar5;
          uVar5 = uVar10;
        } while (uVar10 < *(byte *)((long)local_298 + 0x1e));
      }
      local_2b0 = local_2c8;
      if (uVar15 == 0) goto LAB_00ef7e50;
      local_2b0 = local_210[0];
      uVar4 = uVar15;
    }
    uVar27 = *param_4;
    local_2bc = *(float *)(param_4 + 1);
LAB_00ef7e50:
    if (local_2b0 == 0) {
      uVar16 = 0x40000000;
      iVar7 = 0;
    }
    else {
      uVar5 = 0;
      do {
        uVar10 = local_2b0;
        uVar4 = *(uint *)(uVar10 + 0x14) & 0x3fffffff;
        if (uVar4 == 0) {
          local_2b0 = 0;
        }
        else {
          local_2b0 = *(long *)param_1[9] + (ulong)(uVar4 - 1) * 0x1c;
        }
        uVar4 = 0;
        if (uVar5 != 0) {
          uVar4 = (int)(uVar5 - *(long *)param_1[9] >> 2) * -0x49249249 + 1;
        }
        *(uint *)(uVar10 + 0x14) = *(uint *)(uVar10 + 0x14) & 0xc0000000 | uVar4 & 0x3fffffff;
        uVar5 = uVar10;
      } while (local_2b0 != 0);
      lVar9 = 0;
      do {
        lVar8 = lVar9;
        *(undefined4 *)(param_7 + lVar8 * 4) = *(undefined4 *)(uVar10 + 0x18);
        if ((long)param_9 <= lVar8 + 1) {
          uVar16 = 0x40000010;
          goto LAB_00ef7f2c;
        }
        uVar4 = *(uint *)(uVar10 + 0x14) & 0x3fffffff;
      } while ((uVar4 != 0) &&
              (uVar10 = *(long *)param_1[9] + (ulong)(uVar4 - 1) * 0x1c, lVar9 = lVar8 + 1,
              uVar10 != 0));
      uVar16 = 0x40000000;
LAB_00ef7f2c:
      iVar7 = (int)lVar8 + 1;
    }
    *param_6 = uVar27;
    *(float *)(param_6 + 1) = local_2bc;
    *param_8 = iVar7;
  }
  if (*(long *)(lVar3 + 0x28) == local_90) {
    return uVar16;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ef7f80(void)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *in_x3;
  long lVar4;
  undefined8 local_48;
  float local_40;
  undefined8 local_38;
  float local_30;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  iVar2 = FUN_00ef78ec();
  if (iVar2 < 0) {
    uVar3 = 0x80000008;
  }
  else {
    uVar3 = 0x40000000;
    *in_x3 = CONCAT44(((float)((ulong)local_38 >> 0x20) + (float)((ulong)local_48 >> 0x20)) * 0.5,
                      ((float)local_38 + (float)local_48) * 0.5);
    *(float *)(in_x3 + 1) = (local_30 + local_40) * 0.5;
  }
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}

