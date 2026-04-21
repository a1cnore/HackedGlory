// functions/10022 — 316 functions
#include "GameKindred.h"




void thunk_FUN_100220190(void)

{
  FUN_100220190();
  return;
}




void thunk_FUN_100220084(long param_1)

{
  void *apvStack_38 [2];
  char cStack_21;
  
  FUN_10001549c(apvStack_38,PTR_s_MENU_CURRENCY_PURCHASE_POPUP_101854ac0);
  FUN_1001ad598(apvStack_38);
  if (cStack_21 < '\0') {
    operator_delete(apvStack_38[0]);
  }
  if (*(char *)(param_1 + 0x186c) != '\0') {
    if (*(int *)(param_1 + 0x1868) == 1) {
      FUN_1001e3fd8();
    }
    else if (*(int *)(param_1 + 0x1868) == 0) {
      FUN_10002f320();
      FUN_1000318ac();
    }
  }
  return;
}




void FUN_100220084(long param_1)

{
  void *local_38 [2];
  char local_21;
  
  FUN_10001549c(local_38,PTR_s_MENU_CURRENCY_PURCHASE_POPUP_101854ac0);
  FUN_1001ad598(local_38);
  if (local_21 < '\0') {
    operator_delete(local_38[0]);
  }
  if (*(char *)(param_1 + 0x186c) != '\0') {
    if (*(int *)(param_1 + 0x1868) == 1) {
      FUN_1001e3fd8();
    }
    else if (*(int *)(param_1 + 0x1868) == 0) {
      FUN_10002f320();
      FUN_1000318ac();
    }
  }
  return;
}




void FUN_1002200fc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_101474708;
  FUN_10003bd40(param_1 + 0x56);
  FUN_10064e2bc(param_1 + 0x3d);
  thunk_FUN_100651068(param_1 + 0x17);
  FUN_10064e2bc(param_1);
  return;
}




void FUN_100220144(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_101474708;
  FUN_10003bd40(param_1 + 0x56);
  FUN_10064e2bc(param_1 + 0x3d);
  thunk_FUN_100651068(param_1 + 0x17);
  pvVar1 = (void *)FUN_10064e2bc(param_1);
  operator_delete(pvVar1);
  return;
}




void FUN_100220190(void)

{
  undefined8 uVar1;
  
  operator_new(0x2d798);
  uVar1 = FUN_1002201c4();
  FUN_1001e7f30(uVar1,"TEAM_PANEL_POPUP",1,0,1);
  return;
}




long * FUN_1002201c4(long *param_1)

{
  long *plVar1;
  size_t sVar2;
  size_t sVar3;
  byte bVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  byte *pbVar11;
  byte *pbVar12;
  void *pvVar13;
  undefined **local_130 [5];
  void *local_108;
  undefined8 uStack_100;
  long local_f8;
  void *pvStack_f0;
  undefined8 local_e8;
  long lStack_e0;
  void *local_d8;
  undefined8 uStack_d0;
  long local_c8;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  void *local_70;
  undefined8 local_68;
  long lStack_60;
  
  puVar6 = (undefined8 *)FUN_1001b2b88();
  *puVar6 = &PTR_thunk_FUN_1002204a0_101474860;
  puVar6 = puVar6 + 0x39e;
  thunk_FUN_1005357f4(puVar6);
  plVar1 = param_1 + 0x4e3;
  thunk_FUN_1002850d0(plVar1);
  uVar7 = FUN_1004e0150("MENU_TEAM_TITLE",0);
  FUN_1001b3418(param_1,uVar7);
  FUN_1001b339c(param_1,puVar6);
  FUN_100534ad8(puVar6,plVar1,1);
  FUN_100534ef4(puVar6,PTR_s_build___MenuPartsCommon_tga_101854970,1);
  local_130[0] = (undefined **)CONCAT71(local_130[0]._1_7_,1);
  FUN_100534ebc(puVar6,local_130);
  plVar8 = (long *)thunk_FUN_10064de70();
  FUN_100534e34(puVar6,plVar8);
  FUN_10064a8b0(plVar8,0x28,0x14,0x28,0x14);
  (**(code **)(*plVar8 + 0x58))(plVar8,plVar1);
  *(uint *)((long)param_1 + 0x279c) = *(uint *)((long)param_1 + 0x279c) & 0xfffffffb;
  FUN_1002878b0(plVar1,0);
  iVar5 = FUN_10015d3f8();
  if (iVar5 == 0) goto LAB_100220470;
  lVar9 = FUN_10015d3ec();
  bVar4 = *(byte *)(lVar9 + 0x54a7);
  uVar10 = (ulong)bVar4;
  sVar2 = *(size_t *)(lVar9 + 0x5498);
  if (-1 < (char)bVar4) {
    sVar2 = uVar10;
  }
  sVar3 = DAT_101d911a0;
  if (-1 < (char)DAT_101d911a8._7_1_) {
    sVar3 = (ulong)DAT_101d911a8._7_1_;
  }
  if (sVar2 == sVar3) {
    pvVar13 = *(void **)(lVar9 + 0x5490);
    puVar6 = pvVar13;
    if (-1 < (char)bVar4) {
      puVar6 = (undefined8 *)(lVar9 + 0x5490);
    }
    pbVar12 = DAT_101d91198;
    if (-1 < (char)DAT_101d911a8._7_1_) {
      pbVar12 = (byte *)&DAT_101d91198;
    }
    if ((char)bVar4 < '\0') {
      if ((sVar2 != 0) && (iVar5 = _memcmp(puVar6,pbVar12,sVar2), iVar5 != 0)) goto LAB_10022038c;
    }
    else if (sVar2 != 0) {
      if ((uint)*pbVar12 == ((uint)pvVar13 & 0xff)) {
        pbVar11 = (byte *)(lVar9 + 0x5491);
        do {
          uVar10 = uVar10 - 1;
          pbVar12 = pbVar12 + 1;
          if (uVar10 == 0) goto LAB_1002203b0;
          bVar4 = *pbVar11;
          pbVar11 = pbVar11 + 1;
        } while (bVar4 == *pbVar12);
      }
      goto LAB_10022038c;
    }
LAB_1002203b0:
    FUN_1004f1580(local_130);
    local_130[0] = &PTR_FUN_10145bf20;
    local_68 = 0;
    lStack_60 = 0;
    uStack_100 = 0;
    local_108 = (void *)0x0;
    pvStack_f0 = (void *)0x0;
    local_f8 = 0;
    lStack_e0 = 0;
    local_e8 = 0;
    uStack_d0 = 0;
    local_d8 = (void *)0x0;
    local_70 = (void *)0x0;
    local_c8 = 0;
    uStack_90 = 0;
    local_98 = 0;
    uStack_80 = 0;
    local_88 = 0;
    FUN_1004f15d8(local_130);
    FUN_100288b0c(plVar1,local_130);
    local_130[0] = &PTR_FUN_10145bf20;
    if (lStack_60 < 0) {
      operator_delete(local_70);
    }
    FUN_10015ab5c(&local_88,1);
    FUN_10015aacc(&local_98,1);
    if (local_c8 < 0) {
      operator_delete(local_d8);
    }
    if (lStack_e0 < 0) {
      operator_delete(pvStack_f0);
    }
    if (local_f8 < 0) {
      operator_delete(local_108);
    }
    FUN_1004f15a8(local_130);
  }
  else {
LAB_10022038c:
    uVar7 = FUN_10015d3ec();
    lVar9 = FUN_10015d3ec();
    FUN_1001635bc(uVar7,lVar9 + 0x5490,1);
  }
LAB_100220470:
  (**(code **)(*param_1 + 0x118))(param_1);
  return param_1;
}




void FUN_1002204a0(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_1002204a0_101474860;
  thunk_FUN_100286e10(param_1 + 0x4e3);
  thunk_FUN_100534a3c(param_1 + 0x39e);
  FUN_1001b4464(param_1);
  return;
}




void thunk_FUN_1002204a0(void)

{
  FUN_1002204a0();
  return;
}




void FUN_1002204e8(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1002204a0();
  operator_delete(pvVar1);
  return;
}




void FUN_1002204fc(long param_1)

{
  undefined4 uVar1;
  float fVar2;
  undefined8 local_40;
  float local_38;
  float local_34;
  
  FUN_100641464(&local_34,&local_38);
  local_40 = 0;
  FUN_1001b4034(param_1,&local_40);
  fVar2 = local_38 + -100.0;
  uVar1 = FUN_1001b36cc(local_34 + -200.0,param_1);
  local_40 = CONCAT44(fVar2,uVar1);
  FUN_1001b3854(local_34 + -200.0,local_38 + -100.0,param_1,0);
  FUN_1001b3b58(param_1);
  FUN_10064e48c(param_1 + 0x2718,&local_40);
  FUN_10064e48c(param_1 + 0x1cf0,&local_40);
  return;
}




long FUN_1002205b4(long param_1)

{
  undefined8 *puVar1;
  void *pvVar2;
  long lVar3;
  undefined8 uVar4;
  void *local_90;
  void *local_88;
  char local_79;
  void *local_78;
  void *local_70;
  char local_61;
  undefined4 local_60;
  float fStack_5c;
  float local_58;
  float local_54;
  undefined1 auStack_50 [8];
  void *local_48;
  
  puVar1 = (undefined8 *)FUN_1001b2b88();
  *puVar1 = &PTR_FUN_101474990;
  puVar1[0x39e] = &PTR_FUN_10146e588;
  pvVar2 = operator_new(0xf48);
  lVar3 = thunk_FUN_1002b4d0c();
  *(long *)(param_1 + 0x1cf8) = lVar3;
  *(undefined8 **)(lVar3 + 0xb8) = puVar1 + 0x39e;
  *(undefined ***)(param_1 + 0x1cf0) = &PTR_thunk_FUN_1001f6f30_10146e548;
  *(undefined8 *)(param_1 + 0x1d08) = 0;
  *(undefined8 *)(param_1 + 0x1d00) = 0;
  FUN_1001b339c(param_1,pvVar2);
  uVar4 = FUN_1004e0150("MENU_LEADERBOARDS_POPUP_TITLE",0);
  thunk_FUN_1004e439c(auStack_50,uVar4);
  FUN_1004e3120(&local_78,"[SEASON_NAME]");
  FUN_1000f0f78(&local_90,0,0,0);
  FUN_1004e3bc4(auStack_50,0,&local_78,&local_90);
  if (local_88 != (void *)0x0) {
    operator_delete__(local_88);
  }
  if (local_70 != (void *)0x0) {
    operator_delete__(local_70);
  }
  FUN_1001b3418(param_1,auStack_50);
  FUN_1001b316c(param_1,1);
  FUN_1001f6fec(puVar1 + 0x39e);
  FUN_100641464(&local_54,&local_58);
  local_78 = (void *)0x0;
  FUN_1001b4034(param_1,&local_78);
  fStack_5c = local_58 + -100.0;
  local_60 = FUN_1001b36cc(local_54 + -200.0,param_1);
  FUN_1001b3854(local_54 + -200.0,local_58 + -100.0,param_1,0);
  FUN_1001b3b58(param_1);
  FUN_10064e48c(*(undefined8 *)(param_1 + 0x1cf8),&local_60);
  FUN_10031a918();
  uVar4 = FUN_10015d3ec();
  FUN_10001549c(&local_78,"view_leaderboard");
  FUN_10001549c(&local_90,"True");
  FUN_100166f70(uVar4,&local_78,&local_90);
  if (local_79 < '\0') {
    operator_delete(local_90);
  }
  if (local_61 < '\0') {
    operator_delete(local_78);
  }
  if (local_48 != (void *)0x0) {
    operator_delete__(local_48);
  }
  return param_1;
}




void FUN_1002207b8(undefined8 param_1)

{
  void *pvVar1;
  undefined8 uVar2;
  
  pvVar1 = operator_new(0x1d10);
  uVar2 = FUN_1002205b4();
  FUN_1001b35e0(uVar2,param_1);
  FUN_1001e7f30(pvVar1,0,1,0,1);
  return;
}




void FUN_100220800(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_101474990;
  thunk_FUN_1001f6f30(param_1 + 0x39e);
  FUN_1001b4464(param_1);
  return;
}




void FUN_100220838(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_101474990;
  thunk_FUN_1001f6f30(param_1 + 0x39e);
  pvVar1 = (void *)FUN_1001b4464(param_1);
  operator_delete(pvVar1);
  return;
}




long FUN_100220874(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 local_40;
  float local_38;
  float local_34;
  
  puVar1 = (undefined8 *)FUN_1001b2b88();
  *puVar1 = &PTR_FUN_101474ac0;
  FUN_1001f7ff0(puVar1 + 0x39e);
  FUN_1001b339c(param_1,*(undefined8 *)(param_1 + 0x1cf8));
  uVar2 = FUN_1004e0150("MENU_EVENTS_POPUP_TITLE",0);
  FUN_1001b3418(param_1,uVar2);
  FUN_1001b316c(param_1,1);
  FUN_1001f8194(puVar1 + 0x39e);
  FUN_100641464(&local_34,&local_38);
  FUN_1001b3854(local_34 + -140.0,local_38 + -140.0,param_1,0);
  local_40 = NEON_fmov(0x40a00000,4);
  FUN_1001b4034(param_1,&local_40);
  FUN_1001b36cc(local_34 + -140.0,local_38 + -140.0,param_1);
  FUN_10064e47c(*(undefined8 *)(param_1 + 0x1cf8));
  FUN_1001b3b58(param_1);
  FUN_10031d448();
  FUN_1004f1a74(0);
  FUN_10012ed2c();
  return param_1;
}




void FUN_10022097c(undefined8 param_1)

{
  void *pvVar1;
  undefined8 uVar2;
  
  pvVar1 = operator_new(0x1d30);
  uVar2 = FUN_100220874();
  FUN_1001b35e0(uVar2,param_1);
  FUN_1001e7f30(pvVar1,0,1,0,1);
  return;
}




void FUN_1002209c4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_101474ac0;
  thunk_FUN_1001f8044(param_1 + 0x39e);
  FUN_1001b4464(param_1);
  return;
}




void FUN_1002209fc(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_101474ac0;
  thunk_FUN_1001f8044(param_1 + 0x39e);
  pvVar1 = (void *)FUN_1001b4464(param_1);
  operator_delete(pvVar1);
  return;
}




void * FUN_100220a38(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x4458);
  FUN_100220abc(pvVar1,param_1,param_2,param_3);
  FUN_1001b35d4(*param_4,param_4[1]);
  FUN_1001e7f30(pvVar1,0,1,0,1);
  FUN_1001b345c(pvVar1,0);
  return pvVar1;
}




long * FUN_100220abc(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_1001b2b88();
  *puVar1 = &PTR_FUN_101474bf0;
  thunk_FUN_1002f10ac(puVar1 + 0x39e,param_2,param_3,param_4);
  *(undefined4 *)(param_1 + 0x39d) = 0x3f333333;
  FUN_1001b339c(param_1,puVar1 + 0x39e);
  FUN_1001b316c(param_1,1);
  (**(code **)(*param_1 + 0x118))(param_1);
  return param_1;
}




void FUN_100220b58(long param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1002f1b84(param_1 + 0x1cf0);
  FUN_1002f1e1c(param_1 + 0x1cf0,param_3);
  return;
}




void FUN_100220b8c(long param_1)

{
  FUN_1002f20f4(param_1 + 0x1cf0);
  return;
}




void FUN_100220b98(long param_1)

{
  FUN_1002f2008(param_1 + 0x1cf0);
  return;
}




void FUN_100220ba4(long param_1)

{
  FUN_1002f1d98(param_1 + 0x1cf0);
  return;
}




void FUN_100220bb0(long param_1)

{
  FUN_1002f207c(param_1 + 0x1cf0);
  return;
}




void FUN_100220bbc(long param_1)

{
  long lVar1;
  int iVar2;
  float fVar3;
  undefined4 uVar4;
  float fVar5;
  undefined8 local_40;
  float local_38;
  undefined1 auStack_34 [4];
  
  FUN_100641464(auStack_34,&local_38);
  lVar1 = param_1 + 0x1cf0;
  iVar2 = FUN_1002f20ec(lVar1);
  if (iVar2 != 2) {
    iVar2 = FUN_1002f20ec(lVar1);
    fVar3 = 1.0;
    if (iVar2 != 1) goto LAB_100220c24;
  }
  fVar3 = 0.6;
LAB_100220c24:
  fVar5 = (local_38 + -350.0) * 1.15;
  fVar3 = fVar3 * (local_38 + -350.0);
  FUN_1001b3854(fVar5,fVar3,param_1,0);
  FUN_1001b3b58(param_1);
  local_40 = 0;
  FUN_1001b4034(param_1,&local_40);
  uVar4 = FUN_1001b36cc(fVar5,param_1);
  local_40 = CONCAT44(fVar3,uVar4);
  FUN_10064e48c(lVar1,&local_40);
  return;
}




void FUN_100220c94(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_101474bf0;
  thunk_FUN_1002f172c(param_1 + 0x39e);
  FUN_1001b4464(param_1);
  return;
}




void FUN_100220ccc(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_101474bf0;
  thunk_FUN_1002f172c(param_1 + 0x39e);
  pvVar1 = (void *)FUN_1001b4464(param_1);
  operator_delete(pvVar1);
  return;
}




void FUN_100220d08(void)

{
  undefined8 uVar1;
  
  operator_new(0x2120);
  uVar1 = FUN_100220d34();
  FUN_1001e7f30(uVar1,0,1,0,1);
  return;
}




long * FUN_100220d34(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 uVar9;
  code *local_80;
  long *plStack_78;
  undefined8 local_70;
  undefined8 local_68;
  ulong local_60;
  undefined4 local_58;
  
  puVar7 = (undefined8 *)FUN_1001b2b88();
  *puVar7 = &PTR_thunk_FUN_100221254_101474d20;
  puVar7 = puVar7 + 0x39e;
  FUN_1001b11fc(puVar7);
  thunk_FUN_100206d28(param_1 + 0x3b8);
  param_1[0x3c0] = (long)&PTR____cxa_pure_virtual_10146e960;
  operator_new(0x4e30);
  lVar8 = thunk_FUN_1002bcf3c();
  param_1[0x3c1] = lVar8;
  *(long **)(lVar8 + 0xb8) = param_1 + 0x3c0;
  FUN_1004f0a20(param_1 + 0x3c2);
  param_1[0x3c0] = (long)&PTR_FUN_10146e8f8;
  param_1[0x3c2] = (long)&PTR_FUN_10146e930;
  plVar1 = param_1 + 0x3c5;
  thunk_FUN_1006421a8(plVar1);
  plVar2 = param_1 + 0x3d6;
  thunk_FUN_100650e64(plVar2);
  plVar3 = param_1 + 0x3fc;
  thunk_FUN_100650e64(plVar3);
  *(undefined1 *)(param_1 + 0x423) = 0;
  param_1[0x422] = 0;
  FUN_1001b339c(param_1,puVar7);
  uVar6 = FUN_1001b127c(puVar7,param_1[0x3b9]);
  *(undefined4 *)(param_1 + 0x422) = uVar6;
  uVar6 = FUN_1001b127c(puVar7,param_1[0x3c1]);
  *(undefined4 *)((long)param_1 + 0x2114) = uVar6;
  FUN_1001b1390(puVar7,(int)param_1[0x422],0);
  uVar6 = DAT_101dbd45c;
  local_60 = (ulong)*(uint *)(param_1 + 0x422);
  local_58 = DAT_101dbd45c;
  local_80 = FUN_100221068;
  local_70 = 0;
  local_68 = 0;
  plStack_78 = param_1;
  FUN_10001554c(param_1 + 0x3d7,&local_80);
  uVar5 = DAT_101dbd488;
  local_60 = (ulong)*(uint *)(param_1 + 0x422);
  local_58 = DAT_101dbd488;
  local_80 = FUN_100221068;
  local_70 = 0;
  local_68 = 0;
  plStack_78 = param_1;
  FUN_10001554c(param_1 + 0x3d7,&local_80);
  local_60 = (ulong)*(uint *)((long)param_1 + 0x2114);
  local_58 = uVar6;
  local_80 = FUN_100221068;
  local_70 = 0;
  local_68 = 0;
  plStack_78 = param_1;
  FUN_10001554c(param_1 + 0x3fd,&local_80);
  local_60 = (ulong)*(uint *)((long)param_1 + 0x2114);
  local_58 = uVar5;
  local_80 = FUN_100221068;
  local_70 = 0;
  local_68 = 0;
  plStack_78 = param_1;
  FUN_10001554c(param_1 + 0x3fd,&local_80);
  *(uint *)((long)param_1 + 0x1f34) = *(uint *)((long)param_1 + 0x1f34) | 0x10;
  *(uint *)((long)param_1 + 0x2064) = *(uint *)((long)param_1 + 0x2064) | 0x10;
  FUN_100651038(plVar2,PTR_s_build___Fonts_Brandon_Bold_80_fo_10184e250);
  FUN_100651038(plVar3,PTR_s_build___Fonts_Brandon_Bold_80_fo_10184e250);
  uVar9 = FUN_1004e0150("MAIN_PROFILE_REG_HEADLINE",0);
  FUN_1006513c0(plVar2,uVar9);
  uVar9 = FUN_1004e0150("MAIN_PROFILE_LOGIN_HEADLINE",0);
  FUN_1006513c0(plVar3,uVar9);
  FUN_100651460(plVar2,&DAT_10115a168);
  FUN_100651460(plVar3,&DAT_10115a16c);
  uVar4 = *(uint *)((long)param_1 + 0x1f34);
  if ((uVar4 & 0x7f80) != 0x7280) {
    *(uint *)((long)param_1 + 0x1f34) = uVar4 & 0xffff8000 | uVar4 & 0x7f | 0x7280;
    FUN_1000200a0(plVar2);
  }
  uVar4 = *(uint *)((long)param_1 + 0x2064);
  if ((uVar4 & 0x7f80) != 0x7280) {
    *(uint *)((long)param_1 + 0x2064) = uVar4 & 0xffff8000 | uVar4 & 0x7f | 0x7280;
    FUN_1000200a0(plVar3);
  }
  FUN_100642bd8(plVar1,plVar2,1);
  FUN_100642bd8(plVar1,plVar3,1);
  FUN_1001b33b8(param_1,plVar1);
  local_58 = FUN_100644a94("UI::EVENT_USER_LOGGED_IN_OR_SIGNED_UP");
  local_80 = thunk_FUN_100221158;
  local_68 = 0;
  local_60 = 0;
  local_70 = 0;
  plStack_78 = param_1;
  FUN_10001554c(param_1 + 1,&local_80);
  FUN_1001b316c(param_1,1);
  (**(code **)(*param_1 + 0x118))(param_1);
  return param_1;
}




void FUN_100221068(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  FUN_1002211c4(param_1,param_2,param_5);
  return;
}




void thunk_FUN_100221158(long param_1)

{
  ulong uVar1;
  undefined8 uStack_30;
  code *pcStack_28;
  
  uVar1 = FUN_10014e20c();
  if ((uVar1 & 1) == 0) {
    FUN_1001b3648(param_1);
    if (*(char *)(param_1 + 0x2118) == '\0') {
      uStack_30 = 0;
      pcStack_28 = thunk_FUN_100221fe4;
      FUN_100643618(0xbf800000,&uStack_30,0,0);
    }
    *(char *)(param_1 + 0x2118) = '\x01';
  }
  return;
}




void FUN_100221074(void)

{
  long lVar1;
  
  lVar1 = FUN_10015d3ec();
  FUN_100169cec(lVar1 + 0x18);
  return;
}




void FUN_10022108c(long param_1)

{
  undefined4 uVar1;
  float fVar2;
  undefined8 local_40;
  float local_38;
  float fStack_34;
  
  FUN_100641464(&fStack_34,&local_38);
  local_40 = 0;
  FUN_1001b4034(param_1,&local_40);
  fVar2 = local_38 + -100.0;
  uVar1 = FUN_1001b36cc(fStack_34 + -200.0,param_1);
  local_40 = CONCAT44(fVar2,uVar1);
  FUN_1001b3854(fStack_34 + -200.0,local_38 + -100.0,param_1,0);
  FUN_10064e48c(param_1 + 0x1cf0,&local_40);
  FUN_1001b3b58(param_1);
  FUN_10064e5ec(0x42800000,0,param_1 + 0x1fe0,7,param_1 + 0x1eb0,5);
  return;
}




void FUN_100221158(long param_1)

{
  ulong uVar1;
  undefined8 local_30;
  code *pcStack_28;
  
  uVar1 = FUN_10014e20c();
  if ((uVar1 & 1) == 0) {
    FUN_1001b3648(param_1);
    if (*(char *)(param_1 + 0x2118) == '\0') {
      local_30 = 0;
      pcStack_28 = thunk_FUN_100221fe4;
      FUN_100643618(0xbf800000,&local_30,0,0);
    }
    *(char *)(param_1 + 0x2118) = '\x01';
  }
  return;
}




void FUN_1002211c4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 *puVar1;
  
  FUN_1001b1390(param_1 + 0x1cf0,param_3,1);
  puVar1 = &DAT_10115a168;
  if (*(int *)(param_1 + 0x2110) != (int)param_3) {
    puVar1 = (undefined4 *)&DAT_10115a16c;
  }
  FUN_100651460(param_1 + 0x1eb0,puVar1);
  puVar1 = &DAT_10115a168;
  if (*(int *)(param_1 + 0x2114) != (int)param_3) {
    puVar1 = (undefined4 *)&DAT_10115a16c;
  }
  FUN_100651460(param_1 + 0x1fe0,puVar1);
  return;
}




void thunk_FUN_100221254(void)

{
  FUN_100221254();
  return;
}




void FUN_100221240(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_100221254();
  operator_delete(pvVar1);
  return;
}




void FUN_100221254(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_100221254_101474d20;
  thunk_FUN_100651068(param_1 + 0x3fc);
  thunk_FUN_100651068(param_1 + 0x3d6);
  FUN_10064230c(param_1 + 0x3c5);
  FUN_1004f0a9c(param_1 + 0x3c2);
  param_1[0x3c0] = &PTR____cxa_pure_virtual_10146e960;
  if ((long *)param_1[0x3c1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x3c1] + 8))();
  }
  param_1[0x3c1] = 0;
  FUN_10014f51c(param_1 + 0x3bd);
  FUN_1004f0a9c(param_1 + 0x3ba);
  param_1[0x3b8] = &PTR____cxa_pure_virtual_101470240;
  if ((long *)param_1[0x3b9] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x3b9] + 8))();
  }
  param_1[0x3b9] = 0;
  thunk_FUN_1001b1228(param_1 + 0x39e);
  FUN_1001b4464(param_1);
  return;
}




void thunk_FUN_100221fe4(void)

{
  FUN_100221f98("");
  return;
}




void FUN_100221320(undefined8 param_1)

{
  ulong uVar1;
  void *pvVar2;
  
  if ((DAT_101d237b8 != 0) && (uVar1 = FUN_1001e7f58(), (uVar1 & 1) != 0)) {
    return;
  }
  pvVar2 = operator_new(0x1cf8);
  DAT_101d237b8 = FUN_1002214b4(pvVar2,param_1);
  FUN_1001e7f30(DAT_101d237b8,0,1,0,1);
  return;
}




void FUN_100221380(long param_1)

{
  int iVar1;
  
  if ((DAT_101d237b8 != 0) && (iVar1 = FUN_1001e7f58(), iVar1 != 0)) {
    if (*(long *)(DAT_101d237b8 + 0x1cf0) == param_1) {
      FUN_1002213d4();
      FUN_1001b3648(DAT_101d237b8);
      return;
    }
  }
  return;
}




void FUN_1002213d4(long param_1)

{
  int iVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 0x1cf0);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x158))(plVar2,0);
    (**(code **)(**(long **)(param_1 + 0x1cf0) + 0x160))(*(long **)(param_1 + 0x1cf0),0);
    iVar1 = FUN_100642d08(*(undefined8 *)(param_1 + 0x1cf0));
    if (iVar1 != 0) {
      FUN_1006423ec(*(undefined8 *)(param_1 + 0x1cf0),1);
    }
  }
  *(undefined8 *)(param_1 + 0x1cf0) = 0;
  return;
}




void FUN_100221438(undefined8 param_1)

{
  if (DAT_101d237b8 != 0) {
    FUN_1001b3418(DAT_101d237b8,param_1);
    return;
  }
  return;
}




void FUN_100221450(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_101474e50;
  FUN_1002213d4();
  FUN_1001b4464(param_1);
  return;
}




void FUN_100221480(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_101474e50;
  FUN_1002213d4();
  pvVar1 = (void *)FUN_1001b4464(param_1);
  operator_delete(pvVar1);
  return;
}




long * FUN_1002214b4(long *param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_1001b2b88();
  *puVar2 = &PTR_FUN_101474e50;
  puVar2[0x39e] = param_2;
  iVar1 = FUN_100642d08(param_2);
  if (iVar1 != 0) {
    FUN_1006423ec(param_1[0x39e],1);
  }
  FUN_1001b339c(param_1,param_1[0x39e]);
  (**(code **)(*param_1 + 0x118))(param_1);
  return param_1;
}




void FUN_100221520(long param_1)

{
  float fVar1;
  undefined4 local_30;
  float local_2c;
  float local_28;
  float local_24;
  
  FUN_100641464(&local_24,&local_28);
  fVar1 = local_28 + -100.0;
  local_30 = FUN_1001b36cc(local_24 + -200.0,param_1);
  local_2c = fVar1;
  FUN_10064e48c(*(undefined8 *)(param_1 + 0x1cf0),&local_30);
  local_30 = (**(code **)(**(long **)(param_1 + 0x1cf0) + 0x58))
                       (*(long **)(param_1 + 0x1cf0),1,0,0,1);
  FUN_1001b3694(local_30,local_2c,param_1);
  FUN_1001b3854(param_1,0);
  FUN_1001b3b58(param_1);
  FUN_100654488(*(undefined8 *)(param_1 + 0x1cf0),1);
  FUN_10064e48c(*(undefined8 *)(param_1 + 0x1cf0),&local_30);
  FUN_1001a6584(*(undefined8 *)(param_1 + 0x1cf0),&local_30);
  (**(code **)(**(long **)(param_1 + 0x1cf0) + 0x158))(*(long **)(param_1 + 0x1cf0),1);
  (**(code **)(**(long **)(param_1 + 0x1cf0) + 0x160))(*(long **)(param_1 + 0x1cf0),1);
  return;
}




void FUN_100221618(undefined8 param_1)

{
  FUN_1002213d4();
  thunk_FUN_1001b3a68(param_1);
  DAT_101d237b8 = 0;
  return;
}




void FUN_100221648(long param_1,undefined8 param_2)

{
  ulong uVar1;
  void *pvVar2;
  
  pvVar2 = operator_new(0x4a48);
  FUN_1002216c8();
  uVar1 = *(ulong *)(param_1 + 8);
  if (-1 < (char)*(byte *)(param_1 + 0x17)) {
    uVar1 = (ulong)*(byte *)(param_1 + 0x17);
  }
  if (uVar1 != 0) {
    FUN_1002483b4((long)pvVar2 + 0x1cf0,param_1);
  }
  FUN_1001b35e0(pvVar2,param_2);
  FUN_1001e7f30(pvVar2,0,1,0,1);
  return;
}




long * FUN_1002216c8(long *param_1)

{
  long *plVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  puVar3 = (undefined8 *)FUN_1001b2b88();
  *puVar3 = &PTR_FUN_101474f80;
  thunk_FUN_100248280(puVar3 + 0x39e);
  plVar1 = param_1 + 0x92b;
  thunk_FUN_100652c08(plVar1);
  FUN_1001b339c(param_1,puVar3 + 0x39e);
  uVar4 = FUN_1004e0150("MAIN_MENU_NEWS",0);
  FUN_1001b3418(param_1,uVar4);
  FUN_1001b316c(param_1,1);
  (**(code **)(*param_1 + 0x118))(param_1);
  iVar2 = FUN_100126d70();
  if (iVar2 == 0xe) {
    FUN_100652cac(plVar1,PTR_s_build___MenuPartsCommon_tga_101854970,"generic_18_plus");
    FUN_1001b33e8(param_1,plVar1);
  }
  return param_1;
}




void FUN_100221798(long param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined4 uVar3;
  undefined8 local_40;
  float local_38;
  float local_34;
  
  FUN_100641464(&local_34,&local_38);
  uVar2 = (ulong)(uint)(local_38 - 100.0);
  uVar3 = NEON_fminnm(local_34 - 200.0,0x450fc000);
  local_40 = 0x41200000;
  FUN_1001b4034(param_1,&local_40);
  uVar1 = FUN_1001b36cc(uVar3,param_1);
  FUN_1001b3694(param_1);
  FUN_1001b3854(param_1,0);
  FUN_1001b3b58(param_1);
  *(int *)(param_1 + 0x494c) = (int)uVar1;
  *(int *)(param_1 + 0x4950) = (int)uVar2;
  FUN_10064e47c(uVar1,uVar2,param_1 + 0x1cf0);
  return;
}




void FUN_10022186c(long param_1)

{
  thunk_FUN_1001b3988();
  FUN_100248a04(param_1 + 0x1cf0,1);
  return;
}




void FUN_100221898(long param_1)

{
  thunk_FUN_1001b3a68();
  FUN_100248a04(param_1 + 0x1cf0,0);
  return;
}




void FUN_1002218c4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_101474f80;
  param_1[0x92b] = &PTR_FUN_1014a7108;
  param_1[0x942] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x945);
  FUN_10064e2bc(param_1 + 0x92b);
  FUN_100248328(param_1 + 0x39e);
  FUN_1001b4464(param_1);
  return;
}




void FUN_100221930(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_101474f80;
  param_1[0x92b] = &PTR_FUN_1014a7108;
  param_1[0x942] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x945);
  FUN_10064e2bc(param_1 + 0x92b);
  FUN_100248328(param_1 + 0x39e);
  pvVar1 = (void *)FUN_1001b4464(param_1);
  operator_delete(pvVar1);
  return;
}




void FUN_1002219a0(undefined8 param_1)

{
  int iVar1;
  ulong uVar2;
  void *pvVar3;
  undefined8 uVar4;
  
  iVar1 = FUN_1001e7f1c();
  if ((iVar1 != 0) && (uVar2 = FUN_1001e7fb0("PLAY_MENU"), (uVar2 & 1) == 0)) {
    pvVar3 = operator_new(0x2458);
    uVar4 = FUN_100221a60();
    FUN_1001b35e0(uVar4,param_1);
    FUN_1001e7f30(pvVar3,"PLAY_MENU",1,0,1);
    return;
  }
  return;
}




void FUN_100221a10(void)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  iVar1 = FUN_1001e7f1c();
  if ((iVar1 != 0) && (uVar2 = FUN_1001e7fb0("PLAY_MENU"), (uVar2 & 1) == 0)) {
    operator_new(0x2458);
    uVar3 = FUN_100221a60();
    FUN_1001e7f88(uVar3,"PLAY_MENU",1,0,1);
    return;
  }
  return;
}




long FUN_100221a60(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  code *local_60;
  long lStack_58;
  long local_50;
  code *local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  
  puVar1 = (undefined8 *)FUN_1001b2b88();
  *puVar1 = &PTR_thunk_FUN_100221b6c_1014750b0;
  thunk_FUN_100201dc8(puVar1 + 0x39e);
  thunk_FUN_100307844(param_1 + 0x1da0);
  *(undefined2 *)(param_1 + 0x2450) = 0x100;
  lVar2 = FUN_10032523c();
  local_60 = (code *)0x0;
  local_48 = FUN_100221f88;
  lStack_58 = param_1;
  local_50 = param_1;
  FUN_100031f58(lVar2 + 0x30,&local_60);
  FUN_1001b339c(param_1,*(undefined8 *)(param_1 + 0x1cf8));
  FUN_1001b33e8(param_1,param_1 + 0x1da0);
  FUN_1001b316c(param_1,1);
  uVar3 = FUN_1004e0150("MAIN_MENU_PLAY",0);
  FUN_1001b3418(param_1,uVar3);
  local_38 = DAT_101d237a4;
  local_60 = FUN_100221b64;
  local_48 = (code *)0x0;
  uStack_40 = 0;
  local_50 = 0;
  lStack_58 = param_1;
  FUN_10001554c(param_1 + 8,&local_60);
  FUN_10020200c(puVar1 + 0x39e);
  return param_1;
}




void FUN_100221b64(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_100221e28(param_1,param_4);
  return;
}




void FUN_100221b6c(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  
  *param_1 = &PTR_thunk_FUN_100221b6c_1014750b0;
  lVar2 = FUN_10032523c();
  if (*(uint *)(lVar2 + 0x30) != 0) {
    lVar3 = *(long *)(lVar2 + 0x38);
    lVar2 = (ulong)*(uint *)(lVar2 + 0x30) << 5;
    do {
      puVar1 = (undefined8 *)(lVar3 + 8);
      lVar3 = lVar3 + 0x20;
      if ((undefined8 *)*puVar1 == param_1) {
        FUN_100031ee8();
        break;
      }
      lVar2 = lVar2 + -0x20;
    } while (lVar2 != 0);
  }
  thunk_FUN_100307cd4(param_1 + 0x3b4);
  thunk_FUN_100201e64(param_1 + 0x39e);
  FUN_1001b4464(param_1);
  return;
}




void thunk_FUN_100221b6c(void)

{
  FUN_100221b6c();
  return;
}




void FUN_100221bec(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_100221b6c();
  operator_delete(pvVar1);
  return;
}




void FUN_100221c00(long param_1)

{
  ulong uVar1;
  
  FUN_100307ddc(param_1 + 0x1da0);
  uVar1 = FUN_100642bc8(param_1 + 0x168);
  if ((uVar1 & 1) == 0) {
    FUN_100221c40(param_1);
  }
  FUN_1001b3b58(param_1);
  return;
}




void FUN_100221c40(long param_1)

{
  undefined4 uVar1;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined8 local_50;
  undefined1 auStack_48 [4];
  float local_44;
  
  if ((*(char *)(param_1 + 0x2450) == '\0') || (*(char *)(param_1 + 0x2451) != '\0')) {
    FUN_100641464(&local_44,auStack_48);
    local_50 = 0;
    FUN_1001b4034(param_1,&local_50);
    uVar1 = 0x44a28000;
    local_50._0_4_ = FUN_1001b36cc(local_44 + -200.0,param_1);
    local_50._4_4_ = uVar1;
    FUN_10064e48c(*(undefined8 *)(param_1 + 0x1cf8),&local_50);
    (**(code **)(**(long **)(param_1 + 0x1cf8) + 0x90))();
    uVar1 = FUN_1002cd238(*(undefined8 *)(param_1 + 0x1cf8));
    FUN_1001b3708(param_1);
    local_58 = NEON_fminnm((undefined4)local_50,uVar1);
    uStack_54 = local_50._4_4_;
    uVar1 = FUN_1001b3694(param_1);
    uVar1 = NEON_fminnm(local_44 + -200.0,uVar1);
    FUN_1001b3854(uVar1,0x44a28000,param_1,*(char *)(param_1 + 0x2450));
    FUN_1001b3b58(param_1);
    FUN_10064e48c(*(undefined8 *)(param_1 + 0x1cf8),&local_58);
  }
  return;
}




void FUN_100221d4c(void)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  
  thunk_FUN_1001b3988();
  lVar1 = FUN_1000bdb98();
  plVar2 = (long *)(lVar1 + 0x10);
  plVar3 = (long *)*plVar2;
  plVar4 = plVar2;
  if (plVar3 != (long *)0x0) {
    do {
      if (*(uint *)(plVar3 + 4) >= 0xb3cf6e0d) {
        plVar4 = plVar3;
      }
      plVar3 = (long *)plVar3[*(uint *)(plVar3 + 4) < 0xb3cf6e0d];
    } while (plVar3 != (long *)0x0);
    if (((plVar4 != plVar2) && (*(uint *)(plVar4 + 4) < 0xb3cf6e0e)) && ((int)plVar4[5] != 0)) {
      lVar1 = 0;
      uVar5 = 0;
      do {
        (*(code *)((undefined8 *)(plVar4[6] + lVar1))[1])(*(undefined8 *)(plVar4[6] + lVar1));
        uVar5 = uVar5 + 1;
        lVar1 = lVar1 + 0x10;
      } while (uVar5 < *(uint *)(plVar4 + 5));
    }
  }
  return;
}




void FUN_100221e00(long param_1)

{
  thunk_FUN_1001b3a68();
  FUN_100201f80(param_1 + 0x1cf0);
  return;
}




void FUN_100221e28(long *param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  
  lVar2 = FUN_100644b2c(param_2);
  lVar4 = lVar2 + 0x20;
  uVar3 = FUN_1004e36c0(lVar4,&DAT_101d91650);
  if ((uVar3 & 1) == 0) {
    lVar4 = FUN_1004e0150("MAIN_MENU_PLAY",0);
  }
  FUN_1001b3418(param_1,lVar4);
  FUN_1001b3624(param_1,*(undefined1 *)(lVar2 + 0x30));
  *(uint *)((long)param_1 + 0x19f4) =
       *(uint *)((long)param_1 + 0x19f4) & 0xfffffff8 |
       *(uint *)((long)param_1 + 0x19f4) & 3 | (uint)(*(char *)(lVar2 + 0x32) == '\0') << 2;
  *(undefined1 *)((long)param_1 + 0x2451) = *(undefined1 *)(lVar2 + 0x31);
  (**(code **)(*param_1 + 0x118))(param_1);
  *(undefined1 *)(param_1 + 0x48a) = 1;
  lVar4 = FUN_100533194(param_1);
  if (lVar4 != 0) {
    uVar5 = FUN_100533194(param_1);
    iVar1 = FUN_100532c58(uVar5,param_1);
    if (iVar1 != 0) {
      lVar4 = FUN_1000bdb98();
      plVar6 = (long *)(lVar4 + 0x10);
      plVar7 = (long *)*plVar6;
      plVar8 = plVar6;
      if (plVar7 != (long *)0x0) {
        do {
          if (*(uint *)(plVar7 + 4) >= 0xb3cf6e0d) {
            plVar8 = plVar7;
          }
          plVar7 = (long *)plVar7[*(uint *)(plVar7 + 4) < 0xb3cf6e0d];
        } while (plVar7 != (long *)0x0);
        if (((plVar8 != plVar6) && (*(uint *)(plVar8 + 4) < 0xb3cf6e0e)) && ((int)plVar8[5] != 0)) {
          lVar4 = 0;
          uVar3 = 0;
          do {
            (*(code *)((undefined8 *)(plVar8[6] + lVar4))[1])(*(undefined8 *)(plVar8[6] + lVar4));
            uVar3 = uVar3 + 1;
            lVar4 = lVar4 + 0x10;
          } while (uVar3 < *(uint *)(plVar8 + 5));
        }
      }
    }
  }
  return;
}




void FUN_100221f88(undefined8 param_1,int *param_2)

{
  if (*param_2 != 0) {
    return;
  }
  FUN_1001b3648();
  return;
}




void FUN_100221f98(undefined8 param_1)

{
  void *pvVar1;
  undefined8 uVar2;
  
  pvVar1 = operator_new(0x28848);
  uVar2 = FUN_100221ff0();
  FUN_1001b35e0(uVar2,param_1);
  FUN_1001e7f30(pvVar1,0,1,0,1);
  return;
}




void FUN_100221fe4(void)

{
  FUN_100221f98("");
  return;
}




long * FUN_100221ff0(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  long lVar9;
  undefined8 uVar10;
  code *local_90;
  long *local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  
  lVar9 = FUN_1001b2b88();
  FUN_10014f4a0(lVar9 + 0x1cf0);
  *param_1 = (long)&PTR_FUN_1014751e0;
  param_1[0x39e] = (long)&PTR_FUN_101475318;
  thunk_FUN_10025c044(param_1 + 0x3a1);
  thunk_FUN_1001c397c();
  plVar1 = param_1 + 0x5060;
  thunk_FUN_1006421a8();
  plVar2 = param_1 + 0x5071;
  thunk_FUN_100650e64(plVar2);
  plVar3 = param_1 + 0x5097;
  thunk_FUN_100650e64(plVar3);
  plVar4 = param_1 + 0x50bd;
  thunk_FUN_100650e64(plVar4);
  plVar5 = param_1 + 0x50e3;
  thunk_FUN_100650e64(plVar5);
  FUN_1001b339c(param_1,param_1 + 0x3a1);
  local_68 = DAT_101d2367c;
  local_90 = thunk_FUN_1001b3648;
  local_78 = 0;
  local_70 = 0;
  local_80 = 0;
  local_88 = param_1;
  FUN_10001554c(param_1 + 1,&local_90);
  FUN_1001b316c(param_1,1);
  FUN_100651038(plVar2,PTR_s_build___Fonts_Brandon_Bold_80_fo_10184e250);
  FUN_100651038(plVar3,PTR_s_build___Fonts_Brandon_Bold_60_fo_10184e240);
  FUN_100651038(plVar4,PTR_s_build___Fonts_Brandon_Bold_60_fo_10184e240);
  FUN_100651038(plVar5,PTR_s_build___Fonts_Brandon_Bold_60_fo_10184e240);
  FUN_10015d3ec();
  uVar10 = FUN_100164f34();
  FUN_1006513c0(plVar2,uVar10);
  uVar10 = FUN_1004e0150("MENU_PROFILE_TAB_RANKED_5V5",0);
  FUN_1006513c0(plVar3,uVar10);
  uVar10 = FUN_1004e0150("MENU_PROFILE_TAB_RANKED_3V3",0);
  FUN_1006513c0(plVar4,uVar10);
  uVar10 = FUN_1004e0150("GENERIC_STATS",0);
  FUN_1006513c0(plVar5,uVar10);
  uVar7 = DAT_101dbd460;
  local_68 = DAT_101dbd460;
  local_90 = FUN_100222544;
  local_78 = 0;
  local_70 = 0;
  local_80 = 0;
  local_88 = param_1;
  FUN_10001554c(param_1 + 0x5072,&local_90);
  uVar8 = DAT_101dbd48c;
  local_68 = DAT_101dbd48c;
  local_90 = FUN_100222544;
  local_78 = 0;
  local_70 = 0;
  local_80 = 0;
  local_88 = param_1;
  FUN_10001554c(param_1 + 0x5072,&local_90);
  local_68 = uVar7;
  local_90 = FUN_100222544;
  local_80 = 0;
  local_78 = 0;
  local_70 = 1;
  local_88 = param_1;
  FUN_10001554c(param_1 + 0x5098,&local_90);
  local_68 = uVar8;
  local_90 = FUN_100222544;
  local_80 = 0;
  local_78 = 0;
  local_70 = 1;
  local_88 = param_1;
  FUN_10001554c(param_1 + 0x5098,&local_90);
  local_68 = uVar7;
  local_90 = FUN_100222544;
  local_80 = 0;
  local_78 = 0;
  local_70 = 2;
  local_88 = param_1;
  FUN_10001554c(param_1 + 0x50be,&local_90);
  local_68 = uVar8;
  local_90 = FUN_100222544;
  local_80 = 0;
  local_78 = 0;
  local_70 = 2;
  local_88 = param_1;
  FUN_10001554c(param_1 + 0x50be,&local_90);
  local_68 = uVar7;
  local_90 = FUN_100222544;
  local_80 = 0;
  local_78 = 0;
  local_70 = 3;
  local_88 = param_1;
  FUN_10001554c(param_1 + 0x50e4,&local_90);
  local_68 = uVar8;
  local_90 = FUN_100222544;
  local_80 = 0;
  local_78 = 0;
  local_70 = 3;
  local_88 = param_1;
  FUN_10001554c(param_1 + 0x50e4,&local_90);
  *(uint *)((long)param_1 + 0x2840c) = *(uint *)((long)param_1 + 0x2840c) | 0x10;
  *(uint *)((long)param_1 + 0x2853c) = *(uint *)((long)param_1 + 0x2853c) | 0x10;
  *(uint *)((long)param_1 + 0x2866c) = *(uint *)((long)param_1 + 0x2866c) | 0x10;
  *(uint *)((long)param_1 + 0x2879c) = *(uint *)((long)param_1 + 0x2879c) | 0x10;
  FUN_100651460(plVar2,&DAT_10115a168);
  FUN_100651460(plVar3,&DAT_10115a16c);
  FUN_100651460(plVar4,&DAT_10115a16c);
  FUN_100651460(plVar5,&DAT_10115a16c);
  uVar6 = *(uint *)((long)param_1 + 0x2840c);
  if ((uVar6 & 0x7f80) != 0x7280) {
    *(uint *)((long)param_1 + 0x2840c) = uVar6 & 0xffff8000 | uVar6 & 0x7f | 0x7280;
    FUN_1000200a0(plVar2);
  }
  uVar6 = *(uint *)((long)param_1 + 0x2853c);
  if ((uVar6 & 0x7f80) != 0x7280) {
    *(uint *)((long)param_1 + 0x2853c) = uVar6 & 0xffff8000 | uVar6 & 0x7f | 0x7280;
    FUN_1000200a0(plVar3);
  }
  uVar6 = *(uint *)((long)param_1 + 0x2866c);
  if ((uVar6 & 0x7f80) != 0x7280) {
    *(uint *)((long)param_1 + 0x2866c) = uVar6 & 0xffff8000 | uVar6 & 0x7f | 0x7280;
    FUN_1000200a0(plVar4);
  }
  uVar6 = *(uint *)((long)param_1 + 0x2879c);
  if ((uVar6 & 0x7f80) != 0x7280) {
    *(uint *)((long)param_1 + 0x2879c) = uVar6 & 0xffff8000 | uVar6 & 0x7f | 0x7280;
    FUN_1000200a0(plVar5);
  }
  FUN_1001c3fc8(param_1 + 0x4f8c,"ACCOUNT.*");
  *(uint *)((long)param_1 + 0x27ce4) = *(uint *)((long)param_1 + 0x27ce4) & 0xffffffbf;
  FUN_100642bd8(plVar1,plVar2,1);
  FUN_100642bd8(plVar1,plVar3,1);
  FUN_100642bd8(plVar1,plVar4,1);
  FUN_100136e4c(&local_90);
  plVar2 = local_88;
  if (local_80 < 0) {
    operator_delete(local_90);
    if (plVar2 == (long *)0x0) goto LAB_1002224b0;
  }
  else if (local_80._7_1_ == '\0') goto LAB_1002224b0;
  FUN_100642bd8(plVar1,plVar5,1);
LAB_1002224b0:
  FUN_100642bd8(plVar1,param_1 + 0x4f8c,1);
  FUN_1001b33b8(param_1,plVar1);
  (**(code **)(*param_1 + 0x118))(param_1);
  local_68 = FUN_100644a94("UI::EVENT_SWITCH_TO_TAB");
  local_90 = FUN_10022254c;
  local_78 = 0;
  local_70 = 0;
  local_80 = 0;
  local_88 = param_1;
  FUN_10001554c(param_1 + 1,&local_90);
  return param_1;
}




void FUN_100222544(undefined8 param_1)

{
  undefined8 in_x4;
  
  FUN_100222578(param_1,in_x4);
  return;
}




void FUN_10022254c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = FUN_100644b2c(param_4);
  FUN_100222578(param_1,uVar1);
  return;
}




void FUN_100222578(long param_1,undefined4 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  void *local_68 [2];
  char local_51;
  
  lVar3 = param_1 + 0x28388;
  FUN_100651460(lVar3,&DAT_10115a16c);
  lVar1 = param_1 + 0x284b8;
  FUN_100651460(lVar1,&DAT_10115a16c);
  lVar2 = param_1 + 0x285e8;
  FUN_100651460(lVar2,&DAT_10115a16c);
  FUN_100651460(param_1 + 0x28718,&DAT_10115a16c);
  switch(param_2) {
  case 0:
    FUN_10001549c(local_68,"overview");
    FUN_10025e23c(param_1 + 0x1d08,local_68);
    if (local_51 < '\0') {
      operator_delete(local_68[0]);
    }
    break;
  case 1:
    FUN_10001549c(local_68,"ranked5v5");
    FUN_10025e23c(param_1 + 0x1d08,local_68);
    lVar3 = lVar1;
    if (local_51 < '\0') {
      operator_delete(local_68[0]);
    }
    break;
  case 2:
    FUN_10001549c(local_68,"ranked3v3");
    FUN_10025e23c(param_1 + 0x1d08,local_68);
    lVar3 = lVar2;
    if (local_51 < '\0') {
      operator_delete(local_68[0]);
    }
    break;
  case 3:
    FUN_10022273c();
    FUN_100651460(param_1 + 0x28718,&DAT_10115a168);
    return;
  default:
    goto switchD_100222624_default;
  }
  FUN_100651460(lVar3,&DAT_10115a168);
switchD_100222624_default:
  return;
}




void FUN_100222868(long param_1)

{
  FUN_10025d3f0(param_1 + 0x1d08,1);
  return;
}




void FUN_100222878(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  uint uVar7;
  undefined8 local_60;
  float local_58;
  float local_54;
  
  FUN_100641464(&local_54,&local_58);
  FUN_1001b3854(local_54 + -200.0,local_58 + -100.0,param_1,0);
  local_60 = NEON_fmov(0x40a00000,4);
  FUN_1001b4034(param_1,&local_60);
  FUN_1001b36cc(local_54 + -200.0,local_58 + -100.0,param_1);
  FUN_10064e47c(param_1 + 0x1d08);
  lVar1 = param_1 + 0x284b8;
  lVar2 = param_1 + 0x28388;
  FUN_10064e72c(0x42400000,lVar1,3,lVar2,1);
  FUN_10064e72c(0,lVar1,5,lVar2,5);
  lVar3 = param_1 + 0x285e8;
  FUN_10064e72c(0x42400000,lVar3,3,lVar1,1);
  FUN_10064e72c(0,lVar3,5,lVar1,5);
  FUN_10064e72c(0x42400000,param_1 + 0x28718,3,lVar3,1);
  FUN_10064e72c(0,param_1 + 0x28718,5,lVar3,5);
  FUN_10064e5ec(0,0,param_1 + 0x27c60,1,lVar2,1);
  FUN_10064e72c(0x41f00000,param_1 + 0x27c60,0,param_1 + 0x168,0);
  iVar5 = FUN_100131560();
  uVar7 = 4;
  uVar4 = 0;
  if (iVar5 == 0) {
    uVar4 = uVar7;
  }
  *(uint *)(param_1 + 0x2853c) = *(uint *)(param_1 + 0x2853c) & 0xfffffffb | uVar4;
  iVar5 = FUN_100131560();
  uVar4 = 0;
  if (iVar5 == 0) {
    uVar4 = uVar7;
  }
  *(uint *)(param_1 + 0x2866c) = *(uint *)(param_1 + 0x2866c) & 0xfffffffb | uVar4;
  iVar5 = FUN_100131560();
  uVar4 = 0;
  if (iVar5 == 0) {
    uVar4 = uVar7;
  }
  *(uint *)(param_1 + 0x2879c) = *(uint *)(param_1 + 0x2879c) & 0xfffffffb | uVar4;
  FUN_10015d3ec();
  uVar6 = FUN_100164f34();
  FUN_1006513c0(lVar2,uVar6);
  FUN_1001b3b58(param_1);
  return;
}




void FUN_100222aac(long *param_1)

{
  undefined8 uVar1;
  
  FUN_10015d3ec();
  uVar1 = FUN_100164f34();
  FUN_1006513c0(param_1 + 0x5071,uVar1);
                    /* WARNING: Could not recover jumptable at 0x000100222af0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x118))(param_1);
  return;
}




void FUN_100222af4(long param_1)

{
  FUN_100222aac(param_1 + -0x1cf0);
  return;
}




void FUN_100222b00(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1014751e0;
  param_1[0x39e] = &PTR_FUN_101475318;
  thunk_FUN_100651068(param_1 + 0x50e3);
  thunk_FUN_100651068(param_1 + 0x50bd);
  thunk_FUN_100651068(param_1 + 0x5097);
  thunk_FUN_100651068(param_1 + 0x5071);
  FUN_10064230c(param_1 + 0x5060);
  param_1[0x4f8c] = &PTR_FUN_101461c58;
  thunk_FUN_1000160a0(param_1 + 0x5058);
  thunk_FUN_100651068(param_1 + 0x5031);
  thunk_FUN_100651068(param_1 + 0x500b);
  thunk_FUN_100651068(param_1 + 0x4fe5);
  param_1[0x4fc7] = &PTR_FUN_1014a7108;
  param_1[0x4fde] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x4fe1);
  FUN_10064e2bc(param_1 + 0x4fc7);
  param_1[0x4f9d] = &PTR_FUN_1014a6db0;
  param_1[0x4fb4] = &PTR_FUN_1014a6f10;
  thunk_FUN_100657580(param_1 + 0x4fb7);
  FUN_10064e2bc(param_1 + 0x4f9d);
  FUN_10064221c(param_1 + 0x4f8c);
  thunk_FUN_10025cfb8(param_1 + 0x3a1);
  FUN_10014f51c(param_1 + 0x39e);
  FUN_1001b4464(param_1);
  return;
}




void FUN_100222c48(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_100222b00();
  operator_delete(pvVar1);
  return;
}




void FUN_100222c5c(long param_1)

{
  FUN_100222b00(param_1 + -0x1cf0);
  return;
}




void FUN_100222c68(long param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_100222b00(param_1 + -0x1cf0);
  operator_delete(pvVar1);
  return;
}




long * FUN_100222c84(long *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_1001b2b88();
  *puVar1 = &PTR_FUN_1014756b0;
  thunk_FUN_100205af4(puVar1 + 0x39e);
  FUN_1001b339c(param_1,param_1[0x39f]);
  uVar2 = FUN_1004e0150("QUEST_BUTTON_QUESTS",0);
  FUN_1001b3418(param_1,uVar2);
  FUN_1001b316c(param_1,1);
  (**(code **)(*param_1 + 0x118))(param_1);
  FUN_100205ed4(puVar1 + 0x39e);
  return param_1;
}




void FUN_100222d10(undefined8 param_1)

{
  void *pvVar1;
  undefined8 uVar2;
  
  FUN_100326da8();
  pvVar1 = operator_new(0x1d50);
  uVar2 = FUN_100222c84();
  FUN_1001b35e0(uVar2,param_1);
  FUN_1001e7f30(pvVar1,0,1,0,1);
  return;
}




void FUN_100222d5c(long param_1)

{
  undefined4 uVar1;
  undefined8 local_40;
  float local_38;
  float local_34;
  
  FUN_100641464(&local_34,&local_38);
  uVar1 = NEON_fminnm(local_34 - 200.0,0x450fc000);
  FUN_1001b3854(uVar1,local_38 - 100.0,param_1,0);
  local_40 = NEON_fmov(0x40a00000,4);
  FUN_1001b4034(param_1,&local_40);
  FUN_1001b36cc(uVar1,local_38 - 100.0,param_1);
  FUN_10064e47c(*(undefined8 *)(param_1 + 0x1cf8));
  FUN_1001b3b58(param_1);
  return;
}




void FUN_100222e0c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1014756b0;
  thunk_FUN_100205b8c(param_1 + 0x39e);
  FUN_1001b4464(param_1);
  return;
}




void FUN_100222e44(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_1014756b0;
  thunk_FUN_100205b8c(param_1 + 0x39e);
  pvVar1 = (void *)FUN_1001b4464(param_1);
  operator_delete(pvVar1);
  return;
}




long * FUN_100222e80(long *param_1)

{
  undefined8 *puVar1;
  void *pvVar2;
  long lVar3;
  undefined8 uVar4;
  
  puVar1 = (undefined8 *)FUN_1001b2b88();
  *puVar1 = &PTR_FUN_1014757e0;
  puVar1[0x39e] = &PTR____cxa_pure_virtual_10146fdf8;
  pvVar2 = operator_new(0x2a58);
  lVar3 = thunk_FUN_1002d03ec();
  param_1[0x39f] = lVar3;
  *(undefined8 **)(lVar3 + 0xb8) = puVar1 + 0x39e;
  param_1[0x39e] = (long)&PTR_FUN_10146fdc8;
  *(undefined1 *)(param_1 + 0x3aa) = 0;
  param_1[0x3a1] = 0;
  param_1[0x3a0] = 0;
  param_1[0x3a3] = 0;
  param_1[0x3a2] = 0;
  param_1[0x3a5] = 0;
  param_1[0x3a4] = 0;
  param_1[0x3a7] = 0;
  param_1[0x3a6] = 0;
  param_1[0x3a9] = 0;
  param_1[0x3a8] = 0;
  FUN_1001b339c(param_1,pvVar2);
  uVar4 = FUN_1004e0150("RETRIEVE_CREDENTIALS_TITLE",0);
  FUN_1001b3418(param_1,uVar4);
  FUN_1001b316c(param_1,0);
  FUN_100222f6c(param_1);
  (**(code **)(*param_1 + 0x118))(param_1);
  FUN_1001b4040(param_1,0);
  return param_1;
}




void FUN_100222f6c(long param_1)

{
  long local_40;
  long lStack_38;
  long local_30;
  code *pcStack_28;
  
  if (*(char *)(param_1 + 0x1d50) == '\0') {
    local_40 = 0;
    pcStack_28 = thunk_FUN_1002230f4;
    lStack_38 = param_1;
    local_30 = param_1;
    FUN_100223660(param_1 + 0x1d10,&local_40);
    lStack_38 = 0;
    pcStack_28 = thunk_FUN_10022325c;
    local_40 = param_1;
    local_30 = param_1;
    FUN_1000be5e4(param_1 + 0x1d00,&local_40);
    *(char *)(param_1 + 0x1d50) = '\x01';
  }
  return;
}




void FUN_100222fe8(undefined8 param_1)

{
  void *pvVar1;
  undefined8 uVar2;
  
  pvVar1 = operator_new(0x1d58);
  uVar2 = FUN_100222e80();
  FUN_1001b35e0(uVar2,param_1);
  FUN_1001e7f30(pvVar1,"RetrieveCredentialsPopupNode",1,0,1);
  return;
}




void FUN_100223034(void)

{
  FUN_1001e7f70("RetrieveCredentialsPopupNode");
  return;
}




void FUN_100223040(long param_1)

{
  undefined4 uVar1;
  undefined8 local_40;
  float local_38;
  float local_34;
  
  FUN_100641464(&local_34,&local_38);
  uVar1 = NEON_fminnm(local_34 - 200.0,0x450fc000);
  FUN_1001b3854(uVar1,local_38 - 100.0,param_1,0);
  local_40 = 0x4248000042480000;
  FUN_1001b4034(param_1,&local_40);
  FUN_1001b36cc(uVar1,local_38 - 100.0,param_1);
  FUN_10064e47c(*(undefined8 *)(param_1 + 0x1cf8));
  FUN_1001b3b58(param_1);
  return;
}




void FUN_1002230f4(long param_1,string *param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auStack_80 [8];
  void *local_78;
  undefined1 auStack_70 [8];
  void *local_68;
  undefined1 auStack_60 [8];
  void *local_58;
  undefined1 auStack_50 [8];
  void *local_48;
  long local_40 [3];
  code *pcStack_28;
  
  std::string::operator=((string *)(param_1 + 0x1d20),param_2);
  std::string::operator=((string *)(param_1 + 0x1d38),param_2 + 0x18);
  FUN_1002d1014(*(undefined8 *)(param_1 + 0x1cf8),0);
  FUN_1004e313c(auStack_50);
  FUN_1004e313c(auStack_60);
  FUN_1004e313c(auStack_70);
  FUN_1004e313c(auStack_80);
  uVar1 = FUN_1004e0150("CONFIRM_NPL_LINK_TITLE",0);
  FUN_1000153b4(auStack_50,uVar1);
  uVar1 = FUN_1004e0150("CONFIRM_NPL_LINK_DESCRIPTION",0);
  FUN_1000153b4(auStack_60,uVar1);
  uVar1 = FUN_1004e0150("GENERIC_BUTTON_CONTINUE",0);
  FUN_1000153b4(auStack_70,uVar1);
  uVar1 = FUN_1004e0150("MAIN_BUTTON_BACK",0);
  FUN_1000153b4(auStack_80,uVar1);
  lVar2 = FUN_100224fa0(auStack_50,auStack_60,auStack_70,auStack_80);
  local_40[1] = 0;
  pcStack_28 = thunk_FUN_1002233a4;
  local_40[0] = param_1;
  local_40[2] = param_1;
  FUN_1000be5e4(lVar2 + 0x1cf0,local_40);
  local_40[1] = 0;
  pcStack_28 = FUN_100223768;
  local_40[0] = param_1;
  local_40[2] = param_1;
  FUN_1000be5e4(lVar2 + 0x1d00,local_40);
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




void FUN_10022325c(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auStack_80 [8];
  void *local_78;
  undefined1 auStack_70 [8];
  void *local_68;
  undefined1 auStack_60 [8];
  void *local_58;
  undefined1 auStack_50 [8];
  void *local_48;
  long local_40 [3];
  code *pcStack_28;
  
  FUN_1002d1014(*(undefined8 *)(param_1 + 0x1cf8),0);
  FUN_1004e313c(auStack_50);
  FUN_1004e313c(auStack_60);
  FUN_1004e313c(auStack_70);
  FUN_1004e313c(auStack_80);
  uVar1 = FUN_1004e0150("CONFIRM_NPL_LINK_TITLE",0);
  FUN_1000153b4(auStack_50,uVar1);
  uVar1 = FUN_1004e0150("DECLINE_NPL_LINK_DESCRIPTION",0);
  FUN_1000153b4(auStack_60,uVar1);
  uVar1 = FUN_1004e0150("GENERIC_BUTTON_CONTINUE",0);
  FUN_1000153b4(auStack_70,uVar1);
  uVar1 = FUN_1004e0150("MAIN_BUTTON_BACK",0);
  FUN_1000153b4(auStack_80,uVar1);
  lVar2 = FUN_100224fa0(auStack_50,auStack_60,auStack_70,auStack_80);
  local_40[1] = 0;
  pcStack_28 = thunk_FUN_10022344c;
  local_40[0] = param_1;
  local_40[2] = param_1;
  FUN_1000be5e4(lVar2 + 0x1cf0,local_40);
  local_40[1] = 0;
  pcStack_28 = FUN_100223768;
  local_40[0] = param_1;
  local_40[2] = param_1;
  FUN_1000be5e4(lVar2 + 0x1d00,local_40);
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




void FUN_1002233a4(long param_1)

{
  undefined8 uVar1;
  long *plVar2;
  void *local_50 [2];
  char local_39;
  void *local_38 [2];
  char local_21;
  
  uVar1 = FUN_100329cd4();
  plVar2 = (long *)(param_1 + 0x1d20);
  if (*(char *)(param_1 + 0x1d37) < '\0') {
    plVar2 = (long *)*plVar2;
  }
  FUN_10001549c(local_38,plVar2);
  plVar2 = (long *)(param_1 + 0x1d38);
  if (*(char *)(param_1 + 0x1d4f) < '\0') {
    plVar2 = (long *)*plVar2;
  }
  FUN_10001549c(local_50,plVar2);
  FUN_100329f4c(uVar1,local_38,local_50);
  if (local_39 < '\0') {
    operator_delete(local_50[0]);
  }
  if (local_21 < '\0') {
    operator_delete(local_38[0]);
  }
  FUN_1002d1014(*(undefined8 *)(param_1 + 0x1cf8),0);
  return;
}




void FUN_10022344c(long param_1)

{
  undefined8 uVar1;
  void *local_60 [2];
  char local_49;
  void *local_48 [2];
  char local_31;
  
  uVar1 = FUN_100329cd4();
  FUN_10001549c(local_48,"");
  FUN_10001549c(local_60,"");
  FUN_100329f4c(uVar1,local_48,local_60);
  if (local_49 < '\0') {
    operator_delete(local_60[0]);
  }
  if (local_31 < '\0') {
    operator_delete(local_48[0]);
  }
  FUN_1002d1014(*(undefined8 *)(param_1 + 0x1cf8),0);
  return;
}




void FUN_1002234dc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1014757e0;
  if (*(char *)((long)param_1 + 0x1d4f) < '\0') {
    operator_delete((void *)param_1[0x3a7]);
  }
  if (*(char *)((long)param_1 + 0x1d37) < '\0') {
    operator_delete((void *)param_1[0x3a4]);
  }
  param_1[0x39e] = &PTR_FUN_10146fdc8;
  if ((void *)param_1[0x3a3] != (void *)0x0) {
    operator_delete__((void *)param_1[0x3a3]);
    param_1[0x3a3] = 0;
    param_1[0x3a2] = 0;
  }
  if ((void *)param_1[0x3a1] != (void *)0x0) {
    operator_delete__((void *)param_1[0x3a1]);
    param_1[0x3a1] = 0;
    param_1[0x3a0] = 0;
  }
  param_1[0x39e] = &PTR____cxa_pure_virtual_10146fdf8;
  if ((long *)param_1[0x39f] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x39f] + 8))();
  }
  param_1[0x39f] = 0;
  FUN_1001b4464(param_1);
  return;
}




void FUN_10022359c(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_1014757e0;
  if (*(char *)((long)param_1 + 0x1d4f) < '\0') {
    operator_delete((void *)param_1[0x3a7]);
  }
  if (*(char *)((long)param_1 + 0x1d37) < '\0') {
    operator_delete((void *)param_1[0x3a4]);
  }
  param_1[0x39e] = &PTR_FUN_10146fdc8;
  if ((void *)param_1[0x3a3] != (void *)0x0) {
    operator_delete__((void *)param_1[0x3a3]);
    param_1[0x3a3] = 0;
    param_1[0x3a2] = 0;
  }
  if ((void *)param_1[0x3a1] != (void *)0x0) {
    operator_delete__((void *)param_1[0x3a1]);
    param_1[0x3a1] = 0;
    param_1[0x3a0] = 0;
  }
  param_1[0x39e] = &PTR____cxa_pure_virtual_10146fdf8;
  if ((long *)param_1[0x39f] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x39f] + 8))();
  }
  param_1[0x39f] = 0;
  pvVar1 = (void *)FUN_1001b4464(param_1);
  operator_delete(pvVar1);
  return;
}




void FUN_100223660(uint *param_1,undefined8 *param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
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
    FUN_1002236e4(param_1,uVar3);
    uVar4 = *param_1;
  }
  *param_1 = uVar4 + 1;
  lVar1 = *(long *)(param_1 + 2) + (ulong)(uVar4 + 1) * 0x20;
  uVar5 = *param_2;
  uVar7 = param_2[3];
  uVar6 = param_2[2];
  *(undefined8 *)(lVar1 + -0x18) = param_2[1];
  *(undefined8 *)(lVar1 + -0x20) = uVar5;
  *(undefined8 *)(lVar1 + -8) = uVar7;
  *(undefined8 *)(lVar1 + -0x10) = uVar6;
  return;
}




void thunk_FUN_1002230f4(long param_1,string *param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auStack_80 [8];
  void *pvStack_78;
  undefined1 auStack_70 [8];
  void *pvStack_68;
  undefined1 auStack_60 [8];
  void *pvStack_58;
  undefined1 auStack_50 [8];
  void *pvStack_48;
  long alStack_40 [3];
  code *pcStack_28;
  
  std::string::operator=((string *)(param_1 + 0x1d20),param_2);
  std::string::operator=((string *)(param_1 + 0x1d38),param_2 + 0x18);
  FUN_1002d1014(*(undefined8 *)(param_1 + 0x1cf8),0);
  FUN_1004e313c(auStack_50);
  FUN_1004e313c(auStack_60);
  FUN_1004e313c(auStack_70);
  FUN_1004e313c(auStack_80);
  uVar1 = FUN_1004e0150("CONFIRM_NPL_LINK_TITLE",0);
  FUN_1000153b4(auStack_50,uVar1);
  uVar1 = FUN_1004e0150("CONFIRM_NPL_LINK_DESCRIPTION",0);
  FUN_1000153b4(auStack_60,uVar1);
  uVar1 = FUN_1004e0150("GENERIC_BUTTON_CONTINUE",0);
  FUN_1000153b4(auStack_70,uVar1);
  uVar1 = FUN_1004e0150("MAIN_BUTTON_BACK",0);
  FUN_1000153b4(auStack_80,uVar1);
  lVar2 = FUN_100224fa0(auStack_50,auStack_60,auStack_70,auStack_80);
  alStack_40[1] = 0;
  pcStack_28 = thunk_FUN_1002233a4;
  alStack_40[0] = param_1;
  alStack_40[2] = param_1;
  FUN_1000be5e4(lVar2 + 0x1cf0,alStack_40);
  alStack_40[1] = 0;
  pcStack_28 = FUN_100223768;
  alStack_40[0] = param_1;
  alStack_40[2] = param_1;
  FUN_1000be5e4(lVar2 + 0x1d00,alStack_40);
  if (pvStack_78 != (void *)0x0) {
    operator_delete__(pvStack_78);
  }
  if (pvStack_68 != (void *)0x0) {
    operator_delete__(pvStack_68);
  }
  if (pvStack_58 != (void *)0x0) {
    operator_delete__(pvStack_58);
  }
  if (pvStack_48 != (void *)0x0) {
    operator_delete__(pvStack_48);
  }
  return;
}




void FUN_1002236e4(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 << 5);
    puVar2 = *(undefined8 **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar3 = (ulong)*param_1 << 5;
      puVar4 = puVar1;
      puVar5 = puVar2;
      do {
        uVar6 = *puVar5;
        uVar8 = puVar5[3];
        uVar7 = puVar5[2];
        puVar4[1] = puVar5[1];
        *puVar4 = uVar6;
        puVar4[3] = uVar8;
        puVar4[2] = uVar7;
        lVar3 = lVar3 + -0x20;
        puVar4 = puVar4 + 4;
        puVar5 = puVar5 + 4;
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




void thunk_FUN_10022325c(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auStack_80 [8];
  void *pvStack_78;
  undefined1 auStack_70 [8];
  void *pvStack_68;
  undefined1 auStack_60 [8];
  void *pvStack_58;
  undefined1 auStack_50 [8];
  void *pvStack_48;
  long alStack_40 [3];
  code *pcStack_28;
  
  FUN_1002d1014(*(undefined8 *)(param_1 + 0x1cf8),0);
  FUN_1004e313c(auStack_50);
  FUN_1004e313c(auStack_60);
  FUN_1004e313c(auStack_70);
  FUN_1004e313c(auStack_80);
  uVar1 = FUN_1004e0150("CONFIRM_NPL_LINK_TITLE",0);
  FUN_1000153b4(auStack_50,uVar1);
  uVar1 = FUN_1004e0150("DECLINE_NPL_LINK_DESCRIPTION",0);
  FUN_1000153b4(auStack_60,uVar1);
  uVar1 = FUN_1004e0150("GENERIC_BUTTON_CONTINUE",0);
  FUN_1000153b4(auStack_70,uVar1);
  uVar1 = FUN_1004e0150("MAIN_BUTTON_BACK",0);
  FUN_1000153b4(auStack_80,uVar1);
  lVar2 = FUN_100224fa0(auStack_50,auStack_60,auStack_70,auStack_80);
  alStack_40[1] = 0;
  pcStack_28 = thunk_FUN_10022344c;
  alStack_40[0] = param_1;
  alStack_40[2] = param_1;
  FUN_1000be5e4(lVar2 + 0x1cf0,alStack_40);
  alStack_40[1] = 0;
  pcStack_28 = FUN_100223768;
  alStack_40[0] = param_1;
  alStack_40[2] = param_1;
  FUN_1000be5e4(lVar2 + 0x1d00,alStack_40);
  if (pvStack_78 != (void *)0x0) {
    operator_delete__(pvStack_78);
  }
  if (pvStack_68 != (void *)0x0) {
    operator_delete__(pvStack_68);
  }
  if (pvStack_58 != (void *)0x0) {
    operator_delete__(pvStack_58);
  }
  if (pvStack_48 != (void *)0x0) {
    operator_delete__(pvStack_48);
  }
  return;
}




void thunk_FUN_1002233a4(long param_1)

{
  undefined8 uVar1;
  long *plVar2;
  void *apvStack_50 [2];
  char cStack_39;
  void *apvStack_38 [2];
  char cStack_21;
  
  uVar1 = FUN_100329cd4();
  plVar2 = (long *)(param_1 + 0x1d20);
  if (*(char *)(param_1 + 0x1d37) < '\0') {
    plVar2 = (long *)*plVar2;
  }
  FUN_10001549c(apvStack_38,plVar2);
  plVar2 = (long *)(param_1 + 0x1d38);
  if (*(char *)(param_1 + 0x1d4f) < '\0') {
    plVar2 = (long *)*plVar2;
  }
  FUN_10001549c(apvStack_50,plVar2);
  FUN_100329f4c(uVar1,apvStack_38,apvStack_50);
  if (cStack_39 < '\0') {
    operator_delete(apvStack_50[0]);
  }
  if (cStack_21 < '\0') {
    operator_delete(apvStack_38[0]);
  }
  FUN_1002d1014(*(undefined8 *)(param_1 + 0x1cf8),0);
  return;
}




void FUN_100223768(long param_1)

{
  FUN_1002d1014(*(undefined8 *)(param_1 + 0x1cf8),1);
  return;
}




void thunk_FUN_10022344c(long param_1)

{
  undefined8 uVar1;
  void *apvStack_60 [2];
  char cStack_49;
  void *apvStack_48 [2];
  char cStack_31;
  
  uVar1 = FUN_100329cd4();
  FUN_10001549c(apvStack_48,"");
  FUN_10001549c(apvStack_60,"");
  FUN_100329f4c(uVar1,apvStack_48,apvStack_60);
  if (cStack_49 < '\0') {
    operator_delete(apvStack_60[0]);
  }
  if (cStack_31 < '\0') {
    operator_delete(apvStack_48[0]);
  }
  FUN_1002d1014(*(undefined8 *)(param_1 + 0x1cf8),0);
  return;
}




uint FUN_100223778(void)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  lVar3 = FUN_10032a0bc();
  if ((*(char *)(lVar3 + 0x60) == '\0') ||
     (uVar4 = FUN_1001e7fb0("SKILL_RESET_NOTIFICATION"), (uVar4 & 1) != 0)) {
    uVar2 = 0;
  }
  else {
    lVar3 = FUN_1001340a4();
    iVar1 = *(int *)(lVar3 + 0x10);
    uVar5 = FUN_10032a0bc();
    lVar3 = FUN_10032a3d4(uVar5,iVar1 + -1);
    uVar2 = 0;
    if (lVar3 != 0) {
      if (*(int *)(lVar3 + 100) < 0) {
        uVar2 = ~*(uint *)(lVar3 + 0x68) >> 0x1f;
      }
      else {
        uVar2 = 1;
      }
    }
  }
  return uVar2;
}




void * FUN_1002237e8(void)

{
  int iVar1;
  void *pvVar2;
  undefined8 uVar3;
  
  iVar1 = FUN_100223778();
  if (iVar1 == 0) {
    pvVar2 = (void *)0x0;
  }
  else {
    pvVar2 = operator_new(0x1df0);
    uVar3 = FUN_10022383c();
    FUN_1001e7f30(uVar3,"SKILL_RESET_NOTIFICATION",1,0,1);
  }
  return pvVar2;
}




long * FUN_10022383c(long *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_50 [8];
  void *local_48;
  undefined1 auStack_40 [8];
  void *local_38;
  undefined1 auStack_30 [8];
  void *local_28;
  
  puVar1 = (undefined8 *)FUN_1001b2b88();
  *puVar1 = &PTR_FUN_101475910;
  puVar1 = puVar1 + 0x39e;
  thunk_FUN_100652c08(puVar1);
  thunk_FUN_100207268(param_1 + 0x3bc);
  uVar2 = FUN_1004e0150("SKILL_RESET_TITLE",0);
  thunk_FUN_1004e439c(auStack_30,uVar2);
  FUN_1004e3120(auStack_40,"[NEW_SEASON]");
  lVar3 = FUN_1001340a4();
  FUN_1000f0ec8(auStack_50,*(undefined4 *)(lVar3 + 0x10),0,0,1);
  FUN_1004e3bc4(auStack_30,0,auStack_40,auStack_50);
  if (local_48 != (void *)0x0) {
    operator_delete__(local_48);
  }
  if (local_38 != (void *)0x0) {
    operator_delete__(local_38);
  }
  FUN_1001b3418(param_1,auStack_30);
  FUN_1001b316c(param_1,1);
  FUN_1001b339c(param_1,puVar1);
  FUN_1001b339c(param_1,param_1[0x3bd]);
  FUN_100652cac(puVar1,"build://MenuBackground_SeasonTrans.png","full_splash_512");
  (**(code **)(*param_1 + 0x118))(param_1);
  if (local_28 != (void *)0x0) {
    operator_delete__(local_28);
  }
  return param_1;
}




void FUN_100223968(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100223970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x118))();
  return;
}




void FUN_100223974(long param_1)

{
  float fVar1;
  undefined4 uVar2;
  undefined8 local_40;
  float local_38;
  float local_34;
  
  FUN_100641464(&local_34,&local_38);
  local_34 = local_34 + -200.0;
  local_38 = local_38 + -200.0;
  fVar1 = local_34 / local_38;
  if (1.7777778 <= fVar1) {
    if (1.7777778 < fVar1) {
      local_34 = (local_34 * 1.7777778) / fVar1;
    }
  }
  else {
    local_38 = local_38 * 0.5625 * fVar1;
  }
  local_40 = 0;
  FUN_1001b4034(param_1,&local_40);
  FUN_1001b3854(local_34,local_38,param_1,0);
  uVar2 = FUN_1001b36cc(local_34,param_1);
  local_40 = CONCAT44(local_38,uVar2);
  FUN_10064e48c(*(undefined8 *)(param_1 + 0x1de8),&local_40);
  (**(code **)(**(long **)(param_1 + 0x1de8) + 0x90))();
  FUN_10064e48c(param_1 + 0x1cf0,&local_40);
  FUN_1001b3b58(param_1);
  return;
}




void FUN_100223a60(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_101475910;
  FUN_10020732c(param_1 + 0x3bc);
  param_1[0x39e] = &PTR_FUN_1014a7108;
  param_1[0x3b5] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x3b8);
  FUN_10064e2bc(param_1 + 0x39e);
  FUN_1001b4464(param_1);
  return;
}




void FUN_100223acc(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_101475910;
  FUN_10020732c(param_1 + 0x3bc);
  param_1[0x39e] = &PTR_FUN_1014a7108;
  param_1[0x3b5] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x3b8);
  FUN_10064e2bc(param_1 + 0x39e);
  pvVar1 = (void *)FUN_1001b4464(param_1);
  operator_delete(pvVar1);
  return;
}




void FUN_100223b3c(undefined8 param_1)

{
  void *pvVar1;
  undefined8 uVar2;
  
  pvVar1 = operator_new(0x1d40);
  uVar2 = FUN_100223b78(pvVar1,param_1);
  FUN_1001e7f30(uVar2,0,1,0,1);
  return;
}




long * FUN_100223b78(long *param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  int iVar4;
  code *local_70;
  long *local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  
  puVar1 = (undefined8 *)FUN_1001b2b88();
  *puVar1 = &PTR_FUN_101475a48;
  thunk_FUN_100209c74(puVar1 + 0x39e);
  local_48 = FUN_100644a94("UI::SKIN_VIEWER::DIALOG_GET_OPALS");
  local_70 = thunk_FUN_1001b3648;
  local_58 = 0;
  uStack_50 = 0;
  local_60 = 0;
  local_68 = param_1;
  FUN_10001554c(param_1 + 1,&local_70);
  local_48 = FUN_100644a94("UI::SKIN_VIEWER::ON_SKIN_CRAFTED");
  local_70 = thunk_FUN_1001b3648;
  local_58 = 0;
  uStack_50 = 0;
  local_60 = 0;
  local_68 = param_1;
  FUN_10001554c(param_1 + 1,&local_70);
  FUN_100209f00(puVar1 + 0x39e,param_2);
  if ((*(int *)(param_2 + 0x20) < 1) &&
     (lVar2 = FUN_10034be08(*(undefined8 *)(param_2 + 0x10)), lVar2 != 0)) {
    uVar3 = FUN_1004e0150(*(undefined8 *)(lVar2 + 0x18),0);
    FUN_1001b3418(param_1,uVar3);
  }
  else {
    FUN_10032be60(&local_70,param_2,1);
    FUN_1001b3418(param_1,&local_70);
    if (local_68 != (long *)0x0) {
      operator_delete__(local_68);
    }
  }
  if (*(char *)(param_2 + 0x35) == '\0') {
    if (*(char *)(param_2 + 0x34) == '\0') {
      if (3 < *(uint *)(param_2 + 0x20)) goto LAB_100223cb4;
      iVar4 = *(uint *)(param_2 + 0x20) + 2;
    }
    else {
      iVar4 = 7;
    }
  }
  else {
    iVar4 = 6;
  }
  FUN_1001b316c(param_1,iVar4);
LAB_100223cb4:
  FUN_1001b339c(param_1,param_1[0x39f]);
  (**(code **)(*param_1 + 0x118))(param_1);
  return param_1;
}




void FUN_100223cf0(long param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  float local_48;
  float local_44;
  
  FUN_10064142c(&local_44,&local_48);
  uVar4 = (ulong)(uint)(local_48 + -100.0);
  uVar3 = FUN_1001b36cc(local_44 + -200.0,uVar4,param_1);
  uVar1 = FUN_1002db030(uVar4,*(undefined8 *)(param_1 + 0x1cf8));
  uVar2 = FUN_1002db004(uVar3,*(undefined8 *)(param_1 + 0x1cf8));
  uVar1 = NEON_fminnm((int)uVar3,uVar1);
  uVar2 = NEON_fminnm((int)uVar4,uVar2);
  FUN_1001b3694(uVar1,uVar2,param_1);
  FUN_1001b3854(param_1,0);
  FUN_1001b3b58(param_1);
  FUN_1002dafc4(uVar1,uVar2,*(undefined8 *)(param_1 + 0x1cf8));
  return;
}




void FUN_100223db8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_101475a48;
  thunk_FUN_100209d7c(param_1 + 0x39e);
  FUN_1001b4464(param_1);
  return;
}




void FUN_100223df0(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_101475a48;
  thunk_FUN_100209d7c(param_1 + 0x39e);
  pvVar1 = (void *)FUN_1001b4464(param_1);
  operator_delete(pvVar1);
  return;
}




void * FUN_100223e2c(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  void *pvVar2;
  undefined8 uVar3;
  
  iVar1 = FUN_100211494();
  if (iVar1 == 0) {
    pvVar2 = (void *)0x0;
  }
  else {
    pvVar2 = operator_new(0x9a8);
    uVar3 = FUN_100223e98(pvVar2,param_1,param_2);
    FUN_1001e7f30(uVar3,"SPOILS_OF_WAR",1,0,1);
  }
  return pvVar2;
}




long * FUN_100223e98(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  code *local_60;
  long *plStack_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  
  puVar1 = (undefined8 *)FUN_1001906ac();
  *puVar1 = &PTR_thunk_FUN_100223f58_101475b78;
  thunk_FUN_100211864(puVar1 + 0x4f);
  (**(code **)(*param_1 + 0x110))(param_1);
  FUN_100190928(param_1,param_1[0x50]);
  FUN_100212ff8(puVar1 + 0x4f,param_2,param_3);
  local_38 = FUN_100644a94("UI::HIDE_SILK_SCREEN");
  local_60 = FUN_100223f48;
  local_48 = 0;
  uStack_40 = 0;
  local_50 = 0;
  plStack_58 = param_1;
  FUN_10001554c(param_1 + 1,&local_60);
  return param_1;
}




void FUN_100223f48(long param_1)

{
  *(uint *)(param_1 + 0x19c) = *(uint *)(param_1 + 0x19c) & 0xfffffffb;
  return;
}




void FUN_100223f58(undefined8 *param_1)

{
  undefined8 uVar1;
  
  *param_1 = &PTR_thunk_FUN_100223f58_101475b78;
  uVar1 = FUN_100644a94("UI::HIDE_SILK_SCREEN");
  FUN_100223fb0(param_1,uVar1,FUN_100223f48,param_1);
  thunk_FUN_1002128c8(param_1 + 0x4f);
  FUN_100190868(param_1);
  return;
}




void FUN_100223fb0(long param_1,int param_2,long param_3,long param_4)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (uVar1 != 0) {
    plVar2 = *(long **)(param_1 + 0x10);
    lVar3 = (ulong)uVar1 * 0x30;
    do {
      if ((((int)plVar2[5] == param_2) && (plVar2[1] == param_4)) && (*plVar2 == param_3)) {
        FUN_100015664((uint *)(param_1 + 8),plVar2,plVar2 + 6);
        return;
      }
      plVar2 = plVar2 + 6;
      lVar3 = lVar3 + -0x30;
    } while (lVar3 != 0);
  }
  return;
}




void thunk_FUN_100223f58(void)

{
  FUN_100223f58();
  return;
}




void FUN_100224008(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_100223f58();
  operator_delete(pvVar1);
  return;
}




void FUN_10022401c(long param_1)

{
  undefined4 local_28;
  undefined4 uStack_24;
  
  FUN_100641464(&uStack_24,&local_28);
  FUN_10064e47c(uStack_24,local_28,*(undefined8 *)(param_1 + 0x280));
  return;
}




void FUN_100224058(long *param_1)

{
  thunk_FUN_100190b1c();
                    /* WARNING: Could not recover jumptable at 0x000100224080. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x110))(param_1);
  return;
}




void FUN_100224084(undefined8 param_1)

{
  ulong uVar1;
  void *pvVar2;
  
  if ((DAT_101d237c0 != 0) && (uVar1 = FUN_1001e7f58(), (uVar1 & 1) != 0)) {
    return;
  }
  pvVar2 = operator_new(0x1b1a8);
  DAT_101d237c0 = FUN_1002240e8(pvVar2,param_1);
  FUN_1001e7f30(DAT_101d237c0,0,1,0,1);
  return;
}




long * FUN_1002240e8(long *param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = FUN_1001b2b88();
  FUN_10014f4a0(lVar2 + 0x1cf0);
  *param_1 = (long)&PTR_FUN_101475ca0;
  param_1[0x39e] = (long)&PTR_FUN_101475dd8;
  thunk_FUN_100264e14(param_1 + 0x3a1);
  plVar1 = param_1 + 0x3586;
  thunk_FUN_1001c0c34(plVar1,0);
  FUN_1001b339c(param_1,plVar1);
  FUN_1001b339c(param_1,param_1 + 0x3a1);
  *(uint *)((long)param_1 + 0x1d8c) = *(uint *)((long)param_1 + 0x1d8c) & 0xfffffffb;
  FUN_1001c0e10(plVar1);
  (**(code **)(*param_1 + 0x118))(param_1);
  uVar3 = FUN_10015d3ec();
  FUN_1001635bc(uVar3,param_2,1);
  return param_1;
}




void FUN_1002241ac(long param_1)

{
  undefined4 local_40;
  float fStack_3c;
  float local_38;
  float local_34;
  
  FUN_100641464(&local_34,&local_38);
  fStack_3c = local_38 + -100.0;
  local_40 = FUN_1001b36cc(local_34 + -200.0,param_1);
  FUN_1001b3854(local_34 + -200.0,local_38 + -100.0,param_1,0);
  FUN_1001b3b58(param_1);
  FUN_10064e68c(0,0,param_1 + 0x1ac30,8);
  param_1 = param_1 + 0x1d08;
  FUN_10064e48c(param_1,&local_40);
  FUN_100265224(param_1,1);
  thunk_FUN_1001e6da8(param_1,1);
  thunk_FUN_1001e6da4(param_1,1);
  return;
}




void FUN_100224288(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x1d08;
  FUN_100265224(lVar1,0);
  thunk_FUN_1001e6da8(lVar1,0);
  thunk_FUN_1001e6da4(lVar1,0);
  thunk_FUN_1001b3a68(param_1);
  DAT_101d237c0 = 0;
  return;
}




void FUN_1002242e0(long param_1)

{
  *(uint *)(param_1 + 0x1d8c) = *(uint *)(param_1 + 0x1d8c) | 4;
  FUN_1002656cc(param_1 + 0x1d08);
  *(uint *)(param_1 + 0x1acb4) = *(uint *)(param_1 + 0x1acb4) & 0xfffffffb;
  return;
}




void FUN_100224328(long param_1)

{
  *(uint *)(param_1 + 0x9c) = *(uint *)(param_1 + 0x9c) | 4;
  FUN_1002656cc(param_1 + 0x18);
  *(uint *)(param_1 + 0x18fc4) = *(uint *)(param_1 + 0x18fc4) & 0xfffffffb;
  return;
}




void FUN_10022436c(undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = 0;
  *param_1 = &PTR_FUN_101475ca0;
  param_1[0x39e] = &PTR_FUN_101475dd8;
  param_1[0x3586] = &PTR_FUN_10145e588;
  do {
    *(undefined ***)((long)param_1 + lVar1 + 0x1b0a8) = &PTR_FUN_1014a7108;
    *(undefined ***)((long)param_1 + lVar1 + 0x1b160) = &PTR_FUN_1014a7268;
    thunk_FUN_100657580((long)param_1 + lVar1 + 0x1b178);
    FUN_10064e2bc((long)param_1 + lVar1 + 0x1b0a8);
    lVar1 = lVar1 + -0xf0;
  } while (lVar1 != -0x4b0);
  FUN_10064e2bc(param_1 + 0x3586);
  thunk_FUN_1002650dc(param_1 + 0x3a1);
  FUN_10014f51c(param_1 + 0x39e);
  FUN_1001b4464(param_1);
  return;
}




void FUN_100224434(undefined8 *param_1)

{
  void *pvVar1;
  undefined8 *puVar2;
  long lVar3;
  
  *param_1 = &PTR_FUN_101475ca0;
  param_1[0x39e] = &PTR_FUN_101475dd8;
  param_1[0x3586] = &PTR_FUN_10145e588;
  puVar2 = param_1 + 0x3615;
  lVar3 = -0x4b0;
  do {
    *puVar2 = &PTR_FUN_1014a7108;
    puVar2[0x17] = &PTR_FUN_1014a7268;
    thunk_FUN_100657580(puVar2 + 0x1a);
    FUN_10064e2bc(puVar2);
    puVar2 = puVar2 + -0x1e;
    lVar3 = lVar3 + 0xf0;
  } while (lVar3 != 0);
  FUN_10064e2bc(param_1 + 0x3586);
  thunk_FUN_1002650dc(param_1 + 0x3a1);
  FUN_10014f51c(param_1 + 0x39e);
  pvVar1 = (void *)FUN_1001b4464(param_1);
  operator_delete(pvVar1);
  return;
}




void FUN_1002244f4(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  
  param_1[-0x39e] = &PTR_FUN_101475ca0;
  *param_1 = &PTR_FUN_101475dd8;
  param_1[0x31e8] = &PTR_FUN_10145e588;
  puVar1 = param_1 + 0x3277;
  lVar2 = -0x4b0;
  do {
    *puVar1 = &PTR_FUN_1014a7108;
    puVar1[0x17] = &PTR_FUN_1014a7268;
    thunk_FUN_100657580(puVar1 + 0x1a);
    FUN_10064e2bc(puVar1);
    puVar1 = puVar1 + -0x1e;
    lVar2 = lVar2 + 0xf0;
  } while (lVar2 != 0);
  FUN_10064e2bc(param_1 + 0x31e8);
  thunk_FUN_1002650dc(param_1 + 3);
  FUN_10014f51c(param_1);
  FUN_1001b4464(param_1 + -0x39e);
  return;
}




void FUN_1002245b8(undefined8 *param_1)

{
  void *pvVar1;
  undefined8 *puVar2;
  long lVar3;
  
  param_1[-0x39e] = &PTR_FUN_101475ca0;
  *param_1 = &PTR_FUN_101475dd8;
  param_1[0x31e8] = &PTR_FUN_10145e588;
  puVar2 = param_1 + 0x3277;
  lVar3 = -0x4b0;
  do {
    *puVar2 = &PTR_FUN_1014a7108;
    puVar2[0x17] = &PTR_FUN_1014a7268;
    thunk_FUN_100657580(puVar2 + 0x1a);
    FUN_10064e2bc(puVar2);
    puVar2 = puVar2 + -0x1e;
    lVar3 = lVar3 + 0xf0;
  } while (lVar3 != 0);
  FUN_10064e2bc(param_1 + 0x31e8);
  thunk_FUN_1002650dc(param_1 + 3);
  FUN_10014f51c(param_1);
  pvVar1 = (void *)FUN_1001b4464(param_1 + -0x39e);
  operator_delete(pvVar1);
  return;
}




void FUN_100224680(undefined8 param_1)

{
  void *pvVar1;
  undefined8 uVar2;
  
  pvVar1 = operator_new(0x1e08);
  uVar2 = FUN_1002246d0();
  FUN_1001b35e0(uVar2,param_1);
  FUN_1001e7f30(pvVar1,0,1,0,1);
  FUN_1004d29d0();
  FUN_10012fd30();
  return;
}




long * FUN_1002246d0(long *param_1)

{
  long *plVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  code *local_50;
  long *plStack_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  
  puVar3 = (undefined8 *)FUN_1001b2b88();
  *puVar3 = &PTR_FUN_101476170;
  thunk_FUN_100218094(puVar3 + 0x39e);
  plVar1 = param_1 + 0x3a3;
  thunk_FUN_100652c08(plVar1);
  FUN_1001b339c(param_1,param_1[0x39f]);
  uVar4 = FUN_1004e0150("MENU_TODAY_IN_VAINGLORY_TITLE",0);
  FUN_1001b3418(param_1,uVar4);
  FUN_1001b316c(param_1,1);
  (**(code **)(*param_1 + 0x118))(param_1);
  iVar2 = FUN_100126d70();
  if (iVar2 == 0xe) {
    FUN_100652cac(plVar1,PTR_s_build___MenuPartsCommon_tga_101854970,"generic_18_plus");
    FUN_1001b33e8(param_1,plVar1);
  }
  local_28 = FUN_100644a94("UI::EVENT_TILE_NAVIGATING_TO_LINK");
  local_50 = thunk_FUN_1001b3648;
  local_38 = 0;
  uStack_30 = 0;
  local_40 = 0;
  plStack_48 = param_1;
  FUN_10001554c(param_1 + 1,&local_50);
  local_28 = DAT_101d2367c;
  local_50 = thunk_FUN_1001b3648;
  local_38 = 0;
  uStack_30 = 0;
  local_40 = 0;
  plStack_48 = param_1;
  FUN_10001554c(param_1 + 1,&local_50);
  return param_1;
}




void FUN_100224808(long param_1)

{
  undefined8 local_28;
  
  local_28 = 0;
  FUN_1001b4034(param_1,&local_28);
  FUN_1001b3694(0x45200000,0x448fc000,param_1);
  FUN_1001b3854(param_1,0);
  FUN_10064e48c(*(undefined8 *)(param_1 + 0x1cf8),&DAT_1011583cc);
  FUN_1001b3b58(param_1);
  return;
}




void FUN_100224874(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_101476170;
  param_1[0x3a3] = &PTR_FUN_1014a7108;
  param_1[0x3ba] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x3bd);
  FUN_10064e2bc(param_1 + 0x3a3);
  FUN_1002181b4(param_1 + 0x39e);
  FUN_1001b4464(param_1);
  return;
}




void FUN_1002248e0(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_101476170;
  param_1[0x3a3] = &PTR_FUN_1014a7108;
  param_1[0x3ba] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x3bd);
  FUN_10064e2bc(param_1 + 0x3a3);
  FUN_1002181b4(param_1 + 0x39e);
  pvVar1 = (void *)FUN_1001b4464(param_1);
  operator_delete(pvVar1);
  return;
}




void FUN_100224950(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 *param_5)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x3fc8);
  FUN_100224aa0(pvVar1,param_1,param_2,param_3,param_4);
  FUN_1001b35d4(*param_5,param_5[1]);
  FUN_1001e7f30(pvVar1,"TUTORIAL_COMPLETE",1,0,1);
  return;
}




void FUN_1002249cc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_101444218;
  FUN_10016c2fc();
  FUN_1004d2698(auStack_a8,DAT_10184e0e8);
  uVar1 = FUN_1004e0150("MENU_TUTORIAL_COMPLETE_POPUP_BODY",0);
  uVar2 = FUN_1004e0150("MENU_TUTORIAL_COMPLETE_POPUP_TITLE",0);
  FUN_100224950(auStack_a8,"Cutscene_Avatar",uVar1,uVar2,param_1);
  if (*(long *)PTR____stack_chk_guard_101444218 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




long * FUN_100224aa0(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  code *local_70;
  long *plStack_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  
  puVar1 = (undefined8 *)FUN_1001b2b88();
  *puVar1 = &PTR_FUN_1014762a0;
  uVar2 = thunk_FUN_100305108(puVar1 + 0x39e,0);
  FUN_1003053bc(uVar2,param_2,param_3,param_4);
  FUN_1001b339c(param_1,puVar1 + 0x39e);
  local_48 = DAT_101d23840;
  local_70 = thunk_FUN_1001b3648;
  local_58 = 0;
  uStack_50 = 0;
  local_60 = 0;
  plStack_68 = param_1;
  FUN_10001554c(param_1 + 1,&local_70);
  FUN_1001b3418(param_1,param_5);
  FUN_1001b316c(param_1,1);
  (**(code **)(*param_1 + 0x118))(param_1);
  return param_1;
}




void FUN_100224b84(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 local_40;
  undefined1 auStack_38 [4];
  undefined1 auStack_34 [4];
  
  FUN_100641464(auStack_34,auStack_38);
  uVar2 = 0x448fc000;
  uVar1 = FUN_1001b3694(0x45200000,0x448fc000,param_1);
  local_40 = 0;
  FUN_1001b4034(param_1,&local_40);
  FUN_10064e48c(param_1 + 0x1cf0,&DAT_1011583d4);
  FUN_100305428(param_1 + 0x1cf0);
  FUN_1001b3854(uVar1,uVar2,param_1,0);
  FUN_1001b3b58(param_1);
  return;
}




void FUN_100224c28(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1014762a0;
  param_1[0x39e] = &PTR_FUN_10148e6e8;
  FUN_10003bd40(param_1 + 0x542);
  param_1[0x3f9] = &PTR_FUN_10148b3a0;
  thunk_FUN_100651068(param_1 + 0x51a);
  FUN_1002ebc50(param_1 + 0x3f9);
  thunk_FUN_100651068(param_1 + 0x3d3);
  param_1[0x3b5] = &PTR_FUN_1014a7108;
  param_1[0x3cc] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x3cf);
  FUN_10064e2bc(param_1 + 0x3b5);
  FUN_10064e2bc(param_1 + 0x39e);
  FUN_1001b4464(param_1);
  return;
}




void FUN_100224cf4(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_1014762a0;
  param_1[0x39e] = &PTR_FUN_10148e6e8;
  FUN_10003bd40(param_1 + 0x542);
  param_1[0x3f9] = &PTR_FUN_10148b3a0;
  thunk_FUN_100651068(param_1 + 0x51a);
  FUN_1002ebc50(param_1 + 0x3f9);
  thunk_FUN_100651068(param_1 + 0x3d3);
  param_1[0x3b5] = &PTR_FUN_1014a7108;
  param_1[0x3cc] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x3cf);
  FUN_10064e2bc(param_1 + 0x3b5);
  FUN_10064e2bc(param_1 + 0x39e);
  pvVar1 = (void *)FUN_1001b4464(param_1);
  operator_delete(pvVar1);
  return;
}




long * FUN_100224dc4(long *param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  long *plVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  code *local_70;
  long *plStack_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  
  puVar5 = (undefined8 *)FUN_1001b2b88();
  *puVar5 = &PTR_thunk_FUN_100225310_1014763d0;
  puVar1 = puVar5 + 0x3a2;
  puVar5[0x39f] = 0;
  puVar5[0x39e] = 0;
  puVar5[0x3a1] = 0;
  puVar5[0x3a0] = 0;
  FUN_10064e264(puVar1);
  plVar2 = param_1 + 0x3b9;
  thunk_FUN_100650e64(plVar2);
  plVar3 = param_1 + 0x3df;
  FUN_1006421a8(plVar3);
  param_1[0x3df] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  thunk_FUN_1002eca3c(param_1 + 0x3f0,0);
  thunk_FUN_1002eca3c(param_1 + 0x539,0);
  FUN_1004e313c(param_1 + 0x682);
  FUN_1004e313c(param_1 + 0x684);
  FUN_1004e313c(param_1 + 0x686);
  FUN_1004e313c(param_1 + 0x688);
  FUN_1001b339c(param_1,puVar1);
  FUN_100642bd8(puVar1,plVar2,1);
  FUN_100642bd8(puVar1,plVar3,1);
  FUN_100642bd8(plVar3,param_1 + 0x3f0,1);
  FUN_100642bd8(plVar3,param_1 + 0x539,1);
  FUN_100651594(plVar2,PTR_s_build___Fonts_Brandon_Regular_60_10184e208,&DAT_10115a168);
  FUN_1006515e0(plVar2,1);
  uVar4 = DAT_101d91884;
  local_48 = DAT_101d91884;
  local_70 = thunk_FUN_100225238;
  local_58 = 0;
  uStack_50 = 0;
  local_60 = 0;
  plStack_68 = param_1;
  FUN_10001554c(param_1 + 0x3f1,&local_70);
  local_48 = uVar4;
  local_70 = thunk_FUN_100225298;
  local_58 = 0;
  uStack_50 = 0;
  local_60 = 0;
  plStack_68 = param_1;
  FUN_10001554c(param_1 + 0x53a,&local_70);
  FUN_1001b316c(param_1,0);
  (**(code **)(*param_1 + 0x118))(param_1);
  return param_1;
}




void thunk_FUN_100225238(long param_1)

{
  long lVar1;
  
  if (*(int *)(param_1 + 0x1cf0) != 0) {
    lVar1 = *(long *)(param_1 + 0x1cf8);
    do {
      if (*(code **)(lVar1 + 8) == (code *)0x0) {
        (**(code **)(lVar1 + 0x18))(*(undefined8 *)(lVar1 + 0x10));
      }
      else {
        (**(code **)(lVar1 + 8))();
      }
      lVar1 = lVar1 + 0x20;
    } while (lVar1 != *(long *)(param_1 + 0x1cf8) + (ulong)*(uint *)(param_1 + 0x1cf0) * 0x20);
  }
  FUN_1001e7f70("TwoButtonPopupNode");
  return;
}




void thunk_FUN_100225298(long param_1)

{
  long lVar1;
  
  if (*(int *)(param_1 + 0x1d00) != 0) {
    lVar1 = *(long *)(param_1 + 0x1d08);
    do {
      if (*(code **)(lVar1 + 8) == (code *)0x0) {
        (**(code **)(lVar1 + 0x18))(*(undefined8 *)(lVar1 + 0x10));
      }
      else {
        (**(code **)(lVar1 + 8))();
      }
      lVar1 = lVar1 + 0x20;
    } while (lVar1 != *(long *)(param_1 + 0x1d08) + (ulong)*(uint *)(param_1 + 0x1d00) * 0x20);
  }
  FUN_1001e7f70("TwoButtonPopupNode");
  return;
}




long * FUN_100224fa0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = operator_new(0x3450);
  lVar2 = FUN_100224dc4();
  FUN_1000153b4(lVar2 + 0x3410,param_1);
  FUN_1000153b4(plVar1 + 0x684,param_2);
  FUN_1000153b4(plVar1 + 0x686,param_3);
  FUN_1000153b4(plVar1 + 0x688,param_4);
  (**(code **)(*plVar1 + 0xe8))(plVar1);
  FUN_1001e7f30(plVar1,"TwoButtonPopupNode",1,0,1);
  return plVar1;
}




void FUN_100225058(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  float fVar6;
  undefined4 uVar7;
  undefined8 local_60;
  float local_58;
  float fStack_54;
  
  FUN_100641464(&fStack_54,&local_58);
  fVar6 = local_58 * 0.5;
  uVar7 = NEON_fminnm(fStack_54 * 0.5,0x450fc000);
  FUN_1001b3854(uVar7,fVar6,param_1,0);
  local_60 = NEON_fmov(0x40a00000,4);
  FUN_1001b4034(param_1,&local_60);
  uVar7 = FUN_1001b36cc(uVar7,param_1);
  local_60 = CONCAT44(fVar6,uVar7);
  lVar1 = param_1 + 0x1d10;
  FUN_10064e48c(lVar1,&local_60);
  lVar2 = param_1 + 0x1dc8;
  fVar6 = (float)FUN_10064e3cc(lVar1);
  FUN_100651708(fVar6 + -100.0,lVar2,1);
  FUN_1006513c0(lVar2,param_1 + 0x3420);
  FUN_1001b3418(param_1,param_1 + 0x3410);
  lVar3 = param_1 + 0x1f80;
  FUN_1002ecce4(lVar3,param_1 + 0x3430);
  lVar4 = param_1 + 0x29c8;
  FUN_1002ecce4(lVar4,param_1 + 0x3440);
  FUN_10064e48c(lVar3,&DAT_1011583dc);
  FUN_10064e48c(lVar4,&DAT_1011583dc);
  lVar5 = param_1 + 0x1ef8;
  FUN_10064e5ec(0x42480000,0,lVar3,7,lVar5,8);
  FUN_10064e5ec(0xc2480000,0,lVar4,5,lVar5,8);
  FUN_10064e5ec(0,0xc2fa0000,lVar5,6,lVar1,6);
  FUN_10064e5ec(0,0x42480000,lVar2,4,lVar1,4);
  FUN_1001b3b58(param_1);
  return;
}




void FUN_100225238(long param_1)

{
  long lVar1;
  
  if (*(int *)(param_1 + 0x1cf0) != 0) {
    lVar1 = *(long *)(param_1 + 0x1cf8);
    do {
      if (*(code **)(lVar1 + 8) == (code *)0x0) {
        (**(code **)(lVar1 + 0x18))(*(undefined8 *)(lVar1 + 0x10));
      }
      else {
        (**(code **)(lVar1 + 8))();
      }
      lVar1 = lVar1 + 0x20;
    } while (lVar1 != *(long *)(param_1 + 0x1cf8) + (ulong)*(uint *)(param_1 + 0x1cf0) * 0x20);
  }
  FUN_1001e7f70("TwoButtonPopupNode");
  return;
}




void FUN_100225298(long param_1)

{
  long lVar1;
  
  if (*(int *)(param_1 + 0x1d00) != 0) {
    lVar1 = *(long *)(param_1 + 0x1d08);
    do {
      if (*(code **)(lVar1 + 8) == (code *)0x0) {
        (**(code **)(lVar1 + 0x18))(*(undefined8 *)(lVar1 + 0x10));
      }
      else {
        (**(code **)(lVar1 + 8))();
      }
      lVar1 = lVar1 + 0x20;
    } while (lVar1 != *(long *)(param_1 + 0x1d08) + (ulong)*(uint *)(param_1 + 0x1d00) * 0x20);
  }
  FUN_1001e7f70("TwoButtonPopupNode");
  return;
}




void thunk_FUN_100225310(void)

{
  FUN_100225310();
  return;
}




void FUN_1002252fc(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_100225310();
  operator_delete(pvVar1);
  return;
}




void FUN_100225310(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_100225310_1014763d0;
  if ((void *)param_1[0x689] != (void *)0x0) {
    operator_delete__((void *)param_1[0x689]);
    param_1[0x689] = 0;
    param_1[0x688] = 0;
  }
  if ((void *)param_1[0x687] != (void *)0x0) {
    operator_delete__((void *)param_1[0x687]);
    param_1[0x687] = 0;
    param_1[0x686] = 0;
  }
  if ((void *)param_1[0x685] != (void *)0x0) {
    operator_delete__((void *)param_1[0x685]);
    param_1[0x685] = 0;
    param_1[0x684] = 0;
  }
  if ((void *)param_1[0x683] != (void *)0x0) {
    operator_delete__((void *)param_1[0x683]);
    param_1[0x683] = 0;
    param_1[0x682] = 0;
  }
  param_1[0x539] = &PTR_FUN_10148b3a0;
  thunk_FUN_100651068(param_1 + 0x65a);
  FUN_1002ebc50(param_1 + 0x539);
  param_1[0x3f0] = &PTR_FUN_10148b3a0;
  thunk_FUN_100651068(param_1 + 0x511);
  FUN_1002ebc50(param_1 + 0x3f0);
  FUN_10064221c(param_1 + 0x3df);
  thunk_FUN_100651068(param_1 + 0x3b9);
  thunk_FUN_10064e2bc(param_1 + 0x3a2);
  if ((void *)param_1[0x3a1] != (void *)0x0) {
    operator_delete__((void *)param_1[0x3a1]);
    param_1[0x3a1] = 0;
    param_1[0x3a0] = 0;
  }
  if ((void *)param_1[0x39f] != (void *)0x0) {
    operator_delete__((void *)param_1[0x39f]);
    param_1[0x39f] = 0;
    param_1[0x39e] = 0;
  }
  FUN_1001b4464(param_1);
  return;
}




void FUN_10022542c(undefined8 *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  uint *puVar3;
  long lVar4;
  long lVar5;
  
  *param_1 = &PTR_thunk_FUN_10022542c_101476500;
  iVar2 = FUN_1001e3068();
  if (iVar2 != 0) {
    puVar3 = (uint *)FUN_1001e337c();
    if (*puVar3 != 0) {
      lVar4 = *(long *)(puVar3 + 2);
      lVar5 = (ulong)*puVar3 << 5;
      do {
        puVar1 = (undefined8 *)(lVar4 + 8);
        lVar4 = lVar4 + 0x20;
        if ((undefined8 *)*puVar1 == param_1) {
          FUN_1002256a4();
          break;
        }
        lVar5 = lVar5 + -0x20;
      } while (lVar5 != 0);
    }
  }
  thunk_FUN_10065541c(param_1 + 0x39e);
  FUN_1001b4464(param_1);
  return;
}




void thunk_FUN_10022542c(void)

{
  FUN_10022542c();
  return;
}




void FUN_1002254a8(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_10022542c();
  operator_delete(pvVar1);
  return;
}




void FUN_1002254bc(undefined8 param_1,undefined4 *param_2)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x1db0);
  FUN_100225560();
  FUN_1001b35d4(*param_2,param_2[1]);
  FUN_10010a150(param_1);
  FUN_100655614((long)pvVar1 + 0x1cf0,param_1);
  FUN_1001e7f30(pvVar1,"WEBVIEW_POPUP",1,0,1);
  return;
}




void FUN_10022552c(long param_1)

{
  int iVar1;
  long lVar2;
  
  *(uint *)(param_1 + 0x1d74) = *(uint *)(param_1 + 0x1d74) & 0xfffffffb;
  iVar1 = FUN_10015d3f8();
  if (iVar1 != 0) {
    lVar2 = FUN_10015d3ec();
    FUN_100169cec(lVar2 + 0x18);
    return;
  }
  return;
}




long * FUN_100225560(long *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 local_50;
  long *plStack_48;
  long *local_40;
  code *pcStack_38;
  
  puVar2 = (undefined8 *)FUN_1001b2b88();
  *puVar2 = &PTR_thunk_FUN_10022542c_101476500;
  puVar2 = puVar2 + 0x39e;
  thunk_FUN_1006553b0(puVar2);
  FUN_1001b339c(param_1,puVar2);
  plVar3 = (long *)thunk_FUN_10064def8();
  (**(code **)(*plVar3 + 0x58))(plVar3,puVar2);
  FUN_1001b33ac(param_1,plVar3);
  FUN_1001b316c(param_1,1);
  (**(code **)(*param_1 + 0x118))(param_1);
  iVar1 = FUN_1001e3068();
  if (iVar1 != 0) {
    uVar4 = FUN_1001e337c();
    local_50 = 0;
    pcStack_38 = FUN_100225794;
    plStack_48 = param_1;
    local_40 = param_1;
    FUN_100225714(uVar4,&local_50);
  }
  return param_1;
}




void FUN_100225620(undefined8 param_1)

{
  undefined8 local_40;
  float local_38;
  float local_34;
  
  FUN_100641464(&local_34,&local_38);
  local_40 = 0;
  FUN_1001b4034(param_1,&local_40);
  FUN_1001b3854(local_34 + -200.0,local_38 + -100.0,param_1,0);
  FUN_1001b3b58(param_1);
  return;
}




void FUN_1002256a4(uint *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar4 = *param_1;
  uVar3 = (uint)((ulong)((long)param_3 - (long)param_2) >> 5);
  if (uVar4 == uVar3) {
    if (*(void **)(param_1 + 2) != (void *)0x0) {
      operator_delete__(*(void **)(param_1 + 2));
      param_1[0] = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
    }
  }
  else {
    puVar1 = (undefined8 *)(*(long *)(param_1 + 2) + (ulong)uVar4 * 0x20);
    if (puVar1 != param_3) {
      do {
        puVar2 = param_3 + 4;
        uVar5 = *param_3;
        uVar7 = param_3[3];
        uVar6 = param_3[2];
        param_2[1] = param_3[1];
        *param_2 = uVar5;
        param_2[3] = uVar7;
        param_2[2] = uVar6;
        param_2 = param_2 + 4;
        param_3 = puVar2;
      } while (puVar2 != puVar1);
      uVar4 = *param_1;
    }
    *param_1 = uVar4 - uVar3;
  }
  return;
}




void FUN_100225714(uint *param_1,undefined8 *param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
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
    FUN_1002257ac(param_1,uVar3);
    uVar4 = *param_1;
  }
  *param_1 = uVar4 + 1;
  lVar1 = *(long *)(param_1 + 2) + (ulong)(uVar4 + 1) * 0x20;
  uVar5 = *param_2;
  uVar7 = param_2[3];
  uVar6 = param_2[2];
  *(undefined8 *)(lVar1 + -0x18) = param_2[1];
  *(undefined8 *)(lVar1 + -0x20) = uVar5;
  *(undefined8 *)(lVar1 + -8) = uVar7;
  *(undefined8 *)(lVar1 + -0x10) = uVar6;
  return;
}




void FUN_100225794(undefined8 param_1,char *param_2)

{
  if (*param_2 != '\0') {
    FUN_1001e7f70("WEBVIEW_POPUP");
    return;
  }
  return;
}




void FUN_1002257ac(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 << 5);
    puVar2 = *(undefined8 **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar3 = (ulong)*param_1 << 5;
      puVar4 = puVar1;
      puVar5 = puVar2;
      do {
        uVar6 = *puVar5;
        uVar8 = puVar5[3];
        uVar7 = puVar5[2];
        puVar4[1] = puVar5[1];
        *puVar4 = uVar6;
        puVar4[3] = uVar8;
        puVar4[2] = uVar7;
        lVar3 = lVar3 + -0x20;
        puVar4 = puVar4 + 4;
        puVar5 = puVar5 + 4;
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




long * FUN_100225828(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  code *local_70;
  long *plStack_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  
  puVar4 = (undefined8 *)FUN_10022b24c();
  *puVar4 = &PTR_thunk_FUN_100225acc_101476630;
  puVar4[0x6d] = &PTR_FUN_101476810;
  puVar4 = puVar4 + 0x7c;
  thunk_FUN_100652c08(puVar4);
  plVar1 = param_1 + 0x9a;
  FUN_10064e264(plVar1);
  plVar2 = param_1 + 0xb1;
  FUN_10053077c(plVar2,0);
  plVar3 = param_1 + 0x158;
  thunk_FUN_100650e64(plVar3);
  (**(code **)(*param_1 + 0x78))(param_1,puVar4,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  FUN_100642bd8(plVar1,plVar3,1);
  FUN_100642bd8(plVar1,plVar2,1);
  FUN_100652cac(puVar4,PTR_s_build___MenuPartsCommon_tga_101854970,"black_background");
  FUN_100651038(plVar3,PTR_s_build___Fonts_Brandon_Regular_48_10184e200);
  uVar5 = FUN_1004e0150("MENU_NEWSFEED_PULLTOREFRESH",0);
  FUN_1006513c0(plVar3,uVar5);
  if ((*(uint *)((long)param_1 + 0xb44) & 0x7f80) != 0) {
    *(uint *)((long)param_1 + 0xb44) = *(uint *)((long)param_1 + 0xb44) & 0xffff807f;
    FUN_1000200a0(plVar3);
  }
  if ((*(float *)(param_1 + 0x161) != 0.66) || (*(float *)((long)param_1 + 0xb0c) != 0.66)) {
    param_1[0x161] = 0x3f28f5c33f28f5c3;
    FUN_1000200a0(plVar3);
  }
  FUN_100530be0(plVar2,PTR_s_build___MenuPartsCommon_tga_101854970,
                PTR_s_scrollbar_button_fill_top_101854958,
                PTR_s_scrollbar_button_fill_middle_101854960,
                PTR_s_scrollbar_button_fill_bottom_101854968);
  FUN_100530adc(plVar2,0,1);
  local_48 = DAT_101dbd460;
  local_70 = FUN_100225a78;
  local_58 = 0;
  uStack_50 = 0;
  local_60 = 0;
  plStack_68 = param_1;
  FUN_10001554c(param_1 + 0xb2,&local_70);
  local_48 = DAT_101dbd48c;
  local_70 = FUN_100225a78;
  local_58 = 0;
  uStack_50 = 0;
  local_60 = 0;
  plStack_68 = param_1;
  FUN_10001554c(param_1 + 0xb2,&local_70);
  local_48 = FUN_100644a94("UI::EVENT_FEED_SIZE_UPDATE");
  local_70 = FUN_100225a8c;
  local_58 = 0;
  uStack_50 = 0;
  local_60 = 0;
  plStack_68 = param_1;
  FUN_10001554c(param_1 + 1,&local_70);
  (**(code **)(*param_1 + 0x150))(param_1);
  return param_1;
}




void FUN_100225a78(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x000100225a88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x1c8))(param_1,param_4,param_5);
  return;
}




void FUN_100225a8c(undefined1 param_1 [16],float param_2,long param_3)

{
  undefined1 auVar1 [16];
  
  auVar1 = FUN_100530aa0(param_3 + 0x588,1,0,1,1);
  FUN_10053093c(auVar1,param_2 + -15.0,param_3 + 0x588);
  return;
}




void FUN_100225acc(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_100225acc_101476630;
  param_1[0x6d] = &PTR_FUN_101476810;
  thunk_FUN_100651068(param_1 + 0x158);
  thunk_FUN_100530784(param_1 + 0xb1);
  thunk_FUN_10064e2bc(param_1 + 0x9a);
  param_1[0x7c] = &PTR_FUN_1014a7108;
  param_1[0x93] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x96);
  FUN_10064e2bc(param_1 + 0x7c);
  FUN_10022b2fc(param_1);
  return;
}




void thunk_FUN_100225acc(void)

{
  FUN_100225acc();
  return;
}




void FUN_100225b48(long param_1)

{
  FUN_100225acc(param_1 + -0x368);
  return;
}




void FUN_100225b50(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_100225acc();
  operator_delete(pvVar1);
  return;
}




void FUN_100225b64(long param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_100225acc(param_1 + -0x368);
  operator_delete(pvVar1);
  return;
}




void FUN_100225b7c(long param_1)

{
  long lVar1;
  uint uVar2;
  bool bVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  float local_44;
  float local_40;
  float local_3c;
  undefined1 *local_38;
  
  uVar4 = FUN_100126b4c();
  FUN_1001e35ec(param_1,uVar4,&local_3c,&local_40,&local_44);
  fVar5 = *(float *)(param_1 + 0x3d8);
  if (*(float *)(param_1 + 0x514) != fVar5) {
    *(float *)(param_1 + 0x514) = fVar5;
    FUN_1000200a0(param_1 + 0x4d0);
    fVar5 = *(float *)(param_1 + 0x3d8);
  }
  FUN_10064e47c(local_3c - local_44,local_40 - fVar5,param_1 + 0x4d0);
  lVar1 = param_1 + 0xac0;
  fVar6 = (local_3c - local_44) * 0.5;
  FUN_10064259c(lVar1);
  fVar5 = local_44 * 0.5 + 10.0;
  bVar3 = false;
  if ((*(float *)(param_1 + 0xb00) == fVar6) &&
     (bVar3 = false, !NAN(*(float *)(param_1 + 0xb04)) && !NAN(fVar5))) {
    bVar3 = *(float *)(param_1 + 0xb04) == fVar5;
  }
  if (!bVar3) {
    *(float *)(param_1 + 0xb00) = fVar6;
    *(float *)(param_1 + 0xb04) = fVar5;
    FUN_1000200a0(lVar1);
  }
  local_38 = &DAT_3f0000003f000000;
  (**(code **)(*(long *)(param_1 + 0xac0) + 0x28))(lVar1,&local_38);
  fVar5 = *(float *)(param_1 + 0x5cc);
  if (0.0 < fVar5) {
    fVar6 = (float)NEON_fminnm(fVar5 * 0.0058139535,0x3f800000);
    fVar6 = fVar6 * 0.33 + 0.66;
    bVar3 = false;
    if ((*(float *)(param_1 + 0xb08) == fVar6) &&
       (bVar3 = false, !NAN(*(float *)(param_1 + 0xb0c)) && !NAN(fVar6))) {
      bVar3 = *(float *)(param_1 + 0xb0c) == fVar6;
    }
    if (!bVar3) {
      *(float *)(param_1 + 0xb08) = fVar6;
      *(float *)(param_1 + 0xb0c) = fVar6;
      FUN_1000200a0(lVar1);
      fVar5 = *(float *)(param_1 + 0x5cc);
    }
    if (fVar5 <= 129.0) {
      fVar5 = (float)NEON_fminnm(fVar5 * 0.0058139535,0x3f800000);
      uVar2 = *(uint *)(param_1 + 0xb44);
      if ((int)(fVar5 * 127.5) == (uVar2 >> 7 & 0xff)) {
        return;
      }
      *(uint *)(param_1 + 0xb44) =
           uVar2 & 0xffff8000 | uVar2 & 0x7f | ((int)(fVar5 * 127.5) & 0xffU) << 7;
    }
    else {
      if ((~*(uint *)(param_1 + 0xb44) & 0x7f80) == 0) {
        return;
      }
      *(uint *)(param_1 + 0xb44) = *(uint *)(param_1 + 0xb44) | 0x7f80;
    }
    FUN_1000200a0(lVar1);
  }
  return;
}




void FUN_100225d30(long param_1)

{
  long lVar1;
  bool bVar2;
  undefined8 uVar3;
  float fVar4;
  int local_40;
  float local_3c;
  undefined4 local_38;
  float local_34;
  
  uVar3 = FUN_100126b4c();
  FUN_1001e35ec(param_1,uVar3,&local_34,&local_38,&local_3c);
  FUN_10064e47c(local_34 - local_3c,local_38,param_1 + 0x3e0);
  lVar1 = param_1 + 0x588;
  FUN_100530a48(lVar1,0);
  fVar4 = (float)FUN_100530a94(lVar1);
  fVar4 = (local_34 - local_3c) / fVar4;
  bVar2 = false;
  if ((*(float *)(param_1 + 0x5d0) == fVar4) &&
     (bVar2 = false, !NAN(*(float *)(param_1 + 0x5d4)) && !NAN(fVar4))) {
    bVar2 = *(float *)(param_1 + 0x5d4) == fVar4;
  }
  if (!bVar2) {
    *(float *)(param_1 + 0x5d0) = fVar4;
    *(float *)(param_1 + 0x5d4) = fVar4;
    FUN_1000200a0(lVar1);
  }
  local_40 = 0;
  FUN_10016aeec(0,0,0,&local_40);
  FUN_100530ad0(0,(float)local_40,lVar1);
  return;
}




void FUN_100225e00(long param_1,int param_2)

{
  long lVar1;
  bool bVar2;
  
  FUN_10022b508();
  if (param_2 != 0) {
    lVar1 = param_1 + 0x588;
    FUN_100530910(lVar1);
    bVar2 = false;
    if ((*(float *)(param_1 + 0x5cc) == 0.0) && (bVar2 = false, !NAN(*(float *)(param_1 + 0x5c8))))
    {
      bVar2 = *(float *)(param_1 + 0x5c8) == 0.0;
    }
    if (!bVar2) {
      *(undefined8 *)(param_1 + 0x5c8) = 0;
      FUN_1000200a0(lVar1);
    }
    FUN_100531b88(lVar1);
    FUN_1001e79b8(0x3f800000,"build://Sounds/UI.assetbundle/ui_menu_layer_slide.mp3",0,0);
    return;
  }
  return;
}




void FUN_100225e80(long param_1,long *param_2)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(*param_2 + 0x10))(param_2);
  FUN_1005308f8(param_1 + 0x588,uVar1,1);
  return;
}




void FUN_100225eb8(long *param_1)

{
  if (129.0 < *(float *)((long)param_1 + 0x5cc)) {
                    /* WARNING: Could not recover jumptable at 0x000100225ed4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x1c0))();
    return;
  }
  return;
}




void FUN_100225edc(undefined1 param_1 [16],undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_3 + 0x588;
  FUN_100642324(lVar1);
  if (0.0 < (float)param_2) {
    uVar2 = FUN_1006408f4(*(undefined4 *)(param_3 + 0x5c8),param_1._0_8_,param_2,FUN_10001f4ac);
    FUN_100642b14(lVar1,uVar2);
    return;
  }
  if (*(float *)(param_3 + 0x5cc) != param_1._0_4_) {
    *(float *)(param_3 + 0x5cc) = param_1._0_4_;
    FUN_1000200a0(lVar1);
    return;
  }
  return;
}




void FUN_100225f70(long param_1,byte *param_2)

{
  size_t sVar1;
  byte *pbVar2;
  size_t sVar3;
  uint uVar4;
  byte bVar5;
  int iVar6;
  ulong uVar7;
  byte *pbVar8;
  byte *pbVar9;
  long *plVar10;
  ulong uVar11;
  long lVar12;
  
  if (*(char *)(param_1 + 0x370) != '\0') {
    bVar5 = param_2[0x17];
    sVar1 = *(size_t *)(param_2 + 8);
    if (-1 < (char)bVar5) {
      sVar1 = (ulong)bVar5;
    }
    if (sVar1 != 0) {
      uVar4 = *(uint *)(param_1 + 0x378);
      pbVar2 = *(byte **)param_2;
      if (-1 < (char)bVar5) {
        pbVar2 = param_2;
      }
      if (uVar4 != 0) {
        uVar11 = 0;
        lVar12 = *(long *)(param_1 + 0x380);
        do {
          plVar10 = *(long **)(lVar12 + uVar11 * 8);
          bVar5 = *(byte *)((long)plVar10 + 0x67);
          uVar7 = (ulong)bVar5;
          sVar3 = plVar10[0xb];
          if (-1 < (char)bVar5) {
            sVar3 = uVar7;
          }
          if (sVar3 == sVar1) {
            if ((char)bVar5 < '\0') {
              iVar6 = _memcmp((void *)plVar10[10],pbVar2,sVar1);
              if (iVar6 == 0) {
LAB_100226060:
                lVar12 = (**(code **)(*plVar10 + 0x10))(plVar10);
                FUN_100225edc(*(float *)(param_1 + 0x5d4) * -*(float *)(lVar12 + 0x44),0x3e4ccccd,
                              param_1);
                break;
              }
            }
            else if ((uint)*pbVar2 == ((uint)(void *)plVar10[10] & 0xff)) {
              pbVar8 = (byte *)((long)plVar10 + 0x51);
              pbVar9 = pbVar2;
              do {
                uVar7 = uVar7 - 1;
                pbVar9 = pbVar9 + 1;
                if (uVar7 == 0) goto LAB_100226060;
                bVar5 = *pbVar8;
                pbVar8 = pbVar8 + 1;
              } while (bVar5 == *pbVar9);
            }
          }
          uVar11 = uVar11 + 1;
        } while (uVar11 != uVar4);
      }
      std::string::operator=((string *)(param_1 + 0x3b8),(string *)&DAT_101d91198);
      return;
    }
  }
  return;
}




void FUN_1002260b4(long param_1,int param_2)

{
  byte bVar1;
  
  bVar1 = 2;
  if (param_2 == 0) {
    bVar1 = 0;
  }
  *(byte *)(param_1 + 0x360) = *(byte *)(param_1 + 0x360) & 0xfd | bVar1;
  return;
}




void FUN_1002260d4(long param_1,byte param_2)

{
  *(byte *)(param_1 + 0x360) = *(byte *)(param_1 + 0x360) & 0xfe | param_2;
  return;
}




void FUN_1002260e8(long param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x371) = param_2;
  return;
}




void FUN_1002260f0(void)

{
  return;
}




void FUN_1002260f4(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_100225828();
  *puVar1 = &PTR_thunk_FUN_100225acc_101476838;
  puVar1[0x6d] = &PTR_FUN_101476a18;
  return;
}




void thunk_FUN_100225acc(void)

{
  FUN_100225acc();
  return;
}




void FUN_100226120(long param_1)

{
  FUN_100225acc(param_1 + -0x368);
  return;
}




void FUN_100226128(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_100225acc();
  operator_delete(pvVar1);
  return;
}




void FUN_10022613c(long param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_100225acc(param_1 + -0x368);
  operator_delete(pvVar1);
  return;
}




long * FUN_100226158(long *param_1)

{
  undefined8 *puVar1;
  code *local_60;
  long *plStack_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  
  puVar1 = (undefined8 *)FUN_100269da8();
  *puVar1 = &PTR_FUN_101476a40;
  thunk_FUN_100652c08(puVar1 + 0x19);
  thunk_FUN_100652c08(param_1 + 0x37);
  thunk_FUN_100652c08(param_1 + 0x55);
  (**(code **)(*param_1 + 0x78))(param_1,puVar1 + 0x19,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x37,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x55,1);
  local_38 = DAT_101dbd460;
  local_60 = thunk_FUN_10022675c;
  local_48 = 0;
  uStack_40 = 0;
  local_50 = 0;
  plStack_58 = param_1;
  FUN_10001554c(param_1 + 1,&local_60);
  local_38 = DAT_101dbd48c;
  local_60 = thunk_FUN_10022675c;
  local_48 = 0;
  uStack_40 = 0;
  local_50 = 0;
  plStack_58 = param_1;
  FUN_10001554c(param_1 + 1,&local_60);
  FUN_10022626c(param_1);
  return param_1;
}




void thunk_FUN_10022675c(long param_1)

{
  long lVar1;
  
  if ((*(byte *)(param_1 + 0x23c) >> 2 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x32c) >> 2 & 1) == 0) {
      return;
    }
    lVar1 = param_1 + 0x2a8;
  }
  else {
    lVar1 = param_1 + 0x1b8;
  }
  FUN_100642324(lVar1);
  FUN_1002265b0(param_1,lVar1);
  return;
}




void FUN_10022626c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  bool bVar4;
  int iVar5;
  
  lVar1 = param_1 + 200;
  if (*(long *)(param_1 + 0x198) != 0) {
    FUN_100652d8c(lVar1);
  }
  lVar2 = param_1 + 0x1b8;
  if (*(long *)(param_1 + 0x288) != 0) {
    FUN_100652d8c(lVar2);
  }
  lVar3 = param_1 + 0x2a8;
  if (*(long *)(param_1 + 0x378) != 0) {
    FUN_100652d8c(lVar3);
  }
  iVar5 = FUN_10012ced4();
  if (iVar5 != 0) {
    FUN_100652cac(lVar1,PTR_s_build___MenuPartsCommon_tga_101854970,"black_background");
    *(uint *)(param_1 + 0x14c) = *(uint *)(param_1 + 0x14c) | 0x10;
    bVar4 = false;
    if ((*(float *)(param_1 + 0x118) == 0.5) && (bVar4 = false, !NAN(*(float *)(param_1 + 0x11c))))
    {
      bVar4 = *(float *)(param_1 + 0x11c) == 0.5;
    }
    if (!bVar4) {
      *(undefined1 **)(param_1 + 0x118) = &DAT_3f0000003f000000;
      FUN_1000200a0(lVar1);
    }
    FUN_100652cac(lVar2,PTR_s_build___NeteaseLogo_png_1018549c0,"startupscreen_china_netease");
    *(uint *)(param_1 + 0x23c) = *(uint *)(param_1 + 0x23c) & 0xfffffffb;
    if ((*(float *)(param_1 + 0x208) != 0.5) || (*(float *)(param_1 + 0x20c) != 0.5)) {
      *(undefined1 **)(param_1 + 0x208) = &DAT_3f0000003f000000;
      FUN_1000200a0(lVar2);
    }
    FUN_100652cac(lVar3,PTR_s_build___NeteaseChinaPublishing_p_1018549c8,
                  "startupscreen_china_publishing");
    *(uint *)(param_1 + 0x32c) = *(uint *)(param_1 + 0x32c) & 0xfffffffb;
    if ((*(float *)(param_1 + 0x2f8) != 0.5) || (*(float *)(param_1 + 0x2fc) != 0.5)) {
      *(undefined1 **)(param_1 + 0x2f8) = &DAT_3f0000003f000000;
      FUN_1000200a0(lVar3);
      return;
    }
  }
  return;
}




long * thunk_FUN_100226158(long *param_1)

{
  undefined8 *puVar1;
  code *pcStack_60;
  long *plStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  
  puVar1 = (undefined8 *)FUN_100269da8();
  *puVar1 = &PTR_FUN_101476a40;
  thunk_FUN_100652c08(puVar1 + 0x19);
  thunk_FUN_100652c08(param_1 + 0x37);
  thunk_FUN_100652c08(param_1 + 0x55);
  (**(code **)(*param_1 + 0x78))(param_1,puVar1 + 0x19,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x37,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x55,1);
  uStack_38 = DAT_101dbd460;
  pcStack_60 = thunk_FUN_10022675c;
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_50 = 0;
  plStack_58 = param_1;
  FUN_10001554c(param_1 + 1,&pcStack_60);
  uStack_38 = DAT_101dbd48c;
  pcStack_60 = thunk_FUN_10022675c;
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_50 = 0;
  plStack_58 = param_1;
  FUN_10001554c(param_1 + 1,&pcStack_60);
  FUN_10022626c(param_1);
  return param_1;
}




void FUN_1002263e8(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001002263f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x150))();
  return;
}




void FUN_1002263f4(long *param_1)

{
  bool bVar1;
  float local_30;
  float fStack_2c;
  undefined1 *local_28;
  
  FUN_100641464(&fStack_2c,&local_30);
  FUN_10064e47c(fStack_2c,local_30,param_1 + 0x19);
  local_30 = local_30 * 0.5;
  bVar1 = false;
  if ((*(float *)(param_1 + 8) == fStack_2c * 0.5) &&
     (bVar1 = false, !NAN(*(float *)((long)param_1 + 0x44)) && !NAN(local_30))) {
    bVar1 = *(float *)((long)param_1 + 0x44) == local_30;
  }
  if (!bVar1) {
    *(float *)(param_1 + 8) = fStack_2c * 0.5;
    *(float *)((long)param_1 + 0x44) = local_30;
    FUN_1000200a0(param_1);
  }
  local_28 = &DAT_3f0000003f000000;
  (**(code **)(*param_1 + 0x28))(param_1,&local_28);
  return;
}




void FUN_100226478(long param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_100226488(param_1,param_1 + 0x1b8);
    return;
  }
  return;
}




void FUN_100226488(undefined8 param_1,long param_2)

{
  long lVar1;
  ushort uVar2;
  ushort *puVar3;
  
  *(uint *)(param_2 + 0x84) = *(uint *)(param_2 + 0x84) | 4;
  lVar1 = DAT_101dbd2f8;
  uVar2 = *(ushort *)(DAT_101dbd2f8 + 0x20010);
  if ((ulong)uVar2 == 0xffff) {
    puVar3 = (ushort *)0x0;
  }
  else {
    puVar3 = (ushort *)(DAT_101dbd2f8 + (ulong)uVar2 * 0x40 + 0x10);
    if (uVar2 == *(ushort *)(DAT_101dbd2f8 + 0x20012)) {
      uVar2 = 0xffff;
    }
    else {
      uVar2 = *puVar3;
    }
    *(ushort *)(DAT_101dbd2f8 + 0x20010) = uVar2;
    *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
    FUN_10063f0f0(puVar3);
    *(undefined ***)puVar3 = &PTR_thunk_FUN_10063eeb4_10144b270;
    *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
  }
  FUN_10063f0e8(0x40400000,puVar3);
  FUN_100642b14(param_2,puVar3);
  lVar1 = FUN_10008e900();
  *(code **)(lVar1 + 0x10) = FUN_100226570;
  *(undefined8 *)(lVar1 + 0x20) = param_1;
  FUN_100642b14(param_2,lVar1);
  return;
}




void FUN_100226570(long param_1,undefined8 param_2)

{
  FUN_100642324(param_2);
  if (param_1 != 0) {
    FUN_1002265b0(param_1,param_2);
    return;
  }
  return;
}




void FUN_1002265b0(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  ushort uVar2;
  ushort *puVar3;
  
  lVar1 = DAT_101dbd2f8;
  uVar2 = *(ushort *)(DAT_101dbd2f8 + 0x20010);
  if ((ulong)uVar2 == 0xffff) {
    puVar3 = (ushort *)0x0;
  }
  else {
    puVar3 = (ushort *)(DAT_101dbd2f8 + (ulong)uVar2 * 0x40 + 0x10);
    if (uVar2 == *(ushort *)(DAT_101dbd2f8 + 0x20012)) {
      uVar2 = 0xffff;
    }
    else {
      uVar2 = *puVar3;
    }
    *(ushort *)(DAT_101dbd2f8 + 0x20010) = uVar2;
    *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
    FUN_10063fcac(puVar3);
    *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
  }
  FUN_10063fce0(0,puVar3);
  FUN_10063f0e8(0x3e4ccccd,puVar3);
  FUN_100642b14(param_2,puVar3);
  lVar1 = FUN_10008e900();
  *(code **)(lVar1 + 0x10) = FUN_100226690;
  *(undefined8 *)(lVar1 + 0x20) = param_1;
  FUN_100642b14(param_2,lVar1);
  return;
}




void FUN_100226690(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined1 auStack_50 [32];
  
  FUN_100642324(param_2);
  if (param_1 != 0) {
    if ((*(byte *)(param_1 + 0x23c) >> 2 & 1) == 0) {
      if ((*(byte *)(param_1 + 0x32c) >> 2 & 1) == 0) {
        if ((*(byte *)(param_1 + 0x84) >> 2 & 1) != 0) {
          uVar1 = FUN_100644a94("UI::EVENT_CLOSED_CHINA_LOADING_SCREEN");
          FUN_100644aec(auStack_50,uVar1,0);
          FUN_100644c34(param_1,auStack_50,1);
          FUN_100652d8c(param_1 + 200);
          FUN_100652d8c(param_1 + 0x1b8);
          FUN_100652d8c(param_1 + 0x2a8);
        }
      }
      else {
        FUN_1002265b0(param_1,param_1);
      }
    }
    else {
      FUN_100226488(param_1,param_1 + 0x2a8);
    }
    *(uint *)(param_2 + 0x84) = *(uint *)(param_2 + 0x84) & 0xfffffffb;
  }
  return;
}




void FUN_10022675c(long param_1)

{
  long lVar1;
  
  if ((*(byte *)(param_1 + 0x23c) >> 2 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x32c) >> 2 & 1) == 0) {
      return;
    }
    lVar1 = param_1 + 0x2a8;
  }
  else {
    lVar1 = param_1 + 0x1b8;
  }
  FUN_100642324(lVar1);
  FUN_1002265b0(param_1,lVar1);
  return;
}




void FUN_1002267b0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_101476a40;
  param_1[0x55] = &PTR_FUN_1014a7108;
  param_1[0x6c] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x6f);
  FUN_10064e2bc(param_1 + 0x55);
  param_1[0x37] = &PTR_FUN_1014a7108;
  param_1[0x4e] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x51);
  FUN_10064e2bc(param_1 + 0x37);
  param_1[0x19] = &PTR_FUN_1014a7108;
  param_1[0x30] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x33);
  FUN_10064e2bc(param_1 + 0x19);
  FUN_10064e2bc(param_1);
  return;
}




void FUN_100226848(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_101476a40;
  param_1[0x55] = &PTR_FUN_1014a7108;
  param_1[0x6c] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x6f);
  FUN_10064e2bc(param_1 + 0x55);
  param_1[0x37] = &PTR_FUN_1014a7108;
  param_1[0x4e] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x51);
  FUN_10064e2bc(param_1 + 0x37);
  param_1[0x19] = &PTR_FUN_1014a7108;
  param_1[0x30] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x33);
  FUN_10064e2bc(param_1 + 0x19);
  pvVar1 = (void *)FUN_10064e2bc(param_1);
  operator_delete(pvVar1);
  return;
}




long * FUN_1002268e4(long *param_1)

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
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  long *plVar18;
  undefined **ppuVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  int iVar22;
  int iVar23;
  undefined8 *puVar24;
  undefined8 uVar25;
  uint uVar26;
  float fVar27;
  float fVar28;
  code *local_b8;
  long *plStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined4 local_90;
  
  puVar24 = (undefined8 *)FUN_1006421a8();
  *puVar24 = &PTR_thunk_FUN_10064221c_10144b7e8;
  FUN_1004f0a20(puVar24 + 0x11);
  FUN_10014f4a0(param_1 + 0x14);
  *param_1 = (long)&PTR_thunk_FUN_10022ae54_101476ba8;
  param_1[0x11] = (long)&PTR_FUN_101476ca8;
  param_1[0x14] = (long)&PTR_FUN_101476cd8;
  plVar1 = param_1 + 0x17;
  thunk_FUN_100181304(plVar1,0);
  plVar2 = param_1 + 0x2ce;
  FUN_1006421a8(plVar2);
  param_1[0x2ce] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar3 = param_1 + 0x2df;
  thunk_FUN_100652c08();
  plVar4 = param_1 + 0x2fd;
  thunk_FUN_100652c08();
  plVar5 = param_1 + 0x31b;
  thunk_FUN_100652c08();
  plVar6 = param_1 + 0x339;
  thunk_FUN_100650e64(plVar6);
  plVar7 = param_1 + 0x35f;
  thunk_FUN_100183990(plVar7,0);
  plVar8 = param_1 + 0x41d;
  FUN_1006421a8(plVar8);
  param_1[0x41d] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar9 = param_1 + 0x42e;
  thunk_FUN_100650e64();
  plVar10 = param_1 + 0x454;
  thunk_FUN_100650e64();
  plVar11 = param_1 + 0x47a;
  thunk_FUN_100184f78(plVar11);
  plVar12 = param_1 + 0x818;
  thunk_FUN_100184f78();
  plVar13 = param_1 + 0xbb6;
  thunk_FUN_100181304(plVar13,0);
  plVar14 = param_1 + 0xe6d;
  FUN_10064e264(plVar14);
  plVar15 = param_1 + 0xe84;
  thunk_FUN_100650e64();
  plVar16 = param_1 + 0xeaa;
  thunk_FUN_100652c08();
  plVar17 = param_1 + 0xec8;
  FUN_10064e264(plVar17);
  thunk_FUN_100652c08();
  thunk_FUN_100650e64();
  plVar18 = param_1 + 0xf23;
  FUN_10064e264(plVar18);
  thunk_FUN_100652c08();
  thunk_FUN_100650e64();
  thunk_FUN_1004e439c(param_1 + 0xf7e,&DAT_101d91650);
  thunk_FUN_1004e439c(param_1 + 0xf80,&DAT_101d91650);
  FUN_10003330c(param_1 + 0xf82,&DAT_101d91198);
  param_1[0xf85] = 0;
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  FUN_100642bd8(plVar2,plVar3,1);
  FUN_100642bd8(plVar2,plVar4,1);
  FUN_100642bd8(plVar2,plVar5,1);
  FUN_100642bd8(plVar2,plVar6,1);
  FUN_100642bd8(plVar2,plVar8,1);
  FUN_100642bd8(plVar8,plVar9,1);
  FUN_100642bd8(plVar8,plVar10,1);
  FUN_100642bd8(plVar8,plVar11,1);
  FUN_100642bd8(plVar8,plVar7,1);
  FUN_100642bd8(plVar8,plVar12,1);
  FUN_100642bd8(plVar8,plVar1,1);
  FUN_100642bd8(plVar8,plVar13,1);
  FUN_100642bd8(plVar13,plVar14,1);
  FUN_100642bd8(plVar14,plVar15,1);
  FUN_100642bd8(plVar14,plVar16,1);
  FUN_100642bd8(plVar8,plVar17,1);
  FUN_100642bd8(plVar17,param_1 + 0xedf,1);
  FUN_100642bd8(plVar17,param_1 + 0xefd,1);
  FUN_100642bd8(plVar8,plVar18,1);
  FUN_100642bd8(plVar18,param_1 + 0xf3a,1);
  FUN_100642bd8(plVar18,param_1 + 0xf58,1);
  iVar22 = FUN_100126c88();
  FUN_100652cac(plVar3,PTR_s_build___MenuPartsCommon_tga_101854970,"black_background");
  uVar26 = *(uint *)((long)param_1 + 0x177c);
  if ((uVar26 & 0x7f80) != 0x3f80) {
    *(uint *)((long)param_1 + 0x177c) = uVar26 & 0xffff807f | 0x3f80;
    FUN_1000200a0(plVar3);
    uVar26 = *(uint *)((long)param_1 + 0x177c);
  }
  *(uint *)((long)param_1 + 0x177c) = uVar26 | 0x10;
  FUN_100652cac(plVar4,PTR_s_build___MenuPartsCommon_tga_101854970,"black_background");
  uVar26 = *(uint *)((long)param_1 + 0x186c);
  if ((uVar26 & 0x7f80) != 0x2600) {
    *(uint *)((long)param_1 + 0x186c) = uVar26 & 0xffff8000 | uVar26 & 0x7f | 0x2600;
    FUN_1000200a0(plVar4);
    uVar26 = *(uint *)((long)param_1 + 0x186c);
  }
  *(uint *)((long)param_1 + 0x186c) = uVar26 | 0x10;
  FUN_100652cac(plVar5,PTR_s_build___MenuPartsCommon_tga_101854970,"vert_glass_shadow");
  FUN_100652dd4(plVar5,&DAT_10115a164,2);
  uVar26 = *(uint *)((long)param_1 + 0x195c);
  if ((uVar26 & 0x7f80) != 0x2600) {
    *(uint *)((long)param_1 + 0x195c) = uVar26 & 0xffff8000 | uVar26 & 0x7f | 0x2600;
    FUN_1000200a0(plVar5);
    uVar26 = *(uint *)((long)param_1 + 0x195c);
  }
  *(uint *)((long)param_1 + 0x195c) = uVar26 | 0x10;
  FUN_100651038(plVar6,PTR_s_build___Fonts_Brandon_Bold_60_fo_10184e240);
  uVar26 = *(uint *)((long)param_1 + 0x1a4c);
  if ((uVar26 & 0x7f80) != 0x5900) {
    *(uint *)((long)param_1 + 0x1a4c) = uVar26 & 0xffff8000 | uVar26 & 0x7f | 0x5900;
    FUN_1000200a0(plVar6);
  }
  ppuVar19 = &PTR_s_build___Fonts_Brandon_Bold_60_fo_10184e240;
  if (iVar22 == 0) {
    ppuVar19 = &PTR_s_build___Fonts_Brandon_Bold_36_fo_10184e228;
  }
  FUN_100651038(plVar9,*ppuVar19);
  if ((*(uint *)((long)param_1 + 0x21f4) & 0x7f80) != 0x3f80) {
    *(uint *)((long)param_1 + 0x21f4) = *(uint *)((long)param_1 + 0x21f4) & 0xffff807f | 0x3f80;
    FUN_1000200a0(plVar9);
  }
  ppuVar19 = &PTR_s_build___Fonts_Brandon_Bold_60_fo_10184e240;
  if (iVar22 == 0) {
    ppuVar19 = &PTR_s_build___Fonts_Brandon_Bold_36_fo_10184e228;
  }
  FUN_100651038(plVar10,*ppuVar19);
  if ((*(uint *)((long)param_1 + 0x2324) & 0x7f80) != 0x3f80) {
    *(uint *)((long)param_1 + 0x2324) = *(uint *)((long)param_1 + 0x2324) & 0xffff807f | 0x3f80;
    FUN_1000200a0(plVar10);
  }
  FUN_100652cdc(param_1 + 0x3f9,"circle_button_question");
  FUN_1001b495c(0xbf800000,plVar7);
  fVar28 = *(float *)(param_1 + 0x368);
  if ((fVar28 != 0.6) || (fVar28 = *(float *)((long)param_1 + 0x1b44), fVar28 != 0.6)) {
    param_1[0x368] = 0x3f19999a3f19999a;
    FUN_1000200a0(plVar7);
  }
  fVar27 = (float)FUN_1006531b0(param_1 + 0x3bd);
  param_1[0x36a] =
       CONCAT44((float)((ulong)param_1[0x368] >> 0x20) * fVar28,(float)param_1[0x368] * fVar27);
  uVar20 = DAT_101d91884;
  local_90 = DAT_101d91884;
  local_b8 = thunk_FUN_10022a690;
  local_a0 = 0;
  uStack_98 = 0;
  local_a8 = 0;
  plStack_b0 = param_1;
  FUN_10001554c(param_1 + 0x360,&local_b8);
  uVar21 = DAT_101dbd4ac;
  local_90 = DAT_101dbd4ac;
  local_b8 = thunk_FUN_10022a54c;
  local_a0 = 0;
  uStack_98 = 0;
  local_a8 = 0;
  plStack_b0 = param_1;
  FUN_10001554c(param_1 + 0x47b,&local_b8);
  local_90 = uVar21;
  local_b8 = thunk_FUN_10022a54c;
  local_a0 = 0;
  uStack_98 = 0;
  local_a8 = 0;
  plStack_b0 = param_1;
  FUN_10001554c(param_1 + 0x819,&local_b8);
  iVar23 = FUN_100131560();
  if (iVar23 == 0) {
    uVar25 = FUN_1004e0150("GENERIC_DIALOG_CANCEL",0);
    ppuVar19 = &PTR_s_build___Fonts_Brandon_Bold_60_fo_10184e240;
    if (iVar22 == 0) {
      ppuVar19 = &PTR_s_build___Fonts_Brandon_Bold_48_fo_10184e238;
    }
    FUN_1001816d4(0x42000000,0x42c80000,0x446b0000,plVar1,0,uVar25,&DAT_10115a168,&DAT_101dc1cb8,
                  *ppuVar19);
    uVar25 = FUN_1004e0150("MENU_PROFILE_EDIT_SUBMIT_NAME",0);
    local_b8 = (code *)0x41f0000000000000;
    FUN_1001816d4(0x41a00000,0x43480000,0x449c4000,plVar13,0,uVar25,&DAT_10115a168,&local_b8,
                  *ppuVar19);
    local_90 = uVar20;
    local_b8 = thunk_FUN_10022a47c;
    local_a0 = 0;
    uStack_98 = 0;
    local_a8 = 0;
    plStack_b0 = param_1;
    FUN_10001554c(param_1 + 2999,&local_b8);
    FUN_1001b495c(0x3f000000,plVar13);
    if ((*(float *)(param_1 + 0xbc0) != 0.5) || (*(float *)((long)param_1 + 0x5e04) != 0.5)) {
      param_1[0xbc0] = (long)&DAT_3f0000003f000000;
      FUN_1000200a0(plVar13);
    }
    FUN_100181c68(0x43133333,plVar13);
    FUN_1001b4964(plVar13,1);
    FUN_1001b4c0c(plVar13,0);
    FUN_100652cac(plVar16,PTR_s_build___MenuPartsCommon_tga_101854970,"ice_icon_small");
    if ((*(float *)(param_1 + 0xeb2) != 0.0) || (*(float *)((long)param_1 + 0x7594) != 3.0)) {
      param_1[0xeb2] = 0x4040000000000000;
      FUN_1000200a0(plVar16);
    }
    local_b8 = (code *)0x3f00000000000000;
    (**(code **)(param_1[0xeaa] + 0x28))(plVar16,&local_b8);
    if ((*(float *)(param_1 + 0xeb3) != 0.9) || (*(float *)((long)param_1 + 0x759c) != 0.9)) {
      param_1[0xeb3] = 0x3f6666663f666666;
      FUN_1000200a0(plVar16);
    }
    ppuVar19 = &PTR_s_build___Fonts_Brandon_Light_60_f_10184e1c8;
    if (iVar22 == 0) {
      ppuVar19 = &PTR_s_build___Fonts_Brandon_Light_48_f_10184e1c0;
    }
    FUN_100651038(plVar15,*ppuVar19);
    fVar28 = (float)FUN_100652e60(plVar16);
    fVar27 = *(float *)((long)param_1 + 0x7594) + -3.0;
    if ((*(float *)(param_1 + 0xe8c) != fVar28) || (*(float *)((long)param_1 + 0x7464) != fVar27)) {
      *(float *)(param_1 + 0xe8c) = fVar28;
      *(float *)((long)param_1 + 0x7464) = fVar27;
      FUN_1000200a0(plVar15);
    }
    local_b8 = (code *)0x3f00000000000000;
    (**(code **)(param_1[0xe84] + 0x28))(plVar15,&local_b8);
    fVar28 = (float)FUN_1006425d0(plVar14,0,0,1,1);
    FUN_1006425d0(plVar14,0,0,1,1);
    fVar27 = fVar27 * -0.5 + 10.0;
    if ((*(float *)(param_1 + 0xe75) != fVar28 * -0.5) ||
       (*(float *)((long)param_1 + 0x73ac) != fVar27)) {
      *(float *)(param_1 + 0xe75) = fVar28 * -0.5;
      *(float *)((long)param_1 + 0x73ac) = fVar27;
      FUN_1000200a0(plVar14);
    }
    local_b8 = (code *)0x0;
    (**(code **)(*plVar14 + 0x28))(plVar14,&local_b8);
    FUN_100652cac(param_1 + 0xedf,PTR_s_build___MenuPartsCommon_tga_101854970,"checkbox_filled");
    ppuVar19 = &PTR_s_build___Fonts_Brandon_Regular_60_10184e208;
    if (iVar22 == 0) {
      ppuVar19 = &PTR_s_build___Fonts_Brandon_Regular_36_10184e1f0;
    }
    FUN_100651594(param_1 + 0xefd,*ppuVar19,&DAT_10115a168);
    FUN_100652cac(param_1 + 0xf3a,PTR_s_build___MenuPartsCommon_tga_101854970,"checkbox_filled");
    FUN_100651594(param_1 + 0xf58,*ppuVar19,&DAT_10115a168);
  }
  else {
    uVar25 = FUN_1004e0150("MENU_PROFILE_EDIT_HEADER",0);
    FUN_1006513c0(plVar6,uVar25);
    uVar25 = FUN_1004e0150("MENU_PROFILE_EDIT_DESC",0);
    FUN_1006513c0(plVar10,uVar25);
    uVar25 = FUN_1004e0150("MENU_PROFILE_EDIT_NAME_FIELD",0);
    FUN_100185730(plVar11,uVar25);
    uVar25 = FUN_1004e0150("MENU_PROFILE_EDIT_NAME_CAPTION",0);
    FUN_1001afd98(plVar11,uVar25,&DAT_101d91650,&DAT_101d91650,0,0,0,0,0,0);
    FUN_100185e2c(plVar11,1);
    FUN_100185e38(plVar11,1,3);
    FUN_100185e48(plVar11,1,0x10);
    FUN_100185e70(plVar11,0);
    *(uint *)((long)param_1 + 0x2454) = *(uint *)((long)param_1 + 0x2454) | 4;
    uVar25 = FUN_1004e0150("MENU_PROFILE_EDIT_NAME_CONFIRM_FIELD",0);
    FUN_100185730(plVar12,uVar25);
    uVar25 = FUN_1004e0150("MENU_PROFILE_EDIT_NAME_CAPTION",0);
    FUN_1001afd98(plVar12,uVar25,&DAT_101d91650,&DAT_101d91650,0,0,0,0,0,0);
    FUN_100185e2c(plVar12,0);
    FUN_100185e38(plVar12,0,3);
    FUN_100185e48(plVar12,0,0x10);
    FUN_100185e70(plVar12,0);
    *(uint *)((long)param_1 + 0x4144) = *(uint *)((long)param_1 + 0x4144) & 0xfffffffb;
    uVar25 = FUN_1004e0150("GENERIC_DIALOG_CANCEL",0);
    ppuVar19 = &PTR_s_build___Fonts_Brandon_Bold_60_fo_10184e240;
    if (iVar22 == 0) {
      ppuVar19 = &PTR_s_build___Fonts_Brandon_Bold_48_fo_10184e238;
    }
    fVar28 = 100.0;
    FUN_1001816d4(0x42000000,0x42c80000,0x446b0000,plVar1,0,uVar25,&DAT_10115a168,&DAT_101dc1cb8,
                  *ppuVar19);
    uVar25 = FUN_1004e0150("MENU_PROFILE_EDIT_SUBMIT_NAME",0);
    FUN_1001816d4(0x42000000,0x42c80000,0x446b0000,plVar13,0,uVar25,&DAT_10115a168,&DAT_101dc1cb8,
                  *ppuVar19);
    local_90 = uVar20;
    local_b8 = thunk_FUN_10022a47c;
    local_a0 = 0;
    uStack_98 = 0;
    local_a8 = 0;
    plStack_b0 = param_1;
    FUN_10001554c(param_1 + 2999,&local_b8);
    FUN_1001b495c(0x3f000000,plVar13);
    if ((*(float *)(param_1 + 0xbc0) != 0.5) || (*(float *)((long)param_1 + 0x5e04) != 0.5)) {
      param_1[0xbc0] = (long)&DAT_3f0000003f000000;
      FUN_1000200a0(plVar13);
    }
    FUN_1001b4964(plVar13,1);
    FUN_1001b4c0c(plVar13,0);
    fVar27 = (float)FUN_1006425d0(plVar14,0,0,1,1);
    FUN_1006425d0(plVar14,0,0,1,1);
    fVar28 = fVar28 * -0.5 + 10.0;
    if ((*(float *)(param_1 + 0xe75) != fVar27 * -0.5) ||
       (*(float *)((long)param_1 + 0x73ac) != fVar28)) {
      *(float *)(param_1 + 0xe75) = fVar27 * -0.5;
      *(float *)((long)param_1 + 0x73ac) = fVar28;
      FUN_1000200a0(plVar14);
    }
    local_b8 = (code *)0x0;
    (**(code **)(*plVar14 + 0x28))(plVar14,&local_b8);
  }
  return param_1;
}




void thunk_FUN_10022a690(long param_1)

{
  undefined8 uVar1;
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
  undefined8 uStack_60;
  undefined4 uStack_48;
  undefined1 auStack_40 [8];
  void *pvStack_38;
  
  uVar1 = FUN_1004e0150("MENU_EDIT_NAME_RULES_TOOLTIP",0);
  thunk_FUN_1004e439c(auStack_40,uVar1);
  thunk_FUN_1001cd434(&ppuStack_f0);
  thunk_FUN_1004e439c(&pvStack_128,auStack_40);
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
  lStack_c0 = param_1 + 0x1af8;
  uStack_48 = 2;
  uStack_60 = 0x447a00003f000000;
  uVar1 = FUN_10002f320();
  FUN_10001549c(&pvStack_128,"editNameRulesInfo");
  FUN_100030e74(uVar1,&pvStack_128,&ppuStack_f0);
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
  if (pvStack_38 != (void *)0x0) {
    operator_delete__(pvStack_38);
  }
  return;
}




void thunk_FUN_10022a54c(long param_1)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined1 auStack_50 [8];
  void *pvStack_48;
  undefined1 auStack_40 [8];
  void *pvStack_38;
  
  lVar1 = param_1 + 0x23d0;
  uVar5 = FUN_1001afee4(lVar1);
  lVar2 = param_1 + 0x7bf0;
  FUN_1000153b4(lVar2,uVar5);
  if (*(int *)(param_1 + 0x7c30) == 4) {
    uVar3 = FUN_1004e3634(lVar2);
    if (0x10 < uVar3) {
      FUN_1004e4154(auStack_40,lVar2,0,0x10);
      FUN_1004e3120(auStack_50,"...");
      FUN_1004e372c(auStack_40,auStack_50);
      if (pvStack_48 != (void *)0x0) {
        operator_delete__(pvStack_48);
      }
      FUN_100185730(lVar1,auStack_40);
      if (pvStack_38 != (void *)0x0) {
        operator_delete__(pvStack_38);
      }
    }
  }
  else {
    FUN_100185e94(lVar1,1,param_1 + 0x7c00);
    uVar5 = FUN_1001afee4(lVar1);
    iVar4 = FUN_1004e36c0(uVar5,&DAT_101d91650);
    if (iVar4 != 0) {
      FUN_10018577c(lVar1);
    }
    lVar2 = param_1 + 0x40c0;
    uVar5 = FUN_1001afee4(lVar1);
    FUN_100185e7c(lVar2,1,uVar5);
    uVar5 = FUN_1001afee4(lVar2);
    iVar4 = FUN_1004e36c0(uVar5,&DAT_101d91650);
    if (iVar4 != 0) {
      FUN_10018577c(lVar2);
    }
  }
  FUN_100229530(param_1);
  return;
}




void thunk_FUN_10022a47c(long param_1)

{
  int iVar1;
  
  iVar1 = FUN_100131560();
  if (iVar1 != 0) {
switchD_10022a4cc_caseD_1:
    FUN_100229634(param_1);
    return;
  }
  switch(*(undefined4 *)(param_1 + 0x7c30)) {
  case 1:
    goto switchD_10022a4cc_caseD_1;
  case 2:
    FUN_10022990c(param_1);
    return;
  case 3:
    FUN_100229b18(param_1);
    return;
  case 4:
    FUN_100229d24(param_1);
    return;
  case 5:
    FUN_100229e0c(param_1);
    return;
  case 6:
    FUN_100229f70(param_1);
    return;
  case 7:
    FUN_10022a07c(param_1);
    return;
  case 8:
    FUN_10022a27c(param_1);
    return;
  default:
    return;
  }
}




long * thunk_FUN_1002268e4(long *param_1)

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
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  long *plVar18;
  undefined **ppuVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  int iVar22;
  int iVar23;
  undefined8 *puVar24;
  undefined8 uVar25;
  uint uVar26;
  float fVar27;
  float fVar28;
  code *pcStack_b8;
  long *plStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  
  puVar24 = (undefined8 *)FUN_1006421a8();
  *puVar24 = &PTR_thunk_FUN_10064221c_10144b7e8;
  FUN_1004f0a20(puVar24 + 0x11);
  FUN_10014f4a0(param_1 + 0x14);
  *param_1 = (long)&PTR_thunk_FUN_10022ae54_101476ba8;
  param_1[0x11] = (long)&PTR_FUN_101476ca8;
  param_1[0x14] = (long)&PTR_FUN_101476cd8;
  plVar1 = param_1 + 0x17;
  thunk_FUN_100181304(plVar1,0);
  plVar2 = param_1 + 0x2ce;
  FUN_1006421a8(plVar2);
  param_1[0x2ce] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar3 = param_1 + 0x2df;
  thunk_FUN_100652c08();
  plVar4 = param_1 + 0x2fd;
  thunk_FUN_100652c08();
  plVar5 = param_1 + 0x31b;
  thunk_FUN_100652c08();
  plVar6 = param_1 + 0x339;
  thunk_FUN_100650e64(plVar6);
  plVar7 = param_1 + 0x35f;
  thunk_FUN_100183990(plVar7,0);
  plVar8 = param_1 + 0x41d;
  FUN_1006421a8(plVar8);
  param_1[0x41d] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar9 = param_1 + 0x42e;
  thunk_FUN_100650e64();
  plVar10 = param_1 + 0x454;
  thunk_FUN_100650e64();
  plVar11 = param_1 + 0x47a;
  thunk_FUN_100184f78(plVar11);
  plVar12 = param_1 + 0x818;
  thunk_FUN_100184f78();
  plVar13 = param_1 + 0xbb6;
  thunk_FUN_100181304(plVar13,0);
  plVar14 = param_1 + 0xe6d;
  FUN_10064e264(plVar14);
  plVar15 = param_1 + 0xe84;
  thunk_FUN_100650e64();
  plVar16 = param_1 + 0xeaa;
  thunk_FUN_100652c08();
  plVar17 = param_1 + 0xec8;
  FUN_10064e264(plVar17);
  thunk_FUN_100652c08();
  thunk_FUN_100650e64();
  plVar18 = param_1 + 0xf23;
  FUN_10064e264(plVar18);
  thunk_FUN_100652c08();
  thunk_FUN_100650e64();
  thunk_FUN_1004e439c(param_1 + 0xf7e,&DAT_101d91650);
  thunk_FUN_1004e439c(param_1 + 0xf80,&DAT_101d91650);
  FUN_10003330c(param_1 + 0xf82,&DAT_101d91198);
  param_1[0xf85] = 0;
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  FUN_100642bd8(plVar2,plVar3,1);
  FUN_100642bd8(plVar2,plVar4,1);
  FUN_100642bd8(plVar2,plVar5,1);
  FUN_100642bd8(plVar2,plVar6,1);
  FUN_100642bd8(plVar2,plVar8,1);
  FUN_100642bd8(plVar8,plVar9,1);
  FUN_100642bd8(plVar8,plVar10,1);
  FUN_100642bd8(plVar8,plVar11,1);
  FUN_100642bd8(plVar8,plVar7,1);
  FUN_100642bd8(plVar8,plVar12,1);
  FUN_100642bd8(plVar8,plVar1,1);
  FUN_100642bd8(plVar8,plVar13,1);
  FUN_100642bd8(plVar13,plVar14,1);
  FUN_100642bd8(plVar14,plVar15,1);
  FUN_100642bd8(plVar14,plVar16,1);
  FUN_100642bd8(plVar8,plVar17,1);
  FUN_100642bd8(plVar17,param_1 + 0xedf,1);
  FUN_100642bd8(plVar17,param_1 + 0xefd,1);
  FUN_100642bd8(plVar8,plVar18,1);
  FUN_100642bd8(plVar18,param_1 + 0xf3a,1);
  FUN_100642bd8(plVar18,param_1 + 0xf58,1);
  iVar22 = FUN_100126c88();
  FUN_100652cac(plVar3,PTR_s_build___MenuPartsCommon_tga_101854970,"black_background");
  uVar26 = *(uint *)((long)param_1 + 0x177c);
  if ((uVar26 & 0x7f80) != 0x3f80) {
    *(uint *)((long)param_1 + 0x177c) = uVar26 & 0xffff807f | 0x3f80;
    FUN_1000200a0(plVar3);
    uVar26 = *(uint *)((long)param_1 + 0x177c);
  }
  *(uint *)((long)param_1 + 0x177c) = uVar26 | 0x10;
  FUN_100652cac(plVar4,PTR_s_build___MenuPartsCommon_tga_101854970,"black_background");
  uVar26 = *(uint *)((long)param_1 + 0x186c);
  if ((uVar26 & 0x7f80) != 0x2600) {
    *(uint *)((long)param_1 + 0x186c) = uVar26 & 0xffff8000 | uVar26 & 0x7f | 0x2600;
    FUN_1000200a0(plVar4);
    uVar26 = *(uint *)((long)param_1 + 0x186c);
  }
  *(uint *)((long)param_1 + 0x186c) = uVar26 | 0x10;
  FUN_100652cac(plVar5,PTR_s_build___MenuPartsCommon_tga_101854970,"vert_glass_shadow");
  FUN_100652dd4(plVar5,&DAT_10115a164,2);
  uVar26 = *(uint *)((long)param_1 + 0x195c);
  if ((uVar26 & 0x7f80) != 0x2600) {
    *(uint *)((long)param_1 + 0x195c) = uVar26 & 0xffff8000 | uVar26 & 0x7f | 0x2600;
    FUN_1000200a0(plVar5);
    uVar26 = *(uint *)((long)param_1 + 0x195c);
  }
  *(uint *)((long)param_1 + 0x195c) = uVar26 | 0x10;
  FUN_100651038(plVar6,PTR_s_build___Fonts_Brandon_Bold_60_fo_10184e240);
  uVar26 = *(uint *)((long)param_1 + 0x1a4c);
  if ((uVar26 & 0x7f80) != 0x5900) {
    *(uint *)((long)param_1 + 0x1a4c) = uVar26 & 0xffff8000 | uVar26 & 0x7f | 0x5900;
    FUN_1000200a0(plVar6);
  }
  ppuVar19 = &PTR_s_build___Fonts_Brandon_Bold_60_fo_10184e240;
  if (iVar22 == 0) {
    ppuVar19 = &PTR_s_build___Fonts_Brandon_Bold_36_fo_10184e228;
  }
  FUN_100651038(plVar9,*ppuVar19);
  if ((*(uint *)((long)param_1 + 0x21f4) & 0x7f80) != 0x3f80) {
    *(uint *)((long)param_1 + 0x21f4) = *(uint *)((long)param_1 + 0x21f4) & 0xffff807f | 0x3f80;
    FUN_1000200a0(plVar9);
  }
  ppuVar19 = &PTR_s_build___Fonts_Brandon_Bold_60_fo_10184e240;
  if (iVar22 == 0) {
    ppuVar19 = &PTR_s_build___Fonts_Brandon_Bold_36_fo_10184e228;
  }
  FUN_100651038(plVar10,*ppuVar19);
  if ((*(uint *)((long)param_1 + 0x2324) & 0x7f80) != 0x3f80) {
    *(uint *)((long)param_1 + 0x2324) = *(uint *)((long)param_1 + 0x2324) & 0xffff807f | 0x3f80;
    FUN_1000200a0(plVar10);
  }
  FUN_100652cdc(param_1 + 0x3f9,"circle_button_question");
  FUN_1001b495c(0xbf800000,plVar7);
  fVar28 = *(float *)(param_1 + 0x368);
  if ((fVar28 != 0.6) || (fVar28 = *(float *)((long)param_1 + 0x1b44), fVar28 != 0.6)) {
    param_1[0x368] = 0x3f19999a3f19999a;
    FUN_1000200a0(plVar7);
  }
  fVar27 = (float)FUN_1006531b0(param_1 + 0x3bd);
  param_1[0x36a] =
       CONCAT44((float)((ulong)param_1[0x368] >> 0x20) * fVar28,(float)param_1[0x368] * fVar27);
  uVar20 = DAT_101d91884;
  uStack_90 = DAT_101d91884;
  pcStack_b8 = thunk_FUN_10022a690;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_a8 = 0;
  plStack_b0 = param_1;
  FUN_10001554c(param_1 + 0x360,&pcStack_b8);
  uVar21 = DAT_101dbd4ac;
  uStack_90 = DAT_101dbd4ac;
  pcStack_b8 = thunk_FUN_10022a54c;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_a8 = 0;
  plStack_b0 = param_1;
  FUN_10001554c(param_1 + 0x47b,&pcStack_b8);
  uStack_90 = uVar21;
  pcStack_b8 = thunk_FUN_10022a54c;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_a8 = 0;
  plStack_b0 = param_1;
  FUN_10001554c(param_1 + 0x819,&pcStack_b8);
  iVar23 = FUN_100131560();
  if (iVar23 == 0) {
    uVar25 = FUN_1004e0150("GENERIC_DIALOG_CANCEL",0);
    ppuVar19 = &PTR_s_build___Fonts_Brandon_Bold_60_fo_10184e240;
    if (iVar22 == 0) {
      ppuVar19 = &PTR_s_build___Fonts_Brandon_Bold_48_fo_10184e238;
    }
    FUN_1001816d4(0x42000000,0x42c80000,0x446b0000,plVar1,0,uVar25,&DAT_10115a168,&DAT_101dc1cb8,
                  *ppuVar19);
    uVar25 = FUN_1004e0150("MENU_PROFILE_EDIT_SUBMIT_NAME",0);
    pcStack_b8 = (code *)0x41f0000000000000;
    FUN_1001816d4(0x41a00000,0x43480000,0x449c4000,plVar13,0,uVar25,&DAT_10115a168,&pcStack_b8,
                  *ppuVar19);
    uStack_90 = uVar20;
    pcStack_b8 = thunk_FUN_10022a47c;
    uStack_a0 = 0;
    uStack_98 = 0;
    uStack_a8 = 0;
    plStack_b0 = param_1;
    FUN_10001554c(param_1 + 2999,&pcStack_b8);
    FUN_1001b495c(0x3f000000,plVar13);
    if ((*(float *)(param_1 + 0xbc0) != 0.5) || (*(float *)((long)param_1 + 0x5e04) != 0.5)) {
      param_1[0xbc0] = (long)&DAT_3f0000003f000000;
      FUN_1000200a0(plVar13);
    }
    FUN_100181c68(0x43133333,plVar13);
    FUN_1001b4964(plVar13,1);
    FUN_1001b4c0c(plVar13,0);
    FUN_100652cac(plVar16,PTR_s_build___MenuPartsCommon_tga_101854970,"ice_icon_small");
    if ((*(float *)(param_1 + 0xeb2) != 0.0) || (*(float *)((long)param_1 + 0x7594) != 3.0)) {
      param_1[0xeb2] = 0x4040000000000000;
      FUN_1000200a0(plVar16);
    }
    pcStack_b8 = (code *)0x3f00000000000000;
    (**(code **)(param_1[0xeaa] + 0x28))(plVar16,&pcStack_b8);
    if ((*(float *)(param_1 + 0xeb3) != 0.9) || (*(float *)((long)param_1 + 0x759c) != 0.9)) {
      param_1[0xeb3] = 0x3f6666663f666666;
      FUN_1000200a0(plVar16);
    }
    ppuVar19 = &PTR_s_build___Fonts_Brandon_Light_60_f_10184e1c8;
    if (iVar22 == 0) {
      ppuVar19 = &PTR_s_build___Fonts_Brandon_Light_48_f_10184e1c0;
    }
    FUN_100651038(plVar15,*ppuVar19);
    fVar28 = (float)FUN_100652e60(plVar16);
    fVar27 = *(float *)((long)param_1 + 0x7594) + -3.0;
    if ((*(float *)(param_1 + 0xe8c) != fVar28) || (*(float *)((long)param_1 + 0x7464) != fVar27)) {
      *(float *)(param_1 + 0xe8c) = fVar28;
      *(float *)((long)param_1 + 0x7464) = fVar27;
      FUN_1000200a0(plVar15);
    }
    pcStack_b8 = (code *)0x3f00000000000000;
    (**(code **)(param_1[0xe84] + 0x28))(plVar15,&pcStack_b8);
    fVar28 = (float)FUN_1006425d0(plVar14,0,0,1,1);
    FUN_1006425d0(plVar14,0,0,1,1);
    fVar27 = fVar27 * -0.5 + 10.0;
    if ((*(float *)(param_1 + 0xe75) != fVar28 * -0.5) ||
       (*(float *)((long)param_1 + 0x73ac) != fVar27)) {
      *(float *)(param_1 + 0xe75) = fVar28 * -0.5;
      *(float *)((long)param_1 + 0x73ac) = fVar27;
      FUN_1000200a0(plVar14);
    }
    pcStack_b8 = (code *)0x0;
    (**(code **)(*plVar14 + 0x28))(plVar14,&pcStack_b8);
    FUN_100652cac(param_1 + 0xedf,PTR_s_build___MenuPartsCommon_tga_101854970,"checkbox_filled");
    ppuVar19 = &PTR_s_build___Fonts_Brandon_Regular_60_10184e208;
    if (iVar22 == 0) {
      ppuVar19 = &PTR_s_build___Fonts_Brandon_Regular_36_10184e1f0;
    }
    FUN_100651594(param_1 + 0xefd,*ppuVar19,&DAT_10115a168);
    FUN_100652cac(param_1 + 0xf3a,PTR_s_build___MenuPartsCommon_tga_101854970,"checkbox_filled");
    FUN_100651594(param_1 + 0xf58,*ppuVar19,&DAT_10115a168);
  }
  else {
    uVar25 = FUN_1004e0150("MENU_PROFILE_EDIT_HEADER",0);
    FUN_1006513c0(plVar6,uVar25);
    uVar25 = FUN_1004e0150("MENU_PROFILE_EDIT_DESC",0);
    FUN_1006513c0(plVar10,uVar25);
    uVar25 = FUN_1004e0150("MENU_PROFILE_EDIT_NAME_FIELD",0);
    FUN_100185730(plVar11,uVar25);
    uVar25 = FUN_1004e0150("MENU_PROFILE_EDIT_NAME_CAPTION",0);
    FUN_1001afd98(plVar11,uVar25,&DAT_101d91650,&DAT_101d91650,0,0,0,0,0,0);
    FUN_100185e2c(plVar11,1);
    FUN_100185e38(plVar11,1,3);
    FUN_100185e48(plVar11,1,0x10);
    FUN_100185e70(plVar11,0);
    *(uint *)((long)param_1 + 0x2454) = *(uint *)((long)param_1 + 0x2454) | 4;
    uVar25 = FUN_1004e0150("MENU_PROFILE_EDIT_NAME_CONFIRM_FIELD",0);
    FUN_100185730(plVar12,uVar25);
    uVar25 = FUN_1004e0150("MENU_PROFILE_EDIT_NAME_CAPTION",0);
    FUN_1001afd98(plVar12,uVar25,&DAT_101d91650,&DAT_101d91650,0,0,0,0,0,0);
    FUN_100185e2c(plVar12,0);
    FUN_100185e38(plVar12,0,3);
    FUN_100185e48(plVar12,0,0x10);
    FUN_100185e70(plVar12,0);
    *(uint *)((long)param_1 + 0x4144) = *(uint *)((long)param_1 + 0x4144) & 0xfffffffb;
    uVar25 = FUN_1004e0150("GENERIC_DIALOG_CANCEL",0);
    ppuVar19 = &PTR_s_build___Fonts_Brandon_Bold_60_fo_10184e240;
    if (iVar22 == 0) {
      ppuVar19 = &PTR_s_build___Fonts_Brandon_Bold_48_fo_10184e238;
    }
    fVar28 = 100.0;
    FUN_1001816d4(0x42000000,0x42c80000,0x446b0000,plVar1,0,uVar25,&DAT_10115a168,&DAT_101dc1cb8,
                  *ppuVar19);
    uVar25 = FUN_1004e0150("MENU_PROFILE_EDIT_SUBMIT_NAME",0);
    FUN_1001816d4(0x42000000,0x42c80000,0x446b0000,plVar13,0,uVar25,&DAT_10115a168,&DAT_101dc1cb8,
                  *ppuVar19);
    uStack_90 = uVar20;
    pcStack_b8 = thunk_FUN_10022a47c;
    uStack_a0 = 0;
    uStack_98 = 0;
    uStack_a8 = 0;
    plStack_b0 = param_1;
    FUN_10001554c(param_1 + 2999,&pcStack_b8);
    FUN_1001b495c(0x3f000000,plVar13);
    if ((*(float *)(param_1 + 0xbc0) != 0.5) || (*(float *)((long)param_1 + 0x5e04) != 0.5)) {
      param_1[0xbc0] = (long)&DAT_3f0000003f000000;
      FUN_1000200a0(plVar13);
    }
    FUN_1001b4964(plVar13,1);
    FUN_1001b4c0c(plVar13,0);
    fVar27 = (float)FUN_1006425d0(plVar14,0,0,1,1);
    FUN_1006425d0(plVar14,0,0,1,1);
    fVar28 = fVar28 * -0.5 + 10.0;
    if ((*(float *)(param_1 + 0xe75) != fVar27 * -0.5) ||
       (*(float *)((long)param_1 + 0x73ac) != fVar28)) {
      *(float *)(param_1 + 0xe75) = fVar27 * -0.5;
      *(float *)((long)param_1 + 0x73ac) = fVar28;
      FUN_1000200a0(plVar14);
    }
    pcStack_b8 = (code *)0x0;
    (**(code **)(*plVar14 + 0x28))(plVar14,&pcStack_b8);
  }
  return param_1;
}




void FUN_100227610(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  bool bVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float local_98;
  float fStack_94;
  float local_90;
  float fStack_8c;
  undefined1 *local_88;
  
  FUN_100641464(&fStack_8c,&local_90);
  FUN_10064e47c(0x4491a000,0x42f00000,param_1 + 0x16f8);
  bVar5 = false;
  if ((*(float *)(param_1 + 0x1a08) == 100.0) && (bVar5 = false, !NAN(*(float *)(param_1 + 0x1a0c)))
     ) {
    bVar5 = *(float *)(param_1 + 0x1a0c) == 60.0;
  }
  if (!bVar5) {
    *(undefined8 *)(param_1 + 0x1a08) = 0x4270000042c80000;
    FUN_1000200a0(param_1 + 0x19c8);
  }
  local_88 = (undefined1 *)0x3f00000000000000;
  (**(code **)(*(long *)(param_1 + 0x19c8) + 0x28))(param_1 + 0x19c8,&local_88);
  lVar1 = param_1 + 0x20e8;
  if (*(float *)(param_1 + 0x212c) != 120.0) {
    *(undefined4 *)(param_1 + 0x212c) = 0x42f00000;
    FUN_1000200a0(lVar1);
  }
  fVar9 = 30.0;
  if ((*(byte *)(param_1 + 0x21f4) >> 2 & 1) != 0) {
    lVar2 = param_1 + 0x2170;
    fVar7 = 100.0;
    if (*(float *)(param_1 + 0x21b0) == 100.0) {
      fVar9 = 30.0;
      fVar7 = 30.0;
      if (*(float *)(param_1 + 0x21b4) != 30.0) goto LAB_100227738;
    }
    else {
LAB_100227738:
      fVar9 = fVar7;
      *(undefined8 *)(param_1 + 0x21b0) = 0x41f0000042c80000;
      FUN_1000200a0(lVar2);
    }
    FUN_100651708(0x44714000,lVar2,1);
    FUN_100651184(lVar2);
    fVar9 = fVar9 + 40.0;
  }
  lVar2 = param_1 + 0x22a0;
  fVar7 = 100.0;
  if ((*(float *)(param_1 + 0x22e0) != 100.0) || (*(float *)(param_1 + 0x22e4) != fVar9)) {
    *(undefined4 *)(param_1 + 0x22e0) = 0x42c80000;
    *(float *)(param_1 + 0x22e4) = fVar9;
    fVar7 = 100.0;
    FUN_1000200a0(lVar2);
  }
  FUN_100651708(0x44714000,lVar2,1);
  FUN_100651184(lVar2);
  fVar9 = fVar9 + 64.0 + fVar7;
  lVar2 = param_1 + 0x23d0;
  if ((*(byte *)(param_1 + 0x2454) >> 2 & 1) != 0) {
    if ((*(float *)(param_1 + 0x2410) != 100.0) || (*(float *)(param_1 + 0x2414) != fVar9)) {
      *(undefined4 *)(param_1 + 0x2410) = 0x42c80000;
      *(float *)(param_1 + 0x2414) = fVar9;
      FUN_1000200a0(lVar2);
    }
    fVar7 = -1.0;
    FUN_1001853c0(0x44714000,lVar2);
    fVar9 = fVar9 + 180.0;
  }
  if ((*(byte *)(param_1 + 0x4144) >> 2 & 1) != 0) {
    if ((*(float *)(param_1 + 0x4100) != 100.0) || (*(float *)(param_1 + 0x4104) != fVar9)) {
      *(float *)(param_1 + 0x4100) = 100.0;
      *(float *)(param_1 + 0x4104) = fVar9;
      FUN_1000200a0(param_1 + 0x40c0);
    }
    fVar7 = -1.0;
    FUN_1001853c0(0x44714000,param_1 + 0x40c0);
    fVar9 = fVar9 + 220.0;
  }
  if ((*(byte *)(param_1 + 0x76c4) >> 2 & 1) != 0) {
    lVar3 = param_1 + 0x7640;
    local_98 = (float)FUN_100642888(lVar3,0,0,1,1);
    if (local_98 <= 291.25) {
      local_98 = 291.25;
    }
    fStack_94 = fVar7 + 20.0;
    FUN_10064e48c(lVar3,&local_98);
    fVar9 = fVar9 + -10.0;
    if ((*(float *)(param_1 + 0x7680) != 100.0) || (*(float *)(param_1 + 0x7684) != fVar9)) {
      *(undefined4 *)(param_1 + 0x7680) = 0x42c80000;
      *(float *)(param_1 + 0x7684) = fVar9;
      FUN_1000200a0(lVar3);
    }
    if ((*(float *)(param_1 + 0x7738) != 0.0) || (*(float *)(param_1 + 0x773c) != 54.0)) {
      *(undefined8 *)(param_1 + 0x7738) = 0x4258000000000000;
      FUN_1000200a0(param_1 + 0x76f8);
    }
    local_88 = (undefined1 *)0x3f80000000000000;
    (**(code **)(*(long *)(param_1 + 0x76f8) + 0x28))(param_1 + 0x76f8,&local_88);
    lVar3 = param_1 + 0x77e8;
    fVar7 = *(float *)(param_1 + 0x7738) + 54.0;
    if ((*(float *)(param_1 + 0x7828) != fVar7) || (*(float *)(param_1 + 0x782c) != 62.0)) {
      *(float *)(param_1 + 0x7828) = fVar7;
      *(undefined4 *)(param_1 + 0x782c) = 0x42780000;
      FUN_1000200a0(lVar3);
    }
    local_88 = (undefined1 *)0x3f80000000000000;
    (**(code **)(*(long *)(param_1 + 0x77e8) + 0x28))(lVar3,&local_88);
    fVar7 = *(float *)(param_1 + 0x7828);
    fVar8 = (float)FUN_10064259c(lVar3);
    fVar7 = fVar7 + fVar8 + 20.0;
    fVar8 = 588.5;
    if (fVar7 <= 588.5) {
      fVar7 = 588.5;
    }
    lVar3 = param_1 + 31000;
    local_98 = (float)FUN_100642888(lVar3,0,0,1,1);
    if (local_98 <= 291.25) {
      local_98 = 291.25;
    }
    fStack_94 = fVar8 + 20.0;
    FUN_10064e48c(lVar3,&local_98);
    if ((*(float *)(param_1 + 0x7958) != fVar7) || (*(float *)(param_1 + 0x795c) != fVar9)) {
      *(float *)(param_1 + 0x7958) = fVar7;
      *(float *)(param_1 + 0x795c) = fVar9;
      FUN_1000200a0(lVar3);
    }
    if ((*(float *)(param_1 + 0x7a10) != 0.0) || (*(float *)(param_1 + 0x7a14) != 54.0)) {
      *(undefined8 *)(param_1 + 0x7a10) = 0x4258000000000000;
      FUN_1000200a0(param_1 + 0x79d0);
    }
    local_88 = (undefined1 *)0x3f80000000000000;
    (**(code **)(*(long *)(param_1 + 0x79d0) + 0x28))(param_1 + 0x79d0,&local_88);
    plVar4 = (long *)(param_1 + 0x7ac0);
    fVar9 = *(float *)(param_1 + 0x7a10) + 54.0;
    if ((*(float *)(param_1 + 0x7b00) != fVar9) || (*(float *)(param_1 + 0x7b04) != 62.0)) {
      *(float *)(param_1 + 0x7b00) = fVar9;
      *(undefined4 *)(param_1 + 0x7b04) = 0x42780000;
      FUN_1000200a0(plVar4);
    }
    local_88 = (undefined1 *)0x3f80000000000000;
    (**(code **)(*plVar4 + 0x28))(plVar4,&local_88);
  }
  iVar6 = *(int *)(param_1 + 0x7c2c);
  plVar4 = (long *)(param_1 + 0xb8);
  fVar9 = (float)FUN_10064e3cc(plVar4);
  fVar7 = 100.0;
  if (iVar6 == 0) {
    fVar9 = fVar9 * 0.5 + 100.0;
    fVar7 = *(float *)(param_1 + 0x5df4);
    if ((*(float *)(param_1 + 0xf8) == fVar9) && (*(float *)(param_1 + 0xfc) == fVar7))
    goto LAB_100227bb0;
    *(float *)(param_1 + 0xf8) = fVar9;
    *(float *)(param_1 + 0xfc) = fVar7;
  }
  else {
    fVar10 = fVar9 * 0.5 + 100.0;
    fVar8 = *(float *)(param_1 + 0x5df4);
    FUN_10064e3cc(param_1 + 0x5db0);
    fVar9 = fVar7;
    FUN_10064e3cc(plVar4);
    fVar8 = fVar8 + (fVar7 - fVar9) * 0.5;
    fVar7 = *(float *)(param_1 + 0xf8);
    if ((fVar7 == fVar10) && (fVar7 = *(float *)(param_1 + 0xfc), fVar7 == fVar8))
    goto LAB_100227bb0;
    *(float *)(param_1 + 0xf8) = fVar10;
    *(float *)(param_1 + 0xfc) = fVar8;
  }
  FUN_1000200a0(plVar4);
LAB_100227bb0:
  local_88 = &DAT_3f0000003f000000;
  (**(code **)(*plVar4 + 0x28))(plVar4,&local_88);
  FUN_1006425d0(lVar1,0,0,1,1);
  lVar3 = param_1 + 0x17e8;
  FUN_10064e47c(0x4491a000,fVar7 + 100.0,lVar3);
  fVar9 = 120.0;
  if (*(float *)(param_1 + 0x182c) != 120.0) {
    *(undefined4 *)(param_1 + 0x182c) = 0x42f00000;
    fVar9 = 120.0;
    FUN_1000200a0(lVar3);
  }
  FUN_100652e60(lVar3);
  if (*(float *)(param_1 + 0x191c) != fVar9 + 120.0) {
    *(float *)(param_1 + 0x191c) = fVar9 + 120.0;
    FUN_1000200a0(param_1 + 0x18d8);
  }
  fVar9 = 60.0;
  FUN_10064e47c(0x4491a000,param_1 + 0x18d8);
  fVar7 = fStack_8c * 0.5 + -582.5;
  FUN_1006425d0(lVar1,0,0,1,1);
  fVar9 = local_90 * 0.5 + fVar9 * -0.75;
  if ((*(float *)(param_1 + 0x16b0) != fVar7) || (*(float *)(param_1 + 0x16b4) != fVar9)) {
    *(float *)(param_1 + 0x16b0) = fVar7;
    *(float *)(param_1 + 0x16b4) = fVar9;
    FUN_1000200a0(param_1 + 0x1670);
  }
  local_88 = &DAT_3f0000003f000000;
  (**(code **)(*(long *)(param_1 + 0x1670) + 0x28))(param_1 + 0x1670,&local_88);
  FUN_10064e5ec(0,0xc2200000,param_1 + 0x1af8,2,lVar2,1);
  iVar6 = FUN_100131560();
  if (iVar6 != 0) {
    FUN_10064e5ec(0xc3480000,0x43dc0000,param_1 + 0xb8,6,lVar2,6);
    FUN_10064e5ec(0x43480000,0x43dc0000,param_1 + 0x5db0,6,lVar2,6);
  }
  return;
}




void FUN_100227d90(long param_1,string *param_2,int *param_3)

{
  long lVar1;
  bool bVar2;
  ulong uVar3;
  float fVar4;
  float fVar5;
  undefined1 auStack_58 [8];
  void *local_50;
  undefined8 local_48;
  
  uVar3 = FUN_100131560();
  if ((uVar3 & 1) == 0) {
    std::string::operator=((string *)(param_1 + 0x7c10),param_2);
    *(int *)(param_1 + 0x7c2c) = *param_3;
    lVar1 = param_1 + 0x5db0;
    if (*param_3 == 0) {
      FUN_100181b5c(0,0,lVar1);
      *(uint *)(param_1 + 0x73ec) = *(uint *)(param_1 + 0x73ec) & 0xfffffffb;
    }
    else {
      FUN_100181b5c(0,0x41f00000,lVar1);
      FUN_100181c68(0x43133333,lVar1);
      FUN_1004e313c(auStack_58);
      FUN_1004e38ac(auStack_58,"%d");
      lVar1 = param_1 + 0x7420;
      FUN_1006513c0(lVar1,auStack_58);
      fVar4 = (float)FUN_100652e60(param_1 + 0x7550);
      fVar5 = *(float *)(param_1 + 0x7594) + -3.0;
      bVar2 = false;
      if ((*(float *)(param_1 + 0x7460) == fVar4) &&
         (bVar2 = false, !NAN(*(float *)(param_1 + 0x7464)) && !NAN(fVar5))) {
        bVar2 = *(float *)(param_1 + 0x7464) == fVar5;
      }
      if (!bVar2) {
        *(float *)(param_1 + 0x7460) = fVar4;
        *(float *)(param_1 + 0x7464) = fVar5;
        FUN_1000200a0(lVar1);
      }
      local_48 = 0x3f00000000000000;
      (**(code **)(*(long *)(param_1 + 0x7420) + 0x28))(lVar1,&local_48);
      lVar1 = param_1 + 0x7368;
      fVar4 = (float)FUN_1006425d0(lVar1,0,0,1,1);
      FUN_1006425d0(lVar1,0,0,1,1);
      fVar5 = fVar5 * -0.5 + 10.0;
      if ((*(float *)(param_1 + 0x73a8) != fVar4 * -0.5) || (*(float *)(param_1 + 0x73ac) != fVar5))
      {
        *(float *)(param_1 + 0x73a8) = fVar4 * -0.5;
        *(float *)(param_1 + 0x73ac) = fVar5;
        FUN_1000200a0(lVar1);
      }
      local_48 = 0;
      (**(code **)(*(long *)(param_1 + 0x7368) + 0x28))(lVar1,&local_48);
      *(uint *)(param_1 + 0x73ec) = *(uint *)(param_1 + 0x73ec) | 4;
      if (local_50 != (void *)0x0) {
        operator_delete__(local_50);
      }
    }
  }
  return;
}




void FUN_100227f64(long param_1)

{
  FUN_1000153b4(param_1 + 0x7bf0,&DAT_101d91650);
  FUN_1001855dc(param_1 + 0x23d0);
  FUN_1001855dc(param_1 + 0x40c0);
  FUN_1001b4c0c(param_1 + 0x5db0,0);
  return;
}




void FUN_100227fb8(long param_1,undefined4 param_2)

{
  FUN_100227f64();
  *(undefined4 *)(param_1 + 0x7c30) = param_2;
  switch(param_2) {
  case 1:
    FUN_100228088(param_1);
    return;
  case 2:
    FUN_100228358(param_1);
    return;
  case 3:
    FUN_100228648(param_1);
    return;
  case 4:
    FUN_100228938(param_1);
    return;
  case 5:
    FUN_100228ad8(param_1);
    return;
  case 6:
    FUN_100228c78(param_1);
    return;
  case 7:
    FUN_100228f50(param_1);
    return;
  case 8:
    FUN_100229240(param_1);
    return;
  default:
    return;
  }
}




void FUN_100228088(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_70 [8];
  void *local_68;
  undefined1 auStack_60 [8];
  void *local_58;
  undefined1 auStack_50 [8];
  void *local_48;
  
  *(uint *)(param_1 + 0x1b7c) = *(uint *)(param_1 + 0x1b7c) | 4;
  uVar2 = FUN_1004e0150("MENU_PROFILE_EDIT_HEADER",0);
  FUN_1006513c0(param_1 + 0x19c8,uVar2);
  uVar2 = FUN_1004e0150("MENU_PROFILE_EDIT_PREVIOUS_NAME",0);
  thunk_FUN_1004e439c(auStack_50,uVar2);
  FUN_10015d3ec();
  uVar2 = FUN_100164f34();
  thunk_FUN_1004e439c(auStack_60,uVar2);
  FUN_1004e3120(auStack_70,"[PREVIOUS_NAME]");
  FUN_1004e3bc4(auStack_50,0,auStack_70,auStack_60);
  if (local_68 != (void *)0x0) {
    operator_delete__(local_68);
  }
  FUN_1006513c0(param_1 + 0x2170,auStack_50);
  *(uint *)(param_1 + 0x21f4) = *(uint *)(param_1 + 0x21f4) | 4;
  FUN_1000153b4(param_1 + 0x7c00,auStack_60);
  uVar2 = FUN_1004e0150("MENU_PROFILE_EDIT_DESC",0);
  FUN_1006513c0(param_1 + 0x22a0,uVar2);
  lVar1 = param_1 + 0x23d0;
  uVar2 = FUN_1004e0150("MENU_PROFILE_EDIT_NAME_FIELD",0);
  FUN_100185730(lVar1,uVar2);
  uVar2 = FUN_1004e0150("MENU_PROFILE_EDIT_NAME_CAPTION",0);
  FUN_1001afd98(lVar1,uVar2,&DAT_101d91650,&DAT_101d91650,0,0,0,0,0,0);
  FUN_100185e2c(lVar1,1);
  FUN_100185e38(lVar1,1,3);
  FUN_100185e48(lVar1,1,0x10);
  FUN_100185e70(lVar1,0);
  *(uint *)(param_1 + 0x2454) = *(uint *)(param_1 + 0x2454) | 4;
  lVar1 = param_1 + 0x40c0;
  uVar2 = FUN_1004e0150("MENU_PROFILE_EDIT_NAME_CONFIRM_FIELD",0);
  FUN_100185730(lVar1,uVar2);
  uVar2 = FUN_1004e0150("MENU_PROFILE_EDIT_NAME_CAPTION",0);
  FUN_1001afd98(lVar1,uVar2,&DAT_101d91650,&DAT_101d91650,0,0,0,0,0,0);
  FUN_100185e2c(lVar1,1);
  FUN_100185e38(lVar1,1,3);
  FUN_100185e48(lVar1,1,0x10);
  FUN_100185e70(lVar1,0);
  *(uint *)(param_1 + 0x4144) = *(uint *)(param_1 + 0x4144) | 4;
  uVar2 = FUN_1004e0150("MENU_PROFILE_EDIT_SUBMIT_NAME",0);
  FUN_100181af8(param_1 + 0x5db0,uVar2);
  *(uint *)(param_1 + 0x76c4) = *(uint *)(param_1 + 0x76c4) & 0xfffffffb;
  *(uint *)(param_1 + 0x799c) = *(uint *)(param_1 + 0x799c) & 0xfffffffb;
  FUN_100227610(param_1);
  if (local_58 != (void *)0x0) {
    operator_delete__(local_58);
  }
  if (local_48 != (void *)0x0) {
    operator_delete__(local_48);
  }
  return;
}




void FUN_100228358(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auStack_70 [8];
  void *local_68;
  undefined1 auStack_60 [8];
  void *local_58;
  undefined1 auStack_50 [8];
  void *local_48;
  
  *(uint *)(param_1 + 0x1b7c) = *(uint *)(param_1 + 0x1b7c) & 0xfffffffb;
  uVar1 = FUN_1004e0150("MENU_EDIT_GUILDNAME_HEADER",0);
  FUN_1006513c0(param_1 + 0x19c8,uVar1);
  uVar1 = FUN_1004e0150("MENU_PROFILE_EDIT_PREVIOUS_NAME",0);
  thunk_FUN_1004e439c(auStack_50,uVar1);
  FUN_1004e3120(auStack_60,"[PREVIOUS_NAME]");
  lVar2 = FUN_10015d3ec();
  FUN_1004e3170(auStack_70,lVar2 + 0x50c8);
  FUN_1004e3bc4(auStack_50,0,auStack_60,auStack_70);
  if (local_68 != (void *)0x0) {
    operator_delete__(local_68);
  }
  if (local_58 != (void *)0x0) {
    operator_delete__(local_58);
  }
  FUN_1006513c0(param_1 + 0x2170,auStack_50);
  *(uint *)(param_1 + 0x21f4) = *(uint *)(param_1 + 0x21f4) | 4;
  lVar2 = FUN_10015d3ec();
  FUN_1004e3170(auStack_60,lVar2 + 0x50c8);
  FUN_1000153b4(param_1 + 0x7c00,auStack_60);
  if (local_58 != (void *)0x0) {
    operator_delete__(local_58);
  }
  uVar1 = FUN_1004e0150("MENU_EDIT_GUILDNAME_DESC",0);
  FUN_1006513c0(param_1 + 0x22a0,uVar1);
  lVar2 = param_1 + 0x23d0;
  uVar1 = FUN_1004e0150("MENU_EDIT_GUILDNAME_FIELD",0);
  FUN_100185730(lVar2,uVar1);
  uVar1 = FUN_1004e0150("MENU_EDIT_GUILDNAME_CAPTION",0);
  FUN_1001afd98(lVar2,uVar1,&DAT_101d91650,&DAT_101d91650,0,0,0,0,0,0);
  FUN_100185e2c(lVar2,1);
  FUN_100185e38(lVar2,1,3);
  FUN_100185e48(lVar2,1,0x10);
  FUN_100185e70(lVar2,0);
  *(uint *)(param_1 + 0x2454) = *(uint *)(param_1 + 0x2454) | 4;
  lVar2 = param_1 + 0x40c0;
  uVar1 = FUN_1004e0150("MENU_EDIT_GUILDNAME_CONFIRM_FIELD",0);
  FUN_100185730(lVar2,uVar1);
  uVar1 = FUN_1004e0150("MENU_EDIT_GUILDNAME_CAPTION",0);
  FUN_1001afd98(lVar2,uVar1,&DAT_101d91650,&DAT_101d91650,0,0,0,0,0,0);
  FUN_100185e2c(lVar2,1);
  FUN_100185e38(lVar2,1,3);
  FUN_100185e48(lVar2,1,0x10);
  FUN_100185e70(lVar2,0);
  *(uint *)(param_1 + 0x4144) = *(uint *)(param_1 + 0x4144) | 4;
  uVar1 = FUN_1004e0150("MENU_PROFILE_EDIT_SUBMIT_NAME",0);
  FUN_100181af8(param_1 + 0x5db0,uVar1);
  *(uint *)(param_1 + 0x76c4) = *(uint *)(param_1 + 0x76c4) & 0xfffffffb;
  *(uint *)(param_1 + 0x799c) = *(uint *)(param_1 + 0x799c) & 0xfffffffb;
  FUN_100227610(param_1);
  if (local_48 != (void *)0x0) {
    operator_delete__(local_48);
  }
  return;
}




void FUN_100228648(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auStack_70 [8];
  void *local_68;
  undefined1 auStack_60 [8];
  void *local_58;
  undefined1 auStack_50 [8];
  void *local_48;
  
  *(uint *)(param_1 + 0x1b7c) = *(uint *)(param_1 + 0x1b7c) & 0xfffffffb;
  uVar1 = FUN_1004e0150("MENU_EDIT_GUILDTAG_HEADER",0);
  FUN_1006513c0(param_1 + 0x19c8,uVar1);
  uVar1 = FUN_1004e0150("MENU_PROFILE_EDIT_PREVIOUS_TAG",0);
  thunk_FUN_1004e439c(auStack_50,uVar1);
  FUN_1004e3120(auStack_60,"[PREVIOUS_TAG]");
  lVar2 = FUN_10015d3ec();
  FUN_1004e3170(auStack_70,lVar2 + 0x50e0);
  FUN_1004e3bc4(auStack_50,0,auStack_60,auStack_70);
  if (local_68 != (void *)0x0) {
    operator_delete__(local_68);
  }
  if (local_58 != (void *)0x0) {
    operator_delete__(local_58);
  }
  FUN_1006513c0(param_1 + 0x2170,auStack_50);
  *(uint *)(param_1 + 0x21f4) = *(uint *)(param_1 + 0x21f4) | 4;
  lVar2 = FUN_10015d3ec();
  FUN_1004e3170(auStack_60,lVar2 + 0x50e0);
  FUN_1000153b4(param_1 + 0x7c00,auStack_60);
  if (local_58 != (void *)0x0) {
    operator_delete__(local_58);
  }
  uVar1 = FUN_1004e0150("MENU_EDIT_GUILDTAG_DESC",0);
  FUN_1006513c0(param_1 + 0x22a0,uVar1);
  lVar2 = param_1 + 0x23d0;
  uVar1 = FUN_1004e0150("MENU_EDIT_GUILDTAG_FIELD",0);
  FUN_100185730(lVar2,uVar1);
  uVar1 = FUN_1004e0150("MENU_EDIT_GUILDTAG_CAPTION",0);
  FUN_1001afd98(lVar2,uVar1,&DAT_101d91650,&DAT_101d91650,0,0,0,0,0,0);
  FUN_100185e2c(lVar2,1);
  FUN_100185e38(lVar2,1,2);
  FUN_100185e48(lVar2,1,4);
  FUN_100185e70(lVar2,0);
  *(uint *)(param_1 + 0x2454) = *(uint *)(param_1 + 0x2454) | 4;
  lVar2 = param_1 + 0x40c0;
  uVar1 = FUN_1004e0150("MENU_EDIT_GUILDTAG_CONFIRM_FIELD",0);
  FUN_100185730(lVar2,uVar1);
  uVar1 = FUN_1004e0150("MENU_EDIT_GUILDTAG_CAPTION",0);
  FUN_1001afd98(lVar2,uVar1,&DAT_101d91650,&DAT_101d91650,0,0,0,0,0,0);
  FUN_100185e2c(lVar2,1);
  FUN_100185e38(lVar2,1,2);
  FUN_100185e48(lVar2,1,4);
  FUN_100185e70(lVar2,0);
  *(uint *)(param_1 + 0x4144) = *(uint *)(param_1 + 0x4144) | 4;
  uVar1 = FUN_1004e0150("MENU_PROFILE_EDIT_SUBMIT_NAME",0);
  FUN_100181af8(param_1 + 0x5db0,uVar1);
  *(uint *)(param_1 + 0x76c4) = *(uint *)(param_1 + 0x76c4) & 0xfffffffb;
  *(uint *)(param_1 + 0x799c) = *(uint *)(param_1 + 0x799c) & 0xfffffffb;
  FUN_100227610(param_1);
  if (local_48 != (void *)0x0) {
    operator_delete__(local_48);
  }
  return;
}




void FUN_100228938(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined4 local_34;
  
  *(uint *)(param_1 + 0x1b7c) = *(uint *)(param_1 + 0x1b7c) & 0xfffffffb;
  uVar2 = FUN_1004e0150("MENU_EDIT_GUILDMOTTO_HEADER",0);
  FUN_1006513c0(param_1 + 0x19c8,uVar2);
  *(uint *)(param_1 + 0x21f4) = *(uint *)(param_1 + 0x21f4) & 0xfffffffb;
  uVar2 = FUN_1004e0150("MENU_EDIT_GUILDMOTTO_DESC",0);
  FUN_1006513c0(param_1 + 0x22a0,uVar2);
  lVar1 = param_1 + 0x23d0;
  uVar2 = FUN_1004e0150("MENU_EDIT_GUILDMOTTO_FIELD",0);
  FUN_100185730(lVar1,uVar2);
  uVar2 = FUN_1004e0150("MENU_EDIT_GUILDMOTTO_CAPTION",0);
  FUN_1001afd98(lVar1,uVar2,&DAT_101d91650,&DAT_101d91650,0,0,0,0,0,0);
  FUN_100185e70(lVar1,0);
  FUN_1001b0734(lVar1,0);
  FUN_100185e48(lVar1,1,0x8c);
  FUN_100185e2c(lVar1,0);
  *(uint *)(param_1 + 0x2454) = *(uint *)(param_1 + 0x2454) | 4;
  uVar2 = FUN_1004e0150("MENU_EDIT_GUILD_SUBMIT_BUTTON",0);
  FUN_100181af8(param_1 + 0x5db0,uVar2);
  *(uint *)(param_1 + 0x4144) = *(uint *)(param_1 + 0x4144) & 0xfffffffb;
  *(uint *)(param_1 + 0x76c4) = *(uint *)(param_1 + 0x76c4) & 0xfffffffb;
  *(uint *)(param_1 + 0x799c) = *(uint *)(param_1 + 0x799c) & 0xfffffffb;
  local_34 = 0;
  FUN_100227d90(param_1,&DAT_101d91198,&local_34);
  FUN_100227610(param_1);
  return;
}




void FUN_100228ad8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined4 local_34;
  
  *(uint *)(param_1 + 0x1b7c) = *(uint *)(param_1 + 0x1b7c) & 0xfffffffb;
  uVar2 = FUN_1004e0150("MENU_EDIT_GUILD_MESSAGE_HEADER",0);
  FUN_1006513c0(param_1 + 0x19c8,uVar2);
  *(uint *)(param_1 + 0x21f4) = *(uint *)(param_1 + 0x21f4) & 0xfffffffb;
  uVar2 = FUN_1004e0150("MENU_EDIT_GUILD_MESSAGE_DESC",0);
  FUN_1006513c0(param_1 + 0x22a0,uVar2);
  lVar1 = param_1 + 0x23d0;
  uVar2 = FUN_1004e0150("MENU_EDIT_GUILD_MESSAGE_FIELD",0);
  FUN_100185730(lVar1,uVar2);
  uVar2 = FUN_1004e0150("MENU_EDIT_GUILD_MESSAGE_CAPTION",0);
  FUN_1001afd98(lVar1,uVar2,&DAT_101d91650,&DAT_101d91650,0,0,0,0,0,0);
  FUN_100185e70(lVar1,0);
  FUN_1001b0734(lVar1,0);
  FUN_100185e48(lVar1,1,2000);
  FUN_100185e2c(lVar1,0);
  *(uint *)(param_1 + 0x2454) = *(uint *)(param_1 + 0x2454) | 4;
  uVar2 = FUN_1004e0150("MENU_EDIT_GUILD_SUBMIT_BUTTON",0);
  FUN_100181af8(param_1 + 0x5db0,uVar2);
  *(uint *)(param_1 + 0x4144) = *(uint *)(param_1 + 0x4144) & 0xfffffffb;
  *(uint *)(param_1 + 0x76c4) = *(uint *)(param_1 + 0x76c4) & 0xfffffffb;
  *(uint *)(param_1 + 0x799c) = *(uint *)(param_1 + 0x799c) & 0xfffffffb;
  local_34 = 0;
  FUN_100227d90(param_1,&DAT_101d91198,&local_34);
  FUN_100227610(param_1);
  return;
}




void FUN_100228c78(undefined1 param_1 [16],undefined4 param_2,long param_3)

{
  char *pcVar1;
  char *pcVar2;
  undefined4 uVar3;
  bool bVar4;
  undefined8 uVar5;
  long lVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 local_80;
  long lStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  
  *(uint *)(param_3 + 0x1b7c) = *(uint *)(param_3 + 0x1b7c) & 0xfffffffb;
  uVar5 = FUN_1004e0150("MENU_EDIT_GUILDTYPE_HEADER",0);
  FUN_1006513c0(param_3 + 0x19c8,uVar5);
  *(uint *)(param_3 + 0x21f4) = *(uint *)(param_3 + 0x21f4) & 0xfffffffb;
  uVar5 = FUN_1004e0150("MENU_EDIT_GUILDTYPE_DESC",0);
  FUN_1006513c0(param_3 + 0x22a0,uVar5);
  uVar5 = FUN_1004e0150("MENU_PROFILE_GUILD_CREATE_TYPE_OPEN",0);
  FUN_1006513c0(param_3 + 0x77e8,uVar5);
  uVar7 = FUN_1006425d0(param_3 + 0x7640,0,0,1,1);
  local_80 = (code *)CONCAT44(param_2,uVar7);
  FUN_10064e48c(param_3 + 0x7640,&local_80);
  *(uint *)(param_3 + 0x76c4) = *(uint *)(param_3 + 0x76c4) | 0x10;
  uVar7 = DAT_101dbd458;
  local_58 = DAT_101dbd458;
  local_80 = FUN_1002295cc;
  local_68 = 0;
  local_60 = 0;
  local_70 = 0;
  lStack_78 = param_3;
  FUN_10001554c(param_3 + 0x7648,&local_80);
  uVar3 = DAT_101dbd484;
  local_58 = DAT_101dbd484;
  local_80 = FUN_1002295cc;
  local_68 = 0;
  local_60 = 0;
  local_70 = 0;
  lStack_78 = param_3;
  FUN_10001554c(param_3 + 0x7648,&local_80);
  *(uint *)(param_3 + 0x76c4) = *(uint *)(param_3 + 0x76c4) | 4;
  uVar5 = FUN_1004e0150("MENU_PROFILE_GUILD_CREATE_TYPE_INVITE_ONLY",0);
  FUN_1006513c0(param_3 + 0x7ac0,uVar5);
  uVar8 = FUN_1006425d0(param_3 + 31000,0,0,1,1);
  local_80 = (code *)CONCAT44(param_2,uVar8);
  FUN_10064e48c(param_3 + 31000,&local_80);
  *(uint *)(param_3 + 0x799c) = *(uint *)(param_3 + 0x799c) | 0x10;
  local_58 = uVar7;
  local_80 = FUN_1002295cc;
  local_70 = 0;
  local_68 = 0;
  local_60 = 1;
  lStack_78 = param_3;
  FUN_10001554c(param_3 + 0x7920,&local_80);
  local_58 = uVar3;
  local_80 = FUN_1002295cc;
  local_70 = 0;
  local_68 = 0;
  local_60 = 1;
  lStack_78 = param_3;
  FUN_10001554c(param_3 + 0x7920,&local_80);
  *(uint *)(param_3 + 0x799c) = *(uint *)(param_3 + 0x799c) | 4;
  uVar5 = FUN_1004e0150("MENU_PROFILE_EDIT_SUBMIT_TYPE",0);
  FUN_100181af8(param_3 + 0x5db0,uVar5);
  *(uint *)(param_3 + 0x2454) = *(uint *)(param_3 + 0x2454) & 0xfffffffb;
  *(uint *)(param_3 + 0x4144) = *(uint *)(param_3 + 0x4144) & 0xfffffffb;
  local_80 = (code *)((ulong)local_80 & 0xffffffff00000000);
  FUN_100227d90(param_3,&DAT_101d91198,&local_80);
  lVar6 = FUN_10015d3ec();
  bVar4 = *(int *)(lVar6 + 0x525c) != 0;
  pcVar1 = "checkbox_filled";
  pcVar2 = "checkbox_empty";
  if (!bVar4) {
    pcVar1 = "checkbox_empty";
    pcVar2 = "checkbox_filled";
  }
  FUN_100652cdc(param_3 + 0x76f8,pcVar2);
  FUN_100652cdc(param_3 + 0x79d0,pcVar1);
  *(uint *)(param_3 + 0x7c28) = (uint)bVar4;
  FUN_1001b4c0c(param_3 + 0x5db0,1);
  FUN_100227610(param_3);
  return;
}




void FUN_100228f50(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auStack_70 [8];
  void *local_68;
  undefined1 auStack_60 [8];
  void *local_58;
  undefined1 auStack_50 [8];
  void *local_48;
  
  *(uint *)(param_1 + 0x1b7c) = *(uint *)(param_1 + 0x1b7c) & 0xfffffffb;
  uVar1 = FUN_1004e0150("MENU_EDIT_USERTEAMNAME_HEADER",0);
  FUN_1006513c0(param_1 + 0x19c8,uVar1);
  uVar1 = FUN_1004e0150("MENU_PROFILE_EDIT_PREVIOUS_NAME",0);
  thunk_FUN_1004e439c(auStack_50,uVar1);
  FUN_1004e3120(auStack_60,"[PREVIOUS_NAME]");
  lVar2 = FUN_10015d3ec();
  FUN_1004e3170(auStack_70,lVar2 + 0x5308);
  FUN_1004e3bc4(auStack_50,0,auStack_60,auStack_70);
  if (local_68 != (void *)0x0) {
    operator_delete__(local_68);
  }
  if (local_58 != (void *)0x0) {
    operator_delete__(local_58);
  }
  FUN_1006513c0(param_1 + 0x2170,auStack_50);
  *(uint *)(param_1 + 0x21f4) = *(uint *)(param_1 + 0x21f4) | 4;
  lVar2 = FUN_10015d3ec();
  FUN_1004e3170(auStack_60,lVar2 + 0x5308);
  FUN_1000153b4(param_1 + 0x7c00,auStack_60);
  if (local_58 != (void *)0x0) {
    operator_delete__(local_58);
  }
  uVar1 = FUN_1004e0150("MENU_EDIT_USERTEAMNAME_DESC",0);
  FUN_1006513c0(param_1 + 0x22a0,uVar1);
  lVar2 = param_1 + 0x23d0;
  uVar1 = FUN_1004e0150("MENU_EDIT_USERTEAMNAME_FIELD",0);
  FUN_100185730(lVar2,uVar1);
  uVar1 = FUN_1004e0150("MENU_EDIT_USERTEAMNAME_CAPTION",0);
  FUN_1001afd98(lVar2,uVar1,&DAT_101d91650,&DAT_101d91650,0,0,0,0,0,0);
  FUN_100185e2c(lVar2,1);
  FUN_100185e38(lVar2,1,3);
  FUN_100185e48(lVar2,1,0x10);
  FUN_100185e70(lVar2,0);
  *(uint *)(param_1 + 0x2454) = *(uint *)(param_1 + 0x2454) | 4;
  lVar2 = param_1 + 0x40c0;
  uVar1 = FUN_1004e0150("MENU_EDIT_USERTEAMNAME_CONFIRM_FIELD",0);
  FUN_100185730(lVar2,uVar1);
  uVar1 = FUN_1004e0150("MENU_EDIT_USERTEAMNAME_CAPTION",0);
  FUN_1001afd98(lVar2,uVar1,&DAT_101d91650,&DAT_101d91650,0,0,0,0,0,0);
  FUN_100185e2c(lVar2,1);
  FUN_100185e38(lVar2,1,3);
  FUN_100185e48(lVar2,1,0x10);
  FUN_100185e70(lVar2,0);
  *(uint *)(param_1 + 0x4144) = *(uint *)(param_1 + 0x4144) | 4;
  uVar1 = FUN_1004e0150("MENU_PROFILE_EDIT_SUBMIT_NAME",0);
  FUN_100181af8(param_1 + 0x5db0,uVar1);
  *(uint *)(param_1 + 0x76c4) = *(uint *)(param_1 + 0x76c4) & 0xfffffffb;
  *(uint *)(param_1 + 0x799c) = *(uint *)(param_1 + 0x799c) & 0xfffffffb;
  FUN_100227610(param_1);
  if (local_48 != (void *)0x0) {
    operator_delete__(local_48);
  }
  return;
}




void FUN_100229240(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auStack_70 [8];
  void *local_68;
  undefined1 auStack_60 [8];
  void *local_58;
  undefined1 auStack_50 [8];
  void *local_48;
  
  *(uint *)(param_1 + 0x1b7c) = *(uint *)(param_1 + 0x1b7c) & 0xfffffffb;
  uVar1 = FUN_1004e0150("MENU_EDIT_USERTEAMTAG_HEADER",0);
  FUN_1006513c0(param_1 + 0x19c8,uVar1);
  uVar1 = FUN_1004e0150("MENU_PROFILE_EDIT_PREVIOUS_TAG",0);
  thunk_FUN_1004e439c(auStack_50,uVar1);
  FUN_1004e3120(auStack_60,"[PREVIOUS_TAG]");
  lVar2 = FUN_10015d3ec();
  FUN_1004e3170(auStack_70,lVar2 + 0x5320);
  FUN_1004e3bc4(auStack_50,0,auStack_60,auStack_70);
  if (local_68 != (void *)0x0) {
    operator_delete__(local_68);
  }
  if (local_58 != (void *)0x0) {
    operator_delete__(local_58);
  }
  FUN_1006513c0(param_1 + 0x2170,auStack_50);
  *(uint *)(param_1 + 0x21f4) = *(uint *)(param_1 + 0x21f4) | 4;
  lVar2 = FUN_10015d3ec();
  FUN_1004e3170(auStack_60,lVar2 + 0x5320);
  FUN_1000153b4(param_1 + 0x7c00,auStack_60);
  if (local_58 != (void *)0x0) {
    operator_delete__(local_58);
  }
  uVar1 = FUN_1004e0150("MENU_EDIT_USERTEAMTAG_DESC",0);
  FUN_1006513c0(param_1 + 0x22a0,uVar1);
  lVar2 = param_1 + 0x23d0;
  uVar1 = FUN_1004e0150("MENU_EDIT_USERTEAMTAG_FIELD",0);
  FUN_100185730(lVar2,uVar1);
  uVar1 = FUN_1004e0150("MENU_EDIT_USERTEAMTAG_CAPTION",0);
  FUN_1001afd98(lVar2,uVar1,&DAT_101d91650,&DAT_101d91650,0,0,0,0,0,0);
  FUN_100185e2c(lVar2,1);
  FUN_100185e38(lVar2,1,2);
  FUN_100185e48(lVar2,1,4);
  FUN_100185e70(lVar2,0);
  *(uint *)(param_1 + 0x2454) = *(uint *)(param_1 + 0x2454) | 4;
  lVar2 = param_1 + 0x40c0;
  uVar1 = FUN_1004e0150("MENU_EDIT_USERTEAMTAG_CONFIRM_FIELD",0);
  FUN_100185730(lVar2,uVar1);
  uVar1 = FUN_1004e0150("MENU_EDIT_USERTEAMTAG_CAPTION",0);
  FUN_1001afd98(lVar2,uVar1,&DAT_101d91650,&DAT_101d91650,0,0,0,0,0,0);
  FUN_100185e2c(lVar2,1);
  FUN_100185e38(lVar2,1,2);
  FUN_100185e48(lVar2,1,4);
  FUN_100185e70(lVar2,0);
  *(uint *)(param_1 + 0x4144) = *(uint *)(param_1 + 0x4144) | 4;
  uVar1 = FUN_1004e0150("MENU_PROFILE_EDIT_SUBMIT_NAME",0);
  FUN_100181af8(param_1 + 0x5db0,uVar1);
  *(uint *)(param_1 + 0x76c4) = *(uint *)(param_1 + 0x76c4) & 0xfffffffb;
  *(uint *)(param_1 + 0x799c) = *(uint *)(param_1 + 0x799c) & 0xfffffffb;
  FUN_100227610(param_1);
  if (local_48 != (void *)0x0) {
    operator_delete__(local_48);
  }
  return;
}




void FUN_100229530(long param_1)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = FUN_100185ddc(param_1 + 0x23d0);
  if ((uVar2 & 1) == 0) {
    uVar2 = FUN_100185ddc(param_1 + 0x40c0);
    if ((uVar2 & 1) == 0) {
      uVar3 = FUN_1001afee4(param_1 + 0x23d0);
      iVar1 = FUN_1004e36c0(uVar3,&DAT_101d91650);
      if (iVar1 != 0) {
        if ((*(byte *)(param_1 + 0x4144) >> 2 & 1) != 0) {
          uVar3 = FUN_1001afee4(param_1 + 0x40c0);
          uVar2 = FUN_1004e36c0(uVar3,&DAT_101d91650);
          if ((uVar2 & 1) == 0) goto LAB_1002295b0;
        }
        uVar3 = 1;
        goto LAB_1002295b4;
      }
    }
  }
LAB_1002295b0:
  uVar3 = 0;
LAB_1002295b4:
  FUN_1001b4c0c(param_1 + 0x5db0,uVar3);
  return;
}




void FUN_1002295cc(long param_1)

{
  char *pcVar1;
  int in_w4;
  
  pcVar1 = "checkbox_filled";
  if (in_w4 != 0) {
    pcVar1 = "checkbox_empty";
  }
  FUN_100652cdc(param_1 + 0x76f8,pcVar1);
  pcVar1 = "checkbox_filled";
  if (in_w4 != 1) {
    pcVar1 = "checkbox_empty";
  }
  FUN_100652cdc(param_1 + 0x79d0,pcVar1);
  *(int *)(param_1 + 0x7c28) = in_w4;
  return;
}




void FUN_100229634(long param_1)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined1 auStack_60 [8];
  void *local_58;
  undefined1 auStack_50 [8];
  void *local_48;
  undefined1 auStack_40 [8];
  void *local_38;
  
  uVar2 = FUN_100131560();
  if ((uVar2 & 1) == 0) {
    uVar1 = *(uint *)(param_1 + 0x7c2c);
    lVar6 = FUN_10015d3ec();
    if (*(uint *)(lVar6 + 0x5450) < uVar1) {
      uVar3 = FUN_1004e0150("MENU_PROFILE_EDIT_SUBMIT_CANT_AFFORD_DIALOG_TITLE",0);
      uVar4 = FUN_1004e0150("MENU_PROFILE_EDIT_SUBMIT_CANT_AFFORD_ICE_DIALOG_TEXT",0);
      uVar5 = FUN_1004e0150("GENERIC_DIALOG_OKAY",0);
      uVar7 = FUN_1004e0150("MARKET_DIALOG_BUY_ICE",0);
      FUN_1001e3120(uVar3,uVar4,uVar5,uVar7,param_1,0,thunk_FUN_1001e3fd8);
      return;
    }
    FUN_1004e313c(auStack_40);
    FUN_1004e38ac(auStack_40,"%d");
    uVar3 = FUN_1004e0150("MENU_PROFILE_EDIT_SUBMIT_ICE_DIALOG_TEXT",0);
    thunk_FUN_1004e439c(auStack_50,uVar3);
    FUN_1004e3120(auStack_60,"[PLAYER_HANDLE]");
    uVar3 = FUN_100655b6c(param_1 + ((ulong)*(byte *)(param_1 + 0x2740) & 1) * 0x130 + 0x25b0);
    FUN_1004e3bc4(auStack_50,0,auStack_60,uVar3);
    if (local_58 != (void *)0x0) {
      operator_delete__(local_58);
    }
    FUN_1004e3120(auStack_60,"[COST]");
    FUN_1004e3bc4(auStack_50,0,auStack_60,auStack_40);
    if (local_58 != (void *)0x0) {
      operator_delete__(local_58);
    }
    uVar3 = FUN_1004e0150("MENU_PROFILE_EDIT_SUBMIT_TITLE",0);
    uVar4 = FUN_1004e0150("GENERIC_DIALOG_OKAY",0);
    uVar5 = FUN_1004e0150("GENERIC_DIALOG_CANCEL",0);
    FUN_1001e3120(uVar3,auStack_50,uVar4,uVar5,param_1,thunk_FUN_10022a7e4,0);
    if (local_48 != (void *)0x0) {
      operator_delete__(local_48);
    }
  }
  else {
    uVar3 = FUN_1004e0150("MAIN_PROFILE_CONFIRM_NICKNAME_DESCRIPTION",0);
    thunk_FUN_1004e439c(auStack_40,uVar3);
    FUN_1004e3120(auStack_50,"[PLAYER_NAME]");
    uVar3 = FUN_100655b6c(param_1 + ((ulong)*(byte *)(param_1 + 0x2740) & 1) * 0x130 + 0x25b0);
    FUN_1004e3bc4(auStack_40,0,auStack_50,uVar3);
    if (local_48 != (void *)0x0) {
      operator_delete__(local_48);
    }
    uVar3 = FUN_1004e0150("MENU_PROFILE_EDIT_SUBMIT_TITLE",0);
    uVar4 = FUN_1004e0150("GENERIC_DIALOG_OKAY",0);
    uVar5 = FUN_1004e0150("GENERIC_DIALOG_CANCEL",0);
    FUN_1001e3120(uVar3,auStack_40,uVar4,uVar5,param_1,thunk_FUN_10022a7e4,0);
  }
  if (local_38 != (void *)0x0) {
    operator_delete__(local_38);
  }
  return;
}




void thunk_FUN_10022a7e4(long param_1)

{
  size_t sVar1;
  size_t sVar2;
  undefined8 *puVar3;
  uint uVar4;
  byte bVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  byte *pbVar11;
  byte *pbVar12;
  void *pvVar13;
  
  uVar7 = FUN_100131560();
  if ((uVar7 & 1) == 0) {
    bVar5 = *(byte *)(param_1 + 0x7c27);
    uVar7 = (ulong)bVar5;
    sVar1 = *(size_t *)(param_1 + 0x7c18);
    if (-1 < (char)bVar5) {
      sVar1 = uVar7;
    }
    sVar2 = DAT_101d911a0;
    if (-1 < (char)DAT_101d911a8._7_1_) {
      sVar2 = (ulong)DAT_101d911a8._7_1_;
    }
    if (sVar1 == sVar2) {
      pvVar13 = *(void **)(param_1 + 0x7c10);
      puVar3 = pvVar13;
      if (-1 < (char)bVar5) {
        puVar3 = (undefined8 *)(param_1 + 0x7c10);
      }
      pbVar12 = DAT_101d91198;
      if (-1 < (char)DAT_101d911a8._7_1_) {
        pbVar12 = (byte *)&DAT_101d91198;
      }
      if ((char)bVar5 < '\0') {
        if (sVar1 == 0) {
          return;
        }
        iVar6 = _memcmp(puVar3,pbVar12,sVar1);
        if (iVar6 == 0) {
          return;
        }
      }
      else {
        if (sVar1 == 0) {
          return;
        }
        if ((uint)*pbVar12 == ((uint)pvVar13 & 0xff)) {
          pbVar11 = (byte *)(param_1 + 0x7c11);
          do {
            uVar7 = uVar7 - 1;
            pbVar12 = pbVar12 + 1;
            if (uVar7 == 0) {
              return;
            }
            bVar5 = *pbVar11;
            pbVar11 = pbVar11 + 1;
          } while (bVar5 == *pbVar12);
        }
      }
    }
    uVar4 = *(uint *)(param_1 + 0x7c2c);
    lVar8 = FUN_10015d3ec();
    if (*(uint *)(lVar8 + 0x5450) < uVar4) {
      return;
    }
  }
  uVar9 = FUN_10015d3ec();
  uVar10 = FUN_100655b6c(param_1 + ((ulong)*(byte *)(param_1 + 0x2740) & 1) * 0x130 + 0x25b0);
  FUN_100165040(uVar9,param_1 + 0x7c10,uVar10);
  return;
}




void FUN_10022990c(long param_1)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_60 [8];
  void *local_58;
  undefined1 auStack_50 [8];
  void *local_48;
  undefined1 auStack_40 [8];
  void *local_38;
  
  iVar2 = FUN_100131220();
  if (iVar2 != 0) {
    uVar1 = *(uint *)(param_1 + 0x7c2c);
    lVar3 = FUN_10015d3ec();
    if (*(uint *)(lVar3 + 0x5450) < uVar1) {
      uVar4 = FUN_1004e0150("MENU_EDIT_GUILDNAME_SUBMIT_CANT_AFFORD_DIALOG_TITLE",0);
      uVar5 = FUN_1004e0150("MENU_EDIT_GUILDNAME_SUBMIT_CANT_AFFORD_ICE_DIALOG_TEXT",0);
      uVar6 = FUN_1004e0150("GENERIC_DIALOG_OKAY",0);
      uVar7 = FUN_1004e0150("MARKET_DIALOG_BUY_ICE",0);
      FUN_1001e3120(uVar4,uVar5,uVar6,uVar7,param_1,0,thunk_FUN_1001e3fd8);
      return;
    }
    FUN_1004e313c(auStack_40);
    FUN_1004e38ac(auStack_40,"%d");
    uVar4 = FUN_1004e0150("MENU_EDIT_GUILD_NAME_SUBMIT_ICE_DIALOG_TEXT",0);
    thunk_FUN_1004e439c(auStack_50,uVar4);
    FUN_1004e3120(auStack_60,"[GUILD_NAME]");
    uVar4 = FUN_100655b6c(param_1 + ((ulong)*(byte *)(param_1 + 0x2740) & 1) * 0x130 + 0x25b0);
    FUN_1004e3bc4(auStack_50,0,auStack_60,uVar4);
    if (local_58 != (void *)0x0) {
      operator_delete__(local_58);
    }
    FUN_1004e3120(auStack_60,"[COST]");
    FUN_1004e3bc4(auStack_50,0,auStack_60,auStack_40);
    if (local_58 != (void *)0x0) {
      operator_delete__(local_58);
    }
    uVar4 = FUN_1004e0150("MENU_EDIT_GUILD_NAME_SUBMIT_TITLE",0);
    uVar5 = FUN_1004e0150("GENERIC_DIALOG_OKAY",0);
    uVar6 = FUN_1004e0150("GENERIC_DIALOG_CANCEL",0);
    FUN_1001e3120(uVar4,auStack_50,uVar5,uVar6,param_1,thunk_FUN_10022a92c,0);
    if (local_48 != (void *)0x0) {
      operator_delete__(local_48);
    }
    if (local_38 != (void *)0x0) {
      operator_delete__(local_38);
    }
  }
  return;
}




void thunk_FUN_10022a92c(long param_1)

{
  undefined8 *puVar1;
  size_t sVar2;
  size_t sVar3;
  undefined8 *puVar4;
  uint uVar5;
  byte bVar6;
  int iVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  byte *pbVar11;
  byte *pbVar12;
  
  puVar1 = (undefined8 *)(param_1 + 0x7c10);
  bVar6 = *(byte *)(param_1 + 0x7c27);
  uVar10 = (ulong)bVar6;
  sVar2 = *(size_t *)(param_1 + 0x7c18);
  if (-1 < (char)bVar6) {
    sVar2 = uVar10;
  }
  sVar3 = DAT_101d911a0;
  if (-1 < (char)DAT_101d911a8._7_1_) {
    sVar3 = (ulong)DAT_101d911a8._7_1_;
  }
  if (sVar2 == sVar3) {
    puVar4 = (void *)*puVar1;
    if (-1 < (char)bVar6) {
      puVar4 = puVar1;
    }
    pbVar12 = DAT_101d91198;
    if (-1 < (char)DAT_101d911a8._7_1_) {
      pbVar12 = (byte *)&DAT_101d91198;
    }
    if ((char)bVar6 < '\0') {
      if (sVar2 == 0) {
        return;
      }
      iVar7 = _memcmp(puVar4,pbVar12,sVar2);
      if (iVar7 == 0) {
        return;
      }
    }
    else {
      if (sVar2 == 0) {
        return;
      }
      if ((uint)*pbVar12 == ((uint)(void *)*puVar1 & 0xff)) {
        pbVar11 = (byte *)(param_1 + 0x7c11);
        do {
          uVar10 = uVar10 - 1;
          pbVar12 = pbVar12 + 1;
          if (uVar10 == 0) {
            return;
          }
          bVar6 = *pbVar11;
          pbVar11 = pbVar11 + 1;
        } while (bVar6 == *pbVar12);
      }
    }
  }
  uVar5 = *(uint *)(param_1 + 0x7c2c);
  lVar8 = FUN_10015d3ec();
  if (*(uint *)(lVar8 + 0x5450) < uVar5) {
    return;
  }
  uVar9 = FUN_100655b6c(param_1 + ((ulong)*(byte *)(param_1 + 0x2740) & 1) * 0x130 + 0x25b0);
  FUN_100143c00(puVar1,uVar9,FUN_10022aa68,FUN_10022aa6c);
  return;
}




void FUN_100229b18(long param_1)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_60 [8];
  void *local_58;
  undefined1 auStack_50 [8];
  void *local_48;
  undefined1 auStack_40 [8];
  void *local_38;
  
  iVar2 = FUN_100131220();
  if (iVar2 != 0) {
    uVar1 = *(uint *)(param_1 + 0x7c2c);
    lVar3 = FUN_10015d3ec();
    if (*(uint *)(lVar3 + 0x5450) < uVar1) {
      uVar4 = FUN_1004e0150("MENU_EDIT_GUILDTAG_SUBMIT_CANT_AFFORD_DIALOG_TITLE",0);
      uVar5 = FUN_1004e0150("MENU_EDIT_GUILDTAG_SUBMIT_CANT_AFFORD_ICE_DIALOG_TEXT",0);
      uVar6 = FUN_1004e0150("GENERIC_DIALOG_OKAY",0);
      uVar7 = FUN_1004e0150("MARKET_DIALOG_BUY_ICE",0);
      FUN_1001e3120(uVar4,uVar5,uVar6,uVar7,param_1,0,thunk_FUN_1001e3fd8);
      return;
    }
    FUN_1004e313c(auStack_40);
    FUN_1004e38ac(auStack_40,"%d");
    uVar4 = FUN_1004e0150("MENU_EDIT_GUILDTAG_SUBMIT_ICE_DIALOG_TEXT",0);
    thunk_FUN_1004e439c(auStack_50,uVar4);
    FUN_1004e3120(auStack_60,"[GUILD_TAG]");
    uVar4 = FUN_100655b6c(param_1 + ((ulong)*(byte *)(param_1 + 0x2740) & 1) * 0x130 + 0x25b0);
    FUN_1004e3bc4(auStack_50,0,auStack_60,uVar4);
    if (local_58 != (void *)0x0) {
      operator_delete__(local_58);
    }
    FUN_1004e3120(auStack_60,"[COST]");
    FUN_1004e3bc4(auStack_50,0,auStack_60,auStack_40);
    if (local_58 != (void *)0x0) {
      operator_delete__(local_58);
    }
    uVar4 = FUN_1004e0150("MENU_EDIT_GUILDTAG_SUBMIT_TITLE",0);
    uVar5 = FUN_1004e0150("GENERIC_DIALOG_OKAY",0);
    uVar6 = FUN_1004e0150("GENERIC_DIALOG_CANCEL",0);
    FUN_1001e3120(uVar4,auStack_50,uVar5,uVar6,param_1,thunk_FUN_10022aa70,0);
    if (local_48 != (void *)0x0) {
      operator_delete__(local_48);
    }
    if (local_38 != (void *)0x0) {
      operator_delete__(local_38);
    }
  }
  return;
}




void thunk_FUN_10022aa70(long param_1)

{
  undefined8 *puVar1;
  size_t sVar2;
  size_t sVar3;
  undefined8 *puVar4;
  uint uVar5;
  byte bVar6;
  int iVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  byte *pbVar11;
  byte *pbVar12;
  
  puVar1 = (undefined8 *)(param_1 + 0x7c10);
  bVar6 = *(byte *)(param_1 + 0x7c27);
  uVar10 = (ulong)bVar6;
  sVar2 = *(size_t *)(param_1 + 0x7c18);
  if (-1 < (char)bVar6) {
    sVar2 = uVar10;
  }
  sVar3 = DAT_101d911a0;
  if (-1 < (char)DAT_101d911a8._7_1_) {
    sVar3 = (ulong)DAT_101d911a8._7_1_;
  }
  if (sVar2 == sVar3) {
    puVar4 = (void *)*puVar1;
    if (-1 < (char)bVar6) {
      puVar4 = puVar1;
    }
    pbVar12 = DAT_101d91198;
    if (-1 < (char)DAT_101d911a8._7_1_) {
      pbVar12 = (byte *)&DAT_101d91198;
    }
    if ((char)bVar6 < '\0') {
      if (sVar2 == 0) {
        return;
      }
      iVar7 = _memcmp(puVar4,pbVar12,sVar2);
      if (iVar7 == 0) {
        return;
      }
    }
    else {
      if (sVar2 == 0) {
        return;
      }
      if ((uint)*pbVar12 == ((uint)(void *)*puVar1 & 0xff)) {
        pbVar11 = (byte *)(param_1 + 0x7c11);
        do {
          uVar10 = uVar10 - 1;
          pbVar12 = pbVar12 + 1;
          if (uVar10 == 0) {
            return;
          }
          bVar6 = *pbVar11;
          pbVar11 = pbVar11 + 1;
        } while (bVar6 == *pbVar12);
      }
    }
  }
  uVar5 = *(uint *)(param_1 + 0x7c2c);
  lVar8 = FUN_10015d3ec();
  if (*(uint *)(lVar8 + 0x5450) < uVar5) {
    return;
  }
  uVar9 = FUN_100655b6c(param_1 + ((ulong)*(byte *)(param_1 + 0x2740) & 1) * 0x130 + 0x25b0);
  FUN_100143c1c(puVar1,uVar9,FUN_10022aa68,FUN_10022aa6c);
  return;
}




void FUN_100229d24(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [8];
  void *local_48;
  undefined1 auStack_40 [8];
  void *local_38;
  
  uVar1 = FUN_1004e0150("MENU_EDIT_GUILDMOTTO_SUBMIT_ICE_DIALOG_TEXT",0);
  thunk_FUN_1004e439c(auStack_40,uVar1);
  FUN_1004e3120(auStack_50,"[GUILD_MOTTO]");
  FUN_1004e3bc4(auStack_40,0,auStack_50,param_1 + 0x7bf0);
  if (local_48 != (void *)0x0) {
    operator_delete__(local_48);
  }
  uVar1 = FUN_1004e0150("MENU_EDIT_GUILDMOTTO_SUBMIT_TITLE",0);
  uVar2 = FUN_1004e0150("GENERIC_DIALOG_OKAY",0);
  uVar3 = FUN_1004e0150("GENERIC_DIALOG_CANCEL",0);
  FUN_1001e3120(uVar1,auStack_40,uVar2,uVar3,param_1,thunk_FUN_10022abac,0);
  if (local_38 != (void *)0x0) {
    operator_delete__(local_38);
  }
  return;
}




void thunk_FUN_10022abac(long param_1)

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
  FUN_100167484(uVar7,lVar6 + 0x5478,param_1 + 0x7bf0);
  return;
}




void FUN_100229e0c(long param_1)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_60 [8];
  void *local_58;
  undefined1 auStack_50 [8];
  void *local_48;
  undefined1 auStack_40 [8];
  void *local_38;
  
  uVar2 = FUN_1004e0150("MENU_EDIT_GUILD_MESSAGE_SUBMIT_DIALOG_TEXT",0);
  thunk_FUN_1004e439c(auStack_40,uVar2);
  thunk_FUN_1004e439c(auStack_50,param_1 + 0x7bf0);
  uVar1 = FUN_1004e3634(auStack_50);
  if (100 < uVar1) {
    FUN_1004e4154(auStack_60,auStack_50,0,100);
    FUN_1000153b4(auStack_50,auStack_60);
    if (local_58 != (void *)0x0) {
      operator_delete__(local_58);
    }
    FUN_1004e3120(auStack_60,"...");
    FUN_1004e372c(auStack_50,auStack_60);
    if (local_58 != (void *)0x0) {
      operator_delete__(local_58);
    }
  }
  FUN_1004e3120(auStack_60,"[GUILD_MESSAGE]");
  FUN_1004e3bc4(auStack_40,0,auStack_60,auStack_50);
  if (local_58 != (void *)0x0) {
    operator_delete__(local_58);
  }
  uVar2 = FUN_1004e0150("MENU_EDIT_GUILD_MESSAGE_SUBMIT_TITLE",0);
  uVar3 = FUN_1004e0150("GENERIC_DIALOG_OKAY",0);
  uVar4 = FUN_1004e0150("GENERIC_DIALOG_CANCEL",0);
  FUN_1001e3120(uVar2,auStack_40,uVar3,uVar4,param_1,thunk_FUN_10022aca8,0);
  if (local_48 != (void *)0x0) {
    operator_delete__(local_48);
  }
  if (local_38 != (void *)0x0) {
    operator_delete__(local_38);
  }
  return;
}




void thunk_FUN_10022aca8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_40 [32];
  
  uVar1 = FUN_100644a94("UI::EVENT_EDIT_GUILD_MESSAGE_SUBMIT");
  FUN_100644aec(auStack_40,uVar1,0);
  FUN_100644c34(param_1,auStack_40,1);
  return;
}




void FUN_100229f70(long param_1)

{
  char *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_50 [8];
  void *local_48;
  undefined1 auStack_40 [8];
  void *local_38;
  
  uVar2 = FUN_1004e0150("MENU_EDIT_GUILDTYPE_SUBMIT_DIALOG_TEXT",0);
  thunk_FUN_1004e439c(auStack_40,uVar2);
  FUN_1004e3120(auStack_50,"[GUILD_TYPE]");
  pcVar1 = "MENU_PROFILE_GUILD_CREATE_TYPE_OPEN";
  if (*(int *)(param_1 + 0x7c28) != 0) {
    pcVar1 = "MENU_PROFILE_GUILD_CREATE_TYPE_INVITE_ONLY";
  }
  uVar2 = FUN_1004e0150(pcVar1,0);
  FUN_1004e3bc4(auStack_40,0,auStack_50,uVar2);
  if (local_48 != (void *)0x0) {
    operator_delete__(local_48);
  }
  uVar2 = FUN_1004e0150("MENU_EDIT_GUILDTYPE_SUBMIT_TITLE",0);
  uVar3 = FUN_1004e0150("GENERIC_DIALOG_OKAY",0);
  uVar4 = FUN_1004e0150("GENERIC_DIALOG_CANCEL",0);
  FUN_1001e3120(uVar2,auStack_40,uVar3,uVar4,param_1,thunk_FUN_10022acf8,0);
  if (local_38 != (void *)0x0) {
    operator_delete__(local_38);
  }
  return;
}




void thunk_FUN_10022acf8(long param_1)

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
  FUN_1001676a4(uVar7,lVar6 + 0x5478,*(int *)(param_1 + 0x7c28) != 0);
  return;
}




void FUN_10022a07c(long param_1)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_60 [8];
  void *local_58;
  undefined1 auStack_50 [8];
  void *local_48;
  undefined1 auStack_40 [8];
  void *local_38;
  
  uVar1 = *(uint *)(param_1 + 0x7c2c);
  lVar2 = FUN_10015d3ec();
  if (*(uint *)(lVar2 + 0x5450) < uVar1) {
    uVar3 = FUN_1004e0150("MENU_EDIT_USERTEAMNAME_SUBMIT_CANT_AFFORD_DIALOG_TITLE",0);
    uVar4 = FUN_1004e0150("MENU_EDIT_USERTEAMNAME_SUBMIT_CANT_AFFORD_ICE_DIALOG_TEXT",0);
    uVar5 = FUN_1004e0150("GENERIC_DIALOG_OKAY",0);
    uVar6 = FUN_1004e0150("MARKET_DIALOG_BUY_ICE",0);
    FUN_1001e3120(uVar3,uVar4,uVar5,uVar6,param_1,0,thunk_FUN_1001e3fd8);
    return;
  }
  FUN_1004e313c(auStack_40);
  FUN_1004e38ac(auStack_40,"%d");
  uVar3 = FUN_1004e0150("MENU_EDIT_USERTEAMNAME_SUBMIT_ICE_DIALOG_TEXT",0);
  thunk_FUN_1004e439c(auStack_50,uVar3);
  FUN_1004e3120(auStack_60,"[USERTEAM_NAME]");
  uVar3 = FUN_100655b6c(param_1 + ((ulong)*(byte *)(param_1 + 0x2740) & 1) * 0x130 + 0x25b0);
  FUN_1004e3bc4(auStack_50,0,auStack_60,uVar3);
  if (local_58 != (void *)0x0) {
    operator_delete__(local_58);
  }
  FUN_1004e3120(auStack_60,"[COST]");
  FUN_1004e3bc4(auStack_50,0,auStack_60,auStack_40);
  if (local_58 != (void *)0x0) {
    operator_delete__(local_58);
  }
  uVar3 = FUN_1004e0150("MENU_EDIT_USERTEAMNAME_SUBMIT_TITLE",0);
  uVar4 = FUN_1004e0150("GENERIC_DIALOG_OKAY",0);
  uVar5 = FUN_1004e0150("GENERIC_DIALOG_CANCEL",0);
  FUN_1001e3120(uVar3,auStack_50,uVar4,uVar5,param_1,thunk_FUN_10022a7e4,0);
  if (local_48 != (void *)0x0) {
    operator_delete__(local_48);
  }
  if (local_38 != (void *)0x0) {
    operator_delete__(local_38);
  }
  return;
}




void FUN_10022a27c(long param_1)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_60 [8];
  void *local_58;
  undefined1 auStack_50 [8];
  void *local_48;
  undefined1 auStack_40 [8];
  void *local_38;
  
  uVar1 = *(uint *)(param_1 + 0x7c2c);
  lVar2 = FUN_10015d3ec();
  if (*(uint *)(lVar2 + 0x5450) < uVar1) {
    uVar3 = FUN_1004e0150("MENU_EDIT_USERTEAMTAG_SUBMIT_CANT_AFFORD_DIALOG_TITLE",0);
    uVar4 = FUN_1004e0150("MENU_EDIT_USERTEAMTAG_SUBMIT_CANT_AFFORD_ICE_DIALOG_TEXT",0);
    uVar5 = FUN_1004e0150("GENERIC_DIALOG_OKAY",0);
    uVar6 = FUN_1004e0150("MARKET_DIALOG_BUY_ICE",0);
    FUN_1001e3120(uVar3,uVar4,uVar5,uVar6,param_1,0,thunk_FUN_1001e3fd8);
    return;
  }
  FUN_1004e313c(auStack_40);
  FUN_1004e38ac(auStack_40,"%d");
  uVar3 = FUN_1004e0150("MENU_EDIT_USERTEAMTAG_SUBMIT_ICE_DIALOG_TEXT",0);
  thunk_FUN_1004e439c(auStack_50,uVar3);
  FUN_1004e3120(auStack_60,"[USERTEAM_TAG]");
  uVar3 = FUN_100655b6c(param_1 + ((ulong)*(byte *)(param_1 + 0x2740) & 1) * 0x130 + 0x25b0);
  FUN_1004e3bc4(auStack_50,0,auStack_60,uVar3);
  if (local_58 != (void *)0x0) {
    operator_delete__(local_58);
  }
  FUN_1004e3120(auStack_60,"[COST]");
  FUN_1004e3bc4(auStack_50,0,auStack_60,auStack_40);
  if (local_58 != (void *)0x0) {
    operator_delete__(local_58);
  }
  uVar3 = FUN_1004e0150("MENU_EDIT_USERTEAMTAG_SUBMIT_TITLE",0);
  uVar4 = FUN_1004e0150("GENERIC_DIALOG_OKAY",0);
  uVar5 = FUN_1004e0150("GENERIC_DIALOG_CANCEL",0);
  FUN_1001e3120(uVar3,auStack_50,uVar4,uVar5,param_1,thunk_FUN_10022a7e4,0);
  if (local_48 != (void *)0x0) {
    operator_delete__(local_48);
  }
  if (local_38 != (void *)0x0) {
    operator_delete__(local_38);
  }
  return;
}




void FUN_10022a47c(long param_1)

{
  int iVar1;
  
  iVar1 = FUN_100131560();
  if (iVar1 != 0) {
switchD_10022a4cc_caseD_1:
    FUN_100229634(param_1);
    return;
  }
  switch(*(undefined4 *)(param_1 + 0x7c30)) {
  case 1:
    goto switchD_10022a4cc_caseD_1;
  case 2:
    FUN_10022990c(param_1);
    return;
  case 3:
    FUN_100229b18(param_1);
    return;
  case 4:
    FUN_100229d24(param_1);
    return;
  case 5:
    FUN_100229e0c(param_1);
    return;
  case 6:
    FUN_100229f70(param_1);
    return;
  case 7:
    FUN_10022a07c(param_1);
    return;
  case 8:
    FUN_10022a27c(param_1);
    return;
  default:
    return;
  }
}




void FUN_10022a54c(long param_1)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined1 auStack_50 [8];
  void *local_48;
  undefined1 auStack_40 [8];
  void *local_38;
  
  lVar1 = param_1 + 0x23d0;
  uVar5 = FUN_1001afee4(lVar1);
  lVar2 = param_1 + 0x7bf0;
  FUN_1000153b4(lVar2,uVar5);
  if (*(int *)(param_1 + 0x7c30) == 4) {
    uVar3 = FUN_1004e3634(lVar2);
    if (0x10 < uVar3) {
      FUN_1004e4154(auStack_40,lVar2,0,0x10);
      FUN_1004e3120(auStack_50,"...");
      FUN_1004e372c(auStack_40,auStack_50);
      if (local_48 != (void *)0x0) {
        operator_delete__(local_48);
      }
      FUN_100185730(lVar1,auStack_40);
      if (local_38 != (void *)0x0) {
        operator_delete__(local_38);
      }
    }
  }
  else {
    FUN_100185e94(lVar1,1,param_1 + 0x7c00);
    uVar5 = FUN_1001afee4(lVar1);
    iVar4 = FUN_1004e36c0(uVar5,&DAT_101d91650);
    if (iVar4 != 0) {
      FUN_10018577c(lVar1);
    }
    lVar2 = param_1 + 0x40c0;
    uVar5 = FUN_1001afee4(lVar1);
    FUN_100185e7c(lVar2,1,uVar5);
    uVar5 = FUN_1001afee4(lVar2);
    iVar4 = FUN_1004e36c0(uVar5,&DAT_101d91650);
    if (iVar4 != 0) {
      FUN_10018577c(lVar2);
    }
  }
  FUN_100229530(param_1);
  return;
}




void FUN_10022a690(long param_1)

{
  undefined8 uVar1;
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
  undefined8 local_60;
  undefined4 local_48;
  undefined1 auStack_40 [8];
  void *local_38;
  
  uVar1 = FUN_1004e0150("MENU_EDIT_NAME_RULES_TOOLTIP",0);
  thunk_FUN_1004e439c(auStack_40,uVar1);
  thunk_FUN_1001cd434(&local_f0);
  thunk_FUN_1004e439c(&local_128,auStack_40);
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
  local_c0 = param_1 + 0x1af8;
  local_48 = 2;
  local_60 = 0x447a00003f000000;
  uVar1 = FUN_10002f320();
  FUN_10001549c(&local_128,"editNameRulesInfo");
  FUN_100030e74(uVar1,&local_128,&local_f0);
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
  if (local_38 != (void *)0x0) {
    operator_delete__(local_38);
  }
  return;
}




void FUN_10022a7e4(long param_1)

{
  size_t sVar1;
  size_t sVar2;
  undefined8 *puVar3;
  uint uVar4;
  byte bVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  byte *pbVar11;
  byte *pbVar12;
  void *pvVar13;
  
  uVar7 = FUN_100131560();
  if ((uVar7 & 1) == 0) {
    bVar5 = *(byte *)(param_1 + 0x7c27);
    uVar7 = (ulong)bVar5;
    sVar1 = *(size_t *)(param_1 + 0x7c18);
    if (-1 < (char)bVar5) {
      sVar1 = uVar7;
    }
    sVar2 = DAT_101d911a0;
    if (-1 < (char)DAT_101d911a8._7_1_) {
      sVar2 = (ulong)DAT_101d911a8._7_1_;
    }
    if (sVar1 == sVar2) {
      pvVar13 = *(void **)(param_1 + 0x7c10);
      puVar3 = pvVar13;
      if (-1 < (char)bVar5) {
        puVar3 = (undefined8 *)(param_1 + 0x7c10);
      }
      pbVar12 = DAT_101d91198;
      if (-1 < (char)DAT_101d911a8._7_1_) {
        pbVar12 = (byte *)&DAT_101d91198;
      }
      if ((char)bVar5 < '\0') {
        if (sVar1 == 0) {
          return;
        }
        iVar6 = _memcmp(puVar3,pbVar12,sVar1);
        if (iVar6 == 0) {
          return;
        }
      }
      else {
        if (sVar1 == 0) {
          return;
        }
        if ((uint)*pbVar12 == ((uint)pvVar13 & 0xff)) {
          pbVar11 = (byte *)(param_1 + 0x7c11);
          do {
            uVar7 = uVar7 - 1;
            pbVar12 = pbVar12 + 1;
            if (uVar7 == 0) {
              return;
            }
            bVar5 = *pbVar11;
            pbVar11 = pbVar11 + 1;
          } while (bVar5 == *pbVar12);
        }
      }
    }
    uVar4 = *(uint *)(param_1 + 0x7c2c);
    lVar8 = FUN_10015d3ec();
    if (*(uint *)(lVar8 + 0x5450) < uVar4) {
      return;
    }
  }
  uVar9 = FUN_10015d3ec();
  uVar10 = FUN_100655b6c(param_1 + ((ulong)*(byte *)(param_1 + 0x2740) & 1) * 0x130 + 0x25b0);
  FUN_100165040(uVar9,param_1 + 0x7c10,uVar10);
  return;
}




void FUN_10022a92c(long param_1)

{
  undefined8 *puVar1;
  size_t sVar2;
  size_t sVar3;
  undefined8 *puVar4;
  uint uVar5;
  byte bVar6;
  int iVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  byte *pbVar11;
  byte *pbVar12;
  
  puVar1 = (undefined8 *)(param_1 + 0x7c10);
  bVar6 = *(byte *)(param_1 + 0x7c27);
  uVar10 = (ulong)bVar6;
  sVar2 = *(size_t *)(param_1 + 0x7c18);
  if (-1 < (char)bVar6) {
    sVar2 = uVar10;
  }
  sVar3 = DAT_101d911a0;
  if (-1 < (char)DAT_101d911a8._7_1_) {
    sVar3 = (ulong)DAT_101d911a8._7_1_;
  }
  if (sVar2 == sVar3) {
    puVar4 = (void *)*puVar1;
    if (-1 < (char)bVar6) {
      puVar4 = puVar1;
    }
    pbVar12 = DAT_101d91198;
    if (-1 < (char)DAT_101d911a8._7_1_) {
      pbVar12 = (byte *)&DAT_101d91198;
    }
    if ((char)bVar6 < '\0') {
      if (sVar2 == 0) {
        return;
      }
      iVar7 = _memcmp(puVar4,pbVar12,sVar2);
      if (iVar7 == 0) {
        return;
      }
    }
    else {
      if (sVar2 == 0) {
        return;
      }
      if ((uint)*pbVar12 == ((uint)(void *)*puVar1 & 0xff)) {
        pbVar11 = (byte *)(param_1 + 0x7c11);
        do {
          uVar10 = uVar10 - 1;
          pbVar12 = pbVar12 + 1;
          if (uVar10 == 0) {
            return;
          }
          bVar6 = *pbVar11;
          pbVar11 = pbVar11 + 1;
        } while (bVar6 == *pbVar12);
      }
    }
  }
  uVar5 = *(uint *)(param_1 + 0x7c2c);
  lVar8 = FUN_10015d3ec();
  if (*(uint *)(lVar8 + 0x5450) < uVar5) {
    return;
  }
  uVar9 = FUN_100655b6c(param_1 + ((ulong)*(byte *)(param_1 + 0x2740) & 1) * 0x130 + 0x25b0);
  FUN_100143c00(puVar1,uVar9,FUN_10022aa68,FUN_10022aa6c);
  return;
}




void FUN_10022aa68(void)

{
  return;
}




void FUN_10022aa6c(void)

{
  return;
}




void FUN_10022aa70(long param_1)

{
  undefined8 *puVar1;
  size_t sVar2;
  size_t sVar3;
  undefined8 *puVar4;
  uint uVar5;
  byte bVar6;
  int iVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  byte *pbVar11;
  byte *pbVar12;
  
  puVar1 = (undefined8 *)(param_1 + 0x7c10);
  bVar6 = *(byte *)(param_1 + 0x7c27);
  uVar10 = (ulong)bVar6;
  sVar2 = *(size_t *)(param_1 + 0x7c18);
  if (-1 < (char)bVar6) {
    sVar2 = uVar10;
  }
  sVar3 = DAT_101d911a0;
  if (-1 < (char)DAT_101d911a8._7_1_) {
    sVar3 = (ulong)DAT_101d911a8._7_1_;
  }
  if (sVar2 == sVar3) {
    puVar4 = (void *)*puVar1;
    if (-1 < (char)bVar6) {
      puVar4 = puVar1;
    }
    pbVar12 = DAT_101d91198;
    if (-1 < (char)DAT_101d911a8._7_1_) {
      pbVar12 = (byte *)&DAT_101d91198;
    }
    if ((char)bVar6 < '\0') {
      if (sVar2 == 0) {
        return;
      }
      iVar7 = _memcmp(puVar4,pbVar12,sVar2);
      if (iVar7 == 0) {
        return;
      }
    }
    else {
      if (sVar2 == 0) {
        return;
      }
      if ((uint)*pbVar12 == ((uint)(void *)*puVar1 & 0xff)) {
        pbVar11 = (byte *)(param_1 + 0x7c11);
        do {
          uVar10 = uVar10 - 1;
          pbVar12 = pbVar12 + 1;
          if (uVar10 == 0) {
            return;
          }
          bVar6 = *pbVar11;
          pbVar11 = pbVar11 + 1;
        } while (bVar6 == *pbVar12);
      }
    }
  }
  uVar5 = *(uint *)(param_1 + 0x7c2c);
  lVar8 = FUN_10015d3ec();
  if (*(uint *)(lVar8 + 0x5450) < uVar5) {
    return;
  }
  uVar9 = FUN_100655b6c(param_1 + ((ulong)*(byte *)(param_1 + 0x2740) & 1) * 0x130 + 0x25b0);
  FUN_100143c1c(puVar1,uVar9,FUN_10022aa68,FUN_10022aa6c);
  return;
}




void FUN_10022abac(long param_1)

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
  FUN_100167484(uVar7,lVar6 + 0x5478,param_1 + 0x7bf0);
  return;
}




void FUN_10022aca8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_40 [32];
  
  uVar1 = FUN_100644a94("UI::EVENT_EDIT_GUILD_MESSAGE_SUBMIT");
  FUN_100644aec(auStack_40,uVar1,0);
  FUN_100644c34(param_1,auStack_40,1);
  return;
}




void FUN_10022acf8(long param_1)

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
  FUN_1001676a4(uVar7,lVar6 + 0x5478,*(int *)(param_1 + 0x7c28) != 0);
  return;
}




void thunk_FUN_10022ae54(void)

{
  FUN_10022ae54();
  return;
}




void FUN_10022ae00(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_10022ae54();
  operator_delete(pvVar1);
  return;
}




void FUN_10022ae14(long param_1)

{
  FUN_10022ae54(param_1 + -0x88);
  return;
}




void FUN_10022ae1c(long param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_10022ae54(param_1 + -0x88);
  operator_delete(pvVar1);
  return;
}




void FUN_10022ae34(long param_1)

{
  FUN_10022ae54(param_1 + -0xa0);
  return;
}




void FUN_10022ae3c(long param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_10022ae54(param_1 + -0xa0);
  operator_delete(pvVar1);
  return;
}




void FUN_10022ae54(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_10022ae54_101476ba8;
  param_1[0x11] = &PTR_FUN_101476ca8;
  param_1[0x14] = &PTR_FUN_101476cd8;
  if (*(char *)((long)param_1 + 0x7c27) < '\0') {
    operator_delete((void *)param_1[0xf82]);
  }
  if ((void *)param_1[0xf81] != (void *)0x0) {
    operator_delete__((void *)param_1[0xf81]);
    param_1[0xf81] = 0;
    param_1[0xf80] = 0;
  }
  if ((void *)param_1[0xf7f] != (void *)0x0) {
    operator_delete__((void *)param_1[0xf7f]);
    param_1[0xf7f] = 0;
    param_1[0xf7e] = 0;
  }
  thunk_FUN_100651068(param_1 + 0xf58);
  param_1[0xf3a] = &PTR_FUN_1014a7108;
  param_1[0xf51] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xf54);
  FUN_10064e2bc(param_1 + 0xf3a);
  thunk_FUN_10064e2bc(param_1 + 0xf23);
  thunk_FUN_100651068(param_1 + 0xefd);
  param_1[0xedf] = &PTR_FUN_1014a7108;
  param_1[0xef6] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xef9);
  FUN_10064e2bc(param_1 + 0xedf);
  thunk_FUN_10064e2bc(param_1 + 0xec8);
  param_1[0xeaa] = &PTR_FUN_1014a7108;
  param_1[0xec1] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xec4);
  FUN_10064e2bc(param_1 + 0xeaa);
  thunk_FUN_100651068(param_1 + 0xe84);
  thunk_FUN_10064e2bc(param_1 + 0xe6d);
  FUN_10003bd40(param_1 + 0xbb6);
  param_1[0x818] = &PTR_FUN_10145f480;
  if ((void *)param_1[0xbb0] != (void *)0x0) {
    operator_delete__((void *)param_1[0xbb0]);
    param_1[0xbb0] = 0;
    param_1[0xbaf] = 0;
  }
  if ((void *)param_1[0xbae] != (void *)0x0) {
    operator_delete__((void *)param_1[0xbae]);
    param_1[0xbae] = 0;
    param_1[0xbad] = 0;
  }
  if ((void *)param_1[0xbac] != (void *)0x0) {
    operator_delete__((void *)param_1[0xbac]);
    param_1[0xbac] = 0;
    param_1[0xbab] = 0;
  }
  thunk_FUN_100651068(param_1 + 0xb85);
  FUN_10064e2bc(param_1 + 0xb6a);
  FUN_10064e2bc(param_1 + 0xb4f);
  FUN_10003bd40(param_1 + 0x898);
  FUN_100186088(param_1 + 0x818);
  param_1[0x47a] = &PTR_FUN_10145f480;
  if ((void *)param_1[0x812] != (void *)0x0) {
    operator_delete__((void *)param_1[0x812]);
    param_1[0x812] = 0;
    param_1[0x811] = 0;
  }
  if ((void *)param_1[0x810] != (void *)0x0) {
    operator_delete__((void *)param_1[0x810]);
    param_1[0x810] = 0;
    param_1[0x80f] = 0;
  }
  if ((void *)param_1[0x80e] != (void *)0x0) {
    operator_delete__((void *)param_1[0x80e]);
    param_1[0x80e] = 0;
    param_1[0x80d] = 0;
  }
  thunk_FUN_100651068(param_1 + 0x7e7);
  FUN_10064e2bc(param_1 + 0x7cc);
  FUN_10064e2bc(param_1 + 0x7b1);
  FUN_10003bd40(param_1 + 0x4fa);
  FUN_100186088(param_1 + 0x47a);
  thunk_FUN_100651068(param_1 + 0x454);
  thunk_FUN_100651068(param_1 + 0x42e);
  FUN_10064221c(param_1 + 0x41d);
  param_1[0x35f] = &PTR_FUN_10145f300;
  param_1[0x3f9] = &PTR_FUN_1014a7108;
  param_1[0x410] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x413);
  FUN_10064e2bc(param_1 + 0x3f9);
  param_1[0x3db] = &PTR_FUN_1014a7108;
  param_1[0x3f2] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x3f5);
  FUN_10064e2bc(param_1 + 0x3db);
  param_1[0x3bd] = &PTR_FUN_1014a7108;
  param_1[0x3d4] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x3d7);
  FUN_10064e2bc(param_1 + 0x3bd);
  FUN_10064221c(param_1 + 0x3ac);
  FUN_10003bec8(param_1 + 0x35f);
  thunk_FUN_100651068(param_1 + 0x339);
  param_1[0x31b] = &PTR_FUN_1014a7108;
  param_1[0x332] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x335);
  FUN_10064e2bc(param_1 + 0x31b);
  param_1[0x2fd] = &PTR_FUN_1014a7108;
  param_1[0x314] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x317);
  FUN_10064e2bc(param_1 + 0x2fd);
  param_1[0x2df] = &PTR_FUN_1014a7108;
  param_1[0x2f6] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x2f9);
  FUN_10064e2bc(param_1 + 0x2df);
  FUN_10064221c(param_1 + 0x2ce);
  FUN_10003bd40(param_1 + 0x17);
  FUN_10014f51c(param_1 + 0x14);
  FUN_1004f0a9c(param_1 + 0x11);
  FUN_10064221c(param_1);
  return;
}




long FUN_10022b24c(long param_1)

{
  undefined8 *puVar1;
  code *local_50;
  long lStack_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  
  puVar1 = (undefined8 *)FUN_10026d1f4();
  *puVar1 = &PTR_thunk_FUN_10022b2fc_101477070;
  puVar1[0x6d] = &PTR_FUN_101477240;
  *(undefined2 *)(puVar1 + 0x6e) = 0;
  puVar1[0x70] = 0;
  puVar1[0x6f] = 0;
  puVar1[0x72] = 0;
  puVar1[0x71] = 0;
  puVar1[0x73] = 0;
  FUN_10001549c(puVar1 + 0x74,"sections");
  *(undefined8 *)(param_1 + 0x3d8) = 0;
  *(undefined8 *)(param_1 + 0x3c0) = 0;
  *(undefined8 *)(param_1 + 0x3b8) = 0;
  *(undefined8 *)(param_1 + 0x3d0) = 0;
  *(undefined8 *)(param_1 + 0x3c8) = 0;
  local_28 = FUN_100644a94("UI::EVENT_NAVIGATE_TO_LINK");
  local_50 = FUN_10022b2f0;
  local_38 = 0;
  uStack_30 = 0;
  local_40 = 0;
  lStack_48 = param_1;
  FUN_10001554c(param_1 + 8,&local_50);
  return param_1;
}




void FUN_10022b2f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_10022d330(param_1,param_4);
  return;
}




long thunk_FUN_10022b24c(long param_1)

{
  undefined8 *puVar1;
  code *pcStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined4 uStack_28;
  
  puVar1 = (undefined8 *)FUN_10026d1f4();
  *puVar1 = &PTR_thunk_FUN_10022b2fc_101477070;
  puVar1[0x6d] = &PTR_FUN_101477240;
  *(undefined2 *)(puVar1 + 0x6e) = 0;
  puVar1[0x70] = 0;
  puVar1[0x6f] = 0;
  puVar1[0x72] = 0;
  puVar1[0x71] = 0;
  puVar1[0x73] = 0;
  FUN_10001549c(puVar1 + 0x74,"sections");
  *(undefined8 *)(param_1 + 0x3d8) = 0;
  *(undefined8 *)(param_1 + 0x3c0) = 0;
  *(undefined8 *)(param_1 + 0x3b8) = 0;
  *(undefined8 *)(param_1 + 0x3d0) = 0;
  *(undefined8 *)(param_1 + 0x3c8) = 0;
  uStack_28 = FUN_100644a94("UI::EVENT_NAVIGATE_TO_LINK");
  pcStack_50 = FUN_10022b2f0;
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_40 = 0;
  lStack_48 = param_1;
  FUN_10001554c(param_1 + 8,&pcStack_50);
  return param_1;
}




void FUN_10022b2fc(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_10022b2fc_101477070;
  param_1[0x6d] = &PTR_FUN_101477240;
  FUN_1004e1acc(&DAT_101d234d8,param_1,0x9d2c9b16);
  FUN_1004e1acc(&DAT_101d234d8,param_1,0x72bd94bf);
  FUN_1004e1acc(&DAT_101d234d8,param_1,0xe51db192);
  FUN_10022b3e4(param_1);
  if (*(char *)((long)param_1 + 0x3cf) < '\0') {
    operator_delete((void *)param_1[0x77]);
  }
  if (*(char *)((long)param_1 + 0x3b7) < '\0') {
    operator_delete((void *)param_1[0x74]);
  }
  if (*(char *)((long)param_1 + 0x39f) < '\0') {
    operator_delete((void *)param_1[0x71]);
  }
  if ((void *)param_1[0x70] != (void *)0x0) {
    operator_delete__((void *)param_1[0x70]);
    param_1[0x70] = 0;
    param_1[0x6f] = 0;
  }
  param_1[0x6d] = &PTR_FUN_10146b508;
  FUN_100136bd8(param_1 + 0x6d);
  FUN_10026d344(param_1);
  return;
}




void FUN_10022b3e4(long *param_1)

{
  int iVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  
  FUN_100136bd8(param_1 + 0x6d);
  puVar4 = (undefined8 *)param_1[0x70];
  if (*(uint *)(param_1 + 0x6f) != 0) {
    lVar5 = (ulong)*(uint *)(param_1 + 0x6f) << 3;
    do {
      plVar3 = (long *)*puVar4;
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
        iVar1 = FUN_100642d08();
        if (iVar1 != 0) {
          uVar2 = (**(code **)(*plVar3 + 0x10))(plVar3);
          FUN_1006423ec(uVar2,1);
        }
        (**(code **)(*param_1 + 0x1a0))(param_1,plVar3);
      }
      puVar4 = puVar4 + 1;
      lVar5 = lVar5 + -8;
    } while (lVar5 != 0);
    puVar4 = (undefined8 *)param_1[0x70];
  }
  if (puVar4 != (undefined8 *)0x0) {
    *(undefined4 *)(param_1 + 0x6f) = 0;
  }
  *(undefined4 *)((long)param_1 + 0x3dc) = 0;
  param_1[0x7a] = 0;
  return;
}




void thunk_FUN_10022b2fc(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_10022b2fc_101477070;
  param_1[0x6d] = &PTR_FUN_101477240;
  FUN_1004e1acc(&DAT_101d234d8,param_1,0x9d2c9b16);
  FUN_1004e1acc(&DAT_101d234d8,param_1,0x72bd94bf);
  FUN_1004e1acc(&DAT_101d234d8,param_1,0xe51db192);
  FUN_10022b3e4(param_1);
  if (*(char *)((long)param_1 + 0x3cf) < '\0') {
    operator_delete((void *)param_1[0x77]);
  }
  if (*(char *)((long)param_1 + 0x3b7) < '\0') {
    operator_delete((void *)param_1[0x74]);
  }
  if (*(char *)((long)param_1 + 0x39f) < '\0') {
    operator_delete((void *)param_1[0x71]);
  }
  if ((void *)param_1[0x70] != (void *)0x0) {
    operator_delete__((void *)param_1[0x70]);
    param_1[0x70] = 0;
    param_1[0x6f] = 0;
  }
  param_1[0x6d] = &PTR_FUN_10146b508;
  FUN_100136bd8(param_1 + 0x6d);
  FUN_10026d344(param_1);
  return;
}




void FUN_10022b490(long param_1)

{
  FUN_10022b2fc(param_1 + -0x368);
  return;
}




void FUN_10022b498(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_10022b2fc();
  operator_delete(pvVar1);
  return;
}




void FUN_10022b4ac(long param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_10022b2fc(param_1 + -0x368);
  operator_delete(pvVar1);
  return;
}




void FUN_10022b4c4(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010022b4cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x150))();
  return;
}




void FUN_10022b4d0(void)

{
  return;
}




void FUN_10022b4d4(long param_1,undefined8 param_2,string *param_3,string *param_4)

{
  std::string::operator=((string *)(param_1 + 0x388),param_4);
  std::string::operator=((string *)(param_1 + 0x3a0),param_3);
  return;
}




void FUN_10022b508(long param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_10022b538(param_1);
  }
  *(char *)(param_1 + 0x370) = (char)param_2;
  return;
}




void FUN_10022b538(long param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  uint *puVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined8 *puVar10;
  
  if (*(uint *)(param_1 + 0x378) != 0) {
    puVar10 = *(undefined8 **)(param_1 + 0x380);
    puVar1 = puVar10 + *(uint *)(param_1 + 0x378);
    do {
      plVar9 = (long *)*puVar10;
      if (plVar9 != (long *)0x0) {
        lVar4 = (**(code **)(*plVar9 + 0x10))(plVar9);
        uVar3 = *(undefined4 *)(lVar4 + 0x630);
        lVar4 = (**(code **)(*plVar9 + 0x10))(plVar9);
        lVar5 = (**(code **)(*plVar9 + 0x10))(plVar9);
        FUN_10022bdf0(param_1,lVar4 + 0x618,uVar3,lVar5 + 0x178);
        puVar6 = (uint *)(**(code **)(*plVar9 + 0x28))(plVar9);
        if ((puVar6 != (uint *)0x0) && (*puVar6 != 0)) {
          plVar9 = *(long **)(puVar6 + 2);
          lVar4 = (ulong)*puVar6 << 3;
          do {
            lVar5 = *plVar9;
            if (lVar5 != 0) {
              lVar7 = FUN_1001a678c(lVar5);
              uVar2 = *(ulong *)(lVar7 + 8);
              if (-1 < (char)*(byte *)(lVar7 + 0x17)) {
                uVar2 = (ulong)*(byte *)(lVar7 + 0x17);
              }
              if (uVar2 != 0) {
                uVar8 = FUN_1001a678c(lVar5);
                FUN_10022bdf0(param_1,uVar8,uVar3,lVar5);
              }
            }
            plVar9 = plVar9 + 1;
            lVar4 = lVar4 + -8;
          } while (lVar4 != 0);
        }
      }
      puVar10 = puVar10 + 1;
    } while (puVar10 != puVar1);
  }
  return;
}




void FUN_10022b650(long *param_1,long param_2)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_2 + 8);
  if (-1 < (char)*(byte *)(param_2 + 0x17)) {
    uVar1 = (ulong)*(byte *)(param_2 + 0x17);
  }
  if (uVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010022b670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x1b8))();
    return;
  }
  return;
}




void FUN_10022b678(undefined8 param_1)

{
  int iVar1;
  void *local_48 [2];
  char local_31;
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_30 = 0;
  uStack_28 = 0;
  iVar1 = FUN_100136d8c(&local_30);
  if (iVar1 != 0) {
    FUN_100136a64(local_48);
    FUN_10022b6e0(param_1,&local_30,local_48);
    if (local_31 < '\0') {
      operator_delete(local_48[0]);
    }
  }
  FUN_100135c64(&local_30,1);
  return;
}




void FUN_10022b6e0(long *param_1,uint *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined1 auStack_80 [32];
  
  if (*param_2 != 0) {
    lVar8 = *(long *)(param_2 + 2);
    lVar9 = lVar8 + (ulong)*param_2 * 0x78;
    do {
      pcVar3 = (char *)(lVar8 + 0x18);
      if (*(char *)(lVar8 + 0x2f) < '\0') {
        pcVar3 = *(char **)pcVar3;
      }
      plVar6 = param_1 + 0x74;
      if (*(char *)((long)param_1 + 0x3b7) < '\0') {
        plVar6 = (long *)param_1[0x74];
      }
      iVar1 = _strcmp(pcVar3,(char *)plVar6);
      if (iVar1 == 0) {
        FUN_10022b3e4(param_1);
        if (*(uint *)(lVar8 + 8) != 0) {
          iVar1 = 0;
          lVar7 = *(long *)(lVar8 + 0x10);
          lVar10 = (ulong)*(uint *)(lVar8 + 8) * 0x598;
          do {
            iVar2 = (**(code **)(*param_1 + 0x1b0))(param_1,lVar7,iVar1);
            if ((iVar2 != 0) && (lVar4 = FUN_10022b92c(param_1,param_3,lVar7), lVar4 != 0)) {
              (**(code **)(*param_1 + 0x1a8))(param_1,lVar4);
              iVar1 = iVar1 + 1;
            }
            lVar7 = lVar7 + 0x598;
            lVar10 = lVar10 + -0x598;
          } while (lVar10 != 0);
        }
      }
      lVar8 = lVar8 + 0x78;
    } while (lVar8 != lVar9);
  }
  if ((char)param_1[0x6e] != '\0') {
    FUN_10022b538(param_1);
    FUN_10022b9fc(param_1);
    if (*(char *)((long)param_1 + 0x3cf) < '\0') {
      if (param_1[0x78] == 0) goto LAB_10022b804;
    }
    else if (*(char *)((long)param_1 + 0x3cf) == '\0') goto LAB_10022b804;
    (**(code **)(*param_1 + 0x1b8))(param_1,param_1 + 0x77);
  }
LAB_10022b804:
  uVar5 = FUN_100644a94("UI::EVENT_FEED_SIZE_UPDATE");
  FUN_100644aec(auStack_80,uVar5,0);
  FUN_100644c34(param_1,auStack_80,1);
  return;
}




void FUN_10022b85c(undefined8 param_1)

{
  int iVar1;
  void *local_48 [2];
  char local_31;
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_30 = 0;
  uStack_28 = 0;
  iVar1 = FUN_100136dac(&local_30);
  if (iVar1 != 0) {
    FUN_100136a88(local_48);
    FUN_10022b6e0(param_1,&local_30,local_48);
    if (local_31 < '\0') {
      operator_delete(local_48[0]);
    }
  }
  FUN_100135c64(&local_30,1);
  return;
}




void FUN_10022b8c4(undefined8 param_1)

{
  int iVar1;
  void *local_48 [2];
  char local_31;
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_30 = 0;
  uStack_28 = 0;
  iVar1 = FUN_100136e70(&local_30);
  if (iVar1 != 0) {
    FUN_100136aac(local_48);
    FUN_10022b6e0(param_1,&local_30,local_48);
    if (local_31 < '\0') {
      operator_delete(local_48[0]);
    }
  }
  FUN_100135c64(&local_30,1);
  return;
}




long * FUN_10022b92c(long *param_1,undefined8 param_2,long param_3)

{
  undefined4 uVar1;
  int iVar2;
  long *plVar3;
  undefined8 uVar4;
  long *local_48;
  
  iVar2 = FUN_1001efe9c(param_3);
  if (iVar2 == 0) {
    local_48 = (long *)0x0;
  }
  else {
    iVar2 = FUN_10022bae4(param_3);
    if (iVar2 == 0) {
      plVar3 = (long *)(**(code **)(*param_1 + 0x198))(param_1,param_3 + 0x3a8);
      local_48 = plVar3;
      if (plVar3 != (long *)0x0) {
        uVar1 = *(undefined4 *)((long)param_1 + 0x3dc);
        uVar4 = FUN_10022bb74(param_1);
        (**(code **)(*plVar3 + 0x18))(plVar3,param_2,param_3,uVar1,uVar4);
        FUN_10022bc20(param_1 + 0x6f,&local_48);
      }
    }
    else {
      *(int *)((long)param_1 + 0x3dc) = *(int *)((long)param_1 + 0x3dc) + *(int *)(param_3 + 0x508);
      local_48 = (long *)0x0;
    }
  }
  return local_48;
}




void FUN_10022b9fc(long param_1)

{
  undefined8 uVar1;
  void *local_c0 [2];
  char local_a9;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_101444218;
  FUN_10006d330(auStack_a8,"%s_%s");
  FUN_10001549c(local_c0,auStack_a8);
  uVar1 = FUN_1004f1a74(0);
  FUN_10012ea38(local_c0,uVar1);
  if (local_a9 < '\0') {
    operator_delete(local_c0[0]);
  }
  FUN_100136c34(param_1 + 0x3a0);
  if (*(long *)PTR____stack_chk_guard_101444218 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined8 FUN_10022babc(void)

{
  return 1;
}




void FUN_10022bac4(void)

{
  undefined8 in_x4;
  
  FUN_1001a621c(in_x4);
  return;
}




void FUN_10022bad0(void)

{
  undefined8 in_x4;
  
  FUN_1001a621c(in_x4);
  return;
}




void FUN_10022badc(long param_1,string *param_2)

{
  std::string::operator=((string *)(param_1 + 0x3a0),param_2);
  return;
}




undefined8 FUN_10022bae4(long param_1)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  iVar1 = FUN_10015d3f8();
  if (iVar1 != 0) {
    lVar2 = FUN_10015d3ec();
    iVar1 = *(int *)(lVar2 + 0x55d0);
    if (-1 < iVar1) {
      if ((-1 < *(int *)(param_1 + 0x50c)) && (iVar1 < *(int *)(param_1 + 0x50c))) {
        return 1;
      }
      if ((0 < *(int *)(param_1 + 0x510)) && (*(int *)(param_1 + 0x510) < iVar1)) {
        return 1;
      }
    }
  }
  uVar3 = FUN_10022be8c(param_1);
  if ((((uVar3 & 1) == 0) && (uVar3 = FUN_10022c538(param_1), (uVar3 & 1) == 0)) &&
     (uVar3 = FUN_10022d0c4(param_1), (uVar3 & 1) == 0)) {
    uVar4 = FUN_10022d220(param_1);
    return uVar4;
  }
  return 1;
}




undefined8 FUN_10022bb74(void)

{
  undefined8 uVar1;
  void *local_c0 [2];
  char local_a9;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_101444218;
  FUN_10006d330(auStack_a8,"%s_%s");
  FUN_10001549c(local_c0,auStack_a8);
  uVar1 = FUN_10012eb90(local_c0);
  if (local_a9 < '\0') {
    operator_delete(local_c0[0]);
  }
  if (*(long *)PTR____stack_chk_guard_101444218 == local_28) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_10022bc20(uint *param_1,undefined8 *param_2)

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
    FUN_10022d3a0(param_1,uVar2);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




long FUN_10022bca0(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  byte bVar6;
  
  bVar6 = *(byte *)(param_2 + 0x17);
  uVar4 = (ulong)bVar6;
  uVar5 = *(ulong *)(param_2 + 8);
  uVar1 = uVar5;
  if (-1 < (char)bVar6) {
    uVar1 = uVar4;
  }
  if (uVar1 == 4) {
    iVar2 = std::string::compare(param_2,0,(char *)0xffffffffffffffff,0x1013e695a);
    if (iVar2 == 0) goto LAB_10022bd74;
    bVar6 = *(byte *)(param_2 + 0x17);
    uVar4 = (ulong)bVar6;
    uVar5 = *(ulong *)(param_2 + 8);
  }
  uVar1 = uVar5;
  if (-1 < (char)bVar6) {
    uVar1 = uVar4;
  }
  if (uVar1 == 7) {
    iVar2 = std::string::compare(param_2,0,(char *)0xffffffffffffffff,0x1013e695f);
    if (iVar2 == 0) goto LAB_10022bd74;
    bVar6 = *(byte *)(param_2 + 0x17);
    uVar4 = (ulong)bVar6;
    uVar5 = *(ulong *)(param_2 + 8);
  }
  if (-1 < (char)bVar6) {
    uVar5 = uVar4;
  }
  if (uVar5 != 6) {
    return 0;
  }
  iVar2 = std::string::compare(param_2,0,(char *)0xffffffffffffffff,0x1013e6967);
  if (iVar2 != 0) {
    return 0;
  }
LAB_10022bd74:
  operator_new(0x168);
  lVar3 = thunk_FUN_100200b50();
  return lVar3 + 0x10;
}




void FUN_10022bd98(undefined8 param_1,long *param_2)

{
  if (param_2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010022bda8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_2 + 8))(param_2);
    return;
  }
  return;
}




void FUN_10022bdb0(long *param_1,long *param_2)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(*param_2 + 0x10))(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010022bdec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x78))(param_1,uVar1,1);
  return;
}




void FUN_10022bdf0(long param_1,long param_2,int param_3,undefined8 param_4)

{
  ulong uVar1;
  
  uVar1 = FUN_1001a6794(param_4);
  if ((uVar1 & 1) == 0) {
    uVar1 = *(ulong *)(param_2 + 8);
    if (-1 < (char)*(byte *)(param_2 + 0x17)) {
      uVar1 = (ulong)*(byte *)(param_2 + 0x17);
    }
    if (uVar1 != 0) {
      if (param_3 == 1) {
        FUN_100136bb4(param_2,param_1 + 0x368,param_4);
        return;
      }
      if (param_3 == 0) {
        FUN_100136b90();
        return;
      }
      FUN_100136b6c();
      return;
    }
  }
  return;
}




byte FUN_10022be8c(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  byte bVar3;
  ulong *puVar4;
  size_t sVar5;
  size_t sVar6;
  undefined8 *puVar7;
  size_t sVar8;
  long *plVar9;
  byte *pbVar10;
  byte bVar11;
  long lVar12;
  byte bVar13;
  bool bVar14;
  byte bVar15;
  int iVar16;
  char *pcVar17;
  undefined8 uVar18;
  byte bVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  size_t sVar25;
  size_t sVar26;
  long *plVar27;
  long lVar28;
  ulong *puVar29;
  long lVar30;
  void *local_78 [2];
  char local_61;
  
  if (*(uint *)(param_1 + 0x4e8) == 0) {
    bVar19 = 0;
    bVar3 = 1;
  }
  else {
    bVar19 = 0;
    lVar28 = *(long *)(param_1 + 0x4f0);
    lVar20 = lVar28 + (ulong)*(uint *)(param_1 + 0x4e8) * 0x38;
    bVar3 = 1;
    do {
      bVar13 = DAT_101d911a8._7_1_;
      puVar1 = (undefined8 *)(lVar28 + 8);
      bVar15 = *(byte *)(lVar28 + 0x1f);
      sVar26 = (size_t)bVar15;
      sVar25 = *(size_t *)(lVar28 + 0x10);
      sVar5 = sVar25;
      if (-1 < (char)bVar15) {
        sVar5 = sVar26;
      }
      sVar6 = DAT_101d911a0;
      if (-1 < (char)DAT_101d911a8._7_1_) {
        sVar6 = (ulong)DAT_101d911a8._7_1_;
      }
      if (sVar5 == sVar6) {
        puVar7 = (void *)*puVar1;
        if (-1 < (char)bVar15) {
          puVar7 = puVar1;
        }
        pbVar10 = DAT_101d91198;
        if (-1 < (char)DAT_101d911a8._7_1_) {
          pbVar10 = (byte *)&DAT_101d91198;
        }
        if ((char)bVar15 < '\0') {
          if ((sVar5 != 0) && (iVar16 = _memcmp(puVar7,pbVar10,sVar5), iVar16 != 0))
          goto LAB_10022bf7c;
        }
        else if (sVar5 != 0) {
          if ((uint)*pbVar10 == ((uint)(void *)*puVar1 & 0xff)) {
            lVar21 = 0;
            do {
              if (sVar26 - 1 == lVar21) goto LAB_10022c1b4;
              lVar22 = lVar28 + lVar21;
              lVar30 = lVar21 + 1;
              lVar21 = lVar21 + 1;
            } while (*(byte *)(lVar22 + 9) == pbVar10[lVar30]);
          }
          goto LAB_10022bf7c;
        }
        goto LAB_10022c1b4;
      }
LAB_10022bf7c:
      puVar29 = (ulong *)(lVar28 + 0x20);
      bVar11 = *(byte *)(lVar28 + 0x37);
      sVar8 = *(size_t *)(lVar28 + 0x28);
      if (-1 < (char)bVar11) {
        sVar8 = (ulong)bVar11;
      }
      if (sVar8 == sVar6) {
        puVar4 = (ulong *)*puVar29;
        if (-1 < (char)bVar11) {
          puVar4 = puVar29;
        }
        pbVar10 = DAT_101d91198;
        if (-1 < (char)bVar13) {
          pbVar10 = (byte *)&DAT_101d91198;
        }
        if ((char)bVar11 < '\0') {
          if ((sVar6 != 0) && (iVar16 = _memcmp(puVar4,pbVar10,sVar6), iVar16 != 0))
          goto LAB_10022c00c;
        }
        else if (sVar6 != 0) {
          if ((uint)*pbVar10 == ((uint)(ulong *)*puVar29 & 0xff)) {
            lVar21 = 0;
            do {
              if ((ulong)bVar11 - 1 == lVar21) goto LAB_10022c1b4;
              lVar22 = lVar28 + lVar21;
              lVar30 = lVar21 + 1;
              lVar21 = lVar21 + 1;
            } while (*(byte *)(lVar22 + 0x21) == pbVar10[lVar30]);
          }
          goto LAB_10022c00c;
        }
      }
      else {
LAB_10022c00c:
        if (sVar5 == 4) {
          iVar16 = std::string::compare((ulong)puVar1,0,(char *)0xffffffffffffffff,0x1013d25c4);
          if (iVar16 != 0) {
            bVar15 = *(byte *)(lVar28 + 0x1f);
            sVar26 = (size_t)bVar15;
            sVar25 = *(size_t *)(lVar28 + 0x10);
            goto LAB_10022c040;
          }
          uVar18 = FUN_10015d3ec();
          if (*(char *)(lVar28 + 0x37) < '\0') {
            puVar29 = (ulong *)*puVar29;
          }
          bVar15 = FUN_1001665d4(uVar18,puVar29,1);
LAB_10022c190:
          bVar3 = bVar3 & bVar15;
          bVar19 = bVar19 | bVar15;
        }
        else {
LAB_10022c040:
          sVar5 = sVar25;
          if (-1 < (char)bVar15) {
            sVar5 = sVar26;
          }
          if (sVar5 == 4) {
            iVar16 = std::string::compare((ulong)puVar1,0,(char *)0xffffffffffffffff,0x1013d25b2);
            if (iVar16 == 0) {
              uVar18 = FUN_10015d3ec();
              if (*(char *)(lVar28 + 0x37) < '\0') {
                puVar29 = (ulong *)*puVar29;
              }
              FUN_10001549c(local_78,puVar29);
              bVar15 = FUN_100166518(uVar18,local_78);
              if (local_61 < '\0') {
                operator_delete(local_78[0]);
              }
              goto LAB_10022c190;
            }
            bVar15 = *(byte *)(lVar28 + 0x1f);
            sVar26 = (size_t)bVar15;
            sVar25 = *(size_t *)(lVar28 + 0x10);
          }
          if (-1 < (char)bVar15) {
            sVar25 = sVar26;
          }
          if ((sVar25 == 6) &&
             (iVar16 = std::string::compare((ulong)puVar1,0,(char *)0xffffffffffffffff,0x1013e696e),
             iVar16 == 0)) {
            pcVar17 = (char *)FUN_1004e2f70(&DAT_101d911b0);
            sVar25 = _strlen(pcVar17);
            sVar5 = *(size_t *)(lVar28 + 0x28);
            if (-1 < (char)*(byte *)(lVar28 + 0x37)) {
              sVar5 = (ulong)*(byte *)(lVar28 + 0x37);
            }
            if (sVar25 == sVar5) {
              iVar16 = std::string::compare
                                 ((ulong)puVar29,0,(char *)0xffffffffffffffff,(ulong)pcVar17);
              bVar14 = iVar16 == 0;
            }
            else {
              bVar14 = false;
            }
            bVar3 = bVar3 & bVar14;
            bVar19 = bVar19 | bVar14;
          }
        }
      }
LAB_10022c1b4:
      lVar28 = lVar28 + 0x38;
    } while (lVar28 != lVar20);
  }
  if (5 < *(int *)(param_1 + 0x4f8) - 1U) {
    bVar3 = 0;
    goto switchD_10022c20c_caseD_4;
  }
  bVar15 = bVar19 & (bVar3 ^ 1);
  switch(*(int *)(param_1 + 0x4f8)) {
  case 1:
    bVar3 = bVar3 ^ 1;
    goto switchD_10022c20c_caseD_4;
  case 2:
    bVar15 = bVar19 ^ 1;
    break;
  case 3:
    bVar15 = bVar15 ^ 1;
    break;
  case 4:
    goto switchD_10022c20c_caseD_4;
  case 5:
    bVar3 = bVar19;
    goto switchD_10022c20c_caseD_4;
  }
  bVar3 = bVar15;
switchD_10022c20c_caseD_4:
  if ((*(char *)(param_1 + 0x590) != '\0') && (*(int *)(param_1 + 0x504) == 6)) {
    if (*(uint *)(param_1 + 8) == 0) {
      bVar19 = 1;
    }
    else {
      lVar28 = *(long *)(param_1 + 0x10);
      lVar20 = lVar28 + (ulong)*(uint *)(param_1 + 8) * 0x30;
      bVar19 = 1;
      do {
        if (*(uint *)(lVar28 + 8) != 0) {
          lVar21 = *(long *)(lVar28 + 0x10);
          lVar22 = lVar21 + (ulong)*(uint *)(lVar28 + 8) * 0xd0;
          do {
            if (*(uint *)(lVar21 + 8) != 0) {
              lVar30 = *(long *)(lVar21 + 0x10);
              lVar23 = lVar30 + (ulong)*(uint *)(lVar21 + 8) * 0x38;
              do {
                bVar13 = DAT_101d911a8._7_1_;
                puVar1 = (undefined8 *)(lVar30 + 8);
                bVar15 = *(byte *)(lVar30 + 0x1f);
                sVar26 = (size_t)bVar15;
                sVar25 = *(size_t *)(lVar30 + 0x10);
                sVar5 = sVar25;
                if (-1 < (char)bVar15) {
                  sVar5 = sVar26;
                }
                sVar6 = DAT_101d911a0;
                if (-1 < (char)DAT_101d911a8._7_1_) {
                  sVar6 = (ulong)DAT_101d911a8._7_1_;
                }
                if (sVar5 == sVar6) {
                  puVar7 = (void *)*puVar1;
                  if (-1 < (char)bVar15) {
                    puVar7 = puVar1;
                  }
                  pbVar10 = DAT_101d91198;
                  if (-1 < (char)DAT_101d911a8._7_1_) {
                    pbVar10 = (byte *)&DAT_101d91198;
                  }
                  if ((char)bVar15 < '\0') {
                    if ((sVar5 != 0) && (iVar16 = _memcmp(puVar7,pbVar10,sVar5), iVar16 != 0))
                    goto LAB_10022c354;
                  }
                  else if (sVar5 != 0) {
                    if ((uint)*pbVar10 == ((uint)(void *)*puVar1 & 0xff)) {
                      lVar24 = 0;
                      do {
                        if (sVar26 - 1 == lVar24) goto LAB_10022c4c0;
                        lVar2 = lVar30 + lVar24;
                        lVar12 = lVar24 + 1;
                        lVar24 = lVar24 + 1;
                      } while (*(byte *)(lVar2 + 9) == pbVar10[lVar12]);
                    }
                    goto LAB_10022c354;
                  }
                  goto LAB_10022c4c0;
                }
LAB_10022c354:
                plVar27 = (long *)(lVar30 + 0x20);
                bVar11 = *(byte *)(lVar30 + 0x37);
                sVar8 = *(size_t *)(lVar30 + 0x28);
                if (-1 < (char)bVar11) {
                  sVar8 = (ulong)bVar11;
                }
                if (sVar8 == sVar6) {
                  plVar9 = (long *)*plVar27;
                  if (-1 < (char)bVar11) {
                    plVar9 = plVar27;
                  }
                  pbVar10 = DAT_101d91198;
                  if (-1 < (char)bVar13) {
                    pbVar10 = (byte *)&DAT_101d91198;
                  }
                  if ((char)bVar11 < '\0') {
                    if ((sVar6 != 0) && (iVar16 = _memcmp(plVar9,pbVar10,sVar6), iVar16 != 0))
                    goto LAB_10022c3e4;
                  }
                  else if (sVar6 != 0) {
                    if ((uint)*pbVar10 == ((uint)(long *)*plVar27 & 0xff)) {
                      lVar24 = 0;
                      do {
                        if ((ulong)bVar11 - 1 == lVar24) goto LAB_10022c4c0;
                        lVar2 = lVar30 + lVar24;
                        lVar12 = lVar24 + 1;
                        lVar24 = lVar24 + 1;
                      } while (*(byte *)(lVar2 + 0x21) == pbVar10[lVar12]);
                    }
                    goto LAB_10022c3e4;
                  }
                }
                else {
LAB_10022c3e4:
                  if (sVar5 == 4) {
                    iVar16 = std::string::compare
                                       ((ulong)puVar1,0,(char *)0xffffffffffffffff,0x1013d25c4);
                    if (iVar16 != 0) {
                      bVar15 = *(byte *)(lVar30 + 0x1f);
                      sVar26 = (size_t)bVar15;
                      sVar25 = *(size_t *)(lVar30 + 0x10);
                      goto LAB_10022c418;
                    }
                    uVar18 = FUN_10015d3ec();
                    if (*(char *)(lVar30 + 0x37) < '\0') {
                      plVar27 = (long *)*plVar27;
                    }
                    bVar15 = FUN_1001665d4(uVar18,plVar27,1);
                  }
                  else {
LAB_10022c418:
                    if (-1 < (char)bVar15) {
                      sVar25 = sVar26;
                    }
                    if ((sVar25 != 4) ||
                       (iVar16 = std::string::compare
                                           ((ulong)puVar1,0,(char *)0xffffffffffffffff,0x1013d25b2),
                       iVar16 != 0)) goto LAB_10022c4c0;
                    uVar18 = FUN_10015d3ec();
                    if (*(char *)(lVar30 + 0x37) < '\0') {
                      plVar27 = (long *)*plVar27;
                    }
                    FUN_10001549c(local_78,plVar27);
                    bVar15 = FUN_100166518(uVar18,local_78);
                    if (local_61 < '\0') {
                      operator_delete(local_78[0]);
                    }
                  }
                  bVar19 = bVar19 & bVar15;
                }
LAB_10022c4c0:
                lVar30 = lVar30 + 0x38;
              } while (lVar30 != lVar23);
            }
            lVar21 = lVar21 + 0xd0;
          } while (lVar21 != lVar22);
        }
        lVar28 = lVar28 + 0x30;
      } while (lVar28 != lVar20);
    }
    bVar3 = bVar19 | bVar3;
  }
  return bVar3 & 1;
}




undefined8 FUN_10022c538(long param_1)

{
  byte *pbVar1;
  undefined8 *puVar2;
  size_t sVar3;
  size_t sVar4;
  uint uVar5;
  int iVar6;
  byte bVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  long lVar13;
  ulong uVar14;
  int *piVar15;
  long lVar16;
  uint *puVar17;
  ulong uVar18;
  byte *pbVar19;
  byte *pbVar20;
  byte *pbVar21;
  byte *pbVar22;
  undefined8 *puVar23;
  size_t sVar24;
  undefined8 uVar25;
  size_t sVar26;
  byte bVar27;
  ulong uVar28;
  
  lVar13 = FUN_10015d3ec();
  iVar9 = *(int *)(lVar13 + 0x5650);
  lVar13 = FUN_10015d3ec();
  iVar10 = *(int *)(lVar13 + 0x5658);
  lVar13 = FUN_10015d3ec();
  iVar12 = *(int *)(lVar13 + 0x565c);
  lVar13 = FUN_10015d3ec();
  iVar11 = *(int *)(lVar13 + 0x5660);
  lVar13 = FUN_10015d3ec();
  uVar25 = *(undefined8 *)(lVar13 + 0x55b0);
  lVar13 = FUN_10015d3ec();
  iVar6 = *(int *)(lVar13 + 0x5654);
  lVar13 = FUN_10015d3ec();
  lVar13 = *(long *)(lVar13 + 0x55b8);
  if ((-1 < *(int *)(param_1 + 0x514)) && (iVar9 < *(int *)(param_1 + 0x514))) {
    return 1;
  }
  if ((-1 < *(int *)(param_1 + 0x518)) && (*(int *)(param_1 + 0x518) < iVar9)) {
    return 1;
  }
  if ((-1 < *(int *)(param_1 + 0x51c)) && (iVar10 < *(int *)(param_1 + 0x51c))) {
    return 1;
  }
  if ((-1 < *(int *)(param_1 + 0x520)) && (*(int *)(param_1 + 0x520) < iVar10)) {
    return 1;
  }
  if (*(char *)(param_1 + 0x592) != '\0') {
    iVar9 = FUN_1004f1a74(0);
    iVar12 = iVar9 - iVar12;
  }
  if ((-1 < *(int *)(param_1 + 0x524)) && (iVar12 < *(int *)(param_1 + 0x524))) {
    return 1;
  }
  if ((-1 < *(int *)(param_1 + 0x528)) && (*(int *)(param_1 + 0x528) < iVar12)) {
    return 1;
  }
  if (*(char *)(param_1 + 0x593) != '\0') {
    iVar9 = FUN_1004f1a74(0);
    lVar13 = (long)(iVar9 - (int)lVar13);
  }
  if ((-1 < *(int *)(param_1 + 0x52c)) && (lVar13 < *(int *)(param_1 + 0x52c))) {
    return 1;
  }
  if ((-1 < *(int *)(param_1 + 0x530)) && (*(int *)(param_1 + 0x530) < lVar13)) {
    return 1;
  }
  if ((-1 < *(int *)(param_1 + 0x534)) && (iVar11 < *(int *)(param_1 + 0x534))) {
    return 1;
  }
  if ((-1 < *(int *)(param_1 + 0x538)) && (*(int *)(param_1 + 0x538) < iVar11)) {
    return 1;
  }
  iVar9 = (int)uVar25;
  if (*(char *)(param_1 + 0x594) == '\0') {
    lVar13 = (long)iVar9;
  }
  else {
    iVar10 = FUN_1004f1a74(0);
    lVar13 = (long)((float)(iVar10 - iVar9) * 1.1574074e-05);
  }
  if ((-1 < *(int *)(param_1 + 0x53c)) && (lVar13 < *(int *)(param_1 + 0x53c))) {
    return 1;
  }
  if ((-1 < *(int *)(param_1 + 0x540)) && (*(int *)(param_1 + 0x540) < lVar13)) {
    return 1;
  }
  if ((-1 < *(int *)(param_1 + 0x544)) && (iVar6 < *(int *)(param_1 + 0x544))) {
    return 1;
  }
  if ((-1 < *(int *)(param_1 + 0x548)) && (*(int *)(param_1 + 0x548) < iVar6)) {
    return 1;
  }
  if ((((*(int *)(param_1 + 0x54c) < 0) && (*(int *)(param_1 + 0x550) < 0)) &&
      (*(int *)(param_1 + 0x55c) < 0)) && (*(int *)(param_1 + 0x560) < 0)) {
    iVar9 = 0;
    iVar10 = 0;
  }
  else {
    FUN_10015d3ec();
    iVar10 = FUN_1001636b0();
    iVar9 = FUN_10034bf10(1);
    iVar9 = iVar9 - iVar10;
  }
  if (((*(int *)(param_1 + 0x554) < 0) && (*(int *)(param_1 + 0x558) < 0)) &&
     ((*(int *)(param_1 + 0x564) < 0 && (*(int *)(param_1 + 0x568) < 0)))) {
    iVar12 = 0;
    iVar11 = 0;
  }
  else {
    uVar25 = FUN_10015d3ec();
    iVar11 = FUN_1001666cc(uVar25,1);
    FUN_10032c190();
    iVar12 = FUN_10032da44();
    iVar12 = iVar12 - iVar11;
  }
  if ((-1 < *(int *)(param_1 + 0x54c)) && (iVar10 < *(int *)(param_1 + 0x54c))) {
    return 1;
  }
  if ((-1 < *(int *)(param_1 + 0x550)) && (*(int *)(param_1 + 0x550) < iVar10)) {
    return 1;
  }
  if ((-1 < *(int *)(param_1 + 0x554)) && (iVar11 < *(int *)(param_1 + 0x554))) {
    return 1;
  }
  if ((-1 < *(int *)(param_1 + 0x558)) && (*(int *)(param_1 + 0x558) < iVar11)) {
    return 1;
  }
  if ((-1 < *(int *)(param_1 + 0x55c)) && (iVar9 < *(int *)(param_1 + 0x55c))) {
    return 1;
  }
  if ((-1 < *(int *)(param_1 + 0x560)) && (*(int *)(param_1 + 0x560) < iVar9)) {
    return 1;
  }
  if ((-1 < *(int *)(param_1 + 0x564)) && (iVar12 < *(int *)(param_1 + 0x564))) {
    return 1;
  }
  if ((-1 < *(int *)(param_1 + 0x568)) && (*(int *)(param_1 + 0x568) < iVar12)) {
    return 1;
  }
  if (*(char *)(param_1 + 0x58e) != '\0') {
    lVar13 = FUN_10015d3ec();
    uVar14 = FUN_100131560();
    if (((uVar14 & 1) == 0) && (*(char *)(lVar13 + 0x5670) == '\0')) {
      return 1;
    }
  }
  if (-1 < *(int *)(param_1 + 0x56c)) {
    lVar13 = FUN_1000fd608();
    if (lVar13 == 0) {
      return 1;
    }
    lVar13 = FUN_1000fd608();
    if (*(uint *)(lVar13 + 0x60) < *(uint *)(param_1 + 0x56c)) {
      return 1;
    }
  }
  if (-1 < *(int *)(param_1 + 0x570)) {
    lVar13 = FUN_1000fd608();
    if (lVar13 == 0) {
      return 1;
    }
    lVar13 = FUN_1000fd608();
    if (*(uint *)(param_1 + 0x570) < *(uint *)(lVar13 + 0x60)) {
      return 1;
    }
  }
  if (*(int *)(param_1 + 0x4d8) != 0) {
    lVar13 = FUN_10015d3ec();
    uVar14 = *(ulong *)(lVar13 + 0x5528);
    if (-1 < (char)*(byte *)(lVar13 + 0x5537)) {
      uVar14 = (ulong)*(byte *)(lVar13 + 0x5537);
    }
    if (uVar14 == 0) {
      return 1;
    }
    if (*(int *)(param_1 + 0x4d8) == 0) {
      return 1;
    }
    puVar23 = *(undefined8 **)(param_1 + 0x4e0);
    do {
      lVar13 = FUN_10015d3ec(lVar13);
      bVar7 = *(byte *)((long)puVar23 + 0x17);
      bVar27 = *(byte *)(lVar13 + 0x5537);
      sVar4 = puVar23[1];
      if (-1 < (char)bVar7) {
        sVar4 = (ulong)bVar7;
      }
      sVar26 = *(size_t *)(lVar13 + 0x5528);
      if (-1 < (char)bVar27) {
        sVar26 = (ulong)bVar27;
      }
      if (sVar4 == sVar26) {
        puVar2 = (void *)*puVar23;
        if (-1 < (char)bVar7) {
          puVar2 = puVar23;
        }
        pbVar1 = *(byte **)(lVar13 + 0x5520);
        if (-1 < (char)bVar27) {
          pbVar1 = (byte *)(lVar13 + 0x5520);
        }
        if ((char)bVar7 < '\0') {
          if ((sVar4 == 0) || (iVar9 = _memcmp(puVar2,pbVar1,sVar4), iVar9 == 0)) break;
        }
        else {
          if (sVar4 == 0) break;
          if ((uint)*pbVar1 == ((uint)(void *)*puVar23 & 0xff)) {
            uVar14 = 1;
            do {
              if (bVar7 == uVar14) goto LAB_10022c980;
              pbVar21 = (byte *)((long)puVar23 + uVar14);
              pbVar19 = pbVar1 + uVar14;
              uVar14 = uVar14 + 1;
            } while (*pbVar21 == *pbVar19);
          }
        }
      }
      puVar23 = puVar23 + 3;
      lVar13 = 1;
      if (puVar23 ==
          (undefined8 *)(*(long *)(param_1 + 0x4e0) + (ulong)*(uint *)(param_1 + 0x4d8) * 0x18)) {
        return 1;
      }
    } while( true );
  }
LAB_10022c980:
  uVar14 = *(ulong *)(param_1 + 0x4b8);
  if (-1 < (char)*(byte *)(param_1 + 0x4c7)) {
    uVar14 = (ulong)*(byte *)(param_1 + 0x4c7);
  }
  if (uVar14 != 0) {
    lVar13 = FUN_10031d43c();
    if (lVar13 == 0) {
      return 1;
    }
    piVar15 = (int *)FUN_10031dae8(lVar13);
    if (*piVar15 == 0) {
      return 1;
    }
    uVar14 = 0;
    bVar8 = false;
    do {
      lVar16 = FUN_10031dae8(lVar13);
      uVar5 = *(uint *)(*(long *)(lVar16 + 8) + uVar14 * 0x98 + 0x58);
      bVar7 = *(byte *)(param_1 + 0x4c7);
      sVar4 = *(size_t *)(param_1 + 0x4b8);
      if (-1 < (char)bVar7) {
        sVar4 = (ulong)bVar7;
      }
      pbVar1 = *(byte **)(param_1 + 0x4b0);
      if (-1 < (char)bVar7) {
        pbVar1 = (byte *)(param_1 + 0x4b0);
      }
      if (uVar5 != 0) {
        uVar28 = 0;
        lVar16 = *(long *)(*(long *)(lVar16 + 8) + uVar14 * 0x98 + 0x60);
        pbVar21 = (byte *)(lVar16 + 1);
        do {
          puVar23 = (undefined8 *)(lVar16 + uVar28 * 0x28);
          bVar7 = *(byte *)((long)puVar23 + 0x17);
          uVar18 = (ulong)bVar7;
          sVar26 = puVar23[1];
          if (-1 < (char)bVar7) {
            sVar26 = uVar18;
          }
          if (sVar26 == sVar4) {
            if ((char)bVar7 < '\0') {
              if ((sVar4 == 0) || (iVar9 = _memcmp((void *)*puVar23,pbVar1,sVar4), iVar9 == 0)) {
LAB_10022cab4:
                uVar28 = uVar28 & 0xffffffff;
                if ((*(char *)(param_1 + 0x58c) != '\0') &&
                   (*(float *)(lVar16 + uVar28 * 0x28 + 0x1c) < 0.0)) {
                  return 1;
                }
                if ((-1 < *(int *)(param_1 + 0x574)) &&
                   (*(float *)(lVar16 + uVar28 * 0x28 + 0x1c) < (float)*(int *)(param_1 + 0x574))) {
                  return 1;
                }
                if ((-1 < *(int *)(param_1 + 0x578)) &&
                   ((float)*(int *)(param_1 + 0x578) < *(float *)(lVar16 + uVar28 * 0x28 + 0x1c))) {
                  return 1;
                }
                if (*(char *)(param_1 + 0x58d) != '\0') {
                  iVar9 = *(int *)(lVar16 + uVar28 * 0x28 + 0x20);
                  if (iVar9 < 0) {
                    return 1;
                  }
                  if (*(int *)(lVar16 + uVar28 * 0x28 + 0x24) < iVar9) {
                    return 1;
                  }
                }
                if ((-1 < *(int *)(param_1 + 0x57c)) &&
                   (iVar9 = *(int *)(lVar16 + uVar28 * 0x28 + 0x20),
                   0 < iVar9 && iVar9 < *(int *)(param_1 + 0x57c))) {
                  return 1;
                }
                if (-1 < *(int *)(param_1 + 0x580)) {
                  iVar9 = *(int *)(lVar16 + uVar28 * 0x28 + 0x20);
                  if (iVar9 < 0) {
                    return 1;
                  }
                  if (*(int *)(param_1 + 0x580) < iVar9) {
                    return 1;
                  }
                }
                if (((-1.0 < *(float *)(param_1 + 0x584)) &&
                    (iVar9 = *(int *)(lVar16 + uVar28 * 0x28 + 0x20), -1 < iVar9)) &&
                   ((float)iVar9 / (float)*(int *)(lVar16 + uVar28 * 0x28 + 0x24) <
                    *(float *)(param_1 + 0x584))) {
                  return 1;
                }
                if (*(float *)(param_1 + 0x588) <= -1.0) {
                  bVar8 = true;
                }
                else {
                  iVar9 = *(int *)(lVar16 + uVar28 * 0x28 + 0x20);
                  if (iVar9 < 0) {
                    return 1;
                  }
                  bVar8 = true;
                  if (*(float *)(param_1 + 0x588) <
                      (float)iVar9 / (float)*(int *)(lVar16 + uVar28 * 0x28 + 0x24)) {
                    return 1;
                  }
                }
                break;
              }
            }
            else {
              if (sVar4 == 0) goto LAB_10022cab4;
              pbVar20 = pbVar21;
              pbVar19 = pbVar1;
              if ((uint)*pbVar1 == ((uint)(void *)*puVar23 & 0xff)) {
                do {
                  uVar18 = uVar18 - 1;
                  pbVar19 = pbVar19 + 1;
                  if (uVar18 == 0) goto LAB_10022cab4;
                  bVar7 = *pbVar20;
                  pbVar20 = pbVar20 + 1;
                } while (bVar7 == *pbVar19);
              }
            }
          }
          uVar28 = uVar28 + 1;
          pbVar21 = pbVar21 + 0x28;
        } while (uVar28 != uVar5);
      }
      uVar14 = uVar14 + 1;
      puVar17 = (uint *)FUN_10031dae8(lVar13);
    } while (uVar14 < *puVar17);
    if (!bVar8) {
      return 1;
    }
  }
  bVar27 = DAT_101d911a8._7_1_;
  sVar26 = DAT_101d911a0;
  pbVar1 = (byte *)(param_1 + 0x330);
  bVar7 = *(byte *)(param_1 + 0x347);
  uVar14 = (ulong)bVar7;
  sVar4 = *(size_t *)(param_1 + 0x338);
  if (-1 < (char)bVar7) {
    sVar4 = uVar14;
  }
  sVar24 = (size_t)DAT_101d911a8._7_1_;
  sVar3 = DAT_101d911a0;
  if (-1 < (char)DAT_101d911a8._7_1_) {
    sVar3 = sVar24;
  }
  if (sVar4 == sVar3) {
    pbVar21 = *(byte **)pbVar1;
    if (-1 < (char)bVar7) {
      pbVar21 = pbVar1;
    }
    pbVar19 = DAT_101d91198;
    if (-1 < (char)DAT_101d911a8._7_1_) {
      pbVar19 = (byte *)&DAT_101d91198;
    }
    if ((char)bVar7 < '\0') {
      if ((sVar4 != 0) && (iVar9 = _memcmp(pbVar21,pbVar19,sVar4), iVar9 != 0)) goto LAB_10022ccb4;
    }
    else if (sVar4 != 0) {
      if ((uint)*pbVar19 == ((uint)*(byte **)pbVar1 & 0xff)) {
        pbVar21 = (byte *)(param_1 + 0x331);
        do {
          uVar14 = uVar14 - 1;
          pbVar19 = pbVar19 + 1;
          if (uVar14 == 0) goto LAB_10022cea0;
          bVar7 = *pbVar21;
          pbVar21 = pbVar21 + 1;
        } while (bVar7 == *pbVar19);
      }
      goto LAB_10022ccb4;
    }
  }
  else {
LAB_10022ccb4:
    lVar13 = FUN_10031d43c();
    if (lVar13 == 0) {
      bVar8 = false;
    }
    else {
      piVar15 = (int *)FUN_10031dae8(lVar13);
      if (*piVar15 == 0) {
        bVar8 = false;
      }
      else {
        uVar14 = 0;
        bVar8 = false;
        do {
          lVar16 = FUN_10031dae8(lVar13);
          uVar5 = *(uint *)(*(long *)(lVar16 + 8) + uVar14 * 0x98 + 0x68);
          bVar7 = *(byte *)(param_1 + 0x347);
          sVar4 = *(size_t *)(param_1 + 0x338);
          if (-1 < (char)bVar7) {
            sVar4 = (ulong)bVar7;
          }
          pbVar21 = *(byte **)(param_1 + 0x330);
          if (-1 < (char)bVar7) {
            pbVar21 = pbVar1;
          }
          if (uVar5 != 0) {
            uVar28 = 0;
            lVar16 = *(long *)(*(long *)(lVar16 + 8) + uVar14 * 0x98 + 0x70);
            pbVar19 = (byte *)(lVar16 + 1);
            do {
              puVar23 = (undefined8 *)(lVar16 + uVar28 * 0x28);
              bVar7 = *(byte *)((long)puVar23 + 0x17);
              uVar18 = (ulong)bVar7;
              sVar26 = puVar23[1];
              if (-1 < (char)bVar7) {
                sVar26 = uVar18;
              }
              if (sVar26 == sVar4) {
                if ((char)bVar7 < '\0') {
                  if ((sVar4 == 0) || (iVar9 = _memcmp((void *)*puVar23,pbVar21,sVar4), iVar9 == 0))
                  {
LAB_10022cdc4:
                    uVar28 = uVar28 & 0xffffffff;
                    if ((-1 < *(int *)(param_1 + 0x348)) &&
                       (*(int *)(lVar16 + uVar28 * 0x28 + 0x18) < *(int *)(param_1 + 0x348))) {
                      return 1;
                    }
                    if ((-1 < *(int *)(param_1 + 0x34c)) &&
                       (*(int *)(param_1 + 0x34c) < *(int *)(lVar16 + uVar28 * 0x28 + 0x18))) {
                      return 1;
                    }
                    if ((-1 < *(int *)(param_1 + 0x350)) &&
                       (*(int *)(lVar16 + uVar28 * 0x28 + 0x1c) < *(int *)(param_1 + 0x350))) {
                      return 1;
                    }
                    if (*(int *)(param_1 + 0x354) < 0) {
                      bVar8 = true;
                    }
                    else {
                      bVar8 = true;
                      if (*(int *)(param_1 + 0x354) < *(int *)(lVar16 + uVar28 * 0x28 + 0x1c)) {
                        return 1;
                      }
                    }
                    break;
                  }
                }
                else {
                  if (sVar4 == 0) goto LAB_10022cdc4;
                  pbVar22 = pbVar19;
                  pbVar20 = pbVar21;
                  if ((uint)*pbVar21 == ((uint)(void *)*puVar23 & 0xff)) {
                    do {
                      uVar18 = uVar18 - 1;
                      pbVar20 = pbVar20 + 1;
                      if (uVar18 == 0) goto LAB_10022cdc4;
                      bVar7 = *pbVar22;
                      pbVar22 = pbVar22 + 1;
                    } while (bVar7 == *pbVar20);
                  }
                }
              }
              uVar28 = uVar28 + 1;
              pbVar19 = pbVar19 + 0x28;
            } while (uVar28 != uVar5);
          }
          uVar14 = uVar14 + 1;
          puVar17 = (uint *)FUN_10031dae8(lVar13);
        } while (uVar14 < *puVar17);
      }
    }
    if ((*(int *)(param_1 + 0x358) == 1) && (!bVar8)) {
      return 1;
    }
    if ((*(int *)(param_1 + 0x358) == 2) && (bVar8)) {
      return 1;
    }
    sVar24 = (size_t)DAT_101d911a8._7_1_;
    sVar26 = DAT_101d911a0;
    bVar27 = DAT_101d911a8._7_1_;
  }
LAB_10022cea0:
  pbVar1 = (byte *)(param_1 + 0x298);
  bVar7 = *(byte *)(param_1 + 0x2af);
  uVar14 = (ulong)bVar7;
  sVar4 = *(size_t *)(param_1 + 0x2a0);
  if (-1 < (char)bVar7) {
    sVar4 = uVar14;
  }
  if (-1 < (char)bVar27) {
    sVar26 = sVar24;
  }
  if (sVar4 == sVar26) {
    pbVar21 = *(byte **)pbVar1;
    if (-1 < (char)bVar7) {
      pbVar21 = pbVar1;
    }
    pbVar19 = DAT_101d91198;
    if (-1 < (char)bVar27) {
      pbVar19 = (byte *)&DAT_101d91198;
    }
    if ((char)bVar7 < '\0') {
      if ((sVar4 == 0) || (iVar9 = _memcmp(pbVar21,pbVar19,sVar4), iVar9 == 0)) goto LAB_10022d080;
    }
    else {
      if (sVar4 == 0) goto LAB_10022d080;
      if ((uint)*pbVar19 == ((uint)*(byte **)pbVar1 & 0xff)) {
        pbVar21 = (byte *)(param_1 + 0x299);
        do {
          uVar14 = uVar14 - 1;
          pbVar19 = pbVar19 + 1;
          if (uVar14 == 0) goto LAB_10022d080;
          bVar7 = *pbVar21;
          pbVar21 = pbVar21 + 1;
        } while (bVar7 == *pbVar19);
      }
    }
  }
  lVar13 = FUN_10031d43c();
  if ((lVar13 != 0) && (piVar15 = (int *)FUN_10031dae8(lVar13), *piVar15 != 0)) {
    uVar14 = 0;
    bVar8 = false;
    do {
      lVar16 = FUN_10031dae8(lVar13);
      uVar5 = *(uint *)(*(long *)(lVar16 + 8) + uVar14 * 0x98 + 0x78);
      bVar7 = *(byte *)(param_1 + 0x2af);
      sVar4 = *(size_t *)(param_1 + 0x2a0);
      if (-1 < (char)bVar7) {
        sVar4 = (ulong)bVar7;
      }
      pbVar21 = *(byte **)(param_1 + 0x298);
      if (-1 < (char)bVar7) {
        pbVar21 = pbVar1;
      }
      if (uVar5 != 0) {
        uVar28 = 0;
        lVar16 = *(long *)(*(long *)(lVar16 + 8) + uVar14 * 0x98 + 0x80);
        pbVar19 = (byte *)(lVar16 + 1);
        do {
          puVar23 = (undefined8 *)(lVar16 + uVar28 * 0x28);
          bVar7 = *(byte *)((long)puVar23 + 0x17);
          uVar18 = (ulong)bVar7;
          sVar26 = puVar23[1];
          if (-1 < (char)bVar7) {
            sVar26 = uVar18;
          }
          if (sVar26 == sVar4) {
            if ((char)bVar7 < '\0') {
              if ((sVar4 == 0) || (iVar9 = _memcmp((void *)*puVar23,pbVar21,sVar4), iVar9 == 0)) {
LAB_10022d050:
                bVar8 = true;
                break;
              }
            }
            else {
              if (sVar4 == 0) goto LAB_10022d050;
              pbVar22 = pbVar19;
              pbVar20 = pbVar21;
              if ((uint)*pbVar21 == ((uint)(void *)*puVar23 & 0xff)) {
                do {
                  uVar18 = uVar18 - 1;
                  pbVar20 = pbVar20 + 1;
                  if (uVar18 == 0) goto LAB_10022d050;
                  bVar7 = *pbVar22;
                  pbVar22 = pbVar22 + 1;
                } while (bVar7 == *pbVar20);
              }
            }
          }
          uVar28 = uVar28 + 1;
          pbVar19 = pbVar19 + 0x28;
        } while (uVar28 != uVar5);
      }
      uVar14 = uVar14 + 1;
      puVar17 = (uint *)FUN_10031dae8(lVar13);
    } while (uVar14 < *puVar17);
    if (bVar8) goto LAB_10022d080;
  }
  if (*(char *)(param_1 + 0x321) != '\0') {
    return 1;
  }
LAB_10022d080:
  if (*(int *)(param_1 + 0x374) == 0) {
    return 0;
  }
  iVar9 = FUN_1004e2fac(&DAT_101d911b0,*(undefined4 *)(param_1 + 0x368),
                        *(undefined4 *)(param_1 + 0x36c),*(undefined4 *)(param_1 + 0x370));
  if (iVar9 == 0) {
    if (*(int *)(param_1 + 0x374) != 2) {
      return 0;
    }
  }
  else if (*(int *)(param_1 + 0x374) != 1) {
    return 0;
  }
  return 1;
}




ulong FUN_10022d0c4(long param_1)

{
  size_t sVar1;
  size_t sVar2;
  undefined8 *puVar3;
  byte bVar4;
  byte bVar5;
  bool bVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  byte *pbVar11;
  byte *pbVar12;
  void *pvVar13;
  
  uVar8 = *(ulong *)(param_1 + 0x488);
  if (-1 < (char)*(byte *)(param_1 + 0x497)) {
    uVar8 = (ulong)*(byte *)(param_1 + 0x497);
  }
  if (uVar8 != 0) {
    uVar8 = *(ulong *)(param_1 + 0x4a0);
    if (-1 < (char)*(byte *)(param_1 + 0x4af)) {
      uVar8 = (ulong)*(byte *)(param_1 + 0x4af);
    }
    if (uVar8 != 0) {
      pbVar11 = (byte *)(param_1 + 0x498);
      if ((uVar8 == 4) &&
         (uVar8 = std::string::compare((ulong)pbVar11,0,(char *)0xffffffffffffffff,0x1013db1dd),
         (int)uVar8 == 0)) {
        return uVar8;
      }
      lVar9 = FUN_1001340c8();
      lVar10 = FUN_10022d41c(lVar9 + 8,param_1 + 0x480);
      if (lVar9 + 0x10 != lVar10) {
        bVar4 = *(byte *)(lVar10 + 0x4f);
        uVar8 = (ulong)bVar4;
        sVar1 = *(size_t *)(lVar10 + 0x40);
        if (-1 < (char)bVar4) {
          sVar1 = uVar8;
        }
        bVar5 = *(byte *)(param_1 + 0x4af);
        sVar2 = *(size_t *)(param_1 + 0x4a0);
        if (-1 < (char)bVar5) {
          sVar2 = (ulong)bVar5;
        }
        if (sVar1 == sVar2) {
          pvVar13 = *(void **)(lVar10 + 0x38);
          puVar3 = pvVar13;
          if (-1 < (char)bVar4) {
            puVar3 = (undefined8 *)(lVar10 + 0x38);
          }
          pbVar12 = *(byte **)pbVar11;
          if (-1 < (char)bVar5) {
            pbVar12 = pbVar11;
          }
          if ((char)bVar4 < '\0') {
            if (sVar1 == 0) {
              return 0;
            }
            iVar7 = _memcmp(puVar3,pbVar12,sVar1);
            bVar6 = iVar7 == 0;
          }
          else {
            if (sVar1 == 0) {
              return 0;
            }
            if ((uint)*pbVar12 != ((uint)pvVar13 & 0xff)) {
              return 1;
            }
            pbVar11 = (byte *)(lVar10 + 0x39);
            do {
              uVar8 = uVar8 - 1;
              pbVar12 = pbVar12 + 1;
              if (uVar8 == 0) break;
              bVar4 = *pbVar11;
              pbVar11 = pbVar11 + 1;
            } while (bVar4 == *pbVar12);
            bVar6 = uVar8 == 0;
          }
          return (ulong)!bVar6;
        }
      }
      return 1;
    }
  }
  return 0;
}




undefined8 FUN_10022d220(long param_1)

{
  long lVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  uint uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  
  lVar4 = FUN_10031f280();
  if (lVar4 == 0) {
    uVar6 = 1;
  }
  else {
    uVar7 = *(uint *)(param_1 + 8);
    if (uVar7 == 0) {
LAB_10022d30c:
      uVar6 = 0;
    }
    else {
      uVar8 = 0;
      uVar6 = 0;
      lVar5 = *(long *)(param_1 + 0x10);
      do {
        if (*(int *)(lVar5 + uVar8 * 0x30 + 8) != 0) {
          lVar9 = 0;
          uVar10 = 0;
          do {
            lVar1 = *(long *)(lVar5 + uVar8 * 0x30 + 0x10) + lVar9;
            if (*(char *)(lVar1 + 0x5f) < '\0') {
              if (*(long *)(lVar1 + 0x50) != 0) goto LAB_10022d298;
            }
            else if (*(char *)(lVar1 + 0x5f) != '\0') {
LAB_10022d298:
              iVar3 = FUN_10031f7e4(lVar4,lVar1 + 0x48);
              lVar5 = *(long *)(param_1 + 0x10);
              if ((iVar3 != 0) &&
                 (((iVar2 = *(int *)(*(long *)(lVar5 + uVar8 * 0x30 + 0x10) + lVar9 + 0xc0),
                   iVar2 == 2 || (iVar3 == 1 && iVar2 == 0)) || (iVar3 == 2 && iVar2 == 1))))
              goto LAB_10022d30c;
              uVar6 = 1;
            }
            uVar10 = uVar10 + 1;
            lVar9 = lVar9 + 0xd0;
          } while (uVar10 < *(uint *)(lVar5 + uVar8 * 0x30 + 8));
          uVar7 = *(uint *)(param_1 + 8);
        }
        uVar8 = uVar8 + 1;
      } while (uVar8 < uVar7);
    }
  }
  return uVar6;
}




void FUN_10022d330(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = FUN_100644b2c(param_2);
  if (lVar1 != 0) {
    lVar2 = *(long *)(param_1 + 0x3d0);
    if (lVar2 != lVar1) {
      if (lVar2 != 0) {
        FUN_1002017ac(lVar2,0);
      }
      *(long *)(param_1 + 0x3d0) = lVar1;
      FUN_1002017ac(lVar1,1);
      return;
    }
    FUN_1002017ac(lVar1,0);
    *(undefined8 *)(param_1 + 0x3d0) = 0;
  }
  return;
}




void FUN_10022d39c(void)

{
  return;
}




void FUN_10022d3a0(uint *param_1,uint param_2)

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




long * FUN_10022d41c(long param_1,undefined8 param_2)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  
  plVar3 = (long *)(param_1 + 8);
  plVar5 = (long *)*plVar3;
  plVar4 = plVar3;
  if (plVar5 != (long *)0x0) {
    do {
      iVar2 = FUN_10022d49c(plVar5 + 4,param_2);
      lVar1 = 8;
      if (iVar2 == 0) {
        lVar1 = 0;
        plVar4 = plVar5;
      }
      plVar5 = *(long **)((long)plVar5 + lVar1);
    } while (plVar5 != (long *)0x0);
    if ((plVar4 != plVar3) && (iVar2 = FUN_10022d49c(param_2,plVar4 + 4), iVar2 == 0)) {
      return plVar4;
    }
  }
  return plVar3;
}




uint FUN_10022d49c(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  ulong uVar2;
  size_t sVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  byte bVar6;
  byte bVar7;
  uint uVar8;
  
  bVar6 = *(byte *)((long)param_2 + 0x17);
  uVar1 = param_2[1];
  if (-1 < (char)bVar6) {
    uVar1 = (ulong)bVar6;
  }
  bVar7 = *(byte *)((long)param_1 + 0x17);
  uVar2 = param_1[1];
  if (-1 < (char)bVar7) {
    uVar2 = (ulong)bVar7;
  }
  sVar3 = uVar1;
  if (uVar2 <= uVar1) {
    sVar3 = uVar2;
  }
  if (sVar3 != 0) {
    puVar4 = (void *)*param_1;
    if (-1 < (char)bVar7) {
      puVar4 = param_1;
    }
    puVar5 = (void *)*param_2;
    if (-1 < (char)bVar6) {
      puVar5 = param_2;
    }
    uVar8 = _memcmp(puVar4,puVar5,sVar3);
    if (uVar8 != 0) goto LAB_10022d50c;
  }
  uVar8 = 0;
  if (uVar2 < uVar1) {
    uVar8 = 0xffffffff;
  }
LAB_10022d50c:
  return uVar8 >> 0x1f;
}




long * FUN_10022d51c(long *param_1)

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
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  long *plVar18;
  long *plVar19;
  long *plVar20;
  long *plVar21;
  long lVar22;
  undefined4 uVar23;
  undefined8 *puVar24;
  ulong uVar25;
  undefined8 uVar26;
  uint uVar27;
  long lVar28;
  code *local_b8;
  long *plStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined4 local_90;
  
  puVar24 = (undefined8 *)FUN_100269da8();
  *puVar24 = &PTR_thunk_FUN_10022e36c_101477268;
  thunk_FUN_100650e64();
  plVar1 = param_1 + 0x3f;
  thunk_FUN_10019468c(plVar1,0);
  plVar2 = param_1 + 0x1c0;
  FUN_1006421a8(plVar2);
  param_1[0x1c0] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  thunk_FUN_100652c08();
  plVar3 = param_1 + 0x1ef;
  thunk_FUN_1006543ec(plVar3);
  plVar4 = param_1 + 0x223;
  FUN_10053077c(plVar4,0);
  plVar5 = param_1 + 0x2ca;
  thunk_FUN_100652c08();
  plVar6 = param_1 + 0x2e8;
  FUN_1006421a8(plVar6);
  param_1[0x2e8] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar7 = param_1 + 0x2f9;
  thunk_FUN_100652c08();
  lVar28 = 0;
  do {
    thunk_FUN_100650e64((long)(param_1 + 0x317) + lVar28);
    lVar28 = lVar28 + 0x130;
  } while (lVar28 != 0x5f0);
  plVar8 = param_1 + 0x3d5;
  thunk_FUN_100650e64();
  param_1[0x3fc] = 0;
  param_1[0x3fb] = 0;
  plVar9 = param_1 + 0x3fd;
  thunk_FUN_100650e64(plVar9);
  plVar10 = param_1 + 0x423;
  thunk_FUN_100652c08();
  plVar11 = param_1 + 0x441;
  thunk_FUN_100650e64();
  plVar12 = param_1 + 0x467;
  thunk_FUN_100181304(plVar12,0);
  plVar13 = param_1 + 0x71e;
  thunk_FUN_100181304(plVar13,0);
  plVar14 = param_1 + 0x9d5;
  thunk_FUN_100650e64();
  plVar15 = param_1 + 0x9fb;
  thunk_FUN_100652c08();
  plVar16 = param_1 + 0xa19;
  thunk_FUN_100652c08();
  plVar17 = param_1 + 0xa37;
  thunk_FUN_1006543ec();
  plVar18 = param_1 + 0xa6b;
  FUN_1006421a8(plVar18);
  param_1[0xa6b] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar19 = param_1 + 0xa7c;
  thunk_FUN_100181304(plVar19,0);
  plVar20 = param_1 + 0xd33;
  thunk_FUN_100181304(plVar20,0);
  plVar21 = param_1 + 0xfea;
  thunk_FUN_100181304(plVar21,0);
  thunk_FUN_1001bc39c(param_1 + 0x12a1);
  param_1[0x20b1] = -0xbbe70000;
  param_1[0x20b3] = 0;
  param_1[0x20b4] = 0;
  param_1[0x20b2] = 0;
  *(undefined4 *)(param_1 + 0x20b5) = 1;
  FUN_10003330c(param_1 + 0x20b6,&DAT_101d91198);
  *(undefined2 *)(param_1 + 0x20b9) = 0x100;
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  FUN_100642bd8(plVar2,plVar3,1);
  FUN_100642bd8(plVar3,plVar4,1);
  FUN_100642bd8(plVar4,plVar5,1);
  FUN_1005308f8(plVar4,puVar24 + 0x19,1);
  FUN_1005308f8(plVar4,plVar1,1);
  FUN_1005308f8(plVar4,plVar6,1);
  FUN_100642bd8(plVar6,plVar7,1);
  lVar28 = 0;
  do {
    FUN_100642bd8(plVar6,(long)param_1 + lVar28 + 0x18b8,1);
    lVar28 = lVar28 + 0x130;
  } while (lVar28 != 0x5f0);
  FUN_1005308f8(plVar4,plVar9,1);
  FUN_1005308f8(plVar4,plVar10,1);
  FUN_1005308f8(plVar4,plVar11,1);
  FUN_1005308f8(plVar4,plVar14,1);
  FUN_1005308f8(plVar4,plVar15,1);
  FUN_1005308f8(plVar4,plVar12,1);
  FUN_1005308f8(plVar4,plVar13,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar16,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar17,1);
  FUN_100642bd8(plVar17,plVar18,1);
  FUN_100642bd8(plVar18,plVar19,1);
  uVar25 = FUN_100131220();
  if ((uVar25 & 1) != 0) {
    FUN_100642bd8(plVar18,plVar20,1);
    FUN_100642bd8(plVar18,plVar21,1);
  }
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x12a1,1);
  FUN_100651594(puVar24 + 0x19,PTR_s_build___Fonts_NorthwoodHigh_Regu_10184e288,&DAT_10115a168);
  *(uint *)((long)param_1 + 0x14c) = *(uint *)((long)param_1 + 0x14c) & 0xffffffef;
  FUN_10019495c(plVar1,PTR_s_build___Fonts_Brandon_Light_48_f_10184e1c0);
  FUN_100652cac(param_1 + 0x1d1,PTR_s_build___MenuPartsCommon_tga_101854970,"black_background");
  uVar27 = *(uint *)((long)param_1 + 0xf0c);
  if ((uVar27 & 0x7f80) != 0x2600) {
    *(uint *)((long)param_1 + 0xf0c) = uVar27 & 0xffff8000 | uVar27 & 0x7f | 0x2600;
    FUN_1000200a0(param_1 + 0x1d1);
  }
  FUN_100652cac(plVar5,PTR_s_build___MenuPartsCommon_tga_101854970,"vert_glass_shadow");
  FUN_100652dd4(plVar5,&DAT_10115a164,2);
  uVar27 = *(uint *)((long)param_1 + 0x16d4);
  if ((uVar27 & 0x7f80) != 0x2600) {
    *(uint *)((long)param_1 + 0x16d4) = uVar27 & 0xffff8000 | uVar27 & 0x7f | 0x2600;
    FUN_1000200a0(plVar5);
  }
  FUN_100651594(plVar9,PTR_s_build___Fonts_Brandon_Regular_36_10184e1f0,&DAT_10115a168);
  uVar26 = FUN_1004e0150("MENU_PROFILE_GUILD_HOW_TO_ADD",0);
  FUN_1006513c0(plVar9,uVar26);
  uVar27 = *(uint *)((long)param_1 + 0x206c);
  if ((uVar27 & 0x7f80) != 0x2600) {
    *(uint *)((long)param_1 + 0x206c) = uVar27 & 0xffff8000 | uVar27 & 0x7f | 0x2600;
    FUN_1000200a0(plVar9);
  }
  FUN_100652cac(plVar10,PTR_s_build___MenuPartsCommon_tga_101854970,"generic_guild_outline");
  uVar27 = *(uint *)((long)param_1 + 0x219c);
  if ((uVar27 & 0x7f80) != 0x3300) {
    *(uint *)((long)param_1 + 0x219c) = uVar27 & 0xffff8000 | uVar27 & 0x7f | 0x3300;
    FUN_1000200a0(plVar10);
  }
  if ((*(float *)(param_1 + 0x42c) != 0.9) || (*(float *)((long)param_1 + 0x2164) != 0.9)) {
    param_1[0x42c] = 0x3f6666663f666666;
    FUN_1000200a0(plVar10);
  }
  FUN_100651594(plVar11,PTR_s_build___Fonts_Brandon_Regular_36_10184e1f0,&DAT_10115a168);
  uVar26 = FUN_1004e0150("MENU_PROFILE_GUILD_MEMBER_COUNT",0);
  FUN_1006513c0(plVar11,uVar26);
  uVar27 = *(uint *)((long)param_1 + 0x228c);
  if ((uVar27 & 0x7f80) != 0x2600) {
    *(uint *)((long)param_1 + 0x228c) = uVar27 & 0xffff8000 | uVar27 & 0x7f | 0x2600;
    FUN_1000200a0(plVar11);
  }
  FUN_100651594(plVar14,PTR_s_build___Fonts_Brandon_Regular_36_10184e1f0,&DAT_10115a168);
  uVar26 = FUN_1004e0150("MENU_PROFILE_GUILD_MORE_OPTIONS",0);
  FUN_1006513c0(plVar14,uVar26);
  uVar27 = *(uint *)((long)param_1 + 0x4f2c);
  if ((uVar27 & 0x7f80) != 0xc80) {
    *(uint *)((long)param_1 + 0x4f2c) = uVar27 & 0xffff8000 | uVar27 & 0x7f | 0xc80;
    FUN_1000200a0(plVar14);
  }
  FUN_100652cac(plVar15,PTR_s_build___MenuPartsCommon_tga_101854970,"arrow_down");
  uVar27 = *(uint *)((long)param_1 + 0x505c);
  if ((uVar27 & 0x7f80) != 0xc80) {
    *(uint *)((long)param_1 + 0x505c) = uVar27 & 0xffff8000 | uVar27 & 0x7f | 0xc80;
    FUN_1000200a0(plVar15);
  }
  uVar26 = FUN_1004e0150("MENU_PROFILE_GUILD_LEAVE_GUILD",0);
  local_b8 = (code *)CONCAT44(local_b8._4_4_,0xffc0c0c0);
  FUN_1001816d4(0x42800000,0,0x447a0000,plVar12,0,uVar26,&local_b8,&DAT_101dc1cb8,0);
  FUN_1001b4c0c(plVar12,1);
  FUN_1001b495c(0x3e4ccccd,plVar12);
  uVar23 = DAT_101d91884;
  local_90 = DAT_101d91884;
  local_b8 = thunk_FUN_100231648;
  local_a0 = 0;
  uStack_98 = 0;
  local_a8 = 0;
  plStack_b0 = param_1;
  FUN_10001554c(param_1 + 0x468,&local_b8);
  FUN_1001b4964(plVar12,1);
  uVar26 = FUN_1004e0150("MENU_PROFILE_GUILD_EDIT_TYPE",0);
  local_b8 = (code *)CONCAT44(local_b8._4_4_,0xffc0c0c0);
  FUN_1001816d4(0x42800000,0,0x447a0000,plVar13,0,uVar26,&local_b8,&DAT_101dc1cb8,0);
  FUN_1001b4c0c(plVar13,1);
  FUN_1001b495c(0x3e4ccccd,plVar13);
  local_90 = uVar23;
  local_b8 = thunk_FUN_100231a5c;
  local_a0 = 0;
  uStack_98 = 0;
  local_a8 = 0;
  plStack_b0 = param_1;
  FUN_10001554c(param_1 + 0x71f,&local_b8);
  FUN_1001b4964(plVar13,1);
  FUN_100652cac(plVar7,PTR_s_build___MenuPartsCommon_tga_101854970,"black_background");
  if ((*(uint *)((long)param_1 + 0x184c) & 0x7f80) != 0x3f80) {
    *(uint *)((long)param_1 + 0x184c) = *(uint *)((long)param_1 + 0x184c) & 0xffff807f | 0x3f80;
    FUN_1000200a0(plVar7);
  }
  uVar26 = FUN_1004e0150("MENU_PROFILE_GUILD_JOIN_DATE",0);
  FUN_1006513c0(plVar8,uVar26);
  FUN_100651038(plVar8,PTR_s_build___Fonts_Brandon_Regular_36_10184e1f0);
  if ((*(uint *)((long)param_1 + 0x1f2c) & 0x7f80) != 0x3f80) {
    *(uint *)((long)param_1 + 0x1f2c) = *(uint *)((long)param_1 + 0x1f2c) & 0xffff807f | 0x3f80;
    FUN_1000200a0(plVar8);
  }
  lVar28 = 0;
  do {
    lVar22 = (long)param_1 + lVar28 + 0x18b8;
    FUN_100651038(lVar22,PTR_s_build___Fonts_Brandon_Regular_36_10184e1f0);
    uVar27 = *(uint *)((long)param_1 + lVar28 + 0x193c);
    if ((uVar27 & 0x7f80) != 0x3f80) {
      *(uint *)((long)param_1 + lVar28 + 0x193c) = uVar27 & 0xffff807f | 0x3f80;
      FUN_1000200a0(lVar22);
    }
    lVar28 = lVar28 + 0x130;
  } while (lVar28 != 0x5f0);
  uVar26 = FUN_1004e0150("MENU_GUILD_HEADER_FAME",0);
  (**(code **)(param_1[0x317] + 0x138))(param_1 + 0x317,uVar26);
  uVar26 = FUN_1004e0150("MENU_GUILD_HEADER_BOOSTED",0);
  (**(code **)(param_1[0x33d] + 0x138))(param_1 + 0x33d,uVar26);
  uVar26 = FUN_1004e0150("GENERIC_5V5",0);
  (**(code **)(param_1[0x363] + 0x138))(param_1 + 0x363,uVar26);
  uVar26 = FUN_1004e0150("GENERIC_3V3",0);
  (**(code **)(param_1[0x389] + 0x138))(param_1 + 0x389,uVar26);
  uVar26 = FUN_1004e0150("MENU_GUILD_HEADER_STATUS",0);
  (**(code **)(param_1[0x3af] + 0x138))(param_1 + 0x3af,uVar26);
  FUN_100530be0(plVar4,PTR_s_build___MenuPartsCommon_tga_101854970,
                PTR_s_scrollbar_button_fill_top_101854958,
                PTR_s_scrollbar_button_fill_middle_101854960,
                PTR_s_scrollbar_button_fill_bottom_101854968);
  FUN_100530adc(plVar4,0,1);
  FUN_100652cac(plVar16,PTR_s_build___MenuPartsCommon_tga_101854970,"black_background");
  uVar27 = *(uint *)((long)param_1 + 0x514c);
  if ((uVar27 & 0x7f80) != 0x6600) {
    *(uint *)((long)param_1 + 0x514c) = uVar27 & 0xffff8000 | uVar27 & 0x7f | 0x6600;
    FUN_1000200a0(plVar16);
    uVar27 = *(uint *)((long)param_1 + 0x514c);
  }
  *(uint *)((long)param_1 + 0x514c) = uVar27 & 0xfffffffb | 0x10;
  local_90 = DAT_101dbd458;
  local_b8 = FUN_10022e32c;
  plVar1 = param_1 + 0xa1a;
  local_a0 = 0;
  uStack_98 = 0;
  local_a8 = 0;
  plStack_b0 = param_1;
  FUN_10001554c(plVar1,&local_b8);
  local_90 = DAT_101dbd484;
  local_b8 = FUN_10022e32c;
  local_a0 = 0;
  uStack_98 = 0;
  local_a8 = 0;
  plStack_b0 = param_1;
  FUN_10001554c(plVar1,&local_b8);
  local_90 = DAT_101dbd45c;
  local_b8 = FUN_10022e32c;
  local_a0 = 0;
  uStack_98 = 0;
  local_a8 = 0;
  plStack_b0 = param_1;
  FUN_10001554c(plVar1,&local_b8);
  local_90 = DAT_101dbd488;
  local_b8 = FUN_10022e32c;
  local_a0 = 0;
  uStack_98 = 0;
  local_a8 = 0;
  plStack_b0 = param_1;
  FUN_10001554c(plVar1,&local_b8);
  local_90 = DAT_101dbd460;
  local_b8 = FUN_10022e32c;
  local_a0 = 0;
  uStack_98 = 0;
  local_a8 = 0;
  plStack_b0 = param_1;
  FUN_10001554c(plVar1,&local_b8);
  local_90 = DAT_101dbd48c;
  local_b8 = FUN_10022e32c;
  local_a0 = 0;
  uStack_98 = 0;
  local_a8 = 0;
  plStack_b0 = param_1;
  FUN_10001554c(plVar1,&local_b8);
  *(uint *)((long)param_1 + 0x523c) = *(uint *)((long)param_1 + 0x523c) & 0xfffffffb;
  FUN_100654488(plVar17,1);
  uVar26 = FUN_1004e0150("MENU_PROFILE_GUILD_REMOVE_MEMBER",0);
  local_b8 = (code *)CONCAT44(local_b8._4_4_,0xffc0c0c0);
  FUN_1001816d4(0x42800000,0,0x447a0000,plVar19,0,uVar26,&local_b8,&DAT_101dc1cb8,0);
  FUN_1001b4c0c(plVar19,1);
  FUN_1001b495c(0x3e4ccccd,plVar19);
  if ((*(float *)(param_1 + 0xa86) != 0.5) || (*(float *)((long)param_1 + 0x5434) != 0.5)) {
    param_1[0xa86] = (long)&DAT_3f0000003f000000;
    FUN_1000200a0(plVar19);
  }
  local_90 = uVar23;
  local_b8 = thunk_FUN_100231480;
  local_a0 = 0;
  uStack_98 = 0;
  local_a8 = 0;
  plStack_b0 = param_1;
  FUN_10001554c(param_1 + 0xa7d,&local_b8);
  uVar25 = FUN_100131220();
  if ((uVar25 & 1) != 0) {
    uVar26 = FUN_1004e0150("MENU_GUILD_MEMBERS_PROMOTE_BUTTON_LABEL",0);
    local_b8 = (code *)CONCAT44(local_b8._4_4_,0xffc0c0c0);
    FUN_1001816d4(0x42800000,0,0x447a0000,plVar20,0,uVar26,&local_b8,&DAT_101dc1cb8,0);
    FUN_1001b4c0c(plVar20,1);
    FUN_1001b495c(0x3e4ccccd,plVar20);
    if ((*(float *)(param_1 + 0xd3d) != 0.5) || (*(float *)((long)param_1 + 0x69ec) != 0.5)) {
      param_1[0xd3d] = (long)&DAT_3f0000003f000000;
      FUN_1000200a0(plVar20);
    }
    local_90 = uVar23;
    local_b8 = thunk_FUN_100231764;
    local_a0 = 0;
    uStack_98 = 0;
    local_a8 = 0;
    plStack_b0 = param_1;
    FUN_10001554c(param_1 + 0xd34,&local_b8);
    uVar26 = FUN_1004e0150("MENU_GUILD_MEMBERS_TRANSFER_LEADERSHIP_MEMBER",0);
    local_b8 = (code *)CONCAT44(local_b8._4_4_,0xffc0c0c0);
    FUN_1001816d4(0x42800000,0,0x447a0000,plVar21,0,uVar26,&local_b8,&DAT_101dc1cb8,0);
    FUN_1001b4c0c(plVar21,1);
    FUN_1001b495c(0x3e4ccccd,plVar21);
    if ((*(float *)(param_1 + 0xff4) != 0.5) || (*(float *)((long)param_1 + 0x7fa4) != 0.5)) {
      param_1[0xff4] = (long)&DAT_3f0000003f000000;
      FUN_1000200a0(plVar21);
    }
    local_90 = uVar23;
    local_b8 = thunk_FUN_100231900;
    local_a0 = 0;
    uStack_98 = 0;
    local_a8 = 0;
    plStack_b0 = param_1;
    FUN_10001554c(param_1 + 0xfeb,&local_b8);
  }
  local_90 = FUN_100644a94("EVENT_DISPLAY_TOOLTIP");
  local_b8 = FUN_10022e360;
  local_a0 = 0;
  uStack_98 = 0;
  local_a8 = 0;
  plStack_b0 = param_1;
  FUN_10001554c(param_1 + 1,&local_b8);
  return param_1;
}




void FUN_10022e32c(long param_1)

{
  if ((-1 < (int)*(uint *)(param_1 + 0x1058c)) &&
     (*(uint *)(param_1 + 0x1058c) < *(uint *)(param_1 + 0x1fd8))) {
    FUN_100230dc8(param_1,0);
    return;
  }
  return;
}




void FUN_10022e360(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_100231af4(param_1,param_4);
  return;
}




long * thunk_FUN_10022d51c(long *param_1)

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
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  long *plVar18;
  long *plVar19;
  long *plVar20;
  long *plVar21;
  long lVar22;
  undefined4 uVar23;
  undefined8 *puVar24;
  ulong uVar25;
  undefined8 uVar26;
  uint uVar27;
  long lVar28;
  code *pcStack_b8;
  long *plStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  
  puVar24 = (undefined8 *)FUN_100269da8();
  *puVar24 = &PTR_thunk_FUN_10022e36c_101477268;
  thunk_FUN_100650e64();
  plVar1 = param_1 + 0x3f;
  thunk_FUN_10019468c(plVar1,0);
  plVar2 = param_1 + 0x1c0;
  FUN_1006421a8(plVar2);
  param_1[0x1c0] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  thunk_FUN_100652c08();
  plVar3 = param_1 + 0x1ef;
  thunk_FUN_1006543ec(plVar3);
  plVar4 = param_1 + 0x223;
  FUN_10053077c(plVar4,0);
  plVar5 = param_1 + 0x2ca;
  thunk_FUN_100652c08();
  plVar6 = param_1 + 0x2e8;
  FUN_1006421a8(plVar6);
  param_1[0x2e8] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar7 = param_1 + 0x2f9;
  thunk_FUN_100652c08();
  lVar28 = 0;
  do {
    thunk_FUN_100650e64((long)(param_1 + 0x317) + lVar28);
    lVar28 = lVar28 + 0x130;
  } while (lVar28 != 0x5f0);
  plVar8 = param_1 + 0x3d5;
  thunk_FUN_100650e64();
  param_1[0x3fc] = 0;
  param_1[0x3fb] = 0;
  plVar9 = param_1 + 0x3fd;
  thunk_FUN_100650e64(plVar9);
  plVar10 = param_1 + 0x423;
  thunk_FUN_100652c08();
  plVar11 = param_1 + 0x441;
  thunk_FUN_100650e64();
  plVar12 = param_1 + 0x467;
  thunk_FUN_100181304(plVar12,0);
  plVar13 = param_1 + 0x71e;
  thunk_FUN_100181304(plVar13,0);
  plVar14 = param_1 + 0x9d5;
  thunk_FUN_100650e64();
  plVar15 = param_1 + 0x9fb;
  thunk_FUN_100652c08();
  plVar16 = param_1 + 0xa19;
  thunk_FUN_100652c08();
  plVar17 = param_1 + 0xa37;
  thunk_FUN_1006543ec();
  plVar18 = param_1 + 0xa6b;
  FUN_1006421a8(plVar18);
  param_1[0xa6b] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar19 = param_1 + 0xa7c;
  thunk_FUN_100181304(plVar19,0);
  plVar20 = param_1 + 0xd33;
  thunk_FUN_100181304(plVar20,0);
  plVar21 = param_1 + 0xfea;
  thunk_FUN_100181304(plVar21,0);
  thunk_FUN_1001bc39c(param_1 + 0x12a1);
  param_1[0x20b1] = -0xbbe70000;
  param_1[0x20b3] = 0;
  param_1[0x20b4] = 0;
  param_1[0x20b2] = 0;
  *(undefined4 *)(param_1 + 0x20b5) = 1;
  FUN_10003330c(param_1 + 0x20b6,&DAT_101d91198);
  *(undefined2 *)(param_1 + 0x20b9) = 0x100;
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  FUN_100642bd8(plVar2,plVar3,1);
  FUN_100642bd8(plVar3,plVar4,1);
  FUN_100642bd8(plVar4,plVar5,1);
  FUN_1005308f8(plVar4,puVar24 + 0x19,1);
  FUN_1005308f8(plVar4,plVar1,1);
  FUN_1005308f8(plVar4,plVar6,1);
  FUN_100642bd8(plVar6,plVar7,1);
  lVar28 = 0;
  do {
    FUN_100642bd8(plVar6,(long)param_1 + lVar28 + 0x18b8,1);
    lVar28 = lVar28 + 0x130;
  } while (lVar28 != 0x5f0);
  FUN_1005308f8(plVar4,plVar9,1);
  FUN_1005308f8(plVar4,plVar10,1);
  FUN_1005308f8(plVar4,plVar11,1);
  FUN_1005308f8(plVar4,plVar14,1);
  FUN_1005308f8(plVar4,plVar15,1);
  FUN_1005308f8(plVar4,plVar12,1);
  FUN_1005308f8(plVar4,plVar13,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar16,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar17,1);
  FUN_100642bd8(plVar17,plVar18,1);
  FUN_100642bd8(plVar18,plVar19,1);
  uVar25 = FUN_100131220();
  if ((uVar25 & 1) != 0) {
    FUN_100642bd8(plVar18,plVar20,1);
    FUN_100642bd8(plVar18,plVar21,1);
  }
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x12a1,1);
  FUN_100651594(puVar24 + 0x19,PTR_s_build___Fonts_NorthwoodHigh_Regu_10184e288,&DAT_10115a168);
  *(uint *)((long)param_1 + 0x14c) = *(uint *)((long)param_1 + 0x14c) & 0xffffffef;
  FUN_10019495c(plVar1,PTR_s_build___Fonts_Brandon_Light_48_f_10184e1c0);
  FUN_100652cac(param_1 + 0x1d1,PTR_s_build___MenuPartsCommon_tga_101854970,"black_background");
  uVar27 = *(uint *)((long)param_1 + 0xf0c);
  if ((uVar27 & 0x7f80) != 0x2600) {
    *(uint *)((long)param_1 + 0xf0c) = uVar27 & 0xffff8000 | uVar27 & 0x7f | 0x2600;
    FUN_1000200a0(param_1 + 0x1d1);
  }
  FUN_100652cac(plVar5,PTR_s_build___MenuPartsCommon_tga_101854970,"vert_glass_shadow");
  FUN_100652dd4(plVar5,&DAT_10115a164,2);
  uVar27 = *(uint *)((long)param_1 + 0x16d4);
  if ((uVar27 & 0x7f80) != 0x2600) {
    *(uint *)((long)param_1 + 0x16d4) = uVar27 & 0xffff8000 | uVar27 & 0x7f | 0x2600;
    FUN_1000200a0(plVar5);
  }
  FUN_100651594(plVar9,PTR_s_build___Fonts_Brandon_Regular_36_10184e1f0,&DAT_10115a168);
  uVar26 = FUN_1004e0150("MENU_PROFILE_GUILD_HOW_TO_ADD",0);
  FUN_1006513c0(plVar9,uVar26);
  uVar27 = *(uint *)((long)param_1 + 0x206c);
  if ((uVar27 & 0x7f80) != 0x2600) {
    *(uint *)((long)param_1 + 0x206c) = uVar27 & 0xffff8000 | uVar27 & 0x7f | 0x2600;
    FUN_1000200a0(plVar9);
  }
  FUN_100652cac(plVar10,PTR_s_build___MenuPartsCommon_tga_101854970,"generic_guild_outline");
  uVar27 = *(uint *)((long)param_1 + 0x219c);
  if ((uVar27 & 0x7f80) != 0x3300) {
    *(uint *)((long)param_1 + 0x219c) = uVar27 & 0xffff8000 | uVar27 & 0x7f | 0x3300;
    FUN_1000200a0(plVar10);
  }
  if ((*(float *)(param_1 + 0x42c) != 0.9) || (*(float *)((long)param_1 + 0x2164) != 0.9)) {
    param_1[0x42c] = 0x3f6666663f666666;
    FUN_1000200a0(plVar10);
  }
  FUN_100651594(plVar11,PTR_s_build___Fonts_Brandon_Regular_36_10184e1f0,&DAT_10115a168);
  uVar26 = FUN_1004e0150("MENU_PROFILE_GUILD_MEMBER_COUNT",0);
  FUN_1006513c0(plVar11,uVar26);
  uVar27 = *(uint *)((long)param_1 + 0x228c);
  if ((uVar27 & 0x7f80) != 0x2600) {
    *(uint *)((long)param_1 + 0x228c) = uVar27 & 0xffff8000 | uVar27 & 0x7f | 0x2600;
    FUN_1000200a0(plVar11);
  }
  FUN_100651594(plVar14,PTR_s_build___Fonts_Brandon_Regular_36_10184e1f0,&DAT_10115a168);
  uVar26 = FUN_1004e0150("MENU_PROFILE_GUILD_MORE_OPTIONS",0);
  FUN_1006513c0(plVar14,uVar26);
  uVar27 = *(uint *)((long)param_1 + 0x4f2c);
  if ((uVar27 & 0x7f80) != 0xc80) {
    *(uint *)((long)param_1 + 0x4f2c) = uVar27 & 0xffff8000 | uVar27 & 0x7f | 0xc80;
    FUN_1000200a0(plVar14);
  }
  FUN_100652cac(plVar15,PTR_s_build___MenuPartsCommon_tga_101854970,"arrow_down");
  uVar27 = *(uint *)((long)param_1 + 0x505c);
  if ((uVar27 & 0x7f80) != 0xc80) {
    *(uint *)((long)param_1 + 0x505c) = uVar27 & 0xffff8000 | uVar27 & 0x7f | 0xc80;
    FUN_1000200a0(plVar15);
  }
  uVar26 = FUN_1004e0150("MENU_PROFILE_GUILD_LEAVE_GUILD",0);
  pcStack_b8 = (code *)CONCAT44(pcStack_b8._4_4_,0xffc0c0c0);
  FUN_1001816d4(0x42800000,0,0x447a0000,plVar12,0,uVar26,&pcStack_b8,&DAT_101dc1cb8,0);
  FUN_1001b4c0c(plVar12,1);
  FUN_1001b495c(0x3e4ccccd,plVar12);
  uVar23 = DAT_101d91884;
  uStack_90 = DAT_101d91884;
  pcStack_b8 = thunk_FUN_100231648;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_a8 = 0;
  plStack_b0 = param_1;
  FUN_10001554c(param_1 + 0x468,&pcStack_b8);
  FUN_1001b4964(plVar12,1);
  uVar26 = FUN_1004e0150("MENU_PROFILE_GUILD_EDIT_TYPE",0);
  pcStack_b8 = (code *)CONCAT44(pcStack_b8._4_4_,0xffc0c0c0);
  FUN_1001816d4(0x42800000,0,0x447a0000,plVar13,0,uVar26,&pcStack_b8,&DAT_101dc1cb8,0);
  FUN_1001b4c0c(plVar13,1);
  FUN_1001b495c(0x3e4ccccd,plVar13);
  uStack_90 = uVar23;
  pcStack_b8 = thunk_FUN_100231a5c;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_a8 = 0;
  plStack_b0 = param_1;
  FUN_10001554c(param_1 + 0x71f,&pcStack_b8);
  FUN_1001b4964(plVar13,1);
  FUN_100652cac(plVar7,PTR_s_build___MenuPartsCommon_tga_101854970,"black_background");
  if ((*(uint *)((long)param_1 + 0x184c) & 0x7f80) != 0x3f80) {
    *(uint *)((long)param_1 + 0x184c) = *(uint *)((long)param_1 + 0x184c) & 0xffff807f | 0x3f80;
    FUN_1000200a0(plVar7);
  }
  uVar26 = FUN_1004e0150("MENU_PROFILE_GUILD_JOIN_DATE",0);
  FUN_1006513c0(plVar8,uVar26);
  FUN_100651038(plVar8,PTR_s_build___Fonts_Brandon_Regular_36_10184e1f0);
  if ((*(uint *)((long)param_1 + 0x1f2c) & 0x7f80) != 0x3f80) {
    *(uint *)((long)param_1 + 0x1f2c) = *(uint *)((long)param_1 + 0x1f2c) & 0xffff807f | 0x3f80;
    FUN_1000200a0(plVar8);
  }
  lVar28 = 0;
  do {
    lVar22 = (long)param_1 + lVar28 + 0x18b8;
    FUN_100651038(lVar22,PTR_s_build___Fonts_Brandon_Regular_36_10184e1f0);
    uVar27 = *(uint *)((long)param_1 + lVar28 + 0x193c);
    if ((uVar27 & 0x7f80) != 0x3f80) {
      *(uint *)((long)param_1 + lVar28 + 0x193c) = uVar27 & 0xffff807f | 0x3f80;
      FUN_1000200a0(lVar22);
    }
    lVar28 = lVar28 + 0x130;
  } while (lVar28 != 0x5f0);
  uVar26 = FUN_1004e0150("MENU_GUILD_HEADER_FAME",0);
  (**(code **)(param_1[0x317] + 0x138))(param_1 + 0x317,uVar26);
  uVar26 = FUN_1004e0150("MENU_GUILD_HEADER_BOOSTED",0);
  (**(code **)(param_1[0x33d] + 0x138))(param_1 + 0x33d,uVar26);
  uVar26 = FUN_1004e0150("GENERIC_5V5",0);
  (**(code **)(param_1[0x363] + 0x138))(param_1 + 0x363,uVar26);
  uVar26 = FUN_1004e0150("GENERIC_3V3",0);
  (**(code **)(param_1[0x389] + 0x138))(param_1 + 0x389,uVar26);
  uVar26 = FUN_1004e0150("MENU_GUILD_HEADER_STATUS",0);
  (**(code **)(param_1[0x3af] + 0x138))(param_1 + 0x3af,uVar26);
  FUN_100530be0(plVar4,PTR_s_build___MenuPartsCommon_tga_101854970,
                PTR_s_scrollbar_button_fill_top_101854958,
                PTR_s_scrollbar_button_fill_middle_101854960,
                PTR_s_scrollbar_button_fill_bottom_101854968);
  FUN_100530adc(plVar4,0,1);
  FUN_100652cac(plVar16,PTR_s_build___MenuPartsCommon_tga_101854970,"black_background");
  uVar27 = *(uint *)((long)param_1 + 0x514c);
  if ((uVar27 & 0x7f80) != 0x6600) {
    *(uint *)((long)param_1 + 0x514c) = uVar27 & 0xffff8000 | uVar27 & 0x7f | 0x6600;
    FUN_1000200a0(plVar16);
    uVar27 = *(uint *)((long)param_1 + 0x514c);
  }
  *(uint *)((long)param_1 + 0x514c) = uVar27 & 0xfffffffb | 0x10;
  uStack_90 = DAT_101dbd458;
  pcStack_b8 = FUN_10022e32c;
  plVar1 = param_1 + 0xa1a;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_a8 = 0;
  plStack_b0 = param_1;
  FUN_10001554c(plVar1,&pcStack_b8);
  uStack_90 = DAT_101dbd484;
  pcStack_b8 = FUN_10022e32c;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_a8 = 0;
  plStack_b0 = param_1;
  FUN_10001554c(plVar1,&pcStack_b8);
  uStack_90 = DAT_101dbd45c;
  pcStack_b8 = FUN_10022e32c;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_a8 = 0;
  plStack_b0 = param_1;
  FUN_10001554c(plVar1,&pcStack_b8);
  uStack_90 = DAT_101dbd488;
  pcStack_b8 = FUN_10022e32c;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_a8 = 0;
  plStack_b0 = param_1;
  FUN_10001554c(plVar1,&pcStack_b8);
  uStack_90 = DAT_101dbd460;
  pcStack_b8 = FUN_10022e32c;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_a8 = 0;
  plStack_b0 = param_1;
  FUN_10001554c(plVar1,&pcStack_b8);
  uStack_90 = DAT_101dbd48c;
  pcStack_b8 = FUN_10022e32c;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_a8 = 0;
  plStack_b0 = param_1;
  FUN_10001554c(plVar1,&pcStack_b8);
  *(uint *)((long)param_1 + 0x523c) = *(uint *)((long)param_1 + 0x523c) & 0xfffffffb;
  FUN_100654488(plVar17,1);
  uVar26 = FUN_1004e0150("MENU_PROFILE_GUILD_REMOVE_MEMBER",0);
  pcStack_b8 = (code *)CONCAT44(pcStack_b8._4_4_,0xffc0c0c0);
  FUN_1001816d4(0x42800000,0,0x447a0000,plVar19,0,uVar26,&pcStack_b8,&DAT_101dc1cb8,0);
  FUN_1001b4c0c(plVar19,1);
  FUN_1001b495c(0x3e4ccccd,plVar19);
  if ((*(float *)(param_1 + 0xa86) != 0.5) || (*(float *)((long)param_1 + 0x5434) != 0.5)) {
    param_1[0xa86] = (long)&DAT_3f0000003f000000;
    FUN_1000200a0(plVar19);
  }
  uStack_90 = uVar23;
  pcStack_b8 = thunk_FUN_100231480;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_a8 = 0;
  plStack_b0 = param_1;
  FUN_10001554c(param_1 + 0xa7d,&pcStack_b8);
  uVar25 = FUN_100131220();
  if ((uVar25 & 1) != 0) {
    uVar26 = FUN_1004e0150("MENU_GUILD_MEMBERS_PROMOTE_BUTTON_LABEL",0);
    pcStack_b8 = (code *)CONCAT44(pcStack_b8._4_4_,0xffc0c0c0);
    FUN_1001816d4(0x42800000,0,0x447a0000,plVar20,0,uVar26,&pcStack_b8,&DAT_101dc1cb8,0);
    FUN_1001b4c0c(plVar20,1);
    FUN_1001b495c(0x3e4ccccd,plVar20);
    if ((*(float *)(param_1 + 0xd3d) != 0.5) || (*(float *)((long)param_1 + 0x69ec) != 0.5)) {
      param_1[0xd3d] = (long)&DAT_3f0000003f000000;
      FUN_1000200a0(plVar20);
    }
    uStack_90 = uVar23;
    pcStack_b8 = thunk_FUN_100231764;
    uStack_a0 = 0;
    uStack_98 = 0;
    uStack_a8 = 0;
    plStack_b0 = param_1;
    FUN_10001554c(param_1 + 0xd34,&pcStack_b8);
    uVar26 = FUN_1004e0150("MENU_GUILD_MEMBERS_TRANSFER_LEADERSHIP_MEMBER",0);
    pcStack_b8 = (code *)CONCAT44(pcStack_b8._4_4_,0xffc0c0c0);
    FUN_1001816d4(0x42800000,0,0x447a0000,plVar21,0,uVar26,&pcStack_b8,&DAT_101dc1cb8,0);
    FUN_1001b4c0c(plVar21,1);
    FUN_1001b495c(0x3e4ccccd,plVar21);
    if ((*(float *)(param_1 + 0xff4) != 0.5) || (*(float *)((long)param_1 + 0x7fa4) != 0.5)) {
      param_1[0xff4] = (long)&DAT_3f0000003f000000;
      FUN_1000200a0(plVar21);
    }
    uStack_90 = uVar23;
    pcStack_b8 = thunk_FUN_100231900;
    uStack_a0 = 0;
    uStack_98 = 0;
    uStack_a8 = 0;
    plStack_b0 = param_1;
    FUN_10001554c(param_1 + 0xfeb,&pcStack_b8);
  }
  uStack_90 = FUN_100644a94("EVENT_DISPLAY_TOOLTIP");
  pcStack_b8 = FUN_10022e360;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_a8 = 0;
  plStack_b0 = param_1;
  FUN_10001554c(param_1 + 1,&pcStack_b8);
  return param_1;
}




void FUN_10022e36c(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR_thunk_FUN_10022e36c_101477268;
  FUN_10022e694();
  if (*(char *)((long)param_1 + 0x105c7) < '\0') {
    operator_delete((void *)param_1[0x20b6]);
  }
  if (*(char *)((long)param_1 + 0x105a7) < '\0') {
    operator_delete((void *)param_1[0x20b2]);
  }
  lVar1 = 0;
  param_1[0x12a1] = &PTR_FUN_101464be8;
  do {
    thunk_FUN_1001baec8((long)param_1 + lVar1 + 0xe040);
    lVar1 = lVar1 + -0x2540;
  } while (lVar1 != -0x6fc0);
  FUN_1001bca68(param_1 + 0x12b2);
  FUN_10064221c(param_1 + 0x12a1);
  FUN_10003bd40(param_1 + 0xfea);
  FUN_10003bd40(param_1 + 0xd33);
  FUN_10003bd40(param_1 + 0xa7c);
  FUN_10064221c(param_1 + 0xa6b);
  FUN_10064e2bc(param_1 + 0xa37);
  param_1[0xa19] = &PTR_FUN_1014a7108;
  param_1[0xa30] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xa33);
  FUN_10064e2bc(param_1 + 0xa19);
  param_1[0x9fb] = &PTR_FUN_1014a7108;
  param_1[0xa12] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xa15);
  FUN_10064e2bc(param_1 + 0x9fb);
  thunk_FUN_100651068(param_1 + 0x9d5);
  FUN_10003bd40(param_1 + 0x71e);
  FUN_10003bd40(param_1 + 0x467);
  thunk_FUN_100651068(param_1 + 0x441);
  param_1[0x423] = &PTR_FUN_1014a7108;
  param_1[0x43a] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x43d);
  FUN_10064e2bc(param_1 + 0x423);
  thunk_FUN_100651068(param_1 + 0x3fd);
  if ((void *)param_1[0x3fc] != (void *)0x0) {
    operator_delete__((void *)param_1[0x3fc]);
    param_1[0x3fc] = 0;
    param_1[0x3fb] = 0;
  }
  thunk_FUN_100651068(param_1 + 0x3d5);
  lVar1 = 0;
  do {
    thunk_FUN_100651068((long)param_1 + lVar1 + 0x1d78);
    lVar1 = lVar1 + -0x130;
  } while (lVar1 != -0x5f0);
  param_1[0x2f9] = &PTR_FUN_1014a7108;
  param_1[0x310] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x313);
  FUN_10064e2bc(param_1 + 0x2f9);
  FUN_10064221c(param_1 + 0x2e8);
  param_1[0x2ca] = &PTR_FUN_1014a7108;
  param_1[0x2e1] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x2e4);
  FUN_10064e2bc(param_1 + 0x2ca);
  thunk_FUN_100530784(param_1 + 0x223);
  FUN_10064e2bc(param_1 + 0x1ef);
  param_1[0x1d1] = &PTR_FUN_1014a7108;
  param_1[0x1e8] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x1eb);
  FUN_10064e2bc(param_1 + 0x1d1);
  FUN_10064221c(param_1 + 0x1c0);
  param_1[0x3f] = &PTR_FUN_101460ab8;
  param_1[0x19f] = &PTR_FUN_1014a7108;
  param_1[0x1b6] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x1b9);
  FUN_10064e2bc(param_1 + 0x19f);
  param_1[0x181] = &PTR_FUN_1014a7108;
  param_1[0x198] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x19b);
  FUN_10064e2bc(param_1 + 0x181);
  FUN_100191808(param_1 + 0x116);
  FUN_100191808(param_1 + 0xab);
  thunk_FUN_100651068(param_1 + 0x85);
  param_1[0x67] = &PTR_FUN_1014a7108;
  param_1[0x7e] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x81);
  FUN_10064e2bc(param_1 + 0x67);
  FUN_10064221c(param_1 + 0x56);
  FUN_10064e2bc(param_1 + 0x3f);
  thunk_FUN_100651068(param_1 + 0x19);
  FUN_10064e2bc(param_1);
  return;
}




void FUN_10022e694(long param_1)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  
  *(uint *)(param_1 + 0x514c) = *(uint *)(param_1 + 0x514c) & 0xfffffffb;
  *(uint *)(param_1 + 0x523c) = *(uint *)(param_1 + 0x523c) & 0xfffffffb;
  *(undefined4 *)(param_1 + 0x1058c) = 0xffffffff;
  uVar2 = *(uint *)(param_1 + 0x1fd8);
  if (uVar2 != 0) {
    uVar4 = 0;
    do {
      lVar3 = *(long *)(param_1 + 0x1fe0);
      plVar1 = *(long **)(lVar3 + uVar4 * 8);
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
        lVar3 = *(long *)(param_1 + 0x1fe0);
        uVar2 = *(uint *)(param_1 + 0x1fd8);
      }
      *(undefined8 *)(lVar3 + uVar4 * 8) = 0;
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar2);
  }
  if (*(long *)(param_1 + 0x1fe0) != 0) {
    *(undefined4 *)(param_1 + 0x1fd8) = 0;
  }
  FUN_1001bc574(param_1 + 0x9508);
  return;
}




void thunk_FUN_10022e36c(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR_thunk_FUN_10022e36c_101477268;
  FUN_10022e694();
  if (*(char *)((long)param_1 + 0x105c7) < '\0') {
    operator_delete((void *)param_1[0x20b6]);
  }
  if (*(char *)((long)param_1 + 0x105a7) < '\0') {
    operator_delete((void *)param_1[0x20b2]);
  }
  lVar1 = 0;
  param_1[0x12a1] = &PTR_FUN_101464be8;
  do {
    thunk_FUN_1001baec8((long)param_1 + lVar1 + 0xe040);
    lVar1 = lVar1 + -0x2540;
  } while (lVar1 != -0x6fc0);
  FUN_1001bca68(param_1 + 0x12b2);
  FUN_10064221c(param_1 + 0x12a1);
  FUN_10003bd40(param_1 + 0xfea);
  FUN_10003bd40(param_1 + 0xd33);
  FUN_10003bd40(param_1 + 0xa7c);
  FUN_10064221c(param_1 + 0xa6b);
  FUN_10064e2bc(param_1 + 0xa37);
  param_1[0xa19] = &PTR_FUN_1014a7108;
  param_1[0xa30] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xa33);
  FUN_10064e2bc(param_1 + 0xa19);
  param_1[0x9fb] = &PTR_FUN_1014a7108;
  param_1[0xa12] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xa15);
  FUN_10064e2bc(param_1 + 0x9fb);
  thunk_FUN_100651068(param_1 + 0x9d5);
  FUN_10003bd40(param_1 + 0x71e);
  FUN_10003bd40(param_1 + 0x467);
  thunk_FUN_100651068(param_1 + 0x441);
  param_1[0x423] = &PTR_FUN_1014a7108;
  param_1[0x43a] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x43d);
  FUN_10064e2bc(param_1 + 0x423);
  thunk_FUN_100651068(param_1 + 0x3fd);
  if ((void *)param_1[0x3fc] != (void *)0x0) {
    operator_delete__((void *)param_1[0x3fc]);
    param_1[0x3fc] = 0;
    param_1[0x3fb] = 0;
  }
  thunk_FUN_100651068(param_1 + 0x3d5);
  lVar1 = 0;
  do {
    thunk_FUN_100651068((long)param_1 + lVar1 + 0x1d78);
    lVar1 = lVar1 + -0x130;
  } while (lVar1 != -0x5f0);
  param_1[0x2f9] = &PTR_FUN_1014a7108;
  param_1[0x310] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x313);
  FUN_10064e2bc(param_1 + 0x2f9);
  FUN_10064221c(param_1 + 0x2e8);
  param_1[0x2ca] = &PTR_FUN_1014a7108;
  param_1[0x2e1] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x2e4);
  FUN_10064e2bc(param_1 + 0x2ca);
  thunk_FUN_100530784(param_1 + 0x223);
  FUN_10064e2bc(param_1 + 0x1ef);
  param_1[0x1d1] = &PTR_FUN_1014a7108;
  param_1[0x1e8] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x1eb);
  FUN_10064e2bc(param_1 + 0x1d1);
  FUN_10064221c(param_1 + 0x1c0);
  param_1[0x3f] = &PTR_FUN_101460ab8;
  param_1[0x19f] = &PTR_FUN_1014a7108;
  param_1[0x1b6] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x1b9);
  FUN_10064e2bc(param_1 + 0x19f);
  param_1[0x181] = &PTR_FUN_1014a7108;
  param_1[0x198] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x19b);
  FUN_10064e2bc(param_1 + 0x181);
  FUN_100191808(param_1 + 0x116);
  FUN_100191808(param_1 + 0xab);
  thunk_FUN_100651068(param_1 + 0x85);
  param_1[0x67] = &PTR_FUN_1014a7108;
  param_1[0x7e] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x81);
  FUN_10064e2bc(param_1 + 0x67);
  FUN_10064221c(param_1 + 0x56);
  FUN_10064e2bc(param_1 + 0x3f);
  thunk_FUN_100651068(param_1 + 0x19);
  FUN_10064e2bc(param_1);
  return;
}




void FUN_10022e734(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_10022e36c();
  operator_delete(pvVar1);
  return;
}




void FUN_10022e748(long param_1)

{
  long lVar1;
  float *pfVar2;
  long lVar3;
  uint uVar4;
  undefined4 uVar5;
  bool bVar6;
  int iVar7;
  undefined8 uVar8;
  long lVar9;
  long *plVar10;
  uint uVar11;
  code *pcVar12;
  long lVar13;
  ulong uVar14;
  ulong unaff_x27;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float local_e4;
  float local_e0;
  float local_dc;
  code *local_d8;
  long lStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  ulong local_b8;
  undefined4 local_b0;
  
  uVar8 = FUN_100126b4c();
  FUN_1001e35ec(param_1,uVar8,&local_dc,&local_e0,&local_e4);
  fVar17 = local_dc - local_e4;
  lVar1 = param_1 + 0x1118;
  bVar6 = false;
  if ((*(float *)(param_1 + 0x115c) == 0.0) && (bVar6 = false, !NAN(*(float *)(param_1 + 0x1158))))
  {
    bVar6 = *(float *)(param_1 + 0x1158) == 0.0;
  }
  if (!bVar6) {
    *(undefined8 *)(param_1 + 0x1158) = 0;
    FUN_1000200a0(lVar1);
  }
  local_d8 = (code *)0x0;
  (**(code **)(*(long *)(param_1 + 0x1118) + 0x28))(lVar1,&local_d8);
  fVar20 = local_e0;
  lVar9 = FUN_10003d5bc(lVar1);
  fVar18 = *(float *)(lVar9 + 0xc);
  lVar9 = FUN_10003d5bc(lVar1);
  fVar19 = *(float *)(lVar9 + 0x14);
  lVar9 = param_1 + 200;
  lVar13 = param_1 + 0x1f8;
  fVar15 = (float)FUN_100194c24(lVar13);
  fVar16 = 0.0;
  FUN_10065179c((fVar17 + -80.0) - (fVar15 + fVar15),0,0x3f800000,lVar9);
  FUN_10064259c(lVar9);
  if ((*(float *)(param_1 + 0x108) != 800.0) || (*(float *)(param_1 + 0x10c) != fVar16 * 0.5)) {
    *(undefined4 *)(param_1 + 0x108) = 0x44480000;
    *(float *)(param_1 + 0x10c) = fVar16 * 0.5;
    FUN_1000200a0(lVar9);
  }
  local_d8 = (code *)&DAT_3f0000003f000000;
  (**(code **)(*(long *)(param_1 + 200) + 0x28))(lVar9,&local_d8);
  fVar21 = *(float *)(param_1 + 0x108);
  fVar15 = (float)FUN_10064259c(lVar9);
  fVar16 = (float)FUN_100194c24(lVar13);
  fVar15 = fVar21 + (fVar15 + fVar16) * -0.5 + -20.0;
  fVar16 = *(float *)(param_1 + 0x10c);
  bVar6 = false;
  if ((*(float *)(param_1 + 0x238) == fVar15) &&
     (bVar6 = false, !NAN(*(float *)(param_1 + 0x23c)) && !NAN(fVar16))) {
    bVar6 = *(float *)(param_1 + 0x23c) == fVar16;
  }
  if (!bVar6) {
    *(float *)(param_1 + 0x238) = fVar15;
    *(float *)(param_1 + 0x23c) = fVar16;
    FUN_1000200a0(lVar13);
  }
  pfVar2 = (float *)(param_1 + 0x10588);
  local_d8 = (code *)&DAT_3f0000003f000000;
  (**(code **)(*(long *)(param_1 + 0x1f8) + 0x28))(lVar13,&local_d8);
  fVar15 = fVar17 * 0.5 + -800.0;
  bVar6 = false;
  if ((*(float *)(param_1 + 0xe40) == fVar15) && (bVar6 = false, !NAN(*(float *)(param_1 + 0xe44))))
  {
    bVar6 = *(float *)(param_1 + 0xe44) == 160.0;
  }
  if (!bVar6) {
    *(float *)(param_1 + 0xe40) = fVar15;
    *(undefined4 *)(param_1 + 0xe44) = 0x43200000;
    FUN_1000200a0(param_1 + 0xe00);
  }
  fVar20 = fVar20 - fVar18 / fVar19;
  fVar16 = 0.0;
  FUN_100530b0c(0x41f00000,0,lVar1);
  FUN_10064e47c(0x44c80000,local_e0 - *(float *)(param_1 + 0xe44),param_1 + 0xe88);
  fVar15 = local_e0 - *(float *)(param_1 + 0xe44);
  FUN_10064e47c(fVar17);
  plVar10 = (long *)(param_1 + 0x18b8);
  (**(code **)(*(long *)(param_1 + 0x18b8) + 0x50))(plVar10);
  fVar15 = fVar15 + 6.0;
  FUN_10064e47c(0x44c80000,fVar15,param_1 + 0x17c8);
  lVar13 = 0;
  fVar17 = fVar15 * 0.5;
  do {
    fVar18 = *(float *)(plVar10 + 8);
    bVar6 = false;
    if ((fVar18 == *pfVar2 + fVar16) &&
       (bVar6 = false, !NAN(*(float *)((long)plVar10 + 0x44)) && !NAN(fVar17))) {
      bVar6 = *(float *)((long)plVar10 + 0x44) == fVar17;
    }
    if (!bVar6) {
      *(float *)(plVar10 + 8) = *pfVar2 + fVar16;
      *(float *)((long)plVar10 + 0x44) = fVar17;
      FUN_1000200a0(plVar10);
    }
    local_d8 = (code *)&DAT_3f0000003f000000;
    (**(code **)(*plVar10 + 0x28))(plVar10,&local_d8);
    fVar16 = *(float *)((long)&DAT_101158460 + lVar13) + fVar16;
    lVar13 = lVar13 + 4;
    plVar10 = plVar10 + 0x26;
  } while (lVar13 != 0x14);
  FUN_10064259c(lVar9);
  fVar17 = *(float *)(param_1 + 0x1784);
  if (fVar17 != fVar18 + 20.0) {
    *(float *)(param_1 + 0x1784) = fVar18 + 20.0;
    FUN_1000200a0(param_1 + 0x1740);
    fVar17 = *(float *)(param_1 + 0x1784);
  }
  uVar5 = DAT_101d91884;
  fVar17 = fVar17 + fVar15;
  if (*(int *)(param_1 + 0x1fd8) != 0) {
    uVar14 = 0;
    do {
      lVar9 = *(long *)(*(long *)(param_1 + 0x1fe0) + uVar14 * 8);
      if (uVar14 != *(uint *)(param_1 + 0x1058c)) {
        bVar6 = false;
        if ((*(float *)(lVar9 + 0x40) == 0.0) &&
           (bVar6 = false, !NAN(*(float *)(lVar9 + 0x44)) && !NAN(fVar17))) {
          bVar6 = *(float *)(lVar9 + 0x44) == fVar17;
        }
        if (!bVar6) {
          *(undefined4 *)(lVar9 + 0x40) = 0;
          *(float *)(lVar9 + 0x44) = fVar17;
          FUN_1000200a0(lVar9);
        }
      }
      lVar13 = lVar9 + 0x178;
      FUN_10065179c(*pfVar2 + -316.0,0,0x3f800000,lVar13);
      fVar15 = *(float *)(lVar9 + 0x1bc);
      bVar6 = false;
      if ((*(float *)(lVar9 + 0x1b8) == 120.0) && (bVar6 = false, !NAN(fVar15))) {
        bVar6 = fVar15 == 67.5;
      }
      if (!bVar6) {
        *(undefined8 *)(lVar9 + 0x1b8) = 0x4287000042f00000;
        FUN_1000200a0(lVar13);
      }
      local_d8 = (code *)0x3f00000000000000;
      (**(code **)(*(long *)(lVar9 + 0x178) + 0x28))(lVar13,&local_d8);
      fVar16 = *(float *)(lVar9 + 0x1bc);
      FUN_100651184(lVar13);
      fVar15 = fVar16 + 10.0 + fVar15 * 0.5;
      bVar6 = false;
      if ((*(float *)(lVar9 + 0x2e8) == 120.0) &&
         (bVar6 = false, !NAN(*(float *)(lVar9 + 0x2ec)) && !NAN(fVar15))) {
        bVar6 = *(float *)(lVar9 + 0x2ec) == fVar15;
      }
      if (!bVar6) {
        *(undefined4 *)(lVar9 + 0x2e8) = 0x42f00000;
        *(float *)(lVar9 + 0x2ec) = fVar15;
        FUN_1000200a0(lVar9 + 0x2a8);
      }
      local_d8 = (code *)0x3f00000000000000;
      (**(code **)(*(long *)(lVar9 + 0x2a8) + 0x28))(lVar9 + 0x2a8,&local_d8);
      lVar3 = lVar9 + 0x1120;
      FUN_10064e72c(0xc0a00000,lVar3,1,lVar13,3);
      fVar15 = 0.0;
      FUN_10064e72c(0,lVar3,5,lVar13,5);
      FUN_10064e72c(0xc1a00000,lVar9 + 0x88,1,lVar3,3);
      FUN_10064e72c(0,lVar9 + 0x88,5,lVar3,5);
      lVar13 = 0;
      plVar10 = (long *)(lVar9 + 0x3d8);
      do {
        fVar16 = 67.5;
        bVar6 = false;
        if ((*(float *)(plVar10 + 8) == *pfVar2 + fVar15) &&
           (bVar6 = false, !NAN(*(float *)((long)plVar10 + 0x44)))) {
          bVar6 = *(float *)((long)plVar10 + 0x44) == 67.5;
        }
        if (!bVar6) {
          *(float *)(plVar10 + 8) = *pfVar2 + fVar15;
          *(undefined4 *)((long)plVar10 + 0x44) = 0x42870000;
          fVar16 = 67.5;
          FUN_1000200a0(plVar10);
        }
        local_d8 = (code *)&DAT_3f0000003f000000;
        (**(code **)(*plVar10 + 0x28))(plVar10,&local_d8);
        fVar15 = *(float *)((long)&DAT_101158460 + lVar13) + fVar15;
        lVar13 = lVar13 + 4;
        plVar10 = plVar10 + 0x26;
      } while (lVar13 != 0x14);
      fVar18 = *(float *)(lVar9 + 0x8d8);
      fVar15 = *(float *)(lVar9 + 0x8dc);
      (**(code **)(*(long *)(lVar9 + 0x898) + 0x48))();
      fVar15 = fVar15 + 10.0 + fVar16 * 0.5;
      fVar16 = *(float *)(lVar9 + 0xaf8);
      if ((fVar16 != fVar18) || (fVar16 = *(float *)(lVar9 + 0xafc), fVar16 != fVar15)) {
        *(float *)(lVar9 + 0xaf8) = fVar18;
        *(float *)(lVar9 + 0xafc) = fVar15;
        FUN_1000200a0(lVar9 + 0xab8);
      }
      local_d8 = (code *)&DAT_3f0000003f000000;
      (**(code **)(*(long *)(lVar9 + 0xab8) + 0x28))(lVar9 + 0xab8,&local_d8);
      lVar13 = lVar9 + 0x508;
      fVar18 = *(float *)(lVar9 + 0x548);
      fVar15 = *(float *)(lVar9 + 0x54c);
      (**(code **)(*(long *)(lVar9 + 0x508) + 0x48))(lVar13);
      fVar15 = fVar15 + 10.0 + fVar16 * 0.5;
      fVar16 = *(float *)(lVar9 + 0xef8);
      if ((fVar16 != fVar18) || (fVar16 = *(float *)(lVar9 + 0xefc), fVar16 != fVar15)) {
        *(float *)(lVar9 + 0xef8) = fVar18;
        *(float *)(lVar9 + 0xefc) = fVar15;
        FUN_1000200a0(lVar9 + 0xeb8);
      }
      local_d8 = (code *)&DAT_3f0000003f000000;
      (**(code **)(*(long *)(lVar9 + 0xeb8) + 0x28))(lVar9 + 0xeb8,&local_d8);
      fVar18 = *(float *)(lVar9 + 0x548);
      fVar15 = *(float *)(lVar9 + 0x54c);
      (**(code **)(*(long *)(lVar9 + 0x508) + 0x48))(lVar13);
      fVar15 = fVar15 + fVar16 * 0.5;
      fVar16 = *(float *)(lVar9 + 0xd18);
      if ((fVar16 != fVar18) || (fVar16 = *(float *)(lVar9 + 0xd1c), fVar16 != fVar15)) {
        *(float *)(lVar9 + 0xd18) = fVar18;
        *(float *)(lVar9 + 0xd1c) = fVar15;
        FUN_1000200a0(lVar9 + 0xcd8);
      }
      local_d8 = (code *)&DAT_3f0000003f000000;
      (**(code **)(*(long *)(lVar9 + 0xcd8) + 0x28))(lVar9 + 0xcd8,&local_d8);
      fVar18 = *(float *)(lVar9 + 0x548);
      fVar15 = *(float *)(lVar9 + 0x54c);
      (**(code **)(*(long *)(lVar9 + 0x508) + 0x48))(lVar13);
      fVar15 = fVar15 + fVar16 * 0.5;
      fVar16 = *(float *)(lVar9 + 0xe08);
      if ((fVar16 != fVar18) || (fVar16 = *(float *)(lVar9 + 0xe0c), fVar16 != fVar15)) {
        *(float *)(lVar9 + 0xe08) = fVar18;
        *(float *)(lVar9 + 0xe0c) = fVar15;
        FUN_1000200a0(lVar9 + 0xdc8);
      }
      local_d8 = (code *)&DAT_3f0000003f000000;
      (**(code **)(*(long *)(lVar9 + 0xdc8) + 0x28))(lVar9 + 0xdc8,&local_d8);
      lVar13 = lVar9 + 0x1400;
      fVar19 = *(float *)(lVar9 + 0x678);
      fVar15 = (float)FUN_10064e3cc(lVar13);
      fVar19 = fVar19 - fVar15 * 0.5;
      fVar18 = *(float *)(lVar9 + 0x67c);
      (**(code **)(*(long *)(lVar9 + 0x638) + 0x48))(lVar9 + 0x638);
      fVar15 = fVar16;
      FUN_10064e3cc(lVar13);
      fVar18 = fVar18 + (fVar16 - fVar15) * 0.5;
      fVar15 = *(float *)(lVar9 + 0x1440);
      if ((fVar15 != fVar19) || (fVar15 = *(float *)(lVar9 + 0x1444), fVar15 != fVar18)) {
        *(float *)(lVar9 + 0x1440) = fVar19;
        *(float *)(lVar9 + 0x1444) = fVar18;
        FUN_1000200a0(lVar13);
      }
      local_d8 = (code *)0x0;
      (**(code **)(*(long *)(lVar9 + 0x1400) + 0x28))(lVar13,&local_d8);
      lVar13 = lVar9 + 0x17d0;
      fVar19 = *(float *)(lVar9 + 0x7a8);
      fVar16 = (float)FUN_10064e3cc(lVar13);
      fVar19 = fVar19 - fVar16 * 0.5;
      fVar18 = *(float *)(lVar9 + 0x7ac);
      (**(code **)(*(long *)(lVar9 + 0x768) + 0x48))(lVar9 + 0x768);
      fVar16 = fVar15;
      FUN_10064e3cc(lVar13);
      fVar18 = fVar18 + (fVar15 - fVar16) * 0.5;
      if ((*(float *)(lVar9 + 0x1810) != fVar19) || (*(float *)(lVar9 + 0x1814) != fVar18)) {
        *(float *)(lVar9 + 0x1810) = fVar19;
        *(float *)(lVar9 + 0x1814) = fVar18;
        FUN_1000200a0(lVar13);
      }
      local_d8 = (code *)0x0;
      (**(code **)(*(long *)(lVar9 + 0x17d0) + 0x28))(lVar13,&local_d8);
      local_d8 = (code *)&DAT_3f0000003f000000;
      if ((*(float *)(lVar9 + 0x2258) != *(float *)(lVar9 + 0xe08)) ||
         (*(float *)(lVar9 + 0x225c) != *(float *)(lVar9 + 0xe0c))) {
        *(float *)(lVar9 + 0x2258) = *(float *)(lVar9 + 0xe08);
        *(float *)(lVar9 + 0x225c) = *(float *)(lVar9 + 0xe0c);
        FUN_1000200a0(lVar9 + 0x2218);
      }
      (**(code **)(*(long *)(lVar9 + 0x2218) + 0x28))(lVar9 + 0x2218,&local_d8);
      lVar13 = lVar9 + 0x1ba0;
      fVar15 = (float)FUN_10064259c(lVar13);
      fVar15 = fVar15 * 0.5 + 1605.0;
      if ((*(float *)(lVar9 + 0x1be0) != fVar15) || (*(float *)(lVar9 + 0x1be4) != 67.5)) {
        *(float *)(lVar9 + 0x1be0) = fVar15;
        *(undefined4 *)(lVar9 + 0x1be4) = 0x42870000;
        FUN_1000200a0(lVar13);
      }
      local_d8 = (code *)&DAT_3f0000003f000000;
      (**(code **)(*(long *)(lVar9 + 0x1ba0) + 0x28))(lVar13,&local_d8);
      FUN_10064e47c(0x44c80000,0x43070000,lVar9 + 0x9c8);
      FUN_10064e47c(0x44bc0000,0x40000000,lVar9 + 0xbe8);
      if ((*(float *)(lVar9 + 0xc28) != 48.0) || (*(float *)(lVar9 + 0xc2c) != 0.0)) {
        *(undefined8 *)(lVar9 + 0xc28) = 0x42400000;
        FUN_1000200a0(lVar9 + 0xbe8);
      }
      uVar4 = *(uint *)(lVar9 + 0xa4c);
      uVar11 = 0x4c;
      if ((uVar14 & 1) != 0) {
        uVar11 = 0x7f;
      }
      if (uVar11 != (uVar4 >> 7 & 0xff)) {
        *(uint *)(lVar9 + 0xa4c) = uVar4 & 0xffff8000 | uVar4 & 0x7f | uVar11 << 7;
        FUN_1000200a0(lVar9 + 0x9c8);
      }
      local_b0 = uVar5;
      unaff_x27 = unaff_x27 & 0xffffffff00000000 | uVar14;
      local_d8 = FUN_10022f884;
      local_c8 = 0;
      uStack_c0 = 0;
      lStack_d0 = param_1;
      local_b8 = unaff_x27;
      FUN_10001554c(lVar9 + 0xec0,&local_d8);
      if (uVar14 < 2) {
        *(uint *)(lVar9 + 0xc6c) = *(uint *)(lVar9 + 0xc6c) & 0xfffffffb;
      }
      fVar17 = fVar17 + 135.0;
      uVar14 = uVar14 + 1;
    } while (uVar14 < *(uint *)(param_1 + 0x1fd8));
  }
  lVar9 = param_1 + 0x1650;
  fVar15 = 240.0;
  FUN_10064e47c(0x44c80000,lVar9);
  if ((*(float *)(param_1 + 0x1690) != 0.0) || (*(float *)(param_1 + 0x1694) != fVar17)) {
    *(undefined4 *)(param_1 + 0x1690) = 0;
    *(float *)(param_1 + 0x1694) = fVar17;
    FUN_1000200a0(lVar9);
  }
  local_d8 = (code *)0x0;
  (**(code **)(*(long *)(param_1 + 0x1650) + 0x28))(lVar9,&local_d8);
  lVar9 = param_1 + 0x1fe8;
  FUN_10064259c(lVar9);
  fVar17 = fVar17 + 37.5 + fVar15 * 0.5;
  if ((*(float *)(param_1 + 0x2028) != 800.0) || (*(float *)(param_1 + 0x202c) != fVar17)) {
    *(undefined4 *)(param_1 + 0x2028) = 0x44480000;
    *(float *)(param_1 + 0x202c) = fVar17;
    FUN_1000200a0(lVar9);
  }
  local_d8 = (code *)&DAT_3f0000003f000000;
  (**(code **)(*(long *)(param_1 + 0x1fe8) + 0x28))(lVar9,&local_d8);
  lVar13 = param_1 + 0x2118;
  fVar17 = (float)FUN_10064259c(lVar9);
  fVar15 = (float)FUN_10065317c(lVar13);
  fVar17 = (fVar15 + fVar17) * 0.5 + 810.0;
  fVar15 = *(float *)(param_1 + 0x202c);
  bVar6 = false;
  if ((*(float *)(param_1 + 0x2158) == fVar17) &&
     (bVar6 = false, !NAN(*(float *)(param_1 + 0x215c)) && !NAN(fVar15))) {
    bVar6 = *(float *)(param_1 + 0x215c) == fVar15;
  }
  if (!bVar6) {
    *(float *)(param_1 + 0x2158) = fVar17;
    *(float *)(param_1 + 0x215c) = fVar15;
    FUN_1000200a0(lVar13);
  }
  local_d8 = (code *)&DAT_3f0000003f000000;
  (**(code **)(*(long *)(param_1 + 0x2118) + 0x28))(lVar13,&local_d8);
  lVar13 = param_1 + 0x2208;
  fVar16 = *(float *)(param_1 + 0x202c);
  FUN_10064259c(lVar9);
  fVar17 = fVar15;
  FUN_10064259c(lVar9);
  fVar17 = fVar16 + 10.0 + (fVar17 + fVar15) * 0.5;
  fVar15 = *(float *)(param_1 + 0x2248);
  if ((fVar15 != 800.0) || (fVar15 = *(float *)(param_1 + 0x224c), fVar15 != fVar17)) {
    *(undefined4 *)(param_1 + 0x2248) = 0x44480000;
    *(float *)(param_1 + 0x224c) = fVar17;
    FUN_1000200a0(lVar13);
  }
  local_d8 = (code *)&DAT_3f0000003f000000;
  (**(code **)(*(long *)(param_1 + 0x2208) + 0x28))(lVar13,&local_d8);
  lVar9 = param_1 + 0x4fd8;
  FUN_10065317c(lVar9);
  fVar17 = (fVar20 - fVar15) + -20.0;
  fVar15 = *(float *)(param_1 + 0x5018);
  if ((fVar15 != 800.0) || (fVar15 = *(float *)(param_1 + 0x501c), fVar15 != fVar17)) {
    *(undefined4 *)(param_1 + 0x5018) = 0x44480000;
    *(float *)(param_1 + 0x501c) = fVar17;
    FUN_1000200a0(lVar9);
  }
  local_d8 = (code *)&DAT_3f0000003f000000;
  (**(code **)(*(long *)(param_1 + 0x4fd8) + 0x28))(lVar9,&local_d8);
  plVar10 = (long *)(param_1 + 0x4ea8);
  fVar17 = *(float *)(param_1 + 0x501c);
  FUN_10065317c(lVar9);
  fVar17 = fVar17 + fVar15 * -0.5 + -10.0;
  fVar15 = *(float *)(param_1 + 0x4ee8);
  if ((fVar15 != 800.0) || (fVar15 = *(float *)(param_1 + 0x4eec), fVar15 != fVar17)) {
    *(float *)(param_1 + 0x4ee8) = 800.0;
    *(float *)(param_1 + 0x4eec) = fVar17;
    FUN_1000200a0(plVar10);
  }
  local_d8 = (code *)0x3f8000003f000000;
  (**(code **)(*plVar10 + 0x28))(plVar10,&local_d8);
  lVar9 = FUN_10015d3ec();
  if (((int)*(uint *)(lVar9 + 0x5624) < 0) ||
     (*(int *)(*(long *)(lVar9 + 0x5268) + (ulong)*(uint *)(lVar9 + 0x5624) * 0x108 + 0x50) != 4)) {
    plVar10 = (long *)(param_1 + 0x2338);
    fVar16 = *(float *)(param_1 + 0x224c);
    FUN_10064259c(lVar13);
    fVar17 = fVar15;
    FUN_10064259c(plVar10);
    fVar15 = fVar16 + 40.0 + (fVar17 + fVar15) * 0.5;
    FUN_10064259c(plVar10);
    fVar17 = *(float *)(param_1 + 0x2378);
    if ((fVar17 != 800.0) || (fVar17 = *(float *)(param_1 + 0x237c), fVar17 != fVar15)) {
      *(undefined4 *)(param_1 + 0x2378) = 0x44480000;
      *(float *)(param_1 + 0x237c) = fVar15;
      FUN_1000200a0(plVar10);
    }
    pcVar12 = *(code **)(*plVar10 + 0x28);
  }
  else {
    lVar9 = param_1 + 0x2338;
    fVar17 = (float)FUN_10064e3cc(lVar9);
    fVar15 = 820.0;
    fVar16 = fVar17 * 0.5 + 820.0;
    fVar18 = *(float *)(param_1 + 0x224c);
    FUN_10064259c(lVar13);
    fVar17 = fVar15;
    FUN_10064259c(lVar9);
    fVar17 = fVar18 + 40.0 + (fVar17 + fVar15) * 0.5;
    FUN_10064259c(lVar9);
    if ((*(float *)(param_1 + 0x2378) != fVar16) || (*(float *)(param_1 + 0x237c) != fVar17)) {
      *(float *)(param_1 + 0x2378) = fVar16;
      *(float *)(param_1 + 0x237c) = fVar17;
      FUN_1000200a0(lVar9);
    }
    local_d8 = (code *)&DAT_3f0000003f000000;
    (**(code **)(*(long *)(param_1 + 0x2338) + 0x28))(lVar9,&local_d8);
    plVar10 = (long *)(param_1 + 0x38f0);
    fVar17 = (float)FUN_10064e3cc(plVar10);
    fVar15 = fVar17 * -0.5 + 780.0;
    fVar17 = *(float *)(param_1 + 0x237c);
    if ((*(float *)(param_1 + 0x3930) != fVar15) || (*(float *)(param_1 + 0x3934) != fVar17)) {
      *(float *)(param_1 + 0x3930) = fVar15;
      *(float *)(param_1 + 0x3934) = fVar17;
      FUN_1000200a0(plVar10);
    }
    pcVar12 = *(code **)(*plVar10 + 0x28);
  }
  local_d8 = (code *)&DAT_3f0000003f000000;
  (*pcVar12)(plVar10,&local_d8);
  lVar9 = FUN_10003d5bc(param_1);
  fVar15 = *(float *)(lVar9 + 0xc);
  uVar8 = FUN_10064e3cc(param_1 + 0xf78);
  fVar16 = *(float *)(param_1 + 0x237c);
  FUN_10064e3cc(param_1 + 0x2338);
  fVar17 = fVar16 + 100.0 + fVar15 + fVar17;
  FUN_10053093c(uVar8,lVar1);
  if (*(char *)(param_1 + 0x105c8) == '\0') {
    *(uint *)(param_1 + 0x23bc) = *(uint *)(param_1 + 0x23bc) & 0xfffffffb;
    *(uint *)(param_1 + 0x505c) = *(uint *)(param_1 + 0x505c) & 0xfffffffb;
    *(uint *)(param_1 + 0x4f2c) = *(uint *)(param_1 + 0x4f2c) & 0xfffffffb;
  }
  else {
    *(uint *)(param_1 + 0x23bc) = *(uint *)(param_1 + 0x23bc) | 4;
    fVar15 = *(float *)(param_1 + 0x237c);
    FUN_10064259c(param_1 + 0x2338);
    uVar11 = (uint)(fVar15 <= fVar20 + 20.0 + fVar17 * 0.5);
    *(uint *)(param_1 + 0x505c) =
         *(uint *)(param_1 + 0x505c) & 0xfffffff8 | *(uint *)(param_1 + 0x505c) & 3 | uVar11 << 2;
    *(uint *)(param_1 + 0x4f2c) =
         *(uint *)(param_1 + 0x4f2c) & 0xfffffff8 | *(uint *)(param_1 + 0x4f2c) & 3 | uVar11 << 2;
  }
  FUN_10064e47c(0x44c80000,0x431b0000,param_1 + 0x51b8);
  lVar9 = param_1 + 0x6998;
  fVar17 = (float)FUN_10064259c(lVar9);
  lVar13 = param_1 + 0x7f50;
  fVar20 = (float)FUN_10064259c(lVar13);
  lVar3 = param_1 + 0x53e0;
  fVar15 = (float)FUN_10064259c(lVar3);
  fVar17 = fVar17 + 240.0;
  fVar15 = fVar17 + fVar20 + fVar15;
  fVar20 = (float)FUN_10064e3cc(param_1 + 0x51b8);
  if (fVar20 <= fVar15) {
    fVar17 = 0.33333334;
    fVar20 = fVar15 * 0.33333334 + -240.0;
    FUN_100181b70(fVar20,lVar9);
    FUN_100181b70(fVar20,lVar13);
    FUN_100181b70(fVar20,lVar3);
  }
  iVar7 = FUN_100642d08(lVar9);
  if ((iVar7 == 0) || ((*(byte *)(param_1 + 0x6a1c) >> 2 & 1) == 0)) {
    fVar20 = 96.0;
  }
  else {
    fVar17 = (float)FUN_10064e3cc(lVar9);
    fVar20 = fVar17 * 0.5 + 96.0;
    if (*(float *)(param_1 + 0x69d8) != fVar20) {
      *(float *)(param_1 + 0x69d8) = fVar20;
      FUN_1000200a0(lVar9);
    }
    fVar20 = (float)FUN_10064e3cc(lVar9);
    fVar17 = fVar17 * 0.5 + 144.0;
    fVar20 = fVar17 + fVar20 * 0.5;
  }
  iVar7 = FUN_100642d08(lVar13);
  if ((iVar7 != 0) && ((*(byte *)(param_1 + 0x7fd4) >> 2 & 1) != 0)) {
    fVar17 = (float)FUN_10064e3cc(lVar13);
    fVar20 = fVar20 + fVar17 * 0.5;
    if (*(float *)(param_1 + 0x7f90) != fVar20) {
      *(float *)(param_1 + 0x7f90) = fVar20;
      FUN_1000200a0(lVar13);
    }
    fVar15 = (float)FUN_10064e3cc(lVar13);
    fVar17 = fVar20 + 48.0;
    fVar20 = fVar17 + fVar15 * 0.5;
  }
  iVar7 = FUN_100642d08(lVar3);
  if ((iVar7 != 0) && ((*(byte *)(param_1 + 0x5464) >> 2 & 1) != 0)) {
    fVar17 = (float)FUN_10064e3cc(lVar3);
    fVar20 = fVar20 + fVar17 * 0.5;
    fVar17 = *(float *)(param_1 + 0x5420);
    if (fVar17 != fVar20) {
      *(float *)(param_1 + 0x5420) = fVar20;
      FUN_1000200a0(lVar3);
    }
    FUN_10064e3cc(lVar3);
  }
  FUN_1006425d0(param_1 + 0xe00,0,0,1,1);
  FUN_10064e47c(local_dc,fVar17 + *(float *)(param_1 + 0xe44),param_1 + 0x50c8);
  FUN_100530adc(lVar1,0,*(undefined1 *)(param_1 + 0x105c9));
  *(uint *)(param_1 + 0x119c) =
       *(uint *)(param_1 + 0x119c) & 0xffffffef | (uint)*(byte *)(param_1 + 0x105c9) << 4;
  return;
}




void FUN_10022f884(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  FUN_100231b60(param_1,param_2,param_5);
  return;
}




void FUN_10022f88c(long param_1,int param_2)

{
  undefined8 *puVar1;
  size_t sVar2;
  size_t sVar3;
  undefined8 *puVar4;
  byte bVar5;
  int iVar6;
  undefined8 uVar7;
  ulong uVar8;
  byte *pbVar9;
  byte *pbVar10;
  
  if (param_2 == 0) {
    return;
  }
  puVar1 = (undefined8 *)(param_1 + 0x105b0);
  bVar5 = *(byte *)(param_1 + 0x105c7);
  uVar8 = (ulong)bVar5;
  sVar2 = *(size_t *)(param_1 + 67000);
  if (-1 < (char)bVar5) {
    sVar2 = uVar8;
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
    pbVar10 = DAT_101d91198;
    if (-1 < (char)DAT_101d911a8._7_1_) {
      pbVar10 = (byte *)&DAT_101d91198;
    }
    if ((char)bVar5 < '\0') {
      if (sVar2 == 0) {
        return;
      }
      iVar6 = _memcmp(puVar4,pbVar10,sVar2);
      if (iVar6 == 0) {
        return;
      }
    }
    else {
      if (sVar2 == 0) {
        return;
      }
      if ((uint)*pbVar10 == ((uint)(void *)*puVar1 & 0xff)) {
        pbVar9 = (byte *)(param_1 + 0x105b1);
        do {
          uVar8 = uVar8 - 1;
          pbVar10 = pbVar10 + 1;
          if (uVar8 == 0) {
            return;
          }
          bVar5 = *pbVar9;
          pbVar9 = pbVar9 + 1;
        } while (bVar5 == *pbVar10);
      }
    }
  }
  iVar6 = FUN_10015d3f8();
  if (iVar6 == 0) {
    return;
  }
  uVar7 = FUN_10015d3ec();
  FUN_1001634c4(uVar7,puVar1,0);
  return;
}




void FUN_10022f97c(void)

{
  return;
}




void FUN_10022f980(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010022f988. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x150))();
  return;
}




void FUN_10022f98c(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010022f994. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x150))();
  return;
}




void FUN_10022f998(long *param_1,long param_2)

{
  undefined8 *puVar1;
  string *this;
  size_t sVar2;
  undefined8 *puVar3;
  size_t sVar4;
  byte bVar5;
  byte bVar6;
  string sVar7;
  ulong uVar8;
  bool bVar9;
  bool bVar10;
  int iVar11;
  long lVar12;
  undefined8 uVar13;
  uint uVar14;
  ulong uVar15;
  byte *pbVar16;
  byte *pbVar17;
  string *psVar18;
  void *pvVar19;
  string *psVar20;
  ulong uVar21;
  size_t sVar22;
  uint local_a4;
  undefined1 auStack_a0 [8];
  void *local_98;
  undefined1 auStack_90 [8];
  void *local_88;
  undefined1 auStack_80 [8];
  void *local_78;
  undefined1 auStack_70 [8];
  void *local_68;
  
  this = (string *)(param_1 + 0x20b2);
  psVar18 = (string *)(param_2 + 0x180);
  uVar15 = (ulong)*(byte *)(param_2 + 0x197);
  uVar14 = (uint)(char)*(byte *)(param_2 + 0x197);
  uVar21 = (ulong)uVar14;
  sVar22 = *(size_t *)(param_2 + 0x188);
  sVar4 = sVar22;
  if (-1 < (int)uVar14) {
    sVar4 = uVar15;
  }
  sVar2 = DAT_101d911a0;
  if (-1 < (char)DAT_101d911a8._7_1_) {
    sVar2 = (ulong)DAT_101d911a8._7_1_;
  }
  if (sVar4 == sVar2) {
    psVar20 = *(string **)psVar18;
    if (-1 < (int)uVar14) {
      psVar20 = psVar18;
    }
    pbVar17 = DAT_101d91198;
    if (-1 < (char)DAT_101d911a8._7_1_) {
      pbVar17 = (byte *)&DAT_101d91198;
    }
    if ((int)uVar14 < 0) {
      if ((sVar4 != 0) && (iVar11 = _memcmp(psVar20,pbVar17,sVar4), iVar11 != 0))
      goto LAB_10022fa68;
    }
    else if (sVar4 != 0) {
      if ((uint)*pbVar17 == ((uint)*(string **)psVar18 & 0xff)) {
        pbVar16 = (byte *)(param_2 + 0x181);
        do {
          uVar15 = uVar15 - 1;
          pbVar17 = pbVar17 + 1;
          if (uVar15 == 0) goto LAB_10022fb04;
          bVar5 = *pbVar16;
          pbVar16 = pbVar16 + 1;
        } while (bVar5 == *pbVar17);
      }
      goto LAB_10022fa68;
    }
LAB_10022fb04:
    bVar9 = false;
  }
  else {
LAB_10022fa68:
    lVar12 = FUN_10015d3ec();
    uVar15 = (ulong)*(byte *)(param_2 + 0x197);
    uVar14 = (uint)(char)*(byte *)(param_2 + 0x197);
    uVar21 = (ulong)uVar14;
    sVar22 = *(size_t *)(param_2 + 0x188);
    bVar5 = *(byte *)(lVar12 + 0x548f);
    sVar4 = sVar22;
    if (-1 < (int)uVar14) {
      sVar4 = uVar15;
    }
    sVar2 = *(size_t *)(lVar12 + 0x5480);
    if (-1 < (char)bVar5) {
      sVar2 = (ulong)bVar5;
    }
    if (sVar4 != sVar2) goto LAB_10022fb04;
    psVar20 = *(string **)psVar18;
    if (-1 < (int)uVar14) {
      psVar20 = psVar18;
    }
    pbVar17 = *(byte **)(lVar12 + 0x5478);
    if (-1 < (char)bVar5) {
      pbVar17 = (byte *)(lVar12 + 0x5478);
    }
    if ((int)uVar14 < 0) {
      if (sVar4 == 0) goto LAB_10023005c;
      iVar11 = _memcmp(psVar20,pbVar17,sVar4);
      bVar9 = iVar11 == 0;
    }
    else if (sVar4 == 0) {
LAB_10023005c:
      bVar9 = true;
    }
    else {
      if ((uint)*pbVar17 != ((uint)*(string **)psVar18 & 0xff)) goto LAB_10022fb04;
      pbVar16 = (byte *)(param_2 + 0x181);
      do {
        uVar15 = uVar15 - 1;
        pbVar17 = pbVar17 + 1;
        bVar9 = uVar15 == 0;
        if (uVar15 == 0) break;
        bVar5 = *pbVar16;
        pbVar16 = pbVar16 + 1;
      } while (bVar5 == *pbVar17);
    }
  }
  if (*(char *)(param_2 + 0x1d0) != '\0') goto LAB_10022fb10;
  uVar15 = uVar21 & 0xff;
  iVar11 = (int)uVar21;
  if (-1 < iVar11) {
    sVar22 = uVar15;
  }
  bVar5 = *(byte *)((long)param_1 + 0x105c7);
  sVar4 = param_1[0x20b7];
  if (-1 < (char)bVar5) {
    sVar4 = (ulong)bVar5;
  }
  if (sVar22 == sVar4) {
    psVar20 = *(string **)psVar18;
    if (-1 < iVar11) {
      psVar20 = psVar18;
    }
    pbVar17 = (byte *)param_1[0x20b6];
    if (-1 < (char)bVar5) {
      pbVar17 = (byte *)(param_1 + 0x20b6);
    }
    if (iVar11 < 0) {
      if (sVar22 != 0) {
        iVar11 = _memcmp(psVar20,pbVar17,sVar22);
        bVar10 = iVar11 == 0;
        goto LAB_100230094;
      }
    }
    else if (sVar22 != 0) {
      if ((uint)*pbVar17 != ((uint)*(string **)psVar18 & 0xff)) goto LAB_10022fd54;
      pbVar16 = (byte *)(param_2 + 0x181);
      do {
        uVar15 = uVar15 - 1;
        pbVar17 = pbVar17 + 1;
        if (uVar15 == 0) break;
        bVar5 = *pbVar16;
        pbVar16 = pbVar16 + 1;
      } while (bVar5 == *pbVar17);
      bVar10 = uVar15 == 0;
LAB_100230094:
      bVar10 = !bVar10;
      goto LAB_100230098;
    }
  }
  else {
LAB_10022fd54:
    bVar10 = true;
LAB_100230098:
    if (!(bool)(bVar10 ^ 1U | bVar9)) {
      return;
    }
  }
LAB_10022fb10:
  puVar1 = (undefined8 *)(param_2 + 0x40);
  FUN_1004e3170(auStack_70,puVar1);
  FUN_1006513c0(param_1 + 0x19,auStack_70);
  if (local_68 != (void *)0x0) {
    operator_delete__(local_68);
  }
  FUN_1004e3170(auStack_70,param_2 + 0x58);
  FUN_100194b7c(param_1 + 0x3f,auStack_70);
  if (local_68 != (void *)0x0) {
    operator_delete__(local_68);
  }
  std::string::operator=((string *)(param_1 + 0x20b6),psVar18);
  uVar13 = FUN_1004e0150("MENU_PROFILE_GUILD_MEMBER_COUNT",0);
  thunk_FUN_1004e439c(auStack_70,uVar13);
  FUN_1004e313c(auStack_80);
  FUN_1004e38ac(auStack_80,"%d");
  FUN_1004e3120(auStack_90,"[NUM_MEMBERS]");
  FUN_1004e3bc4(auStack_70,0,auStack_90,auStack_80);
  if (local_88 != (void *)0x0) {
    operator_delete__(local_88);
  }
  FUN_1004e313c(auStack_90);
  FUN_1004e38ac(auStack_90,"%d");
  FUN_1004e3120(auStack_a0,"[MAX_MEMBERS]");
  FUN_1004e3bc4(auStack_70,0,auStack_a0,auStack_90);
  if (local_98 != (void *)0x0) {
    operator_delete__(local_98);
  }
  FUN_1006513c0(param_1 + 0x441,auStack_70);
  bVar5 = *(byte *)(param_2 + 0x57);
  uVar15 = (ulong)bVar5;
  sVar4 = *(size_t *)(param_2 + 0x48);
  if (-1 < (char)bVar5) {
    sVar4 = uVar15;
  }
  sVar22 = DAT_101d911a0;
  if (-1 < (char)DAT_101d911a8._7_1_) {
    sVar22 = (ulong)DAT_101d911a8._7_1_;
  }
  if (sVar4 == sVar22) {
    puVar3 = (void *)*puVar1;
    if (-1 < (char)bVar5) {
      puVar3 = puVar1;
    }
    pbVar17 = DAT_101d91198;
    if (-1 < (char)DAT_101d911a8._7_1_) {
      pbVar17 = (byte *)&DAT_101d91198;
    }
    if ((char)bVar5 < '\0') {
      if ((sVar4 != 0) && (iVar11 = _memcmp(puVar3,pbVar17,sVar4), iVar11 != 0)) goto LAB_10022fd68;
    }
    else if (sVar4 != 0) {
      if ((uint)*pbVar17 == ((uint)(void *)*puVar1 & 0xff)) {
        pbVar16 = (byte *)(param_2 + 0x41);
        do {
          uVar15 = uVar15 - 1;
          pbVar17 = pbVar17 + 1;
          if (uVar15 == 0) goto LAB_10022ff3c;
          bVar5 = *pbVar16;
          pbVar16 = pbVar16 + 1;
        } while (bVar5 == *pbVar17);
      }
      goto LAB_10022fd68;
    }
LAB_10022ff3c:
    *(undefined1 *)(param_1 + 0x20b9) = 0;
    goto LAB_1002300e0;
  }
LAB_10022fd68:
  FUN_10022e694(param_1);
  *(undefined4 *)(param_1 + 0x20b5) = 1;
  FUN_10015d3ec();
  uVar13 = FUN_100164f34();
  thunk_FUN_1004e439c(auStack_a0,uVar13);
  uVar14 = *(uint *)(param_2 + 0x1d8);
  if (uVar14 == 0) {
    local_a4 = 0xffffffff;
  }
  else {
    uVar15 = 0;
    local_a4 = 0xffffffff;
    do {
      iVar11 = FUN_1004e3654(*(long *)(param_2 + 0x1e0) + uVar15 * 0x108 + 0x18,auStack_a0);
      lVar12 = *(long *)(param_2 + 0x1e0);
      if (iVar11 != 0) {
        *(undefined4 *)(param_1 + 0x20b5) = *(undefined4 *)(lVar12 + uVar15 * 0x108 + 0x50);
      }
      FUN_100230134(param_1,lVar12 + uVar15 * 0x108,0);
      bVar5 = *(byte *)((long)param_1 + 0x105a7);
      uVar21 = (ulong)bVar5;
      sVar4 = param_1[0x20b3];
      if (-1 < (char)bVar5) {
        sVar4 = uVar21;
      }
      sVar22 = DAT_101d911a0;
      if (-1 < (char)DAT_101d911a8._7_1_) {
        sVar22 = (ulong)DAT_101d911a8._7_1_;
      }
      if (sVar4 == sVar22) {
        psVar20 = *(string **)this;
        if (-1 < (char)bVar5) {
          psVar20 = this;
        }
        pbVar17 = DAT_101d91198;
        if (-1 < (char)DAT_101d911a8._7_1_) {
          pbVar17 = (byte *)&DAT_101d91198;
        }
        if ((char)bVar5 < '\0') {
          if ((sVar4 != 0) && (iVar11 = _memcmp(psVar20,pbVar17,sVar4), iVar11 != 0))
          goto LAB_10022fe88;
        }
        else if (sVar4 != 0) {
          pbVar16 = (byte *)((long)param_1 + 0x10591);
          uVar8 = uVar21;
          if ((uint)*pbVar17 == ((uint)*(string **)this & 0xff)) {
            do {
              pbVar17 = pbVar17 + 1;
              if (uVar8 - 1 == 0) goto LAB_10022ff2c;
              bVar6 = *pbVar16;
              pbVar16 = pbVar16 + 1;
              uVar8 = uVar8 - 1;
            } while (bVar6 == *pbVar17);
          }
          goto LAB_10022fe88;
        }
      }
      else {
LAB_10022fe88:
        lVar12 = *(long *)(param_2 + 0x1e0);
        pbVar17 = (byte *)(lVar12 + uVar15 * 0x108);
        bVar6 = pbVar17[0x17];
        sVar22 = *(size_t *)(pbVar17 + 8);
        if (-1 < (char)bVar6) {
          sVar22 = (ulong)bVar6;
        }
        if (sVar4 == sVar22) {
          psVar20 = *(string **)this;
          if (-1 < (char)bVar5) {
            psVar20 = this;
          }
          pbVar16 = *(byte **)pbVar17;
          if (-1 < (char)bVar6) {
            pbVar16 = pbVar17;
          }
          if ((char)bVar5 < '\0') {
            if ((sVar4 == 0) || (iVar11 = _memcmp(psVar20,pbVar16,sVar4), iVar11 == 0))
            goto LAB_10022ff14;
          }
          else if (sVar4 == 0) {
LAB_10022ff14:
            if (*(char *)(lVar12 + uVar15 * 0x108 + 0x102) != '\0') {
              local_a4 = (uint)uVar15;
            }
          }
          else {
            pbVar17 = (byte *)((long)param_1 + 0x10591);
            if ((uint)*pbVar16 == ((uint)*(string **)this & 0xff)) {
              do {
                uVar21 = uVar21 - 1;
                pbVar16 = pbVar16 + 1;
                if (uVar21 == 0) goto LAB_10022ff14;
                bVar5 = *pbVar17;
                pbVar17 = pbVar17 + 1;
              } while (bVar5 == *pbVar16);
            }
          }
        }
      }
LAB_10022ff2c:
      uVar15 = uVar15 + 1;
    } while (uVar15 != uVar14);
  }
  lVar12 = FUN_10015d3ec();
  if ((int)*(uint *)(lVar12 + 0x5624) < 0) {
    uVar14 = 0;
  }
  else {
    uVar14 = (uint)(*(int *)(*(long *)(lVar12 + 0x5268) + (ulong)*(uint *)(lVar12 + 0x5624) * 0x108
                            + 0x50) == 4) << 2;
  }
  *(uint *)((long)param_1 + 0x3974) = *(uint *)((long)param_1 + 0x3974) & 0xfffffffb | uVar14;
  lVar12 = FUN_10015d3ec();
  bVar5 = *(byte *)(lVar12 + 0x548f);
  uVar15 = (ulong)bVar5;
  sVar4 = *(size_t *)(lVar12 + 0x5480);
  if (-1 < (char)bVar5) {
    sVar4 = uVar15;
  }
  bVar6 = *(byte *)(param_2 + 0x197);
  sVar22 = *(size_t *)(param_2 + 0x188);
  if (-1 < (char)bVar6) {
    sVar22 = (ulong)bVar6;
  }
  if (sVar4 == sVar22) {
    pvVar19 = *(void **)(lVar12 + 0x5478);
    puVar1 = pvVar19;
    if (-1 < (char)bVar5) {
      puVar1 = (undefined8 *)(lVar12 + 0x5478);
    }
    psVar20 = *(string **)psVar18;
    if (-1 < (char)bVar6) {
      psVar20 = psVar18;
    }
    if ((char)bVar5 < '\0') {
      if (sVar4 == 0) goto LAB_100230080;
      iVar11 = _memcmp(puVar1,psVar20,sVar4);
      bVar9 = iVar11 == 0;
    }
    else if (sVar4 == 0) {
LAB_100230080:
      bVar9 = true;
    }
    else if ((uint)(byte)*psVar20 == ((uint)pvVar19 & 0xff)) {
      psVar18 = (string *)(lVar12 + 0x5479);
      do {
        uVar15 = uVar15 - 1;
        psVar20 = psVar20 + 1;
        bVar9 = uVar15 == 0;
        if (uVar15 == 0) break;
        sVar7 = *psVar18;
        psVar18 = psVar18 + 1;
      } while (sVar7 == *psVar20);
    }
    else {
      bVar9 = false;
    }
  }
  else {
    bVar9 = false;
  }
  *(bool *)(param_1 + 0x20b9) = bVar9;
  if (local_98 != (void *)0x0) {
    operator_delete__(local_98);
  }
  if (-1 < (int)local_a4) {
    FUN_1002305e4(*(undefined8 *)(param_1[0x3fc] + (ulong)local_a4 * 8));
    std::string::operator=(this,(string *)&DAT_101d91198);
  }
LAB_1002300e0:
  (**(code **)(*param_1 + 0x150))(param_1);
  if (local_88 != (void *)0x0) {
    operator_delete__(local_88);
  }
  if (local_78 != (void *)0x0) {
    operator_delete__(local_78);
  }
  if (local_68 != (void *)0x0) {
    operator_delete__(local_68);
  }
  return;
}




void thunk_FUN_100225acc(void)

{
  FUN_100225acc();
  return;
}

