// functions/0090f — 20 functions
#include "libGameKindred.h"




void FUN_0090f23c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  byte local_178 [16];
  void *local_168;
  byte local_160 [16];
  void *local_150;
  undefined1 local_148 [256];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  iVar2 = FUN_00e70b14(param_3);
  if (iVar2 != 0) {
    local_148[0] = 0;
    iVar2 = (**(code **)(**(long **)(param_1 + 200) + 0x70))();
    if (iVar2 == 0) {
      lVar3 = FUN_00e85318(0);
      FUN_00e6c2cc((double)lVar3,local_148,0x100);
    }
    FUN_008fa54c(local_160,param_2);
    uVar4 = FUN_0090e774(param_1,local_160);
    FUN_008fa54c(local_178,local_148);
    FUN_009e184c(uVar4,param_3,&DAT_0320ffa8,&DAT_0320ffa8,&DAT_0320ffa8,local_178,0,0,1,0);
    if ((local_178[0] & 1) != 0) {
      operator_delete(local_168);
    }
    if ((local_160[0] & 1) != 0) {
      operator_delete(local_150);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_0090f350(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0090f35c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 200) + 0xc0))();
  return;
}




void FUN_0090f360(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0090f36c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 200) + 200))();
  return;
}




void FUN_0090f370(long param_1)

{
  size_t sVar1;
  size_t sVar2;
  byte bVar3;
  long lVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  long lVar8;
  void *pvVar9;
  size_t sVar10;
  byte bVar11;
  size_t sVar12;
  byte local_88 [16];
  void *local_78;
  byte local_70 [16];
  void *local_60;
  long local_58;
  
  sVar10 = DAT_0320ffb0;
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  bVar3 = *(byte *)(param_1 + 0x140);
  sVar12 = (size_t)(DAT_0320ffa8 >> 1);
  sVar2 = (ulong)(bVar3 >> 1);
  if ((bVar3 & 1) != 0) {
    sVar2 = *(size_t *)(param_1 + 0x148);
  }
  sVar1 = sVar12;
  if ((DAT_0320ffa8 & 1) != 0) {
    sVar1 = DAT_0320ffb0;
  }
  if (sVar2 == sVar1) {
    pvVar9 = *(void **)(param_1 + 0x150);
    bVar11 = DAT_0320ffa8 & 1;
    if ((bVar3 & 1) == 0) {
      pvVar9 = (void *)(param_1 + 0x141);
    }
    pcVar6 = DAT_0320ffb8;
    if ((DAT_0320ffa8 & 1) == 0) {
      pcVar6 = &DAT_0320ffa9;
    }
    if ((bVar3 & 1) == 0) {
      if (sVar2 != 0) {
        pcVar7 = (char *)(param_1 + 0x141);
        lVar8 = -(ulong)(bVar3 >> 1);
        do {
          if (*pcVar7 != *pcVar6) goto LAB_0090f434;
          pcVar7 = pcVar7 + 1;
          lVar8 = lVar8 + 1;
          pcVar6 = pcVar6 + 1;
        } while (lVar8 != 0);
      }
    }
    else if ((sVar2 != 0) && (iVar5 = memcmp(pvVar9,pcVar6,sVar2), iVar5 != 0)) goto LAB_0090f434;
  }
  else {
LAB_0090f434:
    FUN_0090dab8(local_88,&DAT_01b9349c,param_1 + 0x140);
    FUN_008fcdb8(local_70,local_88);
    if ((local_88[0] & 1) != 0) {
      operator_delete(local_78);
    }
    pvVar9 = (void *)((ulong)local_70 | 1);
    if ((local_70[0] & 1) != 0) {
      pvVar9 = local_60;
    }
    lVar8 = (**(code **)(**(long **)(param_1 + 200) + 0x90))(*(long **)(param_1 + 200),pvVar9);
    if (lVar8 == 0) {
      pvVar9 = (void *)((ulong)local_70 | 1);
      if ((local_70[0] & 1) != 0) {
        pvVar9 = local_60;
      }
      FUN_0090e6d0(param_1,pvVar9);
    }
    if ((local_70[0] & 1) != 0) {
      operator_delete(local_60);
    }
    bVar11 = DAT_0320ffa8 & 1;
    sVar12 = (size_t)(DAT_0320ffa8 >> 1);
    sVar10 = DAT_0320ffb0;
  }
  bVar3 = *(byte *)(param_1 + 0x158);
  sVar2 = (ulong)(bVar3 >> 1);
  if ((bVar3 & 1) != 0) {
    sVar2 = *(size_t *)(param_1 + 0x160);
  }
  if (bVar11 != 0) {
    sVar12 = sVar10;
  }
  if (sVar2 == sVar12) {
    pvVar9 = *(void **)(param_1 + 0x168);
    if ((bVar3 & 1) == 0) {
      pvVar9 = (void *)(param_1 + 0x159);
    }
    pcVar6 = DAT_0320ffb8;
    if (bVar11 == 0) {
      pcVar6 = &DAT_0320ffa9;
    }
    if ((bVar3 & 1) == 0) {
      if (sVar2 != 0) {
        pcVar7 = (char *)(param_1 + 0x159);
        lVar8 = -(ulong)(bVar3 >> 1);
        do {
          if (*pcVar7 != *pcVar6) goto LAB_0090f548;
          pcVar7 = pcVar7 + 1;
          lVar8 = lVar8 + 1;
          pcVar6 = pcVar6 + 1;
        } while (lVar8 != 0);
      }
      goto LAB_0090f5cc;
    }
    if ((sVar2 == 0) || (iVar5 = memcmp(pvVar9,pcVar6,sVar2), iVar5 == 0)) goto LAB_0090f5cc;
  }
LAB_0090f548:
  FUN_0090dab8(local_88,&DAT_01b9349c,param_1 + 0x158);
  FUN_008fcdb8(local_70,local_88);
  if ((local_88[0] & 1) != 0) {
    operator_delete(local_78);
  }
  pvVar9 = (void *)((ulong)local_70 | 1);
  if ((local_70[0] & 1) != 0) {
    pvVar9 = local_60;
  }
  lVar8 = (**(code **)(**(long **)(param_1 + 200) + 0x90))(*(long **)(param_1 + 200),pvVar9);
  if (lVar8 == 0) {
    pvVar9 = (void *)((ulong)local_70 | 1);
    if ((local_70[0] & 1) != 0) {
      pvVar9 = local_60;
    }
    FUN_0090e6d0(param_1,pvVar9);
  }
  if ((local_70[0] & 1) != 0) {
    operator_delete(local_60);
  }
LAB_0090f5cc:
  if (*(long *)(lVar4 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_0090f5fc(long param_1)

{
  long lVar1;
  long local_48;
  code *pcStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (*(char *)(param_1 + 0x17f) == '\0') {
    *(undefined1 *)(param_1 + 0x17f) = 1;
    pcStack_40 = FUN_00910aac;
    local_48 = param_1;
    FUN_00f02e98(0x41700000,&local_48,0,0);
    pcStack_40 = FUN_00910aec;
    local_48 = param_1;
    FUN_00f02e98(0x41700000,&local_48,0,0);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_0090f69c(long param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 local_48;
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00e84e5c(param_2);
  if (((uVar2 & 1) != 0) && (*(int *)(param_2 + 0x28) == 0)) {
    FUN_00e70570(&local_48,param_2 + 0xe0);
    FUN_00910394(param_1 + 0xe8,&local_48);
    if (local_40 != (void *)0x0) {
      operator_delete__(local_40);
      local_48 = 0;
      local_40 = (void *)0x0;
    }
    FUN_008fce60(param_1 + 0x110,param_2 + 0x98);
    FUN_008fce60(param_1 + 0x140,param_2 + 0xb0);
    FUN_008fce60(param_1 + 0x158,param_2 + 200);
    FUN_0090e438(param_1);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_0090f754(long param_1)

{
  FUN_0090f69c(param_1 + -8);
  return;
}




void FUN_0090f75c(long param_1)

{
  byte bVar1;
  
  FUN_00e70960(param_1 + 0xe8);
  if ((*(byte *)(param_1 + 0x110) & 1) == 0) {
    *(undefined2 *)(param_1 + 0x110) = 0;
  }
  else {
    **(undefined1 **)(param_1 + 0x120) = 0;
    *(undefined8 *)(param_1 + 0x118) = 0;
  }
  if ((*(byte *)(param_1 + 0x140) & 1) == 0) {
    *(undefined2 *)(param_1 + 0x140) = 0;
  }
  else {
    **(undefined1 **)(param_1 + 0x150) = 0;
    *(undefined8 *)(param_1 + 0x148) = 0;
  }
  if ((*(byte *)(param_1 + 0x158) & 1) == 0) {
    *(undefined2 *)(param_1 + 0x158) = 0;
  }
  else {
    **(undefined1 **)(param_1 + 0x168) = 0;
    *(undefined8 *)(param_1 + 0x160) = 0;
  }
  *(undefined1 *)(param_1 + 0x17d) = 0;
  bVar1 = FUN_0092e644();
  *(byte *)(param_1 + 0x17e) = ~bVar1 & 1;
                    /* WARNING: Could not recover jumptable at 0x0090f7f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 200) + 0x58))(*(long **)(param_1 + 200));
  return;
}




void FUN_0090f7f8(long param_1)

{
  FUN_0090f75c(param_1 + -8);
  return;
}




void FUN_0090f800(long param_1,long param_2)

{
  long lVar1;
  void *pvVar2;
  long lVar3;
  byte bVar4;
  undefined4 uVar5;
  ulong uVar6;
  ulong local_50 [2];
  void *local_40;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  uVar6 = FUN_00e84e5c(param_2);
  if (((uVar6 & 1) != 0) && (*(int *)(param_2 + 0x240) == 0)) {
    param_2 = param_2 + 0x80;
    lVar1 = param_1 + 0xe8;
    uVar5 = FUN_00e70b14(lVar1);
    uVar6 = FUN_00e70ca0(param_2,lVar1,uVar5);
    if ((uVar6 & 1) == 0) {
      uVar6 = FUN_00e70b04(param_2);
      if ((uVar6 & 1) == 0) {
        FUN_00910394(lVar1,param_2);
        local_50[0] = 0;
        local_50[1] = 0;
        local_40 = (void *)0x0;
        FUN_00e70a24(lVar1,local_50);
        pvVar2 = (void *)((ulong)local_50 | 1);
        if ((local_50[0] & 1) != 0) {
          pvVar2 = local_40;
        }
        (**(code **)(**(long **)(param_1 + 200) + 0xa0))(*(long **)(param_1 + 200),pvVar2);
        if ((local_50[0] & 1) != 0) {
          operator_delete(local_40);
        }
      }
      else {
        FUN_00e70960(lVar1);
        if ((*(byte *)(param_1 + 0x110) & 1) == 0) {
          *(undefined2 *)(param_1 + 0x110) = 0;
        }
        else {
          **(undefined1 **)(param_1 + 0x120) = 0;
          *(undefined8 *)(param_1 + 0x118) = 0;
        }
        if ((*(byte *)(param_1 + 0x140) & 1) == 0) {
          *(undefined2 *)(param_1 + 0x140) = 0;
        }
        else {
          **(undefined1 **)(param_1 + 0x150) = 0;
          *(undefined8 *)(param_1 + 0x148) = 0;
        }
        if ((*(byte *)(param_1 + 0x158) & 1) == 0) {
          *(undefined2 *)(param_1 + 0x158) = 0;
        }
        else {
          **(undefined1 **)(param_1 + 0x168) = 0;
          *(undefined8 *)(param_1 + 0x160) = 0;
        }
        *(undefined1 *)(param_1 + 0x17d) = 0;
        bVar4 = FUN_0092e644();
        *(byte *)(param_1 + 0x17e) = ~bVar4 & 1;
        (**(code **)(**(long **)(param_1 + 200) + 0x58))(*(long **)(param_1 + 200));
      }
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_0090f974(long param_1)

{
  FUN_0090f800(param_1 + -0x20);
  return;
}




void FUN_0090f97c(long param_1,long param_2)

{
  size_t __n;
  size_t sVar1;
  byte bVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  char *__s2;
  char *pcVar6;
  void *pvVar7;
  byte local_68 [16];
  void *local_58;
  byte local_50 [16];
  void *local_40;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  if (*(char *)(param_2 + 0x44) == '\0') goto LAB_0090fad0;
  lVar5 = FUN_009580b8();
  bVar2 = *(byte *)(lVar5 + 0x5478);
  __n = (ulong)(bVar2 >> 1);
  if ((bVar2 & 1) != 0) {
    __n = *(size_t *)(lVar5 + 0x5480);
  }
  sVar1 = (ulong)(DAT_0320ffa8 >> 1);
  if ((DAT_0320ffa8 & 1) != 0) {
    sVar1 = DAT_0320ffb0;
  }
  if (__n == sVar1) {
    pvVar7 = *(void **)(lVar5 + 0x5488);
    if ((bVar2 & 1) == 0) {
      pvVar7 = (void *)(lVar5 + 0x5479);
    }
    __s2 = DAT_0320ffb8;
    if ((DAT_0320ffa8 & 1) == 0) {
      __s2 = &DAT_0320ffa9;
    }
    if ((bVar2 & 1) == 0) {
      if (__n != 0) {
        pcVar6 = (char *)(lVar5 + 0x5479);
        lVar5 = -(ulong)(bVar2 >> 1);
        do {
          if (*pcVar6 != *__s2) goto LAB_0090fa44;
          pcVar6 = pcVar6 + 1;
          lVar5 = lVar5 + 1;
          __s2 = __s2 + 1;
        } while (lVar5 != 0);
      }
      goto LAB_0090fad0;
    }
    if ((__n == 0) || (iVar4 = memcmp(pvVar7,__s2,__n), iVar4 == 0)) goto LAB_0090fad0;
  }
LAB_0090fa44:
  lVar5 = FUN_009580b8();
  FUN_0090dab8(local_68,&DAT_01b9349c,lVar5 + 0x5478);
  FUN_008fcdb8(local_50,local_68);
  if ((local_68[0] & 1) != 0) {
    operator_delete(local_58);
  }
  pvVar7 = (void *)((ulong)local_50 | 1);
  if ((local_50[0] & 1) != 0) {
    pvVar7 = local_40;
  }
  lVar5 = (**(code **)(**(long **)(param_1 + 200) + 0x90))(*(long **)(param_1 + 200),pvVar7);
  if (lVar5 == 0) {
    pvVar7 = (void *)((ulong)local_50 | 1);
    if ((local_50[0] & 1) != 0) {
      pvVar7 = local_40;
    }
    FUN_0090e6d0(param_1,pvVar7);
  }
  if ((local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
LAB_0090fad0:
  if (*(long *)(lVar3 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_0090faf8(long param_1)

{
  FUN_0090f97c(param_1 + -0x20);
  return;
}




void FUN_0090fb00(long param_1,long param_2)

{
  size_t __n;
  size_t sVar1;
  byte bVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  char *__s2;
  char *pcVar6;
  void *pvVar7;
  byte local_68 [16];
  void *local_58;
  byte local_50 [16];
  void *local_40;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  if (*(char *)(param_2 + 0x44) == '\0') goto LAB_0090fc60;
  lVar5 = FUN_009580b8();
  bVar2 = *(byte *)(lVar5 + 0x5478);
  __n = (ulong)(bVar2 >> 1);
  if ((bVar2 & 1) != 0) {
    __n = *(size_t *)(lVar5 + 0x5480);
  }
  sVar1 = (ulong)(DAT_0320ffa8 >> 1);
  if ((DAT_0320ffa8 & 1) != 0) {
    sVar1 = DAT_0320ffb0;
  }
  if (__n == sVar1) {
    pvVar7 = *(void **)(lVar5 + 0x5488);
    if ((bVar2 & 1) == 0) {
      pvVar7 = (void *)(lVar5 + 0x5479);
    }
    __s2 = DAT_0320ffb8;
    if ((DAT_0320ffa8 & 1) == 0) {
      __s2 = &DAT_0320ffa9;
    }
    if ((bVar2 & 1) == 0) {
      if (__n != 0) {
        pcVar6 = (char *)(lVar5 + 0x5479);
        lVar5 = -(ulong)(bVar2 >> 1);
        do {
          if (*pcVar6 != *__s2) goto LAB_0090fbc8;
          pcVar6 = pcVar6 + 1;
          lVar5 = lVar5 + 1;
          __s2 = __s2 + 1;
        } while (lVar5 != 0);
      }
      goto LAB_0090fc60;
    }
    if ((__n == 0) || (iVar4 = memcmp(pvVar7,__s2,__n), iVar4 == 0)) goto LAB_0090fc60;
  }
LAB_0090fbc8:
  lVar5 = FUN_009580b8();
  FUN_0090dab8(local_68,&DAT_01b9349c,lVar5 + 0x5478);
  FUN_008fcdb8(local_50,local_68);
  if ((local_68[0] & 1) != 0) {
    operator_delete(local_58);
  }
  pvVar7 = (void *)((ulong)local_50 | 1);
  if ((local_50[0] & 1) != 0) {
    pvVar7 = local_40;
  }
  lVar5 = (**(code **)(**(long **)(param_1 + 200) + 0x90))(*(long **)(param_1 + 200),pvVar7);
  if (lVar5 != 0) {
    pvVar7 = (void *)((ulong)local_50 | 1);
    if ((local_50[0] & 1) != 0) {
      pvVar7 = local_40;
    }
    (**(code **)(**(long **)(param_1 + 200) + 0x80))(*(long **)(param_1 + 200),pvVar7,0);
  }
  if ((local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
LAB_0090fc60:
  if (*(long *)(lVar3 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_0090fc88(long param_1)

{
  FUN_0090fb00(param_1 + -0x20);
  return;
}




void FUN_0090fc90(long param_1,long param_2)

{
  size_t __n;
  size_t sVar1;
  byte bVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  char *__s2;
  char *pcVar6;
  void *pvVar7;
  byte local_68 [16];
  void *local_58;
  byte local_50 [16];
  void *local_40;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  if (*(char *)(param_2 + 0x44) == '\0') goto LAB_0090fde4;
  lVar5 = FUN_009580b8();
  bVar2 = *(byte *)(lVar5 + 0x5490);
  __n = (ulong)(bVar2 >> 1);
  if ((bVar2 & 1) != 0) {
    __n = *(size_t *)(lVar5 + 0x5498);
  }
  sVar1 = (ulong)(DAT_0320ffa8 >> 1);
  if ((DAT_0320ffa8 & 1) != 0) {
    sVar1 = DAT_0320ffb0;
  }
  if (__n == sVar1) {
    pvVar7 = *(void **)(lVar5 + 0x54a0);
    if ((bVar2 & 1) == 0) {
      pvVar7 = (void *)(lVar5 + 0x5491);
    }
    __s2 = DAT_0320ffb8;
    if ((DAT_0320ffa8 & 1) == 0) {
      __s2 = &DAT_0320ffa9;
    }
    if ((bVar2 & 1) == 0) {
      if (__n != 0) {
        pcVar6 = (char *)(lVar5 + 0x5491);
        lVar5 = -(ulong)(bVar2 >> 1);
        do {
          if (*pcVar6 != *__s2) goto LAB_0090fd58;
          pcVar6 = pcVar6 + 1;
          lVar5 = lVar5 + 1;
          __s2 = __s2 + 1;
        } while (lVar5 != 0);
      }
      goto LAB_0090fde4;
    }
    if ((__n == 0) || (iVar4 = memcmp(pvVar7,__s2,__n), iVar4 == 0)) goto LAB_0090fde4;
  }
LAB_0090fd58:
  lVar5 = FUN_009580b8();
  FUN_0090dab8(local_68,&DAT_01b9349c,lVar5 + 0x5490);
  FUN_008fcdb8(local_50,local_68);
  if ((local_68[0] & 1) != 0) {
    operator_delete(local_58);
  }
  pvVar7 = (void *)((ulong)local_50 | 1);
  if ((local_50[0] & 1) != 0) {
    pvVar7 = local_40;
  }
  lVar5 = (**(code **)(**(long **)(param_1 + 200) + 0x90))(*(long **)(param_1 + 200),pvVar7);
  if (lVar5 != 0) {
    pvVar7 = (void *)((ulong)local_50 | 1);
    if ((local_50[0] & 1) != 0) {
      pvVar7 = local_40;
    }
    FUN_0090e6d0(param_1,pvVar7);
  }
  if ((local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
LAB_0090fde4:
  if (*(long *)(lVar3 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_0090fe0c(long param_1)

{
  FUN_0090fc90(param_1 + -0x20);
  return;
}




void FUN_0090fe14(long param_1,long param_2)

{
  size_t __n;
  size_t sVar1;
  byte bVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  char *__s2;
  char *pcVar6;
  void *pvVar7;
  byte local_68 [16];
  void *local_58;
  byte local_50 [16];
  void *local_40;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  if (*(char *)(param_2 + 0x44) == '\0') goto LAB_0090ff74;
  lVar5 = FUN_009580b8();
  bVar2 = *(byte *)(lVar5 + 0x5490);
  __n = (ulong)(bVar2 >> 1);
  if ((bVar2 & 1) != 0) {
    __n = *(size_t *)(lVar5 + 0x5498);
  }
  sVar1 = (ulong)(DAT_0320ffa8 >> 1);
  if ((DAT_0320ffa8 & 1) != 0) {
    sVar1 = DAT_0320ffb0;
  }
  if (__n == sVar1) {
    pvVar7 = *(void **)(lVar5 + 0x54a0);
    if ((bVar2 & 1) == 0) {
      pvVar7 = (void *)(lVar5 + 0x5491);
    }
    __s2 = DAT_0320ffb8;
    if ((DAT_0320ffa8 & 1) == 0) {
      __s2 = &DAT_0320ffa9;
    }
    if ((bVar2 & 1) == 0) {
      if (__n != 0) {
        pcVar6 = (char *)(lVar5 + 0x5491);
        lVar5 = -(ulong)(bVar2 >> 1);
        do {
          if (*pcVar6 != *__s2) goto LAB_0090fedc;
          pcVar6 = pcVar6 + 1;
          lVar5 = lVar5 + 1;
          __s2 = __s2 + 1;
        } while (lVar5 != 0);
      }
      goto LAB_0090ff74;
    }
    if ((__n == 0) || (iVar4 = memcmp(pvVar7,__s2,__n), iVar4 == 0)) goto LAB_0090ff74;
  }
LAB_0090fedc:
  lVar5 = FUN_009580b8();
  FUN_0090dab8(local_68,&DAT_01b9349c,lVar5 + 0x5490);
  FUN_008fcdb8(local_50,local_68);
  if ((local_68[0] & 1) != 0) {
    operator_delete(local_58);
  }
  pvVar7 = (void *)((ulong)local_50 | 1);
  if ((local_50[0] & 1) != 0) {
    pvVar7 = local_40;
  }
  lVar5 = (**(code **)(**(long **)(param_1 + 200) + 0x90))(*(long **)(param_1 + 200),pvVar7);
  if (lVar5 != 0) {
    pvVar7 = (void *)((ulong)local_50 | 1);
    if ((local_50[0] & 1) != 0) {
      pvVar7 = local_40;
    }
    (**(code **)(**(long **)(param_1 + 200) + 0x80))(*(long **)(param_1 + 200),pvVar7,0);
  }
  if ((local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
LAB_0090ff74:
  if (*(long *)(lVar3 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_0090ff9c(long param_1)

{
  FUN_0090fe14(param_1 + -0x20);
  return;
}




void FUN_0090ffa4(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  byte local_50 [16];
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_008fa54c(local_50);
  lVar3 = FUN_0090e774(param_1,local_50);
  lVar5 = (ulong)*(uint *)(lVar3 + 0x10) << 5;
  plVar2 = *(long **)(lVar3 + 0x18);
  do {
    plVar4 = plVar2;
    if (lVar5 == 0) goto LAB_00910008;
    lVar5 = lVar5 + -0x20;
    plVar2 = plVar4 + 4;
  } while (*plVar4 != param_3);
  FUN_00910480((uint *)(lVar3 + 0x10),plVar4);
LAB_00910008:
  if ((local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

