// functions/00bfb — 30 functions
#include "libGameKindred.h"




void thunk_FUN_00bfb584(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uStack_38;
  void *pvStack_30;
  long lStack_28;
  
  lVar1 = tpidr_el0;
  lStack_28 = *(long *)(lVar1 + 0x28);
  FUN_00e70570(&uStack_38,param_1 + 0x58);
  FUN_00916048(&uStack_38);
  if (pvStack_30 != (void *)0x0) {
    operator_delete__(pvStack_30);
    uStack_38 = 0;
    pvStack_30 = (void *)0x0;
  }
  uVar2 = FUN_00e6ce7c("MENU_FRIENDS_ADD_EXPLAIN_REQUEST_SENT_TO",0);
  FUN_00a9da50(0x40200000,uVar2,0,1);
  if (*(long *)(lVar1 + 0x28) == lStack_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void thunk_FUN_00bfb3c4(long param_1)

{
  size_t __n;
  size_t sVar1;
  byte bVar2;
  int iVar3;
  undefined8 uVar4;
  char *__s2;
  char *pcVar5;
  long lVar6;
  void *__s1;
  
  if (*(char *)(param_1 + 0xa1) != '\0') {
    bVar2 = *(byte *)(param_1 + 0x70);
    __n = (ulong)(bVar2 >> 1);
    if ((bVar2 & 1) != 0) {
      __n = *(size_t *)(param_1 + 0x78);
    }
    sVar1 = (ulong)(DAT_0320ffa8 >> 1);
    if ((DAT_0320ffa8 & 1) != 0) {
      sVar1 = DAT_0320ffb0;
    }
    if (__n == sVar1) {
      __s1 = *(void **)(param_1 + 0x80);
      if ((bVar2 & 1) == 0) {
        __s1 = (void *)(param_1 + 0x71);
      }
      __s2 = DAT_0320ffb8;
      if ((DAT_0320ffa8 & 1) == 0) {
        __s2 = &DAT_0320ffa9;
      }
      if ((bVar2 & 1) == 0) {
        if (__n != 0) {
          pcVar5 = (char *)(param_1 + 0x71);
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
      else if ((__n != 0) && (iVar3 = memcmp(__s1,__s2,__n), iVar3 != 0)) {
        return;
      }
      uVar4 = FUN_009580b8();
      FUN_00962db8(uVar4,param_1 + 0x40);
      return;
    }
  }
  return;
}




void thunk_FUN_00bfb490(long param_1)

{
  size_t __n;
  size_t sVar1;
  byte bVar2;
  int iVar3;
  undefined8 uVar4;
  char *__s2;
  char *pcVar5;
  long lVar6;
  void *__s1;
  
  if (*(char *)(param_1 + 0xa2) != '\0') {
    bVar2 = *(byte *)(param_1 + 0x88);
    __n = (ulong)(bVar2 >> 1);
    if ((bVar2 & 1) != 0) {
      __n = *(size_t *)(param_1 + 0x90);
    }
    sVar1 = (ulong)(DAT_0320ffa8 >> 1);
    if ((DAT_0320ffa8 & 1) != 0) {
      sVar1 = DAT_0320ffb0;
    }
    if (__n == sVar1) {
      __s1 = *(void **)(param_1 + 0x98);
      if ((bVar2 & 1) == 0) {
        __s1 = (void *)(param_1 + 0x89);
      }
      __s2 = DAT_0320ffb8;
      if ((DAT_0320ffa8 & 1) == 0) {
        __s2 = &DAT_0320ffa9;
      }
      if ((bVar2 & 1) == 0) {
        if (__n != 0) {
          pcVar5 = (char *)(param_1 + 0x89);
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
      else if ((__n != 0) && (iVar3 = memcmp(__s1,__s2,__n), iVar3 != 0)) {
        return;
      }
      uVar4 = FUN_009580b8();
      FUN_00963694(uVar4,param_1 + 0x40);
      return;
    }
  }
  return;
}




void FUN_00bfb100(undefined8 param_1,long param_2)

{
  long lVar1;
  byte local_40 [16];
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_0090dab8(local_40,&DAT_01b9349c,param_2 + 0x70);
  FUN_008fcdb8(param_1,local_40);
  if ((local_40[0] & 1) != 0) {
    operator_delete(local_30);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00bfb174(long param_1)

{
  FUN_00bfaf9c(param_1 + -0x28);
  return;
}




void FUN_00bfb17c(long param_1,long param_2)

{
  byte bVar1;
  undefined4 uVar2;
  
  uVar2 = FUN_009580b8();
  bVar1 = FUN_0095f418(uVar2,param_2 + 0x28);
  *(byte *)(param_1 + 0xa2) = bVar1 & 1;
  return;
}




void FUN_00bfb1b0(long param_1,long param_2)

{
  byte bVar1;
  undefined4 uVar2;
  
  uVar2 = FUN_009580b8();
  bVar1 = FUN_0095f418(uVar2,param_2 + 0x28);
  *(byte *)(param_1 + 0x7a) = bVar1 & 1;
  return;
}




void FUN_00bfb1e4(long param_1,long param_2)

{
  size_t __n;
  size_t sVar1;
  byte bVar2;
  long lVar3;
  bool bVar4;
  int iVar5;
  ulong uVar6;
  char *__s2;
  char *pcVar7;
  long lVar8;
  void *__s1;
  byte local_60 [8];
  size_t local_58;
  char *local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  uVar6 = FUN_00e84e5c(param_2);
  if (((uVar6 & 1) == 0) || (*(char *)(param_2 + 0x44) == '\0')) goto LAB_00bfb31c;
  *(undefined1 *)(param_1 + 0xa2) = 0;
  FUN_00bfb348(local_60,param_1);
  bVar2 = *(byte *)(param_1 + 0x40);
  bVar4 = false;
  __n = (ulong)(bVar2 >> 1);
  if ((bVar2 & 1) != 0) {
    __n = *(size_t *)(param_1 + 0x48);
  }
  sVar1 = (ulong)(local_60[0] >> 1);
  if ((local_60[0] & 1) != 0) {
    sVar1 = local_58;
  }
  if (__n == sVar1) {
    __s1 = *(void **)(param_1 + 0x50);
    if ((bVar2 & 1) == 0) {
      __s1 = (void *)(param_1 + 0x41);
    }
    __s2 = (char *)((ulong)local_60 | 1);
    if ((local_60[0] & 1) != 0) {
      __s2 = local_50;
    }
    if ((bVar2 & 1) == 0) {
      if (__n != 0) {
        pcVar7 = (char *)(param_1 + 0x41);
        lVar8 = -(ulong)(bVar2 >> 1);
        do {
          if (*pcVar7 != *__s2) {
            bVar4 = false;
            goto joined_r0x00bfb2fc;
          }
          pcVar7 = pcVar7 + 1;
          lVar8 = lVar8 + 1;
          __s2 = __s2 + 1;
        } while (lVar8 != 0);
      }
    }
    else if (__n != 0) {
      iVar5 = memcmp(__s1,__s2,__n);
      bVar4 = iVar5 == 0;
      goto joined_r0x00bfb2fc;
    }
    bVar4 = true;
  }
joined_r0x00bfb2fc:
  if ((local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
  if (bVar4) {
    FUN_00bfae0c(param_1);
  }
  else {
    FUN_008fce60(param_1 + 0x88,&DAT_0320ffa8);
  }
LAB_00bfb31c:
  if (*(long *)(lVar3 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00bfb348(undefined8 param_1,long param_2)

{
  long lVar1;
  byte local_40 [16];
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_0090dab8(local_40,&DAT_01b9349c,param_2 + 0x88);
  FUN_008fcdb8(param_1,local_40);
  if ((local_40[0] & 1) != 0) {
    operator_delete(local_30);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00bfb3bc(long param_1)

{
  FUN_00bfb1e4(param_1 + -0x28);
  return;
}




void FUN_00bfb3c4(long param_1)

{
  size_t __n;
  size_t sVar1;
  byte bVar2;
  int iVar3;
  undefined8 uVar4;
  char *__s2;
  char *pcVar5;
  long lVar6;
  void *__s1;
  
  if (*(char *)(param_1 + 0xa1) != '\0') {
    bVar2 = *(byte *)(param_1 + 0x70);
    __n = (ulong)(bVar2 >> 1);
    if ((bVar2 & 1) != 0) {
      __n = *(size_t *)(param_1 + 0x78);
    }
    sVar1 = (ulong)(DAT_0320ffa8 >> 1);
    if ((DAT_0320ffa8 & 1) != 0) {
      sVar1 = DAT_0320ffb0;
    }
    if (__n == sVar1) {
      __s1 = *(void **)(param_1 + 0x80);
      if ((bVar2 & 1) == 0) {
        __s1 = (void *)(param_1 + 0x71);
      }
      __s2 = DAT_0320ffb8;
      if ((DAT_0320ffa8 & 1) == 0) {
        __s2 = &DAT_0320ffa9;
      }
      if ((bVar2 & 1) == 0) {
        if (__n != 0) {
          pcVar5 = (char *)(param_1 + 0x71);
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
      else if ((__n != 0) && (iVar3 = memcmp(__s1,__s2,__n), iVar3 != 0)) {
        return;
      }
      uVar4 = FUN_009580b8();
      FUN_00962db8(uVar4,param_1 + 0x40);
      return;
    }
  }
  return;
}




void FUN_00bfb490(long param_1)

{
  size_t __n;
  size_t sVar1;
  byte bVar2;
  int iVar3;
  undefined8 uVar4;
  char *__s2;
  char *pcVar5;
  long lVar6;
  void *__s1;
  
  if (*(char *)(param_1 + 0xa2) != '\0') {
    bVar2 = *(byte *)(param_1 + 0x88);
    __n = (ulong)(bVar2 >> 1);
    if ((bVar2 & 1) != 0) {
      __n = *(size_t *)(param_1 + 0x90);
    }
    sVar1 = (ulong)(DAT_0320ffa8 >> 1);
    if ((DAT_0320ffa8 & 1) != 0) {
      sVar1 = DAT_0320ffb0;
    }
    if (__n == sVar1) {
      __s1 = *(void **)(param_1 + 0x98);
      if ((bVar2 & 1) == 0) {
        __s1 = (void *)(param_1 + 0x89);
      }
      __s2 = DAT_0320ffb8;
      if ((DAT_0320ffa8 & 1) == 0) {
        __s2 = &DAT_0320ffa9;
      }
      if ((bVar2 & 1) == 0) {
        if (__n != 0) {
          pcVar5 = (char *)(param_1 + 0x89);
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
      else if ((__n != 0) && (iVar3 = memcmp(__s1,__s2,__n), iVar3 != 0)) {
        return;
      }
      uVar4 = FUN_009580b8();
      FUN_00963694(uVar4,param_1 + 0x40);
      return;
    }
  }
  return;
}




void FUN_00bfb55c(long param_1)

{
  FUN_0091605c(param_1 + 0x40);
  FUN_00bfae0c(param_1);
  return;
}




void FUN_00bfb584(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 local_38;
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00e70570(&local_38,param_1 + 0x58);
  FUN_00916048(&local_38);
  if (local_30 != (void *)0x0) {
    operator_delete__(local_30);
    local_38 = 0;
    local_30 = (void *)0x0;
  }
  uVar2 = FUN_00e6ce7c("MENU_FRIENDS_ADD_EXPLAIN_REQUEST_SENT_TO",0);
  FUN_00a9da50(0x40200000,uVar2,0,1);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00bfb608(undefined8 *param_1)

{
  *param_1 = &PTR___cxa_pure_virtual_027f43b8;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return;
}




void FUN_00bfb64c(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xbfb650);
  (*pcVar1)();
}




void FUN_00bfb654(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  byte local_70 [16];
  void *local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  code *pcStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_008fa54c(local_70);
  lVar2 = FUN_0090e774(param_1,local_70);
  uStack_50 = 0;
  pcStack_40 = thunk_FUN_00bf9e70;
  local_58 = param_3;
  local_48 = param_3;
  FUN_009e4694(lVar2 + 0x10,&local_58);
  if ((local_70[0] & 1) != 0) {
    operator_delete(local_60);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00bfb6e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  byte local_70 [16];
  void *local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  code *pcStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_008fa54c(local_70);
  lVar2 = FUN_0090e774(param_1,local_70);
  local_58 = 0;
  pcStack_40 = thunk_FUN_00bf9ed4;
  uStack_50 = param_3;
  local_48 = param_3;
  FUN_00bfb778(lVar2 + 0x20,&local_58);
  if ((local_70[0] & 1) != 0) {
    operator_delete(local_60);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00bfb778(uint *param_1,undefined8 *param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  
  uVar4 = *param_1;
  if (uVar4 == param_1[1]) {
    if (uVar4 < 0x20) {
      uVar3 = uVar4 << 1;
    }
    else if (uVar4 == 0xffffffff) {
      uVar3 = 0;
    }
    else {
      uVar3 = (uVar4 + 0x10) - (uVar4 & 0xf);
    }
    uVar2 = uVar4 + 1;
    if (uVar4 + 1 <= uVar3) {
      uVar2 = uVar3;
    }
    FUN_00bfb80c(param_1,uVar2);
    uVar4 = *param_1;
  }
  *param_1 = uVar4 + 1;
  uVar5 = param_2[2];
  lVar1 = *(long *)(param_1 + 2) + (ulong)(uVar4 + 1) * 0x20;
  *(undefined8 *)(lVar1 + -8) = param_2[3];
  *(undefined8 *)(lVar1 + -0x10) = uVar5;
  uVar5 = *param_2;
  *(undefined8 *)(lVar1 + -0x18) = param_2[1];
  *(undefined8 *)(lVar1 + -0x20) = uVar5;
  return;
}




void FUN_00bfb80c(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 << 5);
    puVar2 = *(undefined8 **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar3 = (ulong)*param_1 << 5;
      puVar4 = puVar1;
      do {
        uVar5 = puVar2[2];
        lVar3 = lVar3 + -0x20;
        puVar4[3] = puVar2[3];
        puVar4[2] = uVar5;
        uVar5 = *puVar2;
        puVar4[1] = puVar2[1];
        *puVar4 = uVar5;
        puVar4 = puVar4 + 4;
        puVar2 = puVar2 + 4;
      } while (lVar3 != 0);
      puVar2 = *(undefined8 **)(param_1 + 2);
    }
    param_1[1] = param_2;
    if (puVar2 != (undefined8 *)0x0) {
      operator_delete__(puVar2);
    }
    *(undefined8 **)(param_1 + 2) = puVar1;
  }
  return;
}




void FUN_00bfb898(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  byte local_70 [16];
  void *local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  code *pcStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_008fa54c(local_70);
  lVar2 = FUN_0090e774(param_1,local_70);
  local_58 = 0;
  pcStack_40 = thunk_FUN_00bf9ed4;
  uStack_50 = param_3;
  local_48 = param_3;
  FUN_00bfb778(lVar2 + 0x30,&local_58);
  if ((local_70[0] & 1) != 0) {
    operator_delete(local_60);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00bfb928(undefined8 *param_1)

{
  long lVar1;
  void *pvVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 local_70 [2];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined1 local_48;
  undefined8 local_44;
  undefined1 local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR___cxa_pure_virtual_027f4430;
  pvVar2 = operator_new(0xc30);
  FUN_00c7e8c0();
  iVar5 = 0;
  *(undefined8 **)((long)pvVar2 + 0xb8) = param_1;
  *param_1 = &PTR_FUN_027f43f8;
  param_1[1] = pvVar2;
  do {
    uVar3 = FUN_009f2588();
    puVar4 = (undefined4 *)FUN_009f25a4(uVar3,iVar5);
    local_70[0] = *puVar4;
    uStack_60 = *(undefined8 *)(puVar4 + 4);
    local_68 = *(undefined8 *)(puVar4 + 2);
    local_58 = *(undefined8 *)(puVar4 + 6);
    uStack_50 = *(undefined8 *)(puVar4 + 8);
    local_48 = *(undefined1 *)(puVar4 + 10);
    local_44 = *(undefined8 *)(puVar4 + 0xb);
    local_3c = *(undefined1 *)(puVar4 + 0xd);
    FUN_00c7ed74(param_1[1],local_70);
    iVar5 = iVar5 + 1;
  } while (iVar5 != 0x1a);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00bfba00(undefined8 param_1,undefined4 param_2,uint param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  undefined8 uVar1;
  
  uVar1 = FUN_009f2588();
  FUN_009f2b38(uVar1,param_2,param_3 & 1,param_4,param_5,param_6);
  return;
}




void FUN_00bfba54(undefined8 param_1,undefined4 param_2,uint param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_009f2588();
  FUN_009f2e44(uVar1,param_2,param_3 & 1);
  return;
}




void FUN_00bfba80(undefined8 param_1,undefined4 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_009f2588();
  FUN_009f2798(uVar1,param_2);
  return;
}




void FUN_00bfbaa4(undefined8 *param_1)

{
  *param_1 = &PTR___cxa_pure_virtual_027f4430;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  operator_delete(param_1);
  return;
}




void FUN_00bfbae8(undefined8 *param_1)

{
  *param_1 = &PTR___cxa_pure_virtual_027f4430;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return;
}




void FUN_00bfbb2c(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xbfbb30);
  (*pcVar1)();
}




void FUN_00bfbb30(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  uint uVar9;
  long lVar10;
  long lVar11;
  code *local_a8;
  long *plStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined4 local_80;
  long local_78;
  
  lVar10 = tpidr_el0;
  local_78 = *(long *)(lVar10 + 0x28);
  FUN_00f13ca4();
  plVar1 = param_1 + 0x1a;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  *param_1 = (long)&PTR_FUN_027f4468;
  param_1[0x19] = 0;
  FUN_00b89cd8(plVar1);
  plVar2 = param_1 + 0x33;
  FUN_00f0e4a8(plVar2);
  plVar3 = param_1 + 0x51;
  FUN_00b89cd8(plVar3);
  plVar4 = param_1 + 0x6a;
  FUN_00f0e4a8(plVar4);
  plVar5 = param_1 + 0x88;
  FUN_00f0e4a8(plVar5);
  plVar6 = param_1 + 0xa6;
  FUN_00f0e4a8();
  plVar7 = param_1 + 0xc4;
  FUN_00f0e4a8();
  FUN_00f13ca4(param_1 + 0xe2);
  FUN_00b89cd8();
  lVar11 = 0x890;
  do {
    FUN_00bfbfac((long)param_1 + lVar11);
    lVar11 = lVar11 + 0x378;
  } while (lVar11 != 0xf80);
  *(undefined4 *)(param_1 + 0x1f0) = 0;
  *(undefined1 *)((long)param_1 + 0xf84) = 0;
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  FUN_00f023ec(plVar1,plVar2,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar3,1);
  FUN_00f023ec(plVar3,plVar4,1);
  FUN_00f023ec(plVar3,plVar5,1);
  FUN_00f023ec(plVar3,plVar6,1);
  FUN_00f023ec(plVar3,plVar7,1);
  lVar11 = 0x890;
  do {
    FUN_00f023ec(plVar3,(long)param_1 + lVar11,1);
    lVar11 = lVar11 + 0x378;
  } while (lVar11 != 0xf80);
  lVar11 = 0;
  do {
    FUN_00f023ec(plVar3,(long)param_1 + lVar11 + 0x980,1);
    lVar11 = lVar11 + 0x378;
  } while (lVar11 != 0x6f0);
  lVar11 = 0;
  do {
    FUN_00f023ec(plVar3,(long)param_1 + lVar11 + 0xab0,1);
    lVar11 = lVar11 + 0x378;
  } while (lVar11 != 0x6f0);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0xe2,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0xf9,1);
  FUN_00f0e548(plVar2,PTR_s_build___HUDPartsCommon_atlas_02be3440,"hud_store_bkgmiddle");
  FUN_00f0e670(plVar2,&DAT_01bee7f6,2);
  uVar9 = *(uint *)((long)param_1 + 0x21c);
  if ((uVar9 & 0x7f80) != 0x1980) {
    *(uint *)((long)param_1 + 0x21c) = uVar9 & 0xffff8000 | uVar9 & 0x7f | 0x1980;
    FUN_0091ada4(plVar2);
  }
  FUN_00f0e548(plVar4,PTR_s_build___HUDPartsTutorialDialog_t_02be34a8,"dialog_bg_large");
  if ((~*(uint *)((long)param_1 + 0x3d4) & 0x7f80) != 0) {
    *(uint *)((long)param_1 + 0x3d4) = *(uint *)((long)param_1 + 0x3d4) | 0x7f80;
    FUN_0091ada4(plVar4);
  }
  FUN_00f0e548(plVar5,PTR_s_build___HUDPartsTutorialDialog_t_02be34a8,"speech_bubble_top");
  if ((*(float *)(param_1 + 0x91) != 2.0) || (*(float *)((long)param_1 + 0x48c) != 2.0)) {
    param_1[0x91] = 0x4000000040000000;
    FUN_0091ada4(plVar5);
  }
  FUN_00f0e548(plVar6,PTR_s_build___HUDPartsTutorialDialog_t_02be34a8,"speech_bubble_mid");
  if ((*(float *)(param_1 + 0xaf) != 2.0) || (*(float *)((long)param_1 + 0x57c) != 2.0)) {
    param_1[0xaf] = 0x4000000040000000;
    FUN_0091ada4(plVar6);
  }
  FUN_00f0e548(plVar7,PTR_s_build___HUDPartsTutorialDialog_t_02be34a8,"speech_bubble_bot");
  if ((*(float *)(param_1 + 0xcd) != 2.0) || (*(float *)((long)param_1 + 0x66c) != 2.0)) {
    param_1[0xcd] = 0x4000000040000000;
    FUN_0091ada4(plVar7);
  }
  plVar1 = param_1 + 0xe3;
  local_80 = DAT_03210f60;
  local_a8 = FUN_00bfc00c;
  local_90 = 0;
  uStack_88 = 0;
  local_98 = 0;
  plStack_a0 = param_1;
  FUN_009693a0(plVar1,&local_a8);
  local_a8 = FUN_00bfc00c;
  local_80 = DAT_03210f78;
  local_90 = 0;
  uStack_88 = 0;
  local_98 = 0;
  plStack_a0 = param_1;
  FUN_009693a0(plVar1,&local_a8);
  local_a8 = FUN_00bfc00c;
  local_80 = DAT_03210f8c;
  local_90 = 0;
  uStack_88 = 0;
  local_98 = 0;
  plStack_a0 = param_1;
  FUN_009693a0(plVar1,&local_a8);
  lVar11 = 0;
  do {
    lVar8 = (long)param_1 + lVar11 + 0x980;
    FUN_00f0d378(lVar8,PTR_s_build___Fonts_Brandon_Bold_40_fo_02be9c80);
    FUN_00f0d7fc(lVar8,&DAT_01bbb5c0);
    lVar8 = (long)param_1 + lVar11 + 0xab0;
    FUN_00f0d378(lVar8,PTR_s_build___Fonts_Brandon_Bold_48_fo_02be9c88);
    FUN_00f0d7fc(lVar8,&DAT_01bbb5bc);
    FUN_00bfc020((long)param_1 + lVar11 + 0x890);
    lVar11 = lVar11 + 0x378;
  } while (lVar11 != 0x6f0);
  if (*(long *)(lVar10 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00bfbfac(long param_1)

{
  FUN_00f0e4a8();
  FUN_00f0d160(param_1 + 0xf0);
  FUN_00f0d160(param_1 + 0x220);
  *(undefined1 *)(param_1 + 0x350) = 0;
  *(undefined4 *)(param_1 + 0x36c) = 0;
  *(undefined8 *)(param_1 + 0x364) = 0;
  *(undefined8 *)(param_1 + 0x35c) = 0;
  *(undefined8 *)(param_1 + 0x354) = 0;
  *(undefined4 *)(param_1 + 0x370) = DAT_03214ce8;
  return;
}

