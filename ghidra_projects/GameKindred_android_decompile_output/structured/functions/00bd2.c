// functions/00bd2 — 50 functions
#include "libGameKindred.h"




void FUN_00bd2004(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  
  *param_1 = &PTR_FUN_027ed458;
  param_1[3] = &UNK_027ed518;
  param_1[2] = &PTR_FUN_027ed4c0;
  lVar2 = FUN_00a06b24();
  lVar6 = (ulong)*(uint *)(lVar2 + 0x40) << 5;
  lVar3 = *(long *)(lVar2 + 0x48);
  do {
    lVar5 = lVar3;
    if (lVar6 == 0) goto LAB_00bd2068;
    lVar6 = lVar6 + -0x20;
    lVar3 = lVar5 + 0x20;
  } while (*(undefined8 **)(lVar5 + 8) != param_1);
  FUN_00933fe0((uint *)(lVar2 + 0x40),lVar5);
LAB_00bd2068:
  lVar2 = FUN_00a06b24();
  lVar6 = (ulong)*(uint *)(lVar2 + 0x50) << 5;
  lVar3 = *(long *)(lVar2 + 0x58);
  do {
    lVar5 = lVar3;
    if (lVar6 == 0) goto LAB_00bd2098;
    lVar6 = lVar6 + -0x20;
    lVar3 = lVar5 + 0x20;
  } while (*(undefined8 **)(lVar5 + 8) != param_1);
  FUN_00bd28cc((uint *)(lVar2 + 0x50),lVar5);
LAB_00bd2098:
  lVar3 = FUN_009fece0();
  lVar2 = (ulong)*(uint *)(lVar3 + 0x30) << 5;
  puVar1 = *(undefined8 **)(lVar3 + 0x38);
  do {
    puVar4 = puVar1;
    if (lVar2 == 0) goto LAB_00bd20c4;
    lVar2 = lVar2 + -0x20;
    puVar1 = puVar4 + 4;
  } while ((undefined8 *)*puVar4 != param_1);
  FUN_00910480((uint *)(lVar3 + 0x30),puVar4);
LAB_00bd20c4:
  lVar3 = FUN_009fece0();
  lVar2 = (ulong)*(uint *)(lVar3 + 0x40) << 5;
  puVar1 = *(undefined8 **)(lVar3 + 0x48);
  do {
    puVar4 = puVar1;
    if (lVar2 == 0) goto LAB_00bd20f0;
    lVar2 = lVar2 + -0x20;
    puVar1 = puVar4 + 4;
  } while ((undefined8 *)*puVar4 != param_1);
  FUN_00910480((uint *)(lVar3 + 0x40),puVar4);
LAB_00bd20f0:
  lVar2 = FUN_009fece0();
  lVar6 = (ulong)*(uint *)(lVar2 + 0x60) << 5;
  lVar3 = *(long *)(lVar2 + 0x68);
  do {
    lVar5 = lVar3;
    if (lVar6 == 0) goto LAB_00bd2120;
    lVar6 = lVar6 + -0x20;
    lVar3 = lVar5 + 0x20;
  } while (*(undefined8 **)(lVar5 + 8) != param_1);
  FUN_00bd2944((uint *)(lVar2 + 0x60),lVar5);
LAB_00bd2120:
  param_1[3] = &PTR_FUN_027e76c0;
  FUN_00b7d304(param_1 + 4,1);
  *param_1 = &PTR___cxa_pure_virtual_027ed530;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return;
}




void FUN_00bd2170(void *param_1)

{
  FUN_00bd2004();
  operator_delete(param_1);
  return;
}




void FUN_00bd2194(long param_1)

{
  FUN_00c2d604(*(undefined8 *)(param_1 + 8));
  return;
}




void FUN_00bd219c(long param_1,byte param_2)

{
  *(byte *)(param_1 + 0x32) = param_2 & 1;
  return;
}




void FUN_00bd21a8(long param_1,ulong param_2,uint param_3)

{
  bool bVar1;
  
  bVar1 = false;
  if ((param_2 & 1) != 0) {
    bVar1 = *(char *)(param_1 + 0x30) != '\0';
  }
  FUN_00c2d480(*(undefined8 *)(param_1 + 8),bVar1,param_3 & 1);
  return;
}




undefined1 FUN_00bd21d0(long param_1)

{
  return *(undefined1 *)(param_1 + 0x30);
}




void FUN_00bd21d8(long param_1,uint param_2)

{
  FUN_00c2d954(*(undefined8 *)(param_1 + 8),param_2 & 1);
  return;
}




void FUN_00bd21e4(undefined8 param_1,undefined8 param_2)

{
  FUN_00cb9fa0(param_2,"homepanel_overflow_nav_button_academy");
  return;
}




void FUN_00bd21f8(undefined8 param_1,undefined8 param_2)

{
  FUN_00cbef04(param_2,"homepanel_overflow_nav_button_news");
  return;
}




void FUN_00bd220c(void)

{
  long lVar1;
  
  lVar1 = FUN_009fece0();
  if (*(char *)(lVar1 + 0x70) != '\0') {
    FUN_00aa25b0("vainglory://PARTY",0);
    return;
  }
  FUN_00bd223c();
  return;
}




void FUN_00bd223c(void)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_0093d808();
  if ((uVar1 & 1) != 0) {
    uVar2 = FUN_00a06b24();
    FUN_00a06c8c(uVar2,"5v5_bots_solo","easy");
    return;
  }
  FUN_00cbf29c("homepanel_play_button");
  return;
}




void FUN_00bd2278(void)

{
  int iVar1;
  
  FUN_00a06b24();
  iVar1 = FUN_00a06c4c();
  if (iVar1 == 1) {
    FUN_00a06b24();
    FUN_00a06d2c();
    return;
  }
  return;
}




void FUN_00bd22a4(long param_1)

{
  long lVar1;
  undefined1 auStack_58 [32];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00c2d608(*(undefined8 *)(param_1 + 8),1);
  *(undefined1 *)(param_1 + 0x30) = 1;
  FUN_00c2d480(*(undefined8 *)(param_1 + 8),*(undefined1 *)(param_1 + 0x31),0);
  FUN_00f048e0(auStack_58,DAT_03133784,0);
  FUN_00f04760(*(undefined8 *)(param_1 + 8),auStack_58,1);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00bd233c(long param_1)

{
  FUN_00bd22a4(param_1 + -0x10);
  return;
}




void FUN_00bd2344(long param_1)

{
  *(undefined1 *)(param_1 + 0x30) = 0;
  FUN_00c2d480(*(undefined8 *)(param_1 + 8),0,0);
  return;
}




void FUN_00bd235c(long param_1)

{
  *(undefined1 *)(param_1 + 0x20) = 0;
  FUN_00c2d480(*(undefined8 *)(param_1 + -8),0,0);
  return;
}




void FUN_00bd2374(void)

{
  FUN_00e6ce7c("MAIN_MENU_HOME",0);
  return;
}




void FUN_00bd2394(void)

{
  FUN_00e6ce7c("MAIN_MENU_HOME",0);
  return;
}




void FUN_00bd23b4(undefined8 param_1,undefined8 param_2)

{
  FUN_00b1a8e8(param_2,"ACADEMY.*");
  FUN_00b1a8e8(param_2,"ACCOUNT.*");
  FUN_00b1a8e8(param_2,"NEWS.*");
  FUN_00b1a8e8(param_2,"QUESTS.*");
  return;
}




void thunk_FUN_00bd23b4(undefined8 param_1,undefined8 param_2)

{
  FUN_00b1a8e8(param_2,"ACADEMY.*");
  FUN_00b1a8e8(param_2,"ACCOUNT.*");
  FUN_00b1a8e8(param_2,"NEWS.*");
  FUN_00b1a8e8(param_2,"QUESTS.*");
  return;
}




void FUN_00bd2410(long param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  byte local_50 [16];
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00a06b24();
  iVar2 = FUN_00a06c4c();
  if (iVar2 == 1) {
    lVar3 = FUN_009580b8();
    if (*(char *)(lVar3 + 0x568a) == '\0') {
      lVar3 = FUN_009580b8();
      FUN_008fcdb8(local_50,lVar3 + 0x54a8);
      FUN_00bd24e0(param_1,local_50);
      if ((local_50[0] & 1) != 0) {
        operator_delete(local_40);
      }
    }
    uVar4 = *(undefined8 *)(param_1 + 8);
    lVar3 = FUN_00e829e0();
    FUN_00c2d724((float)*(int *)(lVar3 + 0xfc),uVar4);
  }
  FUN_00c2d60c(*(undefined8 *)(param_1 + 8),iVar2 == 1);
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00bd24e0(long param_1,byte *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  byte *pbVar4;
  undefined8 local_58;
  void *local_50;
  undefined8 local_48;
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  pbVar4 = *(byte **)(param_2 + 0x10);
  if ((*param_2 & 1) == 0) {
    pbVar4 = param_2 + 1;
  }
  uVar2 = FUN_00a06e70(pbVar4);
  pbVar4 = *(byte **)(param_2 + 0x10);
  if ((*param_2 & 1) == 0) {
    pbVar4 = param_2 + 1;
  }
  uVar3 = FUN_00a06f04(pbVar4);
  thunk_FUN_00e7051c(&local_48,uVar2);
  FUN_00e705c8(&local_58,&DAT_01bba6cb);
  FUN_00e70c34(&local_48,&local_58);
  if (local_50 != (void *)0x0) {
    operator_delete__(local_50);
    local_58 = 0;
    local_50 = (void *)0x0;
  }
  FUN_00e70c34(&local_48,uVar3);
  FUN_00c2d6f4(*(undefined8 *)(param_1 + 8),&local_48);
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




void FUN_00bd25c0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  lVar1 = FUN_009fece0();
  FUN_00c2d6e4(uVar2,*(undefined1 *)(lVar1 + 0x70));
  return;
}




undefined8 FUN_00bd25e8(void)

{
  FUN_00bd223c();
  return 0;
}




undefined8 FUN_00bd2600(void)

{
  long lVar1;
  
  lVar1 = FUN_00940c1c();
  if (*(char *)(lVar1 + 10) == '\0') {
    FUN_00aa25b0("vainglory://MARKET/MENU_MARKET_TAB_NAME_EVENTS",0);
  }
  else {
    FUN_00cbe0f0("homepanel_cornerwidget_events_tile");
  }
  return 0;
}




undefined8 FUN_00bd2640(void)

{
  FUN_00cc07b8("homepanel_cornerwidget_quests_tile");
  return 0;
}




void FUN_00bd2660(void)

{
  ulong uVar1;
  
  uVar1 = FUN_00e80f58();
  if (((uVar1 & 1) != 0) && (uVar1 = FUN_0093d808(), (uVar1 & 1) == 0)) {
    uVar1 = FUN_009480e0();
    if ((uVar1 & 1) != 0) {
      FUN_00cbe4c8();
      return;
    }
    FUN_00cbf91c("homepanel_profile_avatar");
    return;
  }
  return;
}




char * FUN_00bd26a0(void)

{
  return "main_nav_home";
}




undefined4 FUN_00bd26ac(void)

{
  return 0xc2640000;
}




undefined8 FUN_00bd26bc(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}




undefined8 FUN_00bd26c4(long param_1)

{
  return *(undefined8 *)(param_1 + -8);
}




char * FUN_00bd26cc(void)

{
  return "main_nav_home";
}




undefined4 FUN_00bd26d8(void)

{
  return 0xc2640000;
}




void FUN_00bd26e8(undefined8 *param_1)

{
  *param_1 = &PTR___cxa_pure_virtual_027ed530;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return;
}




void FUN_00bd272c(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xbd2730);
  (*pcVar1)();
}




void thunk_FUN_00bd2410(long param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  byte abStack_50 [16];
  void *pvStack_40;
  long lStack_38;
  
  lVar1 = tpidr_el0;
  lStack_38 = *(long *)(lVar1 + 0x28);
  FUN_00a06b24();
  iVar2 = FUN_00a06c4c();
  if (iVar2 == 1) {
    lVar3 = FUN_009580b8();
    if (*(char *)(lVar3 + 0x568a) == '\0') {
      lVar3 = FUN_009580b8();
      FUN_008fcdb8(abStack_50,lVar3 + 0x54a8);
      FUN_00bd24e0(param_1,abStack_50);
      if ((abStack_50[0] & 1) != 0) {
        operator_delete(pvStack_40);
      }
    }
    uVar4 = *(undefined8 *)(param_1 + 8);
    lVar3 = FUN_00e829e0();
    FUN_00c2d724((float)*(int *)(lVar3 + 0xfc),uVar4);
  }
  FUN_00c2d60c(*(undefined8 *)(param_1 + 8),iVar2 == 1);
  if (*(long *)(lVar1 + 0x28) != lStack_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00bd2734(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  lVar1 = FUN_009fece0();
  FUN_00c2d6e4(uVar2,*(undefined1 *)(lVar1 + 0x70));
  return;
}




void FUN_00bd275c(uint *param_1,undefined8 *param_2)

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
    FUN_00bd27f0(param_1,uVar2);
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




void thunk_FUN_00bd24e0(long param_1,byte *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  byte *pbVar4;
  undefined8 uStack_58;
  void *pvStack_50;
  undefined8 uStack_48;
  void *pvStack_40;
  long lStack_38;
  
  lVar1 = tpidr_el0;
  lStack_38 = *(long *)(lVar1 + 0x28);
  pbVar4 = *(byte **)(param_2 + 0x10);
  if ((*param_2 & 1) == 0) {
    pbVar4 = param_2 + 1;
  }
  uVar2 = FUN_00a06e70(pbVar4);
  pbVar4 = *(byte **)(param_2 + 0x10);
  if ((*param_2 & 1) == 0) {
    pbVar4 = param_2 + 1;
  }
  uVar3 = FUN_00a06f04(pbVar4);
  thunk_FUN_00e7051c(&uStack_48,uVar2);
  FUN_00e705c8(&uStack_58,&DAT_01bba6cb);
  FUN_00e70c34(&uStack_48,&uStack_58);
  if (pvStack_50 != (void *)0x0) {
    operator_delete__(pvStack_50);
    uStack_58 = 0;
    pvStack_50 = (void *)0x0;
  }
  FUN_00e70c34(&uStack_48,uVar3);
  FUN_00c2d6f4(*(undefined8 *)(param_1 + 8),&uStack_48);
  if (pvStack_40 != (void *)0x0) {
    operator_delete__(pvStack_40);
    uStack_48 = 0;
    pvStack_40 = (void *)0x0;
  }
  if (*(long *)(lVar1 + 0x28) == lStack_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00bd27f0(uint *param_1,uint param_2)

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




undefined8 FUN_00bd287c(void)

{
  FUN_00bd223c();
  return 0;
}




undefined8 FUN_00bd2894(void)

{
  FUN_00bd2600();
  return 0;
}




undefined8 FUN_00bd28ac(void)

{
  FUN_00cc07b8("homepanel_cornerwidget_quests_tile");
  return 0;
}




void FUN_00bd28cc(uint *param_1,undefined8 *param_2,undefined8 *param_3)

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




void FUN_00bd2944(uint *param_1,undefined8 *param_2,undefined8 *param_3)

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




void FUN_00bd29bc(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_027ed580;
  pvVar1 = operator_new(0x1c8f8);
  FUN_00c2f064();
  param_1[1] = pvVar1;
  param_1[2] = 0;
  *(undefined8 **)((long)pvVar1 + 0xd8) = param_1;
  *param_1 = &PTR_FUN_027ed560;
  FUN_00e70510(param_1 + 3);
  *(undefined1 *)(param_1 + 5) = 0;
  return;
}




void FUN_00bd2a20(undefined8 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)param_1[2];
  *param_1 = &PTR_FUN_027ed560;
  if (pvVar1 != (void *)0x0) {
    FUN_009fbef4(pvVar1);
    operator_delete(pvVar1);
  }
  if ((void *)param_1[4] != (void *)0x0) {
    operator_delete__((void *)param_1[4]);
    param_1[3] = 0;
    param_1[4] = 0;
  }
  *param_1 = &PTR_FUN_027ed580;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return;
}




void FUN_00bd2a9c(void *param_1)

{
  FUN_00bd2a20();
  operator_delete(param_1);
  return;
}




void FUN_00bd2ac0(long param_1)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x20);
  FUN_009fbc00();
  *(void **)(param_1 + 0x10) = pvVar1;
  FUN_00bd2afc(param_1);
  FUN_00c2fe34(*(undefined8 *)(param_1 + 8));
  return;
}




void FUN_00bd2afc(long param_1)

{
  void *pvVar1;
  long lVar2;
  undefined1 uVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int iVar11;
  uint uVar12;
  uint *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  ulong uVar18;
  long lVar19;
  size_t sVar20;
  undefined8 uVar21;
  uint uVar22;
  long lVar23;
  undefined8 uVar24;
  ulong local_1b0;
  void *local_1a8;
  void *local_1a0;
  undefined8 local_198;
  void *local_190;
  undefined8 local_188;
  void *local_180;
  uint local_178 [2];
  undefined1 auStack_170 [8];
  void *local_168;
  undefined1 auStack_158 [24];
  undefined1 auStack_140 [24];
  undefined1 auStack_128 [24];
  undefined1 auStack_110 [24];
  undefined1 auStack_f8 [24];
  undefined1 auStack_e0 [24];
  undefined1 auStack_c8 [24];
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  char local_90 [8];
  void *local_88;
  long local_80;
  
  lVar2 = tpidr_el0;
  local_80 = *(long *)(lVar2 + 0x28);
  uVar14 = *(undefined8 *)(param_1 + 8);
  uVar8 = FUN_009fc27c(*(undefined8 *)(param_1 + 0x10));
  uVar9 = FUN_009fc284(*(undefined8 *)(param_1 + 0x10));
  uVar10 = FUN_009fc298(*(undefined8 *)(param_1 + 0x10));
  FUN_00c30f54(uVar14,uVar8,uVar9,uVar10);
  iVar11 = FUN_009fc27c(*(undefined8 *)(param_1 + 0x10));
  if (iVar11 != 0) {
    uVar22 = 0;
    do {
      puVar13 = (uint *)FUN_009fc26c(*(undefined8 *)(param_1 + 0x10),uVar22);
      local_178[0] = *puVar13;
      FUN_008fcdb8(auStack_170,puVar13 + 2);
      FUN_008fcdb8(auStack_158,puVar13 + 8);
      FUN_008fcdb8(auStack_140,puVar13 + 0xe);
      FUN_008fcdb8(auStack_128,puVar13 + 0x14);
      FUN_008fcdb8(auStack_110,puVar13 + 0x1a);
      FUN_008fcdb8(auStack_f8,puVar13 + 0x20);
      FUN_008fcdb8(auStack_e0,puVar13 + 0x26);
      FUN_008fcdb8(auStack_c8,puVar13 + 0x2c);
      uStack_98 = *(undefined8 *)(puVar13 + 0x38);
      local_a0 = *(undefined8 *)(puVar13 + 0x36);
      uStack_a8 = *(undefined8 *)(puVar13 + 0x34);
      local_b0 = *(undefined8 *)(puVar13 + 0x32);
      uVar21 = *(undefined8 *)(param_1 + 8);
      uVar14 = FUN_009fcb30(local_178);
      FUN_00e70570(&local_1b0,uVar14);
      uVar14 = FUN_009fcb28(local_178);
      FUN_00e70570(local_90,uVar14);
      uVar14 = FUN_009fcb80(local_178);
      FUN_00e70570(&local_188,uVar14);
      uVar14 = FUN_009fcb68(local_178);
      FUN_00e70570(&local_198,uVar14);
      uVar14 = FUN_009fcb58(local_178);
      uVar15 = FUN_009fcb60(local_178);
      uVar16 = FUN_009fcb20(local_178);
      uVar17 = FUN_009fcb70(local_178);
      uVar3 = FUN_009fcb78(local_178);
      bVar4 = FUN_009fcb50(local_178);
      bVar5 = FUN_009fcb48(local_178);
      bVar6 = FUN_009fcb38(local_178);
      bVar7 = FUN_009fcb40(local_178);
      uVar24 = FUN_009fcb88(local_178);
      uVar8 = FUN_009fcb98(local_178);
      uVar9 = FUN_009fcba0(local_178);
      uVar10 = FUN_009fcba8(local_178);
      FUN_00c30f7c(uVar24,uVar21,uVar22,&local_1b0,local_90,&local_188,&local_198,uVar14,uVar15,
                   uVar16,uVar17,uVar3,bVar4 & 1,bVar5 & 1,bVar6 & 1,bVar7 & 1,uVar8,uVar9,uVar10);
      if (local_190 != (void *)0x0) {
        operator_delete__(local_190);
        local_198 = 0;
        local_190 = (void *)0x0;
      }
      if (local_180 != (void *)0x0) {
        operator_delete__(local_180);
        local_188 = 0;
        local_180 = (void *)0x0;
      }
      if (local_88 != (void *)0x0) {
        operator_delete__(local_88);
        local_90[0] = '\0';
        local_90[1] = '\0';
        local_90[2] = '\0';
        local_90[3] = '\0';
        local_90[4] = '\0';
        local_90[5] = '\0';
        local_90[6] = '\0';
        local_90[7] = '\0';
        local_88 = (void *)0x0;
      }
      if (local_1a8 != (void *)0x0) {
        operator_delete__(local_1a8);
        local_1b0 = 0;
        local_1a8 = (void *)0x0;
      }
      FUN_009fca7c(local_178);
      uVar22 = uVar22 + 1;
      uVar12 = FUN_009fc27c(*(undefined8 *)(param_1 + 0x10));
    } while (uVar22 < uVar12);
  }
  uVar14 = FUN_009fc2b0(*(undefined8 *)(param_1 + 0x10));
  FUN_00910394(param_1 + 0x18,uVar14);
  FUN_00910394(*(long *)(param_1 + 8) + 0x1c8c8,param_1 + 0x18);
  uVar18 = FUN_00969254();
  if (((uVar18 & 1) != 0) && (lVar19 = FUN_00969248(), 0 < *(int *)(lVar19 + 0x38))) {
    lVar19 = FUN_00969248();
    iVar11 = *(int *)(lVar19 + 0x38);
    if (iVar11 < 0) {
      iVar11 = iVar11 + 1;
    }
    lVar19 = FUN_00969248();
    lVar23 = *(long *)(param_1 + 8);
    if (*(int *)(lVar19 + 0x38) < 2) {
      FUN_008fce60((byte *)(lVar23 + 0x1c878),&DAT_0320ffa8);
      bVar4 = *(byte *)(lVar23 + 0x1c878);
      uVar18 = (ulong)(bVar4 >> 1);
      lVar19 = lVar23 + 0x1c879;
      if ((bVar4 & 1) != 0) {
        uVar18 = *(ulong *)(lVar23 + 0x1c880);
        lVar19 = *(long *)(lVar23 + 0x1c888);
      }
      FUN_008fcea8(lVar23 + 0x1c890,lVar19,uVar18);
    }
    else {
      FUN_00bd3044(lVar23,"build://Splash_5V5.png","full_splash_1k");
    }
    FUN_00bd30f0(local_90,&DAT_01bb6d43,iVar11 >> 1);
    FUN_008fa54c(local_178,"TUTORIAL_LOADING_LEVEL_DESCRIPTION_");
    sVar20 = strlen(local_90);
    FUN_0090de84(local_178,local_90,sVar20);
    FUN_008fa54c(&local_1b0,"TUTORIAL_LOADING_LEVEL_BOTTOM_TEXT_");
    sVar20 = strlen(local_90);
    FUN_0090de84(&local_1b0,local_90,sVar20);
    uVar14 = *(undefined8 *)(param_1 + 8);
    pvVar1 = (void *)((ulong)local_178 | 1);
    if ((local_178[0] & 1) != 0) {
      pvVar1 = local_168;
    }
    uVar15 = FUN_00e6ce7c(pvVar1,0);
    pvVar1 = (void *)((ulong)&local_1b0 | 1);
    if ((local_1b0 & 1) != 0) {
      pvVar1 = local_1a0;
    }
    uVar16 = FUN_00e6ce7c(pvVar1,0);
    FUN_00c3100c(uVar14,uVar15,uVar16);
    if ((local_1b0 & 1) != 0) {
      operator_delete(local_1a0);
    }
    if ((local_178[0] & 1) != 0) {
      operator_delete(local_168);
    }
  }
  if (*(long *)(lVar2 + 0x28) != local_80) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

