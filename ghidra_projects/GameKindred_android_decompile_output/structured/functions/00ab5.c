// functions/00ab5 — 12 functions
#include "libGameKindred.h"




void FUN_00ab5154(float param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  float fVar3;
  long local_30;
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  if (*(float *)(param_2 + 0x1aec) <= 0.0) {
    if (*(int *)(param_2 + 0x1b00) < 1) {
      *(uint *)(param_2 + 0xe54) = *(uint *)(param_2 + 0xe54) & 0xfffffffb;
      *(uint *)(param_2 + 0x14e4) =
           *(uint *)(param_2 + 0x14e4) & 0xfffffff8 |
           *(uint *)(param_2 + 0x14e4) & 3 | (uint)(*(long *)(param_2 + 0x1af0) != -1) << 2;
    }
    else {
      *(uint *)(param_2 + 0xe54) = *(uint *)(param_2 + 0xe54) | 4;
    }
  }
  else {
    param_1 = *(float *)(param_2 + 0x1aec) - param_1;
    *(float *)(param_2 + 0x1aec) = param_1;
    FUN_00ab524c(param_1 / (float)*(long *)(param_2 + 0x1b10),param_2);
    fVar3 = *(float *)(param_2 + 0x1aec);
    if (fVar3 <= 0.0) {
      uVar1 = *(uint *)(param_2 + 0xe54) & 0xfffffffb;
    }
    else {
      local_30 = (long)fVar3;
      FUN_00b25438(param_2 + 0xfd0,&local_30);
      fVar3 = *(float *)(param_2 + 0x1aec);
      uVar1 = *(uint *)(param_2 + 0xe54) | 4;
    }
    *(uint *)(param_2 + 0xe54) = uVar1;
    if (fVar3 <= 0.0) {
      FUN_00ab43c0(param_2);
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ab524c(float param_1,long param_2)

{
  bool bVar1;
  float fVar2;
  
  if (*(char *)(param_2 + 0x1b18) == '\0') {
    fVar2 = (float)NEON_fminnm(1.0 - param_1,0x3f800000);
    if (fVar2 <= 0.0) {
      fVar2 = 0.0;
    }
    bVar1 = 0.025 < fVar2;
    *(float *)(param_2 + 0x1ae8) = fVar2;
  }
  else {
    fVar2 = (float)NEON_fminnm(param_1,0x3f800000);
    if (fVar2 <= 0.0) {
      fVar2 = 0.0;
    }
    bVar1 = fVar2 < 1.0;
    *(float *)(param_2 + 0x1ae8) = fVar2;
  }
  *(uint *)(param_2 + 0x14e4) =
       *(uint *)(param_2 + 0x14e4) & 0xfffffff8 | *(uint *)(param_2 + 0x14e4) & 3 | (uint)bVar1 << 2
  ;
  return;
}




void FUN_00ab52b0(long param_1,uint *param_2)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  long local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  if (*(int *)(param_1 + 0x1ad8) != 0) {
    uVar4 = 0;
    do {
      local_50 = *(long *)(*(long *)(param_1 + 0x1ae0) + uVar4 * 8);
      if (local_50 != 0) {
        uVar3 = 0;
        if (*param_2 < 3) {
          iVar1 = *(int *)(local_50 + 0x2918);
          if (iVar1 == 0) {
            uVar3 = 0;
            if (*(float *)(param_1 + 0x1aec) < 0.01) {
              uVar3 = (uint)(*(int *)(param_1 + 0x1b00) < 1);
            }
          }
          else if (iVar1 == 3) {
LAB_00ab5344:
            uVar3 = 1;
          }
          else if (iVar1 == 1) {
            if (0.01 <= *(float *)(param_1 + 0x1aec)) goto LAB_00ab5344;
            uVar3 = (uint)(0 < *(int *)(param_1 + 0x1b00));
          }
          else {
            uVar3 = 0;
          }
        }
        *(uint *)(local_50 + 0x84) =
             *(uint *)(local_50 + 0x84) & 0xfffffff8 | *(uint *)(local_50 + 0x84) & 3 | uVar3 << 2;
        if (uVar3 != 0) {
          FUN_00ab42b0(param_2,&local_50);
        }
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < *(uint *)(param_1 + 0x1ad8));
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ab53c4(long param_1,byte *param_2)

{
  size_t __n;
  size_t sVar1;
  byte bVar2;
  byte bVar3;
  long lVar4;
  bool bVar5;
  int iVar6;
  undefined8 uVar7;
  byte *__s2;
  byte *pbVar8;
  long lVar9;
  void *__s1;
  long lVar10;
  byte local_70 [16];
  void *local_60;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  iVar6 = *(int *)(param_1 + 0x1ad8);
  if (0 < iVar6) {
    lVar10 = 0;
    do {
      lVar9 = *(long *)(*(long *)(param_1 + 0x1ae0) + lVar10 * 8);
      if (lVar9 != 0) {
        FUN_008fcdb8(local_70,lVar9 + 0x24b8);
        bVar2 = *param_2;
        bVar5 = false;
        lVar9 = *(long *)(*(long *)(param_1 + 0x1ae0) + lVar10 * 8);
        bVar3 = *(byte *)(lVar9 + 0x24b8);
        __n = (ulong)(bVar3 >> 1);
        if ((bVar3 & 1) != 0) {
          __n = *(size_t *)(lVar9 + 0x24c0);
        }
        sVar1 = (ulong)(bVar2 >> 1);
        if ((bVar2 & 1) != 0) {
          sVar1 = *(size_t *)(param_2 + 8);
        }
        if (__n == sVar1) {
          __s1 = *(void **)(lVar9 + 0x24c8);
          if ((bVar3 & 1) == 0) {
            __s1 = (void *)(lVar9 + 0x24b9);
          }
          __s2 = param_2 + 1;
          if ((bVar2 & 1) != 0) {
            __s2 = *(byte **)(param_2 + 0x10);
          }
          if ((bVar3 & 1) == 0) {
            if (__n != 0) {
              pbVar8 = (byte *)(lVar9 + 0x24b9);
              lVar9 = -(ulong)(bVar3 >> 1);
              do {
                if (*pbVar8 != *__s2) {
                  bVar5 = false;
                  goto LAB_00ab54d0;
                }
                pbVar8 = pbVar8 + 1;
                lVar9 = lVar9 + 1;
                __s2 = __s2 + 1;
              } while (lVar9 != 0);
            }
          }
          else if (__n != 0) {
            iVar6 = memcmp(__s1,__s2,__n);
            bVar5 = false;
            if (iVar6 != 0) goto LAB_00ab54d0;
          }
          bVar5 = true;
        }
LAB_00ab54d0:
        if ((local_70[0] & 1) != 0) {
          operator_delete(local_60);
        }
        if (bVar5) {
          uVar7 = 1;
          goto LAB_00ab5500;
        }
        iVar6 = *(int *)(param_1 + 0x1ad8);
      }
      lVar10 = lVar10 + 1;
    } while (lVar10 < iVar6);
  }
  uVar7 = 0;
LAB_00ab5500:
  if (*(long *)(lVar4 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar7);
  }
  return;
}




void FUN_00ab5530(long param_1,long param_2)

{
  size_t sVar1;
  size_t __n;
  byte *__s1;
  byte bVar2;
  byte bVar3;
  long lVar4;
  size_t sVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  char *pcVar9;
  byte *pbVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  byte *__s2;
  long lVar14;
  ulong uVar15;
  float fVar16;
  undefined8 local_b0;
  void *local_a8;
  undefined8 local_a0;
  void *local_98;
  undefined8 local_90;
  void *local_88;
  long local_80;
  long local_78;
  
  lVar4 = tpidr_el0;
  local_78 = *(long *)(lVar4 + 0x28);
  iVar7 = *(int *)(param_2 + 0x28);
  if (0 < iVar7) {
    bVar3 = *(byte *)(param_1 + 0x1ac0);
    lVar14 = *(long *)(param_2 + 0x30);
    uVar15 = 0;
    __n = (ulong)(bVar3 >> 1);
    if ((bVar3 & 1) != 0) {
      __n = *(size_t *)(param_1 + 0x1ac8);
    }
    do {
      pbVar10 = (byte *)(lVar14 + uVar15 * 0x38);
      bVar2 = *pbVar10;
      sVar1 = (ulong)(bVar2 >> 1);
      if ((bVar2 & 1) != 0) {
        sVar1 = *(size_t *)(pbVar10 + 8);
      }
      if (__n == sVar1) {
        __s2 = *(byte **)(lVar14 + uVar15 * 0x38 + 0x10);
        __s1 = (byte *)(param_1 + 0x1ac1);
        if ((bVar3 & 1) != 0) {
          __s1 = *(byte **)(param_1 + 0x1ad0);
        }
        if ((bVar2 & 1) == 0) {
          __s2 = pbVar10 + 1;
        }
        pbVar10 = (byte *)(param_1 + 0x1ac1);
        sVar1 = -(ulong)(bVar3 >> 1);
        sVar5 = __n;
        if ((bVar3 & 1) == 0) {
          while( true ) {
            if (sVar5 == 0) goto LAB_00ab5678;
            if (*pbVar10 != *__s2) break;
            sVar1 = sVar1 + 1;
            __s2 = __s2 + 1;
            pbVar10 = pbVar10 + 1;
            sVar5 = sVar1;
          }
        }
        else if ((__n == 0) || (iVar6 = memcmp(__s1,__s2,__n), iVar6 == 0)) {
LAB_00ab5678:
          lVar14 = lVar14 + (uVar15 & 0xffffffff) * 0x38;
          uVar8 = *(undefined8 *)(lVar14 + 0x20);
          *(undefined8 *)(param_1 + 0x1af8) = *(undefined8 *)(lVar14 + 0x28);
          *(undefined8 *)(param_1 + 0x1af0) = uVar8;
          *(undefined8 *)(param_1 + 0x1b00) = *(undefined8 *)(lVar14 + 0x30);
          *(undefined8 *)(param_1 + 0x1b08) = *(undefined8 *)(lVar14 + 0x18);
          lVar14 = FUN_00e85318(0);
          lVar11 = *(long *)(param_1 + 0x1af0);
          *(long *)(param_1 + 0x1b10) = (lVar11 + lVar14) - *(long *)(param_1 + 0x1af8);
          if (*(int *)(param_1 + 0x1b00) < 1) {
            if (lVar11 < 1) {
              if (lVar11 == -1) {
                *(uint *)(param_1 + 0xe54) = *(uint *)(param_1 + 0xe54) & 0xfffffffb;
                *(uint *)(param_1 + 0x11b4) = *(uint *)(param_1 + 0x11b4) & 0xfffffffb;
                *(uint *)(param_1 + 0x123c) = *(uint *)(param_1 + 0x123c) | 4;
                uVar8 = FUN_00e6ce7c("MENU_BOOSTS_MARKET_PERMANENT_BOOST_ACTIVE",0);
                lVar14 = FUN_00e85318(0);
                FUN_00cb55c0(&local_90,uVar8,lVar14 - *(long *)(param_1 + 0x1b08),0);
                FUN_00f0d75c(param_1 + 0x11b8,&local_90);
                if (local_88 != (void *)0x0) {
                  operator_delete__(local_88);
                  local_90 = 0;
                  local_88 = (void *)0x0;
                }
                FUN_00e6ce7c("MENU_BOOSTS_MARKET_BONUS_EARNED",0);
              }
              goto LAB_00ab5b9c;
            }
            *(uint *)(param_1 + 0xe54) = *(uint *)(param_1 + 0xe54) | 4;
            *(uint *)(param_1 + 0xf64) = *(uint *)(param_1 + 0xf64) | 4;
            *(uint *)(param_1 + 0x11b4) = *(uint *)(param_1 + 0x11b4) | 4;
            *(uint *)(param_1 + 0x123c) = *(uint *)(param_1 + 0x123c) & 0xfffffffb;
            uVar8 = FUN_00e6ce7c("MENU_BOOSTS_MARKET_DURATION_TIMED_LEFT",0);
            FUN_00b252ac(param_1 + 0xfd0,uVar8,0,0);
            lVar11 = *(long *)(param_1 + 0x1af0);
            lVar14 = FUN_00e85318(0);
            fVar16 = (float)lVar11 /
                     (float)((*(long *)(param_1 + 0x1af0) + lVar14) - *(long *)(param_1 + 0x1af8));
          }
          else {
            *(uint *)(param_1 + 0xe54) = *(uint *)(param_1 + 0xe54) | 4;
            *(uint *)(param_1 + 0xf64) = *(uint *)(param_1 + 0xf64) & 0xfffffffb;
            *(uint *)(param_1 + 0x11b4) = *(uint *)(param_1 + 0x11b4) | 4;
            *(uint *)(param_1 + 0x123c) = *(uint *)(param_1 + 0x123c) & 0xfffffffb;
            local_80 = 0;
            uVar8 = FUN_00ccc2c8();
            FUN_00cccc34(uVar8,param_1 + 0x1ac0,&local_80);
            if (local_80 == 0) {
              if (1 < *(int *)(param_1 + 0x1b00)) {
                FUN_00e70510(&local_90);
                FUN_00e70e18(&local_90,&DAT_01bb6d43,*(undefined4 *)(param_1 + 0x1b00));
                uVar8 = FUN_00e6ce7c("MENU_BOOSTS_MARKET_DURATION_MATCHES_PLURAL_LEFT",0);
                thunk_FUN_00e7051c(&local_a0,uVar8);
                goto LAB_00ab5b1c;
              }
LAB_00ab5ab8:
              pcVar9 = "MENU_BOOSTS_MARKET_DURATION_MATCHES_SINGLE_LEFT";
LAB_00ab5ac4:
              uVar8 = FUN_00e6ce7c(pcVar9,0);
              FUN_00b252ac(param_1 + 0xfd0,uVar8,0,0);
            }
            else if (*(int *)(param_1 + 0x1b00) < 2) {
              pbVar10 = (byte *)(local_80 + 0x60);
              bVar3 = *pbVar10;
              uVar12 = *(ulong *)(local_80 + 0x68);
              uVar13 = (ulong)(bVar3 >> 1);
              uVar15 = uVar13;
              if ((bVar3 & 1) != 0) {
                uVar15 = uVar12;
              }
              if (uVar15 == 0xe) {
                iVar7 = FUN_0090d610(pbVar10,0,0xffffffffffffffff,"match_complete",0xe);
                if (iVar7 == 0) goto LAB_00ab5ab8;
                pbVar10 = (byte *)(local_80 + 0x60);
                bVar3 = *pbVar10;
                uVar12 = *(ulong *)(local_80 + 0x68);
                uVar13 = (ulong)(bVar3 >> 1);
              }
              uVar15 = uVar13;
              if ((bVar3 & 1) != 0) {
                uVar15 = uVar12;
              }
              if (uVar15 == 9) {
                iVar7 = FUN_0090d610(pbVar10,0,0xffffffffffffffff,"match_win",9);
                if (iVar7 != 0) {
                  pbVar10 = (byte *)(local_80 + 0x60);
                  bVar3 = *pbVar10;
                  uVar12 = *(ulong *)(local_80 + 0x68);
                  uVar13 = (ulong)(bVar3 >> 1);
                  goto LAB_00ab5a4c;
                }
                pcVar9 = "MENU_BOOSTS_MARKET_DURATION_WINS_SINGLE_LEFT";
                goto LAB_00ab5ac4;
              }
LAB_00ab5a4c:
              uVar15 = uVar13;
              if ((bVar3 & 1) != 0) {
                uVar15 = uVar12;
              }
              if (uVar15 == 10) {
                iVar7 = FUN_0090d610(pbVar10,0,0xffffffffffffffff,"match_loss",10);
                if (iVar7 == 0) {
                  pcVar9 = "MENU_BOOSTS_MARKET_DURATION_LOSSES_SINGLE_LEFT";
                  goto LAB_00ab5ac4;
                }
                pbVar10 = (byte *)(local_80 + 0x60);
                bVar3 = *pbVar10;
                uVar12 = *(ulong *)(local_80 + 0x68);
                uVar13 = (ulong)(bVar3 >> 1);
              }
              if ((bVar3 & 1) != 0) {
                uVar13 = uVar12;
              }
              if ((uVar13 == 4) &&
                 (iVar7 = FUN_0090d610(pbVar10,0,0xffffffffffffffff,"none",4), iVar7 == 0))
              goto LAB_00ab5ab8;
            }
            else {
              FUN_00e70510(&local_90);
              FUN_00e70e18(&local_90,&DAT_01bb6d43,*(undefined4 *)(param_1 + 0x1b00));
              FUN_00e70510(&local_a0);
              pbVar10 = (byte *)(local_80 + 0x60);
              bVar3 = *pbVar10;
              uVar12 = *(ulong *)(local_80 + 0x68);
              uVar13 = (ulong)(bVar3 >> 1);
              uVar15 = uVar13;
              if ((bVar3 & 1) != 0) {
                uVar15 = uVar12;
              }
              if (uVar15 == 0xe) {
                iVar7 = FUN_0090d610(pbVar10,0,0xffffffffffffffff,"match_complete",0xe);
                if (iVar7 != 0) {
                  pbVar10 = (byte *)(local_80 + 0x60);
                  bVar3 = *pbVar10;
                  uVar12 = *(ulong *)(local_80 + 0x68);
                  uVar13 = (ulong)(bVar3 >> 1);
                  goto LAB_00ab5950;
                }
LAB_00ab59fc:
                pcVar9 = "MENU_BOOSTS_MARKET_DURATION_MATCHES_PLURAL_LEFT";
              }
              else {
LAB_00ab5950:
                uVar15 = uVar13;
                if ((bVar3 & 1) != 0) {
                  uVar15 = uVar12;
                }
                if (uVar15 != 9) {
LAB_00ab5990:
                  uVar15 = uVar13;
                  if ((bVar3 & 1) != 0) {
                    uVar15 = uVar12;
                  }
                  if (uVar15 == 10) {
                    iVar7 = FUN_0090d610(pbVar10,0,0xffffffffffffffff,"match_loss",10);
                    if (iVar7 == 0) {
                      pcVar9 = "MENU_BOOSTS_MARKET_DURATION_LOSSES_PLURAL_LEFT";
                      goto LAB_00ab5b08;
                    }
                    pbVar10 = (byte *)(local_80 + 0x60);
                    bVar3 = *pbVar10;
                    uVar12 = *(ulong *)(local_80 + 0x68);
                    uVar13 = (ulong)(bVar3 >> 1);
                  }
                  if ((bVar3 & 1) != 0) {
                    uVar13 = uVar12;
                  }
                  if ((uVar13 != 4) ||
                     (iVar7 = FUN_0090d610(pbVar10,0,0xffffffffffffffff,"none",4), iVar7 != 0))
                  goto LAB_00ab5b1c;
                  goto LAB_00ab59fc;
                }
                iVar7 = FUN_0090d610(pbVar10,0,0xffffffffffffffff,"match_win",9);
                if (iVar7 != 0) {
                  pbVar10 = (byte *)(local_80 + 0x60);
                  bVar3 = *pbVar10;
                  uVar12 = *(ulong *)(local_80 + 0x68);
                  uVar13 = (ulong)(bVar3 >> 1);
                  goto LAB_00ab5990;
                }
                pcVar9 = "MENU_BOOSTS_MARKET_DURATION_WINS_PLURAL_LEFT";
              }
LAB_00ab5b08:
              uVar8 = FUN_00e6ce7c(pcVar9,0);
              FUN_00910394(&local_a0,uVar8);
LAB_00ab5b1c:
              FUN_00e705c8(&local_b0,"[DURATION]");
              FUN_00e71248(&local_a0,0,&local_b0,&local_90);
              if (local_a8 != (void *)0x0) {
                operator_delete__(local_a8);
                local_b0 = 0;
                local_a8 = (void *)0x0;
              }
              FUN_00b252ac(param_1 + 0xfd0,&local_a0,0,0);
              if (local_98 != (void *)0x0) {
                operator_delete__(local_98);
                local_a0 = 0;
                local_98 = (void *)0x0;
              }
              if (local_88 != (void *)0x0) {
                operator_delete__(local_88);
                local_90 = 0;
                local_88 = (void *)0x0;
              }
            }
            iVar7 = 0;
            if (*(int *)(param_1 + 0x1b04) != 0) {
              iVar7 = *(int *)(param_1 + 0x1b00) / *(int *)(param_1 + 0x1b04);
            }
            fVar16 = (float)iVar7;
          }
          goto LAB_00ab5b94;
        }
      }
      uVar15 = uVar15 + 1;
    } while ((long)uVar15 < (long)iVar7);
  }
  *(undefined8 *)(param_1 + 0x1b10) = 0;
  *(undefined8 *)(param_1 + 0x1afc) = 0;
  *(undefined8 *)(param_1 + 0x1af4) = 0;
  *(undefined8 *)(param_1 + 0x1aec) = 0;
  fVar16 = 0.0;
  *(uint *)(param_1 + 0xe54) = *(uint *)(param_1 + 0xe54) & 0xfffffffb;
  *(uint *)(param_1 + 0x11b4) = *(uint *)(param_1 + 0x11b4) | 4;
  *(uint *)(param_1 + 0x123c) = *(uint *)(param_1 + 0x123c) & 0xfffffffb;
LAB_00ab5b94:
  FUN_00ab524c(fVar16,param_1);
LAB_00ab5b9c:
  *(float *)(param_1 + 0x1aec) = (float)*(long *)(param_1 + 0x1af0);
  FUN_00ab43c0(param_1);
  if (*(long *)(lVar4 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00ab5bf8(long param_1,byte *param_2,undefined8 param_3,undefined4 *param_4)

{
  size_t __n;
  size_t sVar1;
  byte bVar2;
  byte bVar3;
  long lVar4;
  bool bVar5;
  int iVar6;
  undefined4 uVar7;
  ulong uVar8;
  undefined8 uVar9;
  byte *__s2;
  byte *pbVar10;
  long lVar11;
  void *__s1;
  long lVar12;
  int iVar13;
  byte local_c8 [16];
  void *local_b8;
  byte local_b0 [16];
  void *local_a0;
  undefined1 auStack_98 [48];
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  iVar13 = *(int *)(param_1 + 0x1ad8);
  if (0 < iVar13) {
    lVar12 = 0;
    do {
      lVar11 = *(long *)(*(long *)(param_1 + 0x1ae0) + lVar12 * 8);
      if (lVar11 != 0) {
        bVar2 = *(byte *)(lVar11 + 0x24b8);
        bVar3 = *param_2;
        __n = (ulong)(bVar2 >> 1);
        if ((bVar2 & 1) != 0) {
          __n = *(size_t *)(lVar11 + 0x24c0);
        }
        sVar1 = (ulong)(bVar3 >> 1);
        if ((bVar3 & 1) != 0) {
          sVar1 = *(size_t *)(param_2 + 8);
        }
        if (__n == sVar1) {
          __s1 = *(void **)(lVar11 + 0x24c8);
          if ((bVar2 & 1) == 0) {
            __s1 = (void *)(lVar11 + 0x24b9);
          }
          __s2 = param_2 + 1;
          if ((bVar3 & 1) != 0) {
            __s2 = *(byte **)(param_2 + 0x10);
          }
          if ((bVar2 & 1) == 0) {
            if (__n != 0) {
              pbVar10 = (byte *)(lVar11 + 0x24b9);
              lVar11 = -(ulong)(bVar2 >> 1);
              do {
                if (*pbVar10 != *__s2) goto LAB_00ab5d68;
                pbVar10 = pbVar10 + 1;
                lVar11 = lVar11 + 1;
                __s2 = __s2 + 1;
              } while (lVar11 != 0);
            }
          }
          else if ((__n != 0) && (iVar6 = memcmp(__s1,__s2,__n), iVar6 != 0)) goto LAB_00ab5d68;
          FUN_008fa718(local_b0);
          uVar8 = FUN_00b0d010(*(undefined8 *)(*(long *)(param_1 + 0x1ae0) + lVar12 * 8),local_b0);
          bVar5 = false;
          if ((uVar8 & 1) != 0) {
            uVar9 = FUN_00cab978(auStack_98);
            FUN_008fa54c(local_c8,uVar9);
            FUN_008fce60(param_3,local_c8);
            if ((local_c8[0] & 1) != 0) {
              operator_delete(local_b8);
            }
            uVar7 = FUN_00b0d110(*(undefined8 *)(*(long *)(param_1 + 0x1ae0) + lVar12 * 8));
            bVar5 = true;
            *param_4 = uVar7;
          }
          if ((local_b0[0] & 1) != 0) {
            operator_delete(local_a0);
          }
          if (bVar5) {
            uVar9 = 1;
            goto LAB_00ab5d78;
          }
          iVar13 = *(int *)(param_1 + 0x1ad8);
        }
      }
LAB_00ab5d68:
      lVar12 = lVar12 + 1;
    } while (lVar12 < iVar13);
  }
  uVar9 = 0;
LAB_00ab5d78:
  if (*(long *)(lVar4 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar9);
  }
  return;
}




ulong FUN_00ab5db4(undefined8 param_1)

{
  long lVar1;
  ulong uVar2;
  ulong local_38;
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_38 = 0;
  local_30 = (void *)0x0;
  FUN_00ab52b0(param_1,&local_38);
  uVar2 = local_38;
  if (local_30 != (void *)0x0) {
    operator_delete__(local_30);
    local_38 = 0;
    local_30 = (void *)0x0;
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return uVar2 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




bool FUN_00ab5e18(long param_1)

{
  if ((*(float *)(param_1 + 0x1aec) <= 0.01) &&
     ((*(long *)(param_1 + 0x1af0) != -1 || (*(long *)(param_1 + 0x1b08) == 0)))) {
    return 0 < *(int *)(param_1 + 0x1b00);
  }
  return true;
}




void thunk_FUN_00ab5e5c(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  uint uVar4;
  ushort uVar5;
  ushort *puVar6;
  
  lVar1 = param_1 + 0x15e8;
  FUN_00f01980(lVar1);
  uVar4 = *(uint *)(param_1 + 0x166c);
  if ((uVar4 & 0x7f80) != 0x3300) {
    *(uint *)(param_1 + 0x166c) = uVar4 & 0xffff8000 | uVar4 & 0x7f | 0x3300;
    FUN_0091ada4(lVar1);
    uVar4 = *(uint *)(param_1 + 0x166c);
  }
  *(uint *)(param_1 + 0x166c) = uVar4 | 4;
  uVar3 = FUN_00efee28(0x3dcccccd,0x3e4ccccd,FUN_009a7608);
  FUN_00f022a0(lVar1,uVar3);
  uVar3 = FUN_00efee28(0,0x3e4ccccd,FUN_009a7608);
  FUN_00f022a0(lVar1,uVar3);
  lVar2 = DAT_03210d00;
  uVar5 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar5 == 0xffff) {
    puVar6 = (ushort *)0x0;
  }
  else {
    puVar6 = (ushort *)(DAT_03210d00 + (ulong)uVar5 * 0x40 + 0x10);
    if (uVar5 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar5 = 0xffff;
    }
    else {
      uVar5 = *puVar6;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar5;
    *(int *)(lVar2 + 0x20014) = *(int *)(lVar2 + 0x20014) + 1;
    FUN_00efc8e8(puVar6);
    *(undefined ***)puVar6 = &PTR_FUN_02825148;
    *(int *)(lVar2 + 0x20020) = *(int *)(lVar2 + 0x20020) + 1;
  }
  FUN_00f022a0(lVar1,puVar6);
  FUN_00b1b034(0,param_1 + 0x16d8);
  return;
}




void FUN_00ab5e5c(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  uint uVar4;
  ushort uVar5;
  ushort *puVar6;
  
  lVar1 = param_1 + 0x15e8;
  FUN_00f01980(lVar1);
  uVar4 = *(uint *)(param_1 + 0x166c);
  if ((uVar4 & 0x7f80) != 0x3300) {
    *(uint *)(param_1 + 0x166c) = uVar4 & 0xffff8000 | uVar4 & 0x7f | 0x3300;
    FUN_0091ada4(lVar1);
    uVar4 = *(uint *)(param_1 + 0x166c);
  }
  *(uint *)(param_1 + 0x166c) = uVar4 | 4;
  uVar3 = FUN_00efee28(0x3dcccccd,0x3e4ccccd,FUN_009a7608);
  FUN_00f022a0(lVar1,uVar3);
  uVar3 = FUN_00efee28(0,0x3e4ccccd,FUN_009a7608);
  FUN_00f022a0(lVar1,uVar3);
  lVar2 = DAT_03210d00;
  uVar5 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar5 == 0xffff) {
    puVar6 = (ushort *)0x0;
  }
  else {
    puVar6 = (ushort *)(DAT_03210d00 + (ulong)uVar5 * 0x40 + 0x10);
    if (uVar5 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar5 = 0xffff;
    }
    else {
      uVar5 = *puVar6;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar5;
    *(int *)(lVar2 + 0x20014) = *(int *)(lVar2 + 0x20014) + 1;
    FUN_00efc8e8(puVar6);
    *(undefined ***)puVar6 = &PTR_FUN_02825148;
    *(int *)(lVar2 + 0x20020) = *(int *)(lVar2 + 0x20020) + 1;
  }
  FUN_00f022a0(lVar1,puVar6);
  FUN_00b1b034(0,param_1 + 0x16d8);
  return;
}




void FUN_00ab5fcc(long param_1)

{
  FUN_00b28094(param_1 + 0x950,param_1 + 0x1ac0,param_1 + 0xa38);
  return;
}




void FUN_00ab5fe4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027d4918;
  param_1[0x3de] = &PTR_FUN_027d4af0;
  FUN_00f0d3a4(param_1 + 0x4fd);
  param_1[0x4df] = &PTR_FUN_028266f0;
  param_1[0x4f6] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x4f9);
  FUN_00f13d08(param_1 + 0x4df);
  param_1[0x4c1] = &PTR_FUN_028266f0;
  param_1[0x4d8] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x4db);
  FUN_00f13d08(param_1 + 0x4c1);
  FUN_00f01868(param_1 + 0x4b0);
  FUN_00f01868(param_1 + 0x49f);
  FUN_00b0c2f8(param_1);
  return;
}

