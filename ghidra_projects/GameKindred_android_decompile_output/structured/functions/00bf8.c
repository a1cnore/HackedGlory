// functions/00bf8 — 51 functions
#include "libGameKindred.h"




void FUN_00bf8024(long param_1)

{
  FUN_00bf7f4c(param_1 + -0x10);
  return;
}




void FUN_00bf802c(void *param_1)

{
  FUN_00bf7f4c();
  operator_delete(param_1);
  return;
}




void FUN_00bf8050(long param_1)

{
  FUN_00bf7f4c((void *)(param_1 + -0x10));
  operator_delete((void *)(param_1 + -0x10));
  return;
}




void FUN_00bf8078(void)

{
  return;
}




void FUN_00bf807c(long param_1)

{
  undefined8 uVar1;
  
  FUN_009580b8();
  uVar1 = FUN_00961ccc();
  FUN_00c79e9c(*(undefined8 *)(param_1 + 8),uVar1);
  return;
}




void FUN_00bf80ac(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  lVar1 = FUN_00969248();
  FUN_00c79e34(uVar2,*(int *)(lVar1 + 0x38) < 1);
  return;
}




void FUN_00bf80dc(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + -8);
  lVar1 = FUN_00969248();
  FUN_00c79e34(uVar2,*(int *)(lVar1 + 0x38) < 1);
  return;
}




void FUN_00bf810c(undefined8 *param_1)

{
  *param_1 = &PTR___cxa_pure_virtual_027f3db8;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return;
}




void FUN_00bf8150(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xbf8154);
  (*pcVar1)();
}




void FUN_00bf8158(long param_1)

{
  undefined8 uVar1;
  
  FUN_009580b8();
  uVar1 = FUN_00961ccc();
  FUN_00c79e9c(*(undefined8 *)(param_1 + 8),uVar1);
  return;
}




void FUN_00bf8188(undefined8 *param_1)

{
  long lVar1;
  void *pvVar2;
  undefined8 uVar3;
  undefined8 *local_58;
  undefined8 uStack_50;
  undefined8 *local_48;
  code *pcStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR___cxa_pure_virtual_027f3e40;
  pvVar2 = operator_new(0x6f8);
  FUN_00c79f20();
  param_1[1] = pvVar2;
  *(undefined8 **)((long)pvVar2 + 0x240) = param_1;
  FUN_009680c8(param_1 + 2);
  *param_1 = &PTR_FUN_027f3de0;
  param_1[2] = &PTR_FUN_027f3e10;
  *(undefined1 *)(param_1 + 5) = 0;
  FUN_009fa72c();
  uVar3 = FUN_009fb78c();
  uStack_50 = 0;
  pcStack_40 = thunk_FUN_00bf82a8;
  local_58 = param_1;
  local_48 = param_1;
  FUN_009e4694(uVar3,&local_58);
  FUN_00e6ea58(&DAT_02c7eef8,param_1,0x9d2c9b16,FUN_00bf827c,0);
  FUN_00bf82a8(param_1);
  FUN_00bf84f4(param_1);
  FUN_00bf8758(param_1);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00bf827c(void)

{
  FUN_00bf84f4();
  return;
}




void FUN_00bf82a8(long param_1)

{
  void *pvVar1;
  byte bVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 local_b0;
  void *local_a8;
  undefined8 local_a0;
  void *local_98;
  undefined8 local_90;
  void *local_88;
  ulong local_80 [2];
  void *local_70;
  uint local_68 [2];
  long local_60;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  lVar4 = FUN_00940c1c();
  if ((*(char *)(lVar4 + 10) != '\0') && (lVar4 = FUN_009fa72c(), lVar4 != 0)) {
    uVar5 = FUN_009fa72c();
    FUN_009fb34c(local_68,uVar5,0);
    *(bool *)(param_1 + 0x28) = local_68[0] != 0;
    FUN_00bf8758(param_1);
    if (*(char *)(param_1 + 0x28) != '\0') {
      uVar7 = (ulong)local_68[0];
      local_80[0] = 0;
      local_80[1] = 0;
      local_70 = (void *)0x0;
      if (local_68[0] == 0) {
        FUN_00939eb0();
      }
      else {
        lVar4 = 0;
        uVar9 = 0;
        lVar8 = 0;
        uVar11 = 0;
        do {
          uVar10 = *(ulong *)(local_60 + lVar4 + 0x88);
          if (uVar11 < uVar10) {
            bVar2 = *(byte *)(local_60 + lVar4 + 0x30);
            if ((bVar2 & 1) == 0) {
              if (bVar2 >> 1 != 0) {
LAB_00bf836c:
                FUN_008fce60(local_80);
              }
            }
            else if (*(long *)(local_60 + lVar4 + 0x38) != 0) goto LAB_00bf836c;
            lVar8 = *(long *)(local_60 + lVar4 + 0x90);
            lVar6 = FUN_00e85318(0);
            uVar7 = (ulong)local_68[0];
            lVar8 = lVar8 - lVar6;
            uVar11 = uVar10;
          }
          uVar9 = uVar9 + 1;
          lVar4 = lVar4 + 0x98;
        } while (uVar9 < uVar7);
        uVar7 = FUN_00939eb0();
        if (uVar7 < uVar11) {
          FUN_00e70510(&local_90);
          pvVar1 = (void *)((ulong)local_80 | 1);
          if ((local_80[0] & 1) != 0) {
            pvVar1 = local_70;
          }
          uVar5 = FUN_00e6ce7c(pvVar1,0);
          thunk_FUN_00e7051c(&local_a0,uVar5);
          uVar7 = FUN_00e70b04(&local_a0);
          if ((uVar7 & 1) == 0) {
            uVar5 = FUN_00e6ce7c("MENU_HOME_PANEL_NEW_EVENT_BODY",0);
            FUN_00910394(&local_90,uVar5);
            FUN_00e705c8(&local_b0,"[EVENTNAME]");
            FUN_00e71248(&local_90,0,&local_b0,&local_a0);
            if (local_a8 != (void *)0x0) {
              operator_delete__(local_a8);
              local_b0 = 0;
              local_a8 = (void *)0x0;
            }
          }
          else {
            uVar5 = FUN_00e6ce7c("MENU_HOME_PANEL_NEW_EVENT_BODY_GENERIC",0);
            FUN_00910394(&local_90,uVar5);
          }
          FUN_00c7a530(*(undefined8 *)(param_1 + 8),&local_90);
          if (0 < lVar8) {
            FUN_00c7a484(*(undefined8 *)(param_1 + 8),lVar8);
          }
          if (local_98 != (void *)0x0) {
            operator_delete__(local_98);
            local_a0 = 0;
            local_98 = (void *)0x0;
          }
          if (local_88 != (void *)0x0) {
            operator_delete__(local_88);
            local_90 = 0;
            local_88 = (void *)0x0;
          }
        }
      }
      if ((local_80[0] & 1) != 0) {
        operator_delete(local_70);
      }
    }
    FUN_00956964(local_68,1);
  }
  if (*(long *)(lVar3 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00bf84f4(long param_1)

{
  ulong uVar1;
  byte bVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 local_140;
  void *local_138;
  undefined8 local_130;
  void *local_128;
  long local_120;
  ulong local_118;
  void *local_110;
  void *local_108;
  ulong local_100;
  long local_f8;
  undefined1 auStack_f0 [128];
  long local_70;
  
  lVar3 = tpidr_el0;
  local_70 = *(long *)(lVar3 + 0x28);
  lVar5 = FUN_00940c1c();
  if (*(char *)(lVar5 + 10) == '\0') {
    local_100 = 0;
    local_f8 = 0;
    FUN_0096bfcc(&local_100);
    FUN_00969b40(auStack_f0,"%s_%s","MARKET","MENU_MARKET_TAB_NAME_EVENTS");
    FUN_008fa54c(&local_118,auStack_f0);
    lVar5 = FUN_00939be8(&local_118);
    if ((local_118 & 1) != 0) {
      operator_delete(local_108);
    }
    lVar8 = local_f8;
    if ((int)local_100 != 0) {
      do {
        bVar2 = *(byte *)(lVar8 + 0x18);
        uVar1 = (ulong)(bVar2 >> 1);
        if ((bVar2 & 1) != 0) {
          uVar1 = *(ulong *)(lVar8 + 0x20);
        }
        if (((uVar1 == 0x1b) &&
            (iVar4 = FUN_0090d610((byte *)(lVar8 + 0x18),0,0xffffffffffffffff,
                                  "MENU_MARKET_TAB_NAME_EVENTS",0x1b), iVar4 == 0)) &&
           (*(undefined1 *)(param_1 + 0x28) = 1, *(int *)(lVar8 + 8) != 0)) {
          local_120 = -1;
          lVar7 = *(long *)(lVar8 + 0x10);
          bVar2 = *(byte *)(lVar7 + 0x438);
          if ((bVar2 & 1) == 0) {
            if (bVar2 >> 1 != 0) {
LAB_00bf85d4:
              if ((bVar2 & 1) == 0) {
                lVar7 = lVar7 + 0x439;
              }
              else {
                lVar7 = *(long *)(lVar7 + 0x448);
              }
              FUN_00e6acac(lVar7,&DAT_01b95673,&local_120);
            }
          }
          else if (*(long *)(lVar7 + 0x440) != 0) goto LAB_00bf85d4;
          if (lVar5 < local_120) {
            uVar6 = FUN_00e6ce7c("MENU_HOME_PANEL_NEW_EVENT_BODY_GENERIC",0);
            thunk_FUN_00e7051c(&local_118,uVar6);
            FUN_00e705c8(&local_130,"[EVENTNAME]");
            FUN_00e705c8(&local_140,"The Summer Pool Party");
            FUN_00e71248(&local_118,0,&local_130,&local_140);
            if (local_138 != (void *)0x0) {
              operator_delete__(local_138);
              local_140 = 0;
              local_138 = (void *)0x0;
            }
            if (local_128 != (void *)0x0) {
              operator_delete__(local_128);
              local_130 = 0;
              local_128 = (void *)0x0;
            }
            uVar9 = *(undefined8 *)(param_1 + 8);
            uVar6 = FUN_00e6ce7c("MENU_HOME_PANEL_NEW_EVENT_TITLE",0);
            FUN_00c7a390(uVar9,uVar6);
            FUN_00c7a530(*(undefined8 *)(param_1 + 8),&local_118);
            if (local_110 != (void *)0x0) {
              operator_delete__(local_110);
              local_118 = 0;
              local_110 = (void *)0x0;
            }
          }
        }
        lVar8 = lVar8 + 0x78;
      } while (lVar8 != local_f8 + (local_100 & 0xffffffff) * 0x78);
    }
    FUN_00bf8758(param_1);
    FUN_00969c70(&local_100,1);
  }
  if (*(long *)(lVar3 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00bf8758(long param_1)

{
  long lVar1;
  bool bVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 8);
  if (*(char *)(param_1 + 0x28) == '\0') {
    bVar2 = false;
  }
  else {
    lVar1 = FUN_00969248();
    bVar2 = *(int *)(lVar1 + 0x38) < 1;
  }
  FUN_00c7a44c(uVar3,bVar2);
  return;
}




void FUN_00bf8798(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  uint *puVar3;
  undefined8 *puVar4;
  
  *param_1 = &PTR_FUN_027f3de0;
  param_1[2] = &PTR_FUN_027f3e10;
  lVar2 = FUN_009fa72c();
  if (lVar2 != 0) {
    FUN_009fa72c();
    puVar3 = (uint *)FUN_009fb78c();
    lVar2 = (ulong)*puVar3 << 5;
    puVar1 = *(undefined8 **)(puVar3 + 2);
    do {
      puVar4 = puVar1;
      if (lVar2 == 0) goto LAB_00bf87fc;
      lVar2 = lVar2 + -0x20;
      puVar1 = puVar4 + 4;
    } while ((undefined8 *)*puVar4 != param_1);
    FUN_00910480(puVar3,puVar4);
  }
LAB_00bf87fc:
  FUN_00e6ec98(&DAT_02c7eef8,param_1);
  FUN_00968148(param_1 + 2);
  *param_1 = &PTR___cxa_pure_virtual_027f3e40;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return;
}




void FUN_00bf8848(long param_1)

{
  FUN_00bf8798(param_1 + -0x10);
  return;
}




void FUN_00bf8850(void *param_1)

{
  FUN_00bf8798();
  operator_delete(param_1);
  return;
}




void FUN_00bf8874(long param_1)

{
  FUN_00bf8798((void *)(param_1 + -0x10));
  operator_delete((void *)(param_1 + -0x10));
  return;
}




void FUN_00bf889c(void)

{
  long lVar1;
  
  lVar1 = FUN_00940c1c();
  if (*(char *)(lVar1 + 10) != '\0') {
    FUN_00cbe0f0("homepanel_cornerwidget_events_tile");
    return;
  }
  FUN_00aa25b0("vainglory://MARKET/MENU_MARKET_TAB_NAME_EVENTS",0);
  return;
}




void thunk_FUN_00bf8758(long param_1)

{
  long lVar1;
  bool bVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 8);
  if (*(char *)(param_1 + 0x28) == '\0') {
    bVar2 = false;
  }
  else {
    lVar1 = FUN_00969248();
    bVar2 = *(int *)(lVar1 + 0x38) < 1;
  }
  FUN_00c7a44c(uVar3,bVar2);
  return;
}




void FUN_00bf88d8(long param_1)

{
  FUN_00bf8758(param_1 + -0x10);
  return;
}




void FUN_00bf88e0(undefined8 *param_1)

{
  *param_1 = &PTR___cxa_pure_virtual_027f3e40;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return;
}




void FUN_00bf8924(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xbf8928);
  (*pcVar1)();
}




void thunk_FUN_00bf82a8(long param_1)

{
  void *pvVar1;
  byte bVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 uStack_b0;
  void *pvStack_a8;
  undefined8 uStack_a0;
  void *pvStack_98;
  undefined8 uStack_90;
  void *pvStack_88;
  ulong auStack_80 [2];
  void *pvStack_70;
  uint auStack_68 [2];
  long lStack_60;
  long lStack_58;
  
  lVar3 = tpidr_el0;
  lStack_58 = *(long *)(lVar3 + 0x28);
  lVar4 = FUN_00940c1c();
  if ((*(char *)(lVar4 + 10) != '\0') && (lVar4 = FUN_009fa72c(), lVar4 != 0)) {
    uVar5 = FUN_009fa72c();
    FUN_009fb34c(auStack_68,uVar5,0);
    *(bool *)(param_1 + 0x28) = auStack_68[0] != 0;
    FUN_00bf8758(param_1);
    if (*(char *)(param_1 + 0x28) != '\0') {
      uVar7 = (ulong)auStack_68[0];
      auStack_80[0] = 0;
      auStack_80[1] = 0;
      pvStack_70 = (void *)0x0;
      if (auStack_68[0] == 0) {
        FUN_00939eb0();
      }
      else {
        lVar4 = 0;
        uVar9 = 0;
        lVar8 = 0;
        uVar11 = 0;
        do {
          uVar10 = *(ulong *)(lStack_60 + lVar4 + 0x88);
          if (uVar11 < uVar10) {
            bVar2 = *(byte *)(lStack_60 + lVar4 + 0x30);
            if ((bVar2 & 1) == 0) {
              if (bVar2 >> 1 != 0) {
LAB_00bf836c:
                FUN_008fce60(auStack_80);
              }
            }
            else if (*(long *)(lStack_60 + lVar4 + 0x38) != 0) goto LAB_00bf836c;
            lVar8 = *(long *)(lStack_60 + lVar4 + 0x90);
            lVar6 = FUN_00e85318(0);
            uVar7 = (ulong)auStack_68[0];
            lVar8 = lVar8 - lVar6;
            uVar11 = uVar10;
          }
          uVar9 = uVar9 + 1;
          lVar4 = lVar4 + 0x98;
        } while (uVar9 < uVar7);
        uVar7 = FUN_00939eb0();
        if (uVar7 < uVar11) {
          FUN_00e70510(&uStack_90);
          pvVar1 = (void *)((ulong)auStack_80 | 1);
          if ((auStack_80[0] & 1) != 0) {
            pvVar1 = pvStack_70;
          }
          uVar5 = FUN_00e6ce7c(pvVar1,0);
          thunk_FUN_00e7051c(&uStack_a0,uVar5);
          uVar7 = FUN_00e70b04(&uStack_a0);
          if ((uVar7 & 1) == 0) {
            uVar5 = FUN_00e6ce7c("MENU_HOME_PANEL_NEW_EVENT_BODY",0);
            FUN_00910394(&uStack_90,uVar5);
            FUN_00e705c8(&uStack_b0,"[EVENTNAME]");
            FUN_00e71248(&uStack_90,0,&uStack_b0,&uStack_a0);
            if (pvStack_a8 != (void *)0x0) {
              operator_delete__(pvStack_a8);
              uStack_b0 = 0;
              pvStack_a8 = (void *)0x0;
            }
          }
          else {
            uVar5 = FUN_00e6ce7c("MENU_HOME_PANEL_NEW_EVENT_BODY_GENERIC",0);
            FUN_00910394(&uStack_90,uVar5);
          }
          FUN_00c7a530(*(undefined8 *)(param_1 + 8),&uStack_90);
          if (0 < lVar8) {
            FUN_00c7a484(*(undefined8 *)(param_1 + 8),lVar8);
          }
          if (pvStack_98 != (void *)0x0) {
            operator_delete__(pvStack_98);
            uStack_a0 = 0;
            pvStack_98 = (void *)0x0;
          }
          if (pvStack_88 != (void *)0x0) {
            operator_delete__(pvStack_88);
            uStack_90 = 0;
            pvStack_88 = (void *)0x0;
          }
        }
      }
      if ((auStack_80[0] & 1) != 0) {
        operator_delete(pvStack_70);
      }
    }
    FUN_00956964(auStack_68,1);
  }
  if (*(long *)(lVar3 + 0x28) != lStack_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00bf892c(undefined8 *param_1)

{
  void *pvVar1;
  long lVar2;
  undefined8 uVar3;
  
  *param_1 = &PTR___cxa_pure_virtual_027f3ec8;
  pvVar1 = operator_new(0x470);
  FUN_00c7a560();
  param_1[1] = pvVar1;
  *(undefined8 **)((long)pvVar1 + 0x240) = param_1;
  FUN_009680c8(param_1 + 2);
  *param_1 = &PTR_FUN_027f3e68;
  param_1[2] = &PTR_FUN_027f3e98;
  FUN_00c7a8c0(param_1[1],"FREE.*");
  uVar3 = param_1[1];
  lVar2 = FUN_00969248();
  FUN_00c7a898(uVar3,*(int *)(lVar2 + 0x38) < 1);
  return;
}




void FUN_00bf89b8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  lVar1 = FUN_00969248();
  FUN_00c7a898(uVar2,*(int *)(lVar1 + 0x38) < 1);
  return;
}




void FUN_00bf89e8(undefined8 *param_1)

{
  FUN_00968148(param_1 + 2);
  *param_1 = &PTR___cxa_pure_virtual_027f3ec8;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return;
}




void FUN_00bf8a34(long param_1)

{
  FUN_00968148();
  *(undefined ***)(param_1 + -0x10) = &PTR___cxa_pure_virtual_027f3ec8;
  if (*(long **)(param_1 + -8) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + -8) + 8))();
  }
  *(undefined8 *)(param_1 + -8) = 0;
  return;
}




void FUN_00bf8a7c(undefined8 *param_1)

{
  FUN_00968148(param_1 + 2);
  *param_1 = &PTR___cxa_pure_virtual_027f3ec8;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  operator_delete(param_1);
  return;
}




void FUN_00bf8ac8(long param_1)

{
  FUN_00bf8a7c(param_1 + -0x10);
  return;
}




void FUN_00bf8ad0(void)

{
  return;
}




void FUN_00bf8ad4(void)

{
  FUN_00cba8bc(&DAT_01e277f2);
  return;
}




void FUN_00bf8ae0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  lVar1 = FUN_00969248();
  FUN_00c7a898(uVar2,*(int *)(lVar1 + 0x38) < 1);
  return;
}




void FUN_00bf8b10(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + -8);
  lVar1 = FUN_00969248();
  FUN_00c7a898(uVar2,*(int *)(lVar1 + 0x38) < 1);
  return;
}




void FUN_00bf8b40(undefined8 *param_1)

{
  *param_1 = &PTR___cxa_pure_virtual_027f3ec8;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return;
}




void FUN_00bf8b84(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xbf8b88);
  (*pcVar1)();
}




void FUN_00bf8b88(undefined8 *param_1)

{
  long lVar1;
  void *pvVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *local_58;
  undefined8 uStack_50;
  undefined8 *local_48;
  code *pcStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR___cxa_pure_virtual_027f3f50;
  pvVar2 = operator_new(0x5d0);
  FUN_00c7a9c0();
  param_1[1] = pvVar2;
  *(undefined8 **)((long)pvVar2 + 0x240) = param_1;
  FUN_009680c8(param_1 + 2);
  *param_1 = &PTR_FUN_027f3ef0;
  param_1[2] = &PTR_FUN_027f3f20;
  uVar3 = FUN_00a012b4();
  uStack_50 = 0;
  pcStack_40 = thunk_FUN_00bf8dd0;
  local_58 = param_1;
  local_48 = param_1;
  FUN_009e4694(uVar3,&local_58);
  lVar4 = FUN_00a022d4();
  uStack_50 = 0;
  pcStack_40 = thunk_FUN_00bf8dd0;
  local_58 = param_1;
  local_48 = param_1;
  FUN_009e4694(lVar4 + 0x20,&local_58);
  FUN_00c7ae4c(param_1[1],"QUESTS.*");
  uVar3 = param_1[1];
  lVar4 = FUN_00969248();
  FUN_00c7ae24(uVar3,*(int *)(lVar4 + 0x38) < 1);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00bf8c7c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  lVar1 = FUN_00969248();
  FUN_00c7ae24(uVar2,*(int *)(lVar1 + 0x38) < 1);
  return;
}




void FUN_00bf8cac(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  uint *puVar3;
  undefined8 *puVar4;
  long lVar5;
  
  *param_1 = &PTR_FUN_027f3ef0;
  param_1[2] = &PTR_FUN_027f3f20;
  lVar2 = FUN_00a012b4();
  if (lVar2 != 0) {
    puVar3 = (uint *)FUN_00a012b4();
    lVar2 = (ulong)*puVar3 << 5;
    puVar1 = *(undefined8 **)(puVar3 + 2);
    do {
      puVar4 = puVar1;
      if (lVar2 == 0) goto LAB_00bf8d0c;
      lVar2 = lVar2 + -0x20;
      puVar1 = puVar4 + 4;
    } while ((undefined8 *)*puVar4 != param_1);
    FUN_00910480(puVar3,puVar4);
  }
LAB_00bf8d0c:
  lVar2 = FUN_00a022d4();
  if (lVar2 != 0) {
    lVar2 = FUN_00a022d4();
    lVar5 = (ulong)*(uint *)(lVar2 + 0x20) << 5;
    puVar1 = *(undefined8 **)(lVar2 + 0x28);
    do {
      puVar4 = puVar1;
      if (lVar5 == 0) goto LAB_00bf8d40;
      lVar5 = lVar5 + -0x20;
      puVar1 = puVar4 + 4;
    } while ((undefined8 *)*puVar4 != param_1);
    FUN_00910480((uint *)(lVar2 + 0x20),puVar4);
  }
LAB_00bf8d40:
  FUN_00968148(param_1 + 2);
  *param_1 = &PTR___cxa_pure_virtual_027f3f50;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return;
}




void FUN_00bf8d7c(long param_1)

{
  FUN_00bf8cac(param_1 + -0x10);
  return;
}




void FUN_00bf8d84(void *param_1)

{
  FUN_00bf8cac();
  operator_delete(param_1);
  return;
}




void FUN_00bf8da8(long param_1)

{
  FUN_00bf8cac((void *)(param_1 + -0x10));
  operator_delete((void *)(param_1 + -0x10));
  return;
}




void FUN_00bf8dd0(long param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong local_68;
  void *local_60;
  ulong local_58;
  void *local_50;
  ulong local_48;
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00a01ce0(&local_48);
  FUN_00a01a90(&local_58,9);
  FUN_00a01aa0(&local_48,(void *)((long)local_40 + (local_48 & 0xffffffff) * 8),local_50,
               (void *)((long)local_50 + (local_58 & 0xffffffff) * 8));
  FUN_00a01e2c(&local_68);
  if ((int)local_68 != 0) {
    uVar5 = 0;
    uVar4 = 0xffffffffffffffff;
    do {
      lVar3 = *(long *)((long)local_60 + uVar5 * 8);
      if ((((*(char *)(lVar3 + 0xd8) == '\0') && (*(char *)(lVar3 + 0xd9) == '\0')) &&
          (lVar3 = FUN_009f652c(), 0 < lVar3)) &&
         (uVar2 = FUN_009f652c(*(undefined8 *)((long)local_60 + uVar5 * 8)), uVar2 < uVar4)) {
        uVar4 = FUN_009f652c(*(undefined8 *)((long)local_60 + uVar5 * 8));
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < (local_68 & 0xffffffff));
    if (uVar4 >> 5 < 0xe1) {
      FUN_00c7ae94(*(undefined8 *)(param_1 + 8),uVar4);
    }
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




void FUN_00bf8f10(void)

{
  FUN_00cc07b8("homepanel_cornerwidget_quests_tile");
  return;
}




void FUN_00bf8f1c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  lVar1 = FUN_00969248();
  FUN_00c7ae24(uVar2,*(int *)(lVar1 + 0x38) < 1);
  return;
}




void FUN_00bf8f4c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + -8);
  lVar1 = FUN_00969248();
  FUN_00c7ae24(uVar2,*(int *)(lVar1 + 0x38) < 1);
  return;
}




void FUN_00bf8f7c(undefined8 *param_1)

{
  *param_1 = &PTR___cxa_pure_virtual_027f3f50;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return;
}




void FUN_00bf8fc0(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xbf8fc4);
  (*pcVar1)();
}




void thunk_FUN_00bf8dd0(long param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uStack_68;
  void *pvStack_60;
  ulong uStack_58;
  void *pvStack_50;
  ulong uStack_48;
  void *pvStack_40;
  long lStack_38;
  
  lVar1 = tpidr_el0;
  lStack_38 = *(long *)(lVar1 + 0x28);
  FUN_00a01ce0(&uStack_48);
  FUN_00a01a90(&uStack_58,9);
  FUN_00a01aa0(&uStack_48,(void *)((long)pvStack_40 + (uStack_48 & 0xffffffff) * 8),pvStack_50,
               (void *)((long)pvStack_50 + (uStack_58 & 0xffffffff) * 8));
  FUN_00a01e2c(&uStack_68);
  if ((int)uStack_68 != 0) {
    uVar5 = 0;
    uVar4 = 0xffffffffffffffff;
    do {
      lVar3 = *(long *)((long)pvStack_60 + uVar5 * 8);
      if ((((*(char *)(lVar3 + 0xd8) == '\0') && (*(char *)(lVar3 + 0xd9) == '\0')) &&
          (lVar3 = FUN_009f652c(), 0 < lVar3)) &&
         (uVar2 = FUN_009f652c(*(undefined8 *)((long)pvStack_60 + uVar5 * 8)), uVar2 < uVar4)) {
        uVar4 = FUN_009f652c(*(undefined8 *)((long)pvStack_60 + uVar5 * 8));
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < (uStack_68 & 0xffffffff));
    if (uVar4 >> 5 < 0xe1) {
      FUN_00c7ae94(*(undefined8 *)(param_1 + 8),uVar4);
    }
  }
  if (pvStack_60 != (void *)0x0) {
    operator_delete__(pvStack_60);
    uStack_68 = 0;
    pvStack_60 = (void *)0x0;
  }
  if (pvStack_50 != (void *)0x0) {
    operator_delete__(pvStack_50);
    uStack_58 = 0;
    pvStack_50 = (void *)0x0;
  }
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




void FUN_00bf8fc8(undefined8 *param_1)

{
  long lVar1;
  void *pvVar2;
  long lVar3;
  undefined8 *local_58;
  undefined8 uStack_50;
  undefined8 *local_48;
  code *pcStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR___cxa_pure_virtual_027f43b8;
  pvVar2 = operator_new(0x3ed0);
  FUN_00c7b898();
  param_1[1] = pvVar2;
  *(undefined8 **)((long)pvVar2 + 0xb8) = param_1;
  FUN_00e83560(param_1 + 2);
  FUN_00948cd8(param_1 + 5);
  *param_1 = &PTR_FUN_027f3f78;
  param_1[2] = &PTR_FUN_027f3ff0;
  param_1[5] = &PTR_FUN_027f4020;
  FUN_008fcdb8(param_1 + 8,&DAT_0320ffa8);
  FUN_008fcdb8(param_1 + 0xb,&DAT_0320ffa8);
  FUN_008fcdb8(param_1 + 0xe,&DAT_0320ffa8);
  FUN_008fcdb8(param_1 + 0x11,&DAT_0320ffa8);
  *(undefined2 *)(param_1 + 0x14) = 0;
  *(undefined1 *)((long)param_1 + 0xa2) = 0;
  if (DAT_02c091c0 != 0) {
    lVar3 = FUN_009101ac();
    uStack_50 = 0;
    pcStack_40 = thunk_FUN_00bf9d18;
    local_58 = param_1;
    local_48 = param_1;
    FUN_009e4694(lVar3 + 0x10,&local_58);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

