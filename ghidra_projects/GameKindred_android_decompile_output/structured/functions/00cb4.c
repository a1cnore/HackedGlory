// functions/00cb4 — 16 functions
#include "libGameKindred.h"




void FUN_00cb40b4(byte *param_1)

{
  byte *pbVar1;
  ulong uVar2;
  byte bVar3;
  ulong uVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  
  bVar3 = *param_1;
  uVar4 = (ulong)bVar3;
  uVar6 = *(ulong *)(param_1 + 8);
  uVar5 = (uint)(bVar3 >> 1);
  if ((bVar3 & 1) != 0) {
    uVar5 = (uint)uVar6;
  }
  if (uVar5 != 0) {
    uVar7 = 0;
    do {
      pbVar1 = param_1 + 1;
      if ((uVar4 & 1) != 0) {
        pbVar1 = *(byte **)(param_1 + 0x10);
      }
      if (pbVar1[uVar7] - 0x61 < 0x1a) {
        pbVar1[uVar7] = pbVar1[uVar7] - 0x20;
        uVar4 = (ulong)*param_1;
        uVar6 = *(ulong *)(param_1 + 8);
      }
      uVar7 = uVar7 + 1;
      uVar2 = uVar4 >> 1;
      if ((uVar4 & 1) != 0) {
        uVar2 = uVar6;
      }
    } while (uVar7 < (uVar2 & 0xffffffff));
  }
  return;
}




void FUN_00cb4120(byte *param_1)

{
  byte *pbVar1;
  ulong uVar2;
  byte bVar3;
  ulong uVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  
  bVar3 = *param_1;
  uVar4 = (ulong)bVar3;
  uVar6 = *(ulong *)(param_1 + 8);
  uVar5 = (uint)(bVar3 >> 1);
  if ((bVar3 & 1) != 0) {
    uVar5 = (uint)uVar6;
  }
  if (uVar5 != 0) {
    uVar7 = 0;
    do {
      pbVar1 = param_1 + 1;
      if ((uVar4 & 1) != 0) {
        pbVar1 = *(byte **)(param_1 + 0x10);
      }
      if (pbVar1[uVar7] - 0x41 < 0x1a) {
        pbVar1[uVar7] = pbVar1[uVar7] + 0x20;
        uVar4 = (ulong)*param_1;
        uVar6 = *(ulong *)(param_1 + 8);
      }
      uVar7 = uVar7 + 1;
      uVar2 = uVar4 >> 1;
      if ((uVar4 & 1) != 0) {
        uVar2 = uVar6;
      }
    } while (uVar7 < (uVar2 & 0xffffffff));
  }
  return;
}




void FUN_00cb418c(undefined8 param_1,undefined4 param_2)

{
  long lVar1;
  undefined1 auStack_48 [32];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00968914(auStack_48,&DAT_01bb6d43,param_2);
  FUN_008fa54c(param_1,auStack_48);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




int FUN_00cb41f0(uint param_1)

{
  int iVar1;
  
  if (-1 < (int)param_1) {
    iVar1 = 1;
    if ((int)param_1 < 0x1e) {
      iVar1 = param_1 / 3 + 1;
    }
    return iVar1;
  }
  return 0;
}




int FUN_00cb421c(uint param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if (param_1 < 0x1e) {
    iVar1 = (int)param_1 % 3;
  }
  return iVar1;
}




undefined4 * FUN_00cb4248(uint param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  if ((DAT_0313d350 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(&DAT_0313d350);
    if (iVar1 != 0) {
      DAT_0313d348 = 0xff396eb6;
      __cxa_guard_release(&DAT_0313d350);
    }
  }
  if ((DAT_0313d360 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(&DAT_0313d360);
    if (iVar1 != 0) {
      DAT_0313d358 = 0xffc0c0c0;
      __cxa_guard_release(&DAT_0313d360);
    }
  }
  if ((DAT_0313d370 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(&DAT_0313d370);
    if (iVar1 != 0) {
      DAT_0313d368 = 0xff4ec0ee;
      __cxa_guard_release(&DAT_0313d370);
    }
  }
  if (param_1 < 0x1e) {
    puVar2 = *(undefined4 **)(&DAT_028095f0 + (ulong)((param_1 & 0xff) % 3 ^ 2) * 8);
  }
  else {
    puVar2 = &DAT_0313d358;
  }
  return puVar2;
}




void FUN_00cb439c(uint param_1,ulong param_2,ulong param_3)

{
  int iVar1;
  byte *pbVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  uint uVar7;
  undefined *puVar8;
  
  if (param_1 == 0xffffffff) {
    if ((param_2 & 1) == 0) {
      pbVar2 = (byte *)"PROFILE_SKILL_SMALL_UNRANKED";
      if ((param_3 & 1) == 0) {
        pbVar2 = (byte *)"PROFILE_SKILL_LABEL_UNRANKED";
      }
    }
    else {
      pbVar2 = (byte *)"PROFILE_SKILL_CAPS_UNRANKED";
    }
  }
  else {
    if ((int)param_1 < 0) {
      uVar7 = 0xffffffff;
    }
    else {
      uVar7 = 0;
      if ((int)param_1 < 0x1e) {
        uVar7 = param_1 / 3;
      }
    }
    uVar4 = param_2;
    uVar6 = param_3;
    if ((DAT_0313d468 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_0313d468);
      uVar4 = param_2 & 0xffffffff;
      uVar6 = param_3 & 0xffffffff;
      if (iVar1 != 0) {
        FUN_008fa54c(&DAT_0313d378,"PROFILE_SKILL_LABEL_0");
        FUN_008fa54c(&DAT_0313d390,"PROFILE_SKILL_LABEL_1");
        FUN_008fa54c(&DAT_0313d3a8,"PROFILE_SKILL_LABEL_2");
        FUN_008fa54c(&DAT_0313d3c0,"PROFILE_SKILL_LABEL_3");
        FUN_008fa54c(&DAT_0313d3d8,"PROFILE_SKILL_LABEL_4");
        FUN_008fa54c(&DAT_0313d3f0,"PROFILE_SKILL_LABEL_5");
        FUN_008fa54c(&DAT_0313d408,"PROFILE_SKILL_LABEL_6");
        FUN_008fa54c(&DAT_0313d420,"PROFILE_SKILL_LABEL_7");
        FUN_008fa54c(&DAT_0313d438,"PROFILE_SKILL_LABEL_8");
        FUN_008fa54c(&DAT_0313d450,"PROFILE_SKILL_LABEL_9");
        __cxa_atexit(FUN_008b49cc,0,&PTR_LOOP_02be3000);
        __cxa_guard_release(&DAT_0313d468);
        uVar4 = param_2 & 0xffffffff;
        uVar6 = param_3 & 0xffffffff;
      }
    }
    uVar3 = uVar4;
    uVar5 = uVar6;
    if ((DAT_0313d560 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_0313d560);
      uVar3 = uVar4 & 0xffffffff;
      uVar5 = uVar6 & 0xffffffff;
      if (iVar1 != 0) {
        FUN_008fa54c(&DAT_0313d470,"PROFILE_SKILL_CAPS_0");
        FUN_008fa54c(&DAT_0313d488,"PROFILE_SKILL_CAPS_1");
        FUN_008fa54c(&DAT_0313d4a0,"PROFILE_SKILL_CAPS_2");
        FUN_008fa54c(&DAT_0313d4b8,"PROFILE_SKILL_CAPS_3");
        FUN_008fa54c(&DAT_0313d4d0,"PROFILE_SKILL_CAPS_4");
        FUN_008fa54c(&DAT_0313d4e8,"PROFILE_SKILL_CAPS_5");
        FUN_008fa54c(&DAT_0313d500,"PROFILE_SKILL_CAPS_6");
        FUN_008fa54c(&DAT_0313d518,"PROFILE_SKILL_CAPS_7");
        FUN_008fa54c(&DAT_0313d530,"PROFILE_SKILL_CAPS_8");
        FUN_008fa54c(&DAT_0313d548,"PROFILE_SKILL_CAPS_9");
        __cxa_atexit(FUN_008b4a10,0,&PTR_LOOP_02be3000);
        __cxa_guard_release(&DAT_0313d560);
        uVar3 = uVar4 & 0xffffffff;
        uVar5 = uVar6 & 0xffffffff;
      }
    }
    uVar4 = uVar3;
    uVar6 = uVar5;
    if ((DAT_0313d658 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_0313d658);
      uVar4 = uVar3 & 0xffffffff;
      uVar6 = uVar5 & 0xffffffff;
      if (iVar1 != 0) {
        FUN_008fa54c(&DAT_0313d568,"PROFILE_SKILL_SMALL_0");
        FUN_008fa54c(&DAT_0313d580,"PROFILE_SKILL_SMALL_1");
        FUN_008fa54c(&DAT_0313d598,"PROFILE_SKILL_SMALL_2");
        FUN_008fa54c(&DAT_0313d5b0,"PROFILE_SKILL_SMALL_3");
        FUN_008fa54c(&DAT_0313d5c8,"PROFILE_SKILL_SMALL_4");
        FUN_008fa54c(&DAT_0313d5e0,"PROFILE_SKILL_SMALL_5");
        FUN_008fa54c(&DAT_0313d5f8,"PROFILE_SKILL_SMALL_6");
        FUN_008fa54c(&DAT_0313d610,"PROFILE_SKILL_SMALL_7");
        FUN_008fa54c(&DAT_0313d628,"PROFILE_SKILL_SMALL_8");
        FUN_008fa54c(&DAT_0313d640,"PROFILE_SKILL_SMALL_9");
        __cxa_atexit(FUN_008b4a54,0,&PTR_LOOP_02be3000);
        __cxa_guard_release(&DAT_0313d658);
        uVar4 = uVar3 & 0xffffffff;
        uVar6 = uVar5 & 0xffffffff;
      }
    }
    uVar3 = 0;
    if (uVar7 < 10) {
      uVar3 = (ulong)uVar7;
    }
    if ((uVar4 & 1) == 0) {
      if ((uVar6 & 1) == 0) {
        puVar8 = &DAT_0313d378;
      }
      else {
        puVar8 = &DAT_0313d568;
      }
    }
    else {
      puVar8 = &DAT_0313d470;
    }
    if ((puVar8[uVar3 * 0x18] & 1) == 0) {
      pbVar2 = puVar8 + uVar3 * 0x18 + 1;
    }
    else {
      pbVar2 = *(byte **)(puVar8 + uVar3 * 0x18 + 0x10);
    }
  }
  FUN_00e6ce7c(pbVar2,0);
  return;
}




void FUN_00cb4780(undefined8 param_1,undefined4 param_2,int param_3)

{
  long lVar1;
  undefined1 auStack_a8 [128];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00e6a8a8(auStack_a8,"build://skillTier_%02d_%d.tga",param_2,param_3 + 1);
  FUN_008fa54c(param_1,auStack_a8);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00cb47e8(undefined8 param_1,undefined4 param_2,ulong param_3,ulong param_4,uint param_5)

{
  long lVar1;
  undefined8 uVar2;
  char *pcVar3;
  undefined1 auStack_48 [32];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if ((param_5 & 1) == 0) {
    if ((param_3 & 1) == 0) {
      if ((param_4 & 1) == 0) {
        pcVar3 = "SEASON_NAME_%d";
      }
      else {
        pcVar3 = "SEASON_NAME_SHORT_%d";
      }
    }
    else {
      pcVar3 = "SEASON_NAME_NARROW_%d";
    }
  }
  else {
    pcVar3 = "SEASON_NAME_CAPS_%d";
  }
  FUN_00968914(auStack_48,pcVar3,param_2);
  uVar2 = FUN_00e6ce7c(auStack_48,0);
  thunk_FUN_00e7051c(param_1,uVar2);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00cb488c(undefined8 param_1,uint param_2,uint param_3,uint param_4)

{
  long lVar1;
  
  lVar1 = FUN_00940b98();
  FUN_00cb47e8(param_1,*(undefined4 *)(lVar1 + 0x10),param_2 & 1,param_3 & 1,param_4 & 1);
  return;
}




void FUN_00cb48d4(undefined8 param_1,uint param_2,uint param_3,uint param_4)

{
  long lVar1;
  
  lVar1 = FUN_00940b98();
  FUN_00cb47e8(param_1,*(int *)(lVar1 + 0x10) + -1,param_2 & 1,param_3 & 1,param_4 & 1);
  return;
}




void FUN_00cb4920(undefined8 param_1,uint param_2,uint param_3,uint param_4)

{
  long lVar1;
  
  lVar1 = FUN_00940b98();
  FUN_00cb47e8(param_1,*(int *)(lVar1 + 0x10) + 1,param_2 & 1,param_3 & 1,param_4 & 1);
  return;
}




void FUN_00cb496c(undefined8 param_1,ulong param_2,ulong param_3)

{
  long lVar1;
  undefined8 uVar2;
  char *__format;
  char acStack_48 [32];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if ((param_3 & 1) == 0) {
    __format = "SEASON_DATE_RANGE_%d";
  }
  else {
    __format = "SEASON_DATE_RANGE_NARROW_%d";
  }
  sprintf(acStack_48,__format,param_2 & 0xffffffff);
  uVar2 = FUN_00e6ce7c(acStack_48,0);
  thunk_FUN_00e7051c(param_1,uVar2);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00cb49ec(undefined8 param_1,undefined4 param_2,ulong param_3)

{
  char *pcVar1;
  void *pvVar2;
  long lVar3;
  undefined8 uVar4;
  byte local_80 [16];
  void *local_70;
  byte local_68 [16];
  void *local_58;
  byte local_50 [16];
  void *local_40;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  pcVar1 = "MENU_LANGUAGE_CAPS_[LANG_CODE]";
  if ((param_3 & 1) == 0) {
    pcVar1 = "MENU_LANGUAGE_LABEL_[LANG_CODE]";
  }
  FUN_008fa54c(local_50,pcVar1);
  FUN_008fa54c(local_68,"[LANG_CODE]");
  FUN_00cb4ae4(local_80,param_2);
  FUN_00937db8(local_50,local_68,local_80);
  if ((local_80[0] & 1) != 0) {
    operator_delete(local_70);
  }
  if ((local_68[0] & 1) != 0) {
    operator_delete(local_58);
  }
  pvVar2 = (void *)((ulong)local_50 | 1);
  if ((local_50[0] & 1) != 0) {
    pvVar2 = local_40;
  }
  uVar4 = FUN_00e6ce7c(pvVar2,0);
  thunk_FUN_00e7051c(param_1,uVar4);
  if ((local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00cb4ae4(undefined8 param_1,undefined4 param_2)

{
  switch(param_2) {
  case 0:
    FUN_008fa54c(param_1,"EN");
    return;
  case 1:
    FUN_008fa54c(param_1,"DE");
    return;
  case 2:
    FUN_008fa54c(param_1,&DAT_01e308a2);
    return;
  case 3:
    FUN_008fa54c(param_1,"FR");
    return;
  case 4:
    FUN_008fa54c(param_1,"ID");
    return;
  case 5:
    FUN_008fa54c(param_1,"IT");
    return;
  case 6:
    FUN_008fa54c(param_1,&DAT_01bc4828);
    return;
  case 7:
    FUN_008fa54c(param_1,&DAT_01bc482b);
    return;
  case 8:
    FUN_008fa54c(param_1,"MS");
    return;
  case 9:
    FUN_008fa54c(param_1,&DAT_01b95670);
    return;
  case 10:
    FUN_008fa54c(param_1,&DAT_01bc482e);
    return;
  case 0xb:
    FUN_008fa54c(param_1,"TL");
    return;
  case 0xc:
    FUN_008fa54c(param_1,&DAT_01e3d4cb);
    return;
  case 0xd:
    FUN_008fa54c(param_1,&DAT_01bc4831);
    return;
  case 0xe:
    FUN_008fa54c(param_1,"ZH_HANS");
    return;
  case 0xf:
    FUN_008fa54c(param_1,"ZH_HANT");
    return;
  default:
    FUN_008fa54c(param_1,"UNKNOWN");
    return;
  }
}




undefined4 FUN_00cb4bd8(byte *param_1)

{
  ulong uVar1;
  byte bVar2;
  int iVar3;
  undefined4 uVar4;
  ulong uVar5;
  ulong uVar6;
  
  bVar2 = *param_1;
  uVar5 = *(ulong *)(param_1 + 8);
  uVar6 = (ulong)(bVar2 >> 1);
  uVar1 = uVar6;
  if ((bVar2 & 1) != 0) {
    uVar1 = uVar5;
  }
  if (uVar1 == 2) {
    iVar3 = FUN_0090d610(param_1,0,0xffffffffffffffff,"EN",2);
    if (iVar3 == 0) {
      return 0;
    }
    bVar2 = *param_1;
    uVar5 = *(ulong *)(param_1 + 8);
    uVar6 = (ulong)(bVar2 >> 1);
  }
  uVar1 = uVar6;
  if ((bVar2 & 1) != 0) {
    uVar1 = uVar5;
  }
  if (uVar1 == 2) {
    iVar3 = FUN_0090d610(param_1,0,0xffffffffffffffff,"DE",2);
    if (iVar3 == 0) {
      return 1;
    }
    bVar2 = *param_1;
    uVar5 = *(ulong *)(param_1 + 8);
    uVar6 = (ulong)(bVar2 >> 1);
  }
  uVar1 = uVar6;
  if ((bVar2 & 1) != 0) {
    uVar1 = uVar5;
  }
  if (uVar1 == 2) {
    iVar3 = FUN_0090d610(param_1,0,0xffffffffffffffff,&DAT_01e308a2,2);
    if (iVar3 == 0) {
      return 2;
    }
    bVar2 = *param_1;
    uVar5 = *(ulong *)(param_1 + 8);
    uVar6 = (ulong)(bVar2 >> 1);
  }
  uVar1 = uVar6;
  if ((bVar2 & 1) != 0) {
    uVar1 = uVar5;
  }
  if (uVar1 == 2) {
    iVar3 = FUN_0090d610(param_1,0,0xffffffffffffffff,"FR",2);
    if (iVar3 == 0) {
      return 3;
    }
    bVar2 = *param_1;
    uVar5 = *(ulong *)(param_1 + 8);
    uVar6 = (ulong)(bVar2 >> 1);
  }
  uVar1 = uVar6;
  if ((bVar2 & 1) != 0) {
    uVar1 = uVar5;
  }
  if (uVar1 == 2) {
    iVar3 = FUN_0090d610(param_1,0,0xffffffffffffffff,"ID",2);
    if (iVar3 == 0) {
      return 4;
    }
    bVar2 = *param_1;
    uVar5 = *(ulong *)(param_1 + 8);
    uVar6 = (ulong)(bVar2 >> 1);
  }
  uVar1 = uVar6;
  if ((bVar2 & 1) != 0) {
    uVar1 = uVar5;
  }
  if (uVar1 == 2) {
    iVar3 = FUN_0090d610(param_1,0,0xffffffffffffffff,"IT",2);
    if (iVar3 == 0) {
      return 5;
    }
    bVar2 = *param_1;
    uVar5 = *(ulong *)(param_1 + 8);
    uVar6 = (ulong)(bVar2 >> 1);
  }
  uVar1 = uVar6;
  if ((bVar2 & 1) != 0) {
    uVar1 = uVar5;
  }
  if (uVar1 == 2) {
    iVar3 = FUN_0090d610(param_1,0,0xffffffffffffffff,&DAT_01bc4828,2);
    if (iVar3 == 0) {
      return 6;
    }
    bVar2 = *param_1;
    uVar5 = *(ulong *)(param_1 + 8);
    uVar6 = (ulong)(bVar2 >> 1);
  }
  uVar1 = uVar6;
  if ((bVar2 & 1) != 0) {
    uVar1 = uVar5;
  }
  if (uVar1 == 2) {
    iVar3 = FUN_0090d610(param_1,0,0xffffffffffffffff,&DAT_01bc482b,2);
    if (iVar3 == 0) {
      return 7;
    }
    bVar2 = *param_1;
    uVar5 = *(ulong *)(param_1 + 8);
    uVar6 = (ulong)(bVar2 >> 1);
  }
  uVar1 = uVar6;
  if ((bVar2 & 1) != 0) {
    uVar1 = uVar5;
  }
  if (uVar1 == 2) {
    iVar3 = FUN_0090d610(param_1,0,0xffffffffffffffff,"MS",2);
    if (iVar3 == 0) {
      return 8;
    }
    bVar2 = *param_1;
    uVar5 = *(ulong *)(param_1 + 8);
    uVar6 = (ulong)(bVar2 >> 1);
  }
  uVar1 = uVar6;
  if ((bVar2 & 1) != 0) {
    uVar1 = uVar5;
  }
  if (uVar1 == 2) {
    iVar3 = FUN_0090d610(param_1,0,0xffffffffffffffff,&DAT_01b95670,2);
    if (iVar3 == 0) {
      return 9;
    }
    bVar2 = *param_1;
    uVar5 = *(ulong *)(param_1 + 8);
    uVar6 = (ulong)(bVar2 >> 1);
  }
  uVar1 = uVar6;
  if ((bVar2 & 1) != 0) {
    uVar1 = uVar5;
  }
  if (uVar1 == 2) {
    iVar3 = FUN_0090d610(param_1,0,0xffffffffffffffff,&DAT_01bc482e,2);
    if (iVar3 == 0) {
      return 10;
    }
    bVar2 = *param_1;
    uVar5 = *(ulong *)(param_1 + 8);
    uVar6 = (ulong)(bVar2 >> 1);
  }
  uVar1 = uVar6;
  if ((bVar2 & 1) != 0) {
    uVar1 = uVar5;
  }
  if (uVar1 == 2) {
    iVar3 = FUN_0090d610(param_1,0,0xffffffffffffffff,"TL",2);
    if (iVar3 == 0) {
      return 0xb;
    }
    bVar2 = *param_1;
    uVar5 = *(ulong *)(param_1 + 8);
    uVar6 = (ulong)(bVar2 >> 1);
  }
  uVar1 = uVar6;
  if ((bVar2 & 1) != 0) {
    uVar1 = uVar5;
  }
  if (uVar1 == 2) {
    iVar3 = FUN_0090d610(param_1,0,0xffffffffffffffff,&DAT_01e3d4cb,2);
    if (iVar3 == 0) {
      return 0xc;
    }
    bVar2 = *param_1;
    uVar5 = *(ulong *)(param_1 + 8);
    uVar6 = (ulong)(bVar2 >> 1);
  }
  uVar1 = uVar6;
  if ((bVar2 & 1) != 0) {
    uVar1 = uVar5;
  }
  if (uVar1 == 2) {
    iVar3 = FUN_0090d610(param_1,0,0xffffffffffffffff,&DAT_01bc4831,2);
    if (iVar3 == 0) {
      return 0xd;
    }
    bVar2 = *param_1;
    uVar5 = *(ulong *)(param_1 + 8);
    uVar6 = (ulong)(bVar2 >> 1);
  }
  uVar1 = uVar6;
  if ((bVar2 & 1) != 0) {
    uVar1 = uVar5;
  }
  if (uVar1 == 7) {
    iVar3 = FUN_0090d610(param_1,0,0xffffffffffffffff,"ZH_HANS",7);
    if (iVar3 == 0) {
      return 0xe;
    }
    bVar2 = *param_1;
    uVar5 = *(ulong *)(param_1 + 8);
    uVar6 = (ulong)(bVar2 >> 1);
  }
  if ((bVar2 & 1) != 0) {
    uVar6 = uVar5;
  }
  if (uVar6 == 7) {
    iVar3 = FUN_0090d610(param_1,0,0xffffffffffffffff,"ZH_HANT",7);
    uVar4 = 0xf;
    if (iVar3 != 0) {
      uVar4 = 0x10;
    }
  }
  else {
    uVar4 = 0x10;
  }
  return uVar4;
}

