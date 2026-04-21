// functions/00bcf — 46 functions
#include "libGameKindred.h"




void FUN_00bcf074(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 << 5);
    puVar2 = *(undefined8 **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar3 = (ulong)*param_1 << 5;
      puVar4 = puVar1;
      do {
        uVar5 = puVar2[2];
        lVar3 = lVar3 + -0x20;
        puVar4[3] = puVar2[3];
        puVar4[2] = uVar5;
        uVar5 = *puVar2;
        puVar4[1] = puVar2[1];
        *puVar4 = uVar5;
        puVar4 = puVar4 + 4;
        puVar2 = puVar2 + 4;
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




void FUN_00bcf100(uint *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  
  uVar4 = *param_1;
  uVar3 = (uint)((ulong)((long)param_3 - (long)param_2) >> 5);
  if (uVar4 == uVar3) {
    if (*(void **)(param_1 + 2) != (void *)0x0) {
      operator_delete__(*(void **)(param_1 + 2));
      param_1[0] = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
    }
  }
  else {
    puVar1 = (undefined8 *)(*(long *)(param_1 + 2) + (ulong)uVar4 * 0x20);
    if (puVar1 != param_3) {
      do {
        uVar5 = param_3[2];
        param_2[3] = param_3[3];
        param_2[2] = uVar5;
        puVar2 = param_3 + 4;
        uVar5 = *param_3;
        param_2[1] = param_3[1];
        *param_2 = uVar5;
        param_2 = param_2 + 4;
        param_3 = puVar2;
      } while (puVar1 != puVar2);
      uVar4 = *param_1;
    }
    *param_1 = uVar4 - uVar3;
  }
  return;
}




void FUN_00bcf178(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_027ec5f8;
  pvVar1 = operator_new(200);
  FUN_00c25d60();
  param_1[1] = pvVar1;
  param_1[2] = 0;
  *(undefined8 **)((long)pvVar1 + 0xb8) = param_1;
  *param_1 = &PTR_FUN_027ec5d8;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}




void FUN_00bcf1d0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027ec5d8;
  if ((long *)param_1[2] != (long *)0x0) {
    (**(code **)(*(long *)param_1[2] + 8))();
  }
  *param_1 = &PTR_FUN_027ec5f8;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return;
}




void FUN_00bcf238(void *param_1)

{
  FUN_00bcf1d0();
  operator_delete(param_1);
  return;
}




void FUN_00bcf260(long param_1,undefined8 param_2)

{
  long lVar1;
  code *local_68;
  long lStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (*(long **)(param_1 + 0x10) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x10) + 8))();
  }
  *(undefined8 *)(param_1 + 0x10) = param_2;
  FUN_00c25f0c(*(undefined8 *)(param_1 + 8),param_2);
  local_40 = DAT_03210c64;
  local_68 = thunk_FUN_00cba3e4;
  local_58 = 0;
  uStack_50 = 0;
  lStack_60 = param_1;
  local_48 = param_2;
  FUN_009693a0(*(long *)(param_1 + 0x10) + 8,&local_68);
  local_68 = thunk_FUN_00cba3e4;
  local_40 = DAT_03139b40;
  local_58 = 0;
  uStack_50 = 0;
  lStack_60 = param_1;
  local_48 = param_2;
  FUN_009693a0(*(long *)(param_1 + 0x10) + 8,&local_68);
  *(undefined1 *)(param_1 + 0x18) = 1;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00bcf340(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027ec5f8;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return;
}




void FUN_00bcf384(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027ec5f8;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  operator_delete(param_1);
  return;
}




void FUN_00bcf3c8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027ec618;
  memset(param_1 + 1,0,0x80);
  return;
}




void FUN_00bcf3f4(long *param_1,undefined8 param_2,long param_3,int param_4,long param_5)

{
  long *plVar1;
  byte bVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  byte local_98 [16];
  void *local_88;
  ulong local_80;
  void *local_78;
  void *local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  FUN_008fce60(param_1 + 1);
  FUN_008fce60(param_1 + 0xd,param_3 + 0x378);
  FUN_008fce60(param_1 + 10,param_3 + 0x390);
  FUN_00e70570(&local_80,param_3 + 0x438);
  FUN_00bcf610(param_1,&local_80);
  if (local_78 != (void *)0x0) {
    operator_delete__(local_78);
    local_80 = 0;
    local_78 = (void *)0x0;
  }
  FUN_008fce60(param_1 + 4,param_3 + 0x3f0);
  FUN_008fce60(param_1 + 7,param_3 + 0x450);
  FUN_008fcdb8(&local_80,&DAT_0320ffa8);
  FUN_008fcdb8(local_98,&DAT_0320ffa8);
  bVar2 = *(byte *)(param_3 + 0x3c0);
  if ((bVar2 & 1) == 0) {
    if (bVar2 >> 1 == 0) goto LAB_00bcf570;
  }
  else if (*(long *)(param_3 + 0x3c8) == 0) goto LAB_00bcf570;
  if ((bVar2 & 1) == 0) {
    plVar5 = (long *)(param_3 + 0x3c1);
    uVar6 = (ulong)(bVar2 >> 1);
  }
  else {
    plVar5 = *(long **)(param_3 + 0x3d0);
    uVar6 = *(ulong *)(param_3 + 0x3c8);
  }
  if (7 < (long)uVar6) {
    plVar1 = (long *)((long)plVar5 + uVar6);
    plVar4 = plVar5;
    do {
      if ((uVar6 - 7 == 0) || (plVar4 = memchr(plVar4,0x62,uVar6 - 7), plVar4 == (long *)0x0))
      break;
      if (*plVar4 == 0x2f2f3a646c697562) {
        if ((plVar4 != plVar1) && (plVar4 == plVar5)) {
          FUN_008fce60(local_98,param_3 + 0x468);
          goto LAB_00bcf570;
        }
        break;
      }
      plVar4 = (long *)((long)plVar4 + 1);
      uVar6 = (long)plVar1 - (long)plVar4;
    } while (7 < (long)uVar6);
  }
  FUN_0096b704(param_1 + 1,param_3 + 0x3c0,&local_80);
LAB_00bcf570:
  lVar7 = param_1[0x10];
  plVar5 = (long *)(**(code **)(*param_1 + 0x10))(param_1);
  (**(code **)(*plVar5 + 0xf0))
            (plVar5,*(undefined4 *)(param_3 + 0x4fc),*(int *)(param_3 + 0x500) - param_4,
             *(undefined4 *)(param_3 + 0x504),*(undefined4 *)(param_3 + 0x508),param_3 + 0x3a8,
             &local_80,local_98,param_5 < lVar7);
  if ((local_98[0] & 1) != 0) {
    operator_delete(local_88);
  }
  if ((local_80 & 1) != 0) {
    operator_delete(local_70);
  }
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00bcf610(long param_1,undefined8 param_2)

{
  long lVar1;
  int iVar2;
  undefined1 auStack_68 [64];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00e70978(param_2,auStack_68,0xffffffff);
  iVar2 = FUN_00e6a474(auStack_68);
  if (iVar2 == 0) {
    *(undefined8 *)(param_1 + 0x80) = 0xffffffffffffffff;
  }
  else {
    FUN_00e6acac(auStack_68,&DAT_01b95673);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00bcf694(long param_1)

{
  FUN_008fce60(param_1 + 0x20);
  return;
}




void FUN_00bcf69c(long param_1)

{
  FUN_008fce60(param_1 + 0x38);
  return;
}




undefined8 FUN_00bcf6a4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x80);
}




bool FUN_00bcf6ac(long param_1)

{
  bool bVar1;
  
  bVar1 = false;
  if (*(int *)(param_1 + 0x4fc) < 6) {
    bVar1 = *(int *)(param_1 + 0x504) < 7;
  }
  return bVar1;
}




void FUN_00bcf6d0(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xbcf6d4);
  (*pcVar1)();
}




void FUN_00bcf6d4(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR___cxa_pure_virtual_027ec700;
  pvVar1 = operator_new(0x7d60);
  FUN_00c27008();
  param_1[1] = pvVar1;
  *(undefined8 **)((long)pvVar1 + 0xb8) = param_1;
  FUN_00cd51a4(param_1 + 2);
  FUN_00a99760(param_1 + 5);
  *param_1 = &PTR_FUN_027ec658;
  param_1[2] = &PTR_FUN_027ec6a8;
  param_1[5] = &PTR_FUN_027ec6d8;
  FUN_00bcf74c(param_1);
  return;
}




void FUN_00bcf74c(long param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = FUN_009580c4();
  if ((uVar1 & 1) != 0) {
    lVar2 = FUN_00cce574();
    if (*(char *)(lVar2 + 0x20) != '\0') {
      uVar4 = *(undefined8 *)(param_1 + 8);
      uVar3 = FUN_00cd6950();
      FUN_00c2787c(uVar4,uVar3);
      return;
    }
  }
  return;
}




void FUN_00bcf798(undefined8 *param_1)

{
  FUN_00a997e0(param_1 + 5);
  FUN_00cd5224(param_1 + 2);
  *param_1 = &PTR___cxa_pure_virtual_027ec700;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return;
}




void FUN_00bcf7ec(long param_1)

{
  FUN_00bcf798(param_1 + -0x10);
  return;
}




void FUN_00bcf7f4(long param_1)

{
  FUN_00bcf798(param_1 + -0x28);
  return;
}




void FUN_00bcf7fc(void *param_1)

{
  FUN_00bcf798();
  operator_delete(param_1);
  return;
}




void FUN_00bcf820(long param_1)

{
  FUN_00bcf798((void *)(param_1 + -0x10));
  operator_delete((void *)(param_1 + -0x10));
  return;
}




void FUN_00bcf848(long param_1)

{
  FUN_00bcf798((void *)(param_1 + -0x28));
  operator_delete((void *)(param_1 + -0x28));
  return;
}




void FUN_00bcf870(void)

{
  FUN_009b8d90();
  FUN_009bbafc();
  return;
}




void FUN_00bcf884(long param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined1 auStack_48 [32];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00900230();
  FUN_00ec5434();
  uVar2 = FUN_00f048a4("UI::EVENT_CLOSE_FREEPOPUPNODE");
  FUN_00f048e0(auStack_48,uVar2,0);
  FUN_00f04760(*(undefined8 *)(param_1 + 8),auStack_48,1);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00bcf8fc(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = FUN_009b8d90();
  if ((*(byte *)(lVar1 + 0xe1b8) & 1) == 0) {
    if (*(byte *)(lVar1 + 0xe1b8) >> 1 == 0) {
LAB_00bcf93c:
      FUN_00bcf74c(param_1);
      return;
    }
  }
  else if (*(long *)(lVar1 + 0xe1c0) == 0) goto LAB_00bcf93c;
  return;
}




void FUN_00bcf94c(long param_1)

{
  FUN_00bcf8fc(param_1 + -0x10);
  return;
}




void FUN_00bcf954(undefined8 param_1,long param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  cVar1 = *(char *)(param_2 + 0x28);
  uVar2 = FUN_009b8d90();
  if (cVar1 != '\0') {
    FUN_009bb7d4(uVar2,param_2,param_2 + 0x18);
    return;
  }
  FUN_009baf98();
  uVar2 = FUN_00e6ce7c("GENERIC_DIALOG_ERROR",0);
  uVar3 = FUN_00e6ce7c("MARKET_GOLD_STORE_TRANSACTION_ERROR_BODY",0);
  uVar4 = FUN_00e6ce7c("GENERIC_DIALOG_OKAY",0);
  FUN_00a9b8b8(uVar2,uVar3,uVar4,0,0);
  return;
}




void thunk_FUN_00bcf954(undefined8 param_1,long param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  cVar1 = *(char *)(param_2 + 0x28);
  uVar2 = FUN_009b8d90();
  if (cVar1 != '\0') {
    FUN_009bb7d4(uVar2,param_2,param_2 + 0x18);
    return;
  }
  FUN_009baf98();
  uVar2 = FUN_00e6ce7c("GENERIC_DIALOG_ERROR",0);
  uVar3 = FUN_00e6ce7c("MARKET_GOLD_STORE_TRANSACTION_ERROR_BODY",0);
  uVar4 = FUN_00e6ce7c("GENERIC_DIALOG_OKAY",0);
  FUN_00a9b8b8(uVar2,uVar3,uVar4,0,0);
  return;
}




void FUN_00bcf9e4(undefined8 param_1,byte *param_2)

{
  size_t __n;
  size_t sVar1;
  byte bVar2;
  ulong uVar3;
  int iVar4;
  byte *pbVar5;
  long lVar6;
  byte *pbVar7;
  
  bVar2 = *param_2;
  uVar3 = (ulong)(bVar2 >> 1);
  __n = uVar3;
  if ((bVar2 & 1) != 0) {
    __n = *(size_t *)(param_2 + 8);
  }
  sVar1 = (ulong)(DAT_0313df98 >> 1);
  if ((DAT_0313df98 & 1) != 0) {
    sVar1 = DAT_0313dfa0;
  }
  if (__n == sVar1) {
    pbVar7 = *(byte **)(param_2 + 0x10);
    if ((bVar2 & 1) == 0) {
      pbVar7 = param_2 + 1;
    }
    pbVar5 = DAT_0313dfa8;
    if ((DAT_0313df98 & 1) == 0) {
      pbVar5 = &DAT_0313df99;
    }
    if ((bVar2 & 1) == 0) {
      if (__n != 0) {
        lVar6 = -uVar3;
        pbVar7 = param_2;
        do {
          pbVar7 = pbVar7 + 1;
          if (*pbVar7 != *pbVar5) goto LAB_00bcfa94;
          lVar6 = lVar6 + 1;
          pbVar5 = pbVar5 + 1;
        } while (lVar6 != 0);
      }
      goto LAB_00bcfba8;
    }
    if ((__n == 0) || (iVar4 = memcmp(pbVar7,pbVar5,__n), iVar4 == 0)) goto LAB_00bcfba8;
  }
LAB_00bcfa94:
  sVar1 = (ulong)(DAT_0313dfb0 >> 1);
  if ((DAT_0313dfb0 & 1) != 0) {
    sVar1 = DAT_0313dfb8;
  }
  if (__n == sVar1) {
    pbVar7 = *(byte **)(param_2 + 0x10);
    if ((bVar2 & 1) == 0) {
      pbVar7 = param_2 + 1;
    }
    pbVar5 = DAT_0313dfc0;
    if ((DAT_0313dfb0 & 1) == 0) {
      pbVar5 = &DAT_0313dfb1;
    }
    if ((bVar2 & 1) == 0) {
      if (__n != 0) {
        lVar6 = -uVar3;
        pbVar7 = param_2;
        do {
          pbVar7 = pbVar7 + 1;
          if (*pbVar7 != *pbVar5) goto LAB_00bcfb14;
          lVar6 = lVar6 + 1;
          pbVar5 = pbVar5 + 1;
        } while (lVar6 != 0);
      }
      goto LAB_00bcfba8;
    }
    if ((__n == 0) || (iVar4 = memcmp(pbVar7,pbVar5,__n), iVar4 == 0)) goto LAB_00bcfba8;
  }
LAB_00bcfb14:
  sVar1 = (ulong)(DAT_0313dfc8 >> 1);
  if ((DAT_0313dfc8 & 1) != 0) {
    sVar1 = DAT_0313dfd0;
  }
  if (__n != sVar1) {
    return;
  }
  pbVar7 = *(byte **)(param_2 + 0x10);
  if ((bVar2 & 1) == 0) {
    pbVar7 = param_2 + 1;
  }
  pbVar5 = DAT_0313dfd8;
  if ((DAT_0313dfc8 & 1) == 0) {
    pbVar5 = &DAT_0313dfc9;
  }
  if ((bVar2 & 1) == 0) {
    if (__n != 0) {
      lVar6 = -uVar3;
      do {
        param_2 = param_2 + 1;
        if (*param_2 != *pbVar5) {
          return;
        }
        lVar6 = lVar6 + 1;
        pbVar5 = pbVar5 + 1;
      } while (lVar6 != 0);
    }
  }
  else if ((__n != 0) && (iVar4 = memcmp(pbVar7,pbVar5,__n), iVar4 != 0)) {
    return;
  }
LAB_00bcfba8:
  FUN_00bcf74c(param_1);
  return;
}




void FUN_00bcfbc0(long param_1)

{
  FUN_00bcf9e4(param_1 + -0x28);
  return;
}




void FUN_00bcfbc8(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = FUN_009b8d90();
  if ((*(byte *)(lVar1 + 0xe1b8) & 1) == 0) {
    if (*(byte *)(lVar1 + 0xe1b8) >> 1 == 0) {
LAB_00bcfc08:
      FUN_00bcf74c(param_1);
      return;
    }
  }
  else if (*(long *)(lVar1 + 0xe1c0) == 0) goto LAB_00bcfc08;
  return;
}




void FUN_00bcfc18(undefined8 *param_1)

{
  *param_1 = &PTR___cxa_pure_virtual_027ec700;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return;
}




void FUN_00bcfc5c(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xbcfc60);
  (*pcVar1)();
}




void FUN_00bcfc60(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR___cxa_pure_virtual_027ec758;
  pvVar1 = operator_new(0x12c08);
  FUN_00c27a68();
  *(undefined8 **)((long)pvVar1 + 0x148) = param_1;
  *param_1 = &PTR_FUN_027ec730;
  param_1[1] = pvVar1;
  return;
}




void FUN_00bcfcb4(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  *param_1 = &PTR_FUN_027ec730;
  lVar2 = FUN_009e5a50();
  lVar4 = (ulong)*(uint *)(lVar2 + 0x30) << 5;
  lVar1 = *(long *)(lVar2 + 0x38);
  do {
    lVar3 = lVar1;
    if (lVar4 == 0) goto LAB_00bcfd04;
    lVar4 = lVar4 + -0x20;
    lVar1 = lVar3 + 0x20;
  } while (*(undefined8 **)(lVar3 + 8) != param_1);
  FUN_00b06ddc((uint *)(lVar2 + 0x30),lVar3);
LAB_00bcfd04:
  *param_1 = &PTR___cxa_pure_virtual_027ec758;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return;
}




void FUN_00bcfd38(void *param_1)

{
  FUN_00bcfcb4();
  operator_delete(param_1);
  return;
}




void FUN_00bcfd5c(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_009e5a50();
  FUN_009e6384(uVar1,param_2,param_2 + 0x18,param_2 + 0x28,param_2 + 0x40,param_2 + 0x58);
  return;
}




void FUN_00bcfd90(undefined8 *param_1)

{
  *param_1 = &PTR___cxa_pure_virtual_027ec758;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return;
}




void FUN_00bcfdd4(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xbcfdd8);
  (*pcVar1)();
}




void FUN_00bcfdd8(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR___cxa_pure_virtual_027ecb50;
  pvVar1 = operator_new(0x1368);
  FUN_00c2a444();
  param_1[1] = pvVar1;
  *(undefined8 **)((long)pvVar1 + 0xb8) = param_1;
  FUN_00948cd8(param_1 + 2);
  *param_1 = &PTR_FUN_027ec780;
  param_1[2] = &PTR_FUN_027ec7b8;
  FUN_00c2a650(param_1[1]);
  FUN_009580b8();
  FUN_00962c7c();
  return;
}




void FUN_00bcfe48(long param_1)

{
  FUN_00bcfe6c();
  FUN_00c2a658(*(undefined8 *)(param_1 + 8));
  return;
}




void FUN_00bcfe6c(long param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_009580c4();
  if ((uVar2 & 1) != 0) {
    lVar3 = FUN_009580b8();
    local_58 = 0;
    uStack_50 = 0;
    if (*(uint *)(lVar3 + 0x53d8) != 0) {
      uVar2 = 0;
      lVar4 = 0x48;
      do {
        FUN_00bcff50(&local_58,*(long *)(lVar3 + 0x53e0) + lVar4);
        uVar2 = uVar2 + 1;
        lVar4 = lVar4 + 0x1a8;
      } while (uVar2 < *(uint *)(lVar3 + 0x53d8));
    }
    FUN_00c2a648(*(undefined8 *)(param_1 + 8),&local_58);
    FUN_00ab2d38(&local_58,1);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00bcff28(long param_1)

{
  FUN_00bcfe6c(param_1 + -0x10);
  FUN_00c2a658(*(undefined8 *)(param_1 + -8));
  return;
}




void FUN_00bcff50(uint *param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  
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
    FUN_00ab2fa0(param_1,uVar1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  lVar4 = *(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 0x158;
  FUN_008fcdb8(lVar4 + -0x158,param_2);
  FUN_008fcdb8(lVar4 + -0x140,param_2 + 0x18);
  FUN_008fcdb8(lVar4 + -0x128,param_2 + 0x30);
  FUN_008fcdb8(lVar4 + -0x110,param_2 + 0x48);
  uVar5 = *(undefined8 *)(param_2 + 0x60);
  *(undefined8 *)(lVar4 + -0xf0) = *(undefined8 *)(param_2 + 0x68);
  *(undefined8 *)(lVar4 + -0xf8) = uVar5;
  *(undefined8 *)(lVar4 + -0xe8) = *(undefined8 *)(param_2 + 0x70);
  FUN_008fcdb8(lVar4 + -0xe0,param_2 + 0x78);
  FUN_008fcdb8(lVar4 + -200,param_2 + 0x90);
  FUN_008fcdb8(lVar4 + -0xb0,param_2 + 0xa8);
  FUN_008fcdb8(lVar4 + -0x98,param_2 + 0xc0);
  FUN_008fcdb8(lVar4 + -0x80,param_2 + 0xd8);
  FUN_008fcdb8(lVar4 + -0x68,param_2 + 0xf0);
  FUN_008fcdb8(lVar4 + -0x50,param_2 + 0x108);
  FUN_008fcdb8(lVar4 + -0x38,param_2 + 0x120);
  FUN_008fcdb8(lVar4 + -0x20,param_2 + 0x138);
  *(undefined1 *)(lVar4 + -8) = *(undefined1 *)(param_2 + 0x150);
  return;
}

