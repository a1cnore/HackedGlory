// functions/00b5c — 5 functions
#include "libGameKindred.h"




void FUN_00b5cb40(undefined8 param_1,undefined8 param_2)

{
  FUN_00b1a8e8(param_2,"PARTY.PENDING_CHATS");
  return;
}




void FUN_00b5cb54(undefined8 param_1,undefined8 param_2)

{
  FUN_00b1a8e8(param_2,"PARTY.PENDING_CHATS");
  return;
}




void FUN_00b5cb68(long param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  long lVar2;
  bool bVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  int *piVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 *puVar12;
  ulong local_80;
  void *local_78;
  void *local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  puVar12 = (undefined8 *)*param_2;
  if (puVar12 != (undefined8 *)0x0) {
    lVar11 = 8;
    do {
      uVar10 = *puVar12;
      uVar5 = FUN_00d6eb50();
      uVar5 = FUN_00d6eb5c(uVar5,uVar10);
      cVar1 = *(char *)(puVar12 + 2);
      lVar6 = FUN_009fa72c();
      if (lVar6 == 0) {
LAB_00b5cc34:
        bVar3 = cVar1 == '\0';
      }
      else {
        uVar7 = FUN_009fa72c();
        iVar4 = FUN_009fb4d4(uVar7,puVar12[1]);
        bVar3 = iVar4 == 0;
        if (iVar4 == -1) goto LAB_00b5cc34;
      }
      if ((!bVar3 & (*(byte *)((long)puVar12 + 0x11) ^ 0xff)) != 0) {
        FUN_00ceae40(&local_80,uVar5);
        FUN_0090ea30(param_3,&local_80);
        if (local_78 != (void *)0x0) {
          operator_delete__(local_78);
          local_80 = 0;
          local_78 = (void *)0x0;
        }
        FUN_008fa54c(&local_80,uVar10);
        FUN_0096204c(param_4,&local_80);
        if ((local_80 & 1) != 0) {
          operator_delete(local_70);
        }
        *(int *)(param_1 + 0x2d018) = *(int *)(param_1 + 0x2d018) + 1;
        plVar8 = *(long **)(param_1 + 0x2d010);
        piVar9 = (int *)(param_1 + 0x2d01c);
        if ((((undefined8 *)plVar8[2] == param_2) ||
            (piVar9 = (int *)(param_1 + 0x2d020), (undefined8 *)plVar8[1] == param_2)) ||
           (piVar9 = (int *)(param_1 + 0x2d024), (undefined8 *)*plVar8 == param_2)) {
          *piVar9 = *piVar9 + 1;
        }
      }
      puVar12 = *(undefined8 **)((long)param_2 + lVar11);
      lVar11 = lVar11 + 8;
    } while (puVar12 != (undefined8 *)0x0);
  }
  if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00b5cd30(long param_1)

{
  char cVar1;
  ulong uVar2;
  double dVar3;
  
  uVar2 = FUN_009580c4();
  if ((uVar2 & 1) != 0) {
    cVar1 = *(char *)(param_1 + 0x2cf9e);
    FUN_009580b8();
    dVar3 = (double)FUN_00961684();
    if ((bool)cVar1 != 0.0 < dVar3) {
      FUN_00ac0eb0(param_1 + 0x28dc0,&DAT_03210450);
      FUN_009580b8();
      dVar3 = (double)FUN_00961684();
      *(char *)(param_1 + 0x2cf9e) = 0.0 < dVar3;
    }
  }
  FUN_00b5cdbc(param_1);
  FUN_00b5d348(param_1);
  return;
}




void FUN_00b5cdbc(long param_1)

{
  bool bVar1;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  long lVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  int *piVar11;
  char *pcVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  byte local_70 [16];
  void *local_60;
  long local_58;
  
  lVar5 = tpidr_el0;
  local_58 = *(long *)(lVar5 + 0x28);
  uVar7 = FUN_00e80f58();
  if ((uVar7 & 1) == 0) goto LAB_00b5d318;
  uVar7 = FUN_0092e8e0();
  if (((uVar7 & 1) != 0) && (*(char *)(param_1 + 0x2cfa8) == '\0')) {
    lVar8 = FUN_009580b8();
    FUN_00b59fe4(param_1,*(undefined1 *)(lVar8 + 0x568a));
  }
  bVar4 = *(byte *)(param_1 + 0x2cf98);
  *(uint *)(param_1 + 0x256cc) = *(uint *)(param_1 + 0x256cc) & 0xfffffffb | (uint)bVar4 << 2;
  *(uint *)(param_1 + 0x2619c) =
       *(uint *)(param_1 + 0x2619c) & 0xfffffffb | ((uint)bVar4 << 2 ^ 4) & 0xfc;
  if (bVar4 == 0) {
    bVar1 = false;
    uVar13 = *(uint *)(param_1 + 0x262cc) & 0xfffffffb;
    *(uint *)(param_1 + 0x262cc) = uVar13;
  }
  else {
    uVar13 = *(uint *)(param_1 + 0x262cc) & 0xfffffffb |
             ((uint)*(byte *)(param_1 + 0x2cf9a) << 2 ^ 4) & 0xfc;
    *(uint *)(param_1 + 0x262cc) = uVar13;
    bVar1 = 0xd < *(uint *)(param_1 + 0x2cf88);
  }
  *(uint *)(param_1 + 0x28b5c) =
       *(uint *)(param_1 + 0x28b5c) & 0xfffffff8 |
       *(uint *)(param_1 + 0x28b5c) & 3 | (uint)bVar1 << 2;
  if (bVar4 == 0) {
    uVar15 = 0;
  }
  else {
    uVar15 = (uint)(*(uint *)(param_1 + 0x2cf88) < 0xe);
  }
  puVar2 = (uint *)(param_1 + 0x26354);
  uVar14 = 0;
  *puVar2 = *puVar2 & 0xfffffff8 | *puVar2 & 3 | uVar15 << 2;
  if (!(bool)(bVar4 == 0 | bVar1)) {
    uVar14 = (uint)(*(int *)(param_1 + 0x2cec0) == 0) << 2;
  }
  *(uint *)(param_1 + 0x28c8c) = *(uint *)(param_1 + 0x28c8c) & 0xfffffffb | uVar14;
  if (*(char *)(param_1 + 0x2cf9a) == '\0' && bVar4 == 0) {
    *(char *)(param_1 + 0x2cf9a) = '\x01';
    *(uint *)(param_1 + 0x28dbc) = *(uint *)(param_1 + 0x28dbc) | 4;
    *(uint *)(param_1 + 0x262cc) = uVar13 & 0xfffffffb;
    FUN_0099cf94(param_1 + 0x2cee0,0);
  }
  puVar3 = (uint *)(param_1 + 0x1353c);
  *puVar3 = *puVar3 | 4;
  lVar8 = FUN_00e829e0();
  iVar6 = *(int *)(lVar8 + 0xa0);
  uVar7 = FUN_00e80f58();
  if (((uVar7 & 1) != 0) && (iVar6 - 2U < 4)) {
    FUN_00aca8d0(param_1 + 0xb110,0);
    *(uint *)(param_1 + 0x1088c) = *(uint *)(param_1 + 0x1088c) & 0xfffffffb;
    *(uint *)(param_1 + 0x11e4c) = *(uint *)(param_1 + 0x11e4c) | 4;
    uVar9 = FUN_00e6ce7c("MENU_PARTY_FINDING_MATCH",0);
    FUN_00f0d75c(param_1 + 0x13388,uVar9);
    *puVar2 = *puVar2 & 0xfffffffb;
    goto LAB_00b5d318;
  }
  lVar8 = param_1 + 0xb110;
  *(uint *)(param_1 + 0x11e4c) = *(uint *)(param_1 + 0x11e4c) & 0xfffffffb;
  FUN_00aca8d0(lVar8,1);
  if (*(byte *)(param_1 + 0x2cf98) == 0) {
    *(uint *)(param_1 + 0x1088c) = *(uint *)(param_1 + 0x1088c) & 0xfffffffb;
    pcVar12 = "MENU_PARTY_ONLY_CAPTAIN_CAN_QUEUE";
  }
  else {
    puVar2 = (uint *)(param_1 + 0x2cf88);
    uVar13 = *puVar2;
    *(undefined1 *)(param_1 + 0x2cfa7) = 0xd < uVar13;
    uVar15 = *(uint *)(param_1 + 0x2cfcc);
    if ((uVar15 < uVar13) && (*(char *)(param_1 + 0x2cf9b) != '\0')) {
      FUN_008fa54c(local_70,"*GameMode_HF_Private*");
      FUN_00ac9b64(lVar8,local_70,0,0);
      if ((local_70[0] & 1) != 0) {
        operator_delete(local_60);
      }
      uVar13 = *puVar2;
      uVar15 = *(uint *)(param_1 + 0x2cfcc);
    }
    if ((uVar15 <= uVar13) && (*(char *)(param_1 + 0x2cf9b) == '\0')) {
      FUN_00ac9cd0(lVar8);
      lVar10 = FUN_00cead68();
      if (*(char *)(lVar10 + 0x53) == '\0') {
        *(undefined1 *)(param_1 + 0x2cfa7) = 1;
      }
    }
    if (*(char *)(param_1 + 0x2cf99) == '\0') {
      *(uint *)(param_1 + 0x1088c) = *(uint *)(param_1 + 0x1088c) & 0xfffffffb;
      pcVar12 = "MENU_PARTY_NOT_READY_TO_QUEUE";
    }
    else {
      uVar7 = FUN_00b5ebb4(param_1);
      if (((uVar7 & 1) == 0) || (uVar7 = FUN_00b5eaac(param_1), (uVar7 & 1) != 0)) {
        FUN_00ac9cd0(lVar8);
        piVar11 = (int *)FUN_00cead68();
        if ((*piVar11 != 0xb) || (uVar7 = FUN_00b5eaac(param_1), (uVar7 & 1) != 0)) {
          FUN_00ac9cd0(lVar8);
          piVar11 = (int *)FUN_00cead68();
          if (*piVar11 == 0x24) {
            iVar6 = FUN_00b5eb28(param_1);
            if (iVar6 != *(int *)(param_1 + 0x2cfc8)) {
              *(uint *)(param_1 + 0x1088c) = *(uint *)(param_1 + 0x1088c) & 0xfffffffb;
              pcVar12 = "MENU_PARTY_MODE_A_TEAM_IS_MISSING_PLAYERS";
              goto LAB_00b5d304;
            }
          }
          iVar6 = FUN_00b5eb28(param_1);
          if (iVar6 == 0) {
            uVar13 = 0;
          }
          else {
            uVar13 = (uint)(1 < *puVar2) << 2;
          }
          *(uint *)(param_1 + 0x1088c) = *(uint *)(param_1 + 0x1088c) & 0xfffffffb | uVar13;
          FUN_00f0d75c(param_1 + 0x13388,&DAT_03210450);
          *puVar3 = *puVar3 & 0xfffffffb;
          goto LAB_00b5d318;
        }
        *(uint *)(param_1 + 0x1088c) = *(uint *)(param_1 + 0x1088c) & 0xfffffffb;
        pcVar12 = "MENU_PARTY_MODE_TEAMS_NOT_FULL";
      }
      else {
        *(uint *)(param_1 + 0x1088c) = *(uint *)(param_1 + 0x1088c) & 0xfffffffb;
        pcVar12 = "MENU_PARTY_DRAFT_TEAMS_NOT_FULL";
      }
    }
  }
LAB_00b5d304:
  uVar9 = FUN_00e6ce7c(pcVar12,0);
  FUN_00f0d75c(param_1 + 0x13388,uVar9);
LAB_00b5d318:
  if (*(long *)(lVar5 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

