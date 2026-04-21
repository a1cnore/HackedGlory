// functions/00cb0 — 22 functions
#include "libGameKindred.h"




void FUN_00cb0048(undefined8 param_1)

{
  FUN_008fefd4(param_1,1);
  return;
}




uint FUN_00cb0050(uint param_1)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  
  lVar2 = FUN_008fc910();
  uVar1 = 0;
  if (lVar2 != 0) {
    uVar3 = FUN_009edd74(lVar2,param_1 & 1);
    uVar1 = 0;
    if ((uVar3 & 1) != 0) {
      uVar3 = FUN_008fab30(0);
      uVar1 = 0;
      if ((uVar3 & 1) == 0) {
        uVar1 = DAT_02be9c0c >> 0x1f;
      }
    }
  }
  return uVar1;
}




void FUN_00cb00a4(uint param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  
  uVar1 = FUN_00cb0050(param_1 & 1);
  if ((uVar1 & 1) != 0) {
    FUN_008fc9fc(param_1 & 1,param_2,param_3,param_4);
    return;
  }
  return;
}




void FUN_00cb0100(undefined8 param_1)

{
  FUN_008fefd4(&DAT_0313d178,0);
  FUN_00b8c840(&DAT_0313d178,param_1);
  return;
}




void FUN_00cb0138(void)

{
  return;
}




uint FUN_00cb013c(void)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  
  lVar2 = FUN_008fc910();
  if (lVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar3 = FUN_009edfb4();
    uVar1 = 0;
    if ((uVar3 & 1) != 0) {
      uVar1 = FUN_008fab30();
      uVar1 = uVar1 ^ 1;
    }
  }
  return uVar1 & 1;
}




void FUN_00cb0174(void)

{
  ulong uVar1;
  
  uVar1 = FUN_00cb013c();
  if ((uVar1 & 1) != 0) {
    FUN_008fca20(FUN_00cb01a4,FUN_00cb01dc);
    return;
  }
  return;
}




void FUN_00cb01a4(undefined8 param_1)

{
  FUN_008fefd4(&DAT_0313d188,0);
  FUN_00b8c840(&DAT_0313d188,param_1);
  return;
}




void FUN_00cb01dc(void)

{
  return;
}




uint FUN_00cb01e0(void)

{
  uint uVar1;
  long lVar2;
  
  lVar2 = FUN_0093618c();
  uVar1 = 0;
  if ((*(int *)(lVar2 + 8) != 0) && (uVar1 = 0, *(uint *)(lVar2 + 0xc) < *(uint *)(lVar2 + 0x10))) {
    uVar1 = FUN_009367d0();
    uVar1 = uVar1 ^ 1;
  }
  return uVar1 & 1;
}




void FUN_00cb0218(void)

{
  ulong uVar1;
  
  uVar1 = FUN_00cb01e0();
  if ((uVar1 & 1) != 0) {
    FUN_009367b8(FUN_00cb0248,FUN_00cb0278);
    return;
  }
  return;
}




void FUN_00cb0248(undefined8 param_1)

{
  FUN_00b8c840(&DAT_0313d198,param_1);
  FUN_00936760(FUN_00cb02f0,FUN_00cb02f4);
  return;
}




void FUN_00cb0278(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  FUN_00936760(FUN_00cb02f0,FUN_00cb02f4);
  uVar1 = FUN_00e6ce7c("GENERIC_DIALOG_ERROR",0);
  uVar2 = FUN_00e6ce7c("MENU_DIALOG_CHEST_REDEMPTION_FAILIRE",0);
  uVar3 = FUN_00e6ce7c("GENERIC_DIALOG_OKAY",0);
  FUN_00a9b8b8(uVar1,uVar2,uVar3,0,0);
  return;
}




void FUN_00cb02f0(void)

{
  return;
}




void FUN_00cb02f4(void)

{
  return;
}




void FUN_00cb02f8(undefined4 *param_1,long param_2)

{
  undefined8 uVar1;
  
  *param_1 = *(undefined4 *)(param_2 + 8);
  param_1[1] = *(undefined4 *)(param_2 + 0x20);
  uVar1 = *(undefined8 *)(param_2 + 0x14);
  param_1[8] = 0;
  *(undefined8 *)((long)param_1 + 0x15) = 0;
  *(undefined8 *)(param_1 + 2) = uVar1;
  *(undefined8 *)(param_1 + 4) = 0;
  return;
}




void FUN_00cb031c(undefined4 *param_1,long param_2)

{
  int iVar1;
  
  *param_1 = *(undefined4 *)(param_2 + 0x10);
  param_1[1] = *(undefined4 *)(param_2 + 0x18);
  param_1[2] = *(undefined4 *)(param_2 + 0x20);
  param_1[3] = *(undefined4 *)(param_2 + 0x28);
  param_1[4] = *(undefined4 *)(param_2 + 0x24);
  param_1[5] = *(undefined4 *)(param_2 + 0x4c);
  param_1[6] = *(undefined4 *)(param_2 + 0x30);
  *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_2 + 0x34);
  iVar1 = (uint)(*(int *)(param_2 + 0x38) == 0) << 1;
  if (*(int *)(param_2 + 0x38) == 1) {
    iVar1 = 1;
  }
  param_1[8] = iVar1;
  return;
}




void FUN_00cb037c(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_2 + 0x10);
  uVar1 = *(undefined8 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined8 *)((long)param_1 + 0x15) = 0;
  param_1[2] = 0;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  return;
}




void FUN_00cb0394(long param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  if (*(char *)(param_1 + 0x35) == '\0') {
    if (*(char *)(param_1 + 0x34) == '\0') {
      puVar1 = &DAT_0313d250;
      switch(*(undefined4 *)(param_1 + 0x20)) {
      case 0:
        break;
      case 1:
        puVar1 = &DAT_0313d254;
        break;
      case 2:
        puVar1 = &DAT_0313d25c;
        break;
      case 3:
        puVar1 = &DAT_0313d264;
        break;
      default:
        goto switchD_00cb03e8_default;
      }
    }
    else {
      puVar1 = &DAT_0313d270;
    }
  }
  else {
    puVar1 = &DAT_0313d26c;
  }
  *param_2 = *puVar1;
switchD_00cb03e8_default:
  return;
}




void FUN_00cb0410(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  bool bVar2;
  undefined4 uVar3;
  ulong uVar4;
  ulong uVar5;
  void *pvVar6;
  undefined4 *puVar7;
  long lVar8;
  undefined1 *puVar9;
  ulong uVar10;
  undefined4 local_338;
  undefined4 uStack_334;
  undefined4 local_330;
  undefined4 uStack_32c;
  undefined4 local_328;
  undefined4 uStack_324;
  undefined4 local_320;
  undefined1 local_31c;
  int local_318;
  undefined4 local_310;
  undefined4 uStack_30c;
  undefined8 local_308;
  undefined5 uStack_300;
  undefined3 local_2fb;
  undefined5 uStack_2f8;
  undefined4 local_2f0;
  undefined8 local_2e8;
  void *local_2e0;
  undefined8 local_2d8;
  void *local_2d0;
  undefined8 local_2c8;
  void *local_2c0;
  undefined4 local_2b4;
  undefined1 auStack_2b0 [64];
  undefined1 auStack_270 [16];
  undefined1 auStack_260 [480];
  long local_80 [4];
  
  lVar1 = tpidr_el0;
  local_80[2] = *(long *)(lVar1 + 0x28);
  lVar8 = 0;
  do {
    FUN_00e70510(auStack_270 + lVar8);
    lVar8 = lVar8 + 0x10;
  } while (lVar8 != 0x200);
  local_2b4 = 0;
  uVar4 = FUN_00e710d0(param_1,0,0x5b,0x5d,1,auStack_270,0,&local_2b4);
  uVar10 = 0;
  if ((uVar4 & 1) != 0) {
    puVar9 = auStack_260;
    uVar4 = 0;
    do {
      uVar10 = uVar4 + 1;
      if (0x1f < uVar10) {
        uVar10 = (ulong)((int)uVar4 + 1);
        break;
      }
      uVar5 = FUN_00e710d0(param_1,local_2b4,0x5b,0x5d,1,puVar9,0,&local_2b4);
      puVar9 = puVar9 + 0x10;
      uVar4 = uVar10;
    } while ((uVar5 & 1) != 0);
  }
  FUN_00e70510(&local_2c8);
  FUN_00e70510(&local_2d8);
  if ((int)uVar10 != 0) {
    puVar9 = auStack_270;
    uVar4 = 1;
    do {
      FUN_00e70978(puVar9,auStack_2b0,0x40);
      lVar8 = FUN_00ce9fc8(auStack_2b0,param_2,0);
      if (lVar8 == 0) {
        lVar8 = FUN_00ce9e94(auStack_2b0,param_2);
        if (lVar8 != 0) {
          FUN_00e705c8(&local_2e8,"[");
          FUN_00910394(&local_2c8,&local_2e8);
          if (local_2e0 != (void *)0x0) {
            operator_delete__(local_2e0);
            local_2e8 = 0;
            local_2e0 = (void *)0x0;
          }
          FUN_00e70c34(&local_2c8,puVar9);
          FUN_00e705c8(&local_2e8,&DAT_01e21cb0);
          FUN_00e70c34(&local_2c8,&local_2e8);
          if (local_2e0 != (void *)0x0) {
            operator_delete__(local_2e0);
            local_2e8 = 0;
            local_2e0 = (void *)0x0;
          }
          local_338 = *(undefined4 *)(lVar8 + 0x10);
          uStack_334 = *(undefined4 *)(lVar8 + 0x18);
          local_328 = *(undefined4 *)(lVar8 + 0x24);
          uStack_32c = *(undefined4 *)(lVar8 + 0x28);
          local_330 = *(undefined4 *)(lVar8 + 0x20);
          uStack_324 = *(undefined4 *)(lVar8 + 0x4c);
          local_320 = *(undefined4 *)(lVar8 + 0x30);
          local_31c = *(undefined1 *)(lVar8 + 0x34);
          local_318 = (uint)(*(int *)(lVar8 + 0x38) == 0) << 1;
          if (*(int *)(lVar8 + 0x38) == 1) {
            local_318 = 1;
          }
          uVar3 = 1;
          puVar7 = &local_338;
          goto LAB_00cb068c;
        }
      }
      else {
        FUN_00e705c8(&local_2e8,"[");
        FUN_00910394(&local_2c8,&local_2e8);
        if (local_2e0 != (void *)0x0) {
          operator_delete__(local_2e0);
          local_2e8 = 0;
          local_2e0 = (void *)0x0;
        }
        FUN_00e70c34(&local_2c8,puVar9);
        FUN_00e705c8(&local_2e8,&DAT_01e21cb0);
        FUN_00e70c34(&local_2c8,&local_2e8);
        if (local_2e0 != (void *)0x0) {
          operator_delete__(local_2e0);
          local_2e8 = 0;
          local_2e0 = (void *)0x0;
        }
        local_310 = *(undefined4 *)(lVar8 + 8);
        uStack_30c = *(undefined4 *)(lVar8 + 0x20);
        local_308 = *(undefined8 *)(lVar8 + 0x14);
        uVar3 = *(undefined4 *)(lVar8 + 0x2c);
        puVar7 = &local_310;
        uStack_2f8 = 0;
        uStack_300 = 0;
        local_2fb = 0;
        local_2f0 = 0;
LAB_00cb068c:
        FUN_00cb0740(uVar3,puVar7,&local_2d8);
        FUN_00e71248(param_1,0,&local_2c8,&local_2d8);
      }
      if ((uVar10 & 0xffffffff) <= uVar4) break;
      bVar2 = uVar4 < 0x20;
      uVar4 = uVar4 + 1;
      puVar9 = puVar9 + 0x10;
    } while (bVar2);
  }
  if (local_2d0 != (void *)0x0) {
    operator_delete__(local_2d0);
    local_2d8 = 0;
    local_2d0 = (void *)0x0;
  }
  if (local_2c0 != (void *)0x0) {
    operator_delete__(local_2c0);
    local_2c8 = 0;
    local_2c0 = (void *)0x0;
  }
  lVar8 = 0;
  do {
    pvVar6 = *(void **)((long)local_80 + lVar8 + 8);
    if (pvVar6 != (void *)0x0) {
      operator_delete__(pvVar6);
      *(undefined8 *)((long)local_80 + lVar8) = 0;
      *(undefined8 *)((long)local_80 + lVar8 + 8) = 0;
    }
    lVar8 = lVar8 + -0x10;
  } while (lVar8 != -0x200);
  if (*(long *)(lVar1 + 0x28) != local_80[2]) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00cb0740(uint param_1,float *param_2,undefined8 param_3)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  int iVar4;
  undefined8 uVar5;
  undefined *puVar6;
  char *pcVar7;
  float fVar8;
  float fVar9;
  undefined8 local_78;
  void *local_70;
  undefined8 local_68;
  void *local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  FUN_00910394(param_3,&DAT_03210450);
  if (ABS(*param_2) < 1.1920929e-07) {
    *param_2 = 0.0;
  }
  if (((DAT_0313d340 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_0313d340), iVar4 != 0)) {
    FUN_00e70510(&DAT_0313d330);
    __cxa_atexit(FUN_0090e338,&DAT_0313d330,&PTR_LOOP_02be3000);
    __cxa_guard_release(&DAT_0313d340);
  }
  if (param_2[8] == 2.8026e-45) {
    puVar6 = &DAT_01bc2565;
LAB_00cb07e0:
    FUN_00e705c8(&local_68,puVar6);
    FUN_00e70c34(param_3,&local_68);
    if (local_60 != (void *)0x0) {
      operator_delete__(local_60);
      local_68 = 0;
      local_60 = (void *)0x0;
    }
  }
  else if (param_2[8] == 1.4013e-45) {
    puVar6 = &DAT_01bc2560;
    goto LAB_00cb07e0;
  }
  if ((*param_2 == 0.0) &&
     ((((fVar9 = param_2[1], fVar9 != 0.0 || (param_2[2] != 0.0)) || (param_2[3] != 0.0)) ||
      (*(char *)(param_2 + 7) != '\0')))) {
    bVar3 = true;
  }
  else {
    FUN_00cb3464(&DAT_0313d330,param_1);
    FUN_00e70c34(param_3,&DAT_0313d330);
    fVar9 = param_2[1];
    bVar3 = false;
  }
  if (fVar9 != 0.0) {
    fVar8 = fVar9 * 11.0 + *param_2;
    fVar9 = fVar8 + -1.0;
    if (param_1 != 5) {
      fVar9 = fVar8;
    }
    uVar1 = 2;
    if (1 < param_1 - 5) {
      uVar1 = param_1;
    }
    FUN_00e705c8(&local_68,0x1e21c1a);
    FUN_00e70c34(param_3,&local_68);
    if (local_60 != (void *)0x0) {
      operator_delete__(local_60);
      local_68 = 0;
      local_60 = (void *)0x0;
    }
    FUN_00cb3464(fVar9,&DAT_0313d330,uVar1);
    FUN_00e70c34(param_3,&DAT_0313d330);
    FUN_00e705c8(&local_68," ([REPLACE])");
    FUN_00910394(&DAT_0313d330,&local_68);
    if (local_60 != (void *)0x0) {
      operator_delete__(local_60);
      local_68 = 0;
      local_60 = (void *)0x0;
    }
    uVar5 = FUN_00e6ce7c("MENU_STYLE_HELPER_LEVEL_1_12",0);
    FUN_00e705c8(&local_68,"[REPLACE]");
    FUN_00e71248(&DAT_0313d330,0,&local_68,uVar5);
    if (local_60 != (void *)0x0) {
      operator_delete__(local_60);
      local_68 = 0;
      local_60 = (void *)0x0;
    }
    FUN_00e70c34(param_3,&DAT_0313d330);
  }
  if (param_2[8] == 2.8026e-45) {
    pcVar7 = " [WP](%+d%% [REPLACE])[/WP]";
LAB_00cb09a0:
    FUN_00e705c8(&local_68,pcVar7 + 0x16);
    FUN_00e70c34(param_3,&local_68);
    if (local_60 != (void *)0x0) {
      operator_delete__(local_60);
      local_68 = 0;
      local_60 = (void *)0x0;
    }
  }
  else if (param_2[8] == 1.4013e-45) {
    pcVar7 = " [CP](%+d%% [REPLACE])[/CP]";
    goto LAB_00cb09a0;
  }
  if (0.0 < param_2[2]) {
    fVar9 = param_2[2] * 100.0;
    if ((param_1 < 7) && ((1 << (ulong)(param_1 & 0x1f) & 100U) != 0)) {
      fVar9 = fVar9 * 100.0;
    }
    fVar8 = fmodf(fVar9,1.0);
    if (bVar3) {
      if (ABS(fVar8) < 0.01) {
        pcVar7 = " [CP]%d%% [REPLACE][/CP]";
        goto LAB_00cb0a50;
      }
      pcVar7 = " [CP]%.3g%% [REPLACE][/CP]";
LAB_00cb0a84:
      FUN_00e70e18((double)fVar9,&DAT_0313d330,pcVar7);
    }
    else {
      if (ABS(fVar8) >= 0.01) {
        pcVar7 = " [CP](%+.3g%% [REPLACE])[/CP]";
        goto LAB_00cb0a84;
      }
      pcVar7 = " [CP](%+d%% [REPLACE])[/CP]";
LAB_00cb0a50:
      FUN_00e70e18(&DAT_0313d330,pcVar7,(int)fVar9);
    }
    uVar5 = FUN_00e6ce7c("MENU_STYLE_HELPER_CRYSTAL_POWER_ATTRIBUTE",0);
    FUN_00e705c8(&local_68,"[REPLACE]");
    FUN_00e71248(&DAT_0313d330,0,&local_68,uVar5);
    if (local_60 != (void *)0x0) {
      operator_delete__(local_60);
      local_68 = 0;
      local_60 = (void *)0x0;
    }
    FUN_00e70c34(param_3,&DAT_0313d330);
    bVar3 = false;
  }
  if (param_2[3] <= 0.0) goto LAB_00cb0c08;
  fVar9 = param_2[3] * 100.0;
  if ((param_1 < 7) && ((1 << (ulong)(param_1 & 0x1f) & 100U) != 0)) {
    fVar9 = fVar9 * 100.0;
  }
  fVar8 = fmodf(fVar9,1.0);
  if (bVar3) {
    if (ABS(fVar8) < 0.01) {
      pcVar7 = " [WP]%d%% [REPLACE][/WP]";
      goto LAB_00cb0b74;
    }
    pcVar7 = " [WP]%.3g%% [REPLACE][/WP]";
LAB_00cb0ba8:
    FUN_00e70e18((double)fVar9,&DAT_0313d330,pcVar7);
  }
  else {
    if (ABS(fVar8) >= 0.01) {
      pcVar7 = " [WP](%+.3g%% [REPLACE])[/WP]";
      goto LAB_00cb0ba8;
    }
    pcVar7 = " [WP](%+d%% [REPLACE])[/WP]";
LAB_00cb0b74:
    FUN_00e70e18(&DAT_0313d330,pcVar7,(int)fVar9);
  }
  uVar5 = FUN_00e6ce7c("MENU_STYLE_HELPER_WEAPON_POWER_ATTRIBUTE",0);
  FUN_00e705c8(&local_68,"[REPLACE]");
  FUN_00e71248(&DAT_0313d330,0,&local_68,uVar5);
  if (local_60 != (void *)0x0) {
    operator_delete__(local_60);
    local_68 = 0;
    local_60 = (void *)0x0;
  }
  FUN_00e70c34(param_3,&DAT_0313d330);
LAB_00cb0c08:
  if (*(char *)(param_2 + 7) != '\0') {
    uVar5 = FUN_00e6ce7c("MENU_STYLE_HELPER_PERCENT_MAX_HEALTH_AS_DAMAGE",0);
    FUN_00e70c34(param_3,uVar5);
    if (0.0 <= param_2[6]) {
      FUN_00e70e18(&DAT_0313d330,&DAT_01bb6d43,(int)param_2[6]);
      uVar5 = FUN_00e6ce7c("MENU_STYLE_HELPER_PERCENT_HEALTH_CAP",0);
      thunk_FUN_00e7051c(&local_68,uVar5);
      FUN_00e705c8(&local_78,"[MAX]");
      FUN_00e71248(&local_68,0,&local_78,&DAT_0313d330);
      if (local_70 != (void *)0x0) {
        operator_delete__(local_70);
        local_78 = 0;
        local_70 = (void *)0x0;
      }
      FUN_00e70c34(param_3,&local_68);
      if (local_60 != (void *)0x0) {
        operator_delete__(local_60);
        local_68 = 0;
        local_60 = (void *)0x0;
      }
    }
  }
  if (0.0 < param_2[5]) {
    FUN_00e70e18(&DAT_0313d330,&DAT_01bc2552,(int)(param_2[5] * 100.0));
    uVar5 = FUN_00e6ce7c("MENU_STYLE_HELPER_PERCENT_LIFESTEAL",0);
    thunk_FUN_00e7051c(&local_68,uVar5);
    FUN_00e705c8(&local_78,"[LIFESTEAL]");
    FUN_00e71248(&local_68,0,&local_78,&DAT_0313d330);
    if (local_70 != (void *)0x0) {
      operator_delete__(local_70);
      local_78 = 0;
      local_70 = (void *)0x0;
    }
    FUN_00e70c34(param_3,&local_68);
    if (local_60 != (void *)0x0) {
      operator_delete__(local_60);
      local_68 = 0;
      local_60 = (void *)0x0;
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00cb0ddc(undefined8 param_1,long param_2,long param_3)

{
  void *pvVar1;
  uint uVar2;
  long lVar3;
  float fVar4;
  void *pvVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  int iVar11;
  undefined4 uVar12;
  int iVar13;
  uint uVar14;
  undefined4 uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  byte *pbVar19;
  ulong *puVar20;
  size_t sVar21;
  long lVar22;
  void *pvVar23;
  void *pvVar24;
  long lVar25;
  long lVar26;
  ulong uVar27;
  undefined1 *puVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  byte local_3c8 [16];
  void *local_3b8;
  ulong local_3b0;
  ulong uStack_3a8;
  void *local_3a0;
  ulong local_390;
  ulong uStack_388;
  void *local_380;
  ulong local_370;
  void *pvStack_368;
  void *local_360;
  byte local_350 [8];
  ulong local_348;
  void *local_340;
  byte local_338 [16];
  void *local_328;
  byte local_320 [8];
  ulong local_318;
  void *local_310;
  byte local_308 [16];
  void *local_2f8;
  byte local_2f0 [16];
  void *local_2e0;
  byte local_2d8 [16];
  void *local_2c8;
  undefined8 local_2c0;
  void *local_2b8;
  undefined8 local_2b0;
  void *local_2a8;
  undefined8 local_2a0;
  void *local_298;
  ulong local_290;
  undefined8 uStack_288;
  void *local_280;
  undefined4 local_278;
  undefined4 local_274;
  undefined8 local_270;
  void *local_268;
  undefined8 local_260;
  void *local_258;
  undefined8 local_250;
  void *local_248;
  undefined8 local_240;
  void *local_238;
  undefined8 local_230;
  void *local_228;
  undefined8 local_220;
  void *local_218;
  undefined8 local_210;
  undefined8 local_208;
  undefined4 local_200;
  int local_1fc;
  undefined8 local_1f8;
  void *local_1f0;
  undefined8 local_1e8;
  void *local_1e0;
  undefined8 local_1d8;
  void *local_1d0;
  undefined4 local_1c4;
  ulong local_1c0;
  ulong uStack_1b8;
  void *local_1b0;
  ulong local_1a0;
  void *pvStack_198;
  void *local_190;
  undefined8 local_178;
  void *local_170;
  undefined8 local_158;
  void *local_150;
  undefined1 auStack_118 [16];
  undefined1 auStack_108 [96];
  undefined8 local_a8 [5];
  
  lVar3 = tpidr_el0;
  lVar22 = *(long *)(lVar3 + 0x28);
  lVar26 = 0;
  do {
    FUN_00e70510(auStack_118 + lVar26);
    lVar26 = lVar26 + 0x10;
  } while (lVar26 != 0x80);
  local_1c4 = 0;
  uVar16 = FUN_00e710d0(param_1,0,0x5b,0x5d,1,auStack_118,0,&local_1c4);
  uVar27 = 0;
  if ((uVar16 & 1) != 0) {
    puVar28 = auStack_108;
    uVar16 = 0;
    do {
      uVar27 = uVar16 + 1;
      if (7 < uVar27) {
        uVar27 = (ulong)((int)uVar16 + 1);
        break;
      }
      uVar17 = FUN_00e710d0(param_1,local_1c4,0x5b,0x5d,1,puVar28,0,&local_1c4);
      puVar28 = puVar28 + 0x10;
      uVar16 = uVar27;
    } while ((uVar17 & 1) != 0);
  }
  FUN_00e70510(&local_1d8);
  if ((int)uVar27 != 0) {
    pvVar23 = (void *)((ulong)local_320 | 1);
    pvVar24 = (void *)((ulong)local_350 | 1);
    uVar16 = 0;
    do {
      thunk_FUN_00e7051c(&local_1e8,&DAT_03210450);
      thunk_FUN_00e7051c(&local_1f8,&DAT_03210450);
      puVar28 = auStack_118 + uVar16 * 0x10;
      local_1fc = 0;
      uVar17 = FUN_00e7107c(puVar28,0,0x7c,&local_1fc);
      if ((uVar17 & 1) == 0) {
        FUN_00910394(&local_1e8,puVar28);
      }
      else {
        FUN_00e71810(&local_158,puVar28,0,local_1fc);
        FUN_00910394(&local_1e8,&local_158);
        if (local_150 != (void *)0x0) {
          operator_delete__(local_150);
          local_150 = (void *)0x0;
          local_158 = 0;
        }
        iVar13 = local_1fc + 1;
        iVar11 = FUN_00e70b14(puVar28);
        FUN_00e71810(&local_158,puVar28,iVar13,iVar11 - local_1fc);
        FUN_00910394(&local_1f8,&local_158);
        if (local_150 != (void *)0x0) {
          operator_delete__(local_150);
          local_150 = (void *)0x0;
          local_158 = 0;
        }
      }
      FUN_00e70978(&local_1e8,&local_158,0x40);
      local_208 = 0;
      local_210 = 0;
      local_200 = 0;
      FUN_00e705c8(&local_178,"[");
      FUN_00910394(&local_1d8,&local_178);
      if (local_170 != (void *)0x0) {
        operator_delete__(local_170);
        local_170 = (void *)0x0;
        local_178 = 0;
      }
      FUN_00e70c34(&local_1d8,puVar28);
      FUN_00e705c8(&local_178,&DAT_01e21cb0);
      FUN_00e70c34(&local_1d8,&local_178);
      if (local_170 != (void *)0x0) {
        operator_delete__(local_170);
        local_170 = (void *)0x0;
        local_178 = 0;
      }
      uVar12 = FUN_00d588cc(param_3,*(undefined8 *)(param_2 + 8));
      FUN_00e705c8(&local_220,PTR_DAT_02be9d70);
      FUN_00e705c8(&local_230,PTR_DAT_02be9d78);
      FUN_00e705c8(&local_240,PTR_DAT_02be9d88);
      FUN_00e705c8(&local_250,PTR_DAT_02be9d80);
      FUN_00e705c8(&local_260,PTR_s_CBASE_02be9d90);
      FUN_00e705c8(&local_270,PTR_s_WBASE_02be9d98);
      bVar8 = false;
      bVar7 = false;
      bVar6 = false;
      bVar10 = false;
      uVar2 = 0;
      bVar9 = false;
      local_274 = 0;
      do {
        uVar17 = FUN_00e7107c(&local_1f8,0,0x2c,&local_274);
        FUN_00e71810(&local_178,&local_1f8,0,local_274);
        uVar18 = FUN_00e70b34(&local_178,&local_220);
        if ((uVar18 & 1) == 0) {
          uVar18 = FUN_00e70b34(&local_178,&local_230);
          if ((uVar18 & 1) == 0) {
            uVar18 = FUN_00e70b34(&local_178,&local_240);
            if ((uVar18 & 1) == 0) {
              uVar18 = FUN_00e70b34(&local_178,&local_250);
              if ((uVar18 & 1) == 0) {
                uVar18 = FUN_00e70b34(&local_178,&local_260);
                if ((uVar18 & 1) == 0) {
                  uVar14 = FUN_00e70b34(&local_178,&local_270);
                  uVar2 = uVar2 | uVar14;
                }
                else {
                  bVar9 = true;
                }
              }
              else {
                bVar10 = true;
              }
            }
            else {
              bVar8 = true;
            }
          }
          else {
            bVar7 = true;
          }
        }
        else {
          bVar6 = true;
        }
        iVar13 = FUN_00e70b14(&local_178);
        uVar14 = FUN_00e70b14(&local_1f8);
        if (iVar13 + 1U < uVar14) {
          iVar13 = FUN_00e70b14(&local_178);
          uVar15 = FUN_00e70b14(&local_1f8);
          FUN_00e71810(&local_1a0,&local_1f8,iVar13 + 1,uVar15);
          FUN_00910394(&local_1f8,&local_1a0);
          if (pvStack_198 != (void *)0x0) {
            operator_delete__(pvStack_198);
            pvStack_198 = (void *)0x0;
            local_1a0 = 0;
          }
        }
        else {
          FUN_00e70960(&local_1f8);
        }
        if (local_170 != (void *)0x0) {
          operator_delete__(local_170);
          local_170 = (void *)0x0;
          local_178 = 0;
        }
        uVar18 = FUN_00e70b88(&local_1f8,&DAT_03210450);
      } while (((uVar18 & 1) != 0) &&
              (((uVar17 & 1) == 0 ||
               (uVar17 = FUN_00e7107c(&local_1f8,local_274,0x2c,&local_274), (uVar17 & 1) == 0))));
      local_278 = 0xffffffff;
      lVar26 = FUN_00ce9fc8(&local_158,param_2,&local_278);
      if (lVar26 == 0) {
        lVar26 = FUN_00ce9e94(&local_158,param_2);
        if (lVar26 != 0) {
          lVar25 = *(long *)(param_3 + 0x40);
          fVar31 = *(float *)(lVar25 + 0x38);
          fVar30 = (*(float *)(lVar25 + 0x1a0) + 1.0) *
                   (fVar31 + *(float *)(lVar25 + 0xec) * (*(float *)(lVar25 + 0x254) + 1.0));
          if (DAT_0313d720 <= fVar30) {
            fVar30 = DAT_0313d720;
          }
          fVar4 = DAT_0313d660;
          if (DAT_0313d660 <= fVar30) {
            fVar4 = fVar30;
          }
          uVar12 = FUN_00d5c238(param_3,uVar12);
          lVar25 = *(long *)(param_3 + 0x40);
          fVar30 = (*(float *)(lVar25 + 0x240) + 1.0) *
                   (*(float *)(lVar25 + 0xd8) +
                   *(float *)(lVar25 + 0x18c) * (*(float *)(lVar25 + 0x2f4) + 1.0));
          if (DAT_0313d7c0 <= fVar30) {
            fVar30 = DAT_0313d7c0;
          }
          fVar29 = DAT_0313d700;
          if (DAT_0313d700 <= fVar30) {
            fVar29 = fVar30;
          }
          uVar12 = FUN_00d08368(fVar4 - fVar31,lVar26,uVar12,0,(int)fVar29);
          local_210 = CONCAT44(local_210._4_4_,uVar12);
          if ((*(char *)(lVar26 + 0x34) == '\0') && (*(char *)(lVar26 + 0x35) == '\0')) {
            local_200 = 1;
          }
          else {
            local_200 = 2;
          }
          if (bVar6) {
            lVar25 = *(long *)(param_3 + 0x40);
            fVar30 = (*(float *)(lVar25 + 0x1b4) + 1.0) *
                     (*(float *)(lVar25 + 0x4c) +
                     *(float *)(lVar25 + 0x100) * (*(float *)(lVar25 + 0x268) + 1.0));
            if (DAT_0313d734 <= fVar30) {
              fVar30 = DAT_0313d734;
            }
            fVar31 = DAT_0313d670._4_4_;
            if (DAT_0313d670._4_4_ <= fVar30) {
              fVar31 = fVar30;
            }
            uVar12 = FUN_00d0843c(fVar31,lVar26);
            local_210 = CONCAT44(uVar12,(undefined4)local_210);
          }
          if (bVar10 || bVar7) {
            lVar25 = *(long *)(param_3 + 0x40);
            fVar30 = (*(float *)(lVar25 + 0x1b0) + 1.0) *
                     (*(float *)(lVar25 + 0x48) +
                     *(float *)(lVar25 + 0xfc) * (*(float *)(lVar25 + 0x264) + 1.0));
            if (DAT_0313d730 <= fVar30) {
              fVar30 = DAT_0313d730;
            }
            fVar31 = (float)DAT_0313d670;
            if ((float)DAT_0313d670 <= fVar30) {
              fVar31 = fVar30;
            }
            uVar12 = FUN_00d08400(fVar31,fVar31 - *(float *)(lVar25 + 0x48),0x3f800000,lVar26);
            goto LAB_00cb153c;
          }
          goto LAB_00cb1540;
        }
        if (param_3 != 0) {
          uVar12 = FUN_00d588cc(param_3,*(undefined8 *)(param_2 + 8));
          uVar17 = FUN_00ce07a4(param_3,uVar12,&local_158,&local_210,0xffffffff,0xffffffff);
          if ((uVar17 & 1) != 0) goto LAB_00cb1540;
        }
      }
      else {
        local_200 = *(undefined4 *)(lVar26 + 0x2c);
        local_210._0_4_ = *(undefined4 *)(lVar26 + 8);
        uVar15 = FUN_00d59f54(param_3,uVar12,local_278,1,1);
        local_210 = CONCAT44(local_210._4_4_,uVar15);
        if (bVar6) {
          uVar15 = FUN_00d59f54(param_3,uVar12,local_278,8,1);
          local_210 = CONCAT44(uVar15,(undefined4)local_210);
        }
        if (bVar7) {
          uVar15 = FUN_00d59f54(param_3,uVar12,local_278,2,1);
          local_208 = CONCAT44(local_208._4_4_,uVar15);
        }
        if (bVar10) {
          uVar12 = FUN_00d59f54(param_3,uVar12,local_278,4,1);
LAB_00cb153c:
          local_208 = CONCAT44(local_208._4_4_,uVar12);
        }
LAB_00cb1540:
        local_290 = 0;
        uStack_288 = 0;
        local_280 = (void *)0x0;
        FUN_00e70510(&local_2a0);
        FUN_00e70510(&local_2b0);
        FUN_00e70510(&local_2c0);
        FUN_008fa54c(local_2d8,PTR_s__24_144_238_255__02be9d40);
        FUN_008fa54c(local_2f0,PTR_s__254_103_96_255__02be9d48);
        FUN_008fa54c(local_308,PTR_s__110_254_106_255__02be9d50);
        FUN_008fa54c(local_320,PTR_DAT_02be9d58);
        FUN_008fa54c(local_338,PTR_DAT_02be9d60);
        FUN_008fa54c(local_350,PTR_DAT_02be9d68);
        FUN_00cb1d0c(local_210 & 0xffffffff,local_200,&local_2a0,0);
        FUN_00e70978(&local_2a0,&local_178,0x20);
        if (bVar9) {
          pbVar19 = local_2d8;
LAB_00cb1610:
          FUN_009697c8(&local_1c0,pbVar19,&local_178);
          uVar17 = (ulong)(local_320[0] >> 1);
          pvVar1 = pvVar23;
          if ((local_320[0] & 1) != 0) {
            uVar17 = local_318;
            pvVar1 = local_310;
          }
          puVar20 = (ulong *)FUN_0090de84(&local_1c0,pvVar1,uVar17);
          local_190 = (void *)puVar20[2];
          pvStack_198 = (void *)puVar20[1];
          local_1a0 = *puVar20;
          puVar20[1] = 0;
          puVar20[2] = 0;
          *puVar20 = 0;
          pvVar1 = (void *)((ulong)&local_1a0 | 1);
          pvVar5 = (void *)(local_1a0 >> 1 & 0x7f);
          if ((local_1a0 & 1) != 0) {
            pvVar1 = local_190;
            pvVar5 = pvStack_198;
          }
          FUN_0090de84(&local_290,pvVar1,pvVar5);
          if ((local_1a0 & 1) != 0) {
            operator_delete(local_190);
          }
          if ((local_1c0 & 1) != 0) {
            operator_delete(local_1b0);
          }
        }
        else {
          if ((uVar2 & 1) != 0) {
            pbVar19 = local_2f0;
            goto LAB_00cb1610;
          }
          sVar21 = strlen((char *)&local_178);
          FUN_0090de84(&local_290,&local_178,sVar21);
        }
        if (bVar6) {
          local_210._4_4_ = (float)(local_210 >> 0x20);
          iVar13 = 0;
          if (1.1920929e-07 <= ABS(local_210._4_4_)) {
            iVar13 = (int)local_210._4_4_;
          }
          FUN_00e70e18(&local_2b0,&DAT_01bb6d43,iVar13);
          FUN_00e70978(&local_2b0,&local_1a0,0x20);
          FUN_00b5507c(&local_3b0,local_2d8,local_338);
          sVar21 = strlen((char *)&local_1a0);
          puVar20 = (ulong *)FUN_0090de84(&local_3b0,&local_1a0,sVar21);
          local_380 = (void *)puVar20[2];
          uStack_388 = puVar20[1];
          local_390 = *puVar20;
          puVar20[1] = 0;
          puVar20[2] = 0;
          *puVar20 = 0;
          pvVar1 = pvVar24;
          uVar17 = (ulong)(local_350[0] >> 1);
          if ((local_350[0] & 1) != 0) {
            pvVar1 = local_340;
            uVar17 = local_348;
          }
          puVar20 = (ulong *)FUN_0090de84(&local_390,pvVar1,uVar17);
          local_360 = (void *)puVar20[2];
          pvStack_368 = (void *)puVar20[1];
          local_370 = *puVar20;
          puVar20[1] = 0;
          puVar20[2] = 0;
          *puVar20 = 0;
          uVar17 = (ulong)(local_320[0] >> 1);
          pvVar1 = pvVar23;
          if ((local_320[0] & 1) != 0) {
            uVar17 = local_318;
            pvVar1 = local_310;
          }
          puVar20 = (ulong *)FUN_0090de84(&local_370,pvVar1,uVar17);
          local_1b0 = (void *)puVar20[2];
          uStack_1b8 = puVar20[1];
          local_1c0 = *puVar20;
          puVar20[1] = 0;
          puVar20[2] = 0;
          *puVar20 = 0;
          pvVar1 = (void *)((ulong)&local_1c0 | 1);
          uVar17 = local_1c0 >> 1 & 0x7f;
          if ((local_1c0 & 1) != 0) {
            pvVar1 = local_1b0;
            uVar17 = uStack_1b8;
          }
          FUN_0090de84(&local_290,pvVar1,uVar17);
          if ((local_1c0 & 1) != 0) {
            operator_delete(local_1b0);
          }
          if ((local_370 & 1) != 0) {
            operator_delete(local_360);
          }
          if ((local_390 & 1) != 0) {
            operator_delete(local_380);
          }
          if ((local_3b0 & 1) != 0) {
            operator_delete(local_3a0);
          }
        }
        if (bVar10 || bVar7) {
          iVar13 = 0;
          if (1.1920929e-07 <= ABS((float)local_208)) {
            iVar13 = (int)(float)local_208;
          }
          FUN_00e70e18(&local_2c0,&DAT_01bb6d43,iVar13);
          FUN_00e70978(&local_2c0,&local_1c0,0x20);
          FUN_00b5507c(local_3c8,local_2f0,local_338);
          sVar21 = strlen((char *)&local_1c0);
          puVar20 = (ulong *)FUN_0090de84(local_3c8,&local_1c0,sVar21);
          local_3a0 = (void *)puVar20[2];
          uStack_3a8 = puVar20[1];
          local_3b0 = *puVar20;
          puVar20[1] = 0;
          puVar20[2] = 0;
          *puVar20 = 0;
          pvVar1 = pvVar24;
          uVar17 = (ulong)(local_350[0] >> 1);
          if ((local_350[0] & 1) != 0) {
            pvVar1 = local_340;
            uVar17 = local_348;
          }
          puVar20 = (ulong *)FUN_0090de84(&local_3b0,pvVar1,uVar17);
          local_380 = (void *)puVar20[2];
          uStack_388 = puVar20[1];
          local_390 = *puVar20;
          puVar20[1] = 0;
          puVar20[2] = 0;
          *puVar20 = 0;
          uVar17 = (ulong)(local_320[0] >> 1);
          pvVar1 = pvVar23;
          if ((local_320[0] & 1) != 0) {
            uVar17 = local_318;
            pvVar1 = local_310;
          }
          puVar20 = (ulong *)FUN_0090de84(&local_390,pvVar1,uVar17);
          local_360 = (void *)puVar20[2];
          pvStack_368 = (void *)puVar20[1];
          local_370 = *puVar20;
          puVar20[1] = 0;
          puVar20[2] = 0;
          *puVar20 = 0;
          pvVar1 = (void *)((ulong)&local_370 | 1);
          pvVar5 = (void *)(local_370 >> 1 & 0x7f);
          if ((local_370 & 1) != 0) {
            pvVar1 = local_360;
            pvVar5 = pvStack_368;
          }
          FUN_0090de84(&local_290,pvVar1,pvVar5);
          if ((local_370 & 1) != 0) {
            operator_delete(local_360);
          }
          if ((local_390 & 1) != 0) {
            operator_delete(local_380);
          }
          if ((local_3b0 & 1) != 0) {
            operator_delete(local_3a0);
          }
          if ((local_3c8[0] & 1) != 0) {
            operator_delete(local_3b8);
          }
        }
        if (bVar8) {
          iVar13 = 0;
          if (1.1920929e-07 <= ABS(local_208._4_4_)) {
            iVar13 = (int)local_208._4_4_;
          }
          FUN_00e70e18(&local_2c0,&DAT_01bb6d43,iVar13);
          FUN_00e70978(&local_2c0,&local_1c0,0x20);
          FUN_00b5507c(local_3c8,local_308,local_338);
          sVar21 = strlen((char *)&local_1c0);
          puVar20 = (ulong *)FUN_0090de84(local_3c8,&local_1c0,sVar21);
          local_3a0 = (void *)puVar20[2];
          uStack_3a8 = puVar20[1];
          local_3b0 = *puVar20;
          puVar20[1] = 0;
          puVar20[2] = 0;
          *puVar20 = 0;
          pvVar1 = pvVar24;
          uVar17 = (ulong)(local_350[0] >> 1);
          if ((local_350[0] & 1) != 0) {
            pvVar1 = local_340;
            uVar17 = local_348;
          }
          puVar20 = (ulong *)FUN_0090de84(&local_3b0,pvVar1,uVar17);
          local_380 = (void *)puVar20[2];
          uStack_388 = puVar20[1];
          local_390 = *puVar20;
          puVar20[1] = 0;
          puVar20[2] = 0;
          *puVar20 = 0;
          uVar17 = (ulong)(local_320[0] >> 1);
          pvVar1 = pvVar23;
          if ((local_320[0] & 1) != 0) {
            uVar17 = local_318;
            pvVar1 = local_310;
          }
          puVar20 = (ulong *)FUN_0090de84(&local_390,pvVar1,uVar17);
          local_360 = (void *)puVar20[2];
          pvStack_368 = (void *)puVar20[1];
          local_370 = *puVar20;
          puVar20[1] = 0;
          puVar20[2] = 0;
          *puVar20 = 0;
          pvVar1 = (void *)((ulong)&local_370 | 1);
          pvVar5 = (void *)(local_370 >> 1 & 0x7f);
          if ((local_370 & 1) != 0) {
            pvVar1 = local_360;
            pvVar5 = pvStack_368;
          }
          FUN_0090de84(&local_290,pvVar1,pvVar5);
          if ((local_370 & 1) != 0) {
            operator_delete(local_360);
          }
          if ((local_390 & 1) != 0) {
            operator_delete(local_380);
          }
          if ((local_3b0 & 1) != 0) {
            operator_delete(local_3a0);
          }
          if ((local_3c8[0] & 1) != 0) {
            operator_delete(local_3b8);
          }
        }
        FUN_00e70570(&local_370,&local_290);
        FUN_00e71248(param_1,0,&local_1d8,&local_370);
        if (pvStack_368 != (void *)0x0) {
          operator_delete__(pvStack_368);
          local_370 = 0;
          pvStack_368 = (void *)0x0;
        }
        if ((local_350[0] & 1) != 0) {
          operator_delete(local_340);
        }
        if ((local_338[0] & 1) != 0) {
          operator_delete(local_328);
        }
        if ((local_320[0] & 1) != 0) {
          operator_delete(local_310);
        }
        if ((local_308[0] & 1) != 0) {
          operator_delete(local_2f8);
        }
        if ((local_2f0[0] & 1) != 0) {
          operator_delete(local_2e0);
        }
        if ((local_2d8[0] & 1) != 0) {
          operator_delete(local_2c8);
        }
        if (local_2b8 != (void *)0x0) {
          operator_delete__(local_2b8);
          local_2c0 = 0;
          local_2b8 = (void *)0x0;
        }
        if (local_2a8 != (void *)0x0) {
          operator_delete__(local_2a8);
          local_2b0 = 0;
          local_2a8 = (void *)0x0;
        }
        if (local_298 != (void *)0x0) {
          operator_delete__(local_298);
          local_2a0 = 0;
          local_298 = (void *)0x0;
        }
        if ((local_290 & 1) != 0) {
          operator_delete(local_280);
        }
      }
      if (local_268 != (void *)0x0) {
        operator_delete__(local_268);
        local_270 = 0;
        local_268 = (void *)0x0;
      }
      if (local_258 != (void *)0x0) {
        operator_delete__(local_258);
        local_260 = 0;
        local_258 = (void *)0x0;
      }
      if (local_248 != (void *)0x0) {
        operator_delete__(local_248);
        local_250 = 0;
        local_248 = (void *)0x0;
      }
      if (local_238 != (void *)0x0) {
        operator_delete__(local_238);
        local_238 = (void *)0x0;
        local_240 = 0;
      }
      if (local_228 != (void *)0x0) {
        operator_delete__(local_228);
        local_228 = (void *)0x0;
        local_230 = 0;
      }
      if (local_218 != (void *)0x0) {
        operator_delete__(local_218);
        local_218 = (void *)0x0;
        local_220 = 0;
      }
      if (local_1f0 != (void *)0x0) {
        operator_delete__(local_1f0);
        local_1f0 = (void *)0x0;
        local_1f8 = 0;
      }
      if (local_1e0 != (void *)0x0) {
        operator_delete__(local_1e0);
        local_1e0 = (void *)0x0;
        local_1e8 = 0;
      }
      uVar16 = uVar16 + 1;
    } while ((uVar16 < (uVar27 & 0xffffffff)) && (uVar16 < 8));
  }
  if (local_1d0 != (void *)0x0) {
    operator_delete__(local_1d0);
    local_1d0 = (void *)0x0;
    local_1d8 = 0;
  }
  lVar26 = 0;
  do {
    pvVar23 = *(void **)((long)local_a8 + lVar26 + 8);
    if (pvVar23 != (void *)0x0) {
      operator_delete__(pvVar23);
      *(undefined8 *)((long)local_a8 + lVar26) = 0;
      *(undefined8 *)((long)local_a8 + lVar26 + 8) = 0;
    }
    lVar26 = lVar26 + -0x10;
  } while (lVar26 != -0x80);
  if (*(long *)(lVar3 + 0x28) == lVar22) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

