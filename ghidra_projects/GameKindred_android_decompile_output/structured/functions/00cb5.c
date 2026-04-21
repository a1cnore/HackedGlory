// functions/00cb5 — 10 functions
#include "libGameKindred.h"




void FUN_00cb5080(undefined8 param_1)

{
  FUN_00cb50a4();
  FUN_00cb4ae4(param_1);
  return;
}




undefined4 FUN_00cb50a4(void)

{
  uint uVar1;
  
  uVar1 = FUN_0092ec00();
  if (uVar1 < 0x11) {
    return *(undefined4 *)(&DAT_01bc4db0 + (long)(int)uVar1 * 4);
  }
  return 0x11;
}




undefined8 * FUN_00cb50d8(byte *param_1,ulong param_2)

{
  size_t __n;
  size_t sVar1;
  byte bVar2;
  ulong uVar3;
  int iVar4;
  undefined8 *puVar5;
  byte *pbVar6;
  char *pcVar7;
  long lVar8;
  char *pcVar9;
  byte *pbVar10;
  
  bVar2 = *param_1;
  uVar3 = (ulong)(bVar2 >> 1);
  __n = uVar3;
  if ((bVar2 & 1) != 0) {
    __n = *(size_t *)(param_1 + 8);
  }
  sVar1 = (ulong)(DAT_03210718 >> 1);
  if ((DAT_03210718 & 1) != 0) {
    sVar1 = DAT_03210720;
  }
  if (__n == sVar1) {
    pbVar10 = *(byte **)(param_1 + 0x10);
    if ((bVar2 & 1) == 0) {
      pbVar10 = param_1 + 1;
    }
    pbVar6 = DAT_03210728;
    if ((DAT_03210718 & 1) == 0) {
      pbVar6 = &DAT_03210719;
    }
    if ((bVar2 & 1) == 0) {
      if (__n != 0) {
        lVar8 = -uVar3;
        pbVar10 = param_1;
        do {
          pbVar10 = pbVar10 + 1;
          if (*pbVar10 != *pbVar6) goto LAB_00cb5188;
          lVar8 = lVar8 + 1;
          pbVar6 = pbVar6 + 1;
        } while (lVar8 != 0);
      }
    }
    else if ((__n != 0) && (iVar4 = memcmp(pbVar10,pbVar6,__n), iVar4 != 0)) goto LAB_00cb5188;
    pcVar7 = "MENU_GUILD_TYPE_LABEL_CASUAL";
    pcVar9 = "MENU_GUILD_TYPE_LABEL_CAPS_CASUAL";
    goto LAB_00cb53fc;
  }
LAB_00cb5188:
  sVar1 = (ulong)(DAT_03210730 >> 1);
  if ((DAT_03210730 & 1) != 0) {
    sVar1 = DAT_03210738;
  }
  if (__n == sVar1) {
    pbVar10 = *(byte **)(param_1 + 0x10);
    if ((bVar2 & 1) == 0) {
      pbVar10 = param_1 + 1;
    }
    pbVar6 = DAT_03210740;
    if ((DAT_03210730 & 1) == 0) {
      pbVar6 = &DAT_03210731;
    }
    if ((bVar2 & 1) == 0) {
      if (__n != 0) {
        lVar8 = -uVar3;
        pbVar10 = param_1;
        do {
          pbVar10 = pbVar10 + 1;
          if (*pbVar10 != *pbVar6) goto LAB_00cb521c;
          lVar8 = lVar8 + 1;
          pbVar6 = pbVar6 + 1;
        } while (lVar8 != 0);
      }
    }
    else if ((__n != 0) && (iVar4 = memcmp(pbVar10,pbVar6,__n), iVar4 != 0)) goto LAB_00cb521c;
    pcVar7 = "MENU_GUILD_TYPE_LABEL_MIDCORE";
    pcVar9 = "MENU_GUILD_TYPE_LABEL_CAPS_MIDCORE";
    goto LAB_00cb53fc;
  }
LAB_00cb521c:
  sVar1 = (ulong)(DAT_03210748 >> 1);
  if ((DAT_03210748 & 1) != 0) {
    sVar1 = DAT_03210750;
  }
  if (__n == sVar1) {
    pbVar10 = *(byte **)(param_1 + 0x10);
    if ((bVar2 & 1) == 0) {
      pbVar10 = param_1 + 1;
    }
    pbVar6 = DAT_03210758;
    if ((DAT_03210748 & 1) == 0) {
      pbVar6 = &DAT_03210749;
    }
    if ((bVar2 & 1) == 0) {
      if (__n != 0) {
        lVar8 = -uVar3;
        pbVar10 = param_1;
        do {
          pbVar10 = pbVar10 + 1;
          if (*pbVar10 != *pbVar6) goto LAB_00cb52b0;
          lVar8 = lVar8 + 1;
          pbVar6 = pbVar6 + 1;
        } while (lVar8 != 0);
      }
    }
    else if ((__n != 0) && (iVar4 = memcmp(pbVar10,pbVar6,__n), iVar4 != 0)) goto LAB_00cb52b0;
    pcVar7 = "MENU_GUILD_TYPE_LABEL_COMPETITIVE";
    pcVar9 = "MENU_GUILD_TYPE_LABEL_CAPS_COMPETITIVE";
    goto LAB_00cb53fc;
  }
LAB_00cb52b0:
  sVar1 = (ulong)(DAT_03210760 >> 1);
  if ((DAT_03210760 & 1) != 0) {
    sVar1 = DAT_03210768;
  }
  if (__n == sVar1) {
    pbVar10 = *(byte **)(param_1 + 0x10);
    if ((bVar2 & 1) == 0) {
      pbVar10 = param_1 + 1;
    }
    pbVar6 = DAT_03210770;
    if ((DAT_03210760 & 1) == 0) {
      pbVar6 = &DAT_03210761;
    }
    if ((bVar2 & 1) == 0) {
      if (__n != 0) {
        lVar8 = -uVar3;
        pbVar10 = param_1;
        do {
          pbVar10 = pbVar10 + 1;
          if (*pbVar10 != *pbVar6) goto LAB_00cb5344;
          lVar8 = lVar8 + 1;
          pbVar6 = pbVar6 + 1;
        } while (lVar8 != 0);
      }
    }
    else if ((__n != 0) && (iVar4 = memcmp(pbVar10,pbVar6,__n), iVar4 != 0)) goto LAB_00cb5344;
    pcVar7 = "MENU_GUILD_TYPE_LABEL_UNIVERSITY";
    pcVar9 = "MENU_GUILD_TYPE_LABEL_CAPS_UNIVERSITY";
  }
  else {
LAB_00cb5344:
    sVar1 = (ulong)(DAT_03210778 >> 1);
    if ((DAT_03210778 & 1) != 0) {
      sVar1 = DAT_03210780;
    }
    if (__n != sVar1) {
LAB_00cb53e0:
      return &DAT_03210450;
    }
    pbVar10 = *(byte **)(param_1 + 0x10);
    if ((bVar2 & 1) == 0) {
      pbVar10 = param_1 + 1;
    }
    pbVar6 = DAT_03210788;
    if ((DAT_03210778 & 1) == 0) {
      pbVar6 = &DAT_03210779;
    }
    if ((bVar2 & 1) == 0) {
      if (__n != 0) {
        lVar8 = -uVar3;
        do {
          param_1 = param_1 + 1;
          if (*param_1 != *pbVar6) {
            return &DAT_03210450;
          }
          lVar8 = lVar8 + 1;
          pbVar6 = pbVar6 + 1;
        } while (lVar8 != 0);
      }
    }
    else if ((__n != 0) && (iVar4 = memcmp(pbVar10,pbVar6,__n), iVar4 != 0)) goto LAB_00cb53e0;
    pcVar7 = "MENU_GUILD_TYPE_LABEL_ANY";
    pcVar9 = "MENU_GUILD_TYPE_LABEL_CAPS_ANY";
  }
LAB_00cb53fc:
  if ((param_2 & 1) == 0) {
    pcVar9 = pcVar7;
  }
  puVar5 = (undefined8 *)FUN_00e6ce7c(pcVar9,0);
  return puVar5;
}




undefined8 FUN_00cb5420(undefined8 param_1)

{
  short sVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  iVar2 = FUN_00e70b14();
  if (iVar2 != 0) {
    uVar4 = 0;
    do {
      sVar1 = FUN_00e70b1c(param_1,uVar4);
      if (sVar1 == 0x20) {
        return 0;
      }
      uVar4 = uVar4 + 1;
      uVar3 = FUN_00e70b14(param_1);
    } while (uVar4 < uVar3);
  }
  return 1;
}




undefined8 FUN_00cb5480(undefined8 param_1)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  iVar2 = FUN_00e70b14();
  if (iVar2 != 0) {
    uVar4 = 0;
    do {
      uVar1 = FUN_00e70b1c(param_1,uVar4);
      if ((9 < (ushort)(uVar1 - 0x30)) && (0x19 < (ushort)((uVar1 & 0xffdf) - 0x41))) {
        return 0;
      }
      uVar4 = uVar4 + 1;
      uVar3 = FUN_00e70b14(param_1);
    } while (uVar4 < uVar3);
  }
  return 1;
}




undefined8 FUN_00cb54f8(undefined8 param_1)

{
  short sVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  iVar2 = FUN_00e70b14();
  if (iVar2 != 0) {
    uVar4 = 0;
    do {
      sVar1 = FUN_00e70b1c(param_1,uVar4);
      if (9 < (ushort)(sVar1 - 0x30U)) {
        return 0;
      }
      uVar4 = uVar4 + 1;
      uVar3 = FUN_00e70b14(param_1);
    } while (uVar4 < uVar3);
  }
  return 1;
}




undefined8 FUN_00cb555c(undefined8 param_1)

{
  short sVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  iVar2 = FUN_00e70b14();
  if (iVar2 != 0) {
    uVar4 = 0;
    do {
      sVar1 = FUN_00e70b1c(param_1,uVar4);
      if (0x5e < (ushort)(sVar1 - 0x20U)) {
        return 0;
      }
      uVar4 = uVar4 + 1;
      uVar3 = FUN_00e70b14(param_1);
    } while (uVar4 < uVar3);
  }
  return 1;
}




void FUN_00cb55c0(undefined8 param_1,undefined8 param_2,long param_3,ulong param_4)

{
  undefined1 *puVar1;
  char *pcVar2;
  long lVar3;
  float fVar4;
  bool bVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  char *pcVar9;
  undefined8 local_a8;
  void *local_a0;
  undefined8 local_98;
  void *local_90;
  undefined8 local_88;
  void *local_80;
  double local_78;
  int local_70;
  int local_6c;
  undefined8 local_68;
  void *local_60;
  undefined8 local_58;
  void *local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  thunk_FUN_00e7051c(param_1,param_2);
  FUN_00e70510(&local_58);
  FUN_00e70510(&local_68);
  iVar6 = FUN_00e703d4((double)param_3,&local_6c,&local_70,&local_78);
  FUN_00e70510(&local_88);
  FUN_00e70510(&local_98);
  puVar1 = &DAT_01e277f2;
  if ((param_4 & 1) == 0) {
    puVar1 = &DAT_01e4a398;
  }
  if (iVar6 < 1) {
    if (0 < local_6c) {
      pcVar9 = "GENERIC_TIME_UNIT_HOUR_SHORT";
      pcVar2 = "GENERIC_TIME_UNIT_HOURS_SHORT";
      if ((param_4 & 1) == 0) {
        pcVar9 = "GENERIC_TIME_UNIT_HOUR";
        pcVar2 = "GENERIC_TIME_UNIT_HOURS";
      }
      if (local_6c != 1) {
        pcVar9 = pcVar2;
      }
      uVar7 = FUN_00e6ce7c(pcVar9,0);
      FUN_00910394(&local_88,uVar7);
      FUN_00e70e18(&local_58,"%d%s",local_6c,puVar1);
      if (local_70 < 1) goto LAB_00cb58b8;
      pcVar9 = "GENERIC_TIME_UNIT_MINUTE_SHORT";
      pcVar2 = "GENERIC_TIME_UNIT_MINUTES_SHORT";
      if ((param_4 & 1) == 0) {
        pcVar9 = "GENERIC_TIME_UNIT_MINUTE";
        pcVar2 = "GENERIC_TIME_UNIT_MINUTES";
      }
      if (local_70 != 1) {
        pcVar9 = pcVar2;
      }
      uVar7 = FUN_00e6ce7c(pcVar9,0);
      FUN_00910394(&local_98,uVar7);
      local_6c = local_70;
      goto LAB_00cb57d4;
    }
    if (local_70 < 1) {
      bVar5 = (param_4 & 1) == 0;
      pcVar9 = "GENERIC_TIME_UNIT_SECONDS_SHORT";
      if (bVar5) {
        pcVar9 = "GENERIC_TIME_UNIT_SECONDS";
      }
      pcVar2 = "GENERIC_TIME_UNIT_SECOND_SHORT";
      if (bVar5) {
        pcVar2 = "GENERIC_TIME_UNIT_SECOND";
      }
      if (local_78 <= 1.0) {
        pcVar9 = pcVar2;
      }
      uVar7 = FUN_00e6ce7c(pcVar9,0);
      FUN_00910394(&local_88,uVar7);
      fVar4 = (float)local_78;
      if ((float)local_78 <= 0.0) {
        fVar4 = 0.0;
      }
      local_70 = (int)fVar4;
    }
    else {
      pcVar9 = "GENERIC_TIME_UNIT_MINUTE_SHORT";
      pcVar2 = "GENERIC_TIME_UNIT_MINUTES_SHORT";
      if ((param_4 & 1) == 0) {
        pcVar9 = "GENERIC_TIME_UNIT_MINUTE";
        pcVar2 = "GENERIC_TIME_UNIT_MINUTES";
      }
      if (local_70 != 1) {
        pcVar9 = pcVar2;
      }
      uVar7 = FUN_00e6ce7c(pcVar9,0);
      FUN_00910394(&local_88,uVar7);
    }
    pcVar9 = "%d%s";
    puVar8 = &local_58;
    local_6c = local_70;
  }
  else {
    pcVar9 = "GENERIC_TIME_UNIT_DAY_SHORT";
    pcVar2 = "GENERIC_TIME_UNIT_DAYS_SHORT";
    if ((param_4 & 1) == 0) {
      pcVar9 = "GENERIC_TIME_UNIT_DAY";
      pcVar2 = "GENERIC_TIME_UNIT_DAYS";
    }
    if (iVar6 != 1) {
      pcVar9 = pcVar2;
    }
    uVar7 = FUN_00e6ce7c(pcVar9,0);
    FUN_00910394(&local_88,uVar7);
    FUN_00e70e18(&local_58,"%d%s",iVar6,puVar1);
    if (local_6c < 1) goto LAB_00cb58b8;
    pcVar9 = "GENERIC_TIME_UNIT_HOUR_SHORT";
    pcVar2 = "GENERIC_TIME_UNIT_HOURS_SHORT";
    if ((param_4 & 1) == 0) {
      pcVar9 = "GENERIC_TIME_UNIT_HOUR";
      pcVar2 = "GENERIC_TIME_UNIT_HOURS";
    }
    if (local_6c != 1) {
      pcVar9 = pcVar2;
    }
    uVar7 = FUN_00e6ce7c(pcVar9,0);
    FUN_00910394(&local_98,uVar7);
LAB_00cb57d4:
    pcVar9 = " %d%s";
    puVar8 = &local_68;
  }
  FUN_00e70e18(puVar8,pcVar9,local_6c,puVar1);
LAB_00cb58b8:
  FUN_00e705c8(&local_a8,"[NUMBER_1]");
  FUN_00e71248(param_1,0,&local_a8,&local_58);
  if (local_a0 != (void *)0x0) {
    operator_delete__(local_a0);
    local_a8 = 0;
    local_a0 = (void *)0x0;
  }
  FUN_00e705c8(&local_a8,"[TIME_UNIT_1]");
  FUN_00e71248(param_1,0,&local_a8,&local_88);
  if (local_a0 != (void *)0x0) {
    operator_delete__(local_a0);
    local_a8 = 0;
    local_a0 = (void *)0x0;
  }
  FUN_00e705c8(&local_a8,"[NUMBER_2]");
  FUN_00e71248(param_1,0,&local_a8,&local_68);
  if (local_a0 != (void *)0x0) {
    operator_delete__(local_a0);
    local_a8 = 0;
    local_a0 = (void *)0x0;
  }
  FUN_00e705c8(&local_a8,"[TIME_UNIT_2]");
  FUN_00e71248(param_1,0,&local_a8,&local_98);
  if (local_a0 != (void *)0x0) {
    operator_delete__(local_a0);
    local_a8 = 0;
    local_a0 = (void *)0x0;
  }
  if (local_90 != (void *)0x0) {
    operator_delete__(local_90);
    local_98 = 0;
    local_90 = (void *)0x0;
  }
  if (local_80 != (void *)0x0) {
    operator_delete__(local_80);
    local_88 = 0;
    local_80 = (void *)0x0;
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
  if (*(long *)(lVar3 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00cb59f4(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  int iVar2;
  undefined *puVar3;
  undefined8 local_a8;
  void *local_a0;
  double local_98;
  int local_90;
  int local_8c;
  undefined8 local_88;
  void *local_80;
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
  thunk_FUN_00e7051c(param_1,param_2);
  FUN_00e70510(&local_48);
  FUN_00e70510(&local_58);
  FUN_00e70510(&local_68);
  FUN_00e70510(&local_78);
  FUN_00e70510(&local_88);
  iVar2 = FUN_00e703d4((double)param_3,&local_8c,&local_90,&local_98);
  if (0 < iVar2) {
    FUN_00e70e18(&local_48,&DAT_01bc4b74,iVar2);
  }
  if (local_8c < 10) {
    puVar3 = &DAT_01bc4b73;
  }
  else {
    puVar3 = &DAT_01bc4b74;
  }
  FUN_00e70e18(&local_58,puVar3);
  if (local_90 < 10) {
    puVar3 = &DAT_01bc4b73;
  }
  else {
    puVar3 = &DAT_01bc4b74;
  }
  FUN_00e70e18(&local_68,puVar3);
  if ((int)local_98 < 10) {
    puVar3 = &DAT_01bb0646;
  }
  else {
    puVar3 = &DAT_01bb6d43;
  }
  FUN_00e70e18(&local_78,puVar3,(int)local_98);
  FUN_00e705c8(&local_a8,"[NUMBER_DAYS]");
  FUN_00e71248(param_1,0,&local_a8,&local_48);
  if (local_a0 != (void *)0x0) {
    operator_delete__(local_a0);
    local_a8 = 0;
    local_a0 = (void *)0x0;
  }
  FUN_00e705c8(&local_a8,"[TIME_UNIT_DAYS]");
  FUN_00e71248(param_1,0,&local_a8,&local_88);
  if (local_a0 != (void *)0x0) {
    operator_delete__(local_a0);
    local_a8 = 0;
    local_a0 = (void *)0x0;
  }
  FUN_00e705c8(&local_a8,"[NUMBER_HOURS]");
  FUN_00e71248(param_1,0,&local_a8,&local_58);
  if (local_a0 != (void *)0x0) {
    operator_delete__(local_a0);
    local_a8 = 0;
    local_a0 = (void *)0x0;
  }
  FUN_00e705c8(&local_a8,"[TIME_UNIT_HOURS]");
  FUN_00e71248(param_1,0,&local_a8,&local_88);
  if (local_a0 != (void *)0x0) {
    operator_delete__(local_a0);
    local_a8 = 0;
    local_a0 = (void *)0x0;
  }
  FUN_00e705c8(&local_a8,"[NUMBER_MINUTES]");
  FUN_00e71248(param_1,0,&local_a8,&local_68);
  if (local_a0 != (void *)0x0) {
    operator_delete__(local_a0);
    local_a8 = 0;
    local_a0 = (void *)0x0;
  }
  FUN_00e705c8(&local_a8,"[TIME_UNIT_MINUTES]");
  FUN_00e71248(param_1,0,&local_a8,&local_88);
  if (local_a0 != (void *)0x0) {
    operator_delete__(local_a0);
    local_a8 = 0;
    local_a0 = (void *)0x0;
  }
  FUN_00e705c8(&local_a8,"[NUMBER_SECONDS]");
  FUN_00e71248(param_1,0,&local_a8,&local_78);
  if (local_a0 != (void *)0x0) {
    operator_delete__(local_a0);
    local_a8 = 0;
    local_a0 = (void *)0x0;
  }
  FUN_00e705c8(&local_a8,"[TIME_UNIT_SECONDS]");
  FUN_00e71248(param_1,0,&local_a8,&local_88);
  if (local_a0 != (void *)0x0) {
    operator_delete__(local_a0);
    local_a8 = 0;
    local_a0 = (void *)0x0;
  }
  if (local_80 != (void *)0x0) {
    operator_delete__(local_80);
    local_88 = 0;
    local_80 = (void *)0x0;
  }
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




void FUN_00cb5d20(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 local_d8;
  void *local_d0;
  double local_c8;
  int local_c0;
  int local_bc;
  undefined8 local_b8;
  void *local_b0;
  undefined8 local_a8;
  void *local_a0;
  undefined8 local_98;
  void *local_90;
  undefined8 local_88;
  void *local_80;
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
  thunk_FUN_00e7051c(param_1,param_2);
  FUN_00e70510(&local_48);
  FUN_00e70510(&local_58);
  FUN_00e70510(&local_68);
  FUN_00e70510(&local_78);
  FUN_00e70510(&local_88);
  FUN_00e70510(&local_98);
  FUN_00e70510(&local_a8);
  FUN_00e70510(&local_b8);
  iVar2 = FUN_00e703d4((double)param_3,&local_bc,&local_c0,&local_c8);
  if (iVar2 < 1) {
    if (local_bc < 1) goto LAB_00cb5e88;
  }
  else {
    uVar3 = FUN_00e6ce7c("GENERIC_TIME_UNIT_DAYS_SHORT",0);
    FUN_00910394(&local_58,uVar3);
    FUN_00e705c8(&local_d8,&DAT_01e4a398);
    FUN_00e70c34(&local_58,&local_d8);
    if (local_d0 != (void *)0x0) {
      operator_delete__(local_d0);
      local_d8 = 0;
      local_d0 = (void *)0x0;
    }
    FUN_00e70e18(&local_48,&DAT_01bb6d43,iVar2);
  }
  uVar3 = FUN_00e6ce7c("GENERIC_TIME_UNIT_HOURS_SHORT",0);
  FUN_00910394(&local_78,uVar3);
  FUN_00e705c8(&local_d8,&DAT_01e4a398);
  FUN_00e70c34(&local_78,&local_d8);
  if (local_d0 != (void *)0x0) {
    operator_delete__(local_d0);
    local_d8 = 0;
    local_d0 = (void *)0x0;
  }
  FUN_00e70e18(&local_68,&DAT_01bb6d43,local_bc);
LAB_00cb5e88:
  if (((0 < iVar2) || (0 < local_c0)) || (0 < local_bc)) {
    uVar3 = FUN_00e6ce7c("GENERIC_TIME_UNIT_MINUTES_SHORT",0);
    FUN_00910394(&local_98,uVar3);
    FUN_00e705c8(&local_d8,&DAT_01e4a398);
    FUN_00e70c34(&local_98,&local_d8);
    if (local_d0 != (void *)0x0) {
      operator_delete__(local_d0);
      local_d8 = 0;
      local_d0 = (void *)0x0;
    }
    FUN_00e70e18(&local_88,&DAT_01bb6d43,local_c0);
  }
  uVar3 = FUN_00e6ce7c("GENERIC_TIME_UNIT_SECONDS_SHORT",0);
  FUN_00910394(&local_b8,uVar3);
  FUN_00e70e18(&local_a8,&DAT_01bb6d43,(int)local_c8);
  FUN_00e705c8(&local_d8,"[NUMBER_DAYS]");
  FUN_00e71248(param_1,0,&local_d8,&local_48);
  if (local_d0 != (void *)0x0) {
    operator_delete__(local_d0);
    local_d8 = 0;
    local_d0 = (void *)0x0;
  }
  FUN_00e705c8(&local_d8,"[TIME_UNIT_DAYS]");
  FUN_00e71248(param_1,0,&local_d8,&local_58);
  if (local_d0 != (void *)0x0) {
    operator_delete__(local_d0);
    local_d8 = 0;
    local_d0 = (void *)0x0;
  }
  FUN_00e705c8(&local_d8,"[NUMBER_HOURS]");
  FUN_00e71248(param_1,0,&local_d8,&local_68);
  if (local_d0 != (void *)0x0) {
    operator_delete__(local_d0);
    local_d8 = 0;
    local_d0 = (void *)0x0;
  }
  FUN_00e705c8(&local_d8,"[TIME_UNIT_HOURS]");
  FUN_00e71248(param_1,0,&local_d8,&local_78);
  if (local_d0 != (void *)0x0) {
    operator_delete__(local_d0);
    local_d8 = 0;
    local_d0 = (void *)0x0;
  }
  FUN_00e705c8(&local_d8,"[NUMBER_MINUTES]");
  FUN_00e71248(param_1,0,&local_d8,&local_88);
  if (local_d0 != (void *)0x0) {
    operator_delete__(local_d0);
    local_d8 = 0;
    local_d0 = (void *)0x0;
  }
  FUN_00e705c8(&local_d8,"[TIME_UNIT_MINUTES]");
  FUN_00e71248(param_1,0,&local_d8,&local_98);
  if (local_d0 != (void *)0x0) {
    operator_delete__(local_d0);
    local_d8 = 0;
    local_d0 = (void *)0x0;
  }
  FUN_00e705c8(&local_d8,"[NUMBER_SECONDS]");
  FUN_00e71248(param_1,0,&local_d8,&local_a8);
  if (local_d0 != (void *)0x0) {
    operator_delete__(local_d0);
    local_d8 = 0;
    local_d0 = (void *)0x0;
  }
  FUN_00e705c8(&local_d8,"[TIME_UNIT_SECONDS]");
  FUN_00e71248(param_1,0,&local_d8,&local_b8);
  if (local_d0 != (void *)0x0) {
    operator_delete__(local_d0);
    local_d8 = 0;
    local_d0 = (void *)0x0;
  }
  if (local_b0 != (void *)0x0) {
    operator_delete__(local_b0);
    local_b8 = 0;
    local_b0 = (void *)0x0;
  }
  if (local_a0 != (void *)0x0) {
    operator_delete__(local_a0);
    local_a8 = 0;
    local_a0 = (void *)0x0;
  }
  if (local_90 != (void *)0x0) {
    operator_delete__(local_90);
    local_98 = 0;
    local_90 = (void *)0x0;
  }
  if (local_80 != (void *)0x0) {
    operator_delete__(local_80);
    local_88 = 0;
    local_80 = (void *)0x0;
  }
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

