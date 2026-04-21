// functions/00ccc — 10 functions
#include "libGameKindred.h"




int FUN_00ccc000(long *param_1,long *param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  if (*(int *)(*param_1 + 0x1c) != *(int *)(*param_2 + 0x1c)) {
    if (*(int *)(*param_1 + 0x1c) == 0) {
      return 1;
    }
    if (*(int *)(*param_2 + 0x1c) == 0) {
      return -1;
    }
  }
  piVar2 = (int *)FUN_00cc7b20();
  piVar3 = (int *)FUN_00cc7b20(*param_2);
  if (piVar2 == (int *)0x0 && piVar3 == (int *)0x0) {
    iVar1 = 1;
    if (param_1 < param_2) {
      iVar1 = -1;
    }
  }
  else {
    iVar1 = 1;
    if ((piVar2 != (int *)0x0) && (iVar1 = -1, piVar3 != (int *)0x0)) {
      if (*piVar2 == *piVar3) {
        iVar1 = strcmp(*(char **)(piVar2 + 8),*(char **)(piVar3 + 8));
        if (iVar1 == 0) {
          iVar1 = strcmp(*(char **)(piVar2 + 10),*(char **)(piVar3 + 10));
          return iVar1;
        }
      }
      else {
        iVar1 = -1;
        if (*piVar2 < *piVar3) {
          iVar1 = 1;
        }
      }
    }
  }
  return iVar1;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_00ccc0dc(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  bool bVar5;
  timespec local_88;
  undefined1 auStack_78 [16];
  long local_68;
  long lStack_60;
  undefined8 uStack_58;
  undefined1 uStack_50;
  undefined7 local_4f;
  undefined1 uStack_48;
  undefined7 uStack_47;
  undefined1 uStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00ccfa78(auStack_78,&DAT_0313dba8);
  uStack_47 = (undefined7)ram0x0313dbd9;
  uStack_40 = (undefined1)((ulong)ram0x0313dbd9 >> 0x38);
  uStack_48 = (undefined1)DAT_0313dbd8;
  lVar2 = CONCAT71(uStack_47,(undefined1)DAT_0313dbd8);
  uStack_50 = (undefined1)DAT_0313dbd0;
  local_4f = DAT_0313dbd0._1_7_;
  uStack_58 = DAT_0313dbc8;
  lStack_60 = lRam000000000313dbc0;
  local_68 = _DAT_0313dbb8;
  if (lVar2 < 1) {
    bVar5 = true;
  }
  else {
    clock_gettime(1,&local_88);
    lVar4 = local_88.tv_nsec - lStack_60;
    lVar3 = local_88.tv_sec - local_68;
    if (lVar4 < 0) {
      lVar3 = lVar3 + -1;
      lVar4 = (local_88.tv_nsec + 1000000000) - lStack_60;
    }
    bVar5 = *(long *)(param_1 + 0xc0) <=
            lVar2 + (long)((double)(lVar4 + lVar3 * 1000000000) * 1e-09);
  }
  FUN_00ccb850(auStack_78,1);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return bVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_00ccc1d4(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  timespec local_88;
  undefined1 auStack_78 [16];
  long local_68;
  long lStack_60;
  undefined8 uStack_58;
  undefined1 uStack_50;
  undefined7 local_4f;
  undefined1 uStack_48;
  undefined7 uStack_47;
  undefined1 uStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00ccfa78(auStack_78,&DAT_0313dba8);
  uStack_47 = (undefined7)ram0x0313dbd9;
  uStack_40 = (undefined1)((ulong)ram0x0313dbd9 >> 0x38);
  uStack_48 = (undefined1)DAT_0313dbd8;
  lVar5 = CONCAT71(uStack_47,(undefined1)DAT_0313dbd8);
  uStack_50 = (undefined1)DAT_0313dbd0;
  local_4f = DAT_0313dbd0._1_7_;
  uStack_58 = DAT_0313dbc8;
  lStack_60 = lRam000000000313dbc0;
  local_68 = _DAT_0313dbb8;
  if (lVar5 < 1) {
    lVar5 = 0;
  }
  else {
    lVar4 = *(long *)(param_1 + 0xc0);
    clock_gettime(1,&local_88);
    lVar3 = local_88.tv_nsec - lStack_60;
    lVar2 = local_88.tv_sec - local_68;
    if (lVar3 < 0) {
      lVar2 = lVar2 + -1;
      lVar3 = (local_88.tv_nsec + 1000000000) - lStack_60;
    }
    lVar5 = (lVar4 - lVar5) - (long)((double)(lVar3 + lVar2 * 1000000000) * 1e-09);
  }
  FUN_00ccb850(auStack_78,1);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return lVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 * FUN_00ccc2c8(void)

{
  return &DAT_0313db50;
}




void FUN_00ccc2d4(long param_1,undefined8 ****param_2)

{
  long *plVar1;
  long lVar2;
  undefined4 uVar3;
  bool bVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined4 *puVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long *plVar11;
  uint *puVar12;
  double dVar13;
  long local_198;
  ulong local_190;
  int local_188;
  undefined8 *local_180;
  undefined8 *local_178;
  undefined8 local_170;
  void *local_168;
  void *local_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  int local_140;
  undefined8 local_138;
  undefined1 auStack_130 [8];
  char **local_128;
  undefined8 ***local_120;
  undefined8 ***local_118;
  undefined8 uStack_110;
  byte local_108 [16];
  void *local_f8;
  byte local_f0 [16];
  void *local_e0;
  byte local_d8 [16];
  void *local_c8;
  byte local_c0 [16];
  void *local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined1 local_a0;
  char *local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  long local_80;
  
  lVar2 = tpidr_el0;
  local_80 = *(long *)(lVar2 + 0x28);
  local_198 = 0;
  local_190 = 0;
  local_188 = 0;
  local_158 = 0;
  uStack_150 = 0;
  local_168 = (void *)0x0;
  local_160 = (void *)0x0;
  local_170 = 0;
  local_148 = 0x400;
  local_140 = 0;
  local_138 = 0;
  local_180 = operator_new(0x28);
  local_180[3] = 0;
  local_180[4] = 0;
  local_180[1] = 0x10000;
  local_180[2] = 0;
  *local_180 = 0;
  local_178 = local_180;
  local_120 = param_2;
  local_118 = param_2;
  FUN_008fd344(&local_198,&local_120);
  if (local_140 == 0) {
    FUN_00b89298(param_1,0);
    *(undefined1 *)(param_1 + 0x10) = 0;
    if ((local_188 == 4) && ((int)local_190 != 0)) {
      uVar9 = 0;
      do {
        local_118 = (undefined8 ****)0x0;
        uStack_110 = 0;
        plVar11 = (long *)(local_198 + uVar9 * 0x18);
        local_120 = &local_118;
        memset(local_108,0,0x60);
        lVar5 = FUN_008fd190(plVar11,"name");
        puVar12 = (uint *)(plVar11 + 1);
        if (*plVar11 + (ulong)*puVar12 * 0x30 == lVar5) {
          puVar6 = (undefined8 *)&DAT_01e277f2;
        }
        else {
          local_98 = "name";
          local_88 = 0x100005;
          local_90 = 4;
          lVar5 = FUN_008feca4(plVar11,&local_98);
          puVar6 = (undefined8 *)&DAT_01e277f2;
          if ((*(byte *)(lVar5 + 0x12) >> 4 & 1) != 0) {
            local_98 = "name";
            local_88 = 0x100005;
            local_90 = 4;
            puVar6 = (undefined8 *)FUN_008feca4(plVar11,&local_98);
            if ((*(byte *)((long)puVar6 + 0x12) >> 6 & 1) == 0) {
              puVar6 = (undefined8 *)*puVar6;
            }
          }
        }
        FUN_008fa54c(&local_98,puVar6);
        FUN_008fce60(local_108,&local_98);
        if (((ulong)local_98 & 1) != 0) {
          operator_delete((void *)CONCAT44(uStack_84,local_88));
        }
        lVar5 = FUN_008fd190(plVar11,"duration");
        if (*plVar11 + (ulong)*puVar12 * 0x30 == lVar5) {
          uVar3 = 0;
        }
        else {
          local_98 = "duration";
          local_88 = 0x100005;
          local_90 = 8;
          lVar5 = FUN_008feca4(plVar11,&local_98);
          uVar3 = 0;
          if ((*(byte *)(lVar5 + 0x11) >> 2 & 1) != 0) {
            local_98 = "duration";
            local_88 = 0x100005;
            local_90 = 8;
            puVar7 = (undefined4 *)FUN_008feca4(plVar11,&local_98);
            uVar3 = *puVar7;
          }
        }
        local_a8 = uVar3;
        lVar5 = FUN_008fd190(plVar11,"eventType");
        if (*plVar11 + (ulong)*puVar12 * 0x30 == lVar5) {
          puVar6 = (undefined8 *)&DAT_01e277f2;
        }
        else {
          local_98 = "eventType";
          local_88 = 0x100005;
          local_90 = 9;
          lVar5 = FUN_008feca4(plVar11,&local_98);
          puVar6 = (undefined8 *)&DAT_01e277f2;
          if ((*(byte *)(lVar5 + 0x12) >> 4 & 1) != 0) {
            local_98 = "eventType";
            local_88 = 0x100005;
            local_90 = 9;
            puVar6 = (undefined8 *)FUN_008feca4(plVar11,&local_98);
            if ((*(byte *)((long)puVar6 + 0x12) >> 6 & 1) == 0) {
              puVar6 = (undefined8 *)*puVar6;
            }
          }
        }
        FUN_008fa54c(&local_98,puVar6);
        FUN_008fce60(local_d8,&local_98);
        if (((ulong)local_98 & 1) != 0) {
          operator_delete((void *)CONCAT44(uStack_84,local_88));
        }
        lVar5 = FUN_008fd190(plVar11,"buffType");
        if (*plVar11 + (ulong)*puVar12 * 0x30 == lVar5) {
          puVar6 = (undefined8 *)&DAT_01e277f2;
        }
        else {
          local_98 = "buffType";
          local_88 = 0x100005;
          local_90 = 8;
          lVar5 = FUN_008feca4(plVar11,&local_98);
          puVar6 = (undefined8 *)&DAT_01e277f2;
          if ((*(byte *)(lVar5 + 0x12) >> 4 & 1) != 0) {
            local_98 = "buffType";
            local_88 = 0x100005;
            local_90 = 8;
            puVar6 = (undefined8 *)FUN_008feca4(plVar11,&local_98);
            if ((*(byte *)((long)puVar6 + 0x12) >> 6 & 1) == 0) {
              puVar6 = (undefined8 *)*puVar6;
            }
          }
        }
        FUN_008fa54c(&local_98,puVar6);
        FUN_008fce60(local_f0,&local_98);
        if (((ulong)local_98 & 1) != 0) {
          operator_delete((void *)CONCAT44(uStack_84,local_88));
        }
        lVar5 = FUN_008fd190(plVar11,"stacks");
        if (*plVar11 + (ulong)*puVar12 * 0x30 == lVar5) {
          bVar4 = false;
        }
        else {
          local_98 = "stacks";
          local_88 = 0x100005;
          local_90 = 6;
          lVar5 = FUN_008feca4(plVar11,&local_98);
          bVar4 = false;
          if ((*(byte *)(lVar5 + 0x11) & 1) != 0) {
            local_98 = "stacks";
            local_88 = 0x100005;
            local_90 = 6;
            lVar5 = FUN_008feca4(plVar11,&local_98);
            bVar4 = *(int *)(lVar5 + 0x10) == 0x102;
          }
        }
        local_a0 = bVar4;
        lVar5 = FUN_008fd190(plVar11,"charges");
        if (*plVar11 + (ulong)*puVar12 * 0x30 == lVar5) {
          uVar3 = 0;
        }
        else {
          local_98 = "charges";
          local_88 = 0x100005;
          local_90 = 7;
          lVar5 = FUN_008feca4(plVar11,&local_98);
          uVar3 = 0;
          if ((*(byte *)(lVar5 + 0x11) >> 2 & 1) != 0) {
            local_98 = "charges";
            local_88 = 0x100005;
            local_90 = 7;
            puVar7 = (undefined4 *)FUN_008feca4(plVar11,&local_98);
            uVar3 = *puVar7;
          }
        }
        local_a4 = uVar3;
        lVar5 = FUN_008fd190(plVar11,"chargeUnit");
        if (*plVar11 + (ulong)*puVar12 * 0x30 == lVar5) {
          puVar6 = (undefined8 *)&DAT_01e277f2;
        }
        else {
          local_98 = "chargeUnit";
          local_88 = 0x100005;
          local_90 = 10;
          lVar5 = FUN_008feca4(plVar11,&local_98);
          puVar6 = (undefined8 *)&DAT_01e277f2;
          if ((*(byte *)(lVar5 + 0x12) >> 4 & 1) != 0) {
            local_98 = "chargeUnit";
            local_88 = 0x100005;
            local_90 = 10;
            puVar6 = (undefined8 *)FUN_008feca4(plVar11,&local_98);
            if ((*(byte *)((long)puVar6 + 0x12) >> 6 & 1) == 0) {
              puVar6 = (undefined8 *)*puVar6;
            }
          }
        }
        FUN_008fa54c(&local_98,puVar6);
        FUN_008fce60(local_c0,&local_98);
        if (((ulong)local_98 & 1) != 0) {
          operator_delete((void *)CONCAT44(uStack_84,local_88));
        }
        local_98 = "awards";
        local_88 = 0x100005;
        local_90 = 6;
        plVar11 = (long *)FUN_008feca4(plVar11,&local_98);
        if ((int)plVar11[1] != 0) {
          lVar5 = 0;
          uVar10 = 0;
          do {
            plVar1 = (long *)(*plVar11 + lVar5);
            lVar8 = FUN_008fd190(plVar1,"awardValue");
            dVar13 = 0.0;
            if (*plVar1 + (ulong)*(uint *)(plVar1 + 1) * 0x30 != lVar8) {
              local_98 = "awardValue";
              local_88 = 0x100005;
              local_90 = 10;
              lVar8 = FUN_008feca4(plVar1,&local_98);
              if ((*(byte *)(lVar8 + 0x11) >> 1 & 1) != 0) {
                local_98 = "awardValue";
                local_88 = 0x100005;
                local_90 = 10;
                FUN_008feca4(plVar1,&local_98);
                dVar13 = (double)FUN_008fc0f0();
              }
            }
            lVar8 = FUN_008fd190(plVar1,"awardType");
            if (*plVar1 + (ulong)*(uint *)(plVar1 + 1) * 0x30 == lVar8) {
              puVar6 = (undefined8 *)&DAT_01e277f2;
            }
            else {
              local_98 = "awardType";
              local_88 = 0x100005;
              local_90 = 9;
              lVar8 = FUN_008feca4(plVar1,&local_98);
              puVar6 = (undefined8 *)&DAT_01e277f2;
              if ((*(byte *)(lVar8 + 0x12) >> 4 & 1) != 0) {
                local_98 = "awardType";
                local_88 = 0x100005;
                local_90 = 9;
                puVar6 = (undefined8 *)FUN_008feca4(plVar1,&local_98);
                if ((*(byte *)((long)puVar6 + 0x12) >> 6 & 1) == 0) {
                  puVar6 = (undefined8 *)*puVar6;
                }
              }
            }
            FUN_008fa54c(&local_98,puVar6);
            local_128 = &local_98;
            lVar8 = FUN_00cd097c(&local_120,&local_98,&DAT_01bc5c77,&local_128,auStack_130);
            *(float *)(lVar8 + 0x38) = (float)dVar13;
            if (((ulong)local_98 & 1) != 0) {
              operator_delete((void *)CONCAT44(uStack_84,local_88));
            }
            uVar10 = uVar10 + 1;
            lVar5 = lVar5 + 0x18;
          } while (uVar10 < *(uint *)(plVar11 + 1));
        }
        FUN_00cccad4(param_1,&local_120);
        if ((local_c0[0] & 1) != 0) {
          operator_delete(local_b0);
        }
        if ((local_d8[0] & 1) != 0) {
          operator_delete(local_c8);
        }
        if ((local_f0[0] & 1) != 0) {
          operator_delete(local_e0);
        }
        if ((local_108[0] & 1) != 0) {
          operator_delete(local_f8);
        }
        FUN_00930974(&local_120,local_118);
        uVar9 = uVar9 + 1;
      } while (uVar9 < (local_190 & 0xffffffff));
    }
    *(undefined1 *)(param_1 + 0x10) = 1;
  }
  puVar6 = local_178;
  if (local_178 != (undefined8 *)0x0) {
    FUN_008fd2c4(local_178);
    operator_delete(puVar6);
  }
  free(local_160);
  if (local_168 != (void *)0x0) {
    operator_delete(local_168);
  }
  if (*(long *)(lVar2 + 0x28) == local_80) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00cccaac(long param_1)

{
  FUN_00b89298(param_1,0);
  *(undefined1 *)(param_1 + 0x10) = 0;
  return;
}




void FUN_00cccad4(uint *param_1,long *param_2)

{
  uint uVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  long *plVar9;
  
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
    FUN_00b89658(param_1,uVar1);
    uVar4 = *param_1;
  }
  *param_1 = uVar4 + 1;
  lVar7 = *(long *)(param_1 + 2) + (ulong)(uVar4 + 1) * 0x88;
  puVar8 = (undefined8 *)(lVar7 + -0x80);
  *puVar8 = 0;
  *(undefined8 *)(lVar7 + -0x78) = 0;
  *(undefined8 **)(lVar7 + -0x88) = puVar8;
  plVar9 = (long *)*param_2;
  while (plVar9 != param_2 + 1) {
    FUN_00b89840(lVar7 + -0x88,puVar8,plVar9 + 4,plVar9 + 4);
    plVar5 = (long *)plVar9[1];
    if ((long *)plVar9[1] == (long *)0x0) {
      plVar5 = plVar9 + 2;
      bVar2 = (long *)*(long *)*plVar5 != plVar9;
      plVar9 = (long *)*plVar5;
      if (bVar2) {
        do {
          lVar6 = *plVar5;
          plVar5 = (long *)(lVar6 + 0x10);
          plVar9 = (long *)*plVar5;
        } while (*plVar9 != lVar6);
      }
    }
    else {
      do {
        plVar9 = plVar5;
        plVar5 = (long *)*plVar9;
      } while ((long *)*plVar9 != (long *)0x0);
    }
  }
  FUN_008fcdb8(lVar7 + -0x70,param_2 + 3);
  FUN_008fcdb8(lVar7 + -0x58,param_2 + 6);
  FUN_008fcdb8(lVar7 + -0x40,param_2 + 9);
  FUN_008fcdb8(lVar7 + -0x28,param_2 + 0xc);
  *(char *)(lVar7 + -8) = (char)param_2[0x10];
  *(long *)(lVar7 + -0x10) = param_2[0xf];
  return;
}




void FUN_00cccc34(uint *param_1,byte *param_2,long *param_3)

{
  size_t sVar1;
  ulong uVar2;
  size_t __n;
  byte *__s1;
  uint uVar3;
  byte bVar4;
  byte bVar5;
  byte *pbVar6;
  size_t sVar7;
  int iVar8;
  long lVar9;
  byte *__s2;
  long lVar10;
  ulong uVar11;
  
  *param_3 = 0;
  uVar3 = *param_1;
  if (uVar3 != 0) {
    bVar5 = *param_2;
    __n = *(size_t *)(param_2 + 8);
    __s1 = *(byte **)(param_2 + 0x10);
    lVar10 = *(long *)(param_1 + 2);
    uVar11 = 0;
    if ((bVar5 & 1) == 0) {
      __s1 = param_2 + 1;
      __n = (ulong)(bVar5 >> 1);
    }
    do {
      lVar9 = lVar10 + uVar11 * 0x88;
      bVar4 = *(byte *)(lVar9 + 0x18);
      uVar2 = (ulong)(bVar4 >> 1);
      if ((bVar4 & 1) != 0) {
        uVar2 = *(ulong *)(lVar9 + 0x20);
      }
      if (__n == uVar2) {
        __s2 = *(byte **)(lVar10 + uVar11 * 0x88 + 0x28);
        if ((bVar4 & 1) == 0) {
          __s2 = (byte *)(lVar9 + 0x19);
        }
        sVar1 = -(ulong)(bVar5 >> 1);
        pbVar6 = param_2;
        sVar7 = __n;
        if ((bVar5 & 1) == 0) {
          while( true ) {
            if (sVar7 == 0) goto LAB_00cccd14;
            if (pbVar6[1] != *__s2) break;
            sVar1 = sVar1 + 1;
            __s2 = __s2 + 1;
            pbVar6 = pbVar6 + 1;
            sVar7 = sVar1;
          }
        }
        else if ((__n == 0) || (iVar8 = memcmp(__s1,__s2,__n), iVar8 == 0)) {
LAB_00cccd14:
          *param_3 = lVar10 + (uVar11 & 0xffffffff) * 0x88;
          return;
        }
      }
      uVar11 = uVar11 + 1;
    } while (uVar11 < uVar3);
  }
  return;
}




undefined8 * FUN_00cccd40(void)

{
  return &DAT_0313db38;
}




void FUN_00cccd4c(undefined4 *param_1,char *param_2)

{
  long *plVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined4 *puVar5;
  long *plVar6;
  long lVar7;
  undefined4 uVar8;
  ulong uVar9;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  long local_f0;
  ulong local_e8;
  int local_e0;
  undefined8 *local_d8;
  undefined8 *local_d0;
  undefined8 local_c8;
  void *local_c0;
  void *local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  int local_98;
  undefined8 local_90;
  char *local_88;
  char *local_80;
  undefined4 local_78;
  long local_70;
  
  lVar2 = tpidr_el0;
  local_70 = *(long *)(lVar2 + 0x28);
  local_f0 = 0;
  local_e8 = 0;
  local_e0 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_c0 = (void *)0x0;
  local_b8 = (void *)0x0;
  local_c8 = 0;
  local_a0 = 0x400;
  local_98 = 0;
  local_90 = 0;
  local_d8 = operator_new(0x28);
  local_d8[3] = 0;
  local_d8[4] = 0;
  local_d8[1] = 0x10000;
  local_d8[2] = 0;
  *local_d8 = 0;
  local_d0 = local_d8;
  local_88 = param_2;
  local_80 = param_2;
  FUN_008fd344(&local_f0,&local_88);
  if (local_98 == 0) {
    if (*(long *)(param_1 + 2) != 0) {
      *param_1 = 0;
    }
    param_1[4] = 0;
    *(undefined1 *)(param_1 + 5) = 0;
    if (local_e0 == 3) {
      lVar4 = FUN_008fd190(&local_f0,"season");
      if (local_f0 + (local_e8 & 0xffffffff) * 0x30 != lVar4) {
        local_78 = 0x100005;
        local_88 = "season";
        local_80 = (char *)0x6;
        lVar4 = FUN_008feca4(&local_f0,&local_88);
        if ((*(byte *)(lVar4 + 0x11) >> 2 & 1) != 0) {
          lVar4 = FUN_008fd190(&local_f0,"season");
          if (local_f0 + (local_e8 & 0xffffffff) * 0x30 == lVar4) {
            uVar8 = 0;
          }
          else {
            local_88 = "season";
            local_78 = 0x100005;
            local_80 = (char *)0x6;
            lVar4 = FUN_008feca4(&local_f0,&local_88);
            uVar8 = 0;
            if ((*(byte *)(lVar4 + 0x11) >> 2 & 1) != 0) {
              local_88 = "season";
              local_78 = 0x100005;
              local_80 = (char *)0x6;
              puVar5 = (undefined4 *)FUN_008feca4(&local_f0,&local_88);
              uVar8 = *puVar5;
            }
          }
          param_1[4] = uVar8;
        }
      }
      lVar4 = FUN_008fd190(&local_f0,"rewards");
      if (local_f0 + (local_e8 & 0xffffffff) * 0x30 != lVar4) {
        local_88 = "rewards";
        local_78 = 0x100005;
        local_80 = (char *)0x7;
        lVar4 = FUN_008feca4(&local_f0,&local_88);
        if (*(int *)(lVar4 + 0x10) == 4) {
          local_88 = "rewards";
          local_78 = 0x100005;
          local_80 = (char *)0x7;
          plVar6 = (long *)FUN_008feca4(&local_f0,&local_88);
          if ((int)plVar6[1] != 0) {
            lVar4 = 0;
            uVar9 = 0;
            do {
              plVar1 = (long *)(*plVar6 + lVar4);
              lVar7 = FUN_008fd190(plVar1,"tier");
              if (*plVar1 + (ulong)*(uint *)(plVar1 + 1) * 0x30 == lVar7) {
                uVar8 = 0;
              }
              else {
                local_78 = 0x100005;
                local_88 = "tier";
                local_80 = (char *)0x4;
                lVar7 = FUN_008feca4(plVar1,&local_88);
                uVar8 = 0;
                if ((*(byte *)(lVar7 + 0x11) >> 2 & 1) != 0) {
                  local_78 = 0x100005;
                  local_88 = "tier";
                  local_80 = (char *)0x4;
                  puVar5 = (undefined4 *)FUN_008feca4(plVar1,&local_88);
                  uVar8 = *puVar5;
                }
              }
              local_100 = uVar8;
              lVar7 = FUN_008fd190(plVar1,"glory");
              if (*plVar1 + (ulong)*(uint *)(plVar1 + 1) * 0x30 == lVar7) {
                uVar8 = 0;
              }
              else {
                local_78 = 0x100005;
                local_88 = "glory";
                local_80 = (char *)0x5;
                lVar7 = FUN_008feca4(plVar1,&local_88);
                uVar8 = 0;
                if ((*(byte *)(lVar7 + 0x11) >> 2 & 1) != 0) {
                  local_78 = 0x100005;
                  local_88 = "glory";
                  local_80 = (char *)0x5;
                  puVar5 = (undefined4 *)FUN_008feca4(plVar1,&local_88);
                  uVar8 = *puVar5;
                }
              }
              local_fc = uVar8;
              lVar7 = FUN_008fd190(plVar1,"ice");
              if (*plVar1 + (ulong)*(uint *)(plVar1 + 1) * 0x30 == lVar7) {
                uVar8 = 0;
              }
              else {
                local_78 = 0x100005;
                local_88 = "ice";
                local_80 = (char *)0x3;
                lVar7 = FUN_008feca4(plVar1,&local_88);
                uVar8 = 0;
                if ((*(byte *)(lVar7 + 0x11) >> 2 & 1) != 0) {
                  local_78 = 0x100005;
                  local_88 = "ice";
                  local_80 = (char *)0x3;
                  puVar5 = (undefined4 *)FUN_008feca4(plVar1,&local_88);
                  uVar8 = *puVar5;
                }
              }
              local_f8 = uVar8;
              FUN_00ccd1c8(param_1,&local_100);
              uVar9 = uVar9 + 1;
              lVar4 = lVar4 + 0x18;
            } while (uVar9 < *(uint *)(plVar6 + 1));
          }
        }
      }
    }
    *(undefined1 *)(param_1 + 5) = 1;
  }
  puVar3 = local_d0;
  if (local_d0 != (undefined8 *)0x0) {
    FUN_008fd2c4(local_d0);
    operator_delete(puVar3);
  }
  free(local_b8);
  if (local_c0 != (void *)0x0) {
    operator_delete(local_c0);
  }
  if (*(long *)(lVar2 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

