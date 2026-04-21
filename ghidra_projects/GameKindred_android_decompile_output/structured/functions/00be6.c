// functions/00be6 — 31 functions
#include "libGameKindred.h"




void FUN_00be60a8(long param_1)

{
  FUN_00be5e0c(param_1 + -0x40);
  return;
}




void FUN_00be60b0(long param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  
  uVar1 = FUN_00e84e5c(param_2);
  if (((uVar1 & 1) != 0) && (*(char *)(param_2 + 0x44) != '\0')) {
    FUN_00be5d7c(param_1);
    lVar2 = FUN_00c5bfbc(*(undefined8 *)(param_1 + 8),"GUILD");
    if (lVar2 != 0) {
      uVar3 = FUN_00c5bfbc(*(undefined8 *)(param_1 + 8),"GUILD");
      FUN_00b2dc58(uVar3,0);
    }
    FUN_00be4630(param_1);
    return;
  }
  return;
}




void FUN_00be6128(long param_1)

{
  FUN_00be60b0(param_1 + -0x40);
  return;
}




void FUN_00be6130(long param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  
  uVar1 = FUN_00e84e5c(param_2);
  if (((uVar1 & 1) != 0) && (*(char *)(param_2 + 0x44) != '\0')) {
    lVar2 = FUN_00c5bfbc(*(undefined8 *)(param_1 + 8),"TEAM");
    if (lVar2 != 0) {
      uVar3 = FUN_00c5bfbc(*(undefined8 *)(param_1 + 8),"TEAM");
      FUN_00b2dc58(uVar3,0);
    }
    FUN_00be5d1c(param_1);
    FUN_00be4630(param_1);
    return;
  }
  return;
}




void FUN_00be61a8(long param_1)

{
  FUN_00be6130(param_1 + -0x40);
  return;
}




void FUN_00be61b0(undefined8 param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  
  FUN_008fa54c(param_1,&DAT_01b9349c);
  uVar1 = (ulong)(*(byte *)(param_2 + 0x140) >> 1);
  lVar2 = param_2 + 0x141;
  if ((*(byte *)(param_2 + 0x140) & 1) != 0) {
    uVar1 = *(ulong *)(param_2 + 0x148);
    lVar2 = *(long *)(param_2 + 0x150);
  }
  FUN_0090de84(param_1,lVar2,uVar1);
  return;
}




void FUN_00be6200(undefined8 param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  
  FUN_008fa54c(param_1,&DAT_01b9349c);
  uVar1 = (ulong)(*(byte *)(param_2 + 0x128) >> 1);
  lVar2 = param_2 + 0x129;
  if ((*(byte *)(param_2 + 0x128) & 1) != 0) {
    uVar1 = *(ulong *)(param_2 + 0x130);
    lVar2 = *(long *)(param_2 + 0x138);
  }
  FUN_0090de84(param_1,lVar2,uVar1);
  return;
}




void FUN_00be6250(long param_1)

{
  size_t __n;
  size_t sVar1;
  byte bVar2;
  byte bVar3;
  long lVar4;
  int iVar5;
  uint *puVar6;
  uint extraout_w8;
  uint uVar7;
  char *pcVar8;
  char *__s2;
  void *pvVar9;
  long lVar10;
  byte *pbVar11;
  byte *local_58 [2];
  void *local_48;
  undefined1 auStack_40 [8];
  long local_38;
  
  lVar4 = tpidr_el0;
  local_38 = *(long *)(lVar4 + 0x28);
  if ((*(byte *)(param_1 + 0x128) & 1) == 0) {
    if (*(byte *)(param_1 + 0x128) >> 1 == 0) goto LAB_00be63c4;
  }
  else if (*(long *)(param_1 + 0x130) == 0) goto LAB_00be63c4;
  if (*(char *)(param_1 + 0x15c) == '\0') {
    FUN_0099cf3c(param_1 + 0xa0,1);
  }
  FUN_00be6200(local_58,param_1);
  pvVar9 = (void *)((ulong)local_58 | 1);
  if (((ulong)local_58[0] & 1) != 0) {
    pvVar9 = local_48;
  }
  puVar6 = (uint *)FUN_0090ddb0(pvVar9);
  uVar7 = (uint)(byte)local_58[0];
  if (((ulong)local_58[0] & 1) != 0) {
    operator_delete(local_48);
    uVar7 = extraout_w8;
  }
  if ((puVar6 != (uint *)0x0) && (uVar7 = *puVar6, uVar7 == 0)) goto LAB_00be63c4;
  bVar2 = *(byte *)(param_1 + 0xf0);
  lVar10 = *(long *)(puVar6 + 2) + (ulong)(uVar7 - 1) * 0x88;
  pbVar11 = (byte *)(lVar10 + 0x38);
  bVar3 = *pbVar11;
  __n = (ulong)(bVar2 >> 1);
  if ((bVar2 & 1) != 0) {
    __n = *(size_t *)(param_1 + 0xf8);
  }
  sVar1 = (ulong)(bVar3 >> 1);
  if ((bVar3 & 1) != 0) {
    sVar1 = *(size_t *)(lVar10 + 0x40);
  }
  if (__n == sVar1) {
    pvVar9 = *(void **)(param_1 + 0x100);
    __s2 = *(char **)(*(long *)(puVar6 + 2) + (ulong)(uVar7 - 1) * 0x88 + 0x48);
    if ((bVar2 & 1) == 0) {
      pvVar9 = (void *)(param_1 + 0xf1);
    }
    if ((bVar3 & 1) == 0) {
      __s2 = (char *)(lVar10 + 0x39);
    }
    if ((bVar2 & 1) == 0) {
      if (__n != 0) {
        pcVar8 = (char *)(param_1 + 0xf1);
        lVar10 = -(ulong)(bVar2 >> 1);
        do {
          if (*pcVar8 != *__s2) goto LAB_00be639c;
          pcVar8 = pcVar8 + 1;
          lVar10 = lVar10 + 1;
          __s2 = __s2 + 1;
        } while (lVar10 != 0);
      }
      goto LAB_00be63c4;
    }
    if ((__n == 0) || (iVar5 = memcmp(pvVar9,__s2,__n), iVar5 == 0)) goto LAB_00be63c4;
  }
LAB_00be639c:
  local_58[0] = pbVar11;
  lVar10 = FUN_00be6f58(param_1 + 0xc0,pbVar11,&DAT_01bbaee8,local_58,auStack_40);
  *(undefined1 *)(lVar10 + 0x38) = 1;
LAB_00be63c4:
  if (*(long *)(lVar4 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00be63ec(long param_1)

{
  size_t __n;
  size_t sVar1;
  byte bVar2;
  byte bVar3;
  long lVar4;
  int iVar5;
  uint *puVar6;
  uint extraout_w8;
  uint uVar7;
  char *pcVar8;
  char *__s2;
  void *pvVar9;
  long lVar10;
  byte *pbVar11;
  byte *local_58 [2];
  void *local_48;
  undefined1 auStack_40 [8];
  long local_38;
  
  lVar4 = tpidr_el0;
  local_38 = *(long *)(lVar4 + 0x28);
  if (*(char *)(param_1 + 0x15c) == '\0') {
    FUN_0099cf3c(param_1 + 0xa0,1);
  }
  FUN_00be61b0(local_58,param_1);
  pvVar9 = (void *)((ulong)local_58 | 1);
  if (((ulong)local_58[0] & 1) != 0) {
    pvVar9 = local_48;
  }
  puVar6 = (uint *)FUN_0090ddb0(pvVar9);
  uVar7 = (uint)(byte)local_58[0];
  if (((ulong)local_58[0] & 1) != 0) {
    operator_delete(local_48);
    uVar7 = extraout_w8;
  }
  if ((puVar6 != (uint *)0x0) && (uVar7 = *puVar6, uVar7 == 0)) goto LAB_00be6544;
  bVar2 = *(byte *)(param_1 + 0xf0);
  lVar10 = *(long *)(puVar6 + 2) + (ulong)(uVar7 - 1) * 0x88;
  pbVar11 = (byte *)(lVar10 + 0x38);
  bVar3 = *pbVar11;
  __n = (ulong)(bVar2 >> 1);
  if ((bVar2 & 1) != 0) {
    __n = *(size_t *)(param_1 + 0xf8);
  }
  sVar1 = (ulong)(bVar3 >> 1);
  if ((bVar3 & 1) != 0) {
    sVar1 = *(size_t *)(lVar10 + 0x40);
  }
  if (__n == sVar1) {
    pvVar9 = *(void **)(param_1 + 0x100);
    __s2 = *(char **)(*(long *)(puVar6 + 2) + (ulong)(uVar7 - 1) * 0x88 + 0x48);
    if ((bVar2 & 1) == 0) {
      pvVar9 = (void *)(param_1 + 0xf1);
    }
    if ((bVar3 & 1) == 0) {
      __s2 = (char *)(lVar10 + 0x39);
    }
    if ((bVar2 & 1) == 0) {
      if (__n != 0) {
        pcVar8 = (char *)(param_1 + 0xf1);
        lVar10 = -(ulong)(bVar2 >> 1);
        do {
          if (*pcVar8 != *__s2) goto LAB_00be651c;
          pcVar8 = pcVar8 + 1;
          lVar10 = lVar10 + 1;
          __s2 = __s2 + 1;
        } while (lVar10 != 0);
      }
      goto LAB_00be6544;
    }
    if ((__n == 0) || (iVar5 = memcmp(pvVar9,__s2,__n), iVar5 == 0)) goto LAB_00be6544;
  }
LAB_00be651c:
  local_58[0] = pbVar11;
  lVar10 = FUN_00be6f58(param_1 + 0xc0,pbVar11,&DAT_01bbaee8,local_58,auStack_40);
  *(undefined1 *)(lVar10 + 0x38) = 1;
LAB_00be6544:
  if (*(long *)(lVar4 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00be656c(long param_1)

{
  size_t __n;
  size_t sVar1;
  byte bVar2;
  long lVar3;
  int iVar4;
  int *piVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  char *__s2;
  int extraout_w8;
  char *pcVar9;
  void *__s1;
  byte bVar10;
  long lVar11;
  byte local_90 [16];
  void *local_80;
  byte *local_78 [2];
  void *local_68;
  byte local_60 [8];
  size_t local_58;
  char *local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  if (*(char *)(param_1 + 0x15c) == '\0') {
    FUN_0099cf3c(param_1 + 0xa0,1);
  }
  piVar5 = (int *)FUN_0090dde0();
  iVar4 = extraout_w8;
  if ((piVar5 != (int *)0x0) && (iVar4 = *piVar5, iVar4 == 0)) goto LAB_00be6764;
  lVar11 = *(long *)(piVar5 + 2) + (ulong)(iVar4 - 1) * 0x88;
  FUN_00be6790(param_1,lVar11);
  FUN_008fcdb8(local_60,&DAT_0320ffa8);
  uVar6 = thunk_FUN_00ec653c();
  FUN_008fa54c(local_78,uVar6);
  lVar7 = FUN_009e2b04(lVar11 + 0x68,local_78);
  if (((ulong)local_78[0] & 1) != 0) {
    operator_delete(local_68);
  }
  if (lVar11 + 0x70 != lVar7) {
    uVar6 = thunk_FUN_00ec653c();
    FUN_008fa54c(local_90,uVar6);
    plVar8 = (long *)FUN_0091092c(lVar11 + 0x68,local_78,local_90);
    uVar6 = FUN_00ec3f08(*plVar8 + 0x38);
    FUN_008fa54c(local_78,uVar6);
    FUN_008fce60(local_60,local_78);
    if (((ulong)local_78[0] & 1) != 0) {
      operator_delete(local_68);
    }
    if ((local_90[0] & 1) != 0) {
      operator_delete(local_80);
    }
  }
  bVar2 = *(byte *)(param_1 + 0xf0);
  __n = (ulong)(bVar2 >> 1);
  if ((bVar2 & 1) != 0) {
    __n = *(size_t *)(param_1 + 0xf8);
  }
  sVar1 = (ulong)(local_60[0] >> 1);
  if ((local_60[0] & 1) != 0) {
    sVar1 = local_58;
  }
  if (__n == sVar1) {
    bVar10 = local_60[0] & 1;
    __s1 = *(void **)(param_1 + 0x100);
    if ((bVar2 & 1) == 0) {
      __s1 = (void *)(param_1 + 0xf1);
    }
    __s2 = (char *)((ulong)local_60 | 1);
    if ((local_60[0] & 1) != 0) {
      __s2 = local_50;
    }
    if ((bVar2 & 1) == 0) {
      if (__n != 0) {
        pcVar9 = (char *)(param_1 + 0xf1);
        lVar7 = -(ulong)(bVar2 >> 1);
        do {
          if (*pcVar9 != *__s2) goto LAB_00be6724;
          pcVar9 = pcVar9 + 1;
          lVar7 = lVar7 + 1;
          __s2 = __s2 + 1;
        } while (lVar7 != 0);
      }
    }
    else if ((__n != 0) && (iVar4 = memcmp(__s1,__s2,__n), iVar4 != 0)) goto LAB_00be6724;
  }
  else {
LAB_00be6724:
    local_78[0] = local_60;
    lVar7 = FUN_00be6f58(param_1 + 0xc0,local_60,&DAT_01bbaee8,local_78,local_90);
    *(undefined1 *)(lVar7 + 0x38) = 1;
    bVar10 = local_60[0] & 1;
  }
  if (bVar10 != 0) {
    operator_delete(local_50);
  }
LAB_00be6764:
  if (*(long *)(lVar3 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00be6790(long param_1,long param_2)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  ulong local_e8;
  void *local_e0;
  void *local_d8;
  ulong local_d0;
  void *local_c8;
  void *local_c0;
  ulong local_b8;
  void *local_b0;
  void *local_a8;
  undefined8 local_a0;
  void *local_98;
  byte local_90 [16];
  void *local_80;
  byte local_78 [8];
  uint local_70;
  void *local_68;
  byte local_60 [16];
  void *local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  if ((*(char *)(param_1 + 0x15c) == '\0') && (uVar4 = FUN_0092e618(), (uVar4 & 1) == 0)) {
    FUN_008fcdb8(local_60,&DAT_0320ffa8);
    uVar5 = thunk_FUN_00ec653c();
    FUN_008fa54c(local_78,uVar5);
    lVar1 = param_2 + 0x68;
    lVar6 = FUN_009e2b04(lVar1,local_78);
    if ((local_78[0] & 1) != 0) {
      operator_delete(local_68);
    }
    if (param_2 + 0x70 != lVar6) {
      uVar5 = thunk_FUN_00ec653c();
      FUN_008fa54c(local_90,uVar5);
      plVar7 = (long *)FUN_0091092c(lVar1,local_78,local_90);
      uVar5 = FUN_00ec3f08(*plVar7 + 0x38);
      FUN_008fa54c(local_78,uVar5);
      FUN_008fce60(local_60,local_78);
      if ((local_78[0] & 1) != 0) {
        operator_delete(local_68);
      }
      if ((local_90[0] & 1) != 0) {
        operator_delete(local_80);
      }
    }
    lVar6 = FUN_00916034(local_60);
    if ((lVar6 != 0) && (*(char *)(param_2 + 0x80) == '\0')) {
      FUN_008fcdb8(local_78,&DAT_0320ffa8);
      FUN_00e70a24(param_2 + 0x10,local_78);
      uVar5 = FUN_00e6ce7c("MENU_FRIENDS_MESSAGE_NOTIFICATION",0);
      thunk_FUN_00e7051c(&local_a0,uVar5);
      FUN_008fcdb8(local_90,&DAT_0320ffa8);
      uVar5 = thunk_FUN_00ec6548();
      FUN_008fa54c(&local_b8,uVar5);
      lVar6 = FUN_009e2b04(lVar1,&local_b8);
      if ((local_b8 & 1) != 0) {
        operator_delete(local_a8);
      }
      if (param_2 + 0x70 != lVar6) {
        uVar5 = thunk_FUN_00ec6548();
        FUN_008fa54c(&local_d0,uVar5);
        plVar7 = (long *)FUN_0091092c(lVar1,&local_b8,&local_d0);
        uVar5 = FUN_00ec3f08(*plVar7 + 0x38);
        FUN_008fa54c(&local_b8,uVar5);
        FUN_008fce60(local_90,&local_b8);
        if (((byte)local_b8 & 1) != 0) {
          operator_delete(local_a8);
        }
        if ((local_d0 & 1) != 0) {
          operator_delete(local_c0);
        }
      }
      FUN_00e705c8(&local_b8,"[PLAYER_NAME]");
      FUN_00e70570(&local_d0,local_90);
      FUN_00e71248(&local_a0,0,&local_b8,&local_d0);
      if (local_c8 != (void *)0x0) {
        operator_delete__(local_c8);
        local_d0 = 0;
        local_c8 = (void *)0x0;
      }
      if (local_b0 != (void *)0x0) {
        operator_delete__(local_b0);
      }
      local_b8 = 0;
      local_b0 = (void *)0x0;
      local_a8 = (void *)0x0;
      uVar2 = (uint)(local_78[0] >> 1);
      if ((local_78[0] & 1) != 0) {
        uVar2 = local_70;
      }
      if (uVar2 < 0x21) {
        FUN_008fce60(&local_b8,local_78);
      }
      else {
        FUN_0093ddb0(&local_e8,local_78,0,0x1d,local_78);
        FUN_008fcdb8(&local_d0,&local_e8);
        FUN_008fce60(&local_b8,&local_d0);
        if ((local_d0 & 1) != 0) {
          operator_delete(local_c0);
        }
        if ((local_e8 & 1) != 0) {
          operator_delete(local_d8);
        }
        FUN_0090de84(&local_b8,"...",3);
      }
      FUN_00e705c8(&local_d0,"[PRIVATE_MESSAGE_PREVIEW]");
      FUN_00e70570(&local_e8,&local_b8);
      FUN_00e71248(&local_a0,0,&local_d0,&local_e8);
      if (local_e0 != (void *)0x0) {
        operator_delete__(local_e0);
        local_e8 = 0;
        local_e0 = (void *)0x0;
      }
      if (local_c8 != (void *)0x0) {
        operator_delete__(local_c8);
        local_d0 = 0;
        local_c8 = (void *)0x0;
      }
      puVar8 = operator_new(0x38);
      puVar8[5] = 0;
      puVar8[6] = 0;
      puVar8[4] = 0;
      puVar8[1] = 0;
      puVar8[2] = 0;
      *puVar8 = 0;
      puVar8[3] = 0;
      FUN_008fce60(puVar8,local_60);
      FUN_008fce60(puVar8 + 3,local_90);
      *(undefined1 *)(puVar8 + 6) = 0;
      FUN_00a9db04(0x41700000,&local_a0,FUN_00be6ba0,puVar8,FUN_00be6bac,0,param_1,1,0,1);
      if ((local_b8 & 1) != 0) {
        operator_delete(local_a8);
      }
      if ((local_90[0] & 1) != 0) {
        operator_delete(local_80);
      }
      if (local_98 != (void *)0x0) {
        operator_delete__(local_98);
        local_a0 = 0;
        local_98 = (void *)0x0;
      }
      if ((local_78[0] & 1) != 0) {
        operator_delete(local_68);
      }
    }
    if ((local_60[0] & 1) != 0) {
      operator_delete(local_50);
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00be6ba0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  FUN_00be6bb0(param_1,param_4,param_5);
  return;
}




void FUN_00be6bac(void)

{
  return;
}




void FUN_00be6bb0(undefined8 *param_1,undefined8 param_2,byte *param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = FUN_00916034(param_3);
  lVar2 = FUN_00916034(param_3);
  (**(code **)*param_1)(param_1,param_3,param_3 + 0x18,lVar1 + 0x50,lVar2 + 0x88,param_3[0x30]);
  uVar3 = FUN_009b8d90();
  FUN_009ba344(uVar3,param_2,0);
  if (param_3 != (byte *)0x0) {
    if ((param_3[0x18] & 1) != 0) {
      operator_delete(*(void **)(param_3 + 0x28));
    }
    if ((*param_3 & 1) != 0) {
      operator_delete(*(void **)(param_3 + 0x10));
    }
    operator_delete(param_3);
    return;
  }
  return;
}




void FUN_00be6c6c(void)

{
  return;
}




undefined8 FUN_00be6c70(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}




char * FUN_00be6c78(void)

{
  return "main_nav_social";
}




undefined8 FUN_00be6c84(long param_1)

{
  return *(undefined8 *)(param_1 + -8);
}




char * FUN_00be6c8c(void)

{
  return "main_nav_social";
}




void FUN_00be6c98(void)

{
  return;
}




void FUN_00be6ca0(void)

{
  return;
}




void FUN_00be6ca4(undefined8 param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    FUN_00be6ca4(param_1,*param_2);
    FUN_00be6ca4(param_1,param_2[1]);
    if ((*(byte *)(param_2 + 4) & 1) != 0) {
      operator_delete((void *)param_2[6]);
    }
    operator_delete(param_2);
    return;
  }
  return;
}




void FUN_00be6d00(undefined8 *param_1)

{
  *param_1 = &PTR___cxa_pure_virtual_027efb60;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return;
}




void FUN_00be6d44(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xbe6d48);
  (*pcVar1)();
}




undefined8 * FUN_00be6d48(long param_1,byte *param_2)

{
  ulong uVar1;
  ulong uVar2;
  size_t __n;
  byte bVar3;
  byte bVar4;
  int iVar5;
  undefined8 *puVar6;
  byte *__s1;
  void *__s2;
  undefined8 *puVar7;
  
  puVar7 = (undefined8 *)(param_1 + 8);
  puVar6 = (undefined8 *)FUN_00be6e00(param_1,param_2,*puVar7,puVar7);
  if (puVar7 != puVar6) {
    bVar3 = *(byte *)(puVar6 + 4);
    bVar4 = *param_2;
    uVar1 = (ulong)(bVar3 >> 1);
    if ((bVar3 & 1) != 0) {
      uVar1 = puVar6[5];
    }
    uVar2 = (ulong)(bVar4 >> 1);
    if ((bVar4 & 1) != 0) {
      uVar2 = *(ulong *)(param_2 + 8);
    }
    __n = uVar1;
    if (uVar2 <= uVar1) {
      __n = uVar2;
    }
    if (__n != 0) {
      __s1 = *(byte **)(param_2 + 0x10);
      __s2 = (void *)puVar6[6];
      if ((bVar4 & 1) == 0) {
        __s1 = param_2 + 1;
      }
      if ((bVar3 & 1) == 0) {
        __s2 = (void *)((long)puVar6 + 0x21);
      }
      iVar5 = memcmp(__s1,__s2,__n);
      if (iVar5 != 0) {
        if (iVar5 < 0) {
          return puVar7;
        }
        return puVar6;
      }
    }
    if (uVar1 <= uVar2) {
      return puVar6;
    }
  }
  return puVar7;
}




long FUN_00be6e00(undefined8 param_1,byte *param_2,long param_3,long param_4)

{
  ulong uVar1;
  size_t __n;
  ulong uVar2;
  byte *__s2;
  byte bVar3;
  uint uVar4;
  void *__s1;
  
  if (param_3 != 0) {
    uVar2 = *(ulong *)(param_2 + 8);
    __s2 = *(byte **)(param_2 + 0x10);
    if ((*param_2 & 1) == 0) {
      __s2 = param_2 + 1;
      uVar2 = (ulong)(*param_2 >> 1);
    }
    do {
      bVar3 = *(byte *)(param_3 + 0x20);
      uVar1 = (ulong)(bVar3 >> 1);
      if ((bVar3 & 1) != 0) {
        uVar1 = *(ulong *)(param_3 + 0x28);
      }
      __n = uVar2;
      if (uVar1 <= uVar2) {
        __n = uVar1;
      }
      if (__n == 0) {
LAB_00be6e74:
        uVar4 = (uint)(uVar2 < uVar1);
        if (uVar1 < uVar2) {
          uVar4 = 0xffffffff;
        }
      }
      else {
        __s1 = *(void **)(param_3 + 0x30);
        if ((bVar3 & 1) == 0) {
          __s1 = (void *)(param_3 + 0x21);
        }
        uVar4 = memcmp(__s1,__s2,__n);
        if (uVar4 == 0) goto LAB_00be6e74;
      }
      if ((int)uVar4 >= 0) {
        param_4 = param_3;
      }
      param_3 = *(long *)(param_3 + (ulong)((int)uVar4 < 0) * 8);
    } while (param_3 != 0);
  }
  return param_4;
}




long * FUN_00be6eb0(undefined8 *param_1,void *param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  
  plVar1 = *(long **)((long)param_2 + 8);
  if (*(long **)((long)param_2 + 8) == (long *)0x0) {
    plVar1 = (long *)((long)param_2 + 0x10);
    plVar3 = (long *)*plVar1;
    if ((void *)*plVar3 != param_2) {
      do {
        lVar2 = *plVar1;
        plVar1 = (long *)(lVar2 + 0x10);
        plVar3 = (long *)*plVar1;
      } while (*plVar3 != lVar2);
    }
  }
  else {
    do {
      plVar3 = plVar1;
      plVar1 = (long *)*plVar3;
    } while ((long *)*plVar3 != (long *)0x0);
  }
  if ((void *)*param_1 == param_2) {
    *param_1 = plVar3;
  }
  param_1[2] = param_1[2] + -1;
  FUN_009343e8(param_1[1],param_2);
  if ((*(byte *)((long)param_2 + 0x20) & 1) != 0) {
    operator_delete(*(void **)((long)param_2 + 0x30));
  }
  operator_delete(param_2);
  return plVar3;
}




void thunk_FUN_00be656c(long param_1)

{
  size_t __n;
  size_t sVar1;
  byte bVar2;
  long lVar3;
  int iVar4;
  int *piVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  char *__s2;
  int extraout_w8;
  char *pcVar9;
  void *__s1;
  byte bVar10;
  long lVar11;
  byte abStack_90 [16];
  void *pvStack_80;
  byte *apbStack_78 [2];
  void *pvStack_68;
  byte abStack_60 [8];
  size_t sStack_58;
  char *pcStack_50;
  long lStack_48;
  
  lVar3 = tpidr_el0;
  lStack_48 = *(long *)(lVar3 + 0x28);
  if (*(char *)(param_1 + 0x15c) == '\0') {
    FUN_0099cf3c(param_1 + 0xa0,1);
  }
  piVar5 = (int *)FUN_0090dde0();
  iVar4 = extraout_w8;
  if ((piVar5 != (int *)0x0) && (iVar4 = *piVar5, iVar4 == 0)) goto LAB_00be6764;
  lVar11 = *(long *)(piVar5 + 2) + (ulong)(iVar4 - 1) * 0x88;
  FUN_00be6790(param_1,lVar11);
  FUN_008fcdb8(abStack_60,&DAT_0320ffa8);
  uVar6 = thunk_FUN_00ec653c();
  FUN_008fa54c(apbStack_78,uVar6);
  lVar7 = FUN_009e2b04(lVar11 + 0x68,apbStack_78);
  if (((ulong)apbStack_78[0] & 1) != 0) {
    operator_delete(pvStack_68);
  }
  if (lVar11 + 0x70 != lVar7) {
    uVar6 = thunk_FUN_00ec653c();
    FUN_008fa54c(abStack_90,uVar6);
    plVar8 = (long *)FUN_0091092c(lVar11 + 0x68,apbStack_78,abStack_90);
    uVar6 = FUN_00ec3f08(*plVar8 + 0x38);
    FUN_008fa54c(apbStack_78,uVar6);
    FUN_008fce60(abStack_60,apbStack_78);
    if (((ulong)apbStack_78[0] & 1) != 0) {
      operator_delete(pvStack_68);
    }
    if ((abStack_90[0] & 1) != 0) {
      operator_delete(pvStack_80);
    }
  }
  bVar2 = *(byte *)(param_1 + 0xf0);
  __n = (ulong)(bVar2 >> 1);
  if ((bVar2 & 1) != 0) {
    __n = *(size_t *)(param_1 + 0xf8);
  }
  sVar1 = (ulong)(abStack_60[0] >> 1);
  if ((abStack_60[0] & 1) != 0) {
    sVar1 = sStack_58;
  }
  if (__n == sVar1) {
    bVar10 = abStack_60[0] & 1;
    __s1 = *(void **)(param_1 + 0x100);
    if ((bVar2 & 1) == 0) {
      __s1 = (void *)(param_1 + 0xf1);
    }
    __s2 = (char *)((ulong)abStack_60 | 1);
    if ((abStack_60[0] & 1) != 0) {
      __s2 = pcStack_50;
    }
    if ((bVar2 & 1) == 0) {
      if (__n != 0) {
        pcVar9 = (char *)(param_1 + 0xf1);
        lVar7 = -(ulong)(bVar2 >> 1);
        do {
          if (*pcVar9 != *__s2) goto LAB_00be6724;
          pcVar9 = pcVar9 + 1;
          lVar7 = lVar7 + 1;
          __s2 = __s2 + 1;
        } while (lVar7 != 0);
      }
    }
    else if ((__n != 0) && (iVar4 = memcmp(__s1,__s2,__n), iVar4 != 0)) goto LAB_00be6724;
  }
  else {
LAB_00be6724:
    apbStack_78[0] = abStack_60;
    lVar7 = FUN_00be6f58(param_1 + 0xc0,abStack_60,&DAT_01bbaee8,apbStack_78,abStack_90);
    *(undefined1 *)(lVar7 + 0x38) = 1;
    bVar10 = abStack_60[0] & 1;
  }
  if (bVar10 != 0) {
    operator_delete(pcStack_50);
  }
LAB_00be6764:
  if (*(long *)(lVar3 + 0x28) != lStack_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void * FUN_00be6f58(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  bool bVar1;
  long lVar2;
  undefined8 *puVar3;
  void *pvVar4;
  undefined8 local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  puVar3 = (undefined8 *)FUN_00be7008(param_1,&local_50,param_2);
  pvVar4 = (void *)*puVar3;
  bVar1 = pvVar4 == (void *)0x0;
  if (bVar1) {
    pvVar4 = operator_new(0x40);
    FUN_008fcdb8((long)pvVar4 + 0x20,*param_4);
    *(undefined1 *)((long)pvVar4 + 0x38) = 0;
    puVar3 = (undefined8 *)FUN_00be7134(param_1,local_50,puVar3,pvVar4);
  }
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(puVar3,bVar1);
  }
  return pvVar4;
}




void thunk_FUN_00be6250(long param_1)

{
  size_t __n;
  size_t sVar1;
  byte bVar2;
  byte bVar3;
  long lVar4;
  int iVar5;
  uint *puVar6;
  uint extraout_w8;
  uint uVar7;
  char *pcVar8;
  char *__s2;
  void *pvVar9;
  long lVar10;
  byte *pbVar11;
  byte *apbStack_58 [2];
  void *pvStack_48;
  undefined1 auStack_40 [8];
  long lStack_38;
  
  lVar4 = tpidr_el0;
  lStack_38 = *(long *)(lVar4 + 0x28);
  if ((*(byte *)(param_1 + 0x128) & 1) == 0) {
    if (*(byte *)(param_1 + 0x128) >> 1 == 0) goto LAB_00be63c4;
  }
  else if (*(long *)(param_1 + 0x130) == 0) goto LAB_00be63c4;
  if (*(char *)(param_1 + 0x15c) == '\0') {
    FUN_0099cf3c(param_1 + 0xa0,1);
  }
  FUN_00be6200(apbStack_58,param_1);
  pvVar9 = (void *)((ulong)apbStack_58 | 1);
  if (((ulong)apbStack_58[0] & 1) != 0) {
    pvVar9 = pvStack_48;
  }
  puVar6 = (uint *)FUN_0090ddb0(pvVar9);
  uVar7 = (uint)(byte)apbStack_58[0];
  if (((ulong)apbStack_58[0] & 1) != 0) {
    operator_delete(pvStack_48);
    uVar7 = extraout_w8;
  }
  if ((puVar6 != (uint *)0x0) && (uVar7 = *puVar6, uVar7 == 0)) goto LAB_00be63c4;
  bVar2 = *(byte *)(param_1 + 0xf0);
  lVar10 = *(long *)(puVar6 + 2) + (ulong)(uVar7 - 1) * 0x88;
  pbVar11 = (byte *)(lVar10 + 0x38);
  bVar3 = *pbVar11;
  __n = (ulong)(bVar2 >> 1);
  if ((bVar2 & 1) != 0) {
    __n = *(size_t *)(param_1 + 0xf8);
  }
  sVar1 = (ulong)(bVar3 >> 1);
  if ((bVar3 & 1) != 0) {
    sVar1 = *(size_t *)(lVar10 + 0x40);
  }
  if (__n == sVar1) {
    pvVar9 = *(void **)(param_1 + 0x100);
    __s2 = *(char **)(*(long *)(puVar6 + 2) + (ulong)(uVar7 - 1) * 0x88 + 0x48);
    if ((bVar2 & 1) == 0) {
      pvVar9 = (void *)(param_1 + 0xf1);
    }
    if ((bVar3 & 1) == 0) {
      __s2 = (char *)(lVar10 + 0x39);
    }
    if ((bVar2 & 1) == 0) {
      if (__n != 0) {
        pcVar8 = (char *)(param_1 + 0xf1);
        lVar10 = -(ulong)(bVar2 >> 1);
        do {
          if (*pcVar8 != *__s2) goto LAB_00be639c;
          pcVar8 = pcVar8 + 1;
          lVar10 = lVar10 + 1;
          __s2 = __s2 + 1;
        } while (lVar10 != 0);
      }
      goto LAB_00be63c4;
    }
    if ((__n == 0) || (iVar5 = memcmp(pvVar9,__s2,__n), iVar5 == 0)) goto LAB_00be63c4;
  }
LAB_00be639c:
  apbStack_58[0] = pbVar11;
  lVar10 = FUN_00be6f58(param_1 + 0xc0,pbVar11,&DAT_01bbaee8,apbStack_58,auStack_40);
  *(undefined1 *)(lVar10 + 0x38) = 1;
LAB_00be63c4:
  if (*(long *)(lVar4 + 0x28) != lStack_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void thunk_FUN_00be63ec(long param_1)

{
  size_t __n;
  size_t sVar1;
  byte bVar2;
  byte bVar3;
  long lVar4;
  int iVar5;
  uint *puVar6;
  uint extraout_w8;
  uint uVar7;
  char *pcVar8;
  char *__s2;
  void *pvVar9;
  long lVar10;
  byte *pbVar11;
  byte *apbStack_58 [2];
  void *pvStack_48;
  undefined1 auStack_40 [8];
  long lStack_38;
  
  lVar4 = tpidr_el0;
  lStack_38 = *(long *)(lVar4 + 0x28);
  if (*(char *)(param_1 + 0x15c) == '\0') {
    FUN_0099cf3c(param_1 + 0xa0,1);
  }
  FUN_00be61b0(apbStack_58,param_1);
  pvVar9 = (void *)((ulong)apbStack_58 | 1);
  if (((ulong)apbStack_58[0] & 1) != 0) {
    pvVar9 = pvStack_48;
  }
  puVar6 = (uint *)FUN_0090ddb0(pvVar9);
  uVar7 = (uint)(byte)apbStack_58[0];
  if (((ulong)apbStack_58[0] & 1) != 0) {
    operator_delete(pvStack_48);
    uVar7 = extraout_w8;
  }
  if ((puVar6 != (uint *)0x0) && (uVar7 = *puVar6, uVar7 == 0)) goto LAB_00be6544;
  bVar2 = *(byte *)(param_1 + 0xf0);
  lVar10 = *(long *)(puVar6 + 2) + (ulong)(uVar7 - 1) * 0x88;
  pbVar11 = (byte *)(lVar10 + 0x38);
  bVar3 = *pbVar11;
  __n = (ulong)(bVar2 >> 1);
  if ((bVar2 & 1) != 0) {
    __n = *(size_t *)(param_1 + 0xf8);
  }
  sVar1 = (ulong)(bVar3 >> 1);
  if ((bVar3 & 1) != 0) {
    sVar1 = *(size_t *)(lVar10 + 0x40);
  }
  if (__n == sVar1) {
    pvVar9 = *(void **)(param_1 + 0x100);
    __s2 = *(char **)(*(long *)(puVar6 + 2) + (ulong)(uVar7 - 1) * 0x88 + 0x48);
    if ((bVar2 & 1) == 0) {
      pvVar9 = (void *)(param_1 + 0xf1);
    }
    if ((bVar3 & 1) == 0) {
      __s2 = (char *)(lVar10 + 0x39);
    }
    if ((bVar2 & 1) == 0) {
      if (__n != 0) {
        pcVar8 = (char *)(param_1 + 0xf1);
        lVar10 = -(ulong)(bVar2 >> 1);
        do {
          if (*pcVar8 != *__s2) goto LAB_00be651c;
          pcVar8 = pcVar8 + 1;
          lVar10 = lVar10 + 1;
          __s2 = __s2 + 1;
        } while (lVar10 != 0);
      }
      goto LAB_00be6544;
    }
    if ((__n == 0) || (iVar5 = memcmp(pvVar9,__s2,__n), iVar5 == 0)) goto LAB_00be6544;
  }
LAB_00be651c:
  apbStack_58[0] = pbVar11;
  lVar10 = FUN_00be6f58(param_1 + 0xc0,pbVar11,&DAT_01bbaee8,apbStack_58,auStack_40);
  *(undefined1 *)(lVar10 + 0x38) = 1;
LAB_00be6544:
  if (*(long *)(lVar4 + 0x28) != lStack_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

