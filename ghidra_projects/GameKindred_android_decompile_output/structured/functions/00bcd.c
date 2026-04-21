// functions/00bcd — 29 functions
#include "libGameKindred.h"




undefined8 FUN_00bcd110(long param_1,uint param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  char *pcVar3;
  
  if (param_2 != 0xffff) {
    uVar2 = 0;
    do {
      if ((*(uint *)(param_1 + 0x1fc + uVar2 * 4 + -0x10) == param_2) &&
         (*(char *)(param_1 + 0x1fc + uVar2) != '\0')) {
        return 0;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < 4);
    uVar2 = 0;
    pcVar3 = (char *)(param_1 + 0x2f0);
    while (((*pcVar3 == '\0' || (pcVar3[3] == '\0')) || (*(ushort *)(pcVar3 + 9) != param_2))) {
      uVar2 = uVar2 + 1;
      pcVar3 = pcVar3 + 0xa6;
      if (0xf < uVar2) {
        uVar1 = FUN_009e0b58(*(undefined8 *)(param_1 + 0x13c8));
        return uVar1;
      }
    }
  }
  return 0;
}




undefined4 FUN_00bcd194(long param_1,uint param_2)

{
  undefined4 uVar1;
  ulong uVar2;
  char *pcVar3;
  
  uVar1 = 0;
  if (param_2 != 0xffff) {
    uVar2 = 0;
    do {
      if ((*(uint *)(param_1 + 0x1fc + uVar2 * 4 + -0x10) == param_2) &&
         (*(char *)(param_1 + 0x1fc + uVar2) != '\0')) {
        return 0;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < 4);
    uVar2 = 0;
    pcVar3 = (char *)(param_1 + 0x2f0);
    do {
      if (((*pcVar3 != '\0') && (pcVar3[3] != '\0')) && (*(ushort *)(pcVar3 + 9) == param_2)) {
        return 0;
      }
      uVar2 = uVar2 + 1;
      pcVar3 = pcVar3 + 0xa6;
    } while (uVar2 < 0x10);
    uVar1 = 1;
  }
  return uVar1;
}




void FUN_00bcd220(long param_1,long param_2)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  ulong uVar4;
  
  iVar1 = *(int *)(param_1 + 0x1414);
  if (*(char *)(param_1 + 0xa3c) == '\x01') {
    uVar4 = 0;
    do {
      if ((*(int *)(param_1 + 0x1fc + uVar4 * 4 + -0x10) == iVar1) &&
         (*(char *)(param_1 + 0x1fc + uVar4) != '\0')) {
        bVar2 = false;
        goto LAB_00bcd2c0;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < 4);
    bVar2 = iVar1 != 0xffff;
LAB_00bcd2c0:
    if (*(char *)(param_2 + 0xa5) != '\0') {
      bVar2 = (bool)(bVar2 & *(char *)(param_2 + 0xa3) != '\0');
    }
  }
  else {
    uVar4 = FUN_00bcd110(param_1,iVar1);
    bVar2 = false;
    if (((uVar4 & 1) != 0) && (bVar2 = false, *(char *)(param_2 + 3) == '\0')) {
      bVar2 = *(char *)(param_2 + 0xa3) != '\0';
    }
  }
  uVar4 = FUN_009e0b58(*(undefined8 *)(param_1 + 0x13c8),*(undefined4 *)(param_1 + 0x1414));
  if ((uVar4 & 1) == 0) {
    bVar3 = *(int *)(param_1 + 0x1414) == 0xffff;
  }
  else {
    bVar3 = true;
  }
  FUN_00c24e4c(*(undefined8 *)(param_1 + 8),bVar2,*(char *)(param_1 + 0xa3c) == '\x01',
               *(char *)(param_2 + 0xa5) != '\0',bVar3);
  return;
}




void FUN_00bcd338(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 local_78;
  void *local_70;
  undefined8 local_68;
  void *local_60;
  undefined8 local_58;
  void *local_50;
  undefined8 local_48;
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00e6ce7c("MENU_DRAFT_LOBBY_LOCK_IN_HERO_MESSAGE",0);
  thunk_FUN_00e7051c(&local_48,uVar2);
  if (*(ushort *)(param_2 + 9) != 0xffff) {
    local_58 = CONCAT44(local_58._4_4_,(uint)*(ushort *)(param_2 + 9));
    puVar3 = (undefined8 *)FUN_00ce9ba0(&local_58);
    lVar4 = FUN_00ce9cb8(*puVar3);
    if (lVar4 == 0) {
      puVar3 = &DAT_03210450;
    }
    else {
      puVar3 = (undefined8 *)FUN_00e6ce7c(*(undefined8 *)(lVar4 + 0x28),0);
    }
    uVar2 = thunk_FUN_00e7051c(&local_58,puVar3);
    FUN_00bcd524(uVar2,&local_48,param_2);
    FUN_00e705c8(&local_68,"[HERO NAME]");
    FUN_00e71248(&local_48,0,&local_68,&local_58);
    if (local_60 != (void *)0x0) {
      operator_delete__(local_60);
      local_68 = 0;
      local_60 = (void *)0x0;
    }
    FUN_00e705c8(&local_68,&DAT_01b9db64);
    FUN_00e705c8(&local_78,"{210, 180, 39, 255}");
    FUN_00e71248(&local_48,4,&local_68,&local_78);
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
    FUN_00e705c8(&local_68,"[/EM]");
    FUN_00e705c8(&local_78,&DAT_01bd12d3);
    FUN_00e71248(&local_48,0x16,&local_68,&local_78);
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
    if ((*(byte *)(param_1 + 0x13d0) & 1) == 0) {
      param_1 = param_1 + 0x13d1;
    }
    else {
      param_1 = *(long *)(param_1 + 0x13e0);
    }
    FUN_0090dd30(param_1,&local_48);
    if (local_50 != (void *)0x0) {
      operator_delete__(local_50);
      local_58 = 0;
      local_50 = (void *)0x0;
    }
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




void FUN_00bcd524(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 local_68;
  void *local_60;
  undefined8 local_58;
  void *local_50;
  undefined8 local_48;
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  thunk_FUN_00e7051c(&local_48,&DAT_03210450);
  FUN_00e705a0(&local_48,param_3 + 0x11);
  FUN_00e705c8(&local_58,"[PLAYER NAME]");
  FUN_00e71248(param_2,0,&local_58,&local_48);
  if (local_50 != (void *)0x0) {
    operator_delete__(local_50);
    local_58 = 0;
    local_50 = (void *)0x0;
  }
  FUN_00e705c8(&local_58,&DAT_01b9db64);
  FUN_00e705c8(&local_68,"{68, 156, 188, 255}");
  FUN_00e71248(param_2,0,&local_58,&local_68);
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
  FUN_00e705c8(&local_58,"[/EM]");
  FUN_00e705c8(&local_68,&DAT_01bd12d3);
  FUN_00e71248(param_2,0,&local_58,&local_68);
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




void FUN_00bcd67c(long param_1,undefined8 param_2,long param_3)

{
  byte bVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  undefined8 local_58;
  void *local_50;
  undefined8 local_48;
  void *local_40;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  bVar1 = *(byte *)(param_3 + 0xa1);
  uVar4 = FUN_00c243f0(*(undefined8 *)(param_1 + 8));
  uVar2 = 0;
  if (uVar4 != 0) {
    uVar2 = bVar1 / uVar4;
  }
  thunk_FUN_00e7051c(&local_48,&DAT_03210450);
  FUN_00e70e18(&local_48,&DAT_01bb6d43,((uint)bVar1 - uVar2 * uVar4) + 1);
  FUN_00e705c8(&local_58,"[NUM]");
  FUN_00e71248(param_2,0,&local_58,&local_48);
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
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00bcd744(long param_1,int param_2,long param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 local_80;
  void *local_78;
  undefined8 local_70;
  void *local_68;
  undefined8 *local_60;
  void *local_58;
  undefined8 local_50;
  void *local_48;
  int local_3c;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  local_3c = param_2;
  uVar3 = FUN_00e6ce7c("MENU_DRAFT_LOBBY_BAN_HERO_MESSAGE",0);
  thunk_FUN_00e7051c(&local_50,uVar3);
  if (param_2 != 0xffff) {
    local_60 = &local_70;
    local_70 = CONCAT44(local_70._4_4_,(uint)*(byte *)(param_3 + 1));
    lVar4 = FUN_00bceb18(param_1 + 0x1358,&local_70,"",&local_60,&local_80);
    iVar1 = *(int *)(lVar4 + 0x28);
    if (iVar1 < 3) {
      if (0 < iVar1) {
        lVar6 = 0;
        do {
          if (*(int *)(*(long *)(lVar4 + 0x30) + lVar6 * 4) == param_2) goto LAB_00bcd968;
          lVar6 = lVar6 + 1;
        } while (lVar6 < iVar1);
      }
      FUN_0091f584((int *)(lVar4 + 0x28),&local_3c);
      puVar5 = (undefined8 *)FUN_00ce9ba0(&local_3c);
      lVar4 = FUN_00ce9cb8(*puVar5);
      if (lVar4 == 0) {
        puVar5 = &DAT_03210450;
      }
      else {
        puVar5 = (undefined8 *)FUN_00e6ce7c(*(undefined8 *)(lVar4 + 0x28),0);
      }
      uVar3 = thunk_FUN_00e7051c(&local_60,puVar5);
      FUN_00bcd524(uVar3,&local_50,param_3);
      FUN_00e705c8(&local_70,"[HERO NAME]");
      FUN_00e71248(&local_50,0,&local_70,&local_60);
      if (local_68 != (void *)0x0) {
        operator_delete__(local_68);
        local_70 = 0;
        local_68 = (void *)0x0;
      }
      FUN_00e705c8(&local_70,&DAT_01b9db64);
      FUN_00e705c8(&local_80,"{210, 180, 39, 255}");
      FUN_00e71248(&local_50,4,&local_70,&local_80);
      if (local_78 != (void *)0x0) {
        operator_delete__(local_78);
        local_80 = 0;
        local_78 = (void *)0x0;
      }
      if (local_68 != (void *)0x0) {
        operator_delete__(local_68);
        local_70 = 0;
        local_68 = (void *)0x0;
      }
      FUN_00e705c8(&local_70,"[/EM]");
      FUN_00e705c8(&local_80,&DAT_01bd12d3);
      FUN_00e71248(&local_50,0x16,&local_70,&local_80);
      if (local_78 != (void *)0x0) {
        operator_delete__(local_78);
        local_80 = 0;
        local_78 = (void *)0x0;
      }
      if (local_68 != (void *)0x0) {
        operator_delete__(local_68);
        local_70 = 0;
        local_68 = (void *)0x0;
      }
      if ((*(byte *)(param_1 + 0x13d0) & 1) == 0) {
        param_1 = param_1 + 0x13d1;
      }
      else {
        param_1 = *(long *)(param_1 + 0x13e0);
      }
      FUN_0090dd30(param_1,&local_50);
      if (local_58 != (void *)0x0) {
        operator_delete__(local_58);
        local_60 = (undefined8 *)0x0;
        local_58 = (void *)0x0;
      }
    }
  }
LAB_00bcd968:
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




void FUN_00bcd9a0(long param_1,int param_2)

{
  long lVar1;
  
  if ((*(char *)(param_1 + 0xa3c) == '\x03') && (param_2 != 0xffff)) {
    return;
  }
  if ((*(int *)(param_1 + 0x1414) != 0xffff) &&
     (lVar1 = FUN_00c249c0(*(undefined8 *)(param_1 + 8)), lVar1 != 0)) {
    FUN_00aa9b14();
  }
  *(int *)(param_1 + 0x1414) = param_2;
  FUN_00ecf888(*(long *)(param_1 + 8) + 0x1ec0,param_2 != 0xffff);
  if ((*(int *)(param_1 + 0x1414) != 0xffff) &&
     (lVar1 = FUN_00c249c0(*(undefined8 *)(param_1 + 8)), lVar1 != 0)) {
    FUN_00aa9b78();
    FUN_00aa12a8(0x3f800000,"build://Sounds/UI.assetbundle/ui_character_lobby_tap_hero.mp3",0,0);
    FUN_00c23fc4(*(undefined8 *)(param_1 + 8));
  }
  FUN_00bcd220(param_1,param_1 + 0x1294);
  if (*(byte *)(param_1 + 0xa3c) == 1) {
    if (*(char *)(param_1 + 0x1339) != '\0') {
      FUN_009e0c88(*(undefined8 *)(param_1 + 0x13c8),*(undefined4 *)(param_1 + 0x1414));
      return;
    }
  }
  else if (1 < *(byte *)(param_1 + 0xa3c) - 1) {
    return;
  }
  FUN_009e0bd4(*(undefined8 *)(param_1 + 0x13c8),param_2);
  return;
}




void FUN_00bcdabc(long param_1)

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




void FUN_00bcdb28(long param_1,undefined8 param_2)

{
  uint uVar1;
  ulong uVar2;
  
  uVar1 = FUN_00f04924(param_2);
  uVar2 = FUN_00ceac94();
  if (((uVar2 & 1) != 0) && (*(int *)(param_1 + (ulong)uVar1 * 8 + 0x1370) != 0xffff)) {
    uVar1 = 0xff;
    FUN_00cbe2dc(*(undefined8 *)(param_1 + 0x13f8),0xff,*(undefined4 *)(param_1 + 0x140c));
  }
  FUN_009e0cac(*(undefined8 *)(param_1 + 0x13c8),uVar1);
  return;
}




void FUN_00bcdb90(long param_1)

{
  FUN_009e0cac(*(undefined8 *)(param_1 + 0x13c8));
  return;
}




void FUN_00bcdb98(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00f04924(param_2);
  FUN_009e0cb4(*(undefined8 *)(param_1 + 0x13c8),uVar1);
  return;
}




void FUN_00bcdbc8(long param_1)

{
  FUN_009e0cb4(*(undefined8 *)(param_1 + 0x13c8));
  return;
}




void FUN_00bcdbd0(long param_1)

{
  *(undefined8 *)(param_1 + 0x13f8) = 0;
  return;
}




void FUN_00bcdbd8(long param_1)

{
  *(uint *)(*(long *)(param_1 + 8) + 0x32c) = *(uint *)(*(long *)(param_1 + 8) + 0x32c) | 4;
  return;
}




void FUN_00bcdbec(long param_1)

{
  *(uint *)(*(long *)(param_1 + 8) + 0x32c) = *(uint *)(*(long *)(param_1 + 8) + 0x32c) & 0xfffffffb
  ;
  return;
}




void FUN_00bcdc00(long param_1)

{
  FUN_009e0c9c(*(undefined8 *)(param_1 + 0x13c8));
  return;
}




void FUN_00bcdc08(long param_1)

{
  FUN_009e0c9c(*(undefined8 *)(param_1 + 0x13b8));
  return;
}




void FUN_00bcdc10(void)

{
  return;
}




void FUN_00bcdc14(void)

{
  return;
}




void thunk_FUN_00bcd9a0(long param_1,int param_2)

{
  long lVar1;
  
  if ((*(char *)(param_1 + 0xa3c) == '\x03') && (param_2 != 0xffff)) {
    return;
  }
  if ((*(int *)(param_1 + 0x1414) != 0xffff) &&
     (lVar1 = FUN_00c249c0(*(undefined8 *)(param_1 + 8)), lVar1 != 0)) {
    FUN_00aa9b14();
  }
  *(int *)(param_1 + 0x1414) = param_2;
  FUN_00ecf888(*(long *)(param_1 + 8) + 0x1ec0,param_2 != 0xffff);
  if ((*(int *)(param_1 + 0x1414) != 0xffff) &&
     (lVar1 = FUN_00c249c0(*(undefined8 *)(param_1 + 8)), lVar1 != 0)) {
    FUN_00aa9b78();
    FUN_00aa12a8(0x3f800000,"build://Sounds/UI.assetbundle/ui_character_lobby_tap_hero.mp3",0,0);
    FUN_00c23fc4(*(undefined8 *)(param_1 + 8));
  }
  FUN_00bcd220(param_1,param_1 + 0x1294);
  if (*(byte *)(param_1 + 0xa3c) == 1) {
    if (*(char *)(param_1 + 0x1339) != '\0') {
      FUN_009e0c88(*(undefined8 *)(param_1 + 0x13c8),*(undefined4 *)(param_1 + 0x1414));
      return;
    }
  }
  else if (1 < *(byte *)(param_1 + 0xa3c) - 1) {
    return;
  }
  FUN_009e0bd4(*(undefined8 *)(param_1 + 0x13c8),param_2);
  return;
}




undefined8 FUN_00bcdc1c(long param_1,int param_2)

{
  ulong uVar1;
  
  uVar1 = 0;
  while ((*(int *)(param_1 + 0x1fc + uVar1 * 4 + -0x10) != param_2 ||
         (*(char *)(param_1 + 0x1fc + uVar1) == '\0'))) {
    uVar1 = uVar1 + 1;
    if (3 < uVar1) {
      return 0;
    }
  }
  return 1;
}




undefined8 FUN_00bcdc58(long param_1,uint param_2)

{
  ulong uVar1;
  char *pcVar2;
  
  uVar1 = 0;
  pcVar2 = (char *)(param_1 + 0x2f0);
  while (((*pcVar2 == '\0' || (pcVar2[3] == '\0')) || (*(ushort *)(pcVar2 + 9) != param_2))) {
    uVar1 = uVar1 + 1;
    pcVar2 = pcVar2 + 0xa6;
    if (0xf < uVar1) {
      return 0;
    }
  }
  return 1;
}




void FUN_00bcdc9c(float param_1,long param_2)

{
  ulong uVar1;
  char *pcVar2;
  int iVar3;
  float fVar4;
  
  fVar4 = *(float *)(param_2 + 0x1410) - param_1;
  if (fVar4 <= 0.0) {
    fVar4 = 0.0;
  }
  *(float *)(param_2 + 0x1410) = fVar4;
  if (*(char *)(param_2 + 0x1337) == '\0') {
    return;
  }
  fVar4 = fVar4 + -1.0;
  param_1 = fVar4 + param_1;
  if (((10.0 < fVar4) || (fVar4 == 0.0)) || (param_1 <= 10.0)) {
    if ((5.0 < fVar4) || (param_1 <= 5.0)) {
      if (fVar4 <= 0.0) {
        return;
      }
      if (4.0 < fVar4) {
        return;
      }
      iVar3 = 0;
      do {
        if ((fVar4 <= (float)iVar3) && ((float)iVar3 < param_1)) {
          FUN_00aa12a8(0x3f800000,"build://Sounds/UI.assetbundle/ui_drafting_timer_count_down.mp3",0
                       ,0);
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 != 5);
      return;
    }
    uVar1 = FUN_0092e7ac();
    if ((uVar1 & 1) != 0) {
      thunk_FUN_00eca230();
    }
    pcVar2 = "VO_Vainglory_Draft_5_Seconds";
  }
  else {
    pcVar2 = "VO_Vainglory_Draft_10_Seconds";
  }
  FUN_00aa132c(pcVar2);
  return;
}




void FUN_00bcddac(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  if (*(int *)(param_1 + 0x1414) != 0xffff) {
    if (*(char *)(param_1 + 0x1337) == '\0') {
      if ((*(char *)(param_1 + 0x1339) == '\0') && (*(char *)(param_1 + 0xa3c) == '\x01')) {
        FUN_009e0c94(*(undefined8 *)(param_1 + 0x13c8));
        return;
      }
      FUN_009e0bd4(*(undefined8 *)(param_1 + 0x13c8));
      return;
    }
    puVar1 = (undefined8 *)FUN_00ce9ba0(param_1 + 0x1414);
    if ((*(char *)(param_1 + 0x1339) != '\0') && (*(char *)(param_1 + 0xa3c) == '\x01')) {
      thunk_FUN_00926360(*(undefined8 *)(param_1 + 0x13c8));
      uVar4 = *puVar1;
      uVar2 = FUN_00ceace8();
      FUN_00908034(uVar4,uVar2,*(undefined1 *)(param_1 + 0xa3d));
      return;
    }
    if ((*(char *)(param_1 + 0xa3c) == '\x02') &&
       (uVar3 = FUN_00bcd110(param_1,*(undefined4 *)(param_1 + 0x1414)), (uVar3 & 1) != 0)) {
      thunk_FUN_00926108(*(undefined8 *)(param_1 + 0x13c8));
      uVar4 = *puVar1;
      uVar2 = FUN_00ceace8();
      FUN_009083a8(uVar4,uVar2,*(undefined1 *)(param_1 + 0xa3d));
      return;
    }
  }
  return;
}




void FUN_00bcdeb4(long *param_1,int param_2)

{
  int iVar1;
  bool bVar2;
  ulong uVar3;
  
  if (param_1 + (long)param_2 * 5 + 5 != (long *)param_1[4]) {
    if (*(char *)((long)param_1 + (long)param_2 * 0x28 + 0x4a) == '\0') {
      bVar2 = false;
    }
    else {
      bVar2 = *(char *)((long)param_1 + 0x1297) != '\0';
    }
    iVar1 = *(int *)((long)param_1 + 0x141c);
    if (iVar1 != -1) {
      FUN_00bd589c(param_1 + (long)iVar1 * 5 + 5,0,0);
      *(undefined4 *)((long)param_1 + 0x141c) = 0xffffffff;
    }
    if ((iVar1 != param_2) &&
       (uVar3 = FUN_00bd589c(param_1 + (long)param_2 * 5 + 5,1,bVar2), (uVar3 & 1) != 0)) {
      *(int *)((long)param_1 + 0x141c) = param_2;
    }
    FUN_00bcc40c(param_1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00bcdf2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x58))(param_1);
  return;
}




void FUN_00bcdf98(long param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = FUN_00c243f0(*(undefined8 *)(param_1 + 8));
  uVar1 = 0;
  if (uVar2 != 0) {
    uVar1 = param_2 / uVar2;
  }
  FUN_009e0a40(*(undefined8 *)(param_1 + 0x13c8),*(undefined4 *)(param_1 + 0x1400),
               *(undefined1 *)(param_1 + (ulong)(param_2 - uVar1 * uVar2) * 0x28 + 0x48));
  FUN_00ceace8();
  FUN_00908588();
  return;
}




void FUN_00bcdfec(long param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = FUN_00c243f0(*(undefined8 *)(param_1 + 8));
  uVar1 = 0;
  if (uVar2 != 0) {
    uVar1 = param_2 / uVar2;
  }
  FUN_009e0a4c(*(undefined8 *)(param_1 + 0x13c8),*(undefined4 *)(param_1 + 0x1400),
               *(undefined1 *)(param_1 + (ulong)(param_2 - uVar1 * uVar2) * 0x28 + 0x48));
  return;
}




void thunk_FUN_00bcdc9c(float param_1,long param_2)

{
  ulong uVar1;
  char *pcVar2;
  int iVar3;
  float fVar4;
  
  fVar4 = *(float *)(param_2 + 0x1410) - param_1;
  if (fVar4 <= 0.0) {
    fVar4 = 0.0;
  }
  *(float *)(param_2 + 0x1410) = fVar4;
  if (*(char *)(param_2 + 0x1337) == '\0') {
    return;
  }
  fVar4 = fVar4 + -1.0;
  param_1 = fVar4 + param_1;
  if (((10.0 < fVar4) || (fVar4 == 0.0)) || (param_1 <= 10.0)) {
    if ((5.0 < fVar4) || (param_1 <= 5.0)) {
      if (fVar4 <= 0.0) {
        return;
      }
      if (4.0 < fVar4) {
        return;
      }
      iVar3 = 0;
      do {
        if ((fVar4 <= (float)iVar3) && ((float)iVar3 < param_1)) {
          FUN_00aa12a8(0x3f800000,"build://Sounds/UI.assetbundle/ui_drafting_timer_count_down.mp3",0
                       ,0);
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 != 5);
      return;
    }
    uVar1 = FUN_0092e7ac();
    if ((uVar1 & 1) != 0) {
      thunk_FUN_00eca230();
    }
    pcVar2 = "VO_Vainglory_Draft_5_Seconds";
  }
  else {
    pcVar2 = "VO_Vainglory_Draft_10_Seconds";
  }
  FUN_00aa132c(pcVar2);
  return;
}

