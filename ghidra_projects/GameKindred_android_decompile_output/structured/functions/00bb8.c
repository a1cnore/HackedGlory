// functions/00bb8 — 13 functions
#include "libGameKindred.h"




void thunk_FUN_00bb8910(long param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined4 uVar4;
  undefined1 auStack_48 [32];
  long lStack_28;
  
  lVar2 = tpidr_el0;
  lStack_28 = *(long *)(lVar2 + 0x28);
  if (*(char *)(param_1 + 0xbc78) == '\0') {
    FUN_00cbec10(param_1);
  }
  else {
    *(char *)(param_1 + 0xbc78) = '\0';
    *(undefined8 *)(param_1 + 0xbb90) = *(undefined8 *)(param_1 + 0xbaa8);
    uVar1 = (ulong)(*(byte *)(param_1 + 0xbab0) >> 1);
    lVar3 = param_1 + 0xbab1;
    if ((*(byte *)(param_1 + 0xbab0) & 1) != 0) {
      uVar1 = *(ulong *)(param_1 + 0xbab8);
      lVar3 = *(long *)(param_1 + 0xbac0);
    }
    FUN_008fcea8(param_1 + 0xbb98,lVar3,uVar1);
    uVar1 = (ulong)(*(byte *)(param_1 + 0xbac8) >> 1);
    lVar3 = param_1 + 0xbac9;
    if ((*(byte *)(param_1 + 0xbac8) & 1) != 0) {
      uVar1 = *(ulong *)(param_1 + 0xbad0);
      lVar3 = *(long *)(param_1 + 0xbad8);
    }
    FUN_008fcea8(param_1 + 0xbbb0,lVar3,uVar1);
    uVar1 = (ulong)(*(byte *)(param_1 + 0xbae0) >> 1);
    lVar3 = param_1 + 0xbae1;
    if ((*(byte *)(param_1 + 0xbae0) & 1) != 0) {
      uVar1 = *(ulong *)(param_1 + 0xbae8);
      lVar3 = *(long *)(param_1 + 0xbaf0);
    }
    FUN_008fcea8(param_1 + 0xbbc8,lVar3,uVar1);
    uVar1 = (ulong)(*(byte *)(param_1 + 0xbaf8) >> 1);
    lVar3 = param_1 + 0xbaf9;
    if ((*(byte *)(param_1 + 0xbaf8) & 1) != 0) {
      uVar1 = *(ulong *)(param_1 + 0xbb00);
      lVar3 = *(long *)(param_1 + 0xbb08);
    }
    FUN_008fcea8(param_1 + 0xbbe0,lVar3,uVar1);
    uVar1 = (ulong)(*(byte *)(param_1 + 0xbb10) >> 1);
    lVar3 = param_1 + 0xbb11;
    if ((*(byte *)(param_1 + 0xbb10) & 1) != 0) {
      uVar1 = *(ulong *)(param_1 + 0xbb18);
      lVar3 = *(long *)(param_1 + 0xbb20);
    }
    FUN_008fcea8(param_1 + 0xbbf8,lVar3,uVar1);
    uVar1 = (ulong)(*(byte *)(param_1 + 0xbb28) >> 1);
    lVar3 = param_1 + 0xbb29;
    if ((*(byte *)(param_1 + 0xbb28) & 1) != 0) {
      uVar1 = *(ulong *)(param_1 + 0xbb30);
      lVar3 = *(long *)(param_1 + 0xbb38);
    }
    FUN_008fcea8(param_1 + 0xbc10,lVar3,uVar1);
    uVar1 = (ulong)(*(byte *)(param_1 + 0xbb40) >> 1);
    lVar3 = param_1 + 0xbb41;
    if ((*(byte *)(param_1 + 0xbb40) & 1) != 0) {
      uVar1 = *(ulong *)(param_1 + 0xbb48);
      lVar3 = *(long *)(param_1 + 0xbb50);
    }
    FUN_008fcea8(param_1 + 0xbc28,lVar3,uVar1);
    uVar1 = (ulong)(*(byte *)(param_1 + 0xbb58) >> 1);
    lVar3 = param_1 + 0xbb59;
    if ((*(byte *)(param_1 + 0xbb58) & 1) != 0) {
      uVar1 = *(ulong *)(param_1 + 0xbb60);
      lVar3 = *(long *)(param_1 + 0xbb68);
    }
    FUN_008fcea8(param_1 + 0xbc40,lVar3,uVar1);
    uVar1 = (ulong)(*(byte *)(param_1 + 0xbb70) >> 1);
    lVar3 = param_1 + 0xbb71;
    if ((*(byte *)(param_1 + 0xbb70) & 1) != 0) {
      uVar1 = *(ulong *)(param_1 + 0xbb78);
      lVar3 = *(long *)(param_1 + 48000);
    }
    FUN_008fcea8(param_1 + 0xbc58,lVar3,uVar1);
    *(undefined1 *)(param_1 + 0xbc70) = *(undefined1 *)(param_1 + 0xbb88);
    uVar4 = FUN_00f048a4("UI::GUILD_SEARCH_FILTERS_CHANGED");
    FUN_00f048e0(auStack_48,uVar4,0);
    FUN_00f04760(param_1,auStack_48,0);
  }
  if (*(long *)(lVar2 + 0x28) != lStack_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00bb848c(long param_1)

{
  long *plVar1;
  float *pfVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  undefined8 local_70 [2];
  undefined1 auStack_60 [4];
  undefined1 auStack_5c [4];
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  FUN_00af5fa4();
  FUN_00f00298(auStack_5c,auStack_60);
  fVar5 = 80.0;
  FUN_00bbbbfc(*(undefined4 *)(param_1 + 0x9d0),0x42a00000,0x41f00000,0x40c00000,param_1 + 0x6d10);
  FUN_00bbb660(*(undefined4 *)(param_1 + 0x9d0),0x42a00000,0x41f00000,0x40c00000,param_1 + 0x9e0);
  FUN_00bbbbfc(*(undefined4 *)(param_1 + 0x9d0),0x42a00000,0x41f00000,0x40c00000,param_1 + 0x35f0);
  plVar1 = (long *)(param_1 + 0xa4e8);
  fVar4 = (float)FUN_00f01c20(plVar1);
  fVar6 = fVar4 * 0.5 + 80.0;
  FUN_00f01c20(plVar1);
  fVar5 = fVar5 * 0.5;
  fVar4 = fVar5 + 60.0;
  pfVar2 = (float *)(param_1 + 0xa52c);
  if ((*(float *)(param_1 + 0xa528) != fVar6) || (fVar5 = *pfVar2, fVar5 != fVar4)) {
    *(float *)(param_1 + 0xa528) = fVar6;
    *pfVar2 = fVar4;
    FUN_0091ada4(plVar1);
  }
  local_70[0] = 0x3f0000003f000000;
  (**(code **)(*plVar1 + 0x28))(plVar1,local_70);
  uVar7 = *(undefined4 *)(param_1 + 0x9d0);
  fVar4 = *pfVar2;
  FUN_00f01c20(plVar1);
  FUN_00f13f08(uVar7,fVar4 + fVar5 + 12.0,param_1 + 0xa430);
  fVar4 = 0.0;
  FUN_00f0bc10(0,0,0,local_70);
  FUN_00f0c168(param_1 + 0x908,local_70);
  (**(code **)(*(long *)(param_1 + 0x908) + 0x90))(param_1 + 0x908);
  FUN_00ed04d8(param_1 + 0x348,0,1);
  uVar7 = *(undefined4 *)(param_1 + 0x9d0);
  fVar5 = *(float *)(param_1 + 0xa474);
  FUN_00f13e54(param_1 + 0xa430);
  FUN_00ed02d8(uVar7,fVar5 + fVar4,param_1 + 0x348);
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00bb867c(long param_1)

{
  FUN_00bb86a4();
  FUN_00ac9484(param_1 + 0xcb8,0);
  return;
}




void FUN_00bb86a4(long *param_1)

{
  long *plVar1;
  
  FUN_00f01a4c(param_1 + 0xda2,1);
  FUN_00f01a4c(param_1 + 0x13c,1);
  FUN_00f01a4c(param_1 + 0x6be,1);
  FUN_00f01a4c(param_1 + 0x1486,1);
  plVar1 = param_1 + 0x121;
  FUN_00f023ec(plVar1,param_1 + 0x13c,1);
  FUN_00f023ec(plVar1,param_1 + 0x6be,1);
  FUN_00f023ec(plVar1,param_1 + 0xda2,1);
  FUN_00f023ec(plVar1,param_1 + 0x1486,1);
                    /* WARNING: Could not recover jumptable at 0x00bb8768. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x150))(param_1);
  return;
}




void FUN_00bb876c(long param_1,ulong param_2)

{
  if ((param_2 & 1) == 0) {
    if (*(float *)(param_1 + 0x38c) != 0.0) {
      *(undefined4 *)(param_1 + 0x38c) = 0;
      FUN_0091ada4(param_1 + 0x348);
    }
    if (*(char *)(param_1 + 0xbc78) != '\0') {
      FUN_00bb7fdc(param_1,param_1 + 0xbb90);
      return;
    }
  }
  return;
}




void FUN_00bb87c8(long param_1)

{
  undefined8 uVar1;
  
  *(undefined1 *)(param_1 + 0xbc78) = 1;
  uVar1 = FUN_00ac9cd0(param_1 + 0xcb8);
  FUN_008fce60(param_1 + 0xbab0,uVar1);
  return;
}




void FUN_00bb8808(long param_1)

{
  FUN_00f01a4c(param_1 + 0x9e0,1);
  FUN_00f023ec(param_1 + 0x908,param_1 + 0x9e0,1);
  return;
}




void FUN_00bb8840(long param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0xa428) == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = FUN_00e6b5ec(*(int *)(param_1 + 0xa428) + -1,0);
  }
  *(undefined4 *)(param_1 + 0xbaa8) = uVar1;
  *(undefined1 *)(param_1 + 0xbc78) = 1;
  return;
}




void FUN_00bb8890(long param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x6d08);
  *(undefined1 *)(param_1 + 0xbc78) = 1;
  if (iVar1 == 0) {
    iVar1 = -2;
  }
  else if (iVar1 == 1) {
    iVar1 = -1;
  }
  else {
    iVar1 = iVar1 * 3 + -6;
  }
  *(int *)(param_1 + 0xbaac) = iVar1;
  return;
}




void FUN_00bb88d4(long param_1)

{
  FUN_00f01a4c(param_1 + 0x35f0,1);
  FUN_00f023ec(param_1 + 0x908,param_1 + 0x35f0,1);
  return;
}




void FUN_00bb8910(long param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined4 uVar4;
  undefined1 auStack_48 [32];
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  if (*(char *)(param_1 + 0xbc78) == '\0') {
    FUN_00cbec10(param_1);
  }
  else {
    *(char *)(param_1 + 0xbc78) = '\0';
    *(undefined8 *)(param_1 + 0xbb90) = *(undefined8 *)(param_1 + 0xbaa8);
    uVar1 = (ulong)(*(byte *)(param_1 + 0xbab0) >> 1);
    lVar3 = param_1 + 0xbab1;
    if ((*(byte *)(param_1 + 0xbab0) & 1) != 0) {
      uVar1 = *(ulong *)(param_1 + 0xbab8);
      lVar3 = *(long *)(param_1 + 0xbac0);
    }
    FUN_008fcea8(param_1 + 0xbb98,lVar3,uVar1);
    uVar1 = (ulong)(*(byte *)(param_1 + 0xbac8) >> 1);
    lVar3 = param_1 + 0xbac9;
    if ((*(byte *)(param_1 + 0xbac8) & 1) != 0) {
      uVar1 = *(ulong *)(param_1 + 0xbad0);
      lVar3 = *(long *)(param_1 + 0xbad8);
    }
    FUN_008fcea8(param_1 + 0xbbb0,lVar3,uVar1);
    uVar1 = (ulong)(*(byte *)(param_1 + 0xbae0) >> 1);
    lVar3 = param_1 + 0xbae1;
    if ((*(byte *)(param_1 + 0xbae0) & 1) != 0) {
      uVar1 = *(ulong *)(param_1 + 0xbae8);
      lVar3 = *(long *)(param_1 + 0xbaf0);
    }
    FUN_008fcea8(param_1 + 0xbbc8,lVar3,uVar1);
    uVar1 = (ulong)(*(byte *)(param_1 + 0xbaf8) >> 1);
    lVar3 = param_1 + 0xbaf9;
    if ((*(byte *)(param_1 + 0xbaf8) & 1) != 0) {
      uVar1 = *(ulong *)(param_1 + 0xbb00);
      lVar3 = *(long *)(param_1 + 0xbb08);
    }
    FUN_008fcea8(param_1 + 0xbbe0,lVar3,uVar1);
    uVar1 = (ulong)(*(byte *)(param_1 + 0xbb10) >> 1);
    lVar3 = param_1 + 0xbb11;
    if ((*(byte *)(param_1 + 0xbb10) & 1) != 0) {
      uVar1 = *(ulong *)(param_1 + 0xbb18);
      lVar3 = *(long *)(param_1 + 0xbb20);
    }
    FUN_008fcea8(param_1 + 0xbbf8,lVar3,uVar1);
    uVar1 = (ulong)(*(byte *)(param_1 + 0xbb28) >> 1);
    lVar3 = param_1 + 0xbb29;
    if ((*(byte *)(param_1 + 0xbb28) & 1) != 0) {
      uVar1 = *(ulong *)(param_1 + 0xbb30);
      lVar3 = *(long *)(param_1 + 0xbb38);
    }
    FUN_008fcea8(param_1 + 0xbc10,lVar3,uVar1);
    uVar1 = (ulong)(*(byte *)(param_1 + 0xbb40) >> 1);
    lVar3 = param_1 + 0xbb41;
    if ((*(byte *)(param_1 + 0xbb40) & 1) != 0) {
      uVar1 = *(ulong *)(param_1 + 0xbb48);
      lVar3 = *(long *)(param_1 + 0xbb50);
    }
    FUN_008fcea8(param_1 + 0xbc28,lVar3,uVar1);
    uVar1 = (ulong)(*(byte *)(param_1 + 0xbb58) >> 1);
    lVar3 = param_1 + 0xbb59;
    if ((*(byte *)(param_1 + 0xbb58) & 1) != 0) {
      uVar1 = *(ulong *)(param_1 + 0xbb60);
      lVar3 = *(long *)(param_1 + 0xbb68);
    }
    FUN_008fcea8(param_1 + 0xbc40,lVar3,uVar1);
    uVar1 = (ulong)(*(byte *)(param_1 + 0xbb70) >> 1);
    lVar3 = param_1 + 0xbb71;
    if ((*(byte *)(param_1 + 0xbb70) & 1) != 0) {
      uVar1 = *(ulong *)(param_1 + 0xbb78);
      lVar3 = *(long *)(param_1 + 48000);
    }
    FUN_008fcea8(param_1 + 0xbc58,lVar3,uVar1);
    *(undefined1 *)(param_1 + 0xbc70) = *(undefined1 *)(param_1 + 0xbb88);
    uVar4 = FUN_00f048a4("UI::GUILD_SEARCH_FILTERS_CHANGED");
    FUN_00f048e0(auStack_48,uVar4,0);
    FUN_00f04760(param_1,auStack_48,0);
  }
  if (*(long *)(lVar2 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00bb8bdc(void *param_1)

{
  FUN_00b44844();
  operator_delete(param_1);
  return;
}




void FUN_00bb8c00(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 uVar5;
  uint uVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long local_b8;
  code *local_b0;
  undefined8 *puStack_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 *local_90;
  undefined4 local_88;
  long local_80;
  
  lVar4 = tpidr_el0;
  local_80 = *(long *)(lVar4 + 0x28);
  FUN_00af5e50();
  *param_1 = &PTR_FUN_027eac08;
  FUN_00bbbb18(param_1 + 0x13c);
  FUN_00bbb56c(param_1 + 0x820);
  FUN_00bbbb18(param_1 + 0xda2);
  FUN_00bbbb18(param_1 + 0x1486);
  FUN_00bbb56c(param_1 + 0x1b6a);
  lVar7 = 0xb8b0;
  puVar8 = param_1 + 0x20ec;
  do {
    FUN_00bbbdc0(puVar8);
    lVar7 = lVar7 + -0x3d90;
    puVar8 = puVar8 + 0x7b2;
  } while (lVar7 != 0);
  puVar1 = param_1 + 0x3802;
  FUN_00f13ca4(puVar1);
  puVar2 = param_1 + 0x3819;
  FUN_00ab6c24(puVar2,0);
  memset(param_1 + 0x3ad2,0,0xd8);
  FUN_00954ec0(param_1 + 0x3ad1);
  memset(param_1 + 0x3aef,0,0xd8);
  FUN_00954ec0(param_1 + 0x3aee);
  puVar8 = param_1 + 0x121;
  *(undefined1 *)(param_1 + 0x3b0b) = 0;
  FUN_00f023ec(puVar8,param_1 + 0x13c,1);
  FUN_00f023ec(puVar8,param_1 + 0x820,1);
  FUN_00f023ec(puVar8,param_1 + 0xda2,1);
  FUN_00f023ec(puVar8,param_1 + 0x1486,1);
  FUN_00f023ec(puVar8,param_1 + 0x1b6a,1);
  lVar7 = 3;
  puVar10 = param_1 + 0x20ec;
  do {
    FUN_00f023ec(puVar8,puVar10,1);
    lVar7 = lVar7 + -1;
    puVar10 = puVar10 + 0x7b2;
  } while (lVar7 != 0);
  FUN_00f023ec(puVar8,puVar1,1);
  FUN_00f023ec(puVar1,puVar2,1);
  uVar5 = FUN_00e6ce7c("MENU_GUILD_EDIT_FORM_PANEL_PRIMETIME_DROPDOWN_LABEL",0);
  FUN_00f0d75c(param_1 + 0x171,uVar5);
  FUN_00bb9340(0x44480000,param_1);
  local_88 = FUN_00f048a4("UI::EVENT_CONTROL_TOGGLED");
  local_b0 = FUN_00bb940c;
  local_98 = 0;
  local_90 = (undefined8 *)0x0;
  local_a0 = 0;
  puStack_a8 = param_1;
  FUN_009693a0(param_1 + 0x198,&local_b0);
  *(uint *)((long)param_1 + 0x423c) = *(uint *)((long)param_1 + 0x423c) | 4;
  uVar5 = FUN_00e6ce7c("MENU_GUILD_EDIT_FORM_PANEL_TYPE_DROPDOWN_LABEL",0);
  FUN_00f0d75c(param_1 + 0x855,uVar5);
  FUN_00bb9454(0x44480000,param_1);
  local_88 = FUN_00f048a4("UI::EVENT_CONTROL_TOGGLED");
  local_b0 = FUN_00bb9618;
  local_98 = 0;
  local_90 = (undefined8 *)0x0;
  local_a0 = 0;
  puStack_a8 = param_1;
  FUN_009693a0(param_1 + 0x87c,&local_b0);
  local_88 = FUN_00f048a4("UI::EVENT_DROPDOWN_EXPANDED_CHANGED");
  local_b0 = thunk_FUN_00bbac0c;
  local_a0 = 0;
  local_98 = 0;
  puStack_a8 = param_1;
  local_90 = param_1 + 0x87b;
  FUN_009693a0(param_1 + 0x87c,&local_b0);
  uVar5 = FUN_00e6ce7c("MENU_GUILD_EDIT_FORM_PANEL_LANGUAGE_DROPDOWN_LABEL",0);
  FUN_00f0d75c(param_1 + 0xdd7,uVar5);
  FUN_00bb9668(0x44480000,param_1);
  local_88 = FUN_00f048a4("UI::EVENT_CONTROL_TOGGLED");
  local_b0 = FUN_00bb9760;
  local_98 = 0;
  local_90 = (undefined8 *)0x0;
  local_a0 = 0;
  puStack_a8 = param_1;
  FUN_009693a0(param_1 + 0xdfe,&local_b0);
  *(uint *)((long)param_1 + 0xa56c) = *(uint *)((long)param_1 + 0xa56c) | 4;
  uVar5 = FUN_00e6ce7c("MENU_GUILD_EDIT_FORM_PANEL_SKILL_TIER_DROPDOWN_LABEL",0);
  FUN_00f0d75c(param_1 + 0x14bb,uVar5);
  FUN_00bb97ac(0x44480000,param_1);
  local_88 = FUN_00f048a4("UI::EVENT_CONTROL_TOGGLED");
  local_b0 = FUN_00bb98d4;
  local_98 = 0;
  local_90 = (undefined8 *)0x0;
  local_a0 = 0;
  puStack_a8 = param_1;
  FUN_009693a0(param_1 + 0x14e2,&local_b0);
  uVar5 = FUN_00e6ce7c("MENU_GUILD_EDIT_FORM_PANEL_ENROLLMENT_DROPDOWN_LABEL",0);
  FUN_00f0d75c(param_1 + 0x1b9f,uVar5);
  FUN_00bb990c(0x44480000,param_1);
  local_88 = FUN_00f048a4("UI::EVENT_CONTROL_TOGGLED");
  local_b0 = thunk_FUN_00bbacb4;
  local_98 = 0;
  local_90 = (undefined8 *)0x0;
  local_a0 = 0;
  puStack_a8 = param_1;
  FUN_009693a0(param_1 + 0x1bc6,&local_b0);
  local_88 = FUN_00f048a4("UI::EVENT_DROPDOWN_EXPANDED_CHANGED");
  local_b0 = thunk_FUN_00bbad38;
  local_a0 = 0;
  local_98 = 0;
  puStack_a8 = param_1;
  local_90 = param_1 + 0x1bc5;
  FUN_009693a0(param_1 + 0x1bc6,&local_b0);
  uVar3 = DAT_03210fac;
  uVar6 = 0;
  puVar8 = (undefined8 *)0x0;
  lVar7 = 0x109d0;
  lVar12 = 0x10b00;
  lVar9 = 0x1089c;
  lVar11 = 0x10b08;
  lVar13 = 0x12800;
  local_b8 = 0x127f8;
  do {
    *(uint *)((long)param_1 + lVar9) =
         (*(uint *)((long)param_1 + lVar9) & 0xfffffff8 |
         *(uint *)((long)param_1 + lVar9) & 3 | (uVar6 >> 2 & 1) << 2) ^ 4;
    uVar5 = FUN_00e6ce7c("MENU_GUILD_EDIT_FORM_PANEL_RESOURCE_LINK_TILE_LABEL",0);
    FUN_00f0d75c((long)param_1 + lVar7,uVar5);
    uVar5 = FUN_00e6ce7c("MENU_GUILD_EDIT_FORM_PANEL_RESOURCE_LINK_DISPLAY_LABEL",0);
    FUN_00abc73c((long)param_1 + lVar12,uVar5);
    local_b0 = FUN_00bb9a48;
    local_a0 = 0;
    local_98 = 0;
    puStack_a8 = param_1;
    local_90 = puVar8;
    local_88 = uVar3;
    FUN_009693a0((long)param_1 + lVar11,&local_b0);
    uVar5 = FUN_00e6ce7c("MENU_GUILD_EDIT_FORM_PANEL_RESOURCE_LINK_DISPLAY_LABEL",0);
    FUN_00ce1e34((long)param_1 + lVar12,uVar5,&DAT_03210450,&DAT_03210450,0,0,0,0,0,0,0,0);
    uVar5 = FUN_00e6ce7c("MENU_GUILD_EDIT_FORM_PANEL_RESOURCE_LINK_URL_LABEL",0);
    FUN_00abc73c((long)param_1 + local_b8,uVar5);
    local_b0 = FUN_00bb9a50;
    local_a0 = 0;
    local_98 = 0;
    puStack_a8 = param_1;
    local_90 = puVar8;
    local_88 = uVar3;
    FUN_009693a0((long)param_1 + lVar13,&local_b0);
    uVar5 = FUN_00e6ce7c("MENU_GUILD_EDIT_FORM_PANEL_RESOURCE_LINK_URL_LABEL",0);
    FUN_00ce1e34((long)param_1 + local_b8,uVar5,&DAT_03210450,&DAT_03210450,0,0,0,0,0,0,0,0);
    puVar8 = (undefined8 *)((long)puVar8 + 1);
    lVar7 = lVar7 + 0x3d90;
    uVar6 = uVar6 + 4;
    lVar12 = lVar12 + 0x3d90;
    local_b8 = local_b8 + 0x3d90;
    lVar9 = lVar9 + 0x3d90;
    lVar11 = lVar11 + 0x3d90;
    lVar13 = lVar13 + 0x3d90;
  } while (puVar8 != (undefined8 *)0x3);
  uVar5 = FUN_00e6ce7c("MENU_GUILD_SEARCH_FILTER_APPLY_BUTTON_LABEL",0);
  FUN_00ab703c(0x42000000,0x42c80000,0x446b0000,puVar2,0,uVar5,&DAT_01bee7fa,&DAT_03218ef8,0);
  local_88 = DAT_03210c64;
  local_b0 = thunk_FUN_00bbb09c;
  local_98 = 0;
  local_90 = (undefined8 *)0x0;
  local_a0 = 0;
  puStack_a8 = param_1;
  FUN_009693a0(param_1 + 0x381a,&local_b0);
  if (*(long *)(lVar4 + 0x28) == local_80) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

