// functions/10023 — 234 functions
#include "GameKindred.h"




void thunk_FUN_100231648(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  char *pcVar3;
  undefined8 uVar4;
  undefined1 auStack_40 [8];
  void *pvStack_38;
  undefined1 auStack_30 [8];
  void *pvStack_28;
  
  uVar1 = FUN_1004e0150("GUILD_LEAVE_DIALOG_TITLE",0);
  thunk_FUN_1004e439c(auStack_30,uVar1);
  uVar1 = FUN_1004e0150("GUILD_LEAVE_MEMBER_DIALOG_TEXT",0);
  thunk_FUN_1004e439c(auStack_40,uVar1);
  if (*(int *)(param_1 + 0x1fd8) == 1) {
    pcVar3 = "GUILD_LEAVE_LAST_MEMBER_DIALOG_TEXT";
  }
  else {
    lVar2 = FUN_10015d3ec();
    if (((int)*(uint *)(lVar2 + 0x5624) < 0) ||
       (*(int *)(*(long *)(lVar2 + 0x5268) + (ulong)*(uint *)(lVar2 + 0x5624) * 0x108 + 0x50) != 4))
    goto LAB_1002316f0;
    pcVar3 = "GUILD_LEAVE_LEADER_DIALOG_TEXT";
  }
  uVar1 = FUN_1004e0150(pcVar3,0);
  FUN_1000153b4(auStack_40,uVar1);
LAB_1002316f0:
  uVar1 = FUN_1004e0150("GENERIC_DIALOG_OKAY",0);
  uVar4 = FUN_1004e0150("GENERIC_DIALOG_CANCEL",0);
  FUN_1001e3120(auStack_30,auStack_40,uVar1,uVar4,param_1,thunk_FUN_100231bcc,0);
  if (pvStack_38 != (void *)0x0) {
    operator_delete__(pvStack_38);
  }
  if (pvStack_28 != (void *)0x0) {
    operator_delete__(pvStack_28);
  }
  return;
}




void thunk_FUN_100231a5c(long param_1)

{
  long *plVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [32];
  undefined8 uStack_28;
  
  uVar3 = FUN_100644a94("UI::EVENT_EDIT_GUILD_TYPE");
  FUN_100644aec(auStack_48,uVar3,param_1);
  FUN_100644c34(param_1,auStack_48,1);
  plVar1 = (long *)(param_1 + 0x1118);
  bVar2 = false;
  if ((*(float *)(param_1 + 0x115c) == 0.0) && (bVar2 = false, !NAN(*(float *)(param_1 + 0x1158))))
  {
    bVar2 = *(float *)(param_1 + 0x1158) == 0.0;
  }
  if (!bVar2) {
    *(undefined8 *)(param_1 + 0x1158) = 0;
    FUN_1000200a0(plVar1);
  }
  uStack_28 = 0;
  (**(code **)(*plVar1 + 0x28))(plVar1,&uStack_28);
  return;
}




void thunk_FUN_100231480(long param_1)

{
  uint *puVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_60 [8];
  void *pvStack_58;
  undefined1 auStack_50 [8];
  void *pvStack_48;
  undefined1 auStack_40 [8];
  void *pvStack_38;
  
  lVar3 = FUN_10015d3ec();
  if (((int)*(uint *)(lVar3 + 0x5624) < 0) ||
     (*(int *)(*(long *)(lVar3 + 0x5268) + (ulong)*(uint *)(lVar3 + 0x5624) * 0x108 + 0x50) != 4)) {
    lVar3 = FUN_10015d3ec();
    if ((int)*(uint *)(lVar3 + 0x5624) < 0) {
      return;
    }
    if (*(int *)(*(long *)(lVar3 + 0x5268) + (ulong)*(uint *)(lVar3 + 0x5624) * 0x108 + 0x50) != 3)
    {
      return;
    }
  }
  puVar1 = (uint *)(param_1 + 0x1058c);
  if (((-1 < (int)*puVar1) && (*puVar1 < *(uint *)(param_1 + 0x1fd8))) &&
     (iVar2 = FUN_10015d3f8(), iVar2 != 0)) {
    FUN_10015d3ec();
    uVar4 = FUN_100164f34();
    uVar5 = FUN_100655b6c(*(long *)(*(long *)(param_1 + 0x1fe0) + (ulong)*puVar1 * 8) + 0x248);
    iVar2 = FUN_1004e3654(uVar4,uVar5);
    if (iVar2 != 0) {
      FUN_100231648(param_1);
      return;
    }
    uVar4 = FUN_1004e0150("MENU_GUILD_MEMBERS_CONFIRM_REMOVE_MEMBER_TITLE",0);
    thunk_FUN_1004e439c(auStack_40,uVar4);
    uVar4 = FUN_1004e0150("MENU_GUILD_MEMBERS_CONFIRM_REMOVE_MEMBER_BODY",0);
    thunk_FUN_1004e439c(auStack_50,uVar4);
    FUN_1004e3120(auStack_60,"[MEMBER_NAME]");
    uVar4 = FUN_100655b6c(*(long *)(*(long *)(param_1 + 0x1fe0) + (ulong)*puVar1 * 8) + 0x248);
    FUN_1004e3bc4(auStack_50,0,auStack_60,uVar4);
    if (pvStack_58 != (void *)0x0) {
      operator_delete__(pvStack_58);
    }
    uVar4 = FUN_1004e0150("GENERIC_DIALOG_OKAY",0);
    uVar5 = FUN_1004e0150("GENERIC_DIALOG_CANCEL",0);
    FUN_1001e3120(auStack_40,auStack_50,uVar4,uVar5,param_1,thunk_FUN_100231d94,0);
    if (pvStack_48 != (void *)0x0) {
      operator_delete__(pvStack_48);
    }
    if (pvStack_38 != (void *)0x0) {
      operator_delete__(pvStack_38);
    }
  }
  return;
}




void thunk_FUN_100231764(long param_1)

{
  uint *puVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  char *pcVar5;
  undefined8 uVar6;
  undefined1 auStack_50 [8];
  void *pvStack_48;
  undefined1 auStack_40 [8];
  void *pvStack_38;
  undefined1 auStack_30 [8];
  void *pvStack_28;
  
  iVar2 = FUN_100131220();
  if (iVar2 != 0) {
    lVar3 = FUN_10015d3ec();
    if ((-1 < (int)*(uint *)(lVar3 + 0x5624)) &&
       (*(int *)(*(long *)(lVar3 + 0x5268) + (ulong)*(uint *)(lVar3 + 0x5624) * 0x108 + 0x50) == 4))
    {
      puVar1 = (uint *)(param_1 + 0x1058c);
      if ((-1 < (int)*puVar1) &&
         ((*puVar1 < *(uint *)(param_1 + 0x1fd8) && (iVar2 = FUN_10015d3f8(), iVar2 != 0)))) {
        if (*(int *)(*(long *)(*(long *)(param_1 + 0x1fe0) + (ulong)*puVar1 * 8) + 0x25a0) == 3) {
          uVar4 = FUN_1004e0150("MENU_GUILD_MEMBERS_CONFIRM_DEMOTE_MEMBER_TITLE",0);
          thunk_FUN_1004e439c(auStack_30,uVar4);
          pcVar5 = "MENU_GUILD_MEMBERS_CONFIRM_DEMOTE_MEMBER_BODY";
        }
        else {
          uVar4 = FUN_1004e0150("MENU_GUILD_MEMBERS_CONFIRM_PROMOTE_MEMBER_TITLE",0);
          thunk_FUN_1004e439c(auStack_30,uVar4);
          pcVar5 = "MENU_GUILD_MEMBERS_CONFIRM_PROMOTE_MEMBER_BODY";
        }
        uVar4 = FUN_1004e0150(pcVar5,0);
        thunk_FUN_1004e439c(auStack_40,uVar4);
        FUN_1004e3120(auStack_50,"[MEMBER_NAME]");
        uVar4 = FUN_100655b6c(*(long *)(*(long *)(param_1 + 0x1fe0) + (ulong)*puVar1 * 8) + 0x248);
        FUN_1004e3bc4(auStack_40,0,auStack_50,uVar4);
        if (pvStack_48 != (void *)0x0) {
          operator_delete__(pvStack_48);
        }
        uVar4 = FUN_1004e0150("GENERIC_DIALOG_OKAY",0);
        uVar6 = FUN_1004e0150("GENERIC_DIALOG_CANCEL",0);
        FUN_1001e3120(auStack_30,auStack_40,uVar4,uVar6,param_1,thunk_FUN_100231c1c,0);
        if (pvStack_38 != (void *)0x0) {
          operator_delete__(pvStack_38);
        }
        if (pvStack_28 != (void *)0x0) {
          operator_delete__(pvStack_28);
        }
      }
    }
  }
  return;
}




void thunk_FUN_100231900(long param_1)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_50 [8];
  void *pvStack_48;
  undefined1 auStack_40 [8];
  void *pvStack_38;
  undefined1 auStack_30 [8];
  void *pvStack_28;
  
  iVar2 = FUN_100131220();
  if (iVar2 != 0) {
    lVar3 = FUN_10015d3ec();
    if ((-1 < (int)*(uint *)(lVar3 + 0x5624)) &&
       (*(int *)(*(long *)(lVar3 + 0x5268) + (ulong)*(uint *)(lVar3 + 0x5624) * 0x108 + 0x50) == 4))
    {
      uVar1 = *(uint *)(param_1 + 0x1058c);
      if ((-1 < (int)uVar1) &&
         ((uVar1 < *(uint *)(param_1 + 0x1fd8) && (iVar2 = FUN_10015d3f8(), iVar2 != 0)))) {
        uVar4 = FUN_1004e0150("MENU_GUILD_MEMBERS_CONFIRM_TRANSFER_LEADERSHIP_TO_MEMBER_TITLE",0);
        thunk_FUN_1004e439c(auStack_30,uVar4);
        uVar4 = FUN_1004e0150("MENU_GUILD_MEMBERS_CONFIRM_TRANSFER_LEADERSHIP_TO_MEMBER_BODY",0);
        thunk_FUN_1004e439c(auStack_40,uVar4);
        FUN_1004e3120(auStack_50,"[MEMBER_NAME]");
        uVar4 = FUN_100655b6c(*(long *)(*(long *)(param_1 + 0x1fe0) +
                                       (ulong)*(uint *)(param_1 + 0x1058c) * 8) + 0x248);
        FUN_1004e3bc4(auStack_40,0,auStack_50,uVar4);
        if (pvStack_48 != (void *)0x0) {
          operator_delete__(pvStack_48);
        }
        uVar4 = FUN_1004e0150("GENERIC_DIALOG_OKAY",0);
        uVar5 = FUN_1004e0150("GENERIC_DIALOG_CANCEL",0);
        FUN_1001e3120(auStack_30,auStack_40,uVar4,uVar5,param_1,thunk_FUN_100231cd8,0);
        if (pvStack_38 != (void *)0x0) {
          operator_delete__(pvStack_38);
        }
        if (pvStack_28 != (void *)0x0) {
          operator_delete__(pvStack_28);
        }
      }
    }
  }
  return;
}




void FUN_100230134(long param_1,string *param_2,int param_3)

{
  long lVar1;
  long *plVar2;
  undefined4 uVar3;
  int iVar4;
  void *pvVar5;
  char *pcVar6;
  long lVar7;
  undefined8 uVar8;
  uint uVar9;
  undefined *puVar10;
  undefined1 auStack_98 [8];
  void *local_90;
  undefined1 auStack_88 [8];
  void *local_80;
  long local_78;
  code *local_70;
  void *local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  ulong local_50;
  undefined4 local_48;
  
  if ((param_2 == (string *)0x0) && (param_3 == 0)) {
    return;
  }
  pvVar5 = operator_new(0x25a8);
  local_78 = FUN_100231e58();
  std::string::operator=((string *)(local_78 + 0x2570),param_2);
  FUN_1006513c0((long)pvVar5 + 0x178,param_2 + 0x18);
  std::string::operator=((string *)((long)pvVar5 + 0x2588),param_2 + 0x28);
  uVar3 = *(undefined4 *)(param_2 + 0x50);
  *(undefined4 *)((long)pvVar5 + 0x25a0) = uVar3;
  switch(uVar3) {
  case 0:
    pcVar6 = "MENU_PROFILE_GUILD_ROLE_Initiate";
    break;
  case 1:
    pcVar6 = "MENU_PROFILE_GUILD_ROLE_MEMBER";
    break;
  case 2:
    pcVar6 = "MENU_PROFILE_GUILD_ROLE_VETERAN";
    break;
  case 3:
    uVar8 = FUN_1004e0150("MENU_GUILD_MEMBERS_ROLE_OFFICER",0);
    FUN_1006513c0((long)pvVar5 + 0x2a8,uVar8);
    pcVar6 = "generic_guild_officer";
    goto LAB_100230270;
  case 4:
    uVar8 = FUN_1004e0150("MENU_PROFILE_GUILD_ROLE_CAPTAIN",0);
    FUN_1006513c0((long)pvVar5 + 0x2a8,uVar8);
    pcVar6 = "generic_crown";
LAB_100230270:
    FUN_100652cdc((long)pvVar5 + 0x88,pcVar6);
    uVar9 = *(uint *)((long)pvVar5 + 0x10c) | 4;
    goto LAB_10023027c;
  default:
    goto switchD_1002301c4_default;
  }
  uVar8 = FUN_1004e0150(pcVar6,0);
  FUN_1006513c0((long)pvVar5 + 0x2a8,uVar8);
  uVar9 = *(uint *)((long)pvVar5 + 0x10c) & 0xfffffffb;
LAB_10023027c:
  *(uint *)((long)pvVar5 + 0x10c) = uVar9;
switchD_1002301c4_default:
  FUN_1004e313c(auStack_88);
  FUN_1004e38ac(auStack_88,"%d");
  (**(code **)(*(long *)(local_78 + 0x3d8) + 0x138))(local_78 + 0x3d8,auStack_88);
  lVar7 = local_78;
  lVar1 = local_78 + 0x508;
  FUN_1004e3120(&local_70,"");
  (**(code **)(*(long *)(lVar7 + 0x508) + 0x138))(lVar1,&local_70);
  if (local_68 != (void *)0x0) {
    operator_delete__(local_68);
  }
  *(uint *)(local_78 + 0xd5c) =
       *(uint *)(local_78 + 0xd5c) & 0xfffffffb | (uint)(byte)param_2[0x102] << 2;
  *(uint *)(local_78 + 0xe4c) =
       *(uint *)(local_78 + 0xe4c) & 0xfffffff8 |
       *(uint *)(local_78 + 0xe4c) & 3 | (uint)(param_2[0x102] == (string)0x0) << 2;
  lVar1 = local_78 + 0xeb8;
  lVar7 = FUN_10016c2f0();
  FUN_1001b4c0c(lVar1,*(int *)(lVar7 + 0x38) < 1);
  lVar7 = local_78;
  uVar3 = *(undefined4 *)(param_2 + 0x70);
  lVar1 = local_78 + 0x638;
  FUN_1004e3120(&local_70,"");
  (**(code **)(*(long *)(lVar7 + 0x638) + 0x138))(lVar1,&local_70);
  if (local_68 != (void *)0x0) {
    operator_delete__(local_68);
  }
  FUN_1001c6fd8(local_78 + 0x1400,uVar3);
  lVar7 = local_78;
  uVar3 = *(undefined4 *)(param_2 + 0xa0);
  lVar1 = local_78 + 0x768;
  FUN_1004e3120(&local_70,"");
  (**(code **)(*(long *)(lVar7 + 0x768) + 0x138))(lVar1,&local_70);
  if (local_68 != (void *)0x0) {
    operator_delete__(local_68);
  }
  FUN_1001c6fd8(local_78 + 0x17d0,uVar3);
  FUN_1001c8080(local_78 + 0x1120,*(undefined4 *)(param_2 + 0x60));
  uVar8 = FUN_1004e0150("MENU_GUILD_VALUE_STATUS",0);
  thunk_FUN_1004e439c(auStack_98,uVar8);
  plVar2 = (long *)(local_78 + 0x898);
  if (*(int *)(param_2 + 0x44) < 1) {
    uVar8 = FUN_1004e0150("MENU_GUILD_STATUS_NEVER_PLAYED",0);
    (**(code **)(*plVar2 + 0x138))(plVar2,uVar8);
  }
  else {
    FUN_1000f1e20(&local_70,auStack_98,*(int *)(param_2 + 0x44),1);
    (**(code **)(*plVar2 + 0x138))(plVar2,&local_70);
    if (local_68 != (void *)0x0) {
      operator_delete__(local_68);
    }
  }
  uVar9 = *(uint *)(param_2 + 0x48);
  if (uVar9 < 5) {
    puVar10 = (&PTR_DAT_1014774e8)[(int)uVar9];
    lVar1 = local_78 + 0xab8;
    uVar8 = FUN_1004e0150((&PTR_s_MENU_GUILD_AVAILABILITY_OFFLINE_1014774c0)[(int)uVar9],0);
    FUN_1006513c0(lVar1,uVar8);
    FUN_100651460(local_78 + 0xab8,puVar10);
  }
  lVar1 = local_78;
  if (param_2[0x101] == (string)0x0) {
    FUN_10015d3ec();
    uVar8 = FUN_100164f34();
    iVar4 = FUN_1004e36c0(param_2 + 0x18,uVar8);
    uVar9 = 4;
    if (iVar4 == 0) {
      uVar9 = 0;
    }
  }
  else {
    uVar9 = 0;
  }
  *(uint *)(lVar1 + 0x1c24) = *(uint *)(lVar1 + 0x1c24) & 0xfffffffb | uVar9;
  FUN_100651460(local_78 + 0x178,&DAT_10115a168);
  local_50 = (ulong)*(uint *)(param_1 + 0x1fd8);
  local_48 = DAT_101dbd460;
  local_70 = FUN_100230d40;
  local_60 = 0;
  uStack_58 = 0;
  local_68 = (void *)param_1;
  FUN_10001554c(local_78 + 0x180,&local_70);
  local_50 = (ulong)*(uint *)(param_1 + 0x1fd8);
  local_48 = DAT_101dbd48c;
  local_70 = FUN_100230d40;
  local_60 = 0;
  uStack_58 = 0;
  local_68 = (void *)param_1;
  FUN_10001554c(local_78 + 0x180,&local_70);
  FUN_1005308f8(param_1 + 0x1118,local_78,1);
  FUN_100230d48(param_1 + 0x1fd8,&local_78);
  if (local_90 != (void *)0x0) {
    operator_delete__(local_90);
  }
  if (local_80 != (void *)0x0) {
    operator_delete__(local_80);
  }
  return;
}




void FUN_1002305e4(long param_1)

{
  long lVar1;
  uint uVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  
  fVar7 = (float)FUN_100652e60(param_1 + 0xdc8);
  lVar1 = param_1 + 0x22a0;
  fVar8 = (float)FUN_100652e60(lVar1);
  fVar8 = (*(float *)(param_1 + 0xe10) * fVar7) / fVar8;
  FUN_100642324(lVar1);
  uVar2 = *(uint *)(param_1 + 0x2324);
  *(uint *)(param_1 + 0x2324) = uVar2 | 4;
  if ((uVar2 & 0x7f80) != 0x2600) {
    *(uint *)(param_1 + 0x2324) = uVar2 & 0xffff8000 | uVar2 & 0x7f | 0x2604;
    FUN_1000200a0(lVar1);
  }
  fVar7 = fVar8 * 2.25;
  bVar3 = false;
  if ((*(float *)(param_1 + 0x22e8) == fVar7) &&
     (bVar3 = false, !NAN(*(float *)(param_1 + 0x22ec)) && !NAN(fVar7))) {
    bVar3 = *(float *)(param_1 + 0x22ec) == fVar7;
  }
  if (!bVar3) {
    *(float *)(param_1 + 0x22e8) = fVar7;
    *(float *)(param_1 + 0x22ec) = fVar7;
    FUN_1000200a0(lVar1);
  }
  uVar4 = FUN_100640db8(fVar8,fVar8,0x3e4ccccd,FUN_10001f4c4);
  FUN_100640840(0x3f3d70a4,0x3e4ccccd,0);
  uVar5 = FUN_10001f4d4();
  FUN_10063f2a4(uVar5,uVar4);
  FUN_100642b14(lVar1,uVar5);
  uVar4 = FUN_100640db8(fVar8 * 0.85,fVar8 * 0.85,0,0);
  FUN_100640840(0x3f800000,0,0);
  uVar5 = FUN_10001f4d4();
  FUN_10063f2a4(uVar5,uVar4);
  FUN_100642b14(lVar1,uVar5);
  uVar4 = FUN_100640db8(fVar8,fVar8,0,0);
  FUN_100640840(0x3f19999a,0,0);
  uVar5 = FUN_10001f4d4();
  FUN_10063f2a4(uVar5,uVar4);
  FUN_100642b14(lVar1,uVar5);
  uVar4 = FUN_100640840(0,0x3ecccccd,0);
  FUN_100642b14(lVar1,uVar4);
  uVar4 = FUN_100047300();
  FUN_100642b14(lVar1,uVar4);
  lVar1 = param_1 + 0x2390;
  FUN_100642324(lVar1);
  uVar2 = *(uint *)(param_1 + 0x2414);
  *(uint *)(param_1 + 0x2414) = uVar2 | 4;
  if ((uVar2 & 0x7f80) != 0) {
    *(uint *)(param_1 + 0x2414) = uVar2 & 0xffff807f | 4;
    FUN_1000200a0(lVar1);
  }
  uVar4 = NEON_fmov(0x3f800000,4);
  if ((*(float *)(param_1 + 0x23d8) != 1.0) || (*(float *)(param_1 + 0x23dc) != 1.0)) {
    *(undefined8 *)(param_1 + 0x23d8) = uVar4;
    FUN_1000200a0(lVar1);
  }
  uVar5 = FUN_100640db8(0x40200000,0x40200000,0x3f19999a,0);
  FUN_100640840(0x3f800000,0x3f19999a,0);
  uVar6 = FUN_10001f4d4();
  FUN_10063f2a4(uVar6,uVar5);
  FUN_100642b14(lVar1,uVar6);
  uVar5 = FUN_100640db8(0x40d33333,0x40d33333,0x40000000,FUN_10001f4ac);
  FUN_100640840(0,0x40000000,FUN_10001f4ac);
  uVar6 = FUN_10001f4d4();
  FUN_10063f2a4(uVar6,uVar5);
  FUN_100642b14(lVar1,uVar6);
  lVar1 = param_1 + 0x2480;
  FUN_100642324(lVar1);
  uVar2 = *(uint *)(param_1 + 0x2504);
  *(uint *)(param_1 + 0x2504) = uVar2 | 4;
  if ((uVar2 & 0x7f80) != 0) {
    *(uint *)(param_1 + 0x2504) = uVar2 & 0xffff807f | 4;
    FUN_1000200a0(lVar1);
  }
  if ((*(float *)(param_1 + 0x24c8) != 1.0) || (*(float *)(param_1 + 0x24cc) != 1.0)) {
    *(undefined8 *)(param_1 + 0x24c8) = uVar4;
    FUN_1000200a0(lVar1);
  }
  uVar4 = FUN_10064081c(0x3e99999a);
  FUN_100642b14(lVar1,uVar4);
  uVar4 = FUN_100640db8(0x40200000,0x40200000,0x3f051eb8,0);
  FUN_100640840(0x3ecccccd,0x3f051eb8,0);
  uVar5 = FUN_10001f4d4();
  FUN_10063f2a4(uVar5,uVar4);
  FUN_100642b14(lVar1,uVar5);
  uVar4 = FUN_100640db8(0x40d33333,0x40d33333,0x40000000,FUN_10001f4ac);
  FUN_100640840(0,0x40000000,FUN_10001f4ac);
  uVar5 = FUN_10001f4d4();
  FUN_10063f2a4(uVar5,uVar4);
  FUN_100642b14(lVar1,uVar5);
  return;
}




void FUN_100230a14(long param_1,long param_2)

{
  undefined8 *puVar1;
  size_t sVar2;
  size_t sVar3;
  undefined8 *puVar4;
  undefined8 ******ppppppuVar5;
  byte bVar6;
  int iVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulong uVar11;
  byte *pbVar12;
  void *pvVar13;
  byte *pbVar14;
  size_t sVar15;
  size_t sVar16;
  byte bVar17;
  undefined **local_f0;
  undefined1 auStack_e8 [16];
  void *local_d8;
  char local_c1;
  undefined1 auStack_c0 [48];
  undefined8 *****local_90 [2];
  char local_79;
  undefined8 local_78;
  void *local_70;
  undefined8 local_68;
  void *local_60;
  
  puVar1 = (undefined8 *)(param_1 + 0x10590);
  lVar8 = FUN_10015d3ec();
  bVar17 = DAT_101d911a8._7_1_;
  sVar16 = DAT_101d911a0;
  bVar6 = *(byte *)(lVar8 + 0x548f);
  uVar11 = (ulong)bVar6;
  sVar3 = *(size_t *)(lVar8 + 0x5480);
  if (-1 < (char)bVar6) {
    sVar3 = uVar11;
  }
  sVar15 = (size_t)DAT_101d911a8._7_1_;
  sVar2 = DAT_101d911a0;
  if (-1 < (char)DAT_101d911a8._7_1_) {
    sVar2 = sVar15;
  }
  if (sVar3 == sVar2) {
    pvVar13 = *(void **)(lVar8 + 0x5478);
    puVar4 = pvVar13;
    if (-1 < (char)bVar6) {
      puVar4 = (undefined8 *)(lVar8 + 0x5478);
    }
    pbVar14 = DAT_101d91198;
    if (-1 < (char)DAT_101d911a8._7_1_) {
      pbVar14 = (byte *)&DAT_101d91198;
    }
    if ((char)bVar6 < '\0') {
      if ((sVar3 == 0) || (iVar7 = _memcmp(puVar4,pbVar14,sVar3), iVar7 == 0)) goto LAB_100230b24;
    }
    else {
      if (sVar3 == 0) goto LAB_100230b24;
      if ((uint)*pbVar14 == ((uint)pvVar13 & 0xff)) {
        pbVar12 = (byte *)(lVar8 + 0x5479);
        do {
          uVar11 = uVar11 - 1;
          pbVar14 = pbVar14 + 1;
          if (uVar11 == 0) goto LAB_100230b24;
          bVar6 = *pbVar12;
          pbVar12 = pbVar12 + 1;
        } while (bVar6 == *pbVar14);
      }
    }
  }
  uVar9 = FUN_10015d3ec();
  lVar8 = FUN_10015d3ec();
  FUN_1001634c4(uVar9,lVar8 + 0x5478,0);
  sVar15 = (size_t)DAT_101d911a8._7_1_;
  sVar16 = DAT_101d911a0;
  bVar17 = DAT_101d911a8._7_1_;
LAB_100230b24:
  bVar6 = *(byte *)(param_1 + 0x105a7);
  uVar11 = (ulong)bVar6;
  sVar3 = *(size_t *)(param_1 + 0x10598);
  if (-1 < (char)bVar6) {
    sVar3 = uVar11;
  }
  if (-1 < (char)bVar17) {
    sVar16 = sVar15;
  }
  if (sVar3 == sVar16) {
    puVar4 = (void *)*puVar1;
    if (-1 < (char)bVar6) {
      puVar4 = puVar1;
    }
    pbVar14 = DAT_101d91198;
    if (-1 < (char)bVar17) {
      pbVar14 = (byte *)&DAT_101d91198;
    }
    if ((char)bVar6 < '\0') {
      if (sVar3 == 0) {
        return;
      }
      iVar7 = _memcmp(puVar4,pbVar14,sVar3);
      if (iVar7 == 0) {
        return;
      }
    }
    else {
      if (sVar3 == 0) {
        return;
      }
      if ((uint)*pbVar14 == ((uint)(void *)*puVar1 & 0xff)) {
        pbVar12 = (byte *)(param_1 + 0x10591);
        do {
          uVar11 = uVar11 - 1;
          pbVar14 = pbVar14 + 1;
          if (uVar11 == 0) {
            return;
          }
          bVar6 = *pbVar12;
          pbVar12 = pbVar12 + 1;
        } while (bVar6 == *pbVar14);
      }
    }
  }
  lVar8 = FUN_10015d3ec();
  bVar6 = *(byte *)(param_1 + 0x105a7);
  uVar11 = (ulong)bVar6;
  bVar17 = *(byte *)(lVar8 + 0x551f);
  sVar3 = *(size_t *)(param_1 + 0x10598);
  if (-1 < (char)bVar6) {
    sVar3 = uVar11;
  }
  sVar16 = *(size_t *)(lVar8 + 0x5510);
  if (-1 < (char)bVar17) {
    sVar16 = (ulong)bVar17;
  }
  if (sVar3 == sVar16) {
    puVar4 = (undefined8 *)*puVar1;
    if (-1 < (char)bVar6) {
      puVar4 = puVar1;
    }
    pbVar14 = *(byte **)(lVar8 + 0x5508);
    if (-1 < (char)bVar17) {
      pbVar14 = (byte *)(lVar8 + 0x5508);
    }
    if ((char)bVar6 < '\0') {
      if (sVar3 == 0) {
        return;
      }
      iVar7 = _memcmp(puVar4,pbVar14,sVar3);
      if (iVar7 == 0) {
        return;
      }
    }
    else {
      if (sVar3 == 0) {
        return;
      }
      if ((uint)*pbVar14 == ((uint)(undefined8 *)*puVar1 & 0xff)) {
        pbVar12 = (byte *)(param_1 + 0x10591);
        do {
          uVar11 = uVar11 - 1;
          pbVar14 = pbVar14 + 1;
          if (uVar11 == 0) {
            return;
          }
          bVar6 = *pbVar12;
          pbVar12 = pbVar12 + 1;
        } while (bVar6 == *pbVar14);
      }
    }
  }
  FUN_10014237c(&local_f0);
  iVar7 = FUN_100136d20(param_2 + 0x48,&local_f0);
  if (iVar7 != 0) {
    ppppppuVar5 = (undefined8 ******)local_90[0];
    if (-1 < local_79) {
      ppppppuVar5 = local_90;
    }
    uVar9 = FUN_1000e7ce4(auStack_c0);
    uVar10 = FUN_1000e7cb0(auStack_c0);
    FUN_100107850(ppppppuVar5,uVar9,uVar10,0,1);
  }
  local_f0 = &PTR_FUN_10145ac30;
  if (local_60 != (void *)0x0) {
    operator_delete__(local_60);
    local_68 = 0;
    local_60 = (void *)0x0;
  }
  if (local_70 != (void *)0x0) {
    operator_delete__(local_70);
    local_78 = 0;
    local_70 = (void *)0x0;
  }
  if (local_79 < '\0') {
    operator_delete(local_90[0]);
  }
  if (local_c1 < '\0') {
    operator_delete(local_d8);
  }
  FUN_1001423e4(auStack_e8,1);
  return;
}




void FUN_100230d40(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  FUN_1002313e8(param_1,param_2,param_5);
  return;
}




void FUN_100230d48(uint *param_1,undefined8 *param_2)

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
    FUN_100232bb4(param_1,uVar2);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




void FUN_100230dc8(long *param_1,uint param_2,uint param_3)

{
  uint *puVar1;
  uint *puVar2;
  long *plVar3;
  long *plVar4;
  uint uVar5;
  char *pcVar6;
  int iVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  uint uVar14;
  uint uVar15;
  ulong uVar16;
  undefined4 uVar17;
  float fVar18;
  float fVar19;
  ulong uVar20;
  ulong uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  code *local_c0;
  long *plStack_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  
  puVar1 = (uint *)((long)param_1 + 0x1058c);
  uVar15 = *puVar1;
  *puVar1 = param_3;
  if ((int)param_3 < 0) {
    return;
  }
  if (*(uint *)(param_1 + 0x3fb) <= param_3) {
    return;
  }
  iVar10 = *(int *)(*(long *)(param_1[0x3fc] + (ulong)param_3 * 8) + 0x25a0);
  lVar11 = FUN_10015d3ec();
  if ((int)*(uint *)(lVar11 + 0x5624) < 0) {
    if (iVar10 == 4) goto LAB_100230e8c;
  }
  else {
    iVar7 = *(int *)(*(long *)(lVar11 + 0x5268) + (ulong)*(uint *)(lVar11 + 0x5624) * 0x108 + 0x50);
    if (iVar10 == 4 && iVar7 != 4) goto LAB_100230e8c;
    if (iVar7 == 4) {
      uVar15 = 1;
      goto LAB_100230e98;
    }
  }
  if (*(int *)(*(long *)(param_1[0x3fc] + (ulong)*puVar1 * 8) + 0x25a0) != 3) {
    uVar15 = 0;
LAB_100230e98:
    puVar2 = (uint *)((long)param_1 + 0x514c);
    plVar3 = param_1 + 0xa19;
    FUN_100642324(plVar3);
    bVar8 = param_2 == 0;
    fVar18 = 135.0;
    if (bVar8) {
      fVar18 = 0.0;
    }
    uVar9 = 0x3eb33333;
    if (bVar8) {
      uVar9 = 0x3dcccccd;
    }
    uVar21 = (ulong)uVar9;
    uVar14 = *puVar2;
    uVar9 = 0;
    if (bVar8) {
      uVar9 = 0xcc;
    }
    if (uVar9 != (uVar14 >> 7 & 0xff)) {
      *puVar2 = uVar14 & 0xffff8000 | uVar14 & 0x7f | uVar9 << 7;
      FUN_1000200a0(plVar3);
      uVar14 = *puVar2;
    }
    *puVar2 = uVar14 | 4;
    uVar17 = 0x3f4ccccd;
    if (param_2 == 0) {
      uVar17 = 0;
    }
    uVar9 = 0;
    if (param_2 == 0) {
      uVar9 = 0x10;
    }
    uVar20 = uVar21;
    uVar12 = FUN_100640840(uVar17,FUN_10001f160);
    FUN_100642b14(plVar3,uVar12);
    fVar19 = (float)uVar20;
    lVar11 = *(long *)(param_1[0x3fc] + (ulong)*puVar1 * 8);
    *(uint *)(lVar11 + 0x1fc) = *(uint *)(lVar11 + 0x1fc) & 0xffffffef | uVar9;
    uVar9 = *puVar1;
    plVar4 = param_1 + 0x2f9;
    if (uVar9 + 1 < *(uint *)(param_1 + 0x3fb)) {
      uVar16 = (ulong)(uVar9 + 1);
      do {
        fVar19 = (float)uVar20;
        FUN_100642324(*(undefined8 *)(param_1[0x3fc] + uVar16 * 8));
        fVar22 = *(float *)((long)param_1 + 0x1784);
        FUN_100652e60(plVar4);
        uVar20 = (ulong)(uint)(fVar18 + (float)(int)uVar16 * 135.0 + fVar22 + fVar19);
        uVar12 = FUN_1006408f4(*(undefined4 *)(*(long *)(param_1[0x3fc] + uVar16 * 8) + 0x40),uVar20
                               ,uVar21,FUN_10001f160);
        FUN_100642b14(*(undefined8 *)(param_1[0x3fc] + uVar16 * 8),uVar12);
        fVar19 = (float)uVar20;
        uVar16 = uVar16 + 1;
      } while ((uint)uVar16 < *(uint *)(param_1 + 0x3fb));
      uVar9 = *puVar1;
    }
    FUN_1006423ec(*(undefined8 *)(param_1[0x3fc] + (ulong)uVar9 * 8),1);
    if ((param_2 & 1) == 0) {
      FUN_1005308f8(param_1 + 0x223,*(undefined8 *)(param_1[0x3fc] + (ulong)*puVar1 * 8),1);
      fVar18 = *(float *)((long)param_1 + 0x1784);
      FUN_100652e60(plVar4);
      fVar18 = fVar19 + fVar18 + (float)(int)*puVar1 * 135.0;
      lVar11 = *(long *)(param_1[0x3fc] + (ulong)*puVar1 * 8);
      fVar19 = *(float *)(lVar11 + 0x40);
      bVar8 = false;
      if ((fVar19 == 0.0) && (bVar8 = false, !NAN(*(float *)(lVar11 + 0x44)) && !NAN(fVar18))) {
        bVar8 = *(float *)(lVar11 + 0x44) == fVar18;
      }
      if (!bVar8) {
        *(undefined4 *)(lVar11 + 0x40) = 0;
        *(float *)(lVar11 + 0x44) = fVar18;
        FUN_1000200a0();
      }
      uVar12 = FUN_100047300();
      FUN_100642b14(plVar3,uVar12);
      fVar18 = -1.0;
    }
    else {
      (**(code **)(*param_1 + 0x78))(param_1,*(undefined8 *)(param_1[0x3fc] + (ulong)*puVar1 * 8),1)
      ;
      lVar11 = FUN_10003d5bc(param_1 + 0x2e8);
      fVar22 = *(float *)(lVar11 + 8);
      fVar23 = *(float *)(lVar11 + 0xc);
      fVar24 = *(float *)(lVar11 + 0x10);
      fVar25 = *(float *)(lVar11 + 0x14);
      lVar11 = FUN_10003d5bc(param_1);
      fVar18 = *(float *)(lVar11 + 0xc);
      FUN_100652e60(plVar4);
      lVar11 = *(long *)(param_1[0x3fc] + (ulong)*puVar1 * 8);
      fVar22 = fVar22 / fVar24;
      fVar19 = (fVar23 - fVar18) / fVar25 + fVar19 + (float)(int)*puVar1 * 135.0;
      if ((*(float *)(lVar11 + 0x40) != fVar22) || (*(float *)(lVar11 + 0x44) != fVar19)) {
        *(float *)(lVar11 + 0x40) = fVar22;
        *(float *)(lVar11 + 0x44) = fVar19;
        FUN_1000200a0();
        lVar11 = *(long *)(param_1[0x3fc] + (ulong)*puVar1 * 8);
      }
      uVar12 = FUN_100655b6c(lVar11 + 0x248);
      FUN_10015d3ec();
      uVar13 = FUN_100164f34();
      uVar9 = FUN_1004e3654(uVar12,uVar13);
      pcVar6 = "MENU_PROFILE_GUILD_LEAVE_GUILD";
      if (uVar9 == 0) {
        pcVar6 = "MENU_PROFILE_GUILD_REMOVE_MEMBER";
      }
      uVar12 = FUN_1004e0150(pcVar6,0);
      FUN_100181af8(param_1 + 0xa7c,uVar12);
      local_98 = DAT_101d91884;
      local_c0 = thunk_FUN_100231648;
      local_a8 = 0;
      uStack_a0 = 0;
      local_b0 = 0;
      plStack_b8 = param_1;
      FUN_10001554c(param_1 + 0xa7d,&local_c0);
      uVar14 = 4;
      if (uVar15 == 0) {
        uVar14 = 0;
      }
      uVar5 = *(uint *)((long)param_1 + 0x5464) & 0xfffffffb | uVar14;
      if (iVar10 != 4) {
        uVar5 = *(uint *)((long)param_1 + 0x5464) | 4;
      }
      *(uint *)((long)param_1 + 0x5464) = uVar5;
      if ((uVar15 & uVar9) == 1) {
        *(uint *)((long)param_1 + 0x6a1c) = *(uint *)((long)param_1 + 0x6a1c) & 0xfffffffb;
        uVar14 = *(uint *)((long)param_1 + 0x7fd4) & 0xfffffffb;
      }
      else {
        *(uint *)((long)param_1 + 0x6a1c) = *(uint *)((long)param_1 + 0x6a1c) & 0xfffffffb | uVar14;
        pcVar6 = "MENU_GUILD_MEMBERS_DEMOTE_BUTTON_LABEL";
        if (*(int *)(*(long *)(param_1[0x3fc] + (ulong)*puVar1 * 8) + 0x25a0) != 3) {
          pcVar6 = "MENU_GUILD_MEMBERS_PROMOTE_BUTTON_LABEL";
        }
        uVar12 = FUN_1004e0150(pcVar6,0);
        FUN_100181af8(param_1 + 0xd33,uVar12);
        uVar14 = *(uint *)((long)param_1 + 0x7fd4) & 0xfffffffb | uVar14;
      }
      *(uint *)((long)param_1 + 0x7fd4) = uVar14;
      fVar18 = 1.0;
    }
    plVar3 = param_1 + 0xa37;
    *(uint *)((long)param_1 + 0x523c) = *(uint *)((long)param_1 + 0x523c) | 4;
    plVar4 = param_1 + 0xa6b;
    FUN_100642324(plVar4);
    FUN_100642888(plVar4,0,0,1,1);
    fVar19 = fVar18 * -0.5 * fVar19;
    fVar22 = *(float *)((long)param_1 + 0x539c);
    if (fVar22 != fVar19) {
      *(float *)((long)param_1 + 0x539c) = fVar19;
      FUN_1000200a0(plVar4);
    }
    FUN_100642888(plVar4,0,0,1,1);
    uVar12 = FUN_1006408f4(0,(fVar22 * 0.5 + 5.0) * fVar18,uVar21,FUN_10001f160);
    FUN_100642b14(plVar4,uVar12);
    if (param_2 == 0) {
      uVar12 = FUN_100047300();
      FUN_100642b14(plVar3,uVar12);
      *puVar1 = 0xffffffff;
    }
    else {
      iVar10 = FUN_100642d08(plVar3);
      if (iVar10 != 0) {
        FUN_1006423ec(plVar3,1);
      }
      (**(code **)(*param_1 + 0x78))(param_1,plVar3,1);
      lVar11 = *(long *)(param_1[0x3fc] + (ulong)*puVar1 * 8);
      fVar18 = *(float *)(lVar11 + 0x40);
      fVar19 = *(float *)(lVar11 + 0x44) + 135.0;
      if ((*(float *)(param_1 + 0xa3f) != fVar18) || (*(float *)((long)param_1 + 0x51fc) != fVar19))
      {
        *(float *)(param_1 + 0xa3f) = fVar18;
        *(float *)((long)param_1 + 0x51fc) = fVar19;
        FUN_1000200a0(plVar3);
      }
      *(uint *)((long)param_1 + 0x53dc) = *(uint *)((long)param_1 + 0x53dc) | 4;
    }
    (**(code **)(*param_1 + 0x150))(param_1);
    return;
  }
LAB_100230e8c:
  *puVar1 = uVar15;
  return;
}




void FUN_1002313e8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  if (*(char *)(param_1 + 0x105c8) == '\0') {
    return;
  }
  lVar1 = FUN_10015d3ec();
  if (((int)*(uint *)(lVar1 + 0x5624) < 0) ||
     (*(int *)(*(long *)(lVar1 + 0x5268) + (ulong)*(uint *)(lVar1 + 0x5624) * 0x108 + 0x50) != 4)) {
    lVar1 = FUN_10015d3ec();
    if ((int)*(uint *)(lVar1 + 0x5624) < 0) {
      return;
    }
    if (*(int *)(*(long *)(lVar1 + 0x5268) + (ulong)*(uint *)(lVar1 + 0x5624) * 0x108 + 0x50) != 3)
    {
      return;
    }
  }
  FUN_100230dc8(param_1,1,param_3);
  return;
}




void FUN_100231480(long param_1)

{
  uint *puVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_60 [8];
  void *local_58;
  undefined1 auStack_50 [8];
  void *local_48;
  undefined1 auStack_40 [8];
  void *local_38;
  
  lVar3 = FUN_10015d3ec();
  if (((int)*(uint *)(lVar3 + 0x5624) < 0) ||
     (*(int *)(*(long *)(lVar3 + 0x5268) + (ulong)*(uint *)(lVar3 + 0x5624) * 0x108 + 0x50) != 4)) {
    lVar3 = FUN_10015d3ec();
    if ((int)*(uint *)(lVar3 + 0x5624) < 0) {
      return;
    }
    if (*(int *)(*(long *)(lVar3 + 0x5268) + (ulong)*(uint *)(lVar3 + 0x5624) * 0x108 + 0x50) != 3)
    {
      return;
    }
  }
  puVar1 = (uint *)(param_1 + 0x1058c);
  if (((-1 < (int)*puVar1) && (*puVar1 < *(uint *)(param_1 + 0x1fd8))) &&
     (iVar2 = FUN_10015d3f8(), iVar2 != 0)) {
    FUN_10015d3ec();
    uVar4 = FUN_100164f34();
    uVar5 = FUN_100655b6c(*(long *)(*(long *)(param_1 + 0x1fe0) + (ulong)*puVar1 * 8) + 0x248);
    iVar2 = FUN_1004e3654(uVar4,uVar5);
    if (iVar2 != 0) {
      FUN_100231648(param_1);
      return;
    }
    uVar4 = FUN_1004e0150("MENU_GUILD_MEMBERS_CONFIRM_REMOVE_MEMBER_TITLE",0);
    thunk_FUN_1004e439c(auStack_40,uVar4);
    uVar4 = FUN_1004e0150("MENU_GUILD_MEMBERS_CONFIRM_REMOVE_MEMBER_BODY",0);
    thunk_FUN_1004e439c(auStack_50,uVar4);
    FUN_1004e3120(auStack_60,"[MEMBER_NAME]");
    uVar4 = FUN_100655b6c(*(long *)(*(long *)(param_1 + 0x1fe0) + (ulong)*puVar1 * 8) + 0x248);
    FUN_1004e3bc4(auStack_50,0,auStack_60,uVar4);
    if (local_58 != (void *)0x0) {
      operator_delete__(local_58);
    }
    uVar4 = FUN_1004e0150("GENERIC_DIALOG_OKAY",0);
    uVar5 = FUN_1004e0150("GENERIC_DIALOG_CANCEL",0);
    FUN_1001e3120(auStack_40,auStack_50,uVar4,uVar5,param_1,thunk_FUN_100231d94,0);
    if (local_48 != (void *)0x0) {
      operator_delete__(local_48);
    }
    if (local_38 != (void *)0x0) {
      operator_delete__(local_38);
    }
  }
  return;
}




void FUN_100231648(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  char *pcVar3;
  undefined8 uVar4;
  undefined1 auStack_40 [8];
  void *local_38;
  undefined1 auStack_30 [8];
  void *local_28;
  
  uVar1 = FUN_1004e0150("GUILD_LEAVE_DIALOG_TITLE",0);
  thunk_FUN_1004e439c(auStack_30,uVar1);
  uVar1 = FUN_1004e0150("GUILD_LEAVE_MEMBER_DIALOG_TEXT",0);
  thunk_FUN_1004e439c(auStack_40,uVar1);
  if (*(int *)(param_1 + 0x1fd8) == 1) {
    pcVar3 = "GUILD_LEAVE_LAST_MEMBER_DIALOG_TEXT";
  }
  else {
    lVar2 = FUN_10015d3ec();
    if (((int)*(uint *)(lVar2 + 0x5624) < 0) ||
       (*(int *)(*(long *)(lVar2 + 0x5268) + (ulong)*(uint *)(lVar2 + 0x5624) * 0x108 + 0x50) != 4))
    goto LAB_1002316f0;
    pcVar3 = "GUILD_LEAVE_LEADER_DIALOG_TEXT";
  }
  uVar1 = FUN_1004e0150(pcVar3,0);
  FUN_1000153b4(auStack_40,uVar1);
LAB_1002316f0:
  uVar1 = FUN_1004e0150("GENERIC_DIALOG_OKAY",0);
  uVar4 = FUN_1004e0150("GENERIC_DIALOG_CANCEL",0);
  FUN_1001e3120(auStack_30,auStack_40,uVar1,uVar4,param_1,thunk_FUN_100231bcc,0);
  if (local_38 != (void *)0x0) {
    operator_delete__(local_38);
  }
  if (local_28 != (void *)0x0) {
    operator_delete__(local_28);
  }
  return;
}




void thunk_FUN_100231d94(long param_1)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar3 = FUN_10015d3ec();
  if (((int)*(uint *)(lVar3 + 0x5624) < 0) ||
     (*(int *)(*(long *)(lVar3 + 0x5268) + (ulong)*(uint *)(lVar3 + 0x5624) * 0x108 + 0x50) != 4)) {
    lVar3 = FUN_10015d3ec();
    if (((int)*(uint *)(lVar3 + 0x5624) < 0) ||
       (*(int *)(*(long *)(lVar3 + 0x5268) + (ulong)*(uint *)(lVar3 + 0x5624) * 0x108 + 0x50) != 3))
    goto LAB_100231e38;
  }
  iVar2 = FUN_10015d3f8();
  if (iVar2 != 0) {
    uVar1 = *(uint *)(param_1 + 0x1058c);
    if ((-1 < (int)uVar1) && (uVar1 < *(uint *)(param_1 + 0x1fd8))) {
      uVar4 = FUN_10015d3ec();
      FUN_1001673c0(uVar4,*(long *)(*(long *)(param_1 + 0x1fe0) +
                                   (ulong)*(uint *)(param_1 + 0x1058c) * 8) + 0x2570);
    }
  }
LAB_100231e38:
  FUN_100230dc8(param_1,0,*(undefined4 *)(param_1 + 0x1058c));
  return;
}




void FUN_100231764(long param_1)

{
  uint *puVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  char *pcVar5;
  undefined8 uVar6;
  undefined1 auStack_50 [8];
  void *local_48;
  undefined1 auStack_40 [8];
  void *local_38;
  undefined1 auStack_30 [8];
  void *local_28;
  
  iVar2 = FUN_100131220();
  if (iVar2 != 0) {
    lVar3 = FUN_10015d3ec();
    if ((-1 < (int)*(uint *)(lVar3 + 0x5624)) &&
       (*(int *)(*(long *)(lVar3 + 0x5268) + (ulong)*(uint *)(lVar3 + 0x5624) * 0x108 + 0x50) == 4))
    {
      puVar1 = (uint *)(param_1 + 0x1058c);
      if ((-1 < (int)*puVar1) &&
         ((*puVar1 < *(uint *)(param_1 + 0x1fd8) && (iVar2 = FUN_10015d3f8(), iVar2 != 0)))) {
        if (*(int *)(*(long *)(*(long *)(param_1 + 0x1fe0) + (ulong)*puVar1 * 8) + 0x25a0) == 3) {
          uVar4 = FUN_1004e0150("MENU_GUILD_MEMBERS_CONFIRM_DEMOTE_MEMBER_TITLE",0);
          thunk_FUN_1004e439c(auStack_30,uVar4);
          pcVar5 = "MENU_GUILD_MEMBERS_CONFIRM_DEMOTE_MEMBER_BODY";
        }
        else {
          uVar4 = FUN_1004e0150("MENU_GUILD_MEMBERS_CONFIRM_PROMOTE_MEMBER_TITLE",0);
          thunk_FUN_1004e439c(auStack_30,uVar4);
          pcVar5 = "MENU_GUILD_MEMBERS_CONFIRM_PROMOTE_MEMBER_BODY";
        }
        uVar4 = FUN_1004e0150(pcVar5,0);
        thunk_FUN_1004e439c(auStack_40,uVar4);
        FUN_1004e3120(auStack_50,"[MEMBER_NAME]");
        uVar4 = FUN_100655b6c(*(long *)(*(long *)(param_1 + 0x1fe0) + (ulong)*puVar1 * 8) + 0x248);
        FUN_1004e3bc4(auStack_40,0,auStack_50,uVar4);
        if (local_48 != (void *)0x0) {
          operator_delete__(local_48);
        }
        uVar4 = FUN_1004e0150("GENERIC_DIALOG_OKAY",0);
        uVar6 = FUN_1004e0150("GENERIC_DIALOG_CANCEL",0);
        FUN_1001e3120(auStack_30,auStack_40,uVar4,uVar6,param_1,thunk_FUN_100231c1c,0);
        if (local_38 != (void *)0x0) {
          operator_delete__(local_38);
        }
        if (local_28 != (void *)0x0) {
          operator_delete__(local_28);
        }
      }
    }
  }
  return;
}




void thunk_FUN_100231c1c(void)

{
  FUN_100231c1c();
  return;
}




void FUN_100231900(long param_1)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_50 [8];
  void *local_48;
  undefined1 auStack_40 [8];
  void *local_38;
  undefined1 auStack_30 [8];
  void *local_28;
  
  iVar2 = FUN_100131220();
  if (iVar2 != 0) {
    lVar3 = FUN_10015d3ec();
    if ((-1 < (int)*(uint *)(lVar3 + 0x5624)) &&
       (*(int *)(*(long *)(lVar3 + 0x5268) + (ulong)*(uint *)(lVar3 + 0x5624) * 0x108 + 0x50) == 4))
    {
      uVar1 = *(uint *)(param_1 + 0x1058c);
      if ((-1 < (int)uVar1) &&
         ((uVar1 < *(uint *)(param_1 + 0x1fd8) && (iVar2 = FUN_10015d3f8(), iVar2 != 0)))) {
        uVar4 = FUN_1004e0150("MENU_GUILD_MEMBERS_CONFIRM_TRANSFER_LEADERSHIP_TO_MEMBER_TITLE",0);
        thunk_FUN_1004e439c(auStack_30,uVar4);
        uVar4 = FUN_1004e0150("MENU_GUILD_MEMBERS_CONFIRM_TRANSFER_LEADERSHIP_TO_MEMBER_BODY",0);
        thunk_FUN_1004e439c(auStack_40,uVar4);
        FUN_1004e3120(auStack_50,"[MEMBER_NAME]");
        uVar4 = FUN_100655b6c(*(long *)(*(long *)(param_1 + 0x1fe0) +
                                       (ulong)*(uint *)(param_1 + 0x1058c) * 8) + 0x248);
        FUN_1004e3bc4(auStack_40,0,auStack_50,uVar4);
        if (local_48 != (void *)0x0) {
          operator_delete__(local_48);
        }
        uVar4 = FUN_1004e0150("GENERIC_DIALOG_OKAY",0);
        uVar5 = FUN_1004e0150("GENERIC_DIALOG_CANCEL",0);
        FUN_1001e3120(auStack_30,auStack_40,uVar4,uVar5,param_1,thunk_FUN_100231cd8,0);
        if (local_38 != (void *)0x0) {
          operator_delete__(local_38);
        }
        if (local_28 != (void *)0x0) {
          operator_delete__(local_28);
        }
      }
    }
  }
  return;
}




void thunk_FUN_100231cd8(void)

{
  FUN_100231cd8();
  return;
}




void FUN_100231a5c(long param_1)

{
  long *plVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  
  uVar3 = FUN_100644a94("UI::EVENT_EDIT_GUILD_TYPE");
  FUN_100644aec(auStack_48,uVar3,param_1);
  FUN_100644c34(param_1,auStack_48,1);
  plVar1 = (long *)(param_1 + 0x1118);
  bVar2 = false;
  if ((*(float *)(param_1 + 0x115c) == 0.0) && (bVar2 = false, !NAN(*(float *)(param_1 + 0x1158))))
  {
    bVar2 = *(float *)(param_1 + 0x1158) == 0.0;
  }
  if (!bVar2) {
    *(undefined8 *)(param_1 + 0x1158) = 0;
    FUN_1000200a0(plVar1);
  }
  local_28 = 0;
  (**(code **)(*plVar1 + 0x28))(plVar1,&local_28);
  return;
}




void FUN_100231af4(long param_1,undefined8 param_2)

{
  long lVar1;
  void *local_38 [2];
  char local_21;
  
  lVar1 = FUN_100644b2c(param_2);
  if (lVar1 != 0) {
    FUN_10001549c(local_38,"purchaseBoost");
    FUN_1001bc78c(param_1 + 0x9508,local_38,lVar1);
    if (local_21 < '\0') {
      operator_delete(local_38[0]);
    }
  }
  return;
}




void FUN_100231b60(long param_1,undefined8 param_2,uint param_3)

{
  long lVar1;
  
  lVar1 = FUN_10016c2f0();
  if (((*(int *)(lVar1 + 0x38) < 1) && (-1 < (int)param_3)) &&
     (param_3 < *(uint *)(param_1 + 0x1fd8))) {
    std::string::operator=
              ((string *)(param_1 + 0x10590),
               (string *)(*(long *)(*(long *)(param_1 + 0x1fe0) + (ulong)param_3 * 8) + 0x2570));
    return;
  }
  return;
}




void thunk_FUN_100231bcc(long param_1)

{
  int iVar1;
  
  iVar1 = FUN_10015d3f8();
  if (iVar1 != 0) {
    FUN_10015d3ec();
    FUN_100167448();
    if (*(float *)(param_1 + 0x115c) != 0.0) {
      *(undefined4 *)(param_1 + 0x115c) = 0;
      FUN_1000200a0(param_1 + 0x1118);
      return;
    }
  }
  return;
}




void FUN_100231bcc(long param_1)

{
  int iVar1;
  
  iVar1 = FUN_10015d3f8();
  if (iVar1 != 0) {
    FUN_10015d3ec();
    FUN_100167448();
    if (*(float *)(param_1 + 0x115c) != 0.0) {
      *(undefined4 *)(param_1 + 0x115c) = 0;
      FUN_1000200a0(param_1 + 0x1118);
      return;
    }
  }
  return;
}




void FUN_100231c1c(long param_1)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  
  iVar2 = FUN_100131220();
  if (iVar2 != 0) {
    lVar3 = FUN_10015d3ec();
    if (((-1 < (int)*(uint *)(lVar3 + 0x5624)) &&
        (*(int *)(*(long *)(lVar3 + 0x5268) + (ulong)*(uint *)(lVar3 + 0x5624) * 0x108 + 0x50) == 4)
        ) && (iVar2 = FUN_10015d3f8(), iVar2 != 0)) {
      uVar1 = *(uint *)(param_1 + 0x1058c);
      if ((-1 < (int)uVar1) && (uVar1 < *(uint *)(param_1 + 0x1fd8))) {
        uVar4 = FUN_10015d3ec();
        FUN_1001675f4(uVar4,param_1 + 0x105b0,
                      *(long *)(*(long *)(param_1 + 0x1fe0) +
                               (ulong)*(uint *)(param_1 + 0x1058c) * 8) + 0x2570);
      }
    }
    FUN_100230dc8(param_1,0,*(undefined4 *)(param_1 + 0x1058c));
    return;
  }
  return;
}




void FUN_100231cd8(long param_1)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  
  iVar2 = FUN_100131220();
  if (iVar2 != 0) {
    lVar3 = FUN_10015d3ec();
    if (((-1 < (int)*(uint *)(lVar3 + 0x5624)) &&
        (*(int *)(*(long *)(lVar3 + 0x5268) + (ulong)*(uint *)(lVar3 + 0x5624) * 0x108 + 0x50) == 4)
        ) && (iVar2 = FUN_10015d3f8(), iVar2 != 0)) {
      uVar1 = *(uint *)(param_1 + 0x1058c);
      if ((-1 < (int)uVar1) && (uVar1 < *(uint *)(param_1 + 0x1fd8))) {
        uVar4 = FUN_10015d3ec();
        FUN_10016764c(uVar4,param_1 + 0x105b0,
                      *(long *)(*(long *)(param_1 + 0x1fe0) +
                               (ulong)*(uint *)(param_1 + 0x1058c) * 8) + 0x2570);
      }
    }
    FUN_100230dc8(param_1,0,*(undefined4 *)(param_1 + 0x1058c));
    return;
  }
  return;
}




void FUN_100231d94(long param_1)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar3 = FUN_10015d3ec();
  if (((int)*(uint *)(lVar3 + 0x5624) < 0) ||
     (*(int *)(*(long *)(lVar3 + 0x5268) + (ulong)*(uint *)(lVar3 + 0x5624) * 0x108 + 0x50) != 4)) {
    lVar3 = FUN_10015d3ec();
    if (((int)*(uint *)(lVar3 + 0x5624) < 0) ||
       (*(int *)(*(long *)(lVar3 + 0x5268) + (ulong)*(uint *)(lVar3 + 0x5624) * 0x108 + 0x50) != 3))
    goto LAB_100231e38;
  }
  iVar2 = FUN_10015d3f8();
  if (iVar2 != 0) {
    uVar1 = *(uint *)(param_1 + 0x1058c);
    if ((-1 < (int)uVar1) && (uVar1 < *(uint *)(param_1 + 0x1fd8))) {
      uVar4 = FUN_10015d3ec();
      FUN_1001673c0(uVar4,*(long *)(*(long *)(param_1 + 0x1fe0) +
                                   (ulong)*(uint *)(param_1 + 0x1058c) * 8) + 0x2570);
    }
  }
LAB_100231e38:
  FUN_100230dc8(param_1,0,*(undefined4 *)(param_1 + 0x1058c));
  return;
}




long * FUN_100231e58(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  uint uVar16;
  undefined4 uVar17;
  bool bVar18;
  undefined8 *puVar19;
  long lVar20;
  float fVar21;
  code *local_90;
  long *plStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  
  puVar19 = (undefined8 *)FUN_1006421a8();
  *puVar19 = &PTR_thunk_FUN_100232c30_1014773d0;
  thunk_FUN_100652c08();
  plVar1 = param_1 + 0x2f;
  thunk_FUN_100650e64();
  plVar2 = param_1 + 0x55;
  thunk_FUN_100650e64();
  lVar20 = 0x3d8;
  do {
    thunk_FUN_100650e64((long)param_1 + lVar20);
    lVar20 = lVar20 + 0x130;
  } while (lVar20 != 0x9c8);
  plVar3 = param_1 + 0x139;
  thunk_FUN_100652c08(plVar3);
  plVar4 = param_1 + 0x157;
  thunk_FUN_100650e64();
  plVar5 = param_1 + 0x17d;
  thunk_FUN_100652c08(plVar5);
  plVar6 = param_1 + 0x19b;
  thunk_FUN_100652c08(plVar6);
  plVar7 = param_1 + 0x1b9;
  thunk_FUN_100652c08();
  plVar8 = param_1 + 0x1d7;
  thunk_FUN_1001b4648();
  thunk_FUN_1001c7e54(param_1 + 0x224);
  thunk_FUN_1001c6e5c(param_1 + 0x280);
  thunk_FUN_1001c6e5c(param_1 + 0x2fa);
  plVar10 = param_1 + 0x374;
  thunk_FUN_100183990(plVar10,0);
  plVar11 = param_1 + 0x432;
  FUN_1006421a8(plVar11);
  param_1[0x432] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar12 = param_1 + 0x443;
  FUN_1006421a8();
  param_1[0x443] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar13 = param_1 + 0x454;
  thunk_FUN_100652c08();
  plVar14 = param_1 + 0x472;
  thunk_FUN_100652c08();
  plVar15 = param_1 + 0x490;
  thunk_FUN_100652c08(plVar15);
  param_1[0x4b3] = 0;
  param_1[0x4b2] = 0;
  param_1[0x4b1] = 0;
  param_1[0x4b0] = 0;
  param_1[0x4af] = 0;
  param_1[0x4ae] = 0;
  (**(code **)(*param_1 + 0x78))(param_1,plVar3,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar5,1);
  (**(code **)(*param_1 + 0x78))(param_1,puVar19 + 0x11,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x224,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x280,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x2fa,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar6,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar7,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar8,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar10,1);
  lVar20 = 0x3d8;
  do {
    (**(code **)(*param_1 + 0x78))(param_1,(long)param_1 + lVar20,1);
    lVar20 = lVar20 + 0x130;
  } while (lVar20 != 0x9c8);
  (**(code **)(*param_1 + 0x78))(param_1,plVar4,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar11,1);
  FUN_100642bd8(plVar11,plVar12,1);
  FUN_100642bd8(plVar12,plVar13,1);
  FUN_100642bd8(plVar12,plVar14,1);
  FUN_100642bd8(plVar12,plVar15,1);
  FUN_100652cac(plVar3,PTR_s_build___MenuPartsCommon_tga_101854970,"black_background");
  uVar16 = *(uint *)((long)param_1 + 0xa4c);
  if ((uVar16 & 0x7f80) != 0x1300) {
    *(uint *)((long)param_1 + 0xa4c) = uVar16 & 0xffff8000 | uVar16 & 0x7f | 0x1300;
    FUN_1000200a0(plVar3);
  }
  *(uint *)((long)param_1 + 0x1fc) = *(uint *)((long)param_1 + 0x1fc) | 0x10;
  FUN_100652cac(plVar5,PTR_s_build___MenuPartsCommon_tga_101854970,"white_background");
  uVar16 = *(uint *)((long)param_1 + 0xc6c);
  if ((uVar16 & 0x7f80) != 0xc80) {
    *(uint *)((long)param_1 + 0xc6c) = uVar16 & 0xffff8000 | uVar16 & 0x7f | 0xc80;
    FUN_1000200a0(plVar5);
  }
  FUN_100652cac(puVar19 + 0x11,PTR_s_build___MenuPartsCommon_tga_101854970,"generic_crown");
  *(uint *)((long)param_1 + 0x10c) = *(uint *)((long)param_1 + 0x10c) & 0xfffffffb;
  FUN_100651594(plVar1,PTR_s_build___Fonts_Brandon_Regular_48_10184e200,&DAT_10115a168);
  uVar16 = *(uint *)((long)param_1 + 0x1fc);
  if ((uVar16 & 0x7f80) != 0x6c00) {
    *(uint *)((long)param_1 + 0x1fc) = uVar16 & 0xffff8000 | uVar16 & 0x7f | 0x6c00;
    FUN_1000200a0(plVar1);
  }
  FUN_100651594(plVar2,PTR_s_build___Fonts_Brandon_Bold_30_fo_10184e220,&DAT_10115a168);
  uVar16 = *(uint *)((long)param_1 + 0x32c);
  if ((uVar16 & 0x7f80) != 0x3300) {
    *(uint *)((long)param_1 + 0x32c) = uVar16 & 0xffff8000 | uVar16 & 0x7f | 0x3300;
    FUN_1000200a0(plVar2);
  }
  FUN_100652cac(plVar7,PTR_s_build___BoostBadges_tga_1018549b0,"boost_badge_guild_fame");
  FUN_10064e47c(0x43020000,0x43020000,plVar7);
  uVar16 = *(uint *)((long)param_1 + 0xe4c);
  if ((uVar16 & 0x7f80) != 0x3300) {
    *(uint *)((long)param_1 + 0xe4c) = uVar16 & 0xffff8000 | uVar16 & 0x7f | 0x3300;
    FUN_1000200a0(plVar7);
  }
  FUN_100652e14(0x3e99999a,plVar7);
  FUN_100652cac(plVar6,PTR_s_build___BoostBadges_tga_1018549b0,"boost_badge_guild_fame");
  FUN_10064e47c(0x43020000,0x43020000,plVar6);
  uVar17 = DAT_101d91884;
  local_68 = DAT_101d91884;
  local_90 = thunk_FUN_1002327cc;
  local_78 = 0;
  uStack_70 = 0;
  local_80 = 0;
  plStack_88 = param_1;
  FUN_10001554c(param_1 + 0x1d8,&local_90);
  FUN_1001b495c(0x3f800000,plVar8);
  FUN_1001b4964(plVar8,1);
  plVar1 = param_1 + 0x40e;
  FUN_100652cdc(plVar1,"generic_invite_friend");
  uVar16 = *(uint *)((long)param_1 + 0x20f4);
  if ((uVar16 & 0x7f80) != 0x5900) {
    *(uint *)((long)param_1 + 0x20f4) = uVar16 & 0xffff8000 | uVar16 & 0x7f | 0x5900;
    FUN_1000200a0(plVar1);
  }
  fVar21 = (float)FUN_100652e60(plVar1);
  fVar21 = 56.0 / fVar21;
  if ((*(float *)(param_1 + 0x417) != fVar21) || (*(float *)((long)param_1 + 0x20bc) != fVar21)) {
    *(float *)(param_1 + 0x417) = fVar21;
    *(float *)((long)param_1 + 0x20bc) = fVar21;
    FUN_1000200a0(plVar1);
  }
  uVar16 = *(uint *)((long)param_1 + 0x1f14);
  if ((uVar16 & 0x7f80) != 0x1980) {
    *(uint *)((long)param_1 + 0x1f14) = uVar16 & 0xffff8000 | uVar16 & 0x7f | 0x1980;
    FUN_1000200a0(param_1 + 0x3d2);
  }
  FUN_100183c68(0x3f19999a,plVar10,&DAT_10115a168);
  FUN_1001b495c(0,plVar10);
  FUN_100183c68(0x3f666666,plVar10,&DAT_10115a168);
  lVar20 = NEON_fmov(0xc1200000,4);
  param_1[0x37f] = lVar20;
  FUN_100183c78(0x3f59999a,0x3fa00000,plVar10);
  local_68 = uVar17;
  local_90 = thunk_FUN_100232720;
  local_78 = 0;
  uStack_70 = 0;
  local_80 = 0;
  plStack_88 = param_1;
  FUN_10001554c(param_1 + 0x375,&local_90);
  *(uint *)((long)param_1 + 0x1c24) = *(uint *)((long)param_1 + 0x1c24) & 0xfffffffb;
  FUN_1001b4964(plVar10,1);
  lVar20 = 0;
  do {
    lVar9 = (long)param_1 + lVar20 + 0x3d8;
    FUN_100651594(lVar9,PTR_s_build___Fonts_Brandon_Regular_36_10184e1f0,&DAT_10115a168);
    uVar16 = *(uint *)((long)param_1 + lVar20 + 0x45c);
    if ((uVar16 & 0x7f80) != 0x4c80) {
      *(uint *)((long)param_1 + lVar20 + 0x45c) = uVar16 & 0xffff8000 | uVar16 & 0x7f | 0x4c80;
      FUN_1000200a0(lVar9);
    }
    lVar20 = lVar20 + 0x130;
  } while (lVar20 != 0x5f0);
  FUN_100651594(plVar4,PTR_s_build___Fonts_Brandon_Bold_30_fo_10184e220,&DAT_10115a168);
  uVar16 = *(uint *)((long)param_1 + 0xb3c);
  if ((uVar16 & 0x7f80) != 0x2600) {
    *(uint *)((long)param_1 + 0xb3c) = uVar16 & 0xffff8000 | uVar16 & 0x7f | 0x2600;
    FUN_1000200a0(plVar4);
  }
  bVar18 = false;
  if ((*(float *)(param_1 + 0x44d) == 0.5) &&
     (bVar18 = false, !NAN(*(float *)((long)param_1 + 0x226c)))) {
    bVar18 = *(float *)((long)param_1 + 0x226c) == 0.5;
  }
  if (!bVar18) {
    param_1[0x44d] = (long)&DAT_3f0000003f000000;
    FUN_1000200a0(plVar12);
  }
  FUN_100652cac(plVar13,PTR_s_build___MenuPartsCommon_tga_101854970,"generic_large_circle");
  FUN_100652dd4(plVar13,&DAT_10115a168,2);
  uVar16 = *(uint *)((long)param_1 + 0x2324);
  if ((uVar16 & 0x7f80) != 0x4c80) {
    *(uint *)((long)param_1 + 0x2324) = uVar16 & 0xffff8000 | uVar16 & 0x7f | 0x4c80;
    FUN_1000200a0(plVar13);
  }
  fVar21 = *(float *)(param_1 + 0x1c2);
  if ((*(float *)(param_1 + 0x45d) != fVar21) || (*(float *)((long)param_1 + 0x22ec) != fVar21)) {
    *(float *)(param_1 + 0x45d) = fVar21;
    *(float *)((long)param_1 + 0x22ec) = fVar21;
    FUN_1000200a0(plVar13);
  }
  if ((*(float *)(param_1 + 0x45e) != 0.5) || (*(float *)((long)param_1 + 0x22f4) != 0.5)) {
    param_1[0x45e] = (long)&DAT_3f0000003f000000;
    FUN_1000200a0(plVar13);
  }
  *(uint *)((long)param_1 + 0x2324) = *(uint *)((long)param_1 + 0x2324) & 0xfffffffb;
  FUN_100652cac(plVar14,PTR_s_build___MenuPartsCommon_tga_101854970,"focus_indicator_ring");
  if ((*(float *)(param_1 + 0x47c) != 0.5) || (*(float *)((long)param_1 + 0x23e4) != 0.5)) {
    param_1[0x47c] = (long)&DAT_3f0000003f000000;
    FUN_1000200a0(plVar14);
  }
  *(uint *)((long)param_1 + 0x2414) = *(uint *)((long)param_1 + 0x2414) & 0xfffffffb;
  FUN_100652cac(plVar15,PTR_s_build___MenuPartsCommon_tga_101854970,"focus_indicator_ring");
  if ((*(float *)(param_1 + 0x49a) != 0.5) || (*(float *)((long)param_1 + 0x24d4) != 0.5)) {
    param_1[0x49a] = (long)&DAT_3f0000003f000000;
    FUN_1000200a0(plVar15);
  }
  *(uint *)((long)param_1 + 0x2504) = *(uint *)((long)param_1 + 0x2504) & 0xfffffffb;
  return param_1;
}




void thunk_FUN_1002327cc(long param_1)

{
  size_t sVar1;
  size_t sVar2;
  undefined8 *puVar3;
  byte bVar4;
  byte bVar5;
  bool bVar6;
  int iVar7;
  long lVar8;
  undefined1 *puVar9;
  undefined8 uVar10;
  ulong uVar11;
  byte *pbVar12;
  void *pvVar13;
  byte *pbVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  void *pvStack_278;
  void *pvStack_270;
  undefined7 uStack_268;
  char cStack_261;
  char cStack_251;
  undefined4 uStack_250;
  undefined8 uStack_24c;
  undefined **ppuStack_240;
  undefined1 auStack_238 [15];
  char cStack_229;
  long lStack_210;
  undefined8 uStack_1f0;
  void *pvStack_1e8;
  void *pvStack_1e0;
  char cStack_1c9;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_198;
  undefined1 uStack_193;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined4 uStack_180;
  void *pvStack_178;
  undefined8 uStack_170;
  long lStack_168;
  void *pvStack_160;
  undefined8 uStack_158;
  long lStack_150;
  undefined1 auStack_148 [8];
  uint uStack_140;
  long lStack_138;
  undefined1 auStack_130 [16];
  undefined1 auStack_120 [192];
  
  lVar8 = FUN_10016c2f0();
  if (0 < *(int *)(lVar8 + 0x38)) {
    return;
  }
  FUN_1000eb06c(auStack_148);
  FUN_10001549c(&ppuStack_240,"player_fame_buff_100pct_timed");
  iVar7 = FUN_100136d44(&ppuStack_240,auStack_148);
  if (cStack_229 < '\0') {
    operator_delete(ppuStack_240);
  }
  if (iVar7 == 0) goto LAB_100232b74;
  FUN_1001cd434(&ppuStack_240);
  uStack_190 = 0;
  uStack_188 = 0;
  ppuStack_240 = &PTR_FUN_101464ce8;
  uStack_170 = 0;
  pvStack_178 = (void *)0x0;
  pvStack_160 = (void *)0x0;
  lStack_168 = 0;
  lStack_150 = 0;
  uStack_158 = 0;
  iVar7 = FUN_100126c88();
  lStack_210 = param_1 + 0xeb8;
  uStack_198 = 3;
  uStack_1b0 = 0x3e99999a;
  bVar6 = iVar7 == 0;
  uVar15 = 0;
  uVar16 = 0x2f;
  if (bVar6) {
    uVar15 = 0x80;
    uVar16 = 0x1b;
  }
  uStack_1ac = CONCAT13(0x44,(uint3)CONCAT11(uVar16,uVar15) << 8);
  uStack_1c0 = 0;
  if (bVar6) {
    uStack_1c0 = 0xc1a00000;
  }
  uStack_1c8 = 0x42200000;
  if (bVar6) {
    uStack_1c8 = 0x41a00000;
  }
  uStack_1bc = 0;
  uStack_193 = 1;
  uStack_1c4 = uStack_1c8;
  FUN_10001549c(&pvStack_278,"boost_badge_guild_fame");
  std::string::operator=((string *)&pvStack_178,(string *)&pvStack_278);
  if (cStack_261 < '\0') {
    operator_delete(pvStack_278);
  }
  uStack_180 = 1;
  std::string::operator=((string *)&pvStack_160,(string *)(param_1 + 0x2588));
  thunk_FUN_1004e439c(&pvStack_278,auStack_130);
  FUN_10003330c(&uStack_268,&DAT_101d91198);
  uStack_250 = 0;
  uStack_24c = 0x41a00000;
  FUN_10003c048(auStack_238,&pvStack_278);
  if (cStack_251 < '\0') {
    operator_delete((void *)CONCAT17(cStack_261,uStack_268));
  }
  if (pvStack_270 != (void *)0x0) {
    operator_delete__(pvStack_270);
  }
  lVar8 = FUN_10015d3ec();
  bVar4 = *(byte *)(param_1 + 0x2587);
  uVar11 = (ulong)bVar4;
  bVar5 = *(byte *)(lVar8 + 0x551f);
  sVar1 = *(size_t *)(param_1 + 0x2578);
  if (-1 < (char)bVar4) {
    sVar1 = uVar11;
  }
  sVar2 = *(size_t *)(lVar8 + 0x5510);
  if (-1 < (char)bVar5) {
    sVar2 = (ulong)bVar5;
  }
  if (sVar1 == sVar2) {
    pvVar13 = *(void **)(param_1 + 0x2570);
    puVar3 = pvVar13;
    if (-1 < (char)bVar4) {
      puVar3 = (undefined8 *)(param_1 + 0x2570);
    }
    pbVar14 = *(byte **)(lVar8 + 0x5508);
    if (-1 < (char)bVar5) {
      pbVar14 = (byte *)(lVar8 + 0x5508);
    }
    if ((char)bVar4 < '\0') {
      if ((sVar1 != 0) && (iVar7 = _memcmp(puVar3,pbVar14,sVar1), iVar7 != 0)) goto LAB_100232a34;
    }
    else if (sVar1 != 0) {
      if ((uint)*pbVar14 == ((uint)pvVar13 & 0xff)) {
        pbVar12 = (byte *)(param_1 + 0x2571);
        do {
          uVar11 = uVar11 - 1;
          pbVar14 = pbVar14 + 1;
          if (uVar11 == 0) goto LAB_100232a4c;
          bVar4 = *pbVar12;
          pbVar12 = pbVar12 + 1;
        } while (bVar4 == *pbVar14);
      }
      goto LAB_100232a34;
    }
LAB_100232a4c:
    puVar9 = auStack_120;
  }
  else {
LAB_100232a34:
    puVar9 = (undefined1 *)FUN_1004e0150("MENU_PROFILE_GUILD_GIFT_FAME_BOOST_TOOLTIP",0);
  }
  thunk_FUN_1004e439c(&pvStack_278,puVar9);
  FUN_10003330c(&uStack_268,&DAT_101d91198);
  uStack_250 = 1;
  uStack_24c = 0x41a00000;
  FUN_10003c048(auStack_238,&pvStack_278);
  if (cStack_251 < '\0') {
    operator_delete((void *)CONCAT17(cStack_261,uStack_268));
  }
  if (pvStack_270 != (void *)0x0) {
    operator_delete__(pvStack_270);
  }
  if (uStack_140 != 0) {
    lVar8 = 0;
    uVar11 = 0;
    do {
      FUN_100140564(&uStack_190,lStack_138 + lVar8);
      uVar11 = uVar11 + 1;
      lVar8 = lVar8 + 0xa0;
    } while (uVar11 < uStack_140);
  }
  uVar10 = FUN_100644a94("EVENT_DISPLAY_TOOLTIP");
  FUN_100644aec(&pvStack_278,uVar10,&ppuStack_240);
  FUN_100644c34(param_1,&pvStack_278,1);
  ppuStack_240 = &PTR_FUN_101464ce8;
  if (lStack_150 < 0) {
    operator_delete(pvStack_160);
  }
  if (lStack_168 < 0) {
    operator_delete(pvStack_178);
  }
  FUN_1000eb1ec(&uStack_190,1);
  ppuStack_240 = &PTR_FUN_1014666e0;
  if (cStack_1c9 < '\0') {
    operator_delete(pvStack_1e0);
  }
  if (pvStack_1e8 != (void *)0x0) {
    operator_delete__(pvStack_1e8);
    uStack_1f0 = 0;
    pvStack_1e8 = (void *)0x0;
  }
  FUN_10003c1ec(auStack_238,1);
LAB_100232b74:
  FUN_1000eb120(auStack_148);
  return;
}




void thunk_FUN_100232720(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_30 [8];
  void *pvStack_28;
  
  uVar2 = FUN_100655b6c(param_1 + 0x248);
  thunk_FUN_1004e439c(auStack_30,uVar2);
  iVar1 = FUN_1004e36c0(auStack_30,&DAT_101d91650);
  if (iVar1 != 0) {
    FUN_100111870(auStack_30);
  }
  param_1 = param_1 + 0x1ba0;
  FUN_1001b4c0c(param_1,0);
  FUN_100642324(param_1);
  uVar2 = FUN_100640840(0,0x3e99999a,0);
  FUN_100642b14(param_1,uVar2);
  uVar2 = FUN_100047300();
  FUN_100642b14(param_1,uVar2);
  if (pvStack_28 != (void *)0x0) {
    operator_delete__(pvStack_28);
  }
  return;
}




void FUN_100232720(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_30 [8];
  void *local_28;
  
  uVar2 = FUN_100655b6c(param_1 + 0x248);
  thunk_FUN_1004e439c(auStack_30,uVar2);
  iVar1 = FUN_1004e36c0(auStack_30,&DAT_101d91650);
  if (iVar1 != 0) {
    FUN_100111870(auStack_30);
  }
  param_1 = param_1 + 0x1ba0;
  FUN_1001b4c0c(param_1,0);
  FUN_100642324(param_1);
  uVar2 = FUN_100640840(0,0x3e99999a,0);
  FUN_100642b14(param_1,uVar2);
  uVar2 = FUN_100047300();
  FUN_100642b14(param_1,uVar2);
  if (local_28 != (void *)0x0) {
    operator_delete__(local_28);
  }
  return;
}




void FUN_1002327cc(long param_1)

{
  size_t sVar1;
  size_t sVar2;
  undefined8 *puVar3;
  byte bVar4;
  byte bVar5;
  bool bVar6;
  int iVar7;
  long lVar8;
  undefined1 *puVar9;
  undefined8 uVar10;
  ulong uVar11;
  byte *pbVar12;
  void *pvVar13;
  byte *pbVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  void *local_278;
  void *local_270;
  undefined7 local_268;
  char cStack_261;
  char local_251;
  undefined4 local_250;
  undefined8 local_24c;
  undefined **local_240;
  undefined1 auStack_238 [15];
  char local_229;
  long local_210;
  undefined8 local_1f0;
  void *local_1e8;
  void *local_1e0;
  char local_1c9;
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  undefined4 local_1c0;
  undefined4 uStack_1bc;
  undefined4 local_1b0;
  undefined4 local_1ac;
  undefined4 local_198;
  undefined1 local_193;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined4 local_180;
  void *local_178;
  undefined8 uStack_170;
  long local_168;
  void *pvStack_160;
  undefined8 local_158;
  long lStack_150;
  undefined1 auStack_148 [8];
  uint local_140;
  long local_138;
  undefined1 auStack_130 [16];
  undefined1 auStack_120 [192];
  
  lVar8 = FUN_10016c2f0();
  if (0 < *(int *)(lVar8 + 0x38)) {
    return;
  }
  FUN_1000eb06c(auStack_148);
  FUN_10001549c(&local_240,"player_fame_buff_100pct_timed");
  iVar7 = FUN_100136d44(&local_240,auStack_148);
  if (local_229 < '\0') {
    operator_delete(local_240);
  }
  if (iVar7 == 0) goto LAB_100232b74;
  FUN_1001cd434(&local_240);
  local_190 = 0;
  uStack_188 = 0;
  local_240 = &PTR_FUN_101464ce8;
  uStack_170 = 0;
  local_178 = (void *)0x0;
  pvStack_160 = (void *)0x0;
  local_168 = 0;
  lStack_150 = 0;
  local_158 = 0;
  iVar7 = FUN_100126c88();
  local_210 = param_1 + 0xeb8;
  local_198 = 3;
  local_1b0 = 0x3e99999a;
  bVar6 = iVar7 == 0;
  uVar15 = 0;
  uVar16 = 0x2f;
  if (bVar6) {
    uVar15 = 0x80;
    uVar16 = 0x1b;
  }
  local_1ac = CONCAT13(0x44,(uint3)CONCAT11(uVar16,uVar15) << 8);
  local_1c0 = 0;
  if (bVar6) {
    local_1c0 = 0xc1a00000;
  }
  local_1c8 = 0x42200000;
  if (bVar6) {
    local_1c8 = 0x41a00000;
  }
  uStack_1bc = 0;
  local_193 = 1;
  uStack_1c4 = local_1c8;
  FUN_10001549c(&local_278,"boost_badge_guild_fame");
  std::string::operator=((string *)&local_178,(string *)&local_278);
  if (cStack_261 < '\0') {
    operator_delete(local_278);
  }
  local_180 = 1;
  std::string::operator=((string *)&pvStack_160,(string *)(param_1 + 0x2588));
  thunk_FUN_1004e439c(&local_278,auStack_130);
  FUN_10003330c(&local_268,&DAT_101d91198);
  local_250 = 0;
  local_24c = 0x41a00000;
  FUN_10003c048(auStack_238,&local_278);
  if (local_251 < '\0') {
    operator_delete((void *)CONCAT17(cStack_261,local_268));
  }
  if (local_270 != (void *)0x0) {
    operator_delete__(local_270);
  }
  lVar8 = FUN_10015d3ec();
  bVar4 = *(byte *)(param_1 + 0x2587);
  uVar11 = (ulong)bVar4;
  bVar5 = *(byte *)(lVar8 + 0x551f);
  sVar1 = *(size_t *)(param_1 + 0x2578);
  if (-1 < (char)bVar4) {
    sVar1 = uVar11;
  }
  sVar2 = *(size_t *)(lVar8 + 0x5510);
  if (-1 < (char)bVar5) {
    sVar2 = (ulong)bVar5;
  }
  if (sVar1 == sVar2) {
    pvVar13 = *(void **)(param_1 + 0x2570);
    puVar3 = pvVar13;
    if (-1 < (char)bVar4) {
      puVar3 = (undefined8 *)(param_1 + 0x2570);
    }
    pbVar14 = *(byte **)(lVar8 + 0x5508);
    if (-1 < (char)bVar5) {
      pbVar14 = (byte *)(lVar8 + 0x5508);
    }
    if ((char)bVar4 < '\0') {
      if ((sVar1 != 0) && (iVar7 = _memcmp(puVar3,pbVar14,sVar1), iVar7 != 0)) goto LAB_100232a34;
    }
    else if (sVar1 != 0) {
      if ((uint)*pbVar14 == ((uint)pvVar13 & 0xff)) {
        pbVar12 = (byte *)(param_1 + 0x2571);
        do {
          uVar11 = uVar11 - 1;
          pbVar14 = pbVar14 + 1;
          if (uVar11 == 0) goto LAB_100232a4c;
          bVar4 = *pbVar12;
          pbVar12 = pbVar12 + 1;
        } while (bVar4 == *pbVar14);
      }
      goto LAB_100232a34;
    }
LAB_100232a4c:
    puVar9 = auStack_120;
  }
  else {
LAB_100232a34:
    puVar9 = (undefined1 *)FUN_1004e0150("MENU_PROFILE_GUILD_GIFT_FAME_BOOST_TOOLTIP",0);
  }
  thunk_FUN_1004e439c(&local_278,puVar9);
  FUN_10003330c(&local_268,&DAT_101d91198);
  local_250 = 1;
  local_24c = 0x41a00000;
  FUN_10003c048(auStack_238,&local_278);
  if (local_251 < '\0') {
    operator_delete((void *)CONCAT17(cStack_261,local_268));
  }
  if (local_270 != (void *)0x0) {
    operator_delete__(local_270);
  }
  if (local_140 != 0) {
    lVar8 = 0;
    uVar11 = 0;
    do {
      FUN_100140564(&local_190,local_138 + lVar8);
      uVar11 = uVar11 + 1;
      lVar8 = lVar8 + 0xa0;
    } while (uVar11 < local_140);
  }
  uVar10 = FUN_100644a94("EVENT_DISPLAY_TOOLTIP");
  FUN_100644aec(&local_278,uVar10,&local_240);
  FUN_100644c34(param_1,&local_278,1);
  local_240 = &PTR_FUN_101464ce8;
  if (lStack_150 < 0) {
    operator_delete(pvStack_160);
  }
  if (local_168 < 0) {
    operator_delete(local_178);
  }
  FUN_1000eb1ec(&local_190,1);
  local_240 = &PTR_FUN_1014666e0;
  if (local_1c9 < '\0') {
    operator_delete(local_1e0);
  }
  if (local_1e8 != (void *)0x0) {
    operator_delete__(local_1e8);
    local_1f0 = 0;
    local_1e8 = (void *)0x0;
  }
  FUN_10003c1ec(auStack_238,1);
LAB_100232b74:
  FUN_1000eb120(auStack_148);
  return;
}




void thunk_FUN_100232c30(void)

{
  FUN_100232c30();
  return;
}




void FUN_100232ba0(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_100232c30();
  operator_delete(pvVar1);
  return;
}




void FUN_100232bb4(uint *param_1,uint param_2)

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




void FUN_100232c30(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR_thunk_FUN_100232c30_1014773d0;
  if (*(char *)((long)param_1 + 0x259f) < '\0') {
    operator_delete((void *)param_1[0x4b1]);
  }
  if (*(char *)((long)param_1 + 0x2587) < '\0') {
    operator_delete((void *)param_1[0x4ae]);
  }
  param_1[0x490] = &PTR_FUN_1014a7108;
  param_1[0x4a7] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x4aa);
  FUN_10064e2bc(param_1 + 0x490);
  param_1[0x472] = &PTR_FUN_1014a7108;
  param_1[0x489] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x48c);
  FUN_10064e2bc(param_1 + 0x472);
  param_1[0x454] = &PTR_FUN_1014a7108;
  param_1[0x46b] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x46e);
  FUN_10064e2bc(param_1 + 0x454);
  FUN_10064221c(param_1 + 0x443);
  FUN_10064221c(param_1 + 0x432);
  param_1[0x374] = &PTR_FUN_10145f300;
  param_1[0x40e] = &PTR_FUN_1014a7108;
  param_1[0x425] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x428);
  FUN_10064e2bc(param_1 + 0x40e);
  param_1[0x3f0] = &PTR_FUN_1014a7108;
  param_1[0x407] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x40a);
  FUN_10064e2bc(param_1 + 0x3f0);
  param_1[0x3d2] = &PTR_FUN_1014a7108;
  param_1[0x3e9] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x3ec);
  FUN_10064e2bc(param_1 + 0x3d2);
  FUN_10064221c(param_1 + 0x3c1);
  FUN_10003bec8(param_1 + 0x374);
  FUN_10017d364(param_1 + 0x2fa);
  FUN_10017d364(param_1 + 0x280);
  param_1[0x224] = &PTR_FUN_101462268;
  thunk_FUN_100651068(param_1 + 0x259);
  param_1[0x23b] = &PTR_FUN_1014a7108;
  param_1[0x252] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x255);
  FUN_10064e2bc(param_1 + 0x23b);
  FUN_10064e2bc(param_1 + 0x224);
  FUN_10003bec8(param_1 + 0x1d7);
  param_1[0x1b9] = &PTR_FUN_1014a7108;
  param_1[0x1d0] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x1d3);
  FUN_10064e2bc(param_1 + 0x1b9);
  param_1[0x19b] = &PTR_FUN_1014a7108;
  param_1[0x1b2] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x1b5);
  FUN_10064e2bc(param_1 + 0x19b);
  param_1[0x17d] = &PTR_FUN_1014a7108;
  param_1[0x194] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x197);
  FUN_10064e2bc(param_1 + 0x17d);
  thunk_FUN_100651068(param_1 + 0x157);
  param_1[0x139] = &PTR_FUN_1014a7108;
  param_1[0x150] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x153);
  FUN_10064e2bc(param_1 + 0x139);
  lVar1 = 0x898;
  do {
    thunk_FUN_100651068((long)param_1 + lVar1);
    lVar1 = lVar1 + -0x130;
  } while (lVar1 != 0x2a8);
  thunk_FUN_100651068(param_1 + 0x55);
  thunk_FUN_100651068(param_1 + 0x2f);
  param_1[0x11] = &PTR_FUN_1014a7108;
  param_1[0x28] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x2b);
  FUN_10064e2bc(param_1 + 0x11);
  FUN_10064221c(param_1);
  return;
}




void FUN_10023409c(long param_1,undefined8 param_2)

{
  *(char *)(param_1 + 0x35339) = (char)param_2;
  FUN_100530adc(param_1 + 0x298,0,param_2);
  *(uint *)(param_1 + 0x31c) =
       *(uint *)(param_1 + 0x31c) & 0xffffffef | (uint)*(byte *)(param_1 + 0x35339) << 4;
  return;
}




void thunk_FUN_100236284(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [32];
  
  iVar1 = FUN_100131220();
  if (iVar1 != 0) {
    uVar2 = FUN_100644a94("UI::EVENT_EDIT_GUILD_NAME");
    FUN_100644aec(auStack_40,uVar2,param_1);
    FUN_100644c34(param_1,auStack_40,1);
  }
  return;
}




void thunk_FUN_1002362dc(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [32];
  
  iVar1 = FUN_100131220();
  if (iVar1 != 0) {
    uVar2 = FUN_100644a94("UI::EVENT_EDIT_GUILD_TAG");
    FUN_100644aec(auStack_40,uVar2,param_1);
    FUN_100644c34(param_1,auStack_40,1);
  }
  return;
}




void FUN_1002340f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_100236874(param_1,param_4);
  return;
}




void thunk_FUN_1002365d8(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_148 [8];
  void *pvStack_140;
  undefined1 auStack_138 [8];
  void *pvStack_130;
  void *pvStack_128;
  void *pvStack_120;
  undefined7 uStack_118;
  char cStack_111;
  char cStack_101;
  undefined4 uStack_100;
  undefined8 uStack_fc;
  undefined **ppuStack_f0;
  undefined1 auStack_e8 [40];
  long lStack_c0;
  undefined8 uStack_a0;
  void *pvStack_98;
  void *pvStack_90;
  char cStack_79;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_48;
  
  thunk_FUN_1001cd434(&ppuStack_f0);
  uVar2 = FUN_1004e0150("MENU_PROFILE_GUILD_OVERVIEW_INFO_TITLE",0);
  thunk_FUN_1004e439c(&pvStack_128,uVar2);
  FUN_10003330c(&uStack_118,&DAT_101d91198);
  uStack_100 = 0;
  uStack_fc = 0x41a00000;
  FUN_10003c048(auStack_e8,&pvStack_128);
  if (cStack_101 < '\0') {
    operator_delete((void *)CONCAT17(cStack_111,uStack_118));
  }
  if (pvStack_120 != (void *)0x0) {
    operator_delete__(pvStack_120);
  }
  uVar2 = FUN_1004e0150("MENU_PROFILE_GUILD_OVERVIEW_INFO_SEASON",0);
  thunk_FUN_1004e439c(&pvStack_128,uVar2);
  FUN_10003330c(&uStack_118,&DAT_101d91198);
  uStack_100 = 1;
  uStack_fc = 0x41a00000;
  FUN_10003c048(auStack_e8,&pvStack_128);
  if (cStack_101 < '\0') {
    operator_delete((void *)CONCAT17(cStack_111,uStack_118));
  }
  if (pvStack_120 != (void *)0x0) {
    operator_delete__(pvStack_120);
  }
  uVar2 = FUN_1004e0150("MENU_PROFILE_GUILD_OVERVIEW_INFO_LEVELING",0);
  thunk_FUN_1004e439c(auStack_138,uVar2);
  FUN_1004e313c(auStack_148);
  FUN_1004e38ac(auStack_148,"%d");
  FUN_1004e3120(&pvStack_128,"[MAX_GUILD_MEMBERS]");
  FUN_1004e3bc4(auStack_138,0,&pvStack_128,auStack_148);
  if (pvStack_120 != (void *)0x0) {
    operator_delete__(pvStack_120);
  }
  thunk_FUN_1004e439c(&pvStack_128,auStack_138);
  FUN_10003330c(&uStack_118,&DAT_101d91198);
  uStack_100 = 1;
  uStack_fc = 0x41a00000;
  FUN_10003c048(auStack_e8,&pvStack_128);
  if (cStack_101 < '\0') {
    operator_delete((void *)CONCAT17(cStack_111,uStack_118));
  }
  if (pvStack_120 != (void *)0x0) {
    operator_delete__(pvStack_120);
  }
  lStack_c0 = param_1 + 0x2bd8;
  uStack_48 = 3;
  uStack_60 = 0x3f19999a;
  iVar1 = FUN_100126c88();
  uStack_5c = 0x44548000;
  if (iVar1 == 0) {
    uStack_5c = 0x442f0000;
  }
  uVar2 = FUN_10002f320();
  FUN_10001549c(&pvStack_128,"guildInfo");
  FUN_100030e74(uVar2,&pvStack_128,&ppuStack_f0);
  if (cStack_111 < '\0') {
    operator_delete(pvStack_128);
  }
  if (pvStack_140 != (void *)0x0) {
    operator_delete__(pvStack_140);
  }
  if (pvStack_130 != (void *)0x0) {
    operator_delete__(pvStack_130);
  }
  ppuStack_f0 = &PTR_FUN_1014666e0;
  if (cStack_79 < '\0') {
    operator_delete(pvStack_90);
  }
  if (pvStack_98 != (void *)0x0) {
    operator_delete__(pvStack_98);
    uStack_a0 = 0;
    pvStack_98 = (void *)0x0;
  }
  FUN_10003c1ec(auStack_e8,1);
  return;
}




void FUN_1002340fc(float param_1,long param_2)

{
  bool bVar1;
  
  bVar1 = false;
  if ((*(float *)(param_2 + 0xd0) == param_1) &&
     (bVar1 = false, !NAN(*(float *)(param_2 + 0xd4)) && !NAN(param_1))) {
    bVar1 = *(float *)(param_2 + 0xd4) == param_1;
  }
  if (!bVar1) {
    *(float *)(param_2 + 0xd0) = param_1;
    *(float *)(param_2 + 0xd4) = param_1;
    FUN_1000200a0(param_2 + 0x88);
  }
  bVar1 = false;
  if ((*(float *)(param_2 + 0x480) == param_1) &&
     (bVar1 = false, !NAN(*(float *)(param_2 + 0x484)) && !NAN(param_1))) {
    bVar1 = *(float *)(param_2 + 0x484) == param_1;
  }
  if (!bVar1) {
    *(float *)(param_2 + 0x480) = param_1;
    *(float *)(param_2 + 0x484) = param_1;
    FUN_1000200a0(param_2 + 0x438);
    return;
  }
  return;
}




void thunk_FUN_100236d08(long param_1)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  void *apvStack_38 [2];
  char cStack_21;
  
  iVar2 = FUN_100237f5c();
  if (iVar2 != 0) {
    FUN_100143c38(FUN_100238170,FUN_1002381f4);
    uVar3 = FUN_10002f320();
    FUN_10001549c(apvStack_38,"guildChest");
    if ((char)*(byte *)(param_1 + 0x5427) < '\0') {
      uVar4 = *(ulong *)(param_1 + 0x5418);
    }
    else {
      uVar4 = (ulong)*(byte *)(param_1 + 0x5427);
    }
    lVar1 = param_1 + 0x54c0;
    if (uVar4 != 0) {
      lVar1 = param_1 + 0x5410;
    }
    FUN_1000315c4(uVar3,apvStack_38,lVar1);
    if (cStack_21 < '\0') {
      operator_delete(apvStack_38[0]);
    }
  }
  return;
}




void thunk_FUN_100236dac(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  void *pvStack_128;
  void *pvStack_120;
  undefined7 uStack_118;
  char cStack_111;
  char cStack_101;
  undefined4 uStack_100;
  undefined8 uStack_fc;
  undefined **ppuStack_f0;
  undefined1 auStack_e8 [40];
  long lStack_c0;
  undefined8 uStack_a0;
  void *pvStack_98;
  void *pvStack_90;
  char cStack_79;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_48;
  
  thunk_FUN_1001cd434(&ppuStack_f0);
  uVar2 = FUN_1004e0150("MENU_PROFILE_GUILD_OVERVIEW_REWARD_CHEST_TOOLTIP_TITLE",0);
  thunk_FUN_1004e439c(&pvStack_128,uVar2);
  FUN_10003330c(&uStack_118,&DAT_101d91198);
  uStack_100 = 0;
  uStack_fc = 0x41a00000;
  FUN_10003c048(auStack_e8,&pvStack_128);
  if (cStack_101 < '\0') {
    operator_delete((void *)CONCAT17(cStack_111,uStack_118));
  }
  if (pvStack_120 != (void *)0x0) {
    operator_delete__(pvStack_120);
  }
  uVar2 = FUN_1004e0150("MENU_PROFILE_GUILD_OVERVIEW_REWARD_CHEST_TOOLTIP",0);
  thunk_FUN_1004e439c(&pvStack_128,uVar2);
  FUN_10003330c(&uStack_118,&DAT_101d91198);
  uStack_100 = 1;
  uStack_fc = 0x41a00000;
  FUN_10003c048(auStack_e8,&pvStack_128);
  if (cStack_101 < '\0') {
    operator_delete((void *)CONCAT17(cStack_111,uStack_118));
  }
  if (pvStack_120 != (void *)0x0) {
    operator_delete__(pvStack_120);
  }
  lStack_c0 = param_1 + 0x5500;
  uStack_48 = 3;
  uStack_60 = 0x3f800000;
  iVar1 = FUN_100126c88();
  uStack_5c = 0x449c4000;
  if (iVar1 == 0) {
    uStack_5c = 0x446d8000;
  }
  uVar2 = FUN_10002f320();
  FUN_10001549c(&pvStack_128,"guildChestInfo");
  FUN_100030e74(uVar2,&pvStack_128,&ppuStack_f0);
  if (cStack_111 < '\0') {
    operator_delete(pvStack_128);
  }
  ppuStack_f0 = &PTR_FUN_1014666e0;
  if (cStack_79 < '\0') {
    operator_delete(pvStack_90);
  }
  if (pvStack_98 != (void *)0x0) {
    operator_delete__(pvStack_98);
    uStack_a0 = 0;
    pvStack_98 = (void *)0x0;
  }
  FUN_10003c1ec(auStack_e8,1);
  return;
}




void thunk_FUN_100236d08(long param_1)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  void *apvStack_38 [2];
  char cStack_21;
  
  iVar2 = FUN_100237f5c();
  if (iVar2 != 0) {
    FUN_100143c38(FUN_100238170,FUN_1002381f4);
    uVar3 = FUN_10002f320();
    FUN_10001549c(apvStack_38,"guildChest");
    if ((char)*(byte *)(param_1 + 0x5427) < '\0') {
      uVar4 = *(ulong *)(param_1 + 0x5418);
    }
    else {
      uVar4 = (ulong)*(byte *)(param_1 + 0x5427);
    }
    lVar1 = param_1 + 0x54c0;
    if (uVar4 != 0) {
      lVar1 = param_1 + 0x5410;
    }
    FUN_1000315c4(uVar3,apvStack_38,lVar1);
    if (cStack_21 < '\0') {
      operator_delete(apvStack_38[0]);
    }
  }
  return;
}




void thunk_FUN_100236334(long param_1)

{
  undefined8 uVar1;
  
  if (*(int *)(param_1 + 0x35308) == 1) {
    uVar1 = FUN_10015d3ec();
    FUN_100167138(uVar1,param_1 + 0x352f0);
    FUN_100104d30();
  }
  else if (*(int *)(param_1 + 0x35308) == 0) {
    uVar1 = FUN_10015d3ec();
    FUN_100167404(uVar1,param_1 + 0x352f0);
    if (*(char *)(param_1 + 0x3533b) == '\0') {
      FUN_100104e54();
    }
    else {
      FUN_100104d04();
    }
  }
  FUN_100192d64(param_1 + 0x9a90,0,0);
  return;
}




void FUN_100234180(long param_1)

{
  FUN_100221320(param_1 + 0x176a0);
  FUN_1004e0150("MENU_GUILD_EDIT_SETTINGS_FORM_PANEL_TITLE",0);
  FUN_100221438();
  return;
}




void FUN_1002341b0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_10015d3ec();
  FUN_10016727c(uVar1,param_1 + 0x352f0);
  FUN_100192d64(param_1 + 0x9a90,0,0);
  return;
}




void FUN_1002341f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1002363c0(param_1,param_4);
  return;
}




void FUN_1002341f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_10023659c(param_1,param_4);
  return;
}




void FUN_100234200(long param_1)

{
  FUN_100221380(param_1 + 0x176a0);
  FUN_100143bd4(param_1 + 0x34d98,FUN_10023812c,FUN_10023816c);
  return;
}




void thunk_FUN_100236f6c(void)

{
  FUN_100236f6c();
  return;
}




void FUN_100234250(long param_1)

{
  int iVar1;
  
  iVar1 = FUN_1004eef24();
  if (iVar1 != 0) {
    *(undefined1 *)(param_1 + 0x35338) = 0;
  }
  return;
}




void FUN_100234280(long param_1)

{
  int iVar1;
  
  iVar1 = FUN_1004eef24();
  if (iVar1 != 0) {
    *(undefined1 *)(param_1 + 0x35258) = 0;
  }
  return;
}




void FUN_1002342b0(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_1002342b0_101477520;
  param_1[0x19] = &PTR_FUN_1014776a0;
  param_1[0x1c] = &PTR_FUN_1014776c8;
  FUN_100221380(param_1 + 0x2ed4);
  thunk_FUN_10001653c(param_1 + 0x6a62);
  if (*(char *)((long)param_1 + 0x35307) < '\0') {
    operator_delete((void *)param_1[0x6a5e]);
  }
  thunk_FUN_10022b2fc(param_1 + 0x69e2);
  FUN_10064230c(param_1 + 0x69d1);
  FUN_1001de800(param_1 + 0x2ed4);
  FUN_10019427c(param_1 + 0x1352);
  thunk_FUN_100651068(param_1 + 0x132c);
  thunk_FUN_100651068(param_1 + 0x1306);
  thunk_FUN_100651068(param_1 + 0x12e0);
  FUN_10064e2bc(param_1 + 0x12c7);
  FUN_10003bd40(param_1 + 0x1010);
  thunk_FUN_100651068(param_1 + 0xfea);
  param_1[0xb5e] = &PTR_FUN_10145f168;
  param_1[0xfcb] = &PTR_FUN_1014a7108;
  param_1[0xfe2] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xfe5);
  FUN_10064e2bc(param_1 + 0xfcb);
  param_1[0xfad] = &PTR_FUN_1014a7108;
  param_1[0xfc4] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xfc7);
  FUN_10064e2bc(param_1 + 0xfad);
  thunk_FUN_100651068(param_1 + 0xf87);
  param_1[0xf69] = &PTR_FUN_1014a7108;
  param_1[0xf80] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xf83);
  FUN_10064e2bc(param_1 + 0xf69);
  FUN_10064221c(param_1 + 0xf58);
  param_1[0xf3a] = &PTR_FUN_1014a7108;
  param_1[0xf51] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xf54);
  FUN_10064e2bc(param_1 + 0xf3a);
  param_1[0xb5e] = &PTR_FUN_10145efd0;
  FUN_10064e2bc(param_1 + 0xf04);
  FUN_10064221c(param_1 + 0xef3);
  FUN_10064e2bc(param_1 + 0xebf);
  FUN_10064221c(param_1 + 0xeae);
  thunk_FUN_100651068(param_1 + 0xe88);
  thunk_FUN_100651068(param_1 + 0xe62);
  param_1[0xe44] = &PTR_FUN_1014a7108;
  param_1[0xe5b] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xe5e);
  FUN_10064e2bc(param_1 + 0xe44);
  param_1[0xe26] = &PTR_FUN_1014a7108;
  param_1[0xe3d] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xe40);
  FUN_10064e2bc(param_1 + 0xe26);
  FUN_10064221c(param_1 + 0xe15);
  FUN_10003bd40(param_1 + 0xb5e);
  param_1[0xaa0] = &PTR_FUN_10145f300;
  param_1[0xb3a] = &PTR_FUN_1014a7108;
  param_1[0xb51] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xb54);
  FUN_10064e2bc(param_1 + 0xb3a);
  param_1[0xb1c] = &PTR_FUN_1014a7108;
  param_1[0xb33] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xb36);
  FUN_10064e2bc(param_1 + 0xb1c);
  param_1[0xafe] = &PTR_FUN_1014a7108;
  param_1[0xb15] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xb18);
  FUN_10064e2bc(param_1 + 0xafe);
  FUN_10064221c(param_1 + 0xaed);
  FUN_10003bec8(param_1 + 0xaa0);
  FUN_1001afa60(param_1 + 0x961);
  thunk_FUN_100651068(param_1 + 0x93b);
  thunk_FUN_10064e2bc(param_1 + 0x924);
  thunk_FUN_100651068(param_1 + 0x8fe);
  param_1[0x8e0] = &PTR_FUN_1014a7108;
  param_1[0x8f7] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x8fa);
  FUN_10064e2bc(param_1 + 0x8e0);
  FUN_100196fa4(param_1 + 0x67d);
  thunk_FUN_100651068(param_1 + 0x657);
  param_1[0x639] = &PTR_FUN_1014a7108;
  param_1[0x650] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x653);
  FUN_10064e2bc(param_1 + 0x639);
  param_1[0x57b] = &PTR_FUN_10145f300;
  param_1[0x615] = &PTR_FUN_1014a7108;
  param_1[0x62c] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x62f);
  FUN_10064e2bc(param_1 + 0x615);
  param_1[0x5f7] = &PTR_FUN_1014a7108;
  param_1[0x60e] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x611);
  FUN_10064e2bc(param_1 + 0x5f7);
  param_1[0x5d9] = &PTR_FUN_1014a7108;
  param_1[0x5f0] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x5f3);
  FUN_10064e2bc(param_1 + 0x5d9);
  FUN_10064221c(param_1 + 0x5c8);
  FUN_10003bec8(param_1 + 0x57b);
  param_1[0x4ee] = &PTR_FUN_1014776f8;
  thunk_FUN_1001a7dd8(param_1 + 0x505);
  FUN_10064e2bc(param_1 + 0x4ee);
  thunk_FUN_100651068(param_1 + 0x4c8);
  thunk_FUN_1001a7dd8(param_1 + 0x452);
  thunk_FUN_10064e2bc(param_1 + 0x43b);
  param_1[0x37d] = &PTR_FUN_10145f300;
  param_1[0x417] = &PTR_FUN_1014a7108;
  param_1[0x42e] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x431);
  FUN_10064e2bc(param_1 + 0x417);
  param_1[0x3f9] = &PTR_FUN_1014a7108;
  param_1[0x410] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x413);
  FUN_10064e2bc(param_1 + 0x3f9);
  param_1[0x3db] = &PTR_FUN_1014a7108;
  param_1[0x3f2] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x3f5);
  FUN_10064e2bc(param_1 + 0x3db);
  FUN_10064221c(param_1 + 0x3ca);
  FUN_10003bec8(param_1 + 0x37d);
  param_1[0x2bf] = &PTR_FUN_10145f300;
  param_1[0x359] = &PTR_FUN_1014a7108;
  param_1[0x370] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x373);
  FUN_10064e2bc(param_1 + 0x359);
  param_1[0x33b] = &PTR_FUN_1014a7108;
  param_1[0x352] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x355);
  FUN_10064e2bc(param_1 + 0x33b);
  param_1[0x31d] = &PTR_FUN_1014a7108;
  param_1[0x334] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x337);
  FUN_10064e2bc(param_1 + 0x31d);
  FUN_10064221c(param_1 + 0x30c);
  FUN_10003bec8(param_1 + 0x2bf);
  thunk_FUN_100651068(param_1 + 0x299);
  param_1[0x27b] = &PTR_FUN_1014a7108;
  param_1[0x292] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x295);
  FUN_10064e2bc(param_1 + 0x27b);
  param_1[0xfa] = &PTR_FUN_101460ab8;
  param_1[0x25a] = &PTR_FUN_1014a7108;
  param_1[0x271] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x274);
  FUN_10064e2bc(param_1 + 0x25a);
  param_1[0x23c] = &PTR_FUN_1014a7108;
  param_1[0x253] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x256);
  FUN_10064e2bc(param_1 + 0x23c);
  FUN_100191808(param_1 + 0x1d1);
  FUN_100191808(param_1 + 0x166);
  thunk_FUN_100651068(param_1 + 0x140);
  param_1[0x122] = &PTR_FUN_1014a7108;
  param_1[0x139] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x13c);
  FUN_10064e2bc(param_1 + 0x122);
  FUN_10064221c(param_1 + 0x111);
  FUN_10064e2bc(param_1 + 0xfa);
  thunk_FUN_100530784(param_1 + 0x53);
  FUN_10064e2bc(param_1 + 0x1f);
  FUN_1004f0a9c(param_1 + 0x1c);
  FUN_1001e1bb0(param_1 + 0x19);
  FUN_10064e2bc(param_1);
  return;
}




void FUN_100234958(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1014776f8;
  thunk_FUN_1001a7dd8(param_1 + 0x17);
  FUN_10064e2bc(param_1);
  return;
}




void thunk_FUN_1002342b0(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_1002342b0_101477520;
  param_1[0x19] = &PTR_FUN_1014776a0;
  param_1[0x1c] = &PTR_FUN_1014776c8;
  FUN_100221380(param_1 + 0x2ed4);
  thunk_FUN_10001653c(param_1 + 0x6a62);
  if (*(char *)((long)param_1 + 0x35307) < '\0') {
    operator_delete((void *)param_1[0x6a5e]);
  }
  thunk_FUN_10022b2fc(param_1 + 0x69e2);
  FUN_10064230c(param_1 + 0x69d1);
  FUN_1001de800(param_1 + 0x2ed4);
  FUN_10019427c(param_1 + 0x1352);
  thunk_FUN_100651068(param_1 + 0x132c);
  thunk_FUN_100651068(param_1 + 0x1306);
  thunk_FUN_100651068(param_1 + 0x12e0);
  FUN_10064e2bc(param_1 + 0x12c7);
  FUN_10003bd40(param_1 + 0x1010);
  thunk_FUN_100651068(param_1 + 0xfea);
  param_1[0xb5e] = &PTR_FUN_10145f168;
  param_1[0xfcb] = &PTR_FUN_1014a7108;
  param_1[0xfe2] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xfe5);
  FUN_10064e2bc(param_1 + 0xfcb);
  param_1[0xfad] = &PTR_FUN_1014a7108;
  param_1[0xfc4] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xfc7);
  FUN_10064e2bc(param_1 + 0xfad);
  thunk_FUN_100651068(param_1 + 0xf87);
  param_1[0xf69] = &PTR_FUN_1014a7108;
  param_1[0xf80] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xf83);
  FUN_10064e2bc(param_1 + 0xf69);
  FUN_10064221c(param_1 + 0xf58);
  param_1[0xf3a] = &PTR_FUN_1014a7108;
  param_1[0xf51] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xf54);
  FUN_10064e2bc(param_1 + 0xf3a);
  param_1[0xb5e] = &PTR_FUN_10145efd0;
  FUN_10064e2bc(param_1 + 0xf04);
  FUN_10064221c(param_1 + 0xef3);
  FUN_10064e2bc(param_1 + 0xebf);
  FUN_10064221c(param_1 + 0xeae);
  thunk_FUN_100651068(param_1 + 0xe88);
  thunk_FUN_100651068(param_1 + 0xe62);
  param_1[0xe44] = &PTR_FUN_1014a7108;
  param_1[0xe5b] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xe5e);
  FUN_10064e2bc(param_1 + 0xe44);
  param_1[0xe26] = &PTR_FUN_1014a7108;
  param_1[0xe3d] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xe40);
  FUN_10064e2bc(param_1 + 0xe26);
  FUN_10064221c(param_1 + 0xe15);
  FUN_10003bd40(param_1 + 0xb5e);
  param_1[0xaa0] = &PTR_FUN_10145f300;
  param_1[0xb3a] = &PTR_FUN_1014a7108;
  param_1[0xb51] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xb54);
  FUN_10064e2bc(param_1 + 0xb3a);
  param_1[0xb1c] = &PTR_FUN_1014a7108;
  param_1[0xb33] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xb36);
  FUN_10064e2bc(param_1 + 0xb1c);
  param_1[0xafe] = &PTR_FUN_1014a7108;
  param_1[0xb15] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xb18);
  FUN_10064e2bc(param_1 + 0xafe);
  FUN_10064221c(param_1 + 0xaed);
  FUN_10003bec8(param_1 + 0xaa0);
  FUN_1001afa60(param_1 + 0x961);
  thunk_FUN_100651068(param_1 + 0x93b);
  thunk_FUN_10064e2bc(param_1 + 0x924);
  thunk_FUN_100651068(param_1 + 0x8fe);
  param_1[0x8e0] = &PTR_FUN_1014a7108;
  param_1[0x8f7] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x8fa);
  FUN_10064e2bc(param_1 + 0x8e0);
  FUN_100196fa4(param_1 + 0x67d);
  thunk_FUN_100651068(param_1 + 0x657);
  param_1[0x639] = &PTR_FUN_1014a7108;
  param_1[0x650] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x653);
  FUN_10064e2bc(param_1 + 0x639);
  param_1[0x57b] = &PTR_FUN_10145f300;
  param_1[0x615] = &PTR_FUN_1014a7108;
  param_1[0x62c] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x62f);
  FUN_10064e2bc(param_1 + 0x615);
  param_1[0x5f7] = &PTR_FUN_1014a7108;
  param_1[0x60e] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x611);
  FUN_10064e2bc(param_1 + 0x5f7);
  param_1[0x5d9] = &PTR_FUN_1014a7108;
  param_1[0x5f0] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x5f3);
  FUN_10064e2bc(param_1 + 0x5d9);
  FUN_10064221c(param_1 + 0x5c8);
  FUN_10003bec8(param_1 + 0x57b);
  param_1[0x4ee] = &PTR_FUN_1014776f8;
  thunk_FUN_1001a7dd8(param_1 + 0x505);
  FUN_10064e2bc(param_1 + 0x4ee);
  thunk_FUN_100651068(param_1 + 0x4c8);
  thunk_FUN_1001a7dd8(param_1 + 0x452);
  thunk_FUN_10064e2bc(param_1 + 0x43b);
  param_1[0x37d] = &PTR_FUN_10145f300;
  param_1[0x417] = &PTR_FUN_1014a7108;
  param_1[0x42e] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x431);
  FUN_10064e2bc(param_1 + 0x417);
  param_1[0x3f9] = &PTR_FUN_1014a7108;
  param_1[0x410] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x413);
  FUN_10064e2bc(param_1 + 0x3f9);
  param_1[0x3db] = &PTR_FUN_1014a7108;
  param_1[0x3f2] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x3f5);
  FUN_10064e2bc(param_1 + 0x3db);
  FUN_10064221c(param_1 + 0x3ca);
  FUN_10003bec8(param_1 + 0x37d);
  param_1[0x2bf] = &PTR_FUN_10145f300;
  param_1[0x359] = &PTR_FUN_1014a7108;
  param_1[0x370] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x373);
  FUN_10064e2bc(param_1 + 0x359);
  param_1[0x33b] = &PTR_FUN_1014a7108;
  param_1[0x352] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x355);
  FUN_10064e2bc(param_1 + 0x33b);
  param_1[0x31d] = &PTR_FUN_1014a7108;
  param_1[0x334] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x337);
  FUN_10064e2bc(param_1 + 0x31d);
  FUN_10064221c(param_1 + 0x30c);
  FUN_10003bec8(param_1 + 0x2bf);
  thunk_FUN_100651068(param_1 + 0x299);
  param_1[0x27b] = &PTR_FUN_1014a7108;
  param_1[0x292] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x295);
  FUN_10064e2bc(param_1 + 0x27b);
  param_1[0xfa] = &PTR_FUN_101460ab8;
  param_1[0x25a] = &PTR_FUN_1014a7108;
  param_1[0x271] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x274);
  FUN_10064e2bc(param_1 + 0x25a);
  param_1[0x23c] = &PTR_FUN_1014a7108;
  param_1[0x253] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x256);
  FUN_10064e2bc(param_1 + 0x23c);
  FUN_100191808(param_1 + 0x1d1);
  FUN_100191808(param_1 + 0x166);
  thunk_FUN_100651068(param_1 + 0x140);
  param_1[0x122] = &PTR_FUN_1014a7108;
  param_1[0x139] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x13c);
  FUN_10064e2bc(param_1 + 0x122);
  FUN_10064221c(param_1 + 0x111);
  FUN_10064e2bc(param_1 + 0xfa);
  thunk_FUN_100530784(param_1 + 0x53);
  FUN_10064e2bc(param_1 + 0x1f);
  FUN_1004f0a9c(param_1 + 0x1c);
  FUN_1001e1bb0(param_1 + 0x19);
  FUN_10064e2bc(param_1);
  return;
}




void FUN_10023498c(long param_1)

{
  FUN_1002342b0(param_1 + -200);
  return;
}




void FUN_100234994(long param_1)

{
  FUN_1002342b0(param_1 + -0xe0);
  return;
}




void FUN_10023499c(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1002342b0();
  operator_delete(pvVar1);
  return;
}




void FUN_1002349b0(long param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1002342b0(param_1 + -200);
  operator_delete(pvVar1);
  return;
}




void FUN_1002349c8(long param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1002342b0(param_1 + -0xe0);
  operator_delete(pvVar1);
  return;
}




void FUN_1002349e0(void)

{
  return;
}




void FUN_1002349e4(long param_1,uint param_2)

{
  undefined8 *puVar1;
  size_t sVar2;
  size_t sVar3;
  undefined8 *puVar4;
  byte bVar5;
  byte bVar6;
  bool bVar7;
  int iVar8;
  undefined8 uVar9;
  long lVar10;
  uint uVar11;
  ulong uVar12;
  uint uVar13;
  byte *pbVar14;
  byte *pbVar15;
  
  bVar7 = false;
  if ((*(float *)(param_1 + 0x2dc) == 0.0) && (bVar7 = false, !NAN(*(float *)(param_1 + 0x2d8)))) {
    bVar7 = *(float *)(param_1 + 0x2d8) == 0.0;
  }
  if (!bVar7) {
    *(undefined8 *)(param_1 + 0x2d8) = 0;
    FUN_1000200a0(param_1 + 0x298);
  }
  FUN_100642324(param_1 + 0x2290);
  if (param_2 == 0) {
    FUN_10022b508(param_1 + 0x34f10,0);
    uVar11 = 0;
    uVar13 = 0;
    goto LAB_100234c70;
  }
  puVar1 = (undefined8 *)(param_1 + 0x352f0);
  bVar5 = *(byte *)(param_1 + 0x35307);
  uVar12 = (ulong)bVar5;
  sVar2 = *(size_t *)(param_1 + 0x352f8);
  if (-1 < (char)bVar5) {
    sVar2 = uVar12;
  }
  sVar3 = DAT_101d911a0;
  if (-1 < (char)DAT_101d911a8._7_1_) {
    sVar3 = (ulong)DAT_101d911a8._7_1_;
  }
  if (sVar2 == sVar3) {
    puVar4 = (void *)*puVar1;
    if (-1 < (char)bVar5) {
      puVar4 = puVar1;
    }
    pbVar15 = DAT_101d91198;
    if (-1 < (char)DAT_101d911a8._7_1_) {
      pbVar15 = (byte *)&DAT_101d91198;
    }
    if ((char)bVar5 < '\0') {
      if ((sVar2 != 0) && (iVar8 = _memcmp(puVar4,pbVar15,sVar2), iVar8 != 0)) goto LAB_100234b10;
    }
    else if (sVar2 != 0) {
      if ((uint)*pbVar15 == ((uint)(void *)*puVar1 & 0xff)) {
        pbVar14 = (byte *)(param_1 + 0x352f1);
        do {
          uVar12 = uVar12 - 1;
          pbVar15 = pbVar15 + 1;
          if (uVar12 == 0) goto LAB_100234b28;
          bVar5 = *pbVar14;
          pbVar14 = pbVar14 + 1;
        } while (bVar5 == *pbVar15);
      }
      goto LAB_100234b10;
    }
  }
  else {
LAB_100234b10:
    iVar8 = FUN_10015d3f8();
    if (iVar8 != 0) {
      uVar9 = FUN_10015d3ec();
      FUN_1001634c4(uVar9,puVar1,0);
    }
  }
LAB_100234b28:
  uVar9 = FUN_100143bc4();
  FUN_100234ccc(param_1,uVar9);
  if (*(char *)(param_1 + 0x3533a) == '\0') goto LAB_100234c34;
  lVar10 = FUN_10015d3ec();
  if (((int)*(uint *)(lVar10 + 0x5624) < 0) ||
     (*(int *)(*(long *)(lVar10 + 0x5268) + (ulong)*(uint *)(lVar10 + 0x5624) * 0x108 + 0x50) != 4))
  {
LAB_100234c18:
    bVar7 = false;
  }
  else {
    lVar10 = FUN_10015d3ec();
    bVar5 = *(byte *)(param_1 + 0x35307);
    uVar12 = (ulong)bVar5;
    bVar6 = *(byte *)(lVar10 + 0x548f);
    sVar2 = *(size_t *)(param_1 + 0x352f8);
    if (-1 < (char)bVar5) {
      sVar2 = uVar12;
    }
    sVar3 = *(size_t *)(lVar10 + 0x5480);
    if (-1 < (char)bVar6) {
      sVar3 = (ulong)bVar6;
    }
    if (sVar2 != sVar3) goto LAB_100234c18;
    puVar4 = (undefined8 *)*puVar1;
    if (-1 < (char)bVar5) {
      puVar4 = puVar1;
    }
    pbVar15 = *(byte **)(lVar10 + 0x5478);
    if (-1 < (char)bVar6) {
      pbVar15 = (byte *)(lVar10 + 0x5478);
    }
    if ((char)bVar5 < '\0') {
      if (sVar2 == 0) goto LAB_100234c34;
      iVar8 = _memcmp(puVar4,pbVar15,sVar2);
      bVar7 = iVar8 == 0;
    }
    else if (sVar2 == 0) {
LAB_100234c34:
      bVar7 = true;
    }
    else {
      if ((uint)*pbVar15 != ((uint)(undefined8 *)*puVar1 & 0xff)) goto LAB_100234c18;
      pbVar14 = (byte *)(param_1 + 0x352f1);
      do {
        uVar12 = uVar12 - 1;
        pbVar15 = pbVar15 + 1;
        bVar7 = uVar12 == 0;
        if (uVar12 == 0) break;
        bVar5 = *pbVar14;
        pbVar14 = pbVar14 + 1;
      } while (bVar5 == *pbVar15);
    }
  }
  FUN_100193c20(param_1 + 0x9a90,bVar7);
  FUN_10023523c(param_1);
  FUN_10022b508(param_1 + 0x34f10,1);
  uVar13 = (uint)(0 < *(int *)(param_1 + 0x35330)) << 2;
  uVar11 = 4;
LAB_100234c70:
  *(uint *)(param_1 + 0x2314) = *(uint *)(param_1 + 0x2314) & 0xfffffffb | uVar13;
  *(uint *)(param_1 + 0x4b8c) = *(uint *)(param_1 + 0x4b8c) & 0xfffffffb | uVar11;
  if ((param_2 & 1) != 0) {
    return;
  }
  FUN_1001de098(param_1 + 0x176a0,0);
  return;
}




undefined8 FUN_100234ccc(long param_1,long param_2)

{
  undefined8 *puVar1;
  uint *puVar2;
  size_t sVar3;
  size_t sVar4;
  undefined8 *puVar5;
  char *pcVar6;
  byte bVar7;
  uint uVar8;
  int iVar9;
  long lVar10;
  undefined8 uVar11;
  ulong uVar12;
  uint uVar13;
  byte *pbVar14;
  byte *pbVar15;
  void *local_78;
  void *local_70;
  char local_61;
  undefined1 auStack_60 [8];
  void *local_58;
  undefined1 auStack_50 [8];
  void *local_48;
  
  lVar10 = FUN_10002f320();
  uVar12 = *(ulong *)(lVar10 + 0xe1a0);
  if (-1 < (char)*(byte *)(lVar10 + 0xe1af)) {
    uVar12 = (ulong)*(byte *)(lVar10 + 0xe1af);
  }
  if ((uVar12 == 10) &&
     (uVar11 = std::string::compare(lVar10 + 0xe198,0,(char *)0xffffffffffffffff,0x1013e7341),
     (int)uVar11 == 0)) {
    return uVar11;
  }
  puVar2 = (uint *)(param_1 + 0x5b74);
  if (*(char *)(param_1 + 0x3533a) == '\0') {
    uVar11 = FUN_1004e0150("MENU_PROFILE_GUILD_OVERVIEW_MEMBERS_ONLY",0);
    FUN_1006513c0(param_1 + 0x7f50,uVar11);
    *(uint *)(param_1 + 0x7fd4) = *(uint *)(param_1 + 0x7fd4) | 4;
  }
  else {
    if ((*(int *)(param_2 + 8) == 0) || (*(uint *)(param_2 + 0x10) <= *(uint *)(param_2 + 0xc))) {
      if (*(uint *)(param_2 + 0xc) < *(uint *)(param_2 + 0x10)) {
        uVar11 = FUN_1004e0150("MENU_PROFILE_GUILD_OVERVIEW_NEXT_LEVEL_CHEST",0);
        thunk_FUN_1004e439c(&local_78,uVar11);
        FUN_1004e313c(auStack_50);
        FUN_1004e38ac(auStack_50,"%d");
        FUN_1004e3120(auStack_60,"[LEVEL]");
        FUN_1004e3bc4(&local_78,0,auStack_60,auStack_50);
        if (local_58 != (void *)0x0) {
          operator_delete__(local_58);
        }
        FUN_1006513c0(param_1 + 0x7f50,&local_78);
        *(uint *)(param_1 + 0x7fd4) =
             *(uint *)(param_1 + 0x7fd4) & 0xfffffff8 |
             *(uint *)(param_1 + 0x7fd4) & 3 | (uint)(*(int *)(param_2 + 0x14) != 0) << 2;
        puVar1 = (undefined8 *)(param_2 + 0x38);
        bVar7 = *(byte *)(param_2 + 0x4f);
        uVar12 = (ulong)bVar7;
        sVar3 = *(size_t *)(param_2 + 0x40);
        if (-1 < (char)bVar7) {
          sVar3 = uVar12;
        }
        sVar4 = DAT_101d911a0;
        if (-1 < (char)DAT_101d911a8._7_1_) {
          sVar4 = (ulong)DAT_101d911a8._7_1_;
        }
        if (sVar3 == sVar4) {
          puVar5 = (void *)*puVar1;
          if (-1 < (char)bVar7) {
            puVar5 = puVar1;
          }
          pbVar15 = DAT_101d91198;
          if (-1 < (char)DAT_101d911a8._7_1_) {
            pbVar15 = (byte *)&DAT_101d91198;
          }
          if ((char)bVar7 < '\0') {
            if ((sVar3 != 0) && (iVar9 = _memcmp(puVar5,pbVar15,sVar3), iVar9 != 0))
            goto LAB_100235080;
          }
          else if (sVar3 != 0) {
            if ((uint)*pbVar15 == ((uint)(void *)*puVar1 & 0xff)) {
              pbVar14 = (byte *)(param_2 + 0x39);
              do {
                uVar12 = uVar12 - 1;
                pbVar15 = pbVar15 + 1;
                if (uVar12 == 0) goto LAB_10023509c;
                bVar7 = *pbVar14;
                pbVar14 = pbVar14 + 1;
              } while (bVar7 == *pbVar15);
            }
            goto LAB_100235080;
          }
        }
        else {
LAB_100235080:
          lVar10 = FUN_100331578();
          if (*(char *)(lVar10 + 0x20) != '\0') {
            FUN_1001aed88(param_1 + 0x4b08,puVar1);
          }
        }
LAB_10023509c:
        FUN_1000165f0(param_1 + 0x35310,0);
        goto LAB_1002350b0;
      }
      uVar11 = FUN_1004e0150("MENU_PROFILE_GUILD_OVERVIEW_OPENED_MAX_CHESTS",0);
      thunk_FUN_1004e439c(&local_78,uVar11);
      FUN_1006513c0(param_1 + 0x7f50,&local_78);
      FUN_1000165f0(param_1 + 0x35310,0);
    }
    else {
      FUN_1000165f0(param_1 + 0x35310);
      uVar11 = FUN_1004e0150("MENU_PROFILE_GUILD_OVERVIEW_NUM_CHESTS_AVAILABLE",0);
      thunk_FUN_1004e439c(&local_78,uVar11);
      FUN_1004e313c(auStack_50);
      FUN_1004e38ac(auStack_50,"%d");
      FUN_1004e3120(auStack_60,"[NUM_CHESTS]");
      FUN_1004e3bc4(&local_78,0,auStack_60,auStack_50);
      if (local_58 != (void *)0x0) {
        operator_delete__(local_58);
      }
      FUN_1006513c0(param_1 + 0x7f50,&local_78);
      *(uint *)(param_1 + 0x7fd4) =
           *(uint *)(param_1 + 0x7fd4) & 0xfffffff8 |
           *(uint *)(param_1 + 0x7fd4) & 3 | (uint)(1 < *(uint *)(param_2 + 8)) << 2;
      puVar1 = (undefined8 *)(param_2 + 0x20);
      bVar7 = *(byte *)(param_2 + 0x37);
      uVar12 = (ulong)bVar7;
      sVar3 = *(size_t *)(param_2 + 0x28);
      if (-1 < (char)bVar7) {
        sVar3 = uVar12;
      }
      sVar4 = DAT_101d911a0;
      if (-1 < (char)DAT_101d911a8._7_1_) {
        sVar4 = (ulong)DAT_101d911a8._7_1_;
      }
      if (sVar3 == sVar4) {
        puVar5 = (void *)*puVar1;
        if (-1 < (char)bVar7) {
          puVar5 = puVar1;
        }
        pbVar15 = DAT_101d91198;
        if (-1 < (char)DAT_101d911a8._7_1_) {
          pbVar15 = (byte *)&DAT_101d91198;
        }
        if ((char)bVar7 < '\0') {
          if ((sVar3 != 0) && (iVar9 = _memcmp(puVar5,pbVar15,sVar3), iVar9 != 0))
          goto LAB_100235054;
        }
        else if (sVar3 != 0) {
          if ((uint)*pbVar15 == ((uint)(void *)*puVar1 & 0xff)) {
            pbVar14 = (byte *)(param_2 + 0x21);
            do {
              uVar12 = uVar12 - 1;
              pbVar15 = pbVar15 + 1;
              if (uVar12 == 0) goto LAB_1002350b0;
              bVar7 = *pbVar14;
              pbVar14 = pbVar14 + 1;
            } while (bVar7 == *pbVar15);
          }
          goto LAB_100235054;
        }
      }
      else {
LAB_100235054:
        lVar10 = FUN_100331578();
        if (*(char *)(lVar10 + 0x20) != '\0') {
          FUN_1001aed88(param_1 + 0x4b08,puVar1);
        }
      }
LAB_1002350b0:
      if (local_48 != (void *)0x0) {
        operator_delete__(local_48);
      }
    }
    if (local_70 != (void *)0x0) {
      operator_delete__(local_70);
    }
  }
  uVar8 = FUN_100143c4c();
  iVar9 = FUN_100237f5c();
  lVar10 = param_1 + 0x4b08;
  if (iVar9 == 0) {
    FUN_10001549c(&local_78,"IDLE_CLOSED");
    FUN_1001aeb7c(0x3f333333,lVar10,&local_78);
    if (local_61 < '\0') {
      operator_delete(local_78);
    }
    FUN_1001af9fc(lVar10,0);
    uVar8 = 0;
    *puVar2 = *puVar2 & 0xffffffef;
  }
  else {
    pcVar6 = "IDLE_CLOSED";
    if (uVar8 == 0) {
      pcVar6 = "IDLE_READY";
    }
    FUN_10001549c(&local_78,pcVar6);
    FUN_1001aeb7c(0xbf800000,lVar10,&local_78);
    if (local_61 < '\0') {
      operator_delete(local_78);
    }
    uVar8 = uVar8 ^ 1;
    FUN_1001af9fc(lVar10,uVar8);
  }
  FUN_1001b4c0c(param_1 + 0x5af0,uVar8);
  uVar8 = 0xf2;
  if (((*(byte *)(param_1 + 0x5d54) >> 4 & 1) == 0) &&
     (uVar8 = 0xf2, *(char *)(param_1 + 0x3533a) != '\0')) {
    uVar8 = 0x7f;
  }
  uVar13 = *(uint *)(param_1 + 0x7fd4);
  if (uVar8 != (uVar13 >> 7 & 0xff)) {
    *(uint *)(param_1 + 0x7fd4) = uVar13 & 0xffff8000 | uVar13 & 0x7f | uVar8 << 7;
    FUN_1000200a0(param_1 + 0x7f50);
  }
  if (*(char *)(param_1 + 0x3533a) == '\0') {
    uVar13 = 0;
    uVar8 = *puVar2;
  }
  else {
    if (*(int *)(param_2 + 0x14) == 0) {
      uVar8 = *puVar2;
      if (*(int *)(param_1 + 0x35328) < 1) {
        uVar13 = 0;
        goto LAB_10023520c;
      }
    }
    else {
      uVar8 = *puVar2;
    }
    uVar13 = 4;
  }
LAB_10023520c:
  *puVar2 = uVar13 | uVar8 & 0xfffffffb;
  return 1;
}




void FUN_10023523c(long param_1)

{
  ulong uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  long lVar5;
  undefined8 local_a0;
  undefined4 *local_98;
  int local_8c;
  ulong local_88;
  undefined4 *local_80;
  int local_78 [16];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_101444218;
  FUN_1001a86c8(param_1 + 0x2290,0);
  if (*(int *)(param_1 + 0x35330) < 1) {
    *(uint *)(param_1 + 0x2314) = *(uint *)(param_1 + 0x2314) & 0xfffffffb;
  }
  else {
    *(uint *)(param_1 + 0x2314) = *(uint *)(param_1 + 0x2314) | 4;
    local_88 = 0;
    local_80 = (undefined4 *)0x0;
    local_8c = *(int *)(param_1 + 0x35330) * 2 + -2;
    if (*(char *)(param_1 + 0x35338) == '\0') {
      *(undefined1 *)(param_1 + 0x35338) = 1;
      FUN_1000228fc(&local_88,&local_8c);
      FUN_100102450(local_78,"build://Sounds/UI.assetbundle/guild_banner_%d.mp3");
      FUN_1001e79b8(0x3f800000,local_78,0,0);
      uVar1 = *(ulong *)(param_1 + 0x2bc0);
      if (-1 < (char)*(byte *)(param_1 + 0x2bcf)) {
        uVar1 = (ulong)*(byte *)(param_1 + 0x2bcf);
      }
      if ((uVar1 == 0x11) &&
         (iVar2 = std::string::compare(param_1 + 0x2bb8,0,(char *)0xffffffffffffffff,0x1013e7313),
         iVar2 == 0)) {
        FUN_1001e79b8(0x3f800000,"build://Sounds/UI.assetbundle/guild_activity_on_fire.mp3",0,0);
      }
    }
    local_78[0] = local_8c + 1;
    FUN_1000228fc(&local_88,local_78);
    local_a0 = 0;
    local_98 = (undefined4 *)0x0;
    FUN_100026bb4(&local_a0,local_88 & 0xffffffff);
    if ((int)local_88 == 0) {
      iVar2 = 0;
    }
    else {
      lVar5 = (local_88 & 0xffffffff) << 2;
      puVar3 = local_80;
      puVar4 = local_98;
      do {
        *puVar4 = *puVar3;
        lVar5 = lVar5 + -4;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
        iVar2 = (int)local_88;
      } while (lVar5 != 0);
    }
    local_a0 = CONCAT44(local_a0._4_4_,iVar2);
    FUN_1001a9150(param_1 + 0x2290,&local_a0,0);
    if (local_98 != (undefined4 *)0x0) {
      operator_delete__(local_98);
      local_a0 = 0;
      local_98 = (undefined4 *)0x0;
    }
    if (local_80 != (undefined4 *)0x0) {
      operator_delete__(local_80);
    }
  }
  if (*(long *)PTR____stack_chk_guard_101444218 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}




void FUN_100235414(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_10023523c();
    return;
  }
  return;
}




void FUN_100235420(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100235428. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x150))();
  return;
}




void FUN_10023542c(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100235434. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x150))();
  return;
}




void FUN_100235438(long param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  undefined4 uVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  undefined8 uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined8 local_b8;
  undefined8 local_a8;
  float local_9c;
  float local_98;
  float local_94;
  
  uVar12 = FUN_100126b4c();
  FUN_1001e35ec(param_1,uVar12,&local_94,&local_98,&local_9c);
  iVar10 = FUN_100126c88();
  fVar16 = local_94 - local_9c;
  fVar17 = fVar16 * 0.5;
  lVar2 = param_1 + 0x9a90;
  FUN_10064e47c(fVar16,local_98,lVar2);
  fVar13 = 160.0;
  if (*(float *)(param_1 + 0x13c) != 160.0) {
    *(undefined4 *)(param_1 + 0x13c) = 0x43200000;
    FUN_1000200a0(param_1 + 0xf8);
    fVar13 = *(float *)(param_1 + 0x13c);
  }
  FUN_10064e47c(fVar16,local_98 - fVar13,param_1 + 0xf8);
  lVar3 = param_1 + 0x14c8;
  plVar1 = (long *)(param_1 + 2000);
  fVar13 = (float)FUN_100194c24(plVar1);
  fVar15 = 0.0;
  FUN_10065179c((fVar16 + -80.0) - (fVar13 + fVar13),0,0x3f800000,lVar3);
  FUN_10064259c(lVar3);
  fVar15 = fVar15 * 0.5;
  bVar9 = false;
  if ((*(float *)(param_1 + 0x1508) == fVar17) &&
     (bVar9 = false, !NAN(*(float *)(param_1 + 0x150c)) && !NAN(fVar15))) {
    bVar9 = *(float *)(param_1 + 0x150c) == fVar15;
  }
  if (!bVar9) {
    *(float *)(param_1 + 0x1508) = fVar17;
    *(float *)(param_1 + 0x150c) = fVar15;
    FUN_1000200a0(lVar3);
  }
  local_b8 = &DAT_3f0000003f000000;
  (**(code **)(*(long *)(param_1 + 0x14c8) + 0x28))(lVar3,&local_b8);
  lVar4 = param_1 + 0x15f8;
  fVar13 = 0.75;
  if (iVar10 == 0) {
    fVar13 = 0.5;
  }
  if ((*(float *)(param_1 + 0x1640) != fVar13) || (*(float *)(param_1 + 0x1644) != fVar13)) {
    *(float *)(param_1 + 0x1640) = fVar13;
    *(float *)(param_1 + 0x1644) = fVar13;
    FUN_1000200a0(lVar4);
  }
  fVar18 = *(float *)(param_1 + 0x1508);
  fVar15 = (float)FUN_1006511d0(lVar3);
  fVar14 = (float)FUN_10064259c(lVar4);
  fVar15 = fVar18 + 20.0 + (fVar14 + fVar15) * 0.5;
  fVar14 = *(float *)(param_1 + 0x150c);
  bVar9 = false;
  if ((*(float *)(param_1 + 0x1638) == fVar15) &&
     (bVar9 = false, !NAN(*(float *)(param_1 + 0x163c)) && !NAN(fVar14))) {
    bVar9 = *(float *)(param_1 + 0x163c) == fVar14;
  }
  if (!bVar9) {
    *(float *)(param_1 + 0x1638) = fVar15;
    *(float *)(param_1 + 0x163c) = fVar14;
    FUN_1000200a0(lVar4);
  }
  local_b8 = &DAT_3f0000003f000000;
  (**(code **)(*(long *)(param_1 + 0x15f8) + 0x28))(lVar4,&local_b8);
  fVar15 = *(float *)(param_1 + 0x1508);
  if ((*(float *)(param_1 + 0x1418) != fVar15) ||
     (*(float *)(param_1 + 0x141c) != *(float *)(param_1 + 0x150c))) {
    *(float *)(param_1 + 0x1418) = fVar15;
    *(float *)(param_1 + 0x141c) = *(float *)(param_1 + 0x150c);
    FUN_1000200a0(param_1 + 0x13d8);
    fVar15 = *(float *)(param_1 + 0x1508);
  }
  fVar14 = (float)FUN_10064259c(lVar3);
  fVar18 = (float)FUN_10064e3cc(plVar1);
  fVar15 = fVar15 + (fVar18 + fVar14) * -0.5 + -20.0;
  if ((*(float *)(param_1 + 0x810) != fVar15) ||
     (*(float *)(param_1 + 0x814) != *(float *)(param_1 + 0x150c))) {
    *(float *)(param_1 + 0x810) = fVar15;
    *(float *)(param_1 + 0x814) = *(float *)(param_1 + 0x150c);
    FUN_1000200a0(plVar1);
  }
  local_b8 = &DAT_3f0000003f000000;
  (**(code **)(*plVar1 + 0x28))(plVar1,&local_b8);
  iVar11 = FUN_100131220();
  if (iVar11 != 0) {
    plVar5 = (long *)(param_1 + 0x1be8);
    if ((*(float *)(param_1 + 0x1c30) != fVar13) || (*(float *)(param_1 + 0x1c34) != fVar13)) {
      *(float *)(param_1 + 0x1c30) = fVar13;
      *(float *)(param_1 + 0x1c34) = fVar13;
      FUN_1000200a0(plVar5);
    }
    fVar14 = *(float *)(param_1 + 0x810);
    fVar13 = (float)FUN_100194c24(plVar1);
    fVar15 = (float)FUN_10064259c(plVar5);
    fVar13 = fVar14 + (fVar15 + fVar13) * -0.5 + -20.0;
    if ((*(float *)(param_1 + 0x1c28) != fVar13) ||
       (*(float *)(param_1 + 0x1c2c) != *(float *)(param_1 + 0x814))) {
      *(float *)(param_1 + 0x1c28) = fVar13;
      *(float *)(param_1 + 0x1c2c) = *(float *)(param_1 + 0x814);
      FUN_1000200a0(plVar5);
    }
    local_b8 = &DAT_3f0000003f000000;
    (**(code **)(*plVar5 + 0x28))(plVar5,&local_b8);
  }
  lVar3 = param_1 + 0x2290;
  FUN_10064e47c(local_94,local_98,lVar3);
  if ((*(float *)(param_1 + 0x22d0) != 0.0) || (*(float *)(param_1 + 0x22d4) != 250.0)) {
    *(undefined8 *)(param_1 + 0x22d0) = 0x437a000000000000;
    FUN_1000200a0(lVar3);
  }
  local_b8 = &DAT_3f0000003f000000;
  (**(code **)(*(long *)(param_1 + 0x2290) + 0x28))(lVar3,&local_b8);
  lVar3 = param_1 + 0x32b8;
  fVar13 = 70.0;
  if (*(int *)(param_1 + 0x35330) != 2) {
    fVar13 = 85.0;
  }
  fVar15 = *(float *)(param_1 + 0x32f8);
  if ((fVar15 != 0.0) || (fVar15 = *(float *)(param_1 + 0x32fc), fVar15 != fVar13)) {
    *(undefined4 *)(param_1 + 0x32f8) = 0;
    *(float *)(param_1 + 0x32fc) = fVar13;
    FUN_1000200a0(lVar3);
  }
  local_b8 = &DAT_3f0000003f000000;
  (**(code **)(*(long *)(param_1 + 0x32b8) + 0x28))(lVar3,&local_b8);
  fVar13 = (float)FUN_10064259c(lVar3);
  FUN_10064259c(lVar3);
  FUN_10064e47c(fVar13 + fVar13,fVar15 * 1.95,param_1 + 0x31c8);
  if ((*(float *)(param_1 + 0x3208) != *(float *)(param_1 + 0x32f8)) ||
     (*(float *)(param_1 + 0x320c) != *(float *)(param_1 + 0x32fc))) {
    *(float *)(param_1 + 0x3208) = *(float *)(param_1 + 0x32f8);
    *(float *)(param_1 + 0x320c) = *(float *)(param_1 + 0x32fc);
    FUN_1000200a0(param_1 + 0x31c8);
  }
  fVar13 = 10.0;
  if ((9 < *(int *)(param_1 + 0x35334) - 0x5aU) &&
     (fVar13 = -20.0, *(int *)(param_1 + 0x35334) % 10 != 1)) {
    fVar13 = 0.0;
  }
  lVar3 = param_1 + 0x2640;
  fVar15 = 175.0;
  if (*(int *)(param_1 + 0x35330) != 2) {
    fVar15 = 215.0;
  }
  if ((*(float *)(param_1 + 0x2680) != fVar13) || (*(float *)(param_1 + 0x2684) != fVar15)) {
    *(float *)(param_1 + 0x2680) = fVar13;
    *(float *)(param_1 + 0x2684) = fVar15;
    FUN_1000200a0(lVar3);
  }
  local_b8 = &DAT_3f0000003f000000;
  (**(code **)(*(long *)(param_1 + 0x2640) + 0x28))(lVar3,&local_b8);
  fVar13 = (float)FUN_100651184(lVar3);
  fVar13 = (float)NEON_fminnm(210.0 / fVar13,0x3f800000);
  if ((*(float *)(param_1 + 0x2688) != fVar13) || (*(float *)(param_1 + 0x268c) != fVar13)) {
    *(float *)(param_1 + 0x2688) = fVar13;
    *(float *)(param_1 + 0x268c) = fVar13;
    FUN_1000200a0(lVar3);
  }
  lVar3 = param_1 + 0x2bd8;
  fVar13 = 0.75;
  if (iVar10 == 0) {
    fVar13 = 0.65;
  }
  if ((*(float *)(param_1 + 0x2c20) != fVar13) || (*(float *)(param_1 + 0x2c24) != fVar13)) {
    *(float *)(param_1 + 0x2c20) = fVar13;
    *(float *)(param_1 + 0x2c24) = fVar13;
    FUN_1000200a0(lVar3);
  }
  fVar13 = 375.0;
  if (*(int *)(param_1 + 0x35334) != 1) {
    fVar13 = 350.0;
  }
  if ((*(float *)(param_1 + 0x2c18) != 0.0) || (*(float *)(param_1 + 0x2c1c) != fVar13)) {
    *(undefined4 *)(param_1 + 0x2c18) = 0;
    *(float *)(param_1 + 0x2c1c) = fVar13;
    FUN_1000200a0(lVar3);
  }
  local_b8 = &DAT_3f0000003f000000;
  (**(code **)(*(long *)(param_1 + 0x2bd8) + 0x28))(lVar3,&local_b8);
  lVar3 = param_1 + 0x33e8;
  lVar4 = param_1 + 0x21d8;
  fVar13 = *(float *)(param_1 + 0x221c) + 610.0;
  if ((*(float *)(param_1 + 0x3428) != fVar17 + -400.0) || (*(float *)(param_1 + 0x342c) != fVar13))
  {
    *(float *)(param_1 + 0x3428) = fVar17 + -400.0;
    *(float *)(param_1 + 0x342c) = fVar13;
    FUN_1000200a0(lVar3);
  }
  local_b8 = &DAT_3f0000003f000000;
  (**(code **)(*(long *)(param_1 + 0x33e8) + 0x28))(lVar3,&local_b8);
  fVar15 = *(float *)(param_1 + 0x814);
  FUN_10064259c(plVar1);
  fVar15 = fVar15 + fVar13 + 90.0;
  fVar13 = *(float *)(param_1 + 0x2218);
  if ((fVar13 != fVar17) || (fVar13 = *(float *)(param_1 + 0x221c), fVar13 != fVar15)) {
    *(float *)(param_1 + 0x2218) = fVar17;
    *(float *)(param_1 + 0x221c) = fVar15;
    FUN_1000200a0(lVar4);
  }
  local_b8 = (undefined1 *)0x3f000000;
  (**(code **)(*(long *)(param_1 + 0x21d8) + 0x28))(lVar4,&local_b8);
  uVar12 = FUN_1006425d0(lVar4,1,0,1,1);
  fVar17 = *(float *)(param_1 + 0x342c);
  FUN_10064259c(lVar3);
  FUN_10064e47c(uVar12,fVar17 + fVar13 * 0.5,lVar4);
  lVar3 = param_1 + 0x2770;
  if ((*(float *)(param_1 + 0x27b0) != 600.0) || (*(float *)(param_1 + 0x27b4) != 50.0)) {
    *(undefined8 *)(param_1 + 0x27b0) = 0x4248000044160000;
    FUN_1000200a0(lVar3);
  }
  local_b8 = &DAT_3f0000003f000000;
  (**(code **)(*(long *)(param_1 + 0x2770) + 0x28))(lVar3,&local_b8);
  local_a8 = 0x4382000043820000;
  FUN_10064e48c(lVar3,&local_a8);
  FUN_10064e47c(local_94,local_98,param_1 + 0x2828);
  *(uint *)(param_1 + 0x27f4) = *(uint *)(param_1 + 0x27f4) & 0xfffffffb;
  lVar3 = param_1 + 0x47f0;
  fVar13 = *(float *)(param_1 + 0x27b4) + 10.0 + local_a8._4_4_ * 0.5;
  if ((*(float *)(param_1 + 0x4830) != *(float *)(param_1 + 0x27b0)) ||
     (*(float *)(param_1 + 0x4834) != fVar13)) {
    *(float *)(param_1 + 0x4830) = *(float *)(param_1 + 0x27b0);
    *(float *)(param_1 + 0x4834) = fVar13;
    FUN_1000200a0(lVar3);
  }
  local_b8 = (undefined1 *)0x3f000000;
  (**(code **)(*(long *)(param_1 + 0x47f0) + 0x28))(lVar3,&local_b8);
  fVar15 = *(float *)(param_1 + 0x4830);
  fVar17 = *(float *)(param_1 + 0x4834);
  FUN_10064259c(lVar3);
  fVar17 = fVar17 + fVar13 * 0.5;
  if ((*(float *)(param_1 + 0x4740) != fVar15) || (*(float *)(param_1 + 0x4744) != fVar17)) {
    *(float *)(param_1 + 0x4740) = fVar15;
    *(float *)(param_1 + 0x4744) = fVar17;
    FUN_1000200a0(param_1 + 0x4700);
  }
  lVar3 = param_1 + 0x49d8;
  if ((*(float *)(param_1 + 0x4a18) != 30.0) || (*(float *)(param_1 + 0x4a1c) != 0.0)) {
    *(undefined8 *)(param_1 + 0x4a18) = 0x41f00000;
    FUN_1000200a0(lVar3);
  }
  local_b8 = (undefined1 *)0x3f000000;
  (**(code **)(*(long *)(param_1 + 0x49d8) + 0x28))(lVar3,&local_b8);
  FUN_10065179c(fVar16 * 0.28,0,0x3f800000,lVar3);
  FUN_100651184(lVar3);
  lVar3 = param_1 + 0x4b08;
  FUN_1001afa0c(lVar3);
  if ((*(float *)(param_1 + 0x4b48) != 0.0) || (*(float *)(param_1 + 0x4b4c) != 340.0)) {
    *(undefined8 *)(param_1 + 0x4b48) = 0x43aa000000000000;
    FUN_1000200a0(lVar3);
  }
  local_b8 = &DAT_3f0000003f000000;
  (**(code **)(*(long *)(param_1 + 0x4b08) + 0x28))(lVar3,&local_b8);
  FUN_1001af2f0(lVar3);
  fVar13 = *(float *)(param_1 + 0x80c0);
  if ((fVar13 != *(float *)(param_1 + 0x4960)) ||
     (fVar13 = *(float *)(param_1 + 0x80c4), fVar13 != 340.0)) {
    *(float *)(param_1 + 0x80c0) = *(float *)(param_1 + 0x4960);
    *(undefined4 *)(param_1 + 0x80c4) = 0x43aa0000;
    FUN_1000200a0(param_1 + 0x8080);
  }
  FUN_1001afa0c(lVar3);
  lVar6 = param_1 + 0x5af0;
  fVar17 = *(float *)(param_1 + 0x4b4c);
  FUN_1001afa0c(lVar3);
  fVar13 = fVar17 + -20.0 + fVar13 * 0.5;
  fVar17 = *(float *)(param_1 + 0x5b30);
  if ((fVar17 != 0.0) || (fVar17 = *(float *)(param_1 + 0x5b34), fVar17 != fVar13)) {
    *(undefined4 *)(param_1 + 0x5b30) = 0;
    *(float *)(param_1 + 0x5b34) = fVar13;
    FUN_1000200a0(lVar6);
  }
  local_b8 = &DAT_3f0000003f000000;
  (**(code **)(*(long *)(param_1 + 0x5af0) + 0x28))(lVar6,&local_b8);
  fVar13 = *(float *)(param_1 + 0x5b34);
  FUN_10064259c(lVar6);
  fVar13 = fVar13 + fVar17 * 0.5;
  if ((*(float *)(param_1 + 0x7f90) != 0.0) || (*(float *)(param_1 + 0x7f94) != fVar13)) {
    *(undefined4 *)(param_1 + 0x7f90) = 0;
    *(float *)(param_1 + 0x7f94) = fVar13;
    FUN_1000200a0(param_1 + 0x7f50);
  }
  plVar1 = (long *)(param_1 + 0x9638);
  lVar7 = param_1 + 0x4920;
  local_b8 = (undefined1 *)0x3f000000;
  (**(code **)(*(long *)(param_1 + 0x7f50) + 0x28))(param_1 + 0x7f50,&local_b8);
  plVar5 = (long *)(param_1 + 0x5500);
  fVar15 = *(float *)(param_1 + 0x4b48);
  fVar13 = (float)FUN_1001afa0c(lVar3);
  fVar17 = (float)FUN_10064259c(plVar5);
  fVar15 = fVar15 + -60.0;
  fVar17 = fVar15 + (fVar17 + fVar13) * 0.5;
  fVar14 = *(float *)(param_1 + 0x4b4c);
  FUN_1001afa0c(lVar3);
  fVar13 = fVar15 * 0.2;
  FUN_10064259c(plVar5);
  fVar13 = fVar14 + fVar13 + fVar15 * 0.5;
  if ((*(float *)(param_1 + 0x5540) != fVar17) || (*(float *)(param_1 + 0x5544) != fVar13)) {
    *(float *)(param_1 + 0x5540) = fVar17;
    *(float *)(param_1 + 0x5544) = fVar13;
    FUN_1000200a0(plVar5);
  }
  local_b8 = &DAT_3f0000003f000000;
  (**(code **)(*plVar5 + 0x28))(plVar5,&local_b8);
  fVar13 = 250.0;
  if (iVar10 == 0) {
    fVar13 = 150.0;
  }
  fVar17 = *(float *)(param_1 + 0x4960);
  if ((fVar17 != fVar16 * 0.17) || (fVar17 = *(float *)(param_1 + 0x4964), fVar17 != fVar13)) {
    *(float *)(param_1 + 0x4960) = fVar16 * 0.17;
    *(float *)(param_1 + 0x4964) = fVar13;
    FUN_1000200a0(lVar7);
  }
  uVar12 = FUN_1006425d0(lVar7,1,0,1,1);
  fVar15 = *(float *)(param_1 + 0x5b34);
  FUN_10064259c(lVar6);
  FUN_10064e47c(uVar12,fVar15 + fVar17 * 0.5,lVar7);
  fVar17 = (float)FUN_100651184(param_1 + 0x9830);
  if (*(float *)(param_1 + 0x9870) != fVar17 * -0.5) {
    *(float *)(param_1 + 0x9870) = fVar17 * -0.5;
    FUN_1000200a0(param_1 + 0x9830);
  }
  FUN_10064fc74(0,0,0,&local_b8);
  FUN_100650064(plVar1,&local_b8);
  (**(code **)(*plVar1 + 0x90))(plVar1);
  fVar17 = *(float *)(param_1 + 0x9678);
  if ((fVar17 != fVar16 * 0.83) || (fVar17 = *(float *)(param_1 + 0x967c), fVar17 != fVar13)) {
    *(float *)(param_1 + 0x9678) = fVar16 * 0.83;
    *(float *)(param_1 + 0x967c) = fVar13;
    FUN_1000200a0(plVar1);
  }
  fVar13 = *(float *)(param_1 + 0x221c);
  FUN_10064e3cc(lVar4);
  fVar17 = fVar17 + fVar13;
  FUN_10064e3cc(lVar7);
  if (*(float *)(param_1 + 0x9ad4) != fVar17) {
    *(float *)(param_1 + 0x9ad4) = fVar17;
    FUN_1000200a0(lVar2);
  }
  fVar13 = DAT_101854a78;
  if (iVar10 == 0) {
    fVar13 = 1.0;
  }
  fVar13 = (local_94 - local_9c) / (2048.0 - local_9c / fVar13);
  fVar16 = *(float *)(param_1 + 0x34f58);
  if ((fVar16 != fVar13) || (fVar16 = *(float *)(param_1 + 0x34f5c), fVar16 != fVar13)) {
    *(float *)(param_1 + 0x34f58) = fVar13;
    *(float *)(param_1 + 0x34f5c) = fVar13;
    FUN_1000200a0(param_1 + 0x34f10);
  }
  fVar13 = *(float *)(param_1 + 0x9ad4);
  FUN_10064e3cc(lVar2);
  fVar16 = fVar16 + fVar13;
  if ((*(float *)(param_1 + 0x34f50) != 0.0) || (*(float *)(param_1 + 0x34f54) != fVar16)) {
    *(float *)(param_1 + 0x34f50) = 0.0;
    *(float *)(param_1 + 0x34f54) = fVar16;
    FUN_1000200a0(param_1 + 0x34f10);
  }
  *(uint *)(param_1 + 0x34f94) = *(uint *)(param_1 + 0x34f94) | 8;
  uVar8 = 0x44cbc000;
  if (iVar10 == 0) {
    uVar8 = 0x4497e000;
  }
  local_b8 = (undefined1 *)CONCAT44(0x44c00000,uVar8);
  FUN_1001a6584(param_1 + 0x176a0,&local_b8);
  FUN_1001dd3fc(param_1 + 0x176a0);
  FUN_1002361bc(param_1);
  return;
}




void FUN_1002361bc(undefined1 param_1 [16],float param_2,long param_3)

{
  undefined1 auVar1 [16];
  float fVar2;
  
  fVar2 = *(float *)(param_3 + 0x34f54);
  FUN_100642888(param_3 + 0x34f10,1,0,1,1);
  auVar1 = FUN_100530aa0(param_3 + 0x298,1,0,1,1);
  FUN_10053093c(auVar1,param_2 + fVar2,param_3 + 0x298);
  return;
}




undefined1  [16] FUN_100236234(long param_1)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  
  FUN_1002361bc();
  auVar1 = FUN_100530a94(param_1 + 0x298);
  uVar2 = auVar1._8_8_;
  FUN_100530a94(param_1 + 0x298);
  auVar1._8_8_ = uVar2;
  return auVar1;
}




void FUN_100236284(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [32];
  
  iVar1 = FUN_100131220();
  if (iVar1 != 0) {
    uVar2 = FUN_100644a94("UI::EVENT_EDIT_GUILD_NAME");
    FUN_100644aec(auStack_40,uVar2,param_1);
    FUN_100644c34(param_1,auStack_40,1);
  }
  return;
}




void FUN_1002362dc(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [32];
  
  iVar1 = FUN_100131220();
  if (iVar1 != 0) {
    uVar2 = FUN_100644a94("UI::EVENT_EDIT_GUILD_TAG");
    FUN_100644aec(auStack_40,uVar2,param_1);
    FUN_100644c34(param_1,auStack_40,1);
  }
  return;
}




void FUN_100236334(long param_1)

{
  undefined8 uVar1;
  
  if (*(int *)(param_1 + 0x35308) == 1) {
    uVar1 = FUN_10015d3ec();
    FUN_100167138(uVar1,param_1 + 0x352f0);
    FUN_100104d30();
  }
  else if (*(int *)(param_1 + 0x35308) == 0) {
    uVar1 = FUN_10015d3ec();
    FUN_100167404(uVar1,param_1 + 0x352f0);
    if (*(char *)(param_1 + 0x3533b) == '\0') {
      FUN_100104e54();
    }
    else {
      FUN_100104d04();
    }
  }
  FUN_100192d64(param_1 + 0x9a90,0,0);
  return;
}




void FUN_1002363c0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = FUN_100644b2c(param_2);
  FUN_1002363fc((float)iVar1,param_1,1);
  FUN_100644b14(param_2);
  return;
}




void FUN_1002363fc(float param_1,long param_2,int param_3)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ushort uVar5;
  ushort *puVar6;
  
  pcVar1 = FUN_10001f218;
  if (param_3 == 0) {
    pcVar1 = FUN_10001f160;
  }
  uVar3 = FUN_1006408f4(0,*(float *)(param_2 + 0x9ad4) + param_1,0x3e800000,pcVar1);
  FUN_100642324(param_2 + 0x34f10);
  FUN_100642b14(param_2 + 0x34f10,uVar3);
  lVar2 = DAT_101dbd2f8;
  uVar5 = *(ushort *)(DAT_101dbd2f8 + 0x20010);
  if ((ulong)uVar5 == 0xffff) {
    puVar6 = (ushort *)0x0;
  }
  else {
    puVar6 = (ushort *)(DAT_101dbd2f8 + (ulong)uVar5 * 0x40 + 0x10);
    if (uVar5 == *(ushort *)(DAT_101dbd2f8 + 0x20012)) {
      uVar5 = 0xffff;
    }
    else {
      uVar5 = *puVar6;
    }
    *(ushort *)(DAT_101dbd2f8 + 0x20010) = uVar5;
    *(int *)(lVar2 + 0x20014) = *(int *)(lVar2 + 0x20014) + 1;
    FUN_10063f0f0(puVar6);
    *(undefined ***)puVar6 = &PTR_thunk_FUN_10063eeb4_10144b270;
    *(int *)(lVar2 + 0x20020) = *(int *)(lVar2 + 0x20020) + 1;
  }
  FUN_10063f0e8(0x3e800000,puVar6);
  lVar2 = DAT_101dbd2f8;
  uVar5 = *(ushort *)(DAT_101dbd2f8 + 0x20010);
  if (uVar5 == *(ushort *)(DAT_101dbd2f8 + 0x20012)) {
    uVar5 = 0xffff;
  }
  else {
    uVar5 = *(ushort *)(DAT_101dbd2f8 + 0x10 + (ulong)uVar5 * 0x40);
  }
  *(ushort *)(DAT_101dbd2f8 + 0x20010) = uVar5;
  *(int *)(lVar2 + 0x20014) = *(int *)(lVar2 + 0x20014) + 1;
  puVar4 = (undefined8 *)FUN_10063ee9c();
  puVar4[3] = 0;
  puVar4[4] = 0;
  puVar4[2] = 0;
  *puVar4 = &PTR_thunk_FUN_10063eeb4_10144bff8;
  *(int *)(lVar2 + 0x20020) = *(int *)(lVar2 + 0x20020) + 1;
  puVar4[2] = FUN_100238160;
  puVar4[4] = param_2;
  FUN_100642b7c(param_2 + 0x34e88,puVar6);
  return;
}




void FUN_10023659c(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = FUN_100644b2c(param_2);
  FUN_1002363fc((float)iVar1,param_1,0);
  FUN_100644b14(param_2);
  return;
}




void FUN_1002365d8(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_148 [8];
  void *local_140;
  undefined1 auStack_138 [8];
  void *local_130;
  void *local_128;
  void *local_120;
  undefined7 local_118;
  char cStack_111;
  char local_101;
  undefined4 local_100;
  undefined8 local_fc;
  undefined **local_f0;
  undefined1 auStack_e8 [40];
  long local_c0;
  undefined8 local_a0;
  void *local_98;
  void *local_90;
  char local_79;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_48;
  
  thunk_FUN_1001cd434(&local_f0);
  uVar2 = FUN_1004e0150("MENU_PROFILE_GUILD_OVERVIEW_INFO_TITLE",0);
  thunk_FUN_1004e439c(&local_128,uVar2);
  FUN_10003330c(&local_118,&DAT_101d91198);
  local_100 = 0;
  local_fc = 0x41a00000;
  FUN_10003c048(auStack_e8,&local_128);
  if (local_101 < '\0') {
    operator_delete((void *)CONCAT17(cStack_111,local_118));
  }
  if (local_120 != (void *)0x0) {
    operator_delete__(local_120);
  }
  uVar2 = FUN_1004e0150("MENU_PROFILE_GUILD_OVERVIEW_INFO_SEASON",0);
  thunk_FUN_1004e439c(&local_128,uVar2);
  FUN_10003330c(&local_118,&DAT_101d91198);
  local_100 = 1;
  local_fc = 0x41a00000;
  FUN_10003c048(auStack_e8,&local_128);
  if (local_101 < '\0') {
    operator_delete((void *)CONCAT17(cStack_111,local_118));
  }
  if (local_120 != (void *)0x0) {
    operator_delete__(local_120);
  }
  uVar2 = FUN_1004e0150("MENU_PROFILE_GUILD_OVERVIEW_INFO_LEVELING",0);
  thunk_FUN_1004e439c(auStack_138,uVar2);
  FUN_1004e313c(auStack_148);
  FUN_1004e38ac(auStack_148,"%d");
  FUN_1004e3120(&local_128,"[MAX_GUILD_MEMBERS]");
  FUN_1004e3bc4(auStack_138,0,&local_128,auStack_148);
  if (local_120 != (void *)0x0) {
    operator_delete__(local_120);
  }
  thunk_FUN_1004e439c(&local_128,auStack_138);
  FUN_10003330c(&local_118,&DAT_101d91198);
  local_100 = 1;
  local_fc = 0x41a00000;
  FUN_10003c048(auStack_e8,&local_128);
  if (local_101 < '\0') {
    operator_delete((void *)CONCAT17(cStack_111,local_118));
  }
  if (local_120 != (void *)0x0) {
    operator_delete__(local_120);
  }
  local_c0 = param_1 + 0x2bd8;
  local_48 = 3;
  local_60 = 0x3f19999a;
  iVar1 = FUN_100126c88();
  local_5c = 0x44548000;
  if (iVar1 == 0) {
    local_5c = 0x442f0000;
  }
  uVar2 = FUN_10002f320();
  FUN_10001549c(&local_128,"guildInfo");
  FUN_100030e74(uVar2,&local_128,&local_f0);
  if (cStack_111 < '\0') {
    operator_delete(local_128);
  }
  if (local_140 != (void *)0x0) {
    operator_delete__(local_140);
  }
  if (local_130 != (void *)0x0) {
    operator_delete__(local_130);
  }
  local_f0 = &PTR_FUN_1014666e0;
  if (local_79 < '\0') {
    operator_delete(local_90);
  }
  if (local_98 != (void *)0x0) {
    operator_delete__(local_98);
    local_a0 = 0;
    local_98 = (void *)0x0;
  }
  FUN_10003c1ec(auStack_e8,1);
  return;
}




void FUN_100236874(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_1b8 [8];
  void *local_1b0;
  undefined1 auStack_1a8 [8];
  void *local_1a0;
  undefined1 auStack_198 [8];
  void *local_190;
  undefined1 auStack_188 [8];
  void *local_180;
  undefined1 auStack_178 [8];
  void *local_170;
  undefined1 auStack_168 [8];
  void *local_160;
  undefined1 auStack_158 [8];
  void *local_150;
  undefined1 auStack_148 [8];
  void *local_140;
  void *local_138;
  void *local_130;
  undefined7 local_128;
  char cStack_121;
  char local_111;
  undefined4 local_110;
  undefined8 local_10c;
  undefined **local_100;
  undefined1 auStack_f8 [40];
  long local_d0;
  undefined8 local_b0;
  void *local_a8;
  void *local_a0;
  char local_89;
  undefined4 local_70;
  undefined4 local_58;
  
  thunk_FUN_1001cd434(&local_100);
  uVar1 = FUN_1004e0150("MENU_PROFILE_GUILD_ACTIVITYBUFF_TITLE",0);
  thunk_FUN_1004e439c(&local_138,uVar1);
  FUN_10003330c(&local_128,&DAT_101d91198);
  local_110 = 0;
  local_10c = 0x41a00000;
  FUN_10003c048(auStack_f8,&local_138);
  if (local_111 < '\0') {
    operator_delete((void *)CONCAT17(cStack_121,local_128));
  }
  if (local_130 != (void *)0x0) {
    operator_delete__(local_130);
  }
  uVar1 = FUN_1004e0150("MENU_PROFILE_GUILD_ACTIVITYBUFF_HEAT_DETAILS",0);
  thunk_FUN_1004e439c(auStack_148,uVar1);
  FUN_1004e313c(auStack_158);
  FUN_1004e38ac(auStack_158,"%d");
  FUN_1004e3120(&local_138,"[HEAT_ACTIVATE_PERCENT]");
  FUN_1004e3bc4(auStack_148,0,&local_138,auStack_158);
  if (local_130 != (void *)0x0) {
    operator_delete__(local_130);
  }
  FUN_1004e313c(auStack_168);
  FUN_1004e38ac(auStack_168,"%d");
  FUN_1004e3120(&local_138,"[HEAT_BONUS_PERCENT]");
  FUN_1004e3bc4(auStack_148,0,&local_138,auStack_168);
  if (local_130 != (void *)0x0) {
    operator_delete__(local_130);
  }
  thunk_FUN_1004e439c(&local_138,auStack_148);
  FUN_10003330c(&local_128,&DAT_101d91198);
  local_110 = 1;
  local_10c = 0x41a00000;
  FUN_10003c048(auStack_f8,&local_138);
  if (local_111 < '\0') {
    operator_delete((void *)CONCAT17(cStack_121,local_128));
  }
  if (local_130 != (void *)0x0) {
    operator_delete__(local_130);
  }
  uVar1 = FUN_1004e0150("MENU_PROFILE_GUILD_ACTIVITYBUFF_FIRE_DETAILS",0);
  thunk_FUN_1004e439c(auStack_178,uVar1);
  FUN_1004e313c(auStack_188);
  FUN_1004e38ac(auStack_188,"%d");
  FUN_1004e3120(&local_138,"[FIRE_ACTIVATE_PERCENT]");
  FUN_1004e3bc4(auStack_178,0,&local_138,auStack_188);
  if (local_130 != (void *)0x0) {
    operator_delete__(local_130);
  }
  FUN_1004e313c(auStack_198);
  FUN_1004e38ac(auStack_198,"%d");
  FUN_1004e3120(&local_138,"[FIRE_BONUS_PERCENT]");
  FUN_1004e3bc4(auStack_178,0,&local_138,auStack_198);
  if (local_130 != (void *)0x0) {
    operator_delete__(local_130);
  }
  thunk_FUN_1004e439c(&local_138,auStack_178);
  FUN_10003330c(&local_128,&DAT_101d91198);
  local_110 = 1;
  local_10c = 0x41a00000;
  FUN_10003c048(auStack_f8,&local_138);
  if (local_111 < '\0') {
    operator_delete((void *)CONCAT17(cStack_121,local_128));
  }
  if (local_130 != (void *)0x0) {
    operator_delete__(local_130);
  }
  uVar1 = FUN_1004e0150("MENU_PROFILE_GUILD_ACTIVITYBUFF_PREREQ_INFO",0);
  thunk_FUN_1004e439c(auStack_1a8,uVar1);
  FUN_1004e313c(auStack_1b8);
  FUN_1004e38ac(auStack_1b8,"%d");
  FUN_1004e3120(&local_138,"[NUM_MEMBERS]");
  FUN_1004e3bc4(auStack_1a8,0,&local_138,auStack_1b8);
  if (local_130 != (void *)0x0) {
    operator_delete__(local_130);
  }
  thunk_FUN_1004e439c(&local_138,auStack_1a8);
  FUN_10003330c(&local_128,&DAT_101d91198);
  local_110 = 1;
  local_10c = 0x41a00000;
  FUN_10003c048(auStack_f8,&local_138);
  if (local_111 < '\0') {
    operator_delete((void *)CONCAT17(cStack_121,local_128));
  }
  if (local_130 != (void *)0x0) {
    operator_delete__(local_130);
  }
  local_d0 = param_1 + 0x2770;
  local_58 = 2;
  local_70 = 0x3e99999a;
  uVar1 = FUN_10002f320();
  FUN_10001549c(&local_138,"guildActivityBuff");
  FUN_100030e74(uVar1,&local_138,&local_100);
  if (cStack_121 < '\0') {
    operator_delete(local_138);
  }
  FUN_100644b14(param_2);
  if (local_1b0 != (void *)0x0) {
    operator_delete__(local_1b0);
  }
  if (local_1a0 != (void *)0x0) {
    operator_delete__(local_1a0);
  }
  if (local_190 != (void *)0x0) {
    operator_delete__(local_190);
  }
  if (local_180 != (void *)0x0) {
    operator_delete__(local_180);
  }
  if (local_170 != (void *)0x0) {
    operator_delete__(local_170);
  }
  if (local_160 != (void *)0x0) {
    operator_delete__(local_160);
  }
  if (local_150 != (void *)0x0) {
    operator_delete__(local_150);
  }
  if (local_140 != (void *)0x0) {
    operator_delete__(local_140);
  }
  local_100 = &PTR_FUN_1014666e0;
  if (local_89 < '\0') {
    operator_delete(local_a0);
  }
  if (local_a8 != (void *)0x0) {
    operator_delete__(local_a8);
    local_b0 = 0;
    local_a8 = (void *)0x0;
  }
  FUN_10003c1ec(auStack_f8,1);
  return;
}




void FUN_100236d08(long param_1)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  void *local_38 [2];
  char local_21;
  
  iVar2 = FUN_100237f5c();
  if (iVar2 != 0) {
    FUN_100143c38(FUN_100238170,FUN_1002381f4);
    uVar3 = FUN_10002f320();
    FUN_10001549c(local_38,"guildChest");
    if ((char)*(byte *)(param_1 + 0x5427) < '\0') {
      uVar4 = *(ulong *)(param_1 + 0x5418);
    }
    else {
      uVar4 = (ulong)*(byte *)(param_1 + 0x5427);
    }
    lVar1 = param_1 + 0x54c0;
    if (uVar4 != 0) {
      lVar1 = param_1 + 0x5410;
    }
    FUN_1000315c4(uVar3,local_38,lVar1);
    if (local_21 < '\0') {
      operator_delete(local_38[0]);
    }
  }
  return;
}




void FUN_100236dac(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  void *local_128;
  void *local_120;
  undefined7 local_118;
  char cStack_111;
  char local_101;
  undefined4 local_100;
  undefined8 local_fc;
  undefined **local_f0;
  undefined1 auStack_e8 [40];
  long local_c0;
  undefined8 local_a0;
  void *local_98;
  void *local_90;
  char local_79;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_48;
  
  thunk_FUN_1001cd434(&local_f0);
  uVar2 = FUN_1004e0150("MENU_PROFILE_GUILD_OVERVIEW_REWARD_CHEST_TOOLTIP_TITLE",0);
  thunk_FUN_1004e439c(&local_128,uVar2);
  FUN_10003330c(&local_118,&DAT_101d91198);
  local_100 = 0;
  local_fc = 0x41a00000;
  FUN_10003c048(auStack_e8,&local_128);
  if (local_101 < '\0') {
    operator_delete((void *)CONCAT17(cStack_111,local_118));
  }
  if (local_120 != (void *)0x0) {
    operator_delete__(local_120);
  }
  uVar2 = FUN_1004e0150("MENU_PROFILE_GUILD_OVERVIEW_REWARD_CHEST_TOOLTIP",0);
  thunk_FUN_1004e439c(&local_128,uVar2);
  FUN_10003330c(&local_118,&DAT_101d91198);
  local_100 = 1;
  local_fc = 0x41a00000;
  FUN_10003c048(auStack_e8,&local_128);
  if (local_101 < '\0') {
    operator_delete((void *)CONCAT17(cStack_111,local_118));
  }
  if (local_120 != (void *)0x0) {
    operator_delete__(local_120);
  }
  local_c0 = param_1 + 0x5500;
  local_48 = 3;
  local_60 = 0x3f800000;
  iVar1 = FUN_100126c88();
  local_5c = 0x449c4000;
  if (iVar1 == 0) {
    local_5c = 0x446d8000;
  }
  uVar2 = FUN_10002f320();
  FUN_10001549c(&local_128,"guildChestInfo");
  FUN_100030e74(uVar2,&local_128,&local_f0);
  if (cStack_111 < '\0') {
    operator_delete(local_128);
  }
  local_f0 = &PTR_FUN_1014666e0;
  if (local_79 < '\0') {
    operator_delete(local_90);
  }
  if (local_98 != (void *)0x0) {
    operator_delete__(local_98);
    local_a0 = 0;
    local_98 = (void *)0x0;
  }
  FUN_10003c1ec(auStack_e8,1);
  return;
}




void FUN_100236f6c(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_40 [32];
  
  FUN_100530a48(param_1 + 0x298,1);
  uVar1 = FUN_100644a94("UI::EVENT_GUILD_OVERVIEW_SIZE_CHANGE");
  FUN_100644aec(auStack_40,uVar1,param_1);
  FUN_100644c34(param_1,auStack_40,1);
  return;
}




void FUN_100236fc8(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_1004f1680(param_2);
  if (iVar1 != 0) {
    uVar2 = FUN_100143bc4();
    FUN_100234ccc(param_1,uVar2);
    return;
  }
  return;
}




void FUN_100237008(long param_1,long param_2)

{
  int iVar1;
  
  iVar1 = FUN_1004f1680(param_2);
  if ((iVar1 != 0) && (*(char *)(param_2 + 0x44) != '\0')) {
    FUN_100192d64(param_1 + 0x9a90,0,0);
    return;
  }
  FUN_10023705c(param_1);
  return;
}




void FUN_10023705c(long param_1)

{
  uint *puVar1;
  size_t sVar2;
  undefined8 *puVar3;
  size_t sVar4;
  byte bVar5;
  byte bVar6;
  bool bVar7;
  bool bVar8;
  int iVar9;
  long lVar10;
  uint uVar11;
  ulong uVar12;
  long lVar13;
  void *pvVar14;
  byte *pbVar15;
  byte *pbVar16;
  byte *pbVar17;
  ulong uVar18;
  
  puVar1 = (uint *)(param_1 + 0x49a4);
  lVar10 = FUN_10015d3ec();
  uVar11 = *(uint *)(lVar10 + 0x53d8);
  if (uVar11 == 0) {
    bVar7 = false;
  }
  else {
    uVar18 = 0;
    lVar10 = *(long *)(lVar10 + 0x53e0);
    bVar5 = *(byte *)(param_1 + 0x35307);
    sVar4 = *(size_t *)(param_1 + 0x352f8);
    if (-1 < (char)bVar5) {
      sVar4 = (ulong)bVar5;
    }
    pbVar17 = (byte *)(lVar10 + 0x29);
    bVar7 = true;
    do {
      lVar13 = lVar10 + uVar18 * 0x1a8;
      bVar6 = *(byte *)(lVar13 + 0x3f);
      uVar12 = (ulong)bVar6;
      sVar2 = *(size_t *)(lVar13 + 0x30);
      if (-1 < (char)bVar6) {
        sVar2 = uVar12;
      }
      if (sVar2 == sVar4) {
        pvVar14 = *(void **)(lVar13 + 0x28);
        puVar3 = pvVar14;
        if (-1 < (char)bVar6) {
          puVar3 = (undefined8 *)(lVar13 + 0x28);
        }
        pbVar15 = *(byte **)(param_1 + 0x352f0);
        if (-1 < (char)bVar5) {
          pbVar15 = (byte *)(param_1 + 0x352f0);
        }
        if ((char)bVar6 < '\0') {
          if ((sVar4 == 0) || (iVar9 = _memcmp(puVar3,pbVar15,sVar4), iVar9 == 0)) break;
        }
        else {
          if (sVar4 == 0) break;
          pbVar16 = pbVar17;
          if ((uint)*pbVar15 == ((uint)pvVar14 & 0xff)) {
            do {
              uVar12 = uVar12 - 1;
              pbVar15 = pbVar15 + 1;
              if (uVar12 == 0) goto LAB_10023717c;
              bVar6 = *pbVar16;
              pbVar16 = pbVar16 + 1;
            } while (bVar6 == *pbVar15);
          }
        }
      }
      uVar18 = uVar18 + 1;
      pbVar17 = pbVar17 + 0x1a8;
      bVar7 = uVar18 < uVar11;
    } while (uVar18 != uVar11);
  }
LAB_10023717c:
  lVar10 = FUN_10015d3ec();
  bVar5 = *(byte *)(lVar10 + 0x548f);
  uVar18 = (ulong)bVar5;
  sVar4 = *(size_t *)(lVar10 + 0x5480);
  if (-1 < (char)bVar5) {
    sVar4 = uVar18;
  }
  sVar2 = DAT_101d911a0;
  if (-1 < (char)DAT_101d911a8._7_1_) {
    sVar2 = (ulong)DAT_101d911a8._7_1_;
  }
  if (sVar4 == sVar2) {
    pvVar14 = *(void **)(lVar10 + 0x5478);
    puVar3 = pvVar14;
    if (-1 < (char)bVar5) {
      puVar3 = (undefined8 *)(lVar10 + 0x5478);
    }
    pbVar17 = DAT_101d91198;
    if (-1 < (char)DAT_101d911a8._7_1_) {
      pbVar17 = (byte *)&DAT_101d91198;
    }
    if ((char)bVar5 < '\0') {
      if ((sVar4 == 0) || (iVar9 = _memcmp(puVar3,pbVar17,sVar4), iVar9 == 0)) goto LAB_100237260;
    }
    else {
      if (sVar4 == 0) {
LAB_100237260:
        if (!bVar7) {
          bVar8 = *(int *)(param_1 + 0x35308) == 0;
        }
        else {
          bVar8 = true;
        }
        FUN_100192d64(param_1 + 0x9a90,bVar8,bVar7);
        *(uint *)(param_1 + 0x8104) = *(uint *)(param_1 + 0x8104) | 4;
        uVar11 = *puVar1 & 0xfffffffb;
        goto LAB_1002372a4;
      }
      if ((uint)*pbVar17 == ((uint)pvVar14 & 0xff)) {
        pbVar15 = (byte *)(lVar10 + 0x5479);
        do {
          uVar18 = uVar18 - 1;
          pbVar17 = pbVar17 + 1;
          if (uVar18 == 0) goto LAB_100237260;
          bVar5 = *pbVar15;
          pbVar15 = pbVar15 + 1;
        } while (bVar5 == *pbVar17);
      }
    }
  }
  FUN_100192d64(param_1 + 0x9a90,0,0);
  *(uint *)(param_1 + 0x8104) = *(uint *)(param_1 + 0x8104) & 0xfffffffb;
  uVar11 = *puVar1 | 4;
LAB_1002372a4:
  *puVar1 = uVar11;
  return;
}




void FUN_1002372c8(long *param_1,long param_2)

{
  string *psVar1;
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  size_t sVar5;
  size_t sVar6;
  undefined8 ******ppppppuVar7;
  ulong uVar8;
  string *psVar9;
  string sVar10;
  byte bVar11;
  bool bVar12;
  bool bVar13;
  int iVar14;
  long lVar15;
  undefined8 uVar16;
  char *pcVar17;
  undefined8 *puVar18;
  ulong uVar19;
  string *psVar20;
  long lVar21;
  uint uVar22;
  uint uVar23;
  ulong uVar24;
  byte *pbVar25;
  byte *pbVar26;
  string *psVar27;
  ulong uVar28;
  byte bVar29;
  size_t sVar30;
  size_t sVar31;
  size_t sVar32;
  size_t sVar33;
  undefined1 auStack_c0 [8];
  void *local_b8;
  undefined1 auStack_b0 [8];
  void *local_a8;
  undefined1 auStack_a0 [8];
  void *local_98;
  void *local_90;
  void *local_88;
  char local_79;
  undefined8 *****local_78;
  void *local_70;
  char local_61;
  
  psVar1 = (string *)(param_2 + 0x180);
  bVar29 = *(byte *)(param_2 + 0x197);
  uVar19 = (ulong)bVar29;
  sVar33 = *(size_t *)(param_2 + 0x188);
  if (-1 < (char)bVar29) {
    sVar33 = uVar19;
  }
  sVar32 = DAT_101d911a0;
  if (-1 < (char)DAT_101d911a8._7_1_) {
    sVar32 = (ulong)DAT_101d911a8._7_1_;
  }
  if (sVar33 == sVar32) {
    psVar9 = *(string **)psVar1;
    if (-1 < (char)bVar29) {
      psVar9 = psVar1;
    }
    pbVar26 = DAT_101d91198;
    if (-1 < (char)DAT_101d911a8._7_1_) {
      pbVar26 = (byte *)&DAT_101d91198;
    }
    if ((char)bVar29 < '\0') {
      if ((sVar33 != 0) && (iVar14 = _memcmp(psVar9,pbVar26,sVar33), iVar14 != 0))
      goto LAB_100237398;
    }
    else if (sVar33 != 0) {
      if ((uint)*pbVar26 == ((uint)*(string **)psVar1 & 0xff)) {
        pbVar25 = (byte *)(param_2 + 0x181);
        do {
          uVar19 = uVar19 - 1;
          pbVar26 = pbVar26 + 1;
          if (uVar19 == 0) goto LAB_100237438;
          bVar29 = *pbVar25;
          pbVar25 = pbVar25 + 1;
        } while (bVar29 == *pbVar26);
      }
      goto LAB_100237398;
    }
LAB_100237438:
    bVar12 = false;
  }
  else {
LAB_100237398:
    lVar15 = FUN_10015d3ec();
    bVar29 = *(byte *)(param_2 + 0x197);
    uVar19 = (ulong)bVar29;
    bVar11 = *(byte *)(lVar15 + 0x548f);
    sVar33 = *(size_t *)(param_2 + 0x188);
    if (-1 < (char)bVar29) {
      sVar33 = uVar19;
    }
    sVar32 = *(size_t *)(lVar15 + 0x5480);
    if (-1 < (char)bVar11) {
      sVar32 = (ulong)bVar11;
    }
    if (sVar33 != sVar32) goto LAB_100237438;
    psVar9 = *(string **)psVar1;
    if (-1 < (char)bVar29) {
      psVar9 = psVar1;
    }
    pbVar26 = *(byte **)(lVar15 + 0x5478);
    if (-1 < (char)bVar11) {
      pbVar26 = (byte *)(lVar15 + 0x5478);
    }
    if ((char)bVar29 < '\0') {
      if (sVar33 == 0) goto LAB_100237b1c;
      iVar14 = _memcmp(psVar9,pbVar26,sVar33);
      bVar12 = iVar14 == 0;
    }
    else if (sVar33 == 0) {
LAB_100237b1c:
      bVar12 = true;
    }
    else {
      if ((uint)*pbVar26 != ((uint)*(string **)psVar1 & 0xff)) goto LAB_100237438;
      pbVar25 = (byte *)(param_2 + 0x181);
      do {
        uVar19 = uVar19 - 1;
        pbVar26 = pbVar26 + 1;
        bVar12 = uVar19 == 0;
        if (uVar19 == 0) break;
        bVar29 = *pbVar25;
        pbVar25 = pbVar25 + 1;
      } while (bVar29 == *pbVar26);
    }
  }
  psVar9 = (string *)(param_1 + 0x6a5e);
  lVar15 = FUN_10015d3ec();
  bVar29 = *(byte *)(param_2 + 0x197);
  uVar19 = (ulong)bVar29;
  bVar11 = *(byte *)(lVar15 + 0x548f);
  sVar33 = *(size_t *)(param_2 + 0x188);
  if (-1 < (char)bVar29) {
    sVar33 = uVar19;
  }
  sVar32 = *(size_t *)(lVar15 + 0x5480);
  if (-1 < (char)bVar11) {
    sVar32 = (ulong)bVar11;
  }
  if (sVar33 == sVar32) {
    psVar20 = *(string **)psVar1;
    if (-1 < (char)bVar29) {
      psVar20 = psVar1;
    }
    pbVar26 = *(byte **)(lVar15 + 0x5478);
    if (-1 < (char)bVar11) {
      pbVar26 = (byte *)(lVar15 + 0x5478);
    }
    if ((char)bVar29 < '\0') {
      if ((sVar33 != 0) && (iVar14 = _memcmp(psVar20,pbVar26,sVar33), iVar14 != 0))
      goto LAB_1002374e4;
    }
    else if (sVar33 != 0) {
      if ((uint)*pbVar26 == ((uint)*(string **)psVar1 & 0xff)) {
        pbVar25 = (byte *)(param_2 + 0x181);
        do {
          uVar19 = uVar19 - 1;
          pbVar26 = pbVar26 + 1;
          if (uVar19 == 0) goto LAB_10023753c;
          bVar29 = *pbVar25;
          pbVar25 = pbVar25 + 1;
        } while (bVar29 == *pbVar26);
      }
      goto LAB_1002374e4;
    }
LAB_10023753c:
    if ((char)param_1[0x300f] == '\0') {
      FUN_1001dd630(param_1 + 0x2ed4,param_2 + 0x98);
    }
  }
  else {
LAB_1002374e4:
    lVar15 = FUN_100331578();
    if (*(char *)(lVar15 + 0x20) != '\0') {
      FUN_1001aed88(param_1 + 0x961,param_2 + 0x198);
      FUN_10001549c(&local_78,"IDLE_CLOSED");
      FUN_1001aeb7c(0x3f333333,param_1 + 0x961,&local_78);
      if (local_61 < '\0') {
        operator_delete(local_78);
      }
    }
  }
  if (*(char *)(param_2 + 0x1d0) != '\0') {
    sVar30 = (size_t)*(byte *)((long)param_1 + 0x35307);
    sVar33 = param_1[0x6a5f];
    bVar29 = *(byte *)(param_2 + 0x197);
    sVar31 = (size_t)bVar29;
    sVar32 = *(size_t *)(param_2 + 0x188);
    uVar22 = (uint)*(byte *)((long)param_1 + 0x35307);
    goto LAB_100237588;
  }
  bVar29 = *(byte *)(param_2 + 0x197);
  sVar31 = (size_t)bVar29;
  sVar32 = *(size_t *)(param_2 + 0x188);
  sVar5 = sVar32;
  if (-1 < (char)bVar29) {
    sVar5 = sVar31;
  }
  sVar30 = (size_t)*(byte *)((long)param_1 + 0x35307);
  uVar22 = (uint)(char)*(byte *)((long)param_1 + 0x35307);
  sVar33 = param_1[0x6a5f];
  sVar6 = sVar33;
  if (-1 < (int)uVar22) {
    sVar6 = sVar30;
  }
  if (sVar5 == sVar6) {
    psVar20 = *(string **)psVar1;
    if (-1 < (char)bVar29) {
      psVar20 = psVar1;
    }
    psVar27 = *(string **)psVar9;
    if (-1 < (int)uVar22) {
      psVar27 = psVar9;
    }
    if ((char)bVar29 < '\0') {
      if (sVar5 != 0) {
        iVar14 = _memcmp(psVar20,psVar27,sVar5);
        bVar13 = iVar14 == 0;
        goto LAB_100237b30;
      }
    }
    else if (sVar5 != 0) {
      if ((uint)(byte)*psVar27 != ((uint)*(string **)psVar1 & 0xff)) goto LAB_10023769c;
      psVar20 = (string *)(param_2 + 0x181);
      uVar19 = sVar31;
      do {
        uVar19 = uVar19 - 1;
        psVar27 = psVar27 + 1;
        if (uVar19 == 0) break;
        sVar10 = *psVar20;
        psVar20 = psVar20 + 1;
      } while (sVar10 == *psVar27);
      bVar13 = uVar19 == 0;
LAB_100237b30:
      bVar13 = !bVar13;
      goto LAB_100237b34;
    }
  }
  else {
LAB_10023769c:
    bVar13 = true;
LAB_100237b34:
    if (!(bool)(bVar13 ^ 1U | bVar12)) {
      return;
    }
  }
LAB_100237588:
  if (-1 < (char)uVar22) {
    sVar33 = sVar30;
  }
  if (-1 < (char)bVar29) {
    sVar32 = sVar31;
  }
  if (sVar33 == sVar32) {
    psVar20 = *(string **)psVar9;
    if (-1 < (char)uVar22) {
      psVar20 = psVar9;
    }
    psVar27 = *(string **)psVar1;
    if (-1 < (char)bVar29) {
      psVar27 = psVar1;
    }
    if ((uVar22 >> 7 & 1) == 0) {
      if (sVar33 != 0) {
        if ((uint)(byte)*psVar27 == ((uint)*(string **)psVar9 & 0xff)) {
          psVar20 = (string *)((long)param_1 + 0x352f1);
          do {
            sVar30 = sVar30 - 1;
            psVar27 = psVar27 + 1;
            if (sVar30 == 0) goto LAB_1002376b4;
            sVar10 = *psVar20;
            psVar20 = psVar20 + 1;
          } while (sVar10 == *psVar27);
        }
        goto LAB_1002376b0;
      }
    }
    else if ((sVar33 != 0) && (iVar14 = _memcmp(psVar20,psVar27,sVar33), iVar14 != 0))
    goto LAB_1002376b0;
  }
  else {
LAB_1002376b0:
    *(undefined1 *)(param_1 + 0x6a67) = 0;
  }
LAB_1002376b4:
  std::string::operator=(psVar9,psVar1);
  bVar29 = *(byte *)((long)param_1 + 0x35307);
  uVar19 = (ulong)bVar29;
  sVar33 = param_1[0x6a5f];
  if (-1 < (char)bVar29) {
    sVar33 = uVar19;
  }
  sVar32 = DAT_101d911a0;
  if (-1 < (char)DAT_101d911a8._7_1_) {
    sVar32 = (ulong)DAT_101d911a8._7_1_;
  }
  if (sVar33 == sVar32) {
    psVar20 = *(string **)psVar9;
    if (-1 < (char)bVar29) {
      psVar20 = psVar9;
    }
    pbVar26 = DAT_101d91198;
    if (-1 < (char)DAT_101d911a8._7_1_) {
      pbVar26 = (byte *)&DAT_101d91198;
    }
    if ((char)bVar29 < '\0') {
      if (sVar33 == 0) {
        return;
      }
      iVar14 = _memcmp(psVar20,pbVar26,sVar33);
      if (iVar14 == 0) {
        return;
      }
    }
    else {
      if (sVar33 == 0) {
        return;
      }
      if ((uint)*pbVar26 == ((uint)*(string **)psVar9 & 0xff)) {
        pbVar25 = (byte *)((long)param_1 + 0x352f1);
        do {
          uVar19 = uVar19 - 1;
          pbVar26 = pbVar26 + 1;
          if (uVar19 == 0) {
            return;
          }
          bVar29 = *pbVar25;
          pbVar25 = pbVar25 + 1;
        } while (bVar29 == *pbVar26);
      }
    }
  }
  iVar14 = FUN_1004f1680(param_2);
  if (iVar14 == 0) {
    return;
  }
  *(undefined4 *)(param_1 + 0x6a61) = *(undefined4 *)(param_2 + 0x1d4);
  FUN_1004e3170(&local_78,param_2 + 0x40);
  FUN_1006513c0(param_1 + 0x299,&local_78);
  if (local_70 != (void *)0x0) {
    operator_delete__(local_70);
  }
  FUN_10001549c(&local_90,"GUILD.CHESTS.");
  FUN_1000e8b18(&local_78,&local_90,param_2 + 0x40);
  ppppppuVar7 = (undefined8 ******)local_78;
  if (-1 < local_61) {
    ppppppuVar7 = &local_78;
  }
  FUN_100016648(param_1 + 0x6a62,ppppppuVar7,0);
  if (local_61 < '\0') {
    operator_delete(local_78);
  }
  if (local_79 < '\0') {
    operator_delete(local_90);
  }
  FUN_1004e3170(&local_78,param_2 + 0x58);
  FUN_100194b7c(param_1 + 0xfa,&local_78);
  if (local_70 != (void *)0x0) {
    operator_delete__(local_70);
  }
  FUN_1004e313c(&local_78);
  FUN_1004e38ac(&local_78,"%d");
  FUN_1006513c0(param_1 + 0x4c8,&local_78);
  *(undefined4 *)((long)param_1 + 0x35334) = *(undefined4 *)(param_2 + 0x90);
  FUN_1001b5688(param_1 + 0x67d,*(undefined4 *)(param_2 + 0x1b0),*(undefined4 *)(param_2 + 0x1b8),
                *(undefined4 *)(param_2 + 0x1b4));
  FUN_1001933ac(param_1 + 0x1352,param_2);
  plVar2 = param_1 + 0x505;
  FUN_1001a8964(plVar2,"GUILD_BUFF_STAR_1");
  plVar3 = param_1 + 0x8fe;
  FUN_1006513c0(plVar3,&DAT_101d91650);
  if (*(int *)(param_2 + 0x1e8) != 0) {
    lVar15 = 0;
    uVar19 = 0;
    bVar12 = false;
    do {
      uVar16 = FUN_1004e0150("MENU_PROFILE_GUILD_OVERVIEW_BUFF_EXPIRES_LABEL",0);
      thunk_FUN_1004e439c(&local_90,uVar16);
      lVar21 = *(long *)(param_2 + 0x1f0);
      uVar4 = lVar21 + lVar15;
      bVar29 = *(byte *)(uVar4 + 0x17);
      uVar24 = (ulong)bVar29;
      uVar28 = *(ulong *)(uVar4 + 8);
      uVar8 = uVar28;
      if (-1 < (char)bVar29) {
        uVar8 = uVar24;
      }
      if (uVar8 == 9) {
        iVar14 = std::string::compare(uVar4,0,(char *)0xffffffffffffffff,0x1013e7309);
        if (iVar14 != 0) {
          lVar21 = *(long *)(param_2 + 0x1f0);
          bVar29 = *(byte *)(lVar21 + lVar15 + 0x17);
          uVar24 = (ulong)bVar29;
          uVar28 = *(ulong *)(lVar21 + lVar15 + 8);
          goto LAB_10023796c;
        }
        FUN_1001a8964(plVar2,"GUILD_BUFF_STAR_3");
        FUN_1000f1e20(auStack_a0,&local_90,
                      (long)*(int *)(*(long *)(param_2 + 0x1f0) + lVar15 + 0x1c),1);
        FUN_1006513c0(plVar3,auStack_a0);
        if (local_98 != (void *)0x0) {
          operator_delete__(local_98);
        }
        bVar12 = true;
      }
      else {
LAB_10023796c:
        if (-1 < (char)bVar29) {
          uVar28 = uVar24;
        }
        if ((uVar28 == 9) &&
           (iVar14 = std::string::compare(lVar21 + lVar15,0,(char *)0xffffffffffffffff,0x1013e7325),
           iVar14 == 0 && !bVar12)) {
          FUN_1001a8964(plVar2,"GUILD_BUFF_STAR_2");
          FUN_1000f1e20(auStack_a0,&local_90,
                        (long)*(int *)(*(long *)(param_2 + 0x1f0) + lVar15 + 0x1c),1);
          FUN_1006513c0(plVar3,auStack_a0);
          if (local_98 != (void *)0x0) {
            operator_delete__(local_98);
          }
          bVar12 = false;
        }
      }
      if (local_88 != (void *)0x0) {
        operator_delete__(local_88);
      }
      uVar19 = uVar19 + 1;
      lVar15 = lVar15 + 0x20;
    } while (uVar19 < *(uint *)(param_2 + 0x1e8));
  }
  uVar16 = FUN_100655b6c(param_1 + 0x918);
  iVar14 = FUN_1004e36c0(uVar16,&DAT_101d91650);
  uVar22 = 4;
  if (iVar14 == 0) {
    uVar22 = 0;
  }
  *(uint *)((long)param_1 + 0x4784) = *(uint *)((long)param_1 + 0x4784) & 0xfffffffb | uVar22;
  uVar22 = *(uint *)(param_2 + 0x94);
  if (uVar22 != *(uint *)(param_1 + 0x6a66)) {
    if (9 < uVar22) {
      uVar22 = 10;
    }
    *(uint *)(param_1 + 0x6a66) = uVar22;
    if ((char)param_1[0x6a67] == '\0') {
      FUN_10023523c(param_1);
      uVar22 = *(uint *)(param_1 + 0x6a66);
    }
  }
  switch(uVar22) {
  case 1:
    pcVar17 = "GUILD_OVERVIEW_TIER_1_LABEL";
    break;
  case 2:
    pcVar17 = "GUILD_OVERVIEW_TIER_2_LABEL";
    break;
  case 3:
    pcVar17 = "GUILD_OVERVIEW_TIER_3_LABEL";
    break;
  case 4:
    pcVar17 = "GUILD_OVERVIEW_TIER_4_LABEL";
    break;
  case 5:
    pcVar17 = "GUILD_OVERVIEW_TIER_5_LABEL";
    break;
  case 6:
    pcVar17 = "GUILD_OVERVIEW_TIER_6_LABEL";
    break;
  case 7:
    pcVar17 = "GUILD_OVERVIEW_TIER_7_LABEL";
    break;
  case 8:
    pcVar17 = "GUILD_OVERVIEW_TIER_8_LABEL";
    break;
  case 9:
    pcVar17 = "GUILD_OVERVIEW_TIER_9_LABEL";
    break;
  case 10:
    pcVar17 = "GUILD_OVERVIEW_TIER_10_LABEL";
    break;
  default:
    puVar18 = &DAT_101d91650;
    goto LAB_100237c1c;
  }
  puVar18 = (undefined8 *)FUN_1004e0150(pcVar17,0);
LAB_100237c1c:
  FUN_1006513c0(param_1 + 0x657,puVar18);
  FUN_1000f28d0(&local_90,*(undefined4 *)(param_2 + 0x98),0);
  FUN_1000f28d0(auStack_a0,*(int *)(param_2 + 0x98) + 1,0);
  uVar16 = FUN_1004e0150("MENU_PROFILE_GUILD_OVERVIEW_PRIMETIME_VALUE",0);
  thunk_FUN_1004e439c(auStack_b0,uVar16);
  FUN_1004e3120(auStack_c0,"[START_HOUR]");
  FUN_1004e3bc4(auStack_b0,0,auStack_c0,&local_90);
  if (local_b8 != (void *)0x0) {
    operator_delete__(local_b8);
  }
  FUN_1004e3120(auStack_c0,"[END_HOUR]");
  FUN_1004e3bc4(auStack_b0,0,auStack_c0,auStack_a0);
  if (local_b8 != (void *)0x0) {
    operator_delete__(local_b8);
  }
  FUN_1006513c0(param_1 + 0x132c,auStack_b0);
  FUN_10023705c(param_1);
  lVar15 = FUN_10015d3ec();
  if ((-1 < (int)*(uint *)(lVar15 + 0x5624)) &&
     (*(int *)(*(long *)(lVar15 + 0x5268) + (ulong)*(uint *)(lVar15 + 0x5624) * 0x108 + 0x50) == 4))
  {
    lVar15 = FUN_10015d3ec();
    bVar29 = *(byte *)(param_2 + 0x197);
    uVar19 = (ulong)bVar29;
    bVar11 = *(byte *)(lVar15 + 0x548f);
    sVar33 = *(size_t *)(param_2 + 0x188);
    if (-1 < (char)bVar29) {
      sVar33 = uVar19;
    }
    sVar32 = *(size_t *)(lVar15 + 0x5480);
    if (-1 < (char)bVar11) {
      sVar32 = (ulong)bVar11;
    }
    if (sVar33 == sVar32) {
      psVar9 = *(string **)psVar1;
      if (-1 < (char)bVar29) {
        psVar9 = psVar1;
      }
      pbVar26 = *(byte **)(lVar15 + 0x5478);
      if (-1 < (char)bVar11) {
        pbVar26 = (byte *)(lVar15 + 0x5478);
      }
      if ((char)bVar29 < '\0') {
        if (sVar33 == 0) goto LAB_100237e38;
        iVar14 = _memcmp(psVar9,pbVar26,sVar33);
        uVar22 = *(uint *)((long)param_1 + 0x167c);
        if (iVar14 != 0) {
          uVar23 = 0;
          goto LAB_100237d9c;
        }
      }
      else {
        if (sVar33 != 0) {
          if ((uint)*pbVar26 == ((uint)*(string **)psVar1 & 0xff)) {
            pbVar25 = (byte *)(param_2 + 0x181);
            do {
              uVar19 = uVar19 - 1;
              pbVar26 = pbVar26 + 1;
              if (uVar19 == 0) goto LAB_100237e38;
              bVar29 = *pbVar25;
              pbVar25 = pbVar25 + 1;
            } while (bVar29 == *pbVar26);
          }
          goto LAB_100237d94;
        }
LAB_100237e38:
        uVar22 = *(uint *)((long)param_1 + 0x167c);
      }
      uVar23 = 4;
      goto LAB_100237d9c;
    }
  }
LAB_100237d94:
  uVar23 = 0;
  uVar22 = *(uint *)((long)param_1 + 0x167c);
LAB_100237d9c:
  *(uint *)((long)param_1 + 0x167c) = uVar23 | uVar22 & 0xfffffffb;
  *(uint *)((long)param_1 + 0x1c6c) = *(uint *)((long)param_1 + 0x1c6c) & 0xfffffffb | uVar23;
  FUN_100236f6c(param_1);
  (**(code **)(*param_1 + 0x150))(param_1);
  if (local_a8 != (void *)0x0) {
    operator_delete__(local_a8);
  }
  if (local_98 != (void *)0x0) {
    operator_delete__(local_98);
  }
  if (local_88 != (void *)0x0) {
    operator_delete__(local_88);
  }
  if (local_70 != (void *)0x0) {
    operator_delete__(local_70);
  }
  return;
}




void FUN_100237e44(long param_1,long param_2)

{
  int iVar1;
  
  iVar1 = FUN_1004f1680(param_2);
  if ((iVar1 != 0) && (*(char *)(param_2 + 0x44) != '\0')) {
    FUN_100192d64(param_1 + 0x9a90,0,0);
    return;
  }
  FUN_10023705c(param_1);
  return;
}




void FUN_100237e98(long param_1,long param_2)

{
  int iVar1;
  
  iVar1 = FUN_1004f1680(param_2);
  if ((iVar1 != 0) && (*(char *)(param_2 + 0x44) != '\0')) {
    FUN_100192d64(param_1 + 0x9a90,0,0);
    return;
  }
  FUN_10023705c(param_1);
  return;
}




void FUN_100237eec(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  int iVar2;
  
  uVar1 = *(ulong *)(param_2 + 8);
  if (-1 < (char)*(byte *)(param_2 + 0x17)) {
    uVar1 = (ulong)*(byte *)(param_2 + 0x17);
  }
  if ((uVar1 == 10) &&
     (iVar2 = std::string::compare(param_2,0,(char *)0xffffffffffffffff,0x1013e7341), iVar2 == 0)) {
    FUN_100143bec(FUN_100237f50,FUN_100237f54);
    return;
  }
  return;
}




void FUN_100237f50(void)

{
  return;
}




void FUN_100237f54(void)

{
  return;
}




void thunk_FUN_100237eec(void)

{
  FUN_100237eec();
  return;
}




uint FUN_100237f5c(void)

{
  uint uVar1;
  long lVar2;
  
  lVar2 = FUN_100143bc4();
  if ((*(int *)(lVar2 + 8) == 0) || (*(uint *)(lVar2 + 0x10) <= *(uint *)(lVar2 + 0xc))) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_100143c4c();
    uVar1 = uVar1 ^ 1;
  }
  return uVar1;
}




void FUN_100237f94(long param_1,undefined1 param_2)

{
  undefined8 uVar1;
  
  *(undefined1 *)(param_1 + 0x3533a) = param_2;
  uVar1 = FUN_100143bc4();
  FUN_100234ccc(param_1,uVar1);
  return;
}




void FUN_100237fc8(long param_1,undefined8 param_2)

{
  undefined8 local_138;
  undefined1 auStack_130 [24];
  undefined1 auStack_118 [24];
  undefined1 auStack_100 [24];
  undefined1 auStack_e8 [24];
  undefined1 auStack_d0 [24];
  undefined1 auStack_b8 [24];
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined1 auStack_70 [24];
  undefined1 local_58;
  
  local_138 = *(undefined8 *)(param_1 + 0x34d98);
  FUN_10003330c(auStack_130,param_1 + 0x34da0);
  FUN_10003330c(auStack_118,param_1 + 0x34db8);
  FUN_10003330c(auStack_100,param_1 + 0x34dd0);
  FUN_10003330c(auStack_e8,param_1 + 0x34de8);
  FUN_10003330c(auStack_d0,param_1 + 0x34e00);
  FUN_10003330c(auStack_b8,param_1 + 0x34e18);
  FUN_10003330c(auStack_a0,param_1 + 0x34e30);
  FUN_10003330c(auStack_88,param_1 + 0x34e48);
  FUN_10003330c(auStack_70,param_1 + 0x34e60);
  local_58 = *(undefined1 *)(param_1 + 0x34e78);
  FUN_1004e357c(param_2,auStack_100);
  FUN_1001dd630(param_1 + 0x176a0,&local_138);
  FUN_100221380(param_1 + 0x176a0);
  FUN_100143bd4((undefined8 *)(param_1 + 0x34d98),FUN_10023812c,FUN_10023816c);
  FUN_100143e0c(&local_138);
  return;
}




void FUN_10023812c(void)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = FUN_10015d3ec();
  lVar2 = FUN_10015d3ec();
  FUN_1001634c4(uVar1,lVar2 + 0x5478,1);
  return;
}




void FUN_100238160(long param_1)

{
  if (param_1 != 0) {
    FUN_100236f6c();
    return;
  }
  return;
}




void FUN_10023816c(void)

{
  return;
}




void FUN_100238170(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  void *local_38 [2];
  char local_21;
  
  uVar1 = FUN_10002f320();
  FUN_10001549c(local_38,"guildChest");
  FUN_100031670(uVar1,local_38,param_1);
  if (local_21 < '\0') {
    operator_delete(local_38[0]);
  }
  FUN_100143bec(FUN_100237f50,FUN_100237f54);
  lVar2 = FUN_10015d3ec();
  FUN_100109678(*(undefined4 *)(lVar2 + 0x5118),param_1);
  return;
}




void FUN_1002381f4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  void *local_38 [2];
  char local_21;
  
  FUN_100143bec(FUN_100237f50,FUN_100237f54);
  uVar1 = FUN_10002f320();
  FUN_10001549c(local_38,"guildChest");
  FUN_100031740(uVar1,local_38);
  if (local_21 < '\0') {
    operator_delete(local_38[0]);
  }
  uVar1 = FUN_1004e0150("GENERIC_DIALOG_ERROR",0);
  uVar2 = FUN_1004e0150("MENU_DIALOG_CHEST_REDEMPTION_FAILIRE",0);
  uVar3 = FUN_1004e0150("GENERIC_DIALOG_OKAY",0);
  FUN_1001e3090(uVar1,uVar2,uVar3,0,0);
  return;
}




long * FUN_1002382ac(long *param_1)

{
  bool bVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  puVar2 = (undefined8 *)FUN_10064e20c();
  *puVar2 = &PTR_FUN_1014776f8;
  puVar2 = puVar2 + 0x17;
  thunk_FUN_1001a7cf4(puVar2);
  (**(code **)(*param_1 + 0x78))(param_1,puVar2,1);
  bVar1 = false;
  if ((*(float *)(param_1 + 0x21) == 0.5) &&
     (bVar1 = false, !NAN(*(float *)((long)param_1 + 0x10c)))) {
    bVar1 = *(float *)((long)param_1 + 0x10c) == 0.5;
  }
  if (!bVar1) {
    param_1[0x21] = (long)&DAT_3f0000003f000000;
    FUN_1000200a0(puVar2);
  }
  uVar3 = FUN_100345b94();
  uVar3 = FUN_10034c450(uVar3,"*KindredMenuGuildBuffMesh*");
  FUN_1001a812c(puVar2,uVar3);
  return param_1;
}




void FUN_100238344(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_1014776f8;
  thunk_FUN_1001a7dd8(param_1 + 0x17);
  pvVar1 = (void *)FUN_10064e2bc(param_1);
  operator_delete(pvVar1);
  return;
}




long * FUN_100238378(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  uint uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  code *local_90;
  long *plStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  
  puVar7 = (undefined8 *)FUN_100269da8();
  lVar9 = 0;
  *puVar7 = &PTR_thunk_FUN_100238998_101477840;
  do {
    FUN_10023ae14((long)param_1 + lVar9 + 200);
    lVar9 = lVar9 + 5000;
  } while (lVar9 != 55000);
  plVar10 = param_1 + 0x1af4;
  thunk_FUN_100652c08(plVar10);
  plVar1 = param_1 + 0x1b12;
  thunk_FUN_100650e64(plVar1);
  plVar2 = param_1 + 0x1b38;
  thunk_FUN_100650e64(plVar2);
  plVar3 = param_1 + 0x1b5e;
  thunk_FUN_100652c08(plVar3);
  plVar4 = param_1 + 0x1b7c;
  thunk_FUN_1006543ec(plVar4);
  plVar5 = param_1 + 0x1bb0;
  FUN_10053077c(plVar5,0);
  thunk_FUN_1001c0018(param_1 + 0x1c57,0);
  FUN_10023b0ac(param_1 + 0x1ce2);
  thunk_FUN_1001ceb64(param_1 + 0x230b,0);
  *(undefined8 *)((long)param_1 + 0x11964) = 0;
  *(undefined8 *)((long)param_1 + 0x1195c) = 0;
  param_1[0x2329] = 0;
  param_1[9000] = 0;
  param_1[0x232b] = 0;
  param_1[0x232a] = 0;
  plVar11 = param_1 + 0x19;
  (**(code **)(*param_1 + 0x78))(param_1,plVar4,1);
  FUN_100642bd8(plVar4,plVar5,1);
  FUN_1005308f8(plVar5,plVar10,1);
  FUN_1005308f8(plVar5,plVar1,1);
  FUN_1005308f8(plVar5,plVar2,1);
  FUN_1005308f8(plVar5,plVar3,1);
  lVar9 = 0xb;
  do {
    FUN_1005308f8(plVar5,plVar11,1);
    plVar11 = plVar11 + 0x271;
    lVar9 = lVar9 + -1;
  } while (lVar9 != 0);
  FUN_1005308f8(plVar5,param_1 + 0x1ce2,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x1c57,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x230b,1);
  FUN_100530adc(plVar5,0,1);
  FUN_100652cac(plVar10,PTR_s_build___MenuPartsCommon_tga_101854970,"black_background");
  uVar6 = *(uint *)((long)param_1 + 0xd824);
  if ((uVar6 & 0x7f80) != 0x3f80) {
    *(uint *)((long)param_1 + 0xd824) = uVar6 & 0xffff807f | 0x3f80;
    FUN_1000200a0(plVar10);
  }
  FUN_100651594(plVar1,PTR_s_build___Fonts_Brandon_Light_80_f_10184e1d0,&DAT_10115a168);
  uVar8 = FUN_1004e0150("MENU_GUILD_SEASON_REWARDS_HEADER_TITLE",0);
  FUN_1006513c0(plVar1,uVar8);
  FUN_100651700(plVar1,3);
  FUN_100651594(plVar2,PTR_s_build___Fonts_Brandon_Regular_36_10184e1f0,&DAT_10115a168);
  uVar8 = FUN_1004e0150("MENU_GUILD_SEASON_REWARDS_HEADER_SUBTITLE",0);
  FUN_1006513c0(plVar2,uVar8);
  uVar6 = *(uint *)((long)param_1 + 0xda44);
  if ((uVar6 & 0x7f80) != 0x2600) {
    *(uint *)((long)param_1 + 0xda44) = uVar6 & 0xffff8000 | uVar6 & 0x7f | 0x2600;
    FUN_1000200a0(plVar2);
  }
  FUN_100651700(plVar2,3);
  FUN_100652cac(plVar3,PTR_s_build___MenuPartsCommon_tga_101854970,"vert_glass_shadow");
  FUN_100652dd4(plVar3,&DAT_10115a164,2);
  uVar6 = *(uint *)((long)param_1 + 0xdb74);
  if ((uVar6 & 0x7f80) != 0x3300) {
    *(uint *)((long)param_1 + 0xdb74) = uVar6 & 0xffff8000 | uVar6 & 0x7f | 0x3300;
    FUN_1000200a0(plVar3);
  }
  lVar9 = 0;
  plVar10 = param_1 + 0x19;
  do {
    FUN_100238790(plVar10,lVar9,9);
    lVar9 = lVar9 + 10;
    plVar10 = plVar10 + 0x271;
  } while (lVar9 != 100);
  FUN_100238790(param_1 + 0x1883,100,0);
  local_68 = DAT_101dbd460;
  local_90 = thunk_FUN_10023a3f8;
  local_78 = 0;
  uStack_70 = 0;
  local_80 = 0;
  plStack_88 = param_1;
  FUN_10001554c(param_1 + 0x1c69,&local_90);
  local_68 = DAT_101dbd48c;
  local_90 = thunk_FUN_10023a3f8;
  local_78 = 0;
  uStack_70 = 0;
  local_80 = 0;
  plStack_88 = param_1;
  FUN_10001554c(param_1 + 0x1c69,&local_90);
  return param_1;
}




void FUN_100238790(long param_1,int param_2,uint param_3)

{
  uint uVar1;
  undefined8 uVar2;
  uint uVar3;
  long *plVar4;
  ulong uVar5;
  undefined1 auStack_80 [8];
  void *local_78;
  undefined1 auStack_70 [8];
  void *local_68;
  undefined1 auStack_60 [8];
  void *local_58;
  
  *(int *)(param_1 + 0x1384) = param_2;
  uVar1 = *(uint *)(param_1 + 0x10c);
  uVar3 = 0x66;
  if ((param_2 / 10 & 1U) != 0) {
    uVar3 = 0x33;
  }
  if (uVar3 != (uVar1 >> 7 & 0xff)) {
    *(uint *)(param_1 + 0x10c) = uVar1 & 0xffff8000 | uVar1 & 0x7f | uVar3 << 7;
    FUN_1000200a0(param_1 + 0x88);
  }
  FUN_1004e313c(auStack_60);
  if (param_2 < 1) {
    uVar2 = FUN_1004e0150("MENU_GUILD_SEASON_REWARDS_GUILD_FORMED",0);
    FUN_1006513c0(param_1 + 0xc28,uVar2);
  }
  else {
    uVar2 = FUN_1004e0150("MENU_GUILD_SEASON_REWARDS_BASE_LEVEL",0);
    thunk_FUN_1004e439c(auStack_70,uVar2);
    FUN_1004e38ac(auStack_60,"%d");
    FUN_1004e3120(auStack_80,"[NUMBER]");
    FUN_1004e3bc4(auStack_70,0,auStack_80,auStack_60);
    if (local_78 != (void *)0x0) {
      operator_delete__(local_78);
    }
    FUN_1006513c0(param_1 + 0xc28,auStack_70);
    if (local_68 != (void *)0x0) {
      operator_delete__(local_68);
    }
  }
  if (0 < (int)param_3) {
    plVar4 = (long *)(param_1 + 0x178);
    uVar5 = (ulong)param_3;
    do {
      *(uint *)((long)plVar4 + 0x84) = *(uint *)((long)plVar4 + 0x84) | 4;
      FUN_100651594(plVar4,PTR_s_build___Fonts_Brandon_Bold_40_fo_10184e230,&DAT_10115a168);
      if ((*(float *)(plVar4 + 9) != 0.6) || (*(float *)((long)plVar4 + 0x4c) != 0.6)) {
        plVar4[9] = 0x3f19999a3f19999a;
        FUN_1000200a0(plVar4);
      }
      FUN_1004e38ac(auStack_60,"%d");
      (**(code **)(*plVar4 + 0x138))(plVar4,auStack_60);
      plVar4 = plVar4 + 0x26;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  if (local_58 != (void *)0x0) {
    operator_delete__(local_58);
  }
  return;
}




void thunk_FUN_10023a3f8(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  void *pvStack_138;
  void *pvStack_130;
  undefined7 uStack_128;
  char cStack_121;
  char cStack_111;
  undefined4 uStack_110;
  undefined8 uStack_10c;
  undefined1 auStack_100 [8];
  void *pvStack_f8;
  undefined1 auStack_f0 [8];
  void *pvStack_e8;
  undefined **ppuStack_e0;
  undefined1 auStack_d8 [16];
  long lStack_c8;
  code *pcStack_c0;
  long lStack_b0;
  undefined8 uStack_90;
  void *pvStack_88;
  void *pvStack_80;
  char cStack_69;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_38;
  
  thunk_FUN_1001cd434(&ppuStack_e0);
  uVar2 = FUN_1004e0150("MAIN_SEASON_GUILD_REWARDS_GENERIC_TOOLTIP",0);
  thunk_FUN_1004e439c(auStack_f0,uVar2);
  FUN_1004e3120(&pvStack_138,"[SEASON_NAME]");
  FUN_1000f0f78(auStack_100,0,0,0);
  FUN_1004e3bc4(auStack_f0,0,&pvStack_138,auStack_100);
  if (pvStack_f8 != (void *)0x0) {
    operator_delete__(pvStack_f8);
  }
  if (pvStack_130 != (void *)0x0) {
    operator_delete__(pvStack_130);
  }
  thunk_FUN_1004e439c(&pvStack_138,auStack_f0);
  FUN_10003330c(&uStack_128,&DAT_101d91198);
  uStack_110 = 1;
  uStack_10c = 0x41a00000;
  FUN_10003c048(auStack_d8,&pvStack_138);
  if (cStack_111 < '\0') {
    operator_delete((void *)CONCAT17(cStack_121,uStack_128));
  }
  if (pvStack_130 != (void *)0x0) {
    operator_delete__(pvStack_130);
  }
  lStack_b0 = param_1 + 0xe340;
  uStack_38 = 2;
  uStack_50 = 0x3dcccccd;
  iVar1 = FUN_100126c88();
  uStack_4c = 0x447a0000;
  if (iVar1 == 0) {
    uStack_4c = 0x44480000;
  }
  uVar2 = FUN_1004e0150("GENERIC_DIALOG_MORE_INFO",0);
  FUN_1000153b4(&uStack_90,uVar2);
  pcStack_c0 = FUN_10023a5f0;
  lStack_c8 = param_1;
  FUN_10001549c(&pvStack_138,"guildRewardsSeasonLabel");
  FUN_1001cefb8(param_1 + 0x11858,&pvStack_138,&ppuStack_e0);
  if (cStack_121 < '\0') {
    operator_delete(pvStack_138);
  }
  if (pvStack_e8 != (void *)0x0) {
    operator_delete__(pvStack_e8);
  }
  ppuStack_e0 = &PTR_FUN_1014666e0;
  if (cStack_69 < '\0') {
    operator_delete(pvStack_80);
  }
  if (pvStack_88 != (void *)0x0) {
    operator_delete__(pvStack_88);
    uStack_90 = 0;
    pvStack_88 = (void *)0x0;
  }
  FUN_10003c1ec(auStack_d8,1);
  return;
}




long * thunk_FUN_100238378(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  uint uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  code *pcStack_90;
  long *plStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  
  puVar7 = (undefined8 *)FUN_100269da8();
  lVar9 = 0;
  *puVar7 = &PTR_thunk_FUN_100238998_101477840;
  do {
    FUN_10023ae14((long)param_1 + lVar9 + 200);
    lVar9 = lVar9 + 5000;
  } while (lVar9 != 55000);
  plVar10 = param_1 + 0x1af4;
  thunk_FUN_100652c08(plVar10);
  plVar1 = param_1 + 0x1b12;
  thunk_FUN_100650e64(plVar1);
  plVar2 = param_1 + 0x1b38;
  thunk_FUN_100650e64(plVar2);
  plVar3 = param_1 + 0x1b5e;
  thunk_FUN_100652c08(plVar3);
  plVar4 = param_1 + 0x1b7c;
  thunk_FUN_1006543ec(plVar4);
  plVar5 = param_1 + 0x1bb0;
  FUN_10053077c(plVar5,0);
  thunk_FUN_1001c0018(param_1 + 0x1c57,0);
  FUN_10023b0ac(param_1 + 0x1ce2);
  thunk_FUN_1001ceb64(param_1 + 0x230b,0);
  *(undefined8 *)((long)param_1 + 0x11964) = 0;
  *(undefined8 *)((long)param_1 + 0x1195c) = 0;
  param_1[0x2329] = 0;
  param_1[9000] = 0;
  param_1[0x232b] = 0;
  param_1[0x232a] = 0;
  plVar11 = param_1 + 0x19;
  (**(code **)(*param_1 + 0x78))(param_1,plVar4,1);
  FUN_100642bd8(plVar4,plVar5,1);
  FUN_1005308f8(plVar5,plVar10,1);
  FUN_1005308f8(plVar5,plVar1,1);
  FUN_1005308f8(plVar5,plVar2,1);
  FUN_1005308f8(plVar5,plVar3,1);
  lVar9 = 0xb;
  do {
    FUN_1005308f8(plVar5,plVar11,1);
    plVar11 = plVar11 + 0x271;
    lVar9 = lVar9 + -1;
  } while (lVar9 != 0);
  FUN_1005308f8(plVar5,param_1 + 0x1ce2,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x1c57,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x230b,1);
  FUN_100530adc(plVar5,0,1);
  FUN_100652cac(plVar10,PTR_s_build___MenuPartsCommon_tga_101854970,"black_background");
  uVar6 = *(uint *)((long)param_1 + 0xd824);
  if ((uVar6 & 0x7f80) != 0x3f80) {
    *(uint *)((long)param_1 + 0xd824) = uVar6 & 0xffff807f | 0x3f80;
    FUN_1000200a0(plVar10);
  }
  FUN_100651594(plVar1,PTR_s_build___Fonts_Brandon_Light_80_f_10184e1d0,&DAT_10115a168);
  uVar8 = FUN_1004e0150("MENU_GUILD_SEASON_REWARDS_HEADER_TITLE",0);
  FUN_1006513c0(plVar1,uVar8);
  FUN_100651700(plVar1,3);
  FUN_100651594(plVar2,PTR_s_build___Fonts_Brandon_Regular_36_10184e1f0,&DAT_10115a168);
  uVar8 = FUN_1004e0150("MENU_GUILD_SEASON_REWARDS_HEADER_SUBTITLE",0);
  FUN_1006513c0(plVar2,uVar8);
  uVar6 = *(uint *)((long)param_1 + 0xda44);
  if ((uVar6 & 0x7f80) != 0x2600) {
    *(uint *)((long)param_1 + 0xda44) = uVar6 & 0xffff8000 | uVar6 & 0x7f | 0x2600;
    FUN_1000200a0(plVar2);
  }
  FUN_100651700(plVar2,3);
  FUN_100652cac(plVar3,PTR_s_build___MenuPartsCommon_tga_101854970,"vert_glass_shadow");
  FUN_100652dd4(plVar3,&DAT_10115a164,2);
  uVar6 = *(uint *)((long)param_1 + 0xdb74);
  if ((uVar6 & 0x7f80) != 0x3300) {
    *(uint *)((long)param_1 + 0xdb74) = uVar6 & 0xffff8000 | uVar6 & 0x7f | 0x3300;
    FUN_1000200a0(plVar3);
  }
  lVar9 = 0;
  plVar10 = param_1 + 0x19;
  do {
    FUN_100238790(plVar10,lVar9,9);
    lVar9 = lVar9 + 10;
    plVar10 = plVar10 + 0x271;
  } while (lVar9 != 100);
  FUN_100238790(param_1 + 0x1883,100,0);
  uStack_68 = DAT_101dbd460;
  pcStack_90 = thunk_FUN_10023a3f8;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_80 = 0;
  plStack_88 = param_1;
  FUN_10001554c(param_1 + 0x1c69,&pcStack_90);
  uStack_68 = DAT_101dbd48c;
  pcStack_90 = thunk_FUN_10023a3f8;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_80 = 0;
  plStack_88 = param_1;
  FUN_10001554c(param_1 + 0x1c69,&pcStack_90);
  return param_1;
}




void FUN_100238998(undefined8 *param_1)

{
  long lVar1;
  long lVar3;
  undefined8 *puVar2;
  
  *param_1 = &PTR_thunk_FUN_100238998_101477840;
  FUN_100238b6c();
  if ((void *)param_1[0x232c] != (void *)0x0) {
    operator_delete__((void *)param_1[0x232c]);
    param_1[0x232c] = 0;
    param_1[0x232b] = 0;
  }
  if (*(char *)((long)param_1 + 0x11957) < '\0') {
    operator_delete((void *)param_1[9000]);
  }
  thunk_FUN_1001cec4c(param_1 + 0x230b);
  FUN_100238bd0(param_1 + 0x1ce2);
  param_1[0x1c57] = &PTR_FUN_1014653b8;
  param_1[0x1cb6] = &PTR_FUN_10145eb78;
  param_1[0x1ccd] = &PTR_FUN_10145ecf0;
  if ((void *)param_1[0x1cde] != (void *)0x0) {
    operator_delete__((void *)param_1[0x1cde]);
    param_1[0x1cde] = 0;
    param_1[0x1cdd] = 0;
  }
  FUN_100651068(param_1 + 0x1cb6);
  thunk_FUN_100651068(param_1 + 0x1c90);
  FUN_10064221c(param_1 + 0x1c7f);
  thunk_FUN_10064e2bc(param_1 + 0x1c68);
  FUN_10064221c(param_1 + 0x1c57);
  thunk_FUN_100530784(param_1 + 0x1bb0);
  FUN_10064e2bc(param_1 + 0x1b7c);
  param_1[0x1b5e] = &PTR_FUN_1014a7108;
  param_1[0x1b75] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x1b78);
  FUN_10064e2bc(param_1 + 0x1b5e);
  thunk_FUN_100651068(param_1 + 0x1b38);
  thunk_FUN_100651068(param_1 + 0x1b12);
  param_1[0x1af4] = &PTR_FUN_1014a7108;
  param_1[0x1b0b] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x1b0e);
  FUN_10064e2bc(param_1 + 0x1af4);
  puVar2 = param_1 + 0x1883;
  lVar3 = -55000;
  do {
    lVar1 = FUN_10023b344(puVar2);
    puVar2 = (undefined8 *)(lVar1 + -5000);
    lVar3 = lVar3 + 5000;
  } while (lVar3 != 0);
  FUN_10064e2bc(param_1);
  return;
}




void FUN_100238b6c(long param_1)

{
  uint *puVar1;
  long *plVar2;
  uint uVar3;
  ulong uVar4;
  
  puVar1 = (uint *)(param_1 + 0x11958);
  uVar3 = *puVar1;
  if (uVar3 != 0) {
    uVar4 = 0;
    do {
      plVar2 = *(long **)(*(long *)(param_1 + 0x11960) + uVar4 * 8);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 8))();
        uVar3 = *puVar1;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar3);
  }
  if (*(long *)(param_1 + 0x11960) != 0) {
    *puVar1 = 0;
  }
  return;
}




void FUN_100238bd0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_101477aa8;
  if ((void *)param_1[0x627] != (void *)0x0) {
    operator_delete__((void *)param_1[0x627]);
    param_1[0x627] = 0;
    param_1[0x626] = 0;
  }
  thunk_FUN_1001cd8c0(param_1 + 0x1b6);
  param_1[0x35] = &PTR_FUN_101460ab8;
  param_1[0x195] = &PTR_FUN_1014a7108;
  param_1[0x1ac] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x1af);
  FUN_10064e2bc(param_1 + 0x195);
  param_1[0x177] = &PTR_FUN_1014a7108;
  param_1[0x18e] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x191);
  FUN_10064e2bc(param_1 + 0x177);
  FUN_100191808(param_1 + 0x10c);
  FUN_100191808(param_1 + 0xa1);
  thunk_FUN_100651068(param_1 + 0x7b);
  param_1[0x5d] = &PTR_FUN_1014a7108;
  param_1[0x74] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x77);
  FUN_10064e2bc(param_1 + 0x5d);
  FUN_10064221c(param_1 + 0x4c);
  FUN_10064e2bc(param_1 + 0x35);
  param_1[0x17] = &PTR_FUN_1014a7108;
  param_1[0x2e] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x31);
  FUN_10064e2bc(param_1 + 0x17);
  FUN_10064e2bc(param_1);
  return;
}




void thunk_FUN_10023b344(void)

{
  FUN_10023b344();
  return;
}




void thunk_FUN_100238998(undefined8 *param_1)

{
  long lVar1;
  long lVar3;
  undefined8 *puVar2;
  
  *param_1 = &PTR_thunk_FUN_100238998_101477840;
  FUN_100238b6c();
  if ((void *)param_1[0x232c] != (void *)0x0) {
    operator_delete__((void *)param_1[0x232c]);
    param_1[0x232c] = 0;
    param_1[0x232b] = 0;
  }
  if (*(char *)((long)param_1 + 0x11957) < '\0') {
    operator_delete((void *)param_1[9000]);
  }
  thunk_FUN_1001cec4c(param_1 + 0x230b);
  FUN_100238bd0(param_1 + 0x1ce2);
  param_1[0x1c57] = &PTR_FUN_1014653b8;
  param_1[0x1cb6] = &PTR_FUN_10145eb78;
  param_1[0x1ccd] = &PTR_FUN_10145ecf0;
  if ((void *)param_1[0x1cde] != (void *)0x0) {
    operator_delete__((void *)param_1[0x1cde]);
    param_1[0x1cde] = 0;
    param_1[0x1cdd] = 0;
  }
  FUN_100651068(param_1 + 0x1cb6);
  thunk_FUN_100651068(param_1 + 0x1c90);
  FUN_10064221c(param_1 + 0x1c7f);
  thunk_FUN_10064e2bc(param_1 + 0x1c68);
  FUN_10064221c(param_1 + 0x1c57);
  thunk_FUN_100530784(param_1 + 0x1bb0);
  FUN_10064e2bc(param_1 + 0x1b7c);
  param_1[0x1b5e] = &PTR_FUN_1014a7108;
  param_1[0x1b75] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x1b78);
  FUN_10064e2bc(param_1 + 0x1b5e);
  thunk_FUN_100651068(param_1 + 0x1b38);
  thunk_FUN_100651068(param_1 + 0x1b12);
  param_1[0x1af4] = &PTR_FUN_1014a7108;
  param_1[0x1b0b] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x1b0e);
  FUN_10064e2bc(param_1 + 0x1af4);
  puVar2 = param_1 + 0x1883;
  lVar3 = -55000;
  do {
    lVar1 = FUN_10023b344(puVar2);
    puVar2 = (undefined8 *)(lVar1 + -5000);
    lVar3 = lVar3 + 5000;
  } while (lVar3 != 0);
  FUN_10064e2bc(param_1);
  return;
}




void FUN_100238ce8(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_100238998();
  operator_delete(pvVar1);
  return;
}




void FUN_100238cfc(void)

{
  return;
}




void FUN_100238d00(long param_1,long param_2)

{
  undefined8 *puVar1;
  string *this;
  size_t sVar2;
  undefined8 *puVar3;
  size_t sVar4;
  string sVar5;
  byte bVar6;
  byte bVar7;
  bool bVar8;
  int iVar9;
  long lVar10;
  uint uVar11;
  ulong uVar12;
  string *psVar13;
  byte *pbVar14;
  void *pvVar15;
  string *psVar16;
  byte *pbVar17;
  byte *pbVar18;
  size_t sVar19;
  undefined1 auStack_70 [8];
  void *local_68;
  undefined1 auStack_60 [8];
  void *local_58;
  
  this = (string *)(param_1 + 72000);
  bVar7 = *(byte *)(param_1 + 0x11957);
  uVar12 = (ulong)bVar7;
  sVar19 = *(size_t *)(param_1 + 0x11948);
  if (-1 < (char)bVar7) {
    sVar19 = uVar12;
  }
  sVar2 = DAT_101d911a0;
  if (-1 < (char)DAT_101d911a8._7_1_) {
    sVar2 = (ulong)DAT_101d911a8._7_1_;
  }
  if (sVar19 == sVar2) {
    psVar16 = *(string **)this;
    if (-1 < (char)bVar7) {
      psVar16 = this;
    }
    pbVar18 = DAT_101d91198;
    if (-1 < (char)DAT_101d911a8._7_1_) {
      pbVar18 = (byte *)&DAT_101d91198;
    }
    if ((char)bVar7 < '\0') {
      if ((sVar19 == 0) || (iVar9 = _memcmp(psVar16,pbVar18,sVar19), iVar9 == 0))
      goto LAB_100238dec;
      goto LAB_100238f0c;
    }
    if (sVar19 != 0) {
      if ((uint)*pbVar18 == ((uint)*(string **)this & 0xff)) {
        pbVar14 = (byte *)(param_1 + 0x11941);
        pbVar17 = pbVar18;
        do {
          uVar12 = uVar12 - 1;
          pbVar17 = pbVar17 + 1;
          if (uVar12 == 0) goto LAB_100238dec;
          bVar7 = *pbVar14;
          pbVar14 = pbVar14 + 1;
        } while (bVar7 == *pbVar17);
      }
      goto LAB_100238f0c;
    }
LAB_100238dec:
    puVar1 = (undefined8 *)(param_2 + 0x180);
    bVar7 = *(byte *)(param_2 + 0x197);
    uVar12 = (ulong)bVar7;
    sVar2 = *(size_t *)(param_2 + 0x188);
    if (-1 < (char)bVar7) {
      sVar2 = uVar12;
    }
    if (sVar2 == sVar19) {
      if ((char)bVar7 < '\0') {
        if (sVar19 != 0) {
          iVar9 = _memcmp((void *)*puVar1,pbVar18,sVar19);
          if (iVar9 == 0) goto LAB_100238f0c;
          goto LAB_100238e6c;
        }
      }
      else if (sVar19 != 0) {
        if ((uint)*pbVar18 == ((uint)(void *)*puVar1 & 0xff)) {
          pbVar17 = (byte *)(param_2 + 0x181);
          do {
            uVar12 = uVar12 - 1;
            pbVar18 = pbVar18 + 1;
            if (uVar12 == 0) goto LAB_100238f0c;
            bVar7 = *pbVar17;
            pbVar17 = pbVar17 + 1;
          } while (bVar7 == *pbVar18);
        }
        goto LAB_100238e6c;
      }
      goto LAB_100238f10;
    }
LAB_100238e6c:
    lVar10 = FUN_10015d3ec();
    bVar7 = *(byte *)(param_2 + 0x197);
    uVar12 = (ulong)bVar7;
    bVar6 = *(byte *)(lVar10 + 0x548f);
    sVar19 = *(size_t *)(param_2 + 0x188);
    if (-1 < (char)bVar7) {
      sVar19 = uVar12;
    }
    sVar2 = *(size_t *)(lVar10 + 0x5480);
    if (-1 < (char)bVar6) {
      sVar2 = (ulong)bVar6;
    }
    if (sVar19 != sVar2) goto LAB_100238f0c;
    puVar3 = (void *)*puVar1;
    if (-1 < (char)bVar7) {
      puVar3 = puVar1;
    }
    pbVar18 = *(byte **)(lVar10 + 0x5478);
    if (-1 < (char)bVar6) {
      pbVar18 = (byte *)(lVar10 + 0x5478);
    }
    if ((char)bVar7 < '\0') {
      if (sVar19 == 0) goto LAB_100239120;
      iVar9 = _memcmp(puVar3,pbVar18,sVar19);
      sVar19 = (size_t)(iVar9 == 0);
    }
    else if (sVar19 == 0) {
LAB_100239120:
      sVar19 = 1;
    }
    else {
      if ((uint)*pbVar18 != ((uint)(void *)*puVar1 & 0xff)) goto LAB_100238f0c;
      pbVar17 = (byte *)(param_2 + 0x181);
      do {
        uVar12 = uVar12 - 1;
        pbVar18 = pbVar18 + 1;
        sVar19 = (size_t)(uVar12 == 0);
        if (uVar12 == 0) break;
        bVar7 = *pbVar17;
        pbVar17 = pbVar17 + 1;
      } while (bVar7 == *pbVar18);
    }
  }
  else {
LAB_100238f0c:
    sVar19 = 0;
  }
LAB_100238f10:
  if (*(char *)(param_2 + 0x1d0) != '\0') goto LAB_100238f18;
  bVar7 = *(byte *)(param_2 + 0x197);
  uVar12 = (ulong)bVar7;
  sVar2 = *(size_t *)(param_2 + 0x188);
  if (-1 < (char)bVar7) {
    sVar2 = uVar12;
  }
  bVar6 = *(byte *)(param_1 + 0x11957);
  sVar4 = *(size_t *)(param_1 + 0x11948);
  if (-1 < (char)bVar6) {
    sVar4 = (ulong)bVar6;
  }
  if (sVar2 == sVar4) {
    pvVar15 = *(void **)(param_2 + 0x180);
    puVar1 = pvVar15;
    if (-1 < (char)bVar7) {
      puVar1 = (undefined8 *)(param_2 + 0x180);
    }
    psVar16 = *(string **)this;
    if (-1 < (char)bVar6) {
      psVar16 = this;
    }
    if ((char)bVar7 < '\0') {
      if (sVar2 == 0) goto LAB_100238f18;
      iVar9 = _memcmp(puVar1,psVar16,sVar2);
      bVar8 = iVar9 == 0;
    }
    else {
      if (sVar2 == 0) goto LAB_100238f18;
      if ((uint)(byte)*psVar16 != ((uint)pvVar15 & 0xff)) goto LAB_100239048;
      psVar13 = (string *)(param_2 + 0x181);
      do {
        uVar12 = uVar12 - 1;
        psVar16 = psVar16 + 1;
        if (uVar12 == 0) break;
        sVar5 = *psVar13;
        psVar13 = psVar13 + 1;
      } while (sVar5 == *psVar16);
      bVar8 = uVar12 == 0;
    }
    uVar11 = (uint)!bVar8;
  }
  else {
LAB_100239048:
    uVar11 = 1;
  }
  if ((uVar11 ^ 1 | (uint)sVar19) != 1) {
    return;
  }
LAB_100238f18:
  std::string::operator=(this,(string *)(param_2 + 0x180));
  bVar7 = *(byte *)(param_1 + 0x11957);
  uVar12 = (ulong)bVar7;
  sVar19 = *(size_t *)(param_1 + 0x11948);
  if (-1 < (char)bVar7) {
    sVar19 = uVar12;
  }
  sVar2 = DAT_101d911a0;
  if (-1 < (char)DAT_101d911a8._7_1_) {
    sVar2 = (ulong)DAT_101d911a8._7_1_;
  }
  if (sVar19 == sVar2) {
    psVar16 = *(string **)this;
    if (-1 < (char)bVar7) {
      psVar16 = this;
    }
    pbVar18 = DAT_101d91198;
    if (-1 < (char)DAT_101d911a8._7_1_) {
      pbVar18 = (byte *)&DAT_101d91198;
    }
    if ((char)bVar7 < '\0') {
      if (sVar19 == 0) {
        return;
      }
      iVar9 = _memcmp(psVar16,pbVar18,sVar19);
      if (iVar9 == 0) {
        return;
      }
    }
    else {
      if (sVar19 == 0) {
        return;
      }
      if ((uint)*pbVar18 == ((uint)*(string **)this & 0xff)) {
        pbVar17 = (byte *)(param_1 + 0x11941);
        do {
          uVar12 = uVar12 - 1;
          pbVar18 = pbVar18 + 1;
          if (uVar12 == 0) {
            return;
          }
          bVar7 = *pbVar17;
          pbVar17 = pbVar17 + 1;
        } while (bVar7 == *pbVar18);
      }
    }
  }
  iVar9 = FUN_1004f1680(param_2);
  if (iVar9 != 0) {
    FUN_100239128(param_1,*(undefined4 *)(param_2 + 0x90));
    FUN_1004e3170(auStack_60,param_2 + 0x58);
    FUN_1004e3170(auStack_70,param_2 + 0x40);
    FUN_1002391a0(param_1 + 0xe710,auStack_60,auStack_70,1);
    if (local_68 != (void *)0x0) {
      operator_delete__(local_68);
    }
    if (local_58 != (void *)0x0) {
      operator_delete__(local_58);
    }
    FUN_100239390(param_1,param_2);
  }
  return;
}




void FUN_100239128(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  *(int *)(param_1 + 0x11968) = (int)param_2;
  lVar1 = param_1 + 200;
  lVar2 = 0xb;
  do {
    FUN_10023a7ec(lVar1,param_2);
    lVar1 = lVar1 + 5000;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  FUN_10023aa98(0,param_1,param_1 + 0xe710,param_2,1);
  return;
}




void FUN_1002391a0(long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  long lVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  float fVar6;
  void *local_70;
  undefined8 uStack_68;
  long local_60;
  void *local_58;
  undefined8 uStack_50;
  long local_48;
  
  local_58 = (void *)0x0;
  uStack_50 = 0;
  local_48 = 0;
  FUN_1004e357c(param_2,&local_58);
  local_70 = (void *)0x0;
  uStack_68 = 0;
  local_60 = 0;
  FUN_1004e357c(param_3,&local_70);
  FUN_1000153b4(param_1 + 0x3130,param_3);
  lVar1 = param_1 + 0x1a8;
  FUN_100194b7c(lVar1,param_2);
  fVar6 = 1.0;
  if (param_4 == 0) {
    fVar6 = 0.6;
  }
  bVar2 = false;
  if ((*(float *)(param_1 + 0x1f0) == fVar6) &&
     (bVar2 = false, !NAN(*(float *)(param_1 + 500)) && !NAN(fVar6))) {
    bVar2 = *(float *)(param_1 + 500) == fVar6;
  }
  if (!bVar2) {
    *(float *)(param_1 + 0x1f0) = fVar6;
    *(float *)(param_1 + 500) = fVar6;
    FUN_1000200a0(lVar1);
  }
  uVar5 = *(uint *)(param_1 + 0x45c);
  uVar3 = uVar5 >> 7 & 0xff;
  uVar4 = 0xe5;
  if (param_4 == 0) {
    uVar4 = 0xb2;
  }
  if (uVar3 != uVar4) {
    *(uint *)(param_1 + 0x45c) = uVar5 & 0xffff8000 | uVar5 & 0x7f | uVar4 << 7;
    FUN_1000200a0(param_1 + 0x3d8);
    uVar3 = *(uint *)(param_1 + 0x45c) >> 7 & 0xff;
  }
  FUN_100194bb0((float)uVar3 * 0.003921569 + -0.2,lVar1);
  fVar6 = 1.0;
  if (param_4 == 0) {
    fVar6 = 0.7;
  }
  uVar5 = (uint)(fVar6 * 255.0);
  uVar4 = *(uint *)(param_1 + 0x58c);
  if (uVar5 != (uVar4 >> 7 & 0xff)) {
    *(uint *)(param_1 + 0x58c) = uVar4 & 0xffff8000 | uVar4 & 0x7f | (uVar5 & 0xff) << 7;
    FUN_1000200a0(param_1 + 0x508);
  }
  uVar4 = *(uint *)(param_1 + 0x8e4);
  if (uVar5 != (uVar4 >> 7 & 0xff)) {
    *(uint *)(param_1 + 0x8e4) = uVar4 & 0xffff8000 | uVar4 & 0x7f | (uVar5 & 0xff) << 7;
    FUN_1000200a0(param_1 + 0x860);
  }
  uVar4 = *(uint *)(param_1 + 0x13c);
  if (uVar5 != (uVar4 >> 7 & 0xff)) {
    *(uint *)(param_1 + 0x13c) = uVar4 & 0xffff8000 | uVar4 & 0x7f | (uVar5 & 0xff) << 7;
    FUN_1000200a0(param_1 + 0xb8);
  }
  if ((*(float *)(param_1 + 0x100) != fVar6) || (*(float *)(param_1 + 0x104) != fVar6)) {
    *(float *)(param_1 + 0x100) = fVar6;
    *(float *)(param_1 + 0x104) = fVar6;
    FUN_1000200a0(param_1 + 0xb8);
  }
  FUN_10023b1bc(param_1);
  if (local_60 < 0) {
    operator_delete(local_70);
  }
  if (local_48 < 0) {
    operator_delete(local_58);
  }
  return;
}




void FUN_100239390(void *param_1,long param_2)

{
  uint *puVar1;
  size_t sVar2;
  size_t sVar3;
  undefined8 *puVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  bool bVar10;
  int iVar11;
  long *plVar12;
  byte *pbVar13;
  ulong uVar14;
  long lVar15;
  void *pvVar16;
  byte *pbVar17;
  uint uVar18;
  ulong uVar19;
  ulong unaff_x26;
  ulong unaff_x28;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined1 auStack_c8 [8];
  void *local_c0;
  long local_b8;
  code *local_b0;
  void *local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  ulong local_90;
  undefined4 local_88;
  
  FUN_100238b6c();
  uVar9 = DAT_101dbd48c;
  uVar8 = DAT_101dbd460;
  uVar18 = *(uint *)(param_2 + 0x1f8);
  if (uVar18 != 0) {
    uVar19 = 0;
    puVar1 = (uint *)((long)param_1 + 0x11958);
    do {
      lVar15 = *(long *)(param_2 + 0x200) + uVar19 * 0x38;
      bVar5 = *(byte *)(lVar15 + 0x2f);
      uVar14 = (ulong)bVar5;
      sVar2 = *(size_t *)(lVar15 + 0x20);
      if (-1 < (char)bVar5) {
        sVar2 = uVar14;
      }
      sVar3 = DAT_101d911a0;
      if (-1 < (char)DAT_101d911a8._7_1_) {
        sVar3 = (ulong)DAT_101d911a8._7_1_;
      }
      if (sVar2 == sVar3) {
        pvVar16 = *(void **)(lVar15 + 0x18);
        puVar4 = pvVar16;
        if (-1 < (char)bVar5) {
          puVar4 = (undefined8 *)(lVar15 + 0x18);
        }
        pbVar17 = DAT_101d91198;
        if (-1 < (char)DAT_101d911a8._7_1_) {
          pbVar17 = (byte *)&DAT_101d91198;
        }
        if ((char)bVar5 < '\0') {
          if ((sVar2 != 0) && (iVar11 = _memcmp(puVar4,pbVar17,sVar2), iVar11 != 0))
          goto LAB_1002394d8;
        }
        else if (sVar2 != 0) {
          if ((uint)*pbVar17 == ((uint)pvVar16 & 0xff)) {
            pbVar13 = (byte *)(*(long *)(param_2 + 0x200) + uVar19 * 0x38 + 0x19);
            do {
              uVar14 = uVar14 - 1;
              pbVar17 = pbVar17 + 1;
              if (uVar14 == 0) goto LAB_10023973c;
              bVar5 = *pbVar13;
              pbVar13 = pbVar13 + 1;
            } while (bVar5 == *pbVar17);
          }
          goto LAB_1002394d8;
        }
      }
      else {
LAB_1002394d8:
        operator_new(0x3148);
        local_b8 = FUN_10023b0ac();
        FUN_10023abf8(puVar1,&local_b8);
        FUN_1005308f8((long)param_1 + 0xdd80,local_b8,1);
        lVar15 = local_b8;
        FUN_1004e3170(&local_b0,*(long *)(param_2 + 0x200) + uVar19 * 0x38 + 0x18);
        FUN_1004e3170(auStack_c8,*(long *)(param_2 + 0x200) + uVar19 * 0x38);
        FUN_1002391a0(lVar15,&local_b0,auStack_c8,0);
        if (local_c0 != (void *)0x0) {
          operator_delete__(local_c0);
        }
        if (local_a8 != (void *)0x0) {
          operator_delete__(local_a8);
        }
        iVar6 = *(int *)(*(long *)(param_2 + 0x200) + uVar19 * 0x38 + 0x30);
        iVar7 = iVar6 % 10;
        bVar10 = iVar7 == 0;
        *(bool *)(local_b8 + 0x3140) = bVar10;
        FUN_10023b1bc();
        iVar11 = *(int *)((long)param_1 + 0x11968);
        fVar20 = 0.0;
        if ((iVar11 == iVar6) && (bVar10)) {
          fVar20 = (float)FUN_100642888((long)param_1 + 0xe710,1,0,1,1);
          fVar20 = fVar20 + 5.0;
          iVar11 = *(int *)((long)param_1 + 0x11968);
        }
        if (iVar11 == iVar6 && bVar10) {
          *(uint *)(local_b8 + 0x13c) = *(uint *)(local_b8 + 0x13c) & 0xfffffffb;
        }
        if (uVar19 != 0) {
          uVar14 = 0;
          do {
            if (*puVar1 <= uVar14) break;
            if ((*(long *)(*(long *)((long)param_1 + 0x11960) + uVar14 * 8) != 0) &&
               (*(int *)(*(long *)(param_2 + 0x200) + uVar14 * 0x38 + 0x30) == iVar6)) {
              *(uint *)(local_b8 + 0x13c) = *(uint *)(local_b8 + 0x13c) & 0xfffffffb;
              plVar12 = *(long **)(*(long *)((long)param_1 + 0x11960) + uVar14 * 8);
              fVar21 = (float)(**(code **)(*plVar12 + 0x60))(plVar12,1,0,1,1);
              lVar15 = *(long *)(*(long *)((long)param_1 + 0x11960) + uVar14 * 8);
              fVar22 = 0.0;
              if (((*(byte *)(lVar15 + 0x13c) >> 2 & 1) != 0) && (iVar7 != 0)) {
                fVar22 = (float)FUN_10065317c(lVar15 + 0xb8);
                fVar22 = fVar22 + 5.0;
              }
              fVar20 = (fVar20 + 16.0 + fVar21) - fVar22;
            }
            uVar14 = uVar14 + 1;
          } while (uVar14 != uVar19);
        }
        FUN_10023aa98(fVar20,param_1,local_b8,(long)iVar6,iVar7 == 0);
        unaff_x26 = unaff_x26 & 0xffffffff00000000 | (ulong)(*puVar1 - 1);
        local_88 = uVar8;
        local_b0 = FUN_10023ac78;
        local_a0 = 0;
        uStack_98 = 0;
        local_a8 = param_1;
        local_90 = unaff_x26;
        FUN_10001554c(local_b8 + 8,&local_b0);
        unaff_x28 = unaff_x28 & 0xffffffff00000000 | (ulong)(*puVar1 - 1);
        local_88 = uVar9;
        local_b0 = FUN_10023ac78;
        local_a0 = 0;
        uStack_98 = 0;
        local_a8 = param_1;
        local_90 = unaff_x28;
        FUN_10001554c(local_b8 + 8,&local_b0);
        uVar18 = *(uint *)(param_2 + 0x1f8);
      }
LAB_10023973c:
      uVar19 = uVar19 + 1;
    } while (uVar19 < uVar18);
  }
  return;
}




void FUN_100239770(long param_1,int param_2)

{
  float *pfVar1;
  bool bVar2;
  
  if (param_2 != 0) {
    pfVar1 = (float *)(param_1 + 0xddc0);
    bVar2 = false;
    if ((*(float *)(param_1 + 0xddc4) == 0.0) && (bVar2 = false, !NAN(*pfVar1))) {
      bVar2 = *pfVar1 == 0.0;
    }
    if (!bVar2) {
      pfVar1[0] = 0.0;
      pfVar1[1] = 0.0;
      FUN_1000200a0(param_1 + 0xdd80);
    }
    FUN_1002397cc(param_1);
    FUN_100239850(param_1);
    return;
  }
  return;
}




void FUN_1002397cc(long param_1)

{
  long lVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  
  puVar3 = (uint *)FUN_1003302c0();
  uVar4 = *puVar3;
  if (uVar4 != 0) {
    lVar5 = 0;
    uVar6 = 0;
    do {
      uVar2 = *(uint *)(*(long *)(puVar3 + 2) + lVar5);
      if (uVar2 < 0xb) {
        lVar1 = *(long *)(puVar3 + 2) + lVar5;
        FUN_10023ac80(param_1 + (long)(int)(uVar2 - 1) * 5000 + 200,*(undefined4 *)(lVar1 + 4),
                      *(undefined4 *)(lVar1 + 8));
        uVar4 = *puVar3;
      }
      uVar6 = uVar6 + 1;
      lVar5 = lVar5 + 0xc;
    } while (uVar6 < uVar4);
  }
  return;
}




void FUN_100239850(undefined1 param_1 [16],float param_2,long param_3)

{
  float *pfVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  ushort uVar5;
  ushort *puVar6;
  float fVar7;
  float fVar8;
  undefined4 local_48;
  float local_44;
  
  pfVar1 = (float *)(param_3 + 0xddc4);
  lVar2 = param_3 + 0xdd80;
  FUN_100530aa0(lVar2,1,0,1,1);
  fVar7 = param_2;
  FUN_100642324(lVar2);
  iVar3 = *(int *)(param_3 + 0x11968);
  FUN_10064e3cc(param_3 + 0xdbe0);
  fVar7 = fVar7 - param_2;
  if (iVar3 < 0x1c) {
    if (*pfVar1 != fVar7) {
      *pfVar1 = fVar7;
      FUN_1000200a0(lVar2);
      return;
    }
  }
  else {
    fVar8 = *pfVar1;
    if (fVar8 != fVar7 + 800.0) {
      *pfVar1 = fVar7 + 800.0;
      FUN_1000200a0(lVar2);
    }
    fVar7 = *(float *)(param_3 + 0xe754);
    FUN_10064e3cc(param_3 + 0xdbe0);
    lVar4 = DAT_101dbd2f8;
    local_44 = -(fVar8 * -0.3333) - fVar7;
    uVar5 = *(ushort *)(DAT_101dbd2f8 + 0x20010);
    if ((ulong)uVar5 == 0xffff) {
      puVar6 = (ushort *)0x0;
    }
    else {
      puVar6 = (ushort *)(DAT_101dbd2f8 + (ulong)uVar5 * 0x40 + 0x10);
      if (uVar5 == *(ushort *)(DAT_101dbd2f8 + 0x20012)) {
        uVar5 = 0xffff;
      }
      else {
        uVar5 = *puVar6;
      }
      *(ushort *)(DAT_101dbd2f8 + 0x20010) = uVar5;
      *(int *)(lVar4 + 0x20014) = *(int *)(lVar4 + 0x20014) + 1;
      FUN_10063fb5c(puVar6);
      *(int *)(lVar4 + 0x20020) = *(int *)(lVar4 + 0x20020) + 1;
    }
    local_48 = 0;
    FUN_10063fb90(puVar6,&local_48);
    FUN_10063f0e8((float)(*(int *)(param_3 + 0x11968) / 10) * 0.1 + 0.2,puVar6);
    FUN_10063f130(puVar6,FUN_10001f160);
    FUN_100642b14(lVar2,puVar6);
  }
  return;
}




void FUN_100239a28(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100239a30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x150))();
  return;
}




void FUN_100239a34(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100239a3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x150))();
  return;
}




void FUN_100239a40(long param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  bool bVar5;
  int iVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float local_94;
  float local_90;
  float local_8c;
  undefined1 *local_88;
  
  plVar2 = (long *)(param_1 + 0xdaf0);
  plVar3 = (long *)(param_1 + 0xd9c0);
  plVar4 = (long *)(param_1 + 0xd7a0);
  uVar7 = FUN_100126b4c();
  FUN_1001e35ec(param_1,uVar7,&local_8c,&local_90,&local_94);
  iVar6 = FUN_100126c88();
  fVar12 = local_8c - local_94;
  fVar13 = fVar12 * 0.8;
  lVar9 = param_1 + 0xdbe0;
  fVar10 = 300.0;
  if (iVar6 == 0) {
    fVar10 = 180.0;
  }
  bVar5 = false;
  if ((*(float *)(param_1 + 0xdc20) == fVar12 * 0.099999994) &&
     (bVar5 = false, !NAN(*(float *)(param_1 + 0xdc24)) && !NAN(fVar10))) {
    bVar5 = *(float *)(param_1 + 0xdc24) == fVar10;
  }
  if (!bVar5) {
    *(float *)(param_1 + 0xdc20) = fVar12 * 0.099999994;
    *(float *)(param_1 + 0xdc24) = fVar10;
    FUN_1000200a0(lVar9);
  }
  plVar8 = (long *)(param_1 + 0xc418);
  local_88 = (undefined1 *)0x0;
  (**(code **)(*(long *)(param_1 + 0xdbe0) + 0x28))(lVar9,&local_88);
  fVar10 = local_90 - *(float *)(param_1 + 0xdc24);
  FUN_10064e47c(fVar12,lVar9);
  plVar1 = (long *)(param_1 + 0xd890);
  FUN_100651708(fVar13 + -40.0,plVar1,1);
  fVar14 = fVar12 * 0.4;
  FUN_10064259c(plVar1);
  fVar10 = fVar10 * 0.5;
  fVar11 = *(float *)(param_1 + 0xd8d0);
  bVar5 = false;
  if ((fVar11 == fVar14) && (bVar5 = false, !NAN(*(float *)(param_1 + 0xd8d4)) && !NAN(fVar10))) {
    bVar5 = *(float *)(param_1 + 0xd8d4) == fVar10;
  }
  if (!bVar5) {
    *(float *)(param_1 + 0xd8d0) = fVar14;
    *(float *)(param_1 + 0xd8d4) = fVar10;
    FUN_1000200a0(plVar1);
  }
  local_88 = &DAT_3f0000003f000000;
  (**(code **)(*plVar1 + 0x28))(plVar1,&local_88);
  FUN_100651708(fVar13 + -80.0,plVar3,1);
  FUN_10064259c(plVar1);
  fVar10 = fVar11;
  FUN_10064259c(plVar3);
  fVar10 = fVar11 + 5.0 + fVar10 * 0.5;
  fVar11 = *(float *)(param_1 + 0xda00);
  if ((fVar11 != fVar14) || (fVar11 = *(float *)(param_1 + 0xda04), fVar11 != fVar10)) {
    *(float *)(param_1 + 0xda00) = fVar14;
    *(float *)(param_1 + 0xda04) = fVar10;
    FUN_1000200a0(plVar3);
  }
  local_88 = &DAT_3f0000003f000000;
  (**(code **)(*plVar3 + 0x28))(plVar3,&local_88);
  fVar10 = *(float *)(param_1 + 0xda04);
  FUN_10064259c(plVar3);
  fVar10 = fVar10 + fVar11 * 0.5;
  fVar15 = fVar10 + 20.0;
  FUN_100239f80(fVar13,plVar8);
  if ((*(float *)(param_1 + 0xc458) != 0.0) || (*(float *)(param_1 + 0xc45c) != fVar15)) {
    *(undefined4 *)(param_1 + 0xc458) = 0;
    *(float *)(param_1 + 0xc45c) = fVar15;
    FUN_1000200a0(plVar8);
  }
  plVar1 = (long *)(param_1 + 200);
  local_88 = (undefined1 *)0x0;
  (**(code **)(*plVar8 + 0x28))(plVar8,&local_88);
  plVar8 = (long *)(param_1 + 200);
  lVar9 = 10;
  do {
    FUN_100239f80(fVar13,plVar8);
    (**(code **)(*plVar1 + 0x60))(plVar1,0,0,1,1);
    fVar15 = fVar10 + 170.0 + (float)((int)lVar9 + -1) * fVar11;
    fVar11 = *(float *)(plVar8 + 8);
    if ((fVar11 != 0.0) || (fVar11 = *(float *)((long)plVar8 + 0x44), fVar11 != fVar15)) {
      *(undefined4 *)(plVar8 + 8) = 0;
      *(float *)((long)plVar8 + 0x44) = fVar15;
      FUN_1000200a0(plVar8);
    }
    local_88 = (undefined1 *)0x0;
    (**(code **)(*plVar8 + 0x28))(plVar8,&local_88);
    plVar8 = plVar8 + 0x271;
    lVar9 = lVar9 + -1;
  } while (lVar9 != 0);
  fVar10 = *(float *)(param_1 + 0xda04);
  FUN_10064259c(plVar3);
  fVar10 = fVar10 + 20.0 + fVar11 * 0.5;
  FUN_10064e47c(fVar13,fVar10 + *(float *)(param_1 + 0xdc24),plVar4);
  if ((*(float *)(param_1 + 0xd7e0) != fVar14) || (*(float *)(param_1 + 0xd7e4) != fVar10)) {
    *(float *)(param_1 + 0xd7e0) = fVar14;
    *(float *)(param_1 + 0xd7e4) = fVar10;
    FUN_1000200a0(plVar4);
  }
  local_88 = (undefined1 *)0x3f8000003f000000;
  (**(code **)(*plVar4 + 0x28))(plVar4,&local_88);
  FUN_10064e48c(plVar2,&DAT_101dc1cb8);
  lVar9 = param_1 + 0xdd80;
  uVar7 = FUN_100530aa0(lVar9,1,0,1,1);
  FUN_100530aa0(lVar9,1,0,1,1);
  FUN_10053093c(uVar7,lVar9);
  fVar11 = *(float *)(param_1 + 0xdc24) + fVar10;
  FUN_10064e47c(fVar13,fVar11 + fVar11,plVar4);
  if ((*(float *)(param_1 + 0xd7e0) != fVar14) || (*(float *)(param_1 + 0xd7e4) != fVar10)) {
    *(float *)(param_1 + 0xd7e0) = fVar14;
    *(float *)(param_1 + 0xd7e4) = fVar10;
    FUN_1000200a0(plVar4);
  }
  local_88 = (undefined1 *)0x3f8000003f000000;
  (**(code **)(*plVar4 + 0x28))(plVar4,&local_88);
  fVar10 = 240.0;
  FUN_10064e47c(fVar13,plVar2);
  fVar13 = *(float *)(param_1 + 0x10c);
  (**(code **)(*(long *)(param_1 + 200) + 0x60))(plVar1,0,0,1,1);
  fVar10 = fVar10 + fVar13;
  fVar13 = *(float *)(param_1 + 0xdb30);
  if ((fVar13 != fVar14) || (fVar13 = *(float *)(param_1 + 0xdb34), fVar13 != fVar10)) {
    *(float *)(param_1 + 0xdb30) = fVar14;
    *(float *)(param_1 + 0xdb34) = fVar10;
    FUN_1000200a0(plVar2);
  }
  local_88 = (undefined1 *)0x3f000000;
  (**(code **)(*plVar2 + 0x28))(plVar2,&local_88);
  fVar10 = DAT_101854a80;
  FUN_1006425d0(param_1 + 0xe2b8,0,0,1,1);
  fVar10 = fVar10 + -16.0 + fVar13 * 0.5;
  if ((*(float *)(param_1 + 0xe2f8) != fVar12 + -48.0) || (*(float *)(param_1 + 0xe2fc) != fVar10))
  {
    *(float *)(param_1 + 0xe2f8) = fVar12 + -48.0;
    *(float *)(param_1 + 0xe2fc) = fVar10;
    FUN_1000200a0(param_1 + 0xe2b8);
  }
  return;
}




void FUN_100239f80(undefined8 param_1,float param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 *local_78;
  
  fVar7 = (float)param_1;
  *(float *)(param_3 + 0x1380) = fVar7;
  fVar11 = fVar7 * 0.35;
  plVar5 = (long *)(param_3 + 0x178);
  (**(code **)(*(long *)(param_3 + 0x178) + 0x48))(plVar5);
  lVar6 = 9;
  do {
    fVar8 = param_2 * 0.3 + 10.0 + (float)((int)lVar6 + -1) * (param_2 * 0.6 + 2.0);
    if ((*(float *)(plVar5 + 8) != fVar11 + -10.0) || (*(float *)((long)plVar5 + 0x44) != fVar8)) {
      *(float *)(plVar5 + 8) = fVar11 + -10.0;
      *(float *)((long)plVar5 + 0x44) = fVar8;
      FUN_1000200a0(plVar5);
    }
    local_78 = (undefined1 *)0x3f0000003f800000;
    (**(code **)(*plVar5 + 0x28))(plVar5,&local_78);
    plVar5 = plVar5 + 0x26;
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  lVar6 = param_3 + 0xc28;
  fVar8 = 0.0;
  FUN_10065179c(fVar11 + -20.0,0,0x3f800000,lVar6);
  FUN_10064259c(lVar6);
  fVar8 = param_2 * 0.3 + 2.0 + *(float *)(param_3 + 0x1bc) + fVar8 * 0.5;
  fVar10 = *(float *)(param_3 + 0xc68);
  if ((fVar10 != fVar11) || (fVar10 = *(float *)(param_3 + 0xc6c), fVar10 != fVar8)) {
    *(float *)(param_3 + 0xc68) = fVar11;
    *(float *)(param_3 + 0xc6c) = fVar8;
    FUN_1000200a0(lVar6);
  }
  local_78 = (undefined1 *)0x3f0000003f800000;
  (**(code **)(*(long *)(param_3 + 0xc28) + 0x28))(lVar6,&local_78);
  fVar8 = *(float *)(param_3 + 0xc6c);
  FUN_10064259c(lVar6);
  lVar6 = param_3 + 0xe10;
  fVar11 = fVar10;
  fVar9 = (float)FUN_10065317c(lVar6);
  FUN_10065317c(lVar6);
  if ((*(float *)(param_3 + 0xe50) != fVar9 * 0.5) || (*(float *)(param_3 + 0xe54) != fVar11 * 0.5))
  {
    *(float *)(param_3 + 0xe50) = fVar9 * 0.5;
    *(float *)(param_3 + 0xe54) = fVar11 * 0.5;
    FUN_1000200a0(lVar6);
  }
  local_78 = &DAT_3f0000003f000000;
  (**(code **)(*(long *)(param_3 + 0xe10) + 0x28))(lVar6,&local_78);
  fVar9 = *(float *)(param_3 + 0xe50);
  fVar11 = (float)FUN_10065317c(lVar6);
  fVar11 = fVar9 + 10.0 + fVar11 * 0.5;
  fVar9 = *(float *)(param_3 + 0xe54);
  bVar4 = false;
  if ((*(float *)(param_3 + 0xf40) == fVar11) &&
     (bVar4 = false, !NAN(*(float *)(param_3 + 0xf44)) && !NAN(fVar9))) {
    bVar4 = *(float *)(param_3 + 0xf44) == fVar9;
  }
  if (!bVar4) {
    *(float *)(param_3 + 0xf40) = fVar11;
    *(float *)(param_3 + 0xf44) = fVar9;
    FUN_1000200a0(param_3 + 0xf00);
  }
  local_78 = (undefined1 *)0x3f00000000000000;
  (**(code **)(*(long *)(param_3 + 0xf00) + 0x28))(param_3 + 0xf00,&local_78);
  lVar1 = param_3 + 0x1030;
  fVar12 = *(float *)(param_3 + 0xe50);
  fVar13 = *(float *)(param_3 + 0xe54);
  FUN_10065317c(lVar6);
  fVar11 = fVar9;
  FUN_10065317c(lVar1);
  fVar11 = fVar13 + 10.0 + (fVar11 + fVar9) * 0.5;
  if ((*(float *)(param_3 + 0x1070) != fVar12) || (*(float *)(param_3 + 0x1074) != fVar11)) {
    *(float *)(param_3 + 0x1070) = fVar12;
    *(float *)(param_3 + 0x1074) = fVar11;
    FUN_1000200a0(lVar1);
  }
  local_78 = &DAT_3f0000003f000000;
  (**(code **)(*(long *)(param_3 + 0x1030) + 0x28))(lVar1,&local_78);
  fVar9 = *(float *)(param_3 + 0x1070);
  fVar11 = (float)FUN_10065317c(lVar1);
  fVar11 = fVar9 + 10.0 + fVar11 * 0.5;
  if ((*(float *)(param_3 + 0x1160) != fVar11) ||
     (*(float *)(param_3 + 0x1164) != *(float *)(param_3 + 0x1074))) {
    *(float *)(param_3 + 0x1160) = fVar11;
    *(float *)(param_3 + 0x1164) = *(float *)(param_3 + 0x1074);
    FUN_1000200a0(param_3 + 0x1120);
  }
  fVar8 = fVar8 + fVar10 * 0.5;
  local_78 = (undefined1 *)0x3f00000000000000;
  (**(code **)(*(long *)(param_3 + 0x1120) + 0x28))(param_3 + 0x1120,&local_78);
  lVar2 = param_3 + 0x1250;
  fVar11 = 0.25;
  FUN_100651708(fVar7 * 0.25 + -20.0,lVar2,1);
  lVar3 = 0xe54;
  if ((*(uint *)(param_3 + 0x10b4) & 4) != 0) {
    lVar3 = 0x1074;
    lVar6 = lVar1;
  }
  fVar10 = *(float *)(param_3 + lVar3);
  FUN_10065317c(lVar6);
  fVar11 = fVar10 + fVar11 * 0.5 + 10.0;
  fVar10 = *(float *)(param_3 + 0x1290);
  if ((fVar10 != 0.0) || (fVar10 = *(float *)(param_3 + 0x1294), fVar10 != fVar11)) {
    *(undefined4 *)(param_3 + 0x1290) = 0;
    *(float *)(param_3 + 0x1294) = fVar11;
    FUN_1000200a0(lVar2);
  }
  local_78 = (undefined1 *)0x0;
  (**(code **)(*(long *)(param_3 + 0x1250) + 0x28))(lVar2,&local_78);
  lVar6 = param_3 + 0xd58;
  FUN_1006425d0(lVar6,1,1,1,1);
  FUN_10064e47c(lVar6);
  FUN_10064e3cc(lVar6);
  fVar11 = (fVar8 - fVar10) * 0.5;
  if ((*(float *)(param_3 + 0xd98) != fVar7 * 0.75) || (*(float *)(param_3 + 0xd9c) != fVar11)) {
    *(float *)(param_3 + 0xd98) = fVar7 * 0.75;
    *(float *)(param_3 + 0xd9c) = fVar11;
    FUN_1000200a0(lVar6);
  }
  local_78 = (undefined1 *)0x0;
  (**(code **)(*(long *)(param_3 + 0xd58) + 0x28))(lVar6,&local_78);
  *(uint *)(param_3 + 0xddc) = *(uint *)(param_3 + 0xddc) | 0x10;
  FUN_10064e47c(param_1,fVar8 + 10.0,param_3 + 0x88);
  return;
}




void FUN_10023a3f8(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  void *local_138;
  void *local_130;
  undefined7 local_128;
  char cStack_121;
  char local_111;
  undefined4 local_110;
  undefined8 local_10c;
  undefined1 auStack_100 [8];
  void *local_f8;
  undefined1 auStack_f0 [8];
  void *local_e8;
  undefined **local_e0;
  undefined1 auStack_d8 [16];
  long local_c8;
  code *pcStack_c0;
  long local_b0;
  undefined8 local_90;
  void *local_88;
  void *local_80;
  char local_69;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_38;
  
  thunk_FUN_1001cd434(&local_e0);
  uVar2 = FUN_1004e0150("MAIN_SEASON_GUILD_REWARDS_GENERIC_TOOLTIP",0);
  thunk_FUN_1004e439c(auStack_f0,uVar2);
  FUN_1004e3120(&local_138,"[SEASON_NAME]");
  FUN_1000f0f78(auStack_100,0,0,0);
  FUN_1004e3bc4(auStack_f0,0,&local_138,auStack_100);
  if (local_f8 != (void *)0x0) {
    operator_delete__(local_f8);
  }
  if (local_130 != (void *)0x0) {
    operator_delete__(local_130);
  }
  thunk_FUN_1004e439c(&local_138,auStack_f0);
  FUN_10003330c(&local_128,&DAT_101d91198);
  local_110 = 1;
  local_10c = 0x41a00000;
  FUN_10003c048(auStack_d8,&local_138);
  if (local_111 < '\0') {
    operator_delete((void *)CONCAT17(cStack_121,local_128));
  }
  if (local_130 != (void *)0x0) {
    operator_delete__(local_130);
  }
  local_b0 = param_1 + 0xe340;
  local_38 = 2;
  local_50 = 0x3dcccccd;
  iVar1 = FUN_100126c88();
  local_4c = 0x447a0000;
  if (iVar1 == 0) {
    local_4c = 0x44480000;
  }
  uVar2 = FUN_1004e0150("GENERIC_DIALOG_MORE_INFO",0);
  FUN_1000153b4(&local_90,uVar2);
  pcStack_c0 = FUN_10023a5f0;
  local_c8 = param_1;
  FUN_10001549c(&local_138,"guildRewardsSeasonLabel");
  FUN_1001cefb8(param_1 + 0x11858,&local_138,&local_e0);
  if (cStack_121 < '\0') {
    operator_delete(local_138);
  }
  if (local_e8 != (void *)0x0) {
    operator_delete__(local_e8);
  }
  local_e0 = &PTR_FUN_1014666e0;
  if (local_69 < '\0') {
    operator_delete(local_80);
  }
  if (local_88 != (void *)0x0) {
    operator_delete__(local_88);
    local_90 = 0;
    local_88 = (void *)0x0;
  }
  FUN_10003c1ec(auStack_d8,1);
  return;
}




void FUN_10023a5f0(void)

{
  int iVar1;
  
  iVar1 = FUN_10052b408();
  if (iVar1 != 0) {
    FUN_10052b410("http://www.vainglorygame.com/news/what-is-a-season/");
    return;
  }
  return;
}




void FUN_10023a618(long param_1,undefined8 param_2,uint param_3)

{
  long *plVar1;
  float fVar2;
  float fVar3;
  void *local_138;
  void *local_130;
  undefined7 local_128;
  char cStack_121;
  char local_111;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 uStack_108;
  undefined **local_100;
  undefined1 auStack_f8 [40];
  undefined8 local_d0;
  undefined8 local_b0;
  void *local_a8;
  void *local_a0;
  char local_89;
  float local_80;
  undefined4 local_7c;
  undefined4 local_70;
  undefined1 local_68;
  undefined4 local_58;
  
  if ((-1 < (int)param_3) || (param_3 < *(uint *)(param_1 + 0x11958))) {
    thunk_FUN_1001cd434(&local_100);
    thunk_FUN_1004e439c(&local_138,
                        *(long *)(*(long *)(param_1 + 0x11960) + (ulong)param_3 * 8) + 0x3130);
    FUN_10003330c(&local_128,&DAT_101d91198);
    local_10c = 0;
    uStack_108 = 0;
    local_110 = 1;
    FUN_10003c048(auStack_f8,&local_138);
    if (local_111 < '\0') {
      operator_delete((void *)CONCAT17(cStack_121,local_128));
    }
    if (local_130 != (void *)0x0) {
      operator_delete__(local_130);
    }
    local_d0 = *(undefined8 *)(*(long *)(param_1 + 0x11960) + (ulong)param_3 * 8);
    local_58 = 0;
    local_70 = 0x3f000000;
    local_68 = 1;
    plVar1 = *(long **)(*(long *)(param_1 + 0x11960) + (ulong)param_3 * 8);
    if ((char)plVar1[0x628] == '\0') {
      fVar2 = (float)(**(code **)(*plVar1 + 0x58))(plVar1,0,0,1,1);
      local_80 = 8.0;
      fVar3 = -0.5;
    }
    else {
      fVar2 = (float)(**(code **)(*plVar1 + 0x60))(plVar1,0,0,1,1);
      local_80 = 10.0;
      fVar3 = 0.5;
    }
    local_80 = local_80 + fVar3 * fVar2;
    local_7c = 0;
    FUN_10001549c(&local_138,"nearestGuildTagName");
    std::string::push_back((char)&local_138);
    FUN_1001cefb8(param_1 + 0x11858,&local_138,&local_100);
    if (cStack_121 < '\0') {
      operator_delete(local_138);
    }
    local_100 = &PTR_FUN_1014666e0;
    if (local_89 < '\0') {
      operator_delete(local_a0);
    }
    if (local_a8 != (void *)0x0) {
      operator_delete__(local_a8);
      local_b0 = 0;
      local_a8 = (void *)0x0;
    }
    FUN_10003c1ec(auStack_f8,1);
  }
  return;
}




void FUN_10023a7ec(long param_1,int param_2)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  float fVar4;
  bool bVar5;
  undefined8 *puVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  int iVar10;
  float fVar11;
  undefined8 uVar12;
  
  lVar8 = 0;
  lVar9 = 0;
  iVar10 = 1;
  do {
    fVar11 = (float)(iVar10 + *(int *)(param_1 + 0x1384));
    lVar2 = param_1 + lVar8;
    lVar1 = lVar2 + 0x178;
    if ((float)param_2 == fVar11) {
      if ((~*(uint *)(lVar2 + 0x1fc) & 0x7f80) != 0) {
        *(uint *)(lVar2 + 0x1fc) = *(uint *)(lVar2 + 0x1fc) | 0x7f80;
        FUN_1000200a0(lVar1);
      }
      puVar6 = (undefined8 *)(param_1 + lVar9 * 0x130 + 0x1c0);
      uVar12 = 0x3f3333333f333333;
      if ((*(float *)(param_1 + lVar8 + 0x1c0) != 0.7) ||
         (*(float *)(param_1 + lVar8 + 0x1c4) != 0.7)) {
LAB_10023a92c:
        *puVar6 = uVar12;
        FUN_1000200a0(lVar1);
      }
    }
    else {
      fVar4 = 102.0;
      if ((float)param_2 < fVar11) {
        fVar4 = 38.25;
      }
      uVar7 = *(uint *)(lVar2 + 0x1fc);
      if ((int)fVar4 != (uVar7 >> 7 & 0xff)) {
        *(uint *)(lVar2 + 0x1fc) = uVar7 & 0xffff8000 | uVar7 & 0x7f | ((int)fVar4 & 0xffU) << 7;
        FUN_1000200a0(lVar1);
      }
      lVar2 = param_1 + lVar8;
      puVar6 = (undefined8 *)(lVar2 + 0x1c0);
      uVar12 = 0x3f19999a3f19999a;
      if ((*(float *)(lVar2 + 0x1c0) != 0.6) || (*(float *)(lVar2 + 0x1c4) != 0.6))
      goto LAB_10023a92c;
    }
    lVar8 = lVar8 + 0x130;
    iVar10 = iVar10 + 1;
    lVar9 = lVar9 + 1;
    if (lVar8 == 0xab0) {
      iVar10 = *(int *)(param_1 + 0x1384);
      uVar3 = *(uint *)(param_1 + 0xcac);
      uVar7 = 0x26;
      if (iVar10 <= param_2) {
        uVar7 = 0xff;
      }
      if (uVar7 != (uVar3 >> 7 & 0xff)) {
        *(uint *)(param_1 + 0xcac) = uVar3 & 0xffff8000 | uVar3 & 0x7f | uVar7 << 7;
        FUN_1000200a0(param_1 + 0xc28);
        iVar10 = *(int *)(param_1 + 0x1384);
      }
      if (param_2 < iVar10) {
        uVar7 = *(uint *)(param_1 + 0xddc);
        if ((uVar7 & 0x7f80) != 0x1300) {
          *(uint *)(param_1 + 0xddc) = uVar7 & 0xffff8000 | uVar7 & 0x7f | 0x1300;
          FUN_1000200a0(param_1 + 0xd58);
        }
        if ((*(float *)(param_1 + 0xda0) == 0.75) && (*(float *)(param_1 + 0xda4) == 0.75)) {
          return;
        }
        uVar12 = NEON_fmov(0x3f400000,4);
        *(undefined8 *)(param_1 + 0xda0) = uVar12;
      }
      else {
        fVar11 = 1.0;
        if (iVar10 + 10 <= param_2) {
          fVar11 = 0.75;
        }
        bVar5 = false;
        if ((*(float *)(param_1 + 0xda0) == fVar11) &&
           (bVar5 = false, !NAN(*(float *)(param_1 + 0xda4)) && !NAN(fVar11))) {
          bVar5 = *(float *)(param_1 + 0xda4) == fVar11;
        }
        if (!bVar5) {
          *(float *)(param_1 + 0xda0) = fVar11;
          *(float *)(param_1 + 0xda4) = fVar11;
          FUN_1000200a0(param_1 + 0xd58);
        }
        uVar3 = *(uint *)(param_1 + 0xddc);
        uVar7 = 0xff;
        if (iVar10 + 10 <= param_2) {
          uVar7 = 0x99;
        }
        if (uVar7 == (uVar3 >> 7 & 0xff)) {
          return;
        }
        *(uint *)(param_1 + 0xddc) = uVar3 & 0xffff8000 | uVar3 & 0x7f | uVar7 << 7;
      }
      FUN_1000200a0(param_1 + 0xd58);
      return;
    }
  } while( true );
}




void FUN_10023aa98(float param_1,long param_2,long *param_3,uint param_4,int param_5)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  float fVar5;
  float fVar6;
  undefined8 local_48;
  
  if (param_4 < 0x65) {
    uVar2 = (param_4 & 0xff) / 10;
    uVar3 = param_4 + uVar2 * -10;
    if ((uVar3 & 0xff) == 0) {
      plVar1 = (long *)(param_2 + (ulong)uVar2 * 5000 + 0xcf0);
    }
    else {
      plVar1 = (long *)(param_2 + (ulong)uVar2 * 5000 + (ulong)((uVar3 & 0xff) - 1) * 0x130 + 0x240)
      ;
    }
    if (param_5 == 0) {
      fVar6 = *(float *)(plVar1 + 8);
      fVar5 = (float)(**(code **)(*plVar1 + 0x50))(plVar1);
      fVar5 = (fVar6 + -30.0) - (fVar5 + param_1);
      fVar6 = *(float *)((long)plVar1 + 0x44) + *(float *)(param_2 + (ulong)uVar2 * 5000 + 0x10c);
      bVar4 = false;
      if ((*(float *)(param_3 + 8) == fVar5) &&
         (bVar4 = false, !NAN(*(float *)((long)param_3 + 0x44)) && !NAN(fVar6))) {
        bVar4 = *(float *)((long)param_3 + 0x44) == fVar6;
      }
      if (!bVar4) {
        *(float *)(param_3 + 8) = fVar5;
        *(float *)((long)param_3 + 0x44) = fVar6;
        FUN_1000200a0(param_3);
      }
      local_48 = 0x3f0000003f800000;
    }
    else {
      fVar5 = param_1 + 20.0 + *(float *)(plVar1 + 8);
      fVar6 = *(float *)(param_2 + (ulong)((param_4 & 0xff) / 10) * 5000 + 0x10c) +
              *(float *)((long)plVar1 + 0x44);
      bVar4 = false;
      if ((*(float *)(param_3 + 8) == fVar5) &&
         (bVar4 = false, !NAN(*(float *)((long)param_3 + 0x44)) && !NAN(fVar6))) {
        bVar4 = *(float *)((long)param_3 + 0x44) == fVar6;
      }
      if (!bVar4) {
        *(float *)(param_3 + 8) = fVar5;
        *(float *)((long)param_3 + 0x44) = fVar6;
        FUN_1000200a0(param_3);
      }
      local_48 = 0x3f00000000000000;
    }
    (**(code **)(*param_3 + 0x28))(param_3,&local_48);
    return;
  }
  return;
}




void FUN_10023abf8(uint *param_1,undefined8 *param_2)

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
    FUN_10023b43c(param_1,uVar2);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




void FUN_10023ac78(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  FUN_10023a618(param_1,param_2,param_5);
  return;
}




void FUN_10023ac80(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  void *local_68;
  void *local_60;
  char local_51;
  undefined8 local_50;
  void *local_48;
  undefined8 uStack_40;
  void *local_38;
  
  FUN_1004e313c(&uStack_40);
  if ((int)param_2 < 1) {
    *(uint *)(param_1 + 0xe94) = *(uint *)(param_1 + 0xe94) & 0xfffffffb;
    puVar1 = &DAT_101d91650;
  }
  else {
    *(uint *)(param_1 + 0xe94) = *(uint *)(param_1 + 0xe94) | 4;
    FUN_1004e3120(&local_68,"+");
    FUN_1000153b4(&uStack_40,&local_68);
    if (local_60 != (void *)0x0) {
      operator_delete__(local_60);
    }
    FUN_1000f0994(&local_68,param_2);
    FUN_1004e3170(&local_50,&local_68);
    FUN_1004e372c(&uStack_40,&local_50);
    if (local_48 != (void *)0x0) {
      operator_delete__(local_48);
      local_50 = 0;
      local_48 = (void *)0x0;
    }
    if (local_51 < '\0') {
      operator_delete(local_68);
    }
    puVar1 = &uStack_40;
  }
  FUN_1006513c0(param_1 + 0xf00,puVar1);
  if ((int)param_3 == 0) {
    *(uint *)(param_1 + 0x10b4) = *(uint *)(param_1 + 0x10b4) & 0xfffffffb;
    puVar1 = &DAT_101d91650;
  }
  else {
    *(uint *)(param_1 + 0x10b4) = *(uint *)(param_1 + 0x10b4) | 4;
    FUN_1004e3120(&local_68,"+");
    FUN_1000153b4(&uStack_40,&local_68);
    if (local_60 != (void *)0x0) {
      operator_delete__(local_60);
    }
    FUN_1000f0994(&local_68,param_3);
    FUN_1004e3170(&local_50,&local_68);
    FUN_1004e372c(&uStack_40,&local_50);
    if (local_48 != (void *)0x0) {
      operator_delete__(local_48);
      local_50 = 0;
      local_48 = (void *)0x0;
    }
    if (local_51 < '\0') {
      operator_delete(local_68);
    }
    puVar1 = &uStack_40;
  }
  FUN_1006513c0(param_1 + 0x1120,puVar1);
  FUN_100239f80(*(undefined4 *)(param_1 + 0x1380),param_1);
  if (local_38 != (void *)0x0) {
    operator_delete__(local_38);
  }
  return;
}




long * FUN_10023ae14(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 *puVar11;
  
  puVar8 = (undefined8 *)FUN_1006421a8();
  puVar11 = puVar8 + 0x11;
  *puVar8 = &PTR_thunk_FUN_10023b344_1014779a8;
  thunk_FUN_100652c08(puVar11);
  lVar10 = 0x178;
  do {
    thunk_FUN_100650e64((long)param_1 + lVar10);
    lVar10 = lVar10 + 0x130;
  } while (lVar10 != 0xc28);
  plVar1 = param_1 + 0x185;
  thunk_FUN_100650e64(plVar1);
  plVar2 = param_1 + 0x1ab;
  FUN_10064e264(plVar2);
  plVar3 = param_1 + 0x1c2;
  thunk_FUN_100652c08(plVar3);
  plVar4 = param_1 + 0x1e0;
  thunk_FUN_100650e64(plVar4);
  plVar5 = param_1 + 0x206;
  thunk_FUN_100652c08(plVar5);
  plVar6 = param_1 + 0x224;
  thunk_FUN_100650e64(plVar6);
  plVar7 = param_1 + 0x24a;
  thunk_FUN_100650e64(plVar7);
  *(undefined4 *)((long)param_1 + 0x1384) = 0;
  (**(code **)(*param_1 + 0x78))(param_1,puVar11,1);
  FUN_100642bd8(plVar2,plVar3,1);
  FUN_100642bd8(plVar2,plVar4,1);
  FUN_100642bd8(plVar2,plVar5,1);
  FUN_100642bd8(plVar2,plVar6,1);
  FUN_100642bd8(plVar2,plVar7,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  lVar10 = 0x178;
  do {
    (**(code **)(*param_1 + 0x78))(param_1,(long)param_1 + lVar10,1);
    lVar10 = lVar10 + 0x130;
  } while (lVar10 != 0xc28);
  FUN_100652cac(puVar11,PTR_s_build___MenuPartsCommon_tga_101854970,"black_background");
  FUN_100652cac(plVar3,PTR_s_build___MenuPartsCommon_tga_101854970,"glory_icon_small");
  FUN_100651594(plVar4,PTR_s_build___Fonts_Brandon_Bold_48_fo_10184e238,&DAT_10115a168);
  FUN_100652cac(plVar5,PTR_s_build___MenuPartsCommon_tga_101854970,"ice_icon_small");
  FUN_100651594(plVar6,PTR_s_build___Fonts_Brandon_Bold_48_fo_10184e238,&DAT_10115a168);
  FUN_100651594(plVar7,PTR_s_build___Fonts_Brandon_Bold_40_fo_10184e230,&DAT_10115a168);
  uVar9 = FUN_1004e0150("MENU_GUILD_SEASON_REWARDS_EXPLANATION_TEXT",0);
  FUN_1006513c0(plVar7,uVar9);
  if ((*(float *)(param_1 + 0x253) != 0.6) || (*(float *)((long)param_1 + 0x129c) != 0.6)) {
    param_1[0x253] = 0x3f19999a3f19999a;
    FUN_1000200a0(plVar7);
  }
  lVar10 = 0x1fc;
  do {
    *(uint *)((long)param_1 + lVar10) = *(uint *)((long)param_1 + lVar10) & 0xfffffffb;
    lVar10 = lVar10 + 0x130;
  } while (lVar10 != 0xcac);
  FUN_100651594(plVar1,PTR_s_build___Fonts_Brandon_Light_80_f_10184e1d0,&DAT_10115a168);
  return param_1;
}




long * FUN_10023b0ac(long *param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_10064e20c();
  *puVar2 = &PTR_FUN_101477aa8;
  puVar2 = puVar2 + 0x17;
  thunk_FUN_100652c08(puVar2);
  plVar1 = param_1 + 0x35;
  thunk_FUN_10019468c(plVar1,0);
  thunk_FUN_1001cd5ec(param_1 + 0x1b6,0);
  FUN_1004e313c(param_1 + 0x626);
  *(undefined1 *)(param_1 + 0x628) = 1;
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,puVar2,1);
  FUN_10019495c(plVar1,PTR_s_build___Fonts_Brandon_Bold_40_fo_10184e230);
  FUN_100194ba4(0x41200000,0x40800000,plVar1);
  FUN_100652cac(puVar2,PTR_s_build___MenuPartsCommon_tga_101854970,"arrow_right");
  *(byte *)(param_1 + 0x32) = *(byte *)(param_1 + 0x32) & 0xfe | *(byte *)(param_1 + 0x628);
  *(uint *)((long)param_1 + 0x84) = *(uint *)((long)param_1 + 0x84) | 0x10;
  FUN_10023b1bc(param_1);
  return param_1;
}




void FUN_10023b1bc(long *param_1)

{
  long *plVar1;
  byte bVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  undefined8 local_48;
  
  plVar1 = param_1 + 0x17;
  *(byte *)(param_1 + 0x32) = *(byte *)(param_1 + 0x32) & 0xfe | *(byte *)(param_1 + 0x628);
  fVar3 = (float)FUN_10065317c(plVar1);
  if ((*(float *)(param_1 + 0x1f) != fVar3 * 0.5) || (*(float *)((long)param_1 + 0xfc) != 0.0)) {
    *(float *)(param_1 + 0x1f) = fVar3 * 0.5;
    *(undefined4 *)((long)param_1 + 0xfc) = 0;
    FUN_1000200a0(plVar1);
  }
  local_48 = &DAT_3f0000003f000000;
  (**(code **)(param_1[0x17] + 0x28))(plVar1,&local_48);
  bVar2 = *(byte *)(param_1 + 0x628);
  fVar6 = *(float *)(param_1 + 0x1f);
  fVar3 = (float)FUN_10065317c(plVar1);
  fVar4 = (float)FUN_100642888(param_1 + 0x35,0,0,1,1);
  if (bVar2 == 0) {
    fVar3 = fVar6 + (fVar4 + fVar3) * -0.5 + -5.0;
  }
  else {
    fVar3 = fVar6 + 5.0 + (fVar4 + fVar3) * 0.5;
  }
  fVar4 = *(float *)(param_1 + 0x3d);
  if ((fVar4 != fVar3) || (fVar4 = *(float *)((long)param_1 + 0x1ec), fVar4 != 0.0)) {
    *(float *)(param_1 + 0x3d) = fVar3;
    *(undefined4 *)((long)param_1 + 0x1ec) = 0;
    FUN_1000200a0(param_1 + 0x35);
  }
  uVar5 = (**(code **)(*param_1 + 0x60))(param_1,0,0,1,1);
  local_48 = (undefined1 *)CONCAT44(fVar4,uVar5);
  FUN_10064e48c(param_1,&local_48);
  return;
}




void FUN_10023b31c(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_10023b344();
  operator_delete(pvVar1);
  return;
}




void FUN_10023b330(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_100238bd0();
  operator_delete(pvVar1);
  return;
}




void FUN_10023b344(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR_thunk_FUN_10023b344_1014779a8;
  thunk_FUN_100651068(param_1 + 0x24a);
  thunk_FUN_100651068(param_1 + 0x224);
  param_1[0x206] = &PTR_FUN_1014a7108;
  param_1[0x21d] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x220);
  FUN_10064e2bc(param_1 + 0x206);
  thunk_FUN_100651068(param_1 + 0x1e0);
  param_1[0x1c2] = &PTR_FUN_1014a7108;
  param_1[0x1d9] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x1dc);
  FUN_10064e2bc(param_1 + 0x1c2);
  thunk_FUN_10064e2bc(param_1 + 0x1ab);
  thunk_FUN_100651068(param_1 + 0x185);
  lVar1 = 0xaf8;
  do {
    thunk_FUN_100651068((long)param_1 + lVar1);
    lVar1 = lVar1 + -0x130;
  } while (lVar1 != 0x48);
  param_1[0x11] = &PTR_FUN_1014a7108;
  param_1[0x28] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x2b);
  FUN_10064e2bc(param_1 + 0x11);
  FUN_10064221c(param_1);
  return;
}




void FUN_10023b43c(uint *param_1,uint param_2)

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




long * FUN_10023b4b8(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  uint uVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 local_a0;
  undefined8 uStack_98;
  code *local_90;
  long *plStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  
  lVar12 = FUN_1001e6910();
  FUN_10014f4a0(lVar12 + 0x2c30);
  *param_1 = (long)&PTR_thunk_FUN_10023bbe4_101477bf0;
  param_1[0x586] = (long)&PTR_FUN_101477e00;
  plVar2 = param_1 + 0x589;
  FUN_1006421a8();
  param_1[0x589] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar3 = param_1 + 0x59a;
  thunk_FUN_100652c08(plVar3);
  plVar4 = param_1 + 0x5b8;
  FUN_10064e264(plVar4);
  plVar5 = param_1 + 0x5cf;
  FUN_10053077c(plVar5,0);
  plVar6 = param_1 + 0x679;
  thunk_FUN_1001c81d8();
  plVar7 = param_1 + 0x7d3;
  thunk_FUN_100232f00(plVar7);
  plVar8 = param_1 + 0x723b;
  thunk_FUN_10022d51c(plVar8);
  thunk_FUN_100238378(param_1 + 0x92f5);
  plVar9 = param_1 + 0xb623;
  thunk_FUN_10025fd1c(plVar9);
  plVar10 = param_1 + 0xb933;
  thunk_FUN_1002268e4(plVar10);
  param_1[0xc8c6] = 0;
  param_1[0xc8c3] = 0;
  param_1[0xc8c2] = 0;
  param_1[0xc8c5] = 0;
  param_1[0xc8c4] = 0;
  param_1[0xc8bf] = 0;
  param_1[0xc8be] = 0;
  param_1[0xc8c1] = 0;
  param_1[0xc8c0] = 0;
  param_1[0xc8bb] = 0;
  param_1[0xc8ba] = 0;
  param_1[0xc8bd] = 0;
  param_1[0xc8bc] = 0;
  *(undefined2 *)(param_1 + 0xc8c7) = 1;
  plVar1 = param_1 + 0x2e;
  *(undefined1 *)((long)param_1 + 0x6463a) = 1;
  FUN_100642bd8(plVar1,plVar3,1);
  FUN_100642bd8(plVar1,plVar4,1);
  FUN_100642bd8(plVar4,plVar5,1);
  FUN_1005308f8(plVar5,plVar2,1);
  FUN_100642bd8(plVar2,plVar7,1);
  FUN_100642bd8(plVar2,plVar8,1);
  FUN_100642bd8(plVar2,param_1 + 0x92f5,1);
  FUN_100642bd8(plVar2,plVar9,1);
  FUN_100642bd8(plVar2,plVar6,1);
  FUN_100642bd8(plVar1,plVar10,1);
  FUN_100652cac(plVar3,PTR_s_build___MenuPartsCommon_tga_101854970,"white_background");
  FUN_100652dd4(plVar3,&DAT_10115a164,2);
  uVar11 = *(uint *)((long)param_1 + 0x2d54);
  if ((uVar11 & 0x7f80) != 0x2600) {
    *(uint *)((long)param_1 + 0x2d54) = uVar11 & 0xffff8000 | uVar11 & 0x7f | 0x2600;
    FUN_1000200a0(plVar3);
  }
  FUN_100530adc(plVar5,0,1);
  param_1[0x676] = (long)plVar7;
  param_1[0x677] = (long)plVar8;
  param_1[0x678] = (long)plVar9;
  local_a0 = 0;
  uStack_98 = 0;
  uVar13 = FUN_1004e0150("MENU_PROFILE_TAB_OVERVIEW",0);
  FUN_10010b098(&local_a0,uVar13);
  uVar13 = FUN_1004e0150("MENU_GUILD_TAB_MEMBERS",0);
  FUN_10010b098(&local_a0,uVar13);
  uVar13 = FUN_1004e0150("MENU_GUILD_TAB_TROPHIES",0);
  FUN_10010b098(&local_a0,uVar13);
  FUN_1001c88a4(0,0x43fa0000,0x41a00000,0x3f800000,0x3f800000,plVar6,&local_a0);
  FUN_1001c9460(0xcd,plVar6);
  local_68 = FUN_100644a94("UI::EVENT_CONTROL_TOGGLED");
  local_90 = FUN_10023bac0;
  local_78 = 0;
  uStack_70 = 0;
  local_80 = 0;
  plStack_88 = param_1;
  FUN_10001554c(param_1 + 0x67a,&local_90);
  FUN_1001c9508(plVar6,0,"GUILD.CHESTS.*");
  FUN_1006423ec(param_1 + 0x62,1);
  FUN_1006423ec(param_1 + 0x566,1);
  FUN_100269e20(0,plVar7,1,4,0);
  (**(code **)(*param_1 + 0x188))(param_1,plVar10,plVar2,0,1);
  local_68 = DAT_101d91884;
  local_90 = FUN_10023baec;
  local_78 = 0;
  uStack_70 = 0;
  local_80 = 0;
  plStack_88 = param_1;
  FUN_10001554c(param_1 + 0xb94b,&local_90);
  local_68 = FUN_100644a94("UI::EVENT_EDIT_GUILD_MESSAGE_SUBMIT");
  local_90 = FUN_10023bb14;
  local_78 = 0;
  uStack_70 = 0;
  local_80 = 0;
  plStack_88 = param_1;
  FUN_10001554c(param_1 + 0xb934,&local_90);
  local_68 = FUN_100644a94("UI::EVENT_EDIT_GUILD_MOTTO");
  local_90 = thunk_FUN_10023ccdc;
  plVar1 = param_1 + 0x7d4;
  local_78 = 0;
  uStack_70 = 0;
  local_80 = 0;
  plStack_88 = param_1;
  FUN_10001554c(plVar1,&local_90);
  local_68 = FUN_100644a94("UI::EVENT_EDIT_GUILD_MESSAGE");
  local_90 = thunk_FUN_10023cd58;
  local_78 = 0;
  uStack_70 = 0;
  local_80 = 0;
  plStack_88 = param_1;
  FUN_10001554c(plVar1,&local_90);
  local_68 = FUN_100644a94("UI::EVENT_EDIT_GUILD_NAME");
  local_90 = thunk_FUN_10023cdd4;
  local_78 = 0;
  uStack_70 = 0;
  local_80 = 0;
  plStack_88 = param_1;
  FUN_10001554c(plVar1,&local_90);
  local_68 = FUN_100644a94("UI::EVENT_EDIT_GUILD_TAG");
  local_90 = thunk_FUN_10023ce64;
  local_78 = 0;
  uStack_70 = 0;
  local_80 = 0;
  plStack_88 = param_1;
  FUN_10001554c(plVar1,&local_90);
  local_68 = FUN_100644a94("UI::EVENT_EXPAND_GUILD_SETTINGS");
  local_90 = FUN_10023bb80;
  local_78 = 0;
  uStack_70 = 0;
  local_80 = 0;
  plStack_88 = param_1;
  FUN_10001554c(plVar1,&local_90);
  local_68 = FUN_100644a94("UI::EVENT_GUILD_OVERVIEW_SIZE_CHANGE");
  local_90 = thunk_FUN_10023cef4;
  local_78 = 0;
  uStack_70 = 0;
  local_80 = 0;
  plStack_88 = param_1;
  FUN_10001554c(plVar1,&local_90);
  local_68 = FUN_100644a94("UI::EVENT_EDIT_GUILD_NAME");
  local_90 = thunk_FUN_10023cdd4;
  plVar1 = param_1 + 0x723c;
  local_78 = 0;
  uStack_70 = 0;
  local_80 = 0;
  plStack_88 = param_1;
  FUN_10001554c(plVar1,&local_90);
  local_68 = FUN_100644a94("UI::EVENT_EDIT_GUILD_TAG");
  local_90 = thunk_FUN_10023ce64;
  local_78 = 0;
  uStack_70 = 0;
  local_80 = 0;
  plStack_88 = param_1;
  FUN_10001554c(plVar1,&local_90);
  local_68 = FUN_100644a94("UI::EVENT_EDIT_GUILD_TYPE");
  local_90 = FUN_10023bb88;
  local_78 = 0;
  uStack_70 = 0;
  local_80 = 0;
  plStack_88 = param_1;
  FUN_10001554c(plVar1,&local_90);
  FUN_1004e18bc(&DAT_101d234d8,param_1,0x9d2c9b16,thunk_FUN_10023c094,0);
  FUN_10010b1a8(&local_a0,1);
  return param_1;
}




void FUN_10023bac0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = FUN_100644b2c(param_4);
  FUN_10023df70(param_1,uVar1);
  return;
}




void FUN_10023baec(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010023bb10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x188))(param_1,param_1 + 0xb933,param_1 + 0x589,0,0);
  return;
}




void FUN_10023bb14(long *param_1)

{
  FUN_100237fc8(param_1 + 0x7d3,param_1 + 0xc8b1);
                    /* WARNING: Could not recover jumptable at 0x00010023bb6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x188))(param_1,param_1 + 0xb933,param_1 + 0x589,0,1);
  return;
}




void thunk_FUN_10023ccdc(long *param_1)

{
  long *plVar1;
  undefined4 uStack_24;
  
  FUN_10023c368();
  plVar1 = param_1 + 0xb933;
  uStack_24 = 0;
  FUN_100227d90(plVar1,&DAT_101d91198,&uStack_24);
  FUN_100227fb8(plVar1,4);
  (**(code **)(*param_1 + 0x188))(param_1,plVar1,param_1 + 0x589,1,0);
  return;
}




void thunk_FUN_10023cd58(long *param_1)

{
  long *plVar1;
  undefined4 uStack_24;
  
  FUN_10023c368();
  plVar1 = param_1 + 0xb933;
  uStack_24 = 0;
  FUN_100227d90(plVar1,&DAT_101d91198,&uStack_24);
  FUN_100227fb8(plVar1,5);
  (**(code **)(*param_1 + 0x188))(param_1,plVar1,param_1 + 0x589,1,0);
  return;
}




void thunk_FUN_10023cdd4(long *param_1)

{
  long *plVar1;
  int iVar2;
  
  iVar2 = FUN_100131220();
  if (iVar2 != 0) {
    FUN_10023c368(param_1);
    plVar1 = param_1 + 0xb933;
    FUN_100227d90(plVar1,param_1 + 0xc8c0,param_1 + 0xc8c6);
    FUN_100227fb8(plVar1,2);
                    /* WARNING: Could not recover jumptable at 0x00010023ce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x188))(param_1,plVar1,param_1 + 0x589,1,0);
    return;
  }
  return;
}




void thunk_FUN_10023ce64(long *param_1)

{
  long *plVar1;
  int iVar2;
  
  iVar2 = FUN_100131220();
  if (iVar2 != 0) {
    FUN_10023c368(param_1);
    plVar1 = param_1 + 0xb933;
    FUN_100227d90(plVar1,param_1 + 0xc8c3,(long)param_1 + 0x64634);
    FUN_100227fb8(plVar1,3);
                    /* WARNING: Could not recover jumptable at 0x00010023cee4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x188))(param_1,plVar1,param_1 + 0x589,1,0);
    return;
  }
  return;
}




void FUN_10023bb80(void)

{
  return;
}




void thunk_FUN_10023cef4(undefined1 param_1 [16],float param_2,long param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  undefined1 auStack_2c [4];
  undefined1 auStack_28 [4];
  undefined1 auStack_24 [4];
  
  iVar1 = FUN_1001c94f4(param_3 + 0x33c8);
  if (iVar1 == 0) {
    uVar2 = FUN_100126b4c();
    FUN_1001e35ec(param_3,uVar2,auStack_24,auStack_28,auStack_2c);
    auVar3 = FUN_100236234(param_3 + 0x3e98,1,0,1);
    FUN_10053093c(auVar3,param_2 + 160.0,param_3 + 0x2e78);
  }
  return;
}




void FUN_10023bb88(long *param_1)

{
  FUN_100227fb8(param_1 + 0xb933,6);
                    /* WARNING: Could not recover jumptable at 0x00010023bbd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x188))(param_1,param_1 + 0xb933,param_1 + 0x589,1,0);
  return;
}




void thunk_FUN_10023c094(void)

{
  FUN_10023c094();
  return;
}




long * thunk_FUN_10023b4b8(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  uint uVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  long *plStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  
  lVar12 = FUN_1001e6910();
  FUN_10014f4a0(lVar12 + 0x2c30);
  *param_1 = (long)&PTR_thunk_FUN_10023bbe4_101477bf0;
  param_1[0x586] = (long)&PTR_FUN_101477e00;
  plVar2 = param_1 + 0x589;
  FUN_1006421a8();
  param_1[0x589] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar3 = param_1 + 0x59a;
  thunk_FUN_100652c08(plVar3);
  plVar4 = param_1 + 0x5b8;
  FUN_10064e264(plVar4);
  plVar5 = param_1 + 0x5cf;
  FUN_10053077c(plVar5,0);
  plVar6 = param_1 + 0x679;
  thunk_FUN_1001c81d8();
  plVar7 = param_1 + 0x7d3;
  thunk_FUN_100232f00(plVar7);
  plVar8 = param_1 + 0x723b;
  thunk_FUN_10022d51c(plVar8);
  thunk_FUN_100238378(param_1 + 0x92f5);
  plVar9 = param_1 + 0xb623;
  thunk_FUN_10025fd1c(plVar9);
  plVar10 = param_1 + 0xb933;
  thunk_FUN_1002268e4(plVar10);
  param_1[0xc8c6] = 0;
  param_1[0xc8c3] = 0;
  param_1[0xc8c2] = 0;
  param_1[0xc8c5] = 0;
  param_1[0xc8c4] = 0;
  param_1[0xc8bf] = 0;
  param_1[0xc8be] = 0;
  param_1[0xc8c1] = 0;
  param_1[0xc8c0] = 0;
  param_1[0xc8bb] = 0;
  param_1[0xc8ba] = 0;
  param_1[0xc8bd] = 0;
  param_1[0xc8bc] = 0;
  *(undefined2 *)(param_1 + 0xc8c7) = 1;
  plVar1 = param_1 + 0x2e;
  *(undefined1 *)((long)param_1 + 0x6463a) = 1;
  FUN_100642bd8(plVar1,plVar3,1);
  FUN_100642bd8(plVar1,plVar4,1);
  FUN_100642bd8(plVar4,plVar5,1);
  FUN_1005308f8(plVar5,plVar2,1);
  FUN_100642bd8(plVar2,plVar7,1);
  FUN_100642bd8(plVar2,plVar8,1);
  FUN_100642bd8(plVar2,param_1 + 0x92f5,1);
  FUN_100642bd8(plVar2,plVar9,1);
  FUN_100642bd8(plVar2,plVar6,1);
  FUN_100642bd8(plVar1,plVar10,1);
  FUN_100652cac(plVar3,PTR_s_build___MenuPartsCommon_tga_101854970,"white_background");
  FUN_100652dd4(plVar3,&DAT_10115a164,2);
  uVar11 = *(uint *)((long)param_1 + 0x2d54);
  if ((uVar11 & 0x7f80) != 0x2600) {
    *(uint *)((long)param_1 + 0x2d54) = uVar11 & 0xffff8000 | uVar11 & 0x7f | 0x2600;
    FUN_1000200a0(plVar3);
  }
  FUN_100530adc(plVar5,0,1);
  param_1[0x676] = (long)plVar7;
  param_1[0x677] = (long)plVar8;
  param_1[0x678] = (long)plVar9;
  uStack_a0 = 0;
  uStack_98 = 0;
  uVar13 = FUN_1004e0150("MENU_PROFILE_TAB_OVERVIEW",0);
  FUN_10010b098(&uStack_a0,uVar13);
  uVar13 = FUN_1004e0150("MENU_GUILD_TAB_MEMBERS",0);
  FUN_10010b098(&uStack_a0,uVar13);
  uVar13 = FUN_1004e0150("MENU_GUILD_TAB_TROPHIES",0);
  FUN_10010b098(&uStack_a0,uVar13);
  FUN_1001c88a4(0,0x43fa0000,0x41a00000,0x3f800000,0x3f800000,plVar6,&uStack_a0);
  FUN_1001c9460(0xcd,plVar6);
  uStack_68 = FUN_100644a94("UI::EVENT_CONTROL_TOGGLED");
  pcStack_90 = FUN_10023bac0;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_80 = 0;
  plStack_88 = param_1;
  FUN_10001554c(param_1 + 0x67a,&pcStack_90);
  FUN_1001c9508(plVar6,0,"GUILD.CHESTS.*");
  FUN_1006423ec(param_1 + 0x62,1);
  FUN_1006423ec(param_1 + 0x566,1);
  FUN_100269e20(0,plVar7,1,4,0);
  (**(code **)(*param_1 + 0x188))(param_1,plVar10,plVar2,0,1);
  uStack_68 = DAT_101d91884;
  pcStack_90 = FUN_10023baec;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_80 = 0;
  plStack_88 = param_1;
  FUN_10001554c(param_1 + 0xb94b,&pcStack_90);
  uStack_68 = FUN_100644a94("UI::EVENT_EDIT_GUILD_MESSAGE_SUBMIT");
  pcStack_90 = FUN_10023bb14;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_80 = 0;
  plStack_88 = param_1;
  FUN_10001554c(param_1 + 0xb934,&pcStack_90);
  uStack_68 = FUN_100644a94("UI::EVENT_EDIT_GUILD_MOTTO");
  pcStack_90 = thunk_FUN_10023ccdc;
  plVar1 = param_1 + 0x7d4;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_80 = 0;
  plStack_88 = param_1;
  FUN_10001554c(plVar1,&pcStack_90);
  uStack_68 = FUN_100644a94("UI::EVENT_EDIT_GUILD_MESSAGE");
  pcStack_90 = thunk_FUN_10023cd58;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_80 = 0;
  plStack_88 = param_1;
  FUN_10001554c(plVar1,&pcStack_90);
  uStack_68 = FUN_100644a94("UI::EVENT_EDIT_GUILD_NAME");
  pcStack_90 = thunk_FUN_10023cdd4;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_80 = 0;
  plStack_88 = param_1;
  FUN_10001554c(plVar1,&pcStack_90);
  uStack_68 = FUN_100644a94("UI::EVENT_EDIT_GUILD_TAG");
  pcStack_90 = thunk_FUN_10023ce64;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_80 = 0;
  plStack_88 = param_1;
  FUN_10001554c(plVar1,&pcStack_90);
  uStack_68 = FUN_100644a94("UI::EVENT_EXPAND_GUILD_SETTINGS");
  pcStack_90 = FUN_10023bb80;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_80 = 0;
  plStack_88 = param_1;
  FUN_10001554c(plVar1,&pcStack_90);
  uStack_68 = FUN_100644a94("UI::EVENT_GUILD_OVERVIEW_SIZE_CHANGE");
  pcStack_90 = thunk_FUN_10023cef4;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_80 = 0;
  plStack_88 = param_1;
  FUN_10001554c(plVar1,&pcStack_90);
  uStack_68 = FUN_100644a94("UI::EVENT_EDIT_GUILD_NAME");
  pcStack_90 = thunk_FUN_10023cdd4;
  plVar1 = param_1 + 0x723c;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_80 = 0;
  plStack_88 = param_1;
  FUN_10001554c(plVar1,&pcStack_90);
  uStack_68 = FUN_100644a94("UI::EVENT_EDIT_GUILD_TAG");
  pcStack_90 = thunk_FUN_10023ce64;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_80 = 0;
  plStack_88 = param_1;
  FUN_10001554c(plVar1,&pcStack_90);
  uStack_68 = FUN_100644a94("UI::EVENT_EDIT_GUILD_TYPE");
  pcStack_90 = FUN_10023bb88;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_80 = 0;
  plStack_88 = param_1;
  FUN_10001554c(plVar1,&pcStack_90);
  FUN_1004e18bc(&DAT_101d234d8,param_1,0x9d2c9b16,thunk_FUN_10023c094,0);
  FUN_10010b1a8(&uStack_a0,1);
  return param_1;
}




void FUN_10023bbe4(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_10023bbe4_101477bf0;
  param_1[0x586] = &PTR_FUN_101477e00;
  FUN_1001c8728(param_1 + 0x679);
  FUN_1004e1acc(&DAT_101d234d8,param_1,0x9d2c9b16);
  if (*(char *)((long)param_1 + 0x6462f) < '\0') {
    operator_delete((void *)param_1[0xc8c3]);
  }
  if (*(char *)((long)param_1 + 0x64617) < '\0') {
    operator_delete((void *)param_1[0xc8c0]);
  }
  if (*(char *)((long)param_1 + 0x645ff) < '\0') {
    operator_delete((void *)param_1[0xc8bd]);
  }
  FUN_10015a3d8(param_1 + 0xc8ba,1);
  FUN_10022ae54(param_1 + 0xb933);
  thunk_FUN_100260244(param_1 + 0xb623);
  thunk_FUN_100238998(param_1 + 0x92f5);
  thunk_FUN_10022e36c(param_1 + 0x723b);
  thunk_FUN_1002342b0(param_1 + 0x7d3);
  thunk_FUN_1001c859c(param_1 + 0x679);
  thunk_FUN_100530784(param_1 + 0x5cf);
  thunk_FUN_10064e2bc(param_1 + 0x5b8);
  param_1[0x59a] = &PTR_FUN_1014a7108;
  param_1[0x5b1] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x5b4);
  FUN_10064e2bc(param_1 + 0x59a);
  FUN_10064221c(param_1 + 0x589);
  FUN_10014f51c(param_1 + 0x586);
  FUN_1001e6bb0(param_1);
  return;
}




void thunk_FUN_10023bbe4(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_10023bbe4_101477bf0;
  param_1[0x586] = &PTR_FUN_101477e00;
  FUN_1001c8728(param_1 + 0x679);
  FUN_1004e1acc(&DAT_101d234d8,param_1,0x9d2c9b16);
  if (*(char *)((long)param_1 + 0x6462f) < '\0') {
    operator_delete((void *)param_1[0xc8c3]);
  }
  if (*(char *)((long)param_1 + 0x64617) < '\0') {
    operator_delete((void *)param_1[0xc8c0]);
  }
  if (*(char *)((long)param_1 + 0x645ff) < '\0') {
    operator_delete((void *)param_1[0xc8bd]);
  }
  FUN_10015a3d8(param_1 + 0xc8ba,1);
  FUN_10022ae54(param_1 + 0xb933);
  thunk_FUN_100260244(param_1 + 0xb623);
  thunk_FUN_100238998(param_1 + 0x92f5);
  thunk_FUN_10022e36c(param_1 + 0x723b);
  thunk_FUN_1002342b0(param_1 + 0x7d3);
  thunk_FUN_1001c859c(param_1 + 0x679);
  thunk_FUN_100530784(param_1 + 0x5cf);
  thunk_FUN_10064e2bc(param_1 + 0x5b8);
  param_1[0x59a] = &PTR_FUN_1014a7108;
  param_1[0x5b1] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x5b4);
  FUN_10064e2bc(param_1 + 0x59a);
  FUN_10064221c(param_1 + 0x589);
  FUN_10014f51c(param_1 + 0x586);
  FUN_1001e6bb0(param_1);
  return;
}




void FUN_10023bd60(long param_1)

{
  FUN_10023bbe4(param_1 + -0x2c30);
  return;
}




void FUN_10023bd6c(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_10023bbe4();
  operator_delete(pvVar1);
  return;
}




void FUN_10023bd80(long param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_10023bbe4(param_1 + -0x2c30);
  operator_delete(pvVar1);
  return;
}




void FUN_10023bd9c(long *param_1,undefined8 param_2)

{
  long *plVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  void *local_128;
  void *local_120;
  undefined7 local_118;
  char cStack_111;
  char local_101;
  undefined4 local_100;
  undefined8 local_fc;
  undefined1 auStack_f0 [8];
  void *local_e8;
  undefined **local_e0;
  undefined1 auStack_d8 [40];
  undefined8 local_b0;
  undefined8 local_90;
  void *local_88;
  void *local_80 [2];
  char local_69;
  undefined8 local_50;
  undefined4 local_38;
  
  FUN_1001e6c4c();
  FUN_100143bec(FUN_10023c048,FUN_10023c04c);
  FUN_100237f94(param_1 + 0x7d3,(char)param_1[0xc8c7]);
  plVar1 = param_1 + 0x679;
  uVar3 = FUN_1001c94f4(plVar1);
  (**(code **)(*(long *)param_1[(uVar3 & 0xffffffff) + 0x676] + 0x140))
            ((long *)param_1[(uVar3 & 0xffffffff) + 0x676],param_2);
  if ((int)param_2 == 0) {
    if ((*(byte *)((long)param_1 + 0x5ca1c) >> 2 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010023c044. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x188))(param_1,param_1 + 0xb933,param_1 + 0x589,0,1);
      return;
    }
  }
  else {
    FUN_10023c050();
    FUN_10023c094(param_1);
    if (param_1[0xc8bc] == 0) {
      uVar3 = FUN_1001c94f4(plVar1);
      if (param_1[(uVar3 & 0xffffffff) + 0x676] != 0) {
        uVar3 = FUN_1001c94f4(plVar1);
        param_1[0xc8bc] = param_1[(uVar3 & 0xffffffff) + 0x676];
      }
    }
    FUN_10023c368(param_1);
    if ((((char)param_1[0xc8c7] != '\0') && (iVar2 = FUN_100130330(), iVar2 != 0)) &&
       (uVar3 = FUN_10013033c("seasonGuildTrophy"), (uVar3 & 1) == 0)) {
      thunk_FUN_1001cd434(&local_e0);
      uVar4 = FUN_1004e0150("MAIN_SEASON_TROPHY_GUILD_TOOLTIP",0);
      thunk_FUN_1004e439c(auStack_f0,uVar4);
      thunk_FUN_1004e439c(&local_128,auStack_f0);
      FUN_10003330c(&local_118,&DAT_101d91198);
      local_100 = 1;
      local_fc = 0x41a00000;
      FUN_10003c048(auStack_d8,&local_128);
      if (local_101 < '\0') {
        operator_delete((void *)CONCAT17(cStack_111,local_118));
      }
      if (local_120 != (void *)0x0) {
        operator_delete__(local_120);
      }
      local_b0 = FUN_1001c94fc(plVar1,2);
      local_38 = 1;
      local_50 = 0x441600003f000000;
      FUN_10001549c(&local_128,"seasonGuildTrophy");
      std::string::operator=((string *)local_80,(string *)&local_128);
      if (cStack_111 < '\0') {
        operator_delete(local_128);
      }
      uVar4 = FUN_10002f320();
      FUN_10001549c(&local_128,"seasonTrophy");
      FUN_100030e74(uVar4,&local_128,&local_e0);
      if (cStack_111 < '\0') {
        operator_delete(local_128);
      }
      if (local_e8 != (void *)0x0) {
        operator_delete__(local_e8);
      }
      local_e0 = &PTR_FUN_1014666e0;
      if (local_69 < '\0') {
        operator_delete(local_80[0]);
      }
      if (local_88 != (void *)0x0) {
        operator_delete__(local_88);
        local_90 = 0;
        local_88 = (void *)0x0;
      }
      FUN_10003c1ec(auStack_d8,1);
    }
  }
  return;
}




void FUN_10023c048(void)

{
  return;
}




void FUN_10023c04c(void)

{
  return;
}




void FUN_10023c050(void)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_100143bc4();
  if ((((char)piVar1[6] == '\0') && (*piVar1 != 0)) && (piVar1[1] == 0)) {
    FUN_100143c74(FUN_10023e08c,FUN_10023e144);
    return;
  }
  return;
}




void FUN_10023c094(long param_1)

{
  ulong uVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  uint *puVar7;
  byte bVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  ulong local_70;
  long local_68;
  
  local_70 = 0;
  local_68 = 0;
  FUN_100136ce8(&local_70);
  if ((int)local_70 != 0) {
    uVar12 = 0;
    do {
      lVar6 = local_68;
      lVar9 = local_68 + uVar12 * 0xe8;
      uVar5 = *(ulong *)(lVar9 + 200);
      bVar8 = *(byte *)(lVar9 + 0xd7);
      uVar4 = (ulong)bVar8;
      uVar11 = uVar5;
      if (-1 < (char)bVar8) {
        uVar11 = uVar4;
      }
      if (uVar11 == 0xb) {
        iVar2 = std::string::compare(lVar9 + 0xc0U,0,(char *)0xffffffffffffffff,0x1013e79c2);
        if (iVar2 != 0) {
          bVar8 = *(byte *)(lVar9 + 0xd7);
          uVar4 = (ulong)bVar8;
          uVar5 = *(ulong *)(lVar9 + 200);
          goto LAB_10023c15c;
        }
        lVar6 = lVar6 + uVar12 * 0xe8;
        puVar7 = (uint *)(lVar6 + 8);
        uVar3 = *puVar7;
        if (uVar3 != 0) {
          uVar11 = 0;
          do {
            lVar9 = *(long *)(lVar6 + 0x10) + uVar11 * 0xa0;
            if (*(uint *)(lVar9 + 8) != 0) {
              lVar13 = 0;
              uVar5 = 0;
              do {
                lVar10 = *(long *)(lVar9 + 0x10);
                uVar4 = lVar10 + lVar13;
                uVar1 = *(ulong *)(uVar4 + 8);
                if (-1 < (char)*(byte *)(uVar4 + 0x17)) {
                  uVar1 = (ulong)*(byte *)(uVar4 + 0x17);
                }
                if ((uVar1 == 4) &&
                   (iVar2 = std::string::compare(uVar4,0,(char *)0xffffffffffffffff,0x1013d24d0),
                   iVar2 == 0)) {
                  std::string::operator=((string *)(param_1 + 0x64600),(string *)(lVar9 + 0x60));
                  *(undefined4 *)(param_1 + 0x64630) = *(undefined4 *)(lVar10 + lVar13 + 0x18);
                }
                uVar5 = uVar5 + 1;
                lVar13 = lVar13 + 0x20;
              } while (uVar5 < *(uint *)(lVar9 + 8));
              uVar3 = *puVar7;
            }
            uVar11 = uVar11 + 1;
          } while (uVar11 < uVar3);
        }
      }
      else {
LAB_10023c15c:
        if (-1 < (char)bVar8) {
          uVar5 = uVar4;
        }
        if ((uVar5 == 0xe) &&
           (iVar2 = std::string::compare(lVar9 + 0xc0U,0,(char *)0xffffffffffffffff,0x1013e79ce),
           iVar2 == 0)) {
          lVar6 = lVar6 + uVar12 * 0xe8;
          puVar7 = (uint *)(lVar6 + 8);
          uVar3 = *puVar7;
          if (uVar3 != 0) {
            uVar11 = 0;
            do {
              lVar9 = *(long *)(lVar6 + 0x10) + uVar11 * 0xa0;
              if (*(uint *)(lVar9 + 8) != 0) {
                lVar13 = 0;
                uVar5 = 0;
                do {
                  lVar10 = *(long *)(lVar9 + 0x10);
                  uVar4 = lVar10 + lVar13;
                  uVar1 = *(ulong *)(uVar4 + 8);
                  if (-1 < (char)*(byte *)(uVar4 + 0x17)) {
                    uVar1 = (ulong)*(byte *)(uVar4 + 0x17);
                  }
                  if ((uVar1 == 4) &&
                     (iVar2 = std::string::compare(uVar4,0,(char *)0xffffffffffffffff,0x1013d24d0),
                     iVar2 == 0)) {
                    std::string::operator=((string *)(param_1 + 0x64618),(string *)(lVar9 + 0x60));
                    *(undefined4 *)(param_1 + 0x64634) = *(undefined4 *)(lVar10 + lVar13 + 0x18);
                  }
                  uVar5 = uVar5 + 1;
                  lVar13 = lVar13 + 0x20;
                } while (uVar5 < *(uint *)(lVar9 + 8));
                uVar3 = *puVar7;
              }
              uVar11 = uVar11 + 1;
            } while (uVar11 < uVar3);
          }
        }
      }
      uVar12 = uVar12 + 1;
    } while (uVar12 < (local_70 & 0xffffffff));
  }
  FUN_100144b1c(&local_70,1);
  return;
}




void FUN_10023c368(undefined1 param_1 [16],float param_2,long param_3)

{
  long lVar1;
  long *plVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  long lVar6;
  uint uVar7;
  undefined4 uVar8;
  
  lVar1 = param_3 + 0x2e78;
  if (*(float *)(param_3 + 0x2ebc) != 0.0) {
    *(undefined4 *)(param_3 + 0x2ebc) = 0;
    FUN_1000200a0(lVar1);
  }
  plVar2 = (long *)(param_3 + 0x645e0);
  if ((long *)*plVar2 == (long *)0x0) {
    bVar5 = false;
    uVar7 = *(uint *)(param_3 + 0x2efc) & 0xffffffef;
  }
  else {
    (**(code **)(*(long *)*plVar2 + 0x150))();
    uVar8 = (**(code **)(*(long *)*plVar2 + 0x58))((long *)*plVar2,1,0,1,1);
    FUN_10053093c(uVar8,param_2 + 160.0,lVar1);
    lVar6 = *plVar2;
    bVar3 = lVar6 == param_3 + 0x3e98;
    bVar4 = lVar6 == param_3 + 0x391d8;
    bVar5 = bVar3 || bVar4;
    uVar7 = 0x10;
    if (!bVar3 && !bVar4) {
      uVar7 = 0;
    }
    uVar7 = uVar7 | *(uint *)(param_3 + 0x2efc) & 0xffffffef;
  }
  *(uint *)(param_3 + 0x2efc) = uVar7;
  FUN_100530adc(lVar1,0,bVar5);
  return;
}




void thunk_FUN_10023c464(void)

{
  FUN_10023c464();
  return;
}




void FUN_10023c464(long param_1)

{
  long lVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float local_64;
  float local_60;
  float local_5c;
  undefined8 local_58;
  
  FUN_1001e6c94();
  uVar5 = FUN_100126b4c();
  FUN_1001e35ec(param_1,uVar5,&local_5c,&local_60,&local_64);
  fVar10 = local_5c - local_64;
  FUN_10064e47c(fVar10,fVar10 * 0.75,param_1 + 0x2cd0);
  if ((*(float *)(param_1 + 0x2d18) != 1.3) || (*(float *)(param_1 + 0x2d1c) != 1.3)) {
    *(undefined8 *)(param_1 + 0x2d18) = 0x3fa666663fa66666;
    FUN_1000200a0(param_1 + 0x2cd0);
  }
  lVar1 = param_1 + 0x33c8;
  fVar6 = (float)FUN_100642888(lVar1,0,0,1,1);
  fVar7 = fVar10 * 0.5 - fVar6 * 0.5;
  bVar4 = false;
  if ((*(float *)(param_1 + 0x3408) == fVar7) && (bVar4 = false, !NAN(*(float *)(param_1 + 0x340c)))
     ) {
    bVar4 = *(float *)(param_1 + 0x340c) == 30.0;
  }
  if (!bVar4) {
    *(float *)(param_1 + 0x3408) = fVar7;
    *(undefined4 *)(param_1 + 0x340c) = 0x41f00000;
    FUN_1000200a0(lVar1);
  }
  local_58 = 0x3f000000;
  (**(code **)(*(long *)(param_1 + 0x33c8) + 0x28))(lVar1,&local_58);
  FUN_10064e47c(fVar10,local_60,param_1 + 0x3e98);
  FUN_100235438(param_1 + 0x3e98);
  FUN_10064e47c(fVar10,local_60,param_1 + 0x391d8);
  FUN_10022e748(param_1 + 0x391d8);
  fVar9 = local_60;
  FUN_10064e47c(fVar10,local_60,param_1 + 0x497a8);
  FUN_100239a40(param_1 + 0x497a8);
  fVar7 = local_60;
  cVar3 = *(char *)(param_1 + 0x6463a);
  lVar2 = param_1 + 0x5b118;
  fVar11 = *(float *)(param_1 + 0x340c);
  FUN_1001c9614(lVar1);
  fVar8 = fVar7 + -160.0;
  if (cVar3 != '\0') {
    fVar8 = fVar7;
  }
  FUN_10064e47c(fVar10,fVar8 - (fVar11 + fVar9),lVar2);
  FUN_1002604c4(lVar2);
  FUN_10064e5ec(fVar6 * 0.5,0,lVar2,4,lVar1,6);
  FUN_100227610(param_1 + 0x5c998);
  FUN_10064e47c(fVar10,local_60,param_1 + 0x2dc0);
  return;
}




void thunk_FUN_10023c464(void)

{
  FUN_10023c464();
  return;
}




void FUN_10023c69c(long param_1,long param_2)

{
  string *psVar1;
  string *psVar2;
  size_t sVar3;
  size_t sVar4;
  string sVar5;
  byte bVar6;
  byte bVar7;
  bool bVar8;
  int iVar9;
  undefined8 uVar10;
  ulong uVar11;
  string *psVar12;
  byte *pbVar13;
  byte *pbVar14;
  string *psVar15;
  long lVar16;
  undefined4 local_54;
  undefined8 local_50;
  undefined8 uStack_48;
  
  psVar1 = (string *)(param_2 + 0x180);
  bVar6 = *(byte *)(param_2 + 0x197);
  uVar11 = (ulong)bVar6;
  sVar3 = *(size_t *)(param_2 + 0x188);
  if (-1 < (char)bVar6) {
    sVar3 = uVar11;
  }
  sVar4 = DAT_101d911a0;
  if (-1 < (char)DAT_101d911a8._7_1_) {
    sVar4 = (ulong)DAT_101d911a8._7_1_;
  }
  if (sVar3 == sVar4) {
    psVar2 = *(string **)psVar1;
    if (-1 < (char)bVar6) {
      psVar2 = psVar1;
    }
    pbVar14 = DAT_101d91198;
    if (-1 < (char)DAT_101d911a8._7_1_) {
      pbVar14 = (byte *)&DAT_101d91198;
    }
    if ((char)bVar6 < '\0') {
      if ((sVar3 != 0) && (iVar9 = _memcmp(psVar2,pbVar14,sVar3), iVar9 != 0)) goto LAB_10023c75c;
    }
    else if (sVar3 != 0) {
      if ((uint)*pbVar14 == ((uint)*(string **)psVar1 & 0xff)) {
        pbVar13 = (byte *)(param_2 + 0x181);
        do {
          uVar11 = uVar11 - 1;
          pbVar14 = pbVar14 + 1;
          if (uVar11 == 0) goto LAB_10023c7a4;
          bVar6 = *pbVar13;
          pbVar13 = pbVar13 + 1;
        } while (bVar6 == *pbVar14);
      }
      goto LAB_10023c75c;
    }
  }
  else {
LAB_10023c75c:
    FUN_1002372c8(param_1 + 0x3e98,param_2,*(byte *)(param_1 + 0x2c2c) >> 1 & 1);
    FUN_10022f998(param_1 + 0x391d8,param_2);
    FUN_100238d00(param_1 + 0x497a8,param_2);
  }
LAB_10023c7a4:
  if (*(char *)(param_2 + 0x1d0) == '\0') {
    return;
  }
  psVar2 = (string *)(param_1 + 0x645e8);
  bVar6 = *(byte *)(param_1 + 0x645ff);
  uVar11 = (ulong)bVar6;
  sVar3 = *(size_t *)(param_1 + 0x645f0);
  if (-1 < (char)bVar6) {
    sVar3 = uVar11;
  }
  bVar7 = *(byte *)(param_2 + 0x197);
  sVar4 = *(size_t *)(param_2 + 0x188);
  if (-1 < (char)bVar7) {
    sVar4 = (ulong)bVar7;
  }
  if (sVar3 == sVar4) {
    psVar12 = *(string **)psVar2;
    if (-1 < (char)bVar6) {
      psVar12 = psVar2;
    }
    psVar15 = *(string **)psVar1;
    if (-1 < (char)bVar7) {
      psVar15 = psVar1;
    }
    if ((char)bVar6 < '\0') {
      if ((sVar3 != 0) && (iVar9 = _memcmp(psVar12,psVar15,sVar3), iVar9 != 0)) goto LAB_10023c854;
    }
    else if (sVar3 != 0) {
      if ((uint)(byte)*psVar15 == ((uint)*(string **)psVar2 & 0xff)) {
        psVar12 = (string *)(param_1 + 0x645e9);
        do {
          uVar11 = uVar11 - 1;
          psVar15 = psVar15 + 1;
          if (uVar11 == 0) goto LAB_10023c874;
          sVar5 = *psVar12;
          psVar12 = psVar12 + 1;
        } while (sVar5 == *psVar15);
      }
      goto LAB_10023c854;
    }
  }
  else {
LAB_10023c854:
    std::string::operator=(psVar2,psVar1);
    FUN_1001c9348(param_1 + 0x33c8,0,1);
  }
LAB_10023c874:
  FUN_10015a3d8(param_1 + 0x645d0,0);
  if (*(int *)(param_2 + 0x208) != 0) {
    lVar16 = 0;
    uVar11 = 0;
    do {
      FUN_10023ca94(param_1 + 0x645d0,*(long *)(param_2 + 0x210) + lVar16);
      uVar11 = uVar11 + 1;
      lVar16 = lVar16 + 0x50;
    } while (uVar11 < *(uint *)(param_2 + 0x208));
  }
  *(undefined1 *)(param_1 + 0x64639) = 1;
  uVar11 = FUN_10015d3f8();
  if ((uVar11 & 1) != 0) {
    lVar16 = FUN_10015d3ec();
    bVar6 = *(byte *)(param_1 + 0x645ff);
    uVar11 = (ulong)bVar6;
    bVar7 = *(byte *)(lVar16 + 0x548f);
    sVar3 = *(size_t *)(param_1 + 0x645f0);
    if (-1 < (char)bVar6) {
      sVar3 = uVar11;
    }
    sVar4 = *(size_t *)(lVar16 + 0x5480);
    if (-1 < (char)bVar7) {
      sVar4 = (ulong)bVar7;
    }
    if (sVar3 == sVar4) {
      psVar1 = *(string **)psVar2;
      if (-1 < (char)bVar6) {
        psVar1 = psVar2;
      }
      pbVar14 = *(byte **)(lVar16 + 0x5478);
      if (-1 < (char)bVar7) {
        pbVar14 = (byte *)(lVar16 + 0x5478);
      }
      if ((char)bVar6 < '\0') {
        if (sVar3 != 0) {
          iVar9 = _memcmp(psVar1,pbVar14,sVar3);
          bVar8 = iVar9 == 0;
          goto LAB_10023c97c;
        }
      }
      else if (sVar3 != 0) {
        if ((uint)*pbVar14 == ((uint)*(string **)psVar2 & 0xff)) {
          pbVar13 = (byte *)(param_1 + 0x645e9);
          do {
            uVar11 = uVar11 - 1;
            pbVar14 = pbVar14 + 1;
            bVar8 = uVar11 == 0;
            if (uVar11 == 0) break;
            bVar6 = *pbVar13;
            pbVar13 = pbVar13 + 1;
          } while (bVar6 == *pbVar14);
          goto LAB_10023c97c;
        }
        goto LAB_10023c978;
      }
      bVar8 = true;
      goto LAB_10023c97c;
    }
  }
LAB_10023c978:
  bVar8 = false;
LAB_10023c97c:
  if ((bool)*(char *)(param_1 + 0x64638) != bVar8) {
    *(bool *)(param_1 + 0x64638) = bVar8;
    FUN_100237f94(param_1 + 0x3e98);
    local_50 = 0;
    uStack_48 = 0;
    uVar10 = FUN_1004e0150("MENU_PROFILE_TAB_OVERVIEW",0);
    FUN_10010b098(&local_50,uVar10);
    uVar10 = FUN_1004e0150("MENU_GUILD_TAB_MEMBERS",0);
    FUN_10010b098(&local_50,uVar10);
    uVar10 = FUN_1004e0150("MENU_GUILD_TAB_TROPHIES",0);
    FUN_10010b098(&local_50,uVar10);
    FUN_1001c88a4(0x42800000,0x43fa0000,0x41a00000,0x3f800000,0x3f800000,param_1 + 0x33c8,&local_50)
    ;
    if (*(char *)(param_1 + 0x64638) == '\0') {
      local_54 = 0xff5262cc;
    }
    else {
      local_54 = 0xffffba8c;
    }
    FUN_100652dd4(param_1 + 0x2cd0,&local_54,2);
    FUN_10023c464(param_1);
    FUN_10010b1a8(&local_50,1);
  }
  return;
}




void FUN_10023ca94(uint *param_1,long param_2)

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
    FUN_100159ea4(param_1,uVar2);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  lVar4 = *(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 0x50;
  FUN_10003330c(lVar4 + -0x50,param_2);
  FUN_10003330c(lVar4 + -0x38,param_2 + 0x18);
  FUN_10003330c(lVar4 + -0x20,param_2 + 0x30);
  *(undefined8 *)(lVar4 + -8) = *(undefined8 *)(param_2 + 0x48);
  return;
}




void FUN_10023cb3c(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined4 uVar7;
  undefined1 auStack_80 [8];
  void *local_78;
  undefined1 auStack_70 [8];
  void *local_68;
  undefined1 auStack_60 [8];
  void *local_58;
  
  if (*(char *)(param_1 + 0x64639) != '\0') {
    lVar1 = param_1 + 0x5b118;
    FUN_1002603e8(lVar1);
    if (*(uint *)(param_1 + 0x645d0) != 0) {
      lVar4 = 0;
      uVar5 = 0;
      do {
        lVar6 = *(long *)(param_1 + 0x645d8);
        uVar3 = FUN_1004e0150("MENU_TROPHY_GUILD_SUBTITLE",0);
        thunk_FUN_1004e439c(auStack_60,uVar3);
        FUN_1004e3120(auStack_70,"[SEASON_NAME]");
        lVar2 = lVar6 + lVar4;
        FUN_1000f0ec8(auStack_80,*(undefined4 *)(lVar2 + 0x48),0,0,0);
        FUN_1004e3bc4(auStack_60,0,auStack_70,auStack_80);
        if (local_78 != (void *)0x0) {
          operator_delete__(local_78);
        }
        if (local_68 != (void *)0x0) {
          operator_delete__(local_68);
        }
        FUN_1000f0ec8(auStack_70,*(undefined4 *)(lVar2 + 0x48),0,0,0);
        lVar6 = lVar6 + lVar4;
        FUN_1004e3170(auStack_80,lVar6 + 0x18);
        FUN_100260d08(lVar1,auStack_70,auStack_60,auStack_80,*(undefined4 *)(lVar6 + 0x4c));
        if (local_78 != (void *)0x0) {
          operator_delete__(local_78);
        }
        if (local_68 != (void *)0x0) {
          operator_delete__(local_68);
        }
        if (local_58 != (void *)0x0) {
          operator_delete__(local_58);
        }
        uVar5 = uVar5 + 1;
        lVar4 = lVar4 + 0x50;
      } while (uVar5 < *(uint *)(param_1 + 0x645d0));
    }
    FUN_100260dd0(lVar1,1);
    uVar7 = DAT_101854a80;
    if (*(char *)(param_1 + 0x6463a) != '\0') {
      uVar7 = 0;
    }
    FUN_100260e50(uVar7,lVar1);
  }
  return;
}




void FUN_10023ccdc(long *param_1)

{
  long *plVar1;
  undefined4 local_24;
  
  FUN_10023c368();
  plVar1 = param_1 + 0xb933;
  local_24 = 0;
  FUN_100227d90(plVar1,&DAT_101d91198,&local_24);
  FUN_100227fb8(plVar1,4);
  (**(code **)(*param_1 + 0x188))(param_1,plVar1,param_1 + 0x589,1,0);
  return;
}




void FUN_10023cd58(long *param_1)

{
  long *plVar1;
  undefined4 local_24;
  
  FUN_10023c368();
  plVar1 = param_1 + 0xb933;
  local_24 = 0;
  FUN_100227d90(plVar1,&DAT_101d91198,&local_24);
  FUN_100227fb8(plVar1,5);
  (**(code **)(*param_1 + 0x188))(param_1,plVar1,param_1 + 0x589,1,0);
  return;
}




void FUN_10023cdd4(long *param_1)

{
  long *plVar1;
  int iVar2;
  
  iVar2 = FUN_100131220();
  if (iVar2 != 0) {
    FUN_10023c368(param_1);
    plVar1 = param_1 + 0xb933;
    FUN_100227d90(plVar1,param_1 + 0xc8c0,param_1 + 0xc8c6);
    FUN_100227fb8(plVar1,2);
                    /* WARNING: Could not recover jumptable at 0x00010023ce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x188))(param_1,plVar1,param_1 + 0x589,1,0);
    return;
  }
  return;
}




void FUN_10023ce64(long *param_1)

{
  long *plVar1;
  int iVar2;
  
  iVar2 = FUN_100131220();
  if (iVar2 != 0) {
    FUN_10023c368(param_1);
    plVar1 = param_1 + 0xb933;
    FUN_100227d90(plVar1,param_1 + 0xc8c3,(long)param_1 + 0x64634);
    FUN_100227fb8(plVar1,3);
                    /* WARNING: Could not recover jumptable at 0x00010023cee4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x188))(param_1,plVar1,param_1 + 0x589,1,0);
    return;
  }
  return;
}




void FUN_10023cef4(undefined1 param_1 [16],float param_2,long param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  undefined1 auStack_2c [4];
  undefined1 auStack_28 [4];
  undefined1 auStack_24 [4];
  
  iVar1 = FUN_1001c94f4(param_3 + 0x33c8);
  if (iVar1 == 0) {
    uVar2 = FUN_100126b4c();
    FUN_1001e35ec(param_3,uVar2,auStack_24,auStack_28,auStack_2c);
    auVar3 = FUN_100236234(param_3 + 0x3e98,1,0,1);
    FUN_10053093c(auVar3,param_2 + 160.0,param_3 + 0x2e78);
  }
  return;
}




void FUN_10023cf74(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  int iVar3;
  undefined8 uVar4;
  char *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  byte bVar10;
  
  FUN_100237008(param_1 + 0x3e98);
  iVar3 = FUN_1004f1680(param_2);
  if (iVar3 == 0) goto LAB_10023d1d4;
  if (*(char *)(param_2 + 0x44) != '\0') {
    FUN_100143bec(thunk_FUN_10023c050,FUN_10023d1ec);
    goto LAB_10023d1d4;
  }
  uVar1 = param_2 + 0x48;
  bVar10 = *(byte *)(param_2 + 0x5f);
  uVar8 = (ulong)bVar10;
  uVar9 = *(ulong *)(param_2 + 0x50);
  uVar2 = uVar9;
  if (-1 < (char)bVar10) {
    uVar2 = uVar8;
  }
  if (uVar2 == 0x11) {
    iVar3 = std::string::compare(uVar1,0,(char *)0xffffffffffffffff,0x1013e76d5);
    if (iVar3 != 0) {
      bVar10 = *(byte *)(param_2 + 0x5f);
      uVar8 = (ulong)bVar10;
      uVar9 = *(ulong *)(param_2 + 0x50);
      goto LAB_10023d010;
    }
    uVar4 = FUN_1004e0150("MENU_PROFILE_GUILD_CANT_JOIN_TITLE",0);
    pcVar5 = "MENU_PROFILE_GUILD_CANT_JOIN_REASON_NONEXISTANT_GUILD";
  }
  else {
LAB_10023d010:
    uVar2 = uVar9;
    if (-1 < (char)bVar10) {
      uVar2 = uVar8;
    }
    if (uVar2 == 0x10) {
      iVar3 = std::string::compare(uVar1,0,(char *)0xffffffffffffffff,0x1013e3bc2);
      if (iVar3 == 0) {
        uVar4 = FUN_1004e0150("MENU_PROFILE_GUILD_CANT_JOIN_TITLE",0);
        pcVar5 = "MENU_PROFILE_GUILD_CANT_JOIN_REASON_ALREADY_IN_GUILD";
        goto LAB_10023d1a0;
      }
      bVar10 = *(byte *)(param_2 + 0x5f);
      uVar8 = (ulong)bVar10;
      uVar9 = *(ulong *)(param_2 + 0x50);
    }
    uVar2 = uVar9;
    if (-1 < (char)bVar10) {
      uVar2 = uVar8;
    }
    if (uVar2 == 0xe) {
      iVar3 = std::string::compare(uVar1,0,(char *)0xffffffffffffffff,0x1013e7775);
      if (iVar3 == 0) {
        uVar4 = FUN_1004e0150("MENU_PROFILE_GUILD_CANT_JOIN_TITLE",0);
        pcVar5 = "MENU_PROFILE_GUILD_CANT_JOIN_REASON_NOT_OPEN";
        goto LAB_10023d1a0;
      }
      bVar10 = *(byte *)(param_2 + 0x5f);
      uVar8 = (ulong)bVar10;
      uVar9 = *(ulong *)(param_2 + 0x50);
    }
    uVar2 = uVar9;
    if (-1 < (char)bVar10) {
      uVar2 = uVar8;
    }
    if (uVar2 == 10) {
      iVar3 = std::string::compare(uVar1,0,(char *)0xffffffffffffffff,0x1013e77b1);
      if (iVar3 == 0) {
        uVar4 = FUN_1004e0150("MENU_PROFILE_GUILD_CANT_JOIN_TITLE",0);
        pcVar5 = "MENU_PROFILE_GUILD_CANT_JOIN_REASON_FULL";
        goto LAB_10023d1a0;
      }
      bVar10 = *(byte *)(param_2 + 0x5f);
      uVar8 = (ulong)bVar10;
      uVar9 = *(ulong *)(param_2 + 0x50);
    }
    if (-1 < (char)bVar10) {
      uVar9 = uVar8;
    }
    if ((uVar9 != 0xe) ||
       (iVar3 = std::string::compare(uVar1,0,(char *)0xffffffffffffffff,0x1013e77e5), iVar3 != 0))
    goto LAB_10023d1d4;
    uVar4 = FUN_1004e0150("MENU_PROFILE_GUILD_CANT_JOIN_TITLE",0);
    pcVar5 = "MENU_PROFILE_GUILD_CANT_JOIN_REASON_MIN_SKILL_TIER";
  }
LAB_10023d1a0:
  uVar6 = FUN_1004e0150(pcVar5,0);
  uVar7 = FUN_1004e0150("GENERIC_DIALOG_OKAY",0);
  FUN_1001e3090(uVar4,uVar6,uVar7,0,0);
LAB_10023d1d4:
  FUN_10023c464(param_1);
  return;
}




void thunk_FUN_10023c050(void)

{
  FUN_10023c050();
  return;
}




void FUN_10023d1ec(void)

{
  return;
}




void FUN_10023d1f0(long param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x6463a) = param_2;
  FUN_10023409c(param_1 + 0x3e98);
  *(undefined1 *)(param_1 + 0x497a1) = *(undefined1 *)(param_1 + 0x6463a);
  return;
}




void FUN_10023d234(long param_1)

{
  if ((*(byte *)(param_1 + 0x2c2c) >> 1 & 1) == 0) {
    return;
  }
  FUN_100236fc8(param_1 + 0x3e98);
  return;
}




void FUN_10023d250(long param_1)

{
  if ((*(byte *)(param_1 + -4) >> 1 & 1) == 0) {
    return;
  }
  FUN_100236fc8(param_1 + 0x1268);
  return;
}




void FUN_10023d270(undefined8 param_1,long param_2)

{
  int iVar1;
  
  iVar1 = FUN_1004f1680(param_2);
  if ((iVar1 != 0) && (*(char *)(param_2 + 0x25) != '\0')) {
    FUN_100143bec(thunk_FUN_10023c050,FUN_10023d1ec);
    return;
  }
  return;
}




void thunk_FUN_10023d270(void)

{
  FUN_10023d270();
  return;
}




void FUN_10023d2c0(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  
  FUN_100237e44(param_1 + 0x3e98);
  iVar1 = FUN_1004f1680(param_2);
  if ((iVar1 != 0) && (*(char *)(param_2 + 0x44) != '\0')) {
    lVar2 = FUN_10015d3ec();
    FUN_100169cec(lVar2 + 0x18);
    FUN_100143bec(thunk_FUN_10023c050,FUN_10023d1ec);
    return;
  }
  return;
}




void FUN_10023d324(long param_1)

{
  FUN_10023d2c0(param_1 + -0x2c30);
  return;
}




void FUN_10023d330(long param_1)

{
  FUN_100237e98(param_1 + 0x3e98);
  return;
}




void FUN_10023d33c(long param_1)

{
  FUN_100237e98(param_1 + 0x1268);
  return;
}




void FUN_10023d348(undefined8 param_1,long param_2)

{
  size_t sVar1;
  size_t sVar2;
  undefined8 *puVar3;
  byte bVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  byte *pbVar11;
  byte *pbVar12;
  void *pvVar13;
  
  iVar5 = FUN_1004f1680(param_2);
  if (iVar5 != 0) {
    if (*(char *)(param_2 + 0x44) == '\0') {
      uVar10 = *(ulong *)(param_2 + 0x50);
      if (-1 < (char)*(byte *)(param_2 + 0x5f)) {
        uVar10 = (ulong)*(byte *)(param_2 + 0x5f);
      }
      if ((uVar10 == 0x11) &&
         (iVar5 = std::string::compare(param_2 + 0x48,0,(char *)0xffffffffffffffff,0x1013e7827),
         iVar5 == 0)) {
        uVar9 = FUN_1004e0150("MENU_PROFILE_GUILD_TEAM_MEMBERSHIP_LOCKED_TITLE",0);
        uVar7 = FUN_1004e0150("MENU_PROFILE_GUILD_TEAM_MEMBERSHIP_LOCKED_MESSAGE",0);
        uVar8 = FUN_1004e0150("GENERIC_DIALOG_OKAY",0);
        FUN_1001e3090(uVar9,uVar7,uVar8,0,0);
        return;
      }
    }
    else {
      lVar6 = FUN_10015d3ec();
      bVar4 = *(byte *)(lVar6 + 0x548f);
      uVar10 = (ulong)bVar4;
      sVar1 = *(size_t *)(lVar6 + 0x5480);
      if (-1 < (char)bVar4) {
        sVar1 = uVar10;
      }
      sVar2 = DAT_101d911a0;
      if (-1 < (char)DAT_101d911a8._7_1_) {
        sVar2 = (ulong)DAT_101d911a8._7_1_;
      }
      if (sVar1 != sVar2) {
LAB_10023d4b4:
        uVar9 = FUN_10015d3ec();
        lVar6 = FUN_10015d3ec();
        FUN_1001634c4(uVar9,lVar6 + 0x5478,1);
        return;
      }
      pvVar13 = *(void **)(lVar6 + 0x5478);
      puVar3 = pvVar13;
      if (-1 < (char)bVar4) {
        puVar3 = (undefined8 *)(lVar6 + 0x5478);
      }
      pbVar12 = DAT_101d91198;
      if (-1 < (char)DAT_101d911a8._7_1_) {
        pbVar12 = (byte *)&DAT_101d91198;
      }
      if ((char)bVar4 < '\0') {
        if ((sVar1 != 0) && (iVar5 = _memcmp(puVar3,pbVar12,sVar1), iVar5 != 0)) goto LAB_10023d4b4;
      }
      else if (sVar1 != 0) {
        if ((uint)*pbVar12 == ((uint)pvVar13 & 0xff)) {
          pbVar11 = (byte *)(lVar6 + 0x5479);
          do {
            uVar10 = uVar10 - 1;
            pbVar12 = pbVar12 + 1;
            if (uVar10 == 0) {
              return;
            }
            bVar4 = *pbVar11;
            pbVar11 = pbVar11 + 1;
          } while (bVar4 == *pbVar12);
        }
        goto LAB_10023d4b4;
      }
    }
  }
  return;
}




void thunk_FUN_10023d348(void)

{
  FUN_10023d348();
  return;
}




void FUN_10023d4ec(long *param_1,long param_2)

{
  size_t sVar1;
  size_t sVar2;
  undefined8 *puVar3;
  byte bVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  byte *pbVar11;
  byte *pbVar12;
  void *pvVar13;
  
  iVar5 = FUN_1004f1680(param_2);
  if (iVar5 == 0) {
    return;
  }
  if (*(char *)(param_2 + 0x44) == '\0') {
    uVar10 = *(ulong *)(param_2 + 0x50);
    if (-1 < (char)*(byte *)(param_2 + 0x5f)) {
      uVar10 = (ulong)*(byte *)(param_2 + 0x5f);
    }
    if (uVar10 != 0x12) {
      return;
    }
    iVar5 = std::string::compare(param_2 + 0x48,0,(char *)0xffffffffffffffff,0x1013e3cf7);
    if (iVar5 != 0) {
      return;
    }
    uVar7 = FUN_1004e0150("GENERIC_DIALOG_ERROR",0);
    uVar8 = FUN_1004e0150("MENU_GUILD_ERROR_PROFANITY",0);
    uVar9 = FUN_1004e0150("GENERIC_DIALOG_OKAY",0);
    FUN_1001e3090(uVar7,uVar8,uVar9,0,0);
    return;
  }
  lVar6 = FUN_10015d3ec();
  bVar4 = *(byte *)(lVar6 + 0x548f);
  uVar10 = (ulong)bVar4;
  sVar1 = *(size_t *)(lVar6 + 0x5480);
  if (-1 < (char)bVar4) {
    sVar1 = uVar10;
  }
  sVar2 = DAT_101d911a0;
  if (-1 < (char)DAT_101d911a8._7_1_) {
    sVar2 = (ulong)DAT_101d911a8._7_1_;
  }
  if (sVar1 == sVar2) {
    pvVar13 = *(void **)(lVar6 + 0x5478);
    puVar3 = pvVar13;
    if (-1 < (char)bVar4) {
      puVar3 = (undefined8 *)(lVar6 + 0x5478);
    }
    pbVar12 = DAT_101d91198;
    if (-1 < (char)DAT_101d911a8._7_1_) {
      pbVar12 = (byte *)&DAT_101d91198;
    }
    if ((char)bVar4 < '\0') {
      if ((sVar1 == 0) || (iVar5 = _memcmp(puVar3,pbVar12,sVar1), iVar5 == 0)) goto LAB_10023d630;
    }
    else {
      if (sVar1 == 0) goto LAB_10023d630;
      if ((uint)*pbVar12 == ((uint)pvVar13 & 0xff)) {
        pbVar11 = (byte *)(lVar6 + 0x5479);
        do {
          uVar10 = uVar10 - 1;
          pbVar12 = pbVar12 + 1;
          if (uVar10 == 0) goto LAB_10023d630;
          bVar4 = *pbVar11;
          pbVar11 = pbVar11 + 1;
        } while (bVar4 == *pbVar12);
      }
    }
  }
  uVar7 = FUN_10015d3ec();
  lVar6 = FUN_10015d3ec();
  FUN_1001634c4(uVar7,lVar6 + 0x5478,1);
LAB_10023d630:
                    /* WARNING: Could not recover jumptable at 0x00010023d660. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x188))(param_1,param_1 + 0xb933,param_1 + 0x589,0,1);
  return;
}




void FUN_10023d6bc(long param_1)

{
  FUN_10023d4ec(param_1 + -0x2c30);
  return;
}




void FUN_10023d6c8(long *param_1,long param_2)

{
  size_t sVar1;
  size_t sVar2;
  undefined8 *puVar3;
  byte bVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  byte *pbVar9;
  byte *pbVar10;
  void *pvVar11;
  
  iVar5 = FUN_1004f1680(param_2);
  if ((iVar5 == 0) || (*(char *)(param_2 + 0x44) == '\0')) {
    return;
  }
  lVar6 = FUN_10015d3ec();
  bVar4 = *(byte *)(lVar6 + 0x548f);
  uVar8 = (ulong)bVar4;
  sVar1 = *(size_t *)(lVar6 + 0x5480);
  if (-1 < (char)bVar4) {
    sVar1 = uVar8;
  }
  sVar2 = DAT_101d911a0;
  if (-1 < (char)DAT_101d911a8._7_1_) {
    sVar2 = (ulong)DAT_101d911a8._7_1_;
  }
  if (sVar1 == sVar2) {
    pvVar11 = *(void **)(lVar6 + 0x5478);
    puVar3 = pvVar11;
    if (-1 < (char)bVar4) {
      puVar3 = (undefined8 *)(lVar6 + 0x5478);
    }
    pbVar10 = DAT_101d91198;
    if (-1 < (char)DAT_101d911a8._7_1_) {
      pbVar10 = (byte *)&DAT_101d91198;
    }
    if ((char)bVar4 < '\0') {
      if ((sVar1 == 0) || (iVar5 = _memcmp(puVar3,pbVar10,sVar1), iVar5 == 0)) goto LAB_10023d7d0;
    }
    else {
      if (sVar1 == 0) goto LAB_10023d7d0;
      if ((uint)*pbVar10 == ((uint)pvVar11 & 0xff)) {
        pbVar9 = (byte *)(lVar6 + 0x5479);
        do {
          uVar8 = uVar8 - 1;
          pbVar10 = pbVar10 + 1;
          if (uVar8 == 0) goto LAB_10023d7d0;
          bVar4 = *pbVar9;
          pbVar9 = pbVar9 + 1;
        } while (bVar4 == *pbVar10);
      }
    }
  }
  uVar7 = FUN_10015d3ec();
  lVar6 = FUN_10015d3ec();
  FUN_1001634c4(uVar7,lVar6 + 0x5478,1);
LAB_10023d7d0:
                    /* WARNING: Could not recover jumptable at 0x00010023d800. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x188))(param_1,param_1 + 0xb933,param_1 + 0x589,0,1);
  return;
}




void FUN_10023d804(long param_1)

{
  FUN_10023d6c8(param_1 + -0x2c30);
  return;
}




void FUN_10023d810(long param_1,long param_2)

{
  int iVar1;
  char *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  iVar1 = FUN_1004f1680(param_2);
  if ((iVar1 != 0) && ((*(byte *)(param_1 + 0x2c2c) >> 2 & 1) != 0)) {
    iVar1 = *(int *)(param_2 + 0x28);
    if (iVar1 == -0x18) {
      uVar3 = FUN_1004e0150("GENERIC_DIALOG_ERROR",0);
      pcVar2 = "MENU_DIALOG_SKU_UNAVAILABLE";
    }
    else if (iVar1 == -0x16) {
      uVar3 = FUN_1004e0150("MENU_DIALOG_BOOST_CANT_AFFORD_TITLE",0);
      pcVar2 = "MENU_DIALOG_BOOST_CANT_AFFORD";
    }
    else {
      if (iVar1 == 0) {
        FUN_100230a14(param_1 + 0x391d8,param_2);
        return;
      }
      uVar3 = FUN_1004e0150("GENERIC_DIALOG_ERROR",0);
      pcVar2 = "MENU_DIALOG_PURCHASE_FAILED";
    }
    uVar4 = FUN_1004e0150(pcVar2,0);
    uVar5 = FUN_1004e0150("GENERIC_DIALOG_OKAY",0);
    FUN_1001e3090(uVar3,uVar4,uVar5,0,0);
    return;
  }
  return;
}




void FUN_10023d914(long param_1)

{
  FUN_10023d810(param_1 + -0x2c30);
  return;
}




void FUN_10023d920(long *param_1,long param_2)

{
  ulong uVar1;
  int iVar2;
  char *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  iVar2 = *(int *)(param_2 + 0x40);
  if (iVar2 == -0xb) {
    uVar4 = FUN_1004e0150("GENERIC_DIALOG_ERROR",0);
    pcVar3 = "MENU_GUILD_RENAME_ERROR_RESERVED";
  }
  else if (iVar2 == -10) {
    uVar4 = FUN_1004e0150("GENERIC_DIALOG_ERROR",0);
    pcVar3 = "MENU_GUILD_RENAME_ERROR_TAKEN";
  }
  else {
    if (iVar2 == 0) {
      if (*(char *)(param_2 + 0x44) != '\0') {
        FUN_1001028d4(2);
        if ((*(byte *)((long)param_1 + 0x5ca1c) >> 2 & 1) == 0) {
          return;
        }
                    /* WARNING: Could not recover jumptable at 0x00010023da80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x188))(param_1,param_1 + 0xb933,param_1 + 0x589,0,0);
        return;
      }
      uVar1 = *(ulong *)(param_2 + 0x50);
      if (-1 < (char)*(byte *)(param_2 + 0x5f)) {
        uVar1 = (ulong)*(byte *)(param_2 + 0x5f);
      }
      if ((uVar1 == 0x12) &&
         (iVar2 = std::string::compare(param_2 + 0x48,0,(char *)0xffffffffffffffff,0x1013e789b),
         iVar2 == 0)) {
        uVar4 = FUN_1004e0150("GENERIC_DIALOG_ERROR",0);
        pcVar3 = "MENU_GUILD_RENAME_ERROR_INSUFFICIENT_FUNDS";
        goto LAB_10023da0c;
      }
    }
    uVar4 = FUN_1004e0150("GENERIC_DIALOG_ERROR",0);
    pcVar3 = "MENU_GUILD_RENAME_ERROR";
  }
LAB_10023da0c:
  uVar5 = FUN_1004e0150(pcVar3,0);
  uVar6 = FUN_1004e0150("GENERIC_DIALOG_OKAY",0);
  FUN_1001e3090(uVar4,uVar5,uVar6,0,0);
  FUN_1001028d4(1);
  return;
}




void FUN_10023daa4(long param_1)

{
  FUN_10023d920(param_1 + -0x2c30);
  return;
}




void FUN_10023dab0(long *param_1,long param_2)

{
  ulong uVar1;
  int iVar2;
  char *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  iVar2 = *(int *)(param_2 + 0x40);
  if (iVar2 == -0xb) {
    uVar4 = FUN_1004e0150("GENERIC_DIALOG_ERROR",0);
    pcVar3 = "MENU_GUILD_TAG_RENAME_ERROR_RESERVED";
  }
  else if (iVar2 == -10) {
    uVar4 = FUN_1004e0150("GENERIC_DIALOG_ERROR",0);
    pcVar3 = "MENU_GUILD_TAG_RENAME_ERROR_TAKEN";
  }
  else {
    if (iVar2 == 0) {
      if (*(char *)(param_2 + 0x44) != '\0') {
        FUN_1001029b0(2);
        if ((*(byte *)((long)param_1 + 0x5ca1c) >> 2 & 1) == 0) {
          return;
        }
                    /* WARNING: Could not recover jumptable at 0x00010023dc10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x188))(param_1,param_1 + 0xb933,param_1 + 0x589,0,0);
        return;
      }
      uVar1 = *(ulong *)(param_2 + 0x50);
      if (-1 < (char)*(byte *)(param_2 + 0x5f)) {
        uVar1 = (ulong)*(byte *)(param_2 + 0x5f);
      }
      if ((uVar1 == 0x12) &&
         (iVar2 = std::string::compare(param_2 + 0x48,0,(char *)0xffffffffffffffff,0x1013e789b),
         iVar2 == 0)) {
        uVar4 = FUN_1004e0150("GENERIC_DIALOG_ERROR",0);
        pcVar3 = "MENU_GUILD_TAG_RENAME_ERROR_INSUFFICIENT_FUNDS";
        goto LAB_10023db9c;
      }
    }
    uVar4 = FUN_1004e0150("GENERIC_DIALOG_ERROR",0);
    pcVar3 = "MENU_GUILD_TAG_RENAME_ERROR";
  }
LAB_10023db9c:
  uVar5 = FUN_1004e0150(pcVar3,0);
  uVar6 = FUN_1004e0150("GENERIC_DIALOG_OKAY",0);
  FUN_1001e3090(uVar4,uVar5,uVar6,0,0);
  FUN_1001029b0(1);
  return;
}




void FUN_10023dc34(long param_1)

{
  FUN_10023dab0(param_1 + -0x2c30);
  return;
}




void FUN_10023dc40(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined1 auStack_90 [32];
  void *local_70;
  undefined8 uStack_68;
  long lStack_60;
  void *local_58;
  undefined8 local_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  lStack_48 = 0;
  local_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_68 = 0;
  local_70 = (void *)0x0;
  local_58 = (void *)0x0;
  lStack_60 = 0;
  FUN_100143f70(auStack_90);
  iVar1 = FUN_100143150(param_2,auStack_90);
  if (iVar1 != 0) {
    FUN_100234ccc(param_1 + 0x3e98,auStack_90);
  }
  FUN_1000ec1cc(&uStack_40,1);
  if (lStack_48 < 0) {
    operator_delete(local_58);
  }
  if (lStack_60 < 0) {
    operator_delete(local_70);
  }
  return;
}




void FUN_10023dcd4(long param_1)

{
  FUN_10023dc40(param_1 + -0x2c30);
  return;
}




void FUN_10023dce0(undefined8 param_1,long param_2)

{
  size_t sVar1;
  size_t sVar2;
  undefined8 *puVar3;
  byte bVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  byte *pbVar9;
  byte *pbVar10;
  void *pvVar11;
  
  iVar5 = FUN_1004f1680(param_2);
  if (iVar5 == 0) {
    return;
  }
  if (*(char *)(param_2 + 0x44) == '\0') {
    return;
  }
  lVar6 = FUN_10015d3ec();
  bVar4 = *(byte *)(lVar6 + 0x548f);
  uVar8 = (ulong)bVar4;
  sVar1 = *(size_t *)(lVar6 + 0x5480);
  if (-1 < (char)bVar4) {
    sVar1 = uVar8;
  }
  sVar2 = DAT_101d911a0;
  if (-1 < (char)DAT_101d911a8._7_1_) {
    sVar2 = (ulong)DAT_101d911a8._7_1_;
  }
  if (sVar1 == sVar2) {
    pvVar11 = *(void **)(lVar6 + 0x5478);
    puVar3 = pvVar11;
    if (-1 < (char)bVar4) {
      puVar3 = (undefined8 *)(lVar6 + 0x5478);
    }
    pbVar10 = DAT_101d91198;
    if (-1 < (char)DAT_101d911a8._7_1_) {
      pbVar10 = (byte *)&DAT_101d91198;
    }
    if ((char)bVar4 < '\0') {
      if (sVar1 == 0) {
        return;
      }
      iVar5 = _memcmp(puVar3,pbVar10,sVar1);
      if (iVar5 == 0) {
        return;
      }
    }
    else {
      if (sVar1 == 0) {
        return;
      }
      if ((uint)*pbVar10 == ((uint)pvVar11 & 0xff)) {
        pbVar9 = (byte *)(lVar6 + 0x5479);
        do {
          uVar8 = uVar8 - 1;
          pbVar10 = pbVar10 + 1;
          if (uVar8 == 0) {
            return;
          }
          bVar4 = *pbVar9;
          pbVar9 = pbVar9 + 1;
        } while (bVar4 == *pbVar10);
      }
    }
  }
  uVar7 = FUN_10015d3ec();
  lVar6 = FUN_10015d3ec();
  FUN_1001634c4(uVar7,lVar6 + 0x5478,1);
  return;
}




void thunk_FUN_10023dce0(void)

{
  FUN_10023dce0();
  return;
}




void FUN_10023ddf0(undefined8 param_1,long param_2)

{
  size_t sVar1;
  size_t sVar2;
  undefined8 *puVar3;
  byte bVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  byte *pbVar9;
  byte *pbVar10;
  void *pvVar11;
  
  iVar5 = FUN_1004f1680(param_2);
  if (iVar5 == 0) {
    return;
  }
  if (*(char *)(param_2 + 0x44) == '\0') {
    return;
  }
  lVar6 = FUN_10015d3ec();
  bVar4 = *(byte *)(lVar6 + 0x548f);
  uVar8 = (ulong)bVar4;
  sVar1 = *(size_t *)(lVar6 + 0x5480);
  if (-1 < (char)bVar4) {
    sVar1 = uVar8;
  }
  sVar2 = DAT_101d911a0;
  if (-1 < (char)DAT_101d911a8._7_1_) {
    sVar2 = (ulong)DAT_101d911a8._7_1_;
  }
  if (sVar1 == sVar2) {
    pvVar11 = *(void **)(lVar6 + 0x5478);
    puVar3 = pvVar11;
    if (-1 < (char)bVar4) {
      puVar3 = (undefined8 *)(lVar6 + 0x5478);
    }
    pbVar10 = DAT_101d91198;
    if (-1 < (char)DAT_101d911a8._7_1_) {
      pbVar10 = (byte *)&DAT_101d91198;
    }
    if ((char)bVar4 < '\0') {
      if (sVar1 == 0) {
        return;
      }
      iVar5 = _memcmp(puVar3,pbVar10,sVar1);
      if (iVar5 == 0) {
        return;
      }
    }
    else {
      if (sVar1 == 0) {
        return;
      }
      if ((uint)*pbVar10 == ((uint)pvVar11 & 0xff)) {
        pbVar9 = (byte *)(lVar6 + 0x5479);
        do {
          uVar8 = uVar8 - 1;
          pbVar10 = pbVar10 + 1;
          if (uVar8 == 0) {
            return;
          }
          bVar4 = *pbVar9;
          pbVar9 = pbVar9 + 1;
        } while (bVar4 == *pbVar10);
      }
    }
  }
  uVar7 = FUN_10015d3ec();
  lVar6 = FUN_10015d3ec();
  FUN_1001634c4(uVar7,lVar6 + 0x5478,1);
  return;
}




void thunk_FUN_10023ddf0(void)

{
  FUN_10023ddf0();
  return;
}




void FUN_10023df00(long param_1)

{
  FUN_1001c9348(param_1 + 0x33c8,0,1);
  return;
}




void FUN_10023df14(long param_1)

{
  FUN_1001c9348(param_1 + 0x798,0,1);
  return;
}




void FUN_10023df24(long param_1,undefined8 param_2)

{
  ulong uVar1;
  long *plVar2;
  
  FUN_1001e6da8();
  uVar1 = FUN_1001c94f4(param_1 + 0x33c8);
  plVar2 = *(long **)(param_1 + (uVar1 & 0xffffffff) * 8 + 0x33b0);
  (**(code **)(*plVar2 + 0x140))(plVar2,param_2);
  FUN_10023c368(param_1);
  return;
}




void FUN_10023df70(long param_1,uint param_2)

{
  uint uVar1;
  long *plVar2;
  long *plVar3;
  
  uVar1 = FUN_1001c94f4(param_1 + 0x33c8);
  if ((uVar1 < 3 && param_2 < 3) && uVar1 != param_2) {
    plVar2 = *(long **)(param_1 + 0x33b0 + (ulong)uVar1 * 8);
    plVar3 = *(long **)(param_1 + 0x33b0 + (ulong)param_2 * 8);
    *(long **)(param_1 + 0x645e0) = plVar3;
    if (plVar3 != (long *)0x0 && plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x138))(0x3dcccccd,plVar2,0,4,1);
      if (plVar3 == (long *)(param_1 + 0x3e98)) {
        FUN_100237f94((long *)(param_1 + 0x3e98),*(undefined1 *)(param_1 + 0x64638));
      }
      (**(code **)(*plVar3 + 0x138))(0x3dcccccd,plVar3,1,4,1);
    }
    if (plVar3 != (long *)0x0) {
      if (plVar3 == (long *)(param_1 + 0x5b118)) {
        FUN_10023cb3c(param_1);
      }
      FUN_10023c368(param_1);
      return;
    }
  }
  return;
}




void FUN_10023e07c(long param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x391d3) = param_2;
  return;
}




void FUN_10023e08c(undefined8 param_1)

{
  float fVar1;
  int iVar2;
  void *local_60 [2];
  char local_49;
  float local_48;
  float fStack_44;
  
  FUN_100641464(&fStack_44,&local_48);
  fVar1 = DAT_101d236ac;
  iVar2 = FUN_10002f32c();
  if (iVar2 != 0) {
    FUN_10001549c(local_60,"joinGuildBonus");
    FUN_1000e6f00(fVar1 + fStack_44 * 0.5,local_48 * 0.5,0x3f99999a,param_1,local_60,1);
    if (local_49 < '\0') {
      operator_delete(local_60[0]);
    }
  }
  FUN_100143bec(FUN_10023c048,FUN_10023c04c);
  return;
}




void FUN_10023e144(void)

{
  return;
}




long * FUN_10023e148(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  bool bVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 uVar11;
  long lVar12;
  long *plVar13;
  long *plVar14;
  undefined1 auStack_a0 [8];
  void *local_98;
  code *local_90;
  long *local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  long *plVar10;
  
  puVar8 = (undefined8 *)FUN_10064e20c();
  *puVar8 = &PTR_thunk_FUN_10023f914_101478198;
  puVar8 = puVar8 + 0x17;
  thunk_FUN_100650e64(puVar8);
  plVar13 = param_1 + 0x3d;
  thunk_FUN_100650e64(plVar13);
  plVar14 = param_1 + 99;
  FUN_1006421a8(plVar14);
  param_1[99] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar1 = param_1 + 0x74;
  thunk_FUN_100650e64(plVar1);
  lVar12 = 0x4d0;
  do {
    thunk_FUN_100650e64((long)param_1 + lVar12);
    lVar12 = lVar12 + 0x130;
  } while (lVar12 != 0xac0);
  plVar2 = param_1 + 0x158;
  thunk_FUN_100650e64(plVar2);
  plVar3 = param_1 + 0x17e;
  thunk_FUN_100650e64();
  plVar4 = param_1 + 0x1a4;
  FUN_1006421a8(plVar4);
  param_1[0x1a4] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  FUN_10023f3bc(param_1 + 0x1b5);
  FUN_10023f3bc(param_1 + 0x312);
  plVar10 = param_1 + 0x46f;
  lVar12 = 0x5740;
  do {
    lVar9 = FUN_10023f3bc(plVar10);
    plVar10 = (long *)(lVar9 + 0xae8);
    lVar12 = lVar12 + -0xae8;
  } while (lVar12 != 0);
  *(undefined1 *)(param_1 + 0xf57) = 0;
  (**(code **)(*param_1 + 0x78))(param_1,puVar8,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar13,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar14,1);
  FUN_100642bd8(plVar14,plVar1,1);
  lVar12 = 0x4d0;
  do {
    FUN_100642bd8(plVar14,(long)param_1 + lVar12,1);
    lVar12 = lVar12 + 0x130;
  } while (lVar12 != 0xac0);
  FUN_100642bd8(plVar14,plVar2,1);
  FUN_100642bd8(plVar14,plVar3,1);
  FUN_100642bd8(plVar14,plVar4,1);
  FUN_100642bd8(plVar4,param_1 + 0x1b5,1);
  FUN_100642bd8(plVar4,param_1 + 0x312,1);
  plVar14 = param_1 + 0x46f;
  lVar12 = 8;
  do {
    FUN_100642bd8(plVar4,plVar14,1);
    plVar14 = plVar14 + 0x15d;
    lVar12 = lVar12 + -1;
  } while (lVar12 != 0);
  FUN_100651460(puVar8,&DAT_10115a168);
  FUN_100651038(puVar8,PTR_s_build___Fonts_NorthwoodHigh_Regu_10184e288);
  FUN_100651594(plVar13,PTR_s_build___Fonts_Brandon_Light_48_f_10184e1c0,&DAT_10115a168);
  FUN_100651594(plVar1,PTR_s_build___Fonts_Brandon_Bold_30_fo_10184e220,&DAT_10115a168);
  uVar11 = FUN_1004e0150("GENERIC_STATS",0);
  FUN_1006513c0(plVar1,uVar11);
  FUN_1004e313c(auStack_a0);
  plVar13 = param_1 + 0x9a;
  lVar12 = -5;
  do {
    FUN_100651594(plVar13,PTR_s_build___Fonts_Brandon_Bold_30_fo_10184e220,&DAT_10115a168);
    uVar11 = FUN_1004e0150("STAT_TABLE_LEVEL",0);
    thunk_FUN_1004e439c(&local_90,uVar11);
    FUN_1004e38ac(auStack_a0," %d");
    FUN_1004e372c(&local_90,auStack_a0);
    (**(code **)(*plVar13 + 0x138))(plVar13,&local_90);
    if (local_88 != (void *)0x0) {
      operator_delete__(local_88);
    }
    plVar13 = plVar13 + 0x26;
    bVar7 = lVar12 != -1;
    lVar12 = lVar12 + 1;
  } while (bVar7);
  local_90 = (code *)CONCAT44(local_90._4_4_,0xffffdc78);
  FUN_100651594(plVar2,PTR_s_build___Fonts_Brandon_Bold_30_fo_10184e220,&local_90);
  uVar11 = FUN_1004e0150("STAT_TABLE_CRYSTAL_RATIO",0);
  FUN_1006513c0(plVar2,uVar11);
  FUN_100651700(plVar2,1);
  uVar5 = DAT_101dbd460;
  local_68 = DAT_101dbd460;
  local_90 = thunk_FUN_10023f2f4;
  local_78 = 0;
  uStack_70 = 0;
  local_80 = 0;
  local_88 = param_1;
  FUN_10001554c(param_1 + 0x159,&local_90);
  uVar6 = DAT_101dbd48c;
  local_68 = DAT_101dbd48c;
  local_90 = thunk_FUN_10023f2f4;
  local_78 = 0;
  uStack_70 = 0;
  local_80 = 0;
  local_88 = param_1;
  FUN_10001554c(param_1 + 0x159,&local_90);
  *(uint *)((long)param_1 + 0xb44) = *(uint *)((long)param_1 + 0xb44) | 0x10;
  local_90 = (code *)CONCAT44(local_90._4_4_,0xff6478ff);
  FUN_100651594(plVar3,PTR_s_build___Fonts_Brandon_Bold_30_fo_10184e220,&local_90);
  uVar11 = FUN_1004e0150("STAT_TABLE_WEAPON_RATIO",0);
  FUN_1006513c0(plVar3,uVar11);
  FUN_100651700(plVar3,1);
  local_68 = uVar5;
  local_90 = thunk_FUN_10023f358;
  local_78 = 0;
  uStack_70 = 0;
  local_80 = 0;
  local_88 = param_1;
  FUN_10001554c(param_1 + 0x17f,&local_90);
  local_68 = uVar6;
  local_90 = thunk_FUN_10023f358;
  local_78 = 0;
  uStack_70 = 0;
  local_80 = 0;
  local_88 = param_1;
  FUN_10001554c(param_1 + 0x17f,&local_90);
  *(uint *)((long)param_1 + 0xc74) = *(uint *)((long)param_1 + 0xc74) | 0x10;
  if (local_98 != (void *)0x0) {
    operator_delete__(local_98);
  }
  return param_1;
}




void thunk_FUN_10023f2f4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = FUN_1004e0150("MENU_EXPLAIN_CRYSTAL_RATIO_TITLE",0);
  uVar2 = FUN_1004e0150("MENU_EXPLAIN_CRYSTAL_RATIO_DESC",0);
  uVar3 = FUN_1004e0150("GENERIC_DIALOG_OKAY",0);
  FUN_1001e3090(uVar1,uVar2,uVar3,0,0);
  return;
}




void thunk_FUN_10023f358(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = FUN_1004e0150("MENU_EXPLAIN_WEAPON_RATIO_TITLE",0);
  uVar2 = FUN_1004e0150("MENU_EXPLAIN_WEAPON_RATIO_DESC",0);
  uVar3 = FUN_1004e0150("GENERIC_DIALOG_OKAY",0);
  FUN_1001e3090(uVar1,uVar2,uVar3,0,0);
  return;
}




long * thunk_FUN_10023e148(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  bool bVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 uVar11;
  long lVar12;
  long *plVar13;
  long *plVar14;
  undefined1 auStack_a0 [8];
  void *pvStack_98;
  code *pcStack_90;
  long *plStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  long *plVar10;
  
  puVar8 = (undefined8 *)FUN_10064e20c();
  *puVar8 = &PTR_thunk_FUN_10023f914_101478198;
  puVar8 = puVar8 + 0x17;
  thunk_FUN_100650e64(puVar8);
  plVar13 = param_1 + 0x3d;
  thunk_FUN_100650e64(plVar13);
  plVar14 = param_1 + 99;
  FUN_1006421a8(plVar14);
  param_1[99] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar1 = param_1 + 0x74;
  thunk_FUN_100650e64(plVar1);
  lVar12 = 0x4d0;
  do {
    thunk_FUN_100650e64((long)param_1 + lVar12);
    lVar12 = lVar12 + 0x130;
  } while (lVar12 != 0xac0);
  plVar2 = param_1 + 0x158;
  thunk_FUN_100650e64(plVar2);
  plVar3 = param_1 + 0x17e;
  thunk_FUN_100650e64();
  plVar4 = param_1 + 0x1a4;
  FUN_1006421a8(plVar4);
  param_1[0x1a4] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  FUN_10023f3bc(param_1 + 0x1b5);
  FUN_10023f3bc(param_1 + 0x312);
  plVar10 = param_1 + 0x46f;
  lVar12 = 0x5740;
  do {
    lVar9 = FUN_10023f3bc(plVar10);
    plVar10 = (long *)(lVar9 + 0xae8);
    lVar12 = lVar12 + -0xae8;
  } while (lVar12 != 0);
  *(undefined1 *)(param_1 + 0xf57) = 0;
  (**(code **)(*param_1 + 0x78))(param_1,puVar8,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar13,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar14,1);
  FUN_100642bd8(plVar14,plVar1,1);
  lVar12 = 0x4d0;
  do {
    FUN_100642bd8(plVar14,(long)param_1 + lVar12,1);
    lVar12 = lVar12 + 0x130;
  } while (lVar12 != 0xac0);
  FUN_100642bd8(plVar14,plVar2,1);
  FUN_100642bd8(plVar14,plVar3,1);
  FUN_100642bd8(plVar14,plVar4,1);
  FUN_100642bd8(plVar4,param_1 + 0x1b5,1);
  FUN_100642bd8(plVar4,param_1 + 0x312,1);
  plVar14 = param_1 + 0x46f;
  lVar12 = 8;
  do {
    FUN_100642bd8(plVar4,plVar14,1);
    plVar14 = plVar14 + 0x15d;
    lVar12 = lVar12 + -1;
  } while (lVar12 != 0);
  FUN_100651460(puVar8,&DAT_10115a168);
  FUN_100651038(puVar8,PTR_s_build___Fonts_NorthwoodHigh_Regu_10184e288);
  FUN_100651594(plVar13,PTR_s_build___Fonts_Brandon_Light_48_f_10184e1c0,&DAT_10115a168);
  FUN_100651594(plVar1,PTR_s_build___Fonts_Brandon_Bold_30_fo_10184e220,&DAT_10115a168);
  uVar11 = FUN_1004e0150("GENERIC_STATS",0);
  FUN_1006513c0(plVar1,uVar11);
  FUN_1004e313c(auStack_a0);
  plVar13 = param_1 + 0x9a;
  lVar12 = -5;
  do {
    FUN_100651594(plVar13,PTR_s_build___Fonts_Brandon_Bold_30_fo_10184e220,&DAT_10115a168);
    uVar11 = FUN_1004e0150("STAT_TABLE_LEVEL",0);
    thunk_FUN_1004e439c(&pcStack_90,uVar11);
    FUN_1004e38ac(auStack_a0," %d");
    FUN_1004e372c(&pcStack_90,auStack_a0);
    (**(code **)(*plVar13 + 0x138))(plVar13,&pcStack_90);
    if (plStack_88 != (void *)0x0) {
      operator_delete__(plStack_88);
    }
    plVar13 = plVar13 + 0x26;
    bVar7 = lVar12 != -1;
    lVar12 = lVar12 + 1;
  } while (bVar7);
  pcStack_90 = (code *)CONCAT44(pcStack_90._4_4_,0xffffdc78);
  FUN_100651594(plVar2,PTR_s_build___Fonts_Brandon_Bold_30_fo_10184e220,&pcStack_90);
  uVar11 = FUN_1004e0150("STAT_TABLE_CRYSTAL_RATIO",0);
  FUN_1006513c0(plVar2,uVar11);
  FUN_100651700(plVar2,1);
  uVar5 = DAT_101dbd460;
  uStack_68 = DAT_101dbd460;
  pcStack_90 = thunk_FUN_10023f2f4;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_80 = 0;
  plStack_88 = param_1;
  FUN_10001554c(param_1 + 0x159,&pcStack_90);
  uVar6 = DAT_101dbd48c;
  uStack_68 = DAT_101dbd48c;
  pcStack_90 = thunk_FUN_10023f2f4;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_80 = 0;
  plStack_88 = param_1;
  FUN_10001554c(param_1 + 0x159,&pcStack_90);
  *(uint *)((long)param_1 + 0xb44) = *(uint *)((long)param_1 + 0xb44) | 0x10;
  pcStack_90 = (code *)CONCAT44(pcStack_90._4_4_,0xff6478ff);
  FUN_100651594(plVar3,PTR_s_build___Fonts_Brandon_Bold_30_fo_10184e220,&pcStack_90);
  uVar11 = FUN_1004e0150("STAT_TABLE_WEAPON_RATIO",0);
  FUN_1006513c0(plVar3,uVar11);
  FUN_100651700(plVar3,1);
  uStack_68 = uVar5;
  pcStack_90 = thunk_FUN_10023f358;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_80 = 0;
  plStack_88 = param_1;
  FUN_10001554c(param_1 + 0x17f,&pcStack_90);
  uStack_68 = uVar6;
  pcStack_90 = thunk_FUN_10023f358;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_80 = 0;
  plStack_88 = param_1;
  FUN_10001554c(param_1 + 0x17f,&pcStack_90);
  *(uint *)((long)param_1 + 0xc74) = *(uint *)((long)param_1 + 0xc74) | 0x10;
  if (pvStack_98 != (void *)0x0) {
    operator_delete__(pvStack_98);
  }
  return param_1;
}




void FUN_10023e5ac(long *param_1)

{
  long *plVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  undefined4 local_48;
  undefined4 uStack_44;
  
  FUN_100641464(&uStack_44,&local_48);
  iVar3 = FUN_100126c88();
  iVar4 = FUN_100126cb8(uStack_44,local_48);
  fVar5 = 1.4;
  if (iVar3 == 0) {
    fVar5 = 1.0;
  }
  fVar7 = *(float *)((long)param_1 + 0x4c);
  bVar2 = false;
  if ((*(float *)(param_1 + 9) == fVar5) && (bVar2 = false, !NAN(fVar7) && !NAN(fVar5))) {
    bVar2 = fVar7 == fVar5;
  }
  if (!bVar2) {
    *(float *)(param_1 + 9) = fVar5;
    *(float *)((long)param_1 + 0x4c) = fVar5;
    FUN_1000200a0(param_1);
  }
  if ((iVar4 != 0) &&
     ((fVar7 = *(float *)(param_1 + 0x20), fVar7 != 0.8 ||
      (fVar7 = *(float *)((long)param_1 + 0x104), fVar7 != 0.8)))) {
    param_1[0x20] = 0x3f4ccccd3f4ccccd;
    FUN_1000200a0(param_1 + 0x17);
  }
  plVar1 = param_1 + 0x3d;
  fVar8 = *(float *)((long)param_1 + 0xfc);
  FUN_10064259c(param_1 + 0x17);
  fVar8 = fVar8 + fVar7 + 12.0;
  fVar7 = *(float *)(param_1 + 0x45);
  bVar2 = false;
  if ((fVar7 == 0.0) && (bVar2 = false, !NAN(*(float *)((long)param_1 + 0x22c)) && !NAN(fVar8))) {
    bVar2 = *(float *)((long)param_1 + 0x22c) == fVar8;
  }
  if (!bVar2) {
    *(undefined4 *)(param_1 + 0x45) = 0;
    *(float *)((long)param_1 + 0x22c) = fVar8;
    FUN_1000200a0(plVar1);
  }
  FUN_100651708(*(float *)(param_1 + 0x12) / fVar5,plVar1,1);
  FUN_100651654(0x3f333333,plVar1);
  uVar6 = (**(code **)(*param_1 + 0x48))(param_1);
  (**(code **)(*param_1 + 0x58))(param_1,0,0,1,1);
  FUN_10064e47c(uVar6,fVar7 + 100.0,param_1);
  return;
}




void FUN_10023e71c(long *param_1)

{
  (**(code **)(*param_1 + 0xe8))();
  FUN_10023e5ac(param_1);
  return;
}




void FUN_10023e748(undefined1 param_1 [16],float param_2,long param_3,undefined8 *param_4)

{
  long lVar1;
  char *pcVar2;
  long lVar3;
  long lVar4;
  undefined4 *puVar5;
  int iVar6;
  bool bVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long *plVar12;
  uint *puVar13;
  ulong uVar14;
  long lVar15;
  uint uVar16;
  ulong uVar17;
  undefined8 *puVar18;
  float fVar19;
  float fVar20;
  undefined1 auStack_88 [8];
  void *local_80;
  undefined8 local_78;
  
  pcVar2 = (char *)(param_3 + 0x7ab8);
  bVar7 = *pcVar2 != '\0';
  puVar5 = &DAT_101854ad0;
  if (bVar7) {
    puVar5 = &DAT_101854ad4;
  }
  *(undefined4 *)(param_3 + 0x7abc) = *puVar5;
  puVar5 = &DAT_101854ac8;
  if (bVar7) {
    puVar5 = &DAT_101854acc;
  }
  *(undefined4 *)(param_3 + 0x7ac0) = *puVar5;
  puVar5 = &DAT_101854ad8;
  if (bVar7) {
    puVar5 = &DAT_101854adc;
  }
  *(undefined4 *)(param_3 + 0x7ac4) = *puVar5;
  if (*pcVar2 != '\0') {
    FUN_100651038(param_3 + 0xb8,PTR_s_build___Fonts_NorthwoodHigh_Regu_10184e288);
    FUN_100651038(param_3 + 0x3a0,PTR_s_build___Fonts_Brandon_Bold_24_fo_10184e218);
    lVar15 = 0;
    do {
      FUN_100651594(param_3 + 0x4d0 + lVar15,PTR_s_build___Fonts_Brandon_Bold_24_fo_10184e218,
                    &DAT_10115a168);
      lVar15 = lVar15 + 0x130;
    } while (lVar15 != 0x5f0);
    FUN_100651038(param_3 + 0xac0,PTR_s_build___Fonts_Brandon_Bold_24_fo_10184e218);
    FUN_100651038(param_3 + 0xbf0,PTR_s_build___Fonts_Brandon_Bold_24_fo_10184e218);
  }
  uVar9 = FUN_1004e0150(*param_4,0);
  FUN_1006513c0(param_3 + 0xb8,uVar9);
  lVar15 = param_3 + 0x1e8;
  fVar20 = *(float *)(param_3 + 0xfc);
  FUN_10064259c(param_3 + 0xb8);
  fVar20 = fVar20 + param_2 + 12.0;
  fVar19 = *(float *)(param_3 + 0x228);
  bVar7 = false;
  if ((fVar19 == 0.0) && (bVar7 = false, !NAN(*(float *)(param_3 + 0x22c)) && !NAN(fVar20))) {
    bVar7 = *(float *)(param_3 + 0x22c) == fVar20;
  }
  if (!bVar7) {
    *(undefined4 *)(param_3 + 0x228) = 0;
    *(float *)(param_3 + 0x22c) = fVar20;
    FUN_1000200a0(lVar15);
  }
  uVar9 = FUN_1004e0150(param_4[4],0);
  thunk_FUN_1004e439c(auStack_88,uVar9);
  FUN_1000ecbe8(auStack_88,param_4);
  FUN_1000f2b7c(auStack_88);
  FUN_1006513c0(lVar15,auStack_88);
  iVar6 = *(int *)(param_4 + 0xf);
  iVar8 = 5;
  if (*(char *)((long)param_4 + 0x8d) != '\0') {
    iVar8 = 3;
  }
  lVar1 = param_3 + 0x318;
  fVar20 = *(float *)(param_3 + 0x22c);
  FUN_100651184(lVar15);
  fVar20 = fVar20 + fVar19 + 136.0;
  if ((*(float *)(param_3 + 0x358) != 0.0) || (*(float *)(param_3 + 0x35c) != fVar20)) {
    *(undefined4 *)(param_3 + 0x358) = 0;
    *(float *)(param_3 + 0x35c) = fVar20;
    FUN_1000200a0(lVar1);
  }
  uVar14 = (ulong)(uint)(iVar8 + iVar6);
  plVar12 = (long *)(param_3 + 0x3a0);
  bVar7 = false;
  if ((*(float *)(param_3 + 0x3e4) == 0.0) && (bVar7 = false, !NAN(*(float *)(param_3 + 0x3e0)))) {
    bVar7 = *(float *)(param_3 + 0x3e0) == 0.0;
  }
  if (!bVar7) {
    *(undefined8 *)(param_3 + 0x3e0) = 0;
    FUN_1000200a0(plVar12);
  }
  local_78 = 0x3f80000000000000;
  (**(code **)(*plVar12 + 0x28))(plVar12,&local_78);
  lVar15 = 0;
  uVar17 = 0;
  uVar9 = NEON_fmov(0x3f800000,4);
  do {
    lVar3 = param_3 + lVar15;
    if (uVar17 < uVar14) {
      fVar20 = *(float *)(param_3 + 0x7ac4) + *(float *)(param_3 + 0x7ac0) +
               (float)(uVar17 & 0xffffffff) * *(float *)(param_3 + 0x7abc);
      if ((*(float *)(lVar3 + 0x510) != fVar20) || (*(float *)(lVar3 + 0x514) != 0.0)) {
        *(float *)(lVar3 + 0x510) = fVar20;
        *(undefined4 *)(lVar3 + 0x514) = 0;
        FUN_1000200a0(lVar3 + 0x4d0);
      }
      lVar4 = param_3 + lVar15;
      local_78 = uVar9;
      (**(code **)(*(long *)(lVar4 + 0x4d0) + 0x28))(lVar3 + 0x4d0,&local_78);
      *(uint *)(lVar4 + 0x554) = *(uint *)(lVar4 + 0x554) | 4;
    }
    else {
      *(uint *)(lVar3 + 0x554) = *(uint *)(lVar3 + 0x554) & 0xfffffffb;
    }
    uVar17 = uVar17 + 1;
    lVar15 = lVar15 + 0x130;
  } while (uVar17 != 5);
  lVar15 = param_3 + 0xac0;
  fVar20 = *(float *)(param_3 + 0x7ac4) + *(float *)(param_3 + 0x7ac0) +
           (float)uVar14 * *(float *)(param_3 + 0x7abc);
  if ((*(float *)(param_3 + 0xb00) != fVar20) || (*(float *)(param_3 + 0xb04) != 0.0)) {
    *(float *)(param_3 + 0xb00) = fVar20;
    *(undefined4 *)(param_3 + 0xb04) = 0;
    FUN_1000200a0(lVar15);
  }
  local_78 = uVar9;
  (**(code **)(*(long *)(param_3 + 0xac0) + 0x28))(lVar15,&local_78);
  lVar3 = param_3 + 0xbf0;
  fVar20 = *(float *)(param_3 + 0x7ac4) + *(float *)(param_3 + 0x7ac0) +
           (float)(iVar8 + iVar6 + 1) * *(float *)(param_3 + 0x7abc);
  if ((*(float *)(param_3 + 0xc30) != fVar20) || (*(float *)(param_3 + 0xc34) != 0.0)) {
    *(float *)(param_3 + 0xc30) = fVar20;
    *(undefined4 *)(param_3 + 0xc34) = 0;
    FUN_1000200a0(lVar3);
  }
  local_78 = uVar9;
  (**(code **)(*(long *)(param_3 + 0xbf0) + 0x28))(lVar3,&local_78);
  FUN_100651708(*(undefined4 *)(param_3 + 0x7abc),lVar15,1);
  FUN_100651708(*(undefined4 *)(param_3 + 0x7abc),lVar3,1);
  if (*(float *)(param_3 + 0xd64) != 50.0) {
    *(undefined4 *)(param_3 + 0xd64) = 0x42480000;
    FUN_1000200a0(param_3 + 0xd20);
  }
  lVar15 = FUN_10034c30c("Energy Cost",param_4,0);
  if (lVar15 == 0) {
    uVar9 = FUN_1004e0150("STAT_LABEL_ENERGY_COST",0);
    FUN_10023f070(0,param_3 + 0xda8,uVar9,1,uVar14,*pcVar2);
  }
  else {
    if (*(char *)(lVar15 + 0x34) != '\0') {
      uVar9 = 1;
      goto LAB_10023ebb8;
    }
    uVar9 = FUN_1000eff68(lVar15);
    FUN_10023ee48(*(undefined4 *)(lVar15 + 8),*(undefined4 *)(lVar15 + 0xc),
                  *(undefined4 *)(lVar15 + 0x10),*(undefined4 *)(lVar15 + 0x18),
                  *(undefined4 *)(lVar15 + 0x14),param_3 + 0xda8,uVar9,
                  *(undefined4 *)(lVar15 + 0x2c),uVar14,*pcVar2);
  }
  uVar9 = 0;
LAB_10023ebb8:
  if (*(float *)(param_3 + 0xdec) != 80.0) {
    *(undefined4 *)(param_3 + 0xdec) = 0x42a00000;
    FUN_1000200a0(param_3 + 0xda8);
  }
  lVar15 = FUN_10034c30c("Cooldown",param_4,0);
  if (lVar15 == 0) {
    uVar10 = FUN_1004e0150("STAT_LABEL_COOLDOWN",0);
    FUN_10023f070(0,param_3 + 0x1890,uVar10,4,uVar14,*pcVar2);
  }
  else {
    uVar10 = FUN_1000eff68();
    FUN_10023ee48(*(undefined4 *)(lVar15 + 8),*(undefined4 *)(lVar15 + 0xc),
                  *(undefined4 *)(lVar15 + 0x10),*(undefined4 *)(lVar15 + 0x18),
                  *(undefined4 *)(lVar15 + 0x14),param_3 + 0x1890,uVar10,
                  *(undefined4 *)(lVar15 + 0x2c),uVar14,*pcVar2);
  }
  plVar12 = (long *)param_4[0x15];
  lVar15 = *plVar12;
  if (lVar15 == 0) {
    uVar17 = 0;
  }
  else {
    uVar17 = 0;
    do {
      plVar12 = plVar12 + 1;
      if (*(char *)(lVar15 + 0x58) == '\0') {
        uVar10 = FUN_1000eff84(*(undefined4 *)(lVar15 + 0x54));
        fVar20 = *(float *)(lVar15 + 0x28);
        if (fVar20 <= 0.0) {
          fVar20 = *(float *)(lVar15 + 0x24);
        }
        if ((*(char *)(lVar15 + 0x34) == '\0') && (*(char *)(lVar15 + 0x35) == '\0')) {
          uVar11 = 1;
        }
        else {
          uVar11 = 2;
        }
        FUN_10023f1d8(0x42a00000,*(undefined4 *)(lVar15 + 0x10),*(undefined4 *)(lVar15 + 0x14),
                      *(undefined4 *)(lVar15 + 0x1c),fVar20,*(undefined4 *)(lVar15 + 0x20),param_3,
                      uVar17,uVar9,uVar10,uVar11,uVar14);
        uVar16 = (int)uVar17 + 1;
        uVar17 = (ulong)uVar16;
        if (uVar16 == 8) break;
      }
      lVar15 = *plVar12;
    } while (lVar15 != 0);
  }
  puVar18 = *(undefined8 **)param_4[0x16];
  plVar12 = (long *)param_4[0x16];
  while (uVar16 = (uint)uVar17, puVar18 != (undefined8 *)0x0) {
    if ((((*(int *)((long)puVar18 + 0x2c) != 0) && (*(char *)((long)puVar18 + 0x34) == '\0')) &&
        (iVar8 = _strcasecmp("Energy Cost",(char *)*puVar18), iVar8 != 0)) &&
       (iVar8 = _strcasecmp("Cooldown",*(char **)*plVar12), iVar8 != 0)) {
      uVar10 = FUN_1000eff68(puVar18);
      FUN_10023f1d8(0x42a00000,*(undefined4 *)(puVar18 + 1),*(undefined4 *)((long)puVar18 + 0xc),
                    *(undefined4 *)(puVar18 + 2),*(undefined4 *)(puVar18 + 3),
                    *(undefined4 *)((long)puVar18 + 0x14),param_3,uVar17,uVar9,uVar10,
                    *(undefined4 *)((long)puVar18 + 0x2c),uVar14);
      uVar17 = (ulong)(uVar16 + 1);
      if (uVar16 + 1 == 8) goto LAB_10023edc4;
    }
    puVar18 = (undefined8 *)plVar12[1];
    plVar12 = plVar12 + 1;
  }
  if (uVar16 < 8) {
    puVar13 = (uint *)(param_3 + uVar17 * 0xae8 + 0x23fc);
    iVar8 = uVar16 - 8;
    do {
      *puVar13 = *puVar13 & 0xfffffffb;
      puVar13 = puVar13 + 0x2ba;
      bVar7 = iVar8 != -1;
      iVar8 = iVar8 + 1;
    } while (bVar7);
  }
LAB_10023edc4:
  fVar20 = (float)FUN_1006425d0(lVar1,0,0,1,1);
  fVar20 = fVar20 * *(float *)(param_3 + 0x48);
  if (*(float *)(param_3 + 0x90) < fVar20) {
    fVar20 = *(float *)(param_3 + 0x90) / fVar20;
    bVar7 = false;
    if ((*(float *)(param_3 + 0x360) == fVar20) &&
       (bVar7 = false, !NAN(*(float *)(param_3 + 0x364)) && !NAN(fVar20))) {
      bVar7 = *(float *)(param_3 + 0x364) == fVar20;
    }
    if (!bVar7) {
      *(float *)(param_3 + 0x360) = fVar20;
      *(float *)(param_3 + 0x364) = fVar20;
      FUN_1000200a0(lVar1);
    }
  }
  if (local_80 != (void *)0x0) {
    operator_delete__(local_80);
  }
  return;
}




void FUN_10023ee48(float param_1,float param_2,float param_3,float param_4,float param_5,
                  long *param_6,undefined8 param_7,undefined8 param_8,ulong param_9,
                  undefined8 param_10)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  bool bVar3;
  undefined8 *puVar4;
  long *plVar5;
  ulong uVar6;
  float fVar7;
  undefined8 uStack_a0;
  void *local_98;
  
  FUN_1006513c0(param_6 + 0x2b);
  FUN_10023f5c4(param_6,param_10,param_9);
  FUN_1004e313c(&uStack_a0);
  uVar6 = 0;
  plVar5 = param_6 + 0x51;
  do {
    if (uVar6 < (param_9 & 0xffffffff)) {
      bVar3 = uVar6 != 4;
      fVar7 = param_3;
      if (bVar3) {
        fVar7 = 0.0;
      }
      FUN_1000ee590(param_1 + param_2 * (float)(uVar6 & 0xffffffff) + fVar7,param_8,&uStack_a0,1);
      (**(code **)(*plVar5 + 0x138))(plVar5,&uStack_a0);
      ppuVar2 = &PTR_s_build___Fonts_Brandon_Bold_36_fo_10184e228;
      if (bVar3 || param_3 == 0.0) {
        ppuVar2 = &PTR_s_build___Fonts_Brandon_Regular_36_10184e1f0;
      }
      ppuVar1 = &PTR_s_build___Fonts_Brandon_Bold_48_fo_10184e238;
      if (bVar3 || param_3 == 0.0) {
        ppuVar1 = &PTR_s_build___Fonts_Brandon_Light_48_f_10184e1c0;
      }
      if ((int)param_10 == 0) {
        ppuVar2 = ppuVar1;
      }
      FUN_100651594(plVar5,*ppuVar2,&DAT_10115a168);
    }
    else {
      (**(code **)(*plVar5 + 0x138))(plVar5,&DAT_101d91650);
    }
    uVar6 = uVar6 + 1;
    plVar5 = plVar5 + 0x26;
  } while (uVar6 != 5);
  if (param_5 <= 0.0) {
    puVar4 = &DAT_101d91650;
  }
  else {
    fVar7 = param_5 * 100.0;
    if ((int)param_8 != 2) {
      fVar7 = param_5;
    }
    puVar4 = &uStack_a0;
    FUN_1000ee590(fVar7,2,&uStack_a0,0);
  }
  FUN_1006513c0(param_6 + 0x10f,puVar4);
  if (param_4 <= 0.0) {
    puVar4 = &DAT_101d91650;
  }
  else {
    fVar7 = param_4 * 100.0;
    if ((int)param_8 != 2) {
      fVar7 = param_4;
    }
    puVar4 = &uStack_a0;
    FUN_1000ee590(fVar7,2,&uStack_a0,0);
  }
  FUN_1006513c0(param_6 + 0x135,puVar4);
  (**(code **)(*param_6 + 0x138))(param_6);
  if (local_98 != (void *)0x0) {
    operator_delete__(local_98);
  }
  return;
}




void FUN_10023f070(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5,undefined8 param_6)

{
  undefined4 *puVar1;
  undefined **ppuVar2;
  long *plVar3;
  ulong uVar4;
  undefined1 auStack_88 [8];
  void *local_80;
  undefined4 local_78 [2];
  
  FUN_10023f5c4(param_2,param_6,param_5);
  local_78[0] = 0xff5a5a5a;
  FUN_1006513c0(param_2 + 0x2b,param_3);
  if ((float)param_1 == 0.0) {
    FUN_100651460(param_2 + 0x2b,local_78);
  }
  FUN_1004e313c(auStack_88);
  uVar4 = 0;
  puVar1 = &DAT_10115a168;
  if ((float)param_1 <= 0.0) {
    puVar1 = local_78;
  }
  plVar3 = param_2 + 0x51;
  do {
    if (uVar4 < (param_5 & 0xffffffff)) {
      FUN_1000ee590(param_1,param_4,auStack_88,1);
      (**(code **)(*plVar3 + 0x138))(plVar3,auStack_88);
      ppuVar2 = &PTR_s_build___Fonts_Brandon_Regular_36_10184e1f0;
      if ((int)param_6 == 0) {
        ppuVar2 = &PTR_s_build___Fonts_Brandon_Light_48_f_10184e1c0;
      }
      FUN_100651594(plVar3,*ppuVar2,puVar1);
    }
    else {
      (**(code **)(*plVar3 + 0x138))(plVar3,&DAT_101d91650);
    }
    uVar4 = uVar4 + 1;
    plVar3 = plVar3 + 0x26;
  } while (uVar4 != 5);
  (**(code **)(*param_2 + 0x138))(param_2);
  if (local_80 != (void *)0x0) {
    operator_delete__(local_80);
  }
  return;
}




void FUN_10023f1d8(float param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7,uint param_8,int param_9,
                  undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  long lVar1;
  
  lVar1 = param_7 + (ulong)param_8 * 0xae8 + 0x2378;
  FUN_10023ee48(param_2,param_3,param_4,param_5,param_6,lVar1,param_10,param_11,param_12,
                *(undefined1 *)(param_7 + 0x7ab8));
  if (param_8 == 0) {
    if (param_9 == 0) {
      if (*(float *)(param_7 + 0x23bc) == param_1 + param_1) goto LAB_10023f2c8;
      *(float *)(param_7 + 0x23bc) = param_1 + param_1;
    }
    else {
      if (*(float *)(param_7 + 0x23bc) == param_1) goto LAB_10023f2c8;
      *(float *)(param_7 + 0x23bc) = param_1;
    }
    FUN_1000200a0(lVar1);
  }
  else {
    FUN_10064e72c(0x41700000,lVar1,0,param_7 + (ulong)(param_8 - 1) * 0xae8 + 0x2378,2);
  }
LAB_10023f2c8:
  param_7 = param_7 + (ulong)param_8 * 0xae8;
  *(uint *)(param_7 + 0x23fc) = *(uint *)(param_7 + 0x23fc) | 4;
  return;
}




void FUN_10023f2f4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = FUN_1004e0150("MENU_EXPLAIN_CRYSTAL_RATIO_TITLE",0);
  uVar2 = FUN_1004e0150("MENU_EXPLAIN_CRYSTAL_RATIO_DESC",0);
  uVar3 = FUN_1004e0150("GENERIC_DIALOG_OKAY",0);
  FUN_1001e3090(uVar1,uVar2,uVar3,0,0);
  return;
}




void FUN_10023f358(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = FUN_1004e0150("MENU_EXPLAIN_WEAPON_RATIO_TITLE",0);
  uVar2 = FUN_1004e0150("MENU_EXPLAIN_WEAPON_RATIO_DESC",0);
  uVar3 = FUN_1004e0150("GENERIC_DIALOG_OKAY",0);
  FUN_1001e3090(uVar1,uVar2,uVar3,0,0);
  return;
}




long * FUN_10023f3bc(long *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  bool bVar4;
  undefined8 *puVar5;
  long lVar6;
  code *local_70;
  long *plStack_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  
  puVar5 = (undefined8 *)FUN_100655644();
  *puVar5 = &PTR_FUN_1014782e0;
  puVar5 = puVar5 + 0x2b;
  thunk_FUN_100650e64(puVar5);
  lVar6 = 0x288;
  do {
    thunk_FUN_100650e64((long)param_1 + lVar6);
    lVar6 = lVar6 + 0x130;
  } while (lVar6 != 0x878);
  thunk_FUN_100650e64(param_1 + 0x10f);
  thunk_FUN_100650e64(param_1 + 0x135);
  param_1[0x15b] = 0;
  (**(code **)(*param_1 + 0x78))(param_1,puVar5,1);
  uVar1 = *(uint *)((long)param_1 + 0x1dc);
  if ((uVar1 & 0x7f80) != 0x7280) {
    *(uint *)((long)param_1 + 0x1dc) = uVar1 & 0xffff8000 | uVar1 & 0x7f | 0x7280;
    FUN_1000200a0(puVar5);
  }
  bVar4 = false;
  if ((*(float *)(param_1 + 0x35) == 0.0) &&
     (bVar4 = false, !NAN(*(float *)((long)param_1 + 0x1ac)))) {
    bVar4 = *(float *)((long)param_1 + 0x1ac) == 0.5;
  }
  if (!bVar4) {
    param_1[0x35] = 0x3f00000000000000;
    FUN_1000200a0(puVar5);
  }
  lVar6 = 0x288;
  do {
    (**(code **)(*param_1 + 0x78))(param_1,(long)param_1 + lVar6,1);
    lVar6 = lVar6 + 0x130;
  } while (lVar6 != 0x878);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x10f,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x135,1);
  uVar2 = DAT_101dbd460;
  local_48 = DAT_101dbd460;
  local_70 = thunk_FUN_10023f2f4;
  local_58 = 0;
  uStack_50 = 0;
  local_60 = 0;
  plStack_68 = param_1;
  FUN_10001554c(param_1 + 0x110,&local_70);
  uVar3 = DAT_101dbd48c;
  local_48 = DAT_101dbd48c;
  local_70 = thunk_FUN_10023f2f4;
  local_58 = 0;
  uStack_50 = 0;
  local_60 = 0;
  plStack_68 = param_1;
  FUN_10001554c(param_1 + 0x110,&local_70);
  *(uint *)((long)param_1 + 0x8fc) = *(uint *)((long)param_1 + 0x8fc) | 0x10;
  local_48 = uVar2;
  local_70 = thunk_FUN_10023f358;
  local_58 = 0;
  uStack_50 = 0;
  local_60 = 0;
  plStack_68 = param_1;
  FUN_10001554c(param_1 + 0x136,&local_70);
  local_48 = uVar3;
  local_70 = thunk_FUN_10023f358;
  local_58 = 0;
  uStack_50 = 0;
  local_60 = 0;
  plStack_68 = param_1;
  FUN_10001554c(param_1 + 0x136,&local_70);
  *(uint *)((long)param_1 + 0xa2c) = *(uint *)((long)param_1 + 0xa2c) | 0x10;
  return param_1;
}




void FUN_10023f5c4(long param_1,int param_2,int param_3)

{
  long lVar1;
  long *plVar2;
  undefined4 *puVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  bool bVar6;
  long *plVar7;
  ulong uVar8;
  float fVar9;
  undefined8 local_58;
  
  bVar6 = param_2 == 0;
  puVar3 = &DAT_101854ad4;
  if (bVar6) {
    puVar3 = &DAT_101854ad0;
  }
  *(undefined4 *)(param_1 + 0xad8) = *puVar3;
  puVar3 = &DAT_101854acc;
  if (bVar6) {
    puVar3 = &DAT_101854ac8;
  }
  *(undefined4 *)(param_1 + 0xadc) = *puVar3;
  puVar3 = &DAT_101854adc;
  if (bVar6) {
    puVar3 = &DAT_101854ad8;
  }
  *(undefined4 *)(param_1 + 0xae0) = *puVar3;
  ppuVar4 = &PTR_s_build___Fonts_Brandon_Regular_30_10184e1e8;
  if (bVar6) {
    ppuVar4 = &PTR_s_build___Fonts_Brandon_Regular_36_10184e1f0;
  }
  lVar1 = param_1 + 0x878;
  ppuVar5 = &PTR_s_build___Fonts_Brandon_Regular_36_10184e1f0;
  if (bVar6) {
    ppuVar5 = &PTR_s_build___Fonts_Brandon_Light_48_f_10184e1c0;
  }
  FUN_100651594(param_1 + 0x158,*ppuVar4,&DAT_10115a168);
  local_58._0_4_ = 0xffffdc78;
  FUN_100651594(lVar1,*ppuVar5,&local_58);
  plVar2 = (long *)(param_1 + 0x9a8);
  local_58 = CONCAT44(local_58._4_4_,0xff6478ff);
  FUN_100651594(plVar2,*ppuVar5,&local_58);
  FUN_10065179c(*(undefined4 *)(param_1 + 0xadc),0,0x3f800000,param_1 + 0x158);
  uVar8 = 0;
  plVar7 = (long *)(param_1 + 0x288);
  do {
    fVar9 = *(float *)(param_1 + 0xae0) + *(float *)(param_1 + 0xadc) +
            (float)(uVar8 & 0xffffffff) * *(float *)(param_1 + 0xad8);
    if ((*(float *)(plVar7 + 8) != fVar9) || (*(float *)((long)plVar7 + 0x44) != 0.0)) {
      *(float *)(plVar7 + 8) = fVar9;
      *(undefined4 *)((long)plVar7 + 0x44) = 0;
      FUN_1000200a0(plVar7);
    }
    local_58 = 0x3f0000003f800000;
    (**(code **)(*plVar7 + 0x28))(plVar7,&local_58);
    uVar8 = uVar8 + 1;
    plVar7 = plVar7 + 0x26;
  } while (uVar8 != 5);
  fVar9 = *(float *)(param_1 + 0xae0) + *(float *)(param_1 + 0xadc) +
          (float)param_3 * *(float *)(param_1 + 0xad8);
  if ((*(float *)(param_1 + 0x8b8) != fVar9) || (*(float *)(param_1 + 0x8bc) != 0.0)) {
    *(float *)(param_1 + 0x8b8) = fVar9;
    *(undefined4 *)(param_1 + 0x8bc) = 0;
    FUN_1000200a0(lVar1);
  }
  local_58 = 0x3f0000003f800000;
  (**(code **)(*(long *)(param_1 + 0x878) + 0x28))(lVar1,&local_58);
  fVar9 = *(float *)(param_1 + 0xae0) + *(float *)(param_1 + 0xadc) +
          (float)(param_3 + 1) * *(float *)(param_1 + 0xad8);
  if ((*(float *)(param_1 + 0x9e8) != fVar9) || (*(float *)(param_1 + 0x9ec) != 0.0)) {
    *(float *)(param_1 + 0x9e8) = fVar9;
    *(undefined4 *)(param_1 + 0x9ec) = 0;
    FUN_1000200a0(plVar2);
  }
  local_58 = 0x3f0000003f800000;
  (**(code **)(*plVar2 + 0x28))(plVar2,&local_58);
  return;
}




void thunk_FUN_10023f914(void)

{
  FUN_10023f914();
  return;
}




void FUN_10023f814(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_10023f914();
  operator_delete(pvVar1);
  return;
}




void FUN_10023f828(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR_FUN_1014782e0;
  thunk_FUN_100651068(param_1 + 0x135);
  thunk_FUN_100651068(param_1 + 0x10f);
  lVar1 = 0x748;
  do {
    thunk_FUN_100651068((long)param_1 + lVar1);
    lVar1 = lVar1 + -0x130;
  } while (lVar1 != 0x158);
  thunk_FUN_100651068(param_1 + 0x2b);
  *param_1 = &PTR_FUN_1014a7f88;
  FUN_10064221c(param_1 + 0x17);
  FUN_10064e2bc(param_1);
  return;
}




void FUN_10023f89c(undefined8 *param_1)

{
  void *pvVar1;
  long lVar2;
  
  *param_1 = &PTR_FUN_1014782e0;
  thunk_FUN_100651068(param_1 + 0x135);
  thunk_FUN_100651068(param_1 + 0x10f);
  lVar2 = 0x748;
  do {
    thunk_FUN_100651068((long)param_1 + lVar2);
    lVar2 = lVar2 + -0x130;
  } while (lVar2 != 0x158);
  thunk_FUN_100651068(param_1 + 0x2b);
  *param_1 = &PTR_FUN_1014a7f88;
  FUN_10064221c(param_1 + 0x17);
  pvVar1 = (void *)FUN_10064e2bc(param_1);
  operator_delete(pvVar1);
  return;
}




void FUN_10023f914(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  
  *param_1 = &PTR_thunk_FUN_10023f914_101478198;
  puVar2 = param_1 + 0xee3;
  puVar3 = param_1 + 0xf57;
  do {
    puVar1 = puVar3 + -0x15d;
    *puVar1 = &PTR_FUN_1014782e0;
    thunk_FUN_100651068(puVar3 + -0x28);
    thunk_FUN_100651068(puVar3 + -0x4e);
    lVar4 = 0;
    do {
      thunk_FUN_100651068((long)puVar2 + lVar4);
      lVar4 = lVar4 + -0x130;
    } while (lVar4 != -0x5f0);
    thunk_FUN_100651068(puVar3 + -0x132);
    *puVar1 = &PTR_FUN_1014a7f88;
    FUN_10064221c(puVar3 + -0x146);
    FUN_10064e2bc(puVar1);
    puVar2 = puVar2 + -0x15d;
    puVar3 = puVar1;
  } while (puVar1 != param_1 + 0x46f);
  param_1[0x312] = &PTR_FUN_1014782e0;
  thunk_FUN_100651068(param_1 + 0x447);
  thunk_FUN_100651068(param_1 + 0x421);
  lVar4 = 0;
  do {
    thunk_FUN_100651068((long)param_1 + lVar4 + 0x1fd8);
    lVar4 = lVar4 + -0x130;
  } while (lVar4 != -0x5f0);
  thunk_FUN_100651068(param_1 + 0x33d);
  param_1[0x312] = &PTR_FUN_1014a7f88;
  FUN_10064221c(param_1 + 0x329);
  FUN_10064e2bc(param_1 + 0x312);
  param_1[0x1b5] = &PTR_FUN_1014782e0;
  thunk_FUN_100651068(param_1 + 0x2ea);
  thunk_FUN_100651068(param_1 + 0x2c4);
  lVar4 = 0x14f0;
  do {
    thunk_FUN_100651068((long)param_1 + lVar4);
    lVar4 = lVar4 + -0x130;
  } while (lVar4 != 0xf00);
  thunk_FUN_100651068(param_1 + 0x1e0);
  param_1[0x1b5] = &PTR_FUN_1014a7f88;
  FUN_10064221c(param_1 + 0x1cc);
  FUN_10064e2bc(param_1 + 0x1b5);
  FUN_10064221c(param_1 + 0x1a4);
  thunk_FUN_100651068(param_1 + 0x17e);
  thunk_FUN_100651068(param_1 + 0x158);
  lVar4 = 0x990;
  do {
    thunk_FUN_100651068((long)param_1 + lVar4);
    lVar4 = lVar4 + -0x130;
  } while (lVar4 != 0x3a0);
  thunk_FUN_100651068(param_1 + 0x74);
  FUN_10064221c(param_1 + 99);
  thunk_FUN_100651068(param_1 + 0x3d);
  thunk_FUN_100651068(param_1 + 0x17);
  FUN_10064e2bc(param_1);
  return;
}




long * FUN_10023fafc(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  undefined1 auStack_68 [4];
  undefined1 auStack_64 [4];
  
  puVar6 = (undefined8 *)FUN_10064e20c();
  *puVar6 = &PTR_thunk_FUN_100240838_101478430;
  puVar6 = puVar6 + 0x17;
  thunk_FUN_100650e64(puVar6);
  thunk_FUN_100650e64(param_1 + 0x3d);
  plVar1 = param_1 + 99;
  thunk_FUN_100650e64(plVar1);
  thunk_FUN_100650e64();
  plVar2 = param_1 + 0xaf;
  thunk_FUN_100650e64(plVar2);
  plVar3 = param_1 + 0xd5;
  FUN_1006421a8(plVar3);
  param_1[0xd5] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar4 = param_1 + 0xe6;
  thunk_FUN_100650e64(plVar4);
  plVar5 = param_1 + 0x10c;
  thunk_FUN_100650e64(plVar5);
  lVar8 = 0;
  do {
    FUN_100240684((long)param_1 + lVar8 + 0x990);
    lVar8 = lVar8 + 0x548;
  } while (lVar8 != 0x2a40);
  *(undefined1 *)(param_1 + 0x67a) = 0;
  (**(code **)(*param_1 + 0x78))(param_1,puVar6,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar4,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar5,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar3,1);
  plVar9 = param_1 + 0x132;
  lVar8 = 8;
  do {
    FUN_100642bd8(plVar3,plVar9,1);
    plVar9 = plVar9 + 0xa9;
    lVar8 = lVar8 + -1;
  } while (lVar8 != 0);
  FUN_100641464(auStack_64,auStack_68);
  FUN_100651460(puVar6,&DAT_10115a168);
  FUN_100651038(puVar6,PTR_s_build___Fonts_NorthwoodHigh_Regu_10184e288);
  FUN_100651594(param_1 + 0x3d,PTR_s_build___Fonts_Brandon_Light_48_f_10184e1c0,&DAT_10115a168);
  FUN_100651594(plVar1,PTR_s_build___Fonts_Brandon_Bold_30_fo_10184e220,&DAT_10115a168);
  uVar7 = FUN_1004e0150("HUD_LEARN_HEROIC_PERK",0);
  FUN_1006513c0(plVar1,uVar7);
  FUN_100651594(param_1 + 0x89,PTR_s_build___Fonts_Brandon_Light_48_f_10184e1c0,&DAT_10115a168);
  FUN_100651594(plVar2,PTR_s_build___Fonts_Brandon_Light_48_f_10184e1c0,&DAT_10115a168);
  FUN_100651594(plVar4,PTR_s_build___Fonts_Brandon_Bold_30_fo_10184e220,&DAT_10115a168);
  uVar7 = FUN_1004e0150("GENERIC_STATS",0);
  FUN_1006513c0(plVar4,uVar7);
  FUN_100651594(plVar5,PTR_s_build___Fonts_Brandon_Regular_30_10184e1e8,&DAT_10115a168);
  uVar7 = FUN_1004e0150("GENERIC_STATS_LEVEL_RANGE",0);
  FUN_1006513c0(plVar5,uVar7);
  return param_1;
}




long * thunk_FUN_10023fafc(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  undefined1 auStack_68 [4];
  undefined1 auStack_64 [4];
  
  puVar6 = (undefined8 *)FUN_10064e20c();
  *puVar6 = &PTR_thunk_FUN_100240838_101478430;
  puVar6 = puVar6 + 0x17;
  thunk_FUN_100650e64(puVar6);
  thunk_FUN_100650e64(param_1 + 0x3d);
  plVar1 = param_1 + 99;
  thunk_FUN_100650e64(plVar1);
  thunk_FUN_100650e64();
  plVar2 = param_1 + 0xaf;
  thunk_FUN_100650e64(plVar2);
  plVar3 = param_1 + 0xd5;
  FUN_1006421a8(plVar3);
  param_1[0xd5] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar4 = param_1 + 0xe6;
  thunk_FUN_100650e64(plVar4);
  plVar5 = param_1 + 0x10c;
  thunk_FUN_100650e64(plVar5);
  lVar8 = 0;
  do {
    FUN_100240684((long)param_1 + lVar8 + 0x990);
    lVar8 = lVar8 + 0x548;
  } while (lVar8 != 0x2a40);
  *(undefined1 *)(param_1 + 0x67a) = 0;
  (**(code **)(*param_1 + 0x78))(param_1,puVar6,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar4,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar5,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar3,1);
  plVar9 = param_1 + 0x132;
  lVar8 = 8;
  do {
    FUN_100642bd8(plVar3,plVar9,1);
    plVar9 = plVar9 + 0xa9;
    lVar8 = lVar8 + -1;
  } while (lVar8 != 0);
  FUN_100641464(auStack_64,auStack_68);
  FUN_100651460(puVar6,&DAT_10115a168);
  FUN_100651038(puVar6,PTR_s_build___Fonts_NorthwoodHigh_Regu_10184e288);
  FUN_100651594(param_1 + 0x3d,PTR_s_build___Fonts_Brandon_Light_48_f_10184e1c0,&DAT_10115a168);
  FUN_100651594(plVar1,PTR_s_build___Fonts_Brandon_Bold_30_fo_10184e220,&DAT_10115a168);
  uVar7 = FUN_1004e0150("HUD_LEARN_HEROIC_PERK",0);
  FUN_1006513c0(plVar1,uVar7);
  FUN_100651594(param_1 + 0x89,PTR_s_build___Fonts_Brandon_Light_48_f_10184e1c0,&DAT_10115a168);
  FUN_100651594(plVar2,PTR_s_build___Fonts_Brandon_Light_48_f_10184e1c0,&DAT_10115a168);
  FUN_100651594(plVar4,PTR_s_build___Fonts_Brandon_Bold_30_fo_10184e220,&DAT_10115a168);
  uVar7 = FUN_1004e0150("GENERIC_STATS",0);
  FUN_1006513c0(plVar4,uVar7);
  FUN_100651594(plVar5,PTR_s_build___Fonts_Brandon_Regular_30_10184e1e8,&DAT_10115a168);
  uVar7 = FUN_1004e0150("GENERIC_STATS_LEVEL_RANGE",0);
  FUN_1006513c0(plVar5,uVar7);
  return param_1;
}




void FUN_10023fda0(long *param_1)

{
  long *plVar1;
  long lVar2;
  bool bVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 auStack_48 [4];
  undefined1 auStack_44 [4];
  
  FUN_100641464(auStack_44,auStack_48);
  iVar4 = FUN_100126c88();
  fVar5 = 1.4;
  if (iVar4 == 0) {
    fVar5 = 1.0;
  }
  fVar7 = *(float *)((long)param_1 + 0x4c);
  bVar3 = false;
  if ((*(float *)(param_1 + 9) == fVar5) && (bVar3 = false, !NAN(fVar7) && !NAN(fVar5))) {
    bVar3 = fVar7 == fVar5;
  }
  if (!bVar3) {
    *(float *)(param_1 + 9) = fVar5;
    *(float *)((long)param_1 + 0x4c) = fVar5;
    FUN_1000200a0(param_1);
  }
  FUN_10064259c(param_1 + 0x17);
  if (*(float *)((long)param_1 + 0x35c) != fVar7 + 12.0) {
    *(float *)((long)param_1 + 0x35c) = fVar7 + 12.0;
    FUN_1000200a0(param_1 + 99);
  }
  plVar1 = param_1 + 0xaf;
  fVar8 = *(float *)((long)param_1 + 0x5bc);
  if (fVar8 != fVar7 + 92.0) {
    *(float *)((long)param_1 + 0x5bc) = fVar7 + 92.0;
    FUN_1000200a0(plVar1);
  }
  fVar6 = (float)(**(code **)(*param_1 + 0x48))(param_1);
  FUN_100651708(fVar6 / fVar5,plVar1,1);
  FUN_100651654(0x3f333333,plVar1);
  FUN_100651184(plVar1);
  fVar8 = fVar7 + 172.0 + fVar8;
  if (*(float *)((long)param_1 + 0x774) != fVar8) {
    *(float *)((long)param_1 + 0x774) = fVar8;
    FUN_1000200a0(param_1 + 0xe6);
  }
  fVar5 = (float)FUN_100651184(param_1 + 0xe6);
  if ((*(float *)(param_1 + 0x114) != fVar5 + 24.0) || (*(float *)((long)param_1 + 0x8a4) != fVar8))
  {
    *(float *)(param_1 + 0x114) = fVar5 + 24.0;
    *(float *)((long)param_1 + 0x8a4) = fVar8;
    FUN_1000200a0(param_1 + 0x10c);
  }
  lVar2 = param_1[0x67a];
  if (*(float *)((long)param_1 + 0x6ec) != fVar8 + 100.0) {
    *(float *)((long)param_1 + 0x6ec) = fVar8 + 100.0;
    FUN_1000200a0(param_1 + 0xd5);
  }
  fVar5 = *(float *)(&DAT_1011584d8 + (ulong)((char)lVar2 == '\0') * 4);
  bVar3 = false;
  if ((*(float *)((long)param_1 + 0x9d4) == 0.0) &&
     (bVar3 = false, !NAN(*(float *)(param_1 + 0x13a)))) {
    bVar3 = *(float *)(param_1 + 0x13a) == 0.0;
  }
  if (!bVar3) {
    param_1[0x13a] = 0;
    FUN_1000200a0(param_1 + 0x132);
  }
  if ((*(float *)(param_1 + 0x1e3) != fVar5) || (*(float *)((long)param_1 + 0xf1c) != 0.0)) {
    *(float *)(param_1 + 0x1e3) = fVar5;
    *(undefined4 *)((long)param_1 + 0xf1c) = 0;
    FUN_1000200a0(param_1 + 0x1db);
  }
  if ((*(float *)(param_1 + 0x28c) != 0.0) || (*(float *)((long)param_1 + 0x1464) != 64.0)) {
    param_1[0x28c] = 0x4280000000000000;
    FUN_1000200a0(param_1 + 0x284);
  }
  if ((*(float *)(param_1 + 0x335) != fVar5) || (*(float *)((long)param_1 + 0x19ac) != 64.0)) {
    *(float *)(param_1 + 0x335) = fVar5;
    *(undefined4 *)((long)param_1 + 0x19ac) = 0x42800000;
    FUN_1000200a0(param_1 + 0x32d);
  }
  if ((*(float *)(param_1 + 0x3de) != 0.0) || (*(float *)((long)param_1 + 0x1ef4) != 179.2)) {
    param_1[0x3de] = 0x4333333300000000;
    FUN_1000200a0(param_1 + 0x3d6);
  }
  if ((*(float *)(param_1 + 0x487) != fVar5) || (*(float *)((long)param_1 + 0x243c) != 179.2)) {
    *(float *)(param_1 + 0x487) = fVar5;
    *(undefined4 *)((long)param_1 + 0x243c) = 0x43333333;
    FUN_1000200a0(param_1 + 0x47f);
  }
  if ((*(float *)(param_1 + 0x530) != 0.0) || (*(float *)((long)param_1 + 0x2984) != 243.2)) {
    param_1[0x530] = 0x4373333300000000;
    FUN_1000200a0(param_1 + 0x528);
  }
  if ((*(float *)(param_1 + 0x5d9) != fVar5) || (*(float *)((long)param_1 + 0x2ecc) != 243.2)) {
    *(float *)(param_1 + 0x5d9) = fVar5;
    *(undefined4 *)((long)param_1 + 0x2ecc) = 0x43733333;
    FUN_1000200a0(param_1 + 0x5d1);
  }
  return;
}

