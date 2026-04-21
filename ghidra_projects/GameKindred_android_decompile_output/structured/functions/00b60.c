// functions/00b60 — 13 functions
#include "libGameKindred.h"




void FUN_00b60480(long param_1)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  uint uVar4;
  
  if (*(uint *)(param_1 + 0x28aa8) != 0) {
    uVar4 = 0;
    do {
      lVar3 = *(long *)(*(long *)(param_1 + 0x28ab0) + (ulong)uVar4 * 8);
      if (lVar3 == 0) break;
      uVar2 = FUN_00f08be8(lVar3 + 0x158);
      uVar1 = FUN_00b5f14c(param_1,uVar2);
      FUN_00aea1c8(lVar3,uVar1 & 1);
      uVar4 = uVar4 + 1;
    } while (uVar4 < *(uint *)(param_1 + 0x28aa8));
  }
  if (*(uint *)(param_1 + 0x28ab8) != 0) {
    uVar4 = 0;
    do {
      lVar3 = *(long *)(*(long *)(param_1 + 0x28ac0) + (ulong)uVar4 * 8);
      if (lVar3 == 0) break;
      uVar2 = FUN_00f08be8(lVar3 + 0x158);
      uVar1 = FUN_00b5f14c(param_1,uVar2);
      FUN_00aea1c8(lVar3,uVar1 & 1);
      uVar4 = uVar4 + 1;
    } while (uVar4 < *(uint *)(param_1 + 0x28ab8));
  }
  if (*(uint *)(param_1 + 0x28ac8) != 0) {
    uVar4 = 0;
    do {
      lVar3 = *(long *)(*(long *)(param_1 + 0x28ad0) + (ulong)uVar4 * 8);
      if (lVar3 == 0) {
        return;
      }
      uVar2 = FUN_00f08be8(lVar3 + 0x158);
      uVar1 = FUN_00b5f14c(param_1,uVar2);
      FUN_00aea1c8(lVar3,uVar1 & 1);
      uVar4 = uVar4 + 1;
    } while (uVar4 < *(uint *)(param_1 + 0x28ac8));
  }
  return;
}




void FUN_00b605cc(long param_1,ulong param_2)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  
  if (*(uint *)(param_1 + 0x28aa8) != 0) {
    uVar3 = 0;
    do {
      lVar2 = *(long *)(*(long *)(param_1 + 0x28ab0) + uVar3 * 8);
      if (lVar2 != 0) {
        if (((param_2 & 1) == 0) || (*(char *)(param_1 + 0x2cfa7) != '\0')) {
          uVar1 = 0;
        }
        else {
          if (*(char *)(lVar2 + 0x1230) != '\0') goto LAB_00b6065c;
          uVar1 = 1;
        }
        FUN_00b09454(lVar2 + 0xc38,uVar1);
      }
LAB_00b6065c:
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)(param_1 + 0x28aa8));
  }
  if (*(uint *)(param_1 + 0x28ab8) != 0) {
    uVar3 = 0;
    do {
      lVar2 = *(long *)(*(long *)(param_1 + 0x28ac0) + uVar3 * 8);
      if (lVar2 != 0) {
        if (((param_2 & 1) == 0) || (*(char *)(param_1 + 0x2cfa7) != '\0')) {
          uVar1 = 0;
        }
        else {
          if (*(char *)(lVar2 + 0x1230) != '\0') goto LAB_00b606dc;
          uVar1 = 1;
        }
        FUN_00b09454(lVar2 + 0xc38,uVar1);
      }
LAB_00b606dc:
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)(param_1 + 0x28ab8));
  }
  if (*(uint *)(param_1 + 0x28ac8) != 0) {
    uVar3 = 0;
    do {
      lVar2 = *(long *)(*(long *)(param_1 + 0x28ad0) + uVar3 * 8);
      if (lVar2 != 0) {
        if (((param_2 & 1) == 0) || (*(char *)(param_1 + 0x2cfa7) != '\0')) {
          uVar1 = 0;
        }
        else {
          if (*(char *)(lVar2 + 0x1230) != '\0') goto LAB_00b6075c;
          uVar1 = 1;
        }
        FUN_00b09454(lVar2 + 0xc38,uVar1);
      }
LAB_00b6075c:
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)(param_1 + 0x28ac8));
  }
  return;
}




void FUN_00b60784(long param_1)

{
  uint *puVar1;
  char *pcVar2;
  char *pcVar3;
  long *plVar4;
  size_t __n;
  size_t sVar5;
  byte bVar6;
  long lVar7;
  bool bVar8;
  int iVar9;
  ulong uVar10;
  byte *__s2;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  uint uVar14;
  byte *pbVar15;
  long lVar16;
  uint uVar17;
  byte *__s1;
  long lVar18;
  long lVar19;
  ulong uVar20;
  uint local_8c;
  ulong local_80;
  size_t local_78;
  byte *local_70;
  long local_68;
  
  lVar7 = tpidr_el0;
  local_68 = *(long *)(lVar7 + 0x28);
  uVar10 = FUN_00e80f58();
  if ((uVar10 & 1) != 0) {
    lVar19 = 0;
    lVar18 = param_1 + 0x13660;
    do {
      *(undefined4 *)(param_1 + 0x2cf50 + lVar19) = 0xffffffff;
      FUN_00ae7fd4(lVar18);
      lVar19 = lVar19 + 4;
      lVar18 = lVar18 + 0x1328;
    } while (lVar19 != 0x38);
    puVar1 = (uint *)(param_1 + 0x2cf88);
    pcVar2 = (char *)(param_1 + 0x2cf99);
    *puVar1 = *(uint *)(param_1 + 0x2ced0);
    *pcVar2 = '\x01';
    local_80 = 0;
    local_78 = 0;
    local_70 = (byte *)0x0;
    FUN_00e81200(&local_80);
    if (*puVar1 == 0) {
      local_8c = 0;
    }
    else {
      pcVar3 = (char *)(param_1 + 0x2cf98);
      uVar10 = 0;
      uVar14 = 1;
      plVar4 = (long *)(param_1 + 0x2ced8);
      local_8c = 0;
      do {
        lVar19 = *plVar4;
        if (*(char *)(param_1 + 0x2cf9b) == '\0') {
          if (*(int *)(param_1 + 0x2cfc8) < 1) {
            iVar9 = 0;
          }
          else {
            lVar18 = 0;
            iVar9 = 0;
            do {
              if (lVar18 < *(int *)(lVar19 + uVar10 * 0x88 + 0x30)) {
                iVar9 = *(int *)(param_1 + 0x2cfd0 + lVar18 * 4) + iVar9;
              }
              lVar18 = lVar18 + 1;
            } while (*(int *)(param_1 + 0x2cfc8) != lVar18);
          }
          uVar17 = iVar9 + *(int *)(lVar19 + uVar10 * 0x88 + 0x34);
LAB_00b60a48:
          if (uVar17 < 0xe) goto LAB_00b60a54;
        }
        else {
          if (*(char *)(lVar19 + uVar10 * 0x88 + 0x29) == '\0') {
            uVar17 = uVar14;
            if (uVar14 < 0xd) {
              uVar14 = uVar14 + 1;
            }
            goto LAB_00b60a48;
          }
          uVar17 = 0;
LAB_00b60a54:
          *(int *)(param_1 + (ulong)uVar17 * 4 + 0x2cf50) = (int)uVar10;
          lVar19 = lVar19 + uVar10 * 0x88;
          uVar20 = (ulong)uVar17;
          lVar18 = param_1 + (ulong)uVar17 * 0x1328 + 0x13660;
          if (*(int *)(lVar19 + 0x2c) == 1) {
            local_8c = local_8c + 1;
          }
          FUN_00ae7fcc(lVar18,lVar19 + 0x18);
          FUN_00ae7fc4(lVar18,*(undefined4 *)(*plVar4 + uVar10 * 0x88 + 0x30));
          if (*pcVar3 == '\0') {
            bVar8 = false;
          }
          else {
            bVar8 = false;
            if (*(char *)(*plVar4 + uVar10 * 0x88 + 0x29) == '\0') {
              bVar8 = *(char *)(param_1 + 0x2cf9d) == '\0';
            }
          }
          FUN_00ae8058(lVar18,bVar8);
          if (*pcVar3 == '\0') {
            bVar8 = false;
          }
          else {
            bVar8 = *(char *)(param_1 + 0x2cf9b) == '\0';
          }
          FUN_00ae806c(lVar18,bVar8);
          lVar19 = *plVar4;
          pbVar15 = (byte *)(lVar19 + uVar10 * 0x88);
          *(byte *)(param_1 + uVar20 * 0x1328 + 0x13fc6) = pbVar15[0x28] & 1;
          if (pbVar15[0x29] == 0) {
            bVar6 = *pbVar15;
            __n = (ulong)(bVar6 >> 1);
            if ((bVar6 & 1) != 0) {
              __n = *(size_t *)(lVar19 + uVar10 * 0x88 + 8);
            }
            sVar5 = local_80 >> 1 & 0x7f;
            if ((local_80 & 1) != 0) {
              sVar5 = local_78;
            }
            if (__n == sVar5) {
              __s1 = *(byte **)(lVar19 + uVar10 * 0x88 + 0x10);
              if ((bVar6 & 1) == 0) {
                __s1 = pbVar15 + 1;
              }
              __s2 = (byte *)((ulong)&local_80 | 1);
              if ((local_80 & 1) != 0) {
                __s2 = local_70;
              }
              if ((bVar6 & 1) == 0) {
                if (__n != 0) {
                  lVar16 = -(ulong)(bVar6 >> 1);
                  do {
                    pbVar15 = pbVar15 + 1;
                    if (*pbVar15 != *__s2) goto LAB_00b60960;
                    lVar16 = lVar16 + 1;
                    __s2 = __s2 + 1;
                  } while (lVar16 != 0);
                }
              }
              else if ((__n != 0) && (iVar9 = memcmp(__s1,__s2,__n), iVar9 != 0)) goto LAB_00b60960;
              uVar11 = 1;
              uVar12 = 1;
              uVar13 = 0;
              goto LAB_00b60b68;
            }
LAB_00b60960:
            FUN_00ae78d0(lVar18,*(undefined4 *)(lVar19 + uVar10 * 0x88 + 0x2c),
                         *(undefined4 *)(param_1 + uVar20 * 4 + 0x2cf00),0);
            if (*(char *)(param_1 + uVar20 * 0x1328 + 0x13fc5) == '\0') {
              *pcVar2 = '\0';
            }
          }
          else {
            uVar13 = 1;
            uVar11 = 0;
            uVar12 = 0;
LAB_00b60b68:
            FUN_00ae78d0(lVar18,uVar11,uVar12,uVar13);
          }
          if ((((*pcVar3 != '\0') && (*pcVar2 == '\0')) &&
              (uVar20 = FUN_00e80f58(), (uVar20 & 1) != 0)) &&
             (lVar19 = FUN_009580b8(), *(int *)(lVar19 + 0x55dc) == 2)) {
            uVar11 = FUN_009580b8();
            FUN_009606dc(uVar11,0);
          }
        }
        uVar10 = uVar10 + 1;
      } while (uVar10 < *puVar1);
    }
    uVar14 = *(uint *)(*(long *)(param_1 + 0x2c78) + 0x84);
    *(uint *)(*(long *)(param_1 + 0x2c78) + 0x84) =
         uVar14 & 0xfffffff8 | uVar14 & 3 | (uint)(1 < local_8c) << 2;
    if ((local_80 & 1) != 0) {
      operator_delete(local_70);
    }
  }
  if (*(long *)(lVar7 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00b60c38(long param_1,uint param_2)

{
  long lVar1;
  
  lVar1 = 0xe;
  param_1 = param_1 + 0x13818;
  do {
    FUN_00b09454(param_1,param_2 & 1);
    lVar1 = lVar1 + -1;
    param_1 = param_1 + 0x1328;
  } while (lVar1 != 0);
  return;
}




void FUN_00b60c88(long param_1,ulong param_2)

{
  bool bVar1;
  long lVar2;
  
  lVar2 = 0xe;
  param_1 = param_1 + 0x13660;
  do {
    bVar1 = false;
    if ((param_2 & 1) != 0) {
      if (*(int *)(param_1 + 0x958) == -1) {
        bVar1 = false;
      }
      else {
        bVar1 = *(char *)(param_1 + 0x964) == '\0';
      }
    }
    FUN_00ae8058(param_1,bVar1);
    lVar2 = lVar2 + -1;
    param_1 = param_1 + 0x1328;
  } while (lVar2 != 0);
  return;
}




void FUN_00b60cfc(void)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined4 local_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_009580c4();
  if (((uVar2 & 1) != 0) && (uVar2 = FUN_0093dbe8(), (uVar2 & 1) == 0)) {
    uVar3 = FUN_009580b8();
    local_2c = 5;
    uVar2 = FUN_0095fc98(uVar3,&local_2c);
    lVar4 = FUN_009580b8();
    if ((uVar2 & 1) == 0) {
      local_2c = 6;
      uVar2 = FUN_0095fc98(lVar4,&local_2c);
      if ((uVar2 & 1) != 0) {
        FUN_009580b8();
        FUN_00960adc();
      }
    }
    else {
      FUN_009658c8(lVar4 + 0x278);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void thunk_FUN_00b60cfc(void)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined4 uStack_2c;
  long lStack_28;
  
  lVar1 = tpidr_el0;
  lStack_28 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_009580c4();
  if (((uVar2 & 1) != 0) && (uVar2 = FUN_0093dbe8(), (uVar2 & 1) == 0)) {
    uVar3 = FUN_009580b8();
    uStack_2c = 5;
    uVar2 = FUN_0095fc98(uVar3,&uStack_2c);
    lVar4 = FUN_009580b8();
    if ((uVar2 & 1) == 0) {
      uStack_2c = 6;
      uVar2 = FUN_0095fc98(lVar4,&uStack_2c);
      if ((uVar2 & 1) != 0) {
        FUN_009580b8();
        FUN_00960adc();
      }
    }
    else {
      FUN_009658c8(lVar4 + 0x278);
    }
  }
  if (*(long *)(lVar1 + 0x28) == lStack_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b60d98(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = FUN_009580b8();
  if (*(int *)(lVar1 + 0x55dc) - 2U < 7) {
    return;
  }
  lVar2 = 0xe;
  lVar1 = param_1 + 0x13818;
  do {
    FUN_00b09454(lVar1,1);
    lVar2 = lVar2 + -1;
    lVar1 = lVar1 + 0x1328;
  } while (lVar2 != 0);
  FUN_00b09454(param_1 + 0x10808,1);
  return;
}




void FUN_00b60e20(long param_1)

{
  FUN_00b60d98(param_1 + -0x2c38);
  return;
}




void FUN_00b60e2c(void)

{
  return;
}




void FUN_00b60e30(void)

{
  return;
}




void FUN_00b60e34(void)

{
  return;
}




void FUN_00b60e38(long param_1,long param_2)

{
  uint *puVar1;
  byte *pbVar2;
  size_t sVar3;
  size_t sVar4;
  byte bVar5;
  byte bVar6;
  long lVar7;
  undefined4 uVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  byte *pbVar13;
  char *pcVar14;
  long lVar15;
  byte *__s1;
  char *pcVar16;
  void *pvVar17;
  byte *pbVar18;
  char *pcVar19;
  ulong uVar20;
  double dVar21;
  byte local_b8 [16];
  void *local_a8;
  byte local_a0 [8];
  size_t local_98;
  char *local_90;
  byte local_88 [8];
  size_t local_80;
  char *local_78;
  long local_68;
  
  lVar7 = tpidr_el0;
  local_68 = *(long *)(lVar7 + 0x28);
  lVar10 = FUN_009580b8();
  if (*(char *)(lVar10 + 0x568a) != '\0') {
    FUN_009580b8();
    dVar21 = (double)FUN_00961684();
    if (0.0 < dVar21) {
      uVar8 = FUN_00f048a4("EVENT_NULL");
      FUN_00f048e0(local_88,uVar8,0);
      FUN_00b61444(param_1);
      *(undefined1 *)(param_1 + 0x2cf9e) = 1;
      goto LAB_00b60f10;
    }
  }
  if ((*(byte *)(param_1 + 0x2c34) >> 1 & 1) != 0) {
    lVar10 = FUN_009580b8();
    FUN_00915fac(*(char *)(lVar10 + 0x568a) != '\0');
  }
  puVar1 = (uint *)(param_2 + 0x70);
  FUN_009653b0(param_1 + 0x2ced0,puVar1);
  if ((*(int *)(param_2 + 0x84) != 0) || (*(char *)(param_2 + 0x80) == '\0')) goto LAB_00b60f10;
  pbVar2 = (byte *)(param_1 + 0x2cf98);
  if (*puVar1 != 0) {
    bVar5 = *pbVar2;
    uVar20 = 0;
    lVar10 = 0x29;
    do {
      lVar15 = *(long *)(param_1 + 0x2ced8);
      lVar11 = FUN_00e829e0();
      uVar12 = FUN_00e70b34(lVar15 + lVar10 + -0x11,lVar11 + 0xd8);
      if ((uVar12 & 1) != 0) {
        bVar6 = *(byte *)(*(long *)(param_1 + 0x2ced8) + lVar10);
        *pbVar2 = bVar6;
        if ((bVar5 == 0) && (bVar6 != 0)) {
          *(undefined1 *)(param_1 + 0x2cf9a) = 0;
          *(uint *)(param_1 + 0x28dbc) = *(uint *)(param_1 + 0x28dbc) & 0xfffffffb;
          *(uint *)(param_1 + 0x262cc) =
               *(uint *)(param_1 + 0x262cc) & 0xfffffff8 |
               *(uint *)(param_1 + 0x262cc) & 3 | (*(uint *)(param_1 + 0x256cc) >> 2 & 1) << 2;
        }
        break;
      }
      uVar20 = uVar20 + 1;
      lVar10 = lVar10 + 0x88;
    } while (uVar20 < *puVar1);
  }
  bVar5 = *(byte *)(param_2 + 0x58);
  sVar3 = (ulong)(bVar5 >> 1);
  if ((bVar5 & 1) != 0) {
    sVar3 = *(size_t *)(param_2 + 0x60);
  }
  sVar4 = (ulong)(DAT_0320ffa8 >> 1);
  if ((DAT_0320ffa8 & 1) != 0) {
    sVar4 = DAT_0320ffb0;
  }
  if (sVar3 == sVar4) {
    pvVar17 = *(void **)(param_2 + 0x68);
    if ((bVar5 & 1) == 0) {
      pvVar17 = (void *)(param_2 + 0x59);
    }
    pcVar16 = DAT_0320ffb8;
    if ((DAT_0320ffa8 & 1) == 0) {
      pcVar16 = &DAT_0320ffa9;
    }
    if ((bVar5 & 1) == 0) {
      if (sVar3 != 0) {
        pcVar19 = (char *)(param_2 + 0x59);
        lVar10 = -(ulong)(bVar5 >> 1);
        do {
          if (*pcVar19 != *pcVar16) goto LAB_00b61098;
          pcVar19 = pcVar19 + 1;
          lVar10 = lVar10 + 1;
          pcVar16 = pcVar16 + 1;
        } while (lVar10 != 0);
      }
    }
    else if ((sVar3 != 0) && (iVar9 = memcmp(pvVar17,pcVar16,sVar3), iVar9 != 0)) goto LAB_00b61098;
  }
  else {
LAB_00b61098:
    pbVar13 = (byte *)FUN_00ac9cd0(param_1 + 0xda48);
    bVar5 = *(byte *)(param_2 + 0x58);
    bVar6 = *pbVar13;
    sVar3 = (ulong)(bVar5 >> 1);
    if ((bVar5 & 1) != 0) {
      sVar3 = *(size_t *)(param_2 + 0x60);
    }
    sVar4 = (ulong)(bVar6 >> 1);
    if ((bVar6 & 1) != 0) {
      sVar4 = *(size_t *)(pbVar13 + 8);
    }
    if (sVar3 == sVar4) {
      pvVar17 = *(void **)(param_2 + 0x68);
      pbVar18 = *(byte **)(pbVar13 + 0x10);
      if ((bVar5 & 1) == 0) {
        pvVar17 = (void *)(param_2 + 0x59);
      }
      if ((bVar6 & 1) == 0) {
        pbVar18 = pbVar13 + 1;
      }
      if ((bVar5 & 1) == 0) {
        if (sVar3 != 0) {
          pbVar13 = (byte *)(param_2 + 0x59);
          lVar10 = -(ulong)(bVar5 >> 1);
          do {
            if (*pbVar13 != *pbVar18) goto LAB_00b61134;
            pbVar13 = pbVar13 + 1;
            lVar10 = lVar10 + 1;
            pbVar18 = pbVar18 + 1;
          } while (lVar10 != 0);
        }
      }
      else if ((sVar3 != 0) && (iVar9 = memcmp(pvVar17,pbVar18,sVar3), iVar9 != 0))
      goto LAB_00b61134;
    }
    else {
LAB_00b61134:
      FUN_00ac9b64(param_1 + 0xda48,(byte *)(param_2 + 0x58),0,1);
      FUN_00b61524(param_1);
      FUN_00b5acf8(param_1);
    }
  }
  pbVar13 = (byte *)FUN_00ac9cd0(param_1 + 0xb110);
  bVar5 = *(byte *)(param_2 + 0x40);
  bVar6 = *pbVar13;
  sVar3 = (ulong)(bVar6 >> 1);
  if ((bVar6 & 1) != 0) {
    sVar3 = *(size_t *)(pbVar13 + 8);
  }
  sVar4 = (ulong)(bVar5 >> 1);
  if ((bVar5 & 1) != 0) {
    sVar4 = *(size_t *)(param_2 + 0x48);
  }
  if (sVar3 == sVar4) {
    __s1 = *(byte **)(pbVar13 + 0x10);
    pbVar18 = *(byte **)(param_2 + 0x50);
    if ((bVar6 & 1) == 0) {
      __s1 = pbVar13 + 1;
    }
    if ((bVar5 & 1) == 0) {
      pbVar18 = (byte *)(param_2 + 0x41);
    }
    if ((bVar6 & 1) == 0) {
      if (sVar3 != 0) {
        lVar10 = -(ulong)(bVar6 >> 1);
        do {
          pbVar13 = pbVar13 + 1;
          if (*pbVar13 != *pbVar18) goto LAB_00b611f8;
          lVar10 = lVar10 + 1;
          pbVar18 = pbVar18 + 1;
        } while (lVar10 != 0);
      }
    }
    else if ((sVar3 != 0) && (iVar9 = memcmp(__s1,pbVar18,sVar3), iVar9 != 0)) goto LAB_00b611f8;
  }
  else {
LAB_00b611f8:
    FUN_00ac9b64(param_1 + 0xb110,(byte *)(param_2 + 0x40),0,0);
  }
  *(uint *)(param_1 + 0xb194) = *(uint *)(param_1 + 0xb194) & 0xfffffffb | (uint)*pbVar2 << 2;
  *(uint *)(param_1 + 0x8544) =
       *(uint *)(param_1 + 0x8544) & 0xfffffffb | ((uint)*pbVar2 << 2 ^ 4) & 0xfc;
  FUN_00b60784(param_1);
  lVar10 = FUN_009580b8();
  FUN_008fcdb8(local_88,lVar10 + 0x54c0);
  sVar3 = (ulong)(local_88[0] >> 1);
  if ((local_88[0] & 1) != 0) {
    sVar3 = local_80;
  }
  sVar4 = (ulong)(DAT_0320ffa8 >> 1);
  if ((DAT_0320ffa8 & 1) != 0) {
    sVar4 = DAT_0320ffb0;
  }
  if (sVar3 == sVar4) {
    pcVar16 = (char *)((ulong)local_88 | 1);
    pcVar19 = pcVar16;
    if ((local_88[0] & 1) != 0) {
      pcVar19 = local_78;
    }
    pcVar14 = DAT_0320ffb8;
    if ((DAT_0320ffa8 & 1) == 0) {
      pcVar14 = &DAT_0320ffa9;
    }
    if ((local_88[0] & 1) == 0) {
      if (sVar3 != 0) {
        lVar10 = -(ulong)(local_88[0] >> 1);
        do {
          if (*pcVar16 != *pcVar14) goto LAB_00b612ec;
          pcVar16 = pcVar16 + 1;
          lVar10 = lVar10 + 1;
          pcVar14 = pcVar14 + 1;
        } while (lVar10 != 0);
      }
    }
    else if ((sVar3 != 0) && (iVar9 = memcmp(pcVar19,pcVar14,sVar3), iVar9 != 0)) goto LAB_00b612ec;
    FUN_00ac0980(param_1 + 0x28dc0,1);
    FUN_008fce60(param_1 + 0x2cf38,&DAT_0320ffa8);
  }
  else {
LAB_00b612ec:
    FUN_0090dab8(local_b8,&DAT_01b9349c,local_88);
    FUN_008fcdb8(local_a0,local_b8);
    if ((local_b8[0] & 1) != 0) {
      operator_delete(local_a8);
    }
    pbVar2 = (byte *)(param_1 + 0x2cf38);
    bVar5 = *pbVar2;
    sVar3 = (ulong)(local_a0[0] >> 1);
    if ((local_a0[0] & 1) != 0) {
      sVar3 = local_98;
    }
    sVar4 = (ulong)(bVar5 >> 1);
    if ((bVar5 & 1) != 0) {
      sVar4 = *(size_t *)(param_1 + 0x2cf40);
    }
    if (sVar3 == sVar4) {
      pcVar19 = *(char **)(param_1 + 0x2cf48);
      pcVar16 = (char *)((ulong)local_a0 | 1);
      pcVar14 = pcVar16;
      if ((local_a0[0] & 1) != 0) {
        pcVar14 = local_90;
      }
      if ((bVar5 & 1) == 0) {
        pcVar19 = (char *)(param_1 + 0x2cf39);
      }
      if ((local_a0[0] & 1) != 0) {
        if ((sVar3 != 0) && (iVar9 = memcmp(pcVar14,pcVar19,sVar3), iVar9 != 0)) goto LAB_00b613f4;
        goto LAB_00b61424;
      }
      if (sVar3 != 0) {
        lVar10 = -(ulong)(local_a0[0] >> 1);
        do {
          if (*pcVar16 != *pcVar19) goto LAB_00b613f4;
          pcVar16 = pcVar16 + 1;
          lVar10 = lVar10 + 1;
          pcVar19 = pcVar19 + 1;
        } while (lVar10 != 0);
      }
    }
    else {
LAB_00b613f4:
      FUN_008fce60(pbVar2,local_a0);
      FUN_00ac1c18(param_1 + 0x28dc0,pbVar2,0,0);
      if ((local_a0[0] & 1) != 0) {
LAB_00b61424:
        operator_delete(local_90);
      }
    }
  }
  if ((local_88[0] & 1) != 0) {
    operator_delete(local_78);
  }
LAB_00b60f10:
  if (*(long *)(lVar7 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

