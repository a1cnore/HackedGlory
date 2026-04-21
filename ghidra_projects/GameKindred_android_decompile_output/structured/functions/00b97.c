// functions/00b97 — 5 functions
#include "libGameKindred.h"




long FUN_00b97198(uint *param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  long lVar6;
  undefined8 uVar7;
  
  uVar7 = *param_2;
  uVar4 = FUN_00e6a474(uVar7);
  uVar5 = FUN_0091ed5c(uVar7,uVar4,0x12345678);
  uVar2 = *param_1;
  if (uVar2 != 0) {
    lVar6 = *(long *)(param_1 + 2);
    uVar3 = 0;
    if (uVar2 != 0) {
      uVar3 = uVar5 / uVar2;
    }
    uVar3 = uVar5 - uVar3 * uVar2;
    while ((*(uint *)(lVar6 + (ulong)uVar3 * 8) != uVar5 &&
           (*(int *)(lVar6 + (ulong)uVar3 * 8 + 4) != -1))) {
      uVar1 = uVar2;
      if (0 < (int)uVar3) {
        uVar1 = uVar3;
      }
      uVar3 = uVar1 - 1;
    }
    if ((uVar3 != 0xffffffff) &&
       (uVar2 = *(uint *)(lVar6 + (ulong)uVar3 * 8 + 4), uVar2 != 0xffffffff)) {
      return *(long *)(param_1 + 8) + (ulong)uVar2 * 0x38;
    }
  }
  return 0;
}




undefined8 FUN_00b97244(long param_1)

{
  FUN_00b96ebc(param_1 + -0x398);
  return 1;
}




void FUN_00b97260(long param_1,byte *param_2,undefined8 param_3)

{
  ulong uVar1;
  size_t sVar2;
  size_t sVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  uint uVar7;
  long lVar8;
  byte *pbVar9;
  long lVar10;
  void *pvVar11;
  byte *pbVar12;
  byte *pbVar13;
  long lVar14;
  uint uVar15;
  ulong uVar16;
  
  lVar8 = FUN_009580b8();
  bVar4 = *(byte *)(lVar8 + 0x5508);
  bVar5 = *param_2;
  sVar3 = (ulong)(bVar4 >> 1);
  if ((bVar4 & 1) != 0) {
    sVar3 = *(size_t *)(lVar8 + 0x5510);
  }
  sVar2 = (ulong)(bVar5 >> 1);
  if ((bVar5 & 1) != 0) {
    sVar2 = *(size_t *)(param_2 + 8);
  }
  if (sVar3 != sVar2) {
LAB_00b97320:
    uVar15 = *(uint *)(param_1 + 0x12090);
    if (uVar15 != 0) {
      pbVar13 = *(byte **)(param_2 + 0x10);
      lVar8 = *(long *)(param_1 + 0x12098);
      uVar16 = 0;
      if ((bVar5 & 1) == 0) {
        pbVar13 = param_2 + 1;
      }
      do {
        lVar14 = *(long *)(lVar8 + uVar16 * 8);
        bVar4 = *(byte *)(lVar14 + 0x3d80);
        sVar3 = (ulong)(bVar4 >> 1);
        if ((bVar4 & 1) != 0) {
          sVar3 = *(size_t *)(lVar14 + 0x3d88);
        }
        if (sVar3 == sVar2) {
          pvVar11 = *(void **)(lVar14 + 0x3d90);
          if ((bVar4 & 1) == 0) {
            pvVar11 = (void *)(lVar14 + 0x3d81);
          }
          if ((bVar4 & 1) == 0) {
            if (sVar2 == 0) goto LAB_00b97a7c;
            pbVar9 = (byte *)(lVar14 + 0x3d81);
            lVar10 = -(ulong)(bVar4 >> 1);
            pbVar12 = pbVar13;
            while (*pbVar9 == *pbVar12) {
              pbVar9 = pbVar9 + 1;
              lVar10 = lVar10 + 1;
              pbVar12 = pbVar12 + 1;
              if (lVar10 == 0) goto LAB_00b97a7c;
            }
          }
          else if ((sVar2 == 0) || (iVar6 = memcmp(pvVar11,pbVar13,sVar2), iVar6 == 0))
          goto LAB_00b97a7c;
        }
        uVar16 = uVar16 + 1;
      } while (uVar16 < uVar15);
    }
    uVar15 = *(uint *)(param_1 + 0x120a0);
    if (uVar15 != 0) {
      pbVar13 = *(byte **)(param_2 + 0x10);
      lVar8 = *(long *)(param_1 + 0x120a8);
      uVar16 = 0;
      if ((bVar5 & 1) == 0) {
        pbVar13 = param_2 + 1;
      }
      do {
        lVar14 = *(long *)(lVar8 + uVar16 * 8);
        bVar4 = *(byte *)(lVar14 + 0x3d80);
        sVar3 = (ulong)(bVar4 >> 1);
        if ((bVar4 & 1) != 0) {
          sVar3 = *(size_t *)(lVar14 + 0x3d88);
        }
        if (sVar3 == sVar2) {
          pvVar11 = *(void **)(lVar14 + 0x3d90);
          if ((bVar4 & 1) == 0) {
            pvVar11 = (void *)(lVar14 + 0x3d81);
          }
          if ((bVar4 & 1) == 0) {
            if (sVar2 == 0) goto LAB_00b97a7c;
            pbVar9 = (byte *)(lVar14 + 0x3d81);
            lVar10 = -(ulong)(bVar4 >> 1);
            pbVar12 = pbVar13;
            while (*pbVar9 == *pbVar12) {
              pbVar9 = pbVar9 + 1;
              lVar10 = lVar10 + 1;
              pbVar12 = pbVar12 + 1;
              if (lVar10 == 0) goto LAB_00b97a7c;
            }
          }
          else if ((sVar2 == 0) || (iVar6 = memcmp(pvVar11,pbVar13,sVar2), iVar6 == 0))
          goto LAB_00b97a7c;
        }
        uVar16 = uVar16 + 1;
      } while (uVar16 < uVar15);
    }
    uVar15 = *(uint *)(param_1 + 0x12080);
    if (uVar15 != 0) {
      pbVar13 = *(byte **)(param_2 + 0x10);
      lVar8 = *(long *)(param_1 + 0x12088);
      uVar16 = 0;
      if ((bVar5 & 1) == 0) {
        pbVar13 = param_2 + 1;
      }
      do {
        lVar14 = *(long *)(lVar8 + uVar16 * 8);
        bVar4 = *(byte *)(lVar14 + 0x3d80);
        sVar3 = (ulong)(bVar4 >> 1);
        if ((bVar4 & 1) != 0) {
          sVar3 = *(size_t *)(lVar14 + 0x3d88);
        }
        if (sVar3 == sVar2) {
          pvVar11 = *(void **)(lVar14 + 0x3d90);
          if ((bVar4 & 1) == 0) {
            pvVar11 = (void *)(lVar14 + 0x3d81);
          }
          if ((bVar4 & 1) == 0) {
            if (sVar2 == 0) goto LAB_00b97a7c;
            pbVar9 = (byte *)(lVar14 + 0x3d81);
            lVar10 = -(ulong)(bVar4 >> 1);
            pbVar12 = pbVar13;
            while (*pbVar9 == *pbVar12) {
              pbVar9 = pbVar9 + 1;
              lVar10 = lVar10 + 1;
              pbVar12 = pbVar12 + 1;
              if (lVar10 == 0) goto LAB_00b97a7c;
            }
          }
          else if ((sVar2 == 0) || (iVar6 = memcmp(pvVar11,pbVar13,sVar2), iVar6 == 0))
          goto LAB_00b97a7c;
        }
        uVar16 = uVar16 + 1;
      } while (uVar16 < uVar15);
    }
    uVar15 = *(uint *)(param_1 + 0x12050);
    if (uVar15 != 0) {
      pbVar13 = *(byte **)(param_2 + 0x10);
      lVar8 = *(long *)(param_1 + 0x12058);
      uVar16 = 0;
      if ((bVar5 & 1) == 0) {
        pbVar13 = param_2 + 1;
      }
      do {
        lVar14 = *(long *)(lVar8 + uVar16 * 8);
        bVar4 = *(byte *)(lVar14 + 0x3d80);
        sVar3 = (ulong)(bVar4 >> 1);
        if ((bVar4 & 1) != 0) {
          sVar3 = *(size_t *)(lVar14 + 0x3d88);
        }
        if (sVar3 == sVar2) {
          pvVar11 = *(void **)(lVar14 + 0x3d90);
          if ((bVar4 & 1) == 0) {
            pvVar11 = (void *)(lVar14 + 0x3d81);
          }
          if ((bVar4 & 1) == 0) {
            if (sVar2 == 0) goto LAB_00b97a7c;
            pbVar9 = (byte *)(lVar14 + 0x3d81);
            lVar10 = -(ulong)(bVar4 >> 1);
            pbVar12 = pbVar13;
            while (*pbVar9 == *pbVar12) {
              pbVar9 = pbVar9 + 1;
              lVar10 = lVar10 + 1;
              pbVar12 = pbVar12 + 1;
              if (lVar10 == 0) goto LAB_00b97a7c;
            }
          }
          else if ((sVar2 == 0) || (iVar6 = memcmp(pvVar11,pbVar13,sVar2), iVar6 == 0))
          goto LAB_00b97a7c;
        }
        uVar16 = uVar16 + 1;
      } while (uVar16 < uVar15);
    }
    uVar15 = *(uint *)(param_1 + 0x12060);
    if (uVar15 != 0) {
      pbVar13 = *(byte **)(param_2 + 0x10);
      lVar8 = *(long *)(param_1 + 0x12068);
      uVar16 = 0;
      if ((bVar5 & 1) == 0) {
        pbVar13 = param_2 + 1;
      }
      do {
        lVar14 = *(long *)(lVar8 + uVar16 * 8);
        bVar4 = *(byte *)(lVar14 + 0x3d80);
        sVar3 = (ulong)(bVar4 >> 1);
        if ((bVar4 & 1) != 0) {
          sVar3 = *(size_t *)(lVar14 + 0x3d88);
        }
        if (sVar3 == sVar2) {
          pvVar11 = *(void **)(lVar14 + 0x3d90);
          if ((bVar4 & 1) == 0) {
            pvVar11 = (void *)(lVar14 + 0x3d81);
          }
          if ((bVar4 & 1) == 0) {
            if (sVar2 == 0) goto LAB_00b97a7c;
            pbVar9 = (byte *)(lVar14 + 0x3d81);
            lVar10 = -(ulong)(bVar4 >> 1);
            pbVar12 = pbVar13;
            while (*pbVar9 == *pbVar12) {
              pbVar9 = pbVar9 + 1;
              lVar10 = lVar10 + 1;
              pbVar12 = pbVar12 + 1;
              if (lVar10 == 0) goto LAB_00b97a7c;
            }
          }
          else if ((sVar2 == 0) || (iVar6 = memcmp(pvVar11,pbVar13,sVar2), iVar6 == 0))
          goto LAB_00b97a7c;
        }
        uVar16 = uVar16 + 1;
      } while (uVar16 < uVar15);
    }
    uVar15 = *(uint *)(param_1 + 0x12040);
    if (uVar15 != 0) {
      pbVar13 = *(byte **)(param_2 + 0x10);
      lVar8 = *(long *)(param_1 + 0x12048);
      uVar16 = 0;
      if ((bVar5 & 1) == 0) {
        pbVar13 = param_2 + 1;
      }
      do {
        lVar14 = *(long *)(lVar8 + uVar16 * 8);
        bVar4 = *(byte *)(lVar14 + 0x3d80);
        sVar3 = (ulong)(bVar4 >> 1);
        if ((bVar4 & 1) != 0) {
          sVar3 = *(size_t *)(lVar14 + 0x3d88);
        }
        if (sVar3 == sVar2) {
          pvVar11 = *(void **)(lVar14 + 0x3d90);
          if ((bVar4 & 1) == 0) {
            pvVar11 = (void *)(lVar14 + 0x3d81);
          }
          if ((bVar4 & 1) == 0) {
            if (sVar2 == 0) goto LAB_00b97a7c;
            pbVar9 = (byte *)(lVar14 + 0x3d81);
            lVar10 = -(ulong)(bVar4 >> 1);
            pbVar12 = pbVar13;
            while (*pbVar9 == *pbVar12) {
              pbVar9 = pbVar9 + 1;
              lVar10 = lVar10 + 1;
              pbVar12 = pbVar12 + 1;
              if (lVar10 == 0) goto LAB_00b97a7c;
            }
          }
          else if ((sVar2 == 0) || (iVar6 = memcmp(pvVar11,pbVar13,sVar2), iVar6 == 0))
          goto LAB_00b97a7c;
        }
        uVar16 = uVar16 + 1;
      } while (uVar16 < uVar15);
    }
    uVar15 = *(uint *)(param_1 + 0x12070);
    if (uVar15 != 0) {
      pbVar13 = *(byte **)(param_2 + 0x10);
      lVar8 = *(long *)(param_1 + 0x12078);
      uVar16 = 0;
      if ((bVar5 & 1) == 0) {
        pbVar13 = param_2 + 1;
      }
      do {
        lVar14 = *(long *)(lVar8 + uVar16 * 8);
        bVar4 = *(byte *)(lVar14 + 0x3d80);
        sVar3 = (ulong)(bVar4 >> 1);
        if ((bVar4 & 1) != 0) {
          sVar3 = *(size_t *)(lVar14 + 0x3d88);
        }
        if (sVar3 == sVar2) {
          pvVar11 = *(void **)(lVar14 + 0x3d90);
          if ((bVar4 & 1) == 0) {
            pvVar11 = (void *)(lVar14 + 0x3d81);
          }
          if ((bVar4 & 1) == 0) {
            if (sVar2 == 0) goto LAB_00b97a7c;
            pbVar9 = (byte *)(lVar14 + 0x3d81);
            lVar10 = -(ulong)(bVar4 >> 1);
            pbVar12 = pbVar13;
            while (*pbVar9 == *pbVar12) {
              pbVar9 = pbVar9 + 1;
              lVar10 = lVar10 + 1;
              pbVar12 = pbVar12 + 1;
              if (lVar10 == 0) goto LAB_00b97a7c;
            }
          }
          else if ((sVar2 == 0) || (iVar6 = memcmp(pvVar11,pbVar13,sVar2), iVar6 == 0))
          goto LAB_00b97a7c;
        }
        uVar16 = uVar16 + 1;
      } while (uVar16 < uVar15);
    }
    lVar8 = FUN_009580b8();
    uVar15 = *(uint *)(lVar8 + 0x5360);
    if (uVar15 != 0) {
      sVar3 = *(size_t *)(param_2 + 8);
      pbVar13 = *(byte **)(param_2 + 0x10);
      lVar8 = *(long *)(lVar8 + 0x5368);
      uVar16 = 0;
      if ((*param_2 & 1) == 0) {
        pbVar13 = param_2 + 1;
        sVar3 = (ulong)(*param_2 >> 1);
      }
      do {
        pbVar9 = (byte *)(lVar8 + uVar16 * 0x38);
        bVar4 = *pbVar9;
        uVar1 = (ulong)(bVar4 >> 1);
        if ((bVar4 & 1) != 0) {
          uVar1 = *(ulong *)(pbVar9 + 8);
        }
        if (uVar1 == sVar3) {
          pbVar12 = *(byte **)(lVar8 + uVar16 * 0x38 + 0x10);
          if ((bVar4 & 1) == 0) {
            pbVar12 = pbVar9 + 1;
          }
          if ((bVar4 & 1) == 0) {
            if (sVar3 == 0) {
LAB_00b97abc:
              lVar14 = 0x38;
              goto LAB_00b97ad0;
            }
            lVar14 = -(ulong)(bVar4 >> 1);
            pbVar12 = pbVar13;
            while (pbVar9 = pbVar9 + 1, *pbVar9 == *pbVar12) {
              lVar14 = lVar14 + 1;
              pbVar12 = pbVar12 + 1;
              if (lVar14 == 0) goto LAB_00b97abc;
            }
          }
          else if ((sVar3 == 0) || (iVar6 = memcmp(pbVar12,pbVar13,sVar3), iVar6 == 0))
          goto LAB_00b97abc;
        }
        uVar16 = uVar16 + 1;
      } while (uVar16 < uVar15);
    }
    lVar8 = FUN_009580b8();
    uVar15 = *(uint *)(lVar8 + 0x5260);
    if (uVar15 != 0) {
      sVar3 = *(size_t *)(param_2 + 8);
      pbVar13 = *(byte **)(param_2 + 0x10);
      lVar8 = *(long *)(lVar8 + 0x5268);
      uVar16 = 0;
      if ((*param_2 & 1) == 0) {
        pbVar13 = param_2 + 1;
        sVar3 = (ulong)(*param_2 >> 1);
      }
      do {
        pbVar9 = (byte *)(lVar8 + uVar16 * 0x108);
        bVar4 = *pbVar9;
        uVar1 = (ulong)(bVar4 >> 1);
        if ((bVar4 & 1) != 0) {
          uVar1 = *(ulong *)(pbVar9 + 8);
        }
        if (uVar1 == sVar3) {
          pbVar12 = *(byte **)(lVar8 + uVar16 * 0x108 + 0x10);
          if ((bVar4 & 1) == 0) {
            pbVar12 = pbVar9 + 1;
          }
          if ((bVar4 & 1) == 0) {
            if (sVar3 != 0) {
              lVar14 = -(ulong)(bVar4 >> 1);
              pbVar12 = pbVar13;
              while (pbVar9 = pbVar9 + 1, *pbVar9 == *pbVar12) {
                lVar14 = lVar14 + 1;
                pbVar12 = pbVar12 + 1;
                if (lVar14 == 0) goto LAB_00b97ac8;
              }
              goto LAB_00b97998;
            }
          }
          else if ((sVar3 != 0) && (iVar6 = memcmp(pbVar12,pbVar13,sVar3), iVar6 != 0))
          goto LAB_00b97998;
LAB_00b97ac8:
          lVar14 = 0x108;
LAB_00b97ad0:
          param_1 = lVar8 + (uVar16 & 0xffffffff) * lVar14 + 0x18;
          goto LAB_00b97a9c;
        }
LAB_00b97998:
        uVar16 = uVar16 + 1;
      } while (uVar16 < uVar15);
    }
    iVar6 = FUN_00915ff4();
    if (iVar6 != 0) {
      uVar15 = 0;
      do {
        lVar8 = FUN_00916004(uVar15);
        bVar4 = *(byte *)(lVar8 + 8);
        bVar5 = *param_2;
        sVar3 = (ulong)(bVar4 >> 1);
        if ((bVar4 & 1) != 0) {
          sVar3 = *(size_t *)(lVar8 + 0x10);
        }
        sVar2 = (ulong)(bVar5 >> 1);
        if ((bVar5 & 1) != 0) {
          sVar2 = *(size_t *)(param_2 + 8);
        }
        if (sVar3 == sVar2) {
          pvVar11 = *(void **)(lVar8 + 0x18);
          if ((bVar4 & 1) == 0) {
            pvVar11 = (void *)(lVar8 + 9);
          }
          pbVar13 = param_2 + 1;
          if ((bVar5 & 1) != 0) {
            pbVar13 = *(byte **)(param_2 + 0x10);
          }
          if ((bVar4 & 1) == 0) {
            if (sVar3 == 0) {
LAB_00b97adc:
              param_1 = FUN_00916004(uVar15);
              param_1 = param_1 + 0x20;
              goto LAB_00b97a9c;
            }
            pbVar9 = (byte *)(lVar8 + 9);
            lVar8 = -(ulong)(bVar4 >> 1);
            while (*pbVar9 == *pbVar13) {
              pbVar9 = pbVar9 + 1;
              lVar8 = lVar8 + 1;
              pbVar13 = pbVar13 + 1;
              if (lVar8 == 0) goto LAB_00b97adc;
            }
          }
          else if ((sVar3 == 0) || (iVar6 = memcmp(pvVar11,pbVar13,sVar3), iVar6 == 0))
          goto LAB_00b97adc;
        }
        uVar15 = uVar15 + 1;
        uVar7 = FUN_00915ff4();
      } while (uVar15 < uVar7);
    }
    return;
  }
  pvVar11 = *(void **)(lVar8 + 0x5518);
  pbVar13 = *(byte **)(param_2 + 0x10);
  if ((bVar4 & 1) == 0) {
    pvVar11 = (void *)(lVar8 + 0x5509);
  }
  if ((bVar5 & 1) == 0) {
    pbVar13 = param_2 + 1;
  }
  if ((bVar4 & 1) == 0) {
    if (sVar3 != 0) {
      pbVar9 = (byte *)(lVar8 + 0x5509);
      lVar8 = -(ulong)(bVar4 >> 1);
      do {
        if (*pbVar9 != *pbVar13) goto LAB_00b97320;
        pbVar9 = pbVar9 + 1;
        lVar8 = lVar8 + 1;
        pbVar13 = pbVar13 + 1;
      } while (lVar8 != 0);
    }
  }
  else if ((sVar3 != 0) && (iVar6 = memcmp(pvVar11,pbVar13,sVar3), iVar6 != 0)) goto LAB_00b97320;
  param_1 = param_1 + 0x125b8;
LAB_00b97a9c:
  FUN_00910394(param_3,param_1);
  return;
LAB_00b97a7c:
  param_1 = lVar14 + 0x3ce0;
  goto LAB_00b97a9c;
}




void FUN_00b97aec(long param_1)

{
  FUN_00b97260(param_1 + -0x398);
  return;
}




void FUN_00b97af4(long *param_1,char *param_2,long param_3,long param_4,undefined8 param_5,
                 ulong param_6)

{
  size_t sVar1;
  size_t sVar2;
  ulong uVar3;
  byte bVar4;
  long lVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  long *plVar12;
  ulong uVar13;
  char *pcVar14;
  long lVar15;
  char *pcVar16;
  void *pvVar17;
  char *pcVar18;
  uint uVar19;
  long lVar20;
  ulong local_110;
  void *local_108;
  void *local_100;
  ulong local_f8;
  void *local_f0;
  void *local_e8;
  ulong local_e0;
  void *local_d8;
  void *local_d0;
  undefined8 local_c8;
  void *local_c0;
  ulong local_b8;
  void *local_b0;
  void *local_a8;
  undefined8 local_a0;
  void *local_98;
  byte local_90 [8];
  size_t local_88;
  char *local_80;
  long local_78;
  long local_70;
  
  lVar5 = tpidr_el0;
  local_70 = *(long *)(lVar5 + 0x28);
  uVar9 = 1;
  local_78 = param_3;
  if (((param_2 == (char *)0x0) || (param_3 == 0)) || (param_4 == 0)) goto LAB_00b984dc;
  lVar10 = FUN_00b97198(param_1 + 0x24b0,&local_78);
  uVar9 = 0;
  if (lVar10 == 0) goto LAB_00b984dc;
  FUN_008fcdb8(local_90,lVar10);
  FUN_00e70510(&local_a0);
  FUN_008fa54c(&local_b8,param_2);
  (**(code **)(*param_1 + 0x1d8))(param_1,&local_b8,&local_a0);
  if ((local_b8 & 1) != 0) {
    operator_delete(local_a8);
  }
  uVar11 = FUN_00e70b34(&local_a0,&DAT_03210450);
  if ((uVar11 & 1) != 0) {
    FUN_00e705c8(&local_b8,&DAT_01baf162);
    FUN_00910394(&local_a0,&local_b8);
    if (local_b0 != (void *)0x0) {
      operator_delete__(local_b0);
      local_b8 = 0;
      local_b0 = (void *)0x0;
    }
  }
  plVar12 = (long *)param_1[0x23f6];
  if (plVar12 == (long *)0x0) {
    bVar6 = false;
  }
  else {
    iVar7 = (**(code **)(*plVar12 + 0x40))();
    bVar6 = false;
    if (iVar7 == 2) {
      lVar10 = FUN_009580b8();
      if ((*(byte *)(lVar10 + 0x5508) & 1) == 0) {
        pcVar14 = (char *)(lVar10 + 0x5509);
      }
      else {
        pcVar14 = *(char **)(lVar10 + 0x5518);
      }
      iVar7 = strcasecmp(param_2,pcVar14);
      bVar6 = iVar7 == 0;
    }
  }
  uVar8 = FUN_00b943e0(param_1,local_90);
  if (uVar8 == 0xffffffff) {
    plVar12 = (long *)param_1[0x23f6];
    if ((plVar12 == (long *)0x0) || (iVar7 = (**(code **)(*plVar12 + 0x40))(), iVar7 != 2)) {
      uVar8 = FUN_00b96740(param_1,local_90);
      FUN_00b92674(param_1);
      goto LAB_00b97c98;
    }
  }
  else {
LAB_00b97c98:
    uVar11 = (ulong)uVar8;
    plVar12 = param_1 + 0x24af;
    FUN_00b96b18(*plVar12 + uVar11 * 0x50,&local_a0,param_4,param_5,bVar6,0);
    bVar4 = *(byte *)(param_1 + 0x24b9);
    sVar1 = (ulong)(local_90[0] >> 1);
    if ((local_90[0] & 1) != 0) {
      sVar1 = local_88;
    }
    sVar2 = (ulong)(bVar4 >> 1);
    if ((bVar4 & 1) != 0) {
      sVar2 = param_1[0x24ba];
    }
    if (sVar1 == sVar2) {
      pcVar18 = (char *)param_1[0x24bb];
      pcVar14 = (char *)((ulong)local_90 | 1);
      pcVar16 = pcVar14;
      if ((local_90[0] & 1) != 0) {
        pcVar16 = local_80;
      }
      if ((bVar4 & 1) == 0) {
        pcVar18 = (char *)((long)param_1 + 0x125c9);
      }
      if ((local_90[0] & 1) == 0) {
        if (sVar1 != 0) {
          lVar10 = -(ulong)(local_90[0] >> 1);
          do {
            if (*pcVar14 != *pcVar18) goto LAB_00b97d78;
            pcVar14 = pcVar14 + 1;
            lVar10 = lVar10 + 1;
            pcVar18 = pcVar18 + 1;
          } while (lVar10 != 0);
        }
      }
      else if ((sVar1 != 0) && (iVar7 = memcmp(pcVar16,pcVar18,sVar1), iVar7 != 0))
      goto LAB_00b97d78;
      if ((bVar6 == false) || ((param_6 & 1) != 0)) {
        FUN_00e705c8(&local_b8,param_4);
        FUN_00ac1474(param_1 + 0x1be8,&local_a0,&local_b8,param_5,bVar6,0);
        if (local_b0 != (void *)0x0) {
          operator_delete__(local_b0);
          local_b8 = 0;
          local_b0 = (void *)0x0;
        }
      }
      if ((param_6 & 1) == 0) {
        if ((*(byte *)(param_1 + 0x6c) >> 1 & 1) == 0) {
          FUN_0099cf3c(*plVar12 + uVar11 * 0x50,1);
        }
LAB_00b97f34:
        if (((*(byte *)(param_1 + 0x6c) >> 1 & 1) == 0) &&
           (uVar13 = FUN_0092e5ec(), (uVar13 & 1) != 0)) {
          uVar8 = *(uint *)(param_1 + 0x240a);
          if (uVar8 != 0) {
            lVar10 = param_1[0x240b];
            uVar19 = 0;
            sVar1 = (ulong)(local_90[0] >> 1);
            pcVar14 = (char *)((ulong)local_90 | 1);
            if ((local_90[0] & 1) != 0) {
              sVar1 = local_88;
              pcVar14 = local_80;
            }
            do {
              lVar20 = *(long *)(lVar10 + (ulong)uVar19 * 8);
              if (lVar20 == 0) break;
              bVar4 = *(byte *)(lVar20 + 0x3d80);
              uVar13 = (ulong)(bVar4 >> 1);
              if ((bVar4 & 1) != 0) {
                uVar13 = *(ulong *)(lVar20 + 0x3d88);
              }
              if (uVar13 == sVar1) {
                pvVar17 = *(void **)(lVar20 + 0x3d90);
                if ((bVar4 & 1) == 0) {
                  pvVar17 = (void *)(lVar20 + 0x3d81);
                }
                if ((bVar4 & 1) == 0) {
                  if (sVar1 != 0) {
                    pcVar18 = (char *)(lVar20 + 0x3d81);
                    lVar15 = -(ulong)(bVar4 >> 1);
                    pcVar16 = pcVar14;
                    do {
                      if (*pcVar18 != *pcVar16) goto LAB_00b98018;
                      pcVar18 = pcVar18 + 1;
                      lVar15 = lVar15 + 1;
                      pcVar16 = pcVar16 + 1;
                    } while (lVar15 != 0);
                  }
                }
                else if ((sVar1 != 0) && (iVar7 = memcmp(pvVar17,pcVar14,sVar1), iVar7 != 0))
                goto LAB_00b98018;
                if (*(char *)(lVar20 + 0x3dbc) != '\0') {
                  bVar6 = true;
                  goto LAB_00b98028;
                }
              }
LAB_00b98018:
              uVar19 = uVar19 + 1;
            } while (uVar19 < uVar8);
          }
          bVar6 = false;
LAB_00b98028:
          uVar8 = *(uint *)(param_1 + 0x2412);
          if (uVar8 != 0) {
            lVar10 = param_1[0x2413];
            uVar19 = 0;
            sVar1 = (ulong)(local_90[0] >> 1);
            pcVar14 = (char *)((ulong)local_90 | 1);
            if ((local_90[0] & 1) != 0) {
              sVar1 = local_88;
              pcVar14 = local_80;
            }
            do {
              lVar20 = *(long *)(lVar10 + (ulong)uVar19 * 8);
              if (lVar20 == 0) break;
              bVar4 = *(byte *)(lVar20 + 0x3d80);
              uVar13 = (ulong)(bVar4 >> 1);
              if ((bVar4 & 1) != 0) {
                uVar13 = *(ulong *)(lVar20 + 0x3d88);
              }
              if (uVar13 == sVar1) {
                pvVar17 = *(void **)(lVar20 + 0x3d90);
                if ((bVar4 & 1) == 0) {
                  pvVar17 = (void *)(lVar20 + 0x3d81);
                }
                if ((bVar4 & 1) == 0) {
                  if (sVar1 != 0) {
                    pcVar18 = (char *)(lVar20 + 0x3d81);
                    lVar15 = -(ulong)(bVar4 >> 1);
                    pcVar16 = pcVar14;
                    do {
                      if (*pcVar18 != *pcVar16) goto LAB_00b980fc;
                      pcVar18 = pcVar18 + 1;
                      lVar15 = lVar15 + 1;
                      pcVar16 = pcVar16 + 1;
                    } while (lVar15 != 0);
                  }
                }
                else if ((sVar1 != 0) && (iVar7 = memcmp(pvVar17,pcVar14,sVar1), iVar7 != 0))
                goto LAB_00b980fc;
                if (*(char *)(lVar20 + 0x3dbc) != '\0') {
                  bVar6 = true;
                  break;
                }
              }
LAB_00b980fc:
              uVar19 = uVar19 + 1;
            } while (uVar19 < uVar8);
          }
          uVar8 = *(uint *)(param_1 + 0x2414);
          if (uVar8 != 0) {
            lVar10 = param_1[0x2415];
            uVar19 = 0;
            sVar1 = (ulong)(local_90[0] >> 1);
            pcVar14 = (char *)((ulong)local_90 | 1);
            if ((local_90[0] & 1) != 0) {
              sVar1 = local_88;
              pcVar14 = local_80;
            }
            do {
              lVar20 = *(long *)(lVar10 + (ulong)uVar19 * 8);
              if (lVar20 == 0) break;
              bVar4 = *(byte *)(lVar20 + 0x3d80);
              uVar13 = (ulong)(bVar4 >> 1);
              if ((bVar4 & 1) != 0) {
                uVar13 = *(ulong *)(lVar20 + 0x3d88);
              }
              if (uVar13 == sVar1) {
                pvVar17 = *(void **)(lVar20 + 0x3d90);
                if ((bVar4 & 1) == 0) {
                  pvVar17 = (void *)(lVar20 + 0x3d81);
                }
                if ((bVar4 & 1) == 0) {
                  if (sVar1 != 0) {
                    pcVar18 = (char *)(lVar20 + 0x3d81);
                    lVar15 = -(ulong)(bVar4 >> 1);
                    pcVar16 = pcVar14;
                    do {
                      if (*pcVar18 != *pcVar16) goto LAB_00b981f4;
                      pcVar18 = pcVar18 + 1;
                      lVar15 = lVar15 + 1;
                      pcVar16 = pcVar16 + 1;
                    } while (lVar15 != 0);
                  }
                }
                else if ((sVar1 != 0) && (iVar7 = memcmp(pvVar17,pcVar14,sVar1), iVar7 != 0))
                goto LAB_00b981f4;
                if (*(char *)(lVar20 + 0x3dbc) != '\0') {
                  bVar6 = true;
                  break;
                }
              }
LAB_00b981f4:
              uVar19 = uVar19 + 1;
            } while (uVar19 < uVar8);
          }
          uVar8 = *(uint *)(param_1 + 0x2410);
          if (uVar8 != 0) {
            lVar10 = param_1[0x2411];
            uVar19 = 0;
            sVar1 = (ulong)(local_90[0] >> 1);
            pcVar14 = (char *)((ulong)local_90 | 1);
            if ((local_90[0] & 1) != 0) {
              sVar1 = local_88;
              pcVar14 = local_80;
            }
            do {
              lVar20 = *(long *)(lVar10 + (ulong)uVar19 * 8);
              if (lVar20 == 0) break;
              bVar4 = *(byte *)(lVar20 + 0x3d80);
              uVar13 = (ulong)(bVar4 >> 1);
              if ((bVar4 & 1) != 0) {
                uVar13 = *(ulong *)(lVar20 + 0x3d88);
              }
              if (uVar13 == sVar1) {
                pvVar17 = *(void **)(lVar20 + 0x3d90);
                if ((bVar4 & 1) == 0) {
                  pvVar17 = (void *)(lVar20 + 0x3d81);
                }
                if ((bVar4 & 1) == 0) {
                  if (sVar1 != 0) {
                    pcVar18 = (char *)(lVar20 + 0x3d81);
                    lVar15 = -(ulong)(bVar4 >> 1);
                    pcVar16 = pcVar14;
                    do {
                      if (*pcVar18 != *pcVar16) goto LAB_00b982e0;
                      pcVar18 = pcVar18 + 1;
                      lVar15 = lVar15 + 1;
                      pcVar16 = pcVar16 + 1;
                    } while (lVar15 != 0);
                  }
                }
                else if ((sVar1 != 0) && (iVar7 = memcmp(pvVar17,pcVar14,sVar1), iVar7 != 0))
                goto LAB_00b982e0;
                if (*(char *)(lVar20 + 0x3dbc) != '\0') goto LAB_00b982fc;
              }
LAB_00b982e0:
              uVar19 = uVar19 + 1;
            } while (uVar19 < uVar8);
          }
          if ((bVar6) || (uVar13 = FUN_0092e618(), (uVar13 & 1) == 0)) {
LAB_00b982fc:
            FUN_008fa54c(&local_b8,param_4);
            uVar9 = FUN_00e6ce7c("MENU_FRIENDS_MESSAGE_NOTIFICATION",0);
            thunk_FUN_00e7051c(&local_c8,uVar9);
            FUN_00e705c8(&local_e0,"[PLAYER_NAME]");
            FUN_00e71248(&local_c8,0,&local_e0,&local_a0);
            if (local_d8 != (void *)0x0) {
              operator_delete__(local_d8);
            }
            local_e0 = 0;
            local_d8 = (void *)0x0;
            local_d0 = (void *)0x0;
            uVar8 = (uint)((byte)local_b8 >> 1);
            if ((local_b8 & 1) != 0) {
              uVar8 = (uint)local_b0;
            }
            if (uVar8 < 0x21) {
              FUN_008fce60(&local_e0,&local_b8);
            }
            else {
              FUN_0093ddb0(&local_110,&local_b8,0,0x1d,&local_b8);
              FUN_008fcdb8(&local_f8,&local_110);
              FUN_008fce60(&local_e0,&local_f8);
              if ((local_f8 & 1) != 0) {
                operator_delete(local_e8);
              }
              if ((local_110 & 1) != 0) {
                operator_delete(local_100);
              }
              FUN_0090de84(&local_e0,"...",3);
            }
            FUN_00e705c8(&local_f8,"[PRIVATE_MESSAGE_PREVIEW]");
            FUN_00e70570(&local_110,&local_e0);
            FUN_00e71248(&local_c8,0,&local_f8,&local_110);
            if (local_108 != (void *)0x0) {
              operator_delete__(local_108);
              local_110 = 0;
              local_108 = (void *)0x0;
            }
            if (local_f0 != (void *)0x0) {
              operator_delete__(local_f0);
              local_f8 = 0;
              local_f0 = (void *)0x0;
            }
            if (*(char *)((long)param_1 + 0x12674) == '\0') {
              FUN_00a9db04(0x41700000,&local_c8,FUN_00b96c2c,uVar11,FUN_00b96c38,0,param_1,1,0,1);
            }
            if ((local_e0 & 1) != 0) {
              operator_delete(local_d0);
            }
            if (local_c0 != (void *)0x0) {
              operator_delete__(local_c0);
              local_c8 = 0;
              local_c0 = (void *)0x0;
            }
            if ((local_b8 & 1) != 0) {
              operator_delete(local_a8);
            }
          }
        }
      }
    }
    else {
LAB_00b97d78:
      if ((param_6 & 1) == 0) {
        lVar10 = *plVar12 + uVar11 * 0x50;
        *(undefined1 *)(lVar10 + 0x4c) = 1;
        FUN_0099cf3c(lVar10,1);
        if ((*(byte *)(param_1 + 0x6c) >> 1 & 1) != 0) {
          FUN_00aa12a8(0x3f800000,"build://Sounds/UI.assetbundle/ui_IM_received.mp3",0,0);
        }
        uVar8 = *(uint *)(param_1 + 0x2410);
        if (uVar8 != 0) {
          lVar10 = param_1[0x2411];
          uVar13 = 0;
          sVar1 = (ulong)(local_90[0] >> 1);
          pcVar14 = (char *)((ulong)local_90 | 1);
          if ((local_90[0] & 1) != 0) {
            sVar1 = local_88;
            pcVar14 = local_80;
          }
          do {
            lVar20 = *(long *)(lVar10 + uVar13 * 8);
            bVar4 = *(byte *)(lVar20 + 0x3d80);
            uVar3 = (ulong)(bVar4 >> 1);
            if ((bVar4 & 1) != 0) {
              uVar3 = *(ulong *)(lVar20 + 0x3d88);
            }
            if (uVar3 == sVar1) {
              pvVar17 = *(void **)(lVar20 + 0x3d90);
              if ((bVar4 & 1) == 0) {
                pvVar17 = (void *)(lVar20 + 0x3d81);
              }
              if ((bVar4 & 1) == 0) {
                if (sVar1 == 0) {
LAB_00b97f0c:
                  FUN_00ae594c(lVar20,1,1,*(undefined4 *)(*plVar12 + uVar11 * 0x50 + 0x18));
                  break;
                }
                pcVar18 = (char *)(lVar20 + 0x3d81);
                lVar15 = -(ulong)(bVar4 >> 1);
                pcVar16 = pcVar14;
                while (*pcVar18 == *pcVar16) {
                  pcVar18 = pcVar18 + 1;
                  lVar15 = lVar15 + 1;
                  pcVar16 = pcVar16 + 1;
                  if (lVar15 == 0) goto LAB_00b97f0c;
                }
              }
              else if ((sVar1 == 0) || (iVar7 = memcmp(pvVar17,pcVar14,sVar1), iVar7 == 0))
              goto LAB_00b97f0c;
            }
            uVar13 = uVar13 + 1;
          } while (uVar13 < uVar8);
        }
        goto LAB_00b97f34;
      }
    }
  }
  if (local_98 != (void *)0x0) {
    operator_delete__(local_98);
    local_a0 = 0;
    local_98 = (void *)0x0;
  }
  if ((local_90[0] & 1) != 0) {
    operator_delete(local_80);
  }
  uVar9 = 1;
LAB_00b984dc:
  if (*(long *)(lVar5 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar9);
}

