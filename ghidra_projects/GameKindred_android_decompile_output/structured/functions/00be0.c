// functions/00be0 — 37 functions
#include "libGameKindred.h"




void FUN_00be007c(void)

{
  return;
}




void FUN_00be0080(void)

{
  long lVar1;
  undefined8 uVar2;
  byte local_58 [16];
  void *local_48;
  byte local_40 [16];
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_009580b8();
  FUN_008fa54c(local_40,"3_9_BATTLEPASS_BUYIN");
  FUN_008fa54c(local_58,&DAT_01e277f2);
  FUN_00961494(uVar2,local_40,local_58);
  if ((local_58[0] & 1) != 0) {
    operator_delete(local_48);
  }
  if ((local_40[0] & 1) != 0) {
    operator_delete(local_30);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00be0118(void)

{
  long lVar1;
  undefined8 uVar2;
  byte local_58 [16];
  void *local_48;
  byte local_40 [16];
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_009580b8();
  FUN_008fa54c(local_40,"ASCENSION_NEXT_LEVEL_SUNLIGHT_GOLD_150");
  FUN_008fa54c(local_58,&DAT_01e277f2);
  FUN_00961494(uVar2,local_40,local_58);
  if ((local_58[0] & 1) != 0) {
    operator_delete(local_48);
  }
  if ((local_40[0] & 1) != 0) {
    operator_delete(local_30);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00be01b0(uint *param_1,uint *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_00be023c(param_1,*param_2);
  uVar2 = 0;
  if (*param_2 != 0) {
    lVar3 = *(long *)(param_2 + 2);
    lVar4 = *(long *)(param_1 + 2);
    lVar5 = lVar3 + (ulong)*param_2 * 0x38;
    do {
      FUN_008fcdb8(lVar4,lVar3);
      FUN_008fcdb8(lVar4 + 0x18,lVar3 + 0x18);
      puVar1 = (undefined4 *)(lVar3 + 0x30);
      lVar3 = lVar3 + 0x38;
      *(undefined4 *)(lVar4 + 0x30) = *puVar1;
      lVar4 = lVar4 + 0x38;
    } while (lVar3 != lVar5);
    uVar2 = *param_2;
  }
  *param_1 = uVar2;
  return;
}




void FUN_00be023c(uint *param_1,uint param_2)

{
  undefined4 *puVar1;
  void *pvVar2;
  void *pvVar3;
  byte *pbVar4;
  long lVar5;
  void *pvVar6;
  void *pvVar7;
  
  if (param_1[1] < param_2) {
    pvVar2 = operator_new__((ulong)param_2 * 0x38);
    pvVar3 = *(void **)(param_1 + 2);
    if (*param_1 == 0) {
      param_1[1] = param_2;
    }
    else {
      pvVar7 = (void *)((long)pvVar3 + (ulong)*param_1 * 0x38);
      pvVar6 = pvVar2;
      do {
        FUN_008fcdb8(pvVar6,pvVar3);
        FUN_008fcdb8((long)pvVar6 + 0x18,(long)pvVar3 + 0x18);
        puVar1 = (undefined4 *)((long)pvVar3 + 0x30);
        pvVar3 = (void *)((long)pvVar3 + 0x38);
        *(undefined4 *)((long)pvVar6 + 0x30) = *puVar1;
        pvVar6 = (void *)((long)pvVar6 + 0x38);
      } while (pvVar3 != pvVar7);
      pvVar3 = *(void **)(param_1 + 2);
      param_1[1] = param_2;
      if (*param_1 != 0) {
        lVar5 = (ulong)*param_1 * 0x38;
        pbVar4 = (byte *)((long)pvVar3 + 0x18);
        do {
          if ((*pbVar4 & 1) != 0) {
            operator_delete(*(void **)(pbVar4 + 0x10));
          }
          if ((pbVar4[-0x18] & 1) != 0) {
            operator_delete(*(void **)(pbVar4 + -8));
          }
          lVar5 = lVar5 + -0x38;
          pbVar4 = pbVar4 + 0x38;
        } while (lVar5 != 0);
        pvVar3 = *(void **)(param_1 + 2);
      }
    }
    if (pvVar3 != (void *)0x0) {
      operator_delete__(pvVar3);
    }
    *(void **)(param_1 + 2) = pvVar2;
  }
  return;
}




void FUN_00be0334(undefined8 param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    FUN_00be0334(param_1,*param_2);
    FUN_00be0334(param_1,param_2[1]);
    FUN_00be03d8(param_2 + 0x11,1);
    if ((*(byte *)(param_2 + 0xe) & 1) != 0) {
      operator_delete((void *)param_2[0x10]);
    }
    if ((*(byte *)(param_2 + 0xb) & 1) != 0) {
      operator_delete((void *)param_2[0xd]);
    }
    if ((void *)param_2[10] != (void *)0x0) {
      operator_delete__((void *)param_2[10]);
      param_2[9] = 0;
      param_2[10] = 0;
    }
    if ((void *)param_2[8] != (void *)0x0) {
      operator_delete__((void *)param_2[8]);
      param_2[7] = 0;
      param_2[8] = 0;
    }
    if ((void *)param_2[6] != (void *)0x0) {
      operator_delete__((void *)param_2[6]);
    }
    operator_delete(param_2);
    return;
  }
  return;
}




void FUN_00be03d8(uint *param_1,uint param_2)

{
  long lVar1;
  byte *pbVar2;
  
  if (*(long *)(param_1 + 2) != 0) {
    if (*param_1 != 0) {
      lVar1 = (ulong)*param_1 * 0x38;
      pbVar2 = (byte *)(*(long *)(param_1 + 2) + 0x18);
      do {
        if ((*pbVar2 & 1) != 0) {
          operator_delete(*(void **)(pbVar2 + 0x10));
        }
        if ((pbVar2[-0x18] & 1) != 0) {
          operator_delete(*(void **)(pbVar2 + -8));
        }
        lVar1 = lVar1 + -0x38;
        pbVar2 = pbVar2 + 0x38;
      } while (lVar1 != 0);
    }
    if ((param_2 & 1) != 0) {
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




void FUN_00be0464(undefined8 *param_1)

{
  *param_1 = &PTR___cxa_pure_virtual_027eebb0;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return;
}




void FUN_00be04a8(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xbe04ac);
  (*pcVar1)();
}




void FUN_00be04ac(long param_1,int *param_2,undefined8 param_3)

{
  bool bVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long local_50 [3];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  plVar5 = (long *)(param_1 + 8);
  plVar6 = plVar5;
  if ((long *)*plVar5 != (long *)0x0) {
    plVar3 = (long *)*plVar5;
    plVar6 = (long *)(param_1 + 8);
    do {
      while (plVar5 = plVar3, *param_2 < (int)plVar5[4]) {
        plVar3 = (long *)*plVar5;
        plVar6 = plVar5;
        if ((long *)*plVar5 == (long *)0x0) goto LAB_00be052c;
      }
      if (*param_2 <= (int)plVar5[4]) break;
      plVar6 = plVar5 + 1;
      plVar3 = (long *)*plVar6;
    } while ((long *)*plVar6 != (long *)0x0);
  }
LAB_00be052c:
  lVar4 = *plVar6;
  bVar1 = lVar4 == 0;
  if (bVar1) {
    FUN_00be0590(local_50,param_1,param_3);
    FUN_00be062c(param_1,plVar5,plVar6,local_50[0]);
    lVar4 = local_50[0];
  }
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(lVar4,bVar1);
  }
  return;
}




void FUN_00be0590(undefined8 *param_1,long param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  void *pvVar2;
  
  pvVar2 = operator_new(0xa0);
  *param_1 = pvVar2;
  param_1[1] = param_2 + 8;
  *(undefined4 *)((long)pvVar2 + 0x20) = *param_3;
  thunk_FUN_00e7051c((long)pvVar2 + 0x28,param_3 + 2);
  thunk_FUN_00e7051c((long)pvVar2 + 0x38,param_3 + 6);
  thunk_FUN_00e7051c((long)pvVar2 + 0x48,param_3 + 10);
  FUN_008fcdb8((long)pvVar2 + 0x58,param_3 + 0xe);
  FUN_008fcdb8((long)pvVar2 + 0x70,param_3 + 0x14);
  FUN_00be01b0((long)pvVar2 + 0x88,param_3 + 0x1a);
  uVar1 = param_3[0x1e];
  *(undefined1 *)(param_1 + 2) = 1;
  *(undefined4 *)((long)pvVar2 + 0x98) = uVar1;
  return;
}




void FUN_00be062c(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = param_2;
  *param_3 = param_4;
  if (*(long *)*param_1 != 0) {
    *param_1 = *(long *)*param_1;
    param_4 = (undefined8 *)*param_3;
  }
  FUN_0090d468(param_1[1],param_4);
  param_1[2] = param_1[2] + 1;
  return;
}




void FUN_00be0680(undefined8 *param_1)

{
  void *pvVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  *param_1 = &PTR___cxa_pure_virtual_027ef000;
  pvVar1 = operator_new(0xe8f0);
  FUN_00c50b44();
  param_1[1] = pvVar1;
  *(undefined8 **)((long)pvVar1 + 0xb8) = param_1;
  FUN_00e83560(param_1 + 2);
  FUN_00948cd8(param_1 + 5);
  uVar4 = param_1[1];
  *param_1 = &PTR_FUN_027eebe8;
  param_1[2] = &PTR_FUN_027eec38;
  param_1[5] = &PTR_FUN_027eec68;
  uVar2 = FUN_00966e38();
  FUN_00c5267c(uVar4,uVar2);
  uVar2 = param_1[1];
  lVar3 = FUN_009580b8();
  FUN_00c52688(uVar2,*(char *)(lVar3 + 0x5690) == '\0');
  return;
}




void FUN_00be0724(undefined8 param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  undefined8 uVar1;
  
  uVar1 = FUN_009580b8();
  FUN_0095ffe4(uVar1,param_2,param_3,param_4 & 1);
  FUN_009006ac(0);
  return;
}




void FUN_00be0768(void)

{
  FUN_00aa25b0("https://www.vainglorygame.com/privacy-collection-policy/",0);
  return;
}




void FUN_00be0778(void)

{
  ulong uVar1;
  char *pcVar2;
  long lVar3;
  int iVar4;
  char *pcVar5;
  ulong uVar6;
  byte local_40 [8];
  ulong local_38;
  void *local_30;
  long local_28;
  
  lVar3 = tpidr_el0;
  local_28 = *(long *)(lVar3 + 0x28);
  FUN_00ec52d8(local_40);
  uVar6 = (ulong)(local_40[0] >> 1);
  uVar1 = uVar6;
  if ((local_40[0] & 1) != 0) {
    uVar1 = local_38;
  }
  if (uVar1 == 7) {
    iVar4 = FUN_0090d610(local_40,0,0xffffffffffffffff,"netease",7);
    if (iVar4 != 0) {
      uVar6 = (ulong)(local_40[0] >> 1);
      goto LAB_00be07f0;
    }
  }
  else {
LAB_00be07f0:
    if ((local_40[0] & 1) != 0) {
      uVar6 = local_38;
    }
    if ((uVar6 != 7) ||
       (iVar4 = FUN_0090d610(local_40,0,0xffffffffffffffff,"neunion",7), iVar4 != 0)) {
      iVar4 = FUN_0092ec00();
      pcVar5 = "http://kr.vainglorygame.com/?terms-of-use";
      if (iVar4 != 8) {
        pcVar5 = (char *)0x0;
      }
      pcVar2 = "http://jp.vainglorygame.com/?terms-of-use";
      if (iVar4 != 6) {
        pcVar2 = pcVar5;
      }
      pcVar5 = "http://www.vainglorygame.com/?terms-of-use";
      if (pcVar2 != (char *)0x0) {
        pcVar5 = pcVar2;
      }
      goto LAB_00be0860;
    }
  }
  pcVar5 = "http://vg.163.com/terms-of-services";
LAB_00be0860:
  FUN_00aa25b0(pcVar5,0);
  if ((local_40[0] & 1) != 0) {
    operator_delete(local_30);
  }
  if (*(long *)(lVar3 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00be089c(void)

{
  int iVar1;
  char *pcVar2;
  
  pcVar2 = (char *)FUN_00e6ce4c();
  iVar1 = strcmp(pcVar2,"localization_ja.strings");
  if (iVar1 == 0) {
    pcVar2 = "http://jp.vainglorygame.com/?privacy-policy";
  }
  else {
    pcVar2 = (char *)FUN_00e6ce4c();
    iVar1 = strcmp(pcVar2,"localization_ko.strings");
    pcVar2 = "http://kr.vainglorygame.com/?privacy-policy";
    if (iVar1 != 0) {
      pcVar2 = "http://www.vainglorygame.com/?privacy-policy";
    }
  }
  FUN_00aa25b0(pcVar2,0);
  return;
}




void FUN_00be08f8(long param_1,long param_2)

{
  long lVar1;
  undefined4 uVar2;
  ulong uVar3;
  undefined1 auStack_48 [32];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if ((*(int *)(param_2 + 0x28) == 0) && (uVar3 = FUN_009480e0(), (uVar3 & 1) == 0)) {
    uVar2 = FUN_00f048a4("UI::EVENT_USER_LOGGED_IN_OR_SIGNED_UP");
    FUN_00f048e0(auStack_48,uVar2,param_1);
    FUN_00f04760(*(undefined8 *)(param_1 + 8),auStack_48,1);
  }
  FUN_00c5258c(*(undefined8 *)(param_1 + 8),0);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00be0984(long param_1)

{
  FUN_00be08f8(param_1 + -0x10);
  return;
}




void FUN_00be098c(long param_1,long param_2)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  char *pcVar4;
  undefined8 uVar5;
  
  uVar2 = FUN_00e84e5c(param_2);
  if ((uVar2 & 1) == 0) {
LAB_00be09ec:
    uVar5 = *(undefined8 *)(param_1 + 8);
    pcVar4 = "MAIN_PROFILE_REG_STATUS_FAILURE";
  }
  else {
    iVar1 = *(int *)(param_2 + 0x40);
    if (iVar1 < -0x1b) {
      if (iVar1 == -0x1d) {
        uVar5 = *(undefined8 *)(param_1 + 8);
        pcVar4 = "MAIN_PROFILE_REG_STATUS_FAILURE_ACCOUNT_EXISTS";
      }
      else {
        if (iVar1 != -0x1c) goto LAB_00be09ec;
        uVar5 = *(undefined8 *)(param_1 + 8);
        pcVar4 = "MAIN_PROFILE_REG_STATUS_FAILURE_INVALID_PASSWORD";
      }
    }
    else {
      if (iVar1 != -0x1b) {
        if (iVar1 == 0) goto LAB_00be0a0c;
        goto LAB_00be09ec;
      }
      uVar5 = *(undefined8 *)(param_1 + 8);
      pcVar4 = "MAIN_PROFILE_REG_STATUS_FAILURE_INVALID_USERNAME";
    }
  }
  uVar3 = FUN_00e6ce7c(pcVar4,0);
  FUN_00c528a4(uVar5,uVar3);
LAB_00be0a0c:
  FUN_00c5258c(*(undefined8 *)(param_1 + 8),0);
  return;
}




void FUN_00be0a40(long param_1)

{
  FUN_00be098c(param_1 + -0x28);
  return;
}




void FUN_00be0a48(undefined8 *param_1)

{
  FUN_00948d58(param_1 + 5);
  FUN_00e835e0(param_1 + 2);
  *param_1 = &PTR___cxa_pure_virtual_027ef000;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return;
}




void FUN_00be0a9c(undefined8 *param_1)

{
  FUN_00948d58(param_1 + 5);
  FUN_00e835e0(param_1 + 2);
  *param_1 = &PTR___cxa_pure_virtual_027ef000;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  operator_delete(param_1);
  return;
}




void FUN_00be0af0(long param_1)

{
  FUN_00948d58(param_1 + 0x18);
  FUN_00e835e0(param_1);
  *(undefined ***)(param_1 + -0x10) = &PTR___cxa_pure_virtual_027ef000;
  if (*(long **)(param_1 + -8) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + -8) + 8))();
  }
  *(undefined8 *)(param_1 + -8) = 0;
  return;
}




void FUN_00be0b44(long param_1)

{
  FUN_00948d58(param_1 + 0x18);
  FUN_00e835e0(param_1);
  *(undefined8 *)(param_1 + -0x10) = &PTR___cxa_pure_virtual_027ef000;
  if (*(long **)(param_1 + -8) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + -8) + 8))();
  }
  operator_delete((undefined8 *)(param_1 + -0x10));
  return;
}




void FUN_00be0b98(long param_1)

{
  FUN_00948d58();
  FUN_00e835e0(param_1 + -0x18);
  *(undefined ***)(param_1 + -0x28) = &PTR___cxa_pure_virtual_027ef000;
  if (*(long **)(param_1 + -0x20) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + -0x20) + 8))();
  }
  *(undefined8 *)(param_1 + -0x20) = 0;
  return;
}




void FUN_00be0be8(long param_1)

{
  FUN_00948d58();
  FUN_00e835e0(param_1 + -0x18);
  *(undefined8 *)(param_1 + -0x28) = &PTR___cxa_pure_virtual_027ef000;
  if (*(long **)(param_1 + -0x20) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + -0x20) + 8))();
  }
  operator_delete((undefined8 *)(param_1 + -0x28));
  return;
}




void FUN_00be0c38(undefined8 *param_1)

{
  *param_1 = &PTR___cxa_pure_virtual_027ef000;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return;
}




void FUN_00be0c7c(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xbe0c80);
  (*pcVar1)();
}




void FUN_00be0c80(undefined8 *param_1)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  *param_1 = &PTR_FUN_027ef060;
  pvVar3 = operator_new(0x5df0);
  FUN_00c53c50();
  *(undefined8 **)((long)pvVar3 + 0xb8) = param_1;
  *param_1 = &PTR_FUN_027ef040;
  param_1[1] = pvVar3;
  lVar4 = FUN_00940b98();
  iVar1 = *(int *)(lVar4 + 0x10);
  uVar5 = FUN_00a099f8();
  iVar2 = iVar1 + -1;
  lVar4 = FUN_00a09da4(uVar5,iVar2);
  uVar5 = FUN_00a07558();
  lVar6 = FUN_00a0766c(uVar5,0);
  uVar5 = FUN_00a07558();
  lVar7 = FUN_00a0766c(uVar5,1);
  if (lVar4 == 0) {
    uVar8 = 0xffffffff;
    uVar9 = 0xffffffff;
  }
  else {
    uVar9 = *(undefined4 *)(lVar4 + 100);
    uVar8 = *(undefined4 *)(lVar4 + 0x68);
  }
  FUN_00c54278(param_1[1],iVar2,iVar1,uVar8,uVar9,*(undefined4 *)(lVar6 + 4),
               *(undefined4 *)(lVar7 + 4));
  return;
}




void FUN_00be0d44(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027ef060;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return;
}




void FUN_00be0d88(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027ef060;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  operator_delete(param_1);
  return;
}




void FUN_00be0dcc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027ef060;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return;
}




void FUN_00be0e10(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027ef060;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  operator_delete(param_1);
  return;
}




void FUN_00be0e54(undefined8 *param_1)

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
  *param_1 = &PTR_FUN_027ef0d0;
  pvVar2 = operator_new(0x5e8);
  FUN_00c55120();
  *(undefined8 **)((long)pvVar2 + 0x148) = param_1;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined1 *)((long)param_1 + 0x32) = 0;
  *(undefined2 *)(param_1 + 6) = 0;
  *param_1 = &PTR_FUN_027ef080;
  param_1[1] = pvVar2;
  param_1[2] = &PTR_FUN_027ef0b0;
  param_1[3] = 0;
  lVar3 = FUN_00a07af0();
  local_58 = 0;
  pcStack_40 = thunk_FUN_00be12d8;
  puStack_50 = param_1;
  local_48 = param_1;
  FUN_00be1490(lVar3 + 0x18,&local_58);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00be0f08(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  uint *puVar3;
  long lVar4;
  long lVar5;
  
  *param_1 = &PTR_FUN_027ef080;
  param_1[2] = &PTR_FUN_027ef0b0;
  FUN_00be0fe8();
  lVar1 = FUN_00a07af0();
  if (lVar1 != 0) {
    lVar2 = FUN_00a07af0();
    lVar5 = (ulong)*(uint *)(lVar2 + 0x18) << 5;
    lVar1 = *(long *)(lVar2 + 0x20);
    do {
      lVar4 = lVar1;
      if (lVar5 == 0) goto LAB_00be0f6c;
      lVar5 = lVar5 + -0x20;
      lVar1 = lVar4 + 0x20;
    } while (*(undefined8 **)(lVar4 + 8) != param_1);
    FUN_00be15b0((uint *)(lVar2 + 0x18),lVar4);
  }
LAB_00be0f6c:
  if (*(char *)((long)param_1 + 0x32) != '\0') {
    puVar3 = (uint *)FUN_00cc7c38();
    lVar2 = (ulong)*puVar3 << 5;
    lVar1 = *(long *)(puVar3 + 2);
    do {
      lVar5 = lVar1;
      if (lVar2 == 0) goto LAB_00be0fa4;
      lVar2 = lVar2 + -0x20;
      lVar1 = lVar5 + 0x20;
    } while (*(undefined8 **)(lVar5 + 8) != param_1);
    FUN_00be1628(puVar3,lVar5);
  }
LAB_00be0fa4:
  if ((void *)param_1[4] != (void *)0x0) {
    operator_delete__((void *)param_1[4]);
    param_1[3] = 0;
    param_1[4] = 0;
  }
  *param_1 = &PTR_FUN_027ef0d0;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return;
}




void FUN_00be0fe8(long param_1)

{
  long *plVar1;
  uint uVar2;
  long *plVar3;
  
  uVar2 = *(uint *)(param_1 + 0x18);
  plVar1 = *(long **)(param_1 + 0x20);
  plVar3 = plVar1;
  if (uVar2 != 0) {
    do {
      if ((long *)*plVar3 != (long *)0x0) {
        (**(code **)(*(long *)*plVar3 + 0x10))();
        uVar2 = *(uint *)(param_1 + 0x18);
        plVar1 = *(long **)(param_1 + 0x20);
      }
      plVar3 = plVar3 + 1;
    } while (plVar3 != plVar1 + uVar2);
  }
  if (plVar1 != (long *)0x0) {
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  return;
}

