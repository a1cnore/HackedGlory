// functions/0093b — 15 functions
#include "libGameKindred.h"




uint FUN_0093b084(void)

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
  uVar3 = FUN_00e6b838(acStack_138,pvVar1,"seasonEloResetTutorialSeen",0);
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




void FUN_0093b150(undefined8 param_1)

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
  FUN_008fa54c(local_1f0,"lastAutoPresenceBroadcast");
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




undefined8 FUN_0093b280(void)

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
  FUN_008fa54c(local_1b0,"lastAutoPresenceBroadcast");
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




void FUN_0093b3e0(undefined8 param_1)

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
  FUN_008fa54c(local_1f0,"lastTivView");
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




undefined8 FUN_0093b510(void)

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
  FUN_008fa54c(local_1b0,"lastTivView");
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




void FUN_0093b670(undefined8 param_1)

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
  FUN_008fa54c(local_1f0,"lastManualPresenceBroadcast");
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




undefined8 FUN_0093b7a0(void)

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
  FUN_008fa54c(local_1b0,"lastManualPresenceBroadcast");
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




void FUN_0093b900(undefined4 param_1)

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
  FUN_008fa54c(local_1f0,"seasonIndex");
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




uint FUN_0093ba30(void)

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
  FUN_008fa54c(local_1b0,"seasonIndex");
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




void FUN_0093bb90(void)

{
  size_t sVar1;
  size_t sVar2;
  byte bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  long lVar8;
  char *pcVar9;
  char *pcVar10;
  void *pvVar11;
  
  lVar8 = FUN_009580b8();
  bVar3 = *(byte *)(lVar8 + 0x5478);
  sVar1 = (ulong)(bVar3 >> 1);
  if ((bVar3 & 1) != 0) {
    sVar1 = *(size_t *)(lVar8 + 0x5480);
  }
  sVar2 = (ulong)(DAT_0320ffa8 >> 1);
  if ((DAT_0320ffa8 & 1) != 0) {
    sVar2 = DAT_0320ffb0;
  }
  if (sVar1 == sVar2) {
    pvVar11 = *(void **)(lVar8 + 0x5488);
    if ((bVar3 & 1) == 0) {
      pvVar11 = (void *)(lVar8 + 0x5479);
    }
    pcVar9 = DAT_0320ffb8;
    if ((DAT_0320ffa8 & 1) == 0) {
      pcVar9 = &DAT_0320ffa9;
    }
    if ((bVar3 & 1) == 0) {
      if (sVar1 != 0) {
        pcVar10 = (char *)(lVar8 + 0x5479);
        lVar8 = -(ulong)(bVar3 >> 1);
        do {
          if (*pcVar10 != *pcVar9) goto LAB_0093bc30;
          pcVar10 = pcVar10 + 1;
          lVar8 = lVar8 + 1;
          pcVar9 = pcVar9 + 1;
        } while (lVar8 != 0);
      }
    }
    else if (sVar1 != 0) {
      iVar7 = memcmp(pvVar11,pcVar9,sVar1);
      bVar4 = iVar7 != 0;
      goto LAB_0093bc50;
    }
    bVar4 = false;
  }
  else {
LAB_0093bc30:
    bVar4 = true;
  }
LAB_0093bc50:
  lVar8 = FUN_009580b8();
  bVar3 = *(byte *)(lVar8 + 0x5490);
  sVar1 = (ulong)(bVar3 >> 1);
  if ((bVar3 & 1) != 0) {
    sVar1 = *(size_t *)(lVar8 + 0x5498);
  }
  sVar2 = (ulong)(DAT_0320ffa8 >> 1);
  if ((DAT_0320ffa8 & 1) != 0) {
    sVar2 = DAT_0320ffb0;
  }
  if (sVar1 == sVar2) {
    pvVar11 = *(void **)(lVar8 + 0x54a0);
    if ((bVar3 & 1) == 0) {
      pvVar11 = (void *)(lVar8 + 0x5491);
    }
    pcVar9 = DAT_0320ffb8;
    if ((DAT_0320ffa8 & 1) == 0) {
      pcVar9 = &DAT_0320ffa9;
    }
    if ((bVar3 & 1) == 0) {
      if (sVar1 != 0) {
        pcVar10 = (char *)(lVar8 + 0x5491);
        lVar8 = -(ulong)(bVar3 >> 1);
        do {
          if (*pcVar10 != *pcVar9) goto LAB_0093bcd8;
          pcVar10 = pcVar10 + 1;
          lVar8 = lVar8 + 1;
          pcVar9 = pcVar9 + 1;
        } while (lVar8 != 0);
      }
    }
    else if (sVar1 != 0) {
      iVar7 = memcmp(pvVar11,pcVar9,sVar1);
      bVar5 = iVar7 != 0;
      goto LAB_0093bcf8;
    }
    bVar5 = false;
  }
  else {
LAB_0093bcd8:
    bVar5 = true;
  }
LAB_0093bcf8:
  FUN_0093bda8("seasonStart",bVar4 & bVar5);
  FUN_0093bda8("season10Days",0);
  FUN_0093bda8("season30Days",0);
  FUN_0093bda8("season60Days",0);
  if ((bVar4 | bVar5) == 1) {
    iVar7 = FUN_0093ba30();
    bVar6 = iVar7 == 0;
  }
  else {
    bVar6 = true;
  }
  FUN_0093bda8("seasonAllianceTrophy",bVar6);
  FUN_0093bda8("seasonGuildTrophy",bVar4 ^ 1);
  FUN_0093bda8("seasonTeamTrophy",bVar5 ^ 1);
  iVar7 = FUN_0093ba30();
  FUN_0093bda8("seasonProfileTrophy",iVar7 == 0);
  return;
}




void FUN_0093bda8(undefined8 param_1,uint param_2)

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
  FUN_008fff20(auStack_188,"tooltipSeen_%s",param_1);
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




undefined1 FUN_0093be8c(void)

{
  return DAT_02c7c050;
}




void FUN_0093be98(byte param_1)

{
  DAT_02c7c050 = param_1 & 1;
  return;
}




uint FUN_0093bea8(undefined8 param_1)

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
  FUN_008fff20(auStack_178,"tooltipSeen_%s",param_1);
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




void FUN_0093bf88(undefined8 param_1,uint param_2)

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
  FUN_008fff20(auStack_188,"dialogSeen_%s",param_1);
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

