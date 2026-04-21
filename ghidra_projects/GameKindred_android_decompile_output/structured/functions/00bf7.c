// functions/00bf7 — 70 functions
#include "libGameKindred.h"




void FUN_00bf7034(long param_1)

{
  FUN_00bf6f44(param_1 + -0x10);
  return;
}




void FUN_00bf703c(long param_1)

{
  FUN_00bf6f44(param_1 + -0x28);
  return;
}




void FUN_00bf7044(void *param_1)

{
  FUN_00bf6f44();
  operator_delete(param_1);
  return;
}




void FUN_00bf7068(long param_1)

{
  FUN_00bf6f44((void *)(param_1 + -0x10));
  operator_delete((void *)(param_1 + -0x10));
  return;
}




void FUN_00bf7090(long param_1)

{
  FUN_00bf6f44((void *)(param_1 + -0x28));
  operator_delete((void *)(param_1 + -0x28));
  return;
}




undefined8 FUN_00bf70b8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}




undefined8 FUN_00bf70c0(long param_1)

{
  return *(undefined8 *)(param_1 + -0x20);
}




void FUN_00bf70c8(void)

{
  FUN_00e6ce7c("INVENTORY_HAT_TAB_TITLE",0);
  return;
}




void FUN_00bf70d8(void)

{
  FUN_00e6ce7c("INVENTORY_HAT_TAB_TITLE",0);
  return;
}




void FUN_00bf70e8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027f3050;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return;
}




void FUN_00bf712c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027f3050;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  operator_delete(param_1);
  return;
}




void FUN_00bf7170(uint *param_1,uint *param_2)

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
    FUN_00aa86a4(param_1,*param_2);
    uVar1 = *param_2;
    if (uVar1 != 0) {
      lVar4 = (ulong)uVar1 << 3;
      puVar2 = *(undefined8 **)(param_2 + 2);
      puVar3 = *(undefined8 **)(param_1 + 2);
      do {
        lVar4 = lVar4 + -8;
        *puVar3 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar3 = puVar3 + 1;
      } while (lVar4 != 0);
    }
    *param_1 = uVar1;
  }
  return;
}




void FUN_00bf71e0(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR___cxa_pure_virtual_027f3480;
  pvVar1 = operator_new(0x2700);
  FUN_00c77688();
  param_1[1] = pvVar1;
  *(undefined8 **)((long)pvVar1 + 0xb8) = param_1;
  FUN_00948cd8(param_1 + 2);
  *param_1 = &PTR_FUN_027f3070;
  param_1[2] = &PTR_FUN_027f30b0;
  param_1[5] = &PTR_FUN_027f3448;
  param_1[6] = 0;
  pvVar1 = operator_new(0x38);
  FUN_00bd125c();
  param_1[6] = pvVar1;
  FUN_00c77dbc(param_1[1],*(undefined8 *)((long)pvVar1 + 8));
  FUN_00bd1388(param_1[6]);
  FUN_00c77d44(param_1[1]);
  FUN_00bf7280(param_1);
  return;
}




void FUN_00bf7280(long param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 8);
  FUN_009580b8();
  uVar1 = FUN_0095e478();
  uVar2 = FUN_00ce9c64(1);
  FUN_00c77ae8(uVar3,uVar1,uVar2);
  return;
}




void FUN_00bf72bc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027f3070;
  param_1[2] = &PTR_FUN_027f30b0;
  param_1[5] = &PTR_FUN_027f3448;
  if ((long *)param_1[6] != (long *)0x0) {
    (**(code **)(*(long *)param_1[6] + 0x20))();
    param_1[6] = 0;
  }
  FUN_00948d58(param_1 + 2);
  *param_1 = &PTR___cxa_pure_virtual_027f3480;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return;
}




void FUN_00bf7344(long param_1)

{
  FUN_00bf72bc(param_1 + -0x10);
  return;
}




void FUN_00bf734c(long param_1)

{
  FUN_00bf72bc(param_1 + -0x28);
  return;
}




void FUN_00bf7354(void *param_1)

{
  FUN_00bf72bc();
  operator_delete(param_1);
  return;
}




void FUN_00bf7378(long param_1)

{
  FUN_00bf72bc((void *)(param_1 + -0x10));
  operator_delete((void *)(param_1 + -0x10));
  return;
}




void FUN_00bf73a0(long param_1)

{
  FUN_00bf72bc((void *)(param_1 + -0x28));
  operator_delete((void *)(param_1 + -0x28));
  return;
}




void thunk_FUN_00bf7280(long param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 8);
  FUN_009580b8();
  uVar1 = FUN_0095e478();
  uVar2 = FUN_00ce9c64(1);
  FUN_00c77ae8(uVar3,uVar1,uVar2);
  return;
}




void FUN_00bf73cc(long param_1)

{
  FUN_00bf7280(param_1 + -0x10);
  return;
}




undefined8 FUN_00bf73d4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}




undefined8 FUN_00bf73dc(long param_1)

{
  return *(undefined8 *)(param_1 + -0x20);
}




void FUN_00bf73e4(undefined1 param_1 [16],float param_2,long param_3,undefined8 param_4)

{
  char *pcVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  float fVar8;
  byte local_68 [16];
  void *local_58;
  undefined8 local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  lVar3 = FUN_00969248();
  if (*(int *)(lVar3 + 0x38) < 1) {
    plVar4 = (long *)FUN_00f04924(param_4);
    uVar5 = FUN_00cdbb18();
    uVar6 = FUN_00cdcaac(uVar5,plVar4 + 0x1f8);
    puVar7 = (undefined8 *)FUN_00965ecc(plVar4);
    uVar5 = *puVar7;
    fVar8 = (float)(**(code **)(*plVar4 + 0x48))(plVar4);
    lVar3 = FUN_00965ecc(plVar4);
    local_50 = CONCAT44(param_2 * (float)((ulong)*(undefined8 *)(lVar3 + 0x10) >> 0x20) * 0.5 +
                        (float)((ulong)uVar5 >> 0x20),
                        fVar8 * (float)*(undefined8 *)(lVar3 + 0x10) * 0.5 + (float)uVar5);
    uVar5 = *(undefined8 *)(param_3 + 8);
    pcVar1 = "Talents";
    if ((uVar6 & 1) == 0) {
      pcVar1 = "";
    }
    FUN_008fa54c(local_68,pcVar1);
    FUN_00c77e60(uVar5,plVar4 + 0x1f8,local_68,&local_50);
    if ((local_68[0] & 1) != 0) {
      operator_delete(local_58);
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00bf7510(void)

{
  FUN_00e6ce7c("MAIN_MENU_HEROES",0);
  return;
}




void FUN_00bf7520(void)

{
  FUN_00e6ce7c("MAIN_MENU_HEROES",0);
  return;
}




void FUN_00bf7530(undefined8 *param_1)

{
  *param_1 = &PTR___cxa_pure_virtual_027f3480;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return;
}




void FUN_00bf7574(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xbf7578);
  (*pcVar1)();
}




void FUN_00bf7578(long *param_1)

{
  long lVar1;
  void *pvVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined **local_2a0 [5];
  undefined1 auStack_278 [16];
  undefined1 auStack_268 [16];
  undefined8 local_258;
  void *local_250;
  undefined1 auStack_248 [40];
  undefined1 auStack_220 [296];
  undefined8 local_f8;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  *param_1 = (long)&PTR___cxa_pure_virtual_027f38a8;
  pvVar2 = operator_new(0x2410);
  FUN_00c7806c();
  param_1[1] = (long)pvVar2;
  *(long **)((long)pvVar2 + 0xb8) = param_1;
  FUN_00948cd8(param_1 + 2);
  FUN_009680c8(param_1 + 5);
  *param_1 = (long)&PTR_FUN_027f34a8;
  param_1[2] = (long)&PTR_FUN_027f34e0;
  param_1[5] = (long)&PTR_FUN_027f3878;
  FUN_00c78a00(param_1[1],"ACCOUNT.*");
  lVar5 = param_1[1];
  lVar3 = FUN_00969248();
  FUN_00c78e00(lVar5,*(int *)(lVar3 + 0x38) < 1);
  uVar4 = FUN_0093dbe8();
  if ((uVar4 & 1) != 0) {
    FUN_00e84dac(local_2a0);
    local_2a0[0] = &PTR_FUN_027bb448;
    memset(auStack_278,0,0x58);
    FUN_00964684(auStack_220);
    local_f8 = 0xffffffffffffffff;
    (**(code **)(*param_1 + 0x18))(param_1,local_2a0);
    local_2a0[0] = &PTR_FUN_027bb448;
    FUN_009515b0(auStack_220);
    FUN_00951478(auStack_248,1);
    if (local_250 != (void *)0x0) {
      operator_delete__(local_250);
      local_258 = 0;
      local_250 = (void *)0x0;
    }
    FUN_0095132c(auStack_268,1);
    FUN_009512b0(auStack_278,1);
    FUN_00e84dd8(local_2a0);
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00bf7700(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  lVar1 = FUN_00969248();
  FUN_00c78e00(uVar2,*(int *)(lVar1 + 0x38) < 1);
  return;
}




void FUN_00bf7730(undefined8 *param_1)

{
  FUN_00968148(param_1 + 5);
  FUN_00948d58(param_1 + 2);
  *param_1 = &PTR___cxa_pure_virtual_027f38a8;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return;
}




void FUN_00bf7784(long param_1)

{
  FUN_00bf7730(param_1 + -0x10);
  return;
}




void FUN_00bf778c(long param_1)

{
  FUN_00bf7730(param_1 + -0x28);
  return;
}




void FUN_00bf7794(void *param_1)

{
  FUN_00bf7730();
  operator_delete(param_1);
  return;
}




void FUN_00bf77b8(long param_1)

{
  FUN_00bf7730((void *)(param_1 + -0x10));
  operator_delete((void *)(param_1 + -0x10));
  return;
}




void FUN_00bf77e0(long param_1)

{
  FUN_00bf7730((void *)(param_1 + -0x28));
  operator_delete((void *)(param_1 + -0x28));
  return;
}




void FUN_00bf7808(long param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 local_48;
  void *local_40;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  uVar4 = FUN_009580c4();
  if ((uVar4 & 1) == 0) {
    uVar5 = *(undefined8 *)(param_1 + 8);
    FUN_00e705c8(&local_48,"NO PLAT USER");
    FUN_00c78c8c(uVar5,&local_48);
    if (local_40 != (void *)0x0) {
      operator_delete__(local_40);
      local_48 = 0;
      local_40 = (void *)0x0;
    }
  }
  else {
    uVar4 = FUN_0093dbe8();
    if (((uVar4 & 1) == 0) && (uVar4 = FUN_009480e0(), (uVar4 & 1) != 0)) {
      uVar7 = *(undefined8 *)(param_1 + 8);
      uVar5 = FUN_00e6ce7c("HOME_PANEL_TAP_TO_LOGIN_REGISTER",0);
    }
    else {
      uVar7 = *(undefined8 *)(param_1 + 8);
      FUN_009580b8();
      uVar5 = FUN_0095fdf0();
    }
    FUN_00c78c8c(uVar7,uVar5);
    uVar7 = *(undefined8 *)(param_1 + 8);
    uVar5 = FUN_00a07558();
    lVar6 = FUN_00a0766c(uVar5,1);
    uVar1 = *(undefined4 *)(lVar6 + 4);
    uVar5 = FUN_00a07558();
    lVar6 = FUN_00a0766c(uVar5,0);
    uVar2 = *(undefined4 *)(lVar6 + 4);
    uVar5 = FUN_00a07558();
    lVar6 = FUN_00a0766c(uVar5,2);
    FUN_00c78cd0(uVar7,uVar1,uVar2,(int)*(float *)(lVar6 + 0x1c));
  }
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00bf7918(long param_1)

{
  FUN_00bf7808(param_1 + -0x10);
  return;
}




void FUN_00bf7920(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  lVar1 = FUN_00969248();
  FUN_00c78e00(uVar2,*(int *)(lVar1 + 0x38) < 1);
  return;
}




void FUN_00bf7950(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + -0x20);
  lVar1 = FUN_00969248();
  FUN_00c78e00(uVar2,*(int *)(lVar1 + 0x38) < 1);
  return;
}




void FUN_00bf7980(void)

{
  ulong uVar1;
  
  uVar1 = FUN_00e80f58();
  if (((uVar1 & 1) == 0) || (uVar1 = FUN_0093d808(), (uVar1 & 1) != 0)) {
    return;
  }
  uVar1 = FUN_0093dbe8();
  if (((uVar1 & 1) == 0) && (uVar1 = FUN_009480e0(), (uVar1 & 1) != 0)) {
    FUN_00cbe4c8();
    return;
  }
  FUN_00cbf91c("homepanel_profile_avatar");
  return;
}




void FUN_00bf79c8(undefined8 *param_1)

{
  *param_1 = &PTR___cxa_pure_virtual_027f38a8;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return;
}




void FUN_00bf7a0c(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xbf7a10);
  (*pcVar1)();
}




void FUN_00bf7a10(undefined8 *param_1)

{
  void *pvVar1;
  long lVar2;
  
  *param_1 = &PTR___cxa_pure_virtual_027f3d00;
  pvVar1 = operator_new(0x110);
  FUN_00c78f64();
  param_1[1] = pvVar1;
  *(undefined8 **)((long)pvVar1 + 0xb8) = param_1;
  FUN_00948cd8(param_1 + 2);
  FUN_009680c8(param_1 + 5);
  param_1[5] = &PTR_FUN_027f3cd0;
  *param_1 = &PTR_FUN_027f38d0;
  param_1[2] = &PTR_FUN_027f3938;
  *(undefined1 *)(param_1 + 8) = 1;
  FUN_00c7975c(param_1[1],1,"NEWS.*");
  FUN_00c7975c(param_1[1],2,"LEADERBOARDS.*");
  FUN_00c7975c(param_1[1],3,"ACADEMY.*");
  lVar2 = FUN_00969248();
  *(bool *)(param_1 + 8) = *(int *)(lVar2 + 0x38) < 1;
  FUN_00c7958c(param_1[1]);
  return;
}




void FUN_00bf7ae0(long param_1)

{
  long lVar1;
  
  lVar1 = FUN_00969248();
  *(bool *)(param_1 + 0x40) = *(int *)(lVar1 + 0x38) < 1;
  FUN_00c7958c(*(undefined8 *)(param_1 + 8));
  return;
}




void FUN_00bf7b14(undefined8 *param_1)

{
  FUN_00968148(param_1 + 5);
  FUN_00948d58(param_1 + 2);
  *param_1 = &PTR___cxa_pure_virtual_027f3d00;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return;
}




void FUN_00bf7b68(long param_1)

{
  FUN_00bf7b14(param_1 + -0x10);
  return;
}




void FUN_00bf7b70(long param_1)

{
  FUN_00bf7b14(param_1 + -0x28);
  return;
}




void FUN_00bf7b78(void *param_1)

{
  FUN_00bf7b14();
  operator_delete(param_1);
  return;
}




void FUN_00bf7b9c(long param_1)

{
  FUN_00bf7b14((void *)(param_1 + -0x10));
  operator_delete((void *)(param_1 + -0x10));
  return;
}




void FUN_00bf7bc4(long param_1)

{
  FUN_00bf7b14((void *)(param_1 + -0x28));
  operator_delete((void *)(param_1 + -0x28));
  return;
}




void FUN_00bf7bec(long param_1)

{
  long lVar1;
  
  lVar1 = FUN_00969248();
  *(bool *)(param_1 + 0x40) = *(int *)(lVar1 + 0x38) < 1;
  FUN_00c7958c(*(undefined8 *)(param_1 + 8));
  return;
}




void FUN_00bf7c20(long param_1)

{
  long lVar1;
  
  lVar1 = FUN_00969248();
  *(bool *)(param_1 + 0x18) = *(int *)(lVar1 + 0x38) < 1;
  FUN_00c7958c(*(undefined8 *)(param_1 + -0x20));
  return;
}




void FUN_00bf7c54(long param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  
  uVar1 = FUN_009580c4();
  if ((uVar1 & 1) != 0) {
    uVar3 = *(undefined8 *)(param_1 + 8);
    lVar2 = FUN_009580b8();
    FUN_00c79770(uVar3,*(undefined4 *)(lVar2 + 0x5450));
    uVar3 = *(undefined8 *)(param_1 + 8);
    lVar2 = FUN_009580b8();
    FUN_00c797a0(uVar3,*(undefined4 *)(lVar2 + 0x5454));
    return;
  }
  return;
}




void FUN_00bf7cb0(long param_1)

{
  FUN_00bf7c54(param_1 + -0x10);
  return;
}




void FUN_00bf7cb8(long param_1)

{
  if (*(char *)(param_1 + 0x40) != '\0') {
    FUN_00aa25b0("vainglory://Market/MENU_MARKET_TAB_NAME_MARKET/glory_for_ice",0);
    return;
  }
  return;
}




void FUN_00bf7cd4(long param_1)

{
  if (*(char *)(param_1 + 0x40) != '\0') {
    FUN_00aa25b0("vainglory://Market/MENU_MARKET_TAB_NAME_MARKET/glory_for_ice",0);
    return;
  }
  return;
}




void FUN_00bf7cf0(long param_1)

{
  if (*(char *)(param_1 + 0x40) != '\0') {
    FUN_00cbef04(&DAT_0320ffa8,"homepanel_overflow_nav_button_news");
    return;
  }
  return;
}




void FUN_00bf7d10(void)

{
  FUN_00cbd238("homepanel_overflow_nav_button_settings");
  return;
}




void FUN_00bf7d1c(void)

{
  FUN_00cbdef8("homepanel_overflow_nav_button_leaderboards");
  return;
}




void FUN_00bf7d28(long param_1)

{
  if (*(char *)(param_1 + 0x40) != '\0') {
    FUN_00cb9fa0(&DAT_0320ffa8,"homepanel_overflow_nav_button_academy");
    return;
  }
  return;
}




void FUN_00bf7d48(long param_1)

{
  if (*(char *)(param_1 + 0x40) != '\0') {
    FUN_00cc2004("homepanel_overflow_nav_button_tiv");
    return;
  }
  return;
}




void FUN_00bf7d60(undefined8 *param_1)

{
  *param_1 = &PTR___cxa_pure_virtual_027f3d00;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return;
}




void FUN_00bf7da4(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xbf7da8);
  (*pcVar1)();
}




void FUN_00bf7da8(undefined8 *param_1)

{
  long lVar1;
  void *pvVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *local_58;
  code *pcStack_50;
  undefined8 *local_48;
  code *pcStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR___cxa_pure_virtual_027f3db8;
  pvVar2 = operator_new(0x720);
  FUN_00c79978();
  param_1[1] = pvVar2;
  *(undefined8 **)((long)pvVar2 + 0x240) = param_1;
  FUN_009680c8(param_1 + 2);
  *param_1 = &PTR_FUN_027f3d58;
  param_1[2] = &PTR_FUN_027f3d88;
  uVar3 = FUN_00940aac();
  pcStack_50 = (code *)0x0;
  pcStack_40 = thunk_FUN_00bf7ea8;
  local_58 = param_1;
  local_48 = param_1;
  FUN_009e4694(uVar3,&local_58);
  pcStack_50 = FUN_00bf8158;
  local_58 = param_1;
  FUN_00f02e98(0x3e4ccccd,&local_58,0,1);
  uVar4 = FUN_00940ce8();
  if ((uVar4 & 1) != 0) {
    FUN_00bf7ea8(param_1);
  }
  uVar3 = param_1[1];
  lVar5 = FUN_00969248();
  FUN_00c79e34(uVar3,*(int *)(lVar5 + 0x38) < 1);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00bf7ea8(long param_1)

{
  long lVar1;
  undefined8 local_38;
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00cb488c(&local_38,0,0,1);
  FUN_00c79e6c(*(undefined8 *)(param_1 + 8),&local_38);
  if (local_30 != (void *)0x0) {
    operator_delete__(local_30);
    local_38 = 0;
    local_30 = (void *)0x0;
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00bf7f1c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  lVar1 = FUN_00969248();
  FUN_00c79e34(uVar2,*(int *)(lVar1 + 0x38) < 1);
  return;
}




void FUN_00bf7f4c(undefined8 *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  uint *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *local_48;
  code *pcStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_027f3d58;
  param_1[2] = &PTR_FUN_027f3d88;
  pcStack_40 = FUN_00bf8158;
  local_48 = param_1;
  FUN_00f03390(&local_48);
  puVar3 = (uint *)FUN_00940aac();
  lVar5 = (ulong)*puVar3 << 5;
  puVar2 = *(undefined8 **)(puVar3 + 2);
  do {
    puVar4 = puVar2;
    if (lVar5 == 0) goto LAB_00bf7fcc;
    lVar5 = lVar5 + -0x20;
    puVar2 = puVar4 + 4;
  } while ((undefined8 *)*puVar4 != param_1);
  FUN_00910480(puVar3,puVar4);
LAB_00bf7fcc:
  FUN_00968148(param_1 + 2);
  *param_1 = &PTR___cxa_pure_virtual_027f3db8;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void thunk_FUN_00bf7ea8(long param_1)

{
  long lVar1;
  undefined8 uStack_38;
  void *pvStack_30;
  long lStack_28;
  
  lVar1 = tpidr_el0;
  lStack_28 = *(long *)(lVar1 + 0x28);
  FUN_00cb488c(&uStack_38,0,0,1);
  FUN_00c79e6c(*(undefined8 *)(param_1 + 8),&uStack_38);
  if (pvStack_30 != (void *)0x0) {
    operator_delete__(pvStack_30);
    uStack_38 = 0;
    pvStack_30 = (void *)0x0;
  }
  if (*(long *)(lVar1 + 0x28) == lStack_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

