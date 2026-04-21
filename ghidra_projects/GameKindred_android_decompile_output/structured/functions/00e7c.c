// functions/00e7c — 50 functions
#include "libGameKindred.h"




void FUN_00e7c068(long param_1)

{
  ulong uVar1;
  
  if (*(int *)(param_1 + 0x18) != 0) {
    uVar1 = 0;
    do {
      (**(code **)(**(long **)(*(long *)(param_1 + 0x20) + uVar1 * 8) + 0x10))();
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(uint *)(param_1 + 0x18));
  }
  return;
}




void FUN_00e7c0b4(long param_1)

{
  int iVar1;
  long lVar2;
  
  iVar1 = *(int *)(param_1 + 0x18);
  if (iVar1 != 0) {
    lVar2 = (ulong)(iVar1 - 1) << 3;
    do {
      (**(code **)(**(long **)(*(long *)(param_1 + 0x20) + lVar2) + 0x18))();
      iVar1 = iVar1 + -1;
      lVar2 = lVar2 + -8;
    } while (iVar1 != 0);
  }
  return;
}




void FUN_00e7c108(long param_1)

{
  ulong uVar1;
  
  if (*(int *)(param_1 + 0x18) != 0) {
    uVar1 = 0;
    do {
      (**(code **)(**(long **)(*(long *)(param_1 + 0x20) + uVar1 * 8) + 0x20))();
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(uint *)(param_1 + 0x18));
  }
  return;
}




void FUN_00e7c154(long param_1)

{
  int iVar1;
  long lVar2;
  
  iVar1 = *(int *)(param_1 + 0x18);
  if (iVar1 != 0) {
    lVar2 = (ulong)(iVar1 - 1) << 3;
    do {
      (**(code **)(**(long **)(*(long *)(param_1 + 0x20) + lVar2) + 0x28))();
      iVar1 = iVar1 + -1;
      lVar2 = lVar2 + -8;
    } while (iVar1 != 0);
  }
  return;
}




uint FUN_00e7c1a8(long param_1)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  
  if (*(int *)(param_1 + 0x18) == 0) {
    uVar2 = 1;
  }
  else {
    uVar3 = 0;
    uVar2 = 1;
    do {
      uVar1 = (**(code **)(**(long **)(*(long *)(param_1 + 0x20) + uVar3 * 8) + 0x30))();
      uVar3 = uVar3 + 1;
      uVar2 = uVar2 & uVar1;
    } while (uVar3 < *(uint *)(param_1 + 0x18));
  }
  return uVar2;
}




void FUN_00e7c210(long param_1)

{
  int iVar1;
  long lVar2;
  
  iVar1 = *(int *)(param_1 + 0x18);
  if (iVar1 != 0) {
    lVar2 = (ulong)(iVar1 - 1) << 3;
    do {
      (**(code **)(**(long **)(*(long *)(param_1 + 0x20) + lVar2) + 0x38))();
      iVar1 = iVar1 + -1;
      lVar2 = lVar2 + -8;
    } while (iVar1 != 0);
  }
  return;
}




void FUN_00e7c264(uint *param_1,uint param_2)

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




void FUN_00e7c2e4(undefined8 param_1)

{
  FUN_00e7c3d0();
  FUN_00e7cee8(param_1);
  FUN_00e7c998(param_1);
  return;
}




void FUN_00e7c310(undefined8 *param_1)

{
  param_1[5] = 0;
  *param_1 = &PTR_FUN_02820870;
  FUN_0198f4cc(param_1 + 6);
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  return;
}




void FUN_00e7c34c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  *param_1 = &PTR_FUN_02820870;
  if (param_1[0x16] != 0) {
    FUN_0198fe30(param_1 + 6);
  }
  uVar1 = FUN_0198ff3c();
  FUN_019901e8(uVar1,param_1[0x15]);
  FUN_01995718(param_1[0x14]);
  thunk_FUN_0198f500(param_1 + 6);
  FUN_01985bd0(param_1);
  return;
}




void FUN_00e7c3ac(void *param_1)

{
  FUN_00e7c34c();
  operator_delete(param_1);
  return;
}




void FUN_00e7c3d0(long param_1)

{
  long lVar1;
  
  DAT_0312f168 = *(uint *)(param_1 + 0x13fb0);
  *(uint *)(param_1 + 0x13fb0) = DAT_0312f168 + 1;
  lVar1 = param_1 + (ulong)DAT_0312f168 * 0x2e8;
  *(code **)(lVar1 + 0xb0) = FUN_00e7c6b0;
  *(code **)(lVar1 + 0xb8) = FUN_00e7c6f0;
  *(uint *)(lVar1 + 0x2d8) = *(uint *)(lVar1 + 0x2d8) & 0x80000000 | 0x40;
  *(uint *)(lVar1 + 0xa4) = DAT_0312f168;
  *(undefined4 *)(lVar1 + 0xa8) = 0xb8;
  *(long *)(param_1 + 0x13fb8) = lVar1;
  FUN_01986780(param_1,4,FUN_00e7c440,0);
  return;
}




void FUN_00e7c440(long param_1)

{
  FUN_01988c78();
  FUN_0198f550(param_1 + 0x30);
  return;
}




void FUN_00e7c464(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    for (lVar2 = *(long *)(*(long *)(param_1 + 0x10) + 0x18); lVar2 != 0;
        lVar2 = *(long *)(lVar2 + 0x20)) {
      if (*(int *)(*(long *)(lVar2 + 8) + 0xa4) == DAT_0312ead4) {
        *(long *)(param_1 + 0x28) = lVar2;
        FUN_00e7ca08(lVar2,1);
        uVar1 = FUN_00e7ca48(lVar2);
        FUN_0198abf0(uVar1,param_1 + 0x30);
        return;
      }
    }
  }
  return;
}




void FUN_00e7c4d8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    for (lVar1 = *(long *)(*(long *)(param_1 + 0x10) + 0x18); lVar1 != 0;
        lVar1 = *(long *)(lVar1 + 0x20)) {
      if (*(int *)(*(long *)(lVar1 + 8) + 0xa4) == DAT_0312ead4) {
        uVar2 = FUN_00e7ca48();
        lVar1 = FUN_0198ac00();
        if (lVar1 == param_1 + 0x30) {
          FUN_0198abf8(uVar2);
        }
        *(undefined8 *)(param_1 + 0x28) = 0;
        return;
      }
    }
  }
  return;
}




void FUN_00e7c54c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_019955e4(param_2);
  *(undefined8 *)(param_1 + 0xa0) = uVar1;
  *(undefined8 *)(param_1 + 0x30) = uVar1;
  uVar1 = FUN_0198ff3c();
  uVar1 = FUN_01990008(uVar1,param_3);
  *(undefined8 *)(param_1 + 0xa8) = uVar1;
  return;
}




void FUN_00e7c58c(undefined4 param_1,undefined4 param_2,float param_3,float param_4,float param_5,
                 long param_6,uint param_7)

{
  undefined8 uVar1;
  long *plVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  if (*(long *)(param_6 + 0xb0) != 0) {
    FUN_0198fe30(param_6 + 0x30);
  }
  uVar1 = FUN_0198ff3c();
  plVar2 = (long *)FUN_019902b4(uVar1,*(undefined8 *)(param_6 + 0xa8));
  *(long **)(param_6 + 0xb0) = plVar2;
  *(uint *)((long)plVar2 + 0x14) = param_7 & 1;
  *(undefined4 *)(plVar2 + 3) = param_1;
  *(float *)((long)plVar2 + 0x1c) = param_3;
  fVar5 = *(float *)(plVar2 + 1);
  if (*(float *)(plVar2 + 1) < param_3) {
    *(float *)(plVar2 + 1) = param_3;
    fVar5 = param_3;
  }
  *(float *)(plVar2 + 4) = param_4;
  fVar3 = *(float *)(*plVar2 + 4);
  fVar4 = fVar3 - param_4;
  if (fVar3 <= fVar3 - param_4) {
    fVar4 = fVar3;
  }
  if (fVar4 <= 0.0) {
    fVar4 = 0.0;
  }
  if (fVar4 < fVar5) {
    *(float *)(plVar2 + 1) = fVar4;
  }
  fVar5 = *(float *)(*(long *)(param_6 + 0xa8) + 4);
  *(undefined4 *)((long)plVar2 + 0xc) = 0;
  *(undefined4 *)(plVar2 + 2) = param_2;
  *(float *)(plVar2 + 1) = (1.0 - param_5) * 0.0 + fVar5 * param_5;
  FUN_0198fe18(param_6 + 0x30);
  return;
}




undefined8 FUN_00e7c674(long param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0xb0);
  if ((plVar1 != (long *)0x0) &&
     ((*(int *)((long)plVar1 + 0x14) == 1 ||
      ((*(int *)((long)plVar1 + 0x14) == 0 && (*(float *)(plVar1 + 1) < *(float *)(*plVar1 + 4))))))
     ) {
    return 1;
  }
  return 0;
}




undefined8 * FUN_00e7c6b0(undefined8 *param_1)

{
  param_1[5] = 0;
  *param_1 = &PTR_FUN_02820870;
  FUN_0198f4cc(param_1 + 6);
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  return param_1;
}




void FUN_00e7c6f0(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00e7c6f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)();
  return;
}




void FUN_00e7c6fc(undefined8 *param_1)

{
  undefined8 uVar1;
  
  *param_1 = &PTR_FUN_02baef70;
  uVar1 = FUN_0198ab78();
  *(undefined4 *)(param_1 + 6) = 0x7000000;
  param_1[7] = uVar1;
  param_1[8] = &PTR_FUN_02820920;
  param_1[9] = 0;
  param_1[10] = 0;
  *param_1 = &PTR_FUN_028208a0;
  param_1[5] = &PTR_FUN_028208f0;
  FUN_0198ab90(param_1 + 0xb);
  *(undefined4 *)((long)param_1 + 0xb4) = 0;
  *(undefined2 *)(param_1 + 0x16) = 0xffff;
  param_1[0xe] = 0x3f800000;
  param_1[0xf] = 0;
  param_1[0x10] = 0x3f80000000000000;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0x3f800000;
  param_1[0x14] = 0;
  param_1[0x15] = 0x3f80000000000000;
  FUN_00e7c7a8(param_1,&DAT_03218f30,1);
  return;
}




void FUN_00e7c7a8(long param_1,undefined8 *param_2,undefined4 param_3)

{
  long lVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 local_50;
  float local_48;
  undefined8 local_44;
  float local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_50 = CONCAT44(-(float)((ulong)DAT_03218f40 >> 0x20),-(float)DAT_03218f40);
  local_3c = DAT_03218f48;
  local_44 = DAT_03218f40;
  local_48 = -DAT_03218f48;
  uVar4 = *param_2;
  uVar3 = *(undefined4 *)(param_2 + 1);
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0x3f80000000000000;
  *(undefined8 *)(param_1 + 0x98) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0xa0) = uVar4;
  *(undefined4 *)(param_1 + 0xa8) = uVar3;
  *(undefined4 *)(param_1 + 0xac) = 0x3f800000;
  uVar3 = FUN_01988c6c();
  uVar2 = FUN_0198936c(uVar3,&local_50,param_3,param_1 + 0x30);
  *(undefined2 *)(param_1 + 0xb0) = uVar2;
  *(undefined4 *)(param_1 + 0xb4) = param_3;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e7c878(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  *param_1 = &PTR_FUN_028208a0;
  param_1[5] = &PTR_FUN_028208f0;
  param_1[8] = &PTR_FUN_02820920;
  uVar2 = FUN_01988c6c();
  FUN_01989414(uVar2,*(undefined2 *)(param_1 + 0x16));
  puVar1 = param_1 + 0xb;
  FUN_0198acb4(puVar1,param_1 + 8);
  FUN_0198ab58(puVar1);
  thunk_FUN_0198aba0(puVar1);
  FUN_01985bd0(param_1);
  return;
}




void FUN_00e7c8f0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_01988c6c();
  FUN_01989414(uVar1,*(undefined2 *)(param_1 + 0xb0));
  return;
}




void FUN_00e7c914(long param_1)

{
  FUN_00e7c878(param_1 + -0x28);
  return;
}




void FUN_00e7c91c(long param_1)

{
  FUN_00e7c878(param_1 + -0x40);
  return;
}




void FUN_00e7c924(void *param_1)

{
  FUN_00e7c878();
  operator_delete(param_1);
  return;
}




void FUN_00e7c948(long param_1)

{
  FUN_00e7c878((void *)(param_1 + -0x28));
  operator_delete((void *)(param_1 + -0x28));
  return;
}




void FUN_00e7c970(long param_1)

{
  FUN_00e7c878((void *)(param_1 + -0x40));
  operator_delete((void *)(param_1 + -0x40));
  return;
}




void FUN_00e7c998(long param_1)

{
  long lVar1;
  
  DAT_0312ead4 = *(uint *)(param_1 + 0x13fb0);
  *(uint *)(param_1 + 0x13fb0) = DAT_0312ead4 + 1;
  lVar1 = param_1 + (ulong)DAT_0312ead4 * 0x2e8;
  *(code **)(lVar1 + 0xb0) = FUN_00e7ceb8;
  *(code **)(lVar1 + 0xb8) = FUN_00e7cedc;
  *(uint *)(lVar1 + 0xa4) = DAT_0312ead4;
  *(undefined4 *)(lVar1 + 0xa8) = 0xb8;
  *(uint *)(lVar1 + 0x2d8) = *(uint *)(lVar1 + 0x2d8) & 0x80000000 | 0x400;
  *(long *)(param_1 + 0x13fb8) = lVar1;
  return;
}




void FUN_00e7c9f8(long param_1,undefined8 param_2)

{
  FUN_0198ab3c(param_1 + 0x58,param_2,param_1 + 0x40);
  return;
}




void FUN_00e7ca08(long param_1,uint param_2)

{
  undefined8 uVar1;
  
  if ((param_2 & 1) == 0) {
    uVar1 = FUN_0198ab78();
  }
  else {
    uVar1 = FUN_0198ab84();
  }
  *(undefined8 *)(param_1 + 0x38) = uVar1;
  return;
}




long FUN_00e7ca38(long param_1)

{
  return param_1 + 0x58;
}




long FUN_00e7ca40(long param_1)

{
  return param_1 + 0x30;
}




long FUN_00e7ca48(long param_1)

{
  return param_1 + 0x58;
}




void FUN_00e7ca50(long param_1,float *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  
  if (((((*param_2 != *(float *)(param_1 + 0x70)) || (param_2[1] != *(float *)(param_1 + 0x74))) ||
       (param_2[2] != *(float *)(param_1 + 0x78))) ||
      (((param_2[3] != *(float *)(param_1 + 0x7c) || (param_2[4] != *(float *)(param_1 + 0x80))) ||
       ((param_2[5] != *(float *)(param_1 + 0x84) ||
        ((param_2[6] != *(float *)(param_1 + 0x88) || (param_2[7] != *(float *)(param_1 + 0x8c))))))
       ))) || ((param_2[8] != *(float *)(param_1 + 0x90) ||
               (((((param_2[9] != *(float *)(param_1 + 0x94) ||
                   (param_2[10] != *(float *)(param_1 + 0x98))) ||
                  (param_2[0xb] != *(float *)(param_1 + 0x9c))) ||
                 ((param_2[0xc] != *(float *)(param_1 + 0xa0) ||
                  (param_2[0xd] != *(float *)(param_1 + 0xa4))))) ||
                ((param_2[0xe] != *(float *)(param_1 + 0xa8) ||
                 (param_2[0xf] != *(float *)(param_1 + 0xac))))))))) {
    uVar2 = *(undefined8 *)(param_2 + 0xc);
    *(undefined8 *)(param_1 + 0xa8) = *(undefined8 *)(param_2 + 0xe);
    *(undefined8 *)(param_1 + 0xa0) = uVar2;
    uVar2 = *(undefined8 *)(param_2 + 8);
    *(undefined8 *)(param_1 + 0x98) = *(undefined8 *)(param_2 + 10);
    *(undefined8 *)(param_1 + 0x90) = uVar2;
    uVar2 = *(undefined8 *)(param_2 + 4);
    *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(param_2 + 6);
    *(undefined8 *)(param_1 + 0x80) = uVar2;
    uVar2 = *(undefined8 *)param_2;
    *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_2 + 2);
    *(undefined8 *)(param_1 + 0x70) = uVar2;
    uVar1 = FUN_0198abd8(param_1 + 0x58);
    if ((uVar1 & 1) != 0) {
      FUN_00e7cbac(param_1);
      return;
    }
  }
  return;
}




void FUN_00e7cbac(long param_1)

{
  float *pfVar1;
  float *pfVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined8 local_60;
  undefined4 uStack_58;
  float fStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined4 local_30;
  long local_28;
  
  lVar3 = tpidr_el0;
  local_28 = *(long *)(lVar3 + 0x28);
  puVar4 = (undefined8 *)FUN_0198ac08(param_1 + 0x58);
  if (puVar4 != (undefined8 *)0x0) {
    lVar6 = 0;
    uStack_50 = (undefined4)puVar4[2];
    uStack_4c = (undefined4)((ulong)puVar4[2] >> 0x20);
    fStack_54 = (float)((ulong)puVar4[1] >> 0x20);
    local_30 = *(undefined4 *)(puVar4 + 1);
    local_40 = uStack_4c;
    local_48 = CONCAT44(uStack_50,fStack_54);
    lVar7 = param_1 + 0x70;
    local_38 = *puVar4;
    fStack_54 = *(float *)(param_1 + 0xa0);
    uStack_50 = *(undefined4 *)(param_1 + 0xa4);
    local_60 = *(undefined8 *)(param_1 + 0xa0);
    uStack_4c = *(undefined4 *)(param_1 + 0xa8);
    uStack_58 = uStack_4c;
    fVar9 = fStack_54;
    fVar10 = fStack_54;
    while( true ) {
      lVar8 = 0;
      do {
        fVar11 = *(float *)(lVar7 + lVar8 * 4);
        pfVar1 = (float *)((long)&local_38 + lVar8);
        pfVar2 = (float *)((long)&local_48 + lVar8);
        lVar8 = lVar8 + 4;
        fVar13 = fVar11 * *pfVar1;
        fVar11 = fVar11 * *pfVar2;
        fVar12 = fVar11;
        if (fVar11 <= fVar13) {
          fVar12 = fVar13;
          fVar13 = fVar11;
        }
        fVar10 = fVar10 + fVar13;
        fVar9 = fVar12 + fVar9;
      } while (lVar8 != 0xc);
      *(float *)((long)&local_60 + lVar6 * 4) = fVar10;
      *(float *)(((ulong)&local_60 | 0xc) + lVar6 * 4) = fVar9;
      lVar6 = lVar6 + 1;
      if (lVar6 == 3) break;
      fVar10 = *(float *)((long)&local_60 + lVar6 * 4);
      fVar9 = *(float *)(((ulong)&local_60 | 0xc) + lVar6 * 4);
      lVar7 = lVar7 + 4;
    }
    uVar5 = FUN_01988c6c();
    FUN_019894ac(uVar5,*(undefined2 *)(param_1 + 0xb0),&local_60,0);
  }
  if (*(long *)(lVar3 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




long FUN_00e7ccd0(long param_1)

{
  return param_1 + 0x70;
}




long FUN_00e7ccd8(long param_1)

{
  return param_1 + 0x48;
}




void FUN_00e7cce0(long param_1,float *param_2)

{
  ulong uVar1;
  
  if (((*(float *)(param_1 + 0xa0) != *param_2) || (*(float *)(param_1 + 0xa4) != param_2[1])) ||
     (*(float *)(param_1 + 0xa8) != param_2[2])) {
    *(float *)(param_1 + 0xa0) = *param_2;
    *(float *)(param_1 + 0xa4) = param_2[1];
    *(float *)(param_1 + 0xa8) = param_2[2];
    uVar1 = FUN_0198abd8(param_1 + 0x58);
    if ((uVar1 & 1) != 0) {
      FUN_00e7cbac(param_1);
      return;
    }
  }
  return;
}




void FUN_00e7cd70(long param_1,undefined4 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined4 local_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  *(undefined4 *)(param_1 + 0xb4) = param_2;
  local_2c = param_2;
  uVar2 = FUN_01988c6c();
  FUN_019894ac(uVar2,*(undefined2 *)(param_1 + 0xb0),0,&local_2c);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e7cdd0(long param_1)

{
  FUN_0198ac34(param_1 + 0x58);
  return;
}




void FUN_00e7cdd8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined4 local_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_2c = *(undefined4 *)(param_1 + 0xb4);
  uVar2 = FUN_01988c6c();
  FUN_019894ac(uVar2,*(undefined2 *)(param_1 + 0xb0),0,&local_2c);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e7ce38(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined4 local_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_2c = 0;
  uVar2 = FUN_01988c6c();
  FUN_019894ac(uVar2,*(undefined2 *)(param_1 + 0xb0),0,&local_2c);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e7ce94(undefined8 param_1,int param_2)

{
  if (param_2 == 1) {
    FUN_00e7cbac();
    return;
  }
  return;
}




void FUN_00e7cea4(long param_1,int param_2)

{
  if (param_2 == 1) {
    FUN_00e7cbac(param_1 + -0x40);
    return;
  }
  return;
}




undefined8 FUN_00e7ceb8(undefined8 param_1)

{
  FUN_00e7c6fc();
  return param_1;
}




void FUN_00e7cedc(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00e7cee4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)();
  return;
}




void FUN_00e7cee8(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  DAT_032105c0 = *(uint *)(param_1 + 0x13fb0);
  *(uint *)(param_1 + 0x13fb0) = DAT_032105c0 + 1;
  lVar2 = param_1 + (ulong)DAT_032105c0 * 0x2e8;
  *(code **)(lVar2 + 0xb0) = FUN_00e7d128;
  *(code **)(lVar2 + 0xb8) = FUN_00e7d140;
  *(uint *)(lVar2 + 0x2d8) = *(uint *)(lVar2 + 0x2d8) & 0x80000000 | 100;
  *(uint *)(lVar2 + 0xa4) = DAT_032105c0;
  *(undefined4 *)(lVar2 + 0xa8) = 0x30;
  *(long *)(param_1 + 0x13fb8) = lVar2;
  FUN_01986780(param_1,0,FUN_00e7cfa4,0);
  FUN_01986780(param_1,1,FUN_00e7d004,0);
  uVar1 = FUN_019888d4();
  FUN_01989130(uVar1,PTR_DAT_02bf2768,FUN_00e7d02c);
  return;
}




void FUN_00e7cfa4(long param_1)

{
  long lVar1;
  undefined1 auVar2 [16];
  
  lVar1 = FUN_00f2e25c(2);
  *(long *)(param_1 + 0x28) = lVar1;
  *(undefined1 *)(lVar1 + 0xc) = 1;
  auVar2 = NEON_fmov(0x3f800000,4);
  *(undefined4 *)(lVar1 + 0x1c) = DAT_03218f38;
  *(undefined8 *)(lVar1 + 0x14) = DAT_03218f30;
  lVar1 = *(long *)(param_1 + 0x28);
  *(long *)(lVar1 + 0x2c) = auVar2._8_8_;
  *(long *)(lVar1 + 0x24) = auVar2._0_8_;
  *(undefined4 *)(lVar1 + 0x34) = 0;
  FUN_00f2e284(lVar1,4,0xffff);
  return;
}

