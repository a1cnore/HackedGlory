// functions/00bd0 — 38 functions
#include "libGameKindred.h"




void FUN_00bd008c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_00904b90();
  uVar1 = FUN_009580b8();
  FUN_00962dfc(uVar1,param_2);
  return;
}




void FUN_00bd00b4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_009580b8();
  FUN_00962f40(uVar1,param_2);
  return;
}




void FUN_00bd00d8(undefined8 *param_1)

{
  FUN_00948d58(param_1 + 2);
  *param_1 = &PTR___cxa_pure_virtual_027ecb50;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return;
}




void FUN_00bd0124(undefined8 *param_1)

{
  FUN_00948d58(param_1 + 2);
  *param_1 = &PTR___cxa_pure_virtual_027ecb50;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  operator_delete(param_1);
  return;
}




void FUN_00bd0170(long param_1)

{
  FUN_00948d58();
  *(undefined ***)(param_1 + -0x10) = &PTR___cxa_pure_virtual_027ecb50;
  if (*(long **)(param_1 + -8) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + -8) + 8))();
  }
  *(undefined8 *)(param_1 + -8) = 0;
  return;
}




void FUN_00bd01b8(long param_1)

{
  FUN_00948d58();
  *(undefined8 *)(param_1 + -0x10) = &PTR___cxa_pure_virtual_027ecb50;
  if (*(long **)(param_1 + -8) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + -8) + 8))();
  }
  operator_delete((undefined8 *)(param_1 + -0x10));
  return;
}




void FUN_00bd0200(undefined8 *param_1)

{
  *param_1 = &PTR___cxa_pure_virtual_027ecb50;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return;
}




void FUN_00bd0244(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xbd0248);
  (*pcVar1)();
}




void FUN_00bd0248(undefined8 *param_1)

{
  long lVar1;
  void *pvVar2;
  byte local_50 [16];
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR___cxa_pure_virtual_027e96d0;
  pvVar2 = operator_new(0x4e38);
  FUN_00c2a7f0();
  param_1[1] = pvVar2;
  *(undefined8 **)((long)pvVar2 + 0xb8) = param_1;
  FUN_00948cd8(param_1 + 2);
  *param_1 = &PTR_FUN_027ecb80;
  param_1[2] = &PTR_FUN_027ecbe0;
  memset(param_1 + 5,0,0x60);
  FUN_00bd0c98(param_1 + 5);
  FUN_0099ceac(param_1 + 0x13,"GUILD.JOIN_BONUS",1);
  *(undefined4 *)(param_1 + 0x17) = 1;
  *(undefined1 *)((long)param_1 + 0xbc) = 0;
  FUN_00cb5080(local_50);
  FUN_008fce60(param_1 + 0xb,local_50);
  if ((local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00bd033c(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_009580c4();
  if ((uVar1 & 1) != 0) {
    uVar2 = FUN_009580b8();
    FUN_00963534(uVar2,*(undefined4 *)(param_1 + 0xb8),param_1 + 0x28);
  }
  FUN_00936760(FUN_00bd0390,FUN_00bd0394);
  *(undefined1 *)(param_1 + 0xbc) = 1;
  FUN_00bd0398(param_1);
  return;
}




void FUN_00bd0390(void)

{
  return;
}




void FUN_00bd0394(void)

{
  return;
}




void FUN_00bd0398(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined1 auStack_210 [32];
  undefined1 auStack_1f0 [16];
  undefined1 auStack_1e0 [16];
  undefined1 auStack_1d0 [240];
  undefined1 auStack_e0 [152];
  undefined4 local_48;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00bd04d4();
  if ((uVar2 & 1) == 0) {
    FUN_0099cf94(param_1 + 0x98,0);
  }
  else {
    FUN_0099cf94(param_1 + 0x98,1);
    if (*(char *)(param_1 + 0xbc) != '\0') {
      FUN_00b63fc0(auStack_1f0);
      uVar3 = FUN_00e6ce7c("MENU_GUILD_TAB_JOIN_BONUS_POPUP_TITLE",0);
      FUN_00910394(auStack_1f0,uVar3);
      uVar3 = FUN_00e6ce7c("MENU_GUILD_TAB_JOIN_BONUS_POPUP_DIALOG",0);
      FUN_00910394(auStack_1e0,uVar3);
      uVar3 = FUN_00e6ce7c("GENERIC_DIALOG_OKAY",0);
      FUN_00910394(auStack_1d0,uVar3);
      FUN_008fce60(auStack_e0,&DAT_0313a880);
      local_48 = 0x3fd9999a;
      FUN_00f048e0(auStack_210,DAT_0313375c,auStack_1f0);
      FUN_00f04760(*(undefined8 *)(param_1 + 8),auStack_210,1);
      FUN_0093c2fc("guildJoinBonus",1);
      FUN_0096910c(auStack_1f0);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00bd04cc(long param_1)

{
  *(undefined1 *)(param_1 + 0xbc) = 0;
  return;
}




byte FUN_00bd04d4(void)

{
  size_t __n;
  size_t sVar1;
  bool bVar2;
  byte bVar3;
  int iVar4;
  int *piVar5;
  ulong uVar6;
  long lVar7;
  char *__s2;
  char *pcVar8;
  void *__s1;
  
  piVar5 = (int *)FUN_0093618c();
  bVar2 = false;
  if (((char)piVar5[6] == '\0') && (bVar2 = false, *piVar5 == 0)) {
    bVar2 = piVar5[1] == 0;
  }
  uVar6 = FUN_009580c4();
  if ((uVar6 & 1) == 0) {
LAB_00bd05a0:
    FUN_0093c3e0("guildJoinBonus");
    return 0;
  }
  lVar7 = FUN_009580b8();
  bVar3 = *(byte *)(lVar7 + 0x5478);
  __n = (ulong)(bVar3 >> 1);
  if ((bVar3 & 1) != 0) {
    __n = *(size_t *)(lVar7 + 0x5480);
  }
  sVar1 = (ulong)(DAT_0320ffa8 >> 1);
  if ((DAT_0320ffa8 & 1) != 0) {
    sVar1 = DAT_0320ffb0;
  }
  if (__n != sVar1) goto LAB_00bd05a0;
  __s1 = *(void **)(lVar7 + 0x5488);
  if ((bVar3 & 1) == 0) {
    __s1 = (void *)(lVar7 + 0x5479);
  }
  __s2 = DAT_0320ffb8;
  if ((DAT_0320ffa8 & 1) == 0) {
    __s2 = &DAT_0320ffa9;
  }
  if ((bVar3 & 1) == 0) {
    if (__n != 0) {
      pcVar8 = (char *)(lVar7 + 0x5479);
      lVar7 = -(ulong)(bVar3 >> 1);
      do {
        if (*pcVar8 != *__s2) goto LAB_00bd05a0;
        pcVar8 = pcVar8 + 1;
        lVar7 = lVar7 + 1;
        __s2 = __s2 + 1;
      } while (lVar7 != 0);
    }
  }
  else if (__n != 0) {
    iVar4 = memcmp(__s1,__s2,__n);
    bVar3 = FUN_0093c3e0("guildJoinBonus");
    if (iVar4 != 0) {
      return 0;
    }
    goto LAB_00bd05e8;
  }
  bVar3 = FUN_0093c3e0("guildJoinBonus");
LAB_00bd05e8:
  return bVar2 & (bVar3 ^ 1);
}




void thunk_FUN_00bd0398(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined1 auStack_210 [32];
  undefined1 auStack_1f0 [16];
  undefined1 auStack_1e0 [16];
  undefined1 auStack_1d0 [240];
  undefined1 auStack_e0 [152];
  undefined4 uStack_48;
  long lStack_38;
  
  lVar1 = tpidr_el0;
  lStack_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00bd04d4();
  if ((uVar2 & 1) == 0) {
    FUN_0099cf94(param_1 + 0x98,0);
  }
  else {
    FUN_0099cf94(param_1 + 0x98,1);
    if (*(char *)(param_1 + 0xbc) != '\0') {
      FUN_00b63fc0(auStack_1f0);
      uVar3 = FUN_00e6ce7c("MENU_GUILD_TAB_JOIN_BONUS_POPUP_TITLE",0);
      FUN_00910394(auStack_1f0,uVar3);
      uVar3 = FUN_00e6ce7c("MENU_GUILD_TAB_JOIN_BONUS_POPUP_DIALOG",0);
      FUN_00910394(auStack_1e0,uVar3);
      uVar3 = FUN_00e6ce7c("GENERIC_DIALOG_OKAY",0);
      FUN_00910394(auStack_1d0,uVar3);
      FUN_008fce60(auStack_e0,&DAT_0313a880);
      uStack_48 = 0x3fd9999a;
      FUN_00f048e0(auStack_210,DAT_0313375c,auStack_1f0);
      FUN_00f04760(*(undefined8 *)(param_1 + 8),auStack_210,1);
      FUN_0093c2fc("guildJoinBonus",1);
      FUN_0096910c(auStack_1f0);
    }
  }
  if (*(long *)(lVar1 + 0x28) == lStack_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00bd05f8(long param_1)

{
  FUN_00bd0398(param_1 + -0x10);
  return;
}




void FUN_00bd0600(long param_1,long param_2)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  long local_240;
  ulong local_238;
  int local_230;
  undefined8 *local_228;
  undefined8 *local_220;
  undefined8 local_218;
  void *local_210;
  void *local_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  int local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  long local_1d0;
  byte local_1c8 [16];
  void *local_1b8;
  byte local_1b0;
  void *local_1a0;
  byte local_198;
  void *local_188;
  byte local_180;
  void *local_170;
  undefined1 auStack_158 [8];
  undefined1 auStack_150 [224];
  char *local_70;
  char *local_68;
  undefined4 local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  local_1d8 = 0;
  local_1d0 = 0;
  local_240 = 0;
  local_238 = 0;
  local_230 = 0;
  local_200 = 0;
  uStack_1f8 = 0;
  local_210 = (void *)0x0;
  local_208 = (void *)0x0;
  local_218 = 0;
  local_1f0 = 0x400;
  local_1e8 = 0;
  local_1e0 = 0;
  local_228 = operator_new(0x28);
  local_228[3] = 0;
  local_228[4] = 0;
  local_228[1] = 0x10000;
  local_228[2] = 0;
  *local_228 = 0;
  local_70 = (char *)(param_2 + 0x29);
  if ((*(byte *)(param_2 + 0x28) & 1) != 0) {
    local_70 = *(char **)(param_2 + 0x38);
  }
  local_220 = local_228;
  local_68 = local_70;
  FUN_008fd344(&local_240,&local_70);
  if ((local_1e8 != 0) || (local_230 != 3)) goto LAB_00bd085c;
  lVar3 = FUN_008fd190(&local_240,"results");
  if (local_240 + (local_238 & 0xffffffff) * 0x30 == lVar3) goto LAB_00bd085c;
  local_70 = "results";
  local_60 = 0x100005;
  local_68 = (char *)0x7;
  lVar3 = FUN_008feca4(&local_240,&local_70);
  if (*(int *)(lVar3 + 0x10) != 4) goto LAB_00bd085c;
  local_70 = "results";
  local_60 = 0x100005;
  local_68 = (char *)0x7;
  plVar4 = (long *)FUN_008feca4(&local_240,&local_70);
  lVar3 = plVar4[1];
  memset(auStack_150,0,0xd8);
  memset(local_1c8,0,0x60);
  FUN_00954ec0(auStack_158);
  FUN_00954d1c(local_1c8);
  FUN_00bd08c4(&local_1d8,(int)lVar3,local_1c8);
  FUN_00936630(auStack_158);
  if ((local_180 & 1) != 0) {
    operator_delete(local_170);
  }
  if ((local_198 & 1) != 0) {
    operator_delete(local_188);
  }
  if ((local_1b0 & 1) != 0) {
    operator_delete(local_1a0);
  }
  if ((local_1c8[0] & 1) != 0) {
    operator_delete(local_1b8);
  }
  if ((int)plVar4[1] != 0) {
    lVar5 = 0;
    lVar3 = 0;
    uVar6 = 0;
    do {
      FUN_00eab428(*plVar4 + lVar3,local_1d0 + lVar5);
      uVar6 = uVar6 + 1;
      lVar3 = lVar3 + 0x18;
      lVar5 = lVar5 + 0x158;
    } while (uVar6 < *(uint *)(plVar4 + 1));
  }
  lVar3 = FUN_008fd190(&local_240,"page");
  if (local_240 + (local_238 & 0xffffffff) * 0x30 == lVar3) {
LAB_00bd0848:
    *(undefined4 *)(param_1 + 0xb8) = 1;
  }
  else {
    local_70 = "page";
    local_60 = 0x100005;
    local_68 = (char *)0x4;
    lVar3 = FUN_008feca4(&local_240,&local_70);
    if ((*(byte *)(lVar3 + 0x11) >> 2 & 1) == 0) goto LAB_00bd0848;
  }
  FUN_00c2ad3c(*(undefined8 *)(param_1 + 8),&local_1d8);
LAB_00bd085c:
  puVar2 = local_220;
  if (local_220 != (undefined8 *)0x0) {
    FUN_008fd2c4(local_220);
    operator_delete(puVar2);
  }
  free(local_208);
  if (local_210 != (void *)0x0) {
    operator_delete(local_210);
  }
  FUN_00ab2d38(&local_1d8,1);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00bd08c4(uint *param_1,uint param_2,long param_3)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  if (param_2 != 0) {
    if (param_1[1] < param_2) {
      FUN_00ab2fa0(param_1,param_2);
    }
    uVar2 = *param_1;
    if (uVar2 < param_2) {
      lVar3 = (ulong)uVar2 * 0x158 + 0xa8;
      lVar4 = (ulong)param_2 - (ulong)uVar2;
      do {
        lVar1 = *(long *)(param_1 + 2) + lVar3;
        FUN_008fcdb8(lVar1 + -0xa8,param_3);
        FUN_008fcdb8(lVar1 + -0x90,param_3 + 0x18);
        FUN_008fcdb8(lVar1 + -0x78,param_3 + 0x30);
        FUN_008fcdb8(lVar1 + -0x60,param_3 + 0x48);
        uVar5 = *(undefined8 *)(param_3 + 0x60);
        *(undefined8 *)(lVar1 + -0x40) = *(undefined8 *)(param_3 + 0x68);
        *(undefined8 *)(lVar1 + -0x48) = uVar5;
        *(undefined8 *)(lVar1 + -0x38) = *(undefined8 *)(param_3 + 0x70);
        FUN_008fcdb8(lVar1 + -0x30,param_3 + 0x78);
        FUN_008fcdb8(lVar1 + -0x18,param_3 + 0x90);
        FUN_008fcdb8(lVar1,param_3 + 0xa8);
        FUN_008fcdb8(lVar1 + 0x18,param_3 + 0xc0);
        FUN_008fcdb8(lVar1 + 0x30,param_3 + 0xd8);
        FUN_008fcdb8(lVar1 + 0x48,param_3 + 0xf0);
        FUN_008fcdb8(lVar1 + 0x60,param_3 + 0x108);
        FUN_008fcdb8(lVar1 + 0x78,param_3 + 0x120);
        FUN_008fcdb8(lVar1 + 0x90,param_3 + 0x138);
        lVar4 = lVar4 + -1;
        lVar3 = lVar3 + 0x158;
        *(undefined1 *)(lVar1 + 0xa8) = *(undefined1 *)(param_3 + 0x150);
      } while (lVar4 != 0);
      uVar2 = *param_1;
    }
    if (param_2 < uVar2) {
      lVar4 = (ulong)uVar2 * 0x158 + (ulong)param_2 * -0x158;
      lVar3 = *(long *)(param_1 + 2) + (ulong)param_2 * 0x158 + 0x70;
      do {
        FUN_00936630(lVar3);
        if ((*(byte *)(lVar3 + -0x28) & 1) != 0) {
          operator_delete(*(void **)(lVar3 + -0x18));
        }
        if ((*(byte *)(lVar3 + -0x40) & 1) != 0) {
          operator_delete(*(void **)(lVar3 + -0x30));
        }
        if ((*(byte *)(lVar3 + -0x58) & 1) != 0) {
          operator_delete(*(void **)(lVar3 + -0x48));
        }
        if ((*(byte *)(lVar3 + -0x70) & 1) != 0) {
          operator_delete(*(void **)(lVar3 + -0x60));
        }
        lVar4 = lVar4 + -0x158;
        lVar3 = lVar3 + 0x158;
      } while (lVar4 != 0);
    }
    *param_1 = param_2;
    return;
  }
  FUN_00ab2d38(param_1);
  return;
}




void FUN_00bd0b10(long param_1)

{
  FUN_00bd0600(param_1 + -0x10);
  return;
}




void FUN_00bd0b18(long param_1)

{
  undefined8 uVar1;
  
  *(int *)(param_1 + 0xb8) = *(int *)(param_1 + 0xb8) + 1;
  FUN_00c2ad68(*(undefined8 *)(param_1 + 8));
  uVar1 = FUN_009580b8();
  FUN_00963534(uVar1,*(undefined4 *)(param_1 + 0xb8),param_1 + 0x28);
  return;
}




void FUN_00bd0b54(undefined8 param_1)

{
  FUN_00cbaf60(param_1,&DAT_03218f18);
  return;
}




void FUN_00bd0b60(void)

{
  FUN_00cbbf10(&DAT_03218f18);
  return;
}




void FUN_00bd0b6c(void)

{
  FUN_00cbaa3c(&DAT_03218f18);
  return;
}




void FUN_00bd0b78(long param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  *(undefined4 *)(param_1 + 0xb8) = 1;
  FUN_008fce60(param_1 + 0x28);
  FUN_008fce60(param_1 + 0x40,param_2 + 0x18);
  FUN_008fce60(param_1 + 0x58,(byte *)(param_2 + 0x30));
  FUN_008fce60(param_1 + 0x70,param_2 + 0x48);
  *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(param_2 + 0x60);
  *(undefined8 *)(param_1 + 0x8d) = *(undefined8 *)(param_2 + 0x65);
  FUN_00c2ad68(*(undefined8 *)(param_1 + 8));
  uVar1 = FUN_009580b8();
  FUN_00963534(uVar1,*(undefined4 *)(param_1 + 0xb8),param_1 + 0x28);
  if ((*(byte *)(param_2 + 0x48) & 1) == 0) {
    lVar2 = param_2 + 0x49;
  }
  else {
    lVar2 = *(long *)(param_2 + 0x58);
  }
  if ((*(byte *)(param_2 + 0x30) & 1) == 0) {
    lVar3 = param_2 + 0x31;
  }
  else {
    lVar3 = *(long *)(param_2 + 0x40);
  }
  FUN_009049e4(lVar2,lVar3,*(undefined4 *)(param_2 + 100),*(undefined4 *)(param_2 + 0x60));
  return;
}




long FUN_00bd0c3c(long param_1)

{
  return param_1 + 0x28;
}




void FUN_00bd0c44(void *param_1)

{
  FUN_00ba5060();
  operator_delete(param_1);
  return;
}




void FUN_00bd0c68(long param_1)

{
  FUN_00ba5060(param_1 + -0x10);
  return;
}




void FUN_00bd0c70(long param_1)

{
  FUN_00ba5060((void *)(param_1 + -0x10));
  operator_delete((void *)(param_1 + -0x10));
  return;
}




void FUN_00bd0c98(long param_1)

{
  long lVar1;
  byte local_40 [16];
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_008fa54c(local_40,&DAT_01e277f2);
  FUN_008fce60(param_1,local_40);
  if ((local_40[0] & 1) != 0) {
    operator_delete(local_30);
  }
  FUN_008fa54c(local_40,&DAT_01e277f2);
  FUN_008fce60(param_1 + 0x18,local_40);
  if ((local_40[0] & 1) != 0) {
    operator_delete(local_30);
  }
  FUN_008fa54c(local_40,&DAT_01e277f2);
  FUN_008fce60(param_1 + 0x30,local_40);
  if ((local_40[0] & 1) != 0) {
    operator_delete(local_30);
  }
  FUN_008fce60(param_1 + 0x48,&DAT_03210778);
  *(undefined1 *)(param_1 + 0x6c) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0xffffffff;
  *(undefined4 *)(param_1 + 100) = 0xfffffffe;
  *(undefined4 *)(param_1 + 0x68) = 3;
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00bd0d98(undefined8 *param_1)

{
  long lVar1;
  void *pvVar2;
  undefined8 *local_48;
  code *pcStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR___cxa_pure_virtual_027ecfe0;
  pvVar2 = operator_new(0x3270);
  FUN_00c2b108();
  param_1[1] = pvVar2;
  *(undefined8 **)((long)pvVar2 + 0x9b8) = param_1;
  FUN_00cdfc40(param_1 + 2);
  *param_1 = &PTR_FUN_027ecf78;
  param_1[2] = &PTR_FUN_027ecfb0;
  pcStack_40 = thunk_FUN_00bd0f54;
  local_48 = param_1;
  FUN_00f02e98(0x3f000000,&local_48,0,1);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00bd0e4c(undefined8 *param_1)

{
  long lVar1;
  undefined8 *local_48;
  code *pcStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_027ecf78;
  param_1[2] = &PTR_FUN_027ecfb0;
  pcStack_40 = thunk_FUN_00bd0f54;
  local_48 = param_1;
  FUN_00f03390(&local_48);
  FUN_00cdfcc0(param_1 + 2);
  *param_1 = &PTR___cxa_pure_virtual_027ecfe0;
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




void FUN_00bd0ef8(long param_1)

{
  FUN_00bd0e4c(param_1 + -0x10);
  return;
}




void FUN_00bd0f00(void *param_1)

{
  FUN_00bd0e4c();
  operator_delete(param_1);
  return;
}




void FUN_00bd0f24(long param_1)

{
  FUN_00bd0e4c((void *)(param_1 + -0x10));
  operator_delete((void *)(param_1 + -0x10));
  return;
}




void FUN_00bd0f54(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar2 = FUN_00ce0564();
  lVar4 = (long)*(int *)(lVar2 + 0x38);
  if (0 < *(int *)(lVar2 + 0x38)) {
    lVar1 = 0;
    if (lVar4 != 0) {
      lVar1 = *(long *)(lVar2 + 0x30) / lVar4;
    }
    lVar3 = FUN_00e85318(0);
    lVar3 = (lVar4 + lVar1 * lVar4) - lVar3;
    FUN_00c2b7ac(*(undefined8 *)(param_1 + 8),lVar3);
    if ((lVar3 < 1) && (*(char *)(lVar2 + 0x3d) != '\0')) {
      FUN_00ce048c();
      return;
    }
  }
  return;
}




void FUN_00bd0fe8(long param_1)

{
  char cVar1;
  undefined1 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  
  lVar4 = FUN_00ce0564();
  cVar1 = *(char *)(lVar4 + 0x3d);
  uVar7 = *(undefined8 *)(param_1 + 8);
  lVar4 = FUN_00ce0564();
  if (cVar1 != '\0') {
    lVar6 = (long)*(int *)(lVar4 + 0x38);
    lVar3 = 0;
    if (lVar6 != 0) {
      lVar3 = *(long *)(lVar4 + 0x30) / lVar6;
    }
    lVar4 = FUN_00e85318(0);
    FUN_00c2b834(uVar7,(lVar6 + lVar3 * lVar6) - lVar4);
    return;
  }
  uVar2 = *(undefined1 *)(lVar4 + 0x3c);
  uVar5 = FUN_00ce0564();
  FUN_00c2b948(uVar7,uVar2,uVar5);
  return;
}




void thunk_FUN_00bd0f54(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar2 = FUN_00ce0564();
  lVar4 = (long)*(int *)(lVar2 + 0x38);
  if (0 < *(int *)(lVar2 + 0x38)) {
    lVar1 = 0;
    if (lVar4 != 0) {
      lVar1 = *(long *)(lVar2 + 0x30) / lVar4;
    }
    lVar3 = FUN_00e85318(0);
    lVar3 = (lVar4 + lVar1 * lVar4) - lVar3;
    FUN_00c2b7ac(*(undefined8 *)(param_1 + 8),lVar3);
    if ((lVar3 < 1) && (*(char *)(lVar2 + 0x3d) != '\0')) {
      FUN_00ce048c();
      return;
    }
  }
  return;
}

