// functions/00b5f — 7 functions
#include "libGameKindred.h"




void FUN_00b5f024(long param_1)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  
  *(uint *)(param_1 + 0x24314) = *(uint *)(param_1 + 0x24314) & 0xfffffffb;
  *(undefined1 *)(param_1 + 0x2cf9d) = 0;
  *(undefined1 *)(param_1 + 0x2cfa6) = 0;
  *(undefined4 *)(param_1 + 0x2d03c) = 0;
  FUN_00b60c88(param_1,1);
  uVar3 = *(uint *)(param_1 + 0x2cf8c);
  if (uVar3 < 0xe) {
    puVar1 = (uint *)(param_1 + (long)(int)uVar3 * 0x1328 + 0x136e4);
    uVar2 = *puVar1;
    if ((~uVar2 & 0x7f80) != 0) {
      *puVar1 = uVar2 | 0x7f80;
      FUN_0091ada4(param_1 + (long)(int)uVar3 * 0x1328 + 0x13660);
    }
  }
  lVar4 = *(long *)(param_1 + 0x255b8);
  if (lVar4 != 0) {
    FUN_00ae8170(lVar4,0);
    *(long *)(param_1 + 0x255b8) = 0;
  }
  FUN_00ed04d8(param_1 + 0x26470,0,1);
  uVar3 = FUN_00b5d95c(param_1);
  FUN_00ed04d8(param_1 + 0x7f88,0,uVar3 & 1);
  uVar3 = FUN_00b5d95c(param_1);
  *(uint *)(param_1 + 0x800c) =
       *(uint *)(param_1 + 0x800c) & 0xffffffe0 |
       *(uint *)(param_1 + 0x800c) & 0xf | (uVar3 & 1) << 4;
  return;
}




undefined8 FUN_00b5f14c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar3 = 0;
  param_1 = param_1 + 0x137b8;
  do {
    uVar1 = FUN_00f08be8(param_1);
    uVar2 = FUN_00e70b34(uVar1,param_2);
    if ((uVar2 & 1) != 0) {
      return 1;
    }
    uVar3 = uVar3 + 1;
    param_1 = param_1 + 0x1328;
  } while (uVar3 < 0xe);
  return 0;
}




void FUN_00b5f1b4(long param_1,undefined8 param_2,byte param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  
  if (*(uint *)(param_1 + 0x28aa8) != 0) {
    uVar4 = 0;
    plVar5 = (long *)(param_1 + 0x28ab0);
    do {
      lVar3 = *(long *)(*plVar5 + (uVar4 & 0xffffffff) * 8);
      if (lVar3 == 0) break;
      uVar1 = FUN_00f08be8(lVar3 + 0x158);
      uVar2 = FUN_00e70b34(uVar1,param_2);
      if ((uVar2 & 1) != 0) goto LAB_00b5f2d4;
      uVar4 = uVar4 + 1;
    } while ((uint)uVar4 < *(uint *)(param_1 + 0x28aa8));
  }
  if (*(uint *)(param_1 + 0x28ab8) != 0) {
    uVar4 = 0;
    plVar5 = (long *)(param_1 + 0x28ac0);
    do {
      lVar3 = *(long *)(*plVar5 + (uVar4 & 0xffffffff) * 8);
      if (lVar3 == 0) break;
      uVar1 = FUN_00f08be8(lVar3 + 0x158);
      uVar2 = FUN_00e70b34(uVar1,param_2);
      if ((uVar2 & 1) != 0) goto LAB_00b5f2d4;
      uVar4 = uVar4 + 1;
    } while ((uint)uVar4 < *(uint *)(param_1 + 0x28ab8));
  }
  if (*(uint *)(param_1 + 0x28ac8) != 0) {
    uVar4 = 0;
    do {
      lVar3 = *(long *)(*(long *)(param_1 + 0x28ad0) + (uVar4 & 0xffffffff) * 8);
      if (lVar3 == 0) {
        return;
      }
      uVar1 = FUN_00f08be8(lVar3 + 0x158);
      uVar2 = FUN_00e70b34(uVar1,param_2);
      if ((uVar2 & 1) != 0) {
        lVar3 = *(long *)(param_1 + 0x28ad0);
        goto LAB_00b5f2e0;
      }
      uVar4 = uVar4 + 1;
    } while ((uint)uVar4 < *(uint *)(param_1 + 0x28ac8));
  }
  return;
LAB_00b5f2d4:
  lVar3 = *plVar5;
LAB_00b5f2e0:
  *(byte *)(*(long *)(lVar3 + uVar4 * 8) + 0x1230) = param_3 & 1;
  return;
}




void FUN_00b5f300(long param_1)

{
  long *plVar1;
  size_t sVar2;
  size_t sVar3;
  undefined4 uVar4;
  uint uVar5;
  byte bVar6;
  byte bVar7;
  long lVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  void *pvVar12;
  ulong *puVar13;
  long lVar14;
  ulong uVar15;
  char *pcVar16;
  byte *__s2;
  char *pcVar17;
  byte *pbVar18;
  int iVar19;
  ulong uVar20;
  long lVar21;
  void *local_b8;
  code *local_b0;
  long lStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  ulong local_90;
  undefined4 local_88;
  long local_80;
  
  lVar8 = tpidr_el0;
  local_80 = *(long *)(lVar8 + 0x28);
  FUN_00b5aae4();
  iVar19 = *(int *)(param_1 + 0x2ced0);
  lVar10 = FUN_009580b8();
  lVar11 = FUN_009580b8();
  if (*(uint *)(param_1 + 0x2cec0) != 0) {
    plVar1 = (long *)(param_1 + 0x2cec8);
    uVar4 = DAT_03210c64;
    uVar20 = 0;
    do {
      pvVar12 = operator_new(0x1518);
      FUN_00ae83b0();
      puVar13 = (ulong *)(*plVar1 + uVar20 * 0x188);
      uVar15 = *puVar13;
      local_b8 = pvVar12;
      FUN_00ae88a8(puVar13[0x14],pvVar12,puVar13 + 4,(int)puVar13[0x17],(int)puVar13[0x1d],
                   (uint)uVar15 & 0xffff,uVar15 >> 0x1f & 1,puVar13 + 1,uVar15 >> 0x20 & 1,
                   (uint)uVar15 >> 0x18 & 0x7f,puVar13 + 10,puVar13 + 0x11);
      local_b0 = FUN_00b5f83c;
      local_a0 = 0;
      uStack_98 = 0;
      lStack_a8 = param_1;
      local_90 = uVar20;
      local_88 = uVar4;
      FUN_009693a0((long)local_b8 + 0xc40,&local_b0);
      FUN_00ae8d38(*(undefined4 *)(param_1 + 0x2d034),0x42f00000,local_b8);
      bVar6 = *(byte *)(lVar11 + 0x5490);
      if ((bVar6 & 1) == 0) {
        if (bVar6 >> 1 == 0) goto LAB_00b5f5ac;
LAB_00b5f514:
        lVar14 = *plVar1 + uVar20 * 0x188;
        bVar7 = *(byte *)(lVar14 + 0x88);
        sVar2 = (ulong)(bVar6 >> 1);
        if ((bVar6 & 1) != 0) {
          sVar2 = *(size_t *)(lVar11 + 0x5498);
        }
        sVar3 = (ulong)(bVar7 >> 1);
        if ((bVar7 & 1) != 0) {
          sVar3 = *(size_t *)(lVar14 + 0x90);
        }
        if (sVar2 != sVar3) goto LAB_00b5f5ac;
        pcVar17 = *(char **)(*plVar1 + uVar20 * 0x188 + 0x98);
        pcVar16 = (char *)(lVar11 + 0x5491);
        if ((bVar6 & 1) != 0) {
          pcVar16 = *(char **)(lVar11 + 0x54a0);
        }
        if ((bVar7 & 1) == 0) {
          pcVar17 = (char *)(lVar14 + 0x89);
        }
        if ((bVar6 & 1) == 0) {
          if (sVar2 != 0) {
            lVar14 = -(ulong)(bVar6 >> 1);
            pcVar16 = (char *)(lVar11 + 0x5491);
            do {
              if (*pcVar16 != *pcVar17) goto LAB_00b5f5ac;
              pcVar16 = pcVar16 + 1;
              lVar14 = lVar14 + 1;
              pcVar17 = pcVar17 + 1;
            } while (lVar14 != 0);
          }
        }
        else if ((sVar2 != 0) && (iVar9 = memcmp(pcVar16,pcVar17,sVar2), iVar9 != 0))
        goto LAB_00b5f5ac;
        FUN_00b5f844(param_1 + 0x28ac8,&local_b8);
        lVar14 = param_1 + 0x27fa8;
      }
      else {
        if (*(long *)(lVar11 + 0x5498) != 0) goto LAB_00b5f514;
LAB_00b5f5ac:
        bVar6 = *(byte *)(lVar10 + 0x5478);
        if ((bVar6 & 1) == 0) {
          if (bVar6 >> 1 != 0) {
LAB_00b5f5d0:
            lVar14 = *plVar1 + uVar20 * 0x188;
            bVar7 = *(byte *)(lVar14 + 0x50);
            sVar2 = (ulong)(bVar6 >> 1);
            if ((bVar6 & 1) != 0) {
              sVar2 = *(size_t *)(lVar10 + 0x5480);
            }
            sVar3 = (ulong)(bVar7 >> 1);
            if ((bVar7 & 1) != 0) {
              sVar3 = *(size_t *)(lVar14 + 0x58);
            }
            if (sVar2 == sVar3) {
              pcVar17 = *(char **)(*plVar1 + uVar20 * 0x188 + 0x60);
              pcVar16 = (char *)(lVar10 + 0x5479);
              if ((bVar6 & 1) != 0) {
                pcVar16 = *(char **)(lVar10 + 0x5488);
              }
              if ((bVar7 & 1) == 0) {
                pcVar17 = (char *)(lVar14 + 0x51);
              }
              if ((bVar6 & 1) == 0) {
                if (sVar2 != 0) {
                  lVar14 = -(ulong)(bVar6 >> 1);
                  pcVar16 = (char *)(lVar10 + 0x5479);
                  do {
                    if (*pcVar16 != *pcVar17) goto LAB_00b5f688;
                    pcVar16 = pcVar16 + 1;
                    lVar14 = lVar14 + 1;
                    pcVar17 = pcVar17 + 1;
                  } while (lVar14 != 0);
                }
              }
              else if ((sVar2 != 0) && (iVar9 = memcmp(pcVar16,pcVar17,sVar2), iVar9 != 0))
              goto LAB_00b5f688;
              FUN_00b5f844(param_1 + 0x28ab8,&local_b8);
              lVar14 = param_1 + 0x274a8;
              goto LAB_00b5f6b4;
            }
          }
        }
        else if (*(long *)(lVar10 + 0x5480) != 0) goto LAB_00b5f5d0;
LAB_00b5f688:
        FUN_00b5f844(param_1 + 0x28aa8,&local_b8);
        lVar14 = param_1 + 0x269a8;
      }
LAB_00b5f6b4:
      FUN_00f023ec(lVar14,local_b8,1);
      if (0 < iVar19) {
        uVar15 = 0;
        do {
          lVar14 = param_1 + uVar15 * 4;
          uVar5 = *(uint *)(lVar14 + 0x2cf50);
          if (uVar5 == 0xffffffff) {
            *(undefined4 *)(lVar14 + 0x2cf00) = 1;
          }
          else {
            lVar21 = *plVar1;
            lVar14 = lVar21 + uVar20 * 0x188;
            bVar6 = *(byte *)(lVar14 + 8);
            pbVar18 = (byte *)(*(long *)(param_1 + 0x2ced8) + (ulong)uVar5 * 0x88);
            bVar7 = *pbVar18;
            sVar2 = (ulong)(bVar6 >> 1);
            if ((bVar6 & 1) != 0) {
              sVar2 = *(size_t *)(lVar14 + 0x10);
            }
            sVar3 = (ulong)(bVar7 >> 1);
            if ((bVar7 & 1) != 0) {
              sVar3 = *(size_t *)(pbVar18 + 8);
            }
            if (sVar2 == sVar3) {
              pvVar12 = *(void **)(lVar21 + uVar20 * 0x188 + 0x18);
              __s2 = *(byte **)(*(long *)(param_1 + 0x2ced8) + (ulong)uVar5 * 0x88 + 0x10);
              if ((bVar6 & 1) == 0) {
                pvVar12 = (void *)(lVar14 + 9);
              }
              if ((bVar7 & 1) == 0) {
                __s2 = pbVar18 + 1;
              }
              if ((bVar6 & 1) == 0) {
                if (sVar2 == 0) {
LAB_00b5f7c0:
                  *(uint *)(param_1 + (uVar15 & 0xffffffff) * 4 + 0x2cf00) =
                       (uint)*(ushort *)(lVar21 + uVar20 * 0x188);
                  iVar19 = iVar19 + -1;
                  break;
                }
                pbVar18 = (byte *)(lVar14 + 9);
                lVar14 = -(ulong)(bVar6 >> 1);
                while (*pbVar18 == *__s2) {
                  pbVar18 = pbVar18 + 1;
                  lVar14 = lVar14 + 1;
                  __s2 = __s2 + 1;
                  if (lVar14 == 0) goto LAB_00b5f7c0;
                }
              }
              else if ((sVar2 == 0) || (iVar9 = memcmp(pvVar12,__s2,sVar2), iVar9 == 0))
              goto LAB_00b5f7c0;
            }
          }
          uVar15 = uVar15 + 1;
        } while (uVar15 < 0xe);
      }
      uVar20 = uVar20 + 1;
    } while (uVar20 < *(uint *)(param_1 + 0x2cec0));
  }
  FUN_00b5f8cc(param_1);
  FUN_00b60480(param_1);
  if (*(long *)(lVar8 + 0x28) != local_80) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00b5f83c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  FUN_00b629cc(param_1,param_2,param_5);
  return;
}




void FUN_00b5f844(uint *param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = *param_1;
  if (uVar3 == param_1[1]) {
    if (uVar3 < 0x20) {
      uVar2 = uVar3 << 1;
    }
    else if (uVar3 == 0xffffffff) {
      uVar2 = 0;
    }
    else {
      uVar2 = (uVar3 + 0x10) - (uVar3 & 0xf);
    }
    uVar1 = uVar3 + 1;
    if (uVar3 + 1 <= uVar2) {
      uVar1 = uVar2;
    }
    FUN_00b63ec0(param_1,uVar1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




void FUN_00b5f8cc(long param_1)

{
  uint *puVar1;
  long *plVar2;
  float *pfVar3;
  long *plVar4;
  long *plVar5;
  uint uVar6;
  long lVar7;
  bool bVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  float fVar12;
  undefined8 uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined8 local_90;
  long local_88;
  
  lVar7 = tpidr_el0;
  local_88 = *(long *)(lVar7 + 0x28);
  puVar1 = (uint *)(param_1 + 0x28ac8);
  bVar8 = *puVar1 != 0;
  *(uint *)(param_1 + 0x280b4) =
       *(uint *)(param_1 + 0x280b4) & 0xfffffff8 |
       *(uint *)(param_1 + 0x280b4) & 3 | (uint)bVar8 << 2;
  uVar6 = (uint)(bVar8 && *(char *)(param_1 + 0x2cfa1) != '\0');
  *(uint *)(param_1 + 0x281e4) =
       *(uint *)(param_1 + 0x281e4) & 0xfffffff8 | *(uint *)(param_1 + 0x281e4) & 3 | uVar6 << 2;
  *(uint *)(param_1 + 0x28314) =
       *(uint *)(param_1 + 0x28314) & 0xfffffff8 | *(uint *)(param_1 + 0x28314) & 3 | uVar6 << 2;
  fVar15 = *(float *)(&DAT_01bb4d28 + (ulong)*(byte *)(param_1 + 0x2cfa5) * 4);
  fVar16 = *(float *)(&DAT_01bb4d20 + (ulong)((ulong)*(byte *)(param_1 + 0x2cfa5) != 0) * 4);
  *(uint *)(param_1 + 0x28534) =
       *(uint *)(param_1 + 0x28534) & 0xfffffff8 |
       *(uint *)(param_1 + 0x28534) & 3 | (uint)bVar8 << 2;
  if (*puVar1 == 0) {
    fVar14 = 66.0;
  }
  else {
    plVar2 = (long *)(param_1 + 0x28030);
    pfVar3 = (float *)(param_1 + 0x28070);
    plVar4 = (long *)(param_1 + 0x284b0);
    if ((*pfVar3 != 65.0) || (*(float *)(param_1 + 0x28074) != 66.0)) {
      pfVar3[0] = 65.0;
      pfVar3[1] = 66.0;
      FUN_0091ada4(plVar2);
    }
    local_90 = 0x3f00000000000000;
    (**(code **)(*plVar2 + 0x28))(plVar2,&local_90);
    pfVar3 = (float *)(param_1 + 0x284f0);
    if ((*pfVar3 != 23.0) || (*(float *)(param_1 + 0x284f4) != 66.0)) {
      pfVar3[0] = 23.0;
      pfVar3[1] = 66.0;
      FUN_0091ada4(plVar4);
    }
    local_90 = 0x3f0000003f000000;
    (**(code **)(*plVar4 + 0x28))(plVar4,&local_90);
    plVar4 = (long *)(param_1 + 0x28ad0);
    FUN_00f07b18(0,param_1 + 0x28160,4,*(long *)*plVar4 + 0x498,4);
    FUN_00f07b18(0,param_1 + 0x28160,2,plVar2,2);
    FUN_00f07b18(0,param_1 + 0x28290,4,*(long *)*plVar4 + 0x868,4);
    FUN_00f07b18(0,param_1 + 0x28290,2,plVar2,2);
    pfVar3 = (float *)(param_1 + 0x28400);
    if ((*pfVar3 != 65.0) || (*(float *)(param_1 + 0x28404) != 110.0)) {
      pfVar3[0] = 65.0;
      pfVar3[1] = 110.0;
      FUN_0091ada4(param_1 + 0x283c0);
    }
    FUN_00f13f08(fVar16 + -65.0 + -32.0,0x40800000,param_1 + 0x283c0);
    fVar14 = fVar15 * 0.5 + 4.0 + 110.0;
    if ((*(float *)(param_1 + 0x27fe8) != 0.0) || (*(float *)(param_1 + 0x27fec) != fVar14)) {
      *(float *)(param_1 + 0x27fe8) = 0.0;
      *(float *)(param_1 + 0x27fec) = fVar14;
      FUN_0091ada4(param_1 + 0x27fa8);
    }
    uVar6 = *puVar1;
    uVar9 = (ulong)uVar6;
    if (*(char *)(param_1 + 0x2cfa1) == '\0') {
      if (uVar6 != 0) {
        uVar9 = 0;
        do {
          lVar10 = *(long *)(*plVar4 + uVar9 * 8);
          uVar9 = uVar9 + 1;
          *(uint *)(lVar10 + 0x84) = *(uint *)(lVar10 + 0x84) & 0xfffffffb;
        } while (uVar9 < *puVar1);
      }
    }
    else {
      if (uVar6 != 0) {
        uVar11 = 0;
        do {
          lVar10 = *(long *)(*plVar4 + uVar11 * 8);
          *(uint *)(lVar10 + 0x84) = *(uint *)(lVar10 + 0x84) | 4;
          lVar10 = *(long *)(*plVar4 + uVar11 * 8);
          fVar12 = fVar15 * (float)(uVar11 & 0xffffffff);
          if ((*(float *)(lVar10 + 0x40) != 0.0) || (*(float *)(lVar10 + 0x44) != fVar12)) {
            *(undefined4 *)(lVar10 + 0x40) = 0;
            *(float *)(lVar10 + 0x44) = fVar12;
            FUN_0091ada4();
          }
          uVar9 = (ulong)*puVar1;
          uVar11 = uVar11 + 1;
        } while (uVar11 < uVar9);
      }
      fVar14 = fVar14 + fVar15 * (float)uVar9;
    }
  }
  puVar1 = (uint *)(param_1 + 0x28ab8);
  bVar8 = *puVar1 != 0;
  *(uint *)(param_1 + 0x275b4) =
       *(uint *)(param_1 + 0x275b4) & 0xfffffff8 |
       *(uint *)(param_1 + 0x275b4) & 3 | (uint)bVar8 << 2;
  uVar6 = (uint)(bVar8 && *(char *)(param_1 + 0x2cfa0) != '\0');
  *(uint *)(param_1 + 0x276e4) =
       *(uint *)(param_1 + 0x276e4) & 0xfffffff8 | *(uint *)(param_1 + 0x276e4) & 3 | uVar6 << 2;
  *(uint *)(param_1 + 0x27814) =
       *(uint *)(param_1 + 0x27814) & 0xfffffff8 | *(uint *)(param_1 + 0x27814) & 3 | uVar6 << 2;
  *(uint *)(param_1 + 0x27a34) =
       *(uint *)(param_1 + 0x27a34) & 0xfffffff8 |
       *(uint *)(param_1 + 0x27a34) & 3 | (uint)bVar8 << 2;
  if (*puVar1 != 0) {
    plVar2 = (long *)(param_1 + 0x27530);
    plVar4 = (long *)(param_1 + 0x279b0);
    if ((*(float *)(param_1 + 0x27570) != 65.0) || (*(float *)(param_1 + 0x27574) != fVar14)) {
      *(float *)(param_1 + 0x27570) = 65.0;
      *(float *)(param_1 + 0x27574) = fVar14;
      FUN_0091ada4(plVar2);
    }
    local_90 = 0x3f00000000000000;
    (**(code **)(*plVar2 + 0x28))(plVar2,&local_90);
    plVar5 = (long *)(param_1 + 0x28ac0);
    FUN_00f07b18(0,param_1 + 0x27660,4,*(long *)*plVar5 + 0x498,4);
    FUN_00f07b18(0,param_1 + 0x27660,2,plVar2,2);
    FUN_00f07b18(0,param_1 + 0x27790,4,*(long *)*plVar5 + 0x868,4);
    FUN_00f07b18(0,param_1 + 0x27790,2,plVar2,2);
    if ((*(float *)(param_1 + 0x279f0) != 23.0) || (*(float *)(param_1 + 0x279f4) != fVar14)) {
      *(float *)(param_1 + 0x279f0) = 23.0;
      *(float *)(param_1 + 0x279f4) = fVar14;
      FUN_0091ada4(plVar4);
    }
    local_90 = 0x3f0000003f000000;
    (**(code **)(*plVar4 + 0x28))(plVar4,&local_90);
    fVar14 = fVar14 + 44.0;
    if ((*(float *)(param_1 + 0x27900) != 65.0) || (*(float *)(param_1 + 0x27904) != fVar14)) {
      *(float *)(param_1 + 0x27900) = 65.0;
      *(float *)(param_1 + 0x27904) = fVar14;
      FUN_0091ada4(param_1 + 0x278c0);
    }
    FUN_00f13f08(fVar16 + -65.0 + -32.0,0x40800000,param_1 + 0x278c0);
    fVar14 = fVar15 * 0.5 + 4.0 + fVar14;
    if ((*(float *)(param_1 + 0x274e8) != 0.0) || (*(float *)(param_1 + 0x274ec) != fVar14)) {
      *(float *)(param_1 + 0x274e8) = 0.0;
      *(float *)(param_1 + 0x274ec) = fVar14;
      FUN_0091ada4(param_1 + 0x274a8);
    }
    if (*(char *)(param_1 + 0x2cfa0) == '\0') {
      if (*puVar1 != 0) {
        uVar9 = 0;
        do {
          lVar10 = *(long *)(*plVar5 + uVar9 * 8);
          uVar9 = uVar9 + 1;
          *(uint *)(lVar10 + 0x84) = *(uint *)(lVar10 + 0x84) & 0xfffffffb;
        } while (uVar9 < *puVar1);
      }
    }
    else {
      if (*puVar1 == 0) {
        fVar12 = 0.0;
      }
      else {
        uVar9 = 0;
        do {
          lVar10 = *(long *)(*plVar5 + uVar9 * 8);
          *(uint *)(lVar10 + 0x84) = *(uint *)(lVar10 + 0x84) | 4;
          lVar10 = *(long *)(*plVar5 + uVar9 * 8);
          fVar12 = fVar15 * (float)(uVar9 & 0xffffffff);
          if ((*(float *)(lVar10 + 0x40) != 0.0) || (*(float *)(lVar10 + 0x44) != fVar12)) {
            *(undefined4 *)(lVar10 + 0x40) = 0;
            *(float *)(lVar10 + 0x44) = fVar12;
            FUN_0091ada4();
          }
          uVar9 = uVar9 + 1;
        } while (uVar9 < *puVar1);
        fVar12 = (float)*puVar1;
      }
      fVar14 = fVar14 + fVar15 * fVar12;
    }
  }
  puVar1 = (uint *)(param_1 + 0x28aa8);
  bVar8 = *puVar1 != 0;
  *(uint *)(param_1 + 0x26ab4) =
       *(uint *)(param_1 + 0x26ab4) & 0xfffffff8 |
       *(uint *)(param_1 + 0x26ab4) & 3 | (uint)bVar8 << 2;
  uVar6 = (uint)(*(char *)(param_1 + 0x2cfa2) != '\0' && bVar8);
  *(uint *)(param_1 + 0x26be4) =
       *(uint *)(param_1 + 0x26be4) & 0xfffffff8 | *(uint *)(param_1 + 0x26be4) & 3 | uVar6 << 2;
  *(uint *)(param_1 + 0x26d14) =
       *(uint *)(param_1 + 0x26d14) & 0xfffffff8 | *(uint *)(param_1 + 0x26d14) & 3 | uVar6 << 2;
  *(uint *)(param_1 + 0x26f34) =
       *(uint *)(param_1 + 0x26f34) & 0xfffffff8 |
       *(uint *)(param_1 + 0x26f34) & 3 | (uint)bVar8 << 2;
  if (*puVar1 != 0) {
    plVar2 = (long *)(param_1 + 0x26a30);
    plVar4 = (long *)(param_1 + 0x26eb0);
    if ((*(float *)(param_1 + 0x26a70) != 65.0) || (*(float *)(param_1 + 0x26a74) != fVar14)) {
      *(float *)(param_1 + 0x26a70) = 65.0;
      *(float *)(param_1 + 0x26a74) = fVar14;
      FUN_0091ada4(plVar2);
    }
    local_90 = 0x3f00000000000000;
    (**(code **)(*plVar2 + 0x28))(plVar2,&local_90);
    if ((*(float *)(param_1 + 0x26ef0) != 23.0) || (*(float *)(param_1 + 0x26ef4) != fVar14)) {
      *(float *)(param_1 + 0x26ef0) = 23.0;
      *(float *)(param_1 + 0x26ef4) = fVar14;
      FUN_0091ada4(plVar4);
    }
    local_90 = 0x3f0000003f000000;
    (**(code **)(*plVar4 + 0x28))(plVar4,&local_90);
    plVar4 = (long *)(param_1 + 0x28ab0);
    fVar14 = fVar14 + 44.0;
    FUN_00f07b18(0,param_1 + 0x26b60,4,*(long *)*plVar4 + 0x498,4);
    FUN_00f07b18(0,param_1 + 0x26b60,2,plVar2,2);
    FUN_00f07b18(0,param_1 + 0x26c90,4,*(long *)*plVar4 + 0x868,4);
    FUN_00f07b18(0,param_1 + 0x26c90,2,plVar2,2);
    if ((*(float *)(param_1 + 0x26e00) != 65.0) || (*(float *)(param_1 + 0x26e04) != fVar14)) {
      *(float *)(param_1 + 0x26e00) = 65.0;
      *(float *)(param_1 + 0x26e04) = fVar14;
      FUN_0091ada4(param_1 + 0x26dc0);
    }
    FUN_00f13f08(fVar16 + -65.0 + -32.0,0x40800000,param_1 + 0x26dc0);
    fVar14 = fVar15 * 0.5 + 4.0 + fVar14;
    if ((*(float *)(param_1 + 0x269e8) != 0.0) || (*(float *)(param_1 + 0x269ec) != fVar14)) {
      *(float *)(param_1 + 0x269e8) = 0.0;
      *(float *)(param_1 + 0x269ec) = fVar14;
      FUN_0091ada4(param_1 + 0x269a8);
    }
    if (*(char *)(param_1 + 0x2cfa2) == '\0') {
      if (*puVar1 != 0) {
        uVar9 = 0;
        do {
          lVar10 = *(long *)(*plVar4 + uVar9 * 8);
          uVar9 = uVar9 + 1;
          *(uint *)(lVar10 + 0x84) = *(uint *)(lVar10 + 0x84) & 0xfffffffb;
        } while (uVar9 < *puVar1);
      }
    }
    else if (*puVar1 != 0) {
      uVar9 = 0;
      do {
        lVar10 = *(long *)(*plVar4 + uVar9 * 8);
        *(uint *)(lVar10 + 0x84) = *(uint *)(lVar10 + 0x84) | 4;
        FUN_00b09454(*(long *)(*plVar4 + uVar9 * 8) + 0xc38,*(char *)(param_1 + 0x2cfa7) == '\0');
        lVar10 = *(long *)(*plVar4 + uVar9 * 8);
        fVar16 = fVar15 * (float)(uVar9 & 0xffffffff);
        if ((*(float *)(lVar10 + 0x40) != 0.0) || (*(float *)(lVar10 + 0x44) != fVar16)) {
          *(undefined4 *)(lVar10 + 0x40) = 0;
          *(float *)(lVar10 + 0x44) = fVar16;
          FUN_0091ada4();
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 < *puVar1);
    }
  }
  uVar13 = FUN_00f13e54(param_1 + 0x262d0);
  FUN_00ed0470(param_1 + 0x26470,1,0,1,1);
  FUN_00ed02d8(uVar13,param_1 + 0x26470);
  if (*(long *)(lVar7 + 0x28) == local_88) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

