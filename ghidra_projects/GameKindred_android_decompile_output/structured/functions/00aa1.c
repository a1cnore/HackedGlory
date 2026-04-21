// functions/00aa1 — 36 functions
#include "libGameKindred.h"




long FUN_00aa106c(char *param_1)

{
  int iVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 *puVar4;
  
  uVar2 = FUN_00d6eb50();
  plVar3 = (long *)FUN_00d6eb5c(uVar2,"*LocalizedUISounds*");
  puVar4 = *(undefined8 **)*plVar3;
  plVar3 = (long *)*plVar3;
  while( true ) {
    if (puVar4 == (undefined8 *)0x0) {
      return 0;
    }
    iVar1 = strcmp((char *)*puVar4,param_1);
    if (iVar1 == 0) break;
    puVar4 = (undefined8 *)plVar3[1];
    plVar3 = plVar3 + 1;
  }
  return *plVar3;
}




undefined8 FUN_00aa10cc(long *param_1,char *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)*param_1;
  while( true ) {
    if (puVar2 == (undefined8 *)0x0) {
      return 0;
    }
    iVar1 = strcmp((char *)*puVar2,param_2);
    if (iVar1 == 0) break;
    puVar2 = (undefined8 *)param_1[1];
    param_1 = param_1 + 1;
  }
  return *(undefined8 *)(*param_1 + 8);
}




void FUN_00aa111c(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  
  iVar1 = FUN_0092ec00();
  if (iVar1 == 6) {
    puVar3 = &DAT_01b951f9;
  }
  else if (iVar1 == 0xf) {
    puVar3 = &DAT_01b95201;
  }
  else {
    if (iVar1 != 8) goto LAB_00aa1180;
    puVar3 = &DAT_01b951fd;
  }
  lVar2 = FUN_00aa10cc(param_1,puVar3);
  if (lVar2 != 0) {
    return;
  }
LAB_00aa1180:
  FUN_00aa10cc(param_1,"en");
  return;
}




byte * FUN_00aa1198(byte *param_1)

{
  long lVar1;
  int iVar2;
  char *pcVar3;
  byte local_58 [16];
  void *local_48;
  ulong local_40 [2];
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_40[0] = 0;
  local_40[1] = 0;
  local_30 = (void *)0x0;
  iVar2 = FUN_0092ec00();
  if (iVar2 == 0xf) {
    pcVar3 = "zh";
  }
  else if (iVar2 == 8) {
    pcVar3 = "ko";
  }
  else if (iVar2 == 6) {
    pcVar3 = "ja";
  }
  else {
    pcVar3 = "en";
  }
  FUN_008fa54c(local_58,pcVar3);
  FUN_008fce60(local_40,local_58);
  if ((local_58[0] & 1) != 0) {
    operator_delete(local_48);
  }
  FUN_008fa54c(local_58,"[LOC]");
  FUN_00937db8(param_1,local_58,local_40);
  if ((local_58[0] & 1) != 0) {
    operator_delete(local_48);
  }
  if ((*param_1 & 1) == 0) {
    param_1 = param_1 + 1;
  }
  else {
    param_1 = *(byte **)(param_1 + 0x10);
  }
  if ((local_40[0] & 1) != 0) {
    operator_delete(local_30);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




long FUN_00aa12a8(undefined8 param_1,undefined8 param_2,uint param_3,uint param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = FUN_009b8d9c();
  lVar3 = 0;
  if ((uVar1 & 1) != 0) {
    uVar2 = FUN_009b8d90();
    lVar3 = FUN_01985d44(uVar2,DAT_0312ebb0);
    if (lVar3 != 0) {
      FUN_009dbd5c(param_1,lVar3,param_2,param_3 & 1,param_4 & 1,0);
      FUN_009dbea4(lVar3);
    }
  }
  return lVar3;
}




void FUN_00aa132c(void)

{
  int iVar1;
  long lVar2;
  
  lVar2 = FUN_00aa106c();
  lVar2 = FUN_00aa111c(*(undefined8 *)(lVar2 + 8));
  if ((lVar2 != 0) && (iVar1 = FUN_00e6a474(lVar2), iVar1 != 0)) {
    FUN_00aa12a8(0x3f800000,lVar2,0,0);
    return;
  }
  return;
}




void FUN_00aa1380(undefined4 *param_1)

{
  *param_1 = 0;
  return;
}




void FUN_00aa1388(int *param_1)

{
  if (*param_1 != 0) {
    FUN_00aa1398();
    return;
  }
  return;
}




void FUN_00aa1398(int *param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  iVar1 = *param_1;
  if (iVar1 != 0) {
    lVar3 = DAT_03133ac0;
    if (DAT_03133ac0 == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = DAT_03133ac0;
      if (*(int *)(DAT_03133ac0 + 0x113c) != iVar1) {
        lVar3 = 0;
        lVar4 = lVar3;
      }
    }
    if (((DAT_03133ab8 != 0) &&
        (lVar5 = DAT_03133ab8, lVar2 = DAT_03133ab8, *(int *)(DAT_03133ab8 + 0x113c) == iVar1)) ||
       (lVar5 = lVar4, lVar2 = lVar3, lVar3 != 0)) {
      *(undefined4 *)(lVar2 + 0x113c) = 0;
      *param_1 = 0;
      FUN_00ed7770(lVar5);
      FUN_00ed77f0(lVar5);
      return;
    }
  }
  return;
}




void FUN_00aa1430(long *param_1)

{
  long *plVar1;
  
  plVar1 = operator_new(0x1148);
  FUN_00b23fec();
  DAT_03133ab8 = plVar1;
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*DAT_03133ab8 + 0x178))();
  plVar1 = operator_new(0x1238);
  FUN_00ac3e18();
  DAT_03133ac0 = plVar1;
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
                    /* WARNING: Could not recover jumptable at 0x00aa14cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_03133ac0 + 0x178))();
  return;
}




void FUN_00aa14d0(void)

{
  ulong uVar1;
  
  FUN_00ed77f0(DAT_03133ab8);
  *(undefined4 *)((long)DAT_03133ab8 + 0x113c) = 0;
  uVar1 = FUN_00f02540();
  if ((uVar1 & 1) != 0) {
    FUN_00f01a4c(DAT_03133ab8,1);
  }
  if (DAT_03133ab8 != (long *)0x0) {
    (**(code **)(*DAT_03133ab8 + 8))();
  }
  DAT_03133ab8 = (long *)0x0;
  FUN_00ed77f0(DAT_03133ac0);
  *(undefined4 *)((long)DAT_03133ac0 + 0x113c) = 0;
  uVar1 = FUN_00f02540();
  if ((uVar1 & 1) != 0) {
    FUN_00f01a4c(DAT_03133ac0,1);
  }
  if (DAT_03133ac0 != (long *)0x0) {
    (**(code **)(*DAT_03133ac0 + 8))();
  }
  DAT_03133ac0 = (long *)0x0;
  return;
}




void FUN_00aa1568(void)

{
  FUN_00ed7830(DAT_03133ab8);
  return;
}




void FUN_00aa1574(int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,uint param_5
                 ,ulong param_6,uint param_7,undefined4 param_8,undefined8 param_9,
                 undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  
  plVar1 = &DAT_03133ac0;
  if ((param_6 & 1) == 0) {
    plVar1 = &DAT_03133ab8;
  }
  lVar3 = *plVar1;
  uVar2 = FUN_00ed7830(lVar3);
  if ((uVar2 & 1) != 0) {
    *param_1 = 0;
    return;
  }
  DAT_02be36b8 = DAT_02be36b8 + 1;
  *param_1 = DAT_02be36b8;
  FUN_00b24608(lVar3,param_2,param_3,param_4,param_5 & 1,param_7 & 1,param_8,param_12);
  FUN_00ed78d0(lVar3,param_9,param_10,param_11);
  *(int *)(lVar3 + 0x113c) = *param_1;
  FUN_00ed77b4(lVar3);
  return;
}




undefined1  [16] FUN_00aa1680(ulong param_1)

{
  long *plVar1;
  undefined4 extraout_s0;
  undefined4 extraout_var;
  undefined8 extraout_var_00;
  undefined1 auVar2 [16];
  
  plVar1 = &DAT_03133ac0;
  if ((param_1 & 1) == 0) {
    plVar1 = &DAT_03133ab8;
  }
  if ((long *)*plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00aa16a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)*plVar1 + 0x180))();
    auVar2._4_4_ = extraout_var;
    auVar2._0_4_ = extraout_s0;
    auVar2._8_8_ = extraout_var_00;
    return auVar2;
  }
  return ZEXT816(0);
}




undefined1  [16] FUN_00aa16b4(ulong param_1)

{
  long *plVar1;
  undefined4 extraout_s0;
  undefined4 extraout_var;
  undefined8 extraout_var_00;
  undefined1 auVar2 [16];
  
  plVar1 = &DAT_03133ac0;
  if ((param_1 & 1) == 0) {
    plVar1 = &DAT_03133ab8;
  }
  if ((long *)*plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00aa16dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)*plVar1 + 0x188))();
    auVar2._4_4_ = extraout_var;
    auVar2._0_4_ = extraout_s0;
    auVar2._8_8_ = extraout_var_00;
    return auVar2;
  }
  return ZEXT816(0);
}




void FUN_00aa16e8(void)

{
  ulong uVar1;
  long lVar2;
  
  if (((DAT_03133ac8 != 0) && (uVar1 = FUN_0091f2ec(0), (uVar1 & 1) != 0)) &&
     (lVar2 = FUN_00ed3104(DAT_03133ac8), lVar2 != 0)) {
    FUN_00ed2ed0(DAT_03133ac8,lVar2);
    return;
  }
  return;
}




void FUN_00aa1738(undefined8 param_1)

{
  long lVar1;
  undefined8 local_40;
  code *pcStack_38;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  pcStack_38 = thunk_FUN_00aa16e8;
  local_40 = 0;
  DAT_03133ad0 = param_1;
  FUN_00f02e98(0xbf800000,&local_40,0,1);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00aa17a8(void)

{
  long lVar1;
  undefined8 local_40;
  code *pcStack_38;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  DAT_03133ac8 = 0;
  DAT_03133ad0 = 0;
  pcStack_38 = thunk_FUN_00aa16e8;
  local_40 = 0;
  FUN_00f03390(&local_40);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00aa1814(long param_1)

{
  ulong uVar1;
  
  if (DAT_03133ac8 != 0) {
    *(uint *)(DAT_03133ac8 + 0x84) = *(uint *)(DAT_03133ac8 + 0x84) & 0xfffffffb;
  }
  DAT_03133ac8 = param_1;
  if (param_1 != 0) {
    uVar1 = FUN_00f02540();
    if ((uVar1 & 1) == 0) {
      (**(code **)(*DAT_03133ad0 + 0x78))(DAT_03133ad0,DAT_03133ac8,1);
    }
    *(uint *)(DAT_03133ac8 + 0x84) = *(uint *)(DAT_03133ac8 + 0x84) | 4;
  }
  return;
}




bool FUN_00aa1880(void)

{
  return DAT_03133ac8 != 0;
}




void FUN_00aa1894(void)

{
  if (DAT_03133ac8 != 0) {
    FUN_00ed30c4();
    return;
  }
  return;
}




void FUN_00aa18a8(undefined8 param_1,undefined8 param_2,uint param_3,uint param_4,uint param_5)

{
  if (DAT_03133ac8 != 0) {
    FUN_00ed2678(DAT_03133ac8,param_1,param_2,param_3 & 1,param_4 & 1,param_5 & 1);
    return;
  }
  return;
}




void FUN_00aa18e0(undefined8 param_1,undefined8 param_2,uint param_3,uint param_4,uint param_5)

{
  if (DAT_03133ac8 != 0) {
    FUN_00ed2b98(DAT_03133ac8,param_1,param_2,param_3 & 1,param_4 & 1,param_5 & 1);
    return;
  }
  return;
}




void FUN_00aa1918(undefined8 param_1)

{
  if (DAT_03133ac8 != 0) {
    FUN_00ed2ed0(DAT_03133ac8,param_1);
    return;
  }
  return;
}




undefined8 FUN_00aa1934(undefined8 param_1)

{
  undefined8 uVar1;
  
  if (DAT_03133ac8 != 0) {
    uVar1 = FUN_00ed2bdc(DAT_03133ac8,param_1);
    return uVar1;
  }
  return 0;
}




void FUN_00aa1954(undefined8 param_1)

{
  if (DAT_03133ac8 != 0) {
    FUN_00ed30cc(DAT_03133ac8,param_1);
    return;
  }
  return;
}




void FUN_00aa1970(undefined8 param_1)

{
  if (DAT_03133ac8 != 0) {
    FUN_00ed2c1c(DAT_03133ac8,param_1);
    return;
  }
  return;
}




void FUN_00aa198c(undefined8 param_1)

{
  if (DAT_03133ac8 != 0) {
    FUN_00ed2dd4(DAT_03133ac8,param_1);
    return;
  }
  return;
}




void FUN_00aa19a8(undefined8 param_1,undefined8 param_2,uint param_3,uint param_4,uint param_5)

{
  if (DAT_03133ac8 != 0) {
    FUN_00ed2a04(DAT_03133ac8,param_1,param_2,param_3 & 1,param_4 & 1,param_5 & 1);
    return;
  }
  return;
}




void FUN_00aa19e0(undefined8 param_1)

{
  if (DAT_03133ac8 != 0) {
    FUN_00ed30cc(DAT_03133ac8,param_1);
    return;
  }
  return;
}




bool FUN_00aa19fc(undefined8 param_1)

{
  long lVar1;
  
  if (DAT_03133ac8 != 0) {
    lVar1 = FUN_00ed2e0c(DAT_03133ac8,param_1);
    return lVar1 != 0;
  }
  return false;
}




void thunk_FUN_00aa16e8(void)

{
  ulong uVar1;
  long lVar2;
  
  if (((DAT_03133ac8 != 0) && (uVar1 = FUN_0091f2ec(0), (uVar1 & 1) != 0)) &&
     (lVar2 = FUN_00ed3104(DAT_03133ac8), lVar2 != 0)) {
    FUN_00ed2ed0(DAT_03133ac8,lVar2);
    return;
  }
  return;
}




void FUN_00aa1a38(undefined8 *param_1)

{
  FUN_00948cd8();
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = &PTR_FUN_027d1940;
  param_1[3] = 0;
  return;
}




void FUN_00aa1a70(undefined8 param_1,byte *param_2)

{
  long lVar1;
  byte *pbVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 local_290;
  void *local_288;
  undefined8 local_280;
  void *local_278;
  undefined8 local_270;
  void *local_268;
  ulong local_260 [2];
  void *local_250;
  byte local_248 [16];
  void *local_238;
  int local_230;
  int local_228;
  undefined8 local_200;
  void *local_1f8;
  undefined **local_1f0;
  void *local_1e8 [2];
  byte local_1d8 [16];
  void *local_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  byte local_190 [16];
  void *local_180;
  undefined8 local_178;
  void *local_170;
  undefined8 local_168;
  void *local_160;
  undefined4 local_158;
  undefined1 auStack_150 [8];
  int local_148;
  long local_140;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  if (param_2 != (byte *)0x0) {
    if ((*param_2 & 1) == 0) {
      pbVar2 = param_2 + 1;
    }
    else {
      pbVar2 = *(byte **)(param_2 + 0x10);
    }
    lVar3 = FUN_00cc7618(pbVar2);
    uVar4 = FUN_00e6ce7c(*(undefined8 *)(lVar3 + 0x18),0);
    thunk_FUN_00e7051c(&local_200,uVar4);
    FUN_00cc7e2c(local_248,param_2);
    FUN_00976588(auStack_150);
    local_260[0] = 0;
    local_260[1] = 0;
    local_250 = (void *)0x0;
    uVar5 = FUN_0096bf64(param_2,auStack_150);
    if (((uVar5 & 1) != 0) && (local_148 != 0)) {
      local_1f0 = &PTR_FUN_027bca90;
      FUN_00978240(local_1e8,local_140 + 8);
      FUN_008fcdb8(local_1d8,local_140 + 0x18);
      uStack_198 = *(undefined8 *)(local_140 + 0x58);
      local_1a0 = *(undefined8 *)(local_140 + 0x50);
      uStack_1a8 = *(undefined8 *)(local_140 + 0x48);
      local_1b0 = *(undefined8 *)(local_140 + 0x40);
      uStack_1b8 = *(undefined8 *)(local_140 + 0x38);
      local_1c0 = *(undefined8 *)(local_140 + 0x30);
      FUN_008fcdb8(local_190,local_140 + 0x60);
      thunk_FUN_00e7051c(&local_178,local_140 + 0x78);
      thunk_FUN_00e7051c(&local_168,local_140 + 0x88);
      local_158 = *(undefined4 *)(local_140 + 0x98);
      FUN_008fce60(local_260,local_190);
      local_1f0 = &PTR_FUN_027bca90;
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
      if ((local_190[0] & 1) != 0) {
        operator_delete(local_180);
      }
      if ((local_1d8[0] & 1) != 0) {
        operator_delete(local_1c8);
      }
      FUN_00977ea0(local_1e8,1);
    }
    lVar3 = FUN_009580b8();
    if (*(char *)(lVar3 + 0x568c) == '\0') {
      uVar5 = FUN_00cabb6c(local_248);
      if ((uVar5 & 1) == 0) {
        if (local_230 == 0) {
          if (local_228 != 0) {
            uVar4 = FUN_00e6ce7c("SKINS_HUB_DIALOG_LACK_OPALS_DESC",0);
            thunk_FUN_00e7051c(&local_1f0,uVar4);
            FUN_00e70510(&local_270);
            FUN_00e70e18(&local_270,&DAT_01bb6d43,local_228);
            FUN_00e70510(&local_280);
            lVar3 = FUN_009580b8();
            FUN_00e70e18(&local_280,&DAT_01bb6d43,*(undefined4 *)(lVar3 + 0x545c));
            FUN_00e705c8(&local_290,"[SKIN_NAME]");
            FUN_00e71248(&local_1f0,0,&local_290,&local_200);
            if (local_288 != (void *)0x0) {
              operator_delete__(local_288);
              local_290 = 0;
              local_288 = (void *)0x0;
            }
            FUN_00e705c8(&local_290,"[UNLOCK_AMOUNT]");
            FUN_00e71248(&local_1f0,0,&local_290,&local_270);
            if (local_288 != (void *)0x0) {
              operator_delete__(local_288);
              local_290 = 0;
              local_288 = (void *)0x0;
            }
            FUN_00e705c8(&local_290,"[BALANCE_AMOUNT]");
            FUN_00e71248(&local_1f0,0,&local_290,&local_280);
            if (local_288 != (void *)0x0) {
              operator_delete__(local_288);
              local_290 = 0;
              local_288 = (void *)0x0;
            }
            uVar4 = FUN_00e6ce7c("SKINS_HUB_DIALOG_LACK_OPALS_TITLE",0);
            uVar6 = FUN_00e6ce7c("GENERIC_DIALOG_OKAY",0);
            uVar7 = FUN_00e6ce7c("MARKET_DIALOG_GET_OPALS",0);
            FUN_00a9b9f8(uVar4,&local_1f0,uVar6,uVar7,&DAT_03210450,param_1,0,FUN_00aa2034,0);
            if (local_278 != (void *)0x0) {
              operator_delete__(local_278);
              local_280 = 0;
              local_278 = (void *)0x0;
            }
            if (local_268 != (void *)0x0) {
              operator_delete__(local_268);
              local_270 = 0;
              local_268 = (void *)0x0;
            }
            if (local_1e8[0] != (void *)0x0) {
              operator_delete__(local_1e8[0]);
              local_1f0 = (undefined **)0x0;
              local_1e8[0] = (void *)0x0;
            }
          }
        }
        else {
          FUN_00aa1f0c();
        }
      }
      else {
        FUN_00aa1e80(param_1,local_260);
      }
    }
    else {
      uVar4 = FUN_00e6ce7c("MARKET_MUST_REGISTER_DIALOG_TITLE",0);
      uVar6 = FUN_00e6ce7c("MARKET_MUST_REGISTER_DIALOG_TEXT",0);
      uVar7 = FUN_00e6ce7c("GENERIC_DIALOG_OKAY",0);
      FUN_00a9b8b8(uVar4,uVar6,uVar7,0,0);
    }
    if ((local_260[0] & 1) != 0) {
      operator_delete(local_250);
    }
    FUN_009767f4(auStack_150);
    if ((local_248[0] & 1) != 0) {
      operator_delete(local_238);
    }
    if (local_1f8 != (void *)0x0) {
      operator_delete__(local_1f8);
      local_200 = 0;
      local_1f8 = (void *)0x0;
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00aa1e80(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  byte local_50 [16];
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_008fce60(param_1 + 0x18);
  uVar2 = FUN_009580b8();
  FUN_008fa54c(local_50,&DAT_01e277f2);
  FUN_00961494(uVar2,param_2,local_50);
  if ((local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00aa1f0c(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 local_c0;
  void *local_b8;
  undefined8 local_b0 [2];
  undefined8 local_a0;
  void *local_98;
  byte local_88;
  void *local_78;
  byte local_70;
  void *local_60;
  undefined8 local_54;
  undefined4 local_4c;
  byte local_48;
  void *local_38;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00aff894(local_b0);
  uVar2 = FUN_00e6ce7c("MENU_MARKET_ICE_PURCHASE_POPUP_TITLE",0);
  thunk_FUN_00e7051c(&local_c0,uVar2);
  FUN_00910394(&local_a0,&local_c0);
  local_b0[0] = 0x447a000044c80000;
  local_4c = 1;
  FUN_00aff91c(local_b0,PTR_s_build___MenuPartsCommon_tga_02be3530,"popup_fill",&DAT_01ba3ad8);
  local_54 = 0xffa3781effa4781e;
  uVar2 = FUN_00aa2040(PTR_s_MENU_CURRENCY_PURCHASE_POPUP_02be9d38,local_b0);
  FUN_00cbd980(uVar2,1);
  if (local_b8 != (void *)0x0) {
    operator_delete__(local_b8);
    local_c0 = 0;
    local_b8 = (void *)0x0;
  }
  if ((local_48 & 1) != 0) {
    operator_delete(local_38);
  }
  if ((local_70 & 1) != 0) {
    operator_delete(local_60);
  }
  if ((local_88 & 1) != 0) {
    operator_delete(local_78);
  }
  if (local_98 != (void *)0x0) {
    operator_delete__(local_98);
    local_a0 = 0;
    local_98 = (void *)0x0;
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

