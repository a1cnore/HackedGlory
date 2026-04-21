// functions/00e80 — 13 functions
#include "libGameKindred.h"




bool thunk_FUN_00e80f58(void)

{
  return DAT_03210700 != 0;
}




void FUN_00e80ae4(uint *param_1,long param_2)

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
    FUN_00e80b80(param_1,uVar1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  lVar4 = *(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 0x28;
  FUN_008fcdb8(lVar4 + -0x28,param_2);
  uVar5 = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(lVar4 + -8) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(lVar4 + -0x10) = uVar5;
  return;
}




void FUN_00e80b80(uint *param_1,uint param_2)

{
  void *pvVar1;
  void *pvVar2;
  undefined8 *puVar3;
  long lVar4;
  void *pvVar5;
  void *pvVar6;
  undefined8 uVar7;
  
  if (param_1[1] < param_2) {
    pvVar1 = operator_new__((ulong)param_2 * 0x28);
    pvVar2 = *(void **)(param_1 + 2);
    if (*param_1 == 0) {
      param_1[1] = param_2;
    }
    else {
      pvVar6 = (void *)((long)pvVar2 + (ulong)*param_1 * 0x28);
      pvVar5 = pvVar1;
      do {
        FUN_008fcdb8(pvVar5,pvVar2);
        puVar3 = (undefined8 *)((long)pvVar2 + 0x20);
        uVar7 = *(undefined8 *)((long)pvVar2 + 0x18);
        pvVar2 = (void *)((long)pvVar2 + 0x28);
        *(undefined8 *)((long)pvVar5 + 0x20) = *puVar3;
        *(undefined8 *)((long)pvVar5 + 0x18) = uVar7;
        pvVar5 = (void *)((long)pvVar5 + 0x28);
      } while (pvVar2 != pvVar6);
      pvVar2 = *(void **)(param_1 + 2);
      param_1[1] = param_2;
      if (*param_1 != 0) {
        lVar4 = (ulong)*param_1 * 0x28;
        puVar3 = (undefined8 *)((long)pvVar2 + 0x10);
        do {
          if ((*(byte *)(puVar3 + -2) & 1) != 0) {
            operator_delete((void *)*puVar3);
          }
          lVar4 = lVar4 + -0x28;
          puVar3 = puVar3 + 5;
        } while (lVar4 != 0);
        pvVar2 = *(void **)(param_1 + 2);
      }
    }
    if (pvVar2 != (void *)0x0) {
      operator_delete__(pvVar2);
    }
    *(void **)(param_1 + 2) = pvVar1;
  }
  return;
}




ulong FUN_00e80c5c(long *param_1,long *param_2)

{
  uint uVar1;
  bool bVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  double dVar7;
  double dVar8;
  
  uVar1 = *(uint *)(param_1 + 2);
  if (((*(uint *)(param_2 + 2) ^ uVar1) & 0xff) != 0) {
    return 0;
  }
  switch(uVar1 & 0xff) {
  case 3:
    if ((int)param_1[1] != (int)param_2[1]) {
      return 0;
    }
    if ((int)param_1[1] != 0) {
      lVar6 = *param_1;
      while ((lVar3 = FUN_00e80df8(param_2,lVar6),
             *param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 != lVar3 &&
             (uVar5 = FUN_00e80c5c(lVar6 + 0x18,lVar3 + 0x18), (uVar5 & 1) != 0))) {
        lVar6 = lVar6 + 0x30;
        if (lVar6 == *param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30) {
          return 1;
        }
      }
      return 0;
    }
    break;
  case 4:
    if ((int)param_1[1] != (int)param_2[1]) {
      return 0;
    }
    if ((int)param_1[1] != 0) {
      lVar6 = 0;
      uVar5 = 0;
      do {
        uVar4 = FUN_00e80c5c(*param_1 + lVar6,*param_2 + lVar6);
        if ((uVar4 & 1) == 0) {
          return 0;
        }
        uVar5 = uVar5 + 1;
        lVar6 = lVar6 + 0x18;
      } while (uVar5 < *(uint *)(param_1 + 1));
      return 1;
    }
    break;
  case 5:
    uVar5 = FUN_008fd23c(param_1,param_2);
    return uVar5;
  case 6:
    if (((*(uint *)(param_2 + 2) | uVar1) >> 0xe & 1) == 0) {
      bVar2 = *param_1 == *param_2;
    }
    else {
      dVar7 = (double)FUN_008fc0f0(param_1);
      dVar8 = (double)FUN_008fc0f0(param_2);
      bVar2 = false;
      if (!NAN(dVar7) && !NAN(dVar8)) {
        bVar2 = dVar7 == dVar8;
      }
    }
    return (ulong)bVar2;
  }
  return 1;
}




long FUN_00e80df8(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  
  lVar2 = *param_1;
  if ((int)param_1[1] != 0) {
    do {
      uVar1 = FUN_008fd23c(param_2,lVar2);
      if ((uVar1 & 1) != 0) {
        return lVar2;
      }
      lVar2 = lVar2 + 0x30;
    } while (lVar2 != *param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30);
  }
  return lVar2;
}




void FUN_00e80e5c(int param_1)

{
  void *pvVar1;
  
  if (param_1 == 0) {
    DAT_03210700 = (void *)0x0;
  }
  else {
    pvVar1 = operator_new(0x2cb0);
    FUN_00e859e4();
    DAT_03210700 = pvVar1;
  }
  DAT_02bf2518 = 1;
  return;
}




void FUN_00e80ea8(undefined8 param_1,undefined4 param_2,uint param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00e80ecc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_03210700 + 0x10))(DAT_03210700,param_1,param_2,param_3 & 1);
  return;
}




void FUN_00e80ed0(void)

{
  long lVar1;
  
  lVar1 = (**(code **)(*DAT_03210700 + 0x4d0))();
  if (*(int *)(lVar1 + 0xa0) != 0) {
    (**(code **)(*DAT_03210700 + 800))();
  }
  if (DAT_03210700 != (long *)0x0) {
    (**(code **)(*DAT_03210700 + 8))();
  }
  DAT_03210700 = (long *)0x0;
  return;
}




bool FUN_00e80f2c(void)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_03210700 + 800))();
  return iVar1 == 1;
}




bool FUN_00e80f58(void)

{
  return DAT_03210700 != 0;
}




undefined8 FUN_00e80f6c(void)

{
  long lVar1;
  undefined8 uVar2;
  
  if ((DAT_03210700 != (long *)0x0) &&
     (lVar1 = (**(code **)(*DAT_03210700 + 0x4d0))(), *(int *)(lVar1 + 0xa0) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x00e80fac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*DAT_03210700 + 0x18))();
    return uVar2;
  }
  return 0;
}




void FUN_00e80fc0(void)

{
  if (DAT_03210700 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00e80fd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_03210700 + 0x528))();
    return;
  }
  return;
}




bool FUN_00e80fdc(undefined8 param_1,undefined8 param_2,uint param_3,undefined8 param_4)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_03210700 + 0x20))(DAT_03210700,param_1,param_2,param_3 & 1,param_4);
  return iVar1 == 1;
}

