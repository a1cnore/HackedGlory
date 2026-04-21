// functions/00938 — 13 functions
#include "libGameKindred.h"




void FUN_009380ec(undefined8 param_1)

{
  long lVar1;
  byte local_40 [16];
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_008fa54c(local_40,param_1);
  FUN_008fce60(&DAT_02c7c038,local_40);
  if ((local_40[0] & 1) != 0) {
    operator_delete(local_30);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00938158(void)

{
  return;
}




void FUN_0093815c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char *__src;
  long lVar1;
  ulong uVar2;
  byte local_1d0 [16];
  void *local_1c0;
  byte local_1b8 [16];
  void *local_1a8;
  byte local_1a0 [16];
  void *local_190;
  byte local_188 [16];
  void *local_178;
  byte local_170 [16];
  char *local_160;
  char acStack_158 [256];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  uVar2 = thunk_FUN_00ec9300();
  if ((uVar2 & 1) == 0) {
    FUN_00936f18(local_170);
    __src = (char *)((ulong)local_170 | 1);
    if ((local_170[0] & 1) != 0) {
      __src = local_160;
    }
    strcpy(acStack_158,__src);
    FUN_008fa54c(local_1a0,param_1);
    FUN_008fa54c(local_1b8,"username");
    FUN_008fa54c(local_1d0,&DAT_01e277f2);
    FUN_00e6bac8(local_188,acStack_158,local_1a0,local_1b8,local_1d0);
    FUN_008fce60(param_2,local_188);
    if ((local_188[0] & 1) != 0) {
      operator_delete(local_178);
    }
    if ((local_1d0[0] & 1) != 0) {
      operator_delete(local_1c0);
    }
    if ((local_1b8[0] & 1) != 0) {
      operator_delete(local_1a8);
    }
    if ((local_1a0[0] & 1) != 0) {
      operator_delete(local_190);
    }
    FUN_008fa54c(local_1a0,param_1);
    FUN_008fa54c(local_1b8,"password");
    FUN_008fa54c(local_1d0,&DAT_01e277f2);
    FUN_00e6bac8(local_188,acStack_158,local_1a0,local_1b8,local_1d0);
    FUN_008fce60(param_3,local_188);
    if ((local_188[0] & 1) != 0) {
      operator_delete(local_178);
    }
    if ((local_1d0[0] & 1) != 0) {
      operator_delete(local_1c0);
    }
    if ((local_1b8[0] & 1) != 0) {
      operator_delete(local_1a8);
    }
    if ((local_1a0[0] & 1) != 0) {
      operator_delete(local_190);
    }
    FUN_008fa54c(local_1a0,param_1);
    FUN_008fa54c(local_1b8,"uuid");
    FUN_008fa54c(local_1d0,&DAT_01e277f2);
    FUN_00e6bac8(local_188,acStack_158,local_1a0,local_1b8,local_1d0);
    FUN_008fce60(param_4,local_188);
    if ((local_188[0] & 1) != 0) {
      operator_delete(local_178);
    }
    if ((local_1d0[0] & 1) != 0) {
      operator_delete(local_1c0);
    }
    if ((local_1b8[0] & 1) != 0) {
      operator_delete(local_1a8);
    }
    if ((local_1a0[0] & 1) != 0) {
      operator_delete(local_190);
    }
    FUN_008fcdb8(local_188,param_3);
    uVar2 = FUN_00ec5738();
    if ((uVar2 & 1) != 0) {
      FUN_00ec57ac("password",param_1,param_3);
    }
    if ((local_188[0] & 1) != 0) {
      operator_delete(local_178);
    }
    if ((local_170[0] & 1) != 0) {
      operator_delete(local_160);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009383ec(undefined8 param_1,undefined8 param_2)

{
  char *__src;
  void *pvVar1;
  long lVar2;
  ulong uVar3;
  byte local_1c0 [16];
  void *local_1b0;
  byte local_1a8 [16];
  char *local_198;
  ulong local_190;
  ulong local_188;
  void *local_180;
  ulong local_178;
  ulong local_170;
  void *local_168;
  ulong local_160;
  ulong local_158;
  void *local_150;
  char acStack_148 [256];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  uVar3 = thunk_FUN_00ec9300();
  if ((uVar3 & 1) == 0) {
    local_160 = 0;
    local_158 = 0;
    local_150 = (void *)0x0;
    local_178 = 0;
    local_170 = 0;
    local_168 = (void *)0x0;
    local_190 = 0;
    local_188 = 0;
    local_180 = (void *)0x0;
    FUN_0093815c(param_1,&local_160,&local_178,&local_190);
    FUN_00936f18(local_1a8);
    __src = (char *)((ulong)local_1a8 | 1);
    if ((local_1a8[0] & 1) != 0) {
      __src = local_198;
    }
    strcpy(acStack_148,__src);
    uVar3 = local_160 >> 1 & 0x7f;
    if ((local_160 & 1) != 0) {
      uVar3 = local_158;
    }
    if (uVar3 != 0) {
      pvVar1 = (void *)((ulong)&local_160 | 1);
      if ((local_160 & 1) != 0) {
        pvVar1 = local_150;
      }
      FUN_00e6b98c(acStack_148,param_2,"username",pvVar1);
      FUN_00e6b9e8(acStack_148,param_1,"username");
    }
    uVar3 = local_190 >> 1 & 0x7f;
    if ((local_190 & 1) != 0) {
      uVar3 = local_188;
    }
    if (uVar3 != 0) {
      pvVar1 = (void *)((ulong)&local_190 | 1);
      if ((local_190 & 1) != 0) {
        pvVar1 = local_180;
      }
      FUN_00e6b98c(acStack_148,param_2,"uuid",pvVar1);
      FUN_00e6b9e8(acStack_148,param_1,"uuid");
    }
    uVar3 = local_178 >> 1 & 0x7f;
    if ((local_178 & 1) != 0) {
      uVar3 = local_170;
    }
    if (uVar3 != 0) {
      uVar3 = FUN_00ec5738();
      if ((uVar3 & 1) == 0) {
        pvVar1 = (void *)((ulong)&local_178 | 1);
        if ((local_178 & 1) != 0) {
          pvVar1 = local_168;
        }
        FUN_00e6b98c(acStack_148,param_2,"password",pvVar1);
        FUN_00e6b9e8(acStack_148,param_1,"password");
      }
      else {
        pvVar1 = (void *)((ulong)&local_178 | 1);
        if ((local_178 & 1) != 0) {
          pvVar1 = local_168;
        }
        FUN_008fa54c(local_1c0,pvVar1);
        FUN_00ec5740("password",param_2,local_1c0);
        if ((local_1c0[0] & 1) != 0) {
          operator_delete(local_1b0);
        }
        FUN_00ec5818("password",param_1);
      }
    }
    if ((local_1a8[0] & 1) != 0) {
      operator_delete(local_198);
    }
    if ((local_190 & 1) != 0) {
      operator_delete(local_180);
    }
    if ((local_178 & 1) != 0) {
      operator_delete(local_168);
    }
    if ((local_160 & 1) != 0) {
      operator_delete(local_150);
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00938640(undefined8 param_1,undefined8 param_2,byte *param_3,undefined8 param_4,
                 byte *param_5)

{
  ulong uVar1;
  void *pvVar2;
  long lVar3;
  int iVar4;
  void *pvVar5;
  byte local_60 [8];
  ulong local_58;
  void *local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  FUN_009376bc();
  FUN_00937044(local_60);
  pvVar5 = (void *)((ulong)local_60 | 1);
  pvVar2 = pvVar5;
  if ((local_60[0] & 1) != 0) {
    pvVar2 = local_50;
  }
  FUN_0093815c(pvVar2,param_3,param_4,param_5);
  uVar1 = (ulong)(*param_3 >> 1);
  if ((*param_3 & 1) != 0) {
    uVar1 = *(ulong *)(param_3 + 8);
  }
  if (uVar1 == 0) {
    uVar1 = (ulong)(*param_5 >> 1);
    if ((*param_5 & 1) != 0) {
      uVar1 = *(ulong *)(param_5 + 8);
    }
    if (uVar1 == 0) {
      uVar1 = (ulong)(local_60[0] >> 1);
      if ((local_60[0] & 1) != 0) {
        uVar1 = local_58;
      }
      if ((uVar1 == 0x23) &&
         (iVar4 = FUN_0090d610(local_60,0,0xffffffffffffffff,"environment: platform.superevil.net",
                               0x23), iVar4 == 0)) {
        pvVar2 = pvVar5;
        if ((local_60[0] & 1) != 0) {
          pvVar2 = local_50;
        }
        FUN_009383ec("environment: platform.superevilmegacorp.net",pvVar2);
        if ((local_60[0] & 1) != 0) {
          pvVar5 = local_50;
        }
        FUN_0093815c(pvVar5,param_3,param_4,param_5);
      }
    }
  }
  if ((local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00938788(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  char *__src;
  void *pvVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  void *pvVar5;
  byte local_1b8 [16];
  void *local_1a8;
  byte local_1a0 [16];
  void *local_190;
  byte local_188 [16];
  void *local_178;
  byte local_170 [16];
  char *local_160;
  char acStack_158 [256];
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  uVar4 = thunk_FUN_00ec9300();
  if ((uVar4 & 1) != 0) goto LAB_00938a04;
  FUN_00936f18(local_170);
  __src = (char *)((ulong)local_170 | 1);
  if ((local_170[0] & 1) != 0) {
    __src = local_160;
  }
  strcpy(acStack_158,__src);
  FUN_00937044(local_188);
  iVar3 = FUN_0090d610(param_1,0,0xffffffffffffffff,&DAT_01e277f2,0);
  if (iVar3 == 0) {
    iVar3 = FUN_0090d610(param_3,0,0xffffffffffffffff,&DAT_01e277f2,0);
    if ((iVar3 != 0) || ((param_4 & 1) != 0)) {
      pvVar1 = (void *)((ulong)local_188 | 1);
      if ((local_188[0] & 1) != 0) {
        pvVar1 = local_178;
      }
      FUN_008fa54c(local_1a0,pvVar1);
      FUN_008fa54c(local_1b8,"uuid");
      FUN_00e6bd24(acStack_158,local_1a0,local_1b8,param_3);
      if ((local_1b8[0] & 1) != 0) {
        operator_delete(local_1a8);
      }
      if ((local_1a0[0] & 1) != 0) {
        operator_delete(local_190);
      }
    }
  }
  else {
    pvVar5 = (void *)((ulong)local_188 | 1);
    pvVar1 = pvVar5;
    if ((local_188[0] & 1) != 0) {
      pvVar1 = local_178;
    }
    FUN_008fa54c(local_1a0,pvVar1);
    FUN_008fa54c(local_1b8,"username");
    FUN_00e6bd24(acStack_158,local_1a0,local_1b8,param_1);
    if ((local_1b8[0] & 1) != 0) {
      operator_delete(local_1a8);
    }
    if ((local_1a0[0] & 1) != 0) {
      operator_delete(local_190);
    }
    uVar4 = FUN_00ec5738();
    if ((uVar4 & 1) == 0) {
LAB_009388d0:
      pvVar1 = pvVar5;
      if ((local_188[0] & 1) != 0) {
        pvVar1 = local_178;
      }
      FUN_008fa54c(local_1a0,pvVar1);
      FUN_008fa54c(local_1b8,"password");
      FUN_00e6bd24(acStack_158,local_1a0,local_1b8,param_2);
      if ((local_1b8[0] & 1) != 0) {
        operator_delete(local_1a8);
      }
      if ((local_1a0[0] & 1) != 0) {
        operator_delete(local_190);
      }
    }
    else {
      pvVar1 = pvVar5;
      if ((local_188[0] & 1) != 0) {
        pvVar1 = local_178;
      }
      uVar4 = FUN_00ec5740("password",pvVar1,param_2);
      if ((uVar4 & 1) == 0) goto LAB_009388d0;
      pvVar1 = pvVar5;
      if ((local_188[0] & 1) != 0) {
        pvVar1 = local_178;
      }
      FUN_00e6b9e8(acStack_158,pvVar1,"password");
    }
    if ((param_4 & 1) != 0) {
      if ((local_188[0] & 1) != 0) {
        pvVar5 = local_178;
      }
      FUN_00e6b98c(acStack_158,pvVar5,"uuid",&DAT_01e277f2);
    }
  }
  if ((local_188[0] & 1) != 0) {
    operator_delete(local_178);
  }
  if ((local_170[0] & 1) != 0) {
    operator_delete(local_160);
  }
LAB_00938a04:
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00938a34(void)

{
  void *pvVar1;
  long lVar2;
  ulong local_40 [2];
  void *local_30;
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  local_40[0] = 0;
  local_40[1] = 0;
  local_30 = (void *)0x0;
  FUN_00e81200(local_40);
  FUN_0090de84(local_40,":hasInitiatedLogin",0x12);
  pvVar1 = (void *)((ulong)local_40 | 1);
  if ((local_40[0] & 1) != 0) {
    pvVar1 = local_30;
  }
  FUN_00936e48(pvVar1,1);
  if ((local_40[0] & 1) != 0) {
    operator_delete(local_30);
  }
  if (*(long *)(lVar2 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




uint FUN_00938ac8(void)

{
  void *pvVar1;
  long lVar2;
  uint uVar3;
  ulong local_40 [2];
  void *local_30;
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  local_40[0] = 0;
  local_40[1] = 0;
  local_30 = (void *)0x0;
  FUN_00e81200(local_40);
  FUN_0090de84(local_40,":hasInitiatedLogin",0x12);
  pvVar1 = (void *)((ulong)local_40 | 1);
  if ((local_40[0] & 1) != 0) {
    pvVar1 = local_30;
  }
  uVar3 = FUN_0093734c(pvVar1,0);
  if ((local_40[0] & 1) != 0) {
    operator_delete(local_30);
  }
  if (*(long *)(lVar2 + 0x28) == local_28) {
    return uVar3 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00938b64(void)

{
  char *__src;
  void *pvVar1;
  long lVar2;
  ulong uVar3;
  void *pvVar4;
  byte local_168 [16];
  void *local_158;
  byte local_150 [16];
  char *local_140;
  char acStack_138 [256];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  uVar3 = thunk_FUN_00ec9300();
  if ((uVar3 & 1) == 0) {
    FUN_00936f18(local_150);
    __src = (char *)((ulong)local_150 | 1);
    if ((local_150[0] & 1) != 0) {
      __src = local_140;
    }
    strcpy(acStack_138,__src);
    FUN_00937044(local_168);
    pvVar4 = (void *)((ulong)local_168 | 1);
    pvVar1 = pvVar4;
    if ((local_168[0] & 1) != 0) {
      pvVar1 = local_158;
    }
    FUN_00e6b98c(acStack_138,pvVar1,"username",&DAT_01e277f2);
    pvVar1 = pvVar4;
    if ((local_168[0] & 1) != 0) {
      pvVar1 = local_158;
    }
    FUN_00e6b98c(acStack_138,pvVar1,"password",&DAT_01e277f2);
    uVar3 = FUN_00ec5738();
    if ((uVar3 & 1) != 0) {
      if ((local_168[0] & 1) != 0) {
        pvVar4 = local_158;
      }
      FUN_00ec5818("password",pvVar4);
    }
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




void FUN_00938c80(void)

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
  FUN_00e6b98c(acStack_138,pvVar1,"uuid",&DAT_01e277f2);
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




void FUN_00938d48(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  char *__src;
  void *pvVar1;
  long lVar2;
  int iVar3;
  undefined4 uVar4;
  byte local_1e0 [16];
  void *local_1d0;
  byte local_1c8 [16];
  void *local_1b8;
  byte local_1b0 [16];
  void *local_1a0;
  byte local_198 [16];
  void *local_188;
  undefined8 local_180;
  ulong local_178 [2];
  void *local_168;
  byte local_160 [16];
  char *local_150;
  char acStack_148 [256];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  FUN_00937800(local_160);
  __src = (char *)((ulong)local_160 | 1);
  if ((local_160[0] & 1) != 0) {
    __src = local_150;
  }
  strcpy(acStack_148,__src);
  if (param_1 != (undefined4 *)0x0) {
    uVar4 = FUN_00e6b898(0xbf800000,acStack_148,"Settings","sound");
    *param_1 = uVar4;
  }
  if (param_2 != (undefined4 *)0x0) {
    uVar4 = FUN_00e6b898(0xbf800000,acStack_148,"Settings","music");
    *param_2 = uVar4;
  }
  if (param_3 != (undefined4 *)0x0) {
    local_178[0] = 0;
    local_178[1] = 0;
    local_168 = (void *)0x0;
    local_180 = 0;
    FUN_008fa54c(local_1b0,"Settings");
    FUN_008fa54c(local_1c8,"resolution");
    FUN_008fa54c(local_1e0,"1334x750");
    FUN_00e6bac8(local_198,acStack_148,local_1b0,local_1c8,local_1e0);
    FUN_008fce60(local_178,local_198);
    if ((local_198[0] & 1) != 0) {
      operator_delete(local_188);
    }
    if ((local_1e0[0] & 1) != 0) {
      operator_delete(local_1d0);
    }
    if ((local_1c8[0] & 1) != 0) {
      operator_delete(local_1b8);
    }
    if ((local_1b0[0] & 1) != 0) {
      operator_delete(local_1a0);
    }
    pvVar1 = (void *)((ulong)local_178 | 1);
    if ((local_178[0] & 1) != 0) {
      pvVar1 = local_168;
    }
    iVar3 = FUN_00e6acac(pvVar1,&DAT_01b95632,(long)&local_180 + 4,&local_180);
    if (iVar3 == 2) {
      *param_3 = local_180._4_4_;
      param_3[1] = (undefined4)local_180;
    }
    if ((local_178[0] & 1) != 0) {
      operator_delete(local_168);
    }
  }
  if ((local_160[0] & 1) != 0) {
    operator_delete(local_150);
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00938f1c(long param_1,undefined1 *param_2,undefined1 *param_3,long param_4,
                 undefined1 *param_5,undefined8 param_6,undefined4 *param_7,undefined4 *param_8,
                 long param_9)

{
  long lVar1;
  byte local_70 [16];
  void *local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  if (param_1 != 0) {
    FUN_008fa54c(local_70,&DAT_01e277f2);
    FUN_008fce60(param_1,local_70);
    if ((local_70[0] & 1) != 0) {
      operator_delete(local_60);
    }
  }
  if (param_2 != (undefined1 *)0x0) {
    *param_2 = 0;
  }
  if (param_3 != (undefined1 *)0x0) {
    *param_3 = 0;
  }
  if (param_4 != 0) {
    FUN_008fce60(param_4,&DAT_0320ffa8);
  }
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = 0;
  }
  if (param_7 != (undefined4 *)0x0) {
    *param_7 = 0;
  }
  if (param_8 != (undefined4 *)0x0) {
    *param_8 = 0;
  }
  if (param_9 != 0) {
    FUN_008fce60(param_9,&DAT_0320ffa8);
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void thunk_FUN_00938b64(void)

{
  char *__src;
  void *pvVar1;
  long lVar2;
  ulong uVar3;
  void *pvVar4;
  byte abStack_168 [16];
  void *pvStack_158;
  byte abStack_150 [16];
  char *pcStack_140;
  char acStack_138 [256];
  long lStack_38;
  
  lVar2 = tpidr_el0;
  lStack_38 = *(long *)(lVar2 + 0x28);
  uVar3 = thunk_FUN_00ec9300();
  if ((uVar3 & 1) == 0) {
    FUN_00936f18(abStack_150);
    __src = (char *)((ulong)abStack_150 | 1);
    if ((abStack_150[0] & 1) != 0) {
      __src = pcStack_140;
    }
    strcpy(acStack_138,__src);
    FUN_00937044(abStack_168);
    pvVar4 = (void *)((ulong)abStack_168 | 1);
    pvVar1 = pvVar4;
    if ((abStack_168[0] & 1) != 0) {
      pvVar1 = pvStack_158;
    }
    FUN_00e6b98c(acStack_138,pvVar1,"username",&DAT_01e277f2);
    pvVar1 = pvVar4;
    if ((abStack_168[0] & 1) != 0) {
      pvVar1 = pvStack_158;
    }
    FUN_00e6b98c(acStack_138,pvVar1,"password",&DAT_01e277f2);
    uVar3 = FUN_00ec5738();
    if ((uVar3 & 1) != 0) {
      if ((abStack_168[0] & 1) != 0) {
        pvVar4 = pvStack_158;
      }
      FUN_00ec5818("password",pvVar4);
    }
    if ((abStack_168[0] & 1) != 0) {
      operator_delete(pvStack_158);
    }
    if ((abStack_150[0] & 1) != 0) {
      operator_delete(pcStack_140);
    }
  }
  if (*(long *)(lVar2 + 0x28) == lStack_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

