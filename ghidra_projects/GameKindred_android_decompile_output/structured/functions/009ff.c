// functions/009ff — 24 functions
#include "libGameKindred.h"




void FUN_009ff060(long param_1)

{
  long lVar1;
  
  lVar1 = FUN_009580b8();
  FUN_009fef88(param_1 + -0x18,*(undefined1 *)(lVar1 + 0x568a));
  return;
}




void FUN_009ff08c(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  ulong local_d0 [2];
  void *local_c0;
  undefined8 local_b8;
  void *local_b0;
  undefined1 local_a7;
  undefined8 local_a4;
  undefined4 local_9c;
  byte local_90 [16];
  void *local_80;
  byte local_78;
  void *local_68;
  byte local_60;
  void *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if ((*(int *)(param_2 + 0x40) == 0) && (*(char *)(param_2 + 0x44) != '\0')) {
    *(undefined1 *)(param_1 + 0xa0) = 1;
    FUN_008fce60(param_1 + 0x88,param_2 + 0x28);
    local_d0[0] = 0;
    local_d0[1] = 0;
    local_c0 = (void *)0x0;
    FUN_00e70510(&local_b8);
    memset(local_90,0,0x48);
    FUN_009580b8();
    uVar2 = FUN_0095fdf0();
    FUN_00910394(&local_b8,uVar2);
    lVar3 = FUN_009580b8();
    FUN_008fce60(local_d0,lVar3 + 0x5508);
    local_a7 = 1;
    local_9c = 0;
    local_a4 = 1;
    FUN_009ff204(param_1,local_d0);
    if (*(int *)(param_1 + 0x50) != 0) {
      lVar3 = *(long *)(param_1 + 0x58);
      do {
        if (*(code **)(lVar3 + 8) == (code *)0x0) {
          (**(code **)(lVar3 + 0x18))(*(undefined8 *)(lVar3 + 0x10));
        }
        else {
          (**(code **)(lVar3 + 8))();
        }
        lVar3 = lVar3 + 0x20;
      } while (lVar3 != *(long *)(param_1 + 0x58) + (ulong)*(uint *)(param_1 + 0x50) * 0x20);
    }
    if ((local_60 & 1) != 0) {
      operator_delete(local_50);
    }
    if ((local_78 & 1) != 0) {
      operator_delete(local_68);
    }
    if ((local_90[0] & 1) != 0) {
      operator_delete(local_80);
    }
    if (local_b0 != (void *)0x0) {
      operator_delete__(local_b0);
      local_b8 = 0;
      local_b0 = (void *)0x0;
    }
    if ((local_d0[0] & 1) != 0) {
      operator_delete(local_c0);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009ff2f8(long param_1)

{
  FUN_009ff08c(param_1 + -0x18);
  return;
}




void FUN_009ff300(long param_1,long param_2)

{
  if ((*(int *)(param_2 + 0xb8) == 0) && (*(char *)(param_2 + 0xbc) != '\0')) {
    FUN_008fce60(param_1 + 0x88,param_2 + 0x28);
  }
  return;
}




void FUN_009ff32c(long param_1,long param_2)

{
  if ((*(int *)(param_2 + 0xb8) == 0) && (*(char *)(param_2 + 0xbc) != '\0')) {
    FUN_008fce60(param_1 + 0x70,param_2 + 0x28);
  }
  return;
}




void FUN_009ff35c(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined4 uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 local_118;
  void *local_110;
  undefined8 local_108;
  void *local_100;
  ulong local_f8;
  void *local_f0;
  void *local_e8;
  ulong local_e0 [2];
  void *local_d0;
  undefined8 local_c8;
  void *local_c0;
  undefined1 local_b7;
  undefined4 local_b4;
  undefined4 local_a4;
  byte local_a0 [16];
  void *local_90;
  byte local_88 [16];
  void *local_78;
  byte local_70 [16];
  void *local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  uVar3 = FUN_009580c4();
  if ((uVar3 & 1) != 0) {
    local_e0[0] = 0;
    local_e0[1] = 0;
    local_d0 = (void *)0x0;
    FUN_00e70510(&local_c8);
    memset(local_a0,0,0x48);
    local_b7 = 0;
    FUN_00e70570(&local_f8,param_2 + 0x58);
    FUN_00910394(&local_c8,&local_f8);
    if (local_f0 != (void *)0x0) {
      operator_delete__(local_f0);
      local_f8 = 0;
      local_f0 = (void *)0x0;
    }
    FUN_008fce60(local_e0,param_2 + 0x40);
    local_a4 = *(undefined4 *)(param_2 + 0xd0);
    FUN_008fce60(local_70,param_2 + 0xb8);
    FUN_008fce60(local_88,param_2 + 0xa0);
    FUN_008fce60(local_a0,param_2 + 0x88);
    local_b4 = 0;
    uVar2 = FUN_009ff204(param_1,local_e0);
    FUN_008fa54c(&local_f8,"*GameMode_Blitz_Private*");
    lVar4 = FUN_00cead68(&local_f8);
    uVar5 = FUN_00e6ce7c(*(undefined8 *)(lVar4 + 0x78),0);
    if ((local_f8 & 1) != 0) {
      operator_delete(local_e8);
    }
    uVar6 = FUN_00e6ce7c("MENU_TOASTIE_INVITED_TO_PARTY",0);
    thunk_FUN_00e7051c(&local_f8,uVar6);
    FUN_00e705c8(&local_108,"[HANDLE]");
    FUN_00e70570(&local_118,param_2 + 0x58);
    FUN_00e71248(&local_f8,0,&local_108,&local_118);
    if (local_110 != (void *)0x0) {
      operator_delete__(local_110);
      local_118 = 0;
      local_110 = (void *)0x0;
    }
    if (local_100 != (void *)0x0) {
      operator_delete__(local_100);
      local_108 = 0;
      local_100 = (void *)0x0;
    }
    FUN_00e705c8(&local_108,"[GAME_MODE_NAME]");
    FUN_00e71248(&local_f8,0,&local_108,uVar5);
    if (local_100 != (void *)0x0) {
      operator_delete__(local_100);
      local_108 = 0;
      local_100 = (void *)0x0;
    }
    FUN_00a9db04(0xbf800000,&local_f8,FUN_009feeb4,uVar2,FUN_009feebc,uVar2,param_1,1,0,1);
    if (local_f0 != (void *)0x0) {
      operator_delete__(local_f0);
      local_f8 = 0;
      local_f0 = (void *)0x0;
    }
    if ((local_70[0] & 1) != 0) {
      operator_delete(local_60);
    }
    if ((local_88[0] & 1) != 0) {
      operator_delete(local_78);
    }
    if ((local_a0[0] & 1) != 0) {
      operator_delete(local_90);
    }
    if (local_c0 != (void *)0x0) {
      operator_delete__(local_c0);
      local_c8 = 0;
      local_c0 = (void *)0x0;
    }
    if ((local_e0[0] & 1) != 0) {
      operator_delete(local_d0);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




ulong FUN_009ff5dc(long param_1,byte *param_2)

{
  ulong uVar1;
  size_t __n;
  byte *__s2;
  byte bVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  long lVar6;
  byte *pbVar7;
  ulong uVar8;
  long lVar9;
  
  iVar3 = *(int *)(param_1 + 0x78);
  if (0 < iVar3) {
    __n = *(size_t *)(param_2 + 8);
    __s2 = *(byte **)(param_2 + 0x10);
    lVar9 = *(long *)(param_1 + 0x80);
    uVar8 = 0;
    if ((*param_2 & 1) == 0) {
      __s2 = param_2 + 1;
      __n = (ulong)(*param_2 >> 1);
    }
    do {
      pbVar5 = (byte *)(lVar9 + uVar8 * 0x88);
      bVar2 = *pbVar5;
      uVar1 = (ulong)(bVar2 >> 1);
      if ((bVar2 & 1) != 0) {
        uVar1 = *(ulong *)(pbVar5 + 8);
      }
      if (uVar1 == __n) {
        pbVar7 = *(byte **)(lVar9 + uVar8 * 0x88 + 0x10);
        if ((bVar2 & 1) == 0) {
          pbVar7 = pbVar5 + 1;
        }
        if ((bVar2 & 1) == 0) {
          if (__n == 0) goto LAB_009ff6ac;
          lVar6 = -(ulong)(bVar2 >> 1);
          pbVar7 = __s2;
          while (pbVar5 = pbVar5 + 1, *pbVar5 == *pbVar7) {
            lVar6 = lVar6 + 1;
            pbVar7 = pbVar7 + 1;
            if (lVar6 == 0) goto LAB_009ff6ac;
          }
        }
        else if ((__n == 0) || (iVar4 = memcmp(pbVar7,__s2,__n), iVar4 == 0)) goto LAB_009ff6ac;
      }
      uVar8 = uVar8 + 1;
    } while ((long)uVar8 < (long)iVar3);
  }
  uVar8 = 0xffffffff;
LAB_009ff6ac:
  return uVar8 & 0xffffffff;
}




void FUN_009ff6c4(uint *param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  
  uVar3 = *param_1;
  if (uVar3 == param_1[1]) {
    if (uVar3 < 0x20) {
      uVar2 = uVar3 << 1;
    }
    else if (uVar3 == 0xffffffff) {
      uVar2 = 0;
    }
    else {
      uVar2 = (uVar3 + 0x10) - (uVar3 & 0xf);
    }
    uVar1 = uVar3 + 1;
    if (uVar3 + 1 <= uVar2) {
      uVar1 = uVar2;
    }
    FUN_00951efc(param_1,uVar1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  lVar4 = *(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 0x88;
  FUN_008fcdb8(lVar4 + -0x88,param_2);
  thunk_FUN_00e7051c(lVar4 + -0x70,param_2 + 0x18);
  *(undefined8 *)(lVar4 + -0x50) = *(undefined8 *)(param_2 + 0x38);
  uVar5 = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(lVar4 + -0x58) = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(lVar4 + -0x60) = uVar5;
  FUN_008fcdb8(lVar4 + -0x48,param_2 + 0x40);
  FUN_008fcdb8(lVar4 + -0x30,param_2 + 0x58);
  FUN_008fcdb8(lVar4 + -0x18,param_2 + 0x70);
  return;
}




void FUN_009ff794(long param_1)

{
  int iVar1;
  long lVar2;
  
  iVar1 = FUN_009ff5dc();
  if (-1 < iVar1) {
    return;
  }
  lVar2 = *(long *)(param_1 + 0x80) + (long)iVar1 * 0x88;
  FUN_00a001f0(param_1 + 0x78,lVar2,lVar2 + 0x88);
  return;
}




void FUN_009ff7dc(long param_1,ulong param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x80) + (param_2 & 0xffffffff) * 0x88;
  FUN_00a001f0(param_1 + 0x78,lVar1,lVar1 + 0x88);
  return;
}




void FUN_009ff7f4(long param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  uint uVar4;
  
  if (-1 < (int)param_2) {
    lVar3 = *(long *)(param_1 + 0x80) + (ulong)param_2 * 0x88;
    *(undefined4 *)(lVar3 + 0x2c) = 1;
    iVar1 = *(int *)(param_1 + 0xa8);
    iVar2 = 0;
    if (iVar1 != 0) {
      iVar2 = (int)(param_2 - 1) / iVar1;
    }
    *(uint *)(lVar3 + 0x34) = (param_2 - 1) - iVar2 * iVar1;
    uVar4 = (uint)(*(int *)(param_1 + 0xa4) == 0);
    *(uint *)(lVar3 + 0x30) = uVar4;
    *(uint *)(param_1 + 0xa4) = uVar4;
  }
  return;
}




void FUN_009ff838(long param_1,uint param_2)

{
  if (-1 < (int)param_2) {
    *(undefined4 *)(*(long *)(param_1 + 0x80) + (ulong)param_2 * 0x88 + 0x2c) = 2;
  }
  return;
}




void FUN_009ff854(long param_1)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + 0xa0) != '\0') {
    uVar1 = FUN_009580b8();
    FUN_00960a18(uVar1,param_1 + 0x78);
    return;
  }
  return;
}




void FUN_009ff88c(undefined8 param_1,long param_2)

{
  switch(*(undefined4 *)(param_2 + 0x108)) {
  case 0:
    FUN_009ff35c();
    return;
  case 1:
    FUN_009ffa7c();
    return;
  case 2:
    FUN_009ff8c0();
    return;
  case 3:
    FUN_009ffb94();
    return;
  default:
    return;
  }
}




void FUN_009ff8c0(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 local_100;
  void *local_f8;
  ulong local_f0 [2];
  void *local_e0;
  undefined8 local_d8;
  void *local_d0;
  undefined1 local_c7;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  byte local_b0 [16];
  void *local_a0;
  byte local_98;
  void *local_88;
  byte local_80;
  void *local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  FUN_00952050(param_1 + 0x78,0);
  if (*(int *)(param_2 + 0x30) != 0) {
    lVar3 = 0;
    uVar4 = 0;
    do {
      lVar2 = *(long *)(param_2 + 0x38);
      local_f0[0] = 0;
      local_f0[1] = 0;
      local_e0 = (void *)0x0;
      FUN_00e70510(&local_d8);
      memset(local_b0,0,0x48);
      lVar2 = lVar2 + lVar3;
      local_c7 = *(undefined1 *)(lVar2 + 0x18);
      FUN_00e70570(&local_100,lVar2);
      FUN_00910394(&local_d8,&local_100);
      if (local_f8 != (void *)0x0) {
        operator_delete__(local_f8);
        local_100 = 0;
        local_f8 = (void *)0x0;
      }
      local_c0 = *(undefined4 *)(lVar2 + 0x20);
      local_bc = *(undefined4 *)(lVar2 + 0x1c);
      local_c4 = *(undefined4 *)(lVar2 + 0x24);
      FUN_009ff6c4(param_1 + 0x78,local_f0);
      if ((local_80 & 1) != 0) {
        operator_delete(local_70);
      }
      if ((local_98 & 1) != 0) {
        operator_delete(local_88);
      }
      if ((local_b0[0] & 1) != 0) {
        operator_delete(local_a0);
      }
      if (local_d0 != (void *)0x0) {
        operator_delete__(local_d0);
        local_d8 = 0;
        local_d0 = (void *)0x0;
      }
      if ((local_f0[0] & 1) != 0) {
        operator_delete(local_e0);
      }
      uVar4 = uVar4 + 1;
      lVar3 = lVar3 + 0x28;
    } while (uVar4 < *(uint *)(param_2 + 0x30));
  }
  FUN_009fef88(param_1,1);
  if (*(int *)(param_1 + 0x50) != 0) {
    lVar3 = *(long *)(param_1 + 0x58);
    do {
      if (*(code **)(lVar3 + 8) == (code *)0x0) {
        (**(code **)(lVar3 + 0x18))(*(undefined8 *)(lVar3 + 0x10));
      }
      else {
        (**(code **)(lVar3 + 8))();
      }
      lVar3 = lVar3 + 0x20;
    } while (lVar3 != *(long *)(param_1 + 0x58) + (ulong)*(uint *)(param_1 + 0x50) * 0x20);
  }
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009ffa7c(long param_1,long param_2)

{
  size_t __n;
  size_t sVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  long lVar7;
  void *__s1;
  char *__s2;
  
  bVar2 = *(byte *)(param_2 + 0xf0);
  bVar3 = *(byte *)(param_1 + 0x88);
  __n = (ulong)(bVar2 >> 1);
  if ((bVar2 & 1) != 0) {
    __n = *(size_t *)(param_2 + 0xf8);
  }
  sVar1 = (ulong)(bVar3 >> 1);
  if ((bVar3 & 1) != 0) {
    sVar1 = *(size_t *)(param_1 + 0x90);
  }
  if (__n == sVar1) {
    __s1 = *(void **)(param_2 + 0x100);
    __s2 = *(char **)(param_1 + 0x98);
    if ((bVar2 & 1) == 0) {
      __s1 = (void *)(param_2 + 0xf1);
    }
    if ((bVar3 & 1) == 0) {
      __s2 = (char *)(param_1 + 0x89);
    }
    if ((bVar2 & 1) == 0) {
      if (__n != 0) {
        pcVar6 = (char *)(param_2 + 0xf1);
        lVar7 = -(ulong)(bVar2 >> 1);
        do {
          if (*pcVar6 != *__s2) {
            return;
          }
          pcVar6 = pcVar6 + 1;
          lVar7 = lVar7 + 1;
          __s2 = __s2 + 1;
        } while (lVar7 != 0);
      }
    }
    else if ((__n != 0) && (iVar4 = memcmp(__s1,__s2,__n), iVar4 != 0)) {
      return;
    }
    uVar5 = FUN_009ff5dc(param_1,param_2 + 0xd8);
    if (-1 < (int)uVar5) {
      *(undefined4 *)(*(long *)(param_1 + 0x80) + (ulong)uVar5 * 0x88 + 0x2c) = 3;
    }
    FUN_009ff854(param_1);
    if (*(int *)(param_1 + 0x50) != 0) {
      lVar7 = *(long *)(param_1 + 0x58);
      do {
        if (*(code **)(lVar7 + 8) == (code *)0x0) {
          (**(code **)(lVar7 + 0x18))(*(undefined8 *)(lVar7 + 0x10));
        }
        else {
          (**(code **)(lVar7 + 8))();
        }
        lVar7 = lVar7 + 0x20;
      } while (lVar7 != *(long *)(param_1 + 0x58) + (ulong)*(uint *)(param_1 + 0x50) * 0x20);
    }
  }
  return;
}




void FUN_009ffb94(long param_1,long param_2)

{
  size_t __n;
  size_t sVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  char *pcVar5;
  long lVar6;
  void *__s1;
  char *__s2;
  
  bVar2 = *(byte *)(param_2 + 0xf0);
  bVar3 = *(byte *)(param_1 + 0x88);
  __n = (ulong)(bVar2 >> 1);
  if ((bVar2 & 1) != 0) {
    __n = *(size_t *)(param_2 + 0xf8);
  }
  sVar1 = (ulong)(bVar3 >> 1);
  if ((bVar3 & 1) != 0) {
    sVar1 = *(size_t *)(param_1 + 0x90);
  }
  if (__n == sVar1) {
    __s1 = *(void **)(param_2 + 0x100);
    __s2 = *(char **)(param_1 + 0x98);
    if ((bVar2 & 1) == 0) {
      __s1 = (void *)(param_2 + 0xf1);
    }
    if ((bVar3 & 1) == 0) {
      __s2 = (char *)(param_1 + 0x89);
    }
    if ((bVar2 & 1) == 0) {
      if (__n != 0) {
        pcVar5 = (char *)(param_2 + 0xf1);
        lVar6 = -(ulong)(bVar2 >> 1);
        do {
          if (*pcVar5 != *__s2) {
            return;
          }
          pcVar5 = pcVar5 + 1;
          lVar6 = lVar6 + 1;
          __s2 = __s2 + 1;
        } while (lVar6 != 0);
      }
    }
    else if ((__n != 0) && (iVar4 = memcmp(__s1,__s2,__n), iVar4 != 0)) {
      return;
    }
    FUN_009fef88(param_1,0);
    FUN_00952050(param_1 + 0x78,0);
    if (*(int *)(param_1 + 0x40) != 0) {
      lVar6 = *(long *)(param_1 + 0x48);
      do {
        if (*(code **)(lVar6 + 8) == (code *)0x0) {
          (**(code **)(lVar6 + 0x18))(*(undefined8 *)(lVar6 + 0x10));
        }
        else {
          (**(code **)(lVar6 + 8))();
        }
        lVar6 = lVar6 + 0x20;
      } while (lVar6 != *(long *)(param_1 + 0x48) + (ulong)*(uint *)(param_1 + 0x40) * 0x20);
    }
  }
  return;
}




void FUN_009ffc94(long param_1)

{
  FUN_009ff88c(param_1 + -0x18);
  return;
}




void FUN_009ffc9c(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 local_38;
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (*(int *)(param_2 + 0x40) == 0) {
    FUN_00e705c8(&local_38,"The party member has been removed.");
    FUN_00a9da50(0x3fc00000,&local_38,0,1);
    if (local_30 != (void *)0x0) {
      operator_delete__(local_30);
      local_38 = 0;
      local_30 = (void *)0x0;
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void thunk_FUN_009ffc9c(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 uStack_38;
  void *pvStack_30;
  long lStack_28;
  
  lVar1 = tpidr_el0;
  lStack_28 = *(long *)(lVar1 + 0x28);
  if (*(int *)(param_2 + 0x40) == 0) {
    FUN_00e705c8(&uStack_38,"The party member has been removed.");
    FUN_00a9da50(0x3fc00000,&uStack_38,0,1);
    if (pvStack_30 != (void *)0x0) {
      operator_delete__(pvStack_30);
      uStack_38 = 0;
      pvStack_30 = (void *)0x0;
    }
  }
  if (*(long *)(lVar1 + 0x28) == lStack_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009ffd1c(undefined8 param_1)

{
  FUN_009fef88(param_1,0);
  return;
}




void FUN_009ffd24(long param_1,undefined8 param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  uint uVar8;
  double dVar9;
  undefined8 local_58;
  void *local_50;
  undefined8 local_48;
  void *local_40;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  uVar4 = FUN_0093dbe8();
  if ((uVar4 & 1) == 0) {
    FUN_009580b8();
    dVar9 = (double)FUN_00961684();
    uVar5 = FUN_009580b8();
    if (dVar9 <= 0.0) {
      FUN_00960b10(uVar5,param_3);
      FUN_009fef88(param_1,1);
    }
    else {
      FUN_00960ba4();
      FUN_009fef88(param_1,0);
      uVar5 = FUN_00e6ce7c("PARTY_ACCEPT_BANNED_MSG",0);
      thunk_FUN_00e7051c(&local_48,uVar5);
      uVar5 = FUN_00e6ce7c("MAIN_BANNED_TITLE",0);
      FUN_009580b8();
      dVar9 = (double)FUN_00961684();
      FUN_00cb55c0(&local_58,&local_48,(long)dVar9,0);
      uVar6 = FUN_00e6ce7c("MAIN_BANNED_ACCEPT",0);
      FUN_00a9b8b8(uVar5,&local_58,uVar6,param_1,0);
      if (local_50 != (void *)0x0) {
        operator_delete__(local_50);
        local_58 = 0;
        local_50 = (void *)0x0;
      }
      if (local_40 != (void *)0x0) {
        operator_delete__(local_40);
        local_48 = 0;
        local_40 = (void *)0x0;
      }
    }
  }
  else if (*(char *)(param_1 + 0xa0) != '\0') {
    if (-1 < (int)param_3) {
      lVar7 = *(long *)(param_1 + 0x80) + (ulong)param_3 * 0x88;
      *(undefined4 *)(lVar7 + 0x2c) = 1;
      iVar1 = *(int *)(param_1 + 0xa8);
      iVar2 = 0;
      if (iVar1 != 0) {
        iVar2 = (int)(param_3 - 1) / iVar1;
      }
      *(uint *)(lVar7 + 0x34) = (param_3 - 1) - iVar2 * iVar1;
      uVar8 = (uint)(*(int *)(param_1 + 0xa4) == 0);
      *(uint *)(lVar7 + 0x30) = uVar8;
      *(uint *)(param_1 + 0xa4) = uVar8;
    }
    FUN_009ff854(param_1);
    if (*(int *)(param_1 + 0x50) != 0) {
      lVar7 = *(long *)(param_1 + 0x58);
      do {
        if (*(code **)(lVar7 + 8) == (code *)0x0) {
          (**(code **)(lVar7 + 0x18))(*(undefined8 *)(lVar7 + 0x10));
        }
        else {
          (**(code **)(lVar7 + 8))();
        }
        lVar7 = lVar7 + 0x20;
      } while (lVar7 != *(long *)(param_1 + 0x58) + (ulong)*(uint *)(param_1 + 0x50) * 0x20);
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009ffeec(long param_1,undefined8 param_2,uint param_3)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_0093dbe8();
  if ((uVar1 & 1) != 0) {
    if (-1 < (int)param_3) {
      *(undefined4 *)(*(long *)(param_1 + 0x80) + (ulong)param_3 * 0x88 + 0x2c) = 2;
    }
    return;
  }
  uVar2 = FUN_009580b8();
  FUN_00960ba4(uVar2,param_3);
  return;
}




void FUN_009fff44(long param_1)

{
  uint uVar1;
  undefined8 uVar2;
  int *piVar3;
  long lVar4;
  
  uVar1 = FUN_009ff5dc();
  if ((-1 < (int)uVar1) &&
     (piVar3 = (int *)(*(long *)(param_1 + 0x80) + (ulong)uVar1 * 0x88 + 0x2c), *piVar3 != 2)) {
    *piVar3 = 2;
    uVar2 = FUN_009580b8();
    FUN_00960e18(uVar2,*(long *)(param_1 + 0x80) + (ulong)uVar1 * 0x88,param_1 + 0x88);
    lVar4 = *(long *)(param_1 + 0x80) + (ulong)uVar1 * 0x88;
    FUN_00a001f0(param_1 + 0x78,lVar4,lVar4 + 0x88);
    FUN_009ff854(param_1);
    if (*(int *)(param_1 + 0x50) != 0) {
      lVar4 = *(long *)(param_1 + 0x58);
      do {
        if (*(code **)(lVar4 + 8) == (code *)0x0) {
          (**(code **)(lVar4 + 0x18))(*(undefined8 *)(lVar4 + 0x10));
        }
        else {
          (**(code **)(lVar4 + 8))();
        }
        lVar4 = lVar4 + 0x20;
      } while (lVar4 != *(long *)(param_1 + 0x58) + (ulong)*(uint *)(param_1 + 0x50) * 0x20);
    }
  }
  return;
}

