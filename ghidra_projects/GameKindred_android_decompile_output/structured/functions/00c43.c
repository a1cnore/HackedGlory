// functions/00c43 — 23 functions
#include "libGameKindred.h"




void FUN_00c4310c(long param_1)

{
  if (*(long **)(param_1 + 0x630) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00c4311c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x630) + 8))();
    return;
  }
  return;
}




void FUN_00c43124(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027fbbe8;
  FUN_00c43250();
  if ((*(byte *)(param_1 + 0x70e) & 1) != 0) {
    operator_delete((void *)param_1[0x710]);
  }
  FUN_00ab0d88(param_1 + 0x4ab);
  if ((void *)param_1[0x4aa] != (void *)0x0) {
    operator_delete__((void *)param_1[0x4aa]);
    param_1[0x4aa] = 0;
    param_1[0x4a9] = 0;
  }
  if ((void *)param_1[0x4a8] != (void *)0x0) {
    operator_delete__((void *)param_1[0x4a8]);
    param_1[0x4a8] = 0;
    param_1[0x4a7] = 0;
  }
  FUN_00f01868(param_1 + 0x496);
  FUN_00f01868(param_1 + 0x485);
  FUN_00f01868(param_1 + 0x474);
  FUN_00f0d3a4(param_1 + 0x44e);
  FUN_00f0d3a4(param_1 + 0x428);
  FUN_00f0d3a4(param_1 + 0x402);
  FUN_00f0d3a4(param_1 + 0x3dc);
  FUN_00f0d3a4(param_1 + 0x3b6);
  FUN_00f13d08(param_1 + 0x39d);
  param_1[0x37f] = &PTR_FUN_028266f0;
  param_1[0x396] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x399);
  FUN_00f13d08(param_1 + 0x37f);
  FUN_009c7fa8(param_1 + 199);
  FUN_00c22f2c(param_1);
  return;
}




void FUN_00c43250(long param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = *(long **)(param_1 + 0x2540);
  if (*(uint *)(param_1 + 0x2538) != 0) {
    lVar2 = (ulong)*(uint *)(param_1 + 0x2538) << 3;
    do {
      if ((long *)*plVar1 != (long *)0x0) {
        (**(code **)(*(long *)*plVar1 + 8))();
      }
      lVar2 = lVar2 + -8;
      *plVar1 = 0;
      plVar1 = plVar1 + 1;
    } while (lVar2 != 0);
    plVar1 = *(long **)(param_1 + 0x2540);
  }
  if (plVar1 != (long *)0x0) {
    *(undefined4 *)(param_1 + 0x2538) = 0;
  }
  plVar1 = *(long **)(param_1 + 0x2550);
  if (*(uint *)(param_1 + 0x2548) != 0) {
    lVar2 = (ulong)*(uint *)(param_1 + 0x2548) << 3;
    do {
      if ((long *)*plVar1 != (long *)0x0) {
        (**(code **)(*(long *)*plVar1 + 8))();
      }
      lVar2 = lVar2 + -8;
      *plVar1 = 0;
      plVar1 = plVar1 + 1;
    } while (lVar2 != 0);
    plVar1 = *(long **)(param_1 + 0x2550);
  }
  if (plVar1 != (long *)0x0) {
    *(undefined4 *)(param_1 + 0x2548) = 0;
  }
  return;
}




void FUN_00c432ec(void *param_1)

{
  FUN_00c43124();
  operator_delete(param_1);
  return;
}




void FUN_00c43310(undefined1 param_1 [16],float param_2,long *param_3)

{
  long lVar1;
  float local_48;
  float fStack_44;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00c262a8();
  local_48 = (float)(**(code **)(*param_3 + 0x48))(param_3);
  fStack_44 = param_2;
  FUN_00f13f18(param_3 + 0x37f,&local_48);
  if ((*(float *)(param_3 + 0xcf) != local_48 * 0.5) ||
     (*(float *)((long)param_3 + 0x67c) != fStack_44 * 0.5)) {
    param_3[0xcf] = CONCAT44(fStack_44 * 0.5,local_48 * 0.5);
    FUN_0091ada4(param_3 + 199);
  }
  local_40 = 0x3f0000003f000000;
  (**(code **)(param_3[199] + 0x28))(param_3 + 199,&local_40);
  (**(code **)(*param_3 + 0x100))(param_3);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c433f4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 long param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined4 param_12,
                 undefined4 param_13,undefined4 param_14,undefined4 param_15)

{
  long lVar1;
  undefined8 local_88;
  void *local_80;
  long local_78;
  
  lVar1 = tpidr_el0;
  local_78 = *(long *)(lVar1 + 0x28);
  FUN_00e70570(&local_88);
  FUN_00c43540(param_5,&local_88,param_7);
  if (local_80 != (void *)0x0) {
    operator_delete__(local_80);
    local_88 = 0;
    local_80 = (void *)0x0;
  }
  FUN_00e70570(&local_88,param_8);
  FUN_00c435a4(param_5,&local_88,param_9);
  if (local_80 != (void *)0x0) {
    operator_delete__(local_80);
    local_88 = 0;
    local_80 = (void *)0x0;
  }
  FUN_00e70570(&local_88,param_10);
  FUN_00c43608(param_5,&local_88,param_11);
  if (local_80 != (void *)0x0) {
    operator_delete__(local_80);
    local_88 = 0;
    local_80 = (void *)0x0;
  }
  *(undefined4 *)(param_5 + 0x3890) = param_3;
  *(undefined4 *)(param_5 + 0x3894) = param_4;
  *(undefined4 *)(param_5 + 0x3898) = param_14;
  *(undefined4 *)(param_5 + 0x389c) = param_15;
  *(undefined4 *)(param_5 + 0x38a0) = param_12;
  *(undefined4 *)(param_5 + 0x38a4) = param_13;
  if (*(int *)(param_5 + 0x618) == 2) {
    *(undefined4 *)(param_5 + 0x3888) = param_1;
    *(undefined4 *)(param_5 + 0x388c) = param_2;
  }
  if (*(long *)(lVar1 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c43540(long param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  
  FUN_00f0d75c(param_1 + 0x1db0);
  FUN_00f0d7fc(param_1 + 0x1db0,param_3);
  uVar1 = FUN_00e70b04(param_2);
  *(uint *)(param_1 + 0x1e34) =
       *(uint *)(param_1 + 0x1e34) & 0xfffffff8 |
       *(uint *)(param_1 + 0x1e34) & 3 | (~uVar1 & 1) << 2;
  return;
}




void FUN_00c435a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  
  FUN_00f0d75c(param_1 + 0x1ee0);
  FUN_00f0d7fc(param_1 + 0x1ee0,param_3);
  uVar1 = FUN_00e70b04(param_2);
  *(uint *)(param_1 + 0x1f64) =
       *(uint *)(param_1 + 0x1f64) & 0xfffffff8 |
       *(uint *)(param_1 + 0x1f64) & 3 | (~uVar1 & 1) << 2;
  return;
}




void FUN_00c43608(long param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  
  FUN_00f0d75c(param_1 + 0x2010);
  FUN_00f0d7fc(param_1 + 0x2010,param_3);
  uVar1 = FUN_00e70b04(param_2);
  *(uint *)(param_1 + 0x2094) =
       *(uint *)(param_1 + 0x2094) & 0xfffffff8 |
       *(uint *)(param_1 + 0x2094) & 3 | (~uVar1 & 1) << 2;
  return;
}




void FUN_00c4366c(undefined4 param_1,undefined4 param_2,long param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  *(undefined4 *)(param_3 + 0x3890) = param_1;
  *(undefined4 *)(param_3 + 0x3894) = param_2;
  *(undefined4 *)(param_3 + 0x3898) = param_4;
  *(undefined4 *)(param_3 + 0x389c) = param_5;
  *(undefined4 *)(param_3 + 0x38a0) = param_6;
  *(undefined4 *)(param_3 + 0x38a4) = param_7;
  return;
}




void FUN_00c43688(undefined8 param_1)

{
  FUN_00c436b4();
  FUN_00c436d8(param_1);
  FUN_00c43844(param_1);
  return;
}




void FUN_00c436b4(long param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x618);
  if (iVar1 == 2) {
    FUN_00c43f5c();
    return;
  }
  if ((iVar1 != 1) && (iVar1 != 0)) {
    return;
  }
  FUN_00c43c60();
  return;
}




void FUN_00c436d8(undefined1 param_1 [16],ulong param_2,long param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  long lVar12;
  
  if (*(uint *)(param_3 + 0x2538) != 0) {
    puVar5 = *(undefined8 **)(param_3 + 0x2540);
    puVar1 = puVar5 + *(uint *)(param_3 + 0x2538);
    do {
      fVar10 = (float)param_2;
      plVar4 = (long *)*puVar5;
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x90))(plVar4);
        FUN_00f0c030(0,plVar4,0);
        fVar6 = 50.0;
        if (*(uint *)(param_3 + 0x2548) != 0) {
          plVar2 = *(long **)(param_3 + 0x2550);
          lVar3 = (ulong)*(uint *)(param_3 + 0x2548) << 3;
          do {
            if ((*plVar2 != 0) && (fVar6 = 158.0, *(int *)(*plVar2 + 0x358) == 1)) break;
            lVar3 = lVar3 + -8;
            plVar2 = plVar2 + 1;
            fVar6 = 50.0;
          } while (lVar3 != 0);
        }
        fVar7 = (float)FUN_00c45390(param_3);
        lVar3 = plVar4[0x1b];
        param_2 = CONCAT44(fVar6,0x42480000);
        fVar8 = (float)(**(code **)(*plVar4 + 0x48))(plVar4);
        lVar12 = plVar4[0x1c];
        fVar11 = (float)param_2;
        fVar9 = (float)(**(code **)(*plVar4 + 0x48))(plVar4);
        fVar7 = ((fVar7 * (float)lVar3 + 50.0) - fVar8 * (float)lVar12) + fVar9 * (float)plVar4[10];
        fVar10 = ((fVar6 + fVar10 * (float)((ulong)lVar3 >> 0x20)) -
                 fVar11 * (float)((ulong)lVar12 >> 0x20)) +
                 (float)param_2 * (float)((ulong)plVar4[10] >> 0x20);
        if ((*(float *)(plVar4 + 8) != fVar7) ||
           (param_2 = (ulong)(uint)*(float *)((long)plVar4 + 0x44),
           *(float *)((long)plVar4 + 0x44) != fVar10)) {
          plVar4[8] = CONCAT44(fVar10,fVar7);
          FUN_0091ada4(plVar4);
        }
      }
      puVar5 = puVar5 + 1;
    } while (puVar5 != puVar1);
  }
  return;
}




void FUN_00c43844(undefined1 param_1 [16],ulong param_2,long *param_3)

{
  int iVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined4 uVar5;
  ulong uVar6;
  float fVar7;
  float fVar8;
  
  if (*(uint *)(param_3 + 0x4a9) != 0) {
    puVar3 = (undefined8 *)param_3[0x4aa];
    lVar4 = (ulong)*(uint *)(param_3 + 0x4a9) << 3;
    do {
      plVar2 = (long *)*puVar3;
      if (plVar2 != (long *)0x0) {
        iVar1 = (int)plVar2[0x6b];
        if (iVar1 == 2) {
          (**(code **)(*param_3 + 0x48))(param_3);
          uVar6 = 0x42d80000;
          FUN_00af6d64(plVar2);
          fVar8 = (float)(**(code **)(*param_3 + 0x48))(param_3);
          *(float *)((long)plVar2 + 0x33c) = fVar8 * 0.5;
          *(undefined4 *)(plVar2 + 0x68) = 0x41d80000;
          (**(code **)(*param_3 + 0x48))(param_3);
          param_2 = uVar6;
          (**(code **)(*plVar2 + 0x48))(plVar2);
          fVar7 = *(float *)((long)plVar2 + 0x44);
          fVar8 = (float)uVar6 - (float)param_2;
LAB_00c43974:
          if (fVar7 != fVar8) {
            *(float *)((long)plVar2 + 0x44) = fVar8;
LAB_00c43980:
            FUN_0091ada4(plVar2);
          }
        }
        else if (iVar1 == 1) {
          uVar5 = (**(code **)(*param_3 + 0x48))(param_3);
          FUN_00af6d64(uVar5,0x42d80000,plVar2);
          fVar8 = (float)(**(code **)(*param_3 + 0x48))(param_3);
          param_2 = (ulong)(uint)*(float *)((long)plVar2 + 0x44);
          *(float *)((long)plVar2 + 0x33c) = fVar8 * 0.5;
          *(undefined4 *)(plVar2 + 0x68) = 0x41d80000;
          if (*(float *)((long)plVar2 + 0x44) != 0.0) {
            *(undefined4 *)((long)plVar2 + 0x44) = 0;
            goto LAB_00c43980;
          }
        }
        else if (iVar1 == 0) {
          fVar8 = *(float *)((long)plVar2 + 0x354);
          (**(code **)(*param_3 + 0x48))(param_3);
          fVar7 = *(float *)((long)plVar2 + 0x44);
          fVar8 = fVar8 * (float)param_2;
          goto LAB_00c43974;
        }
        FUN_00af5830(plVar2);
      }
      lVar4 = lVar4 + -8;
      puVar3 = puVar3 + 1;
    } while (lVar4 != 0);
  }
  return;
}




void FUN_00c439b8(long param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  ushort *puVar3;
  undefined8 uVar4;
  ushort uVar5;
  
  lVar1 = param_1 + 0x23a0;
  FUN_00f01980(lVar1);
  if ((param_2 & 1) == 0) {
    uVar4 = FUN_00efee28(0,0x3e4ccccd,FUN_00ab3980);
    FUN_00f022a0(lVar1,uVar4);
    lVar2 = DAT_03210d00;
    uVar5 = *(ushort *)(DAT_03210d00 + 0x20010);
    if ((ulong)uVar5 == 0xffff) {
      puVar3 = (ushort *)0x0;
    }
    else {
      puVar3 = (ushort *)(DAT_03210d00 + (ulong)uVar5 * 0x40 + 0x10);
      if (uVar5 == *(ushort *)(DAT_03210d00 + 0x20012)) {
        uVar5 = 0xffff;
      }
      else {
        uVar5 = *puVar3;
      }
      *(ushort *)(DAT_03210d00 + 0x20010) = uVar5;
      *(int *)(lVar2 + 0x20014) = *(int *)(lVar2 + 0x20014) + 1;
      FUN_00efc8e8(puVar3);
      *(undefined ***)puVar3 = &PTR_FUN_02825148;
      *(int *)(lVar2 + 0x20020) = *(int *)(lVar2 + 0x20020) + 1;
    }
  }
  else {
    *(uint *)(param_1 + 0x2424) = *(uint *)(param_1 + 0x2424) | 4;
    puVar3 = (ushort *)FUN_00efee28(0x3f800000,0x3e4ccccd,FUN_00ab3980);
  }
  FUN_00f022a0(lVar1,puVar3);
  return;
}




void FUN_00c43aec(undefined8 *param_1)

{
  long *plVar1;
  uint *puVar2;
  long lVar3;
  
  *param_1 = &PTR_FUN_027fbd08;
  puVar2 = (uint *)(param_1 + 0x19);
  plVar1 = (long *)param_1[0x1a];
  if (*puVar2 != 0) {
    lVar3 = (ulong)*puVar2 << 3;
    do {
      if ((long *)*plVar1 != (long *)0x0) {
        (**(code **)(*(long *)*plVar1 + 8))();
      }
      lVar3 = lVar3 + -8;
      *plVar1 = 0;
      plVar1 = plVar1 + 1;
    } while (lVar3 != 0);
    plVar1 = (long *)param_1[0x1a];
  }
  if (plVar1 != (long *)0x0) {
    *puVar2 = 0;
    operator_delete__(plVar1);
    puVar2[0] = 0;
    puVar2[1] = 0;
    param_1[0x1a] = 0;
  }
  FUN_00f13d08(param_1);
  return;
}




void FUN_00c43b70(void *param_1)

{
  FUN_00c43aec();
  operator_delete(param_1);
  return;
}




void FUN_00c43b94(long param_1)

{
  if (*(undefined8 **)(param_1 + 0x630) != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00c43ba4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)**(undefined8 **)(param_1 + 0x630))();
    return;
  }
  return;
}




void FUN_00c43bac(long param_1)

{
  if (*(long **)(param_1 + 0x630) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00c43bbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x630) + 8))();
    return;
  }
  return;
}




void FUN_00c43bc4(long param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  
  if ((param_3 != 0) && (plVar1 = *(long **)(param_1 + 0x630), plVar1 != (long *)0x0)) {
    (**(code **)(*plVar1 + 0x10))
              (plVar1,param_3 + 0x16b0,*(undefined1 *)(param_3 + 0x16da),
               *(undefined1 *)(param_3 + 0x16db));
  }
  FUN_00f0490c(param_2);
  return;
}




void FUN_00c43c18(long param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  
  if ((param_3 != 0) && (plVar1 = *(long **)(param_1 + 0x630), plVar1 != (long *)0x0)) {
    (**(code **)(*plVar1 + 0x18))(plVar1,param_3 + 0x15d8,param_3 + 0x15c0);
  }
  FUN_00f0490c(param_2);
  return;
}




void FUN_00c43c60(long *param_1)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 auStack_78 [16];
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  iVar2 = (int)param_1[0x713];
  if (iVar2 + -1 == 0 || iVar2 < 1) {
    fVar7 = 0.0;
  }
  else {
    fVar7 = (float)(iVar2 + -1) * 0.0;
  }
  lVar4 = param_1[0x714];
  fVar10 = (float)iVar2 * 302.0 + fVar7 + -100.0;
  fVar11 = (float)(int)lVar4;
  fVar7 = (float)FUN_00c26a34();
  fVar8 = fVar11 * 0.0;
  if ((int)lVar4 < 1) {
    fVar8 = 0.0;
  }
  fVar7 = fVar7 * fVar11 + fVar8 + 50.0;
  fVar8 = fVar7 + 6.0;
  if (*(float *)(param_1 + 0x712) == 1.0) {
    uVar6 = 1;
  }
  else if (*(float *)(param_1 + 0x712) == 0.5) {
    fVar10 = (float)NEON_ucvtf(*(undefined4 *)((long)param_1 + 0x624));
    fVar7 = (float)FUN_00c26a34();
    fVar8 = 0.0;
    uVar6 = 3;
    fVar10 = fVar7 * fVar10 + (float)(*(int *)((long)param_1 + 0x624) - 1) * 0.0;
    fVar7 = 0.0;
  }
  else {
    uVar6 = 0;
  }
  fVar11 = (float)*(int *)((long)param_1 + 0x389c);
  fVar9 = fVar11 * 0.0;
  if (*(int *)((long)param_1 + 0x389c) < 1) {
    fVar9 = 0.0;
  }
  if (*(float *)((long)param_1 + 0x3894) == 0.0) {
    fVar11 = (float)*(int *)((long)param_1 + 0x38a4);
    fVar9 = fVar11 * 0.0;
    if (*(int *)((long)param_1 + 0x38a4) < 1) {
      fVar9 = 0.0;
    }
    fVar11 = fVar11 * 151.0 + fVar9 + 34.0;
  }
  else if (*(float *)((long)param_1 + 0x3894) == 0.5) {
    (**(code **)(*param_1 + 0x48))(param_1);
    fVar11 = fVar11 * 0.5;
  }
  else {
    fVar11 = fVar11 * 151.0 + fVar9 + -50.0;
  }
  FUN_00f08be8(param_1 + 0x3d0);
  uVar5 = FUN_00e70b04();
  if ((uVar5 & 1) == 0) {
    plVar1 = param_1 + 0x3b6;
    if (*(float *)(param_1 + 0x3be) != fVar7) {
      *(float *)(param_1 + 0x3be) = fVar7;
      FUN_0091ada4(plVar1);
    }
    FUN_00f0dad0(fVar10,plVar1,1);
    FUN_00f0dac8(plVar1,uVar6);
  }
  plVar1 = param_1 + 0x3dc;
  if (*(float *)(param_1 + 0x3e4) != fVar8) {
    *(float *)(param_1 + 0x3e4) = fVar8;
    FUN_0091ada4(plVar1);
  }
  FUN_00f0dad0(fVar10,plVar1,1);
  FUN_00f0dac8(plVar1,uVar6);
  plVar1 = param_1 + 0x402;
  if (*(float *)(param_1 + 0x40a) != fVar7) {
    *(float *)(param_1 + 0x40a) = fVar7;
    FUN_0091ada4(plVar1);
  }
  FUN_00f0dad0(fVar10,plVar1,1);
  FUN_00f0dac8(plVar1,uVar6);
  plVar1 = param_1 + 0x39d;
  FUN_00f0bc10(0,*(undefined4 *)((long)param_1 + 0x3894),0,auStack_78);
  FUN_00f0c168(plVar1,auStack_78);
  (**(code **)(param_1[0x39d] + 0x90))(plVar1);
  if (*(float *)((long)param_1 + 0x1d2c) != fVar11) {
    *(float *)((long)param_1 + 0x1d2c) = fVar11;
    FUN_0091ada4(plVar1);
  }
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c43f5c(undefined1 param_1 [16],float param_2,long param_3)

{
  long lVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float local_b8;
  float fStack_b4;
  float local_b0 [2];
  long local_a8;
  
  lVar4 = tpidr_el0;
  local_a8 = *(long *)(lVar4 + 0x28);
  fVar9 = (float)FUN_00c45390();
  fVar13 = 50.0;
  if (*(uint *)(param_3 + 0x2548) != 0) {
    plVar6 = *(long **)(param_3 + 0x2550);
    lVar7 = (ulong)*(uint *)(param_3 + 0x2548) << 3;
    do {
      if ((*plVar6 != 0) && (fVar13 = 158.0, *(int *)(*plVar6 + 0x358) == 1)) break;
      lVar7 = lVar7 + -8;
      plVar6 = plVar6 + 1;
      fVar13 = 50.0;
    } while (lVar7 != 0);
  }
  fVar15 = *(float *)(param_3 + 0x3890);
  fVar16 = *(float *)(param_3 + 0x3894);
  local_b0[1] = 0.0;
  iVar3 = *(int *)(param_3 + 0x3898);
  fVar12 = 0.0;
  if (1 < iVar3) {
    fVar12 = (float)(iVar3 + -1) * 0.0;
  }
  fVar17 = 1.0;
  fVar14 = (float)iVar3 * 302.0 + fVar12 + -100.0;
  local_b0[0] = fVar15;
  if (fVar15 == 1.0) {
    FUN_00f0dac8(param_3 + 0x1ee0,1);
    FUN_00f0dac8(param_3 + 0x1db0,1);
    uVar5 = 1;
  }
  else {
    fVar17 = 0.5;
    if (fVar15 != 0.5) {
      FUN_00f0dac8(param_3 + 0x1ee0,0);
      FUN_00f0dac8(param_3 + 0x1db0,0);
      FUN_00f0dac8(param_3 + 0x2010,0);
      fVar17 = 0.0;
      local_b0[0] = 0.0;
      goto LAB_00c440d4;
    }
    FUN_00f0dac8(param_3 + 0x1ee0,3);
    FUN_00f0dac8(param_3 + 0x1db0,3);
    uVar5 = 3;
  }
  FUN_00f0dac8(param_3 + 0x2010,uVar5);
LAB_00c440d4:
  plVar8 = (long *)(param_3 + 0x1db0);
  plVar6 = (long *)(param_3 + 0x1ee0);
  FUN_00f0dad0(fVar14,plVar8,1);
  FUN_00f0d378(plVar8,PTR_s_build___Fonts_Brandon_Bold_40_fo_02be9c80);
  FUN_00f0dad0(fVar14,plVar6,1);
  FUN_00f0d378(plVar6,PTR_s_build___Fonts_Brandon_Bold_60_fo_02be9c90);
  FUN_00f0dad0(fVar14,(long *)(param_3 + 0x2010),1);
  lVar7 = param_3 + 0x1db0;
  fVar10 = (float)FUN_00f01c20(lVar7);
  lVar1 = param_3 + 0x1ee0;
  fVar14 = (float)FUN_00f01c20(lVar1);
  lVar2 = param_3 + 0x2010;
  fVar11 = (float)FUN_00f01c20(lVar2);
  if (fVar14 <= fVar11) {
    fVar14 = fVar11;
  }
  if (fVar10 <= fVar14) {
    fVar10 = fVar14;
  }
  fVar17 = fVar17 * fVar10;
  fVar14 = 0.0;
  if ((*(byte *)(param_3 + 0x1e34) >> 2 & 1) != 0) {
    if ((*(float *)(param_3 + 0x1df0) != fVar17) || (*(float *)(param_3 + 0x1df4) != 0.0)) {
      *(float *)(param_3 + 0x1df0) = fVar17;
      *(undefined4 *)(param_3 + 0x1df4) = 0;
      FUN_0091ada4(lVar7);
    }
    (**(code **)(*plVar8 + 0x28))(lVar7,local_b0);
    *(uint *)(param_3 + 0x1e34) = *(uint *)(param_3 + 0x1e34) | 0x10;
    FUN_00f01c20(lVar7);
    fVar14 = fVar12 + 0.0;
  }
  if ((*(byte *)(param_3 + 0x1f64) >> 2 & 1) != 0) {
    if ((*(float *)(param_3 + 0x1f20) != fVar17) || (*(float *)(param_3 + 0x1f24) != fVar14)) {
      *(float *)(param_3 + 0x1f20) = fVar17;
      *(float *)(param_3 + 0x1f24) = fVar14;
      FUN_0091ada4(lVar1);
    }
    (**(code **)(*plVar6 + 0x28))(lVar1,local_b0);
    *(uint *)(param_3 + 0x1f64) = *(uint *)(param_3 + 0x1f64) | 0x10;
    FUN_00f01c20(lVar1);
    fVar14 = fVar14 + fVar12;
  }
  if ((*(byte *)(param_3 + 0x2094) >> 2 & 1) != 0) {
    if ((*(float *)(param_3 + 0x2050) != fVar17) || (*(float *)(param_3 + 0x2054) != fVar14)) {
      *(float *)(param_3 + 0x2050) = fVar17;
      *(float *)(param_3 + 0x2054) = fVar14;
      FUN_0091ada4(lVar2);
    }
    (**(code **)(*(long *)(param_3 + 0x2010) + 0x28))(lVar2,local_b0);
    *(uint *)(param_3 + 0x2094) = *(uint *)(param_3 + 0x2094) | 0x10;
    FUN_00f01c20(lVar2);
    fVar14 = fVar14 + fVar12;
  }
  fVar9 = (fVar9 * *(float *)(param_3 + 0x3888) - fVar15 * fVar10) + 50.0;
  fVar13 = fVar13 + (param_2 * *(float *)(param_3 + 0x388c) - fVar16 * fVar14);
  local_b8 = fVar10;
  fStack_b4 = fVar14;
  if ((*(float *)(param_3 + 0x1d28) != fVar9) || (*(float *)(param_3 + 0x1d2c) != fVar13)) {
    *(float *)(param_3 + 0x1d28) = fVar9;
    *(float *)(param_3 + 0x1d2c) = fVar13;
    FUN_0091ada4(param_3 + 0x1ce8);
  }
  FUN_00f13f18(param_3 + 0x1ce8,&local_b8);
  if (*(long *)(lVar4 + 0x28) == local_a8) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

