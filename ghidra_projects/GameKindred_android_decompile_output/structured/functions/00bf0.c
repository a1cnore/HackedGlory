// functions/00bf0 — 33 functions
#include "libGameKindred.h"




void FUN_00bf021c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027efd98;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return;
}




void FUN_00bf0260(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027efd98;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  operator_delete(param_1);
  return;
}




void FUN_00bf02a4(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR___cxa_pure_virtual_027efde8;
  pvVar1 = operator_new(0x49b8);
  FUN_00c62aac();
  param_1[1] = pvVar1;
  param_1[2] = 0;
  *(undefined8 **)((long)pvVar1 + 0xb8) = param_1;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined2 *)(param_1 + 2) = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *(undefined1 *)((long)param_1 + 0x2c) = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *param_1 = &PTR_FUN_027efdb8;
  param_1[6] = 0;
  return;
}




void FUN_00bf0310(undefined8 *param_1)

{
  long lVar1;
  uint *puVar2;
  long lVar3;
  long lVar4;
  
  *param_1 = &PTR_FUN_027efdb8;
  puVar2 = (uint *)FUN_00cdbb24(param_1 + 6);
  if (puVar2 != (uint *)0x0) {
    lVar4 = (ulong)*puVar2 << 5;
    lVar1 = *(long *)(puVar2 + 2);
    do {
      lVar3 = lVar1;
      if (lVar4 == 0) goto LAB_00bf036c;
      lVar4 = lVar4 + -0x20;
      lVar1 = lVar3 + 0x20;
    } while (*(undefined8 **)(lVar3 + 8) != param_1);
    FUN_00bd709c(puVar2,lVar3);
  }
LAB_00bf036c:
  if ((*(byte *)(param_1 + 6) & 1) != 0) {
    operator_delete((void *)param_1[8]);
  }
  if ((*(byte *)(param_1 + 2) & 1) != 0) {
    operator_delete((void *)param_1[4]);
  }
  *param_1 = &PTR___cxa_pure_virtual_027efde8;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return;
}




void FUN_00bf03c0(void *param_1)

{
  FUN_00bf0310();
  operator_delete(param_1);
  return;
}




void FUN_00bf03e4(long param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  ushort uVar4;
  long lVar5;
  float fVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long *plVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined8 local_88;
  long lStack_80;
  long local_78;
  code *pcStack_70;
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  FUN_008fce60(param_1 + 0x30);
  lVar7 = FUN_00cdbb24(param_1 + 0x30);
  if ((lVar7 != 0) && ((*(ushort *)(lVar7 + 0xb0) >> 8 & 1) != 0)) {
    FUN_00c62edc(*(undefined8 *)(param_1 + 8));
    uVar12 = *(undefined8 *)(param_1 + 8);
    lVar8 = FUN_00cdda38(lVar7);
    uVar13 = *(undefined8 *)(lVar8 + 8);
    uVar9 = FUN_00cdda38(lVar7);
    FUN_00c62eec(uVar12,uVar13,uVar9);
    lVar8 = FUN_00cdda38(lVar7);
    plVar10 = *(long **)(lVar8 + 0x28);
    lVar8 = *plVar10;
    if (lVar8 != 0) {
      do {
        plVar10 = plVar10 + 1;
        if (*(char *)(lVar8 + 0x34) == '\0') {
          fVar14 = *(float *)(lVar8 + 8);
          fVar15 = *(float *)(lVar8 + 0xc);
          uVar9 = *(undefined8 *)(param_1 + 8);
          uVar1 = *(undefined4 *)(lVar8 + 0x2c);
          uVar2 = *(undefined4 *)(lVar8 + 0x30);
          fVar16 = (float)((char)*(ushort *)(lVar7 + 0xb0) + -1);
          if (fVar16 <= 0.0) {
            fVar16 = 0.0;
          }
          fVar6 = fVar15;
          if ((*(ushort *)(lVar7 + 0xb0) & 0x200) != 0) {
            fVar6 = 0.0;
          }
          uVar12 = FUN_00cb3700();
          FUN_00c62fc8(fVar14 + fVar15 * fVar16,fVar6,uVar9,uVar2,uVar1,uVar12);
        }
        lVar8 = *plVar10;
      } while (lVar8 != 0);
    }
    FUN_00c630fc(*(undefined8 *)(param_1 + 8),
                 (ulong)(long)(short)(*(short *)(lVar7 + 0xb0) << 8) >> 8);
    uVar4 = *(ushort *)(lVar7 + 0xb0);
    if ('\0' < (char)uVar4) {
      uVar11 = *(ulong *)(lVar7 + 0xa8);
      FUN_00c63234(*(undefined8 *)(param_1 + 8),(long)(short)uVar11,(long)(uVar11 << 0x20) >> 0x30,
                   uVar11 >> 0x20);
      uVar9 = *(undefined8 *)(param_1 + 8);
      uVar3 = *(uint *)(lVar7 + 0xac);
      lVar8 = FUN_009580b8();
      FUN_00c6346c(uVar9,uVar3 <= *(uint *)(lVar8 + 0x5454));
      uVar4 = *(ushort *)(lVar7 + 0xb0);
    }
    FUN_00c633ac(*(undefined8 *)(param_1 + 8),uVar4 >> 9 & 1);
    local_88 = 0;
    pcStack_70 = thunk_FUN_00bf07f4;
    lStack_80 = param_1;
    local_78 = param_1;
    FUN_00bd6f78(lVar7,&local_88);
  }
  if (*(long *)(lVar5 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00bf05c0(long param_1)

{
  ulong uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  lVar3 = FUN_00cdbb24(param_1 + 0x30);
  if (lVar3 == 0) {
    return;
  }
  uVar2 = *(uint *)(lVar3 + 0xac);
  lVar4 = FUN_009580b8();
  if (*(uint *)(lVar4 + 0x5454) < uVar2) {
    FUN_00bf0680();
    return;
  }
  uVar1 = *(ulong *)(param_1 + 0x38);
  lVar4 = *(long *)(param_1 + 0x40);
  *(undefined1 *)(param_1 + 0x2c) = 1;
  if ((*(byte *)(param_1 + 0x30) & 1) == 0) {
    lVar4 = param_1 + 0x31;
    uVar1 = (ulong)(*(byte *)(param_1 + 0x30) >> 1);
  }
  FUN_008fcea8(param_1 + 0x10,lVar4,uVar1);
  *(int *)(param_1 + 0x28) = (char)*(undefined2 *)(lVar3 + 0xb0) + 1;
  uVar5 = FUN_009b8d90();
  FUN_009bb9e0(uVar5,param_1 + 0x30);
  FUN_00cddfc8(lVar3);
  return;
}




void FUN_00bf0680(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 local_d0;
  void *local_c8;
  undefined8 local_c0 [2];
  void *local_b0;
  void *local_a8;
  undefined1 local_9f;
  byte local_98;
  void *local_88;
  byte local_80;
  void *local_70;
  undefined8 local_64;
  undefined4 local_5c;
  byte local_58;
  void *local_48;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00cae8f0();
  FUN_008fa54c(local_c0,uVar2);
  FUN_00affa44(local_c0);
  if (((byte)local_c0[0] & 1) != 0) {
    operator_delete(local_b0);
  }
  FUN_00aff894(local_c0);
  uVar2 = FUN_00e6ce7c("MENU_MARKET_GLORY_PURCHASE_POPUP_TITLE",0);
  thunk_FUN_00e7051c(&local_d0,uVar2);
  FUN_00910394(&local_b0,&local_d0);
  local_c0[0] = 0x447a000044c80000;
  local_5c = 1;
  FUN_00aff91c(local_c0,PTR_s_build___MenuPartsCommon_tga_02be3530,"popup_fill",&DAT_01bbb27c);
  local_64 = 0xffa3781effa4781e;
  local_9f = 1;
  uVar2 = FUN_00aa2040(PTR_s_MENU_CURRENCY_PURCHASE_POPUP_02be9d38,local_c0);
  FUN_00cbd980(uVar2,0);
  if (local_c8 != (void *)0x0) {
    operator_delete__(local_c8);
    local_d0 = 0;
    local_c8 = (void *)0x0;
  }
  if ((local_58 & 1) != 0) {
    operator_delete(local_48);
  }
  if ((local_80 & 1) != 0) {
    operator_delete(local_70);
  }
  if ((local_98 & 1) != 0) {
    operator_delete(local_88);
  }
  if (local_a8 != (void *)0x0) {
    operator_delete__(local_a8);
    local_b0 = (void *)0x0;
    local_a8 = (void *)0x0;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00bf07dc(void)

{
  FUN_00affa84();
  FUN_009b8d90();
  FUN_009bbbfc();
  return;
}




void FUN_00bf07f4(long param_1,long param_2)

{
  byte *pbVar1;
  size_t __n;
  size_t sVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  char *pcVar11;
  void *__s1;
  char *__s2;
  long lVar12;
  
  if (*(char *)(param_1 + 0x2c) != '\0') {
    bVar3 = *(byte *)(param_1 + 0x30);
    bVar4 = *(byte *)(param_1 + 0x10);
    __n = (ulong)(bVar3 >> 1);
    if ((bVar3 & 1) != 0) {
      __n = *(size_t *)(param_1 + 0x38);
    }
    sVar2 = (ulong)(bVar4 >> 1);
    if ((bVar4 & 1) != 0) {
      sVar2 = *(size_t *)(param_1 + 0x18);
    }
    if (__n == sVar2) {
      __s1 = *(void **)(param_1 + 0x40);
      __s2 = *(char **)(param_1 + 0x20);
      pbVar1 = (byte *)(param_1 + 0x10);
      if ((bVar3 & 1) == 0) {
        __s1 = (void *)(param_1 + 0x31);
      }
      if ((bVar4 & 1) == 0) {
        __s2 = (char *)(param_1 + 0x11);
      }
      if ((bVar3 & 1) == 0) {
        if (__n != 0) {
          pcVar11 = (char *)(param_1 + 0x31);
          lVar10 = -(ulong)(bVar3 >> 1);
          do {
            if (*pcVar11 != *__s2) {
              return;
            }
            pcVar11 = pcVar11 + 1;
            lVar10 = lVar10 + 1;
            __s2 = __s2 + 1;
          } while (lVar10 != 0);
        }
      }
      else if ((__n != 0) && (iVar5 = memcmp(__s1,__s2,__n), iVar5 != 0)) {
        return;
      }
      if (((*(ushort *)(param_2 + 0xb0) >> 8 & 1) == 0) ||
         (*(int *)(param_1 + 0x28) != (int)(char)*(ushort *)(param_2 + 0xb0))) {
        uVar6 = FUN_00e6ce7c("GENERIC_DIALOG_ERROR",0);
        uVar7 = FUN_00e6ce7c("MENU_TALENTS_UPGRADE_GENERIC_ERROR",0);
        uVar8 = FUN_00e6ce7c("GENERIC_DIALOG_OKAY",0);
        FUN_00a9b8b8(uVar6,uVar7,uVar8,param_1,0);
      }
      else {
        FUN_009b8d90();
        FUN_009bb9e8();
        if ((*(byte *)(param_2 + 0x78) & 1) == 0) {
          lVar10 = param_2 + 0x79;
        }
        else {
          lVar10 = *(long *)(param_2 + 0x88);
        }
        if ((*(byte *)(param_2 + 0x90) & 1) == 0) {
          lVar12 = param_2 + 0x91;
        }
        else {
          lVar12 = *(long *)(param_2 + 0xa0);
        }
        lVar9 = FUN_00cdda38(param_2);
        FUN_0090682c(lVar10,lVar12,*(undefined4 *)(lVar9 + 0x18),
                     (ulong)(long)(short)(*(short *)(param_2 + 0xb0) << 8) >> 8,
                     *(ulong *)(param_2 + 0xa8) >> 0x20,
                     (long)(*(ulong *)(param_2 + 0xa8) << 0x20) >> 0x30);
      }
      if ((*pbVar1 & 1) == 0) {
        pbVar1[0] = 0;
        pbVar1[1] = 0;
      }
      else {
        **(undefined1 **)(param_1 + 0x20) = 0;
        *(undefined8 *)(param_1 + 0x18) = 0;
      }
      *(undefined4 *)(param_1 + 0x28) = 0;
      *(undefined1 *)(param_1 + 0x2c) = 0;
    }
  }
  return;
}




void FUN_00bf09c0(byte *param_1)

{
  if ((*param_1 & 1) == 0) {
    param_1[0] = 0;
    param_1[1] = 0;
  }
  else {
    **(undefined1 **)(param_1 + 0x10) = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
  }
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  return;
}




void FUN_00bf09e8(undefined8 *param_1)

{
  *param_1 = &PTR___cxa_pure_virtual_027efde8;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return;
}




void FUN_00bf0a2c(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xbf0a30);
  (*pcVar1)();
}




void thunk_FUN_00bf07f4(long param_1,long param_2)

{
  byte *pbVar1;
  size_t __n;
  size_t sVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  char *pcVar11;
  void *__s1;
  char *__s2;
  long lVar12;
  
  if (*(char *)(param_1 + 0x2c) != '\0') {
    bVar3 = *(byte *)(param_1 + 0x30);
    bVar4 = *(byte *)(param_1 + 0x10);
    __n = (ulong)(bVar3 >> 1);
    if ((bVar3 & 1) != 0) {
      __n = *(size_t *)(param_1 + 0x38);
    }
    sVar2 = (ulong)(bVar4 >> 1);
    if ((bVar4 & 1) != 0) {
      sVar2 = *(size_t *)(param_1 + 0x18);
    }
    if (__n == sVar2) {
      __s1 = *(void **)(param_1 + 0x40);
      __s2 = *(char **)(param_1 + 0x20);
      pbVar1 = (byte *)(param_1 + 0x10);
      if ((bVar3 & 1) == 0) {
        __s1 = (void *)(param_1 + 0x31);
      }
      if ((bVar4 & 1) == 0) {
        __s2 = (char *)(param_1 + 0x11);
      }
      if ((bVar3 & 1) == 0) {
        if (__n != 0) {
          pcVar11 = (char *)(param_1 + 0x31);
          lVar10 = -(ulong)(bVar3 >> 1);
          do {
            if (*pcVar11 != *__s2) {
              return;
            }
            pcVar11 = pcVar11 + 1;
            lVar10 = lVar10 + 1;
            __s2 = __s2 + 1;
          } while (lVar10 != 0);
        }
      }
      else if ((__n != 0) && (iVar5 = memcmp(__s1,__s2,__n), iVar5 != 0)) {
        return;
      }
      if (((*(ushort *)(param_2 + 0xb0) >> 8 & 1) == 0) ||
         (*(int *)(param_1 + 0x28) != (int)(char)*(ushort *)(param_2 + 0xb0))) {
        uVar6 = FUN_00e6ce7c("GENERIC_DIALOG_ERROR",0);
        uVar7 = FUN_00e6ce7c("MENU_TALENTS_UPGRADE_GENERIC_ERROR",0);
        uVar8 = FUN_00e6ce7c("GENERIC_DIALOG_OKAY",0);
        FUN_00a9b8b8(uVar6,uVar7,uVar8,param_1,0);
      }
      else {
        FUN_009b8d90();
        FUN_009bb9e8();
        if ((*(byte *)(param_2 + 0x78) & 1) == 0) {
          lVar10 = param_2 + 0x79;
        }
        else {
          lVar10 = *(long *)(param_2 + 0x88);
        }
        if ((*(byte *)(param_2 + 0x90) & 1) == 0) {
          lVar12 = param_2 + 0x91;
        }
        else {
          lVar12 = *(long *)(param_2 + 0xa0);
        }
        lVar9 = FUN_00cdda38(param_2);
        FUN_0090682c(lVar10,lVar12,*(undefined4 *)(lVar9 + 0x18),
                     (ulong)(long)(short)(*(short *)(param_2 + 0xb0) << 8) >> 8,
                     *(ulong *)(param_2 + 0xa8) >> 0x20,
                     (long)(*(ulong *)(param_2 + 0xa8) << 0x20) >> 0x30);
      }
      if ((*pbVar1 & 1) == 0) {
        pbVar1[0] = 0;
        pbVar1[1] = 0;
      }
      else {
        **(undefined1 **)(param_1 + 0x20) = 0;
        *(undefined8 *)(param_1 + 0x18) = 0;
      }
      *(undefined4 *)(param_1 + 0x28) = 0;
      *(undefined1 *)(param_1 + 0x2c) = 0;
    }
  }
  return;
}




void FUN_00bf0a34(undefined8 *param_1)

{
  long lVar1;
  void *pvVar2;
  long lVar3;
  undefined8 local_58;
  undefined8 *puStack_50;
  undefined8 *local_48;
  code *pcStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR___cxa_pure_virtual_027efe48;
  pvVar2 = operator_new(0x290);
  FUN_00c637dc();
  *(undefined8 **)((long)pvVar2 + 0xb8) = param_1;
  *param_1 = &PTR_FUN_027efe18;
  param_1[1] = pvVar2;
  lVar3 = FUN_00cdbb18();
  local_58 = 0;
  pcStack_40 = thunk_FUN_00bf0b7c;
  puStack_50 = param_1;
  local_48 = param_1;
  FUN_00ad97b4(lVar3 + 0x30,&local_58);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00bf0ad4(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  *param_1 = &PTR_FUN_027efe18;
  lVar2 = FUN_00cdbb18();
  lVar4 = (ulong)*(uint *)(lVar2 + 0x30) << 5;
  lVar1 = *(long *)(lVar2 + 0x38);
  do {
    lVar3 = lVar1;
    if (lVar4 == 0) goto LAB_00bf0b24;
    lVar4 = lVar4 + -0x20;
    lVar1 = lVar3 + 0x20;
  } while (*(undefined8 **)(lVar3 + 8) != param_1);
  FUN_00ad98d8((uint *)(lVar2 + 0x30),lVar3);
LAB_00bf0b24:
  *param_1 = &PTR___cxa_pure_virtual_027efe48;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return;
}




void FUN_00bf0b58(void *param_1)

{
  FUN_00bf0ad4();
  operator_delete(param_1);
  return;
}




void FUN_00bf0b7c(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 *puVar6;
  ulong local_50;
  undefined8 *local_48;
  code *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00c638e0(*(undefined8 *)(param_1 + 8));
  puVar2 = (undefined8 *)FUN_00ce9af4();
  local_50 = 0;
  local_48 = (undefined8 *)0x0;
  plVar5 = (long *)*puVar2;
  lVar3 = *plVar5;
  if (lVar3 == 0) {
    uVar4 = 0;
  }
  else {
    do {
      if (*(char *)(lVar3 + 8) != '\0') {
        FUN_00be1a9c(&local_50,plVar5);
      }
      plVar5 = plVar5 + 1;
      lVar3 = *plVar5;
    } while (lVar3 != 0);
    uVar4 = local_50 & 0xffffffff;
  }
  local_40 = FUN_00ce9c44;
  FUN_00be1edc(local_48,local_48 + uVar4,&local_40);
  plVar5 = *(long **)(param_1 + 8);
  puVar2 = local_48;
  if ((int)local_50 != 0) {
    do {
      puVar6 = puVar2 + 1;
      FUN_00c63968(plVar5,*puVar2);
      plVar5 = *(long **)(param_1 + 8);
      puVar2 = puVar6;
    } while (puVar6 != local_48 + (local_50 & 0xffffffff));
  }
  (**(code **)(*plVar5 + 0x148))();
  if (local_48 != (undefined8 *)0x0) {
    operator_delete__(local_48);
    local_50 = 0;
    local_48 = (undefined8 *)0x0;
  }
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00bf0c74(long param_1)

{
  FUN_00c638e0(*(undefined8 *)(param_1 + 8));
  return;
}




void FUN_00bf0c7c(long param_1)

{
  FUN_00c63a7c(*(undefined8 *)(param_1 + 8));
  return;
}




void FUN_00bf0c84(undefined8 param_1,ulong param_2)

{
  long lVar1;
  undefined8 uVar2;
  byte local_40 [16];
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if ((param_2 & 1) == 0) {
    uVar2 = FUN_00cae8f0();
    FUN_008fa54c(local_40,uVar2);
    FUN_00affa44(local_40);
    if ((local_40[0] & 1) != 0) {
      operator_delete(local_30);
    }
  }
  else {
    FUN_00bf0b7c();
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00bf0cf8(long param_1,uint param_2)

{
  if ((param_2 & 1) != 0) {
    return;
  }
  FUN_00c638e0(*(undefined8 *)(param_1 + 8));
  return;
}




void thunk_FUN_00bf0b7c(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 *puVar6;
  ulong uStack_50;
  undefined8 *puStack_48;
  code *pcStack_40;
  long lStack_38;
  
  lVar1 = tpidr_el0;
  lStack_38 = *(long *)(lVar1 + 0x28);
  FUN_00c638e0(*(undefined8 *)(param_1 + 8));
  puVar2 = (undefined8 *)FUN_00ce9af4();
  uStack_50 = 0;
  puStack_48 = (undefined8 *)0x0;
  plVar5 = (long *)*puVar2;
  lVar3 = *plVar5;
  if (lVar3 == 0) {
    uVar4 = 0;
  }
  else {
    do {
      if (*(char *)(lVar3 + 8) != '\0') {
        FUN_00be1a9c(&uStack_50,plVar5);
      }
      plVar5 = plVar5 + 1;
      lVar3 = *plVar5;
    } while (lVar3 != 0);
    uVar4 = uStack_50 & 0xffffffff;
  }
  pcStack_40 = FUN_00ce9c44;
  FUN_00be1edc(puStack_48,puStack_48 + uVar4,&pcStack_40);
  plVar5 = *(long **)(param_1 + 8);
  puVar2 = puStack_48;
  if ((int)uStack_50 != 0) {
    do {
      puVar6 = puVar2 + 1;
      FUN_00c63968(plVar5,*puVar2);
      plVar5 = *(long **)(param_1 + 8);
      puVar2 = puVar6;
    } while (puVar6 != puStack_48 + (uStack_50 & 0xffffffff));
  }
  (**(code **)(*plVar5 + 0x148))();
  if (puStack_48 != (undefined8 *)0x0) {
    operator_delete__(puStack_48);
    uStack_50 = 0;
    puStack_48 = (undefined8 *)0x0;
  }
  if (*(long *)(lVar1 + 0x28) != lStack_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00bf0d0c(undefined8 *param_1)

{
  *param_1 = &PTR___cxa_pure_virtual_027efe48;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return;
}




void FUN_00bf0d50(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xbf0d54);
  (*pcVar1)();
}




void thunk_FUN_00bf0b7c(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 *puVar6;
  ulong uStack_50;
  undefined8 *puStack_48;
  code *pcStack_40;
  long lStack_38;
  
  lVar1 = tpidr_el0;
  lStack_38 = *(long *)(lVar1 + 0x28);
  FUN_00c638e0(*(undefined8 *)(param_1 + 8));
  puVar2 = (undefined8 *)FUN_00ce9af4();
  uStack_50 = 0;
  puStack_48 = (undefined8 *)0x0;
  plVar5 = (long *)*puVar2;
  lVar3 = *plVar5;
  if (lVar3 == 0) {
    uVar4 = 0;
  }
  else {
    do {
      if (*(char *)(lVar3 + 8) != '\0') {
        FUN_00be1a9c(&uStack_50,plVar5);
      }
      plVar5 = plVar5 + 1;
      lVar3 = *plVar5;
    } while (lVar3 != 0);
    uVar4 = uStack_50 & 0xffffffff;
  }
  pcStack_40 = FUN_00ce9c44;
  FUN_00be1edc(puStack_48,puStack_48 + uVar4,&pcStack_40);
  plVar5 = *(long **)(param_1 + 8);
  puVar2 = puStack_48;
  if ((int)uStack_50 != 0) {
    do {
      puVar6 = puVar2 + 1;
      FUN_00c63968(plVar5,*puVar2);
      plVar5 = *(long **)(param_1 + 8);
      puVar2 = puVar6;
    } while (puVar6 != puStack_48 + (uStack_50 & 0xffffffff));
  }
  (**(code **)(*plVar5 + 0x148))();
  if (puStack_48 != (undefined8 *)0x0) {
    operator_delete__(puStack_48);
    uStack_50 = 0;
    puStack_48 = (undefined8 *)0x0;
  }
  if (*(long *)(lVar1 + 0x28) != lStack_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00bf0d58(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR___cxa_pure_virtual_027efeb0;
  pvVar1 = operator_new(0x7a0);
  FUN_00c63dfc();
  *(undefined8 **)((long)pvVar1 + 0x148) = param_1;
  param_1[3] = 0;
  param_1[4] = 0;
  *param_1 = &PTR_FUN_027efe78;
  param_1[1] = pvVar1;
  param_1[2] = 0;
  return;
}




void FUN_00bf0db0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027efe78;
  FUN_00951534(param_1 + 2,1);
  *param_1 = &PTR___cxa_pure_virtual_027efeb0;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return;
}




void FUN_00bf0e0c(void *param_1)

{
  FUN_00bf0db0();
  operator_delete(param_1);
  return;
}




void FUN_00bf0e30(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  uint *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  code *local_80 [2];
  void *local_70;
  undefined1 auStack_68 [32];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  *(long *)(param_1 + 0x20) = param_2;
  FUN_00e6a8a8(auStack_68,"portrait_%s",*(undefined8 *)(param_2 + 0x10));
  uVar4 = *(undefined8 *)(param_1 + 8);
  FUN_008fa54c(local_80,auStack_68);
  FUN_00c6418c(uVar4,local_80);
  if (((byte)local_80[0] & 1) != 0) {
    operator_delete(local_70);
  }
  lVar2 = FUN_00ce9cb8(**(undefined8 **)(param_1 + 0x20));
  uVar5 = *(undefined8 *)(param_1 + 8);
  uVar4 = FUN_00e6ce7c(*(undefined8 *)(lVar2 + 0x28),0);
  FUN_00c64184(uVar5,uVar4);
  FUN_00951534(param_1 + 0x10,0);
  uVar4 = FUN_00cdbb18();
  puVar3 = (uint *)FUN_00cdc678(uVar4,**(undefined8 **)(param_1 + 0x20));
  if ((puVar3 != (uint *)0x0) && (*puVar3 != 0)) {
    lVar2 = 0;
    uVar6 = 0;
    do {
      FUN_0096204c(param_1 + 0x10,*(long *)(puVar3 + 2) + lVar2);
      uVar6 = uVar6 + 1;
      lVar2 = lVar2 + 0x18;
    } while (uVar6 < *puVar3);
  }
  local_80[0] = FUN_00cdbb44;
  FUN_00a6cbcc(*(long *)(param_1 + 0x18),
               *(long *)(param_1 + 0x18) + (ulong)*(uint *)(param_1 + 0x10) * 0x18,local_80);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00bf0f70(long param_1)

{
  FUN_00c641a4(*(undefined8 *)(param_1 + 8),param_1 + 0x10);
  return;
}




uint FUN_00bf0f80(long param_1)

{
  long lVar1;
  uint uVar2;
  
  lVar1 = FUN_00ce9cb8(**(undefined8 **)(param_1 + 0x20));
  if (*(byte **)(lVar1 + 0x20) != (byte *)0x0) {
    uVar2 = (uint)**(byte **)(lVar1 + 0x20);
    if (uVar2 == 0) {
      uVar2 = 0xffffffff;
    }
    return uVar2;
  }
  return 0xffffffff;
}




void FUN_00bf0fbc(long param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_00f08540(*(undefined8 *)(param_1 + 8));
  if (((uVar1 & 1) != 0) && ((*(byte *)(*(long *)(param_1 + 8) + 0x84) >> 2 & 1) != 0)) {
    FUN_00bf1000(param_1);
    return;
  }
  return;
}

