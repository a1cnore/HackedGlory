// functions/01982 — 32 functions
#include "libGameKindred.h"




void FUN_019822d4(uint *param_1,uint param_2)

{
  long lVar1;
  undefined8 *puVar2;
  
  if (*(long *)(param_1 + 2) != 0) {
    if (*param_1 != 0) {
      lVar1 = (ulong)*param_1 << 5;
      puVar2 = (undefined8 *)(*(long *)(param_1 + 2) + 0x10);
      do {
        if ((void *)puVar2[1] != (void *)0x0) {
          operator_delete__((void *)puVar2[1]);
          *puVar2 = 0;
          puVar2[1] = 0;
        }
        if ((void *)puVar2[-1] != (void *)0x0) {
          operator_delete__((void *)puVar2[-1]);
          puVar2[-2] = 0;
          puVar2[-1] = 0;
        }
        lVar1 = lVar1 + -0x20;
        puVar2 = puVar2 + 4;
      } while (lVar1 != 0);
    }
    if ((param_2 & 1) != 0) {
      if (*(void **)(param_1 + 2) != (void *)0x0) {
        operator_delete__(*(void **)(param_1 + 2));
      }
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[1] = 0;
    }
    *param_1 = 0;
  }
  return;
}




void FUN_0198235c(uint *param_1,uint *param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_01982430(param_1,*param_2);
  if (*param_2 == 0) {
    uVar1 = 0;
  }
  else {
    puVar3 = *(undefined8 **)(param_1 + 2);
    lVar4 = (ulong)*param_2 * 0x14;
    puVar2 = *(undefined8 **)(param_2 + 2);
    do {
      lVar4 = lVar4 + -0x14;
      *(undefined4 *)(puVar3 + 2) = *(undefined4 *)(puVar2 + 2);
      uVar5 = *puVar2;
      puVar3[1] = puVar2[1];
      *puVar3 = uVar5;
      puVar3 = (undefined8 *)((long)puVar3 + 0x14);
      puVar2 = (undefined8 *)((long)puVar2 + 0x14);
    } while (lVar4 != 0);
    uVar1 = *param_2;
  }
  *param_1 = uVar1;
  return;
}




void FUN_019823cc(uint *param_1,uint *param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_019824c0(param_1,*param_2);
  if (*param_2 == 0) {
    uVar1 = 0;
  }
  else {
    puVar3 = *(undefined8 **)(param_1 + 2);
    lVar4 = (ulong)*param_2 << 4;
    puVar2 = *(undefined8 **)(param_2 + 2);
    do {
      uVar5 = *puVar2;
      lVar4 = lVar4 + -0x10;
      puVar3[1] = puVar2[1];
      *puVar3 = uVar5;
      puVar3 = puVar3 + 2;
      puVar2 = puVar2 + 2;
    } while (lVar4 != 0);
    uVar1 = *param_2;
  }
  *param_1 = uVar1;
  return;
}




void FUN_01982430(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 * 0x14);
    puVar2 = *(undefined8 **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar3 = (ulong)*param_1 * 0x14;
      puVar4 = puVar1;
      do {
        lVar3 = lVar3 + -0x14;
        *(undefined4 *)(puVar4 + 2) = *(undefined4 *)(puVar2 + 2);
        uVar5 = *puVar2;
        puVar4[1] = puVar2[1];
        *puVar4 = uVar5;
        puVar4 = (undefined8 *)((long)puVar4 + 0x14);
        puVar2 = (undefined8 *)((long)puVar2 + 0x14);
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




void FUN_019824c0(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 << 4);
    puVar2 = *(undefined8 **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar3 = (ulong)*param_1 << 4;
      puVar4 = puVar1;
      do {
        uVar5 = *puVar2;
        lVar3 = lVar3 + -0x10;
        puVar4[1] = puVar2[1];
        *puVar4 = uVar5;
        puVar4 = puVar4 + 2;
        puVar2 = puVar2 + 2;
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




void FUN_01982544(uint *param_1,uint *param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  
  if (param_1 != param_2) {
    if (*(void **)(param_1 + 2) != (void *)0x0) {
      operator_delete__(*(void **)(param_1 + 2));
      param_1[0] = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
    }
    FUN_01982430(param_1,*param_2);
    if (*param_2 == 0) {
      uVar1 = 0;
    }
    else {
      puVar3 = *(undefined8 **)(param_1 + 2);
      lVar4 = (ulong)*param_2 * 0x14;
      puVar2 = *(undefined8 **)(param_2 + 2);
      do {
        lVar4 = lVar4 + -0x14;
        *(undefined4 *)(puVar3 + 2) = *(undefined4 *)(puVar2 + 2);
        uVar5 = *puVar2;
        puVar3[1] = puVar2[1];
        *puVar3 = uVar5;
        puVar3 = (undefined8 *)((long)puVar3 + 0x14);
        puVar2 = (undefined8 *)((long)puVar2 + 0x14);
      } while (lVar4 != 0);
      uVar1 = *param_2;
    }
    *param_1 = uVar1;
  }
  return;
}




void FUN_019825cc(uint *param_1,uint *param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  
  if (param_1 != param_2) {
    if (*(void **)(param_1 + 2) != (void *)0x0) {
      operator_delete__(*(void **)(param_1 + 2));
      param_1[0] = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
    }
    FUN_019824c0(param_1,*param_2);
    if (*param_2 == 0) {
      uVar1 = 0;
    }
    else {
      puVar3 = *(undefined8 **)(param_1 + 2);
      lVar4 = (ulong)*param_2 << 4;
      puVar2 = *(undefined8 **)(param_2 + 2);
      do {
        uVar5 = *puVar2;
        lVar4 = lVar4 + -0x10;
        puVar3[1] = puVar2[1];
        *puVar3 = uVar5;
        puVar3 = puVar3 + 2;
        puVar2 = puVar2 + 2;
      } while (lVar4 != 0);
      uVar1 = *param_2;
    }
    *param_1 = uVar1;
  }
  return;
}




void FUN_01982648(uint *param_1)

{
  uint uVar1;
  void *pvVar2;
  ulong uVar3;
  
  uVar1 = *param_1;
  if (uVar1 != 0) {
    uVar3 = 0;
    do {
      pvVar2 = *(void **)(*(long *)(param_1 + 2) + uVar3 * 8);
      if (pvVar2 != (void *)0x0) {
        if (*(void **)((long)pvVar2 + 0x30) != (void *)0x0) {
          operator_delete__(*(void **)((long)pvVar2 + 0x30));
          *(undefined8 *)((long)pvVar2 + 0x28) = 0;
          *(undefined8 *)((long)pvVar2 + 0x30) = 0;
        }
        FUN_019822d4((long)pvVar2 + 0x18,1);
        if (*(void **)((long)pvVar2 + 0x10) != (void *)0x0) {
          operator_delete__(*(void **)((long)pvVar2 + 0x10));
        }
        operator_delete(pvVar2);
        uVar1 = *param_1;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar1);
  }
  if (*(void **)(param_1 + 2) != (void *)0x0) {
    operator_delete__(*(void **)(param_1 + 2));
    param_1[0] = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
  }
  return;
}




void FUN_019826d4(undefined8 param_1,byte *param_2)

{
  ulong uVar1;
  
  *param_2 = 0;
  uVar1 = FUN_01980644(0x4c);
  if (((uVar1 & 1) != 0) || (uVar1 = FUN_01980644(0x4d), (uVar1 & 1) != 0)) {
    *param_2 = *param_2 | 1;
  }
  uVar1 = FUN_01980644(0x50);
  if (((uVar1 & 1) != 0) || (uVar1 = FUN_01980644(0x51), (uVar1 & 1) != 0)) {
    *param_2 = *param_2 | 2;
  }
  uVar1 = FUN_01980644(0x4e);
  if (((uVar1 & 1) != 0) || (uVar1 = FUN_01980644(0x4f), (uVar1 & 1) != 0)) {
    *param_2 = *param_2 | 4;
  }
  uVar1 = FUN_01980644(0x68);
  if ((uVar1 & 1) != 0) {
    *param_2 = *param_2 | 8;
  }
  return;
}




void FUN_01982778(uint *param_1)

{
  long lVar1;
  byte bVar2;
  uint uVar3;
  long lVar4;
  byte bVar5;
  ulong uVar6;
  uint uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  byte local_58 [16];
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  FUN_019826d4(param_1,local_58 + 8);
  local_58[0] = 0;
  local_58[1] = 0;
  local_58[2] = 0;
  local_58[3] = 0;
  local_58[4] = 0;
  local_58[5] = 0;
  local_58[6] = 0;
  local_58[7] = 0;
  uVar3 = *param_1;
  uVar6 = (ulong)uVar3;
  if (uVar3 != 0) {
    lVar9 = *(long *)(param_1 + 2);
    uVar8 = 0;
    do {
      lVar1 = uVar8 * 8;
      uVar10 = uVar8 >> 3 & 0x1fffffff;
      uVar7 = (uint)uVar8;
      uVar8 = uVar8 + 1;
      bVar5 = (byte)(1 << (ulong)(uVar7 & 7));
      bVar2 = local_58[uVar10] & (bVar5 ^ 0xff);
      if (*(char *)(*(long *)(lVar9 + lVar1) + 0x38) != '\0') {
        bVar2 = local_58[uVar10] | bVar5;
      }
      local_58[uVar10] = bVar2;
    } while (uVar8 < uVar6);
    if (uVar3 != 0) {
      uVar8 = 0;
      do {
        if ((1 << (ulong)((uint)uVar8 & 7) & (uint)local_58[uVar8 >> 3 & 0x1fffffff]) != 0) {
          FUN_01981e3c(*(undefined8 *)(*(long *)(param_1 + 2) + uVar8 * 8),local_58 + 8);
          uVar6 = (ulong)*param_1;
        }
        uVar8 = uVar8 + 1;
      } while (uVar8 < uVar6);
    }
  }
  if (*(long *)(lVar4 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_01982870(undefined8 param_1,undefined4 param_2)

{
  long lVar1;
  undefined4 *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_40 = operator_new(0x40);
  *(undefined1 *)(local_40 + 0xe) = 0;
  *(undefined8 *)(local_40 + 10) = 0;
  *(undefined8 *)(local_40 + 0xc) = 0;
  *(undefined8 *)(local_40 + 6) = 0;
  *(undefined8 *)(local_40 + 8) = 0;
  *(undefined8 *)(local_40 + 2) = 0;
  *(undefined8 *)(local_40 + 4) = 0;
  *local_40 = param_2;
  FUN_019828f0(param_1,&local_40);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_40);
}




void FUN_019828f0(uint *param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
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
    FUN_019829b0(param_1,uVar1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




int * FUN_01982978(uint *param_1,int param_2)

{
  int *piVar1;
  ulong uVar2;
  
  if (*param_1 != 0) {
    uVar2 = 0;
    do {
      piVar1 = *(int **)(*(long *)(param_1 + 2) + uVar2 * 8);
      if (*piVar1 == param_2) {
        return piVar1;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < *param_1);
  }
  return (int *)0x0;
}




void FUN_019829b0(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 << 3);
    puVar2 = *(undefined8 **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar3 = (ulong)*param_1 << 3;
      puVar4 = puVar1;
      do {
        lVar3 = lVar3 + -8;
        *puVar4 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar4 = puVar4 + 1;
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




void FUN_01982a30(undefined8 *param_1)

{
  FUN_01985394();
  *param_1 = &PTR_FUN_02baeb60;
  DAT_02c08f48 = FUN_01982a84;
  DAT_03214428 = param_1;
  FUN_00e77acc((long)param_1 + 0x34,0);
  return;
}




ulong FUN_01982a84(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6,ulong param_7)

{
  pthread_mutex_t *__mutex;
  long lVar1;
  uint uVar2;
  
  lVar1 = DAT_03214428;
  if (DAT_03214428 != 0) {
    __mutex = (pthread_mutex_t *)(DAT_03214428 + 0x34);
    pthread_mutex_lock(__mutex);
    *(undefined4 *)(lVar1 + 0x18) = param_1;
    *(undefined4 *)(lVar1 + 0x1c) = param_2;
    *(undefined4 *)(lVar1 + 0x20) = param_3;
    *(undefined4 *)(lVar1 + 0x24) = param_4;
    *(undefined4 *)(lVar1 + 0x28) = param_5;
    *(undefined4 *)(lVar1 + 0x2c) = param_6;
    uVar2 = pthread_mutex_unlock(__mutex);
    return (ulong)uVar2;
  }
  return param_7;
}




void FUN_01982b0c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_02baeb60;
  DAT_02c08f48 = 0;
  DAT_03214428 = 0;
  pthread_mutex_destroy((pthread_mutex_t *)((long)param_1 + 0x34));
  FUN_019853e8(param_1);
  return;
}




void FUN_01982b54(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_02baeb60;
  DAT_02c08f48 = 0;
  DAT_03214428 = 0;
  pthread_mutex_destroy((pthread_mutex_t *)((long)param_1 + 0x34));
  FUN_019853e8(param_1);
  operator_delete(param_1);
  return;
}




void FUN_01982bbc(void)

{
  return;
}




int FUN_01982bc0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,undefined4 param_6,long param_7)

{
  int iVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(param_7 + 0x34));
  *(undefined4 *)(param_7 + 0x18) = param_1;
  *(undefined4 *)(param_7 + 0x1c) = param_2;
  *(undefined4 *)(param_7 + 0x20) = param_3;
  *(undefined4 *)(param_7 + 0x24) = param_4;
  *(undefined4 *)(param_7 + 0x28) = param_5;
  *(undefined4 *)(param_7 + 0x2c) = param_6;
  iVar1 = pthread_mutex_unlock((pthread_mutex_t *)(param_7 + 0x34));
  return iVar1;
}




void FUN_01982c28(undefined8 *param_1)

{
  FUN_019854d4();
  *param_1 = &PTR_FUN_02baebf0;
  FUN_019854c8((long)param_1 + 0x2c);
  DAT_02c08f78 = FUN_01982ca4;
  DAT_02c08f80 = FUN_01982cb4;
  DAT_02c08f88 = FUN_01982cc4;
  DAT_03214430 = param_1;
  return;
}




void FUN_01982ca4(undefined8 param_1,undefined4 param_2)

{
  FUN_01982d84(DAT_03214430,param_2,param_2);
  return;
}




void FUN_01982cb4(undefined8 param_1,undefined4 param_2)

{
  FUN_01982e5c(DAT_03214430,param_2,param_2);
  return;
}




void FUN_01982cc4(undefined8 param_1,undefined4 param_2)

{
  FUN_01982f2c(DAT_03214430,param_2,param_2);
  return;
}




void FUN_01982cd4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_02baebf0;
  DAT_03214430 = 0;
  DAT_02c08f78 = 0;
  DAT_02c08f80 = 0;
  DAT_02c08f88 = 0;
  return;
}




void FUN_01982d14(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_02baebf0;
  DAT_03214430 = 0;
  DAT_02c08f78 = 0;
  DAT_02c08f80 = 0;
  DAT_02c08f88 = 0;
  operator_delete(param_1);
  return;
}




void FUN_01982d54(long param_1)

{
  ushort uVar1;
  
  uVar1 = *(ushort *)(param_1 + 0xe);
  *(undefined2 *)(param_1 + 0xc) = *(undefined2 *)(param_1 + 0x2c);
  *(ushort *)(param_1 + 0xe) = *(ushort *)(param_1 + 0x2e);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x24) = *(undefined8 *)(param_1 + 0x44);
  *(undefined8 *)(param_1 + 0x1c) = *(undefined8 *)(param_1 + 0x3c);
  *(ushort *)(param_1 + 0x10) = *(ushort *)(param_1 + 0x2e) & (uVar1 ^ 0xffff);
  return;
}




void FUN_01982d84(long param_1,undefined8 param_2,undefined4 param_3)

{
  ushort uVar1;
  undefined8 uVar2;
  
  switch(param_3) {
  case 0x60:
    uVar2 = 0;
    break;
  case 0x61:
    uVar2 = 1;
    break;
  case 0x62:
  case 0x65:
    goto switchD_01982db0_caseD_62;
  case 99:
    uVar2 = 2;
    break;
  case 100:
    uVar2 = 3;
    break;
  case 0x66:
    uVar2 = 9;
    break;
  case 0x67:
    uVar2 = 8;
    break;
  case 0x68:
    *(undefined4 *)(param_1 + 0x48) = 0x3f800000;
    goto switchD_01982db0_caseD_62;
  case 0x69:
    *(undefined4 *)(param_1 + 0x44) = 0x3f800000;
    goto switchD_01982db0_caseD_62;
  default:
    switch(param_3) {
    case 0x13:
      uVar2 = 4;
      break;
    case 0x14:
      uVar2 = 6;
      break;
    case 0x15:
      uVar2 = 7;
      break;
    case 0x16:
      uVar2 = 5;
      break;
    default:
      goto switchD_01982db0_caseD_62;
    }
  }
  uVar1 = FUN_0198550c(uVar2);
  *(ushort *)(param_1 + 0x2e) = *(ushort *)(param_1 + 0x2e) | uVar1;
switchD_01982db0_caseD_62:
  *(undefined1 *)(param_1 + 0x2c) = 1;
  return;
}




void FUN_01982e5c(long param_1,undefined8 param_2,undefined4 param_3)

{
  ushort uVar1;
  undefined8 uVar2;
  
  switch(param_3) {
  case 0x60:
    uVar2 = 0;
    break;
  case 0x61:
    uVar2 = 1;
    break;
  case 0x62:
  case 0x65:
    goto switchD_01982e88_caseD_62;
  case 99:
    uVar2 = 2;
    break;
  case 100:
    uVar2 = 3;
    break;
  case 0x66:
    uVar2 = 9;
    break;
  case 0x67:
    uVar2 = 8;
    break;
  case 0x68:
    *(undefined4 *)(param_1 + 0x48) = 0;
    goto switchD_01982e88_caseD_62;
  case 0x69:
    *(undefined4 *)(param_1 + 0x44) = 0;
    goto switchD_01982e88_caseD_62;
  default:
    switch(param_3) {
    case 0x13:
      uVar2 = 4;
      break;
    case 0x14:
      uVar2 = 6;
      break;
    case 0x15:
      uVar2 = 7;
      break;
    case 0x16:
      uVar2 = 5;
      break;
    default:
      goto switchD_01982e88_caseD_62;
    }
  }
  uVar1 = FUN_0198550c(uVar2);
  *(ushort *)(param_1 + 0x2e) = *(ushort *)(param_1 + 0x2e) & (uVar1 ^ 0xffff);
switchD_01982e88_caseD_62:
  *(undefined1 *)(param_1 + 0x2c) = 1;
  return;
}




void FUN_01982f2c(undefined4 param_1,long param_2,undefined8 param_3,int param_4)

{
  undefined4 *puVar1;
  
  switch(param_4) {
  case 0xb:
    puVar1 = (undefined4 *)(param_2 + 0x34);
    break;
  case 0xc:
  case 0xd:
  case 0xf:
  case 0x10:
    goto switchD_01982f48_caseD_c;
  case 0xe:
    puVar1 = (undefined4 *)(param_2 + 0x38);
    break;
  case 0x11:
    puVar1 = (undefined4 *)(param_2 + 0x48);
    break;
  case 0x12:
    puVar1 = (undefined4 *)(param_2 + 0x44);
    break;
  default:
    if (param_4 == 1) {
      puVar1 = (undefined4 *)(param_2 + 0x40);
    }
    else {
      if (param_4 != 0) goto switchD_01982f48_caseD_c;
      puVar1 = (undefined4 *)(param_2 + 0x3c);
    }
  }
  *puVar1 = param_1;
switchD_01982f48_caseD_c:
  *(undefined1 *)(param_2 + 0x2c) = 1;
  return;
}




void FUN_01982f94(undefined8 *param_1)

{
  FUN_019855e8();
  *(undefined4 *)(param_1 + 7) = 0;
  *param_1 = &PTR_FUN_02baec18;
  FUN_00e77acc(param_1 + 2,0);
  DAT_02c08f40 = FUN_01982ff0;
  DAT_03214438 = param_1;
  return;
}




ulong FUN_01982ff0(ulong param_1)

{
  pthread_mutex_t *__mutex;
  long lVar1;
  uint uVar2;
  
  lVar1 = DAT_03214438;
  if (DAT_03214438 != 0) {
    __mutex = (pthread_mutex_t *)(DAT_03214438 + 0x10);
    pthread_mutex_lock(__mutex);
    FUN_01985688(lVar1 + 0x38,1);
    uVar2 = pthread_mutex_unlock(__mutex);
    return (ulong)uVar2;
  }
  return param_1;
}

