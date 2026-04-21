// functions/0093c — 17 functions
#include "libGameKindred.h"




uint FUN_0093c06c(undefined8 param_1)

{
  char *__src;
  void *pvVar1;
  long lVar2;
  uint uVar3;
  byte local_1a8 [16];
  void *local_198;
  byte local_190 [16];
  char *local_180;
  undefined1 auStack_178 [64];
  char acStack_138 [256];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  FUN_00936f18(local_190);
  __src = (char *)((ulong)local_190 | 1);
  if ((local_190[0] & 1) != 0) {
    __src = local_180;
  }
  strcpy(acStack_138,__src);
  FUN_008fff20(auStack_178,"dialogSeen_%s",param_1);
  FUN_00937044(local_1a8);
  pvVar1 = (void *)((ulong)local_1a8 | 1);
  if ((local_1a8[0] & 1) != 0) {
    pvVar1 = local_198;
  }
  uVar3 = FUN_00e6b838(acStack_138,pvVar1,auStack_178,0);
  if ((local_1a8[0] & 1) != 0) {
    operator_delete(local_198);
  }
  if ((local_190[0] & 1) != 0) {
    operator_delete(local_180);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return uVar3 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_0093c14c(undefined8 param_1)

{
  char *__src;
  void *pvVar1;
  long lVar2;
  float fVar3;
  byte local_168 [16];
  void *local_158;
  byte local_150 [16];
  char *local_140;
  char acStack_138 [256];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  fVar3 = (float)FUN_0093c228();
  if (fVar3 < (float)param_1) {
    FUN_00936f18(local_150);
    __src = (char *)((ulong)local_150 | 1);
    if ((local_150[0] & 1) != 0) {
      __src = local_140;
    }
    strcpy(acStack_138,__src);
    FUN_00937044(local_168);
    pvVar1 = (void *)((ulong)local_168 | 1);
    if ((local_168[0] & 1) != 0) {
      pvVar1 = local_158;
    }
    FUN_00e6b960(param_1,acStack_138,pvVar1,"highestBotDifficultyPlayed");
    if ((local_168[0] & 1) != 0) {
      operator_delete(local_158);
    }
    if ((local_150[0] & 1) != 0) {
      operator_delete(local_140);
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined1  [16] FUN_0093c228(void)

{
  char *__src;
  void *pvVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined8 uVar4;
  byte local_168 [16];
  void *local_158;
  byte local_150 [16];
  char *local_140;
  char acStack_138 [256];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  FUN_00936f18(local_150);
  __src = (char *)((ulong)local_150 | 1);
  if ((local_150[0] & 1) != 0) {
    __src = local_140;
  }
  strcpy(acStack_138,__src);
  FUN_00937044(local_168);
  pvVar1 = (void *)((ulong)local_168 | 1);
  if ((local_168[0] & 1) != 0) {
    pvVar1 = local_158;
  }
  auVar3 = FUN_00e6b898(0xbf800000,acStack_138,pvVar1,"highestBotDifficultyPlayed");
  uVar4 = auVar3._8_8_;
  if ((local_168[0] & 1) != 0) {
    operator_delete(local_158);
  }
  if ((local_150[0] & 1) != 0) {
    operator_delete(local_140);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    auVar3._8_8_ = uVar4;
    return auVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_0093c2fc(undefined8 param_1,uint param_2)

{
  char *__src;
  void *pvVar1;
  long lVar2;
  byte local_1b8 [16];
  void *local_1a8;
  byte local_1a0 [16];
  char *local_190;
  undefined1 auStack_188 [64];
  char acStack_148 [256];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  FUN_00936f18(local_1a0);
  __src = (char *)((ulong)local_1a0 | 1);
  if ((local_1a0[0] & 1) != 0) {
    __src = local_190;
  }
  strcpy(acStack_148,__src);
  FUN_008fff20(auStack_188,"featureIntroduced_%s",param_1);
  FUN_00937044(local_1b8);
  pvVar1 = (void *)((ulong)local_1b8 | 1);
  if ((local_1b8[0] & 1) != 0) {
    pvVar1 = local_1a8;
  }
  FUN_00e6b8f8(acStack_148,pvVar1,auStack_188,param_2 & 1);
  if ((local_1b8[0] & 1) != 0) {
    operator_delete(local_1a8);
  }
  if ((local_1a0[0] & 1) != 0) {
    operator_delete(local_190);
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




uint FUN_0093c3e0(undefined8 param_1)

{
  char *__src;
  void *pvVar1;
  long lVar2;
  uint uVar3;
  byte local_1a8 [16];
  void *local_198;
  byte local_190 [16];
  char *local_180;
  undefined1 auStack_178 [64];
  char acStack_138 [256];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  FUN_00936f18(local_190);
  __src = (char *)((ulong)local_190 | 1);
  if ((local_190[0] & 1) != 0) {
    __src = local_180;
  }
  strcpy(acStack_138,__src);
  FUN_008fff20(auStack_178,"featureIntroduced_%s",param_1);
  FUN_00937044(local_1a8);
  pvVar1 = (void *)((ulong)local_1a8 | 1);
  if ((local_1a8[0] & 1) != 0) {
    pvVar1 = local_198;
  }
  uVar3 = FUN_00e6b838(acStack_138,pvVar1,auStack_178,0);
  if ((local_1a8[0] & 1) != 0) {
    operator_delete(local_198);
  }
  if ((local_190[0] & 1) != 0) {
    operator_delete(local_180);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return uVar3 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_0093c4c0(uint param_1)

{
  char *__src;
  void *pvVar1;
  long lVar2;
  byte local_168 [16];
  void *local_158;
  byte local_150 [16];
  char *local_140;
  char acStack_138 [256];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  FUN_00936f18(local_150);
  __src = (char *)((ulong)local_150 | 1);
  if ((local_150[0] & 1) != 0) {
    __src = local_140;
  }
  strcpy(acStack_138,__src);
  FUN_00937044(local_168);
  pvVar1 = (void *)((ulong)local_168 | 1);
  if ((local_168[0] & 1) != 0) {
    pvVar1 = local_158;
  }
  FUN_00e6b8f8(acStack_138,pvVar1,"allowPushNotifications",param_1 & 1);
  if ((local_168[0] & 1) != 0) {
    operator_delete(local_158);
  }
  if ((local_150[0] & 1) != 0) {
    operator_delete(local_140);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




uint FUN_0093c588(void)

{
  char *__src;
  void *pvVar1;
  long lVar2;
  uint uVar3;
  byte local_168 [16];
  void *local_158;
  byte local_150 [16];
  char *local_140;
  char acStack_138 [256];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  FUN_00936f18(local_150);
  __src = (char *)((ulong)local_150 | 1);
  if ((local_150[0] & 1) != 0) {
    __src = local_140;
  }
  strcpy(acStack_138,__src);
  FUN_00937044(local_168);
  pvVar1 = (void *)((ulong)local_168 | 1);
  if ((local_168[0] & 1) != 0) {
    pvVar1 = local_158;
  }
  uVar3 = FUN_00e6b838(acStack_138,pvVar1,"allowPushNotifications",0);
  if ((local_168[0] & 1) != 0) {
    operator_delete(local_158);
  }
  if ((local_150[0] & 1) != 0) {
    operator_delete(local_140);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return uVar3 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_0093c654(uint param_1)

{
  char *__src;
  void *pvVar1;
  long lVar2;
  byte local_168 [16];
  void *local_158;
  byte local_150 [16];
  char *local_140;
  char acStack_138 [256];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  FUN_00936f18(local_150);
  __src = (char *)((ulong)local_150 | 1);
  if ((local_150[0] & 1) != 0) {
    __src = local_140;
  }
  strcpy(acStack_138,__src);
  FUN_00937044(local_168);
  pvVar1 = (void *)((ulong)local_168 | 1);
  if ((local_168[0] & 1) != 0) {
    pvVar1 = local_158;
  }
  FUN_00e6b8f8(acStack_138,pvVar1,"showBlindLobbySections",param_1 & 1);
  if ((local_168[0] & 1) != 0) {
    operator_delete(local_158);
  }
  if ((local_150[0] & 1) != 0) {
    operator_delete(local_140);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




uint FUN_0093c71c(void)

{
  char *__src;
  void *pvVar1;
  long lVar2;
  uint uVar3;
  byte local_168 [16];
  void *local_158;
  byte local_150 [16];
  char *local_140;
  char acStack_138 [256];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  FUN_00936f18(local_150);
  __src = (char *)((ulong)local_150 | 1);
  if ((local_150[0] & 1) != 0) {
    __src = local_140;
  }
  strcpy(acStack_138,__src);
  FUN_00937044(local_168);
  pvVar1 = (void *)((ulong)local_168 | 1);
  if ((local_168[0] & 1) != 0) {
    pvVar1 = local_158;
  }
  uVar3 = FUN_00e6b838(acStack_138,pvVar1,"showBlindLobbySections",1);
  if ((local_168[0] & 1) != 0) {
    operator_delete(local_158);
  }
  if ((local_150[0] & 1) != 0) {
    operator_delete(local_140);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return uVar3 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_0093c7e8(undefined8 param_1)

{
  char *__src;
  void *pvVar1;
  long lVar2;
  byte local_1f0 [16];
  void *local_1e0;
  byte local_1d8 [16];
  void *local_1c8;
  byte local_1c0 [16];
  void *local_1b0;
  byte local_1a8 [16];
  void *local_198;
  byte local_190 [16];
  char *local_180;
  undefined1 auStack_178 [64];
  char acStack_138 [256];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  FUN_00936f18(local_190);
  __src = (char *)((ulong)local_190 | 1);
  if ((local_190[0] & 1) != 0) {
    __src = local_180;
  }
  strcpy(acStack_138,__src);
  FUN_008fff20(auStack_178,&DAT_01b95673,param_1);
  FUN_008fa54c(local_1a8,auStack_178);
  FUN_00937044(local_1d8);
  pvVar1 = (void *)((ulong)local_1d8 | 1);
  if ((local_1d8[0] & 1) != 0) {
    pvVar1 = local_1c8;
  }
  FUN_008fa54c(local_1c0,pvVar1);
  FUN_008fa54c(local_1f0,"pushNotificationLastAskTime");
  FUN_00e6bd24(acStack_138,local_1c0,local_1f0,local_1a8);
  if ((local_1f0[0] & 1) != 0) {
    operator_delete(local_1e0);
  }
  if ((local_1c0[0] & 1) != 0) {
    operator_delete(local_1b0);
  }
  if ((local_1d8[0] & 1) != 0) {
    operator_delete(local_1c8);
  }
  if ((local_1a8[0] & 1) != 0) {
    operator_delete(local_198);
  }
  if ((local_190[0] & 1) != 0) {
    operator_delete(local_180);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 FUN_0093c918(void)

{
  char *__src;
  void *pvVar1;
  long lVar2;
  byte local_1c8 [16];
  void *local_1b8;
  byte local_1b0 [16];
  void *local_1a0;
  byte local_198 [16];
  void *local_188;
  byte local_180;
  undefined7 uStack_17f;
  void *local_170;
  byte local_168 [16];
  void *local_158;
  byte local_150 [16];
  char *local_140;
  char acStack_138 [256];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  FUN_00936f18(local_150);
  __src = (char *)((ulong)local_150 | 1);
  if ((local_150[0] & 1) != 0) {
    __src = local_140;
  }
  strcpy(acStack_138,__src);
  FUN_00937044(local_198);
  pvVar1 = (void *)((ulong)local_198 | 1);
  if ((local_198[0] & 1) != 0) {
    pvVar1 = local_188;
  }
  FUN_008fa54c(&local_180,pvVar1);
  FUN_008fa54c(local_1b0,"pushNotificationLastAskTime");
  FUN_008fa54c(local_1c8,"0");
  FUN_00e6bac8(local_168,acStack_138,&local_180,local_1b0,local_1c8);
  if ((local_1c8[0] & 1) != 0) {
    operator_delete(local_1b8);
  }
  if ((local_1b0[0] & 1) != 0) {
    operator_delete(local_1a0);
  }
  if ((local_180 & 1) != 0) {
    operator_delete(local_170);
  }
  if ((local_198[0] & 1) != 0) {
    operator_delete(local_188);
  }
  pvVar1 = (void *)((ulong)local_168 | 1);
  if ((local_168[0] & 1) != 0) {
    pvVar1 = local_158;
  }
  FUN_00e6acac(pvVar1,&DAT_01b95673,&local_180);
  if ((local_168[0] & 1) != 0) {
    operator_delete(local_158);
  }
  if ((local_150[0] & 1) != 0) {
    operator_delete(local_140);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return CONCAT71(uStack_17f,local_180);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




bool FUN_0093ca78(void)

{
  long lVar1;
  long lVar2;
  
  lVar1 = FUN_0093c918();
  lVar2 = FUN_00e85318(0);
  return lVar1 + 0x93a80 <= lVar2;
}




void FUN_0093cab4(undefined4 param_1)

{
  char *__src;
  void *pvVar1;
  long lVar2;
  byte local_1f0 [16];
  void *local_1e0;
  byte local_1d8 [16];
  void *local_1c8;
  byte local_1c0 [16];
  void *local_1b0;
  byte local_1a8 [16];
  void *local_198;
  byte local_190 [16];
  char *local_180;
  undefined1 auStack_178 [64];
  char acStack_138 [256];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  FUN_00936f18(local_190);
  __src = (char *)((ulong)local_190 | 1);
  if ((local_190[0] & 1) != 0) {
    __src = local_180;
  }
  strcpy(acStack_138,__src);
  FUN_008fff20(auStack_178,&DAT_01bb6d43,param_1);
  FUN_008fa54c(local_1a8,auStack_178);
  FUN_00937044(local_1d8);
  pvVar1 = (void *)((ulong)local_1d8 | 1);
  if ((local_1d8[0] & 1) != 0) {
    pvVar1 = local_1c8;
  }
  FUN_008fa54c(local_1c0,pvVar1);
  FUN_008fa54c(local_1f0,"rateAppResponse");
  FUN_00e6bd24(acStack_138,local_1c0,local_1f0,local_1a8);
  if ((local_1f0[0] & 1) != 0) {
    operator_delete(local_1e0);
  }
  if ((local_1c0[0] & 1) != 0) {
    operator_delete(local_1b0);
  }
  if ((local_1d8[0] & 1) != 0) {
    operator_delete(local_1c8);
  }
  if ((local_1a8[0] & 1) != 0) {
    operator_delete(local_198);
  }
  if ((local_190[0] & 1) != 0) {
    operator_delete(local_180);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




uint FUN_0093cbe4(void)

{
  char *__src;
  void *pvVar1;
  long lVar2;
  byte local_1c8 [16];
  void *local_1b8;
  byte local_1b0 [16];
  void *local_1a0;
  byte local_198 [16];
  void *local_188;
  uint local_180 [4];
  void *local_170;
  byte local_168 [16];
  void *local_158;
  byte local_150 [16];
  char *local_140;
  char acStack_138 [256];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  FUN_00936f18(local_150);
  __src = (char *)((ulong)local_150 | 1);
  if ((local_150[0] & 1) != 0) {
    __src = local_140;
  }
  strcpy(acStack_138,__src);
  FUN_00937044(local_198);
  pvVar1 = (void *)((ulong)local_198 | 1);
  if ((local_198[0] & 1) != 0) {
    pvVar1 = local_188;
  }
  FUN_008fa54c(local_180,pvVar1);
  FUN_008fa54c(local_1b0,"rateAppResponse");
  FUN_008fa54c(local_1c8,"0");
  FUN_00e6bac8(local_168,acStack_138,local_180,local_1b0,local_1c8);
  if ((local_1c8[0] & 1) != 0) {
    operator_delete(local_1b8);
  }
  if ((local_1b0[0] & 1) != 0) {
    operator_delete(local_1a0);
  }
  if ((local_180[0] & 1) != 0) {
    operator_delete(local_170);
  }
  if ((local_198[0] & 1) != 0) {
    operator_delete(local_188);
  }
  pvVar1 = (void *)((ulong)local_168 | 1);
  if ((local_168[0] & 1) != 0) {
    pvVar1 = local_158;
  }
  FUN_00e6acac(pvVar1,&DAT_01bb6d43,local_180);
  if ((local_168[0] & 1) != 0) {
    operator_delete(local_158);
  }
  if ((local_150[0] & 1) != 0) {
    operator_delete(local_140);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return local_180[0];
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_0093cd44(undefined8 param_1)

{
  char *__src;
  void *pvVar1;
  long lVar2;
  byte local_1f0 [16];
  void *local_1e0;
  byte local_1d8 [16];
  void *local_1c8;
  byte local_1c0 [16];
  void *local_1b0;
  byte local_1a8 [16];
  void *local_198;
  byte local_190 [16];
  char *local_180;
  undefined1 auStack_178 [64];
  char acStack_138 [256];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  FUN_00936f18(local_190);
  __src = (char *)((ulong)local_190 | 1);
  if ((local_190[0] & 1) != 0) {
    __src = local_180;
  }
  strcpy(acStack_138,__src);
  FUN_008fff20(auStack_178,&DAT_01b95673,param_1);
  FUN_008fa54c(local_1a8,auStack_178);
  FUN_00937044(local_1d8);
  pvVar1 = (void *)((ulong)local_1d8 | 1);
  if ((local_1d8[0] & 1) != 0) {
    pvVar1 = local_1c8;
  }
  FUN_008fa54c(local_1c0,pvVar1);
  FUN_008fa54c(local_1f0,"rateAppLastAskTime");
  FUN_00e6bd24(acStack_138,local_1c0,local_1f0,local_1a8);
  if ((local_1f0[0] & 1) != 0) {
    operator_delete(local_1e0);
  }
  if ((local_1c0[0] & 1) != 0) {
    operator_delete(local_1b0);
  }
  if ((local_1d8[0] & 1) != 0) {
    operator_delete(local_1c8);
  }
  if ((local_1a8[0] & 1) != 0) {
    operator_delete(local_198);
  }
  if ((local_190[0] & 1) != 0) {
    operator_delete(local_180);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 FUN_0093ce74(void)

{
  char *__src;
  void *pvVar1;
  long lVar2;
  byte local_1c8 [16];
  void *local_1b8;
  byte local_1b0 [16];
  void *local_1a0;
  byte local_198 [16];
  void *local_188;
  byte local_180;
  undefined7 uStack_17f;
  void *local_170;
  byte local_168 [16];
  void *local_158;
  byte local_150 [16];
  char *local_140;
  char acStack_138 [256];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  FUN_00936f18(local_150);
  __src = (char *)((ulong)local_150 | 1);
  if ((local_150[0] & 1) != 0) {
    __src = local_140;
  }
  strcpy(acStack_138,__src);
  FUN_00937044(local_198);
  pvVar1 = (void *)((ulong)local_198 | 1);
  if ((local_198[0] & 1) != 0) {
    pvVar1 = local_188;
  }
  FUN_008fa54c(&local_180,pvVar1);
  FUN_008fa54c(local_1b0,"rateAppLastAskTime");
  FUN_008fa54c(local_1c8,"0");
  FUN_00e6bac8(local_168,acStack_138,&local_180,local_1b0,local_1c8);
  if ((local_1c8[0] & 1) != 0) {
    operator_delete(local_1b8);
  }
  if ((local_1b0[0] & 1) != 0) {
    operator_delete(local_1a0);
  }
  if ((local_180 & 1) != 0) {
    operator_delete(local_170);
  }
  if ((local_198[0] & 1) != 0) {
    operator_delete(local_188);
  }
  pvVar1 = (void *)((ulong)local_168 | 1);
  if ((local_168[0] & 1) != 0) {
    pvVar1 = local_158;
  }
  FUN_00e6acac(pvVar1,&DAT_01b95673,&local_180);
  if ((local_168[0] & 1) != 0) {
    operator_delete(local_158);
  }
  if ((local_150[0] & 1) != 0) {
    operator_delete(local_140);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return CONCAT71(uStack_17f,local_180);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_0093cfd4(void)

{
  char *__src;
  void *pvVar1;
  long lVar2;
  undefined8 uVar3;
  byte local_1f0 [16];
  void *local_1e0;
  byte local_1d8 [16];
  void *local_1c8;
  byte local_1c0 [16];
  void *local_1b0;
  byte local_1a8 [16];
  void *local_198;
  byte local_190 [16];
  char *local_180;
  undefined1 auStack_178 [64];
  char acStack_138 [256];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  FUN_00936f18(local_190);
  __src = (char *)((ulong)local_190 | 1);
  if ((local_190[0] & 1) != 0) {
    __src = local_180;
  }
  strcpy(acStack_138,__src);
  uVar3 = FUN_00e6b5e4();
  FUN_008fff20(auStack_178,&DAT_01b95673,uVar3);
  FUN_008fa54c(local_1a8,auStack_178);
  FUN_00937044(local_1d8);
  pvVar1 = (void *)((ulong)local_1d8 | 1);
  if ((local_1d8[0] & 1) != 0) {
    pvVar1 = local_1c8;
  }
  FUN_008fa54c(local_1c0,pvVar1);
  FUN_008fa54c(local_1f0,"earlyOfferLastShownTime");
  FUN_00e6bd24(acStack_138,local_1c0,local_1f0,local_1a8);
  if ((local_1f0[0] & 1) != 0) {
    operator_delete(local_1e0);
  }
  if ((local_1c0[0] & 1) != 0) {
    operator_delete(local_1b0);
  }
  if ((local_1d8[0] & 1) != 0) {
    operator_delete(local_1c8);
  }
  if ((local_1a8[0] & 1) != 0) {
    operator_delete(local_198);
  }
  if ((local_190[0] & 1) != 0) {
    operator_delete(local_180);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

