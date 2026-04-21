// functions/00aa5 — 21 functions
#include "libGameKindred.h"




void FUN_00aa5000(long param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  void *pvVar4;
  ulong uVar5;
  long *plVar6;
  byte local_d8 [16];
  void *local_c8;
  byte local_c0 [16];
  void *local_b0;
  byte local_a8 [16];
  void *local_98;
  byte local_90 [16];
  void *local_80;
  void *local_78;
  byte local_70 [8];
  ulong local_68;
  void *local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  lVar3 = FUN_00cce934();
  plVar6 = *(long **)(lVar3 + 8);
  if (*plVar6 != 0) {
    do {
      FUN_00ec52d8(local_70);
      iVar2 = strcmp(*(char **)*plVar6,"Charm_Emoji_HuaWei");
      if (iVar2 == 0) {
        uVar5 = (ulong)(local_70[0] >> 1);
        if ((local_70[0] & 1) != 0) {
          uVar5 = local_68;
        }
        if ((uVar5 == 7) &&
           (iVar2 = FUN_0090d610(local_70,0,0xffffffffffffffff,"neunion",7), iVar2 == 0))
        goto LAB_00aa506c;
      }
      else {
LAB_00aa506c:
        pvVar4 = operator_new(0x68);
        FUN_00aa4ea8();
        local_78 = pvVar4;
        FUN_008fa54c(local_90,*(undefined8 *)*plVar6);
        FUN_008fa54c(local_a8,*(undefined8 *)(*plVar6 + 8));
        FUN_008fa54c(local_c0,*(undefined8 *)(*plVar6 + 0x10));
        FUN_008fa54c(local_d8,*(undefined8 *)(*plVar6 + 0x18));
        FUN_00aa4f40(pvVar4,local_90,local_a8,local_c0,local_d8,*(undefined1 *)(*plVar6 + 0x20));
        if ((local_d8[0] & 1) != 0) {
          operator_delete(local_c8);
        }
        if ((local_c0[0] & 1) != 0) {
          operator_delete(local_b0);
        }
        if ((local_a8[0] & 1) != 0) {
          operator_delete(local_98);
        }
        if ((local_90[0] & 1) != 0) {
          operator_delete(local_80);
        }
        FUN_00aa5aa8(param_1 + 0x440,&local_78);
        if (*(char *)(*plVar6 + 0x20) != '\0') {
          *(void **)(param_1 + 0x458) = local_78;
        }
      }
      if ((local_70[0] & 1) != 0) {
        operator_delete(local_60);
      }
      plVar6 = plVar6 + 1;
    } while (*plVar6 != 0);
  }
  uVar5 = FUN_0093dbe8();
  if ((uVar5 & 1) != 0) {
    FUN_00aa5b30(param_1);
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00aa51d4(undefined8 *param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  void *pvVar3;
  long lVar4;
  ulong uVar5;
  
  uVar1 = (ulong)*(uint *)(param_1 + 0x88);
  *param_1 = &PTR_FUN_027d20b0;
  if (*(uint *)(param_1 + 0x88) != 0) {
    lVar4 = 0;
    uVar5 = 0;
    do {
      pvVar3 = *(void **)(param_1[0x89] + lVar4);
      if (pvVar3 == (void *)0x0) {
        puVar2 = (undefined8 *)(param_1[0x89] + uVar5 * 8);
      }
      else {
        FUN_00aa4edc(pvVar3);
        operator_delete(pvVar3);
        uVar1 = (ulong)*(uint *)(param_1 + 0x88);
        puVar2 = (undefined8 *)(param_1[0x89] + lVar4);
      }
      uVar5 = uVar5 + 1;
      lVar4 = lVar4 + 8;
      *puVar2 = 0;
    } while (uVar5 < uVar1);
  }
  if ((void *)param_1[0x89] == (void *)0x0) {
    param_1[0x8b] = 0;
    param_1[0x8a] = 0;
  }
  else {
    *(undefined4 *)(param_1 + 0x88) = 0;
    param_1[0x8b] = 0;
    param_1[0x8a] = 0;
    operator_delete__((void *)param_1[0x89]);
    param_1[0x88] = 0;
    param_1[0x89] = 0;
  }
  if ((*(byte *)(param_1 + 5) & 1) != 0) {
    operator_delete((void *)param_1[7]);
  }
  if ((void *)param_1[4] != (void *)0x0) {
    operator_delete__((void *)param_1[4]);
    param_1[3] = 0;
    param_1[4] = 0;
  }
  FUN_00948d58(param_1);
  return;
}




void FUN_00aa52ac(void *param_1)

{
  FUN_00aa51d4();
  operator_delete(param_1);
  return;
}




void FUN_00aa52d0(long param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  void *pvVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  byte local_88 [8];
  ulong local_80;
  void *local_78;
  ulong local_70 [2];
  void *local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  *(undefined8 *)(param_1 + 0x450) = 0;
  uVar1 = *(uint *)(param_2 + 0x68);
  if (uVar1 == 0) {
    lVar5 = *(long *)(param_1 + 0x458);
LAB_00aa5384:
    *(long *)(param_1 + 0x450) = lVar5;
    if (lVar5 != 0) {
      *(undefined4 *)(lVar5 + 0x60) = 0;
    }
  }
  else {
    lVar5 = *(long *)(param_2 + 0x70);
    lVar8 = 0;
    uVar7 = 0;
    do {
      lVar3 = FUN_00aa54c8(param_1,lVar5);
      if (lVar3 != 0) {
        if (*(char *)(lVar5 + 0x18) == '\0') {
          if (*(char *)(lVar5 + 0x19) == '\0') {
            *(undefined4 *)(lVar3 + 0x60) = 3;
          }
          else {
            *(undefined4 *)(lVar3 + 0x60) = 2;
          }
        }
        else {
          *(long *)(param_1 + 0x450) = lVar3;
          *(undefined4 *)(lVar3 + 0x60) = 0;
          lVar8 = lVar3;
        }
      }
      uVar7 = uVar7 + 1;
      lVar5 = lVar5 + 0x20;
    } while (uVar7 < uVar1);
    lVar5 = *(long *)(param_1 + 0x458);
    if (lVar8 == 0) goto LAB_00aa5384;
    if (lVar5 != 0) {
      *(undefined4 *)(lVar5 + 0x60) = 2;
    }
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    lVar5 = *(long *)(param_1 + 0x20);
    do {
      if (*(code **)(lVar5 + 8) == (code *)0x0) {
        (**(code **)(lVar5 + 0x18))(*(undefined8 *)(lVar5 + 0x10));
      }
      else {
        (**(code **)(lVar5 + 8))();
      }
      lVar5 = lVar5 + 0x20;
    } while (lVar5 != *(long *)(param_1 + 0x20) + (ulong)*(uint *)(param_1 + 0x18) * 0x20);
  }
  local_70[1] = 0;
  local_60 = (void *)0x0;
  local_70[0] = 0;
  uVar7 = (ulong)*(uint *)(param_1 + 0x440);
  if (*(uint *)(param_1 + 0x440) != 0) {
    uVar6 = 0;
    do {
      if ((*(uint *)(*(long *)(*(long *)(param_1 + 0x448) + uVar6 * 8) + 0x60) | 2) == 2) {
        FUN_008fcdb8(local_88);
        uVar7 = (ulong)(local_88[0] >> 1);
        pvVar4 = (void *)((ulong)local_88 | 1);
        if ((local_88[0] & 1) != 0) {
          uVar7 = local_80;
          pvVar4 = local_78;
        }
        FUN_0090de84(local_70,pvVar4,uVar7);
        FUN_0090de84(local_70,",",1);
        if ((local_88[0] & 1) != 0) {
          operator_delete(local_78);
        }
        uVar7 = (ulong)*(uint *)(param_1 + 0x440);
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar7);
    pvVar4 = local_60;
    if ((local_70[0] & 1) != 0) goto LAB_00aa5478;
  }
  pvVar4 = (void *)((ulong)local_70 | 1);
LAB_00aa5478:
  FUN_008ffc4c("CharmsOwned",pvVar4,1);
  if ((local_70[0] & 1) != 0) {
    operator_delete(local_60);
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




byte * FUN_00aa54c8(long param_1,byte *param_2)

{
  size_t __n;
  byte *__s2;
  uint uVar1;
  byte bVar2;
  int iVar3;
  ulong uVar4;
  byte *__s1;
  byte *pbVar5;
  ulong uVar6;
  long lVar7;
  
  uVar1 = *(uint *)(param_1 + 0x440);
  if (uVar1 != 0) {
    __n = *(size_t *)(param_2 + 8);
    __s2 = *(byte **)(param_2 + 0x10);
    lVar7 = *(long *)(param_1 + 0x448);
    uVar6 = 0;
    if ((*param_2 & 1) == 0) {
      __s2 = param_2 + 1;
      __n = (ulong)(*param_2 >> 1);
    }
    do {
      pbVar5 = *(byte **)(lVar7 + uVar6 * 8);
      bVar2 = *pbVar5;
      uVar4 = (ulong)(bVar2 >> 1);
      if ((bVar2 & 1) != 0) {
        uVar4 = *(ulong *)(pbVar5 + 8);
      }
      if (uVar4 == __n) {
        __s1 = *(byte **)(pbVar5 + 0x10);
        if ((bVar2 & 1) == 0) {
          __s1 = pbVar5 + 1;
        }
        if ((bVar2 & 1) == 0) {
          if (__n == 0) {
            return pbVar5;
          }
          uVar4 = 0;
          while (pbVar5[uVar4 + 1] == __s2[uVar4]) {
            uVar4 = uVar4 + 1;
            if (bVar2 >> 1 == uVar4) {
              return pbVar5;
            }
          }
        }
        else {
          if (__n == 0) {
            return pbVar5;
          }
          iVar3 = memcmp(__s1,__s2,__n);
          if (iVar3 == 0) {
            return pbVar5;
          }
        }
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar1);
  }
  return (byte *)0x0;
}




void FUN_00aa559c(undefined8 param_1,byte *param_2)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  byte local_50 [16];
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar3 = FUN_0093dbe8();
  if ((uVar3 & 1) == 0) {
    uVar3 = (ulong)(*param_2 >> 1);
    if ((*param_2 & 1) != 0) {
      uVar3 = *(ulong *)(param_2 + 8);
    }
    if (uVar3 == 7) {
      iVar2 = FUN_0090d610(param_2,0,0xffffffffffffffff,"default",7);
      uVar4 = FUN_009580b8();
      if (iVar2 == 0) {
        FUN_008fa54c(local_50,&DAT_01e277f2);
        FUN_009626fc(uVar4,local_50);
        if ((local_50[0] & 1) != 0) {
          operator_delete(local_40);
        }
        goto LAB_00aa5674;
      }
    }
    else {
      uVar4 = FUN_009580b8();
    }
    FUN_009626fc(uVar4,param_2);
  }
  else {
    FUN_00aa569c(param_1,param_2);
    FUN_00aa58d8(param_1,param_2);
  }
LAB_00aa5674:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00aa569c(long *param_1,byte *param_2)

{
  size_t __n;
  size_t sVar1;
  byte bVar2;
  long lVar3;
  bool bVar4;
  int iVar5;
  byte *__s2;
  ulong uVar6;
  long lVar7;
  byte *pbVar8;
  ulong uVar9;
  undefined **local_138 [5];
  undefined1 auStack_110 [16];
  undefined1 auStack_100 [16];
  undefined1 auStack_f0 [16];
  undefined1 auStack_e0 [16];
  undefined1 auStack_d0 [16];
  undefined1 auStack_c0 [16];
  undefined1 auStack_b0 [16];
  undefined1 auStack_a0 [16];
  ulong local_90;
  size_t local_88;
  byte *local_80;
  undefined1 local_78;
  undefined1 local_77;
  long local_70;
  
  lVar3 = tpidr_el0;
  local_70 = *(long *)(lVar3 + 0x28);
  FUN_00e84dac(local_138);
  local_138[0] = &PTR_FUN_027bbc28;
  memset(auStack_110,0,0x80);
  uVar6 = (ulong)*(uint *)(param_1 + 0x88);
  if (*(uint *)(param_1 + 0x88) != 0) {
    uVar9 = 0;
    do {
      if (*(long *)(param_1[0x89] + uVar9 * 8) != 0) {
        local_90 = 0;
        local_88 = 0;
        local_80 = (byte *)0x0;
        FUN_008fce60(&local_90,*(undefined8 *)(param_1[0x89] + uVar9 * 8));
        bVar2 = *param_2;
        uVar6 = local_90 >> 1 & 0x7f;
        __n = uVar6;
        if ((local_90 & 1) != 0) {
          __n = local_88;
        }
        sVar1 = (ulong)(bVar2 >> 1);
        if ((bVar2 & 1) != 0) {
          sVar1 = *(size_t *)(param_2 + 8);
        }
        bVar4 = false;
        if (__n == sVar1) {
          pbVar8 = (byte *)((ulong)&local_90 | 1);
          if ((local_90 & 1) != 0) {
            pbVar8 = local_80;
          }
          __s2 = param_2 + 1;
          if ((bVar2 & 1) != 0) {
            __s2 = *(byte **)(param_2 + 0x10);
          }
          if ((local_90 & 1) == 0) {
            if (__n != 0) {
              lVar7 = -uVar6;
              pbVar8 = (byte *)((ulong)&local_90 | 1);
              do {
                if (*pbVar8 != *__s2) {
                  bVar4 = false;
                  goto LAB_00aa57e0;
                }
                pbVar8 = pbVar8 + 1;
                lVar7 = lVar7 + 1;
                __s2 = __s2 + 1;
              } while (lVar7 != 0);
            }
          }
          else if (__n != 0) {
            iVar5 = memcmp(pbVar8,__s2,__n);
            bVar4 = iVar5 == 0;
            goto LAB_00aa57e0;
          }
          bVar4 = true;
        }
LAB_00aa57e0:
        local_78 = bVar4;
        local_77 = 1;
        FUN_00aa5e20(auStack_d0,&local_90);
        if ((local_90 & 1) != 0) {
          operator_delete(local_80);
        }
        uVar6 = (ulong)*(uint *)(param_1 + 0x88);
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < uVar6);
  }
  (**(code **)(*param_1 + 0x50))(param_1,local_138);
  local_138[0] = &PTR_FUN_027bbc28;
  FUN_009577b8(auStack_a0,1);
  FUN_0095783c(auStack_b0,1);
  FUN_0095783c(auStack_c0,1);
  FUN_0095783c(auStack_d0,1);
  FUN_0095783c(auStack_e0,1);
  FUN_0095783c(auStack_f0,1);
  FUN_009578b4(auStack_100,1);
  FUN_00957938(auStack_110,1);
  FUN_00e84dd8(local_138);
  if (*(long *)(lVar3 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00aa58d8(long param_1,byte *param_2)

{
  ulong uVar1;
  int iVar2;
  char *__s;
  size_t sVar3;
  byte *pbVar4;
  
  __s = (char *)FUN_00aa5da0();
  sVar3 = strlen(__s);
  uVar1 = (ulong)(*param_2 >> 1);
  if ((*param_2 & 1) != 0) {
    uVar1 = *(ulong *)(param_2 + 8);
  }
  if ((sVar3 == uVar1) && (iVar2 = FUN_0090d610(param_2,0,0xffffffffffffffff,__s,sVar3), iVar2 == 0)
     ) {
    return;
  }
  if ((*(byte *)(param_1 + 0x28) & 1) == 0) {
    param_1 = param_1 + 0x29;
  }
  else {
    param_1 = *(long *)(param_1 + 0x38);
  }
  pbVar4 = *(byte **)(param_2 + 0x10);
  if ((*param_2 & 1) == 0) {
    pbVar4 = param_2 + 1;
  }
  FUN_0093727c(param_1,pbVar4);
  return;
}




byte * FUN_00aa597c(long param_1,byte *param_2)

{
  ulong uVar1;
  size_t __n;
  byte *__s2;
  uint uVar2;
  byte bVar3;
  int iVar4;
  byte *pbVar5;
  long lVar6;
  byte *pbVar7;
  ulong uVar8;
  long lVar9;
  byte *pbVar10;
  
  uVar2 = *(uint *)(param_1 + 0x440);
  if (uVar2 != 0) {
    __n = *(size_t *)(param_2 + 8);
    __s2 = *(byte **)(param_2 + 0x10);
    lVar9 = *(long *)(param_1 + 0x448);
    uVar8 = 0;
    if ((*param_2 & 1) == 0) {
      __s2 = param_2 + 1;
      __n = (ulong)(*param_2 >> 1);
    }
    do {
      pbVar10 = *(byte **)(lVar9 + uVar8 * 8);
      bVar3 = *pbVar10;
      uVar1 = (ulong)(bVar3 >> 1);
      if ((bVar3 & 1) != 0) {
        uVar1 = *(ulong *)(pbVar10 + 8);
      }
      if (uVar1 == __n) {
        pbVar7 = *(byte **)(pbVar10 + 0x10);
        if ((bVar3 & 1) == 0) {
          pbVar7 = pbVar10 + 1;
        }
        if ((bVar3 & 1) == 0) {
          if (__n == 0) {
LAB_00aa5a4c:
            return pbVar10 + 0x48;
          }
          lVar6 = -(ulong)(bVar3 >> 1);
          pbVar7 = __s2;
          pbVar5 = pbVar10;
          while (pbVar5 = pbVar5 + 1, *pbVar5 == *pbVar7) {
            lVar6 = lVar6 + 1;
            pbVar7 = pbVar7 + 1;
            if (lVar6 == 0) goto LAB_00aa5a4c;
          }
        }
        else if ((__n == 0) || (iVar4 = memcmp(pbVar7,__s2,__n), iVar4 == 0)) goto LAB_00aa5a4c;
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < uVar2);
  }
  return &DAT_0320ffa8;
}




undefined1 * FUN_00aa5a78(long param_1)

{
  undefined1 *puVar1;
  
  puVar1 = &DAT_0320ffa8;
  if (*(long *)(param_1 + 0x458) != 0) {
    puVar1 = (undefined1 *)(*(long *)(param_1 + 0x458) + 0x48);
  }
  return puVar1;
}




void FUN_00aa5a94(void)

{
  FUN_009580b8();
  FUN_009620d8();
  return;
}




void FUN_00aa5aa8(uint *param_1,undefined8 *param_2)

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
    FUN_00aa5f24(param_1,uVar1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




void FUN_00aa5b30(long *param_1)

{
  size_t __n;
  size_t sVar1;
  byte bVar2;
  long lVar3;
  bool bVar4;
  int iVar5;
  undefined8 uVar6;
  byte *__s2;
  uint uVar7;
  byte *pbVar8;
  long lVar9;
  byte *pbVar10;
  ulong uVar11;
  byte local_150 [8];
  size_t local_148;
  byte *local_140;
  undefined **local_138 [5];
  undefined1 auStack_110 [16];
  undefined1 auStack_100 [16];
  undefined1 auStack_f0 [16];
  undefined1 auStack_e0 [16];
  undefined1 auStack_d0 [16];
  undefined1 auStack_c0 [16];
  undefined1 auStack_b0 [16];
  undefined1 auStack_a0 [16];
  ulong local_90 [2];
  void *local_80;
  bool local_78;
  undefined1 local_77;
  long local_70;
  
  lVar3 = tpidr_el0;
  local_70 = *(long *)(lVar3 + 0x28);
  FUN_00e84dac(local_138);
  local_138[0] = &PTR_FUN_027bbc28;
  memset(auStack_110,0,0x80);
  uVar6 = FUN_00aa5da0(param_1);
  FUN_008fa54c(local_150,uVar6);
  uVar7 = *(uint *)(param_1 + 0x88);
  if (uVar7 != 0) {
    uVar11 = 0;
    do {
      lVar9 = param_1[0x89];
      if (*(long *)(lVar9 + uVar11 * 8) != 0) {
        local_90[0] = 0;
        local_90[1] = 0;
        local_80 = (void *)0x0;
        __n = (ulong)(local_150[0] >> 1);
        if ((local_150[0] & 1) != 0) {
          __n = local_148;
        }
        if (__n == 0) {
          pbVar10 = *(byte **)(lVar9 + uVar11 * 8);
          bVar4 = uVar11 == 0;
        }
        else {
          pbVar10 = *(byte **)(lVar9 + uVar11 * 8);
          bVar2 = *pbVar10;
          sVar1 = (ulong)(bVar2 >> 1);
          if ((bVar2 & 1) != 0) {
            sVar1 = *(size_t *)(pbVar10 + 8);
          }
          bVar4 = false;
          if (sVar1 == __n) {
            __s2 = (byte *)((ulong)local_150 | 1);
            if ((local_150[0] & 1) != 0) {
              __s2 = local_140;
            }
            if ((bVar2 & 1) == 0) {
              lVar9 = -(ulong)(bVar2 >> 1);
              pbVar8 = pbVar10;
              do {
                pbVar8 = pbVar8 + 1;
                if (*pbVar8 != *__s2) {
                  bVar4 = false;
                  goto LAB_00aa5c80;
                }
                lVar9 = lVar9 + 1;
                __s2 = __s2 + 1;
              } while (lVar9 != 0);
              bVar4 = true;
            }
            else {
              iVar5 = memcmp(*(void **)(pbVar10 + 0x10),__s2,__n);
              bVar4 = iVar5 == 0;
            }
          }
        }
LAB_00aa5c80:
        local_78 = bVar4;
        FUN_008fce60(local_90,pbVar10);
        local_77 = 1;
        FUN_00aa5e20(auStack_d0,local_90);
        if (local_78 != false) {
          FUN_00aa58d8(param_1,*(undefined8 *)(param_1[0x89] + uVar11 * 8));
        }
        if ((local_90[0] & 1) != 0) {
          operator_delete(local_80);
        }
        uVar7 = *(uint *)(param_1 + 0x88);
      }
      uVar11 = uVar11 + 1;
    } while (uVar11 < uVar7);
  }
  (**(code **)(*param_1 + 0x50))(param_1,local_138);
  if ((local_150[0] & 1) != 0) {
    operator_delete(local_140);
  }
  local_138[0] = &PTR_FUN_027bbc28;
  FUN_009577b8(auStack_a0,1);
  FUN_0095783c(auStack_b0,1);
  FUN_0095783c(auStack_c0,1);
  FUN_0095783c(auStack_d0,1);
  FUN_0095783c(auStack_e0,1);
  FUN_0095783c(auStack_f0,1);
  FUN_009578b4(auStack_100,1);
  FUN_00957938(auStack_110,1);
  FUN_00e84dd8(local_138);
  if (*(long *)(lVar3 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




long FUN_00aa5da0(long param_1)

{
  long lVar1;
  byte *pbVar2;
  
  pbVar2 = *(byte **)(param_1 + 0x458);
  if ((*(byte *)(param_1 + 0x28) & 1) == 0) {
    lVar1 = param_1 + 0x29;
  }
  else {
    lVar1 = *(long *)(param_1 + 0x38);
  }
  if (pbVar2 == (byte *)0x0) {
    pbVar2 = DAT_0320ffb8;
    if ((DAT_0320ffa8 & 1) == 0) {
      pbVar2 = &DAT_0320ffa9;
    }
  }
  else if ((*pbVar2 & 1) == 0) {
    pbVar2 = pbVar2 + 1;
  }
  else {
    pbVar2 = *(byte **)(pbVar2 + 0x10);
  }
  FUN_009375d4(lVar1,param_1 + 0x40,0x400,pbVar2);
  return param_1 + 0x40;
}




void FUN_00aa5e20(uint *param_1,long param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
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
    uVar2 = uVar4 + 1;
    if (uVar4 + 1 <= uVar3) {
      uVar2 = uVar3;
    }
    FUN_009575f0(param_1,uVar2);
    uVar4 = *param_1;
  }
  *param_1 = uVar4 + 1;
  lVar1 = *(long *)(param_1 + 2) + (ulong)(uVar4 + 1) * 0x20;
  FUN_008fcdb8(lVar1 + -0x20,param_2);
  *(undefined2 *)(lVar1 + -8) = *(undefined2 *)(param_2 + 0x18);
  return;
}




void FUN_00aa5eb4(void)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x460);
  FUN_00aa4fa8();
  DAT_03133cc8 = pvVar1;
  return;
}




void FUN_00aa5ee4(void)

{
  if (DAT_03133cc8 != (long *)0x0) {
    (**(code **)(*DAT_03133cc8 + 8))();
  }
  DAT_03133cc8 = (long *)0x0;
  return;
}




undefined8 FUN_00aa5f18(void)

{
  return DAT_03133cc8;
}




void FUN_00aa5f24(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 << 3);
    puVar2 = *(undefined8 **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar3 = (ulong)*param_1 << 3;
      puVar4 = puVar1;
      do {
        lVar3 = lVar3 + -8;
        *puVar4 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar4 = puVar4 + 1;
      } while (lVar3 != 0);
      puVar2 = *(undefined8 **)(param_1 + 2);
    }
    param_1[1] = param_2;
    if (puVar2 != (undefined8 *)0x0) {
      operator_delete__(puVar2);
    }
    *(undefined8 **)(param_1 + 2) = puVar1;
  }
  return;
}




void FUN_00aa5fa4(void *param_1)

{
  memset(param_1,0,0x98);
  *(undefined4 *)((long)param_1 + 0x98) = 4;
  return;
}




void FUN_00aa5fd4(long param_1)

{
  uint uVar1;
  byte *pbVar2;
  uint *puVar3;
  ulong uVar4;
  
  puVar3 = (uint *)(param_1 + 0x10);
  uVar1 = *puVar3;
  if (uVar1 != 0) {
    uVar4 = 0;
    do {
      pbVar2 = *(byte **)(*(long *)(param_1 + 0x18) + uVar4 * 8);
      if (pbVar2 != (byte *)0x0) {
        if ((*pbVar2 & 1) != 0) {
          operator_delete(*(void **)(pbVar2 + 0x10));
        }
        operator_delete(pbVar2);
        uVar1 = *puVar3;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar1);
  }
  if ((*(byte *)(param_1 + 0x80) & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x90));
  }
  if ((*(byte *)(param_1 + 0x68) & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x78));
  }
  if ((*(byte *)(param_1 + 0x50) & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x60));
  }
  if ((*(byte *)(param_1 + 0x38) & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x48));
  }
  if ((*(byte *)(param_1 + 0x20) & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x30));
  }
  if (*(void **)(param_1 + 0x18) != (void *)0x0) {
    operator_delete__(*(void **)(param_1 + 0x18));
    puVar3[0] = 0;
    puVar3[1] = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  FUN_00951534(param_1,1);
  return;
}

