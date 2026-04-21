// functions/10033 — 370 functions
#include "GameKindred.h"




void FUN_100330058(uint *param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  uint uVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  
  uVar4 = *param_1;
  if (uVar4 == param_1[1]) {
    uVar1 = 0;
    if (uVar4 != 0xffffffff) {
      uVar1 = uVar4 + (~uVar4 | 0xfffffff0) + 0x11;
    }
    if (uVar4 < 0x20) {
      uVar1 = uVar4 << 1;
    }
    uVar2 = uVar4 + 1;
    if (uVar4 + 1 <= uVar1) {
      uVar2 = uVar1;
    }
    FUN_100269908(param_1,uVar2);
    uVar4 = *param_1;
  }
  *param_1 = uVar4 + 1;
  lVar10 = *(long *)(param_1 + 2);
  lVar11 = (ulong)(uVar4 + 1) - 1;
  puVar8 = (undefined8 *)(lVar10 + lVar11 * 0x88);
  puVar9 = puVar8 + 1;
  *puVar9 = 0;
  puVar8[2] = 0;
  *puVar8 = puVar9;
  plVar12 = (long *)*param_2;
  while (plVar12 != param_2 + 1) {
    FUN_100269af0(puVar8,puVar9,plVar12 + 4,plVar12 + 4);
    plVar5 = (long *)plVar12[1];
    if ((long *)plVar12[1] == (long *)0x0) {
      plVar5 = plVar12 + 2;
      bVar3 = *(long **)*plVar5 != plVar12;
      plVar12 = (long *)*plVar5;
      if (bVar3) {
        do {
          lVar7 = *plVar5;
          plVar5 = (long *)(lVar7 + 0x10);
          plVar12 = (long *)*plVar5;
        } while (*plVar12 != lVar7);
      }
    }
    else {
      do {
        plVar12 = plVar5;
        plVar5 = (long *)*plVar12;
      } while ((long *)*plVar12 != (long *)0x0);
    }
  }
  lVar10 = lVar10 + lVar11 * 0x88;
  FUN_10003330c(lVar10 + 0x18,param_2 + 3);
  FUN_10003330c(lVar10 + 0x30,param_2 + 6);
  FUN_10003330c(lVar10 + 0x48,param_2 + 9);
  FUN_10003330c(lVar10 + 0x60,param_2 + 0xc);
  uVar6 = param_2[0xf];
  *(undefined1 *)(lVar10 + 0x80) = *(undefined1 *)(param_2 + 0x10);
  *(undefined8 *)(lVar10 + 0x78) = uVar6;
  return;
}




void FUN_1003301bc(uint *param_1,char *param_2,long *param_3)

{
  char *pcVar1;
  char *pcVar2;
  uint uVar3;
  byte bVar4;
  byte bVar5;
  size_t sVar6;
  size_t sVar7;
  char *pcVar8;
  size_t sVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  
  *param_3 = 0;
  uVar3 = *param_1;
  bVar4 = param_2[0x17];
  pcVar2 = *(char **)param_2;
  sVar7 = *(size_t *)(param_2 + 8);
  if (-1 < (char)bVar4) {
    pcVar2 = param_2;
    sVar7 = (ulong)bVar4;
  }
  if (uVar3 != 0) {
    uVar13 = 0;
    lVar12 = *(long *)(param_1 + 2);
    do {
      lVar11 = lVar12 + uVar13 * 0x88;
      bVar5 = *(byte *)(lVar11 + 0x2f);
      sVar6 = *(size_t *)(lVar11 + 0x20);
      if (-1 < (char)bVar5) {
        sVar6 = (ulong)bVar5;
      }
      if (sVar7 == sVar6) {
        pcVar1 = *(char **)(lVar11 + 0x18);
        if (-1 < (char)bVar5) {
          pcVar1 = (char *)(lVar11 + 0x18);
        }
        sVar6 = (ulong)bVar4;
        pcVar8 = param_2;
        sVar9 = sVar7;
        if ((char)bVar4 < '\0') {
          if ((sVar7 == 0) || (iVar10 = _memcmp(pcVar2,pcVar1,sVar7), iVar10 == 0)) {
LAB_100330294:
            *param_3 = lVar12 + (uVar13 & 0xffffffff) * 0x88;
            return;
          }
        }
        else {
          while( true ) {
            if (sVar9 == 0) goto LAB_100330294;
            if (*pcVar8 != *pcVar1) break;
            pcVar1 = pcVar1 + 1;
            sVar6 = sVar6 - 1;
            pcVar8 = pcVar8 + 1;
            sVar9 = sVar6;
          }
        }
      }
      uVar13 = uVar13 + 1;
    } while (uVar13 != uVar3);
  }
  return;
}




undefined8 * FUN_1003302c0(void)

{
  return &DAT_101e46c58;
}




void FUN_1003302cc(undefined4 *param_1,char *param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  undefined4 *puVar5;
  void *pvVar6;
  undefined4 uVar7;
  ulong uVar8;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  long local_e8;
  ulong local_e0;
  int local_d8;
  undefined8 *local_d0;
  undefined8 *local_c8;
  undefined8 local_c0;
  void *pvStack_b8;
  void *local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  int local_90;
  undefined8 local_88;
  char *local_80;
  char *pcStack_78;
  undefined4 local_70;
  
  local_e8 = 0;
  local_e0 = 0;
  local_d8 = 0;
  pvStack_b8 = (void *)0x0;
  local_c0 = 0;
  uStack_a8 = 0;
  local_b0 = (void *)0x0;
  local_a0 = 0;
  uStack_98 = 0x400;
  local_90 = 0;
  local_88 = 0;
  local_d0 = operator_new(0x28);
  *local_d0 = 0;
  local_d0[1] = 0x10000;
  local_d0[3] = 0;
  local_d0[4] = 0;
  local_d0[2] = 0;
  local_c8 = local_d0;
  local_80 = param_2;
  pcStack_78 = param_2;
  FUN_1000f7bd0(&local_e8,&local_80);
  if (local_90 != 0) goto LAB_100330654;
  if (*(long *)(param_1 + 2) != 0) {
    *param_1 = 0;
  }
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  if (local_d8 == 3) {
    lVar2 = FUN_1000e86c0(&local_e8,"season");
    if (local_e8 + (local_e0 & 0xffffffff) * 0x30 != lVar2) {
      local_70 = 0x100005;
      local_80 = "season";
      pcStack_78 = (char *)0x6;
      lVar2 = FUN_1000e87dc(&local_e8,&local_80);
      if ((*(byte *)(lVar2 + 0x11) >> 2 & 1) != 0) {
        lVar2 = FUN_1000e86c0(&local_e8,"season");
        if (local_e8 + (local_e0 & 0xffffffff) * 0x30 == lVar2) {
LAB_100330408:
          uVar7 = 0;
        }
        else {
          local_70 = 0x100005;
          local_80 = "season";
          pcStack_78 = (char *)0x6;
          lVar2 = FUN_1000e87dc(&local_e8,&local_80);
          if ((*(byte *)(lVar2 + 0x11) >> 2 & 1) == 0) goto LAB_100330408;
          local_70 = 0x100005;
          local_80 = "season";
          pcStack_78 = (char *)0x6;
          puVar5 = (undefined4 *)FUN_1000e87dc(&local_e8,&local_80);
          uVar7 = *puVar5;
        }
        param_1[4] = uVar7;
      }
    }
    lVar2 = FUN_1000e86c0(&local_e8,"rewards");
    if (local_e8 + (local_e0 & 0xffffffff) * 0x30 != lVar2) {
      local_70 = 0x100005;
      local_80 = "rewards";
      pcStack_78 = (char *)0x7;
      lVar2 = FUN_1000e87dc(&local_e8,&local_80);
      if (*(int *)(lVar2 + 0x10) == 4) {
        local_70 = 0x100005;
        local_80 = "rewards";
        pcStack_78 = (char *)0x7;
        plVar3 = (long *)FUN_1000e87dc(&local_e8,&local_80);
        if ((int)plVar3[1] != 0) {
          lVar2 = 0;
          uVar8 = 0;
          do {
            plVar1 = (long *)(*plVar3 + lVar2);
            lVar4 = FUN_1000e86c0(plVar1,"tier");
            if (*plVar1 + (ulong)*(uint *)(plVar1 + 1) * 0x30 == lVar4) {
              local_f8 = 0;
            }
            else {
              local_70 = 0x100005;
              local_80 = "tier";
              pcStack_78 = (char *)0x4;
              lVar4 = FUN_1000e87dc(plVar1,&local_80);
              if ((*(byte *)(lVar4 + 0x11) >> 2 & 1) == 0) {
                local_f8 = 0;
              }
              else {
                local_70 = 0x100005;
                local_80 = "tier";
                pcStack_78 = (char *)0x4;
                puVar5 = (undefined4 *)FUN_1000e87dc(plVar1,&local_80);
                local_f8 = *puVar5;
              }
            }
            lVar4 = FUN_1000e86c0(plVar1,"glory");
            if (*plVar1 + (ulong)*(uint *)(plVar1 + 1) * 0x30 == lVar4) {
LAB_10033057c:
              local_f4 = 0;
            }
            else {
              local_70 = 0x100005;
              local_80 = "glory";
              pcStack_78 = (char *)0x5;
              lVar4 = FUN_1000e87dc(plVar1,&local_80);
              if ((*(byte *)(lVar4 + 0x11) >> 2 & 1) == 0) goto LAB_10033057c;
              local_70 = 0x100005;
              local_80 = "glory";
              pcStack_78 = (char *)0x5;
              puVar5 = (undefined4 *)FUN_1000e87dc(plVar1,&local_80);
              local_f4 = *puVar5;
            }
            lVar4 = FUN_1000e86c0(plVar1,"ice");
            if (*plVar1 + (ulong)*(uint *)(plVar1 + 1) * 0x30 == lVar4) {
              local_f0 = 0;
            }
            else {
              local_70 = 0x100005;
              local_80 = "ice";
              pcStack_78 = (char *)0x3;
              lVar4 = FUN_1000e87dc(plVar1,&local_80);
              if ((*(byte *)(lVar4 + 0x11) >> 2 & 1) == 0) {
                local_f0 = 0;
              }
              else {
                local_70 = 0x100005;
                local_80 = "ice";
                pcStack_78 = (char *)0x3;
                puVar5 = (undefined4 *)FUN_1000e87dc(plVar1,&local_80);
                local_f0 = *puVar5;
              }
            }
            FUN_100330698(param_1,&local_f8);
            uVar8 = uVar8 + 1;
            lVar2 = lVar2 + 0x18;
          } while (uVar8 < *(uint *)(plVar3 + 1));
        }
      }
    }
  }
  *(undefined1 *)(param_1 + 5) = 1;
LAB_100330654:
  if (local_c8 != (undefined8 *)0x0) {
    pvVar6 = (void *)FUN_1000f7b54();
    operator_delete(pvVar6);
  }
  _free(local_b0);
  if (pvStack_b8 != (void *)0x0) {
    operator_delete(pvStack_b8);
  }
  return;
}




void FUN_100330698(uint *param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  
  uVar3 = *param_1;
  if (uVar3 == param_1[1]) {
    uVar1 = 0;
    if (uVar3 != 0xffffffff) {
      uVar1 = uVar3 + (~uVar3 | 0xfffffff0) + 0x11;
    }
    if (uVar3 < 0x20) {
      uVar1 = uVar3 << 1;
    }
    uVar2 = uVar3 + 1;
    if (uVar3 + 1 <= uVar1) {
      uVar2 = uVar1;
    }
    FUN_10026987c(param_1,uVar2);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  lVar4 = *(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 0xc;
  uVar5 = *param_2;
  *(undefined4 *)(lVar4 + -4) = *(undefined4 *)(param_2 + 1);
  *(undefined8 *)(lVar4 + -0xc) = uVar5;
  return;
}




void FUN_100330d84(uint *param_1,int param_2)

{
  char *pcVar1;
  long lVar2;
  
  if (*(long *)(param_1 + 2) != 0) {
    if (*param_1 != 0) {
      pcVar1 = (char *)(*(long *)(param_1 + 2) + 0x17);
      lVar2 = (ulong)*param_1 * 0x30;
      do {
        if (pcVar1[0x18] < '\0') {
          operator_delete(*(void **)(pcVar1 + 1));
        }
        if (*pcVar1 < '\0') {
          operator_delete(*(void **)(pcVar1 + -0x17));
        }
        pcVar1 = pcVar1 + 0x30;
        lVar2 = lVar2 + -0x30;
      } while (lVar2 != 0);
    }
    if (param_2 != 0) {
      if (*(void **)(param_1 + 2) != (void *)0x0) {
        operator_delete__(*(void **)(param_1 + 2));
      }
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[1] = 0;
    }
    *param_1 = 0;
  }
  return;
}




void FUN_100330edc(uint *param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  
  uVar3 = *param_1;
  if (uVar3 == param_1[1]) {
    uVar1 = 0;
    if (uVar3 != 0xffffffff) {
      uVar1 = uVar3 + (~uVar3 | 0xfffffff0) + 0x11;
    }
    if (uVar3 < 0x20) {
      uVar1 = uVar3 << 1;
    }
    uVar2 = uVar3 + 1;
    if (uVar3 + 1 <= uVar1) {
      uVar2 = uVar1;
    }
    FUN_100333168(param_1,uVar2);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  lVar4 = *(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 0x30;
  FUN_10003330c(lVar4 + -0x30,param_2);
  FUN_10003330c(lVar4 + -0x18,param_2 + 0x18);
  return;
}




void FUN_100330f6c(uint *param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  
  uVar3 = *param_1;
  if (uVar3 == param_1[1]) {
    uVar1 = 0;
    if (uVar3 != 0xffffffff) {
      uVar1 = uVar3 + (~uVar3 | 0xfffffff0) + 0x11;
    }
    if (uVar3 < 0x20) {
      uVar1 = uVar3 << 1;
    }
    uVar2 = uVar3 + 1;
    if (uVar3 + 1 <= uVar1) {
      uVar2 = uVar1;
    }
    FUN_10033325c(param_1,uVar2);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  lVar4 = *(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 0x98;
  FUN_10003330c(lVar4 + -0x98,param_2);
  FUN_10003330c(lVar4 + -0x80,param_2 + 0x18);
  FUN_10003330c(lVar4 + -0x68,param_2 + 0x30);
  FUN_10003330c(lVar4 + -0x50,param_2 + 0x48);
  FUN_10003330c(lVar4 + -0x38,param_2 + 0x60);
  FUN_10003330c(lVar4 + -0x20,param_2 + 0x78);
  *(undefined4 *)(lVar4 + -8) = *(undefined4 *)(param_2 + 0x90);
  return;
}




void FUN_100331038(long param_1,uint *param_2,byte *param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  size_t sVar4;
  byte bVar5;
  size_t sVar6;
  int iVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  void *local_88 [2];
  char local_71;
  void *local_70;
  undefined8 uStack_68;
  long local_60;
  void *pvStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  pbVar3 = *(byte **)param_3;
  sVar6 = *(size_t *)(param_3 + 8);
  if (-1 < (char)param_3[0x17]) {
    pbVar3 = param_3;
    sVar6 = (ulong)param_3[0x17];
  }
  if (*param_2 != 0) {
    puVar9 = *(undefined8 **)(param_2 + 2);
    puVar10 = puVar9 + (ulong)*param_2 * 6;
    do {
      bVar5 = *(byte *)((long)puVar9 + 0x17);
      sVar4 = puVar9[1];
      if (-1 < (char)bVar5) {
        sVar4 = (ulong)bVar5;
      }
      if (sVar4 == sVar6) {
        if ((char)bVar5 < '\0') {
          if ((sVar6 == 0) || (iVar7 = _memcmp((void *)*puVar9,pbVar3,sVar6), iVar7 == 0)) {
LAB_100331194:
            FUN_10003330c(param_1,puVar9);
            FUN_10003330c(param_1 + 0x18,puVar9 + 3);
            return;
          }
        }
        else {
          if (sVar6 == 0) goto LAB_100331194;
          if ((uint)*pbVar3 == ((uint)(void *)*puVar9 & 0xff)) {
            uVar8 = 1;
            do {
              if (bVar5 == uVar8) goto LAB_100331194;
              pbVar1 = (byte *)((long)puVar9 + uVar8);
              pbVar2 = pbVar3 + uVar8;
              uVar8 = uVar8 + 1;
            } while (*pbVar1 == *pbVar2);
          }
        }
      }
      puVar9 = puVar9 + 6;
    } while (puVar9 != puVar10);
  }
  pvStack_58 = (void *)0x0;
  local_60 = 0;
  lStack_48 = 0;
  uStack_50 = 0;
  uStack_68 = 0;
  local_70 = (void *)0x0;
  FUN_10001549c(local_88,"opulent");
  std::string::operator=((string *)&pvStack_58,(string *)local_88);
  if (local_71 < '\0') {
    operator_delete(local_88[0]);
  }
  FUN_10003330c(param_1,&local_70);
  FUN_10003330c(param_1 + 0x18,(string *)&pvStack_58);
  if (lStack_48 < 0) {
    operator_delete(pvStack_58);
  }
  if (local_60 < 0) {
    operator_delete(local_70);
  }
  return;
}




void FUN_1003311c0(undefined8 param_1,undefined8 param_2)

{
  void *local_60 [2];
  char local_49;
  void *local_48 [2];
  char local_31;
  
  FUN_100331038(local_60);
  FUN_10033122c(param_1,param_2,local_48);
  if (local_31 < '\0') {
    operator_delete(local_48[0]);
  }
  if (local_49 < '\0') {
    operator_delete(local_60[0]);
  }
  return;
}




void FUN_10033122c(long param_1,long param_2,byte *param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  size_t sVar4;
  byte bVar5;
  size_t sVar6;
  int iVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  void *local_108 [2];
  char local_f1;
  void *local_f0;
  undefined8 uStack_e8;
  long local_e0;
  void *pvStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  void *local_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  void *local_a8;
  undefined8 local_a0;
  long lStack_98;
  void *local_90;
  undefined8 uStack_88;
  long local_80;
  void *pvStack_78;
  undefined8 uStack_70;
  undefined7 uStack_68;
  undefined4 local_61;
  undefined1 local_5d;
  
  pbVar3 = *(byte **)param_3;
  sVar6 = *(size_t *)(param_3 + 8);
  if (-1 < (char)param_3[0x17]) {
    pbVar3 = param_3;
    sVar6 = (ulong)param_3[0x17];
  }
  if (*(uint *)(param_2 + 0x10) != 0) {
    puVar9 = *(undefined8 **)(param_2 + 0x18);
    puVar10 = puVar9 + (ulong)*(uint *)(param_2 + 0x10) * 0x13;
    do {
      bVar5 = *(byte *)((long)puVar9 + 0x17);
      sVar4 = puVar9[1];
      if (-1 < (char)bVar5) {
        sVar4 = (ulong)bVar5;
      }
      if (sVar4 == sVar6) {
        if ((char)bVar5 < '\0') {
          if ((sVar6 == 0) || (iVar7 = _memcmp((void *)*puVar9,pbVar3,sVar6), iVar7 == 0)) {
LAB_10033150c:
            FUN_10003330c(param_1,puVar9);
            FUN_10003330c(param_1 + 0x18,puVar9 + 3);
            FUN_10003330c(param_1 + 0x30,puVar9 + 6);
            FUN_10003330c(param_1 + 0x48,puVar9 + 9);
            FUN_10003330c(param_1 + 0x60,puVar9 + 0xc);
            FUN_10003330c(param_1 + 0x78,puVar9 + 0xf);
            *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)(puVar9 + 0x12);
            return;
          }
        }
        else {
          if (sVar6 == 0) goto LAB_10033150c;
          if ((uint)*pbVar3 == ((uint)(void *)*puVar9 & 0xff)) {
            uVar8 = 1;
            do {
              if (bVar5 == uVar8) goto LAB_10033150c;
              pbVar1 = (byte *)((long)puVar9 + uVar8);
              pbVar2 = pbVar3 + uVar8;
              uVar8 = uVar8 + 1;
            } while (*pbVar1 == *pbVar2);
          }
        }
      }
      puVar9 = puVar9 + 0x13;
    } while (puVar9 != puVar10);
  }
  pvStack_78 = (void *)0x0;
  local_80 = 0;
  uStack_68 = 0;
  local_61 = 0;
  uStack_70 = 0;
  lStack_98 = 0;
  local_a0 = 0;
  uStack_88 = 0;
  local_90 = (void *)0x0;
  uStack_b8 = 0;
  local_c0 = (void *)0x0;
  local_a8 = (void *)0x0;
  lStack_b0 = 0;
  pvStack_d8 = (void *)0x0;
  local_e0 = 0;
  lStack_c8 = 0;
  uStack_d0 = 0;
  uStack_e8 = 0;
  local_f0 = (void *)0x0;
  local_5d = 0xff;
  FUN_10001549c(local_108,"opulent");
  std::string::operator=((string *)&local_f0,(string *)local_108);
  if (local_f1 < '\0') {
    operator_delete(local_108[0]);
  }
  FUN_10001549c(local_108,"build://Sounds/UI.assetbundle/sfx_rare_chest_opens.mp3");
  std::string::operator=((string *)&pvStack_d8,(string *)local_108);
  if (local_f1 < '\0') {
    operator_delete(local_108[0]);
  }
  FUN_10001549c(local_108,"*KindredMenuRewardsChestOpulent*");
  std::string::operator=((string *)&local_c0,(string *)local_108);
  if (local_f1 < '\0') {
    operator_delete(local_108[0]);
  }
  FUN_10001549c(local_108,"IDLE_READY");
  std::string::operator=((string *)&local_a8,(string *)local_108);
  if (local_f1 < '\0') {
    operator_delete(local_108[0]);
  }
  FUN_10001549c(local_108,"chest_opulent_closed");
  std::string::operator=((string *)&local_90,(string *)local_108);
  if (local_f1 < '\0') {
    operator_delete(local_108[0]);
  }
  FUN_10001549c(local_108,"chest_opulent_opened");
  std::string::operator=((string *)&pvStack_78,(string *)local_108);
  if (local_f1 < '\0') {
    operator_delete(local_108[0]);
  }
  local_61._1_3_ = (undefined3)DAT_101e46bb4;
  local_5d = (undefined1)((uint)DAT_101e46bb4 >> 0x18);
  FUN_10003330c(param_1,&local_f0);
  FUN_10003330c(param_1 + 0x18,(string *)&pvStack_d8);
  FUN_10003330c(param_1 + 0x30,(string *)&local_c0);
  FUN_10003330c(param_1 + 0x48,(string *)&local_a8);
  FUN_10003330c(param_1 + 0x60,(string *)&local_90);
  FUN_10003330c(param_1 + 0x78,(string *)&pvStack_78);
  *(uint *)(param_1 + 0x90) = CONCAT13(local_5d,local_61._1_3_);
  if ((char)local_61 < '\0') {
    operator_delete(pvStack_78);
  }
  if (local_80 < 0) {
    operator_delete(local_90);
  }
  if (lStack_98 < 0) {
    operator_delete(local_a8);
  }
  if (lStack_b0 < 0) {
    operator_delete(local_c0);
  }
  if (lStack_c8 < 0) {
    operator_delete(pvStack_d8);
  }
  if (local_e0 < 0) {
    operator_delete(local_f0);
  }
  return;
}




undefined * FUN_100331578(void)

{
  return &DAT_101e46d00;
}




undefined8 FUN_100331584(undefined8 *param_1)

{
  size_t sVar1;
  size_t sVar2;
  undefined8 *puVar3;
  byte bVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  byte *pbVar10;
  byte *pbVar11;
  void *pvVar12;
  void *local_38 [2];
  char local_21;
  
  uVar6 = FUN_100131560();
  if (((uVar6 & 1) == 0) && (*(int *)(param_1 + 4) != 0)) {
    FUN_10001549c(local_38,*param_1);
    lVar7 = FUN_10032c624(local_38);
    if (local_21 < '\0') {
      operator_delete(local_38[0]);
    }
    if ((lVar7 == 0) ||
       (((iVar5 = FUN_1001311c4(), iVar5 != 0 && (*(char *)(param_1 + 1) == '\0')) ||
        (*(char *)(lVar7 + 0xa4) == '\0')))) goto LAB_1003316f4;
    bVar4 = *(byte *)(lVar7 + 199);
    uVar6 = (ulong)bVar4;
    sVar1 = *(size_t *)(lVar7 + 0xb8);
    if (-1 < (char)bVar4) {
      sVar1 = uVar6;
    }
    sVar2 = DAT_101d911a0;
    if (-1 < (char)DAT_101d911a8._7_1_) {
      sVar2 = (ulong)DAT_101d911a8._7_1_;
    }
    if (sVar1 == sVar2) {
      pvVar12 = *(void **)(lVar7 + 0xb0);
      puVar3 = pvVar12;
      if (-1 < (char)bVar4) {
        puVar3 = (undefined8 *)(lVar7 + 0xb0);
      }
      pbVar11 = DAT_101d91198;
      if (-1 < (char)DAT_101d911a8._7_1_) {
        pbVar11 = (byte *)&DAT_101d91198;
      }
      if ((char)bVar4 < '\0') {
        if (sVar1 != 0) {
          iVar5 = _memcmp(puVar3,pbVar11,sVar1);
          if (iVar5 == 0) {
            return 0;
          }
          goto LAB_100331694;
        }
      }
      else if (sVar1 != 0) {
        if ((uint)*pbVar11 == ((uint)pvVar12 & 0xff)) {
          pbVar10 = (byte *)(lVar7 + 0xb1);
          do {
            uVar6 = uVar6 - 1;
            pbVar11 = pbVar11 + 1;
            if (uVar6 == 0) goto LAB_1003316f4;
            bVar4 = *pbVar10;
            pbVar10 = pbVar10 + 1;
          } while (bVar4 == *pbVar11);
        }
        goto LAB_100331694;
      }
    }
    else {
LAB_100331694:
      if ((0 < *(long *)(lVar7 + 0x90)) &&
         (lVar8 = FUN_1004f1a74(0), *(long *)(lVar7 + 0x90) <= lVar8)) {
        uVar9 = FUN_10015d3ec();
        uVar9 = FUN_100166518(uVar9,lVar7);
        if ((int)uVar9 == 0) {
          return uVar9;
        }
      }
      if (((*(long *)(lVar7 + 0x98) < 1) ||
          (lVar8 = FUN_1004f1a74(0), *(long *)(lVar7 + 0x98) <= lVar8)) ||
         (*(char *)(lVar7 + 0xaa) != '\0')) goto LAB_1003316ec;
    }
LAB_1003316f4:
    uVar9 = 0;
  }
  else {
LAB_1003316ec:
    uVar9 = 1;
  }
  return uVar9;
}




void FUN_100331708(void)

{
  FUN_10033171c("*KindredSocialPingsManifest*","build://Progression/KindredSocialPingsManifest.def")
  ;
  return;
}




void FUN_10033171c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = FUN_1010a1520();
  lVar2 = FUN_1010a0e0c(uVar1,0,param_1,0);
  if (lVar2 != 0) {
    return;
  }
  FUN_1010a14fc(0,param_2);
  uVar1 = FUN_1010a1520();
  FUN_1010a0e0c(uVar1,0,param_1,0);
  return;
}




undefined8 FUN_100331778(byte *param_1)

{
  size_t sVar1;
  size_t sVar2;
  byte bVar3;
  int iVar4;
  undefined8 *puVar5;
  ulong uVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *pbVar9;
  undefined8 *puVar10;
  
  puVar5 = (undefined8 *)
           FUN_10033171c("*KindredSocialPingsManifest*",
                         "build://Progression/KindredSocialPingsManifest.def");
  puVar5 = (undefined8 *)*puVar5;
  puVar10 = (undefined8 *)*puVar5;
  if (puVar10 != (undefined8 *)0x0) {
    do {
      bVar3 = param_1[0x17];
      uVar6 = (ulong)bVar3;
      sVar1 = *(size_t *)(param_1 + 8);
      if (-1 < (char)bVar3) {
        sVar1 = uVar6;
      }
      sVar2 = DAT_101d911a0;
      if (-1 < (char)DAT_101d911a8._7_1_) {
        sVar2 = (ulong)DAT_101d911a8._7_1_;
      }
      if (sVar1 == sVar2) {
        pbVar9 = *(byte **)param_1;
        pbVar8 = pbVar9;
        if (-1 < (char)bVar3) {
          pbVar8 = param_1;
        }
        pbVar7 = DAT_101d91198;
        if (-1 < (char)DAT_101d911a8._7_1_) {
          pbVar7 = (byte *)&DAT_101d91198;
        }
        if ((char)bVar3 < '\0') {
          if ((sVar1 != 0) && (iVar4 = _memcmp(pbVar8,pbVar7,sVar1), pbVar8 = pbVar9, iVar4 != 0))
          goto LAB_100331854;
        }
        else if (sVar1 != 0) {
          pbVar8 = param_1;
          if ((uint)*pbVar7 == ((uint)pbVar9 & 0xff)) {
            do {
              uVar6 = uVar6 - 1;
              pbVar8 = pbVar8 + 1;
              pbVar7 = pbVar7 + 1;
              if (uVar6 == 0) goto LAB_100331864;
            } while (*pbVar8 == *pbVar7);
            goto LAB_100331844;
          }
          goto LAB_100331854;
        }
      }
      else {
LAB_100331844:
        pbVar8 = *(byte **)param_1;
        if (-1 < (char)bVar3) {
          pbVar8 = param_1;
        }
LAB_100331854:
        iVar4 = _strcmp((char *)pbVar8,(char *)*puVar10);
        if (iVar4 == 0) {
          return *puVar5;
        }
      }
LAB_100331864:
      puVar5 = puVar5 + 1;
      puVar10 = (undefined8 *)*puVar5;
    } while (puVar10 != (undefined8 *)0x0);
  }
  return 0;
}




void FUN_1003318a0(uint *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  char cVar3;
  char *pcVar4;
  uint uVar5;
  
  puVar1 = (undefined8 *)
           FUN_10033171c("*KindredSocialPingsManifest*",
                         "build://Progression/KindredSocialPingsManifest.def");
  puVar1 = (undefined8 *)*puVar1;
  puVar2 = (undefined8 *)*puVar1;
  if (puVar2 != (undefined8 *)0x0) {
    do {
      pcVar4 = (char *)*puVar2;
      cVar3 = *pcVar4;
      uVar5 = 0x811c9dc5;
      if (cVar3 != '\0') {
        uVar5 = 0x811c9dc5;
        do {
          pcVar4 = pcVar4 + 1;
          uVar5 = (uVar5 ^ (int)cVar3) * 0x1000193;
          cVar3 = *pcVar4;
        } while (cVar3 != '\0');
      }
      if (*param_1 == uVar5) {
        return;
      }
      puVar1 = puVar1 + 1;
      puVar2 = (undefined8 *)*puVar1;
    } while (puVar2 != (undefined8 *)0x0);
  }
  return;
}




void FUN_10033192c(void)

{
  FUN_100331940("*KindredCharmsManifest*","build://Progression/KindredCharmsManifest.def");
  return;
}




void FUN_100331940(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = FUN_1010a1520();
  lVar2 = FUN_1010a0e0c(uVar1,0,param_1,0);
  if (lVar2 != 0) {
    return;
  }
  FUN_1010a14fc(0,param_2);
  uVar1 = FUN_1010a1520();
  FUN_1010a0e0c(uVar1,0,param_1,0);
  return;
}




void FUN_10033199c(uint *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  char cVar4;
  char *pcVar5;
  uint uVar6;
  
  lVar1 = FUN_100331940("*KindredCharmsManifest*","build://Progression/KindredCharmsManifest.def");
  puVar3 = *(undefined8 **)(lVar1 + 8);
  puVar2 = (undefined8 *)*puVar3;
  if (puVar2 != (undefined8 *)0x0) {
    do {
      pcVar5 = (char *)*puVar2;
      cVar4 = *pcVar5;
      uVar6 = 0x811c9dc5;
      if (cVar4 != '\0') {
        uVar6 = 0x811c9dc5;
        do {
          pcVar5 = pcVar5 + 1;
          uVar6 = (uVar6 ^ (int)cVar4) * 0x1000193;
          cVar4 = *pcVar5;
        } while (cVar4 != '\0');
      }
      if (*param_1 == uVar6) {
        return;
      }
      puVar3 = puVar3 + 1;
      puVar2 = (undefined8 *)*puVar3;
    } while (puVar2 != (undefined8 *)0x0);
  }
  return;
}




void FUN_100331a28(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = FUN_1010a1520();
  lVar2 = FUN_1010a0e0c(uVar1,0,param_1,0);
  if (lVar2 != 0) {
    return;
  }
  FUN_1010a14fc(0,param_2);
  uVar1 = FUN_1010a1520();
  FUN_1010a0e0c(uVar1,0,param_1,0);
  return;
}




void FUN_100331a84(uint *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  char cVar3;
  char *pcVar4;
  uint uVar5;
  
  puVar1 = (undefined8 *)
           FUN_100331a28("*KindredAttachableEquipmentManifest*",
                         "build://Progression/KindredAttachableEquipmentManifest.def");
  puVar1 = (undefined8 *)*puVar1;
  puVar2 = (undefined8 *)*puVar1;
  if (puVar2 != (undefined8 *)0x0) {
    do {
      pcVar4 = (char *)*puVar2;
      cVar3 = *pcVar4;
      uVar5 = 0x811c9dc5;
      if (cVar3 != '\0') {
        uVar5 = 0x811c9dc5;
        do {
          pcVar4 = pcVar4 + 1;
          uVar5 = (uVar5 ^ (int)cVar3) * 0x1000193;
          cVar3 = *pcVar4;
        } while (cVar3 != '\0');
      }
      if (*param_1 == uVar5) {
        return;
      }
      puVar1 = puVar1 + 1;
      puVar2 = (undefined8 *)*puVar1;
    } while (puVar2 != (undefined8 *)0x0);
  }
  return;
}




void FUN_100331b10(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = FUN_1010a1520();
  lVar2 = FUN_1010a0e0c(uVar1,0,param_1,0);
  if (lVar2 != 0) {
    return;
  }
  FUN_1010a14fc(0,param_2);
  uVar1 = FUN_1010a1520();
  FUN_1010a0e0c(uVar1,0,param_1,0);
  return;
}




void FUN_100331b6c(uint *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  char cVar3;
  char *pcVar4;
  uint uVar5;
  
  puVar1 = (undefined8 *)
           FUN_100331b10("*KindredPlayerTitlesManifest*",
                         "build://Progression/KindredPlayerTitlesManifest.def");
  puVar1 = (undefined8 *)*puVar1;
  puVar2 = (undefined8 *)*puVar1;
  if (puVar2 != (undefined8 *)0x0) {
    do {
      pcVar4 = (char *)*puVar2;
      cVar3 = *pcVar4;
      uVar5 = 0x811c9dc5;
      if (cVar3 != '\0') {
        uVar5 = 0x811c9dc5;
        do {
          pcVar4 = pcVar4 + 1;
          uVar5 = (uVar5 ^ (int)cVar3) * 0x1000193;
          cVar3 = *pcVar4;
        } while (cVar3 != '\0');
      }
      if (*param_1 == uVar5) {
        return;
      }
      puVar1 = puVar1 + 1;
      puVar2 = (undefined8 *)*puVar1;
    } while (puVar2 != (undefined8 *)0x0);
  }
  return;
}




void FUN_100331bf8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = FUN_1010a1520();
  lVar2 = FUN_1010a0e0c(uVar1,0,param_1,0);
  if (lVar2 != 0) {
    return;
  }
  FUN_1010a14fc(0,param_2);
  uVar1 = FUN_1010a1520();
  FUN_1010a0e0c(uVar1,0,param_1,0);
  return;
}




void FUN_100331c54(uint *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  char cVar3;
  char *pcVar4;
  uint uVar5;
  
  puVar1 = (undefined8 *)
           FUN_100331bf8("*KindredPlayerAvatarsManifest*",
                         "build://Progression/KindredPlayerAvatarsManifest.def");
  puVar1 = (undefined8 *)*puVar1;
  puVar2 = (undefined8 *)*puVar1;
  if (puVar2 != (undefined8 *)0x0) {
    do {
      pcVar4 = (char *)*puVar2;
      cVar3 = *pcVar4;
      uVar5 = 0x811c9dc5;
      if (cVar3 != '\0') {
        uVar5 = 0x811c9dc5;
        do {
          pcVar4 = pcVar4 + 1;
          uVar5 = (uVar5 ^ (int)cVar3) * 0x1000193;
          cVar3 = *pcVar4;
        } while (cVar3 != '\0');
      }
      if (*param_1 == uVar5) {
        return;
      }
      puVar1 = puVar1 + 1;
      puVar2 = (undefined8 *)*puVar1;
    } while (puVar2 != (undefined8 *)0x0);
  }
  return;
}




void FUN_100331ce0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = FUN_1010a1520();
  lVar2 = FUN_1010a0e0c(uVar1,0,param_1,0);
  if (lVar2 != 0) {
    return;
  }
  FUN_1010a14fc(0,param_2);
  uVar1 = FUN_1010a1520();
  FUN_1010a0e0c(uVar1,0,param_1,0);
  return;
}




int FUN_100331d3c(int param_1)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  int *piVar4;
  
  puVar3 = (undefined8 *)
           FUN_100331ce0("*KindredHeroMasteryManifest*",
                         "build://Progression/KindredHeroMasteryManifest.def");
  puVar3 = (undefined8 *)*puVar3;
  piVar4 = (int *)*puVar3;
  if (piVar4 == (int *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = 0;
    do {
      puVar3 = puVar3 + 1;
      iVar1 = iVar2;
      if ((piVar4[1] <= param_1) && (iVar1 = *piVar4, *piVar4 <= iVar2)) {
        iVar1 = iVar2;
      }
      iVar2 = iVar1;
      piVar4 = (int *)*puVar3;
    } while (piVar4 != (int *)0x0);
  }
  return iVar2;
}




int FUN_100331da8(int param_1)

{
  undefined8 *puVar1;
  int *piVar2;
  
  puVar1 = (undefined8 *)
           FUN_100331ce0("*KindredHeroMasteryManifest*",
                         "build://Progression/KindredHeroMasteryManifest.def");
  puVar1 = (undefined8 *)*puVar1;
  piVar2 = (int *)*puVar1;
  while( true ) {
    if (piVar2 == (int *)0x0) {
      return 0;
    }
    puVar1 = puVar1 + 1;
    if (*piVar2 == param_1) break;
    piVar2 = (int *)*puVar1;
  }
  return piVar2[1];
}




undefined1 FUN_100331e08(int param_1)

{
  undefined8 *puVar1;
  int *piVar2;
  
  puVar1 = (undefined8 *)
           FUN_100331ce0("*KindredHeroMasteryManifest*",
                         "build://Progression/KindredHeroMasteryManifest.def");
  puVar1 = (undefined8 *)*puVar1;
  piVar2 = (int *)*puVar1;
  while( true ) {
    if (piVar2 == (int *)0x0) {
      return 0;
    }
    puVar1 = puVar1 + 1;
    if (*piVar2 == param_1) break;
    piVar2 = (int *)*puVar1;
  }
  return 1;
}




void FUN_100331e68(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = FUN_1010a1520();
  lVar2 = FUN_1010a0e0c(uVar1,0,param_1,0);
  if (lVar2 != 0) {
    return;
  }
  FUN_1010a14fc(0,param_2);
  uVar1 = FUN_1010a1520();
  FUN_1010a0e0c(uVar1,0,param_1,0);
  return;
}




void FUN_100331ec4(uint *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  char cVar3;
  char *pcVar4;
  uint uVar5;
  
  puVar1 = (undefined8 *)
           FUN_100331e68("*KindredAnnouncerVOPacksManifest*",
                         "build://Progression/KindredAnnouncerVOPacksManifest.def");
  puVar1 = (undefined8 *)*puVar1;
  puVar2 = (undefined8 *)*puVar1;
  if (puVar2 != (undefined8 *)0x0) {
    do {
      pcVar4 = (char *)*puVar2;
      cVar3 = *pcVar4;
      uVar5 = 0x811c9dc5;
      if (cVar3 != '\0') {
        uVar5 = 0x811c9dc5;
        do {
          pcVar4 = pcVar4 + 1;
          uVar5 = (uVar5 ^ (int)cVar3) * 0x1000193;
          cVar3 = *pcVar4;
        } while (cVar3 != '\0');
      }
      if (*param_1 == uVar5) {
        return;
      }
      puVar1 = puVar1 + 1;
      puVar2 = (undefined8 *)*puVar1;
    } while (puVar2 != (undefined8 *)0x0);
  }
  return;
}




void FUN_100331f50(uint *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  char cVar4;
  char *pcVar5;
  uint uVar6;
  
  lVar1 = FUN_100331940("*KindredCharmsManifest*","build://Progression/KindredCharmsManifest.def");
  puVar3 = *(undefined8 **)(lVar1 + 0x10);
  puVar2 = (undefined8 *)*puVar3;
  if (puVar2 != (undefined8 *)0x0) {
    do {
      pcVar5 = (char *)*puVar2;
      cVar4 = *pcVar5;
      uVar6 = 0x811c9dc5;
      if (cVar4 != '\0') {
        uVar6 = 0x811c9dc5;
        do {
          pcVar5 = pcVar5 + 1;
          uVar6 = (uVar6 ^ (int)cVar4) * 0x1000193;
          cVar4 = *pcVar5;
        } while (cVar4 != '\0');
      }
      if (*param_1 == uVar6) {
        return;
      }
      puVar3 = puVar3 + 1;
      puVar2 = (undefined8 *)*puVar3;
    } while (puVar2 != (undefined8 *)0x0);
  }
  return;
}




void FUN_100331fdc(uint *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  char cVar3;
  char *pcVar4;
  uint uVar5;
  
  puVar1 = (undefined8 *)
           FUN_100331940("*KindredCharmsManifest*","build://Progression/KindredCharmsManifest.def");
  puVar1 = (undefined8 *)*puVar1;
  puVar2 = (undefined8 *)*puVar1;
  if (puVar2 != (undefined8 *)0x0) {
    do {
      pcVar4 = (char *)*puVar2;
      cVar3 = *pcVar4;
      uVar5 = 0x811c9dc5;
      if (cVar3 != '\0') {
        uVar5 = 0x811c9dc5;
        do {
          pcVar4 = pcVar4 + 1;
          uVar5 = (uVar5 ^ (int)cVar3) * 0x1000193;
          cVar3 = *pcVar4;
        } while (cVar3 != '\0');
      }
      if (*param_1 == uVar5) {
        return;
      }
      puVar1 = puVar1 + 1;
      puVar2 = (undefined8 *)*puVar1;
    } while (puVar2 != (undefined8 *)0x0);
  }
  return;
}




void FUN_100332068(void)

{
  FUN_10033207c("*KindredHatManifest*","build://Progression/KindredHatManifest.def");
  return;
}




void FUN_10033207c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = FUN_1010a1520();
  lVar2 = FUN_1010a0e0c(uVar1,0,param_1,0);
  if (lVar2 != 0) {
    return;
  }
  FUN_1010a14fc(0,param_2);
  uVar1 = FUN_1010a1520();
  FUN_1010a0e0c(uVar1,0,param_1,0);
  return;
}




undefined8 FUN_1003320d8(byte *param_1)

{
  size_t sVar1;
  size_t sVar2;
  byte bVar3;
  int iVar4;
  undefined8 *puVar5;
  ulong uVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *pbVar9;
  undefined8 *puVar10;
  
  puVar5 = (undefined8 *)
           FUN_10033207c("*KindredHatManifest*","build://Progression/KindredHatManifest.def");
  puVar5 = (undefined8 *)*puVar5;
  puVar10 = (undefined8 *)*puVar5;
  if (puVar10 != (undefined8 *)0x0) {
    do {
      bVar3 = param_1[0x17];
      uVar6 = (ulong)bVar3;
      sVar1 = *(size_t *)(param_1 + 8);
      if (-1 < (char)bVar3) {
        sVar1 = uVar6;
      }
      sVar2 = DAT_101d911a0;
      if (-1 < (char)DAT_101d911a8._7_1_) {
        sVar2 = (ulong)DAT_101d911a8._7_1_;
      }
      if (sVar1 == sVar2) {
        pbVar9 = *(byte **)param_1;
        pbVar8 = pbVar9;
        if (-1 < (char)bVar3) {
          pbVar8 = param_1;
        }
        pbVar7 = DAT_101d91198;
        if (-1 < (char)DAT_101d911a8._7_1_) {
          pbVar7 = (byte *)&DAT_101d91198;
        }
        if ((char)bVar3 < '\0') {
          if ((sVar1 != 0) && (iVar4 = _memcmp(pbVar8,pbVar7,sVar1), pbVar8 = pbVar9, iVar4 != 0))
          goto LAB_1003321b4;
        }
        else if (sVar1 != 0) {
          pbVar8 = param_1;
          if ((uint)*pbVar7 == ((uint)pbVar9 & 0xff)) {
            do {
              uVar6 = uVar6 - 1;
              pbVar8 = pbVar8 + 1;
              pbVar7 = pbVar7 + 1;
              if (uVar6 == 0) goto LAB_1003321c4;
            } while (*pbVar8 == *pbVar7);
            goto LAB_1003321a4;
          }
          goto LAB_1003321b4;
        }
      }
      else {
LAB_1003321a4:
        pbVar8 = *(byte **)param_1;
        if (-1 < (char)bVar3) {
          pbVar8 = param_1;
        }
LAB_1003321b4:
        iVar4 = _strcmp((char *)pbVar8,(char *)*puVar10);
        if (iVar4 == 0) {
          return *puVar5;
        }
      }
LAB_1003321c4:
      puVar5 = puVar5 + 1;
      puVar10 = (undefined8 *)*puVar5;
    } while (puVar10 != (undefined8 *)0x0);
  }
  return 0;
}




undefined8 * FUN_100332200(undefined8 *param_1)

{
  FUN_1000f9594(param_1 + 0x19,1);
  if (*(char *)((long)param_1 + 199) < '\0') {
    operator_delete((void *)param_1[0x16]);
  }
  if (*(char *)((long)param_1 + 0x8f) < '\0') {
    operator_delete((void *)param_1[0xf]);
  }
  if (*(char *)((long)param_1 + 0x77) < '\0') {
    operator_delete((void *)param_1[0xc]);
  }
  if (*(char *)((long)param_1 + 0x5f) < '\0') {
    operator_delete((void *)param_1[9]);
  }
  if (*(char *)((long)param_1 + 0x47) < '\0') {
    operator_delete((void *)param_1[6]);
  }
  if (*(char *)((long)param_1 + 0x2f) < '\0') {
    operator_delete((void *)param_1[3]);
  }
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    operator_delete((void *)*param_1);
  }
  return param_1;
}




long FUN_10033229c(long param_1)

{
  long lVar1;
  
  lVar1 = FUN_10001549c(param_1,"");
  FUN_10001549c(lVar1 + 0x18,"");
  FUN_10001549c(param_1 + 0x30,"");
  FUN_10001549c(param_1 + 0x48,"");
  FUN_10001549c(param_1 + 0x60,"");
  FUN_10001549c(param_1 + 0x78,"");
  *(undefined2 *)(param_1 + 0xee) = 0;
  *(undefined1 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 0xe5) = 0;
  *(undefined8 *)(param_1 + 0xdd) = 0;
  return param_1;
}




undefined8 * FUN_100332324(undefined8 *param_1)

{
  FUN_10001629c(param_1 + 0x16,1);
  FUN_10032f134(param_1 + 0x14,1);
  FUN_10032f134(param_1 + 0x12,1);
  if (*(char *)((long)param_1 + 0x8f) < '\0') {
    operator_delete((void *)param_1[0xf]);
  }
  if (*(char *)((long)param_1 + 0x77) < '\0') {
    operator_delete((void *)param_1[0xc]);
  }
  if (*(char *)((long)param_1 + 0x5f) < '\0') {
    operator_delete((void *)param_1[9]);
  }
  if (*(char *)((long)param_1 + 0x47) < '\0') {
    operator_delete((void *)param_1[6]);
  }
  if (*(char *)((long)param_1 + 0x2f) < '\0') {
    operator_delete((void *)param_1[3]);
  }
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    operator_delete((void *)*param_1);
  }
  return param_1;
}




void FUN_1003323c8(uint *param_1,uint param_2)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  void *pvVar4;
  void *pvVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  if (param_1[1] < param_2) {
    pvVar4 = operator_new__((ulong)param_2 * 0xf8);
    pvVar5 = *(void **)(param_1 + 2);
    uVar3 = *param_1;
    if (uVar3 == 0) {
      param_1[1] = param_2;
    }
    else {
      lVar6 = 0;
      do {
        lVar1 = (long)pvVar4 + lVar6;
        lVar2 = (long)pvVar5 + lVar6;
        FUN_10003330c(lVar1,lVar2);
        FUN_10003330c(lVar1 + 0x18,lVar2 + 0x18);
        FUN_10003330c(lVar1 + 0x30,lVar2 + 0x30);
        FUN_10003330c(lVar1 + 0x48,lVar2 + 0x48);
        FUN_10003330c(lVar1 + 0x60,lVar2 + 0x60);
        FUN_10003330c(lVar1 + 0x78,lVar2 + 0x78);
        FUN_100332518(lVar1 + 0x90,lVar2 + 0x90);
        FUN_100332518(lVar1 + 0xa0,lVar2 + 0xa0);
        FUN_1000a72a4(lVar1 + 0xb0,lVar2 + 0xb0);
        uVar8 = *(undefined8 *)(lVar2 + 200);
        uVar7 = *(undefined8 *)(lVar2 + 0xc0);
        uVar10 = *(undefined8 *)(lVar2 + 0xd8);
        uVar9 = *(undefined8 *)(lVar2 + 0xd0);
        uVar12 = *(undefined8 *)(lVar2 + 0xe8);
        uVar11 = *(undefined8 *)(lVar2 + 0xe0);
        *(undefined1 *)(lVar1 + 0xf0) = *(undefined1 *)(lVar2 + 0xf0);
        *(undefined8 *)(lVar1 + 0xd8) = uVar10;
        *(undefined8 *)(lVar1 + 0xd0) = uVar9;
        *(undefined8 *)(lVar1 + 0xe8) = uVar12;
        *(undefined8 *)(lVar1 + 0xe0) = uVar11;
        *(undefined8 *)(lVar1 + 200) = uVar8;
        *(undefined8 *)(lVar1 + 0xc0) = uVar7;
        lVar6 = lVar6 + 0xf8;
      } while ((ulong)uVar3 * 0xf8 - lVar6 != 0);
      pvVar5 = *(void **)(param_1 + 2);
      param_1[1] = param_2;
      if (*param_1 != 0) {
        lVar6 = (ulong)*param_1 * 0xf8;
        do {
          FUN_100332324(pvVar5);
          pvVar5 = (void *)((long)pvVar5 + 0xf8);
          lVar6 = lVar6 + -0xf8;
        } while (lVar6 != 0);
        pvVar5 = *(void **)(param_1 + 2);
      }
    }
    if (pvVar5 != (void *)0x0) {
      operator_delete__(pvVar5);
    }
    *(void **)(param_1 + 2) = pvVar4;
  }
  return;
}




uint * FUN_100332518(uint *param_1,uint *param_2)

{
  long lVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_100332598(param_1,*param_2);
  uVar2 = 0;
  if (*param_2 != 0) {
    lVar4 = *(long *)(param_2 + 2);
    lVar1 = *(long *)(param_1 + 2);
    lVar5 = (ulong)*param_2 * 0x28;
    do {
      lVar1 = FUN_10003330c(lVar1,lVar4);
      uVar3 = *(undefined8 *)(lVar4 + 0x18);
      *(undefined2 *)(lVar1 + 0x20) = *(undefined2 *)(lVar4 + 0x20);
      *(undefined8 *)(lVar1 + 0x18) = uVar3;
      lVar4 = lVar4 + 0x28;
      lVar1 = lVar1 + 0x28;
      lVar5 = lVar5 + -0x28;
    } while (lVar5 != 0);
    uVar2 = *param_2;
  }
  *param_1 = uVar2;
  return param_1;
}




void FUN_100332598(uint *param_1,uint param_2)

{
  void *pvVar1;
  void *pvVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  
  if (param_1[1] < param_2) {
    pvVar1 = operator_new__((ulong)param_2 * 0x28);
    puVar5 = *(undefined8 **)(param_1 + 2);
    if (*param_1 == 0) {
      param_1[1] = param_2;
    }
    else {
      lVar6 = (ulong)*param_1 * 0x28;
      pvVar2 = pvVar1;
      do {
        lVar3 = FUN_10003330c(pvVar2,puVar5);
        uVar4 = puVar5[3];
        *(undefined2 *)(lVar3 + 0x20) = *(undefined2 *)(puVar5 + 4);
        *(undefined8 *)(lVar3 + 0x18) = uVar4;
        puVar5 = puVar5 + 5;
        pvVar2 = (void *)(lVar3 + 0x28);
        lVar6 = lVar6 + -0x28;
      } while (lVar6 != 0);
      puVar5 = *(undefined8 **)(param_1 + 2);
      param_1[1] = param_2;
      if (*param_1 != 0) {
        lVar6 = (ulong)*param_1 * 0x28;
        do {
          if (*(char *)((long)puVar5 + 0x17) < '\0') {
            operator_delete((void *)*puVar5);
          }
          puVar5 = puVar5 + 5;
          lVar6 = lVar6 + -0x28;
        } while (lVar6 != 0);
        puVar5 = *(undefined8 **)(param_1 + 2);
      }
    }
    if (puVar5 != (undefined8 *)0x0) {
      operator_delete__(puVar5);
    }
    *(void **)(param_1 + 2) = pvVar1;
  }
  return;
}




void FUN_100332678(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 << 3);
    puVar2 = *(undefined8 **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar3 = (ulong)*param_1 << 3;
      puVar4 = puVar1;
      puVar5 = puVar2;
      do {
        *puVar4 = *puVar5;
        lVar3 = lVar3 + -8;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      } while (lVar3 != 0);
    }
    param_1[1] = param_2;
    if (puVar2 != (undefined8 *)0x0) {
      operator_delete__(puVar2);
    }
    *(undefined8 **)(param_1 + 2) = puVar1;
  }
  return;
}




void FUN_1003326f4(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 << 3);
    puVar2 = *(undefined8 **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar3 = (ulong)*param_1 << 3;
      puVar4 = puVar1;
      puVar5 = puVar2;
      do {
        *puVar4 = *puVar5;
        lVar3 = lVar3 + -8;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      } while (lVar3 != 0);
    }
    param_1[1] = param_2;
    if (puVar2 != (undefined8 *)0x0) {
      operator_delete__(puVar2);
    }
    *(undefined8 **)(param_1 + 2) = puVar1;
  }
  return;
}




void FUN_100332770(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  ulong uVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  
LAB_10033279c:
  puVar8 = param_2 + -1;
  puVar9 = param_1;
LAB_1003327a4:
  param_1 = puVar9;
  lVar7 = (long)param_2 - (long)param_1;
  uVar5 = lVar7 >> 3;
  switch(uVar5) {
  case 0:
  case 1:
    goto switchD_100332a44_caseD_0;
  case 2:
    iVar3 = (*(code *)*param_3)(*puVar8,*param_1);
    if (iVar3 == 0) {
      return;
    }
    uVar6 = *param_1;
    *param_1 = *puVar8;
    *puVar8 = uVar6;
    return;
  case 3:
    FUN_100332b44(param_1,param_1 + 1,puVar8,param_3);
    return;
  case 4:
    FUN_100332c30(param_1,param_1 + 1,param_1 + 2,puVar8,param_3);
    return;
  case 5:
    FUN_100332cfc(param_1,param_1 + 1,param_1 + 2,param_1 + 3,puVar8,param_3);
    return;
  default:
    if (lVar7 < 0xf8) {
      FUN_100332e00(param_1,param_2,param_3);
      return;
    }
    uVar1 = uVar5;
    if ((long)uVar5 < 0) {
      uVar1 = uVar5 + 1;
    }
    puVar9 = (undefined8 *)((long)param_1 + (uVar1 & 0x3ffffffffffffffe) * 4);
    if (lVar7 < 0x1f39) {
      iVar3 = FUN_100332b44(param_1,puVar9,puVar8,param_3);
    }
    else {
      uVar1 = uVar5 + 3;
      if (-1 < (long)uVar5) {
        uVar1 = uVar5;
      }
      lVar7 = (uVar1 & 0x7ffffffffffffffc) * 2;
      iVar3 = FUN_100332cfc(param_1,(long)param_1 + lVar7,puVar9,(long)puVar9 + lVar7,puVar8,param_3
                           );
    }
    uVar5 = (*(code *)*param_3)(*param_1,*puVar9);
    puVar10 = puVar8;
    if ((uVar5 & 1) == 0) break;
    goto LAB_100332874;
  }
  while (puVar10 = puVar10 + -1, puVar10 != param_1) {
    iVar4 = (*(code *)*param_3)(*puVar10,*puVar9);
    if (iVar4 != 0) goto code_r0x000100332860;
  }
  puVar10 = param_1 + 1;
  uVar5 = (*(code *)*param_3)(*param_1,*puVar8);
  puVar9 = puVar10;
  if ((uVar5 & 1) == 0) {
    while( true ) {
      if (puVar9 == puVar8) {
        return;
      }
      iVar3 = (*(code *)*param_3)(*param_1,*puVar9);
      if (iVar3 != 0) break;
      puVar9 = puVar9 + 1;
    }
    uVar6 = *puVar9;
    puVar10 = puVar9 + 1;
    *puVar9 = *puVar8;
    *puVar8 = uVar6;
  }
  puVar12 = puVar8;
  if (puVar10 == puVar8) {
    return;
  }
  while( true ) {
    puVar9 = puVar10 + -1;
    do {
      puVar10 = puVar9;
      puVar9 = puVar10 + 1;
      iVar3 = (*(code *)*param_3)(*param_1,*puVar9);
    } while (iVar3 == 0);
    puVar10 = puVar10 + 2;
    do {
      puVar12 = puVar12 + -1;
      uVar5 = (*(code *)*param_3)(*param_1,*puVar12);
    } while ((uVar5 & 1) != 0);
    if (puVar12 <= puVar9) break;
    uVar6 = *puVar9;
    *puVar9 = *puVar12;
    *puVar12 = uVar6;
  }
  goto LAB_1003327a4;
code_r0x000100332860:
  uVar6 = *param_1;
  *param_1 = *puVar10;
  *puVar10 = uVar6;
  iVar3 = iVar3 + 1;
LAB_100332874:
  puVar12 = param_1 + 1;
  puVar2 = puVar9;
  puVar11 = puVar12;
  if (puVar12 < puVar10) {
    while( true ) {
      puVar9 = puVar2;
      puVar12 = puVar11 + -1;
      do {
        puVar11 = puVar12;
        puVar12 = puVar11 + 1;
        uVar5 = (*(code *)*param_3)(*puVar12,*puVar9);
      } while ((uVar5 & 1) != 0);
      puVar11 = puVar11 + 2;
      do {
        puVar10 = puVar10 + -1;
        iVar4 = (*(code *)*param_3)(*puVar10,*puVar9);
      } while (iVar4 == 0);
      if (puVar10 < puVar12) break;
      uVar6 = *puVar12;
      *puVar12 = *puVar10;
      *puVar10 = uVar6;
      iVar3 = iVar3 + 1;
      puVar2 = puVar10;
      if (puVar12 != puVar9) {
        puVar2 = puVar9;
      }
    }
  }
  if ((puVar12 != puVar9) && (iVar4 = (*(code *)*param_3)(*puVar9,*puVar12), iVar4 != 0)) {
    uVar6 = *puVar12;
    *puVar12 = *puVar9;
    *puVar9 = uVar6;
    iVar3 = iVar3 + 1;
  }
  if (iVar3 == 0) {
    uVar5 = FUN_100332ed0(param_1,puVar12,param_3);
    iVar3 = FUN_100332ed0(puVar12 + 1,param_2,param_3);
    if (iVar3 != 0) goto LAB_100332a24;
    puVar9 = puVar12 + 1;
    if ((uVar5 & 1) != 0) goto LAB_1003327a4;
  }
  if ((long)param_2 - (long)puVar12 <= (long)puVar12 - (long)param_1) {
    FUN_100332770(puVar12 + 1,param_2,param_3);
    param_2 = puVar12;
    goto LAB_10033279c;
  }
  FUN_100332770(param_1,puVar12,param_3);
  puVar9 = puVar12 + 1;
  goto LAB_1003327a4;
LAB_100332a24:
  param_2 = puVar12;
  if ((uVar5 & 1) != 0) {
switchD_100332a44_caseD_0:
    return;
  }
  goto LAB_10033279c;
}




undefined8
FUN_100332b44(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = (*(code *)*param_4)(*param_2,*param_1);
  uVar3 = (*(code *)*param_4)(*param_3,*param_2);
  if ((uVar2 & 1) == 0) {
    if ((int)uVar3 == 0) {
      return uVar3;
    }
    uVar3 = *param_2;
    *param_2 = *param_3;
    *param_3 = uVar3;
    iVar1 = (*(code *)*param_4)(*param_2,*param_1);
    if (iVar1 != 0) {
      uVar3 = *param_1;
      *param_1 = *param_2;
      *param_2 = uVar3;
      return 2;
    }
  }
  else {
    uVar4 = *param_1;
    if ((int)uVar3 == 0) {
      *param_1 = *param_2;
      *param_2 = uVar4;
      iVar1 = (*(code *)*param_4)(*param_3);
      if (iVar1 != 0) {
        uVar3 = *param_2;
        *param_2 = *param_3;
        *param_3 = uVar3;
        return 2;
      }
    }
    else {
      *param_1 = *param_3;
      *param_3 = uVar4;
    }
  }
  return 1;
}




ulong FUN_100332c30(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                   undefined8 *param_5)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  int iVar4;
  
  uVar2 = FUN_100332b44();
  iVar1 = (*(code *)*param_5)(*param_4,*param_3);
  if (iVar1 != 0) {
    uVar3 = *param_3;
    *param_3 = *param_4;
    *param_4 = uVar3;
    iVar1 = (*(code *)*param_5)(*param_3,*param_2);
    iVar4 = (int)uVar2;
    if (iVar1 == 0) {
      uVar2 = (ulong)(iVar4 + 1);
    }
    else {
      uVar3 = *param_2;
      *param_2 = *param_3;
      *param_3 = uVar3;
      iVar1 = (*(code *)*param_5)(*param_2,*param_1);
      if (iVar1 == 0) {
        uVar2 = (ulong)(iVar4 + 2);
      }
      else {
        uVar3 = *param_1;
        *param_1 = *param_2;
        *param_2 = uVar3;
        uVar2 = (ulong)(iVar4 + 3);
      }
    }
  }
  return uVar2;
}




ulong FUN_100332cfc(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                   undefined8 *param_5,undefined8 *param_6)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  int iVar4;
  
  uVar2 = FUN_100332c30();
  iVar1 = (*(code *)*param_6)(*param_5,*param_4);
  if (iVar1 != 0) {
    uVar3 = *param_4;
    *param_4 = *param_5;
    *param_5 = uVar3;
    iVar1 = (*(code *)*param_6)(*param_4,*param_3);
    iVar4 = (int)uVar2;
    if (iVar1 == 0) {
      uVar2 = (ulong)(iVar4 + 1);
    }
    else {
      uVar3 = *param_3;
      *param_3 = *param_4;
      *param_4 = uVar3;
      iVar1 = (*(code *)*param_6)(*param_3,*param_2);
      if (iVar1 == 0) {
        uVar2 = (ulong)(iVar4 + 2);
      }
      else {
        uVar3 = *param_2;
        *param_2 = *param_3;
        *param_3 = uVar3;
        iVar1 = (*(code *)*param_6)(*param_2,*param_1);
        if (iVar1 == 0) {
          uVar2 = (ulong)(iVar4 + 3);
        }
        else {
          uVar3 = *param_1;
          *param_1 = *param_2;
          *param_2 = uVar3;
          uVar2 = (ulong)(iVar4 + 4);
        }
      }
    }
  }
  return uVar2;
}




void FUN_100332e00(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  
  FUN_100332b44(param_1,param_1 + 1,param_1 + 2,param_3);
  if (param_1 + 3 != param_2) {
    lVar8 = 0;
    puVar5 = param_1 + 3;
    puVar6 = param_1 + 2;
    do {
      puVar4 = puVar5;
      iVar2 = (*(code *)*param_3)(*puVar4,*puVar6);
      if (iVar2 != 0) {
        uVar7 = *puVar4;
        lVar1 = lVar8;
        do {
          lVar9 = lVar1;
          *(undefined8 *)((long)param_1 + lVar9 + 0x18) =
               *(undefined8 *)((long)param_1 + lVar9 + 0x10);
          puVar5 = param_1;
          if (lVar9 == -0x10) goto LAB_100332ea4;
          uVar3 = (*(code *)*param_3)(uVar7,*(undefined8 *)((long)param_1 + lVar9 + 8));
          lVar1 = lVar9 + -8;
        } while ((uVar3 & 1) != 0);
        puVar5 = (undefined8 *)((long)param_1 + lVar9 + 0x10);
LAB_100332ea4:
        *puVar5 = uVar7;
      }
      lVar8 = lVar8 + 8;
      puVar5 = puVar4 + 1;
      puVar6 = puVar4;
    } while (puVar4 + 1 != param_2);
  }
  return;
}




bool FUN_100332ed0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  long lVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  
  switch((long)param_2 - (long)param_1 >> 3) {
  case 0:
  case 1:
    break;
  case 2:
    iVar2 = (*(code *)*param_3)(param_2[-1],*param_1);
    if (iVar2 != 0) {
      uVar8 = *param_1;
      *param_1 = param_2[-1];
      param_2[-1] = uVar8;
    }
    break;
  case 3:
    FUN_100332b44(param_1,param_1 + 1,param_2 + -1,param_3);
    break;
  case 4:
    FUN_100332c30(param_1,param_1 + 1,param_1 + 2,param_2 + -1,param_3);
    break;
  case 5:
    FUN_100332cfc(param_1,param_1 + 1,param_1 + 2,param_1 + 3,param_2 + -1,param_3);
    break;
  default:
    FUN_100332b44(param_1,param_1 + 1,param_1 + 2,param_3);
    if (param_1 + 3 != param_2) {
      lVar9 = 0;
      iVar2 = 0;
      puVar6 = param_1 + 3;
      puVar7 = param_1 + 2;
      do {
        puVar5 = puVar6;
        iVar3 = (*(code *)*param_3)(*puVar5,*puVar7);
        if (iVar3 != 0) {
          uVar8 = *puVar5;
          lVar1 = lVar9;
          do {
            lVar10 = lVar1;
            *(undefined8 *)((long)param_1 + lVar10 + 0x18) =
                 *(undefined8 *)((long)param_1 + lVar10 + 0x10);
            puVar6 = param_1;
            if (lVar10 == -0x10) goto LAB_100332fd0;
            uVar4 = (*(code *)*param_3)(uVar8,*(undefined8 *)((long)param_1 + lVar10 + 8));
            lVar1 = lVar10 + -8;
          } while ((uVar4 & 1) != 0);
          puVar6 = (undefined8 *)((long)param_1 + lVar10 + 0x10);
LAB_100332fd0:
          *puVar6 = uVar8;
          iVar2 = iVar2 + 1;
          if (iVar2 == 8) {
            return puVar5 + 1 == param_2;
          }
        }
        lVar9 = lVar9 + 8;
        puVar6 = puVar5 + 1;
        puVar7 = puVar5;
      } while (puVar5 + 1 != param_2);
    }
  }
  return true;
}




void FUN_100333070(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 << 3);
    puVar2 = *(undefined8 **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar3 = (ulong)*param_1 << 3;
      puVar4 = puVar1;
      puVar5 = puVar2;
      do {
        *puVar4 = *puVar5;
        lVar3 = lVar3 + -8;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      } while (lVar3 != 0);
    }
    param_1[1] = param_2;
    if (puVar2 != (undefined8 *)0x0) {
      operator_delete__(puVar2);
    }
    *(undefined8 **)(param_1 + 2) = puVar1;
  }
  return;
}




void FUN_1003330ec(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 << 3);
    puVar2 = *(undefined8 **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar3 = (ulong)*param_1 << 3;
      puVar4 = puVar1;
      puVar5 = puVar2;
      do {
        *puVar4 = *puVar5;
        lVar3 = lVar3 + -8;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      } while (lVar3 != 0);
    }
    param_1[1] = param_2;
    if (puVar2 != (undefined8 *)0x0) {
      operator_delete__(puVar2);
    }
    *(undefined8 **)(param_1 + 2) = puVar1;
  }
  return;
}




void FUN_100333168(uint *param_1,uint param_2)

{
  void *pvVar1;
  void *pvVar2;
  char *pcVar3;
  void *pvVar4;
  long lVar5;
  
  if (param_1[1] < param_2) {
    pvVar1 = operator_new__((ulong)param_2 * 0x30);
    pvVar2 = *(void **)(param_1 + 2);
    if (*param_1 == 0) {
      param_1[1] = param_2;
    }
    else {
      lVar5 = (ulong)*param_1 * 0x30;
      pvVar4 = pvVar1;
      do {
        FUN_10003330c(pvVar4,pvVar2);
        FUN_10003330c((long)pvVar4 + 0x18,(long)pvVar2 + 0x18);
        pvVar2 = (void *)((long)pvVar2 + 0x30);
        pvVar4 = (void *)((long)pvVar4 + 0x30);
        lVar5 = lVar5 + -0x30;
      } while (lVar5 != 0);
      pvVar2 = *(void **)(param_1 + 2);
      param_1[1] = param_2;
      if (*param_1 != 0) {
        pcVar3 = (char *)((long)pvVar2 + 0x17);
        lVar5 = (ulong)*param_1 * 0x30;
        do {
          if (pcVar3[0x18] < '\0') {
            operator_delete(*(void **)(pcVar3 + 1));
          }
          if (*pcVar3 < '\0') {
            operator_delete(*(void **)(pcVar3 + -0x17));
          }
          pcVar3 = pcVar3 + 0x30;
          lVar5 = lVar5 + -0x30;
        } while (lVar5 != 0);
        pvVar2 = *(void **)(param_1 + 2);
      }
    }
    if (pvVar2 != (void *)0x0) {
      operator_delete__(pvVar2);
    }
    *(void **)(param_1 + 2) = pvVar1;
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1003333d4(void)

{
  DAT_101e46ae0 = 0xff;
  DAT_101e46ae2 = 0xffff;
  DAT_101e46ae4 = 0xffff;
  DAT_101e46ae6 = 0xffbc9c44;
  DAT_101e46aea = 0xff1166f2;
  DAT_101e46aee = 0xffe0e0e0;
  DAT_101e46af2 = 0xffa0a0a0;
  DAT_101e46af6 = 0xff8c8c8c;
  DAT_101e46afa = 0xff322213;
  DAT_101e46afe = 0xff091911;
  DAT_101e46b02 = 0xff170c19;
  DAT_101e46b06 = 0xff241a14;
  DAT_101e46b0a = 0xff14171c;
  DAT_101e46b0e = 0xff221911;
  DAT_101e46b12 = 0xff1a1416;
  DAT_101e46b16 = 0xff121414;
  DAT_101e46b1a = 0xff1a1809;
  DAT_101e46b1e = 0xff141414;
  DAT_101e46b22 = 0xff141414;
  DAT_101e46b26 = 0xff2929c0;
  DAT_101e46b2a = 0xff283082;
  DAT_101e46b2e = 0xff5262cc;
  DAT_101e46b32 = 0xff283082;
  DAT_101e46b36 = 0xff5262cc;
  DAT_101e46b3a = 0xff745c42;
  DAT_101e46b3e = 0xff184155;
  DAT_101e46b42 = 0xff92665e;
  DAT_101e46b46 = 0xffbc9c44;
  DAT_101e46b4a = 0xffbbae56;
  DAT_101e46b4e = 0xff8b7b01;
  DAT_101e46b52 = 0xff90b3ef;
  DAT_101e46b56 = 0xff728ebe;
  DAT_101e46b5a = 0xff19459d;
  DAT_101e46b5e = 0xff9d877b;
  DAT_101e46b62 = 0xffcbb1a3;
  DAT_101e46b66 = 0xff3f6fb5;
  DAT_101e46b6a = 0xffc5c5c5;
  DAT_101e46b6e = 0xff4fc1f1;
  DAT_101e46b72 = 0xff606060;
  DAT_101e46b76 = 0xffc5ff7b;
  DAT_101e46b7a = 0xff5271eb;
  DAT_101e46b7e = 0xfffae076;
  DAT_101e46b82 = 0xff3ac8f6;
  DAT_101e46b86 = 0xffaaaaaa;
  DAT_101e46b8a = 0xffe19400;
  DAT_101e46b8e = 0xffe19400;
  DAT_101e46b92 = 0xffe550b2;
  DAT_101e46b96 = 0xfff22ae8;
  DAT_101e46b9a = 0xff005ae1;
  DAT_101e46b9e = 0xff1addfa;
  DAT_101e46ba2 = 0xff2424b3;
  DAT_101e46ba6 = 0xff2424b3;
  DAT_101e46baa = 0xff646464;
  DAT_101e46bae = 0xff92665e;
  DAT_101e46bb4 = 0xff646037;
  DAT_101e46bb8 = 0xffffffff;
  DAT_101e46bbc = 0xff1111a1;
  DAT_101e46bc0 = 0xff321ee1;
  DAT_101e46bc4 = 0xffc8c8c8;
  DAT_101e46bc8 = 0xff321ee1;
  DAT_101e46bcc = 0xff7fe801;
  DAT_101e46bd0 = 0xffffffff;
  DAT_101e46bd4 = 0xff6259b3;
  DAT_101e46bd8 = 0xff506e73;
  DAT_101e46bdc = 0xff9dbf86;
  DAT_101e46be0 = 0xffa35244;
  DAT_101e46be4 = 0xffca828e;
  DAT_101e46be8 = 0xffa6a6a6;
  DAT_101e46bec = 0xffa6a6a6;
  DAT_101e46bf0 = 0xffffffff;
  DAT_101e46bf4 = 0xff88ea2f;
  DAT_101e46bf8 = 0xff8c8c8c;
  DAT_101e46bfc = 0xffffb400;
  DAT_101e46c00 = 0xffff00ff;
  DAT_101e46c04 = 0xff00aded;
  DAT_101e46c08 = 0xff33d3ff;
  DAT_101e46c0c = 0xff7fe801;
  DAT_101e46c10 = 0xff282828;
  DAT_101e46c14 = 0xfff0f0f0;
  DAT_101e46c18 = 0xffa4781e;
  DAT_101e46c1c = 0xffa6654b;
  DAT_101e46c20 = 0xff93435b;
  DAT_101e46c24 = 0xff387f9c;
  DAT_101e46c28 = 0xffa3781e;
  DAT_101e46c2c = 0xffffd18a;
  DAT_101e46c30 = 0xffff61f7;
  DAT_101e46c34 = 0xff5de1f2;
  DAT_101e46c38 = 0xff80eaff;
  DAT_101e46c3c = 0xff32e00e;
  DAT_101e46c40 = 0xff5a3c10;
  DAT_101e46c44 = 0xff330b03;
  DAT_101e46c48 = 0xff33031d;
  DAT_101e46c4c = 0xff032433;
  DAT_101e46c50 = 0xff9e8e8d;
  DAT_101e46c58 = 0;
  DAT_101e46c60 = 0;
  ___cxa_atexit(FUN_10032b8c8,&DAT_101e46c58,0x100000000);
  DAT_101e46c70 = 0;
  DAT_101e46c78 = 0;
  ___cxa_atexit(FUN_10032b8f8,&DAT_101e46c70,0x100000000);
  uRam0000000101e46c90 = 0;
  _DAT_101e46c88 = 0;
  DAT_101e46ca0 = 0;
  _DAT_101e46c98 = 0;
  DAT_101e46cb0._0_1_ = 0;
  _DAT_101e46ca8 = 0;
  uRam0000000101e46cb9 = 0;
  DAT_101e46cb0._1_7_ = 0;
  uRam0000000101e46cb8 = 0;
  ___cxa_atexit(FUN_10032b920,&DAT_101e46c88,0x100000000);
  DAT_101e46cc8 = 0;
  DAT_101e46cd0 = 0;
  FUN_1004e3004(&DAT_101e46cd8);
  DAT_101e46ce0 = 0;
  DAT_101e46ce8 = 0;
  DAT_101e46cf8 = 0;
  DAT_101e46cf0 = 0;
  ___cxa_atexit(FUN_10032b970,&DAT_101e46cc8,0x100000000);
  uRam0000000101e46d08 = 0;
  _DAT_101e46d00 = 0;
  uRam0000000101e46d18 = 0;
  _DAT_101e46d10 = 0;
  DAT_101e46d20 = 0;
  ___cxa_atexit(FUN_10032b998,&DAT_101e46d00,0x100000000);
  DAT_101e46d30 = 0;
  DAT_101e46d38 = 0;
  DAT_101e46d28 = 0;
  ___cxa_atexit(FUN_1000e6204,&DAT_101e46d28,0x100000000);
  FUN_1004e3004(&DAT_101e46d40);
  return;
}




long * FUN_100333b84(long *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_1006421a8();
  *puVar1 = &PTR_thunk_FUN_100333c98_101493d98;
  FUN_10064fd54(puVar1 + 0x11,1);
  param_1[0x11] = (long)&PTR_thunk_FUN_10064e2bc_101451a40;
  thunk_FUN_100650e64(param_1 + 0x2a);
  FUN_10064e264(param_1 + 0x50);
  thunk_FUN_100652c08(param_1 + 0x67);
  thunk_FUN_1001cd1dc(param_1 + 0x85);
  thunk_FUN_1001ae894(param_1 + 0xb0);
  thunk_FUN_100183160(param_1 + 0x1ef,0);
  thunk_FUN_100650e64(param_1 + 0x67b);
  thunk_FUN_100652c08(param_1 + 0x6a1);
  thunk_FUN_100652c08(param_1 + 0x6bf);
  thunk_FUN_1001cd1dc(param_1 + 0x6dd);
  thunk_FUN_100181304(param_1 + 0x708,0);
  FUN_10064fd54(param_1 + 0x9bf,1);
  param_1[0x9bf] = (long)&PTR_thunk_FUN_10064e2bc_101451a40;
  FUN_1001aa1d4(param_1 + 0x9d8);
  thunk_FUN_1001c4088(param_1 + 0xa14);
  thunk_FUN_1001c397c(param_1 + 0xaaf);
  FUN_100335c64(param_1 + 0xb83);
  param_1[0xbb9] = 0;
  param_1[3000] = 0;
  (**(code **)(*param_1 + 0xf8))(param_1);
  return param_1;
}




void FUN_100333c98(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_100333c98_101493d98;
  FUN_1000ec1cc(param_1 + 3000,1);
  FUN_100335d1c(param_1 + 0xb83);
  param_1[0xaaf] = &PTR_FUN_101461c58;
  thunk_FUN_1000160a0(param_1 + 0xb7b);
  thunk_FUN_100651068(param_1 + 0xb54);
  thunk_FUN_100651068(param_1 + 0xb2e);
  thunk_FUN_100651068(param_1 + 0xb08);
  param_1[0xaea] = &PTR_FUN_1014a7108;
  param_1[0xb01] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xb04);
  FUN_10064e2bc(param_1 + 0xaea);
  param_1[0xac0] = &PTR_FUN_1014a6db0;
  param_1[0xad7] = &PTR_FUN_1014a6f10;
  thunk_FUN_100657580(param_1 + 0xada);
  FUN_10064e2bc(param_1 + 0xac0);
  FUN_10064221c(param_1 + 0xaaf);
  param_1[0xa14] = &PTR_FUN_1014654b8;
  thunk_FUN_100651068(param_1 + 0xa88);
  thunk_FUN_100651068(param_1 + 0xa62);
  FUN_10064e2bc(param_1 + 0xa49);
  param_1[0xa2b] = &PTR_FUN_1014a7108;
  param_1[0xa42] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xa45);
  FUN_10064e2bc(param_1 + 0xa2b);
  FUN_10064e2bc(param_1 + 0xa14);
  thunk_FUN_1001aa23c(param_1 + 0x9d8);
  FUN_10064e2bc(param_1 + 0x9bf);
  FUN_10003bd40(param_1 + 0x708);
  param_1[0x6dd] = &PTR_FUN_10145eb78;
  param_1[0x6f4] = &PTR_FUN_10145ecf0;
  if ((void *)param_1[0x705] != (void *)0x0) {
    operator_delete__((void *)param_1[0x705]);
    param_1[0x705] = 0;
    param_1[0x704] = 0;
  }
  FUN_100651068(param_1 + 0x6dd);
  param_1[0x6bf] = &PTR_FUN_1014a7108;
  param_1[0x6d6] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x6d9);
  FUN_10064e2bc(param_1 + 0x6bf);
  param_1[0x6a1] = &PTR_FUN_1014a7108;
  param_1[0x6b8] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x6bb);
  FUN_10064e2bc(param_1 + 0x6a1);
  thunk_FUN_100651068(param_1 + 0x67b);
  param_1[0x1ef] = &PTR_FUN_10145f168;
  param_1[0x65c] = &PTR_FUN_1014a7108;
  param_1[0x673] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x676);
  FUN_10064e2bc(param_1 + 0x65c);
  param_1[0x63e] = &PTR_FUN_1014a7108;
  param_1[0x655] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x658);
  FUN_10064e2bc(param_1 + 0x63e);
  thunk_FUN_100651068(param_1 + 0x618);
  param_1[0x5fa] = &PTR_FUN_1014a7108;
  param_1[0x611] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x614);
  FUN_10064e2bc(param_1 + 0x5fa);
  FUN_10064221c(param_1 + 0x5e9);
  param_1[0x5cb] = &PTR_FUN_1014a7108;
  param_1[0x5e2] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x5e5);
  FUN_10064e2bc(param_1 + 0x5cb);
  param_1[0x1ef] = &PTR_FUN_10145efd0;
  FUN_10064e2bc(param_1 + 0x595);
  FUN_10064221c(param_1 + 0x584);
  FUN_10064e2bc(param_1 + 0x550);
  FUN_10064221c(param_1 + 0x53f);
  thunk_FUN_100651068(param_1 + 0x519);
  thunk_FUN_100651068(param_1 + 0x4f3);
  param_1[0x4d5] = &PTR_FUN_1014a7108;
  param_1[0x4ec] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x4ef);
  FUN_10064e2bc(param_1 + 0x4d5);
  param_1[0x4b7] = &PTR_FUN_1014a7108;
  param_1[0x4ce] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x4d1);
  FUN_10064e2bc(param_1 + 0x4b7);
  FUN_10064221c(param_1 + 0x4a6);
  FUN_10003bd40(param_1 + 0x1ef);
  FUN_1001afa60(param_1 + 0xb0);
  param_1[0x85] = &PTR_FUN_10145eb78;
  param_1[0x9c] = &PTR_FUN_10145ecf0;
  if ((void *)param_1[0xad] != (void *)0x0) {
    operator_delete__((void *)param_1[0xad]);
    param_1[0xad] = 0;
    param_1[0xac] = 0;
  }
  FUN_100651068(param_1 + 0x85);
  param_1[0x67] = &PTR_FUN_1014a7108;
  param_1[0x7e] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x81);
  FUN_10064e2bc(param_1 + 0x67);
  thunk_FUN_10064e2bc(param_1 + 0x50);
  thunk_FUN_100651068(param_1 + 0x2a);
  FUN_10064e2bc(param_1 + 0x11);
  FUN_10064221c(param_1);
  return;
}




void thunk_FUN_100333c98(void)

{
  FUN_100333c98();
  return;
}




void FUN_1003340a0(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_100333c98();
  operator_delete(pvVar1);
  return;
}




void FUN_1003340b4(void)

{
  return;
}




void FUN_1003340b8(long *param_1,long *param_2)

{
  long *plVar1;
  uint uVar2;
  long *plVar3;
  size_t sVar4;
  int iVar5;
  ulong uVar6;
  undefined8 ***pppuVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 **local_58;
  size_t local_50;
  undefined8 local_48;
  
  plVar3 = param_1 + 0xb0;
  uVar6 = FUN_1003343f4(plVar3);
  if ((uVar6 & 1) == 0) {
    plVar1 = param_1 + 0xb83;
    lVar8 = *param_2;
    *(int *)(param_1 + 0xb84) = (int)param_2[1];
    *plVar1 = lVar8;
    std::string::operator=((string *)(param_1 + 0xb85),(string *)(param_2 + 2));
    std::string::operator=((string *)(param_1 + 0xb88),(string *)(param_2 + 5));
    FUN_100335e0c(param_1 + 0xb8b,param_2 + 8);
    std::string::operator=((string *)(param_1 + 0xb8d),(string *)(param_2 + 10));
    lVar9 = param_2[0x12];
    lVar8 = param_2[0x11];
    lVar11 = param_2[0x10];
    lVar10 = param_2[0xf];
    lVar12 = param_2[0xd];
    param_1[0xb91] = param_2[0xe];
    param_1[0xb90] = lVar12;
    param_1[0xb93] = lVar11;
    param_1[0xb92] = lVar10;
    param_1[0xb95] = lVar9;
    param_1[0xb94] = lVar8;
    std::string::operator=((string *)(param_1 + 0xb96),(string *)(param_2 + 0x13));
    lVar11 = param_2[0x19];
    lVar10 = param_2[0x18];
    lVar9 = param_2[0x1b];
    lVar8 = param_2[0x1a];
    lVar12 = param_2[0x16];
    param_1[0xb9a] = param_2[0x17];
    param_1[0xb99] = lVar12;
    param_1[0xb9c] = lVar11;
    param_1[0xb9b] = lVar10;
    param_1[0xb9e] = lVar9;
    param_1[0xb9d] = lVar8;
    std::string::operator=((string *)(param_1 + 0xb9f),(string *)(param_2 + 0x1c));
    param_1[0xba2] = param_2[0x1f];
    std::string::operator=((string *)(param_1 + 0xba3),(string *)(param_2 + 0x20));
    param_1[0xba6] = param_2[0x23];
    (**(code **)(*param_1 + 0x130))(param_1);
    FUN_1006513c0(param_1 + 0x2a,param_1 + 0xba7);
    FUN_1006513c0(param_1 + 0x85,param_1 + 0xbab);
    FUN_100651460(param_1 + 0x85,param_1 + 0xbad);
    FUN_1001aed88(plVar3,(string *)(param_1 + 0xb85));
    FUN_10001549c(&local_58,"IDLE_CLOSED");
    FUN_1001aeb7c(0xbf800000,plVar3,&local_58);
    if (local_48._7_1_ < '\0') {
      operator_delete(local_58);
    }
    if ((char)*plVar1 == '\0') {
      iVar5 = FUN_10033a91c(plVar1);
      if (iVar5 == 0) {
        FUN_1000eb30c(param_1 + 0xb8d,param_1 + 0x1ef);
      }
      else {
        FUN_1000eb30c(param_1 + 0xb96,param_1 + 0x1ef);
        FUN_1000eb528(param_1 + 0xb96,param_1 + 0xa14);
      }
      iVar5 = FUN_10033a91c(plVar1);
      uVar2 = 4;
      if (iVar5 == 0) {
        uVar2 = 0;
      }
      *(uint *)((long)param_1 + 0x5124) = *(uint *)((long)param_1 + 0x5124) & 0xfffffffb | uVar2;
      iVar5 = FUN_10033a91c(plVar1);
      uVar2 = 0;
      if (iVar5 == 0) {
        uVar2 = 4;
      }
      *(uint *)((long)param_1 + 0x345c) = *(uint *)((long)param_1 + 0x345c) & 0xfffffffb | uVar2;
      FUN_1006513c0(param_1 + 0x67b,param_1 + 0xbb0);
      FUN_10065184c(0x43160000,0,0x3f800000,param_1 + 0x67b);
    }
    (**(code **)(*param_1 + 0x100))(param_1);
  }
  local_58 = (undefined8 ***)0x0;
  local_50 = 0;
  local_48 = 0;
  plVar3 = (long *)param_2[5];
  sVar4 = param_2[6];
  if (-1 < (char)*(byte *)((long)param_2 + 0x3f)) {
    plVar3 = param_2 + 5;
    sVar4 = (ulong)*(byte *)((long)param_2 + 0x3f);
  }
  if (0xffffffffffffffef < sVar4 + 2) {
                    /* WARNING: Subroutine does not return */
    FUN_100335ef4();
  }
  if (sVar4 + 2 < 0x17) {
    pppuVar7 = &local_58;
    local_48 = sVar4 << 0x38;
    if (sVar4 == 0) goto LAB_100334394;
  }
  else {
    uVar6 = sVar4 + 0x12 & 0xfffffffffffffff0;
    pppuVar7 = operator_new(uVar6);
    local_48 = uVar6 | 0x8000000000000000;
    local_58 = pppuVar7;
    local_50 = sVar4;
  }
  _memcpy(pppuVar7,plVar3,sVar4);
LAB_100334394:
  *(undefined1 *)((long)pppuVar7 + sVar4) = 0;
  std::string::append((char *)&local_58,0x1013e0ca6);
  pppuVar7 = (undefined8 ***)local_58;
  if (-1 < (long)local_48) {
    pppuVar7 = &local_58;
  }
  FUN_1001c3fc8(param_1 + 0xaaf,pppuVar7);
  if ((long)local_48 < 0) {
    operator_delete(local_58);
  }
  return;
}




bool FUN_1003343f4(long param_1)

{
  ulong uVar1;
  bool bVar2;
  int iVar3;
  
  uVar1 = *(ulong *)(param_1 + 0x9d8);
  if (-1 < (char)*(byte *)(param_1 + 0x9e7)) {
    uVar1 = (ulong)*(byte *)(param_1 + 0x9e7);
  }
  if (uVar1 == 6) {
    iVar3 = std::string::compare(param_1 + 0x9d0,0,(char *)0xffffffffffffffff,0x1013e17c4);
    bVar2 = iVar3 == 0;
  }
  else {
    bVar2 = false;
  }
  return bVar2;
}




void FUN_10033444c(long param_1,int param_2,long *param_3)

{
  long *plVar1;
  
  plVar1 = (long *)*param_3;
  if (-1 < *(char *)((long)param_3 + 0x17)) {
    plVar1 = param_3;
  }
  if (param_2 != 0) {
    FUN_1001aae30();
    return;
  }
  FUN_1001aaf8c(param_1 + 0x4ec0,plVar1);
  return;
}




void FUN_100334474(long *param_1)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  lVar3 = FUN_10002f320();
  uVar4 = *(ulong *)(lVar3 + 0xe1a0);
  if (-1 < (char)*(byte *)(lVar3 + 0xe1af)) {
    uVar4 = (ulong)*(byte *)(lVar3 + 0xe1af);
  }
  if (((uVar4 == 0) && (uVar4 = FUN_1003343f4(param_1 + 0xb0), (uVar4 & 1) == 0)) &&
     (iVar2 = (**(code **)(*param_1 + 0x108))(param_1), iVar2 != 0)) {
    uVar5 = FUN_10002f320();
    if ((char)*(byte *)((long)param_1 + 0xe9f) < '\0') {
      uVar4 = param_1[0x1d2];
    }
    else {
      uVar4 = (ulong)*(byte *)((long)param_1 + 0xe9f);
    }
    plVar1 = param_1 + 0x1e7;
    if (uVar4 != 0) {
      plVar1 = param_1 + 0x1d1;
    }
    FUN_1000315c4(uVar5,param_1 + 0xbb2,plVar1);
                    /* WARNING: Could not recover jumptable at 0x00010033451c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x118))(param_1);
    return;
  }
  return;
}




void FUN_100334520(long param_1)

{
  long lVar1;
  long lVar2;
  bool bVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined1 *local_68 [2];
  undefined1 auStack_58 [4];
  undefined4 local_54;
  
  FUN_100641464(&local_54,auStack_58);
  bVar3 = false;
  if ((*(float *)(param_1 + 0x4f00) == 0.0) && (bVar3 = false, !NAN(*(float *)(param_1 + 0x4f04))))
  {
    bVar3 = *(float *)(param_1 + 0x4f04) == -160.0;
  }
  if (!bVar3) {
    *(undefined8 *)(param_1 + 0x4f00) = 0xc320000000000000;
    FUN_1000200a0(param_1 + 0x4ec0);
  }
  FUN_10064e47c(local_54,local_54,param_1 + 0x4ec0);
  fVar4 = (float)FUN_100642888(param_1 + 0x50a0,1,0,1,1);
  if (*(float *)(param_1 + 0x50e0) != fVar4 * -0.5) {
    *(float *)(param_1 + 0x50e0) = fVar4 * -0.5;
    FUN_1000200a0(param_1 + 0x50a0);
  }
  lVar1 = param_1 + 0x4df8;
  fVar6 = 0.0;
  FUN_10064fc74(0,0,0x41a00000,local_68);
  FUN_100650064(lVar1,local_68);
  (**(code **)(*(long *)(param_1 + 0x4df8) + 0x90))(lVar1);
  lVar2 = param_1 + 0x33d8;
  fVar5 = (float)FUN_10064259c(lVar2);
  fVar7 = *(float *)(param_1 + 0x4e3c);
  FUN_10064e3cc(lVar1);
  fVar4 = fVar6;
  FUN_100651184(lVar2);
  fVar4 = fVar7 + fVar6 + 10.0 + fVar4 * 0.5;
  fVar6 = *(float *)(param_1 + 0x3418);
  if ((fVar6 != fVar5 * -0.5) || (fVar6 = *(float *)(param_1 + 0x341c), fVar6 != fVar4)) {
    *(float *)(param_1 + 0x3418) = fVar5 * -0.5;
    *(float *)(param_1 + 0x341c) = fVar4;
    FUN_1000200a0(lVar2);
  }
  lVar1 = param_1 + 0x580;
  FUN_1001af2f0(lVar1);
  fVar4 = *(float *)(param_1 + 0x4e3c);
  FUN_10064259c(param_1 + 0xf78);
  fVar4 = fVar4 + fVar6 * -0.5 + -160.0;
  if ((*(float *)(param_1 + 0x5c0) != -20.0) || (*(float *)(param_1 + 0x5c4) != fVar4)) {
    *(undefined4 *)(param_1 + 0x5c0) = 0xc1a00000;
    *(float *)(param_1 + 0x5c4) = fVar4;
    FUN_1000200a0(lVar1);
  }
  local_68[0] = &DAT_3f0000003f000000;
  (**(code **)(*(long *)(param_1 + 0x580) + 0x28))(lVar1,local_68);
  FUN_10065179c(0x43c80000,0,0x3f800000,param_1 + 0x150);
  FUN_10065179c(0x43c80000,0,0x3f800000,param_1 + 0x428);
  lVar1 = param_1 + 0x88;
  FUN_10064fc74(0,0,0,local_68);
  FUN_100650064(lVar1,local_68);
  (**(code **)(*(long *)(param_1 + 0x88) + 0x90))(lVar1);
  if ((*(float *)(param_1 + 200) != 0.0) || (*(float *)(param_1 + 0xcc) != -580.0)) {
    *(undefined8 *)(param_1 + 200) = 0xc411000000000000;
    FUN_1000200a0(lVar1);
  }
  local_68[0] = (undefined1 *)0x3f000000;
  (**(code **)(*(long *)(param_1 + 0x88) + 0x28))(lVar1,local_68);
  lVar1 = param_1 + 0x3840;
  fVar4 = -240.0;
  if (*(float *)(param_1 + 0x3884) != -240.0) {
    *(undefined4 *)(param_1 + 0x3884) = 0xc3700000;
    fVar4 = -240.0;
    FUN_1000200a0(lVar1);
  }
  fVar6 = *(float *)(param_1 + 0x3880);
  fVar5 = (float)FUN_10064259c(lVar1);
  fVar6 = fVar6 - fVar5 * 0.5;
  fVar5 = *(float *)(param_1 + 0x3884);
  FUN_10064259c(lVar1);
  fVar5 = fVar5 - fVar4 * 0.5;
  if ((*(float *)(param_1 + 0x55b8) != fVar6) || (*(float *)(param_1 + 0x55bc) != fVar5)) {
    *(float *)(param_1 + 0x55b8) = fVar6;
    *(float *)(param_1 + 0x55bc) = fVar5;
    FUN_1000200a0(param_1 + 0x5578);
  }
  return;
}




void FUN_100334848(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  undefined **ppuVar13;
  uint uVar14;
  bool bVar15;
  int iVar16;
  undefined8 uVar17;
  undefined4 uVar18;
  long lVar19;
  float fVar20;
  undefined8 local_90;
  long *plStack_88;
  long local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x9d8,1);
  plVar1 = param_1 + 0x11;
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  plVar2 = param_1 + 0x2a;
  FUN_100642bd8(plVar1,plVar2,1);
  plVar3 = param_1 + 0x50;
  FUN_100642bd8(plVar1,plVar3,1);
  plVar4 = param_1 + 0x67;
  FUN_100642bd8(plVar3,plVar4,1);
  plVar5 = param_1 + 0x85;
  FUN_100642bd8(plVar3,plVar5,1);
  plVar7 = param_1 + 0x6dd;
  FUN_100642bd8(plVar1,plVar7,1);
  plVar8 = param_1 + 0x6a1;
  (**(code **)(*param_1 + 0x78))(param_1,plVar8,1);
  plVar9 = param_1 + 0x6bf;
  (**(code **)(*param_1 + 0x78))(param_1,plVar9,1);
  plVar1 = param_1 + 0xb0;
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  plVar10 = param_1 + 0x9bf;
  (**(code **)(*param_1 + 0x78))(param_1,plVar10,1);
  plVar6 = param_1 + 0x1ef;
  FUN_100642bd8(plVar10,plVar6,1);
  plVar11 = param_1 + 0xa14;
  FUN_100642bd8(plVar10,plVar11,1);
  plVar10 = param_1 + 0x67b;
  (**(code **)(*param_1 + 0x78))(param_1,plVar10,1);
  plVar12 = param_1 + 0x708;
  (**(code **)(*param_1 + 0x78))(param_1,plVar12,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0xaaf,1);
  iVar16 = FUN_100126c88();
  FUN_1001816d4(0x41c00000,0x43d70000,0x43d70000,plVar12,0,&DAT_101d91650,&DAT_10115a168,
                &DAT_101dc1cb8,0);
  FUN_100181c68(0x44340000,plVar12);
  thunk_FUN_1001bd798(param_1 + 0x755,1);
  *(uint *)((long)param_1 + 0x3be4) = *(uint *)((long)param_1 + 0x3be4) & 0xfffffffb;
  uVar14 = *(uint *)((long)param_1 + 0x38c4);
  if ((uVar14 & 0x7f80) != 0x6600) {
    *(uint *)((long)param_1 + 0x38c4) = uVar14 & 0xffff8000 | uVar14 & 0x7f | 0x6600;
    FUN_1000200a0(plVar12);
  }
  FUN_1001b495c(0xbf800000,plVar12);
  FUN_1001b4c68(plVar12,&DAT_101d91198);
  *(undefined1 *)((long)param_1 + 0x4df2) = 0;
  local_68 = DAT_101d91884;
  local_90 = FUN_1003350a0;
  local_78 = 0;
  uStack_70 = 0;
  local_80 = 0;
  plStack_88 = param_1;
  FUN_10001554c(param_1 + 0x709,&local_90);
  FUN_1001b4964(plVar12,1);
  bVar15 = false;
  if ((*(float *)((long)param_1 + 0x55cc) == 0.0) &&
     (bVar15 = false, !NAN(*(float *)(param_1 + 0xab9)))) {
    bVar15 = *(float *)(param_1 + 0xab9) == 0.0;
  }
  if (!bVar15) {
    *(undefined4 *)((long)param_1 + 0x55cc) = 0;
    *(undefined4 *)(param_1 + 0xab9) = 0;
    FUN_1000200a0(param_1 + 0xaaf);
  }
  uVar17 = FUN_100345b94();
  uVar17 = FUN_10034c450(uVar17,"*KindredScreenAscensionProfileEffects*");
  FUN_1001aa350(param_1 + 0x9d8,uVar17);
  FUN_100651594(plVar2,PTR_s_build___Fonts_Brandon_Regular_60_10184e208,&DAT_10115a168);
  FUN_10065165c(plVar2,1);
  FUN_100651700(plVar2,3);
  uVar14 = *(uint *)((long)param_1 + 0x1d4);
  if ((uVar14 & 0x7f80) != 0x6600) {
    *(uint *)((long)param_1 + 0x1d4) = uVar14 & 0xffff8000 | uVar14 & 0x7f | 0x6600;
    FUN_1000200a0(plVar2);
  }
  FUN_100652cac(plVar4,PTR_s_build___MenuPartsCommon_tga_101854970,"black_background");
  uVar14 = *(uint *)((long)param_1 + 0x3bc);
  if ((uVar14 & 0x7f80) != 0x3300) {
    *(uint *)((long)param_1 + 0x3bc) = uVar14 & 0xffff8000 | uVar14 & 0x7f | 0x3300;
    FUN_1000200a0(plVar4);
  }
  FUN_10064e47c(0x43dc0000,0x42700000,plVar4);
  if ((*(float *)(param_1 + 0x71) != 0.5) || (*(float *)((long)param_1 + 0x38c) != 0.5)) {
    param_1[0x71] = (long)&DAT_3f0000003f000000;
    FUN_1000200a0(plVar4);
  }
  FUN_100651594(plVar5,PTR_s_build___Fonts_Brandon_Bold_48_fo_10184e238,&DAT_10115a168);
  FUN_10065165c(plVar5,1);
  uVar14 = *(uint *)((long)param_1 + 0x4ac);
  if ((uVar14 & 0x7f80) != 0x6600) {
    *(uint *)((long)param_1 + 0x4ac) = uVar14 & 0xffff8000 | uVar14 & 0x7f | 0x6600;
    FUN_1000200a0(plVar5);
  }
  fVar20 = *(float *)(param_1 + 0x8f);
  if ((fVar20 != 0.5) || (fVar20 = *(float *)((long)param_1 + 0x47c), fVar20 != 0.5)) {
    param_1[0x8f] = (long)&DAT_3f0000003f000000;
    FUN_1000200a0(plVar5);
  }
  uVar18 = FUN_100652e60(plVar4);
  local_90 = (code *)CONCAT44(fVar20,uVar18);
  FUN_10064e48c(plVar3,&local_90);
  if ((*(float *)(param_1 + 0x5a) != 0.5) || (*(float *)((long)param_1 + 0x2d4) != 0.5)) {
    param_1[0x5a] = (long)&DAT_3f0000003f000000;
    FUN_1000200a0(plVar3);
  }
  FUN_100651038(plVar7,PTR_s_build___Fonts_Brandon_Light_48_f_10184e1c0);
  uVar14 = *(uint *)((long)param_1 + 0x376c);
  if ((uVar14 & 0x7f80) != 0x6600) {
    *(uint *)((long)param_1 + 0x376c) = uVar14 & 0xffff8000 | uVar14 & 0x7f | 0x6600;
    FUN_1000200a0(plVar7);
  }
  FUN_100651700(plVar7,3);
  *(uint *)((long)param_1 + 0x376c) = *(uint *)((long)param_1 + 0x376c) & 0xfffffffb;
  FUN_100652cac(plVar8,PTR_s_build___Chests_tga_1018549e0,"chest_stacked");
  if ((*(float *)(param_1 + 0x6ab) != 0.5) || (*(float *)((long)param_1 + 0x355c) != 0.5)) {
    param_1[0x6ab] = (long)&DAT_3f0000003f000000;
    FUN_1000200a0(plVar8);
  }
  *(uint *)((long)param_1 + 0x358c) = *(uint *)((long)param_1 + 0x358c) & 0xfffffffb;
  if ((*(float *)(param_1 + 0x6aa) != 1.1) || (*(float *)((long)param_1 + 0x3554) != 1.1)) {
    param_1[0x6aa] = 0x3f8ccccd3f8ccccd;
    FUN_1000200a0(plVar8);
  }
  FUN_100652ca4(plVar9,PTR_s_build___Chests_tga_1018549e0);
  if ((*(float *)(param_1 + 0x6c9) != 0.5) || (*(float *)((long)param_1 + 0x364c) != 0.5)) {
    param_1[0x6c9] = (long)&DAT_3f0000003f000000;
    FUN_1000200a0(plVar9);
  }
  if ((*(float *)(param_1 + 0x6c8) != 2.2) || (*(float *)((long)param_1 + 0x3644) != 2.2)) {
    param_1[0x6c8] = 0x400ccccd400ccccd;
    FUN_1000200a0(plVar9);
  }
  *(uint *)((long)param_1 + 0x367c) = *(uint *)((long)param_1 + 0x367c) & 0xfffffffb;
  FUN_1002340fc(0x3ee66666,plVar1);
  local_68 = FUN_100644a94("UI::EVENT_MENU_OPEN_CHEST");
  local_90 = FUN_1003350ac;
  local_78 = 0;
  uStack_70 = 0;
  local_80 = 0;
  plStack_88 = param_1;
  FUN_10001554c(param_1 + 0xb1,&local_90);
  FUN_10001549c(&local_90,"IDLE_CLOSED");
  FUN_1001aeb7c(0xbf800000,plVar1,&local_90);
  if (local_80 < 0) {
    operator_delete(local_90);
  }
  FUN_1001af9fc(plVar1,0);
  ppuVar13 = &PTR_s_build___Fonts_Brandon_Bold_48_fo_10184e238;
  if (iVar16 == 0) {
    ppuVar13 = &PTR_s_build___Fonts_Brandon_Bold_36_fo_10184e228;
  }
  FUN_100651594(plVar10,*ppuVar13,&DAT_10115a168);
  uVar14 = *(uint *)((long)param_1 + 0x345c);
  if ((uVar14 & 0x7f80) != 0x6600) {
    *(uint *)((long)param_1 + 0x345c) = uVar14 & 0xffff8000 | uVar14 & 0x7f | 0x6600;
    FUN_1000200a0(plVar10);
  }
  FUN_100651700(plVar10,3);
  FUN_100651708(0x43fa0000,plVar10,1);
  if ((*(float *)(param_1 + 0x685) != 0.0) || (*(float *)((long)param_1 + 0x342c) != 0.5)) {
    param_1[0x685] = 0x3f00000000000000;
    FUN_1000200a0(plVar10);
  }
  FUN_1001816d4(0x41c00000,0x438c0000,0x445c0000,plVar6,0,&DAT_101d91650,&DAT_10115a168,
                &DAT_101dc1cb8,0);
  FUN_100181c68(0x42dc0000,plVar6);
  *(uint *)((long)param_1 + 0x131c) = *(uint *)((long)param_1 + 0x131c) & 0xfffffffb;
  *(uint *)((long)param_1 + 0x146c) = *(uint *)((long)param_1 + 0x146c) & 0xfffffffb;
  FUN_100651594(param_1 + 0x2d2,PTR_s_build___Fonts_Brandon_Bold_80_fo_10184e250,&DAT_10115a168);
  *(uint *)((long)param_1 + 0xffc) = *(uint *)((long)param_1 + 0xffc) & 0xffffffef;
  FUN_1001b4964(plVar6,1);
  FUN_1001c4354(plVar11,1);
  *(uint *)((long)param_1 + 0x5124) = *(uint *)((long)param_1 + 0x5124) & 0xfffffffb;
  if ((*(float *)(param_1 + 0xa1d) != 1.0) || (*(float *)((long)param_1 + 0x50ec) != 1.0)) {
    lVar19 = NEON_fmov(0x3f800000,4);
    param_1[0xa1d] = lVar19;
    FUN_1000200a0(plVar11);
  }
  return;
}




void FUN_1003350a0(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001003350a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x120))();
  return;
}




void FUN_1003350ac(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001003350b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x118))();
  return;
}




void FUN_1003350b8(long *param_1,long *param_2)

{
  char *pcVar1;
  long *plVar2;
  size_t sVar3;
  int iVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 ***pppuVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 **local_68;
  size_t local_60;
  undefined8 local_58;
  
  param_1[0xbba] = -1;
  plVar2 = param_1 + 0xb0;
  uVar5 = FUN_1003343f4(plVar2);
  if ((uVar5 & 1) == 0) {
    lVar8 = *param_2;
    *(int *)(param_1 + 0xb84) = (int)param_2[1];
    param_1[0xb83] = lVar8;
    std::string::operator=((string *)(param_1 + 0xb85),(string *)(param_2 + 2));
    std::string::operator=((string *)(param_1 + 0xb88),(string *)(param_2 + 5));
    FUN_100335e0c(param_1 + 0xb8b,param_2 + 8);
    std::string::operator=((string *)(param_1 + 0xb8d),(string *)(param_2 + 10));
    lVar9 = param_2[0x12];
    lVar8 = param_2[0x11];
    lVar11 = param_2[0x10];
    lVar10 = param_2[0xf];
    lVar12 = param_2[0xd];
    param_1[0xb91] = param_2[0xe];
    param_1[0xb90] = lVar12;
    param_1[0xb93] = lVar11;
    param_1[0xb92] = lVar10;
    param_1[0xb95] = lVar9;
    param_1[0xb94] = lVar8;
    std::string::operator=((string *)(param_1 + 0xb96),(string *)(param_2 + 0x13));
    lVar11 = param_2[0x19];
    lVar10 = param_2[0x18];
    lVar9 = param_2[0x1b];
    lVar8 = param_2[0x1a];
    lVar12 = param_2[0x16];
    param_1[0xb9a] = param_2[0x17];
    param_1[0xb99] = lVar12;
    param_1[0xb9c] = lVar11;
    param_1[0xb9b] = lVar10;
    param_1[0xb9e] = lVar9;
    param_1[0xb9d] = lVar8;
    std::string::operator=((string *)(param_1 + 0xb9f),(string *)(param_2 + 0x1c));
    param_1[0xba2] = param_2[0x1f];
    std::string::operator=((string *)(param_1 + 0xba3),(string *)(param_2 + 0x20));
    param_1[0xba6] = param_2[0x23];
    (**(code **)(*param_1 + 0x130))(param_1);
    FUN_1006513c0(param_1 + 0x2a,param_1 + 0xba7);
    FUN_100651460(param_1 + 0x85,param_1 + 0xbad);
    iVar4 = FUN_10033a6b0(param_1 + 0xb83);
    pcVar1 = "MENU_PROGRESSIVE_REWARD_DAILY_CHEST_SUBTITLE_NEXT";
    if (1 < iVar4) {
      pcVar1 = "MENU_PROGRESSIVE_REWARD_DAILY_CHEST_SUBTITLE_READY";
    }
    uVar6 = FUN_1004e0150(pcVar1,0);
    FUN_1006513c0(param_1 + 0x85,uVar6);
    local_68 = (undefined8 **)FUN_10033ab58(param_1 + 0xb83);
    FUN_1001cd374(param_1 + 0x6dd,&local_68);
    FUN_1001aed88(plVar2,(string *)(param_1 + 0xb85));
    FUN_10001549c(&local_68,"IDLE_CLOSED");
    FUN_1001aeb7c(0xbf800000,plVar2,&local_68);
    if (local_58._7_1_ < '\0') {
      operator_delete(local_68);
    }
    *(uint *)((long)param_1 + 0x376c) =
         *(uint *)((long)param_1 + 0x376c) & 0xfffffff8 |
         *(uint *)((long)param_1 + 0x376c) & 3 | (uint)(iVar4 < 2) << 2;
    *(uint *)((long)param_1 + 0x358c) =
         *(uint *)((long)param_1 + 0x358c) & 0xfffffff8 |
         *(uint *)((long)param_1 + 0x358c) & 3 | (uint)(iVar4 < 2) << 2;
    *(uint *)((long)param_1 + 0x367c) =
         *(uint *)((long)param_1 + 0x367c) & 0xfffffff8 |
         *(uint *)((long)param_1 + 0x367c) & 3 | (uint)(iVar4 == 2) << 2;
    *(uint *)((long)param_1 + 0x604) =
         *(uint *)((long)param_1 + 0x604) & 0xfffffff8 |
         *(uint *)((long)param_1 + 0x604) & 3 | (uint)(0 < iVar4) << 2;
    *(uint *)((long)param_1 + 0xffc) =
         *(uint *)((long)param_1 + 0xffc) & 0xfffffff8 |
         *(uint *)((long)param_1 + 0xffc) & 3 | (uint)(0 < iVar4) << 2;
    (**(code **)(*param_1 + 0x100))(param_1);
  }
  local_68 = (undefined8 ***)0x0;
  local_60 = 0;
  local_58 = 0;
  plVar2 = (long *)param_2[5];
  sVar3 = param_2[6];
  if (-1 < (char)*(byte *)((long)param_2 + 0x3f)) {
    plVar2 = param_2 + 5;
    sVar3 = (ulong)*(byte *)((long)param_2 + 0x3f);
  }
  if (0xffffffffffffffef < sVar3 + 2) {
                    /* WARNING: Subroutine does not return */
    FUN_100335ef4();
  }
  if (sVar3 + 2 < 0x17) {
    pppuVar7 = &local_68;
    local_58 = sVar3 << 0x38;
    if (sVar3 == 0) goto LAB_100335374;
  }
  else {
    uVar5 = sVar3 + 0x12 & 0xfffffffffffffff0;
    pppuVar7 = operator_new(uVar5);
    local_58 = uVar5 | 0x8000000000000000;
    local_68 = pppuVar7;
    local_60 = sVar3;
  }
  _memcpy(pppuVar7,plVar2,sVar3);
LAB_100335374:
  *(undefined1 *)((long)pppuVar7 + sVar3) = 0;
  std::string::append((char *)&local_68,0x1013e0ca6);
  pppuVar7 = (undefined8 ***)local_68;
  if (-1 < (long)local_58) {
    pppuVar7 = &local_68;
  }
  FUN_1001c3fc8(param_1 + 0xaaf,pppuVar7);
  if ((long)local_58 < 0) {
    operator_delete(local_68);
  }
  return;
}




void FUN_1003353d8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_10033ab58(param_1 + 0x5c18);
  if (*(long *)(param_1 + 0x5dd0) < lVar1 && 0 < *(long *)(param_1 + 0x5dd0)) {
    FUN_100339220();
  }
  else {
    FUN_1001cd27c(param_1 + 0x36e8);
  }
  uVar2 = FUN_10033ab58(param_1 + 0x5c18);
  *(undefined8 *)(param_1 + 0x5dd0) = uVar2;
  return;
}




void FUN_100335434(undefined1 param_1 [16],float param_2,long param_3)

{
  long *plVar1;
  bool bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined1 auStack_50 [4];
  undefined1 auStack_4c [4];
  undefined1 *local_48;
  
  FUN_100334520();
  FUN_100641464(auStack_4c,auStack_50);
  fVar5 = *(float *)(param_3 + 0x4e3c);
  FUN_10064259c(param_3 + 0xf78);
  fVar5 = fVar5 + param_2 * -0.5 + -120.0;
  if ((*(float *)(param_3 + 0x3548) != 0.0) || (*(float *)(param_3 + 0x354c) != fVar5)) {
    *(undefined4 *)(param_3 + 0x3548) = 0;
    *(float *)(param_3 + 0x354c) = fVar5;
    FUN_1000200a0(param_3 + 0x3508);
  }
  local_48 = &DAT_3f0000003f000000;
  (**(code **)(*(long *)(param_3 + 0x3508) + 0x28))(param_3 + 0x3508,&local_48);
  fVar5 = (float)*(undefined8 *)(param_3 + 0x3548) + -50.0;
  fVar3 = (float)((ulong)*(undefined8 *)(param_3 + 0x3548) >> 0x20) + -80.0;
  fVar4 = *(float *)(param_3 + 0x3638);
  bVar2 = false;
  if ((fVar4 == fVar5) && (bVar2 = false, !NAN(*(float *)(param_3 + 0x363c)) && !NAN(fVar3))) {
    bVar2 = *(float *)(param_3 + 0x363c) == fVar3;
  }
  if (!bVar2) {
    *(ulong *)(param_3 + 0x3638) = CONCAT44(fVar3,fVar5);
    FUN_1000200a0(param_3 + 0x35f8);
  }
  plVar1 = (long *)(param_3 + 0x580);
  fVar5 = *(float *)(param_3 + 0x4e3c);
  FUN_10064259c(param_3 + 0xf78);
  fVar5 = fVar5 + fVar4 * -0.5 + -120.0;
  if ((*(float *)(param_3 + 0x5c0) != 30.0) || (*(float *)(param_3 + 0x5c4) != fVar5)) {
    *(undefined4 *)(param_3 + 0x5c0) = 0x41f00000;
    *(float *)(param_3 + 0x5c4) = fVar5;
    FUN_1000200a0(plVar1);
  }
  local_48 = &DAT_3f0000003f000000;
  (**(code **)(*plVar1 + 0x28))(plVar1,&local_48);
  return;
}




void FUN_100335598(void)

{
  FUN_100339bd8(0);
  return;
}




void FUN_1003355a0(long param_1)

{
  undefined8 uVar1;
  
  std::string::operator=((string *)(param_1 + 0x5d90),(string *)&DAT_101d238b0);
  uVar1 = FUN_1004e0150("MENU_PROFILE_ASCENSION_DAILY_REWARD_TITLE",0);
  FUN_1000153b4(param_1 + 0x5d38,uVar1);
  *(undefined4 *)(param_1 + 0x5d68) = 0xffffffff;
  FUN_1006515d0(param_1 + 0x36e8,1);
  FUN_1002340fc(0x3ecccccd,param_1 + 0x580);
  FUN_100652cdc(param_1 + 0x35f8,"chest_battered_closed");
  uVar1 = FUN_1004e0150("MENU_MARKET_DAILY_CHEST_TIMER",0);
  FUN_1001cd23c(param_1 + 0x36e8,uVar1,1,0);
  uVar1 = FUN_1004e0150("GENERIC_DIALOG_OPEN",0);
  FUN_100181af8(param_1 + 0xf78,uVar1);
  return;
}




void FUN_10033567c(long param_1)

{
  FUN_10033a91c(param_1 + 0x5c18);
  FUN_100339c04();
  return;
}




void FUN_100335698(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_40 [32];
  
  uVar1 = FUN_100644a94("UI::EVENT_DISPLAY_PROGRESSIVE_REWARD_CHEST_INFO");
  FUN_100644aec(auStack_40,uVar1,param_1 + 0x5d90);
  FUN_100644c34(param_1,auStack_40,1);
  return;
}




void FUN_1003356ec(long param_1)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  void *pvVar4;
  undefined1 auStack_98 [16];
  undefined1 auStack_88 [16];
  undefined8 local_78 [2];
  undefined1 auStack_68 [16];
  undefined1 auStack_58 [16];
  long local_48 [3];
  
  local_48[2] = *(long *)PTR____stack_chk_guard_101444218;
  std::string::operator=((string *)(param_1 + 0x5d90),(string *)&DAT_101d238c8);
  std::string::operator=((string *)(param_1 + 0x5da8),(string *)&DAT_101d236d0);
  uVar2 = FUN_1004e0150("MENU_MARKET_MYSTERY_TITLE",0);
  FUN_1000153b4(param_1 + 0x5d38,uVar2);
  uVar2 = FUN_1004e0150("MENU_PROGRESSIVE_REWARD_RARE_CHEST_TITLE",0);
  FUN_1000153b4(param_1 + 0x5d58,uVar2);
  uVar2 = FUN_1004e0150("MENU_MARKET_MYSTERY_CHEST_BASIC_INFO_TITLE",0);
  FUN_1000153b4(param_1 + 0x5d48,uVar2);
  *(undefined4 *)(param_1 + 0x5d68) = 0xffe19400;
  uVar2 = FUN_1004e0150("MENU_MARKET_MYSTERY_CHEST_BASIC_INFO_DESC_1",0);
  thunk_FUN_1004e439c(auStack_68,uVar2);
  uVar2 = FUN_1004e0150("MENU_MARKET_MYSTERY_CHEST_BASIC_INFO_DESC_2",0);
  thunk_FUN_1004e439c(auStack_58,uVar2);
  uVar2 = FUN_1004e0150("MENU_MARKET_MYSTERY_CHEST_BASIC_INFO_DESC_3",0);
  thunk_FUN_1004e439c(local_48,uVar2);
  uVar2 = FUN_1004e0150("MENU_PROFILE_ASCENSION_SEASON_CHEST_PRIMARY_1",0);
  thunk_FUN_1004e439c(auStack_98,uVar2);
  uVar2 = FUN_1004e0150("MENU_PROFILE_ASCENSION_SEASON_CHEST_PRIMARY_2",0);
  thunk_FUN_1004e439c(auStack_88,uVar2);
  uVar2 = FUN_1004e0150("MENU_PROFILE_ASCENSION_SEASON_CHEST_PRIMARY_3",0);
  thunk_FUN_1004e439c(local_78,uVar2);
  lVar3 = FUN_1001340b0();
  uVar1 = *(uint *)(lVar3 + 8);
  if (1 < (int)uVar1) {
    uVar1 = 2;
  }
  uVar1 = uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU);
  FUN_1000153b4(param_1 + 0x5d70,auStack_68 + (ulong)uVar1 * 0x10);
  FUN_1000153b4(param_1 + 0x5d80,auStack_98 + (ulong)uVar1 * 0x10);
  lVar3 = 0;
  do {
    pvVar4 = *(void **)((long)local_78 + lVar3 + 8);
    if (pvVar4 != (void *)0x0) {
      operator_delete__(pvVar4);
      *(undefined8 *)((long)local_78 + lVar3) = 0;
      *(undefined8 *)((long)local_78 + lVar3 + 8) = 0;
    }
    lVar3 = lVar3 + -0x10;
  } while (lVar3 != -0x30);
  lVar3 = 0;
  do {
    pvVar4 = *(void **)((long)local_48 + lVar3 + 8);
    if (pvVar4 != (void *)0x0) {
      operator_delete__(pvVar4);
      *(undefined8 *)((long)local_48 + lVar3) = 0;
      *(undefined8 *)((long)local_48 + lVar3 + 8) = 0;
    }
    lVar3 = lVar3 + -0x10;
  } while (lVar3 != -0x30);
  if (*(long *)PTR____stack_chk_guard_101444218 == local_48[2]) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_100335920(long param_1)

{
  FUN_10033a91c(param_1 + 0x5c18);
  FUN_100339c30();
  return;
}




void FUN_10033593c(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_40 [32];
  
  uVar1 = FUN_100644a94("UI::EVENT_DISPLAY_PROGRESSIVE_REWARD_CHEST_INFO");
  FUN_100644aec(auStack_40,uVar1,param_1 + 0x5d90);
  FUN_100644c34(param_1,auStack_40,1);
  return;
}




void FUN_100335990(long param_1)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  void *pvVar4;
  undefined1 auStack_98 [16];
  undefined1 auStack_88 [16];
  undefined8 local_78 [2];
  undefined1 auStack_68 [16];
  undefined1 auStack_58 [16];
  long local_48 [3];
  
  local_48[2] = *(long *)PTR____stack_chk_guard_101444218;
  std::string::operator=((string *)(param_1 + 0x5d90),(string *)&DAT_101d238e0);
  std::string::operator=((string *)(param_1 + 0x5da8),(string *)&DAT_101d236e8);
  uVar2 = FUN_1004e0150("MENU_MARKET_MYSTERY_TITLE",0);
  FUN_1000153b4(param_1 + 0x5d38,uVar2);
  uVar2 = FUN_1004e0150("MENU_PROGRESSIVE_REWARD_EPIC_CHEST_TITLE",0);
  FUN_1000153b4(param_1 + 0x5d58,uVar2);
  uVar2 = FUN_1004e0150("MENU_MARKET_MYSTERY_CHEST_EPIC_INFO_TITLE",0);
  FUN_1000153b4(param_1 + 0x5d48,uVar2);
  *(undefined4 *)(param_1 + 0x5d68) = 0xffe550b2;
  uVar2 = FUN_1004e0150("MENU_MARKET_MYSTERY_CHEST_EPIC_INFO_DESC_1",0);
  thunk_FUN_1004e439c(auStack_68,uVar2);
  uVar2 = FUN_1004e0150("MENU_MARKET_MYSTERY_CHEST_EPIC_INFO_DESC_2",0);
  thunk_FUN_1004e439c(auStack_58,uVar2);
  uVar2 = FUN_1004e0150("MENU_MARKET_MYSTERY_CHEST_EPIC_INFO_DESC_3",0);
  thunk_FUN_1004e439c(local_48,uVar2);
  uVar2 = FUN_1004e0150("MENU_MARKET_EPIC_CHEST_PRIMARY_1",0);
  thunk_FUN_1004e439c(auStack_98,uVar2);
  uVar2 = FUN_1004e0150("MENU_MARKET_EPIC_CHEST_PRIMARY_2",0);
  thunk_FUN_1004e439c(auStack_88,uVar2);
  uVar2 = FUN_1004e0150("MENU_MARKET_EPIC_CHEST_PRIMARY_3",0);
  thunk_FUN_1004e439c(local_78,uVar2);
  lVar3 = FUN_1001340b0();
  uVar1 = *(uint *)(lVar3 + 8);
  if (1 < (int)uVar1) {
    uVar1 = 2;
  }
  uVar1 = uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU);
  FUN_1000153b4(param_1 + 0x5d70,auStack_68 + (ulong)uVar1 * 0x10);
  FUN_1000153b4(param_1 + 0x5d80,auStack_98 + (ulong)uVar1 * 0x10);
  FUN_1002340fc(0x3ef0a3d7,param_1 + 0x580);
  lVar3 = 0;
  do {
    pvVar4 = *(void **)((long)local_78 + lVar3 + 8);
    if (pvVar4 != (void *)0x0) {
      operator_delete__(pvVar4);
      *(undefined8 *)((long)local_78 + lVar3) = 0;
      *(undefined8 *)((long)local_78 + lVar3 + 8) = 0;
    }
    lVar3 = lVar3 + -0x10;
  } while (lVar3 != -0x30);
  lVar3 = 0;
  do {
    pvVar4 = *(void **)((long)local_48 + lVar3 + 8);
    if (pvVar4 != (void *)0x0) {
      operator_delete__(pvVar4);
      *(undefined8 *)((long)local_48 + lVar3) = 0;
      *(undefined8 *)((long)local_48 + lVar3 + 8) = 0;
    }
    lVar3 = lVar3 + -0x10;
  } while (lVar3 != -0x30);
  if (*(long *)PTR____stack_chk_guard_101444218 == local_48[2]) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void thunk_FUN_100333c98(void)

{
  FUN_100333c98();
  return;
}




void FUN_100335bd8(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_100333c98();
  operator_delete(pvVar1);
  return;
}




void FUN_100335bec(long param_1)

{
  FUN_10033a870(param_1 + 0x5c18);
  return;
}




bool FUN_100335bf8(long param_1)

{
  return *(int *)(param_1 + 24000) != 0;
}




void thunk_FUN_100334474(void)

{
  FUN_100334474();
  return;
}




void FUN_100335c10(void)

{
  return;
}




void FUN_100335c14(void)

{
  return;
}




void FUN_100335c18(void)

{
  return;
}




void thunk_FUN_100333c98(void)

{
  FUN_100333c98();
  return;
}




void FUN_100335c20(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_100333c98();
  operator_delete(pvVar1);
  return;
}




void FUN_100335c34(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100335c3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x128))();
  return;
}




void thunk_FUN_100333c98(void)

{
  FUN_100333c98();
  return;
}




void FUN_100335c44(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_100333c98();
  operator_delete(pvVar1);
  return;
}




void FUN_100335c58(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100335c60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x128))();
  return;
}




long FUN_100335c64(long param_1)

{
  long lVar1;
  
  lVar1 = FUN_100335cc8();
  FUN_1004e313c(lVar1 + 0x120);
  FUN_1004e313c(param_1 + 0x130);
  FUN_1004e313c(param_1 + 0x140);
  *(undefined4 *)(param_1 + 0x150) = 0xff000000;
  FUN_1004e313c(param_1 + 0x158);
  FUN_1004e313c(param_1 + 0x168);
  *(undefined8 *)(param_1 + 400) = 0;
  *(undefined8 *)(param_1 + 0x188) = 0;
  *(undefined8 *)(param_1 + 0x1a0) = 0;
  *(undefined8 *)(param_1 + 0x198) = 0;
  *(undefined8 *)(param_1 + 0x180) = 0;
  *(undefined8 *)(param_1 + 0x178) = 0;
  return param_1;
}




long FUN_100335cc8(long param_1)

{
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  FUN_1000fd6fc(param_1 + 0x50);
  FUN_1000fd6fc(param_1 + 0x98);
  FUN_1000164dc(param_1 + 0xe0);
  FUN_1000164dc(param_1 + 0x100);
  FUN_10033a614(param_1);
  return param_1;
}




long FUN_100335d1c(long param_1)

{
  if (*(char *)(param_1 + 0x1a7) < '\0') {
    operator_delete(*(void **)(param_1 + 400));
  }
  if (*(char *)(param_1 + 399) < '\0') {
    operator_delete(*(void **)(param_1 + 0x178));
  }
  if (*(void **)(param_1 + 0x170) != (void *)0x0) {
    operator_delete__(*(void **)(param_1 + 0x170));
    *(undefined8 *)(param_1 + 0x168) = 0;
    *(undefined8 *)(param_1 + 0x170) = 0;
  }
  if (*(void **)(param_1 + 0x160) != (void *)0x0) {
    operator_delete__(*(void **)(param_1 + 0x160));
    *(undefined8 *)(param_1 + 0x158) = 0;
    *(undefined8 *)(param_1 + 0x160) = 0;
  }
  if (*(void **)(param_1 + 0x148) != (void *)0x0) {
    operator_delete__(*(void **)(param_1 + 0x148));
    *(undefined8 *)(param_1 + 0x140) = 0;
    *(undefined8 *)(param_1 + 0x148) = 0;
  }
  if (*(void **)(param_1 + 0x138) != (void *)0x0) {
    operator_delete__(*(void **)(param_1 + 0x138));
    *(undefined8 *)(param_1 + 0x130) = 0;
    *(undefined8 *)(param_1 + 0x138) = 0;
  }
  if (*(void **)(param_1 + 0x128) != (void *)0x0) {
    operator_delete__(*(void **)(param_1 + 0x128));
    *(undefined8 *)(param_1 + 0x120) = 0;
    *(undefined8 *)(param_1 + 0x128) = 0;
  }
  thunk_FUN_10001653c(param_1 + 0x100);
  thunk_FUN_10001653c(param_1 + 0xe0);
  if (*(char *)(param_1 + 0xaf) < '\0') {
    operator_delete(*(void **)(param_1 + 0x98));
  }
  if (*(char *)(param_1 + 0x67) < '\0') {
    operator_delete(*(void **)(param_1 + 0x50));
  }
  if (*(void **)(param_1 + 0x48) != (void *)0x0) {
    operator_delete__(*(void **)(param_1 + 0x48));
    *(undefined8 *)(param_1 + 0x40) = 0;
    *(undefined8 *)(param_1 + 0x48) = 0;
  }
  if (*(char *)(param_1 + 0x3f) < '\0') {
    operator_delete(*(void **)(param_1 + 0x28));
  }
  if (*(char *)(param_1 + 0x27) < '\0') {
    operator_delete(*(void **)(param_1 + 0x10));
  }
  return param_1;
}




void FUN_100335e0c(uint *param_1,uint *param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  
  if (param_1 != param_2) {
    if (*(void **)(param_1 + 2) != (void *)0x0) {
      operator_delete__(*(void **)(param_1 + 2));
      param_1[0] = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
    }
    FUN_100335e78(param_1,*param_2);
    uVar1 = *param_2;
    if (uVar1 != 0) {
      lVar4 = (ulong)uVar1 << 3;
      puVar2 = *(undefined8 **)(param_2 + 2);
      puVar3 = *(undefined8 **)(param_1 + 2);
      do {
        *puVar3 = *puVar2;
        lVar4 = lVar4 + -8;
        puVar2 = puVar2 + 1;
        puVar3 = puVar3 + 1;
      } while (lVar4 != 0);
    }
    *param_1 = uVar1;
  }
  return;
}




void FUN_100335e78(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 << 3);
    puVar2 = *(undefined8 **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar3 = (ulong)*param_1 << 3;
      puVar4 = puVar1;
      puVar5 = puVar2;
      do {
        *puVar4 = *puVar5;
        lVar3 = lVar3 + -8;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      } while (lVar3 != 0);
    }
    param_1[1] = param_2;
    if (puVar2 != (undefined8 *)0x0) {
      operator_delete__(puVar2);
    }
    *(undefined8 **)(param_1 + 2) = puVar1;
  }
  return;
}




void FUN_100335ef4(void)

{
                    /* WARNING: Subroutine does not return */
  _abort();
}




long FUN_100335f00(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_1006421a8();
  *puVar1 = &PTR_thunk_FUN_1003367ac_1014942b8;
  puVar1[0x11] = &PTR_FUN_1014943c0;
  thunk_FUN_100652c08(puVar1 + 0x12);
  FUN_1006421a8(param_1 + 0x180);
  *(undefined ***)(param_1 + 0x180) = &PTR_thunk_FUN_10064221c_10144b7e8;
  thunk_FUN_1001bd4e0(param_1 + 0x208,0);
  FUN_10064e264(param_1 + 0x6b8);
  thunk_FUN_1001a66f4(param_1 + 0x770);
  FUN_1006421a8(param_1 + 0x870);
  *(undefined ***)(param_1 + 0x870) = &PTR_thunk_FUN_10064221c_10144b7e8;
  thunk_FUN_1006543ec(param_1 + 0x8f8);
  FUN_10053077c(param_1 + 0xa98,0);
  FUN_10064fd54(param_1 + 0xfd0,1);
  *(undefined ***)(param_1 + 0xfd0) = &PTR_thunk_FUN_10064e2bc_101451a40;
  thunk_FUN_100650e64(param_1 + 0x1098);
  thunk_FUN_100650e64(param_1 + 0x11c8);
  thunk_FUN_100652c08(param_1 + 0x12f8);
  thunk_FUN_100651ebc(param_1 + 0x13e8);
  FUN_10064fd54(param_1 + 0x1538,0);
  *(undefined ***)(param_1 + 0x1538) = &PTR_thunk_FUN_10064e2bc_10144caa0;
  thunk_FUN_100650e64(param_1 + 0x1600);
  thunk_FUN_100183160(param_1 + 0x1730,0);
  thunk_FUN_100180b5c(param_1 + 0x3b90);
  thunk_FUN_1001c4088(param_1 + 0x4250);
  thunk_FUN_1001a1f9c(param_1 + 0x4728);
  FUN_100335c64(param_1 + 0x5e00);
  FUN_100336048(param_1);
  return param_1;
}




long thunk_FUN_100335f00(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_1006421a8();
  *puVar1 = &PTR_thunk_FUN_1003367ac_1014942b8;
  puVar1[0x11] = &PTR_FUN_1014943c0;
  thunk_FUN_100652c08(puVar1 + 0x12);
  FUN_1006421a8(param_1 + 0x180);
  *(undefined ***)(param_1 + 0x180) = &PTR_thunk_FUN_10064221c_10144b7e8;
  thunk_FUN_1001bd4e0(param_1 + 0x208,0);
  FUN_10064e264(param_1 + 0x6b8);
  thunk_FUN_1001a66f4(param_1 + 0x770);
  FUN_1006421a8(param_1 + 0x870);
  *(undefined ***)(param_1 + 0x870) = &PTR_thunk_FUN_10064221c_10144b7e8;
  thunk_FUN_1006543ec(param_1 + 0x8f8);
  FUN_10053077c(param_1 + 0xa98,0);
  FUN_10064fd54(param_1 + 0xfd0,1);
  *(undefined ***)(param_1 + 0xfd0) = &PTR_thunk_FUN_10064e2bc_101451a40;
  thunk_FUN_100650e64(param_1 + 0x1098);
  thunk_FUN_100650e64(param_1 + 0x11c8);
  thunk_FUN_100652c08(param_1 + 0x12f8);
  thunk_FUN_100651ebc(param_1 + 0x13e8);
  FUN_10064fd54(param_1 + 0x1538,0);
  *(undefined ***)(param_1 + 0x1538) = &PTR_thunk_FUN_10064e2bc_10144caa0;
  thunk_FUN_100650e64(param_1 + 0x1600);
  thunk_FUN_100183160(param_1 + 0x1730,0);
  thunk_FUN_100180b5c(param_1 + 0x3b90);
  thunk_FUN_1001c4088(param_1 + 0x4250);
  thunk_FUN_1001a1f9c(param_1 + 0x4728);
  FUN_100335c64(param_1 + 0x5e00);
  FUN_100336048(param_1);
  return param_1;
}




void FUN_1003367ac(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_1003367ac_1014942b8;
  param_1[0x11] = &PTR_FUN_1014943c0;
  FUN_100335d1c(param_1 + 0xbc0);
  param_1[0x8e5] = &PTR_FUN_1014627f8;
  if ((void *)param_1[0xbbe] != (void *)0x0) {
    operator_delete__((void *)param_1[0xbbe]);
    param_1[0xbbe] = 0;
    param_1[0xbbd] = 0;
  }
  if (*(char *)((long)param_1 + 0x5de7) < '\0') {
    operator_delete((void *)param_1[0xbba]);
  }
  param_1[0xb9c] = &PTR_FUN_1014a7108;
  param_1[0xbb3] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xbb6);
  FUN_10064e2bc(param_1 + 0xb9c);
  FUN_10003bd40(param_1 + 0x8e5);
  param_1[0x84a] = &PTR_FUN_1014654b8;
  thunk_FUN_100651068(param_1 + 0x8be);
  thunk_FUN_100651068(param_1 + 0x898);
  FUN_10064e2bc(param_1 + 0x87f);
  param_1[0x861] = &PTR_FUN_1014a7108;
  param_1[0x878] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x87b);
  FUN_10064e2bc(param_1 + 0x861);
  FUN_10064e2bc(param_1 + 0x84a);
  FUN_1001811e4(param_1 + 0x772);
  param_1[0x2e6] = &PTR_FUN_10145f168;
  param_1[0x753] = &PTR_FUN_1014a7108;
  param_1[0x76a] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x76d);
  FUN_10064e2bc(param_1 + 0x753);
  param_1[0x735] = &PTR_FUN_1014a7108;
  param_1[0x74c] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x74f);
  FUN_10064e2bc(param_1 + 0x735);
  thunk_FUN_100651068(param_1 + 0x70f);
  param_1[0x6f1] = &PTR_FUN_1014a7108;
  param_1[0x708] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x70b);
  FUN_10064e2bc(param_1 + 0x6f1);
  FUN_10064221c(param_1 + 0x6e0);
  param_1[0x6c2] = &PTR_FUN_1014a7108;
  param_1[0x6d9] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x6dc);
  FUN_10064e2bc(param_1 + 0x6c2);
  param_1[0x2e6] = &PTR_FUN_10145efd0;
  FUN_10064e2bc(param_1 + 0x68c);
  FUN_10064221c(param_1 + 0x67b);
  FUN_10064e2bc(param_1 + 0x647);
  FUN_10064221c(param_1 + 0x636);
  thunk_FUN_100651068(param_1 + 0x610);
  thunk_FUN_100651068(param_1 + 0x5ea);
  param_1[0x5cc] = &PTR_FUN_1014a7108;
  param_1[0x5e3] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x5e6);
  FUN_10064e2bc(param_1 + 0x5cc);
  param_1[0x5ae] = &PTR_FUN_1014a7108;
  param_1[0x5c5] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x5c8);
  FUN_10064e2bc(param_1 + 0x5ae);
  FUN_10064221c(param_1 + 0x59d);
  FUN_10003bd40(param_1 + 0x2e6);
  thunk_FUN_100651068(param_1 + 0x2c0);
  FUN_10064e2bc(param_1 + 0x2a7);
  param_1[0x27d] = &PTR_FUN_1014a6db0;
  param_1[0x294] = &PTR_FUN_1014a6f10;
  thunk_FUN_100657580(param_1 + 0x297);
  FUN_10064e2bc(param_1 + 0x27d);
  param_1[0x25f] = &PTR_FUN_1014a7108;
  param_1[0x276] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x279);
  FUN_10064e2bc(param_1 + 0x25f);
  thunk_FUN_100651068(param_1 + 0x239);
  thunk_FUN_100651068(param_1 + 0x213);
  FUN_10064e2bc(param_1 + 0x1fa);
  thunk_FUN_100530784(param_1 + 0x153);
  FUN_10064e2bc(param_1 + 0x11f);
  FUN_10064221c(param_1 + 0x10e);
  param_1[0xee] = &PTR_FUN_101462f50;
  param_1[0xff] = &PTR_FUN_101463068;
  if (*(char *)((long)param_1 + 0x857) < '\0') {
    operator_delete((void *)param_1[0x108]);
  }
  FUN_1010b7434(param_1 + 0x102);
  FUN_10064221c(param_1 + 0xee);
  thunk_FUN_10064e2bc(param_1 + 0xd7);
  param_1[0x41] = &PTR_FUN_101464e50;
  param_1[0xac] = &PTR_FUN_1014a6db0;
  param_1[0xc3] = &PTR_FUN_1014a6f10;
  thunk_FUN_100657580(param_1 + 0xc6);
  FUN_10064e2bc(param_1 + 0xac);
  param_1[0x82] = &PTR_FUN_1014a6db0;
  param_1[0x99] = &PTR_FUN_1014a6f10;
  thunk_FUN_100657580(param_1 + 0x9c);
  FUN_10064e2bc(param_1 + 0x82);
  param_1[0x58] = &PTR_FUN_1014a6db0;
  param_1[0x6f] = &PTR_FUN_1014a6f10;
  thunk_FUN_100657580(param_1 + 0x72);
  FUN_10064e2bc(param_1 + 0x58);
  FUN_10064e2bc(param_1 + 0x41);
  FUN_10064221c(param_1 + 0x30);
  param_1[0x12] = &PTR_FUN_1014a7108;
  param_1[0x29] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x2c);
  FUN_10064e2bc(param_1 + 0x12);
  param_1[0x11] = &PTR_FUN_10146b508;
  FUN_100136bd8(param_1 + 0x11);
  FUN_10064221c(param_1);
  return;
}




void thunk_FUN_1003367ac(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_1003367ac_1014942b8;
  param_1[0x11] = &PTR_FUN_1014943c0;
  FUN_100335d1c(param_1 + 0xbc0);
  param_1[0x8e5] = &PTR_FUN_1014627f8;
  if ((void *)param_1[0xbbe] != (void *)0x0) {
    operator_delete__((void *)param_1[0xbbe]);
    param_1[0xbbe] = 0;
    param_1[0xbbd] = 0;
  }
  if (*(char *)((long)param_1 + 0x5de7) < '\0') {
    operator_delete((void *)param_1[0xbba]);
  }
  param_1[0xb9c] = &PTR_FUN_1014a7108;
  param_1[0xbb3] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xbb6);
  FUN_10064e2bc(param_1 + 0xb9c);
  FUN_10003bd40(param_1 + 0x8e5);
  param_1[0x84a] = &PTR_FUN_1014654b8;
  thunk_FUN_100651068(param_1 + 0x8be);
  thunk_FUN_100651068(param_1 + 0x898);
  FUN_10064e2bc(param_1 + 0x87f);
  param_1[0x861] = &PTR_FUN_1014a7108;
  param_1[0x878] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x87b);
  FUN_10064e2bc(param_1 + 0x861);
  FUN_10064e2bc(param_1 + 0x84a);
  FUN_1001811e4(param_1 + 0x772);
  param_1[0x2e6] = &PTR_FUN_10145f168;
  param_1[0x753] = &PTR_FUN_1014a7108;
  param_1[0x76a] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x76d);
  FUN_10064e2bc(param_1 + 0x753);
  param_1[0x735] = &PTR_FUN_1014a7108;
  param_1[0x74c] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x74f);
  FUN_10064e2bc(param_1 + 0x735);
  thunk_FUN_100651068(param_1 + 0x70f);
  param_1[0x6f1] = &PTR_FUN_1014a7108;
  param_1[0x708] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x70b);
  FUN_10064e2bc(param_1 + 0x6f1);
  FUN_10064221c(param_1 + 0x6e0);
  param_1[0x6c2] = &PTR_FUN_1014a7108;
  param_1[0x6d9] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x6dc);
  FUN_10064e2bc(param_1 + 0x6c2);
  param_1[0x2e6] = &PTR_FUN_10145efd0;
  FUN_10064e2bc(param_1 + 0x68c);
  FUN_10064221c(param_1 + 0x67b);
  FUN_10064e2bc(param_1 + 0x647);
  FUN_10064221c(param_1 + 0x636);
  thunk_FUN_100651068(param_1 + 0x610);
  thunk_FUN_100651068(param_1 + 0x5ea);
  param_1[0x5cc] = &PTR_FUN_1014a7108;
  param_1[0x5e3] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x5e6);
  FUN_10064e2bc(param_1 + 0x5cc);
  param_1[0x5ae] = &PTR_FUN_1014a7108;
  param_1[0x5c5] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x5c8);
  FUN_10064e2bc(param_1 + 0x5ae);
  FUN_10064221c(param_1 + 0x59d);
  FUN_10003bd40(param_1 + 0x2e6);
  thunk_FUN_100651068(param_1 + 0x2c0);
  FUN_10064e2bc(param_1 + 0x2a7);
  param_1[0x27d] = &PTR_FUN_1014a6db0;
  param_1[0x294] = &PTR_FUN_1014a6f10;
  thunk_FUN_100657580(param_1 + 0x297);
  FUN_10064e2bc(param_1 + 0x27d);
  param_1[0x25f] = &PTR_FUN_1014a7108;
  param_1[0x276] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x279);
  FUN_10064e2bc(param_1 + 0x25f);
  thunk_FUN_100651068(param_1 + 0x239);
  thunk_FUN_100651068(param_1 + 0x213);
  FUN_10064e2bc(param_1 + 0x1fa);
  thunk_FUN_100530784(param_1 + 0x153);
  FUN_10064e2bc(param_1 + 0x11f);
  FUN_10064221c(param_1 + 0x10e);
  param_1[0xee] = &PTR_FUN_101462f50;
  param_1[0xff] = &PTR_FUN_101463068;
  if (*(char *)((long)param_1 + 0x857) < '\0') {
    operator_delete((void *)param_1[0x108]);
  }
  FUN_1010b7434(param_1 + 0x102);
  FUN_10064221c(param_1 + 0xee);
  thunk_FUN_10064e2bc(param_1 + 0xd7);
  param_1[0x41] = &PTR_FUN_101464e50;
  param_1[0xac] = &PTR_FUN_1014a6db0;
  param_1[0xc3] = &PTR_FUN_1014a6f10;
  thunk_FUN_100657580(param_1 + 0xc6);
  FUN_10064e2bc(param_1 + 0xac);
  param_1[0x82] = &PTR_FUN_1014a6db0;
  param_1[0x99] = &PTR_FUN_1014a6f10;
  thunk_FUN_100657580(param_1 + 0x9c);
  FUN_10064e2bc(param_1 + 0x82);
  param_1[0x58] = &PTR_FUN_1014a6db0;
  param_1[0x6f] = &PTR_FUN_1014a6f10;
  thunk_FUN_100657580(param_1 + 0x72);
  FUN_10064e2bc(param_1 + 0x58);
  FUN_10064e2bc(param_1 + 0x41);
  FUN_10064221c(param_1 + 0x30);
  param_1[0x12] = &PTR_FUN_1014a7108;
  param_1[0x29] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x2c);
  FUN_10064e2bc(param_1 + 0x12);
  param_1[0x11] = &PTR_FUN_10146b508;
  FUN_100136bd8(param_1 + 0x11);
  FUN_10064221c(param_1);
  return;
}




void FUN_100336c04(long param_1)

{
  FUN_1003367ac(param_1 + -0x88);
  return;
}




void FUN_100336c0c(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1003367ac();
  operator_delete(pvVar1);
  return;
}




void FUN_100336c20(long param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1003367ac(param_1 + -0x88);
  operator_delete(pvVar1);
  return;
}




void FUN_100336c38(long param_1)

{
  char *pcVar1;
  undefined8 ***pppuVar2;
  long lVar3;
  char *pcVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined8 uVar7;
  void *local_c8 [2];
  char local_b1;
  void *local_b0;
  char local_99;
  void *local_98;
  char local_81;
  void *local_80;
  char local_69;
  undefined8 **local_68 [2];
  char local_51;
  void *local_50;
  char local_39;
  
  pcVar1 = (char *)(param_1 + 0x5e00);
  FUN_100336e48(pcVar1);
  uVar7 = FUN_100331578();
  FUN_1003311c0(local_c8,uVar7,param_1 + 0x5e10);
  if (*(char *)(param_1 + 0x5fa7) < '\0') {
    if (*(long *)(param_1 + 0x5f98) == 0) goto LAB_100336c9c;
  }
  else if (*(char *)(param_1 + 0x5fa7) == '\0') goto LAB_100336c9c;
  FUN_100136b6c(param_1 + 0x5f90,param_1 + 0x88,param_1);
LAB_100336c9c:
  pppuVar2 = (undefined8 ***)local_68[0];
  if (-1 < local_51) {
    pppuVar2 = local_68;
  }
  FUN_100652cdc(param_1 + 0x12f8,pppuVar2);
  if (*pcVar1 == '\0') {
    iVar6 = FUN_10033a91c(pcVar1);
    lVar3 = param_1 + 0x5e98;
    if (iVar6 == 0) {
      lVar3 = param_1 + 0x5e50;
    }
    pcVar4 = "MARKET_LABEL_USE_KEY";
    if (iVar6 == 0) {
      pcVar4 = "MARKET_LABEL_BUY_KEY";
    }
    FUN_1000eb30c(lVar3,param_1 + 0x1730);
    FUN_1000eb528(lVar3,param_1 + 0x4250);
    uVar7 = FUN_1004e0150(pcVar4,0);
    FUN_1006513c0(param_1 + 0x1600,uVar7);
    FUN_1006513c0(param_1 + 0x1098,param_1 + 0x5f30);
    FUN_100651460(param_1 + 0x1098,param_1 + 0x5f50);
    FUN_1006513c0(param_1 + 0x11c8,param_1 + 0x5f58);
  }
  iVar6 = FUN_10033a870(pcVar1);
  puVar5 = &DAT_101e46e20;
  if (iVar6 == 0) {
    puVar5 = &DAT_101e46e24;
  }
  FUN_100181bb8(0x3f800000,param_1 + 0x1730,puVar5);
  FUN_100181bd0(0x3f800000,param_1 + 0x1730,puVar5);
  FUN_100336f60(param_1);
  if (local_39 < '\0') {
    operator_delete(local_50);
  }
  if (local_51 < '\0') {
    operator_delete(local_68[0]);
  }
  if (local_69 < '\0') {
    operator_delete(local_80);
  }
  if (local_81 < '\0') {
    operator_delete(local_98);
  }
  if (local_99 < '\0') {
    operator_delete(local_b0);
  }
  if (local_b1 < '\0') {
    operator_delete(local_c8[0]);
  }
  return;
}




undefined8 * FUN_100336e48(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = *param_2;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *param_1 = uVar1;
  std::string::operator=((string *)(param_1 + 2),(string *)(param_2 + 2));
  std::string::operator=((string *)(param_1 + 5),(string *)(param_2 + 5));
  FUN_100335e0c(param_1 + 8,param_2 + 8);
  std::string::operator=((string *)(param_1 + 10),(string *)(param_2 + 10));
  uVar2 = param_2[0x12];
  uVar1 = param_2[0x11];
  uVar4 = param_2[0x10];
  uVar3 = param_2[0xf];
  uVar5 = param_2[0xd];
  param_1[0xe] = param_2[0xe];
  param_1[0xd] = uVar5;
  param_1[0x10] = uVar4;
  param_1[0xf] = uVar3;
  param_1[0x12] = uVar2;
  param_1[0x11] = uVar1;
  std::string::operator=((string *)(param_1 + 0x13),(string *)(param_2 + 0x13));
  uVar4 = param_2[0x19];
  uVar3 = param_2[0x18];
  uVar2 = param_2[0x1b];
  uVar1 = param_2[0x1a];
  uVar5 = param_2[0x16];
  param_1[0x17] = param_2[0x17];
  param_1[0x16] = uVar5;
  param_1[0x19] = uVar4;
  param_1[0x18] = uVar3;
  param_1[0x1b] = uVar2;
  param_1[0x1a] = uVar1;
  std::string::operator=((string *)(param_1 + 0x1c),(string *)(param_2 + 0x1c));
  param_1[0x1f] = param_2[0x1f];
  std::string::operator=((string *)(param_1 + 0x20),(string *)(param_2 + 0x20));
  param_1[0x23] = param_2[0x23];
  FUN_1000153b4(param_1 + 0x24,param_2 + 0x24);
  FUN_1000153b4(param_1 + 0x26,param_2 + 0x26);
  FUN_1000153b4(param_1 + 0x28,param_2 + 0x28);
  *(undefined4 *)(param_1 + 0x2a) = *(undefined4 *)(param_2 + 0x2a);
  FUN_1000153b4(param_1 + 0x2b,param_2 + 0x2b);
  FUN_1000153b4(param_1 + 0x2d,param_2 + 0x2d);
  std::string::operator=((string *)(param_1 + 0x2f),(string *)(param_2 + 0x2f));
  std::string::operator=((string *)(param_1 + 0x32),(string *)(param_2 + 0x32));
  return param_1;
}




void FUN_100336f60(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  bool bVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  float fVar10;
  ulong uVar11;
  ulong uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined8 local_98 [2];
  float local_88;
  float local_84;
  
  FUN_100641464(&local_88,(ulong)&local_88 | 4);
  iVar5 = FUN_100126c88();
  FUN_10064e47c(local_88,local_84,param_1 + 0x90);
  lVar3 = param_1 + 0x12f8;
  fVar7 = 3.0;
  if (iVar5 == 0) {
    fVar7 = 2.0;
  }
  fVar13 = *(float *)(param_1 + 0x1340);
  bVar4 = false;
  if ((fVar13 == fVar7) && (bVar4 = false, !NAN(*(float *)(param_1 + 0x1344)) && !NAN(fVar7))) {
    bVar4 = *(float *)(param_1 + 0x1344) == fVar7;
  }
  if (!bVar4) {
    *(float *)(param_1 + 0x1340) = fVar7;
    *(float *)(param_1 + 0x1344) = fVar7;
    FUN_1000200a0(lVar3);
    fVar13 = *(float *)(param_1 + 0x1340);
  }
  fVar7 = 500.0;
  if (iVar5 == 0) {
    fVar7 = 800.0;
  }
  fVar10 = (float)NEON_fminnm(local_84 - fVar7,0x44548000);
  fVar7 = local_84 - fVar7;
  if (iVar5 == 0) {
    fVar7 = fVar10;
  }
  fVar15 = fVar7 + fVar7;
  fVar10 = (float)FUN_10065317c(lVar3);
  FUN_10064e47c(local_88,fVar7 + -160.0,param_1 + 0x8f8);
  FUN_100651708((fVar15 + fVar13 * 190.0) - fVar10,param_1 + 0x11c8,1);
  lVar1 = param_1 + 0xfd0;
  FUN_10064fc74(0,0,0x41200000,local_98);
  FUN_100650064(lVar1,local_98);
  (**(code **)(*(long *)(param_1 + 0xfd0) + 0x90))(lVar1);
  fVar10 = (float)FUN_10065317c(lVar3);
  fVar10 = fVar10 + fVar13 * -120.0;
  if (*(float *)(param_1 + 0x1010) != fVar10) {
    *(float *)(param_1 + 0x1010) = fVar10;
    FUN_1000200a0(lVar1);
  }
  lVar2 = param_1 + 0xa98;
  if (*(float *)(param_1 + 0xadc) != 0.0) {
    *(undefined4 *)(param_1 + 0xadc) = 0;
    FUN_1000200a0(lVar2);
  }
  uVar8 = FUN_10064e3cc(lVar1);
  FUN_10064e3cc(lVar1);
  FUN_10053093c(uVar8,lVar2);
  fVar10 = (float)FUN_100530a94(lVar2);
  fVar6 = 0.0;
  FUN_100530b0c(fVar10 * -0.5 + 100.0,lVar2);
  FUN_100530a94(lVar2);
  fVar10 = fVar6;
  FUN_10064e3cc(param_1 + 0x8f8);
  bVar4 = fVar10 < fVar6;
  FUN_100530c04(lVar2,bVar4);
  FUN_100530adc(lVar2,0,bVar4);
  lVar1 = param_1 + 0x1730;
  fVar6 = (float)FUN_10064259c(lVar1);
  if ((*(float *)(param_1 + 0x3bd0) != fVar6 * -0.5) ||
     (*(float *)(param_1 + 0x3bd4) != fVar10 * -0.5)) {
    *(float *)(param_1 + 0x3bd0) = fVar6 * -0.5;
    *(float *)(param_1 + 0x3bd4) = fVar10 * -0.5;
    FUN_1000200a0(param_1 + 0x3b90);
  }
  fVar10 = fVar7 * 0.5 + 60.0;
  if ((*(float *)(param_1 + 0x1338) != fVar13 * -50.0) || (*(float *)(param_1 + 0x133c) != fVar10))
  {
    *(float *)(param_1 + 0x1338) = fVar13 * -50.0;
    *(float *)(param_1 + 0x133c) = fVar10;
    FUN_1000200a0(lVar3);
  }
  local_98[0] = 0x3f00000000000000;
  (**(code **)(*(long *)(param_1 + 0x12f8) + 0x28))(lVar3,local_98);
  lVar3 = param_1 + 0x208;
  fVar14 = fVar7 + 120.0;
  fVar10 = fVar14;
  FUN_10064e47c(fVar15 + 120.0,lVar3);
  fVar6 = (float)FUN_10064e3cc(lVar3);
  fVar16 = *(float *)(param_1 + 0x248);
  if ((fVar16 != fVar6 * 0.5) || (*(float *)(param_1 + 0x24c) != fVar10 * 0.5)) {
    *(float *)(param_1 + 0x248) = fVar6 * 0.5;
    *(float *)(param_1 + 0x24c) = fVar10 * 0.5;
    FUN_1000200a0(lVar3);
    fVar16 = *(float *)(param_1 + 0x248);
  }
  fVar10 = (float)FUN_10064e3cc(lVar3);
  fVar16 = fVar16 - fVar13 * 70.0;
  fVar6 = fVar16 + fVar10 * -0.5;
  fVar10 = *(float *)(param_1 + 0x24c);
  FUN_10064e3cc(lVar3);
  fVar10 = fVar10 + fVar16 * -0.5 + 60.0;
  if ((*(float *)(param_1 + 0x8b0) != fVar6) || (*(float *)(param_1 + 0x8b4) != fVar10)) {
    *(float *)(param_1 + 0x8b0) = fVar6;
    *(float *)(param_1 + 0x8b4) = fVar10;
    FUN_1000200a0(param_1 + 0x870);
  }
  lVar2 = param_1 + 0x1538;
  FUN_10064fc74(0,0x3f800000,0x41f00000,local_98);
  FUN_100650064(lVar2,local_98);
  (**(code **)(*(long *)(param_1 + 0x1538) + 0x90))(lVar2);
  FUN_10064ff6c(0x3f000000,lVar2,0);
  fVar13 = fVar13 * 70.0 + 60.0;
  fVar10 = fVar13 + fVar15;
  FUN_10064259c(lVar1);
  fVar13 = fVar7 + 60.0 + fVar13 * -0.6;
  if ((*(float *)(param_1 + 0x1578) != fVar10) || (*(float *)(param_1 + 0x157c) != fVar13)) {
    *(float *)(param_1 + 0x1578) = fVar10;
    *(float *)(param_1 + 0x157c) = fVar13;
    FUN_1000200a0(lVar2);
  }
  FUN_10064e72c(0xc0c00000,param_1 + 0x1600,2,lVar1,0);
  FUN_10064e72c(0,param_1 + 0x1600,4,lVar1,4);
  lVar1 = param_1 + 0x6b8;
  FUN_10064e47c(fVar15 + 120.0,lVar1);
  fVar10 = *(float *)(param_1 + 0x248);
  fVar13 = (float)FUN_10064e3cc(lVar3);
  fVar10 = fVar10 - fVar13 * 0.5;
  fVar13 = *(float *)(param_1 + 0x24c);
  FUN_10064e3cc(lVar3);
  fVar13 = fVar13 - fVar14 * 0.5;
  if ((*(float *)(param_1 + 0x6f8) != fVar10) || (*(float *)(param_1 + 0x6fc) != fVar13)) {
    *(float *)(param_1 + 0x6f8) = fVar10;
    *(float *)(param_1 + 0x6fc) = fVar13;
    FUN_1000200a0(lVar1);
  }
  FUN_1001a6880(fVar7 + 100.0,fVar7 + 100.0,param_1 + 0x770);
  fVar15 = *(float *)(param_1 + 0x248);
  fVar13 = (float)FUN_10064e3cc(lVar3);
  fVar10 = 6.0;
  fVar15 = (fVar15 - fVar13 * 0.5) + 6.0;
  fVar13 = *(float *)(param_1 + 0x24c);
  FUN_10064e3cc(lVar3);
  fVar13 = (fVar13 - fVar10 * 0.5) + 10.0;
  if ((*(float *)(param_1 + 0x7b0) != fVar15) || (*(float *)(param_1 + 0x7b4) != fVar13)) {
    *(float *)(param_1 + 0x7b0) = fVar15;
    *(float *)(param_1 + 0x7b4) = fVar13;
    FUN_1000200a0(param_1 + 0x770);
  }
  lVar2 = param_1 + 0x4728;
  fVar13 = (float)FUN_10064259c(lVar2);
  fVar10 = 60.0;
  fVar15 = fVar13 * 0.75 + 60.0;
  FUN_10064259c(lVar2);
  fVar7 = (fVar7 + 60.0) - fVar10 * 0.75;
  fVar13 = *(float *)(param_1 + 0x4768);
  if ((fVar13 != fVar15) || (fVar13 = *(float *)(param_1 + 0x476c), fVar13 != fVar7)) {
    *(float *)(param_1 + 0x4768) = fVar15;
    *(float *)(param_1 + 0x476c) = fVar7;
    FUN_1000200a0(lVar2);
  }
  fVar7 = (float)FUN_10064e3cc(lVar3);
  fVar7 = (local_88 - fVar7) * 0.5;
  fVar13 = (local_84 - fVar13) * 0.5;
  uVar11 = (ulong)(uint)fVar13;
  if ((*(float *)(param_1 + 0x1c0) != fVar7) || (*(float *)(param_1 + 0x1c4) != fVar13)) {
    *(float *)(param_1 + 0x1c0) = fVar7;
    *(float *)(param_1 + 0x1c4) = fVar13;
    FUN_1000200a0(param_1 + 0x180);
  }
  param_1 = param_1 + 0x13e8;
  uVar8 = FUN_100652390(param_1,0);
  uVar12 = uVar11;
  uVar9 = FUN_100652390(param_1,8);
  fVar7 = (float)FUN_10064e3cc(lVar1);
  fVar13 = -20.0;
  FUN_10064e3cc(lVar1);
  FUN_1006525c4(uVar8,fVar7 + -20.0,uVar9,uVar11,fVar13 + -30.0,uVar12,param_1);
  FUN_10064e5ec(0,0,param_1,8,lVar1,8);
  return;
}




void FUN_1003375d0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1003375dc();
    return;
  }
  FUN_10033777c();
  return;
}




void FUN_1003375dc(undefined1 param_1 [16],undefined4 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  ushort uVar3;
  ushort *puVar4;
  ushort *puVar5;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  
  lVar1 = DAT_101dbd2f8;
  uVar3 = *(ushort *)(DAT_101dbd2f8 + 0x20010);
  if ((ulong)uVar3 == 0xffff) {
    puVar4 = (ushort *)0x0;
  }
  else {
    puVar4 = (ushort *)(DAT_101dbd2f8 + (ulong)uVar3 * 0x40 + 0x10);
    if (uVar3 == *(ushort *)(DAT_101dbd2f8 + 0x20012)) {
      uVar3 = 0xffff;
    }
    else {
      uVar3 = *puVar4;
    }
    *(ushort *)(DAT_101dbd2f8 + 0x20010) = uVar3;
    *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
    FUN_10063ee9c(puVar4);
    *(undefined ***)puVar4 = &PTR_thunk_FUN_10063eeb4_1014a52f0;
    *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
  }
  uVar2 = FUN_100047714();
  FUN_10063fce0(0x3f800000);
  FUN_10063f0e8(0x3e4ccccd,uVar2);
  lVar1 = DAT_101dbd2f8;
  uVar3 = *(ushort *)(DAT_101dbd2f8 + 0x20010);
  if ((ulong)uVar3 == 0xffff) {
    puVar5 = (ushort *)0x0;
  }
  else {
    puVar5 = (ushort *)(DAT_101dbd2f8 + (ulong)uVar3 * 0x40 + 0x10);
    if (uVar3 == *(ushort *)(DAT_101dbd2f8 + 0x20012)) {
      uVar3 = 0xffff;
    }
    else {
      uVar3 = *puVar5;
    }
    *(ushort *)(DAT_101dbd2f8 + 0x20010) = uVar3;
    *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
    FUN_10063f1bc(puVar5);
    *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
  }
  FUN_10063f2a4(puVar5,uVar2);
  FUN_100642324(param_3);
  FUN_100642b7c(param_3,puVar4);
  local_50 = FUN_10064e3cc(param_3 + 0x1730);
  local_48 = 0xffffffff;
  uStack_4c = param_2;
  FUN_100180cc8(param_3 + 0x3b90,1,&local_50);
  return;
}




void FUN_10033777c(long param_1)

{
  ushort *puVar1;
  long lVar2;
  undefined8 uVar3;
  ushort uVar4;
  undefined8 local_50;
  undefined4 local_48;
  
  uVar3 = FUN_100047714();
  FUN_10063fce0(0);
  FUN_10063f0e8(0x3ecccccd,uVar3);
  FUN_10063f130(uVar3,FUN_10001f4ac);
  lVar2 = DAT_101dbd2f8;
  uVar4 = *(ushort *)(DAT_101dbd2f8 + 0x20010);
  if ((ulong)uVar4 != 0xffff) {
    puVar1 = (ushort *)(DAT_101dbd2f8 + (ulong)uVar4 * 0x40 + 0x10);
    if (uVar4 == *(ushort *)(DAT_101dbd2f8 + 0x20012)) {
      uVar4 = 0xffff;
    }
    else {
      uVar4 = *puVar1;
    }
    *(ushort *)(DAT_101dbd2f8 + 0x20010) = uVar4;
    *(int *)(lVar2 + 0x20014) = *(int *)(lVar2 + 0x20014) + 1;
    FUN_10063ee9c(puVar1);
    *(undefined ***)puVar1 = &PTR_thunk_FUN_10063eeb4_1014a5338;
    *(int *)(lVar2 + 0x20020) = *(int *)(lVar2 + 0x20020) + 1;
  }
  FUN_100642324(param_1);
  FUN_100642b7c(param_1,uVar3);
  uVar3 = FUN_100047714();
  FUN_10063fce0(0);
  FUN_10063f0e8(0x3ecccccd,uVar3);
  FUN_10063f130(uVar3,FUN_10001f4ac);
  FUN_100642324(param_1 + 0x770);
  FUN_100642b14(param_1 + 0x770,uVar3);
  local_50 = 0;
  local_48 = 0xff000000;
  FUN_100180cc8(param_1 + 0x3b90,0,&local_50);
  if ((~*(uint *)(param_1 + 0x1684) & 0x7f80) != 0) {
    *(uint *)(param_1 + 0x1684) = *(uint *)(param_1 + 0x1684) | 0x7f80;
    FUN_1000200a0(param_1 + 0x1600);
  }
  return;
}




void FUN_10033790c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1 + 0x770;
  FUN_1001a679c(lVar1);
  uVar2 = FUN_100047714();
  FUN_10063fce0(0x3f800000);
  FUN_10063f0e8(0x3ecccccd,uVar2);
  FUN_10063f130(uVar2,FUN_10001f4c4);
  FUN_100642324(lVar1);
  FUN_100642b14(lVar1,uVar2);
  FUN_100336f60(param_1);
  return;
}




void FUN_100337988(long param_1)

{
  FUN_10033790c(param_1 + -0x88);
  return;
}




void thunk_FUN_10033777c(long param_1)

{
  ushort *puVar1;
  long lVar2;
  undefined8 uVar3;
  ushort uVar4;
  undefined8 uStack_50;
  undefined4 uStack_48;
  
  uVar3 = FUN_100047714();
  FUN_10063fce0(0);
  FUN_10063f0e8(0x3ecccccd,uVar3);
  FUN_10063f130(uVar3,FUN_10001f4ac);
  lVar2 = DAT_101dbd2f8;
  uVar4 = *(ushort *)(DAT_101dbd2f8 + 0x20010);
  if ((ulong)uVar4 != 0xffff) {
    puVar1 = (ushort *)(DAT_101dbd2f8 + (ulong)uVar4 * 0x40 + 0x10);
    if (uVar4 == *(ushort *)(DAT_101dbd2f8 + 0x20012)) {
      uVar4 = 0xffff;
    }
    else {
      uVar4 = *puVar1;
    }
    *(ushort *)(DAT_101dbd2f8 + 0x20010) = uVar4;
    *(int *)(lVar2 + 0x20014) = *(int *)(lVar2 + 0x20014) + 1;
    FUN_10063ee9c(puVar1);
    *(undefined ***)puVar1 = &PTR_thunk_FUN_10063eeb4_1014a5338;
    *(int *)(lVar2 + 0x20020) = *(int *)(lVar2 + 0x20020) + 1;
  }
  FUN_100642324(param_1);
  FUN_100642b7c(param_1,uVar3);
  uVar3 = FUN_100047714();
  FUN_10063fce0(0);
  FUN_10063f0e8(0x3ecccccd,uVar3);
  FUN_10063f130(uVar3,FUN_10001f4ac);
  FUN_100642324(param_1 + 0x770);
  FUN_100642b14(param_1 + 0x770,uVar3);
  uStack_50 = 0;
  uStack_48 = 0xff000000;
  FUN_100180cc8(param_1 + 0x3b90,0,&uStack_50);
  if ((~*(uint *)(param_1 + 0x1684) & 0x7f80) != 0) {
    *(uint *)(param_1 + 0x1684) = *(uint *)(param_1 + 0x1684) | 0x7f80;
    FUN_1000200a0(param_1 + 0x1600);
  }
  return;
}




void thunk_FUN_1003379a0(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_40 [32];
  
  uVar1 = FUN_100644a94("UI::EVENT_UNLOCK_PROGRESSIVE_REWARD_CHEST");
  FUN_100644aec(auStack_40,uVar1,param_1 + 0x5f78);
  FUN_100644c34(param_1,auStack_40,1);
  return;
}




void thunk_FUN_1003379f4(long param_1)

{
  undefined8 uVar1;
  
  FUN_100642324(param_1 + 0x1600);
  uVar1 = FUN_100047714();
  FUN_10063f0e8(0x3e19999a);
  FUN_10063fce0(0,uVar1);
  FUN_100642b14(param_1 + 0x1600,uVar1);
  return;
}




void thunk_FUN_100337a44(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  ushort uVar3;
  ushort *puVar4;
  
  param_1 = param_1 + 0x1600;
  FUN_100642324(param_1);
  lVar1 = DAT_101dbd2f8;
  uVar3 = *(ushort *)(DAT_101dbd2f8 + 0x20010);
  if ((ulong)uVar3 == 0xffff) {
    puVar4 = (ushort *)0x0;
  }
  else {
    puVar4 = (ushort *)(DAT_101dbd2f8 + (ulong)uVar3 * 0x40 + 0x10);
    if (uVar3 == *(ushort *)(DAT_101dbd2f8 + 0x20012)) {
      uVar3 = 0xffff;
    }
    else {
      uVar3 = *puVar4;
    }
    *(ushort *)(DAT_101dbd2f8 + 0x20010) = uVar3;
    *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
    FUN_10063f0f0(puVar4);
    *(undefined ***)puVar4 = &PTR_thunk_FUN_10063eeb4_10144b270;
    *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
  }
  FUN_10063f0e8(0x3f000000,puVar4);
  FUN_100642b14(param_1,puVar4);
  uVar2 = FUN_100047714();
  FUN_10063f0e8(0x3fa00000);
  FUN_10063fce0(0x3f800000,uVar2);
  FUN_100642b14(param_1,uVar2);
  return;
}




void FUN_1003379a0(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_40 [32];
  
  uVar1 = FUN_100644a94("UI::EVENT_UNLOCK_PROGRESSIVE_REWARD_CHEST");
  FUN_100644aec(auStack_40,uVar1,param_1 + 0x5f78);
  FUN_100644c34(param_1,auStack_40,1);
  return;
}




void FUN_1003379f4(long param_1)

{
  undefined8 uVar1;
  
  FUN_100642324(param_1 + 0x1600);
  uVar1 = FUN_100047714();
  FUN_10063f0e8(0x3e19999a);
  FUN_10063fce0(0,uVar1);
  FUN_100642b14(param_1 + 0x1600,uVar1);
  return;
}




void FUN_100337a44(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  ushort uVar3;
  ushort *puVar4;
  
  param_1 = param_1 + 0x1600;
  FUN_100642324(param_1);
  lVar1 = DAT_101dbd2f8;
  uVar3 = *(ushort *)(DAT_101dbd2f8 + 0x20010);
  if ((ulong)uVar3 == 0xffff) {
    puVar4 = (ushort *)0x0;
  }
  else {
    puVar4 = (ushort *)(DAT_101dbd2f8 + (ulong)uVar3 * 0x40 + 0x10);
    if (uVar3 == *(ushort *)(DAT_101dbd2f8 + 0x20012)) {
      uVar3 = 0xffff;
    }
    else {
      uVar3 = *puVar4;
    }
    *(ushort *)(DAT_101dbd2f8 + 0x20010) = uVar3;
    *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
    FUN_10063f0f0(puVar4);
    *(undefined ***)puVar4 = &PTR_thunk_FUN_10063eeb4_10144b270;
    *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
  }
  FUN_10063f0e8(0x3f000000,puVar4);
  FUN_100642b14(param_1,puVar4);
  uVar2 = FUN_100047714();
  FUN_10063f0e8(0x3fa00000);
  FUN_10063fce0(0x3f800000,uVar2);
  FUN_100642b14(param_1,uVar2);
  return;
}




void FUN_100337b30(void)

{
                    /* WARNING: Subroutine does not return */
  _abort();
}




void FUN_100337b3c(void)

{
  DAT_101e46d48 = 0xff;
  DAT_101e46d4a = 0xffff;
  DAT_101e46d4c = 0xffff;
  DAT_101e46d4e = 0xffbc9c44;
  DAT_101e46d52 = 0xff1166f2;
  DAT_101e46d56 = 0xffe0e0e0;
  DAT_101e46d5a = 0xffa0a0a0;
  DAT_101e46d5e = 0xff8c8c8c;
  DAT_101e46d62 = 0xff322213;
  DAT_101e46d66 = 0xff091911;
  DAT_101e46d6a = 0xff170c19;
  DAT_101e46d6e = 0xff241a14;
  DAT_101e46d72 = 0xff14171c;
  DAT_101e46d76 = 0xff221911;
  DAT_101e46d7a = 0xff1a1416;
  DAT_101e46d7e = 0xff121414;
  DAT_101e46d82 = 0xff1a1809;
  DAT_101e46d86 = 0xff141414;
  DAT_101e46d8a = 0xff141414;
  DAT_101e46d8e = 0xff2929c0;
  DAT_101e46d92 = 0xff283082;
  DAT_101e46d96 = 0xff5262cc;
  DAT_101e46d9a = 0xff283082;
  DAT_101e46d9e = 0xff5262cc;
  DAT_101e46da2 = 0xff745c42;
  DAT_101e46da6 = 0xff184155;
  DAT_101e46daa = 0xff92665e;
  DAT_101e46dae = 0xffbc9c44;
  DAT_101e46db2 = 0xffbbae56;
  DAT_101e46db6 = 0xff8b7b01;
  DAT_101e46dba = 0xff90b3ef;
  DAT_101e46dbe = 0xff728ebe;
  DAT_101e46dc2 = 0xff19459d;
  DAT_101e46dc6 = 0xff9d877b;
  DAT_101e46dca = 0xffcbb1a3;
  DAT_101e46dce = 0xff3f6fb5;
  DAT_101e46dd2 = 0xffc5c5c5;
  DAT_101e46dd6 = 0xff4fc1f1;
  DAT_101e46dda = 0xff606060;
  DAT_101e46dde = 0xffc5ff7b;
  DAT_101e46de2 = 0xff5271eb;
  DAT_101e46de6 = 0xfffae076;
  DAT_101e46dea = 0xff3ac8f6;
  DAT_101e46dee = 0xffaaaaaa;
  DAT_101e46df2 = 0xffe19400;
  DAT_101e46df6 = 0xffe19400;
  DAT_101e46dfa = 0xffe550b2;
  DAT_101e46dfe = 0xfff22ae8;
  DAT_101e46e02 = 0xff005ae1;
  DAT_101e46e06 = 0xff1addfa;
  DAT_101e46e0a = 0xff2424b3;
  DAT_101e46e0e = 0xff2424b3;
  DAT_101e46e12 = 0xff646464;
  DAT_101e46e16 = 0xff92665e;
  DAT_101e46e1a = 0xff646037;
  DAT_101e46e24 = 0xff1111a1;
  DAT_101e46e2c = 0xffc8c8c8;
  DAT_101e46e28 = 0xff321ee1;
  DAT_101e46e30 = 0xff321ee1;
  DAT_101e46e3c = 0xff6259b3;
  DAT_101e46e40 = 0xff506e73;
  DAT_101e46e20 = 0xffffffff;
  DAT_101e46e44 = 0xff9dbf86;
  DAT_101e46e34 = 0xff7fe801;
  DAT_101e46e48 = 0xffa35244;
  DAT_101e46e38 = 0xffffffff;
  DAT_101e46e4c = 0xffca828e;
  DAT_101e46e50 = 0xffa6a6a6;
  DAT_101e46e54 = 0xffa6a6a6;
  DAT_101e46e58 = 0xffffffff;
  DAT_101e46e5c = 0xff88ea2f;
  DAT_101e46e60 = 0xff8c8c8c;
  DAT_101e46e64 = 0xffffb400;
  DAT_101e46e68 = 0xffff00ff;
  DAT_101e46e6c = 0xff00aded;
  DAT_101e46e70 = 0xff33d3ff;
  DAT_101e46e74 = 0xff7fe801;
  DAT_101e46e78 = 0xff282828;
  DAT_101e46e7c = 0xfff0f0f0;
  DAT_101e46e80 = 0xffa4781e;
  DAT_101e46e84 = 0xffa6654b;
  DAT_101e46e88 = 0xff93435b;
  DAT_101e46e8c = 0xff387f9c;
  DAT_101e46e90 = 0xffa3781e;
  DAT_101e46e94 = 0xffffd18a;
  DAT_101e46e98 = 0xffff61f7;
  DAT_101e46e9c = 0xff5de1f2;
  DAT_101e46ea0 = 0xff80eaff;
  DAT_101e46ea4 = 0xff32e00e;
  DAT_101e46ea8 = 0xff5a3c10;
  DAT_101e46eac = 0xff330b03;
  DAT_101e46eb0 = 0xff33031d;
  DAT_101e46eb4 = 0xff032433;
  DAT_101e46eb8 = 0xff9e8e8d;
  DAT_101e46ec0 = 0x4326000041900000;
  DAT_101e46ec8 = 0x4326000041c00000;
  FUN_10001549c(&DAT_101e46ed0,"http://www.vainglorygame.com/mystery-chest-drop-rates/");
  ___cxa_atexit(FUN_1000e6204,&DAT_101e46ed0,0x100000000);
  FUN_10001549c(&DAT_101e46ee8,
                "http://vg.ztgame.com/html/news/2017-05-11/004-1494-0039d-485409.shtml");
  ___cxa_atexit(FUN_1000e6204,&DAT_101e46ee8,0x100000000);
  FUN_10001549c(&DAT_101e46f00,"http://vg.163.com/news/1000102");
  ___cxa_atexit(FUN_1000e6204,&DAT_101e46f00,0x100000000);
  return;
}




undefined8 * FUN_1003382b4(void)

{
  void *pvVar1;
  
  if (DAT_101e46f18 == (undefined8 *)0x0) {
    DAT_101e46f18 = operator_new(0x18);
    *DAT_101e46f18 = 0;
    DAT_101e46f18[1] = 0;
    *(undefined4 *)(DAT_101e46f18 + 2) = 0;
    pvVar1 = operator_new(0x40);
    FUN_1004e4464(pvVar1,0);
    DAT_101e46f20 = pvVar1;
  }
  return DAT_101e46f18;
}




undefined8 * FUN_10033830c(undefined8 *param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  
  if ((char)DAT_101d911a8._7_1_ < '\0') {
    uVar2 = DAT_101d911a0;
    puVar3 = DAT_101d91198;
    if (0xffffffffffffffef < DAT_101d911a0) {
                    /* WARNING: Subroutine does not return */
      FUN_1003385a4();
    }
  }
  else {
    uVar2 = (ulong)DAT_101d911a8._7_1_;
    puVar3 = &DAT_101d91198;
  }
  if (uVar2 < 0x17) {
    *(char *)((long)param_1 + 0x17) = (char)uVar2;
    puVar1 = param_1;
    if (uVar2 == 0) goto LAB_10033839c;
  }
  else {
    uVar4 = uVar2 + 0x10 & 0xfffffffffffffff0;
    puVar1 = operator_new(uVar4);
    param_1[1] = uVar2;
    param_1[2] = uVar4 | 0x8000000000000000;
    *param_1 = puVar1;
  }
  _memcpy(puVar1,puVar3,uVar2);
LAB_10033839c:
  *(undefined1 *)((long)puVar1 + uVar2) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  return param_1;
}




undefined8 * FUN_1003383c4(undefined8 *param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  
  if ((char)DAT_101d911a8._7_1_ < '\0') {
    uVar2 = DAT_101d911a0;
    puVar3 = DAT_101d91198;
    if (0xffffffffffffffef < DAT_101d911a0) {
                    /* WARNING: Subroutine does not return */
      FUN_1003385a4();
    }
  }
  else {
    uVar2 = (ulong)DAT_101d911a8._7_1_;
    puVar3 = &DAT_101d91198;
  }
  if (uVar2 < 0x17) {
    *(char *)((long)param_1 + 0x17) = (char)uVar2;
    puVar1 = param_1;
    if (uVar2 == 0) goto LAB_10033839c;
  }
  else {
    uVar4 = uVar2 + 0x10 & 0xfffffffffffffff0;
    puVar1 = operator_new(uVar4);
    param_1[1] = uVar2;
    param_1[2] = uVar4 | 0x8000000000000000;
    *param_1 = puVar1;
  }
  _memcpy(puVar1,puVar3,uVar2);
LAB_10033839c:
  *(undefined1 *)((long)puVar1 + uVar2) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  return param_1;
}




undefined8 * FUN_1003383c8(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  pthread_mutex_t *ppVar4;
  long *plVar5;
  
  *param_1 = &PTR_thunk_FUN_100338444_1014943e8;
  plVar5 = (long *)FUN_1003382b4();
  ppVar4 = DAT_101e46f20;
  _pthread_mutex_lock(DAT_101e46f20);
  lVar2 = *plVar5;
  lVar3 = plVar5[1];
  param_1[1] = lVar3;
  param_1[2] = 0;
  plVar1 = plVar5;
  if (lVar2 != 0) {
    plVar1 = (long *)(lVar3 + 0x10);
  }
  *plVar1 = (long)param_1;
  plVar5[1] = (long)param_1;
  *(int *)(plVar5 + 2) = (int)plVar5[2] + 1;
  _pthread_mutex_unlock(ppVar4);
  return param_1;
}




undefined8 * FUN_100338444(undefined8 *param_1)

{
  pthread_mutex_t *ppVar1;
  undefined8 uVar2;
  
  *param_1 = &PTR_thunk_FUN_100338444_1014943e8;
  uVar2 = FUN_1003382b4();
  ppVar1 = DAT_101e46f20;
  _pthread_mutex_lock(DAT_101e46f20);
  FUN_1003384a4(uVar2,param_1);
  _pthread_mutex_unlock(ppVar1);
  return param_1;
}




void FUN_1003384a4(long *param_1,long param_2)

{
  long lVar1;
  
  if (*param_1 == param_2) {
    if (param_1[1] == param_2) {
      *param_1 = 0;
      param_1[1] = 0;
    }
    else {
      *param_1 = *(long *)(param_2 + 0x10);
    }
  }
  else if (param_1[1] == param_2) {
    lVar1 = *(long *)(param_2 + 8);
    param_1[1] = lVar1;
    *(undefined8 *)(lVar1 + 0x10) = 0;
  }
  else {
    lVar1 = *(long *)(param_2 + 8);
    *(undefined8 *)(lVar1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
    *(long *)(*(long *)(param_2 + 0x10) + 8) = lVar1;
  }
  *(int *)(param_1 + 2) = (int)param_1[2] + -1;
  return;
}




void thunk_FUN_100338444(void)

{
  FUN_100338444();
  return;
}




void FUN_100338508(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_100338444();
  operator_delete(pvVar1);
  return;
}




void FUN_10033851c(void)

{
  long *plVar1;
  
  plVar1 = (long *)FUN_1003382b4();
  for (plVar1 = (long *)*plVar1; plVar1 != (long *)0x0; plVar1 = (long *)plVar1[2]) {
    (**(code **)(*plVar1 + 0x10))(plVar1);
  }
  return;
}




void FUN_100338558(undefined8 param_1)

{
  long *plVar1;
  
  plVar1 = (long *)FUN_1003382b4();
  for (plVar1 = (long *)*plVar1; plVar1 != (long *)0x0; plVar1 = (long *)plVar1[2]) {
    (**(code **)(*plVar1 + 0x18))(plVar1,param_1);
  }
  return;
}




void FUN_10033859c(void)

{
  return;
}




void FUN_1003385a0(void)

{
  return;
}




void FUN_1003385a4(void)

{
                    /* WARNING: Subroutine does not return */
  _abort();
}




undefined8 * FUN_1003385b0(undefined8 *param_1)

{
  long lVar1;
  void *local_78 [2];
  char local_61;
  void *local_60 [2];
  char local_49;
  void *local_48 [2];
  char local_31;
  
  lVar1 = FUN_10014f4a0();
  FUN_1004f0a20(lVar1 + 0x18);
  FUN_10011cc24(param_1 + 6);
  *param_1 = &PTR_FUN_101494418;
  param_1[3] = &PTR_FUN_1014947c8;
  param_1[6] = &PTR_FUN_1014947f8;
  FUN_100335cc8(param_1 + 7);
  FUN_100335cc8(param_1 + 0x2b);
  FUN_100335cc8(param_1 + 0x4f);
  FUN_10001549c(local_48,"REWARDS.RECURRING");
  FUN_10033a990(param_1 + 7,local_48);
  if (local_31 < '\0') {
    operator_delete(local_48[0]);
  }
  FUN_10001549c(local_60,"REWARDS.BASIC_MYSTERY");
  FUN_10033a990(param_1 + 0x2b,local_60);
  if (local_49 < '\0') {
    operator_delete(local_60[0]);
  }
  FUN_10001549c(local_78,"REWARDS.EPIC_MYSTERY");
  FUN_10033a990(param_1 + 0x4f,local_78);
  if (local_61 < '\0') {
    operator_delete(local_78[0]);
  }
  return param_1;
}




void FUN_1003386b8(long param_1,long param_2)

{
  long lVar1;
  undefined8 *puVar2;
  long *plVar3;
  void *pvVar4;
  long local_c0;
  ulong local_b8;
  int local_b0;
  undefined8 *local_a8;
  undefined8 *local_a0;
  undefined8 local_98;
  void *pvStack_90;
  void *local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  int local_68;
  undefined8 local_60;
  char *local_58;
  char *pcStack_50;
  undefined4 local_48;
  
  FUN_10033a614(param_1 + 0x38);
  FUN_10033a614(param_1 + 0x158);
  FUN_10033a614(param_1 + 0x278);
  if (*(char *)(param_2 + 0x25) != '\0') {
    local_c0 = 0;
    local_b8 = 0;
    local_b0 = 0;
    pvStack_90 = (void *)0x0;
    local_98 = 0;
    uStack_80 = 0;
    local_88 = (void *)0x0;
    local_78 = 0;
    uStack_70 = 0x400;
    local_68 = 0;
    local_60 = 0;
    local_a8 = operator_new(0x28);
    *local_a8 = 0;
    local_a8[1] = 0x10000;
    local_a8[3] = 0;
    local_a8[4] = 0;
    local_a8[2] = 0;
    local_58 = *(char **)(param_2 + 0x28);
    if (-1 < *(char *)(param_2 + 0x3f)) {
      local_58 = (char *)(param_2 + 0x28);
    }
    local_a0 = local_a8;
    pcStack_50 = local_58;
    FUN_1000f7bd0(&local_c0,&local_58);
    if (((local_68 == 0) && (local_b0 == 3)) &&
       (lVar1 = FUN_1000e86c0(&local_c0,"chestData"),
       local_c0 + (local_b8 & 0xffffffff) * 0x30 != lVar1)) {
      local_48 = 0x100005;
      local_58 = "chestData";
      pcStack_50 = (char *)0x9;
      lVar1 = FUN_1000e87dc(&local_c0,&local_58);
      if (*(int *)(lVar1 + 0x10) == 4) {
        local_48 = 0x100005;
        local_58 = "chestData";
        pcStack_50 = (char *)0x9;
        lVar1 = FUN_1000e87dc(&local_c0,&local_58);
        if (*(int *)(lVar1 + 8) == 3) {
          local_48 = 0x100005;
          local_58 = "chestData";
          pcStack_50 = (char *)0x9;
          puVar2 = (undefined8 *)FUN_1000e87dc(&local_c0,&local_58);
          FUN_1003388b8(puVar2,param_1 + 0x38,*puVar2);
          local_48 = 0x100005;
          local_58 = "chestData";
          pcStack_50 = (char *)0x9;
          plVar3 = (long *)FUN_1000e87dc(&local_c0,&local_58);
          FUN_1003388b8(plVar3,param_1 + 0x158,*plVar3 + 0x18);
          local_48 = 0x100005;
          local_58 = "chestData";
          pcStack_50 = (char *)0x9;
          plVar3 = (long *)FUN_1000e87dc(&local_c0,&local_58);
          FUN_1003388b8(plVar3,param_1 + 0x278,*plVar3 + 0x30);
        }
      }
    }
    FUN_10033851c();
    if (local_a0 != (undefined8 *)0x0) {
      pvVar4 = (void *)FUN_1000f7b54();
      operator_delete(pvVar4);
    }
    _free(local_88);
    if (pvStack_90 != (void *)0x0) {
      operator_delete(pvStack_90);
    }
    return;
  }
  FUN_10033851c();
  return;
}




void FUN_100339220(void)

{
  FUN_10015d3ec();
  FUN_100166a1c();
  return;
}




undefined8 FUN_100339234(byte *param_1,undefined8 *param_2)

{
  size_t sVar1;
  size_t sVar2;
  undefined4 uVar3;
  byte bVar4;
  ulong uVar5;
  long lVar6;
  int iVar7;
  undefined8 *puVar8;
  byte *pbVar9;
  byte *pbVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  bVar4 = param_1[0x17];
  uVar11 = (ulong)bVar4;
  sVar1 = *(size_t *)(param_1 + 8);
  if (-1 < (char)bVar4) {
    sVar1 = uVar11;
  }
  sVar2 = DAT_101d238d0;
  if (-1 < (char)DAT_101d238df) {
    sVar2 = (ulong)DAT_101d238df;
  }
  if (sVar1 == sVar2) {
    pbVar9 = *(byte **)param_1;
    if (-1 < (char)bVar4) {
      pbVar9 = param_1;
    }
    pbVar10 = DAT_101d238c8;
    if (-1 < (char)DAT_101d238df) {
      pbVar10 = (byte *)&DAT_101d238c8;
    }
    if ((char)bVar4 < '\0') {
      if ((sVar1 == 0) || (iVar7 = _memcmp(pbVar9,pbVar10,sVar1), iVar7 == 0)) goto LAB_100339378;
    }
    else {
      if (sVar1 == 0) {
LAB_100339378:
        lVar6 = DAT_101d238f8;
        uVar3 = *(undefined4 *)(DAT_101d238f8 + 0x160);
        *param_2 = *(undefined8 *)(DAT_101d238f8 + 0x158);
        *(undefined4 *)(param_2 + 1) = uVar3;
        std::string::operator=((string *)(param_2 + 2),(string *)(lVar6 + 0x168));
        std::string::operator=((string *)(param_2 + 5),(string *)(lVar6 + 0x180));
        FUN_100335e0c(param_2 + 8,lVar6 + 0x198);
        std::string::operator=((string *)(param_2 + 10),(string *)(lVar6 + 0x1a8));
        uVar15 = *(undefined8 *)(lVar6 + 0x1d8);
        uVar14 = *(undefined8 *)(lVar6 + 0x1d0);
        uVar13 = *(undefined8 *)(lVar6 + 0x1e8);
        uVar12 = *(undefined8 *)(lVar6 + 0x1e0);
        uVar16 = *(undefined8 *)(lVar6 + 0x1c0);
        param_2[0xe] = *(undefined8 *)(lVar6 + 0x1c8);
        param_2[0xd] = uVar16;
        param_2[0x10] = uVar15;
        param_2[0xf] = uVar14;
        param_2[0x12] = uVar13;
        param_2[0x11] = uVar12;
        std::string::operator=((string *)(param_2 + 0x13),(string *)(lVar6 + 0x1f0));
        uVar13 = *(undefined8 *)(lVar6 + 0x230);
        uVar12 = *(undefined8 *)(lVar6 + 0x228);
        uVar15 = *(undefined8 *)(lVar6 + 0x220);
        uVar14 = *(undefined8 *)(lVar6 + 0x218);
        uVar16 = *(undefined8 *)(lVar6 + 0x208);
        param_2[0x17] = *(undefined8 *)(lVar6 + 0x210);
        param_2[0x16] = uVar16;
        param_2[0x19] = uVar15;
        param_2[0x18] = uVar14;
        param_2[0x1b] = uVar13;
        param_2[0x1a] = uVar12;
        std::string::operator=((string *)(param_2 + 0x1c),(string *)(lVar6 + 0x238));
        param_2[0x1f] = *(undefined8 *)(lVar6 + 0x250);
        std::string::operator=((string *)(param_2 + 0x20),(string *)(lVar6 + 600));
        puVar8 = (undefined8 *)(lVar6 + 0x270);
        goto LAB_10033962c;
      }
      pbVar9 = param_1;
      uVar5 = uVar11;
      if ((uint)*pbVar10 == ((uint)*(byte **)param_1 & 0xff)) {
        do {
          pbVar10 = pbVar10 + 1;
          pbVar9 = pbVar9 + 1;
          if (uVar5 - 1 == 0) goto LAB_100339378;
          uVar5 = uVar5 - 1;
        } while (*pbVar9 == *pbVar10);
      }
    }
  }
  sVar2 = DAT_101d238e8;
  if (-1 < (char)DAT_101d238f7) {
    sVar2 = (ulong)DAT_101d238f7;
  }
  if (sVar1 == sVar2) {
    pbVar9 = *(byte **)param_1;
    if (-1 < (char)bVar4) {
      pbVar9 = param_1;
    }
    pbVar10 = DAT_101d238e0;
    if (-1 < (char)DAT_101d238f7) {
      pbVar10 = (byte *)&DAT_101d238e0;
    }
    if ((char)bVar4 < '\0') {
      if ((sVar1 == 0) || (iVar7 = _memcmp(pbVar9,pbVar10,sVar1), iVar7 == 0)) goto LAB_1003394c0;
    }
    else {
      if (sVar1 == 0) {
LAB_1003394c0:
        lVar6 = DAT_101d238f8;
        uVar3 = *(undefined4 *)(DAT_101d238f8 + 0x280);
        *param_2 = *(undefined8 *)(DAT_101d238f8 + 0x278);
        *(undefined4 *)(param_2 + 1) = uVar3;
        std::string::operator=((string *)(param_2 + 2),(string *)(lVar6 + 0x288));
        std::string::operator=((string *)(param_2 + 5),(string *)(lVar6 + 0x2a0));
        FUN_100335e0c(param_2 + 8,lVar6 + 0x2b8);
        std::string::operator=((string *)(param_2 + 10),(string *)(lVar6 + 0x2c8));
        uVar15 = *(undefined8 *)(lVar6 + 0x2f8);
        uVar14 = *(undefined8 *)(lVar6 + 0x2f0);
        uVar13 = *(undefined8 *)(lVar6 + 0x308);
        uVar12 = *(undefined8 *)(lVar6 + 0x300);
        uVar16 = *(undefined8 *)(lVar6 + 0x2e0);
        param_2[0xe] = *(undefined8 *)(lVar6 + 0x2e8);
        param_2[0xd] = uVar16;
        param_2[0x10] = uVar15;
        param_2[0xf] = uVar14;
        param_2[0x12] = uVar13;
        param_2[0x11] = uVar12;
        std::string::operator=((string *)(param_2 + 0x13),(string *)(lVar6 + 0x310));
        uVar13 = *(undefined8 *)(lVar6 + 0x350);
        uVar12 = *(undefined8 *)(lVar6 + 0x348);
        uVar15 = *(undefined8 *)(lVar6 + 0x340);
        uVar14 = *(undefined8 *)(lVar6 + 0x338);
        uVar16 = *(undefined8 *)(lVar6 + 0x328);
        param_2[0x17] = *(undefined8 *)(lVar6 + 0x330);
        param_2[0x16] = uVar16;
        param_2[0x19] = uVar15;
        param_2[0x18] = uVar14;
        param_2[0x1b] = uVar13;
        param_2[0x1a] = uVar12;
        std::string::operator=((string *)(param_2 + 0x1c),(string *)(lVar6 + 0x358));
        param_2[0x1f] = *(undefined8 *)(lVar6 + 0x370);
        std::string::operator=((string *)(param_2 + 0x20),(string *)(lVar6 + 0x378));
        puVar8 = (undefined8 *)(lVar6 + 0x390);
        goto LAB_10033962c;
      }
      pbVar9 = param_1;
      uVar5 = uVar11;
      if ((uint)*pbVar10 == ((uint)*(byte **)param_1 & 0xff)) {
        do {
          pbVar10 = pbVar10 + 1;
          pbVar9 = pbVar9 + 1;
          if (uVar5 - 1 == 0) goto LAB_1003394c0;
          uVar5 = uVar5 - 1;
        } while (*pbVar9 == *pbVar10);
      }
    }
  }
  sVar2 = DAT_101d238b8;
  if (-1 < (char)DAT_101d238c7) {
    sVar2 = (ulong)DAT_101d238c7;
  }
  if (sVar1 != sVar2) {
    return 0;
  }
  pbVar9 = *(byte **)param_1;
  if (-1 < (char)bVar4) {
    pbVar9 = param_1;
  }
  pbVar10 = DAT_101d238b0;
  if (-1 < (char)DAT_101d238c7) {
    pbVar10 = (byte *)&DAT_101d238b0;
  }
  if ((char)bVar4 < '\0') {
    if ((sVar1 != 0) && (iVar7 = _memcmp(pbVar9,pbVar10,sVar1), iVar7 != 0)) {
      return 0;
    }
  }
  else if (sVar1 != 0) {
    if ((uint)*pbVar10 != ((uint)*(byte **)param_1 & 0xff)) {
      return 0;
    }
    while( true ) {
      uVar11 = uVar11 - 1;
      pbVar10 = pbVar10 + 1;
      param_1 = param_1 + 1;
      if (uVar11 == 0) break;
      if (*param_1 != *pbVar10) {
        return 0;
      }
    }
  }
  lVar6 = DAT_101d238f8;
  uVar3 = *(undefined4 *)(DAT_101d238f8 + 0x40);
  *param_2 = *(undefined8 *)(DAT_101d238f8 + 0x38);
  *(undefined4 *)(param_2 + 1) = uVar3;
  std::string::operator=((string *)(param_2 + 2),(string *)(lVar6 + 0x48));
  std::string::operator=((string *)(param_2 + 5),(string *)(lVar6 + 0x60));
  FUN_100335e0c(param_2 + 8,lVar6 + 0x78);
  std::string::operator=((string *)(param_2 + 10),(string *)(lVar6 + 0x88));
  uVar15 = *(undefined8 *)(lVar6 + 0xb8);
  uVar14 = *(undefined8 *)(lVar6 + 0xb0);
  uVar13 = *(undefined8 *)(lVar6 + 200);
  uVar12 = *(undefined8 *)(lVar6 + 0xc0);
  uVar16 = *(undefined8 *)(lVar6 + 0xa0);
  param_2[0xe] = *(undefined8 *)(lVar6 + 0xa8);
  param_2[0xd] = uVar16;
  param_2[0x10] = uVar15;
  param_2[0xf] = uVar14;
  param_2[0x12] = uVar13;
  param_2[0x11] = uVar12;
  std::string::operator=((string *)(param_2 + 0x13),(string *)(lVar6 + 0xd0));
  uVar13 = *(undefined8 *)(lVar6 + 0x110);
  uVar12 = *(undefined8 *)(lVar6 + 0x108);
  uVar15 = *(undefined8 *)(lVar6 + 0x100);
  uVar14 = *(undefined8 *)(lVar6 + 0xf8);
  uVar16 = *(undefined8 *)(lVar6 + 0xe8);
  param_2[0x17] = *(undefined8 *)(lVar6 + 0xf0);
  param_2[0x16] = uVar16;
  param_2[0x19] = uVar15;
  param_2[0x18] = uVar14;
  param_2[0x1b] = uVar13;
  param_2[0x1a] = uVar12;
  std::string::operator=((string *)(param_2 + 0x1c),(string *)(lVar6 + 0x118));
  param_2[0x1f] = *(undefined8 *)(lVar6 + 0x130);
  std::string::operator=((string *)(param_2 + 0x20),(string *)(lVar6 + 0x138));
  puVar8 = (undefined8 *)(lVar6 + 0x150);
LAB_10033962c:
  param_2[0x23] = *puVar8;
  return 1;
}




undefined8 FUN_100339648(byte *param_1,string *param_2)

{
  size_t sVar1;
  size_t sVar2;
  byte bVar3;
  ulong uVar4;
  int iVar5;
  char *pcVar6;
  byte *pbVar7;
  byte *pbVar8;
  ulong uVar9;
  void *local_48 [2];
  char local_31;
  
  bVar3 = param_1[0x17];
  uVar9 = (ulong)bVar3;
  sVar1 = *(size_t *)(param_1 + 8);
  if (-1 < (char)bVar3) {
    sVar1 = uVar9;
  }
  sVar2 = DAT_101d238d0;
  if (-1 < (char)DAT_101d238df) {
    sVar2 = (ulong)DAT_101d238df;
  }
  if (sVar1 == sVar2) {
    pbVar7 = *(byte **)param_1;
    if (-1 < (char)bVar3) {
      pbVar7 = param_1;
    }
    pbVar8 = DAT_101d238c8;
    if (-1 < (char)DAT_101d238df) {
      pbVar8 = (byte *)&DAT_101d238c8;
    }
    if ((char)bVar3 < '\0') {
      if ((sVar1 == 0) || (iVar5 = _memcmp(pbVar7,pbVar8,sVar1), iVar5 == 0)) goto LAB_100339790;
    }
    else {
      if (sVar1 == 0) {
LAB_100339790:
        pcVar6 = "mysteryChest";
        goto LAB_100339860;
      }
      pbVar7 = param_1;
      uVar4 = uVar9;
      if ((uint)*pbVar8 == ((uint)*(byte **)param_1 & 0xff)) {
        do {
          pbVar8 = pbVar8 + 1;
          pbVar7 = pbVar7 + 1;
          if (uVar4 - 1 == 0) goto LAB_100339790;
          uVar4 = uVar4 - 1;
        } while (*pbVar7 == *pbVar8);
      }
    }
  }
  sVar2 = DAT_101d238e8;
  if (-1 < (char)DAT_101d238f7) {
    sVar2 = (ulong)DAT_101d238f7;
  }
  if (sVar1 == sVar2) {
    pbVar7 = *(byte **)param_1;
    if (-1 < (char)bVar3) {
      pbVar7 = param_1;
    }
    pbVar8 = DAT_101d238e0;
    if (-1 < (char)DAT_101d238f7) {
      pbVar8 = (byte *)&DAT_101d238e0;
    }
    if ((char)bVar3 < '\0') {
      if ((sVar1 == 0) || (iVar5 = _memcmp(pbVar7,pbVar8,sVar1), iVar5 == 0)) goto LAB_100339834;
    }
    else {
      if (sVar1 == 0) {
LAB_100339834:
        pcVar6 = "epicMysteryChest";
        goto LAB_100339860;
      }
      pbVar7 = param_1;
      uVar4 = uVar9;
      if ((uint)*pbVar8 == ((uint)*(byte **)param_1 & 0xff)) {
        do {
          pbVar8 = pbVar8 + 1;
          pbVar7 = pbVar7 + 1;
          if (uVar4 - 1 == 0) goto LAB_100339834;
          uVar4 = uVar4 - 1;
        } while (*pbVar7 == *pbVar8);
      }
    }
  }
  sVar2 = DAT_101d238b8;
  if (-1 < (char)DAT_101d238c7) {
    sVar2 = (ulong)DAT_101d238c7;
  }
  if (sVar1 != sVar2) {
    return 0;
  }
  pbVar7 = *(byte **)param_1;
  if (-1 < (char)bVar3) {
    pbVar7 = param_1;
  }
  pbVar8 = DAT_101d238b0;
  if (-1 < (char)DAT_101d238c7) {
    pbVar8 = (byte *)&DAT_101d238b0;
  }
  if ((char)bVar3 < '\0') {
    if ((sVar1 != 0) && (iVar5 = _memcmp(pbVar7,pbVar8,sVar1), iVar5 != 0)) {
      return 0;
    }
  }
  else if (sVar1 != 0) {
    if ((uint)*pbVar8 != ((uint)*(byte **)param_1 & 0xff)) {
      return 0;
    }
    while( true ) {
      uVar9 = uVar9 - 1;
      pbVar8 = pbVar8 + 1;
      param_1 = param_1 + 1;
      if (uVar9 == 0) break;
      if (*param_1 != *pbVar8) {
        return 0;
      }
    }
  }
  pcVar6 = "recurringChest";
LAB_100339860:
  FUN_10001549c(local_48,pcVar6);
  std::string::operator=(param_2,(string *)local_48);
  if (local_31 < '\0') {
    operator_delete(local_48[0]);
  }
  return 1;
}




void FUN_10033989c(long param_1)

{
  FUN_10033a66c(param_1 + 0x38);
  FUN_10033a66c(param_1 + 0x158);
  FUN_10033a66c(param_1 + 0x278);
  return;
}




void FUN_1003398cc(void)

{
  FUN_10015d3ec();
  FUN_100166a1c();
  return;
}




void FUN_1003398e0(void)

{
  FUN_10015d3ec();
  FUN_100166a1c();
  return;
}




void FUN_1003398f4(long param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  void *pvVar9;
  uint uVar10;
  int *piVar11;
  int iVar12;
  uint uVar13;
  undefined1 auStack_d8 [8];
  void *local_d0;
  int local_c8;
  undefined1 auStack_b8 [16];
  undefined1 auStack_a8 [16];
  undefined1 auStack_98 [16];
  undefined1 auStack_88 [16];
  long local_78 [3];
  
  local_78[2] = *(long *)PTR____stack_chk_guard_101444218;
  lVar5 = FUN_100134098();
  if ((*(char *)(lVar5 + 0x3c) != '\0') && (iVar3 = FUN_100126aac(), iVar3 != 0)) {
    lVar6 = FUN_10016c2f0();
    if (*(int *)(lVar6 + 0x38) < 1) {
      uVar7 = FUN_10033a870(param_1 + 0x38);
      if ((uVar7 & 1) == 0) {
        iVar3 = FUN_10033ab58(param_1 + 0x38);
      }
      else {
        iVar3 = 0;
      }
      uVar8 = FUN_1004e0150("ASCENSION_NOTIFICATION_TIMED_1",0);
      thunk_FUN_1004e439c(auStack_b8,uVar8);
      uVar8 = FUN_1004e0150("ASCENSION_NOTIFICATION_TIMED_2",0);
      thunk_FUN_1004e439c(auStack_a8,uVar8);
      uVar8 = FUN_1004e0150("ASCENSION_NOTIFICATION_TIMED_3",0);
      thunk_FUN_1004e439c(auStack_98,uVar8);
      uVar8 = FUN_1004e0150("ASCENSION_NOTIFICATION_TIMED_4",0);
      thunk_FUN_1004e439c(auStack_88,uVar8);
      uVar8 = FUN_1004e0150("ASCENSION_NOTIFICATION_TIMED_5",0);
      thunk_FUN_1004e439c(local_78,uVar8);
      if (*(int *)(lVar5 + 8) != 0) {
        uVar10 = 0;
        piVar11 = *(int **)(lVar5 + 0x10);
        do {
          thunk_FUN_10052b358(auStack_d8);
          iVar1 = *piVar11;
          iVar2 = *(int *)(lVar5 + 0x38);
          iVar4 = _rand();
          iVar12 = 1;
          if (-1 < iVar2) {
            iVar12 = iVar2 + 1;
          }
          iVar2 = 0;
          if (iVar12 != 0) {
            iVar2 = iVar4 / iVar12;
          }
          local_c8 = iVar1 + iVar3 + (iVar4 - iVar2 * iVar12);
          uVar13 = uVar10;
          if (3 < uVar10) {
            uVar13 = 4;
          }
          FUN_1000153b4(auStack_d8,auStack_b8 + (ulong)uVar13 * 0x10);
          FUN_10011cd50(param_1 + 0x30,auStack_d8);
          if (local_d0 != (void *)0x0) {
            operator_delete__(local_d0);
          }
          piVar11 = piVar11 + 1;
          uVar10 = uVar10 + 1;
        } while (piVar11 != (int *)(*(long *)(lVar5 + 0x10) + (ulong)*(uint *)(lVar5 + 8) * 4));
      }
      lVar5 = 0;
      do {
        pvVar9 = *(void **)((long)local_78 + lVar5 + 8);
        if (pvVar9 != (void *)0x0) {
          operator_delete__(pvVar9);
          *(undefined8 *)((long)local_78 + lVar5) = 0;
          *(undefined8 *)((long)local_78 + lVar5 + 8) = 0;
        }
        lVar5 = lVar5 + -0x10;
      } while (lVar5 != -0x50);
    }
  }
  if (*(long *)PTR____stack_chk_guard_101444218 == local_78[2]) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_100339b08(long param_1)

{
  FUN_1003398f4(param_1 + -0x30);
  return;
}




undefined8 FUN_100339b10(long param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  iVar1 = FUN_10033a870(param_1 + 0x38);
  if ((iVar1 == 0) || (lVar2 = FUN_10016c2f0(), 0 < *(int *)(lVar2 + 0x38))) {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}




void FUN_100339b48(long param_1)

{
  FUN_100339b10(param_1 + -0x30);
  return;
}




void FUN_100339b50(void)

{
  operator_new(0x398);
  DAT_101d238f8 = FUN_1003385b0();
  return;
}




void FUN_100339b74(void)

{
  if (DAT_101d238f8 != (long *)0x0) {
    (**(code **)(*DAT_101d238f8 + 8))();
  }
  DAT_101d238f8 = (long *)0x0;
  return;
}




long FUN_100339ba8(void)

{
  return DAT_101d238f8 + 0x158;
}




long FUN_100339bb8(void)

{
  return DAT_101d238f8 + 0x278;
}




long FUN_100339bc8(void)

{
  return DAT_101d238f8 + 0x38;
}




void FUN_100339bd8(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_10015d3ec();
  FUN_100166a5c(uVar1,&DAT_101d238b0,param_1);
  return;
}




void FUN_100339c04(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_10015d3ec();
  FUN_100166a5c(uVar1,&DAT_101d238c8,param_1);
  return;
}




void FUN_100339c30(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_10015d3ec();
  FUN_100166a5c(uVar1,&DAT_101d238e0,param_1);
  return;
}




void FUN_100339c5c(undefined8 *param_1)

{
  param_1[3] = &PTR_FUN_1014947c8;
  *param_1 = &PTR_FUN_101494418;
  param_1[6] = &PTR_FUN_1014947f8;
  thunk_FUN_10001653c(param_1 + 0x6f);
  thunk_FUN_10001653c(param_1 + 0x6b);
  if (*(char *)((long)param_1 + 0x327) < '\0') {
    operator_delete((void *)param_1[0x62]);
  }
  if (*(char *)((long)param_1 + 0x2df) < '\0') {
    operator_delete((void *)param_1[0x59]);
  }
  if ((void *)param_1[0x58] != (void *)0x0) {
    operator_delete__((void *)param_1[0x58]);
    param_1[0x58] = 0;
    param_1[0x57] = 0;
  }
  if (*(char *)((long)param_1 + 0x2b7) < '\0') {
    operator_delete((void *)param_1[0x54]);
  }
  if (*(char *)((long)param_1 + 0x29f) < '\0') {
    operator_delete((void *)param_1[0x51]);
  }
  thunk_FUN_10001653c(param_1 + 0x4b);
  thunk_FUN_10001653c(param_1 + 0x47);
  if (*(char *)((long)param_1 + 0x207) < '\0') {
    operator_delete((void *)param_1[0x3e]);
  }
  if (*(char *)((long)param_1 + 0x1bf) < '\0') {
    operator_delete((void *)param_1[0x35]);
  }
  if ((void *)param_1[0x34] != (void *)0x0) {
    operator_delete__((void *)param_1[0x34]);
    param_1[0x33] = 0;
    param_1[0x34] = 0;
  }
  if (*(char *)((long)param_1 + 0x197) < '\0') {
    operator_delete((void *)param_1[0x30]);
  }
  if (*(char *)((long)param_1 + 0x17f) < '\0') {
    operator_delete((void *)param_1[0x2d]);
  }
  thunk_FUN_10001653c(param_1 + 0x27);
  thunk_FUN_10001653c(param_1 + 0x23);
  if (*(char *)((long)param_1 + 0xe7) < '\0') {
    operator_delete((void *)param_1[0x1a]);
  }
  if (*(char *)((long)param_1 + 0x9f) < '\0') {
    operator_delete((void *)param_1[0x11]);
  }
  if ((void *)param_1[0x10] != (void *)0x0) {
    operator_delete__((void *)param_1[0x10]);
    param_1[0xf] = 0;
    param_1[0x10] = 0;
  }
  if (*(char *)((long)param_1 + 0x77) < '\0') {
    operator_delete((void *)param_1[0xc]);
  }
  if (*(char *)((long)param_1 + 0x5f) < '\0') {
    operator_delete((void *)param_1[9]);
  }
  FUN_10011ccec(param_1 + 6);
  FUN_1004f0a9c(param_1 + 3);
  FUN_10014f51c(param_1);
  return;
}




void FUN_100339ddc(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_100339c5c();
  operator_delete(pvVar1);
  return;
}




void FUN_100339df0(long param_1)

{
  FUN_100339c5c(param_1 + -0x18);
  return;
}




void FUN_100339df8(long param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_100339c5c(param_1 + -0x18);
  operator_delete(pvVar1);
  return;
}




void FUN_100339e10(long param_1)

{
  FUN_100339c5c(param_1 + -0x30);
  return;
}




void FUN_100339e18(long param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_100339c5c(param_1 + -0x30);
  operator_delete(pvVar1);
  return;
}




void FUN_100339e30(void)

{
                    /* WARNING: Subroutine does not return */
  _abort();
}




void FUN_100339e3c(uint *param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = *param_1;
  if (uVar3 == param_1[1]) {
    uVar1 = 0;
    if (uVar3 != 0xffffffff) {
      uVar1 = uVar3 + (~uVar3 | 0xfffffff0) + 0x11;
    }
    if (uVar3 < 0x20) {
      uVar1 = uVar3 << 1;
    }
    uVar2 = uVar3 + 1;
    if (uVar3 + 1 <= uVar1) {
      uVar2 = uVar1;
    }
    FUN_100335e78(param_1,uVar2);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




void FUN_100339ebc(void)

{
  DAT_101e46f28 = 0xff;
  DAT_101e46f2a = 0xffff;
  DAT_101e46f2c = 0xffff;
  DAT_101e46f2e = 0xffbc9c44;
  DAT_101e46f32 = 0xff1166f2;
  DAT_101e46f36 = 0xffe0e0e0;
  DAT_101e46f3a = 0xffa0a0a0;
  DAT_101e46f3e = 0xff8c8c8c;
  DAT_101e46f42 = 0xff322213;
  DAT_101e46f46 = 0xff091911;
  DAT_101e46f4a = 0xff170c19;
  DAT_101e46f4e = 0xff241a14;
  DAT_101e46f52 = 0xff14171c;
  DAT_101e46f56 = 0xff221911;
  DAT_101e46f5a = 0xff1a1416;
  DAT_101e46f5e = 0xff121414;
  DAT_101e46f62 = 0xff1a1809;
  DAT_101e46f66 = 0xff141414;
  DAT_101e46f6a = 0xff141414;
  DAT_101e46f6e = 0xff2929c0;
  DAT_101e46f72 = 0xff283082;
  DAT_101e46f76 = 0xff5262cc;
  DAT_101e46f7a = 0xff283082;
  DAT_101e46f7e = 0xff5262cc;
  DAT_101e46f82 = 0xff745c42;
  DAT_101e46f86 = 0xff184155;
  DAT_101e46f8a = 0xff92665e;
  DAT_101e46f8e = 0xffbc9c44;
  DAT_101e46f92 = 0xffbbae56;
  DAT_101e46f96 = 0xff8b7b01;
  DAT_101e46f9a = 0xff90b3ef;
  DAT_101e46f9e = 0xff728ebe;
  DAT_101e46fa2 = 0xff19459d;
  DAT_101e46fa6 = 0xff9d877b;
  DAT_101e46faa = 0xffcbb1a3;
  DAT_101e46fae = 0xff3f6fb5;
  DAT_101e46fb2 = 0xffc5c5c5;
  DAT_101e46fb6 = 0xff4fc1f1;
  DAT_101e46fba = 0xff606060;
  DAT_101e46fbe = 0xffc5ff7b;
  DAT_101e46fc2 = 0xff5271eb;
  DAT_101e46fc6 = 0xfffae076;
  DAT_101e46fca = 0xff3ac8f6;
  DAT_101e46fce = 0xffaaaaaa;
  DAT_101e46fd2 = 0xffe19400;
  DAT_101e46fd6 = 0xffe19400;
  DAT_101e46fda = 0xffe550b2;
  DAT_101e46fde = 0xfff22ae8;
  DAT_101e46fe2 = 0xff005ae1;
  DAT_101e46fe6 = 0xff1addfa;
  DAT_101e46fea = 0xff2424b3;
  DAT_101e46fee = 0xff2424b3;
  DAT_101e46ff2 = 0xff646464;
  DAT_101e46ff6 = 0xff92665e;
  DAT_101e46ffa = 0xff646037;
  DAT_101e47004 = 0xff1111a1;
  DAT_101e47008 = 0xff321ee1;
  DAT_101e4700c = 0xffc8c8c8;
  DAT_101e47010 = 0xff321ee1;
  DAT_101e4701c = 0xff6259b3;
  DAT_101e47020 = 0xff506e73;
  DAT_101e47024 = 0xff9dbf86;
  DAT_101e47000 = 0xffffffff;
  DAT_101e47028 = 0xffa35244;
  DAT_101e47014 = 0xff7fe801;
  DAT_101e4702c = 0xffca828e;
  DAT_101e47018 = 0xffffffff;
  DAT_101e47030 = 0xffa6a6a6;
  DAT_101e47034 = 0xffa6a6a6;
  DAT_101e47038 = 0xffffffff;
  DAT_101e4703c = 0xff88ea2f;
  DAT_101e47040 = 0xff8c8c8c;
  DAT_101e47044 = 0xffffb400;
  DAT_101e47048 = 0xffff00ff;
  DAT_101e4704c = 0xff00aded;
  DAT_101e47050 = 0xff33d3ff;
  DAT_101e47054 = 0xff7fe801;
  DAT_101e47058 = 0xff282828;
  DAT_101e4705c = 0xfff0f0f0;
  DAT_101e47060 = 0xffa4781e;
  DAT_101e47064 = 0xffa6654b;
  DAT_101e47068 = 0xff93435b;
  DAT_101e4706c = 0xff387f9c;
  DAT_101e47070 = 0xffa3781e;
  DAT_101e47074 = 0xffffd18a;
  DAT_101e47078 = 0xffff61f7;
  DAT_101e4707c = 0xff5de1f2;
  DAT_101e47080 = 0xff80eaff;
  DAT_101e47084 = 0xff32e00e;
  DAT_101e47088 = 0xff5a3c10;
  DAT_101e4708c = 0xff330b03;
  DAT_101e47090 = 0xff33031d;
  DAT_101e47094 = 0xff032433;
  DAT_101e47098 = 0xff9e8e8d;
  FUN_10001549c(&DAT_101d238b0,"PROGRESSIVE_CHEST_RECURRING");
  ___cxa_atexit(FUN_1000e6204,&DAT_101d238b0,0x100000000);
  FUN_10001549c(&DAT_101d238c8,"PROGRESSIVE_CHEST_BASIC_MYSTERY");
  ___cxa_atexit(FUN_1000e6204,&DAT_101d238c8,0x100000000);
  FUN_10001549c(&DAT_101d238e0,"PROGRESSIVE_CHEST_EPIC_MYSTERY");
  ___cxa_atexit(FUN_1000e6204,&DAT_101d238e0,0x100000000);
  return;
}




void FUN_10033a614(undefined1 *param_1)

{
  *param_1 = 0;
  *(mach_header **)(param_1 + 4) = &__mh_execute_header;
  std::string::operator=((string *)(param_1 + 0x10),(string *)&DAT_101d91198);
  FUN_1000e7da4(param_1 + 0x50);
  FUN_1000e7da4(param_1 + 0x98);
  if (*(long *)(param_1 + 0x48) != 0) {
    *(undefined4 *)(param_1 + 0x40) = 0;
  }
  return;
}




void FUN_10033a66c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_10033a6b0();
  FUN_1000165f0(param_1 + 0xe0,uVar1);
  uVar1 = FUN_10033a810(param_1);
  FUN_1000165f0(param_1 + 0x100,uVar1);
  return;
}




void FUN_10033a6b0(char *param_1)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  ulong uVar11;
  long lVar12;
  long *plVar13;
  long alStack_40 [2];
  
  alStack_40[1] = *(long *)PTR____stack_chk_guard_101444218;
  if (*param_1 == '\0') {
    iVar6 = 0;
  }
  else {
    uVar3 = *(uint *)(param_1 + 0x40);
    plVar13 = (long *)((long)alStack_40 - ((long)(int)uVar3 * 8 + 0xfU & 0xfffffffffffffff0));
    if (0 < (int)uVar3) {
      plVar7 = *(long **)(param_1 + 0x48);
      uVar2 = *(uint *)(param_1 + 4);
      uVar8 = (ulong)uVar2;
      uVar11 = (ulong)uVar3;
      plVar10 = plVar13;
      do {
        if ((int)uVar2 < 1) {
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          if (uVar8 != 0) {
            lVar12 = *plVar7 / (long)uVar8;
          }
          lVar12 = lVar12 * uVar8;
        }
        *plVar10 = lVar12;
        plVar7 = plVar7 + 1;
        uVar11 = uVar11 - 1;
        plVar10 = plVar10 + 1;
      } while (uVar11 != 0);
    }
    lVar12 = FUN_1004f1a74(0);
    iVar6 = *(int *)(param_1 + 8);
    iVar5 = 1 - iVar6;
    if (iVar5 < 1) {
      lVar9 = 0;
      uVar2 = *(uint *)(param_1 + 4);
      uVar11 = (ulong)uVar2;
      lVar4 = 0;
      if (uVar11 != 0) {
        lVar4 = lVar12 / (long)uVar11;
      }
      do {
        if ((int)uVar2 < 1) {
          lVar12 = 0;
        }
        else {
          lVar12 = lVar9 * (int)uVar2 + lVar4 * uVar11;
        }
        uVar8 = (ulong)uVar3;
        plVar7 = plVar13;
        if (0 < (int)uVar3) {
          do {
            if (lVar12 == *plVar7) {
              iVar6 = iVar6 + -1;
              break;
            }
            plVar7 = plVar7 + 1;
            uVar8 = uVar8 - 1;
          } while (uVar8 != 0);
        }
        bVar1 = iVar5 < lVar9;
        lVar9 = lVar9 + -1;
      } while (bVar1);
    }
  }
  if (*(long *)PTR____stack_chk_guard_101444218 != alStack_40[1]) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(iVar6);
  }
  return;
}




undefined8 FUN_10033a810(char *param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  if (*param_1 == '\0') {
    if (param_1[0xaf] < '\0') {
      if (*(long *)(param_1 + 0xa0) == 0) {
        return 0;
      }
    }
    else if (param_1[0xaf] == '\0') {
      return 0;
    }
    iVar1 = FUN_1000e7c70(param_1 + 0xb0);
    if (iVar1 != 0) {
      uVar2 = FUN_1000e7fac(param_1 + 0x98);
      return uVar2;
    }
  }
  return 0;
}




undefined8 FUN_10033a870(undefined8 param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_10033a8a8();
  if ((uVar1 & 1) != 0) {
    return 1;
  }
  uVar2 = FUN_10033a91c(param_1);
  return uVar2;
}




undefined8 FUN_10033a8a8(char *param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((*param_1 == '\0') || (iVar1 = FUN_10033a6b0(param_1), 0 < iVar1)) {
    if (param_1[0x67] < '\0') {
      if (*(long *)(param_1 + 0x58) == 0) goto LAB_10033a904;
    }
    else if (param_1[0x67] == '\0') goto LAB_10033a904;
    iVar1 = FUN_1000e7c70(param_1 + 0x68);
    if (iVar1 != 0) {
      uVar2 = FUN_1000e7eb0(param_1 + 0x50);
      return uVar2;
    }
    uVar2 = 1;
  }
  else {
LAB_10033a904:
    uVar2 = 0;
  }
  return uVar2;
}




undefined8 FUN_10033a91c(char *param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((*param_1 == '\0') || (iVar1 = FUN_10033a6b0(param_1), 0 < iVar1)) {
    if (param_1[0xaf] < '\0') {
      if (*(long *)(param_1 + 0xa0) == 0) goto LAB_10033a978;
    }
    else if (param_1[0xaf] == '\0') goto LAB_10033a978;
    iVar1 = FUN_1000e7c70(param_1 + 0xb0);
    if (iVar1 != 0) {
      uVar2 = FUN_1000e7eb0(param_1 + 0x98);
      return uVar2;
    }
    uVar2 = 1;
  }
  else {
LAB_10033a978:
    uVar2 = 0;
  }
  return uVar2;
}




void FUN_10033a990(long param_1,string *param_2)

{
  undefined8 ***pppuVar1;
  string *psVar2;
  size_t sVar3;
  ulong uVar4;
  undefined8 **local_68;
  size_t local_60;
  ulong local_58;
  
  std::string::operator=((string *)(param_1 + 0x28),param_2);
  local_68 = (undefined8 ***)0x0;
  local_60 = 0;
  local_58 = 0;
  if ((char)param_2[0x17] < '\0') {
    psVar2 = *(string **)param_2;
    sVar3 = *(size_t *)(param_2 + 8);
  }
  else {
    sVar3 = (size_t)(byte)param_2[0x17];
    psVar2 = param_2;
  }
  if (0xffffffffffffffef < sVar3 + 8) goto LAB_10033ab54;
  if (sVar3 + 8 < 0x17) {
    pppuVar1 = &local_68;
    local_58 = sVar3 << 0x38;
    if (sVar3 != 0) goto LAB_10033aa24;
  }
  else {
    uVar4 = sVar3 + 0x18 & 0xfffffffffffffff0;
    pppuVar1 = operator_new(uVar4);
    local_58 = uVar4 | 0x8000000000000000;
    local_68 = pppuVar1;
    local_60 = sVar3;
LAB_10033aa24:
    _memcpy(pppuVar1,psVar2,sVar3);
  }
  *(undefined1 *)((long)pppuVar1 + sVar3) = 0;
  std::string::append((char *)&local_68,0x1013f4995);
  pppuVar1 = (undefined8 ***)local_68;
  if (-1 < (long)local_58) {
    pppuVar1 = &local_68;
  }
  FUN_100016648(param_1 + 0xe0,pppuVar1,0);
  if ((long)local_58 < 0) {
    operator_delete(local_68);
  }
  local_68 = (undefined8 ***)0x0;
  local_60 = 0;
  local_58 = 0;
  if ((char)param_2[0x17] < '\0') {
    psVar2 = *(string **)param_2;
    sVar3 = *(size_t *)(param_2 + 8);
  }
  else {
    sVar3 = (size_t)(byte)param_2[0x17];
    psVar2 = param_2;
  }
  if (0xffffffffffffffef < sVar3 + 10) {
LAB_10033ab54:
    local_58 = 0;
    local_60 = 0;
    local_68 = (undefined8 **)0x0;
                    /* WARNING: Subroutine does not return */
    FUN_10033abf0();
  }
  if (sVar3 + 10 < 0x17) {
    pppuVar1 = &local_68;
    local_58 = sVar3 << 0x38;
    if (sVar3 == 0) goto LAB_10033aaf0;
  }
  else {
    uVar4 = sVar3 + 0x1a & 0xfffffffffffffff0;
    pppuVar1 = operator_new(uVar4);
    local_58 = uVar4 | 0x8000000000000000;
    local_68 = pppuVar1;
    local_60 = sVar3;
  }
  _memcpy(pppuVar1,psVar2,sVar3);
LAB_10033aaf0:
  *(undefined1 *)((long)pppuVar1 + sVar3) = 0;
  std::string::append((char *)&local_68,0x1013f499e);
  pppuVar1 = (undefined8 ***)local_68;
  if (-1 < (long)local_58) {
    pppuVar1 = &local_68;
  }
  FUN_100016648(param_1 + 0x100,pppuVar1,0);
  if ((long)local_58 < 0) {
    operator_delete(local_68);
  }
  return;
}




long FUN_10033ab58(char *param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  if (*param_1 == '\0') {
    lVar3 = 0;
  }
  else {
    lVar2 = FUN_10033ab9c();
    iVar1 = *(int *)(param_1 + 4);
    lVar3 = FUN_1004f1a74(0);
    lVar3 = (lVar2 + iVar1) - lVar3;
  }
  return lVar3;
}




long FUN_10033ab9c(char *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  if (*param_1 == '\0') {
    lVar2 = 0;
  }
  else {
    lVar2 = FUN_1004f1a74(0);
    lVar3 = FUN_1004f1a74(0);
    lVar4 = (long)*(int *)(param_1 + 4);
    lVar1 = 0;
    if (lVar4 != 0) {
      lVar1 = lVar3 / lVar4;
    }
    lVar2 = lVar2 + (lVar1 * lVar4 - lVar3);
  }
  return lVar2;
}




void FUN_10033abf0(void)

{
                    /* WARNING: Subroutine does not return */
  _abort();
}




long FUN_10033abfc(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_1001e1b34();
  *puVar1 = &PTR_FUN_101494828;
  thunk_FUN_10033ba2c(puVar1 + 3);
  *(undefined1 *)(param_1 + 0xc018) = 0;
  *(undefined8 *)(param_1 + 0xc010) = 0;
  *(undefined8 *)(param_1 + 0xc028) = 0;
  *(undefined8 *)(param_1 + 0xc030) = 0;
  *(undefined8 *)(param_1 + 0xc020) = 0;
  *(undefined8 *)(param_1 + 0xc038) = param_2;
  return param_1;
}




bool FUN_10033ac5c(char *param_1)

{
  if (((((*param_1 == '\0') && (param_1[1] == '\0')) && (param_1[2] == '\0')) &&
      ((param_1[3] == '\0' && (param_1[4] == '\0')))) &&
     ((param_1[5] == '\0' && ((param_1[6] == '\0' && (param_1[7] == '\0')))))) {
    return param_1[8] != '\0';
  }
  return true;
}




void FUN_10033acb4(long param_1,uint *param_2)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  undefined8 *puVar9;
  ulong uVar10;
  
  lVar3 = FUN_1001340bc();
  *(undefined8 *)(param_1 + 0xc010) = 0;
  *(undefined1 *)(param_1 + 0xc018) = 0;
  if (*param_2 != 0) {
    uVar10 = 0;
    do {
      lVar8 = *(long *)(param_2 + 2);
      puVar9 = (undefined8 *)(lVar8 + uVar10 * 0x70);
      lVar4 = FUN_10032bcd0(puVar9);
      if (lVar4 == 0) {
        if ((char)*(byte *)((long)puVar9 + 0x17) < '\0') {
          puVar9 = (undefined8 *)*puVar9;
          uVar7 = *(ulong *)(lVar8 + uVar10 * 0x70 + 8);
        }
        else {
          uVar7 = (ulong)*(byte *)((long)puVar9 + 0x17);
        }
        if (8 < (long)uVar7) {
          plVar1 = (long *)((long)puVar9 + uVar7);
          puVar5 = puVar9;
          while (plVar6 = _memchr(puVar5,99,uVar7 - 8), plVar6 != (long *)0x0) {
            if (*plVar6 == 0x7265685f64726163 && (char)plVar6[1] == 'o') {
              if ((plVar6 != plVar1) && ((long)plVar6 - (long)puVar9 != -1)) {
                *(undefined1 *)(param_1 + 0xc018) = 1;
              }
              break;
            }
            puVar5 = (undefined8 *)((long)plVar6 + 1);
            uVar7 = (long)plVar1 - (long)puVar5;
            if ((long)uVar7 < 9) break;
          }
        }
      }
      else if (*(char *)(lVar4 + 0x35) == '\0') {
        iVar2 = *(int *)(lVar4 + 0x20);
        if (iVar2 == 3) {
          *(undefined1 *)(param_1 + 0xc016) = 1;
        }
        else if (iVar2 == 2) {
          *(undefined1 *)(param_1 + 0xc015) = 1;
        }
        else if (iVar2 == 1) {
          *(undefined1 *)(param_1 + 0xc014) = 1;
        }
      }
      else {
        *(undefined1 *)(param_1 + 0xc017) = 1;
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 < *param_2);
  }
  if ((*(char *)(lVar3 + 0xc) != '\0') &&
     (iVar2 = FUN_10033ac5c((undefined8 *)(param_1 + 0xc010)), iVar2 != 0)) {
    std::string::operator=((string *)(param_1 + 0xc020),(string *)&DAT_101e47240);
    return;
  }
  return;
}




void FUN_10033ae7c(undefined8 param_1,undefined8 param_2)

{
  FUN_100130a18(param_2);
  return;
}




void FUN_10033b03c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_101494828;
  if (*(char *)((long)param_1 + 0xc037) < '\0') {
    operator_delete((void *)param_1[0x1804]);
  }
  FUN_10033b0e8(param_1 + 3);
  FUN_1001e1bb0(param_1);
  return;
}




void FUN_10033b08c(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_101494828;
  if (*(char *)((long)param_1 + 0xc037) < '\0') {
    operator_delete((void *)param_1[0x1804]);
  }
  FUN_10033b0e8(param_1 + 3);
  pvVar1 = (void *)FUN_1001e1bb0(param_1);
  operator_delete(pvVar1);
  return;
}




void FUN_10033b0e0(void)

{
  return;
}




void thunk_FUN_10033b0e8(void)

{
  FUN_10033b0e8();
  return;
}




void FUN_10033b0e8(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_10033b0e8_101494850;
  FUN_10003bd40(param_1 + 0x1548);
  FUN_1001c58e4(param_1 + 0x14be);
  thunk_FUN_10064e2bc(param_1 + 0x14a7);
  FUN_10003bd40(param_1 + 0x11f0);
  param_1[0xf15] = &PTR_FUN_1014627f8;
  if ((void *)param_1[0x11ee] != (void *)0x0) {
    operator_delete__((void *)param_1[0x11ee]);
    param_1[0x11ee] = 0;
    param_1[0x11ed] = 0;
  }
  if (*(char *)((long)param_1 + 0x8f67) < '\0') {
    operator_delete((void *)param_1[0x11ea]);
  }
  param_1[0x11cc] = &PTR_FUN_1014a7108;
  param_1[0x11e3] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x11e6);
  FUN_10064e2bc(param_1 + 0x11cc);
  FUN_10003bd40(param_1 + 0xf15);
  param_1[0xc3a] = &PTR_FUN_1014627f8;
  if ((void *)param_1[0xf13] != (void *)0x0) {
    operator_delete__((void *)param_1[0xf13]);
    param_1[0xf13] = 0;
    param_1[0xf12] = 0;
  }
  if (*(char *)((long)param_1 + 0x788f) < '\0') {
    operator_delete((void *)param_1[0xf0f]);
  }
  param_1[0xef1] = &PTR_FUN_1014a7108;
  param_1[0xf08] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xf0b);
  FUN_10064e2bc(param_1 + 0xef1);
  FUN_10003bd40(param_1 + 0xc3a);
  thunk_FUN_100651068(param_1 + 0xc14);
  thunk_FUN_10064e2bc(param_1 + 0xbfd);
  FUN_10064e2bc(param_1 + 0xbe4);
  FUN_10003bd40(param_1 + 0x92d);
  FUN_1001c58e4(param_1 + 0x8a3);
  thunk_FUN_10064e2bc(param_1 + 0x88c);
  FUN_10003bd40(param_1 + 0x5d5);
  FUN_10003bd40(param_1 + 0x31e);
  FUN_10003bd40(param_1 + 0x67);
  thunk_FUN_100651068(param_1 + 0x41);
  thunk_FUN_10064e2bc(param_1 + 0x2a);
  FUN_10064e2bc(param_1 + 0x11);
  FUN_10064221c(param_1);
  return;
}




void FUN_10033b2c8(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_10033b0e8();
  operator_delete(pvVar1);
  return;
}




void FUN_10033b2dc(void)

{
  DAT_101e470a0 = 0xff;
  DAT_101e470a2 = 0xffff;
  DAT_101e470a4 = 0xffff;
  DAT_101e470a6 = 0xffbc9c44;
  DAT_101e470aa = 0xff1166f2;
  DAT_101e470ae = 0xffe0e0e0;
  DAT_101e470b2 = 0xffa0a0a0;
  DAT_101e470b6 = 0xff8c8c8c;
  DAT_101e470ba = 0xff322213;
  DAT_101e470be = 0xff091911;
  DAT_101e470c2 = 0xff170c19;
  DAT_101e470c6 = 0xff241a14;
  DAT_101e470ca = 0xff14171c;
  DAT_101e470ce = 0xff221911;
  DAT_101e470d2 = 0xff1a1416;
  DAT_101e470d6 = 0xff121414;
  DAT_101e470da = 0xff1a1809;
  DAT_101e470de = 0xff141414;
  DAT_101e470e2 = 0xff141414;
  DAT_101e470e6 = 0xff2929c0;
  DAT_101e470ea = 0xff283082;
  DAT_101e470ee = 0xff5262cc;
  DAT_101e470f2 = 0xff283082;
  DAT_101e470f6 = 0xff5262cc;
  DAT_101e470fa = 0xff745c42;
  DAT_101e470fe = 0xff184155;
  DAT_101e47102 = 0xff92665e;
  DAT_101e47106 = 0xffbc9c44;
  DAT_101e4710a = 0xffbbae56;
  DAT_101e4710e = 0xff8b7b01;
  DAT_101e47112 = 0xff90b3ef;
  DAT_101e47116 = 0xff728ebe;
  DAT_101e4711a = 0xff19459d;
  DAT_101e4711e = 0xff9d877b;
  DAT_101e47122 = 0xffcbb1a3;
  DAT_101e47126 = 0xff3f6fb5;
  DAT_101e4712a = 0xffc5c5c5;
  DAT_101e4712e = 0xff4fc1f1;
  DAT_101e47132 = 0xff606060;
  DAT_101e47136 = 0xffc5ff7b;
  DAT_101e4713a = 0xff5271eb;
  DAT_101e4713e = 0xfffae076;
  DAT_101e47142 = 0xff3ac8f6;
  DAT_101e47146 = 0xffaaaaaa;
  DAT_101e4714a = 0xffe19400;
  DAT_101e4714e = 0xffe19400;
  DAT_101e47152 = 0xffe550b2;
  DAT_101e47156 = 0xfff22ae8;
  DAT_101e4715a = 0xff005ae1;
  DAT_101e4715e = 0xff1addfa;
  DAT_101e47162 = 0xff2424b3;
  DAT_101e47166 = 0xff2424b3;
  DAT_101e4716a = 0xff646464;
  DAT_101e4716e = 0xff92665e;
  DAT_101e47172 = 0xff646037;
  DAT_101e4717c = 0xff1111a1;
  DAT_101e47184 = 0xffc8c8c8;
  DAT_101e47180 = 0xff321ee1;
  DAT_101e47188 = 0xff321ee1;
  DAT_101e47194 = 0xff6259b3;
  DAT_101e47198 = 0xff506e73;
  DAT_101e47178 = 0xffffffff;
  DAT_101e4719c = 0xff9dbf86;
  DAT_101e4718c = 0xff7fe801;
  DAT_101e471a0 = 0xffa35244;
  DAT_101e47190 = 0xffffffff;
  DAT_101e471a4 = 0xffca828e;
  DAT_101e471a8 = 0xffa6a6a6;
  DAT_101e471ac = 0xffa6a6a6;
  DAT_101e471b0 = 0xffffffff;
  DAT_101e471b4 = 0xff88ea2f;
  DAT_101e471b8 = 0xff8c8c8c;
  DAT_101e471bc = 0xffffb400;
  DAT_101e471c0 = 0xffff00ff;
  DAT_101e471c4 = 0xff00aded;
  DAT_101e471c8 = 0xff33d3ff;
  DAT_101e471cc = 0xff7fe801;
  DAT_101e471d0 = 0xff282828;
  DAT_101e471d4 = 0xfff0f0f0;
  DAT_101e471d8 = 0xffa4781e;
  DAT_101e471dc = 0xffa6654b;
  DAT_101e471e0 = 0xff93435b;
  DAT_101e471e4 = 0xff387f9c;
  DAT_101e471e8 = 0xffa3781e;
  DAT_101e471ec = 0xffffd18a;
  DAT_101e471f0 = 0xffff61f7;
  DAT_101e471f4 = 0xff5de1f2;
  DAT_101e471f8 = 0xff80eaff;
  DAT_101e471fc = 0xff32e00e;
  DAT_101e47200 = 0xff5a3c10;
  DAT_101e47204 = 0xff330b03;
  DAT_101e47208 = 0xff33031d;
  DAT_101e4720c = 0xff032433;
  DAT_101e47210 = 0xff9e8e8d;
  DAT_101e47218 = 0x4326000041900000;
  DAT_101e47220 = 0x4326000041c00000;
  FUN_10001549c(&DAT_101e47228,"spoils");
  ___cxa_atexit(FUN_1000e6204,&DAT_101e47228,0x100000000);
  FUN_10001549c(&DAT_101e47240,"chest");
  ___cxa_atexit(FUN_1000e6204,&DAT_101e47240,0x100000000);
  return;
}




long FUN_10033ba2c(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_1006421a8();
  *puVar1 = &PTR_thunk_FUN_10033b0e8_101494850;
  FUN_10064fd54(puVar1 + 0x11,1);
  *(undefined ***)(param_1 + 0x88) = &PTR_thunk_FUN_10064e2bc_101451a40;
  FUN_10064e264(param_1 + 0x150);
  thunk_FUN_100650e64(param_1 + 0x208);
  thunk_FUN_100181304(param_1 + 0x338,0);
  thunk_FUN_100181304(param_1 + 0x18f0,0);
  thunk_FUN_100181304(param_1 + 0x2ea8,0);
  FUN_10064e264(param_1 + 0x4460);
  thunk_FUN_1001c5230(param_1 + 0x4518);
  thunk_FUN_100181304(param_1 + 0x4968,0);
  FUN_10064fd54(param_1 + 0x5f20,1);
  *(undefined ***)(param_1 + 0x5f20) = &PTR_thunk_FUN_10064e2bc_101451a40;
  FUN_10064e264(param_1 + 0x5fe8);
  thunk_FUN_100650e64(param_1 + 0x60a0);
  thunk_FUN_1001a1f9c(param_1 + 0x61d0);
  thunk_FUN_1001a1f9c(param_1 + 0x78a8);
  thunk_FUN_100181304(param_1 + 0x8f80,0);
  FUN_10064e264(param_1 + 0xa538);
  thunk_FUN_1001c5230(param_1 + 0xa5f0);
  thunk_FUN_100181304(param_1 + 0xaa40,0);
  FUN_10033bb58(param_1);
  return param_1;
}




void FUN_10033bb58(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  undefined **ppuVar16;
  uint uVar17;
  undefined4 uVar18;
  int iVar19;
  undefined4 uVar20;
  int iVar21;
  undefined8 uVar22;
  char *pcVar23;
  void *local_c0;
  undefined8 uStack_b8;
  long local_b0;
  code *local_a8;
  long *plStack_a0;
  long local_98;
  undefined8 local_90;
  void *local_88;
  undefined4 local_80;
  
  plVar1 = param_1 + 0x11;
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  FUN_100642bd8(plVar1,param_1 + 0x2a,1);
  plVar2 = param_1 + 0x41;
  FUN_100642bd8(param_1 + 0x2a,plVar2,1);
  plVar3 = param_1 + 0x67;
  FUN_100642bd8(plVar1,plVar3,1);
  plVar4 = param_1 + 0x31e;
  FUN_100642bd8(plVar1,plVar4,1);
  plVar5 = param_1 + 0x5d5;
  FUN_100642bd8(plVar1,plVar5,1);
  plVar6 = param_1 + 0x88c;
  FUN_100642bd8(plVar1,plVar6,1);
  plVar7 = param_1 + 0x8a3;
  FUN_100642bd8(plVar6,plVar7,1);
  plVar8 = param_1 + 0x92d;
  FUN_100642bd8(plVar1,plVar8,1);
  plVar1 = param_1 + 0xbe4;
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  FUN_100642bd8(plVar1,param_1 + 0xbfd,1);
  plVar9 = param_1 + 0xc14;
  FUN_100642bd8(param_1 + 0xbfd,plVar9,1);
  plVar10 = param_1 + 0xc3a;
  FUN_100642bd8(plVar1,plVar10,1);
  plVar11 = param_1 + 0xf15;
  FUN_100642bd8(plVar1,plVar11,1);
  plVar12 = param_1 + 0x11f0;
  FUN_100642bd8(plVar1,plVar12,1);
  plVar13 = param_1 + 0x14a7;
  FUN_100642bd8(plVar1,plVar13,1);
  plVar14 = param_1 + 0x14be;
  FUN_100642bd8(plVar13,plVar14,1);
  plVar15 = param_1 + 0x1548;
  FUN_100642bd8(plVar1,plVar15,1);
  iVar19 = FUN_100126c88();
  ppuVar16 = &PTR_s_build___Fonts_Brandon_Regular_60_10184e208;
  if (iVar19 == 0) {
    ppuVar16 = &PTR_s_build___Fonts_Brandon_Regular_36_10184e1f0;
  }
  FUN_100651038(plVar2,*ppuVar16);
  uVar17 = *(uint *)((long)param_1 + 0x28c);
  if ((uVar17 & 0x7f80) != 0x3300) {
    *(uint *)((long)param_1 + 0x28c) = uVar17 & 0xffff8000 | uVar17 & 0x7f | 0x3300;
    FUN_1000200a0(plVar2);
  }
  uVar22 = FUN_1004e0150("MENU_DIALOG_RATE_APP_LABEL",0);
  FUN_1006513c0(plVar2,uVar22);
  FUN_100651708(0x44a28000,plVar2,1);
  FUN_100651700(plVar2,3);
  ppuVar16 = &PTR_s_build___Fonts_Brandon_Regular_60_10184e208;
  if (iVar19 == 0) {
    ppuVar16 = &PTR_s_build___Fonts_Brandon_Regular_36_10184e1f0;
  }
  FUN_100651038(plVar9,*ppuVar16);
  uVar17 = *(uint *)((long)param_1 + 0x6124);
  if ((uVar17 & 0x7f80) != 0x3300) {
    *(uint *)((long)param_1 + 0x6124) = uVar17 & 0xffff8000 | uVar17 & 0x7f | 0x3300;
    FUN_1000200a0(plVar9);
  }
  FUN_100651708(0x44a28000,plVar9,1);
  FUN_100651700(plVar9,3);
  FUN_1001816d4(0x42200000,0x44480000,0x44480000,plVar3,0,&DAT_101d91650,&DAT_10115a168,
                &DAT_101dc1cb8,0);
  FUN_100181c68(0x43020000,plVar3);
  ppuVar16 = &PTR_s_build___Fonts_Brandon_Bold_60_fo_10184e240;
  if (iVar19 == 0) {
    ppuVar16 = &PTR_s_build___Fonts_Brandon_Bold_36_fo_10184e228;
  }
  FUN_100651038(param_1 + 0x14a,*ppuVar16);
  uVar18 = DAT_101d91884;
  local_80 = DAT_101d91884;
  local_a8 = thunk_FUN_10033ccd4;
  local_90 = 0;
  local_88 = (void *)0x0;
  local_98 = 0;
  plStack_a0 = param_1;
  FUN_10001554c(param_1 + 0x68,&local_a8);
  uVar22 = FUN_1004e0150("MENU_DIALOG_RATE_APP_BUTTON_HAPPY",0);
  FUN_100181af8(plVar3,uVar22);
  FUN_100181b70(0x44340000,plVar3);
  FUN_100181bf8(0x3e99999a,plVar3,&DAT_10115a168);
  uVar17 = *(uint *)((long)param_1 + 0x3bc);
  if ((uVar17 & 0x7f80) != 0x5900) {
    *(uint *)((long)param_1 + 0x3bc) = uVar17 & 0xffff8000 | uVar17 & 0x7f | 0x5900;
    FUN_1000200a0(plVar3);
  }
  FUN_1001816d4(0x42200000,0x44480000,0x44480000,plVar4,0,&DAT_101d91650,&DAT_10115a168,
                &DAT_101dc1cb8,0);
  FUN_100181c68(0x43020000,plVar4);
  ppuVar16 = &PTR_s_build___Fonts_Brandon_Bold_60_fo_10184e240;
  if (iVar19 == 0) {
    ppuVar16 = &PTR_s_build___Fonts_Brandon_Bold_36_fo_10184e228;
  }
  FUN_100651038(param_1 + 0x401,*ppuVar16);
  local_80 = uVar18;
  local_a8 = thunk_FUN_10033cd9c;
  local_90 = 0;
  local_88 = (void *)0x0;
  local_98 = 0;
  plStack_a0 = param_1;
  FUN_10001554c(param_1 + 799,&local_a8);
  uVar22 = FUN_1004e0150("MENU_DIALOG_RATE_APP_BUTTON_CONFUSED",0);
  FUN_100181af8(plVar4,uVar22);
  FUN_100181b70(0x44340000,plVar4);
  FUN_100181bf8(0x3e99999a,plVar4,&DAT_10115a168);
  uVar17 = *(uint *)((long)param_1 + 0x1974);
  if ((uVar17 & 0x7f80) != 0x5900) {
    *(uint *)((long)param_1 + 0x1974) = uVar17 & 0xffff8000 | uVar17 & 0x7f | 0x5900;
    FUN_1000200a0(plVar4);
  }
  FUN_1001816d4(0x42200000,0x44480000,0x44480000,plVar5,0,&DAT_101d91650,&DAT_10115a168,
                &DAT_101dc1cb8,0);
  FUN_100181c68(0x43020000,plVar5);
  ppuVar16 = &PTR_s_build___Fonts_Brandon_Bold_60_fo_10184e240;
  if (iVar19 == 0) {
    ppuVar16 = &PTR_s_build___Fonts_Brandon_Bold_36_fo_10184e228;
  }
  FUN_100651038(param_1 + 0x6b8,*ppuVar16);
  local_80 = uVar18;
  local_a8 = thunk_FUN_10033ce30;
  local_90 = 0;
  local_88 = (void *)0x0;
  local_98 = 0;
  plStack_a0 = param_1;
  FUN_10001554c(param_1 + 0x5d6,&local_a8);
  uVar22 = FUN_1004e0150("MENU_DIALOG_RATE_APP_BUTTON_UNHAPPY",0);
  FUN_100181af8(plVar5,uVar22);
  FUN_100181b70(0x44340000,plVar5);
  FUN_100181bf8(0x3e99999a,plVar5,&DAT_10115a168);
  uVar17 = *(uint *)((long)param_1 + 0x2f2c);
  if ((uVar17 & 0x7f80) != 0x5900) {
    *(uint *)((long)param_1 + 0x2f2c) = uVar17 & 0xffff8000 | uVar17 & 0x7f | 0x5900;
    FUN_1000200a0(plVar5);
  }
  FUN_10064e47c(0x44af0000,0x40000000,plVar7);
  uVar17 = *(uint *)((long)param_1 + 0x459c);
  if ((uVar17 & 0x7f80) != 0x3300) {
    *(uint *)((long)param_1 + 0x459c) = uVar17 & 0xffff8000 | uVar17 & 0x7f | 0x3300;
    FUN_1000200a0(plVar7);
  }
  uVar22 = FUN_10064e3cc(plVar7);
  FUN_10064e47c(uVar22,0x41f00000,plVar6);
  FUN_1001816d4(0x42200000,0x44480000,0x44480000,plVar8,0,&DAT_101d91650,&DAT_10115a168,
                &DAT_101dc1cb8,0);
  FUN_100181c68(0x43020000,plVar8);
  ppuVar16 = &PTR_s_build___Fonts_Brandon_Bold_60_fo_10184e240;
  if (iVar19 == 0) {
    ppuVar16 = &PTR_s_build___Fonts_Brandon_Bold_36_fo_10184e228;
  }
  FUN_100651038(param_1 + 0xa10,*ppuVar16);
  local_80 = uVar18;
  local_a8 = thunk_FUN_10033cec4;
  local_90 = 0;
  local_88 = (void *)0x0;
  local_98 = 0;
  plStack_a0 = param_1;
  FUN_10001554c(param_1 + 0x92e,&local_a8);
  uVar22 = FUN_1004e0150("MENU_DIALOG_RATE_APP_BUTTON_LATER",0);
  FUN_100181af8(plVar8,uVar22);
  FUN_100181b70(0x44340000,plVar8);
  FUN_100181bf8(0x3e99999a,plVar8,&DAT_10115a168);
  uVar17 = *(uint *)((long)param_1 + 0x49ec);
  if ((uVar17 & 0x7f80) != 0x4c80) {
    *(uint *)((long)param_1 + 0x49ec) = uVar17 & 0xffff8000 | uVar17 & 0x7f | 0x4c80;
    FUN_1000200a0(plVar8);
  }
  FUN_1001816d4(0x42200000,0x44480000,0x44480000,plVar10,0,&DAT_101d91650,&DAT_10115a168,
                &DAT_101dc1cb8,0);
  FUN_100181c68(0x43020000,plVar10);
  ppuVar16 = &PTR_s_build___Fonts_Brandon_Bold_60_fo_10184e240;
  if (iVar19 == 0) {
    ppuVar16 = &PTR_s_build___Fonts_Brandon_Bold_36_fo_10184e228;
  }
  FUN_100651038(param_1 + 0xd1d,*ppuVar16);
  uVar22 = FUN_1004e0150("MENU_DIALOG_RATE_APP_BUTTON_GUIDES",0);
  FUN_100193b3c(&local_a8,&DAT_101e473e0,uVar22,1,0,0,0);
  FUN_1001a2020(plVar10,&local_a8);
  if (local_88 != (void *)0x0) {
    operator_delete__(local_88);
    local_90 = 0;
    local_88 = (void *)0x0;
  }
  if (local_98 < 0) {
    operator_delete(local_a8);
  }
  FUN_100181b70(0x44250000,plVar10);
  FUN_100181bf8(0x3e99999a,plVar10,&DAT_10115a168);
  uVar17 = *(uint *)((long)param_1 + 0x6254);
  if ((uVar17 & 0x7f80) != 0x5900) {
    *(uint *)((long)param_1 + 0x6254) = uVar17 & 0xffff8000 | uVar17 & 0x7f | 0x5900;
    FUN_1000200a0(plVar10);
  }
  local_80 = FUN_100644a94("UI::EVENT_LEAVE_APP");
  local_a8 = FUN_10033cadc;
  local_98 = 0;
  local_90 = 0;
  local_88 = (void *)0x1;
  plStack_a0 = param_1;
  FUN_10001554c(param_1 + 0xc3b,&local_a8);
  FUN_1001816d4(0x42200000,0x44480000,0x44480000,plVar11,0,&DAT_101d91650,&DAT_10115a168,
                &DAT_101dc1cb8,0);
  FUN_100181c68(0x43020000,plVar11);
  ppuVar16 = &PTR_s_build___Fonts_Brandon_Bold_60_fo_10184e240;
  if (iVar19 == 0) {
    ppuVar16 = &PTR_s_build___Fonts_Brandon_Bold_36_fo_10184e228;
  }
  FUN_100651038(param_1 + 0xff8,*ppuVar16);
  local_c0 = (void *)0x0;
  uStack_b8 = 0;
  local_b0 = 0;
  uVar20 = FUN_100126d70();
  switch(uVar20) {
  default:
    pcVar23 = "https://goo.gl/forms/on7G4V6zftpiZBBt1";
    break;
  case 1:
    pcVar23 = "https://goo.gl/forms/IkAsH5ekCSXmstff1";
    break;
  case 2:
    pcVar23 = "https://goo.gl/forms/PlUbvcgcEJh7RRlo2";
    break;
  case 3:
    pcVar23 = "https://goo.gl/forms/ALgkhhsbxZ5cls0B2";
    break;
  case 4:
    pcVar23 = "https://goo.gl/forms/5Jp8i47ycRMkPJeO2";
    break;
  case 5:
    pcVar23 = "https://goo.gl/forms/RLeCT7pizcP3XS9D3";
    break;
  case 6:
    pcVar23 = "https://goo.gl/forms/YRyzBMb9X12El7um1";
    break;
  case 8:
    pcVar23 = "https://goo.gl/forms/FKoiFLJDvAPVwhiw1";
    break;
  case 9:
  case 10:
    pcVar23 = "https://goo.gl/forms/UHyPpvgUGgWB3JQH2";
    break;
  case 0xb:
    pcVar23 = "https://goo.gl/forms/N8QAjNHHi8H4dVnw1";
    break;
  case 0xd:
    pcVar23 = "https://goo.gl/forms/H4Jka9DzF5c7lOFd2";
    break;
  case 0xe:
    pcVar23 = "https://goo.gl/forms/kSt0nCO3awZMBauj1";
    break;
  case 0x10:
    pcVar23 = "https://goo.gl/forms/WpQJhztHODVdp3VO2";
  }
  FUN_10001549c(&local_a8,pcVar23);
  std::string::operator=((string *)&local_c0,(string *)&local_a8);
  if (local_98 < 0) {
    operator_delete(local_a8);
  }
  iVar21 = FUN_10012ced4();
  if (iVar21 != 0) {
    FUN_10001549c(&local_a8,"http://vg.163.com/bbs");
    std::string::operator=((string *)&local_c0,(string *)&local_a8);
    if (local_98 < 0) {
      operator_delete(local_a8);
    }
  }
  uVar22 = FUN_1004e0150("MENU_DIALOG_RATE_APP_BUTTON_CONTACT",0);
  FUN_100193b3c(&local_a8,&local_c0,uVar22,1,0,0,0);
  FUN_1001a2020(plVar11,&local_a8);
  if (local_88 != (void *)0x0) {
    operator_delete__(local_88);
    local_90 = 0;
    local_88 = (void *)0x0;
  }
  if (local_98 < 0) {
    operator_delete(local_a8);
  }
  FUN_100181b70(0x44250000,plVar11);
  FUN_100181bf8(0x3e99999a,plVar11,&DAT_10115a168);
  uVar17 = *(uint *)((long)param_1 + 0x792c);
  if ((uVar17 & 0x7f80) != 0x5900) {
    *(uint *)((long)param_1 + 0x792c) = uVar17 & 0xffff8000 | uVar17 & 0x7f | 0x5900;
    FUN_1000200a0(plVar11);
  }
  local_80 = FUN_100644a94("UI::EVENT_LEAVE_APP");
  local_a8 = FUN_10033cadc;
  local_90 = 0;
  local_88 = (void *)0x0;
  local_98 = 0;
  plStack_a0 = param_1;
  FUN_10001554c(param_1 + 0xf16,&local_a8);
  FUN_1001816d4(0x42200000,0x44480000,0x44480000,plVar12,0,&DAT_101d91650,&DAT_10115a168,
                &DAT_101dc1cb8,0);
  FUN_100181c68(0x43020000,plVar12);
  FUN_100181bf8(0x3e99999a,plVar12,&DAT_10115a168);
  ppuVar16 = &PTR_s_build___Fonts_Brandon_Bold_60_fo_10184e240;
  if (iVar19 == 0) {
    ppuVar16 = &PTR_s_build___Fonts_Brandon_Bold_36_fo_10184e228;
  }
  FUN_100651038(param_1 + 0x12d3,*ppuVar16);
  uVar22 = FUN_1004e0150("MENU_DIALOG_RATE_APP_BUTTON_REVIEW",0);
  FUN_100181af8(plVar12,uVar22);
  FUN_100181b70(0x44340000,plVar12);
  uVar17 = *(uint *)((long)param_1 + 0x9004);
  if ((uVar17 & 0x7f80) != 0x5900) {
    *(uint *)((long)param_1 + 0x9004) = uVar17 & 0xffff8000 | uVar17 & 0x7f | 0x5900;
    FUN_1000200a0(plVar12);
  }
  local_80 = uVar18;
  local_a8 = thunk_FUN_10033cf00;
  local_90 = 0;
  local_88 = (void *)0x0;
  local_98 = 0;
  plStack_a0 = param_1;
  FUN_10001554c(param_1 + 0x11f1,&local_a8);
  FUN_1001816d4(0x42200000,0x44480000,0x44480000,plVar15,0,&DAT_101d91650,&DAT_10115a168,
                &DAT_101dc1cb8,0);
  FUN_100181c68(0x43020000,plVar15);
  ppuVar16 = &PTR_s_build___Fonts_Brandon_Bold_60_fo_10184e240;
  if (iVar19 == 0) {
    ppuVar16 = &PTR_s_build___Fonts_Brandon_Bold_36_fo_10184e228;
  }
  FUN_100651038(param_1 + 0x162b,*ppuVar16);
  local_80 = uVar18;
  local_a8 = FUN_10033cae8;
  local_90 = 0;
  local_88 = (void *)0x0;
  local_98 = 0;
  plStack_a0 = param_1;
  FUN_10001554c(param_1 + 0x1549,&local_a8);
  uVar22 = FUN_1004e0150("MENU_DIALOG_RATE_APP_BUTTON_LATER",0);
  FUN_100181af8(plVar15,uVar22);
  FUN_100181b70(0x44340000,plVar15);
  FUN_100181bf8(0x3e99999a,plVar15,&DAT_10115a168);
  uVar17 = *(uint *)((long)param_1 + 0xaac4);
  if ((uVar17 & 0x7f80) != 0x4c80) {
    *(uint *)((long)param_1 + 0xaac4) = uVar17 & 0xffff8000 | uVar17 & 0x7f | 0x4c80;
    FUN_1000200a0(plVar15);
  }
  FUN_10064e47c(0x44af0000,0x40000000,plVar14);
  uVar17 = *(uint *)((long)param_1 + 0xa674);
  if ((uVar17 & 0x7f80) != 0x3300) {
    *(uint *)((long)param_1 + 0xa674) = uVar17 & 0xffff8000 | uVar17 & 0x7f | 0x3300;
    FUN_1000200a0(plVar14);
  }
  uVar22 = FUN_10064e3cc(plVar14);
  FUN_10064e47c(uVar22,0x41f00000,plVar13);
  FUN_10033c89c(param_1);
  if (local_b0 < 0) {
    operator_delete(local_c0);
  }
  return;
}




long thunk_FUN_10033ba2c(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_1006421a8();
  *puVar1 = &PTR_thunk_FUN_10033b0e8_101494850;
  FUN_10064fd54(puVar1 + 0x11,1);
  *(undefined ***)(param_1 + 0x88) = &PTR_thunk_FUN_10064e2bc_101451a40;
  FUN_10064e264(param_1 + 0x150);
  thunk_FUN_100650e64(param_1 + 0x208);
  thunk_FUN_100181304(param_1 + 0x338,0);
  thunk_FUN_100181304(param_1 + 0x18f0,0);
  thunk_FUN_100181304(param_1 + 0x2ea8,0);
  FUN_10064e264(param_1 + 0x4460);
  thunk_FUN_1001c5230(param_1 + 0x4518);
  thunk_FUN_100181304(param_1 + 0x4968,0);
  FUN_10064fd54(param_1 + 0x5f20,1);
  *(undefined ***)(param_1 + 0x5f20) = &PTR_thunk_FUN_10064e2bc_101451a40;
  FUN_10064e264(param_1 + 0x5fe8);
  thunk_FUN_100650e64(param_1 + 0x60a0);
  thunk_FUN_1001a1f9c(param_1 + 0x61d0);
  thunk_FUN_1001a1f9c(param_1 + 0x78a8);
  thunk_FUN_100181304(param_1 + 0x8f80,0);
  FUN_10064e264(param_1 + 0xa538);
  thunk_FUN_1001c5230(param_1 + 0xa5f0);
  thunk_FUN_100181304(param_1 + 0xaa40,0);
  FUN_10033bb58(param_1);
  return param_1;
}




void FUN_10033c89c(undefined1 param_1 [16],float param_2,long param_3)

{
  long lVar1;
  float fVar2;
  undefined8 uVar3;
  float fVar4;
  undefined1 auStack_60 [16];
  
  lVar1 = param_3 + 0x208;
  uVar3 = FUN_100651184(lVar1);
  FUN_100651184(lVar1);
  param_2 = param_2 + 20.0;
  FUN_10064e47c(uVar3,param_3 + 0x150);
  FUN_10064e3cc(param_3 + 0x150);
  fVar2 = param_2;
  FUN_100651184(lVar1);
  fVar2 = (param_2 - fVar2) * 0.5;
  fVar4 = *(float *)(param_3 + 0x24c);
  if (fVar4 != fVar2) {
    *(float *)(param_3 + 0x24c) = fVar2;
    FUN_1000200a0(lVar1);
  }
  FUN_10064e3cc(param_3 + 0x4460);
  fVar2 = fVar4;
  FUN_10064e3cc(param_3 + 0x4518);
  fVar2 = (fVar4 - fVar2) * 0.5;
  if (*(float *)(param_3 + 0x455c) != fVar2) {
    *(float *)(param_3 + 0x455c) = fVar2;
    FUN_1000200a0(param_3 + 0x4518);
  }
  lVar1 = param_3 + 0x88;
  fVar4 = 0.0;
  FUN_10064fc74(0,0,0x41200000,auStack_60);
  FUN_100650064(lVar1,auStack_60);
  (**(code **)(*(long *)(param_3 + 0x88) + 0x90))(lVar1);
  FUN_10064ff6c(0x3f000000,lVar1,0);
  lVar1 = param_3 + 0x60a0;
  uVar3 = FUN_100651184(lVar1);
  FUN_100651184(lVar1);
  fVar4 = fVar4 + 20.0;
  FUN_10064e47c(uVar3,param_3 + 0x5fe8);
  FUN_10064e3cc(param_3 + 0x5fe8);
  fVar2 = fVar4;
  FUN_100651184(lVar1);
  fVar2 = (fVar4 - fVar2) * 0.5;
  fVar4 = *(float *)(param_3 + 0x60e4);
  if (fVar4 != fVar2) {
    *(float *)(param_3 + 0x60e4) = fVar2;
    FUN_1000200a0(lVar1);
  }
  FUN_10064e3cc(param_3 + 0xa538);
  fVar2 = fVar4;
  FUN_10064e3cc(param_3 + 0xa5f0);
  fVar2 = (fVar4 - fVar2) * 0.5;
  if (*(float *)(param_3 + 0xa634) != fVar2) {
    *(float *)(param_3 + 0xa634) = fVar2;
    FUN_1000200a0(param_3 + 0xa5f0);
  }
  lVar1 = param_3 + 0x5f20;
  FUN_10064fc74(0,0,0x41200000,auStack_60);
  FUN_100650064(lVar1,auStack_60);
  (**(code **)(*(long *)(param_3 + 0x5f20) + 0x90))(lVar1);
  FUN_10064ff6c(0x3f000000,lVar1,0);
  return;
}




void thunk_FUN_10033ccd4(long param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  iVar1 = FUN_10052b298();
  if (iVar1 != 0) {
    thunk_FUN_100529844();
    FUN_10033cc84(param_1);
    lVar2 = FUN_10002f320();
    FUN_10033ae84(*(undefined8 *)(lVar2 + 0xc6c8),0);
    return;
  }
  uVar3 = FUN_1004e0150("MENU_DIALOG_RATE_APP_FORM_HAPPY_LABEL",0);
  FUN_1006513c0(param_1 + 0x60a0,uVar3);
  *(uint *)(param_1 + 0x6254) = *(uint *)(param_1 + 0x6254) & 0xfffffffb;
  *(uint *)(param_1 + 0x792c) = *(uint *)(param_1 + 0x792c) & 0xfffffffb;
  *(uint *)(param_1 + 0x9004) = *(uint *)(param_1 + 0x9004) | 4;
  lVar2 = FUN_10002f320();
  FUN_10033ae7c(*(undefined8 *)(lVar2 + 0xc6c8),1);
  FUN_10033c89c(param_1);
  FUN_10033cb0c(param_1);
  return;
}




void thunk_FUN_10033cd9c(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = FUN_1004e0150("MENU_DIALOG_RATE_APP_FORM_CONFUSED_LABEL",0);
  FUN_1006513c0(param_1 + 0x60a0,uVar1);
  *(uint *)(param_1 + 0x9004) = *(uint *)(param_1 + 0x9004) & 0xfffffffb;
  *(uint *)(param_1 + 0x6254) = *(uint *)(param_1 + 0x6254) | 4;
  *(uint *)(param_1 + 0x792c) = *(uint *)(param_1 + 0x792c) | 4;
  lVar2 = FUN_10002f320();
  FUN_10033ae7c(*(undefined8 *)(lVar2 + 0xc6c8),2);
  FUN_10033c89c(param_1);
  FUN_10033cb0c(param_1);
  return;
}




void thunk_FUN_10033ce30(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = FUN_1004e0150("MENU_DIALOG_RATE_APP_FORM_UNHAPPY_LABEL",0);
  FUN_1006513c0(param_1 + 0x60a0,uVar1);
  *(uint *)(param_1 + 0x6254) = *(uint *)(param_1 + 0x6254) & 0xfffffffb;
  *(uint *)(param_1 + 0x9004) = *(uint *)(param_1 + 0x9004) & 0xfffffffb;
  *(uint *)(param_1 + 0x792c) = *(uint *)(param_1 + 0x792c) | 4;
  lVar2 = FUN_10002f320();
  FUN_10033ae7c(*(undefined8 *)(lVar2 + 0xc6c8),3);
  FUN_10033c89c(param_1);
  FUN_10033cb0c(param_1);
  return;
}




void thunk_FUN_10033cec4(void)

{
  long lVar1;
  
  FUN_10033cc84();
  lVar1 = FUN_10002f320();
  FUN_10033ae7c(*(undefined8 *)(lVar1 + 0xc6c8),4);
  lVar1 = FUN_10002f320();
  FUN_10033ae84(*(undefined8 *)(lVar1 + 0xc6c8),3);
  return;
}




void FUN_10033cadc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  FUN_10033cf3c(param_1,param_2,param_5);
  return;
}




void thunk_FUN_10033cf00(undefined8 param_1)

{
  long lVar1;
  
  FUN_10012cf64();
  FUN_10052b410();
  FUN_10033cc84(param_1);
  lVar1 = FUN_10002f320();
  FUN_10033ae84(*(undefined8 *)(lVar1 + 0xc6c8),0);
  return;
}




void FUN_10033cae8(void)

{
  long lVar1;
  
  FUN_10033cc84();
  lVar1 = FUN_10002f320();
  FUN_10033ae84(*(undefined8 *)(lVar1 + 0xc6c8),3);
  return;
}




void FUN_10033cb0c(long param_1)

{
  long lVar1;
  uint *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ushort uVar5;
  uint uVar6;
  ushort *puVar7;
  
  uVar3 = FUN_100640840(0,0x3e4ccccd,FUN_10001f218);
  lVar1 = DAT_101dbd2f8;
  uVar5 = *(ushort *)(DAT_101dbd2f8 + 0x20010);
  if ((ulong)uVar5 == 0xffff) {
    puVar7 = (ushort *)0x0;
  }
  else {
    puVar7 = (ushort *)(DAT_101dbd2f8 + (ulong)uVar5 * 0x40 + 0x10);
    if (uVar5 == *(ushort *)(DAT_101dbd2f8 + 0x20012)) {
      uVar5 = 0xffff;
    }
    else {
      uVar5 = *puVar7;
    }
    *(ushort *)(DAT_101dbd2f8 + 0x20010) = uVar5;
    *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
    FUN_10063ee9c(puVar7);
    *(undefined ***)puVar7 = &PTR_thunk_FUN_10063eeb4_1014a5338;
    *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
  }
  lVar1 = param_1 + 0x88;
  FUN_100642324(lVar1);
  FUN_100642b14(lVar1,uVar3);
  FUN_100642b14(lVar1,puVar7);
  lVar1 = param_1 + 0x5f20;
  puVar2 = (uint *)(param_1 + 0x5fa4);
  uVar6 = *puVar2;
  if ((uVar6 & 0x7f80) != 0) {
    *puVar2 = uVar6 & 0xffff807f;
    FUN_1000200a0(lVar1);
    uVar6 = *puVar2;
  }
  *puVar2 = uVar6 | 4;
  uVar3 = FUN_10064081c(0x3e4ccccd);
  uVar4 = FUN_100640840(0x3f800000,0x3ecccccd,FUN_10001f160);
  FUN_100642324(lVar1);
  FUN_100642b14(lVar1,uVar3);
  FUN_100642b14(lVar1,uVar4);
  FUN_10033c89c(param_1);
  return;
}




void FUN_10033cc84(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_40 [32];
  
  uVar1 = FUN_100644a94("UI::EVENT_MENU_CLOSE_PLATFORM_NOTIFICATION");
  FUN_100644aec(auStack_40,uVar1,0);
  FUN_100644c34(param_1,auStack_40,1);
  return;
}




void FUN_10033ccd4(long param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  iVar1 = FUN_10052b298();
  if (iVar1 != 0) {
    thunk_FUN_100529844();
    FUN_10033cc84(param_1);
    lVar2 = FUN_10002f320();
    FUN_10033ae84(*(undefined8 *)(lVar2 + 0xc6c8),0);
    return;
  }
  uVar3 = FUN_1004e0150("MENU_DIALOG_RATE_APP_FORM_HAPPY_LABEL",0);
  FUN_1006513c0(param_1 + 0x60a0,uVar3);
  *(uint *)(param_1 + 0x6254) = *(uint *)(param_1 + 0x6254) & 0xfffffffb;
  *(uint *)(param_1 + 0x792c) = *(uint *)(param_1 + 0x792c) & 0xfffffffb;
  *(uint *)(param_1 + 0x9004) = *(uint *)(param_1 + 0x9004) | 4;
  lVar2 = FUN_10002f320();
  FUN_10033ae7c(*(undefined8 *)(lVar2 + 0xc6c8),1);
  FUN_10033c89c(param_1);
  FUN_10033cb0c(param_1);
  return;
}




void FUN_10033cd9c(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = FUN_1004e0150("MENU_DIALOG_RATE_APP_FORM_CONFUSED_LABEL",0);
  FUN_1006513c0(param_1 + 0x60a0,uVar1);
  *(uint *)(param_1 + 0x9004) = *(uint *)(param_1 + 0x9004) & 0xfffffffb;
  *(uint *)(param_1 + 0x6254) = *(uint *)(param_1 + 0x6254) | 4;
  *(uint *)(param_1 + 0x792c) = *(uint *)(param_1 + 0x792c) | 4;
  lVar2 = FUN_10002f320();
  FUN_10033ae7c(*(undefined8 *)(lVar2 + 0xc6c8),2);
  FUN_10033c89c(param_1);
  FUN_10033cb0c(param_1);
  return;
}




void FUN_10033ce30(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = FUN_1004e0150("MENU_DIALOG_RATE_APP_FORM_UNHAPPY_LABEL",0);
  FUN_1006513c0(param_1 + 0x60a0,uVar1);
  *(uint *)(param_1 + 0x6254) = *(uint *)(param_1 + 0x6254) & 0xfffffffb;
  *(uint *)(param_1 + 0x9004) = *(uint *)(param_1 + 0x9004) & 0xfffffffb;
  *(uint *)(param_1 + 0x792c) = *(uint *)(param_1 + 0x792c) | 4;
  lVar2 = FUN_10002f320();
  FUN_10033ae7c(*(undefined8 *)(lVar2 + 0xc6c8),3);
  FUN_10033c89c(param_1);
  FUN_10033cb0c(param_1);
  return;
}




void FUN_10033cec4(void)

{
  long lVar1;
  
  FUN_10033cc84();
  lVar1 = FUN_10002f320();
  FUN_10033ae7c(*(undefined8 *)(lVar1 + 0xc6c8),4);
  lVar1 = FUN_10002f320();
  FUN_10033ae84(*(undefined8 *)(lVar1 + 0xc6c8),3);
  return;
}




void FUN_10033cf00(undefined8 param_1)

{
  long lVar1;
  
  FUN_10012cf64();
  FUN_10052b410();
  FUN_10033cc84(param_1);
  lVar1 = FUN_10002f320();
  FUN_10033ae84(*(undefined8 *)(lVar1 + 0xc6c8),0);
  return;
}




void FUN_10033cf3c(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  undefined4 uVar2;
  
  FUN_10033cc84();
  lVar1 = FUN_10002f320();
  uVar2 = 1;
  if ((param_3 & 1) == 0) {
    uVar2 = 2;
  }
  FUN_10033ae84(*(undefined8 *)(lVar1 + 0xc6c8),uVar2);
  return;
}




void FUN_10033cf74(void)

{
  DAT_101e47258 = 0xff;
  DAT_101e4725a = 0xffff;
  DAT_101e4725c = 0xffff;
  DAT_101e4725e = 0xffbc9c44;
  DAT_101e47262 = 0xff1166f2;
  DAT_101e47266 = 0xffe0e0e0;
  DAT_101e4726a = 0xffa0a0a0;
  DAT_101e4726e = 0xff8c8c8c;
  DAT_101e47272 = 0xff322213;
  DAT_101e47276 = 0xff091911;
  DAT_101e4727a = 0xff170c19;
  DAT_101e4727e = 0xff241a14;
  DAT_101e47282 = 0xff14171c;
  DAT_101e47286 = 0xff221911;
  DAT_101e4728a = 0xff1a1416;
  DAT_101e4728e = 0xff121414;
  DAT_101e47292 = 0xff1a1809;
  DAT_101e47296 = 0xff141414;
  DAT_101e4729a = 0xff141414;
  DAT_101e4729e = 0xff2929c0;
  DAT_101e472a2 = 0xff283082;
  DAT_101e472a6 = 0xff5262cc;
  DAT_101e472aa = 0xff283082;
  DAT_101e472ae = 0xff5262cc;
  DAT_101e472b2 = 0xff745c42;
  DAT_101e472b6 = 0xff184155;
  DAT_101e472ba = 0xff92665e;
  DAT_101e472be = 0xffbc9c44;
  DAT_101e472c2 = 0xffbbae56;
  DAT_101e472c6 = 0xff8b7b01;
  DAT_101e472ca = 0xff90b3ef;
  DAT_101e472ce = 0xff728ebe;
  DAT_101e472d2 = 0xff19459d;
  DAT_101e472d6 = 0xff9d877b;
  DAT_101e472da = 0xffcbb1a3;
  DAT_101e472de = 0xff3f6fb5;
  DAT_101e472e2 = 0xffc5c5c5;
  DAT_101e472e6 = 0xff4fc1f1;
  DAT_101e472ea = 0xff606060;
  DAT_101e472ee = 0xffc5ff7b;
  DAT_101e472f2 = 0xff5271eb;
  DAT_101e472f6 = 0xfffae076;
  DAT_101e472fa = 0xff3ac8f6;
  DAT_101e472fe = 0xffaaaaaa;
  DAT_101e47302 = 0xffe19400;
  DAT_101e47306 = 0xffe19400;
  DAT_101e4730a = 0xffe550b2;
  DAT_101e4730e = 0xfff22ae8;
  DAT_101e47312 = 0xff005ae1;
  DAT_101e47316 = 0xff1addfa;
  DAT_101e4731a = 0xff2424b3;
  DAT_101e4731e = 0xff2424b3;
  DAT_101e47322 = 0xff646464;
  DAT_101e47326 = 0xff92665e;
  DAT_101e4732a = 0xff646037;
  DAT_101e47334 = 0xff1111a1;
  DAT_101e4733c = 0xffc8c8c8;
  DAT_101e47338 = 0xff321ee1;
  DAT_101e47340 = 0xff321ee1;
  DAT_101e4734c = 0xff6259b3;
  DAT_101e47350 = 0xff506e73;
  DAT_101e47330 = 0xffffffff;
  DAT_101e47354 = 0xff9dbf86;
  DAT_101e47344 = 0xff7fe801;
  DAT_101e47358 = 0xffa35244;
  DAT_101e47348 = 0xffffffff;
  DAT_101e4735c = 0xffca828e;
  DAT_101e47360 = 0xffa6a6a6;
  DAT_101e47364 = 0xffa6a6a6;
  DAT_101e47368 = 0xffffffff;
  DAT_101e4736c = 0xff88ea2f;
  DAT_101e47370 = 0xff8c8c8c;
  DAT_101e47374 = 0xffffb400;
  DAT_101e47378 = 0xffff00ff;
  DAT_101e4737c = 0xff00aded;
  DAT_101e47380 = 0xff33d3ff;
  DAT_101e47384 = 0xff7fe801;
  DAT_101e47388 = 0xff282828;
  DAT_101e4738c = 0xfff0f0f0;
  DAT_101e47390 = 0xffa4781e;
  DAT_101e47394 = 0xffa6654b;
  DAT_101e47398 = 0xff93435b;
  DAT_101e4739c = 0xff387f9c;
  DAT_101e473a0 = 0xffa3781e;
  DAT_101e473a4 = 0xffffd18a;
  DAT_101e473a8 = 0xffff61f7;
  DAT_101e473ac = 0xff5de1f2;
  DAT_101e473b0 = 0xff80eaff;
  DAT_101e473b4 = 0xff32e00e;
  DAT_101e473b8 = 0xff5a3c10;
  DAT_101e473bc = 0xff330b03;
  DAT_101e473c0 = 0xff33031d;
  DAT_101e473c4 = 0xff032433;
  DAT_101e473c8 = 0xff9e8e8d;
  DAT_101e473d0 = 0x4326000041900000;
  DAT_101e473d8 = 0x4326000041c00000;
  FUN_10001549c(&DAT_101e473e0,"http://www.vainglorygame.com/academy/");
  ___cxa_atexit(FUN_1000e6204,&DAT_101e473e0,0x100000000);
  return;
}




undefined8 * FUN_10033d68c(void)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  ushort uVar5;
  
  lVar2 = DAT_101e473f8;
  uVar5 = *(ushort *)(DAT_101e473f8 + 0x109400);
  if ((ulong)uVar5 != 0xffff) {
    lVar4 = DAT_101e473f8 + (ulong)uVar5 * 0x28;
    if (uVar5 == *(ushort *)(DAT_101e473f8 + 0x109402)) {
      uVar5 = 0xffff;
    }
    else {
      uVar5 = *(ushort *)(lVar4 + 0x2e800);
    }
    *(ushort *)(DAT_101e473f8 + 0x109400) = uVar5;
    *(int *)(lVar2 + 0x109404) = *(int *)(lVar2 + 0x109404) + 1;
    puVar3 = (undefined8 *)(lVar4 + 0x2e807U & 0xfffffffffffffff8);
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = 0;
    *puVar3 = &PTR_FUN_1014949b0;
    uVar1 = *(int *)(lVar2 + 0x109410) + 1;
    *(uint *)(lVar2 + 0x109410) = uVar1;
    if (*(uint *)(lVar2 + 0x109414) < uVar1) {
      *(uint *)(lVar2 + 0x109414) = uVar1;
    }
    return puVar3;
  }
  return (undefined8 *)0x0;
}




void FUN_10033d72c(long param_1,undefined8 *param_2)

{
  ushort uVar1;
  short sVar2;
  int iVar3;
  
  (**(code **)*param_2)(param_2);
  *(int *)(param_1 + 0x2e7e0) = *(int *)(param_1 + 0x2e7e0) + -1;
  iVar3 = (int)(param_1 + 0x10);
  if (*(short *)(param_1 + 0x2e7d0) == -1) {
    sVar2 = (short)((uint)((int)param_2 - iVar3) >> 3) * -0xf0f;
    *(short *)(param_1 + 0x2e7d2) = sVar2;
    *(short *)(param_1 + 0x2e7d0) = sVar2;
  }
  else {
    uVar1 = *(ushort *)(param_1 + 0x2e7d2);
    sVar2 = (short)((uint)((int)param_2 - iVar3) >> 3) * -0xf0f;
    *(short *)(param_1 + 0x2e7d2) = sVar2;
    *(short *)(param_1 + 0x10 + (ulong)uVar1 * 0x88) = sVar2;
  }
  *(int *)(param_1 + 0x2e7d4) = *(int *)(param_1 + 0x2e7d4) + -1;
  return;
}




void FUN_10033d7d8(long param_1,undefined8 *param_2)

{
  ushort uVar1;
  short sVar2;
  int iVar3;
  
  (**(code **)*param_2)(param_2);
  *(int *)(param_1 + 0xdac20) = *(int *)(param_1 + 0xdac20) + -1;
  iVar3 = (int)(param_1 + 0x10);
  if (*(short *)(param_1 + 0xdac10) == -1) {
    sVar2 = (short)((uint)((int)param_2 - iVar3) >> 3) * -0x3333;
    *(short *)(param_1 + 0xdac12) = sVar2;
    *(short *)(param_1 + 0xdac10) = sVar2;
  }
  else {
    uVar1 = *(ushort *)(param_1 + 0xdac12);
    sVar2 = (short)((uint)((int)param_2 - iVar3) >> 3) * -0x3333;
    *(short *)(param_1 + 0xdac12) = sVar2;
    *(short *)(param_1 + 0x10 + (ulong)uVar1 * 0x28) = sVar2;
  }
  *(int *)(param_1 + 0xdac14) = *(int *)(param_1 + 0xdac14) + -1;
  return;
}




void FUN_10033d884(undefined8 param_1)

{
  FUN_10033d8a0(DAT_101e473f8 + 0x116630,param_1);
  return;
}




void FUN_10033d8a0(long param_1,long *param_2)

{
  ushort uVar1;
  short sVar2;
  int iVar3;
  
  (**(code **)(*param_2 + 0x30))(param_2);
  *(int *)(param_1 + 0x7aa0) = *(int *)(param_1 + 0x7aa0) + -1;
  iVar3 = (int)(param_1 + 0x10);
  if (*(short *)(param_1 + 0x7a90) == -1) {
    sVar2 = (short)((uint)((int)param_2 - iVar3) >> 4) * 0x6db7;
    *(short *)(param_1 + 0x7a92) = sVar2;
    *(short *)(param_1 + 0x7a90) = sVar2;
  }
  else {
    uVar1 = *(ushort *)(param_1 + 0x7a92);
    sVar2 = (short)((uint)((int)param_2 - iVar3) >> 4) * 0x6db7;
    *(short *)(param_1 + 0x7a92) = sVar2;
    *(short *)(param_1 + 0x10 + (ulong)uVar1 * 0x70) = sVar2;
  }
  *(int *)(param_1 + 0x7a94) = *(int *)(param_1 + 0x7a94) + -1;
  return;
}




ushort * FUN_10033d948(void)

{
  int *piVar1;
  long lVar2;
  ushort *puVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  ushort uVar7;
  
  lVar2 = DAT_101e473f8;
  piVar1 = (int *)(DAT_101e473f8 + 0x11e0e0);
  uVar7 = *(ushort *)(DAT_101e473f8 + 0x116620);
  uVar5 = (ulong)uVar7;
  if (uVar5 == 0xffff) {
    puVar3 = (ushort *)0x0;
    iVar4 = *(int *)(DAT_101e473f8 + 0x116624);
  }
  else {
    lVar6 = DAT_101e473f8 + 0x109420;
    puVar3 = (ushort *)(lVar6 + uVar5 * 0x30);
    if (uVar7 == *(ushort *)(DAT_101e473f8 + 0x116622)) {
      uVar7 = 0xffff;
    }
    else {
      uVar7 = *puVar3;
    }
    *(ushort *)(DAT_101e473f8 + 0x116620) = uVar7;
    lVar6 = lVar6 + uVar5 * 0x30;
    *(undefined8 *)(lVar6 + 8) = 0;
    *(undefined8 *)(lVar6 + 0x10) = 0;
    *(undefined4 *)(lVar6 + 0x18) = 0;
    *(undefined ***)puVar3 = &PTR_thunk_FUN_10033eb8c_1014949d8;
    *(undefined8 *)(lVar6 + 0x20) = 0;
    *(undefined8 *)(lVar6 + 0x28) = 0;
    iVar4 = *(int *)(lVar2 + 0x116624) + 1;
    *(int *)(lVar2 + 0x116624) = iVar4;
  }
  if (*piVar1 < iVar4) {
    *piVar1 = iVar4;
  }
  return puVar3;
}




void FUN_10033d9f4(undefined8 *param_1)

{
  short *psVar1;
  long lVar2;
  ushort uVar3;
  short sVar4;
  long lVar5;
  int iVar6;
  
  lVar5 = DAT_101e473f8;
  psVar1 = (short *)(DAT_101e473f8 + 0x116620);
  lVar2 = DAT_101e473f8 + 0x109420;
  (**(code **)*param_1)();
  iVar6 = (int)lVar2;
  if (*psVar1 == -1) {
    sVar4 = (short)((uint)((int)param_1 - iVar6) >> 4) * -0x5555;
    *(short *)(lVar5 + 0x116622) = sVar4;
    *psVar1 = sVar4;
  }
  else {
    uVar3 = *(ushort *)(lVar5 + 0x116622);
    sVar4 = (short)((uint)((int)param_1 - iVar6) >> 4) * -0x5555;
    *(short *)(lVar5 + 0x116622) = sVar4;
    *(short *)(lVar2 + (ulong)uVar3 * 0x30) = sVar4;
  }
  *(int *)(lVar5 + 0x116624) = *(int *)(lVar5 + 0x116624) + -1;
  return;
}




undefined8 * FUN_10033da9c(void)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  ushort uVar5;
  
  lVar2 = DAT_101e473f8;
  uVar5 = *(ushort *)(DAT_101e473f8 + 0x2e7d0);
  if ((ulong)uVar5 != 0xffff) {
    lVar4 = DAT_101e473f8 + (ulong)uVar5 * 0x88;
    if (uVar5 == *(ushort *)(DAT_101e473f8 + 0x2e7d2)) {
      uVar5 = 0xffff;
    }
    else {
      uVar5 = *(ushort *)(lVar4 + 0x10);
    }
    *(ushort *)(DAT_101e473f8 + 0x2e7d0) = uVar5;
    *(int *)(lVar2 + 0x2e7d4) = *(int *)(lVar2 + 0x2e7d4) + 1;
    puVar3 = (undefined8 *)(lVar4 + 0x17U & 0xfffffffffffffff8);
    puVar3[1] = 0;
    puVar3[2] = 0;
    *puVar3 = 0;
    *puVar3 = &PTR_FUN_101494a18;
    puVar3[2] = &PTR_FUN_101494a68;
    uVar1 = *(int *)(lVar2 + 0x2e7e0) + 1;
    *(uint *)(lVar2 + 0x2e7e0) = uVar1;
    if (*(uint *)(lVar2 + 0x2e7e4) < uVar1) {
      *(uint *)(lVar2 + 0x2e7e4) = uVar1;
    }
    return puVar3;
  }
  return (undefined8 *)0x0;
}




undefined8 * FUN_10033db40(void)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  ushort uVar5;
  
  lVar2 = DAT_101e473f8;
  uVar5 = *(ushort *)(DAT_101e473f8 + 0x2e7d0);
  if ((ulong)uVar5 != 0xffff) {
    lVar4 = DAT_101e473f8 + (ulong)uVar5 * 0x88;
    if (uVar5 == *(ushort *)(DAT_101e473f8 + 0x2e7d2)) {
      uVar5 = 0xffff;
    }
    else {
      uVar5 = *(ushort *)(lVar4 + 0x10);
    }
    *(ushort *)(DAT_101e473f8 + 0x2e7d0) = uVar5;
    *(int *)(lVar2 + 0x2e7d4) = *(int *)(lVar2 + 0x2e7d4) + 1;
    puVar3 = (undefined8 *)(lVar4 + 0x17U & 0xfffffffffffffff8);
    puVar3[1] = 0;
    puVar3[2] = 0;
    *puVar3 = 0;
    *puVar3 = &PTR_FUN_101494ae0;
    puVar3[2] = &PTR_FUN_101494a68;
    uVar1 = *(int *)(lVar2 + 0x2e7e0) + 1;
    *(uint *)(lVar2 + 0x2e7e0) = uVar1;
    if (*(uint *)(lVar2 + 0x2e7e4) < uVar1) {
      *(uint *)(lVar2 + 0x2e7e4) = uVar1;
    }
    return puVar3;
  }
  return (undefined8 *)0x0;
}




undefined8 FUN_10033dbe4(void)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  ushort uVar6;
  
  lVar2 = DAT_101e473f8;
  uVar6 = *(ushort *)(DAT_101e473f8 + 0x2e7d0);
  if ((ulong)uVar6 == 0xffff) {
    uVar4 = 0;
  }
  else {
    lVar5 = DAT_101e473f8 + (ulong)uVar6 * 0x88;
    if (uVar6 == *(ushort *)(DAT_101e473f8 + 0x2e7d2)) {
      uVar6 = 0xffff;
    }
    else {
      uVar6 = *(ushort *)(lVar5 + 0x10);
    }
    *(ushort *)(DAT_101e473f8 + 0x2e7d0) = uVar6;
    *(int *)(lVar2 + 0x2e7d4) = *(int *)(lVar2 + 0x2e7d4) + 1;
    puVar3 = (undefined8 *)(lVar5 + 0x17U & 0xfffffffffffffff8);
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = 0;
    uVar4 = FUN_100475240();
    uVar1 = *(int *)(lVar2 + 0x2e7e0) + 1;
    *(uint *)(lVar2 + 0x2e7e0) = uVar1;
    if (*(uint *)(lVar2 + 0x2e7e4) < uVar1) {
      *(uint *)(lVar2 + 0x2e7e4) = uVar1;
    }
  }
  return uVar4;
}




undefined8 * FUN_10033dc88(void)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  ushort uVar5;
  
  lVar2 = DAT_101e473f8;
  uVar5 = *(ushort *)(DAT_101e473f8 + 0x2e7d0);
  if ((ulong)uVar5 != 0xffff) {
    lVar4 = DAT_101e473f8 + (ulong)uVar5 * 0x88;
    if (uVar5 == *(ushort *)(DAT_101e473f8 + 0x2e7d2)) {
      uVar5 = 0xffff;
    }
    else {
      uVar5 = *(ushort *)(lVar4 + 0x10);
    }
    *(ushort *)(DAT_101e473f8 + 0x2e7d0) = uVar5;
    *(int *)(lVar2 + 0x2e7d4) = *(int *)(lVar2 + 0x2e7d4) + 1;
    puVar3 = (undefined8 *)(lVar4 + 0x17U & 0xfffffffffffffff8);
    puVar3[1] = 0;
    puVar3[2] = 0;
    *puVar3 = 0;
    *puVar3 = &PTR_FUN_101494b30;
    puVar3[2] = &PTR_FUN_101447e88;
    uVar1 = *(int *)(lVar2 + 0x2e7e0) + 1;
    *(uint *)(lVar2 + 0x2e7e0) = uVar1;
    if (*(uint *)(lVar2 + 0x2e7e4) < uVar1) {
      *(uint *)(lVar2 + 0x2e7e4) = uVar1;
    }
    return puVar3;
  }
  return (undefined8 *)0x0;
}




undefined8 FUN_10033dd2c(void)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  ushort uVar6;
  
  lVar2 = DAT_101e473f8;
  uVar6 = *(ushort *)(DAT_101e473f8 + 0x2e7d0);
  if ((ulong)uVar6 == 0xffff) {
    uVar4 = 0;
  }
  else {
    lVar5 = DAT_101e473f8 + (ulong)uVar6 * 0x88;
    if (uVar6 == *(ushort *)(DAT_101e473f8 + 0x2e7d2)) {
      uVar6 = 0xffff;
    }
    else {
      uVar6 = *(ushort *)(lVar5 + 0x10);
    }
    *(ushort *)(DAT_101e473f8 + 0x2e7d0) = uVar6;
    *(int *)(lVar2 + 0x2e7d4) = *(int *)(lVar2 + 0x2e7d4) + 1;
    puVar3 = (undefined8 *)(lVar5 + 0x17U & 0xfffffffffffffff8);
    puVar3[4] = 0;
    puVar3[1] = 0;
    *puVar3 = 0;
    puVar3[3] = 0;
    puVar3[2] = 0;
    uVar4 = FUN_100475268();
    uVar1 = *(int *)(lVar2 + 0x2e7e0) + 1;
    *(uint *)(lVar2 + 0x2e7e0) = uVar1;
    if (*(uint *)(lVar2 + 0x2e7e4) < uVar1) {
      *(uint *)(lVar2 + 0x2e7e4) = uVar1;
    }
  }
  return uVar4;
}




undefined8 FUN_10033ddd4(void)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  ushort uVar6;
  
  lVar2 = DAT_101e473f8;
  uVar6 = *(ushort *)(DAT_101e473f8 + 0x2e7d0);
  if ((ulong)uVar6 == 0xffff) {
    uVar4 = 0;
  }
  else {
    lVar5 = DAT_101e473f8 + (ulong)uVar6 * 0x88;
    if (uVar6 == *(ushort *)(DAT_101e473f8 + 0x2e7d2)) {
      uVar6 = 0xffff;
    }
    else {
      uVar6 = *(ushort *)(lVar5 + 0x10);
    }
    *(ushort *)(DAT_101e473f8 + 0x2e7d0) = uVar6;
    *(int *)(lVar2 + 0x2e7d4) = *(int *)(lVar2 + 0x2e7d4) + 1;
    puVar3 = (undefined8 *)(lVar5 + 0x17U & 0xfffffffffffffff8);
    puVar3[6] = 0;
    puVar3[3] = 0;
    puVar3[2] = 0;
    puVar3[5] = 0;
    puVar3[4] = 0;
    puVar3[1] = 0;
    *puVar3 = 0;
    uVar4 = FUN_100475388();
    uVar1 = *(int *)(lVar2 + 0x2e7e0) + 1;
    *(uint *)(lVar2 + 0x2e7e0) = uVar1;
    if (*(uint *)(lVar2 + 0x2e7e4) < uVar1) {
      *(uint *)(lVar2 + 0x2e7e4) = uVar1;
    }
  }
  return uVar4;
}




undefined8 * FUN_10033de80(void)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  ushort uVar5;
  
  lVar2 = DAT_101e473f8;
  uVar5 = *(ushort *)(DAT_101e473f8 + 0x2e7d0);
  if ((ulong)uVar5 != 0xffff) {
    lVar4 = DAT_101e473f8 + (ulong)uVar5 * 0x88;
    if (uVar5 == *(ushort *)(DAT_101e473f8 + 0x2e7d2)) {
      uVar5 = 0xffff;
    }
    else {
      uVar5 = *(ushort *)(lVar4 + 0x10);
    }
    *(ushort *)(DAT_101e473f8 + 0x2e7d0) = uVar5;
    *(int *)(lVar2 + 0x2e7d4) = *(int *)(lVar2 + 0x2e7d4) + 1;
    puVar3 = (undefined8 *)(lVar4 + 0x17U & 0xfffffffffffffff8);
    puVar3[1] = 0;
    puVar3[2] = 0;
    *puVar3 = 0;
    *puVar3 = &PTR_FUN_101494b80;
    puVar3[2] = &PTR_FUN_101494bd0;
    uVar1 = *(int *)(lVar2 + 0x2e7e0) + 1;
    *(uint *)(lVar2 + 0x2e7e0) = uVar1;
    if (*(uint *)(lVar2 + 0x2e7e4) < uVar1) {
      *(uint *)(lVar2 + 0x2e7e4) = uVar1;
    }
    return puVar3;
  }
  return (undefined8 *)0x0;
}




undefined8 FUN_10033df24(void)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  ushort uVar6;
  
  lVar2 = DAT_101e473f8;
  uVar6 = *(ushort *)(DAT_101e473f8 + 0x2e7d0);
  if ((ulong)uVar6 == 0xffff) {
    uVar4 = 0;
  }
  else {
    lVar5 = DAT_101e473f8 + (ulong)uVar6 * 0x88;
    if (uVar6 == *(ushort *)(DAT_101e473f8 + 0x2e7d2)) {
      uVar6 = 0xffff;
    }
    else {
      uVar6 = *(ushort *)(lVar5 + 0x10);
    }
    *(ushort *)(DAT_101e473f8 + 0x2e7d0) = uVar6;
    *(int *)(lVar2 + 0x2e7d4) = *(int *)(lVar2 + 0x2e7d4) + 1;
    puVar3 = (undefined8 *)(lVar5 + 0x17U & 0xfffffffffffffff8);
    puVar3[1] = 0;
    *puVar3 = 0;
    puVar3[3] = 0;
    puVar3[2] = 0;
    uVar4 = FUN_100475610();
    uVar1 = *(int *)(lVar2 + 0x2e7e0) + 1;
    *(uint *)(lVar2 + 0x2e7e0) = uVar1;
    if (*(uint *)(lVar2 + 0x2e7e4) < uVar1) {
      *(uint *)(lVar2 + 0x2e7e4) = uVar1;
    }
  }
  return uVar4;
}




undefined8 FUN_10033dfc8(void)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  ushort uVar6;
  
  lVar2 = DAT_101e473f8;
  uVar6 = *(ushort *)(DAT_101e473f8 + 0x2e7d0);
  if ((ulong)uVar6 == 0xffff) {
    uVar4 = 0;
  }
  else {
    lVar5 = DAT_101e473f8 + (ulong)uVar6 * 0x88;
    if (uVar6 == *(ushort *)(DAT_101e473f8 + 0x2e7d2)) {
      uVar6 = 0xffff;
    }
    else {
      uVar6 = *(ushort *)(lVar5 + 0x10);
    }
    *(ushort *)(DAT_101e473f8 + 0x2e7d0) = uVar6;
    *(int *)(lVar2 + 0x2e7d4) = *(int *)(lVar2 + 0x2e7d4) + 1;
    puVar3 = (undefined8 *)(lVar5 + 0x17U & 0xfffffffffffffff8);
    puVar3[3] = 0;
    puVar3[2] = 0;
    puVar3[5] = 0;
    puVar3[4] = 0;
    puVar3[1] = 0;
    *puVar3 = 0;
    uVar4 = FUN_1004756d4();
    uVar1 = *(int *)(lVar2 + 0x2e7e0) + 1;
    *(uint *)(lVar2 + 0x2e7e0) = uVar1;
    if (*(uint *)(lVar2 + 0x2e7e4) < uVar1) {
      *(uint *)(lVar2 + 0x2e7e4) = uVar1;
    }
  }
  return uVar4;
}




undefined8 * FUN_10033e070(void)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  ushort uVar5;
  
  lVar2 = DAT_101e473f8;
  uVar5 = *(ushort *)(DAT_101e473f8 + 0x2e7d0);
  if ((ulong)uVar5 != 0xffff) {
    lVar4 = DAT_101e473f8 + (ulong)uVar5 * 0x88;
    if (uVar5 == *(ushort *)(DAT_101e473f8 + 0x2e7d2)) {
      uVar5 = 0xffff;
    }
    else {
      uVar5 = *(ushort *)(lVar4 + 0x10);
    }
    *(ushort *)(DAT_101e473f8 + 0x2e7d0) = uVar5;
    *(int *)(lVar2 + 0x2e7d4) = *(int *)(lVar2 + 0x2e7d4) + 1;
    puVar3 = (undefined8 *)(lVar4 + 0x17U & 0xfffffffffffffff8);
    puVar3[1] = 0;
    puVar3[2] = 0;
    *puVar3 = 0;
    *puVar3 = &PTR_FUN_101494c80;
    puVar3[2] = &PTR_FUN_101494ce8;
    uVar1 = *(int *)(lVar2 + 0x2e7e0) + 1;
    *(uint *)(lVar2 + 0x2e7e0) = uVar1;
    if (*(uint *)(lVar2 + 0x2e7e4) < uVar1) {
      *(uint *)(lVar2 + 0x2e7e4) = uVar1;
    }
    return puVar3;
  }
  return (undefined8 *)0x0;
}




undefined8 * FUN_10033e114(void)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  ushort uVar5;
  
  lVar2 = DAT_101e473f8;
  uVar5 = *(ushort *)(DAT_101e473f8 + 0x2e7d0);
  if ((ulong)uVar5 != 0xffff) {
    lVar4 = DAT_101e473f8 + (ulong)uVar5 * 0x88;
    if (uVar5 == *(ushort *)(DAT_101e473f8 + 0x2e7d2)) {
      uVar5 = 0xffff;
    }
    else {
      uVar5 = *(ushort *)(lVar4 + 0x10);
    }
    *(ushort *)(DAT_101e473f8 + 0x2e7d0) = uVar5;
    *(int *)(lVar2 + 0x2e7d4) = *(int *)(lVar2 + 0x2e7d4) + 1;
    puVar3 = (undefined8 *)(lVar4 + 0x17U & 0xfffffffffffffff8);
    puVar3[1] = 0;
    puVar3[2] = 0;
    *puVar3 = 0;
    *puVar3 = &PTR_FUN_101494d80;
    puVar3[2] = &PTR_FUN_101494dc8;
    uVar1 = *(int *)(lVar2 + 0x2e7e0) + 1;
    *(uint *)(lVar2 + 0x2e7e0) = uVar1;
    if (*(uint *)(lVar2 + 0x2e7e4) < uVar1) {
      *(uint *)(lVar2 + 0x2e7e4) = uVar1;
    }
    return puVar3;
  }
  return (undefined8 *)0x0;
}




undefined8 FUN_10033e1b8(void)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  ushort uVar6;
  
  lVar2 = DAT_101e473f8;
  uVar6 = *(ushort *)(DAT_101e473f8 + 0x2e7d0);
  if ((ulong)uVar6 == 0xffff) {
    uVar4 = 0;
  }
  else {
    lVar5 = DAT_101e473f8 + (ulong)uVar6 * 0x88;
    if (uVar6 == *(ushort *)(DAT_101e473f8 + 0x2e7d2)) {
      uVar6 = 0xffff;
    }
    else {
      uVar6 = *(ushort *)(lVar5 + 0x10);
    }
    *(ushort *)(DAT_101e473f8 + 0x2e7d0) = uVar6;
    *(int *)(lVar2 + 0x2e7d4) = *(int *)(lVar2 + 0x2e7d4) + 1;
    puVar3 = (undefined8 *)(lVar5 + 0x17U & 0xfffffffffffffff8);
    puVar3[1] = 0;
    *puVar3 = 0;
    puVar3[3] = 0;
    puVar3[2] = 0;
    uVar4 = FUN_100475b08();
    uVar1 = *(int *)(lVar2 + 0x2e7e0) + 1;
    *(uint *)(lVar2 + 0x2e7e0) = uVar1;
    if (*(uint *)(lVar2 + 0x2e7e4) < uVar1) {
      *(uint *)(lVar2 + 0x2e7e4) = uVar1;
    }
  }
  return uVar4;
}




undefined8 FUN_10033e25c(void)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  ushort uVar6;
  
  lVar2 = DAT_101e473f8;
  uVar6 = *(ushort *)(DAT_101e473f8 + 0x2e7d0);
  if ((ulong)uVar6 == 0xffff) {
    uVar4 = 0;
  }
  else {
    lVar5 = DAT_101e473f8 + (ulong)uVar6 * 0x88;
    if (uVar6 == *(ushort *)(DAT_101e473f8 + 0x2e7d2)) {
      uVar6 = 0xffff;
    }
    else {
      uVar6 = *(ushort *)(lVar5 + 0x10);
    }
    *(ushort *)(DAT_101e473f8 + 0x2e7d0) = uVar6;
    *(int *)(lVar2 + 0x2e7d4) = *(int *)(lVar2 + 0x2e7d4) + 1;
    puVar3 = (undefined8 *)(lVar5 + 0x17U & 0xfffffffffffffff8);
    puVar3[4] = 0;
    puVar3[1] = 0;
    *puVar3 = 0;
    puVar3[3] = 0;
    puVar3[2] = 0;
    uVar4 = FUN_100475c18();
    uVar1 = *(int *)(lVar2 + 0x2e7e0) + 1;
    *(uint *)(lVar2 + 0x2e7e0) = uVar1;
    if (*(uint *)(lVar2 + 0x2e7e4) < uVar1) {
      *(uint *)(lVar2 + 0x2e7e4) = uVar1;
    }
  }
  return uVar4;
}




undefined8 FUN_10033e304(void)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  ushort uVar6;
  
  lVar2 = DAT_101e473f8;
  uVar6 = *(ushort *)(DAT_101e473f8 + 0x2e7d0);
  if ((ulong)uVar6 == 0xffff) {
    uVar4 = 0;
  }
  else {
    lVar5 = DAT_101e473f8 + (ulong)uVar6 * 0x88;
    if (uVar6 == *(ushort *)(DAT_101e473f8 + 0x2e7d2)) {
      uVar6 = 0xffff;
    }
    else {
      uVar6 = *(ushort *)(lVar5 + 0x10);
    }
    *(ushort *)(DAT_101e473f8 + 0x2e7d0) = uVar6;
    *(int *)(lVar2 + 0x2e7d4) = *(int *)(lVar2 + 0x2e7d4) + 1;
    puVar3 = (undefined8 *)(lVar5 + 0x17U & 0xfffffffffffffff8);
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = 0;
    uVar4 = FUN_100475d20();
    uVar1 = *(int *)(lVar2 + 0x2e7e0) + 1;
    *(uint *)(lVar2 + 0x2e7e0) = uVar1;
    if (*(uint *)(lVar2 + 0x2e7e4) < uVar1) {
      *(uint *)(lVar2 + 0x2e7e4) = uVar1;
    }
  }
  return uVar4;
}




undefined8 FUN_10033e3a8(void)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  ushort uVar6;
  
  lVar2 = DAT_101e473f8;
  uVar6 = *(ushort *)(DAT_101e473f8 + 0x2e7d0);
  if ((ulong)uVar6 == 0xffff) {
    uVar4 = 0;
  }
  else {
    lVar5 = DAT_101e473f8 + (ulong)uVar6 * 0x88;
    if (uVar6 == *(ushort *)(DAT_101e473f8 + 0x2e7d2)) {
      uVar6 = 0xffff;
    }
    else {
      uVar6 = *(ushort *)(lVar5 + 0x10);
    }
    *(ushort *)(DAT_101e473f8 + 0x2e7d0) = uVar6;
    *(int *)(lVar2 + 0x2e7d4) = *(int *)(lVar2 + 0x2e7d4) + 1;
    puVar3 = (undefined8 *)(lVar5 + 0x17U & 0xfffffffffffffff8);
    puVar3[7] = 0;
    puVar3[6] = 0;
    puVar3[9] = 0;
    puVar3[8] = 0;
    puVar3[3] = 0;
    puVar3[2] = 0;
    puVar3[5] = 0;
    puVar3[4] = 0;
    puVar3[1] = 0;
    *puVar3 = 0;
    uVar4 = FUN_100475d78();
    uVar1 = *(int *)(lVar2 + 0x2e7e0) + 1;
    *(uint *)(lVar2 + 0x2e7e0) = uVar1;
    if (*(uint *)(lVar2 + 0x2e7e4) < uVar1) {
      *(uint *)(lVar2 + 0x2e7e4) = uVar1;
    }
  }
  return uVar4;
}




undefined8 FUN_10033e454(void)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  ushort uVar6;
  
  lVar2 = DAT_101e473f8;
  uVar6 = *(ushort *)(DAT_101e473f8 + 0x2e7d0);
  if ((ulong)uVar6 == 0xffff) {
    uVar4 = 0;
  }
  else {
    lVar5 = DAT_101e473f8 + (ulong)uVar6 * 0x88;
    if (uVar6 == *(ushort *)(DAT_101e473f8 + 0x2e7d2)) {
      uVar6 = 0xffff;
    }
    else {
      uVar6 = *(ushort *)(lVar5 + 0x10);
    }
    *(ushort *)(DAT_101e473f8 + 0x2e7d0) = uVar6;
    *(int *)(lVar2 + 0x2e7d4) = *(int *)(lVar2 + 0x2e7d4) + 1;
    puVar3 = (undefined8 *)(lVar5 + 0x17U & 0xfffffffffffffff8);
    puVar3[8] = 0;
    puVar3[5] = 0;
    puVar3[4] = 0;
    puVar3[7] = 0;
    puVar3[6] = 0;
    puVar3[1] = 0;
    *puVar3 = 0;
    puVar3[3] = 0;
    puVar3[2] = 0;
    uVar4 = FUN_100475fe8();
    uVar1 = *(int *)(lVar2 + 0x2e7e0) + 1;
    *(uint *)(lVar2 + 0x2e7e0) = uVar1;
    if (*(uint *)(lVar2 + 0x2e7e4) < uVar1) {
      *(uint *)(lVar2 + 0x2e7e4) = uVar1;
    }
  }
  return uVar4;
}




undefined8 * FUN_10033e500(void)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  ushort uVar5;
  
  lVar2 = DAT_101e473f8;
  uVar5 = *(ushort *)(DAT_101e473f8 + 0x2e7d0);
  if ((ulong)uVar5 != 0xffff) {
    lVar4 = DAT_101e473f8 + (ulong)uVar5 * 0x88;
    if (uVar5 == *(ushort *)(DAT_101e473f8 + 0x2e7d2)) {
      uVar5 = 0xffff;
    }
    else {
      uVar5 = *(ushort *)(lVar4 + 0x10);
    }
    *(ushort *)(DAT_101e473f8 + 0x2e7d0) = uVar5;
    *(int *)(lVar2 + 0x2e7d4) = *(int *)(lVar2 + 0x2e7d4) + 1;
    puVar3 = (undefined8 *)(lVar4 + 0x17U & 0xfffffffffffffff8);
    puVar3[1] = 0;
    *puVar3 = 0;
    puVar3[3] = 0;
    puVar3[2] = 0;
    puVar3[5] = 0;
    puVar3[4] = 0;
    puVar3[7] = 0;
    puVar3[6] = 0;
    puVar3[9] = 0;
    puVar3[8] = 0;
    puVar3[0xb] = 0;
    puVar3[10] = 0;
    puVar3[0xd] = 0;
    puVar3[0xc] = 0;
    puVar3[0xf] = 0;
    puVar3[0xe] = 0;
    *puVar3 = &PTR_FUN_101494e38;
    puVar3[1] = 0;
    puVar3[2] = &PTR_FUN_101494e80;
    puVar3[0xf] = 0;
    puVar3[0x10] = 0;
    puVar3[0xe] = 0;
    *(undefined4 *)(puVar3 + 0x10) = 0;
    puVar3[4] = 0;
    puVar3[3] = 0;
    puVar3[6] = 0;
    puVar3[5] = 0;
    puVar3[8] = 0;
    puVar3[7] = 0;
    puVar3[10] = 0;
    puVar3[9] = 0;
    puVar3[0xc] = 0;
    puVar3[0xb] = 0;
    *(undefined4 *)(puVar3 + 0xd) = 0;
    uVar1 = *(int *)(lVar2 + 0x2e7e0) + 1;
    *(uint *)(lVar2 + 0x2e7e0) = uVar1;
    if (*(uint *)(lVar2 + 0x2e7e4) < uVar1) {
      *(uint *)(lVar2 + 0x2e7e4) = uVar1;
    }
    return puVar3;
  }
  return (undefined8 *)0x0;
}




undefined8 * FUN_10033e5d4(void)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  ushort uVar5;
  
  lVar2 = DAT_101e473f8;
  uVar5 = *(ushort *)(DAT_101e473f8 + 0x109400);
  if ((ulong)uVar5 != 0xffff) {
    lVar4 = DAT_101e473f8 + (ulong)uVar5 * 0x28;
    if (uVar5 == *(ushort *)(DAT_101e473f8 + 0x109402)) {
      uVar5 = 0xffff;
    }
    else {
      uVar5 = *(ushort *)(lVar4 + 0x2e800);
    }
    *(ushort *)(DAT_101e473f8 + 0x109400) = uVar5;
    *(int *)(lVar2 + 0x109404) = *(int *)(lVar2 + 0x109404) + 1;
    puVar3 = (undefined8 *)(lVar4 + 0x2e807U & 0xfffffffffffffff8);
    puVar3[1] = 0;
    *puVar3 = 0;
    puVar3[3] = 0;
    puVar3[2] = 0;
    *puVar3 = &PTR_FUN_101494ea8;
    puVar3[1] = 0;
    puVar3[3] = 0;
    puVar3[4] = 0;
    *(undefined1 *)(puVar3 + 4) = 0;
    uVar1 = *(int *)(lVar2 + 0x109410) + 1;
    *(uint *)(lVar2 + 0x109410) = uVar1;
    if (*(uint *)(lVar2 + 0x109414) < uVar1) {
      *(uint *)(lVar2 + 0x109414) = uVar1;
    }
    return puVar3;
  }
  return (undefined8 *)0x0;
}




undefined8 FUN_10033e67c(void)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  ushort uVar6;
  
  lVar2 = DAT_101e473f8;
  uVar6 = *(ushort *)(DAT_101e473f8 + 0x11e0c0);
  if ((ulong)uVar6 == 0xffff) {
    uVar4 = 0;
  }
  else {
    lVar5 = DAT_101e473f8 + (ulong)uVar6 * 0x70;
    if (uVar6 == *(ushort *)(DAT_101e473f8 + 0x11e0c2)) {
      uVar6 = 0xffff;
    }
    else {
      uVar6 = *(ushort *)(lVar5 + 0x116640);
    }
    *(ushort *)(DAT_101e473f8 + 0x11e0c0) = uVar6;
    *(int *)(lVar2 + 0x11e0c4) = *(int *)(lVar2 + 0x11e0c4) + 1;
    puVar3 = (undefined8 *)(lVar5 + 0x116647U & 0xfffffffffffffff8);
    puVar3[0xb] = 0;
    puVar3[10] = 0;
    puVar3[0xd] = 0;
    puVar3[0xc] = 0;
    puVar3[7] = 0;
    puVar3[6] = 0;
    puVar3[9] = 0;
    puVar3[8] = 0;
    puVar3[3] = 0;
    puVar3[2] = 0;
    puVar3[5] = 0;
    puVar3[4] = 0;
    puVar3[1] = 0;
    *puVar3 = 0;
    uVar4 = FUN_100476328();
    uVar1 = *(int *)(lVar2 + 0x11e0d0) + 1;
    *(uint *)(lVar2 + 0x11e0d0) = uVar1;
    if (*(uint *)(lVar2 + 0x11e0d4) < uVar1) {
      *(uint *)(lVar2 + 0x11e0d4) = uVar1;
    }
  }
  return uVar4;
}




undefined8 FUN_10033e734(void)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  ushort uVar6;
  
  lVar2 = DAT_101e473f8;
  uVar6 = *(ushort *)(DAT_101e473f8 + 0x11e0c0);
  if ((ulong)uVar6 == 0xffff) {
    uVar4 = 0;
  }
  else {
    lVar5 = DAT_101e473f8 + (ulong)uVar6 * 0x70;
    if (uVar6 == *(ushort *)(DAT_101e473f8 + 0x11e0c2)) {
      uVar6 = 0xffff;
    }
    else {
      uVar6 = *(ushort *)(lVar5 + 0x116640);
    }
    *(ushort *)(DAT_101e473f8 + 0x11e0c0) = uVar6;
    *(int *)(lVar2 + 0x11e0c4) = *(int *)(lVar2 + 0x11e0c4) + 1;
    puVar3 = (undefined8 *)(lVar5 + 0x116647U & 0xfffffffffffffff8);
    puVar3[7] = 0;
    puVar3[6] = 0;
    puVar3[9] = 0;
    puVar3[8] = 0;
    puVar3[3] = 0;
    puVar3[2] = 0;
    puVar3[5] = 0;
    puVar3[4] = 0;
    puVar3[1] = 0;
    *puVar3 = 0;
    uVar4 = FUN_100476540();
    uVar1 = *(int *)(lVar2 + 0x11e0d0) + 1;
    *(uint *)(lVar2 + 0x11e0d0) = uVar1;
    if (*(uint *)(lVar2 + 0x11e0d4) < uVar1) {
      *(uint *)(lVar2 + 0x11e0d4) = uVar1;
    }
  }
  return uVar4;
}




undefined8 * FUN_10033e7e8(void)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  ushort uVar5;
  
  lVar2 = DAT_101e473f8;
  uVar5 = *(ushort *)(DAT_101e473f8 + 0x11e0c0);
  if ((ulong)uVar5 != 0xffff) {
    lVar4 = DAT_101e473f8 + (ulong)uVar5 * 0x70;
    if (uVar5 == *(ushort *)(DAT_101e473f8 + 0x11e0c2)) {
      uVar5 = 0xffff;
    }
    else {
      uVar5 = *(ushort *)(lVar4 + 0x116640);
    }
    *(ushort *)(DAT_101e473f8 + 0x11e0c0) = uVar5;
    *(int *)(lVar2 + 0x11e0c4) = *(int *)(lVar2 + 0x11e0c4) + 1;
    puVar3 = (undefined8 *)(lVar4 + 0x116647U & 0xfffffffffffffff8);
    puVar3[5] = 0;
    puVar3[4] = 0;
    puVar3[7] = 0;
    puVar3[6] = 0;
    puVar3[1] = 0;
    *puVar3 = 0;
    puVar3[3] = 0;
    puVar3[2] = 0;
    puVar3[5] = 0;
    puVar3[6] = 0;
    *(undefined4 *)(puVar3 + 7) = 0;
    puVar3[2] = 0;
    puVar3[3] = 0;
    *(undefined4 *)(puVar3 + 4) = 0;
    *puVar3 = &PTR_FUN_10149d2b0;
    puVar3[1] = 0;
    uVar1 = *(int *)(lVar2 + 0x11e0d0) + 1;
    *(uint *)(lVar2 + 0x11e0d0) = uVar1;
    if (*(uint *)(lVar2 + 0x11e0d4) < uVar1) {
      *(uint *)(lVar2 + 0x11e0d4) = uVar1;
    }
    return puVar3;
  }
  return (undefined8 *)0x0;
}




undefined8 * FUN_10033e8a0(void)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  ushort uVar5;
  
  lVar2 = DAT_101e473f8;
  uVar5 = *(ushort *)(DAT_101e473f8 + 0x11e0c0);
  if ((ulong)uVar5 != 0xffff) {
    lVar4 = DAT_101e473f8 + (ulong)uVar5 * 0x70;
    if (uVar5 == *(ushort *)(DAT_101e473f8 + 0x11e0c2)) {
      uVar5 = 0xffff;
    }
    else {
      uVar5 = *(ushort *)(lVar4 + 0x116640);
    }
    *(ushort *)(DAT_101e473f8 + 0x11e0c0) = uVar5;
    *(int *)(lVar2 + 0x11e0c4) = *(int *)(lVar2 + 0x11e0c4) + 1;
    puVar3 = (undefined8 *)(lVar4 + 0x116647U & 0xfffffffffffffff8);
    puVar3[5] = 0;
    puVar3[4] = 0;
    puVar3[7] = 0;
    puVar3[6] = 0;
    puVar3[1] = 0;
    *puVar3 = 0;
    puVar3[3] = 0;
    puVar3[2] = 0;
    puVar3[5] = 0;
    puVar3[6] = 0;
    *(undefined4 *)(puVar3 + 7) = 0;
    puVar3[2] = 0;
    puVar3[3] = 0;
    *(undefined4 *)(puVar3 + 4) = 0;
    *puVar3 = &PTR_FUN_10149d308;
    puVar3[1] = 0;
    uVar1 = *(int *)(lVar2 + 0x11e0d0) + 1;
    *(uint *)(lVar2 + 0x11e0d0) = uVar1;
    if (*(uint *)(lVar2 + 0x11e0d4) < uVar1) {
      *(uint *)(lVar2 + 0x11e0d4) = uVar1;
    }
    return puVar3;
  }
  return (undefined8 *)0x0;
}




void FUN_10033e958(void)

{
  operator_new(0x11e0f0);
  DAT_101e473f8 = FUN_10033ea30();
  return;
}




void FUN_10033e980(void)

{
  if (DAT_101e473f8 != (void *)0x0) {
    DAT_101854bc8 = 0;
    DAT_101854bd0 = 0;
    DAT_101854bd8 = 0;
    operator_delete(DAT_101e473f8);
  }
  DAT_101e473f8 = (void *)0x0;
  return;
}




void FUN_10033e9c4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_101494950;
  DAT_101854bc8 = 0;
  return;
}




void FUN_10033e9dc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_101494970;
  DAT_101854bd0 = 0;
  return;
}




void FUN_10033e9f4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_101494990;
  DAT_101854bd8 = 0;
  return;
}




void FUN_10033ea0c(void *param_1)

{
  DAT_101854bc8 = 0;
  operator_delete(param_1);
  return;
}




void FUN_10033ea18(void *param_1)

{
  DAT_101854bd0 = 0;
  operator_delete(param_1);
  return;
}




void FUN_10033ea24(void *param_1)

{
  DAT_101854bd8 = 0;
  operator_delete(param_1);
  return;
}




void FUN_10033ea30(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  *param_1 = &PTR_FUN_101494990;
  lVar1 = 0x10;
  lVar2 = 1;
  do {
    *(short *)((long)param_1 + lVar1) = (short)lVar2;
    lVar1 = lVar1 + 0x88;
    lVar2 = lVar2 + 1;
  } while (lVar2 != 0x578);
  lVar1 = 0;
  param_1[0x5cfa] = 0x5770000;
  param_1[0x5cfc] = 0;
  DAT_101854bd0 = param_1 + 0x5cfe;
  DAT_101854bd8 = param_1;
  *DAT_101854bd0 = &PTR_FUN_101494970;
  lVar2 = 0x2e800;
  do {
    lVar1 = lVar1 + 1;
    *(short *)((long)param_1 + lVar2) = (short)lVar1;
    lVar2 = lVar2 + 0x28;
  } while (lVar1 != 0x577f);
  param_1[0x21280] = 0x577f0000;
  param_1[0x21282] = 0;
  lVar1 = 0x109420;
  lVar2 = 1;
  do {
    *(short *)((long)param_1 + lVar1) = (short)lVar2;
    lVar1 = lVar1 + 0x30;
    lVar2 = lVar2 + 1;
  } while (lVar2 != 0x460);
  param_1[0x22cc4] = 0x45f0000;
  DAT_101854bc8 = param_1 + 0x22cc6;
  *DAT_101854bc8 = &PTR_FUN_101494950;
  lVar1 = 0x116640;
  lVar2 = 1;
  do {
    *(short *)((long)param_1 + lVar1) = (short)lVar2;
    lVar1 = lVar1 + 0x70;
    lVar2 = lVar2 + 1;
  } while (lVar2 != 0x118);
  param_1[0x23c18] = 0x1170000;
  param_1[0x23c1a] = 0;
  *(undefined4 *)(param_1 + 0x23c1c) = 0;
  return;
}




void FUN_10033eb50(void)

{
  return;
}




void FUN_10033eb58(void)

{
  return;
}




void thunk_FUN_10033eb8c(void)

{
  FUN_10033eb8c();
  return;
}




void FUN_10033eb60(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_10033eb8c();
  operator_delete(pvVar1);
  return;
}




void thunk_FUN_10033eb8c(void)

{
  FUN_10033eb8c();
  return;
}




void FUN_10033eb78(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_10033eb8c();
  operator_delete(pvVar1);
  return;
}




undefined8 * FUN_10033eb8c(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  
  *param_1 = &PTR_thunk_FUN_10033eb8c_1014949f8;
  plVar2 = param_1 + 1;
  lVar1 = *plVar2;
  while (lVar1 != 0) {
    FUN_10033ec08(plVar2,lVar1 + -8);
    FUN_10033d7d8(DAT_101e473f8 + 0x2e7f0,lVar1 + -8);
    lVar1 = *plVar2;
  }
  return param_1;
}




void FUN_10033ec08(long *param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  plVar1 = (long *)(param_2 + 8);
  plVar2 = (long *)*param_1;
  if (plVar1 == (long *)*param_1) {
    plVar3 = (long *)0x0;
    *param_1 = *plVar1;
  }
  else {
    do {
      plVar3 = plVar2;
      if (plVar3 == (long *)0x0) break;
      plVar2 = (long *)*plVar3;
    } while ((long *)*plVar3 != plVar1);
    *plVar3 = *plVar1;
  }
  if (plVar1 == (long *)param_1[1]) {
    param_1[1] = (long)plVar3;
  }
  *(int *)(param_1 + 2) = (int)param_1[2] + -1;
  return;
}




void FUN_10033ec64(void)

{
  return;
}




void FUN_10033ec6c(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = FUN_10033d68c();
  *(undefined8 *)(lVar1 + 0x10) = param_1;
  return;
}




undefined8 FUN_10033ec90(long *param_1)

{
  (**(code **)(*param_1 + 0x28))();
  return 0;
}




void FUN_10033ecb0(void)

{
  return;
}




void FUN_10033ecb4(void)

{
  return;
}




void FUN_10033ecb8(void)

{
  return;
}




long FUN_10033ecbc(long param_1)

{
  return param_1 + 0x10;
}




void FUN_10033ecc4(void)

{
  return;
}




void FUN_10033eccc(void)

{
  return;
}




void FUN_10033ecd0(void)

{
  return;
}




void FUN_10033ecd4(void)

{
  return;
}




void FUN_10033ecd8(void)

{
  return;
}




void FUN_10033ecdc(void)

{
  return;
}




void FUN_10033ece0(void)

{
  return;
}




void FUN_10033ece4(void)

{
  return;
}




void FUN_10033ece8(void)

{
  return;
}




void FUN_10033ecec(void)

{
  return;
}




void FUN_10033ecf0(void)

{
  return;
}




void FUN_10033ecf4(void)

{
  return;
}




void FUN_10033ecf8(void)

{
  return;
}




void FUN_10033ed00(void)

{
  return;
}




void FUN_10033ed04(void)

{
  return;
}




long FUN_10033ed08(long param_1)

{
  return param_1 + 0x10;
}




void FUN_10033ed10(void)

{
  return;
}




void FUN_10033ed18(void)

{
  return;
}




void FUN_10033ed1c(void)

{
  return;
}




long FUN_10033ed20(long param_1)

{
  return param_1 + 0x10;
}




void FUN_10033ed28(void)

{
  return;
}




void FUN_10033ed30(void)

{
  return;
}




void FUN_10033ed34(void)

{
  return;
}




long FUN_10033ed38(long param_1)

{
  return param_1 + 0x10;
}




void FUN_10033ed40(void)

{
  return;
}




void FUN_10033ed48(void)

{
  return;
}




void FUN_10033ed4c(void)

{
  return;
}




void FUN_10033ed50(void)

{
  return;
}




void FUN_10033ed54(void)

{
  return;
}




void FUN_10033ed58(void)

{
  return;
}




void FUN_10033ed5c(void)

{
  return;
}




void FUN_10033ed60(void)

{
  return;
}




void FUN_10033ed64(void)

{
  return;
}




void FUN_10033ed68(void)

{
  return;
}




void FUN_10033ed6c(void)

{
  return;
}




void FUN_10033ed70(void)

{
  return;
}




void FUN_10033ed74(void)

{
  return;
}




void FUN_10033ed78(void)

{
  return;
}




void FUN_10033ed7c(void)

{
  return;
}




void FUN_10033ed80(void)

{
  return;
}




void FUN_10033ed84(void)

{
  return;
}




void FUN_10033ed88(void)

{
  return;
}




void FUN_10033ed8c(void)

{
  return;
}




void FUN_10033ed90(void)

{
  return;
}




void FUN_10033ed98(void)

{
  return;
}




void FUN_10033ed9c(void)

{
  return;
}




void FUN_10033eda0(void)

{
  return;
}




void FUN_10033eda4(void)

{
  return;
}




void FUN_10033eda8(void)

{
  return;
}




long FUN_10033edac(long param_1)

{
  return param_1 + 0x10;
}




void FUN_10033edb4(void)

{
  return;
}




void FUN_10033edbc(void)

{
  return;
}




void FUN_10033edc0(void)

{
  return;
}




void FUN_10033edc4(void)

{
  return;
}




void FUN_10033edc8(void)

{
  return;
}




void FUN_10033edcc(void)

{
  return;
}




void FUN_10033edd0(void)

{
  return;
}




void FUN_10033edd4(void)

{
  return;
}




void FUN_10033edd8(void)

{
  return;
}




void FUN_10033eddc(void)

{
  return;
}




void FUN_10033ede0(void)

{
  return;
}




void FUN_10033ede4(void)

{
  return;
}




void FUN_10033ede8(void)

{
  return;
}




void FUN_10033edec(void)

{
  return;
}




void FUN_10033edf0(void)

{
  return;
}




void FUN_10033edf4(void)

{
  return;
}




void FUN_10033edf8(void)

{
  return;
}




void FUN_10033ee00(void)

{
  return;
}




long FUN_10033ee04(long param_1)

{
  return param_1 + 0x10;
}




void FUN_10033ee0c(void)

{
  return;
}




void FUN_10033ee14(void)

{
  return;
}




void FUN_10033ee18(void)

{
  return;
}




void FUN_10033ee1c(void)

{
  return;
}




void FUN_10033ee20(void)

{
  return;
}




void FUN_10033ee24(void)

{
  return;
}




void FUN_10033ee28(void)

{
  return;
}




void FUN_10033ee2c(void)

{
  return;
}




void FUN_10033ee30(void)

{
  return;
}




void FUN_10033ee34(void)

{
  return;
}




void FUN_10033ee38(void)

{
  return;
}




undefined8 * FUN_10033ee3c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_101494e38;
  FUN_10033f0b4(param_1 + 0xe);
  FUN_10033f0b4(param_1 + 0xb);
  return param_1;
}




void FUN_10033ee7c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_101494e38;
  FUN_10033f0b4(param_1 + 0xe);
  FUN_10033f0b4(param_1 + 0xb);
  operator_delete(param_1);
  return;
}




void FUN_10033eebc(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = FUN_10033e5d4();
  *(undefined8 *)(lVar1 + 0x10) = param_1;
  return;
}




void FUN_10033eee0(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010033eee8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x28))();
  return;
}




void FUN_10033eeec(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010033eef4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x30))();
  return;
}




bool FUN_10033eef8(long param_1,undefined8 param_2,long *param_3)

{
  bool bVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  bool bVar6;
  
  if ((char)param_3[4] == '\0') {
    lVar2 = FUN_10033d948();
    lVar5 = 0;
    param_3[3] = lVar2;
    bVar1 = true;
    do {
      bVar6 = bVar1;
      plVar3 = *(long **)(param_1 + lVar5 * 0x20 + 0x18);
      if (plVar3 == (long *)0x0) break;
      uVar4 = (**(code **)(*plVar3 + 0x10))(plVar3,param_2);
      if ((uVar4 & 1) == 0) {
        param_1 = param_1 + 0x70;
        goto LAB_10033ef80;
      }
      lVar5 = 1;
      bVar1 = false;
    } while (bVar6);
    param_1 = param_1 + 0x58;
LAB_10033ef80:
    FUN_10033f168(param_1,param_3[3]);
    lVar5 = param_3[3];
    lVar2 = 0;
    if (*(long *)(lVar5 + 8) != 0) {
      lVar2 = *(long *)(lVar5 + 8) + -8;
    }
    *(long *)(lVar5 + 0x28) = lVar2;
    FUN_10033f1ec(lVar5,param_2);
    *(undefined1 *)(param_3 + 4) = 1;
  }
  else if (*(long *)(param_3[3] + 0x28) != 0) {
    FUN_10033f1ec(param_3[3],param_2);
  }
  bVar1 = *(long *)(param_3[3] + 0x28) == 0;
  if (bVar1) {
    (**(code **)(*param_3 + 0x10))(param_3);
  }
  return !bVar1;
}




void FUN_10033efe8(undefined8 param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  
  if (((char)param_3[4] != '\0') && (lVar1 = param_3[3], lVar1 != 0)) {
    if (*(long *)(lVar1 + 0x28) != 0) {
      (**(code **)(**(long **)(*(long *)(lVar1 + 0x28) + 0x10) + 0x20))();
      *(undefined8 *)(lVar1 + 0x28) = 0;
    }
                    /* WARNING: Could not recover jumptable at 0x00010033f038. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_3 + 0x10))(param_3);
    return;
  }
  return;
}




void FUN_10033f048(void)

{
  return;
}




undefined8 FUN_10033f050(long param_1,undefined8 param_2)

{
  bool bVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  bool bVar5;
  
  lVar4 = 0;
  bVar5 = false;
  do {
    plVar2 = *(long **)(param_1 + lVar4 * 0x20 + 8);
    if (plVar2 == (long *)0x0) {
      return 1;
    }
    uVar3 = (**(code **)(*plVar2 + 0x10))(plVar2,param_2);
    lVar4 = 1;
    bVar1 = !bVar5;
    bVar5 = true;
  } while (bVar1 && (((uint)uVar3 ^ 0xffffffff) & 1) == 0);
  return uVar3;
}




long * FUN_10033f0b4(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  while (lVar1 != 0) {
    FUN_10033f10c(param_1,lVar1 + -8);
    FUN_10033d72c(DAT_101e473f8,lVar1 + -8);
    lVar1 = *param_1;
  }
  return param_1;
}




void FUN_10033f10c(long *param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  plVar1 = (long *)(param_2 + 8);
  plVar2 = (long *)*param_1;
  if (plVar1 == (long *)*param_1) {
    plVar3 = (long *)0x0;
    *param_1 = *plVar1;
  }
  else {
    do {
      plVar3 = plVar2;
      if (plVar3 == (long *)0x0) break;
      plVar2 = (long *)*plVar3;
    } while ((long *)*plVar3 != plVar1);
    *plVar3 = *plVar1;
  }
  if (plVar1 == (long *)param_1[1]) {
    param_1[1] = (long)plVar3;
  }
  *(int *)(param_1 + 2) = (int)param_1[2] + -1;
  return;
}




void FUN_10033f168(long *param_1,long param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  long *plVar5;
  
  plVar5 = (long *)(*param_1 + -8);
  if (*param_1 != 0 && plVar5 != (long *)0x0) {
    do {
      lVar3 = (**(code **)(*plVar5 + 0x10))(plVar5);
      puVar4 = (undefined8 *)(lVar3 + 8);
      *puVar4 = 0;
      puVar2 = (undefined8 *)(param_2 + 8);
      if (*(long *)(param_2 + 8) != 0) {
        puVar2 = *(undefined8 **)(param_2 + 0x10);
      }
      *puVar2 = puVar4;
      *(undefined8 **)(param_2 + 0x10) = puVar4;
      *(int *)(param_2 + 0x18) = *(int *)(param_2 + 0x18) + 1;
      plVar1 = plVar5 + 1;
      plVar5 = (long *)0x0;
      if (*plVar1 != 0) {
        plVar5 = (long *)(*plVar1 + -8);
      }
    } while (plVar5 != (long *)0x0);
  }
  return;
}




void FUN_10033f1ec(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *(long *)(param_1 + 0x28);
  while ((lVar2 != 0 &&
         (iVar1 = (**(code **)(**(long **)(lVar2 + 0x10) + 0x18))(*(long **)(lVar2 + 0x10),param_2),
         iVar1 != 1))) {
    lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
    lVar2 = 0;
    if (lVar3 != 0) {
      lVar2 = lVar3 + -8;
    }
    *(long *)(param_1 + 0x28) = lVar2;
  }
  return;
}




undefined8 * FUN_10033f24c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_101494ea8;
  if (param_1[3] != 0) {
    FUN_10033d9f4();
  }
  return param_1;
}




void FUN_10033f284(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_101494ea8;
  if (param_1[3] != 0) {
    FUN_10033d9f4();
  }
  operator_delete(param_1);
  return;
}




void FUN_10033f2bc(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_10033d9f4();
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  *(undefined1 *)(param_1 + 0x20) = 0;
  return;
}




undefined8 * FUN_10033f2ec(undefined8 *param_1)

{
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  FUN_1000fd6fc(param_1 + 6);
  FUN_1000fd6fc(param_1 + 0xf);
  FUN_10033f330(param_1);
  return param_1;
}




undefined8 * thunk_FUN_10033f2ec(undefined8 *param_1)

{
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  FUN_1000fd6fc(param_1 + 6);
  FUN_1000fd6fc(param_1 + 0xf);
  FUN_10033f330(param_1);
  return param_1;
}




void FUN_10033f458(string *param_1,string *param_2,string *param_3,string *param_4,string *param_5,
                  string param_6,undefined4 param_7,undefined4 param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  std::string::operator=(param_1,param_2);
  std::string::operator=(param_1 + 0x18,param_3);
  std::string::operator=(param_1 + 0x30,param_4);
  uVar2 = *(undefined8 *)(param_4 + 0x40);
  uVar1 = *(undefined8 *)(param_4 + 0x38);
  uVar4 = *(undefined8 *)(param_4 + 0x30);
  uVar3 = *(undefined8 *)(param_4 + 0x28);
  uVar5 = *(undefined8 *)(param_4 + 0x18);
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_4 + 0x20);
  *(undefined8 *)(param_1 + 0x48) = uVar5;
  *(undefined8 *)(param_1 + 0x60) = uVar4;
  *(undefined8 *)(param_1 + 0x58) = uVar3;
  *(undefined8 *)(param_1 + 0x70) = uVar2;
  *(undefined8 *)(param_1 + 0x68) = uVar1;
  std::string::operator=(param_1 + 0x78,param_5);
  uVar2 = *(undefined8 *)(param_5 + 0x40);
  uVar1 = *(undefined8 *)(param_5 + 0x38);
  uVar4 = *(undefined8 *)(param_5 + 0x30);
  uVar3 = *(undefined8 *)(param_5 + 0x28);
  uVar5 = *(undefined8 *)(param_5 + 0x18);
  *(undefined8 *)(param_1 + 0x98) = *(undefined8 *)(param_5 + 0x20);
  *(undefined8 *)(param_1 + 0x90) = uVar5;
  *(undefined8 *)(param_1 + 0xa8) = uVar4;
  *(undefined8 *)(param_1 + 0xa0) = uVar3;
  *(undefined8 *)(param_1 + 0xb8) = uVar2;
  *(undefined8 *)(param_1 + 0xb0) = uVar1;
  param_1[0xc0] = param_6;
  *(undefined4 *)(param_1 + 0xc4) = param_7;
  *(undefined4 *)(param_1 + 200) = param_8;
  return;
}




undefined8 * FUN_10033f500(void)

{
  void *pvVar1;
  
  if (DAT_101e47400 == (undefined8 *)0x0) {
    DAT_101e47400 = operator_new(0x18);
    *DAT_101e47400 = 0;
    DAT_101e47400[1] = 0;
    *(undefined4 *)(DAT_101e47400 + 2) = 0;
    pvVar1 = operator_new(0x40);
    FUN_1004e4464(pvVar1,0);
    DAT_101e47408 = pvVar1;
  }
  return DAT_101e47400;
}




undefined8 * FUN_10033f558(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  pthread_mutex_t *ppVar4;
  long *plVar5;
  
  *param_1 = &PTR_thunk_FUN_10033f5d4_101494ed0;
  plVar5 = (long *)FUN_10033f500();
  ppVar4 = DAT_101e47408;
  _pthread_mutex_lock(DAT_101e47408);
  lVar2 = *plVar5;
  lVar3 = plVar5[1];
  param_1[1] = lVar3;
  param_1[2] = 0;
  plVar1 = plVar5;
  if (lVar2 != 0) {
    plVar1 = (long *)(lVar3 + 0x10);
  }
  *plVar1 = (long)param_1;
  plVar5[1] = (long)param_1;
  *(int *)(plVar5 + 2) = (int)plVar5[2] + 1;
  _pthread_mutex_unlock(ppVar4);
  return param_1;
}




undefined8 * FUN_10033f5d4(undefined8 *param_1)

{
  pthread_mutex_t *ppVar1;
  undefined8 uVar2;
  
  *param_1 = &PTR_thunk_FUN_10033f5d4_101494ed0;
  uVar2 = FUN_10033f500();
  ppVar1 = DAT_101e47408;
  _pthread_mutex_lock(DAT_101e47408);
  FUN_10033f634(uVar2,param_1);
  _pthread_mutex_unlock(ppVar1);
  return param_1;
}




void FUN_10033f634(long *param_1,long param_2)

{
  long lVar1;
  
  if (*param_1 == param_2) {
    if (param_1[1] == param_2) {
      *param_1 = 0;
      param_1[1] = 0;
    }
    else {
      *param_1 = *(long *)(param_2 + 0x10);
    }
  }
  else if (param_1[1] == param_2) {
    lVar1 = *(long *)(param_2 + 8);
    param_1[1] = lVar1;
    *(undefined8 *)(lVar1 + 0x10) = 0;
  }
  else {
    lVar1 = *(long *)(param_2 + 8);
    *(undefined8 *)(lVar1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
    *(long *)(*(long *)(param_2 + 0x10) + 8) = lVar1;
  }
  *(int *)(param_1 + 2) = (int)param_1[2] + -1;
  return;
}




void thunk_FUN_10033f5d4(void)

{
  FUN_10033f5d4();
  return;
}




void FUN_10033f698(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_10033f5d4();
  operator_delete(pvVar1);
  return;
}




void FUN_10033f6ac(void)

{
  long *plVar1;
  
  plVar1 = (long *)FUN_10033f500();
  for (plVar1 = (long *)*plVar1; plVar1 != (long *)0x0; plVar1 = (long *)plVar1[2]) {
    (**(code **)(*plVar1 + 0x10))(plVar1);
  }
  return;
}




void FUN_10033f6e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  
  plVar1 = (long *)FUN_10033f500();
  for (plVar1 = (long *)*plVar1; plVar1 != (long *)0x0; plVar1 = (long *)plVar1[2]) {
    (**(code **)(*plVar1 + 0x18))(plVar1,param_1,param_2,param_3);
  }
  return;
}




void FUN_10033f744(void)

{
  return;
}




void FUN_10033f748(void)

{
  return;
}




void FUN_10033f74c(void)

{
  FUN_10001549c(&DAT_101d23900,"PurchaseNotFound");
  ___cxa_atexit(FUN_1000e6204,&DAT_101d23900,0x100000000);
  FUN_10001549c(&DAT_101d23918,"PurchaseNotAllowed");
  ___cxa_atexit(FUN_1000e6204,&DAT_101d23918,0x100000000);
  return;
}

