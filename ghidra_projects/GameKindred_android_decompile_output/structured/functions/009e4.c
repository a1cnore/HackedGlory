// functions/009e4 — 32 functions
#include "libGameKindred.h"




void FUN_009e4184(long param_1,long param_2)

{
  ulong uVar1;
  byte bVar2;
  int iVar3;
  byte *pbVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  uint uVar8;
  long lVar9;
  ulong uVar10;
  
  if (*(int *)(param_2 + 0xe8) == 0) {
    uVar8 = 0xffffffff;
  }
  else {
    lVar9 = 0;
    uVar10 = 0;
    uVar8 = 0xffffffff;
    do {
      pbVar4 = (byte *)(*(long *)(param_2 + 0xf0) + lVar9);
      bVar2 = *pbVar4;
      uVar5 = *(ulong *)(pbVar4 + 8);
      uVar6 = (ulong)(bVar2 >> 1);
      uVar1 = uVar6;
      if ((bVar2 & 1) != 0) {
        uVar1 = uVar5;
      }
      if (uVar1 == 10) {
        iVar3 = FUN_0090d610(pbVar4,0,0xffffffffffffffff,"chainIndex",10);
        if (iVar3 != 0) {
          pbVar4 = (byte *)(*(long *)(param_2 + 0xf0) + lVar9);
          bVar2 = *pbVar4;
          uVar5 = *(ulong *)(pbVar4 + 8);
          uVar6 = (ulong)(bVar2 >> 1);
          goto LAB_009e4228;
        }
        uVar8 = *(uint *)(*(long *)(param_2 + 0xf0) + lVar9 + 0x18);
      }
      else {
        pbVar4 = (byte *)(*(long *)(param_2 + 0xf0) + uVar10 * 0x20);
LAB_009e4228:
        if ((bVar2 & 1) != 0) {
          uVar6 = uVar5;
        }
        if (uVar6 == 10) {
          FUN_0090d610(pbVar4,0,0xffffffffffffffff,"chainCount",10);
        }
      }
      uVar10 = uVar10 + 1;
      lVar9 = lVar9 + 0x20;
    } while (uVar10 < *(uint *)(param_2 + 0xe8));
  }
  lVar7 = *(long *)(param_1 + 0x38);
  lVar9 = lVar7 + (ulong)uVar8 * 0x78;
  FUN_008fce60(lVar9,param_2);
  *(undefined1 *)(lVar9 + 0x71) = *(undefined1 *)(param_2 + 0x10c);
  if (*(int *)(param_2 + 0xd8) != 0) {
    FUN_008fce60(lVar7 + (ulong)uVar8 * 0x78 + 0x18,*(undefined8 *)(param_2 + 0xe0));
  }
  *(undefined1 *)(lVar7 + (ulong)uVar8 * 0x78 + 0x72) = 1;
  return;
}




void FUN_009e42dc(long param_1)

{
  size_t __n;
  size_t sVar1;
  char *__s1;
  byte bVar2;
  long lVar3;
  int iVar4;
  ulong uVar5;
  char *pcVar6;
  long lVar7;
  char *__s2;
  ulong local_50;
  size_t local_48;
  char *local_40;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  local_50 = 0;
  local_48 = 0;
  local_40 = (char *)0x0;
  uVar5 = FUN_00e81200(&local_50);
  if ((uVar5 & 1) == 0) goto LAB_009e43bc;
  bVar2 = *(byte *)(param_1 + 0x40);
  uVar5 = local_50 >> 1 & 0x7f;
  __n = uVar5;
  if ((local_50 & 1) != 0) {
    __n = local_48;
  }
  sVar1 = (ulong)(bVar2 >> 1);
  if ((bVar2 & 1) != 0) {
    sVar1 = *(size_t *)(param_1 + 0x48);
  }
  if (__n == sVar1) {
    __s2 = *(char **)(param_1 + 0x50);
    pcVar6 = (char *)((ulong)&local_50 | 1);
    __s1 = pcVar6;
    if ((local_50 & 1) != 0) {
      __s1 = local_40;
    }
    if ((bVar2 & 1) == 0) {
      __s2 = (char *)(param_1 + 0x41);
    }
    if ((local_50 & 1) == 0) {
      if (__n != 0) {
        lVar7 = -uVar5;
        do {
          if (*pcVar6 != *__s2) goto LAB_009e43a4;
          pcVar6 = pcVar6 + 1;
          lVar7 = lVar7 + 1;
          __s2 = __s2 + 1;
        } while (lVar7 != 0);
      }
      goto LAB_009e43bc;
    }
    if ((__n == 0) || (iVar4 = memcmp(__s1,__s2,__n), iVar4 == 0)) goto LAB_009e43bc;
  }
LAB_009e43a4:
  FUN_008fce60((byte *)(param_1 + 0x40),&local_50);
  *(undefined8 *)(param_1 + 0x58) = 0xffffffffffffffff;
  *(undefined1 *)(param_1 + 0x6c) = 0;
LAB_009e43bc:
  if ((local_50 & 1) != 0) {
    operator_delete(local_40);
  }
  if (*(long *)(lVar3 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_009e43f4(long param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  int iVar5;
  undefined8 local_78;
  void *local_70;
  int local_68;
  undefined4 uStack_64;
  undefined1 local_60;
  char acStack_58 [16];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (((*(char *)(param_1 + 0x68) != '\0') && (*(long *)(param_1 + 0x60) != 0)) &&
     (lVar3 = FUN_00940bd4(), *(char *)(lVar3 + 8) != '\0')) {
    FUN_00e6c1c0(0,acStack_58,0x10,&DAT_01bee7ef);
    iVar2 = atoi(acStack_58);
    iVar5 = 0xa8c0;
    if ((iVar2 * 0x3c + (iVar2 / 100) * -0x960 + 0x17bb0) % 0x15180 - 36000U < 0xa8c1) {
      iVar5 = 0;
    }
    lVar3 = FUN_00e85318(0);
    iVar5 = (0x17bb0 -
            ((int)lVar3 +
            ((int)(SUB168(SEXT816(lVar3) * SEXT816(0x1845c8a0ce512957),8) >> 0xd) -
            (SUB164(SEXT816(lVar3) * SEXT816(0x1845c8a0ce512957),0xc) >> 0x1f)) * -0x15180)) + iVar5
    ;
    local_68 = iVar5;
    if (((0x15180 < iVar5) && (lVar3 = *(long *)(param_1 + 0x60), lVar3 != 0)) &&
       ((*(char *)(lVar3 + 0xd8) != '\0' &&
        (local_68 = iVar5 + -0x15180, *(char *)(lVar3 + 0xd9) != '\0')))) {
      local_68 = iVar5;
    }
    FUN_00ec5370(&local_78);
    uVar4 = FUN_00e6ce7c("DAILY_LOGIN_NOTIFICATION",0);
    FUN_00910394(&local_78,uVar4);
    uStack_64 = 1;
    local_60 = 0;
    FUN_009216cc(param_1 + 0x18,&local_78);
    if (local_70 != (void *)0x0) {
      operator_delete__(local_70);
      local_78 = 0;
      local_70 = (void *)0x0;
    }
  }
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_009e45ac(long param_1)

{
  FUN_009e43f4(param_1 + -0x18);
  return;
}




void FUN_009e45b4(undefined8 param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if ((((char)param_2[1] != '\0') && (lVar2 = *param_2, lVar2 != 0)) &&
     (*(int *)(lVar2 + 0x40) == 7)) {
    local_48 = 0;
    uStack_40 = 0;
    uVar3 = FUN_00cab1e4(lVar2,&local_48);
    uVar4 = FUN_009b8d90();
    if ((uVar3 & 1) == 0) {
      FUN_009bb89c(uVar4,*param_2 + 0x48);
    }
    else {
      FUN_009bb7d4(uVar4,*param_2 + 0x48,&local_48);
    }
    FUN_008fefd4(&local_48,1);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009e4658(void *param_1)

{
  memset(param_1,0,0x60);
  FUN_00e70510((long)param_1 + 0x60);
  *(undefined2 *)((long)param_1 + 0x70) = 0;
  *(undefined1 *)((long)param_1 + 0x72) = 0;
  return;
}




void FUN_009e4694(uint *param_1,undefined8 *param_2)

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
    FUN_009e4728(param_1,uVar2);
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




void FUN_009e4728(uint *param_1,uint param_2)

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




void FUN_009e47b4(uint *param_1,undefined8 *param_2)

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
    FUN_009e4848(param_1,uVar2);
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




void thunk_FUN_009e45b4(undefined8 param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  lVar1 = tpidr_el0;
  lStack_38 = *(long *)(lVar1 + 0x28);
  if ((((char)param_2[1] != '\0') && (lVar2 = *param_2, lVar2 != 0)) &&
     (*(int *)(lVar2 + 0x40) == 7)) {
    uStack_48 = 0;
    uStack_40 = 0;
    uVar3 = FUN_00cab1e4(lVar2,&uStack_48);
    uVar4 = FUN_009b8d90();
    if ((uVar3 & 1) == 0) {
      FUN_009bb89c(uVar4,*param_2 + 0x48);
    }
    else {
      FUN_009bb7d4(uVar4,*param_2 + 0x48,&uStack_48);
    }
    FUN_008fefd4(&uStack_48,1);
  }
  if (*(long *)(lVar1 + 0x28) == lStack_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009e4848(uint *param_1,uint param_2)

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




void FUN_009e48d4(uint *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  
  uVar4 = *param_1;
  uVar3 = (uint)((ulong)((long)param_3 - (long)param_2) >> 5);
  if (uVar4 == uVar3) {
    if (*(void **)(param_1 + 2) != (void *)0x0) {
      operator_delete__(*(void **)(param_1 + 2));
      param_1[0] = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
    }
  }
  else {
    puVar1 = (undefined8 *)(*(long *)(param_1 + 2) + (ulong)uVar4 * 0x20);
    if (puVar1 != param_3) {
      do {
        uVar5 = param_3[2];
        param_2[3] = param_3[3];
        param_2[2] = uVar5;
        puVar2 = param_3 + 4;
        uVar5 = *param_3;
        param_2[1] = param_3[1];
        *param_2 = uVar5;
        param_2 = param_2 + 4;
        param_3 = puVar2;
      } while (puVar1 != puVar2);
      uVar4 = *param_1;
    }
    *param_1 = uVar4 - uVar3;
  }
  return;
}




void FUN_009e494c(uint *param_1,uint param_2)

{
  undefined2 *puVar1;
  void *pvVar2;
  void *pvVar3;
  undefined8 *puVar4;
  long lVar5;
  void *pvVar6;
  void *pvVar7;
  
  if (param_1[1] < param_2) {
    pvVar2 = operator_new__((ulong)param_2 * 0x78);
    pvVar3 = *(void **)(param_1 + 2);
    if (*param_1 == 0) {
      param_1[1] = param_2;
    }
    else {
      pvVar7 = (void *)((long)pvVar3 + (ulong)*param_1 * 0x78);
      pvVar6 = pvVar2;
      do {
        FUN_008fcdb8(pvVar6,pvVar3);
        FUN_008fcdb8((long)pvVar6 + 0x18,(long)pvVar3 + 0x18);
        FUN_008fcdb8((long)pvVar6 + 0x30,(long)pvVar3 + 0x30);
        FUN_008fcdb8((long)pvVar6 + 0x48,(long)pvVar3 + 0x48);
        thunk_FUN_00e7051c((long)pvVar6 + 0x60,(long)pvVar3 + 0x60);
        *(undefined1 *)((long)pvVar6 + 0x72) = *(undefined1 *)((long)pvVar3 + 0x72);
        puVar1 = (undefined2 *)((long)pvVar3 + 0x70);
        pvVar3 = (void *)((long)pvVar3 + 0x78);
        *(undefined2 *)((long)pvVar6 + 0x70) = *puVar1;
        pvVar6 = (void *)((long)pvVar6 + 0x78);
      } while (pvVar3 != pvVar7);
      pvVar3 = *(void **)(param_1 + 2);
      param_1[1] = param_2;
      if (*param_1 != 0) {
        lVar5 = (ulong)*param_1 * 0x78;
        puVar4 = (undefined8 *)((long)pvVar3 + 0x40);
        do {
          if ((void *)puVar4[5] != (void *)0x0) {
            operator_delete__((void *)puVar4[5]);
            puVar4[4] = 0;
            puVar4[5] = 0;
          }
          if ((*(byte *)(puVar4 + 1) & 1) != 0) {
            operator_delete((void *)puVar4[3]);
          }
          if ((*(byte *)(puVar4 + -2) & 1) != 0) {
            operator_delete((void *)*puVar4);
          }
          if ((*(byte *)(puVar4 + -5) & 1) != 0) {
            operator_delete((void *)puVar4[-3]);
          }
          if ((*(byte *)(puVar4 + -8) & 1) != 0) {
            operator_delete((void *)puVar4[-6]);
          }
          lVar5 = lVar5 + -0x78;
          puVar4 = puVar4 + 0xf;
        } while (lVar5 != 0);
        pvVar3 = *(void **)(param_1 + 2);
      }
    }
    if (pvVar3 != (void *)0x0) {
      operator_delete__(pvVar3);
    }
    *(void **)(param_1 + 2) = pvVar2;
  }
  return;
}




void FUN_009e4aa0(void)

{
  void *pvVar1;
  
  if (DAT_0312fce0 == (void *)0x0) {
    pvVar1 = operator_new(0x20);
    FUN_009e4b94();
    DAT_0312fce0 = pvVar1;
    *(undefined2 *)((long)pvVar1 + 0x18) = 0;
    *(undefined1 *)((long)pvVar1 + 0x1a) = 0;
  }
  return;
}




void FUN_009e4ae0(long param_1)

{
  *(undefined2 *)(param_1 + 0x18) = 0;
  *(undefined1 *)(param_1 + 0x1a) = 0;
  return;
}




void FUN_009e4aec(void)

{
  if (DAT_0312fce0 != (long *)0x0) {
    if (((char)DAT_0312fce0[3] != '\0') && (FUN_0093cfd4(), DAT_0312fce0 == (long *)0x0)) {
      DAT_0312fce0 = (long *)0x0;
      return;
    }
    (**(code **)(*DAT_0312fce0 + 8))();
  }
  DAT_0312fce0 = (long *)0x0;
  return;
}




void FUN_009e4b34(long param_1)

{
  if (*(char *)(param_1 + 0x18) != '\0') {
    FUN_0093cfd4();
    return;
  }
  return;
}




void FUN_009e4b44(void)

{
  if ((DAT_0312fce0 != 0) && (*(char *)(DAT_0312fce0 + 0x18) != '\0')) {
    FUN_0093cfd4();
    return;
  }
  return;
}




void FUN_009e4b60(long param_1)

{
  if (*(char *)(param_1 + 0x18) != '\0') {
    FUN_0093cfd4();
    return;
  }
  return;
}




void FUN_009e4b70(void)

{
  long lVar1;
  
  lVar1 = DAT_0312fce0;
  if (DAT_0312fce0 != 0) {
    *(undefined2 *)(DAT_0312fce0 + 0x18) = 0;
    *(undefined1 *)(lVar1 + 0x1a) = 0;
  }
  return;
}




void FUN_009e4b88(long param_1)

{
  *(undefined2 *)(param_1 + 0x18) = 0;
  *(undefined1 *)(param_1 + 0x1a) = 0;
  return;
}




void FUN_009e4b94(undefined8 *param_1)

{
  FUN_00948cd8();
  *(undefined2 *)(param_1 + 3) = 0;
  *param_1 = &PTR_FUN_027c3ee0;
  *(undefined1 *)((long)param_1 + 0x1a) = 0;
  FUN_00e6ea58(&DAT_02c7eef8,param_1,0x9d2c9b16,FUN_009e4bec,0);
  return;
}




void FUN_009e4bec(long param_1)

{
  *(undefined1 *)(param_1 + 0x19) = 1;
  FUN_009e4ca8();
  return;
}




void FUN_009e4c20(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027c3ee0;
  FUN_00e6ec98(&DAT_02c7eef8,param_1);
  FUN_00948d58(param_1);
  return;
}




void FUN_009e4c60(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027c3ee0;
  FUN_00e6ec98(&DAT_02c7eef8,param_1);
  FUN_00948d58(param_1);
  operator_delete(param_1);
  return;
}




void FUN_009e4ca8(long param_1)

{
  byte *pbVar1;
  ulong uVar2;
  long lVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  byte *pbVar8;
  long *plVar9;
  byte local_70 [16];
  void *local_60;
  ulong local_58;
  long local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  uVar5 = FUN_0092e8e0();
  if (((((uVar5 & 1) == 0) && (*(char *)(param_1 + 0x18) == '\0')) &&
      (*(char *)(param_1 + 0x19) != '\0')) && (*(char *)(param_1 + 0x1a) != '\0')) {
    lVar6 = FUN_00e829e0();
    if (*(int *)(lVar6 + 0xa0) == 1) {
      lVar6 = FUN_0093d104();
      lVar7 = FUN_00e6b5e4();
      if (lVar6 <= lVar7 + -0x3840) {
        lVar6 = FUN_00969248();
        if (*(int *)(lVar6 + 0x38) < 1) {
          local_58 = 0;
          local_50 = 0;
          FUN_0096bfcc(&local_58);
          uVar5 = local_58 & 0xffffffff;
          if ((int)local_58 != 0) {
            pbVar8 = (byte *)(local_50 + 0x18);
            lVar6 = local_50;
            do {
              uVar2 = (ulong)(*pbVar8 >> 1);
              if ((*pbVar8 & 1) != 0) {
                uVar2 = *(ulong *)(pbVar8 + 8);
              }
              if (uVar2 == 0x1b) {
                iVar4 = FUN_0090d610(pbVar8,0,0xffffffffffffffff,"MENU_MARKET_TAB_NAME_POPUPS",0x1b)
                ;
                if (iVar4 == 0) {
                  plVar9 = operator_new(0xc10);
                  FUN_009e4eb8();
                  FUN_008fa54c(local_70,"EARLY_OFFER_POPUP");
                  FUN_00b359a8(plVar9,pbVar8 + -0x18,pbVar8,local_70);
                  if ((local_70[0] & 1) != 0) {
                    operator_delete(local_60);
                  }
                  (**(code **)(*plVar9 + 0x170))(plVar9);
                  goto LAB_009e4e30;
                }
                uVar5 = local_58 & 0xffffffff;
                lVar6 = local_50;
              }
              pbVar1 = pbVar8 + 0x60;
              pbVar8 = pbVar8 + 0x78;
            } while (pbVar1 != (byte *)(lVar6 + uVar5 * 0x78));
          }
          plVar9 = (long *)0x0;
LAB_009e4e30:
          uVar5 = FUN_00cba274(plVar9);
          if ((uVar5 & 1) == 0) {
            if (plVar9 != (long *)0x0) {
              (**(code **)(*plVar9 + 8))(plVar9);
            }
          }
          else {
            FUN_00cba28c(plVar9);
            FUN_0093cfd4();
            *(undefined1 *)(param_1 + 0x18) = 1;
            lVar6 = plVar9[0x181];
            if (lVar6 != 0) {
              if ((*(byte *)(lVar6 + 0x68) & 1) == 0) {
                lVar6 = lVar6 + 0x69;
              }
              else {
                lVar6 = *(long *)(lVar6 + 0x78);
              }
              FUN_00903adc(lVar6);
            }
          }
          FUN_00969c70(&local_58,1);
        }
      }
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009e4ea0(long param_1)

{
  *(undefined1 *)(param_1 + 0x1a) = 1;
  FUN_009e4ca8();
  return;
}




void FUN_009e4eac(long param_1)

{
  *(undefined1 *)(param_1 + 0x19) = 1;
  FUN_009e4ca8();
  return;
}




void FUN_009e4eb8(undefined8 *param_1)

{
  FUN_00b56364();
  param_1[0x181] = 0;
  *param_1 = &PTR_FUN_027c4278;
  param_1[0x6d] = &PTR_FUN_027c4460;
  param_1[0x17e] = &PTR_FUN_027c4488;
  FUN_00f01a4c(param_1 + 0x7c,1);
  FUN_00f01a4c(param_1 + 0x9a,1);
  FUN_00f01a4c(param_1 + 0xb1,1);
  FUN_00f01a4c(param_1 + 0x158,1);
  FUN_00f01a4c(param_1 + 0x19,1);
  FUN_00f01a4c(param_1 + 0x30,1);
  FUN_00f01a4c(param_1 + 0x4e,1);
  return;
}




undefined1  [16] FUN_009e4f4c(long param_1)

{
  long *plVar1;
  undefined4 extraout_s0;
  undefined4 extraout_var;
  undefined8 extraout_var_00;
  undefined1 auVar2 [16];
  
  if (*(int *)(param_1 + 0x378) != 0) {
    plVar1 = (long *)(**(code **)(*(long *)**(undefined8 **)(param_1 + 0x380) + 0x10))();
    (**(code **)(*plVar1 + 0x48))();
    auVar2._4_4_ = extraout_var;
    auVar2._0_4_ = extraout_s0;
    auVar2._8_8_ = extraout_var_00;
    return auVar2;
  }
  return ZEXT416(DAT_03218ef8);
}




bool FUN_009e4f94(undefined8 param_1,long param_2,int param_3)

{
  return param_3 == 0 && *(char *)(param_2 + 0x591) != '\0';
}




void FUN_009e4fb0(long *param_1,long *param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = (**(code **)(*param_2 + 0x10))(param_2);
  (**(code **)(*param_1 + 0x78))(param_1,uVar1,1);
  param_1[0x181] = (long)param_2;
  lVar2 = (**(code **)(*param_2 + 0x10))(param_2);
  if (*(float *)(lVar2 + 0x44) != 0.0) {
    *(undefined4 *)(lVar2 + 0x44) = 0;
    FUN_0091ada4();
    return;
  }
  return;
}

