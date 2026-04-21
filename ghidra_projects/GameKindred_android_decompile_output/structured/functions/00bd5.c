// functions/00bd5 — 32 functions
#include "libGameKindred.h"




undefined8 FUN_00bd5088(long param_1,uint param_2)

{
  char *pcVar1;
  char cVar2;
  char cVar3;
  long lVar4;
  ulong uVar5;
  char *pcVar6;
  
  lVar4 = FUN_00ceace8();
  if (lVar4 != 0) {
    FUN_00ceace8();
    uVar5 = FUN_00ceb0b4();
    if ((uVar5 & 1) != 0) {
      return 0;
    }
  }
  uVar5 = 0;
  pcVar6 = (char *)(param_1 + 0xbf8);
  while( true ) {
    pcVar1 = pcVar6 + -0xa18;
    if (*(char *)(param_1 + 0x1640) != '\0') {
      pcVar1 = pcVar6;
    }
    if ((((*pcVar1 != '\0') &&
         (cVar2 = pcVar1[8], cVar3 = FUN_009e0d70(*(undefined8 *)(param_1 + 0x1608)), cVar2 == cVar3
         )) && (pcVar1[3] != '\0')) && (*(ushort *)(pcVar1 + 9) == param_2)) break;
    uVar5 = uVar5 + 1;
    pcVar6 = pcVar6 + 0xa1;
    if (9 < uVar5) {
      return 0;
    }
  }
  return 1;
}




void FUN_00bd5148(undefined8 *param_1)

{
  *param_1 = &PTR___cxa_pure_virtual_027ed640;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return;
}




void FUN_00bd518c(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xbd5190);
  (*pcVar1)();
}




void FUN_00bd5190(uint *param_1,undefined8 *param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  
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
    FUN_00bd5224(param_1,uVar2);
    uVar4 = *param_1;
  }
  *param_1 = uVar4 + 1;
  uVar5 = param_2[2];
  lVar1 = *(long *)(param_1 + 2) + (ulong)(uVar4 + 1) * 0x20;
  *(undefined8 *)(lVar1 + -8) = param_2[3];
  *(undefined8 *)(lVar1 + -0x10) = uVar5;
  uVar5 = *param_2;
  *(undefined8 *)(lVar1 + -0x18) = param_2[1];
  *(undefined8 *)(lVar1 + -0x20) = uVar5;
  return;
}




void FUN_00bd5224(uint *param_1,uint param_2)

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




void FUN_00bd52b0(uint *param_1,undefined8 *param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  
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
    FUN_00bd5344(param_1,uVar2);
    uVar4 = *param_1;
  }
  *param_1 = uVar4 + 1;
  uVar5 = param_2[2];
  lVar1 = *(long *)(param_1 + 2) + (ulong)(uVar4 + 1) * 0x20;
  *(undefined8 *)(lVar1 + -8) = param_2[3];
  *(undefined8 *)(lVar1 + -0x10) = uVar5;
  uVar5 = *param_2;
  *(undefined8 *)(lVar1 + -0x18) = param_2[1];
  *(undefined8 *)(lVar1 + -0x20) = uVar5;
  return;
}




void FUN_00bd5344(uint *param_1,uint param_2)

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




void FUN_00bd53d0(uint *param_1,undefined8 *param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  
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
    FUN_00bd5464(param_1,uVar2);
    uVar4 = *param_1;
  }
  *param_1 = uVar4 + 1;
  uVar5 = param_2[2];
  lVar1 = *(long *)(param_1 + 2) + (ulong)(uVar4 + 1) * 0x20;
  *(undefined8 *)(lVar1 + -8) = param_2[3];
  *(undefined8 *)(lVar1 + -0x10) = uVar5;
  uVar5 = *param_2;
  *(undefined8 *)(lVar1 + -0x18) = param_2[1];
  *(undefined8 *)(lVar1 + -0x20) = uVar5;
  return;
}




void FUN_00bd5464(uint *param_1,uint param_2)

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




void FUN_00bd54f0(long param_1)

{
  long lVar1;
  undefined1 auStack_48 [32];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00f048e0(auStack_48,DAT_03133754,0);
  FUN_00f04760(*(undefined8 *)(param_1 + 8),auStack_48,1);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00bd555c(uint *param_1,undefined8 *param_2,undefined8 *param_3)

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




void FUN_00bd55d4(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR___cxa_pure_virtual_027ed6f0;
  pvVar1 = operator_new(0x4be0);
  FUN_00c330b0();
  param_1[1] = pvVar1;
  param_1[2] = 0;
  *(undefined8 **)((long)pvVar1 + 0x240) = param_1;
  *(undefined2 *)((long)param_1 + 0x22) = 0;
  *(undefined1 *)((long)param_1 + 0x24) = 0;
  param_1[3] = 0;
  *param_1 = &PTR_FUN_027ed6a8;
  *(undefined1 *)(param_1 + 4) = 0;
  FUN_00c338a0(pvVar1);
  return;
}




void FUN_00bd563c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027ed6a8;
  if ((long *)param_1[2] != (long *)0x0) {
    (**(code **)(*(long *)param_1[2] + 0x58))();
    param_1[2] = 0;
  }
  *param_1 = &PTR___cxa_pure_virtual_027ed6f0;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return;
}




void FUN_00bd56a8(void *param_1)

{
  FUN_00bd563c();
  operator_delete(param_1);
  return;
}




void FUN_00bd56cc(long param_1,uint param_2)

{
  FUN_00c33a70(*(undefined8 *)(param_1 + 8),param_2 & 1);
  return;
}




void FUN_00bd56d8(long param_1,byte param_2)

{
  *(byte *)(param_1 + 0x24) = param_2 & 1;
  FUN_00c33e60(*(undefined8 *)(param_1 + 8));
  return;
}




void FUN_00bd56ec(long param_1,ulong param_2)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  ulong extraout_x1;
  ulong extraout_x1_00;
  undefined8 extraout_x1_01;
  ulong uVar4;
  undefined8 local_58;
  void *local_50;
  undefined8 local_48;
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar4 = param_2 & 0xffffffff;
  if (((DAT_0313a8a8 & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire(&DAT_0313a8a8,param_2,uVar4), param_2 = extraout_x1, iVar2 != 0))
  {
    uVar3 = FUN_00e6ce7c("MENU_DRAFT_LOBBY_LABEL_ENEMY_NUM",0,uVar4);
    thunk_FUN_00e7051c(&DAT_0313a898,uVar3);
    __cxa_atexit(FUN_0090e338,&DAT_0313a898,&PTR_LOOP_02be3000);
    __cxa_guard_release(&DAT_0313a8a8);
    param_2 = extraout_x1_00;
  }
  if (((DAT_0313a8c0 & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire(&DAT_0313a8c0,param_2,uVar4), iVar2 != 0)) {
    FUN_00e70510(&DAT_0313a8b0,extraout_x1_01,uVar4);
    __cxa_atexit(FUN_0090e338,&DAT_0313a8b0,&PTR_LOOP_02be3000);
    __cxa_guard_release(&DAT_0313a8c0);
  }
  FUN_00e70e18(&DAT_0313a8b0,&DAT_01bb6d43,uVar4);
  thunk_FUN_00e7051c(&local_48,&DAT_0313a898);
  FUN_00e705c8(&local_58,"[NUM]");
  FUN_00e71248(&local_48,0,&local_58,&DAT_0313a8b0);
  if (local_50 != (void *)0x0) {
    operator_delete__(local_50);
    local_58 = 0;
    local_50 = (void *)0x0;
  }
  FUN_00c33f7c(*(undefined8 *)(param_1 + 8),&local_48);
  if (local_40 != (void *)0x0) {
    operator_delete__(local_40);
    local_48 = 0;
    local_40 = (void *)0x0;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00bd5890(long param_1,uint param_2)

{
  FUN_00c33a5c(*(undefined8 *)(param_1 + 8),param_2 & 1);
  return;
}




undefined8 FUN_00bd589c(long param_1,uint param_2,uint param_3)

{
  int iVar1;
  
  if ((param_2 & 1) != 0) {
    iVar1 = *(int *)(*(long *)(param_1 + 8) + 0x4bc0);
    if (iVar1 == 1) {
      return 0;
    }
    if (iVar1 == 3) {
      return 0;
    }
    if (iVar1 != 2) {
      if ((param_3 & 1) == 0) {
        FUN_00c34818();
      }
      else {
        FUN_00c347d8();
      }
      return 1;
    }
  }
  FUN_00c34780();
  return 0;
}




void FUN_00bd58fc(long param_1,uint param_2)

{
  if ((param_2 & 1) != 0) {
    FUN_00c347b8();
    return;
  }
  FUN_00c34780(*(undefined8 *)(param_1 + 8));
  return;
}




void FUN_00bd590c(long param_1,uint param_2)

{
  if ((param_2 & 1) != 0) {
    FUN_00c347f8();
    return;
  }
  FUN_00c34780(*(undefined8 *)(param_1 + 8));
  return;
}




void FUN_00bd591c(long param_1,long param_2,char param_3,byte param_4)

{
  undefined1 uVar1;
  ulong uVar2;
  void *pvVar3;
  
  uVar1 = *(undefined1 *)(param_2 + 1);
  *(undefined1 *)(param_1 + 0x20) = uVar1;
  *(undefined1 *)(param_1 + 0x21) = uVar1;
  uVar2 = FUN_0092e920();
  if ((uVar2 & 1) != 0) {
    if ((param_4 & 1) == 0) {
      if (*(long *)(param_1 + 0x10) != 0) {
        FUN_00c34320(*(undefined8 *)(param_1 + 8));
        if (*(long **)(param_1 + 0x10) != (long *)0x0) {
          (**(code **)(**(long **)(param_1 + 0x10) + 0x58))();
        }
        *(undefined8 *)(param_1 + 0x10) = 0;
      }
    }
    else if ((((*(long *)(param_1 + 0x10) == 0) && (*(long *)(param_1 + 0x18) != 0)) &&
             (uVar2 = FUN_00931d34(), (uVar2 & 1) != 0)) &&
            (uVar2 = FUN_00931e18(), (uVar2 & 1) != 0)) {
      pvVar3 = operator_new(0x38);
      FUN_00bf16fc();
      *(void **)(param_1 + 0x10) = pvVar3;
      FUN_00bf1850(pvVar3,1);
      FUN_00bf18d8(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18));
      FUN_00c342f0(*(undefined8 *)(param_1 + 8),*(undefined8 *)(*(long *)(param_1 + 0x10) + 8));
    }
  }
  FUN_00bd5a38(param_1,param_2,*(char *)(param_2 + 8) == param_3);
  FUN_00c33fc8(*(undefined8 *)(param_1 + 8),param_4 & 1,*(char *)(param_2 + 8) == param_3,
               *(char *)(param_2 + 7) != '\0');
  FUN_00c33eb8(*(undefined8 *)(param_1 + 8),*(char *)(param_2 + 3) == '\0' & param_4);
  return;
}




void FUN_00bd5a38(long param_1,long param_2,ulong param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong local_70;
  void *local_68;
  void *local_60;
  undefined8 local_58;
  void *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  *(bool *)(param_1 + 0x22) = *(char *)(param_2 + 3) != '\0';
  FUN_00e70510(&local_58);
  lVar2 = FUN_00ceace8();
  if (lVar2 == 0) {
    uVar3 = 0;
LAB_00bd5a98:
    if (((param_3 & 1) == 0) && (uVar3 = FUN_00ceab64(), (uVar3 & 1) == 0)) goto LAB_00bd5af4;
  }
  else {
    FUN_00ceace8();
    uVar3 = FUN_00ceae78();
    if ((((uint)uVar3 ^ 1) & 1) == 0) goto LAB_00bd5a98;
  }
  FUN_00bd5ce4(&local_70,uVar3,param_2 + 0x11,param_2 + 0x51,param_2 + 0x59);
  FUN_00910394(&local_58,&local_70);
  if (local_68 != (void *)0x0) {
    operator_delete__(local_68);
    local_70 = 0;
    local_68 = (void *)0x0;
  }
  FUN_00c33f7c(*(undefined8 *)(param_1 + 8),&local_58);
LAB_00bd5af4:
  FUN_00c34328(*(undefined8 *)(param_1 + 8),*(undefined1 *)(param_2 + 5));
  FUN_00c3467c(*(undefined8 *)(param_1 + 8),*(undefined1 *)(param_2 + 6));
  if (*(char *)(param_1 + 0x24) != '\0') {
    FUN_00c34658(*(undefined8 *)(param_1 + 8),*(undefined1 *)(param_1 + 0x22));
  }
  if ((((param_3 & 1) != 0) || (*(char *)(param_1 + 0x22) != '\0')) ||
     (uVar3 = FUN_00ceab64(), (uVar3 & 1) != 0)) {
    if (*(short *)(param_2 + 9) == -1) {
      FUN_00c34234(*(undefined8 *)(param_1 + 8));
    }
    else {
      FUN_00bd5e84(&local_70);
      FUN_00c34110(*(undefined8 *)(param_1 + 8),&local_70,*(undefined1 *)(param_1 + 0x22));
      if ((local_70 & 1) != 0) {
        operator_delete(local_60);
      }
    }
  }
  if (local_50 != (void *)0x0) {
    operator_delete__(local_50);
    local_58 = 0;
    local_50 = (void *)0x0;
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00bd5bbc(long param_1,long param_2,char param_3,uint param_4)

{
  ulong uVar1;
  void *pvVar2;
  
  *(undefined1 *)(param_1 + 0x20) = *(undefined1 *)(param_2 + 1);
  *(undefined1 *)(param_1 + 0x21) = *(undefined1 *)(param_2 + 0xa1);
  uVar1 = FUN_0092e920();
  if ((uVar1 & 1) != 0) {
    if ((param_4 & 1) == 0) {
      if (*(long *)(param_1 + 0x10) != 0) {
        FUN_00c34320(*(undefined8 *)(param_1 + 8));
        if (*(long **)(param_1 + 0x10) != (long *)0x0) {
          (**(code **)(**(long **)(param_1 + 0x10) + 0x58))();
        }
        *(undefined8 *)(param_1 + 0x10) = 0;
      }
    }
    else if ((((*(long *)(param_1 + 0x10) == 0) && (*(long *)(param_1 + 0x18) != 0)) &&
             (uVar1 = FUN_00931d34(), (uVar1 & 1) != 0)) &&
            (uVar1 = FUN_00931e18(), (uVar1 & 1) != 0)) {
      pvVar2 = operator_new(0x38);
      FUN_00bf16fc();
      *(void **)(param_1 + 0x10) = pvVar2;
      FUN_00bf1850(pvVar2,1);
      FUN_00bf18d8(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18));
      FUN_00c342f0(*(undefined8 *)(param_1 + 8),*(undefined8 *)(*(long *)(param_1 + 0x10) + 8));
    }
  }
  FUN_00bd5a38(param_1,param_2,*(char *)(param_2 + 8) == param_3);
  FUN_00c33fc8(*(undefined8 *)(param_1 + 8),param_4 & 1,*(char *)(param_2 + 8) == param_3,
               *(char *)(param_2 + 7) != '\0');
  FUN_00c3423c(*(undefined8 *)(param_1 + 8),*(undefined1 *)(param_2 + 0xa2));
  FUN_00c33eb8(*(undefined8 *)(param_1 + 8),*(char *)(param_2 + 0xa3) != '\0');
  return;
}




void FUN_00bd5ce4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  long lVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined8 local_88;
  void *local_80;
  undefined8 local_78;
  void *local_70;
  undefined8 local_68;
  void *local_60;
  undefined8 local_58;
  void *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_00e70510(param_1);
  FUN_00e70510(&local_58);
  FUN_00e70510(&local_68);
  FUN_00e70510(&local_78);
  FUN_00e705a0(&local_58,param_3);
  FUN_00e705a0(&local_68,param_4);
  FUN_00e705a0(&local_78,param_5);
  uVar4 = FUN_00e70b04(&local_68);
  if ((uVar4 & 1) == 0) {
    iVar2 = FUN_00e70b14(&local_68);
    iVar3 = FUN_00e70b14(&local_58);
    thunk_FUN_00910400(param_1,iVar2 + iVar3 + 1);
    FUN_00910394(param_1,&local_68);
    puVar5 = (undefined *)0x1e21c1a;
  }
  else {
    uVar4 = FUN_00e70b04(&local_78);
    if ((uVar4 & 1) != 0) {
      FUN_00910394(param_1,&local_58);
      goto LAB_00bd5e28;
    }
    iVar2 = FUN_00e70b14(&local_78);
    iVar3 = FUN_00e70b14(&local_58);
    thunk_FUN_00910400(param_1,iVar2 + iVar3 + 1);
    FUN_00910394(param_1,&local_78);
    puVar5 = &DAT_01bb5073;
  }
  FUN_00e705c8(&local_88,puVar5);
  FUN_00e70c34(param_1,&local_88);
  if (local_80 != (void *)0x0) {
    operator_delete__(local_80);
    local_88 = 0;
    local_80 = (void *)0x0;
  }
  FUN_00e70c34(param_1,&local_58);
LAB_00bd5e28:
  if (local_70 != (void *)0x0) {
    operator_delete__(local_70);
    local_78 = 0;
    local_70 = (void *)0x0;
  }
  if (local_60 != (void *)0x0) {
    operator_delete__(local_60);
    local_68 = 0;
    local_60 = (void *)0x0;
  }
  if (local_50 != (void *)0x0) {
    operator_delete__(local_50);
    local_58 = 0;
    local_50 = (void *)0x0;
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00bd5e84(undefined8 param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  long lVar2;
  int local_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uStack_30 = 0;
  local_38 = 0;
  uStack_40 = 0;
  local_48 = 0;
  uStack_50 = 0;
  local_58 = 0;
  uStack_60 = 0;
  local_68 = 0;
  local_6c = param_3;
  if (param_3 != 0xffff) {
    lVar2 = FUN_00ce9ba0(&local_6c);
    FUN_00e6a8a8(&local_68,"portrait_%s",*(undefined8 *)(lVar2 + 0x10));
  }
  FUN_008fa54c(param_1,&local_68);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00bd5f1c(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x18) = param_2;
  if (*(long *)(param_1 + 0x10) != 0) {
    FUN_00bf18d8();
    return;
  }
  return;
}




void FUN_00bd5f34(long param_1,undefined8 param_2)

{
  FUN_00f0491c(param_2,*(undefined1 *)(param_1 + 0x21));
  FUN_00f0490c(param_2);
  return;
}




void FUN_00bd5f64(long param_1,undefined8 param_2)

{
  FUN_00f0491c(param_2,*(undefined1 *)(param_1 + 0x21));
  FUN_00f0490c(param_2);
  return;
}




void FUN_00bd5f94(long param_1,undefined8 param_2)

{
  FUN_00f0491c(param_2,*(undefined1 *)(param_1 + 0x21));
  FUN_00f0490c(param_2);
  return;
}




void FUN_00bd5fc4(long param_1,undefined8 param_2)

{
  FUN_00f0491c(param_2,*(undefined1 *)(param_1 + 0x21));
  FUN_00f0490c(param_2);
  return;
}




void FUN_00bd5ff4(long param_1,undefined8 param_2)

{
  byte bVar1;
  
  bVar1 = FUN_00f04924(param_2);
  *(byte *)(param_1 + 0x23) = bVar1 & 1;
  FUN_00c33e7c(*(undefined8 *)(param_1 + 8));
  FUN_00f0491c(param_2,*(undefined1 *)(param_1 + 0x21));
  FUN_00f0490c(param_2);
  return;
}

