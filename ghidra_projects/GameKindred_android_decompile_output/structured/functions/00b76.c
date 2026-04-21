// functions/00b76 — 12 functions
#include "libGameKindred.h"




void thunk_FUN_00b76e38(long param_1)

{
  uint *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if (*(char *)(param_1 + 0x138bd) != '\0') {
    puVar1 = (uint *)(param_1 + 0x138b8);
    if ((-1 < (int)*puVar1) && (*puVar1 < *(uint *)(param_1 + 0x5228))) {
      uVar2 = FUN_009580c4();
      if ((uVar2 & 1) != 0) {
        FUN_009580b8();
        uVar3 = FUN_0095fdf0();
        uVar4 = FUN_00f08be8(*(long *)(*(long *)(param_1 + 0x5230) + (ulong)*puVar1 * 8) + 0x248);
        uVar2 = FUN_00e70b34(uVar3,uVar4);
        if ((uVar2 & 1) == 0) {
          uVar3 = FUN_009580b8();
          FUN_009639d8(uVar3,*(long *)(*(long *)(param_1 + 0x5230) + (ulong)*puVar1 * 8) + 0xbb0);
        }
        else {
          FUN_00b752e0(param_1);
        }
      }
      FUN_00b74b64(param_1,0,*puVar1);
      return;
    }
  }
  return;
}




void thunk_FUN_00b76fa8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uStack_150;
  void *pvStack_148;
  undefined8 uStack_140;
  void *pvStack_138;
  undefined **ppuStack_130;
  undefined1 auStack_128 [16];
  long lStack_118;
  code *pcStack_110;
  long lStack_100;
  undefined8 uStack_e0;
  void *pvStack_d8;
  byte bStack_d0;
  void *pvStack_c0;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_88;
  ulong uStack_80;
  void *pvStack_78;
  byte bStack_70;
  undefined7 uStack_6f;
  void *pvStack_60;
  undefined4 uStack_58;
  undefined8 uStack_54;
  long lStack_48;
  
  lVar1 = tpidr_el0;
  lStack_48 = *(long *)(lVar1 + 0x28);
  FUN_00b26098(&ppuStack_130);
  uVar2 = FUN_00e6ce7c("MAIN_SEASON_TEAM_OVERVIEW_TOOLTIP",0);
  thunk_FUN_00e7051c(&uStack_140,uVar2);
  do {
    FUN_00e705c8(&uStack_80,"[SEASON_NAME]");
    FUN_00cb488c(&uStack_150,0,0,0);
    uVar3 = FUN_00e71248(&uStack_140,0,&uStack_80,&uStack_150);
    if (pvStack_148 != (void *)0x0) {
      operator_delete__(pvStack_148);
      uStack_150 = 0;
      pvStack_148 = (void *)0x0;
    }
    if (pvStack_78 != (void *)0x0) {
      operator_delete__(pvStack_78);
      uStack_80 = 0;
      pvStack_78 = (void *)0x0;
    }
  } while ((uVar3 & 1) != 0);
  thunk_FUN_00e7051c(&uStack_80,&uStack_140);
  FUN_008fcdb8(&bStack_70,&DAT_0320ffa8);
  uStack_58 = 1;
  uStack_54 = 0x41a00000;
  FUN_009c82b4(auStack_128,&uStack_80);
  if ((bStack_70 & 1) != 0) {
    operator_delete(pvStack_60);
  }
  if (pvStack_78 != (void *)0x0) {
    operator_delete__(pvStack_78);
    uStack_80 = 0;
    pvStack_78 = (void *)0x0;
  }
  lStack_100 = param_1 + 0x133e0;
  uStack_88 = 2;
  uStack_a0 = 0x3dcccccd;
  uVar3 = FUN_0092ea9c();
  uStack_9c = 0x447a0000;
  if ((uVar3 & 1) == 0) {
    uStack_9c = 0x44480000;
  }
  uVar2 = FUN_00e6ce7c("GENERIC_DIALOG_MORE_INFO",0);
  FUN_00910394(&uStack_e0,uVar2);
  pcStack_110 = FUN_00b771ec;
  lStack_118 = param_1;
  FUN_008fa54c(&uStack_80,"teamOverviewSeasonLabel");
  FUN_00b28094(param_1 + 0x137b8,&uStack_80,&ppuStack_130);
  if ((uStack_80 & 1) != 0) {
    operator_delete((void *)CONCAT71(uStack_6f,bStack_70));
  }
  if (pvStack_138 != (void *)0x0) {
    operator_delete__(pvStack_138);
    uStack_140 = 0;
    pvStack_138 = (void *)0x0;
  }
  ppuStack_130 = &PTR_FUN_027de7f0;
  if ((bStack_d0 & 1) != 0) {
    operator_delete(pvStack_c0);
  }
  if (pvStack_d8 != (void *)0x0) {
    operator_delete__(pvStack_d8);
    uStack_e0 = 0;
    pvStack_d8 = (void *)0x0;
  }
  FUN_009c8464(auStack_128,1);
  if (*(long *)(lVar1 + 0x28) == lStack_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b76d50(long param_1)

{
  undefined4 in_w4;
  
  if (*(char *)(param_1 + 0x138bd) != '\0') {
    FUN_00b74b64(param_1,1,in_w4);
    return;
  }
  return;
}




void FUN_00b76d70(uint *param_1,undefined8 *param_2)

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
    FUN_00b77b00(param_1,uVar1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




undefined1 FUN_00b76df8(long param_1)

{
  return *(undefined1 *)(param_1 + 0x138bd);
}




void FUN_00b76e08(long param_1)

{
  if (*(char *)(param_1 + 0x138bd) != '\0') {
    FUN_00b74b64(param_1,1);
    return;
  }
  return;
}




void FUN_00b76e24(long param_1)

{
  FUN_00b74b64(param_1,0,*(undefined4 *)(param_1 + 0x138b8));
  return;
}




void FUN_00b76e38(long param_1)

{
  uint *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if (*(char *)(param_1 + 0x138bd) != '\0') {
    puVar1 = (uint *)(param_1 + 0x138b8);
    if ((-1 < (int)*puVar1) && (*puVar1 < *(uint *)(param_1 + 0x5228))) {
      uVar2 = FUN_009580c4();
      if ((uVar2 & 1) != 0) {
        FUN_009580b8();
        uVar3 = FUN_0095fdf0();
        uVar4 = FUN_00f08be8(*(long *)(*(long *)(param_1 + 0x5230) + (ulong)*puVar1 * 8) + 0x248);
        uVar2 = FUN_00e70b34(uVar3,uVar4);
        if ((uVar2 & 1) == 0) {
          uVar3 = FUN_009580b8();
          FUN_009639d8(uVar3,*(long *)(*(long *)(param_1 + 0x5230) + (ulong)*puVar1 * 8) + 0xbb0);
        }
        else {
          FUN_00b752e0(param_1);
        }
      }
      FUN_00b74b64(param_1,0,*puVar1);
      return;
    }
  }
  return;
}




void FUN_00b76f08(long param_1)

{
  FUN_00b32074(param_1 + 0xb6f8,7);
  FUN_00b742d4(param_1,param_1 + 0xb6f8,param_1 + 200,1,0);
  return;
}




void FUN_00b76f4c(long param_1)

{
  FUN_00b32074(param_1 + 0xb6f8,8);
  FUN_00b742d4(param_1,param_1 + 0xb6f8,param_1 + 200,1,0);
  return;
}




void FUN_00b76f90(long param_1)

{
  FUN_00b742d4(param_1,param_1 + 0xb6f8,param_1 + 200,0,0);
  return;
}




void FUN_00b76fa8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 local_150;
  void *local_148;
  undefined8 local_140;
  void *local_138;
  undefined **local_130;
  undefined1 auStack_128 [16];
  long local_118;
  code *pcStack_110;
  long local_100;
  undefined8 local_e0;
  void *local_d8;
  byte local_d0;
  void *local_c0;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_88;
  ulong local_80;
  void *local_78;
  byte local_70;
  undefined7 uStack_6f;
  void *local_60;
  undefined4 local_58;
  undefined8 local_54;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_00b26098(&local_130);
  uVar2 = FUN_00e6ce7c("MAIN_SEASON_TEAM_OVERVIEW_TOOLTIP",0);
  thunk_FUN_00e7051c(&local_140,uVar2);
  do {
    FUN_00e705c8(&local_80,"[SEASON_NAME]");
    FUN_00cb488c(&local_150,0,0,0);
    uVar3 = FUN_00e71248(&local_140,0,&local_80,&local_150);
    if (local_148 != (void *)0x0) {
      operator_delete__(local_148);
      local_150 = 0;
      local_148 = (void *)0x0;
    }
    if (local_78 != (void *)0x0) {
      operator_delete__(local_78);
      local_80 = 0;
      local_78 = (void *)0x0;
    }
  } while ((uVar3 & 1) != 0);
  thunk_FUN_00e7051c(&local_80,&local_140);
  FUN_008fcdb8(&local_70,&DAT_0320ffa8);
  local_58 = 1;
  local_54 = 0x41a00000;
  FUN_009c82b4(auStack_128,&local_80);
  if ((local_70 & 1) != 0) {
    operator_delete(local_60);
  }
  if (local_78 != (void *)0x0) {
    operator_delete__(local_78);
    local_80 = 0;
    local_78 = (void *)0x0;
  }
  local_100 = param_1 + 0x133e0;
  local_88 = 2;
  local_a0 = 0x3dcccccd;
  uVar3 = FUN_0092ea9c();
  local_9c = 0x447a0000;
  if ((uVar3 & 1) == 0) {
    local_9c = 0x44480000;
  }
  uVar2 = FUN_00e6ce7c("GENERIC_DIALOG_MORE_INFO",0);
  FUN_00910394(&local_e0,uVar2);
  pcStack_110 = FUN_00b771ec;
  local_118 = param_1;
  FUN_008fa54c(&local_80,"teamOverviewSeasonLabel");
  FUN_00b28094(param_1 + 0x137b8,&local_80,&local_130);
  if ((local_80 & 1) != 0) {
    operator_delete((void *)CONCAT71(uStack_6f,local_70));
  }
  if (local_138 != (void *)0x0) {
    operator_delete__(local_138);
    local_140 = 0;
    local_138 = (void *)0x0;
  }
  local_130 = &PTR_FUN_027de7f0;
  if ((local_d0 & 1) != 0) {
    operator_delete(local_c0);
  }
  if (local_d8 != (void *)0x0) {
    operator_delete__(local_d8);
    local_e0 = 0;
    local_d8 = (void *)0x0;
  }
  FUN_009c8464(auStack_128,1);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

