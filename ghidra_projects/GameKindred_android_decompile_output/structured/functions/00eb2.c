// functions/00eb2 — 8 functions
#include "libGameKindred.h"




void FUN_00eb21b0(uint *param_1,uint param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  byte *pbVar3;
  long lVar4;
  long lVar5;
  
  if (param_2 != 0) {
    if (param_1[1] < param_2) {
      FUN_009535f0(param_1,param_2);
    }
    uVar1 = *param_1;
    if (uVar1 < param_2) {
      lVar4 = (ulong)uVar1 * 0x30 + 0x18;
      lVar5 = (ulong)param_2 - (ulong)uVar1;
      do {
        lVar2 = *(long *)(param_1 + 2);
        FUN_008fcdb8(lVar2 + lVar4 + -0x18,param_3);
        FUN_008fcdb8(lVar2 + lVar4,param_3 + 0x18);
        lVar5 = lVar5 + -1;
        lVar4 = lVar4 + 0x30;
      } while (lVar5 != 0);
      uVar1 = *param_1;
    }
    if (param_2 < uVar1) {
      lVar4 = (ulong)uVar1 * 0x30 + (ulong)param_2 * -0x30;
      pbVar3 = (byte *)(*(long *)(param_1 + 2) + (ulong)param_2 * 0x30 + 0x18);
      do {
        if ((*pbVar3 & 1) != 0) {
          operator_delete(*(void **)(pbVar3 + 0x10));
        }
        if ((pbVar3[-0x18] & 1) != 0) {
          operator_delete(*(void **)(pbVar3 + -8));
        }
        lVar4 = lVar4 + -0x30;
        pbVar3 = pbVar3 + 0x30;
      } while (lVar4 != 0);
    }
    *param_1 = param_2;
    return;
  }
  FUN_009538fc(param_1);
  return;
}




void FUN_00eb22c8(uint *param_1,uint param_2,long param_3)

{
  uint uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  
  if (param_2 != 0) {
    if (param_1[1] < param_2) {
      FUN_009536e0(param_1,param_2);
    }
    uVar1 = *param_1;
    if (uVar1 < param_2) {
      uVar2 = (ulong)uVar1 << 5 | 0x18;
      lVar4 = (ulong)param_2 - (ulong)uVar1;
      do {
        puVar3 = (undefined8 *)(*(long *)(param_1 + 2) + uVar2);
        FUN_008fcdb8(puVar3 + -3,param_3);
        lVar4 = lVar4 + -1;
        uVar2 = uVar2 + 0x20;
        *puVar3 = *(undefined8 *)(param_3 + 0x18);
      } while (lVar4 != 0);
      uVar1 = *param_1;
    }
    if (param_2 < uVar1) {
      lVar4 = (ulong)uVar1 * 0x20 + (ulong)param_2 * -0x20;
      puVar3 = (undefined8 *)(*(long *)(param_1 + 2) + (ulong)param_2 * 0x20 + 0x10);
      do {
        if ((*(byte *)(puVar3 + -2) & 1) != 0) {
          operator_delete((void *)*puVar3);
        }
        lVar4 = lVar4 + -0x20;
        puVar3 = puVar3 + 4;
      } while (lVar4 != 0);
    }
    *param_1 = param_2;
    return;
  }
  FUN_00953884(param_1);
  return;
}




uint FUN_00eb23bc(undefined8 param_1,long *param_2,uint *param_3,undefined8 param_4,uint param_5)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  uint uVar5;
  undefined1 auStack_178 [272];
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  uVar3 = 0;
  if ((int)param_2[2] == 4) {
    uVar5 = *param_3;
    iVar1 = *(int *)((long)param_2 + 0xc);
    memset(auStack_178,0,0x110);
    FUN_00eb24c4(param_3,iVar1 + uVar5,auStack_178);
    uVar3 = FUN_009537b8(auStack_178);
    if ((int)param_2[1] == 0) {
      uVar3 = 1;
    }
    else {
      lVar4 = *param_2;
      do {
        uVar3 = FUN_00eb1918(uVar3,lVar4,*(long *)(param_3 + 2) + (ulong)uVar5 * 0x110,param_4,
                             param_5 & 1);
        if ((uVar3 & 1) == 0) break;
        lVar4 = lVar4 + 0x18;
        uVar5 = uVar5 + 1;
      } while (lVar4 != *param_2 + (ulong)*(uint *)(param_2 + 1) * 0x18);
    }
  }
  if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return (uint)uVar3 & 1;
}




void FUN_00eb24c4(uint *param_1,uint param_2,long param_3)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  if (param_2 == 0) {
    lVar3 = *(long *)(param_1 + 2);
    if (lVar3 != 0) {
      if (*param_1 != 0) {
        lVar4 = (ulong)*param_1 * 0x110;
        do {
          FUN_009537b8(lVar3);
          lVar4 = lVar4 + -0x110;
          lVar3 = lVar3 + 0x110;
        } while (lVar4 != 0);
      }
      *param_1 = 0;
    }
  }
  else {
    if (param_1[1] < param_2) {
      FUN_009533a0(param_1,param_2);
    }
    uVar2 = *param_1;
    if (uVar2 < param_2) {
      lVar3 = (ulong)uVar2 * 0x110 + 0x90;
      lVar4 = (ulong)param_2 - (ulong)uVar2;
      do {
        lVar1 = *(long *)(param_1 + 2) + lVar3;
        FUN_008fcdb8(lVar1 + -0x90,param_3);
        FUN_008fcdb8(lVar1 + -0x78,param_3 + 0x18);
        FUN_008fcdb8(lVar1 + -0x60,param_3 + 0x30);
        FUN_008fcdb8(lVar1 + -0x48,param_3 + 0x48);
        FUN_008fcdb8(lVar1 + -0x30,param_3 + 0x60);
        FUN_008fcdb8(lVar1 + -0x18,param_3 + 0x78);
        FUN_008fcdb8(lVar1,param_3 + 0x90);
        FUN_008fcdb8(lVar1 + 0x18,param_3 + 0xa8);
        FUN_008fcdb8(lVar1 + 0x30,param_3 + 0xc0);
        FUN_009534f0(lVar1 + 0x48,param_3 + 0xd8);
        FUN_00953574(lVar1 + 0x58,param_3 + 0xe8);
        lVar4 = lVar4 + -1;
        lVar3 = lVar3 + 0x110;
        *(undefined8 *)(lVar1 + 0x78) = *(undefined8 *)(param_3 + 0x108);
        uVar5 = *(undefined8 *)(param_3 + 0xf8);
        *(undefined8 *)(lVar1 + 0x70) = *(undefined8 *)(param_3 + 0x100);
        *(undefined8 *)(lVar1 + 0x68) = uVar5;
      } while (lVar4 != 0);
      uVar2 = *param_1;
    }
    if (param_2 < uVar2) {
      lVar4 = (ulong)uVar2 * 0x110 + (ulong)param_2 * -0x110;
      lVar3 = *(long *)(param_1 + 2) + (ulong)param_2 * 0x110;
      do {
        FUN_009537b8(lVar3);
        lVar4 = lVar4 + -0x110;
        lVar3 = lVar3 + 0x110;
      } while (lVar4 != 0);
    }
    *param_1 = param_2;
  }
  return;
}




void FUN_00eb26ac(void)

{
  FUN_00eb23bc();
  return;
}




uint FUN_00eb26b4(undefined8 param_1,long *param_2,uint *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  char *__s1;
  ulong uVar7;
  char *pcVar8;
  ulong uVar9;
  long lVar10;
  uint local_64;
  
  iVar2 = FUN_0090d610(param_1,0,0xffffffffffffffff,"leveling",8);
  uVar4 = 0;
  if ((iVar2 == 0) && (uVar4 = 0, (int)param_2[2] == 3)) {
    uVar1 = *param_3;
    uVar7 = (ulong)uVar1;
    uVar9 = uVar7;
    local_64 = uVar1;
    if ((int)param_2[1] == 0) {
      uVar4 = 1;
      uVar5 = uVar1;
    }
    else {
      pcVar8 = (char *)*param_2;
      do {
        __s1 = pcVar8;
        if (((byte)pcVar8[0x12] >> 6 & 1) == 0) {
          __s1 = *(char **)pcVar8;
        }
        iVar3 = strcmp(__s1,"active");
        iVar2 = 0;
        if (iVar3 == 0) {
LAB_00eb2770:
          uVar4 = FUN_00eb23bc(iVar2,pcVar8 + 0x18,param_3);
        }
        else {
          iVar2 = strcmp(__s1,"redeemed");
          if (iVar2 != 0) goto LAB_00eb2770;
          local_64 = *param_3;
          uVar4 = FUN_00eb23bc(0,pcVar8 + 0x18,param_3);
          uVar9 = (ulong)*param_3;
        }
      } while (((uVar4 & 1) != 0) &&
              (pcVar8 = pcVar8 + 0x30,
              pcVar8 != (char *)(*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30)));
      uVar5 = *param_3;
    }
    if (uVar1 < uVar5) {
      lVar10 = uVar7 * 0x110 + 0x10d;
      do {
        lVar6 = *(long *)(param_3 + 2);
        if ((local_64 <= uVar7) && (uVar7 < uVar9)) {
          *(undefined2 *)(lVar6 + lVar10 + -1) = 0x101;
        }
        FUN_008fcea8(lVar6 + lVar10 + -0xf5,"leveling",8);
        FUN_008fcea8(*(long *)(param_3 + 2) + lVar10 + -0xdd,"generic_quest",0xd);
        uVar7 = uVar7 + 1;
        lVar10 = lVar10 + 0x110;
      } while (uVar5 != uVar7);
    }
  }
  return uVar4 & 1;
}




void FUN_00eb2890(long *param_1,long param_2)

{
  code *pcVar1;
  long lVar2;
  byte bVar3;
  int iVar4;
  long lVar5;
  int *piVar6;
  size_t sVar7;
  char *__s;
  char *pcVar8;
  char *local_80;
  undefined8 local_78;
  void *local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  lVar5 = FUN_008fd190(param_1,"code");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 == lVar5) {
LAB_00eb2918:
    *(undefined4 *)(param_2 + 0x38) = 0xffffffff;
  }
  else {
    local_80 = "code";
    local_70 = (void *)CONCAT44(local_70._4_4_,0x100005);
    local_78 = 4;
    lVar5 = FUN_008feca4(param_1,&local_80);
    if ((*(byte *)(lVar5 + 0x11) >> 2 & 1) == 0) goto LAB_00eb2918;
    local_80 = "code";
    local_70 = (void *)CONCAT44(local_70._4_4_,0x100005);
    local_78 = 4;
    piVar6 = (int *)FUN_008feca4(param_1,&local_80);
    iVar4 = *piVar6;
    *(int *)(param_2 + 0x38) = iVar4;
    if (((iVar4 == 0) &&
        (lVar5 = FUN_008fd190(param_1,"returnValue"),
        *param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 != lVar5)) && (*(int *)(lVar5 + 0x28) == 3))
    {
      local_78 = 0;
      local_70 = (void *)0x0;
      local_80 = (char *)0x0;
      if (*(int *)(lVar5 + 0x20) == 0) {
        *(undefined1 *)(param_2 + 0x3c) = 1;
      }
      else {
        pcVar8 = *(char **)(lVar5 + 0x18);
        do {
          __s = pcVar8;
          if (((byte)pcVar8[0x12] >> 6 & 1) == 0) {
            __s = *(char **)pcVar8;
          }
          sVar7 = strlen(__s);
          FUN_008fcea8(&local_80,__s,sVar7);
          iVar4 = FUN_0090d610(&local_80,0,0xffffffffffffffff,"leveling",8);
          pcVar1 = FUN_00eb26b4;
          if (iVar4 != 0) {
            pcVar1 = FUN_00eb26ac;
          }
          bVar3 = (*pcVar1)(&local_80,pcVar8 + 0x18,param_2 + 0x28,param_2);
        } while (((bVar3 & 1) != 0) &&
                (pcVar8 = pcVar8 + 0x30,
                pcVar8 != (char *)(*(long *)(lVar5 + 0x18) + (ulong)*(uint *)(lVar5 + 0x20) * 0x30))
                );
        *(byte *)(param_2 + 0x3c) = bVar3 & 1;
        if (((ulong)local_80 & 1) != 0) {
          operator_delete(local_70);
        }
      }
      goto LAB_00eb294c;
    }
  }
  *(undefined1 *)(param_2 + 0x3c) = 0;
LAB_00eb294c:
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00eb2a8c(long *param_1,long param_2)

{
  ulong uVar1;
  undefined4 uVar2;
  long lVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  int *piVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  long lVar15;
  uint uVar16;
  ulong uVar17;
  uint uVar18;
  ulong uVar19;
  long lVar20;
  byte *pbVar21;
  byte local_1a8 [16];
  void *local_198;
  byte local_190;
  void *local_180;
  byte local_178;
  void *local_168;
  byte local_160;
  void *local_150;
  ulong local_140 [2];
  void *local_130;
  ulong local_128;
  undefined8 local_120;
  void *pvStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  char *local_100;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined4 uStack_ec;
  byte local_e8;
  void *local_d8;
  byte local_d0;
  void *local_c0;
  byte local_b8;
  void *local_a8;
  char *local_88;
  undefined8 local_80;
  undefined4 local_78;
  
  lVar3 = tpidr_el0;
  lVar15 = *(long *)(lVar3 + 0x28);
  lVar6 = FUN_008fd190(param_1,"code");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 == lVar6) {
LAB_00eb2b14:
    *(undefined4 *)(param_2 + 100) = 0xffffffff;
    *(undefined1 *)(param_2 + 0x68) = 0;
  }
  else {
    local_100 = "code";
    local_f0 = 0x100005;
    local_f8 = 4;
    lVar6 = FUN_008feca4(param_1,&local_100);
    if ((*(byte *)(lVar6 + 0x11) >> 2 & 1) == 0) goto LAB_00eb2b14;
    local_100 = "code";
    local_f0 = 0x100005;
    local_f8 = 4;
    piVar7 = (int *)FUN_008feca4(param_1,&local_100);
    iVar5 = *piVar7;
    *(int *)(param_2 + 100) = iVar5;
    *(bool *)(param_2 + 0x68) = iVar5 == 0;
    if (((iVar5 == 0) &&
        (lVar6 = FUN_008fd190(param_1,"returnValue"),
        *param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 != lVar6)) && (*(int *)(lVar6 + 0x28) == 3))
    {
      lVar9 = lVar6 + 0x18;
      lVar8 = FUN_008fd190(lVar9,"questId");
      if ((*(long *)(lVar6 + 0x18) + (ulong)*(uint *)(lVar6 + 0x20) * 0x30 != lVar8) &&
         ((*(uint *)(lVar8 + 0x28) >> 0x14 & 1) != 0)) {
        plVar12 = (long *)(lVar8 + 0x18);
        if ((*(uint *)(lVar8 + 0x28) >> 0x16 & 1) == 0) {
          plVar12 = (long *)*plVar12;
        }
        FUN_008fa54c(&local_100,plVar12);
        FUN_008fce60(param_2 + 0x38,&local_100);
        if (((ulong)local_100 & 1) != 0) {
          operator_delete((void *)CONCAT44(uStack_ec,local_f0));
        }
        lVar8 = FUN_008fd190(lVar9,"xp");
        if ((*(long *)(lVar6 + 0x18) + (ulong)*(uint *)(lVar6 + 0x20) * 0x30 != lVar8) &&
           ((*(byte *)(lVar8 + 0x29) >> 2 & 1) != 0)) {
          *(undefined4 *)(param_2 + 0x60) = *(undefined4 *)(lVar8 + 0x18);
          lVar9 = FUN_008fd190(lVar9,"chests");
          if ((*(long *)(lVar6 + 0x18) + (ulong)*(uint *)(lVar6 + 0x20) * 0x30 != lVar9) &&
             (*(int *)(lVar9 + 0x28) == 4)) {
            pvStack_118 = (void *)0x0;
            local_120 = 0;
            uStack_108 = 0;
            uStack_110 = 0;
            local_140[1] = 0;
            local_140[0] = 0;
            local_128 = 0;
            local_130 = (void *)0x0;
            FUN_00eb334c(param_2 + 0x50,*(undefined4 *)(lVar9 + 0x24),local_140);
            FUN_00953e1c(&uStack_110,1);
            if ((local_128 & 1) != 0) {
              operator_delete(pvStack_118);
            }
            if ((local_140[0] & 1) != 0) {
              operator_delete(local_130);
            }
            if (*(int *)(lVar9 + 0x20) == 0) {
              bVar4 = true;
            }
            else {
              plVar12 = *(long **)(lVar9 + 0x18);
              uVar18 = 0;
              do {
                if ((int)plVar12[2] != 3) {
LAB_00eb3334:
                  bVar4 = false;
                  break;
                }
                lVar8 = *(long *)(param_2 + 0x58);
                lVar6 = FUN_008fd190(plVar12,"hashedSku");
                if ((*plVar12 + (ulong)*(uint *)(plVar12 + 1) * 0x30 == lVar6) ||
                   ((*(uint *)(lVar6 + 0x28) >> 0x14 & 1) == 0)) goto LAB_00eb3334;
                uVar19 = (ulong)uVar18;
                plVar13 = (long *)(lVar6 + 0x18);
                if ((*(uint *)(lVar6 + 0x28) >> 0x16 & 1) == 0) {
                  plVar13 = (long *)*plVar13;
                }
                FUN_008fa54c(&local_100,plVar13);
                FUN_008fce60(lVar8 + uVar19 * 0x40,&local_100);
                if (((ulong)local_100 & 1) != 0) {
                  operator_delete((void *)CONCAT44(uStack_ec,local_f0));
                }
                lVar6 = FUN_008fd190(plVar12,"uuid");
                if ((*plVar12 + (ulong)*(uint *)(plVar12 + 1) * 0x30 == lVar6) ||
                   ((*(uint *)(lVar6 + 0x28) >> 0x14 & 1) == 0)) goto LAB_00eb3334;
                plVar13 = (long *)(lVar6 + 0x18);
                if ((*(uint *)(lVar6 + 0x28) >> 0x16 & 1) == 0) {
                  plVar13 = (long *)*plVar13;
                }
                FUN_008fa54c(&local_100,plVar13);
                FUN_008fce60(lVar8 + uVar19 * 0x40 + 0x18,&local_100);
                if (((ulong)local_100 & 1) != 0) {
                  operator_delete((void *)CONCAT44(uStack_ec,local_f0));
                }
                lVar6 = FUN_008fd190(plVar12,"contents");
                if ((*plVar12 + (ulong)*(uint *)(plVar12 + 1) * 0x30 == lVar6) ||
                   (*(int *)(lVar6 + 0x28) != 4)) goto LAB_00eb3334;
                uVar2 = *(undefined4 *)(lVar6 + 0x24);
                memset(local_1a8,0,0x68);
                FUN_00eb3480(lVar8 + uVar19 * 0x40 + 0x30,uVar2,local_1a8);
                if ((local_160 & 1) != 0) {
                  operator_delete(local_150);
                }
                if ((local_178 & 1) != 0) {
                  operator_delete(local_168);
                }
                if ((local_190 & 1) != 0) {
                  operator_delete(local_180);
                }
                if ((local_1a8[0] & 1) != 0) {
                  operator_delete(local_198);
                }
                if (*(int *)(lVar6 + 0x20) == 0) {
                  bVar4 = true;
                }
                else {
                  plVar13 = *(long **)(lVar6 + 0x18);
                  uVar16 = 0;
                  do {
                    if ((int)plVar13[2] != 3) {
LAB_00eb3300:
                      bVar4 = false;
                      goto LAB_00eb3308;
                    }
                    lVar20 = *(long *)(lVar8 + uVar19 * 0x40 + 0x38);
                    lVar11 = FUN_008fd190(plVar13,"type");
                    if ((*plVar13 + (ulong)*(uint *)(plVar13 + 1) * 0x30 == lVar11) ||
                       ((*(uint *)(lVar11 + 0x28) >> 0x14 & 1) == 0)) goto LAB_00eb3300;
                    pbVar21 = (byte *)(lVar20 + (ulong)uVar16 * 0x68);
                    plVar14 = (long *)(lVar11 + 0x18);
                    if ((*(uint *)(lVar11 + 0x28) >> 0x16 & 1) == 0) {
                      plVar14 = (long *)*plVar14;
                    }
                    FUN_008fa54c(&local_100,plVar14);
                    FUN_008fce60(pbVar21,&local_100);
                    if (((ulong)local_100 & 1) != 0) {
                      operator_delete((void *)CONCAT44(uStack_ec,local_f0));
                    }
                    lVar11 = FUN_008fd190(plVar13,"id");
                    if ((*plVar13 + (ulong)*(uint *)(plVar13 + 1) * 0x30 == lVar11) ||
                       ((*(uint *)(lVar11 + 0x28) >> 0x14 & 1) == 0)) goto LAB_00eb3300;
                    uVar17 = (ulong)uVar16;
                    plVar14 = (long *)(lVar11 + 0x18);
                    if ((*(uint *)(lVar11 + 0x28) >> 0x16 & 1) == 0) {
                      plVar14 = (long *)*plVar14;
                    }
                    FUN_008fa54c(&local_100,plVar14);
                    FUN_008fce60(lVar20 + uVar17 * 0x68 + 0x18,&local_100);
                    if (((ulong)local_100 & 1) != 0) {
                      operator_delete((void *)CONCAT44(uStack_ec,local_f0));
                    }
                    lVar11 = FUN_008fd190(plVar13,"amount");
                    if ((*plVar13 + (ulong)*(uint *)(plVar13 + 1) * 0x30 == lVar11) ||
                       ((*(byte *)(lVar11 + 0x29) >> 2 & 1) == 0)) goto LAB_00eb3300;
                    *(undefined4 *)(lVar20 + uVar17 * 0x68 + 0x60) = *(undefined4 *)(lVar11 + 0x18);
                    lVar11 = FUN_008fd190(plVar13,"originalType");
                    if (*plVar13 + (ulong)*(uint *)(plVar13 + 1) * 0x30 != lVar11) {
                      local_100 = "originalType";
                      local_f0 = 0x100005;
                      local_f8 = 0xc;
                      lVar11 = FUN_008feca4(plVar13,&local_100);
                      if ((*(byte *)(lVar11 + 0x12) >> 4 & 1) != 0) {
                        lVar11 = FUN_008fd190(plVar13,"originalType");
                        if ((*plVar13 + (ulong)*(uint *)(plVar13 + 1) * 0x30 == lVar11) ||
                           ((*(uint *)(lVar11 + 0x28) >> 0x14 & 1) == 0)) goto LAB_00eb3300;
                        plVar14 = (long *)(lVar11 + 0x18);
                        if ((*(uint *)(lVar11 + 0x28) >> 0x16 & 1) == 0) {
                          plVar14 = (long *)*plVar14;
                        }
                        FUN_008fa54c(&local_100,plVar14);
                        FUN_008fce60(lVar20 + uVar17 * 0x68 + 0x30,&local_100);
                        if (((ulong)local_100 & 1) != 0) {
                          operator_delete((void *)CONCAT44(uStack_ec,local_f0));
                        }
                      }
                    }
                    lVar11 = FUN_008fd190(plVar13,"originalId");
                    if (*plVar13 + (ulong)*(uint *)(plVar13 + 1) * 0x30 != lVar11) {
                      local_100 = "originalId";
                      local_f0 = 0x100005;
                      local_f8 = 10;
                      lVar11 = FUN_008feca4(plVar13,&local_100);
                      if ((*(byte *)(lVar11 + 0x12) >> 4 & 1) != 0) {
                        lVar11 = FUN_008fd190(plVar13,"originalId");
                        if ((*plVar13 + (ulong)*(uint *)(plVar13 + 1) * 0x30 == lVar11) ||
                           ((*(uint *)(lVar11 + 0x28) >> 0x14 & 1) == 0)) goto LAB_00eb3300;
                        plVar14 = (long *)(lVar11 + 0x18);
                        if ((*(uint *)(lVar11 + 0x28) >> 0x16 & 1) == 0) {
                          plVar14 = (long *)*plVar14;
                        }
                        FUN_008fa54c(&local_100,plVar14);
                        FUN_008fce60(lVar20 + uVar17 * 0x68 + 0x48,&local_100);
                        if (((ulong)local_100 & 1) != 0) {
                          operator_delete((void *)CONCAT44(uStack_ec,local_f0));
                        }
                      }
                    }
                    lVar11 = FUN_008fd190(plVar13,"originalAmount");
                    if (*plVar13 + (ulong)*(uint *)(plVar13 + 1) * 0x30 != lVar11) {
                      local_100 = "originalAmount";
                      local_f0 = 0x100005;
                      local_f8 = 0xe;
                      lVar11 = FUN_008feca4(plVar13,&local_100);
                      if ((*(byte *)(lVar11 + 0x11) >> 2 & 1) != 0) {
                        lVar11 = FUN_008fd190(plVar13,"originalAmount");
                        if ((*plVar13 + (ulong)*(uint *)(plVar13 + 1) * 0x30 == lVar11) ||
                           ((*(byte *)(lVar11 + 0x29) >> 2 & 1) == 0)) goto LAB_00eb3300;
                        *(undefined4 *)(lVar20 + uVar17 * 0x68 + 100) =
                             *(undefined4 *)(lVar11 + 0x18);
                      }
                    }
                    uVar1 = (ulong)(*pbVar21 >> 1);
                    if ((*pbVar21 & 1) != 0) {
                      uVar1 = *(ulong *)(lVar20 + uVar17 * 0x68 + 8);
                    }
                    if (((uVar1 == 6) &&
                        (iVar5 = FUN_0090d610(pbVar21,0,0xffffffffffffffff,"talent",6), iVar5 == 0))
                       && (lVar11 = FUN_008fd190(plVar13,"talentData"),
                          *plVar13 + (ulong)*(uint *)(plVar13 + 1) * 0x30 != lVar11)) {
                      memset(&local_100,0,0x60);
                      local_88 = "talentData";
                      local_78 = 0x100005;
                      local_80 = 10;
                      uVar10 = FUN_008feca4(plVar13,&local_88);
                      FUN_00eb35e8(uVar10,&local_100);
                      FUN_00eb3af0(param_2 + 0x28,&local_100);
                      if ((local_b8 & 1) != 0) {
                        operator_delete(local_a8);
                      }
                      if ((local_d0 & 1) != 0) {
                        operator_delete(local_c0);
                      }
                      if ((local_e8 & 1) != 0) {
                        operator_delete(local_d8);
                      }
                      if (((ulong)local_100 & 1) != 0) {
                        operator_delete((void *)CONCAT44(uStack_ec,local_f0));
                      }
                    }
                    plVar13 = plVar13 + 3;
                    uVar16 = uVar16 + 1;
                  } while (plVar13 !=
                           (long *)(*(long *)(lVar6 + 0x18) + (ulong)*(uint *)(lVar6 + 0x20) * 0x18)
                          );
                  bVar4 = true;
                }
LAB_00eb3308:
                if (!bVar4) break;
                plVar12 = plVar12 + 3;
                uVar18 = uVar18 + 1;
              } while (plVar12 !=
                       (long *)(*(long *)(lVar9 + 0x18) + (ulong)*(uint *)(lVar9 + 0x20) * 0x18));
            }
            *(bool *)(param_2 + 0x69) = bVar4;
            goto LAB_00eb2b58;
          }
        }
      }
    }
  }
  *(undefined1 *)(param_2 + 0x69) = 0;
LAB_00eb2b58:
  if (*(long *)(lVar3 + 0x28) != lVar15) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

