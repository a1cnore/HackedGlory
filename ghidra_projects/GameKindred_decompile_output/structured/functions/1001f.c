// functions/1001f — 656 functions
#include "GameKindred.h"




void FUN_1001f0014(long param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1001eff80(param_1 + -0x28);
  operator_delete(pvVar1);
  return;
}




void FUN_1001f002c(void)

{
  FUN_10002f320();
  FUN_10003196c();
  return;
}




void FUN_1001f0040(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_40 [32];
  
  FUN_1001025b4();
  FUN_10052b3f4();
  uVar1 = FUN_100644a94("UI::EVENT_CLOSE_FREEPOPUPNODE");
  FUN_100644aec(auStack_40,uVar1,0);
  FUN_100644c34(*(undefined8 *)(param_1 + 8),auStack_40,1);
  return;
}




void FUN_1001f0098(undefined8 param_1)

{
  ulong uVar1;
  long lVar2;
  
  lVar2 = FUN_10002f320();
  uVar1 = *(ulong *)(lVar2 + 0xe1a0);
  if (-1 < (char)*(byte *)(lVar2 + 0xe1af)) {
    uVar1 = (ulong)*(byte *)(lVar2 + 0xe1af);
  }
  if (uVar1 != 0) {
    return;
  }
  FUN_1001eff30(param_1);
  return;
}




void FUN_1001f00e8(long param_1)

{
  FUN_1001f0098(param_1 + -0x10);
  return;
}




void FUN_1001f00f0(undefined8 param_1,long param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  cVar1 = *(char *)(param_2 + 0x28);
  uVar2 = FUN_10002f320();
  if (cVar1 != '\0') {
    FUN_100031670(uVar2,param_2,param_2 + 0x18);
    return;
  }
  FUN_100030fdc();
  uVar2 = FUN_1004e0150("GENERIC_DIALOG_ERROR",0);
  uVar3 = FUN_1004e0150("MARKET_GOLD_STORE_TRANSACTION_ERROR_BODY",0);
  uVar4 = FUN_1004e0150("GENERIC_DIALOG_OKAY",0);
  FUN_1001e3090(uVar2,uVar3,uVar4,0,0);
  return;
}




void thunk_FUN_1001f00f0(void)

{
  FUN_1001f00f0();
  return;
}




void FUN_1001f0180(undefined8 param_1,byte *param_2)

{
  size_t sVar1;
  size_t sVar2;
  byte bVar3;
  ulong uVar4;
  int iVar5;
  byte *pbVar6;
  byte *pbVar7;
  ulong uVar8;
  
  bVar3 = param_2[0x17];
  uVar8 = (ulong)bVar3;
  sVar1 = *(size_t *)(param_2 + 8);
  if (-1 < (char)bVar3) {
    sVar1 = uVar8;
  }
  sVar2 = DAT_101d238b8;
  if (-1 < (char)DAT_101d238c7) {
    sVar2 = (ulong)DAT_101d238c7;
  }
  if (sVar1 == sVar2) {
    pbVar6 = *(byte **)param_2;
    if (-1 < (char)bVar3) {
      pbVar6 = param_2;
    }
    pbVar7 = DAT_101d238b0;
    if (-1 < (char)DAT_101d238c7) {
      pbVar7 = (byte *)&DAT_101d238b0;
    }
    if ((char)bVar3 < '\0') {
      if ((sVar1 == 0) || (iVar5 = _memcmp(pbVar6,pbVar7,sVar1), iVar5 == 0)) goto LAB_1001f0360;
    }
    else {
      if (sVar1 == 0) goto LAB_1001f0360;
      pbVar6 = param_2;
      uVar4 = uVar8;
      if ((uint)*pbVar7 == ((uint)*(byte **)param_2 & 0xff)) {
        do {
          pbVar7 = pbVar7 + 1;
          pbVar6 = pbVar6 + 1;
          if (uVar4 - 1 == 0) goto LAB_1001f0360;
          uVar4 = uVar4 - 1;
        } while (*pbVar6 == *pbVar7);
      }
    }
  }
  sVar2 = DAT_101d238d0;
  if (-1 < (char)DAT_101d238df) {
    sVar2 = (ulong)DAT_101d238df;
  }
  if (sVar1 == sVar2) {
    pbVar6 = *(byte **)param_2;
    if (-1 < (char)bVar3) {
      pbVar6 = param_2;
    }
    pbVar7 = DAT_101d238c8;
    if (-1 < (char)DAT_101d238df) {
      pbVar7 = (byte *)&DAT_101d238c8;
    }
    if ((char)bVar3 < '\0') {
      if ((sVar1 == 0) || (iVar5 = _memcmp(pbVar6,pbVar7,sVar1), iVar5 == 0)) goto LAB_1001f0360;
    }
    else {
      if (sVar1 == 0) goto LAB_1001f0360;
      pbVar6 = param_2;
      uVar4 = uVar8;
      if ((uint)*pbVar7 == ((uint)*(byte **)param_2 & 0xff)) {
        do {
          pbVar7 = pbVar7 + 1;
          pbVar6 = pbVar6 + 1;
          if (uVar4 - 1 == 0) goto LAB_1001f0360;
          uVar4 = uVar4 - 1;
        } while (*pbVar6 == *pbVar7);
      }
    }
  }
  sVar2 = DAT_101d238e8;
  if (-1 < (char)DAT_101d238f7) {
    sVar2 = (ulong)DAT_101d238f7;
  }
  if (sVar1 == sVar2) {
    pbVar6 = *(byte **)param_2;
    if (-1 < (char)bVar3) {
      pbVar6 = param_2;
    }
    pbVar7 = DAT_101d238e0;
    if (-1 < (char)DAT_101d238f7) {
      pbVar7 = (byte *)&DAT_101d238e0;
    }
    if ((char)bVar3 < '\0') {
      if ((sVar1 == 0) || (iVar5 = _memcmp(pbVar6,pbVar7,sVar1), iVar5 == 0)) goto LAB_1001f0360;
    }
    else {
      if (sVar1 == 0) {
LAB_1001f0360:
        FUN_1001eff30(param_1);
        return;
      }
      if ((uint)*pbVar7 == ((uint)*(byte **)param_2 & 0xff)) {
        do {
          uVar8 = uVar8 - 1;
          pbVar7 = pbVar7 + 1;
          param_2 = param_2 + 1;
          if (uVar8 == 0) goto LAB_1001f0360;
        } while (*param_2 == *pbVar7);
      }
    }
  }
  return;
}




void FUN_1001f0374(long param_1)

{
  FUN_1001f0180(param_1 + -0x28);
  return;
}




void FUN_1001f037c(undefined8 param_1)

{
  ulong uVar1;
  long lVar2;
  
  lVar2 = FUN_10002f320();
  uVar1 = *(ulong *)(lVar2 + 0xe1a0);
  if (-1 < (char)*(byte *)(lVar2 + 0xe1af)) {
    uVar1 = (ulong)*(byte *)(lVar2 + 0xe1af);
  }
  if (uVar1 != 0) {
    return;
  }
  FUN_1001eff30(param_1);
  return;
}




undefined8 * FUN_1001f03cc(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR____cxa_pure_virtual_10146b690;
  operator_new(0x12bb8);
  lVar1 = thunk_FUN_10029c8b8();
  *(undefined8 **)(lVar1 + 0x148) = param_1;
  *param_1 = &PTR_FUN_10146b668;
  param_1[1] = lVar1;
  return param_1;
}




undefined8 * FUN_1001f0418(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  
  *param_1 = &PTR_FUN_10146b668;
  lVar2 = FUN_10030c6a0();
  if (*(uint *)(lVar2 + 0x30) != 0) {
    lVar3 = *(long *)(lVar2 + 0x38);
    lVar2 = (ulong)*(uint *)(lVar2 + 0x30) << 5;
    do {
      puVar1 = (undefined8 *)(lVar3 + 8);
      lVar3 = lVar3 + 0x20;
      if ((undefined8 *)*puVar1 == param_1) {
        FUN_1001b2a18();
        break;
      }
      lVar2 = lVar2 + -0x20;
    } while (lVar2 != 0);
  }
  *param_1 = &PTR____cxa_pure_virtual_10146b690;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return param_1;
}




undefined8 * thunk_FUN_1001f0418(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  
  *param_1 = &PTR_FUN_10146b668;
  lVar2 = FUN_10030c6a0();
  if (*(uint *)(lVar2 + 0x30) != 0) {
    lVar3 = *(long *)(lVar2 + 0x38);
    lVar2 = (ulong)*(uint *)(lVar2 + 0x30) << 5;
    do {
      puVar1 = (undefined8 *)(lVar3 + 8);
      lVar3 = lVar3 + 0x20;
      if ((undefined8 *)*puVar1 == param_1) {
        FUN_1001b2a18();
        break;
      }
      lVar2 = lVar2 + -0x20;
    } while (lVar2 != 0);
  }
  *param_1 = &PTR____cxa_pure_virtual_10146b690;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return param_1;
}




void FUN_1001f04a4(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1001f0418();
  operator_delete(pvVar1);
  return;
}




void FUN_1001f04b8(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_10030c6a0();
  FUN_10030ced4(uVar1,param_2,param_2 + 0x18,param_2 + 0x28,param_2 + 0x40,param_2 + 0x58);
  return;
}




undefined8 * FUN_1001f04ec(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR____cxa_pure_virtual_10146ba88;
  operator_new(0x1368);
  lVar1 = thunk_FUN_10029f534();
  param_1[1] = lVar1;
  *(undefined8 **)(lVar1 + 0xb8) = param_1;
  FUN_10014f4a0(param_1 + 2);
  *param_1 = &PTR_FUN_10146b6b8;
  param_1[2] = &PTR_FUN_10146b6f0;
  FUN_10029f6e8(param_1[1]);
  FUN_10015d3ec();
  FUN_100166fd8();
  return param_1;
}




undefined8 * thunk_FUN_1001f04ec(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR____cxa_pure_virtual_10146ba88;
  operator_new(0x1368);
  lVar1 = thunk_FUN_10029f534();
  param_1[1] = lVar1;
  *(undefined8 **)(lVar1 + 0xb8) = param_1;
  FUN_10014f4a0(param_1 + 2);
  *param_1 = &PTR_FUN_10146b6b8;
  param_1[2] = &PTR_FUN_10146b6f0;
  FUN_10029f6e8(param_1[1]);
  FUN_10015d3ec();
  FUN_100166fd8();
  return param_1;
}




void FUN_1001f055c(long param_1)

{
  FUN_1001f0580();
  FUN_10029f6f0(*(undefined8 *)(param_1 + 8));
  return;
}




void FUN_1001f0580(long param_1)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined8 local_50;
  undefined8 uStack_48;
  
  iVar1 = FUN_10015d3f8();
  if (iVar1 != 0) {
    lVar2 = FUN_10015d3ec();
    local_50 = 0;
    uStack_48 = 0;
    if (*(uint *)(lVar2 + 0x53d8) != 0) {
      uVar3 = 0;
      lVar4 = 0x48;
      do {
        FUN_1001f0644(&local_50,*(long *)(lVar2 + 0x53e0) + lVar4);
        uVar3 = uVar3 + 1;
        lVar4 = lVar4 + 0x1a8;
      } while (uVar3 < *(uint *)(lVar2 + 0x53d8));
    }
    FUN_10029f6e0(*(undefined8 *)(param_1 + 8),&local_50);
    FUN_10017cd14(&local_50,1);
  }
  return;
}




void FUN_1001f061c(long param_1)

{
  FUN_1001f0580(param_1 + -0x10);
  FUN_10029f6f0(*(undefined8 *)(param_1 + -8));
  return;
}




void FUN_1001f0644(uint *param_1,undefined8 param_2)

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
    FUN_10017cec8(param_1,uVar2);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  FUN_10017cfd8(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 0x158 + -0x158,param_2);
  return;
}




void FUN_1001f06c8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_100104d30();
  uVar1 = FUN_10015d3ec();
  FUN_100167138(uVar1,param_2);
  return;
}




void FUN_1001f06f0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_10015d3ec();
  FUN_10016727c(uVar1,param_2);
  return;
}




undefined8 * FUN_1001f0714(undefined8 *param_1)

{
  FUN_10014f51c(param_1 + 2);
  *param_1 = &PTR____cxa_pure_virtual_10146ba88;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return param_1;
}




void FUN_1001f0760(undefined8 *param_1)

{
  FUN_10014f51c(param_1 + 2);
  *param_1 = &PTR____cxa_pure_virtual_10146ba88;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  operator_delete(param_1);
  return;
}




void FUN_1001f07a8(long param_1)

{
  FUN_10014f51c();
  *(undefined ***)(param_1 + -0x10) = &PTR____cxa_pure_virtual_10146ba88;
  if (*(long **)(param_1 + -8) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + -8) + 8))();
  }
  *(undefined8 *)(param_1 + -8) = 0;
  return;
}




void FUN_1001f07ec(long param_1)

{
  FUN_10014f51c();
  *(undefined8 *)(param_1 + -0x10) = &PTR____cxa_pure_virtual_10146ba88;
  if (*(long **)(param_1 + -8) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + -8) + 8))();
  }
  operator_delete((undefined8 *)(param_1 + -0x10));
  return;
}




undefined8 * FUN_1001f0830(undefined8 *param_1)

{
  long lVar1;
  void *local_48 [2];
  char local_31;
  
  *param_1 = &PTR____cxa_pure_virtual_10146beb0;
  operator_new(0x4e38);
  lVar1 = thunk_FUN_10029fee8();
  param_1[1] = lVar1;
  *(undefined8 **)(lVar1 + 0xb8) = param_1;
  FUN_10014f4a0(param_1 + 2);
  *param_1 = &PTR_FUN_10146bab8;
  param_1[2] = &PTR_FUN_10146bb18;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  FUN_1001f12dc();
  thunk_FUN_100016500(param_1 + 0x13,"GUILD.JOIN_BONUS",1);
  *(undefined4 *)(param_1 + 0x17) = 1;
  *(undefined1 *)((long)param_1 + 0xbc) = 0;
  FUN_1000f1880(local_48);
  std::string::operator=((string *)(param_1 + 0xb),(string *)local_48);
  if (local_31 < '\0') {
    operator_delete(local_48[0]);
  }
  return param_1;
}




undefined8 * thunk_FUN_1001f0830(undefined8 *param_1)

{
  long lVar1;
  void *apvStack_48 [2];
  char cStack_31;
  
  *param_1 = &PTR____cxa_pure_virtual_10146beb0;
  operator_new(0x4e38);
  lVar1 = thunk_FUN_10029fee8();
  param_1[1] = lVar1;
  *(undefined8 **)(lVar1 + 0xb8) = param_1;
  FUN_10014f4a0(param_1 + 2);
  *param_1 = &PTR_FUN_10146bab8;
  param_1[2] = &PTR_FUN_10146bb18;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  FUN_1001f12dc();
  thunk_FUN_100016500(param_1 + 0x13,"GUILD.JOIN_BONUS",1);
  *(undefined4 *)(param_1 + 0x17) = 1;
  *(undefined1 *)((long)param_1 + 0xbc) = 0;
  FUN_1000f1880(apvStack_48);
  std::string::operator=((string *)(param_1 + 0xb),(string *)apvStack_48);
  if (cStack_31 < '\0') {
    operator_delete(apvStack_48[0]);
  }
  return param_1;
}




void FUN_1001f090c(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_10015d3f8();
  if (iVar1 != 0) {
    uVar2 = FUN_10015d3ec();
    FUN_100167808(uVar2,*(undefined4 *)(param_1 + 0xb8),param_1 + 0x28);
  }
  FUN_100143bec(FUN_1001f0960,FUN_1001f0964);
  *(undefined1 *)(param_1 + 0xbc) = 1;
  FUN_1001f0968(param_1);
  return;
}




void FUN_1001f0960(void)

{
  return;
}




void FUN_1001f0964(void)

{
  return;
}




void FUN_1001f0968(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_208 [32];
  undefined1 auStack_1e8 [16];
  undefined1 auStack_1d8 [16];
  undefined1 auStack_1c8 [240];
  string asStack_d8 [152];
  undefined4 local_40;
  
  iVar1 = FUN_1001f0a90();
  if (iVar1 != 0) {
    FUN_1000165f0(param_1 + 0x98,1);
    if (*(char *)(param_1 + 0xbc) != '\0') {
      thunk_FUN_100253c74(auStack_1e8);
      uVar2 = FUN_1004e0150("MENU_GUILD_TAB_JOIN_BONUS_POPUP_TITLE",0);
      FUN_1000153b4(auStack_1e8,uVar2);
      uVar2 = FUN_1004e0150("MENU_GUILD_TAB_JOIN_BONUS_POPUP_DIALOG",0);
      FUN_1000153b4(auStack_1d8,uVar2);
      uVar2 = FUN_1004e0150("GENERIC_DIALOG_OKAY",0);
      FUN_1000153b4(auStack_1c8,uVar2);
      std::string::operator=(asStack_d8,(string *)&DAT_101e43a90);
      local_40 = 0x3fd9999a;
      FUN_100644aec(auStack_208,DAT_101d2365c,auStack_1e8);
      FUN_100644c34(*(undefined8 *)(param_1 + 8),auStack_208,1);
      FUN_10013078c("guildJoinBonus",1);
      FUN_10016c310(auStack_1e8);
    }
    return;
  }
  FUN_1000165f0(param_1 + 0x98,0);
  return;
}




void FUN_1001f0a88(long param_1)

{
  *(undefined1 *)(param_1 + 0xbc) = 0;
  return;
}




byte FUN_1001f0a90(void)

{
  size_t sVar1;
  size_t sVar2;
  undefined8 *puVar3;
  bool bVar4;
  bool bVar5;
  byte bVar6;
  int iVar7;
  int *piVar8;
  long lVar9;
  ulong uVar10;
  byte *pbVar11;
  byte *pbVar12;
  void *pvVar13;
  
  piVar8 = (int *)FUN_100143bc4();
  if (((char)piVar8[6] == '\0') && (*piVar8 == 0)) {
    bVar5 = piVar8[1] == 0;
  }
  else {
    bVar5 = false;
  }
  iVar7 = FUN_10015d3f8();
  if (iVar7 != 0) {
    lVar9 = FUN_10015d3ec();
    bVar6 = *(byte *)(lVar9 + 0x548f);
    uVar10 = (ulong)bVar6;
    sVar1 = *(size_t *)(lVar9 + 0x5480);
    if (-1 < (char)bVar6) {
      sVar1 = uVar10;
    }
    sVar2 = DAT_101d911a0;
    if (-1 < (char)DAT_101d911a8._7_1_) {
      sVar2 = (ulong)DAT_101d911a8._7_1_;
    }
    if (sVar1 == sVar2) {
      pvVar13 = *(void **)(lVar9 + 0x5478);
      puVar3 = pvVar13;
      if (-1 < (char)bVar6) {
        puVar3 = (undefined8 *)(lVar9 + 0x5478);
      }
      pbVar12 = DAT_101d91198;
      if (-1 < (char)DAT_101d911a8._7_1_) {
        pbVar12 = (byte *)&DAT_101d91198;
      }
      if ((char)bVar6 < '\0') {
        if (sVar1 != 0) {
          iVar7 = _memcmp(puVar3,pbVar12,sVar1);
          bVar4 = iVar7 == 0;
          goto LAB_1001f0b6c;
        }
      }
      else if (sVar1 != 0) {
        if ((uint)*pbVar12 == ((uint)pvVar13 & 0xff)) {
          pbVar11 = (byte *)(lVar9 + 0x5479);
          do {
            uVar10 = uVar10 - 1;
            pbVar12 = pbVar12 + 1;
            bVar4 = uVar10 == 0;
            if (uVar10 == 0) break;
            bVar6 = *pbVar11;
            pbVar11 = pbVar11 + 1;
          } while (bVar6 == *pbVar12);
          goto LAB_1001f0b6c;
        }
        goto LAB_1001f0b68;
      }
      bVar4 = true;
      goto LAB_1001f0b6c;
    }
  }
LAB_1001f0b68:
  bVar4 = false;
LAB_1001f0b6c:
  bVar6 = FUN_10013086c("guildJoinBonus");
  return bVar4 & (bVar6 ^ 0xff) & bVar5;
}




void thunk_FUN_1001f0968(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_208 [32];
  undefined1 auStack_1e8 [16];
  undefined1 auStack_1d8 [16];
  undefined1 auStack_1c8 [240];
  string asStack_d8 [152];
  undefined4 uStack_40;
  
  iVar1 = FUN_1001f0a90();
  if (iVar1 != 0) {
    FUN_1000165f0(param_1 + 0x98,1);
    if (*(char *)(param_1 + 0xbc) != '\0') {
      thunk_FUN_100253c74(auStack_1e8);
      uVar2 = FUN_1004e0150("MENU_GUILD_TAB_JOIN_BONUS_POPUP_TITLE",0);
      FUN_1000153b4(auStack_1e8,uVar2);
      uVar2 = FUN_1004e0150("MENU_GUILD_TAB_JOIN_BONUS_POPUP_DIALOG",0);
      FUN_1000153b4(auStack_1d8,uVar2);
      uVar2 = FUN_1004e0150("GENERIC_DIALOG_OKAY",0);
      FUN_1000153b4(auStack_1c8,uVar2);
      std::string::operator=(asStack_d8,(string *)&DAT_101e43a90);
      uStack_40 = 0x3fd9999a;
      FUN_100644aec(auStack_208,DAT_101d2365c,auStack_1e8);
      FUN_100644c34(*(undefined8 *)(param_1 + 8),auStack_208,1);
      FUN_10013078c("guildJoinBonus",1);
      FUN_10016c310(auStack_1e8);
    }
    return;
  }
  FUN_1000165f0(param_1 + 0x98,0);
  return;
}




void FUN_1001f0bc0(long param_1)

{
  FUN_1001f0968(param_1 + -0x10);
  return;
}




void FUN_1001f0bc8(long param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  void *pvVar3;
  long lVar4;
  ulong uVar5;
  void *local_240;
  undefined8 uStack_238;
  long lStack_230;
  void *local_228;
  undefined8 local_220;
  long lStack_218;
  void *local_210;
  undefined8 uStack_208;
  long local_200;
  void *pvStack_1f8;
  undefined8 uStack_1f0;
  long lStack_1e8;
  undefined1 auStack_1d0 [8];
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
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
  undefined8 local_78;
  long local_70;
  char *local_68;
  char *pcStack_60;
  undefined4 local_58;
  
  local_78 = 0;
  local_70 = 0;
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
  local_68 = *(char **)(param_2 + 0x28);
  if (-1 < *(char *)(param_2 + 0x3f)) {
    local_68 = (char *)(param_2 + 0x28);
  }
  local_c0 = local_c8;
  pcStack_60 = local_68;
  FUN_1000f7bd0(&local_e0,&local_68);
  if (((local_88 != 0) || (local_d0 != 3)) ||
     (lVar1 = FUN_1000e86c0(&local_e0,"results"), local_e0 + (local_d8 & 0xffffffff) * 0x30 == lVar1
     )) goto LAB_1001f0e4c;
  local_58 = 0x100005;
  local_68 = "results";
  pcStack_60 = (char *)0x7;
  lVar1 = FUN_1000e87dc(&local_e0,&local_68);
  if (*(int *)(lVar1 + 0x10) != 4) goto LAB_1001f0e4c;
  local_58 = 0x100005;
  local_68 = "results";
  pcStack_60 = (char *)0x7;
  plVar2 = (long *)FUN_1000e87dc(&local_e0,&local_68);
  lVar1 = plVar2[1];
  uStack_100 = 0;
  local_108 = 0;
  uStack_110 = 0;
  local_118 = 0;
  uStack_120 = 0;
  local_128 = 0;
  uStack_130 = 0;
  local_138 = 0;
  local_f8 = 0;
  uStack_140 = 0;
  local_148 = 0;
  uStack_150 = 0;
  local_158 = 0;
  uStack_160 = 0;
  local_168 = 0;
  uStack_170 = 0;
  local_178 = 0;
  uStack_180 = 0;
  local_188 = 0;
  uStack_190 = 0;
  local_198 = 0;
  uStack_1a0 = 0;
  local_1a8 = 0;
  uStack_1b0 = 0;
  local_1b8 = 0;
  uStack_1c0 = 0;
  local_1c8 = 0;
  uStack_238 = 0;
  local_240 = (void *)0x0;
  local_228 = (void *)0x0;
  lStack_230 = 0;
  lStack_218 = 0;
  local_220 = 0;
  uStack_208 = 0;
  local_210 = (void *)0x0;
  pvStack_1f8 = (void *)0x0;
  local_200 = 0;
  lStack_1e8 = 0;
  uStack_1f0 = 0;
  FUN_10015a14c(auStack_1d0);
  FUN_100159fc8(&local_240);
  FUN_1001f0e98(&local_78,(int)lVar1,&local_240);
  FUN_100143e0c(auStack_1d0);
  if (lStack_1e8 < 0) {
    operator_delete(pvStack_1f8);
  }
  if (local_200 < 0) {
    operator_delete(local_210);
  }
  if (lStack_218 < 0) {
    operator_delete(local_228);
  }
  if (lStack_230 < 0) {
    operator_delete(local_240);
  }
  if ((int)plVar2[1] != 0) {
    lVar4 = 0;
    lVar1 = 0;
    uVar5 = 0;
    do {
      FUN_10051c93c(*plVar2 + lVar1,local_70 + lVar4);
      uVar5 = uVar5 + 1;
      lVar1 = lVar1 + 0x18;
      lVar4 = lVar4 + 0x158;
    } while (uVar5 < *(uint *)(plVar2 + 1));
  }
  lVar1 = FUN_1000e86c0(&local_e0,"page");
  if (local_e0 + (local_d8 & 0xffffffff) * 0x30 == lVar1) {
LAB_1001f0e38:
    *(undefined4 *)(param_1 + 0xb8) = 1;
  }
  else {
    local_58 = 0x100005;
    local_68 = "page";
    pcStack_60 = (char *)0x4;
    lVar1 = FUN_1000e87dc(&local_e0,&local_68);
    if ((*(byte *)(lVar1 + 0x11) >> 2 & 1) == 0) goto LAB_1001f0e38;
  }
  FUN_1002a0408(*(undefined8 *)(param_1 + 8),&local_78);
LAB_1001f0e4c:
  if (local_c0 != (undefined8 *)0x0) {
    pvVar3 = (void *)FUN_1000f7b54();
    operator_delete(pvVar3);
  }
  _free(local_a8);
  if (pvStack_b0 != (void *)0x0) {
    operator_delete(pvStack_b0);
  }
  FUN_10017cd14(&local_78,1);
  return;
}




void FUN_1001f0fb0(long param_1)

{
  FUN_1001f0bc8(param_1 + -0x10);
  return;
}




void FUN_1001f0fb8(long param_1)

{
  undefined8 uVar1;
  
  *(int *)(param_1 + 0xb8) = *(int *)(param_1 + 0xb8) + 1;
  FUN_1002a0434(*(undefined8 *)(param_1 + 8));
  uVar1 = FUN_10015d3ec();
  FUN_100167808(uVar1,*(undefined4 *)(param_1 + 0xb8),param_1 + 0x28);
  return;
}




void FUN_1001f0ff4(undefined8 param_1)

{
  FUN_10021a474(param_1,&DAT_101873a48);
  return;
}




void FUN_1001f1000(void)

{
  FUN_10021af14(&DAT_101873a48);
  return;
}




void FUN_1001f100c(void)

{
  FUN_100219bd0(&DAT_101873a48);
  return;
}




void FUN_1001f1018(long param_1,string *param_2)

{
  string *psVar1;
  string *psVar2;
  undefined8 uVar3;
  
  *(undefined4 *)(param_1 + 0xb8) = 1;
  std::string::operator=((string *)(param_1 + 0x28),param_2);
  std::string::operator=((string *)(param_1 + 0x40),param_2 + 0x18);
  std::string::operator=((string *)(param_1 + 0x58),param_2 + 0x30);
  std::string::operator=((string *)(param_1 + 0x70),param_2 + 0x48);
  uVar3 = *(undefined8 *)(param_2 + 0x65);
  *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(param_2 + 0x60);
  *(undefined8 *)(param_1 + 0x8d) = uVar3;
  FUN_1002a0434(*(undefined8 *)(param_1 + 8));
  uVar3 = FUN_10015d3ec();
  FUN_100167808(uVar3,*(undefined4 *)(param_1 + 0xb8),(string *)(param_1 + 0x28));
  psVar1 = *(string **)(param_2 + 0x48);
  if (-1 < (char)param_2[0x5f]) {
    psVar1 = param_2 + 0x48;
  }
  psVar2 = *(string **)(param_2 + 0x30);
  if (-1 < (char)param_2[0x47]) {
    psVar2 = param_2 + 0x30;
  }
  FUN_100104c14(psVar1,psVar2,*(undefined4 *)(param_2 + 100),*(undefined4 *)(param_2 + 0x60));
  return;
}




long FUN_1001f10d4(long param_1)

{
  return param_1 + 0x28;
}




undefined8 * FUN_1001f10dc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10146bab8;
  param_1[2] = &PTR_FUN_10146bb18;
  thunk_FUN_10001653c(param_1 + 0x13);
  if (*(char *)((long)param_1 + 0x87) < '\0') {
    operator_delete((void *)param_1[0xe]);
  }
  if (*(char *)((long)param_1 + 0x6f) < '\0') {
    operator_delete((void *)param_1[0xb]);
  }
  if (*(char *)((long)param_1 + 0x57) < '\0') {
    operator_delete((void *)param_1[8]);
  }
  if (*(char *)((long)param_1 + 0x3f) < '\0') {
    operator_delete((void *)param_1[5]);
  }
  FUN_10014f51c(param_1 + 2);
  *param_1 = &PTR____cxa_pure_virtual_10146beb0;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return param_1;
}




void FUN_1001f1188(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10146bab8;
  param_1[2] = &PTR_FUN_10146bb18;
  thunk_FUN_10001653c(param_1 + 0x13);
  if (*(char *)((long)param_1 + 0x87) < '\0') {
    operator_delete((void *)param_1[0xe]);
  }
  if (*(char *)((long)param_1 + 0x6f) < '\0') {
    operator_delete((void *)param_1[0xb]);
  }
  if (*(char *)((long)param_1 + 0x57) < '\0') {
    operator_delete((void *)param_1[8]);
  }
  if (*(char *)((long)param_1 + 0x3f) < '\0') {
    operator_delete((void *)param_1[5]);
  }
  FUN_10014f51c(param_1 + 2);
  *param_1 = &PTR____cxa_pure_virtual_10146beb0;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  operator_delete(param_1);
  return;
}




void FUN_1001f1230(undefined8 *param_1)

{
  param_1[-2] = &PTR_FUN_10146bab8;
  *param_1 = &PTR_FUN_10146bb18;
  thunk_FUN_10001653c(param_1 + 0x11);
  if (*(char *)((long)param_1 + 0x77) < '\0') {
    operator_delete((void *)param_1[0xc]);
  }
  if (*(char *)((long)param_1 + 0x5f) < '\0') {
    operator_delete((void *)param_1[9]);
  }
  if (*(char *)((long)param_1 + 0x47) < '\0') {
    operator_delete((void *)param_1[6]);
  }
  if (*(char *)((long)param_1 + 0x2f) < '\0') {
    operator_delete((void *)param_1[3]);
  }
  FUN_10014f51c(param_1);
  param_1[-2] = &PTR____cxa_pure_virtual_10146beb0;
  if ((long *)param_1[-1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[-1] + 8))();
  }
  param_1[-1] = 0;
  return;
}




void FUN_1001f12d4(long param_1)

{
  FUN_1001f1188(param_1 + -0x10);
  return;
}




void FUN_1001f12dc(string *param_1)

{
  void *local_38 [2];
  char local_21;
  
  FUN_10001549c(local_38,"");
  std::string::operator=(param_1,(string *)local_38);
  if (local_21 < '\0') {
    operator_delete(local_38[0]);
  }
  FUN_10001549c(local_38,"");
  std::string::operator=(param_1 + 0x18,(string *)local_38);
  if (local_21 < '\0') {
    operator_delete(local_38[0]);
  }
  FUN_10001549c(local_38,"");
  std::string::operator=(param_1 + 0x30,(string *)local_38);
  if (local_21 < '\0') {
    operator_delete(local_38[0]);
  }
  std::string::operator=(param_1 + 0x48,(string *)&DAT_101d917f8);
  *(undefined4 *)(param_1 + 0x60) = 0xffffffff;
  *(undefined4 *)(param_1 + 100) = 0xfffffffe;
  *(undefined4 *)(param_1 + 0x68) = 3;
  param_1[0x6c] = (string)0x0;
  return;
}




void FUN_1001f13bc(void)

{
  DAT_101e43918 = 0xff;
  DAT_101e4391a = 0xffff;
  DAT_101e4391c = 0xffff;
  DAT_101e4391e = 0xffbc9c44;
  DAT_101e43922 = 0xff1166f2;
  DAT_101e43926 = 0xffe0e0e0;
  DAT_101e4392a = 0xffa0a0a0;
  DAT_101e4392e = 0xff8c8c8c;
  DAT_101e43932 = 0xff322213;
  DAT_101e43936 = 0xff091911;
  DAT_101e4393a = 0xff170c19;
  DAT_101e4393e = 0xff241a14;
  DAT_101e43942 = 0xff14171c;
  DAT_101e43946 = 0xff221911;
  DAT_101e4394a = 0xff1a1416;
  DAT_101e4394e = 0xff121414;
  DAT_101e43952 = 0xff1a1809;
  DAT_101e43956 = 0xff141414;
  DAT_101e4395a = 0xff141414;
  DAT_101e4395e = 0xff2929c0;
  DAT_101e43962 = 0xff283082;
  DAT_101e43966 = 0xff5262cc;
  DAT_101e4396a = 0xff283082;
  DAT_101e4396e = 0xff5262cc;
  DAT_101e43972 = 0xff745c42;
  DAT_101e43976 = 0xff184155;
  DAT_101e4397a = 0xff92665e;
  DAT_101e4397e = 0xffbc9c44;
  DAT_101e43982 = 0xffbbae56;
  DAT_101e43986 = 0xff8b7b01;
  DAT_101e4398a = 0xff90b3ef;
  DAT_101e4398e = 0xff728ebe;
  DAT_101e43992 = 0xff19459d;
  DAT_101e43996 = 0xff9d877b;
  DAT_101e4399a = 0xffcbb1a3;
  DAT_101e4399e = 0xff3f6fb5;
  DAT_101e439a2 = 0xffc5c5c5;
  DAT_101e439a6 = 0xff4fc1f1;
  DAT_101e439aa = 0xff606060;
  DAT_101e439ae = 0xffc5ff7b;
  DAT_101e439b2 = 0xff5271eb;
  DAT_101e439b6 = 0xfffae076;
  DAT_101e439ba = 0xff3ac8f6;
  DAT_101e439be = 0xffaaaaaa;
  DAT_101e439c2 = 0xffe19400;
  DAT_101e439c6 = 0xffe19400;
  DAT_101e439ca = 0xffe550b2;
  DAT_101e439ce = 0xfff22ae8;
  DAT_101e439d2 = 0xff005ae1;
  DAT_101e439d6 = 0xff1addfa;
  DAT_101e439da = 0xff2424b3;
  DAT_101e439de = 0xff2424b3;
  DAT_101e439e2 = 0xff646464;
  DAT_101e439e6 = 0xff92665e;
  DAT_101e439ea = 0xff646037;
  DAT_101e439f4 = 0xff1111a1;
  DAT_101e439f8 = 0xff321ee1;
  DAT_101e439fc = 0xffc8c8c8;
  DAT_101e43a00 = 0xff321ee1;
  DAT_101e43a0c = 0xff6259b3;
  DAT_101e43a10 = 0xff506e73;
  DAT_101e43a14 = 0xff9dbf86;
  DAT_101e439f0 = 0xffffffff;
  DAT_101e43a18 = 0xffa35244;
  DAT_101e43a04 = 0xff7fe801;
  DAT_101e43a1c = 0xffca828e;
  DAT_101e43a08 = 0xffffffff;
  DAT_101e43a20 = 0xffa6a6a6;
  DAT_101e43a24 = 0xffa6a6a6;
  DAT_101e43a28 = 0xffffffff;
  DAT_101e43a2c = 0xff88ea2f;
  DAT_101e43a30 = 0xff8c8c8c;
  DAT_101e43a34 = 0xffffb400;
  DAT_101e43a38 = 0xffff00ff;
  DAT_101e43a3c = 0xff00aded;
  DAT_101e43a40 = 0xff33d3ff;
  DAT_101e43a44 = 0xff7fe801;
  DAT_101e43a48 = 0xff282828;
  DAT_101e43a4c = 0xfff0f0f0;
  DAT_101e43a50 = 0xffa4781e;
  DAT_101e43a54 = 0xffa6654b;
  DAT_101e43a58 = 0xff93435b;
  DAT_101e43a5c = 0xff387f9c;
  DAT_101e43a60 = 0xffa3781e;
  DAT_101e43a64 = 0xffffd18a;
  DAT_101e43a68 = 0xffff61f7;
  DAT_101e43a6c = 0xff5de1f2;
  DAT_101e43a70 = 0xff80eaff;
  DAT_101e43a74 = 0xff32e00e;
  DAT_101e43a78 = 0xff5a3c10;
  DAT_101e43a7c = 0xff330b03;
  DAT_101e43a80 = 0xff33031d;
  DAT_101e43a84 = 0xff032433;
  DAT_101e43a88 = 0xff9e8e8d;
  FUN_10001549c(&DAT_101e43a90,"[STATICCONTENTURL]beb37e0ac49fbe12a18ff135e2cd4ebc.jpg");
  ___cxa_atexit(FUN_1000e6204,&DAT_101e43a90,0x100000000);
  return;
}




undefined8 * FUN_1001f1ab4(undefined8 *param_1)

{
  long lVar1;
  undefined8 *local_30;
  code *pcStack_28;
  
  *param_1 = &PTR____cxa_pure_virtual_10146bf68;
  operator_new(0x3268);
  lVar1 = thunk_FUN_1002a0778();
  param_1[1] = lVar1;
  *(undefined8 **)(lVar1 + 0x9b8) = param_1;
  FUN_100340aa4(param_1 + 2);
  *param_1 = &PTR_FUN_10146bf00;
  param_1[2] = &PTR_FUN_10146bf38;
  pcStack_28 = thunk_FUN_1001f1bf8;
  local_30 = param_1;
  FUN_100643618(0x3f000000,&local_30,0,1);
  return param_1;
}




undefined8 * thunk_FUN_1001f1ab4(undefined8 *param_1)

{
  long lVar1;
  undefined8 *puStack_30;
  code *pcStack_28;
  
  *param_1 = &PTR____cxa_pure_virtual_10146bf68;
  operator_new(0x3268);
  lVar1 = thunk_FUN_1002a0778();
  param_1[1] = lVar1;
  *(undefined8 **)(lVar1 + 0x9b8) = param_1;
  FUN_100340aa4(param_1 + 2);
  *param_1 = &PTR_FUN_10146bf00;
  param_1[2] = &PTR_FUN_10146bf38;
  pcStack_28 = thunk_FUN_1001f1bf8;
  puStack_30 = param_1;
  FUN_100643618(0x3f000000,&puStack_30,0,1);
  return param_1;
}




undefined8 * FUN_1001f1b3c(undefined8 *param_1)

{
  undefined8 *local_30;
  code *pcStack_28;
  
  *param_1 = &PTR_FUN_10146bf00;
  param_1[2] = &PTR_FUN_10146bf38;
  pcStack_28 = thunk_FUN_1001f1bf8;
  local_30 = param_1;
  FUN_100643a8c(&local_30);
  FUN_100340b20(param_1 + 2);
  *param_1 = &PTR____cxa_pure_virtual_10146bf68;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return param_1;
}




void thunk_FUN_1001f1b3c(void)

{
  FUN_1001f1b3c();
  return;
}




void FUN_1001f1bc0(long param_1)

{
  FUN_1001f1b3c(param_1 + -0x10);
  return;
}




void FUN_1001f1bc8(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1001f1b3c();
  operator_delete(pvVar1);
  return;
}




void FUN_1001f1bdc(long param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1001f1b3c(param_1 + -0x10);
  operator_delete(pvVar1);
  return;
}




void FUN_1001f1bf8(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  
  lVar1 = FUN_100341a24();
  uVar3 = (ulong)*(uint *)(lVar1 + 0x38);
  if (0 < (int)*(uint *)(lVar1 + 0x38)) {
    lVar4 = 0;
    if (uVar3 != 0) {
      lVar4 = *(long *)(lVar1 + 0x30) / (long)uVar3;
    }
    lVar2 = FUN_1004f1a74(0);
    lVar4 = uVar3 + (lVar4 * uVar3 - lVar2);
    FUN_1002a0df0(*(undefined8 *)(param_1 + 8),lVar4);
    if ((lVar4 < 1) && (*(char *)(lVar1 + 0x3d) != '\0')) {
      FUN_100341944();
      return;
    }
  }
  return;
}




void FUN_1001f1c88(long param_1)

{
  char cVar1;
  undefined1 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  
  lVar4 = FUN_100341a24();
  cVar1 = *(char *)(lVar4 + 0x3d);
  uVar6 = *(undefined8 *)(param_1 + 8);
  lVar4 = FUN_100341a24();
  if (cVar1 != '\0') {
    lVar7 = (long)*(int *)(lVar4 + 0x38);
    lVar3 = 0;
    if (lVar7 != 0) {
      lVar3 = *(long *)(lVar4 + 0x30) / lVar7;
    }
    lVar4 = FUN_1004f1a74(0);
    FUN_1002a0e58(uVar6,lVar7 + (lVar3 * lVar7 - lVar4));
    return;
  }
  uVar2 = *(undefined1 *)(lVar4 + 0x3c);
  uVar5 = FUN_100341a24();
  FUN_1002a0f1c(uVar6,uVar2,uVar5);
  return;
}




void FUN_1001f1d0c(long param_1)

{
  FUN_1001f1c88(param_1 + -0x10);
  return;
}




void FUN_1001f1d14(undefined8 param_1,int param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int *piVar4;
  void *local_60 [2];
  char local_49;
  void *local_48 [2];
  char local_31;
  
  if (param_2 != 0) {
    piVar4 = (int *)(param_3 + 0x18);
    if (*piVar4 != 0) {
      FUN_100109708(piVar4);
      uVar1 = FUN_10002f320();
      FUN_10001549c(local_48,"HeroChestTile");
      FUN_10001549c(local_60,"opulent");
      FUN_1000315c4(uVar1,local_48,local_60);
      if (local_49 < '\0') {
        operator_delete(local_60[0]);
      }
      if (local_31 < '\0') {
        operator_delete(local_48[0]);
      }
      uVar1 = FUN_10002f320();
      FUN_10001549c(local_48,"HeroChestTile");
      FUN_100031670(uVar1,local_48,piVar4);
      if (local_31 < '\0') {
        operator_delete(local_48[0]);
      }
      goto LAB_1001f1e5c;
    }
  }
  uVar1 = FUN_10002f320();
  FUN_10001549c(local_48,"HeroChestTile");
  FUN_100031740(uVar1,local_48);
  if (local_31 < '\0') {
    operator_delete(local_48[0]);
  }
  uVar1 = FUN_1004e0150("GENERIC_DIALOG_ERROR",0);
  uVar2 = FUN_1004e0150("MENU_HERO_CHEST_ERROR_GENERIC",0);
  uVar3 = FUN_1004e0150("GENERIC_DIALOG_OKAY",0);
  FUN_1001e3090(uVar1,uVar2,uVar3,param_1,0);
LAB_1001f1e5c:
  FUN_100341944();
  return;
}




void FUN_1001f1e74(long param_1)

{
  FUN_1001f1d14(param_1 + -0x10);
  return;
}




void FUN_1001f1e7c(void)

{
  long lVar1;
  
  lVar1 = FUN_100341a24();
  if (*(char *)(lVar1 + 0x3c) != '\0') {
    FUN_100341a34();
    return;
  }
  return;
}




void thunk_FUN_1001f1bf8(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  
  lVar1 = FUN_100341a24();
  uVar3 = (ulong)*(uint *)(lVar1 + 0x38);
  if (0 < (int)*(uint *)(lVar1 + 0x38)) {
    lVar4 = 0;
    if (uVar3 != 0) {
      lVar4 = *(long *)(lVar1 + 0x30) / (long)uVar3;
    }
    lVar2 = FUN_1004f1a74(0);
    lVar4 = uVar3 + (lVar4 * uVar3 - lVar2);
    FUN_1002a0df0(*(undefined8 *)(param_1 + 8),lVar4);
    if ((lVar4 < 1) && (*(char *)(lVar1 + 0x3d) != '\0')) {
      FUN_100341944();
      return;
    }
  }
  return;
}




undefined8 * FUN_1001f1ea4(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR____cxa_pure_virtual_10146c368;
  operator_new(0x1e0);
  lVar1 = thunk_FUN_1002a14a8();
  param_1[1] = lVar1;
  *(undefined8 **)(lVar1 + 200) = param_1;
  FUN_10014f4a0(param_1 + 2);
  *param_1 = &PTR_FUN_10146bf90;
  param_1[2] = &PTR_FUN_10146bfd0;
  param_1[5] = 0;
  param_1[6] = 0;
  return param_1;
}




undefined8 * thunk_FUN_1001f1ea4(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR____cxa_pure_virtual_10146c368;
  operator_new(0x1e0);
  lVar1 = thunk_FUN_1002a14a8();
  param_1[1] = lVar1;
  *(undefined8 **)(lVar1 + 200) = param_1;
  FUN_10014f4a0(param_1 + 2);
  *param_1 = &PTR_FUN_10146bf90;
  param_1[2] = &PTR_FUN_10146bfd0;
  param_1[5] = 0;
  param_1[6] = 0;
  return param_1;
}




undefined8 * FUN_1001f1f08(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10146bf90;
  param_1[2] = &PTR_FUN_10146bfd0;
  FUN_10001629c(param_1 + 5,1);
  FUN_10014f51c(param_1 + 2);
  *param_1 = &PTR____cxa_pure_virtual_10146c368;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return param_1;
}




void thunk_FUN_1001f1f08(void)

{
  FUN_1001f1f08();
  return;
}




void FUN_1001f1f7c(long param_1)

{
  FUN_1001f1f08(param_1 + -0x10);
  return;
}




void FUN_1001f1f84(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1001f1f08();
  operator_delete(pvVar1);
  return;
}




void FUN_1001f1f98(long param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1001f1f08(param_1 + -0x10);
  operator_delete(pvVar1);
  return;
}




void FUN_1001f1fb0(long param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  void *local_58 [2];
  char local_41;
  
  if (*(int *)(param_1 + 0x28) == 0) {
    plVar1 = (long *)FUN_10034bdb4();
    plVar1 = (long *)*plVar1;
    puVar2 = (undefined8 *)*plVar1;
    while (puVar2 != (undefined8 *)0x0) {
      plVar1 = plVar1 + 1;
      if (*(char *)(puVar2 + 1) != '\0') {
        uVar3 = *puVar2;
        uVar4 = *(undefined8 *)(param_1 + 8);
        FUN_10001549c(local_58,uVar3);
        FUN_1002a17bc(uVar4,local_58);
        if (local_41 < '\0') {
          operator_delete(local_58[0]);
        }
        FUN_10001549c(local_58,uVar3);
        FUN_10001617c((int *)(param_1 + 0x28),local_58);
        if (local_41 < '\0') {
          operator_delete(local_58[0]);
        }
      }
      puVar2 = (undefined8 *)*plVar1;
    }
  }
  return;
}




void FUN_1001f206c(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined4 local_34;
  
  iVar1 = FUN_10015d3f8();
  if (iVar1 != 0) {
    if (*(int *)(param_1 + 0x28) != 0) {
      lVar6 = 0;
      uVar4 = 0;
      do {
        uVar5 = *(undefined8 *)(param_1 + 8);
        uVar2 = FUN_10015d3ec();
        lVar3 = *(long *)(param_1 + 0x30) + lVar6;
        if (*(char *)(lVar3 + 0x17) < '\0') {
          lVar3 = *(long *)(*(long *)(param_1 + 0x30) + lVar6);
        }
        local_34 = FUN_1001665d4(uVar2,lVar3,0);
        FUN_1002a1938(uVar5,uVar4,&local_34);
        uVar4 = uVar4 + 1;
        lVar6 = lVar6 + 0x18;
      } while (uVar4 < *(uint *)(param_1 + 0x28));
    }
    FUN_1001f2104(param_1);
  }
  return;
}




void FUN_1001f2104(long param_1)

{
  long lVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  undefined8 *puVar10;
  ulong uVar11;
  undefined8 *puVar12;
  string *this;
  undefined4 *puVar13;
  string *this_00;
  undefined8 *puVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined4 local_2a8;
  undefined4 uStack_2a4;
  char local_291;
  undefined **local_290;
  undefined1 auStack_288 [16];
  void *local_278 [2];
  char local_261;
  undefined8 local_260 [6];
  void *local_230 [2];
  char local_219;
  undefined8 local_218;
  void *local_210;
  undefined8 local_208;
  void *local_200;
  undefined4 local_1f8 [2];
  undefined **local_1f0;
  undefined1 auStack_1e8 [16];
  void *local_1d8 [2];
  char local_1c1;
  undefined8 auStack_1c0 [6];
  void *local_190 [2];
  char local_179;
  undefined8 local_178;
  void *local_170;
  undefined8 local_168;
  void *local_160;
  undefined4 auStack_158 [2];
  undefined1 auStack_150 [8];
  uint local_148;
  long local_140;
  undefined1 auStack_108 [24];
  undefined1 auStack_f0 [24];
  undefined1 auStack_d8 [96];
  long local_78;
  char local_6b;
  
  uVar4 = FUN_100131560();
  if (((uVar4 & 1) == 0) && (*(int *)(param_1 + 0x28) != 0)) {
    uVar4 = 0;
    do {
      FUN_1000eb06c(auStack_150);
      iVar3 = FUN_100136d44(*(long *)(param_1 + 0x30) + uVar4 * 0x18,auStack_150);
      if (iVar3 != 0) {
        FUN_10014237c(&local_1f0);
        FUN_10014237c(&local_290);
        if (local_148 != 0) {
          lVar9 = 0;
          uVar11 = 0;
          do {
            lVar2 = local_140;
            lVar1 = local_140 + lVar9 + 0x30;
            FUN_10001549c(&local_2a8,"silver");
            uVar5 = FUN_1000e7d68(lVar1,&local_2a8);
            if (local_291 < '\0') {
              operator_delete((void *)CONCAT44(uStack_2a4,local_2a8));
            }
            puVar6 = auStack_1e8;
            puVar10 = auStack_1c0;
            puVar12 = &local_178;
            this = (string *)local_190;
            puVar13 = auStack_158;
            this_00 = (string *)local_1d8;
            puVar14 = &local_168;
            if ((uVar5 & 1) == 0) {
              FUN_10001549c(&local_2a8,"gold");
              iVar3 = FUN_1000e7d68(lVar1,&local_2a8);
              if (local_291 < '\0') {
                operator_delete((void *)CONCAT44(uStack_2a4,local_2a8));
              }
              puVar6 = auStack_288;
              puVar10 = local_260;
              puVar12 = &local_218;
              this = (string *)local_230;
              puVar13 = local_1f8;
              this_00 = (string *)local_278;
              puVar14 = &local_208;
              if (iVar3 != 0) goto LAB_1001f22a4;
            }
            else {
LAB_1001f22a4:
              lVar2 = lVar2 + lVar9;
              FUN_100146c30(puVar6,lVar2 + 8);
              std::string::operator=(this_00,(string *)(lVar2 + 0x18));
              uVar17 = *(undefined8 *)(lVar2 + 0x48);
              uVar16 = *(undefined8 *)(lVar2 + 0x40);
              uVar15 = *(undefined8 *)(lVar2 + 0x58);
              uVar7 = *(undefined8 *)(lVar2 + 0x50);
              uVar18 = *(undefined8 *)(lVar2 + 0x30);
              puVar10[1] = *(undefined8 *)(lVar2 + 0x38);
              *puVar10 = uVar18;
              puVar10[3] = uVar17;
              puVar10[2] = uVar16;
              puVar10[5] = uVar15;
              puVar10[4] = uVar7;
              std::string::operator=(this,(string *)(lVar2 + 0x60));
              FUN_1000153b4(puVar12,lVar2 + 0x78);
              FUN_1000153b4(puVar14,lVar2 + 0x88);
              *puVar13 = *(undefined4 *)(lVar2 + 0x98);
            }
            uVar11 = uVar11 + 1;
            lVar9 = lVar9 + 0xa0;
          } while (uVar11 < local_148);
        }
        FUN_1002a1904(*(undefined8 *)(param_1 + 8),uVar4,&local_1f0,&local_290,auStack_108,
                      auStack_f0,auStack_d8);
        uVar7 = FUN_10015d3ec();
        plVar8 = (long *)(*(long *)(param_1 + 0x30) + uVar4 * 0x18);
        if (*(char *)((long)plVar8 + 0x17) < '\0') {
          plVar8 = (long *)*plVar8;
        }
        uVar11 = FUN_10016663c(uVar7,plVar8);
        if ((uVar11 & 1) == 0) {
          uVar7 = FUN_10015d3ec();
          plVar8 = (long *)(*(long *)(param_1 + 0x30) + uVar4 * 0x18);
          if (*(char *)((long)plVar8 + 0x17) < '\0') {
            plVar8 = (long *)*plVar8;
          }
          iVar3 = FUN_1001665d4(uVar7,plVar8,0);
          if (iVar3 != 0) {
            uVar7 = *(undefined8 *)(param_1 + 8);
            local_2a8 = 0;
            goto LAB_1001f23c4;
          }
          if (local_6b != '\0') {
            uVar7 = *(undefined8 *)(param_1 + 8);
            local_2a8 = 2;
            goto LAB_1001f23c4;
          }
          lVar9 = FUN_1004f1a74(0);
          if (lVar9 < local_78) {
            uVar7 = *(undefined8 *)(param_1 + 8);
            local_2a8 = 1;
            goto LAB_1001f23c4;
          }
        }
        else {
          uVar7 = *(undefined8 *)(param_1 + 8);
          local_2a8 = 3;
LAB_1001f23c4:
          FUN_1002a18e0(uVar7,uVar4,&local_2a8);
        }
        local_290 = &PTR_FUN_10145ac30;
        if (local_200 != (void *)0x0) {
          operator_delete__(local_200);
          local_208 = 0;
          local_200 = (void *)0x0;
        }
        if (local_210 != (void *)0x0) {
          operator_delete__(local_210);
          local_218 = 0;
          local_210 = (void *)0x0;
        }
        if (local_219 < '\0') {
          operator_delete(local_230[0]);
        }
        if (local_261 < '\0') {
          operator_delete(local_278[0]);
        }
        FUN_1001423e4(auStack_288,1);
        local_1f0 = &PTR_FUN_10145ac30;
        if (local_160 != (void *)0x0) {
          operator_delete__(local_160);
          local_168 = 0;
          local_160 = (void *)0x0;
        }
        if (local_170 != (void *)0x0) {
          operator_delete__(local_170);
          local_178 = 0;
          local_170 = (void *)0x0;
        }
        if (local_179 < '\0') {
          operator_delete(local_190[0]);
        }
        if (local_1c1 < '\0') {
          operator_delete(local_1d8[0]);
        }
        FUN_1001423e4(auStack_1e8,1);
      }
      FUN_1000eb120(auStack_150);
      uVar4 = uVar4 + 1;
    } while (uVar4 < *(uint *)(param_1 + 0x28));
  }
  return;
}




void FUN_1001f24c8(undefined8 param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_100131560();
  if ((uVar1 & 1) != 0) {
    return;
  }
  FUN_1001f206c(param_1);
  return;
}




void FUN_1001f24fc(long param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_100131560();
  if ((uVar1 & 1) != 0) {
    return;
  }
  FUN_1001f206c(param_1 + -0x10);
  return;
}




void FUN_1001f2530(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1001f1fb0();
    FUN_1001f206c(param_1);
    return;
  }
  return;
}




void FUN_1001f255c(long param_1,ulong param_2)

{
  if ((param_2 & 1) != 0) {
    return;
  }
  FUN_10001629c(param_1 + 0x28,0);
  return;
}




void FUN_1001f2570(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [32];
  
  uVar1 = FUN_100644a94("UI::USER_SELECTED_HERO");
  FUN_100644aec(auStack_40,uVar1,param_3);
  FUN_100644c34(*(undefined8 *)(param_1 + 8),auStack_40,1);
  return;
}




undefined8 * FUN_1001f25c4(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR____cxa_pure_virtual_10146c7b0;
  operator_new(0x2700);
  lVar1 = thunk_FUN_1002a1a1c();
  param_1[1] = lVar1;
  *(undefined8 **)(lVar1 + 0xb8) = param_1;
  FUN_10014f4a0(param_1 + 2);
  *param_1 = &PTR_FUN_10146c3a0;
  param_1[2] = &PTR_FUN_10146c3e0;
  param_1[5] = &PTR_FUN_10146c778;
  param_1[6] = 0;
  operator_new(0x38);
  lVar1 = thunk_FUN_1001f1ea4();
  param_1[6] = lVar1;
  FUN_1002a20c0(param_1[1],*(undefined8 *)(lVar1 + 8));
  FUN_1001f1fb0(param_1[6]);
  FUN_1002a2084(param_1[1]);
  FUN_1001f2660(param_1);
  return param_1;
}




void FUN_1001f2660(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 8);
  FUN_10015d3ec();
  uVar1 = FUN_1001636b0();
  uVar2 = FUN_10034bf10(1);
  FUN_1002a1e48(uVar3,uVar1,uVar2);
  return;
}




undefined8 * thunk_FUN_1001f25c4(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR____cxa_pure_virtual_10146c7b0;
  operator_new(0x2700);
  lVar1 = thunk_FUN_1002a1a1c();
  param_1[1] = lVar1;
  *(undefined8 **)(lVar1 + 0xb8) = param_1;
  FUN_10014f4a0(param_1 + 2);
  *param_1 = &PTR_FUN_10146c3a0;
  param_1[2] = &PTR_FUN_10146c3e0;
  param_1[5] = &PTR_FUN_10146c778;
  param_1[6] = 0;
  operator_new(0x38);
  lVar1 = thunk_FUN_1001f1ea4();
  param_1[6] = lVar1;
  FUN_1002a20c0(param_1[1],*(undefined8 *)(lVar1 + 8));
  FUN_1001f1fb0(param_1[6]);
  FUN_1002a2084(param_1[1]);
  FUN_1001f2660(param_1);
  return param_1;
}




undefined8 * FUN_1001f26a0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10146c3a0;
  param_1[2] = &PTR_FUN_10146c3e0;
  param_1[5] = &PTR_FUN_10146c778;
  if ((long *)param_1[6] != (long *)0x0) {
    (**(code **)(*(long *)param_1[6] + 0x20))();
    param_1[6] = 0;
  }
  FUN_10014f51c(param_1 + 2);
  *param_1 = &PTR____cxa_pure_virtual_10146c7b0;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return param_1;
}




void thunk_FUN_1001f26a0(void)

{
  FUN_1001f26a0();
  return;
}




void FUN_1001f2728(long param_1)

{
  FUN_1001f26a0(param_1 + -0x10);
  return;
}




void FUN_1001f2730(long param_1)

{
  FUN_1001f26a0(param_1 + -0x28);
  return;
}




void FUN_1001f2738(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1001f26a0();
  operator_delete(pvVar1);
  return;
}




void FUN_1001f274c(long param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1001f26a0(param_1 + -0x10);
  operator_delete(pvVar1);
  return;
}




void FUN_1001f2764(long param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1001f26a0(param_1 + -0x28);
  operator_delete(pvVar1);
  return;
}




void thunk_FUN_1001f2660(void)

{
  FUN_1001f2660();
  return;
}




void FUN_1001f2780(long param_1)

{
  FUN_1001f2660(param_1 + -0x10);
  return;
}




undefined8 FUN_1001f2788(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}




undefined8 FUN_1001f2790(long param_1)

{
  return *(undefined8 *)(param_1 + -0x20);
}




void FUN_1001f2798(undefined1 param_1 [16],float param_2,long param_3,undefined8 param_4)

{
  char *pcVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  float fVar7;
  void *local_60 [2];
  char local_49;
  undefined8 local_48;
  
  lVar3 = FUN_10016c2f0();
  if (*(int *)(lVar3 + 0x38) < 1) {
    plVar4 = (long *)FUN_100644b2c(param_4);
    uVar5 = FUN_100341d4c();
    iVar2 = FUN_100342900(uVar5,plVar4 + 0x1f7);
    puVar6 = (undefined8 *)FUN_10003d5bc(plVar4);
    uVar5 = *puVar6;
    fVar7 = (float)(**(code **)(*plVar4 + 0x48))(plVar4);
    lVar3 = FUN_10003d5bc(plVar4);
    local_48 = CONCAT44((float)((ulong)uVar5 >> 0x20) +
                        (float)((ulong)*(undefined8 *)(lVar3 + 0x10) >> 0x20) * param_2 * 0.5,
                        (float)uVar5 + (float)*(undefined8 *)(lVar3 + 0x10) * fVar7 * 0.5);
    uVar5 = *(undefined8 *)(param_3 + 8);
    pcVar1 = "Talents";
    if (iVar2 == 0) {
      pcVar1 = "";
    }
    FUN_10001549c(local_60,pcVar1);
    FUN_1002a2144(uVar5,plVar4 + 0x1f7,local_60,&local_48);
    if (local_49 < '\0') {
      operator_delete(local_60[0]);
    }
  }
  return;
}




void FUN_1001f2890(void)

{
  FUN_1004e0150("MAIN_MENU_HEROES",0);
  return;
}




void FUN_1001f28a0(void)

{
  FUN_1004e0150("MAIN_MENU_HEROES",0);
  return;
}




undefined8 * FUN_1001f28b0(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR_FUN_10146c7f8;
  operator_new(0x168);
  lVar1 = thunk_FUN_1002a2548();
  *(undefined8 **)(lVar1 + 0x88) = param_1;
  *param_1 = &PTR_FUN_10146c7d8;
  param_1[1] = lVar1;
  return param_1;
}




undefined8 * FUN_1001f28f8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10146c7f8;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return param_1;
}




void FUN_1001f293c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10146c7f8;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  operator_delete(param_1);
  return;
}




void FUN_1001f297c(long param_1,long *param_2)

{
  long *plVar1;
  int iVar2;
  short sVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  char *pcVar8;
  ulong uVar9;
  void *local_c0 [2];
  char local_a9;
  void *local_a8;
  undefined8 uStack_a0;
  long local_98;
  undefined4 local_8c;
  code *local_88 [2];
  char local_71;
  uint local_70 [2];
  long local_68;
  
  uVar9 = param_2[1];
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    uVar9 = (ulong)*(byte *)((long)param_2 + 0x17);
  }
  if (uVar9 != 0) {
    uVar4 = FUN_100341d4c();
    plVar1 = (long *)*param_2;
    if (-1 < *(char *)((long)param_2 + 0x17)) {
      plVar1 = param_2;
    }
    lVar5 = FUN_100342508(uVar4,plVar1);
    if (lVar5 != 0) {
      FUN_1000a72a4(local_70,lVar5);
      local_88[0] = FUN_100341d78;
      FUN_1000a7314(local_68,local_68 + (ulong)local_70[0] * 0x18,local_88);
      FUN_1002a2600(*(undefined8 *)(param_1 + 8));
      if (local_70[0] != 0) {
        lVar5 = 0;
        uVar9 = 0;
        do {
          FUN_10003330c(local_88,local_68 + lVar5);
          lVar6 = FUN_100341d58(local_88);
          if ((lVar6 != 0) && (lVar7 = FUN_100343694(), lVar7 != 0)) {
            sVar3 = *(short *)(lVar6 + 0xb0);
            local_8c = 0xffffffff;
            local_a8 = (void *)0x0;
            uStack_a0 = 0;
            local_98 = 0;
            iVar2 = *(int *)(lVar7 + 0x18);
            if (iVar2 == 3) {
              local_8c = 0xff005ae1;
              pcVar8 = "talent_pip_legendary";
LAB_1001f2adc:
              FUN_10001549c(local_c0,pcVar8);
              std::string::operator=((string *)&local_a8,(string *)local_c0);
              if (local_a9 < '\0') {
                operator_delete(local_c0[0]);
              }
            }
            else {
              if (iVar2 == 2) {
                local_8c = 0xffe550b2;
                pcVar8 = "talent_pip_epic";
                goto LAB_1001f2adc;
              }
              if (iVar2 == 1) {
                local_8c = 0xffe19400;
                pcVar8 = "talent_pip_rare";
                goto LAB_1001f2adc;
              }
            }
            FUN_1002a2674(*(undefined8 *)(param_1 + 8),'\0' < (char)sVar3,
                          (ulong)(long)(short)(sVar3 << 8) >> 8,&local_8c,&local_a8);
            if (local_98 < 0) {
              operator_delete(local_a8);
            }
          }
          if (local_71 < '\0') {
            operator_delete(local_88[0]);
          }
          uVar9 = uVar9 + 1;
          lVar5 = lVar5 + 0x18;
        } while (uVar9 < local_70[0]);
      }
      (**(code **)(**(long **)(param_1 + 8) + 0x90))();
      FUN_10001629c(local_70,1);
    }
  }
  return;
}




undefined8 * FUN_1001f2b90(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10146c7f8;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return param_1;
}




void FUN_1001f2bd4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10146c7f8;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  operator_delete(param_1);
  return;
}




undefined8 * FUN_1001f2c14(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR_FUN_10146c838;
  operator_new(0x1fe60);
  lVar1 = thunk_FUN_1002a2990();
  *(undefined8 **)(lVar1 + 0x148) = param_1;
  *param_1 = &PTR_thunk_FUN_1001f2c64_10146c818;
  param_1[1] = lVar1;
  param_1[2] = 0;
  return param_1;
}




undefined8 * FUN_1001f2c64(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_thunk_FUN_1001f2c64_10146c818;
  FUN_1002a3af8(param_1[1],0);
  FUN_1002a3960(param_1[1],0);
  FUN_1002a3c74(param_1[1],0);
  if (param_1[2] != 0) {
    pvVar1 = (void *)FUN_1001f3304();
    operator_delete(pvVar1);
    param_1[2] = 0;
  }
  *param_1 = &PTR_FUN_10146c838;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return param_1;
}




undefined8 * thunk_FUN_1001f2c64(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_thunk_FUN_1001f2c64_10146c818;
  FUN_1002a3af8(param_1[1],0);
  FUN_1002a3960(param_1[1],0);
  FUN_1002a3c74(param_1[1],0);
  if (param_1[2] != 0) {
    pvVar1 = (void *)FUN_1001f3304();
    operator_delete(pvVar1);
    param_1[2] = 0;
  }
  *param_1 = &PTR_FUN_10146c838;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return param_1;
}




void FUN_1001f2cf0(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1001f2c64();
  operator_delete(pvVar1);
  return;
}




void FUN_1001f2d04(long param_1)

{
  FUN_1001f2d54();
  FUN_1002a2f6c(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
  FUN_1002a4a38(*(undefined8 *)(param_1 + 8));
  FUN_1002a3af8(*(undefined8 *)(param_1 + 8),1);
  FUN_1002a3960(*(undefined8 *)(param_1 + 8),1);
  FUN_1002a3c74(*(undefined8 *)(param_1 + 8),1);
  return;
}




void FUN_1001f30c0(long param_1,undefined8 param_2,string *param_3,undefined4 param_4,
                  string *param_5,undefined4 param_6,string *param_7,string *param_8,string *param_9
                  )

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  uint *puVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  void *local_78 [2];
  char local_61;
  
  if (*(long *)(param_1 + 0x10) == 0) {
    puVar1 = operator_new(0xe8);
    puVar1[1] = 0;
    *puVar1 = 0;
    puVar1[3] = 0;
    puVar1[2] = 0;
    puVar1[5] = 0;
    puVar1[4] = 0;
    puVar1[7] = 0;
    puVar1[6] = 0;
    puVar1[9] = 0;
    puVar1[8] = 0;
    puVar1[0xb] = 0;
    puVar1[10] = 0;
    puVar1[0xd] = 0;
    puVar1[0xc] = 0;
    puVar1[0xf] = 0;
    puVar1[0xe] = 0;
    puVar1[0x11] = 0;
    puVar1[0x10] = 0;
    puVar1[0x13] = 0;
    puVar1[0x12] = 0;
    puVar1[0x15] = 0;
    puVar1[0x14] = 0;
    puVar1[0x17] = 0;
    puVar1[0x16] = 0;
    puVar1[0x19] = 0;
    puVar1[0x18] = 0;
    puVar1[0x1b] = 0;
    puVar1[0x1a] = 0;
    puVar1[0x1c] = 0;
    FUN_1004e313c(puVar1 + 5);
    puVar1[0x10] = 0;
    puVar1[0x11] = 0;
    puVar1[0x12] = 0;
    puVar1[0xb] = 0;
    puVar1[10] = 0;
    puVar1[0xd] = 0;
    puVar1[0xc] = 0;
    puVar1[0xe] = 0;
    puVar1[0x15] = 0;
    puVar1[0x14] = 0;
    puVar1[0x17] = 0;
    puVar1[0x16] = 0;
    puVar1[0x19] = 0;
    puVar1[0x18] = 0;
    puVar1[0x1b] = 0;
    puVar1[0x1a] = 0;
    puVar1[0x1c] = 0;
    *(undefined8 **)(param_1 + 0x10) = puVar1;
  }
  FUN_10001549c(local_78,param_2);
  std::string::operator=(*(string **)(param_1 + 0x10),(string *)local_78);
  if (local_61 < '\0') {
    operator_delete(local_78[0]);
  }
  lVar2 = FUN_10034be08(param_2);
  *(long *)(*(long *)(param_1 + 0x10) + 0x18) = lVar2;
  if (lVar2 != 0) {
    lVar2 = FUN_10034bf64(param_2);
    *(long *)(*(long *)(param_1 + 0x10) + 0x20) = lVar2;
    uVar3 = FUN_1004e0150(*(undefined8 *)(lVar2 + 0x28),0);
    FUN_1000153b4(*(long *)(param_1 + 0x10) + 0x28,uVar3);
    FUN_10034c0cc(param_2,*(long *)(param_1 + 0x10) + 0x38,3);
    FUN_10001629c(*(long *)(param_1 + 0x10) + 0x50,0);
    uVar3 = FUN_100341d4c();
    plVar5 = *(long **)(param_1 + 0x10);
    if (*(char *)((long)plVar5 + 0x17) < '\0') {
      plVar5 = (long *)*plVar5;
    }
    puVar4 = (uint *)FUN_100342508(uVar3,plVar5);
    if ((puVar4 != (uint *)0x0) && (*puVar4 != 0)) {
      lVar2 = 0;
      uVar8 = 0;
      do {
        lVar6 = *(long *)(puVar4 + 2) + lVar2;
        if (*(char *)(lVar6 + 0x17) < '\0') {
          lVar6 = *(long *)(*(long *)(puVar4 + 2) + lVar2);
        }
        lVar7 = *(long *)(param_1 + 0x10);
        FUN_10001549c(local_78,lVar6);
        FUN_10001617c(lVar7 + 0x50,local_78);
        if (local_61 < '\0') {
          operator_delete(local_78[0]);
        }
        uVar8 = uVar8 + 1;
        lVar2 = lVar2 + 0x18;
      } while (uVar8 < *puVar4);
    }
    std::string::operator=((string *)(*(long *)(param_1 + 0x10) + 0x60),param_3);
    lVar2 = *(long *)(param_1 + 0x10);
    *(undefined4 *)(lVar2 + 0x78) = param_4;
    std::string::operator=((string *)(lVar2 + 0x80),param_5);
    lVar2 = *(long *)(param_1 + 0x10);
    *(undefined4 *)(lVar2 + 0x98) = param_6;
    std::string::operator=((string *)(lVar2 + 0xa0),param_7);
    std::string::operator=((string *)(*(long *)(param_1 + 0x10) + 0xb8),param_8);
    std::string::operator=((string *)(*(long *)(param_1 + 0x10) + 0xd0),param_9);
  }
  return;
}




undefined8 * FUN_1001f3304(undefined8 *param_1)

{
  if (*(char *)((long)param_1 + 0xe7) < '\0') {
    operator_delete((void *)param_1[0x1a]);
  }
  if (*(char *)((long)param_1 + 0xcf) < '\0') {
    operator_delete((void *)param_1[0x17]);
  }
  if (*(char *)((long)param_1 + 0xb7) < '\0') {
    operator_delete((void *)param_1[0x14]);
  }
  if (*(char *)((long)param_1 + 0x97) < '\0') {
    operator_delete((void *)param_1[0x10]);
  }
  if (*(char *)((long)param_1 + 0x77) < '\0') {
    operator_delete((void *)param_1[0xc]);
  }
  FUN_10001629c(param_1 + 10,1);
  if ((void *)param_1[6] != (void *)0x0) {
    operator_delete__((void *)param_1[6]);
    param_1[5] = 0;
    param_1[6] = 0;
  }
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    operator_delete((void *)*param_1);
  }
  return param_1;
}




undefined8 * FUN_1001f33a0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10146c838;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return param_1;
}




void FUN_1001f33e4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10146c838;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  operator_delete(param_1);
  return;
}




undefined8 * FUN_1001f3424(undefined8 *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *local_50;
  undefined8 *puStack_48;
  undefined8 *local_40;
  code *pcStack_38;
  
  *param_1 = &PTR____cxa_pure_virtual_10146c948;
  operator_new(0x23c8);
  lVar1 = thunk_FUN_1002a616c();
  *(undefined8 **)(lVar1 + 0xb8) = param_1;
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = &PTR_FUN_10146c858;
  param_1[1] = lVar1;
  param_1[2] = &PTR_FUN_10146c8c0;
  puVar2 = param_1 + 3;
  *puVar2 = &PTR_FUN_10146c918;
  *(undefined2 *)(param_1 + 6) = 0;
  *(undefined1 *)((long)param_1 + 0x32) = 1;
  lVar1 = FUN_10032523c();
  local_50 = (undefined8 *)0x0;
  pcStack_38 = thunk_FUN_1001f392c;
  puStack_48 = param_1;
  local_40 = param_1;
  FUN_100031f58(lVar1 + 0x40,&local_50);
  lVar1 = FUN_10031ffe0();
  puStack_48 = (undefined8 *)0x0;
  pcStack_38 = FUN_1001f3c5c;
  local_50 = param_1;
  local_40 = param_1;
  FUN_1000be5e4(lVar1 + 0x30,&local_50);
  lVar1 = FUN_10031ffe0();
  puStack_48 = (undefined8 *)0x0;
  pcStack_38 = FUN_1001f3c5c;
  local_50 = param_1;
  local_40 = param_1;
  FUN_1000be5e4(lVar1 + 0x40,&local_50);
  lVar1 = FUN_10031ffe0();
  local_50 = (undefined8 *)0x0;
  pcStack_38 = thunk_FUN_1001f3a48;
  puStack_48 = param_1;
  local_40 = param_1;
  FUN_1001f3c84(lVar1 + 0x60,&local_50);
  FUN_1001dac1c(puVar2,"play",param_1,FUN_1001f3d84);
  FUN_1001dac1c(puVar2,"events",param_1,FUN_1001f3d9c);
  FUN_1001dac1c(puVar2,"quests",param_1,FUN_1001f3db4);
  return param_1;
}




undefined8 * thunk_FUN_1001f3424(undefined8 *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puStack_50;
  undefined8 *puStack_48;
  undefined8 *puStack_40;
  code *pcStack_38;
  
  *param_1 = &PTR____cxa_pure_virtual_10146c948;
  operator_new(0x23c8);
  lVar1 = thunk_FUN_1002a616c();
  *(undefined8 **)(lVar1 + 0xb8) = param_1;
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = &PTR_FUN_10146c858;
  param_1[1] = lVar1;
  param_1[2] = &PTR_FUN_10146c8c0;
  puVar2 = param_1 + 3;
  *puVar2 = &PTR_FUN_10146c918;
  *(undefined2 *)(param_1 + 6) = 0;
  *(undefined1 *)((long)param_1 + 0x32) = 1;
  lVar1 = FUN_10032523c();
  puStack_50 = (undefined8 *)0x0;
  pcStack_38 = thunk_FUN_1001f392c;
  puStack_48 = param_1;
  puStack_40 = param_1;
  FUN_100031f58(lVar1 + 0x40,&puStack_50);
  lVar1 = FUN_10031ffe0();
  puStack_48 = (undefined8 *)0x0;
  pcStack_38 = FUN_1001f3c5c;
  puStack_50 = param_1;
  puStack_40 = param_1;
  FUN_1000be5e4(lVar1 + 0x30,&puStack_50);
  lVar1 = FUN_10031ffe0();
  puStack_48 = (undefined8 *)0x0;
  pcStack_38 = FUN_1001f3c5c;
  puStack_50 = param_1;
  puStack_40 = param_1;
  FUN_1000be5e4(lVar1 + 0x40,&puStack_50);
  lVar1 = FUN_10031ffe0();
  puStack_50 = (undefined8 *)0x0;
  pcStack_38 = thunk_FUN_1001f3a48;
  puStack_48 = param_1;
  puStack_40 = param_1;
  FUN_1001f3c84(lVar1 + 0x60,&puStack_50);
  FUN_1001dac1c(puVar2,"play",param_1,FUN_1001f3d84);
  FUN_1001dac1c(puVar2,"events",param_1,FUN_1001f3d9c);
  FUN_1001dac1c(puVar2,"quests",param_1,FUN_1001f3db4);
  return param_1;
}




undefined8 * FUN_1001f3570(undefined8 *param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  
  *param_1 = &PTR_FUN_10146c858;
  param_1[2] = &PTR_FUN_10146c8c0;
  param_1[3] = &PTR_FUN_10146c918;
  lVar2 = FUN_10032523c();
  if (*(uint *)(lVar2 + 0x40) != 0) {
    lVar3 = *(long *)(lVar2 + 0x48);
    lVar2 = (ulong)*(uint *)(lVar2 + 0x40) << 5;
    do {
      puVar4 = (undefined8 *)(lVar3 + 8);
      lVar3 = lVar3 + 0x20;
      if ((undefined8 *)*puVar4 == param_1) {
        FUN_100031ee8();
        break;
      }
      lVar2 = lVar2 + -0x20;
    } while (lVar2 != 0);
  }
  lVar2 = FUN_10032523c();
  if (*(uint *)(lVar2 + 0x50) != 0) {
    lVar3 = *(long *)(lVar2 + 0x58);
    lVar2 = (ulong)*(uint *)(lVar2 + 0x50) << 5;
    do {
      puVar4 = (undefined8 *)(lVar3 + 8);
      lVar3 = lVar3 + 0x20;
      if ((undefined8 *)*puVar4 == param_1) {
        FUN_1001f3dd4();
        break;
      }
      lVar2 = lVar2 + -0x20;
    } while (lVar2 != 0);
  }
  lVar2 = FUN_10031ffe0();
  uVar1 = *(uint *)(lVar2 + 0x30);
  if (uVar1 != 0) {
    lVar3 = (ulong)uVar1 << 5;
    puVar4 = *(undefined8 **)(lVar2 + 0x38);
    do {
      if ((undefined8 *)*puVar4 == param_1) {
        FUN_1000c044c((uint *)(lVar2 + 0x30),puVar4,puVar4 + 4);
        break;
      }
      lVar3 = lVar3 + -0x20;
      puVar4 = puVar4 + 4;
    } while (lVar3 != 0);
  }
  lVar2 = FUN_10031ffe0();
  uVar1 = *(uint *)(lVar2 + 0x40);
  if (uVar1 != 0) {
    lVar3 = (ulong)uVar1 << 5;
    puVar4 = *(undefined8 **)(lVar2 + 0x48);
    do {
      if ((undefined8 *)*puVar4 == param_1) {
        FUN_1000c044c((uint *)(lVar2 + 0x40),puVar4,puVar4 + 4);
        break;
      }
      lVar3 = lVar3 + -0x20;
      puVar4 = puVar4 + 4;
    } while (lVar3 != 0);
  }
  lVar2 = FUN_10031ffe0();
  if (*(uint *)(lVar2 + 0x60) != 0) {
    lVar3 = *(long *)(lVar2 + 0x68);
    lVar2 = (ulong)*(uint *)(lVar2 + 0x60) << 5;
    do {
      puVar4 = (undefined8 *)(lVar3 + 8);
      lVar3 = lVar3 + 0x20;
      if ((undefined8 *)*puVar4 == param_1) {
        FUN_1001f3e44();
        break;
      }
      lVar2 = lVar2 + -0x20;
    } while (lVar2 != 0);
  }
  param_1[3] = &PTR_FUN_10146c930;
  FUN_1001f3bd4(param_1 + 4,1);
  *param_1 = &PTR____cxa_pure_virtual_10146c948;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return param_1;
}




void thunk_FUN_1001f3570(void)

{
  FUN_1001f3570();
  return;
}




void FUN_1001f3708(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1001f3570();
  operator_delete(pvVar1);
  return;
}




void FUN_1001f371c(long param_1)

{
  FUN_1002a6a54(*(undefined8 *)(param_1 + 8));
  return;
}




void FUN_1001f3724(long param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x32) = param_2;
  return;
}




void FUN_1001f372c(long param_1,ulong param_2)

{
  if ((int)param_2 != 0) {
    param_2 = (ulong)(*(char *)(param_1 + 0x30) != '\0');
  }
  FUN_1002a6910(*(undefined8 *)(param_1 + 8),param_2);
  return;
}




undefined1 FUN_1001f3748(long param_1)

{
  return *(undefined1 *)(param_1 + 0x30);
}




void FUN_1001f3750(long param_1)

{
  FUN_1002a6d2c(*(undefined8 *)(param_1 + 8));
  return;
}




void FUN_1001f3758(undefined8 param_1,undefined8 param_2)

{
  FUN_10021992c(param_2,"homepanel_overflow_nav_button_academy");
  return;
}




void FUN_1001f3768(undefined8 param_1,undefined8 param_2)

{
  FUN_100221648(param_2,"homepanel_overflow_nav_button_news");
  return;
}




void FUN_1001f3778(void)

{
  long lVar1;
  
  lVar1 = FUN_10031ffe0();
  if (*(char *)(lVar1 + 0x70) != '\0') {
    FUN_1001db0bc("vainglory://PARTY",0);
    return;
  }
  FUN_1001f37a8();
  return;
}




void FUN_1001f37a8(void)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_1001311d4();
  if ((uVar1 & 1) != 0) {
    uVar2 = FUN_10032523c();
    FUN_100325328(uVar2,"5v5_bots_solo","easy");
    return;
  }
  FUN_1002219a0("homepanel_play_button");
  return;
}




void FUN_1001f37e4(void)

{
  int iVar1;
  
  FUN_10032523c();
  iVar1 = FUN_1003252f0();
  if (iVar1 == 1) {
    FUN_10032523c();
    FUN_1003253a8();
    return;
  }
  return;
}




void FUN_1001f3810(long param_1)

{
  undefined1 auStack_40 [32];
  
  FUN_1002a6a58(*(undefined8 *)(param_1 + 8),1);
  *(undefined1 *)(param_1 + 0x30) = 1;
  FUN_1002a6910(*(undefined8 *)(param_1 + 8),*(undefined1 *)(param_1 + 0x31),0);
  FUN_100644aec(auStack_40,DAT_101d23684,0);
  FUN_100644c34(*(undefined8 *)(param_1 + 8),auStack_40,1);
  return;
}




void FUN_1001f3880(long param_1)

{
  FUN_1001f3810(param_1 + -0x10);
  return;
}




void FUN_1001f3888(long param_1)

{
  *(undefined1 *)(param_1 + 0x30) = 0;
  FUN_1002a6910(*(undefined8 *)(param_1 + 8),0,0);
  return;
}




void FUN_1001f389c(long param_1)

{
  *(undefined1 *)(param_1 + 0x20) = 0;
  FUN_1002a6910(*(undefined8 *)(param_1 + -8),0,0);
  return;
}




void FUN_1001f38b0(void)

{
  FUN_1004e0150("MAIN_MENU_HOME",0);
  return;
}




void FUN_1001f38c0(void)

{
  FUN_1004e0150("MAIN_MENU_HOME",0);
  return;
}




void FUN_1001f38d0(undefined8 param_1,undefined8 param_2)

{
  FUN_1001c3fc8(param_2,"ACADEMY.*");
  FUN_1001c3fc8(param_2,"ACCOUNT.*");
  FUN_1001c3fc8(param_2,"NEWS.*");
  FUN_1001c3fc8(param_2,"QUESTS.*");
  return;
}




void thunk_FUN_1001f38d0(void)

{
  FUN_1001f38d0();
  return;
}




void FUN_1001f392c(long param_1)

{
  int iVar1;
  long lVar2;
  undefined8 ***pppuVar3;
  ulong uVar4;
  undefined8 uVar5;
  void *pvVar6;
  ulong uVar7;
  undefined8 **local_58;
  ulong local_50;
  undefined8 uStack_48;
  
  FUN_10032523c();
  iVar1 = FUN_1003252f0();
  if (iVar1 != 1) goto LAB_1001f3a1c;
  lVar2 = FUN_10015d3ec();
  if (*(char *)(lVar2 + 0x567a) == '\0') {
    lVar2 = FUN_10015d3ec();
    if ((char)*(byte *)(lVar2 + 0x54bf) < '\0') {
      uVar4 = *(ulong *)(lVar2 + 0x54b0);
      if (0xffffffffffffffef < uVar4) {
                    /* WARNING: Subroutine does not return */
        FUN_1001f3c4c();
      }
      pvVar6 = *(void **)(lVar2 + 0x54a8);
    }
    else {
      pvVar6 = (void *)(lVar2 + 0x54a8);
      uVar4 = (ulong)*(byte *)(lVar2 + 0x54bf);
    }
    if (uVar4 < 0x17) {
      pppuVar3 = &local_58;
      uStack_48 = CONCAT17((char)uVar4,(undefined7)uStack_48);
      if (uVar4 != 0) goto LAB_1001f39d4;
    }
    else {
      uVar7 = uVar4 + 0x10 & 0xfffffffffffffff0;
      pppuVar3 = operator_new(uVar7);
      uStack_48 = uVar7 | 0x8000000000000000;
      local_58 = pppuVar3;
      local_50 = uVar4;
LAB_1001f39d4:
      _memcpy(pppuVar3,pvVar6,uVar4);
    }
    *(undefined1 *)((long)pppuVar3 + uVar4) = 0;
    FUN_1001f3a48(param_1,&local_58);
    if ((long)uStack_48 < 0) {
      operator_delete(local_58);
    }
  }
  uVar5 = *(undefined8 *)(param_1 + 8);
  lVar2 = FUN_1004f0338();
  FUN_1002a6b3c((float)*(int *)(lVar2 + 0xf4),uVar5);
LAB_1001f3a1c:
  FUN_1002a6a5c(*(undefined8 *)(param_1 + 8),iVar1 == 1);
  return;
}




void FUN_1001f3a48(long param_1,long *param_2)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [8];
  void *local_48;
  undefined1 auStack_40 [8];
  void *local_38;
  
  plVar1 = (long *)*param_2;
  if (-1 < *(char *)((long)param_2 + 0x17)) {
    plVar1 = param_2;
  }
  uVar2 = FUN_100325424(plVar1);
  plVar1 = (long *)*param_2;
  if (-1 < *(char *)((long)param_2 + 0x17)) {
    plVar1 = param_2;
  }
  uVar3 = FUN_1003254bc(plVar1);
  thunk_FUN_1004e439c(auStack_40,uVar2);
  FUN_1004e3120(auStack_50," | ");
  FUN_1004e372c(auStack_40,auStack_50);
  if (local_48 != (void *)0x0) {
    operator_delete__(local_48);
  }
  FUN_1004e372c(auStack_40,uVar3);
  FUN_1002a6b0c(*(undefined8 *)(param_1 + 8),auStack_40);
  if (local_38 != (void *)0x0) {
    operator_delete__(local_38);
  }
  return;
}




undefined8 FUN_1001f3b00(void)

{
  long lVar1;
  
  lVar1 = FUN_100134104();
  if (*(char *)(lVar1 + 10) == '\0') {
    FUN_1001db0bc("vainglory://MARKET/MENU_MARKET_TAB_NAME_EVENTS",0);
  }
  else {
    FUN_10022097c("homepanel_cornerwidget_events_tile");
  }
  return 0;
}




void FUN_1001f3b40(void)

{
  int iVar1;
  ulong uVar2;
  
  iVar1 = FUN_1004eef10();
  if ((iVar1 != 0) && (uVar2 = FUN_1001311d4(), (uVar2 & 1) == 0)) {
    uVar2 = FUN_10014e20c();
    if ((uVar2 & 1) != 0) {
      FUN_100220d08();
      return;
    }
    FUN_100221f98("homepanel_profile_avatar");
    return;
  }
  return;
}




char * FUN_1001f3b80(void)

{
  return "main_nav_home";
}




undefined4 FUN_1001f3b8c(void)

{
  return 0xc2640000;
}




undefined8 FUN_1001f3b9c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}




undefined8 FUN_1001f3ba4(long param_1)

{
  return *(undefined8 *)(param_1 + -8);
}




void FUN_1001f3bac(void)

{
  return;
}




void FUN_1001f3bb0(void)

{
  return;
}




char * FUN_1001f3bb4(void)

{
  return "main_nav_home";
}




undefined4 FUN_1001f3bc0(void)

{
  return 0xc2640000;
}




void FUN_1001f3bd0(void)

{
  return;
}




void FUN_1001f3bd4(uint *param_1,int param_2)

{
  undefined8 *puVar1;
  long lVar2;
  
  puVar1 = *(undefined8 **)(param_1 + 2);
  if (puVar1 != (undefined8 *)0x0) {
    if (*param_1 != 0) {
      lVar2 = (ulong)*param_1 * 0x28;
      do {
        if (*(char *)((long)puVar1 + 0x17) < '\0') {
          operator_delete((void *)*puVar1);
        }
        puVar1 = puVar1 + 5;
        lVar2 = lVar2 + -0x28;
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




void FUN_1001f3c4c(void)

{
                    /* WARNING: Subroutine does not return */
  _abort();
}




void thunk_FUN_1001f392c(long param_1)

{
  int iVar1;
  long lVar2;
  undefined8 ***pppuVar3;
  ulong uVar4;
  undefined8 uVar5;
  void *pvVar6;
  ulong uVar7;
  undefined8 **ppuStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  
  FUN_10032523c();
  iVar1 = FUN_1003252f0();
  if (iVar1 != 1) goto LAB_1001f3a1c;
  lVar2 = FUN_10015d3ec();
  if (*(char *)(lVar2 + 0x567a) == '\0') {
    lVar2 = FUN_10015d3ec();
    if ((char)*(byte *)(lVar2 + 0x54bf) < '\0') {
      uVar4 = *(ulong *)(lVar2 + 0x54b0);
      if (0xffffffffffffffef < uVar4) {
                    /* WARNING: Subroutine does not return */
        FUN_1001f3c4c();
      }
      pvVar6 = *(void **)(lVar2 + 0x54a8);
    }
    else {
      pvVar6 = (void *)(lVar2 + 0x54a8);
      uVar4 = (ulong)*(byte *)(lVar2 + 0x54bf);
    }
    if (uVar4 < 0x17) {
      pppuVar3 = &ppuStack_58;
      uStack_48 = CONCAT17((char)uVar4,(undefined7)uStack_48);
      if (uVar4 != 0) goto LAB_1001f39d4;
    }
    else {
      uVar7 = uVar4 + 0x10 & 0xfffffffffffffff0;
      pppuVar3 = operator_new(uVar7);
      uStack_48 = uVar7 | 0x8000000000000000;
      ppuStack_58 = pppuVar3;
      uStack_50 = uVar4;
LAB_1001f39d4:
      _memcpy(pppuVar3,pvVar6,uVar4);
    }
    *(undefined1 *)((long)pppuVar3 + uVar4) = 0;
    FUN_1001f3a48(param_1,&ppuStack_58);
    if ((long)uStack_48 < 0) {
      operator_delete(ppuStack_58);
    }
  }
  uVar5 = *(undefined8 *)(param_1 + 8);
  lVar2 = FUN_1004f0338();
  FUN_1002a6b3c((float)*(int *)(lVar2 + 0xf4),uVar5);
LAB_1001f3a1c:
  FUN_1002a6a5c(*(undefined8 *)(param_1 + 8),iVar1 == 1);
  return;
}




void FUN_1001f3c5c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  lVar1 = FUN_10031ffe0();
  FUN_1002a6b00(uVar2,*(undefined1 *)(lVar1 + 0x70));
  return;
}




void FUN_1001f3c84(uint *param_1,undefined8 *param_2)

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
    FUN_1001f3d08(param_1,uVar3);
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




void thunk_FUN_1001f3a48(long param_1,long *param_2)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [8];
  void *pvStack_48;
  undefined1 auStack_40 [8];
  void *pvStack_38;
  
  plVar1 = (long *)*param_2;
  if (-1 < *(char *)((long)param_2 + 0x17)) {
    plVar1 = param_2;
  }
  uVar2 = FUN_100325424(plVar1);
  plVar1 = (long *)*param_2;
  if (-1 < *(char *)((long)param_2 + 0x17)) {
    plVar1 = param_2;
  }
  uVar3 = FUN_1003254bc(plVar1);
  thunk_FUN_1004e439c(auStack_40,uVar2);
  FUN_1004e3120(auStack_50," | ");
  FUN_1004e372c(auStack_40,auStack_50);
  if (pvStack_48 != (void *)0x0) {
    operator_delete__(pvStack_48);
  }
  FUN_1004e372c(auStack_40,uVar3);
  FUN_1002a6b0c(*(undefined8 *)(param_1 + 8),auStack_40);
  if (pvStack_38 != (void *)0x0) {
    operator_delete__(pvStack_38);
  }
  return;
}




void FUN_1001f3d08(uint *param_1,uint param_2)

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




undefined8 FUN_1001f3d84(void)

{
  FUN_1001f37a8();
  return 0;
}




undefined8 FUN_1001f3d9c(void)

{
  FUN_1001f3b00();
  return 0;
}




undefined8 FUN_1001f3db4(void)

{
  FUN_100222d10("homepanel_cornerwidget_quests_tile");
  return 0;
}




void FUN_1001f3dd4(uint *param_1,undefined8 *param_2,undefined8 *param_3)

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




void FUN_1001f3e44(uint *param_1,undefined8 *param_2,undefined8 *param_3)

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




undefined8 * FUN_1001f3eb4(undefined8 *param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *local_40;
  code *pcStack_38;
  undefined8 *local_30;
  code *pcStack_28;
  
  *param_1 = &PTR____cxa_pure_virtual_10146c9d8;
  operator_new(0x718);
  lVar2 = thunk_FUN_1002a7a40();
  param_1[1] = lVar2;
  *(undefined8 **)(lVar2 + 0x240) = param_1;
  FUN_10016b764(param_1 + 2);
  *param_1 = &PTR_FUN_10146c978;
  param_1[2] = &PTR_FUN_10146c9a8;
  uVar3 = FUN_100133fc8();
  pcStack_38 = (code *)0x0;
  pcStack_28 = thunk_FUN_1001f3f84;
  local_40 = param_1;
  local_30 = param_1;
  FUN_1000be5e4(uVar3,&local_40);
  pcStack_38 = FUN_1001f4134;
  local_40 = param_1;
  FUN_100643618(0x3e4ccccd,&local_40,0,1);
  iVar1 = FUN_1001341cc();
  if (iVar1 != 0) {
    FUN_1001f3f84(param_1);
  }
  uVar3 = param_1[1];
  lVar2 = FUN_10016c2f0();
  FUN_1002a7e98(uVar3,*(int *)(lVar2 + 0x38) < 1);
  return param_1;
}




void FUN_1001f3f84(long param_1)

{
  undefined1 auStack_30 [8];
  void *local_28;
  
  FUN_1000f0f78(auStack_30,0,0,1);
  FUN_1002a7ed0(*(undefined8 *)(param_1 + 8),auStack_30);
  if (local_28 != (void *)0x0) {
    operator_delete__(local_28);
  }
  return;
}




undefined8 * thunk_FUN_1001f3eb4(undefined8 *param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puStack_40;
  code *pcStack_38;
  undefined8 *puStack_30;
  code *pcStack_28;
  
  *param_1 = &PTR____cxa_pure_virtual_10146c9d8;
  operator_new(0x718);
  lVar2 = thunk_FUN_1002a7a40();
  param_1[1] = lVar2;
  *(undefined8 **)(lVar2 + 0x240) = param_1;
  FUN_10016b764(param_1 + 2);
  *param_1 = &PTR_FUN_10146c978;
  param_1[2] = &PTR_FUN_10146c9a8;
  uVar3 = FUN_100133fc8();
  pcStack_38 = (code *)0x0;
  pcStack_28 = thunk_FUN_1001f3f84;
  puStack_40 = param_1;
  puStack_30 = param_1;
  FUN_1000be5e4(uVar3,&puStack_40);
  pcStack_38 = FUN_1001f4134;
  puStack_40 = param_1;
  FUN_100643618(0x3e4ccccd,&puStack_40,0,1);
  iVar1 = FUN_1001341cc();
  if (iVar1 != 0) {
    FUN_1001f3f84(param_1);
  }
  uVar3 = param_1[1];
  lVar2 = FUN_10016c2f0();
  FUN_1002a7e98(uVar3,*(int *)(lVar2 + 0x38) < 1);
  return param_1;
}




undefined8 * FUN_1001f3fd8(undefined8 *param_1)

{
  uint *puVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *local_30;
  code *pcStack_28;
  
  *param_1 = &PTR_FUN_10146c978;
  param_1[2] = &PTR_FUN_10146c9a8;
  pcStack_28 = FUN_1001f4134;
  local_30 = param_1;
  FUN_100643a8c(&local_30);
  puVar1 = (uint *)FUN_100133fc8();
  if (*puVar1 != 0) {
    lVar2 = (ulong)*puVar1 << 5;
    puVar3 = *(undefined8 **)(puVar1 + 2);
    do {
      if ((undefined8 *)*puVar3 == param_1) {
        FUN_1000c044c(puVar1,puVar3,puVar3 + 4);
        break;
      }
      lVar2 = lVar2 + -0x20;
      puVar3 = puVar3 + 4;
    } while (lVar2 != 0);
  }
  FUN_10016b7e0(param_1 + 2);
  *param_1 = &PTR____cxa_pure_virtual_10146c9d8;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return param_1;
}




void thunk_FUN_1001f3fd8(void)

{
  FUN_1001f3fd8();
  return;
}




void FUN_1001f4098(long param_1)

{
  FUN_1001f3fd8(param_1 + -0x10);
  return;
}




void FUN_1001f40a0(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1001f3fd8();
  operator_delete(pvVar1);
  return;
}




void FUN_1001f40b4(long param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1001f3fd8(param_1 + -0x10);
  operator_delete(pvVar1);
  return;
}




void FUN_1001f40cc(void)

{
  return;
}




void FUN_1001f40d0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  lVar1 = FUN_10016c2f0();
  FUN_1002a7e98(uVar2,*(int *)(lVar1 + 0x38) < 1);
  return;
}




void FUN_1001f4100(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + -8);
  lVar1 = FUN_10016c2f0();
  FUN_1002a7e98(uVar2,*(int *)(lVar1 + 0x38) < 1);
  return;
}




void thunk_FUN_1001f3f84(void)

{
  FUN_1001f3f84();
  return;
}




void FUN_1001f4134(long param_1)

{
  undefined8 uVar1;
  
  FUN_10015d3ec();
  uVar1 = FUN_1001668dc();
  FUN_1002a7f00(*(undefined8 *)(param_1 + 8),uVar1);
  return;
}




undefined8 * FUN_1001f4160(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *local_40;
  undefined8 uStack_38;
  undefined8 *local_30;
  code *pcStack_28;
  
  *param_1 = &PTR____cxa_pure_virtual_10146ca60;
  operator_new(0x6f0);
  lVar1 = thunk_FUN_1002a7f60();
  param_1[1] = lVar1;
  *(undefined8 **)(lVar1 + 0x240) = param_1;
  FUN_10016b764(param_1 + 2);
  *param_1 = &PTR_FUN_10146ca00;
  param_1[2] = &PTR_FUN_10146ca30;
  *(undefined1 *)(param_1 + 5) = 0;
  FUN_10031d43c();
  uVar2 = FUN_10031e338();
  uStack_38 = 0;
  pcStack_28 = thunk_FUN_1001f4228;
  local_40 = param_1;
  local_30 = param_1;
  FUN_1000be5e4(uVar2,&local_40);
  FUN_1004e18bc(&DAT_101d234d8,param_1,0x9d2c9b16,thunk_FUN_1001f4444,0);
  FUN_1001f4228(param_1);
  FUN_1001f4444(param_1);
  FUN_1001f46ac(param_1);
  return param_1;
}




void thunk_FUN_1001f4444(void)

{
  FUN_1001f4444();
  return;
}




void FUN_1001f4228(long param_1)

{
  undefined8 ***pppuVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined1 auStack_98 [8];
  void *local_90;
  undefined1 auStack_88 [8];
  void *local_80;
  undefined1 auStack_78 [8];
  void *local_70;
  undefined8 **local_68;
  undefined8 uStack_60;
  long local_58;
  uint local_50 [2];
  long local_48;
  
  lVar3 = FUN_100134104();
  if ((*(char *)(lVar3 + 10) != '\0') && (lVar3 = FUN_10031d43c(), lVar3 != 0)) {
    uVar4 = FUN_10031d43c();
    FUN_10031e024(local_50,uVar4,0);
    *(bool *)(param_1 + 0x28) = local_50[0] != 0;
    FUN_1001f46ac(param_1);
    if (*(char *)(param_1 + 0x28) != '\0') {
      local_68 = (undefined8 ***)0x0;
      uStack_60 = 0;
      local_58 = 0;
      uVar6 = (ulong)local_50[0];
      if (local_50[0] == 0) {
        FUN_10012ee60();
      }
      else {
        lVar3 = 0;
        uVar8 = 0;
        lVar7 = 0;
        uVar10 = 0;
        do {
          lVar5 = local_48 + lVar3;
          uVar9 = *(ulong *)(lVar5 + 0x88);
          if (uVar10 < uVar9) {
            if (*(char *)(lVar5 + 0x47) < '\0') {
              if (*(long *)(local_48 + lVar3 + 0x38) != 0) goto LAB_1001f42cc;
            }
            else if (*(char *)(lVar5 + 0x47) != '\0') {
LAB_1001f42cc:
              std::string::operator=((string *)&local_68,(string *)(lVar5 + 0x30));
            }
            lVar7 = *(long *)(local_48 + lVar3 + 0x90);
            lVar5 = FUN_1004f1a74(0);
            lVar7 = lVar7 - lVar5;
            uVar6 = (ulong)local_50[0];
            uVar10 = uVar9;
          }
          uVar8 = uVar8 + 1;
          lVar3 = lVar3 + 0x98;
        } while (uVar8 < uVar6);
        uVar6 = FUN_10012ee60();
        if (uVar6 < uVar10) {
          FUN_1004e313c(auStack_78);
          pppuVar1 = (undefined8 ***)local_68;
          if (-1 < local_58) {
            pppuVar1 = &local_68;
          }
          uVar4 = FUN_1004e0150(pppuVar1,0);
          thunk_FUN_1004e439c(auStack_88,uVar4);
          iVar2 = FUN_1004e3624(auStack_88);
          if (iVar2 == 0) {
            uVar4 = FUN_1004e0150("MENU_HOME_PANEL_NEW_EVENT_BODY",0);
            FUN_1000153b4(auStack_78,uVar4);
            FUN_1004e3120(auStack_98,"[EVENTNAME]");
            FUN_1004e3bc4(auStack_78,0,auStack_98,auStack_88);
            if (local_90 != (void *)0x0) {
              operator_delete__(local_90);
            }
          }
          else {
            uVar4 = FUN_1004e0150("MENU_HOME_PANEL_NEW_EVENT_BODY_GENERIC",0);
            FUN_1000153b4(auStack_78,uVar4);
          }
          FUN_1002a84d8(*(undefined8 *)(param_1 + 8),auStack_78);
          if (0 < lVar7) {
            FUN_1002a8458(*(undefined8 *)(param_1 + 8),lVar7);
          }
          if (local_80 != (void *)0x0) {
            operator_delete__(local_80);
          }
          if (local_70 != (void *)0x0) {
            operator_delete__(local_70);
          }
        }
      }
      if (local_58 < 0) {
        operator_delete(local_68);
      }
    }
    FUN_10015bcf8(local_50,1);
  }
  return;
}




void FUN_1001f4444(long param_1)

{
  ulong uVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined1 auStack_140 [8];
  void *local_138;
  undefined1 auStack_130 [8];
  void *local_128;
  long local_120;
  void *local_118;
  void *local_110;
  char local_101;
  ulong local_100;
  long local_f8;
  undefined1 auStack_f0 [128];
  long local_70;
  
  local_70 = *(long *)PTR____stack_chk_guard_101444218;
  lVar3 = FUN_100134104();
  if (*(char *)(lVar3 + 10) == '\0') {
    local_100 = 0;
    local_f8 = 0;
    FUN_100136d8c(&local_100);
    FUN_10006d330(auStack_f0,"%s_%s");
    FUN_10001549c(&local_118,auStack_f0);
    lVar3 = FUN_10012eb90(&local_118);
    if (local_101 < '\0') {
      operator_delete(local_118);
    }
    if ((int)local_100 != 0) {
      uVar7 = local_f8 + 0x18;
      do {
        uVar1 = *(ulong *)(uVar7 + 8);
        if (-1 < (char)*(byte *)(uVar7 + 0x17)) {
          uVar1 = (ulong)*(byte *)(uVar7 + 0x17);
        }
        if (((uVar1 == 0x1b) &&
            (iVar2 = std::string::compare(uVar7,0,(char *)0xffffffffffffffff,0x1013e44e0),
            iVar2 == 0)) && (*(undefined1 *)(param_1 + 0x28) = 1, *(int *)(uVar7 - 0x10) != 0)) {
          local_120 = -1;
          lVar6 = *(long *)(uVar7 - 8);
          plVar4 = (long *)(lVar6 + 0x438);
          if (*(char *)(lVar6 + 0x44f) < '\0') {
            if (*(long *)(lVar6 + 0x440) != 0) {
              plVar4 = (long *)*plVar4;
              goto LAB_1001f4598;
            }
          }
          else if (*(char *)(lVar6 + 0x44f) != '\0') {
LAB_1001f4598:
            FUN_1004d2864(plVar4,"%lld");
          }
          if (lVar3 < local_120) {
            uVar5 = FUN_1004e0150("MENU_HOME_PANEL_NEW_EVENT_BODY_GENERIC",0);
            thunk_FUN_1004e439c(&local_118,uVar5);
            FUN_1004e3120(auStack_130,"[EVENTNAME]");
            FUN_1004e3120(auStack_140,"The Summer Pool Party");
            FUN_1004e3bc4(&local_118,0,auStack_130,auStack_140);
            if (local_138 != (void *)0x0) {
              operator_delete__(local_138);
            }
            if (local_128 != (void *)0x0) {
              operator_delete__(local_128);
            }
            uVar8 = *(undefined8 *)(param_1 + 8);
            uVar5 = FUN_1004e0150("MENU_HOME_PANEL_NEW_EVENT_TITLE",0);
            FUN_1002a8378(uVar8,uVar5);
            FUN_1002a84d8(*(undefined8 *)(param_1 + 8),&local_118);
            if (local_110 != (void *)0x0) {
              operator_delete__(local_110);
            }
          }
        }
        lVar6 = uVar7 + 0x60;
        uVar7 = uVar7 + 0x78;
      } while (lVar6 != local_f8 + (local_100 & 0xffffffff) * 0x78);
    }
    FUN_1001f46ac(param_1);
    FUN_100135c64(&local_100,1);
  }
  if (*(long *)PTR____stack_chk_guard_101444218 != local_70) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}




void FUN_1001f46ac(long param_1)

{
  long lVar1;
  bool bVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 8);
  if (*(char *)(param_1 + 0x28) == '\0') {
    bVar2 = false;
  }
  else {
    lVar1 = FUN_10016c2f0();
    bVar2 = *(int *)(lVar1 + 0x38) < 1;
  }
  FUN_1002a8420(uVar3,bVar2);
  return;
}




undefined8 * thunk_FUN_1001f4160(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puStack_40;
  undefined8 uStack_38;
  undefined8 *puStack_30;
  code *pcStack_28;
  
  *param_1 = &PTR____cxa_pure_virtual_10146ca60;
  operator_new(0x6f0);
  lVar1 = thunk_FUN_1002a7f60();
  param_1[1] = lVar1;
  *(undefined8 **)(lVar1 + 0x240) = param_1;
  FUN_10016b764(param_1 + 2);
  *param_1 = &PTR_FUN_10146ca00;
  param_1[2] = &PTR_FUN_10146ca30;
  *(undefined1 *)(param_1 + 5) = 0;
  FUN_10031d43c();
  uVar2 = FUN_10031e338();
  uStack_38 = 0;
  pcStack_28 = thunk_FUN_1001f4228;
  puStack_40 = param_1;
  puStack_30 = param_1;
  FUN_1000be5e4(uVar2,&puStack_40);
  FUN_1004e18bc(&DAT_101d234d8,param_1,0x9d2c9b16,thunk_FUN_1001f4444,0);
  FUN_1001f4228(param_1);
  FUN_1001f4444(param_1);
  FUN_1001f46ac(param_1);
  return param_1;
}




undefined8 * FUN_1001f46f0(undefined8 *param_1)

{
  long lVar1;
  uint *puVar2;
  undefined8 *puVar3;
  
  *param_1 = &PTR_FUN_10146ca00;
  param_1[2] = &PTR_FUN_10146ca30;
  lVar1 = FUN_10031d43c();
  if (lVar1 != 0) {
    FUN_10031d43c();
    puVar2 = (uint *)FUN_10031e338();
    if (*puVar2 != 0) {
      lVar1 = (ulong)*puVar2 << 5;
      puVar3 = *(undefined8 **)(puVar2 + 2);
      do {
        if ((undefined8 *)*puVar3 == param_1) {
          FUN_1000c044c(puVar2,puVar3,puVar3 + 4);
          break;
        }
        lVar1 = lVar1 + -0x20;
        puVar3 = puVar3 + 4;
      } while (lVar1 != 0);
    }
  }
  FUN_1004e1b58(&DAT_101d234d8,param_1);
  FUN_10016b7e0(param_1 + 2);
  *param_1 = &PTR____cxa_pure_virtual_10146ca60;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return param_1;
}




void thunk_FUN_1001f46f0(void)

{
  FUN_1001f46f0();
  return;
}




void FUN_1001f47b0(long param_1)

{
  FUN_1001f46f0(param_1 + -0x10);
  return;
}




void FUN_1001f47b8(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1001f46f0();
  operator_delete(pvVar1);
  return;
}




void FUN_1001f47cc(long param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1001f46f0(param_1 + -0x10);
  operator_delete(pvVar1);
  return;
}




void FUN_1001f47e4(void)

{
  long lVar1;
  
  lVar1 = FUN_100134104();
  if (*(char *)(lVar1 + 10) != '\0') {
    FUN_10022097c("homepanel_cornerwidget_events_tile");
    return;
  }
  FUN_1001db0bc("vainglory://MARKET/MENU_MARKET_TAB_NAME_EVENTS",0);
  return;
}




void thunk_FUN_1001f46ac(void)

{
  FUN_1001f46ac();
  return;
}




void FUN_1001f4820(long param_1)

{
  FUN_1001f46ac(param_1 + -0x10);
  return;
}




void thunk_FUN_1001f4228(void)

{
  FUN_1001f4228();
  return;
}




undefined8 * FUN_1001f482c(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  *param_1 = &PTR____cxa_pure_virtual_10146cae8;
  operator_new(0x470);
  lVar1 = thunk_FUN_1002a8508();
  param_1[1] = lVar1;
  *(undefined8 **)(lVar1 + 0x240) = param_1;
  FUN_10016b764(param_1 + 2);
  *param_1 = &PTR_FUN_10146ca88;
  param_1[2] = &PTR_FUN_10146cab8;
  FUN_1002a8824(param_1[1],"FREE.*");
  uVar2 = param_1[1];
  lVar1 = FUN_10016c2f0();
  FUN_1002a87ec(uVar2,*(int *)(lVar1 + 0x38) < 1);
  return param_1;
}




undefined8 * thunk_FUN_1001f482c(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  *param_1 = &PTR____cxa_pure_virtual_10146cae8;
  operator_new(0x470);
  lVar1 = thunk_FUN_1002a8508();
  param_1[1] = lVar1;
  *(undefined8 **)(lVar1 + 0x240) = param_1;
  FUN_10016b764(param_1 + 2);
  *param_1 = &PTR_FUN_10146ca88;
  param_1[2] = &PTR_FUN_10146cab8;
  FUN_1002a8824(param_1[1],"FREE.*");
  uVar2 = param_1[1];
  lVar1 = FUN_10016c2f0();
  FUN_1002a87ec(uVar2,*(int *)(lVar1 + 0x38) < 1);
  return param_1;
}




undefined8 * FUN_1001f48b8(undefined8 *param_1)

{
  FUN_10016b7e0(param_1 + 2);
  *param_1 = &PTR____cxa_pure_virtual_10146cae8;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return param_1;
}




void FUN_1001f4904(long param_1)

{
  FUN_10016b7e0();
  *(undefined ***)(param_1 + -0x10) = &PTR____cxa_pure_virtual_10146cae8;
  if (*(long **)(param_1 + -8) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + -8) + 8))();
  }
  *(undefined8 *)(param_1 + -8) = 0;
  return;
}




void FUN_1001f4948(undefined8 *param_1)

{
  FUN_10016b7e0(param_1 + 2);
  *param_1 = &PTR____cxa_pure_virtual_10146cae8;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  operator_delete(param_1);
  return;
}




void FUN_1001f4990(long param_1)

{
  FUN_1001f4948(param_1 + -0x10);
  return;
}




void FUN_1001f4998(void)

{
  FUN_10021a0fc("");
  return;
}




void FUN_1001f49a4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  lVar1 = FUN_10016c2f0();
  FUN_1002a87ec(uVar2,*(int *)(lVar1 + 0x38) < 1);
  return;
}




void FUN_1001f49d4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + -8);
  lVar1 = FUN_10016c2f0();
  FUN_1002a87ec(uVar2,*(int *)(lVar1 + 0x38) < 1);
  return;
}




undefined8 * FUN_1001f4a04(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR____cxa_pure_virtual_10146cf40;
  operator_new(0x110);
  lVar1 = thunk_FUN_1002a88f0();
  param_1[1] = lVar1;
  *(undefined8 **)(lVar1 + 0xb8) = param_1;
  FUN_10014f4a0(param_1 + 2);
  FUN_10016b764(param_1 + 5);
  *param_1 = &PTR_FUN_10146cb10;
  param_1[2] = &PTR_FUN_10146cb78;
  param_1[5] = &PTR_FUN_10146cf10;
  *(undefined1 *)(param_1 + 8) = 1;
  FUN_1002a9084(param_1[1],1,"NEWS.*");
  FUN_1002a9084(param_1[1],2,"LEADERBOARDS.*");
  FUN_1002a9084(param_1[1],3,"ACADEMY.*");
  lVar1 = FUN_10016c2f0();
  *(bool *)(param_1 + 8) = *(int *)(lVar1 + 0x38) < 1;
  FUN_1002a8ee0(param_1[1]);
  return param_1;
}




undefined8 * thunk_FUN_1001f4a04(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR____cxa_pure_virtual_10146cf40;
  operator_new(0x110);
  lVar1 = thunk_FUN_1002a88f0();
  param_1[1] = lVar1;
  *(undefined8 **)(lVar1 + 0xb8) = param_1;
  FUN_10014f4a0(param_1 + 2);
  FUN_10016b764(param_1 + 5);
  *param_1 = &PTR_FUN_10146cb10;
  param_1[2] = &PTR_FUN_10146cb78;
  param_1[5] = &PTR_FUN_10146cf10;
  *(undefined1 *)(param_1 + 8) = 1;
  FUN_1002a9084(param_1[1],1,"NEWS.*");
  FUN_1002a9084(param_1[1],2,"LEADERBOARDS.*");
  FUN_1002a9084(param_1[1],3,"ACADEMY.*");
  lVar1 = FUN_10016c2f0();
  *(bool *)(param_1 + 8) = *(int *)(lVar1 + 0x38) < 1;
  FUN_1002a8ee0(param_1[1]);
  return param_1;
}




undefined8 * FUN_1001f4ad4(undefined8 *param_1)

{
  FUN_10016b7e0(param_1 + 5);
  FUN_10014f51c(param_1 + 2);
  *param_1 = &PTR____cxa_pure_virtual_10146cf40;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return param_1;
}




void thunk_FUN_1001f4ad4(void)

{
  FUN_1001f4ad4();
  return;
}




void FUN_1001f4b2c(long param_1)

{
  FUN_1001f4ad4(param_1 + -0x10);
  return;
}




void FUN_1001f4b34(long param_1)

{
  FUN_1001f4ad4(param_1 + -0x28);
  return;
}




void FUN_1001f4b3c(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1001f4ad4();
  operator_delete(pvVar1);
  return;
}




void FUN_1001f4b50(long param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1001f4ad4(param_1 + -0x10);
  operator_delete(pvVar1);
  return;
}




void FUN_1001f4b68(long param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1001f4ad4(param_1 + -0x28);
  operator_delete(pvVar1);
  return;
}




void FUN_1001f4b80(long param_1)

{
  long lVar1;
  
  lVar1 = FUN_10016c2f0();
  *(bool *)(param_1 + 0x40) = *(int *)(lVar1 + 0x38) < 1;
  FUN_1002a8ee0(*(undefined8 *)(param_1 + 8));
  return;
}




void FUN_1001f4bb4(long param_1)

{
  long lVar1;
  
  lVar1 = FUN_10016c2f0();
  *(bool *)(param_1 + 0x18) = *(int *)(lVar1 + 0x38) < 1;
  FUN_1002a8ee0(*(undefined8 *)(param_1 + -0x20));
  return;
}




void FUN_1001f4be8(long param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  iVar1 = FUN_10015d3f8();
  if (iVar1 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 8);
    lVar2 = FUN_10015d3ec();
    FUN_1002a9098(uVar3,*(undefined4 *)(lVar2 + 0x5450));
    uVar3 = *(undefined8 *)(param_1 + 8);
    lVar2 = FUN_10015d3ec();
    FUN_1002a90c8(uVar3,*(undefined4 *)(lVar2 + 0x5454));
    return;
  }
  return;
}




void FUN_1001f4c44(long param_1)

{
  FUN_1001f4be8(param_1 + -0x10);
  return;
}




void FUN_1001f4c4c(long param_1)

{
  if (*(char *)(param_1 + 0x40) != '\0') {
    FUN_1001db0bc("vainglory://Market/MENU_MARKET_TAB_NAME_MARKET/glory_for_ice",0);
    return;
  }
  return;
}




void FUN_1001f4c68(long param_1)

{
  if (*(char *)(param_1 + 0x40) != '\0') {
    FUN_1001db0bc("vainglory://Market/MENU_MARKET_TAB_NAME_MARKET/glory_for_ice",0);
    return;
  }
  return;
}




void FUN_1001f4c84(long param_1)

{
  if (*(char *)(param_1 + 0x40) != '\0') {
    FUN_100221648(&DAT_101d91198,"homepanel_overflow_nav_button_news");
    return;
  }
  return;
}




void FUN_1001f4ca4(void)

{
  FUN_10021db58("homepanel_overflow_nav_button_settings");
  return;
}




void FUN_1001f4cb0(void)

{
  FUN_1002207b8("homepanel_overflow_nav_button_leaderboards");
  return;
}




void FUN_1001f4cbc(long param_1)

{
  if (*(char *)(param_1 + 0x40) != '\0') {
    FUN_10021992c(&DAT_101d91198,"homepanel_overflow_nav_button_academy");
    return;
  }
  return;
}




void FUN_1001f4cdc(long param_1)

{
  if (*(char *)(param_1 + 0x40) != '\0') {
    FUN_100224680("homepanel_overflow_nav_button_tiv");
    return;
  }
  return;
}




long * FUN_1001f4cf4(long *param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined **local_288 [5];
  undefined8 local_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 local_240;
  void *pvStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 local_210;
  undefined1 auStack_208 [296];
  undefined8 local_e0;
  
  *param_1 = (long)&PTR____cxa_pure_virtual_10146d398;
  operator_new(0x2410);
  lVar2 = thunk_FUN_1002a9254();
  param_1[1] = lVar2;
  *(long **)(lVar2 + 0xb8) = param_1;
  FUN_10014f4a0(param_1 + 2);
  FUN_10016b764(param_1 + 5);
  *param_1 = (long)&PTR_FUN_10146cf98;
  param_1[2] = (long)&PTR_FUN_10146cfd0;
  param_1[5] = (long)&PTR_FUN_10146d368;
  FUN_1002a9b50(param_1[1],"ACCOUNT.*");
  lVar3 = param_1[1];
  lVar2 = FUN_10016c2f0();
  FUN_1002a9ee0(lVar3,*(int *)(lVar2 + 0x38) < 1);
  iVar1 = FUN_100131560();
  if (iVar1 != 0) {
    FUN_1004f1580(local_288);
    local_288[0] = &PTR_FUN_10145b860;
    uStack_258 = 0;
    local_260 = 0;
    uStack_248 = 0;
    uStack_250 = 0;
    pvStack_238 = (void *)0x0;
    local_240 = 0;
    uStack_228 = 0;
    uStack_230 = 0;
    uStack_218 = 0;
    local_220 = 0;
    local_210 = 0;
    FUN_100168aa8(auStack_208);
    local_e0 = 0xffffffffffffffff;
    (**(code **)(*param_1 + 0x18))(param_1,local_288);
    local_288[0] = &PTR_FUN_10145b860;
    FUN_10015613c(auStack_208);
    FUN_100156080(&uStack_230,1);
    if (pvStack_238 != (void *)0x0) {
      operator_delete__(pvStack_238);
      local_240 = 0;
      pvStack_238 = (void *)0x0;
    }
    FUN_100155f24(&uStack_250,1);
    FUN_100155eac(&local_260,1);
    FUN_1004f15a8(local_288);
  }
  return param_1;
}




long * thunk_FUN_1001f4cf4(long *param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined **appuStack_288 [5];
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  void *pvStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined1 auStack_208 [296];
  undefined8 uStack_e0;
  
  *param_1 = (long)&PTR____cxa_pure_virtual_10146d398;
  operator_new(0x2410);
  lVar2 = thunk_FUN_1002a9254();
  param_1[1] = lVar2;
  *(long **)(lVar2 + 0xb8) = param_1;
  FUN_10014f4a0(param_1 + 2);
  FUN_10016b764(param_1 + 5);
  *param_1 = (long)&PTR_FUN_10146cf98;
  param_1[2] = (long)&PTR_FUN_10146cfd0;
  param_1[5] = (long)&PTR_FUN_10146d368;
  FUN_1002a9b50(param_1[1],"ACCOUNT.*");
  lVar3 = param_1[1];
  lVar2 = FUN_10016c2f0();
  FUN_1002a9ee0(lVar3,*(int *)(lVar2 + 0x38) < 1);
  iVar1 = FUN_100131560();
  if (iVar1 != 0) {
    FUN_1004f1580(appuStack_288);
    appuStack_288[0] = &PTR_FUN_10145b860;
    uStack_258 = 0;
    uStack_260 = 0;
    uStack_248 = 0;
    uStack_250 = 0;
    pvStack_238 = (void *)0x0;
    uStack_240 = 0;
    uStack_228 = 0;
    uStack_230 = 0;
    uStack_218 = 0;
    uStack_220 = 0;
    uStack_210 = 0;
    FUN_100168aa8(auStack_208);
    uStack_e0 = 0xffffffffffffffff;
    (**(code **)(*param_1 + 0x18))(param_1,appuStack_288);
    appuStack_288[0] = &PTR_FUN_10145b860;
    FUN_10015613c(auStack_208);
    FUN_100156080(&uStack_230,1);
    if (pvStack_238 != (void *)0x0) {
      operator_delete__(pvStack_238);
      uStack_240 = 0;
      pvStack_238 = (void *)0x0;
    }
    FUN_100155f24(&uStack_250,1);
    FUN_100155eac(&uStack_260,1);
    FUN_1004f15a8(appuStack_288);
  }
  return param_1;
}




undefined8 * FUN_1001f4e50(undefined8 *param_1)

{
  FUN_10016b7e0(param_1 + 5);
  FUN_10014f51c(param_1 + 2);
  *param_1 = &PTR____cxa_pure_virtual_10146d398;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return param_1;
}




void thunk_FUN_1001f4e50(void)

{
  FUN_1001f4e50();
  return;
}




void FUN_1001f4ea8(long param_1)

{
  FUN_1001f4e50(param_1 + -0x10);
  return;
}




void FUN_1001f4eb0(long param_1)

{
  FUN_1001f4e50(param_1 + -0x28);
  return;
}




void FUN_1001f4eb8(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1001f4e50();
  operator_delete(pvVar1);
  return;
}




void FUN_1001f4ecc(long param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1001f4e50(param_1 + -0x10);
  operator_delete(pvVar1);
  return;
}




void FUN_1001f4ee4(long param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1001f4e50(param_1 + -0x28);
  operator_delete(pvVar1);
  return;
}




void FUN_1001f4efc(long param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined1 auStack_40 [8];
  void *local_38;
  
  iVar3 = FUN_10015d3f8();
  if (iVar3 != 0) {
    uVar4 = FUN_100131560();
    if (((uVar4 & 1) == 0) && (uVar4 = FUN_10014e20c(), (uVar4 & 1) != 0)) {
      uVar7 = *(undefined8 *)(param_1 + 8);
      uVar5 = FUN_1004e0150("HOME_PANEL_TAP_TO_LOGIN_REGISTER",0);
    }
    else {
      uVar7 = *(undefined8 *)(param_1 + 8);
      FUN_10015d3ec();
      uVar5 = FUN_100164f34();
    }
    FUN_1002a9da4(uVar7,uVar5);
    uVar7 = *(undefined8 *)(param_1 + 8);
    uVar5 = FUN_100327e00();
    lVar6 = FUN_100327f2c(uVar5,1);
    uVar1 = *(undefined4 *)(lVar6 + 4);
    uVar5 = FUN_100327e00();
    lVar6 = FUN_100327f2c(uVar5,0);
    uVar2 = *(undefined4 *)(lVar6 + 4);
    uVar5 = FUN_100327e00();
    lVar6 = FUN_100327f2c(uVar5,2);
    FUN_1002a9dd8(uVar7,uVar1,uVar2,(int)*(float *)(lVar6 + 0x1c));
    return;
  }
  uVar5 = *(undefined8 *)(param_1 + 8);
  FUN_1004e3120(auStack_40,"NO PLAT USER");
  FUN_1002a9da4(uVar5,auStack_40);
  if (local_38 != (void *)0x0) {
    operator_delete__(local_38);
  }
  return;
}




void FUN_1001f4ff4(long param_1)

{
  FUN_1001f4efc(param_1 + -0x10);
  return;
}




void FUN_1001f4ffc(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  lVar1 = FUN_10016c2f0();
  FUN_1002a9ee0(uVar2,*(int *)(lVar1 + 0x38) < 1);
  return;
}




void FUN_1001f502c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + -0x20);
  lVar1 = FUN_10016c2f0();
  FUN_1002a9ee0(uVar2,*(int *)(lVar1 + 0x38) < 1);
  return;
}




void FUN_1001f505c(void)

{
  int iVar1;
  ulong uVar2;
  
  iVar1 = FUN_1004eef10();
  if ((iVar1 == 0) || (uVar2 = FUN_1001311d4(), (uVar2 & 1) != 0)) {
    return;
  }
  uVar2 = FUN_100131560();
  if (((uVar2 & 1) == 0) && (uVar2 = FUN_10014e20c(), (uVar2 & 1) != 0)) {
    FUN_100220d08();
    return;
  }
  FUN_100221f98("homepanel_profile_avatar");
  return;
}




undefined8 *
FUN_1001f50a4(uint *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  uint uVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 *puVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  
  if (param_3 != param_4) {
    uVar12 = (long)param_4 - (long)param_3;
    puVar9 = *(undefined8 **)(param_1 + 2);
    uVar10 = (long)param_2 - (long)puVar9;
    uVar1 = *param_1;
    uVar2 = (ulong)uVar1;
    uVar3 = param_1[1];
    uVar6 = (uint)(uVar12 >> 3);
    if (uVar3 - uVar1 < uVar6) {
      uVar1 = uVar1 + uVar6;
      uVar6 = 0;
      if (uVar3 != 0xffffffff) {
        uVar6 = uVar3 + (~uVar3 | 0xfffffff0) + 0x11;
      }
      if (uVar3 < 0x20) {
        uVar6 = uVar3 << 1;
      }
      uVar3 = uVar1;
      if (uVar1 <= uVar6) {
        uVar3 = uVar6;
      }
      puVar5 = operator_new__((ulong)uVar3 << 3);
      puVar4 = puVar5;
      for (puVar7 = puVar9; puVar7 != param_2; puVar7 = puVar7 + 1) {
        *puVar4 = *puVar7;
        puVar4 = puVar4 + 1;
      }
      uVar11 = uVar10 >> 3 & 0xffffffff;
      _memcpy(puVar5 + (uVar10 >> 3 & 0xffffffff),param_3,uVar12 & 0xfffffffffffffff8);
      uVar2 = (long)puVar9 + (uVar2 * 8 - (long)param_2);
      if (uVar2 != 0) {
        _memcpy((void *)((long)puVar5 + (uVar12 & 0x7fffffff8) + uVar11 * 8),param_2,
                uVar2 & 0xfffffffffffffff8);
      }
      if (puVar9 != (undefined8 *)0x0) {
        operator_delete__(puVar9);
      }
      *(undefined8 **)(param_1 + 2) = puVar5;
      *param_1 = uVar1;
      param_1[1] = uVar3;
    }
    else {
      puVar5 = puVar9 + uVar2;
      uVar11 = (ulong)((long)puVar5 - (long)param_2) >> 3;
      if (uVar6 < (uint)uVar11) {
        uVar12 = uVar12 >> 3 & 0xffffffff;
        if (uVar12 != 0) {
          lVar8 = 0;
          do {
            *(undefined8 *)((long)puVar5 + lVar8) =
                 *(undefined8 *)((long)puVar5 + lVar8 + uVar12 * -8);
            lVar8 = lVar8 + 8;
          } while (lVar8 != uVar12 * 8);
          puVar9 = *(undefined8 **)(param_1 + 2);
        }
        puVar9 = puVar9 + (uVar2 - uVar12);
        lVar8 = (long)puVar9 - (long)param_2;
        if (lVar8 != 0) {
          do {
            puVar9 = puVar9 + -1;
            *(undefined8 *)((long)param_2 + lVar8 + uVar12 * 8 + -8) = *puVar9;
            lVar8 = lVar8 + -8;
          } while (lVar8 != 0);
        }
        do {
          puVar9 = param_3 + 1;
          *param_2 = *param_3;
          param_2 = param_2 + 1;
          param_3 = puVar9;
        } while (puVar9 != param_4);
      }
      else {
        if (puVar5 != param_2) {
          puVar9 = param_2;
          do {
            puVar9[uVar12 >> 3 & 0xffffffff] = *puVar9;
            puVar9 = puVar9 + 1;
          } while (puVar9 != puVar5);
          puVar9 = *(undefined8 **)(param_1 + 2);
        }
        uVar12 = (ulong)((long)puVar5 - (long)param_2) >> 3 & 0xffffffff;
        if (param_3 + (uVar11 & 0xffffffff) != param_4) {
          puVar5 = param_3 + (uVar11 & 0xffffffff);
          puVar9 = puVar9 + uVar2;
          do {
            puVar7 = puVar5 + 1;
            *puVar9 = *puVar5;
            puVar5 = puVar7;
            puVar9 = puVar9 + 1;
          } while (puVar7 != param_4);
        }
        if (uVar12 != 0) {
          lVar8 = uVar12 << 3;
          do {
            *param_2 = *param_3;
            lVar8 = lVar8 + -8;
            param_2 = param_2 + 1;
            param_3 = param_3 + 1;
          } while (lVar8 != 0);
        }
      }
      *param_1 = uVar1 + uVar6;
      puVar5 = *(undefined8 **)(param_1 + 2);
      uVar11 = uVar10 >> 3 & 0xffffffff;
    }
    param_2 = puVar5 + uVar11;
  }
  return param_2;
}




code * FUN_1001f52c0(code *param_1)

{
  long lVar1;
  code *pcVar2;
  code *local_50;
  code *pcStack_48;
  code *local_40;
  code *local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  
  *(undefined ***)param_1 = &PTR_FUN_10146d7c0;
  operator_new(0xd58);
  lVar1 = thunk_FUN_1002a9f0c();
  *(long *)(param_1 + 8) = lVar1;
  *(code **)(lVar1 + 0xb8) = param_1;
  FUN_10014f4a0(param_1 + 0x10);
  *(undefined ***)param_1 = &PTR_thunk_FUN_1001f53b4_10146d3c0;
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_10146d3f0;
  *(undefined ***)(param_1 + 0x28) = &PTR_FUN_10146d788;
  *(undefined8 *)(param_1 + 0x38) = 0;
  pcVar2 = param_1 + 0x30;
  *(undefined8 *)pcVar2 = 0;
  lVar1 = FUN_10017b2f8();
  FUN_1001f55d8(pcVar2,lVar1 + 0x440);
  FUN_1002aa2ec(*(undefined8 *)(param_1 + 8),pcVar2);
  lVar1 = *(long *)(param_1 + 8);
  local_28 = FUN_100644a94("EVENT_ACTIVATE_CHARM");
  local_50 = FUN_1001f53a8;
  local_38 = (code *)0x0;
  uStack_30 = 0;
  local_40 = (code *)0x0;
  pcStack_48 = param_1;
  FUN_10001554c(lVar1 + 8,&local_50);
  lVar1 = FUN_10017b2f8();
  pcStack_48 = (code *)0x0;
  local_38 = FUN_1001f5644;
  local_50 = param_1;
  local_40 = param_1;
  FUN_1000be5e4(lVar1 + 0x18,&local_50);
  return param_1;
}




void FUN_1001f53a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1001f54ec(param_1,param_4);
  return;
}




code * thunk_FUN_1001f52c0(code *param_1)

{
  long lVar1;
  code *pcVar2;
  code *pcStack_50;
  code *pcStack_48;
  code *pcStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined4 uStack_28;
  
  *(undefined ***)param_1 = &PTR_FUN_10146d7c0;
  operator_new(0xd58);
  lVar1 = thunk_FUN_1002a9f0c();
  *(long *)(param_1 + 8) = lVar1;
  *(code **)(lVar1 + 0xb8) = param_1;
  FUN_10014f4a0(param_1 + 0x10);
  *(undefined ***)param_1 = &PTR_thunk_FUN_1001f53b4_10146d3c0;
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_10146d3f0;
  *(undefined ***)(param_1 + 0x28) = &PTR_FUN_10146d788;
  *(undefined8 *)(param_1 + 0x38) = 0;
  pcVar2 = param_1 + 0x30;
  *(undefined8 *)pcVar2 = 0;
  lVar1 = FUN_10017b2f8();
  FUN_1001f55d8(pcVar2,lVar1 + 0x440);
  FUN_1002aa2ec(*(undefined8 *)(param_1 + 8),pcVar2);
  lVar1 = *(long *)(param_1 + 8);
  uStack_28 = FUN_100644a94("EVENT_ACTIVATE_CHARM");
  pcStack_50 = FUN_1001f53a8;
  pcStack_38 = (code *)0x0;
  uStack_30 = 0;
  pcStack_40 = (code *)0x0;
  pcStack_48 = param_1;
  FUN_10001554c(lVar1 + 8,&pcStack_50);
  lVar1 = FUN_10017b2f8();
  pcStack_48 = (code *)0x0;
  pcStack_38 = FUN_1001f5644;
  pcStack_50 = param_1;
  pcStack_40 = param_1;
  FUN_1000be5e4(lVar1 + 0x18,&pcStack_50);
  return param_1;
}




undefined8 * FUN_1001f53b4(undefined8 *param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  
  *param_1 = &PTR_thunk_FUN_1001f53b4_10146d3c0;
  param_1[2] = &PTR_FUN_10146d3f0;
  param_1[5] = &PTR_FUN_10146d788;
  if (param_1[7] != 0) {
    *(undefined4 *)(param_1 + 6) = 0;
  }
  lVar2 = FUN_10017b2f8();
  uVar1 = *(uint *)(lVar2 + 0x18);
  if (uVar1 != 0) {
    lVar3 = (ulong)uVar1 << 5;
    puVar4 = *(undefined8 **)(lVar2 + 0x20);
    do {
      if ((undefined8 *)*puVar4 == param_1) {
        FUN_1000c044c((uint *)(lVar2 + 0x18),puVar4,puVar4 + 4);
        break;
      }
      lVar3 = lVar3 + -0x20;
      puVar4 = puVar4 + 4;
    } while (lVar3 != 0);
  }
  if ((void *)param_1[7] != (void *)0x0) {
    operator_delete__((void *)param_1[7]);
    param_1[6] = 0;
    param_1[7] = 0;
  }
  FUN_10014f51c(param_1 + 2);
  *param_1 = &PTR_FUN_10146d7c0;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return param_1;
}




void thunk_FUN_1001f53b4(void)

{
  FUN_1001f53b4();
  return;
}




void FUN_1001f5488(long param_1)

{
  FUN_1001f53b4(param_1 + -0x10);
  return;
}




void FUN_1001f5490(long param_1)

{
  FUN_1001f53b4(param_1 + -0x28);
  return;
}




void FUN_1001f5498(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1001f53b4();
  operator_delete(pvVar1);
  return;
}




void FUN_1001f54ac(long param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1001f53b4(param_1 + -0x10);
  operator_delete(pvVar1);
  return;
}




void FUN_1001f54c4(long param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1001f53b4(param_1 + -0x28);
  operator_delete(pvVar1);
  return;
}




undefined8 FUN_1001f54dc(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}




undefined8 FUN_1001f54e4(long param_1)

{
  return *(undefined8 *)(param_1 + -0x20);
}




void FUN_1001f54ec(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = FUN_100644b2c(param_2);
  if (lVar1 != 0) {
    uVar2 = FUN_100644b2c(param_2);
    uVar3 = FUN_10017b2f8();
    FUN_10017ab0c(uVar3,uVar2);
    return;
  }
  return;
}




void FUN_1001f5534(void)

{
  FUN_1004e0150("INVENTORY_CHARMS_TAB_TITLE",0);
  return;
}




void FUN_1001f5544(void)

{
  FUN_1004e0150("INVENTORY_CHARMS_TAB_TITLE",0);
  return;
}




undefined8 * FUN_1001f5554(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10146d7c0;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return param_1;
}




void FUN_1001f5598(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10146d7c0;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  operator_delete(param_1);
  return;
}




void FUN_1001f55d8(uint *param_1,uint *param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  
  if (param_1 != param_2) {
    if (*(void **)(param_1 + 2) != (void *)0x0) {
      operator_delete__(*(void **)(param_1 + 2));
      param_1[0] = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
    }
    FUN_10017b304(param_1,*param_2);
    uVar1 = *param_2;
    if (uVar1 != 0) {
      lVar4 = (ulong)uVar1 << 3;
      puVar2 = *(undefined8 **)(param_2 + 2);
      puVar3 = *(undefined8 **)(param_1 + 2);
      do {
        *puVar3 = *puVar2;
        lVar4 = lVar4 + -8;
        puVar2 = puVar2 + 1;
        puVar3 = puVar3 + 1;
      } while (lVar4 != 0);
    }
    *param_1 = uVar1;
  }
  return;
}




void FUN_1001f5644(long param_1)

{
  FUN_1002aa108(*(undefined8 *)(param_1 + 8));
  return;
}




undefined8 * FUN_1001f564c(undefined8 *param_1)

{
  int iVar1;
  long lVar2;
  undefined8 *local_40;
  undefined8 uStack_38;
  undefined8 *local_30;
  code *pcStack_28;
  
  *param_1 = &PTR_FUN_10146dbe0;
  operator_new(0xea8);
  lVar2 = thunk_FUN_1002aaa60();
  param_1[1] = lVar2;
  *(undefined8 **)(lVar2 + 0xb8) = param_1;
  FUN_10014f4a0(param_1 + 2);
  *param_1 = &PTR_thunk_FUN_1001f5760_10146d7e0;
  param_1[2] = &PTR_FUN_10146d810;
  param_1[5] = &PTR_FUN_10146dba8;
  param_1[7] = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  param_1[6] = 0;
  lVar2 = FUN_1001e1428();
  FUN_1001f5978(param_1 + 6,lVar2 + 0x450);
  lVar2 = FUN_1001e1428();
  uStack_38 = 0;
  pcStack_28 = thunk_FUN_1001f5720;
  local_40 = param_1;
  local_30 = param_1;
  FUN_1000be5e4(lVar2 + 0x18,&local_40);
  lVar2 = FUN_1001e1428();
  uStack_38 = 0;
  pcStack_28 = thunk_FUN_1001f5720;
  local_40 = param_1;
  local_30 = param_1;
  FUN_1000be5e4(lVar2 + 0x28,&local_40);
  iVar1 = FUN_100131560();
  if (iVar1 != 0) {
    FUN_1001f5720(param_1);
  }
  return param_1;
}




void FUN_1001f5720(long param_1)

{
  if (*(char *)(param_1 + 0x40) == '\0') {
    *(undefined1 *)(param_1 + 0x40) = 1;
    FUN_1002aaea0(*(undefined8 *)(param_1 + 8),param_1 + 0x30);
  }
  FUN_1002aabbc(*(undefined8 *)(param_1 + 8));
  return;
}




undefined8 * thunk_FUN_1001f564c(undefined8 *param_1)

{
  int iVar1;
  long lVar2;
  undefined8 *puStack_40;
  undefined8 uStack_38;
  undefined8 *puStack_30;
  code *pcStack_28;
  
  *param_1 = &PTR_FUN_10146dbe0;
  operator_new(0xea8);
  lVar2 = thunk_FUN_1002aaa60();
  param_1[1] = lVar2;
  *(undefined8 **)(lVar2 + 0xb8) = param_1;
  FUN_10014f4a0(param_1 + 2);
  *param_1 = &PTR_thunk_FUN_1001f5760_10146d7e0;
  param_1[2] = &PTR_FUN_10146d810;
  param_1[5] = &PTR_FUN_10146dba8;
  param_1[7] = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  param_1[6] = 0;
  lVar2 = FUN_1001e1428();
  FUN_1001f5978(param_1 + 6,lVar2 + 0x450);
  lVar2 = FUN_1001e1428();
  uStack_38 = 0;
  pcStack_28 = thunk_FUN_1001f5720;
  puStack_40 = param_1;
  puStack_30 = param_1;
  FUN_1000be5e4(lVar2 + 0x18,&puStack_40);
  lVar2 = FUN_1001e1428();
  uStack_38 = 0;
  pcStack_28 = thunk_FUN_1001f5720;
  puStack_40 = param_1;
  puStack_30 = param_1;
  FUN_1000be5e4(lVar2 + 0x28,&puStack_40);
  iVar1 = FUN_100131560();
  if (iVar1 != 0) {
    FUN_1001f5720(param_1);
  }
  return param_1;
}




undefined8 * FUN_1001f5760(undefined8 *param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  
  *param_1 = &PTR_thunk_FUN_1001f5760_10146d7e0;
  param_1[2] = &PTR_FUN_10146d810;
  param_1[5] = &PTR_FUN_10146dba8;
  if (param_1[7] != 0) {
    *(undefined4 *)(param_1 + 6) = 0;
  }
  lVar2 = FUN_1001e1428();
  uVar1 = *(uint *)(lVar2 + 0x18);
  if (uVar1 != 0) {
    lVar3 = (ulong)uVar1 << 5;
    puVar4 = *(undefined8 **)(lVar2 + 0x20);
    do {
      if ((undefined8 *)*puVar4 == param_1) {
        FUN_1000c044c((uint *)(lVar2 + 0x18),puVar4,puVar4 + 4);
        break;
      }
      lVar3 = lVar3 + -0x20;
      puVar4 = puVar4 + 4;
    } while (lVar3 != 0);
  }
  lVar2 = FUN_1001e1428();
  uVar1 = *(uint *)(lVar2 + 0x28);
  if (uVar1 != 0) {
    lVar3 = (ulong)uVar1 << 5;
    puVar4 = *(undefined8 **)(lVar2 + 0x30);
    do {
      if ((undefined8 *)*puVar4 == param_1) {
        FUN_1000c044c((uint *)(lVar2 + 0x28),puVar4,puVar4 + 4);
        break;
      }
      lVar3 = lVar3 + -0x20;
      puVar4 = puVar4 + 4;
    } while (lVar3 != 0);
  }
  if ((void *)param_1[7] != (void *)0x0) {
    operator_delete__((void *)param_1[7]);
    param_1[6] = 0;
    param_1[7] = 0;
  }
  FUN_10014f51c(param_1 + 2);
  *param_1 = &PTR_FUN_10146dbe0;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return param_1;
}




void thunk_FUN_1001f5760(void)

{
  FUN_1001f5760();
  return;
}




void FUN_1001f5870(long param_1)

{
  FUN_1001f5760(param_1 + -0x10);
  return;
}




void FUN_1001f5878(long param_1)

{
  FUN_1001f5760(param_1 + -0x28);
  return;
}




void FUN_1001f5880(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1001f5760();
  operator_delete(pvVar1);
  return;
}




void FUN_1001f5894(long param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1001f5760(param_1 + -0x10);
  operator_delete(pvVar1);
  return;
}




void FUN_1001f58ac(long param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1001f5760(param_1 + -0x28);
  operator_delete(pvVar1);
  return;
}




undefined8 FUN_1001f58c4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}




undefined8 FUN_1001f58cc(long param_1)

{
  return *(undefined8 *)(param_1 + -0x20);
}




void FUN_1001f58d4(void)

{
  FUN_1004e0150("INVENTORY_HAT_TAB_TITLE",0);
  return;
}




void FUN_1001f58e4(void)

{
  FUN_1004e0150("INVENTORY_HAT_TAB_TITLE",0);
  return;
}




undefined8 * FUN_1001f58f4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10146dbe0;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return param_1;
}




void FUN_1001f5938(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10146dbe0;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  operator_delete(param_1);
  return;
}




void FUN_1001f5978(uint *param_1,uint *param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  
  if (param_1 != param_2) {
    if (*(void **)(param_1 + 2) != (void *)0x0) {
      operator_delete__(*(void **)(param_1 + 2));
      param_1[0] = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
    }
    FUN_1001e17e0(param_1,*param_2);
    uVar1 = *param_2;
    if (uVar1 != 0) {
      lVar4 = (ulong)uVar1 << 3;
      puVar2 = *(undefined8 **)(param_2 + 2);
      puVar3 = *(undefined8 **)(param_1 + 2);
      do {
        *puVar3 = *puVar2;
        lVar4 = lVar4 + -8;
        puVar2 = puVar2 + 1;
        puVar3 = puVar3 + 1;
      } while (lVar4 != 0);
    }
    *param_1 = uVar1;
  }
  return;
}




void thunk_FUN_1001f5720(void)

{
  FUN_1001f5720();
  return;
}




undefined8 * FUN_1001f59e8(undefined8 *param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 ***pppuVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined8 **local_58;
  ulong local_50;
  undefined8 uStack_48;
  
  *param_1 = &PTR_FUN_10146e070;
  operator_new(0x2c88);
  lVar1 = thunk_FUN_1002af074();
  param_1[1] = lVar1;
  *(undefined8 **)(lVar1 + 0xb8) = param_1;
  FUN_10014f4a0(param_1 + 2);
  puVar8 = param_1 + 6;
  *puVar8 = &PTR_FUN_10146e058;
  param_1[7] = 0;
  param_1[8] = 0;
  *param_1 = &PTR_thunk_FUN_1001f5dd4_10146dc00;
  param_1[2] = &PTR_FUN_10146dc68;
  param_1[5] = &PTR_FUN_10146e000;
  puVar6 = param_1 + 9;
  *puVar6 = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  operator_new(0x38);
  lVar1 = thunk_FUN_1001f25c4();
  local_58 = (undefined8 **)(lVar1 + 0x28);
  FUN_1001f5d50(puVar6,&local_58);
  operator_new(0x38);
  lVar1 = thunk_FUN_1002098e0();
  local_58 = (undefined8 **)(lVar1 + 0x28);
  FUN_1001f5d50(puVar6,&local_58);
  operator_new(0x38);
  lVar1 = thunk_FUN_100217944();
  local_58 = (undefined8 **)(lVar1 + 0x28);
  FUN_1001f5d50(puVar6,&local_58);
  operator_new(0x48);
  lVar1 = thunk_FUN_1001f564c();
  local_58 = (undefined8 **)(lVar1 + 0x28);
  FUN_1001f5d50(puVar6,&local_58);
  operator_new(0x40);
  lVar1 = thunk_FUN_1001f641c();
  local_58 = (undefined8 **)(lVar1 + 0x28);
  FUN_1001f5d50(puVar6,&local_58);
  operator_new(0x40);
  lVar1 = thunk_FUN_1001f52c0();
  local_58 = (undefined8 **)(lVar1 + 0x28);
  FUN_1001f5d50(puVar6,&local_58);
  uVar2 = FUN_100131560();
  if ((uVar2 & 1) == 0) {
    operator_new(0x40);
    lVar1 = thunk_FUN_1001e99e0();
    local_58 = (undefined8 **)(lVar1 + 0x28);
    FUN_1001f5d50(puVar6,&local_58);
    operator_new(0x50);
    lVar1 = thunk_FUN_100207c5c();
    param_1[0xb] = lVar1;
    local_58 = (undefined8 **)(lVar1 + 0x28);
    FUN_1001f5d50(puVar6,&local_58);
    operator_new(0x40);
    lVar1 = thunk_FUN_1001e85e4();
    local_58 = (undefined8 **)(lVar1 + 0x28);
    FUN_1001f5d50(puVar6,&local_58);
    operator_new(0x50);
    lVar1 = thunk_FUN_10021844c();
    local_58 = (undefined8 **)(lVar1 + 0x28);
    FUN_1001f5d50(puVar6,&local_58);
  }
  if (*(int *)(param_1 + 9) != 0) {
    uVar2 = 0;
    do {
      uVar3 = (**(code **)(**(long **)(param_1[10] + uVar2 * 8) + 0x10))();
      uVar9 = param_1[1];
      uVar4 = (**(code **)(**(long **)(param_1[10] + uVar2 * 8) + 0x20))();
      uVar5 = (**(code **)(**(long **)(param_1[10] + uVar2 * 8) + 0x18))();
      FUN_1002afb68(uVar9,uVar4,0,uVar3,uVar5);
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(uint *)(param_1 + 9));
  }
  uVar2 = FUN_100131560();
  if ((uVar2 & 1) != 0) goto LAB_1001f5ce4;
  puVar6 = (undefined8 *)FUN_1002d6d8c(*(undefined8 *)(param_1[0xb] + 8));
  if ((char)*(byte *)((long)puVar6 + 0x17) < '\0') {
    uVar2 = puVar6[1];
    if (0xffffffffffffffef < uVar2) {
                    /* WARNING: Subroutine does not return */
      FUN_1001f62bc();
    }
    puVar6 = (undefined8 *)*puVar6;
  }
  else {
    uVar2 = (ulong)*(byte *)((long)puVar6 + 0x17);
  }
  if (uVar2 < 0x17) {
    pppuVar7 = &local_58;
    uStack_48 = CONCAT17((char)uVar2,(undefined7)uStack_48);
    if (uVar2 != 0) goto LAB_1001f5c9c;
  }
  else {
    uVar10 = uVar2 + 0x10 & 0xfffffffffffffff0;
    pppuVar7 = operator_new(uVar10);
    uStack_48 = uVar10 | 0x8000000000000000;
    local_58 = pppuVar7;
    local_50 = uVar2;
LAB_1001f5c9c:
    _memcpy(pppuVar7,puVar6,uVar2);
  }
  *(undefined1 *)((long)pppuVar7 + uVar2) = 0;
  pppuVar7 = (undefined8 ***)local_58;
  if (-1 < (long)uStack_48) {
    pppuVar7 = &local_58;
  }
  FUN_100102198("blueprintsOwned",pppuVar7,1);
  if ((long)uStack_48 < 0) {
    operator_delete(local_58);
  }
LAB_1001f5ce4:
  FUN_1002afc3c(param_1[1],0);
  FUN_10015d3ec();
  FUN_100166ab8();
  FUN_1001dac1c(puVar8,"TALENTS",param_1,FUN_1001f63c8);
  FUN_1001dac1c(puVar8,"HERO",param_1,FUN_1001f6404);
  return param_1;
}




void FUN_1001f5d50(uint *param_1,undefined8 *param_2)

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
    FUN_1001f634c(param_1,uVar2);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




undefined8 * thunk_FUN_1001f59e8(undefined8 *param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 ***pppuVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined8 **ppuStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  
  *param_1 = &PTR_FUN_10146e070;
  operator_new(0x2c88);
  lVar1 = thunk_FUN_1002af074();
  param_1[1] = lVar1;
  *(undefined8 **)(lVar1 + 0xb8) = param_1;
  FUN_10014f4a0(param_1 + 2);
  puVar8 = param_1 + 6;
  *puVar8 = &PTR_FUN_10146e058;
  param_1[7] = 0;
  param_1[8] = 0;
  *param_1 = &PTR_thunk_FUN_1001f5dd4_10146dc00;
  param_1[2] = &PTR_FUN_10146dc68;
  param_1[5] = &PTR_FUN_10146e000;
  puVar6 = param_1 + 9;
  *puVar6 = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  operator_new(0x38);
  lVar1 = thunk_FUN_1001f25c4();
  ppuStack_58 = (undefined8 **)(lVar1 + 0x28);
  FUN_1001f5d50(puVar6,&ppuStack_58);
  operator_new(0x38);
  lVar1 = thunk_FUN_1002098e0();
  ppuStack_58 = (undefined8 **)(lVar1 + 0x28);
  FUN_1001f5d50(puVar6,&ppuStack_58);
  operator_new(0x38);
  lVar1 = thunk_FUN_100217944();
  ppuStack_58 = (undefined8 **)(lVar1 + 0x28);
  FUN_1001f5d50(puVar6,&ppuStack_58);
  operator_new(0x48);
  lVar1 = thunk_FUN_1001f564c();
  ppuStack_58 = (undefined8 **)(lVar1 + 0x28);
  FUN_1001f5d50(puVar6,&ppuStack_58);
  operator_new(0x40);
  lVar1 = thunk_FUN_1001f641c();
  ppuStack_58 = (undefined8 **)(lVar1 + 0x28);
  FUN_1001f5d50(puVar6,&ppuStack_58);
  operator_new(0x40);
  lVar1 = thunk_FUN_1001f52c0();
  ppuStack_58 = (undefined8 **)(lVar1 + 0x28);
  FUN_1001f5d50(puVar6,&ppuStack_58);
  uVar2 = FUN_100131560();
  if ((uVar2 & 1) == 0) {
    operator_new(0x40);
    lVar1 = thunk_FUN_1001e99e0();
    ppuStack_58 = (undefined8 **)(lVar1 + 0x28);
    FUN_1001f5d50(puVar6,&ppuStack_58);
    operator_new(0x50);
    lVar1 = thunk_FUN_100207c5c();
    param_1[0xb] = lVar1;
    ppuStack_58 = (undefined8 **)(lVar1 + 0x28);
    FUN_1001f5d50(puVar6,&ppuStack_58);
    operator_new(0x40);
    lVar1 = thunk_FUN_1001e85e4();
    ppuStack_58 = (undefined8 **)(lVar1 + 0x28);
    FUN_1001f5d50(puVar6,&ppuStack_58);
    operator_new(0x50);
    lVar1 = thunk_FUN_10021844c();
    ppuStack_58 = (undefined8 **)(lVar1 + 0x28);
    FUN_1001f5d50(puVar6,&ppuStack_58);
  }
  if (*(int *)(param_1 + 9) != 0) {
    uVar2 = 0;
    do {
      uVar3 = (**(code **)(**(long **)(param_1[10] + uVar2 * 8) + 0x10))();
      uVar9 = param_1[1];
      uVar4 = (**(code **)(**(long **)(param_1[10] + uVar2 * 8) + 0x20))();
      uVar5 = (**(code **)(**(long **)(param_1[10] + uVar2 * 8) + 0x18))();
      FUN_1002afb68(uVar9,uVar4,0,uVar3,uVar5);
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(uint *)(param_1 + 9));
  }
  uVar2 = FUN_100131560();
  if ((uVar2 & 1) != 0) goto LAB_1001f5ce4;
  puVar6 = (undefined8 *)FUN_1002d6d8c(*(undefined8 *)(param_1[0xb] + 8));
  if ((char)*(byte *)((long)puVar6 + 0x17) < '\0') {
    uVar2 = puVar6[1];
    if (0xffffffffffffffef < uVar2) {
                    /* WARNING: Subroutine does not return */
      FUN_1001f62bc();
    }
    puVar6 = (undefined8 *)*puVar6;
  }
  else {
    uVar2 = (ulong)*(byte *)((long)puVar6 + 0x17);
  }
  if (uVar2 < 0x17) {
    pppuVar7 = &ppuStack_58;
    uStack_48 = CONCAT17((char)uVar2,(undefined7)uStack_48);
    if (uVar2 != 0) goto LAB_1001f5c9c;
  }
  else {
    uVar10 = uVar2 + 0x10 & 0xfffffffffffffff0;
    pppuVar7 = operator_new(uVar10);
    uStack_48 = uVar10 | 0x8000000000000000;
    ppuStack_58 = pppuVar7;
    uStack_50 = uVar2;
LAB_1001f5c9c:
    _memcpy(pppuVar7,puVar6,uVar2);
  }
  *(undefined1 *)((long)pppuVar7 + uVar2) = 0;
  pppuVar7 = (undefined8 ***)ppuStack_58;
  if (-1 < (long)uStack_48) {
    pppuVar7 = &ppuStack_58;
  }
  FUN_100102198("blueprintsOwned",pppuVar7,1);
  if ((long)uStack_48 < 0) {
    operator_delete(ppuStack_58);
  }
LAB_1001f5ce4:
  FUN_1002afc3c(param_1[1],0);
  FUN_10015d3ec();
  FUN_100166ab8();
  FUN_1001dac1c(puVar8,"TALENTS",param_1,FUN_1001f63c8);
  FUN_1001dac1c(puVar8,"HERO",param_1,FUN_1001f6404);
  return param_1;
}




undefined8 * FUN_1001f5dd4(undefined8 *param_1)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  uint *puVar4;
  ulong uVar5;
  
  *param_1 = &PTR_thunk_FUN_1001f5dd4_10146dc00;
  param_1[2] = &PTR_FUN_10146dc68;
  param_1[5] = &PTR_FUN_10146e000;
  param_1[6] = &PTR_FUN_10146e058;
  param_1[0xb] = 0;
  puVar4 = (uint *)(param_1 + 9);
  uVar2 = *puVar4;
  if (uVar2 != 0) {
    uVar5 = 0;
    do {
      lVar3 = param_1[10];
      plVar1 = *(long **)(lVar3 + uVar5 * 8);
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
        lVar3 = param_1[10];
        uVar2 = *(uint *)(param_1 + 9);
      }
      *(undefined8 *)(lVar3 + uVar5 * 8) = 0;
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar2);
  }
  if ((void *)param_1[10] != (void *)0x0) {
    *puVar4 = 0;
    operator_delete__((void *)param_1[10]);
    puVar4[0] = 0;
    puVar4[1] = 0;
    param_1[10] = 0;
  }
  param_1[6] = &PTR_FUN_10146c930;
  FUN_1001f3bd4(param_1 + 7,1);
  FUN_10014f51c(param_1 + 2);
  *param_1 = &PTR_FUN_10146e070;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return param_1;
}




void thunk_FUN_1001f5dd4(void)

{
  FUN_1001f5dd4();
  return;
}




void FUN_1001f5ec0(long param_1)

{
  FUN_1001f5dd4(param_1 + -0x10);
  return;
}




void FUN_1001f5ec8(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1001f5dd4();
  operator_delete(pvVar1);
  return;
}




void FUN_1001f5edc(long param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1001f5dd4(param_1 + -0x10);
  operator_delete(pvVar1);
  return;
}




void FUN_1001f5ef4(void)

{
  FUN_10015d3ec();
  FUN_100166ab8();
  return;
}




void FUN_1001f5f08(void)

{
  FUN_10015d3ec();
  FUN_100166ab8();
  return;
}




void FUN_1001f5f1c(void)

{
  FUN_1004e0150("MAIN_MENU_BAG",0);
  return;
}




void FUN_1001f5f2c(void)

{
  FUN_1004e0150("MAIN_MENU_BAG",0);
  return;
}




void FUN_1001f5f3c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  
  if (*(int *)(param_1 + 0x48) != 0) {
    uVar2 = 0;
    do {
      uVar1 = (**(code **)(**(long **)(*(long *)(param_1 + 0x50) + uVar2 * 8) + 0x18))();
      FUN_1001c3fc8(param_2,uVar1);
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(uint *)(param_1 + 0x48));
  }
  return;
}




void FUN_1001f5fa0(long param_1)

{
  FUN_1001f5f3c(param_1 + -0x28);
  return;
}




undefined8 FUN_1001f5fa8(undefined8 param_1,long param_2)

{
  ulong uVar1;
  undefined8 ***pppuVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined8 uVar5;
  char *pcVar6;
  undefined8 *puVar7;
  ulong uVar8;
  void *local_50 [2];
  char local_39;
  undefined8 **local_38;
  ulong local_30;
  byte local_21;
  
  FUN_10001549c(&local_38,"*");
  puVar7 = *(undefined8 **)(param_2 + 8);
  puVar3 = (undefined8 *)*puVar7;
  if (-1 < *(char *)((long)puVar7 + 0x17)) {
    puVar3 = puVar7;
  }
  std::string::append((char *)&local_38,(ulong)puVar3);
  std::string::append((char *)&local_38);
  uVar8 = (ulong)local_21;
  uVar1 = local_30;
  if (-1 < (char)local_21) {
    uVar1 = uVar8;
  }
  if (uVar1 == 6) {
    iVar4 = std::string::compare((ulong)&local_38,0,(char *)0xffffffffffffffff,0x1013e4644);
    if (iVar4 != 0) {
      uVar8 = (ulong)local_21;
      goto LAB_1001f6048;
    }
    pcVar6 = "*Sayoc*";
  }
  else {
LAB_1001f6048:
    uVar1 = local_30;
    if (-1 < (char)local_21) {
      uVar1 = uVar8;
    }
    if (uVar1 == 6) {
      iVar4 = std::string::compare((ulong)&local_38,0,(char *)0xffffffffffffffff,0x1013e4653);
      if (iVar4 == 0) {
        pcVar6 = "*Hero009*";
        goto LAB_1001f6128;
      }
      uVar8 = (ulong)local_21;
    }
    uVar1 = local_30;
    if (-1 < (char)local_21) {
      uVar1 = uVar8;
    }
    if (uVar1 == 8) {
      iVar4 = std::string::compare((ulong)&local_38,0,(char *)0xffffffffffffffff,0x1013e4664);
      if (iVar4 == 0) {
        pcVar6 = "*Hero010*";
        goto LAB_1001f6128;
      }
      uVar8 = (ulong)local_21;
    }
    if (-1 < (char)local_21) {
      local_30 = uVar8;
    }
    if ((local_30 != 6) ||
       (iVar4 = std::string::compare((ulong)&local_38,0,(char *)0xffffffffffffffff,0x1013e466d),
       iVar4 != 0)) goto LAB_1001f614c;
    pcVar6 = "*Hero016*";
  }
LAB_1001f6128:
  FUN_10001549c(local_50,pcVar6);
  std::string::operator=((string *)&local_38,(string *)local_50);
  if (local_39 < '\0') {
    operator_delete(local_50[0]);
  }
LAB_1001f614c:
  pppuVar2 = (undefined8 ***)local_38;
  if (-1 < (char)local_21) {
    pppuVar2 = &local_38;
  }
  iVar4 = FUN_10034be94(pppuVar2);
  if (iVar4 != 0) {
    uVar5 = FUN_100341d4c();
    iVar4 = FUN_100342900(uVar5,&local_38);
    pcVar6 = "Talents";
    if (iVar4 == 0) {
      pcVar6 = "";
    }
    FUN_10001549c(local_50,pcVar6);
    FUN_10021c264(&local_38,local_50,0,&DAT_101873a48);
    if (local_39 < '\0') {
      operator_delete(local_50[0]);
    }
  }
  if ((char)local_21 < '\0') {
    operator_delete(local_38);
  }
  return 0;
}




undefined8 FUN_1001f61e0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}




char * FUN_1001f61e8(void)

{
  return "main_nav_heroes";
}




void FUN_1001f61f4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001001f6204. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 8) + 0x138))(*(long **)(param_1 + 8),1);
  return;
}




void FUN_1001f6208(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001001f6218. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 8) + 0x140))(*(long **)(param_1 + 8),1);
  return;
}




void FUN_1001f621c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001001f622c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 8) + 0x138))(*(long **)(param_1 + 8),0);
  return;
}




void FUN_1001f6230(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001001f6240. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 8) + 0x140))(*(long **)(param_1 + 8),0);
  return;
}




undefined8 FUN_1001f6244(long param_1)

{
  return *(undefined8 *)(param_1 + -0x20);
}




void FUN_1001f624c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001001f625c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + -0x20) + 0x138))(*(long **)(param_1 + -0x20),1);
  return;
}




void FUN_1001f6260(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001001f6270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + -0x20) + 0x140))(*(long **)(param_1 + -0x20),1);
  return;
}




void FUN_1001f6274(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001001f6284. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + -0x20) + 0x138))(*(long **)(param_1 + -0x20),0);
  return;
}




void FUN_1001f6288(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001001f6298. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + -0x20) + 0x140))(*(long **)(param_1 + -0x20),0);
  return;
}




char * FUN_1001f629c(void)

{
  return "main_nav_heroes";
}




undefined4 FUN_1001f62a8(void)

{
  return 0xc2640000;
}




void FUN_1001f62bc(void)

{
                    /* WARNING: Subroutine does not return */
  _abort();
}




undefined8 * FUN_1001f62c8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10146e070;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return param_1;
}




void FUN_1001f630c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10146e070;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  operator_delete(param_1);
  return;
}




void FUN_1001f634c(uint *param_1,uint param_2)

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




undefined8 FUN_1001f63c8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  uVar1 = FUN_1004e0150("MENU_HERO_TAB_NAME_TALENTS",0);
  FUN_1002afc48(uVar2,uVar1);
  return 0;
}




undefined8 FUN_1001f6404(void)

{
  FUN_1001f5fa8();
  return 0;
}




undefined8 * FUN_1001f641c(undefined8 *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *local_40;
  undefined8 uStack_38;
  undefined8 *local_30;
  code *pcStack_28;
  
  *param_1 = &PTR_FUN_10146e490;
  operator_new(0xff0);
  lVar1 = thunk_FUN_1002ad248();
  param_1[1] = lVar1;
  *(undefined8 **)(lVar1 + 0xb8) = param_1;
  FUN_10014f4a0(param_1 + 2);
  *param_1 = &PTR_thunk_FUN_1001f64ec_10146e090;
  param_1[2] = &PTR_FUN_10146e0c0;
  param_1[5] = &PTR_FUN_10146e458;
  param_1[7] = 0;
  puVar2 = param_1 + 6;
  *puVar2 = 0;
  lVar1 = FUN_10028cfcc();
  FUN_1001f6704(puVar2,lVar1 + 0x450);
  FUN_1002ada88(param_1[1],puVar2);
  lVar1 = FUN_10028cfcc();
  uStack_38 = 0;
  pcStack_28 = FUN_1001f67ec;
  local_40 = param_1;
  local_30 = param_1;
  FUN_1000be5e4(lVar1 + 0x18,&local_40);
  lVar1 = FUN_10028cfcc();
  uStack_38 = 0;
  pcStack_28 = FUN_1001f67ec;
  local_40 = param_1;
  local_30 = param_1;
  FUN_1000be5e4(lVar1 + 0x28,&local_40);
  return param_1;
}




undefined8 * thunk_FUN_1001f641c(undefined8 *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puStack_40;
  undefined8 uStack_38;
  undefined8 *puStack_30;
  code *pcStack_28;
  
  *param_1 = &PTR_FUN_10146e490;
  operator_new(0xff0);
  lVar1 = thunk_FUN_1002ad248();
  param_1[1] = lVar1;
  *(undefined8 **)(lVar1 + 0xb8) = param_1;
  FUN_10014f4a0(param_1 + 2);
  *param_1 = &PTR_thunk_FUN_1001f64ec_10146e090;
  param_1[2] = &PTR_FUN_10146e0c0;
  param_1[5] = &PTR_FUN_10146e458;
  param_1[7] = 0;
  puVar2 = param_1 + 6;
  *puVar2 = 0;
  lVar1 = FUN_10028cfcc();
  FUN_1001f6704(puVar2,lVar1 + 0x450);
  FUN_1002ada88(param_1[1],puVar2);
  lVar1 = FUN_10028cfcc();
  uStack_38 = 0;
  pcStack_28 = FUN_1001f67ec;
  puStack_40 = param_1;
  puStack_30 = param_1;
  FUN_1000be5e4(lVar1 + 0x18,&puStack_40);
  lVar1 = FUN_10028cfcc();
  uStack_38 = 0;
  pcStack_28 = FUN_1001f67ec;
  puStack_40 = param_1;
  puStack_30 = param_1;
  FUN_1000be5e4(lVar1 + 0x28,&puStack_40);
  return param_1;
}




undefined8 * FUN_1001f64ec(undefined8 *param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  
  *param_1 = &PTR_thunk_FUN_1001f64ec_10146e090;
  param_1[2] = &PTR_FUN_10146e0c0;
  param_1[5] = &PTR_FUN_10146e458;
  if (param_1[7] != 0) {
    *(undefined4 *)(param_1 + 6) = 0;
  }
  lVar2 = FUN_10028cfcc();
  uVar1 = *(uint *)(lVar2 + 0x18);
  if (uVar1 != 0) {
    lVar3 = (ulong)uVar1 << 5;
    puVar4 = *(undefined8 **)(lVar2 + 0x20);
    do {
      if ((undefined8 *)*puVar4 == param_1) {
        FUN_1000c044c((uint *)(lVar2 + 0x18),puVar4,puVar4 + 4);
        break;
      }
      lVar3 = lVar3 + -0x20;
      puVar4 = puVar4 + 4;
    } while (lVar3 != 0);
  }
  lVar2 = FUN_10028cfcc();
  uVar1 = *(uint *)(lVar2 + 0x28);
  if (uVar1 != 0) {
    lVar3 = (ulong)uVar1 << 5;
    puVar4 = *(undefined8 **)(lVar2 + 0x30);
    do {
      if ((undefined8 *)*puVar4 == param_1) {
        FUN_1000c044c((uint *)(lVar2 + 0x28),puVar4,puVar4 + 4);
        break;
      }
      lVar3 = lVar3 + -0x20;
      puVar4 = puVar4 + 4;
    } while (lVar3 != 0);
  }
  if ((void *)param_1[7] != (void *)0x0) {
    operator_delete__((void *)param_1[7]);
    param_1[6] = 0;
    param_1[7] = 0;
  }
  FUN_10014f51c(param_1 + 2);
  *param_1 = &PTR_FUN_10146e490;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return param_1;
}




void thunk_FUN_1001f64ec(void)

{
  FUN_1001f64ec();
  return;
}




void FUN_1001f65fc(long param_1)

{
  FUN_1001f64ec(param_1 + -0x10);
  return;
}




void FUN_1001f6604(long param_1)

{
  FUN_1001f64ec(param_1 + -0x28);
  return;
}




void FUN_1001f660c(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1001f64ec();
  operator_delete(pvVar1);
  return;
}




void FUN_1001f6620(long param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1001f64ec(param_1 + -0x10);
  operator_delete(pvVar1);
  return;
}




void FUN_1001f6638(long param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1001f64ec(param_1 + -0x28);
  operator_delete(pvVar1);
  return;
}




undefined8 FUN_1001f6650(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}




undefined8 FUN_1001f6658(long param_1)

{
  return *(undefined8 *)(param_1 + -0x20);
}




void FUN_1001f6660(void)

{
  FUN_1004e0150("INVENTORY_SOCIAL_PINGS_TAB_TITLE",0);
  return;
}




void FUN_1001f6670(void)

{
  FUN_1004e0150("INVENTORY_SOCIAL_PINGS_TAB_TITLE",0);
  return;
}




undefined8 * FUN_1001f6680(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10146e490;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return param_1;
}




void FUN_1001f66c4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10146e490;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  operator_delete(param_1);
  return;
}




void FUN_1001f6704(uint *param_1,uint *param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  
  if (param_1 != param_2) {
    if (*(void **)(param_1 + 2) != (void *)0x0) {
      operator_delete__(*(void **)(param_1 + 2));
      param_1[0] = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
    }
    FUN_1001f6770(param_1,*param_2);
    uVar1 = *param_2;
    if (uVar1 != 0) {
      lVar4 = (ulong)uVar1 << 3;
      puVar2 = *(undefined8 **)(param_2 + 2);
      puVar3 = *(undefined8 **)(param_1 + 2);
      do {
        *puVar3 = *puVar2;
        lVar4 = lVar4 + -8;
        puVar2 = puVar2 + 1;
        puVar3 = puVar3 + 1;
      } while (lVar4 != 0);
    }
    *param_1 = uVar1;
  }
  return;
}




void FUN_1001f6770(uint *param_1,uint param_2)

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




void FUN_1001f67ec(long param_1)

{
  FUN_1002ad3f0(*(undefined8 *)(param_1 + 8));
  return;
}




undefined8 * FUN_1001f67f4(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined1 local_30;
  undefined8 local_2c;
  undefined1 local_24;
  
  *param_1 = &PTR____cxa_pure_virtual_101455988;
  operator_new(0xc30);
  lVar1 = thunk_FUN_1002b1270();
  iVar4 = 0;
  *(undefined8 **)(lVar1 + 0xb8) = param_1;
  *param_1 = &PTR_FUN_10146e4b0;
  param_1[1] = lVar1;
  do {
    uVar2 = FUN_1003166d0();
    puVar3 = (undefined4 *)FUN_1003166dc(uVar2,iVar4);
    local_58[0] = *puVar3;
    uStack_48 = *(undefined8 *)(puVar3 + 4);
    local_50 = *(undefined8 *)(puVar3 + 2);
    local_40 = *(undefined8 *)(puVar3 + 6);
    local_38 = *(undefined8 *)(puVar3 + 8);
    local_30 = *(undefined1 *)(puVar3 + 10);
    local_2c = *(undefined8 *)(puVar3 + 0xb);
    local_24 = *(undefined1 *)(puVar3 + 0xd);
    FUN_1002b16e0(param_1[1],local_58);
    iVar4 = iVar4 + 1;
  } while (iVar4 != 0x1a);
  return param_1;
}




undefined8 * thunk_FUN_1001f67f4(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 auStack_58 [2];
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined1 uStack_30;
  undefined8 uStack_2c;
  undefined1 uStack_24;
  
  *param_1 = &PTR____cxa_pure_virtual_101455988;
  operator_new(0xc30);
  lVar1 = thunk_FUN_1002b1270();
  iVar4 = 0;
  *(undefined8 **)(lVar1 + 0xb8) = param_1;
  *param_1 = &PTR_FUN_10146e4b0;
  param_1[1] = lVar1;
  do {
    uVar2 = FUN_1003166d0();
    puVar3 = (undefined4 *)FUN_1003166dc(uVar2,iVar4);
    auStack_58[0] = *puVar3;
    uStack_48 = *(undefined8 *)(puVar3 + 4);
    uStack_50 = *(undefined8 *)(puVar3 + 2);
    uStack_40 = *(undefined8 *)(puVar3 + 6);
    uStack_38 = *(undefined8 *)(puVar3 + 8);
    uStack_30 = *(undefined1 *)(puVar3 + 10);
    uStack_2c = *(undefined8 *)(puVar3 + 0xb);
    uStack_24 = *(undefined1 *)(puVar3 + 0xd);
    FUN_1002b16e0(param_1[1],auStack_58);
    iVar4 = iVar4 + 1;
  } while (iVar4 != 0x1a);
  return param_1;
}




void FUN_1001f68a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1003166d0();
  FUN_100316b10(uVar1,param_2,param_3,param_4,param_5,param_6);
  return;
}




void FUN_1001f68fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1003166d0();
  FUN_100316e0c(uVar1,param_2,param_3);
  return;
}




void FUN_1001f6928(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1003166d0();
  FUN_1003167f0(uVar1,param_2);
  return;
}




undefined8 * FUN_1001f694c(undefined8 *param_1)

{
  *param_1 = &PTR____cxa_pure_virtual_101455988;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return param_1;
}




void FUN_1001f6990(undefined8 *param_1)

{
  *param_1 = &PTR____cxa_pure_virtual_101455988;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  operator_delete(param_1);
  return;
}




undefined8 * FUN_1001f69d0(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR_FUN_10146e508;
  operator_new(0x598);
  lVar1 = thunk_FUN_1002b28c4();
  *(undefined8 **)(lVar1 + 0xb8) = param_1;
  *param_1 = &PTR_thunk_FUN_1001f6bac_10146e4e8;
  param_1[1] = lVar1;
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_1001f6a24(param_1);
  return param_1;
}




void FUN_1001f6a24(long param_1)

{
  undefined8 ***pppuVar1;
  long lVar2;
  undefined1 **ppuVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined1 **ppuVar6;
  ulong uVar7;
  ulong uVar8;
  undefined1 *local_90;
  ulong local_88;
  undefined8 uStack_80;
  undefined8 **local_78 [2];
  char local_61;
  
  lVar2 = FUN_1000f7ab0();
  FUN_1001e9974((uint *)(param_1 + 0x10),lVar2 + 0x38);
  uVar4 = (ulong)*(uint *)(param_1 + 0x10);
  if (*(uint *)(param_1 + 0x10) != 0) {
    uVar8 = 0;
    do {
      if (*(int *)(*(long *)(*(long *)(param_1 + 0x18) + uVar8 * 8) + 0x48) != 0) {
        FUN_1002b2de4(*(undefined8 *)(param_1 + 8));
        FUN_10001549c(local_78,"Inventory_Key_");
        puVar5 = *(undefined8 **)(*(long *)(param_1 + 0x18) + uVar8 * 8);
        if ((char)*(byte *)((long)puVar5 + 0x17) < '\0') {
          uVar4 = puVar5[1];
          if (0xffffffffffffffef < uVar4) {
                    /* WARNING: Subroutine does not return */
            FUN_1001f6c54();
          }
          puVar5 = (undefined8 *)*puVar5;
        }
        else {
          uVar4 = (ulong)*(byte *)((long)puVar5 + 0x17);
        }
        if (uVar4 < 0x17) {
          uStack_80 = CONCAT17((char)uVar4,(undefined7)uStack_80);
          ppuVar3 = &local_90;
          ppuVar6 = &local_90;
          if (uVar4 != 0) goto LAB_1001f6afc;
        }
        else {
          uVar7 = uVar4 + 0x10 & 0xfffffffffffffff0;
          ppuVar3 = operator_new(uVar7);
          uStack_80 = uVar7 | 0x8000000000000000;
          local_90 = (undefined1 *)ppuVar3;
          local_88 = uVar4;
LAB_1001f6afc:
          _memcpy(ppuVar3,puVar5,uVar4);
          ppuVar6 = ppuVar3;
        }
        *(undefined1 *)((long)ppuVar6 + uVar4) = 0;
        ppuVar3 = (undefined1 **)local_90;
        if (-1 < (long)uStack_80) {
          ppuVar3 = &local_90;
        }
        std::string::append((char *)local_78,(ulong)ppuVar3);
        pppuVar1 = (undefined8 ***)local_78[0];
        if (-1 < local_61) {
          pppuVar1 = local_78;
        }
        FUN_100102240(pppuVar1,*(undefined4 *)
                                (*(long *)(*(long *)(param_1 + 0x18) + uVar8 * 8) + 0x48),1);
        if ((long)uStack_80 < 0) {
          operator_delete(local_90);
        }
        if (local_61 < '\0') {
          operator_delete(local_78[0]);
        }
        uVar4 = (ulong)*(uint *)(param_1 + 0x10);
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < uVar4);
  }
  return;
}




undefined8 * thunk_FUN_1001f69d0(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR_FUN_10146e508;
  operator_new(0x598);
  lVar1 = thunk_FUN_1002b28c4();
  *(undefined8 **)(lVar1 + 0xb8) = param_1;
  *param_1 = &PTR_thunk_FUN_1001f6bac_10146e4e8;
  param_1[1] = lVar1;
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_1001f6a24(param_1);
  return param_1;
}




undefined8 * FUN_1001f6bac(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_1001f6bac_10146e4e8;
  if ((void *)param_1[3] != (void *)0x0) {
    *(undefined4 *)(param_1 + 2) = 0;
    operator_delete__((void *)param_1[3]);
    param_1[2] = 0;
    param_1[3] = 0;
  }
  *param_1 = &PTR_FUN_10146e508;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return param_1;
}




void thunk_FUN_1001f6bac(void)

{
  FUN_1001f6bac();
  return;
}




void FUN_1001f6c18(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1001f6bac();
  operator_delete(pvVar1);
  return;
}




void FUN_1001f6c2c(long param_1)

{
  FUN_1002b2ec8(*(undefined8 *)(param_1 + 8));
  FUN_1001f6a24(param_1);
  return;
}




void FUN_1001f6c54(void)

{
                    /* WARNING: Subroutine does not return */
  _abort();
}




undefined8 * FUN_1001f6c60(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10146e508;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return param_1;
}




void FUN_1001f6ca4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10146e508;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  operator_delete(param_1);
  return;
}




undefined8 * FUN_1001f6ce4(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR_FUN_10146e568;
  operator_new(200);
  lVar1 = thunk_FUN_1002b2fb8();
  *(undefined8 **)(lVar1 + 0xb8) = param_1;
  *param_1 = &PTR_thunk_FUN_1001f6d44_10146e528;
  param_1[1] = lVar1;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[2] = 0;
  FUN_1004e313c(param_1 + 5);
  param_1[7] = 0;
  return param_1;
}




undefined8 * thunk_FUN_1001f6ce4(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR_FUN_10146e568;
  operator_new(200);
  lVar1 = thunk_FUN_1002b2fb8();
  *(undefined8 **)(lVar1 + 0xb8) = param_1;
  *param_1 = &PTR_thunk_FUN_1001f6d44_10146e528;
  param_1[1] = lVar1;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[2] = 0;
  FUN_1004e313c(param_1 + 5);
  param_1[7] = 0;
  return param_1;
}




undefined8 * FUN_1001f6d44(undefined8 *param_1)

{
  uint *puVar1;
  long lVar2;
  undefined8 *puVar3;
  
  *param_1 = &PTR_thunk_FUN_1001f6d44_10146e528;
  puVar1 = (uint *)param_1[7];
  if (puVar1 != (uint *)0x0) {
    if (*puVar1 != 0) {
      lVar2 = (ulong)*puVar1 << 5;
      puVar3 = *(undefined8 **)(puVar1 + 2);
      do {
        if ((undefined8 *)*puVar3 == param_1) {
          FUN_1000c044c(puVar1,puVar3,puVar3 + 4);
          break;
        }
        lVar2 = lVar2 + -0x20;
        puVar3 = puVar3 + 4;
      } while (lVar2 != 0);
    }
    param_1[7] = 0;
  }
  if ((void *)param_1[6] != (void *)0x0) {
    operator_delete__((void *)param_1[6]);
    param_1[5] = 0;
    param_1[6] = 0;
  }
  if (*(char *)((long)param_1 + 0x27) < '\0') {
    operator_delete((void *)param_1[2]);
  }
  *param_1 = &PTR_FUN_10146e568;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return param_1;
}




void thunk_FUN_1001f6d44(void)

{
  FUN_1001f6d44();
  return;
}




void FUN_1001f6dfc(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1001f6d44();
  operator_delete(pvVar1);
  return;
}




void FUN_1001f6e10(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = FUN_10031a90c();
  lVar2 = FUN_10031af0c(uVar1,param_1 + 0x10);
  if (lVar2 != 0) {
    FUN_1002b308c(*(undefined8 *)(param_1 + 8),param_1 + 0x28,param_1 + 0x10,lVar2);
    return;
  }
  return;
}




void FUN_1001f6e5c(long param_1,string *param_2,undefined8 param_3,long param_4)

{
  uint *puVar1;
  long lVar2;
  long *plVar3;
  long local_60 [3];
  code *pcStack_48;
  
  puVar1 = *(uint **)(param_1 + 0x38);
  if (puVar1 != (uint *)0x0) {
    if (*puVar1 != 0) {
      lVar2 = (ulong)*puVar1 << 5;
      plVar3 = *(long **)(puVar1 + 2);
      do {
        if (*plVar3 == param_1) {
          FUN_1000c044c(puVar1,plVar3,plVar3 + 4);
          break;
        }
        lVar2 = lVar2 + -0x20;
        plVar3 = plVar3 + 4;
      } while (lVar2 != 0);
    }
    *(undefined8 *)(param_1 + 0x38) = 0;
  }
  std::string::operator=((string *)(param_1 + 0x10),param_2);
  FUN_1000153b4(param_1 + 0x28,param_3);
  FUN_1002b308c(*(undefined8 *)(param_1 + 8),param_1 + 0x28,param_2,param_4);
  *(long *)(param_1 + 0x38) = param_4 + 8;
  local_60[1] = 0;
  pcStack_48 = thunk_FUN_1001f6e10;
  local_60[0] = param_1;
  local_60[2] = param_1;
  FUN_1000be5e4(param_4 + 8,local_60);
  return;
}




undefined8 * FUN_1001f6f30(undefined8 *param_1)

{
  long *plVar1;
  uint uVar2;
  uint *puVar3;
  ulong uVar4;
  
  *param_1 = &PTR_thunk_FUN_1001f6f30_10146e548;
  puVar3 = (uint *)(param_1 + 2);
  uVar2 = *puVar3;
  if (uVar2 != 0) {
    uVar4 = 0;
    do {
      plVar1 = *(long **)(param_1[3] + uVar4 * 8);
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
        uVar2 = *puVar3;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar2);
  }
  if ((void *)param_1[3] != (void *)0x0) {
    *puVar3 = 0;
    operator_delete__((void *)param_1[3]);
    puVar3[0] = 0;
    puVar3[1] = 0;
    param_1[3] = 0;
  }
  *param_1 = &PTR_FUN_10146e588;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return param_1;
}




undefined8 * thunk_FUN_1001f6f30(undefined8 *param_1)

{
  long *plVar1;
  uint uVar2;
  uint *puVar3;
  ulong uVar4;
  
  *param_1 = &PTR_thunk_FUN_1001f6f30_10146e548;
  puVar3 = (uint *)(param_1 + 2);
  uVar2 = *puVar3;
  if (uVar2 != 0) {
    uVar4 = 0;
    do {
      plVar1 = *(long **)(param_1[3] + uVar4 * 8);
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
        uVar2 = *puVar3;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar2);
  }
  if ((void *)param_1[3] != (void *)0x0) {
    *puVar3 = 0;
    operator_delete__((void *)param_1[3]);
    puVar3[0] = 0;
    puVar3[1] = 0;
    param_1[3] = 0;
  }
  *param_1 = &PTR_FUN_10146e588;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return param_1;
}




void FUN_1001f6fd8(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1001f6f30();
  operator_delete(pvVar1);
  return;
}




void FUN_1001f767c(uint *param_1,undefined8 *param_2)

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
    FUN_1001f7814(param_1,uVar2);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




void FUN_1001f76fc(void)

{
                    /* WARNING: Subroutine does not return */
  _abort();
}




undefined8 * FUN_1001f7708(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10146e568;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return param_1;
}




void FUN_1001f774c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10146e568;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  operator_delete(param_1);
  return;
}




void thunk_FUN_1001f6e10(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = FUN_10031a90c();
  lVar2 = FUN_10031af0c(uVar1,param_1 + 0x10);
  if (lVar2 != 0) {
    FUN_1002b308c(*(undefined8 *)(param_1 + 8),param_1 + 0x28,param_1 + 0x10,lVar2);
    return;
  }
  return;
}




undefined8 * FUN_1001f7790(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10146e588;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return param_1;
}




void FUN_1001f77d4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10146e588;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  operator_delete(param_1);
  return;
}




void FUN_1001f7814(uint *param_1,uint param_2)

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




undefined8 * FUN_1001f7890(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *local_40;
  undefined8 uStack_38;
  undefined8 *local_30;
  code *pcStack_28;
  
  *param_1 = &PTR_thunk_FUN_1001f78f4_10146e5a8;
  param_1[2] = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  FUN_10031d43c();
  uVar1 = FUN_10031e338();
  param_1[4] = uVar1;
  uStack_38 = 0;
  pcStack_28 = FUN_1001f8880;
  local_40 = param_1;
  local_30 = param_1;
  FUN_1000be5e4(uVar1,&local_40);
  return param_1;
}




undefined8 * FUN_1001f78f4(undefined8 *param_1)

{
  uint *puVar1;
  long lVar2;
  undefined8 *puVar3;
  
  *param_1 = &PTR_thunk_FUN_1001f78f4_10146e5a8;
  puVar1 = (uint *)param_1[4];
  if (puVar1 != (uint *)0x0) {
    if (*puVar1 != 0) {
      lVar2 = (ulong)*puVar1 << 5;
      puVar3 = *(undefined8 **)(puVar1 + 2);
      do {
        if ((undefined8 *)*puVar3 == param_1) {
          FUN_1000c044c(puVar1,puVar3,puVar3 + 4);
          break;
        }
        lVar2 = lVar2 + -0x20;
        puVar3 = puVar3 + 4;
      } while (lVar2 != 0);
    }
    param_1[4] = 0;
  }
  if (*(char *)((long)param_1 + 0x1f) < '\0') {
    operator_delete((void *)param_1[1]);
  }
  return param_1;
}




void thunk_FUN_1001f78f4(void)

{
  FUN_1001f78f4();
  return;
}




void FUN_1001f7978(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1001f78f4();
  operator_delete(pvVar1);
  return;
}




void FUN_1001f798c(void)

{
  return;
}




void FUN_1001f7990(long param_1,string *param_2)

{
  uint *puVar1;
  long lVar2;
  long *plVar3;
  
  puVar1 = *(uint **)(param_1 + 0x20);
  if (puVar1 != (uint *)0x0) {
    if (*puVar1 != 0) {
      lVar2 = (ulong)*puVar1 << 5;
      plVar3 = *(long **)(puVar1 + 2);
      do {
        if (*plVar3 == param_1) {
          FUN_1000c044c(puVar1,plVar3,plVar3 + 4);
          break;
        }
        lVar2 = lVar2 + -0x20;
        plVar3 = plVar3 + 4;
      } while (lVar2 != 0);
    }
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  std::string::operator=((string *)(param_1 + 8),param_2);
  return;
}




void FUN_1001f79fc(long *param_1,undefined8 param_2,long param_3)

{
  FUN_100169740(param_1 + 0x11,param_3 + 0x38);
                    /* WARNING: Could not recover jumptable at 0x0001001f7a2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1);
  return;
}




void FUN_1001f7a30(long param_1)

{
  size_t sVar1;
  size_t sVar2;
  undefined8 *puVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  uint uVar7;
  byte *pbVar8;
  uint uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  byte *pbVar12;
  long lVar13;
  ulong uVar14;
  uint uVar15;
  ulong uVar16;
  undefined8 local_68;
  uint local_60 [2];
  void *local_58;
  
  FUN_100326668("timed_event");
  FUN_1003270b0(local_60);
  uVar7 = *(uint *)(param_1 + 0x88);
  if (uVar7 != 0) {
    uVar14 = 0;
    uVar15 = local_60[0];
    uVar9 = local_60[0];
    do {
      if (uVar9 != 0) {
        uVar16 = 0;
        do {
          lVar13 = *(long *)((long)local_58 + uVar16 * 8);
          puVar11 = (undefined8 *)(*(long *)(param_1 + 0x90) + uVar14 * 0x18);
          bVar4 = *(byte *)((long)puVar11 + 0x17);
          uVar10 = (ulong)bVar4;
          sVar1 = puVar11[1];
          if (-1 < (char)bVar4) {
            sVar1 = uVar10;
          }
          bVar5 = *(byte *)(lVar13 + 0x5f);
          sVar2 = *(size_t *)(lVar13 + 0x50);
          if (-1 < (char)bVar5) {
            sVar2 = (ulong)bVar5;
          }
          if (sVar1 == sVar2) {
            puVar3 = (void *)*puVar11;
            if (-1 < (char)bVar4) {
              puVar3 = puVar11;
            }
            pbVar12 = *(byte **)(lVar13 + 0x48);
            if (-1 < (char)bVar5) {
              pbVar12 = (byte *)(lVar13 + 0x48);
            }
            if ((char)bVar4 < '\0') {
              if ((sVar1 == 0) || (iVar6 = _memcmp(puVar3,pbVar12,sVar1), iVar6 == 0))
              goto LAB_1001f7b3c;
            }
            else if (sVar1 == 0) {
LAB_1001f7b3c:
              operator_new(0x30);
              local_68 = thunk_FUN_1002052c0();
              FUN_100205414(local_68,*(undefined8 *)((long)local_58 + uVar16 * 8));
              FUN_1001f7bd0(param_1 + 0x20,&local_68);
              FUN_1002cfe84((undefined4)DAT_101dc1cb8,DAT_101dc1cb8._4_4_,
                            *(undefined8 *)(param_1 + 8),
                            *(undefined8 *)
                             (*(long *)(*(long *)(param_1 + 0x28) +
                                       (ulong)(*(int *)(param_1 + 0x20) - 1) * 8) + 8));
              uVar15 = local_60[0];
            }
            else if ((uint)*pbVar12 == ((uint)(void *)*puVar11 & 0xff)) {
              pbVar8 = (byte *)(*(long *)(param_1 + 0x90) + uVar14 * 0x18);
              do {
                uVar10 = uVar10 - 1;
                pbVar12 = pbVar12 + 1;
                pbVar8 = pbVar8 + 1;
                if (uVar10 == 0) goto LAB_1001f7b3c;
              } while (*pbVar8 == *pbVar12);
            }
          }
          uVar16 = uVar16 + 1;
        } while (uVar16 < uVar15);
        uVar7 = *(uint *)(param_1 + 0x88);
        uVar9 = uVar15;
      }
      uVar14 = uVar14 + 1;
    } while (uVar14 < uVar7);
  }
  if (local_58 != (void *)0x0) {
    operator_delete__(local_58);
  }
  return;
}




void FUN_1001f7bd0(uint *param_1,undefined8 *param_2)

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
    FUN_1001f888c(param_1,uVar2);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




undefined8 * FUN_1001f7c50(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *local_40;
  undefined8 uStack_38;
  undefined8 *local_30;
  code *pcStack_28;
  
  *param_1 = &PTR_FUN_10146e6b0;
  operator_new(0x1b0);
  lVar1 = FUN_1002b5860();
  param_1[1] = lVar1;
  *(undefined8 **)(lVar1 + 0x1a0) = param_1;
  FUN_1001f7890(param_1 + 2);
  *param_1 = &PTR_thunk_FUN_1001f7d30_10146e5d8;
  param_1[2] = &PTR_FUN_10146e600;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  FUN_1004e18bc(&DAT_101d234d8,param_1,0x9d2c9b16,FUN_1001f7d18,0);
  lVar1 = FUN_10031d43c();
  if (lVar1 != 0) {
    FUN_10031d43c();
    lVar1 = FUN_10031e338();
    if (lVar1 != 0) {
      FUN_10031d43c();
      uVar2 = FUN_10031e338();
      uStack_38 = 0;
      pcStack_28 = FUN_1001f898c;
      local_40 = param_1;
      local_30 = param_1;
      FUN_1000be5e4(uVar2,&local_40);
    }
  }
  return param_1;
}




void FUN_1001f7d18(long param_1)

{
  if (*(long **)(param_1 + 0x38) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001001f7d28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x38) + 0x170))();
    return;
  }
  return;
}




undefined8 * FUN_1001f7d30(undefined8 *param_1)

{
  long lVar1;
  uint *puVar2;
  undefined8 *puVar3;
  
  *param_1 = &PTR_thunk_FUN_1001f7d30_10146e5d8;
  param_1[2] = &PTR_FUN_10146e600;
  if ((long *)param_1[7] != (long *)0x0) {
    (**(code **)(*(long *)param_1[7] + 8))();
    param_1[7] = 0;
  }
  FUN_1004e1b58(&DAT_101d234d8,param_1);
  lVar1 = FUN_10031d43c();
  if (lVar1 != 0) {
    FUN_10031d43c();
    lVar1 = FUN_10031e338();
    if (lVar1 != 0) {
      FUN_10031d43c();
      puVar2 = (uint *)FUN_10031e338();
      if (*puVar2 != 0) {
        lVar1 = (ulong)*puVar2 << 5;
        puVar3 = *(undefined8 **)(puVar2 + 2);
        do {
          if ((undefined8 *)*puVar3 == param_1) {
            FUN_1000c044c(puVar2,puVar3,puVar3 + 4);
            break;
          }
          lVar1 = lVar1 + -0x20;
          puVar3 = puVar3 + 4;
        } while (lVar1 != 0);
      }
    }
  }
  if (*(char *)((long)param_1 + 0x57) < '\0') {
    operator_delete((void *)param_1[8]);
  }
  FUN_1001f78f4(param_1 + 2);
  *param_1 = &PTR_FUN_10146e6b0;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return param_1;
}




void thunk_FUN_1001f7d30(void)

{
  FUN_1001f7d30();
  return;
}




void FUN_1001f7e24(long param_1)

{
  FUN_1001f7d30(param_1 + -0x10);
  return;
}




void FUN_1001f7e2c(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1001f7d30();
  operator_delete(pvVar1);
  return;
}




void FUN_1001f7e40(long param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1001f7d30(param_1 + -0x10);
  operator_delete(pvVar1);
  return;
}




void FUN_1001f7e58(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  byte *pbVar2;
  size_t sVar3;
  byte bVar4;
  size_t sVar5;
  long lVar6;
  int iVar7;
  undefined8 uVar8;
  void *pvVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  void *local_78 [2];
  char local_61;
  ulong local_60;
  long local_58;
  
  local_60 = 0;
  local_58 = 0;
  FUN_100136d8c(&local_60);
  pbVar2 = *(byte **)(param_3 + 0x20);
  sVar5 = *(size_t *)(param_3 + 0x28);
  if (-1 < (char)*(byte *)(param_3 + 0x37)) {
    pbVar2 = (byte *)(param_3 + 0x20);
    sVar5 = (ulong)*(byte *)(param_3 + 0x37);
  }
  if ((int)local_60 != 0) {
    lVar12 = local_58 + (local_60 & 0xffffffff) * 0x78;
    lVar11 = local_58;
    do {
      bVar4 = *(byte *)(lVar11 + 0x2f);
      sVar3 = *(size_t *)(lVar11 + 0x20);
      if (-1 < (char)bVar4) {
        sVar3 = (ulong)bVar4;
      }
      if (sVar3 == sVar5) {
        pvVar9 = *(void **)(lVar11 + 0x18);
        if ((char)bVar4 < '\0') {
          if ((sVar5 == 0) || (iVar7 = _memcmp(pvVar9,pbVar2,sVar5), iVar7 == 0)) {
LAB_1001f7f54:
            pvVar9 = operator_new(0xc18);
            uVar8 = thunk_FUN_10031e340(pvVar9,param_3);
            *(undefined8 *)(param_1 + 0x38) = uVar8;
            FUN_10001549c(local_78,"LIVE_EVENTS_POPUP");
            FUN_10022b4d4(pvVar9,lVar11,(undefined8 *)(lVar11 + 0x18),local_78);
            if (local_61 < '\0') {
              operator_delete(local_78[0]);
            }
            (**(code **)(**(long **)(param_1 + 0x38) + 0x170))();
            FUN_1002b589c(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x38));
            std::string::operator=((string *)(param_1 + 0x40),(string *)(lVar11 + 0x48));
            break;
          }
        }
        else {
          if (sVar5 == 0) goto LAB_1001f7f54;
          if ((uint)*pbVar2 == ((uint)pvVar9 & 0xff)) {
            lVar10 = 0;
            do {
              if ((ulong)bVar4 - 1 == lVar10) goto LAB_1001f7f54;
              lVar1 = lVar11 + lVar10;
              lVar6 = lVar10 + 1;
              lVar10 = lVar10 + 1;
            } while (*(byte *)(lVar1 + 0x19) == pbVar2[lVar6]);
          }
        }
      }
      lVar11 = lVar11 + 0x78;
    } while (lVar11 != lVar12);
  }
  FUN_100135c64(&local_60,1);
  return;
}




undefined8 * FUN_1001f7ff0(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR_FUN_10146e6d0;
  operator_new(0xf48);
  lVar1 = thunk_FUN_1002b59f0();
  *(undefined8 **)(lVar1 + 0xb8) = param_1;
  *param_1 = &PTR_thunk_FUN_1001f8044_10146e630;
  param_1[1] = lVar1;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  return param_1;
}




undefined8 * FUN_1001f8044(undefined8 *param_1)

{
  long *plVar1;
  uint uVar2;
  uint *puVar3;
  ulong uVar4;
  uint *puVar5;
  uint *puVar6;
  
  *param_1 = &PTR_thunk_FUN_1001f8044_10146e630;
  puVar3 = (uint *)(param_1 + 2);
  uVar2 = *puVar3;
  if (uVar2 != 0) {
    uVar4 = 0;
    do {
      plVar1 = *(long **)(param_1[3] + uVar4 * 8);
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
        uVar2 = *puVar3;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar2);
  }
  puVar5 = (uint *)(param_1 + 4);
  uVar2 = *puVar5;
  if (uVar2 != 0) {
    uVar4 = 0;
    do {
      plVar1 = *(long **)(param_1[5] + uVar4 * 8);
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
        uVar2 = *puVar5;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar2);
  }
  puVar6 = (uint *)(param_1 + 6);
  uVar2 = *puVar6;
  if (uVar2 != 0) {
    uVar4 = 0;
    do {
      plVar1 = *(long **)(param_1[7] + uVar4 * 8);
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
        uVar2 = *puVar6;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar2);
  }
  if ((void *)param_1[7] != (void *)0x0) {
    operator_delete__((void *)param_1[7]);
    puVar6[0] = 0;
    puVar6[1] = 0;
    param_1[7] = 0;
  }
  if ((void *)param_1[5] != (void *)0x0) {
    operator_delete__((void *)param_1[5]);
    puVar5[0] = 0;
    puVar5[1] = 0;
    param_1[5] = 0;
  }
  if ((void *)param_1[3] != (void *)0x0) {
    operator_delete__((void *)param_1[3]);
    puVar3[0] = 0;
    puVar3[1] = 0;
    param_1[3] = 0;
  }
  *param_1 = &PTR_FUN_10146e6d0;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return param_1;
}




undefined8 * thunk_FUN_1001f8044(undefined8 *param_1)

{
  long *plVar1;
  uint uVar2;
  uint *puVar3;
  ulong uVar4;
  uint *puVar5;
  uint *puVar6;
  
  *param_1 = &PTR_thunk_FUN_1001f8044_10146e630;
  puVar3 = (uint *)(param_1 + 2);
  uVar2 = *puVar3;
  if (uVar2 != 0) {
    uVar4 = 0;
    do {
      plVar1 = *(long **)(param_1[3] + uVar4 * 8);
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
        uVar2 = *puVar3;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar2);
  }
  puVar5 = (uint *)(param_1 + 4);
  uVar2 = *puVar5;
  if (uVar2 != 0) {
    uVar4 = 0;
    do {
      plVar1 = *(long **)(param_1[5] + uVar4 * 8);
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
        uVar2 = *puVar5;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar2);
  }
  puVar6 = (uint *)(param_1 + 6);
  uVar2 = *puVar6;
  if (uVar2 != 0) {
    uVar4 = 0;
    do {
      plVar1 = *(long **)(param_1[7] + uVar4 * 8);
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
        uVar2 = *puVar6;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar2);
  }
  if ((void *)param_1[7] != (void *)0x0) {
    operator_delete__((void *)param_1[7]);
    puVar6[0] = 0;
    puVar6[1] = 0;
    param_1[7] = 0;
  }
  if ((void *)param_1[5] != (void *)0x0) {
    operator_delete__((void *)param_1[5]);
    puVar5[0] = 0;
    puVar5[1] = 0;
    param_1[5] = 0;
  }
  if ((void *)param_1[3] != (void *)0x0) {
    operator_delete__((void *)param_1[3]);
    puVar3[0] = 0;
    puVar3[1] = 0;
    param_1[3] = 0;
  }
  *param_1 = &PTR_FUN_10146e6d0;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return param_1;
}




void FUN_1001f8180(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1001f8044();
  operator_delete(pvVar1);
  return;
}




void FUN_1001f8194(long param_1)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  long lVar9;
  uint local_70 [2];
  long local_68;
  
  uVar3 = FUN_10031d43c();
  FUN_10031e024(local_70,uVar3,0);
  uVar4 = (ulong)local_70[0];
  if (local_70[0] != 0) {
    uVar8 = 0;
    uVar6 = 0;
    uVar7 = 0;
    do {
      lVar5 = local_68 + uVar8 * 0x98;
      if (*(uint *)(lVar5 + 0x48) != 0) {
        lVar9 = 0;
        uVar4 = 0;
        do {
          iVar1 = *(int *)(*(long *)(lVar5 + 0x50) + lVar9);
          if (iVar1 == 3) {
            uVar2 = FUN_1001f85f4(param_1,lVar5);
LAB_1001f8250:
            uVar6 = uVar2 | uVar6;
          }
          else {
            if (iVar1 == 2) {
              uVar2 = FUN_1001f840c(param_1,lVar5);
              goto LAB_1001f8250;
            }
            if (iVar1 == 1) {
              uVar2 = FUN_1001f82bc(param_1);
              uVar7 = uVar2 | uVar7;
              goto LAB_1001f8250;
            }
          }
          uVar4 = uVar4 + 1;
          lVar9 = lVar9 + 0x58;
        } while (uVar4 < *(uint *)(lVar5 + 0x48));
        uVar4 = (ulong)local_70[0];
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < uVar4);
    if ((uVar7 & 1) != 0) {
      FUN_10031a918();
    }
    if ((uVar6 & 1) != 0) {
      FUN_1002b5b34(*(undefined8 *)(param_1 + 8),0);
    }
  }
  FUN_10015bcf8(local_70,1);
  return;
}




undefined8 FUN_1001f82bc(long param_1,undefined8 param_2,int *param_3)

{
  ulong uVar1;
  int *piVar2;
  long lVar3;
  undefined8 uVar4;
  long local_68;
  undefined1 auStack_60 [8];
  void *local_58;
  undefined1 auStack_50 [8];
  void *local_48;
  
  if ((*param_3 == 1) && (param_3[1] == 0)) {
    uVar1 = *(ulong *)(param_3 + 4);
    if (-1 < (char)*(byte *)((long)param_3 + 0x1f)) {
      uVar1 = (ulong)*(byte *)((long)param_3 + 0x1f);
    }
    if ((uVar1 != 0) && (param_3[0xe] != 0)) {
      lVar3 = FUN_10031a90c();
      if (lVar3 == 0) {
        return 0;
      }
      uVar4 = FUN_10031a90c();
      lVar3 = FUN_10031af0c(uVar4,*(undefined8 *)(param_3 + 0x10));
      if (lVar3 == 0) {
        return 0;
      }
      piVar2 = *(int **)(param_3 + 2);
      if (-1 < *(char *)((long)param_3 + 0x1f)) {
        piVar2 = param_3 + 2;
      }
      uVar4 = FUN_1004e0150(piVar2,0);
      thunk_FUN_1004e439c(auStack_50,uVar4);
      piVar2 = *(int **)(param_3 + 8);
      if (-1 < *(char *)((long)param_3 + 0x37)) {
        piVar2 = param_3 + 8;
      }
      uVar4 = FUN_1004e0150(piVar2,0);
      thunk_FUN_1004e439c(auStack_60,uVar4);
      operator_new(0x40);
      local_68 = thunk_FUN_1001f6ce4();
      FUN_1001f6e5c(local_68,*(undefined8 *)(param_3 + 0x10),auStack_60,lVar3);
      FUN_1001f767c(param_1 + 0x10,&local_68);
      piVar2 = *(int **)(param_3 + 2);
      if (-1 < *(char *)((long)param_3 + 0x1f)) {
        piVar2 = param_3 + 2;
      }
      FUN_1002b5ae0(*(undefined8 *)(param_1 + 8),auStack_50,0,*(undefined8 *)(local_68 + 8),piVar2);
      if (local_58 != (void *)0x0) {
        operator_delete__(local_58);
      }
      if (local_48 != (void *)0x0) {
        operator_delete__(local_48);
      }
      return 1;
    }
  }
  return 0;
}




undefined8 FUN_1001f840c(long param_1,undefined8 param_2,int *param_3)

{
  int *piVar1;
  undefined8 uVar2;
  long *plVar3;
  long *plVar4;
  int *piVar5;
  long *local_68;
  undefined1 auStack_60 [8];
  void *local_58;
  undefined1 auStack_50 [8];
  void *local_48;
  
  if ((*param_3 == 2) && (param_3[0xe] != 0)) {
    piVar5 = param_3 + 2;
    piVar1 = *(int **)piVar5;
    if (-1 < *(char *)((long)param_3 + 0x1f)) {
      piVar1 = piVar5;
    }
    uVar2 = FUN_1004e0150(piVar1,0);
    thunk_FUN_1004e439c(auStack_50,uVar2);
    piVar1 = *(int **)(param_3 + 8);
    if (-1 < *(char *)((long)param_3 + 0x37)) {
      piVar1 = param_3 + 8;
    }
    uVar2 = FUN_1004e0150(piVar1,0);
    thunk_FUN_1004e439c(auStack_60,uVar2);
    plVar3 = operator_new(0x98);
    plVar3[1] = 0;
    *plVar3 = 0;
    plVar3[3] = 0;
    plVar3[2] = 0;
    plVar3[5] = 0;
    plVar3[4] = 0;
    plVar3[7] = 0;
    plVar3[6] = 0;
    plVar3[9] = 0;
    plVar3[8] = 0;
    plVar3[0xb] = 0;
    plVar3[10] = 0;
    plVar3[0xf] = 0;
    plVar3[0xe] = 0;
    plVar3[0x11] = 0;
    plVar3[0x10] = 0;
    plVar3[0x12] = 0;
    plVar4 = plVar3 + 0xc;
    plVar3[0xd] = 0;
    *plVar4 = 0;
    FUN_100205af4();
    FUN_1001f7890(plVar4);
    *plVar3 = (long)&PTR_FUN_10146e650;
    *plVar4 = (long)&PTR_FUN_10146e680;
    plVar3[0x12] = 0;
    plVar3[0x11] = 0;
    local_68 = plVar3;
    FUN_100169740(plVar3 + 0x11,param_3 + 0xe);
    (**(code **)(*plVar3 + 0x18))(plVar3);
    FUN_1001f8574(param_1 + 0x20,&local_68);
    piVar1 = *(int **)piVar5;
    if (-1 < *(char *)((long)param_3 + 0x1f)) {
      piVar1 = piVar5;
    }
    FUN_1002b5ae0(*(undefined8 *)(param_1 + 8),auStack_50,0,local_68[1],piVar1);
    if (local_58 != (void *)0x0) {
      operator_delete__(local_58);
    }
    if (local_48 != (void *)0x0) {
      operator_delete__(local_48);
    }
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}




void FUN_1001f8574(uint *param_1,undefined8 *param_2)

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
    FUN_1001f8a28(param_1,uVar2);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




undefined8 FUN_1001f85f4(long param_1,undefined8 param_2,int *param_3)

{
  ulong uVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [8];
  void *local_40;
  long *local_38;
  
  if ((*param_3 == 3) && (param_3[0xe] != 0)) {
    uVar1 = *(ulong *)(param_3 + 10);
    if (-1 < (char)*(byte *)((long)param_3 + 0x37)) {
      uVar1 = (ulong)*(byte *)((long)param_3 + 0x37);
    }
    if (uVar1 != 0) {
      operator_new(0x58);
      local_38 = (long *)FUN_1001f7c50();
      (**(code **)(*local_38 + 0x10))(local_38,param_2,param_3);
      FUN_1001f86d8(param_1 + 0x30,&local_38);
      uVar3 = *(undefined8 *)(param_1 + 8);
      FUN_1004e3170(auStack_48,local_38 + 8);
      plVar2 = local_38 + 8;
      if (*(char *)((long)local_38 + 0x57) < '\0') {
        plVar2 = (long *)*plVar2;
      }
      FUN_1002b5ae0(uVar3,auStack_48,0,local_38[1],plVar2);
      if (local_40 != (void *)0x0) {
        operator_delete__(local_40);
      }
      return 1;
    }
  }
  return 0;
}




void FUN_1001f86d8(uint *param_1,undefined8 *param_2)

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
    FUN_1001f8aa4(param_1,uVar2);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




void FUN_1001f8758(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10146e650;
  param_1[0xc] = &PTR_FUN_10146e680;
  FUN_10001629c(param_1 + 0x11,1);
  FUN_1001f78f4(param_1 + 0xc);
  FUN_100205b8c(param_1);
  return;
}




void FUN_1001f87a0(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_10146e650;
  param_1[0xc] = &PTR_FUN_10146e680;
  FUN_10001629c(param_1 + 0x11,1);
  FUN_1001f78f4(param_1 + 0xc);
  pvVar1 = (void *)FUN_100205b8c(param_1);
  operator_delete(pvVar1);
  return;
}




void FUN_1001f87ec(undefined8 *param_1)

{
  param_1[-0xc] = &PTR_FUN_10146e650;
  *param_1 = &PTR_FUN_10146e680;
  FUN_10001629c(param_1 + 5,1);
  FUN_1001f78f4(param_1);
  FUN_100205b8c(param_1 + -0xc);
  return;
}




void FUN_1001f8834(undefined8 *param_1)

{
  void *pvVar1;
  
  param_1[-0xc] = &PTR_FUN_10146e650;
  *param_1 = &PTR_FUN_10146e680;
  FUN_10001629c(param_1 + 5,1);
  FUN_1001f78f4(param_1);
  pvVar1 = (void *)FUN_100205b8c(param_1 + -0xc);
  operator_delete(pvVar1);
  return;
}




void FUN_1001f8880(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001001f8888. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))();
  return;
}




void FUN_1001f888c(uint *param_1,uint param_2)

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




undefined8 * FUN_1001f8908(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10146e6b0;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return param_1;
}




void FUN_1001f894c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10146e6b0;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  operator_delete(param_1);
  return;
}




void FUN_1001f898c(long param_1)

{
  if (*(long **)(param_1 + 0x38) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001001f899c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x38) + 0x170))();
    return;
  }
  return;
}




undefined8 * FUN_1001f89a4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10146e6d0;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return param_1;
}




void FUN_1001f89e8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10146e6d0;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  operator_delete(param_1);
  return;
}




void FUN_1001f8a28(uint *param_1,uint param_2)

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




void FUN_1001f8aa4(uint *param_1,uint param_2)

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




undefined8 * FUN_1001f8b20(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR_FUN_10146e710;
  operator_new(0x1c8f8);
  lVar1 = thunk_FUN_1002b6c3c();
  *(undefined8 **)(lVar1 + 0xd8) = param_1;
  *param_1 = &PTR_thunk_FUN_1001f8b80_10146e6f0;
  param_1[1] = lVar1;
  param_1[2] = 0;
  FUN_1004e313c(param_1 + 3);
  *(undefined1 *)(param_1 + 5) = 0;
  return param_1;
}




undefined8 * thunk_FUN_1001f8b20(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR_FUN_10146e710;
  operator_new(0x1c8f8);
  lVar1 = thunk_FUN_1002b6c3c();
  *(undefined8 **)(lVar1 + 0xd8) = param_1;
  *param_1 = &PTR_thunk_FUN_1001f8b80_10146e6f0;
  param_1[1] = lVar1;
  param_1[2] = 0;
  FUN_1004e313c(param_1 + 3);
  *(undefined1 *)(param_1 + 5) = 0;
  return param_1;
}




undefined8 * FUN_1001f8b80(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_thunk_FUN_1001f8b80_10146e6f0;
  if (param_1[2] != 0) {
    pvVar1 = (void *)thunk_FUN_10031ea60();
    operator_delete(pvVar1);
  }
  if ((void *)param_1[4] != (void *)0x0) {
    operator_delete__((void *)param_1[4]);
    param_1[3] = 0;
    param_1[4] = 0;
  }
  *param_1 = &PTR_FUN_10146e710;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return param_1;
}




void thunk_FUN_1001f8b80(void)

{
  FUN_1001f8b80();
  return;
}




void FUN_1001f8bf4(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1001f8b80();
  operator_delete(pvVar1);
  return;
}




void FUN_1001f8c08(long param_1)

{
  undefined8 uVar1;
  
  operator_new(0x20);
  uVar1 = thunk_FUN_10031e794();
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  FUN_1001f8c40(param_1);
  FUN_1002b7898(*(undefined8 *)(param_1 + 8));
  return;
}




void FUN_1001f8c40(long param_1)

{
  undefined8 *****pppppuVar1;
  undefined1 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined4 *puVar10;
  undefined8 uVar11;
  ulong uVar12;
  long lVar13;
  undefined8 uVar14;
  uint uVar15;
  long lVar16;
  undefined8 uVar17;
  undefined8 ****local_1b0;
  void *local_1a8;
  char local_199;
  undefined1 auStack_198 [8];
  void *local_190;
  undefined1 auStack_188 [8];
  void *local_180;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined1 auStack_170 [15];
  char local_161;
  undefined1 auStack_158 [24];
  undefined1 auStack_140 [24];
  undefined1 auStack_128 [24];
  undefined1 auStack_110 [24];
  undefined1 auStack_f8 [24];
  undefined1 auStack_e0 [24];
  undefined1 auStack_c8 [24];
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 auStack_90 [8];
  void *local_88;
  long local_80;
  
  local_80 = *(long *)PTR____stack_chk_guard_101444218;
  uVar11 = *(undefined8 *)(param_1 + 8);
  uVar7 = FUN_10031edd8(*(undefined8 *)(param_1 + 0x10));
  uVar8 = FUN_10031ede0(*(undefined8 *)(param_1 + 0x10));
  uVar9 = FUN_10031edf4(*(undefined8 *)(param_1 + 0x10));
  FUN_1002b84c4(uVar11,uVar7,uVar8,uVar9);
  iVar3 = FUN_10031edd8(*(undefined8 *)(param_1 + 0x10));
  if (iVar3 != 0) {
    uVar15 = 0;
    do {
      puVar10 = (undefined4 *)FUN_10031edc8(*(undefined8 *)(param_1 + 0x10),uVar15);
      local_178 = *puVar10;
      FUN_10003330c(auStack_170,puVar10 + 2);
      FUN_10003330c(auStack_158,puVar10 + 8);
      FUN_10003330c(auStack_140,puVar10 + 0xe);
      FUN_10003330c(auStack_128,puVar10 + 0x14);
      FUN_10003330c(auStack_110,puVar10 + 0x1a);
      FUN_10003330c(auStack_f8,puVar10 + 0x20);
      FUN_10003330c(auStack_e0,puVar10 + 0x26);
      FUN_10003330c(auStack_c8,puVar10 + 0x2c);
      uStack_a8 = *(undefined8 *)(puVar10 + 0x34);
      local_b0 = *(undefined8 *)(puVar10 + 0x32);
      uStack_98 = *(undefined8 *)(puVar10 + 0x38);
      uStack_a0 = *(undefined8 *)(puVar10 + 0x36);
      uVar14 = *(undefined8 *)(param_1 + 8);
      uVar11 = FUN_10031eff0(&local_178);
      FUN_1004e3170(&local_1b0,uVar11);
      uVar11 = FUN_10031efe8(&local_178);
      FUN_1004e3170(auStack_90,uVar11);
      uVar11 = FUN_10031f040(&local_178);
      FUN_1004e3170(auStack_188,uVar11);
      uVar11 = FUN_10031f028(&local_178);
      FUN_1004e3170(auStack_198,uVar11);
      uVar11 = FUN_10031f018(&local_178);
      uVar7 = FUN_10031f020(&local_178);
      uVar8 = FUN_10031efe0(&local_178);
      uVar9 = FUN_10031f030(&local_178);
      uVar2 = FUN_10031f038(&local_178);
      FUN_10031f010(&local_178);
      FUN_10031f008(&local_178);
      FUN_10031eff8(&local_178);
      FUN_10031f000(&local_178);
      uVar17 = FUN_10031f048(&local_178);
      uVar4 = FUN_10031f050(&local_178);
      FUN_10031f058(&local_178);
      uVar5 = FUN_10031f060(&local_178);
      FUN_1002b84dc(uVar17,uVar14,uVar15,&local_1b0,auStack_90,auStack_188,auStack_198,uVar11,uVar7,
                    uVar8,uVar9,uVar2,uVar4,uVar5);
      if (local_190 != (void *)0x0) {
        operator_delete__(local_190);
      }
      if (local_180 != (void *)0x0) {
        operator_delete__(local_180);
      }
      if (local_88 != (void *)0x0) {
        operator_delete__(local_88);
      }
      if (local_1a8 != (void *)0x0) {
        operator_delete__(local_1a8);
      }
      thunk_FUN_10031ef40(&local_178);
      uVar15 = uVar15 + 1;
      uVar6 = FUN_10031edd8(*(undefined8 *)(param_1 + 0x10));
    } while (uVar15 < uVar6);
  }
  uVar11 = FUN_10031ee0c(*(undefined8 *)(param_1 + 0x10));
  FUN_1000153b4(param_1 + 0x18,uVar11);
  FUN_1000153b4(*(long *)(param_1 + 8) + 0x1c8c8,param_1 + 0x18);
  uVar12 = FUN_10016c2fc();
  if (((uVar12 & 1) != 0) && (lVar13 = FUN_10016c2f0(), 0 < *(int *)(lVar13 + 0x38))) {
    FUN_10016c2f0();
    lVar13 = FUN_10016c2f0();
    lVar16 = *(long *)(param_1 + 8);
    if (*(int *)(lVar13 + 0x38) < 2) {
      std::string::operator=((string *)(lVar16 + 0x1c878),(string *)&DAT_101d91198);
      std::string::operator=((string *)(lVar16 + 0x1c890),(string *)(lVar16 + 0x1c878));
    }
    else {
      FUN_1001f90f8(lVar16,"build://Splash_5V5.png","full_splash_1k");
    }
    FUN_1001f917c(auStack_90,"%d");
    FUN_10001549c(&local_178,"TUTORIAL_LOADING_LEVEL_DESCRIPTION_");
    std::string::append((char *)&local_178);
    FUN_10001549c(&local_1b0,"TUTORIAL_LOADING_LEVEL_BOTTOM_TEXT_");
    std::string::append((char *)&local_1b0);
    uVar11 = *(undefined8 *)(param_1 + 8);
    puVar10 = (undefined4 *)CONCAT44(uStack_174,local_178);
    if (-1 < local_161) {
      puVar10 = &local_178;
    }
    uVar7 = FUN_1004e0150(puVar10,0);
    pppppuVar1 = (undefined8 *****)local_1b0;
    if (-1 < local_199) {
      pppppuVar1 = &local_1b0;
    }
    uVar8 = FUN_1004e0150(pppppuVar1,0);
    FUN_1002b8570(uVar11,uVar7,uVar8);
    if (local_199 < '\0') {
      operator_delete(local_1b0);
    }
    if (local_161 < '\0') {
      operator_delete((void *)CONCAT44(uStack_174,local_178));
    }
  }
  if (*(long *)PTR____stack_chk_guard_101444218 == local_80) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_1001f90c0(long param_1)

{
  void *pvVar1;
  
  *(undefined1 *)(param_1 + 0x28) = 0;
  if (*(long *)(param_1 + 0x10) != 0) {
    pvVar1 = (void *)thunk_FUN_10031ea60();
    operator_delete(pvVar1);
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  FUN_1002b83d4(*(undefined8 *)(param_1 + 8));
  return;
}




void FUN_1001f90f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  void *local_38 [2];
  char local_21;
  
  FUN_10001549c(local_38);
  std::string::operator=((string *)(param_1 + 0x1c878),(string *)local_38);
  if (local_21 < '\0') {
    operator_delete(local_38[0]);
  }
  FUN_10001549c(local_38,param_3);
  std::string::operator=((string *)(param_1 + 0x1c890),(string *)local_38);
  if (local_21 < '\0') {
    operator_delete(local_38[0]);
  }
  return;
}




void FUN_1001f917c(undefined8 param_1,undefined8 param_2)

{
  FUN_1004d26e8(param_1,8,param_2,&stack0x00000000);
  return;
}




undefined8 * FUN_1001f91ac(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10146e710;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return param_1;
}




void FUN_1001f91f0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10146e710;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  operator_delete(param_1);
  return;
}




code * FUN_1001f9230(code *param_1,code param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  code *local_60;
  code *pcStack_58;
  code *local_50;
  code *local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  
  *(undefined ***)param_1 = &PTR____cxa_pure_virtual_10146e7d0;
  operator_new(0xc1c0);
  lVar2 = thunk_FUN_1002bba14();
  *(code **)(lVar2 + 0xd8) = param_1;
  *(undefined ***)param_1 = &PTR_FUN_10146e730;
  *(long *)(param_1 + 8) = lVar2;
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_10146e7b0;
  FUN_1001fba98(param_1 + 0x18);
  lVar2 = 0x48;
  do {
    thunk_FUN_1001fb130(param_1 + lVar2);
    lVar2 = lVar2 + 0x28;
  } while (lVar2 != 0x110);
  do {
    thunk_FUN_1001fb130(param_1 + lVar2);
    lVar2 = lVar2 + 0x28;
  } while (lVar2 != 0x1d8);
  param_1[0x1640] = (code)0x0;
  _bzero(param_1 + 0x1d8,0x1458);
  *(undefined4 *)(param_1 + 0x1644) = 0xffffffff;
  param_1[0x1648] = (code)0x0;
  param_1[0x1649] = param_2;
  param_1[0x164a] = (code)0x0;
  *(undefined4 *)(param_1 + 0x164c) = 0;
  *(undefined4 *)(param_1 + 0x1650) = 0;
  operator_new(0x98);
  uVar3 = FUN_100308444();
  *(undefined8 *)(param_1 + 0x1608) = uVar3;
  FUN_1001f9510(param_1);
  local_60 = (code *)0x0;
  local_48 = thunk_FUN_1001f97d8;
  pcStack_58 = param_1;
  local_50 = param_1;
  FUN_1001fad74(*(long *)(param_1 + 0x1608) + 8,&local_60);
  local_60 = (code *)0x0;
  local_48 = thunk_FUN_1001f9f00;
  pcStack_58 = param_1;
  local_50 = param_1;
  FUN_1001fae74(*(long *)(param_1 + 0x1608) + 0x28,&local_60);
  local_60 = (code *)0x0;
  local_48 = thunk_FUN_1001fa130;
  pcStack_58 = param_1;
  local_50 = param_1;
  FUN_1001faf74(*(long *)(param_1 + 0x1608) + 0x38,&local_60);
  pcStack_58 = (code *)0x0;
  local_48 = FUN_1001fb074;
  local_60 = param_1;
  local_50 = param_1;
  FUN_1000be5e4(*(long *)(param_1 + 0x1608) + 0x48,&local_60);
  operator_new(0x58);
  uVar3 = FUN_1001e8db8();
  *(undefined8 *)(param_1 + 0x1630) = uVar3;
  uVar4 = FUN_100131560();
  if ((uVar4 & 1) == 0) {
    lVar2 = *(long *)(param_1 + 0x1630);
    *(undefined4 *)(lVar2 + 0x50) = 100;
    FUN_1002903a8(*(undefined8 *)(lVar2 + 8),0);
    *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x1630) + 8) + 0x41c0) = 0;
    FUN_1002bc8dc(*(undefined8 *)(param_1 + 8),*(undefined8 *)(*(long *)(param_1 + 0x1630) + 8),1,0)
    ;
    FUN_1001e8f2c(*(undefined8 *)(param_1 + 0x1630));
  }
  operator_new(0x58);
  uVar3 = FUN_1001e8db8();
  *(undefined8 *)(param_1 + 0x1638) = uVar3;
  uVar4 = FUN_100131560();
  if ((uVar4 & 1) == 0) {
    lVar2 = *(long *)(param_1 + 0x1638);
    *(undefined4 *)(lVar2 + 0x50) = 10;
    FUN_1002903a8(*(undefined8 *)(lVar2 + 8),1);
    FUN_1002bc8dc(*(undefined8 *)(param_1 + 8),*(undefined8 *)(*(long *)(param_1 + 0x1638) + 8),0,1)
    ;
    FUN_1001e8f2c(*(undefined8 *)(param_1 + 0x1638));
  }
  FUN_1002bc9dc(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x20));
  FUN_1002bb0c4(*(undefined8 *)(param_1 + 0x20),0);
  lVar2 = FUN_1003467f8();
  if (lVar2 != 0) {
    lVar2 = *(long *)(param_1 + 8);
    uVar3 = FUN_1003467f8();
    FUN_1003467f8();
    uVar5 = FUN_10034cdd0();
    FUN_1001d5ff0(lVar2 + 0x8a80,uVar3,uVar5);
  }
  local_38 = DAT_101d237e0;
  local_60 = FUN_1001f95ec;
  local_48 = (code *)0x0;
  uStack_40 = 0;
  local_50 = (code *)0x0;
  pcStack_58 = param_1;
  FUN_10001554c(*(long *)(param_1 + 8) + 8,&local_60);
  local_38 = DAT_101d237e4;
  local_60 = FUN_1001f9600;
  local_48 = (code *)0x0;
  uStack_40 = 0;
  local_50 = (code *)0x0;
  pcStack_58 = param_1;
  FUN_10001554c(*(long *)(param_1 + 8) + 8,&local_60);
  lVar2 = FUN_1003467f8();
  if (lVar2 != 0) {
    FUN_1003467f8();
    iVar1 = FUN_10034cdd8();
    if (iVar1 != 0) {
      FUN_1003467f8();
      FUN_100106b14();
    }
  }
  return param_1;
}




void FUN_1001f9510(long param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  
  plVar4 = (long *)FUN_10034bdb4();
  plVar4 = (long *)*plVar4;
  lVar7 = *plVar4;
  do {
    if (lVar7 == 0) {
      FUN_1002bcdac(*(undefined8 *)(param_1 + 8));
      FUN_1002bce34(*(undefined8 *)(param_1 + 8));
      return;
    }
    iVar1 = FUN_1001311c4();
    if ((iVar1 == 0) || (*(char *)(*plVar4 + 8) != '\0')) {
      uVar5 = FUN_10015d3ec();
      uVar2 = FUN_10016663c(uVar5,*(undefined8 *)*plVar4);
      lVar7 = FUN_1003467f8();
      if (lVar7 == 0) {
LAB_1001f958c:
        uVar3 = 0;
      }
      else {
        FUN_1003467f8();
        iVar1 = FUN_10034ce80();
        if (iVar1 == 0) goto LAB_1001f958c;
        FUN_1003467f8();
        iVar1 = FUN_10034ce40();
        if (iVar1 == 0) goto LAB_1001f958c;
        uVar3 = FUN_1001311d4();
        uVar3 = uVar3 ^ 1;
      }
      uVar5 = *(undefined8 *)(param_1 + 8);
      lVar8 = *plVar4;
      lVar7 = FUN_1003467f8();
      if (lVar7 == 0) {
        uVar6 = 0;
      }
      else {
        FUN_1003467f8();
        uVar6 = FUN_10034cf60();
      }
      FUN_1002bc538(uVar5,lVar8,uVar6,uVar2 & uVar3);
    }
    plVar4 = plVar4 + 1;
    lVar7 = *plVar4;
  } while( true );
}




void FUN_1001f95ec(long param_1)

{
  *(uint *)(*(long *)(param_1 + 8) + 0x32c) = *(uint *)(*(long *)(param_1 + 8) + 0x32c) | 4;
  return;
}




void FUN_1001f9600(long param_1)

{
  *(uint *)(*(long *)(param_1 + 8) + 0x32c) = *(uint *)(*(long *)(param_1 + 8) + 0x32c) & 0xfffffffb
  ;
  return;
}




code * thunk_FUN_1001f9230(code *param_1,code param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  code *pcStack_60;
  code *pcStack_58;
  code *pcStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  
  *(undefined ***)param_1 = &PTR____cxa_pure_virtual_10146e7d0;
  operator_new(0xc1c0);
  lVar2 = thunk_FUN_1002bba14();
  *(code **)(lVar2 + 0xd8) = param_1;
  *(undefined ***)param_1 = &PTR_FUN_10146e730;
  *(long *)(param_1 + 8) = lVar2;
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_10146e7b0;
  FUN_1001fba98(param_1 + 0x18);
  lVar2 = 0x48;
  do {
    thunk_FUN_1001fb130(param_1 + lVar2);
    lVar2 = lVar2 + 0x28;
  } while (lVar2 != 0x110);
  do {
    thunk_FUN_1001fb130(param_1 + lVar2);
    lVar2 = lVar2 + 0x28;
  } while (lVar2 != 0x1d8);
  param_1[0x1640] = (code)0x0;
  _bzero(param_1 + 0x1d8,0x1458);
  *(undefined4 *)(param_1 + 0x1644) = 0xffffffff;
  param_1[0x1648] = (code)0x0;
  param_1[0x1649] = param_2;
  param_1[0x164a] = (code)0x0;
  *(undefined4 *)(param_1 + 0x164c) = 0;
  *(undefined4 *)(param_1 + 0x1650) = 0;
  operator_new(0x98);
  uVar3 = FUN_100308444();
  *(undefined8 *)(param_1 + 0x1608) = uVar3;
  FUN_1001f9510(param_1);
  pcStack_60 = (code *)0x0;
  pcStack_48 = thunk_FUN_1001f97d8;
  pcStack_58 = param_1;
  pcStack_50 = param_1;
  FUN_1001fad74(*(long *)(param_1 + 0x1608) + 8,&pcStack_60);
  pcStack_60 = (code *)0x0;
  pcStack_48 = thunk_FUN_1001f9f00;
  pcStack_58 = param_1;
  pcStack_50 = param_1;
  FUN_1001fae74(*(long *)(param_1 + 0x1608) + 0x28,&pcStack_60);
  pcStack_60 = (code *)0x0;
  pcStack_48 = thunk_FUN_1001fa130;
  pcStack_58 = param_1;
  pcStack_50 = param_1;
  FUN_1001faf74(*(long *)(param_1 + 0x1608) + 0x38,&pcStack_60);
  pcStack_58 = (code *)0x0;
  pcStack_48 = FUN_1001fb074;
  pcStack_60 = param_1;
  pcStack_50 = param_1;
  FUN_1000be5e4(*(long *)(param_1 + 0x1608) + 0x48,&pcStack_60);
  operator_new(0x58);
  uVar3 = FUN_1001e8db8();
  *(undefined8 *)(param_1 + 0x1630) = uVar3;
  uVar4 = FUN_100131560();
  if ((uVar4 & 1) == 0) {
    lVar2 = *(long *)(param_1 + 0x1630);
    *(undefined4 *)(lVar2 + 0x50) = 100;
    FUN_1002903a8(*(undefined8 *)(lVar2 + 8),0);
    *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x1630) + 8) + 0x41c0) = 0;
    FUN_1002bc8dc(*(undefined8 *)(param_1 + 8),*(undefined8 *)(*(long *)(param_1 + 0x1630) + 8),1,0)
    ;
    FUN_1001e8f2c(*(undefined8 *)(param_1 + 0x1630));
  }
  operator_new(0x58);
  uVar3 = FUN_1001e8db8();
  *(undefined8 *)(param_1 + 0x1638) = uVar3;
  uVar4 = FUN_100131560();
  if ((uVar4 & 1) == 0) {
    lVar2 = *(long *)(param_1 + 0x1638);
    *(undefined4 *)(lVar2 + 0x50) = 10;
    FUN_1002903a8(*(undefined8 *)(lVar2 + 8),1);
    FUN_1002bc8dc(*(undefined8 *)(param_1 + 8),*(undefined8 *)(*(long *)(param_1 + 0x1638) + 8),0,1)
    ;
    FUN_1001e8f2c(*(undefined8 *)(param_1 + 0x1638));
  }
  FUN_1002bc9dc(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x20));
  FUN_1002bb0c4(*(undefined8 *)(param_1 + 0x20),0);
  lVar2 = FUN_1003467f8();
  if (lVar2 != 0) {
    lVar2 = *(long *)(param_1 + 8);
    uVar3 = FUN_1003467f8();
    FUN_1003467f8();
    uVar5 = FUN_10034cdd0();
    FUN_1001d5ff0(lVar2 + 0x8a80,uVar3,uVar5);
  }
  uStack_38 = DAT_101d237e0;
  pcStack_60 = FUN_1001f95ec;
  pcStack_48 = (code *)0x0;
  uStack_40 = 0;
  pcStack_50 = (code *)0x0;
  pcStack_58 = param_1;
  FUN_10001554c(*(long *)(param_1 + 8) + 8,&pcStack_60);
  uStack_38 = DAT_101d237e4;
  pcStack_60 = FUN_1001f9600;
  pcStack_48 = (code *)0x0;
  uStack_40 = 0;
  pcStack_50 = (code *)0x0;
  pcStack_58 = param_1;
  FUN_10001554c(*(long *)(param_1 + 8) + 8,&pcStack_60);
  lVar2 = FUN_1003467f8();
  if (lVar2 != 0) {
    FUN_1003467f8();
    iVar1 = FUN_10034cdd8();
    if (iVar1 != 0) {
      FUN_1003467f8();
      FUN_100106b14();
    }
  }
  return param_1;
}




undefined8 * FUN_1001f9618(undefined8 *param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  
  *param_1 = &PTR_FUN_10146e730;
  param_1[2] = &PTR_FUN_10146e7b0;
  lVar2 = param_1[0x2c1];
  uVar1 = *(uint *)(lVar2 + 8);
  if (uVar1 != 0) {
    lVar3 = *(long *)(lVar2 + 0x10);
    lVar4 = (ulong)uVar1 << 5;
    do {
      puVar5 = (undefined8 *)(lVar3 + 8);
      lVar3 = lVar3 + 0x20;
      if ((undefined8 *)*puVar5 == param_1) {
        FUN_1001fb0c0((uint *)(lVar2 + 8));
        lVar2 = param_1[0x2c1];
        break;
      }
      lVar4 = lVar4 + -0x20;
    } while (lVar4 != 0);
  }
  uVar1 = *(uint *)(lVar2 + 0x48);
  if (uVar1 != 0) {
    lVar3 = (ulong)uVar1 << 5;
    puVar5 = *(undefined8 **)(lVar2 + 0x50);
    do {
      if ((undefined8 *)*puVar5 == param_1) {
        FUN_1000c044c((uint *)(lVar2 + 0x48),puVar5,puVar5 + 4);
        break;
      }
      lVar3 = lVar3 + -0x20;
      puVar5 = puVar5 + 4;
    } while (lVar3 != 0);
  }
  if ((long *)param_1[0x2c6] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x2c6] + 0x10))();
  }
  param_1[0x2c6] = 0;
  if ((long *)param_1[0x2c7] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x2c7] + 0x10))();
  }
  param_1[0x2c7] = 0;
  if ((long *)param_1[0x2c1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x2c1] + 8))();
  }
  param_1[0x2c1] = 0;
  if (*(char *)((long)param_1 + 0x162f) < '\0') {
    operator_delete((void *)param_1[0x2c3]);
  }
  lVar2 = 0x1b0;
  do {
    thunk_FUN_1001fb190((long)param_1 + lVar2);
    lVar2 = lVar2 + -0x28;
  } while (lVar2 != 0xe8);
  do {
    thunk_FUN_1001fb190((long)param_1 + lVar2);
    lVar2 = lVar2 + -0x28;
  } while (lVar2 != 0x20);
  param_1[3] = &PTR_FUN_10146e8c8;
  if ((void *)param_1[6] != (void *)0x0) {
    operator_delete__((void *)param_1[6]);
    param_1[5] = 0;
    param_1[6] = 0;
  }
  param_1[3] = &PTR____cxa_pure_virtual_10146b328;
  if ((long *)param_1[4] != (long *)0x0) {
    (**(code **)(*(long *)param_1[4] + 8))();
  }
  param_1[4] = 0;
  *param_1 = &PTR____cxa_pure_virtual_10146e7d0;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return param_1;
}




void thunk_FUN_1001f9618(void)

{
  FUN_1001f9618();
  return;
}




void FUN_1001f97c4(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1001f9618();
  operator_delete(pvVar1);
  return;
}




void FUN_1001f97d8(long param_1,void *param_2)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  
  *(undefined1 *)(param_1 + 0x1640) = 0;
  _memcpy((void *)(param_1 + 0x1d8),param_2,0xa18);
  uVar2 = FUN_1001f9890(param_1);
  if ((uVar2 & 1) == 0) {
    *(undefined1 *)(param_1 + 0x1648) = 1;
  }
  if (*(char *)(param_1 + 0x164a) == '\0') {
    if (*(char *)(param_1 + 0x1648) == '\0') {
      FUN_1002bcb18(*(undefined8 *)(param_1 + 8));
    }
    else {
      FUN_1002bca24();
    }
    lVar3 = FUN_1003467f8();
    if (lVar3 != 0) {
      FUN_1003467f8();
      uVar2 = FUN_10034ce60();
      if ((uVar2 & 1) == 0) {
        FUN_1003467f8();
        iVar1 = FUN_10034cde8();
        if (iVar1 == 0) goto LAB_1001f985c;
      }
      FUN_1002bcba0(*(undefined8 *)(param_1 + 8));
    }
  }
LAB_1001f985c:
  FUN_1001f9a18(param_1);
  FUN_1001f9a9c(param_1);
  FUN_1001f9ce4(param_1);
  FUN_1002bcc00(*(undefined4 *)(param_1 + 0x1d8),*(undefined8 *)(param_1 + 8));
  FUN_1001f9e34(param_1);
  return;
}




bool FUN_1001f9890(long param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  byte *pbVar9;
  
  iVar2 = FUN_1001fabbc();
  if (iVar2 != -1) {
    lVar7 = param_1 + (long)iVar2 * 0xa1;
    lVar8 = lVar7 + 0x1e0;
    if (*(char *)(param_1 + 0x1640) != '\0') {
      lVar8 = lVar7 + 0xbf8;
    }
    uVar5 = FUN_10030885c(*(undefined8 *)(param_1 + 0x1608));
    uVar6 = FUN_100308864(*(undefined8 *)(param_1 + 0x1608));
    if (*(char *)(lVar8 + 3) == '\0') {
      if (((int)uVar5 != 0xffff) &&
         (lVar7 = FUN_1002bc7b0(*(undefined8 *)(param_1 + 8),uVar5), lVar7 != 0)) {
        FUN_1001d1b9c();
      }
    }
    else if (((int)uVar6 != 0xffff && (int)uVar6 != (int)uVar5) &&
            (lVar7 = FUN_1002bc7b0(*(undefined8 *)(param_1 + 8),uVar6), lVar7 != 0)) {
      FUN_1001d1b38();
    }
    FUN_1001fa370(param_1,lVar8);
    if (*(long *)(param_1 + 0x1610) != 0) {
      FUN_100220b58(*(long *)(param_1 + 0x1610),*(undefined1 *)(lVar8 + 5),
                    *(undefined1 *)(lVar8 + 6));
    }
    FUN_100530068(*(long *)(param_1 + 8) + 0xa2d8,*(char *)(lVar8 + 3) != '\0');
    lVar8 = 0;
    do {
      bVar1 = *(byte *)(param_1 + 0x68 + lVar8);
      uVar3 = FUN_100308854(*(undefined8 *)(param_1 + 0x1608));
      if (bVar1 == uVar3) {
        if (((int)lVar8 != -0x28) && (iVar4 = FUN_100126b8c(), iVar4 != 0)) {
          lVar8 = 0;
          pbVar9 = (byte *)(param_1 + 0x68);
          goto LAB_1001f99c0;
        }
        break;
      }
      lVar8 = lVar8 + 0x28;
    } while (lVar8 != 200);
  }
  goto LAB_1001f99fc;
  while( true ) {
    lVar8 = lVar8 + 1;
    pbVar9 = pbVar9 + 0x28;
    if (lVar8 == 5) break;
LAB_1001f99c0:
    bVar1 = *pbVar9;
    uVar3 = FUN_100308854(*(undefined8 *)(param_1 + 0x1608));
    if (bVar1 == uVar3) goto LAB_1001f99e8;
  }
  lVar8 = -1;
LAB_1001f99e8:
  FUN_1001fb98c(param_1 + lVar8 * 0x28 + 0x48,*(undefined8 *)(param_1 + 0x1608));
LAB_1001f99fc:
  return iVar2 != -1;
}




void FUN_1001f9a18(undefined8 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((*(char *)((long)param_1 + 0x164a) == '\0') && (iVar1 = FUN_1001fabbc(), iVar1 != -1)) {
    uVar2 = FUN_1001fac28(param_1);
    if ((int)uVar2 != 0xffff) {
      FUN_1002bce40(param_1[1]);
      FUN_1002bc7e0(param_1[1],uVar2);
                    /* WARNING: Could not recover jumptable at 0x0001001f9a98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,uVar2);
      return;
    }
  }
  return;
}




void FUN_1001f9a9c(long param_1)

{
  char *pcVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  int iVar9;
  void *local_88 [2];
  char local_71;
  undefined8 local_70;
  undefined8 uStack_68;
  
  if (*(char *)(param_1 + 0x164a) == '\0') {
    lVar8 = 0;
    iVar3 = 0;
    iVar9 = 0;
    local_70 = 0;
    uStack_68 = 0;
    do {
      pcVar1 = (char *)(param_1 + lVar8 + 0x1e0);
      if (*(char *)(param_1 + 0x1640) != '\0') {
        pcVar1 = (char *)(param_1 + lVar8 + 0xbf8);
      }
      if (*pcVar1 != '\0') {
        if (*(char *)(param_1 + 0x1648) == '\0') {
          uVar2 = FUN_10030884c(*(undefined8 *)(param_1 + 0x1608));
          if (uVar2 == (byte)pcVar1[8]) {
            lVar5 = param_1 + (long)iVar3 * 0x28;
            FUN_1002bcc30(*(undefined8 *)(param_1 + 8),*(undefined8 *)(lVar5 + 0x50));
            uVar4 = *(undefined8 *)(lVar5 + 0x50);
            lVar7 = FUN_1003467f8();
            if (lVar7 == 0) {
              uVar6 = 0;
            }
            else {
              FUN_1003467f8();
              uVar6 = FUN_10034ced0();
            }
            FUN_1002b9884(uVar4,uVar6);
LAB_1001f9c10:
            lVar5 = lVar5 + 0x48;
            iVar3 = iVar3 + 1;
            uVar4 = 1;
            goto LAB_1001f9c14;
          }
        }
        else if (pcVar1[8] == '\x02') {
          lVar7 = param_1 + (long)iVar9 * 0x28;
          lVar5 = lVar7 + 0x110;
          FUN_1002bcd1c(*(undefined8 *)(param_1 + 8),*(undefined8 *)(lVar7 + 0x118));
          *(uint *)(*(long *)(lVar7 + 0x118) + 0x84) =
               *(uint *)(*(long *)(lVar7 + 0x118) + 0x84) & 0xffffffef;
          uVar6 = *(undefined8 *)(lVar7 + 0x118);
          FUN_1003467f8();
          uVar4 = FUN_10034ced0();
          FUN_1002b9884(uVar6,uVar4);
          iVar9 = iVar9 + 1;
          uVar4 = 0;
LAB_1001f9c14:
          FUN_1001fb210(lVar5,uVar4);
        }
        else if (pcVar1[8] == '\x01') {
          lVar5 = param_1 + (long)iVar3 * 0x28;
          FUN_1002bcc30(*(undefined8 *)(param_1 + 8),*(undefined8 *)(lVar5 + 0x50));
          *(uint *)(*(long *)(lVar5 + 0x50) + 0x84) =
               *(uint *)(*(long *)(lVar5 + 0x50) + 0x84) & 0xffffffef;
          uVar6 = *(undefined8 *)(lVar5 + 0x50);
          FUN_1003467f8();
          uVar4 = FUN_10034ced0();
          FUN_1002b9884(uVar6,uVar4);
          goto LAB_1001f9c10;
        }
        FUN_10001549c(local_88,pcVar1 + 0x61);
        FUN_10001617c(&local_70,local_88);
        if (local_71 < '\0') {
          operator_delete(local_88[0]);
        }
      }
      lVar8 = lVar8 + 0xa1;
    } while (lVar8 != 0x64a);
    uVar4 = FUN_10015d3ec();
    FUN_100166b08(uVar4,&local_70);
    if (*(char *)(param_1 + 0x1649) == '\0') {
      uVar4 = FUN_10030884c(*(undefined8 *)(param_1 + 0x1608));
      FUN_1001faa0c(param_1,uVar4);
    }
    iVar3 = FUN_100126b8c();
    if ((iVar3 != 0) && (iVar3 = thunk_FUN_10052bc30(), iVar3 != 0)) {
      FUN_10030884c(*(undefined8 *)(param_1 + 0x1608));
      FUN_100129c9c();
    }
    FUN_1001faaf8(param_1);
    if (*(char *)(param_1 + 0x1649) == '\0') {
      FUN_1003467f8();
      iVar3 = FUN_10034cdd0();
      if (iVar3 != 0) {
        FUN_100102cdc();
      }
    }
    *(undefined1 *)(param_1 + 0x164a) = 1;
    FUN_10001629c(&local_70,1);
  }
  return;
}




void FUN_1001f9ce4(long param_1)

{
  char *pcVar1;
  byte bVar2;
  byte bVar3;
  short sVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  int iVar10;
  int local_64;
  
  uVar6 = FUN_10030884c(*(undefined8 *)(param_1 + 0x1608));
  lVar9 = 0;
  iVar10 = 0;
  local_64 = 0;
  do {
    pcVar1 = (char *)(param_1 + lVar9 + 0x1e0);
    if (*(char *)(param_1 + 0x1640) != '\0') {
      pcVar1 = (char *)(param_1 + lVar9 + 0xbf8);
    }
    if (*pcVar1 != '\0') {
      bVar2 = pcVar1[8];
      if ((uint)uVar6 == (uint)bVar2) {
        bVar3 = pcVar1[1];
        uVar5 = FUN_100308854(*(undefined8 *)(param_1 + 0x1608));
        FUN_1001fb414(param_1 + (long)iVar10 * 0x28 + 0x48,pcVar1,uVar6,bVar3 == uVar5);
        iVar10 = iVar10 + 1;
      }
      else if (*(char *)(param_1 + 0x1648) != '\0') {
        FUN_1001fb414(param_1 + (long)local_64 * 0x28 + 0x110,pcVar1,uVar6,0);
        local_64 = local_64 + 1;
      }
      sVar4 = *(short *)(pcVar1 + 9);
      if ((sVar4 != -1) && (pcVar1[3] != '\0')) {
        uVar8 = *(undefined8 *)(param_1 + 8);
        uVar7 = FUN_10034ea2c(*(undefined2 *)(pcVar1 + 0xb));
        FUN_1002bc840(uVar8,sVar4,(uint)uVar6 == (uint)bVar2,uVar7);
      }
    }
    lVar9 = lVar9 + 0xa1;
  } while (lVar9 != 0x64a);
  return;
}




void FUN_1001f9e34(long param_1)

{
  int iVar1;
  char *pcVar2;
  undefined8 uVar3;
  undefined1 auStack_30 [8];
  void *local_28;
  
  thunk_FUN_1004e439c(auStack_30,&DAT_101d91650);
  if (*(char *)(param_1 + 0x1648) == '\0') {
    iVar1 = FUN_100308864(*(undefined8 *)(param_1 + 0x1608));
    if (iVar1 == 0xffff) {
      iVar1 = FUN_10030885c(*(undefined8 *)(param_1 + 0x1608));
      if (iVar1 == 0xffff) {
        pcVar2 = "MENU_DRAFT_LOBBY_LABEL_SELECT_A_HERO";
      }
      else {
        iVar1 = FUN_10030885c(*(undefined8 *)(param_1 + 0x1608));
        if (iVar1 == 0xffff) goto LAB_1001f9ebc;
        pcVar2 = "MENU_DRAFT_LOBBY_LABEL_LOCK_IN_A_HERO";
      }
    }
    else {
      pcVar2 = "MENU_DRAFT_LOBBY_BUTTON_LOCKED_IN";
    }
    uVar3 = FUN_1004e0150(pcVar2,0);
    FUN_1000153b4(auStack_30,uVar3);
  }
LAB_1001f9ebc:
  FUN_1002bc8d4(*(undefined8 *)(param_1 + 8),auStack_30);
  if (local_28 != (void *)0x0) {
    operator_delete__(local_28);
  }
  return;
}




void FUN_1001f9f00(undefined8 *param_1,void *param_2)

{
  char *pcVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  uint local_54;
  
  pcVar1 = (char *)(param_1 + 0x2c8);
  *pcVar1 = '\x01';
  iVar4 = FUN_1001fabbc();
  lVar6 = (long)iVar4 * 0xa1 + 0x1e0;
  if (*pcVar1 != '\0') {
    lVar6 = (long)iVar4 * 0xa1 + 0xbf8;
  }
  sVar2 = *(short *)((long)param_1 + lVar6 + 9);
  _memcpy(param_1 + 0x17e,param_2,0xa18);
  iVar4 = FUN_1001fabbc(param_1);
  lVar6 = (long)iVar4 * 0xa1 + 0x1e0;
  if (*pcVar1 != '\0') {
    lVar6 = (long)iVar4 * 0xa1 + 0xbf8;
  }
  sVar3 = *(short *)((long)param_1 + lVar6 + 9);
  uVar5 = FUN_1001f9890(param_1);
  if ((uVar5 & 1) == 0) {
    *(undefined1 *)(param_1 + 0x2c9) = 1;
  }
  if (*(char *)((long)param_1 + 0x164a) != '\0') goto LAB_1001fa038;
  if (*(char *)(param_1 + 0x2c9) == '\0') {
    FUN_1002bcb18(param_1[1]);
  }
  else {
    FUN_1002bca24();
  }
  lVar6 = FUN_1003467f8();
  if (lVar6 != 0) {
    FUN_1003467f8();
    uVar5 = FUN_10034ce60();
    if ((uVar5 & 1) == 0) {
      FUN_1003467f8();
      iVar4 = FUN_10034cde8();
      if (iVar4 == 0) goto LAB_1001f9fe8;
    }
    FUN_1002bcba0(param_1[1]);
  }
LAB_1001f9fe8:
  uVar9 = param_1[1];
  lVar6 = FUN_1003467f8();
  if (lVar6 == 0) {
    uVar8 = 0;
  }
  else {
    FUN_1003467f8();
    uVar5 = FUN_10034ce00();
    if ((uVar5 & 1) == 0) {
      FUN_1003467f8();
      uVar8 = FUN_10034ce60();
    }
    else {
      uVar8 = 1;
    }
  }
  FUN_1002bcba8(uVar9,uVar8);
  if (*(char *)(param_1 + 0x2c9) == '\0') {
    FUN_1001fbddc(param_1 + 3,1);
  }
LAB_1001fa038:
  if (sVar2 != sVar3) {
    FUN_1002bce40(param_1[1]);
    uVar9 = param_1[1];
    iVar4 = FUN_1001fabbc(param_1);
    lVar6 = (long)iVar4 * 0xa1 + 0x1e0;
    if (*pcVar1 != '\0') {
      lVar6 = (long)iVar4 * 0xa1 + 0xbf8;
    }
    FUN_1002bc7e0(uVar9,*(undefined2 *)((long)param_1 + lVar6 + 9));
    iVar4 = FUN_1001fabbc(param_1);
    lVar6 = (long)iVar4 * 0xa1 + 0x1e0;
    if (*pcVar1 != '\0') {
      lVar6 = (long)iVar4 * 0xa1 + 0xbf8;
    }
    (**(code **)*param_1)(param_1,*(undefined2 *)((long)param_1 + lVar6 + 9));
    iVar4 = FUN_1001fabbc(param_1);
    lVar6 = (long)iVar4 * 0xa1 + 0x1e0;
    if (*pcVar1 != '\0') {
      lVar6 = (long)iVar4 * 0xa1 + 0xbf8;
    }
    local_54 = (uint)*(ushort *)((long)param_1 + lVar6 + 9);
    puVar7 = (undefined8 *)FUN_10034be60(&local_54);
    if (puVar7 != (undefined8 *)0x0) {
      FUN_1001fbb58(param_1 + 3,*puVar7);
    }
  }
  FUN_1001f9a9c(param_1);
  FUN_1001f9ce4(param_1);
  FUN_1002bcc00(*(undefined4 *)(param_1 + 0x17e),param_1[1]);
  FUN_1001f9e34(param_1);
  return;
}




void FUN_1001fa130(long param_1,uint *param_2)

{
  undefined8 uVar1;
  byte bVar2;
  
  if (*(uint *)((long)param_2 + 0x4d) < *param_2) {
    bVar2 = 0;
    uVar1 = *(undefined8 *)(param_1 + 8);
  }
  else {
    if (param_2[2] < param_2[1]) {
      uVar1 = *(undefined8 *)(param_1 + 8);
    }
    else {
      uVar1 = *(undefined8 *)(param_1 + 8);
      if ((char)param_2[0x13] == '\0') {
        bVar2 = 0;
        goto LAB_1001fa190;
      }
    }
    bVar2 = *(byte *)((long)param_2 + 0x51) ^ 1;
  }
LAB_1001fa190:
  FUN_1002bcc08(uVar1,*param_2,bVar2);
  FUN_1002bcc24(*(undefined8 *)(param_1 + 8),*(undefined4 *)((long)param_2 + 0x4d));
  return;
}




void FUN_1001fa1a8(long *param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  
  lVar4 = 0;
  lVar5 = 0x68;
  do {
    bVar1 = *(byte *)((long)param_1 + lVar5);
    uVar2 = FUN_100308854(param_1[0x2c1]);
    if (bVar1 == uVar2) goto LAB_1001fa1f4;
    lVar4 = lVar4 + 1;
    lVar5 = lVar5 + 0x28;
  } while (lVar4 != 5);
  lVar4 = 0xffffffff;
LAB_1001fa1f4:
  if ((int)lVar4 == param_2) {
                    /* WARNING: Could not recover jumptable at 0x0001001fa218. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x58))(param_1);
    return;
  }
  iVar3 = *(int *)((long)param_1 + 0x1644);
  if (iVar3 != -1) {
    FUN_1001fb3a0(param_1 + (long)iVar3 * 5 + 9,0,0);
    *(undefined4 *)((long)param_1 + 0x1644) = 0xffffffff;
  }
  if ((iVar3 != param_2) && (iVar3 = FUN_1001fb3a0(param_1 + (long)param_2 * 5 + 9,1,0), iVar3 != 0)
     ) {
    *(int *)((long)param_1 + 0x1644) = param_2;
  }
  return;
}




void FUN_1001fa284(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  iVar1 = FUN_100308864(*(undefined8 *)(param_1 + 0x1608));
  if (iVar1 == 0xffff) {
    FUN_1002bc7e0(*(undefined8 *)(param_1 + 8),param_2);
  }
  uVar2 = FUN_10030885c(*(undefined8 *)(param_1 + 0x1608));
  if (((int)uVar2 != 0xffff) &&
     (lVar3 = FUN_1002bc7b0(*(undefined8 *)(param_1 + 8),uVar2), lVar3 != 0)) {
    FUN_1001d1b38();
  }
  FUN_1003086d8(*(undefined8 *)(param_1 + 0x1608),param_2);
  uVar2 = FUN_10030885c(*(undefined8 *)(param_1 + 0x1608));
  FUN_100530068(*(long *)(param_1 + 8) + 0x9ba8,(int)uVar2 != 0xffff);
  if (((int)uVar2 != 0xffff) &&
     (lVar3 = FUN_1002bc7b0(*(undefined8 *)(param_1 + 8),uVar2), lVar3 != 0)) {
    FUN_1001d1b9c();
  }
  iVar1 = FUN_1001fabbc(param_1);
  lVar4 = param_1 + (long)iVar1 * 0xa1;
  lVar3 = lVar4 + 0x1e0;
  if (*(char *)(param_1 + 0x1640) != '\0') {
    lVar3 = lVar4 + 0xbf8;
  }
  FUN_1001fa370(param_1,lVar3);
  return;
}




void FUN_1001fa370(long param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  byte bVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  
  if (*(char *)(param_1 + 0x1640) != '\0') {
    return;
  }
  uVar4 = FUN_10030885c(*(undefined8 *)(param_1 + 0x1608));
  bVar3 = FUN_1001fa4bc(param_1,uVar4);
  cVar1 = *(char *)(param_2 + 3);
  uVar5 = FUN_10030865c(*(undefined8 *)(param_1 + 0x1608),uVar4);
  if ((uVar5 & 1) == 0) {
    lVar6 = FUN_1003467f8();
    if (lVar6 != 0) {
      FUN_1003467f8();
      uVar5 = FUN_10034cde8();
      if ((uVar5 & 1) != 0) goto LAB_1001fa3f0;
    }
    bVar2 = (int)uVar4 == 0xffff;
  }
  else {
LAB_1001fa3f0:
    bVar2 = true;
  }
  FUN_1002bc82c(*(undefined8 *)(param_1 + 8),bVar3 & cVar1 == '\0',bVar2);
  return;
}




void FUN_1001fa424(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  int local_24;
  
  uVar2 = FUN_10030885c(*(undefined8 *)(param_1 + 0x1608));
  local_24 = (int)uVar2;
  if ((local_24 != 0xffff) && (iVar1 = FUN_1001fa4bc(param_1,uVar2), iVar1 != 0)) {
    thunk_FUN_100120c08(*(undefined8 *)(param_1 + 0x1608));
    lVar3 = FUN_1002bc7b0(*(undefined8 *)(param_1 + 8),uVar2);
    if (lVar3 != 0) {
      FUN_1001d1b38();
    }
    puVar4 = (undefined8 *)FUN_10034be60(&local_24);
    FUN_1001fbb58(param_1 + 0x18,*puVar4);
    FUN_1001fbddc(param_1 + 0x18,1);
  }
  return;
}




undefined8 FUN_1001fa4bc(long param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  
  if (((int)param_2 != 0xffff) && (uVar1 = FUN_1001facc4(), (uVar1 & 1) == 0)) {
    lVar2 = FUN_1003467f8();
    if (lVar2 != 0) {
      FUN_1003467f8();
      uVar1 = FUN_10034cde8();
      if ((uVar1 & 1) != 0) {
        return 1;
      }
    }
    uVar3 = FUN_10030865c(*(undefined8 *)(param_1 + 0x1608),param_2);
    return uVar3;
  }
  return 0;
}




void FUN_1001fa52c(long param_1,uint param_2)

{
  long lVar1;
  byte *pbVar2;
  long lVar3;
  long lVar4;
  undefined1 auStack_40 [8];
  void *local_38;
  
  lVar4 = 0;
  pbVar2 = (byte *)(param_1 + 0x68);
  do {
    if (*pbVar2 == param_2) goto LAB_1001fa56c;
    lVar4 = lVar4 + 1;
    pbVar2 = pbVar2 + 0x28;
  } while (lVar4 != 5);
  lVar4 = -1;
LAB_1001fa56c:
  lVar3 = param_1 + (long)(int)param_2 * 0xa1;
  lVar1 = lVar3 + 0x1e0;
  if (*(char *)(param_1 + 0x1640) != '\0') {
    lVar1 = lVar3 + 0xbf8;
  }
  thunk_FUN_1004e439c(auStack_40,&DAT_101d91650);
  FUN_1004e3148(auStack_40,lVar1 + 0x11);
  lVar4 = param_1 + lVar4 * 0x28;
  if (*(char *)(lVar4 + 0x6b) == '\0') {
    FUN_1001e8f60(*(undefined8 *)(param_1 + 0x1630),auStack_40);
  }
  else {
    FUN_1001e8f58();
  }
  FUN_1001fb3a0(lVar4 + 0x48,0,0);
  *(undefined4 *)(param_1 + 0x1644) = 0xffffffff;
  if (local_38 != (void *)0x0) {
    operator_delete__(local_38);
  }
  return;
}




void FUN_1001fa608(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  void *local_50 [2];
  char local_39;
  void *local_38 [2];
  char local_21;
  
  uVar1 = FUN_10030885c(*(undefined8 *)(param_1 + 0x1608));
  uVar2 = FUN_100345b94();
  uVar1 = FUN_100345ba0(uVar2,uVar1);
  FUN_10001549c(local_38,uVar1);
  FUN_10001549c(local_50,"");
  FUN_10021c264(local_38,local_50,1,&DAT_101873a48);
  if (local_39 < '\0') {
    operator_delete(local_50[0]);
  }
  if (local_21 < '\0') {
    operator_delete(local_38[0]);
  }
  return;
}




void FUN_1001fa694(long param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined4 local_24;
  
  iVar1 = FUN_100308864(*(undefined8 *)(param_1 + 0x1608));
  if (iVar1 != 0xffff) {
    local_24 = FUN_100308864(*(undefined8 *)(param_1 + 0x1608));
    puVar2 = (undefined8 *)FUN_10034be60(&local_24);
    if (puVar2 != (undefined8 *)0x0) {
      FUN_1001fbb58(param_1 + 0x18,*puVar2);
    }
    FUN_1001fbddc(param_1 + 0x18,1);
  }
  return;
}




void FUN_1001fa708(long param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  
  if ((*(char *)(param_1 + 0x1648) == '\0') && (uVar4 = FUN_1004eef10(), (uVar4 & 1) == 0)) {
    iVar2 = FUN_10030884c(*(undefined8 *)(param_1 + 0x1608));
    FUN_1003467f8();
    iVar3 = FUN_10034cfc0();
    iVar1 = 0;
    if (iVar3 != 0) {
      iVar1 = iVar2 / iVar3;
    }
    FUN_100308798(*(undefined8 *)(param_1 + 0x1608),(iVar2 - iVar1 * iVar3) + 1U & 0xff);
    return;
  }
  return;
}




void FUN_1001fa76c(long param_1)

{
  FUN_1003087a4(*(undefined8 *)(param_1 + 0x1608));
  return;
}




void FUN_1001fa774(long param_1)

{
  thunk_FUN_10012048c(*(undefined8 *)(param_1 + 0x1608));
  *(int *)(param_1 + 0x164c) = *(int *)(param_1 + 0x164c) + 1;
  FUN_100107a6c("gold",*(undefined4 *)(param_1 + 0x1650));
  return;
}




void FUN_1001fa7b0(long param_1)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  code *local_80;
  long lStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  
  if (*(long *)(param_1 + 0x1610) != 0) {
    return;
  }
  iVar2 = FUN_10030884c(*(undefined8 *)(param_1 + 0x1608));
  FUN_1003467f8();
  uVar4 = FUN_10034cec0();
  if ((uVar4 & 1) == 0) {
    FUN_1003467f8();
    iVar3 = FUN_10034ced0();
    if (iVar3 != 0) {
      FUN_1003467f8();
      uVar5 = FUN_10034cdf0();
      if ((int)uVar5 == 0) goto LAB_1001fa814;
    }
    uVar5 = 1;
  }
  else {
    uVar5 = 2;
  }
LAB_1001fa814:
  lVar6 = FUN_100220a38(uVar5,iVar2 == 1,0,&DAT_101873a48);
  *(long *)(param_1 + 0x1610) = lVar6;
  local_58 = DAT_101d23830;
  local_80 = FUN_1001fa944;
  local_68 = 0;
  uStack_60 = 0;
  local_70 = 0;
  lStack_78 = param_1;
  FUN_10001554c(lVar6 + 8,&local_80);
  local_58 = DAT_101d23834;
  local_80 = FUN_1001fa970;
  local_68 = 0;
  uStack_60 = 0;
  local_70 = 0;
  lStack_78 = param_1;
  FUN_10001554c(*(long *)(param_1 + 0x1610) + 8,&local_80);
  local_58 = DAT_101d91894;
  local_80 = FUN_1001fa99c;
  local_68 = 0;
  uStack_60 = 0;
  local_70 = 0;
  lStack_78 = param_1;
  FUN_10001554c(*(long *)(param_1 + 0x1610) + 8,&local_80);
  uVar5 = *(undefined8 *)(param_1 + 0x1610);
  iVar2 = FUN_1001fabbc(param_1);
  lVar6 = param_1 + 0x1e0 + (long)iVar2 * 0xa1;
  if (*(char *)(param_1 + 0x1640) != '\0') {
    lVar6 = param_1 + 0xbf8 + (long)iVar2 * 0xa1;
  }
  uVar1 = *(undefined1 *)(lVar6 + 5);
  iVar2 = FUN_1001fabbc(param_1);
  lVar6 = param_1 + 0x1e0 + (long)iVar2 * 0xa1;
  if (*(char *)(param_1 + 0x1640) != '\0') {
    lVar6 = param_1 + 0xbf8 + (long)iVar2 * 0xa1;
  }
  FUN_100220b58(uVar5,uVar1,*(undefined1 *)(lVar6 + 6));
  return;
}




void FUN_1001fa944(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = FUN_100644b2c(param_4);
  FUN_100308788(*(undefined8 *)(param_1 + 0x1608),uVar1);
  return;
}




void FUN_1001fa970(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x1608);
  uVar1 = FUN_100644b2c(param_4);
  FUN_100308790(uVar2,uVar1);
  return;
}




void FUN_1001fa99c(long param_1)

{
  *(undefined8 *)(param_1 + 0x1610) = 0;
  return;
}




void FUN_1001fa9a4(long param_1,undefined8 param_2)

{
  FUN_100308780(*(undefined8 *)(param_1 + 0x1608));
  FUN_1002bc820(*(undefined8 *)(param_1 + 8),param_2);
  return;
}




void FUN_1001fa9d4(long param_1,undefined8 param_2)

{
  FUN_100308780(*(undefined8 *)(param_1 + 0x15f8));
  FUN_1002bc820(*(undefined8 *)(param_1 + -8),param_2);
  return;
}




void FUN_1001faa04(void)

{
  return;
}




void FUN_1001faa08(void)

{
  return;
}




void FUN_1001faa0c(long param_1)

{
  string *this;
  int iVar1;
  long lVar2;
  string *psVar3;
  void *local_50 [2];
  char local_39;
  void *local_38 [2];
  char local_21;
  
  iVar1 = FUN_10015d3f8();
  if (iVar1 != 0) {
    lVar2 = FUN_1004f0338();
    std::operator+("#",(string *)(lVar2 + 0xa0));
    std::string::string((string *)local_38,(string *)local_50);
    if (local_39 < '\0') {
      operator_delete(local_50[0]);
    }
    std::string::append((char *)local_38);
    this = (string *)(param_1 + 0x1618);
    std::string::operator=(this,(string *)local_38);
    psVar3 = this;
    if (*(char *)(param_1 + 0x162f) < '\0') {
      psVar3 = *(string **)this;
    }
    FUN_10010a548(psVar3);
    FUN_1001e8dbc(*(undefined8 *)(param_1 + 0x1630),this);
    FUN_1001e8dbc(*(undefined8 *)(param_1 + 0x1638),this);
    if (local_21 < '\0') {
      operator_delete(local_38[0]);
    }
  }
  return;
}




void FUN_1001faaf8(long param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  
  puVar4 = (undefined8 *)FUN_10034bdb4();
  plVar7 = (long *)*puVar4;
  if (*plVar7 != 0) {
    do {
      iVar1 = FUN_1001311c4();
      if ((iVar1 == 0) || (*(char *)((undefined8 *)*plVar7 + 1) != '\0')) {
        uVar2 = (**(code **)(**(long **)(param_1 + 0x1608) + 0x48))
                          (*(long **)(param_1 + 0x1608),*(undefined8 *)*plVar7);
        uVar3 = FUN_1004eef10();
        uVar2 = (uint)(*(char *)(param_1 + 0x1648) != '\0') | uVar3 ^ 1 | uVar2;
        lVar5 = FUN_1003467f8();
        if (lVar5 != 0) {
          FUN_1003467f8();
          uVar3 = FUN_10034cde8();
          uVar2 = uVar3 | uVar2;
        }
        uVar6 = FUN_100345b94();
        uVar6 = FUN_1003b1948(uVar6,*(undefined8 *)*plVar7);
        FUN_1002bc744(*(undefined8 *)(param_1 + 8),uVar6,uVar2);
      }
      plVar7 = plVar7 + 1;
    } while (*plVar7 != 0);
  }
  FUN_1002bce34(*(undefined8 *)(param_1 + 8));
  return;
}




long FUN_1001fabbc(long param_1)

{
  char *pcVar1;
  ulong uVar2;
  long lVar3;
  char *pcVar4;
  
  lVar3 = 0;
  pcVar4 = (char *)(param_1 + 0xbf8);
  while( true ) {
    pcVar1 = pcVar4 + -0xa18;
    if (*(char *)(param_1 + 0x1640) != '\0') {
      pcVar1 = pcVar4;
    }
    if ((*pcVar1 != '\0') &&
       (uVar2 = FUN_10034ea2c(*(undefined2 *)(pcVar1 + 0xb)), (uVar2 & 1) != 0)) break;
    lVar3 = lVar3 + 1;
    pcVar4 = pcVar4 + 0xa1;
    if (lVar3 == 10) {
      return 0xffffffff;
    }
  }
  return lVar3;
}




undefined8 FUN_1001fac28(long param_1)

{
  int iVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  
  plVar2 = (long *)FUN_10034bdb4();
  plVar2 = (long *)*plVar2;
  lVar5 = *plVar2;
  do {
    if (lVar5 == 0) {
      return 0xffff;
    }
    iVar1 = FUN_1001311c4();
    if ((iVar1 == 0) || (*(char *)((undefined8 *)*plVar2 + 1) != '\0')) {
      uVar3 = (**(code **)(**(long **)(param_1 + 0x1608) + 0x48))
                        (*(long **)(param_1 + 0x1608),*(undefined8 *)*plVar2);
      iVar1 = FUN_1004eef10();
      if ((iVar1 == 0) || ((uVar3 & 1) != 0)) {
        uVar4 = FUN_100345b94();
        uVar4 = FUN_1003b1948(uVar4,*(undefined8 *)*plVar2);
        return uVar4;
      }
    }
    plVar2 = plVar2 + 1;
    lVar5 = *plVar2;
  } while( true );
}




undefined8 FUN_1001facc4(long param_1,uint param_2)

{
  char *pcVar1;
  byte bVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  
  lVar4 = FUN_1003467f8();
  if (lVar4 != 0) {
    FUN_1003467f8();
    uVar5 = FUN_10034cfb0();
    if ((uVar5 & 1) != 0) {
      return 0;
    }
  }
  lVar4 = 0;
  while( true ) {
    pcVar1 = (char *)(param_1 + lVar4 + 0x1e0);
    if (*(char *)(param_1 + 0x1640) != '\0') {
      pcVar1 = (char *)(param_1 + lVar4 + 0xbf8);
    }
    if ((((*pcVar1 != '\0') &&
         (bVar2 = pcVar1[8], uVar3 = FUN_10030884c(*(undefined8 *)(param_1 + 0x1608)),
         bVar2 == uVar3)) && (pcVar1[3] != '\0')) && (*(ushort *)(pcVar1 + 9) == param_2)) break;
    lVar4 = lVar4 + 0xa1;
    if (lVar4 == 0x64a) {
      return 0;
    }
  }
  return 1;
}




void FUN_1001fad74(uint *param_1,undefined8 *param_2)

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
    FUN_1001fadf8(param_1,uVar3);
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




void thunk_FUN_1001f97d8(long param_1,void *param_2)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  
  *(undefined1 *)(param_1 + 0x1640) = 0;
  _memcpy((void *)(param_1 + 0x1d8),param_2,0xa18);
  uVar2 = FUN_1001f9890(param_1);
  if ((uVar2 & 1) == 0) {
    *(undefined1 *)(param_1 + 0x1648) = 1;
  }
  if (*(char *)(param_1 + 0x164a) == '\0') {
    if (*(char *)(param_1 + 0x1648) == '\0') {
      FUN_1002bcb18(*(undefined8 *)(param_1 + 8));
    }
    else {
      FUN_1002bca24();
    }
    lVar3 = FUN_1003467f8();
    if (lVar3 != 0) {
      FUN_1003467f8();
      uVar2 = FUN_10034ce60();
      if ((uVar2 & 1) == 0) {
        FUN_1003467f8();
        iVar1 = FUN_10034cde8();
        if (iVar1 == 0) goto LAB_1001f985c;
      }
      FUN_1002bcba0(*(undefined8 *)(param_1 + 8));
    }
  }
LAB_1001f985c:
  FUN_1001f9a18(param_1);
  FUN_1001f9a9c(param_1);
  FUN_1001f9ce4(param_1);
  FUN_1002bcc00(*(undefined4 *)(param_1 + 0x1d8),*(undefined8 *)(param_1 + 8));
  FUN_1001f9e34(param_1);
  return;
}




void FUN_1001fadf8(uint *param_1,uint param_2)

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




void FUN_1001fae74(uint *param_1,undefined8 *param_2)

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
    FUN_1001faef8(param_1,uVar3);
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




void thunk_FUN_1001f9f00(undefined8 *param_1,void *param_2)

{
  char *pcVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  uint uStack_54;
  
  pcVar1 = (char *)(param_1 + 0x2c8);
  *pcVar1 = '\x01';
  iVar4 = FUN_1001fabbc();
  lVar6 = (long)iVar4 * 0xa1 + 0x1e0;
  if (*pcVar1 != '\0') {
    lVar6 = (long)iVar4 * 0xa1 + 0xbf8;
  }
  sVar2 = *(short *)((long)param_1 + lVar6 + 9);
  _memcpy(param_1 + 0x17e,param_2,0xa18);
  iVar4 = FUN_1001fabbc(param_1);
  lVar6 = (long)iVar4 * 0xa1 + 0x1e0;
  if (*pcVar1 != '\0') {
    lVar6 = (long)iVar4 * 0xa1 + 0xbf8;
  }
  sVar3 = *(short *)((long)param_1 + lVar6 + 9);
  uVar5 = FUN_1001f9890(param_1);
  if ((uVar5 & 1) == 0) {
    *(undefined1 *)(param_1 + 0x2c9) = 1;
  }
  if (*(char *)((long)param_1 + 0x164a) != '\0') goto LAB_1001fa038;
  if (*(char *)(param_1 + 0x2c9) == '\0') {
    FUN_1002bcb18(param_1[1]);
  }
  else {
    FUN_1002bca24();
  }
  lVar6 = FUN_1003467f8();
  if (lVar6 != 0) {
    FUN_1003467f8();
    uVar5 = FUN_10034ce60();
    if ((uVar5 & 1) == 0) {
      FUN_1003467f8();
      iVar4 = FUN_10034cde8();
      if (iVar4 == 0) goto LAB_1001f9fe8;
    }
    FUN_1002bcba0(param_1[1]);
  }
LAB_1001f9fe8:
  uVar9 = param_1[1];
  lVar6 = FUN_1003467f8();
  if (lVar6 == 0) {
    uVar8 = 0;
  }
  else {
    FUN_1003467f8();
    uVar5 = FUN_10034ce00();
    if ((uVar5 & 1) == 0) {
      FUN_1003467f8();
      uVar8 = FUN_10034ce60();
    }
    else {
      uVar8 = 1;
    }
  }
  FUN_1002bcba8(uVar9,uVar8);
  if (*(char *)(param_1 + 0x2c9) == '\0') {
    FUN_1001fbddc(param_1 + 3,1);
  }
LAB_1001fa038:
  if (sVar2 != sVar3) {
    FUN_1002bce40(param_1[1]);
    uVar9 = param_1[1];
    iVar4 = FUN_1001fabbc(param_1);
    lVar6 = (long)iVar4 * 0xa1 + 0x1e0;
    if (*pcVar1 != '\0') {
      lVar6 = (long)iVar4 * 0xa1 + 0xbf8;
    }
    FUN_1002bc7e0(uVar9,*(undefined2 *)((long)param_1 + lVar6 + 9));
    iVar4 = FUN_1001fabbc(param_1);
    lVar6 = (long)iVar4 * 0xa1 + 0x1e0;
    if (*pcVar1 != '\0') {
      lVar6 = (long)iVar4 * 0xa1 + 0xbf8;
    }
    (**(code **)*param_1)(param_1,*(undefined2 *)((long)param_1 + lVar6 + 9));
    iVar4 = FUN_1001fabbc(param_1);
    lVar6 = (long)iVar4 * 0xa1 + 0x1e0;
    if (*pcVar1 != '\0') {
      lVar6 = (long)iVar4 * 0xa1 + 0xbf8;
    }
    uStack_54 = (uint)*(ushort *)((long)param_1 + lVar6 + 9);
    puVar7 = (undefined8 *)FUN_10034be60(&uStack_54);
    if (puVar7 != (undefined8 *)0x0) {
      FUN_1001fbb58(param_1 + 3,*puVar7);
    }
  }
  FUN_1001f9a9c(param_1);
  FUN_1001f9ce4(param_1);
  FUN_1002bcc00(*(undefined4 *)(param_1 + 0x17e),param_1[1]);
  FUN_1001f9e34(param_1);
  return;
}




void FUN_1001faef8(uint *param_1,uint param_2)

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




void FUN_1001faf74(uint *param_1,undefined8 *param_2)

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
    FUN_1001faff8(param_1,uVar3);
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




void thunk_FUN_1001fa130(long param_1,uint *param_2)

{
  undefined8 uVar1;
  byte bVar2;
  
  if (*(uint *)((long)param_2 + 0x4d) < *param_2) {
    bVar2 = 0;
    uVar1 = *(undefined8 *)(param_1 + 8);
  }
  else {
    if (param_2[2] < param_2[1]) {
      uVar1 = *(undefined8 *)(param_1 + 8);
    }
    else {
      uVar1 = *(undefined8 *)(param_1 + 8);
      if ((char)param_2[0x13] == '\0') {
        bVar2 = 0;
        goto LAB_1001fa190;
      }
    }
    bVar2 = *(byte *)((long)param_2 + 0x51) ^ 1;
  }
LAB_1001fa190:
  FUN_1002bcc08(uVar1,*param_2,bVar2);
  FUN_1002bcc24(*(undefined8 *)(param_1 + 8),*(undefined4 *)((long)param_2 + 0x4d));
  return;
}




void FUN_1001faff8(uint *param_1,uint param_2)

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




void FUN_1001fb074(long param_1)

{
  undefined1 auStack_40 [32];
  
  FUN_100644aec(auStack_40,DAT_101d23654,0);
  FUN_100644c34(*(undefined8 *)(param_1 + 8),auStack_40,1);
  return;
}




void FUN_1001fb0c0(uint *param_1,undefined8 *param_2,undefined8 *param_3)

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




undefined8 * FUN_1001fb130(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR____cxa_pure_virtual_10146e880;
  operator_new(0x4be0);
  lVar1 = thunk_FUN_1002b8c10();
  *(undefined8 **)(lVar1 + 0x240) = param_1;
  *param_1 = &PTR_FUN_10146e838;
  param_1[1] = lVar1;
  *(undefined2 *)((long)param_1 + 0x22) = 0;
  *(undefined1 *)((long)param_1 + 0x24) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  FUN_1002b9398();
  return param_1;
}




undefined8 * thunk_FUN_1001fb130(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR____cxa_pure_virtual_10146e880;
  operator_new(0x4be0);
  lVar1 = thunk_FUN_1002b8c10();
  *(undefined8 **)(lVar1 + 0x240) = param_1;
  *param_1 = &PTR_FUN_10146e838;
  param_1[1] = lVar1;
  *(undefined2 *)((long)param_1 + 0x22) = 0;
  *(undefined1 *)((long)param_1 + 0x24) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  FUN_1002b9398();
  return param_1;
}




undefined8 * FUN_1001fb190(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10146e838;
  if ((long *)param_1[2] != (long *)0x0) {
    (**(code **)(*(long *)param_1[2] + 0x58))();
    param_1[2] = 0;
  }
  *param_1 = &PTR____cxa_pure_virtual_10146e880;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return param_1;
}




undefined8 * thunk_FUN_1001fb190(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10146e838;
  if ((long *)param_1[2] != (long *)0x0) {
    (**(code **)(*(long *)param_1[2] + 0x58))();
    param_1[2] = 0;
  }
  *param_1 = &PTR____cxa_pure_virtual_10146e880;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return param_1;
}




void FUN_1001fb1fc(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1001fb190();
  operator_delete(pvVar1);
  return;
}




void FUN_1001fb210(long param_1)

{
  FUN_1002b952c(*(undefined8 *)(param_1 + 8));
  return;
}




void FUN_1001fb218(long param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x24) = param_2;
  FUN_1002b98d4(*(undefined8 *)(param_1 + 8));
  return;
}




void FUN_1001fb224(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [8];
  void *local_48;
  undefined1 auStack_40 [8];
  void *local_38;
  
  if (((DAT_101e43ab8 & 1) == 0) && (iVar1 = ___cxa_guard_acquire(&DAT_101e43ab8), iVar1 != 0)) {
    uVar2 = FUN_1004e0150("MENU_DRAFT_LOBBY_LABEL_ENEMY_NUM",0);
    thunk_FUN_1004e439c(&DAT_101e43aa8,uVar2);
    ___cxa_atexit(FUN_100046198,&DAT_101e43aa8,0x100000000);
    ___cxa_guard_release(&DAT_101e43ab8);
  }
  if (((DAT_101e43ad0 & 1) == 0) && (iVar1 = ___cxa_guard_acquire(&DAT_101e43ad0), iVar1 != 0)) {
    FUN_1004e313c(&DAT_101e43ac0);
    ___cxa_atexit(FUN_100046198,&DAT_101e43ac0,0x100000000);
    ___cxa_guard_release(&DAT_101e43ad0);
  }
  FUN_1004e38ac(&DAT_101e43ac0,"%d");
  thunk_FUN_1004e439c(auStack_40,&DAT_101e43aa8);
  FUN_1004e3120(auStack_50,"[NUM]");
  FUN_1004e3bc4(auStack_40,0,auStack_50,&DAT_101e43ac0);
  if (local_48 != (void *)0x0) {
    operator_delete__(local_48);
  }
  FUN_1002b99d8(*(undefined8 *)(param_1 + 8),auStack_40);
  if (local_38 != (void *)0x0) {
    operator_delete__(local_38);
  }
  return;
}




undefined8 FUN_1001fb3a0(long param_1,int param_2,int param_3)

{
  int iVar1;
  
  if (param_2 != 0) {
    iVar1 = *(int *)(*(long *)(param_1 + 8) + 0x4bc0);
    if (iVar1 == 1 || iVar1 == 3) {
      return 0;
    }
    if (iVar1 != 2) {
      if (param_3 == 0) {
        FUN_1002ba24c();
      }
      else {
        FUN_1002ba20c();
      }
      return 1;
    }
  }
  FUN_1002ba1b4();
  return 0;
}




void FUN_1001fb3f4(long param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1002ba1ec();
    return;
  }
  FUN_1002ba1b4(*(undefined8 *)(param_1 + 8));
  return;
}




void FUN_1001fb404(long param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1002ba22c();
    return;
  }
  FUN_1002ba1b4(*(undefined8 *)(param_1 + 8));
  return;
}




void FUN_1001fb414(long param_1,long param_2,uint param_3,undefined8 param_4)

{
  undefined1 uVar1;
  int iVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined1 *)(param_2 + 1);
  *(undefined1 *)(param_1 + 0x20) = uVar1;
  *(undefined1 *)(param_1 + 0x21) = uVar1;
  iVar2 = FUN_100126b8c();
  if (iVar2 != 0) {
    if ((uint)param_4 == 0) {
      if (*(long *)(param_1 + 0x10) != 0) {
        FUN_1002b9da0(*(undefined8 *)(param_1 + 8));
        if (*(long **)(param_1 + 0x10) != (long *)0x0) {
          (**(code **)(**(long **)(param_1 + 0x10) + 0x58))();
        }
        *(undefined8 *)(param_1 + 0x10) = 0;
      }
    }
    else if ((((*(long *)(param_1 + 0x10) == 0) && (*(long *)(param_1 + 0x18) != 0)) &&
             (iVar2 = FUN_100129b4c(), iVar2 != 0)) && (iVar2 = FUN_100129c44(), iVar2 != 0)) {
      operator_new(0x38);
      uVar3 = thunk_FUN_100218f18();
      *(undefined8 *)(param_1 + 0x10) = uVar3;
      FUN_100219060(uVar3,1);
      FUN_1002190e0(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18));
      FUN_1002b9d70(*(undefined8 *)(param_1 + 8),*(undefined8 *)(*(long *)(param_1 + 0x10) + 8));
    }
  }
  FUN_1001fb520(param_1,param_2,*(byte *)(param_2 + 8) == param_3);
  FUN_1002b9a24(*(undefined8 *)(param_1 + 8),param_4,*(byte *)(param_2 + 8) == param_3,
                *(char *)(param_2 + 7) != '\0');
  FUN_1002b9938(*(undefined8 *)(param_1 + 8),(uint)param_4 & (uint)(*(char *)(param_2 + 3) == '\0'))
  ;
  return;
}




void FUN_1001fb520(long param_1,long param_2,ulong param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  uint uVar4;
  void *local_58;
  void *local_50;
  char local_41;
  undefined1 auStack_40 [8];
  void *local_38;
  
  *(bool *)(param_1 + 0x22) = *(char *)(param_2 + 3) != '\0';
  FUN_1004e313c(auStack_40);
  lVar2 = FUN_1003467f8();
  if (lVar2 == 0) {
    uVar4 = 0;
    uVar3 = 0;
  }
  else {
    FUN_1003467f8();
    uVar3 = FUN_10034cdd0();
    uVar4 = (uint)uVar3 ^ 1;
  }
  if ((((param_3 & 1) != 0) || ((uVar4 & 1) != 0)) || (uVar3 = FUN_10034cb58(), (int)uVar3 != 0)) {
    FUN_1001fb784(&local_58,uVar3,param_2 + 0x11,param_2 + 0x51,param_2 + 0x59);
    FUN_1000153b4(auStack_40,&local_58);
    if (local_50 != (void *)0x0) {
      operator_delete__(local_50);
    }
    FUN_1002b99d8(*(undefined8 *)(param_1 + 8),auStack_40);
  }
  FUN_1002b9da8(*(undefined8 *)(param_1 + 8),*(undefined1 *)(param_2 + 5));
  FUN_1002ba0dc(*(undefined8 *)(param_1 + 8),*(undefined1 *)(param_2 + 6));
  if (*(char *)(param_1 + 0x24) != '\0') {
    FUN_1002ba0ac(*(undefined8 *)(param_1 + 8),*(undefined1 *)(param_1 + 0x22));
  }
  if ((((param_3 & 1) != 0) || (*(char *)(param_1 + 0x22) != '\0')) ||
     (iVar1 = FUN_10034cb58(), iVar1 != 0)) {
    if (*(short *)(param_2 + 9) == -1) {
      FUN_1002b9ca8(*(undefined8 *)(param_1 + 8));
    }
    else {
      FUN_1001fb8ec(&local_58);
      FUN_1002b9b8c(*(undefined8 *)(param_1 + 8),&local_58,*(undefined1 *)(param_1 + 0x22));
      if (local_41 < '\0') {
        operator_delete(local_58);
      }
    }
  }
  if (local_38 != (void *)0x0) {
    operator_delete__(local_38);
  }
  return;
}




void FUN_1001fb66c(long param_1,long param_2,uint param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  
  *(undefined1 *)(param_1 + 0x20) = *(undefined1 *)(param_2 + 1);
  *(undefined1 *)(param_1 + 0x21) = *(undefined1 *)(param_2 + 0xa1);
  iVar1 = FUN_100126b8c();
  if (iVar1 != 0) {
    if ((int)param_4 == 0) {
      if (*(long *)(param_1 + 0x10) != 0) {
        FUN_1002b9da0(*(undefined8 *)(param_1 + 8));
        if (*(long **)(param_1 + 0x10) != (long *)0x0) {
          (**(code **)(**(long **)(param_1 + 0x10) + 0x58))();
        }
        *(undefined8 *)(param_1 + 0x10) = 0;
      }
    }
    else if ((((*(long *)(param_1 + 0x10) == 0) && (*(long *)(param_1 + 0x18) != 0)) &&
             (iVar1 = FUN_100129b4c(), iVar1 != 0)) && (iVar1 = FUN_100129c44(), iVar1 != 0)) {
      operator_new(0x38);
      uVar2 = thunk_FUN_100218f18();
      *(undefined8 *)(param_1 + 0x10) = uVar2;
      FUN_100219060(uVar2,1);
      FUN_1002190e0(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18));
      FUN_1002b9d70(*(undefined8 *)(param_1 + 8),*(undefined8 *)(*(long *)(param_1 + 0x10) + 8));
    }
  }
  FUN_1001fb520(param_1,param_2,*(byte *)(param_2 + 8) == param_3);
  FUN_1002b9a24(*(undefined8 *)(param_1 + 8),param_4,*(byte *)(param_2 + 8) == param_3,
                *(char *)(param_2 + 7) != '\0');
  FUN_1002b9cb0(*(undefined8 *)(param_1 + 8),*(undefined1 *)(param_2 + 0xa2));
  FUN_1002b9938(*(undefined8 *)(param_1 + 8),*(char *)(param_2 + 0xa3) != '\0');
  return;
}




void FUN_1001fb784(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  char *pcVar4;
  undefined1 auStack_70 [8];
  void *local_68;
  undefined1 auStack_60 [8];
  void *local_58;
  undefined1 auStack_50 [8];
  void *local_48;
  undefined1 auStack_40 [8];
  void *local_38;
  
  FUN_1004e313c(param_1);
  FUN_1004e313c(auStack_40);
  FUN_1004e313c(auStack_50);
  FUN_1004e313c(auStack_60);
  FUN_1004e3148(auStack_40,param_3);
  FUN_1004e3148(auStack_50,param_4);
  FUN_1004e3148(auStack_60,param_5);
  uVar3 = FUN_1004e3624(auStack_50);
  if ((uVar3 & 1) == 0) {
    iVar1 = FUN_1004e3634(auStack_50);
    iVar2 = FUN_1004e3634(auStack_40);
    thunk_FUN_100015420(param_1,iVar1 + iVar2 + 1);
    FUN_1000153b4(param_1,auStack_50);
    pcVar4 = "-";
  }
  else {
    uVar3 = FUN_1004e3624(auStack_60);
    if ((uVar3 & 1) != 0) {
      FUN_1000153b4(param_1,auStack_40);
      goto LAB_1001fb8b4;
    }
    iVar1 = FUN_1004e3634(auStack_60);
    iVar2 = FUN_1004e3634(auStack_40);
    thunk_FUN_100015420(param_1,iVar1 + iVar2 + 1);
    FUN_1000153b4(param_1,auStack_60);
    pcVar4 = "_";
  }
  FUN_1004e3120(auStack_70,pcVar4);
  FUN_1004e372c(param_1,auStack_70);
  if (local_68 != (void *)0x0) {
    operator_delete__(local_68);
  }
  FUN_1004e372c(param_1,auStack_40);
LAB_1001fb8b4:
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




void FUN_1001fb8ec(undefined8 param_1,undefined8 param_2,int param_3)

{
  int local_74;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_101444218;
  uStack_48 = 0;
  local_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_68 = 0;
  local_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  local_74 = param_3;
  if (param_3 != 0xffff) {
    FUN_10034be60(&local_74);
    FUN_1004d2698(&local_70,"portrait_%s");
  }
  FUN_10001549c(param_1,&local_70);
  if (*(long *)PTR____stack_chk_guard_101444218 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_1001fb98c(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x18) = param_2;
  if (*(long *)(param_1 + 0x10) != 0) {
    FUN_1002190e0();
    return;
  }
  return;
}




void FUN_1001fb9a0(long param_1,undefined8 param_2)

{
  FUN_100644b24(param_2,*(undefined1 *)(param_1 + 0x21));
  FUN_100644b14(param_2);
  return;
}




void FUN_1001fb9cc(long param_1,undefined8 param_2)

{
  FUN_100644b24(param_2,*(undefined1 *)(param_1 + 0x21));
  FUN_100644b14(param_2);
  return;
}




void FUN_1001fb9f8(long param_1,undefined8 param_2)

{
  FUN_100644b24(param_2,*(undefined1 *)(param_1 + 0x21));
  FUN_100644b14(param_2);
  return;
}




void FUN_1001fba24(long param_1,undefined8 param_2)

{
  FUN_100644b24(param_2,*(undefined1 *)(param_1 + 0x21));
  FUN_100644b14(param_2);
  return;
}




void FUN_1001fba50(long param_1,undefined8 param_2)

{
  byte bVar1;
  
  bVar1 = FUN_100644b2c(param_2);
  *(byte *)(param_1 + 0x23) = bVar1 & 1;
  FUN_1002b98f0(*(undefined8 *)(param_1 + 8));
  FUN_100644b24(param_2,*(undefined1 *)(param_1 + 0x21));
  FUN_100644b14(param_2);
  return;
}




undefined8 * FUN_1001fba98(undefined8 *param_1,undefined8 param_2)

{
  long lVar1;
  
  *param_1 = &PTR____cxa_pure_virtual_10146b328;
  operator_new(0xb88);
  lVar1 = thunk_FUN_1002ba9d8();
  *(undefined8 **)(lVar1 + 0x158) = param_1;
  *param_1 = &PTR_FUN_10146e8c8;
  param_1[1] = lVar1;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = param_2;
  param_1[5] = 0;
  return param_1;
}




void FUN_1001fbaec(long param_1,undefined8 param_2)

{
  FUN_1001312fc(*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x0001001fbb20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)**(undefined8 **)(param_1 + 0x20))(*(undefined8 **)(param_1 + 0x20),param_2);
  return;
}




void FUN_1001fbb24(long param_1)

{
  FUN_1002bb0c4(*(undefined8 *)(param_1 + 8),0);
                    /* WARNING: Could not recover jumptable at 0x0001001fbb54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x20) + 8))();
  return;
}




void FUN_1001fbb58(long param_1,long param_2)

{
  if (param_2 != 0) {
    *(long *)(param_1 + 0x28) = param_2;
    FUN_1001fbb88();
    FUN_1001fbd14(param_1);
    return;
  }
  return;
}




void FUN_1001fbb88(long param_1)

{
  int iVar1;
  uint uVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 local_a8;
  undefined1 local_a0;
  undefined1 auStack_98 [8];
  void *local_90;
  void *local_88 [2];
  char local_71;
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_101444218;
  if (*(long *)(param_1 + 0x18) != 0) {
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  FUN_1002bac94(*(undefined8 *)(param_1 + 8));
  plVar3 = (long *)FUN_10032bb84();
  plVar3 = (long *)*plVar3;
  puVar6 = (undefined8 *)*plVar3;
  while (puVar6 != (undefined8 *)0x0) {
    plVar3 = plVar3 + 1;
    iVar1 = _strcmp((char *)puVar6[2],*(char **)(param_1 + 0x28));
    if (iVar1 == 0) {
      iVar1 = FUN_1004eef10();
      if (iVar1 == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = FUN_10015d3ec();
        FUN_10001549c(local_88,*puVar6);
        uVar4 = FUN_100166510(uVar4,local_88);
        if (local_71 < '\0') {
          operator_delete(local_88[0]);
        }
      }
      uVar5 = FUN_1001fbde4();
      if (((int)uVar5 != 0) &&
         ((uVar2 = FUN_1001fbe40(uVar5,puVar6,uVar4), (uVar2 & 1) != 0 ||
          (*(char *)((long)puVar6 + 0x34) == '\0')))) {
        FUN_10032be60(auStack_98,puVar6,1);
        FUN_1004d2698(local_88,"build://Splash_%s.png");
        FUN_1002baefc(*(undefined8 *)(param_1 + 8),*puVar6,local_88,auStack_98,uVar2 ^ 1);
        local_a8 = *puVar6;
        local_a0 = (undefined1)uVar2;
        FUN_1001fbef0((undefined4 *)(param_1 + 0x10),&local_a8);
        if (local_90 != (void *)0x0) {
          operator_delete__(local_90);
        }
      }
    }
    puVar6 = (undefined8 *)*plVar3;
  }
  (**(code **)(**(long **)(param_1 + 8) + 0x90))();
  if (*(long *)PTR____stack_chk_guard_101444218 == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_1001fbd14(long param_1)

{
  int iVar1;
  char ***pppcVar2;
  ulong uVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  char **local_48;
  long local_40;
  char local_31;
  
  FUN_1001313dc(&local_48,*(undefined8 *)(param_1 + 0x28));
  uVar4 = *(uint *)(param_1 + 0x10);
  if (uVar4 == 0) {
    uVar3 = 0;
  }
  else {
    lVar6 = 0;
    uVar5 = 0;
    uVar3 = 0;
    do {
      if (*(char *)(*(long *)(param_1 + 0x18) + lVar6 + 8) != '\0') {
        uVar3 = uVar5;
        if (local_31 < '\0') {
          pppcVar2 = (char ***)local_48;
          if (local_40 != 0) goto LAB_1001fbd7c;
        }
        else if (local_31 != '\0') {
          pppcVar2 = &local_48;
LAB_1001fbd7c:
          iVar1 = _strcmp((char *)pppcVar2,*(char **)(*(long *)(param_1 + 0x18) + lVar6));
          if (iVar1 == 0) break;
          uVar4 = *(uint *)(param_1 + 0x10);
        }
      }
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 0x10;
    } while (uVar5 < uVar4);
  }
  FUN_1002bb270(*(undefined8 *)(param_1 + 8),uVar3);
  if (local_31 < '\0') {
    operator_delete(local_48);
  }
  return;
}




void FUN_1001fbddc(long param_1)

{
  FUN_1002bb0c4(*(undefined8 *)(param_1 + 8));
  return;
}




ulong FUN_1001fbde4(undefined8 param_1,long param_2,long param_3)

{
  int iVar1;
  ulong uVar2;
  
  iVar1 = FUN_1001311c4();
  if ((iVar1 == 0) || (*(char *)(param_2 + 8) != '\0')) {
    if (((param_3 == 0) || (iVar1 = FUN_10032c944(param_3), iVar1 == 0)) ||
       (uVar2 = FUN_10032dc1c(param_3), (int)uVar2 != 0)) {
      uVar2 = (ulong)(param_3 != 0);
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}




bool FUN_1001fbe40(undefined8 param_1,undefined8 *param_2,long param_3)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  void *local_48 [2];
  char local_31;
  
  uVar2 = FUN_100131560();
  if ((uVar2 & 1) == 0) {
    uVar3 = FUN_10015d3ec();
    FUN_10001549c(local_48,*param_2);
    uVar2 = FUN_100166518(uVar3,local_48);
    if (local_31 < '\0') {
      operator_delete(local_48[0]);
    }
    if ((uVar2 & 1) == 0) {
      FUN_1003467f8();
      uVar2 = FUN_10034ce68();
      if (((((uVar2 & 1) != 0) || (*(char *)((long)param_2 + 0x34) != '\0')) || (param_3 == 0)) ||
         (iVar1 = FUN_10032c944(param_3), iVar1 != 0)) {
        return *(int *)(param_2 + 4) == 0;
      }
    }
  }
  return true;
}




void FUN_1001fbef0(uint *param_1,undefined8 *param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  
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
    FUN_1001fc02c(param_1,uVar3);
    uVar4 = *param_1;
  }
  *param_1 = uVar4 + 1;
  lVar1 = *(long *)(param_1 + 2) + (ulong)(uVar4 + 1) * 0x10;
  uVar5 = *param_2;
  *(undefined8 *)(lVar1 + -8) = param_2[1];
  *(undefined8 *)(lVar1 + -0x10) = uVar5;
  return;
}




undefined8 * FUN_1001fbf70(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10146e8c8;
  if ((void *)param_1[3] != (void *)0x0) {
    operator_delete__((void *)param_1[3]);
    param_1[2] = 0;
    param_1[3] = 0;
  }
  *param_1 = &PTR____cxa_pure_virtual_10146b328;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return param_1;
}




void FUN_1001fbfd0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10146e8c8;
  if ((void *)param_1[3] != (void *)0x0) {
    operator_delete__((void *)param_1[3]);
    param_1[2] = 0;
    param_1[3] = 0;
  }
  *param_1 = &PTR____cxa_pure_virtual_10146b328;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  operator_delete(param_1);
  return;
}




void FUN_1001fc02c(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 << 4);
    puVar2 = *(undefined8 **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar3 = (ulong)*param_1 << 4;
      puVar4 = puVar1;
      puVar5 = puVar2;
      do {
        uVar6 = *puVar5;
        puVar4[1] = puVar5[1];
        *puVar4 = uVar6;
        lVar3 = lVar3 + -0x10;
        puVar4 = puVar4 + 2;
        puVar5 = puVar5 + 2;
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




void FUN_1001fc0a8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_10015d3ec();
  FUN_100165174(uVar1,param_2,param_3);
  FUN_100102a8c();
  return;
}




void FUN_1001fc0d8(void)

{
  FUN_1001db0bc("https://my.superevilmegacorp.net/passwordResetRequest",0);
  return;
}




void FUN_1001fc0e8(long param_1,long param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [32];
  
  if ((*(int *)(param_2 + 0x28) == 0) && (uVar1 = FUN_10014e20c(), (uVar1 & 1) == 0)) {
    uVar2 = FUN_100644a94("UI::EVENT_USER_LOGGED_IN_OR_SIGNED_UP");
    FUN_100644aec(auStack_40,uVar2,param_1);
    FUN_100644c34(*(undefined8 *)(param_1 + 8),auStack_40,1);
  }
  FUN_1002bd728(*(undefined8 *)(param_1 + 8),0);
  return;
}




void FUN_1001fc154(long param_1)

{
  FUN_1001fc0e8(param_1 + -0x10);
  return;
}




undefined8 * FUN_1001fc15c(undefined8 *param_1)

{
  FUN_1004f0a9c(param_1 + 2);
  *param_1 = &PTR____cxa_pure_virtual_10146e960;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return param_1;
}




void FUN_1001fc1a8(undefined8 *param_1)

{
  FUN_1004f0a9c(param_1 + 2);
  *param_1 = &PTR____cxa_pure_virtual_10146e960;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  operator_delete(param_1);
  return;
}




void FUN_1001fc1f0(long param_1)

{
  FUN_1004f0a9c();
  *(undefined ***)(param_1 + -0x10) = &PTR____cxa_pure_virtual_10146e960;
  if (*(long **)(param_1 + -8) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + -8) + 8))();
  }
  *(undefined8 *)(param_1 + -8) = 0;
  return;
}




void FUN_1001fc234(long param_1)

{
  FUN_1004f0a9c();
  *(undefined8 *)(param_1 + -0x10) = &PTR____cxa_pure_virtual_10146e960;
  if (*(long **)(param_1 + -8) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + -8) + 8))();
  }
  operator_delete((undefined8 *)(param_1 + -0x10));
  return;
}




void FUN_1001fc278(long param_1)

{
  FUN_1002bdddc(*(undefined8 *)(param_1 + 8));
  return;
}




undefined8 * FUN_1001fc280(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  *param_1 = &PTR____cxa_pure_virtual_10146ea08;
  operator_new(0x45f8);
  lVar1 = thunk_FUN_1002be9e0();
  param_1[1] = lVar1;
  *(undefined8 **)(lVar1 + 0x640) = param_1;
  FUN_1001fc944(param_1 + 2);
  *param_1 = &PTR_FUN_10146e990;
  param_1[2] = &PTR_FUN_10146e9d0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  FUN_1002bf824(param_1[1],param_2,param_3);
  return param_1;
}




undefined8 * thunk_FUN_1001fc280(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  *param_1 = &PTR____cxa_pure_virtual_10146ea08;
  operator_new(0x45f8);
  lVar1 = thunk_FUN_1002be9e0();
  param_1[1] = lVar1;
  *(undefined8 **)(lVar1 + 0x640) = param_1;
  FUN_1001fc944(param_1 + 2);
  *param_1 = &PTR_FUN_10146e990;
  param_1[2] = &PTR_FUN_10146e9d0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  FUN_1002bf824(param_1[1],param_2,param_3);
  return param_1;
}




undefined8 *
FUN_1001fc310(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 local_50;
  undefined8 *puStack_48;
  undefined8 *local_40;
  code *pcStack_38;
  
  *param_1 = &PTR____cxa_pure_virtual_10146ea08;
  operator_new(0x45f8);
  lVar1 = thunk_FUN_1002be9e0();
  param_1[1] = lVar1;
  *(undefined8 **)(lVar1 + 0x640) = param_1;
  FUN_1001fc944(param_1 + 2);
  *param_1 = &PTR_FUN_10146e990;
  param_1[2] = &PTR_FUN_10146e9d0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  FUN_1002bf824(param_1[1],param_3,param_4);
  FUN_1001fc3d8(param_1,param_2);
  lVar1 = FUN_100341d58(param_2);
  if (lVar1 != 0) {
    local_50 = 0;
    pcStack_38 = FUN_1001fc850;
    puStack_48 = param_1;
    local_40 = param_1;
    FUN_1001fc7d0(lVar1,&local_50);
  }
  return param_1;
}




void FUN_1001fc3d8(long param_1,string *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  string *psVar3;
  undefined8 uVar4;
  char *pcVar5;
  undefined8 uVar6;
  string *psVar7;
  undefined1 auStack_b8 [128];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_101444218;
  std::string::operator=((string *)(param_1 + 0x18),param_2);
  lVar1 = FUN_100341d58((string *)(param_1 + 0x18));
  if ((lVar1 != 0) && ((*(ushort *)(lVar1 + 0xb0) >> 8 & 1) != 0)) {
    puVar2 = (undefined8 *)FUN_100343694(lVar1);
    psVar7 = (string *)(lVar1 + 0x78);
    std::string::operator=((string *)(param_1 + 0x30),psVar7);
    FUN_1002c03b8(*(undefined8 *)(param_1 + 8),*puVar2);
    FUN_1002c04cc(*(undefined8 *)(param_1 + 8),*(undefined4 *)(puVar2 + 3));
    psVar3 = psVar7;
    if (*(char *)(lVar1 + 0x8f) < '\0') {
      psVar3 = *(string **)psVar7;
    }
    FUN_10034bf64(psVar3);
    FUN_1004d2698(auStack_b8,PTR_s_build___HUDPartsHero__s_png_10184e0b8);
    if (*(int *)(puVar2 + 3) - 1U < 3) {
      pcVar5 = (&PTR_s_rare_10146ea28)[(int)(*(int *)(puVar2 + 3) - 1U)];
    }
    else {
      pcVar5 = "";
    }
    FUN_1002c07c0(*(undefined8 *)(param_1 + 8),auStack_b8,puVar2[2],pcVar5);
    if (*(char *)(lVar1 + 0x8f) < '\0') {
      psVar7 = *(string **)psVar7;
    }
    FUN_10034be08(psVar7);
    FUN_1004d2698(auStack_b8,"portrait_%s");
    FUN_1002c0774(*(undefined8 *)(param_1 + 8),auStack_b8);
    FUN_1002c03fc(*(undefined8 *)(param_1 + 8),
                  (ulong)(long)(short)(*(short *)(lVar1 + 0xb0) << 8) >> 8);
    FUN_1002c0624(*(undefined8 *)(param_1 + 8),(long)(short)*(long *)(lVar1 + 0xa8),
                  (*(long *)(lVar1 + 0xa8) << 0x20) >> 0x30);
    FUN_1002c02f8(*(undefined8 *)(param_1 + 8),*(ushort *)(lVar1 + 0xb0) >> 9 & 1);
    FUN_1002c030c(*(undefined8 *)(param_1 + 8),*(ushort *)(lVar1 + 0xb0) >> 0xb & 1);
    uVar6 = *(undefined8 *)(param_1 + 8);
    uVar4 = FUN_100342adc(lVar1);
    FUN_1002c032c(uVar6,uVar4);
  }
  if (*(long *)PTR____stack_chk_guard_101444218 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}




undefined8 *
thunk_FUN_1001fc310(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 *puStack_40;
  code *pcStack_38;
  
  *param_1 = &PTR____cxa_pure_virtual_10146ea08;
  operator_new(0x45f8);
  lVar1 = thunk_FUN_1002be9e0();
  param_1[1] = lVar1;
  *(undefined8 **)(lVar1 + 0x640) = param_1;
  FUN_1001fc944(param_1 + 2);
  *param_1 = &PTR_FUN_10146e990;
  param_1[2] = &PTR_FUN_10146e9d0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  FUN_1002bf824(param_1[1],param_3,param_4);
  FUN_1001fc3d8(param_1,param_2);
  lVar1 = FUN_100341d58(param_2);
  if (lVar1 != 0) {
    uStack_50 = 0;
    pcStack_38 = FUN_1001fc850;
    puStack_48 = param_1;
    puStack_40 = param_1;
    FUN_1001fc7d0(lVar1,&uStack_50);
  }
  return param_1;
}




undefined8 * FUN_1001fc594(undefined8 *param_1)

{
  undefined8 *puVar1;
  uint *puVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  
  *param_1 = &PTR_FUN_10146e990;
  param_1[2] = &PTR_FUN_10146e9d0;
  if ((char)*(byte *)((long)param_1 + 0x2f) < '\0') {
    uVar4 = param_1[4];
  }
  else {
    uVar4 = (ulong)*(byte *)((long)param_1 + 0x2f);
  }
  if (((uVar4 != 0) && (puVar2 = (uint *)FUN_100341d58(param_1 + 3), puVar2 != (uint *)0x0)) &&
     (*puVar2 != 0)) {
    lVar3 = *(long *)(puVar2 + 2);
    lVar5 = (ulong)*puVar2 << 5;
    do {
      puVar1 = (undefined8 *)(lVar3 + 8);
      lVar3 = lVar3 + 0x20;
      if ((undefined8 *)*puVar1 == param_1) {
        FUN_1001fc8d4();
        break;
      }
      lVar5 = lVar5 + -0x20;
    } while (lVar5 != 0);
  }
  if (*(char *)((long)param_1 + 0x47) < '\0') {
    operator_delete((void *)param_1[6]);
  }
  if (*(char *)((long)param_1 + 0x2f) < '\0') {
    operator_delete((void *)param_1[3]);
  }
  FUN_1001fc954(param_1 + 2);
  *param_1 = &PTR____cxa_pure_virtual_10146ea08;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return param_1;
}




undefined8 * thunk_FUN_1001fc594(undefined8 *param_1)

{
  undefined8 *puVar1;
  uint *puVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  
  *param_1 = &PTR_FUN_10146e990;
  param_1[2] = &PTR_FUN_10146e9d0;
  if ((char)*(byte *)((long)param_1 + 0x2f) < '\0') {
    uVar4 = param_1[4];
  }
  else {
    uVar4 = (ulong)*(byte *)((long)param_1 + 0x2f);
  }
  if (((uVar4 != 0) && (puVar2 = (uint *)FUN_100341d58(param_1 + 3), puVar2 != (uint *)0x0)) &&
     (*puVar2 != 0)) {
    lVar3 = *(long *)(puVar2 + 2);
    lVar5 = (ulong)*puVar2 << 5;
    do {
      puVar1 = (undefined8 *)(lVar3 + 8);
      lVar3 = lVar3 + 0x20;
      if ((undefined8 *)*puVar1 == param_1) {
        FUN_1001fc8d4();
        break;
      }
      lVar5 = lVar5 + -0x20;
    } while (lVar5 != 0);
  }
  if (*(char *)((long)param_1 + 0x47) < '\0') {
    operator_delete((void *)param_1[6]);
  }
  if (*(char *)((long)param_1 + 0x2f) < '\0') {
    operator_delete((void *)param_1[3]);
  }
  FUN_1001fc954(param_1 + 2);
  *param_1 = &PTR____cxa_pure_virtual_10146ea08;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return param_1;
}




void FUN_1001fc680(long param_1)

{
  FUN_1001fc594(param_1 + -0x10);
  return;
}




void FUN_1001fc688(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1001fc594();
  operator_delete(pvVar1);
  return;
}




void FUN_1001fc69c(long param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1001fc594(param_1 + -0x10);
  operator_delete(pvVar1);
  return;
}




void FUN_1001fc6b4(long param_1)

{
  FUN_1000ea998(0x44e10000,0x44960000,param_1 + 0x18,0,1);
  return;
}




void FUN_1001fc6d0(void)

{
  undefined8 uVar1;
  void *local_28 [2];
  char local_11;
  
  uVar1 = FUN_1000eaaec();
  FUN_10001549c(local_28,uVar1);
  FUN_1001ad598(local_28);
  if (local_11 < '\0') {
    operator_delete(local_28[0]);
  }
  return;
}




void FUN_1001fc710(long param_1)

{
  long *plVar1;
  uint *puVar2;
  long lVar3;
  long lVar4;
  
  if (*(char *)(param_1 + 0x2f) < '\0') {
    if (*(long *)(param_1 + 0x20) == 0) {
      return;
    }
  }
  else if (*(char *)(param_1 + 0x2f) == '\0') {
    return;
  }
  puVar2 = (uint *)FUN_100341d58(param_1 + 0x18);
  if ((puVar2 != (uint *)0x0) && (*puVar2 != 0)) {
    lVar3 = *(long *)(puVar2 + 2);
    lVar4 = (ulong)*puVar2 << 5;
    do {
      plVar1 = (long *)(lVar3 + 8);
      lVar3 = lVar3 + 0x20;
      if (*plVar1 == param_1) {
        FUN_1001fc8d4();
        return;
      }
      lVar4 = lVar4 + -0x20;
    } while (lVar4 != 0);
  }
  return;
}




void FUN_1001fc78c(long param_1)

{
  FUN_1002c0a0c(*(undefined8 *)(param_1 + 8));
  return;
}




void FUN_1001fc794(long param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1002c09d8(*(undefined8 *)(param_1 + 8),1,0);
    return;
  }
  FUN_1002c09f0(*(undefined8 *)(param_1 + 8));
  return;
}




undefined8 FUN_1001fc7ac(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}




long FUN_1001fc7b4(long param_1)

{
  return param_1 + 0x10;
}




undefined8 FUN_1001fc7bc(void)

{
  return 0;
}




void FUN_1001fc7c4(void)

{
  return;
}




undefined8 FUN_1001fc7c8(long param_1)

{
  return *(undefined8 *)(param_1 + -8);
}




void FUN_1001fc7d0(uint *param_1,undefined8 *param_2)

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
    FUN_1001fc858(param_1,uVar3);
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




void FUN_1001fc850(long param_1)

{
  FUN_1001fc3d8(param_1,param_1 + 0x18);
  return;
}




void FUN_1001fc858(uint *param_1,uint param_2)

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




void FUN_1001fc8d4(uint *param_1,undefined8 *param_2,undefined8 *param_3)

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




void FUN_1001fc944(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10146ea50;
  return;
}




void FUN_1001fc954(void)

{
  return;
}




void FUN_1001fc958(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1001fc95c);
  (*pcVar1)();
}




void FUN_1001fc95c(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1001fc960);
  (*pcVar1)();
}




undefined8 * FUN_1001fc960(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR____cxa_pure_virtual_10146eab0;
  operator_new(0x298);
  lVar1 = thunk_FUN_1002c3284();
  *(undefined8 **)(lVar1 + 0xb8) = param_1;
  *param_1 = &PTR_FUN_10146ea88;
  param_1[1] = lVar1;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *(undefined1 *)((long)param_1 + 0x2c) = 1;
  return param_1;
}




void FUN_1001fc9bc(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x10) = param_2;
  return;
}




undefined8
FUN_1001fc9c4(undefined1 param_1 [16],undefined4 param_2,long param_3,undefined8 *param_4,
             undefined4 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined8 *local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  
  uVar1 = FUN_1002c352c(*(undefined8 *)(param_3 + 8));
  uStack_34 = (undefined4)uVar1;
  local_40 = param_4;
  local_38 = param_5;
  uVar2 = (**(code **)*param_4)(param_4);
  local_48 = (**(code **)(**(long **)(*(long *)(param_3 + 0x10) + 8) + 0x48))();
  uStack_44 = param_2;
  FUN_10064e48c(uVar2,&local_48);
  FUN_1001fca60(param_3 + 0x18,&local_40);
  FUN_1002c3b48(*(undefined8 *)(param_3 + 8),*(undefined1 *)(param_3 + 0x2c));
  return uVar1;
}




void FUN_1001fca60(uint *param_1,undefined8 *param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  
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
    FUN_1001fccbc(param_1,uVar3);
    uVar4 = *param_1;
  }
  *param_1 = uVar4 + 1;
  lVar1 = *(long *)(param_1 + 2) + (ulong)(uVar4 + 1) * 0x10;
  uVar5 = *param_2;
  *(undefined8 *)(lVar1 + -8) = param_2[1];
  *(undefined8 *)(lVar1 + -0x10) = uVar5;
  return;
}




void FUN_1001fcae0(long param_1,int param_2)

{
  ulong uVar1;
  int *piVar2;
  
  uVar1 = (ulong)*(uint *)(param_1 + 0x18);
  if (*(uint *)(param_1 + 0x18) != 0) {
    piVar2 = (int *)(*(long *)(param_1 + 0x20) + 0xc);
    do {
      if (*piVar2 == param_2) {
        FUN_1001fcb14(param_1,piVar2[-1]);
        return;
      }
      piVar2 = piVar2 + 4;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}




void FUN_1001fcb14(long param_1,int param_2)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined8 uVar6;
  uint uVar7;
  ulong uVar8;
  undefined1 auStack_60 [32];
  
  if ((*(char *)(param_1 + 0x2c) != '\0') && (lVar1 = *(long *)(param_1 + 0x10), lVar1 != 0)) {
    if (0 < (int)*(uint *)(param_1 + 0x18)) {
      uVar8 = 0;
      puVar4 = (undefined4 *)(*(long *)(param_1 + 0x20) + 0xc);
      do {
        if (puVar4[-1] == param_2) {
          uVar6 = *(undefined8 *)(puVar4 + -3);
          FUN_1002c38d8(*(undefined8 *)(param_1 + 8),*puVar4);
          lVar1 = *(long *)(param_1 + 0x10);
          iVar5 = param_2;
          goto LAB_1001fcba0;
        }
        uVar8 = uVar8 + 1;
        puVar4 = puVar4 + 4;
      } while (*(uint *)(param_1 + 0x18) != uVar8);
    }
    uVar6 = 0;
    uVar8 = 0xffffffff;
    iVar5 = 0;
LAB_1001fcba0:
    uVar7 = (uint)uVar8;
    uVar2 = 2;
    if (uVar7 <= *(uint *)(param_1 + 0x28)) {
      uVar2 = 3;
    }
    uVar3 = 2;
    if (*(uint *)(param_1 + 0x28) < uVar7) {
      uVar3 = 3;
    }
    FUN_1001fd458(lVar1,uVar6,uVar2,uVar3,param_2 != 0);
    *(uint *)(param_1 + 0x28) = uVar7;
    FUN_100644aec(auStack_60,DAT_101d237a0,iVar5);
    FUN_100644c34(*(undefined8 *)(param_1 + 8),auStack_60,1);
  }
  return;
}




void FUN_1001fcc04(long param_1,undefined1 param_2)

{
  FUN_1002c3b48(*(undefined8 *)(param_1 + 8));
  *(undefined1 *)(param_1 + 0x2c) = param_2;
  return;
}




undefined4 FUN_1001fcc30(long param_1)

{
  return *(undefined4 *)(*(long *)(param_1 + 0x20) + (ulong)*(uint *)(param_1 + 0x28) * 0x10 + 8);
}




void thunk_FUN_1001fcc5c(void)

{
  FUN_1001fcc5c();
  return;
}




void FUN_1001fcc48(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1001fcc5c();
  operator_delete(pvVar1);
  return;
}




undefined8 * FUN_1001fcc5c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10146ea88;
  if ((void *)param_1[4] != (void *)0x0) {
    operator_delete__((void *)param_1[4]);
    param_1[3] = 0;
    param_1[4] = 0;
  }
  *param_1 = &PTR____cxa_pure_virtual_10146eab0;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return param_1;
}




void FUN_1001fccbc(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 << 4);
    puVar2 = *(undefined8 **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar3 = (ulong)*param_1 << 4;
      puVar4 = puVar1;
      puVar5 = puVar2;
      do {
        uVar6 = *puVar5;
        puVar4[1] = puVar5[1];
        *puVar4 = uVar6;
        lVar3 = lVar3 + -0x10;
        puVar4 = puVar4 + 2;
        puVar5 = puVar5 + 2;
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




void FUN_1001fcd38(void)

{
  DAT_101e43ad8 = 0xff;
  DAT_101e43ada = 0xffff;
  DAT_101e43adc = 0xffff;
  DAT_101e43ade = 0xffbc9c44;
  DAT_101e43ae2 = 0xff1166f2;
  DAT_101e43ae6 = 0xffe0e0e0;
  DAT_101e43aea = 0xffa0a0a0;
  DAT_101e43aee = 0xff8c8c8c;
  DAT_101e43af2 = 0xff322213;
  DAT_101e43af6 = 0xff091911;
  DAT_101e43afa = 0xff170c19;
  DAT_101e43afe = 0xff241a14;
  DAT_101e43b02 = 0xff14171c;
  DAT_101e43b06 = 0xff221911;
  DAT_101e43b0a = 0xff1a1416;
  DAT_101e43b0e = 0xff121414;
  DAT_101e43b12 = 0xff1a1809;
  DAT_101e43b16 = 0xff141414;
  DAT_101e43b1a = 0xff141414;
  DAT_101e43b1e = 0xff2929c0;
  DAT_101e43b22 = 0xff283082;
  DAT_101e43b26 = 0xff5262cc;
  DAT_101e43b2a = 0xff283082;
  DAT_101e43b2e = 0xff5262cc;
  DAT_101e43b32 = 0xff745c42;
  DAT_101e43b36 = 0xff184155;
  DAT_101e43b3a = 0xff92665e;
  DAT_101e43b3e = 0xffbc9c44;
  DAT_101e43b42 = 0xffbbae56;
  DAT_101e43b46 = 0xff8b7b01;
  DAT_101e43b4a = 0xff90b3ef;
  DAT_101e43b4e = 0xff728ebe;
  DAT_101e43b52 = 0xff19459d;
  DAT_101e43b56 = 0xff9d877b;
  DAT_101e43b5a = 0xffcbb1a3;
  DAT_101e43b5e = 0xff3f6fb5;
  DAT_101e43b62 = 0xffc5c5c5;
  DAT_101e43b66 = 0xff4fc1f1;
  DAT_101e43b6a = 0xff606060;
  DAT_101e43b6e = 0xffc5ff7b;
  DAT_101e43b72 = 0xff5271eb;
  DAT_101e43b76 = 0xfffae076;
  DAT_101e43b7a = 0xff3ac8f6;
  DAT_101e43b7e = 0xffaaaaaa;
  DAT_101e43b82 = 0xffe19400;
  DAT_101e43b86 = 0xffe19400;
  DAT_101e43b8a = 0xffe550b2;
  DAT_101e43b8e = 0xfff22ae8;
  DAT_101e43b92 = 0xff005ae1;
  DAT_101e43b96 = 0xff1addfa;
  DAT_101e43b9a = 0xff2424b3;
  DAT_101e43b9e = 0xff2424b3;
  DAT_101e43ba2 = 0xff646464;
  DAT_101e43ba6 = 0xff92665e;
  DAT_101e43baa = 0xff646037;
  DAT_101e43bb4 = 0xff1111a1;
  DAT_101e43bb8 = 0xff321ee1;
  DAT_101e43bbc = 0xffc8c8c8;
  DAT_101e43bc0 = 0xff321ee1;
  DAT_101e43bcc = 0xff6259b3;
  DAT_101e43bd0 = 0xff506e73;
  DAT_101e43bd4 = 0xff9dbf86;
  DAT_101e43bb0 = 0xffffffff;
  DAT_101e43bd8 = 0xffa35244;
  DAT_101e43bc4 = 0xff7fe801;
  DAT_101e43bdc = 0xffca828e;
  DAT_101e43bc8 = 0xffffffff;
  DAT_101e43be0 = 0xffa6a6a6;
  DAT_101e43be4 = 0xffa6a6a6;
  DAT_101e43be8 = 0xffffffff;
  DAT_101e43bec = 0xff88ea2f;
  DAT_101e43bf0 = 0xff8c8c8c;
  DAT_101e43bf4 = 0xffffb400;
  DAT_101e43bf8 = 0xffff00ff;
  DAT_101e43bfc = 0xff00aded;
  DAT_101e43c00 = 0xff33d3ff;
  DAT_101e43c04 = 0xff7fe801;
  DAT_101e43c08 = 0xff282828;
  DAT_101e43c0c = 0xfff0f0f0;
  DAT_101e43c10 = 0xffa4781e;
  DAT_101e43c14 = 0xffa6654b;
  DAT_101e43c18 = 0xff93435b;
  DAT_101e43c1c = 0xff387f9c;
  DAT_101e43c20 = 0xffa3781e;
  DAT_101e43c24 = 0xffffd18a;
  DAT_101e43c28 = 0xffff61f7;
  DAT_101e43c2c = 0xff5de1f2;
  DAT_101e43c30 = 0xff80eaff;
  DAT_101e43c34 = 0xff32e00e;
  DAT_101e43c38 = 0xff5a3c10;
  DAT_101e43c3c = 0xff330b03;
  DAT_101e43c40 = 0xff33031d;
  DAT_101e43c44 = 0xff032433;
  DAT_101e43c48 = 0xff9e8e8d;
  DAT_101d237a0 = FUN_100644a94("UI::EVENT_MAIN_HUB_NAV_BAR_ON_NAVIGATE");
  return;
}




undefined8 * FUN_1001fd410(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR_FUN_10146eaf8;
  operator_new(0x628);
  lVar1 = thunk_FUN_1002c4324();
  *(undefined8 **)(lVar1 + 0xb8) = param_1;
  *param_1 = &PTR_FUN_10146ead8;
  param_1[1] = lVar1;
  return param_1;
}




void FUN_1001fd458(long param_1)

{
  FUN_1002c453c(*(undefined8 *)(param_1 + 8));
  return;
}




void FUN_1001fd460(long param_1)

{
  FUN_1002c46d4(*(undefined8 *)(param_1 + 8));
  return;
}




undefined8 * FUN_1001fd468(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10146eaf8;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return param_1;
}




void FUN_1001fd4ac(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10146eaf8;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  operator_delete(param_1);
  return;
}




undefined8 * FUN_1001fd4ec(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10146eaf8;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return param_1;
}




void FUN_1001fd530(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10146eaf8;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  operator_delete(param_1);
  return;
}




code * FUN_1001fd570(code *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  code *pcVar8;
  code *local_60;
  code *pcStack_58;
  code *local_50;
  code *local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  
  *(undefined ***)param_1 = &PTR____cxa_pure_virtual_10146ef88;
  operator_new(0x8c0);
  lVar4 = thunk_FUN_1002c4778();
  *(long *)(param_1 + 8) = lVar4;
  *(code **)(lVar4 + 0xd8) = param_1;
  pcVar8 = param_1 + 0x10;
  *(undefined ***)pcVar8 = &PTR_FUN_10146c930;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  FUN_10016b764(param_1 + 0x28);
  FUN_10014f4a0(param_1 + 0x40);
  FUN_1004f0a20(param_1 + 0x58);
  *(undefined ***)param_1 = &PTR_FUN_10146eb18;
  *(undefined ***)pcVar8 = &PTR_FUN_10146eb78;
  *(undefined ***)(param_1 + 0x28) = &PTR_FUN_10146eb90;
  *(undefined ***)(param_1 + 0x40) = &PTR_FUN_10146ebc0;
  *(undefined ***)(param_1 + 0x58) = &PTR_FUN_10146ef58;
  pcVar1 = param_1 + 0x70;
  FUN_1001fc960(pcVar1);
  FUN_1001fd410(param_1 + 0xa0);
  *(undefined8 *)(param_1 + 0x118) = 0;
  *(undefined8 *)(param_1 + 0x110) = 0;
  *(undefined8 *)(param_1 + 0x128) = 0;
  *(undefined8 *)(param_1 + 0x120) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0x108) = 0;
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined8 *)(param_1 + 0xe0) = 0;
  param_1[0x130] = (code)0x1;
  *(undefined4 *)(param_1 + 0x131) = 0;
  *(undefined2 *)(param_1 + 0x135) = 0;
  pcStack_58 = thunk_FUN_1001fe0d4;
  local_60 = param_1;
  FUN_100643618(0,&local_60,0,1);
  FUN_1002c5038(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x78));
  FUN_1002c5088(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0xa8));
  FUN_1001fc9bc(pcVar1,param_1 + 0xa0);
  FUN_1001dac1c(pcVar8,"HOME",param_1,thunk_FUN_1001fedec);
  FUN_1001dac1c(pcVar8,"PARTY",param_1,FUN_1001ff8e4);
  FUN_1001dac1c(pcVar8,"MARKET",param_1,FUN_1001ff8fc);
  FUN_1001dac1c(pcVar8,"HEROES",param_1,thunk_FUN_1001feee8);
  FUN_1001dac1c(pcVar8,"ACADEMY",param_1,thunk_FUN_1001fef3c);
  FUN_1001dac1c(pcVar8,"NEWS",param_1,thunk_FUN_1001fefac);
  FUN_1001dac1c(pcVar8,"FRIENDS",param_1,FUN_1001ff920);
  FUN_1001dac1c(pcVar8,"PEOPLE",param_1,thunk_FUN_1001ff088);
  FUN_1001dac1c(pcVar8,"PRACTICE",param_1,FUN_1001ff93c);
  FUN_1001dac1c(pcVar8,"PURCHASESKU",param_1,FUN_1001ff954);
  FUN_1001dac1c(pcVar8,"PROFILE",param_1,FUN_1001ff96c);
  local_38 = DAT_101d918ac;
  local_60 = thunk_FUN_1001fe4cc;
  local_48 = (code *)0x0;
  uStack_40 = 0;
  local_50 = (code *)0x0;
  pcStack_58 = param_1;
  FUN_10001554c(*(long *)(param_1 + 8) + 8,&local_60);
  local_38 = DAT_101d918a8;
  local_60 = thunk_FUN_1001fe744;
  local_48 = (code *)0x0;
  uStack_40 = 0;
  local_50 = (code *)0x0;
  pcStack_58 = param_1;
  FUN_10001554c(*(long *)(param_1 + 8) + 8,&local_60);
  local_38 = DAT_101d23684;
  local_60 = thunk_FUN_1001fe5c8;
  local_48 = (code *)0x0;
  uStack_40 = 0;
  local_50 = (code *)0x0;
  pcStack_58 = param_1;
  FUN_10001554c(*(long *)(param_1 + 8) + 8,&local_60);
  lVar4 = FUN_10031ffe0();
  pcStack_58 = (code *)0x0;
  local_48 = thunk_FUN_1001ff26c;
  local_60 = param_1;
  local_50 = param_1;
  FUN_1000be5e4(lVar4 + 0x30,&local_60);
  lVar4 = FUN_10031ffe0();
  pcStack_58 = (code *)0x0;
  local_48 = FUN_1001ff988;
  local_60 = param_1;
  local_50 = param_1;
  FUN_1000be5e4(lVar4 + 0x40,&local_60);
  lVar4 = FUN_10031ffe0();
  pcStack_58 = (code *)0x0;
  local_48 = thunk_FUN_1001ff2c4;
  local_60 = param_1;
  local_50 = param_1;
  FUN_1000be5e4(lVar4 + 0x50,&local_60);
  uVar5 = FUN_1000fd5e8();
  pcStack_58 = (code *)0x0;
  local_48 = thunk_FUN_1001febf8;
  local_60 = param_1;
  local_50 = param_1;
  FUN_1000be5e4(uVar5,&local_60);
  lVar4 = FUN_10032a0bc();
  pcStack_58 = (code *)0x0;
  local_48 = thunk_FUN_1001febf8;
  local_60 = param_1;
  local_50 = param_1;
  FUN_1000be5e4(lVar4 + 0x30,&local_60);
  FUN_100326da8();
  FUN_10031a918();
  FUN_10031d448();
  operator_new(0x38);
  uVar5 = thunk_FUN_1001f3424();
  *(undefined8 *)(param_1 + 0xe0) = uVar5;
  operator_new(0x2cf68);
  uVar5 = thunk_FUN_100248d18();
  *(undefined8 *)(param_1 + 0xe8) = uVar5;
  uVar6 = FUN_100131560();
  if ((uVar6 & 1) == 0) {
    operator_new(0x9ca0);
    uVar5 = thunk_FUN_100242e6c();
    *(undefined8 *)(param_1 + 0x100) = uVar5;
  }
  operator_new(0x60);
  lVar7 = thunk_FUN_1001f59e8();
  *(long *)(param_1 + 0x108) = lVar7;
  lVar4 = 0;
  if (*(long *)(param_1 + 0xe0) != 0) {
    lVar4 = *(long *)(param_1 + 0xe0) + 0x10;
  }
  *(long *)(param_1 + 0xb0) = lVar4;
  *(long *)(param_1 + 0xb8) = lVar7 + 0x28;
  uVar6 = FUN_100131560();
  if ((uVar6 & 1) == 0) {
    lVar4 = 0;
    if (*(long *)(param_1 + 0x100) != 0) {
      lVar4 = *(long *)(param_1 + 0x100) + 0x2c88;
    }
    *(long *)(param_1 + 0xc0) = lVar4;
  }
  lVar4 = 0;
  if (*(long *)(param_1 + 0xe0) != 0) {
    lVar4 = *(long *)(param_1 + 0xe0) + 0x10;
  }
  FUN_1001fc9c4(pcVar1,lVar4,0);
  lVar4 = 0;
  if (*(long *)(param_1 + 0x108) != 0) {
    lVar4 = *(long *)(param_1 + 0x108) + 0x28;
  }
  FUN_1001fc9c4(pcVar1,lVar4,1);
  uVar6 = FUN_100131560();
  if ((uVar6 & 1) == 0) {
    lVar4 = 0;
    if (*(long *)(param_1 + 0x100) != 0) {
      lVar4 = *(long *)(param_1 + 0x100) + 0x2c88;
    }
    FUN_1001fc9c4(pcVar1,lVar4,2);
  }
  iVar3 = FUN_100126b6c();
  if (iVar3 == 0) {
    operator_new(0x137218);
    lVar4 = thunk_FUN_100266a50();
    *(long *)(param_1 + 0xf8) = lVar4;
    lVar4 = lVar4 + 0x2c48;
    *(long *)(param_1 + 0xd0) = lVar4;
    uVar5 = 5;
  }
  else {
    operator_new(0x160);
    uVar5 = thunk_FUN_10020cfb8();
    *(undefined8 *)(param_1 + 0xf0) = uVar5;
    uVar6 = FUN_100131560();
    if ((uVar6 & 1) != 0) goto LAB_1001fda40;
    lVar4 = 0;
    if (*(long *)(param_1 + 0xf0) != 0) {
      lVar4 = *(long *)(param_1 + 0xf0) + 0x10;
    }
    *(long *)(param_1 + 0xd0) = lVar4;
    uVar5 = 4;
  }
  FUN_1001fc9c4(pcVar1,lVar4,uVar5);
LAB_1001fda40:
  uVar2 = DAT_101d2365c;
  local_38 = DAT_101d2365c;
  local_60 = FUN_1001fdb84;
  local_48 = (code *)0x0;
  uStack_40 = 0;
  local_50 = (code *)0x0;
  pcStack_58 = param_1;
  FUN_10001554c(*(long *)(param_1 + 8) + 8,&local_60);
  lVar4 = FUN_10016c2f0();
  FUN_1001fdbb8(param_1,0 < *(int *)(lVar4 + 0x38));
  lVar4 = FUN_1002c5224(*(undefined8 *)(param_1 + 8));
  local_38 = uVar2;
  local_60 = FUN_1001fdb84;
  local_48 = (code *)0x0;
  uStack_40 = 0;
  local_50 = (code *)0x0;
  pcStack_58 = param_1;
  FUN_10001554c(lVar4 + 8,&local_60);
  lVar4 = FUN_10030df60();
  local_60 = (code *)0x0;
  local_48 = FUN_1001ffa48;
  pcStack_58 = param_1;
  local_50 = param_1;
  FUN_1001ff9c8(lVar4 + 0x18,&local_60);
  lVar4 = FUN_10032523c();
  local_60 = (code *)0x0;
  local_48 = thunk_FUN_1001ff430;
  pcStack_58 = param_1;
  local_50 = param_1;
  FUN_100031f58(lVar4 + 0x40,&local_60);
  uVar5 = FUN_1000fd5d8();
  pcStack_58 = (code *)0x0;
  local_48 = thunk_FUN_1001ff5c0;
  local_60 = param_1;
  local_50 = param_1;
  FUN_1000be5e4(uVar5,&local_60);
  local_38 = DAT_101d237a0;
  local_60 = FUN_1001fdc74;
  local_48 = (code *)0x0;
  uStack_40 = 0;
  local_50 = (code *)0x0;
  pcStack_58 = param_1;
  FUN_10001554c(*(long *)(param_1 + 8) + 8,&local_60);
  iVar3 = FUN_1001311d4();
  if (iVar3 != 0) {
    FUN_1001fdcb4(param_1,0);
    FUN_1002a6d84(*(undefined8 *)(*(long *)(param_1 + 0xe0) + 8));
  }
  return param_1;
}




void thunk_FUN_1001fe4cc(long param_1)

{
  undefined8 uVar1;
  long alStack_40 [3];
  code *pcStack_28;
  
  uVar1 = FUN_10016c2f0();
  FUN_10016ba4c(uVar1,1);
  uVar1 = FUN_100307fe8();
  alStack_40[1] = 0;
  pcStack_28 = thunk_FUN_1001fe5c8;
  alStack_40[0] = param_1;
  alStack_40[2] = param_1;
  FUN_1000be5e4(uVar1,alStack_40);
  FUN_1001fe538(param_1);
  FUN_1001fe5c8(param_1);
  FUN_1001fe670(param_1);
  FUN_1001fd460(param_1 + 0xa0);
  return;
}




void thunk_FUN_1001fe744(long param_1)

{
  int iVar1;
  uint *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  
  puVar2 = (uint *)FUN_100307fe8();
  if (*puVar2 != 0) {
    lVar6 = (ulong)*puVar2 << 5;
    plVar5 = *(long **)(puVar2 + 2);
    do {
      if (*plVar5 == param_1) {
        FUN_1000c044c(puVar2,plVar5,plVar5 + 4);
        break;
      }
      lVar6 = lVar6 + -0x20;
      plVar5 = plVar5 + 4;
    } while (lVar6 != 0);
  }
  uVar3 = FUN_10016c2f0();
  FUN_10016ba4c(uVar3,0);
  uVar4 = FUN_100126b6c();
  if ((uVar4 & 1) == 0) {
    plVar5 = *(long **)(param_1 + 0xf8);
    if ((*(byte *)((long)plVar5 + 0x2c2c) >> 2 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001001fe7f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar5 + 0x148))(plVar5,0);
      return;
    }
  }
  else {
    iVar1 = FUN_10020d968(*(undefined8 *)(param_1 + 0xf0));
    if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001001fe7c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(long **)(param_1 + 0xf0) + 0x40))();
      return;
    }
  }
  return;
}




void thunk_FUN_1001fe5c8(void)

{
  FUN_1001fe5c8();
  return;
}




void FUN_1001fdb84(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = FUN_100644b2c(param_4);
                    /* WARNING: Could not recover jumptable at 0x0001001fdbb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,uVar1);
  return;
}




void FUN_1001fdbb8(long param_1,uint param_2)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  
  uVar3 = param_2 ^ 1;
  FUN_1001fdcb4(param_1,uVar3);
  FUN_1001f3724(*(undefined8 *)(param_1 + 0xe0),uVar3);
  if ((uVar3 & 1) == 0) {
    FUN_10016c2f0();
    iVar2 = FUN_10016bdbc();
    if ((iVar2 != 0) && (uVar4 = FUN_1001311d4(), (uVar4 & 1) == 0)) {
      FUN_100221a10();
    }
  }
  uVar3 = FUN_10012f844();
  iVar2 = FUN_10015d3f8();
  if (iVar2 == 0) {
    bVar1 = true;
  }
  else {
    lVar5 = FUN_10015d3ec();
    bVar1 = *(char *)(lVar5 + 0x567c) == '\0';
  }
  if ((((param_2 & 1) == 0) && (!bVar1 && (uVar3 & 1) == 0)) && (*(char *)(param_1 + 0x131) != '\0')
     ) {
    FUN_1002249cc(&DAT_101873a48);
    FUN_10012f778(1);
  }
  *(char *)(param_1 + 0x131) = (char)param_2;
  FUN_1001fe670(param_1);
  return;
}




void FUN_1001fdc74(long param_1)

{
  int iVar1;
  
  iVar1 = FUN_1001fcc30(param_1 + 0x70);
  FUN_1002c50fc(*(undefined8 *)(param_1 + 8),*(char *)(param_1 + 0x133) != '\0' || iVar1 != 0,
                iVar1 != 0);
  return;
}




void FUN_1001fdcb4(long param_1,int param_2)

{
  uint uVar1;
  undefined1 uVar2;
  
  if (param_2 == 0) {
    if (*(char *)(param_1 + 0x130) == '\0') {
      return;
    }
  }
  else {
    uVar1 = FUN_1001311d4();
    if ((uint)*(byte *)(param_1 + 0x130) == (uVar1 ^ 1)) {
      return;
    }
    if (uVar1 == 0) {
      uVar2 = 1;
      goto LAB_1001fdd08;
    }
  }
  FUN_1001fcb14(param_1 + 0x70,0);
  uVar2 = 0;
  *(undefined1 *)(param_1 + 0x132) = 1;
LAB_1001fdd08:
  FUN_1001fcc04(param_1 + 0x70,uVar2);
  *(undefined1 *)(param_1 + 0x130) = uVar2;
  return;
}




code * thunk_FUN_1001fd570(code *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  code *pcVar8;
  code *pcStack_60;
  code *pcStack_58;
  code *pcStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  
  *(undefined ***)param_1 = &PTR____cxa_pure_virtual_10146ef88;
  operator_new(0x8c0);
  lVar4 = thunk_FUN_1002c4778();
  *(long *)(param_1 + 8) = lVar4;
  *(code **)(lVar4 + 0xd8) = param_1;
  pcVar8 = param_1 + 0x10;
  *(undefined ***)pcVar8 = &PTR_FUN_10146c930;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  FUN_10016b764(param_1 + 0x28);
  FUN_10014f4a0(param_1 + 0x40);
  FUN_1004f0a20(param_1 + 0x58);
  *(undefined ***)param_1 = &PTR_FUN_10146eb18;
  *(undefined ***)pcVar8 = &PTR_FUN_10146eb78;
  *(undefined ***)(param_1 + 0x28) = &PTR_FUN_10146eb90;
  *(undefined ***)(param_1 + 0x40) = &PTR_FUN_10146ebc0;
  *(undefined ***)(param_1 + 0x58) = &PTR_FUN_10146ef58;
  pcVar1 = param_1 + 0x70;
  FUN_1001fc960(pcVar1);
  FUN_1001fd410(param_1 + 0xa0);
  *(undefined8 *)(param_1 + 0x118) = 0;
  *(undefined8 *)(param_1 + 0x110) = 0;
  *(undefined8 *)(param_1 + 0x128) = 0;
  *(undefined8 *)(param_1 + 0x120) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0x108) = 0;
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined8 *)(param_1 + 0xe0) = 0;
  param_1[0x130] = (code)0x1;
  *(undefined4 *)(param_1 + 0x131) = 0;
  *(undefined2 *)(param_1 + 0x135) = 0;
  pcStack_58 = thunk_FUN_1001fe0d4;
  pcStack_60 = param_1;
  FUN_100643618(0,&pcStack_60,0,1);
  FUN_1002c5038(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x78));
  FUN_1002c5088(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0xa8));
  FUN_1001fc9bc(pcVar1,param_1 + 0xa0);
  FUN_1001dac1c(pcVar8,"HOME",param_1,thunk_FUN_1001fedec);
  FUN_1001dac1c(pcVar8,"PARTY",param_1,FUN_1001ff8e4);
  FUN_1001dac1c(pcVar8,"MARKET",param_1,FUN_1001ff8fc);
  FUN_1001dac1c(pcVar8,"HEROES",param_1,thunk_FUN_1001feee8);
  FUN_1001dac1c(pcVar8,"ACADEMY",param_1,thunk_FUN_1001fef3c);
  FUN_1001dac1c(pcVar8,"NEWS",param_1,thunk_FUN_1001fefac);
  FUN_1001dac1c(pcVar8,"FRIENDS",param_1,FUN_1001ff920);
  FUN_1001dac1c(pcVar8,"PEOPLE",param_1,thunk_FUN_1001ff088);
  FUN_1001dac1c(pcVar8,"PRACTICE",param_1,FUN_1001ff93c);
  FUN_1001dac1c(pcVar8,"PURCHASESKU",param_1,FUN_1001ff954);
  FUN_1001dac1c(pcVar8,"PROFILE",param_1,FUN_1001ff96c);
  uStack_38 = DAT_101d918ac;
  pcStack_60 = thunk_FUN_1001fe4cc;
  pcStack_48 = (code *)0x0;
  uStack_40 = 0;
  pcStack_50 = (code *)0x0;
  pcStack_58 = param_1;
  FUN_10001554c(*(long *)(param_1 + 8) + 8,&pcStack_60);
  uStack_38 = DAT_101d918a8;
  pcStack_60 = thunk_FUN_1001fe744;
  pcStack_48 = (code *)0x0;
  uStack_40 = 0;
  pcStack_50 = (code *)0x0;
  pcStack_58 = param_1;
  FUN_10001554c(*(long *)(param_1 + 8) + 8,&pcStack_60);
  uStack_38 = DAT_101d23684;
  pcStack_60 = thunk_FUN_1001fe5c8;
  pcStack_48 = (code *)0x0;
  uStack_40 = 0;
  pcStack_50 = (code *)0x0;
  pcStack_58 = param_1;
  FUN_10001554c(*(long *)(param_1 + 8) + 8,&pcStack_60);
  lVar4 = FUN_10031ffe0();
  pcStack_58 = (code *)0x0;
  pcStack_48 = thunk_FUN_1001ff26c;
  pcStack_60 = param_1;
  pcStack_50 = param_1;
  FUN_1000be5e4(lVar4 + 0x30,&pcStack_60);
  lVar4 = FUN_10031ffe0();
  pcStack_58 = (code *)0x0;
  pcStack_48 = FUN_1001ff988;
  pcStack_60 = param_1;
  pcStack_50 = param_1;
  FUN_1000be5e4(lVar4 + 0x40,&pcStack_60);
  lVar4 = FUN_10031ffe0();
  pcStack_58 = (code *)0x0;
  pcStack_48 = thunk_FUN_1001ff2c4;
  pcStack_60 = param_1;
  pcStack_50 = param_1;
  FUN_1000be5e4(lVar4 + 0x50,&pcStack_60);
  uVar5 = FUN_1000fd5e8();
  pcStack_58 = (code *)0x0;
  pcStack_48 = thunk_FUN_1001febf8;
  pcStack_60 = param_1;
  pcStack_50 = param_1;
  FUN_1000be5e4(uVar5,&pcStack_60);
  lVar4 = FUN_10032a0bc();
  pcStack_58 = (code *)0x0;
  pcStack_48 = thunk_FUN_1001febf8;
  pcStack_60 = param_1;
  pcStack_50 = param_1;
  FUN_1000be5e4(lVar4 + 0x30,&pcStack_60);
  FUN_100326da8();
  FUN_10031a918();
  FUN_10031d448();
  operator_new(0x38);
  uVar5 = thunk_FUN_1001f3424();
  *(undefined8 *)(param_1 + 0xe0) = uVar5;
  operator_new(0x2cf68);
  uVar5 = thunk_FUN_100248d18();
  *(undefined8 *)(param_1 + 0xe8) = uVar5;
  uVar6 = FUN_100131560();
  if ((uVar6 & 1) == 0) {
    operator_new(0x9ca0);
    uVar5 = thunk_FUN_100242e6c();
    *(undefined8 *)(param_1 + 0x100) = uVar5;
  }
  operator_new(0x60);
  lVar7 = thunk_FUN_1001f59e8();
  *(long *)(param_1 + 0x108) = lVar7;
  lVar4 = 0;
  if (*(long *)(param_1 + 0xe0) != 0) {
    lVar4 = *(long *)(param_1 + 0xe0) + 0x10;
  }
  *(long *)(param_1 + 0xb0) = lVar4;
  *(long *)(param_1 + 0xb8) = lVar7 + 0x28;
  uVar6 = FUN_100131560();
  if ((uVar6 & 1) == 0) {
    lVar4 = 0;
    if (*(long *)(param_1 + 0x100) != 0) {
      lVar4 = *(long *)(param_1 + 0x100) + 0x2c88;
    }
    *(long *)(param_1 + 0xc0) = lVar4;
  }
  lVar4 = 0;
  if (*(long *)(param_1 + 0xe0) != 0) {
    lVar4 = *(long *)(param_1 + 0xe0) + 0x10;
  }
  FUN_1001fc9c4(pcVar1,lVar4,0);
  lVar4 = 0;
  if (*(long *)(param_1 + 0x108) != 0) {
    lVar4 = *(long *)(param_1 + 0x108) + 0x28;
  }
  FUN_1001fc9c4(pcVar1,lVar4,1);
  uVar6 = FUN_100131560();
  if ((uVar6 & 1) == 0) {
    lVar4 = 0;
    if (*(long *)(param_1 + 0x100) != 0) {
      lVar4 = *(long *)(param_1 + 0x100) + 0x2c88;
    }
    FUN_1001fc9c4(pcVar1,lVar4,2);
  }
  iVar3 = FUN_100126b6c();
  if (iVar3 == 0) {
    operator_new(0x137218);
    lVar4 = thunk_FUN_100266a50();
    *(long *)(param_1 + 0xf8) = lVar4;
    lVar4 = lVar4 + 0x2c48;
    *(long *)(param_1 + 0xd0) = lVar4;
    uVar5 = 5;
  }
  else {
    operator_new(0x160);
    uVar5 = thunk_FUN_10020cfb8();
    *(undefined8 *)(param_1 + 0xf0) = uVar5;
    uVar6 = FUN_100131560();
    if ((uVar6 & 1) != 0) goto LAB_1001fda40;
    lVar4 = 0;
    if (*(long *)(param_1 + 0xf0) != 0) {
      lVar4 = *(long *)(param_1 + 0xf0) + 0x10;
    }
    *(long *)(param_1 + 0xd0) = lVar4;
    uVar5 = 4;
  }
  FUN_1001fc9c4(pcVar1,lVar4,uVar5);
LAB_1001fda40:
  uVar2 = DAT_101d2365c;
  uStack_38 = DAT_101d2365c;
  pcStack_60 = FUN_1001fdb84;
  pcStack_48 = (code *)0x0;
  uStack_40 = 0;
  pcStack_50 = (code *)0x0;
  pcStack_58 = param_1;
  FUN_10001554c(*(long *)(param_1 + 8) + 8,&pcStack_60);
  lVar4 = FUN_10016c2f0();
  FUN_1001fdbb8(param_1,0 < *(int *)(lVar4 + 0x38));
  lVar4 = FUN_1002c5224(*(undefined8 *)(param_1 + 8));
  uStack_38 = uVar2;
  pcStack_60 = FUN_1001fdb84;
  pcStack_48 = (code *)0x0;
  uStack_40 = 0;
  pcStack_50 = (code *)0x0;
  pcStack_58 = param_1;
  FUN_10001554c(lVar4 + 8,&pcStack_60);
  lVar4 = FUN_10030df60();
  pcStack_60 = (code *)0x0;
  pcStack_48 = FUN_1001ffa48;
  pcStack_58 = param_1;
  pcStack_50 = param_1;
  FUN_1001ff9c8(lVar4 + 0x18,&pcStack_60);
  lVar4 = FUN_10032523c();
  pcStack_60 = (code *)0x0;
  pcStack_48 = thunk_FUN_1001ff430;
  pcStack_58 = param_1;
  pcStack_50 = param_1;
  FUN_100031f58(lVar4 + 0x40,&pcStack_60);
  uVar5 = FUN_1000fd5d8();
  pcStack_58 = (code *)0x0;
  pcStack_48 = thunk_FUN_1001ff5c0;
  pcStack_60 = param_1;
  pcStack_50 = param_1;
  FUN_1000be5e4(uVar5,&pcStack_60);
  uStack_38 = DAT_101d237a0;
  pcStack_60 = FUN_1001fdc74;
  pcStack_48 = (code *)0x0;
  uStack_40 = 0;
  pcStack_50 = (code *)0x0;
  pcStack_58 = param_1;
  FUN_10001554c(*(long *)(param_1 + 8) + 8,&pcStack_60);
  iVar3 = FUN_1001311d4();
  if (iVar3 != 0) {
    FUN_1001fdcb4(param_1,0);
    FUN_1002a6d84(*(undefined8 *)(*(long *)(param_1 + 0xe0) + 8));
  }
  return param_1;
}




undefined8 * FUN_1001fdd28(undefined8 *param_1)

{
  uint uVar1;
  long lVar2;
  uint *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *local_40;
  code *pcStack_38;
  
  *param_1 = &PTR_FUN_10146eb18;
  param_1[2] = &PTR_FUN_10146eb78;
  param_1[5] = &PTR_FUN_10146eb90;
  param_1[8] = &PTR_FUN_10146ebc0;
  param_1[0xb] = &PTR_FUN_10146ef58;
  pcStack_38 = thunk_FUN_1001fe0d4;
  local_40 = param_1;
  FUN_100643a8c(&local_40);
  lVar2 = FUN_100307fe8();
  if (lVar2 != 0) {
    puVar3 = (uint *)FUN_100307fe8();
    if (*puVar3 != 0) {
      lVar2 = (ulong)*puVar3 << 5;
      puVar6 = *(undefined8 **)(puVar3 + 2);
      do {
        if ((undefined8 *)*puVar6 == param_1) {
          FUN_1000c044c(puVar3,puVar6,puVar6 + 4);
          break;
        }
        lVar2 = lVar2 + -0x20;
        puVar6 = puVar6 + 4;
      } while (lVar2 != 0);
    }
  }
  if ((long *)param_1[0x1c] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x1c] + 0x18))();
  }
  param_1[0x1c] = 0;
  if ((long *)param_1[0x1d] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x1d] + 8))();
  }
  param_1[0x1d] = 0;
  if ((long *)param_1[0x1e] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x1e] + 0x30))();
  }
  param_1[0x1e] = 0;
  if ((long *)param_1[0x1f] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x1f] + 8))();
  }
  param_1[0x1f] = 0;
  if ((long *)param_1[0x21] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x21] + 8))();
  }
  param_1[0x21] = 0;
  lVar2 = FUN_10031ffe0();
  uVar1 = *(uint *)(lVar2 + 0x30);
  if (uVar1 != 0) {
    lVar5 = (ulong)uVar1 << 5;
    puVar6 = *(undefined8 **)(lVar2 + 0x38);
    do {
      if ((undefined8 *)*puVar6 == param_1) {
        FUN_1000c044c((uint *)(lVar2 + 0x30),puVar6,puVar6 + 4);
        break;
      }
      lVar5 = lVar5 + -0x20;
      puVar6 = puVar6 + 4;
    } while (lVar5 != 0);
  }
  lVar2 = FUN_10031ffe0();
  uVar1 = *(uint *)(lVar2 + 0x40);
  if (uVar1 != 0) {
    lVar5 = (ulong)uVar1 << 5;
    puVar6 = *(undefined8 **)(lVar2 + 0x48);
    do {
      if ((undefined8 *)*puVar6 == param_1) {
        FUN_1000c044c((uint *)(lVar2 + 0x40),puVar6,puVar6 + 4);
        break;
      }
      lVar5 = lVar5 + -0x20;
      puVar6 = puVar6 + 4;
    } while (lVar5 != 0);
  }
  puVar3 = (uint *)FUN_1000fd5e8();
  if (*puVar3 != 0) {
    lVar2 = (ulong)*puVar3 << 5;
    puVar6 = *(undefined8 **)(puVar3 + 2);
    do {
      if ((undefined8 *)*puVar6 == param_1) {
        FUN_1000c044c(puVar3,puVar6,puVar6 + 4);
        break;
      }
      lVar2 = lVar2 + -0x20;
      puVar6 = puVar6 + 4;
    } while (lVar2 != 0);
  }
  lVar2 = FUN_10032a0bc();
  uVar1 = *(uint *)(lVar2 + 0x30);
  if (uVar1 != 0) {
    lVar5 = (ulong)uVar1 << 5;
    puVar6 = *(undefined8 **)(lVar2 + 0x38);
    do {
      if ((undefined8 *)*puVar6 == param_1) {
        FUN_1000c044c((uint *)(lVar2 + 0x30),puVar6,puVar6 + 4);
        break;
      }
      lVar5 = lVar5 + -0x20;
      puVar6 = puVar6 + 4;
    } while (lVar5 != 0);
  }
  lVar2 = FUN_10030df60();
  if (*(uint *)(lVar2 + 0x18) != 0) {
    lVar5 = *(long *)(lVar2 + 0x20);
    lVar2 = (ulong)*(uint *)(lVar2 + 0x18) << 5;
    do {
      puVar6 = (undefined8 *)(lVar5 + 8);
      lVar5 = lVar5 + 0x20;
      if ((undefined8 *)*puVar6 == param_1) {
        FUN_1001ffafc();
        break;
      }
      lVar2 = lVar2 + -0x20;
    } while (lVar2 != 0);
  }
  lVar2 = FUN_10032523c();
  if (*(uint *)(lVar2 + 0x40) != 0) {
    lVar5 = *(long *)(lVar2 + 0x48);
    lVar2 = (ulong)*(uint *)(lVar2 + 0x40) << 5;
    do {
      puVar6 = (undefined8 *)(lVar5 + 8);
      lVar5 = lVar5 + 0x20;
      if ((undefined8 *)*puVar6 == param_1) {
        FUN_100031ee8();
        break;
      }
      lVar2 = lVar2 + -0x20;
    } while (lVar2 != 0);
  }
  uVar4 = FUN_10016c2f0();
  FUN_10016ba4c(uVar4,0);
  if (*(char *)((long)param_1 + 0x12f) < '\0') {
    operator_delete((void *)param_1[0x23]);
  }
  param_1[0x14] = &PTR_FUN_10146eaf8;
  if ((long *)param_1[0x15] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x15] + 8))();
  }
  param_1[0x15] = 0;
  FUN_1001fcc5c(param_1 + 0xe);
  FUN_1004f0a9c(param_1 + 0xb);
  FUN_10014f51c(param_1 + 8);
  FUN_10016b7e0(param_1 + 5);
  param_1[2] = &PTR_FUN_10146c930;
  FUN_1001f3bd4(param_1 + 3,1);
  *param_1 = &PTR____cxa_pure_virtual_10146ef88;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return param_1;
}




void thunk_FUN_1001fdd28(void)

{
  FUN_1001fdd28();
  return;
}




void FUN_1001fe060(long param_1)

{
  FUN_1001fdd28(param_1 + -0x28);
  return;
}




void FUN_1001fe068(long param_1)

{
  FUN_1001fdd28(param_1 + -0x40);
  return;
}




void FUN_1001fe070(long param_1)

{
  FUN_1001fdd28(param_1 + -0x58);
  return;
}




void FUN_1001fe078(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1001fdd28();
  operator_delete(pvVar1);
  return;
}




void FUN_1001fe08c(long param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1001fdd28(param_1 + -0x28);
  operator_delete(pvVar1);
  return;
}




void FUN_1001fe0a4(long param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1001fdd28(param_1 + -0x40);
  operator_delete(pvVar1);
  return;
}




void FUN_1001fe0bc(long param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1001fdd28(param_1 + -0x58);
  operator_delete(pvVar1);
  return;
}




void FUN_1001fe0d4(long param_1)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  
  iVar2 = FUN_10011a354(0);
  if (iVar2 == 0) goto LAB_1001fe15c;
  iVar2 = FUN_100533fe4(*(undefined8 *)(param_1 + 8));
  if (iVar2 != 0) {
    lVar3 = FUN_10002f320();
    uVar1 = *(uint *)(lVar3 + 0x67a4);
    FUN_10002f320();
    if ((uVar1 >> 2 & 1) != 0) {
      FUN_1000312bc();
      goto LAB_1001fe15c;
    }
    uVar4 = FUN_100030e68();
    if (((uVar4 & 1) != 0) || (uVar4 = FUN_1001e307c(), (uVar4 & 1) != 0)) goto LAB_1001fe15c;
    FUN_1002c5224(*(undefined8 *)(param_1 + 8));
    iVar2 = FUN_100532f24();
    if ((iVar2 != 0) || (uVar4 = FUN_1001ad5a8(), (uVar4 & 1) != 0)) goto LAB_1001fe15c;
    if ((*(long *)(param_1 + 0xe0) != 0) && (uVar4 = FUN_1001f3748(), (uVar4 & 1) == 0)) {
      FUN_1001fcb14(param_1 + 0x70,0);
      *(undefined1 *)(param_1 + 0x132) = 1;
      goto LAB_1001fe15c;
    }
  }
  iVar2 = FUN_10052b78c();
  if (iVar2 != 0) {
    FUN_10052b84c();
  }
LAB_1001fe15c:
  if (*(char *)(param_1 + 0x134) != '\0') {
    FUN_1001fe194(param_1);
    *(undefined1 *)(param_1 + 0x134) = 0;
  }
  return;
}




/* WARNING: Type propagation algorithm not settling */

void FUN_1001fe194(long *******param_1)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  void *local_88 [2];
  char local_71;
  long *******local_70;
  long *******local_68;
  long *******local_60;
  code *local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  
  uVar2 = FUN_1001311d4();
  if ((uVar2 & 1) != 0) {
    return;
  }
  uVar3 = FUN_10030df60();
  iVar1 = FUN_10030e5d8();
  while( true ) {
    if (iVar1 < 1) {
      return;
    }
    lVar4 = FUN_10030e510(uVar3);
    if (*(int *)(lVar4 + 0x378) != 6) break;
    FUN_1001e55b0(*(undefined4 *)(lVar4 + 0x37c),lVar4 + 0x358,*(undefined1 *)(lVar4 + 0x380),
                  *(undefined1 *)(lVar4 + 0x381));
    FUN_10030e51c(uVar3);
    iVar1 = FUN_10030e5d8(uVar3);
  }
  switch(*(int *)(lVar4 + 0x378)) {
  case 1:
    local_68 = (long *******)0x0;
    local_60 = (long *******)0x0;
    local_70 = (long *******)&local_68;
    lVar4 = FUN_100223e2c(lVar4,&local_70);
    FUN_1001ff89c(&local_70,local_68);
    goto joined_r0x0001001fe290;
  case 2:
    lVar4 = FUN_1001fe990();
joined_r0x0001001fe290:
    if (lVar4 != 0) {
      local_70 = (long *******)FUN_1001fe980;
      local_58 = (code *)0x0;
      uStack_50 = 0;
      local_60 = (long *******)0x0;
      local_68 = param_1;
      local_48 = DAT_101d91894;
      FUN_10001554c(lVar4 + 8,&local_70);
    }
    break;
  case 3:
    uVar7 = FUN_1004e0150("MENU_DIALOG_DODGE_PENALTY_TITLE",0);
    uVar5 = FUN_1004e0150("MENU_DIALOG_DODGE_PENALTY_BODY",0);
    uVar6 = FUN_1004e0150("MENU_DIALOG_DODGE_PENALTY_BUTTON_TITLE",0);
    FUN_1001e3288(uVar7,uVar5,uVar6,8,param_1,thunk_FUN_1001fe7fc);
    break;
  case 4:
    uVar2 = *(ulong *)(lVar4 + 0x338);
    if (-1 < (char)*(byte *)(lVar4 + 0x347)) {
      uVar2 = (ulong)*(byte *)(lVar4 + 0x347);
    }
    if (uVar2 != 0) {
      std::string::operator=((string *)(param_1 + 0x23),(string *)(lVar4 + 0x330));
    }
    FUN_1004e3170(&local_70,&DAT_101d91198);
    FUN_1001e3120(lVar4 + 0x348,lVar4 + 0x358,lVar4 + 0x368,&local_70,param_1,thunk_FUN_1001fe7fc,0)
    ;
    if (local_68 != (long *******)0x0) {
      operator_delete__(local_68);
    }
    if (uVar2 != 0) goto LAB_1001fe4ac;
    break;
  case 5:
    (*(code *)(*param_1)[3])(param_1,lVar4 + 0x178);
    break;
  case 7:
    std::string::operator=((string *)(param_1 + 0x23),(string *)(lVar4 + 0x330));
    lVar4 = FUN_10032a0bc();
    if (*(char *)(lVar4 + 0x60) == '\0') {
      lVar4 = FUN_10032a0bc();
      local_68 = (long *******)0x0;
      local_58 = FUN_1001ffb74;
      local_70 = param_1;
      local_60 = param_1;
      FUN_1000be5e4(lVar4 + 0x30,&local_70);
    }
    else {
      uVar2 = FUN_1001fe900(param_1);
      if ((uVar2 & 1) == 0) {
        *(undefined1 *)((long)param_1 + 0x134) = 1;
      }
    }
LAB_1001fe4ac:
    FUN_10030e5d0(uVar3);
    return;
  case 10:
    if (*(int *)(lVar4 + 0x168) != 0) {
      uVar7 = FUN_10002f320();
      FUN_10001549c(&local_70,"inboxMessage");
      FUN_10001549c(local_88,"opulent");
      FUN_1000315c4(uVar7,&local_70,local_88);
      if (local_71 < '\0') {
        operator_delete(local_88[0]);
      }
      if ((long)local_60 < 0) {
        operator_delete(local_70);
      }
      uVar7 = FUN_10002f320();
      FUN_10001549c(&local_70,"inboxMessage");
      FUN_100031670(uVar7,&local_70,lVar4 + 0x168);
      if ((long)local_60 < 0) {
        operator_delete(local_70);
      }
    }
  }
  FUN_10030e51c(uVar3);
  return;
}




void FUN_1001fe4cc(long param_1)

{
  undefined8 uVar1;
  long local_40 [3];
  code *pcStack_28;
  
  uVar1 = FUN_10016c2f0();
  FUN_10016ba4c(uVar1,1);
  uVar1 = FUN_100307fe8();
  local_40[1] = 0;
  pcStack_28 = thunk_FUN_1001fe5c8;
  local_40[0] = param_1;
  local_40[2] = param_1;
  FUN_1000be5e4(uVar1,local_40);
  FUN_1001fe538(param_1);
  FUN_1001fe5c8(param_1);
  FUN_1001fe670(param_1);
  FUN_1001fd460(param_1 + 0xa0);
  return;
}




void FUN_1001fe538(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  iVar1 = FUN_100131218();
  if ((iVar1 != 0) && ((DAT_101e43c4c & 1) == 0)) {
    uVar2 = FUN_1004e0150("MAIN_NDA_WARNING_TITLE",0);
    uVar3 = FUN_1004e0150("MAIN_NDA_WARNING_DIALOG_TEXT",0);
    uVar4 = FUN_1004e0150("MAIN_NDA_WARNING_ACCEPT",0);
    FUN_1001e3090(uVar2,uVar3,uVar4,param_1,0);
    DAT_101e43c4c = 1;
  }
  return;
}




void FUN_1001fe5c8(long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  
  lVar2 = FUN_10012fe64();
  lVar3 = FUN_1004d29d0();
  if (((*(char *)(param_1 + 0x130) != '\0' && lVar2 + 0x1c20 <= lVar3) &&
      (iVar1 = FUN_100533fe4(*(undefined8 *)(param_1 + 8)), iVar1 != 0)) &&
     (iVar1 = FUN_1001f3748(*(undefined8 *)(param_1 + 0xe0)), iVar1 != 0)) {
    FUN_1002c5224(*(undefined8 *)(param_1 + 8));
    iVar1 = FUN_100532f24();
    if ((iVar1 == 0) && (FUN_100307fe8(), DAT_101d23848 == '\0')) {
      FUN_100307fe8();
      iVar1 = FUN_100307f8c();
      if ((iVar1 != 0) && (uVar4 = FUN_1001db518(), (uVar4 & 1) == 0)) {
        FUN_100224680("");
        FUN_100307fe8();
        DAT_101d23848 = '\x01';
      }
    }
  }
  return;
}




void FUN_1001fe670(long param_1)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  
  FUN_1002c5224(*(undefined8 *)(param_1 + 8));
  FUN_100532f24();
  lVar1 = FUN_1000bdb98();
  plVar2 = (long *)(lVar1 + 0x10);
  plVar3 = (long *)*plVar2;
  plVar4 = plVar2;
  if (plVar3 != (long *)0x0) {
    do {
      if (*(uint *)(plVar3 + 4) >= 0xd1bb1e68) {
        plVar4 = plVar3;
      }
      plVar3 = (long *)plVar3[*(uint *)(plVar3 + 4) < 0xd1bb1e68];
    } while (plVar3 != (long *)0x0);
    if (((plVar4 != plVar2) && (*(uint *)(plVar4 + 4) < 0xd1bb1e69)) && ((int)plVar4[5] != 0)) {
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




void FUN_1001fe744(long param_1)

{
  int iVar1;
  uint *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  
  puVar2 = (uint *)FUN_100307fe8();
  if (*puVar2 != 0) {
    lVar6 = (ulong)*puVar2 << 5;
    plVar5 = *(long **)(puVar2 + 2);
    do {
      if (*plVar5 == param_1) {
        FUN_1000c044c(puVar2,plVar5,plVar5 + 4);
        break;
      }
      lVar6 = lVar6 + -0x20;
      plVar5 = plVar5 + 4;
    } while (lVar6 != 0);
  }
  uVar3 = FUN_10016c2f0();
  FUN_10016ba4c(uVar3,0);
  uVar4 = FUN_100126b6c();
  if ((uVar4 & 1) == 0) {
    plVar5 = *(long **)(param_1 + 0xf8);
    if ((*(byte *)((long)plVar5 + 0x2c2c) >> 2 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001001fe7f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar5 + 0x148))(plVar5,0);
      return;
    }
  }
  else {
    iVar1 = FUN_10020d968(*(undefined8 *)(param_1 + 0xf0));
    if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001001fe7c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(long **)(param_1 + 0xf0) + 0x40))();
      return;
    }
  }
  return;
}




void FUN_1001fe7fc(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_10030df60();
  FUN_10030e56c(uVar1,(undefined1 *)(param_1 + 0x118));
  if (*(char *)(param_1 + 0x12f) < '\0') {
    **(undefined1 **)(param_1 + 0x118) = 0;
    *(undefined8 *)(param_1 + 0x120) = 0;
  }
  else {
    *(undefined1 *)(param_1 + 0x118) = 0;
    *(undefined1 *)(param_1 + 0x12f) = 0;
  }
  *(undefined1 *)(param_1 + 0x134) = 1;
  return;
}




void FUN_1001fe850(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_10030df60();
  FUN_10030e56c(uVar1,(undefined1 *)(param_1 + 0x118));
  if (*(char *)(param_1 + 0x12f) < '\0') {
    **(undefined1 **)(param_1 + 0x118) = 0;
    *(undefined8 *)(param_1 + 0x120) = 0;
  }
  else {
    *(undefined1 *)(param_1 + 0x118) = 0;
    *(undefined1 *)(param_1 + 0x12f) = 0;
  }
  *(undefined1 *)(param_1 + 0x134) = 1;
  return;
}




void FUN_1001fe8a4(long param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar2 = FUN_10032a0bc();
  uVar1 = *(uint *)(lVar2 + 0x30);
  if (uVar1 != 0) {
    lVar3 = (ulong)uVar1 << 5;
    plVar4 = *(long **)(lVar2 + 0x38);
    do {
      if (*plVar4 == param_1) {
        FUN_1000c044c((uint *)(lVar2 + 0x30),plVar4,plVar4 + 4);
        break;
      }
      lVar3 = lVar3 + -0x20;
      plVar4 = plVar4 + 4;
    } while (lVar3 != 0);
  }
  FUN_1001fe900(param_1);
  return;
}




byte FUN_1001fe900(undefined8 param_1)

{
  byte bVar1;
  long lVar2;
  code *local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  
  bVar1 = DAT_101e43c4d;
  if ((DAT_101e43c4d & 1) == 0) {
    DAT_101e43c4d = 1;
    lVar2 = FUN_1002237e8();
    if (lVar2 == 0) {
      FUN_1001fe850(param_1);
    }
    else {
      local_28 = DAT_101d91894;
      local_50 = thunk_FUN_1001fe850;
      local_38 = 0;
      uStack_30 = 0;
      local_40 = 0;
      uStack_48 = param_1;
      FUN_10001554c(lVar2 + 8,&local_50);
    }
  }
  return bVar1 ^ 1;
}




void FUN_1001fe980(long param_1)

{
  *(undefined1 *)(param_1 + 0x134) = 1;
  return;
}




void thunk_FUN_1001fe7fc(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_10030df60();
  FUN_10030e56c(uVar1,(undefined1 *)(param_1 + 0x118));
  if (*(char *)(param_1 + 0x12f) < '\0') {
    **(undefined1 **)(param_1 + 0x118) = 0;
    *(undefined8 *)(param_1 + 0x120) = 0;
  }
  else {
    *(undefined1 *)(param_1 + 0x118) = 0;
    *(undefined1 *)(param_1 + 0x12f) = 0;
  }
  *(undefined1 *)(param_1 + 0x134) = 1;
  return;
}




void * FUN_1001fe990(void)

{
  long *plVar1;
  long lVar2;
  void *pvVar3;
  undefined8 uVar4;
  
  plVar1 = operator_new(0x1e10);
  lVar2 = thunk_FUN_100268e10();
  *(uint *)(lVar2 + 0x84) = *(uint *)(lVar2 + 0x84) | 0x20;
  pvVar3 = operator_new(0x278);
  uVar4 = thunk_FUN_1001906ac();
  FUN_100190928(uVar4,plVar1);
  (**(code **)(*plVar1 + 0x138))(0x3f000000,plVar1,1,4,1);
  FUN_1001e7f30(pvVar3,0,1,0,1);
  return pvVar3;
}




void FUN_1001fea18(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  void *local_38;
  undefined1 auStack_30 [8];
  void *local_28;
  
  uVar1 = FUN_1004e0150("MENU_TOASTIE_INVITED_TO_GUILD_NO_PLAYER",0);
  thunk_FUN_1004e439c(auStack_30,uVar1);
  FUN_1004e3120(auStack_40,"[GUILD_NAME]");
  FUN_1004e3bc4(auStack_30,0,auStack_40,param_2);
  if (local_38 != (void *)0x0) {
    operator_delete__(local_38);
  }
  FUN_1001e55b0(0xbf800000,auStack_30,0,1);
  if (local_28 != (void *)0x0) {
    operator_delete__(local_28);
  }
  return;
}




void thunk_FUN_1001fea18(void)

{
  FUN_1001fea18();
  return;
}




void FUN_1001feaac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  void *local_38;
  undefined1 auStack_30 [8];
  void *local_28;
  
  uVar1 = FUN_1004e0150("MENU_TOASTIE_INVITED_TO_USER_TEAM",0);
  thunk_FUN_1004e439c(auStack_30,uVar1);
  FUN_1004e3120(auStack_40,"[TEAM_NAME]");
  FUN_1004e3bc4(auStack_30,0,auStack_40,param_2);
  if (local_38 != (void *)0x0) {
    operator_delete__(local_38);
  }
  FUN_1004e3120(auStack_40,"[PLAYER_HANDLE]");
  FUN_1004e3bc4(auStack_30,0,auStack_40,param_3);
  if (local_38 != (void *)0x0) {
    operator_delete__(local_38);
  }
  FUN_1001e55b0(0xbf800000,auStack_30,0,1);
  if (local_28 != (void *)0x0) {
    operator_delete__(local_28);
  }
  return;
}




void thunk_FUN_1001feaac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  void *pvStack_38;
  undefined1 auStack_30 [8];
  void *pvStack_28;
  
  uVar1 = FUN_1004e0150("MENU_TOASTIE_INVITED_TO_USER_TEAM",0);
  thunk_FUN_1004e439c(auStack_30,uVar1);
  FUN_1004e3120(auStack_40,"[TEAM_NAME]");
  FUN_1004e3bc4(auStack_30,0,auStack_40,param_2);
  if (pvStack_38 != (void *)0x0) {
    operator_delete__(pvStack_38);
  }
  FUN_1004e3120(auStack_40,"[PLAYER_HANDLE]");
  FUN_1004e3bc4(auStack_30,0,auStack_40,param_3);
  if (pvStack_38 != (void *)0x0) {
    operator_delete__(pvStack_38);
  }
  FUN_1001e55b0(0xbf800000,auStack_30,0,1);
  if (pvStack_28 != (void *)0x0) {
    operator_delete__(pvStack_28);
  }
  return;
}




void FUN_1001feb74(void)

{
  int iVar1;
  undefined8 uVar2;
  void *local_38 [2];
  char local_21;
  undefined8 local_20;
  undefined8 uStack_18;
  
  FUN_100307fe8();
  DAT_101d23848 = 0;
  iVar1 = FUN_1004eef10();
  if (iVar1 != 0) {
    local_20 = 0;
    uStack_18 = 0;
    FUN_10003330c(local_38,&DAT_101d91198);
    FUN_1004ef16c(local_38);
    FUN_10001617c(&local_20,local_38);
    uVar2 = FUN_10015d3ec();
    FUN_100166b08(uVar2,&local_20);
    if (local_21 < '\0') {
      operator_delete(local_38[0]);
    }
    FUN_10001629c(&local_20,1);
  }
  return;
}




void thunk_FUN_1001feb74(void)

{
  int iVar1;
  undefined8 uVar2;
  void *apvStack_38 [2];
  char cStack_21;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  FUN_100307fe8();
  DAT_101d23848 = 0;
  iVar1 = FUN_1004eef10();
  if (iVar1 != 0) {
    uStack_20 = 0;
    uStack_18 = 0;
    FUN_10003330c(apvStack_38,&DAT_101d91198);
    FUN_1004ef16c(apvStack_38);
    FUN_10001617c(&uStack_20,apvStack_38);
    uVar2 = FUN_10015d3ec();
    FUN_100166b08(uVar2,&uStack_20);
    if (cStack_21 < '\0') {
      operator_delete(apvStack_38[0]);
    }
    FUN_10001629c(&uStack_20,1);
  }
  return;
}




void FUN_1001febf8(long param_1)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  
  iVar1 = FUN_1000ec278();
  if ((iVar1 != 0) && (iVar1 = FUN_100533fe4(*(undefined8 *)(param_1 + 8)), iVar1 != 0)) {
    lVar2 = FUN_1001340a4();
    if ((0 < *(int *)(lVar2 + 0x10)) &&
       (uVar3 = FUN_1001e7fb0("SEASON_REWARDS_NOTIFICATION_POPUP"), (uVar3 & 1) == 0)) {
      FUN_1001fec54();
      return;
    }
  }
  return;
}




void FUN_1001fec54(void)

{
  long *plVar1;
  long lVar2;
  void *pvVar3;
  undefined8 uVar4;
  
  plVar1 = operator_new(0x2f28);
  lVar2 = thunk_FUN_10025ea78();
  *(uint *)(lVar2 + 0x84) = *(uint *)(lVar2 + 0x84) | 0x20;
  pvVar3 = operator_new(0x278);
  uVar4 = thunk_FUN_1001906ac();
  FUN_100190928(uVar4,plVar1);
  (**(code **)(*plVar1 + 0x138))(0x3f000000,plVar1,1,4,1);
  FUN_1001e7f30(pvVar3,"SEASON_REWARDS_NOTIFICATION_POPUP",1,0,1);
  return;
}




void FUN_1001fecd8(long param_1)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  
  FUN_1001fe670();
  FUN_1001fe5c8(param_1);
  iVar1 = FUN_1001e7f1c();
  if ((iVar1 != 0) && (iVar1 = FUN_10015d3f8(), iVar1 != 0)) {
    lVar2 = FUN_1001340e0();
    if ((*(char *)(lVar2 + 8) != '\0') && (uVar3 = FUN_10012f9d8(), (uVar3 & 1) == 0)) {
      lVar2 = FUN_10015d3ec();
      if (*(int *)(lVar2 + 0x55d0) == 4) {
        iVar1 = FUN_10031615c(0x19);
        if (iVar1 != 0) {
          FUN_10021d2c4();
        }
        FUN_10012f90c(1);
      }
    }
    if ((*(char *)(param_1 + 0x135) == '\0') &&
       (uVar3 = FUN_10012c81c("AutoBuySettingPopupShown",0), (uVar3 & 1) == 0)) {
      lVar2 = FUN_10015d3ec();
      if (1 < *(uint *)(lVar2 + 0x55d0)) {
        FUN_10021d4a4();
        FUN_10012c348("AutoBuySettingPopupShown",1);
        *(undefined1 *)(param_1 + 0x135) = 1;
      }
    }
    if ((*(char *)(param_1 + 0x136) == '\0') &&
       (uVar3 = FUN_10012c81c("AutoLevelSettingPopupShown",0), (uVar3 & 1) == 0)) {
      lVar2 = FUN_10015d3ec();
      if (1 < *(uint *)(lVar2 + 0x55d0)) {
        FUN_10021d634();
        FUN_10012c348("AutoLevelSettingPopupShown",1);
        *(undefined1 *)(param_1 + 0x136) = 1;
      }
    }
  }
  return;
}




void thunk_FUN_1001fe670(void)

{
  FUN_1001fe670();
  return;
}




long FUN_1001fedec(long param_1)

{
  long lVar1;
  
  FUN_1002c5224(*(undefined8 *)(param_1 + 8));
  FUN_10053255c();
  FUN_1001fcb14(param_1 + 0x70,0);
  *(undefined1 *)(param_1 + 0x132) = 1;
  lVar1 = 0;
  if (*(long *)(param_1 + 0xe0) != 0) {
    lVar1 = *(long *)(param_1 + 0xe0) + 0x18;
  }
  return lVar1;
}




undefined8 FUN_1001fee38(long param_1)

{
  if (*(char *)(param_1 + 0x130) != '\0') {
    FUN_1002c5224(*(undefined8 *)(param_1 + 8));
    FUN_10053255c();
    FUN_1001fcb14(param_1 + 0x70,3);
    *(undefined1 *)(param_1 + 0x132) = 1;
  }
  return 0;
}




undefined8 FUN_1001fee80(long param_1,int *param_2)

{
  if (*(char *)(param_1 + 0x130) != '\0') {
    FUN_1002c5224(*(undefined8 *)(param_1 + 8));
    FUN_10053255c();
    FUN_1001fcb14(param_1 + 0x70,2);
    *(undefined1 *)(param_1 + 0x132) = 1;
    if (*param_2 != 0) {
      (**(code **)(**(long **)(param_1 + 0x100) + 0x198))(*(long **)(param_1 + 0x100),param_2);
    }
  }
  return 0;
}




long FUN_1001feee8(long param_1)

{
  long lVar1;
  
  if (*(char *)(param_1 + 0x130) != '\0') {
    FUN_1002c5224(*(undefined8 *)(param_1 + 8));
    FUN_10053255c();
    FUN_1001fcb14(param_1 + 0x70,1);
    *(undefined1 *)(param_1 + 0x132) = 1;
  }
  lVar1 = 0;
  if (*(long *)(param_1 + 0x108) != 0) {
    lVar1 = *(long *)(param_1 + 0x108) + 0x30;
  }
  return lVar1;
}




long FUN_1001fef3c(long param_1,int *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  
  if (*(char *)(param_1 + 0x130) != '\0') {
    FUN_1002c5224(*(undefined8 *)(param_1 + 8));
    FUN_10053255c();
    puVar1 = &DAT_101d91198;
    if (*param_2 != 0) {
      puVar1 = (undefined8 *)(*(long *)(param_2 + 2) + (ulong)(*param_2 - 1) * 0x18);
    }
    FUN_1001f3758(*(undefined8 *)(param_1 + 0xe0),puVar1);
  }
  lVar2 = 0;
  if (*(long *)(param_1 + 0xe0) != 0) {
    lVar2 = *(long *)(param_1 + 0xe0) + 0x18;
  }
  return lVar2;
}




long FUN_1001fefac(long param_1,int *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  
  if (*(char *)(param_1 + 0x130) != '\0') {
    FUN_1002c5224(*(undefined8 *)(param_1 + 8));
    FUN_10053255c();
    puVar1 = &DAT_101d91198;
    if (*param_2 != 0) {
      puVar1 = (undefined8 *)(*(long *)(param_2 + 2) + (ulong)(*param_2 - 1) * 0x18);
    }
    FUN_1001f3768(*(undefined8 *)(param_1 + 0xe0),puVar1);
  }
  lVar2 = 0;
  if (*(long *)(param_1 + 0xe0) != 0) {
    lVar2 = *(long *)(param_1 + 0xe0) + 0x18;
  }
  return lVar2;
}




undefined8 FUN_1001ff01c(long param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_100126b6c();
  if (((uVar1 & 1) == 0) && (*(char *)(param_1 + 0x130) != '\0')) {
    FUN_1002c5224(*(undefined8 *)(param_1 + 8));
    FUN_10053255c();
    FUN_1001fcb14(param_1 + 0x70,4);
    *(undefined1 *)(param_1 + 0x132) = 1;
    (**(code **)(**(long **)(param_1 + 0xf8) + 0x178))(*(long **)(param_1 + 0xf8),1,&DAT_101d91198);
  }
  return 0;
}




long FUN_1001ff088(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = FUN_100126b6c();
  if ((uVar1 & 1) == 0) {
    if (*(char *)(param_1 + 0x130) != '\0') {
      FUN_1002c5224(*(undefined8 *)(param_1 + 8));
      FUN_10053255c();
      FUN_1001fcb14(param_1 + 0x70,5);
      *(undefined1 *)(param_1 + 0x132) = 1;
    }
    lVar2 = 0;
    if (*(long *)(param_1 + 0xf8) != 0) {
      lVar2 = *(long *)(param_1 + 0xf8) + 0x2c68;
    }
  }
  else {
    lVar2 = 0;
  }
  return lVar2;
}




undefined8 FUN_1001ff0f0(long param_1)

{
  if (*(char *)(param_1 + 0x130) != '\0') {
    FUN_1002c5224(*(undefined8 *)(param_1 + 8));
    FUN_10053255c();
    FUN_1001fcb14(param_1 + 0x70,0);
    *(undefined1 *)(param_1 + 0x132) = 1;
    FUN_1001f37a8(*(undefined8 *)(param_1 + 0xe0));
  }
  return 0;
}




undefined8 FUN_1001ff140(long param_1,int *param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  void *local_38 [2];
  char local_21;
  
  if (*(char *)(param_1 + 0x130) != '\0') {
    uVar2 = FUN_10015d3ec();
    iVar1 = *param_2;
    lVar3 = *(long *)(param_2 + 2);
    FUN_10001549c(local_38,"");
    FUN_1001663b8(uVar2,lVar3 + (ulong)(iVar1 - 1) * 0x18,local_38);
    if (local_21 < '\0') {
      operator_delete(local_38[0]);
    }
  }
  return 0;
}




undefined8 FUN_1001ff1bc(long param_1)

{
  if (*(char *)(param_1 + 0x130) != '\0') {
    FUN_1002c5224(*(undefined8 *)(param_1 + 8));
    FUN_10053255c();
    FUN_1001fcb14(param_1 + 0x70,0);
    *(undefined1 *)(param_1 + 0x132) = 1;
    FUN_1001f3b40(*(undefined8 *)(param_1 + 0xe0));
  }
  return 0;
}




void FUN_1001ff20c(long param_1)

{
  if (*(char *)(param_1 + 0x130) != '\0') {
    FUN_1001fcb14(param_1 + 0x70,0);
    *(undefined1 *)(param_1 + 0x132) = 1;
  }
  return;
}




void FUN_1001ff244(long param_1)

{
  FUN_1002c5030(*(undefined8 *)(param_1 + 8));
  FUN_1001f371c(*(undefined8 *)(param_1 + 0xe0));
  return;
}




void FUN_1001ff26c(long param_1)

{
  if ((*(char *)(param_1 + 0x130) != '\0') && (*(long *)(param_1 + 0xe8) != 0)) {
    FUN_1001fcb14(param_1 + 0x70,3);
    *(undefined1 *)(param_1 + 0x132) = 1;
    FUN_1001fe670(param_1);
    FUN_100251c30(*(undefined8 *)(param_1 + 0xe8));
    return;
  }
  return;
}




void FUN_1001ff2c4(long param_1)

{
  if ((*(char *)(param_1 + 0x130) != '\0') && (*(long *)(param_1 + 0xe8) != 0)) {
    FUN_1001fcb14(param_1 + 0x70,3);
    *(undefined1 *)(param_1 + 0x132) = 1;
    FUN_1001fe670(param_1);
    FUN_100251c30(*(undefined8 *)(param_1 + 0xe8));
    return;
  }
  return;
}




void FUN_1001ff31c(undefined8 param_1,uint param_2)

{
  FUN_1001fdbb8(param_1,~param_2 >> 0x1f);
  return;
}




void FUN_1001ff328(long param_1,uint param_2)

{
  FUN_1001fdbb8(param_1 + -0x28,~param_2 >> 0x1f);
  return;
}




void FUN_1001ff338(long param_1)

{
  FUN_1001db540();
  *(undefined1 *)(param_1 + 0x134) = 1;
  FUN_1001febf8(param_1);
  return;
}




void FUN_1001ff364(undefined8 param_1,undefined8 param_2)

{
  void *pvVar1;
  long lVar2;
  void *pvVar3;
  undefined8 uVar4;
  code *local_50;
  void *pvStack_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  
  pvVar1 = operator_new(0x5558);
  lVar2 = thunk_FUN_100253d30();
  *(uint *)(lVar2 + 0x84) = *(uint *)(lVar2 + 0x84) | 0x20;
  FUN_1002549f0(lVar2,param_2);
  *(uint *)((long)pvVar1 + 0x84) = *(uint *)((long)pvVar1 + 0x84) | 0xc;
  FUN_100255700(pvVar1,1);
  pvVar3 = operator_new(0x278);
  uVar4 = thunk_FUN_1001906ac();
  FUN_100190928(uVar4,pvVar1);
  local_28 = FUN_100644a94("UI::EVENT_MENU_CLOSE_PLATFORM_NOTIFICATION");
  local_50 = FUN_1001ff424;
  local_38 = 0;
  uStack_30 = 0;
  local_40 = 0;
  pvStack_48 = pvVar3;
  FUN_10001554c((long)pvVar3 + 8,&local_50);
  FUN_1001e7f30(pvVar3,0,1,0,1);
  return;
}




void FUN_1001ff424(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  FUN_100190b94(param_1,param_4,param_5);
  return;
}




void FUN_1001ff430(long param_1,int *param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  FUN_10032523c();
  iVar1 = FUN_1003252f0();
  *(bool *)(param_1 + 0x133) = iVar1 == 1;
  iVar1 = FUN_1001fcc30(param_1 + 0x70);
  FUN_1002c50fc(*(undefined8 *)(param_1 + 8),*(char *)(param_1 + 0x133) != '\0' || iVar1 != 0,
                iVar1 != 0);
  if (*param_2 - 2U < 2) {
    FUN_1002c5224(*(undefined8 *)(param_1 + 8));
    FUN_10053255c();
  }
  else if (*param_2 == 1) {
    lVar2 = FUN_1004f0338();
    lVar4 = *(long *)(lVar2 + 0x138);
    lVar3 = FUN_1004f1a74(0);
    if (lVar3 < lVar4) {
      FUN_1001ff4e4(lVar3,lVar2);
    }
  }
  FUN_1001fe670(param_1);
  return;
}




void FUN_1001ff4e4(undefined8 param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  void *pvVar3;
  undefined8 uVar4;
  code *local_50;
  void *pvStack_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  
  plVar1 = operator_new(0x3518);
  lVar2 = thunk_FUN_100240a58();
  *(uint *)(lVar2 + 0x84) = *(uint *)(lVar2 + 0x84) | 0x20;
  FUN_100241aa8(lVar2,*(undefined4 *)(param_2 + 0x130),*(undefined8 *)(param_2 + 0x138),
                *(undefined4 *)(param_2 + 0x140),*(undefined4 *)(param_2 + 0x144),param_2 + 0x118);
  pvVar3 = operator_new(0x278);
  uVar4 = thunk_FUN_1001906ac();
  FUN_100190928(uVar4,plVar1);
  local_28 = FUN_100644a94("UI::EVENT_MENU_CLOSE_PLATFORM_NOTIFICATION");
  local_50 = FUN_1001ff424;
  local_38 = 0;
  uStack_30 = 0;
  local_40 = 0;
  pvStack_48 = pvVar3;
  FUN_10001554c((long)pvVar3 + 8,&local_50);
  (**(code **)(*plVar1 + 0x138))(0x3f000000,plVar1,1,4,1);
  FUN_1001e7f30(pvVar3,0,1,0,1);
  return;
}




void thunk_FUN_1001fe850(void)

{
  FUN_1001fe850();
  return;
}




void FUN_1001ff5c0(void)

{
  ulong uVar1;
  int iVar2;
  long lVar3;
  void *local_50 [2];
  char local_39;
  float local_38;
  float local_34;
  
  if (DAT_101d23050 != 0) {
    lVar3 = FUN_10002f320();
    uVar1 = *(ulong *)(lVar3 + 0xe1a0);
    if (-1 < (char)*(byte *)(lVar3 + 0xe1af)) {
      uVar1 = (ulong)*(byte *)(lVar3 + 0xe1af);
    }
    if ((uVar1 != 0x12) ||
       (iVar2 = std::string::compare(lVar3 + 0xe198,0,(char *)0xffffffffffffffff,0x1013e4aba),
       iVar2 != 0)) {
      FUN_100641464(&local_34,&local_38);
      FUN_10001549c(local_50,"endOfSeasonRewards");
      iVar2 = FUN_1000e6f00(local_34 * 0.5,local_38 * 0.5,0x3f99999a,&DAT_101d23050,local_50,1);
      if (local_39 < '\0') {
        operator_delete(local_50[0]);
      }
      if (iVar2 != 0) {
        FUN_1000ec1cc(&DAT_101d23050,0);
      }
    }
  }
  return;
}




void FUN_1001ff6c8(uint *param_1,int param_2)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = *(long *)(param_1 + 2);
  if (lVar3 != 0) {
    uVar2 = *param_1;
    if (uVar2 != 0) {
      lVar4 = 0;
      do {
        lVar1 = lVar3 + lVar4;
        if (*(char *)(lVar1 + 0x7f) < '\0') {
          operator_delete(*(void **)(lVar1 + 0x68));
        }
        if (*(char *)(lVar1 + 0x67) < '\0') {
          operator_delete(*(void **)(lVar3 + lVar4 + 0x50));
        }
        lVar1 = lVar3 + lVar4;
        if (*(char *)(lVar1 + 0x4f) < '\0') {
          operator_delete(*(void **)(lVar1 + 0x38));
        }
        if (*(char *)(lVar1 + 0x37) < '\0') {
          operator_delete(*(void **)(lVar3 + lVar4 + 0x20));
        }
        if (*(char *)(lVar3 + lVar4 + 0x1f) < '\0') {
          operator_delete(*(void **)(lVar3 + lVar4 + 8));
        }
        lVar4 = lVar4 + 0x80;
      } while ((ulong)uVar2 * 0x80 - lVar4 != 0);
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




void FUN_1001ff79c(uint *param_1,int param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 2);
  if (lVar1 != 0) {
    if (*param_1 != 0) {
      lVar2 = (ulong)*param_1 * 0x28;
      do {
        if (*(void **)(lVar1 + 0x20) != (void *)0x0) {
          operator_delete__(*(void **)(lVar1 + 0x20));
          *(undefined8 *)(lVar1 + 0x18) = 0;
          *(undefined8 *)(lVar1 + 0x20) = 0;
        }
        FUN_10014ebf8(lVar1,*(undefined8 *)(lVar1 + 8));
        lVar1 = lVar1 + 0x28;
        lVar2 = lVar2 + -0x28;
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




void FUN_1001ff820(uint *param_1,int param_2)

{
  long lVar1;
  char *pcVar2;
  
  if (*(long *)(param_1 + 2) != 0) {
    if (*param_1 != 0) {
      lVar1 = (ulong)*param_1 * 0x28;
      pcVar2 = (char *)(*(long *)(param_1 + 2) + 0x27);
      do {
        if (*pcVar2 < '\0') {
          operator_delete(*(void **)(pcVar2 + -0x17));
        }
        pcVar2 = pcVar2 + 0x28;
        lVar1 = lVar1 + -0x28;
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




void FUN_1001ff89c(undefined8 param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    FUN_1001ff89c(param_1,*param_2);
    FUN_1001ff89c(param_1,param_2[1]);
    operator_delete(param_2);
    return;
  }
  return;
}




void thunk_FUN_1001fe0d4(long param_1)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  
  iVar2 = FUN_10011a354(0);
  if (iVar2 == 0) goto LAB_1001fe15c;
  iVar2 = FUN_100533fe4(*(undefined8 *)(param_1 + 8));
  if (iVar2 != 0) {
    lVar3 = FUN_10002f320();
    uVar1 = *(uint *)(lVar3 + 0x67a4);
    FUN_10002f320();
    if ((uVar1 >> 2 & 1) != 0) {
      FUN_1000312bc();
      goto LAB_1001fe15c;
    }
    uVar4 = FUN_100030e68();
    if (((uVar4 & 1) != 0) || (uVar4 = FUN_1001e307c(), (uVar4 & 1) != 0)) goto LAB_1001fe15c;
    FUN_1002c5224(*(undefined8 *)(param_1 + 8));
    iVar2 = FUN_100532f24();
    if ((iVar2 != 0) || (uVar4 = FUN_1001ad5a8(), (uVar4 & 1) != 0)) goto LAB_1001fe15c;
    if ((*(long *)(param_1 + 0xe0) != 0) && (uVar4 = FUN_1001f3748(), (uVar4 & 1) == 0)) {
      FUN_1001fcb14(param_1 + 0x70,0);
      *(undefined1 *)(param_1 + 0x132) = 1;
      goto LAB_1001fe15c;
    }
  }
  iVar2 = FUN_10052b78c();
  if (iVar2 != 0) {
    FUN_10052b84c();
  }
LAB_1001fe15c:
  if (*(char *)(param_1 + 0x134) != '\0') {
    FUN_1001fe194(param_1);
    *(undefined1 *)(param_1 + 0x134) = 0;
  }
  return;
}




long thunk_FUN_1001fedec(long param_1)

{
  long lVar1;
  
  FUN_1002c5224(*(undefined8 *)(param_1 + 8));
  FUN_10053255c();
  FUN_1001fcb14(param_1 + 0x70,0);
  *(undefined1 *)(param_1 + 0x132) = 1;
  lVar1 = 0;
  if (*(long *)(param_1 + 0xe0) != 0) {
    lVar1 = *(long *)(param_1 + 0xe0) + 0x18;
  }
  return lVar1;
}




undefined8 FUN_1001ff8e4(void)

{
  FUN_1001fee38();
  return 0;
}




undefined8 FUN_1001ff8fc(void)

{
  FUN_1001fee80();
  return 0;
}




long thunk_FUN_1001feee8(long param_1)

{
  long lVar1;
  
  if (*(char *)(param_1 + 0x130) != '\0') {
    FUN_1002c5224(*(undefined8 *)(param_1 + 8));
    FUN_10053255c();
    FUN_1001fcb14(param_1 + 0x70,1);
    *(undefined1 *)(param_1 + 0x132) = 1;
  }
  lVar1 = 0;
  if (*(long *)(param_1 + 0x108) != 0) {
    lVar1 = *(long *)(param_1 + 0x108) + 0x30;
  }
  return lVar1;
}




long thunk_FUN_1001fef3c(long param_1,int *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  
  if (*(char *)(param_1 + 0x130) != '\0') {
    FUN_1002c5224(*(undefined8 *)(param_1 + 8));
    FUN_10053255c();
    puVar1 = &DAT_101d91198;
    if (*param_2 != 0) {
      puVar1 = (undefined8 *)(*(long *)(param_2 + 2) + (ulong)(*param_2 - 1) * 0x18);
    }
    FUN_1001f3758(*(undefined8 *)(param_1 + 0xe0),puVar1);
  }
  lVar2 = 0;
  if (*(long *)(param_1 + 0xe0) != 0) {
    lVar2 = *(long *)(param_1 + 0xe0) + 0x18;
  }
  return lVar2;
}




long thunk_FUN_1001fefac(long param_1,int *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  
  if (*(char *)(param_1 + 0x130) != '\0') {
    FUN_1002c5224(*(undefined8 *)(param_1 + 8));
    FUN_10053255c();
    puVar1 = &DAT_101d91198;
    if (*param_2 != 0) {
      puVar1 = (undefined8 *)(*(long *)(param_2 + 2) + (ulong)(*param_2 - 1) * 0x18);
    }
    FUN_1001f3768(*(undefined8 *)(param_1 + 0xe0),puVar1);
  }
  lVar2 = 0;
  if (*(long *)(param_1 + 0xe0) != 0) {
    lVar2 = *(long *)(param_1 + 0xe0) + 0x18;
  }
  return lVar2;
}




undefined8 FUN_1001ff920(void)

{
  FUN_1001ff01c();
  return 0;
}




long thunk_FUN_1001ff088(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = FUN_100126b6c();
  if ((uVar1 & 1) == 0) {
    if (*(char *)(param_1 + 0x130) != '\0') {
      FUN_1002c5224(*(undefined8 *)(param_1 + 8));
      FUN_10053255c();
      FUN_1001fcb14(param_1 + 0x70,5);
      *(undefined1 *)(param_1 + 0x132) = 1;
    }
    lVar2 = 0;
    if (*(long *)(param_1 + 0xf8) != 0) {
      lVar2 = *(long *)(param_1 + 0xf8) + 0x2c68;
    }
  }
  else {
    lVar2 = 0;
  }
  return lVar2;
}




undefined8 FUN_1001ff93c(void)

{
  FUN_1001ff0f0();
  return 0;
}




undefined8 FUN_1001ff954(void)

{
  FUN_1001ff140();
  return 0;
}




undefined8 FUN_1001ff96c(void)

{
  FUN_1001ff1bc();
  return 0;
}




void thunk_FUN_1001ff26c(long param_1)

{
  if ((*(char *)(param_1 + 0x130) != '\0') && (*(long *)(param_1 + 0xe8) != 0)) {
    FUN_1001fcb14(param_1 + 0x70,3);
    *(undefined1 *)(param_1 + 0x132) = 1;
    FUN_1001fe670(param_1);
    FUN_100251c30(*(undefined8 *)(param_1 + 0xe8));
    return;
  }
  return;
}




void FUN_1001ff988(long param_1)

{
  if (*(char *)(param_1 + 0x130) != '\0') {
    FUN_1001fcb14(param_1 + 0x70,0);
    *(undefined1 *)(param_1 + 0x132) = 1;
  }
  return;
}




void thunk_FUN_1001ff2c4(long param_1)

{
  if ((*(char *)(param_1 + 0x130) != '\0') && (*(long *)(param_1 + 0xe8) != 0)) {
    FUN_1001fcb14(param_1 + 0x70,3);
    *(undefined1 *)(param_1 + 0x132) = 1;
    FUN_1001fe670(param_1);
    FUN_100251c30(*(undefined8 *)(param_1 + 0xe8));
    return;
  }
  return;
}




void thunk_FUN_1001febf8(void)

{
  FUN_1001febf8();
  return;
}




void FUN_1001ff9c8(uint *param_1,undefined8 *param_2)

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
    FUN_1001ffa78(param_1,uVar3);
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




void FUN_1001ffa48(long param_1)

{
  int iVar1;
  
  iVar1 = FUN_100533fe4(*(undefined8 *)(param_1 + 8));
  if (iVar1 != 0) {
    *(undefined1 *)(param_1 + 0x134) = 1;
  }
  return;
}




void FUN_1001ffa78(uint *param_1,uint param_2)

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




void thunk_FUN_1001ff430(long param_1,int *param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  FUN_10032523c();
  iVar1 = FUN_1003252f0();
  *(bool *)(param_1 + 0x133) = iVar1 == 1;
  iVar1 = FUN_1001fcc30(param_1 + 0x70);
  FUN_1002c50fc(*(undefined8 *)(param_1 + 8),*(char *)(param_1 + 0x133) != '\0' || iVar1 != 0,
                iVar1 != 0);
  if (*param_2 - 2U < 2) {
    FUN_1002c5224(*(undefined8 *)(param_1 + 8));
    FUN_10053255c();
  }
  else if (*param_2 == 1) {
    lVar2 = FUN_1004f0338();
    lVar4 = *(long *)(lVar2 + 0x138);
    lVar3 = FUN_1004f1a74(0);
    if (lVar3 < lVar4) {
      FUN_1001ff4e4(lVar3,lVar2);
    }
  }
  FUN_1001fe670(param_1);
  return;
}




void thunk_FUN_1001ff5c0(void)

{
  ulong uVar1;
  int iVar2;
  long lVar3;
  void *apvStack_50 [2];
  char cStack_39;
  float fStack_38;
  float fStack_34;
  
  if (DAT_101d23050 != 0) {
    lVar3 = FUN_10002f320();
    uVar1 = *(ulong *)(lVar3 + 0xe1a0);
    if (-1 < (char)*(byte *)(lVar3 + 0xe1af)) {
      uVar1 = (ulong)*(byte *)(lVar3 + 0xe1af);
    }
    if ((uVar1 != 0x12) ||
       (iVar2 = std::string::compare(lVar3 + 0xe198,0,(char *)0xffffffffffffffff,0x1013e4aba),
       iVar2 != 0)) {
      FUN_100641464(&fStack_34,&fStack_38);
      FUN_10001549c(apvStack_50,"endOfSeasonRewards");
      iVar2 = FUN_1000e6f00(fStack_34 * 0.5,fStack_38 * 0.5,0x3f99999a,&DAT_101d23050,apvStack_50,1)
      ;
      if (cStack_39 < '\0') {
        operator_delete(apvStack_50[0]);
      }
      if (iVar2 != 0) {
        FUN_1000ec1cc(&DAT_101d23050,0);
      }
    }
  }
  return;
}




void FUN_1001ffafc(uint *param_1,undefined8 *param_2,undefined8 *param_3)

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




void thunk_FUN_1001fe5c8(void)

{
  FUN_1001fe5c8();
  return;
}




void thunk_FUN_1001fe8a4(void)

{
  FUN_1001fe8a4();
  return;
}




void FUN_1001ffb74(undefined8 param_1)

{
  undefined8 local_20;
  code *pcStack_18;
  
  pcStack_18 = thunk_FUN_1001fe8a4;
  local_20 = param_1;
  FUN_100643618(0xbf800000,&local_20,0,0);
  return;
}




undefined8 * FUN_1001ffbac(undefined8 *param_1)

{
  int iVar1;
  long lVar2;
  undefined8 local_40;
  undefined8 *puStack_38;
  undefined8 *local_30;
  code *pcStack_28;
  
  *param_1 = &PTR____cxa_pure_virtual_10146f510;
  operator_new(0x2b90);
  lVar2 = thunk_FUN_1002c5338();
  param_1[1] = lVar2;
  *(undefined8 **)(lVar2 + 0xb8) = param_1;
  FUN_10014f4a0(param_1 + 2);
  *param_1 = &PTR_FUN_10146efc8;
  param_1[2] = &PTR_FUN_10146f000;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  *(undefined8 *)((long)param_1 + 0x5a) = 0;
  *(undefined8 *)((long)param_1 + 0x52) = 0;
  FUN_1004e3004(param_1 + 0xd);
  *(undefined4 *)((long)param_1 + 0x74) = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  FUN_1004f1580(param_1 + 0x10);
  param_1[0x10] = &PTR_FUN_10146f4e0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x15] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  FUN_1004f1580(param_1 + 0x1d);
  param_1[0x1d] = &PTR_FUN_101454740;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x22] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x26] = 0;
  lVar2 = FUN_10032523c();
  local_40 = 0;
  pcStack_28 = thunk_FUN_100200708;
  puStack_38 = param_1;
  local_30 = param_1;
  FUN_100031f58(lVar2 + 0x40,&local_40);
  iVar1 = FUN_10031ffcc();
  if (iVar1 != 0) {
    lVar2 = FUN_10031ffe0();
    local_40 = 0;
    pcStack_28 = thunk_FUN_1002006a8;
    puStack_38 = param_1;
    local_30 = param_1;
    FUN_1001f3c84(lVar2 + 0x60,&local_40);
  }
  return param_1;
}




undefined8 * FUN_1001ffcbc(undefined8 *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  
  *param_1 = &PTR_FUN_10146efc8;
  param_1[2] = &PTR_FUN_10146f000;
  if (*(char *)(param_1 + 0xc) != '\0') {
    FUN_100643aa4(param_1);
    *(undefined1 *)(param_1 + 0xc) = 0;
  }
  iVar2 = FUN_10031ffcc();
  if (iVar2 != 0) {
    lVar3 = FUN_10031ffe0();
    if (*(uint *)(lVar3 + 0x60) != 0) {
      lVar4 = *(long *)(lVar3 + 0x68);
      lVar3 = (ulong)*(uint *)(lVar3 + 0x60) << 5;
      do {
        puVar1 = (undefined8 *)(lVar4 + 8);
        lVar4 = lVar4 + 0x20;
        if ((undefined8 *)*puVar1 == param_1) {
          FUN_1001f3e44();
          break;
        }
        lVar3 = lVar3 + -0x20;
      } while (lVar3 != 0);
    }
  }
  lVar3 = FUN_10032523c();
  if (*(uint *)(lVar3 + 0x40) != 0) {
    lVar4 = *(long *)(lVar3 + 0x48);
    lVar3 = (ulong)*(uint *)(lVar3 + 0x40) << 5;
    do {
      puVar1 = (undefined8 *)(lVar4 + 8);
      lVar4 = lVar4 + 0x20;
      if ((undefined8 *)*puVar1 == param_1) {
        FUN_100031ee8();
        break;
      }
      lVar3 = lVar3 + -0x20;
    } while (lVar3 != 0);
  }
  param_1[0x1d] = &PTR_FUN_101454740;
  if (*(char *)((long)param_1 + 0x147) < '\0') {
    operator_delete((void *)param_1[0x26]);
  }
  if (*(char *)((long)param_1 + 0x127) < '\0') {
    operator_delete((void *)param_1[0x22]);
  }
  FUN_1004f15a8(param_1 + 0x1d);
  param_1[0x10] = &PTR_FUN_10146f4e0;
  FUN_100200a2c(param_1 + 0x19,1);
  if (*(char *)((long)param_1 + 0xbf) < '\0') {
    operator_delete((void *)param_1[0x15]);
  }
  FUN_1004f15a8(param_1 + 0x10);
  if (*(char *)((long)param_1 + 0x5f) < '\0') {
    operator_delete((void *)param_1[9]);
  }
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
  FUN_10014f51c(param_1 + 2);
  *param_1 = &PTR____cxa_pure_virtual_10146f510;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return param_1;
}




void FUN_1001ffe50(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10146f4e0;
  FUN_100200a2c(param_1 + 9,1);
  if (*(char *)((long)param_1 + 0x3f) < '\0') {
    operator_delete((void *)param_1[5]);
  }
  FUN_1004f15a8(param_1);
  return;
}




void thunk_FUN_1001ffcbc(void)

{
  FUN_1001ffcbc();
  return;
}




void FUN_1001ffe98(long param_1)

{
  FUN_1001ffcbc(param_1 + -0x10);
  return;
}




void FUN_1001ffea0(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1001ffcbc();
  operator_delete(pvVar1);
  return;
}




void FUN_1001ffeb4(long param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1001ffcbc(param_1 + -0x10);
  operator_delete(pvVar1);
  return;
}




void FUN_1001ffecc(long param_1)

{
  long local_30;
  code *pcStack_28;
  
  if (*(char *)(param_1 + 0x60) == '\0') {
    pcStack_28 = thunk_FUN_1001fff28;
    local_30 = param_1;
    FUN_100643618(0xbf800000,&local_30,0,1);
    FUN_1004e3004(param_1 + 0x68);
    *(undefined1 *)(param_1 + 0x60) = 1;
  }
  return;
}




void FUN_1001fff28(float param_1,long param_2)

{
  size_t sVar1;
  size_t sVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  byte bVar5;
  byte bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  int iVar10;
  uint64_t uVar11;
  ulong uVar12;
  long lVar13;
  uint uVar14;
  ulong uVar15;
  long lVar16;
  int *piVar17;
  long lVar18;
  byte *pbVar19;
  byte *pbVar20;
  ulong uVar21;
  undefined8 *puVar22;
  float fVar23;
  float fVar24;
  void *local_88 [2];
  char local_71;
  
  fVar23 = *(float *)(param_2 + 0x70) - param_1;
  if (fVar23 <= 0.0) {
    fVar23 = 0.0;
  }
  *(float *)(param_2 + 0x70) = fVar23;
  fVar24 = fVar23 + -1.0;
  if (fVar23 + -1.0 <= 0.0) {
    fVar24 = 0.0;
  }
  FUN_1002c62fc(fVar24,0x41980000,*(undefined8 *)(param_2 + 8));
  uVar11 = _mach_absolute_time();
  if (1.0 <= (double)((uVar11 - *(long *)(param_2 + 0x68)) * DAT_101d91638) * 1e-09) {
    iVar10 = FUN_1004f168c(param_2 + 0x80);
    if ((iVar10 != 0) && (uVar12 = FUN_10014e424(), (uVar12 & 1) == 0)) {
      lVar13 = FUN_1004f0338();
      if (*(int *)(lVar13 + 0x98) != 0) {
        FUN_1004f0108(param_2 + 0x80);
      }
      FUN_1004e3004((long *)(param_2 + 0x68));
    }
  }
  fVar23 = *(float *)(param_2 + 0x70);
  if (((int)fVar23 != (int)(fVar23 + param_1)) && (*(int *)(param_2 + 0x78) == 0)) {
    if (fVar23 <= 8.0 && ((int)fVar23 & 1U) == 0) {
      FUN_1002c5e40(*(undefined8 *)(param_2 + 8));
      fVar23 = *(float *)(param_2 + 0x70);
    }
    if ((int)fVar23 == 8) {
      FUN_1002c6410(*(undefined8 *)(param_2 + 8));
      fVar23 = *(float *)(param_2 + 0x70);
    }
  }
  if ((fVar23 <= 0.0) && (*(int *)(param_2 + 0x78) == 0)) {
    *(undefined4 *)(param_2 + 0x78) = 2;
    FUN_10001549c(local_88,"PENDING");
    FUN_100102480(local_88);
    if (local_71 < '\0') {
      operator_delete(local_88[0]);
    }
    iVar10 = FUN_1004eef10();
    if (iVar10 != 0) {
      FUN_1004f00d4(param_2 + 0x48,param_2 + 0xe8);
    }
  }
  uVar14 = *(uint *)(param_2 + 0x28);
  if (uVar14 != 0) {
    lVar13 = 0;
    fVar23 = 20.0 - *(float *)(param_2 + 0x70);
    lVar16 = *(long *)(param_2 + 0x40);
    do {
      fVar24 = *(float *)(lVar16 + lVar13);
      bVar7 = false;
      bVar8 = true;
      bVar9 = false;
      if (0.0 < fVar24) {
        bVar7 = false;
        bVar8 = false;
        bVar9 = true;
        if (!NAN(fVar23) && !NAN(fVar24)) {
          bVar7 = fVar23 < fVar24;
          bVar8 = fVar23 == fVar24;
          bVar9 = false;
        }
      }
      if ((!bVar8 && bVar7 == bVar9) && (*(int *)(*(long *)(param_2 + 0x30) + lVar13) != 1)) {
        *(undefined4 *)(*(long *)(param_2 + 0x30) + lVar13) = 1;
      }
      lVar13 = lVar13 + 4;
    } while ((ulong)uVar14 * 4 - lVar13 != 0);
  }
  uVar12 = FUN_1004f1698(param_2 + 0x80);
  if (((uVar12 & 1) != 0) && (*(char *)(param_2 + 0xd8) != '\0')) {
    std::string::operator=((string *)(param_2 + 0x48),(string *)(param_2 + 0xa8));
    if (1.0 < ABS(*(float *)(param_2 + 0x70) - *(float *)(param_2 + 0xc0))) {
      *(float *)(param_2 + 0x70) = *(float *)(param_2 + 0xc0);
    }
    uVar14 = *(uint *)(param_2 + 200);
    uVar12 = (ulong)uVar14;
    if (uVar14 == 0) {
      bVar7 = true;
    }
    else {
      piVar17 = (int *)(*(long *)(param_2 + 0xd0) + 0x2c);
      bVar7 = true;
      do {
        if ((float)piVar17[-1] <= 0.0) {
          bVar7 = (bool)(*piVar17 == 1 & bVar7);
        }
        piVar17 = piVar17 + 0xc;
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
    }
    if ((*(char *)(param_2 + 0x61) == '\0') && (bVar7)) {
      *(undefined1 *)(param_2 + 0x61) = 1;
      FUN_100102cc4();
      uVar14 = *(uint *)(param_2 + 200);
    }
    if (uVar14 == 0) {
      uVar12 = 0;
    }
    else {
      uVar21 = 0;
      uVar12 = 0;
      do {
        lVar13 = *(long *)(param_2 + 0x30);
        lVar16 = *(long *)(param_2 + 0xd0);
        if (*(int *)(lVar13 + uVar21 * 4) == 0) {
          lVar18 = lVar16 + uVar21 * 0x30;
          uVar4 = *(undefined4 *)(lVar18 + 0x2c);
          fVar23 = *(float *)(lVar18 + 0x28);
          *(float *)(*(long *)(param_2 + 0x40) + uVar21 * 4) = fVar23;
          if ((bool)(bVar7 & 0.0 < fVar23)) {
            uVar4 = 1;
          }
          *(undefined4 *)(lVar13 + uVar21 * 4) = uVar4;
        }
        puVar22 = (undefined8 *)(lVar16 + uVar21 * 0x30);
        lVar13 = FUN_10015d3ec();
        bVar5 = *(byte *)((long)puVar22 + 0x17);
        uVar15 = (ulong)bVar5;
        bVar6 = *(byte *)(lVar13 + 0x551f);
        sVar1 = puVar22[1];
        if (-1 < (char)bVar5) {
          sVar1 = uVar15;
        }
        sVar2 = *(size_t *)(lVar13 + 0x5510);
        if (-1 < (char)bVar6) {
          sVar2 = (ulong)bVar6;
        }
        if (sVar1 == sVar2) {
          puVar3 = (void *)*puVar22;
          if (-1 < (char)bVar5) {
            puVar3 = puVar22;
          }
          pbVar20 = *(byte **)(lVar13 + 0x5508);
          if (-1 < (char)bVar6) {
            pbVar20 = (byte *)(lVar13 + 0x5508);
          }
          if ((char)bVar5 < '\0') {
            if ((sVar1 == 0) || (iVar10 = _memcmp(puVar3,pbVar20,sVar1), iVar10 == 0))
            goto LAB_100200288;
          }
          else if (sVar1 == 0) {
LAB_100200288:
            *(undefined4 *)(param_2 + 0x78) =
                 *(undefined4 *)(*(long *)(param_2 + 0x30) + uVar21 * 4);
            FUN_1002c5d24(*(undefined8 *)(param_2 + 8),
                          *(int *)(*(long *)(param_2 + 0x30) + uVar21 * 4) == 0);
            uVar12 = uVar21;
          }
          else if ((uint)*pbVar20 == ((uint)(void *)*puVar22 & 0xff)) {
            pbVar19 = (byte *)(lVar16 + uVar21 * 0x30);
            do {
              uVar15 = uVar15 - 1;
              pbVar20 = pbVar20 + 1;
              pbVar19 = pbVar19 + 1;
              if (uVar15 == 0) goto LAB_100200288;
            } while (*pbVar19 == *pbVar20);
          }
        }
        uVar21 = uVar21 + 1;
      } while (uVar21 < *(uint *)(param_2 + 200));
    }
    FUN_1002c605c(*(undefined8 *)(param_2 + 8),(uint *)(param_2 + 0x28),uVar12);
  }
  return;
}




void thunk_FUN_1001fff28(void)

{
  FUN_1001fff28();
  return;
}

