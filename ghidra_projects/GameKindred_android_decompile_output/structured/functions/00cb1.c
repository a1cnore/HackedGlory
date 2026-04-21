// functions/00cb1 — 2 functions
#include "libGameKindred.h"




void FUN_00cb1d0c(float param_1,undefined4 param_2,undefined8 param_3,ulong param_4)

{
  bool bVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  char *pcVar5;
  float fVar6;
  double dVar7;
  float fVar8;
  float fVar9;
  
  fVar6 = 0.0;
  if (1.1920929e-07 <= ABS(param_1)) {
    fVar6 = param_1;
  }
  fVar8 = fVar6;
  if (fVar6 <= 0.0) {
    fVar8 = 0.0;
  }
  if ((param_4 & 1) == 0) {
    fVar8 = fVar6;
  }
  switch(param_2) {
  case 1:
    puVar3 = &DAT_01bb6d43;
LAB_00cb1eb8:
    FUN_00e70e18(param_3,puVar3,(int)fVar8);
    return;
  case 2:
    bVar1 = 0.1 <= fVar8;
    fVar8 = fVar8 * 100.0;
    if (bVar1) {
      if (ABS(fVar8 - (float)(int)fVar8) < 0.01) {
        puVar3 = &DAT_01bc2552;
        goto LAB_00cb1eb8;
      }
      dVar7 = (double)fVar8;
      pcVar5 = "%.4g%%";
    }
    else {
      dVar7 = (double)fVar8;
      pcVar5 = "%.2g%%";
    }
    goto LAB_00cb1f98;
  case 3:
    dVar7 = (double)fVar8;
    pcVar5 = "%.3g";
LAB_00cb1f98:
    FUN_00e70e18(dVar7,param_3,pcVar5);
    return;
  case 4:
    FUN_00e70e18((double)fVar8,param_3,&DAT_01bc2526);
    uVar2 = FUN_00e6ce7c("LABEL_UNITS_SECONDS_ACRONYM",0);
    FUN_00e70c34(param_3,uVar2);
    return;
  case 5:
    fVar6 = fVar8 + -1.0;
    if ((fVar6 < 0.1) && (-0.1 < fVar6)) {
      puVar3 = &DAT_01b9f8c3;
      if (fVar6 < 0.0) {
        puVar3 = &DAT_01e277f2;
      }
LAB_00cb1e7c:
      fVar6 = fVar6 * 100.0;
      puVar4 = &DAT_01bc2557;
      goto LAB_00cb1f7c;
    }
    fVar9 = fVar8 * 100.0 - (float)(int)(fVar8 * 100.0);
    puVar3 = &DAT_01b9f8c3;
    if (fVar6 < 0.0) {
      puVar3 = &DAT_01e277f2;
    }
    fVar6 = fVar6 * 100.0;
    break;
  case 6:
    if ((fVar8 < 0.1) && (-1.0 < fVar8)) {
      puVar3 = &DAT_01b9f8c3;
      fVar6 = fVar8;
      if (fVar8 < 0.0) {
        puVar3 = &DAT_01e277f2;
      }
      goto LAB_00cb1e7c;
    }
    fVar6 = fVar8 * 100.0;
    fVar9 = fVar6 - (float)(int)fVar6;
    puVar3 = &DAT_01b9f8c3;
    if (fVar8 < 0.0) {
      puVar3 = &DAT_01e277f2;
    }
    break;
  default:
    return;
  }
  if (ABS(fVar9) < 0.01) {
    FUN_00e70e18(param_3,&DAT_01bc2550,puVar3,(int)fVar6);
    return;
  }
  puVar4 = &DAT_01bc2547;
LAB_00cb1f7c:
  FUN_00e70e18((double)fVar6,param_3,puVar4,puVar3);
  return;
}




void FUN_00cb1fa8(undefined8 param_1,undefined4 param_2,long param_3)

{
  void *pvVar1;
  long lVar2;
  void *pvVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  undefined4 uVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  byte *pbVar16;
  ulong *puVar17;
  size_t sVar18;
  long lVar19;
  void *pvVar20;
  long lVar21;
  undefined1 *puVar22;
  uint uVar23;
  byte local_368 [16];
  void *local_358;
  ulong local_350;
  ulong uStack_348;
  void *local_340;
  ulong local_330;
  ulong uStack_328;
  void *local_320;
  ulong local_310;
  void *pvStack_308;
  void *local_300;
  byte local_2f8 [8];
  ulong local_2f0;
  void *local_2e8;
  byte local_2e0 [16];
  void *local_2d0;
  byte local_2c8 [8];
  ulong local_2c0;
  void *local_2b8;
  byte local_2b0 [16];
  void *local_2a0;
  byte local_298 [16];
  void *local_288;
  undefined8 local_280;
  void *local_278;
  undefined8 local_270;
  void *local_268;
  undefined8 local_260;
  void *local_258;
  ulong local_250;
  undefined8 uStack_248;
  void *local_240;
  undefined4 local_234;
  undefined8 local_230;
  void *local_228;
  undefined8 local_220;
  void *local_218;
  undefined8 local_210;
  void *local_208;
  undefined8 local_200;
  void *local_1f8;
  undefined8 local_1f0;
  void *local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined4 local_1d0;
  int local_1cc;
  undefined8 local_1c8;
  void *local_1c0;
  undefined8 local_1b8;
  void *local_1b0;
  undefined8 local_1a8;
  void *local_1a0;
  undefined4 local_194;
  ulong local_190;
  ulong uStack_188;
  void *local_180;
  ulong local_170;
  void *pvStack_168;
  void *local_160;
  undefined8 local_148;
  void *local_140;
  undefined8 local_128;
  void *local_120;
  undefined1 auStack_108 [16];
  undefined1 auStack_f8 [96];
  undefined8 local_98 [5];
  
  lVar2 = tpidr_el0;
  lVar19 = *(long *)(lVar2 + 0x28);
  lVar12 = FUN_00d9ea34(param_3);
  if ((lVar12 != 0) && (uVar13 = FUN_00d6c068(lVar12,param_2), (uVar13 & 1) != 0)) {
    lVar21 = 0;
    do {
      FUN_00e70510(auStack_108 + lVar21);
      lVar21 = lVar21 + 0x10;
    } while (lVar21 != 0x80);
    local_194 = 0;
    uVar14 = FUN_00e710d0(param_1,0,0x5b,0x5d,1,auStack_108,0,&local_194);
    uVar13 = 0;
    if ((uVar14 & 1) != 0) {
      puVar22 = auStack_f8;
      uVar14 = 0;
      do {
        uVar13 = uVar14 + 1;
        if (7 < uVar13) {
          uVar13 = (ulong)((int)uVar14 + 1);
          break;
        }
        uVar15 = FUN_00e710d0(param_1,local_194,0x5b,0x5d,1,puVar22,0,&local_194);
        puVar22 = puVar22 + 0x10;
        uVar14 = uVar13;
      } while ((uVar15 & 1) != 0);
    }
    FUN_00e70510(&local_1a8);
    if ((int)uVar13 != 0) {
      pvVar20 = (void *)((ulong)local_2c8 | 1);
      uVar14 = 0;
      do {
        thunk_FUN_00e7051c(&local_1b8,&DAT_03210450);
        thunk_FUN_00e7051c(&local_1c8,&DAT_03210450);
        puVar22 = auStack_108 + uVar14 * 0x10;
        local_1cc = 0;
        uVar15 = FUN_00e7107c(puVar22,0,0x7c,&local_1cc);
        if ((uVar15 & 1) == 0) {
          FUN_00910394(&local_1b8,puVar22);
        }
        else {
          FUN_00e71810(&local_128,puVar22,0,local_1cc);
          FUN_00910394(&local_1b8,&local_128);
          if (local_120 != (void *)0x0) {
            operator_delete__(local_120);
            local_120 = (void *)0x0;
            local_128 = 0;
          }
          iVar10 = local_1cc + 1;
          iVar8 = FUN_00e70b14(puVar22);
          FUN_00e71810(&local_128,puVar22,iVar10,iVar8 - local_1cc);
          FUN_00910394(&local_1c8,&local_128);
          if (local_120 != (void *)0x0) {
            operator_delete__(local_120);
            local_120 = (void *)0x0;
            local_128 = 0;
          }
        }
        FUN_00e70978(&local_1b8,&local_128,0x20);
        local_1e0 = 0;
        local_1d8 = 0;
        local_1d0 = 0;
        FUN_00e705c8(&local_148,"[");
        FUN_00910394(&local_1a8,&local_148);
        if (local_140 != (void *)0x0) {
          operator_delete__(local_140);
          local_140 = (void *)0x0;
          local_148 = 0;
        }
        FUN_00e70c34(&local_1a8,puVar22);
        FUN_00e705c8(&local_148,&DAT_01e21cb0);
        FUN_00e70c34(&local_1a8,&local_148);
        if (local_140 != (void *)0x0) {
          operator_delete__(local_140);
          local_140 = (void *)0x0;
          local_148 = 0;
        }
        FUN_00e705c8(&local_1f0,PTR_DAT_02be9d70);
        FUN_00e705c8(&local_200,PTR_DAT_02be9d78);
        FUN_00e705c8(&local_210,PTR_DAT_02be9d80);
        FUN_00e705c8(&local_220,PTR_s_CBASE_02be9d90);
        FUN_00e705c8(&local_230,PTR_s_WBASE_02be9d98);
        bVar5 = false;
        bVar6 = false;
        bVar7 = false;
        bVar4 = false;
        uVar23 = 0;
        local_234 = 0;
        do {
          FUN_00e7107c(&local_1c8,0,0x2c,&local_234);
          FUN_00e71810(&local_148,&local_1c8,0,local_234);
          uVar15 = FUN_00e70b34(&local_148,&local_1f0);
          if ((uVar15 & 1) == 0) {
            uVar15 = FUN_00e70b34(&local_148,&local_200);
            if ((uVar15 & 1) == 0) {
              uVar15 = FUN_00e70b34(&local_148,&local_210);
              if ((uVar15 & 1) == 0) {
                uVar15 = FUN_00e70b34(&local_148,&local_220);
                if ((uVar15 & 1) == 0) {
                  uVar9 = FUN_00e70b34(&local_148,&local_230);
                  uVar23 = uVar23 | uVar9;
                }
                else {
                  bVar4 = true;
                }
              }
              else {
                bVar7 = true;
              }
            }
            else {
              bVar6 = true;
            }
          }
          else {
            bVar5 = true;
          }
          iVar10 = FUN_00e70b14(&local_148);
          uVar11 = FUN_00e70b14(&local_1c8);
          FUN_00e71810(&local_170,&local_1c8,iVar10 + 1,uVar11);
          FUN_00910394(&local_1c8,&local_170);
          if (pvStack_168 != (void *)0x0) {
            operator_delete__(pvStack_168);
            pvStack_168 = (void *)0x0;
            local_170 = 0;
          }
          if (local_140 != (void *)0x0) {
            operator_delete__(local_140);
            local_140 = (void *)0x0;
            local_148 = 0;
          }
          uVar15 = FUN_00e70b88(&local_1c8,&DAT_03210450);
        } while (((uVar15 & 1) != 0) &&
                (uVar15 = FUN_00e7107c(&local_1c8,local_234,0x2c,&local_234), (uVar15 & 1) == 0));
        uVar11 = FUN_00d6b8f8(lVar12,param_2);
        uVar15 = FUN_00ce07a4(param_3,0xffffffff,&local_128,&local_1e0,uVar11,
                              *(undefined4 *)(param_3 + 0x260));
        if ((uVar15 & 1) != 0) {
          local_250 = 0;
          uStack_248 = 0;
          local_240 = (void *)0x0;
          FUN_00e70510(&local_260);
          FUN_00e70510(&local_270);
          FUN_00e70510(&local_280);
          FUN_008fa54c(local_298,PTR_s__24_144_238_255__02be9d40);
          FUN_008fa54c(local_2b0,PTR_s__254_103_96_255__02be9d48);
          FUN_008fa54c(local_2c8,PTR_DAT_02be9d58);
          FUN_008fa54c(local_2e0,PTR_DAT_02be9d60);
          FUN_008fa54c(local_2f8,PTR_DAT_02be9d68);
          FUN_00cb1d0c(local_1e0 & 0xffffffff,local_1d0,&local_260,0);
          FUN_00e70978(&local_260,&local_148,0x20);
          if (bVar4) {
            pbVar16 = local_298;
LAB_00cb24e8:
            FUN_009697c8(&local_190,pbVar16,&local_148);
            pvVar1 = pvVar20;
            uVar15 = (ulong)(local_2c8[0] >> 1);
            if ((local_2c8[0] & 1) != 0) {
              pvVar1 = local_2b8;
              uVar15 = local_2c0;
            }
            puVar17 = (ulong *)FUN_0090de84(&local_190,pvVar1,uVar15);
            local_160 = (void *)puVar17[2];
            pvStack_168 = (void *)puVar17[1];
            local_170 = *puVar17;
            puVar17[1] = 0;
            puVar17[2] = 0;
            *puVar17 = 0;
            pvVar1 = (void *)((ulong)&local_170 | 1);
            pvVar3 = (void *)(local_170 >> 1 & 0x7f);
            if ((local_170 & 1) != 0) {
              pvVar1 = local_160;
              pvVar3 = pvStack_168;
            }
            FUN_0090de84(&local_250,pvVar1,pvVar3);
            if ((local_170 & 1) != 0) {
              operator_delete(local_160);
            }
            if ((local_190 & 1) != 0) {
              operator_delete(local_180);
            }
          }
          else {
            if ((uVar23 & 1) != 0) {
              pbVar16 = local_2b0;
              goto LAB_00cb24e8;
            }
            sVar18 = strlen((char *)&local_148);
            FUN_0090de84(&local_250,&local_148,sVar18);
          }
          if (bVar5) {
            local_1e0._4_4_ = (float)(local_1e0 >> 0x20);
            iVar10 = 0;
            if (1.1920929e-07 <= ABS(local_1e0._4_4_)) {
              iVar10 = (int)local_1e0._4_4_;
            }
            FUN_00e70e18(&local_270,&DAT_01bb6d43,iVar10);
            FUN_00e70978(&local_270,&local_170,0x20);
            FUN_00b5507c(&local_350,local_298,local_2e0);
            sVar18 = strlen((char *)&local_170);
            puVar17 = (ulong *)FUN_0090de84(&local_350,&local_170,sVar18);
            local_320 = (void *)puVar17[2];
            uStack_328 = puVar17[1];
            local_330 = *puVar17;
            puVar17[1] = 0;
            puVar17[2] = 0;
            *puVar17 = 0;
            pvVar1 = (void *)((ulong)local_2f8 | 1);
            uVar15 = (ulong)(local_2f8[0] >> 1);
            if ((local_2f8[0] & 1) != 0) {
              pvVar1 = local_2e8;
              uVar15 = local_2f0;
            }
            puVar17 = (ulong *)FUN_0090de84(&local_330,pvVar1,uVar15);
            local_300 = (void *)puVar17[2];
            pvStack_308 = (void *)puVar17[1];
            local_310 = *puVar17;
            puVar17[1] = 0;
            puVar17[2] = 0;
            *puVar17 = 0;
            pvVar1 = pvVar20;
            uVar15 = (ulong)(local_2c8[0] >> 1);
            if ((local_2c8[0] & 1) != 0) {
              pvVar1 = local_2b8;
              uVar15 = local_2c0;
            }
            puVar17 = (ulong *)FUN_0090de84(&local_310,pvVar1,uVar15);
            local_180 = (void *)puVar17[2];
            uStack_188 = puVar17[1];
            local_190 = *puVar17;
            puVar17[1] = 0;
            puVar17[2] = 0;
            *puVar17 = 0;
            pvVar1 = (void *)((ulong)&local_190 | 1);
            uVar15 = local_190 >> 1 & 0x7f;
            if ((local_190 & 1) != 0) {
              pvVar1 = local_180;
              uVar15 = uStack_188;
            }
            FUN_0090de84(&local_250,pvVar1,uVar15);
            if ((local_190 & 1) != 0) {
              operator_delete(local_180);
            }
            if ((local_310 & 1) != 0) {
              operator_delete(local_300);
            }
            if ((local_330 & 1) != 0) {
              operator_delete(local_320);
            }
            if ((local_350 & 1) != 0) {
              operator_delete(local_340);
            }
          }
          if (bVar6 || bVar7) {
            iVar10 = 0;
            if (1.1920929e-07 <= ABS((float)local_1d8)) {
              iVar10 = (int)(float)local_1d8;
            }
            FUN_00e70e18(&local_280,&DAT_01bb6d43,iVar10);
            FUN_00e70978(&local_280,&local_190,0x20);
            FUN_00b5507c(local_368,local_2b0,local_2e0);
            sVar18 = strlen((char *)&local_190);
            puVar17 = (ulong *)FUN_0090de84(local_368,&local_190,sVar18);
            local_340 = (void *)puVar17[2];
            uStack_348 = puVar17[1];
            local_350 = *puVar17;
            puVar17[1] = 0;
            puVar17[2] = 0;
            *puVar17 = 0;
            pvVar1 = (void *)((ulong)local_2f8 | 1);
            uVar15 = (ulong)(local_2f8[0] >> 1);
            if ((local_2f8[0] & 1) != 0) {
              pvVar1 = local_2e8;
              uVar15 = local_2f0;
            }
            puVar17 = (ulong *)FUN_0090de84(&local_350,pvVar1,uVar15);
            local_320 = (void *)puVar17[2];
            uStack_328 = puVar17[1];
            local_330 = *puVar17;
            puVar17[1] = 0;
            puVar17[2] = 0;
            *puVar17 = 0;
            pvVar1 = pvVar20;
            uVar15 = (ulong)(local_2c8[0] >> 1);
            if ((local_2c8[0] & 1) != 0) {
              pvVar1 = local_2b8;
              uVar15 = local_2c0;
            }
            puVar17 = (ulong *)FUN_0090de84(&local_330,pvVar1,uVar15);
            local_300 = (void *)puVar17[2];
            pvStack_308 = (void *)puVar17[1];
            local_310 = *puVar17;
            puVar17[1] = 0;
            puVar17[2] = 0;
            *puVar17 = 0;
            pvVar1 = (void *)((ulong)&local_310 | 1);
            pvVar3 = (void *)(local_310 >> 1 & 0x7f);
            if ((local_310 & 1) != 0) {
              pvVar1 = local_300;
              pvVar3 = pvStack_308;
            }
            FUN_0090de84(&local_250,pvVar1,pvVar3);
            if ((local_310 & 1) != 0) {
              operator_delete(local_300);
            }
            if ((local_330 & 1) != 0) {
              operator_delete(local_320);
            }
            if ((local_350 & 1) != 0) {
              operator_delete(local_340);
            }
            if ((local_368[0] & 1) != 0) {
              operator_delete(local_358);
            }
          }
          FUN_00e70570(&local_310,&local_250);
          FUN_00e71248(param_1,0,&local_1a8,&local_310);
          if (pvStack_308 != (void *)0x0) {
            operator_delete__(pvStack_308);
            local_310 = 0;
            pvStack_308 = (void *)0x0;
          }
          if ((local_2f8[0] & 1) != 0) {
            operator_delete(local_2e8);
          }
          if ((local_2e0[0] & 1) != 0) {
            operator_delete(local_2d0);
          }
          if ((local_2c8[0] & 1) != 0) {
            operator_delete(local_2b8);
          }
          if ((local_2b0[0] & 1) != 0) {
            operator_delete(local_2a0);
          }
          if ((local_298[0] & 1) != 0) {
            operator_delete(local_288);
          }
          if (local_278 != (void *)0x0) {
            operator_delete__(local_278);
            local_280 = 0;
            local_278 = (void *)0x0;
          }
          if (local_268 != (void *)0x0) {
            operator_delete__(local_268);
            local_270 = 0;
            local_268 = (void *)0x0;
          }
          if (local_258 != (void *)0x0) {
            operator_delete__(local_258);
            local_260 = 0;
            local_258 = (void *)0x0;
          }
          if ((local_250 & 1) != 0) {
            operator_delete(local_240);
          }
        }
        if (local_228 != (void *)0x0) {
          operator_delete__(local_228);
          local_230 = 0;
          local_228 = (void *)0x0;
        }
        if (local_218 != (void *)0x0) {
          operator_delete__(local_218);
          local_220 = 0;
          local_218 = (void *)0x0;
        }
        if (local_208 != (void *)0x0) {
          operator_delete__(local_208);
          local_210 = 0;
          local_208 = (void *)0x0;
        }
        if (local_1f8 != (void *)0x0) {
          operator_delete__(local_1f8);
          local_200 = 0;
          local_1f8 = (void *)0x0;
        }
        if (local_1e8 != (void *)0x0) {
          operator_delete__(local_1e8);
          local_1f0 = 0;
          local_1e8 = (void *)0x0;
        }
        if (local_1c0 != (void *)0x0) {
          operator_delete__(local_1c0);
          local_1c8 = 0;
          local_1c0 = (void *)0x0;
        }
        if (local_1b0 != (void *)0x0) {
          operator_delete__(local_1b0);
          local_1b0 = (void *)0x0;
          local_1b8 = 0;
        }
        uVar14 = uVar14 + 1;
      } while ((uVar14 < (uVar13 & 0xffffffff)) && (uVar14 < 8));
    }
    if (local_1a0 != (void *)0x0) {
      operator_delete__(local_1a0);
      local_1a0 = (void *)0x0;
      local_1a8 = 0;
    }
    lVar12 = 0;
    do {
      pvVar20 = *(void **)((long)local_98 + lVar12 + 8);
      if (pvVar20 != (void *)0x0) {
        operator_delete__(pvVar20);
        *(undefined8 *)((long)local_98 + lVar12) = 0;
        *(undefined8 *)((long)local_98 + lVar12 + 8) = 0;
      }
      lVar12 = lVar12 + -0x10;
    } while (lVar12 != -0x80);
  }
  if (*(long *)(lVar2 + 0x28) == lVar19) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

