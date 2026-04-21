// functions/00aec — 5 functions
#include "libGameKindred.h"




void FUN_00aec53c(undefined8 param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  char *pcVar3;
  char *pcVar4;
  
  uVar1 = FUN_00937f2c();
  uVar2 = FUN_00e6ce7c("MAIN_MENU_PLAY",0);
  if ((uVar1 & 1) == 0) {
    FUN_00aee664(param_1,0,uVar2,"mainmenu_play","mainmenu_play_select",&DAT_03210450);
    uVar2 = FUN_00e6ce7c("MAIN_MENU_HEROES",0);
    FUN_00aee664(param_1,1,uVar2,"mainmenu_herohub","mainmenu_herohub_select",&DAT_03210450);
    uVar2 = FUN_00e6ce7c("MAIN_MENU_NEWS",0);
    FUN_00aee664(param_1,2,uVar2,"mainmenu_news","mainmenu_news_select",&DAT_03210450);
    uVar2 = FUN_00e6ce7c("MAIN_MENU_ACADEMY",0);
    FUN_00aee664(param_1,3,uVar2,"mainmenu_academy","mainmenu_academy_select",&DAT_03210450);
    uVar2 = FUN_00e6ce7c("MAIN_MENU_SOCIAL",0);
    FUN_00aee664(param_1,4,uVar2,"mainmenu_friends","mainmenu_friends_select",&DAT_03210450);
    uVar2 = FUN_00e6ce7c("MAIN_MENU_MARKET",0);
    FUN_00aee664(param_1,5,uVar2,"mainmenu_market","mainmenu_market_select",&DAT_03210450);
    uVar2 = FUN_00e6ce7c("MENU_MAIN_HUB_PLAYER_NOT_FOUND",0);
    pcVar3 = "mainmenu_profile";
    pcVar4 = "mainmenu_profile_select";
  }
  else {
    FUN_00aee664(param_1,0,uVar2,"zh_hans_mainmenu_play","zh_hans_mainmenu_play_select",
                 &DAT_03210450);
    uVar2 = FUN_00e6ce7c("MAIN_MENU_HEROES",0);
    FUN_00aee664(param_1,1,uVar2,"zh_hans_mainmenu_herohub","zh_hans_mainmenu_herohub_select",
                 &DAT_03210450);
    uVar2 = FUN_00e6ce7c("MAIN_MENU_NEWS",0);
    FUN_00aee664(param_1,2,uVar2,"zh_hans_mainmenu_news","zh_hans_mainmenu_news_select",
                 &DAT_03210450);
    uVar2 = FUN_00e6ce7c("MAIN_MENU_ACADEMY",0);
    FUN_00aee664(param_1,3,uVar2,"zh_hans_mainmenu_academy","zh_hans_mainmenu_academy_select",
                 &DAT_03210450);
    uVar2 = FUN_00e6ce7c("MAIN_MENU_SOCIAL",0);
    FUN_00aee664(param_1,4,uVar2,"zh_hans_mainmenu_friends","zh_hans_mainmenu_friends_select",
                 &DAT_03210450);
    uVar2 = FUN_00e6ce7c("MAIN_MENU_MARKET",0);
    FUN_00aee664(param_1,5,uVar2,"zh_hans_mainmenu_market","zh_hans_mainmenu_market_select",
                 &DAT_03210450);
    uVar2 = FUN_00e6ce7c("MENU_MAIN_HUB_PLAYER_NOT_FOUND",0);
    pcVar3 = "zh_hans_mainmenu_profile";
    pcVar4 = "zh_hans_mainmenu_profile_select";
  }
  FUN_00aee664(param_1,6,uVar2,pcVar3,pcVar4,&DAT_03210450);
  return;
}




void FUN_00aec824(long param_1,long param_2)

{
  if (param_2 != 0) {
    *(long *)(param_1 + 0xff0) = param_2;
    FUN_00f0d92c(param_1 + 0x4d8,param_2,&DAT_01bee7fa);
    return;
  }
  return;
}




void FUN_00aec844(long param_1)

{
  long lVar1;
  char *pcVar2;
  undefined8 uVar3;
  long lVar4;
  float fVar5;
  undefined8 local_58;
  void *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (*(char *)(param_1 + 0x8ed8) != '\0') {
    *(char *)(param_1 + 0x8ed8) = '\0';
    FUN_00aec9d8(param_1,0,0);
    *(undefined8 *)(param_1 + 0x8ed0) = 0;
    FUN_00aece80(param_1);
  }
  FUN_00aed474(param_1);
  if (*(char *)(param_1 + 0x8ec9) == '\0') {
    if (*(char *)(param_1 + 0x8ec8) == '\0') {
      pcVar2 = "MAIN_MENU_PLAY";
    }
    else {
      pcVar2 = "MAIN_MENU_PARTY";
    }
  }
  else {
    FUN_00e6ce7c("MAIN_MENU_MATCHING_RANKED",0);
    FUN_00e6ce7c("MAIN_MENU_MATCHING_CASUAL",0);
    pcVar2 = "MAIN_MENU_MATCHING";
  }
  uVar3 = FUN_00e6ce7c(pcVar2,0);
  (**(code **)(*(long *)(param_1 + 0x5a8) + 0x138))((long *)(param_1 + 0x5a8),uVar3);
  if (*(char *)(param_1 + 0x8ec9) != '\0') {
    lVar4 = FUN_009580b8();
    fVar5 = *(float *)(lVar4 + 0x567c);
    FUN_00e70510(&local_58);
    if ((int)fVar5 % 0x3c < 10) {
      pcVar2 = "%d:0%d";
    }
    else {
      pcVar2 = "%d:%d";
    }
    FUN_00e70e18(&local_58,pcVar2);
    FUN_00f0d75c(param_1 + 0x8b08,&local_58);
    if (local_50 != (void *)0x0) {
      operator_delete__(local_50);
      local_58 = 0;
      local_50 = (void *)0x0;
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00aec9d8(long param_1,byte param_2,byte param_3)

{
  byte *pbVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  ushort uVar5;
  long lVar6;
  ushort *puVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined1 auStack_60 [4];
  undefined1 auStack_5c [4];
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  if ((param_2 & 1) != *(byte *)(param_1 + 0x8ed9)) {
    *(byte *)(param_1 + 0x8ed9) = param_2 & 1;
    *(uint *)(param_1 + 0x8154) = *(uint *)(param_1 + 0x8154) & 0xfffffffb;
    if (0 < *(int *)(param_1 + 0x8ec4)) {
      uVar8 = 0;
      lVar6 = param_1 + 0xd0;
      do {
        FUN_00aed7e8(lVar6,param_2 & 1,uVar8 == *(uint *)(param_1 + 0x8ec0));
        uVar8 = uVar8 + 1;
        lVar6 = lVar6 + 0x1000;
      } while ((long)uVar8 < (long)*(int *)(param_1 + 0x8ec4));
    }
    FUN_00f00298(auStack_5c,auStack_60);
    lVar6 = param_1 + 0x8728;
    FUN_00f01980(lVar6);
    pbVar1 = (byte *)(param_1 + 0x8edb);
    if ((param_2 & 1) == 0) {
      if (*pbVar1 == 0) {
        if ((*(float *)(param_1 + 0x8770) != 1.0) || (*(float *)(param_1 + 0x8774) != 1.0)) {
          uVar9 = NEON_fmov(0x3f800000,4);
          *(undefined8 *)(param_1 + 0x8770) = uVar9;
          FUN_0091ada4(lVar6);
        }
        uVar2 = *(uint *)(param_1 + 0x87ac);
        if ((~uVar2 & 0x7f80) != 0) {
          *(uint *)(param_1 + 0x87ac) = uVar2 | 0x7f80;
          FUN_0091ada4(lVar6);
        }
      }
      lVar4 = DAT_03210d00;
      uVar5 = *(ushort *)(DAT_03210d00 + 0x20010);
      if ((ulong)uVar5 == 0xffff) {
        puVar7 = (ushort *)0x0;
      }
      else {
        puVar7 = (ushort *)(DAT_03210d00 + (ulong)uVar5 * 0x40 + 0x10);
        if (uVar5 == *(ushort *)(DAT_03210d00 + 0x20012)) {
          uVar5 = 0xffff;
        }
        else {
          uVar5 = *puVar7;
        }
        *(ushort *)(DAT_03210d00 + 0x20010) = uVar5;
        *(int *)(lVar4 + 0x20014) = *(int *)(lVar4 + 0x20014) + 1;
        FUN_00efcad4(puVar7);
        *(undefined ***)puVar7 = &PTR_FUN_027c1a60;
        *(int *)(lVar4 + 0x20020) = *(int *)(lVar4 + 0x20020) + 1;
      }
      FUN_00efcac4(0x3dcccccd,puVar7);
      FUN_00f022a0(lVar6,puVar7);
      uVar9 = FUN_00a250a8();
      FUN_00efddc4(0);
      FUN_00efcac4(0x3e99999a,uVar9);
      lVar4 = DAT_03210d00;
      uVar5 = *(ushort *)(DAT_03210d00 + 0x20010);
      if ((ulong)uVar5 == 0xffff) {
        puVar7 = (ushort *)0x0;
      }
      else {
        puVar7 = (ushort *)(DAT_03210d00 + (ulong)uVar5 * 0x40 + 0x10);
        if (uVar5 == *(ushort *)(DAT_03210d00 + 0x20012)) {
          uVar5 = 0xffff;
        }
        else {
          uVar5 = *puVar7;
        }
        *(ushort *)(DAT_03210d00 + 0x20010) = uVar5;
        *(int *)(lVar4 + 0x20014) = *(int *)(lVar4 + 0x20014) + 1;
        FUN_00efcd98(puVar7);
        *(int *)(lVar4 + 0x20020) = *(int *)(lVar4 + 0x20020) + 1;
      }
      FUN_00efcea4(puVar7,uVar9,0);
      FUN_00f022a0(lVar6,puVar7);
      lVar4 = DAT_03210d00;
      uVar5 = *(ushort *)(DAT_03210d00 + 0x20010);
      if ((ulong)uVar5 == 0xffff) {
        puVar7 = (ushort *)0x0;
      }
      else {
        puVar7 = (ushort *)(DAT_03210d00 + (ulong)uVar5 * 0x40 + 0x10);
        if (uVar5 == *(ushort *)(DAT_03210d00 + 0x20012)) {
          uVar5 = 0xffff;
        }
        else {
          uVar5 = *puVar7;
        }
        *(ushort *)(DAT_03210d00 + 0x20010) = uVar5;
        *(int *)(lVar4 + 0x20014) = *(int *)(lVar4 + 0x20014) + 1;
        FUN_00efc8e8(puVar7);
        *(undefined ***)puVar7 = &PTR_FUN_02825148;
        *(int *)(lVar4 + 0x20020) = *(int *)(lVar4 + 0x20020) + 1;
      }
      FUN_00f022a0(lVar6,puVar7);
      *pbVar1 = 0;
    }
    else {
      *pbVar1 = param_3 & 1;
      *(uint *)(param_1 + 0x87ac) = *(uint *)(param_1 + 0x87ac) | 4;
      if ((*(float *)(param_1 + 0x8770) != 1.0) || (*(float *)(param_1 + 0x8774) != 1.0)) {
        uVar9 = NEON_fmov(0x3f800000,4);
        *(undefined8 *)(param_1 + 0x8770) = uVar9;
        FUN_0091ada4(lVar6);
      }
      uVar9 = FUN_00a250a8();
      FUN_00efddc4(0x3f800000);
      FUN_00efcac4(0x3d4ccccd,uVar9);
      lVar4 = DAT_03210d00;
      uVar5 = *(ushort *)(DAT_03210d00 + 0x20010);
      if ((ulong)uVar5 == 0xffff) {
        puVar7 = (ushort *)0x0;
      }
      else {
        puVar7 = (ushort *)(DAT_03210d00 + (ulong)uVar5 * 0x40 + 0x10);
        if (uVar5 == *(ushort *)(DAT_03210d00 + 0x20012)) {
          uVar5 = 0xffff;
        }
        else {
          uVar5 = *puVar7;
        }
        *(ushort *)(DAT_03210d00 + 0x20010) = uVar5;
        *(int *)(lVar4 + 0x20014) = *(int *)(lVar4 + 0x20014) + 1;
        FUN_00efcd98(puVar7);
        *(int *)(lVar4 + 0x20020) = *(int *)(lVar4 + 0x20020) + 1;
      }
      FUN_00efcea4(puVar7,uVar9,0);
      FUN_00f022a0(lVar6,puVar7);
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00aece80(long param_1)

{
  float *pfVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float local_b8;
  undefined4 uStack_b4;
  undefined8 local_b0;
  long local_a8;
  
  lVar3 = tpidr_el0;
  local_a8 = *(long *)(lVar3 + 0x28);
  FUN_00f00298(&uStack_b4,&local_b8);
  uVar4 = FUN_0092ea9c();
  fVar13 = local_b8 / *(float *)(param_1 + 0x4c);
  fVar12 = DAT_031339d4 / *(float *)(param_1 + 0x48);
  FUN_00f13f08(uStack_b4,fVar13,param_1 + 0x80d0);
  FUN_00f13f08(fVar12,fVar13,param_1 + 0x8188);
  FUN_00f13f08(fVar12,fVar13,param_1 + 0x8278);
  FUN_00f13f08(fVar12,fVar13,param_1 + 0x8368);
  FUN_00f13f08(0x41c00000,fVar13,param_1 + 0x8458);
  if (*(float *)(param_1 + 0x8498) != fVar12) {
    *(float *)(param_1 + 0x8498) = fVar12;
    FUN_0091ada4(param_1 + 0x8458);
  }
  FUN_00f13f08(0x40c00000,fVar13,param_1 + 0x8548);
  if (*(float *)(param_1 + 0x8588) != fVar12) {
    *(float *)(param_1 + 0x8588) = fVar12;
    FUN_0091ada4(param_1 + 0x8548);
  }
  FUN_00f13f08(0x40c00000,fVar13,param_1 + 0x8638);
  if (*(float *)(param_1 + 0x8678) != fVar12) {
    *(float *)(param_1 + 0x8678) = fVar12;
    FUN_0091ada4(param_1 + 0x8638);
  }
  FUN_00f13f08(0x42960000,fVar13,param_1 + 0x88a0);
  if (*(float *)(param_1 + 0x88e0) != fVar12) {
    *(float *)(param_1 + 0x88e0) = fVar12;
    FUN_0091ada4(param_1 + 0x88a0);
  }
  pfVar1 = (float *)(param_1 + 0x8ebc);
  FUN_00f13f08(*pfVar1 + DAT_02be366c,fVar13,param_1 + 0x87b0);
  if (*(float *)(param_1 + 0x87f0) != fVar12) {
    *(float *)(param_1 + 0x87f0) = fVar12;
    FUN_0091ada4(param_1 + 0x87b0);
  }
  fVar13 = 65.0;
  lVar8 = 0;
  uVar9 = 0;
  plVar2 = (long *)(param_1 + 0x60d0);
  if ((uVar4 & 1) == 0) {
    fVar13 = 0.0;
  }
  do {
    if (lVar8 == 0x6000) {
      uVar4 = FUN_0092ea9c();
      fVar14 = 1.0;
      if ((uVar4 & 1) != 0) {
        fVar14 = 1.0 / DAT_02be3668;
      }
      fVar10 = local_b8 - DAT_02be366c;
      fVar11 = DAT_02be366c;
      (**(code **)(*plVar2 + 0x50))(plVar2);
      fVar14 = fVar14 * (fVar10 * 0.5 - fVar11 * 0.5);
      if ((*(float *)(param_1 + 0x6110) != 0.0) || (*(float *)(param_1 + 0x6114) != fVar14)) {
        *(float *)(param_1 + 0x6110) = 0.0;
        *(float *)(param_1 + 0x6114) = fVar14;
        FUN_0091ada4(plVar2);
      }
      lVar7 = *plVar2;
      plVar5 = plVar2;
    }
    else {
      lVar7 = param_1 + lVar8;
      plVar5 = (long *)(lVar7 + 0xd0);
      fVar14 = fVar13 + ((float)(uVar9 & 0xffffffff) + -3.0) * 120.0;
      if ((*(float *)(lVar7 + 0x110) != 0.0) || (*(float *)(lVar7 + 0x114) != fVar14)) {
        *(undefined4 *)(lVar7 + 0x110) = 0;
        *(float *)(lVar7 + 0x114) = fVar14;
        FUN_0091ada4(plVar5);
      }
      lVar7 = *(long *)(param_1 + lVar8 + 0xd0);
    }
    local_b0 = 0x3f00000000000000;
    (**(code **)(lVar7 + 0x28))(plVar5,&local_b0);
    fVar14 = DAT_02be366c;
    plVar5 = (long *)(param_1 + lVar8 + 0xd0);
    if (*(long *)(param_1 + 0x8ed0) == 0) {
      uVar4 = FUN_0092ea9c();
      fVar11 = -16.0;
      if ((uVar4 & 1) == 0) {
        fVar11 = 24.0;
      }
      FUN_00f13f08(fVar12,fVar14 + fVar11,plVar5);
      plVar6 = plVar5;
    }
    else {
      plVar6 = (long *)(param_1 + lVar8 + 0xd0);
      fVar10 = (float)(**(code **)(*plVar6 + 0x58))(plVar6,0,0,1,1);
      fVar14 = DAT_02be366c;
      uVar4 = FUN_0092ea9c();
      fVar11 = -16.0;
      if ((uVar4 & 1) == 0) {
        fVar11 = 24.0;
      }
      FUN_00f13f08(fVar12 + fVar10,fVar14 + fVar11,plVar5);
      plVar6 = (long *)(param_1 + uVar9 * 0x1000 + 0xd0);
    }
    fVar14 = (float)(**(code **)(*plVar6 + 0x60))(plVar6,0,0,1,1);
    fVar11 = *pfVar1;
    if (fVar11 < fVar14) {
      fVar14 = (float)(**(code **)(*plVar6 + 0x60))(plVar6,0,0,1,1);
      *pfVar1 = fVar14;
    }
    FUN_00aed514(plVar5);
    lVar8 = lVar8 + 0x1000;
    uVar9 = uVar9 + 1;
  } while (lVar8 != 0x7000);
  FUN_00aed780(param_1);
  fVar12 = *(float *)(param_1 + 0x6384);
  FUN_00f0e700(param_1 + 0x6340);
  fVar12 = -(fVar12 + fVar11 * 0.15);
  if (*(float *)(param_1 + 0x8dac) != fVar12) {
    *(float *)(param_1 + 0x8dac) = fVar12;
    FUN_0091ada4(param_1 + 0x8d68);
  }
  plVar2 = (long *)(param_1 + 0x8990);
  fVar12 = DAT_02be366c / *(float *)(param_1 + 0x48);
  if ((*(float *)(param_1 + 0x89d0) != fVar12) ||
     (*(float *)(param_1 + 0x89d4) != *(float *)(param_1 + 0x114))) {
    *(float *)(param_1 + 0x89d0) = fVar12;
    *(float *)(param_1 + 0x89d4) = *(float *)(param_1 + 0x114);
    FUN_0091ada4(plVar2);
  }
  local_b0 = 0x3f00000000000000;
  (**(code **)(*plVar2 + 0x28))(plVar2,&local_b0);
  pfVar1 = (float *)(param_1 + 0x8a58);
  plVar2 = (long *)(param_1 + 0x8a18);
  if ((*pfVar1 != 0.0) || (*(float *)(param_1 + 0x8a5c) != 0.0)) {
    pfVar1[0] = 0.0;
    pfVar1[1] = 0.0;
    FUN_0091ada4(plVar2);
  }
  local_b0 = 0x3f0000003f000000;
  (**(code **)(*plVar2 + 0x28))(plVar2,&local_b0);
  pfVar1 = (float *)(param_1 + 0x8b48);
  plVar2 = (long *)(param_1 + 0x8b08);
  if ((*pfVar1 != 0.0) || (*(float *)(param_1 + 0x8b4c) != 0.0)) {
    pfVar1[0] = 0.0;
    pfVar1[1] = 0.0;
    FUN_0091ada4(plVar2);
  }
  local_b0 = 0x3f0000003f000000;
  (**(code **)(*plVar2 + 0x28))(plVar2,&local_b0);
  if (*(long *)(lVar3 + 0x28) == local_a8) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

