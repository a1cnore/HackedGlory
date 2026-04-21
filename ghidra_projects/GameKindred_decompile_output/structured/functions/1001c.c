// functions/1001c — 273 functions
#include "GameKindred.h"




long * FUN_1001c0018(long *param_1,undefined1 param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  undefined **ppuVar4;
  int iVar5;
  uint uVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  undefined1 auStack_80 [8];
  void *local_78;
  undefined1 auStack_70 [8];
  void *local_68;
  undefined8 local_60;
  void *local_58;
  
  puVar7 = (undefined8 *)FUN_1006421a8();
  *puVar7 = &PTR_FUN_1014653b8;
  puVar7 = puVar7 + 0x11;
  FUN_10064e264(puVar7);
  plVar1 = param_1 + 0x28;
  FUN_1006421a8(plVar1);
  param_1[0x28] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar2 = param_1 + 0x39;
  thunk_FUN_100650e64(plVar2);
  plVar3 = param_1 + 0x5f;
  thunk_FUN_1001cd1dc(plVar3);
  *(undefined4 *)(param_1 + 0x8a) = 0;
  *(undefined1 *)((long)param_1 + 0x454) = param_2;
  *(undefined1 *)((long)param_1 + 0x455) = 0;
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  FUN_100642bd8(plVar1,plVar2,1);
  FUN_100642bd8(plVar1,plVar3,1);
  (**(code **)(*param_1 + 0x78))(param_1,puVar7,1);
  iVar5 = FUN_100126c88();
  local_60 = 0x3f0000003f800000;
  (**(code **)(param_1[0x28] + 0x28))(plVar1,&local_60);
  ppuVar4 = &PTR_s_build___Fonts_Brandon_Bold_60_fo_10184e240;
  if (iVar5 == 0) {
    ppuVar4 = &PTR_s_build___Fonts_Brandon_Bold_48_fo_10184e238;
  }
  FUN_100651594(plVar2,*ppuVar4,&DAT_10115a168);
  uVar6 = *(uint *)((long)param_1 + 0x24c);
  if ((uVar6 & 0x7f80) != 0x7900) {
    *(uint *)((long)param_1 + 0x24c) = uVar6 & 0xffff8000 | uVar6 & 0x7f | 0x7900;
    FUN_1000200a0(plVar2);
  }
  uVar10 = 0;
  if (*(char *)((long)param_1 + 0x454) != '\0') {
    uVar10 = 3;
  }
  FUN_100651700(plVar2,uVar10);
  FUN_1000f0f78(&local_60,*(undefined1 *)((long)param_1 + 0x454),0,0);
  FUN_1006513c0(plVar2,&local_60);
  if (local_58 != (void *)0x0) {
    operator_delete__(local_58);
  }
  local_60 = 0x3f0000003f800000;
  (**(code **)(param_1[0x39] + 0x28))(plVar2,&local_60);
  ppuVar4 = &PTR_s_build___Fonts_Brandon_Bold_48_fo_10184e238;
  if (iVar5 == 0) {
    ppuVar4 = &PTR_s_build___Fonts_Brandon_Bold_36_fo_10184e228;
  }
  FUN_100651594(plVar3,*ppuVar4,&DAT_10115a168);
  uVar6 = *(uint *)((long)param_1 + 0x37c);
  if ((uVar6 & 0x7f80) != 0x4c80) {
    *(uint *)((long)param_1 + 0x37c) = uVar6 & 0xffff8000 | uVar6 & 0x7f | 0x4c80;
    FUN_1000200a0(plVar3);
  }
  uVar10 = 0;
  if (*(char *)((long)param_1 + 0x454) != '\0') {
    uVar10 = 3;
  }
  FUN_100651700(plVar3,uVar10);
  local_60 = 0x3f0000003f800000;
  (**(code **)(param_1[0x5f] + 0x28))(plVar3,&local_60);
  *(uint *)((long)param_1 + 0x10c) = *(uint *)((long)param_1 + 0x10c) | 0x10;
  if ((*(float *)(param_1 + 0x1b) != 1.0) || (*(float *)((long)param_1 + 0xdc) != 0.5)) {
    param_1[0x1b] = 0x3f0000003f800000;
    FUN_1000200a0(puVar7);
  }
  FUN_10015d3ec();
  uVar6 = FUN_100166890();
  if (uVar6 < 0x20) {
    FUN_10015d3ec();
    lVar8 = FUN_1001668dc();
    if (lVar8 < 1) {
      uVar9 = FUN_1004e0150("FRONTEND_SEASON_EXPIRED_LABEL",0);
      thunk_FUN_1004e439c(&local_60,uVar9);
      FUN_1004e3120(auStack_70,"[SEASON_NAME_NEXT]");
      FUN_1000f100c(auStack_80,*(undefined1 *)((long)param_1 + 0x454),0,0);
      FUN_1004e3bc4(&local_60,0,auStack_70,auStack_80);
      if (local_78 != (void *)0x0) {
        operator_delete__(local_78);
      }
      if (local_68 != (void *)0x0) {
        operator_delete__(local_68);
      }
      FUN_1004e3120(auStack_70,"get ready for stuff in winter 2016");
      FUN_1006513c0(plVar3,auStack_70);
      if (local_68 != (void *)0x0) {
        operator_delete__(local_68);
      }
      if (local_58 != (void *)0x0) {
        operator_delete__(local_58);
      }
    }
    else {
      uVar9 = FUN_1004e0150("FRONTEND_COMPETITIVE_SEASON_DAYS_REMAINING",0);
      FUN_1001cd23c(plVar3,uVar9,1,0);
      FUN_10015d3ec();
      local_60 = FUN_1001668dc();
      FUN_1001cd374(plVar3,&local_60);
      *(undefined1 *)((long)param_1 + 0x455) = 0;
    }
  }
  else {
    lVar8 = FUN_1001340a4();
    FUN_1000f1058(&local_60,*(undefined4 *)(lVar8 + 0x10),*(undefined1 *)((long)param_1 + 0x454));
    FUN_1001cd23c(plVar3,&local_60,0,0);
    if (local_58 != (void *)0x0) {
      operator_delete__(local_58);
    }
    *(undefined1 *)((long)param_1 + 0x455) = 1;
  }
  FUN_1001c03dc(param_1);
  return param_1;
}




void FUN_1001c03dc(undefined1 param_1 [16],float param_2,long param_3)

{
  long lVar1;
  long lVar2;
  bool bVar3;
  float fVar4;
  float fVar5;
  undefined4 local_48;
  float fStack_44;
  
  lVar1 = param_3 + 0x1c8;
  FUN_100651700(lVar1,0);
  FUN_100651708(0xbf800000,lVar1,1);
  lVar2 = param_3 + 0x2f8;
  FUN_100651700(lVar2,0);
  FUN_100651708(0xbf800000,lVar2,1);
  if (*(char *)(param_3 + 0x454) == '\0') {
    FUN_100651184(lVar1);
    fVar4 = param_2 * 0.5 + 25.0;
    fVar5 = *(float *)(param_3 + 0x33c);
    if (fVar5 == fVar4) goto LAB_1001c050c;
  }
  else {
    fVar4 = (float)FUN_10064259c(lVar1);
    fVar5 = (float)FUN_100651184(lVar2);
    if (fVar4 <= fVar5) {
      fVar4 = fVar5;
    }
    FUN_100651708(fVar4,lVar1,1);
    FUN_100651708(fVar4,lVar2,1);
    FUN_100651184(lVar1);
    param_2 = -param_2;
    fVar5 = *(float *)(param_3 + 0x208);
    fVar4 = *(float *)(param_3 + 0x20c);
    bVar3 = false;
    if ((fVar5 == 0.0) && (bVar3 = false, !NAN(fVar4) && !NAN(param_2))) {
      bVar3 = fVar4 == param_2;
    }
    if (!bVar3) {
      *(undefined4 *)(param_3 + 0x208) = 0;
      *(float *)(param_3 + 0x20c) = param_2;
      FUN_1000200a0(lVar1);
      fVar4 = *(float *)(param_3 + 0x20c);
    }
    FUN_10064259c(lVar1);
    fVar4 = fVar4 + fVar5 + 25.0;
    fVar5 = *(float *)(param_3 + 0x338);
    if ((fVar5 == 0.0) && (fVar5 = *(float *)(param_3 + 0x33c), fVar5 == fVar4)) goto LAB_1001c050c;
    *(undefined4 *)(param_3 + 0x338) = 0;
  }
  *(float *)(param_3 + 0x33c) = fVar4;
  FUN_1000200a0(lVar2);
LAB_1001c050c:
  local_48 = FUN_10064259c(lVar1);
  fStack_44 = fVar5;
  FUN_10064e48c(param_3 + 0x88,&local_48);
  return;
}




long * thunk_FUN_1001c0018(long *param_1,undefined1 param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  undefined **ppuVar4;
  int iVar5;
  uint uVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  undefined1 auStack_80 [8];
  void *pvStack_78;
  undefined1 auStack_70 [8];
  void *pvStack_68;
  undefined8 uStack_60;
  void *pvStack_58;
  
  puVar7 = (undefined8 *)FUN_1006421a8();
  *puVar7 = &PTR_FUN_1014653b8;
  puVar7 = puVar7 + 0x11;
  FUN_10064e264(puVar7);
  plVar1 = param_1 + 0x28;
  FUN_1006421a8(plVar1);
  param_1[0x28] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar2 = param_1 + 0x39;
  thunk_FUN_100650e64(plVar2);
  plVar3 = param_1 + 0x5f;
  thunk_FUN_1001cd1dc(plVar3);
  *(undefined4 *)(param_1 + 0x8a) = 0;
  *(undefined1 *)((long)param_1 + 0x454) = param_2;
  *(undefined1 *)((long)param_1 + 0x455) = 0;
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  FUN_100642bd8(plVar1,plVar2,1);
  FUN_100642bd8(plVar1,plVar3,1);
  (**(code **)(*param_1 + 0x78))(param_1,puVar7,1);
  iVar5 = FUN_100126c88();
  uStack_60 = 0x3f0000003f800000;
  (**(code **)(param_1[0x28] + 0x28))(plVar1,&uStack_60);
  ppuVar4 = &PTR_s_build___Fonts_Brandon_Bold_60_fo_10184e240;
  if (iVar5 == 0) {
    ppuVar4 = &PTR_s_build___Fonts_Brandon_Bold_48_fo_10184e238;
  }
  FUN_100651594(plVar2,*ppuVar4,&DAT_10115a168);
  uVar6 = *(uint *)((long)param_1 + 0x24c);
  if ((uVar6 & 0x7f80) != 0x7900) {
    *(uint *)((long)param_1 + 0x24c) = uVar6 & 0xffff8000 | uVar6 & 0x7f | 0x7900;
    FUN_1000200a0(plVar2);
  }
  uVar10 = 0;
  if (*(char *)((long)param_1 + 0x454) != '\0') {
    uVar10 = 3;
  }
  FUN_100651700(plVar2,uVar10);
  FUN_1000f0f78(&uStack_60,*(undefined1 *)((long)param_1 + 0x454),0,0);
  FUN_1006513c0(plVar2,&uStack_60);
  if (pvStack_58 != (void *)0x0) {
    operator_delete__(pvStack_58);
  }
  uStack_60 = 0x3f0000003f800000;
  (**(code **)(param_1[0x39] + 0x28))(plVar2,&uStack_60);
  ppuVar4 = &PTR_s_build___Fonts_Brandon_Bold_48_fo_10184e238;
  if (iVar5 == 0) {
    ppuVar4 = &PTR_s_build___Fonts_Brandon_Bold_36_fo_10184e228;
  }
  FUN_100651594(plVar3,*ppuVar4,&DAT_10115a168);
  uVar6 = *(uint *)((long)param_1 + 0x37c);
  if ((uVar6 & 0x7f80) != 0x4c80) {
    *(uint *)((long)param_1 + 0x37c) = uVar6 & 0xffff8000 | uVar6 & 0x7f | 0x4c80;
    FUN_1000200a0(plVar3);
  }
  uVar10 = 0;
  if (*(char *)((long)param_1 + 0x454) != '\0') {
    uVar10 = 3;
  }
  FUN_100651700(plVar3,uVar10);
  uStack_60 = 0x3f0000003f800000;
  (**(code **)(param_1[0x5f] + 0x28))(plVar3,&uStack_60);
  *(uint *)((long)param_1 + 0x10c) = *(uint *)((long)param_1 + 0x10c) | 0x10;
  if ((*(float *)(param_1 + 0x1b) != 1.0) || (*(float *)((long)param_1 + 0xdc) != 0.5)) {
    param_1[0x1b] = 0x3f0000003f800000;
    FUN_1000200a0(puVar7);
  }
  FUN_10015d3ec();
  uVar6 = FUN_100166890();
  if (uVar6 < 0x20) {
    FUN_10015d3ec();
    lVar8 = FUN_1001668dc();
    if (lVar8 < 1) {
      uVar9 = FUN_1004e0150("FRONTEND_SEASON_EXPIRED_LABEL",0);
      thunk_FUN_1004e439c(&uStack_60,uVar9);
      FUN_1004e3120(auStack_70,"[SEASON_NAME_NEXT]");
      FUN_1000f100c(auStack_80,*(undefined1 *)((long)param_1 + 0x454),0,0);
      FUN_1004e3bc4(&uStack_60,0,auStack_70,auStack_80);
      if (pvStack_78 != (void *)0x0) {
        operator_delete__(pvStack_78);
      }
      if (pvStack_68 != (void *)0x0) {
        operator_delete__(pvStack_68);
      }
      FUN_1004e3120(auStack_70,"get ready for stuff in winter 2016");
      FUN_1006513c0(plVar3,auStack_70);
      if (pvStack_68 != (void *)0x0) {
        operator_delete__(pvStack_68);
      }
      if (pvStack_58 != (void *)0x0) {
        operator_delete__(pvStack_58);
      }
    }
    else {
      uVar9 = FUN_1004e0150("FRONTEND_COMPETITIVE_SEASON_DAYS_REMAINING",0);
      FUN_1001cd23c(plVar3,uVar9,1,0);
      FUN_10015d3ec();
      uStack_60 = FUN_1001668dc();
      FUN_1001cd374(plVar3,&uStack_60);
      *(undefined1 *)((long)param_1 + 0x455) = 0;
    }
  }
  else {
    lVar8 = FUN_1001340a4();
    FUN_1000f1058(&uStack_60,*(undefined4 *)(lVar8 + 0x10),*(undefined1 *)((long)param_1 + 0x454));
    FUN_1001cd23c(plVar3,&uStack_60,0,0);
    if (pvStack_58 != (void *)0x0) {
      operator_delete__(pvStack_58);
    }
    *(undefined1 *)((long)param_1 + 0x455) = 1;
  }
  FUN_1001c03dc(param_1);
  return param_1;
}




void FUN_1001c0544(long param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  char cVar6;
  undefined1 auStack_68 [8];
  void *local_60;
  undefined1 auStack_58 [8];
  void *local_50;
  long local_48;
  undefined1 auStack_40 [8];
  void *local_38;
  
  iVar1 = *(int *)(param_1 + 0x450);
  lVar4 = FUN_1001340a4();
  if (iVar1 != *(int *)(lVar4 + 0x10)) {
    lVar4 = FUN_1001340a4();
    uVar2 = *(undefined4 *)(lVar4 + 0x10);
    *(undefined4 *)(param_1 + 0x450) = uVar2;
    FUN_1000f0ec8(auStack_40,uVar2,*(undefined1 *)(param_1 + 0x454),0,0);
    FUN_1006513c0(param_1 + 0x1c8,auStack_40);
    if (local_38 != (void *)0x0) {
      operator_delete__(local_38);
    }
  }
  FUN_10015d3ec();
  uVar3 = FUN_100166890();
  FUN_10015d3ec();
  lVar4 = FUN_1001668dc();
  cVar6 = *(char *)(param_1 + 0x455);
  local_48 = lVar4;
  if ((cVar6 == '\0') && (0x1f < uVar3)) {
    lVar4 = FUN_1001340a4();
    FUN_1000f1058(auStack_40,*(undefined4 *)(lVar4 + 0x10),*(undefined1 *)(param_1 + 0x454));
    FUN_1001cd23c(param_1 + 0x2f8,auStack_40,0,0);
    if (local_38 != (void *)0x0) {
      operator_delete__(local_38);
    }
    *(undefined1 *)(param_1 + 0x455) = 1;
  }
  else {
    if ((cVar6 != '\0') && (uVar3 < 0x20)) {
      if (lVar4 < 1) {
        uVar5 = FUN_1004e0150("FRONTEND_SEASON_EXPIRED_LABEL",0);
        thunk_FUN_1004e439c(auStack_40,uVar5);
        FUN_1004e3120(auStack_58,"[NEXT_SEASON_NAME]");
        FUN_1000f100c(auStack_68,*(undefined1 *)(param_1 + 0x454),0,0);
        FUN_1004e3bc4(auStack_40,0,auStack_58,auStack_68);
        if (local_60 != (void *)0x0) {
          operator_delete__(local_60);
        }
        if (local_50 != (void *)0x0) {
          operator_delete__(local_50);
        }
        FUN_1004e3120(auStack_58,"Get ready for Winter season 2016");
        FUN_1006513c0(param_1 + 0x2f8,auStack_58);
        if (local_50 != (void *)0x0) {
          operator_delete__(local_50);
        }
        if (local_38 != (void *)0x0) {
          operator_delete__(local_38);
        }
      }
      else {
        uVar5 = FUN_1004e0150("FRONTEND_COMPETITIVE_SEASON_DAYS_REMAINING",0);
        FUN_1001cd23c(param_1 + 0x2f8,uVar5,1,0);
        FUN_1001cd374(param_1 + 0x2f8,&local_48);
        lVar4 = local_48;
      }
      cVar6 = '\0';
      *(undefined1 *)(param_1 + 0x455) = 0;
    }
    if ((cVar6 == '\0') && (0 < lVar4)) {
      FUN_1001cd27c(param_1 + 0x2f8);
    }
  }
  return;
}




void FUN_1001c0740(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1014653b8;
  param_1[0x5f] = &PTR_FUN_10145eb78;
  param_1[0x76] = &PTR_FUN_10145ecf0;
  if ((void *)param_1[0x87] != (void *)0x0) {
    operator_delete__((void *)param_1[0x87]);
    param_1[0x87] = 0;
    param_1[0x86] = 0;
  }
  FUN_100651068(param_1 + 0x5f);
  thunk_FUN_100651068(param_1 + 0x39);
  FUN_10064221c(param_1 + 0x28);
  thunk_FUN_10064e2bc(param_1 + 0x11);
  FUN_10064221c(param_1);
  return;
}




void FUN_1001c07b8(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_1014653b8;
  param_1[0x5f] = &PTR_FUN_10145eb78;
  param_1[0x76] = &PTR_FUN_10145ecf0;
  if ((void *)param_1[0x87] != (void *)0x0) {
    operator_delete__((void *)param_1[0x87]);
    param_1[0x87] = 0;
    param_1[0x86] = 0;
  }
  FUN_100651068(param_1 + 0x5f);
  thunk_FUN_100651068(param_1 + 0x39);
  FUN_10064221c(param_1 + 0x28);
  thunk_FUN_10064e2bc(param_1 + 0x11);
  pvVar1 = (void *)FUN_10064221c(param_1);
  operator_delete(pvVar1);
  return;
}




void thunk_FUN_1001c03dc(void)

{
  FUN_1001c03dc();
  return;
}




long * FUN_1001c0838(long *param_1)

{
  long *plVar1;
  long *plVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)FUN_1006421a8();
  *puVar3 = &PTR_thunk_FUN_100191808_101460c00;
  puVar3 = puVar3 + 0x11;
  thunk_FUN_100652c08(puVar3);
  plVar1 = param_1 + 0x2f;
  thunk_FUN_100652c08(plVar1);
  plVar2 = param_1 + 0x4d;
  thunk_FUN_100652c08(plVar2);
  (**(code **)(*param_1 + 0x78))(param_1,puVar3,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  FUN_100652cac(puVar3,PTR_s_build___MenuPartsCommon_tga_101854970,"white_background");
  FUN_100652dd4(puVar3,&DAT_10115a168,2);
  FUN_100652cac(plVar1,PTR_s_build___MenuPartsCommon_tga_101854970,"white_background");
  FUN_100652dd4(plVar1,&DAT_10115a168,2);
  FUN_100652cac(plVar2,PTR_s_build___MenuPartsCommon_tga_101854970,"white_background");
  FUN_100652dd4(plVar2,&DAT_10115a168,2);
  return param_1;
}




long * thunk_FUN_1001c0838(long *param_1)

{
  long *plVar1;
  long *plVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)FUN_1006421a8();
  *puVar3 = &PTR_thunk_FUN_100191808_101460c00;
  puVar3 = puVar3 + 0x11;
  thunk_FUN_100652c08(puVar3);
  plVar1 = param_1 + 0x2f;
  thunk_FUN_100652c08(plVar1);
  plVar2 = param_1 + 0x4d;
  thunk_FUN_100652c08(plVar2);
  (**(code **)(*param_1 + 0x78))(param_1,puVar3,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  FUN_100652cac(puVar3,PTR_s_build___MenuPartsCommon_tga_101854970,"white_background");
  FUN_100652dd4(puVar3,&DAT_10115a168,2);
  FUN_100652cac(plVar1,PTR_s_build___MenuPartsCommon_tga_101854970,"white_background");
  FUN_100652dd4(plVar1,&DAT_10115a168,2);
  FUN_100652cac(plVar2,PTR_s_build___MenuPartsCommon_tga_101854970,"white_background");
  FUN_100652dd4(plVar2,&DAT_10115a168,2);
  return param_1;
}




void FUN_1001c0968(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long *param_5,undefined8 param_6)

{
  undefined8 uVar1;
  long local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  long local_58;
  
  local_58 = param_5[8];
  uVar1 = param_2;
  local_60 = (**(code **)(*param_5 + 0x50))(param_5);
  uStack_5c = (undefined4)uVar1;
  local_68 = param_5[10];
  FUN_1001c0a00(param_1,param_2,param_3,param_4,&local_58,&local_60,&local_68,param_6);
  return;
}




void FUN_1001c0a00(float param_1,undefined8 param_2,float param_3,long *param_4,float *param_5,
                  float *param_6,float *param_7,int param_8)

{
  long *plVar1;
  bool bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined8 local_78;
  
  fVar5 = param_5[1];
  fVar6 = (float)(int)param_6[1];
  fVar4 = param_7[1];
  plVar1 = param_4 + 0x11;
  fVar3 = (float)param_2;
  param_1 = param_1 - fVar3;
  FUN_10064e47c(param_1,param_2,plVar1);
  if (param_8 == 0) {
    bVar2 = false;
    if ((*(float *)((long)param_4 + 0xcc) == 0.0) &&
       (bVar2 = false, !NAN(*(float *)(param_4 + 0x19)))) {
      bVar2 = *(float *)(param_4 + 0x19) == 0.0;
    }
    if (!bVar2) {
      param_4[0x19] = 0;
      FUN_1000200a0(plVar1);
    }
    local_78 = 0x3f800000;
    (**(code **)(param_4[0x11] + 0x28))(plVar1,&local_78);
    FUN_10064e47c(param_2,fVar6,param_4 + 0x2f);
    plVar1 = param_4 + 0x4d;
    FUN_10064e47c(param_1,param_2,plVar1);
    bVar2 = false;
    if ((*(float *)(param_4 + 0x55) == 0.0) &&
       (bVar2 = false, !NAN(*(float *)((long)param_4 + 0x2ac)) && !NAN(fVar6))) {
      bVar2 = *(float *)((long)param_4 + 0x2ac) == fVar6;
    }
    if (!bVar2) {
      *(undefined4 *)(param_4 + 0x55) = 0;
      *(float *)((long)param_4 + 0x2ac) = fVar6;
      FUN_1000200a0(plVar1);
    }
    local_78 = NEON_fmov(0x3f800000,4);
    (**(code **)(param_4[0x4d] + 0x28))(plVar1,&local_78);
    fVar3 = (param_3 - fVar3) + *param_5 + *param_6 * (1.0 - *param_7);
  }
  else {
    if (*(float *)(param_4 + 0x19) != fVar3) {
      *(float *)(param_4 + 0x19) = fVar3;
      FUN_1000200a0(plVar1);
    }
    FUN_10064e47c(param_2,fVar6,param_4 + 0x2f);
    plVar1 = param_4 + 0x4d;
    FUN_10064e47c(param_1,param_2,plVar1);
    bVar2 = false;
    if ((*(float *)(param_4 + 0x55) == fVar3) &&
       (bVar2 = false, !NAN(*(float *)((long)param_4 + 0x2ac)) && !NAN(fVar6))) {
      bVar2 = *(float *)((long)param_4 + 0x2ac) == fVar6;
    }
    if (!bVar2) {
      *(float *)(param_4 + 0x55) = fVar3;
      *(float *)((long)param_4 + 0x2ac) = fVar6;
      FUN_1000200a0(plVar1);
    }
    local_78 = 0x3f80000000000000;
    (**(code **)(param_4[0x4d] + 0x28))(plVar1,&local_78);
    fVar3 = *param_5 - (param_3 + *param_7 * *param_6);
  }
  fVar4 = (float)(int)(fVar5 - fVar6 * fVar4);
  if ((*(float *)(param_4 + 8) != fVar3) || (*(float *)((long)param_4 + 0x44) != fVar4)) {
    *(float *)(param_4 + 8) = fVar3;
    *(float *)((long)param_4 + 0x44) = fVar4;
    FUN_1000200a0(param_4);
  }
  local_78 = 0;
  (**(code **)(*param_4 + 0x28))(param_4,&local_78);
  return;
}




long * FUN_1001c0c34(long *param_1,int param_2)

{
  long lVar1;
  undefined **ppuVar2;
  uint uVar3;
  bool bVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  undefined8 local_88;
  
  puVar5 = (undefined8 *)FUN_10064e20c();
  *puVar5 = &PTR_FUN_10145e588;
  lVar6 = 0xb8;
  do {
    thunk_FUN_100652c08((long)param_1 + lVar6);
    lVar6 = lVar6 + 0xf0;
  } while (lVar6 != 0x568);
  lVar7 = 0;
  lVar6 = 0;
  param_1[0xae] = 0;
  param_1[0xad] = 0x3e99999a3dcccccd;
  do {
    lVar1 = (long)param_1 + lVar7 + 0xb8;
    (**(code **)(*param_1 + 0x78))(param_1,lVar1,1);
    ppuVar2 = &PTR_s_build___HUDPartsCommon_atlas_10184e098;
    if (param_2 == 0) {
      ppuVar2 = &PTR_s_build___MenuPartsCommon_tga_101854970;
    }
    FUN_100652cac(lVar1,*ppuVar2,"circle_button_fill");
    fVar9 = *(float *)((long)param_1 + lVar7 + 0x104);
    bVar4 = false;
    if ((*(float *)((long)param_1 + lVar7 + 0x100) == 0.125) && (bVar4 = false, !NAN(fVar9))) {
      bVar4 = fVar9 == 0.125;
    }
    if (!bVar4) {
      *(undefined8 *)((long)param_1 + lVar7 + 0x100) = 0x3e0000003e000000;
      FUN_1000200a0(lVar1);
    }
    uVar3 = *(uint *)((long)param_1 + lVar7 + 0x13c);
    if ((uVar3 & 0x7f80) != 0) {
      *(uint *)((long)param_1 + lVar7 + 0x13c) = uVar3 & 0xffff807f;
      FUN_1000200a0(lVar1);
    }
    fVar9 = (float)(**(code **)(*(long *)((long)param_1 + lVar7 + 0xb8) + 0x48))(lVar1);
    fVar9 = (fVar9 * 0.125 + 10.0) * (float)(int)lVar6;
    fVar10 = *(float *)((long)param_1 + lVar7 + 0xf8);
    if ((fVar10 != fVar9) || (fVar10 = *(float *)((long)param_1 + lVar7 + 0xfc), fVar10 != 0.0)) {
      *(float *)((long)param_1 + lVar7 + 0xf8) = fVar9;
      *(undefined4 *)((long)param_1 + lVar7 + 0xfc) = 0;
      FUN_1000200a0(lVar1);
    }
    local_88 = 0;
    (**(code **)(*(long *)((long)param_1 + lVar7 + 0xb8) + 0x28))(lVar1,&local_88);
    lVar6 = lVar6 + 1;
    lVar7 = lVar7 + 0xf0;
  } while (lVar6 != 5);
  uVar8 = (**(code **)(*param_1 + 0x58))(param_1,0,0,1,1);
  local_88 = CONCAT44(fVar10,uVar8);
  FUN_10064e48c(param_1,&local_88);
  return param_1;
}




long * thunk_FUN_1001c0c34(long *param_1,int param_2)

{
  long lVar1;
  undefined **ppuVar2;
  uint uVar3;
  bool bVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  undefined8 uStack_88;
  
  puVar5 = (undefined8 *)FUN_10064e20c();
  *puVar5 = &PTR_FUN_10145e588;
  lVar6 = 0xb8;
  do {
    thunk_FUN_100652c08((long)param_1 + lVar6);
    lVar6 = lVar6 + 0xf0;
  } while (lVar6 != 0x568);
  lVar7 = 0;
  lVar6 = 0;
  param_1[0xae] = 0;
  param_1[0xad] = 0x3e99999a3dcccccd;
  do {
    lVar1 = (long)param_1 + lVar7 + 0xb8;
    (**(code **)(*param_1 + 0x78))(param_1,lVar1,1);
    ppuVar2 = &PTR_s_build___HUDPartsCommon_atlas_10184e098;
    if (param_2 == 0) {
      ppuVar2 = &PTR_s_build___MenuPartsCommon_tga_101854970;
    }
    FUN_100652cac(lVar1,*ppuVar2,"circle_button_fill");
    fVar9 = *(float *)((long)param_1 + lVar7 + 0x104);
    bVar4 = false;
    if ((*(float *)((long)param_1 + lVar7 + 0x100) == 0.125) && (bVar4 = false, !NAN(fVar9))) {
      bVar4 = fVar9 == 0.125;
    }
    if (!bVar4) {
      *(undefined8 *)((long)param_1 + lVar7 + 0x100) = 0x3e0000003e000000;
      FUN_1000200a0(lVar1);
    }
    uVar3 = *(uint *)((long)param_1 + lVar7 + 0x13c);
    if ((uVar3 & 0x7f80) != 0) {
      *(uint *)((long)param_1 + lVar7 + 0x13c) = uVar3 & 0xffff807f;
      FUN_1000200a0(lVar1);
    }
    fVar9 = (float)(**(code **)(*(long *)((long)param_1 + lVar7 + 0xb8) + 0x48))(lVar1);
    fVar9 = (fVar9 * 0.125 + 10.0) * (float)(int)lVar6;
    fVar10 = *(float *)((long)param_1 + lVar7 + 0xf8);
    if ((fVar10 != fVar9) || (fVar10 = *(float *)((long)param_1 + lVar7 + 0xfc), fVar10 != 0.0)) {
      *(float *)((long)param_1 + lVar7 + 0xf8) = fVar9;
      *(undefined4 *)((long)param_1 + lVar7 + 0xfc) = 0;
      FUN_1000200a0(lVar1);
    }
    uStack_88 = 0;
    (**(code **)(*(long *)((long)param_1 + lVar7 + 0xb8) + 0x28))(lVar1,&uStack_88);
    lVar6 = lVar6 + 1;
    lVar7 = lVar7 + 0xf0;
  } while (lVar6 != 5);
  uVar8 = (**(code **)(*param_1 + 0x58))(param_1,0,0,1,1);
  uStack_88 = CONCAT44(fVar10,uVar8);
  FUN_10064e48c(param_1,&uStack_88);
  return param_1;
}




void FUN_1001c0e10(long param_1)

{
  ushort *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ushort uVar4;
  long lVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  lVar6 = 0;
  fVar9 = *(float *)(param_1 + 0x568) * 5.0 + *(float *)(param_1 + 0x56c) * 2.0;
  lVar5 = param_1 + 0xb8;
  do {
    if ((*(uint *)(lVar5 + 0x84) & 0x7f80) != 0) {
      *(uint *)(lVar5 + 0x84) = *(uint *)(lVar5 + 0x84) & 0xffff807f;
      FUN_1000200a0(lVar5);
    }
    fVar7 = *(float *)(param_1 + 0x568);
    uVar2 = FUN_10001f55c();
    FUN_10063f0e8(fVar7 * (float)(int)lVar6);
    uVar3 = FUN_100047714();
    FUN_10063fce0(0x3f800000);
    FUN_10063f0e8(*(undefined4 *)(param_1 + 0x56c),uVar3);
    FUN_10063f130(uVar3,FUN_10001f4c4);
    FUN_10001f55c();
    FUN_10063f0e8(*(undefined4 *)(param_1 + 0x570));
    uVar3 = FUN_100047714();
    FUN_10063fce0(0);
    FUN_10063f0e8(*(undefined4 *)(param_1 + 0x56c),uVar3);
    FUN_10063f130(uVar3,FUN_10001f4c4);
    fVar7 = *(float *)(param_1 + 0x568);
    fVar8 = *(float *)(param_1 + 0x56c);
    FUN_10001f55c();
    FUN_10063f0e8((fVar9 - (float)(int)lVar6 * fVar7) - (fVar8 + fVar8));
    FUN_100642324(lVar5);
    FUN_100642b7c(lVar5,uVar2);
    lVar6 = lVar6 + 1;
    lVar5 = lVar5 + 0xf0;
  } while (lVar6 != 5);
  uVar2 = FUN_10001f55c();
  FUN_10063f0e8(*(float *)(param_1 + 0x574) + fVar9);
  lVar5 = DAT_101dbd2f8;
  uVar4 = *(ushort *)(DAT_101dbd2f8 + 0x20010);
  puVar1 = (ushort *)(DAT_101dbd2f8 + 0x10 + (ulong)uVar4 * 0x40);
  if (uVar4 == *(ushort *)(DAT_101dbd2f8 + 0x20012)) {
    uVar4 = 0xffff;
  }
  else {
    uVar4 = *puVar1;
  }
  *(ushort *)(DAT_101dbd2f8 + 0x20010) = uVar4;
  *(int *)(lVar5 + 0x20014) = *(int *)(lVar5 + 0x20014) + 1;
  FUN_10063ee9c(puVar1);
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0;
  puVar1[0x11] = 0;
  puVar1[0x12] = 0;
  puVar1[0x13] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  *(undefined ***)puVar1 = &PTR_thunk_FUN_10063eeb4_10144bff8;
  *(int *)(lVar5 + 0x20020) = *(int *)(lVar5 + 0x20020) + 1;
  *(code **)(puVar1 + 8) = thunk_FUN_1001c0e10;
  *(long *)(puVar1 + 0x10) = param_1;
  FUN_100642324(param_1);
  FUN_100642b7c(param_1,uVar2);
  return;
}




void thunk_FUN_1001c0e10(void)

{
  FUN_1001c0e10();
  return;
}




void FUN_1001c102c(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = 0;
  do {
    lVar1 = param_1 + lVar2;
    FUN_100642324(lVar1 + 0xb8);
    if ((*(uint *)(lVar1 + 0x13c) & 0x7f80) != 0) {
      *(uint *)(lVar1 + 0x13c) = *(uint *)(lVar1 + 0x13c) & 0xffff807f;
      FUN_1000200a0(lVar1 + 0xb8);
    }
    lVar2 = lVar2 + 0xf0;
  } while (lVar2 != 0x4b0);
  FUN_100642324(param_1);
  return;
}




void FUN_1001c1090(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  long param_5)

{
  *(undefined4 *)(param_5 + 0x568) = param_1;
  *(undefined4 *)(param_5 + 0x56c) = param_2;
  *(undefined4 *)(param_5 + 0x570) = param_3;
  *(undefined4 *)(param_5 + 0x574) = param_4;
  return;
}




long * FUN_1001c10a4(long *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_10064e20c();
  *puVar1 = &PTR_thunk_FUN_1000cbf18_101455320;
  puVar1 = puVar1 + 0x17;
  FUN_1006421a8(puVar1);
  param_1[0x17] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  thunk_FUN_100652c08(param_1 + 0x28);
  thunk_FUN_100652c08(param_1 + 0x46);
  thunk_FUN_100652c08(param_1 + 100);
  thunk_FUN_100652c08(param_1 + 0x82);
  thunk_FUN_100652c08(param_1 + 0xa0);
  thunk_FUN_100652c08(param_1 + 0xbe);
  thunk_FUN_100652c08(param_1 + 0xdc);
  thunk_FUN_100652c08(param_1 + 0xfa);
  thunk_FUN_100652c08();
  thunk_FUN_100652c08();
  thunk_FUN_100652c08();
  *(undefined4 *)((long)param_1 + 0xb94) = 0x3f000000;
  *(undefined2 *)(param_1 + 0x173) = 0;
  (**(code **)(*param_1 + 0x78))(param_1,puVar1,1);
  FUN_100642bd8(puVar1,param_1 + 0x28,1);
  FUN_100642bd8(puVar1,param_1 + 0x46,1);
  FUN_100642bd8(puVar1,param_1 + 100,1);
  FUN_100642bd8(puVar1,param_1 + 0x82,1);
  FUN_100642bd8(puVar1,param_1 + 0xa0,1);
  FUN_100642bd8(puVar1,param_1 + 0xbe,1);
  FUN_100642bd8(puVar1,param_1 + 0xdc,1);
  FUN_100642bd8(puVar1,param_1 + 0xfa,1);
  FUN_100642bd8(puVar1,param_1 + 0x118,1);
  FUN_100642bd8(puVar1,param_1 + 0x136,1);
  FUN_100642bd8(puVar1,param_1 + 0x154,1);
  return param_1;
}




long * thunk_FUN_1001c10a4(long *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_10064e20c();
  *puVar1 = &PTR_thunk_FUN_1000cbf18_101455320;
  puVar1 = puVar1 + 0x17;
  FUN_1006421a8(puVar1);
  param_1[0x17] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  thunk_FUN_100652c08(param_1 + 0x28);
  thunk_FUN_100652c08(param_1 + 0x46);
  thunk_FUN_100652c08(param_1 + 100);
  thunk_FUN_100652c08(param_1 + 0x82);
  thunk_FUN_100652c08(param_1 + 0xa0);
  thunk_FUN_100652c08(param_1 + 0xbe);
  thunk_FUN_100652c08(param_1 + 0xdc);
  thunk_FUN_100652c08(param_1 + 0xfa);
  thunk_FUN_100652c08();
  thunk_FUN_100652c08();
  thunk_FUN_100652c08();
  *(undefined4 *)((long)param_1 + 0xb94) = 0x3f000000;
  *(undefined2 *)(param_1 + 0x173) = 0;
  (**(code **)(*param_1 + 0x78))(param_1,puVar1,1);
  FUN_100642bd8(puVar1,param_1 + 0x28,1);
  FUN_100642bd8(puVar1,param_1 + 0x46,1);
  FUN_100642bd8(puVar1,param_1 + 100,1);
  FUN_100642bd8(puVar1,param_1 + 0x82,1);
  FUN_100642bd8(puVar1,param_1 + 0xa0,1);
  FUN_100642bd8(puVar1,param_1 + 0xbe,1);
  FUN_100642bd8(puVar1,param_1 + 0xdc,1);
  FUN_100642bd8(puVar1,param_1 + 0xfa,1);
  FUN_100642bd8(puVar1,param_1 + 0x118,1);
  FUN_100642bd8(puVar1,param_1 + 0x136,1);
  FUN_100642bd8(puVar1,param_1 + 0x154,1);
  return param_1;
}




void FUN_1001c1270(float param_1,undefined8 param_2,undefined1 param_3 [16],long *param_4,
                  undefined4 param_5,int param_6)

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
  undefined **ppuVar12;
  bool bVar13;
  ulong uVar14;
  undefined *puVar15;
  float fVar16;
  float fVar17;
  long lVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float local_a8;
  float fStack_a4;
  
  fVar22 = param_3._0_4_;
  *(undefined4 *)(param_4 + 0x172) = param_5;
  FUN_10064e47c(param_2,param_3._0_8_);
  if (*(char *)((long)param_4 + 0xb99) == '\0') {
    *(char *)(param_4 + 0x173) = (char)param_6;
    ppuVar12 = &PTR_s_build___HUDPartsCommon_atlas_10184e098;
    if (param_6 == 0) {
      ppuVar12 = &PTR_s_build___MenuPartsCommon_tga_101854970;
    }
    puVar15 = *ppuVar12;
    FUN_100652ca4(param_4 + 0x28,puVar15);
    FUN_100652ca4(param_4 + 0x46,puVar15);
    FUN_100652ca4(param_4 + 100,puVar15);
    FUN_100652ca4(param_4 + 0x82,puVar15);
    FUN_100652ca4(param_4 + 0xa0,puVar15);
    FUN_100652ca4(param_4 + 0xbe,puVar15);
    FUN_100652ca4(param_4 + 0xdc,puVar15);
    FUN_100652ca4(param_4 + 0xfa,puVar15);
    FUN_100652ca4(param_4 + 0x118,puVar15);
    FUN_100652ca4(param_4 + 0x136,puVar15);
    plVar1 = param_4 + 0x154;
    FUN_100652cac(plVar1,puVar15,"white_background");
    if ((*(float *)(param_4 + 0x15e) != 0.5) || (*(float *)((long)param_4 + 0xaf4) != 0.5)) {
      param_4[0x15e] = (long)&DAT_3f0000003f000000;
      FUN_1000200a0(plVar1);
    }
    FUN_100652dd4(plVar1,&DAT_10115a164,2);
    *(undefined1 *)((long)param_4 + 0xb99) = 1;
  }
  if (param_1 != -1.0) {
    *(float *)((long)param_4 + 0xb94) = param_1;
  }
  plVar1 = param_4 + 0x136;
  uVar14 = FUN_100642d08(plVar1);
  if ((uVar14 & 1) == 0) {
    FUN_100642bd8(param_4 + 0x17,plVar1,1);
  }
  plVar2 = param_4 + 0x118;
  uVar14 = FUN_100642d08(plVar2);
  if ((uVar14 & 1) == 0) {
    FUN_100642bd8(param_4 + 0x17,plVar2,1);
  }
  fVar23 = (float)param_2;
  switch((int)param_4[0x172]) {
  case 0:
    plVar3 = param_4 + 0x28;
    FUN_100652cdc(plVar3,"arrow_bg_corner");
    if ((*(float *)(param_4 + 0x32) != 0.0) || (*(float *)((long)param_4 + 0x194) != 1.0)) {
      param_4[0x32] = 0x3f80000000000000;
      FUN_1000200a0(plVar3);
    }
    *(byte *)(param_4 + 0x43) = *(byte *)(param_4 + 0x43) & 0xfc;
    plVar4 = param_4 + 0x46;
    FUN_100652cdc(plVar4,"arrow_bg_corner");
    bVar13 = false;
    if ((*(float *)((long)param_4 + 0x284) == 0.0) &&
       (bVar13 = false, !NAN(*(float *)(param_4 + 0x50)))) {
      bVar13 = *(float *)(param_4 + 0x50) == 0.0;
    }
    if (!bVar13) {
      param_4[0x50] = 0;
      FUN_1000200a0(plVar4);
    }
    *(byte *)(param_4 + 0x61) = *(byte *)(param_4 + 0x61) & 0xfc | 2;
    plVar5 = param_4 + 100;
    FUN_100652cdc(plVar5,"arrow_bg_corner");
    if ((*(float *)(param_4 + 0x6e) != 1.0) || (*(float *)((long)param_4 + 0x374) != 0.0)) {
      param_4[0x6e] = 0x3f800000;
      FUN_1000200a0(plVar5);
    }
    *(byte *)(param_4 + 0x7f) = *(byte *)(param_4 + 0x7f) | 3;
    plVar6 = param_4 + 0x82;
    FUN_100652cdc(plVar6,"arrow_bg_corner");
    if ((*(float *)(param_4 + 0x8c) != 1.0) || (*(float *)((long)param_4 + 0x464) != 1.0)) {
      lVar18 = NEON_fmov(0x3f800000,4);
      param_4[0x8c] = lVar18;
      FUN_1000200a0(plVar6);
    }
    *(byte *)(param_4 + 0x9d) = *(byte *)(param_4 + 0x9d) & 0xfc | 1;
    plVar7 = param_4 + 0xa0;
    FUN_100652cdc(plVar7,"arrow_bg_bottom_edge");
    if ((*(float *)(param_4 + 0xaa) != 0.0) || (*(float *)((long)param_4 + 0x554) != 1.0)) {
      param_4[0xaa] = 0x3f80000000000000;
      FUN_1000200a0(plVar7);
    }
    *(byte *)(param_4 + 0xbb) = *(byte *)(param_4 + 0xbb) & 0xfc;
    plVar8 = param_4 + 0xbe;
    FUN_100652cdc(plVar8,"arrow_bg_left_edge");
    if ((*(float *)(param_4 + 200) != 0.0) || (*(float *)((long)param_4 + 0x644) != 0.5)) {
      param_4[200] = 0x3f00000000000000;
      FUN_1000200a0(plVar8);
    }
    *(byte *)(param_4 + 0xd9) = *(byte *)(param_4 + 0xd9) & 0xfc;
    plVar9 = param_4 + 0xdc;
    FUN_100652cdc(plVar9,"arrow_bg_bottom_edge");
    if ((*(float *)(param_4 + 0xe6) != 0.5) || (*(float *)((long)param_4 + 0x734) != 0.0)) {
      param_4[0xe6] = 0x3f000000;
      FUN_1000200a0(plVar9);
    }
    *(byte *)(param_4 + 0xf7) = *(byte *)(param_4 + 0xf7) & 0xfc | 2;
    plVar10 = param_4 + 0xfa;
    FUN_100652cdc(plVar10,"arrow_bg_left_edge");
    if ((*(float *)(param_4 + 0x104) != 1.0) || (*(float *)((long)param_4 + 0x824) != 0.5)) {
      param_4[0x104] = 0x3f0000003f800000;
      FUN_1000200a0(plVar10);
    }
    *(byte *)(param_4 + 0x115) = *(byte *)(param_4 + 0x115) & 0xfc | 1;
    FUN_100652cdc(plVar2,"arrow_bg_bottom_edge");
    if ((*(float *)(param_4 + 0x122) != 1.0) || (*(float *)((long)param_4 + 0x914) != 1.0)) {
      lVar18 = NEON_fmov(0x3f800000,4);
      param_4[0x122] = lVar18;
      FUN_1000200a0(plVar2);
    }
    *(byte *)(param_4 + 0x133) = *(byte *)(param_4 + 0x133) & 0xfc;
    FUN_100652cdc(plVar1,"arrow_bg_arrow");
    uVar19 = 0x3f000000;
    if ((*(float *)(param_4 + 0x140) != 0.5) || (*(float *)((long)param_4 + 0xa04) != 0.0)) {
      param_4[0x140] = 0x3f000000;
      FUN_1000200a0(plVar1);
    }
    *(byte *)(param_4 + 0x151) = *(byte *)(param_4 + 0x151) & 0xfc;
    uVar20 = FUN_100652e60(plVar3);
    fVar24 = (float)FUN_10065317c(plVar1);
    fVar25 = (float)uVar20;
    fVar24 = fVar24 + fVar25 * -0.5;
    fVar17 = fVar24 + fVar23;
    fVar24 = fVar24 / fVar17;
    FUN_100652e60(plVar1);
    local_a8 = param_1 - fVar24;
    fStack_a4 = ((*(float *)((long)param_4 + 0xb94) + -0.5) * fVar17) / fVar22 + 1.0;
    (**(code **)(*param_4 + 0x28))(param_4,&local_a8);
    plVar11 = param_4 + 0x154;
    fVar16 = (float)uVar19;
    FUN_10064e47c(fVar23 - fVar25 * 2.0,fVar22 - fVar16 * 2.0,plVar11);
    uVar21 = FUN_100652e60(plVar11);
    FUN_10064e47c(uVar21,uVar19,plVar9);
    fVar24 = (float)FUN_100652e60(plVar11);
    fVar17 = (float)FUN_100652e60(plVar1);
    FUN_10064e47c((fVar24 - fVar17) * *(float *)((long)param_4 + 0xb94),uVar19,plVar7);
    fVar24 = (float)FUN_100652e60(plVar11);
    fVar17 = (float)FUN_100652e60(plVar1);
    FUN_10064e47c((fVar24 - fVar17) - (fVar24 - fVar17) * *(float *)((long)param_4 + 0xb94),plVar2);
    fVar24 = (float)uVar19;
    FUN_100652e60(plVar11);
    FUN_10064e47c(uVar20,plVar8);
    local_a8 = (float)FUN_100652e60(plVar8);
    fStack_a4 = fVar24;
    FUN_10064e48c(plVar10,&local_a8);
    fVar17 = fVar23 * -0.5;
    fVar24 = fVar22 * 0.5;
    if ((*(float *)(param_4 + 0x30) != fVar17) || (*(float *)((long)param_4 + 0x184) != fVar24)) {
      *(float *)(param_4 + 0x30) = fVar17;
      *(float *)((long)param_4 + 0x184) = fVar24;
      FUN_1000200a0(plVar3);
    }
    fVar22 = fVar22 * -0.5;
    if ((*(float *)(param_4 + 0x4e) != fVar17) || (*(float *)((long)param_4 + 0x274) != fVar22)) {
      *(float *)(param_4 + 0x4e) = fVar17;
      *(float *)((long)param_4 + 0x274) = fVar22;
      FUN_1000200a0(plVar4);
    }
    fVar23 = fVar23 * 0.5;
    if ((*(float *)(param_4 + 0x6c) != fVar23) || (*(float *)((long)param_4 + 0x364) != fVar22)) {
      *(float *)(param_4 + 0x6c) = fVar23;
      *(float *)((long)param_4 + 0x364) = fVar22;
      FUN_1000200a0(plVar5);
    }
    if ((*(float *)(param_4 + 0x8a) != fVar23) || (*(float *)((long)param_4 + 0x454) != fVar24)) {
      *(float *)(param_4 + 0x8a) = fVar23;
      *(float *)((long)param_4 + 0x454) = fVar24;
      FUN_1000200a0(plVar6);
    }
    if ((*(float *)(param_4 + 0xa8) != fVar25 + fVar17) ||
       (*(float *)((long)param_4 + 0x544) != fVar24)) {
      *(float *)(param_4 + 0xa8) = fVar25 + fVar17;
      *(float *)((long)param_4 + 0x544) = fVar24;
      FUN_1000200a0(plVar7);
    }
    if ((*(float *)(param_4 + 0xc6) != fVar17) || (*(float *)((long)param_4 + 0x634) != 0.0)) {
      *(float *)(param_4 + 0xc6) = fVar17;
      *(undefined4 *)((long)param_4 + 0x634) = 0;
      FUN_1000200a0(plVar8);
    }
    if ((*(float *)(param_4 + 0x102) != fVar23) || (*(float *)((long)param_4 + 0x814) != 0.0)) {
      *(float *)(param_4 + 0x102) = fVar23;
      *(undefined4 *)((long)param_4 + 0x814) = 0;
      FUN_1000200a0(plVar10);
    }
    if ((*(float *)(param_4 + 0xe4) != 0.0) || (*(float *)((long)param_4 + 0x724) != fVar22)) {
      *(undefined4 *)(param_4 + 0xe4) = 0;
      *(float *)((long)param_4 + 0x724) = fVar22;
      FUN_1000200a0(plVar9);
    }
    if ((*(float *)(param_4 + 0x120) != fVar23 - fVar25) ||
       (*(float *)((long)param_4 + 0x904) != fVar24)) {
      *(float *)(param_4 + 0x120) = fVar23 - fVar25;
      *(float *)((long)param_4 + 0x904) = fVar24;
      FUN_1000200a0(plVar2);
    }
    fVar22 = *(float *)((long)param_4 + 0xb94);
    fVar23 = (float)FUN_100652e60(plVar11);
    fVar17 = (float)FUN_100652e60(plVar1);
    fVar23 = fVar23 * (fVar22 + -0.5) - (*(float *)((long)param_4 + 0xb94) + -0.5) * fVar17;
    fVar24 = fVar24 - fVar16;
    fVar22 = *(float *)(param_4 + 0x13e);
    if ((fVar22 != fVar23) || (fVar17 = *(float *)((long)param_4 + 0x9f4), fVar17 != fVar24)) {
      *(float *)(param_4 + 0x13e) = fVar23;
      *(float *)((long)param_4 + 0x9f4) = fVar24;
      FUN_1000200a0(plVar1);
      fVar22 = *(float *)(param_4 + 0x13e);
      fVar17 = *(float *)((long)param_4 + 0x9f4);
    }
    FUN_100652e60(plVar1);
    if ((*(float *)(param_4 + 0x1f) == -fVar22) &&
       (*(float *)((long)param_4 + 0xfc) == -(fVar23 + fVar17))) {
      return;
    }
    *(float *)(param_4 + 0x1f) = -fVar22;
    *(float *)((long)param_4 + 0xfc) = -(fVar23 + fVar17);
    break;
  case 1:
    plVar3 = param_4 + 0x28;
    FUN_100652cdc(plVar3,"arrow_bg_corner");
    if ((*(float *)(param_4 + 0x32) != 1.0) || (*(float *)((long)param_4 + 0x194) != 0.0)) {
      param_4[0x32] = 0x3f800000;
      FUN_1000200a0(plVar3);
    }
    *(byte *)(param_4 + 0x43) = *(byte *)(param_4 + 0x43) | 3;
    plVar4 = param_4 + 0x46;
    FUN_100652cdc(plVar4,"arrow_bg_corner");
    if ((*(float *)(param_4 + 0x50) != 1.0) || (*(float *)((long)param_4 + 0x284) != 1.0)) {
      lVar18 = NEON_fmov(0x3f800000,4);
      param_4[0x50] = lVar18;
      FUN_1000200a0(plVar4);
    }
    *(byte *)(param_4 + 0x61) = *(byte *)(param_4 + 0x61) & 0xfc | 1;
    plVar5 = param_4 + 100;
    FUN_100652cdc(plVar5,"arrow_bg_corner");
    if ((*(float *)(param_4 + 0x6e) != 0.0) || (*(float *)((long)param_4 + 0x374) != 1.0)) {
      param_4[0x6e] = 0x3f80000000000000;
      FUN_1000200a0(plVar5);
    }
    *(byte *)(param_4 + 0x7f) = *(byte *)(param_4 + 0x7f) & 0xfc;
    plVar6 = param_4 + 0x82;
    FUN_100652cdc(plVar6,"arrow_bg_corner");
    bVar13 = false;
    if ((*(float *)((long)param_4 + 0x464) == 0.0) &&
       (bVar13 = false, !NAN(*(float *)(param_4 + 0x8c)))) {
      bVar13 = *(float *)(param_4 + 0x8c) == 0.0;
    }
    if (!bVar13) {
      param_4[0x8c] = 0;
      FUN_1000200a0(plVar6);
    }
    *(byte *)(param_4 + 0x9d) = *(byte *)(param_4 + 0x9d) & 0xfc | 2;
    plVar7 = param_4 + 0xa0;
    FUN_100652cdc(plVar7,"arrow_bg_bottom_edge");
    bVar13 = false;
    if ((*(float *)((long)param_4 + 0x554) == 0.0) &&
       (bVar13 = false, !NAN(*(float *)(param_4 + 0xaa)))) {
      bVar13 = *(float *)(param_4 + 0xaa) == 0.0;
    }
    if (!bVar13) {
      param_4[0xaa] = 0;
      FUN_1000200a0(plVar7);
    }
    *(byte *)(param_4 + 0xbb) = *(byte *)(param_4 + 0xbb) & 0xfc | 2;
    plVar8 = param_4 + 0xbe;
    FUN_100652cdc(plVar8,"arrow_bg_left_edge");
    if ((*(float *)(param_4 + 200) != 0.0) || (*(float *)((long)param_4 + 0x644) != 0.5)) {
      param_4[200] = 0x3f00000000000000;
      FUN_1000200a0(plVar8);
    }
    *(byte *)(param_4 + 0xd9) = *(byte *)(param_4 + 0xd9) & 0xfc;
    plVar9 = param_4 + 0xdc;
    FUN_100652cdc(plVar9,"arrow_bg_bottom_edge");
    if ((*(float *)(param_4 + 0xe6) != 0.5) || (*(float *)((long)param_4 + 0x734) != 1.0)) {
      param_4[0xe6] = 0x3f8000003f000000;
      FUN_1000200a0(plVar9);
    }
    *(byte *)(param_4 + 0xf7) = *(byte *)(param_4 + 0xf7) & 0xfc;
    plVar10 = param_4 + 0xfa;
    FUN_100652cdc(plVar10,"arrow_bg_left_edge");
    if ((*(float *)(param_4 + 0x104) != 1.0) || (*(float *)((long)param_4 + 0x824) != 0.5)) {
      param_4[0x104] = 0x3f0000003f800000;
      FUN_1000200a0(plVar10);
    }
    *(byte *)(param_4 + 0x115) = *(byte *)(param_4 + 0x115) & 0xfc | 1;
    FUN_100652cdc(plVar2,"arrow_bg_bottom_edge");
    if ((*(float *)(param_4 + 0x122) != 1.0) || (*(float *)((long)param_4 + 0x914) != 0.0)) {
      param_4[0x122] = 0x3f800000;
      FUN_1000200a0(plVar2);
    }
    *(byte *)(param_4 + 0x133) = *(byte *)(param_4 + 0x133) & 0xfc | 2;
    FUN_100652cdc(plVar1,"arrow_bg_arrow");
    uVar19 = 0x3f000000;
    if ((*(float *)(param_4 + 0x140) != 0.5) ||
       (uVar19 = 0x3f800000, *(float *)((long)param_4 + 0xa04) != 1.0)) {
      param_4[0x140] = 0x3f8000003f000000;
      FUN_1000200a0(plVar1);
    }
    *(byte *)(param_4 + 0x151) = *(byte *)(param_4 + 0x151) & 0xfc | 2;
    uVar20 = FUN_100652e60(plVar3);
    fVar24 = (float)FUN_10065317c(plVar1);
    fVar25 = (float)uVar20;
    fVar24 = fVar24 + fVar25 * -0.5;
    fVar17 = fVar24 + fVar23;
    fVar24 = fVar24 / fVar17;
    FUN_100652e60(plVar1);
    local_a8 = param_1 - fVar24;
    fStack_a4 = ((0.5 - *(float *)((long)param_4 + 0xb94)) * fVar17) / fVar22;
    (**(code **)(*param_4 + 0x28))(param_4,&local_a8);
    plVar11 = param_4 + 0x154;
    fVar16 = (float)uVar19;
    FUN_10064e47c(fVar23 - fVar25 * 2.0,fVar22 - fVar16 * 2.0,plVar11);
    uVar21 = FUN_100652e60(plVar11);
    FUN_10064e47c(uVar21,uVar19,plVar9);
    fVar24 = (float)FUN_100652e60(plVar11);
    fVar17 = (float)FUN_100652e60(plVar1);
    FUN_10064e47c((fVar24 - fVar17) - (fVar24 - fVar17) * *(float *)((long)param_4 + 0xb94),uVar19,
                  plVar2);
    fVar24 = (float)FUN_100652e60(plVar11);
    fVar17 = (float)FUN_100652e60(plVar1);
    FUN_10064e47c((fVar24 - fVar17) * *(float *)((long)param_4 + 0xb94),plVar7);
    fVar24 = (float)uVar19;
    FUN_100652e60(plVar11);
    FUN_10064e47c(uVar20,plVar8);
    local_a8 = (float)FUN_100652e60(plVar8);
    fStack_a4 = fVar24;
    FUN_10064e48c(plVar10,&local_a8);
    fVar17 = fVar23 * 0.5;
    fVar24 = fVar22 * -0.5;
    if ((*(float *)(param_4 + 0x30) != fVar17) || (*(float *)((long)param_4 + 0x184) != fVar24)) {
      *(float *)(param_4 + 0x30) = fVar17;
      *(float *)((long)param_4 + 0x184) = fVar24;
      FUN_1000200a0(plVar3);
    }
    fVar22 = fVar22 * 0.5;
    if ((*(float *)(param_4 + 0x4e) != fVar17) || (*(float *)((long)param_4 + 0x274) != fVar22)) {
      *(float *)(param_4 + 0x4e) = fVar17;
      *(float *)((long)param_4 + 0x274) = fVar22;
      FUN_1000200a0(plVar4);
    }
    fVar23 = fVar23 * -0.5;
    if ((*(float *)(param_4 + 0x6c) != fVar23) || (*(float *)((long)param_4 + 0x364) != fVar22)) {
      *(float *)(param_4 + 0x6c) = fVar23;
      *(float *)((long)param_4 + 0x364) = fVar22;
      FUN_1000200a0(plVar5);
    }
    if ((*(float *)(param_4 + 0x8a) != fVar23) || (*(float *)((long)param_4 + 0x454) != fVar24)) {
      *(float *)(param_4 + 0x8a) = fVar23;
      *(float *)((long)param_4 + 0x454) = fVar24;
      FUN_1000200a0(plVar6);
    }
    if ((*(float *)(param_4 + 0xa8) != fVar25 + fVar23) ||
       (*(float *)((long)param_4 + 0x544) != fVar24)) {
      *(float *)(param_4 + 0xa8) = fVar25 + fVar23;
      *(float *)((long)param_4 + 0x544) = fVar24;
      FUN_1000200a0(plVar7);
    }
    if ((*(float *)(param_4 + 0xc6) != fVar23) || (*(float *)((long)param_4 + 0x634) != 0.0)) {
      *(float *)(param_4 + 0xc6) = fVar23;
      *(undefined4 *)((long)param_4 + 0x634) = 0;
      FUN_1000200a0(plVar8);
    }
    if ((*(float *)(param_4 + 0xe4) != 0.0) || (*(float *)((long)param_4 + 0x724) != fVar22)) {
      *(undefined4 *)(param_4 + 0xe4) = 0;
      *(float *)((long)param_4 + 0x724) = fVar22;
      FUN_1000200a0(plVar9);
    }
    if ((*(float *)(param_4 + 0x102) != fVar17) || (*(float *)((long)param_4 + 0x814) != 0.0)) {
      *(float *)(param_4 + 0x102) = fVar17;
      *(undefined4 *)((long)param_4 + 0x814) = 0;
      FUN_1000200a0(plVar10);
    }
    if ((*(float *)(param_4 + 0x120) != fVar17 - fVar25) ||
       (*(float *)((long)param_4 + 0x904) != fVar24)) {
      *(float *)(param_4 + 0x120) = fVar17 - fVar25;
      *(float *)((long)param_4 + 0x904) = fVar24;
      FUN_1000200a0(plVar2);
    }
    fVar22 = *(float *)((long)param_4 + 0xb94);
    fVar23 = (float)FUN_100652e60(plVar11);
    fVar17 = (float)FUN_100652e60(plVar1);
    fVar23 = fVar23 * (fVar22 + -0.5) - (*(float *)((long)param_4 + 0xb94) + -0.5) * fVar17;
    fVar16 = fVar16 + fVar24;
    fVar22 = *(float *)(param_4 + 0x13e);
    if ((fVar22 != fVar23) || (fVar24 = *(float *)((long)param_4 + 0x9f4), fVar24 != fVar16)) {
      *(float *)(param_4 + 0x13e) = fVar23;
      *(float *)((long)param_4 + 0x9f4) = fVar16;
      FUN_1000200a0(plVar1);
      fVar22 = *(float *)(param_4 + 0x13e);
      fVar24 = *(float *)((long)param_4 + 0x9f4);
    }
    FUN_100652e60(plVar1);
    if ((*(float *)(param_4 + 0x1f) == -fVar22) &&
       (*(float *)((long)param_4 + 0xfc) == fVar23 - fVar24)) {
      return;
    }
    *(float *)(param_4 + 0x1f) = -fVar22;
    *(float *)((long)param_4 + 0xfc) = fVar23 - fVar24;
    break;
  case 2:
    plVar3 = param_4 + 0x28;
    FUN_100652cdc(plVar3,"arrow_bg_corner");
    if ((*(float *)(param_4 + 0x32) != 1.0) || (*(float *)((long)param_4 + 0x194) != 1.0)) {
      lVar18 = NEON_fmov(0x3f800000,4);
      param_4[0x32] = lVar18;
      FUN_1000200a0(plVar3);
    }
    *(byte *)(param_4 + 0x43) = *(byte *)(param_4 + 0x43) & 0xfc | 1;
    plVar4 = param_4 + 0x46;
    FUN_100652cdc(plVar4,"arrow_bg_corner");
    if ((*(float *)(param_4 + 0x50) != 0.0) || (*(float *)((long)param_4 + 0x284) != 1.0)) {
      param_4[0x50] = 0x3f80000000000000;
      FUN_1000200a0(plVar4);
    }
    *(byte *)(param_4 + 0x61) = *(byte *)(param_4 + 0x61) & 0xfc;
    plVar5 = param_4 + 100;
    FUN_100652cdc(plVar5,"arrow_bg_corner");
    bVar13 = false;
    if ((*(float *)((long)param_4 + 0x374) == 0.0) &&
       (bVar13 = false, !NAN(*(float *)(param_4 + 0x6e)))) {
      bVar13 = *(float *)(param_4 + 0x6e) == 0.0;
    }
    if (!bVar13) {
      param_4[0x6e] = 0;
      FUN_1000200a0(plVar5);
    }
    *(byte *)(param_4 + 0x7f) = *(byte *)(param_4 + 0x7f) & 0xfc | 2;
    plVar6 = param_4 + 0x82;
    FUN_100652cdc(plVar6,"arrow_bg_corner");
    if ((*(float *)(param_4 + 0x8c) != 1.0) || (*(float *)((long)param_4 + 0x464) != 0.0)) {
      param_4[0x8c] = 0x3f800000;
      FUN_1000200a0(plVar6);
    }
    *(byte *)(param_4 + 0x9d) = *(byte *)(param_4 + 0x9d) | 3;
    plVar7 = param_4 + 0xa0;
    FUN_100652cdc(plVar7,"arrow_bg_left_edge");
    if ((*(float *)(param_4 + 0xaa) != 1.0) || (*(float *)((long)param_4 + 0x554) != 1.0)) {
      lVar18 = NEON_fmov(0x3f800000,4);
      param_4[0xaa] = lVar18;
      FUN_1000200a0(plVar7);
    }
    *(byte *)(param_4 + 0xbb) = *(byte *)(param_4 + 0xbb) & 0xfc | 1;
    plVar8 = param_4 + 0xbe;
    FUN_100652cdc(plVar8,"arrow_bg_bottom_edge");
    if ((*(float *)(param_4 + 200) != 0.5) || (*(float *)((long)param_4 + 0x644) != 1.0)) {
      param_4[200] = 0x3f8000003f000000;
      FUN_1000200a0(plVar8);
    }
    *(byte *)(param_4 + 0xd9) = *(byte *)(param_4 + 0xd9) & 0xfc;
    plVar9 = param_4 + 0xdc;
    FUN_100652cdc(plVar9,"arrow_bg_left_edge");
    if ((*(float *)(param_4 + 0xe6) != 0.0) || (*(float *)((long)param_4 + 0x734) != 0.5)) {
      param_4[0xe6] = 0x3f00000000000000;
      FUN_1000200a0(plVar9);
    }
    *(byte *)(param_4 + 0xf7) = *(byte *)(param_4 + 0xf7) & 0xfc;
    plVar10 = param_4 + 0xfa;
    FUN_100652cdc(plVar10,"arrow_bg_bottom_edge");
    if ((*(float *)(param_4 + 0x104) != 0.5) || (*(float *)((long)param_4 + 0x824) != 0.0)) {
      param_4[0x104] = 0x3f000000;
      FUN_1000200a0(plVar10);
    }
    *(byte *)(param_4 + 0x115) = *(byte *)(param_4 + 0x115) & 0xfc | 2;
    FUN_100652cdc(plVar2,"arrow_bg_left_edge");
    fVar24 = 1.0;
    if ((*(float *)(param_4 + 0x122) != 1.0) || (*(float *)((long)param_4 + 0x914) != 0.0)) {
      param_4[0x122] = 0x3f800000;
      fVar24 = 1.0;
      FUN_1000200a0(plVar2);
    }
    *(byte *)(param_4 + 0x133) = *(byte *)(param_4 + 0x133) & 0xfc | 1;
    FUN_100652cdc(plVar1,"arrow_bg_arrow_right");
    if (*(float *)(param_4 + 0x140) == 0.0) {
      fVar17 = 0.5;
      fVar24 = 0.5;
      if (*(float *)((long)param_4 + 0xa04) != 0.5) goto LAB_1001c1d94;
    }
    else {
LAB_1001c1d94:
      fVar17 = fVar24;
      param_4[0x140] = 0x3f00000000000000;
      FUN_1000200a0(plVar1);
    }
    *(byte *)(param_4 + 0x151) = *(byte *)(param_4 + 0x151) & 0xfc;
    uVar19 = FUN_100652e60(plVar3);
    fVar24 = (float)FUN_10065317c(plVar1);
    fVar24 = fVar24 - (float)uVar19 * 0.5;
    fVar16 = fVar24 + fVar23;
    fVar24 = fVar24 / fVar16;
    FUN_100652e60(plVar1);
    local_a8 = fVar24 + 1.0;
    fStack_a4 = param_1 + ((0.5 - *(float *)((long)param_4 + 0xb94)) * fVar16) / fVar22;
    (**(code **)(*param_4 + 0x28))(param_4,&local_a8);
    plVar11 = param_4 + 0x154;
    fVar16 = fVar22 - fVar17 * 2.0;
    FUN_10064e47c(fVar23 - (float)uVar19 * 2.0,fVar16,plVar11);
    FUN_100652e60(plVar11);
    FUN_10064e47c(uVar19,plVar9);
    FUN_100652e60(plVar11);
    fVar24 = fVar16;
    FUN_100652e60(plVar1);
    fVar16 = (fVar16 - fVar24) - (fVar16 - fVar24) * *(float *)((long)param_4 + 0xb94);
    FUN_10064e47c(uVar19,fVar16,plVar7);
    FUN_100652e60(plVar11);
    fVar24 = fVar16;
    FUN_100652e60(plVar1);
    FUN_10064e47c(uVar19,(fVar16 - fVar24) * *(float *)((long)param_4 + 0xb94),plVar2);
    FUN_100652e60(plVar11);
    fVar24 = fVar17;
    FUN_10064e47c(plVar8);
    local_a8 = (float)FUN_100652e60(plVar8);
    fStack_a4 = fVar24;
    FUN_10064e48c(plVar10,&local_a8);
    fVar24 = fVar23 * 0.5;
    fVar16 = fVar22 * 0.5;
    if ((*(float *)(param_4 + 0x30) != fVar24) || (*(float *)((long)param_4 + 0x184) != fVar16)) {
      *(float *)(param_4 + 0x30) = fVar24;
      *(float *)((long)param_4 + 0x184) = fVar16;
      FUN_1000200a0(plVar3);
    }
    fVar23 = fVar23 * -0.5;
    if ((*(float *)(param_4 + 0x4e) != fVar23) || (*(float *)((long)param_4 + 0x274) != fVar16)) {
      *(float *)(param_4 + 0x4e) = fVar23;
      *(float *)((long)param_4 + 0x274) = fVar16;
      FUN_1000200a0(plVar4);
    }
    fVar22 = fVar22 * -0.5;
    if ((*(float *)(param_4 + 0x6c) != fVar23) || (*(float *)((long)param_4 + 0x364) != fVar22)) {
      *(float *)(param_4 + 0x6c) = fVar23;
      *(float *)((long)param_4 + 0x364) = fVar22;
      FUN_1000200a0(plVar5);
    }
    if ((*(float *)(param_4 + 0x8a) != fVar24) || (*(float *)((long)param_4 + 0x454) != fVar22)) {
      *(float *)(param_4 + 0x8a) = fVar24;
      *(float *)((long)param_4 + 0x454) = fVar22;
      FUN_1000200a0(plVar6);
    }
    if ((*(float *)(param_4 + 0xa8) != fVar24) ||
       (*(float *)((long)param_4 + 0x544) != fVar16 - fVar17)) {
      *(float *)(param_4 + 0xa8) = fVar24;
      *(float *)((long)param_4 + 0x544) = fVar16 - fVar17;
      FUN_1000200a0(plVar7);
    }
    if ((*(float *)(param_4 + 0xc6) != 0.0) || (*(float *)((long)param_4 + 0x634) != fVar16)) {
      *(undefined4 *)(param_4 + 0xc6) = 0;
      *(float *)((long)param_4 + 0x634) = fVar16;
      FUN_1000200a0(plVar8);
    }
    if ((*(float *)(param_4 + 0x102) != 0.0) || (*(float *)((long)param_4 + 0x814) != fVar22)) {
      *(undefined4 *)(param_4 + 0x102) = 0;
      *(float *)((long)param_4 + 0x814) = fVar22;
      FUN_1000200a0(plVar10);
    }
    if ((*(float *)(param_4 + 0xe4) != fVar23) || (*(float *)((long)param_4 + 0x724) != 0.0)) {
      *(float *)(param_4 + 0xe4) = fVar23;
      *(undefined4 *)((long)param_4 + 0x724) = 0;
      FUN_1000200a0(plVar9);
    }
    fVar23 = *(float *)(param_4 + 0x120);
    if ((fVar23 != fVar24) ||
       (fVar23 = *(float *)((long)param_4 + 0x904), fVar23 != fVar17 + fVar22)) {
      *(float *)(param_4 + 0x120) = fVar24;
      *(float *)((long)param_4 + 0x904) = fVar17 + fVar22;
      FUN_1000200a0(plVar2);
    }
    fVar16 = *(float *)((long)param_4 + 0xb94);
    FUN_100652e60(plVar11);
    fVar22 = fVar23;
    FUN_100652e60(plVar1);
    fVar22 = fVar23 * (fVar16 + -0.5) - (*(float *)((long)param_4 + 0xb94) + -0.5) * fVar22;
    fVar23 = *(float *)(param_4 + 0x13e);
    if ((fVar23 != fVar24 - fVar17) || (*(float *)((long)param_4 + 0x9f4) != fVar22)) {
      *(float *)(param_4 + 0x13e) = fVar24 - fVar17;
      *(float *)((long)param_4 + 0x9f4) = fVar22;
      FUN_1000200a0(plVar1);
      fVar23 = *(float *)(param_4 + 0x13e);
    }
    fVar22 = (float)FUN_100652e60(plVar1);
    fVar22 = -(fVar22 + fVar23);
    goto LAB_1001c26ec;
  case 3:
    plVar3 = param_4 + 0x28;
    FUN_100652cdc(plVar3,"arrow_bg_corner");
    bVar13 = false;
    if ((*(float *)((long)param_4 + 0x194) == 0.0) &&
       (bVar13 = false, !NAN(*(float *)(param_4 + 0x32)))) {
      bVar13 = *(float *)(param_4 + 0x32) == 0.0;
    }
    if (!bVar13) {
      param_4[0x32] = 0;
      FUN_1000200a0(plVar3);
    }
    *(byte *)(param_4 + 0x43) = *(byte *)(param_4 + 0x43) & 0xfc | 2;
    plVar4 = param_4 + 0x46;
    FUN_100652cdc(plVar4,"arrow_bg_corner");
    if ((*(float *)(param_4 + 0x50) != 1.0) || (*(float *)((long)param_4 + 0x284) != 0.0)) {
      param_4[0x50] = 0x3f800000;
      FUN_1000200a0(plVar4);
    }
    *(byte *)(param_4 + 0x61) = *(byte *)(param_4 + 0x61) | 3;
    plVar5 = param_4 + 100;
    FUN_100652cdc(plVar5,"arrow_bg_corner");
    if ((*(float *)(param_4 + 0x6e) != 1.0) || (*(float *)((long)param_4 + 0x374) != 1.0)) {
      lVar18 = NEON_fmov(0x3f800000,4);
      param_4[0x6e] = lVar18;
      FUN_1000200a0(plVar5);
    }
    *(byte *)(param_4 + 0x7f) = *(byte *)(param_4 + 0x7f) & 0xfc | 1;
    plVar6 = param_4 + 0x82;
    FUN_100652cdc(plVar6,"arrow_bg_corner");
    if ((*(float *)(param_4 + 0x8c) != 0.0) || (*(float *)((long)param_4 + 0x464) != 1.0)) {
      param_4[0x8c] = 0x3f80000000000000;
      FUN_1000200a0(plVar6);
    }
    *(byte *)(param_4 + 0x9d) = *(byte *)(param_4 + 0x9d) & 0xfc;
    plVar7 = param_4 + 0xa0;
    FUN_100652cdc(plVar7,"arrow_bg_left_edge");
    bVar13 = false;
    if ((*(float *)((long)param_4 + 0x554) == 0.0) &&
       (bVar13 = false, !NAN(*(float *)(param_4 + 0xaa)))) {
      bVar13 = *(float *)(param_4 + 0xaa) == 0.0;
    }
    if (!bVar13) {
      param_4[0xaa] = 0;
      FUN_1000200a0(plVar7);
    }
    *(byte *)(param_4 + 0xbb) = *(byte *)(param_4 + 0xbb) & 0xfc;
    plVar8 = param_4 + 0xbe;
    FUN_100652cdc(plVar8,"arrow_bg_bottom_edge");
    if ((*(float *)(param_4 + 200) != 0.5) || (*(float *)((long)param_4 + 0x644) != 0.0)) {
      param_4[200] = 0x3f000000;
      FUN_1000200a0(plVar8);
    }
    *(byte *)(param_4 + 0xd9) = *(byte *)(param_4 + 0xd9) & 0xfc | 2;
    plVar9 = param_4 + 0xdc;
    FUN_100652cdc(plVar9,"arrow_bg_left_edge");
    if ((*(float *)(param_4 + 0xe6) != 1.0) || (*(float *)((long)param_4 + 0x734) != 0.5)) {
      param_4[0xe6] = 0x3f0000003f800000;
      FUN_1000200a0(plVar9);
    }
    *(byte *)(param_4 + 0xf7) = *(byte *)(param_4 + 0xf7) & 0xfc | 1;
    plVar10 = param_4 + 0xfa;
    FUN_100652cdc(plVar10,"arrow_bg_bottom_edge");
    if ((*(float *)(param_4 + 0x104) != 0.5) || (*(float *)((long)param_4 + 0x824) != 1.0)) {
      param_4[0x104] = 0x3f8000003f000000;
      FUN_1000200a0(plVar10);
    }
    *(byte *)(param_4 + 0x115) = *(byte *)(param_4 + 0x115) & 0xfc;
    FUN_100652cdc(plVar2,"arrow_bg_left_edge");
    if ((*(float *)(param_4 + 0x122) != 0.0) || (*(float *)((long)param_4 + 0x914) != 1.0)) {
      param_4[0x122] = 0x3f80000000000000;
      FUN_1000200a0(plVar2);
    }
    *(byte *)(param_4 + 0x133) = *(byte *)(param_4 + 0x133) & 0xfc;
    FUN_100652cdc(plVar1,"arrow_bg_arrow_right");
    fVar24 = 1.0;
    if (*(float *)(param_4 + 0x140) == 1.0) {
      fVar17 = 0.5;
      fVar24 = 0.5;
      if (*(float *)((long)param_4 + 0xa04) != 0.5) goto LAB_1001c23c0;
    }
    else {
LAB_1001c23c0:
      fVar17 = fVar24;
      param_4[0x140] = 0x3f0000003f800000;
      FUN_1000200a0(plVar1);
    }
    *(byte *)(param_4 + 0x151) = *(byte *)(param_4 + 0x151) & 0xfc | 1;
    uVar19 = FUN_100652e60(plVar3);
    fVar24 = fVar17;
    fVar16 = (float)FUN_10065317c(plVar1);
    fVar25 = (float)uVar19;
    FUN_100652e60(plVar1);
    local_a8 = (-(fVar25 * -0.5) - fVar16) / (fVar16 + fVar25 * -0.5 + fVar23);
    fStack_a4 = param_1 + ((0.5 - *(float *)((long)param_4 + 0xb94)) * fVar24) / fVar22;
    (**(code **)(*param_4 + 0x28))(param_4,&local_a8);
    plVar11 = param_4 + 0x154;
    fVar16 = fVar22 - fVar17 * 2.0;
    FUN_10064e47c(fVar23 - fVar25 * 2.0,fVar16,plVar11);
    FUN_100652e60(plVar11);
    FUN_10064e47c(uVar19,plVar9);
    FUN_100652e60(plVar11);
    fVar24 = fVar16;
    FUN_100652e60(plVar1);
    fVar16 = (fVar16 - fVar24) - (fVar16 - fVar24) * *(float *)((long)param_4 + 0xb94);
    FUN_10064e47c(uVar19,fVar16,plVar2);
    FUN_100652e60(plVar11);
    fVar24 = fVar16;
    FUN_100652e60(plVar1);
    FUN_10064e47c(uVar19,(fVar16 - fVar24) * *(float *)((long)param_4 + 0xb94),plVar7);
    FUN_100652e60(plVar11);
    fVar24 = fVar17;
    FUN_10064e47c(plVar8);
    local_a8 = (float)FUN_100652e60(plVar8);
    fStack_a4 = fVar24;
    FUN_10064e48c(plVar10,&local_a8);
    fVar24 = fVar23 * -0.5;
    fVar16 = fVar22 * -0.5;
    if ((*(float *)(param_4 + 0x30) != fVar24) || (*(float *)((long)param_4 + 0x184) != fVar16)) {
      *(float *)(param_4 + 0x30) = fVar24;
      *(float *)((long)param_4 + 0x184) = fVar16;
      FUN_1000200a0(plVar3);
    }
    fVar23 = fVar23 * 0.5;
    if ((*(float *)(param_4 + 0x4e) != fVar23) || (*(float *)((long)param_4 + 0x274) != fVar16)) {
      *(float *)(param_4 + 0x4e) = fVar23;
      *(float *)((long)param_4 + 0x274) = fVar16;
      FUN_1000200a0(plVar4);
    }
    fVar22 = fVar22 * 0.5;
    if ((*(float *)(param_4 + 0x6c) != fVar23) || (*(float *)((long)param_4 + 0x364) != fVar22)) {
      *(float *)(param_4 + 0x6c) = fVar23;
      *(float *)((long)param_4 + 0x364) = fVar22;
      FUN_1000200a0(plVar5);
    }
    if ((*(float *)(param_4 + 0x8a) != fVar24) || (*(float *)((long)param_4 + 0x454) != fVar22)) {
      *(float *)(param_4 + 0x8a) = fVar24;
      *(float *)((long)param_4 + 0x454) = fVar22;
      FUN_1000200a0(plVar6);
    }
    if ((*(float *)(param_4 + 0xa8) != fVar24) ||
       (*(float *)((long)param_4 + 0x544) != fVar17 + fVar16)) {
      *(float *)(param_4 + 0xa8) = fVar24;
      *(float *)((long)param_4 + 0x544) = fVar17 + fVar16;
      FUN_1000200a0(plVar7);
    }
    if ((*(float *)(param_4 + 0xc6) != 0.0) || (*(float *)((long)param_4 + 0x634) != fVar16)) {
      *(undefined4 *)(param_4 + 0xc6) = 0;
      *(float *)((long)param_4 + 0x634) = fVar16;
      FUN_1000200a0(plVar8);
    }
    if ((*(float *)(param_4 + 0x102) != 0.0) || (*(float *)((long)param_4 + 0x814) != fVar22)) {
      *(undefined4 *)(param_4 + 0x102) = 0;
      *(float *)((long)param_4 + 0x814) = fVar22;
      FUN_1000200a0(plVar10);
    }
    if ((*(float *)(param_4 + 0xe4) != fVar23) || (*(float *)((long)param_4 + 0x724) != 0.0)) {
      *(float *)(param_4 + 0xe4) = fVar23;
      *(undefined4 *)((long)param_4 + 0x724) = 0;
      FUN_1000200a0(plVar9);
    }
    fVar23 = *(float *)(param_4 + 0x120);
    if ((fVar23 != fVar24) ||
       (fVar23 = *(float *)((long)param_4 + 0x904), fVar23 != fVar22 - fVar17)) {
      *(float *)(param_4 + 0x120) = fVar24;
      *(float *)((long)param_4 + 0x904) = fVar22 - fVar17;
      FUN_1000200a0(plVar2);
    }
    fVar17 = *(float *)((long)param_4 + 0xb94);
    FUN_100652e60(plVar11);
    fVar22 = fVar23;
    FUN_100652e60(plVar1);
    fVar22 = fVar23 * (fVar17 + -0.5) - (*(float *)((long)param_4 + 0xb94) + -0.5) * fVar22;
    fVar23 = *(float *)(param_4 + 0x13e);
    if ((fVar23 != fVar25 + fVar24) || (*(float *)((long)param_4 + 0x9f4) != fVar22)) {
      *(float *)(param_4 + 0x13e) = fVar25 + fVar24;
      *(float *)((long)param_4 + 0x9f4) = fVar22;
      FUN_1000200a0(plVar1);
      fVar23 = *(float *)(param_4 + 0x13e);
    }
    fVar22 = (float)FUN_100652e60(plVar1);
    fVar22 = fVar22 - fVar23;
LAB_1001c26ec:
    if ((*(float *)(param_4 + 0x1f) == fVar22) &&
       (*(float *)((long)param_4 + 0xfc) == -*(float *)((long)param_4 + 0x9f4))) {
      return;
    }
    *(float *)(param_4 + 0x1f) = fVar22;
    *(float *)((long)param_4 + 0xfc) = -*(float *)((long)param_4 + 0x9f4);
    break;
  default:
    goto switchD_1001c1434_default;
  }
  FUN_1000200a0(param_4 + 0x17);
switchD_1001c1434_default:
  return;
}




void FUN_1001c2d98(float param_1,float param_2,undefined8 param_3,long *param_4,int param_5)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  undefined **ppuVar9;
  bool bVar10;
  int iVar11;
  undefined *puVar12;
  undefined4 uVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  float fVar17;
  float fVar18;
  undefined8 local_98;
  
  FUN_10064e47c();
  if (*(char *)((long)param_4 + 0xb99) == '\0') {
    *(char *)(param_4 + 0x173) = (char)param_5;
    ppuVar9 = &PTR_s_build___HUDPartsCommon_atlas_10184e098;
    if (param_5 == 0) {
      ppuVar9 = &PTR_s_build___MenuPartsCommon_tga_101854970;
    }
    puVar12 = *ppuVar9;
    FUN_100652ca4(param_4 + 0x28,puVar12);
    FUN_100652ca4(param_4 + 0x46,puVar12);
    FUN_100652ca4(param_4 + 100,puVar12);
    FUN_100652ca4(param_4 + 0x82,puVar12);
    FUN_100652ca4(param_4 + 0xa0,puVar12);
    FUN_100652ca4(param_4 + 0xbe,puVar12);
    FUN_100652ca4(param_4 + 0xdc,puVar12);
    FUN_100652ca4(param_4 + 0xfa,puVar12);
    FUN_100652ca4(param_4 + 0x118,puVar12);
    FUN_100652ca4(param_4 + 0x136,puVar12);
    plVar1 = param_4 + 0x154;
    FUN_100652cac(plVar1,puVar12,"white_background");
    if ((*(float *)(param_4 + 0x15e) != 0.5) || (*(float *)((long)param_4 + 0xaf4) != 0.5)) {
      param_4[0x15e] = (long)&DAT_3f0000003f000000;
      FUN_1000200a0(plVar1);
    }
    FUN_100652dd4(plVar1,&DAT_10115a164,2);
    *(undefined1 *)((long)param_4 + 0xb99) = 1;
  }
  iVar11 = FUN_100642d08(param_4 + 0x136);
  if (iVar11 != 0) {
    FUN_1006423ec(param_4 + 0x136,1);
  }
  iVar11 = FUN_100642d08(param_4 + 0x118);
  if (iVar11 != 0) {
    FUN_1006423ec(param_4 + 0x118,1);
  }
  plVar1 = param_4 + 0x28;
  FUN_100652cdc(plVar1,"arrow_bg_corner");
  bVar10 = false;
  if ((*(float *)(param_4 + 0x32) == 0.0) &&
     (bVar10 = false, !NAN(*(float *)((long)param_4 + 0x194)))) {
    bVar10 = *(float *)((long)param_4 + 0x194) == 1.0;
  }
  if (!bVar10) {
    param_4[0x32] = 0x3f80000000000000;
    FUN_1000200a0(plVar1);
  }
  *(byte *)(param_4 + 0x43) = *(byte *)(param_4 + 0x43) & 0xfc;
  plVar2 = param_4 + 0x46;
  FUN_100652cdc(plVar2,"arrow_bg_corner");
  bVar10 = false;
  if ((*(float *)((long)param_4 + 0x284) == 0.0) &&
     (bVar10 = false, !NAN(*(float *)(param_4 + 0x50)))) {
    bVar10 = *(float *)(param_4 + 0x50) == 0.0;
  }
  if (!bVar10) {
    param_4[0x50] = 0;
    FUN_1000200a0(plVar2);
  }
  *(byte *)(param_4 + 0x61) = *(byte *)(param_4 + 0x61) & 0xfc | 2;
  plVar3 = param_4 + 100;
  FUN_100652cdc(plVar3,"arrow_bg_corner");
  if ((*(float *)(param_4 + 0x6e) != 1.0) || (*(float *)((long)param_4 + 0x374) != 0.0)) {
    param_4[0x6e] = 0x3f800000;
    FUN_1000200a0(plVar3);
  }
  *(byte *)(param_4 + 0x7f) = *(byte *)(param_4 + 0x7f) | 3;
  plVar4 = param_4 + 0x82;
  FUN_100652cdc(plVar4,"arrow_bg_corner");
  if ((*(float *)(param_4 + 0x8c) != 1.0) || (*(float *)((long)param_4 + 0x464) != 1.0)) {
    lVar14 = NEON_fmov(0x3f800000,4);
    param_4[0x8c] = lVar14;
    FUN_1000200a0(plVar4);
  }
  *(byte *)(param_4 + 0x9d) = *(byte *)(param_4 + 0x9d) & 0xfc | 1;
  plVar5 = param_4 + 0xa0;
  FUN_100652cdc(plVar5,"arrow_bg_bottom_edge");
  if ((*(float *)(param_4 + 0xaa) != 0.5) || (*(float *)((long)param_4 + 0x554) != 1.0)) {
    param_4[0xaa] = 0x3f8000003f000000;
    FUN_1000200a0(plVar5);
  }
  *(byte *)(param_4 + 0xbb) = *(byte *)(param_4 + 0xbb) & 0xfc;
  plVar6 = param_4 + 0xbe;
  FUN_100652cdc(plVar6,"arrow_bg_left_edge");
  if ((*(float *)(param_4 + 200) != 0.0) || (*(float *)((long)param_4 + 0x644) != 0.5)) {
    param_4[200] = 0x3f00000000000000;
    FUN_1000200a0(plVar6);
  }
  *(byte *)(param_4 + 0xd9) = *(byte *)(param_4 + 0xd9) & 0xfc;
  plVar7 = param_4 + 0xdc;
  FUN_100652cdc(plVar7,"arrow_bg_bottom_edge");
  if ((*(float *)(param_4 + 0xe6) != 0.5) || (*(float *)((long)param_4 + 0x734) != 0.0)) {
    param_4[0xe6] = 0x3f000000;
    FUN_1000200a0(plVar7);
  }
  *(byte *)(param_4 + 0xf7) = *(byte *)(param_4 + 0xf7) & 0xfc | 2;
  plVar8 = param_4 + 0xfa;
  FUN_100652cdc(plVar8,"arrow_bg_left_edge");
  uVar16 = 0x3f800000;
  if ((*(float *)(param_4 + 0x104) != 1.0) ||
     (uVar16 = 0x3f000000, *(float *)((long)param_4 + 0x824) != 0.5)) {
    param_4[0x104] = 0x3f0000003f800000;
    FUN_1000200a0(plVar8);
  }
  *(byte *)(param_4 + 0x115) = *(byte *)(param_4 + 0x115) & 0xfc | 1;
  uVar15 = FUN_100652e60(plVar1);
  if (0.0 < (float)param_3) {
    fVar17 = (float)param_3 / (float)uVar15;
    if ((*(float *)(param_4 + 0x31) != fVar17) || (*(float *)((long)param_4 + 0x18c) != fVar17)) {
      *(float *)(param_4 + 0x31) = fVar17;
      *(float *)((long)param_4 + 0x18c) = fVar17;
      FUN_1000200a0(plVar1);
    }
    if ((*(float *)(param_4 + 0x4f) != fVar17) || (*(float *)((long)param_4 + 0x27c) != fVar17)) {
      *(float *)(param_4 + 0x4f) = fVar17;
      *(float *)((long)param_4 + 0x27c) = fVar17;
      FUN_1000200a0(plVar2);
    }
    if ((*(float *)(param_4 + 0x6d) != fVar17) || (*(float *)((long)param_4 + 0x36c) != fVar17)) {
      *(float *)(param_4 + 0x6d) = fVar17;
      *(float *)((long)param_4 + 0x36c) = fVar17;
      FUN_1000200a0(plVar3);
    }
    uVar15 = param_3;
    uVar16 = param_3;
    if ((*(float *)(param_4 + 0x8b) != fVar17) || (*(float *)((long)param_4 + 0x45c) != fVar17)) {
      *(float *)(param_4 + 0x8b) = fVar17;
      *(float *)((long)param_4 + 0x45c) = fVar17;
      FUN_1000200a0(plVar4);
    }
  }
  local_98 = 0x3f000000;
  (**(code **)(*param_4 + 0x28))(param_4,&local_98);
  fVar18 = param_1 - (float)uVar15 * 2.0;
  fVar17 = param_2 - (float)uVar16 * 2.0;
  FUN_10064e47c(param_1 - (float)uVar15,param_2 - (float)uVar16,param_4 + 0x154);
  FUN_10064e47c(fVar18,uVar16,plVar7);
  FUN_10064e47c(fVar18,uVar16,plVar5);
  FUN_10064e47c(uVar15,plVar6);
  uVar13 = FUN_100652e60(plVar6);
  local_98 = CONCAT44(fVar17,uVar13);
  FUN_10064e48c(plVar8,&local_98);
  fVar17 = param_1 * -0.5;
  if ((*(float *)(param_4 + 0x30) != fVar17) || (*(float *)((long)param_4 + 0x184) != param_2)) {
    *(float *)(param_4 + 0x30) = fVar17;
    *(float *)((long)param_4 + 0x184) = param_2;
    FUN_1000200a0(plVar1);
  }
  if ((*(float *)(param_4 + 0x4e) != fVar17) || (*(float *)((long)param_4 + 0x274) != 0.0)) {
    *(float *)(param_4 + 0x4e) = fVar17;
    *(undefined4 *)((long)param_4 + 0x274) = 0;
    FUN_1000200a0(plVar2);
  }
  param_1 = param_1 * 0.5;
  if ((*(float *)(param_4 + 0x6c) != param_1) || (*(float *)((long)param_4 + 0x364) != 0.0)) {
    *(float *)(param_4 + 0x6c) = param_1;
    *(undefined4 *)((long)param_4 + 0x364) = 0;
    FUN_1000200a0(plVar3);
  }
  if ((*(float *)(param_4 + 0x8a) != param_1) || (*(float *)((long)param_4 + 0x454) != param_2)) {
    *(float *)(param_4 + 0x8a) = param_1;
    *(float *)((long)param_4 + 0x454) = param_2;
    FUN_1000200a0(plVar4);
  }
  if ((*(float *)(param_4 + 0xa8) != 0.0) || (*(float *)((long)param_4 + 0x544) != param_2)) {
    *(undefined4 *)(param_4 + 0xa8) = 0;
    *(float *)((long)param_4 + 0x544) = param_2;
    FUN_1000200a0(plVar5);
  }
  param_2 = param_2 * 0.5;
  if ((*(float *)(param_4 + 0xc6) != fVar17) || (*(float *)((long)param_4 + 0x634) != param_2)) {
    *(float *)(param_4 + 0xc6) = fVar17;
    *(float *)((long)param_4 + 0x634) = param_2;
    FUN_1000200a0(plVar6);
  }
  if ((*(float *)(param_4 + 0x102) != param_1) || (*(float *)((long)param_4 + 0x814) != param_2)) {
    *(float *)(param_4 + 0x102) = param_1;
    *(float *)((long)param_4 + 0x814) = param_2;
    FUN_1000200a0(plVar8);
  }
  bVar10 = false;
  if ((*(float *)((long)param_4 + 0x724) == 0.0) &&
     (bVar10 = false, !NAN(*(float *)(param_4 + 0xe4)))) {
    bVar10 = *(float *)(param_4 + 0xe4) == 0.0;
  }
  if (!bVar10) {
    param_4[0xe4] = 0;
    FUN_1000200a0(plVar7);
  }
  if ((*(float *)(param_4 + 0x15c) != 0.0) || (*(float *)((long)param_4 + 0xae4) != param_2)) {
    *(undefined4 *)(param_4 + 0x15c) = 0;
    *(float *)((long)param_4 + 0xae4) = param_2;
    FUN_1000200a0(param_4 + 0x154);
  }
  bVar10 = false;
  if ((*(float *)((long)param_4 + 0xfc) == 0.0) &&
     (bVar10 = false, !NAN(*(float *)(param_4 + 0x1f)))) {
    bVar10 = *(float *)(param_4 + 0x1f) == 0.0;
  }
  if (!bVar10) {
    param_4[0x1f] = 0;
    FUN_1000200a0(param_4 + 0x17);
  }
  return;
}




void FUN_1001c34ac(float param_1,float param_2,float param_3,float param_4,long *param_5,
                  long param_6)

{
  bool bVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar3 = param_2;
  iVar2 = FUN_100642d08(param_5 + 0x136);
  fVar6 = *(float *)(param_5 + 0x1f);
  if (iVar2 == 0) {
    fVar4 = *(float *)((long)param_5 + 0xfc);
  }
  else {
    fVar7 = *(float *)(param_5 + 0x15c);
    fVar3 = (float)FUN_100652e60(param_5 + 0x154);
    fVar4 = (float)FUN_100652e60(param_5 + 0x28);
    fVar5 = -0.5;
    fVar6 = ((fVar7 + fVar6) - fVar4) + fVar3 * -0.5;
    fVar8 = *(float *)((long)param_5 + 0xfc);
    fVar7 = *(float *)((long)param_5 + 0xae4);
    FUN_100652e60(param_5 + 0x154);
    fVar4 = fVar5;
    FUN_100652e60(param_5 + 0x28);
    fVar3 = -0.5;
    fVar4 = ((fVar7 + fVar8) - fVar4) + fVar5 * -0.5;
  }
  fVar5 = (float)(**(code **)(*param_5 + 0x48))(param_5);
  fVar6 = fVar6 + param_1 + param_3 * fVar5;
  fVar3 = fVar4 + param_2 + param_4 * fVar3;
  bVar1 = false;
  if ((*(float *)(param_6 + 0x40) == fVar6) &&
     (bVar1 = false, !NAN(*(float *)(param_6 + 0x44)) && !NAN(fVar3))) {
    bVar1 = *(float *)(param_6 + 0x44) == fVar3;
  }
  if (!bVar1) {
    *(float *)(param_6 + 0x40) = fVar6;
    *(float *)(param_6 + 0x44) = fVar3;
    FUN_1000200a0(param_6);
    return;
  }
  return;
}




void FUN_1001c35d4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  
  lVar1 = param_3 + 0xaa0;
  if (0.0 < (float)param_2) {
    uVar3 = FUN_100640a74(param_2,lVar1,param_4,0,2);
    FUN_100640840(param_1,param_2,0);
    uVar4 = FUN_10001f4d4();
    FUN_10063f2a4(uVar4,uVar3);
    FUN_100642324(lVar1);
    FUN_100642b14(lVar1,uVar4);
    return;
  }
  FUN_100652dd4(lVar1,param_4,2);
  if (0.0 <= (float)param_1) {
    uVar5 = (uint)((float)param_1 * 255.0);
    uVar2 = *(uint *)(param_3 + 0xb24);
    if (uVar5 != (uVar2 >> 7 & 0xff)) {
      *(uint *)(param_3 + 0xb24) = uVar2 & 0xffff8000 | uVar2 & 0x7f | (uVar5 & 0xff) << 7;
      FUN_1000200a0(lVar1);
      return;
    }
  }
  return;
}




long * FUN_1001c36dc(long *param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  long *plVar3;
  uint uVar4;
  undefined8 *puVar5;
  undefined4 uVar6;
  long lVar7;
  float fVar8;
  undefined8 local_58;
  
  puVar5 = (undefined8 *)FUN_10064e20c();
  *puVar5 = &PTR_FUN_10144f938;
  puVar1 = puVar5 + 0x17;
  thunk_FUN_100652c08(puVar1);
  plVar2 = param_1 + 0x35;
  thunk_FUN_100652c08(plVar2);
  plVar3 = param_1 + 0x53;
  thunk_FUN_100652c08(plVar3);
  (**(code **)(*param_1 + 0x78))(param_1,puVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar3,1);
  local_58 = &DAT_3f0000003f000000;
  (**(code **)(param_1[0x17] + 0x28))(puVar1,&local_58);
  local_58 = &DAT_3f0000003f000000;
  (**(code **)(param_1[0x35] + 0x28))(plVar2,&local_58);
  local_58 = &DAT_3f0000003f000000;
  (**(code **)(param_1[0x53] + 0x28))(plVar3,&local_58);
  FUN_100652cac(puVar1,PTR_s_build___Tutorial_Components_tga_10184e0c0,"reward_star_glow");
  fVar8 = *(float *)(param_1 + 0x20);
  if ((fVar8 != 3.0) || (fVar8 = *(float *)((long)puVar5 + 0x104), fVar8 != 3.0)) {
    lVar7 = NEON_fmov(0x40400000,4);
    param_1[0x20] = lVar7;
    FUN_1000200a0(puVar1);
  }
  FUN_100652cac(plVar2,PTR_s_build___Tutorial_Components_tga_10184e0c0,"reward_star_outline");
  uVar4 = *(uint *)((long)param_1 + 0x22c);
  if ((uVar4 & 0x7f80) != 0x3300) {
    *(uint *)((long)param_1 + 0x22c) = uVar4 & 0xffff8000 | uVar4 & 0x7f | 0x3300;
    FUN_1000200a0(plVar2);
  }
  FUN_100652cac(plVar3,PTR_s_build___Tutorial_Components_tga_10184e0c0,"reward_star_complete");
  uVar6 = FUN_100652e60(plVar3);
  local_58 = (undefined1 *)CONCAT44(fVar8,uVar6);
  FUN_10064e48c(param_1,&local_58);
  *(uint *)((long)param_1 + 0x13c) = *(uint *)((long)param_1 + 0x13c) & 0xfffffffb;
  *(uint *)((long)param_1 + 0x22c) = *(uint *)((long)param_1 + 0x22c) | 4;
  *(uint *)((long)param_1 + 0x31c) = *(uint *)((long)param_1 + 0x31c) & 0xfffffffb;
  return param_1;
}




void FUN_1001c38b8(long param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = 4;
  if (param_2 == 0) {
    uVar1 = 0;
  }
  *(uint *)(param_1 + 0x13c) = *(uint *)(param_1 + 0x13c) & 0xfffffffb | uVar1;
  uVar2 = 0;
  if (param_2 == 0) {
    uVar2 = 4;
  }
  *(uint *)(param_1 + 0x22c) = *(uint *)(param_1 + 0x22c) & 0xfffffffb | uVar2;
  *(uint *)(param_1 + 0x31c) = *(uint *)(param_1 + 0x31c) & 0xfffffffb | uVar1;
  return;
}




long * thunk_FUN_1001c36dc(long *param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  long *plVar3;
  uint uVar4;
  undefined8 *puVar5;
  undefined4 uVar6;
  long lVar7;
  float fVar8;
  undefined8 uStack_58;
  
  puVar5 = (undefined8 *)FUN_10064e20c();
  *puVar5 = &PTR_FUN_10144f938;
  puVar1 = puVar5 + 0x17;
  thunk_FUN_100652c08(puVar1);
  plVar2 = param_1 + 0x35;
  thunk_FUN_100652c08(plVar2);
  plVar3 = param_1 + 0x53;
  thunk_FUN_100652c08(plVar3);
  (**(code **)(*param_1 + 0x78))(param_1,puVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar3,1);
  uStack_58 = &DAT_3f0000003f000000;
  (**(code **)(param_1[0x17] + 0x28))(puVar1,&uStack_58);
  uStack_58 = &DAT_3f0000003f000000;
  (**(code **)(param_1[0x35] + 0x28))(plVar2,&uStack_58);
  uStack_58 = &DAT_3f0000003f000000;
  (**(code **)(param_1[0x53] + 0x28))(plVar3,&uStack_58);
  FUN_100652cac(puVar1,PTR_s_build___Tutorial_Components_tga_10184e0c0,"reward_star_glow");
  fVar8 = *(float *)(param_1 + 0x20);
  if ((fVar8 != 3.0) || (fVar8 = *(float *)((long)puVar5 + 0x104), fVar8 != 3.0)) {
    lVar7 = NEON_fmov(0x40400000,4);
    param_1[0x20] = lVar7;
    FUN_1000200a0(puVar1);
  }
  FUN_100652cac(plVar2,PTR_s_build___Tutorial_Components_tga_10184e0c0,"reward_star_outline");
  uVar4 = *(uint *)((long)param_1 + 0x22c);
  if ((uVar4 & 0x7f80) != 0x3300) {
    *(uint *)((long)param_1 + 0x22c) = uVar4 & 0xffff8000 | uVar4 & 0x7f | 0x3300;
    FUN_1000200a0(plVar2);
  }
  FUN_100652cac(plVar3,PTR_s_build___Tutorial_Components_tga_10184e0c0,"reward_star_complete");
  uVar6 = FUN_100652e60(plVar3);
  uStack_58 = (undefined1 *)CONCAT44(fVar8,uVar6);
  FUN_10064e48c(param_1,&uStack_58);
  *(uint *)((long)param_1 + 0x13c) = *(uint *)((long)param_1 + 0x13c) & 0xfffffffb;
  *(uint *)((long)param_1 + 0x22c) = *(uint *)((long)param_1 + 0x22c) | 4;
  *(uint *)((long)param_1 + 0x31c) = *(uint *)((long)param_1 + 0x31c) & 0xfffffffb;
  return param_1;
}




void FUN_1001c3900(long *param_1,int param_2)

{
  long *plVar1;
  uint uVar2;
  
  plVar1 = param_1 + 0x17;
  uVar2 = FUN_100642d08(plVar1);
  if (param_2 == 0) {
    if (uVar2 != 0) {
      FUN_1006423ec(plVar1,1);
      return;
    }
  }
  else if ((uVar2 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001001c394c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
    return;
  }
  return;
}




long * FUN_1001c397c(long *param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  undefined8 *puVar5;
  uint uVar6;
  
  puVar5 = (undefined8 *)FUN_1006421a8();
  *puVar5 = &PTR_FUN_101461c58;
  puVar1 = puVar5 + 0x11;
  FUN_100651ebc(puVar1);
  param_1[0x11] = (long)&PTR_FUN_1014a6f58;
  param_1[0x28] = (long)&PTR_FUN_1014a70c0;
  thunk_FUN_100652c08(param_1 + 0x3b);
  plVar2 = param_1 + 0x59;
  thunk_FUN_100650e64(plVar2);
  plVar3 = param_1 + 0x7f;
  thunk_FUN_100650e64(plVar3);
  plVar4 = param_1 + 0xa5;
  thunk_FUN_100650e64(plVar4);
  *(undefined4 *)(param_1 + 0xcb) = 0xffffffff;
  FUN_100016064(param_1 + 0xcc);
  *(undefined4 *)(param_1 + 0xd2) = 2;
  *(undefined8 *)((long)param_1 + 0x694) = 0xbf80000042180000;
  (**(code **)(*param_1 + 0x78))(param_1,puVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar3,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar4,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x3b,1);
  FUN_100651f8c(puVar1,PTR_s_build___MenuPartsCommon_tga_101854970);
  *(uint *)((long)puVar5 + 0x10c) = *(uint *)((long)puVar5 + 0x10c) | 4;
  FUN_100651594(plVar2,DAT_101d235d8,&DAT_10115a164);
  FUN_100651594(plVar3,DAT_101d235d8,&DAT_10115a164);
  uVar6 = *(uint *)((long)param_1 + 0x47c);
  if ((uVar6 & 0x7f80) != 0x5900) {
    *(uint *)((long)param_1 + 0x47c) = uVar6 & 0xffff8000 | uVar6 & 0x7f | 0x5900;
    FUN_1000200a0(plVar3);
    uVar6 = *(uint *)((long)param_1 + 0x47c);
  }
  *(uint *)((long)param_1 + 0x47c) = uVar6 & 0xfffffffb;
  FUN_100651594(plVar4,DAT_101d235d8,&DAT_10115a168);
  uVar6 = *(uint *)((long)param_1 + 0x5ac);
  if ((uVar6 & 0x7f80) != 0x7280) {
    *(uint *)((long)param_1 + 0x5ac) = uVar6 & 0xffff8000 | uVar6 & 0x7f | 0x7280;
    FUN_1000200a0(plVar4);
    uVar6 = *(uint *)((long)param_1 + 0x5ac);
  }
  *(uint *)((long)param_1 + 0x5ac) = uVar6 & 0xfffffffb;
  *(uint *)((long)param_1 + 0x84) = *(uint *)((long)param_1 + 0x84) & 0xfffffffb;
  FUN_10001637c(param_1 + 0xcc,param_1,thunk_FUN_1001c3fd0);
  return param_1;
}




void thunk_FUN_1001c3fd0(void)

{
  FUN_1001c3fd0();
  return;
}




long * thunk_FUN_1001c397c(long *param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  undefined8 *puVar5;
  uint uVar6;
  
  puVar5 = (undefined8 *)FUN_1006421a8();
  *puVar5 = &PTR_FUN_101461c58;
  puVar1 = puVar5 + 0x11;
  FUN_100651ebc(puVar1);
  param_1[0x11] = (long)&PTR_FUN_1014a6f58;
  param_1[0x28] = (long)&PTR_FUN_1014a70c0;
  thunk_FUN_100652c08(param_1 + 0x3b);
  plVar2 = param_1 + 0x59;
  thunk_FUN_100650e64(plVar2);
  plVar3 = param_1 + 0x7f;
  thunk_FUN_100650e64(plVar3);
  plVar4 = param_1 + 0xa5;
  thunk_FUN_100650e64(plVar4);
  *(undefined4 *)(param_1 + 0xcb) = 0xffffffff;
  FUN_100016064(param_1 + 0xcc);
  *(undefined4 *)(param_1 + 0xd2) = 2;
  *(undefined8 *)((long)param_1 + 0x694) = 0xbf80000042180000;
  (**(code **)(*param_1 + 0x78))(param_1,puVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar3,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar4,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x3b,1);
  FUN_100651f8c(puVar1,PTR_s_build___MenuPartsCommon_tga_101854970);
  *(uint *)((long)puVar5 + 0x10c) = *(uint *)((long)puVar5 + 0x10c) | 4;
  FUN_100651594(plVar2,DAT_101d235d8,&DAT_10115a164);
  FUN_100651594(plVar3,DAT_101d235d8,&DAT_10115a164);
  uVar6 = *(uint *)((long)param_1 + 0x47c);
  if ((uVar6 & 0x7f80) != 0x5900) {
    *(uint *)((long)param_1 + 0x47c) = uVar6 & 0xffff8000 | uVar6 & 0x7f | 0x5900;
    FUN_1000200a0(plVar3);
    uVar6 = *(uint *)((long)param_1 + 0x47c);
  }
  *(uint *)((long)param_1 + 0x47c) = uVar6 & 0xfffffffb;
  FUN_100651594(plVar4,DAT_101d235d8,&DAT_10115a168);
  uVar6 = *(uint *)((long)param_1 + 0x5ac);
  if ((uVar6 & 0x7f80) != 0x7280) {
    *(uint *)((long)param_1 + 0x5ac) = uVar6 & 0xffff8000 | uVar6 & 0x7f | 0x7280;
    FUN_1000200a0(plVar4);
    uVar6 = *(uint *)((long)param_1 + 0x5ac);
  }
  *(uint *)((long)param_1 + 0x5ac) = uVar6 & 0xfffffffb;
  *(uint *)((long)param_1 + 0x84) = *(uint *)((long)param_1 + 0x84) & 0xfffffffb;
  FUN_10001637c(param_1 + 0xcc,param_1,thunk_FUN_1001c3fd0);
  return param_1;
}




void FUN_1001c3bb4(float param_1,float param_2,long param_3)

{
  long *plVar1;
  bool bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined1 *local_58;
  
  plVar1 = (long *)(param_3 + 0x88);
  fVar3 = (float)FUN_1006529fc(plVar1,0);
  FUN_1006529fc(plVar1,0);
  fVar6 = (float)(int)((*(float *)(param_3 + 0x694) * fVar3) / param_2);
  fVar3 = fVar6 * 0.8;
  if (0.0 <= *(float *)(param_3 + 0x698)) {
    fVar3 = *(float *)(param_3 + 0x698);
  }
  param_1 = param_1 - fVar3;
  if (param_1 <= 0.0) {
    param_1 = 0.0;
  }
  fVar3 = 0.0;
  if (8.0 <= (float)(int)param_1) {
    fVar3 = (float)(int)param_1;
  }
  fVar4 = fVar6 * -0.33 + fVar3 * -0.5;
  fVar5 = *(float *)(param_3 + 0x694) * -0.2;
  bVar2 = false;
  if ((*(float *)(param_3 + 0x218) == fVar4) &&
     (bVar2 = false, !NAN(*(float *)(param_3 + 0x21c)) && !NAN(fVar5))) {
    bVar2 = *(float *)(param_3 + 0x21c) == fVar5;
  }
  if (!bVar2) {
    *(float *)(param_3 + 0x218) = fVar4;
    *(float *)(param_3 + 0x21c) = fVar5;
    FUN_1000200a0(param_3 + 0x1d8);
  }
  local_58 = &DAT_3f0000003f000000;
  (**(code **)(*(long *)(param_3 + 0x1d8) + 0x28))(param_3 + 0x1d8,&local_58);
  FUN_1006529e0(fVar6,fVar3,fVar6,*(undefined4 *)(param_3 + 0x694),plVar1);
  local_58 = &DAT_3f0000003f000000;
  (**(code **)(*(long *)(param_3 + 0x88) + 0x28))(plVar1,&local_58);
  bVar2 = false;
  if ((*(float *)(param_3 + 0x30c) == 0.0) && (bVar2 = false, !NAN(*(float *)(param_3 + 0x308)))) {
    bVar2 = *(float *)(param_3 + 0x308) == 0.0;
  }
  if (!bVar2) {
    *(undefined8 *)(param_3 + 0x308) = 0;
    FUN_1000200a0(param_3 + 0x2c8);
  }
  local_58 = &DAT_3f0000003f000000;
  (**(code **)(*(long *)(param_3 + 0x2c8) + 0x28))(param_3 + 0x2c8,&local_58);
  if ((*(float *)(param_3 + 0x438) != 2.0) || (*(float *)(param_3 + 0x43c) != 2.0)) {
    *(undefined8 *)(param_3 + 0x438) = 0x4000000040000000;
    FUN_1000200a0(param_3 + 0x3f8);
  }
  local_58 = &DAT_3f0000003f000000;
  (**(code **)(*(long *)(param_3 + 0x3f8) + 0x28))(param_3 + 0x3f8,&local_58);
  if ((*(float *)(param_3 + 0x568) != -1.0) || (*(float *)(param_3 + 0x56c) != 0.0)) {
    *(undefined8 *)(param_3 + 0x568) = 0xbf800000;
    FUN_1000200a0(param_3 + 0x528);
  }
  local_58 = &DAT_3f0000003f000000;
  (**(code **)(*(long *)(param_3 + 0x528) + 0x28))(param_3 + 0x528,&local_58);
  bVar2 = false;
  if ((*(float *)(param_3 + 0xcc) == 0.0) && (bVar2 = false, !NAN(*(float *)(param_3 + 200)))) {
    bVar2 = *(float *)(param_3 + 200) == 0.0;
  }
  if (!bVar2) {
    *(undefined8 *)(param_3 + 200) = 0;
    FUN_1000200a0(plVar1);
  }
  local_58 = &DAT_3f0000003f000000;
  (**(code **)(*plVar1 + 0x28))(plVar1,&local_58);
  return;
}




void FUN_1001c3e00(long param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 local_28;
  undefined4 local_24;
  
  if (*(int *)(param_1 + 0x690) != param_2) {
    *(int *)(param_1 + 0x690) = param_2;
    FUN_100652d8c(param_1 + 0x1d8);
    if (param_2 == 0) {
      FUN_100652928(param_1 + 0x88,"capsule_button_fill_left",0,0,0,"capsule_button_fill_middle",0,0
                    ,0,"capsule_button_fill_right",0);
      *(undefined8 *)(param_1 + 0x694) = 0xbf80000042180000;
      local_24 = 0xff0606a4;
      FUN_100652590(param_1 + 0x88,&local_24,2);
      puVar1 = &DAT_10115a168;
    }
    else {
      if (param_2 != 1) {
        return;
      }
      FUN_100652928(param_1 + 0x88,"capsule_button_fill_left",0,0,0,"capsule_button_fill_middle",0,0
                    ,0,"capsule_button_fill_right",0);
      *(undefined8 *)(param_1 + 0x694) = 0xbf80000042180000;
      local_28 = 0xffaaaaaa;
      FUN_100652590(param_1 + 0x88,&local_28,2);
      puVar1 = &DAT_10115a164;
    }
    FUN_100651594(param_1 + 0x2c8,DAT_101d235d8,puVar1);
    *(uint *)(param_1 + 0x47c) = *(uint *)(param_1 + 0x47c) & 0xfffffffb;
    *(uint *)(param_1 + 0x5ac) = *(uint *)(param_1 + 0x5ac) & 0xfffffffb;
  }
  return;
}




void FUN_1001c3f70(long param_1,undefined8 param_2)

{
  FUN_1006513c0(param_1 + 0x2c8);
  FUN_1006513c0(param_1 + 0x3f8,param_2);
  FUN_1006513c0(param_1 + 0x528,param_2);
  FUN_1006511d0(param_1 + 0x2c8);
  FUN_1001c3bb4(param_1);
  return;
}




void FUN_1001c3fc8(long param_1)

{
  FUN_10001611c(param_1 + 0x660);
  return;
}




void FUN_1001c3fd0(long param_1)

{
  ulong uVar1;
  char *pcVar2;
  undefined1 auStack_40 [8];
  void *local_38;
  
  uVar1 = FUN_1000160dc(param_1 + 0x660);
  if ((uVar1 & 0xff00000000) == 0) {
    *(uint *)(param_1 + 0x84) = *(uint *)(param_1 + 0x84) & 0xfffffffb;
  }
  else {
    FUN_1004e313c(auStack_40);
    if (((uint)(uVar1 >> 0x20) & 0xff) < 10) {
      pcVar2 = "%d";
    }
    else {
      pcVar2 = "%d+";
    }
    FUN_1004e38ac(auStack_40,pcVar2);
    *(uint *)(param_1 + 0x84) = *(uint *)(param_1 + 0x84) | 4;
    FUN_1001c3e00(param_1,uVar1);
    FUN_1001c3f70(param_1,auStack_40);
    if (local_38 != (void *)0x0) {
      operator_delete__(local_38);
    }
  }
  return;
}




long * FUN_1001c4088(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  uint uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  
  puVar5 = (undefined8 *)FUN_10064e20c();
  *puVar5 = &PTR_FUN_1014654b8;
  puVar5 = puVar5 + 0x17;
  thunk_FUN_100652c08(puVar5);
  plVar1 = param_1 + 0x35;
  FUN_10064fd54(plVar1,0);
  param_1[0x35] = (long)&PTR_thunk_FUN_10064e2bc_10144caa0;
  plVar2 = param_1 + 0x4e;
  thunk_FUN_100650e64(plVar2);
  plVar3 = param_1 + 0x74;
  thunk_FUN_100650e64(plVar3);
  *(undefined1 *)((long)param_1 + 0x4d4) = 0;
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  FUN_100642bd8(plVar1,plVar2,1);
  FUN_100642bd8(plVar1,puVar5,1);
  FUN_100642bd8(plVar1,plVar3,1);
  FUN_100651594(plVar2,PTR_s_build___Fonts_Brandon_Bold_48_fo_10184e238,&DAT_10115a168);
  uVar6 = FUN_1004e0150("MENU_GENERIC_BALANCE_LABEL",0);
  FUN_1006513c0(plVar2,uVar6);
  uVar4 = *(uint *)((long)param_1 + 0x2f4);
  if ((uVar4 & 0x7f80) != 0x4c80) {
    *(uint *)((long)param_1 + 0x2f4) = uVar4 & 0xffff8000 | uVar4 & 0x7f | 0x4c80;
    FUN_1000200a0(plVar2);
  }
  FUN_10065165c(plVar2,1);
  if ((*(float *)(param_1 + 0x58) != 0.0) || (*(float *)((long)param_1 + 0x2c4) != 0.5)) {
    param_1[0x58] = 0x3f00000000000000;
    FUN_1000200a0(plVar2);
  }
  FUN_100652ca4(puVar5,PTR_s_build___MenuPartsCommon_tga_101854970);
  if ((*(float *)(param_1 + 0x21) != 0.5) || (*(float *)((long)param_1 + 0x10c) != 0.5)) {
    param_1[0x21] = (long)&DAT_3f0000003f000000;
    FUN_1000200a0(puVar5);
  }
  FUN_100651594(plVar3,PTR_s_build___Fonts_Brandon_Bold_48_fo_10184e238,&DAT_10115a168);
  uVar4 = *(uint *)((long)param_1 + 0x424);
  if ((uVar4 & 0x7f80) != 0x6600) {
    *(uint *)((long)param_1 + 0x424) = uVar4 & 0xffff8000 | uVar4 & 0x7f | 0x6600;
    FUN_1000200a0(plVar3);
  }
  FUN_10065165c(plVar3,1);
  if ((*(float *)(param_1 + 0x7e) != 0.0) || (*(float *)((long)param_1 + 0x3f4) != 0.5)) {
    param_1[0x7e] = 0x3f00000000000000;
    FUN_1000200a0(plVar3);
  }
  return param_1;
}




long * thunk_FUN_1001c4088(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  uint uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  
  puVar5 = (undefined8 *)FUN_10064e20c();
  *puVar5 = &PTR_FUN_1014654b8;
  puVar5 = puVar5 + 0x17;
  thunk_FUN_100652c08(puVar5);
  plVar1 = param_1 + 0x35;
  FUN_10064fd54(plVar1,0);
  param_1[0x35] = (long)&PTR_thunk_FUN_10064e2bc_10144caa0;
  plVar2 = param_1 + 0x4e;
  thunk_FUN_100650e64(plVar2);
  plVar3 = param_1 + 0x74;
  thunk_FUN_100650e64(plVar3);
  *(undefined1 *)((long)param_1 + 0x4d4) = 0;
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  FUN_100642bd8(plVar1,plVar2,1);
  FUN_100642bd8(plVar1,puVar5,1);
  FUN_100642bd8(plVar1,plVar3,1);
  FUN_100651594(plVar2,PTR_s_build___Fonts_Brandon_Bold_48_fo_10184e238,&DAT_10115a168);
  uVar6 = FUN_1004e0150("MENU_GENERIC_BALANCE_LABEL",0);
  FUN_1006513c0(plVar2,uVar6);
  uVar4 = *(uint *)((long)param_1 + 0x2f4);
  if ((uVar4 & 0x7f80) != 0x4c80) {
    *(uint *)((long)param_1 + 0x2f4) = uVar4 & 0xffff8000 | uVar4 & 0x7f | 0x4c80;
    FUN_1000200a0(plVar2);
  }
  FUN_10065165c(plVar2,1);
  if ((*(float *)(param_1 + 0x58) != 0.0) || (*(float *)((long)param_1 + 0x2c4) != 0.5)) {
    param_1[0x58] = 0x3f00000000000000;
    FUN_1000200a0(plVar2);
  }
  FUN_100652ca4(puVar5,PTR_s_build___MenuPartsCommon_tga_101854970);
  if ((*(float *)(param_1 + 0x21) != 0.5) || (*(float *)((long)param_1 + 0x10c) != 0.5)) {
    param_1[0x21] = (long)&DAT_3f0000003f000000;
    FUN_1000200a0(puVar5);
  }
  FUN_100651594(plVar3,PTR_s_build___Fonts_Brandon_Bold_48_fo_10184e238,&DAT_10115a168);
  uVar4 = *(uint *)((long)param_1 + 0x424);
  if ((uVar4 & 0x7f80) != 0x6600) {
    *(uint *)((long)param_1 + 0x424) = uVar4 & 0xffff8000 | uVar4 & 0x7f | 0x6600;
    FUN_1000200a0(plVar3);
  }
  FUN_10065165c(plVar3,1);
  if ((*(float *)(param_1 + 0x7e) != 0.0) || (*(float *)((long)param_1 + 0x3f4) != 0.5)) {
    param_1[0x7e] = 0x3f00000000000000;
    FUN_1000200a0(plVar3);
  }
  return param_1;
}




void FUN_1001c42a8(long param_1)

{
  long lVar1;
  float fVar2;
  float fVar3;
  undefined4 local_30;
  float fStack_2c;
  
  *(uint *)(param_1 + 0x2f4) =
       *(uint *)(param_1 + 0x2f4) & 0xfffffffb | (uint)*(byte *)(param_1 + 0x4d4) << 2;
  lVar1 = param_1 + 0x1a8;
  fVar2 = 0.0;
  FUN_10064fc74(0,0,0x40a00000,&local_30);
  FUN_100650064(lVar1,&local_30);
  (**(code **)(*(long *)(param_1 + 0x1a8) + 0x90))(lVar1);
  FUN_10064e3cc(lVar1);
  fVar3 = *(float *)(param_1 + 0x1ec);
  if (fVar3 != fVar2 * 0.5) {
    *(float *)(param_1 + 0x1ec) = fVar2 * 0.5;
    FUN_1000200a0(lVar1);
  }
  local_30 = FUN_10064e3cc(lVar1);
  fStack_2c = fVar3;
  FUN_10064e48c(param_1,&local_30);
  return;
}




void FUN_1001c4354(long param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x4d4) = param_2;
  FUN_1001c42a8();
  return;
}




void FUN_1001c435c(long param_1,long *param_2)

{
  long *plVar1;
  
  plVar1 = (long *)*param_2;
  if (-1 < *(char *)((long)param_2 + 0x17)) {
    plVar1 = param_2;
  }
  FUN_100652cdc(param_1 + 0xb8,plVar1);
  FUN_1001c42a8(param_1);
  return;
}




void FUN_1001c4394(long param_1,undefined4 param_2)

{
  undefined1 auStack_30 [8];
  void *local_28;
  
  *(undefined4 *)(param_1 + 0x4d0) = param_2;
  FUN_1004e313c(auStack_30);
  FUN_1004e38ac(auStack_30,"%d");
  FUN_1006513c0(param_1 + 0x3a0,auStack_30);
  FUN_1001c42a8(param_1);
  if (local_28 != (void *)0x0) {
    operator_delete__(local_28);
  }
  return;
}




long * FUN_1001c43fc(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  uint uVar4;
  bool bVar5;
  undefined8 *puVar6;
  long lVar7;
  
  puVar6 = (undefined8 *)FUN_1006421a8();
  *puVar6 = &PTR_FUN_10145ea78;
  puVar6 = puVar6 + 0x11;
  thunk_FUN_100652c08(puVar6);
  plVar1 = param_1 + 0x2f;
  FUN_1006421a8(plVar1);
  param_1[0x2f] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar2 = param_1 + 0x40;
  thunk_FUN_100652c08(plVar2);
  plVar3 = param_1 + 0x5e;
  thunk_FUN_100652c08(plVar3);
  *(undefined4 *)(param_1 + 0x7c) = 0x43480000;
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  FUN_100642bd8(plVar1,puVar6,1);
  FUN_100642bd8(plVar1,plVar2,1);
  FUN_100642bd8(plVar1,plVar3,1);
  bVar5 = false;
  if ((*(float *)(param_1 + 0x39) == 0.5) &&
     (bVar5 = false, !NAN(*(float *)((long)param_1 + 0x1cc)))) {
    bVar5 = *(float *)((long)param_1 + 0x1cc) == 0.5;
  }
  if (!bVar5) {
    param_1[0x39] = (long)&DAT_3f0000003f000000;
    FUN_1000200a0(plVar1);
  }
  FUN_100652cac(puVar6,PTR_s_build___MenuPartsCommon_tga_101854970,"generic_large_circle");
  FUN_100652dd4(puVar6,&DAT_10115a168,2);
  uVar4 = *(uint *)((long)param_1 + 0x10c);
  if ((uVar4 & 0x7f80) != 0x4c80) {
    *(uint *)((long)param_1 + 0x10c) = uVar4 & 0xffff8000 | uVar4 & 0x7f | 0x4c80;
    FUN_1000200a0(puVar6);
  }
  if ((*(float *)(param_1 + 0x1a) != 1.0) || (*(float *)((long)param_1 + 0xd4) != 1.0)) {
    lVar7 = NEON_fmov(0x3f800000,4);
    param_1[0x1a] = lVar7;
    FUN_1000200a0(puVar6);
  }
  if ((*(float *)(param_1 + 0x1b) != 0.5) || (*(float *)((long)param_1 + 0xdc) != 0.5)) {
    param_1[0x1b] = (long)&DAT_3f0000003f000000;
    FUN_1000200a0(puVar6);
  }
  *(uint *)((long)param_1 + 0x10c) = *(uint *)((long)param_1 + 0x10c) & 0xfffffffb;
  FUN_100652cac(plVar2,PTR_s_build___MenuPartsCommon_tga_101854970,"focus_indicator_ring");
  if ((*(float *)(param_1 + 0x4a) != 0.5) || (*(float *)((long)param_1 + 0x254) != 0.5)) {
    param_1[0x4a] = (long)&DAT_3f0000003f000000;
    FUN_1000200a0(plVar2);
  }
  *(uint *)((long)param_1 + 0x284) = *(uint *)((long)param_1 + 0x284) & 0xfffffffb;
  FUN_100652cac(plVar3,PTR_s_build___MenuPartsCommon_tga_101854970,"focus_indicator_ring");
  if ((*(float *)(param_1 + 0x68) != 0.5) || (*(float *)((long)param_1 + 0x344) != 0.5)) {
    param_1[0x68] = (long)&DAT_3f0000003f000000;
    FUN_1000200a0(plVar3);
  }
  *(uint *)((long)param_1 + 0x374) = *(uint *)((long)param_1 + 0x374) & 0xfffffffb;
  return param_1;
}




long * thunk_FUN_1001c43fc(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  uint uVar4;
  bool bVar5;
  undefined8 *puVar6;
  long lVar7;
  
  puVar6 = (undefined8 *)FUN_1006421a8();
  *puVar6 = &PTR_FUN_10145ea78;
  puVar6 = puVar6 + 0x11;
  thunk_FUN_100652c08(puVar6);
  plVar1 = param_1 + 0x2f;
  FUN_1006421a8(plVar1);
  param_1[0x2f] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar2 = param_1 + 0x40;
  thunk_FUN_100652c08(plVar2);
  plVar3 = param_1 + 0x5e;
  thunk_FUN_100652c08(plVar3);
  *(undefined4 *)(param_1 + 0x7c) = 0x43480000;
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  FUN_100642bd8(plVar1,puVar6,1);
  FUN_100642bd8(plVar1,plVar2,1);
  FUN_100642bd8(plVar1,plVar3,1);
  bVar5 = false;
  if ((*(float *)(param_1 + 0x39) == 0.5) &&
     (bVar5 = false, !NAN(*(float *)((long)param_1 + 0x1cc)))) {
    bVar5 = *(float *)((long)param_1 + 0x1cc) == 0.5;
  }
  if (!bVar5) {
    param_1[0x39] = (long)&DAT_3f0000003f000000;
    FUN_1000200a0(plVar1);
  }
  FUN_100652cac(puVar6,PTR_s_build___MenuPartsCommon_tga_101854970,"generic_large_circle");
  FUN_100652dd4(puVar6,&DAT_10115a168,2);
  uVar4 = *(uint *)((long)param_1 + 0x10c);
  if ((uVar4 & 0x7f80) != 0x4c80) {
    *(uint *)((long)param_1 + 0x10c) = uVar4 & 0xffff8000 | uVar4 & 0x7f | 0x4c80;
    FUN_1000200a0(puVar6);
  }
  if ((*(float *)(param_1 + 0x1a) != 1.0) || (*(float *)((long)param_1 + 0xd4) != 1.0)) {
    lVar7 = NEON_fmov(0x3f800000,4);
    param_1[0x1a] = lVar7;
    FUN_1000200a0(puVar6);
  }
  if ((*(float *)(param_1 + 0x1b) != 0.5) || (*(float *)((long)param_1 + 0xdc) != 0.5)) {
    param_1[0x1b] = (long)&DAT_3f0000003f000000;
    FUN_1000200a0(puVar6);
  }
  *(uint *)((long)param_1 + 0x10c) = *(uint *)((long)param_1 + 0x10c) & 0xfffffffb;
  FUN_100652cac(plVar2,PTR_s_build___MenuPartsCommon_tga_101854970,"focus_indicator_ring");
  if ((*(float *)(param_1 + 0x4a) != 0.5) || (*(float *)((long)param_1 + 0x254) != 0.5)) {
    param_1[0x4a] = (long)&DAT_3f0000003f000000;
    FUN_1000200a0(plVar2);
  }
  *(uint *)((long)param_1 + 0x284) = *(uint *)((long)param_1 + 0x284) & 0xfffffffb;
  FUN_100652cac(plVar3,PTR_s_build___MenuPartsCommon_tga_101854970,"focus_indicator_ring");
  if ((*(float *)(param_1 + 0x68) != 0.5) || (*(float *)((long)param_1 + 0x344) != 0.5)) {
    param_1[0x68] = (long)&DAT_3f0000003f000000;
    FUN_1000200a0(plVar3);
  }
  *(uint *)((long)param_1 + 0x374) = *(uint *)((long)param_1 + 0x374) & 0xfffffffb;
  return param_1;
}




void FUN_1001c4648(undefined8 param_1,long param_2)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  bool bVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ushort uVar7;
  ushort *puVar8;
  float fVar9;
  float fVar10;
  void *local_78 [2];
  char local_61;
  
  fVar10 = *(float *)(param_2 + 0x3e0);
  lVar1 = param_2 + 0x88;
  fVar9 = (float)FUN_100652e60(lVar1);
  fVar10 = fVar10 / fVar9;
  FUN_100642324(lVar1);
  uVar2 = *(uint *)(param_2 + 0x10c);
  *(uint *)(param_2 + 0x10c) = uVar2 | 4;
  if ((uVar2 & 0x7f80) != 0x2600) {
    *(uint *)(param_2 + 0x10c) = uVar2 & 0xffff8000 | uVar2 & 0x7f | 0x2604;
    FUN_1000200a0(lVar1);
  }
  fVar9 = fVar10 * 2.25;
  bVar4 = false;
  if ((*(float *)(param_2 + 0xd0) == fVar9) &&
     (bVar4 = false, !NAN(*(float *)(param_2 + 0xd4)) && !NAN(fVar9))) {
    bVar4 = *(float *)(param_2 + 0xd4) == fVar9;
  }
  if (!bVar4) {
    *(float *)(param_2 + 0xd0) = fVar9;
    *(float *)(param_2 + 0xd4) = fVar9;
    FUN_1000200a0(lVar1);
  }
  fVar9 = (float)param_1;
  if (0.0 < fVar9) {
    uVar5 = FUN_10064081c(param_1);
    FUN_100642b14(lVar1,uVar5);
  }
  uVar5 = FUN_100640db8(fVar10,fVar10,0x3e4ccccd,FUN_10001f4c4);
  FUN_100640840(0x3f3d70a4,0x3e4ccccd,0);
  uVar6 = FUN_10001f4d4();
  FUN_10063f2a4(uVar6,uVar5);
  FUN_100642b14(lVar1,uVar6);
  lVar3 = DAT_101dbd2f8;
  uVar7 = *(ushort *)(DAT_101dbd2f8 + 0x20010);
  if ((ulong)uVar7 == 0xffff) {
    puVar8 = (ushort *)0x0;
  }
  else {
    puVar8 = (ushort *)(DAT_101dbd2f8 + 0x10 + (ulong)uVar7 * 0x40);
    if (uVar7 == *(ushort *)(DAT_101dbd2f8 + 0x20012)) {
      uVar7 = 0xffff;
    }
    else {
      uVar7 = *puVar8;
    }
    *(ushort *)(DAT_101dbd2f8 + 0x20010) = uVar7;
    *(int *)(lVar3 + 0x20014) = *(int *)(lVar3 + 0x20014) + 1;
    FUN_10063ee9c(puVar8);
    *(undefined ***)puVar8 = &PTR_FUN_101469878;
    puVar8[0xc] = 0;
    puVar8[0xd] = 0;
    puVar8[0xe] = 0;
    puVar8[0xf] = 0;
    puVar8[0x10] = 0;
    puVar8[0x11] = 0;
    puVar8[0x12] = 0;
    puVar8[0x13] = 0;
    puVar8[0x14] = 0;
    puVar8[8] = 0;
    puVar8[9] = 0;
    puVar8[10] = 0;
    puVar8[0xb] = 0;
    *(int *)(lVar3 + 0x20020) = *(int *)(lVar3 + 0x20020) + 1;
  }
  FUN_10001549c(local_78,"build://Sounds/UI.assetbundle/sfx_ice_rewarded.mp3");
  FUN_1001e1e48(puVar8,local_78,0,0);
  if (local_61 < '\0') {
    operator_delete(local_78[0]);
  }
  FUN_100642b14(lVar1,puVar8);
  uVar5 = FUN_100640db8(fVar10 * 0.85,fVar10 * 0.85,0,0);
  FUN_100640840(0x3f800000,0,0);
  uVar6 = FUN_10001f4d4();
  FUN_10063f2a4(uVar6,uVar5);
  FUN_100642b14(lVar1,uVar6);
  uVar5 = FUN_100640db8(fVar10,fVar10,0,0);
  FUN_100640840(0x3f19999a,0,0);
  uVar6 = FUN_10001f4d4();
  FUN_10063f2a4(uVar6,uVar5);
  FUN_100642b14(lVar1,uVar6);
  uVar5 = FUN_100640840(0,0x3ecccccd,0);
  FUN_100642b14(lVar1,uVar5);
  lVar3 = DAT_101dbd2f8;
  uVar7 = *(ushort *)(DAT_101dbd2f8 + 0x20010);
  puVar8 = (ushort *)(DAT_101dbd2f8 + (ulong)uVar7 * 0x40 + 0x10);
  if (uVar7 == *(ushort *)(DAT_101dbd2f8 + 0x20012)) {
    uVar7 = 0xffff;
  }
  else {
    uVar7 = *puVar8;
  }
  *(ushort *)(DAT_101dbd2f8 + 0x20010) = uVar7;
  *(int *)(lVar3 + 0x20014) = *(int *)(lVar3 + 0x20014) + 1;
  FUN_10063ee9c(puVar8);
  *(undefined ***)puVar8 = &PTR_thunk_FUN_10063eeb4_1014a5338;
  *(int *)(lVar3 + 0x20020) = *(int *)(lVar3 + 0x20020) + 1;
  FUN_100642b14(lVar1,puVar8);
  lVar1 = param_2 + 0x200;
  FUN_100642324(lVar1);
  uVar2 = *(uint *)(param_2 + 0x284);
  *(uint *)(param_2 + 0x284) = uVar2 | 4;
  if ((uVar2 & 0x7f80) != 0) {
    *(uint *)(param_2 + 0x284) = uVar2 & 0xffff807f | 4;
    FUN_1000200a0(lVar1);
  }
  if ((*(float *)(param_2 + 0x248) != 1.0) || (*(float *)(param_2 + 0x24c) != 1.0)) {
    uVar5 = NEON_fmov(0x3f800000,4);
    *(undefined8 *)(param_2 + 0x248) = uVar5;
    FUN_1000200a0(lVar1);
  }
  if (0.0 < fVar9) {
    uVar5 = FUN_10064081c(param_1);
    FUN_100642b14(lVar1,uVar5);
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
  lVar1 = param_2 + 0x2f0;
  FUN_100642324(lVar1);
  uVar2 = *(uint *)(param_2 + 0x374);
  *(uint *)(param_2 + 0x374) = uVar2 | 4;
  if ((uVar2 & 0x7f80) != 0) {
    *(uint *)(param_2 + 0x374) = uVar2 & 0xffff807f | 4;
    FUN_1000200a0(lVar1);
  }
  if ((*(float *)(param_2 + 0x338) != 1.0) || (*(float *)(param_2 + 0x33c) != 1.0)) {
    uVar5 = NEON_fmov(0x3f800000,4);
    *(undefined8 *)(param_2 + 0x338) = uVar5;
    FUN_1000200a0(lVar1);
  }
  if (0.0 < fVar9) {
    uVar5 = FUN_10064081c(param_1);
    FUN_100642b14(lVar1,uVar5);
  }
  uVar5 = FUN_10064081c(0x3e99999a);
  FUN_100642b14(lVar1,uVar5);
  uVar5 = FUN_100640db8(0x40200000,0x40200000,0x3f051eb8,0);
  FUN_100640840(0x3ecccccd,0x3f051eb8,0);
  uVar6 = FUN_10001f4d4();
  FUN_10063f2a4(uVar6,uVar5);
  FUN_100642b14(lVar1,uVar6);
  uVar5 = FUN_100640db8(0x40d33333,0x40d33333,0x40000000,FUN_10001f4ac);
  FUN_100640840(0,0x40000000,FUN_10001f4ac);
  uVar6 = FUN_10001f4d4();
  FUN_10063f2a4(uVar6,uVar5);
  FUN_100642b14(lVar1,uVar6);
  return;
}




long * FUN_1001c4be4(long *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  
  puVar1 = (undefined8 *)FUN_100655644();
  *puVar1 = &PTR_FUN_101465600;
  lVar2 = 0x158;
  do {
    thunk_FUN_100652c08((long)param_1 + lVar2);
    lVar2 = lVar2 + 0xf0;
  } while (lVar2 != 0x518);
  lVar2 = 0x158;
  do {
    (**(code **)(*param_1 + 0x78))(param_1,(long)param_1 + lVar2,1);
    FUN_100652cac((long)param_1 + lVar2,PTR_s_build___MenuPartsCommon_tga_101854970,
                  "white_background");
    lVar2 = lVar2 + 0xf0;
  } while (lVar2 != 0x518);
  return param_1;
}




long * thunk_FUN_1001c4be4(long *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  
  puVar1 = (undefined8 *)FUN_100655644();
  *puVar1 = &PTR_FUN_101465600;
  lVar2 = 0x158;
  do {
    thunk_FUN_100652c08((long)param_1 + lVar2);
    lVar2 = lVar2 + 0xf0;
  } while (lVar2 != 0x518);
  lVar2 = 0x158;
  do {
    (**(code **)(*param_1 + 0x78))(param_1,(long)param_1 + lVar2,1);
    FUN_100652cac((long)param_1 + lVar2,PTR_s_build___MenuPartsCommon_tga_101854970,
                  "white_background");
    lVar2 = lVar2 + 0xf0;
  } while (lVar2 != 0x518);
  return param_1;
}




void FUN_1001c4c8c(undefined8 param_1,float param_2,undefined1 param_3 [16],long param_4)

{
  undefined8 uVar1;
  bool bVar2;
  float fVar3;
  float fVar4;
  
  fVar3 = param_3._0_4_;
  uVar1 = param_3._0_8_;
  FUN_10064e47c(param_1,uVar1,param_4 + 0x158);
  fVar4 = param_2 + fVar3 * -2.0;
  FUN_10064e47c(uVar1,fVar4,param_4 + 0x248);
  FUN_10064e47c(param_1,uVar1,param_4 + 0x338);
  FUN_10064e47c(uVar1,fVar4,param_4 + 0x428);
  bVar2 = false;
  if ((*(float *)(param_4 + 0x19c) == 0.0) && (bVar2 = false, !NAN(*(float *)(param_4 + 0x198)))) {
    bVar2 = *(float *)(param_4 + 0x198) == 0.0;
  }
  if (!bVar2) {
    *(undefined8 *)(param_4 + 0x198) = 0;
    FUN_1000200a0(param_4 + 0x158);
  }
  fVar4 = (float)param_1 - fVar3;
  bVar2 = false;
  if ((*(float *)(param_4 + 0x288) == fVar4) &&
     (bVar2 = false, !NAN(*(float *)(param_4 + 0x28c)) && !NAN(fVar3))) {
    bVar2 = *(float *)(param_4 + 0x28c) == fVar3;
  }
  if (!bVar2) {
    *(float *)(param_4 + 0x288) = fVar4;
    *(float *)(param_4 + 0x28c) = fVar3;
    FUN_1000200a0(param_4 + 0x248);
  }
  param_2 = param_2 - fVar3;
  bVar2 = false;
  if ((*(float *)(param_4 + 0x378) == 0.0) &&
     (bVar2 = false, !NAN(*(float *)(param_4 + 0x37c)) && !NAN(param_2))) {
    bVar2 = *(float *)(param_4 + 0x37c) == param_2;
  }
  if (!bVar2) {
    *(undefined4 *)(param_4 + 0x378) = 0;
    *(float *)(param_4 + 0x37c) = param_2;
    FUN_1000200a0(param_4 + 0x338);
  }
  bVar2 = false;
  if ((*(float *)(param_4 + 0x468) == 0.0) &&
     (bVar2 = false, !NAN(*(float *)(param_4 + 0x46c)) && !NAN(fVar3))) {
    bVar2 = *(float *)(param_4 + 0x46c) == fVar3;
  }
  if (!bVar2) {
    *(undefined4 *)(param_4 + 0x468) = 0;
    *(float *)(param_4 + 0x46c) = fVar3;
    FUN_1000200a0(param_4 + 0x428);
  }
  FUN_1006557ec(param_4);
  return;
}




long * FUN_1001c4dc4(long *param_1,int param_2)

{
  long *plVar1;
  undefined **ppuVar2;
  char *pcVar3;
  undefined8 *puVar4;
  code *local_60;
  long *local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  
  puVar4 = (undefined8 *)FUN_1001b4648();
  *puVar4 = &PTR_FUN_101450a10;
  puVar4 = puVar4 + 0x4d;
  thunk_FUN_100652c08(puVar4);
  plVar1 = param_1 + 0x6b;
  thunk_FUN_100650e64(plVar1);
  *(undefined1 *)(param_1 + 0x91) = 0;
  *(char *)((long)param_1 + 0x489) = (char)param_2;
  (**(code **)(*param_1 + 0x78))(param_1,puVar4,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  ppuVar2 = &PTR_s_build___HUDPartsCommon_atlas_10184e098;
  if (param_2 == 0) {
    ppuVar2 = &PTR_s_build___MenuPartsCommon_tga_101854970;
  }
  pcVar3 = "checkbox_hud_empty";
  if (param_2 == 0) {
    pcVar3 = "checkbox_empty";
  }
  FUN_100652cac(puVar4,*ppuVar2,pcVar3);
  FUN_100651038(plVar1,PTR_s_build___Fonts_Brandon_Regular_36_10184e1f0);
  FUN_1004e3120(&local_60,"Label");
  FUN_1006513c0(plVar1,&local_60);
  if (local_58 != (void *)0x0) {
    operator_delete__(local_58);
  }
  local_38 = DAT_101d91884;
  local_60 = thunk_FUN_1001c51d0;
  local_48 = 0;
  uStack_40 = 0;
  local_50 = 0;
  local_58 = param_1;
  FUN_10001554c(param_1 + 1,&local_60);
  FUN_1001b495c(0,param_1);
  FUN_1001c4f14(param_1);
  return param_1;
}




void thunk_FUN_1001c51d0(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_40 [32];
  
  *(byte *)(param_1 + 0x488) = *(byte *)(param_1 + 0x488) ^ 1;
  FUN_1001c4f14();
  uVar1 = FUN_100644a94("UI::EVENT_CONTROL_TOGGLED");
  FUN_100644aec(auStack_40,uVar1,*(undefined1 *)(param_1 + 0x488));
  FUN_100644c34(param_1,auStack_40,1);
  return;
}




void FUN_1001c4f14(long param_1)

{
  long lVar1;
  long lVar2;
  char *pcVar3;
  char *pcVar4;
  bool bVar5;
  ulong uVar6;
  float fVar7;
  float fVar8;
  undefined1 *local_48;
  
  lVar1 = param_1 + 0x268;
  bVar5 = *(char *)(param_1 + 0x489) != '\0';
  pcVar3 = "checkbox_filled";
  if (bVar5) {
    pcVar3 = "checkbox_hud_filled";
  }
  pcVar4 = "checkbox_empty";
  if (bVar5) {
    pcVar4 = "checkbox_hud_empty";
  }
  if (*(char *)(param_1 + 0x488) != '\0') {
    pcVar4 = pcVar3;
  }
  FUN_100652cdc(lVar1,pcVar4);
  bVar5 = *(char *)(param_1 + 0x488) != '\0';
  fVar7 = 25.0;
  if (bVar5) {
    fVar7 = 31.0;
  }
  fVar7 = fVar7 * *(float *)(param_1 + 0x2b0);
  fVar8 = 28.0;
  if (bVar5) {
    fVar8 = 26.0;
  }
  fVar8 = fVar8 * *(float *)(param_1 + 0x2b4);
  bVar5 = false;
  if ((*(float *)(param_1 + 0x2a8) == fVar7) &&
     (bVar5 = false, !NAN(*(float *)(param_1 + 0x2ac)) && !NAN(fVar8))) {
    bVar5 = *(float *)(param_1 + 0x2ac) == fVar8;
  }
  if (!bVar5) {
    *(float *)(param_1 + 0x2a8) = fVar7;
    *(float *)(param_1 + 0x2ac) = fVar8;
    FUN_1000200a0(lVar1);
  }
  local_48 = &DAT_3f0000003f000000;
  (**(code **)(*(long *)(param_1 + 0x268) + 0x28))(lVar1,&local_48);
  lVar2 = param_1 + 0x358;
  fVar7 = (float)*(undefined8 *)(param_1 + 0x2b0) * 60.0;
  fVar8 = (float)((ulong)*(undefined8 *)(param_1 + 0x2b0) >> 0x20) * 28.0;
  uVar6 = (ulong)(uint)*(float *)(param_1 + 0x398);
  bVar5 = false;
  if ((*(float *)(param_1 + 0x398) == fVar7) &&
     (bVar5 = false, !NAN(*(float *)(param_1 + 0x39c)) && !NAN(fVar8))) {
    bVar5 = *(float *)(param_1 + 0x39c) == fVar8;
  }
  if (!bVar5) {
    *(ulong *)(param_1 + 0x398) = CONCAT44(fVar8,fVar7);
    FUN_1000200a0(lVar2);
  }
  local_48 = (undefined1 *)0x3f00000000000000;
  (**(code **)(*(long *)(param_1 + 0x358) + 0x28))(lVar2,&local_48);
  fVar8 = *(float *)(param_1 + 0x398);
  fVar7 = (float)FUN_100651184(lVar2);
  FUN_10065317c(lVar1);
  FUN_100651184(lVar2);
  FUN_10064e47c(fVar7 + fVar8,uVar6 & 0xffffffff,param_1);
  return;
}




long * thunk_FUN_1001c4dc4(long *param_1,int param_2)

{
  long *plVar1;
  undefined **ppuVar2;
  char *pcVar3;
  undefined8 *puVar4;
  code *pcStack_60;
  long *plStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  
  puVar4 = (undefined8 *)FUN_1001b4648();
  *puVar4 = &PTR_FUN_101450a10;
  puVar4 = puVar4 + 0x4d;
  thunk_FUN_100652c08(puVar4);
  plVar1 = param_1 + 0x6b;
  thunk_FUN_100650e64(plVar1);
  *(undefined1 *)(param_1 + 0x91) = 0;
  *(char *)((long)param_1 + 0x489) = (char)param_2;
  (**(code **)(*param_1 + 0x78))(param_1,puVar4,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  ppuVar2 = &PTR_s_build___HUDPartsCommon_atlas_10184e098;
  if (param_2 == 0) {
    ppuVar2 = &PTR_s_build___MenuPartsCommon_tga_101854970;
  }
  pcVar3 = "checkbox_hud_empty";
  if (param_2 == 0) {
    pcVar3 = "checkbox_empty";
  }
  FUN_100652cac(puVar4,*ppuVar2,pcVar3);
  FUN_100651038(plVar1,PTR_s_build___Fonts_Brandon_Regular_36_10184e1f0);
  FUN_1004e3120(&pcStack_60,"Label");
  FUN_1006513c0(plVar1,&pcStack_60);
  if (plStack_58 != (void *)0x0) {
    operator_delete__(plStack_58);
  }
  uStack_38 = DAT_101d91884;
  pcStack_60 = thunk_FUN_1001c51d0;
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_50 = 0;
  plStack_58 = param_1;
  FUN_10001554c(param_1 + 1,&pcStack_60);
  FUN_1001b495c(0,param_1);
  FUN_1001c4f14(param_1);
  return param_1;
}




float FUN_1001c5090(undefined1 param_1 [16],float param_2,long *param_3)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (float)(**(code **)(*param_3 + 0x48))();
  fVar2 = (float)DAT_101873a40;
  if ((fVar1 != 0.0) &&
     ((**(code **)(*param_3 + 0x48))(param_3), fVar2 = (float)DAT_101873a40, param_2 != 0.0)) {
    fVar2 = (float)FUN_10064eb7c(param_3 + 0x4d,8,param_3,0);
    fVar1 = (float)(**(code **)(*param_3 + 0x48))(param_3);
    fVar2 = fVar2 / fVar1;
  }
  return fVar2;
}




void FUN_1001c5124(long param_1)

{
  FUN_1006513c0(param_1 + 0x358);
  FUN_1001c4f14(param_1);
  return;
}




void FUN_1001c514c(long param_1,long *param_2)

{
  long *plVar1;
  
  plVar1 = (long *)*param_2;
  if (-1 < *(char *)((long)param_2 + 0x17)) {
    plVar1 = param_2;
  }
  FUN_100651038(param_1 + 0x358,plVar1);
  FUN_1001c4f14(param_1);
  return;
}




void FUN_1001c5184(float param_1,long param_2)

{
  bool bVar1;
  
  bVar1 = false;
  if ((*(float *)(param_2 + 0x2b0) == param_1) &&
     (bVar1 = false, !NAN(*(float *)(param_2 + 0x2b4)) && !NAN(param_1))) {
    bVar1 = *(float *)(param_2 + 0x2b4) == param_1;
  }
  if (!bVar1) {
    *(float *)(param_2 + 0x2b0) = param_1;
    *(float *)(param_2 + 0x2b4) = param_1;
    FUN_1000200a0(param_2 + 0x268);
  }
  FUN_1001c4f14(param_2);
  return;
}




void FUN_1001c51c8(long param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x488) = param_2;
  FUN_1001c4f14();
  return;
}




void FUN_1001c51d0(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_40 [32];
  
  *(byte *)(param_1 + 0x488) = *(byte *)(param_1 + 0x488) ^ 1;
  FUN_1001c4f14();
  uVar1 = FUN_100644a94("UI::EVENT_CONTROL_TOGGLED");
  FUN_100644aec(auStack_40,uVar1,*(undefined1 *)(param_1 + 0x488));
  FUN_100644c34(param_1,auStack_40,1);
  return;
}




long FUN_1001c5230(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_10064e20c();
  *puVar1 = &PTR_thunk_FUN_1001c58e4_101465750;
  FUN_10064fd54(puVar1 + 0x17,0);
  *(undefined ***)(param_1 + 0xb8) = &PTR_thunk_FUN_10064e2bc_10144caa0;
  thunk_FUN_100652c08(param_1 + 0x180);
  thunk_FUN_100652c08(param_1 + 0x270);
  thunk_FUN_100652c08(param_1 + 0x360);
  FUN_1001c5294(param_1);
  return param_1;
}




void FUN_1001c5294(long *param_1)

{
  long *plVar1;
  
  plVar1 = param_1 + 0x17;
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  FUN_100642bd8(plVar1,param_1 + 0x30,1);
  FUN_100642bd8(plVar1,param_1 + 0x4e,1);
  FUN_100642bd8(plVar1,param_1 + 0x6c,1);
  FUN_100652cac(param_1 + 0x30,PTR_s_build___MenuPartsCommon_tga_101854970,"splash_glass_shadow");
  *(byte *)(param_1 + 0x4b) = *(byte *)(param_1 + 0x4b) | 1;
  FUN_100652cac(param_1 + 0x4e,PTR_s_build___MenuPartsCommon_tga_101854970,"white_background");
  FUN_100652cac(param_1 + 0x6c,PTR_s_build___MenuPartsCommon_tga_101854970,"splash_glass_shadow");
  FUN_1001c53f0(param_1);
  return;
}




long thunk_FUN_1001c5230(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_10064e20c();
  *puVar1 = &PTR_thunk_FUN_1001c58e4_101465750;
  FUN_10064fd54(puVar1 + 0x17,0);
  *(undefined ***)(param_1 + 0xb8) = &PTR_thunk_FUN_10064e2bc_10144caa0;
  thunk_FUN_100652c08(param_1 + 0x180);
  thunk_FUN_100652c08(param_1 + 0x270);
  thunk_FUN_100652c08(param_1 + 0x360);
  FUN_1001c5294(param_1);
  return param_1;
}




void FUN_1001c536c(float param_1,float param_2,long param_3)

{
  float fVar1;
  
  if (param_2 <= 2.0) {
    param_2 = 2.0;
  }
  fVar1 = param_1 * 0.1;
  if (fVar1 <= 4.0) {
    fVar1 = 4.0;
  }
  param_1 = param_1 - fVar1 * 2.0;
  if (param_1 <= 4.0) {
    param_1 = 4.0;
  }
  FUN_10064e47c(fVar1,param_2,param_3 + 0x180);
  FUN_10064e47c(fVar1,param_2,param_3 + 0x360);
  FUN_10064e47c(param_1,param_2,param_3 + 0x270);
  FUN_1001c53f0(param_3);
  return;
}




void FUN_1001c53f0(long param_1)

{
  undefined1 auStack_30 [16];
  
  FUN_10064fc74(0,0,0,auStack_30);
  FUN_100650064(param_1 + 0xb8,auStack_30);
  (**(code **)(*(long *)(param_1 + 0xb8) + 0x90))(param_1 + 0xb8);
  return;
}




long * FUN_1001c5448(long *param_1,undefined8 param_2)

{
  long *plVar1;
  uint uVar2;
  bool bVar3;
  undefined8 *puVar4;
  float fVar5;
  undefined1 *local_38;
  
  puVar4 = (undefined8 *)FUN_1006421a8();
  *puVar4 = &PTR_FUN_101465898;
  puVar4 = puVar4 + 0x11;
  thunk_FUN_100652c08(puVar4);
  plVar1 = param_1 + 0x2f;
  thunk_FUN_100650e64(plVar1);
  (**(code **)(*param_1 + 0x78))(param_1,puVar4,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  FUN_100651594(plVar1,PTR_s_build___Fonts_Brandon_Bold_36_fo_10184e228,&DAT_10115a164);
  FUN_1006513c0(plVar1,param_2);
  uVar2 = *(uint *)((long)param_1 + 0x1fc);
  if ((uVar2 & 0x7f80) != 0x7280) {
    *(uint *)((long)param_1 + 0x1fc) = uVar2 & 0xffff8000 | uVar2 & 0x7f | 0x7280;
    FUN_1000200a0(plVar1);
  }
  bVar3 = false;
  if ((*(float *)((long)param_1 + 0x1bc) == 0.0) &&
     (bVar3 = false, !NAN(*(float *)(param_1 + 0x37)))) {
    bVar3 = *(float *)(param_1 + 0x37) == 0.0;
  }
  if (!bVar3) {
    param_1[0x37] = 0;
    FUN_1000200a0(plVar1);
  }
  local_38 = &DAT_3f0000003f000000;
  (**(code **)(param_1[0x2f] + 0x28))(plVar1,&local_38);
  FUN_100652cac(puVar4,PTR_s_build___MenuPartsCommon_tga_101854970,"splash_glass_shadow");
  *(byte *)(param_1 + 0x2c) = *(byte *)(param_1 + 0x2c) | 1;
  uVar2 = *(uint *)((long)param_1 + 0x10c);
  if ((uVar2 & 0x7f80) != 0x6600) {
    *(uint *)((long)param_1 + 0x10c) = uVar2 & 0xffff8000 | uVar2 & 0x7f | 0x6600;
    FUN_1000200a0(puVar4);
  }
  fVar5 = (float)FUN_1006511d0(plVar1);
  FUN_10064e47c(fVar5 + 80.0,0x42800000,puVar4);
  bVar3 = false;
  if ((*(float *)((long)param_1 + 0xcc) == 0.0) && (bVar3 = false, !NAN(*(float *)(param_1 + 0x19)))
     ) {
    bVar3 = *(float *)(param_1 + 0x19) == 0.0;
  }
  if (!bVar3) {
    param_1[0x19] = 0;
    FUN_1000200a0(puVar4);
  }
  local_38 = &DAT_3f0000003f000000;
  (**(code **)(param_1[0x11] + 0x28))(puVar4,&local_38);
  return param_1;
}




long * thunk_FUN_1001c5448(long *param_1,undefined8 param_2)

{
  long *plVar1;
  uint uVar2;
  bool bVar3;
  undefined8 *puVar4;
  float fVar5;
  undefined1 *puStack_38;
  
  puVar4 = (undefined8 *)FUN_1006421a8();
  *puVar4 = &PTR_FUN_101465898;
  puVar4 = puVar4 + 0x11;
  thunk_FUN_100652c08(puVar4);
  plVar1 = param_1 + 0x2f;
  thunk_FUN_100650e64(plVar1);
  (**(code **)(*param_1 + 0x78))(param_1,puVar4,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  FUN_100651594(plVar1,PTR_s_build___Fonts_Brandon_Bold_36_fo_10184e228,&DAT_10115a164);
  FUN_1006513c0(plVar1,param_2);
  uVar2 = *(uint *)((long)param_1 + 0x1fc);
  if ((uVar2 & 0x7f80) != 0x7280) {
    *(uint *)((long)param_1 + 0x1fc) = uVar2 & 0xffff8000 | uVar2 & 0x7f | 0x7280;
    FUN_1000200a0(plVar1);
  }
  bVar3 = false;
  if ((*(float *)((long)param_1 + 0x1bc) == 0.0) &&
     (bVar3 = false, !NAN(*(float *)(param_1 + 0x37)))) {
    bVar3 = *(float *)(param_1 + 0x37) == 0.0;
  }
  if (!bVar3) {
    param_1[0x37] = 0;
    FUN_1000200a0(plVar1);
  }
  puStack_38 = &DAT_3f0000003f000000;
  (**(code **)(param_1[0x2f] + 0x28))(plVar1,&puStack_38);
  FUN_100652cac(puVar4,PTR_s_build___MenuPartsCommon_tga_101854970,"splash_glass_shadow");
  *(byte *)(param_1 + 0x2c) = *(byte *)(param_1 + 0x2c) | 1;
  uVar2 = *(uint *)((long)param_1 + 0x10c);
  if ((uVar2 & 0x7f80) != 0x6600) {
    *(uint *)((long)param_1 + 0x10c) = uVar2 & 0xffff8000 | uVar2 & 0x7f | 0x6600;
    FUN_1000200a0(puVar4);
  }
  fVar5 = (float)FUN_1006511d0(plVar1);
  FUN_10064e47c(fVar5 + 80.0,0x42800000,puVar4);
  bVar3 = false;
  if ((*(float *)((long)param_1 + 0xcc) == 0.0) && (bVar3 = false, !NAN(*(float *)(param_1 + 0x19)))
     ) {
    bVar3 = *(float *)(param_1 + 0x19) == 0.0;
  }
  if (!bVar3) {
    param_1[0x19] = 0;
    FUN_1000200a0(puVar4);
  }
  puStack_38 = &DAT_3f0000003f000000;
  (**(code **)(param_1[0x11] + 0x28))(puVar4,&puStack_38);
  return param_1;
}




void thunk_FUN_1001c58e4(void)

{
  FUN_1001c58e4();
  return;
}




void FUN_1001c561c(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1001c58e4();
  operator_delete(pvVar1);
  return;
}




void FUN_1001c5630(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1014654b8;
  thunk_FUN_100651068(param_1 + 0x74);
  thunk_FUN_100651068(param_1 + 0x4e);
  FUN_10064e2bc(param_1 + 0x35);
  param_1[0x17] = &PTR_FUN_1014a7108;
  param_1[0x2e] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x31);
  FUN_10064e2bc(param_1 + 0x17);
  FUN_10064e2bc(param_1);
  return;
}




void FUN_1001c56a0(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_1014654b8;
  thunk_FUN_100651068(param_1 + 0x74);
  thunk_FUN_100651068(param_1 + 0x4e);
  FUN_10064e2bc(param_1 + 0x35);
  param_1[0x17] = &PTR_FUN_1014a7108;
  param_1[0x2e] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x31);
  FUN_10064e2bc(param_1 + 0x17);
  pvVar1 = (void *)FUN_10064e2bc(param_1);
  operator_delete(pvVar1);
  return;
}




void FUN_1001c5714(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  
  *param_1 = &PTR_FUN_101465600;
  lVar2 = 0x3c0;
  do {
    puVar1 = (undefined8 *)((long)param_1 + lVar2 + 0x68);
    *puVar1 = &PTR_FUN_1014a7108;
    *(undefined ***)((long)param_1 + lVar2 + 0x120) = &PTR_FUN_1014a7268;
    thunk_FUN_100657580((long)param_1 + lVar2 + 0x138);
    FUN_10064e2bc(puVar1);
    lVar2 = lVar2 + -0xf0;
  } while (lVar2 != 0);
  *param_1 = &PTR_FUN_1014a7f88;
  FUN_10064221c(param_1 + 0x17);
  FUN_10064e2bc(param_1);
  return;
}




void FUN_1001c5798(undefined8 *param_1)

{
  void *pvVar1;
  undefined8 *puVar2;
  long lVar3;
  
  *param_1 = &PTR_FUN_101465600;
  lVar3 = 0x3c0;
  do {
    puVar2 = (undefined8 *)((long)param_1 + lVar3 + 0x68);
    *puVar2 = &PTR_FUN_1014a7108;
    *(undefined ***)((long)param_1 + lVar3 + 0x120) = &PTR_FUN_1014a7268;
    thunk_FUN_100657580((long)param_1 + lVar3 + 0x138);
    FUN_10064e2bc(puVar2);
    lVar3 = lVar3 + -0xf0;
  } while (lVar3 != 0);
  *param_1 = &PTR_FUN_1014a7f88;
  FUN_10064221c(param_1 + 0x17);
  pvVar1 = (void *)FUN_10064e2bc(param_1);
  operator_delete(pvVar1);
  return;
}




void FUN_1001c5820(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_101465898;
  thunk_FUN_100651068(param_1 + 0x2f);
  param_1[0x11] = &PTR_FUN_1014a7108;
  param_1[0x28] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x2b);
  FUN_10064e2bc(param_1 + 0x11);
  FUN_10064221c(param_1);
  return;
}




void FUN_1001c5880(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_101465898;
  thunk_FUN_100651068(param_1 + 0x2f);
  param_1[0x11] = &PTR_FUN_1014a7108;
  param_1[0x28] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x2b);
  FUN_10064e2bc(param_1 + 0x11);
  pvVar1 = (void *)FUN_10064221c(param_1);
  operator_delete(pvVar1);
  return;
}




void FUN_1001c58e4(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_1001c58e4_101465750;
  param_1[0x6c] = &PTR_FUN_1014a7108;
  param_1[0x83] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x86);
  FUN_10064e2bc(param_1 + 0x6c);
  param_1[0x4e] = &PTR_FUN_1014a7108;
  param_1[0x65] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x68);
  FUN_10064e2bc(param_1 + 0x4e);
  param_1[0x30] = &PTR_FUN_1014a7108;
  param_1[0x47] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x4a);
  FUN_10064e2bc(param_1 + 0x30);
  FUN_10064e2bc(param_1 + 0x17);
  FUN_10064e2bc(param_1);
  return;
}




void FUN_1001c5984(void)

{
  DAT_101e42f48 = 0xff;
  DAT_101e42f4a = 0xffff;
  DAT_101e42f4c = 0xffff;
  DAT_101e42f4e = 0xffbc9c44;
  DAT_101e42f52 = 0xff1166f2;
  DAT_101e42f56 = 0xffe0e0e0;
  DAT_101e42f5a = 0xffa0a0a0;
  DAT_101e42f5e = 0xff8c8c8c;
  DAT_101e42f62 = 0xff322213;
  DAT_101e42f66 = 0xff091911;
  DAT_101e42f6a = 0xff170c19;
  DAT_101e42f6e = 0xff241a14;
  DAT_101e42f72 = 0xff14171c;
  DAT_101e42f76 = 0xff221911;
  DAT_101e42f7a = 0xff1a1416;
  DAT_101e42f7e = 0xff121414;
  DAT_101e42f82 = 0xff1a1809;
  DAT_101e42f86 = 0xff141414;
  DAT_101e42f8a = 0xff141414;
  DAT_101e42f8e = 0xff2929c0;
  DAT_101e42f92 = 0xff283082;
  DAT_101e42f9a = 0xff283082;
  DAT_101e42f96 = 0xff5262cc;
  DAT_101e42f9e = 0xff5262cc;
  DAT_101e42fa2 = 0xff745c42;
  DAT_101e42fa6 = 0xff184155;
  DAT_101e42faa = 0xff92665e;
  DAT_101e42fae = 0xffbc9c44;
  DAT_101e42fb2 = 0xffbbae56;
  DAT_101e42fb6 = 0xff8b7b01;
  DAT_101e42fba = 0xff90b3ef;
  DAT_101e42fbe = 0xff728ebe;
  DAT_101e42fc2 = 0xff19459d;
  DAT_101e42fc6 = 0xff9d877b;
  DAT_101e42fca = 0xffcbb1a3;
  DAT_101e42fce = 0xff3f6fb5;
  DAT_101e42fd2 = 0xffc5c5c5;
  DAT_101e42fd6 = 0xff4fc1f1;
  DAT_101e42fda = 0xff606060;
  DAT_101e42fde = 0xffc5ff7b;
  DAT_101e42fe2 = 0xff5271eb;
  DAT_101e42fe6 = 0xfffae076;
  DAT_101e42fea = 0xff3ac8f6;
  DAT_101e42fee = 0xffaaaaaa;
  DAT_101e42ff2 = 0xffe19400;
  DAT_101e42ff6 = 0xffe19400;
  DAT_101e42ffa = 0xffe550b2;
  DAT_101e42ffe = 0xfff22ae8;
  DAT_101e43002 = 0xff005ae1;
  DAT_101e43006 = 0xff1addfa;
  DAT_101e4300a = 0xff2424b3;
  DAT_101e4300e = 0xff2424b3;
  DAT_101e43012 = 0xff646464;
  DAT_101e43016 = 0xff92665e;
  DAT_101e4301a = 0xff646037;
  DAT_101e43024 = 0xff1111a1;
  DAT_101e43020 = 0xffffffff;
  DAT_101e4302c = 0xffc8c8c8;
  DAT_101e43028 = 0xff321ee1;
  DAT_101e43030 = 0xff321ee1;
  DAT_101e43034 = 0xff7fe801;
  DAT_101e43038 = 0xffffffff;
  DAT_101e4303c = 0xff6259b3;
  DAT_101e43040 = 0xff506e73;
  DAT_101e43044 = 0xff9dbf86;
  DAT_101e43048 = 0xffa35244;
  DAT_101e4304c = 0xffca828e;
  DAT_101e43050 = 0xffa6a6a6;
  DAT_101e43054 = 0xffa6a6a6;
  DAT_101e43058 = 0xffffffff;
  DAT_101e4305c = 0xff88ea2f;
  DAT_101e43060 = 0xff8c8c8c;
  DAT_101e43064 = 0xffffb400;
  DAT_101e43068 = 0xffff00ff;
  DAT_101e4306c = 0xff00aded;
  DAT_101e43070 = 0xff33d3ff;
  DAT_101e43074 = 0xff7fe801;
  DAT_101e43078 = 0xff282828;
  DAT_101e4307c = 0xfff0f0f0;
  DAT_101e43080 = 0xffa4781e;
  DAT_101e43084 = 0xffa6654b;
  DAT_101e43088 = 0xff93435b;
  DAT_101e4308c = 0xff387f9c;
  DAT_101e43090 = 0xffa3781e;
  DAT_101e43094 = 0xffffd18a;
  DAT_101e43098 = 0xffff61f7;
  DAT_101e4309c = 0xff5de1f2;
  DAT_101e430a0 = 0xff80eaff;
  DAT_101e430a4 = 0xff32e00e;
  DAT_101e430a8 = 0xff5a3c10;
  DAT_101e430ac = 0xff330b03;
  DAT_101e430b0 = 0xff33031d;
  DAT_101e430b4 = 0xff032433;
  DAT_101e430b8 = 0xff9e8e8d;
  DAT_101e430c0 = 0x4326000041900000;
  DAT_101e430c8 = 0x4326000041c00000;
  DAT_101d235d8 = PTR_s_build___Fonts_Brandon_Bold_24_fo_10184e218;
  return;
}




long * FUN_1001c6070(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  undefined **ppuVar8;
  uint uVar9;
  int iVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  long lVar13;
  undefined4 local_78 [2];
  undefined4 local_70 [2];
  undefined4 local_68 [2];
  
  puVar11 = (undefined8 *)FUN_1006421a8();
  *puVar11 = &PTR_thunk_FUN_1001c80b4_101465998;
  puVar11 = puVar11 + 0x11;
  FUN_1006421a8(puVar11);
  param_1[0x11] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar1 = param_1 + 0x22;
  thunk_FUN_1001b4d10(plVar1);
  lVar13 = 0;
  do {
    thunk_FUN_100652c08((long)param_1 + lVar13 + 0x1428);
    lVar13 = lVar13 + 0xf0;
  } while (lVar13 != 0x2d0);
  plVar2 = param_1 + 0x2df;
  thunk_FUN_100650e64(plVar2);
  plVar3 = param_1 + 0x305;
  thunk_FUN_100650e64(plVar3);
  plVar4 = param_1 + 0x32b;
  thunk_FUN_100650e64(plVar4);
  plVar5 = param_1 + 0x351;
  FUN_1006421a8(plVar5);
  param_1[0x351] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  thunk_FUN_100652c08();
  plVar6 = param_1 + 0x380;
  thunk_FUN_100652c08(plVar6);
  thunk_FUN_100650e64();
  thunk_FUN_100650e64();
  param_1[0x3eb] = 0x3f4000003f000000;
  param_1[0x3ea] = 0x3e80000000000000;
  param_1[0x3ed] = 0x3f80000000000000;
  param_1[0x3ec] = 0x4248000043960000;
  param_1[0x3ee] = 0;
  *(undefined8 *)((long)param_1 + 0x1f77) = 0;
  (**(code **)(*param_1 + 0x78))(param_1,puVar11,1);
  FUN_100642bd8(puVar11,plVar1,1);
  FUN_100642bd8(puVar11,plVar2,1);
  FUN_100642bd8(puVar11,plVar3,1);
  FUN_100642bd8(puVar11,plVar4,1);
  lVar13 = 0;
  do {
    FUN_100642bd8(puVar11,(long)param_1 + lVar13 + 0x1428,1);
    lVar13 = lVar13 + 0xf0;
  } while (lVar13 != 0x2d0);
  FUN_100642bd8(puVar11,plVar5,1);
  FUN_100642bd8(plVar5,plVar6,1);
  FUN_100642bd8(plVar5,param_1 + 0x362,1);
  FUN_100642bd8(plVar5,param_1 + 0x39e,1);
  FUN_100642bd8(plVar5,param_1 + 0x3c4,1);
  iVar10 = FUN_100126c88();
  FUN_1001b66dc(0x3fef684c,plVar1,"xp_bar_current","xp_bar_new");
  ppuVar8 = &PTR_s_build___Fonts_Brandon_Regular_48_10184e200;
  if (iVar10 == 0) {
    ppuVar8 = &PTR_s_build___Fonts_Brandon_Regular_30_10184e1e8;
  }
  local_68[0] = 0xffa0a0a0;
  FUN_100651594(plVar2,*ppuVar8,local_68);
  uVar12 = FUN_1004e0150("SKILL_SUBTIER_BRONZE",0);
  FUN_1006513c0(plVar2,uVar12);
  local_70[0] = 0xffa0a0a0;
  FUN_100651594(plVar3,*ppuVar8,local_70);
  uVar12 = FUN_1004e0150("SKILL_SUBTIER_SILVER",0);
  FUN_1006513c0(plVar3,uVar12);
  local_78[0] = 0xffa0a0a0;
  FUN_100651594(plVar4,*ppuVar8,local_78);
  uVar12 = FUN_1004e0150("SKILL_SUBTIER_GOLD",0);
  FUN_1006513c0(plVar4,uVar12);
  lVar13 = 0;
  do {
    lVar7 = (long)param_1 + lVar13 + 0x1428;
    FUN_100652cac(lVar7,PTR_s_build___MenuPartsCommon_tga_101854970,"vert_glass_shadow");
    FUN_10064e47c(0x40800000,0x42200000,lVar7);
    uVar9 = *(uint *)((long)param_1 + lVar13 + 0x14ac);
    if ((uVar9 & 0x7f80) != 0x2c80) {
      *(uint *)((long)param_1 + lVar13 + 0x14ac) = uVar9 & 0xffff8000 | uVar9 & 0x7f | 0x2c80;
      FUN_1000200a0(lVar7);
    }
    lVar13 = lVar13 + 0xf0;
  } while (lVar13 != 0x2d0);
  FUN_100652cac(param_1 + 0x362,PTR_s_build___MenuPartsCommon_tga_101854970,"white_background");
  FUN_100652cac(plVar6,PTR_s_build___MenuPartsCommon_tga_101854970,"circle_button_play");
  *(byte *)(param_1 + 0x39b) = *(byte *)(param_1 + 0x39b) | 1;
  FUN_100651038(param_1 + 0x39e,PTR_s_build___Fonts_Brandon_Light_48_f_10184e1c0);
  FUN_100651038(param_1 + 0x3c4,PTR_s_build___Fonts_Brandon_Light_48_f_10184e1c0);
  *(uint *)((long)param_1 + 0x1b0c) =
       *(uint *)((long)param_1 + 0x1b0c) & 0xfffffffb | (uint)*(byte *)((long)param_1 + 0x1f7c) << 2
  ;
  return param_1;
}




void FUN_1001c6454(long param_1,int param_2)

{
  uint uVar1;
  
  *(char *)(param_1 + 0x1f7c) = (char)param_2;
  uVar1 = 4;
  if (param_2 == 0) {
    uVar1 = 0;
  }
  *(uint *)(param_1 + 0x1b0c) = *(uint *)(param_1 + 0x1b0c) & 0xfffffffb | uVar1;
  return;
}




long * thunk_FUN_1001c6070(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  undefined **ppuVar8;
  uint uVar9;
  int iVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  long lVar13;
  undefined4 auStack_78 [2];
  undefined4 auStack_70 [2];
  undefined4 auStack_68 [2];
  
  puVar11 = (undefined8 *)FUN_1006421a8();
  *puVar11 = &PTR_thunk_FUN_1001c80b4_101465998;
  puVar11 = puVar11 + 0x11;
  FUN_1006421a8(puVar11);
  param_1[0x11] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar1 = param_1 + 0x22;
  thunk_FUN_1001b4d10(plVar1);
  lVar13 = 0;
  do {
    thunk_FUN_100652c08((long)param_1 + lVar13 + 0x1428);
    lVar13 = lVar13 + 0xf0;
  } while (lVar13 != 0x2d0);
  plVar2 = param_1 + 0x2df;
  thunk_FUN_100650e64(plVar2);
  plVar3 = param_1 + 0x305;
  thunk_FUN_100650e64(plVar3);
  plVar4 = param_1 + 0x32b;
  thunk_FUN_100650e64(plVar4);
  plVar5 = param_1 + 0x351;
  FUN_1006421a8(plVar5);
  param_1[0x351] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  thunk_FUN_100652c08();
  plVar6 = param_1 + 0x380;
  thunk_FUN_100652c08(plVar6);
  thunk_FUN_100650e64();
  thunk_FUN_100650e64();
  param_1[0x3eb] = 0x3f4000003f000000;
  param_1[0x3ea] = 0x3e80000000000000;
  param_1[0x3ed] = 0x3f80000000000000;
  param_1[0x3ec] = 0x4248000043960000;
  param_1[0x3ee] = 0;
  *(undefined8 *)((long)param_1 + 0x1f77) = 0;
  (**(code **)(*param_1 + 0x78))(param_1,puVar11,1);
  FUN_100642bd8(puVar11,plVar1,1);
  FUN_100642bd8(puVar11,plVar2,1);
  FUN_100642bd8(puVar11,plVar3,1);
  FUN_100642bd8(puVar11,plVar4,1);
  lVar13 = 0;
  do {
    FUN_100642bd8(puVar11,(long)param_1 + lVar13 + 0x1428,1);
    lVar13 = lVar13 + 0xf0;
  } while (lVar13 != 0x2d0);
  FUN_100642bd8(puVar11,plVar5,1);
  FUN_100642bd8(plVar5,plVar6,1);
  FUN_100642bd8(plVar5,param_1 + 0x362,1);
  FUN_100642bd8(plVar5,param_1 + 0x39e,1);
  FUN_100642bd8(plVar5,param_1 + 0x3c4,1);
  iVar10 = FUN_100126c88();
  FUN_1001b66dc(0x3fef684c,plVar1,"xp_bar_current","xp_bar_new");
  ppuVar8 = &PTR_s_build___Fonts_Brandon_Regular_48_10184e200;
  if (iVar10 == 0) {
    ppuVar8 = &PTR_s_build___Fonts_Brandon_Regular_30_10184e1e8;
  }
  auStack_68[0] = 0xffa0a0a0;
  FUN_100651594(plVar2,*ppuVar8,auStack_68);
  uVar12 = FUN_1004e0150("SKILL_SUBTIER_BRONZE",0);
  FUN_1006513c0(plVar2,uVar12);
  auStack_70[0] = 0xffa0a0a0;
  FUN_100651594(plVar3,*ppuVar8,auStack_70);
  uVar12 = FUN_1004e0150("SKILL_SUBTIER_SILVER",0);
  FUN_1006513c0(plVar3,uVar12);
  auStack_78[0] = 0xffa0a0a0;
  FUN_100651594(plVar4,*ppuVar8,auStack_78);
  uVar12 = FUN_1004e0150("SKILL_SUBTIER_GOLD",0);
  FUN_1006513c0(plVar4,uVar12);
  lVar13 = 0;
  do {
    lVar7 = (long)param_1 + lVar13 + 0x1428;
    FUN_100652cac(lVar7,PTR_s_build___MenuPartsCommon_tga_101854970,"vert_glass_shadow");
    FUN_10064e47c(0x40800000,0x42200000,lVar7);
    uVar9 = *(uint *)((long)param_1 + lVar13 + 0x14ac);
    if ((uVar9 & 0x7f80) != 0x2c80) {
      *(uint *)((long)param_1 + lVar13 + 0x14ac) = uVar9 & 0xffff8000 | uVar9 & 0x7f | 0x2c80;
      FUN_1000200a0(lVar7);
    }
    lVar13 = lVar13 + 0xf0;
  } while (lVar13 != 0x2d0);
  FUN_100652cac(param_1 + 0x362,PTR_s_build___MenuPartsCommon_tga_101854970,"white_background");
  FUN_100652cac(plVar6,PTR_s_build___MenuPartsCommon_tga_101854970,"circle_button_play");
  *(byte *)(param_1 + 0x39b) = *(byte *)(param_1 + 0x39b) | 1;
  FUN_100651038(param_1 + 0x39e,PTR_s_build___Fonts_Brandon_Light_48_f_10184e1c0);
  FUN_100651038(param_1 + 0x3c4,PTR_s_build___Fonts_Brandon_Light_48_f_10184e1c0);
  *(uint *)((long)param_1 + 0x1b0c) =
       *(uint *)((long)param_1 + 0x1b0c) & 0xfffffffb | (uint)*(byte *)((long)param_1 + 0x1f7c) << 2
  ;
  return param_1;
}




void FUN_1001c6480(undefined4 param_1,undefined4 param_2,long param_3,int param_4,int param_5,
                  int param_6,int param_7,int param_8,undefined1 param_9)

{
  *(float *)(param_3 + 0x1f68) = (float)param_4;
  *(float *)(param_3 + 0x1f6c) = (float)param_5;
  *(float *)(param_3 + 0x1f70) = (float)param_6;
  *(float *)(param_3 + 0x1f78) = (float)param_8;
  *(float *)(param_3 + 0x1f74) = (float)param_7;
  *(undefined4 *)(param_3 + 0x1f60) = param_1;
  *(undefined4 *)(param_3 + 0x1f64) = param_2;
  *(undefined1 *)(param_3 + 0x1f7e) = param_9;
  FUN_1001b5e00(param_3 + 0x110);
  FUN_1001c64e4(param_3);
  return;
}




void FUN_1001c64e4(long param_1)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  undefined4 uVar4;
  long lVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 auStack_88 [8];
  void *local_80;
  undefined8 local_78;
  
  lVar5 = param_1 + 0x1428;
  lVar6 = 3;
  do {
    fVar7 = *(float *)(param_1 + 0x1f64) * 0.5 + 4.0;
    if (*(float *)(lVar5 + 0x44) != fVar7) {
      *(float *)(lVar5 + 0x44) = fVar7;
      FUN_1000200a0(lVar5);
    }
    lVar5 = lVar5 + 0xf0;
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  lVar5 = param_1 + 0x16f8;
  fVar7 = *(float *)(param_1 + 0x1f64) * 0.5 + 40.0;
  if (*(float *)(param_1 + 0x173c) != fVar7) {
    *(float *)(param_1 + 0x173c) = fVar7;
    FUN_1000200a0(lVar5);
    fVar7 = *(float *)(param_1 + 0x1f64) * 0.5 + 40.0;
  }
  lVar6 = param_1 + 0x1828;
  if (*(float *)(param_1 + 0x186c) != fVar7) {
    *(float *)(param_1 + 0x186c) = fVar7;
    FUN_1000200a0(lVar6);
    fVar7 = *(float *)(param_1 + 0x1f64) * 0.5 + 40.0;
  }
  lVar1 = param_1 + 0x1958;
  if (*(float *)(param_1 + 0x199c) != fVar7) {
    *(float *)(param_1 + 0x199c) = fVar7;
    FUN_1000200a0(lVar1);
  }
  fVar10 = *(float *)(param_1 + 0x150);
  fVar7 = *(float *)(param_1 + 0x1f60);
  fVar11 = fVar10 + -2.0;
  fVar8 = fVar11 + fVar7 * *(float *)(param_1 + 0x1f54);
  if (*(float *)(param_1 + 0x1468) != fVar8) {
    *(float *)(param_1 + 0x1468) = fVar8;
    FUN_1000200a0(param_1 + 0x1428);
    fVar7 = *(float *)(param_1 + 0x1f60);
  }
  fVar8 = fVar11 + fVar7 * *(float *)(param_1 + 0x1f58);
  if (*(float *)(param_1 + 0x1558) != fVar8) {
    *(float *)(param_1 + 0x1558) = fVar8;
    FUN_1000200a0(param_1 + 0x1518);
    fVar7 = *(float *)(param_1 + 0x1f60);
  }
  fVar8 = fVar11 + fVar7 * *(float *)(param_1 + 0x1f5c);
  if (*(float *)(param_1 + 0x1648) != fVar8) {
    *(float *)(param_1 + 0x1648) = fVar8;
    FUN_1000200a0(param_1 + 0x1608);
    fVar7 = *(float *)(param_1 + 0x1f60);
  }
  fVar8 = *(float *)(param_1 + 0x1f58);
  fVar9 = fVar10 + fVar7 * (*(float *)(param_1 + 0x1f54) +
                           (fVar8 - *(float *)(param_1 + 0x1f54)) * 0.5);
  if (*(float *)(param_1 + 0x1738) != fVar9) {
    *(float *)(param_1 + 0x1738) = fVar9;
    FUN_1000200a0(lVar5);
    fVar7 = *(float *)(param_1 + 0x1f60);
    fVar8 = *(float *)(param_1 + 0x1f58);
  }
  fVar9 = *(float *)(param_1 + 0x1f5c);
  fVar8 = fVar10 + fVar7 * (fVar8 + (fVar9 - fVar8) * 0.5);
  if (*(float *)(param_1 + 0x1868) != fVar8) {
    *(float *)(param_1 + 0x1868) = fVar8;
    FUN_1000200a0(lVar6);
    fVar7 = *(float *)(param_1 + 0x1f60);
    fVar9 = *(float *)(param_1 + 0x1f5c);
  }
  fVar10 = fVar10 + fVar7 * (fVar9 * 0.5 + 0.5);
  if (*(float *)(param_1 + 0x1998) != fVar10) {
    *(float *)(param_1 + 0x1998) = fVar10;
    FUN_1000200a0(lVar1);
  }
  if (*(char *)(param_1 + 0x1f7e) == '\0') {
    fVar8 = *(float *)(param_1 + 0x1868);
    fVar7 = (float)FUN_100651184(lVar6);
    fVar9 = *(float *)(param_1 + 0x1998);
    fVar10 = (float)FUN_100651184(lVar1);
    if (fVar8 + 10.0 + fVar7 * 0.5 <= fVar9 - fVar10) {
      fVar7 = 40.0;
    }
    else {
      fVar7 = 70.0;
    }
    fVar7 = fVar7 + *(float *)(param_1 + 0x1f64) * 0.5;
    if (*(float *)(param_1 + 0x186c) != fVar7) {
      *(float *)(param_1 + 0x186c) = fVar7;
      FUN_1000200a0(lVar6);
    }
  }
  else {
    fVar7 = *(float *)(param_1 + 0x1f60) * 0.33 + -20.0;
    FUN_10065179c(fVar7,0,0x3f800000,lVar5);
    FUN_10065179c(fVar7,0,0x3f800000,lVar6);
    FUN_10065179c(fVar7,0,0x3f800000,lVar1);
  }
  fVar7 = *(float *)(param_1 + 0x1f60);
  fVar10 = fVar11 + fVar7 * *(float *)(param_1 + 0x1f54);
  if (*(float *)(param_1 + 0x1468) != fVar10) {
    *(float *)(param_1 + 0x1468) = fVar10;
    FUN_1000200a0(param_1 + 0x1428);
    fVar7 = *(float *)(param_1 + 0x1f60);
  }
  fVar10 = fVar11 + fVar7 * *(float *)(param_1 + 0x1f58);
  if (*(float *)(param_1 + 0x1558) != fVar10) {
    *(float *)(param_1 + 0x1558) = fVar10;
    FUN_1000200a0(param_1 + 0x1518);
    fVar7 = *(float *)(param_1 + 0x1f60);
  }
  fVar11 = fVar11 + fVar7 * *(float *)(param_1 + 0x1f5c);
  if (*(float *)(param_1 + 0x1648) != fVar11) {
    *(float *)(param_1 + 0x1648) = fVar11;
    FUN_1000200a0(param_1 + 0x1608);
  }
  FUN_1004e313c(auStack_88);
  fVar7 = *(float *)(param_1 + 0x1f74) * 10.0;
  FUN_1004e38ac(auStack_88,"%d");
  plVar2 = (long *)(param_1 + 0x1cf0);
  FUN_1006513c0(plVar2,auStack_88);
  if (*(float *)(param_1 + 0x1f78) == 0.0) {
    *(uint *)(param_1 + 0x1ea4) = *(uint *)(param_1 + 0x1ea4) & 0xfffffffb;
  }
  else {
    FUN_1004e38ac(auStack_88,"(%+d)");
    FUN_1006513c0(param_1 + 0x1e20,auStack_88);
    *(uint *)(param_1 + 0x1ea4) = *(uint *)(param_1 + 0x1ea4) | 4;
    if (0.0 <= *(float *)(param_1 + 0x1f78)) {
      uVar4 = 0xff00ff00;
    }
    else {
      uVar4 = 0xff4040f0;
    }
    local_78 = CONCAT44(local_78._4_4_,uVar4);
    FUN_100651460(param_1 + 0x1e20,&local_78);
  }
  fVar10 = *(float *)(param_1 + 0x1f64);
  FUN_10064259c(plVar2);
  fVar7 = fVar7 + fVar10;
  lVar5 = param_1 + 0x1b10;
  FUN_10064e47c(0x40c00000,fVar7,lVar5);
  fVar10 = (*(float *)(param_1 + 0x1f70) * *(float *)(param_1 + 0x1f60)) /
           (*(float *)(param_1 + 0x1f6c) - *(float *)(param_1 + 0x1f68));
  fVar11 = *(float *)(param_1 + 0x1f64) * 0.5;
  if ((*(float *)(param_1 + 0x1b50) != fVar10) || (*(float *)(param_1 + 0x1b54) != fVar11)) {
    *(float *)(param_1 + 0x1b50) = fVar10;
    *(float *)(param_1 + 0x1b54) = fVar11;
    FUN_1000200a0(lVar5);
  }
  local_78 = 0x3f80000000000000;
  (**(code **)(*(long *)(param_1 + 0x1b10) + 0x28))(lVar5,&local_78);
  lVar5 = param_1 + 0x1c00;
  FUN_10064259c(plVar2);
  FUN_10064e47c(0x41b00000,fVar11 * 0.75,lVar5);
  fVar10 = *(float *)(param_1 + 0x1b50) + 2.0;
  fVar7 = (*(float *)(param_1 + 0x1b54) - fVar7) + -4.0;
  if ((*(float *)(param_1 + 0x1c40) != fVar10) || (*(float *)(param_1 + 0x1c44) != fVar7)) {
    *(float *)(param_1 + 0x1c40) = fVar10;
    *(float *)(param_1 + 0x1c44) = fVar7;
    FUN_1000200a0(lVar5);
  }
  local_78 = 0x3f800000;
  (**(code **)(*(long *)(param_1 + 0x1c00) + 0x28))(lVar5,&local_78);
  fVar11 = *(float *)(param_1 + 0x1c40);
  fVar10 = (float)FUN_10065317c(lVar5);
  fVar11 = fVar11 - fVar10;
  fVar10 = fVar11 + -8.0;
  fVar8 = *(float *)(param_1 + 0x1c44);
  FUN_10065317c(lVar5);
  fVar8 = fVar8 + fVar7 * 0.5;
  plVar3 = (long *)(param_1 + 0x1e20);
  if ((*(byte *)(param_1 + 0x1ea4) >> 2 & 1) != 0) {
    if ((*(float *)(param_1 + 0x1e60) != fVar10) || (*(float *)(param_1 + 0x1e64) != fVar8)) {
      *(float *)(param_1 + 0x1e60) = fVar10;
      *(float *)(param_1 + 0x1e64) = fVar8;
      FUN_1000200a0(plVar3);
    }
    local_78 = 0x3f0000003f800000;
    (**(code **)(*plVar3 + 0x28))(plVar3,&local_78);
  }
  if ((*(byte *)(param_1 + 0x1d74) >> 2 & 1) != 0) {
    if ((*(byte *)(param_1 + 0x1ea4) >> 2 & 1) != 0) {
      fVar10 = (float)FUN_10064259c(plVar3);
      fVar10 = (fVar11 + -12.0) - fVar10;
    }
    if ((*(float *)(param_1 + 0x1d30) != fVar10) || (*(float *)(param_1 + 0x1d34) != fVar8)) {
      *(float *)(param_1 + 0x1d30) = fVar10;
      *(float *)(param_1 + 0x1d34) = fVar8;
      FUN_1000200a0(plVar2);
    }
    local_78 = 0x3f0000003f800000;
    (**(code **)(*plVar2 + 0x28))(plVar2,&local_78);
  }
  if (local_80 != (void *)0x0) {
    operator_delete__(local_80);
  }
  return;
}




void FUN_1001c6b50(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  long param_5,int param_6)

{
  long lVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  float fVar5;
  undefined4 local_68 [2];
  
  *(undefined4 *)(param_5 + 0x1f54) = param_2;
  *(undefined4 *)(param_5 + 0x1f58) = param_3;
  *(undefined4 *)(param_5 + 0x1f5c) = param_4;
  fVar5 = (float)NEON_fminnm((float)param_6,0x41e80000);
  if (fVar5 <= -1.0) {
    fVar5 = -1.0;
  }
  iVar3 = FUN_1000f0a5c((int)fVar5);
  if ((int)fVar5 < 0) {
    *(uint *)(param_5 + 0x84) = *(uint *)(param_5 + 0x84) & 0xfffffffb;
    goto LAB_1001c6d68;
  }
  lVar1 = param_5 + 0x16f8;
  FUN_100651460(lVar1,&DAT_1011581d0);
  lVar2 = param_5 + 0x1828;
  FUN_100651460(lVar2,&DAT_1011581d4);
  lVar4 = param_5 + 0x1958;
  FUN_100651460(lVar4,&DAT_1011581d8);
  *(uint *)(param_5 + 0x84) = *(uint *)(param_5 + 0x84) | 4;
  if (iVar3 == 0) {
    FUN_1001b6720(0x3f800000,0x3f800000,param_5 + 0x110);
    local_68[0] = 0xffb4b4ff;
    FUN_1001b5d78(param_5 + 0x110,local_68,&DAT_10115a168,&DAT_10115a168);
    FUN_100651460(lVar2,&DAT_1011581dc);
LAB_1001c6d1c:
    FUN_100651460(lVar4,&DAT_1011581dc);
  }
  else {
    if (iVar3 == 1) {
      FUN_1001b5d78(param_5 + 0x110,&DAT_10115a168,&DAT_10115a168,&DAT_10115a168);
      FUN_1001b6720(0,0,param_5 + 0x110);
      FUN_100651460(lVar1,&DAT_1011581dc);
      goto LAB_1001c6d1c;
    }
    if (iVar3 == 2) {
      FUN_1001b6720(0x3f800000,0x3f800000,param_5 + 0x110);
      FUN_1001b5d78(param_5 + 0x110,&DAT_10115a168,&DAT_10115a168,&DAT_10115a168);
      FUN_100651460(lVar1,&DAT_1011581dc);
      lVar4 = lVar2;
      goto LAB_1001c6d1c;
    }
  }
  if (*(char *)(param_5 + 0x1f7d) != '\0') {
    FUN_1001b6720(0x3f800000,0x3f800000,param_5 + 0x110);
    FUN_1001b5d78(param_5 + 0x110,&DAT_10115a168,&DAT_10115a168,&DAT_10115a168);
  }
  *(undefined4 *)(param_5 + 0x1f50) = param_1;
  *(undefined4 *)(param_5 + 0x1f54) = param_2;
  *(undefined4 *)(param_5 + 0x1f58) = param_3;
  *(undefined4 *)(param_5 + 0x1f5c) = param_4;
LAB_1001c6d68:
  FUN_1001c64e4(param_5);
  return;
}




undefined4 FUN_1001c6d90(long param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 0x1f60);
  FUN_100651184(param_1 + 0x16f8);
  return uVar1;
}




void FUN_1001c6dc8(long param_1,int param_2)

{
  *(char *)(param_1 + 0x1f7d) = (char)param_2;
  param_1 = param_1 + 0x110;
  if (param_2 != 0) {
    FUN_1001b66dc(0x3fef684c,param_1,"xp_bar_red","xp_bar_new");
    FUN_1001b6720(0x3f800000,0x3f800000,param_1);
    FUN_1001b5d78(param_1,&DAT_10115a168,&DAT_10115a168,&DAT_10115a168);
    return;
  }
  FUN_1001b66dc(0x3fef684c,param_1,"xp_bar_current","xp_bar_new");
  return;
}




long * FUN_1001c6e5c(long *param_1)

{
  long *plVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined1 auStack_50 [8];
  void *local_48;
  
  puVar3 = (undefined8 *)FUN_10064e20c();
  *puVar3 = &PTR_thunk_FUN_10017d364_101465a98;
  puVar3 = puVar3 + 0x17;
  thunk_FUN_100652c08(puVar3);
  plVar1 = param_1 + 0x35;
  thunk_FUN_100652c08(plVar1);
  plVar2 = param_1 + 0x53;
  thunk_FUN_100650e64(plVar2);
  param_1[0x79] = 0x4000000000000000;
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,puVar3,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  FUN_100652cac(plVar1,PTR_s_build___MenuPartsCommon_tga_101854970,"ranked_levelIcon");
  FUN_100652dd4(plVar1,&DAT_10115a164,2);
  *(uint *)((long)param_1 + 0x22c) = *(uint *)((long)param_1 + 0x22c) & 0xfffffffb;
  FUN_100652cac(puVar3,PTR_s_build___MenuPartsCommon_tga_101854970,"ranked_levelIcon");
  FUN_100651038(plVar2,PTR_s_build___Fonts_Brandon_Bold_48_fo_10184e238);
  FUN_1004e3120(auStack_50,"-");
  FUN_1006513c0(plVar2,auStack_50);
  if (local_48 != (void *)0x0) {
    operator_delete__(local_48);
  }
  uVar4 = (**(code **)(*param_1 + 0x118))(param_1);
  FUN_10064e4a0(param_1,uVar4);
  (**(code **)(*param_1 + 0xe8))(param_1);
  return param_1;
}




long * thunk_FUN_1001c6e5c(long *param_1)

{
  long *plVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined1 auStack_50 [8];
  void *pvStack_48;
  
  puVar3 = (undefined8 *)FUN_10064e20c();
  *puVar3 = &PTR_thunk_FUN_10017d364_101465a98;
  puVar3 = puVar3 + 0x17;
  thunk_FUN_100652c08(puVar3);
  plVar1 = param_1 + 0x35;
  thunk_FUN_100652c08(plVar1);
  plVar2 = param_1 + 0x53;
  thunk_FUN_100650e64(plVar2);
  param_1[0x79] = 0x4000000000000000;
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,puVar3,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  FUN_100652cac(plVar1,PTR_s_build___MenuPartsCommon_tga_101854970,"ranked_levelIcon");
  FUN_100652dd4(plVar1,&DAT_10115a164,2);
  *(uint *)((long)param_1 + 0x22c) = *(uint *)((long)param_1 + 0x22c) & 0xfffffffb;
  FUN_100652cac(puVar3,PTR_s_build___MenuPartsCommon_tga_101854970,"ranked_levelIcon");
  FUN_100651038(plVar2,PTR_s_build___Fonts_Brandon_Bold_48_fo_10184e238);
  FUN_1004e3120(auStack_50,"-");
  FUN_1006513c0(plVar2,auStack_50);
  if (pvStack_48 != (void *)0x0) {
    operator_delete__(pvStack_48);
  }
  uVar4 = (**(code **)(*param_1 + 0x118))(param_1);
  FUN_10064e4a0(param_1,uVar4);
  (**(code **)(*param_1 + 0xe8))(param_1);
  return param_1;
}




void FUN_1001c6fd8(long param_1,ulong param_2)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  undefined1 auStack_58 [8];
  void *local_50;
  undefined4 local_44;
  
  fVar5 = (float)NEON_fminnm((float)(int)param_2,0x41e80000);
  if (fVar5 <= -1.0) {
    fVar5 = -1.0;
  }
  iVar4 = (int)fVar5;
  FUN_1000f0a34(iVar4);
  iVar3 = FUN_1000f0a5c(iVar4);
  local_44 = 0xff000000;
  thunk_FUN_1004e439c(auStack_58,&DAT_101d91650);
  if (iVar4 < 0) {
    if (iVar4 == -1) {
      local_44 = 0xffffffff;
      uVar2 = *(uint *)(param_1 + 0x84);
      if ((uVar2 & 0x7f80) != 0x2600) {
        *(uint *)(param_1 + 0x84) = uVar2 & 0xffff8000 | uVar2 & 0x7f | 0x2600;
        FUN_1000200a0(param_1);
      }
    }
  }
  else {
    if (iVar3 == 0) {
      local_44 = 0xff3f6fb5;
    }
    else if (iVar3 == 1) {
      local_44 = 0xffc5c5c5;
    }
    else if (iVar3 == 2) {
      local_44 = 0xff4fc1f1;
    }
    if ((~*(uint *)(param_1 + 0x84) & 0x7f80) != 0) {
      *(uint *)(param_1 + 0x84) = *(uint *)(param_1 + 0x84) | 0x7f80;
      FUN_1000200a0(param_1);
    }
    FUN_1004e38ac(auStack_58,"%d");
  }
  FUN_100652dd4(param_1 + 0xb8,&local_44,2);
  lVar1 = param_1 + 0x298;
  FUN_1006513c0(lVar1,auStack_58);
  FUN_100651460(lVar1,&local_44);
  *(uint *)(param_1 + 0x31c) =
       (*(uint *)(param_1 + 0x31c) & 0xfffffff8 |
       *(uint *)(param_1 + 0x31c) & 3 | (int)((param_2 >> 0x1d & 7) >> 2) << 2) ^ 4;
  FUN_10064e5ec(0,0xc0000000,lVar1,8,param_1 + 0xb8,8);
  if (local_50 != (void *)0x0) {
    operator_delete__(local_50);
  }
  return;
}




void FUN_1001c717c(long param_1,int param_2)

{
  uint uVar1;
  undefined8 local_28;
  
  uVar1 = 4;
  if (param_2 == 0) {
    uVar1 = 0;
  }
  *(uint *)(param_1 + 0x22c) = *(uint *)(param_1 + 0x22c) & 0xfffffffb | uVar1;
  FUN_10065165c(param_1 + 0x298);
  local_28 = 0x4000000040000000;
  FUN_1001c71e4(param_1,&local_28,0xff000000);
  return;
}




void FUN_1001c71e4(long param_1,float *param_2,undefined4 param_3)

{
  bool bVar1;
  undefined8 local_40;
  undefined4 local_34;
  
  bVar1 = false;
  if ((*(float *)(param_1 + 0x1e8) == *param_2) &&
     (bVar1 = false, !NAN(*(float *)(param_1 + 0x1ec)) && !NAN(param_2[1]))) {
    bVar1 = *(float *)(param_1 + 0x1ec) == param_2[1];
  }
  local_34 = param_3;
  if (!bVar1) {
    *(undefined8 *)(param_1 + 0x1e8) = *(undefined8 *)param_2;
    FUN_1000200a0(param_1 + 0x1a8);
  }
  FUN_100652dd4(param_1 + 0x1a8,&local_34,2);
  FUN_1006516bc(param_1 + 0x298,&local_34);
  local_40 = *(undefined8 *)param_2;
  FUN_1006516c8(param_1 + 0x298,&local_40);
  return;
}




void FUN_1001c7278(long *param_1)

{
  FUN_100651038(param_1 + 0x53);
                    /* WARNING: Could not recover jumptable at 0x0001001c72a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xe8))(param_1);
  return;
}




void FUN_1001c72a8(float param_1,long *param_2)

{
  bool bVar1;
  
  bVar1 = false;
  if ((*(float *)(param_2 + 0x5c) == param_1) &&
     (bVar1 = false, !NAN(*(float *)((long)param_2 + 0x2e4)) && !NAN(param_1))) {
    bVar1 = *(float *)((long)param_2 + 0x2e4) == param_1;
  }
  if (!bVar1) {
    *(float *)(param_2 + 0x5c) = param_1;
    *(float *)((long)param_2 + 0x2e4) = param_1;
    FUN_1000200a0(param_2 + 0x53);
  }
                    /* WARNING: Could not recover jumptable at 0x0001001c72f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0xe8))(param_2);
  return;
}




void FUN_1001c72f4(long param_1)

{
  long lVar1;
  
  FUN_10064e32c();
  lVar1 = param_1 + 0xb8;
  FUN_10064f15c(lVar1,param_1,1,1);
  FUN_10064f15c(param_1 + 0x1a8,param_1,1,1);
  FUN_10064e5ec(0,0,lVar1,8,param_1,8);
  FUN_10064e5ec(*(undefined4 *)(param_1 + 0x3c8),*(undefined4 *)(param_1 + 0x3cc),param_1 + 0x1a8,8,
                lVar1,8);
  FUN_10064e5ec(0,0xc0000000,param_1 + 0x298,8,lVar1,8);
  return;
}




undefined8 FUN_1001c739c(undefined1 param_1 [16],float param_2,long param_3)

{
  float fVar1;
  
  fVar1 = (float)FUN_1006531b0(param_3 + 0xb8);
  return CONCAT44((int)(param_2 * 0.6),(int)(fVar1 * 0.6));
}




long * FUN_1001c73d0(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  undefined **ppuVar7;
  uint uVar8;
  int iVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  
  puVar10 = (undefined8 *)FUN_1006421a8();
  *puVar10 = &PTR_thunk_FUN_1001c768c_101465be0;
  puVar10 = puVar10 + 0x11;
  FUN_1006421a8(puVar10);
  param_1[0x11] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar1 = param_1 + 0x22;
  FUN_1006421a8(plVar1);
  param_1[0x22] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar2 = param_1 + 0x33;
  thunk_FUN_100652c08(plVar2);
  plVar3 = param_1 + 0x51;
  thunk_FUN_100650e64(plVar3);
  plVar4 = param_1 + 0x77;
  FUN_1001c6e5c(plVar4);
  plVar5 = param_1 + 0xf1;
  thunk_FUN_100650e64(plVar5);
  plVar6 = param_1 + 0x117;
  thunk_FUN_100650e64(plVar6);
  FUN_1006421a8(param_1 + 0x13d);
  param_1[0x13d] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  thunk_FUN_100652c08(param_1 + 0x14e);
  param_1[0x16d] = -0x100000002;
  param_1[0x16c] = -0x100000002;
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  FUN_100642bd8(plVar1,param_1 + 0x13d,1);
  (**(code **)(*param_1 + 0x78))(param_1,puVar10,1);
  FUN_100642bd8(puVar10,plVar2,1);
  FUN_100642bd8(puVar10,plVar3,1);
  FUN_100642bd8(puVar10,plVar4,1);
  FUN_100642bd8(plVar4,plVar5,1);
  FUN_100642bd8(puVar10,plVar6,1);
  iVar9 = FUN_100126c88();
  if ((*(uint *)((long)param_1 + 0x84) & 0x7f80) != 0) {
    *(uint *)((long)param_1 + 0x84) = *(uint *)((long)param_1 + 0x84) & 0xffff807f;
    FUN_1000200a0(param_1);
  }
  FUN_100652cac(plVar2,PTR_s_build___MenuPartsCommon_tga_101854970,"menu_fuzzy_dot");
  FUN_100651594(plVar3,PTR_s_build___Fonts_Brandon_Light_80_f_10184e1d0,&DAT_10115a168);
  FUN_100651038(plVar5,PTR_s_build___Fonts_Brandon_Bold_48_fo_10184e238);
  uVar11 = FUN_1004e0150("MENU_SKILL_TIER_IMAGE_SKILL_TIER_LABEL",0);
  FUN_1006513c0(plVar5,uVar11);
  FUN_10064e72c(0x40800000,plVar5,3,plVar4,1);
  FUN_10064e72c(0,plVar5,5,plVar4,5);
  ppuVar7 = &PTR_s_build___Fonts_Brandon_Bold_48_fo_10184e238;
  if (iVar9 == 0) {
    ppuVar7 = &PTR_s_build___Fonts_Brandon_Bold_40_fo_10184e230;
  }
  FUN_100651594(plVar6,*ppuVar7,&DAT_10115a168);
  uVar8 = *(uint *)((long)param_1 + 0x93c);
  if ((uVar8 & 0x7f80) != 0x3300) {
    *(uint *)((long)param_1 + 0x93c) = uVar8 & 0xffff8000 | uVar8 & 0x7f | 0x3300;
    FUN_1000200a0(plVar6);
  }
  FUN_1001c7644(param_1);
  return param_1;
}




void FUN_1001c7644(long param_1)

{
  long lVar1;
  int iVar2;
  
  lVar1 = param_1 + 0xa70;
  iVar2 = FUN_100642d08(lVar1);
  if (iVar2 != 0) {
    FUN_1006423ec(lVar1,1);
  }
  FUN_100642bd8(param_1 + 0x9e8,lVar1,1);
  return;
}




long * thunk_FUN_1001c73d0(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  undefined **ppuVar7;
  uint uVar8;
  int iVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  
  puVar10 = (undefined8 *)FUN_1006421a8();
  *puVar10 = &PTR_thunk_FUN_1001c768c_101465be0;
  puVar10 = puVar10 + 0x11;
  FUN_1006421a8(puVar10);
  param_1[0x11] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar1 = param_1 + 0x22;
  FUN_1006421a8(plVar1);
  param_1[0x22] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar2 = param_1 + 0x33;
  thunk_FUN_100652c08(plVar2);
  plVar3 = param_1 + 0x51;
  thunk_FUN_100650e64(plVar3);
  plVar4 = param_1 + 0x77;
  FUN_1001c6e5c(plVar4);
  plVar5 = param_1 + 0xf1;
  thunk_FUN_100650e64(plVar5);
  plVar6 = param_1 + 0x117;
  thunk_FUN_100650e64(plVar6);
  FUN_1006421a8(param_1 + 0x13d);
  param_1[0x13d] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  thunk_FUN_100652c08(param_1 + 0x14e);
  param_1[0x16d] = -0x100000002;
  param_1[0x16c] = -0x100000002;
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  FUN_100642bd8(plVar1,param_1 + 0x13d,1);
  (**(code **)(*param_1 + 0x78))(param_1,puVar10,1);
  FUN_100642bd8(puVar10,plVar2,1);
  FUN_100642bd8(puVar10,plVar3,1);
  FUN_100642bd8(puVar10,plVar4,1);
  FUN_100642bd8(plVar4,plVar5,1);
  FUN_100642bd8(puVar10,plVar6,1);
  iVar9 = FUN_100126c88();
  if ((*(uint *)((long)param_1 + 0x84) & 0x7f80) != 0) {
    *(uint *)((long)param_1 + 0x84) = *(uint *)((long)param_1 + 0x84) & 0xffff807f;
    FUN_1000200a0(param_1);
  }
  FUN_100652cac(plVar2,PTR_s_build___MenuPartsCommon_tga_101854970,"menu_fuzzy_dot");
  FUN_100651594(plVar3,PTR_s_build___Fonts_Brandon_Light_80_f_10184e1d0,&DAT_10115a168);
  FUN_100651038(plVar5,PTR_s_build___Fonts_Brandon_Bold_48_fo_10184e238);
  uVar11 = FUN_1004e0150("MENU_SKILL_TIER_IMAGE_SKILL_TIER_LABEL",0);
  FUN_1006513c0(plVar5,uVar11);
  FUN_10064e72c(0x40800000,plVar5,3,plVar4,1);
  FUN_10064e72c(0,plVar5,5,plVar4,5);
  ppuVar7 = &PTR_s_build___Fonts_Brandon_Bold_48_fo_10184e238;
  if (iVar9 == 0) {
    ppuVar7 = &PTR_s_build___Fonts_Brandon_Bold_40_fo_10184e230;
  }
  FUN_100651594(plVar6,*ppuVar7,&DAT_10115a168);
  uVar8 = *(uint *)((long)param_1 + 0x93c);
  if ((uVar8 & 0x7f80) != 0x3300) {
    *(uint *)((long)param_1 + 0x93c) = uVar8 & 0xffff8000 | uVar8 & 0x7f | 0x3300;
    FUN_1000200a0(plVar6);
  }
  FUN_1001c7644(param_1);
  return param_1;
}




void FUN_1001c768c(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_1001c768c_101465be0;
  FUN_1001c7744();
  param_1[0x14e] = &PTR_FUN_1014a7108;
  param_1[0x165] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x168);
  FUN_10064e2bc(param_1 + 0x14e);
  FUN_10064221c(param_1 + 0x13d);
  thunk_FUN_100651068(param_1 + 0x117);
  thunk_FUN_100651068(param_1 + 0xf1);
  FUN_10017d364(param_1 + 0x77);
  thunk_FUN_100651068(param_1 + 0x51);
  param_1[0x33] = &PTR_FUN_1014a7108;
  param_1[0x4a] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x4d);
  FUN_10064e2bc(param_1 + 0x33);
  FUN_10064221c(param_1 + 0x22);
  FUN_10064221c(param_1 + 0x11);
  FUN_10064221c(param_1);
  return;
}




void FUN_1001c7744(long param_1)

{
  long lVar1;
  int iVar2;
  
  lVar1 = param_1 + 0xa70;
  FUN_100652d8c(lVar1);
  iVar2 = FUN_100642d08(lVar1);
  if (iVar2 != 0) {
    FUN_1006423ec(lVar1,1);
  }
  *(undefined8 *)(param_1 + 0xb68) = 0xfffffffefffffffe;
  *(undefined8 *)(param_1 + 0xb60) = 0xfffffffefffffffe;
  return;
}




void thunk_FUN_1001c768c(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_1001c768c_101465be0;
  FUN_1001c7744();
  param_1[0x14e] = &PTR_FUN_1014a7108;
  param_1[0x165] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x168);
  FUN_10064e2bc(param_1 + 0x14e);
  FUN_10064221c(param_1 + 0x13d);
  thunk_FUN_100651068(param_1 + 0x117);
  thunk_FUN_100651068(param_1 + 0xf1);
  FUN_10017d364(param_1 + 0x77);
  thunk_FUN_100651068(param_1 + 0x51);
  param_1[0x33] = &PTR_FUN_1014a7108;
  param_1[0x4a] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x4d);
  FUN_10064e2bc(param_1 + 0x33);
  FUN_10064221c(param_1 + 0x22);
  FUN_10064221c(param_1 + 0x11);
  FUN_10064221c(param_1);
  return;
}




void FUN_1001c7794(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1001c768c();
  operator_delete(pvVar1);
  return;
}




void FUN_1001c77a8(long param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  bool bVar4;
  float fVar5;
  undefined1 *local_48;
  
  bVar4 = false;
  if ((*(float *)(param_1 + 0xab4) == 0.0) && (bVar4 = false, !NAN(*(float *)(param_1 + 0xab0)))) {
    bVar4 = *(float *)(param_1 + 0xab0) == 0.0;
  }
  if (!bVar4) {
    *(undefined8 *)(param_1 + 0xab0) = 0;
    FUN_1000200a0(param_1 + 0xa70);
  }
  local_48 = &DAT_3f0000003f000000;
  (**(code **)(*(long *)(param_1 + 0xa70) + 0x28))(param_1 + 0xa70,&local_48);
  lVar1 = param_1 + 0x288;
  fVar5 = *(float *)(param_1 + 0xabc) * 300.0;
  bVar4 = false;
  if ((*(float *)(param_1 + 0x2c8) == 0.0) &&
     (bVar4 = false, !NAN(*(float *)(param_1 + 0x2cc)) && !NAN(fVar5))) {
    bVar4 = *(float *)(param_1 + 0x2cc) == fVar5;
  }
  if (!bVar4) {
    *(undefined4 *)(param_1 + 0x2c8) = 0;
    *(float *)(param_1 + 0x2cc) = fVar5;
    FUN_1000200a0(lVar1);
  }
  local_48 = &DAT_3f0000003f000000;
  (**(code **)(*(long *)(param_1 + 0x288) + 0x28))(lVar1,&local_48);
  lVar2 = param_1 + 0x8b8;
  fVar5 = (float)FUN_1006573a8(0x41f00000,lVar1,lVar2);
  fVar5 = *(float *)(param_1 + 0x2cc) + fVar5;
  bVar4 = false;
  if ((*(float *)(param_1 + 0x8f8) == *(float *)(param_1 + 0x2c8)) &&
     (bVar4 = false, !NAN(*(float *)(param_1 + 0x8fc)) && !NAN(fVar5))) {
    bVar4 = *(float *)(param_1 + 0x8fc) == fVar5;
  }
  if (!bVar4) {
    *(float *)(param_1 + 0x8f8) = *(float *)(param_1 + 0x2c8);
    *(float *)(param_1 + 0x8fc) = fVar5;
    FUN_1000200a0(lVar2);
  }
  local_48 = (undefined1 *)0x3f000000;
  (**(code **)(*(long *)(param_1 + 0x8b8) + 0x28))(lVar2,&local_48);
  fVar5 = (float)FUN_100651184(param_1 + 0x788);
  FUN_10064e72c(0x80000000,param_1 + 0x3b8,2,lVar1,0);
  FUN_10064e72c(fVar5 * -0.5,param_1 + 0x3b8,4,lVar1,4);
  plVar3 = (long *)(param_1 + 0x198);
  if ((*(float *)(param_1 + 0x1d8) != *(float *)(param_1 + 0x2c8)) ||
     (*(float *)(param_1 + 0x1dc) != *(float *)(param_1 + 0x2cc))) {
    *(float *)(param_1 + 0x1d8) = *(float *)(param_1 + 0x2c8);
    *(float *)(param_1 + 0x1dc) = *(float *)(param_1 + 0x2cc);
    FUN_1000200a0(plVar3);
  }
  local_48 = &DAT_3f0000003f000000;
  (**(code **)(*plVar3 + 0x28))(plVar3,&local_48);
  return;
}




void FUN_1001c7970(long param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = 4;
  if (param_2 == 0) {
    uVar1 = 0;
  }
  *(uint *)(param_1 + 0x10c) = *(uint *)(param_1 + 0x10c) & 0xfffffffb | uVar1;
  return;
}




void FUN_1001c7990(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  undefined4 local_64;
  float local_60;
  float fStack_5c;
  void *local_58;
  
  fVar6 = (float)NEON_fminnm((float)(int)param_2,0x41e80000);
  fVar7 = -1.0;
  if (fVar6 <= -1.0) {
    fVar6 = -1.0;
  }
  iVar5 = (int)fVar6;
  uVar1 = FUN_1000f0a34(iVar5);
  uVar2 = FUN_1000f0a5c(iVar5);
  uVar3 = FUN_1000f0a88(iVar5,1,0);
  FUN_1006513c0(param_1 + 0x288,uVar3);
  local_60 = (float)FUN_100651184(param_1 + 0x288);
  local_60 = local_60 * 3.0;
  fStack_5c = fVar7 * 8.0;
  FUN_10064e48c(param_1 + 0x198,&local_60);
  FUN_1001c6fd8(param_1 + 0x3b8,param_2);
  iVar4 = (int)uVar2;
  if (iVar5 < 0) {
    *(uint *)(param_1 + 0x43c) = *(uint *)(param_1 + 0x43c) & 0xfffffffb;
  }
  else {
    FUN_1004e3120(&local_60,"ERROR");
    local_64 = 0xff000000;
    if (iVar4 == 0) {
      uVar3 = FUN_1004e0150("SKILL_SUBTIER_BRONZE",0);
      FUN_1000153b4(&local_60,uVar3);
      local_64 = 0xff3f6fb5;
    }
    else if (iVar4 == 1) {
      uVar3 = FUN_1004e0150("SKILL_SUBTIER_SILVER",0);
      FUN_1000153b4(&local_60,uVar3);
      local_64 = 0xffc5c5c5;
    }
    else if (iVar4 == 2) {
      uVar3 = FUN_1004e0150("SKILL_SUBTIER_GOLD",0);
      FUN_1000153b4(&local_60,uVar3);
      local_64 = 0xff4fc1f1;
    }
    *(uint *)(param_1 + 0x43c) = *(uint *)(param_1 + 0x43c) | 4;
    FUN_100651460(param_1 + 0x788,&local_64);
    if (local_58 != (void *)0x0) {
      operator_delete__(local_58);
    }
  }
  iVar5 = (int)uVar1;
  *(int *)(param_1 + 0xb60) = iVar5;
  *(int *)(param_1 + 0xb64) = iVar4;
  if ((iVar5 != *(int *)(param_1 + 0xb68)) || (iVar4 != *(int *)(param_1 + 0xb6c))) {
    *(int *)(param_1 + 0xb68) = iVar5;
    *(int *)(param_1 + 0xb6c) = iVar4;
    FUN_1001c7b74(param_1,uVar1,uVar2);
  }
  FUN_1001c77a8(param_1);
  return;
}




void FUN_1001c7b74(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 ****ppppuVar2;
  ushort uVar3;
  ushort *puVar4;
  ushort *puVar5;
  undefined8 ***local_58 [2];
  char local_41;
  
  lVar1 = param_1 + 0xa70;
  FUN_100652d8c(lVar1);
  FUN_1000f0e54(local_58,param_2,param_3);
  ppppuVar2 = (undefined8 ****)local_58[0];
  if (-1 < local_41) {
    ppppuVar2 = local_58;
  }
  FUN_100652cac(lVar1,ppppuVar2,"background");
  if (local_41 < '\0') {
    operator_delete(local_58[0]);
  }
  FUN_10064e47c(0x44c00000,0x44c00000,lVar1);
  if ((*(uint *)(param_1 + 0x84) & 0x7f80) != 0) {
    *(uint *)(param_1 + 0x84) = *(uint *)(param_1 + 0x84) & 0xffff807f;
    FUN_1000200a0(param_1);
  }
  lVar1 = DAT_101dbd2f8;
  uVar3 = *(ushort *)(DAT_101dbd2f8 + 0x20010);
  if ((ulong)uVar3 == 0xffff) {
    puVar4 = (ushort *)0x0;
  }
  else {
    puVar4 = (ushort *)(DAT_101dbd2f8 + (ulong)uVar3 * 0x40 + 0x10);
    if (uVar3 == *(ushort *)(DAT_101dbd2f8 + 0x20012)) {
      uVar3 = 0xffff;
    }
    else {
      uVar3 = *puVar4;
    }
    *(ushort *)(DAT_101dbd2f8 + 0x20010) = uVar3;
    *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
    FUN_10063f0f0(puVar4);
    *(undefined ***)puVar4 = &PTR_thunk_FUN_10063eeb4_10144b270;
    *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
  }
  FUN_10063f0e8(0x3dcccccd,puVar4);
  lVar1 = DAT_101dbd2f8;
  uVar3 = *(ushort *)(DAT_101dbd2f8 + 0x20010);
  if ((ulong)uVar3 != 0xffff) {
    puVar5 = (ushort *)(DAT_101dbd2f8 + (ulong)uVar3 * 0x40 + 0x10);
    if (uVar3 == *(ushort *)(DAT_101dbd2f8 + 0x20012)) {
      uVar3 = 0xffff;
    }
    else {
      uVar3 = *puVar5;
    }
    *(ushort *)(DAT_101dbd2f8 + 0x20010) = uVar3;
    *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
    FUN_10063ee9c(puVar5);
    *(undefined ***)puVar5 = &PTR_thunk_FUN_10063eeb4_1014a52f0;
    *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
    lVar1 = DAT_101dbd2f8;
    uVar3 = *(ushort *)(DAT_101dbd2f8 + 0x20010);
    if ((ulong)uVar3 != 0xffff) {
      puVar5 = (ushort *)(DAT_101dbd2f8 + (ulong)uVar3 * 0x40 + 0x10);
      if (uVar3 == *(ushort *)(DAT_101dbd2f8 + 0x20012)) {
        uVar3 = 0xffff;
      }
      else {
        uVar3 = *puVar5;
      }
      *(ushort *)(DAT_101dbd2f8 + 0x20010) = uVar3;
      *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
      FUN_10063fcac(puVar5);
      *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
      goto LAB_1001c7d90;
    }
  }
  puVar5 = (ushort *)0x0;
LAB_1001c7d90:
  FUN_10063fce0(0x3f800000,puVar5);
  FUN_10063f0e8(0x3f800000,puVar5);
  FUN_100642b7c(param_1,puVar4);
  return;
}




void FUN_1001c7dd4(long param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1006513c0(param_1 + 0x8b8);
  FUN_100651460(param_1 + 0x8b8,param_3);
  return;
}




float FUN_1001c7e04(long param_1)

{
  return *(float *)(param_1 + 0xab8) * 1000.0;
}




float FUN_1001c7e20(long *param_1)

{
  float fVar1;
  
  fVar1 = (float)(**(code **)(*param_1 + 0x48))();
  return *(float *)(param_1 + 9) * fVar1;
}




long * FUN_1001c7e54(long *param_1)

{
  long *plVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined4 local_38 [2];
  
  puVar3 = (undefined8 *)FUN_10064e20c();
  *puVar3 = &PTR_FUN_101462268;
  puVar3 = puVar3 + 0x17;
  thunk_FUN_100652c08(puVar3);
  plVar1 = param_1 + 0x35;
  thunk_FUN_100650e64(plVar1);
  *(undefined4 *)(param_1 + 0x5b) = 0;
  (**(code **)(*param_1 + 0x78))(param_1,puVar3,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  FUN_100651038(plVar1,PTR_s_build___Fonts_Brandon_Bold_36_fo_10184e228);
  uVar2 = *(uint *)((long)param_1 + 0x22c);
  if ((uVar2 & 0x7f80) != 0x4c80) {
    *(uint *)((long)param_1 + 0x22c) = uVar2 & 0xffff8000 | uVar2 & 0x7f | 0x4c80;
    FUN_1000200a0(plVar1);
  }
  FUN_100652cac(puVar3,PTR_s_build___MenuPartsCommon_tga_101854970,"vert_glass_shadow");
  local_38[0] = 0xff473835;
  FUN_100652dd4(puVar3,local_38,2);
  *(byte *)(param_1 + 0x32) = *(byte *)(param_1 + 0x32) | 2;
  FUN_1001c7f68(param_1);
  return param_1;
}




void FUN_1001c7f68(undefined1 param_1 [16],float param_2,long param_3)

{
  long lVar1;
  long lVar2;
  int iVar3;
  undefined4 uVar4;
  float local_38;
  float fStack_34;
  
  if (((DAT_101e430e0 & 1) == 0) && (iVar3 = ___cxa_guard_acquire(&DAT_101e430e0), iVar3 != 0)) {
    FUN_1004e313c(&DAT_101e430d0);
    ___cxa_atexit(FUN_100046198,&DAT_101e430d0,0x100000000);
    ___cxa_guard_release(&DAT_101e430e0);
  }
  FUN_1004e38ac(&DAT_101e430d0,"%d");
  lVar1 = param_3 + 0x1a8;
  FUN_1006513c0(lVar1,&DAT_101e430d0);
  lVar2 = param_3 + 0xb8;
  local_38 = (float)FUN_100651184(lVar1);
  local_38 = local_38 + 10.0;
  fStack_34 = param_2 + 5.0;
  FUN_10064e48c(lVar2,&local_38);
  uVar4 = 0;
  FUN_10064e5ec(0,lVar2,8,lVar1,8);
  local_38 = (float)FUN_100652e60(lVar2);
  fStack_34 = (float)uVar4;
  FUN_10064e48c(param_3,&local_38);
  return;
}




long * thunk_FUN_1001c7e54(long *param_1)

{
  long *plVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined4 auStack_38 [2];
  
  puVar3 = (undefined8 *)FUN_10064e20c();
  *puVar3 = &PTR_FUN_101462268;
  puVar3 = puVar3 + 0x17;
  thunk_FUN_100652c08(puVar3);
  plVar1 = param_1 + 0x35;
  thunk_FUN_100650e64(plVar1);
  *(undefined4 *)(param_1 + 0x5b) = 0;
  (**(code **)(*param_1 + 0x78))(param_1,puVar3,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  FUN_100651038(plVar1,PTR_s_build___Fonts_Brandon_Bold_36_fo_10184e228);
  uVar2 = *(uint *)((long)param_1 + 0x22c);
  if ((uVar2 & 0x7f80) != 0x4c80) {
    *(uint *)((long)param_1 + 0x22c) = uVar2 & 0xffff8000 | uVar2 & 0x7f | 0x4c80;
    FUN_1000200a0(plVar1);
  }
  FUN_100652cac(puVar3,PTR_s_build___MenuPartsCommon_tga_101854970,"vert_glass_shadow");
  auStack_38[0] = 0xff473835;
  FUN_100652dd4(puVar3,auStack_38,2);
  *(byte *)(param_1 + 0x32) = *(byte *)(param_1 + 0x32) | 2;
  FUN_1001c7f68(param_1);
  return param_1;
}




void FUN_1001c8080(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x2d8) = param_2;
  FUN_1001c7f68();
  return;
}




void FUN_1001c8088(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_10017d364();
  operator_delete(pvVar1);
  return;
}




void thunk_FUN_1001c80b4(void)

{
  FUN_1001c80b4();
  return;
}




void FUN_1001c80a0(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1001c80b4();
  operator_delete(pvVar1);
  return;
}




void FUN_1001c80b4(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR_thunk_FUN_1001c80b4_101465998;
  thunk_FUN_100651068(param_1 + 0x3c4);
  thunk_FUN_100651068(param_1 + 0x39e);
  param_1[0x380] = &PTR_FUN_1014a7108;
  param_1[0x397] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x39a);
  FUN_10064e2bc(param_1 + 0x380);
  param_1[0x362] = &PTR_FUN_1014a7108;
  param_1[0x379] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x37c);
  FUN_10064e2bc(param_1 + 0x362);
  FUN_10064221c(param_1 + 0x351);
  thunk_FUN_100651068(param_1 + 0x32b);
  thunk_FUN_100651068(param_1 + 0x305);
  thunk_FUN_100651068(param_1 + 0x2df);
  lVar1 = 0;
  do {
    *(undefined ***)((long)param_1 + lVar1 + 0x1608) = &PTR_FUN_1014a7108;
    *(undefined ***)((long)param_1 + lVar1 + 0x16c0) = &PTR_FUN_1014a7268;
    thunk_FUN_100657580((long)param_1 + lVar1 + 0x16d8);
    FUN_10064e2bc((long)param_1 + lVar1 + 0x1608);
    lVar1 = lVar1 + -0xf0;
  } while (lVar1 != -0x2d0);
  FUN_100196fa4(param_1 + 0x22);
  FUN_10064221c(param_1 + 0x11);
  FUN_10064221c(param_1);
  return;
}




long * FUN_1001c81d8(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  uint uVar8;
  undefined8 *puVar9;
  
  puVar9 = (undefined8 *)FUN_1006421a8();
  *puVar9 = &PTR_thunk_FUN_1001c859c_101465ce0;
  puVar9[0x12] = 0;
  puVar9[0x11] = 0;
  param_1[0x14] = 0;
  param_1[0x13] = 0;
  param_1[0x16] = 0;
  param_1[0x15] = 0;
  thunk_FUN_100652c08();
  plVar1 = param_1 + 0x35;
  thunk_FUN_100652c08(plVar1);
  plVar2 = param_1 + 0x53;
  thunk_FUN_100652c08(plVar2);
  plVar3 = param_1 + 0x71;
  FUN_1006421a8(plVar3);
  param_1[0x71] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  thunk_FUN_100652c08();
  thunk_FUN_100652c08();
  thunk_FUN_100652c08();
  plVar4 = param_1 + 0xdc;
  FUN_1006421a8(plVar4);
  param_1[0xdc] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar5 = param_1 + 0xed;
  thunk_FUN_100652c08(plVar5);
  plVar6 = param_1 + 0x10b;
  thunk_FUN_100652c08(plVar6);
  plVar7 = param_1 + 0x129;
  thunk_FUN_100652c08(plVar7);
  FUN_1006421a8(param_1 + 0x147);
  param_1[0x147] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  param_1[0x158] = 0;
  *(undefined4 *)(param_1 + 0x159) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0xacc) = 0;
  (**(code **)(*param_1 + 0x78))(param_1,plVar4,1);
  FUN_100642bd8(plVar4,plVar5,1);
  FUN_100642bd8(plVar4,plVar6,1);
  FUN_100642bd8(plVar4,plVar7,1);
  (**(code **)(*param_1 + 0x78))(param_1,puVar9 + 0x17,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar3,1);
  FUN_100642bd8(plVar3,param_1 + 0xbe,1);
  FUN_100642bd8(plVar3,param_1 + 0x82,1);
  FUN_100642bd8(plVar3,param_1 + 0xa0,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x147,1);
  FUN_100652cac(param_1 + 0x82,PTR_s_build___MenuPartsCommon_tga_101854970,"square_button_fill_left"
               );
  *(uint *)((long)param_1 + 0x494) = *(uint *)((long)param_1 + 0x494) & 0xfffffffb;
  FUN_100652cac(param_1 + 0xa0,PTR_s_build___MenuPartsCommon_tga_101854970,
                "square_button_fill_right");
  *(uint *)((long)param_1 + 0x584) = *(uint *)((long)param_1 + 0x584) & 0xfffffffb;
  FUN_100652cac(param_1 + 0xbe,PTR_s_build___MenuPartsCommon_tga_101854970,"white_background");
  *(uint *)((long)param_1 + 0x674) = *(uint *)((long)param_1 + 0x674) & 0xfffffffb;
  FUN_100652cac(plVar5,PTR_s_build___MenuPartsCommon_tga_101854970,"square_button_fill_left");
  FUN_100652dd4(plVar5,&DAT_10115a164,2);
  uVar8 = *(uint *)((long)param_1 + 0x7ec);
  if ((uVar8 & 0x7f80) != 0x4c80) {
    *(uint *)((long)param_1 + 0x7ec) = uVar8 & 0xffff8000 | uVar8 & 0x7f | 0x4c80;
    FUN_1000200a0(plVar5);
  }
  FUN_100652cac(plVar6,PTR_s_build___MenuPartsCommon_tga_101854970,"square_button_fill_right");
  FUN_100652dd4(plVar6,&DAT_10115a164,2);
  uVar8 = *(uint *)((long)param_1 + 0x8dc);
  if ((uVar8 & 0x7f80) != 0x4c80) {
    *(uint *)((long)param_1 + 0x8dc) = uVar8 & 0xffff8000 | uVar8 & 0x7f | 0x4c80;
    FUN_1000200a0(plVar6);
  }
  FUN_100652cac(plVar7,PTR_s_build___MenuPartsCommon_tga_101854970,"white_background");
  FUN_100652dd4(plVar7,&DAT_10115a164,2);
  uVar8 = *(uint *)((long)param_1 + 0x9cc);
  if ((uVar8 & 0x7f80) != 0x4c80) {
    *(uint *)((long)param_1 + 0x9cc) = uVar8 & 0xffff8000 | uVar8 & 0x7f | 0x4c80;
    FUN_1000200a0(plVar7);
  }
  FUN_100652cac(puVar9 + 0x17,PTR_s_build___MenuPartsCommon_tga_101854970,"square_button_left");
  FUN_100652cac(plVar1,PTR_s_build___MenuPartsCommon_tga_101854970,"square_button_right");
  FUN_100652cac(plVar2,PTR_s_build___MenuPartsCommon_tga_101854970,"square_button_middle");
  return param_1;
}




long * thunk_FUN_1001c81d8(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  uint uVar8;
  undefined8 *puVar9;
  
  puVar9 = (undefined8 *)FUN_1006421a8();
  *puVar9 = &PTR_thunk_FUN_1001c859c_101465ce0;
  puVar9[0x12] = 0;
  puVar9[0x11] = 0;
  param_1[0x14] = 0;
  param_1[0x13] = 0;
  param_1[0x16] = 0;
  param_1[0x15] = 0;
  thunk_FUN_100652c08();
  plVar1 = param_1 + 0x35;
  thunk_FUN_100652c08(plVar1);
  plVar2 = param_1 + 0x53;
  thunk_FUN_100652c08(plVar2);
  plVar3 = param_1 + 0x71;
  FUN_1006421a8(plVar3);
  param_1[0x71] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  thunk_FUN_100652c08();
  thunk_FUN_100652c08();
  thunk_FUN_100652c08();
  plVar4 = param_1 + 0xdc;
  FUN_1006421a8(plVar4);
  param_1[0xdc] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar5 = param_1 + 0xed;
  thunk_FUN_100652c08(plVar5);
  plVar6 = param_1 + 0x10b;
  thunk_FUN_100652c08(plVar6);
  plVar7 = param_1 + 0x129;
  thunk_FUN_100652c08(plVar7);
  FUN_1006421a8(param_1 + 0x147);
  param_1[0x147] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  param_1[0x158] = 0;
  *(undefined4 *)(param_1 + 0x159) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0xacc) = 0;
  (**(code **)(*param_1 + 0x78))(param_1,plVar4,1);
  FUN_100642bd8(plVar4,plVar5,1);
  FUN_100642bd8(plVar4,plVar6,1);
  FUN_100642bd8(plVar4,plVar7,1);
  (**(code **)(*param_1 + 0x78))(param_1,puVar9 + 0x17,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar3,1);
  FUN_100642bd8(plVar3,param_1 + 0xbe,1);
  FUN_100642bd8(plVar3,param_1 + 0x82,1);
  FUN_100642bd8(plVar3,param_1 + 0xa0,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x147,1);
  FUN_100652cac(param_1 + 0x82,PTR_s_build___MenuPartsCommon_tga_101854970,"square_button_fill_left"
               );
  *(uint *)((long)param_1 + 0x494) = *(uint *)((long)param_1 + 0x494) & 0xfffffffb;
  FUN_100652cac(param_1 + 0xa0,PTR_s_build___MenuPartsCommon_tga_101854970,
                "square_button_fill_right");
  *(uint *)((long)param_1 + 0x584) = *(uint *)((long)param_1 + 0x584) & 0xfffffffb;
  FUN_100652cac(param_1 + 0xbe,PTR_s_build___MenuPartsCommon_tga_101854970,"white_background");
  *(uint *)((long)param_1 + 0x674) = *(uint *)((long)param_1 + 0x674) & 0xfffffffb;
  FUN_100652cac(plVar5,PTR_s_build___MenuPartsCommon_tga_101854970,"square_button_fill_left");
  FUN_100652dd4(plVar5,&DAT_10115a164,2);
  uVar8 = *(uint *)((long)param_1 + 0x7ec);
  if ((uVar8 & 0x7f80) != 0x4c80) {
    *(uint *)((long)param_1 + 0x7ec) = uVar8 & 0xffff8000 | uVar8 & 0x7f | 0x4c80;
    FUN_1000200a0(plVar5);
  }
  FUN_100652cac(plVar6,PTR_s_build___MenuPartsCommon_tga_101854970,"square_button_fill_right");
  FUN_100652dd4(plVar6,&DAT_10115a164,2);
  uVar8 = *(uint *)((long)param_1 + 0x8dc);
  if ((uVar8 & 0x7f80) != 0x4c80) {
    *(uint *)((long)param_1 + 0x8dc) = uVar8 & 0xffff8000 | uVar8 & 0x7f | 0x4c80;
    FUN_1000200a0(plVar6);
  }
  FUN_100652cac(plVar7,PTR_s_build___MenuPartsCommon_tga_101854970,"white_background");
  FUN_100652dd4(plVar7,&DAT_10115a164,2);
  uVar8 = *(uint *)((long)param_1 + 0x9cc);
  if ((uVar8 & 0x7f80) != 0x4c80) {
    *(uint *)((long)param_1 + 0x9cc) = uVar8 & 0xffff8000 | uVar8 & 0x7f | 0x4c80;
    FUN_1000200a0(plVar7);
  }
  FUN_100652cac(puVar9 + 0x17,PTR_s_build___MenuPartsCommon_tga_101854970,"square_button_left");
  FUN_100652cac(plVar1,PTR_s_build___MenuPartsCommon_tga_101854970,"square_button_right");
  FUN_100652cac(plVar2,PTR_s_build___MenuPartsCommon_tga_101854970,"square_button_middle");
  return param_1;
}




void FUN_1001c859c(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_1001c859c_101465ce0;
  FUN_1001c8728();
  FUN_10064221c(param_1 + 0x147);
  param_1[0x129] = &PTR_FUN_1014a7108;
  param_1[0x140] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x143);
  FUN_10064e2bc(param_1 + 0x129);
  param_1[0x10b] = &PTR_FUN_1014a7108;
  param_1[0x122] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x125);
  FUN_10064e2bc(param_1 + 0x10b);
  param_1[0xed] = &PTR_FUN_1014a7108;
  param_1[0x104] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x107);
  FUN_10064e2bc(param_1 + 0xed);
  FUN_10064221c(param_1 + 0xdc);
  param_1[0xbe] = &PTR_FUN_1014a7108;
  param_1[0xd5] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xd8);
  FUN_10064e2bc(param_1 + 0xbe);
  param_1[0xa0] = &PTR_FUN_1014a7108;
  param_1[0xb7] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xba);
  FUN_10064e2bc(param_1 + 0xa0);
  param_1[0x82] = &PTR_FUN_1014a7108;
  param_1[0x99] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x9c);
  FUN_10064e2bc(param_1 + 0x82);
  FUN_10064221c(param_1 + 0x71);
  param_1[0x53] = &PTR_FUN_1014a7108;
  param_1[0x6a] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x6d);
  FUN_10064e2bc(param_1 + 0x53);
  param_1[0x35] = &PTR_FUN_1014a7108;
  param_1[0x4c] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x4f);
  FUN_10064e2bc(param_1 + 0x35);
  param_1[0x17] = &PTR_FUN_1014a7108;
  param_1[0x2e] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x31);
  FUN_10064e2bc(param_1 + 0x17);
  if ((void *)param_1[0x16] != (void *)0x0) {
    operator_delete__((void *)param_1[0x16]);
    param_1[0x15] = 0;
    param_1[0x16] = 0;
  }
  if ((void *)param_1[0x14] != (void *)0x0) {
    operator_delete__((void *)param_1[0x14]);
    param_1[0x13] = 0;
    param_1[0x14] = 0;
  }
  if ((void *)param_1[0x12] != (void *)0x0) {
    operator_delete__((void *)param_1[0x12]);
    param_1[0x11] = 0;
    param_1[0x12] = 0;
  }
  FUN_10064221c(param_1);
  return;
}




void FUN_1001c8728(long param_1)

{
  int iVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  
  uVar3 = (ulong)*(uint *)(param_1 + 0x88);
  if (*(uint *)(param_1 + 0x88) != 0) {
    uVar5 = 0;
    do {
      if (*(long *)(*(long *)(param_1 + 0x90) + uVar5 * 8) != 0) {
        iVar1 = FUN_100642d08();
        if (iVar1 != 0) {
          FUN_1006423ec(*(undefined8 *)(*(long *)(param_1 + 0x90) + uVar5 * 8),1);
        }
        lVar4 = *(long *)(param_1 + 0x90);
        plVar2 = *(long **)(lVar4 + uVar5 * 8);
        if (plVar2 != (long *)0x0) {
          (**(code **)(*plVar2 + 8))();
          lVar4 = *(long *)(param_1 + 0x90);
        }
        *(undefined8 *)(lVar4 + uVar5 * 8) = 0;
        uVar3 = (ulong)*(uint *)(param_1 + 0x88);
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar3);
  }
  if (*(long *)(param_1 + 0x90) != 0) {
    *(undefined4 *)(param_1 + 0x88) = 0;
  }
  if (*(int *)(param_1 + 0x98) != 0) {
    uVar3 = 0;
    do {
      if (*(long *)(*(long *)(param_1 + 0xa0) + uVar3 * 8) == 0) goto LAB_1001c880c;
      iVar1 = FUN_100642d08();
      if (iVar1 != 0) {
        FUN_1006423ec(*(undefined8 *)(*(long *)(param_1 + 0xa0) + uVar3 * 8),1);
      }
      lVar4 = *(long *)(param_1 + 0xa0);
      plVar2 = *(long **)(lVar4 + uVar3 * 8);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 8))();
        lVar4 = *(long *)(param_1 + 0xa0);
      }
      *(undefined8 *)(lVar4 + uVar3 * 8) = 0;
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)(param_1 + 0x98));
  }
  if (*(long *)(param_1 + 0xa0) != 0) {
LAB_1001c880c:
    *(undefined4 *)(param_1 + 0x98) = 0;
  }
  uVar3 = (ulong)*(uint *)(param_1 + 0xa8);
  if (*(uint *)(param_1 + 0xa8) != 0) {
    uVar5 = 0;
    do {
      if (*(long *)(*(long *)(param_1 + 0xb0) + uVar5 * 8) != 0) {
        iVar1 = FUN_100642d08();
        if (iVar1 != 0) {
          FUN_1006423ec(*(undefined8 *)(*(long *)(param_1 + 0xb0) + uVar5 * 8),1);
        }
        lVar4 = *(long *)(param_1 + 0xb0);
        plVar2 = *(long **)(lVar4 + uVar5 * 8);
        if (plVar2 != (long *)0x0) {
          (**(code **)(*plVar2 + 8))();
          lVar4 = *(long *)(param_1 + 0xb0);
        }
        *(undefined8 *)(lVar4 + uVar5 * 8) = 0;
        uVar3 = (ulong)*(uint *)(param_1 + 0xa8);
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar3);
  }
  if (*(long *)(param_1 + 0xb0) != 0) {
    *(undefined4 *)(param_1 + 0xa8) = 0;
  }
  *(undefined8 *)(param_1 + 0xac0) = 0;
  return;
}




void thunk_FUN_1001c859c(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_1001c859c_101465ce0;
  FUN_1001c8728();
  FUN_10064221c(param_1 + 0x147);
  param_1[0x129] = &PTR_FUN_1014a7108;
  param_1[0x140] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x143);
  FUN_10064e2bc(param_1 + 0x129);
  param_1[0x10b] = &PTR_FUN_1014a7108;
  param_1[0x122] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x125);
  FUN_10064e2bc(param_1 + 0x10b);
  param_1[0xed] = &PTR_FUN_1014a7108;
  param_1[0x104] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x107);
  FUN_10064e2bc(param_1 + 0xed);
  FUN_10064221c(param_1 + 0xdc);
  param_1[0xbe] = &PTR_FUN_1014a7108;
  param_1[0xd5] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xd8);
  FUN_10064e2bc(param_1 + 0xbe);
  param_1[0xa0] = &PTR_FUN_1014a7108;
  param_1[0xb7] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xba);
  FUN_10064e2bc(param_1 + 0xa0);
  param_1[0x82] = &PTR_FUN_1014a7108;
  param_1[0x99] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x9c);
  FUN_10064e2bc(param_1 + 0x82);
  FUN_10064221c(param_1 + 0x71);
  param_1[0x53] = &PTR_FUN_1014a7108;
  param_1[0x6a] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x6d);
  FUN_10064e2bc(param_1 + 0x53);
  param_1[0x35] = &PTR_FUN_1014a7108;
  param_1[0x4c] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x4f);
  FUN_10064e2bc(param_1 + 0x35);
  param_1[0x17] = &PTR_FUN_1014a7108;
  param_1[0x2e] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x31);
  FUN_10064e2bc(param_1 + 0x17);
  if ((void *)param_1[0x16] != (void *)0x0) {
    operator_delete__((void *)param_1[0x16]);
    param_1[0x15] = 0;
    param_1[0x16] = 0;
  }
  if ((void *)param_1[0x14] != (void *)0x0) {
    operator_delete__((void *)param_1[0x14]);
    param_1[0x13] = 0;
    param_1[0x14] = 0;
  }
  if ((void *)param_1[0x12] != (void *)0x0) {
    operator_delete__((void *)param_1[0x12]);
    param_1[0x11] = 0;
    param_1[0x12] = 0;
  }
  FUN_10064221c(param_1);
  return;
}




void FUN_1001c8890(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1001c859c();
  operator_delete(pvVar1);
  return;
}




void FUN_1001c88a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,long *param_4,
                  uint *param_5)

{
  long *plVar1;
  undefined4 uVar2;
  void *pvVar3;
  long lVar4;
  ulong uVar5;
  ulong unaff_x28;
  long local_b8;
  code *local_b0;
  long *plStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  ulong local_90;
  undefined4 local_88;
  
  FUN_1001c8728();
  uVar2 = DAT_101d91884;
  if (*param_5 != 0) {
    lVar4 = 0;
    uVar5 = 0;
    plVar1 = param_4 + 0x159;
    do {
      pvVar3 = operator_new(0x15b8);
      local_b8 = thunk_FUN_100181304(pvVar3,0);
      FUN_100651594(local_b8 + 0x718,PTR_s_build___Fonts_Brandon_Bold_40_fo_10184e230,plVar1);
      local_b0 = (code *)CONCAT44(local_b0._4_4_,0xff404040);
      FUN_100181bd0(0x3f800000,local_b8,&local_b0);
      FUN_1001b495c(0,local_b8);
      unaff_x28 = unaff_x28 & 0xffffffff00000000 | uVar5;
      local_88 = uVar2;
      local_b0 = FUN_1001c8afc;
      local_a0 = 0;
      uStack_98 = 0;
      plStack_a8 = param_4;
      local_90 = unaff_x28;
      FUN_10001554c(local_b8 + 8,&local_b0);
      FUN_100181b80(local_b8,1);
      FUN_100181be0(0,local_b8,&DAT_10115a164);
      FUN_100181bf8(0x3f333333,local_b8,plVar1);
      FUN_1001b4c68(local_b8,&DAT_101d91198);
      *(undefined1 *)(local_b8 + 0x15b2) = 0;
      FUN_1001816d4(param_3,param_1,param_2,local_b8,0,*(long *)(param_5 + 2) + lVar4,plVar1,
                    &DAT_101dc1cb8,0);
      FUN_10018e1d4(param_4 + 0x11,&local_b8);
      FUN_100642bd8(param_4 + 0x147,local_b8,1);
      if (uVar5 != 0) {
        operator_new(0xf0);
        local_b0 = (code *)thunk_FUN_100652c08();
        FUN_100652cac(local_b0,PTR_s_build___MenuPartsCommon_tga_101854970,"white_background");
        FUN_100047df4(param_4 + 0x13,&local_b0);
        (**(code **)(*param_4 + 0x78))(param_4,local_b0,1);
      }
      local_b0 = (code *)0x0;
      FUN_1001c8b08(param_4 + 0x15,&local_b0);
      uVar5 = uVar5 + 1;
      lVar4 = lVar4 + 0x10;
    } while (uVar5 < *param_5);
  }
  FUN_1001c8b88(param_4);
  FUN_1001c9348(param_4,0,1);
  return;
}




void FUN_1001c8afc(undefined8 param_1)

{
  undefined8 in_x4;
  
  FUN_1001c9348(param_1,in_x4,1);
  return;
}




void FUN_1001c8b08(uint *param_1,undefined8 *param_2)

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
    FUN_1001c96ac(param_1,uVar2);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




void FUN_1001c8b88(undefined1 param_1 [16],ulong param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  undefined4 *puVar3;
  bool bVar4;
  bool bVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined8 uVar13;
  undefined4 uVar14;
  float fVar15;
  float fVar16;
  undefined8 local_98;
  
  lVar6 = param_3 + 0x298;
  FUN_100652e60(lVar6);
  uVar14 = (undefined4)param_2;
  plVar1 = (long *)(param_3 + 0x5f0);
  fVar15 = 0.0;
  if (*(int *)(param_3 + 0x88) != 0) {
    plVar8 = *(long **)(param_3 + 0x90);
    fVar15 = 0.0;
    uVar9 = 0xffffffff;
    do {
      fVar11 = (float)param_2;
      fVar10 = (float)(**(code **)(*(long *)*plVar8 + 0x48))();
      if (plVar8 == *(long **)(param_3 + 0x90)) {
        plVar7 = (long *)*plVar8;
        fVar12 = (float)(**(code **)(*plVar7 + 0x48))(plVar7);
        (**(code **)(*(long *)*plVar8 + 0x48))();
        fVar11 = fVar11 * 0.5;
        fVar16 = *(float *)(plVar7 + 8);
        bVar4 = false;
        if ((fVar16 == fVar12 * 0.5) &&
           (bVar4 = false, !NAN(*(float *)((long)plVar7 + 0x44)) && !NAN(fVar11))) {
          bVar4 = *(float *)((long)plVar7 + 0x44) == fVar11;
        }
        if (!bVar4) {
          *(float *)(plVar7 + 8) = fVar12 * 0.5;
          *(float *)((long)plVar7 + 0x44) = fVar11;
          FUN_1000200a0(plVar7);
        }
        local_98 = &DAT_3f0000003f000000;
        (**(code **)(*plVar7 + 0x28))(plVar7,&local_98);
        uVar13 = (**(code **)(*(long *)*plVar8 + 0x48))();
        (**(code **)(*(long *)*plVar8 + 0x48))();
        param_2 = (ulong)(uint)(fVar16 + -4.0);
        FUN_10064e47c(uVar13,plVar1);
      }
      else {
        plVar7 = (long *)*plVar8;
        fVar16 = *(float *)((long *)plVar8[-1] + 8);
        fVar11 = (float)(**(code **)(*(long *)plVar8[-1] + 0x48))();
        fVar12 = (float)(**(code **)(*(long *)*plVar8 + 0x48))();
        fVar16 = fVar16 + (fVar12 + fVar11) * 0.5;
        fVar11 = *(float *)(plVar8[-1] + 0x44);
        bVar4 = false;
        if ((*(float *)(plVar7 + 8) == fVar16) &&
           (bVar4 = false, !NAN(*(float *)((long)plVar7 + 0x44)) && !NAN(fVar11))) {
          bVar4 = *(float *)((long)plVar7 + 0x44) == fVar11;
        }
        if (!bVar4) {
          *(float *)(plVar7 + 8) = fVar16;
          *(float *)((long)plVar7 + 0x44) = fVar11;
          FUN_1000200a0(plVar7);
        }
        local_98 = &DAT_3f0000003f000000;
        (**(code **)(*plVar7 + 0x28))(plVar7,&local_98);
        plVar7 = *(long **)(*(long *)(param_3 + 0xa0) + uVar9 * 8);
        (**(code **)(*(long *)*plVar8 + 0x48))();
        FUN_10064e47c(0x40000000,fVar11 + -8.0,plVar7);
        fVar12 = *(float *)((long *)*plVar8 + 8);
        fVar11 = (float)(**(code **)(*(long *)*plVar8 + 0x48))();
        fVar12 = fVar12 + fVar11 * -0.5;
        fVar11 = *(float *)(*plVar8 + 0x44);
        param_2 = (ulong)(uint)fVar11;
        bVar4 = false;
        if ((*(float *)(plVar7 + 8) == fVar12) &&
           (bVar4 = false, !NAN(*(float *)((long)plVar7 + 0x44)) && !NAN(fVar11))) {
          bVar4 = *(float *)((long)plVar7 + 0x44) == fVar11;
        }
        if (!bVar4) {
          *(float *)(plVar7 + 8) = fVar12;
          *(float *)((long)plVar7 + 0x44) = fVar11;
          FUN_1000200a0(plVar7);
        }
        local_98 = &DAT_3f0000003f000000;
        (**(code **)(*plVar7 + 0x28))(plVar7,&local_98);
        if ((*(uint *)((long)plVar7 + 0x84) & 0x7f80) != 0x3f80) {
          *(uint *)((long)plVar7 + 0x84) = *(uint *)((long)plVar7 + 0x84) & 0xffff807f | 0x3f80;
          FUN_1000200a0(plVar7);
        }
      }
      fVar15 = fVar10 + fVar15;
      plVar8 = plVar8 + 1;
      uVar9 = (ulong)((int)uVar9 + 1);
    } while (plVar8 != (long *)(*(long *)(param_3 + 0x90) + (ulong)*(uint *)(param_3 + 0x88) * 8));
  }
  bVar4 = false;
  if ((*(float *)(param_3 + 0xfc) == 0.0) && (bVar4 = false, !NAN(*(float *)(param_3 + 0xf8)))) {
    bVar4 = *(float *)(param_3 + 0xf8) == 0.0;
  }
  if (!bVar4) {
    *(undefined8 *)(param_3 + 0xf8) = 0;
    FUN_1000200a0(param_3 + 0xb8);
  }
  local_98 = (undefined1 *)0x0;
  (**(code **)(*(long *)(param_3 + 0xb8) + 0x28))(param_3 + 0xb8,&local_98);
  fVar10 = *(float *)(param_3 + 0xfc);
  bVar4 = false;
  if ((*(float *)(param_3 + 0x450) == *(float *)(param_3 + 0xf8)) &&
     (bVar4 = false, !NAN(*(float *)(param_3 + 0x454)) && !NAN(fVar10))) {
    bVar4 = *(float *)(param_3 + 0x454) == fVar10;
  }
  if (!bVar4) {
    *(float *)(param_3 + 0x450) = *(float *)(param_3 + 0xf8);
    *(float *)(param_3 + 0x454) = fVar10;
    FUN_1000200a0(param_3 + 0x410);
  }
  local_98 = (undefined1 *)0x0;
  (**(code **)(*(long *)(param_3 + 0x410) + 0x28))(param_3 + 0x410,&local_98);
  if ((*(float *)(param_3 + 0x7a8) != *(float *)(param_3 + 0x450)) ||
     (*(float *)(param_3 + 0x7ac) != *(float *)(param_3 + 0x454))) {
    *(float *)(param_3 + 0x7a8) = *(float *)(param_3 + 0x450);
    *(float *)(param_3 + 0x7ac) = *(float *)(param_3 + 0x454);
    FUN_1000200a0(param_3 + 0x768);
  }
  if ((*(float *)(param_3 + 0x7b8) != *(float *)(param_3 + 0x460)) ||
     (*(float *)(param_3 + 0x7bc) != *(float *)(param_3 + 0x464))) {
    *(float *)(param_3 + 0x7b8) = *(float *)(param_3 + 0x460);
    *(float *)(param_3 + 0x7bc) = *(float *)(param_3 + 0x464);
    FUN_1000200a0(param_3 + 0x768);
  }
  if ((*(float *)(param_3 + 0x2d8) != 10.0) || (*(float *)(param_3 + 0x2dc) != 0.0)) {
    *(undefined8 *)(param_3 + 0x2d8) = 0x41200000;
    FUN_1000200a0(lVar6);
  }
  local_98 = (undefined1 *)0x0;
  (**(code **)(*(long *)(param_3 + 0x298) + 0x28))(lVar6,&local_98);
  FUN_10064e47c(fVar15 + -20.0,uVar14,lVar6);
  if ((*(float *)(param_3 + 0x630) != *(float *)(param_3 + 0x2d8)) ||
     (*(float *)(param_3 + 0x634) != *(float *)(param_3 + 0x2dc))) {
    *(float *)(param_3 + 0x630) = *(float *)(param_3 + 0x2d8);
    *(float *)(param_3 + 0x634) = *(float *)(param_3 + 0x2dc);
    FUN_1000200a0(plVar1);
  }
  local_98 = (undefined1 *)0x0;
  (**(code **)(*(long *)(param_3 + 0x5f0) + 0x28))(plVar1,&local_98);
  lVar2 = param_3 + 0x948;
  fVar10 = (float)*(undefined8 *)(param_3 + 0x630) + 2.0;
  fVar11 = (float)((ulong)*(undefined8 *)(param_3 + 0x630) >> 0x20) + 4.0;
  if ((*(float *)(param_3 + 0x988) != fVar10) || (*(float *)(param_3 + 0x98c) != fVar11)) {
    *(ulong *)(param_3 + 0x988) = CONCAT44(fVar11,fVar10);
    FUN_1000200a0(lVar2);
  }
  fVar10 = *(float *)(param_3 + 0x644);
  if ((*(float *)(param_3 + 0x998) != *(float *)(param_3 + 0x640)) ||
     (*(float *)(param_3 + 0x99c) != fVar10)) {
    *(float *)(param_3 + 0x998) = *(float *)(param_3 + 0x640);
    *(float *)(param_3 + 0x99c) = fVar10;
    FUN_1000200a0(lVar2);
  }
  fVar11 = (float)FUN_100652e60(lVar6);
  local_98 = (undefined1 *)CONCAT44(fVar10 + -8.0,fVar11 + -8.0);
  FUN_10064e48c(lVar2,&local_98);
  if ((*(float *)(param_3 + 0x1e8) != fVar15 + -14.0) || (*(float *)(param_3 + 0x1ec) != 0.0)) {
    *(float *)(param_3 + 0x1e8) = fVar15 + -14.0;
    *(undefined4 *)(param_3 + 0x1ec) = 0;
    FUN_1000200a0(param_3 + 0x1a8);
  }
  local_98 = (undefined1 *)0x0;
  (**(code **)(*(long *)(param_3 + 0x1a8) + 0x28))(param_3 + 0x1a8,&local_98);
  fVar15 = *(float *)(param_3 + 0x1e8) + -2.0;
  if ((*(float *)(param_3 + 0x540) != fVar15) ||
     (*(float *)(param_3 + 0x544) != *(float *)(param_3 + 0x1ec))) {
    *(float *)(param_3 + 0x540) = fVar15;
    *(float *)(param_3 + 0x544) = *(float *)(param_3 + 0x1ec);
    FUN_1000200a0(param_3 + 0x500);
  }
  local_98 = (undefined1 *)0x0;
  (**(code **)(*(long *)(param_3 + 0x500) + 0x28))(param_3 + 0x500,&local_98);
  if ((*(float *)(param_3 + 0x898) != *(float *)(param_3 + 0x540)) ||
     (*(float *)(param_3 + 0x89c) != *(float *)(param_3 + 0x544))) {
    *(float *)(param_3 + 0x898) = *(float *)(param_3 + 0x540);
    *(float *)(param_3 + 0x89c) = *(float *)(param_3 + 0x544);
    FUN_1000200a0(param_3 + 0x858);
  }
  if ((*(float *)(param_3 + 0x8a8) != *(float *)(param_3 + 0x550)) ||
     (*(float *)(param_3 + 0x8ac) != *(float *)(param_3 + 0x554))) {
    *(float *)(param_3 + 0x8a8) = *(float *)(param_3 + 0x550);
    *(float *)(param_3 + 0x8ac) = *(float *)(param_3 + 0x554);
    FUN_1000200a0(param_3 + 0x858);
  }
  if (*(int *)(param_3 + 0x88) == 0) {
LAB_1001c91f4:
    *(uint *)(param_3 + 0x674) = *(uint *)(param_3 + 0x674) & 0xfffffffb;
    return;
  }
  uVar9 = 0;
  do {
    lVar6 = *(long *)(*(long *)(param_3 + 0x90) + uVar9 * 8);
    puVar3 = &DAT_10115a164;
    if (*(long *)(param_3 + 0xac0) != lVar6) {
      puVar3 = (undefined4 *)(param_3 + 0xac8);
    }
    FUN_100181bb8(0x3f800000,lVar6,puVar3);
    FUN_100181bf8(0x3f333333,*(undefined8 *)(*(long *)(param_3 + 0x90) + uVar9 * 8),
                  (undefined4 *)(param_3 + 0xac8));
    uVar9 = uVar9 + 1;
  } while (uVar9 < *(uint *)(param_3 + 0x88));
  if ((*(long **)(param_3 + 0xac0) == (long *)0x0) || (*(uint *)(param_3 + 0x88) == 0))
  goto LAB_1001c91f4;
  *(uint *)(param_3 + 0x674) = *(uint *)(param_3 + 0x674) | 4;
  uVar9 = (**(code **)(**(long **)(param_3 + 0xac0) + 0x48))();
  lVar6 = *(long *)(param_3 + 0xac0);
  if (lVar6 == **(long **)(param_3 + 0x90)) {
    fVar15 = *(float *)(lVar6 + 0x44);
    fVar10 = *(float *)(lVar6 + 0x40) + 8.0;
    bVar4 = false;
    if ((*(float *)(param_3 + 0x630) == fVar10) &&
       (bVar4 = false, !NAN(*(float *)(param_3 + 0x634)) && !NAN(fVar15))) {
      bVar4 = *(float *)(param_3 + 0x634) == fVar15;
    }
    if (!bVar4) {
      *(float *)(param_3 + 0x630) = fVar10;
      *(float *)(param_3 + 0x634) = fVar15;
      FUN_1000200a0(plVar1);
    }
    local_98 = &DAT_3f0000003f000000;
    (**(code **)(*plVar1 + 0x28))(plVar1,&local_98);
    fVar15 = -8.0;
  }
  else {
    fVar10 = *(float *)(lVar6 + 0x40);
    fVar15 = *(float *)(lVar6 + 0x44);
    if (lVar6 != (*(long **)(param_3 + 0x90))[*(int *)(param_3 + 0x88) - 1]) {
      bVar4 = false;
      if ((*(float *)(param_3 + 0x630) == fVar10) &&
         (bVar4 = false, !NAN(*(float *)(param_3 + 0x634)) && !NAN(fVar15))) {
        bVar4 = *(float *)(param_3 + 0x634) == fVar15;
      }
      if (!bVar4) {
        *(float *)(param_3 + 0x630) = fVar10;
        *(float *)(param_3 + 0x634) = fVar15;
        FUN_1000200a0(plVar1);
      }
      local_98 = &DAT_3f0000003f000000;
      (**(code **)(*plVar1 + 0x28))(plVar1,&local_98);
      goto LAB_1001c92a8;
    }
    bVar4 = false;
    if ((*(float *)(param_3 + 0x630) == fVar10 + -8.0) &&
       (bVar4 = false, !NAN(*(float *)(param_3 + 0x634)) && !NAN(fVar15))) {
      bVar4 = *(float *)(param_3 + 0x634) == fVar15;
    }
    if (!bVar4) {
      *(float *)(param_3 + 0x630) = fVar10 + -8.0;
      *(float *)(param_3 + 0x634) = fVar15;
      FUN_1000200a0(plVar1);
    }
    local_98 = &DAT_3f0000003f000000;
    (**(code **)(*plVar1 + 0x28))(plVar1,&local_98);
    fVar15 = -15.0;
  }
  uVar9 = (ulong)(uint)((float)uVar9 + fVar15);
LAB_1001c92a8:
  FUN_100652e60(plVar1);
  FUN_10064e47c(uVar9,plVar1);
  lVar6 = *(long *)(param_3 + 0xac0);
  bVar4 = lVar6 == **(long **)(param_3 + 0x90);
  *(uint *)(param_3 + 0x494) =
       *(uint *)(param_3 + 0x494) & 0xfffffff8 | *(uint *)(param_3 + 0x494) & 3 | (uint)bVar4 << 2;
  bVar5 = lVar6 == (*(long **)(param_3 + 0x90))[*(int *)(param_3 + 0x88) - 1];
  *(uint *)(param_3 + 0x584) =
       *(uint *)(param_3 + 0x584) & 0xfffffff8 | *(uint *)(param_3 + 0x584) & 3 | (uint)bVar5 << 2;
  *(uint *)(param_3 + 0x13c) =
       *(uint *)(param_3 + 0x13c) & 0xfffffff8 | *(uint *)(param_3 + 0x13c) & 3 | (uint)!bVar4 << 2;
  *(uint *)(param_3 + 0x22c) =
       *(uint *)(param_3 + 0x22c) & 0xfffffff8 | *(uint *)(param_3 + 0x22c) & 3 | (uint)!bVar5 << 2;
  return;
}




void FUN_1001c9348(long param_1,uint param_2,int param_3)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_50 [32];
  
  lVar2 = *(long *)(param_1 + 0xac0);
  lVar1 = *(long *)(*(long *)(param_1 + 0x90) + (ulong)param_2 * 8);
  if (lVar2 != lVar1) {
    if (lVar2 != 0) {
      *(uint *)(lVar2 + 0x84) = *(uint *)(lVar2 + 0x84) | 0x10;
      lVar1 = *(long *)(*(long *)(param_1 + 0x90) + (ulong)param_2 * 8);
    }
    *(long *)(param_1 + 0xac0) = lVar1;
    *(uint *)(lVar1 + 0x84) = *(uint *)(lVar1 + 0x84) & 0xffffffef;
    FUN_1001c8b88(param_1);
    if (param_3 != 0) {
      FUN_100644aec(auStack_50,DAT_101d235e0,(ulong)param_2);
      FUN_100644c34(param_1,auStack_50,1);
    }
    *(uint *)(param_1 + 0xacc) = param_2;
  }
  return;
}




void FUN_1001c93f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  if (*(int *)(param_4 + 0x88) != 0) {
    puVar1 = *(undefined8 **)(param_4 + 0x90);
    do {
      puVar2 = puVar1 + 1;
      FUN_100181c18(param_1,param_2,param_3,*puVar1);
      puVar1 = puVar2;
    } while (puVar2 != (undefined8 *)
                       (*(long *)(param_4 + 0x90) + (ulong)*(uint *)(param_4 + 0x88) * 8));
  }
  FUN_1001c8b88(param_4);
  return;
}




void FUN_1001c9460(float param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = (uint)(param_1 * 255.0);
  uVar1 = *(uint *)(param_2 + 0x7ec);
  if (uVar2 != (uVar1 >> 7 & 0xff)) {
    *(uint *)(param_2 + 0x7ec) = uVar1 & 0xffff8000 | uVar1 & 0x7f | (uVar2 & 0xff) << 7;
    FUN_1000200a0(param_2 + 0x768);
  }
  uVar1 = *(uint *)(param_2 + 0x8dc);
  if (uVar2 != (uVar1 >> 7 & 0xff)) {
    *(uint *)(param_2 + 0x8dc) = uVar1 & 0xffff8000 | uVar1 & 0x7f | (uVar2 & 0xff) << 7;
    FUN_1000200a0(param_2 + 0x858);
  }
  uVar1 = *(uint *)(param_2 + 0x9cc);
  if (uVar2 == (uVar1 >> 7 & 0xff)) {
    return;
  }
  *(uint *)(param_2 + 0x9cc) = uVar1 & 0xffff8000 | uVar1 & 0x7f | (uVar2 & 0xff) << 7;
  FUN_1000200a0(param_2 + 0x948);
  return;
}




undefined4 FUN_1001c94f4(long param_1)

{
  return *(undefined4 *)(param_1 + 0xacc);
}




undefined8 FUN_1001c94fc(long param_1,uint param_2)

{
  return *(undefined8 *)(*(long *)(param_1 + 0x90) + (ulong)param_2 * 8);
}




void FUN_1001c9508(long *param_1,ulong param_2,undefined8 param_3)

{
  bool bVar1;
  undefined8 uVar2;
  long *plVar3;
  long *plVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  plVar3 = *(long **)(param_1[0x16] + (param_2 & 0xffffffff) * 8);
  if (plVar3 == (long *)0x0) {
    plVar3 = operator_new(0x6a0);
    uVar2 = thunk_FUN_1001c397c();
    *(undefined8 *)(param_1[0x16] + (param_2 & 0xffffffff) * 8) = uVar2;
    (**(code **)(*param_1 + 0x78))(param_1,plVar3,1);
    plVar4 = *(long **)(param_1[0x12] + (param_2 & 0xffffffff) * 8);
    fVar7 = *(float *)(plVar4 + 8);
    fVar5 = (float)(**(code **)(*plVar4 + 0x48))(plVar4);
    fVar6 = (float)(**(code **)(*plVar3 + 0x60))(plVar3,0,0,1,1);
    fVar7 = fVar7 + -20.0;
    fVar6 = fVar7 + (fVar5 - fVar6) * 0.5;
    fVar5 = *(float *)((long)plVar4 + 0x44);
    (**(code **)(*plVar4 + 0x48))(plVar4);
    fVar5 = fVar5 - fVar7 * 0.5;
    bVar1 = false;
    if ((*(float *)(plVar3 + 8) == fVar6) &&
       (bVar1 = false, !NAN(*(float *)((long)plVar3 + 0x44)) && !NAN(fVar5))) {
      bVar1 = *(float *)((long)plVar3 + 0x44) == fVar5;
    }
    if (!bVar1) {
      *(float *)(plVar3 + 8) = fVar6;
      *(float *)((long)plVar3 + 0x44) = fVar5;
      FUN_1000200a0(plVar3);
    }
  }
  FUN_1001c3fc8(plVar3,param_3);
  return;
}




void FUN_1001c9614(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001001c962c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x58))(param_1,0,0,1,1);
  return;
}




float FUN_1001c9630(long param_1)

{
  long lVar1;
  ulong uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar5 = (float)DAT_101dc1cb8;
  if (*(int *)(param_1 + 0x88) != 0) {
    uVar2 = 0;
    lVar1 = *(long *)(param_1 + 0x90);
    fVar4 = DAT_101dc1cb8._4_4_;
    do {
      fVar3 = (float)(**(code **)(**(long **)(lVar1 + uVar2 * 8) + 0x48))();
      lVar1 = *(long *)(param_1 + 0x90);
      fVar5 = fVar3 + fVar5;
      fVar3 = *(float *)(*(long *)(lVar1 + uVar2 * 8) + 0x15a8);
      if (fVar4 <= fVar3) {
        fVar4 = fVar3;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(uint *)(param_1 + 0x88));
  }
  return fVar5;
}




void FUN_1001c96ac(uint *param_1,uint param_2)

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




void FUN_1001c9728(void)

{
  DAT_101e430e8 = 0xff;
  DAT_101e430ea = 0xffff;
  DAT_101e430ec = 0xffff;
  DAT_101e430ee = 0xffbc9c44;
  DAT_101e430f2 = 0xff1166f2;
  DAT_101e430f6 = 0xffe0e0e0;
  DAT_101e430fa = 0xffa0a0a0;
  DAT_101e430fe = 0xff8c8c8c;
  DAT_101e43102 = 0xff322213;
  DAT_101e43106 = 0xff091911;
  DAT_101e4310a = 0xff170c19;
  DAT_101e4310e = 0xff241a14;
  DAT_101e43112 = 0xff14171c;
  DAT_101e43116 = 0xff221911;
  DAT_101e4311a = 0xff1a1416;
  DAT_101e4311e = 0xff121414;
  DAT_101e43122 = 0xff1a1809;
  DAT_101e43126 = 0xff141414;
  DAT_101e4312a = 0xff141414;
  DAT_101e4312e = 0xff2929c0;
  DAT_101e43132 = 0xff283082;
  DAT_101e43136 = 0xff5262cc;
  DAT_101e4313a = 0xff283082;
  DAT_101e4313e = 0xff5262cc;
  DAT_101e43142 = 0xff745c42;
  DAT_101e43146 = 0xff184155;
  DAT_101e4314a = 0xff92665e;
  DAT_101e4314e = 0xffbc9c44;
  DAT_101e43152 = 0xffbbae56;
  DAT_101e43156 = 0xff8b7b01;
  DAT_101e4315a = 0xff90b3ef;
  DAT_101e4315e = 0xff728ebe;
  DAT_101e43162 = 0xff19459d;
  DAT_101e43166 = 0xff9d877b;
  DAT_101e4316a = 0xffcbb1a3;
  DAT_101e4316e = 0xff3f6fb5;
  DAT_101e43172 = 0xffc5c5c5;
  DAT_101e43176 = 0xff4fc1f1;
  DAT_101e4317a = 0xff606060;
  DAT_101e4317e = 0xffc5ff7b;
  DAT_101e43182 = 0xff5271eb;
  DAT_101e43186 = 0xfffae076;
  DAT_101e4318a = 0xff3ac8f6;
  DAT_101e4318e = 0xffaaaaaa;
  DAT_101e43192 = 0xffe19400;
  DAT_101e43196 = 0xffe19400;
  DAT_101e4319a = 0xffe550b2;
  DAT_101e4319e = 0xfff22ae8;
  DAT_101e431a2 = 0xff005ae1;
  DAT_101e431a6 = 0xff1addfa;
  DAT_101e431aa = 0xff2424b3;
  DAT_101e431ae = 0xff2424b3;
  DAT_101e431b2 = 0xff646464;
  DAT_101e431b6 = 0xff92665e;
  DAT_101e431ba = 0xff646037;
  DAT_101e431c4 = 0xff1111a1;
  DAT_101e431cc = 0xffc8c8c8;
  DAT_101e431c8 = 0xff321ee1;
  DAT_101e431d0 = 0xff321ee1;
  DAT_101e431dc = 0xff6259b3;
  DAT_101e431e0 = 0xff506e73;
  DAT_101e431c0 = 0xffffffff;
  DAT_101e431e4 = 0xff9dbf86;
  DAT_101e431d4 = 0xff7fe801;
  DAT_101e431e8 = 0xffa35244;
  DAT_101e431d8 = 0xffffffff;
  DAT_101e431ec = 0xffca828e;
  DAT_101e431f0 = 0xffa6a6a6;
  DAT_101e431f4 = 0xffa6a6a6;
  DAT_101e431f8 = 0xffffffff;
  DAT_101e431fc = 0xff88ea2f;
  DAT_101e43200 = 0xff8c8c8c;
  DAT_101e43204 = 0xffffb400;
  DAT_101e43208 = 0xffff00ff;
  DAT_101e4320c = 0xff00aded;
  DAT_101e43210 = 0xff33d3ff;
  DAT_101e43214 = 0xff7fe801;
  DAT_101e43218 = 0xff282828;
  DAT_101e4321c = 0xfff0f0f0;
  DAT_101e43220 = 0xffa4781e;
  DAT_101e43224 = 0xffa6654b;
  DAT_101e43228 = 0xff93435b;
  DAT_101e4322c = 0xff387f9c;
  DAT_101e43230 = 0xffa3781e;
  DAT_101e43234 = 0xffffd18a;
  DAT_101e43238 = 0xffff61f7;
  DAT_101e4323c = 0xff5de1f2;
  DAT_101e43240 = 0xff80eaff;
  DAT_101e43244 = 0xff32e00e;
  DAT_101e43248 = 0xff5a3c10;
  DAT_101e4324c = 0xff330b03;
  DAT_101e43250 = 0xff33031d;
  DAT_101e43254 = 0xff032433;
  DAT_101e43258 = 0xff9e8e8d;
  DAT_101e43260 = 0x4326000041900000;
  DAT_101e43268 = 0x4326000041c00000;
  DAT_101d235e0 = FUN_100644a94("UI::EVENT_CONTROL_TOGGLED");
  return;
}




long * FUN_1001c9e20(long *param_1)

{
  long *plVar1;
  long *plVar2;
  float fVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  code *local_90;
  long *plStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  
  puVar5 = (undefined8 *)FUN_10064e20c();
  *puVar5 = &PTR_thunk_FUN_1001ca1a4_101465de0;
  puVar5 = puVar5 + 0x17;
  thunk_FUN_100181304(puVar5,0);
  plVar1 = param_1 + 0x2ce;
  thunk_FUN_100652c08(plVar1);
  thunk_FUN_10018afc8(0x3f000000,param_1 + 0x2ec,0,1);
  plVar2 = param_1 + 0x486;
  FUN_1004e313c(plVar2);
  *(undefined2 *)(param_1 + 0x488) = 1;
  (**(code **)(*param_1 + 0x78))(param_1,puVar5,1);
  FUN_100642bd8(puVar5,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x2ec,1);
  uVar6 = FUN_1004e0150("MENU_MARKET_TAB_NAME_MORE",0);
  FUN_1000153b4(plVar2,uVar6);
  local_90 = (code *)0x0;
  FUN_1001816d4(0x42340000,0x41f00000,0x447a0000,puVar5,0,&DAT_101d91650,&DAT_10115a168,&local_90,0)
  ;
  FUN_1001b495c(0x3dcccccd,puVar5);
  FUN_100181af8(puVar5,plVar2);
  FUN_100181ba0(0x3f800000,puVar5,&DAT_10115a168);
  local_68 = DAT_101d91884;
  local_90 = thunk_FUN_1001ca378;
  local_78 = 0;
  uStack_70 = 0;
  local_80 = 0;
  plStack_88 = param_1;
  FUN_10001554c(param_1 + 0x18,&local_90);
  if ((*(float *)(param_1 + 0x21) != 0.5) || (*(float *)((long)param_1 + 0x10c) != 0.5)) {
    param_1[0x21] = (long)&DAT_3f0000003f000000;
    FUN_1000200a0(puVar5);
  }
  FUN_100181b5c(0xc1f00000,0,puVar5);
  FUN_100651038(param_1 + 0xfa,PTR_s_build___Fonts_Brandon_Bold_40_fo_10184e230);
  FUN_100181c68(0x42a0147b,puVar5);
  *(undefined1 *)((long)param_1 + 0x166a) = 0;
  iVar4 = FUN_100126c88();
  fVar3 = DAT_101854a78;
  if ((iVar4 != 0) &&
     ((*(float *)(param_1 + 0x20) != DAT_101854a78 ||
      (*(float *)((long)param_1 + 0x104) != DAT_101854a78)))) {
    *(float *)(param_1 + 0x20) = DAT_101854a78;
    *(float *)((long)param_1 + 0x104) = fVar3;
    FUN_1000200a0(puVar5);
  }
  FUN_100652cac(plVar1,PTR_s_build___MenuPartsCommon_tga_101854970,"arrow_down");
  if ((*(float *)(param_1 + 0x2d8) != 0.0) || (*(float *)((long)param_1 + 0x16c4) != 0.5)) {
    param_1[0x2d8] = 0x3f00000000000000;
    FUN_1000200a0(plVar1);
  }
  *(uint *)((long)param_1 + 0x17e4) = *(uint *)((long)param_1 + 0x17e4) & 0xfffffffb;
  FUN_1001ca0d4(param_1);
  return param_1;
}




void thunk_FUN_1001ca378(long param_1)

{
  uint uVar1;
  
  if ((*(char *)(param_1 + 0x2440) != '\0') && (*(char *)(param_1 + 0x2441) == '\0')) {
    uVar1 = *(uint *)(param_1 + 0x17e4);
    if ((~uVar1 & 0x7f80) != 0) {
      *(uint *)(param_1 + 0x17e4) = uVar1 | 0x7f80;
      FUN_1000200a0(param_1 + 0x1760);
      uVar1 = *(uint *)(param_1 + 0x17e4);
    }
    *(uint *)(param_1 + 0x17e4) = uVar1 ^ 4;
  }
  return;
}




void FUN_1001ca0d4(undefined1 param_1 [16],float param_2,long param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 local_58;
  float fStack_54;
  
  FUN_10064259c(param_3 + 0xb8);
  if (*(float *)(param_3 + 0x17a4) != param_2 * 0.5) {
    *(float *)(param_3 + 0x17a4) = param_2 * 0.5;
    FUN_1000200a0(param_3 + 0x1760);
  }
  fVar3 = *(float *)(param_3 + 0x810);
  fVar1 = (float)FUN_1006511d0(param_3 + 2000);
  fVar2 = (float)FUN_100652e60(param_3 + 0x1670);
  fVar1 = fVar3 + 10.0 + (fVar2 + fVar1) * 0.5;
  fVar2 = *(float *)(param_3 + 0x16b0);
  if (fVar2 != fVar1) {
    *(float *)(param_3 + 0x16b0) = fVar1;
    FUN_1000200a0(param_3 + 0x1670);
  }
  local_58 = FUN_10064259c(param_3 + 0xb8);
  fStack_54 = fVar2;
  FUN_10064e48c(param_3,&local_58);
  return;
}




long * thunk_FUN_1001c9e20(long *param_1)

{
  long *plVar1;
  long *plVar2;
  float fVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  code *pcStack_90;
  long *plStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  
  puVar5 = (undefined8 *)FUN_10064e20c();
  *puVar5 = &PTR_thunk_FUN_1001ca1a4_101465de0;
  puVar5 = puVar5 + 0x17;
  thunk_FUN_100181304(puVar5,0);
  plVar1 = param_1 + 0x2ce;
  thunk_FUN_100652c08(plVar1);
  thunk_FUN_10018afc8(0x3f000000,param_1 + 0x2ec,0,1);
  plVar2 = param_1 + 0x486;
  FUN_1004e313c(plVar2);
  *(undefined2 *)(param_1 + 0x488) = 1;
  (**(code **)(*param_1 + 0x78))(param_1,puVar5,1);
  FUN_100642bd8(puVar5,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x2ec,1);
  uVar6 = FUN_1004e0150("MENU_MARKET_TAB_NAME_MORE",0);
  FUN_1000153b4(plVar2,uVar6);
  pcStack_90 = (code *)0x0;
  FUN_1001816d4(0x42340000,0x41f00000,0x447a0000,puVar5,0,&DAT_101d91650,&DAT_10115a168,&pcStack_90,
                0);
  FUN_1001b495c(0x3dcccccd,puVar5);
  FUN_100181af8(puVar5,plVar2);
  FUN_100181ba0(0x3f800000,puVar5,&DAT_10115a168);
  uStack_68 = DAT_101d91884;
  pcStack_90 = thunk_FUN_1001ca378;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_80 = 0;
  plStack_88 = param_1;
  FUN_10001554c(param_1 + 0x18,&pcStack_90);
  if ((*(float *)(param_1 + 0x21) != 0.5) || (*(float *)((long)param_1 + 0x10c) != 0.5)) {
    param_1[0x21] = (long)&DAT_3f0000003f000000;
    FUN_1000200a0(puVar5);
  }
  FUN_100181b5c(0xc1f00000,0,puVar5);
  FUN_100651038(param_1 + 0xfa,PTR_s_build___Fonts_Brandon_Bold_40_fo_10184e230);
  FUN_100181c68(0x42a0147b,puVar5);
  *(undefined1 *)((long)param_1 + 0x166a) = 0;
  iVar4 = FUN_100126c88();
  fVar3 = DAT_101854a78;
  if ((iVar4 != 0) &&
     ((*(float *)(param_1 + 0x20) != DAT_101854a78 ||
      (*(float *)((long)param_1 + 0x104) != DAT_101854a78)))) {
    *(float *)(param_1 + 0x20) = DAT_101854a78;
    *(float *)((long)param_1 + 0x104) = fVar3;
    FUN_1000200a0(puVar5);
  }
  FUN_100652cac(plVar1,PTR_s_build___MenuPartsCommon_tga_101854970,"arrow_down");
  if ((*(float *)(param_1 + 0x2d8) != 0.0) || (*(float *)((long)param_1 + 0x16c4) != 0.5)) {
    param_1[0x2d8] = 0x3f00000000000000;
    FUN_1000200a0(plVar1);
  }
  *(uint *)((long)param_1 + 0x17e4) = *(uint *)((long)param_1 + 0x17e4) & 0xfffffffb;
  FUN_1001ca0d4(param_1);
  return param_1;
}




void FUN_1001ca1a4(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_1001ca1a4_101465de0;
  FUN_10018b0dc(param_1 + 0x2ec);
  if ((void *)param_1[0x487] != (void *)0x0) {
    operator_delete__((void *)param_1[0x487]);
    param_1[0x487] = 0;
    param_1[0x486] = 0;
  }
  thunk_FUN_10018b08c(param_1 + 0x2ec);
  param_1[0x2ce] = &PTR_FUN_1014a7108;
  param_1[0x2e5] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x2e8);
  FUN_10064e2bc(param_1 + 0x2ce);
  FUN_10003bd40(param_1 + 0x17);
  FUN_10064e2bc(param_1);
  return;
}




void thunk_FUN_1001ca1a4(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_1001ca1a4_101465de0;
  FUN_10018b0dc(param_1 + 0x2ec);
  if ((void *)param_1[0x487] != (void *)0x0) {
    operator_delete__((void *)param_1[0x487]);
    param_1[0x487] = 0;
    param_1[0x486] = 0;
  }
  thunk_FUN_10018b08c(param_1 + 0x2ec);
  param_1[0x2ce] = &PTR_FUN_1014a7108;
  param_1[0x2e5] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x2e8);
  FUN_10064e2bc(param_1 + 0x2ce);
  FUN_10003bd40(param_1 + 0x17);
  FUN_10064e2bc(param_1);
  return;
}




void FUN_1001ca23c(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1001ca1a4();
  operator_delete(pvVar1);
  return;
}




void FUN_1001ca250(long param_1)

{
  FUN_10018b1ec(param_1 + 0x1760);
  FUN_1001ca0d4(param_1);
  return;
}




void FUN_1001ca27c(long param_1)

{
  FUN_10018b5b0(param_1 + 0x1760);
  FUN_1001ca0d4(param_1);
  return;
}




void FUN_1001ca2a8(long param_1,undefined8 param_2)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar3 = FUN_10018b31c(param_1 + 0x1760,param_2,1);
  lVar1 = param_1 + 0xb8;
  if (lVar3 == 0) {
    FUN_100181af8(lVar1,param_1 + 0x2430);
    uVar2 = *(uint *)(param_1 + 0x13c);
    if ((uVar2 & 0x7f80) == 0x5900) goto LAB_1001ca334;
    uVar2 = uVar2 & 0xffff8000 | uVar2 & 0x7f | 0x5900;
  }
  else {
    uVar4 = FUN_100655b6c(lVar3 + 0x7e8);
    FUN_100181af8(lVar1,uVar4);
    if ((~*(uint *)(param_1 + 0x13c) & 0x7f80) == 0) goto LAB_1001ca334;
    uVar2 = *(uint *)(param_1 + 0x13c) | 0x7f80;
  }
  *(uint *)(param_1 + 0x13c) = uVar2;
  FUN_1000200a0(lVar1);
LAB_1001ca334:
  FUN_1001ca0d4(param_1);
  return;
}




undefined4 FUN_1001ca344(long param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 0x2428);
  FUN_10064259c(param_1 + 0xb8);
  return uVar1;
}




void FUN_1001ca378(long param_1)

{
  uint uVar1;
  
  if ((*(char *)(param_1 + 0x2440) != '\0') && (*(char *)(param_1 + 0x2441) == '\0')) {
    uVar1 = *(uint *)(param_1 + 0x17e4);
    if ((~uVar1 & 0x7f80) != 0) {
      *(uint *)(param_1 + 0x17e4) = uVar1 | 0x7f80;
      FUN_1000200a0(param_1 + 0x1760);
      uVar1 = *(uint *)(param_1 + 0x17e4);
    }
    *(uint *)(param_1 + 0x17e4) = uVar1 ^ 4;
  }
  return;
}




void FUN_1001ca3dc(long param_1)

{
  int iVar1;
  byte *pbVar2;
  
  iVar1 = FUN_10109c574();
  if (((iVar1 != 0) && (iVar1 = FUN_10109c588(), iVar1 != 0)) &&
     (pbVar2 = (byte *)FUN_10109c59c(0), (*pbVar2 & 1) == 0)) {
    *(undefined1 *)(param_1 + 0x2441) = 1;
  }
  iVar1 = FUN_10109c4dc();
  if ((iVar1 != 0) && (iVar1 = FUN_10109c520(0), iVar1 != 0)) {
    *(undefined1 *)(param_1 + 0x2441) = 1;
  }
  return;
}




void FUN_1001ca444(long param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x17e4);
  if (*(char *)(param_1 + 0x2441) != '\0') {
    uVar1 = uVar1 & 0xfffffffb;
    *(uint *)(param_1 + 0x17e4) = uVar1;
    *(char *)(param_1 + 0x2441) = '\0';
  }
  if ((uVar1 >> 2 & 1) == 0) {
    return;
  }
  FUN_1001ca3dc();
  return;
}




long * FUN_1001ca470(long *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_1001ad5cc();
  *puVar1 = &PTR_FUN_101465f28;
  thunk_FUN_1001fc280(puVar1 + 0x17,1,0);
  FUN_10021705c(param_1 + 0x20);
  (**(code **)(*param_1 + 0x78))(param_1,param_1[0x18],1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1[0x21],1);
  *(uint *)(param_1[0x18] + 0x84) = *(uint *)(param_1[0x18] + 0x84) & 0xffffffef;
  (**(code **)(*(long *)param_1[0x18] + 0x138))();
  *(uint *)(param_1[0x18] + 0xeb4) = *(uint *)(param_1[0x18] + 0xeb4) & 0xfffffffb;
  return param_1;
}




long * thunk_FUN_1001ca470(long *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_1001ad5cc();
  *puVar1 = &PTR_FUN_101465f28;
  thunk_FUN_1001fc280(puVar1 + 0x17,1,0);
  FUN_10021705c(param_1 + 0x20);
  (**(code **)(*param_1 + 0x78))(param_1,param_1[0x18],1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1[0x21],1);
  *(uint *)(param_1[0x18] + 0x84) = *(uint *)(param_1[0x18] + 0x84) & 0xffffffef;
  (**(code **)(*(long *)param_1[0x18] + 0x138))();
  *(uint *)(param_1[0x18] + 0xeb4) = *(uint *)(param_1[0x18] + 0xeb4) & 0xfffffffb;
  return param_1;
}




void FUN_1001ca518(undefined1 param_1 [16],undefined8 param_2,long *param_3)

{
  bool bVar1;
  long lVar2;
  float fVar3;
  
  FUN_1001ad608();
  fVar3 = (float)(**(code **)(*param_3 + 0x48))(param_3);
  lVar2 = param_3[0x18];
  FUN_10064e47c(fVar3 * 0.323,(float)param_2 * 0.85,lVar2);
  FUN_10064e5ec(fVar3 * 0.19,0,lVar2,8,param_3,7);
  FUN_10064e47c(fVar3 * 0.62,param_2,param_3[0x21]);
  lVar2 = param_3[0x21];
  bVar1 = false;
  if ((*(float *)(lVar2 + 0x40) == fVar3 * 0.38) && (bVar1 = false, !NAN(*(float *)(lVar2 + 0x44))))
  {
    bVar1 = *(float *)(lVar2 + 0x44) == 10.0;
  }
  if (!bVar1) {
    *(float *)(lVar2 + 0x40) = fVar3 * 0.38;
    *(undefined4 *)(lVar2 + 0x44) = 0x41200000;
    FUN_1000200a0();
    return;
  }
  return;
}




undefined1  [16] FUN_1001ca604(long *param_1)

{
  long *plVar1;
  undefined1 auVar2 [16];
  undefined8 uVar3;
  
  (**(code **)(*param_1 + 0x90))();
  plVar1 = (long *)param_1[0x21];
  auVar2 = (**(code **)(*param_1 + 0x48))(param_1);
  uVar3 = auVar2._8_8_;
  (**(code **)(*plVar1 + 0x90))(plVar1);
  (**(code **)(*plVar1 + 0x48))(plVar1);
  auVar2._8_8_ = uVar3;
  return auVar2;
}




void FUN_1001ca670(long param_1,byte param_2)

{
  *(byte *)(param_1 + 0xb5) = param_2;
  if ((param_2 & 1) != 0) {
    return;
  }
  FUN_1002e5f7c(*(undefined8 *)(param_1 + 0x108));
  return;
}




void FUN_1001ca684(long *param_1,undefined8 param_2)

{
  FUN_1001fc3d8(param_1 + 0x17);
  FUN_1002c0820(param_1[0x18],1);
  FUN_100217184(param_1 + 0x20,param_2);
                    /* WARNING: Could not recover jumptable at 0x0001001ca6cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xe8))(param_1);
  return;
}




void FUN_1001ca6d0(long param_1)

{
  FUN_1002e64f8(*(undefined8 *)(param_1 + 0x108));
  return;
}




void FUN_1001ca6d8(long param_1)

{
  FUN_1001fc794(param_1 + 0xb8);
  return;
}




void FUN_1001ca6e0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_101465f28;
  thunk_FUN_1002170b8(param_1 + 0x20);
  thunk_FUN_1001fc594(param_1 + 0x17);
  FUN_10064e2bc(param_1);
  return;
}




void FUN_1001ca720(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_101465f28;
  thunk_FUN_1002170b8(param_1 + 0x20);
  thunk_FUN_1001fc594(param_1 + 0x17);
  pvVar1 = (void *)FUN_10064e2bc(param_1);
  operator_delete(pvVar1);
  return;
}




long * FUN_1001ca764(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  undefined **ppuVar9;
  uint uVar10;
  undefined4 uVar11;
  int iVar12;
  long lVar13;
  undefined8 uVar14;
  float fVar15;
  code *local_a0;
  long *plStack_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  
  lVar13 = FUN_1001ad5cc();
  FUN_10033f558(lVar13 + 0xb8);
  *param_1 = (long)&PTR_thunk_FUN_1001cae14_101466088;
  param_1[0x17] = (long)&PTR_FUN_1014661f0;
  thunk_FUN_1001fc280(param_1 + 0x1a,1,0);
  thunk_FUN_100183990(param_1 + 0x23,0);
  FUN_10064e264(param_1 + 0xe1);
  plVar1 = param_1 + 0xf8;
  FUN_1006421a8(plVar1);
  param_1[0xf8] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar2 = param_1 + 0x109;
  thunk_FUN_100652c08(plVar2);
  plVar3 = param_1 + 0x127;
  FUN_10064fd54(plVar3,1);
  param_1[0x127] = (long)&PTR_thunk_FUN_10064e2bc_101451a40;
  plVar4 = param_1 + 0x140;
  thunk_FUN_100650e64(plVar4);
  plVar5 = param_1 + 0x166;
  thunk_FUN_100650e64(plVar5);
  plVar6 = param_1 + 0x18c;
  thunk_FUN_100183160(plVar6,0);
  plVar7 = param_1 + 0x618;
  thunk_FUN_100650e64(plVar7);
  plVar8 = param_1 + 0x63e;
  thunk_FUN_100183160(plVar8,0);
  param_1[0xacd] = 0;
  param_1[0xacc] = 0;
  param_1[0xacb] = 0;
  param_1[0xaca] = 0;
  (**(code **)(*param_1 + 0x78))(param_1,param_1[0x1b],1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0xe1,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  FUN_100642bd8(plVar1,plVar2,1);
  FUN_100642bd8(plVar1,plVar3,1);
  FUN_100642bd8(plVar3,plVar4,1);
  FUN_100642bd8(plVar3,plVar6,1);
  FUN_100642bd8(plVar6,plVar5,1);
  FUN_100642bd8(plVar3,plVar8,1);
  FUN_100642bd8(plVar8,plVar7,1);
  *(uint *)(param_1[0x1b] + 0x84) = *(uint *)(param_1[0x1b] + 0x84) & 0xffffffef;
  (**(code **)(*(long *)param_1[0x1b] + 0x138))();
  *(uint *)(param_1[0x1b] + 0xeb4) = *(uint *)(param_1[0x1b] + 0xeb4) & 0xfffffffb;
  FUN_1001fc78c(param_1 + 0x1a,1);
  *(uint *)((long)param_1 + 0x78c) = *(uint *)((long)param_1 + 0x78c) | 0x10;
  local_78 = DAT_101dbd458;
  local_a0 = FUN_1001cada4;
  local_88 = 0;
  uStack_80 = 0;
  local_90 = 0;
  plStack_98 = param_1;
  FUN_10001554c(param_1 + 0xe2,&local_a0);
  local_78 = DAT_101dbd484;
  local_a0 = FUN_1001cada4;
  local_88 = 0;
  uStack_80 = 0;
  local_90 = 0;
  plStack_98 = param_1;
  FUN_10001554c(param_1 + 0xe2,&local_a0);
  FUN_100652cac(plVar2,PTR_s_build___MenuPartsCommon_tga_101854970,"white_background");
  FUN_100652dd4(plVar2,&DAT_10115a164,2);
  uVar10 = *(uint *)((long)param_1 + 0x8cc);
  if ((uVar10 & 0x7f80) != 0x1980) {
    *(uint *)((long)param_1 + 0x8cc) = uVar10 & 0xffff8000 | uVar10 & 0x7f | 0x1980;
    FUN_1000200a0(plVar2);
  }
  iVar12 = FUN_100126c88();
  ppuVar9 = &PTR_s_build___Fonts_Brandon_Bold_48_fo_10184e238;
  if (iVar12 == 0) {
    ppuVar9 = &PTR_s_build___Fonts_Brandon_Bold_36_fo_10184e228;
  }
  FUN_100651038(plVar4,*ppuVar9);
  uVar10 = *(uint *)((long)param_1 + 0xa84);
  if ((uVar10 & 0x7f80) != 0x4c80) {
    *(uint *)((long)param_1 + 0xa84) = uVar10 & 0xffff8000 | uVar10 & 0x7f | 0x4c80;
    FUN_1000200a0(plVar4);
  }
  if ((*(float *)(param_1 + 0x14a) != 0.5) || (*(float *)((long)param_1 + 0xa54) != 0.0)) {
    param_1[0x14a] = 0x3f000000;
    FUN_1000200a0(plVar4);
  }
  ppuVar9 = &PTR_s_build___Fonts_Brandon_Regular_48_10184e200;
  if (iVar12 == 0) {
    ppuVar9 = &PTR_s_build___Fonts_Brandon_Regular_36_10184e1f0;
  }
  FUN_100651594(plVar5,*ppuVar9,&DAT_101158208);
  uVar14 = FUN_1004e0150("MENU_MARKET_DAILY_PURCHASE_SINGLE_LABEL",0);
  FUN_1006513c0(plVar5,uVar14);
  if ((*(float *)(param_1 + 0x170) != 0.5) || (*(float *)((long)param_1 + 0xb84) != 1.0)) {
    param_1[0x170] = 0x3f8000003f000000;
    FUN_1000200a0(plVar5);
  }
  if (*(float *)((long)param_1 + 0xb74) != -10.0) {
    *(undefined4 *)((long)param_1 + 0xb74) = 0xc1200000;
    FUN_1000200a0(plVar5);
  }
  fVar15 = 500.0;
  FUN_1001816d4(0x41c00000,0x43fa0000,0x43fa0000,plVar6,0,&DAT_101d91650,&DAT_10115a168,
                &DAT_101dc1cb8,PTR_s_build___Fonts_Brandon_Bold_80_fo_10184e250);
  FUN_100181c68(0x43480000,plVar6);
  FUN_100651184(plVar5);
  FUN_100181b5c(0,fVar15 * 0.5 + 10.0,plVar6);
  FUN_1001829b4(0,plVar6);
  uVar11 = DAT_101d918e8;
  local_78 = DAT_101d918e8;
  local_a0 = FUN_1001cadc8;
  local_88 = 0;
  uStack_80 = 0;
  local_90 = 0;
  plStack_98 = param_1;
  FUN_10001554c(param_1 + 0x18d,&local_a0);
  FUN_1001b495c(0,plVar6);
  FUN_1001b4964(plVar6,1);
  FUN_10018187c(plVar6,1);
  FUN_10065165c(param_1 + 0x26f,1);
  ppuVar9 = &PTR_s_build___Fonts_Brandon_Regular_48_10184e200;
  if (iVar12 == 0) {
    ppuVar9 = &PTR_s_build___Fonts_Brandon_Regular_36_10184e1f0;
  }
  FUN_100651594(plVar7,*ppuVar9,&DAT_101158208);
  uVar14 = FUN_1004e0150("MENU_MARKET_DAILY_PURCHASE_ALL_LABEL",0);
  FUN_1006513c0(plVar7,uVar14);
  if ((*(float *)(param_1 + 0x622) != 0.5) || (*(float *)((long)param_1 + 0x3114) != 1.0)) {
    param_1[0x622] = 0x3f8000003f000000;
    FUN_1000200a0(plVar7);
  }
  if (*(float *)((long)param_1 + 0x3104) != -10.0) {
    *(undefined4 *)((long)param_1 + 0x3104) = 0xc1200000;
    FUN_1000200a0(plVar7);
  }
  fVar15 = 500.0;
  FUN_1001816d4(0x41c00000,0x43fa0000,0x43fa0000,plVar8,0,&DAT_101d91650,&DAT_10115a168,
                &DAT_101dc1cb8,PTR_s_build___Fonts_Brandon_Bold_80_fo_10184e250);
  FUN_100181c68(0x43480000,plVar8);
  FUN_100651184(plVar7);
  FUN_100181b5c(0,fVar15 * 0.5 + 10.0,plVar8);
  FUN_1001829b4(0x3f800000,plVar8);
  FUN_1001b495c(0,plVar8);
  local_78 = uVar11;
  local_a0 = FUN_1001cadec;
  local_88 = 0;
  uStack_80 = 0;
  local_90 = 0;
  plStack_98 = param_1;
  FUN_10001554c(param_1 + 0x63f,&local_a0);
  FUN_1001b4964(plVar8,1);
  FUN_10018187c(plVar8,1);
  FUN_10065165c(param_1 + 0x721,1);
  return param_1;
}




void FUN_1001cada4(long param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x5650);
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001001cadc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))(plVar1,param_1 + 0x5658);
    return;
  }
  return;
}




void FUN_1001cadc8(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x5650);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001001cade4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,param_1 + 0x5658);
    return;
  }
  return;
}




void FUN_1001cadec(long param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x5650);
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001001cae08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 8))(plVar1,param_1 + 0x5658);
    return;
  }
  return;
}




long * thunk_FUN_1001ca764(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  undefined **ppuVar9;
  uint uVar10;
  undefined4 uVar11;
  int iVar12;
  long lVar13;
  undefined8 uVar14;
  float fVar15;
  code *pcStack_a0;
  long *plStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  
  lVar13 = FUN_1001ad5cc();
  FUN_10033f558(lVar13 + 0xb8);
  *param_1 = (long)&PTR_thunk_FUN_1001cae14_101466088;
  param_1[0x17] = (long)&PTR_FUN_1014661f0;
  thunk_FUN_1001fc280(param_1 + 0x1a,1,0);
  thunk_FUN_100183990(param_1 + 0x23,0);
  FUN_10064e264(param_1 + 0xe1);
  plVar1 = param_1 + 0xf8;
  FUN_1006421a8(plVar1);
  param_1[0xf8] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar2 = param_1 + 0x109;
  thunk_FUN_100652c08(plVar2);
  plVar3 = param_1 + 0x127;
  FUN_10064fd54(plVar3,1);
  param_1[0x127] = (long)&PTR_thunk_FUN_10064e2bc_101451a40;
  plVar4 = param_1 + 0x140;
  thunk_FUN_100650e64(plVar4);
  plVar5 = param_1 + 0x166;
  thunk_FUN_100650e64(plVar5);
  plVar6 = param_1 + 0x18c;
  thunk_FUN_100183160(plVar6,0);
  plVar7 = param_1 + 0x618;
  thunk_FUN_100650e64(plVar7);
  plVar8 = param_1 + 0x63e;
  thunk_FUN_100183160(plVar8,0);
  param_1[0xacd] = 0;
  param_1[0xacc] = 0;
  param_1[0xacb] = 0;
  param_1[0xaca] = 0;
  (**(code **)(*param_1 + 0x78))(param_1,param_1[0x1b],1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0xe1,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  FUN_100642bd8(plVar1,plVar2,1);
  FUN_100642bd8(plVar1,plVar3,1);
  FUN_100642bd8(plVar3,plVar4,1);
  FUN_100642bd8(plVar3,plVar6,1);
  FUN_100642bd8(plVar6,plVar5,1);
  FUN_100642bd8(plVar3,plVar8,1);
  FUN_100642bd8(plVar8,plVar7,1);
  *(uint *)(param_1[0x1b] + 0x84) = *(uint *)(param_1[0x1b] + 0x84) & 0xffffffef;
  (**(code **)(*(long *)param_1[0x1b] + 0x138))();
  *(uint *)(param_1[0x1b] + 0xeb4) = *(uint *)(param_1[0x1b] + 0xeb4) & 0xfffffffb;
  FUN_1001fc78c(param_1 + 0x1a,1);
  *(uint *)((long)param_1 + 0x78c) = *(uint *)((long)param_1 + 0x78c) | 0x10;
  uStack_78 = DAT_101dbd458;
  pcStack_a0 = FUN_1001cada4;
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_90 = 0;
  plStack_98 = param_1;
  FUN_10001554c(param_1 + 0xe2,&pcStack_a0);
  uStack_78 = DAT_101dbd484;
  pcStack_a0 = FUN_1001cada4;
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_90 = 0;
  plStack_98 = param_1;
  FUN_10001554c(param_1 + 0xe2,&pcStack_a0);
  FUN_100652cac(plVar2,PTR_s_build___MenuPartsCommon_tga_101854970,"white_background");
  FUN_100652dd4(plVar2,&DAT_10115a164,2);
  uVar10 = *(uint *)((long)param_1 + 0x8cc);
  if ((uVar10 & 0x7f80) != 0x1980) {
    *(uint *)((long)param_1 + 0x8cc) = uVar10 & 0xffff8000 | uVar10 & 0x7f | 0x1980;
    FUN_1000200a0(plVar2);
  }
  iVar12 = FUN_100126c88();
  ppuVar9 = &PTR_s_build___Fonts_Brandon_Bold_48_fo_10184e238;
  if (iVar12 == 0) {
    ppuVar9 = &PTR_s_build___Fonts_Brandon_Bold_36_fo_10184e228;
  }
  FUN_100651038(plVar4,*ppuVar9);
  uVar10 = *(uint *)((long)param_1 + 0xa84);
  if ((uVar10 & 0x7f80) != 0x4c80) {
    *(uint *)((long)param_1 + 0xa84) = uVar10 & 0xffff8000 | uVar10 & 0x7f | 0x4c80;
    FUN_1000200a0(plVar4);
  }
  if ((*(float *)(param_1 + 0x14a) != 0.5) || (*(float *)((long)param_1 + 0xa54) != 0.0)) {
    param_1[0x14a] = 0x3f000000;
    FUN_1000200a0(plVar4);
  }
  ppuVar9 = &PTR_s_build___Fonts_Brandon_Regular_48_10184e200;
  if (iVar12 == 0) {
    ppuVar9 = &PTR_s_build___Fonts_Brandon_Regular_36_10184e1f0;
  }
  FUN_100651594(plVar5,*ppuVar9,&DAT_101158208);
  uVar14 = FUN_1004e0150("MENU_MARKET_DAILY_PURCHASE_SINGLE_LABEL",0);
  FUN_1006513c0(plVar5,uVar14);
  if ((*(float *)(param_1 + 0x170) != 0.5) || (*(float *)((long)param_1 + 0xb84) != 1.0)) {
    param_1[0x170] = 0x3f8000003f000000;
    FUN_1000200a0(plVar5);
  }
  if (*(float *)((long)param_1 + 0xb74) != -10.0) {
    *(undefined4 *)((long)param_1 + 0xb74) = 0xc1200000;
    FUN_1000200a0(plVar5);
  }
  fVar15 = 500.0;
  FUN_1001816d4(0x41c00000,0x43fa0000,0x43fa0000,plVar6,0,&DAT_101d91650,&DAT_10115a168,
                &DAT_101dc1cb8,PTR_s_build___Fonts_Brandon_Bold_80_fo_10184e250);
  FUN_100181c68(0x43480000,plVar6);
  FUN_100651184(plVar5);
  FUN_100181b5c(0,fVar15 * 0.5 + 10.0,plVar6);
  FUN_1001829b4(0,plVar6);
  uVar11 = DAT_101d918e8;
  uStack_78 = DAT_101d918e8;
  pcStack_a0 = FUN_1001cadc8;
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_90 = 0;
  plStack_98 = param_1;
  FUN_10001554c(param_1 + 0x18d,&pcStack_a0);
  FUN_1001b495c(0,plVar6);
  FUN_1001b4964(plVar6,1);
  FUN_10018187c(plVar6,1);
  FUN_10065165c(param_1 + 0x26f,1);
  ppuVar9 = &PTR_s_build___Fonts_Brandon_Regular_48_10184e200;
  if (iVar12 == 0) {
    ppuVar9 = &PTR_s_build___Fonts_Brandon_Regular_36_10184e1f0;
  }
  FUN_100651594(plVar7,*ppuVar9,&DAT_101158208);
  uVar14 = FUN_1004e0150("MENU_MARKET_DAILY_PURCHASE_ALL_LABEL",0);
  FUN_1006513c0(plVar7,uVar14);
  if ((*(float *)(param_1 + 0x622) != 0.5) || (*(float *)((long)param_1 + 0x3114) != 1.0)) {
    param_1[0x622] = 0x3f8000003f000000;
    FUN_1000200a0(plVar7);
  }
  if (*(float *)((long)param_1 + 0x3104) != -10.0) {
    *(undefined4 *)((long)param_1 + 0x3104) = 0xc1200000;
    FUN_1000200a0(plVar7);
  }
  fVar15 = 500.0;
  FUN_1001816d4(0x41c00000,0x43fa0000,0x43fa0000,plVar8,0,&DAT_101d91650,&DAT_10115a168,
                &DAT_101dc1cb8,PTR_s_build___Fonts_Brandon_Bold_80_fo_10184e250);
  FUN_100181c68(0x43480000,plVar8);
  FUN_100651184(plVar7);
  FUN_100181b5c(0,fVar15 * 0.5 + 10.0,plVar8);
  FUN_1001829b4(0x3f800000,plVar8);
  FUN_1001b495c(0,plVar8);
  uStack_78 = uVar11;
  pcStack_a0 = FUN_1001cadec;
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_90 = 0;
  plStack_98 = param_1;
  FUN_10001554c(param_1 + 0x63f,&pcStack_a0);
  FUN_1001b4964(plVar8,1);
  FUN_10018187c(plVar8,1);
  FUN_10065165c(param_1 + 0x721,1);
  return param_1;
}




void FUN_1001cae14(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_1001cae14_101466088;
  param_1[0x17] = &PTR_FUN_1014661f0;
  if (*(char *)((long)param_1 + 0x566f) < '\0') {
    operator_delete((void *)param_1[0xacb]);
  }
  FUN_1001843c8(param_1 + 0x63e);
  thunk_FUN_100651068(param_1 + 0x618);
  FUN_1001843c8(param_1 + 0x18c);
  thunk_FUN_100651068(param_1 + 0x166);
  thunk_FUN_100651068(param_1 + 0x140);
  FUN_10064e2bc(param_1 + 0x127);
  param_1[0x109] = &PTR_FUN_1014a7108;
  param_1[0x120] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x123);
  FUN_10064e2bc(param_1 + 0x109);
  FUN_10064221c(param_1 + 0xf8);
  thunk_FUN_10064e2bc(param_1 + 0xe1);
  param_1[0x23] = &PTR_FUN_10145f300;
  param_1[0xbd] = &PTR_FUN_1014a7108;
  param_1[0xd4] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xd7);
  FUN_10064e2bc(param_1 + 0xbd);
  param_1[0x9f] = &PTR_FUN_1014a7108;
  param_1[0xb6] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xb9);
  FUN_10064e2bc(param_1 + 0x9f);
  param_1[0x81] = &PTR_FUN_1014a7108;
  param_1[0x98] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x9b);
  FUN_10064e2bc(param_1 + 0x81);
  FUN_10064221c(param_1 + 0x70);
  FUN_10003bec8(param_1 + 0x23);
  thunk_FUN_1001fc594(param_1 + 0x1a);
  FUN_10033f5d4(param_1 + 0x17);
  FUN_10064e2bc(param_1);
  return;
}




void thunk_FUN_1001cae14(void)

{
  FUN_1001cae14();
  return;
}




void FUN_1001caf78(long param_1)

{
  FUN_1001cae14(param_1 + -0xb8);
  return;
}




void FUN_1001caf80(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1001cae14();
  operator_delete(pvVar1);
  return;
}




void FUN_1001caf94(long param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1001cae14(param_1 + -0xb8);
  operator_delete(pvVar1);
  return;
}




void FUN_1001cafac(undefined1 param_1 [16],float param_2,long *param_3)

{
  long *plVar1;
  bool bVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined1 auStack_50 [16];
  
  FUN_1001ad608();
  fVar4 = (float)(**(code **)(*param_3 + 0x48))(param_3);
  fVar6 = fVar4 * 0.45;
  FUN_10064e47c(fVar6,param_3 + 0xe1);
  lVar3 = param_3[0x1b];
  fVar7 = fVar4 * 0.225;
  fVar5 = param_2 * 0.5;
  bVar2 = false;
  if ((*(float *)(lVar3 + 0x40) == fVar7) &&
     (bVar2 = false, !NAN(*(float *)(lVar3 + 0x44)) && !NAN(fVar5))) {
    bVar2 = *(float *)(lVar3 + 0x44) == fVar5;
  }
  if (!bVar2) {
    *(float *)(lVar3 + 0x40) = fVar7;
    *(float *)(lVar3 + 0x44) = fVar5;
    FUN_1000200a0(lVar3);
    lVar3 = param_3[0x1b];
  }
  *(uint *)(lVar3 + 0x6cc) = *(uint *)(lVar3 + 0x6cc) | 4;
  FUN_10064e47c(fVar4 * 0.40499997,param_2 * 0.9,lVar3);
  FUN_10064e5ec(fVar7,0,lVar3,8,param_3,7);
  if ((*(float *)(param_3 + 0x100) != fVar6) ||
     (fVar5 = *(float *)((long)param_3 + 0x804), fVar5 != 0.0)) {
    *(float *)(param_3 + 0x100) = fVar6;
    *(undefined4 *)((long)param_3 + 0x804) = 0;
    FUN_1000200a0(param_3 + 0xf8);
    fVar5 = *(float *)((long)param_3 + 0x804);
  }
  FUN_10064e47c(fVar4 * 0.55,param_2 + fVar5 * -2.0,param_3 + 0x109);
  plVar1 = param_3 + 0x127;
  fVar5 = 0.0;
  FUN_10064fc74(0,0,0x42a00000,auStack_50);
  FUN_100650064(plVar1,auStack_50);
  (**(code **)(param_3[0x127] + 0x90))(plVar1);
  FUN_10064e3cc(plVar1);
  fVar5 = (param_2 - fVar5) * 0.5;
  bVar2 = false;
  if ((*(float *)(param_3 + 0x12f) == fVar4 * 0.275) &&
     (bVar2 = false, !NAN(*(float *)((long)param_3 + 0x97c)) && !NAN(fVar5))) {
    bVar2 = *(float *)((long)param_3 + 0x97c) == fVar5;
  }
  if (!bVar2) {
    *(float *)(param_3 + 0x12f) = fVar4 * 0.275;
    *(float *)((long)param_3 + 0x97c) = fVar5;
    FUN_1000200a0(plVar1);
  }
  return;
}




void FUN_1001cb15c(long param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0xb5) = param_2;
  return;
}




void FUN_1001cb164(long *param_1,string *param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  std::string::operator=((string *)(param_1 + 0xacb),param_2);
  FUN_1001fc3d8(param_1 + 0x1a,param_2);
  FUN_1002c0820(param_1[0x1b],1);
  FUN_1002c09fc(param_1[0x1b],1);
  lVar1 = FUN_100341d58(param_2);
  if (lVar1 != 0) {
    uVar2 = FUN_100342adc();
    FUN_1001fc794(param_1 + 0x1a,uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x0001001cb1e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xe8))(param_1);
  return;
}




void FUN_1001cb1e8(long *param_1,long *param_2,uint param_3)

{
  long *plVar1;
  long *plVar2;
  bool bVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 local_50;
  void *local_48;
  
  plVar1 = param_1 + 0x18c;
  plVar2 = (long *)*param_2;
  if (-1 < *(char *)((long)param_2 + 0x17)) {
    plVar2 = param_2;
  }
  FUN_100183500(plVar1,plVar2);
  local_50 = 0x42c8000042c80000;
  FUN_100183548(plVar1,&local_50);
  FUN_1004e313c(&local_50);
  FUN_1004e38ac(&local_50,"%d");
  FUN_100181af8(plVar1,&local_50);
  if ((int)param_3 < 1) {
    bVar3 = false;
    puVar5 = &DAT_101158204;
  }
  else {
    lVar4 = FUN_10015d3ec();
    bVar3 = param_3 <= *(uint *)(lVar4 + 0x5454);
    puVar5 = &DAT_101158200;
    if (!bVar3) {
      puVar5 = &DAT_101158204;
    }
  }
  FUN_100181bb8(0x3f666666,plVar1,puVar5);
  FUN_100181bd0(0x3f666666,plVar1,puVar5);
  *(bool *)((long)param_1 + 0x2212) = bVar3;
  (**(code **)(*param_1 + 0xe8))(param_1);
  if (local_48 != (void *)0x0) {
    operator_delete__(local_48);
  }
  return;
}




void FUN_1001cb300(long *param_1,long *param_2,uint param_3)

{
  long *plVar1;
  long *plVar2;
  bool bVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 local_50;
  void *local_48;
  
  plVar1 = param_1 + 0x63e;
  plVar2 = (long *)*param_2;
  if (-1 < *(char *)((long)param_2 + 0x17)) {
    plVar2 = param_2;
  }
  FUN_100183500(plVar1,plVar2);
  local_50 = 0x42c8000042c80000;
  FUN_100183548(plVar1,&local_50);
  FUN_1004e313c(&local_50);
  FUN_1004e38ac(&local_50,"%d");
  FUN_100181af8(plVar1,&local_50);
  if ((int)param_3 < 1) {
    bVar3 = false;
    puVar5 = &DAT_101158204;
  }
  else {
    lVar4 = FUN_10015d3ec();
    bVar3 = param_3 <= *(uint *)(lVar4 + 0x5454);
    puVar5 = &DAT_101158200;
    if (!bVar3) {
      puVar5 = &DAT_101158204;
    }
  }
  FUN_100181bb8(0x3f666666,plVar1,puVar5);
  FUN_100181bd0(0x3f666666,plVar1,puVar5);
  *(bool *)((long)param_1 + 0x47a2) = bVar3;
  (**(code **)(*param_1 + 0xe8))(param_1);
  if (local_48 != (void *)0x0) {
    operator_delete__(local_48);
  }
  return;
}




void FUN_1001cb41c(long *param_1,int param_2)

{
  bool bVar1;
  long *plVar2;
  long *plVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  undefined1 auStack_70 [8];
  void *local_68;
  undefined1 auStack_60 [8];
  void *local_58;
  undefined1 auStack_50 [8];
  void *local_48;
  
  uVar5 = FUN_1004e0150("MENU_MARKET_DAILY_PICK_COINS_LEFT",0);
  thunk_FUN_1004e439c(auStack_50,uVar5);
  FUN_1004e313c(auStack_60);
  FUN_1004e38ac(auStack_60,"%d");
  FUN_1004e3120(auStack_70,"[COINS]");
  FUN_1004e3bc4(auStack_50,0,auStack_70,auStack_60);
  if (local_68 != (void *)0x0) {
    operator_delete__(local_68);
  }
  FUN_1006513c0(param_1 + 0x140,auStack_50);
  bVar1 = 0 < param_2;
  plVar2 = param_1 + 0x18c;
  puVar4 = (undefined4 *)&DAT_101158208;
  if (param_2 < 1) {
    puVar4 = &DAT_10115a164;
  }
  FUN_1001b4c0c(plVar2,bVar1);
  *(uint *)((long)param_1 + 0x2bc4) =
       *(uint *)((long)param_1 + 0x2bc4) & 0xfffffff8 |
       *(uint *)((long)param_1 + 0x2bc4) & 3 | (uint)bVar1 << 2;
  (**(code **)(param_1[0x18c] + 0x180))(plVar2);
  FUN_100651460(param_1 + 0x166,puVar4);
  plVar3 = param_1 + 0x63e;
  FUN_1001b4c0c(plVar3,bVar1);
  *(uint *)((long)param_1 + 0x5154) =
       *(uint *)((long)param_1 + 0x5154) & 0xfffffff8 |
       *(uint *)((long)param_1 + 0x5154) & 3 | (uint)bVar1 << 2;
  (**(code **)(param_1[0x63e] + 0x180))(plVar3);
  FUN_100651460(param_1 + 0x618,puVar4);
  if (param_2 < 1) {
    FUN_100181bb8(0x3f800000,plVar2,&DAT_101158200);
    uVar5 = FUN_1004e0150("MENU_MARKET_DAILY_PICK_SOLD_OUT",0);
    FUN_100181af8(plVar2,uVar5);
    FUN_100181bb8(0x3f800000,plVar3,&DAT_101158200);
    uVar5 = FUN_1004e0150("MENU_MARKET_DAILY_PICK_SOLD_OUT",0);
    FUN_100181af8(plVar3,uVar5);
  }
  (**(code **)(*param_1 + 0xe8))(param_1);
  if (local_58 != (void *)0x0) {
    operator_delete__(local_58);
  }
  if (local_48 != (void *)0x0) {
    operator_delete__(local_48);
  }
  return;
}




void FUN_1001cb5f4(long param_1)

{
  byte *pbVar1;
  size_t sVar2;
  size_t sVar3;
  undefined8 *puVar4;
  byte bVar5;
  byte bVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  void *pvVar11;
  byte *pbVar12;
  byte *pbVar13;
  long lVar14;
  byte *pbVar15;
  void *local_68 [2];
  char local_51;
  
  pbVar1 = (byte *)(param_1 + 0x5658);
  FUN_1001cb164(param_1,pbVar1);
  lVar8 = FUN_10034055c();
  lVar14 = 0;
  pbVar15 = (byte *)(lVar8 + 0x11);
  do {
    lVar10 = lVar8 + lVar14 * 0xd0;
    bVar5 = *(byte *)(lVar10 + 0x27);
    uVar9 = (ulong)bVar5;
    sVar2 = *(size_t *)(lVar10 + 0x18);
    if (-1 < (char)bVar5) {
      sVar2 = uVar9;
    }
    bVar6 = *(byte *)(param_1 + 0x566f);
    sVar3 = *(size_t *)(param_1 + 0x5660);
    if (-1 < (char)bVar6) {
      sVar3 = (ulong)bVar6;
    }
    if (sVar2 == sVar3) {
      pvVar11 = *(void **)(lVar10 + 0x10);
      puVar4 = pvVar11;
      if (-1 < (char)bVar5) {
        puVar4 = (undefined8 *)(lVar10 + 0x10);
      }
      pbVar12 = *(byte **)pbVar1;
      if (-1 < (char)bVar6) {
        pbVar12 = pbVar1;
      }
      if ((char)bVar5 < '\0') {
        if ((sVar2 == 0) || (iVar7 = _memcmp(puVar4,pbVar12,sVar2), iVar7 == 0)) goto LAB_1001cb6dc;
      }
      else if (sVar2 == 0) {
LAB_1001cb6dc:
        FUN_10001549c(local_68,"glory_icon_small");
        FUN_1001cb1e8(param_1,local_68,*(undefined4 *)(lVar8 + lVar14 * 0xd0 + 0x5c));
        if (local_51 < '\0') {
          operator_delete(local_68[0]);
        }
        FUN_10001549c(local_68,"glory_icon_small");
        FUN_1001cb300(param_1,local_68,*(undefined4 *)(lVar8 + lVar14 * 0xd0 + 0xa4));
        if (local_51 < '\0') {
          operator_delete(local_68[0]);
        }
        lVar10 = lVar8 + lVar14 * 0xd0;
        FUN_1001cb41c(param_1,*(int *)(lVar10 + 0xd8) - *(int *)(lVar10 + 0xd4));
      }
      else {
        pbVar13 = pbVar15;
        if ((uint)*pbVar12 == ((uint)pvVar11 & 0xff)) {
          do {
            uVar9 = uVar9 - 1;
            pbVar12 = pbVar12 + 1;
            if (uVar9 == 0) goto LAB_1001cb6dc;
            bVar5 = *pbVar13;
            pbVar13 = pbVar13 + 1;
          } while (bVar5 == *pbVar12);
        }
      }
    }
    lVar14 = lVar14 + 1;
    pbVar15 = pbVar15 + 0xd0;
    if (lVar14 == 3) {
      return;
    }
  } while( true );
}




void FUN_1001cb77c(long param_1)

{
  FUN_1001cb5f4(param_1 + -0xb8);
  return;
}




void FUN_1001cb784(long param_1,int param_2,byte *param_3,undefined8 param_4)

{
  size_t sVar1;
  size_t sVar2;
  byte bVar3;
  ulong uVar4;
  int iVar5;
  char *pcVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  byte *pbVar10;
  byte *pbVar11;
  ulong uVar12;
  
  if (param_2 != 0) {
    FUN_1002c09cc(*(undefined8 *)(param_1 + 0xd8),param_4);
    return;
  }
  bVar3 = param_3[0x17];
  uVar12 = (ulong)bVar3;
  sVar1 = *(size_t *)(param_3 + 8);
  if (-1 < (char)bVar3) {
    sVar1 = uVar12;
  }
  sVar2 = DAT_101d23908;
  if (-1 < (char)DAT_101d23917) {
    sVar2 = (ulong)DAT_101d23917;
  }
  if (sVar1 == sVar2) {
    pbVar10 = *(byte **)param_3;
    if (-1 < (char)bVar3) {
      pbVar10 = param_3;
    }
    pbVar11 = DAT_101d23900;
    if (-1 < (char)DAT_101d23917) {
      pbVar11 = (byte *)&DAT_101d23900;
    }
    if ((char)bVar3 < '\0') {
      if ((sVar1 == 0) || (iVar5 = _memcmp(pbVar10,pbVar11,sVar1), iVar5 == 0)) goto LAB_1001cb8d4;
    }
    else {
      if (sVar1 == 0) {
LAB_1001cb8d4:
        uVar7 = FUN_1004e0150("GENERIC_DIALOG_ERROR",0);
        pcVar6 = "MENU_MARKET_DAILY_PICK_ERROR_PURCHASE_NOT_FOUND";
        goto LAB_1001cb940;
      }
      pbVar10 = param_3;
      uVar4 = uVar12;
      if ((uint)*pbVar11 == ((uint)*(byte **)param_3 & 0xff)) {
        do {
          pbVar11 = pbVar11 + 1;
          pbVar10 = pbVar10 + 1;
          if (uVar4 - 1 == 0) goto LAB_1001cb8d4;
          uVar4 = uVar4 - 1;
        } while (*pbVar10 == *pbVar11);
      }
    }
  }
  sVar2 = DAT_101d23920;
  if (-1 < (char)DAT_101d2392f) {
    sVar2 = (ulong)DAT_101d2392f;
  }
  if (sVar1 == sVar2) {
    pbVar10 = *(byte **)param_3;
    if (-1 < (char)bVar3) {
      pbVar10 = param_3;
    }
    pbVar11 = DAT_101d23918;
    if (-1 < (char)DAT_101d2392f) {
      pbVar11 = (byte *)&DAT_101d23918;
    }
    if ((char)bVar3 < '\0') {
      if ((sVar1 == 0) || (iVar5 = _memcmp(pbVar10,pbVar11,sVar1), iVar5 == 0)) goto LAB_1001cb924;
    }
    else {
      if (sVar1 == 0) {
LAB_1001cb924:
        uVar7 = FUN_1004e0150("GENERIC_DIALOG_ERROR",0);
        pcVar6 = "MENU_MARKET_DAILY_PICK_ERROR_PURCHASE_NOT_ALLOWED";
        goto LAB_1001cb940;
      }
      if ((uint)*pbVar11 == ((uint)*(byte **)param_3 & 0xff)) {
        do {
          uVar12 = uVar12 - 1;
          pbVar11 = pbVar11 + 1;
          param_3 = param_3 + 1;
          if (uVar12 == 0) goto LAB_1001cb924;
        } while (*param_3 == *pbVar11);
      }
    }
  }
  uVar7 = FUN_1004e0150("GENERIC_DIALOG_ERROR",0);
  pcVar6 = "MENU_MARKET_DAILY_PICK_ERROR_GENERIC";
LAB_1001cb940:
  uVar8 = FUN_1004e0150(pcVar6,0);
  uVar9 = FUN_1004e0150("GENERIC_DIALOG_OKAY",0);
  FUN_1001e3090(uVar7,uVar8,uVar9,param_1,0);
  return;
}




void FUN_1001cb980(long param_1)

{
  FUN_1001cb784(param_1 + -0xb8);
  return;
}




long * FUN_1001cb988(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  code *local_80;
  long *plStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  
  puVar5 = (undefined8 *)FUN_1001b4d10();
  *puVar5 = &PTR_FUN_101466220;
  thunk_FUN_1003049ec(puVar5 + 0x263);
  plVar2 = param_1 + 0x2dd;
  thunk_FUN_1001bdbf8(plVar2,0);
  plVar3 = param_1 + 1000;
  FUN_1001aa1d4(plVar3);
  param_1[0x424] = -0xffffff01000000;
  *(undefined2 *)(param_1 + 0x425) = 0;
  *(undefined1 *)((long)param_1 + 0x212a) = 0;
  plVar1 = param_1 + 0x17;
  iVar4 = FUN_100642d08(plVar1);
  if (iVar4 != 0) {
    FUN_1006423ec(plVar1,1);
  }
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,puVar5 + 0x263,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar3,1);
  FUN_1001bdf7c(plVar2,2);
  *(uint *)((long)param_1 + 0x176c) = *(uint *)((long)param_1 + 0x176c) | 0x10;
  *(uint *)((long)param_1 + 0x139c) = *(uint *)((long)param_1 + 0x139c) & 0xfffffffb;
  local_58 = FUN_100644a94("UI::EVENT_ANIM_COMPLETE");
  local_80 = FUN_1001cbb54;
  local_68 = 0;
  uStack_60 = 0;
  local_70 = 0;
  plStack_78 = param_1;
  FUN_10001554c(param_1 + 0x264,&local_80);
  *(undefined1 *)((long)param_1 + 0x1314) = 1;
  FUN_1001b66dc(0x3f800000,param_1,"white_background","white_background");
  FUN_1001b6720(0x3f800000,0x3f800000,param_1);
  FUN_1001b676c(param_1);
  uVar6 = FUN_100345b94();
  uVar6 = FUN_10034c450(uVar6,"*KindredMenuProgressBarEffects*");
  FUN_1001aa350(plVar3,uVar6);
  return param_1;
}




void FUN_1001cbb54(long param_1)

{
  if ((*(char *)(param_1 + 0x2128) != '\0') && (*(char *)(param_1 + 0x212a) == '\0')) {
    FUN_100304c18(param_1 + 0x1318,1,0);
    return;
  }
  *(uint *)(param_1 + 0x139c) = *(uint *)(param_1 + 0x139c) & 0xfffffffb;
  return;
}




long * thunk_FUN_1001cb988(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  code *pcStack_80;
  long *plStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  
  puVar5 = (undefined8 *)FUN_1001b4d10();
  *puVar5 = &PTR_FUN_101466220;
  thunk_FUN_1003049ec(puVar5 + 0x263);
  plVar2 = param_1 + 0x2dd;
  thunk_FUN_1001bdbf8(plVar2,0);
  plVar3 = param_1 + 1000;
  FUN_1001aa1d4(plVar3);
  param_1[0x424] = -0xffffff01000000;
  *(undefined2 *)(param_1 + 0x425) = 0;
  *(undefined1 *)((long)param_1 + 0x212a) = 0;
  plVar1 = param_1 + 0x17;
  iVar4 = FUN_100642d08(plVar1);
  if (iVar4 != 0) {
    FUN_1006423ec(plVar1,1);
  }
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,puVar5 + 0x263,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar3,1);
  FUN_1001bdf7c(plVar2,2);
  *(uint *)((long)param_1 + 0x176c) = *(uint *)((long)param_1 + 0x176c) | 0x10;
  *(uint *)((long)param_1 + 0x139c) = *(uint *)((long)param_1 + 0x139c) & 0xfffffffb;
  uStack_58 = FUN_100644a94("UI::EVENT_ANIM_COMPLETE");
  pcStack_80 = FUN_1001cbb54;
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_70 = 0;
  plStack_78 = param_1;
  FUN_10001554c(param_1 + 0x264,&pcStack_80);
  *(undefined1 *)((long)param_1 + 0x1314) = 1;
  FUN_1001b66dc(0x3f800000,param_1,"white_background","white_background");
  FUN_1001b6720(0x3f800000,0x3f800000,param_1);
  FUN_1001b676c(param_1);
  uVar6 = FUN_100345b94();
  uVar6 = FUN_10034c450(uVar6,"*KindredMenuProgressBarEffects*");
  FUN_1001aa350(plVar3,uVar6);
  return param_1;
}




void FUN_1001cbb94(float param_1,float param_2,long param_3)

{
  bool bVar1;
  
  FUN_1001b5e00();
  FUN_10064259c(param_3 + 0x1318);
  param_2 = param_2 * 0.25;
  bVar1 = false;
  if ((*(float *)(param_3 + 0x1358) == param_1) &&
     (bVar1 = false, !NAN(*(float *)(param_3 + 0x135c)) && !NAN(param_2))) {
    bVar1 = *(float *)(param_3 + 0x135c) == param_2;
  }
  if (!bVar1) {
    *(float *)(param_3 + 0x1358) = param_1;
    *(float *)(param_3 + 0x135c) = param_2;
    FUN_1000200a0(param_3 + 0x1318);
    return;
  }
  return;
}




void FUN_1001cbc08(long *param_1)

{
  (**(code **)(*param_1 + 0x138))
            (param_1,(int)(float)(int)param_1[0x261],(int)(float)*(int *)((long)param_1 + 0x130c),
             (int)(float)*(int *)((long)param_1 + 0x1304),1);
                    /* WARNING: Could not recover jumptable at 0x0001001cbc60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xe8))(param_1);
  return;
}




void FUN_1001cbc64(long *param_1)

{
  float fVar1;
  undefined8 uVar2;
  
  uVar2 = (**(code **)(*param_1 + 0x48))();
  (**(code **)(*param_1 + 0x48))(param_1);
  FUN_10064e47c(uVar2,param_1 + 0x2dd);
  fVar1 = (float)(**(code **)(*param_1 + 0x48))(param_1);
  if ((*(float *)(param_1 + 0x2e5) != fVar1 * 0.5) || (*(float *)((long)param_1 + 0x172c) != 0.0)) {
    *(float *)(param_1 + 0x2e5) = fVar1 * 0.5;
    *(undefined4 *)((long)param_1 + 0x172c) = 0;
    FUN_1000200a0(param_1 + 0x2dd);
  }
  *(uint *)((long)param_1 + 0x84) = *(uint *)((long)param_1 + 0x84) | 0x10;
  fVar1 = (float)(**(code **)(*param_1 + 0x48))(param_1);
  if (*(float *)(param_1 + 0x3f0) != fVar1 * 0.5) {
    *(float *)(param_1 + 0x3f0) = fVar1 * 0.5;
    FUN_1000200a0(param_1 + 1000);
    return;
  }
  return;
}




void FUN_1001cbd48(long param_1,undefined4 *param_2,undefined4 *param_3)

{
  bool bVar1;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  *(undefined4 *)(param_1 + 0x2120) = *param_2;
  *(undefined4 *)(param_1 + 0x2124) = *param_3;
  if (*(char *)(param_1 + 0x2128) == '\0') {
    local_1c = *param_3;
    local_14 = *param_2;
  }
  else {
    bVar1 = *(char *)(param_1 + 0x212a) != '\0';
    local_14 = 0xff7fe801;
    if (bVar1) {
      local_14 = *param_2;
    }
    local_1c = 0xff32e00e;
    if (bVar1) {
      local_1c = *param_3;
    }
  }
  local_18 = local_14;
  FUN_1001b5d78(param_1,&local_14,&local_18,&local_1c);
  return;
}




void FUN_1001cbdd4(undefined8 param_1,long param_2,int param_3,undefined4 param_4,undefined4 param_5
                  ,undefined8 param_6,int param_7)

{
  bool bVar1;
  undefined4 local_68;
  undefined4 local_64;
  
  *(char *)(param_2 + 0x2128) = param_7 <= param_3;
  FUN_1001cbea8();
  local_64 = param_4;
  local_68 = param_5;
  if (*(char *)(param_2 + 0x2128) != '\0') {
    bVar1 = *(char *)(param_2 + 0x212a) != '\0';
    local_64 = 0xff7fe801;
    if (bVar1) {
      local_64 = param_4;
    }
    local_68 = 0xff32e00e;
    if (bVar1) {
      local_68 = param_5;
    }
  }
  if (param_7 == -1) {
    param_3 = 1;
    param_7 = 1;
  }
  FUN_1001b5918(param_1,param_2,param_3,&local_64,&local_68,param_6,param_7,
                *(undefined1 *)(param_2 + 0x2129));
  return;
}




void FUN_1001cbea8(long param_1)

{
  bool bVar1;
  uint uVar2;
  undefined1 uVar3;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  
  if ((*(char *)(param_1 + 0x2128) == '\0') || (*(char *)(param_1 + 0x212a) != '\0')) {
    FUN_1001aaebc(param_1 + 8000);
    uVar2 = 0;
    uVar3 = 1;
  }
  else {
    FUN_1001aa720(param_1 + 8000);
    FUN_1001aae30(param_1 + 8000,"Progress_Bar_Ready_For_Upgrade");
    uVar3 = 0;
    uVar2 = 4;
  }
  *(uint *)(param_1 + 0x139c) = *(uint *)(param_1 + 0x139c) & 0xfffffffb | uVar2;
  *(undefined1 *)(param_1 + 0x1312) = uVar3;
  *(uint *)(param_1 + 0x176c) = *(uint *)(param_1 + 0x176c) & 0xfffffffb | uVar2;
  if (*(char *)(param_1 + 0x2128) == '\0') {
    local_3c = *(undefined4 *)(param_1 + 0x2124);
    uStack_34 = *(undefined4 *)(param_1 + 0x2120);
  }
  else {
    bVar1 = *(char *)(param_1 + 0x212a) != '\0';
    uStack_34 = 0xff7fe801;
    if (bVar1) {
      uStack_34 = *(undefined4 *)(param_1 + 0x2120);
    }
    local_3c = 0xff32e00e;
    if (bVar1) {
      local_3c = *(undefined4 *)(param_1 + 0x2124);
    }
  }
  local_38 = uStack_34;
  FUN_1001b5d78(param_1,&uStack_34,&local_38,&local_3c);
  return;
}




void FUN_1001cbfac(long param_1,undefined8 param_2)

{
  *(uint *)(param_1 + 0x139c) = *(uint *)(param_1 + 0x139c) | 4;
  FUN_100304c18(param_1 + 0x1318,0,param_2);
  return;
}




void FUN_1001cbfd0(long param_1)

{
  FUN_100304c18(param_1 + 0x1318,1,0);
  return;
}




void FUN_1001cbfe4(long param_1)

{
  FUN_100304f2c(param_1 + 0x1318);
  return;
}




void FUN_1001cbff0(long param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x212a) = param_2;
  FUN_1001cbea8();
  return;
}




void FUN_1001cbffc(long param_1)

{
  FUN_1001b67bc();
  FUN_1001aaebc(param_1 + 8000);
  FUN_1001aae30(param_1 + 8000,"Progress_Bar_Emptying_During_Upgrade");
  return;
}




void FUN_1001cc038(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_101466220;
  thunk_FUN_1001aa23c(param_1 + 1000);
  FUN_10003bf20(param_1 + 0x2dd);
  param_1[0x263] = &PTR_FUN_101466398;
  thunk_FUN_100651068(param_1 + 0x2b6);
  param_1[0x298] = &PTR_FUN_1014a7108;
  param_1[0x2af] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x2b2);
  FUN_10064e2bc(param_1 + 0x298);
  param_1[0x27a] = &PTR_FUN_1014a7108;
  param_1[0x291] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x294);
  FUN_10064e2bc(param_1 + 0x27a);
  FUN_10064e2bc(param_1 + 0x263);
  FUN_100196fa4(param_1);
  return;
}




void FUN_1001cc10c(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_101466220;
  thunk_FUN_1001aa23c(param_1 + 1000);
  FUN_10003bf20(param_1 + 0x2dd);
  param_1[0x263] = &PTR_FUN_101466398;
  thunk_FUN_100651068(param_1 + 0x2b6);
  param_1[0x298] = &PTR_FUN_1014a7108;
  param_1[0x2af] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x2b2);
  FUN_10064e2bc(param_1 + 0x298);
  param_1[0x27a] = &PTR_FUN_1014a7108;
  param_1[0x291] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x294);
  FUN_10064e2bc(param_1 + 0x27a);
  FUN_10064e2bc(param_1 + 0x263);
  pvVar1 = (void *)FUN_100196fa4(param_1);
  operator_delete(pvVar1);
  return;
}




void FUN_1001cc1e4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_101466398;
  thunk_FUN_100651068(param_1 + 0x53);
  param_1[0x35] = &PTR_FUN_1014a7108;
  param_1[0x4c] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x4f);
  FUN_10064e2bc(param_1 + 0x35);
  param_1[0x17] = &PTR_FUN_1014a7108;
  param_1[0x2e] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x31);
  FUN_10064e2bc(param_1 + 0x17);
  FUN_10064e2bc(param_1);
  return;
}




void FUN_1001cc268(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_101466398;
  thunk_FUN_100651068(param_1 + 0x53);
  param_1[0x35] = &PTR_FUN_1014a7108;
  param_1[0x4c] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x4f);
  FUN_10064e2bc(param_1 + 0x35);
  param_1[0x17] = &PTR_FUN_1014a7108;
  param_1[0x2e] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x31);
  FUN_10064e2bc(param_1 + 0x17);
  pvVar1 = (void *)FUN_10064e2bc(param_1);
  operator_delete(pvVar1);
  return;
}




long FUN_1001cc2f0(long param_1)

{
  long lVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  code *local_70;
  long lStack_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  
  puVar3 = (undefined8 *)FUN_100536aac();
  *puVar3 = &PTR_thunk_FUN_1001cc504_1014664e0;
  puVar3[0x17] = &PTR_FUN_101466698;
  FUN_100657568(puVar3 + 0x1e);
  FUN_1006421a8(param_1 + 0x100);
  *(undefined ***)(param_1 + 0x100) = &PTR_thunk_FUN_10064221c_10144b7e8;
  FUN_10064e264(param_1 + 0x188);
  thunk_FUN_100650e64(param_1 + 0x240);
  thunk_FUN_100650e64(param_1 + 0x370);
  thunk_FUN_100650e64(param_1 + 0x4a0);
  thunk_FUN_100536c60(param_1 + 0x5d0);
  FUN_10064e264(param_1 + 0xa80);
  thunk_FUN_100183990(param_1 + 0xb38,0);
  uVar4 = NEON_fmov(0xbf800000,4);
  *(undefined8 *)(param_1 + 0x1128) = uVar4;
  *(undefined4 *)(param_1 + 0x1130) = 0;
  *(undefined4 *)(param_1 + 0x1138) = 0;
  *(undefined1 *)(param_1 + 0x113c) = 0;
  uVar2 = *(uint *)(param_1 + 0x84);
  *(uint *)(param_1 + 0x84) = uVar2 & 0xfffffffb;
  if ((uVar2 & 0x7f80) != 0) {
    *(uint *)(param_1 + 0x84) = uVar2 & 0xffff807b;
    FUN_1000200a0(param_1);
  }
  FUN_100651038(param_1 + 0x240,PTR_s_build___Fonts_Brandon_Bold_72_fo_10184e248);
  FUN_100651038(param_1 + 0x370,PTR_s_build___Fonts_Brandon_Bold_72_fo_10184e248);
  FUN_100651038(param_1 + 0x4a0,PTR_s_build___Fonts_Brandon_Bold_72_fo_10184e248);
  FUN_100651038(param_1 + 0x798,PTR_s_build___Fonts_Brandon_Bold_72_fo_10184e248);
  local_48 = DAT_101d91884;
  local_70 = thunk_FUN_100536b78;
  local_58 = 0;
  uStack_50 = 0;
  local_60 = 0;
  lStack_68 = param_1;
  FUN_10001554c(param_1 + 0xb40,&local_70);
  local_48 = DAT_101dbd4b4;
  local_70 = FUN_1001cc4e4;
  lVar1 = param_1 + 0x5d8;
  local_58 = 0;
  uStack_50 = 0;
  local_60 = 0;
  lStack_68 = param_1;
  FUN_10001554c(lVar1,&local_70);
  local_48 = DAT_101dbd4bc;
  local_70 = FUN_1001cc4f0;
  local_58 = 0;
  uStack_50 = 0;
  local_60 = 0;
  lStack_68 = param_1;
  FUN_10001554c(lVar1,&local_70);
  local_48 = DAT_101dbd4b8;
  local_70 = FUN_1001cc4f8;
  local_58 = 0;
  uStack_50 = 0;
  local_60 = 0;
  lStack_68 = param_1;
  FUN_10001554c(lVar1,&local_70);
  return param_1;
}




void FUN_1001cc4e4(long param_1)

{
  *(undefined1 *)(param_1 + 0x113d) = 0;
  return;
}




void FUN_1001cc4f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1001ccd4c(param_1,param_4);
  return;
}




void FUN_1001cc4f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1001ccd90(param_1,param_4);
  return;
}




long thunk_FUN_1001cc2f0(long param_1)

{
  long lVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  code *pcStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  
  puVar3 = (undefined8 *)FUN_100536aac();
  *puVar3 = &PTR_thunk_FUN_1001cc504_1014664e0;
  puVar3[0x17] = &PTR_FUN_101466698;
  FUN_100657568(puVar3 + 0x1e);
  FUN_1006421a8(param_1 + 0x100);
  *(undefined ***)(param_1 + 0x100) = &PTR_thunk_FUN_10064221c_10144b7e8;
  FUN_10064e264(param_1 + 0x188);
  thunk_FUN_100650e64(param_1 + 0x240);
  thunk_FUN_100650e64(param_1 + 0x370);
  thunk_FUN_100650e64(param_1 + 0x4a0);
  thunk_FUN_100536c60(param_1 + 0x5d0);
  FUN_10064e264(param_1 + 0xa80);
  thunk_FUN_100183990(param_1 + 0xb38,0);
  uVar4 = NEON_fmov(0xbf800000,4);
  *(undefined8 *)(param_1 + 0x1128) = uVar4;
  *(undefined4 *)(param_1 + 0x1130) = 0;
  *(undefined4 *)(param_1 + 0x1138) = 0;
  *(undefined1 *)(param_1 + 0x113c) = 0;
  uVar2 = *(uint *)(param_1 + 0x84);
  *(uint *)(param_1 + 0x84) = uVar2 & 0xfffffffb;
  if ((uVar2 & 0x7f80) != 0) {
    *(uint *)(param_1 + 0x84) = uVar2 & 0xffff807b;
    FUN_1000200a0(param_1);
  }
  FUN_100651038(param_1 + 0x240,PTR_s_build___Fonts_Brandon_Bold_72_fo_10184e248);
  FUN_100651038(param_1 + 0x370,PTR_s_build___Fonts_Brandon_Bold_72_fo_10184e248);
  FUN_100651038(param_1 + 0x4a0,PTR_s_build___Fonts_Brandon_Bold_72_fo_10184e248);
  FUN_100651038(param_1 + 0x798,PTR_s_build___Fonts_Brandon_Bold_72_fo_10184e248);
  uStack_48 = DAT_101d91884;
  pcStack_70 = thunk_FUN_100536b78;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_60 = 0;
  lStack_68 = param_1;
  FUN_10001554c(param_1 + 0xb40,&pcStack_70);
  uStack_48 = DAT_101dbd4b4;
  pcStack_70 = FUN_1001cc4e4;
  lVar1 = param_1 + 0x5d8;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_60 = 0;
  lStack_68 = param_1;
  FUN_10001554c(lVar1,&pcStack_70);
  uStack_48 = DAT_101dbd4bc;
  pcStack_70 = FUN_1001cc4f0;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_60 = 0;
  lStack_68 = param_1;
  FUN_10001554c(lVar1,&pcStack_70);
  uStack_48 = DAT_101dbd4b8;
  pcStack_70 = FUN_1001cc4f8;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_60 = 0;
  lStack_68 = param_1;
  FUN_10001554c(lVar1,&pcStack_70);
  return param_1;
}




void FUN_1001cc504(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_1001cc504_1014664e0;
  param_1[0x17] = &PTR_FUN_101466698;
  FUN_1001ccc40();
  param_1[0x167] = &PTR_FUN_10145f300;
  param_1[0x201] = &PTR_FUN_1014a7108;
  param_1[0x218] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x21b);
  FUN_10064e2bc(param_1 + 0x201);
  param_1[0x1e3] = &PTR_FUN_1014a7108;
  param_1[0x1fa] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x1fd);
  FUN_10064e2bc(param_1 + 0x1e3);
  param_1[0x1c5] = &PTR_FUN_1014a7108;
  param_1[0x1dc] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x1df);
  FUN_10064e2bc(param_1 + 0x1c5);
  FUN_10064221c(param_1 + 0x1b4);
  FUN_10003bec8(param_1 + 0x167);
  thunk_FUN_10064e2bc(param_1 + 0x150);
  thunk_FUN_100536ddc(param_1 + 0xba);
  thunk_FUN_100651068(param_1 + 0x94);
  thunk_FUN_100651068(param_1 + 0x6e);
  thunk_FUN_100651068(param_1 + 0x48);
  thunk_FUN_10064e2bc(param_1 + 0x31);
  FUN_10064221c(param_1 + 0x20);
  thunk_FUN_100657580(param_1 + 0x1e);
  FUN_100536b00(param_1);
  return;
}




void thunk_FUN_1001cc504(void)

{
  FUN_1001cc504();
  return;
}




void FUN_1001cc620(long param_1)

{
  FUN_1001cc504(param_1 + -0xb8);
  return;
}




void FUN_1001cc628(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1001cc504();
  operator_delete(pvVar1);
  return;
}




void FUN_1001cc63c(long param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1001cc504(param_1 + -0xb8);
  operator_delete(pvVar1);
  return;
}




void FUN_1001cc654(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  undefined **ppuVar6;
  uint uVar7;
  int iVar8;
  undefined4 uVar9;
  
  iVar8 = FUN_100126c88();
  plVar1 = param_1 + 0x48;
  FUN_100651700(plVar1,0);
  plVar2 = param_1 + 0x6e;
  FUN_100651700(plVar2,1);
  plVar3 = param_1 + 0x94;
  FUN_100651700(plVar3,1);
  FUN_100651700(param_1 + 0xf3,0);
  uVar7 = *(uint *)((long)param_1 + 0x2c4);
  if ((uVar7 & 0x7f80) != 0x5f80) {
    *(uint *)((long)param_1 + 0x2c4) = uVar7 & 0xffff8000 | uVar7 & 0x7f | 0x5f80;
    FUN_1000200a0(plVar1);
  }
  if ((*(uint *)((long)param_1 + 0x524) & 0x7f80) != 0x3f80) {
    *(uint *)((long)param_1 + 0x524) = *(uint *)((long)param_1 + 0x524) & 0xffff807f | 0x3f80;
    FUN_1000200a0(plVar3);
  }
  if ((~*(uint *)((long)param_1 + 0x654) & 0x7f80) != 0) {
    *(uint *)((long)param_1 + 0x654) = *(uint *)((long)param_1 + 0x654) | 0x7f80;
    FUN_1000200a0(param_1 + 0xba);
  }
  FUN_100652cdc(param_1 + 0x201,"circle_button_x");
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x150,1);
  plVar4 = param_1 + 0x20;
  (**(code **)(*param_1 + 0x78))(param_1,plVar4,1);
  plVar5 = param_1 + 0x31;
  FUN_100642bd8(plVar4,plVar5,1);
  FUN_100642bd8(plVar5,plVar1,1);
  FUN_100642bd8(plVar5,plVar2,1);
  FUN_100642bd8(plVar5,plVar3,1);
  FUN_100642bd8(plVar5,param_1 + 0xba,1);
  FUN_100642bd8(plVar4,param_1 + 0x167,1);
  *(uint *)((long)param_1 + 0xb04) = *(uint *)((long)param_1 + 0xb04) | 0x10;
  FUN_1006575f4(param_1 + 0x1e,PTR_s_build___MenuPartsCommon_tga_101854970);
  uVar9 = FUN_1010b0260("dialog_background");
  *(undefined4 *)(param_1 + 0x227) = uVar9;
  FUN_100651038(plVar1,PTR_s_build___Fonts_Brandon_Light_80_f_10184e1d0);
  FUN_100651038(plVar2,PTR_s_build___Fonts_Brandon_Light_80_f_10184e1d0);
  ppuVar6 = &PTR_s_build___Fonts_Brandon_Regular_60_10184e208;
  if (iVar8 == 0) {
    ppuVar6 = &PTR_s_build___Fonts_Brandon_Regular_30_10184e1e8;
  }
  FUN_100651038(plVar3,*ppuVar6);
  return;
}




undefined4 FUN_1001cc868(long param_1)

{
  return *(undefined4 *)(param_1 + 0x1130);
}




float FUN_1001cc870(void)

{
  undefined1 auStack_18 [4];
  float local_14;
  
  FUN_100641464(&local_14,auStack_18);
  return local_14 * 0.4;
}




void FUN_1001cc8a4(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,int param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  bool bVar2;
  byte bVar3;
  undefined4 local_68;
  undefined4 uStack_64;
  
  FUN_100641464(&uStack_64,&local_68);
  *(undefined4 *)(param_1 + 0x225) = uStack_64;
  *(undefined4 *)((long)param_1 + 0x112c) = local_68;
  bVar2 = false;
  if ((*(float *)((long)param_1 + 0xac4) == 0.0) &&
     (bVar2 = false, !NAN(*(float *)(param_1 + 0x158)))) {
    bVar2 = *(float *)(param_1 + 0x158) == 0.0;
  }
  if (!bVar2) {
    param_1[0x158] = 0;
    FUN_1000200a0(param_1 + 0x150);
    uStack_64 = (undefined4)param_1[0x225];
  }
  FUN_10064e47c(uStack_64,uStack_64,param_1 + 0x150);
  (**(code **)(*param_1 + 0x138))(param_1,param_2);
  (**(code **)(*param_1 + 0x140))(param_1,param_3);
  (**(code **)(*param_1 + 0x148))(param_1,param_4);
  (**(code **)(*param_1 + 0x150))(param_1,param_5);
  plVar1 = param_1 + 0xba;
  bVar3 = 0x80;
  if (param_6 == 0) {
    bVar3 = 0;
  }
  *(byte *)(param_1 + 0x14e) = bVar3 | *(byte *)(param_1 + 0x14e) & 0x7f;
  FUN_100536fd0(plVar1,param_7);
  FUN_10053726c(plVar1,param_8);
  (**(code **)(*param_1 + 400))(param_1);
  FUN_1005371f8(plVar1);
  return;
}




void FUN_1001cc9f4(long param_1)

{
  FUN_1006513c0(param_1 + 0x240);
  FUN_1000200a0(param_1);
  return;
}




void FUN_1001cca1c(long param_1)

{
  FUN_1006513c0(param_1 + 0x4a0);
  FUN_1000200a0(param_1);
  return;
}




void FUN_1001cca44(long param_1)

{
  FUN_1006513c0(param_1 + 0x370);
  FUN_1000200a0(param_1);
  return;
}




void FUN_1001cca6c(long param_1)

{
  FUN_1006518fc(param_1 + 0x798);
  FUN_1000200a0(param_1);
  return;
}




undefined4 FUN_1001cca94(long param_1)

{
  return *(undefined4 *)(param_1 + 0x1128);
}




void FUN_1001ccaa0(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001001ccaa8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x90))();
  return;
}




void FUN_1001ccaac(undefined8 param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  
  *(int *)(param_3 + 0x1128) = (int)param_1;
  *(int *)(param_3 + 0x112c) = (int)param_2;
  bVar1 = false;
  if ((*(float *)(param_3 + 0xac4) == 0.0) && (bVar1 = false, !NAN(*(float *)(param_3 + 0xac0)))) {
    bVar1 = *(float *)(param_3 + 0xac0) == 0.0;
  }
  if (!bVar1) {
    *(undefined8 *)(param_3 + 0xac0) = 0;
    FUN_1000200a0(param_3 + 0xa80);
  }
  FUN_10064e47c(param_1,param_2,param_3 + 0xa80);
  FUN_1005371f0(0x41c00000,param_3 + 0x5d0);
  return;
}




void FUN_1001ccb24(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  ushort uVar4;
  ushort *puVar5;
  
  uVar2 = FUN_100536bb4();
  if ((uVar2 & 1) != 0) {
    return;
  }
  *(uint *)(param_1 + 0x84) = *(uint *)(param_1 + 0x84) | 4;
  lVar1 = DAT_101dbd2f8;
  uVar4 = *(ushort *)(DAT_101dbd2f8 + 0x20010);
  if ((ulong)uVar4 == 0xffff) {
    puVar5 = (ushort *)0x0;
  }
  else {
    puVar5 = (ushort *)(DAT_101dbd2f8 + (ulong)uVar4 * 0x40 + 0x10);
    if (uVar4 == *(ushort *)(DAT_101dbd2f8 + 0x20012)) {
      uVar4 = 0xffff;
    }
    else {
      uVar4 = *puVar5;
    }
    *(ushort *)(DAT_101dbd2f8 + 0x20010) = uVar4;
    *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
    FUN_10063ee9c(puVar5);
    *(undefined ***)puVar5 = &PTR_thunk_FUN_10063eeb4_1014a52f0;
    *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
  }
  uVar3 = FUN_100047714();
  FUN_10063fce0(0x3f800000);
  FUN_10063f0e8(0x3e4ccccd,uVar3);
  FUN_100642b7c(param_1,puVar5);
  FUN_1005375d0(param_1 + 0x5d0);
  FUN_1006415b8();
  FUN_100536fe0(param_1 + 0x5d0);
  return;
}




void FUN_1001ccc40(long param_1)

{
  ushort *puVar1;
  long lVar2;
  int iVar3;
  undefined8 uVar4;
  ushort uVar5;
  
  iVar3 = FUN_100536bb4();
  lVar2 = DAT_101dbd2f8;
  if (iVar3 == 0) {
    return;
  }
  uVar5 = *(ushort *)(DAT_101dbd2f8 + 0x20010);
  if ((ulong)uVar5 != 0xffff) {
    puVar1 = (ushort *)(DAT_101dbd2f8 + (ulong)uVar5 * 0x40 + 0x10);
    if (uVar5 == *(ushort *)(DAT_101dbd2f8 + 0x20012)) {
      uVar5 = 0xffff;
    }
    else {
      uVar5 = *puVar1;
    }
    *(ushort *)(DAT_101dbd2f8 + 0x20010) = uVar5;
    *(int *)(lVar2 + 0x20014) = *(int *)(lVar2 + 0x20014) + 1;
    FUN_10063ee9c(puVar1);
    *(undefined ***)puVar1 = &PTR_thunk_FUN_10063eeb4_1014a5338;
    *(int *)(lVar2 + 0x20020) = *(int *)(lVar2 + 0x20020) + 1;
  }
  uVar4 = FUN_100047714();
  FUN_10063fce0(0);
  FUN_10063f0e8(0x3e4ccccd,uVar4);
  FUN_100642b7c(param_1,uVar4);
  FUN_1005375d0(param_1 + 0x5d0);
  FUN_100537100(param_1 + 0x5d0);
  return;
}




void FUN_1001ccd4c(long param_1,undefined8 param_2)

{
  long lVar1;
  
  if ((*(char *)(param_1 + 0x113d) == '\0') && (lVar1 = FUN_100644b2c(param_2), lVar1 != 0)) {
    FUN_100536c08(param_1,lVar1);
  }
  FUN_100536b78(param_1);
  return;
}




void FUN_1001ccd90(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = FUN_100644b2c(param_2);
  if (lVar1 != 0) {
    FUN_100536bbc(param_1,lVar1);
  }
  *(undefined1 *)(param_1 + 0x113d) = 1;
  FUN_100536b78(param_1);
  return;
}




void FUN_1001ccdd4(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  bool bVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  long lVar9;
  float local_60;
  float local_5c;
  long local_58;
  
  FUN_100641464(&local_5c,&local_60);
  iVar5 = FUN_100126c88();
  fVar8 = DAT_101854a78;
  if (iVar5 == 0) {
    fVar8 = 1.0;
  }
  fVar6 = local_5c * 0.5 + -30.0;
  fVar7 = 0.2;
  if (iVar5 == 0) {
    fVar7 = 0.25;
  }
  local_60 = local_60 * fVar7;
  bVar4 = false;
  if ((*(float *)(param_1 + 0x39) == fVar6) &&
     (bVar4 = false, !NAN(*(float *)((long)param_1 + 0x1cc)) && !NAN(local_60))) {
    bVar4 = *(float *)((long)param_1 + 0x1cc) == local_60;
  }
  if (!bVar4) {
    *(float *)(param_1 + 0x39) = fVar6;
    *(float *)((long)param_1 + 0x1cc) = local_60;
    FUN_1000200a0(param_1 + 0x31);
  }
  bVar4 = false;
  if ((*(float *)(param_1 + 0x3a) == fVar8) &&
     (bVar4 = false, !NAN(*(float *)((long)param_1 + 0x1d4)) && !NAN(fVar8))) {
    bVar4 = *(float *)((long)param_1 + 0x1d4) == fVar8;
  }
  if (!bVar4) {
    *(float *)(param_1 + 0x3a) = fVar8;
    *(float *)((long)param_1 + 0x1d4) = fVar8;
    FUN_1000200a0(param_1 + 0x31);
  }
  bVar4 = false;
  if ((*(float *)(param_1 + 0x78) == 1.0) &&
     (bVar4 = false, !NAN(*(float *)((long)param_1 + 0x3c4)))) {
    bVar4 = *(float *)((long)param_1 + 0x3c4) == 1.0;
  }
  lVar9 = NEON_fmov(0x3f800000,4);
  if (!bVar4) {
    param_1[0x78] = lVar9;
    FUN_1000200a0(param_1 + 0x6e);
  }
  plVar1 = param_1 + 0x48;
  bVar4 = false;
  if ((*(float *)((long)param_1 + 0x284) == 0.0) &&
     (bVar4 = false, !NAN(*(float *)(param_1 + 0x50)))) {
    bVar4 = *(float *)(param_1 + 0x50) == 0.0;
  }
  if (!bVar4) {
    param_1[0x50] = 0;
    FUN_1000200a0(plVar1);
  }
  local_58 = lVar9;
  (**(code **)(param_1[0x48] + 0x28))(plVar1,&local_58);
  plVar2 = param_1 + 0xba;
  if ((*(float *)(param_1 + 0xc2) != 60.0) || (*(float *)((long)param_1 + 0x614) != 0.0)) {
    param_1[0xc2] = 0x42700000;
    FUN_1000200a0(plVar2);
  }
  local_58 = 0;
  (**(code **)(param_1[0xba] + 0x28))(plVar2,&local_58);
  (**(code **)(*param_1 + 400))(param_1);
  FUN_1005371f8(plVar2);
  plVar3 = param_1 + 0x94;
  if ((*(float *)(param_1 + 0x9c) != 0.0) || (*(float *)((long)param_1 + 0x4e4) != 26.0)) {
    param_1[0x9c] = 0x41d0000000000000;
    FUN_1000200a0(plVar3);
  }
  local_58 = 0x3f800000;
  (**(code **)(param_1[0x94] + 0x28))(plVar3,&local_58);
  FUN_100651708(0x44480000,plVar3,1);
  FUN_10064e5ec(0x41200000,0,plVar2,3,plVar1,2);
  FUN_100537780(param_1 + 0xd1);
  if ((*(float *)(param_1 + 0x78) != 1.0) || (*(float *)((long)param_1 + 0x3c4) != 1.0)) {
    param_1[0x78] = lVar9;
    FUN_1000200a0(param_1 + 0x6e);
  }
  fVar6 = DAT_101854a7c;
  if ((*(float *)(param_1 + 0x16f) != DAT_101854a7c) ||
     (*(float *)((long)param_1 + 0xb7c) != DAT_101854a7c)) {
    *(float *)(param_1 + 0x16f) = DAT_101854a7c;
    *(float *)((long)param_1 + 0xb7c) = fVar6;
    FUN_1000200a0(param_1 + 0x167);
  }
  lVar9 = NEON_fmov(0x41400000,4);
  param_1[0x172] = lVar9;
  if ((*(float *)(param_1 + 0x170) != fVar8) || (*(float *)((long)param_1 + 0xb84) != fVar8)) {
    *(float *)(param_1 + 0x170) = fVar8;
    *(float *)((long)param_1 + 0xb84) = fVar8;
    FUN_1000200a0(param_1 + 0x167);
  }
  return;
}




void FUN_1001cd0a0(long param_1,undefined8 param_2)

{
  float fVar1;
  long lVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined2 local_38;
  undefined1 local_36;
  undefined1 local_35;
  
  if (*(int *)(param_1 + 0x1138) != 0) {
    lVar2 = FUN_10003d5bc();
    local_38 = 0xffff;
    local_36 = 0xff;
    local_35 = (undefined1)(int)(*(float *)(lVar2 + 0x18) * 255.0);
    uVar7 = *(undefined4 *)(param_1 + 0x1128);
    uVar8 = *(undefined4 *)(param_1 + 0x112c);
    lVar2 = FUN_1006575b8(param_1 + 0xf0,*(undefined4 *)(param_1 + 0x1138));
    lVar3 = *(long *)(*(long *)(param_1 + 0xf0) + 8);
    fVar1 = (float)NEON_ucvtf((uint)*(ushort *)(lVar2 + 8));
    NEON_ucvtf((uint)*(ushort *)(lVar2 + 10));
    fVar4 = (float)NEON_ucvtf((uint)*(ushort *)(lVar2 + 4));
    fVar5 = (float)NEON_ucvtf((uint)*(ushort *)(lVar2 + 6));
    fVar6 = 1.0 / (float)*(int *)(lVar3 + 0x48);
    FUN_100043664(0,0,uVar7,uVar8,0,fVar6 * fVar4,
                  1.0 - fVar5 * (1.0 / (float)*(int *)(lVar3 + 0x4c)),fVar6 * (fVar1 + fVar4),
                  param_2,&local_38,0);
  }
  return;
}




void FUN_1001cd198(long param_1)

{
  FUN_1001cd0a0(param_1 + -0xb8);
  return;
}




undefined8 FUN_1001cd1a0(long param_1,long *param_2)

{
  *param_2 = *(long *)(*(long *)(param_1 + 0xf0) + 8) + 0x30;
  return 1;
}




undefined8 FUN_1001cd1b8(long param_1,long *param_2)

{
  *param_2 = *(long *)(*(long *)(param_1 + 0x38) + 8) + 0x30;
  return 1;
}




void FUN_1001cd1d0(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001001cd1d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x180))();
  return;
}




long FUN_1001cd1dc(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_100650e64();
  *puVar1 = &PTR_FUN_10145eb78;
  puVar1[0x17] = &PTR_FUN_10145ecf0;
  FUN_1004e3004(puVar1 + 0x26);
  FUN_1004e313c(param_1 + 0x138);
  *(undefined8 *)(param_1 + 0x148) = 0;
  *(undefined2 *)(param_1 + 0x150) = 0;
  FUN_1006515d0(param_1,1);
  return param_1;
}




long thunk_FUN_1001cd1dc(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_100650e64();
  *puVar1 = &PTR_FUN_10145eb78;
  puVar1[0x17] = &PTR_FUN_10145ecf0;
  FUN_1004e3004(puVar1 + 0x26);
  FUN_1004e313c(param_1 + 0x138);
  *(undefined8 *)(param_1 + 0x148) = 0;
  *(undefined2 *)(param_1 + 0x150) = 0;
  FUN_1006515d0(param_1,1);
  return param_1;
}




void FUN_1001cd23c(long param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4)

{
  FUN_1000153b4(param_1 + 0x138);
  *(undefined1 *)(param_1 + 0x150) = param_3;
  *(undefined1 *)(param_1 + 0x151) = param_4;
  FUN_1001cd27c(param_1);
  return;
}




void FUN_1001cd27c(long *param_1)

{
  uint64_t uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  undefined1 auStack_50 [8];
  void *local_48;
  undefined1 auStack_40 [8];
  void *local_38;
  
  if (-1 < param_1[0x29]) {
    FUN_1004e313c(auStack_40);
    lVar4 = param_1[0x29];
    uVar1 = _mach_absolute_time();
    uVar3 = (ulong)((double)lVar4 + (double)((uVar1 - param_1[0x26]) * DAT_101d91638) * -1e-09);
    uVar3 = uVar3 & ((long)uVar3 >> 0x3f ^ 0xffffffffffffffffU);
    if (*(char *)((long)param_1 + 0x151) == '\0') {
      FUN_1000f1e20(auStack_50,param_1 + 0x27,uVar3,(char)param_1[0x2a]);
    }
    else {
      FUN_1000f28c4(auStack_50,param_1 + 0x27,uVar3,(char)param_1[0x2a]);
    }
    FUN_1000153b4(auStack_40,auStack_50);
    if (local_48 != (void *)0x0) {
      operator_delete__(local_48);
    }
    uVar2 = FUN_100655b6c(param_1 + 0x1a);
    uVar3 = FUN_1004e3790(auStack_40,uVar2,0xffffffff);
    if ((uVar3 & 1) == 0) {
      (**(code **)(*param_1 + 0x138))(param_1,auStack_40);
    }
    if (local_38 != (void *)0x0) {
      operator_delete__(local_38);
    }
  }
  return;
}




void FUN_1001cd374(long param_1,undefined8 *param_2)

{
  *(undefined8 *)(param_1 + 0x148) = *param_2;
  FUN_1004e3004(param_1 + 0x130);
  FUN_1001cd27c(param_1);
  return;
}




void FUN_1001cd3a4(long param_1,string *param_2)

{
  int iVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  void *local_38 [2];
  char local_21;
  
  iVar1 = FUN_100126c88();
  if (*(int *)(param_1 + 0x28) == 1) {
    ppuVar2 = &PTR_s_build___Fonts_Brandon_Regular_60_10184e208;
    ppuVar3 = &PTR_s_build___Fonts_Brandon_Regular_40_10184e1f8;
  }
  else {
    if (*(int *)(param_1 + 0x28) != 0) {
      return;
    }
    ppuVar2 = &PTR_s_build___Fonts_Brandon_Bold_72_fo_10184e248;
    ppuVar3 = &PTR_s_build___Fonts_Brandon_Regular_48_10184e200;
  }
  if (iVar1 == 0) {
    ppuVar2 = ppuVar3;
  }
  FUN_10001549c(local_38,*ppuVar2);
  std::string::operator=(param_2,(string *)local_38);
  if (local_21 < '\0') {
    operator_delete(local_38[0]);
  }
  return;
}




undefined8 * FUN_1001cd434(undefined8 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  *param_1 = &PTR_FUN_1014666e0;
  param_1[2] = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  thunk_FUN_1004e439c(param_1 + 10,&DAT_101d91650);
  FUN_10003330c(param_1 + 0xc,&DAT_101d91198);
  param_1[0xf] = 0x41c8000042480000;
  uVar3 = DAT_101dc1cb8;
  param_1[0x10] = DAT_101dc1cb8;
  param_1[0x11] = uVar3;
  param_1[0x12] = 0x3f000000;
  *(undefined1 *)(param_1 + 0x13) = 0;
  uVar3 = NEON_fmov(0xbf800000,4);
  *(undefined8 *)((long)param_1 + 0x9c) = uVar3;
  *(undefined8 *)((long)param_1 + 0xa4) = 0x1bf800000;
  *(undefined4 *)((long)param_1 + 0xac) = 0x1000001;
  iVar1 = FUN_100126c88();
  uVar2 = 0x447a0000;
  if (iVar1 == 0) {
    uVar2 = 0x442f0000;
  }
  *(undefined4 *)((long)param_1 + 0x94) = uVar2;
  return param_1;
}




undefined8 * thunk_FUN_1001cd434(undefined8 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  *param_1 = &PTR_FUN_1014666e0;
  param_1[2] = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  thunk_FUN_1004e439c(param_1 + 10,&DAT_101d91650);
  FUN_10003330c(param_1 + 0xc,&DAT_101d91198);
  param_1[0xf] = 0x41c8000042480000;
  uVar3 = DAT_101dc1cb8;
  param_1[0x10] = DAT_101dc1cb8;
  param_1[0x11] = uVar3;
  param_1[0x12] = 0x3f000000;
  *(undefined1 *)(param_1 + 0x13) = 0;
  uVar3 = NEON_fmov(0xbf800000,4);
  *(undefined8 *)((long)param_1 + 0x9c) = uVar3;
  *(undefined8 *)((long)param_1 + 0xa4) = 0x1bf800000;
  *(undefined4 *)((long)param_1 + 0xac) = 0x1000001;
  iVar1 = FUN_100126c88();
  uVar2 = 0x447a0000;
  if (iVar1 == 0) {
    uVar2 = 0x442f0000;
  }
  *(undefined4 *)((long)param_1 + 0x94) = uVar2;
  return param_1;
}




void FUN_1001cd518(long param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  iVar1 = FUN_100126c88();
  FUN_10003c1ec(param_1 + 8,0);
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined1 *)(param_1 + 0xae) = 0;
  FUN_1000153b4(param_1 + 0x50,&DAT_101d91650);
  std::string::operator=((string *)(param_1 + 0x60),(string *)&DAT_101d91198);
  *(undefined8 *)(param_1 + 0x78) = 0x41c8000042480000;
  *(undefined8 *)(param_1 + 0x80) = DAT_101dc1cb8;
  *(undefined4 *)(param_1 + 0x90) = 0x3f000000;
  uVar2 = 0x447a0000;
  if (iVar1 == 0) {
    uVar2 = 0x442f0000;
  }
  *(undefined4 *)(param_1 + 0x94) = uVar2;
  uVar3 = NEON_fmov(0xbf800000,4);
  *(undefined8 *)(param_1 + 0x9c) = uVar3;
  *(undefined8 *)(param_1 + 0xa4) = 0x1bf800000;
  *(undefined2 *)(param_1 + 0xac) = 1;
  return;
}




long * FUN_1001cd5ec(long *param_1,undefined8 param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  uint uVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  float fVar8;
  code *local_70;
  long *plStack_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  
  puVar6 = (undefined8 *)FUN_10064e20c();
  *puVar6 = &PTR_thunk_FUN_1001cd8c0_1014666f8;
  FUN_1001cd434(puVar6 + 0x17);
  *(undefined4 *)(param_1 + 0x2d) = 0;
  plVar1 = param_1 + 0x2e;
  thunk_FUN_1001c10a4(plVar1);
  plVar2 = param_1 + 0x1a2;
  FUN_1006421a8(plVar2);
  param_1[0x1a2] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  param_1[0x1b4] = 0;
  param_1[0x1b3] = 0;
  FUN_10003330c(param_1 + 0x1b5,&DAT_101d91198);
  *(char *)(param_1 + 0x1b8) = (char)param_2;
  plVar3 = param_1 + 0x1b9;
  thunk_FUN_100181304(plVar3,param_2);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  FUN_100642bd8(plVar2,plVar3,1);
  if ((*(float *)(param_1 + 0x1c3) != 0.5) || (*(float *)((long)param_1 + 0xe1c) != 0.5)) {
    param_1[0x1c3] = (long)&DAT_3f0000003f000000;
    FUN_1000200a0(plVar3);
  }
  FUN_100651700(param_1 + 0x29c,0);
  uVar4 = *(uint *)((long)param_1 + 0xe4c);
  if ((uVar4 & 0x7f80) != 0x6c00) {
    *(uint *)((long)param_1 + 0xe4c) = uVar4 & 0xffff8000 | uVar4 & 0x7f | 0x6c00;
    FUN_1000200a0(plVar3);
  }
  FUN_1001816d4(0x42700000,0x42c80000,0x43c80000,plVar3,0,&DAT_101d91650,&DAT_10115a168,
                &DAT_101dc1cb8,0);
  param_1[0x1c4] = 0x4220000042a00000;
  local_48 = DAT_101d91884;
  local_70 = FUN_1001cd8a4;
  local_58 = 0;
  uStack_50 = 0;
  local_60 = 0;
  plStack_68 = param_1;
  FUN_10001554c(param_1 + 0x1ba,&local_70);
  uVar7 = FUN_1004e0150("GENERIC_DIALOG_OKAY",0);
  FUN_100181af8(plVar3,uVar7);
  *(uint *)((long)param_1 + 0xe4c) = *(uint *)((long)param_1 + 0xe4c) & 0xfffffffb;
  iVar5 = FUN_100126c88();
  fVar8 = 1.5;
  if (iVar5 == 0) {
    fVar8 = 1.2;
  }
  if ((*(float *)(param_1 + 0x1c2) != fVar8) || (*(float *)((long)param_1 + 0xe14) != fVar8)) {
    *(float *)(param_1 + 0x1c2) = fVar8;
    *(float *)((long)param_1 + 0xe14) = fVar8;
    FUN_1000200a0(plVar3);
  }
  uVar4 = *(uint *)((long)param_1 + 500);
  if ((uVar4 & 0x7f80) != 0x7280) {
    *(uint *)((long)param_1 + 500) = uVar4 & 0xffff8000 | uVar4 & 0x7f | 0x7280;
    FUN_1000200a0(plVar1);
  }
  if ((*(uint *)((long)param_1 + 0x84) & 0x7f80) != 0) {
    *(uint *)((long)param_1 + 0x84) = *(uint *)((long)param_1 + 0x84) & 0xffff807f;
    FUN_1000200a0(param_1);
  }
  if ((*(float *)(param_1 + 9) != 0.1) || (*(float *)((long)param_1 + 0x4c) != 0.1)) {
    param_1[9] = 0x3dcccccd3dcccccd;
    FUN_1000200a0(param_1);
  }
  *(uint *)((long)param_1 + 0x84) = *(uint *)((long)param_1 + 0x84) & 0xfffffffb;
  return param_1;
}




void FUN_1001cd8a4(long param_1)

{
  if (*(code **)(param_1 + 0xd8) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001001cd8b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 0xd8))(*(undefined8 *)(param_1 + 0xd0),0);
    return;
  }
  return;
}




long * thunk_FUN_1001cd5ec(long *param_1,undefined8 param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  uint uVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  float fVar8;
  code *pcStack_70;
  long *plStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  
  puVar6 = (undefined8 *)FUN_10064e20c();
  *puVar6 = &PTR_thunk_FUN_1001cd8c0_1014666f8;
  FUN_1001cd434(puVar6 + 0x17);
  *(undefined4 *)(param_1 + 0x2d) = 0;
  plVar1 = param_1 + 0x2e;
  thunk_FUN_1001c10a4(plVar1);
  plVar2 = param_1 + 0x1a2;
  FUN_1006421a8(plVar2);
  param_1[0x1a2] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  param_1[0x1b4] = 0;
  param_1[0x1b3] = 0;
  FUN_10003330c(param_1 + 0x1b5,&DAT_101d91198);
  *(char *)(param_1 + 0x1b8) = (char)param_2;
  plVar3 = param_1 + 0x1b9;
  thunk_FUN_100181304(plVar3,param_2);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  FUN_100642bd8(plVar2,plVar3,1);
  if ((*(float *)(param_1 + 0x1c3) != 0.5) || (*(float *)((long)param_1 + 0xe1c) != 0.5)) {
    param_1[0x1c3] = (long)&DAT_3f0000003f000000;
    FUN_1000200a0(plVar3);
  }
  FUN_100651700(param_1 + 0x29c,0);
  uVar4 = *(uint *)((long)param_1 + 0xe4c);
  if ((uVar4 & 0x7f80) != 0x6c00) {
    *(uint *)((long)param_1 + 0xe4c) = uVar4 & 0xffff8000 | uVar4 & 0x7f | 0x6c00;
    FUN_1000200a0(plVar3);
  }
  FUN_1001816d4(0x42700000,0x42c80000,0x43c80000,plVar3,0,&DAT_101d91650,&DAT_10115a168,
                &DAT_101dc1cb8,0);
  param_1[0x1c4] = 0x4220000042a00000;
  uStack_48 = DAT_101d91884;
  pcStack_70 = FUN_1001cd8a4;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_60 = 0;
  plStack_68 = param_1;
  FUN_10001554c(param_1 + 0x1ba,&pcStack_70);
  uVar7 = FUN_1004e0150("GENERIC_DIALOG_OKAY",0);
  FUN_100181af8(plVar3,uVar7);
  *(uint *)((long)param_1 + 0xe4c) = *(uint *)((long)param_1 + 0xe4c) & 0xfffffffb;
  iVar5 = FUN_100126c88();
  fVar8 = 1.5;
  if (iVar5 == 0) {
    fVar8 = 1.2;
  }
  if ((*(float *)(param_1 + 0x1c2) != fVar8) || (*(float *)((long)param_1 + 0xe14) != fVar8)) {
    *(float *)(param_1 + 0x1c2) = fVar8;
    *(float *)((long)param_1 + 0xe14) = fVar8;
    FUN_1000200a0(plVar3);
  }
  uVar4 = *(uint *)((long)param_1 + 500);
  if ((uVar4 & 0x7f80) != 0x7280) {
    *(uint *)((long)param_1 + 500) = uVar4 & 0xffff8000 | uVar4 & 0x7f | 0x7280;
    FUN_1000200a0(plVar1);
  }
  if ((*(uint *)((long)param_1 + 0x84) & 0x7f80) != 0) {
    *(uint *)((long)param_1 + 0x84) = *(uint *)((long)param_1 + 0x84) & 0xffff807f;
    FUN_1000200a0(param_1);
  }
  if ((*(float *)(param_1 + 9) != 0.1) || (*(float *)((long)param_1 + 0x4c) != 0.1)) {
    param_1[9] = 0x3dcccccd3dcccccd;
    FUN_1000200a0(param_1);
  }
  *(uint *)((long)param_1 + 0x84) = *(uint *)((long)param_1 + 0x84) & 0xfffffffb;
  return param_1;
}




void FUN_1001cd8c0(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_1001cd8c0_1014666f8;
  FUN_1001ce334();
  FUN_10003bd40(param_1 + 0x1b9);
  if (*(char *)((long)param_1 + 0xdbf) < '\0') {
    operator_delete((void *)param_1[0x1b5]);
  }
  if ((void *)param_1[0x1b4] != (void *)0x0) {
    operator_delete__((void *)param_1[0x1b4]);
    param_1[0x1b4] = 0;
    param_1[0x1b3] = 0;
  }
  FUN_10064221c(param_1 + 0x1a2);
  FUN_1000cbf18(param_1 + 0x2e);
  param_1[0x17] = &PTR_FUN_1014666e0;
  if (*(char *)((long)param_1 + 0x12f) < '\0') {
    operator_delete((void *)param_1[0x23]);
  }
  if ((void *)param_1[0x22] != (void *)0x0) {
    operator_delete__((void *)param_1[0x22]);
    param_1[0x21] = 0;
    param_1[0x22] = 0;
  }
  FUN_10003c1ec(param_1 + 0x18,1);
  FUN_10064e2bc(param_1);
  return;
}




void thunk_FUN_1001cd8c0(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_1001cd8c0_1014666f8;
  FUN_1001ce334();
  FUN_10003bd40(param_1 + 0x1b9);
  if (*(char *)((long)param_1 + 0xdbf) < '\0') {
    operator_delete((void *)param_1[0x1b5]);
  }
  if ((void *)param_1[0x1b4] != (void *)0x0) {
    operator_delete__((void *)param_1[0x1b4]);
    param_1[0x1b4] = 0;
    param_1[0x1b3] = 0;
  }
  FUN_10064221c(param_1 + 0x1a2);
  FUN_1000cbf18(param_1 + 0x2e);
  param_1[0x17] = &PTR_FUN_1014666e0;
  if (*(char *)((long)param_1 + 0x12f) < '\0') {
    operator_delete((void *)param_1[0x23]);
  }
  if ((void *)param_1[0x22] != (void *)0x0) {
    operator_delete__((void *)param_1[0x22]);
    param_1[0x21] = 0;
    param_1[0x22] = 0;
  }
  FUN_10003c1ec(param_1 + 0x18,1);
  FUN_10064e2bc(param_1);
  return;
}




void FUN_1001cd970(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1001cd8c0();
  operator_delete(pvVar1);
  return;
}




void FUN_1001cd984(long *param_1,string *param_2,long param_3,undefined1 param_4)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  std::string::operator=((string *)(param_1 + 0x1b5),param_2);
  FUN_1001bc9c4(param_1 + 0x18,param_3 + 8);
  lVar3 = *(long *)(param_3 + 0x20);
  lVar2 = *(long *)(param_3 + 0x18);
  lVar5 = *(long *)(param_3 + 0x30);
  lVar4 = *(long *)(param_3 + 0x28);
  lVar7 = *(long *)(param_3 + 0x40);
  lVar6 = *(long *)(param_3 + 0x38);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_3 + 0x48);
  param_1[0x1d] = lVar5;
  param_1[0x1c] = lVar4;
  param_1[0x1f] = lVar7;
  param_1[0x1e] = lVar6;
  param_1[0x1b] = lVar3;
  param_1[0x1a] = lVar2;
  FUN_1000153b4(param_1 + 0x21,param_3 + 0x50);
  std::string::operator=((string *)(param_1 + 0x23),(string *)(param_3 + 0x60));
  lVar3 = *(long *)(param_3 + 0x90);
  lVar2 = *(long *)(param_3 + 0x88);
  lVar5 = *(long *)(param_3 + 0xa0);
  lVar4 = *(long *)(param_3 + 0x98);
  lVar7 = *(long *)(param_3 + 0x80);
  lVar6 = *(long *)(param_3 + 0x78);
  uVar1 = *(ulong *)(param_3 + 0xa8);
  param_1[0x2c] = uVar1;
  param_1[0x29] = lVar3;
  param_1[0x28] = lVar2;
  param_1[0x2b] = lVar5;
  param_1[0x2a] = lVar4;
  param_1[0x27] = lVar7;
  param_1[0x26] = lVar6;
  *(undefined1 *)(param_1 + 0x1b8) = param_4;
  if ((uVar1 & 0xff00000000) != 0) {
    *(uint *)((long)param_1 + 0x84) = *(uint *)((long)param_1 + 0x84) & 0xffffffef;
    FUN_1001cdac8(param_1,DAT_101dbd460,FUN_1001cdb1c,param_1);
    FUN_1001cdac8(param_1,DAT_101dbd48c,FUN_1001cdb1c,param_1);
  }
  FUN_100181af8(param_1 + 0x1b9,param_1 + 0x21);
  *(uint *)((long)param_1 + 0xe4c) =
       *(uint *)((long)param_1 + 0xe4c) & 0xfffffff8 |
       *(uint *)((long)param_1 + 0xe4c) & 3 | (uint)(param_1[0x1b] != 0) << 2;
  (**(code **)(*param_1 + 0x138))(param_1);
  FUN_1001cdb24(param_1,param_1 + 0x18);
  *(undefined4 *)(param_1 + 0x2d) = 2;
  FUN_1001cdc4c(param_1);
  return;
}




void FUN_1001cdac8(long param_1,int param_2,long param_3,long param_4)

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




void FUN_1001cdb1c(undefined8 param_1)

{
  FUN_1001cddf8(param_1,0);
  return;
}




void FUN_1001cdb24(long *param_1,uint *param_2)

{
  uint uVar1;
  bool bVar2;
  uint *extraout_x1;
  long lVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  long *local_58;
  
  if (*param_2 != 0) {
    lVar3 = *(long *)(param_2 + 2);
    lVar4 = (ulong)*param_2 * 0x38;
    fVar6 = 0.0;
    do {
      local_58 = (long *)0x0;
      uVar1 = *(uint *)(lVar3 + 0x28);
      if (uVar1 < 2) {
        local_58 = (long *)FUN_1001ce0e8(param_1,lVar3);
        if (local_58 != (long *)0x0) goto LAB_1001cdbc0;
        param_2 = (uint *)0x0;
      }
      else {
        if (uVar1 == 3) {
          local_58 = (long *)FUN_1001ce2c4(param_1,lVar3);
        }
        else {
          if (uVar1 != 2) goto LAB_1001cdc14;
          local_58 = (long *)FUN_1001ce220(param_1,param_2);
        }
LAB_1001cdbc0:
        FUN_100642bd8(param_1 + 0x1a2,local_58,1);
        FUN_10019bafc(param_1 + 0x1b3,&local_58);
        fVar5 = *(float *)(local_58 + 8);
        bVar2 = false;
        if ((fVar5 == *(float *)(lVar3 + 0x30)) &&
           (bVar2 = false, !NAN(*(float *)((long)local_58 + 0x44)) && !NAN(fVar6))) {
          bVar2 = *(float *)((long)local_58 + 0x44) == fVar6;
        }
        if (!bVar2) {
          *(float *)(local_58 + 8) = *(float *)(lVar3 + 0x30);
          *(float *)((long)local_58 + 0x44) = fVar6;
          FUN_1000200a0();
        }
        (**(code **)(*local_58 + 0x50))();
        fVar6 = *(float *)(lVar3 + 0x2c) + fVar6 + fVar5;
        param_2 = extraout_x1;
      }
LAB_1001cdc14:
      lVar3 = lVar3 + 0x38;
      lVar4 = lVar4 + -0x38;
    } while (lVar4 != 0);
  }
  (**(code **)(*param_1 + 0x140))(param_1);
  return;
}




void FUN_1001cdc4c(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ushort uVar4;
  ushort *puVar5;
  ushort *puVar6;
  undefined8 local_58;
  
  lVar1 = DAT_101dbd2f8;
  uVar4 = *(ushort *)(DAT_101dbd2f8 + 0x20010);
  if ((ulong)uVar4 == 0xffff) {
    puVar5 = (ushort *)0x0;
  }
  else {
    puVar5 = (ushort *)(DAT_101dbd2f8 + (ulong)uVar4 * 0x40 + 0x10);
    if (uVar4 == *(ushort *)(DAT_101dbd2f8 + 0x20012)) {
      uVar4 = 0xffff;
    }
    else {
      uVar4 = *puVar5;
    }
    *(ushort *)(DAT_101dbd2f8 + 0x20010) = uVar4;
    *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
    FUN_10063ee9c(puVar5);
    *(undefined ***)puVar5 = &PTR_thunk_FUN_10063eeb4_1014a52f0;
    *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
  }
  uVar2 = FUN_100047714();
  FUN_10063fce0(0x3f800000);
  FUN_10063f0e8(0x3e4ccccd,uVar2);
  uVar3 = FUN_10001f424();
  local_58 = NEON_fmov(0x3f800000,4);
  FUN_10064025c(uVar3,&local_58);
  FUN_10063f0e8(0x3e4ccccd,uVar3);
  FUN_10063f130(uVar3,FUN_10018cc34);
  lVar1 = DAT_101dbd2f8;
  uVar4 = *(ushort *)(DAT_101dbd2f8 + 0x20010);
  if ((ulong)uVar4 == 0xffff) {
    puVar6 = (ushort *)0x0;
  }
  else {
    puVar6 = (ushort *)(DAT_101dbd2f8 + (ulong)uVar4 * 0x40 + 0x10);
    if (uVar4 == *(ushort *)(DAT_101dbd2f8 + 0x20012)) {
      uVar4 = 0xffff;
    }
    else {
      uVar4 = *puVar6;
    }
    *(ushort *)(DAT_101dbd2f8 + 0x20010) = uVar4;
    *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
    FUN_10063f1bc(puVar6);
    *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
  }
  FUN_10063f2a4(puVar6,uVar2);
  FUN_100642324(param_1);
  FUN_100642b7c(param_1,puVar5);
  return;
}




void FUN_1001cddf8(long *param_1,int param_2)

{
  ushort *puVar1;
  size_t sVar2;
  size_t sVar3;
  long *plVar4;
  byte bVar5;
  byte bVar6;
  undefined4 uVar7;
  long lVar8;
  int iVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  ushort uVar12;
  ulong uVar13;
  byte *pbVar14;
  byte *pbVar15;
  long *plVar16;
  long *plVar17;
  undefined8 local_48;
  
  uVar7 = 0x3dcccccd;
  if (param_2 == 0) {
    uVar7 = 0x3ecccccd;
  }
  uVar10 = FUN_100047714();
  FUN_10063fce0(0);
  FUN_10063f0e8(uVar7,uVar10);
  FUN_10063f130(uVar10,FUN_10001f4ac);
  lVar8 = DAT_101dbd2f8;
  uVar12 = *(ushort *)(DAT_101dbd2f8 + 0x20010);
  if ((ulong)uVar12 != 0xffff) {
    puVar1 = (ushort *)(DAT_101dbd2f8 + (ulong)uVar12 * 0x40 + 0x10);
    if (uVar12 == *(ushort *)(DAT_101dbd2f8 + 0x20012)) {
      uVar12 = 0xffff;
    }
    else {
      uVar12 = *puVar1;
    }
    *(ushort *)(DAT_101dbd2f8 + 0x20010) = uVar12;
    *(int *)(lVar8 + 0x20014) = *(int *)(lVar8 + 0x20014) + 1;
    FUN_10063ee9c(puVar1);
    *(undefined ***)puVar1 = &PTR_thunk_FUN_10063eeb4_1014a5338;
    *(int *)(lVar8 + 0x20020) = *(int *)(lVar8 + 0x20020) + 1;
  }
  uVar11 = FUN_10001f424();
  local_48 = 0x3dcccccd3dcccccd;
  FUN_10064025c(uVar11,&local_48);
  FUN_100642324(param_1);
  FUN_100642b7c(param_1,uVar10);
  plVar17 = param_1 + 0x23;
  bVar6 = *(byte *)((long)param_1 + 0x12f);
  uVar13 = (ulong)bVar6;
  sVar2 = param_1[0x24];
  if (-1 < (char)bVar6) {
    sVar2 = uVar13;
  }
  sVar3 = DAT_101d911a0;
  if (-1 < (char)DAT_101d911a8._7_1_) {
    sVar3 = (ulong)DAT_101d911a8._7_1_;
  }
  if (sVar2 == sVar3) {
    plVar16 = (long *)*plVar17;
    plVar4 = plVar16;
    if (-1 < (char)bVar6) {
      plVar4 = plVar17;
    }
    pbVar15 = DAT_101d91198;
    if (-1 < (char)DAT_101d911a8._7_1_) {
      pbVar15 = (byte *)&DAT_101d91198;
    }
    if ((char)bVar6 < '\0') {
      if ((sVar2 == 0) || (iVar9 = _memcmp(plVar4,pbVar15,sVar2), plVar17 = plVar16, iVar9 == 0))
      goto LAB_1001cdfd4;
    }
    else {
      if (sVar2 == 0) goto LAB_1001cdfd4;
      if ((uint)*pbVar15 == ((uint)plVar16 & 0xff)) {
        pbVar14 = (byte *)((long)param_1 + 0x119);
        do {
          uVar13 = uVar13 - 1;
          pbVar15 = pbVar15 + 1;
          if (uVar13 == 0) goto LAB_1001cdfd4;
          bVar5 = *pbVar14;
          pbVar14 = pbVar14 + 1;
        } while (bVar5 == *pbVar15);
        goto LAB_1001cdfa8;
      }
    }
  }
  else {
LAB_1001cdfa8:
    if ((char)bVar6 < '\0') {
      plVar17 = (long *)*plVar17;
    }
  }
  FUN_100130250(plVar17,1);
LAB_1001cdfd4:
  FUN_1001ce03c(param_1[4],(string *)(param_1 + 0x1b5));
  if ((code *)param_1[0x1c] != (code *)0x0) {
    (*(code *)param_1[0x1c])(param_1[0x1a],0);
  }
  *(undefined4 *)(param_1 + 0x2d) = 0;
  (**(code **)(*param_1 + 0x138))(param_1);
  FUN_1001cd518(param_1 + 0x17);
  std::string::operator=((string *)(param_1 + 0x1b5),(string *)&DAT_101d91198);
  return;
}




void FUN_1001ce03c(long param_1,long *param_2)

{
  int iVar1;
  long *local_28;
  
  local_28 = (long *)*param_2;
  if (-1 < *(char *)((long)param_2 + 0x17)) {
    local_28 = param_2;
  }
  iVar1 = FUN_1001bc5c4(param_1 + 0x88,&local_28);
  if (iVar1 != 0) {
    local_28 = (long *)*param_2;
    if (-1 < *(char *)((long)param_2 + 0x17)) {
      local_28 = param_2;
    }
    FUN_1001bc674(param_1 + 0x88,&local_28);
  }
  return;
}




void FUN_1001ce0a8(long *param_1)

{
  *(undefined4 *)(param_1 + 0x2d) = 0;
  (**(code **)(*param_1 + 0x138))();
  FUN_1001cd518(param_1 + 0x17);
  std::string::operator=((string *)(param_1 + 0x1b5),(string *)&DAT_101d91198);
  return;
}




long * FUN_1001ce0e8(long param_1,long param_2)

{
  undefined8 ***pppuVar1;
  uint uVar2;
  long *plVar3;
  long *plVar4;
  undefined4 uVar5;
  undefined8 **local_48 [2];
  char local_31;
  
  FUN_10001549c(local_48,DAT_101d235e8);
  FUN_1001cd3a4(param_2,local_48);
  plVar3 = operator_new(0x130);
  pppuVar1 = (undefined8 ***)local_48[0];
  if (-1 < local_31) {
    pppuVar1 = local_48;
  }
  plVar4 = (long *)thunk_FUN_100650f44(plVar3,pppuVar1);
  (**(code **)(*plVar4 + 0x138))(plVar4,param_2);
  if (*(int *)(param_2 + 0x28) == 1) {
    uVar2 = *(uint *)((long)plVar3 + 0x84);
    if ((uVar2 & 0x7f80) != 0x5900) {
      *(uint *)((long)plVar3 + 0x84) = uVar2 & 0xffff8000 | uVar2 & 0x7f | 0x5900;
      FUN_1000200a0(plVar3);
    }
    FUN_100651654(0x3f4ccccd,plVar3);
  }
  else if ((*(int *)(param_2 + 0x28) == 0) &&
          (uVar2 = *(uint *)((long)plVar3 + 0x84), (uVar2 & 0x7f80) != 0x3300)) {
    *(uint *)((long)plVar3 + 0x84) = uVar2 & 0xffff8000 | uVar2 & 0x7f | 0x3300;
    FUN_1000200a0(plVar3);
  }
  if (*(char *)(param_1 + 0x150) == '\0') {
    uVar5 = *(undefined4 *)(param_1 + 0x14c);
  }
  else {
    uVar5 = (**(code **)(*plVar3 + 0x48))(plVar3);
    *(undefined4 *)(param_1 + 0x14c) = uVar5;
  }
  FUN_100651708(uVar5,plVar3,1);
  if (local_31 < '\0') {
    operator_delete(local_48[0]);
  }
  return plVar3;
}




void * FUN_1001ce220(long param_1)

{
  undefined **ppuVar1;
  uint uVar2;
  void *pvVar3;
  undefined8 uVar4;
  
  pvVar3 = operator_new(0xf0);
  uVar4 = thunk_FUN_100652c08();
  ppuVar1 = &PTR_s_build___MenuPartsCommon_tga_101854970;
  if (*(char *)(param_1 + 0xdc0) != '\0') {
    ppuVar1 = &PTR_s_build___HUDPartsCommon_atlas_10184e098;
  }
  FUN_100652cac(uVar4,*ppuVar1,"white_background");
  FUN_100652dd4(pvVar3,&DAT_10115a168,2);
  uVar2 = *(uint *)((long)pvVar3 + 0x84);
  if ((uVar2 & 0x7f80) != 0xc80) {
    *(uint *)((long)pvVar3 + 0x84) = uVar2 & 0xffff8000 | uVar2 & 0x7f | 0xc80;
    FUN_1000200a0(pvVar3);
  }
  FUN_10064e47c(*(undefined4 *)(param_1 + 0x14c),0x40000000,pvVar3);
  return pvVar3;
}




void * FUN_1001ce2c4(long param_1,long param_2)

{
  undefined **ppuVar1;
  undefined8 *puVar2;
  void *pvVar3;
  undefined8 uVar4;
  
  pvVar3 = operator_new(0xf0);
  uVar4 = thunk_FUN_100652c08();
  ppuVar1 = &PTR_s_build___MenuPartsCommon_tga_101854970;
  if (*(char *)(param_1 + 0xdc0) != '\0') {
    ppuVar1 = &PTR_s_build___HUDPartsCommon_atlas_10184e098;
  }
  puVar2 = *(undefined8 **)(param_2 + 0x10);
  if (-1 < *(char *)(param_2 + 0x27)) {
    puVar2 = (undefined8 *)(param_2 + 0x10);
  }
  FUN_100652cac(uVar4,*ppuVar1,puVar2);
  return pvVar3;
}




void FUN_1001ce334(long param_1)

{
  int iVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  
  uVar3 = (ulong)*(uint *)(param_1 + 0xd98);
  if (*(uint *)(param_1 + 0xd98) != 0) {
    uVar5 = 0;
    do {
      if (*(long *)(*(long *)(param_1 + 0xda0) + uVar5 * 8) != 0) {
        iVar1 = FUN_100642d08();
        if (iVar1 != 0) {
          FUN_1006423ec(*(undefined8 *)(*(long *)(param_1 + 0xda0) + uVar5 * 8),1);
        }
        lVar4 = *(long *)(param_1 + 0xda0);
        plVar2 = *(long **)(lVar4 + uVar5 * 8);
        if (plVar2 != (long *)0x0) {
          (**(code **)(*plVar2 + 8))();
          lVar4 = *(long *)(param_1 + 0xda0);
        }
        *(undefined8 *)(lVar4 + uVar5 * 8) = 0;
        uVar3 = (ulong)*(uint *)(param_1 + 0xd98);
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar3);
  }
  if (*(long *)(param_1 + 0xda0) != 0) {
    *(undefined4 *)(param_1 + 0xd98) = 0;
  }
  return;
}




void FUN_1001ce3bc(undefined1 param_1 [16],float param_2,long param_3)

{
  long lVar1;
  uint uVar2;
  undefined4 uVar3;
  bool bVar4;
  uint uVar5;
  long *plVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  undefined4 uVar10;
  float fVar11;
  undefined8 unaff_d9;
  undefined4 uVar12;
  undefined1 *local_58;
  
  uVar12 = (undefined4)((ulong)unaff_d9 >> 0x20);
  fVar9 = *(float *)(param_3 + 0x134);
  if (*(uint *)(param_3 + 0xd98) != 0) {
    plVar6 = *(long **)(*(long *)(param_3 + 0xda0) + (ulong)*(uint *)(param_3 + 0xd98) * 8 + -8);
    fVar11 = *(float *)((long)plVar6 + 0x44);
    uVar12 = 0;
    (**(code **)(*plVar6 + 0x50))();
    fVar9 = fVar9 + 16.0 + fVar11 + param_2;
  }
  plVar6 = (long *)(param_3 + 0xdc8);
  uVar2 = *(uint *)(param_3 + 0xe4c);
  uVar5 = FUN_100642d08(plVar6);
  if ((uVar2 >> 2 & 1) == 0) {
    if (uVar5 != 0) {
      FUN_1006423ec(plVar6,1);
    }
  }
  else {
    if ((uVar5 & 1) == 0) {
      FUN_100642bd8(param_3 + 0xd10,plVar6,1);
    }
    fVar11 = *(float *)(param_3 + 0x14c) * 0.5;
    uVar12 = 0;
    FUN_10064e3cc(plVar6);
    fVar9 = fVar9 + param_2 * 0.5;
    bVar4 = false;
    if ((*(float *)(param_3 + 0xe08) == fVar11) &&
       (bVar4 = false, !NAN(*(float *)(param_3 + 0xe0c)) && !NAN(fVar9))) {
      bVar4 = *(float *)(param_3 + 0xe0c) == fVar9;
    }
    if (!bVar4) {
      *(float *)(param_3 + 0xe08) = fVar11;
      *(float *)(param_3 + 0xe0c) = fVar9;
      FUN_1000200a0(plVar6);
    }
    local_58 = &DAT_3f0000003f000000;
    (**(code **)(*plVar6 + 0x28))(plVar6,&local_58);
  }
  lVar1 = param_3 + 0x170;
  if (*(char *)(param_3 + 0x167) == '\0') {
    fVar11 = *(float *)(param_3 + 0x14c);
    fVar8 = *(float *)(param_3 + 0x130);
    fVar9 = fVar8 * 2.0;
    FUN_1006425d0(param_3 + 0xd10,0,0,1,1);
    FUN_1001c2d98(fVar11 + fVar9,fVar8 + *(float *)(param_3 + 0x134) * 2.0,0xbf800000,lVar1,
                  *(undefined1 *)(param_3 + 0xdc0));
  }
  else {
    uVar3 = *(undefined4 *)(param_3 + 0x160);
    uVar10 = *(undefined4 *)(param_3 + 0x148);
    fVar11 = *(float *)(param_3 + 0x14c);
    fVar8 = *(float *)(param_3 + 0x130);
    fVar9 = fVar8 * 2.0;
    FUN_1006425d0(param_3 + 0xd10,0,0,1,1);
    FUN_1001c1270(uVar10,CONCAT44(uVar12,fVar11 + fVar9),fVar8 + *(float *)(param_3 + 0x134) * 2.0,
                  lVar1,uVar3,*(undefined1 *)(param_3 + 0xdc0));
  }
  FUN_1001c34ac(*(undefined4 *)(param_3 + 0x130),*(undefined4 *)(param_3 + 0x134),
                (undefined4)DAT_101dc1cb8,DAT_101dc1cb8._4_4_,lVar1,param_3 + 0xd10);
  uVar7 = FUN_1006425d0(lVar1,0,0,1,1);
  FUN_1006425d0(lVar1,0,0,1,1);
  FUN_10064e47c(uVar7,param_3);
  FUN_1001ce5d0(param_3);
  return;
}




void FUN_1001ce5d0(undefined1 param_1 [16],float param_2,long *param_3)

{
  long *plVar1;
  bool bVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  uint uVar13;
  undefined4 uVar14;
  float unaff_s10;
  float fVar15;
  float unaff_s11;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined1 auStack_88 [4];
  float local_84;
  float local_80;
  float local_7c;
  undefined8 local_70;
  undefined4 local_68;
  
  if (*(char *)((long)param_3 + 0x166) == '\0') {
    if (param_3[0x1e] != 0) {
      FUN_100345b68(param_3[0x1e],&local_70,0);
      goto LAB_1001ce624;
    }
    if (param_3[0x1d] != 0) {
      lVar3 = FUN_10003d5bc();
      fVar11 = *(float *)(lVar3 + 8);
      lVar3 = FUN_10003d5bc(param_3[4]);
      fVar6 = *(float *)(lVar3 + 8);
      lVar3 = FUN_10003d5bc(param_3[0x1d]);
      fVar12 = *(float *)(lVar3 + 0xc);
      lVar3 = FUN_10003d5bc(param_3[4]);
      fVar7 = *(float *)(lVar3 + 0xc);
      FUN_100641518(&local_70,(ulong)&local_70 | 4);
      fVar4 = (float)local_70;
      fVar8 = local_70._4_4_;
      fVar15 = *(float *)(param_3 + 0x27);
      fVar16 = *(float *)((long)param_3 + 0x13c);
      lVar3 = FUN_10003d5bc(param_3[0x1d]);
      fVar9 = *(float *)(lVar3 + 0x10);
      fVar17 = *(float *)(lVar3 + 0x14);
      fVar5 = (float)local_70;
      fVar10 = local_70._4_4_;
      param_2 = fVar9;
      if (-1.0 < *(float *)(param_3 + 0x2b)) {
        FUN_100642960(param_3 + 0x2e,&local_80,auStack_88);
        lVar3 = FUN_10003d5bc(param_3[0x1d]);
        fVar18 = local_84 + (*(float *)(lVar3 + 0xc) - *(float *)(param_3 + 0x2b));
        param_2 = local_84;
        if (0.0 < fVar18) {
          FUN_1006425d0(param_3 + 0x2e,0,0,1,1);
          fVar18 = fVar18 / local_84;
          if (fVar18 <= 0.0) {
            fVar18 = 0.0;
          }
          param_2 = *(float *)(param_3 + 0x29);
          *(float *)(param_3 + 0x29) = fVar18 + param_2;
          FUN_1001ceab4(param_3);
        }
      }
      if (-1.0 < *(float *)((long)param_3 + 0x15c)) {
        FUN_100642960(param_3 + 0x2e,&local_80,auStack_88);
        lVar3 = FUN_10003d5bc(param_3[0x1d]);
        fVar18 = local_7c + (*(float *)(lVar3 + 0xc) - *(float *)((long)param_3 + 0x15c));
        param_2 = local_7c;
        if (fVar18 < 0.0) {
          FUN_1006425d0(param_3 + 0x2e,0,0,1,1);
          local_7c = -fVar18 / local_7c;
          if (local_7c <= 0.0) {
            local_7c = 0.0;
          }
          param_2 = *(float *)(param_3 + 0x29);
          *(float *)(param_3 + 0x29) = param_2 - local_7c;
          FUN_1001ceab4(param_3);
        }
      }
      unaff_s10 = fVar15 + (fVar11 - fVar6) / fVar4;
      unaff_s11 = fVar16 + (fVar12 - fVar7) / fVar8;
      if ((*(char *)((long)param_3 + 0x167) != '\0') && (*(uint *)(param_3 + 0x2c) < 4)) {
        fVar9 = fVar9 / fVar5;
        fVar17 = fVar17 / fVar10;
        switch(*(uint *)(param_3 + 0x2c)) {
        case 0:
          (**(code **)(*(long *)param_3[0x1d] + 0x48))();
          param_2 = fVar17 * fVar5;
          unaff_s11 = -(param_2 * *(float *)(param_3[0x1d] + 0x54)) - (20.0 - unaff_s11);
          break;
        case 1:
          (**(code **)(*(long *)param_3[0x1d] + 0x48))();
          param_2 = 1.0 - *(float *)(param_3[0x1d] + 0x54);
          unaff_s11 = unaff_s11 + 20.0 + param_2 * fVar5 * fVar17;
          break;
        case 2:
          fVar4 = (float)(**(code **)(*(long *)param_3[0x1d] + 0x48))();
          param_2 = *(float *)(param_3[0x1d] + 0x50);
          unaff_s10 = -(fVar9 * fVar4 * param_2) - (20.0 - unaff_s10);
          break;
        case 3:
          fVar4 = (float)(**(code **)(*(long *)param_3[0x1d] + 0x48))();
          param_2 = 1.0 - *(float *)(param_3[0x1d] + 0x50);
          unaff_s10 = unaff_s10 + 20.0 + param_2 * fVar4 * fVar9;
        }
      }
    }
  }
  else {
    local_70 = param_3[0x1f];
    local_68 = (undefined4)param_3[0x20];
LAB_1001ce624:
    FUN_10011a174(&local_80,&local_70,0);
    param_2 = (float)(int)local_7c;
    unaff_s10 = *(float *)(param_3 + 0x27) + (float)(int)local_80;
    unaff_s11 = *(float *)((long)param_3 + 0x13c) + param_2;
  }
  if (*(char *)((long)param_3 + 0x167) == '\0') {
    plVar1 = param_3 + 0x2e;
    fVar4 = (float)FUN_10064e3cc(plVar1);
    fVar5 = *(float *)(param_3 + 0x38);
    fVar8 = *(float *)((long)param_3 + 0x1c4);
    fVar10 = fVar8 * param_2;
    bVar2 = false;
    if ((*(float *)(param_3 + 0x36) == fVar4 * fVar5) &&
       (bVar2 = false, !NAN(*(float *)((long)param_3 + 0x1b4)) && !NAN(fVar10))) {
      bVar2 = *(float *)((long)param_3 + 0x1b4) == fVar10;
    }
    if (!bVar2) {
      *(float *)(param_3 + 0x36) = fVar4 * fVar5;
      *(float *)((long)param_3 + 0x1b4) = fVar10;
      FUN_1000200a0(plVar1);
      fVar5 = *(float *)(param_3 + 0x38);
      fVar8 = *(float *)((long)param_3 + 0x1c4);
    }
    bVar2 = false;
    if ((fVar5 == (float)DAT_101dc1cb8) && (bVar2 = false, !NAN(fVar8) && !NAN(DAT_101dc1cb8._4_4_))
       ) {
      bVar2 = fVar8 == DAT_101dc1cb8._4_4_;
    }
    if (!bVar2) {
      param_3[0x38] = CONCAT44(DAT_101dc1cb8._4_4_,(float)DAT_101dc1cb8);
      FUN_1000200a0(plVar1);
    }
    fVar4 = unaff_s10 - fVar4 * *(float *)(param_3 + 0x28);
    fVar5 = unaff_s11 - param_2 * *(float *)((long)param_3 + 0x144);
    bVar2 = false;
    if ((*(float *)(param_3 + 8) == fVar4) &&
       (bVar2 = false, !NAN(*(float *)((long)param_3 + 0x44)) && !NAN(fVar5))) {
      bVar2 = *(float *)((long)param_3 + 0x44) == fVar5;
    }
    if (bVar2) {
      return;
    }
    *(float *)(param_3 + 8) = fVar4;
    *(float *)((long)param_3 + 0x44) = fVar5;
    FUN_1000200a0(param_3);
    return;
  }
  switch((int)param_3[0x2c]) {
  case 0:
    lVar3 = param_3[0x29];
    bVar2 = false;
    if ((*(float *)(param_3 + 8) == unaff_s10) &&
       (bVar2 = false, !NAN(*(float *)((long)param_3 + 0x44)) && !NAN(unaff_s11))) {
      bVar2 = *(float *)((long)param_3 + 0x44) == unaff_s11;
    }
    if (!bVar2) {
      *(float *)(param_3 + 8) = unaff_s10;
      *(float *)((long)param_3 + 0x44) = unaff_s11;
      FUN_1000200a0(param_3);
    }
    local_70 = CONCAT44(0x3f800000,(int)lVar3);
    break;
  case 1:
    uVar13 = *(uint *)(param_3 + 0x29);
    bVar2 = false;
    if ((*(float *)(param_3 + 8) == unaff_s10) &&
       (bVar2 = false, !NAN(*(float *)((long)param_3 + 0x44)) && !NAN(unaff_s11))) {
      bVar2 = *(float *)((long)param_3 + 0x44) == unaff_s11;
    }
    if (!bVar2) {
      *(float *)(param_3 + 8) = unaff_s10;
      *(float *)((long)param_3 + 0x44) = unaff_s11;
      FUN_1000200a0(param_3);
    }
    local_70 = (ulong)uVar13;
    break;
  case 2:
    uVar14 = (undefined4)param_3[0x29];
    bVar2 = false;
    if ((*(float *)(param_3 + 8) == unaff_s10) &&
       (bVar2 = false, !NAN(*(float *)((long)param_3 + 0x44)) && !NAN(unaff_s11))) {
      bVar2 = *(float *)((long)param_3 + 0x44) == unaff_s11;
    }
    if (!bVar2) {
      *(float *)(param_3 + 8) = unaff_s10;
      *(float *)((long)param_3 + 0x44) = unaff_s11;
      FUN_1000200a0(param_3);
    }
    local_70._0_4_ = 1.0;
    goto LAB_1001ce9e4;
  case 3:
    uVar14 = (undefined4)param_3[0x29];
    bVar2 = false;
    if ((*(float *)(param_3 + 8) == unaff_s10) &&
       (bVar2 = false, !NAN(*(float *)((long)param_3 + 0x44)) && !NAN(unaff_s11))) {
      bVar2 = *(float *)((long)param_3 + 0x44) == unaff_s11;
    }
    if (!bVar2) {
      *(float *)(param_3 + 8) = unaff_s10;
      *(float *)((long)param_3 + 0x44) = unaff_s11;
      FUN_1000200a0(param_3);
    }
    local_70._0_4_ = 0.0;
LAB_1001ce9e4:
    local_70 = CONCAT44(uVar14,(float)local_70);
    break;
  default:
    goto switchD_1001ce678_default;
  }
  (**(code **)(*param_3 + 0x28))(param_3,&local_70);
switchD_1001ce678_default:
  return;
}




void FUN_1001ceab4(long param_1)

{
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  
  uVar1 = *(undefined4 *)(param_1 + 0x160);
  uVar5 = *(undefined4 *)(param_1 + 0x148);
  fVar3 = *(float *)(param_1 + 0x14c);
  fVar4 = *(float *)(param_1 + 0x130);
  fVar2 = fVar4 * 2.0;
  FUN_1006425d0(param_1 + 0xd10,0,0,1,1);
  FUN_1001c1270(uVar5,fVar3 + fVar2,fVar4 + *(float *)(param_1 + 0x134) * 2.0,param_1 + 0x170,uVar1,
                *(undefined1 *)(param_1 + 0xdc0));
  FUN_1001c34ac(*(undefined4 *)(param_1 + 0x130),*(undefined4 *)(param_1 + 0x134),
                (undefined4)DAT_101dc1cb8,DAT_101dc1cb8._4_4_,param_1 + 0x170,param_1 + 0xd10);
  return;
}




void FUN_1001ceb5c(undefined8 param_1)

{
  FUN_1001cddf8(param_1,0);
  return;
}




long * FUN_1001ceb64(long *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  void *pvVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  
  puVar1 = (undefined8 *)FUN_1006421a8();
  *puVar1 = &PTR_thunk_FUN_1001cec4c_101466850;
  puVar1[0x11] = 0;
  puVar1[0x12] = 0;
  *(undefined4 *)(puVar1 + 0x13) = 0;
  puVar1[0x14] = 0;
  puVar1[0x15] = 0;
  *(undefined4 *)(puVar1 + 0x16) = 0xffffffff;
  *(undefined4 *)(puVar1 + 0x1c) = 0;
  *(char *)((long)puVar1 + 0xe4) = (char)param_2;
  lVar5 = 0xb8;
  do {
    pvVar2 = operator_new(0x2380);
    uVar3 = FUN_1001cd5ec(pvVar2,param_2);
    *(undefined8 *)((long)param_1 + lVar5) = uVar3;
    (**(code **)(*param_1 + 0x78))(param_1,pvVar2,1);
    *(uint *)(*(long *)((long)param_1 + lVar5) + 0x84) =
         *(uint *)(*(long *)((long)param_1 + lVar5) + 0x84) & 0xfffffffb;
    plVar4 = *(long **)((long)param_1 + lVar5);
    *(undefined4 *)(plVar4 + 0x2d) = 0;
    (**(code **)(*plVar4 + 0x138))(plVar4);
    FUN_1001cd518(plVar4 + 0x17);
    std::string::operator=((string *)(plVar4 + 0x1b5),(string *)&DAT_101d91198);
    lVar5 = lVar5 + 8;
  } while (lVar5 != 0xe0);
  return param_1;
}




long * thunk_FUN_1001ceb64(long *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  void *pvVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  
  puVar1 = (undefined8 *)FUN_1006421a8();
  *puVar1 = &PTR_thunk_FUN_1001cec4c_101466850;
  puVar1[0x11] = 0;
  puVar1[0x12] = 0;
  *(undefined4 *)(puVar1 + 0x13) = 0;
  puVar1[0x14] = 0;
  puVar1[0x15] = 0;
  *(undefined4 *)(puVar1 + 0x16) = 0xffffffff;
  *(undefined4 *)(puVar1 + 0x1c) = 0;
  *(char *)((long)puVar1 + 0xe4) = (char)param_2;
  lVar5 = 0xb8;
  do {
    pvVar2 = operator_new(0x2380);
    uVar3 = FUN_1001cd5ec(pvVar2,param_2);
    *(undefined8 *)((long)param_1 + lVar5) = uVar3;
    (**(code **)(*param_1 + 0x78))(param_1,pvVar2,1);
    *(uint *)(*(long *)((long)param_1 + lVar5) + 0x84) =
         *(uint *)(*(long *)((long)param_1 + lVar5) + 0x84) & 0xfffffffb;
    plVar4 = *(long **)((long)param_1 + lVar5);
    *(undefined4 *)(plVar4 + 0x2d) = 0;
    (**(code **)(*plVar4 + 0x138))(plVar4);
    FUN_1001cd518(plVar4 + 0x17);
    std::string::operator=((string *)(plVar4 + 0x1b5),(string *)&DAT_101d91198);
    lVar5 = lVar5 + 8;
  } while (lVar5 != 0xe0);
  return param_1;
}




void FUN_1001cec4c(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR_thunk_FUN_1001cec4c_101466850;
  lVar1 = 0xb8;
  do {
    if (*(long **)((long)param_1 + lVar1) != (long *)0x0) {
      (**(code **)(**(long **)((long)param_1 + lVar1) + 8))();
    }
    *(undefined8 *)((long)param_1 + lVar1) = 0;
    lVar1 = lVar1 + 8;
  } while (lVar1 != 0xe0);
  FUN_1001bca68(param_1 + 0x11);
  FUN_10064221c(param_1);
  return;
}




void thunk_FUN_1001cec4c(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR_thunk_FUN_1001cec4c_101466850;
  lVar1 = 0xb8;
  do {
    if (*(long **)((long)param_1 + lVar1) != (long *)0x0) {
      (**(code **)(**(long **)((long)param_1 + lVar1) + 8))();
    }
    *(undefined8 *)((long)param_1 + lVar1) = 0;
    lVar1 = lVar1 + 8;
  } while (lVar1 != 0xe0);
  FUN_1001bca68(param_1 + 0x11);
  FUN_10064221c(param_1);
  return;
}




void FUN_1001cecac(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1001cec4c();
  operator_delete(pvVar1);
  return;
}




void FUN_1001cecc0(float param_1,long param_2)

{
  int iVar1;
  byte *pbVar2;
  long lVar3;
  long lVar4;
  float fVar5;
  
  lVar4 = 0;
  do {
    lVar3 = *(long *)(param_2 + 0xb8 + lVar4);
    if (*(int *)(lVar3 + 0x168) == 1) {
      FUN_1001cddf8(lVar3,0);
    }
    else {
      if ((0.0 < *(float *)(lVar3 + 0x154)) &&
         (fVar5 = *(float *)(lVar3 + 0x154) - param_1, *(float *)(lVar3 + 0x154) = fVar5,
         fVar5 <= 0.0)) {
        *(undefined4 *)(lVar3 + 0x168) = 1;
        return;
      }
      if (((*(int *)(lVar3 + 0x168) == 2) && (*(long *)(lVar3 + 0x20) != 0)) &&
         ((*(byte *)(*(long *)(param_2 + 0x20) + 0x84) >> 2 & 1) != 0)) {
        iVar1 = FUN_10109c574();
        if (((iVar1 != 0) && (iVar1 = FUN_10109c588(), iVar1 != 0)) &&
           ((*(char *)(lVar3 + 0x164) != '\0' &&
            (pbVar2 = (byte *)FUN_10109c59c(0), (*pbVar2 & 1) == 0)))) {
          *(undefined4 *)(lVar3 + 0x168) = 1;
        }
        iVar1 = FUN_10109c4dc();
        if (((iVar1 != 0) && (*(char *)(lVar3 + 0x164) != '\0')) &&
           (iVar1 = FUN_10109c520(0), iVar1 != 0)) {
          *(undefined4 *)(lVar3 + 0x168) = 1;
        }
        if (*(char *)(lVar3 + 0x165) != '\0') {
          FUN_1001ce5d0(lVar3);
        }
      }
    }
    lVar4 = lVar4 + 8;
    if (lVar4 == 0x28) {
      return;
    }
  } while( true );
}




undefined8 FUN_1001cedd0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = 0;
  uVar2 = 0;
  do {
    lVar1 = *(long *)(param_1 + 0xb8 + lVar3);
    if (*(int *)(lVar1 + 0x168) == 2) {
      FUN_1001cddf8(lVar1,0);
      uVar2 = 1;
    }
    lVar3 = lVar3 + 8;
  } while (lVar3 != 0x28);
  return uVar2;
}




ulong FUN_1001cee20(long param_1,long *param_2)

{
  ulong uVar1;
  int *piVar2;
  long *local_38;
  
  local_38 = (long *)*param_2;
  if (-1 < *(char *)((long)param_2 + 0x17)) {
    local_38 = param_2;
  }
  uVar1 = FUN_1001bc5c4(param_1 + 0x88,&local_38);
  if ((int)uVar1 != 0) {
    local_38 = (long *)*param_2;
    if (-1 < *(char *)((long)param_2 + 0x17)) {
      local_38 = param_2;
    }
    piVar2 = (int *)FUN_1001bcb68(param_1 + 0x88,&local_38);
    uVar1 = (ulong)(*(int *)(*(long *)(param_1 + (long)*piVar2 * 8 + 0xb8) + 0x168) == 2);
  }
  return uVar1;
}




void FUN_1001ceeb0(long param_1,byte *param_2)

{
  byte *pbVar1;
  size_t sVar2;
  byte bVar3;
  size_t sVar4;
  int iVar5;
  ulong uVar6;
  byte *pbVar7;
  byte *pbVar8;
  long lVar9;
  long lVar10;
  
  lVar10 = 0;
  sVar4 = *(size_t *)(param_2 + 8);
  pbVar1 = *(byte **)param_2;
  if (-1 < (char)param_2[0x17]) {
    sVar4 = (ulong)param_2[0x17];
    pbVar1 = param_2;
  }
  do {
    lVar9 = *(long *)(param_1 + lVar10 * 8 + 0xb8);
    bVar3 = *(byte *)(lVar9 + 0xdbf);
    uVar6 = (ulong)bVar3;
    sVar2 = *(size_t *)(lVar9 + 0xdb0);
    if (-1 < (char)bVar3) {
      sVar2 = uVar6;
    }
    if (sVar2 == sVar4) {
      if ((char)bVar3 < '\0') {
        if ((sVar4 == 0) || (iVar5 = _memcmp(*(void **)(lVar9 + 0xda8),pbVar1,sVar4), iVar5 == 0)) {
LAB_1001cef70:
          if (*(int *)(lVar9 + 0x168) == 2) {
            FUN_1001cddf8(lVar9,0);
            return;
          }
        }
      }
      else {
        if (sVar4 == 0) goto LAB_1001cef70;
        if ((uint)*pbVar1 == ((uint)*(void **)(lVar9 + 0xda8) & 0xff)) {
          pbVar7 = (byte *)(lVar9 + 0xda9);
          pbVar8 = pbVar1;
          do {
            uVar6 = uVar6 - 1;
            pbVar8 = pbVar8 + 1;
            if (uVar6 == 0) goto LAB_1001cef70;
            bVar3 = *pbVar7;
            pbVar7 = pbVar7 + 1;
          } while (bVar3 == *pbVar8);
        }
      }
    }
    lVar10 = lVar10 + 1;
    if (lVar10 == 5) {
      return;
    }
  } while( true );
}




void FUN_1001cefb8(long param_1,long *param_2,undefined8 param_3)

{
  ulong uVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  long *local_48;
  
  local_48 = (long *)*param_2;
  if (-1 < *(char *)((long)param_2 + 0x17)) {
    local_48 = param_2;
  }
  uVar1 = FUN_1001bc5c4(param_1 + 0x88,&local_48);
  if ((uVar1 & 1) == 0) {
    puVar5 = (uint *)(param_1 + 0xe0);
    uVar4 = *puVar5;
    iVar3 = 5;
    do {
      lVar2 = *(long *)(param_1 + (long)(int)uVar4 * 8 + 0xb8);
      if (*(int *)(lVar2 + 0x168) == 0) {
        FUN_1001cd984(lVar2,param_2,param_3,*(undefined1 *)(param_1 + 0xe4));
        local_48 = (long *)*param_2;
        if (-1 < *(char *)((long)param_2 + 0x17)) {
          local_48 = param_2;
        }
        FUN_1001bc880(param_1 + 0x88,&local_48,puVar5);
        return;
      }
      uVar4 = (uVar4 + 1) % 5;
      *puVar5 = uVar4;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return;
}




void FUN_1001cf098(long param_1,long *param_2,undefined8 param_3)

{
  int iVar1;
  int *piVar2;
  long *local_38;
  
  local_38 = (long *)*param_2;
  if (-1 < *(char *)((long)param_2 + 0x17)) {
    local_38 = param_2;
  }
  iVar1 = FUN_1001bc5c4(param_1 + 0x88,&local_38);
  if (iVar1 != 0) {
    local_38 = (long *)*param_2;
    if (-1 < *(char *)((long)param_2 + 0x17)) {
      local_38 = param_2;
    }
    piVar2 = (int *)FUN_1001bcb68(param_1 + 0x88,&local_38);
    FUN_1001cd984(*(undefined8 *)(param_1 + (long)*piVar2 * 8 + 0xb8),param_2,param_3,
                  *(undefined1 *)(param_1 + 0xe4));
  }
  return;
}




void FUN_1001cf130(void)

{
  DAT_101e43270 = 0xff;
  DAT_101e43272 = 0xffff;
  DAT_101e43274 = 0xffff;
  DAT_101e43276 = 0xffbc9c44;
  DAT_101e4327a = 0xff1166f2;
  DAT_101e4327e = 0xffe0e0e0;
  DAT_101e43282 = 0xffa0a0a0;
  DAT_101e43286 = 0xff8c8c8c;
  DAT_101e4328a = 0xff322213;
  DAT_101e4328e = 0xff091911;
  DAT_101e43292 = 0xff170c19;
  DAT_101e43296 = 0xff241a14;
  DAT_101e4329a = 0xff14171c;
  DAT_101e4329e = 0xff221911;
  DAT_101e432a2 = 0xff1a1416;
  DAT_101e432a6 = 0xff121414;
  DAT_101e432aa = 0xff1a1809;
  DAT_101e432ae = 0xff141414;
  DAT_101e432b2 = 0xff141414;
  DAT_101e432b6 = 0xff2929c0;
  DAT_101e432ba = 0xff283082;
  DAT_101e432c2 = 0xff283082;
  DAT_101e432be = 0xff5262cc;
  DAT_101e432c6 = 0xff5262cc;
  DAT_101e432ca = 0xff745c42;
  DAT_101e432ce = 0xff184155;
  DAT_101e432d2 = 0xff92665e;
  DAT_101e432d6 = 0xffbc9c44;
  DAT_101e432da = 0xffbbae56;
  DAT_101e432de = 0xff8b7b01;
  DAT_101e432e2 = 0xff90b3ef;
  DAT_101e432e6 = 0xff728ebe;
  DAT_101e432ea = 0xff19459d;
  DAT_101e432ee = 0xff9d877b;
  DAT_101e432f2 = 0xffcbb1a3;
  DAT_101e432f6 = 0xff3f6fb5;
  DAT_101e432fa = 0xffc5c5c5;
  DAT_101e432fe = 0xff4fc1f1;
  DAT_101e43302 = 0xff606060;
  DAT_101e43306 = 0xffc5ff7b;
  DAT_101e4330a = 0xff5271eb;
  DAT_101e4330e = 0xfffae076;
  DAT_101e43312 = 0xff3ac8f6;
  DAT_101e43316 = 0xffaaaaaa;
  DAT_101e4331a = 0xffe19400;
  DAT_101e4331e = 0xffe19400;
  DAT_101e43322 = 0xffe550b2;
  DAT_101e43326 = 0xfff22ae8;
  DAT_101e4332a = 0xff005ae1;
  DAT_101e4332e = 0xff1addfa;
  DAT_101e43332 = 0xff2424b3;
  DAT_101e43336 = 0xff2424b3;
  DAT_101e4333a = 0xff646464;
  DAT_101e4333e = 0xff92665e;
  DAT_101e43342 = 0xff646037;
  DAT_101e4334c = 0xff1111a1;
  DAT_101e43348 = 0xffffffff;
  DAT_101e43354 = 0xffc8c8c8;
  DAT_101e43350 = 0xff321ee1;
  DAT_101e43358 = 0xff321ee1;
  DAT_101e4335c = 0xff7fe801;
  DAT_101e43360 = 0xffffffff;
  DAT_101e43364 = 0xff6259b3;
  DAT_101e43368 = 0xff506e73;
  DAT_101e4336c = 0xff9dbf86;
  DAT_101e43370 = 0xffa35244;
  DAT_101e43374 = 0xffca828e;
  DAT_101e43378 = 0xffa6a6a6;
  DAT_101e4337c = 0xffa6a6a6;
  DAT_101e43380 = 0xffffffff;
  DAT_101e43384 = 0xff88ea2f;
  DAT_101e43388 = 0xff8c8c8c;
  DAT_101e4338c = 0xffffb400;
  DAT_101e43390 = 0xffff00ff;
  DAT_101e43394 = 0xff00aded;
  DAT_101e43398 = 0xff33d3ff;
  DAT_101e4339c = 0xff7fe801;
  DAT_101e433a0 = 0xff282828;
  DAT_101e433a4 = 0xfff0f0f0;
  DAT_101e433a8 = 0xffa4781e;
  DAT_101e433ac = 0xffa6654b;
  DAT_101e433b0 = 0xff93435b;
  DAT_101e433b4 = 0xff387f9c;
  DAT_101e433b8 = 0xffa3781e;
  DAT_101e433bc = 0xffffd18a;
  DAT_101e433c0 = 0xffff61f7;
  DAT_101e433c4 = 0xff5de1f2;
  DAT_101e433c8 = 0xff80eaff;
  DAT_101e433cc = 0xff32e00e;
  DAT_101e433d0 = 0xff5a3c10;
  DAT_101e433d4 = 0xff330b03;
  DAT_101e433d8 = 0xff33031d;
  DAT_101e433dc = 0xff032433;
  DAT_101e433e0 = 0xff9e8e8d;
  DAT_101e433e8 = 0x4326000041900000;
  DAT_101e433f0 = 0x4326000041c00000;
  DAT_101d235e8 = PTR_s_build___Fonts_Brandon_Bold_24_fo_10184e218;
  return;
}




long * FUN_1001cf81c(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  undefined **ppuVar9;
  uint uVar10;
  int iVar11;
  undefined8 *puVar12;
  
  puVar12 = (undefined8 *)FUN_10064f204();
  *puVar12 = &PTR_FUN_101466950;
  puVar12 = puVar12 + 0x29;
  FUN_1006421a8(puVar12);
  param_1[0x29] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar1 = param_1 + 0x3a;
  thunk_FUN_100652c08(plVar1);
  plVar2 = param_1 + 0x58;
  thunk_FUN_100652c08(plVar2);
  plVar3 = param_1 + 0x76;
  thunk_FUN_100652c08(plVar3);
  plVar4 = param_1 + 0x94;
  thunk_FUN_100652c08(plVar4);
  plVar5 = param_1 + 0xb2;
  thunk_FUN_100652c08(plVar5);
  FUN_1006421a8(param_1 + 0xd0);
  param_1[0xd0] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar6 = param_1 + 0xe1;
  thunk_FUN_100652c08(plVar6);
  plVar7 = param_1 + 0xff;
  thunk_FUN_100650e64(plVar7);
  plVar8 = param_1 + 0x125;
  thunk_FUN_100650e64();
  param_1[0x14b] = 0;
  *(undefined4 *)(param_1 + 0x14c) = 0;
  (**(code **)(*param_1 + 0x78))(param_1,puVar12,1);
  FUN_100642bd8(puVar12,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar5,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar3,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0xd0,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar6,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar4,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar7,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar8,1);
  iVar11 = FUN_100126c88();
  FUN_100652cac(plVar1,PTR_s_build___MenuPartsCommon_tga_101854970,"black_background");
  uVar10 = *(uint *)((long)param_1 + 0x254);
  if ((uVar10 & 0x7f80) != 0x3300) {
    *(uint *)((long)param_1 + 0x254) = uVar10 & 0xffff8000 | uVar10 & 0x7f | 0x3300;
    FUN_1000200a0(plVar1);
  }
  FUN_100652cac(plVar2,PTR_s_build___MenuPartsCommon_tga_101854970,"black_background");
  if ((*(uint *)((long)param_1 + 0x344) & 0x7f80) != 0x3f80) {
    *(uint *)((long)param_1 + 0x344) = *(uint *)((long)param_1 + 0x344) & 0xffff807f | 0x3f80;
    FUN_1000200a0(plVar2);
  }
  FUN_100652cac(plVar5,PTR_s_build___MenuPartsCommon_tga_101854970,"black_background");
  if ((*(uint *)((long)param_1 + 0x614) & 0x7f80) != 0x3f80) {
    *(uint *)((long)param_1 + 0x614) = *(uint *)((long)param_1 + 0x614) & 0xffff807f | 0x3f80;
    FUN_1000200a0(plVar5);
  }
  FUN_100652cac(plVar3,PTR_s_build___MenuPartsCommon_tga_101854970,"black_background");
  if ((*(uint *)((long)param_1 + 0x434) & 0x7f80) != 0x3f80) {
    *(uint *)((long)param_1 + 0x434) = *(uint *)((long)param_1 + 0x434) & 0xffff807f | 0x3f80;
    FUN_1000200a0(plVar3);
  }
  FUN_100652cac(plVar4,PTR_s_build___MenuPartsCommon_tga_101854970,"black_background");
  if ((*(uint *)((long)param_1 + 0x524) & 0x7f80) != 0x3f80) {
    *(uint *)((long)param_1 + 0x524) = *(uint *)((long)param_1 + 0x524) & 0xffff807f | 0x3f80;
    FUN_1000200a0(plVar4);
  }
  FUN_100652cac(plVar6,PTR_s_build___MenuPartsCommon_tga_101854970,"black_background");
  if ((*(uint *)((long)param_1 + 0x78c) & 0x7f80) != 0x3f80) {
    *(uint *)((long)param_1 + 0x78c) = *(uint *)((long)param_1 + 0x78c) & 0xffff807f | 0x3f80;
    FUN_1000200a0(plVar6);
  }
  FUN_100651594(plVar7,PTR_s_build___Fonts_Brandon_Light_80_f_10184e1d0,&DAT_10115a168);
  FUN_1006513c0(plVar7,param_2);
  ppuVar9 = &PTR_s_build___Fonts_Brandon_Bold_60_fo_10184e240;
  if (iVar11 == 0) {
    ppuVar9 = &PTR_s_build___Fonts_Brandon_Bold_30_fo_10184e220;
  }
  FUN_100651038(plVar8,*ppuVar9);
  FUN_1006513c0(plVar8,param_3);
  uVar10 = *(uint *)((long)param_1 + 0x9ac);
  if ((uVar10 & 0x7f80) != 0x4c80) {
    *(uint *)((long)param_1 + 0x9ac) = uVar10 & 0xffff8000 | uVar10 & 0x7f | 0x4c80;
    FUN_1000200a0(plVar8);
  }
  return param_1;
}




void FUN_1001cfc0c(undefined1 param_1 [16],undefined4 param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  bool bVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  long lVar8;
  float fVar9;
  undefined8 local_58;
  
  uVar5 = (**(code **)(*param_3 + 0x48))();
  *(undefined4 *)(param_3 + 0x14b) = uVar5;
  *(undefined4 *)((long)param_3 + 0xa5c) = param_2;
  FUN_10064e48c(param_3 + 0x3a,param_3 + 0x14b);
  fVar9 = 18.0;
  FUN_10064e47c((int)param_3[0x14b],param_3 + 0x58);
  plVar1 = param_3 + 0x125;
  FUN_100651184(plVar1);
  plVar2 = param_3 + 0x94;
  FUN_10064e47c((int)param_3[0x14b],fVar9 + 16.0,plVar2);
  fVar6 = *(float *)((long)param_3 + 0xa5c);
  bVar4 = false;
  if ((*(float *)(param_3 + 0x9c) == 0.0) &&
     (bVar4 = false, !NAN(*(float *)((long)param_3 + 0x4e4)) && !NAN(fVar6))) {
    bVar4 = *(float *)((long)param_3 + 0x4e4) == fVar6;
  }
  if (!bVar4) {
    *(undefined4 *)(param_3 + 0x9c) = 0;
    *(float *)((long)param_3 + 0x4e4) = fVar6;
    FUN_1000200a0(plVar2);
  }
  local_58 = (undefined1 *)0x3f80000000000000;
  (**(code **)(param_3[0x94] + 0x28))(plVar2,&local_58);
  plVar2 = param_3 + 0xb2;
  fVar6 = (-34.0 - fVar9) + *(float *)((long)param_3 + 0xa5c);
  FUN_10064e47c(0x41900000,plVar2);
  if (*(float *)((long)param_3 + 0x5d4) != 18.0) {
    *(undefined4 *)((long)param_3 + 0x5d4) = 0x41900000;
    FUN_1000200a0(plVar2);
  }
  plVar3 = param_3 + 0x76;
  uVar5 = FUN_100652e60(plVar2);
  local_58 = (undefined1 *)CONCAT44(fVar6,uVar5);
  FUN_10064e48c(plVar3,&local_58);
  if ((*(float *)(param_3 + 0x7e) != *(float *)(param_3 + 0x14b)) ||
     (*(float *)((long)param_3 + 0x3f4) != 18.0)) {
    *(float *)(param_3 + 0x7e) = *(float *)(param_3 + 0x14b);
    *(undefined4 *)((long)param_3 + 0x3f4) = 0x41900000;
    FUN_1000200a0(plVar3);
  }
  local_58 = (undefined1 *)0x3f800000;
  (**(code **)(param_3[0x76] + 0x28))(plVar3,&local_58);
  plVar2 = param_3 + 0xe1;
  fVar6 = *(float *)(param_3 + 0x14b);
  fVar7 = -36.0;
  plVar3 = param_3 + 0xff;
  FUN_100651184(plVar3);
  FUN_10064e47c(fVar6 + -36.0,fVar7 + 40.0,plVar2);
  if ((*(float *)(param_3 + 0xe9) != 18.0) || (*(float *)((long)param_3 + 0x74c) != 18.0)) {
    lVar8 = NEON_fmov(0x41900000,4);
    param_3[0xe9] = lVar8;
    FUN_1000200a0(plVar2);
  }
  local_58 = (undefined1 *)0x0;
  (**(code **)(param_3[0xe1] + 0x28))(plVar2,&local_58);
  fVar7 = 0.0;
  FUN_10065179c(*(float *)(param_3 + 0x14b) + -46.0,0,0x3f800000,plVar3);
  fVar6 = *(float *)(param_3 + 0x14b);
  FUN_100652e60(plVar2);
  fVar7 = fVar7 * 0.5 + 18.0;
  if ((*(float *)(param_3 + 0x107) != fVar6 * 0.5) || (*(float *)((long)param_3 + 0x83c) != fVar7))
  {
    *(float *)(param_3 + 0x107) = fVar6 * 0.5;
    *(float *)((long)param_3 + 0x83c) = fVar7;
    FUN_1000200a0(plVar3);
  }
  local_58 = &DAT_3f0000003f000000;
  (**(code **)(param_3[0xff] + 0x28))(plVar3,&local_58);
  FUN_10065179c(*(float *)(param_3 + 0x14b) + -46.0,0,0x3f800000,plVar1);
  fVar6 = *(float *)((long)param_3 + 0xa5c) - (fVar9 + 16.0) * 0.5;
  if ((*(float *)(param_3 + 0x12d) != *(float *)(param_3 + 0x14b) * 0.5) ||
     (*(float *)((long)param_3 + 0x96c) != fVar6)) {
    *(float *)(param_3 + 0x12d) = *(float *)(param_3 + 0x14b) * 0.5;
    *(float *)((long)param_3 + 0x96c) = fVar6;
    FUN_1000200a0(plVar1);
  }
  local_58 = &DAT_3f0000003f000000;
  (**(code **)(*plVar1 + 0x28))(plVar1,&local_58);
  return;
}




long * FUN_1001cff14(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined4 param_5)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_1001cf81c();
  *puVar1 = &PTR_FUN_101466ab8;
  puVar1 = puVar1 + 0x14d;
  thunk_FUN_100190c14(puVar1,1);
  thunk_FUN_1004e439c(param_1 + 0x266,param_2);
  thunk_FUN_1004e439c(param_1 + 0x268,param_3);
  thunk_FUN_1004e439c(param_1 + 0x26a,param_4);
  *(undefined4 *)((long)param_1 + 0x1364) = param_5;
  *(undefined4 *)(param_1 + 0x14c) = 1;
  FUN_100642bd8(param_1 + 0xd0,puVar1,1);
  FUN_1001910b4(puVar1,param_1 + 0x26a);
  *(int *)(param_1 + 0x26c) = *(int *)((long)param_1 + 0x1364) / 10 + 1;
  (**(code **)(*param_1 + 0x138))(param_1);
  return param_1;
}




long * thunk_FUN_1001cff14(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                          undefined4 param_5)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_1001cf81c();
  *puVar1 = &PTR_FUN_101466ab8;
  puVar1 = puVar1 + 0x14d;
  thunk_FUN_100190c14(puVar1,1);
  thunk_FUN_1004e439c(param_1 + 0x266,param_2);
  thunk_FUN_1004e439c(param_1 + 0x268,param_3);
  thunk_FUN_1004e439c(param_1 + 0x26a,param_4);
  *(undefined4 *)((long)param_1 + 0x1364) = param_5;
  *(undefined4 *)(param_1 + 0x14c) = 1;
  FUN_100642bd8(param_1 + 0xd0,puVar1,1);
  FUN_1001910b4(puVar1,param_1 + 0x26a);
  *(int *)(param_1 + 0x26c) = *(int *)((long)param_1 + 0x1364) / 10 + 1;
  (**(code **)(*param_1 + 0x138))(param_1);
  return param_1;
}

