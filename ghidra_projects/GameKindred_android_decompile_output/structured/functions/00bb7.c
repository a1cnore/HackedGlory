// functions/00bb7 — 14 functions
#include "libGameKindred.h"




void FUN_00bb7224(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027ea890;
  if ((*(byte *)(param_1 + 0x333) & 1) != 0) {
    operator_delete((void *)param_1[0x335]);
  }
  FUN_009c7fa8(param_1 + 0x7b);
  FUN_00f0d3a4(param_1 + 0x55);
  FUN_00f0d3a4(param_1 + 0x2f);
  param_1[0x11] = &PTR_FUN_028266f0;
  param_1[0x28] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x2b);
  FUN_00f13d08(param_1 + 0x11);
  FUN_00f01868(param_1);
  return;
}




void FUN_00bb72ac(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027ea890;
  if ((*(byte *)(param_1 + 0x333) & 1) != 0) {
    operator_delete((void *)param_1[0x335]);
  }
  FUN_009c7fa8(param_1 + 0x7b);
  FUN_00f0d3a4(param_1 + 0x55);
  FUN_00f0d3a4(param_1 + 0x2f);
  param_1[0x11] = &PTR_FUN_028266f0;
  param_1[0x28] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x2b);
  FUN_00f13d08(param_1 + 0x11);
  FUN_00f01868(param_1);
  operator_delete(param_1);
  return;
}




void FUN_00bb733c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027ea990;
  param_1[0x99] = &PTR_FUN_028266f0;
  param_1[0xb0] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xb3);
  FUN_00f13d08(param_1 + 0x99);
  param_1[0x7b] = &PTR_FUN_028266f0;
  param_1[0x92] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x95);
  FUN_00f13d08(param_1 + 0x7b);
  FUN_00f0d3a4(param_1 + 0x55);
  FUN_00f0d3a4(param_1 + 0x2f);
  param_1[0x11] = &PTR_FUN_028266f0;
  param_1[0x28] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x2b);
  FUN_00f13d08(param_1 + 0x11);
  FUN_00f01868(param_1);
  return;
}




void FUN_00bb73e8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027ea990;
  param_1[0x99] = &PTR_FUN_028266f0;
  param_1[0xb0] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xb3);
  FUN_00f13d08(param_1 + 0x99);
  param_1[0x7b] = &PTR_FUN_028266f0;
  param_1[0x92] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x95);
  FUN_00f13d08(param_1 + 0x7b);
  FUN_00f0d3a4(param_1 + 0x55);
  FUN_00f0d3a4(param_1 + 0x2f);
  param_1[0x11] = &PTR_FUN_028266f0;
  param_1[0x28] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x2b);
  FUN_00f13d08(param_1 + 0x11);
  FUN_00f01868(param_1);
  operator_delete(param_1);
  return;
}




void FUN_00bb749c(uint *param_1,uint param_2)

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




void FUN_00bb751c(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  byte bVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  code *local_a8;
  undefined8 *puStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 *local_88;
  undefined4 local_80;
  long local_78;
  
  lVar7 = tpidr_el0;
  local_78 = *(long *)(lVar7 + 0x28);
  FUN_00af5e50();
  *param_1 = &PTR_FUN_027eaa90;
  FUN_00bbb56c(param_1 + 0x13c);
  FUN_00bbbb18(param_1 + 0x6be);
  FUN_00bbbb18(param_1 + 0xda2);
  puVar2 = param_1 + 0x1486;
  FUN_00f13ca4(puVar2);
  puVar3 = param_1 + 0x149d;
  FUN_00ab6c24(puVar3,0);
  puVar4 = param_1 + 0x1755;
  memset(param_1 + 0x1756,0,0xd8);
  FUN_00954ec0(puVar4);
  memset(param_1 + 0x1773,0,0xd8);
  FUN_00954ec0(param_1 + 0x1772);
  puVar1 = param_1 + 0x121;
  *(undefined1 *)(param_1 + 0x178f) = 0;
  FUN_00f023ec(puVar1,param_1 + 0x13c,1);
  FUN_00f023ec(puVar1,param_1 + 0x6be,1);
  FUN_00f023ec(puVar1,param_1 + 0xda2,1);
  FUN_00f023ec(puVar1,puVar2,1);
  FUN_00f023ec(puVar2,puVar3,1);
  *(uint *)((long)param_1 + 0xb1c) = *(uint *)((long)param_1 + 0xb1c) & 0xfffffffb;
  uVar9 = FUN_00e6ce7c("MENU_GUILD_SEARCH_FORM_PANEL_TYPE_DROPDOWN_LABEL",0);
  FUN_00f0d75c(param_1 + 0x171,uVar9);
  local_80 = FUN_00f048a4("UI::EVENT_CONTROL_TOGGLED");
  local_a8 = FUN_00bb7ad8;
  local_90 = 0;
  local_88 = (undefined8 *)0x0;
  local_98 = 0;
  puStack_a0 = param_1;
  FUN_009693a0(param_1 + 0x198,&local_a8);
  local_80 = FUN_00f048a4("UI::EVENT_DROPDOWN_EXPANDED_CHANGED");
  local_a8 = FUN_00bb7b18;
  local_98 = 0;
  local_90 = 0;
  puStack_a0 = param_1;
  local_88 = param_1 + 0x197;
  FUN_009693a0(param_1 + 0x198,&local_a8);
  FUN_00bb7b50(0x44480000,param_1);
  uVar9 = FUN_00e6ce7c("MENU_GUILD_SEARCH_FORM_PANEL_PRIMETIME_DROPDOWN_LABEL",0);
  FUN_00f0d75c(param_1 + 0xdd7,uVar9);
  local_80 = FUN_00f048a4("UI::EVENT_CONTROL_TOGGLED");
  local_a8 = FUN_00bb7cfc;
  local_90 = 0;
  local_88 = (undefined8 *)0x0;
  local_98 = 0;
  puStack_a0 = param_1;
  FUN_009693a0(param_1 + 0xdfe,&local_a8);
  FUN_00bb7d4c(0x44480000,param_1);
  *(uint *)((long)param_1 + 0x372c) = *(uint *)((long)param_1 + 0x372c) | 4;
  uVar9 = FUN_00e6ce7c("MENU_GUILD_SEARCH_FORM_PANEL_SKILL_TIER_DROPDOWN_LABEL",0);
  FUN_00f0d75c(param_1 + 0x6f3,uVar9);
  local_80 = FUN_00f048a4("UI::EVENT_CONTROL_TOGGLED");
  local_a8 = FUN_00bb7e38;
  local_90 = 0;
  local_88 = (undefined8 *)0x0;
  local_98 = 0;
  puStack_a0 = param_1;
  FUN_009693a0(param_1 + 0x71a,&local_a8);
  FUN_00bb7e7c(0x44480000,param_1);
  uVar9 = FUN_00e6ce7c("MENU_GUILD_SEARCH_FILTER_APPLY_BUTTON_LABEL",0);
  FUN_00ab703c(0x42000000,0x42c80000,0x446b0000,puVar3,0,uVar9,&DAT_01bee7fa,&DAT_03218ef8,0);
  local_80 = DAT_03210c64;
  local_a8 = thunk_FUN_00bb8910;
  local_90 = 0;
  local_88 = (undefined8 *)0x0;
  local_98 = 0;
  puStack_a0 = param_1;
  FUN_009693a0(param_1 + 0x149e,&local_a8);
  param_1[0x1772] = *puVar4;
  bVar6 = *(byte *)(param_1 + 0x1756);
  uVar5 = (ulong)(bVar6 >> 1);
  lVar8 = (long)param_1 + 0xbab1;
  if ((bVar6 & 1) != 0) {
    uVar5 = param_1[0x1757];
    lVar8 = param_1[0x1758];
  }
  FUN_008fcea8(param_1 + 0x1773,lVar8,uVar5);
  uVar5 = (ulong)(*(byte *)(param_1 + 0x1759) >> 1);
  lVar8 = (long)param_1 + 0xbac9;
  if ((*(byte *)(param_1 + 0x1759) & 1) != 0) {
    uVar5 = param_1[0x175a];
    lVar8 = param_1[0x175b];
  }
  FUN_008fcea8(param_1 + 0x1776,lVar8,uVar5);
  uVar5 = (ulong)(*(byte *)(param_1 + 0x175c) >> 1);
  lVar8 = (long)param_1 + 0xbae1;
  if ((*(byte *)(param_1 + 0x175c) & 1) != 0) {
    uVar5 = param_1[0x175d];
    lVar8 = param_1[0x175e];
  }
  FUN_008fcea8(param_1 + 0x1779,lVar8,uVar5);
  uVar5 = (ulong)(*(byte *)(param_1 + 0x175f) >> 1);
  lVar8 = (long)param_1 + 0xbaf9;
  if ((*(byte *)(param_1 + 0x175f) & 1) != 0) {
    uVar5 = param_1[0x1760];
    lVar8 = param_1[0x1761];
  }
  FUN_008fcea8(param_1 + 0x177c,lVar8,uVar5);
  uVar5 = (ulong)(*(byte *)(param_1 + 0x1762) >> 1);
  lVar8 = (long)param_1 + 0xbb11;
  if ((*(byte *)(param_1 + 0x1762) & 1) != 0) {
    uVar5 = param_1[0x1763];
    lVar8 = param_1[0x1764];
  }
  FUN_008fcea8(param_1 + 0x177f,lVar8,uVar5);
  uVar5 = (ulong)(*(byte *)(param_1 + 0x1765) >> 1);
  lVar8 = (long)param_1 + 0xbb29;
  if ((*(byte *)(param_1 + 0x1765) & 1) != 0) {
    uVar5 = param_1[0x1766];
    lVar8 = param_1[0x1767];
  }
  FUN_008fcea8(param_1 + 0x1782,lVar8,uVar5);
  uVar5 = (ulong)(*(byte *)(param_1 + 0x1768) >> 1);
  lVar8 = (long)param_1 + 0xbb41;
  if ((*(byte *)(param_1 + 0x1768) & 1) != 0) {
    uVar5 = param_1[0x1769];
    lVar8 = param_1[0x176a];
  }
  FUN_008fcea8(param_1 + 0x1785,lVar8,uVar5);
  uVar5 = (ulong)(*(byte *)(param_1 + 0x176b) >> 1);
  lVar8 = (long)param_1 + 0xbb59;
  if ((*(byte *)(param_1 + 0x176b) & 1) != 0) {
    uVar5 = param_1[0x176c];
    lVar8 = param_1[0x176d];
  }
  FUN_008fcea8(param_1 + 0x1788,lVar8,uVar5);
  uVar5 = (ulong)(*(byte *)(param_1 + 0x176e) >> 1);
  lVar8 = (long)param_1 + 0xbb71;
  if ((*(byte *)(param_1 + 0x176e) & 1) != 0) {
    uVar5 = param_1[5999];
    lVar8 = param_1[6000];
  }
  FUN_008fcea8(param_1 + 0x178b,lVar8,uVar5);
  *(undefined1 *)(param_1 + 0x178e) = *(undefined1 *)(param_1 + 0x1771);
  FUN_00bb7fdc(param_1,puVar4);
  if (*(long *)(lVar7 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00bb7ad8(long param_1)

{
  undefined8 uVar1;
  
  *(undefined1 *)(param_1 + 0xbc78) = 1;
  uVar1 = FUN_00ac9cd0(param_1 + 0xcb8);
  FUN_008fce60(param_1 + 0xbab0,uVar1);
  return;
}




void FUN_00bb7b18(long param_1)

{
  FUN_00f01a4c(param_1 + 0x9e0,1);
  FUN_00f023ec(param_1 + 0x908,param_1 + 0x9e0,1);
  return;
}




void FUN_00bb7b50(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  local_68 = 0;
  uStack_60 = 0;
  uVar2 = FUN_00cb50d8(&DAT_03210778,1);
  FUN_0090ea30(&local_68,uVar2);
  uVar2 = FUN_00cb50d8(&DAT_03210718,1);
  FUN_0090ea30(&local_68,uVar2);
  uVar2 = FUN_00cb50d8(&DAT_03210730,1);
  FUN_0090ea30(&local_68,uVar2);
  uVar2 = FUN_00cb50d8(&DAT_03210748,1);
  FUN_0090ea30(&local_68,uVar2);
  uVar2 = FUN_00cb50d8(&DAT_03210760,1);
  FUN_0090ea30(&local_68,uVar2);
  local_78 = 0;
  uStack_70 = 0;
  FUN_0096204c(&local_78,&DAT_03210778);
  FUN_0096204c(&local_78,&DAT_03210718);
  FUN_0096204c(&local_78,&DAT_03210730);
  FUN_0096204c(&local_78,&DAT_03210748);
  FUN_0096204c(&local_78,&DAT_03210760);
  FUN_00ac876c(param_1,param_1,0,0x3f800000,0x3f800000,param_2 + 0xcb8,&local_68,&local_78,1,1,0);
  FUN_00ac9b30(param_2 + 0xcb8,0,1,0);
  FUN_00951534(&local_78,1);
  FUN_0090eb54(&local_68,1);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00bb7cfc(long param_1)

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




void FUN_00bb7d4c(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 local_58;
  void *local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_48 = 0;
  uStack_40 = 0;
  uVar2 = FUN_00e6ce7c("MENU_DROPDDOWN_OPTION_ANY",0);
  FUN_0090ea30(&local_48,uVar2);
  iVar3 = 0;
  do {
    FUN_00cb6184(&local_58,iVar3,1);
    FUN_0090ea30(&local_48,&local_58);
    if (local_50 != (void *)0x0) {
      operator_delete__(local_50);
      local_58 = 0;
      local_50 = (void *)0x0;
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 != 0x18);
  local_58 = 0;
  local_50 = (void *)0x0;
  FUN_00b03d8c(param_1,param_2 + 0x6fe8,&local_48,&local_58,1);
  FUN_00951534(&local_58,1);
  FUN_0090eb54(&local_48,1);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00bb7e38(long param_1)

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




void FUN_00bb7e7c(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  void *local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_58 = 0;
  uStack_50 = 0;
  uVar2 = FUN_00e6ce7c("MENU_DROPDDOWN_OPTION_ANY",0);
  FUN_0090ea30(&local_58,uVar2);
  uVar2 = FUN_00cb439c(0xffffffff,0,0);
  FUN_0090ea30(&local_58,uVar2);
  FUN_00e70510(&local_68);
  iVar3 = 0;
  iVar4 = 1;
  do {
    FUN_00e70e18(&local_68,&DAT_01bb0650,iVar4);
    uVar2 = FUN_00cb439c(iVar3,1,0);
    FUN_00e70c34(&local_68,uVar2);
    FUN_0090ea30(&local_58,&local_68);
    iVar4 = iVar4 + 1;
    iVar3 = iVar3 + 3;
  } while (iVar4 != 0xb);
  local_78 = 0;
  uStack_70 = 0;
  FUN_00b03d8c(param_1,param_2 + 0x38c8,&local_58,&local_78,1);
  FUN_00b040b8(param_2 + 0x38c8,0,1,0);
  FUN_00951534(&local_78,1);
  if (local_60 != (void *)0x0) {
    operator_delete__(local_60);
    local_68 = 0;
    local_60 = (void *)0x0;
  }
  FUN_0090eb54(&local_58,1);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00bb7fdc(long param_1,int *param_2)

{
  size_t __n;
  size_t sVar1;
  ulong uVar2;
  byte bVar3;
  int iVar4;
  char *__s2;
  char *pcVar5;
  long lVar6;
  void *__s1;
  
  if (*param_2 == -1) {
    iVar4 = 0;
  }
  else {
    iVar4 = FUN_00e6b698(*param_2,0);
    iVar4 = iVar4 + 1;
  }
  FUN_00b040b8(param_1 + 0x6fe8,iVar4,1,1);
  bVar3 = *(byte *)(param_2 + 2);
  __n = (ulong)(bVar3 >> 1);
  if ((bVar3 & 1) != 0) {
    __n = *(size_t *)(param_2 + 4);
  }
  sVar1 = (ulong)(DAT_0320ffa8 >> 1);
  if ((DAT_0320ffa8 & 1) != 0) {
    sVar1 = DAT_0320ffb0;
  }
  if (__n == sVar1) {
    __s1 = *(void **)(param_2 + 6);
    if ((bVar3 & 1) == 0) {
      __s1 = (void *)((long)param_2 + 9);
    }
    __s2 = DAT_0320ffb8;
    if ((DAT_0320ffa8 & 1) == 0) {
      __s2 = &DAT_0320ffa9;
    }
    if ((bVar3 & 1) == 0) {
      if (__n != 0) {
        pcVar5 = (char *)((long)param_2 + 9);
        lVar6 = -(ulong)(bVar3 >> 1);
        do {
          if (*pcVar5 != *__s2) goto LAB_00bb80dc;
          pcVar5 = pcVar5 + 1;
          lVar6 = lVar6 + 1;
          __s2 = __s2 + 1;
        } while (lVar6 != 0);
      }
    }
    else if ((__n != 0) && (iVar4 = memcmp(__s1,__s2,__n), iVar4 != 0)) goto LAB_00bb80dc;
    FUN_00ac9b30(param_1 + 0xcb8,0,1,1);
  }
  else {
LAB_00bb80dc:
    FUN_00ac9b64(param_1 + 0xcb8,param_2 + 2,1,1);
  }
  iVar4 = param_2[1];
  if (iVar4 == -2) {
    iVar4 = 0;
  }
  else if (iVar4 == -1) {
    iVar4 = 1;
  }
  else {
    iVar4 = iVar4 / 3 + 2;
  }
  FUN_00b040b8(param_1 + 0x38c8,iVar4,1,1);
  *(undefined8 *)(param_1 + 0xbb90) = *(undefined8 *)param_2;
  FUN_008fce60((byte *)(param_1 + 0xbb98),param_2 + 2);
  FUN_008fce60((byte *)(param_1 + 0xbbb0),param_2 + 8);
  FUN_008fce60((byte *)(param_1 + 0xbbc8),param_2 + 0xe);
  FUN_008fce60((byte *)(param_1 + 0xbbe0),param_2 + 0x14);
  FUN_008fce60((byte *)(param_1 + 0xbbf8),param_2 + 0x1a);
  FUN_008fce60((byte *)(param_1 + 0xbc10),param_2 + 0x20);
  FUN_008fce60((byte *)(param_1 + 0xbc28),param_2 + 0x26);
  FUN_008fce60((byte *)(param_1 + 0xbc40),param_2 + 0x2c);
  FUN_008fce60((byte *)(param_1 + 0xbc58),param_2 + 0x32);
  *(char *)(param_1 + 0xbc70) = (char)param_2[0x38];
  *(undefined8 *)(param_1 + 0xbaa8) = *(undefined8 *)(param_1 + 0xbb90);
  bVar3 = *(byte *)(param_1 + 0xbb98);
  uVar2 = (ulong)(bVar3 >> 1);
  lVar6 = param_1 + 0xbb99;
  if ((bVar3 & 1) != 0) {
    uVar2 = *(ulong *)(param_1 + 0xbba0);
    lVar6 = *(long *)(param_1 + 0xbba8);
  }
  FUN_008fcea8(param_1 + 0xbab0,lVar6,uVar2);
  bVar3 = *(byte *)(param_1 + 0xbbb0);
  uVar2 = (ulong)(bVar3 >> 1);
  lVar6 = param_1 + 0xbbb1;
  if ((bVar3 & 1) != 0) {
    uVar2 = *(ulong *)(param_1 + 0xbbb8);
    lVar6 = *(long *)(param_1 + 0xbbc0);
  }
  FUN_008fcea8(param_1 + 0xbac8,lVar6,uVar2);
  bVar3 = *(byte *)(param_1 + 0xbbc8);
  uVar2 = (ulong)(bVar3 >> 1);
  lVar6 = param_1 + 0xbbc9;
  if ((bVar3 & 1) != 0) {
    uVar2 = *(ulong *)(param_1 + 0xbbd0);
    lVar6 = *(long *)(param_1 + 0xbbd8);
  }
  FUN_008fcea8(param_1 + 0xbae0,lVar6,uVar2);
  bVar3 = *(byte *)(param_1 + 0xbbe0);
  uVar2 = (ulong)(bVar3 >> 1);
  lVar6 = param_1 + 0xbbe1;
  if ((bVar3 & 1) != 0) {
    uVar2 = *(ulong *)(param_1 + 0xbbe8);
    lVar6 = *(long *)(param_1 + 0xbbf0);
  }
  FUN_008fcea8(param_1 + 0xbaf8,lVar6,uVar2);
  bVar3 = *(byte *)(param_1 + 0xbbf8);
  uVar2 = (ulong)(bVar3 >> 1);
  lVar6 = param_1 + 0xbbf9;
  if ((bVar3 & 1) != 0) {
    uVar2 = *(ulong *)(param_1 + 0xbc00);
    lVar6 = *(long *)(param_1 + 0xbc08);
  }
  FUN_008fcea8(param_1 + 0xbb10,lVar6,uVar2);
  bVar3 = *(byte *)(param_1 + 0xbc10);
  uVar2 = (ulong)(bVar3 >> 1);
  lVar6 = param_1 + 0xbc11;
  if ((bVar3 & 1) != 0) {
    uVar2 = *(ulong *)(param_1 + 0xbc18);
    lVar6 = *(long *)(param_1 + 0xbc20);
  }
  FUN_008fcea8(param_1 + 0xbb28,lVar6,uVar2);
  bVar3 = *(byte *)(param_1 + 0xbc28);
  uVar2 = (ulong)(bVar3 >> 1);
  lVar6 = param_1 + 0xbc29;
  if ((bVar3 & 1) != 0) {
    uVar2 = *(ulong *)(param_1 + 0xbc30);
    lVar6 = *(long *)(param_1 + 0xbc38);
  }
  FUN_008fcea8(param_1 + 0xbb40,lVar6,uVar2);
  bVar3 = *(byte *)(param_1 + 0xbc40);
  uVar2 = (ulong)(bVar3 >> 1);
  lVar6 = param_1 + 0xbc41;
  if ((bVar3 & 1) != 0) {
    uVar2 = *(ulong *)(param_1 + 0xbc48);
    lVar6 = *(long *)(param_1 + 0xbc50);
  }
  FUN_008fcea8(param_1 + 0xbb58,lVar6,uVar2);
  bVar3 = *(byte *)(param_1 + 0xbc58);
  uVar2 = (ulong)(bVar3 >> 1);
  lVar6 = param_1 + 0xbc59;
  if ((bVar3 & 1) != 0) {
    uVar2 = *(ulong *)(param_1 + 0xbc60);
    lVar6 = *(long *)(param_1 + 0xbc68);
  }
  FUN_008fcea8(param_1 + 0xbb70,lVar6,uVar2);
  *(undefined1 *)(param_1 + 0xbb88) = *(undefined1 *)(param_1 + 0xbc70);
  *(undefined1 *)(param_1 + 0xbc78) = 0;
  return;
}

