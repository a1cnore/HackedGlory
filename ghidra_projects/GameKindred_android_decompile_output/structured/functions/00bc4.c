// functions/00bc4 — 51 functions
#include "libGameKindred.h"




void FUN_00bc40a8(long param_1,uint param_2)

{
  void *pvVar1;
  long lVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 uVar5;
  char *pcVar6;
  ulong local_70;
  void *local_68;
  void *local_60;
  undefined8 local_58;
  void *local_50;
  undefined8 local_48;
  void *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  lVar4 = FUN_00a1ae38();
  if (lVar4 != 0) {
    uVar5 = FUN_00a1ae38();
    uVar3 = FUN_00bc2228(param_1);
    FUN_00a1b48c(uVar5,uVar3,param_2 & 1);
  }
  lVar4 = (**(code **)(**(long **)(param_1 + 0x18) + 0x10))();
  uVar5 = FUN_00cec840(*(undefined4 *)(lVar4 + 0x260));
  thunk_FUN_00e7051c(&local_48,uVar5);
  FUN_00e70510(&local_58);
  if ((param_2 & 1) == 0) {
    FUN_0090dbac(&local_48);
    pcVar6 = "MENU_CHAT_PLAYER_UNMUTED";
  }
  else {
    FUN_0090db90();
    pcVar6 = "MENU_CHAT_PLAYER_MUTED";
  }
  uVar5 = FUN_00e6ce7c(pcVar6,0);
  FUN_00910394(&local_58,uVar5);
  FUN_00e705c8(&local_70,"[PLAYER_NAME]");
  FUN_00e71248(&local_58,0,&local_70,&local_48);
  if (local_68 != (void *)0x0) {
    operator_delete__(local_68);
    local_70 = 0;
    local_68 = (void *)0x0;
  }
  FUN_00cedce4();
  FUN_00d9e390();
  FUN_00d55870();
  FUN_0090d990(&local_70);
  pvVar1 = (void *)(ulong)((byte)local_70 >> 1);
  if ((local_70 & 1) != 0) {
    pvVar1 = local_68;
  }
  if (pvVar1 != (void *)0x0) {
    pvVar1 = (void *)((ulong)&local_70 | 1);
    if ((local_70 & 1) != 0) {
      pvVar1 = local_60;
    }
    FUN_0090dd30(pvVar1,&local_58);
  }
  if (((byte)local_70 & 1) != 0) {
    operator_delete(local_60);
  }
  if (local_50 != (void *)0x0) {
    operator_delete__(local_50);
    local_58 = 0;
    local_50 = (void *)0x0;
  }
  if (local_40 != (void *)0x0) {
    operator_delete__(local_40);
    local_48 = 0;
    local_40 = (void *)0x0;
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00bc4238(long param_1,undefined4 param_2)

{
  byte bVar1;
  long lVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined1 auStack_70 [32];
  undefined8 local_50;
  void *local_48;
  undefined4 local_40;
  byte local_3c;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  FUN_00bc2228();
  uVar4 = FUN_00cec840();
  bVar1 = *(byte *)(param_1 + 0x152);
  thunk_FUN_00e7051c(&local_50,uVar4);
  local_40 = param_2;
  local_3c = (bVar1 >> 1 ^ 0xff) & 1;
  uVar3 = FUN_00f048a4("EVENT_SELECT_NEGATIVE_REPORT");
  FUN_00f048e0(auStack_70,uVar3,&local_50);
  FUN_00f04760(*(undefined8 *)(param_1 + 8),auStack_70,1);
  if (local_48 != (void *)0x0) {
    operator_delete__(local_48);
    local_50 = 0;
    local_48 = (void *)0x0;
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00bc42ec(undefined8 *param_1)

{
  *param_1 = &PTR___cxa_pure_virtual_027eb5f8;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return;
}




void FUN_00bc4330(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xbc4334);
  (*pcVar1)();
}




void FUN_00bc4334(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR___cxa_pure_virtual_027eb698;
  pvVar1 = operator_new(0x11a0);
  FUN_00c13d44();
  *(undefined8 **)((long)pvVar1 + 0xb8) = param_1;
  param_1[3] = 0;
  param_1[4] = 0;
  *param_1 = &PTR_FUN_027eb670;
  param_1[1] = pvVar1;
  param_1[2] = 0;
  return;
}




void FUN_00bc438c(undefined8 *param_1)

{
  *param_1 = &PTR___cxa_pure_virtual_027eb698;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return;
}




void FUN_00bc43d0(undefined8 *param_1)

{
  *param_1 = &PTR___cxa_pure_virtual_027eb698;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  operator_delete(param_1);
  return;
}




void FUN_00bc4414(long param_1)

{
  FUN_00c14074(*(undefined8 *)(param_1 + 8));
  return;
}




void FUN_00bc441c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  *(undefined8 *)(param_1 + 0x10) = param_3;
  *(undefined8 *)(param_1 + 0x18) = param_4;
  *(undefined8 *)(param_1 + 0x20) = param_2;
  uVar1 = FUN_00d6eb50();
  uVar1 = FUN_00d6eb5c(uVar1,param_2);
  FUN_00c142e4(*(undefined8 *)(param_1 + 8),uVar1);
  FUN_00a57410(0,1);
  FUN_009affb0(1);
  return;
}




void FUN_00bc4470(long param_1)

{
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  FUN_00c14484(*(undefined8 *)(param_1 + 8));
  return;
}




void FUN_00bc4480(void)

{
  return;
}




void FUN_00bc4484(long param_1)

{
  if (*(code **)(param_1 + 0x10) != (code *)0x0) {
    (**(code **)(param_1 + 0x10))(*(undefined8 *)(param_1 + 0x18),0);
  }
  *(undefined8 *)(param_1 + 0x20) = 0;
  FUN_00a57410(0,0);
  FUN_009affb0(0);
  return;
}




undefined8 FUN_00bc44c8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}




void FUN_00bc44d0(undefined8 *param_1)

{
  *param_1 = &PTR___cxa_pure_virtual_027eb698;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return;
}




void FUN_00bc4514(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xbc4518);
  (*pcVar1)();
}




void FUN_00bc4518(undefined8 *param_1)

{
  long *plVar1;
  
  *param_1 = &PTR_FUN_027eb6e0;
  plVar1 = operator_new(0x530);
  FUN_00c15420();
  plVar1[0x19] = (long)param_1;
  *param_1 = &PTR_FUN_027eb6c0;
  param_1[1] = plVar1;
                    /* WARNING: Could not recover jumptable at 0x00bc4580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x138))(0,plVar1,0,4,1);
  return;
}




void FUN_00bc4584(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027eb6e0;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return;
}




void FUN_00bc45c8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027eb6e0;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  operator_delete(param_1);
  return;
}




void FUN_00bc460c(long param_1)

{
  FUN_00c15960(*(undefined8 *)(param_1 + 8));
                    /* WARNING: Could not recover jumptable at 0x00bc4648. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 8) + 0x138))(0,*(long **)(param_1 + 8),1,4,1);
  return;
}




void FUN_00bc464c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00bc4668. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 8) + 0x138))(0,*(long **)(param_1 + 8),0,4,1);
  return;
}




void FUN_00bc466c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027eb6e0;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return;
}




void FUN_00bc46b0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027eb6e0;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  operator_delete(param_1);
  return;
}




void FUN_00bc46f4(long param_1)

{
  FUN_00c15e20(*(undefined8 *)(param_1 + 8));
  return;
}




void FUN_00bc46fc(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_58 [8];
  long local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00c88d84(param_3);
  local_50 = param_3 + 8;
  lVar3 = FUN_00bc47a8(param_2 + 0x10,local_50,&DAT_01bb9f1d,&local_50,auStack_58);
  *(undefined8 *)(lVar3 + 0x38) = uVar2;
  FUN_00c15eb8(param_1,*(undefined8 *)(param_2 + 8),uVar2);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00bc4798(long param_1)

{
  FUN_00c15e2c(*(undefined8 *)(param_1 + 8));
  return;
}




void FUN_00bc47a0(long param_1)

{
  FUN_00c15ffc(*(undefined8 *)(param_1 + 8));
  return;
}




void * FUN_00bc47a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  bool bVar1;
  long lVar2;
  undefined8 *puVar3;
  void *pvVar4;
  undefined8 local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  puVar3 = (undefined8 *)FUN_00bc4858(param_1,&local_50,param_2);
  pvVar4 = (void *)*puVar3;
  bVar1 = pvVar4 == (void *)0x0;
  if (bVar1) {
    pvVar4 = operator_new(0x40);
    FUN_008fcdb8((long)pvVar4 + 0x20,*param_4);
    *(undefined8 *)((long)pvVar4 + 0x38) = 0;
    puVar3 = (undefined8 *)FUN_00bc4984(param_1,local_50,puVar3,pvVar4);
  }
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(puVar3,bVar1);
  }
  return pvVar4;
}




long * FUN_00bc4858(long param_1,undefined8 *param_2,byte *param_3)

{
  ulong uVar1;
  size_t __n;
  ulong uVar2;
  byte *__s1;
  byte bVar3;
  int iVar4;
  void *__s2;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  
  plVar5 = (long *)(param_1 + 8);
  plVar6 = (long *)*plVar5;
  if (plVar6 == (long *)0x0) {
    *param_2 = plVar5;
  }
  else {
    uVar2 = *(ulong *)(param_3 + 8);
    __s1 = *(byte **)(param_3 + 0x10);
    plVar5 = (long *)(param_1 + 8);
    if ((*param_3 & 1) == 0) {
      __s1 = param_3 + 1;
      uVar2 = (ulong)(*param_3 >> 1);
    }
    do {
      while( true ) {
        plVar7 = plVar6;
        bVar3 = *(byte *)(plVar7 + 4);
        uVar1 = (ulong)(bVar3 >> 1);
        if ((bVar3 & 1) != 0) {
          uVar1 = plVar7[5];
        }
        __n = uVar1;
        if (uVar2 <= uVar1) {
          __n = uVar2;
        }
        if (__n == 0) break;
        __s2 = (void *)plVar7[6];
        if ((bVar3 & 1) == 0) {
          __s2 = (void *)((long)plVar7 + 0x21);
        }
        iVar4 = memcmp(__s1,__s2,__n);
        if (iVar4 == 0) break;
        if (-1 < iVar4) {
LAB_00bc48bc:
          iVar4 = memcmp(__s2,__s1,__n);
          if (iVar4 == 0) goto LAB_00bc48d8;
          if (iVar4 < 0) goto LAB_00bc48e0;
          goto LAB_00bc4958;
        }
LAB_00bc4944:
        plVar5 = plVar7;
        plVar6 = (long *)*plVar7;
        if ((long *)*plVar7 == (long *)0x0) {
          *param_2 = plVar7;
          return plVar7;
        }
      }
      if (uVar2 < uVar1) goto LAB_00bc4944;
      if (__n != 0) {
        __s2 = (void *)plVar7[6];
        if ((bVar3 & 1) == 0) {
          __s2 = (void *)((long)plVar7 + 0x21);
        }
        goto LAB_00bc48bc;
      }
LAB_00bc48d8:
      if (uVar2 <= uVar1) break;
LAB_00bc48e0:
      plVar5 = plVar7 + 1;
      plVar6 = (long *)*plVar5;
    } while ((long *)*plVar5 != (long *)0x0);
LAB_00bc4958:
    *param_2 = plVar7;
  }
  return plVar5;
}




void FUN_00bc4984(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

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




void FUN_00bc49d8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  uVar1 = FUN_00c8b9fc(param_2);
  FUN_00c181f8(uVar2,uVar1);
  return;
}




void FUN_00bc4a04(long param_1)

{
  FUN_00c184c4(*(undefined8 *)(param_1 + 8));
  return;
}




void FUN_00bc4a0c(long param_1)

{
  FUN_00c184dc(*(undefined8 *)(param_1 + 8));
  return;
}




void FUN_00bc4a14(long param_1)

{
  FUN_00c184f4(*(undefined8 *)(param_1 + 8));
  return;
}




void FUN_00bc4a1c(long param_1)

{
  FUN_00c18480(*(undefined8 *)(param_1 + 8));
  return;
}




void FUN_00bc4a24(long param_1)

{
  FUN_00c1851c(*(undefined8 *)(param_1 + 8));
  return;
}




void FUN_00bc4a2c(long param_1)

{
  FUN_00c18504(*(undefined8 *)(param_1 + 8));
  return;
}




void FUN_00bc4a34(long param_1)

{
  FUN_00c18838(*(undefined8 *)(param_1 + 8));
  return;
}




void FUN_00bc4a3c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_30 = FUN_00c8a524(param_2);
  FUN_00bc4aa4(param_1 + 0x10,&local_30);
  FUN_00c18b4c(*(undefined8 *)(param_1 + 8),local_30);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00bc4aa4(uint *param_1,undefined8 *param_2)

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
    FUN_00bc4c20(param_1,uVar1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




undefined4 FUN_00bc4b2c(long param_1,ulong param_2,undefined8 param_3)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)(*(long *)(param_1 + 0x18) + (param_2 & 0xffffffff) * 8);
  lVar2 = FUN_00bc4ca0(lVar3 + 0x518,param_3);
  if (lVar3 + 0x520 == lVar2) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(lVar2 + 0x38);
  }
  return uVar1;
}




int FUN_00bc4b70(long param_1,undefined8 param_2)

{
  long lVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  
  if (*(int *)(param_1 + 0x10) < 1) {
    iVar3 = 0;
  }
  else {
    lVar4 = 0;
    iVar3 = 0;
    do {
      lVar5 = *(long *)(*(long *)(param_1 + 0x18) + lVar4 * 8);
      lVar1 = FUN_00bc4ca0(lVar5 + 0x518,param_2);
      if (lVar5 + 0x520 == lVar1) {
        iVar2 = 0;
      }
      else {
        iVar2 = *(int *)(lVar1 + 0x38);
      }
      lVar4 = lVar4 + 1;
      iVar3 = iVar2 + iVar3;
    } while (lVar4 < *(int *)(param_1 + 0x10));
  }
  return iVar3;
}




undefined4 FUN_00bc4c00(long param_1)

{
  return *(undefined4 *)(param_1 + 0x10);
}




void FUN_00bc4c08(long param_1,uint param_2)

{
  FUN_00c8ac28(0x3f000000,*(undefined8 *)(*(long *)(param_1 + 0x18) + (ulong)param_2 * 8));
  return;
}




void FUN_00bc4c18(long param_1)

{
  FUN_00c18aac(*(undefined8 *)(param_1 + 8));
  return;
}




void FUN_00bc4c20(uint *param_1,uint param_2)

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




undefined8 * FUN_00bc4ca0(long param_1,byte *param_2)

{
  ulong uVar1;
  ulong uVar2;
  size_t __n;
  byte bVar3;
  byte bVar4;
  int iVar5;
  undefined8 *puVar6;
  byte *__s1;
  void *__s2;
  undefined8 *puVar7;
  
  puVar7 = (undefined8 *)(param_1 + 8);
  puVar6 = (undefined8 *)FUN_00bc4d58(param_1,param_2,*puVar7,puVar7);
  if (puVar7 != puVar6) {
    bVar3 = *(byte *)(puVar6 + 4);
    bVar4 = *param_2;
    uVar1 = (ulong)(bVar3 >> 1);
    if ((bVar3 & 1) != 0) {
      uVar1 = puVar6[5];
    }
    uVar2 = (ulong)(bVar4 >> 1);
    if ((bVar4 & 1) != 0) {
      uVar2 = *(ulong *)(param_2 + 8);
    }
    __n = uVar1;
    if (uVar2 <= uVar1) {
      __n = uVar2;
    }
    if (__n != 0) {
      __s1 = *(byte **)(param_2 + 0x10);
      __s2 = (void *)puVar6[6];
      if ((bVar4 & 1) == 0) {
        __s1 = param_2 + 1;
      }
      if ((bVar3 & 1) == 0) {
        __s2 = (void *)((long)puVar6 + 0x21);
      }
      iVar5 = memcmp(__s1,__s2,__n);
      if (iVar5 != 0) {
        if (iVar5 < 0) {
          return puVar7;
        }
        return puVar6;
      }
    }
    if (uVar1 <= uVar2) {
      return puVar6;
    }
  }
  return puVar7;
}




long FUN_00bc4d58(undefined8 param_1,byte *param_2,long param_3,long param_4)

{
  ulong uVar1;
  size_t __n;
  ulong uVar2;
  byte *__s2;
  byte bVar3;
  uint uVar4;
  void *__s1;
  
  if (param_3 != 0) {
    uVar2 = *(ulong *)(param_2 + 8);
    __s2 = *(byte **)(param_2 + 0x10);
    if ((*param_2 & 1) == 0) {
      __s2 = param_2 + 1;
      uVar2 = (ulong)(*param_2 >> 1);
    }
    do {
      bVar3 = *(byte *)(param_3 + 0x20);
      uVar1 = (ulong)(bVar3 >> 1);
      if ((bVar3 & 1) != 0) {
        uVar1 = *(ulong *)(param_3 + 0x28);
      }
      __n = uVar2;
      if (uVar1 <= uVar2) {
        __n = uVar1;
      }
      if (__n == 0) {
LAB_00bc4dcc:
        uVar4 = (uint)(uVar2 < uVar1);
        if (uVar1 < uVar2) {
          uVar4 = 0xffffffff;
        }
      }
      else {
        __s1 = *(void **)(param_3 + 0x30);
        if ((bVar3 & 1) == 0) {
          __s1 = (void *)(param_3 + 0x21);
        }
        uVar4 = memcmp(__s1,__s2,__n);
        if (uVar4 == 0) goto LAB_00bc4dcc;
      }
      if ((int)uVar4 >= 0) {
        param_4 = param_3;
      }
      param_3 = *(long *)(param_3 + (ulong)((int)uVar4 < 0) * 8);
    } while (param_3 != 0);
  }
  return param_4;
}




void FUN_00bc4e08(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR___cxa_pure_virtual_027eb728;
  pvVar1 = operator_new(0x41f0);
  FUN_00c18c00();
  *(undefined8 **)((long)pvVar1 + 0xb8) = param_1;
  *param_1 = &PTR_FUN_027eb700;
  param_1[1] = pvVar1;
  FUN_008fcdb8(param_1 + 2,&DAT_0320ffa8);
  param_1[5] = 0;
  param_1[6] = 0;
  FUN_00e70510(param_1 + 7);
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 100;
  *(undefined1 *)((long)param_1 + 0x54) = 0;
  return;
}




void FUN_00bc4e84(undefined8 *param_1,undefined8 param_2)

{
  void *pvVar1;
  
  *param_1 = &PTR___cxa_pure_virtual_027eb728;
  pvVar1 = operator_new(0x41f0);
  FUN_00c18c00();
  *(undefined8 **)((long)pvVar1 + 0xb8) = param_1;
  *param_1 = &PTR_FUN_027eb700;
  param_1[1] = pvVar1;
  FUN_008fcdb8(param_1 + 2,param_2);
  param_1[5] = 0;
  param_1[6] = 0;
  FUN_00e70510(param_1 + 7);
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 100;
  *(undefined1 *)((long)param_1 + 0x54) = 0;
  FUN_00bc4f10(param_1,param_2);
  return;
}




void FUN_00bc4f10(long param_1)

{
  long lVar1;
  
  if (*(char *)(param_1 + 0x54) == '\0') {
    FUN_008fce60(param_1 + 0x10);
    if ((*(byte *)(param_1 + 0x10) & 1) == 0) {
      lVar1 = param_1 + 0x11;
    }
    else {
      lVar1 = *(long *)(param_1 + 0x20);
    }
    if (DAT_02c091c0 != 0) {
      FUN_00bc5468(DAT_02c091c0,lVar1,param_1);
    }
    *(undefined1 *)(param_1 + 0x54) = 1;
  }
  return;
}




void FUN_00bc4f74(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  void *pvVar3;
  uint uVar4;
  uint *puVar5;
  ulong uVar6;
  
  *param_1 = &PTR_FUN_027eb700;
  if (*(char *)((long)param_1 + 0x54) != '\0') {
    if ((*(byte *)(param_1 + 2) & 1) == 0) {
      lVar1 = (long)param_1 + 0x11;
    }
    else {
      lVar1 = param_1[4];
    }
    FUN_0090de08(lVar1,param_1);
  }
  puVar5 = (uint *)(param_1 + 5);
  uVar4 = *puVar5;
  if (uVar4 != 0) {
    uVar6 = 0;
    do {
      plVar2 = *(long **)(param_1[6] + uVar6 * 8);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 8))();
        *(undefined8 *)(param_1[6] + uVar6 * 8) = 0;
        uVar4 = *(uint *)(param_1 + 5);
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar4);
  }
  pvVar3 = (void *)param_1[6];
  if (pvVar3 != (void *)0x0) {
    *puVar5 = 0;
  }
  if ((void *)param_1[8] != (void *)0x0) {
    operator_delete__((void *)param_1[8]);
    pvVar3 = (void *)param_1[6];
    param_1[7] = 0;
    param_1[8] = 0;
  }
  if (pvVar3 != (void *)0x0) {
    operator_delete__(pvVar3);
    puVar5[0] = 0;
    puVar5[1] = 0;
    param_1[6] = 0;
  }
  if ((*(byte *)(param_1 + 2) & 1) != 0) {
    operator_delete((void *)param_1[4]);
  }
  *param_1 = &PTR___cxa_pure_virtual_027eb728;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return;
}

