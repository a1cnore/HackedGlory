// functions/00af4 — 48 functions
#include "libGameKindred.h"




void FUN_00af4054(undefined8 param_1)

{
  undefined8 in_x4;
  
  FUN_00af0ac0(param_1,in_x4);
  return;
}




void FUN_00af405c(uint *param_1,uint param_2)

{
  long lVar1;
  byte *pbVar2;
  
  if (*(long *)(param_1 + 2) != 0) {
    if (*param_1 != 0) {
      lVar1 = (ulong)*param_1 * 0x70;
      pbVar2 = (byte *)(*(long *)(param_1 + 2) + 0x38);
      do {
        if ((pbVar2[0x18] & 1) != 0) {
          operator_delete(*(void **)(pbVar2 + 0x28));
        }
        if ((*pbVar2 & 1) != 0) {
          operator_delete(*(void **)(pbVar2 + 0x10));
        }
        if ((pbVar2[-0x20] & 1) != 0) {
          operator_delete(*(void **)(pbVar2 + -0x10));
        }
        if ((pbVar2[-0x38] & 1) != 0) {
          operator_delete(*(void **)(pbVar2 + -0x28));
        }
        lVar1 = lVar1 + -0x70;
        pbVar2 = pbVar2 + 0x70;
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




void FUN_00af4108(uint *param_1,uint *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_00af41b4(param_1,*param_2);
  uVar2 = 0;
  if (*param_2 != 0) {
    lVar3 = *(long *)(param_2 + 2);
    lVar4 = *(long *)(param_1 + 2);
    lVar5 = lVar3 + (ulong)*param_2 * 0x70;
    do {
      FUN_008fcdb8(lVar4,lVar3);
      FUN_008fcdb8(lVar4 + 0x18,lVar3 + 0x18);
      *(undefined4 *)(lVar4 + 0x30) = *(undefined4 *)(lVar3 + 0x30);
      FUN_008fcdb8(lVar4 + 0x38,lVar3 + 0x38);
      FUN_008fcdb8(lVar4 + 0x50,lVar3 + 0x50);
      puVar1 = (undefined4 *)(lVar3 + 0x68);
      lVar3 = lVar3 + 0x70;
      *(undefined4 *)(lVar4 + 0x68) = *puVar1;
      lVar4 = lVar4 + 0x70;
    } while (lVar3 != lVar5);
    uVar2 = *param_2;
  }
  *param_1 = uVar2;
  return;
}




void FUN_00af41b4(uint *param_1,uint param_2)

{
  undefined4 *puVar1;
  void *pvVar2;
  void *pvVar3;
  byte *pbVar4;
  long lVar5;
  void *pvVar6;
  void *pvVar7;
  
  if (param_1[1] < param_2) {
    pvVar2 = operator_new__((ulong)param_2 * 0x70);
    pvVar3 = *(void **)(param_1 + 2);
    if (*param_1 == 0) {
      param_1[1] = param_2;
    }
    else {
      pvVar7 = (void *)((long)pvVar3 + (ulong)*param_1 * 0x70);
      pvVar6 = pvVar2;
      do {
        FUN_008fcdb8(pvVar6,pvVar3);
        FUN_008fcdb8((long)pvVar6 + 0x18,(long)pvVar3 + 0x18);
        *(undefined4 *)((long)pvVar6 + 0x30) = *(undefined4 *)((long)pvVar3 + 0x30);
        FUN_008fcdb8((long)pvVar6 + 0x38,(long)pvVar3 + 0x38);
        FUN_008fcdb8((long)pvVar6 + 0x50,(long)pvVar3 + 0x50);
        puVar1 = (undefined4 *)((long)pvVar3 + 0x68);
        pvVar3 = (void *)((long)pvVar3 + 0x70);
        *(undefined4 *)((long)pvVar6 + 0x68) = *puVar1;
        pvVar6 = (void *)((long)pvVar6 + 0x70);
      } while (pvVar3 != pvVar7);
      pvVar3 = *(void **)(param_1 + 2);
      param_1[1] = param_2;
      if (*param_1 != 0) {
        lVar5 = (ulong)*param_1 * 0x70;
        pbVar4 = (byte *)((long)pvVar3 + 0x38);
        do {
          if ((pbVar4[0x18] & 1) != 0) {
            operator_delete(*(void **)(pbVar4 + 0x28));
          }
          if ((*pbVar4 & 1) != 0) {
            operator_delete(*(void **)(pbVar4 + 0x10));
          }
          if ((pbVar4[-0x20] & 1) != 0) {
            operator_delete(*(void **)(pbVar4 + -0x10));
          }
          if ((pbVar4[-0x38] & 1) != 0) {
            operator_delete(*(void **)(pbVar4 + -0x28));
          }
          lVar5 = lVar5 + -0x70;
          pbVar4 = pbVar4 + 0x70;
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




void FUN_00af42ec(uint *param_1,uint *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  if (param_1 != param_2) {
    FUN_00af405c(param_1,1);
    FUN_00af41b4(param_1,*param_2);
    uVar2 = 0;
    if (*param_2 != 0) {
      lVar3 = *(long *)(param_2 + 2);
      lVar4 = *(long *)(param_1 + 2);
      lVar5 = lVar3 + (ulong)*param_2 * 0x70;
      do {
        FUN_008fcdb8(lVar4,lVar3);
        FUN_008fcdb8(lVar4 + 0x18,lVar3 + 0x18);
        *(undefined4 *)(lVar4 + 0x30) = *(undefined4 *)(lVar3 + 0x30);
        FUN_008fcdb8(lVar4 + 0x38,lVar3 + 0x38);
        FUN_008fcdb8(lVar4 + 0x50,lVar3 + 0x50);
        puVar1 = (undefined4 *)(lVar3 + 0x68);
        lVar3 = lVar3 + 0x70;
        *(undefined4 *)(lVar4 + 0x68) = *puVar1;
        lVar4 = lVar4 + 0x70;
      } while (lVar3 != lVar5);
      uVar2 = *param_2;
    }
    *param_1 = uVar2;
  }
  return;
}




void FUN_00af43ac(undefined8 *param_1)

{
  FUN_00bd7128(param_1 + 2);
  *param_1 = &PTR_FUN_027d9d98;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return;
}




void FUN_00af43f8(void *param_1)

{
  FUN_00af43ac();
  operator_delete(param_1);
  return;
}




long FUN_00af441c(long param_1)

{
  return param_1 + 0x10;
}




undefined8 FUN_00af4424(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}




void FUN_00af442c(long param_1)

{
  FUN_00bd7128();
  *(undefined ***)(param_1 + -0x10) = &PTR_FUN_027d9d98;
  if (*(long **)(param_1 + -8) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + -8) + 8))();
  }
  *(undefined8 *)(param_1 + -8) = 0;
  return;
}




void FUN_00af4474(long param_1)

{
  FUN_00bd7128();
  *(undefined8 *)(param_1 + -0x10) = &PTR_FUN_027d9d98;
  if (*(long **)(param_1 + -8) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + -8) + 8))();
  }
  *(undefined8 *)(param_1 + -8) = 0;
  operator_delete((undefined8 *)(param_1 + -0x10));
  return;
}




void FUN_00af44c0(void)

{
  return;
}




undefined8 FUN_00af44c4(void)

{
  return 0;
}




undefined8 FUN_00af44cc(long param_1)

{
  return *(undefined8 *)(param_1 + -8);
}




void FUN_00af44d4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027d9d98;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return;
}




void FUN_00af4518(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027d9d98;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  operator_delete(param_1);
  return;
}




void FUN_00af455c(uint *param_1,uint param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined8 uVar7;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 * 0x48);
    puVar2 = *(undefined4 **)(param_1 + 2);
    if (*param_1 == 0) {
      param_1[1] = param_2;
    }
    else {
      puVar5 = puVar2 + (ulong)*param_1 * 0x12;
      puVar6 = puVar1;
      do {
        *puVar6 = *puVar2;
        FUN_00af4108(puVar6 + 2,puVar2 + 2);
        FUN_008fcdb8(puVar6 + 6,puVar2 + 6);
        *(undefined8 *)((long)puVar6 + 0x3d) = *(undefined8 *)((long)puVar2 + 0x3d);
        puVar3 = (undefined8 *)(puVar2 + 0xe);
        uVar7 = *(undefined8 *)(puVar2 + 0xc);
        puVar2 = puVar2 + 0x12;
        *(undefined8 *)(puVar6 + 0xe) = *puVar3;
        *(undefined8 *)(puVar6 + 0xc) = uVar7;
        puVar6 = puVar6 + 0x12;
      } while (puVar2 != puVar5);
      puVar2 = *(undefined4 **)(param_1 + 2);
      param_1[1] = param_2;
      if (*param_1 != 0) {
        lVar4 = (ulong)*param_1 * 0x48;
        puVar3 = (undefined8 *)(puVar2 + 10);
        do {
          if ((*(byte *)(puVar3 + -2) & 1) != 0) {
            operator_delete((void *)*puVar3);
          }
          FUN_00af405c(puVar3 + -4,1);
          lVar4 = lVar4 + -0x48;
          puVar3 = puVar3 + 9;
        } while (lVar4 != 0);
        puVar2 = *(undefined4 **)(param_1 + 2);
      }
    }
    if (puVar2 != (undefined4 *)0x0) {
      operator_delete__(puVar2);
    }
    *(undefined4 **)(param_1 + 2) = puVar1;
  }
  return;
}




void FUN_00af4660(uint *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined8 *puVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined8 uVar7;
  
  uVar3 = *param_1;
  iVar4 = (int)((ulong)((long)param_3 - (long)param_2) >> 3);
  if (uVar3 != iVar4 * 0x38e38e39) {
    puVar5 = (undefined4 *)(*(long *)(param_1 + 2) + (ulong)uVar3 * 0x48);
    lVar2 = (long)puVar5 - (long)param_3;
    puVar6 = param_2;
    if (lVar2 != 0) {
      do {
        *puVar6 = *param_3;
        FUN_00af42ec(puVar6 + 2,param_3 + 2);
        FUN_008fce60(puVar6 + 6,param_3 + 6);
        uVar7 = *(undefined8 *)(param_3 + 0xc);
        *(undefined8 *)(puVar6 + 0xe) = *(undefined8 *)(param_3 + 0xe);
        *(undefined8 *)(puVar6 + 0xc) = uVar7;
        puVar1 = (undefined8 *)((long)param_3 + 0x3d);
        param_3 = param_3 + 0x12;
        *(undefined8 *)((long)puVar6 + 0x3d) = *puVar1;
        puVar6 = puVar6 + 0x12;
      } while (param_3 != puVar5);
      uVar3 = *param_1;
      puVar5 = (undefined4 *)(*(long *)(param_1 + 2) + (ulong)uVar3 * 0x48);
    }
    param_2 = param_2 + ((lVar2 >> 3) * 0x38e38e39 & 0xffffffffU) * 0x12;
    if (param_2 != puVar5) {
      do {
        if ((*(byte *)(param_2 + 6) & 1) != 0) {
          operator_delete(*(void **)(param_2 + 10));
        }
        FUN_00af405c(param_2 + 2,1);
        param_2 = param_2 + 0x12;
      } while (puVar5 != param_2);
      uVar3 = *param_1;
    }
    *param_1 = uVar3 + iVar4 * -0x38e38e39;
    return;
  }
  FUN_00af0850(param_1,1);
  return;
}




void FUN_00af47a4(uint *param_1,uint param_2)

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




void FUN_00af4824(long *param_1)

{
  FUN_00f11234();
  *param_1 = (long)&PTR_FUN_027d9db8;
  FUN_00ecfd6c(param_1 + 0x34,0);
  param_1[0xdc] = 0;
  param_1[0xdb] = 0;
  *(byte *)(param_1 + 0xdd) = *(byte *)(param_1 + 0xdd) | 1;
                    /* WARNING: Could not recover jumptable at 0x00af488c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x34,1);
  return;
}




void FUN_00af4890(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027d9db8;
  FUN_00ed00e0(param_1 + 0x34);
  FUN_00f13d08(param_1);
  return;
}




void FUN_00af48c8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027d9db8;
  FUN_00ed00e0(param_1 + 0x34);
  FUN_00f13d08(param_1);
  operator_delete(param_1);
  return;
}




void FUN_00af4908(long param_1)

{
  FUN_00ed02ac(param_1 + 0x1a0);
  return;
}




void FUN_00af4910(long param_1,float *param_2)

{
  if ((*(float *)(param_1 + 0x1e0) == *param_2) && (*(float *)(param_1 + 0x1e4) == param_2[1])) {
    return;
  }
  *(undefined8 *)(param_1 + 0x1e0) = *(undefined8 *)param_2;
  FUN_0091ada4(param_1 + 0x1a0);
  return;
}




void FUN_00af4948(long param_1)

{
  FUN_00ed04b8(param_1 + 0x1a0);
  return;
}




void FUN_00af4950(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0x6e0) = param_1;
  return;
}




void FUN_00af4958(long param_1,uint param_2,uint param_3)

{
  FUN_00ed04d8(param_1 + 0x1a0,param_2 & 1,param_3 & 1);
  return;
}




void FUN_00af4968(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x6e4) = param_2;
  return;
}




void FUN_00af4970(float param_1,float param_2,long param_3)

{
  FUN_00ed04ac(param_3 + 0x1a0);
  *(float *)(param_3 + 0x6d8) = param_1 * 0.5;
  *(float *)(param_3 + 0x6dc) = param_2 * 0.5;
  return;
}




void FUN_00af49b8(long param_1)

{
  FUN_00ed0848(param_1 + 0x1a0);
  return;
}




void FUN_00af49c0(long param_1)

{
  FUN_00ed0854(param_1 + 0x1a0);
  return;
}




void FUN_00af49c8(long param_1)

{
  FUN_00ed08a8(param_1 + 0x1a0);
  return;
}




void FUN_00af49d0(long param_1,undefined8 param_2)

{
  FUN_00ed026c(param_1 + 0x1a0,param_2,1);
  *(byte *)(param_1 + 0x6e8) = *(byte *)(param_1 + 0x6e8) | 1;
  return;
}




void FUN_00af4a04(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = FUN_00ed0280(param_1 + 0x34);
  while (lVar1 != 0) {
    lVar2 = *(long *)(lVar1 + 0x30);
    FUN_00f01a4c(lVar1,1);
    (**(code **)(*param_1 + 0x160))(param_1,lVar1);
    lVar1 = lVar2;
  }
  *(byte *)(param_1 + 0xdd) = *(byte *)(param_1 + 0xdd) | 1;
  return;
}




void FUN_00af4a70(long param_1)

{
  FUN_00ed0280(param_1 + 0x1a0);
  return;
}




void FUN_00af4a78(long param_1)

{
  FUN_00ed0278(param_1 + 0x1a0);
  return;
}




void FUN_00af4a80(long param_1)

{
  FUN_00ed0288(param_1 + 0x1a0);
  return;
}




void FUN_00af4a88(long *param_1)

{
  long lVar1;
  
  if ((*(byte *)(param_1 + 0xdd) & 1) != 0) {
    (**(code **)(*param_1 + 0x158))(param_1,0);
  }
  for (lVar1 = FUN_00ed0280(param_1 + 0x34); lVar1 != 0; lVar1 = *(long *)(lVar1 + 0x30)) {
    (**(code **)(*param_1 + 0x168))(param_1,lVar1);
  }
  return;
}




void FUN_00af4aec(undefined1 param_1 [16],float param_2,long param_3,ulong param_4)

{
  int iVar1;
  int iVar2;
  long *plVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  
  if (((param_4 & 1) != 0) || ((*(byte *)(param_3 + 0x6e8) & 1) != 0)) {
    plVar3 = (long *)FUN_00ed0280(param_3 + 0x1a0);
    if (plVar3 != (long *)0x0) {
      iVar4 = 0;
      iVar5 = 0;
      do {
        fVar6 = (float)(**(code **)(*plVar3 + 0x48))(plVar3);
        fVar6 = *(float *)(param_3 + 0x6d8) + fVar6 * (float)iVar4 +
                *(float *)(param_3 + 0x6e0) * (float)iVar4;
        param_2 = *(float *)(param_3 + 0x6e0) * (float)iVar5 +
                  param_2 * (float)iVar5 + *(float *)(param_3 + 0x6dc);
        if ((*(float *)(plVar3 + 8) != fVar6) || (*(float *)((long)plVar3 + 0x44) != param_2)) {
          *(float *)(plVar3 + 8) = fVar6;
          *(float *)((long)plVar3 + 0x44) = param_2;
          FUN_0091ada4(plVar3);
        }
        iVar1 = *(int *)(param_3 + 0x6e4);
        iVar4 = iVar4 + 1;
        if (0 < iVar1) {
          iVar2 = 0;
          if (iVar1 != 0) {
            iVar2 = iVar4 / iVar1;
          }
          iVar4 = iVar4 - iVar2 * iVar1;
          if (iVar4 == 0) {
            iVar5 = iVar5 + 1;
          }
        }
        plVar3 = (long *)plVar3[6];
      } while (plVar3 != (long *)0x0);
    }
    FUN_00ed0418(param_3 + 0x1a0,1);
    *(byte *)(param_3 + 0x6e8) = *(byte *)(param_3 + 0x6e8) & 0xfe;
  }
  return;
}




void FUN_00af4be8(void)

{
  return;
}




void FUN_00af4bec(void)

{
  return;
}




void FUN_00af4bf0(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  uint uVar6;
  float fVar7;
  float fVar8;
  
  FUN_00ed8798();
  plVar1 = param_1 + 0x17;
  *param_1 = (long)&PTR_FUN_027d9f38;
  FUN_00f0e4a8(plVar1);
  plVar2 = param_1 + 0x35;
  FUN_00f0e4a8(plVar2);
  plVar3 = param_1 + 0x53;
  FUN_00f0e4a8(plVar3);
  plVar4 = param_1 + 0x71;
  FUN_00b12bd8(plVar4,0);
  plVar5 = param_1 + 0x107;
  FUN_00f0d160(plVar5);
  *(undefined1 *)((long)param_1 + 0x972) = 0;
  *(undefined2 *)(param_1 + 0x12e) = 0;
  param_1[0x12d] = 0;
  *(undefined4 *)((long)param_1 + 0x973) = 0xffffffff;
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar3,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar5,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar4,1);
  if ((*(float *)(param_1 + 0x21) != 0.0) || (*(float *)((long)param_1 + 0x10c) != 0.0)) {
    param_1[0x21] = 0;
    FUN_0091ada4(plVar1);
  }
  FUN_00f0e540(plVar2,PTR_s_build___MenuCharPortraitsHD_png_02be35b0);
  if ((*(float *)(param_1 + 0x3f) != 0.0) || (*(float *)((long)param_1 + 0x1fc) != 0.0)) {
    param_1[0x3f] = 0;
    FUN_0091ada4(plVar2);
  }
  FUN_00f0e578(plVar2,"portrait_lock");
  *(uint *)((long)param_1 + 0x22c) = *(uint *)((long)param_1 + 0x22c) & 0xfffffffb;
  FUN_00f0e540(plVar3,PTR_s_build___MenuCharPortraitsHD_png_02be35b0);
  FUN_00f0e578(plVar3,"portrait_titlebackground");
  uVar6 = *(uint *)((long)param_1 + 0x31c);
  if ((uVar6 & 0x7f80) != 0x5f80) {
    *(uint *)((long)param_1 + 0x31c) = uVar6 & 0xffff8000 | uVar6 & 0x7f | 0x5f80;
    FUN_0091ada4(plVar3);
  }
  if ((*(float *)(param_1 + 0x5d) != 0.5) || (*(float *)((long)param_1 + 0x2ec) != 1.0)) {
    param_1[0x5d] = 0x3f8000003f000000;
    FUN_0091ada4(plVar3);
  }
  *(uint *)((long)param_1 + 0x31c) = *(uint *)((long)param_1 + 0x31c) & 0xfffffffb;
  FUN_00f0d378(plVar5,PTR_s_build___Fonts_Avenir_Medium_30_f_02be9cf8);
  if ((~*(uint *)((long)param_1 + 0x8bc) & 0x7f80) != 0) {
    *(uint *)((long)param_1 + 0x8bc) = *(uint *)((long)param_1 + 0x8bc) | 0x7f80;
    FUN_0091ada4(plVar5);
  }
  if ((*(float *)(param_1 + 0x111) != 0.5) || (*(float *)((long)param_1 + 0x88c) != 0.5)) {
    param_1[0x111] = 0x3f0000003f000000;
    FUN_0091ada4(plVar5);
  }
  *(uint *)((long)param_1 + 0x8bc) = *(uint *)((long)param_1 + 0x8bc) & 0xfffffffb;
  fVar8 = 270.0;
  FUN_00f13f08(plVar4);
  FUN_00b1326c(0x3f800000,plVar4,&DAT_01bee7fa);
  FUN_00b13324(0,plVar4);
  if ((*(uint *)((long)param_1 + 0x40c) & 0x7f80) != 0) {
    *(uint *)((long)param_1 + 0x40c) = *(uint *)((long)param_1 + 0x40c) & 0xffff807f;
    FUN_0091ada4(plVar4);
  }
  fVar7 = (float)FUN_00f13e54(plVar4);
  if ((*(float *)(param_1 + 0x79) != fVar7 * 0.5) ||
     (*(float *)((long)param_1 + 0x3cc) != fVar8 * 0.5)) {
    *(float *)(param_1 + 0x79) = fVar7 * 0.5;
    *(float *)((long)param_1 + 0x3cc) = fVar8 * 0.5;
    FUN_0091ada4(plVar4);
  }
  *(undefined1 *)(param_1 + 0x12e) = 0;
  return;
}




void FUN_00af4f00(long param_1,byte param_2)

{
  *(byte *)(param_1 + 0x970) = param_2 & 1;
  return;
}




void FUN_00af4f0c(long param_1,long param_2)

{
  long lVar1;
  undefined1 auStack_58 [32];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00e6a8a8(auStack_58,"portrait_%s",*(undefined8 *)(param_2 + 0x10));
  FUN_00a9bbc4(param_1 + 0xb8,auStack_58);
  *(long *)(param_1 + 0x968) = param_2;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00af4f80(long param_1)

{
  FUN_00f0e548(param_1 + 0xb8,PTR_s_build___MenuCharPortraitsHD_png_02be35b0,"portrait_empty");
  *(undefined8 *)(param_1 + 0x968) = 0;
  return;
}




void FUN_00af4fbc(long param_1)

{
  FUN_00f0d75c(param_1 + 0x838);
  return;
}




void FUN_00af4fc4(long param_1,uint param_2)

{
  uint uVar1;
  
  if ((param_2 & 1) == 0) {
    *(uint *)(param_1 + 0x8bc) = *(uint *)(param_1 + 0x8bc) & 0xfffffffb;
    uVar1 = *(uint *)(param_1 + 0x31c) & 0xfffffffb;
  }
  else {
    *(uint *)(param_1 + 0x8bc) = *(uint *)(param_1 + 0x8bc) | 4;
    uVar1 = *(uint *)(param_1 + 0x31c) | 4;
  }
  *(uint *)(param_1 + 0x31c) = uVar1;
  return;
}




void FUN_00af4ff8(long param_1,byte param_2)

{
  uint uVar1;
  
  *(byte *)(param_1 + 0x971) = param_2 & 1;
  uVar1 = *(uint *)(param_1 + 0x22c) | 4;
  if ((param_2 & 1) == 0) {
    uVar1 = *(uint *)(param_1 + 0x22c) & 0xfffffffb;
  }
  *(uint *)(param_1 + 0x22c) = uVar1;
  return;
}

