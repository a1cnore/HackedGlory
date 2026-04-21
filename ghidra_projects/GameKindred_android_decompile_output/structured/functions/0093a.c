// functions/0093a — 21 functions
#include "libGameKindred.h"




void FUN_0093a024(byte *param_1,uint param_2)

{
  char *__src;
  void *pvVar1;
  ulong uVar2;
  byte *pbVar3;
  long lVar4;
  byte local_1e8 [16];
  void *local_1d8;
  byte local_1d0 [16];
  void *local_1c0;
  byte local_1b8 [16];
  void *local_1a8;
  byte local_1a0 [16];
  void *local_190;
  byte local_188 [16];
  char *local_178;
  char acStack_148 [256];
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  FUN_00936f18(local_188);
  __src = (char *)((ulong)local_188 | 1);
  if ((local_188[0] & 1) != 0) {
    __src = local_178;
  }
  strcpy(acStack_148,__src);
  if ((local_188[0] & 1) != 0) {
    operator_delete(local_178);
  }
  FUN_008fff20(local_188,&DAT_01bb6d43,param_2 & 1);
  FUN_008fa54c(local_1a0,"talentUpgradeVisited_");
  uVar2 = *(ulong *)(param_1 + 8);
  pbVar3 = *(byte **)(param_1 + 0x10);
  if ((*param_1 & 1) == 0) {
    pbVar3 = param_1 + 1;
    uVar2 = (ulong)(*param_1 >> 1);
  }
  FUN_0090de84(local_1a0,pbVar3,uVar2);
  FUN_00937044(local_1d0);
  pvVar1 = (void *)((ulong)local_1d0 | 1);
  if ((local_1d0[0] & 1) != 0) {
    pvVar1 = local_1c0;
  }
  FUN_008fa54c(local_1b8,pvVar1);
  FUN_008fa54c(local_1e8,local_188);
  FUN_00e6bd24(acStack_148,local_1b8,local_1a0,local_1e8);
  if ((local_1e8[0] & 1) != 0) {
    operator_delete(local_1d8);
  }
  if ((local_1b8[0] & 1) != 0) {
    operator_delete(local_1a8);
  }
  if ((local_1d0[0] & 1) != 0) {
    operator_delete(local_1c0);
  }
  if ((local_1a0[0] & 1) != 0) {
    operator_delete(local_190);
  }
  if (*(long *)(lVar4 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




bool FUN_0093a180(byte *param_1)

{
  char *__src;
  void *pvVar1;
  ulong uVar2;
  byte *pbVar3;
  long lVar4;
  bool bVar5;
  int iVar6;
  byte local_1b0 [16];
  void *local_1a0;
  byte local_198 [16];
  void *local_188;
  byte local_180 [16];
  void *local_170;
  byte local_168 [8];
  ulong local_160;
  void *local_158;
  byte local_150 [16];
  char *local_140;
  char acStack_138 [256];
  long local_38;
  
  lVar4 = tpidr_el0;
  local_38 = *(long *)(lVar4 + 0x28);
  FUN_00936f18(local_150);
  __src = (char *)((ulong)local_150 | 1);
  if ((local_150[0] & 1) != 0) {
    __src = local_140;
  }
  strcpy(acStack_138,__src);
  if ((local_150[0] & 1) != 0) {
    operator_delete(local_140);
  }
  FUN_008fa54c(local_150,"talentUpgradeVisited_");
  uVar2 = *(ulong *)(param_1 + 8);
  pbVar3 = *(byte **)(param_1 + 0x10);
  if ((*param_1 & 1) == 0) {
    pbVar3 = param_1 + 1;
    uVar2 = (ulong)(*param_1 >> 1);
  }
  FUN_0090de84(local_150,pbVar3,uVar2);
  FUN_00937044(local_198);
  pvVar1 = (void *)((ulong)local_198 | 1);
  if ((local_198[0] & 1) != 0) {
    pvVar1 = local_188;
  }
  FUN_008fa54c(local_180,pvVar1);
  FUN_008fa54c(local_1b0,"0");
  FUN_00e6bac8(local_168,acStack_138,local_180,local_150,local_1b0);
  if ((local_1b0[0] & 1) != 0) {
    operator_delete(local_1a0);
  }
  if ((local_180[0] & 1) != 0) {
    operator_delete(local_170);
  }
  if ((local_198[0] & 1) != 0) {
    operator_delete(local_188);
  }
  uVar2 = (ulong)(local_168[0] >> 1);
  if ((local_168[0] & 1) != 0) {
    uVar2 = local_160;
  }
  if (uVar2 == 1) {
    iVar6 = FUN_0090d610(local_168,0,0xffffffffffffffff,"0",1);
    bVar5 = iVar6 != 0;
  }
  else {
    bVar5 = true;
  }
  if ((local_168[0] & 1) != 0) {
    operator_delete(local_158);
  }
  if ((local_150[0] & 1) != 0) {
    operator_delete(local_140);
  }
  if (*(long *)(lVar4 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar5;
}




void FUN_0093a32c(undefined4 param_1)

{
  char *pcVar1;
  long lVar2;
  byte local_150 [16];
  char *local_140;
  char acStack_138 [256];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  FUN_00936f18(local_150);
  pcVar1 = (char *)((ulong)local_150 | 1);
  if ((local_150[0] & 1) != 0) {
    pcVar1 = local_140;
  }
  strcpy(acStack_138,pcVar1);
  if ((local_150[0] & 1) != 0) {
    operator_delete(local_140);
  }
  FUN_00937044(local_150);
  pcVar1 = (char *)((ulong)local_150 | 1);
  if ((local_150[0] & 1) != 0) {
    pcVar1 = local_140;
  }
  FUN_00e6b92c(acStack_138,pcVar1,"skillTierResetSeen",param_1);
  if ((local_150[0] & 1) != 0) {
    operator_delete(local_140);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




bool FUN_0093a3ec(int param_1)

{
  char *pcVar1;
  long lVar2;
  int iVar3;
  byte local_150 [16];
  char *local_140;
  char acStack_138 [256];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  FUN_00936f18(local_150);
  pcVar1 = (char *)((ulong)local_150 | 1);
  if ((local_150[0] & 1) != 0) {
    pcVar1 = local_140;
  }
  strcpy(acStack_138,pcVar1);
  if ((local_150[0] & 1) != 0) {
    operator_delete(local_140);
  }
  FUN_00937044(local_150);
  pcVar1 = (char *)((ulong)local_150 | 1);
  if ((local_150[0] & 1) != 0) {
    pcVar1 = local_140;
  }
  iVar3 = FUN_00e6b86c(acStack_138,pcVar1,"skillTierResetSeen",0xffffffff);
  if ((local_150[0] & 1) != 0) {
    operator_delete(local_140);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return -1 < iVar3 && iVar3 == param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_0093a4c4(void)

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
  FUN_00e6b8f8(acStack_138,pvVar1,"tutorialSeen",1);
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




uint FUN_0093a588(void)

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
  uVar3 = FUN_00e6b838(acStack_138,pvVar1,"tutorialSeen",0);
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




void FUN_0093a654(uint param_1)

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
  FUN_00e6b8f8(acStack_138,pvVar1,"firstGameKeyhole",param_1 & 1);
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




uint FUN_0093a71c(void)

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
  uVar3 = FUN_00e6b838(acStack_138,pvVar1,"firstGameKeyhole",0);
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




uint FUN_0093a7e8(void)

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
  uVar3 = FUN_00e6b838(acStack_138,pvVar1,"sizzleVideoSeen",0);
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




void FUN_0093a8b4(void)

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
  FUN_00e6b8f8(acStack_138,pvVar1,"sizzleVideoSeen",1);
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




uint FUN_0093a978(void)

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
  uVar3 = FUN_00e6b838(acStack_138,pvVar1,"firstLaunchCompleted",0);
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




void FUN_0093aa44(void)

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
  FUN_00e6b8f8(acStack_138,pvVar1,"firstLaunchCompleted",1);
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




void FUN_0093ab08(void)

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
  FUN_00e6b8f8(acStack_138,pvVar1,"starFollowTutorialSeen",1);
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




uint FUN_0093abcc(void)

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
  uVar3 = FUN_00e6b838(acStack_138,pvVar1,"starFollowTutorialSeen",0);
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




void FUN_0093ac98(uint param_1)

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
  FUN_00e6b8f8(acStack_138,pvVar1,"tutorialCompletePopupShown",param_1 & 1);
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




uint FUN_0093ad60(void)

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
  uVar3 = FUN_00e6b838(acStack_138,pvVar1,"tutorialCompletePopupShown",0);
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




void FUN_0093ae2c(uint param_1)

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
  FUN_00e6b8f8(acStack_138,pvVar1,"InGameReminderSettingsPopupShown",param_1 & 1);
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




uint FUN_0093aef4(void)

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
  uVar3 = FUN_00e6b838(acStack_138,pvVar1,"InGameReminderSettingsPopupShown",0);
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




void FUN_0093afc0(void)

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
  FUN_00e6b8f8(acStack_138,pvVar1,"seasonEloResetTutorialSeen",1);
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




void thunk_FUN_0093a4c4(void)

{
  char *__src;
  void *pvVar1;
  long lVar2;
  byte abStack_168 [16];
  void *pvStack_158;
  byte abStack_150 [16];
  char *pcStack_140;
  char acStack_138 [256];
  long lStack_38;
  
  lVar2 = tpidr_el0;
  lStack_38 = *(long *)(lVar2 + 0x28);
  FUN_00936f18(abStack_150);
  __src = (char *)((ulong)abStack_150 | 1);
  if ((abStack_150[0] & 1) != 0) {
    __src = pcStack_140;
  }
  strcpy(acStack_138,__src);
  FUN_00937044(abStack_168);
  pvVar1 = (void *)((ulong)abStack_168 | 1);
  if ((abStack_168[0] & 1) != 0) {
    pvVar1 = pvStack_158;
  }
  FUN_00e6b8f8(acStack_138,pvVar1,"tutorialSeen",1);
  if ((abStack_168[0] & 1) != 0) {
    operator_delete(pvStack_158);
  }
  if ((abStack_150[0] & 1) != 0) {
    operator_delete(pcStack_140);
  }
  if (*(long *)(lVar2 + 0x28) == lStack_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




uint thunk_FUN_0093a588(void)

{
  char *__src;
  void *pvVar1;
  long lVar2;
  uint uVar3;
  byte abStack_168 [16];
  void *pvStack_158;
  byte abStack_150 [16];
  char *pcStack_140;
  char acStack_138 [256];
  long lStack_38;
  
  lVar2 = tpidr_el0;
  lStack_38 = *(long *)(lVar2 + 0x28);
  FUN_00936f18(abStack_150);
  __src = (char *)((ulong)abStack_150 | 1);
  if ((abStack_150[0] & 1) != 0) {
    __src = pcStack_140;
  }
  strcpy(acStack_138,__src);
  FUN_00937044(abStack_168);
  pvVar1 = (void *)((ulong)abStack_168 | 1);
  if ((abStack_168[0] & 1) != 0) {
    pvVar1 = pvStack_158;
  }
  uVar3 = FUN_00e6b838(acStack_138,pvVar1,"tutorialSeen",0);
  if ((abStack_168[0] & 1) != 0) {
    operator_delete(pvStack_158);
  }
  if ((abStack_150[0] & 1) != 0) {
    operator_delete(pcStack_140);
  }
  if (*(long *)(lVar2 + 0x28) == lStack_38) {
    return uVar3 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

