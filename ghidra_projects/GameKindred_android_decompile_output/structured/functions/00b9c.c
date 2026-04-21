// functions/00b9c — 5 functions
#include "libGameKindred.h"




void FUN_00b9c270(long param_1,undefined8 param_2)

{
  long lVar1;
  size_t sVar2;
  size_t sVar3;
  byte bVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  char *pcVar9;
  char *pcVar10;
  void *pvVar11;
  
  lVar1 = param_1 + 0x125b8;
  uVar6 = FUN_00e70b88(param_2,lVar1);
  if ((uVar6 & 1) == 0) {
    return;
  }
  FUN_00910394(lVar1,param_2);
  lVar7 = FUN_009580b8();
  if (*(int *)(lVar7 + 0x55dc) == 1) {
    FUN_00b922c0(param_1);
  }
  FUN_00b9c524(param_1,0,0);
  if ((*(long **)(param_1 + 0x11fb0) == (long *)0x0) ||
     (iVar5 = (**(code **)(**(long **)(param_1 + 0x11fb0) + 0x40))(), iVar5 != 2)) {
    FUN_00ac1c18(param_1 + 0xdf40,&DAT_0320ffa8,1,1);
  }
  *(undefined1 *)(param_1 + 0x1266f) = 0;
  FUN_00f0e578(param_1 + 0x9020,"arrow_right");
  FUN_00b16600(param_1 + 0x9140);
  *(uint *)(param_1 + 0x91c4) = *(uint *)(param_1 + 0x91c4) & 0xfffffffb;
  FUN_00915fd0(*(char *)(param_1 + 0x1266f) == '\0');
  lVar7 = FUN_009580b8();
  if (*(char *)(lVar7 + 0x568c) != '\0') goto LAB_00b9c50c;
  lVar7 = FUN_009580b8();
  bVar4 = *(byte *)(lVar7 + 0x5478);
  sVar2 = (ulong)(bVar4 >> 1);
  if ((bVar4 & 1) != 0) {
    sVar2 = *(size_t *)(lVar7 + 0x5480);
  }
  sVar3 = (ulong)(DAT_0320ffa8 >> 1);
  if ((DAT_0320ffa8 & 1) != 0) {
    sVar3 = DAT_0320ffb0;
  }
  if (sVar2 == sVar3) {
    pvVar11 = *(void **)(lVar7 + 0x5488);
    if ((bVar4 & 1) == 0) {
      pvVar11 = (void *)(lVar7 + 0x5479);
    }
    pcVar9 = DAT_0320ffb8;
    if ((DAT_0320ffa8 & 1) == 0) {
      pcVar9 = &DAT_0320ffa9;
    }
    if ((bVar4 & 1) == 0) {
      if (sVar2 != 0) {
        pcVar10 = (char *)(lVar7 + 0x5479);
        lVar7 = -(ulong)(bVar4 >> 1);
        do {
          if (*pcVar10 != *pcVar9) goto LAB_00b9c428;
          pcVar10 = pcVar10 + 1;
          lVar7 = lVar7 + 1;
          pcVar9 = pcVar9 + 1;
        } while (lVar7 != 0);
      }
    }
    else if ((sVar2 != 0) && (iVar5 = memcmp(pvVar11,pcVar9,sVar2), iVar5 != 0)) goto LAB_00b9c428;
  }
  else {
LAB_00b9c428:
    uVar8 = FUN_009580b8();
    lVar7 = FUN_009580b8();
    FUN_0095e21c(uVar8,lVar7 + 0x5478,0);
  }
  FUN_009580b8();
  FUN_00962c7c();
  lVar7 = FUN_009580b8();
  bVar4 = *(byte *)(lVar7 + 0x5490);
  sVar2 = (ulong)(bVar4 >> 1);
  if ((bVar4 & 1) != 0) {
    sVar2 = *(size_t *)(lVar7 + 0x5498);
  }
  sVar3 = (ulong)(DAT_0320ffa8 >> 1);
  if ((DAT_0320ffa8 & 1) != 0) {
    sVar3 = DAT_0320ffb0;
  }
  if (sVar2 == sVar3) {
    pvVar11 = *(void **)(lVar7 + 0x54a0);
    if ((bVar4 & 1) == 0) {
      pvVar11 = (void *)(lVar7 + 0x5491);
    }
    pcVar9 = DAT_0320ffb8;
    if ((DAT_0320ffa8 & 1) == 0) {
      pcVar9 = &DAT_0320ffa9;
    }
    if ((bVar4 & 1) == 0) {
      if (sVar2 != 0) {
        pcVar10 = (char *)(lVar7 + 0x5491);
        lVar7 = -(ulong)(bVar4 >> 1);
        do {
          if (*pcVar10 != *pcVar9) goto LAB_00b9c4e4;
          pcVar10 = pcVar10 + 1;
          lVar7 = lVar7 + 1;
          pcVar9 = pcVar9 + 1;
        } while (lVar7 != 0);
      }
    }
    else if ((sVar2 != 0) && (iVar5 = memcmp(pvVar11,pcVar9,sVar2), iVar5 != 0)) goto LAB_00b9c4e4;
  }
  else {
LAB_00b9c4e4:
    uVar8 = FUN_009580b8();
    lVar7 = FUN_009580b8();
    FUN_0095e34c(uVar8,lVar7 + 0x5490,0);
  }
  FUN_009580b8();
  FUN_0096358c();
LAB_00b9c50c:
  FUN_00ac3540(param_1 + 0xdf40,lVar1);
  return;
}




void FUN_00b9c524(long *param_1,long param_2,ulong param_3)

{
  long *plVar1;
  uint *puVar2;
  long *plVar3;
  byte *pbVar4;
  size_t __n;
  size_t sVar5;
  byte bVar6;
  byte bVar7;
  long lVar8;
  uint uVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long *plVar15;
  long lVar16;
  char *pcVar17;
  long lVar18;
  void *pvVar19;
  char *pcVar20;
  ulong uVar21;
  ulong uVar22;
  double dVar23;
  ulong local_98;
  void *local_90;
  void *local_88;
  ulong local_80;
  void *local_78;
  void *local_70;
  long local_68;
  
  lVar8 = tpidr_el0;
  local_68 = *(long *)(lVar8 + 0x28);
  plVar1 = param_1 + 0x2416;
  lVar11 = *plVar1;
  if ((lVar11 == param_2) && ((param_3 & 1) == 0)) goto LAB_00b9cbfc;
  *plVar1 = param_2;
  if (lVar11 != 0) {
    FUN_00ae5830(lVar11,0);
    param_2 = *plVar1;
  }
  puVar2 = (uint *)((long)param_1 + 0x9ad4);
  *puVar2 = *puVar2 & 0xfffffff8 | *puVar2 & 3 | (uint)(param_2 != 0) << 2;
  if (param_2 == 0) {
    FUN_008fce60(param_1 + 0x24c7,&DAT_0320ffa8);
    FUN_008fce60(param_1 + 0x24b9,&DAT_0320ffa8);
    FUN_00ac1b34(param_1 + 0x1be8,&DAT_0320ffa8);
    goto LAB_00b9cbfc;
  }
  bVar6 = *(byte *)(param_2 + 0x3d80);
  bVar7 = *(byte *)(param_1 + 0x24c7);
  __n = (ulong)(bVar6 >> 1);
  if ((bVar6 & 1) != 0) {
    __n = *(size_t *)(param_2 + 0x3d88);
  }
  sVar5 = (ulong)(bVar7 >> 1);
  if ((bVar7 & 1) != 0) {
    sVar5 = param_1[0x24c8];
  }
  if (__n == sVar5) {
    pvVar19 = *(void **)(param_2 + 0x3d90);
    pcVar20 = (char *)param_1[0x24c9];
    if ((bVar6 & 1) == 0) {
      pvVar19 = (void *)(param_2 + 0x3d81);
    }
    if ((bVar7 & 1) == 0) {
      pcVar20 = (char *)((long)param_1 + 0x12639);
    }
    if ((bVar6 & 1) == 0) {
      if (__n != 0) {
        pcVar17 = (char *)(param_2 + 0x3d81);
        lVar11 = -(ulong)(bVar6 >> 1);
        do {
          if (*pcVar17 != *pcVar20) goto LAB_00b9c6b0;
          pcVar17 = pcVar17 + 1;
          lVar11 = lVar11 + 1;
          pcVar20 = pcVar20 + 1;
        } while (lVar11 != 0);
      }
    }
    else if ((__n != 0) && (iVar10 = memcmp(pvVar19,pcVar20,__n), iVar10 != 0)) goto LAB_00b9c6b0;
    if ((param_3 & 1) == 0) goto LAB_00b9cbfc;
  }
LAB_00b9c6b0:
  plVar3 = param_1 + 0x1be8;
  FUN_00ac1340(plVar3);
  FUN_00ae5830(*plVar1,1);
  FUN_008fce60(param_1 + 0x24c7,*plVar1 + 0x3d80);
  FUN_00f0d75c(param_1 + 0x1379,*plVar1 + 0x3ce0);
  if (*(char *)(*plVar1 + 0x3dbc) == '\0') {
    pcVar20 = "generic_star_outline";
  }
  else {
    pcVar20 = "generic_star";
  }
  FUN_00f0e578(param_1 + 0x143a,pcVar20);
  *puVar2 = *puVar2 | 4;
  lVar11 = *plVar1;
  if ((*(byte *)(lVar11 + 0x3d80) & 1) == 0) {
    local_80 = lVar11 + 0x3d81;
  }
  else {
    local_80 = *(ulong *)(lVar11 + 0x3d90);
  }
  lVar12 = FUN_00b97198(param_1 + 0x24b0,&local_80);
  lVar11 = lVar12;
  if (lVar12 == 0) {
    if ((long *)param_1[0x23f6] == (long *)0x0) {
      lVar11 = *plVar1;
    }
    else {
      iVar10 = (**(code **)(*(long *)param_1[0x23f6] + 0x40))();
      lVar11 = *plVar1;
      if (iVar10 == 2) {
        lVar11 = lVar11 + 0x3d80;
        goto LAB_00b9c784;
      }
    }
    FUN_00ac3418(plVar3,lVar11 + 0x3ce0,param_1 + 0x24b9);
  }
  else {
LAB_00b9c784:
    FUN_008fce60(param_1 + 0x24b9,lVar11);
  }
  FUN_00b9f910(param_1);
  pbVar4 = (byte *)(param_1 + 0x24b9);
  FUN_00ac1b34(plVar3,pbVar4);
  FUN_00ac1aac(plVar3);
  uVar9 = FUN_00b943e0(param_1,pbVar4);
  if (uVar9 == 0xffffffff) {
    plVar15 = param_1 + 0x23f6;
    if (((long *)*plVar15 != (long *)0x0) &&
       (iVar10 = (**(code **)(*(long *)*plVar15 + 0x40))(), iVar10 == 2)) {
      if (lVar12 == 0) {
        lVar11 = *plVar1;
        if ((*(byte *)(lVar11 + 0x3d80) & 1) == 0) {
          lVar11 = lVar11 + 0x3d81;
        }
        else {
          lVar11 = *(long *)(lVar11 + 0x3d90);
        }
        FUN_008fa54c(&local_80,lVar11);
        plVar15 = (long *)*plVar15;
        if (plVar15 != (long *)0x0) {
          pvVar19 = (void *)((ulong)&local_80 | 1);
          if ((local_80 & 1) != 0) {
            pvVar19 = local_70;
          }
          uVar21 = (**(code **)(*plVar15 + 0x78))(plVar15,pvVar19,200);
          if ((uVar21 & 1) != 0) {
            pvVar19 = (void *)((ulong)&local_80 | 1);
            if ((local_80 & 1) != 0) {
              pvVar19 = local_70;
            }
            FUN_008fa54c(&local_98,pvVar19);
            FUN_00b96740(param_1,&local_98);
            if ((local_98 & 1) != 0) {
              operator_delete(local_88);
            }
          }
        }
        if ((local_80 & 1) != 0) {
          operator_delete(local_70);
        }
      }
      else {
        if ((*pbVar4 & 1) == 0) {
          lVar11 = (long)param_1 + 0x125c9;
        }
        else {
          lVar11 = param_1[0x24bb];
        }
        plVar15 = (long *)*plVar15;
        if ((plVar15 != (long *)0x0) &&
           (uVar21 = (**(code **)(*plVar15 + 0x80))(plVar15,lVar11,200), (uVar21 & 1) != 0)) {
          FUN_00b96740(param_1,pbVar4);
        }
      }
    }
  }
  else {
    plVar15 = param_1 + 0x24af;
    uVar21 = (ulong)uVar9;
    lVar11 = uVar21 * 4 + (ulong)uVar9;
    *(undefined1 *)(*plVar15 + lVar11 * 0x10 + 0x4c) = 0;
    FUN_00ae594c(*plVar1,1,0,0);
    lVar12 = *plVar15;
    if (*(int *)(lVar12 + lVar11 * 0x10 + 0x38) != 0) {
      lVar11 = 0;
      uVar22 = 0;
      do {
        lVar18 = *(long *)(lVar12 + uVar21 * 0x50 + 0x40);
        lVar12 = lVar18 + lVar11;
        if ((*(byte *)(lVar12 + 0xd8) & 1) == 0) {
          lVar16 = lVar12 + 0xd9;
        }
        else {
          lVar16 = *(long *)(lVar12 + 0xe8);
        }
        lVar18 = lVar18 + lVar11;
        FUN_00ac1474(plVar3,lVar12 + 0xb8,lVar12 + 200,lVar16,*(undefined1 *)(lVar18 + 0xf0),
                     *(undefined1 *)(lVar18 + 0xf1));
        lVar12 = *plVar15;
        uVar22 = uVar22 + 1;
        lVar11 = lVar11 + 0xf8;
      } while (uVar22 < *(uint *)(lVar12 + uVar21 * 0x50 + 0x38));
    }
    FUN_0099cf94(lVar12 + uVar21 * 0x50,0);
  }
  if (0.0 < *(double *)(*plVar1 + 0x3d98)) {
    FUN_00ac13a4(plVar3,0);
    uVar13 = FUN_00e6ce7c("MENU_CHAT_PLAYER_BANNED",0);
    thunk_FUN_00e7051c(&local_80,uVar13);
    FUN_00e705c8(&local_98,"[PLAYER_NAME]");
    lVar11 = *plVar1 + 0x3ce0;
LAB_00b9c938:
    FUN_00e71248(&local_80,0,&local_98,lVar11);
    if (local_90 != (void *)0x0) {
      operator_delete__(local_90);
      local_98 = 0;
      local_90 = (void *)0x0;
    }
    uVar13 = FUN_00f08be8(param_1 + ((ulong)*(byte *)(param_1 + 0x1d57) & 1) * 0x26 + 0x1d25);
    uVar21 = FUN_00e70b88(uVar13,&local_80);
    if ((uVar21 & 1) != 0) {
LAB_00b9c984:
      FUN_00ac1418(plVar3,&local_80,0);
    }
    if (local_78 != (void *)0x0) {
      operator_delete__(local_78);
      local_80 = 0;
      local_78 = (void *)0x0;
    }
    goto switchD_00b9ca78_default;
  }
  uVar21 = FUN_009580c4();
  if ((uVar21 & 1) == 0) {
LAB_00b9ca58:
    switch(*(undefined4 *)(*plVar1 + 0x3da8)) {
    case 0:
      FUN_00ac13a4(plVar3,*(undefined1 *)((long)param_1 + 0x12673));
      uVar13 = FUN_00e6ce7c("MENU_CHAT_PLAYER_OFFLINE",0);
      thunk_FUN_00e7051c(&local_80,uVar13);
      FUN_00e705c8(&local_98,"[PLAYER_NAME]");
      uVar13 = FUN_00f08be8(*plVar1 + 0x330);
      FUN_00e71248(&local_80,0,&local_98,uVar13);
      if (local_90 != (void *)0x0) {
        operator_delete__(local_90);
        local_98 = 0;
        local_90 = (void *)0x0;
      }
      goto LAB_00b9c984;
    case 1:
      FUN_00ac13a4(plVar3,1);
LAB_00b9cba4:
      pcVar20 = "MENU_CHAT_ENTER_YOUR_CHAT";
      goto LAB_00b9cbac;
    case 2:
      FUN_00ac13a4(plVar3,*(undefined1 *)((long)param_1 + 0x12673));
      uVar13 = FUN_00e6ce7c("MENU_CHAT_PLAYER_IN_GAME",0);
      thunk_FUN_00e7051c(&local_80,uVar13);
      FUN_00e705c8(&local_98,"[PLAYER_NAME]");
      lVar11 = FUN_00f08be8(*plVar1 + 0x330);
      goto LAB_00b9c938;
    case 3:
    case 4:
      FUN_00ac13a4(plVar3,1);
      uVar13 = FUN_00f08be8(param_1 + ((ulong)*(byte *)(param_1 + 0x1d57) & 1) * 0x26 + 0x1d25);
      uVar14 = FUN_00e6ce7c("MENU_CHAT_ENTER_YOUR_CHAT",0);
      uVar21 = FUN_00e70b88(uVar13,uVar14);
      if ((uVar21 & 1) != 0) goto LAB_00b9cba4;
    }
  }
  else {
    FUN_009580b8();
    dVar23 = (double)FUN_00961684();
    if (dVar23 <= 0.0) goto LAB_00b9ca58;
    FUN_00ac13a4(plVar3,0);
    uVar13 = FUN_00f08be8(param_1 + ((ulong)*(byte *)(param_1 + 0x1d57) & 1) * 0x26 + 0x1d25);
    uVar14 = FUN_00e6ce7c("MENU_FRIENDS_PLAYER_BANNED",0);
    uVar21 = FUN_00e70b88(uVar13,uVar14);
    if ((uVar21 & 1) == 0) goto switchD_00b9ca78_default;
    pcVar20 = "MENU_FRIENDS_PLAYER_BANNED";
LAB_00b9cbac:
    uVar13 = FUN_00e6ce7c(pcVar20,0);
    FUN_00ac1418(plVar3,uVar13,0);
  }
switchD_00b9ca78_default:
  FUN_00b27e8c(param_1 + 0x246c);
  if (*plVar1 != 0) {
    FUN_00b9fa20(param_1);
  }
  (**(code **)(*param_1 + 0x150))(param_1);
  FUN_00b9e9bc(param_1);
LAB_00b9cbfc:
  if (*(long *)(lVar8 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




bool FUN_00b9cd0c(uint *param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  long lVar6;
  undefined8 uVar7;
  
  uVar7 = *param_2;
  uVar4 = FUN_00e6a474(uVar7);
  uVar5 = FUN_0091ed5c(uVar7,uVar4,0x12345678);
  uVar2 = *param_1;
  if (uVar2 != 0) {
    lVar6 = *(long *)(param_1 + 2);
    uVar3 = 0;
    if (uVar2 != 0) {
      uVar3 = uVar5 / uVar2;
    }
    uVar3 = uVar5 - uVar3 * uVar2;
    while ((*(uint *)(lVar6 + (ulong)uVar3 * 8) != uVar5 &&
           (*(int *)(lVar6 + (ulong)uVar3 * 8 + 4) != -1))) {
      uVar1 = uVar2;
      if (0 < (int)uVar3) {
        uVar1 = uVar3;
      }
      uVar3 = uVar1 - 1;
    }
    if (uVar3 != 0xffffffff) {
      return *(int *)(lVar6 + (ulong)uVar3 * 8 + 4) != -1;
    }
  }
  return false;
}




void FUN_00b9cdac(uint *param_1,undefined8 *param_2,undefined8 param_3)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  void *pvVar7;
  long lVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  ulong uVar12;
  int *piVar13;
  undefined8 uVar14;
  undefined8 local_58;
  void *local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  uVar14 = *param_2;
  uVar4 = FUN_00e6a474(uVar14);
  uVar5 = FUN_0091ed5c(uVar14,uVar4,0x12345678);
  uVar10 = param_1[4];
  uVar9 = *param_1;
  param_1[4] = uVar10 + 1;
  if (uVar9 >> 1 < uVar10 + 1) {
    local_58 = 0;
    local_50 = (void *)0x0;
    FUN_009348c8(&local_58,(uVar9 * 3 + 3 >> 1) + 7 & 0xfffffff8,0xffffffff00000000);
    uVar10 = *param_1;
    uVar11 = uVar10 - 1;
    uVar9 = (uint)local_58;
    if ((int)uVar11 < 0) {
      pvVar7 = *(void **)(param_1 + 2);
    }
    else {
      pvVar7 = *(void **)(param_1 + 2);
      do {
        iVar6 = *(int *)((long)pvVar7 + (ulong)uVar11 * 8 + 4);
        if (iVar6 != -1) {
          uVar10 = *(uint *)((long)pvVar7 + (ulong)uVar11 * 8);
          uVar2 = 0;
          if ((uint)local_58 != 0) {
            uVar2 = uVar10 / (uint)local_58;
          }
          uVar12 = (ulong)(uVar10 - uVar2 * (uint)local_58);
          piVar13 = (int *)((long)local_50 + uVar12 * 8 + 4);
          iVar1 = *piVar13;
          while (iVar1 != -1) {
            uVar2 = (uint)local_58;
            if (0 < (int)(uint)uVar12) {
              uVar2 = (uint)uVar12;
            }
            uVar12 = (ulong)(uVar2 - 1);
            piVar13 = (int *)((long)local_50 + uVar12 * 8 + 4);
            iVar1 = *piVar13;
          }
          *(uint *)((long)local_50 + uVar12 * 8) = uVar10;
          *piVar13 = iVar6;
        }
        uVar11 = uVar11 - 1;
      } while (-1 < (int)uVar11);
      uVar10 = *param_1;
    }
    uVar11 = param_1[1];
    *param_1 = (uint)local_58;
    param_1[1] = local_58._4_4_;
    local_58 = CONCAT44(uVar11,uVar10);
    *(void **)(param_1 + 2) = local_50;
    local_50 = pvVar7;
    if (pvVar7 != (void *)0x0) {
      operator_delete__(pvVar7);
      local_58 = 0;
      local_50 = (void *)0x0;
      uVar9 = *param_1;
    }
  }
  lVar8 = *(long *)(param_1 + 2);
  uVar10 = 0;
  if (uVar9 != 0) {
    uVar10 = uVar5 / uVar9;
  }
  uVar12 = (ulong)(uVar5 - uVar10 * uVar9);
  piVar13 = (int *)(lVar8 + uVar12 * 8 + 4);
  iVar6 = *piVar13;
  while (iVar6 != -1) {
    uVar10 = uVar9;
    if (0 < (int)(uint)uVar12) {
      uVar10 = (uint)uVar12;
    }
    uVar12 = (ulong)(uVar10 - 1);
    piVar13 = (int *)(lVar8 + uVar12 * 8 + 4);
    iVar6 = *piVar13;
  }
  *(uint *)(lVar8 + uVar12 * 8) = uVar5;
  iVar6 = FUN_00ba1b6c(param_1,param_3);
  *piVar13 = iVar6;
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 FUN_00b9cf84(long param_1,byte *param_2)

{
  ulong uVar1;
  size_t __n;
  byte *__s2;
  uint uVar2;
  byte bVar3;
  int iVar4;
  long lVar5;
  byte *pbVar6;
  byte *pbVar7;
  void *__s1;
  ulong uVar8;
  long lVar9;
  
  uVar2 = *(uint *)(param_1 + 0x12570);
  if (uVar2 != 0) {
    __n = *(size_t *)(param_2 + 8);
    __s2 = *(byte **)(param_2 + 0x10);
    lVar9 = *(long *)(param_1 + 0x12578);
    uVar8 = 0;
    if ((*param_2 & 1) == 0) {
      __s2 = param_2 + 1;
      __n = (ulong)(*param_2 >> 1);
    }
    do {
      lVar5 = lVar9 + uVar8 * 0x50;
      bVar3 = *(byte *)(lVar5 + 0x20);
      uVar1 = (ulong)(bVar3 >> 1);
      if ((bVar3 & 1) != 0) {
        uVar1 = *(ulong *)(lVar5 + 0x28);
      }
      if (uVar1 == __n) {
        __s1 = *(void **)(lVar9 + uVar8 * 0x50 + 0x30);
        if ((bVar3 & 1) == 0) {
          __s1 = (void *)(lVar5 + 0x21);
        }
        if ((bVar3 & 1) == 0) {
          if (__n == 0) {
LAB_00b9d06c:
            lVar9 = lVar9 + (uVar8 & 0xffffffff) * 0x50;
            FUN_00ba2038((uint *)(param_1 + 0x12570),lVar9,lVar9 + 0x50);
            return 1;
          }
          pbVar6 = (byte *)(lVar5 + 0x21);
          lVar5 = -(ulong)(bVar3 >> 1);
          pbVar7 = __s2;
          while (*pbVar6 == *pbVar7) {
            pbVar6 = pbVar6 + 1;
            lVar5 = lVar5 + 1;
            pbVar7 = pbVar7 + 1;
            if (lVar5 == 0) goto LAB_00b9d06c;
          }
        }
        else if ((__n == 0) || (iVar4 = memcmp(__s1,__s2,__n), iVar4 == 0)) goto LAB_00b9d06c;
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < uVar2);
  }
  return 0;
}

