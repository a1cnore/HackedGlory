// functions/1000f — 215 functions
#include "GameKindred.h"




void FUN_1000f0918(long *param_1)

{
  uint uVar1;
  ulong uVar2;
  byte bVar3;
  long *plVar4;
  ulong uVar5;
  uint uVar6;
  ulong uVar7;
  
  uVar6 = (uint)(char)*(byte *)((long)param_1 + 0x17);
  uVar7 = param_1[1];
  uVar1 = (uint)uVar7;
  if (-1 < (int)uVar6) {
    uVar1 = (uint)*(byte *)((long)param_1 + 0x17);
  }
  if (uVar1 != 0) {
    uVar5 = 0;
    do {
      if ((uVar6 >> 7 & 1) == 0) {
        bVar3 = *(byte *)((long)param_1 + uVar5);
        plVar4 = param_1;
      }
      else {
        bVar3 = *(byte *)(*param_1 + uVar5);
        plVar4 = (long *)*param_1;
      }
      if (bVar3 - 0x41 < 0x1a) {
        *(byte *)((long)plVar4 + uVar5) = bVar3 + 0x20;
        uVar6 = (uint)*(byte *)((long)param_1 + 0x17);
        uVar7 = param_1[1];
      }
      uVar5 = uVar5 + 1;
      uVar2 = uVar7;
      if (-1 < (char)uVar6) {
        uVar2 = (ulong)(uVar6 & 0xff);
      }
    } while (uVar5 < (uVar2 & 0xffffffff));
  }
  return;
}




void FUN_1000f0994(undefined8 param_1)

{
  undefined1 auStack_48 [32];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_101444218;
  FUN_1000f0a04(auStack_48,"%d");
  FUN_1000ee4ec(param_1,auStack_48);
  if (*(long *)PTR____stack_chk_guard_101444218 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_1000f0a04(undefined8 param_1,undefined8 param_2)

{
  FUN_1004d26e8(param_1,0x20,param_2,&stack0x00000000);
  return;
}




int FUN_1000f0a34(uint param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 1;
  if ((int)param_1 < 0x1e) {
    iVar2 = (param_1 & 0xff) / 3 + 1;
  }
  iVar1 = 0;
  if ((param_1 & 0x80000000) == 0) {
    iVar1 = iVar2;
  }
  return iVar1;
}




int FUN_1000f0a5c(uint param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if (param_1 < 0x1e) {
    iVar1 = (int)param_1 % 3;
  }
  return iVar1;
}




void FUN_1000f0a88(uint param_1,uint param_2,int param_3)

{
  char *pcVar1;
  int iVar2;
  char *pcVar3;
  undefined8 *puVar4;
  ulong uVar5;
  
  if (param_1 == 0xffffffff) {
    pcVar1 = "PROFILE_SKILL_SMALL_UNRANKED";
    if (param_3 == 0) {
      pcVar1 = "PROFILE_SKILL_LABEL_UNRANKED";
    }
    pcVar3 = "PROFILE_SKILL_CAPS_UNRANKED";
    if ((param_2 & 1) == 0) {
      pcVar3 = pcVar1;
    }
  }
  else {
    if ((((int)param_1 < 0) || (0x1d < (int)param_1)) || (0x1d < (param_1 & 0xff))) {
      uVar5 = 0;
    }
    else {
      uVar5 = (ulong)((param_1 & 0xff) / 3);
    }
    if (((DAT_101dc6d60 & 1) == 0) && (iVar2 = ___cxa_guard_acquire(&DAT_101dc6d60), iVar2 != 0)) {
      FUN_1000ee4ec(&DAT_101dc6c70,"PROFILE_SKILL_LABEL_0");
      FUN_1000ee4ec(&DAT_101dc6c88,"PROFILE_SKILL_LABEL_1");
      FUN_1000ee4ec(&DAT_101dc6ca0,"PROFILE_SKILL_LABEL_2");
      FUN_1000ee4ec(&DAT_101dc6cb8,"PROFILE_SKILL_LABEL_3");
      FUN_1000ee4ec(&DAT_101dc6cd0,"PROFILE_SKILL_LABEL_4");
      FUN_1000ee4ec(&DAT_101dc6ce8,"PROFILE_SKILL_LABEL_5");
      FUN_1000ee4ec(&DAT_101dc6d00,"PROFILE_SKILL_LABEL_6");
      FUN_1000ee4ec(&DAT_101dc6d18,"PROFILE_SKILL_LABEL_7");
      FUN_1000ee4ec(&DAT_101dc6d30,"PROFILE_SKILL_LABEL_8");
      FUN_1000ee4ec(&DAT_101dc6d48,"PROFILE_SKILL_LABEL_9");
      ___cxa_atexit(FUN_1000f3048,0,0x100000000);
      ___cxa_guard_release(&DAT_101dc6d60);
    }
    if (((DAT_101dc6e58 & 1) == 0) && (iVar2 = ___cxa_guard_acquire(&DAT_101dc6e58), iVar2 != 0)) {
      FUN_1000ee4ec(&DAT_101dc6d68,"PROFILE_SKILL_CAPS_0");
      FUN_1000ee4ec(&DAT_101dc6d80,"PROFILE_SKILL_CAPS_1");
      FUN_1000ee4ec(&DAT_101dc6d98,"PROFILE_SKILL_CAPS_2");
      FUN_1000ee4ec(&DAT_101dc6db0,"PROFILE_SKILL_CAPS_3");
      FUN_1000ee4ec(&DAT_101dc6dc8,"PROFILE_SKILL_CAPS_4");
      FUN_1000ee4ec(&DAT_101dc6de0,"PROFILE_SKILL_CAPS_5");
      FUN_1000ee4ec(&DAT_101dc6df8,"PROFILE_SKILL_CAPS_6");
      FUN_1000ee4ec(&DAT_101dc6e10,"PROFILE_SKILL_CAPS_7");
      FUN_1000ee4ec(&DAT_101dc6e28,"PROFILE_SKILL_CAPS_8");
      FUN_1000ee4ec(&DAT_101dc6e40,"PROFILE_SKILL_CAPS_9");
      ___cxa_atexit(FUN_1000f308c,0,0x100000000);
      ___cxa_guard_release(&DAT_101dc6e58);
    }
    if (((DAT_101dc6f50 & 1) == 0) && (iVar2 = ___cxa_guard_acquire(&DAT_101dc6f50), iVar2 != 0)) {
      FUN_1000ee4ec(&DAT_101dc6e60,"PROFILE_SKILL_SMALL_0");
      FUN_1000ee4ec(&DAT_101dc6e78,"PROFILE_SKILL_SMALL_1");
      FUN_1000ee4ec(&DAT_101dc6e90,"PROFILE_SKILL_SMALL_2");
      FUN_1000ee4ec(&DAT_101dc6ea8,"PROFILE_SKILL_SMALL_3");
      FUN_1000ee4ec(&DAT_101dc6ec0,"PROFILE_SKILL_SMALL_4");
      FUN_1000ee4ec(&DAT_101dc6ed8,"PROFILE_SKILL_SMALL_5");
      FUN_1000ee4ec(&DAT_101dc6ef0,"PROFILE_SKILL_SMALL_6");
      FUN_1000ee4ec(&DAT_101dc6f08,"PROFILE_SKILL_SMALL_7");
      FUN_1000ee4ec(&DAT_101dc6f20,"PROFILE_SKILL_SMALL_8");
      FUN_1000ee4ec(&DAT_101dc6f38,"PROFILE_SKILL_SMALL_9");
      ___cxa_atexit(FUN_1000f30d0,0,0x100000000);
      ___cxa_guard_release(&DAT_101dc6f50);
    }
    if (param_2 == 0) {
      if (param_3 == 0) {
        puVar4 = &DAT_101dc6c70;
      }
      else {
        puVar4 = &DAT_101dc6e60;
      }
    }
    else {
      puVar4 = &DAT_101dc6d68;
    }
    pcVar3 = (char *)(puVar4 + uVar5 * 3);
    if (pcVar3[0x17] < '\0') {
      pcVar3 = *(char **)pcVar3;
    }
  }
  FUN_1004e0150(pcVar3,0);
  return;
}




void FUN_1000f0e54(undefined8 param_1)

{
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_101444218;
  FUN_1004d2698(auStack_a8,"build://skillTier_%02d_%d.tga");
  FUN_1000ee4ec(param_1,auStack_a8);
  if (*(long *)PTR____stack_chk_guard_101444218 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_1000f0ec8(undefined8 param_1,undefined8 param_2,int param_3,int param_4,int param_5)

{
  char *pcVar1;
  char *pcVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [32];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_101444218;
  pcVar2 = "SEASON_NAME_CAPS_%d";
  if (param_5 == 0) {
    pcVar2 = "SEASON_NAME_NARROW_%d";
  }
  pcVar1 = "SEASON_NAME_SHORT_%d";
  if (param_4 == 0) {
    pcVar1 = "SEASON_NAME_%d";
  }
  if (param_5 == 0 && param_3 == 0) {
    pcVar2 = pcVar1;
  }
  FUN_1000f0a04(auStack_48,pcVar2);
  uVar3 = FUN_1004e0150(auStack_48,0);
  thunk_FUN_1004e439c(param_1,uVar3);
  if (*(long *)PTR____stack_chk_guard_101444218 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_1000f0f78(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  lVar1 = FUN_1001340a4();
  FUN_1000f0ec8(param_1,*(undefined4 *)(lVar1 + 0x10),param_2,param_3,param_4);
  return;
}




void FUN_1000f0fc0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  lVar1 = FUN_1001340a4();
  FUN_1000f0ec8(param_1,*(int *)(lVar1 + 0x10) + -1,param_2,param_3,param_4);
  return;
}




void FUN_1000f100c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  lVar1 = FUN_1001340a4();
  FUN_1000f0ec8(param_1,*(int *)(lVar1 + 0x10) + 1,param_2,param_3,param_4);
  return;
}




void FUN_1000f1058(undefined8 param_1,undefined8 param_2,int param_3)

{
  char *pcVar1;
  undefined8 uVar2;
  char acStack_48 [32];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_101444218;
  pcVar1 = "SEASON_DATE_RANGE_NARROW_%d";
  if (param_3 == 0) {
    pcVar1 = "SEASON_DATE_RANGE_%d";
  }
  _sprintf(acStack_48,pcVar1);
  uVar2 = FUN_1004e0150(acStack_48,0);
  thunk_FUN_1004e439c(param_1,uVar2);
  if (*(long *)PTR____stack_chk_guard_101444218 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_1000f10e4(undefined8 param_1,undefined8 param_2,int param_3)

{
  char *pcVar1;
  size_t sVar2;
  ulong uVar3;
  undefined8 ****ppppuVar4;
  byte bVar5;
  byte ****ppppbVar6;
  int iVar7;
  undefined8 ****ppppuVar8;
  void *pvVar9;
  void *pvVar10;
  undefined8 uVar11;
  ulong uVar12;
  long lVar13;
  uint uVar14;
  uint uVar15;
  ulong uVar16;
  undefined8 ***local_a8;
  ulong local_a0;
  byte local_91;
  byte ***local_90;
  size_t sStack_88;
  byte local_79;
  undefined8 ***local_78;
  ulong local_70;
  byte local_61;
  
  pcVar1 = "MENU_LANGUAGE_CAPS_[LANG_CODE]";
  if (param_3 == 0) {
    pcVar1 = "MENU_LANGUAGE_LABEL_[LANG_CODE]";
  }
  FUN_1000ee4ec(&local_78,pcVar1);
  FUN_1000ee4ec(&local_90,"[LANG_CODE]");
  FUN_1000f13b4(&local_a8,param_2);
  uVar16 = sStack_88;
  uVar14 = (uint)(char)local_79;
  sVar2 = sStack_88;
  ppppbVar6 = (byte ****)local_90;
  if (-1 < (int)uVar14) {
    sVar2 = (ulong)local_79;
    ppppbVar6 = &local_90;
  }
  ppppuVar4 = (undefined8 ****)local_78;
  if (-1 < (char)local_61) {
    ppppuVar4 = &local_78;
  }
  if (sVar2 == 0) {
    uVar12 = 0;
LAB_1000f11f4:
    uVar15 = (uint)local_91;
    do {
      if (-1 < (char)uVar14) {
        uVar16 = (ulong)(uVar14 & 0xff);
      }
      ppppuVar4 = (undefined8 ****)local_a8;
      if (-1 < (char)uVar15) {
        ppppuVar4 = &local_a8;
      }
      std::string::replace((ulong)&local_78,uVar12,(char *)(uVar16 & 0xffffffff),(ulong)ppppuVar4);
      uVar16 = sStack_88;
      uVar15 = (uint)(char)local_91;
      uVar3 = local_a0;
      if (-1 < (int)uVar15) {
        uVar3 = (ulong)local_91;
      }
      uVar12 = uVar12 + (uVar3 & 0xffffffff);
      uVar14 = (uint)(char)local_79;
      sVar2 = sStack_88;
      ppppbVar6 = (byte ****)local_90;
      if (-1 < (int)uVar14) {
        sVar2 = (ulong)local_79;
        ppppbVar6 = &local_90;
      }
      uVar3 = local_70;
      ppppuVar4 = (undefined8 ****)local_78;
      if (-1 < (char)local_61) {
        uVar3 = (ulong)local_61;
        ppppuVar4 = &local_78;
      }
      if (uVar3 < uVar12) break;
      if (sVar2 != 0) {
        pvVar10 = (void *)((long)ppppuVar4 + uVar12);
        pvVar9 = (void *)((long)ppppuVar4 + uVar3);
        lVar13 = (long)pvVar9 - (long)pvVar10;
        if (lVar13 < (long)sVar2) break;
        bVar5 = *(byte *)ppppbVar6;
        while( true ) {
          if ((0xfffffffffffffffe < lVar13 - sVar2) ||
             (pvVar10 = _memchr(pvVar10,(uint)bVar5,(lVar13 - sVar2) + 1), pvVar10 == (void *)0x0))
          goto LAB_1000f1310;
          iVar7 = _memcmp(pvVar10,ppppbVar6,sVar2);
          if (iVar7 == 0) break;
          pvVar10 = (void *)((long)pvVar10 + 1);
          lVar13 = (long)pvVar9 - (long)pvVar10;
          if (lVar13 < (long)sVar2) goto LAB_1000f1310;
        }
        if (pvVar10 == pvVar9) break;
        uVar12 = (long)pvVar10 - (long)ppppuVar4;
      }
    } while (uVar12 != 0xffffffffffffffff);
  }
  else {
    uVar12 = local_70;
    if (-1 < (char)local_61) {
      uVar12 = (ulong)local_61;
    }
    if ((long)sVar2 <= (long)uVar12) {
      pvVar10 = (void *)((long)ppppuVar4 + uVar12);
      bVar5 = *(byte *)ppppbVar6;
      ppppuVar8 = ppppuVar4;
      do {
        if ((0xfffffffffffffffe < uVar12 - sVar2) ||
           (pvVar9 = _memchr(ppppuVar8,(uint)bVar5,(uVar12 - sVar2) + 1), pvVar9 == (void *)0x0))
        break;
        iVar7 = _memcmp(pvVar9,ppppbVar6,sVar2);
        if (iVar7 == 0) {
          if ((pvVar9 != pvVar10) &&
             (uVar12 = (long)pvVar9 - (long)ppppuVar4, uVar12 != 0xffffffffffffffff))
          goto LAB_1000f11f4;
          break;
        }
        ppppuVar8 = (undefined8 ****)((long)pvVar9 + 1);
        uVar12 = (long)pvVar10 - (long)ppppuVar8;
      } while ((long)sVar2 <= (long)uVar12);
    }
  }
LAB_1000f1310:
  if ((char)local_91 < '\0') {
    operator_delete(local_a8);
    if (-1 < (char)local_79) goto LAB_1000f131c;
  }
  else if ((uVar14 >> 7 & 1) == 0) goto LAB_1000f131c;
  operator_delete(local_90);
LAB_1000f131c:
  ppppuVar4 = (undefined8 ****)local_78;
  if (-1 < (char)local_61) {
    ppppuVar4 = &local_78;
  }
  uVar11 = FUN_1004e0150(ppppuVar4,0);
  thunk_FUN_1004e439c(param_1,uVar11);
  if ((char)local_61 < '\0') {
    operator_delete(local_78);
  }
  return;
}




void FUN_1000f13b4(undefined8 param_1,uint param_2)

{
  if (param_2 < 0x10) {
    FUN_1000ee4ec(param_1,(&PTR_s_EN_101458798)[(int)param_2]);
    return;
  }
  FUN_1000ee4ec(param_1,"UNKNOWN");
  return;
}




undefined4 FUN_1000f13e0(ulong param_1)

{
  ulong uVar1;
  int iVar2;
  undefined4 uVar3;
  ulong uVar4;
  ulong uVar5;
  byte bVar6;
  
  bVar6 = *(byte *)(param_1 + 0x17);
  uVar4 = (ulong)bVar6;
  uVar5 = *(ulong *)(param_1 + 8);
  uVar1 = uVar5;
  if (-1 < (char)bVar6) {
    uVar1 = uVar4;
  }
  if (uVar1 == 2) {
    iVar2 = std::string::compare(param_1,0,(char *)0xffffffffffffffff,0x1013d695b);
    if (iVar2 == 0) {
      return 0;
    }
    bVar6 = *(byte *)(param_1 + 0x17);
    uVar4 = (ulong)bVar6;
    uVar5 = *(ulong *)(param_1 + 8);
  }
  uVar1 = uVar5;
  if (-1 < (char)bVar6) {
    uVar1 = uVar4;
  }
  if (uVar1 == 2) {
    iVar2 = std::string::compare(param_1,0,(char *)0xffffffffffffffff,0x1013d695e);
    if (iVar2 == 0) {
      return 1;
    }
    bVar6 = *(byte *)(param_1 + 0x17);
    uVar4 = (ulong)bVar6;
    uVar5 = *(ulong *)(param_1 + 8);
  }
  uVar1 = uVar5;
  if (-1 < (char)bVar6) {
    uVar1 = uVar4;
  }
  if (uVar1 == 2) {
    iVar2 = std::string::compare(param_1,0,(char *)0xffffffffffffffff,0x1013d6961);
    if (iVar2 == 0) {
      return 2;
    }
    bVar6 = *(byte *)(param_1 + 0x17);
    uVar4 = (ulong)bVar6;
    uVar5 = *(ulong *)(param_1 + 8);
  }
  uVar1 = uVar5;
  if (-1 < (char)bVar6) {
    uVar1 = uVar4;
  }
  if (uVar1 == 2) {
    iVar2 = std::string::compare(param_1,0,(char *)0xffffffffffffffff,0x1013d6964);
    if (iVar2 == 0) {
      return 3;
    }
    bVar6 = *(byte *)(param_1 + 0x17);
    uVar4 = (ulong)bVar6;
    uVar5 = *(ulong *)(param_1 + 8);
  }
  uVar1 = uVar5;
  if (-1 < (char)bVar6) {
    uVar1 = uVar4;
  }
  if (uVar1 == 2) {
    iVar2 = std::string::compare(param_1,0,(char *)0xffffffffffffffff,0x1013d6967);
    if (iVar2 == 0) {
      return 4;
    }
    bVar6 = *(byte *)(param_1 + 0x17);
    uVar4 = (ulong)bVar6;
    uVar5 = *(ulong *)(param_1 + 8);
  }
  uVar1 = uVar5;
  if (-1 < (char)bVar6) {
    uVar1 = uVar4;
  }
  if (uVar1 == 2) {
    iVar2 = std::string::compare(param_1,0,(char *)0xffffffffffffffff,0x1013d696a);
    if (iVar2 == 0) {
      return 5;
    }
    bVar6 = *(byte *)(param_1 + 0x17);
    uVar4 = (ulong)bVar6;
    uVar5 = *(ulong *)(param_1 + 8);
  }
  uVar1 = uVar5;
  if (-1 < (char)bVar6) {
    uVar1 = uVar4;
  }
  if (uVar1 == 2) {
    iVar2 = std::string::compare(param_1,0,(char *)0xffffffffffffffff,0x1013d696d);
    if (iVar2 == 0) {
      return 6;
    }
    bVar6 = *(byte *)(param_1 + 0x17);
    uVar4 = (ulong)bVar6;
    uVar5 = *(ulong *)(param_1 + 8);
  }
  uVar1 = uVar5;
  if (-1 < (char)bVar6) {
    uVar1 = uVar4;
  }
  if (uVar1 == 2) {
    iVar2 = std::string::compare(param_1,0,(char *)0xffffffffffffffff,0x1013d6970);
    if (iVar2 == 0) {
      return 7;
    }
    bVar6 = *(byte *)(param_1 + 0x17);
    uVar4 = (ulong)bVar6;
    uVar5 = *(ulong *)(param_1 + 8);
  }
  uVar1 = uVar5;
  if (-1 < (char)bVar6) {
    uVar1 = uVar4;
  }
  if (uVar1 == 2) {
    iVar2 = std::string::compare(param_1,0,(char *)0xffffffffffffffff,0x1013d6973);
    if (iVar2 == 0) {
      return 8;
    }
    bVar6 = *(byte *)(param_1 + 0x17);
    uVar4 = (ulong)bVar6;
    uVar5 = *(ulong *)(param_1 + 8);
  }
  uVar1 = uVar5;
  if (-1 < (char)bVar6) {
    uVar1 = uVar4;
  }
  if (uVar1 == 2) {
    iVar2 = std::string::compare(param_1,0,(char *)0xffffffffffffffff,0x1013d6976);
    if (iVar2 == 0) {
      return 9;
    }
    bVar6 = *(byte *)(param_1 + 0x17);
    uVar4 = (ulong)bVar6;
    uVar5 = *(ulong *)(param_1 + 8);
  }
  uVar1 = uVar5;
  if (-1 < (char)bVar6) {
    uVar1 = uVar4;
  }
  if (uVar1 == 2) {
    iVar2 = std::string::compare(param_1,0,(char *)0xffffffffffffffff,0x1013d6979);
    if (iVar2 == 0) {
      return 10;
    }
    bVar6 = *(byte *)(param_1 + 0x17);
    uVar4 = (ulong)bVar6;
    uVar5 = *(ulong *)(param_1 + 8);
  }
  uVar1 = uVar5;
  if (-1 < (char)bVar6) {
    uVar1 = uVar4;
  }
  if (uVar1 == 2) {
    iVar2 = std::string::compare(param_1,0,(char *)0xffffffffffffffff,0x1013d697c);
    if (iVar2 == 0) {
      return 0xb;
    }
    bVar6 = *(byte *)(param_1 + 0x17);
    uVar4 = (ulong)bVar6;
    uVar5 = *(ulong *)(param_1 + 8);
  }
  uVar1 = uVar5;
  if (-1 < (char)bVar6) {
    uVar1 = uVar4;
  }
  if (uVar1 == 2) {
    iVar2 = std::string::compare(param_1,0,(char *)0xffffffffffffffff,0x1013d697f);
    if (iVar2 == 0) {
      return 0xc;
    }
    bVar6 = *(byte *)(param_1 + 0x17);
    uVar4 = (ulong)bVar6;
    uVar5 = *(ulong *)(param_1 + 8);
  }
  uVar1 = uVar5;
  if (-1 < (char)bVar6) {
    uVar1 = uVar4;
  }
  if (uVar1 == 2) {
    iVar2 = std::string::compare(param_1,0,(char *)0xffffffffffffffff,0x1013d6982);
    if (iVar2 == 0) {
      return 0xd;
    }
    bVar6 = *(byte *)(param_1 + 0x17);
    uVar4 = (ulong)bVar6;
    uVar5 = *(ulong *)(param_1 + 8);
  }
  uVar1 = uVar5;
  if (-1 < (char)bVar6) {
    uVar1 = uVar4;
  }
  if (uVar1 == 7) {
    iVar2 = std::string::compare(param_1,0,(char *)0xffffffffffffffff,0x1013d6985);
    if (iVar2 == 0) {
      return 0xe;
    }
    bVar6 = *(byte *)(param_1 + 0x17);
    uVar4 = (ulong)bVar6;
    uVar5 = *(ulong *)(param_1 + 8);
  }
  if (-1 < (char)bVar6) {
    uVar5 = uVar4;
  }
  if (uVar5 == 7) {
    iVar2 = std::string::compare(param_1,0,(char *)0xffffffffffffffff,0x1013d698d);
    uVar3 = 0xf;
    if (iVar2 != 0) {
      uVar3 = 0x10;
    }
  }
  else {
    uVar3 = 0x10;
  }
  return uVar3;
}




void FUN_1000f1880(undefined8 param_1)

{
  FUN_1000f18a4();
  FUN_1000f13b4(param_1);
  return;
}




undefined4 FUN_1000f18a4(void)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_100126d70();
  if (uVar1 < 0x11) {
    uVar2 = *(undefined4 *)((long)&PTR___mh_execute_header_10114c2d4 + (long)(int)uVar1 * 4);
  }
  else {
    uVar2 = 0x11;
  }
  return uVar2;
}




undefined8 * FUN_1000f18d4(byte *param_1,int param_2)

{
  size_t sVar1;
  size_t sVar2;
  byte bVar3;
  ulong uVar4;
  int iVar5;
  undefined8 *puVar6;
  char *pcVar7;
  byte *pbVar8;
  char *pcVar9;
  byte *pbVar10;
  ulong uVar11;
  
  bVar3 = param_1[0x17];
  uVar11 = (ulong)bVar3;
  sVar1 = *(size_t *)(param_1 + 8);
  if (-1 < (char)bVar3) {
    sVar1 = uVar11;
  }
  sVar2 = DAT_101d917a0;
  if (-1 < (char)DAT_101d917af) {
    sVar2 = (ulong)DAT_101d917af;
  }
  if (sVar1 == sVar2) {
    pbVar8 = *(byte **)param_1;
    if (-1 < (char)bVar3) {
      pbVar8 = param_1;
    }
    pbVar10 = DAT_101d91798;
    if (-1 < (char)DAT_101d917af) {
      pbVar10 = (byte *)&DAT_101d91798;
    }
    if ((char)bVar3 < '\0') {
      if ((sVar1 == 0) || (iVar5 = _memcmp(pbVar8,pbVar10,sVar1), iVar5 == 0)) goto LAB_1000f1a08;
    }
    else {
      if (sVar1 == 0) {
LAB_1000f1a08:
        pcVar7 = "MENU_GUILD_TYPE_LABEL_CASUAL";
        pcVar9 = "MENU_GUILD_TYPE_LABEL_CAPS_CASUAL";
        goto LAB_1000f1c34;
      }
      pbVar8 = param_1;
      uVar4 = uVar11;
      if ((uint)*pbVar10 == ((uint)*(byte **)param_1 & 0xff)) {
        do {
          pbVar10 = pbVar10 + 1;
          pbVar8 = pbVar8 + 1;
          if (uVar4 - 1 == 0) goto LAB_1000f1a08;
          uVar4 = uVar4 - 1;
        } while (*pbVar8 == *pbVar10);
      }
    }
  }
  sVar2 = DAT_101d917b8;
  if (-1 < (char)DAT_101d917c7) {
    sVar2 = (ulong)DAT_101d917c7;
  }
  if (sVar1 == sVar2) {
    pbVar8 = *(byte **)param_1;
    if (-1 < (char)bVar3) {
      pbVar8 = param_1;
    }
    pbVar10 = DAT_101d917b0;
    if (-1 < (char)DAT_101d917c7) {
      pbVar10 = (byte *)&DAT_101d917b0;
    }
    if ((char)bVar3 < '\0') {
      if ((sVar1 == 0) || (iVar5 = _memcmp(pbVar8,pbVar10,sVar1), iVar5 == 0)) goto LAB_1000f1aa8;
    }
    else {
      if (sVar1 == 0) {
LAB_1000f1aa8:
        pcVar7 = "MENU_GUILD_TYPE_LABEL_MIDCORE";
        pcVar9 = "MENU_GUILD_TYPE_LABEL_CAPS_MIDCORE";
        goto LAB_1000f1c34;
      }
      pbVar8 = param_1;
      uVar4 = uVar11;
      if ((uint)*pbVar10 == ((uint)*(byte **)param_1 & 0xff)) {
        do {
          pbVar10 = pbVar10 + 1;
          pbVar8 = pbVar8 + 1;
          if (uVar4 - 1 == 0) goto LAB_1000f1aa8;
          uVar4 = uVar4 - 1;
        } while (*pbVar8 == *pbVar10);
      }
    }
  }
  sVar2 = DAT_101d917d0;
  if (-1 < (char)DAT_101d917df) {
    sVar2 = (ulong)DAT_101d917df;
  }
  if (sVar1 == sVar2) {
    pbVar8 = *(byte **)param_1;
    if (-1 < (char)bVar3) {
      pbVar8 = param_1;
    }
    pbVar10 = DAT_101d917c8;
    if (-1 < (char)DAT_101d917df) {
      pbVar10 = (byte *)&DAT_101d917c8;
    }
    if ((char)bVar3 < '\0') {
      if ((sVar1 == 0) || (iVar5 = _memcmp(pbVar8,pbVar10,sVar1), iVar5 == 0)) goto LAB_1000f1b48;
    }
    else {
      if (sVar1 == 0) {
LAB_1000f1b48:
        pcVar7 = "MENU_GUILD_TYPE_LABEL_COMPETITIVE";
        pcVar9 = "MENU_GUILD_TYPE_LABEL_CAPS_COMPETITIVE";
        goto LAB_1000f1c34;
      }
      pbVar8 = param_1;
      uVar4 = uVar11;
      if ((uint)*pbVar10 == ((uint)*(byte **)param_1 & 0xff)) {
        do {
          pbVar10 = pbVar10 + 1;
          pbVar8 = pbVar8 + 1;
          if (uVar4 - 1 == 0) goto LAB_1000f1b48;
          uVar4 = uVar4 - 1;
        } while (*pbVar8 == *pbVar10);
      }
    }
  }
  sVar2 = DAT_101d917e8;
  if (-1 < (char)DAT_101d917f7) {
    sVar2 = (ulong)DAT_101d917f7;
  }
  if (sVar1 == sVar2) {
    pbVar8 = *(byte **)param_1;
    if (-1 < (char)bVar3) {
      pbVar8 = param_1;
    }
    pbVar10 = DAT_101d917e0;
    if (-1 < (char)DAT_101d917f7) {
      pbVar10 = (byte *)&DAT_101d917e0;
    }
    if ((char)bVar3 < '\0') {
      if ((sVar1 == 0) || (iVar5 = _memcmp(pbVar8,pbVar10,sVar1), iVar5 == 0)) goto LAB_1000f1be8;
    }
    else {
      if (sVar1 == 0) {
LAB_1000f1be8:
        pcVar7 = "MENU_GUILD_TYPE_LABEL_UNIVERSITY";
        pcVar9 = "MENU_GUILD_TYPE_LABEL_CAPS_UNIVERSITY";
        goto LAB_1000f1c34;
      }
      pbVar8 = param_1;
      uVar4 = uVar11;
      if ((uint)*pbVar10 == ((uint)*(byte **)param_1 & 0xff)) {
        do {
          pbVar10 = pbVar10 + 1;
          pbVar8 = pbVar8 + 1;
          if (uVar4 - 1 == 0) goto LAB_1000f1be8;
          uVar4 = uVar4 - 1;
        } while (*pbVar8 == *pbVar10);
      }
    }
  }
  sVar2 = DAT_101d91800;
  if (-1 < (char)DAT_101d9180f) {
    sVar2 = (ulong)DAT_101d9180f;
  }
  if (sVar1 != sVar2) {
LAB_1000f1c0c:
    return &DAT_101d91650;
  }
  pbVar8 = *(byte **)param_1;
  if (-1 < (char)bVar3) {
    pbVar8 = param_1;
  }
  pbVar10 = DAT_101d917f8;
  if (-1 < (char)DAT_101d9180f) {
    pbVar10 = (byte *)&DAT_101d917f8;
  }
  if ((char)bVar3 < '\0') {
    if ((sVar1 != 0) && (iVar5 = _memcmp(pbVar8,pbVar10,sVar1), iVar5 != 0)) goto LAB_1000f1c0c;
  }
  else if (sVar1 != 0) {
    if ((uint)*pbVar10 == ((uint)*(byte **)param_1 & 0xff)) {
      do {
        uVar11 = uVar11 - 1;
        pbVar10 = pbVar10 + 1;
        param_1 = param_1 + 1;
        if (uVar11 == 0) goto LAB_1000f1c24;
      } while (*param_1 == *pbVar10);
    }
    goto LAB_1000f1c0c;
  }
LAB_1000f1c24:
  pcVar7 = "MENU_GUILD_TYPE_LABEL_ANY";
  pcVar9 = "MENU_GUILD_TYPE_LABEL_CAPS_ANY";
LAB_1000f1c34:
  if (param_2 == 0) {
    pcVar9 = pcVar7;
  }
  puVar6 = (undefined8 *)FUN_1004e0150(pcVar9,0);
  return puVar6;
}




bool FUN_1000f1c50(undefined8 param_1)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  iVar2 = FUN_1004e3634();
  if (iVar2 == 0) {
    bVar1 = true;
  }
  else {
    uVar4 = 0;
    do {
      iVar2 = FUN_1004e363c(param_1,uVar4);
      if (iVar2 == 0x20) break;
      uVar4 = uVar4 + 1;
      uVar3 = FUN_1004e3634(param_1);
    } while (uVar4 < uVar3);
    bVar1 = iVar2 != 0x20;
  }
  return bVar1;
}




bool FUN_1000f1cbc(undefined8 param_1)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  
  iVar4 = FUN_1004e3634();
  if (iVar4 == 0) {
    bVar7 = true;
  }
  else {
    uVar6 = 0;
    do {
      iVar4 = FUN_1004e363c(param_1,uVar6);
      bVar1 = iVar4 - 0x30U < 10;
      bVar2 = iVar4 - 0x61U < 0x1a;
      bVar3 = iVar4 - 0x41U < 0x1a;
      bVar7 = (bVar1 || bVar3) || bVar2;
      if ((!bVar1 && !bVar3) && !bVar2) {
        return bVar7;
      }
      uVar6 = uVar6 + 1;
      uVar5 = FUN_1004e3634(param_1);
    } while (uVar6 < uVar5);
  }
  return bVar7;
}




undefined1 FUN_1000f1d48(undefined8 param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  iVar1 = FUN_1004e3634();
  if (iVar1 != 0) {
    uVar3 = 0;
    do {
      iVar1 = FUN_1004e363c(param_1,uVar3);
      if (9 < iVar1 - 0x30U) {
        return 0;
      }
      uVar3 = uVar3 + 1;
      uVar2 = FUN_1004e3634(param_1);
    } while (uVar3 < uVar2);
  }
  return 1;
}




undefined1 FUN_1000f1db4(undefined8 param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  iVar1 = FUN_1004e3634();
  if (iVar1 != 0) {
    uVar3 = 0;
    do {
      iVar1 = FUN_1004e363c(param_1,uVar3);
      if (0x5e < iVar1 - 0x20U) {
        return 0;
      }
      uVar3 = uVar3 + 1;
      uVar2 = FUN_1004e3634(param_1);
    } while (uVar3 < uVar2);
  }
  return 1;
}




void FUN_1000f1e20(undefined8 param_1,undefined8 param_2,long param_3,int param_4)

{
  char *pcVar1;
  long lVar2;
  int iVar3;
  undefined8 uVar4;
  char *pcVar5;
  undefined1 auStack_90 [8];
  void *local_88;
  undefined1 auStack_80 [8];
  void *local_78;
  undefined1 auStack_70 [8];
  void *local_68;
  double local_60;
  int local_58;
  int local_54;
  undefined1 auStack_50 [8];
  void *local_48;
  undefined1 auStack_40 [8];
  void *local_38;
  
  thunk_FUN_1004e439c(param_1,param_2);
  FUN_1004e313c(auStack_40);
  FUN_1004e313c(auStack_50);
  iVar3 = FUN_1004e3054((double)param_3,&local_54,&local_58,&local_60);
  FUN_1004e313c(auStack_70);
  FUN_1004e313c(auStack_80);
  if (iVar3 < 1) {
    if (0 < local_54) {
      pcVar5 = "GENERIC_TIME_UNIT_HOURS_SHORT";
      if (param_4 == 0) {
        pcVar5 = "GENERIC_TIME_UNIT_HOURS";
      }
      pcVar1 = "GENERIC_TIME_UNIT_HOUR_SHORT";
      if (param_4 == 0) {
        pcVar1 = "GENERIC_TIME_UNIT_HOUR";
      }
      if (local_54 != 1) {
        pcVar1 = pcVar5;
      }
      uVar4 = FUN_1004e0150(pcVar1,0);
      FUN_1000153b4(auStack_70,uVar4);
      FUN_1004e38ac(auStack_40,"%d%s");
      if (local_58 < 1) goto LAB_1000f2108;
      pcVar5 = "GENERIC_TIME_UNIT_MINUTES_SHORT";
      if (param_4 == 0) {
        pcVar5 = "GENERIC_TIME_UNIT_MINUTES";
      }
      pcVar1 = "GENERIC_TIME_UNIT_MINUTE_SHORT";
      if (param_4 == 0) {
        pcVar1 = "GENERIC_TIME_UNIT_MINUTE";
      }
      if (local_58 != 1) {
        pcVar1 = pcVar5;
      }
      uVar4 = FUN_1004e0150(pcVar1,0);
      FUN_1000153b4(auStack_80,uVar4);
      goto LAB_1000f2020;
    }
    if (local_58 < 1) {
      pcVar5 = "GENERIC_TIME_UNIT_SECONDS_SHORT";
      if (param_4 == 0) {
        pcVar5 = "GENERIC_TIME_UNIT_SECONDS";
      }
      pcVar1 = "GENERIC_TIME_UNIT_SECOND_SHORT";
      if (param_4 == 0) {
        pcVar1 = "GENERIC_TIME_UNIT_SECOND";
      }
      if (local_60 <= 1.0) {
        pcVar5 = pcVar1;
      }
      uVar4 = FUN_1004e0150(pcVar5,0);
      FUN_1000153b4(auStack_70,uVar4);
    }
    else {
      pcVar5 = "GENERIC_TIME_UNIT_MINUTES_SHORT";
      if (param_4 == 0) {
        pcVar5 = "GENERIC_TIME_UNIT_MINUTES";
      }
      pcVar1 = "GENERIC_TIME_UNIT_MINUTE_SHORT";
      if (param_4 == 0) {
        pcVar1 = "GENERIC_TIME_UNIT_MINUTE";
      }
      if (local_58 != 1) {
        pcVar1 = pcVar5;
      }
      uVar4 = FUN_1004e0150(pcVar1,0);
      FUN_1000153b4(auStack_70,uVar4);
    }
    pcVar5 = "%d%s";
    lVar2 = -0x30;
  }
  else {
    pcVar5 = "GENERIC_TIME_UNIT_DAYS_SHORT";
    if (param_4 == 0) {
      pcVar5 = "GENERIC_TIME_UNIT_DAYS";
    }
    pcVar1 = "GENERIC_TIME_UNIT_DAY_SHORT";
    if (param_4 == 0) {
      pcVar1 = "GENERIC_TIME_UNIT_DAY";
    }
    if (iVar3 != 1) {
      pcVar1 = pcVar5;
    }
    uVar4 = FUN_1004e0150(pcVar1,0);
    FUN_1000153b4(auStack_70,uVar4);
    FUN_1004e38ac(auStack_40,"%d%s");
    if (local_54 < 1) goto LAB_1000f2108;
    pcVar5 = "GENERIC_TIME_UNIT_HOURS_SHORT";
    if (param_4 == 0) {
      pcVar5 = "GENERIC_TIME_UNIT_HOURS";
    }
    pcVar1 = "GENERIC_TIME_UNIT_HOUR_SHORT";
    if (param_4 == 0) {
      pcVar1 = "GENERIC_TIME_UNIT_HOUR";
    }
    if (local_54 != 1) {
      pcVar1 = pcVar5;
    }
    uVar4 = FUN_1004e0150(pcVar1,0);
    FUN_1000153b4(auStack_80,uVar4);
LAB_1000f2020:
    pcVar5 = " %d%s";
    lVar2 = -0x40;
  }
  FUN_1004e38ac(&stack0xfffffffffffffff0 + lVar2,pcVar5);
LAB_1000f2108:
  FUN_1004e3120(auStack_90,"[NUMBER_1]");
  FUN_1004e3bc4(param_1,0,auStack_90,auStack_40);
  if (local_88 != (void *)0x0) {
    operator_delete__(local_88);
  }
  FUN_1004e3120(auStack_90,"[TIME_UNIT_1]");
  FUN_1004e3bc4(param_1,0,auStack_90,auStack_70);
  if (local_88 != (void *)0x0) {
    operator_delete__(local_88);
  }
  FUN_1004e3120(auStack_90,"[NUMBER_2]");
  FUN_1004e3bc4(param_1,0,auStack_90,auStack_50);
  if (local_88 != (void *)0x0) {
    operator_delete__(local_88);
  }
  FUN_1004e3120(auStack_90,"[TIME_UNIT_2]");
  FUN_1004e3bc4(param_1,0,auStack_90,auStack_80);
  if (local_88 != (void *)0x0) {
    operator_delete__(local_88);
  }
  if (local_78 != (void *)0x0) {
    operator_delete__(local_78);
  }
  if (local_68 != (void *)0x0) {
    operator_delete__(local_68);
  }
  if (local_48 != (void *)0x0) {
    operator_delete__(local_48);
  }
  if (local_38 != (void *)0x0) {
    operator_delete__(local_38);
  }
  return;
}




void FUN_1000f220c(undefined8 param_1,undefined8 param_2,long param_3)

{
  char *pcVar1;
  int iVar2;
  undefined1 auStack_a0 [8];
  void *local_98;
  double local_90;
  int local_88;
  int local_84;
  undefined1 auStack_80 [8];
  void *local_78;
  undefined1 auStack_70 [8];
  void *local_68;
  undefined1 auStack_60 [8];
  void *local_58;
  undefined1 auStack_50 [8];
  void *local_48;
  undefined1 auStack_40 [8];
  void *local_38;
  
  thunk_FUN_1004e439c(param_1,param_2);
  FUN_1004e313c(auStack_40);
  FUN_1004e313c(auStack_50);
  FUN_1004e313c(auStack_60);
  FUN_1004e313c(auStack_70);
  FUN_1004e313c(auStack_80);
  iVar2 = FUN_1004e3054((double)param_3,&local_84,&local_88,&local_90);
  if (0 < iVar2) {
    FUN_1004e38ac(auStack_40,"%d:");
  }
  pcVar1 = "0%d:";
  if (9 < local_84) {
    pcVar1 = "%d:";
  }
  FUN_1004e38ac(auStack_50,pcVar1);
  pcVar1 = "0%d:";
  if (9 < local_88) {
    pcVar1 = "%d:";
  }
  FUN_1004e38ac(auStack_60,pcVar1);
  pcVar1 = "0%d";
  if (9 < (int)local_90) {
    pcVar1 = "%d";
  }
  FUN_1004e38ac(auStack_70,pcVar1);
  FUN_1004e3120(auStack_a0,"[NUMBER_DAYS]");
  FUN_1004e3bc4(param_1,0,auStack_a0,auStack_40);
  if (local_98 != (void *)0x0) {
    operator_delete__(local_98);
  }
  FUN_1004e3120(auStack_a0,"[TIME_UNIT_DAYS]");
  FUN_1004e3bc4(param_1,0,auStack_a0,auStack_80);
  if (local_98 != (void *)0x0) {
    operator_delete__(local_98);
  }
  FUN_1004e3120(auStack_a0,"[NUMBER_HOURS]");
  FUN_1004e3bc4(param_1,0,auStack_a0,auStack_50);
  if (local_98 != (void *)0x0) {
    operator_delete__(local_98);
  }
  FUN_1004e3120(auStack_a0,"[TIME_UNIT_HOURS]");
  FUN_1004e3bc4(param_1,0,auStack_a0,auStack_80);
  if (local_98 != (void *)0x0) {
    operator_delete__(local_98);
  }
  FUN_1004e3120(auStack_a0,"[NUMBER_MINUTES]");
  FUN_1004e3bc4(param_1,0,auStack_a0,auStack_60);
  if (local_98 != (void *)0x0) {
    operator_delete__(local_98);
  }
  FUN_1004e3120(auStack_a0,"[TIME_UNIT_MINUTES]");
  FUN_1004e3bc4(param_1,0,auStack_a0,auStack_80);
  if (local_98 != (void *)0x0) {
    operator_delete__(local_98);
  }
  FUN_1004e3120(auStack_a0,"[NUMBER_SECONDS]");
  FUN_1004e3bc4(param_1,0,auStack_a0,auStack_70);
  if (local_98 != (void *)0x0) {
    operator_delete__(local_98);
  }
  FUN_1004e3120(auStack_a0,"[TIME_UNIT_SECONDS]");
  FUN_1004e3bc4(param_1,0,auStack_a0,auStack_80);
  if (local_98 != (void *)0x0) {
    operator_delete__(local_98);
  }
  if (local_78 != (void *)0x0) {
    operator_delete__(local_78);
  }
  if (local_68 != (void *)0x0) {
    operator_delete__(local_68);
  }
  if (local_58 != (void *)0x0) {
    operator_delete__(local_58);
  }
  if (local_48 != (void *)0x0) {
    operator_delete__(local_48);
  }
  if (local_38 != (void *)0x0) {
    operator_delete__(local_38);
  }
  return;
}




void FUN_1000f24c8(undefined8 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_e0 [8];
  void *local_d8;
  undefined1 local_d0 [8];
  int local_c8;
  int local_c4;
  undefined1 auStack_c0 [8];
  void *local_b8;
  undefined1 auStack_b0 [8];
  void *local_a8;
  undefined1 auStack_a0 [8];
  void *local_98;
  undefined1 auStack_90 [8];
  void *local_88;
  undefined1 auStack_80 [8];
  void *local_78;
  undefined1 auStack_70 [8];
  void *local_68;
  undefined1 auStack_60 [8];
  void *local_58;
  undefined1 auStack_50 [8];
  void *local_48;
  
  thunk_FUN_1004e439c(param_1,param_2);
  FUN_1004e313c(auStack_50);
  FUN_1004e313c(auStack_60);
  FUN_1004e313c(auStack_70);
  FUN_1004e313c(auStack_80);
  FUN_1004e313c(auStack_90);
  FUN_1004e313c(auStack_a0);
  FUN_1004e313c(auStack_b0);
  FUN_1004e313c(auStack_c0);
  iVar1 = FUN_1004e3054((double)param_3,&local_c4,&local_c8,local_d0);
  if (iVar1 < 1) {
    if (local_c4 < 1) goto LAB_1000f2620;
  }
  else {
    uVar2 = FUN_1004e0150("GENERIC_TIME_UNIT_DAYS_SHORT",0);
    FUN_1000153b4(auStack_60,uVar2);
    FUN_1004e3120(auStack_e0," ");
    FUN_1004e372c(auStack_60,auStack_e0);
    if (local_d8 != (void *)0x0) {
      operator_delete__(local_d8);
    }
    FUN_1004e38ac(auStack_50,"%d");
  }
  uVar2 = FUN_1004e0150("GENERIC_TIME_UNIT_HOURS_SHORT",0);
  FUN_1000153b4(auStack_80,uVar2);
  FUN_1004e3120(auStack_e0," ");
  FUN_1004e372c(auStack_80,auStack_e0);
  if (local_d8 != (void *)0x0) {
    operator_delete__(local_d8);
  }
  FUN_1004e38ac(auStack_70,"%d");
LAB_1000f2620:
  if (((0 < local_c8) || (0 < local_c4)) || (0 < iVar1)) {
    uVar2 = FUN_1004e0150("GENERIC_TIME_UNIT_MINUTES_SHORT",0);
    FUN_1000153b4(auStack_a0,uVar2);
    FUN_1004e3120(auStack_e0," ");
    FUN_1004e372c(auStack_a0,auStack_e0);
    if (local_d8 != (void *)0x0) {
      operator_delete__(local_d8);
    }
    FUN_1004e38ac(auStack_90,"%d");
  }
  uVar2 = FUN_1004e0150("GENERIC_TIME_UNIT_SECONDS_SHORT",0);
  FUN_1000153b4(auStack_c0,uVar2);
  FUN_1004e38ac(auStack_b0,"%d");
  FUN_1004e3120(auStack_e0,"[NUMBER_DAYS]");
  FUN_1004e3bc4(param_1,0,auStack_e0,auStack_50);
  if (local_d8 != (void *)0x0) {
    operator_delete__(local_d8);
  }
  FUN_1004e3120(auStack_e0,"[TIME_UNIT_DAYS]");
  FUN_1004e3bc4(param_1,0,auStack_e0,auStack_60);
  if (local_d8 != (void *)0x0) {
    operator_delete__(local_d8);
  }
  FUN_1004e3120(auStack_e0,"[NUMBER_HOURS]");
  FUN_1004e3bc4(param_1,0,auStack_e0,auStack_70);
  if (local_d8 != (void *)0x0) {
    operator_delete__(local_d8);
  }
  FUN_1004e3120(auStack_e0,"[TIME_UNIT_HOURS]");
  FUN_1004e3bc4(param_1,0,auStack_e0,auStack_80);
  if (local_d8 != (void *)0x0) {
    operator_delete__(local_d8);
  }
  FUN_1004e3120(auStack_e0,"[NUMBER_MINUTES]");
  FUN_1004e3bc4(param_1,0,auStack_e0,auStack_90);
  if (local_d8 != (void *)0x0) {
    operator_delete__(local_d8);
  }
  FUN_1004e3120(auStack_e0,"[TIME_UNIT_MINUTES]");
  FUN_1004e3bc4(param_1,0,auStack_e0,auStack_a0);
  if (local_d8 != (void *)0x0) {
    operator_delete__(local_d8);
  }
  FUN_1004e3120(auStack_e0,"[NUMBER_SECONDS]");
  FUN_1004e3bc4(param_1,0,auStack_e0,auStack_b0);
  if (local_d8 != (void *)0x0) {
    operator_delete__(local_d8);
  }
  FUN_1004e3120(auStack_e0,"[TIME_UNIT_SECONDS]");
  FUN_1004e3bc4(param_1,0,auStack_e0,auStack_c0);
  if (local_d8 != (void *)0x0) {
    operator_delete__(local_d8);
  }
  if (local_b8 != (void *)0x0) {
    operator_delete__(local_b8);
  }
  if (local_a8 != (void *)0x0) {
    operator_delete__(local_a8);
  }
  if (local_98 != (void *)0x0) {
    operator_delete__(local_98);
  }
  if (local_88 != (void *)0x0) {
    operator_delete__(local_88);
  }
  if (local_78 != (void *)0x0) {
    operator_delete__(local_78);
  }
  if (local_68 != (void *)0x0) {
    operator_delete__(local_68);
  }
  if (local_58 != (void *)0x0) {
    operator_delete__(local_58);
  }
  if (local_48 != (void *)0x0) {
    operator_delete__(local_48);
  }
  return;
}




void FUN_1000f28c4(undefined8 param_1,undefined8 param_2,int param_3)

{
  if (param_3 != 0) {
    FUN_1000f220c();
    return;
  }
  FUN_1000f24c8();
  return;
}




void FUN_1000f28d0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_68 [64];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_101444218;
  FUN_1004d2a5c();
  FUN_1004d2698(auStack_68,"MENU_LOCALIZED_HOUR_%d");
  uVar1 = FUN_1004e0150(auStack_68,0);
  thunk_FUN_1004e439c(param_1,uVar1);
  if (*(long *)PTR____stack_chk_guard_101444218 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_1000f2950(undefined8 param_1,ulong param_2)

{
  undefined8 uVar1;
  char *pcVar2;
  undefined8 uVar3;
  int iVar4;
  undefined1 auStack_60 [8];
  void *local_58;
  undefined1 auStack_50 [8];
  void *local_48;
  undefined1 auStack_40 [8];
  void *local_38;
  
  FUN_1004e313c(param_1);
  iVar4 = (int)((float)param_2 * 1.1574074e-05);
  if (iVar4 < 0x1f) {
    if (iVar4 < 0xe) {
      if (iVar4 < 4) {
        if (param_2 < 0x3f481) {
          uVar1 = FUN_1004e0150("MENU_GENERIC_REMAINING_COUNTDOWN",0);
          thunk_FUN_1004e439c(auStack_40,uVar1);
          FUN_1004e3120(auStack_50,"[TIME]");
          FUN_1004e3120(auStack_60,
                        "[NUMBER_DAYS][TIME_UNIT_DAYS][NUMBER_HOURS][TIME_UNIT_HOURS][NUMBER_MINUTES][TIME_UNIT_MINUTES][NUMBER_SECONDS][TIME_UNIT_SECONDS]"
                       );
          FUN_1004e3bc4(auStack_40,0,auStack_50,auStack_60);
          if (local_58 != (void *)0x0) {
            operator_delete__(local_58);
          }
          if (local_48 != (void *)0x0) {
            operator_delete__(local_48);
          }
          FUN_1000153b4(param_1,auStack_40);
        }
        else {
          uVar1 = FUN_1004e0150("MENU_GENERIC_X_HOURS_REMAINING",0);
          FUN_1000153b4(param_1,uVar1);
          FUN_1004e313c(auStack_40);
          FUN_1004e38ac(auStack_40,"%d");
          FUN_1004e3120(auStack_50,"[AMOUNT]");
          FUN_1004e3bc4(param_1,0,auStack_50,auStack_40);
          if (local_48 != (void *)0x0) {
            operator_delete__(local_48);
          }
        }
        if (local_38 != (void *)0x0) {
          operator_delete__(local_38);
        }
        return;
      }
      uVar1 = FUN_1004e0150("MENU_GENERIC_X_DAYS_REMAINING",0);
      pcVar2 = "MENU_GENERIC_1_DAY_REMAINING";
    }
    else {
      iVar4 = (int)((float)iVar4 * 0.14285715);
      uVar1 = FUN_1004e0150("MENU_GENERIC_X_WEEKS_REMAINING",0);
      pcVar2 = "MENU_GENERIC_1_WEEK_REMAINING";
    }
  }
  else {
    iVar4 = (int)((float)iVar4 * 0.033333335);
    uVar1 = FUN_1004e0150("MENU_GENERIC_X_MONTHS_REMAINING",0);
    pcVar2 = "MENU_GENERIC_1_MONTH_REMAINING";
  }
  uVar3 = FUN_1004e0150(pcVar2,0);
  FUN_1000efc34(param_1,uVar1,uVar3,iVar4);
  return;
}




void FUN_1000f2b7c(undefined8 param_1)

{
  undefined1 auStack_40 [8];
  void *local_38;
  undefined1 auStack_30 [8];
  void *local_28;
  
  FUN_1004e3120(auStack_30,"[WP]");
  FUN_1004e3120(auStack_40,"{235,113,82,255}");
  FUN_1004e3d50(param_1,0,auStack_30,auStack_40);
  if (local_38 != (void *)0x0) {
    operator_delete__(local_38);
  }
  if (local_28 != (void *)0x0) {
    operator_delete__(local_28);
  }
  FUN_1004e3120(auStack_30,"[/WP]");
  FUN_1004e3120(auStack_40,"{\\}");
  FUN_1004e3d50(param_1,0,auStack_30,auStack_40);
  if (local_38 != (void *)0x0) {
    operator_delete__(local_38);
  }
  if (local_28 != (void *)0x0) {
    operator_delete__(local_28);
  }
  FUN_1004e3120(auStack_30,"[CP]");
  FUN_1004e3120(auStack_40,"{118,224,250,255}");
  FUN_1004e3d50(param_1,0,auStack_30,auStack_40);
  if (local_38 != (void *)0x0) {
    operator_delete__(local_38);
  }
  if (local_28 != (void *)0x0) {
    operator_delete__(local_28);
  }
  FUN_1004e3120(auStack_30,"[/CP]");
  FUN_1004e3120(auStack_40,"{\\}");
  FUN_1004e3d50(param_1,0,auStack_30,auStack_40);
  if (local_38 != (void *)0x0) {
    operator_delete__(local_38);
  }
  if (local_28 != (void *)0x0) {
    operator_delete__(local_28);
  }
  FUN_1004e3120(auStack_30,"[HP]");
  FUN_1004e3120(auStack_40,"{64,255,0,255}");
  FUN_1004e3d50(param_1,0,auStack_30,auStack_40);
  if (local_38 != (void *)0x0) {
    operator_delete__(local_38);
  }
  if (local_28 != (void *)0x0) {
    operator_delete__(local_28);
  }
  FUN_1004e3120(auStack_30,"[/HP]");
  FUN_1004e3120(auStack_40,"{\\}");
  FUN_1004e3d50(param_1,0,auStack_30,auStack_40);
  if (local_38 != (void *)0x0) {
    operator_delete__(local_38);
  }
  if (local_28 != (void *)0x0) {
    operator_delete__(local_28);
  }
  FUN_1004e3120(auStack_30,"[EM]");
  FUN_1004e3120(auStack_40,"{255,170,45,255}");
  FUN_1004e3d50(param_1,0,auStack_30,auStack_40);
  if (local_38 != (void *)0x0) {
    operator_delete__(local_38);
  }
  if (local_28 != (void *)0x0) {
    operator_delete__(local_28);
  }
  FUN_1004e3120(auStack_30,"[/EM]");
  FUN_1004e3120(auStack_40,"{\\}");
  FUN_1004e3d50(param_1,0,auStack_30,auStack_40);
  if (local_38 != (void *)0x0) {
    operator_delete__(local_38);
  }
  if (local_28 != (void *)0x0) {
    operator_delete__(local_28);
  }
  return;
}




void FUN_1000f2e00(float param_1,float param_2,undefined8 param_3)

{
  float fVar1;
  float fVar2;
  
  fVar1 = param_2;
  FUN_100651708(param_3,1);
  FUN_1006511d0(param_3);
  fVar2 = fVar1;
  while( true ) {
    if (param_1 < param_2) {
      return;
    }
    param_1 = param_1 + -20.0;
    if (param_1 <= param_2) {
      param_1 = param_2;
    }
    FUN_100651708(param_1,param_3,1);
    FUN_1006511d0(param_3);
    if (fVar1 < fVar2) break;
    if (param_1 <= param_2) {
      return;
    }
  }
  FUN_100651708(param_1 + 20.0,param_3,1);
  return;
}




undefined8 * FUN_1000f2ea8(uint param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  
  uVar1 = 0;
  if (param_1 < 0x1e) {
    uVar1 = (int)param_1 % 3;
  }
  if (uVar1 < 3) {
    puVar2 = (undefined8 *)FUN_1004e0150((&PTR_s_SKILL_SUBTIER_BRONZE_101458818)[(int)uVar1],0);
    return puVar2;
  }
  return &DAT_101d91650;
}




char * FUN_1000f2ef8(int param_1)

{
  if (param_1 - 1U < 8) {
    return (&PTR_s_Shift_101458830)[(char)(param_1 - 1U)];
  }
  return "";
}




undefined8 FUN_1000f2f24(int param_1)

{
  if (param_1 < 0x50) {
    if (param_1 - 0x4cU < 2) {
      return 1;
    }
    if (param_1 - 0x4eU < 2) {
      return 4;
    }
  }
  else {
    if (param_1 - 0x50U < 2) {
      return 2;
    }
    if (param_1 == 0x68) {
      return 8;
    }
  }
  return 0;
}




long FUN_1000f2f80(char *param_1)

{
  int iVar1;
  long lVar2;
  
  iVar1 = _strcmp(param_1,"Alt");
  if (iVar1 == 0) {
    lVar2 = 2;
  }
  else {
    iVar1 = _strcmp(param_1,"Shift");
    if (iVar1 == 0) {
      lVar2 = 1;
    }
    else {
      iVar1 = _strcmp(param_1,"Control");
      if (iVar1 == 0) {
        lVar2 = 4;
      }
      else {
        iVar1 = _strcmp(param_1,"Command");
        lVar2 = (ulong)(iVar1 == 0) << 3;
      }
    }
  }
  return lVar2;
}




void FUN_1000f300c(numpunct<char> *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)std::numpunct<char>::~numpunct(param_1);
  operator_delete(pvVar1);
  return;
}




undefined8 FUN_1000f3020(void)

{
  return 0x2c;
}




void FUN_1000f3028(undefined2 *param_1)

{
  *(undefined1 *)((long)param_1 + 0x17) = 1;
  *param_1 = 3;
  return;
}




void FUN_1000f303c(void)

{
                    /* WARNING: Subroutine does not return */
  _abort();
}




void FUN_1000f3048(void)

{
  long lVar1;
  
  lVar1 = 0;
  do {
    if ((char)(&DAT_101dc6d5f)[lVar1] < '\0') {
      operator_delete(*(void **)((long)&DAT_101dc6d48 + lVar1));
    }
    lVar1 = lVar1 + -0x18;
  } while (lVar1 != -0xf0);
  return;
}




void FUN_1000f308c(void)

{
  long lVar1;
  
  lVar1 = 0;
  do {
    if ((char)(&DAT_101dc6e57)[lVar1] < '\0') {
      operator_delete(*(void **)((long)&DAT_101dc6e40 + lVar1));
    }
    lVar1 = lVar1 + -0x18;
  } while (lVar1 != -0xf0);
  return;
}




void FUN_1000f30d0(void)

{
  long lVar1;
  
  lVar1 = 0;
  do {
    if ((char)(&DAT_101dc6f4f)[lVar1] < '\0') {
      operator_delete(*(void **)((long)&DAT_101dc6f38 + lVar1));
    }
    lVar1 = lVar1 + -0x18;
  } while (lVar1 != -0xf0);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000f3114(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  locale alStack_28 [8];
  
  DAT_101dc6ae0 = 0xffbc9c44;
  DAT_101dc6ae4 = 0xff1166f2;
  DAT_101dc6ae8 = 0xffe0e0e0;
  DAT_101dc6aec = 0xffa0a0a0;
  DAT_101dc6af0 = 0xff8c8c8c;
  DAT_101dc6af4 = 0xff322213;
  DAT_101dc6af8 = 0xff091911;
  DAT_101dc6afc = 0xff170c19;
  DAT_101dc6b00 = 0xff241a14;
  DAT_101dc6b04 = 0xff14171c;
  DAT_101dc6b08 = 0xff221911;
  DAT_101dc6b0c = 0xff1a1416;
  DAT_101dc6b10 = 0xff121414;
  DAT_101dc6b14 = 0xff1a1809;
  DAT_101dc6b18 = 0xff141414;
  DAT_101dc6b1c = 0xff141414;
  DAT_101dc6b20 = 0xff2929c0;
  DAT_101dc6b24 = 0xff283082;
  DAT_101dc6b28 = 0xff5262cc;
  DAT_101dc6b2c = 0xff283082;
  DAT_101dc6b30 = 0xff5262cc;
  DAT_101dc6b34 = 0xff745c42;
  DAT_101dc6b38 = 0xff184155;
  DAT_101dc6b3c = 0xff92665e;
  DAT_101dc6b40 = 0xffbc9c44;
  DAT_101dc6b44 = 0xffbbae56;
  DAT_101dc6b48 = 0xff8b7b01;
  DAT_101dc6b4c = 0xff90b3ef;
  DAT_101dc6b50 = 0xff728ebe;
  DAT_101dc6b54 = 0xff19459d;
  DAT_101dc6b58 = 0xff9d877b;
  DAT_101dc6b5c = 0xffcbb1a3;
  DAT_101dc6b60 = 0xff3f6fb5;
  DAT_101dc6b64 = 0xffc5c5c5;
  DAT_101dc6b68 = 0xff4fc1f1;
  DAT_101dc6b6c = 0xff606060;
  DAT_101dc6b70 = 0xffc5ff7b;
  DAT_101dc6b74 = 0xff5271eb;
  DAT_101dc6b78 = 0xfffae076;
  DAT_101dc6b7c = 0xff3ac8f6;
  DAT_101dc6b80 = 0xffaaaaaa;
  DAT_101dc6b84 = 0xffe19400;
  DAT_101dc6b88 = 0xffe19400;
  DAT_101dc6b8c = 0xffe550b2;
  DAT_101dc6b90 = 0xfff22ae8;
  DAT_101dc6b94 = 0xff005ae1;
  DAT_101dc6b98 = 0xff1addfa;
  DAT_101dc6b9c = 0xff2424b3;
  DAT_101dc6ba0 = 0xff2424b3;
  DAT_101dc6ba4 = 0xff646464;
  DAT_101dc6ba8 = 0xff92665e;
  DAT_101dc6bac = 0xff646037;
  DAT_101dc6bb0 = 0xffffffff;
  DAT_101dc6bb4 = 0xff1111a1;
  DAT_101dc6bb8 = 0xff321ee1;
  DAT_101dc6bbc = 0xffc8c8c8;
  DAT_101dc6bc0 = 0xff321ee1;
  DAT_101dc6bc4 = 0xff7fe801;
  DAT_101dc6bc8 = 0xffffffff;
  DAT_101dc6bcc = 0xff6259b3;
  DAT_101dc6bd0 = 0xff506e73;
  DAT_101dc6bd4 = 0xff9dbf86;
  DAT_101dc6bd8 = 0xffa35244;
  DAT_101dc6bdc = 0xffca828e;
  DAT_101dc6be0 = 0xffa6a6a6;
  DAT_101dc6be4 = 0xffa6a6a6;
  DAT_101dc6be8 = 0xffffffff;
  DAT_101dc6bec = 0xff88ea2f;
  DAT_101dc6bf0 = 0xff8c8c8c;
  DAT_101dc6bf4 = 0xffffb400;
  DAT_101dc6bf8 = 0xffff00ff;
  DAT_101dc6bfc = 0xff00aded;
  DAT_101dc6c00 = 0xff33d3ff;
  DAT_101dc6c04 = 0xff7fe801;
  DAT_101dc6c08 = 0xff282828;
  DAT_101dc6c0c = 0xfff0f0f0;
  DAT_101dc6c10 = 0xffa4781e;
  DAT_101dc6c14 = 0xffa6654b;
  DAT_101dc6c18 = 0xff93435b;
  DAT_101dc6c1c = 0xff387f9c;
  DAT_101dc6c20 = 0xffa3781e;
  DAT_101dc6c24 = 0xffffd18a;
  DAT_101dc6c28 = 0xffff61f7;
  DAT_101dc6c2c = 0xff5de1f2;
  DAT_101dc6c30 = 0xff80eaff;
  DAT_101dc6c34 = 0xff32e00e;
  DAT_101dc6c38 = 0xff5a3c10;
  DAT_101dc6c3c = 0xff330b03;
  DAT_101dc6c40 = 0xff33031d;
  DAT_101dc6c44 = 0xff032433;
  DAT_101dc6c48 = 0xff9e8e8d;
  uRam0000000101dc7028 = 0x7f7fffff7f7fffff;
  _DAT_101dc7020 = 0x7f7fffff7f7fffff;
  uRam0000000101dc7038 = 0x7f7fffff7f7fffff;
  _DAT_101dc7030 = 0x7f7fffff7f7fffff;
  uRam0000000101dc7048 = 0x7f7fffff7f7fffff;
  _DAT_101dc7040 = 0x7f7fffff7f7fffff;
  uRam0000000101dc7058 = 0x7f7fffff7f7fffff;
  _DAT_101dc7050 = 0x7f7fffff7f7fffff;
  DAT_101dc7060 = 0x7f7fffff;
  DAT_101dc7064 = 0x7f7fffff;
  DAT_101dc7068 = 0x7f7fffff;
  DAT_101dc706c = 0x3f800000;
  uRam0000000101dc7078 = 0x7f7fffff7f7fffff;
  _DAT_101dc7070 = 0x7f7fffff7f7fffff;
  DAT_101dc7080 = 0x7f7fffff;
  DAT_101dc7084 = 0x3eb33333;
  uRam0000000101dc7090 = 0x7f7fffff7f7fffff;
  _DAT_101dc7088 = 0x7f7fffff7f7fffff;
  uRam0000000101dc70a0 = 0x7f7fffff7f7fffff;
  _DAT_101dc7098 = 0x7f7fffff7f7fffff;
  uRam0000000101dc70b0 = 0x7f7fffff7f7fffff;
  _DAT_101dc70a8 = 0x7f7fffff7f7fffff;
  _DAT_101dc70c0 = 0x7f7fffff7f7fffff;
  _DAT_101dc70b8 = 0x7f7fffff7f7fffff;
  DAT_101dc70c8 = 0x7f7fffff;
  DAT_101dc70cc = 0x7f7fffff;
  DAT_101dc70d0 = 0x7f7fffff;
  DAT_101dc6f8c = 0xff7fffff;
  uRam0000000101dc6f68 = 0xff7fffffff7fffff;
  _DAT_101dc6f60 = 0xff7fffffff7fffff;
  DAT_101dc6f70 = 0;
  DAT_101dc6f78 = 0;
  uRam0000000101dc6f84 = 0xff7fffffff7fffff;
  _DAT_101dc6f7c = 0xff7fffffff7fffff;
  DAT_101dc6f94 = NEON_fmov(0xbf800000,4);
  DAT_101dc6f9c = 0x3f000000;
  DAT_101dc6fa0 = 0;
  DAT_101dc6fa8 = 0;
  uRam0000000101dc6fb8 = 0xff7fffffff7fffff;
  _DAT_101dc6fb0 = 0xff7fffffff7fffff;
  uRam0000000101dc6fc8 = 0xff7fffffff7fffff;
  _DAT_101dc6fc0 = 0xff7fffffff7fffff;
  uRam0000000101dc6fd8 = 0xff7fffffff7fffff;
  _DAT_101dc6fd0 = 0xff7fffffff7fffff;
  uRam0000000101dc6fe8 = 0xbf800000bf800000;
  _DAT_101dc6fe0 = 0xbf80000000000000;
  DAT_101dc6ff0 = 0xbf800000;
  DAT_101dc7000 = 0;
  DAT_101dc7008 = 0;
  DAT_101dc7010 = 0;
  DAT_101dc6c4c = 0xff;
  DAT_101dc6c4e = 0xffff;
  DAT_101dc6c50 = 0xffff;
  DAT_101dc6f90 = DAT_101dc6f8c;
  DAT_101dc6ff4 = DAT_101dc6f8c;
  DAT_101dc6ff8 = DAT_101dc6f8c;
  DAT_101dc6ffc = DAT_101dc6f8c;
  DAT_101dc7004 = DAT_101dc6f8c;
  std::locale::locale(alStack_28);
  puVar1 = operator_new(0x30);
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar2 = (undefined8 *)std::numpunct<char>::numpunct((ulong)puVar1);
  *puVar2 = &PTR__numpunct_1014585f0;
  std::locale::id::__get();
  std::locale::__install_ctor((locale *)&DAT_101d23070,(facet *)alStack_28,(long)puVar1);
  std::locale::~locale(alStack_28);
  ___cxa_atexit(PTR__locale_101444198,&DAT_101d23070,0x100000000);
  return;
}




void FUN_1000f3914(void)

{
  FUN_10034ee90();
  FUN_100345d90();
  return;
}




void FUN_1000f3928(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_10003f7cc(*param_1);
  FUN_10046c8cc(uVar1,param_2);
  return;
}




void FUN_1000f3950(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_10003f7cc(*param_1);
  FUN_100490b30(uVar1,param_2,param_3);
  return;
}




long FUN_1000f3980(long *param_1)

{
  return *param_1 + 0x68;
}




void FUN_1000f398c(void)

{
  FUN_10034ee90();
  FUN_100345d90();
  return;
}




void FUN_1000f39a0(undefined8 param_1,long param_2,long *param_3)

{
  long lVar1;
  
  lVar1 = FUN_1010a0298(param_1,DAT_10184df30);
  FUN_10003f6d8(lVar1,param_1,*(undefined8 *)(param_2 + 8));
  if (param_3 != (long *)0x0) {
    *param_3 = lVar1 + 0x68;
  }
  return;
}




void FUN_1000f39f4(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  FUN_10034ee90();
  lVar1 = FUN_100345d90();
  uVar2 = 0;
  if (lVar1 != 0) {
    uVar2 = FUN_10048fb88(0x7f7fffff,lVar1,0);
  }
  *param_3 = uVar2;
  return;
}




void FUN_1000f3a34(undefined8 param_1,undefined8 param_2)

{
  FUN_1000f39f4(param_1,param_2,param_2);
  return;
}




void FUN_1000f3a3c(undefined8 *param_1,undefined4 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined4 local_28 [2];
  
  local_28[0] = param_2;
  uVar1 = FUN_10003f7cc(*param_1);
  uVar2 = FUN_100490b70(uVar1,local_28,param_3);
  if ((uVar2 & 1) == 0) {
    *(undefined4 *)(param_3 + 1) = 0;
    *param_3 = 0;
  }
  return;
}




void FUN_1000f3a94(undefined8 *param_1,undefined4 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined4 local_28 [2];
  
  local_28[0] = param_2;
  uVar1 = FUN_10003f7cc(*param_1);
  uVar2 = FUN_100490bb0(uVar1,local_28,param_3);
  if ((uVar2 & 1) == 0) {
    param_3[1] = 0;
    *param_3 = 0x3f800000;
    param_3[3] = 0;
    param_3[2] = 0x3f80000000000000;
    param_3[5] = 0x3f800000;
    param_3[4] = 0;
    param_3[7] = 0x3f80000000000000;
    param_3[6] = 0;
  }
  return;
}




undefined4 FUN_1000f3afc(void)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  int iVar5;
  uint uVar6;
  long lVar7;
  float fVar8;
  
  FUN_10034ee90();
  lVar2 = FUN_100345d90();
  if (lVar2 == 0) {
    return 4;
  }
  lVar3 = *(long *)(lVar2 + 0x18);
  while( true ) {
    if (lVar3 == 0) {
      return 4;
    }
    if (*(int *)(*(long *)(lVar3 + 8) + 0xa4) == DAT_10184e150) break;
    lVar3 = *(long *)(lVar3 + 0x20);
  }
  lVar7 = *(long *)(lVar2 + 0x38);
  uVar4 = FUN_1004708c8();
  lVar3 = *(long *)(lVar2 + 0x18);
  if (lVar3 != 0) {
    lVar2 = *(long *)(lVar2 + 0x40);
    fVar8 = *(float *)(lVar2 + 0xd8) + *(float *)(lVar2 + 0x18c) * (*(float *)(lVar2 + 0x2f4) + 1.0)
    ;
    NEON_fminnm(fVar8 + fVar8 * *(float *)(lVar2 + 0x240),DAT_101dc7250);
    uVar6 = (uint)DAT_101dc7190;
    do {
      if (*(int *)(*(long *)(lVar3 + 8) + 0xa4) == DAT_10184dab8) {
        if (((int)uVar4 == -1) ||
           (uVar1 = FUN_1003d9e44(DAT_101dc7190,DAT_101dc7190,DAT_101dc7250,0x3f800000,lVar3,uVar4),
           uVar6 < uVar1)) {
          uVar1 = FUN_1003d9e44(lVar3,*(undefined4 *)(lVar7 + 0xd8));
          if (uVar6 < uVar1) {
            uVar1 = FUN_1003d9e44(lVar3,*(undefined4 *)(lVar7 + 0xd4));
            if (uVar6 < uVar1) {
              uVar1 = FUN_1003d9e44(lVar3,*(undefined4 *)(lVar7 + 0xd0));
              if (uVar6 < uVar1) {
                return 4;
              }
              uVar4 = (ulong)*(uint *)(lVar7 + 0xd0);
            }
            else {
              uVar4 = (ulong)*(uint *)(lVar7 + 0xd4);
            }
          }
          else {
            uVar4 = (ulong)*(uint *)(lVar7 + 0xd8);
          }
        }
        break;
      }
      lVar3 = *(long *)(lVar3 + 0x20);
    } while (lVar3 != 0);
  }
  iVar5 = (int)uVar4;
  if ((iVar5 < 0) || (iVar5 == *(int *)(lVar7 + 0xd0))) {
    return 4;
  }
  if (iVar5 == *(int *)(lVar7 + 0xd4)) {
    return 5;
  }
  if (iVar5 != *(int *)(lVar7 + 0xd8)) {
    return 4;
  }
  return 6;
}




undefined4 thunk_FUN_1000f3afc(void)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  int iVar5;
  uint uVar6;
  long lVar7;
  float fVar8;
  
  FUN_10034ee90();
  lVar2 = FUN_100345d90();
  if (lVar2 == 0) {
    return 4;
  }
  lVar3 = *(long *)(lVar2 + 0x18);
  while( true ) {
    if (lVar3 == 0) {
      return 4;
    }
    if (*(int *)(*(long *)(lVar3 + 8) + 0xa4) == DAT_10184e150) break;
    lVar3 = *(long *)(lVar3 + 0x20);
  }
  lVar7 = *(long *)(lVar2 + 0x38);
  uVar4 = FUN_1004708c8();
  lVar3 = *(long *)(lVar2 + 0x18);
  if (lVar3 != 0) {
    lVar2 = *(long *)(lVar2 + 0x40);
    fVar8 = *(float *)(lVar2 + 0xd8) + *(float *)(lVar2 + 0x18c) * (*(float *)(lVar2 + 0x2f4) + 1.0)
    ;
    NEON_fminnm(fVar8 + fVar8 * *(float *)(lVar2 + 0x240),DAT_101dc7250);
    uVar6 = (uint)DAT_101dc7190;
    do {
      if (*(int *)(*(long *)(lVar3 + 8) + 0xa4) == DAT_10184dab8) {
        if (((int)uVar4 == -1) ||
           (uVar1 = FUN_1003d9e44(DAT_101dc7190,DAT_101dc7190,DAT_101dc7250,0x3f800000,lVar3,uVar4),
           uVar6 < uVar1)) {
          uVar1 = FUN_1003d9e44(lVar3,*(undefined4 *)(lVar7 + 0xd8));
          if (uVar6 < uVar1) {
            uVar1 = FUN_1003d9e44(lVar3,*(undefined4 *)(lVar7 + 0xd4));
            if (uVar6 < uVar1) {
              uVar1 = FUN_1003d9e44(lVar3,*(undefined4 *)(lVar7 + 0xd0));
              if (uVar6 < uVar1) {
                return 4;
              }
              uVar4 = (ulong)*(uint *)(lVar7 + 0xd0);
            }
            else {
              uVar4 = (ulong)*(uint *)(lVar7 + 0xd4);
            }
          }
          else {
            uVar4 = (ulong)*(uint *)(lVar7 + 0xd8);
          }
        }
        break;
      }
      lVar3 = *(long *)(lVar3 + 0x20);
    } while (lVar3 != 0);
  }
  iVar5 = (int)uVar4;
  if ((iVar5 < 0) || (iVar5 == *(int *)(lVar7 + 0xd0))) {
    return 4;
  }
  if (iVar5 == *(int *)(lVar7 + 0xd4)) {
    return 5;
  }
  if (iVar5 != *(int *)(lVar7 + 0xd8)) {
    return 4;
  }
  return 6;
}




void FUN_1000f3c80(void)

{
  if ((DAT_10184df38 & 1) == 0) {
    DAT_10184df30 = DAT_101872e38;
    DAT_10184df38 = 1;
  }
  return;
}




void FUN_1000f3cac(void)

{
  if ((DAT_10184e158 & 1) == 0) {
    DAT_10184e150 = DAT_101872e38;
    DAT_10184e158 = 1;
  }
  return;
}




void FUN_1000f3cd8(void)

{
  if ((DAT_10184dac0 & 1) == 0) {
    DAT_10184dab8 = DAT_101872e38;
    DAT_10184dac0 = 1;
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000f3d04(void)

{
  DAT_101dc70e0 = 0xff;
  DAT_101dc70e2 = 0xffff;
  DAT_101dc70e4 = 0xffff;
  uRam0000000101dc71b8 = 0x7f7fffff7f7fffff;
  _DAT_101dc71b0 = 0x7f7fffff7f7fffff;
  uRam0000000101dc71c8 = 0x7f7fffff7f7fffff;
  _DAT_101dc71c0 = 0x7f7fffff7f7fffff;
  uRam0000000101dc71d8 = 0x7f7fffff7f7fffff;
  _DAT_101dc71d0 = 0x7f7fffff7f7fffff;
  uRam0000000101dc71e8 = 0x7f7fffff7f7fffff;
  _DAT_101dc71e0 = 0x7f7fffff7f7fffff;
  DAT_101dc71f0 = 0x7f7fffff;
  DAT_101dc71f4 = 0x7f7fffff;
  DAT_101dc71f8 = 0x7f7fffff;
  DAT_101dc71fc = 0x3f800000;
  uRam0000000101dc7208 = 0x7f7fffff7f7fffff;
  _DAT_101dc7200 = 0x7f7fffff7f7fffff;
  DAT_101dc7210 = 0x7f7fffff;
  DAT_101dc7214 = 0x3eb33333;
  uRam0000000101dc7220 = 0x7f7fffff7f7fffff;
  _DAT_101dc7218 = 0x7f7fffff7f7fffff;
  uRam0000000101dc7230 = 0x7f7fffff7f7fffff;
  _DAT_101dc7228 = 0x7f7fffff7f7fffff;
  uRam0000000101dc7240 = 0x7f7fffff7f7fffff;
  _DAT_101dc7238 = 0x7f7fffff7f7fffff;
  _DAT_101dc7250 = 0x7f7fffff7f7fffff;
  _DAT_101dc7248 = 0x7f7fffff7f7fffff;
  DAT_101dc7258 = 0x7f7fffff;
  DAT_101dc725c = 0x7f7fffff;
  DAT_101dc7260 = 0x7f7fffff;
  uRam0000000101dc70f8 = 0xff7fffffff7fffff;
  _DAT_101dc70f0 = 0xff7fffffff7fffff;
  DAT_101dc7100 = 0;
  DAT_101dc7108 = 0;
  uRam0000000101dc7114 = 0xff7fffffff7fffff;
  _DAT_101dc710c = 0xff7fffffff7fffff;
  DAT_101dc711c = 0xff7fffff;
  DAT_101dc7120 = 0xff7fffff;
  DAT_101dc7124 = NEON_fmov(0xbf800000,4);
  DAT_101dc712c = 0x3f000000;
  DAT_101dc7130 = 0;
  DAT_101dc7138 = 0;
  uRam0000000101dc7148 = 0xff7fffffff7fffff;
  _DAT_101dc7140 = 0xff7fffffff7fffff;
  uRam0000000101dc7158 = 0xff7fffffff7fffff;
  _DAT_101dc7150 = 0xff7fffffff7fffff;
  uRam0000000101dc7168 = 0xff7fffffff7fffff;
  _DAT_101dc7160 = 0xff7fffffff7fffff;
  uRam0000000101dc7178 = 0xbf800000bf800000;
  _DAT_101dc7170 = 0xbf80000000000000;
  DAT_101dc7180 = 0xbf800000;
  DAT_101dc7184 = 0xff7fffff;
  DAT_101dc7188 = 0xff7fffff;
  DAT_101dc718c = 0xff7fffff;
  DAT_101dc7190 = 0;
  DAT_101dc7194 = 0xff7fffff;
  DAT_101dc7198 = 0;
  DAT_101dc71a0 = 0;
  return;
}




void FUN_1000f3e00(void)

{
  return;
}




void FUN_1000f3e04(void)

{
  return;
}




void FUN_1000f3e08(void)

{
  return;
}




void FUN_1000f3e0c(void)

{
  if ((DAT_10184da90 & 1) == 0) {
    DAT_10184da88 = DAT_101872e38;
    DAT_10184da90 = 1;
  }
  return;
}




void FUN_1000f3e38(float param_1,float param_2,float param_3,float param_4,float param_5,
                  long *param_6,long param_7,long param_8,long *param_9,undefined1 *param_10)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  bool bVar6;
  bool bVar7;
  float *pfVar8;
  long lVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  ushort uVar13;
  float fVar14;
  float unaff_s8;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float local_90 [2];
  float local_88;
  float fStack_84;
  
  fVar18 = (float)NEON_fminnm(param_3 * 360.0,0x43b40000);
  if (fVar18 <= 0.0) {
    fVar18 = 0.0;
  }
  fVar15 = (float)NEON_ucvtf((uint)*(ushort *)(param_8 + 8));
  fVar19 = (float)(int)(*(float *)(param_7 + 0x10) * fVar15);
  fVar20 = (float)NEON_ucvtf((uint)*(ushort *)(param_8 + 10));
  fVar3 = (float)(int)(*(float *)(param_7 + 0x14) * fVar20);
  fVar2 = (float)(int)(fVar19 * 0.5);
  fVar5 = (float)(int)(fVar3 * 0.5);
  param_1 = param_1 - (float)(int)(fVar19 * param_4);
  param_2 = param_2 - (float)(int)(fVar3 * param_5);
  fVar16 = (float)(int)(param_1 + fVar2);
  fVar17 = (float)(int)(param_2 + fVar5);
  if (45.0 <= fVar18) {
    bVar6 = false;
    bVar7 = false;
    if (45.0 <= fVar18) {
      bVar6 = false;
      bVar7 = true;
      if (!NAN(fVar18)) {
        bVar6 = fVar18 < 90.0;
        bVar7 = false;
      }
    }
    if (bVar6 == bVar7) {
      bVar6 = false;
      bVar7 = false;
      if (90.0 <= fVar18) {
        bVar6 = false;
        bVar7 = true;
        if (!NAN(fVar18)) {
          bVar6 = fVar18 < 135.0;
          bVar7 = false;
        }
      }
      if (bVar6 == bVar7) {
        bVar6 = false;
        bVar7 = false;
        if (135.0 <= fVar18) {
          bVar6 = false;
          bVar7 = true;
          if (!NAN(fVar18)) {
            bVar6 = fVar18 < 180.0;
            bVar7 = false;
          }
        }
        if (bVar6 == bVar7) {
          bVar6 = false;
          bVar7 = false;
          if (180.0 <= fVar18) {
            bVar6 = false;
            bVar7 = true;
            if (!NAN(fVar18)) {
              bVar6 = fVar18 < 225.0;
              bVar7 = false;
            }
          }
          if (bVar6 == bVar7) {
            bVar6 = false;
            bVar7 = false;
            if (225.0 <= fVar18) {
              bVar6 = false;
              bVar7 = true;
              if (!NAN(fVar18)) {
                bVar6 = fVar18 < 270.0;
                bVar7 = false;
              }
            }
            if (bVar6 == bVar7) {
              if ((fVar18 < 270.0) || (315.0 <= fVar18)) {
                fVar10 = 315.0;
                if (315.0 <= fVar18) {
                  fVar10 = (float)_tanf((fVar18 * -0.0055555557 + 2.0) * 3.1415927);
                  unaff_s8 = fVar16 - fVar5 * fVar10;
                  goto LAB_1000f3f44;
                }
                goto LAB_1000f4198;
              }
              unaff_s8 = fVar16 - fVar2;
              fVar10 = 0.0055555557;
              uVar13 = 0xbfc0;
              goto LAB_1000f404c;
            }
            unaff_s8 = fVar16 - fVar2;
            fVar10 = -0.0055555557;
            uVar13 = 0x3fc0;
            goto LAB_1000f40b8;
          }
          fVar10 = (float)_tanf(-(fVar18 * -0.0055555557 * 3.1415927) - 3.1415927);
          unaff_s8 = fVar16 - fVar5 * fVar10;
        }
        else {
          fVar10 = (float)_tanf(fVar18 * -0.0055555557 * 3.1415927 + 3.1415927);
          unaff_s8 = fVar16 + fVar5 * fVar10;
        }
        local_90[0] = unaff_s8;
        fVar10 = fVar17 + fVar5;
      }
      else {
        unaff_s8 = fVar16 + fVar2;
        fVar10 = 0.0055555557;
        uVar13 = 0xbf00;
LAB_1000f40b8:
        local_90[0] = unaff_s8;
        fVar10 = (float)_tanf(((float)((uint)uVar13 << 0x10) + fVar10 * fVar18) * 3.1415927);
        fVar10 = fVar17 + fVar2 * fVar10;
      }
    }
    else {
      unaff_s8 = fVar16 + fVar2;
      fVar10 = -0.0055555557;
      uVar13 = 0x3f00;
LAB_1000f404c:
      local_90[0] = unaff_s8;
      fVar10 = (float)_tanf(((float)((uint)uVar13 << 0x10) + fVar10 * fVar18) * 3.1415927);
      fVar10 = fVar17 - fVar2 * fVar10;
    }
  }
  else {
    fVar10 = (float)_tanf(fVar18 * 0.0055555557 * 3.1415927);
    unaff_s8 = fVar16 + fVar5 * fVar10;
LAB_1000f3f44:
    local_90[0] = unaff_s8;
    fVar10 = fVar17 - fVar5;
  }
LAB_1000f4198:
  param_2 = param_2 + fVar3;
  if (fVar18 <= 315.0) {
    if (225.0 < fVar18) {
      pfVar8 = (float *)*param_6;
      fStack_84 = fVar10;
      goto LAB_1000f4390;
    }
    if (135.0 < fVar18) {
      pfVar8 = (float *)*param_6;
      goto LAB_1000f454c;
    }
    pfVar8 = (float *)*param_6;
    fVar11 = fVar10;
    if (fVar18 <= 45.0) goto LAB_1000f48c8;
  }
  else {
    fStack_84 = fVar17 - fVar5;
    local_88 = fVar16 - fVar2;
    fVar11 = (float)NEON_ucvtf(*(undefined4 *)(*(long *)(*param_9 + 8) + 0x48));
    fVar12 = (float)NEON_ucvtf(*(undefined4 *)(*(long *)(*param_9 + 8) + 0x4c));
    fVar4 = (float)NEON_ucvtf((uint)*(ushort *)(param_8 + 4));
    fVar14 = (float)NEON_ucvtf((uint)*(ushort *)(param_8 + 6));
    pfVar8 = (float *)*param_6;
    *pfVar8 = fVar16;
    pfVar8[1] = fVar17;
    pfVar8[2] = 0.0;
    *(undefined1 *)(pfVar8 + 3) = *param_10;
    *(undefined1 *)((long)pfVar8 + 0xd) = param_10[1];
    *(undefined1 *)((long)pfVar8 + 0xe) = param_10[2];
    *(undefined1 *)((long)pfVar8 + 0xf) = param_10[3];
    pfVar8[4] = (fVar4 + fVar15 * 0.5) / fVar11;
    pfVar8[5] = 1.0 - (fVar14 + fVar20 * 0.5) / fVar12;
    lVar9 = *param_6;
    *(float *)(lVar9 + 0x18) = unaff_s8;
    *param_6 = lVar9 + 0x18;
    *(int *)(param_6 + 1) = (int)param_6[1] + 1;
    fVar15 = (float)NEON_ucvtf(*(undefined4 *)(*(long *)(*param_9 + 8) + 0x48));
    fVar20 = (float)NEON_ucvtf(*(undefined4 *)(*(long *)(*param_9 + 8) + 0x4c));
    fVar11 = (float)NEON_ucvtf((uint)*(ushort *)(param_8 + 4));
    fVar12 = (float)NEON_ucvtf((uint)*(ushort *)(param_8 + 6));
    fVar4 = (float)NEON_ucvtf((uint)*(ushort *)(param_8 + 8));
    fVar14 = (float)NEON_ucvtf((uint)*(ushort *)(param_8 + 10));
    *(float *)(lVar9 + 0x1c) = fVar10;
    *(undefined4 *)(lVar9 + 0x20) = 0;
    *(undefined1 *)(lVar9 + 0x24) = *param_10;
    *(undefined1 *)(lVar9 + 0x25) = param_10[1];
    *(undefined1 *)(lVar9 + 0x26) = param_10[2];
    *(undefined1 *)(lVar9 + 0x27) = param_10[3];
    *(float *)(lVar9 + 0x28) = (((unaff_s8 - param_1) * fVar4) / fVar19 + fVar11) / fVar15;
    *(float *)(lVar9 + 0x2c) = 1.0 - (fVar14 + fVar12) / fVar20;
    lVar9 = *param_6;
    *param_6 = lVar9 + 0x18;
    *(int *)(param_6 + 1) = (int)param_6[1] + 1;
    fVar15 = (float)NEON_ucvtf(*(undefined4 *)(*(long *)(*param_9 + 8) + 0x48));
    fVar20 = (float)NEON_ucvtf(*(undefined4 *)(*(long *)(*param_9 + 8) + 0x4c));
    fVar10 = (float)NEON_ucvtf((uint)*(ushort *)(param_8 + 4));
    fVar11 = (float)NEON_ucvtf((uint)*(ushort *)(param_8 + 6));
    fVar12 = (float)NEON_ucvtf((uint)*(ushort *)(param_8 + 10));
    *(float *)(lVar9 + 0x18) = fVar16 - fVar2;
    *(float *)(lVar9 + 0x1c) = fStack_84;
    *(undefined4 *)(lVar9 + 0x20) = 0;
    *(undefined1 *)(lVar9 + 0x24) = *param_10;
    *(undefined1 *)(lVar9 + 0x25) = param_10[1];
    *(undefined1 *)(lVar9 + 0x26) = param_10[2];
    *(undefined1 *)(lVar9 + 0x27) = param_10[3];
    *(float *)(lVar9 + 0x28) = fVar10 / fVar15;
    *(float *)(lVar9 + 0x2c) = 1.0 - (fVar12 + fVar11) / fVar20;
    pfVar8 = (float *)(*param_6 + 0x18);
    *param_6 = (long)pfVar8;
    *(int *)(param_6 + 1) = (int)param_6[1] + 1;
    fVar15 = (float)NEON_ucvtf((uint)*(ushort *)(param_8 + 8));
    fVar20 = (float)NEON_ucvtf((uint)*(ushort *)(param_8 + 10));
LAB_1000f4390:
    unaff_s8 = fVar16 - fVar2;
    pfVar1 = &local_88;
    if (fVar18 <= 315.0) {
      pfVar1 = local_90;
    }
    fVar18 = *pfVar1;
    fVar10 = fVar17 + fVar5;
    fVar14 = (float)NEON_ucvtf(*(undefined4 *)(*(long *)(*param_9 + 8) + 0x48));
    fVar11 = (float)NEON_ucvtf(*(undefined4 *)(*(long *)(*param_9 + 8) + 0x4c));
    fVar12 = (float)NEON_ucvtf((uint)*(ushort *)(param_8 + 4));
    fVar4 = (float)NEON_ucvtf((uint)*(ushort *)(param_8 + 6));
    *pfVar8 = fVar16;
    pfVar8[1] = fVar17;
    pfVar8[2] = 0.0;
    *(undefined1 *)(pfVar8 + 3) = *param_10;
    *(undefined1 *)((long)pfVar8 + 0xd) = param_10[1];
    *(undefined1 *)((long)pfVar8 + 0xe) = param_10[2];
    *(undefined1 *)((long)pfVar8 + 0xf) = param_10[3];
    pfVar8[4] = (fVar12 + fVar15 * 0.5) / fVar14;
    pfVar8[5] = 1.0 - (fVar4 + fVar20 * 0.5) / fVar11;
    lVar9 = *param_6;
    *(float *)(lVar9 + 0x18) = fVar18;
    *param_6 = lVar9 + 0x18;
    *(int *)(param_6 + 1) = (int)param_6[1] + 1;
    fVar18 = (float)NEON_ucvtf(*(undefined4 *)(*(long *)(*param_9 + 8) + 0x48));
    fVar15 = (float)NEON_ucvtf(*(undefined4 *)(*(long *)(*param_9 + 8) + 0x4c));
    fVar20 = (float)NEON_ucvtf((uint)*(ushort *)(param_8 + 4));
    fVar11 = (float)NEON_ucvtf((uint)*(ushort *)(param_8 + 6));
    fVar12 = (float)NEON_ucvtf((uint)*(ushort *)(param_8 + 10));
    *(float *)(lVar9 + 0x1c) = fStack_84;
    *(undefined4 *)(lVar9 + 0x20) = 0;
    *(undefined1 *)(lVar9 + 0x24) = *param_10;
    *(undefined1 *)(lVar9 + 0x25) = param_10[1];
    *(undefined1 *)(lVar9 + 0x26) = param_10[2];
    *(undefined1 *)(lVar9 + 0x27) = param_10[3];
    *(float *)(lVar9 + 0x28) = fVar20 / fVar18;
    *(float *)(lVar9 + 0x2c) = (((fStack_84 - param_2) * fVar12) / fVar3 - fVar11) / fVar15 + 1.0;
    lVar9 = *param_6;
    *param_6 = lVar9 + 0x18;
    *(int *)(param_6 + 1) = (int)param_6[1] + 1;
    fVar18 = (float)NEON_ucvtf(*(undefined4 *)(*(long *)(*param_9 + 8) + 0x48));
    fVar15 = (float)NEON_ucvtf(*(undefined4 *)(*(long *)(*param_9 + 8) + 0x4c));
    fVar20 = (float)NEON_ucvtf((uint)*(ushort *)(param_8 + 4));
    fVar11 = (float)NEON_ucvtf((uint)*(ushort *)(param_8 + 6));
    *(float *)(lVar9 + 0x18) = unaff_s8;
    *(float *)(lVar9 + 0x1c) = fVar10;
    *(undefined4 *)(lVar9 + 0x20) = 0;
    *(undefined1 *)(lVar9 + 0x24) = *param_10;
    *(undefined1 *)(lVar9 + 0x25) = param_10[1];
    *(undefined1 *)(lVar9 + 0x26) = param_10[2];
    *(undefined1 *)(lVar9 + 0x27) = param_10[3];
    *(float *)(lVar9 + 0x28) = fVar20 / fVar18;
    *(float *)(lVar9 + 0x2c) = 1.0 - fVar11 / fVar15;
    pfVar8 = (float *)(*param_6 + 0x18);
    *param_6 = (long)pfVar8;
    *(int *)(param_6 + 1) = (int)param_6[1] + 1;
    fVar15 = (float)NEON_ucvtf((uint)*(ushort *)(param_8 + 8));
    fVar20 = (float)NEON_ucvtf((uint)*(ushort *)(param_8 + 10));
LAB_1000f454c:
    fVar18 = (float)NEON_ucvtf(*(undefined4 *)(*(long *)(*param_9 + 8) + 0x48));
    fVar11 = (float)NEON_ucvtf(*(undefined4 *)(*(long *)(*param_9 + 8) + 0x4c));
    fVar12 = (float)NEON_ucvtf((uint)*(ushort *)(param_8 + 4));
    fVar4 = (float)NEON_ucvtf((uint)*(ushort *)(param_8 + 6));
    *pfVar8 = fVar16;
    pfVar8[1] = fVar17;
    pfVar8[2] = 0.0;
    *(undefined1 *)(pfVar8 + 3) = *param_10;
    *(undefined1 *)((long)pfVar8 + 0xd) = param_10[1];
    *(undefined1 *)((long)pfVar8 + 0xe) = param_10[2];
    *(undefined1 *)((long)pfVar8 + 0xf) = param_10[3];
    pfVar8[4] = (fVar12 + fVar15 * 0.5) / fVar18;
    pfVar8[5] = 1.0 - (fVar4 + fVar20 * 0.5) / fVar11;
    lVar9 = *param_6;
    *(float *)(lVar9 + 0x18) = unaff_s8;
    *param_6 = lVar9 + 0x18;
    *(int *)(param_6 + 1) = (int)param_6[1] + 1;
    fVar18 = (float)NEON_ucvtf(*(undefined4 *)(*(long *)(*param_9 + 8) + 0x48));
    fVar15 = (float)NEON_ucvtf(*(undefined4 *)(*(long *)(*param_9 + 8) + 0x4c));
    fVar20 = (float)NEON_ucvtf((uint)*(ushort *)(param_8 + 4));
    fVar11 = (float)NEON_ucvtf((uint)*(ushort *)(param_8 + 6));
    fVar12 = (float)NEON_ucvtf((uint)*(ushort *)(param_8 + 8));
    *(float *)(lVar9 + 0x1c) = fVar10;
    *(undefined4 *)(lVar9 + 0x20) = 0;
    *(undefined1 *)(lVar9 + 0x24) = *param_10;
    *(undefined1 *)(lVar9 + 0x25) = param_10[1];
    *(undefined1 *)(lVar9 + 0x26) = param_10[2];
    *(undefined1 *)(lVar9 + 0x27) = param_10[3];
    *(float *)(lVar9 + 0x28) = (((unaff_s8 - param_1) * fVar12) / fVar19 + fVar20) / fVar18;
    *(float *)(lVar9 + 0x2c) = 1.0 - fVar11 / fVar15;
    lVar9 = *param_6;
    *param_6 = lVar9 + 0x18;
    *(int *)(param_6 + 1) = (int)param_6[1] + 1;
    fVar18 = (float)NEON_ucvtf(*(undefined4 *)(*(long *)(*param_9 + 8) + 0x48));
    fVar15 = (float)NEON_ucvtf(*(undefined4 *)(*(long *)(*param_9 + 8) + 0x4c));
    fVar20 = (float)NEON_ucvtf((uint)*(ushort *)(param_8 + 4));
    fVar10 = (float)NEON_ucvtf((uint)*(ushort *)(param_8 + 6));
    fVar11 = (float)NEON_ucvtf((uint)*(ushort *)(param_8 + 8));
    *(float *)(lVar9 + 0x18) = fVar16 + fVar2;
    *(float *)(lVar9 + 0x1c) = fVar17 + fVar5;
    *(undefined4 *)(lVar9 + 0x20) = 0;
    *(undefined1 *)(lVar9 + 0x24) = *param_10;
    *(undefined1 *)(lVar9 + 0x25) = param_10[1];
    *(undefined1 *)(lVar9 + 0x26) = param_10[2];
    *(undefined1 *)(lVar9 + 0x27) = param_10[3];
    *(float *)(lVar9 + 0x28) = (fVar11 + fVar20) / fVar18;
    *(float *)(lVar9 + 0x2c) = 1.0 - fVar10 / fVar15;
    pfVar8 = (float *)(*param_6 + 0x18);
    *param_6 = (long)pfVar8;
    *(int *)(param_6 + 1) = (int)param_6[1] + 1;
    fVar15 = (float)NEON_ucvtf((uint)*(ushort *)(param_8 + 8));
    fVar20 = (float)NEON_ucvtf((uint)*(ushort *)(param_8 + 10));
    fVar11 = fVar17 + fVar5;
    unaff_s8 = fVar16 + fVar2;
  }
  fVar10 = fVar17 - fVar5;
  fVar14 = (float)NEON_ucvtf(*(undefined4 *)(*(long *)(*param_9 + 8) + 0x48));
  fVar18 = (float)NEON_ucvtf(*(undefined4 *)(*(long *)(*param_9 + 8) + 0x4c));
  fVar12 = (float)NEON_ucvtf((uint)*(ushort *)(param_8 + 4));
  fVar4 = (float)NEON_ucvtf((uint)*(ushort *)(param_8 + 6));
  *pfVar8 = fVar16;
  pfVar8[1] = fVar17;
  pfVar8[2] = 0.0;
  *(undefined1 *)(pfVar8 + 3) = *param_10;
  *(undefined1 *)((long)pfVar8 + 0xd) = param_10[1];
  *(undefined1 *)((long)pfVar8 + 0xe) = param_10[2];
  *(undefined1 *)((long)pfVar8 + 0xf) = param_10[3];
  pfVar8[4] = (fVar12 + fVar15 * 0.5) / fVar14;
  pfVar8[5] = 1.0 - (fVar4 + fVar20 * 0.5) / fVar18;
  lVar9 = *param_6;
  *(float *)(lVar9 + 0x18) = unaff_s8;
  *param_6 = lVar9 + 0x18;
  *(int *)(param_6 + 1) = (int)param_6[1] + 1;
  fVar18 = (float)NEON_ucvtf(*(undefined4 *)(*(long *)(*param_9 + 8) + 0x48));
  fVar15 = (float)NEON_ucvtf(*(undefined4 *)(*(long *)(*param_9 + 8) + 0x4c));
  fVar20 = (float)NEON_ucvtf((uint)*(ushort *)(param_8 + 4));
  fVar12 = (float)NEON_ucvtf((uint)*(ushort *)(param_8 + 6));
  fVar4 = (float)NEON_ucvtf((uint)*(ushort *)(param_8 + 8));
  fVar14 = (float)NEON_ucvtf((uint)*(ushort *)(param_8 + 10));
  *(float *)(lVar9 + 0x1c) = fVar11;
  *(undefined4 *)(lVar9 + 0x20) = 0;
  *(undefined1 *)(lVar9 + 0x24) = *param_10;
  *(undefined1 *)(lVar9 + 0x25) = param_10[1];
  *(undefined1 *)(lVar9 + 0x26) = param_10[2];
  *(undefined1 *)(lVar9 + 0x27) = param_10[3];
  *(float *)(lVar9 + 0x28) = (fVar4 + fVar20) / fVar18;
  *(float *)(lVar9 + 0x2c) = (((fVar11 - param_2) * fVar14) / fVar3 - fVar12) / fVar15 + 1.0;
  lVar9 = *param_6;
  *param_6 = lVar9 + 0x18;
  *(int *)(param_6 + 1) = (int)param_6[1] + 1;
  fVar12 = (float)NEON_ucvtf(*(undefined4 *)(*(long *)(*param_9 + 8) + 0x48));
  fVar18 = (float)NEON_ucvtf(*(undefined4 *)(*(long *)(*param_9 + 8) + 0x4c));
  fVar3 = (float)NEON_ucvtf((uint)*(ushort *)(param_8 + 4));
  fVar15 = (float)NEON_ucvtf((uint)*(ushort *)(param_8 + 6));
  fVar20 = (float)NEON_ucvtf((uint)*(ushort *)(param_8 + 8));
  fVar11 = (float)NEON_ucvtf((uint)*(ushort *)(param_8 + 10));
  *(float *)(lVar9 + 0x18) = fVar16 + fVar2;
  *(float *)(lVar9 + 0x1c) = fVar10;
  *(undefined4 *)(lVar9 + 0x20) = 0;
  *(undefined1 *)(lVar9 + 0x24) = *param_10;
  *(undefined1 *)(lVar9 + 0x25) = param_10[1];
  *(undefined1 *)(lVar9 + 0x26) = param_10[2];
  *(undefined1 *)(lVar9 + 0x27) = param_10[3];
  *(float *)(lVar9 + 0x28) = (fVar20 + fVar3) / fVar12;
  *(float *)(lVar9 + 0x2c) = 1.0 - (fVar11 + fVar15) / fVar18;
  pfVar8 = (float *)(*param_6 + 0x18);
  *param_6 = (long)pfVar8;
  *(int *)(param_6 + 1) = (int)param_6[1] + 1;
  fVar15 = (float)NEON_ucvtf((uint)*(ushort *)(param_8 + 8));
  fVar20 = (float)NEON_ucvtf((uint)*(ushort *)(param_8 + 10));
  unaff_s8 = fVar16 + fVar2;
LAB_1000f48c8:
  fVar12 = (float)NEON_ucvtf(*(undefined4 *)(*(long *)(*param_9 + 8) + 0x48));
  fVar18 = (float)NEON_ucvtf(*(undefined4 *)(*(long *)(*param_9 + 8) + 0x4c));
  fVar3 = (float)NEON_ucvtf((uint)*(ushort *)(param_8 + 4));
  fVar11 = (float)NEON_ucvtf((uint)*(ushort *)(param_8 + 6));
  *pfVar8 = fVar16;
  pfVar8[1] = fVar17;
  pfVar8[2] = 0.0;
  *(undefined1 *)(pfVar8 + 3) = *param_10;
  *(undefined1 *)((long)pfVar8 + 0xd) = param_10[1];
  *(undefined1 *)((long)pfVar8 + 0xe) = param_10[2];
  *(undefined1 *)((long)pfVar8 + 0xf) = param_10[3];
  pfVar8[4] = (fVar3 + fVar15 * 0.5) / fVar12;
  pfVar8[5] = 1.0 - (fVar11 + fVar20 * 0.5) / fVar18;
  lVar9 = *param_6;
  *(float *)(lVar9 + 0x18) = unaff_s8;
  *param_6 = lVar9 + 0x18;
  *(int *)(param_6 + 1) = (int)param_6[1] + 1;
  fVar18 = (float)NEON_ucvtf(*(undefined4 *)(*(long *)(*param_9 + 8) + 0x48));
  fVar3 = (float)NEON_ucvtf(*(undefined4 *)(*(long *)(*param_9 + 8) + 0x4c));
  fVar15 = (float)NEON_ucvtf((uint)*(ushort *)(param_8 + 4));
  fVar20 = (float)NEON_ucvtf((uint)*(ushort *)(param_8 + 6));
  fVar11 = (float)NEON_ucvtf((uint)*(ushort *)(param_8 + 8));
  fVar12 = (float)NEON_ucvtf((uint)*(ushort *)(param_8 + 10));
  *(float *)(lVar9 + 0x1c) = fVar10;
  *(undefined4 *)(lVar9 + 0x20) = 0;
  *(undefined1 *)(lVar9 + 0x24) = *param_10;
  *(undefined1 *)(lVar9 + 0x25) = param_10[1];
  *(undefined1 *)(lVar9 + 0x26) = param_10[2];
  *(undefined1 *)(lVar9 + 0x27) = param_10[3];
  *(float *)(lVar9 + 0x28) = ((((fVar2 - fVar16) + unaff_s8) * fVar11) / fVar19 + fVar15) / fVar18;
  *(float *)(lVar9 + 0x2c) = 1.0 - (fVar12 + fVar20) / fVar3;
  lVar9 = *param_6;
  *param_6 = lVar9 + 0x18;
  *(int *)(param_6 + 1) = (int)param_6[1] + 1;
  fVar18 = (float)NEON_ucvtf(*(undefined4 *)(*(long *)(*param_9 + 8) + 0x48));
  fVar2 = (float)NEON_ucvtf(*(undefined4 *)(*(long *)(*param_9 + 8) + 0x4c));
  fVar3 = (float)NEON_ucvtf((uint)*(ushort *)(param_8 + 4));
  fVar15 = (float)NEON_ucvtf((uint)*(ushort *)(param_8 + 6));
  fVar19 = (float)NEON_ucvtf((uint)*(ushort *)(param_8 + 8));
  fVar20 = (float)NEON_ucvtf((uint)*(ushort *)(param_8 + 10));
  *(float *)(lVar9 + 0x18) = fVar16;
  *(float *)(lVar9 + 0x1c) = fVar17 - fVar5;
  *(undefined4 *)(lVar9 + 0x20) = 0;
  *(undefined1 *)(lVar9 + 0x24) = *param_10;
  *(undefined1 *)(lVar9 + 0x25) = param_10[1];
  *(undefined1 *)(lVar9 + 0x26) = param_10[2];
  *(undefined1 *)(lVar9 + 0x27) = param_10[3];
  *(float *)(lVar9 + 0x28) = (fVar3 + fVar19 * 0.5) / fVar18;
  *(float *)(lVar9 + 0x2c) = 1.0 - (fVar20 + fVar15) / fVar2;
  *param_6 = *param_6 + 0x18;
  *(int *)(param_6 + 1) = (int)param_6[1] + 1;
  return;
}




void FUN_1000f4b7c(float param_1,float param_2,float param_3,float param_4,float param_5,
                  long *param_6,long param_7,long param_8,long *param_9,undefined1 *param_10)

{
  float fVar1;
  float fVar2;
  float fVar3;
  bool bVar4;
  bool bVar5;
  float *pfVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  undefined2 uVar10;
  ushort uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float in_s22;
  
  fVar8 = (float)NEON_fminnm(param_3 * 360.0,0x43b40000);
  if (fVar8 <= 0.0) {
    fVar8 = 0.0;
  }
  fVar16 = (float)NEON_ucvtf((uint)*(ushort *)(param_8 + 8));
  fVar19 = (float)(int)(*(float *)(param_7 + 0x10) * fVar16);
  fVar15 = (float)NEON_ucvtf((uint)*(ushort *)(param_8 + 10));
  fVar2 = (float)(int)(*(float *)(param_7 + 0x14) * fVar15);
  fVar18 = (float)(int)(fVar19 * 0.5);
  fVar20 = (float)(int)(fVar2 * 0.5);
  param_1 = param_1 - (float)(int)(fVar19 * param_4);
  param_2 = param_2 - (float)(int)(fVar2 * param_5);
  fVar17 = (float)(int)(param_1 + fVar18);
  fVar1 = (float)(int)(param_2 + fVar20);
  param_2 = param_2 + fVar2;
  if (45.0 <= fVar8) {
    bVar4 = false;
    bVar5 = false;
    if (45.0 <= fVar8) {
      bVar4 = false;
      bVar5 = true;
      if (!NAN(fVar8)) {
        bVar4 = fVar8 < 90.0;
        bVar5 = false;
      }
    }
    if (bVar4 == bVar5) {
      bVar4 = false;
      bVar5 = false;
      if (90.0 <= fVar8) {
        bVar4 = false;
        bVar5 = true;
        if (!NAN(fVar8)) {
          bVar4 = fVar8 < 135.0;
          bVar5 = false;
        }
      }
      if (bVar4 == bVar5) {
        bVar4 = false;
        bVar5 = false;
        if (135.0 <= fVar8) {
          bVar4 = false;
          bVar5 = true;
          if (!NAN(fVar8)) {
            bVar4 = fVar8 < 180.0;
            bVar5 = false;
          }
        }
        if (bVar4 == bVar5) {
          bVar4 = false;
          bVar5 = false;
          if (180.0 <= fVar8) {
            bVar4 = false;
            bVar5 = true;
            if (!NAN(fVar8)) {
              bVar4 = fVar8 < 225.0;
              bVar5 = false;
            }
          }
          if (bVar4 == bVar5) {
            bVar4 = false;
            bVar5 = false;
            if (225.0 <= fVar8) {
              bVar4 = false;
              bVar5 = true;
              if (!NAN(fVar8)) {
                bVar4 = fVar8 < 270.0;
                bVar5 = false;
              }
            }
            if (bVar4 == bVar5) {
              if ((270.0 <= fVar8) && (fVar8 < 315.0)) {
                in_s22 = fVar17 - fVar18;
                uVar10 = 0x3bb6;
                uVar11 = 0xbfc0;
                goto LAB_1000f4f34;
              }
              fVar9 = 315.0;
              if (315.0 <= fVar8) {
                fVar9 = (float)_tanf((fVar8 * -0.0055555557 + 2.0) * 3.1415927);
                in_s22 = fVar17 - fVar20 * fVar9;
                fVar9 = fVar1 - fVar20;
              }
              goto LAB_1000f502c;
            }
            in_s22 = fVar17 - fVar18;
            uVar10 = 0xbbb6;
            uVar11 = 0x3fc0;
            goto LAB_1000f4f84;
          }
          fVar9 = (float)_tanf(-(fVar8 * -0.0055555557 * 3.1415927) - 3.1415927);
          in_s22 = fVar17 - fVar20 * fVar9;
        }
        else {
          fVar9 = (float)_tanf(fVar8 * -0.0055555557 * 3.1415927 + 3.1415927);
          in_s22 = fVar17 + fVar20 * fVar9;
        }
        fVar9 = fVar1 + fVar20;
      }
      else {
        in_s22 = fVar17 + fVar18;
        uVar10 = 0x3bb6;
        uVar11 = 0xbf00;
LAB_1000f4f84:
        fVar9 = (float)_tanf(((float)((uint)uVar11 << 0x10) + (float)CONCAT22(uVar10,0xb61) * fVar8)
                             * 3.1415927);
        fVar9 = fVar1 + fVar18 * fVar9;
      }
    }
    else {
      in_s22 = fVar17 + fVar18;
      uVar10 = 0xbbb6;
      uVar11 = 0x3f00;
LAB_1000f4f34:
      fVar9 = (float)_tanf(((float)((uint)uVar11 << 0x10) + (float)CONCAT22(uVar10,0xb61) * fVar8) *
                           3.1415927);
      fVar9 = fVar1 - fVar18 * fVar9;
    }
LAB_1000f502c:
    if (fVar8 < 135.0) {
      pfVar6 = (float *)*param_6;
      fVar8 = fVar9;
      goto LAB_1000f5048;
    }
    if (fVar8 < 225.0) {
      pfVar6 = (float *)*param_6;
      goto LAB_1000f520c;
    }
    pfVar6 = (float *)*param_6;
    fVar14 = in_s22;
    if (315.0 <= fVar8) goto LAB_1000f556c;
  }
  else {
    fVar8 = (float)_tanf(fVar8 * 0.0055555557 * 3.1415927);
    fVar12 = fVar17 + fVar20 * fVar8;
    fVar8 = fVar1 - fVar20;
    in_s22 = fVar17 + fVar18;
    fVar9 = (float)NEON_ucvtf(*(undefined4 *)(*(long *)(*param_9 + 8) + 0x48));
    fVar14 = (float)NEON_ucvtf(*(undefined4 *)(*(long *)(*param_9 + 8) + 0x4c));
    fVar3 = (float)NEON_ucvtf((uint)*(ushort *)(param_8 + 4));
    fVar13 = (float)NEON_ucvtf((uint)*(ushort *)(param_8 + 6));
    pfVar6 = (float *)*param_6;
    *pfVar6 = fVar17;
    pfVar6[1] = fVar1;
    pfVar6[2] = 0.0;
    *(undefined1 *)(pfVar6 + 3) = *param_10;
    *(undefined1 *)((long)pfVar6 + 0xd) = param_10[1];
    *(undefined1 *)((long)pfVar6 + 0xe) = param_10[2];
    *(undefined1 *)((long)pfVar6 + 0xf) = param_10[3];
    pfVar6[4] = (fVar3 + fVar16 * 0.5) / fVar9;
    pfVar6[5] = 1.0 - (fVar13 + fVar15 * 0.5) / fVar14;
    lVar7 = *param_6;
    *(float *)(lVar7 + 0x18) = in_s22;
    *param_6 = lVar7 + 0x18;
    *(int *)(param_6 + 1) = (int)param_6[1] + 1;
    fVar15 = (float)NEON_ucvtf(*(undefined4 *)(*(long *)(*param_9 + 8) + 0x48));
    fVar16 = (float)NEON_ucvtf(*(undefined4 *)(*(long *)(*param_9 + 8) + 0x4c));
    fVar9 = (float)NEON_ucvtf((uint)*(ushort *)(param_8 + 4));
    fVar14 = (float)NEON_ucvtf((uint)*(ushort *)(param_8 + 6));
    fVar3 = (float)NEON_ucvtf((uint)*(ushort *)(param_8 + 8));
    fVar13 = (float)NEON_ucvtf((uint)*(ushort *)(param_8 + 10));
    *(float *)(lVar7 + 0x1c) = fVar8;
    *(undefined4 *)(lVar7 + 0x20) = 0;
    *(undefined1 *)(lVar7 + 0x24) = *param_10;
    *(undefined1 *)(lVar7 + 0x25) = param_10[1];
    *(undefined1 *)(lVar7 + 0x26) = param_10[2];
    *(undefined1 *)(lVar7 + 0x27) = param_10[3];
    *(float *)(lVar7 + 0x28) = (fVar3 + fVar9) / fVar15;
    *(float *)(lVar7 + 0x2c) = 1.0 - (fVar13 + fVar14) / fVar16;
    lVar7 = *param_6;
    *(float *)(lVar7 + 0x18) = fVar12;
    *param_6 = lVar7 + 0x18;
    *(int *)(param_6 + 1) = (int)param_6[1] + 1;
    fVar15 = (float)NEON_ucvtf(*(undefined4 *)(*(long *)(*param_9 + 8) + 0x48));
    fVar16 = (float)NEON_ucvtf(*(undefined4 *)(*(long *)(*param_9 + 8) + 0x4c));
    fVar9 = (float)NEON_ucvtf((uint)*(ushort *)(param_8 + 4));
    fVar14 = (float)NEON_ucvtf((uint)*(ushort *)(param_8 + 6));
    fVar3 = (float)NEON_ucvtf((uint)*(ushort *)(param_8 + 8));
    fVar13 = (float)NEON_ucvtf((uint)*(ushort *)(param_8 + 10));
    *(float *)(lVar7 + 0x1c) = fVar8;
    *(undefined4 *)(lVar7 + 0x20) = 0;
    *(undefined1 *)(lVar7 + 0x24) = *param_10;
    *(undefined1 *)(lVar7 + 0x25) = param_10[1];
    *(undefined1 *)(lVar7 + 0x26) = param_10[2];
    *(undefined1 *)(lVar7 + 0x27) = param_10[3];
    *(float *)(lVar7 + 0x28) = (((fVar12 - param_1) * fVar3) / fVar19 + fVar9) / fVar15;
    *(float *)(lVar7 + 0x2c) = 1.0 - (fVar13 + fVar14) / fVar16;
    pfVar6 = (float *)(*param_6 + 0x18);
    *param_6 = (long)pfVar6;
    *(int *)(param_6 + 1) = (int)param_6[1] + 1;
    fVar16 = (float)NEON_ucvtf((uint)*(ushort *)(param_8 + 8));
    fVar15 = (float)NEON_ucvtf((uint)*(ushort *)(param_8 + 10));
LAB_1000f5048:
    fVar9 = fVar1 + fVar20;
    fVar12 = (float)NEON_ucvtf(*(undefined4 *)(*(long *)(*param_9 + 8) + 0x48));
    fVar14 = (float)NEON_ucvtf(*(undefined4 *)(*(long *)(*param_9 + 8) + 0x4c));
    fVar3 = (float)NEON_ucvtf((uint)*(ushort *)(param_8 + 4));
    fVar13 = (float)NEON_ucvtf((uint)*(ushort *)(param_8 + 6));
    *pfVar6 = fVar17;
    pfVar6[1] = fVar1;
    pfVar6[2] = 0.0;
    *(undefined1 *)(pfVar6 + 3) = *param_10;
    *(undefined1 *)((long)pfVar6 + 0xd) = param_10[1];
    *(undefined1 *)((long)pfVar6 + 0xe) = param_10[2];
    *(undefined1 *)((long)pfVar6 + 0xf) = param_10[3];
    pfVar6[4] = (fVar3 + fVar16 * 0.5) / fVar12;
    pfVar6[5] = 1.0 - (fVar13 + fVar15 * 0.5) / fVar14;
    lVar7 = *param_6;
    *(float *)(lVar7 + 0x18) = fVar17 + fVar18;
    *param_6 = lVar7 + 0x18;
    *(int *)(param_6 + 1) = (int)param_6[1] + 1;
    fVar15 = (float)NEON_ucvtf(*(undefined4 *)(*(long *)(*param_9 + 8) + 0x48));
    fVar16 = (float)NEON_ucvtf(*(undefined4 *)(*(long *)(*param_9 + 8) + 0x4c));
    fVar14 = (float)NEON_ucvtf((uint)*(ushort *)(param_8 + 4));
    fVar3 = (float)NEON_ucvtf((uint)*(ushort *)(param_8 + 6));
    fVar13 = (float)NEON_ucvtf((uint)*(ushort *)(param_8 + 8));
    *(float *)(lVar7 + 0x1c) = fVar9;
    *(undefined4 *)(lVar7 + 0x20) = 0;
    *(undefined1 *)(lVar7 + 0x24) = *param_10;
    *(undefined1 *)(lVar7 + 0x25) = param_10[1];
    *(undefined1 *)(lVar7 + 0x26) = param_10[2];
    *(undefined1 *)(lVar7 + 0x27) = param_10[3];
    *(float *)(lVar7 + 0x28) = (fVar13 + fVar14) / fVar15;
    *(float *)(lVar7 + 0x2c) = 1.0 - fVar3 / fVar16;
    lVar7 = *param_6;
    *(float *)(lVar7 + 0x18) = in_s22;
    *param_6 = lVar7 + 0x18;
    *(int *)(param_6 + 1) = (int)param_6[1] + 1;
    fVar15 = (float)NEON_ucvtf(*(undefined4 *)(*(long *)(*param_9 + 8) + 0x48));
    fVar16 = (float)NEON_ucvtf(*(undefined4 *)(*(long *)(*param_9 + 8) + 0x4c));
    fVar14 = (float)NEON_ucvtf((uint)*(ushort *)(param_8 + 4));
    fVar3 = (float)NEON_ucvtf((uint)*(ushort *)(param_8 + 6));
    fVar13 = (float)NEON_ucvtf((uint)*(ushort *)(param_8 + 8));
    fVar12 = (float)NEON_ucvtf((uint)*(ushort *)(param_8 + 10));
    *(float *)(lVar7 + 0x1c) = fVar8;
    *(undefined4 *)(lVar7 + 0x20) = 0;
    *(undefined1 *)(lVar7 + 0x24) = *param_10;
    *(undefined1 *)(lVar7 + 0x25) = param_10[1];
    *(undefined1 *)(lVar7 + 0x26) = param_10[2];
    *(undefined1 *)(lVar7 + 0x27) = param_10[3];
    *(float *)(lVar7 + 0x28) = (fVar13 + fVar14) / fVar15;
    *(float *)(lVar7 + 0x2c) = (((fVar8 - param_2) * fVar12) / fVar2 - fVar3) / fVar16 + 1.0;
    pfVar6 = (float *)(*param_6 + 0x18);
    *param_6 = (long)pfVar6;
    *(int *)(param_6 + 1) = (int)param_6[1] + 1;
    fVar16 = (float)NEON_ucvtf((uint)*(ushort *)(param_8 + 8));
    fVar15 = (float)NEON_ucvtf((uint)*(ushort *)(param_8 + 10));
    in_s22 = fVar17 + fVar18;
LAB_1000f520c:
    fVar13 = (float)NEON_ucvtf(*(undefined4 *)(*(long *)(*param_9 + 8) + 0x48));
    fVar8 = (float)NEON_ucvtf(*(undefined4 *)(*(long *)(*param_9 + 8) + 0x4c));
    fVar14 = (float)NEON_ucvtf((uint)*(ushort *)(param_8 + 4));
    fVar3 = (float)NEON_ucvtf((uint)*(ushort *)(param_8 + 6));
    *pfVar6 = fVar17;
    pfVar6[1] = fVar1;
    pfVar6[2] = 0.0;
    *(undefined1 *)(pfVar6 + 3) = *param_10;
    *(undefined1 *)((long)pfVar6 + 0xd) = param_10[1];
    *(undefined1 *)((long)pfVar6 + 0xe) = param_10[2];
    *(undefined1 *)((long)pfVar6 + 0xf) = param_10[3];
    pfVar6[4] = (fVar14 + fVar16 * 0.5) / fVar13;
    pfVar6[5] = 1.0 - (fVar3 + fVar15 * 0.5) / fVar8;
    lVar7 = *param_6;
    *(float *)(lVar7 + 0x18) = fVar17 - fVar18;
    *param_6 = lVar7 + 0x18;
    *(int *)(param_6 + 1) = (int)param_6[1] + 1;
    fVar8 = (float)NEON_ucvtf(*(undefined4 *)(*(long *)(*param_9 + 8) + 0x48));
    fVar15 = (float)NEON_ucvtf(*(undefined4 *)(*(long *)(*param_9 + 8) + 0x4c));
    fVar16 = (float)NEON_ucvtf((uint)*(ushort *)(param_8 + 4));
    fVar14 = (float)NEON_ucvtf((uint)*(ushort *)(param_8 + 6));
    *(float *)(lVar7 + 0x1c) = fVar1 + fVar20;
    *(undefined4 *)(lVar7 + 0x20) = 0;
    *(undefined1 *)(lVar7 + 0x24) = *param_10;
    *(undefined1 *)(lVar7 + 0x25) = param_10[1];
    *(undefined1 *)(lVar7 + 0x26) = param_10[2];
    *(undefined1 *)(lVar7 + 0x27) = param_10[3];
    *(float *)(lVar7 + 0x28) = fVar16 / fVar8;
    *(float *)(lVar7 + 0x2c) = 1.0 - fVar14 / fVar15;
    lVar7 = *param_6;
    *(float *)(lVar7 + 0x18) = in_s22;
    *param_6 = lVar7 + 0x18;
    *(int *)(param_6 + 1) = (int)param_6[1] + 1;
    fVar8 = (float)NEON_ucvtf(*(undefined4 *)(*(long *)(*param_9 + 8) + 0x48));
    fVar15 = (float)NEON_ucvtf(*(undefined4 *)(*(long *)(*param_9 + 8) + 0x4c));
    fVar16 = (float)NEON_ucvtf((uint)*(ushort *)(param_8 + 4));
    fVar14 = (float)NEON_ucvtf((uint)*(ushort *)(param_8 + 6));
    fVar3 = (float)NEON_ucvtf((uint)*(ushort *)(param_8 + 8));
    *(float *)(lVar7 + 0x1c) = fVar9;
    *(undefined4 *)(lVar7 + 0x20) = 0;
    *(undefined1 *)(lVar7 + 0x24) = *param_10;
    *(undefined1 *)(lVar7 + 0x25) = param_10[1];
    *(undefined1 *)(lVar7 + 0x26) = param_10[2];
    *(undefined1 *)(lVar7 + 0x27) = param_10[3];
    *(float *)(lVar7 + 0x28) = (((in_s22 - param_1) * fVar3) / fVar19 + fVar16) / fVar8;
    *(float *)(lVar7 + 0x2c) = 1.0 - fVar14 / fVar15;
    pfVar6 = (float *)(*param_6 + 0x18);
    *param_6 = (long)pfVar6;
    *(int *)(param_6 + 1) = (int)param_6[1] + 1;
    fVar16 = (float)NEON_ucvtf((uint)*(ushort *)(param_8 + 8));
    fVar15 = (float)NEON_ucvtf((uint)*(ushort *)(param_8 + 10));
    fVar9 = fVar1 + fVar20;
    fVar14 = fVar17 - fVar18;
  }
  in_s22 = fVar17 - fVar18;
  fVar8 = (float)NEON_ucvtf(*(undefined4 *)(*(long *)(*param_9 + 8) + 0x48));
  fVar13 = (float)NEON_ucvtf(*(undefined4 *)(*(long *)(*param_9 + 8) + 0x4c));
  fVar18 = (float)NEON_ucvtf((uint)*(ushort *)(param_8 + 4));
  fVar3 = (float)NEON_ucvtf((uint)*(ushort *)(param_8 + 6));
  *pfVar6 = fVar17;
  pfVar6[1] = fVar1;
  pfVar6[2] = 0.0;
  *(undefined1 *)(pfVar6 + 3) = *param_10;
  *(undefined1 *)((long)pfVar6 + 0xd) = param_10[1];
  *(undefined1 *)((long)pfVar6 + 0xe) = param_10[2];
  *(undefined1 *)((long)pfVar6 + 0xf) = param_10[3];
  pfVar6[4] = (fVar18 + fVar16 * 0.5) / fVar8;
  pfVar6[5] = 1.0 - (fVar3 + fVar15 * 0.5) / fVar13;
  lVar7 = *param_6;
  *(float *)(lVar7 + 0x18) = in_s22;
  *param_6 = lVar7 + 0x18;
  *(int *)(param_6 + 1) = (int)param_6[1] + 1;
  fVar8 = (float)NEON_ucvtf(*(undefined4 *)(*(long *)(*param_9 + 8) + 0x48));
  fVar15 = (float)NEON_ucvtf(*(undefined4 *)(*(long *)(*param_9 + 8) + 0x4c));
  fVar16 = (float)NEON_ucvtf((uint)*(ushort *)(param_8 + 4));
  fVar18 = (float)NEON_ucvtf((uint)*(ushort *)(param_8 + 6));
  fVar3 = (float)NEON_ucvtf((uint)*(ushort *)(param_8 + 10));
  *(float *)(lVar7 + 0x1c) = fVar1 - fVar20;
  *(undefined4 *)(lVar7 + 0x20) = 0;
  *(undefined1 *)(lVar7 + 0x24) = *param_10;
  *(undefined1 *)(lVar7 + 0x25) = param_10[1];
  *(undefined1 *)(lVar7 + 0x26) = param_10[2];
  *(undefined1 *)(lVar7 + 0x27) = param_10[3];
  *(float *)(lVar7 + 0x28) = fVar16 / fVar8;
  *(float *)(lVar7 + 0x2c) = 1.0 - (fVar3 + fVar18) / fVar15;
  lVar7 = *param_6;
  *(float *)(lVar7 + 0x18) = fVar14;
  *param_6 = lVar7 + 0x18;
  *(int *)(param_6 + 1) = (int)param_6[1] + 1;
  fVar8 = (float)NEON_ucvtf(*(undefined4 *)(*(long *)(*param_9 + 8) + 0x48));
  fVar15 = (float)NEON_ucvtf(*(undefined4 *)(*(long *)(*param_9 + 8) + 0x4c));
  fVar16 = (float)NEON_ucvtf((uint)*(ushort *)(param_8 + 4));
  fVar18 = (float)NEON_ucvtf((uint)*(ushort *)(param_8 + 6));
  fVar14 = (float)NEON_ucvtf((uint)*(ushort *)(param_8 + 10));
  *(float *)(lVar7 + 0x1c) = fVar9;
  *(undefined4 *)(lVar7 + 0x20) = 0;
  *(undefined1 *)(lVar7 + 0x24) = *param_10;
  *(undefined1 *)(lVar7 + 0x25) = param_10[1];
  *(undefined1 *)(lVar7 + 0x26) = param_10[2];
  *(undefined1 *)(lVar7 + 0x27) = param_10[3];
  *(float *)(lVar7 + 0x28) = fVar16 / fVar8;
  *(float *)(lVar7 + 0x2c) = (((fVar9 - param_2) * fVar14) / fVar2 - fVar18) / fVar15 + 1.0;
  pfVar6 = (float *)(*param_6 + 0x18);
  *param_6 = (long)pfVar6;
  *(int *)(param_6 + 1) = (int)param_6[1] + 1;
  fVar16 = (float)NEON_ucvtf((uint)*(ushort *)(param_8 + 8));
  fVar15 = (float)NEON_ucvtf((uint)*(ushort *)(param_8 + 10));
  fVar9 = fVar1 - fVar20;
LAB_1000f556c:
  fVar8 = (float)NEON_ucvtf(*(undefined4 *)(*(long *)(*param_9 + 8) + 0x48));
  fVar14 = (float)NEON_ucvtf(*(undefined4 *)(*(long *)(*param_9 + 8) + 0x4c));
  fVar2 = (float)NEON_ucvtf((uint)*(ushort *)(param_8 + 4));
  fVar18 = (float)NEON_ucvtf((uint)*(ushort *)(param_8 + 6));
  *pfVar6 = fVar17;
  pfVar6[1] = fVar1;
  pfVar6[2] = 0.0;
  *(undefined1 *)(pfVar6 + 3) = *param_10;
  *(undefined1 *)((long)pfVar6 + 0xd) = param_10[1];
  *(undefined1 *)((long)pfVar6 + 0xe) = param_10[2];
  *(undefined1 *)((long)pfVar6 + 0xf) = param_10[3];
  pfVar6[4] = (fVar2 + fVar16 * 0.5) / fVar8;
  pfVar6[5] = 1.0 - (fVar18 + fVar15 * 0.5) / fVar14;
  lVar7 = *param_6;
  *(float *)(lVar7 + 0x18) = fVar17;
  *param_6 = lVar7 + 0x18;
  *(int *)(param_6 + 1) = (int)param_6[1] + 1;
  fVar18 = (float)NEON_ucvtf(*(undefined4 *)(*(long *)(*param_9 + 8) + 0x48));
  fVar8 = (float)NEON_ucvtf(*(undefined4 *)(*(long *)(*param_9 + 8) + 0x4c));
  fVar2 = (float)NEON_ucvtf((uint)*(ushort *)(param_8 + 4));
  fVar15 = (float)NEON_ucvtf((uint)*(ushort *)(param_8 + 6));
  fVar16 = (float)NEON_ucvtf((uint)*(ushort *)(param_8 + 8));
  fVar17 = (float)NEON_ucvtf((uint)*(ushort *)(param_8 + 10));
  *(float *)(lVar7 + 0x1c) = fVar1 - fVar20;
  *(undefined4 *)(lVar7 + 0x20) = 0;
  *(undefined1 *)(lVar7 + 0x24) = *param_10;
  *(undefined1 *)(lVar7 + 0x25) = param_10[1];
  *(undefined1 *)(lVar7 + 0x26) = param_10[2];
  *(undefined1 *)(lVar7 + 0x27) = param_10[3];
  *(float *)(lVar7 + 0x28) = (fVar2 + fVar16 * 0.5) / fVar18;
  *(float *)(lVar7 + 0x2c) = 1.0 - (fVar17 + fVar15) / fVar8;
  lVar7 = *param_6;
  *(float *)(lVar7 + 0x18) = in_s22;
  *param_6 = lVar7 + 0x18;
  *(int *)(param_6 + 1) = (int)param_6[1] + 1;
  fVar17 = (float)NEON_ucvtf(*(undefined4 *)(*(long *)(*param_9 + 8) + 0x48));
  fVar8 = (float)NEON_ucvtf(*(undefined4 *)(*(long *)(*param_9 + 8) + 0x4c));
  fVar1 = (float)NEON_ucvtf((uint)*(ushort *)(param_8 + 4));
  fVar2 = (float)NEON_ucvtf((uint)*(ushort *)(param_8 + 6));
  fVar15 = (float)NEON_ucvtf((uint)*(ushort *)(param_8 + 8));
  fVar16 = (float)NEON_ucvtf((uint)*(ushort *)(param_8 + 10));
  *(float *)(lVar7 + 0x1c) = fVar9;
  *(undefined4 *)(lVar7 + 0x20) = 0;
  *(undefined1 *)(lVar7 + 0x24) = *param_10;
  *(undefined1 *)(lVar7 + 0x25) = param_10[1];
  *(undefined1 *)(lVar7 + 0x26) = param_10[2];
  *(undefined1 *)(lVar7 + 0x27) = param_10[3];
  *(float *)(lVar7 + 0x28) = (((in_s22 - param_1) * fVar15) / fVar19 + fVar1) / fVar17;
  *(float *)(lVar7 + 0x2c) = 1.0 - (fVar16 + fVar2) / fVar8;
  *param_6 = *param_6 + 0x18;
  *(int *)(param_6 + 1) = (int)param_6[1] + 1;
  return;
}




undefined8 FUN_1000f5808(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  void *local_48 [2];
  char local_31;
  undefined8 local_30;
  undefined8 uStack_28;
  
  puVar1 = (undefined8 *)FUN_10014f4a0();
  *puVar1 = &PTR_thunk_FUN_1000f58e8_101458880;
  puVar1[4] = 0;
  puVar1[3] = 0;
  puVar1[6] = 0;
  puVar1[5] = 0;
  puVar1[8] = 0;
  puVar1[7] = 0;
  thunk_FUN_100016500(puVar1 + 9,"INVENTORYCHEST",1);
  local_30 = 0;
  uStack_28 = 0;
  FUN_10001549c(local_48,"chest");
  FUN_10001617c(&local_30,local_48);
  if (local_31 < '\0') {
    operator_delete(local_48[0]);
  }
  FUN_10001549c(local_48,"key");
  FUN_10001617c(&local_30,local_48);
  if (local_31 < '\0') {
    operator_delete(local_48[0]);
  }
  uVar2 = FUN_10015d3ec();
  FUN_10016426c(uVar2,&local_30);
  FUN_1000165f0(puVar1 + 9,0);
  FUN_10001629c(&local_30,1);
  return param_1;
}




void FUN_1000f58e8(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_1000f58e8_101458880;
  FUN_1000f5950();
  thunk_FUN_10001653c(param_1 + 9);
  if ((void *)param_1[8] != (void *)0x0) {
    operator_delete__((void *)param_1[8]);
    param_1[7] = 0;
    param_1[8] = 0;
  }
  if ((void *)param_1[6] != (void *)0x0) {
    operator_delete__((void *)param_1[6]);
    param_1[5] = 0;
    param_1[6] = 0;
  }
  if ((void *)param_1[4] != (void *)0x0) {
    operator_delete__((void *)param_1[4]);
    param_1[3] = 0;
    param_1[4] = 0;
  }
  FUN_10014f51c(param_1);
  return;
}




void FUN_1000f5950(long param_1)

{
  void *pvVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  
  uVar3 = (ulong)*(uint *)(param_1 + 0x28);
  if (*(uint *)(param_1 + 0x28) != 0) {
    uVar5 = 0;
    do {
      lVar4 = *(long *)(param_1 + 0x30);
      if (*(long *)(lVar4 + uVar5 * 8) != 0) {
        pvVar1 = (void *)FUN_1000f7abc();
        operator_delete(pvVar1);
        lVar4 = *(long *)(param_1 + 0x30);
        uVar3 = (ulong)*(uint *)(param_1 + 0x28);
      }
      *(undefined8 *)(lVar4 + uVar5 * 8) = 0;
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar3);
  }
  uVar2 = *(uint *)(param_1 + 0x38);
  if (uVar2 != 0) {
    uVar3 = 0;
    do {
      lVar4 = *(long *)(param_1 + 0x40);
      puVar6 = *(undefined8 **)(lVar4 + uVar3 * 8);
      if (puVar6 != (undefined8 *)0x0) {
        if (*(char *)((long)puVar6 + 0x47) < '\0') {
          operator_delete((void *)puVar6[6]);
        }
        if (*(char *)((long)puVar6 + 0x2f) < '\0') {
          operator_delete((void *)puVar6[3]);
        }
        if (*(char *)((long)puVar6 + 0x17) < '\0') {
          operator_delete((void *)*puVar6);
        }
        operator_delete(puVar6);
        lVar4 = *(long *)(param_1 + 0x40);
        uVar2 = *(uint *)(param_1 + 0x38);
      }
      *(undefined8 *)(lVar4 + uVar3 * 8) = 0;
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar2);
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  if (*(long *)(param_1 + 0x40) != 0) {
    *(undefined4 *)(param_1 + 0x38) = 0;
  }
  return;
}




void thunk_FUN_1000f58e8(void)

{
  FUN_1000f58e8();
  return;
}




void FUN_1000f5a30(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1000f58e8();
  operator_delete(pvVar1);
  return;
}




void FUN_1000f6ab8(uint *param_1,long param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = *param_1;
  if (uVar4 == param_1[1]) {
    uVar2 = 0;
    if (uVar4 != 0xffffffff) {
      uVar2 = uVar4 + (~uVar4 | 0xfffffff0) + 0x11;
    }
    if (uVar4 < 0x20) {
      uVar2 = uVar4 << 1;
    }
    uVar3 = uVar4 + 1;
    if (uVar4 + 1 <= uVar2) {
      uVar3 = uVar2;
    }
    FUN_1000f9608(param_1,uVar3);
    uVar4 = *param_1;
  }
  *param_1 = uVar4 + 1;
  lVar1 = *(long *)(param_1 + 2) + (ulong)(uVar4 + 1) * 0x20;
  FUN_10003330c(lVar1 + -0x20,param_2);
  *(undefined4 *)(lVar1 + -8) = *(undefined4 *)(param_2 + 0x18);
  return;
}




void FUN_1000f6b44(uint *param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  
  uVar3 = *param_1;
  if (uVar3 == param_1[1]) {
    uVar1 = 0;
    if (uVar3 != 0xffffffff) {
      uVar1 = uVar3 + (~uVar3 | 0xfffffff0) + 0x11;
    }
    if (uVar3 < 0x20) {
      uVar1 = uVar3 << 1;
    }
    uVar2 = uVar3 + 1;
    if (uVar3 + 1 <= uVar1) {
      uVar2 = uVar1;
    }
    FUN_1000f9758(param_1,uVar2);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  lVar4 = *(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 0x28;
  FUN_10003330c(lVar4 + -0x28,param_2);
  FUN_1000f9848(lVar4 + -0x10,param_2 + 0x18);
  return;
}




void FUN_1000f6bd4(undefined8 *param_1,undefined8 param_2,long *param_3)

{
  char *pcVar1;
  long *plVar2;
  long lVar3;
  char *pcVar4;
  long lVar5;
  ulong uVar6;
  void *local_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  void *local_a8;
  undefined8 local_a0;
  long lStack_98;
  void *local_90;
  undefined8 uStack_88;
  long local_80;
  char *local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  char local_61;
  
  *param_1 = 0;
  param_1[1] = 0;
  if ((int)param_3[1] != 0) {
    lVar5 = 0;
    uVar6 = 0;
    pcVar1 = "";
    do {
      local_80 = 0;
      lStack_98 = 0;
      local_a0 = 0;
      uStack_88 = 0;
      local_90 = (void *)0x0;
      uStack_b8 = 0;
      local_c0 = (void *)0x0;
      local_a8 = (void *)0x0;
      lStack_b0 = 0;
      plVar2 = (long *)(*param_3 + lVar5);
      lVar3 = FUN_1000e86c0(plVar2,"icon_texture");
      if (*plVar2 + (ulong)*(uint *)(plVar2 + 1) * 0x30 == lVar3) {
        pcVar4 = "";
      }
      else {
        local_68 = 0x100005;
        local_78 = "icon_texture";
        uStack_70 = 0xc;
        lVar3 = FUN_1000e87dc(plVar2,&local_78);
        pcVar4 = pcVar1;
        if ((*(byte *)(lVar3 + 0x12) >> 4 & 1) != 0) {
          local_68 = 0x100005;
          local_78 = "icon_texture";
          uStack_70 = 0xc;
          pcVar4 = (char *)FUN_1000e87dc(plVar2,&local_78);
          if (((byte)pcVar4[0x12] >> 6 & 1) == 0) {
            pcVar4 = *(char **)pcVar4;
          }
        }
      }
      FUN_10001549c(&local_78,pcVar4);
      std::string::operator=((string *)&local_c0,(string *)&local_78);
      if (local_61 < '\0') {
        operator_delete(local_78);
      }
      plVar2 = (long *)(*param_3 + lVar5);
      lVar3 = FUN_1000e86c0(plVar2,"text");
      if (*plVar2 + (ulong)*(uint *)(plVar2 + 1) * 0x30 == lVar3) {
        pcVar4 = "";
      }
      else {
        local_68 = 0x100005;
        local_78 = "text";
        uStack_70 = 4;
        lVar3 = FUN_1000e87dc(plVar2,&local_78);
        pcVar4 = pcVar1;
        if ((*(byte *)(lVar3 + 0x12) >> 4 & 1) != 0) {
          local_68 = 0x100005;
          local_78 = "text";
          uStack_70 = 4;
          pcVar4 = (char *)FUN_1000e87dc(plVar2,&local_78);
          if (((byte)pcVar4[0x12] >> 6 & 1) == 0) {
            pcVar4 = *(char **)pcVar4;
          }
        }
      }
      FUN_10001549c(&local_78,pcVar4);
      std::string::operator=((string *)&local_a8,(string *)&local_78);
      if (local_61 < '\0') {
        operator_delete(local_78);
      }
      plVar2 = (long *)(*param_3 + lVar5);
      lVar3 = FUN_1000e86c0(plVar2,"type");
      if (*plVar2 + (ulong)*(uint *)(plVar2 + 1) * 0x30 == lVar3) {
        pcVar4 = "";
      }
      else {
        local_68 = 0x100005;
        local_78 = "type";
        uStack_70 = 4;
        lVar3 = FUN_1000e87dc(plVar2,&local_78);
        pcVar4 = pcVar1;
        if ((*(byte *)(lVar3 + 0x12) >> 4 & 1) != 0) {
          local_68 = 0x100005;
          local_78 = "type";
          uStack_70 = 4;
          pcVar4 = (char *)FUN_1000e87dc(plVar2,&local_78);
          if (((byte)pcVar4[0x12] >> 6 & 1) == 0) {
            pcVar4 = *(char **)pcVar4;
          }
        }
      }
      FUN_10001549c(&local_78,pcVar4);
      std::string::operator=((string *)&local_90,(string *)&local_78);
      if (local_61 < '\0') {
        operator_delete(local_78);
      }
      FUN_1000f79bc(param_1,&local_c0);
      if (local_80 < 0) {
        operator_delete(local_90);
      }
      if (lStack_98 < 0) {
        operator_delete(local_a8);
      }
      if (lStack_b0 < 0) {
        operator_delete(local_c0);
      }
      uVar6 = uVar6 + 1;
      lVar5 = lVar5 + 0x18;
    } while (uVar6 < *(uint *)(param_3 + 1));
  }
  return;
}




void FUN_1000f6ec4(uint *param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  
  uVar3 = *param_1;
  if (uVar3 == param_1[1]) {
    uVar1 = 0;
    if (uVar3 != 0xffffffff) {
      uVar1 = uVar3 + (~uVar3 | 0xfffffff0) + 0x11;
    }
    if (uVar3 < 0x20) {
      uVar1 = uVar3 << 1;
    }
    uVar2 = uVar3 + 1;
    if (uVar3 + 1 <= uVar1) {
      uVar2 = uVar1;
    }
    FUN_1000f9b90(param_1,uVar2);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  lVar4 = *(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 0x28;
  FUN_10003330c(lVar4 + -0x28,param_2);
  FUN_1000f9c80(lVar4 + -0x10,param_2 + 0x18);
  return;
}




void FUN_1000f6f54(uint *param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = *param_1;
  if (uVar3 == param_1[1]) {
    uVar1 = 0;
    if (uVar3 != 0xffffffff) {
      uVar1 = uVar3 + (~uVar3 | 0xfffffff0) + 0x11;
    }
    if (uVar3 < 0x20) {
      uVar1 = uVar3 << 1;
    }
    uVar2 = uVar3 + 1;
    if (uVar3 + 1 <= uVar1) {
      uVar2 = uVar1;
    }
    FUN_1000f9e24(param_1,uVar2);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




void FUN_1000f6fd4(uint *param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = *param_1;
  if (uVar3 == param_1[1]) {
    uVar1 = 0;
    if (uVar3 != 0xffffffff) {
      uVar1 = uVar3 + (~uVar3 | 0xfffffff0) + 0x11;
    }
    if (uVar3 < 0x20) {
      uVar1 = uVar3 << 1;
    }
    uVar2 = uVar3 + 1;
    if (uVar3 + 1 <= uVar1) {
      uVar2 = uVar1;
    }
    FUN_1000f9ea0(param_1,uVar2);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




int FUN_1000f7054(long param_1,uint *param_2)

{
  undefined8 *puVar1;
  size_t sVar2;
  size_t sVar3;
  undefined8 *puVar4;
  uint uVar5;
  uint uVar6;
  byte bVar7;
  byte bVar8;
  ulong uVar9;
  bool bVar10;
  int iVar11;
  int iVar12;
  byte *pbVar13;
  ulong uVar14;
  byte *pbVar15;
  long lVar16;
  long lVar17;
  byte *pbVar18;
  byte *pbVar19;
  ulong uVar20;
  
  uVar5 = *param_2;
  if (uVar5 == 0) {
    return 0;
  }
  uVar14 = 0;
  iVar12 = 0;
  lVar16 = *(long *)(param_2 + 2);
  uVar6 = *(uint *)(param_1 + 0x38);
  pbVar19 = (byte *)(lVar16 + 1);
LAB_1000f7098:
  if (uVar6 == 0) {
    return 0;
  }
  uVar20 = 0;
  puVar1 = (undefined8 *)(lVar16 + uVar14 * 0x20);
  lVar17 = *(long *)(param_1 + 0x40);
  bVar7 = *(byte *)((long)puVar1 + 0x17);
  sVar2 = puVar1[1];
  if (-1 < (char)bVar7) {
    sVar2 = (ulong)bVar7;
  }
  bVar10 = true;
  do {
    pbVar18 = *(byte **)(lVar17 + uVar20 * 8);
    bVar8 = pbVar18[0x17];
    sVar3 = *(size_t *)(pbVar18 + 8);
    if (-1 < (char)bVar8) {
      sVar3 = (ulong)bVar8;
    }
    if (sVar2 == sVar3) {
      puVar4 = (void *)*puVar1;
      if (-1 < (char)bVar7) {
        puVar4 = puVar1;
      }
      pbVar13 = *(byte **)pbVar18;
      if (-1 < (char)bVar8) {
        pbVar13 = pbVar18;
      }
      if ((char)bVar7 < '\0') {
        if (sVar2 == 0) goto LAB_1000f7168;
        iVar11 = _memcmp(puVar4,pbVar13,sVar2);
        if ((iVar11 == 0) &&
           (iVar11 = *(int *)(pbVar18 + 0x48), *(int *)(puVar1 + 3) <= *(int *)(pbVar18 + 0x48)))
        goto LAB_1000f719c;
      }
      else if (sVar2 == 0) {
LAB_1000f7168:
        iVar11 = *(int *)(pbVar18 + 0x48);
        if (*(int *)(puVar1 + 3) <= iVar11) break;
      }
      else {
        pbVar15 = pbVar19;
        uVar9 = (ulong)bVar7;
        if ((uint)*pbVar13 == ((uint)(void *)*puVar1 & 0xff)) {
          do {
            pbVar13 = pbVar13 + 1;
            if (uVar9 - 1 == 0) goto LAB_1000f7168;
            bVar8 = *pbVar15;
            pbVar15 = pbVar15 + 1;
            uVar9 = uVar9 - 1;
          } while (bVar8 == *pbVar13);
        }
      }
    }
    uVar20 = uVar20 + 1;
    bVar10 = uVar20 < uVar6;
    if (uVar20 == uVar6) {
      return iVar12;
    }
  } while( true );
  if (!bVar10) {
    return iVar11;
  }
LAB_1000f719c:
  iVar12 = iVar11;
  uVar14 = uVar14 + 1;
  pbVar19 = pbVar19 + 0x20;
  if (uVar14 == uVar5) {
    return iVar12;
  }
  goto LAB_1000f7098;
}




long FUN_1000f750c(long param_1,byte *param_2)

{
  long lVar1;
  byte *pbVar2;
  size_t sVar3;
  uint uVar4;
  byte bVar5;
  size_t sVar6;
  long lVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  
  uVar4 = *(uint *)(param_1 + 0x28);
  pbVar2 = *(byte **)param_2;
  sVar6 = *(size_t *)(param_2 + 8);
  if (-1 < (char)param_2[0x17]) {
    pbVar2 = param_2;
    sVar6 = (ulong)param_2[0x17];
  }
  if (uVar4 != 0) {
    uVar11 = 0;
    lVar12 = *(long *)(param_1 + 0x30);
    do {
      lVar10 = *(long *)(lVar12 + uVar11 * 8);
      bVar5 = *(byte *)(lVar10 + 0x37);
      sVar3 = *(size_t *)(lVar10 + 0x28);
      if (-1 < (char)bVar5) {
        sVar3 = (ulong)bVar5;
      }
      if (sVar3 == sVar6) {
        if ((char)bVar5 < '\0') {
          if (sVar6 == 0) {
            return lVar10;
          }
          iVar8 = _memcmp(*(void **)(lVar10 + 0x20),pbVar2,sVar6);
          if (iVar8 == 0) {
            return lVar10;
          }
        }
        else {
          if (sVar6 == 0) {
            return lVar10;
          }
          if ((uint)*pbVar2 == ((uint)*(void **)(lVar10 + 0x20) & 0xff)) {
            lVar9 = 0;
            do {
              if ((ulong)bVar5 - 1 == lVar9) {
                return lVar10;
              }
              lVar1 = lVar10 + lVar9;
              lVar7 = lVar9 + 1;
              lVar9 = lVar9 + 1;
            } while (*(byte *)(lVar1 + 0x21) == pbVar2[lVar7]);
          }
        }
      }
      uVar11 = uVar11 + 1;
    } while (uVar11 != uVar4);
  }
  return 0;
}




void FUN_1000f7604(void)

{
  undefined8 uVar1;
  void *local_38 [2];
  char local_21;
  undefined8 local_20;
  undefined8 uStack_18;
  
  local_20 = 0;
  uStack_18 = 0;
  FUN_10001549c(local_38,"chest");
  FUN_10001617c(&local_20,local_38);
  if (local_21 < '\0') {
    operator_delete(local_38[0]);
  }
  FUN_10001549c(local_38,"key");
  FUN_10001617c(&local_20,local_38);
  if (local_21 < '\0') {
    operator_delete(local_38[0]);
  }
  FUN_10001549c(local_38,"hat");
  FUN_10001617c(&local_20,local_38);
  if (local_21 < '\0') {
    operator_delete(local_38[0]);
  }
  FUN_10001549c(local_38,"craftingmaterial");
  FUN_10001617c(&local_20,local_38);
  if (local_21 < '\0') {
    operator_delete(local_38[0]);
  }
  uVar1 = FUN_10015d3ec();
  FUN_10016426c(uVar1,&local_20);
  FUN_10001629c(&local_20,1);
  return;
}




void FUN_1000f76e8(long param_1,byte *param_2)

{
  size_t sVar1;
  size_t sVar2;
  undefined8 *puVar3;
  uint uVar4;
  byte bVar5;
  byte bVar6;
  int iVar7;
  ulong uVar8;
  byte *pbVar9;
  void *pvVar10;
  byte *pbVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  
  uVar4 = *(uint *)(param_1 + 0x28);
  if (uVar4 != 0) {
    uVar12 = 0;
    lVar13 = *(long *)(param_1 + 0x30);
    do {
      lVar14 = *(long *)(lVar13 + uVar12 * 8);
      if (lVar14 != 0) {
        bVar5 = *(byte *)(lVar14 + 0x37);
        uVar8 = (ulong)bVar5;
        sVar1 = *(size_t *)(lVar14 + 0x28);
        if (-1 < (char)bVar5) {
          sVar1 = uVar8;
        }
        bVar6 = param_2[0x17];
        sVar2 = *(size_t *)(param_2 + 8);
        if (-1 < (char)bVar6) {
          sVar2 = (ulong)bVar6;
        }
        if (sVar1 == sVar2) {
          pvVar10 = *(void **)(lVar14 + 0x20);
          puVar3 = pvVar10;
          if (-1 < (char)bVar5) {
            puVar3 = (undefined8 *)(lVar14 + 0x20);
          }
          pbVar11 = *(byte **)param_2;
          if (-1 < (char)bVar6) {
            pbVar11 = param_2;
          }
          if ((char)bVar5 < '\0') {
            if ((sVar1 == 0) || (iVar7 = _memcmp(puVar3,pbVar11,sVar1), iVar7 == 0))
            goto LAB_1000f77b4;
          }
          else if (sVar1 == 0) {
LAB_1000f77b4:
            *(undefined1 *)(lVar14 + 0xb4) = 1;
          }
          else if ((uint)*pbVar11 == ((uint)pvVar10 & 0xff)) {
            pbVar9 = (byte *)(lVar14 + 0x21);
            do {
              uVar8 = uVar8 - 1;
              pbVar11 = pbVar11 + 1;
              if (uVar8 == 0) goto LAB_1000f77b4;
              bVar5 = *pbVar9;
              pbVar9 = pbVar9 + 1;
            } while (bVar5 == *pbVar11);
          }
        }
      }
      uVar12 = uVar12 + 1;
    } while (uVar12 != uVar4);
  }
  return;
}




bool FUN_1000f77d8(long param_1,byte *param_2)

{
  byte *pbVar1;
  size_t sVar2;
  uint uVar3;
  byte bVar4;
  size_t sVar5;
  int iVar6;
  ulong uVar7;
  byte *pbVar8;
  byte *pbVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  
  uVar3 = *(uint *)(param_1 + 0x28);
  pbVar1 = *(byte **)param_2;
  sVar5 = *(size_t *)(param_2 + 8);
  if (-1 < (char)param_2[0x17]) {
    pbVar1 = param_2;
    sVar5 = (ulong)param_2[0x17];
  }
  if (uVar3 != 0) {
    uVar10 = 0;
    lVar11 = *(long *)(param_1 + 0x30);
    do {
      lVar12 = *(long *)(lVar11 + uVar10 * 8);
      if (lVar12 != 0) {
        bVar4 = *(byte *)(lVar12 + 0x37);
        uVar7 = (ulong)bVar4;
        sVar2 = *(size_t *)(lVar12 + 0x28);
        if (-1 < (char)bVar4) {
          sVar2 = uVar7;
        }
        if (sVar2 == sVar5) {
          if ((char)bVar4 < '\0') {
            if ((sVar5 == 0) ||
               (iVar6 = _memcmp(*(void **)(lVar12 + 0x20),pbVar1,sVar5), iVar6 == 0)) {
LAB_1000f78b8:
              return *(char *)(lVar12 + 0xb4) != '\0';
            }
          }
          else {
            if (sVar5 == 0) goto LAB_1000f78b8;
            if ((uint)*pbVar1 == ((uint)*(void **)(lVar12 + 0x20) & 0xff)) {
              pbVar8 = (byte *)(lVar12 + 0x21);
              pbVar9 = pbVar1;
              do {
                uVar7 = uVar7 - 1;
                pbVar9 = pbVar9 + 1;
                if (uVar7 == 0) goto LAB_1000f78b8;
                bVar4 = *pbVar8;
                pbVar8 = pbVar8 + 1;
              } while (bVar4 == *pbVar9);
            }
          }
        }
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 != uVar3);
  }
  return false;
}




undefined8 * FUN_1000f78dc(long param_1,byte *param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  size_t sVar4;
  uint uVar5;
  byte bVar6;
  size_t sVar7;
  int iVar8;
  ulong uVar9;
  undefined8 *puVar10;
  ulong uVar11;
  long lVar12;
  
  uVar5 = *(uint *)(param_1 + 0x38);
  pbVar3 = *(byte **)param_2;
  sVar7 = *(size_t *)(param_2 + 8);
  if (-1 < (char)param_2[0x17]) {
    pbVar3 = param_2;
    sVar7 = (ulong)param_2[0x17];
  }
  if (uVar5 != 0) {
    uVar11 = 0;
    lVar12 = *(long *)(param_1 + 0x40);
    do {
      puVar10 = *(undefined8 **)(lVar12 + uVar11 * 8);
      bVar6 = *(byte *)((long)puVar10 + 0x17);
      sVar4 = puVar10[1];
      if (-1 < (char)bVar6) {
        sVar4 = (ulong)bVar6;
      }
      if (sVar4 == sVar7) {
        if ((char)bVar6 < '\0') {
          if (sVar7 == 0) {
            return puVar10;
          }
          iVar8 = _memcmp((void *)*puVar10,pbVar3,sVar7);
          if (iVar8 == 0) {
            return puVar10;
          }
        }
        else {
          if (sVar7 == 0) {
            return puVar10;
          }
          if ((uint)*pbVar3 == ((uint)(void *)*puVar10 & 0xff)) {
            uVar9 = 1;
            do {
              if (bVar6 == uVar9) {
                return puVar10;
              }
              pbVar1 = (byte *)((long)puVar10 + uVar9);
              pbVar2 = pbVar3 + uVar9;
              uVar9 = uVar9 + 1;
            } while (*pbVar1 == *pbVar2);
          }
        }
      }
      uVar11 = uVar11 + 1;
    } while (uVar11 != uVar5);
  }
  return (undefined8 *)0x0;
}




void FUN_1000f79bc(uint *param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  
  uVar3 = *param_1;
  if (uVar3 == param_1[1]) {
    uVar1 = 0;
    if (uVar3 != 0xffffffff) {
      uVar1 = uVar3 + (~uVar3 | 0xfffffff0) + 0x11;
    }
    if (uVar3 < 0x20) {
      uVar1 = uVar3 << 1;
    }
    uVar2 = uVar3 + 1;
    if (uVar3 + 1 <= uVar1) {
      uVar2 = uVar1;
    }
    FUN_1000f9a80(param_1,uVar2);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  lVar4 = *(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 0x48;
  FUN_10003330c(lVar4 + -0x48,param_2);
  FUN_10003330c(lVar4 + -0x30,param_2 + 0x18);
  FUN_10003330c(lVar4 + -0x18,param_2 + 0x30);
  return;
}




void FUN_1000f7a58(void)

{
  operator_new(0x68);
  DAT_101d23078 = FUN_1000f5808();
  return;
}




void FUN_1000f7a7c(void)

{
  if (DAT_101d23078 != (long *)0x0) {
    (**(code **)(*DAT_101d23078 + 8))();
  }
  DAT_101d23078 = (long *)0x0;
  return;
}




undefined8 FUN_1000f7ab0(void)

{
  return DAT_101d23078;
}




long FUN_1000f7abc(long param_1)

{
  if (*(char *)(param_1 + 0xaf) < '\0') {
    operator_delete(*(void **)(param_1 + 0x98));
  }
  if (*(char *)(param_1 + 0x97) < '\0') {
    operator_delete(*(void **)(param_1 + 0x80));
  }
  if (*(char *)(param_1 + 0x7f) < '\0') {
    operator_delete(*(void **)(param_1 + 0x68));
  }
  if (*(char *)(param_1 + 0x67) < '\0') {
    operator_delete(*(void **)(param_1 + 0x50));
  }
  if (*(char *)(param_1 + 0x4f) < '\0') {
    operator_delete(*(void **)(param_1 + 0x38));
  }
  if (*(char *)(param_1 + 0x37) < '\0') {
    operator_delete(*(void **)(param_1 + 0x20));
  }
  FUN_1000f98bc(param_1 + 0x10,1);
  FUN_1000f950c(param_1,1);
  return param_1;
}




long FUN_1000f7b54(long param_1)

{
  FUN_1000f7b84();
  if (*(void **)(param_1 + 0x20) != (void *)0x0) {
    operator_delete(*(void **)(param_1 + 0x20));
  }
  return param_1;
}




void FUN_1000f7b84(undefined8 *param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  pvVar1 = (void *)*param_1;
  while( true ) {
    if (pvVar1 == (void *)0x0) {
      return;
    }
    if ((void *)param_1[2] == pvVar1) break;
    pvVar2 = *(void **)((long)pvVar1 + 0x10);
    _free(pvVar1);
    *param_1 = pvVar2;
    pvVar1 = pvVar2;
  }
  *(undefined8 *)((long)pvVar1 + 8) = 0;
  return;
}




undefined8 * FUN_1000f7bd0(undefined8 *param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  undefined8 local_60;
  void *local_58;
  void *pvStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  
  local_60 = param_1[5];
  pvStack_50 = (void *)0x0;
  local_58 = (void *)0x0;
  uStack_40 = 0;
  local_48 = 0;
  local_38 = 0x100;
  local_30 = 0;
  local_28 = 0;
  auVar3 = FUN_1000f7c78(&local_60,param_2,param_1);
  *(undefined1 (*) [16])(param_1 + 0xb) = auVar3;
  if (auVar3._0_4_ == 0) {
    lVar1 = param_1[8];
    param_1[8] = lVar1 + -0x18;
    uVar2 = *(undefined8 *)(lVar1 + -0x18);
    param_1[1] = *(undefined8 *)(lVar1 + -0x10);
    *param_1 = uVar2;
    *(undefined4 *)(param_1 + 2) = *(undefined4 *)(lVar1 + -8);
    *(undefined4 *)(lVar1 + -8) = 0;
  }
  param_1[8] = param_1[7];
  FUN_1000f94c4(param_1 + 5);
  _free(pvStack_50);
  if (local_58 != (void *)0x0) {
    operator_delete(local_58);
  }
  return param_1;
}




undefined1  [16] FUN_1000f7c78(long param_1,undefined8 *param_2)

{
  byte *pbVar1;
  undefined4 uVar2;
  long lVar3;
  
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  for (pbVar1 = (byte *)*param_2;
      *pbVar1 < 0x21 && (1L << ((ulong)*pbVar1 & 0x3f) & 0x100002600U) != 0; pbVar1 = pbVar1 + 1) {
  }
  *param_2 = pbVar1;
  if (*(int *)(param_1 + 0x30) != 0) goto LAB_1000f7d40;
  if (*pbVar1 == 0) {
    uVar2 = 1;
  }
  else {
    FUN_1000f7d68(param_1,param_2);
    if (*(int *)(param_1 + 0x30) != 0) goto LAB_1000f7d40;
    for (pbVar1 = (byte *)*param_2;
        *pbVar1 < 0x21 && (1L << ((ulong)*pbVar1 & 0x3f) & 0x100002600U) != 0; pbVar1 = pbVar1 + 1)
    {
    }
    *param_2 = pbVar1;
    if ((*(int *)(param_1 + 0x30) != 0) || (*pbVar1 == 0)) goto LAB_1000f7d40;
    uVar2 = 2;
  }
  lVar3 = param_2[1];
  *(undefined4 *)(param_1 + 0x30) = uVar2;
  *(long *)(param_1 + 0x38) = (long)pbVar1 - lVar3;
LAB_1000f7d40:
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_1 + 0x10);
  return *(undefined1 (*) [16])(param_1 + 0x30);
}




void FUN_1000f7d68(undefined8 param_1,undefined8 *param_2)

{
  char cVar1;
  
  cVar1 = *(char *)*param_2;
  if (cVar1 < 'n') {
    if (cVar1 == '\"') {
      FUN_1000f7fdc();
      return;
    }
    if (cVar1 == '[') {
      FUN_1000f8300();
      return;
    }
    if (cVar1 == 'f') {
      FUN_1000f7f1c();
      return;
    }
  }
  else {
    if (cVar1 == '{') {
      FUN_1000f8080();
      return;
    }
    if (cVar1 == 't') {
      FUN_1000f7e70();
      return;
    }
    if (cVar1 == 'n') {
      FUN_1000f7dc8();
      return;
    }
  }
  FUN_1000f84bc();
  return;
}




void FUN_1000f7dc8(long param_1,long *param_2,long param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  
  lVar3 = *param_2;
  lVar2 = lVar3 + 2;
  *param_2 = lVar2;
  if (*(char *)(lVar3 + 1) == 'u') {
    lVar2 = lVar3 + 3;
    *param_2 = lVar2;
    if (*(char *)(lVar3 + 2) == 'l') {
      lVar2 = lVar3 + 4;
      *param_2 = lVar2;
      if (*(char *)(lVar3 + 3) == 'l') {
        puVar1 = *(undefined8 **)(param_3 + 0x40);
        if (*(undefined8 **)(param_3 + 0x48) <= puVar1 + 3) {
          FUN_1000f8b34(param_3 + 0x28,1);
          puVar1 = *(undefined8 **)(param_3 + 0x40);
        }
        *(undefined8 **)(param_3 + 0x40) = puVar1 + 3;
        *puVar1 = 0;
        puVar1[1] = 0;
        *(undefined4 *)(puVar1 + 2) = 0;
        return;
      }
    }
  }
  uVar4 = param_2[1];
  *(undefined4 *)(param_1 + 0x30) = 3;
  *(ulong *)(param_1 + 0x38) = ~uVar4 + lVar2;
  return;
}




void FUN_1000f7e70(long param_1,long *param_2,long param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  
  lVar3 = *param_2;
  lVar2 = lVar3 + 2;
  *param_2 = lVar2;
  if (*(char *)(lVar3 + 1) == 'r') {
    lVar2 = lVar3 + 3;
    *param_2 = lVar2;
    if (*(char *)(lVar3 + 2) == 'u') {
      lVar2 = lVar3 + 4;
      *param_2 = lVar2;
      if (*(char *)(lVar3 + 3) == 'e') {
        puVar1 = *(undefined8 **)(param_3 + 0x40);
        if (*(undefined8 **)(param_3 + 0x48) <= puVar1 + 3) {
          FUN_1000f8b34(param_3 + 0x28,1);
          puVar1 = *(undefined8 **)(param_3 + 0x40);
        }
        *(undefined8 **)(param_3 + 0x40) = puVar1 + 3;
        *puVar1 = 0;
        puVar1[1] = 0;
        *(undefined4 *)(puVar1 + 2) = 0x102;
        return;
      }
    }
  }
  uVar4 = param_2[1];
  *(undefined4 *)(param_1 + 0x30) = 3;
  *(ulong *)(param_1 + 0x38) = ~uVar4 + lVar2;
  return;
}




void FUN_1000f7f1c(long param_1,long *param_2,long param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  
  lVar3 = *param_2;
  lVar2 = lVar3 + 2;
  *param_2 = lVar2;
  if (*(char *)(lVar3 + 1) == 'a') {
    lVar2 = lVar3 + 3;
    *param_2 = lVar2;
    if (*(char *)(lVar3 + 2) == 'l') {
      lVar2 = lVar3 + 4;
      *param_2 = lVar2;
      if (*(char *)(lVar3 + 3) == 's') {
        lVar2 = lVar3 + 5;
        *param_2 = lVar2;
        if (*(char *)(lVar3 + 4) == 'e') {
          puVar1 = *(undefined8 **)(param_3 + 0x40);
          if (*(undefined8 **)(param_3 + 0x48) <= puVar1 + 3) {
            FUN_1000f8b34(param_3 + 0x28,1);
            puVar1 = *(undefined8 **)(param_3 + 0x40);
          }
          *(undefined8 **)(param_3 + 0x40) = puVar1 + 3;
          *puVar1 = 0;
          puVar1[1] = 0;
          *(undefined4 *)(puVar1 + 2) = 0x101;
          return;
        }
      }
    }
  }
  uVar4 = param_2[1];
  *(undefined4 *)(param_1 + 0x30) = 3;
  *(ulong *)(param_1 + 0x38) = ~uVar4 + lVar2;
  return;
}




void FUN_1000f7fdc(long param_1,long *param_2,undefined8 param_3)

{
  ulong uVar1;
  long lVar2;
  long local_60;
  uint local_58;
  long local_50;
  long lStack_48;
  long *local_40;
  
  lStack_48 = param_2[1];
  local_50 = *param_2;
  local_58 = 0;
  local_60 = param_1;
  local_40 = param_2;
  FUN_1000f8c04(param_1,&local_50,&local_60);
  if (*(int *)(param_1 + 0x30) == 0) {
    lVar2 = *(long *)(local_60 + 0x18) - (ulong)local_58;
    *(long *)(local_60 + 0x18) = lVar2;
    uVar1 = FUN_1000f8dcc(param_3,lVar2,local_58 - 1,1);
    if ((uVar1 & 1) == 0) {
      *(undefined4 *)(param_1 + 0x30) = 0x10;
      *(long *)(param_1 + 0x38) = local_50 - lStack_48;
    }
  }
  local_40[1] = lStack_48;
  *local_40 = local_50;
  return;
}




void FUN_1000f8080(long param_1,long *param_2,long param_3)

{
  ulong uVar1;
  undefined8 *puVar2;
  byte *pbVar3;
  long lVar4;
  byte *pbVar5;
  undefined4 uVar6;
  byte *pbVar7;
  int iVar8;
  
  *param_2 = *param_2 + 1;
  puVar2 = *(undefined8 **)(param_3 + 0x40);
  if (*(undefined8 **)(param_3 + 0x48) <= puVar2 + 3) {
    FUN_1000f8b34(param_3 + 0x28,1);
    puVar2 = *(undefined8 **)(param_3 + 0x40);
  }
  *(undefined8 **)(param_3 + 0x40) = puVar2 + 3;
  *puVar2 = 0;
  puVar2[1] = 0;
  *(undefined4 *)(puVar2 + 2) = 3;
  for (pbVar3 = (byte *)*param_2;
      *pbVar3 < 0x21 && (1L << ((ulong)*pbVar3 & 0x3f) & 0x100002600U) != 0; pbVar3 = pbVar3 + 1) {
  }
  *param_2 = (long)pbVar3;
  if (*(int *)(param_1 + 0x30) == 0) {
    if (*pbVar3 == 0x22) {
      iVar8 = 0;
      while (FUN_1000f7fdc(param_1,param_2,param_3,1), *(int *)(param_1 + 0x30) == 0) {
        pbVar3 = (byte *)*param_2;
        pbVar5 = pbVar3;
        for (; pbVar5 = pbVar5 + 1,
            *pbVar3 < 0x21 && (1L << ((ulong)*pbVar3 & 0x3f) & 0x100002600U) != 0;
            pbVar3 = pbVar3 + 1) {
        }
        *param_2 = (long)pbVar3;
        if (*(int *)(param_1 + 0x30) != 0) {
          return;
        }
        pbVar7 = pbVar3 + 1;
        *param_2 = (long)pbVar7;
        if (*pbVar3 != 0x3a) {
          lVar4 = (long)pbVar5 - param_2[1];
          uVar6 = 5;
          goto LAB_1000f829c;
        }
        for (; *pbVar7 < 0x21 && (1L << ((ulong)*pbVar7 & 0x3f) & 0x100002600U) != 0;
            pbVar7 = pbVar7 + 1) {
        }
        *param_2 = (long)pbVar7;
        if (*(int *)(param_1 + 0x30) != 0) {
          return;
        }
        FUN_1000f7d68(param_1,param_2,param_3);
        if (*(int *)(param_1 + 0x30) != 0) {
          return;
        }
        pbVar5 = (byte *)*param_2;
        pbVar7 = pbVar5;
        for (; pbVar7 = pbVar7 + 1,
            *pbVar5 < 0x21 && (1L << ((ulong)*pbVar5 & 0x3f) & 0x100002600U) != 0;
            pbVar5 = pbVar5 + 1) {
        }
        *param_2 = (long)pbVar5;
        if (*(int *)(param_1 + 0x30) != 0) {
          return;
        }
        iVar8 = iVar8 + 1;
        pbVar3 = pbVar5 + 1;
        *param_2 = (long)pbVar3;
        if (*pbVar5 != 0x2c) {
          if (*pbVar5 == 0x7d) {
            uVar1 = FUN_1000f91e8(param_3,iVar8);
            if ((uVar1 & 1) != 0) {
              return;
            }
            lVar4 = *param_2 - param_2[1];
            uVar6 = 0x10;
          }
          else {
            lVar4 = (long)pbVar7 - param_2[1];
            uVar6 = 6;
          }
          goto LAB_1000f829c;
        }
        for (; *pbVar3 < 0x21 && (1L << ((ulong)*pbVar3 & 0x3f) & 0x100002600U) != 0;
            pbVar3 = pbVar3 + 1) {
        }
        *param_2 = (long)pbVar3;
        if (*(int *)(param_1 + 0x30) != 0) {
          return;
        }
        if (*pbVar3 != 0x22) goto LAB_1000f8290;
      }
    }
    else if (*pbVar3 == 0x7d) {
      *param_2 = (long)(pbVar3 + 1);
      lVar4 = *(long *)(param_3 + 0x40);
      *(undefined4 *)(lVar4 + -8) = 3;
      *(undefined8 *)(lVar4 + -0x18) = 0;
      *(undefined8 *)(lVar4 + -0x10) = 0;
    }
    else {
LAB_1000f8290:
      lVar4 = (long)pbVar3 - param_2[1];
      uVar6 = 4;
LAB_1000f829c:
      *(undefined4 *)(param_1 + 0x30) = uVar6;
      *(long *)(param_1 + 0x38) = lVar4;
    }
  }
  return;
}




void FUN_1000f8300(long param_1,long *param_2,long param_3)

{
  ulong uVar1;
  undefined8 *puVar2;
  byte *pbVar3;
  long lVar4;
  byte *pbVar5;
  undefined4 uVar6;
  byte *pbVar7;
  int iVar8;
  
  *param_2 = *param_2 + 1;
  puVar2 = *(undefined8 **)(param_3 + 0x40);
  if (*(undefined8 **)(param_3 + 0x48) <= puVar2 + 3) {
    FUN_1000f8b34(param_3 + 0x28,1);
    puVar2 = *(undefined8 **)(param_3 + 0x40);
  }
  *(undefined8 **)(param_3 + 0x40) = puVar2 + 3;
  *puVar2 = 0;
  puVar2[1] = 0;
  *(undefined4 *)(puVar2 + 2) = 4;
  for (pbVar3 = (byte *)*param_2;
      *pbVar3 < 0x21 && (1L << ((ulong)*pbVar3 & 0x3f) & 0x100002600U) != 0; pbVar3 = pbVar3 + 1) {
  }
  *param_2 = (long)pbVar3;
  if (*(int *)(param_1 + 0x30) == 0) {
    if (*pbVar3 == 0x5d) {
      *param_2 = (long)(pbVar3 + 1);
      lVar4 = *(long *)(param_3 + 0x40);
      *(undefined4 *)(lVar4 + -8) = 4;
      *(undefined8 *)(lVar4 + -0x18) = 0;
      *(undefined8 *)(lVar4 + -0x10) = 0;
    }
    else {
      iVar8 = 0;
      do {
        FUN_1000f7d68(param_1,param_2,param_3);
        if (*(int *)(param_1 + 0x30) != 0) {
          return;
        }
        pbVar3 = (byte *)*param_2;
        pbVar5 = pbVar3;
        for (; pbVar5 = pbVar5 + 1,
            *pbVar3 < 0x21 && (1L << ((ulong)*pbVar3 & 0x3f) & 0x100002600U) != 0;
            pbVar3 = pbVar3 + 1) {
        }
        *param_2 = (long)pbVar3;
        if (*(int *)(param_1 + 0x30) != 0) {
          return;
        }
        iVar8 = iVar8 + 1;
        pbVar7 = pbVar3 + 1;
        *param_2 = (long)pbVar7;
        if (*pbVar3 != 0x2c) {
          if (*pbVar3 == 0x5d) {
            uVar1 = FUN_1000f9260(param_3,iVar8);
            if ((uVar1 & 1) != 0) {
              return;
            }
            lVar4 = *param_2 - param_2[1];
            uVar6 = 0x10;
          }
          else {
            lVar4 = (long)pbVar5 - param_2[1];
            uVar6 = 7;
          }
          *(undefined4 *)(param_1 + 0x30) = uVar6;
          *(long *)(param_1 + 0x38) = lVar4;
          return;
        }
        for (; *pbVar7 < 0x21 && (1L << ((ulong)*pbVar7 & 0x3f) & 0x100002600U) != 0;
            pbVar7 = pbVar7 + 1) {
        }
        *param_2 = (long)pbVar7;
      } while (*(int *)(param_1 + 0x30) == 0);
    }
  }
  return;
}




void FUN_1000f84bc(long param_1,long *param_2,long param_3)

{
  long lVar1;
  byte bVar2;
  byte bVar3;
  bool bVar4;
  bool bVar5;
  ulong uVar6;
  ulong uVar7;
  double *pdVar8;
  undefined4 uVar9;
  uint uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  int iVar14;
  uint uVar15;
  long lVar16;
  byte *pbVar17;
  byte *pbVar18;
  double dVar19;
  double dVar20;
  
  pbVar17 = (byte *)*param_2;
  lVar1 = param_2[1];
  bVar3 = *pbVar17;
  bVar2 = bVar3;
  if (bVar3 == 0x2d) {
    pbVar17 = pbVar17 + 1;
    bVar2 = *pbVar17;
  }
  uVar10 = bVar2 - 0x30;
  uVar6 = (ulong)uVar10;
  if (uVar10 == 0) {
    uVar7 = 0;
    bVar4 = false;
    uVar12 = 0;
    bVar5 = false;
    dVar19 = 0.0;
    pbVar18 = pbVar17 + 1;
    uVar10 = (uint)*pbVar18;
    goto LAB_1000f8520;
  }
  if (bVar2 - 0x31 < 9) {
    pbVar18 = pbVar17 + 1;
    uVar10 = (uint)*pbVar18;
    uVar15 = uVar10 - 0x30 & 0xff;
    dVar19 = 0.0;
    if (bVar3 == 0x2d) {
      if (uVar15 < 10) {
        uVar12 = 0;
LAB_1000f8588:
        uVar13 = uVar12;
        uVar15 = (uint)uVar6;
        if (uVar15 < 0xccccccc) {
LAB_1000f85a8:
          uVar6 = (ulong)((uVar15 * 10 + uVar10) - 0x30);
          uVar10 = (uint)pbVar17[uVar13 + 2];
          uVar12 = uVar13 + 1;
          if (9 < uVar10 - 0x30) goto code_r0x0001000f85cc;
          goto LAB_1000f8588;
        }
        uVar12 = uVar13;
        if (uVar15 != 0xccccccc) goto LAB_1000f8a04;
        if ((char)uVar10 < '9') goto LAB_1000f85a8;
        uVar10 = 0x39;
        uVar6 = 0xccccccc;
LAB_1000f8a04:
        pbVar18 = pbVar17 + uVar12 + 1;
        uVar7 = uVar6;
        if (bVar3 == 0x2d) {
          do {
            if ((0xccccccccccccccb < uVar7) &&
               ((uVar7 != 0xccccccccccccccc || ('8' < (char)uVar10)))) goto LAB_1000f8ad0;
            uVar15 = uVar10 - 0x30;
            pbVar18 = pbVar18 + 1;
            uVar10 = (uint)*pbVar18;
            uVar7 = (ulong)uVar15 + uVar7 * 10;
            uVar12 = (ulong)((int)uVar12 + 1);
          } while (uVar10 - 0x30 < 10);
        }
        else {
          do {
            if ((0x1999999999999998 < uVar7) &&
               ((uVar7 != 0x1999999999999999 || ('5' < (char)uVar10)))) goto LAB_1000f8ad0;
            uVar15 = uVar10 - 0x30;
            pbVar18 = pbVar18 + 1;
            uVar10 = (uint)*pbVar18;
            uVar7 = (ulong)uVar15 + uVar7 * 10;
            uVar12 = (ulong)((int)uVar12 + 1);
          } while (uVar10 - 0x30 < 10);
        }
        dVar19 = 0.0;
        bVar5 = true;
        bVar4 = false;
      }
      else {
LAB_1000f86ec:
        uVar7 = 0;
        bVar4 = false;
        uVar12 = 0;
        bVar5 = false;
      }
    }
    else {
      if (9 < uVar15) goto LAB_1000f86ec;
      uVar12 = 0;
      do {
        uVar13 = uVar12;
        uVar15 = (uint)uVar6;
        if (0x19999998 < uVar15) {
          uVar12 = uVar13;
          if (uVar15 != 0x19999999) goto LAB_1000f8a04;
          if ('5' < (char)uVar10) {
            uVar6 = 0x19999999;
            goto LAB_1000f8a04;
          }
        }
        uVar6 = (ulong)((uVar15 * 10 + uVar10) - 0x30);
        uVar10 = (uint)pbVar17[uVar13 + 2];
        uVar12 = uVar13 + 1;
      } while (uVar10 - 0x30 < 10);
      uVar7 = 0;
      bVar4 = false;
      bVar5 = false;
      pbVar18 = pbVar17 + uVar13 + 2;
    }
    goto LAB_1000f8520;
  }
  lVar11 = (long)pbVar17 - lVar1;
  uVar9 = 3;
  pbVar18 = pbVar17;
  goto LAB_1000f8648;
code_r0x0001000f85cc:
  uVar7 = 0;
  bVar4 = false;
  bVar5 = false;
  pbVar18 = pbVar17 + uVar13 + 2;
  dVar19 = 0.0;
  goto LAB_1000f8520;
LAB_1000f8770:
  do {
    pbVar18 = pbVar18 + 1;
  } while (*pbVar18 - 0x30 < 10);
  goto LAB_1000f88e4;
LAB_1000f8ad0:
  dVar19 = (double)uVar7;
  lVar11 = (long)pbVar18 - lVar1;
  bVar4 = true;
  uVar15 = uVar10;
  do {
    if (1.7976931348623158e+307 <= dVar19) {
      *(undefined4 *)(param_1 + 0x30) = 0xd;
      *(long *)(param_1 + 0x38) = lVar11;
      goto LAB_1000f8998;
    }
    pbVar18 = pbVar18 + 1;
    uVar10 = (uint)*pbVar18;
    dVar19 = (double)(int)(uVar15 - 0x30) + dVar19 * 10.0;
    lVar11 = lVar11 + 1;
    uVar15 = uVar10;
  } while (uVar10 - 0x30 < 10);
  bVar5 = true;
LAB_1000f8520:
  if (uVar10 != 0x2e) {
    iVar14 = 0;
LAB_1000f85ec:
    if ((uVar10 & 0xff | 0x20) != 0x65) {
      if (bVar4) {
LAB_1000f88b8:
        uVar15 = 0;
        goto LAB_1000f88ec;
      }
      if (bVar5) {
        if (bVar3 != 0x2d) {
          uVar6 = FUN_1000f9370(param_3,uVar7);
        }
        else {
          uVar6 = FUN_1000f92d8(param_3,-uVar7);
        }
      }
      else if (bVar3 != 0x2d) {
        uVar6 = FUN_1000f945c(param_3);
      }
      else {
        uVar6 = FUN_1000f93f4(param_3,-(int)uVar6);
      }
      if ((uVar6 & 1) != 0) goto LAB_1000f8998;
      lVar11 = (long)pbVar18 - lVar1;
      uVar9 = 0x10;
      goto LAB_1000f8648;
    }
    if (!bVar5) {
      uVar7 = uVar6;
    }
    if (!bVar4) {
      dVar19 = (double)uVar7;
    }
    pbVar17 = pbVar18 + 1;
    bVar2 = *pbVar17;
    if (bVar2 == 0x2b) {
      bVar4 = false;
LAB_1000f8704:
      pbVar17 = pbVar18 + 2;
      uVar10 = *pbVar17 - 0x30;
      if (uVar10 < 10) {
        pbVar18 = pbVar18 + 3;
        if (!bVar4) goto LAB_1000f8794;
        uVar15 = (uint)*pbVar18;
        pbVar17 = pbVar18;
        if (*pbVar18 - 0x30 < 10) {
          do {
            uVar10 = (uVar10 * 10 + uVar15) - 0x30;
            bVar4 = true;
            pbVar18 = pbVar17;
            if (0xccccccb < (int)uVar10) goto LAB_1000f8770;
            pbVar18 = pbVar17 + 1;
            uVar15 = (uint)pbVar17[1];
            pbVar17 = pbVar18;
          } while (uVar15 - 0x30 < 10);
        }
        else {
          bVar4 = true;
        }
LAB_1000f88e4:
        uVar15 = -uVar10;
        if (!bVar4) {
          uVar15 = uVar10;
        }
        goto LAB_1000f88ec;
      }
    }
    else {
      if (bVar2 == 0x2d) {
        bVar4 = true;
        goto LAB_1000f8704;
      }
      uVar10 = bVar2 - 0x30;
      if (uVar10 < 10) {
        pbVar18 = pbVar18 + 2;
LAB_1000f8794:
        lVar11 = (long)pbVar18 - lVar1;
        do {
          bVar2 = *pbVar18;
          if (9 < bVar2 - 0x30) {
            bVar4 = false;
            goto LAB_1000f88e4;
          }
          pbVar18 = pbVar18 + 1;
          uVar10 = ((uint)bVar2 + uVar10 * 10) - 0x30;
          lVar11 = lVar11 + 1;
        } while ((int)uVar10 <= 0x134 - iVar14);
        *(undefined4 *)(param_1 + 0x30) = 0xd;
        *(long *)(param_1 + 0x38) = lVar11;
        goto LAB_1000f8998;
      }
    }
    *(undefined4 *)(param_1 + 0x30) = 0xf;
    *(long *)(param_1 + 0x38) = (long)pbVar17 - lVar1;
    pbVar18 = pbVar17;
    goto LAB_1000f8998;
  }
  pbVar17 = pbVar18 + 1;
  uVar10 = (uint)*pbVar17;
  if (9 < uVar10 - 0x30) {
    lVar11 = (long)pbVar17 - lVar1;
    uVar9 = 0xe;
    pbVar18 = pbVar17;
LAB_1000f8648:
    *(undefined4 *)(param_1 + 0x30) = uVar9;
    *(long *)(param_1 + 0x38) = lVar11;
    goto LAB_1000f8998;
  }
  if (bVar4) {
    iVar14 = 0;
LAB_1000f8878:
    do {
      if ('9' < (char)uVar10) {
        bVar4 = true;
        pbVar18 = pbVar17;
        goto LAB_1000f85ec;
      }
      if ((int)uVar12 < 0x11) {
        dVar19 = (double)(int)((uVar10 & 0xff) - 0x30) + dVar19 * 10.0;
        iVar14 = iVar14 + -1;
        if (0.0 < dVar19) {
          uVar12 = (ulong)((int)uVar12 + 1);
        }
      }
      pbVar18 = pbVar17 + 1;
      uVar10 = (uint)(char)*pbVar18;
      pbVar17 = pbVar18;
    } while (0x2f < (int)uVar10);
    goto LAB_1000f88b8;
  }
  lVar11 = 0;
  if (!bVar5) {
    uVar7 = uVar6;
  }
  do {
    lVar16 = lVar11;
    if ('9' < (char)uVar10 || uVar7 >> 0x35 != 0) {
      dVar19 = (double)uVar7;
      iVar14 = -(int)lVar16;
      pbVar17 = pbVar18 + lVar16 + 1;
      goto LAB_1000f8878;
    }
    uVar7 = (ulong)((uVar10 & 0xff) - 0x30) + uVar7 * 10;
    uVar10 = (uint)uVar12;
    if (uVar7 != 0) {
      uVar10 = uVar10 + 1;
    }
    uVar12 = (ulong)uVar10;
    uVar10 = (uint)(char)pbVar18[lVar16 + 2];
    lVar11 = lVar16 + 1;
  } while (0x2f < (int)uVar10);
  dVar19 = (double)uVar7;
  iVar14 = -(int)(lVar16 + 1);
  pbVar18 = pbVar18 + lVar16 + 2;
  uVar15 = 0;
LAB_1000f88ec:
  uVar15 = iVar14 + uVar15;
  if ((int)uVar15 < -0x134) {
    dVar20 = 0.0;
    if (-0x269 < (int)uVar15) {
      dVar20 = *(double *)(&DAT_10114c438 + (ulong)(-uVar15 - 0x134) * 8) * 1e+308;
LAB_1000f8950:
      dVar20 = dVar19 / dVar20;
    }
  }
  else {
    if ((int)uVar15 < 0) {
      dVar20 = *(double *)(&DAT_10114c438 + (ulong)-uVar15 * 8);
      goto LAB_1000f8950;
    }
    dVar20 = *(double *)(&DAT_10114c438 + (ulong)uVar15 * 8) * dVar19;
  }
  dVar19 = -dVar20;
  if (bVar3 != 0x2d) {
    dVar19 = dVar20;
  }
  pdVar8 = *(double **)(param_3 + 0x40);
  if (*(double **)(param_3 + 0x48) <= pdVar8 + 3) {
    FUN_1000f8b34(param_3 + 0x28,1);
    pdVar8 = *(double **)(param_3 + 0x40);
  }
  *(double **)(param_3 + 0x40) = pdVar8 + 3;
  pdVar8[1] = 0.0;
  *(undefined4 *)(pdVar8 + 2) = 0x4206;
  *pdVar8 = dVar19;
LAB_1000f8998:
  *param_2 = (long)pbVar18;
  param_2[1] = lVar1;
  return;
}




void FUN_1000f8b34(long *param_1,long param_2)

{
  void *pvVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  
  lVar2 = param_1[2];
  if (lVar2 == 0) {
    if (*param_1 == 0) {
      pvVar1 = operator_new(1);
      *param_1 = (long)pvVar1;
      param_1[1] = (long)pvVar1;
    }
    lVar2 = 0;
    uVar4 = param_1[5];
  }
  else {
    uVar4 = (param_1[4] - lVar2) + ((param_1[4] - lVar2) + 1U >> 1);
  }
  uVar3 = (param_1[3] - lVar2) + param_2 * 0x18;
  if (uVar3 <= uVar4) {
    uVar3 = uVar4;
  }
  FUN_1000f8ba8(param_1,uVar3);
  return;
}




void FUN_1000f8ba8(long param_1,size_t param_2)

{
  void *pvVar1;
  long lVar2;
  void *pvVar3;
  
  pvVar1 = *(void **)(param_1 + 0x10);
  lVar2 = *(long *)(param_1 + 0x18);
  if (param_2 == 0) {
    _free(pvVar1);
    pvVar3 = (void *)0x0;
  }
  else {
    pvVar3 = _realloc(pvVar1,param_2);
  }
  *(void **)(param_1 + 0x10) = pvVar3;
  *(long *)(param_1 + 0x18) = (long)pvVar3 + (lVar2 - (long)pvVar1);
  *(size_t *)(param_1 + 0x20) = (long)pvVar3 + param_2;
  return;
}




void FUN_1000f8c04(long param_1,long *param_2,undefined8 param_3)

{
  byte bVar1;
  ulong uVar2;
  ulong uVar3;
  byte *pbVar4;
  char *pcVar5;
  undefined4 uVar6;
  char *pcVar7;
  
  pbVar4 = (byte *)(*param_2 + 1);
  *param_2 = (long)pbVar4;
  do {
    bVar1 = *pbVar4;
    if (bVar1 == 0x5c) {
      *param_2 = (long)(pbVar4 + 2);
      if ((&DAT_10114c338)[pbVar4[1]] != '\0') {
        uVar3 = (ulong)(uint)(int)(char)(&DAT_10114c338)[pbVar4[1]];
        goto LAB_1000f8c8c;
      }
      if (pbVar4[1] != 0x75) {
        uVar3 = ~param_2[1] + 2;
        goto LAB_1000f8d90;
      }
      uVar3 = FUN_1000f8edc(param_1,param_2);
      if (*(int *)(param_1 + 0x30) != 0) {
        return;
      }
      if (((uint)(uVar3 >> 10) & 0x3fffff) == 0x36) {
        pcVar7 = (char *)*param_2;
        pcVar5 = pcVar7 + 1;
        *param_2 = (long)pcVar5;
        if (*pcVar7 == '\\') {
          pcVar5 = pcVar7 + 2;
          *param_2 = (long)pcVar5;
          if (pcVar7[1] == 'u') {
            uVar2 = FUN_1000f8edc(param_1,param_2);
            if (*(int *)(param_1 + 0x30) != 0) {
              return;
            }
            if (((uint)(uVar2 >> 10) & 0x3fffff) == 0x37) {
              uVar3 = (ulong)(((int)uVar2 - 0xdc00U | (int)uVar3 * 0x400 + 0xfca00000U) + 0x10000);
              goto LAB_1000f8d24;
            }
            pcVar5 = (char *)*param_2;
          }
        }
        pbVar4 = (byte *)(pcVar5 + (-2 - param_2[1]));
        uVar6 = 9;
        goto LAB_1000f8dac;
      }
LAB_1000f8d24:
      FUN_1000f8f78(param_3,uVar3);
    }
    else {
      if (bVar1 == 0) {
        pbVar4 = pbVar4 + ~param_2[1];
        uVar6 = 0xb;
        goto LAB_1000f8dac;
      }
      if (bVar1 == 0x22) {
        *param_2 = (long)(pbVar4 + 1);
        FUN_1000f8e78(param_3,0);
        return;
      }
      if (bVar1 < 0x20) {
        uVar3 = ~param_2[1];
LAB_1000f8d90:
        pbVar4 = pbVar4 + uVar3;
        uVar6 = 10;
LAB_1000f8dac:
        *(undefined4 *)(param_1 + 0x30) = uVar6;
        *(byte **)(param_1 + 0x38) = pbVar4;
        return;
      }
      *param_2 = (long)(pbVar4 + 1);
      uVar3 = (ulong)(char)*pbVar4;
LAB_1000f8c8c:
      FUN_1000f8e78(param_3,uVar3);
    }
    pbVar4 = (byte *)*param_2;
  } while( true );
}




undefined8 FUN_1000f8dcc(long param_1,undefined8 param_2,undefined4 param_3,int param_4)

{
  bool bVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  puVar2 = *(undefined8 **)(param_1 + 0x40);
  bVar1 = *(undefined8 **)(param_1 + 0x48) <= puVar2 + 3;
  if (param_4 == 0) {
    if (bVar1) {
      FUN_1000f8b34(param_1 + 0x28,1);
      puVar2 = *(undefined8 **)(param_1 + 0x40);
    }
    *(undefined8 **)(param_1 + 0x40) = puVar2 + 3;
    *(undefined4 *)(puVar2 + 2) = 0x100005;
    *puVar2 = param_2;
    puVar2[1] = 0;
    *(undefined4 *)(puVar2 + 1) = param_3;
  }
  else {
    if (bVar1) {
      FUN_1000f8b34(param_1 + 0x28,1);
      puVar2 = *(undefined8 **)(param_1 + 0x40);
    }
    *(undefined8 **)(param_1 + 0x40) = puVar2 + 3;
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    *puVar2 = 0;
    puVar2[1] = 0;
    *(undefined4 *)(puVar2 + 2) = 0;
    FUN_1000f90a4(puVar2,param_2,param_3,uVar3);
  }
  return 1;
}




void FUN_1000f8e78(long *param_1,undefined1 param_2)

{
  undefined1 *puVar1;
  long lVar2;
  
  lVar2 = *param_1;
  puVar1 = *(undefined1 **)(lVar2 + 0x18);
  if (*(undefined1 **)(lVar2 + 0x20) <= puVar1 + 1) {
    FUN_1000f9034(lVar2,1);
    puVar1 = *(undefined1 **)(lVar2 + 0x18);
  }
  *(undefined1 **)(lVar2 + 0x18) = puVar1 + 1;
  *puVar1 = param_2;
  *(int *)(param_1 + 1) = (int)param_1[1] + 1;
  return;
}




int FUN_1000f8edc(long param_1,long *param_2)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  int iVar7;
  
  lVar4 = 0;
  iVar3 = 0;
  lVar5 = *param_2;
  do {
    pbVar1 = (byte *)(lVar5 + lVar4);
    *param_2 = (long)(pbVar1 + 1);
    bVar2 = *pbVar1;
    if ((int)(char)bVar2 - 0x30U < 10) {
      iVar7 = -0x30;
    }
    else if (bVar2 - 0x41 < 6) {
      iVar7 = -0x37;
    }
    else {
      if (5 < bVar2 - 0x61) {
        uVar6 = param_2[1];
        *(undefined4 *)(param_1 + 0x30) = 8;
        *(ulong *)(param_1 + 0x38) = ~uVar6 + lVar5 + lVar4 + 1;
        return 0;
      }
      iVar7 = -0x57;
    }
    iVar3 = (int)(char)bVar2 + iVar3 * 0x10 + iVar7;
    lVar4 = lVar4 + 1;
  } while ((int)lVar4 != 4);
  return iVar3;
}




void FUN_1000f8f78(undefined8 param_1,uint param_2)

{
  if (0x7f < param_2) {
    if (param_2 < 0x800) {
      FUN_1000f8e78(param_1,param_2 >> 6 | 0xffffffc0);
      param_2 = param_2 & 0x3f | 0xffffff80;
    }
    else {
      if (param_2 >> 0x10 == 0) {
        FUN_1000f8e78(param_1,param_2 >> 0xc | 0xffffffe0);
      }
      else {
        FUN_1000f8e78(param_1,param_2 >> 0x12 | 0xfffffff0);
        FUN_1000f8e78(param_1,param_2 >> 0xc & 0x3f | 0xffffff80);
      }
      FUN_1000f8e78(param_1,param_2 >> 6 & 0x3f | 0xffffff80);
      param_2 = param_2 & 0x3f | 0xffffff80;
    }
  }
  FUN_1000f8e78(param_1,(int)(char)param_2);
  return;
}




void FUN_1000f9034(long *param_1,long param_2)

{
  ulong uVar1;
  void *pvVar2;
  long lVar3;
  ulong uVar4;
  
  lVar3 = param_1[2];
  if (lVar3 == 0) {
    if (*param_1 == 0) {
      pvVar2 = operator_new(1);
      *param_1 = (long)pvVar2;
      param_1[1] = (long)pvVar2;
    }
    lVar3 = 0;
    uVar4 = param_1[5];
  }
  else {
    uVar4 = (param_1[4] - lVar3) + ((param_1[4] - lVar3) + 1U >> 1);
  }
  uVar1 = (param_1[3] - lVar3) + param_2;
  if (uVar1 <= uVar4) {
    uVar1 = uVar4;
  }
  FUN_1000f8ba8(param_1,uVar1);
  return;
}




void FUN_1000f90a4(undefined8 *param_1,void *param_2,uint param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  
  if (param_3 < 0x10) {
    *(undefined4 *)(param_1 + 2) = 0x700005;
    *(char *)((long)param_1 + 0xf) = '\x0f' - (char)param_3;
    puVar1 = param_1;
  }
  else {
    *(undefined4 *)(param_1 + 2) = 0x300005;
    *(uint *)(param_1 + 1) = param_3;
    puVar1 = (undefined8 *)FUN_1000f9128(param_4,param_3 + 1);
    *param_1 = puVar1;
  }
  _memcpy(puVar1,param_2,(ulong)param_3);
  *(undefined1 *)((long)puVar1 + (ulong)param_3) = 0;
  return;
}




long FUN_1000f9128(undefined8 *param_1,long param_2)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_2 == 0) {
    return 0;
  }
  uVar4 = param_2 + 7U & 0xfffffffffffffff8;
  puVar1 = (ulong *)*param_1;
  if (puVar1 != (ulong *)0x0) {
    uVar2 = puVar1[1];
    uVar3 = uVar2 + uVar4;
    if (uVar3 <= *puVar1) goto LAB_1000f917c;
  }
  uVar3 = param_1[1];
  if ((ulong)param_1[1] <= uVar4) {
    uVar3 = uVar4;
  }
  FUN_1000f919c(param_1,uVar3);
  puVar1 = (ulong *)*param_1;
  uVar2 = puVar1[1];
  uVar3 = uVar2 + uVar4;
LAB_1000f917c:
  puVar1[1] = uVar3;
  return (long)puVar1 + uVar2 + 0x18;
}




void FUN_1000f919c(long *param_1,long param_2)

{
  void *pvVar1;
  long *plVar2;
  
  if (param_1[3] == 0) {
    pvVar1 = operator_new(1);
    param_1[3] = (long)pvVar1;
    param_1[4] = (long)pvVar1;
  }
  plVar2 = _malloc(param_2 + 0x18);
  *plVar2 = param_2;
  plVar2[1] = 0;
  plVar2[2] = *param_1;
  *param_1 = (long)plVar2;
  return;
}




undefined8 FUN_1000f91e8(long param_1,uint param_2)

{
  undefined8 uVar1;
  void *pvVar2;
  void *pvVar3;
  size_t sVar4;
  
  pvVar3 = (void *)(*(long *)(param_1 + 0x40) + (ulong)param_2 * -0x30);
  *(void **)(param_1 + 0x40) = pvVar3;
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined4 *)((long)pvVar3 + -8) = 3;
  if (param_2 == 0) {
    *(undefined8 *)((long)pvVar3 + -0x18) = 0;
  }
  else {
    sVar4 = (ulong)param_2 * 0x30;
    pvVar2 = (void *)FUN_1000f9128(uVar1,sVar4);
    *(void **)((long)pvVar3 + -0x18) = pvVar2;
    _memcpy(pvVar2,pvVar3,sVar4);
  }
  *(uint *)((long)pvVar3 + -0x10) = param_2;
  *(uint *)((long)pvVar3 + -0xc) = param_2;
  return 1;
}




undefined8 FUN_1000f9260(long param_1,uint param_2)

{
  undefined8 uVar1;
  void *pvVar2;
  void *pvVar3;
  size_t sVar4;
  
  pvVar3 = (void *)(*(long *)(param_1 + 0x40) + (ulong)param_2 * -0x18);
  *(void **)(param_1 + 0x40) = pvVar3;
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined4 *)((long)pvVar3 + -8) = 4;
  if (param_2 == 0) {
    *(undefined8 *)((long)pvVar3 + -0x18) = 0;
  }
  else {
    sVar4 = (ulong)param_2 * 0x18;
    pvVar2 = (void *)FUN_1000f9128(uVar1,sVar4);
    *(void **)((long)pvVar3 + -0x18) = pvVar2;
    _memcpy(pvVar2,pvVar3,sVar4);
  }
  *(uint *)((long)pvVar3 + -0x10) = param_2;
  *(uint *)((long)pvVar3 + -0xc) = param_2;
  return 1;
}




undefined8 FUN_1000f92d8(long param_1,ulong param_2)

{
  ulong *puVar1;
  uint uVar2;
  
  puVar1 = *(ulong **)(param_1 + 0x40);
  if (*(ulong **)(param_1 + 0x48) <= puVar1 + 3) {
    FUN_1000f8b34(param_1 + 0x28,1);
    puVar1 = *(ulong **)(param_1 + 0x40);
  }
  *(ulong **)(param_1 + 0x40) = puVar1 + 3;
  *(undefined4 *)(puVar1 + 2) = 0x1206;
  *puVar1 = param_2;
  puVar1[1] = 0;
  if ((long)param_2 < 0) {
    if ((long)param_2 < -0x80000000) {
      return 1;
    }
    uVar2 = 0x1606;
  }
  else {
    uVar2 = 0x3a06;
    if (param_2 >> 0x20 != 0) {
      uVar2 = 0x3206;
    }
    *(uint *)(puVar1 + 2) = uVar2;
    if (param_2 >> 0x1f != 0) {
      return 1;
    }
    uVar2 = uVar2 | 0x400;
  }
  *(uint *)(puVar1 + 2) = uVar2;
  return 1;
}




undefined8 FUN_1000f9370(long param_1,ulong param_2)

{
  ulong *puVar1;
  undefined4 uVar2;
  
  puVar1 = *(ulong **)(param_1 + 0x40);
  if (*(ulong **)(param_1 + 0x48) <= puVar1 + 3) {
    FUN_1000f8b34(param_1 + 0x28,1);
    puVar1 = *(ulong **)(param_1 + 0x40);
  }
  *(ulong **)(param_1 + 0x40) = puVar1 + 3;
  *(undefined4 *)(puVar1 + 2) = 0x2206;
  *puVar1 = param_2;
  puVar1[1] = 0;
  if ((-1 < (long)param_2) && (*(undefined4 *)(puVar1 + 2) = 0x3206, param_2 >> 0x20 == 0)) {
    uVar2 = 0x3e06;
    if (param_2 >> 0x1f != 0) {
      uVar2 = 0x3a06;
    }
    *(undefined4 *)(puVar1 + 2) = uVar2;
  }
  return 1;
}




undefined8 FUN_1000f93f4(long param_1,int param_2)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x40);
  if (*(long **)(param_1 + 0x48) <= plVar1 + 3) {
    FUN_1000f8b34(param_1 + 0x28,1);
    plVar1 = *(long **)(param_1 + 0x40);
  }
  *(long **)(param_1 + 0x40) = plVar1 + 3;
  *(undefined4 *)(plVar1 + 2) = 0x1606;
  *plVar1 = (long)param_2;
  plVar1[1] = 0;
  if (-1 < param_2) {
    *(undefined4 *)(plVar1 + 2) = 0x3e06;
  }
  return 1;
}




undefined8 FUN_1000f945c(long param_1,uint param_2)

{
  ulong *puVar1;
  
  puVar1 = *(ulong **)(param_1 + 0x40);
  if (*(ulong **)(param_1 + 0x48) <= puVar1 + 3) {
    FUN_1000f8b34(param_1 + 0x28,1);
    puVar1 = *(ulong **)(param_1 + 0x40);
  }
  *(ulong **)(param_1 + 0x40) = puVar1 + 3;
  *(undefined4 *)(puVar1 + 2) = 0x3a06;
  *puVar1 = (ulong)param_2;
  puVar1[1] = 0;
  if (-1 < (int)param_2) {
    *(undefined4 *)(puVar1 + 2) = 0x3e06;
  }
  return 1;
}




void FUN_1000f94c4(long param_1)

{
  long lVar1;
  
  lVar1 = (long)*(void **)(param_1 + 0x18) - *(long *)(param_1 + 0x10);
  if (lVar1 != 0) {
    FUN_1000f8ba8(param_1,lVar1);
    return;
  }
  _free(*(void **)(param_1 + 0x18));
  *(long *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}




void FUN_1000f9594(uint *param_1,int param_2)

{
  undefined8 *puVar1;
  long lVar2;
  
  puVar1 = *(undefined8 **)(param_1 + 2);
  if (puVar1 != (undefined8 *)0x0) {
    if (*param_1 != 0) {
      lVar2 = (ulong)*param_1 << 5;
      do {
        if (*(char *)((long)puVar1 + 0x17) < '\0') {
          operator_delete((void *)*puVar1);
        }
        puVar1 = puVar1 + 4;
        lVar2 = lVar2 + -0x20;
      } while (lVar2 != 0);
    }
    if (param_2 != 0) {
      if (*(void **)(param_1 + 2) != (void *)0x0) {
        operator_delete__(*(void **)(param_1 + 2));
      }
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[1] = 0;
    }
    *param_1 = 0;
  }
  return;
}




void FUN_1000f9608(uint *param_1,uint param_2)

{
  void *pvVar1;
  void *pvVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  
  if (param_1[1] < param_2) {
    pvVar1 = operator_new__((ulong)param_2 << 5);
    puVar4 = *(undefined8 **)(param_1 + 2);
    if (*param_1 == 0) {
      param_1[1] = param_2;
    }
    else {
      lVar5 = (ulong)*param_1 << 5;
      pvVar2 = pvVar1;
      do {
        lVar3 = FUN_10003330c(pvVar2,puVar4);
        *(undefined4 *)(lVar3 + 0x18) = *(undefined4 *)(puVar4 + 3);
        puVar4 = puVar4 + 4;
        pvVar2 = (void *)(lVar3 + 0x20);
        lVar5 = lVar5 + -0x20;
      } while (lVar5 != 0);
      puVar4 = *(undefined8 **)(param_1 + 2);
      param_1[1] = param_2;
      if (*param_1 != 0) {
        lVar5 = (ulong)*param_1 << 5;
        do {
          if (*(char *)((long)puVar4 + 0x17) < '\0') {
            operator_delete((void *)*puVar4);
          }
          puVar4 = puVar4 + 4;
          lVar5 = lVar5 + -0x20;
        } while (lVar5 != 0);
        puVar4 = *(undefined8 **)(param_1 + 2);
      }
    }
    if (puVar4 != (undefined8 *)0x0) {
      operator_delete__(puVar4);
    }
    *(void **)(param_1 + 2) = pvVar1;
  }
  return;
}




void FUN_1000f96d8(uint *param_1,uint *param_2)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  
  if (param_1 != param_2) {
    FUN_1000f9594(param_1,1);
    FUN_1000f9608(param_1,*param_2);
    uVar2 = 0;
    if (*param_2 != 0) {
      lVar3 = *(long *)(param_2 + 2);
      lVar1 = *(long *)(param_1 + 2);
      lVar4 = (ulong)*param_2 << 5;
      do {
        lVar1 = FUN_10003330c(lVar1,lVar3);
        *(undefined4 *)(lVar1 + 0x18) = *(undefined4 *)(lVar3 + 0x18);
        lVar3 = lVar3 + 0x20;
        lVar1 = lVar1 + 0x20;
        lVar4 = lVar4 + -0x20;
      } while (lVar4 != 0);
      uVar2 = *param_2;
    }
    *param_1 = uVar2;
  }
  return;
}




uint * FUN_1000f9848(uint *param_1,uint *param_2)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_1000f9608(param_1,*param_2);
  uVar2 = 0;
  if (*param_2 != 0) {
    lVar3 = *(long *)(param_2 + 2);
    lVar1 = *(long *)(param_1 + 2);
    lVar4 = (ulong)*param_2 << 5;
    do {
      lVar1 = FUN_10003330c(lVar1,lVar3);
      *(undefined4 *)(lVar1 + 0x18) = *(undefined4 *)(lVar3 + 0x18);
      lVar3 = lVar3 + 0x20;
      lVar1 = lVar1 + 0x20;
      lVar4 = lVar4 + -0x20;
    } while (lVar4 != 0);
    uVar2 = *param_2;
  }
  *param_1 = uVar2;
  return param_1;
}




void FUN_1000f99e0(uint *param_1,uint *param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  if (param_1 != param_2) {
    FUN_1000f9944(param_1,1);
    FUN_1000f9a80(param_1,*param_2);
    uVar1 = 0;
    if (*param_2 != 0) {
      lVar2 = *(long *)(param_2 + 2);
      lVar3 = *(long *)(param_1 + 2);
      lVar4 = (ulong)*param_2 * 0x48;
      do {
        FUN_10003330c(lVar3,lVar2);
        FUN_10003330c(lVar3 + 0x18,lVar2 + 0x18);
        FUN_10003330c(lVar3 + 0x30,lVar2 + 0x30);
        lVar2 = lVar2 + 0x48;
        lVar3 = lVar3 + 0x48;
        lVar4 = lVar4 + -0x48;
      } while (lVar4 != 0);
      uVar1 = *param_2;
    }
    *param_1 = uVar1;
  }
  return;
}




uint * FUN_1000f9c80(uint *param_1,uint *param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_1000f9a80(param_1,*param_2);
  uVar1 = 0;
  if (*param_2 != 0) {
    lVar2 = *(long *)(param_2 + 2);
    lVar3 = *(long *)(param_1 + 2);
    lVar4 = (ulong)*param_2 * 0x48;
    do {
      FUN_10003330c(lVar3,lVar2);
      FUN_10003330c(lVar3 + 0x18,lVar2 + 0x18);
      FUN_10003330c(lVar3 + 0x30,lVar2 + 0x30);
      lVar2 = lVar2 + 0x48;
      lVar3 = lVar3 + 0x48;
      lVar4 = lVar4 + -0x48;
    } while (lVar4 != 0);
    uVar1 = *param_2;
  }
  *param_1 = uVar1;
  return param_1;
}




uint * FUN_1000f9d14(uint *param_1,uint *param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_1000f9758(param_1,*param_2);
  uVar1 = 0;
  if (*param_2 != 0) {
    lVar2 = *(long *)(param_2 + 2);
    lVar3 = *(long *)(param_1 + 2);
    lVar4 = (ulong)*param_2 * 0x28;
    do {
      FUN_10003330c(lVar3,lVar2);
      FUN_1000f9848(lVar3 + 0x18,lVar2 + 0x18);
      lVar2 = lVar2 + 0x28;
      lVar3 = lVar3 + 0x28;
      lVar4 = lVar4 + -0x28;
    } while (lVar4 != 0);
    uVar1 = *param_2;
  }
  *param_1 = uVar1;
  return param_1;
}




uint * FUN_1000f9d9c(uint *param_1,uint *param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_1000f9b90(param_1,*param_2);
  uVar1 = 0;
  if (*param_2 != 0) {
    lVar2 = *(long *)(param_2 + 2);
    lVar3 = *(long *)(param_1 + 2);
    lVar4 = (ulong)*param_2 * 0x28;
    do {
      FUN_10003330c(lVar3,lVar2);
      FUN_1000f9c80(lVar3 + 0x18,lVar2 + 0x18);
      lVar2 = lVar2 + 0x28;
      lVar3 = lVar3 + 0x28;
      lVar4 = lVar4 + -0x28;
    } while (lVar4 != 0);
    uVar1 = *param_2;
  }
  *param_1 = uVar1;
  return param_1;
}




void FUN_1000f9e24(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 << 3);
    puVar2 = *(undefined8 **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar3 = (ulong)*param_1 << 3;
      puVar4 = puVar1;
      puVar5 = puVar2;
      do {
        *puVar4 = *puVar5;
        lVar3 = lVar3 + -8;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      } while (lVar3 != 0);
    }
    param_1[1] = param_2;
    if (puVar2 != (undefined8 *)0x0) {
      operator_delete__(puVar2);
    }
    *(undefined8 **)(param_1 + 2) = puVar1;
  }
  return;
}




void FUN_1000f9ea0(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 << 3);
    puVar2 = *(undefined8 **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar3 = (ulong)*param_1 << 3;
      puVar4 = puVar1;
      puVar5 = puVar2;
      do {
        *puVar4 = *puVar5;
        lVar3 = lVar3 + -8;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      } while (lVar3 != 0);
    }
    param_1[1] = param_2;
    if (puVar2 != (undefined8 *)0x0) {
      operator_delete__(puVar2);
    }
    *(undefined8 **)(param_1 + 2) = puVar1;
  }
  return;
}




void FUN_1000f9f1c(undefined8 *param_1)

{
  *(undefined8 *)((long)param_1 + 0xae) = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  return;
}




void FUN_1000f9f40(long param_1,string *param_2,string *param_3,string *param_4,string *param_5,
                  string *param_6,string *param_7,undefined4 param_8,undefined8 param_9,
                  undefined8 param_10,undefined1 param_11)

{
  std::string::operator=((string *)(param_1 + 0x20),param_2);
  std::string::operator=((string *)(param_1 + 0x38),param_3);
  std::string::operator=((string *)(param_1 + 0x50),param_4);
  std::string::operator=((string *)(param_1 + 0x68),param_5);
  std::string::operator=((string *)(param_1 + 0x80),param_6);
  std::string::operator=((string *)(param_1 + 0x98),param_7);
  *(undefined4 *)(param_1 + 0xb0) = param_8;
  FUN_1000fa02c(param_1,param_9);
  FUN_1000fa0c0(param_1 + 0x10,param_10);
  *(undefined1 *)(param_1 + 0xb5) = param_11;
  return;
}




void FUN_1000fa000(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_10015d3ec();
  FUN_100166bd4(uVar1,param_1 + 0x20,param_2);
  return;
}




void FUN_1000fa02c(uint *param_1,uint *param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  if (param_1 != param_2) {
    FUN_1000f950c(param_1,1);
    FUN_1000f9758(param_1,*param_2);
    uVar1 = 0;
    if (*param_2 != 0) {
      lVar2 = *(long *)(param_2 + 2);
      lVar3 = *(long *)(param_1 + 2);
      lVar4 = (ulong)*param_2 * 0x28;
      do {
        FUN_10003330c(lVar3,lVar2);
        FUN_1000f9848(lVar3 + 0x18,lVar2 + 0x18);
        lVar2 = lVar2 + 0x28;
        lVar3 = lVar3 + 0x28;
        lVar4 = lVar4 + -0x28;
      } while (lVar4 != 0);
      uVar1 = *param_2;
    }
    *param_1 = uVar1;
  }
  return;
}




void FUN_1000fa0c0(uint *param_1,uint *param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  if (param_1 != param_2) {
    FUN_1000f98bc(param_1,1);
    FUN_1000f9b90(param_1,*param_2);
    uVar1 = 0;
    if (*param_2 != 0) {
      lVar2 = *(long *)(param_2 + 2);
      lVar3 = *(long *)(param_1 + 2);
      lVar4 = (ulong)*param_2 * 0x28;
      do {
        FUN_10003330c(lVar3,lVar2);
        FUN_1000f9c80(lVar3 + 0x18,lVar2 + 0x18);
        lVar2 = lVar2 + 0x28;
        lVar3 = lVar3 + 0x28;
        lVar4 = lVar4 + -0x28;
      } while (lVar4 != 0);
      uVar1 = *param_2;
    }
    *param_1 = uVar1;
  }
  return;
}




void FUN_1000fa154(undefined8 *param_1)

{
  *(undefined8 *)((long)param_1 + 0x44) = 0;
  *(undefined8 *)((long)param_1 + 0x3c) = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  return;
}




void FUN_1000fa168(string *param_1,string *param_2,string *param_3,string *param_4,
                  undefined4 param_5)

{
  std::string::operator=(param_1,param_2);
  std::string::operator=(param_1 + 0x18,param_3);
  std::string::operator=(param_1 + 0x30,param_4);
  *(undefined4 *)(param_1 + 0x48) = param_5;
  return;
}




long FUN_1000fa1b8(long param_1)

{
  undefined8 *puVar1;
  void *local_38 [2];
  char local_21;
  
  puVar1 = (undefined8 *)FUN_100135604();
  *puVar1 = &PTR_FUN_101458c18;
  puVar1[9] = 0;
  puVar1[10] = 0;
  FUN_10001549c(local_38,"ACADEMY");
  std::string::operator=((string *)(param_1 + 0x30),(string *)local_38);
  if (local_21 < '\0') {
    operator_delete(local_38[0]);
  }
  return param_1;
}




long thunk_FUN_1000fa1b8(long param_1)

{
  undefined8 *puVar1;
  void *apvStack_38 [2];
  char cStack_21;
  
  puVar1 = (undefined8 *)FUN_100135604();
  *puVar1 = &PTR_FUN_101458c18;
  puVar1[9] = 0;
  puVar1[10] = 0;
  FUN_10001549c(apvStack_38,"ACADEMY");
  std::string::operator=((string *)(param_1 + 0x30),(string *)apvStack_38);
  if (cStack_21 < '\0') {
    operator_delete(apvStack_38[0]);
  }
  return param_1;
}




void FUN_1000fa224(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_101458c18;
  FUN_1000fa80c(param_1 + 9,1);
  FUN_100135628(param_1);
  return;
}




void FUN_1000fa258(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_101458c18;
  FUN_1000fa80c(param_1 + 9,1);
  pvVar1 = (void *)FUN_100135628(param_1);
  operator_delete(pvVar1);
  return;
}




bool FUN_1000fa290(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  undefined **local_d8;
  void *local_d0;
  undefined4 local_c8;
  undefined7 local_c0;
  char cStack_b9;
  void *local_b8;
  char local_a9;
  undefined7 local_a8;
  char cStack_a1;
  char local_91;
  void *local_90;
  char local_79;
  void *local_78;
  char local_61;
  
  lVar1 = param_2[0xb];
  if ((int)lVar1 == 0) {
    (**(code **)(*param_1 + 0x10))();
    lVar2 = FUN_1000e86c0(param_2,"gamefeed");
    if (*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 != lVar2) {
      local_c8 = 0x100005;
      local_d8 = (undefined **)0x1013d7044;
      local_d0 = (void *)0x8;
      plVar3 = (long *)FUN_1000e87dc(param_2,&local_d8);
      lVar2 = FUN_1000e86c0(plVar3,"sections");
      if (*plVar3 + (ulong)*(uint *)(plVar3 + 1) * 0x30 != lVar2) {
        local_c8 = 0x100005;
        local_d8 = (undefined **)0x1013d704d;
        local_d0 = (void *)0x8;
        plVar4 = (long *)FUN_1000e87dc(plVar3,&local_d8);
        if (((int)plVar4[2] == 4) && ((int)plVar4[1] != 0)) {
          lVar2 = 0;
          uVar5 = 0;
          do {
            FUN_1000fa5cc(&local_d8,*plVar4 + lVar2);
            FUN_1000fa508(param_1 + 1,&local_d8);
            local_d8 = &PTR_FUN_10145abe0;
            if (local_61 < '\0') {
              operator_delete(local_78);
            }
            if (local_79 < '\0') {
              operator_delete(local_90);
            }
            if (local_91 < '\0') {
              operator_delete((void *)CONCAT17(cStack_a1,local_a8));
            }
            if (local_a9 < '\0') {
              operator_delete((void *)CONCAT17(cStack_b9,local_c0));
            }
            FUN_1000fa8bc(&local_d0,1);
            uVar5 = uVar5 + 1;
            lVar2 = lVar2 + 0x18;
          } while (uVar5 < *(uint *)(plVar4 + 1));
        }
      }
      lVar2 = FUN_1000e86c0(plVar3,"playmenu");
      if (*plVar3 + (ulong)*(uint *)(plVar3 + 1) * 0x30 != lVar2) {
        local_c8 = 0x100005;
        local_d8 = (undefined **)0x1013d7056;
        local_d0 = (void *)0x8;
        plVar3 = (long *)FUN_1000e87dc(plVar3,&local_d8);
        if (((int)plVar3[2] == 4) && ((int)plVar3[1] != 0)) {
          lVar2 = 0;
          uVar5 = 0;
          do {
            FUN_1000fa70c(&local_d8,*plVar3 + lVar2);
            FUN_1000fa66c(param_1 + 9,&local_d8);
            local_d8 = &PTR_FUN_10145aca8;
            if (cStack_a1 < '\0') {
              operator_delete(local_b8);
            }
            if (cStack_b9 < '\0') {
              operator_delete(local_d0);
            }
            uVar5 = uVar5 + 1;
            lVar2 = lVar2 + 0x18;
          } while (uVar5 < *(uint *)(plVar3 + 1));
        }
      }
    }
  }
  return (int)lVar1 == 0;
}




void FUN_1000fa508(uint *param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  
  uVar3 = *param_1;
  if (uVar3 == param_1[1]) {
    uVar1 = 0;
    if (uVar3 != 0xffffffff) {
      uVar1 = uVar3 + (~uVar3 | 0xfffffff0) + 0x11;
    }
    if (uVar3 < 0x20) {
      uVar1 = uVar3 << 1;
    }
    uVar2 = uVar3 + 1;
    if (uVar3 + 1 <= uVar1) {
      uVar2 = uVar1;
    }
    FUN_1000fa934(param_1,uVar2);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  lVar4 = *(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 0x78;
  *(undefined ***)(lVar4 + -0x78) = &PTR_FUN_10145abe0;
  FUN_1000faa64(lVar4 + -0x70,param_2 + 8);
  FUN_10003330c(lVar4 + -0x60,param_2 + 0x18);
  FUN_10003330c(lVar4 + -0x48,param_2 + 0x30);
  FUN_10003330c(lVar4 + -0x30,param_2 + 0x48);
  FUN_10003330c(lVar4 + -0x18,param_2 + 0x60);
  return;
}




void FUN_1000fa5cc(undefined8 param_1,undefined8 param_2)

{
  undefined **local_98;
  undefined1 auStack_90 [16];
  void *local_80;
  char local_69;
  void *local_68;
  char local_51;
  void *local_50;
  char local_39;
  void *local_38;
  char local_21;
  
  FUN_1000fb6d0(&local_98);
  FUN_10013e41c(param_1,&local_98,param_2);
  local_98 = &PTR_FUN_10145abe0;
  if (local_21 < '\0') {
    operator_delete(local_38);
  }
  if (local_39 < '\0') {
    operator_delete(local_50);
  }
  if (local_51 < '\0') {
    operator_delete(local_68);
  }
  if (local_69 < '\0') {
    operator_delete(local_80);
  }
  FUN_1000fa8bc(auStack_90,1);
  return;
}




void FUN_1000fa66c(uint *param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  
  uVar3 = *param_1;
  if (uVar3 == param_1[1]) {
    uVar1 = 0;
    if (uVar3 != 0xffffffff) {
      uVar1 = uVar3 + (~uVar3 | 0xfffffff0) + 0x11;
    }
    if (uVar3 < 0x20) {
      uVar1 = uVar3 << 1;
    }
    uVar2 = uVar3 + 1;
    if (uVar3 + 1 <= uVar1) {
      uVar2 = uVar1;
    }
    FUN_1000fb738(param_1,uVar2);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  lVar4 = *(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 0x38;
  *(undefined ***)(lVar4 + -0x38) = &PTR_FUN_10145aca8;
  FUN_10003330c(lVar4 + -0x30,param_2 + 8);
  FUN_10003330c(lVar4 + -0x18,param_2 + 0x20);
  return;
}




void FUN_1000fa70c(undefined8 param_1,undefined8 param_2)

{
  undefined **local_78;
  void *local_70 [2];
  char local_59;
  void *local_58 [2];
  char local_41;
  
  local_78 = &PTR_FUN_10145aca8;
  FUN_10003330c(local_70,&DAT_101d91198);
  FUN_10003330c(local_58,&DAT_101d91198);
  FUN_10014118c(param_1,&local_78,param_2);
  local_78 = &PTR_FUN_10145aca8;
  if (local_41 < '\0') {
    operator_delete(local_58[0]);
  }
  if (local_59 < '\0') {
    operator_delete(local_70[0]);
  }
  return;
}




void FUN_1000fa7ac(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  FUN_100135c08();
  if (*(undefined8 **)(param_1 + 0x50) != (undefined8 *)0x0) {
    if (*(uint *)(param_1 + 0x48) != 0) {
      lVar1 = (ulong)*(uint *)(param_1 + 0x48) * 0x38;
      puVar2 = *(undefined8 **)(param_1 + 0x50);
      do {
        (**(code **)*puVar2)(puVar2);
        lVar1 = lVar1 + -0x38;
        puVar2 = puVar2 + 7;
      } while (lVar1 != 0);
    }
    *(undefined4 *)(param_1 + 0x48) = 0;
  }
  return;
}




void FUN_1000fa80c(uint *param_1,int param_2)

{
  long lVar1;
  undefined8 *puVar2;
  
  if (*(undefined8 **)(param_1 + 2) != (undefined8 *)0x0) {
    if (*param_1 != 0) {
      lVar1 = (ulong)*param_1 * 0x38;
      puVar2 = *(undefined8 **)(param_1 + 2);
      do {
        (**(code **)*puVar2)(puVar2);
        lVar1 = lVar1 + -0x38;
        puVar2 = puVar2 + 7;
      } while (lVar1 != 0);
    }
    if (param_2 != 0) {
      if (*(void **)(param_1 + 2) != (void *)0x0) {
        operator_delete__(*(void **)(param_1 + 2));
      }
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[1] = 0;
    }
    *param_1 = 0;
  }
  return;
}




bool FUN_1000fa884(long param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x48);
  if (iVar1 != 0) {
    FUN_1000fb830(param_2,(int *)(param_1 + 0x48));
  }
  return iVar1 != 0;
}




void FUN_1000fa8bc(uint *param_1,int param_2)

{
  undefined8 *puVar1;
  long lVar2;
  
  puVar1 = *(undefined8 **)(param_1 + 2);
  if (puVar1 != (undefined8 *)0x0) {
    if (*param_1 != 0) {
      lVar2 = (ulong)*param_1 * 0x598;
      do {
        (**(code **)*puVar1)(puVar1);
        puVar1 = puVar1 + 0xb3;
        lVar2 = lVar2 + -0x598;
      } while (lVar2 != 0);
    }
    if (param_2 != 0) {
      if (*(void **)(param_1 + 2) != (void *)0x0) {
        operator_delete__(*(void **)(param_1 + 2));
      }
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[1] = 0;
    }
    *param_1 = 0;
  }
  return;
}




void FUN_1000fa934(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  void *pvVar3;
  undefined8 *puVar4;
  long lVar5;
  
  if (param_1[1] < param_2) {
    pvVar3 = operator_new__((ulong)param_2 * 0x78);
    puVar4 = *(undefined8 **)(param_1 + 2);
    uVar2 = *param_1;
    if (uVar2 == 0) {
      param_1[1] = param_2;
    }
    else {
      lVar5 = 0;
      do {
        puVar1 = (undefined8 *)((long)pvVar3 + lVar5);
        *puVar1 = &PTR_FUN_10145abe0;
        FUN_1000faa64(puVar1 + 1,(long)puVar4 + lVar5 + 8);
        FUN_10003330c(puVar1 + 3,(long)puVar4 + lVar5 + 0x18);
        FUN_10003330c(puVar1 + 6,(long)puVar4 + lVar5 + 0x30);
        FUN_10003330c(puVar1 + 9,(long)puVar4 + lVar5 + 0x48);
        FUN_10003330c(puVar1 + 0xc,(long)puVar4 + lVar5 + 0x60);
        lVar5 = lVar5 + 0x78;
      } while ((ulong)uVar2 * 0x78 - lVar5 != 0);
      puVar4 = *(undefined8 **)(param_1 + 2);
      param_1[1] = param_2;
      if (*param_1 != 0) {
        lVar5 = (ulong)*param_1 * 0x78;
        do {
          (**(code **)*puVar4)(puVar4);
          lVar5 = lVar5 + -0x78;
          puVar4 = puVar4 + 0xf;
        } while (lVar5 != 0);
        puVar4 = *(undefined8 **)(param_1 + 2);
      }
    }
    if (puVar4 != (undefined8 *)0x0) {
      operator_delete__(puVar4);
    }
    *(void **)(param_1 + 2) = pvVar3;
  }
  return;
}




uint * FUN_1000faa64(uint *param_1,uint *param_2)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_1000faad4(param_1,*param_2);
  uVar2 = 0;
  if (*param_2 != 0) {
    lVar3 = *(long *)(param_2 + 2);
    lVar1 = *(long *)(param_1 + 2);
    lVar4 = (ulong)*param_2 * 0x598;
    do {
      lVar1 = FUN_1000faba4(lVar1,lVar3);
      lVar3 = lVar3 + 0x598;
      lVar1 = lVar1 + 0x598;
      lVar4 = lVar4 + -0x598;
    } while (lVar4 != 0);
    uVar2 = *param_2;
  }
  *param_1 = uVar2;
  return param_1;
}




void FUN_1000faad4(uint *param_1,uint param_2)

{
  void *pvVar1;
  void *pvVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  
  if (param_1[1] < param_2) {
    pvVar1 = operator_new__((ulong)param_2 * 0x598);
    puVar4 = *(undefined8 **)(param_1 + 2);
    if (*param_1 == 0) {
      param_1[1] = param_2;
    }
    else {
      lVar5 = (ulong)*param_1 * 0x598;
      pvVar2 = pvVar1;
      do {
        lVar3 = FUN_1000faba4(pvVar2,puVar4);
        puVar4 = puVar4 + 0xb3;
        pvVar2 = (void *)(lVar3 + 0x598);
        lVar5 = lVar5 + -0x598;
      } while (lVar5 != 0);
      puVar4 = *(undefined8 **)(param_1 + 2);
      param_1[1] = param_2;
      if (*param_1 != 0) {
        lVar5 = (ulong)*param_1 * 0x598;
        do {
          (**(code **)*puVar4)(puVar4);
          puVar4 = puVar4 + 0xb3;
          lVar5 = lVar5 + -0x598;
        } while (lVar5 != 0);
        puVar4 = *(undefined8 **)(param_1 + 2);
      }
    }
    if (puVar4 != (undefined8 *)0x0) {
      operator_delete__(puVar4);
    }
    *(void **)(param_1 + 2) = pvVar1;
  }
  return;
}




undefined8 * FUN_1000faba4(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  *param_1 = &PTR_thunk_FUN_100141f74_10145abb8;
  FUN_1000faf14(param_1 + 1,param_2 + 8);
  FUN_1000fb318(param_1 + 3,param_2 + 0x18);
  param_1[5] = &PTR_FUN_10145aaf0;
  FUN_10003330c(param_1 + 6,param_2 + 0x30);
  FUN_10003330c(param_1 + 9,param_2 + 0x48);
  FUN_10003330c(param_1 + 0xc,param_2 + 0x60);
  FUN_10003330c(param_1 + 0xf,param_2 + 0x78);
  uVar2 = *(undefined8 *)(param_2 + 0x98);
  uVar1 = *(undefined8 *)(param_2 + 0x90);
  uVar4 = *(undefined8 *)(param_2 + 0xa8);
  uVar3 = *(undefined8 *)(param_2 + 0xa0);
  uVar5 = *(undefined8 *)(param_2 + 0xac);
  *(undefined8 *)((long)param_1 + 0xb4) = *(undefined8 *)(param_2 + 0xb4);
  *(undefined8 *)((long)param_1 + 0xac) = uVar5;
  param_1[0x13] = uVar2;
  param_1[0x12] = uVar1;
  param_1[0x15] = uVar4;
  param_1[0x14] = uVar3;
  param_1[0x18] = &PTR_FUN_10145aaa0;
  FUN_10003330c(param_1 + 0x19,param_2 + 200);
  FUN_10003330c(param_1 + 0x1c,param_2 + 0xe0);
  FUN_10003330c(param_1 + 0x1f,param_2 + 0xf8);
  FUN_10003330c(param_1 + 0x22,param_2 + 0x110);
  uVar1 = *(undefined8 *)(param_2 + 0x128);
  param_1[0x26] = *(undefined8 *)(param_2 + 0x130);
  param_1[0x25] = uVar1;
  param_1[0x27] = &PTR_FUN_10145aaa0;
  FUN_10003330c(param_1 + 0x28,param_2 + 0x140);
  FUN_10003330c(param_1 + 0x2b,param_2 + 0x158);
  FUN_10003330c(param_1 + 0x2e,param_2 + 0x170);
  FUN_10003330c(param_1 + 0x31,param_2 + 0x188);
  uVar1 = *(undefined8 *)(param_2 + 0x1a0);
  param_1[0x35] = *(undefined8 *)(param_2 + 0x1a8);
  param_1[0x34] = uVar1;
  param_1[0x36] = &PTR_thunk_FUN_100141b78_10145ab18;
  FUN_10003330c(param_1 + 0x37,param_2 + 0x1b8);
  FUN_10003330c(param_1 + 0x3a,param_2 + 0x1d0);
  FUN_10003330c(param_1 + 0x3d,param_2 + 0x1e8);
  FUN_10003330c(param_1 + 0x40,param_2 + 0x200);
  FUN_10003330c(param_1 + 0x43,param_2 + 0x218);
  FUN_10003330c(param_1 + 0x46,param_2 + 0x230);
  FUN_10003330c(param_1 + 0x49,param_2 + 0x248);
  FUN_10003330c(param_1 + 0x4c,param_2 + 0x260);
  FUN_10003330c(param_1 + 0x4f,param_2 + 0x278);
  param_1[0x52] = &PTR_FUN_10145ab40;
  FUN_10003330c(param_1 + 0x53,param_2 + 0x298);
  FUN_10003330c(param_1 + 0x56,param_2 + 0x2b0);
  FUN_10003330c(param_1 + 0x59,param_2 + 0x2c8);
  FUN_10003330c(param_1 + 0x5c,param_2 + 0x2e0);
  uVar2 = *(undefined8 *)(param_2 + 0x300);
  uVar1 = *(undefined8 *)(param_2 + 0x2f8);
  uVar4 = *(undefined8 *)(param_2 + 0x310);
  uVar3 = *(undefined8 *)(param_2 + 0x308);
  uVar5 = *(undefined8 *)(param_2 + 0x312);
  *(undefined8 *)((long)param_1 + 0x31a) = *(undefined8 *)(param_2 + 0x31a);
  *(undefined8 *)((long)param_1 + 0x312) = uVar5;
  param_1[0x62] = uVar4;
  param_1[0x61] = uVar3;
  param_1[0x60] = uVar2;
  param_1[0x5f] = uVar1;
  param_1[0x65] = &PTR_FUN_10145ab68;
  FUN_10003330c(param_1 + 0x66,param_2 + 0x330);
  uVar2 = *(undefined8 *)(param_2 + 0x350);
  uVar1 = *(undefined8 *)(param_2 + 0x348);
  *(undefined4 *)(param_1 + 0x6b) = *(undefined4 *)(param_2 + 0x358);
  param_1[0x6a] = uVar2;
  param_1[0x69] = uVar1;
  param_1[0x6c] = &PTR_FUN_10145ab90;
  uVar1 = *(undefined8 *)(param_2 + 0x368);
  param_1[0x6e] = *(undefined8 *)(param_2 + 0x370);
  param_1[0x6d] = uVar1;
  FUN_10003330c(param_1 + 0x6f,param_2 + 0x378);
  FUN_10003330c(param_1 + 0x72,param_2 + 0x390);
  FUN_10003330c(param_1 + 0x75,param_2 + 0x3a8);
  FUN_10003330c(param_1 + 0x78,param_2 + 0x3c0);
  FUN_10003330c(param_1 + 0x7b,param_2 + 0x3d8);
  FUN_10003330c(param_1 + 0x7e,param_2 + 0x3f0);
  FUN_10003330c(param_1 + 0x81,param_2 + 0x408);
  FUN_10003330c(param_1 + 0x84,param_2 + 0x420);
  FUN_10003330c(param_1 + 0x87,param_2 + 0x438);
  FUN_10003330c(param_1 + 0x8a,param_2 + 0x450);
  FUN_10003330c(param_1 + 0x8d,param_2 + 0x468);
  FUN_10003330c(param_1 + 0x90,param_2 + 0x480);
  FUN_10003330c(param_1 + 0x93,param_2 + 0x498);
  FUN_10003330c(param_1 + 0x96,param_2 + 0x4b0);
  thunk_FUN_1004e439c(param_1 + 0x99,param_2 + 0x4c8);
  FUN_1000a72a4(param_1 + 0x9b,param_2 + 0x4d8);
  FUN_1000fb538(param_1 + 0x9d,param_2 + 0x4e8);
  uVar1 = *(undefined8 *)(param_2 + 0x4f8);
  uVar3 = *(undefined8 *)(param_2 + 0x510);
  uVar2 = *(undefined8 *)(param_2 + 0x508);
  param_1[0xa0] = *(undefined8 *)(param_2 + 0x500);
  param_1[0x9f] = uVar1;
  param_1[0xa2] = uVar3;
  param_1[0xa1] = uVar2;
  uVar2 = *(undefined8 *)(param_2 + 0x520);
  uVar1 = *(undefined8 *)(param_2 + 0x518);
  uVar4 = *(undefined8 *)(param_2 + 0x530);
  uVar3 = *(undefined8 *)(param_2 + 0x528);
  uVar5 = *(undefined8 *)(param_2 + 0x538);
  uVar7 = *(undefined8 *)(param_2 + 0x550);
  uVar6 = *(undefined8 *)(param_2 + 0x548);
  param_1[0xa8] = *(undefined8 *)(param_2 + 0x540);
  param_1[0xa7] = uVar5;
  param_1[0xaa] = uVar7;
  param_1[0xa9] = uVar6;
  param_1[0xa4] = uVar2;
  param_1[0xa3] = uVar1;
  param_1[0xa6] = uVar4;
  param_1[0xa5] = uVar3;
  uVar2 = *(undefined8 *)(param_2 + 0x560);
  uVar1 = *(undefined8 *)(param_2 + 0x558);
  uVar4 = *(undefined8 *)(param_2 + 0x570);
  uVar3 = *(undefined8 *)(param_2 + 0x568);
  uVar6 = *(undefined8 *)(param_2 + 0x580);
  uVar5 = *(undefined8 *)(param_2 + 0x578);
  uVar7 = *(undefined8 *)(param_2 + 0x586);
  *(undefined8 *)((long)param_1 + 0x58e) = *(undefined8 *)(param_2 + 0x58e);
  *(undefined8 *)((long)param_1 + 0x586) = uVar7;
  param_1[0xae] = uVar4;
  param_1[0xad] = uVar3;
  param_1[0xb0] = uVar6;
  param_1[0xaf] = uVar5;
  param_1[0xac] = uVar2;
  param_1[0xab] = uVar1;
  return param_1;
}




uint * FUN_1000faf14(uint *param_1,uint *param_2)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_1000fafb4(param_1,*param_2);
  uVar2 = 0;
  if (*param_2 != 0) {
    lVar1 = *(long *)(param_1 + 2) + 8;
    lVar3 = (ulong)*param_2 * 0x30;
    puVar4 = (undefined8 *)(*(long *)(param_2 + 2) + 0x18);
    do {
      *(undefined ***)(lVar1 + -8) = &PTR_FUN_10145aa78;
      lVar1 = FUN_1000fb0b0(lVar1,puVar4 + -2);
      uVar6 = puVar4[1];
      uVar5 = *puVar4;
      *(undefined8 *)(lVar1 + 0x1d) = *(undefined8 *)((long)puVar4 + 0xd);
      *(undefined8 *)(lVar1 + 0x18) = uVar6;
      *(undefined8 *)(lVar1 + 0x10) = uVar5;
      lVar1 = lVar1 + 0x30;
      puVar4 = puVar4 + 6;
      lVar3 = lVar3 + -0x30;
    } while (lVar3 != 0);
    uVar2 = *param_2;
  }
  *param_1 = uVar2;
  return param_1;
}




void FUN_1000fafb4(uint *param_1,uint param_2)

{
  void *pvVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if (param_1[1] < param_2) {
    pvVar1 = operator_new__((ulong)param_2 * 0x30);
    puVar2 = *(undefined8 **)(param_1 + 2);
    if (*param_1 == 0) {
      param_1[1] = param_2;
    }
    else {
      lVar3 = (long)pvVar1 + 8;
      lVar4 = (ulong)*param_1 * 0x30;
      puVar2 = puVar2 + 3;
      do {
        *(undefined ***)(lVar3 + -8) = &PTR_FUN_10145aa78;
        FUN_1000fb0b0(lVar3,puVar2 + -2);
        uVar6 = puVar2[1];
        uVar5 = *puVar2;
        *(undefined8 *)(lVar3 + 0x1d) = *(undefined8 *)((long)puVar2 + 0xd);
        *(undefined8 *)(lVar3 + 0x18) = uVar6;
        *(undefined8 *)(lVar3 + 0x10) = uVar5;
        lVar3 = lVar3 + 0x30;
        puVar2 = puVar2 + 6;
        lVar4 = lVar4 + -0x30;
      } while (lVar4 != 0);
      puVar2 = *(undefined8 **)(param_1 + 2);
      param_1[1] = param_2;
      if (*param_1 != 0) {
        lVar3 = (ulong)*param_1 * 0x30;
        do {
          (**(code **)*puVar2)(puVar2);
          lVar3 = lVar3 + -0x30;
          puVar2 = puVar2 + 6;
        } while (lVar3 != 0);
        puVar2 = *(undefined8 **)(param_1 + 2);
      }
    }
    if (puVar2 != (undefined8 *)0x0) {
      operator_delete__(puVar2);
    }
    *(void **)(param_1 + 2) = pvVar1;
  }
  return;
}




uint * FUN_1000fb0b0(uint *param_1,uint *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_1000fb1b8(param_1,*param_2);
  uVar3 = *param_2;
  uVar4 = 0;
  if (uVar3 != 0) {
    lVar6 = 0;
    lVar7 = *(long *)(param_2 + 2);
    lVar8 = *(long *)(param_1 + 2);
    do {
      puVar1 = (undefined8 *)(lVar8 + lVar6);
      *puVar1 = &PTR_thunk_FUN_100141934_10145aa50;
      lVar2 = lVar7 + lVar6;
      FUN_1000fb538(puVar1 + 1,lVar2 + 8);
      FUN_10003330c(puVar1 + 3,lVar2 + 0x18);
      FUN_10003330c(puVar1 + 6,lVar2 + 0x30);
      FUN_10003330c(puVar1 + 9,lVar2 + 0x48);
      FUN_10003330c(puVar1 + 0xc,lVar2 + 0x60);
      FUN_10003330c(puVar1 + 0xf,lVar2 + 0x78);
      FUN_10003330c(puVar1 + 0x12,lVar2 + 0x90);
      FUN_10003330c(puVar1 + 0x15,lVar2 + 0xa8);
      uVar5 = *(undefined8 *)(lVar2 + 0xc0);
      *(undefined8 *)((long)puVar1 + 199) = *(undefined8 *)(lVar2 + 199);
      puVar1[0x18] = uVar5;
      lVar6 = lVar6 + 0xd0;
    } while ((ulong)uVar3 * 0xd0 - lVar6 != 0);
    uVar4 = *param_2;
  }
  *param_1 = uVar4;
  return param_1;
}




void FUN_1000fb1b8(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  void *pvVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  
  if (param_1[1] < param_2) {
    pvVar3 = operator_new__((ulong)param_2 * 0xd0);
    puVar5 = *(undefined8 **)(param_1 + 2);
    uVar2 = *param_1;
    if (uVar2 == 0) {
      param_1[1] = param_2;
    }
    else {
      lVar6 = 0;
      do {
        puVar1 = (undefined8 *)((long)pvVar3 + lVar6);
        *puVar1 = &PTR_thunk_FUN_100141934_10145aa50;
        FUN_1000fb538(puVar1 + 1,(long)puVar5 + lVar6 + 8);
        FUN_10003330c(puVar1 + 3,(long)puVar5 + lVar6 + 0x18);
        FUN_10003330c(puVar1 + 6,(long)puVar5 + lVar6 + 0x30);
        FUN_10003330c(puVar1 + 9,(long)puVar5 + lVar6 + 0x48);
        FUN_10003330c(puVar1 + 0xc,(long)puVar5 + lVar6 + 0x60);
        FUN_10003330c(puVar1 + 0xf,(long)puVar5 + lVar6 + 0x78);
        FUN_10003330c(puVar1 + 0x12,(long)puVar5 + lVar6 + 0x90);
        FUN_10003330c(puVar1 + 0x15,(long)puVar5 + lVar6 + 0xa8);
        uVar4 = *(undefined8 *)((long)puVar5 + lVar6 + 0xc0);
        *(undefined8 *)((long)puVar1 + 199) = *(undefined8 *)((long)puVar5 + lVar6 + 199);
        puVar1[0x18] = uVar4;
        lVar6 = lVar6 + 0xd0;
      } while ((ulong)uVar2 * 0xd0 - lVar6 != 0);
      puVar5 = *(undefined8 **)(param_1 + 2);
      param_1[1] = param_2;
      if (*param_1 != 0) {
        lVar6 = (ulong)*param_1 * 0xd0;
        do {
          (**(code **)*puVar5)(puVar5);
          lVar6 = lVar6 + -0xd0;
          puVar5 = puVar5 + 0x1a;
        } while (lVar6 != 0);
        puVar5 = *(undefined8 **)(param_1 + 2);
      }
    }
    if (puVar5 != (undefined8 *)0x0) {
      operator_delete__(puVar5);
    }
    *(void **)(param_1 + 2) = pvVar3;
  }
  return;
}




uint * FUN_1000fb318(uint *param_1,uint *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_1000fb3fc(param_1,*param_2);
  uVar3 = *param_2;
  uVar4 = 0;
  if (uVar3 != 0) {
    lVar5 = 0;
    lVar6 = *(long *)(param_2 + 2);
    lVar7 = *(long *)(param_1 + 2);
    do {
      puVar1 = (undefined8 *)(lVar7 + lVar5);
      *puVar1 = &PTR_FUN_10145aac8;
      puVar1[1] = &PTR_FUN_10145aaa0;
      lVar2 = lVar6 + lVar5;
      FUN_10003330c(puVar1 + 2,lVar2 + 0x10);
      FUN_10003330c(puVar1 + 5,lVar2 + 0x28);
      FUN_10003330c(puVar1 + 8,lVar2 + 0x40);
      FUN_10003330c(puVar1 + 0xb,lVar2 + 0x58);
      uVar8 = *(undefined8 *)(lVar2 + 0x70);
      puVar1[0xf] = *(undefined8 *)(lVar2 + 0x78);
      puVar1[0xe] = uVar8;
      uVar8 = *(undefined8 *)(lVar2 + 0x80);
      puVar1[0x11] = *(undefined8 *)(lVar2 + 0x88);
      puVar1[0x10] = uVar8;
      lVar5 = lVar5 + 0x90;
    } while ((ulong)uVar3 * 0x90 - lVar5 != 0);
    uVar4 = *param_2;
  }
  *param_1 = uVar4;
  return param_1;
}




void FUN_1000fb3fc(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  void *pvVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  if (param_1[1] < param_2) {
    pvVar3 = operator_new__((ulong)param_2 * 0x90);
    puVar4 = *(undefined8 **)(param_1 + 2);
    uVar2 = *param_1;
    if (uVar2 == 0) {
      param_1[1] = param_2;
    }
    else {
      lVar5 = 0;
      do {
        puVar1 = (undefined8 *)((long)pvVar3 + lVar5);
        *puVar1 = &PTR_FUN_10145aac8;
        puVar1[1] = &PTR_FUN_10145aaa0;
        FUN_10003330c(puVar1 + 2,(long)puVar4 + lVar5 + 0x10);
        FUN_10003330c(puVar1 + 5,(long)puVar4 + lVar5 + 0x28);
        FUN_10003330c(puVar1 + 8,(long)puVar4 + lVar5 + 0x40);
        FUN_10003330c(puVar1 + 0xb,(long)puVar4 + lVar5 + 0x58);
        uVar6 = *(undefined8 *)((long)puVar4 + lVar5 + 0x70);
        puVar1[0xf] = *(undefined8 *)((long)puVar4 + lVar5 + 0x78);
        puVar1[0xe] = uVar6;
        uVar6 = *(undefined8 *)((long)puVar4 + lVar5 + 0x80);
        puVar1[0x11] = *(undefined8 *)((long)puVar4 + lVar5 + 0x88);
        puVar1[0x10] = uVar6;
        lVar5 = lVar5 + 0x90;
      } while ((ulong)uVar2 * 0x90 - lVar5 != 0);
      puVar4 = *(undefined8 **)(param_1 + 2);
      param_1[1] = param_2;
      if (*param_1 != 0) {
        lVar5 = (ulong)*param_1 * 0x90;
        do {
          (**(code **)*puVar4)(puVar4);
          lVar5 = lVar5 + -0x90;
          puVar4 = puVar4 + 0x12;
        } while (lVar5 != 0);
        puVar4 = *(undefined8 **)(param_1 + 2);
      }
    }
    if (puVar4 != (undefined8 *)0x0) {
      operator_delete__(puVar4);
    }
    *(void **)(param_1 + 2) = pvVar3;
  }
  return;
}




uint * FUN_1000fb538(uint *param_1,uint *param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_1000fb5d8(param_1,*param_2);
  uVar1 = 0;
  if (*param_2 != 0) {
    lVar2 = *(long *)(param_1 + 2) + 0x20;
    lVar4 = (ulong)*param_2 * 0x38;
    lVar3 = *(long *)(param_2 + 2) + 0x20;
    do {
      *(undefined ***)(lVar2 + -0x20) = &PTR_FUN_10145aa28;
      FUN_10003330c(lVar2 + -0x18,lVar3 + -0x18);
      FUN_10003330c(lVar2,lVar3);
      lVar2 = lVar2 + 0x38;
      lVar3 = lVar3 + 0x38;
      lVar4 = lVar4 + -0x38;
    } while (lVar4 != 0);
    uVar1 = *param_2;
  }
  *param_1 = uVar1;
  return param_1;
}




void FUN_1000fb5d8(uint *param_1,uint param_2)

{
  void *pvVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  
  if (param_1[1] < param_2) {
    pvVar1 = operator_new__((ulong)param_2 * 0x38);
    puVar2 = *(undefined8 **)(param_1 + 2);
    if (*param_1 == 0) {
      param_1[1] = param_2;
    }
    else {
      lVar3 = (long)pvVar1 + 0x20;
      lVar4 = (ulong)*param_1 * 0x38;
      puVar2 = puVar2 + 4;
      do {
        *(undefined ***)(lVar3 + -0x20) = &PTR_FUN_10145aa28;
        FUN_10003330c(lVar3 + -0x18,puVar2 + -3);
        FUN_10003330c(lVar3,puVar2);
        lVar3 = lVar3 + 0x38;
        puVar2 = puVar2 + 7;
        lVar4 = lVar4 + -0x38;
      } while (lVar4 != 0);
      puVar2 = *(undefined8 **)(param_1 + 2);
      param_1[1] = param_2;
      if (*param_1 != 0) {
        lVar3 = (ulong)*param_1 * 0x38;
        do {
          (**(code **)*puVar2)(puVar2);
          lVar3 = lVar3 + -0x38;
          puVar2 = puVar2 + 7;
        } while (lVar3 != 0);
        puVar2 = *(undefined8 **)(param_1 + 2);
      }
    }
    if (puVar2 != (undefined8 *)0x0) {
      operator_delete__(puVar2);
    }
    *(void **)(param_1 + 2) = pvVar1;
  }
  return;
}




undefined8 * FUN_1000fb6d0(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_10145abe0;
  FUN_10003330c(param_1 + 3,&DAT_101d91198);
  FUN_10003330c(param_1 + 6,&DAT_101d91198);
  FUN_10003330c(param_1 + 9,&DAT_101d91198);
  FUN_10003330c(param_1 + 0xc,&DAT_101d91198);
  return param_1;
}




void FUN_1000fb738(uint *param_1,uint param_2)

{
  void *pvVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  
  if (param_1[1] < param_2) {
    pvVar1 = operator_new__((ulong)param_2 * 0x38);
    puVar2 = *(undefined8 **)(param_1 + 2);
    if (*param_1 == 0) {
      param_1[1] = param_2;
    }
    else {
      lVar3 = (long)pvVar1 + 0x20;
      lVar4 = (ulong)*param_1 * 0x38;
      puVar2 = puVar2 + 4;
      do {
        *(undefined ***)(lVar3 + -0x20) = &PTR_FUN_10145aca8;
        FUN_10003330c(lVar3 + -0x18,puVar2 + -3);
        FUN_10003330c(lVar3,puVar2);
        lVar3 = lVar3 + 0x38;
        puVar2 = puVar2 + 7;
        lVar4 = lVar4 + -0x38;
      } while (lVar4 != 0);
      puVar2 = *(undefined8 **)(param_1 + 2);
      param_1[1] = param_2;
      if (*param_1 != 0) {
        lVar3 = (ulong)*param_1 * 0x38;
        do {
          (**(code **)*puVar2)(puVar2);
          lVar3 = lVar3 + -0x38;
          puVar2 = puVar2 + 7;
        } while (lVar3 != 0);
        puVar2 = *(undefined8 **)(param_1 + 2);
      }
    }
    if (puVar2 != (undefined8 *)0x0) {
      operator_delete__(puVar2);
    }
    *(void **)(param_1 + 2) = pvVar1;
  }
  return;
}




void FUN_1000fb830(uint *param_1,uint *param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  if (param_1 != param_2) {
    FUN_1000fa80c(param_1,1);
    FUN_1000fb738(param_1,*param_2);
    uVar1 = 0;
    if (*param_2 != 0) {
      lVar2 = *(long *)(param_1 + 2) + 0x20;
      lVar4 = (ulong)*param_2 * 0x38;
      lVar3 = *(long *)(param_2 + 2) + 0x20;
      do {
        *(undefined ***)(lVar2 + -0x20) = &PTR_FUN_10145aca8;
        FUN_10003330c(lVar2 + -0x18,lVar3 + -0x18);
        FUN_10003330c(lVar2,lVar3);
        lVar2 = lVar2 + 0x38;
        lVar3 = lVar3 + 0x38;
        lVar4 = lVar4 + -0x38;
      } while (lVar4 != 0);
      uVar1 = *param_2;
    }
    *param_1 = uVar1;
  }
  return;
}




void thunk_FUN_1000fb8e0(void)

{
  FUN_1000fb8e0();
  return;
}




void FUN_1000fb8e0(void)

{
  uint uVar1;
  
  uVar1 = FUN_100131560();
  if ((uVar1 & 1) != 0) {
    return;
  }
  FUN_10015d3ec();
  FUN_100166c54();
  return;
}




void thunk_FUN_1000fb8e0(void)

{
  FUN_1000fb8e0();
  return;
}




undefined8 * FUN_1000fb908(undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = FUN_10014f4a0();
  FUN_1004f0a20(lVar1 + 0x18);
  *param_1 = &PTR_thunk_FUN_1000fd73c_101458c48;
  param_1[3] = &PTR_FUN_101458ff0;
  thunk_FUN_100312640(param_1 + 6);
  param_1[0x16] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0x13] = 0;
  FUN_1000fd6fc(param_1 + 0x17);
  FUN_1000fd6fc(param_1 + 0x20);
  FUN_1000fd6fc(param_1 + 0x29);
  FUN_1000fd6fc(param_1 + 0x32);
  param_1[0x41] = 0;
  param_1[0x3e] = 0;
  param_1[0x3d] = 0;
  param_1[0x40] = 0;
  param_1[0x3f] = 0;
  param_1[0x3c] = 0;
  param_1[0x3b] = 0;
  FUN_1000fd524(param_1 + 0x3f);
  param_1[0x46] = 0;
  param_1[0x45] = 0;
  param_1[0x44] = 0;
  FUN_1000fd524(param_1 + 0x44);
  param_1[0x4b] = 0;
  param_1[0x4a] = 0;
  param_1[0x49] = 0;
  FUN_1000fd524();
  param_1[0x50] = 0;
  param_1[0x4f] = 0;
  param_1[0x4e] = 0;
  FUN_1000fd524(param_1 + 0x4e);
  param_1[0x55] = 0;
  param_1[0x54] = 0;
  param_1[0x53] = 0;
  FUN_1000fd4c4();
  *(undefined1 *)(param_1 + 0x58) = 0;
  return param_1;
}




undefined8 FUN_1000fb9ec(long param_1,string *param_2,undefined8 param_3,code *param_4)

{
  int iVar1;
  undefined8 uVar2;
  void *local_48 [2];
  char local_31;
  
  if ((*(char *)(param_1 + 0x2c0) == '\0') || (iVar1 = FUN_1000fbaa0(), iVar1 != 0)) {
    (*param_4)();
    uVar2 = 0;
  }
  else {
    FUN_10001549c(local_48,"redeem");
    std::string::operator=(param_2,(string *)local_48);
    *(undefined8 *)(param_2 + 0x18) = param_3;
    *(code **)(param_2 + 0x20) = param_4;
    if (local_31 < '\0') {
      operator_delete(local_48[0]);
    }
    uVar2 = 1;
  }
  return uVar2;
}




void FUN_1000fba70(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  
  iVar1 = FUN_1000fb9ec((int)param_1,param_1 + 0x248,param_2,param_3);
  if (iVar1 != 0) {
    FUN_10015d3ec();
    FUN_100166c94();
    return;
  }
  return;
}




bool FUN_1000fbaa0(void)

{
  if (((((*(long *)(DAT_101d23080 + 0x210) == 0) || (*(long *)(DAT_101d23080 + 0x218) == 0)) &&
       ((*(long *)(DAT_101d23080 + 0x238) == 0 || (*(long *)(DAT_101d23080 + 0x240) == 0)))) &&
      ((*(long *)(DAT_101d23080 + 0x260) == 0 || (*(long *)(DAT_101d23080 + 0x268) == 0)))) &&
     ((*(long *)(DAT_101d23080 + 0x288) == 0 || (*(long *)(DAT_101d23080 + 0x290) == 0)))) {
    if (*(long *)(DAT_101d23080 + 0x2b0) != 0) {
      return *(long *)(DAT_101d23080 + 0x2b8) != 0;
    }
    return false;
  }
  return true;
}




void FUN_1000fbb10(long param_1)

{
  FUN_1000fbb58(param_1 + 0x98,0);
  FUN_1000fbc04(param_1 + 0xa8,0);
  FUN_1003126a0(param_1 + 0x30);
  FUN_1000e7da4(param_1 + 0xb8);
  FUN_1000e7da4(param_1 + 0x100);
  return;
}




void FUN_1000fbca0(long param_1,long param_2)

{
  bool bVar1;
  uint uVar2;
  long lVar3;
  long *plVar4;
  char *pcVar5;
  char *pcVar6;
  long lVar7;
  undefined4 *puVar8;
  void *pvVar9;
  undefined8 *puVar10;
  long *plVar11;
  undefined4 uVar12;
  undefined8 *puVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined1 extraout_b0;
  undefined1 extraout_b0_00;
  undefined1 extraout_var;
  undefined1 extraout_var_00;
  undefined1 extraout_var_01;
  undefined1 extraout_var_02;
  undefined1 extraout_var_03;
  undefined1 extraout_var_04;
  undefined1 extraout_var_05;
  undefined1 extraout_var_06;
  undefined1 extraout_var_07;
  undefined1 extraout_var_08;
  undefined1 extraout_var_09;
  undefined1 extraout_var_10;
  undefined1 extraout_var_11;
  undefined1 extraout_var_12;
  float fVar17;
  double dVar18;
  void *local_230 [2];
  char local_219;
  void *local_218 [2];
  char local_201;
  void *local_200 [2];
  char local_1e9;
  void *local_1e8 [2];
  char local_1d1;
  void *local_1d0 [2];
  char local_1b9;
  void *local_1b8 [2];
  char local_1a1;
  void *local_1a0 [2];
  char local_189;
  void *local_188 [2];
  char local_171;
  void *local_170 [2];
  char local_159;
  char *local_158;
  char *pcStack_150;
  undefined4 local_148;
  char local_141;
  void *local_140;
  char local_129;
  void *local_128;
  char local_111;
  void *local_110;
  char local_f9;
  long local_e0;
  ulong local_d8;
  int local_d0;
  undefined8 *local_c8;
  undefined8 *local_c0;
  undefined8 local_b8;
  void *pvStack_b0;
  void *local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  int local_88;
  undefined8 local_80;
  
  FUN_1000fbb10();
  if (*(char *)(param_2 + 0x25) == '\0') {
    return;
  }
  local_e0 = 0;
  local_d8 = 0;
  local_d0 = 0;
  pvStack_b0 = (void *)0x0;
  local_b8 = 0;
  uStack_a0 = 0;
  local_a8 = (void *)0x0;
  local_98 = 0;
  uStack_90 = 0x400;
  local_88 = 0;
  local_80 = 0;
  local_c8 = operator_new(0x28);
  *local_c8 = 0;
  local_c8[1] = 0x10000;
  local_c8[3] = 0;
  local_c8[4] = 0;
  local_c8[2] = 0;
  local_158 = *(char **)(param_2 + 0x28);
  if (-1 < *(char *)(param_2 + 0x3f)) {
    local_158 = (char *)(param_2 + 0x28);
  }
  pcStack_150 = local_158;
  local_c0 = local_c8;
  FUN_1000f7bd0(&local_e0,&local_158);
  if ((local_88 != 0) || (local_d0 != 3)) goto LAB_1000fcd38;
  lVar3 = FUN_1000e86c0(&local_e0,"systemActive");
  if (local_e0 + (local_d8 & 0xffffffff) * 0x30 == lVar3) {
LAB_1000fbda4:
    bVar1 = false;
  }
  else {
    local_148 = 0x100005;
    local_158 = "systemActive";
    pcStack_150 = (char *)0xc;
    lVar3 = FUN_1000e87dc(&local_e0,&local_158);
    if ((*(byte *)(lVar3 + 0x11) & 1) == 0) goto LAB_1000fbda4;
    local_148 = 0x100005;
    local_158 = "systemActive";
    pcStack_150 = (char *)0xc;
    lVar3 = FUN_1000e87dc(&local_e0,&local_158);
    bVar1 = *(int *)(lVar3 + 0x10) == 0x102;
  }
  *(bool *)(param_1 + 0x2c0) = bVar1;
  lVar3 = FUN_1000e86c0(&local_e0,"seasonalBundles");
  if (local_e0 + (local_d8 & 0xffffffff) * 0x30 != lVar3) {
    local_148 = 0x100005;
    local_158 = "seasonalBundles";
    pcStack_150 = (char *)0xf;
    lVar3 = FUN_1000e87dc(&local_e0,&local_158);
    if (*(int *)(lVar3 + 0x10) == 4) {
      local_148 = 0x100005;
      local_158 = "seasonalBundles";
      pcStack_150 = (char *)0xf;
      plVar4 = (long *)FUN_1000e87dc(&local_e0,&local_158);
      uVar2 = *(uint *)(plVar4 + 1);
      if (uVar2 != 0) {
        if (*(int *)(*plVar4 + 0x10) != 0) {
          FUN_1000e8538(*plVar4,param_1 + 0xb8);
          uVar2 = *(uint *)(plVar4 + 1);
        }
        if ((1 < uVar2) && (*(int *)(*plVar4 + 0x28) != 0)) {
          FUN_1000e8538(*plVar4 + 0x18,param_1 + 0x100);
        }
      }
    }
  }
  lVar3 = FUN_1000e86c0(&local_e0,"seasonalChestExchanges");
  if (local_e0 + (local_d8 & 0xffffffff) * 0x30 != lVar3) {
    local_148 = 0x100005;
    local_158 = "seasonalChestExchanges";
    pcStack_150 = (char *)0x16;
    lVar3 = FUN_1000e87dc(&local_e0,&local_158);
    if (*(int *)(lVar3 + 0x10) == 4) {
      local_148 = 0x100005;
      local_158 = "seasonalChestExchanges";
      pcStack_150 = (char *)0x16;
      plVar4 = (long *)FUN_1000e87dc(&local_e0,&local_158);
      uVar2 = *(uint *)(plVar4 + 1);
      if (uVar2 != 0) {
        if (*(int *)(*plVar4 + 0x10) != 0) {
          FUN_1000e8538(*plVar4,param_1 + 0x148);
          uVar2 = *(uint *)(plVar4 + 1);
        }
        if ((1 < uVar2) && (*(int *)(*plVar4 + 0x10) != 0)) {
          FUN_1000e8538(*plVar4 + 0x18,param_1 + 400);
        }
      }
    }
  }
  lVar3 = FUN_1000e86c0(&local_e0,"rankModels");
  if (local_e0 + (local_d8 & 0xffffffff) * 0x30 != lVar3) {
    local_148 = 0x100005;
    local_158 = "rankModels";
    pcStack_150 = (char *)0xa;
    lVar3 = FUN_1000e87dc(&local_e0,&local_158);
    if (*(int *)(lVar3 + 0x10) == 4) {
      local_148 = 0x100005;
      local_158 = "rankModels";
      pcStack_150 = (char *)0xa;
      plVar4 = (long *)FUN_1000e87dc(&local_e0,&local_158);
      if ((int)plVar4[1] != 0) {
        plVar11 = (long *)*plVar4;
        pcVar6 = "";
        do {
          lVar3 = FUN_1000e86c0(plVar11,"seasonId");
          if (*plVar11 + (ulong)*(uint *)(plVar11 + 1) * 0x30 == lVar3) {
            pcVar5 = "";
          }
          else {
            local_148 = 0x100005;
            local_158 = "seasonId";
            pcStack_150 = (char *)0x8;
            lVar3 = FUN_1000e87dc(plVar11,&local_158);
            pcVar5 = pcVar6;
            if ((*(byte *)(lVar3 + 0x12) >> 4 & 1) != 0) {
              local_148 = 0x100005;
              local_158 = "seasonId";
              pcStack_150 = (char *)0x8;
              pcVar5 = (char *)FUN_1000e87dc(plVar11,&local_158);
              if (((byte)pcVar5[0x12] >> 6 & 1) == 0) {
                pcVar5 = *(char **)pcVar5;
              }
            }
          }
          FUN_10001549c(local_170,pcVar5);
          lVar3 = FUN_1000e86c0(plVar11,"dailyChestHashedSku");
          if (*plVar11 + (ulong)*(uint *)(plVar11 + 1) * 0x30 == lVar3) {
            pcVar5 = "";
          }
          else {
            local_148 = 0x100005;
            local_158 = "dailyChestHashedSku";
            pcStack_150 = (char *)0x13;
            lVar3 = FUN_1000e87dc(plVar11,&local_158);
            pcVar5 = pcVar6;
            if ((*(byte *)(lVar3 + 0x12) >> 4 & 1) != 0) {
              local_148 = 0x100005;
              local_158 = "dailyChestHashedSku";
              pcStack_150 = (char *)0x13;
              pcVar5 = (char *)FUN_1000e87dc(plVar11,&local_158);
              if (((byte)pcVar5[0x12] >> 6 & 1) == 0) {
                pcVar5 = *(char **)pcVar5;
              }
            }
          }
          FUN_10001549c(local_188,pcVar5);
          lVar3 = FUN_1000e86c0(plVar11,"rankUpChestHashedSku");
          if (*plVar11 + (ulong)*(uint *)(plVar11 + 1) * 0x30 == lVar3) {
            pcVar5 = "";
          }
          else {
            local_148 = 0x100005;
            local_158 = "rankUpChestHashedSku";
            pcStack_150 = (char *)0x14;
            lVar3 = FUN_1000e87dc(plVar11,&local_158);
            pcVar5 = pcVar6;
            if ((*(byte *)(lVar3 + 0x12) >> 4 & 1) != 0) {
              local_148 = 0x100005;
              local_158 = "rankUpChestHashedSku";
              pcStack_150 = (char *)0x14;
              pcVar5 = (char *)FUN_1000e87dc(plVar11,&local_158);
              if (((byte)pcVar5[0x12] >> 6 & 1) == 0) {
                pcVar5 = *(char **)pcVar5;
              }
            }
          }
          FUN_10001549c(local_1a0,pcVar5);
          lVar3 = FUN_1000e86c0(plVar11,"battlePassRankUpChestHashedSku");
          if (*plVar11 + (ulong)*(uint *)(plVar11 + 1) * 0x30 == lVar3) {
            pcVar5 = "";
          }
          else {
            local_148 = 0x100005;
            local_158 = "battlePassRankUpChestHashedSku";
            pcStack_150 = (char *)0x1e;
            lVar3 = FUN_1000e87dc(plVar11,&local_158);
            pcVar5 = pcVar6;
            if ((*(byte *)(lVar3 + 0x12) >> 4 & 1) != 0) {
              local_148 = 0x100005;
              local_158 = "battlePassRankUpChestHashedSku";
              pcStack_150 = (char *)0x1e;
              pcVar5 = (char *)FUN_1000e87dc(plVar11,&local_158);
              if (((byte)pcVar5[0x12] >> 6 & 1) == 0) {
                pcVar5 = *(char **)pcVar5;
              }
            }
          }
          FUN_10001549c(local_1b8,pcVar5);
          lVar3 = FUN_1000e86c0(plVar11,"rank");
          if (*plVar11 + (ulong)*(uint *)(plVar11 + 1) * 0x30 == lVar3) {
LAB_1000fc238:
            uVar14 = 0;
          }
          else {
            local_148 = 0x100005;
            local_158 = "rank";
            pcStack_150 = (char *)0x4;
            lVar3 = FUN_1000e87dc(plVar11,&local_158);
            if ((*(byte *)(lVar3 + 0x11) >> 2 & 1) == 0) goto LAB_1000fc238;
            local_148 = 0x100005;
            local_158 = "rank";
            pcStack_150 = (char *)0x4;
            puVar8 = (undefined4 *)FUN_1000e87dc(plVar11,&local_158);
            uVar14 = *puVar8;
          }
          lVar3 = FUN_1000e86c0(plVar11,"previousMaxTokens");
          if (*plVar11 + (ulong)*(uint *)(plVar11 + 1) * 0x30 == lVar3) {
LAB_1000fc2a0:
            uVar15 = 0;
          }
          else {
            local_148 = 0x100005;
            local_158 = "previousMaxTokens";
            pcStack_150 = (char *)0x11;
            lVar3 = FUN_1000e87dc(plVar11,&local_158);
            if ((*(byte *)(lVar3 + 0x11) >> 2 & 1) == 0) goto LAB_1000fc2a0;
            local_148 = 0x100005;
            local_158 = "previousMaxTokens";
            pcStack_150 = (char *)0x11;
            puVar8 = (undefined4 *)FUN_1000e87dc(plVar11,&local_158);
            uVar15 = *puVar8;
          }
          lVar3 = FUN_1000e86c0(plVar11,"maxTokens");
          if (*plVar11 + (ulong)*(uint *)(plVar11 + 1) * 0x30 == lVar3) {
LAB_1000fc304:
            uVar16 = 0;
          }
          else {
            local_148 = 0x100005;
            local_158 = "maxTokens";
            pcStack_150 = (char *)0x9;
            lVar3 = FUN_1000e87dc(plVar11,&local_158);
            if ((*(byte *)(lVar3 + 0x11) >> 2 & 1) == 0) goto LAB_1000fc304;
            local_148 = 0x100005;
            local_158 = "maxTokens";
            pcStack_150 = (char *)0x9;
            puVar8 = (undefined4 *)FUN_1000e87dc(plVar11,&local_158);
            uVar16 = *puVar8;
          }
          lVar3 = FUN_1000e86c0(plVar11,"maxPips");
          if (*plVar11 + (ulong)*(uint *)(plVar11 + 1) * 0x30 == lVar3) {
LAB_1000fc368:
            uVar12 = 0;
          }
          else {
            local_148 = 0x100005;
            local_158 = "maxPips";
            pcStack_150 = (char *)0x7;
            lVar3 = FUN_1000e87dc(plVar11,&local_158);
            if ((*(byte *)(lVar3 + 0x11) >> 2 & 1) == 0) goto LAB_1000fc368;
            local_148 = 0x100005;
            local_158 = "maxPips";
            pcStack_150 = (char *)0x7;
            puVar8 = (undefined4 *)FUN_1000e87dc(plVar11,&local_158);
            uVar12 = *puVar8;
          }
          lVar3 = FUN_1000e86c0(plVar11,"numClaimableRankUpChests");
          if (*plVar11 + (ulong)*(uint *)(plVar11 + 1) * 0x30 != lVar3) {
            local_148 = 0x100005;
            local_158 = "numClaimableRankUpChests";
            pcStack_150 = (char *)0x18;
            lVar3 = FUN_1000e87dc(plVar11,&local_158);
            if ((*(byte *)(lVar3 + 0x11) >> 2 & 1) != 0) {
              local_148 = 0x100005;
              local_158 = "numClaimableRankUpChests";
              pcStack_150 = (char *)0x18;
              FUN_1000e87dc(plVar11,&local_158);
            }
          }
          FUN_1003125e0(&local_158,local_170,local_188,local_1a0,local_1b8,uVar14,uVar15,uVar16,
                        uVar12);
          FUN_1000fcd80(param_1 + 0x98,&local_158);
          if (local_f9 < '\0') {
            operator_delete(local_110);
          }
          if (local_111 < '\0') {
            operator_delete(local_128);
          }
          if (local_129 < '\0') {
            operator_delete(local_140);
          }
          if (local_141 < '\0') {
            operator_delete(local_158);
          }
          if (local_1a1 < '\0') {
            operator_delete(local_1b8[0]);
          }
          if (local_189 < '\0') {
            operator_delete(local_1a0[0]);
          }
          if (local_171 < '\0') {
            operator_delete(local_188[0]);
          }
          if (local_159 < '\0') {
            operator_delete(local_170[0]);
          }
          plVar11 = plVar11 + 3;
        } while (plVar11 != (long *)(*plVar4 + (ulong)*(uint *)(plVar4 + 1) * 0x18));
      }
    }
  }
  lVar3 = FUN_1000e86c0(&local_e0,"seasonModels");
  if (local_e0 + (local_d8 & 0xffffffff) * 0x30 != lVar3) {
    local_148 = 0x100005;
    local_158 = "seasonModels";
    pcStack_150 = (char *)0xc;
    lVar3 = FUN_1000e87dc(&local_e0,&local_158);
    if (*(int *)(lVar3 + 0x10) == 4) {
      local_148 = 0x100005;
      local_158 = "seasonModels";
      pcStack_150 = (char *)0xc;
      plVar4 = (long *)FUN_1000e87dc(&local_e0,&local_158);
      if ((int)plVar4[1] != 0) {
        plVar11 = (long *)*plVar4;
        do {
          lVar3 = FUN_1000e86c0(plVar11,"id");
          if (*plVar11 + (ulong)*(uint *)(plVar11 + 1) * 0x30 == lVar3) {
            pcVar6 = "";
          }
          else {
            local_148 = 0x100005;
            local_158 = "id";
            pcStack_150 = (char *)0x2;
            lVar3 = FUN_1000e87dc(plVar11,&local_158);
            pcVar6 = "";
            if ((*(byte *)(lVar3 + 0x12) >> 4 & 1) != 0) {
              local_148 = 0x100005;
              local_158 = "id";
              pcStack_150 = (char *)0x2;
              pcVar6 = (char *)FUN_1000e87dc(plVar11,&local_158);
              if (((byte)pcVar6[0x12] >> 6 & 1) == 0) {
                pcVar6 = *(char **)pcVar6;
              }
            }
          }
          FUN_10001549c(local_1d0,pcVar6);
          lVar3 = FUN_1000e86c0(plVar11,"tokenId");
          if (*plVar11 + (ulong)*(uint *)(plVar11 + 1) * 0x30 == lVar3) {
            pcVar6 = "";
          }
          else {
            local_148 = 0x100005;
            local_158 = "tokenId";
            pcStack_150 = (char *)0x7;
            lVar3 = FUN_1000e87dc(plVar11,&local_158);
            pcVar6 = "";
            if ((*(byte *)(lVar3 + 0x12) >> 4 & 1) != 0) {
              local_148 = 0x100005;
              local_158 = "tokenId";
              pcStack_150 = (char *)0x7;
              pcVar6 = (char *)FUN_1000e87dc(plVar11,&local_158);
              if (((byte)pcVar6[0x12] >> 6 & 1) == 0) {
                pcVar6 = *(char **)pcVar6;
              }
            }
          }
          FUN_10001549c(local_1e8,pcVar6);
          lVar3 = FUN_1000e86c0(plVar11,"tokensPerPip");
          if (*plVar11 + (ulong)*(uint *)(plVar11 + 1) * 0x30 == lVar3) {
LAB_1000fc6e0:
            uVar14 = 0;
          }
          else {
            local_148 = 0x100005;
            local_158 = "tokensPerPip";
            pcStack_150 = (char *)0xc;
            lVar3 = FUN_1000e87dc(plVar11,&local_158);
            if ((*(byte *)(lVar3 + 0x11) >> 2 & 1) == 0) goto LAB_1000fc6e0;
            local_148 = 0x100005;
            local_158 = "tokensPerPip";
            pcStack_150 = (char *)0xc;
            puVar8 = (undefined4 *)FUN_1000e87dc(plVar11,&local_158);
            uVar14 = *puVar8;
          }
          lVar3 = FUN_1000e86c0(plVar11,"currentSeason");
          if (*plVar11 + (ulong)*(uint *)(plVar11 + 1) * 0x30 == lVar3) {
            bVar1 = false;
          }
          else {
            local_148 = 0x100005;
            local_158 = "currentSeason";
            pcStack_150 = (char *)0xd;
            lVar3 = FUN_1000e87dc(plVar11,&local_158);
            if ((*(byte *)(lVar3 + 0x11) & 1) == 0) {
              bVar1 = false;
            }
            else {
              local_148 = 0x100005;
              local_158 = "currentSeason";
              pcStack_150 = (char *)0xd;
              lVar3 = FUN_1000e87dc(plVar11,&local_158);
              bVar1 = *(int *)(lVar3 + 0x10) == 0x102;
            }
          }
          FUN_1003125ec(&local_158,local_1d0,local_1e8,uVar14,bVar1);
          FUN_1000fce3c(param_1 + 0xa8,&local_158);
          if (local_111 < '\0') {
            operator_delete(local_128);
          }
          if (local_129 < '\0') {
            operator_delete(local_140);
          }
          if (local_141 < '\0') {
            operator_delete(local_158);
          }
          if (local_1d1 < '\0') {
            operator_delete(local_1e8[0]);
          }
          if (local_1b9 < '\0') {
            operator_delete(local_1d0[0]);
          }
          plVar11 = plVar11 + 3;
        } while (plVar11 != (long *)(*plVar4 + (ulong)*(uint *)(plVar4 + 1) * 0x18));
      }
    }
  }
  lVar3 = FUN_1000e86c0(&local_e0,"playerAscensionData");
  if (local_e0 + (local_d8 & 0xffffffff) * 0x30 != lVar3) {
    local_148 = 0x100005;
    local_158 = "playerAscensionData";
    pcStack_150 = (char *)0x13;
    lVar3 = FUN_1000e87dc(&local_e0,&local_158);
    if (*(int *)(lVar3 + 0x10) == 3) {
      local_148 = 0x100005;
      local_158 = "playerAscensionData";
      pcStack_150 = (char *)0x13;
      plVar4 = (long *)FUN_1000e87dc(&local_e0,&local_158);
      lVar3 = param_1 + 0x30;
      FUN_1003126a0(lVar3);
      lVar7 = FUN_1000e86c0(plVar4,"rewardCollectInterval");
      if (*plVar4 + (ulong)*(uint *)(plVar4 + 1) * 0x30 == lVar7) {
LAB_1000fc8d0:
        uVar14 = 0;
      }
      else {
        local_148 = 0x100005;
        local_158 = "rewardCollectInterval";
        pcStack_150 = (char *)0x15;
        lVar7 = FUN_1000e87dc(plVar4,&local_158);
        if ((*(byte *)(lVar7 + 0x11) >> 2 & 1) == 0) goto LAB_1000fc8d0;
        local_148 = 0x100005;
        local_158 = "rewardCollectInterval";
        pcStack_150 = (char *)0x15;
        puVar8 = (undefined4 *)FUN_1000e87dc(plVar4,&local_158);
        uVar14 = *puVar8;
      }
      *(undefined4 *)(param_1 + 0x80) = uVar14;
      lVar7 = FUN_1000e86c0(plVar4,"lastRewardCollectTime");
      dVar18 = 0.0;
      if (*plVar4 + (ulong)*(uint *)(plVar4 + 1) * 0x30 != lVar7) {
        local_148 = 0x100005;
        local_158 = "lastRewardCollectTime";
        pcStack_150 = (char *)0x15;
        lVar7 = FUN_1000e87dc(plVar4,&local_158);
        if ((*(byte *)(lVar7 + 0x11) >> 1 & 1) != 0) {
          local_148 = 0x100005;
          local_158 = "lastRewardCollectTime";
          pcStack_150 = (char *)0x15;
          FUN_1000e87dc(plVar4,&local_158);
          FUN_1000fceec();
          dVar18 = (double)CONCAT17(extraout_var_11,
                                    CONCAT16(extraout_var_09,
                                             CONCAT15(extraout_var_07,
                                                      CONCAT14(extraout_var_05,
                                                               CONCAT13(extraout_var_03,
                                                                        CONCAT12(extraout_var_01,
                                                                                 CONCAT11(
                                                  extraout_var,extraout_b0)))))));
        }
      }
      *(long *)(param_1 + 0x88) = (long)dVar18;
      lVar7 = FUN_1000e86c0(plVar4,"canCollectEndSeasonChest");
      if (*plVar4 + (ulong)*(uint *)(plVar4 + 1) * 0x30 == lVar7) {
LAB_1000fc9bc:
        bVar1 = false;
      }
      else {
        local_148 = 0x100005;
        local_158 = "canCollectEndSeasonChest";
        pcStack_150 = (char *)0x18;
        lVar7 = FUN_1000e87dc(plVar4,&local_158);
        if ((*(byte *)(lVar7 + 0x11) & 1) == 0) goto LAB_1000fc9bc;
        local_148 = 0x100005;
        local_158 = "canCollectEndSeasonChest";
        pcStack_150 = (char *)0x18;
        lVar7 = FUN_1000e87dc(plVar4,&local_158);
        bVar1 = *(int *)(lVar7 + 0x10) == 0x102;
      }
      *(bool *)(param_1 + 0x90) = bVar1;
      lVar7 = FUN_1000e86c0(plVar4,"seasonTokenMap");
      if (*plVar4 + (ulong)*(uint *)(plVar4 + 1) * 0x30 != lVar7) {
        local_148 = 0x100005;
        local_158 = "seasonTokenMap";
        pcStack_150 = (char *)0xe;
        lVar7 = FUN_1000e87dc(plVar4,&local_158);
        if (*(int *)(lVar7 + 0x10) == 3) {
          local_148 = 0x100005;
          local_158 = "seasonTokenMap";
          pcStack_150 = (char *)0xe;
          plVar11 = (long *)FUN_1000e87dc(plVar4,&local_158);
          if ((int)plVar11[1] != 0) {
            puVar13 = (undefined8 *)*plVar11;
            do {
              FUN_1000fceec(puVar13 + 3);
              puVar10 = puVar13;
              if ((*(byte *)((long)puVar13 + 0x12) >> 6 & 1) == 0) {
                puVar10 = (undefined8 *)*puVar13;
              }
              FUN_10001549c(local_200,puVar10);
              FUN_10031273c(lVar3,local_200,
                            (int)(double)CONCAT17(extraout_var_12,
                                                  CONCAT16(extraout_var_10,
                                                           CONCAT15(extraout_var_08,
                                                                    CONCAT14(extraout_var_06,
                                                                             CONCAT13(
                                                  extraout_var_04,
                                                  CONCAT12(extraout_var_02,
                                                           CONCAT11(extraout_var_00,extraout_b0_00))
                                                  ))))));
              if (local_1e9 < '\0') {
                operator_delete(local_200[0]);
              }
              puVar13 = puVar13 + 6;
            } while (puVar13 != (undefined8 *)(*plVar11 + (ulong)*(uint *)(plVar11 + 1) * 0x30));
          }
        }
      }
      lVar7 = FUN_1000e86c0(plVar4,"seasonRankCollectedMap");
      if (*plVar4 + (ulong)*(uint *)(plVar4 + 1) * 0x30 != lVar7) {
        local_148 = 0x100005;
        local_158 = "seasonRankCollectedMap";
        pcStack_150 = (char *)0x16;
        lVar7 = FUN_1000e87dc(plVar4,&local_158);
        if (*(int *)(lVar7 + 0x10) == 3) {
          local_148 = 0x100005;
          local_158 = "seasonRankCollectedMap";
          pcStack_150 = (char *)0x16;
          plVar11 = (long *)FUN_1000e87dc(plVar4,&local_158);
          if ((int)plVar11[1] != 0) {
            puVar13 = (undefined8 *)*plVar11;
            do {
              if ((*(byte *)((long)puVar13 + 0x29) >> 2 & 1) == 0) {
                uVar14 = 0;
              }
              else {
                uVar14 = *(undefined4 *)(puVar13 + 3);
              }
              puVar10 = puVar13;
              if ((*(byte *)((long)puVar13 + 0x12) >> 6 & 1) == 0) {
                puVar10 = (undefined8 *)*puVar13;
              }
              FUN_10001549c(local_218,puVar10);
              FUN_100312ac8(lVar3,local_218,uVar14,1);
              if (local_201 < '\0') {
                operator_delete(local_218[0]);
              }
              puVar13 = puVar13 + 6;
            } while (puVar13 != (undefined8 *)(*plVar11 + (ulong)*(uint *)(plVar11 + 1) * 0x30));
          }
        }
      }
      lVar7 = FUN_1000e86c0(plVar4,"seasonBattlePassRankCollectedMap");
      if (*plVar4 + (ulong)*(uint *)(plVar4 + 1) * 0x30 != lVar7) {
        local_148 = 0x100005;
        local_158 = "seasonBattlePassRankCollectedMap";
        pcStack_150 = (char *)0x20;
        lVar7 = FUN_1000e87dc(plVar4,&local_158);
        if (*(int *)(lVar7 + 0x10) == 3) {
          local_148 = 0x100005;
          local_158 = "seasonBattlePassRankCollectedMap";
          pcStack_150 = (char *)0x20;
          plVar4 = (long *)FUN_1000e87dc(plVar4,&local_158);
          if ((int)plVar4[1] != 0) {
            puVar13 = (undefined8 *)*plVar4;
            do {
              if ((*(byte *)((long)puVar13 + 0x29) >> 2 & 1) == 0) {
                uVar14 = 0;
              }
              else {
                uVar14 = *(undefined4 *)(puVar13 + 3);
              }
              puVar10 = puVar13;
              if ((*(byte *)((long)puVar13 + 0x12) >> 6 & 1) == 0) {
                puVar10 = (undefined8 *)*puVar13;
              }
              FUN_10001549c(local_230,puVar10);
              FUN_100312ac8(lVar3,local_230,uVar14,0);
              if (local_219 < '\0') {
                operator_delete(local_230[0]);
              }
              puVar13 = puVar13 + 6;
            } while (puVar13 != (undefined8 *)(*plVar4 + (ulong)*(uint *)(plVar4 + 1) * 0x30));
          }
        }
      }
      FUN_100312cc4(lVar3);
    }
  }
  if ((*(int *)(param_1 + 0x98) != 0) && (*(long *)(param_1 + 0xa0) != 0)) {
    FUN_100102240("ascensionRank",*(undefined4 *)(*(long *)(param_1 + 0xa0) + 0x60),1);
  }
  if (((*(int *)(param_1 + 0xa8) != 0) &&
      (lVar3 = *(long *)(param_1 + 0xb0), *(char *)(lVar3 + 0x4c) != '\0')) &&
     (*(int *)(lVar3 + 0x48) != 0)) {
    uVar2 = FUN_100312a64(param_1 + 0x30);
    fVar17 = (float)NEON_ucvtf(*(undefined4 *)(lVar3 + 0x48));
    FUN_10010226c(SUB41((float)uVar2 / fVar17,0),"ascensionTokens",0);
  }
  if (*(int *)(param_1 + 0x1e8) != 0) {
    lVar3 = *(long *)(param_1 + 0x1f0);
    do {
      if (*(code **)(lVar3 + 8) == (code *)0x0) {
        (**(code **)(lVar3 + 0x18))(*(undefined8 *)(lVar3 + 0x10));
      }
      else {
        (**(code **)(lVar3 + 8))();
      }
      lVar3 = lVar3 + 0x20;
    } while (lVar3 != *(long *)(param_1 + 0x1f0) + (ulong)*(uint *)(param_1 + 0x1e8) * 0x20);
  }
LAB_1000fcd38:
  if (local_c0 != (undefined8 *)0x0) {
    pvVar9 = (void *)FUN_1000f7b54();
    operator_delete(pvVar9);
  }
  _free(local_a8);
  if (pvStack_b0 != (void *)0x0) {
    operator_delete(pvStack_b0);
  }
  return;
}




void FUN_1000fcd80(uint *param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar3 = *param_1;
  if (uVar3 == param_1[1]) {
    uVar1 = 0;
    if (uVar3 != 0xffffffff) {
      uVar1 = uVar3 + (~uVar3 | 0xfffffff0) + 0x11;
    }
    if (uVar3 < 0x20) {
      uVar1 = uVar3 << 1;
    }
    uVar2 = uVar3 + 1;
    if (uVar3 + 1 <= uVar1) {
      uVar2 = uVar1;
    }
    FUN_1000fd964(param_1,uVar2);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  lVar4 = *(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 0x78;
  FUN_10003330c(lVar4 + -0x78,param_2);
  FUN_10003330c(lVar4 + -0x60,param_2 + 0x18);
  FUN_10003330c(lVar4 + -0x48,param_2 + 0x30);
  FUN_10003330c(lVar4 + -0x30,param_2 + 0x48);
  uVar6 = *(undefined8 *)(param_2 + 0x68);
  uVar5 = *(undefined8 *)(param_2 + 0x60);
  *(undefined4 *)(lVar4 + -8) = *(undefined4 *)(param_2 + 0x70);
  *(undefined8 *)(lVar4 + -0x10) = uVar6;
  *(undefined8 *)(lVar4 + -0x18) = uVar5;
  return;
}




void FUN_1000fce3c(uint *param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  long lVar5;
  
  uVar4 = *param_1;
  if (uVar4 == param_1[1]) {
    uVar1 = 0;
    if (uVar4 != 0xffffffff) {
      uVar1 = uVar4 + (~uVar4 | 0xfffffff0) + 0x11;
    }
    if (uVar4 < 0x20) {
      uVar1 = uVar4 << 1;
    }
    uVar2 = uVar4 + 1;
    if (uVar4 + 1 <= uVar1) {
      uVar2 = uVar1;
    }
    FUN_1000fdaac(param_1,uVar2);
    uVar4 = *param_1;
  }
  *param_1 = uVar4 + 1;
  lVar5 = *(long *)(param_1 + 2) + (ulong)(uVar4 + 1) * 0x50;
  FUN_10003330c(lVar5 + -0x50,param_2);
  FUN_10003330c(lVar5 + -0x38,param_2 + 0x18);
  FUN_10003330c(lVar5 + -0x20,param_2 + 0x30);
  uVar3 = *(undefined4 *)(param_2 + 0x48);
  *(undefined1 *)(lVar5 + -4) = *(undefined1 *)(param_2 + 0x4c);
  *(undefined4 *)(lVar5 + -8) = uVar3;
  return;
}




undefined1  [16] FUN_1000fceec(ulong *param_1)

{
  uint uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  uVar1 = (uint)param_1[2];
  if ((uVar1 >> 0xe & 1) != 0) {
    auVar3._0_8_ = *param_1;
    auVar3._8_8_ = 0;
    return auVar3;
  }
  if ((uVar1 >> 10 & 1) != 0) {
    auVar4._0_8_ = (double)(int)*param_1;
    auVar4._8_8_ = 0;
    return auVar4;
  }
  if ((uVar1 >> 0xb & 1) != 0) {
    auVar5._0_8_ = NEON_ucvtf((ulong)(uint)*param_1);
    auVar5._8_8_ = 0;
    return auVar5;
  }
  if ((uVar1 >> 0xc & 1) == 0) {
    auVar2._0_8_ = (double)*param_1;
    auVar2._8_8_ = 0;
    return auVar2;
  }
  auVar6._0_8_ = (double)(long)*param_1;
  auVar6._8_8_ = 0;
  return auVar6;
}




void FUN_1000fcf34(long param_1,long param_2)

{
  void *local_48 [2];
  char local_31;
  
  FUN_10003330c(local_48,param_2 + 0x28);
  FUN_1000fcfa8(param_1,param_1 + 0x1f8,local_48,*(undefined1 *)(param_2 + 0x25),
                "Progression_Ascension_Daily_Reward_Redeemed","ascension_daily_reward");
  if (local_31 < '\0') {
    operator_delete(local_48[0]);
  }
  return;
}




void FUN_1000fcfa8(long param_1,long param_2,undefined8 *param_3,int param_4,undefined8 param_5,
                  undefined8 param_6)

{
  undefined8 **ppuVar1;
  void *pvVar2;
  long lVar3;
  undefined4 uVar4;
  string *psVar5;
  undefined8 *local_e0;
  undefined8 *puStack_d8;
  char local_c9;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  int local_a8;
  undefined8 *local_a0;
  undefined8 *local_98;
  undefined8 local_90;
  void *pvStack_88;
  void *local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  int local_60;
  undefined8 local_58;
  
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0;
  pvStack_88 = (void *)0x0;
  local_90 = 0;
  uStack_78 = 0;
  local_80 = (void *)0x0;
  local_70 = 0;
  uStack_68 = 0x400;
  local_60 = 0;
  local_58 = 0;
  local_a0 = operator_new(0x28);
  *local_a0 = 0;
  local_a0[1] = 0x10000;
  local_a0[3] = 0;
  local_a0[4] = 0;
  local_a0[2] = 0;
  if (*(char *)((long)param_3 + 0x17) < '\0') {
    param_3 = (undefined8 *)*param_3;
  }
  local_e0 = param_3;
  puStack_d8 = param_3;
  local_98 = local_a0;
  FUN_1000f7bd0(&local_b8,&local_e0);
  if (((param_4 == 0) || (local_60 != 0)) || (local_a8 != 4)) {
    (**(code **)(param_2 + 0x20))();
    FUN_1000fd524(param_2);
    goto LAB_1000fd178;
  }
  local_c8 = 0;
  uStack_c0 = 0;
  FUN_1000ebc54(&local_b8,&local_c8);
  if (*(int *)(param_1 + 0x98) == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = *(long *)(param_1 + 0xa0);
  }
  if (*(int *)(param_1 + 0xa8) == 0) {
    psVar5 = (string *)0x0;
    if (lVar3 == 0) goto LAB_1000fd0b0;
LAB_1000fd0a0:
    uVar4 = *(undefined4 *)(lVar3 + 0x60);
  }
  else {
    psVar5 = (string *)0x0;
    if ((*(string **)(param_1 + 0xb0))[0x4c] != (string)0x0) {
      psVar5 = *(string **)(param_1 + 0xb0);
    }
    if (lVar3 != 0) goto LAB_1000fd0a0;
LAB_1000fd0b0:
    uVar4 = 0;
  }
  FUN_10001549c(&local_e0,"");
  if (psVar5 != (string *)0x0) {
    std::string::operator=((string *)&local_e0,psVar5);
  }
  ppuVar1 = (undefined8 **)local_e0;
  if (-1 < local_c9) {
    ppuVar1 = &local_e0;
  }
  FUN_100108f2c(param_5,param_6,ppuVar1,uVar4,&local_c8);
  (**(code **)(param_2 + 0x18))(&local_c8);
  FUN_1000fd524(param_2);
  FUN_1000fb8e0();
  lVar3 = FUN_10015d3ec();
  FUN_100169cec(lVar3 + 0x18);
  if (*(int *)(param_1 + 0x1d8) != 0) {
    lVar3 = *(long *)(param_1 + 0x1e0);
    do {
      if (*(code **)(lVar3 + 8) == (code *)0x0) {
        (**(code **)(lVar3 + 0x18))(*(undefined8 *)(lVar3 + 0x10));
      }
      else {
        (**(code **)(lVar3 + 8))();
      }
      lVar3 = lVar3 + 0x20;
    } while (lVar3 != *(long *)(param_1 + 0x1e0) + (ulong)*(uint *)(param_1 + 0x1d8) * 0x20);
  }
  if (local_c9 < '\0') {
    operator_delete(local_e0);
  }
  FUN_1000ec1cc(&local_c8,1);
LAB_1000fd178:
  if (local_98 != (undefined8 *)0x0) {
    pvVar2 = (void *)FUN_1000f7b54();
    operator_delete(pvVar2);
  }
  _free(local_80);
  if (pvStack_88 != (void *)0x0) {
    operator_delete(pvStack_88);
  }
  return;
}




void FUN_1000fd1b8(long param_1,long param_2)

{
  void *local_48 [2];
  char local_31;
  
  FUN_10003330c(local_48,param_2 + 0x28);
  FUN_1000fcfa8(param_1,param_1 + 0x220,local_48,*(undefined1 *)(param_2 + 0x25),
                "Progression_Ascension_RankUp_Reward_Redeemed","ascension_rankup_reward");
  if (local_31 < '\0') {
    operator_delete(local_48[0]);
  }
  return;
}




void FUN_1000fd22c(long param_1,long param_2)

{
  void *local_48 [2];
  char local_31;
  
  FUN_10003330c(local_48,param_2 + 0x28);
  FUN_1000fcfa8(param_1,param_1 + 0x248,local_48,*(undefined1 *)(param_2 + 0x25),
                "Progression_Ascension_SeasonEnd_Reward_Redeemed","ascension_season_end_reward");
  if (local_31 < '\0') {
    operator_delete(local_48[0]);
  }
  return;
}




void FUN_1000fd2a0(long param_1,long param_2)

{
  void *local_48 [2];
  char local_31;
  
  FUN_10003330c(local_48,param_2 + 0x28);
  FUN_1000fcfa8(param_1,param_1 + 0x270,local_48,*(undefined1 *)(param_2 + 0x25),
                "Progression_Ascension_Seasonal_Reward_Redeemed","ascension_seasonal_reward");
  if (local_31 < '\0') {
    operator_delete(local_48[0]);
  }
  return;
}




void FUN_1000fd314(long param_1,long param_2)

{
  undefined8 *puVar1;
  size_t sVar2;
  size_t sVar3;
  undefined8 *puVar4;
  byte bVar5;
  byte bVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  byte *pbVar10;
  byte *pbVar11;
  ulong uVar12;
  
  if (*(char *)(param_2 + 0x25) == '\0') {
    (**(code **)(param_1 + 0x2b8))();
    goto LAB_1000fd4a4;
  }
  puVar1 = (undefined8 *)(param_1 + 0x298);
  (**(code **)(param_1 + 0x2b0))();
  bVar6 = *(byte *)(param_1 + 0x2af);
  uVar12 = (ulong)bVar6;
  sVar2 = *(size_t *)(param_1 + 0x2a0);
  if (-1 < (char)bVar6) {
    sVar2 = uVar12;
  }
  sVar3 = DAT_101dc73e8;
  if (-1 < (char)DAT_101dc73f7) {
    sVar3 = (ulong)DAT_101dc73f7;
  }
  if (sVar2 == sVar3) {
    puVar4 = (void *)*puVar1;
    if (-1 < (char)bVar6) {
      puVar4 = puVar1;
    }
    pbVar11 = DAT_101dc73e0;
    if (-1 < (char)DAT_101dc73f7) {
      pbVar11 = (byte *)&DAT_101dc73e0;
    }
    if ((char)bVar6 < '\0') {
      if ((sVar2 != 0) && (iVar7 = _memcmp(puVar4,pbVar11,sVar2), iVar7 != 0)) goto LAB_1000fd3f0;
    }
    else if (sVar2 != 0) {
      if ((uint)*pbVar11 == ((uint)(void *)*puVar1 & 0xff)) {
        pbVar10 = (byte *)(param_1 + 0x299);
        uVar9 = uVar12;
        do {
          uVar9 = uVar9 - 1;
          pbVar11 = pbVar11 + 1;
          if (uVar9 == 0) goto LAB_1000fd474;
          bVar5 = *pbVar10;
          pbVar10 = pbVar10 + 1;
        } while (bVar5 == *pbVar11);
      }
      goto LAB_1000fd3f0;
    }
LAB_1000fd474:
    lVar8 = DAT_101d23080 + 0xb8;
  }
  else {
LAB_1000fd3f0:
    sVar3 = DAT_101dc7400;
    if (-1 < (char)DAT_101dc740f) {
      sVar3 = (ulong)DAT_101dc740f;
    }
    if (sVar2 != sVar3) goto LAB_1000fd4a4;
    puVar4 = (undefined8 *)*puVar1;
    if (-1 < (char)bVar6) {
      puVar4 = puVar1;
    }
    pbVar11 = DAT_101dc73f8;
    if (-1 < (char)DAT_101dc740f) {
      pbVar11 = (byte *)&DAT_101dc73f8;
    }
    if ((char)bVar6 < '\0') {
      if ((sVar2 != 0) && (iVar7 = _memcmp(puVar4,pbVar11,sVar2), iVar7 != 0)) goto LAB_1000fd4a4;
    }
    else if (sVar2 != 0) {
      if ((uint)*pbVar11 == ((uint)(undefined8 *)*puVar1 & 0xff)) {
        pbVar10 = (byte *)(param_1 + 0x299);
        do {
          uVar12 = uVar12 - 1;
          pbVar11 = pbVar11 + 1;
          if (uVar12 == 0) goto LAB_1000fd494;
          bVar6 = *pbVar10;
          pbVar10 = pbVar10 + 1;
        } while (bVar6 == *pbVar11);
      }
      goto LAB_1000fd4a4;
    }
LAB_1000fd494:
    lVar8 = DAT_101d23080 + 0x100;
  }
  FUN_100109394(lVar8);
LAB_1000fd4a4:
  FUN_1000fd4c4(param_1 + 0x298);
  lVar8 = FUN_10015d3ec();
  FUN_100169cec(lVar8 + 0x18);
  return;
}




void FUN_1000fd4c4(string *param_1)

{
  void *local_38 [2];
  char local_21;
  
  FUN_10001549c(local_38,"");
  std::string::operator=(param_1,(string *)local_38);
  if (local_21 < '\0') {
    operator_delete(local_38[0]);
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}




void thunk_FUN_1000fbb10(void)

{
  FUN_1000fbb10();
  return;
}




void FUN_1000fd51c(long param_1)

{
  FUN_1000fbb10(param_1 + -0x18);
  return;
}




void FUN_1000fd524(string *param_1)

{
  void *local_38 [2];
  char local_21;
  
  FUN_10001549c(local_38,"");
  std::string::operator=(param_1,(string *)local_38);
  if (local_21 < '\0') {
    operator_delete(local_38[0]);
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}




void thunk_FUN_1000fb8e0(void)

{
  FUN_1000fb8e0();
  return;
}




void thunk_FUN_1000fb8e0(void)

{
  FUN_1000fb8e0();
  return;
}




void FUN_1000fd580(void)

{
  operator_new(0x2c8);
  DAT_101d23080 = FUN_1000fb908();
  return;
}




void FUN_1000fd5a4(void)

{
  if (DAT_101d23080 != (long *)0x0) {
    (**(code **)(*DAT_101d23080 + 8))();
  }
  DAT_101d23080 = (long *)0x0;
  return;
}




long FUN_1000fd5d8(void)

{
  return DAT_101d23080 + 0x1d8;
}




long FUN_1000fd5e8(void)

{
  return DAT_101d23080 + 0x1e8;
}




long FUN_1000fd5f8(void)

{
  return DAT_101d23080 + 0x30;
}




undefined8 FUN_1000fd608(void)

{
  if (*(int *)(DAT_101d23080 + 0x98) != 0) {
    return *(undefined8 *)(DAT_101d23080 + 0xa0);
  }
  return 0;
}




long FUN_1000fd628(void)

{
  long lVar1;
  
  if (*(int *)(DAT_101d23080 + 0xa8) != 0) {
    lVar1 = 0;
    if (*(char *)(*(long *)(DAT_101d23080 + 0xb0) + 0x4c) != '\0') {
      lVar1 = *(long *)(DAT_101d23080 + 0xb0);
    }
    return lVar1;
  }
  return 0;
}




long FUN_1000fd654(void)

{
  if (1 < *(uint *)(DAT_101d23080 + 0x98)) {
    return *(long *)(DAT_101d23080 + 0xa0) + 0x78;
  }
  return 0;
}




long FUN_1000fd67c(void)

{
  long lVar1;
  
  if (1 < *(uint *)(DAT_101d23080 + 0xa8)) {
    lVar1 = 0;
    if (*(char *)(*(long *)(DAT_101d23080 + 0xb0) + 0x4c) != '\0') {
      lVar1 = *(long *)(DAT_101d23080 + 0xb0) + 0x50;
    }
    return lVar1;
  }
  return 0;
}




void FUN_1000fd6b0(undefined8 param_1,undefined8 param_2)

{
  FUN_1000fba70(DAT_101d23080,param_1,param_2);
  return;
}




void thunk_FUN_1000fd73c(void)

{
  FUN_1000fd73c();
  return;
}




void FUN_1000fd6c8(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1000fd73c();
  operator_delete(pvVar1);
  return;
}




void FUN_1000fd6dc(long param_1)

{
  FUN_1000fd73c(param_1 + -0x18);
  return;
}




void FUN_1000fd6e4(long param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1000fd73c(param_1 + -0x18);
  operator_delete(pvVar1);
  return;
}




undefined8 * FUN_1000fd6fc(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_1000e7c64(param_1 + 3);
  FUN_1000e7c64(param_1 + 6);
  FUN_1000e7da4(param_1);
  return param_1;
}




void FUN_1000fd73c(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_1000fd73c_101458c48;
  param_1[3] = &PTR_FUN_101458ff0;
  if (*(char *)((long)param_1 + 0x2af) < '\0') {
    operator_delete((void *)param_1[0x53]);
  }
  if (*(char *)((long)param_1 + 0x287) < '\0') {
    operator_delete((void *)param_1[0x4e]);
  }
  if (*(char *)((long)param_1 + 0x25f) < '\0') {
    operator_delete((void *)param_1[0x49]);
  }
  if (*(char *)((long)param_1 + 0x237) < '\0') {
    operator_delete((void *)param_1[0x44]);
  }
  if (*(char *)((long)param_1 + 0x20f) < '\0') {
    operator_delete((void *)param_1[0x3f]);
  }
  if ((void *)param_1[0x3e] != (void *)0x0) {
    operator_delete__((void *)param_1[0x3e]);
    param_1[0x3d] = 0;
    param_1[0x3e] = 0;
  }
  if ((void *)param_1[0x3c] != (void *)0x0) {
    operator_delete__((void *)param_1[0x3c]);
    param_1[0x3b] = 0;
    param_1[0x3c] = 0;
  }
  if (*(char *)((long)param_1 + 0x1a7) < '\0') {
    operator_delete((void *)param_1[0x32]);
  }
  if (*(char *)((long)param_1 + 0x15f) < '\0') {
    operator_delete((void *)param_1[0x29]);
  }
  if (*(char *)((long)param_1 + 0x117) < '\0') {
    operator_delete((void *)param_1[0x20]);
  }
  if (*(char *)((long)param_1 + 0xcf) < '\0') {
    operator_delete((void *)param_1[0x17]);
  }
  FUN_1000fbc04(param_1 + 0x15,1);
  FUN_1000fbb58(param_1 + 0x13,1);
  thunk_FUN_10001653c(param_1 + 0xc);
  FUN_1000fd87c(param_1 + 10,1);
  FUN_1000fd87c(param_1 + 8,1);
  FUN_1000fd8f0(param_1 + 6,1);
  FUN_1004f0a9c(param_1 + 3);
  FUN_10014f51c(param_1);
  return;
}




void FUN_1000fd87c(uint *param_1,int param_2)

{
  undefined8 *puVar1;
  long lVar2;
  
  puVar1 = *(undefined8 **)(param_1 + 2);
  if (puVar1 != (undefined8 *)0x0) {
    if (*param_1 != 0) {
      lVar2 = (ulong)*param_1 << 5;
      do {
        if (*(char *)((long)puVar1 + 0x17) < '\0') {
          operator_delete((void *)*puVar1);
        }
        puVar1 = puVar1 + 4;
        lVar2 = lVar2 + -0x20;
      } while (lVar2 != 0);
    }
    if (param_2 != 0) {
      if (*(void **)(param_1 + 2) != (void *)0x0) {
        operator_delete__(*(void **)(param_1 + 2));
      }
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[1] = 0;
    }
    *param_1 = 0;
  }
  return;
}




void FUN_1000fd8f0(uint *param_1,int param_2)

{
  undefined8 *puVar1;
  long lVar2;
  
  puVar1 = *(undefined8 **)(param_1 + 2);
  if (puVar1 != (undefined8 *)0x0) {
    if (*param_1 != 0) {
      lVar2 = (ulong)*param_1 << 5;
      do {
        if (*(char *)((long)puVar1 + 0x17) < '\0') {
          operator_delete((void *)*puVar1);
        }
        puVar1 = puVar1 + 4;
        lVar2 = lVar2 + -0x20;
      } while (lVar2 != 0);
    }
    if (param_2 != 0) {
      if (*(void **)(param_1 + 2) != (void *)0x0) {
        operator_delete__(*(void **)(param_1 + 2));
      }
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[1] = 0;
    }
    *param_1 = 0;
  }
  return;
}




void FUN_1000fdbd8(void)

{
  DAT_101dc7268 = 0xff;
  DAT_101dc726a = 0xffff;
  DAT_101dc726c = 0xffff;
  DAT_101dc726e = 0xffbc9c44;
  DAT_101dc7272 = 0xff1166f2;
  DAT_101dc7276 = 0xffe0e0e0;
  DAT_101dc727a = 0xffa0a0a0;
  DAT_101dc727e = 0xff8c8c8c;
  DAT_101dc7282 = 0xff322213;
  DAT_101dc7286 = 0xff091911;
  DAT_101dc728a = 0xff170c19;
  DAT_101dc728e = 0xff241a14;
  DAT_101dc7292 = 0xff14171c;
  DAT_101dc7296 = 0xff221911;
  DAT_101dc729a = 0xff1a1416;
  DAT_101dc729e = 0xff121414;
  DAT_101dc72a2 = 0xff1a1809;
  DAT_101dc72a6 = 0xff141414;
  DAT_101dc72aa = 0xff141414;
  DAT_101dc72ae = 0xff2929c0;
  DAT_101dc72b2 = 0xff283082;
  DAT_101dc72b6 = 0xff5262cc;
  DAT_101dc72ba = 0xff283082;
  DAT_101dc72be = 0xff5262cc;
  DAT_101dc72c2 = 0xff745c42;
  DAT_101dc72c6 = 0xff184155;
  DAT_101dc72ca = 0xff92665e;
  DAT_101dc72ce = 0xffbc9c44;
  DAT_101dc72d2 = 0xffbbae56;
  DAT_101dc72d6 = 0xff8b7b01;
  DAT_101dc72da = 0xff90b3ef;
  DAT_101dc72de = 0xff728ebe;
  DAT_101dc72e2 = 0xff19459d;
  DAT_101dc72e6 = 0xff9d877b;
  DAT_101dc72ea = 0xffcbb1a3;
  DAT_101dc72ee = 0xff3f6fb5;
  DAT_101dc72f2 = 0xffc5c5c5;
  DAT_101dc72f6 = 0xff4fc1f1;
  DAT_101dc72fa = 0xff606060;
  DAT_101dc72fe = 0xffc5ff7b;
  DAT_101dc7302 = 0xff5271eb;
  DAT_101dc7306 = 0xfffae076;
  DAT_101dc730a = 0xff3ac8f6;
  DAT_101dc730e = 0xffaaaaaa;
  DAT_101dc7312 = 0xffe19400;
  DAT_101dc7316 = 0xffe19400;
  DAT_101dc731a = 0xffe550b2;
  DAT_101dc731e = 0xfff22ae8;
  DAT_101dc7322 = 0xff005ae1;
  DAT_101dc7326 = 0xff1addfa;
  DAT_101dc732a = 0xff2424b3;
  DAT_101dc732e = 0xff2424b3;
  DAT_101dc7332 = 0xff646464;
  DAT_101dc7336 = 0xff92665e;
  DAT_101dc733a = 0xff646037;
  DAT_101dc7344 = 0xff1111a1;
  DAT_101dc7348 = 0xff321ee1;
  DAT_101dc734c = 0xffc8c8c8;
  DAT_101dc7350 = 0xff321ee1;
  DAT_101dc735c = 0xff6259b3;
  DAT_101dc7360 = 0xff506e73;
  DAT_101dc7364 = 0xff9dbf86;
  DAT_101dc7340 = 0xffffffff;
  DAT_101dc7368 = 0xffa35244;
  DAT_101dc7354 = 0xff7fe801;
  DAT_101dc736c = 0xffca828e;
  DAT_101dc7358 = 0xffffffff;
  DAT_101dc7370 = 0xffa6a6a6;
  DAT_101dc7374 = 0xffa6a6a6;
  DAT_101dc7378 = 0xffffffff;
  DAT_101dc737c = 0xff88ea2f;
  DAT_101dc7380 = 0xff8c8c8c;
  DAT_101dc7384 = 0xffffb400;
  DAT_101dc7388 = 0xffff00ff;
  DAT_101dc738c = 0xff00aded;
  DAT_101dc7390 = 0xff33d3ff;
  DAT_101dc7394 = 0xff7fe801;
  DAT_101dc7398 = 0xff282828;
  DAT_101dc739c = 0xfff0f0f0;
  DAT_101dc73a0 = 0xffa4781e;
  DAT_101dc73a4 = 0xffa6654b;
  DAT_101dc73a8 = 0xff93435b;
  DAT_101dc73ac = 0xff387f9c;
  DAT_101dc73b0 = 0xffa3781e;
  DAT_101dc73b4 = 0xffffd18a;
  DAT_101dc73b8 = 0xffff61f7;
  DAT_101dc73bc = 0xff5de1f2;
  DAT_101dc73c0 = 0xff80eaff;
  DAT_101dc73c4 = 0xff32e00e;
  DAT_101dc73c8 = 0xff5a3c10;
  DAT_101dc73cc = 0xff330b03;
  DAT_101dc73d0 = 0xff33031d;
  DAT_101dc73d4 = 0xff032433;
  DAT_101dc73d8 = 0xff9e8e8d;
  FUN_10001549c(&DAT_101dc73e0,"SEASON_KEY_SMALL_BUNDLE_SKU");
  ___cxa_atexit(FUN_1000e6204,&DAT_101dc73e0,0x100000000);
  FUN_10001549c(&DAT_101dc73f8,"SEASON_KEY_LARGE_BUNDLE_SKU");
  ___cxa_atexit(FUN_1000e6204,&DAT_101dc73f8,0x100000000);
  return;
}




void FUN_1000fe308(int param_1,uint param_2)

{
  byte bVar1;
  byte bVar2;
  bool bVar3;
  undefined1 auVar4 [16];
  
  bVar3 = DAT_101d23088 != '\0';
  bVar2 = (byte)(1 << (ulong)(param_2 & 7));
  bVar1 = (&DAT_101d23088)[param_2 >> 3] | bVar2;
  if (param_1 == 0) {
    bVar1 = (&DAT_101d23088)[param_2 >> 3] & (bVar2 ^ 0xff);
  }
  (&DAT_101d23088)[param_2 >> 3] = bVar1;
  if (bVar3 != (DAT_101d23088 != '\0')) {
    auVar4 = FUN_1000fe37c();
    FUN_10052c39c(auVar4,0x40400000);
    return;
  }
  return;
}




float FUN_1000fe37c(void)

{
  float local_14;
  
  local_14 = -1.0;
  FUN_10012df44(&local_14,0,0);
  if (ABS(local_14 + 1.0) < 1.1920929e-07) {
    local_14 = (float)FUN_100316194(0x17);
  }
  if (DAT_101d23088 != '\0') {
    local_14 = local_14 * 0.25;
  }
  return local_14;
}




void FUN_1000fe3f0(void)

{
  FUN_1000fe474();
  FUN_10052c40c();
  DAT_101d2308a = FUN_1000fe4ec();
  DAT_101d2308c = FUN_1000fe5fc();
  DAT_101d2308e = FUN_1000fe70c();
  DAT_101d23090 = FUN_1000fe798();
  DAT_101d23092 = FUN_1000ffadc();
  DAT_101d23094 = FUN_1000ffc94();
  DAT_101d23096 = FUN_1000ffe4c();
  DAT_101d23098 = FUN_100101034();
  DAT_101d2309a = FUN_1001011ec();
  return;
}




float FUN_1000fe474(void)

{
  float local_14;
  
  local_14 = -1.0;
  FUN_10012df44(0,&local_14,0);
  if (ABS(local_14 + 1.0) < 1.1920929e-07) {
    local_14 = (float)FUN_100316194(0x18);
  }
  if (DAT_101d23089 != '\0') {
    local_14 = local_14 * 0.05;
  }
  return local_14;
}




undefined8 FUN_1000fe4ec(void)

{
  undefined8 ***pppuVar1;
  undefined8 uVar2;
  undefined8 **local_38 [2];
  char local_21;
  
  uVar2 = FUN_10052c424("mainmenu");
  FUN_10052c434("default");
  FUN_100101788(local_38,"build://Music/MainMenu/Parts/01_mainmenu_intro.ogg");
  pppuVar1 = (undefined8 ***)local_38[0];
  if (-1 < local_21) {
    pppuVar1 = local_38;
  }
  FUN_10052c444(0x3f800000,pppuVar1,0,"intro");
  if (local_21 < '\0') {
    operator_delete(local_38[0]);
  }
  FUN_100101788(local_38,"build://Music/MainMenu/Parts/02_mainmenu_looping.ogg");
  pppuVar1 = (undefined8 ***)local_38[0];
  if (-1 < local_21) {
    pppuVar1 = local_38;
  }
  FUN_10052c444(0x3f800000,pppuVar1,0,0);
  if (local_21 < '\0') {
    operator_delete(local_38[0]);
  }
  FUN_100101788(local_38,"build://Music/MainMenu/Parts/02_mainmenu_looping.ogg");
  pppuVar1 = (undefined8 ***)local_38[0];
  if (-1 < local_21) {
    pppuVar1 = local_38;
  }
  FUN_10052c444(0x3f800000,pppuVar1,0,0);
  if (local_21 < '\0') {
    operator_delete(local_38[0]);
  }
  FUN_10052c45c();
  return uVar2;
}




undefined8 FUN_1000fe5fc(void)

{
  undefined8 ***pppuVar1;
  undefined8 uVar2;
  undefined8 **local_38 [2];
  char local_21;
  
  uVar2 = FUN_10052c424("heroselect");
  FUN_10052c434("default");
  FUN_100101788(local_38,"build://Music/HeroSelect/Parts/01_heroselect_intro.ogg");
  pppuVar1 = (undefined8 ***)local_38[0];
  if (-1 < local_21) {
    pppuVar1 = local_38;
  }
  FUN_10052c444(0x3f800000,pppuVar1,0,"intro");
  if (local_21 < '\0') {
    operator_delete(local_38[0]);
  }
  FUN_100101788(local_38,"build://Music/HeroSelect/Parts/02_heroselect_looping.ogg");
  pppuVar1 = (undefined8 ***)local_38[0];
  if (-1 < local_21) {
    pppuVar1 = local_38;
  }
  FUN_10052c444(0x3f800000,pppuVar1,0,0);
  if (local_21 < '\0') {
    operator_delete(local_38[0]);
  }
  FUN_100101788(local_38,"build://Music/HeroSelect/Parts/02_heroselect_looping.ogg");
  pppuVar1 = (undefined8 ***)local_38[0];
  if (-1 < local_21) {
    pppuVar1 = local_38;
  }
  FUN_10052c444(0x3f800000,pppuVar1,0,0);
  if (local_21 < '\0') {
    operator_delete(local_38[0]);
  }
  FUN_10052c45c();
  return uVar2;
}




undefined8 FUN_1000fe70c(void)

{
  undefined8 ***pppuVar1;
  undefined8 uVar2;
  undefined8 **local_38 [2];
  char local_21;
  
  uVar2 = FUN_10052c424("spoilsofwar");
  FUN_10052c434("default");
  FUN_100101788(local_38,
                "build://Music/SpoilsOfWar/Parts/stg_SEMC_vainglory_spoils_of_war_perc_loop.ogg");
  pppuVar1 = (undefined8 ***)local_38[0];
  if (-1 < local_21) {
    pppuVar1 = local_38;
  }
  FUN_10052c444(0x3f800000,pppuVar1,0,"intro");
  if (local_21 < '\0') {
    operator_delete(local_38[0]);
  }
  FUN_10052c45c();
  return uVar2;
}




undefined8 FUN_1000fe798(void)

{
  undefined8 ***pppuVar1;
  undefined1 **ppuVar2;
  undefined8 uVar3;
  undefined1 *local_60 [2];
  char local_49;
  undefined8 **local_48 [2];
  char local_31;
  
  uVar3 = FUN_10052c424("ingame");
  FUN_10052c434("jungle");
  FUN_100101788(local_48,"build://Music/InGame/Parts/1_InGame_Wip_Intro.ogg");
  pppuVar1 = (undefined8 ***)local_48[0];
  if (-1 < local_31) {
    pppuVar1 = local_48;
  }
  FUN_100101788(local_60,"build://Music/InGame/Parts/2_InGame_Wip_Intro-Tail.ogg");
  ppuVar2 = (undefined1 **)local_60[0];
  if (-1 < local_49) {
    ppuVar2 = local_60;
  }
  FUN_10052c444(0x3f800000,pppuVar1,ppuVar2,"intro");
  if (local_49 < '\0') {
    operator_delete(local_60[0]);
  }
  if (local_31 < '\0') {
    operator_delete(local_48[0]);
  }
  FUN_100101788(local_48,"build://Music/InGame/Parts/3_InGame_Wip_Jungling-01.ogg");
  pppuVar1 = (undefined8 ***)local_48[0];
  if (-1 < local_31) {
    pppuVar1 = local_48;
  }
  FUN_100101788(local_60,"build://Music/InGame/Parts/4_InGame_Wip_Jungling-01-Tail.ogg");
  ppuVar2 = (undefined1 **)local_60[0];
  if (-1 < local_49) {
    ppuVar2 = local_60;
  }
  FUN_10052c444(0x3f800000,pppuVar1,ppuVar2,0);
  if (local_49 < '\0') {
    operator_delete(local_60[0]);
  }
  if (local_31 < '\0') {
    operator_delete(local_48[0]);
  }
  FUN_100101788(local_48,"build://Music/InGame/Parts/5_InGame_Wip_Jungling-02.ogg");
  pppuVar1 = (undefined8 ***)local_48[0];
  if (-1 < local_31) {
    pppuVar1 = local_48;
  }
  FUN_100101788(local_60,"build://Music/InGame/Parts/6_InGame_Wip_Jungling-02-Tail.ogg");
  ppuVar2 = (undefined1 **)local_60[0];
  if (-1 < local_49) {
    ppuVar2 = local_60;
  }
  FUN_10052c444(0x3f800000,pppuVar1,ppuVar2,0);
  if (local_49 < '\0') {
    operator_delete(local_60[0]);
  }
  if (local_31 < '\0') {
    operator_delete(local_48[0]);
  }
  FUN_100101788(local_48,"build://Music/InGame/Parts/7_InGame_Wip_Jungling-03.ogg");
  pppuVar1 = (undefined8 ***)local_48[0];
  if (-1 < local_31) {
    pppuVar1 = local_48;
  }
  FUN_100101788(local_60,"build://Music/InGame/Parts/8_InGame_Wip_Jungling-03-Tail.ogg");
  ppuVar2 = (undefined1 **)local_60[0];
  if (-1 < local_49) {
    ppuVar2 = local_60;
  }
  FUN_10052c444(0x3f800000,pppuVar1,ppuVar2,0);
  if (local_49 < '\0') {
    operator_delete(local_60[0]);
  }
  if (local_31 < '\0') {
    operator_delete(local_48[0]);
  }
  FUN_100101788(local_48,"build://Music/InGame/Parts/9_InGame_Wip_Jungling-04.ogg");
  pppuVar1 = (undefined8 ***)local_48[0];
  if (-1 < local_31) {
    pppuVar1 = local_48;
  }
  FUN_100101788(local_60,"build://Music/InGame/Parts/10_InGame_Wip_Jungling-04-Tail.ogg");
  ppuVar2 = (undefined1 **)local_60[0];
  if (-1 < local_49) {
    ppuVar2 = local_60;
  }
  FUN_10052c444(0x3f800000,pppuVar1,ppuVar2,0);
  if (local_49 < '\0') {
    operator_delete(local_60[0]);
  }
  if (local_31 < '\0') {
    operator_delete(local_48[0]);
  }
  FUN_100101788(local_48,"build://Music/InGame/Parts/11_InGame_Wip_Jungling-05.ogg");
  pppuVar1 = (undefined8 ***)local_48[0];
  if (-1 < local_31) {
    pppuVar1 = local_48;
  }
  FUN_100101788(local_60,"build://Music/InGame/Parts/12_InGame_Wip_Jungling-05-Tail.ogg");
  ppuVar2 = (undefined1 **)local_60[0];
  if (-1 < local_49) {
    ppuVar2 = local_60;
  }
  FUN_10052c444(0x3f800000,pppuVar1,ppuVar2,0);
  if (local_49 < '\0') {
    operator_delete(local_60[0]);
  }
  if (local_31 < '\0') {
    operator_delete(local_48[0]);
  }
  FUN_100101788(local_48,"build://Music/InGame/Parts/13_InGame_Wip_Jungling-06.ogg");
  pppuVar1 = (undefined8 ***)local_48[0];
  if (-1 < local_31) {
    pppuVar1 = local_48;
  }
  FUN_100101788(local_60,"build://Music/InGame/Parts/14_InGame_Wip_Jungling-06-Tail.ogg");
  ppuVar2 = (undefined1 **)local_60[0];
  if (-1 < local_49) {
    ppuVar2 = local_60;
  }
  FUN_10052c444(0x3f800000,pppuVar1,ppuVar2,0);
  if (local_49 < '\0') {
    operator_delete(local_60[0]);
  }
  if (local_31 < '\0') {
    operator_delete(local_48[0]);
  }
  FUN_100101788(local_48,"build://Music/InGame/Parts/15_InGame_Wip_Jungling-07.ogg");
  pppuVar1 = (undefined8 ***)local_48[0];
  if (-1 < local_31) {
    pppuVar1 = local_48;
  }
  FUN_100101788(local_60,"build://Music/InGame/Parts/16_InGame_Wip_Jungling-07-Tail.ogg");
  ppuVar2 = (undefined1 **)local_60[0];
  if (-1 < local_49) {
    ppuVar2 = local_60;
  }
  FUN_10052c444(0x3f800000,pppuVar1,ppuVar2,0);
  if (local_49 < '\0') {
    operator_delete(local_60[0]);
  }
  if (local_31 < '\0') {
    operator_delete(local_48[0]);
  }
  FUN_100101788(local_48,"build://Music/InGame/Parts/17_InGame_Wip_Jungling-08.ogg");
  pppuVar1 = (undefined8 ***)local_48[0];
  if (-1 < local_31) {
    pppuVar1 = local_48;
  }
  FUN_100101788(local_60,"build://Music/InGame/Parts/18_InGame_Wip_Jungling-08-Tail.ogg");
  ppuVar2 = (undefined1 **)local_60[0];
  if (-1 < local_49) {
    ppuVar2 = local_60;
  }
  FUN_10052c444(0x3f800000,pppuVar1,ppuVar2,0);
  if (local_49 < '\0') {
    operator_delete(local_60[0]);
  }
  if (local_31 < '\0') {
    operator_delete(local_48[0]);
  }
  FUN_10052c434("lane");
  FUN_100101788(local_48,"build://Music/InGame/Parts/19_InGame_Wip_Laning-01.ogg");
  pppuVar1 = (undefined8 ***)local_48[0];
  if (-1 < local_31) {
    pppuVar1 = local_48;
  }
  FUN_100101788(local_60,"build://Music/InGame/Parts/20_InGame_Wip_Laning-01-Tail.ogg");
  ppuVar2 = (undefined1 **)local_60[0];
  if (-1 < local_49) {
    ppuVar2 = local_60;
  }
  FUN_10052c444(0x3f800000,pppuVar1,ppuVar2,0);
  if (local_49 < '\0') {
    operator_delete(local_60[0]);
  }
  if (local_31 < '\0') {
    operator_delete(local_48[0]);
  }
  FUN_100101788(local_48,"build://Music/InGame/Parts/21_InGame_Wip_Laning-02.ogg");
  pppuVar1 = (undefined8 ***)local_48[0];
  if (-1 < local_31) {
    pppuVar1 = local_48;
  }
  FUN_100101788(local_60,"build://Music/InGame/Parts/22_InGame_Wip_Laning-02-Tail.ogg");
  ppuVar2 = (undefined1 **)local_60[0];
  if (-1 < local_49) {
    ppuVar2 = local_60;
  }
  FUN_10052c444(0x3f800000,pppuVar1,ppuVar2,0);
  if (local_49 < '\0') {
    operator_delete(local_60[0]);
  }
  if (local_31 < '\0') {
    operator_delete(local_48[0]);
  }
  FUN_100101788(local_48,"build://Music/InGame/Parts/23_InGame_Wip_Laning-03.ogg");
  pppuVar1 = (undefined8 ***)local_48[0];
  if (-1 < local_31) {
    pppuVar1 = local_48;
  }
  FUN_100101788(local_60,"build://Music/InGame/Parts/24_InGame_Wip_Laning-03-Tail.ogg");
  ppuVar2 = (undefined1 **)local_60[0];
  if (-1 < local_49) {
    ppuVar2 = local_60;
  }
  FUN_10052c444(0x3f800000,pppuVar1,ppuVar2,0);
  if (local_49 < '\0') {
    operator_delete(local_60[0]);
  }
  if (local_31 < '\0') {
    operator_delete(local_48[0]);
  }
  FUN_100101788(local_48,"build://Music/InGame/Parts/25_InGame_Wip_Laning-04.ogg");
  pppuVar1 = (undefined8 ***)local_48[0];
  if (-1 < local_31) {
    pppuVar1 = local_48;
  }
  FUN_100101788(local_60,"build://Music/InGame/Parts/26_InGame_Wip_Laning-04-Tail.ogg");
  ppuVar2 = (undefined1 **)local_60[0];
  if (-1 < local_49) {
    ppuVar2 = local_60;
  }
  FUN_10052c444(0x3f800000,pppuVar1,ppuVar2,0);
  if (local_49 < '\0') {
    operator_delete(local_60[0]);
  }
  if (local_31 < '\0') {
    operator_delete(local_48[0]);
  }
  FUN_100101788(local_48,"build://Music/InGame/Parts/27_InGame_Wip_Laning-05.ogg");
  pppuVar1 = (undefined8 ***)local_48[0];
  if (-1 < local_31) {
    pppuVar1 = local_48;
  }
  FUN_100101788(local_60,"build://Music/InGame/Parts/28_InGame_Wip_Laning-05-Tail.ogg");
  ppuVar2 = (undefined1 **)local_60[0];
  if (-1 < local_49) {
    ppuVar2 = local_60;
  }
  FUN_10052c444(0x3f800000,pppuVar1,ppuVar2,0);
  if (local_49 < '\0') {
    operator_delete(local_60[0]);
  }
  if (local_31 < '\0') {
    operator_delete(local_48[0]);
  }
  FUN_100101788(local_48,"build://Music/InGame/Parts/29_InGame_Wip_Laning-06.ogg");
  pppuVar1 = (undefined8 ***)local_48[0];
  if (-1 < local_31) {
    pppuVar1 = local_48;
  }
  FUN_100101788(local_60,"build://Music/InGame/Parts/30_InGame_Wip_Laning-06-Tail.ogg");
  ppuVar2 = (undefined1 **)local_60[0];
  if (-1 < local_49) {
    ppuVar2 = local_60;
  }
  FUN_10052c444(0x3f800000,pppuVar1,ppuVar2,0);
  if (local_49 < '\0') {
    operator_delete(local_60[0]);
  }
  if (local_31 < '\0') {
    operator_delete(local_48[0]);
  }
  FUN_100101788(local_48,"build://Music/InGame/Parts/31_InGame_Wip_Laning-07.ogg");
  pppuVar1 = (undefined8 ***)local_48[0];
  if (-1 < local_31) {
    pppuVar1 = local_48;
  }
  FUN_100101788(local_60,"build://Music/InGame/Parts/32_InGame_Wip_Laning-07-Tail.ogg");
  ppuVar2 = (undefined1 **)local_60[0];
  if (-1 < local_49) {
    ppuVar2 = local_60;
  }
  FUN_10052c444(0x3f800000,pppuVar1,ppuVar2,0);
  if (local_49 < '\0') {
    operator_delete(local_60[0]);
  }
  if (local_31 < '\0') {
    operator_delete(local_48[0]);
  }
  FUN_100101788(local_48,"build://Music/InGame/Parts/33_InGame_Wip_Laning-08.ogg");
  pppuVar1 = (undefined8 ***)local_48[0];
  if (-1 < local_31) {
    pppuVar1 = local_48;
  }
  FUN_100101788(local_60,"build://Music/InGame/Parts/34_InGame_Wip_Laning-08-Tail.ogg");
  ppuVar2 = (undefined1 **)local_60[0];
  if (-1 < local_49) {
    ppuVar2 = local_60;
  }
  FUN_10052c444(0x3f800000,pppuVar1,ppuVar2,0);
  if (local_49 < '\0') {
    operator_delete(local_60[0]);
  }
  if (local_31 < '\0') {
    operator_delete(local_48[0]);
  }
  FUN_10052c434("fight");
  FUN_100101788(local_48,"build://Music/InGame/Parts/35_InGame_Wip_TransitionLaningToBattle.ogg");
  pppuVar1 = (undefined8 ***)local_48[0];
  if (-1 < local_31) {
    pppuVar1 = local_48;
  }
  FUN_100101788(local_60,
                "build://Music/InGame/Parts/36_InGame_Wip_TransitionLaningToBattle-Tail.ogg");
  ppuVar2 = (undefined1 **)local_60[0];
  if (-1 < local_49) {
    ppuVar2 = local_60;
  }
  FUN_10052c444(0x3f800000,pppuVar1,ppuVar2,"lane");
  if (local_49 < '\0') {
    operator_delete(local_60[0]);
  }
  if (local_31 < '\0') {
    operator_delete(local_48[0]);
  }
  FUN_100101788(local_48,"build://Music/InGame/Parts/37_InGame_Wip_TeamBattle-01.ogg");
  pppuVar1 = (undefined8 ***)local_48[0];
  if (-1 < local_31) {
    pppuVar1 = local_48;
  }
  FUN_100101788(local_60,"build://Music/InGame/Parts/38_InGame_Wip_TeamBattle-01-Tail.ogg");
  ppuVar2 = (undefined1 **)local_60[0];
  if (-1 < local_49) {
    ppuVar2 = local_60;
  }
  FUN_10052c444(0x3f800000,pppuVar1,ppuVar2,0);
  if (local_49 < '\0') {
    operator_delete(local_60[0]);
  }
  if (local_31 < '\0') {
    operator_delete(local_48[0]);
  }
  FUN_100101788(local_48,"build://Music/InGame/Parts/39_InGame_Wip_TeamBattle-02.ogg");
  pppuVar1 = (undefined8 ***)local_48[0];
  if (-1 < local_31) {
    pppuVar1 = local_48;
  }
  FUN_100101788(local_60,"build://Music/InGame/Parts/40_InGame_Wip_TeamBattle-02-Tail.ogg");
  ppuVar2 = (undefined1 **)local_60[0];
  if (-1 < local_49) {
    ppuVar2 = local_60;
  }
  FUN_10052c444(0x3f800000,pppuVar1,ppuVar2,0);
  if (local_49 < '\0') {
    operator_delete(local_60[0]);
  }
  if (local_31 < '\0') {
    operator_delete(local_48[0]);
  }
  FUN_100101788(local_48,"build://Music/InGame/Parts/41_InGame_Wip_TeamBattle-03.ogg");
  pppuVar1 = (undefined8 ***)local_48[0];
  if (-1 < local_31) {
    pppuVar1 = local_48;
  }
  FUN_100101788(local_60,"build://Music/InGame/Parts/42_InGame_Wip_TeamBattle-03-Tail.ogg");
  ppuVar2 = (undefined1 **)local_60[0];
  if (-1 < local_49) {
    ppuVar2 = local_60;
  }
  FUN_10052c444(0x3f800000,pppuVar1,ppuVar2,0);
  if (local_49 < '\0') {
    operator_delete(local_60[0]);
  }
  if (local_31 < '\0') {
    operator_delete(local_48[0]);
  }
  FUN_100101788(local_48,"build://Music/InGame/Parts/43_InGame_Wip_TeamBattle-04.ogg");
  pppuVar1 = (undefined8 ***)local_48[0];
  if (-1 < local_31) {
    pppuVar1 = local_48;
  }
  FUN_100101788(local_60,"build://Music/InGame/Parts/44_InGame_Wip_TeamBattle-04-Tail.ogg");
  ppuVar2 = (undefined1 **)local_60[0];
  if (-1 < local_49) {
    ppuVar2 = local_60;
  }
  FUN_10052c444(0x3f800000,pppuVar1,ppuVar2,0);
  if (local_49 < '\0') {
    operator_delete(local_60[0]);
  }
  if (local_31 < '\0') {
    operator_delete(local_48[0]);
  }
  FUN_100101788(local_48,"build://Music/InGame/Parts/45_InGame_Wip_TeamBattle-05.ogg");
  pppuVar1 = (undefined8 ***)local_48[0];
  if (-1 < local_31) {
    pppuVar1 = local_48;
  }
  FUN_100101788(local_60,"build://Music/InGame/Parts/46_InGame_Wip_TeamBattle-05-Tail.ogg");
  ppuVar2 = (undefined1 **)local_60[0];
  if (-1 < local_49) {
    ppuVar2 = local_60;
  }
  FUN_10052c444(0x3f800000,pppuVar1,ppuVar2,0);
  if (local_49 < '\0') {
    operator_delete(local_60[0]);
  }
  if (local_31 < '\0') {
    operator_delete(local_48[0]);
  }
  FUN_100101788(local_48,"build://Music/InGame/Parts/47_InGame_Wip_TeamBattle-06.ogg");
  pppuVar1 = (undefined8 ***)local_48[0];
  if (-1 < local_31) {
    pppuVar1 = local_48;
  }
  FUN_100101788(local_60,"build://Music/InGame/Parts/48_InGame_Wip_TeamBattle-06-Tail.ogg");
  ppuVar2 = (undefined1 **)local_60[0];
  if (-1 < local_49) {
    ppuVar2 = local_60;
  }
  FUN_10052c444(0x3f800000,pppuVar1,ppuVar2,0);
  if (local_49 < '\0') {
    operator_delete(local_60[0]);
  }
  if (local_31 < '\0') {
    operator_delete(local_48[0]);
  }
  FUN_100101788(local_48,"build://Music/InGame/Parts/49_InGame_Wip_TeamBattle-07.ogg");
  pppuVar1 = (undefined8 ***)local_48[0];
  if (-1 < local_31) {
    pppuVar1 = local_48;
  }
  FUN_100101788(local_60,"build://Music/InGame/Parts/50_InGame_Wip_TeamBattle-07-Tail.ogg");
  ppuVar2 = (undefined1 **)local_60[0];
  if (-1 < local_49) {
    ppuVar2 = local_60;
  }
  FUN_10052c444(0x3f800000,pppuVar1,ppuVar2,0);
  if (local_49 < '\0') {
    operator_delete(local_60[0]);
  }
  if (local_31 < '\0') {
    operator_delete(local_48[0]);
  }
  FUN_100101788(local_48,"build://Music/InGame/Parts/51_InGame_Wip_TeamBattle-08.ogg");
  pppuVar1 = (undefined8 ***)local_48[0];
  if (-1 < local_31) {
    pppuVar1 = local_48;
  }
  FUN_100101788(local_60,"build://Music/InGame/Parts/52_InGame_Wip_TeamBattle-08-Tail.ogg");
  ppuVar2 = (undefined1 **)local_60[0];
  if (-1 < local_49) {
    ppuVar2 = local_60;
  }
  FUN_10052c444(0x3f800000,pppuVar1,ppuVar2,0);
  if (local_49 < '\0') {
    operator_delete(local_60[0]);
  }
  if (local_31 < '\0') {
    operator_delete(local_48[0]);
  }
  FUN_100101788(local_48,"build://Music/InGame/Parts/53_InGame_Wip_TeamBattle-09.ogg");
  pppuVar1 = (undefined8 ***)local_48[0];
  if (-1 < local_31) {
    pppuVar1 = local_48;
  }
  FUN_100101788(local_60,"build://Music/InGame/Parts/54_InGame_Wip_TeamBattle-09-Tail.ogg");
  ppuVar2 = (undefined1 **)local_60[0];
  if (-1 < local_49) {
    ppuVar2 = local_60;
  }
  FUN_10052c444(0x3f800000,pppuVar1,ppuVar2,0);
  if (local_49 < '\0') {
    operator_delete(local_60[0]);
  }
  if (local_31 < '\0') {
    operator_delete(local_48[0]);
  }
  FUN_100101788(local_48,"build://Music/InGame/Parts/55_InGame_Wip_TeamBattle-10.ogg");
  pppuVar1 = (undefined8 ***)local_48[0];
  if (-1 < local_31) {
    pppuVar1 = local_48;
  }
  FUN_100101788(local_60,"build://Music/InGame/Parts/56_InGame_Wip_TeamBattle-10-Tail.ogg");
  ppuVar2 = (undefined1 **)local_60[0];
  if (-1 < local_49) {
    ppuVar2 = local_60;
  }
  FUN_10052c444(0x3f800000,pppuVar1,ppuVar2,0);
  if (local_49 < '\0') {
    operator_delete(local_60[0]);
  }
  if (local_31 < '\0') {
    operator_delete(local_48[0]);
  }
  FUN_100101788(local_48,"build://Music/InGame/Parts/57_InGame_Wip_TeamBattle-11.ogg");
  pppuVar1 = (undefined8 ***)local_48[0];
  if (-1 < local_31) {
    pppuVar1 = local_48;
  }
  FUN_100101788(local_60,"build://Music/InGame/Parts/58_InGame_Wip_TeamBattle-11-Tail.ogg");
  ppuVar2 = (undefined1 **)local_60[0];
  if (-1 < local_49) {
    ppuVar2 = local_60;
  }
  FUN_10052c444(0x3f800000,pppuVar1,ppuVar2,0);
  if (local_49 < '\0') {
    operator_delete(local_60[0]);
  }
  if (local_31 < '\0') {
    operator_delete(local_48[0]);
  }
  FUN_100101788(local_48,"build://Music/InGame/Parts/59_InGame_Wip_TeamBattle-12.ogg");
  pppuVar1 = (undefined8 ***)local_48[0];
  if (-1 < local_31) {
    pppuVar1 = local_48;
  }
  FUN_100101788(local_60,"build://Music/InGame/Parts/60_InGame_Wip_TeamBattle-12-Tail.ogg");
  ppuVar2 = (undefined1 **)local_60[0];
  if (-1 < local_49) {
    ppuVar2 = local_60;
  }
  FUN_10052c444(0x3f800000,pppuVar1,ppuVar2,0);
  if (local_49 < '\0') {
    operator_delete(local_60[0]);
  }
  if (local_31 < '\0') {
    operator_delete(local_48[0]);
  }
  FUN_10052c434("kraken");
  FUN_100101788(local_48,"build://Music/InGame/Parts/61_InGame_Wip_Kraken-01.ogg");
  pppuVar1 = (undefined8 ***)local_48[0];
  if (-1 < local_31) {
    pppuVar1 = local_48;
  }
  FUN_100101788(local_60,"build://Music/InGame/Parts/62_InGame_Wip_Kraken-01-Tail.ogg");
  ppuVar2 = (undefined1 **)local_60[0];
  if (-1 < local_49) {
    ppuVar2 = local_60;
  }
  FUN_10052c444(0x3f800000,pppuVar1,ppuVar2,0);
  if (local_49 < '\0') {
    operator_delete(local_60[0]);
  }
  if (local_31 < '\0') {
    operator_delete(local_48[0]);
  }
  FUN_100101788(local_48,"build://Music/InGame/Parts/63_InGame_Wip_Kraken-02.ogg");
  pppuVar1 = (undefined8 ***)local_48[0];
  if (-1 < local_31) {
    pppuVar1 = local_48;
  }
  FUN_100101788(local_60,"build://Music/InGame/Parts/64_InGame_Wip_Kraken-02-Tail.ogg");
  ppuVar2 = (undefined1 **)local_60[0];
  if (-1 < local_49) {
    ppuVar2 = local_60;
  }
  FUN_10052c444(0x3f800000,pppuVar1,ppuVar2,0);
  if (local_49 < '\0') {
    operator_delete(local_60[0]);
  }
  if (local_31 < '\0') {
    operator_delete(local_48[0]);
  }
  FUN_100101788(local_48,"build://Music/InGame/Parts/65_InGame_Wip_Kraken-03.ogg");
  pppuVar1 = (undefined8 ***)local_48[0];
  if (-1 < local_31) {
    pppuVar1 = local_48;
  }
  FUN_100101788(local_60,"build://Music/InGame/Parts/66_InGame_Wip_Kraken-03-Tail.ogg");
  ppuVar2 = (undefined1 **)local_60[0];
  if (-1 < local_49) {
    ppuVar2 = local_60;
  }
  FUN_10052c444(0x3f800000,pppuVar1,ppuVar2,0);
  if (local_49 < '\0') {
    operator_delete(local_60[0]);
  }
  if (local_31 < '\0') {
    operator_delete(local_48[0]);
  }
  FUN_100101788(local_48,"build://Music/InGame/Parts/67_InGame_Wip_Kraken-04.ogg");
  pppuVar1 = (undefined8 ***)local_48[0];
  if (-1 < local_31) {
    pppuVar1 = local_48;
  }
  FUN_100101788(local_60,"build://Music/InGame/Parts/68_InGame_Wip_Kraken-04-Tail.ogg");
  ppuVar2 = (undefined1 **)local_60[0];
  if (-1 < local_49) {
    ppuVar2 = local_60;
  }
  FUN_10052c444(0x3f800000,pppuVar1,ppuVar2,0);
  if (local_49 < '\0') {
    operator_delete(local_60[0]);
  }
  if (local_31 < '\0') {
    operator_delete(local_48[0]);
  }
  FUN_100101788(local_48,"build://Music/InGame/Parts/69_InGame_Wip_Kraken-05.ogg");
  pppuVar1 = (undefined8 ***)local_48[0];
  if (-1 < local_31) {
    pppuVar1 = local_48;
  }
  FUN_100101788(local_60,"build://Music/InGame/Parts/70_InGame_Wip_Kraken-05-Tail.ogg");
  ppuVar2 = (undefined1 **)local_60[0];
  if (-1 < local_49) {
    ppuVar2 = local_60;
  }
  FUN_10052c444(0x3f800000,pppuVar1,ppuVar2,0);
  if (local_49 < '\0') {
    operator_delete(local_60[0]);
  }
  if (local_31 < '\0') {
    operator_delete(local_48[0]);
  }
  FUN_100101788(local_48,"build://Music/InGame/Parts/71_InGame_Wip_Kraken-06.ogg");
  pppuVar1 = (undefined8 ***)local_48[0];
  if (-1 < local_31) {
    pppuVar1 = local_48;
  }
  FUN_100101788(local_60,"build://Music/InGame/Parts/72_InGame_Wip_Kraken-06-Tail.ogg");
  ppuVar2 = (undefined1 **)local_60[0];
  if (-1 < local_49) {
    ppuVar2 = local_60;
  }
  FUN_10052c444(0x3f800000,pppuVar1,ppuVar2,0);
  if (local_49 < '\0') {
    operator_delete(local_60[0]);
  }
  if (local_31 < '\0') {
    operator_delete(local_48[0]);
  }
  FUN_10052c434("death");
  FUN_100101788(local_48,"build://Music/InGame/Parts/Death/0_Death-01.ogg");
  pppuVar1 = (undefined8 ***)local_48[0];
  if (-1 < local_31) {
    pppuVar1 = local_48;
  }
  FUN_100101788(local_60,"build://Music/InGame/Parts/Death/1_Death-01-Tail.ogg");
  ppuVar2 = (undefined1 **)local_60[0];
  if (-1 < local_49) {
    ppuVar2 = local_60;
  }
  FUN_10052c444(0x3f800000,pppuVar1,ppuVar2,0);
  if (local_49 < '\0') {
    operator_delete(local_60[0]);
  }
  if (local_31 < '\0') {
    operator_delete(local_48[0]);
  }
  FUN_100101788(local_48,"build://Music/InGame/Parts/Death/2_Death-02.ogg");
  pppuVar1 = (undefined8 ***)local_48[0];
  if (-1 < local_31) {
    pppuVar1 = local_48;
  }
  FUN_100101788(local_60,"build://Music/InGame/Parts/Death/3_Death-02-Tail.ogg");
  ppuVar2 = (undefined1 **)local_60[0];
  if (-1 < local_49) {
    ppuVar2 = local_60;
  }
  FUN_10052c444(0x3f800000,pppuVar1,ppuVar2,0);
  if (local_49 < '\0') {
    operator_delete(local_60[0]);
  }
  if (local_31 < '\0') {
    operator_delete(local_48[0]);
  }
  FUN_100101788(local_48,"build://Music/InGame/Parts/Death/4_Death-03.ogg");
  pppuVar1 = (undefined8 ***)local_48[0];
  if (-1 < local_31) {
    pppuVar1 = local_48;
  }
  FUN_100101788(local_60,"build://Music/InGame/Parts/Death/5_Death-03-Tail.ogg");
  ppuVar2 = (undefined1 **)local_60[0];
  if (-1 < local_49) {
    ppuVar2 = local_60;
  }
  FUN_10052c444(0x3f800000,pppuVar1,ppuVar2,0);
  if (local_49 < '\0') {
    operator_delete(local_60[0]);
  }
  if (local_31 < '\0') {
    operator_delete(local_48[0]);
  }
  FUN_100101788(local_48,"build://Music/InGame/Parts/Death/6_Death-04.ogg");
  pppuVar1 = (undefined8 ***)local_48[0];
  if (-1 < local_31) {
    pppuVar1 = local_48;
  }
  FUN_100101788(local_60,"build://Music/InGame/Parts/Death/7_Death-04-Tail.ogg");
  ppuVar2 = (undefined1 **)local_60[0];
  if (-1 < local_49) {
    ppuVar2 = local_60;
  }
  FUN_10052c444(0x3f800000,pppuVar1,ppuVar2,0);
  if (local_49 < '\0') {
    operator_delete(local_60[0]);
  }
  if (local_31 < '\0') {
    operator_delete(local_48[0]);
  }
  FUN_10052c45c();
  return uVar3;
}




undefined8 FUN_1000ffadc(void)

{
  undefined8 ***pppuVar1;
  undefined1 **ppuVar2;
  undefined8 uVar3;
  undefined1 *local_60 [2];
  char local_49;
  undefined8 **local_48 [2];
  char local_31;
  
  uVar3 = FUN_10052c424("ingamewin");
  FUN_10052c434("default");
  FUN_100101788(local_48,"build://Music/InGame/Parts/End/0_Win-Intro.ogg");
  pppuVar1 = (undefined8 ***)local_48[0];
  if (-1 < local_31) {
    pppuVar1 = local_48;
  }
  FUN_100101788(local_60,"build://Music/InGame/Parts/End/1_Win-Intro-Tail.ogg");
  ppuVar2 = (undefined1 **)local_60[0];
  if (-1 < local_49) {
    ppuVar2 = local_60;
  }
  FUN_10052c444(0x3f800000,pppuVar1,ppuVar2,"intro");
  if (local_49 < '\0') {
    operator_delete(local_60[0]);
  }
  if (local_31 < '\0') {
    operator_delete(local_48[0]);
  }
  FUN_100101788(local_48,"build://Music/InGame/Parts/End/2_Win-Loop.ogg");
  pppuVar1 = (undefined8 ***)local_48[0];
  if (-1 < local_31) {
    pppuVar1 = local_48;
  }
  FUN_100101788(local_60,"build://Music/InGame/Parts/End/3_Win-Loop-Tail.ogg");
  ppuVar2 = (undefined1 **)local_60[0];
  if (-1 < local_49) {
    ppuVar2 = local_60;
  }
  FUN_10052c444(0x3f800000,pppuVar1,ppuVar2,0);
  if (local_49 < '\0') {
    operator_delete(local_60[0]);
  }
  if (local_31 < '\0') {
    operator_delete(local_48[0]);
  }
  FUN_100101788(local_48,"build://Music/InGame/Parts/End/2_Win-Loop.ogg");
  pppuVar1 = (undefined8 ***)local_48[0];
  if (-1 < local_31) {
    pppuVar1 = local_48;
  }
  FUN_100101788(local_60,"build://Music/InGame/Parts/End/3_Win-Loop-Tail.ogg");
  ppuVar2 = (undefined1 **)local_60[0];
  if (-1 < local_49) {
    ppuVar2 = local_60;
  }
  FUN_10052c444(0x3f800000,pppuVar1,ppuVar2,0);
  if (local_49 < '\0') {
    operator_delete(local_60[0]);
  }
  if (local_31 < '\0') {
    operator_delete(local_48[0]);
  }
  FUN_10052c45c();
  return uVar3;
}




undefined8 FUN_1000ffc94(void)

{
  undefined8 ***pppuVar1;
  undefined1 **ppuVar2;
  undefined8 uVar3;
  undefined1 *local_60 [2];
  char local_49;
  undefined8 **local_48 [2];
  char local_31;
  
  uVar3 = FUN_10052c424("ingamelose");
  FUN_10052c434("default");
  FUN_100101788(local_48,"build://Music/InGame/Parts/End/0_Lose-Intro.ogg");
  pppuVar1 = (undefined8 ***)local_48[0];
  if (-1 < local_31) {
    pppuVar1 = local_48;
  }
  FUN_100101788(local_60,"build://Music/InGame/Parts/End/1_Lose-Intro-Tail.ogg");
  ppuVar2 = (undefined1 **)local_60[0];
  if (-1 < local_49) {
    ppuVar2 = local_60;
  }
  FUN_10052c444(0x3f800000,pppuVar1,ppuVar2,"intro");
  if (local_49 < '\0') {
    operator_delete(local_60[0]);
  }
  if (local_31 < '\0') {
    operator_delete(local_48[0]);
  }
  FUN_100101788(local_48,"build://Music/InGame/Parts/End/2_Lose-Loop.ogg");
  pppuVar1 = (undefined8 ***)local_48[0];
  if (-1 < local_31) {
    pppuVar1 = local_48;
  }
  FUN_100101788(local_60,"build://Music/InGame/Parts/End/3_Lose-Loop-Tail.ogg");
  ppuVar2 = (undefined1 **)local_60[0];
  if (-1 < local_49) {
    ppuVar2 = local_60;
  }
  FUN_10052c444(0x3f800000,pppuVar1,ppuVar2,0);
  if (local_49 < '\0') {
    operator_delete(local_60[0]);
  }
  if (local_31 < '\0') {
    operator_delete(local_48[0]);
  }
  FUN_100101788(local_48,"build://Music/InGame/Parts/End/2_Lose-Loop.ogg");
  pppuVar1 = (undefined8 ***)local_48[0];
  if (-1 < local_31) {
    pppuVar1 = local_48;
  }
  FUN_100101788(local_60,"build://Music/InGame/Parts/End/3_Lose-Loop-Tail.ogg");
  ppuVar2 = (undefined1 **)local_60[0];
  if (-1 < local_49) {
    ppuVar2 = local_60;
  }
  FUN_10052c444(0x3f800000,pppuVar1,ppuVar2,0);
  if (local_49 < '\0') {
    operator_delete(local_60[0]);
  }
  if (local_31 < '\0') {
    operator_delete(local_48[0]);
  }
  FUN_10052c45c();
  return uVar3;
}




undefined8 FUN_1000ffe4c(void)

{
  undefined8 ***pppuVar1;
  undefined1 **ppuVar2;
  undefined8 uVar3;
  undefined1 *local_60 [2];
  char local_49;
  undefined8 **local_48 [2];
  char local_31;
  
  uVar3 = FUN_10052c424("ingame5v5");
  FUN_10052c434("jungle");
  FUN_100101788(local_48,"build://Music/InGame/Parts5v5/1-Intro.ogg");
  pppuVar1 = (undefined8 ***)local_48[0];
  if (-1 < local_31) {
    pppuVar1 = local_48;
  }
  FUN_100101788(local_60,"build://Music/InGame/Parts5v5/2-Intro-Tail.ogg");
  ppuVar2 = (undefined1 **)local_60[0];
  if (-1 < local_49) {
    ppuVar2 = local_60;
  }
  FUN_10052c444(0x3f800000,pppuVar1,ppuVar2,"intro");
  if (local_49 < '\0') {
    operator_delete(local_60[0]);
  }
  if (local_31 < '\0') {
    operator_delete(local_48[0]);
  }
  FUN_100101788(local_48,"build://Music/InGame/Parts5v5/3-Early-01.ogg");
  pppuVar1 = (undefined8 ***)local_48[0];
  if (-1 < local_31) {
    pppuVar1 = local_48;
  }
  FUN_100101788(local_60,"build://Music/InGame/Parts5v5/4-Early-Tail-2.ogg");
  ppuVar2 = (undefined1 **)local_60[0];
  if (-1 < local_49) {
    ppuVar2 = local_60;
  }
  FUN_10052c444(0x40400000,pppuVar1,ppuVar2,0);
  if (local_49 < '\0') {
    operator_delete(local_60[0]);
  }
  if (local_31 < '\0') {
    operator_delete(local_48[0]);
  }
  FUN_100101788(local_48,"build://Music/InGame/Parts5v5/70-Early-10.ogg");
  pppuVar1 = (undefined8 ***)local_48[0];
  if (-1 < local_31) {
    pppuVar1 = local_48;
  }
  FUN_100101788(local_60,"build://Music/InGame/Parts5v5/71-Early-Tail-11.ogg");
  ppuVar2 = (undefined1 **)local_60[0];
  if (-1 < local_49) {
    ppuVar2 = local_60;
  }
  FUN_10052c444(0x40000000,pppuVar1,ppuVar2,0);
  if (local_49 < '\0') {
    operator_delete(local_60[0]);
  }
  if (local_31 < '\0') {
    operator_delete(local_48[0]);
  }
  FUN_100101788(local_48,"build://Music/InGame/Parts5v5/72-Early-12.ogg");
  pppuVar1 = (undefined8 ***)local_48[0];
  if (-1 < local_31) {
    pppuVar1 = local_48;
  }
  FUN_100101788(local_60,"build://Music/InGame/Parts5v5/73-Early-Tail-13.ogg");
  ppuVar2 = (undefined1 **)local_60[0];
  if (-1 < local_49) {
    ppuVar2 = local_60;
  }
  FUN_10052c444(0x40000000,pppuVar1,ppuVar2,0);
  if (local_49 < '\0') {
    operator_delete(local_60[0]);
  }
  if (local_31 < '\0') {
    operator_delete(local_48[0]);
  }
  FUN_100101788(local_48,"build://Music/InGame/Parts5v5/5-Early-02.ogg");
  pppuVar1 = (undefined8 ***)local_48[0];
  if (-1 < local_31) {
    pppuVar1 = local_48;
  }
  FUN_100101788(local_60,"build://Music/InGame/Parts5v5/6-Early-Tail-3.ogg");
  ppuVar2 = (undefined1 **)local_60[0];
  if (-1 < local_49) {
    ppuVar2 = local_60;
  }
  FUN_10052c444(0x3f800000,pppuVar1,ppuVar2,0);
  if (local_49 < '\0') {
    operator_delete(local_60[0]);
  }
  if (local_31 < '\0') {
    operator_delete(local_48[0]);
  }
  FUN_100101788(local_48,"build://Music/InGame/Parts5v5/7-Early-03.ogg");
  pppuVar1 = (undefined8 ***)local_48[0];
  if (-1 < local_31) {
    pppuVar1 = local_48;
  }
  FUN_100101788(local_60,"build://Music/InGame/Parts5v5/8-Early-Tail-4.ogg");
  ppuVar2 = (undefined1 **)local_60[0];
  if (-1 < local_49) {
    ppuVar2 = local_60;
  }
  FUN_10052c444(0x3f800000,pppuVar1,ppuVar2,0);
  if (local_49 < '\0') {
    operator_delete(local_60[0]);
  }
  if (local_31 < '\0') {
    operator_delete(local_48[0]);
  }
  FUN_100101788(local_48,"build://Music/InGame/Parts5v5/9-Early-04.ogg");
  pppuVar1 = (undefined8 ***)local_48[0];
  if (-1 < local_31) {
    pppuVar1 = local_48;
  }
  FUN_100101788(local_60,"build://Music/InGame/Parts5v5/10-Early-Tail-5.ogg");
  ppuVar2 = (undefined1 **)local_60[0];
  if (-1 < local_49) {
    ppuVar2 = local_60;
  }
  FUN_10052c444(0x3f800000,pppuVar1,ppuVar2,0);
  if (local_49 < '\0') {
    operator_delete(local_60[0]);
  }
  if (local_31 < '\0') {
    operator_delete(local_48[0]);
  }
  FUN_100101788(local_48,"build://Music/InGame/Parts5v5/11-Early-05.ogg");
  pppuVar1 = (undefined8 ***)local_48[0];
  if (-1 < local_31) {
    pppuVar1 = local_48;
  }
  FUN_100101788(local_60,"build://Music/InGame/Parts5v5/12-Early-Tail-6.ogg");
  ppuVar2 = (undefined1 **)local_60[0];
  if (-1 < local_49) {
    ppuVar2 = local_60;
  }
  FUN_10052c444(0x3f800000,pppuVar1,ppuVar2,0);
  if (local_49 < '\0') {
    operator_delete(local_60[0]);
  }
  if (local_31 < '\0') {
    operator_delete(local_48[0]);
  }
  FUN_100101788(local_48,"build://Music/InGame/Parts5v5/13-Early-06.ogg");
  pppuVar1 = (undefined8 ***)local_48[0];
  if (-1 < local_31) {
    pppuVar1 = local_48;
  }
  FUN_100101788(local_60,"build://Music/InGame/Parts5v5/14-Early-Tail-7.ogg");
  ppuVar2 = (undefined1 **)local_60[0];
  if (-1 < local_49) {
    ppuVar2 = local_60;
  }
  FUN_10052c444(0x3f800000,pppuVar1,ppuVar2,0);
  if (local_49 < '\0') {
    operator_delete(local_60[0]);
  }
  if (local_31 < '\0') {
    operator_delete(local_48[0]);
  }
  FUN_100101788(local_48,"build://Music/InGame/Parts5v5/15-Early-07.ogg");
  pppuVar1 = (undefined8 ***)local_48[0];
  if (-1 < local_31) {
    pppuVar1 = local_48;
  }
  FUN_100101788(local_60,"build://Music/InGame/Parts5v5/16-Early-Tail-8.ogg");
  ppuVar2 = (undefined1 **)local_60[0];
  if (-1 < local_49) {
    ppuVar2 = local_60;
  }
  FUN_10052c444(0x3f800000,pppuVar1,ppuVar2,0);
  if (local_49 < '\0') {
    operator_delete(local_60[0]);
  }
  if (local_31 < '\0') {
    operator_delete(local_48[0]);
  }
  FUN_100101788(local_48,"build://Music/InGame/Parts5v5/17-Early-08.ogg");
  pppuVar1 = (undefined8 ***)local_48[0];
  if (-1 < local_31) {
    pppuVar1 = local_48;
  }
  FUN_100101788(local_60,"build://Music/InGame/Parts5v5/18-Early-Tail-9.ogg");
  ppuVar2 = (undefined1 **)local_60[0];
  if (-1 < local_49) {
    ppuVar2 = local_60;
  }
  FUN_10052c444(0x3f800000,pppuVar1,ppuVar2,0);
  if (local_49 < '\0') {
    operator_delete(local_60[0]);
  }
  if (local_31 < '\0') {
    operator_delete(local_48[0]);
  }
  FUN_100101788(local_48,"build://Music/InGame/Parts5v5/74-Transition-Mid-Early.ogg");
  pppuVar1 = (undefined8 ***)local_48[0];
  if (-1 < local_31) {
    pppuVar1 = local_48;
  }
  FUN_100101788(local_60,"build://Music/InGame/Parts5v5/75-Transition-Mid-Early-Tail.ogg");
  ppuVar2 = (undefined1 **)local_60[0];
  if (-1 < local_49) {
    ppuVar2 = local_60;
  }
  FUN_10052c444(0x3f800000,pppuVar1,ppuVar2,"lane");
  if (local_49 < '\0') {
    operator_delete(local_60[0]);
  }
  if (local_31 < '\0') {
    operator_delete(local_48[0]);
  }
  FUN_100101788(local_48,"build://Music/InGame/Parts5v5/78-Transition-Death-Early.ogg");
  pppuVar1 = (undefined8 ***)local_48[0];
  if (-1 < local_31) {
    pppuVar1 = local_48;
  }
  FUN_100101788(local_60,"build://Music/InGame/Parts5v5/79-Transition-Death-Early-Tail.ogg");
  ppuVar2 = (undefined1 **)local_60[0];
  if (-1 < local_49) {
    ppuVar2 = local_60;
  }
  FUN_10052c444(0x3f800000,pppuVar1,ppuVar2,"death");
  if (local_49 < '\0') {
    operator_delete(local_60[0]);
  }
  if (local_31 < '\0') {
    operator_delete(local_48[0]);
  }
  FUN_10052c434("lane");
  FUN_100101788(local_48,"build://Music/InGame/Parts5v5/19-Transition Laning To Battle.ogg");
  pppuVar1 = (undefined8 ***)local_48[0];
  if (-1 < local_31) {
    pppuVar1 = local_48;
  }
  FUN_100101788(local_60,"build://Music/InGame/Parts5v5/20-Transition Laning To Battle-Tail.ogg");
  ppuVar2 = (undefined1 **)local_60[0];
  if (-1 < local_49) {
    ppuVar2 = local_60;
  }
  FUN_10052c444(0x3f800000,pppuVar1,ppuVar2,"jungle");
  if (local_49 < '\0') {
    operator_delete(local_60[0]);
  }
  if (local_31 < '\0') {
    operator_delete(local_48[0]);
  }
  FUN_100101788(local_48,"build://Music/InGame/Parts5v5/21-Mid-1.ogg");
  pppuVar1 = (undefined8 ***)local_48[0];
  if (-1 < local_31) {
    pppuVar1 = local_48;
  }
  FUN_100101788(local_60,"build://Music/InGame/Parts5v5/22-Mid-Tail-2.ogg");
  ppuVar2 = (undefined1 **)local_60[0];
  if (-1 < local_49) {
    ppuVar2 = local_60;
  }
  FUN_10052c444(0x3f800000,pppuVar1,ppuVar2,0);
  if (local_49 < '\0') {
    operator_delete(local_60[0]);
  }
  if (local_31 < '\0') {
    operator_delete(local_48[0]);
  }
  FUN_100101788(local_48,"build://Music/InGame/Parts5v5/23-Mid-2.ogg");
  pppuVar1 = (undefined8 ***)local_48[0];
  if (-1 < local_31) {
    pppuVar1 = local_48;
  }
  FUN_100101788(local_60,"build://Music/InGame/Parts5v5/24-Mid-Tail-3.ogg");
  ppuVar2 = (undefined1 **)local_60[0];
  if (-1 < local_49) {
    ppuVar2 = local_60;
  }
  FUN_10052c444(0x3f800000,pppuVar1,ppuVar2,0);
  if (local_49 < '\0') {
    operator_delete(local_60[0]);
  }
  if (local_31 < '\0') {
    operator_delete(local_48[0]);
  }
  FUN_100101788(local_48,"build://Music/InGame/Parts5v5/25-Mid-3.ogg");
  pppuVar1 = (undefined8 ***)local_48[0];
  if (-1 < local_31) {
    pppuVar1 = local_48;
  }
  FUN_100101788(local_60,"build://Music/InGame/Parts5v5/26-Mid-Tail-4.ogg");
  ppuVar2 = (undefined1 **)local_60[0];
  if (-1 < local_49) {
    ppuVar2 = local_60;
  }
  FUN_10052c444(0x3f800000,pppuVar1,ppuVar2,0);
  if (local_49 < '\0') {
    operator_delete(local_60[0]);
  }
  if (local_31 < '\0') {
    operator_delete(local_48[0]);
  }
  FUN_100101788(local_48,"build://Music/InGame/Parts5v5/27-Mid-4.ogg");
  pppuVar1 = (undefined8 ***)local_48[0];
  if (-1 < local_31) {
    pppuVar1 = local_48;
  }
  FUN_100101788(local_60,"build://Music/InGame/Parts5v5/28-Mid-Tail-5.ogg");
  ppuVar2 = (undefined1 **)local_60[0];
  if (-1 < local_49) {
    ppuVar2 = local_60;
  }
  FUN_10052c444(0x3f800000,pppuVar1,ppuVar2,0);
  if (local_49 < '\0') {
    operator_delete(local_60[0]);
  }
  if (local_31 < '\0') {
    operator_delete(local_48[0]);
  }
  FUN_100101788(local_48,"build://Music/InGame/Parts5v5/29-Mid-5.ogg");
  pppuVar1 = (undefined8 ***)local_48[0];
  if (-1 < local_31) {
    pppuVar1 = local_48;
  }
  FUN_100101788(local_60,"build://Music/InGame/Parts5v5/30-Mid-Tail-6.ogg");
  ppuVar2 = (undefined1 **)local_60[0];
  if (-1 < local_49) {
    ppuVar2 = local_60;
  }
  FUN_10052c444(0x3f800000,pppuVar1,ppuVar2,0);
  if (local_49 < '\0') {
    operator_delete(local_60[0]);
  }
  if (local_31 < '\0') {
    operator_delete(local_48[0]);
  }
  FUN_10052c434("fight");
  FUN_100101788(local_48,"build://Music/InGame/Parts5v5/31-Late-1.ogg");
  pppuVar1 = (undefined8 ***)local_48[0];
  if (-1 < local_31) {
    pppuVar1 = local_48;
  }
  FUN_100101788(local_60,"build://Music/InGame/Parts5v5/32-Late-Tail-2.ogg");
  ppuVar2 = (undefined1 **)local_60[0];
  if (-1 < local_49) {
    ppuVar2 = local_60;
  }
  FUN_10052c444(0x3f800000,pppuVar1,ppuVar2,0);
  if (local_49 < '\0') {
    operator_delete(local_60[0]);
  }
  if (local_31 < '\0') {
    operator_delete(local_48[0]);
  }
  FUN_100101788(local_48,"build://Music/InGame/Parts5v5/33-Late-2.ogg");
  pppuVar1 = (undefined8 ***)local_48[0];
  if (-1 < local_31) {
    pppuVar1 = local_48;
  }
  FUN_100101788(local_60,"build://Music/InGame/Parts5v5/34-Late-Tail-3.ogg");
  ppuVar2 = (undefined1 **)local_60[0];
  if (-1 < local_49) {
    ppuVar2 = local_60;
  }
  FUN_10052c444(0x3f800000,pppuVar1,ppuVar2,0);
  if (local_49 < '\0') {
    operator_delete(local_60[0]);
  }
  if (local_31 < '\0') {
    operator_delete(local_48[0]);
  }
  FUN_100101788(local_48,"build://Music/InGame/Parts5v5/35-Late-3.ogg");
  pppuVar1 = (undefined8 ***)local_48[0];
  if (-1 < local_31) {
    pppuVar1 = local_48;
  }
  FUN_100101788(local_60,"build://Music/InGame/Parts5v5/36-Late-Tail-4.ogg");
  ppuVar2 = (undefined1 **)local_60[0];
  if (-1 < local_49) {
    ppuVar2 = local_60;
  }
  FUN_10052c444(0x3f800000,pppuVar1,ppuVar2,0);
  if (local_49 < '\0') {
    operator_delete(local_60[0]);
  }
  if (local_31 < '\0') {
    operator_delete(local_48[0]);
  }
  FUN_100101788(local_48,"build://Music/InGame/Parts5v5/37-Late-4.ogg");
  pppuVar1 = (undefined8 ***)local_48[0];
  if (-1 < local_31) {
    pppuVar1 = local_48;
  }
  FUN_100101788(local_60,"build://Music/InGame/Parts5v5/38-Late-Tail-5.ogg");
  ppuVar2 = (undefined1 **)local_60[0];
  if (-1 < local_49) {
    ppuVar2 = local_60;
  }
  FUN_10052c444(0x3f800000,pppuVar1,ppuVar2,0);
  if (local_49 < '\0') {
    operator_delete(local_60[0]);
  }
  if (local_31 < '\0') {
    operator_delete(local_48[0]);
  }
  FUN_100101788(local_48,"build://Music/InGame/Parts5v5/39-Late-5.ogg");
  pppuVar1 = (undefined8 ***)local_48[0];
  if (-1 < local_31) {
    pppuVar1 = local_48;
  }
  FUN_100101788(local_60,"build://Music/InGame/Parts5v5/40-Late-Tail-6.ogg");
  ppuVar2 = (undefined1 **)local_60[0];
  if (-1 < local_49) {
    ppuVar2 = local_60;
  }
  FUN_10052c444(0x3f800000,pppuVar1,ppuVar2,0);
  if (local_49 < '\0') {
    operator_delete(local_60[0]);
  }
  if (local_31 < '\0') {
    operator_delete(local_48[0]);
  }
  FUN_10052c434("kraken");
  FUN_100101788(local_48,"build://Music/InGame/Parts5v5/43-End-1.ogg");
  pppuVar1 = (undefined8 ***)local_48[0];
  if (-1 < local_31) {
    pppuVar1 = local_48;
  }
  FUN_100101788(local_60,"build://Music/InGame/Parts5v5/44-End-Tail-2.ogg");
  ppuVar2 = (undefined1 **)local_60[0];
  if (-1 < local_49) {
    ppuVar2 = local_60;
  }
  FUN_10052c444(0x3f800000,pppuVar1,ppuVar2,0);
  if (local_49 < '\0') {
    operator_delete(local_60[0]);
  }
  if (local_31 < '\0') {
    operator_delete(local_48[0]);
  }
  FUN_100101788(local_48,"build://Music/InGame/Parts5v5/45-End-2.ogg");
  pppuVar1 = (undefined8 ***)local_48[0];
  if (-1 < local_31) {
    pppuVar1 = local_48;
  }
  FUN_100101788(local_60,"build://Music/InGame/Parts5v5/46-End-Tail-3.ogg");
  ppuVar2 = (undefined1 **)local_60[0];
  if (-1 < local_49) {
    ppuVar2 = local_60;
  }
  FUN_10052c444(0x3f800000,pppuVar1,ppuVar2,0);
  if (local_49 < '\0') {
    operator_delete(local_60[0]);
  }
  if (local_31 < '\0') {
    operator_delete(local_48[0]);
  }
  FUN_100101788(local_48,"build://Music/InGame/Parts5v5/47-End-3.ogg");
  pppuVar1 = (undefined8 ***)local_48[0];
  if (-1 < local_31) {
    pppuVar1 = local_48;
  }
  FUN_100101788(local_60,"build://Music/InGame/Parts5v5/48-End-Tail-4.ogg");
  ppuVar2 = (undefined1 **)local_60[0];
  if (-1 < local_49) {
    ppuVar2 = local_60;
  }
  FUN_10052c444(0x3f800000,pppuVar1,ppuVar2,0);
  if (local_49 < '\0') {
    operator_delete(local_60[0]);
  }
  if (local_31 < '\0') {
    operator_delete(local_48[0]);
  }
  FUN_100101788(local_48,"build://Music/InGame/Parts5v5/49-End-4.ogg");
  pppuVar1 = (undefined8 ***)local_48[0];
  if (-1 < local_31) {
    pppuVar1 = local_48;
  }
  FUN_100101788(local_60,"build://Music/InGame/Parts5v5/50-End-Tail-5.ogg");
  ppuVar2 = (undefined1 **)local_60[0];
  if (-1 < local_49) {
    ppuVar2 = local_60;
  }
  FUN_10052c444(0x3f800000,pppuVar1,ppuVar2,0);
  if (local_49 < '\0') {
    operator_delete(local_60[0]);
  }
  if (local_31 < '\0') {
    operator_delete(local_48[0]);
  }
  FUN_100101788(local_48,"build://Music/InGame/Parts5v5/51-End-5.ogg");
  pppuVar1 = (undefined8 ***)local_48[0];
  if (-1 < local_31) {
    pppuVar1 = local_48;
  }
  FUN_100101788(local_60,"build://Music/InGame/Parts5v5/52-End-Tail-6.ogg");
  ppuVar2 = (undefined1 **)local_60[0];
  if (-1 < local_49) {
    ppuVar2 = local_60;
  }
  FUN_10052c444(0x3f800000,pppuVar1,ppuVar2,0);
  if (local_49 < '\0') {
    operator_delete(local_60[0]);
  }
  if (local_31 < '\0') {
    operator_delete(local_48[0]);
  }
  FUN_100101788(local_48,"build://Music/InGame/Parts5v5/53-End-6.ogg");
  pppuVar1 = (undefined8 ***)local_48[0];
  if (-1 < local_31) {
    pppuVar1 = local_48;
  }
  FUN_100101788(local_60,"build://Music/InGame/Parts5v5/54-End-Tail-7.ogg");
  ppuVar2 = (undefined1 **)local_60[0];
  if (-1 < local_49) {
    ppuVar2 = local_60;
  }
  FUN_10052c444(0x3f800000,pppuVar1,ppuVar2,0);
  if (local_49 < '\0') {
    operator_delete(local_60[0]);
  }
  if (local_31 < '\0') {
    operator_delete(local_48[0]);
  }
  FUN_100101788(local_48,"build://Music/InGame/Parts5v5/55-End-7.ogg");
  pppuVar1 = (undefined8 ***)local_48[0];
  if (-1 < local_31) {
    pppuVar1 = local_48;
  }
  FUN_100101788(local_60,"build://Music/InGame/Parts5v5/56-End-Tail-8.ogg");
  ppuVar2 = (undefined1 **)local_60[0];
  if (-1 < local_49) {
    ppuVar2 = local_60;
  }
  FUN_10052c444(0x3f800000,pppuVar1,ppuVar2,0);
  if (local_49 < '\0') {
    operator_delete(local_60[0]);
  }
  if (local_31 < '\0') {
    operator_delete(local_48[0]);
  }
  FUN_100101788(local_48,"build://Music/InGame/Parts5v5/57-End-8.ogg");
  pppuVar1 = (undefined8 ***)local_48[0];
  if (-1 < local_31) {
    pppuVar1 = local_48;
  }
  FUN_100101788(local_60,"build://Music/InGame/Parts5v5/58-End-Tail-9.ogg");
  ppuVar2 = (undefined1 **)local_60[0];
  if (-1 < local_49) {
    ppuVar2 = local_60;
  }
  FUN_10052c444(0x3f800000,pppuVar1,ppuVar2,0);
  if (local_49 < '\0') {
    operator_delete(local_60[0]);
  }
  if (local_31 < '\0') {
    operator_delete(local_48[0]);
  }
  FUN_10052c434("death");
  FUN_100101788(local_48,"build://Music/InGame/Parts5v5/76-Transition-Early-Death.ogg");
  pppuVar1 = (undefined8 ***)local_48[0];
  if (-1 < local_31) {
    pppuVar1 = local_48;
  }
  FUN_100101788(local_60,"build://Music/InGame/Parts5v5/77-Transition-Early-Death-Tail.ogg");
  ppuVar2 = (undefined1 **)local_60[0];
  if (-1 < local_49) {
    ppuVar2 = local_60;
  }
  FUN_10052c444(0x3f800000,pppuVar1,ppuVar2,"jungle");
  if (local_49 < '\0') {
    operator_delete(local_60[0]);
  }
  if (local_31 < '\0') {
    operator_delete(local_48[0]);
  }
  FUN_100101788(local_48,"build://Music/InGame/Parts5v5/60-Death-1.ogg");
  pppuVar1 = (undefined8 ***)local_48[0];
  if (-1 < local_31) {
    pppuVar1 = local_48;
  }
  FUN_100101788(local_60,"build://Music/InGame/Parts5v5/61-Death-Tail-2.ogg");
  ppuVar2 = (undefined1 **)local_60[0];
  if (-1 < local_49) {
    ppuVar2 = local_60;
  }
  FUN_10052c444(0x3f800000,pppuVar1,ppuVar2,0);
  if (local_49 < '\0') {
    operator_delete(local_60[0]);
  }
  if (local_31 < '\0') {
    operator_delete(local_48[0]);
  }
  FUN_100101788(local_48,"build://Music/InGame/Parts5v5/62-Death-3.ogg");
  pppuVar1 = (undefined8 ***)local_48[0];
  if (-1 < local_31) {
    pppuVar1 = local_48;
  }
  FUN_100101788(local_60,"build://Music/InGame/Parts5v5/63-Death-Tail-4.ogg");
  ppuVar2 = (undefined1 **)local_60[0];
  if (-1 < local_49) {
    ppuVar2 = local_60;
  }
  FUN_10052c444(0x3f800000,pppuVar1,ppuVar2,0);
  if (local_49 < '\0') {
    operator_delete(local_60[0]);
  }
  if (local_31 < '\0') {
    operator_delete(local_48[0]);
  }
  FUN_100101788(local_48,"build://Music/InGame/Parts5v5/64-Death-5.ogg");
  pppuVar1 = (undefined8 ***)local_48[0];
  if (-1 < local_31) {
    pppuVar1 = local_48;
  }
  FUN_100101788(local_60,"build://Music/InGame/Parts5v5/65-Death-Tail-6.ogg");
  ppuVar2 = (undefined1 **)local_60[0];
  if (-1 < local_49) {
    ppuVar2 = local_60;
  }
  FUN_10052c444(0x3f800000,pppuVar1,ppuVar2,0);
  if (local_49 < '\0') {
    operator_delete(local_60[0]);
  }
  if (local_31 < '\0') {
    operator_delete(local_48[0]);
  }
  FUN_100101788(local_48,"build://Music/InGame/Parts5v5/66-Death-7.ogg");
  pppuVar1 = (undefined8 ***)local_48[0];
  if (-1 < local_31) {
    pppuVar1 = local_48;
  }
  FUN_100101788(local_60,"build://Music/InGame/Parts5v5/67-Death-Tail-8.ogg");
  ppuVar2 = (undefined1 **)local_60[0];
  if (-1 < local_49) {
    ppuVar2 = local_60;
  }
  FUN_10052c444(0x3f800000,pppuVar1,ppuVar2,0);
  if (local_49 < '\0') {
    operator_delete(local_60[0]);
  }
  if (local_31 < '\0') {
    operator_delete(local_48[0]);
  }
  FUN_10052c45c();
  return uVar3;
}

