// functions/00d66 — 32 functions
#include "libGameKindred.h"




undefined8 * FUN_00d66018(long param_1)

{
  uint uVar1;
  ushort uVar2;
  long lVar3;
  undefined8 *puVar4;
  
  uVar2 = *(ushort *)(param_1 + 0x51410);
  if ((ulong)uVar2 == 0xffff) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    lVar3 = param_1 + (ulong)uVar2 * 0x68;
    if (uVar2 == *(ushort *)(param_1 + 0x51412)) {
      uVar2 = 0xffff;
    }
    else {
      uVar2 = *(ushort *)(lVar3 + 0x10);
    }
    *(ushort *)(param_1 + 0x51410) = uVar2;
    puVar4 = (undefined8 *)(lVar3 + 0x17U & 0xfffffffffffffff8);
    *(int *)(param_1 + 0x51414) = *(int *)(param_1 + 0x51414) + 1;
    puVar4[4] = 0;
    puVar4[1] = 0;
    *puVar4 = 0;
    puVar4[3] = 0;
    puVar4[2] = 0;
    FUN_00e5d640(puVar4);
    *puVar4 = &PTR_FUN_0281cd88;
    uVar1 = *(int *)(param_1 + 0x51420) + 1;
    *(uint *)(param_1 + 0x51420) = uVar1;
    if (*(uint *)(param_1 + 0x51424) < uVar1) {
      *(uint *)(param_1 + 0x51424) = uVar1;
    }
  }
  return puVar4;
}




void FUN_00d660fc(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  if (DAT_0313ce08 == 0) {
    FUN_00e6a2fc(0);
  }
  lVar1 = FUN_00d66168(DAT_0313ce08);
  puVar2 = (undefined8 *)(lVar1 + 8);
  *puVar2 = 0;
  if (*(long *)(param_1 + 0x50) == 0) {
    *(undefined8 **)(param_1 + 0x50) = puVar2;
  }
  else {
    **(undefined8 **)(param_1 + 0x58) = puVar2;
  }
  *(undefined8 **)(param_1 + 0x58) = puVar2;
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
  return;
}




undefined8 * FUN_00d66168(long param_1)

{
  uint uVar1;
  ushort uVar2;
  long lVar3;
  undefined8 *puVar4;
  
  uVar2 = *(ushort *)(param_1 + 0x51410);
  if ((ulong)uVar2 == 0xffff) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    lVar3 = param_1 + (ulong)uVar2 * 0x68;
    if (uVar2 == *(ushort *)(param_1 + 0x51412)) {
      uVar2 = 0xffff;
    }
    else {
      uVar2 = *(ushort *)(lVar3 + 0x10);
    }
    *(ushort *)(param_1 + 0x51410) = uVar2;
    puVar4 = (undefined8 *)(lVar3 + 0x17U & 0xfffffffffffffff8);
    *(int *)(param_1 + 0x51414) = *(int *)(param_1 + 0x51414) + 1;
    puVar4[4] = 0;
    puVar4[1] = 0;
    *puVar4 = 0;
    puVar4[3] = 0;
    puVar4[2] = 0;
    FUN_00e5d640(puVar4);
    *puVar4 = &PTR_FUN_0281c398;
    uVar1 = *(int *)(param_1 + 0x51420) + 1;
    *(uint *)(param_1 + 0x51420) = uVar1;
    if (*(uint *)(param_1 + 0x51424) < uVar1) {
      *(uint *)(param_1 + 0x51424) = uVar1;
    }
  }
  return puVar4;
}




void FUN_00d6624c(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  if (DAT_0313ce08 == 0) {
    FUN_00e6a2fc(0);
  }
  lVar1 = FUN_00d662b8(DAT_0313ce08);
  puVar2 = (undefined8 *)(lVar1 + 8);
  *puVar2 = 0;
  if (*(long *)(param_1 + 0x50) == 0) {
    *(undefined8 **)(param_1 + 0x50) = puVar2;
  }
  else {
    **(undefined8 **)(param_1 + 0x58) = puVar2;
  }
  *(undefined8 **)(param_1 + 0x58) = puVar2;
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
  return;
}




undefined8 * FUN_00d662b8(long param_1)

{
  uint uVar1;
  ushort uVar2;
  long lVar3;
  undefined8 *puVar4;
  
  uVar2 = *(ushort *)(param_1 + 0x51410);
  if ((ulong)uVar2 == 0xffff) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    lVar3 = param_1 + (ulong)uVar2 * 0x68;
    if (uVar2 == *(ushort *)(param_1 + 0x51412)) {
      uVar2 = 0xffff;
    }
    else {
      uVar2 = *(ushort *)(lVar3 + 0x10);
    }
    *(ushort *)(param_1 + 0x51410) = uVar2;
    puVar4 = (undefined8 *)(lVar3 + 0x17U & 0xfffffffffffffff8);
    *(int *)(param_1 + 0x51414) = *(int *)(param_1 + 0x51414) + 1;
    puVar4[4] = 0;
    puVar4[1] = 0;
    *puVar4 = 0;
    puVar4[3] = 0;
    puVar4[2] = 0;
    FUN_00e5d640(puVar4);
    *puVar4 = &PTR_FUN_0281c568;
    uVar1 = *(int *)(param_1 + 0x51420) + 1;
    *(uint *)(param_1 + 0x51420) = uVar1;
    if (*(uint *)(param_1 + 0x51424) < uVar1) {
      *(uint *)(param_1 + 0x51424) = uVar1;
    }
  }
  return puVar4;
}




void FUN_00d6639c(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  if (DAT_0313ce08 == 0) {
    FUN_00e6a2fc(0);
  }
  lVar1 = FUN_00d66408(DAT_0313ce08);
  puVar2 = (undefined8 *)(lVar1 + 8);
  *puVar2 = 0;
  if (*(long *)(param_1 + 0x50) == 0) {
    *(undefined8 **)(param_1 + 0x50) = puVar2;
  }
  else {
    **(undefined8 **)(param_1 + 0x58) = puVar2;
  }
  *(undefined8 **)(param_1 + 0x58) = puVar2;
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
  return;
}




undefined8 * FUN_00d66408(long param_1)

{
  uint uVar1;
  ushort uVar2;
  long lVar3;
  undefined8 *puVar4;
  
  uVar2 = *(ushort *)(param_1 + 0x51410);
  if ((ulong)uVar2 == 0xffff) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    lVar3 = param_1 + (ulong)uVar2 * 0x68;
    if (uVar2 == *(ushort *)(param_1 + 0x51412)) {
      uVar2 = 0xffff;
    }
    else {
      uVar2 = *(ushort *)(lVar3 + 0x10);
    }
    *(ushort *)(param_1 + 0x51410) = uVar2;
    puVar4 = (undefined8 *)(lVar3 + 0x17U & 0xfffffffffffffff8);
    *(int *)(param_1 + 0x51414) = *(int *)(param_1 + 0x51414) + 1;
    puVar4[3] = 0;
    puVar4[2] = 0;
    puVar4[5] = 0;
    puVar4[4] = 0;
    puVar4[1] = 0;
    *puVar4 = 0;
    FUN_00d4b204(puVar4);
    uVar1 = *(int *)(param_1 + 0x51420) + 1;
    *(uint *)(param_1 + 0x51420) = uVar1;
    if (*(uint *)(param_1 + 0x51424) < uVar1) {
      *(uint *)(param_1 + 0x51424) = uVar1;
    }
  }
  return puVar4;
}




void FUN_00d664dc(void *param_1)

{
  memset(param_1,0,0xfc);
  *(undefined ***)((long)param_1 + 0x100) = &PTR_FUN_0281de20;
  memset((void *)((long)param_1 + 0x108),0,0x191);
  return;
}




void FUN_00d66520(long *param_1)

{
  long *plVar1;
  long *plVar2;
  
  plVar1 = (long *)*param_1;
  while (plVar1 != (long *)0x0) {
    plVar2 = (long *)(**(code **)(*plVar1 + 0x28))(plVar1);
    (**(code **)(*plVar1 + 0x10))(plVar1);
    plVar1 = plVar2;
  }
  *param_1 = 0;
  plVar1 = (long *)param_1[1];
  while (plVar1 != (long *)0x0) {
    plVar2 = (long *)(**(code **)(*plVar1 + 0x28))(plVar1);
    (**(code **)(*plVar1 + 0x10))(plVar1);
    plVar1 = plVar2;
  }
  param_1[1] = 0;
  plVar1 = (long *)param_1[2];
  while (plVar1 != (long *)0x0) {
    plVar2 = (long *)(**(code **)(*plVar1 + 0x28))(plVar1);
    (**(code **)(*plVar1 + 0x10))(plVar1);
    plVar1 = plVar2;
  }
  param_1[2] = 0;
  plVar1 = (long *)param_1[3];
  while (plVar1 != (long *)0x0) {
    plVar2 = (long *)(**(code **)(*plVar1 + 0x28))(plVar1);
    (**(code **)(*plVar1 + 0x10))(plVar1);
    plVar1 = plVar2;
  }
  param_1[3] = 0;
  plVar1 = (long *)param_1[4];
  while (plVar1 != (long *)0x0) {
    plVar2 = (long *)(**(code **)(*plVar1 + 0x28))(plVar1);
    (**(code **)(*plVar1 + 0x10))(plVar1);
    plVar1 = plVar2;
  }
  param_1[4] = 0;
  plVar1 = (long *)param_1[5];
  while (plVar1 != (long *)0x0) {
    plVar2 = (long *)(**(code **)(*plVar1 + 0x28))(plVar1);
    (**(code **)(*plVar1 + 0x10))(plVar1);
    plVar1 = plVar2;
  }
  param_1[5] = 0;
  plVar1 = (long *)param_1[6];
  while (plVar1 != (long *)0x0) {
    plVar2 = (long *)(**(code **)(*plVar1 + 0x28))(plVar1);
    (**(code **)(*plVar1 + 0x10))(plVar1);
    plVar1 = plVar2;
  }
  param_1[6] = 0;
  return;
}




void FUN_00d666cc(long *param_1)

{
  long *plVar1;
  
  while (param_1 != (long *)0x0) {
    plVar1 = (long *)(**(code **)(*param_1 + 0x28))(param_1);
    (**(code **)(*param_1 + 0x10))(param_1);
    param_1 = plVar1;
  }
  return;
}




void FUN_00d66718(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  uVar1 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar1;
  uVar1 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar1;
  param_1[6] = param_2[6];
  return;
}




void FUN_00d6673c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_02baef70;
  FUN_019892f4(param_1 + 5);
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *param_1 = &PTR_FUN_0281ddc0;
  param_1[5] = &PTR_FUN_0281ddf0;
  memset(param_1 + 0xd,0,0xfc);
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[0x2d] = &PTR_FUN_0281de20;
  memset(param_1 + 0x2e,0,0x191);
  *(undefined4 *)(param_1 + 0x62) = 0;
  *(undefined4 *)(param_1 + 0x61) = 0xffffffff;
  FUN_00d9ff2c((long)param_1 + 0x314);
  param_1[99] = 0;
  param_1[0x66] = FUN_00d66834;
  *(undefined4 *)(param_1 + 100) = 0;
  param_1[0x67] = 0;
  param_1[0x65] = 0xbf8000003f800000;
  *(uint *)(param_1 + 0x68) = *(uint *)(param_1 + 0x68) & 0xfff00000;
  *(ulong *)((long)param_1 + 0x344) =
       *(ulong *)((long)param_1 + 0x344) & 0xffff000000000000 | 0x10000;
  *(uint *)((long)param_1 + 0x34c) = *(uint *)((long)param_1 + 0x34c) & 0xf0000000 | 0x8000000;
  return;
}




float FUN_00d66834(long param_1)

{
  if ((*(byte *)(param_1 + 0x340) >> 4 & 1) == 0) {
    return *(float *)(param_1 + 0x318) / *(float *)(param_1 + 0x31c);
  }
  return 1.0;
}




void FUN_00d66854(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  *param_1 = &PTR_FUN_0281ddc0;
  param_1[5] = &PTR_FUN_0281ddf0;
  FUN_00d66520(param_1 + 0xd);
  if (param_1[10] != 0) {
    lVar1 = param_1[10] + -8;
    while (lVar1 != 0) {
      lVar2 = *(long *)(lVar1 + 8);
      FUN_00e5d65c();
      lVar1 = 0;
      if (lVar2 != 0) {
        lVar1 = lVar2 + -8;
      }
    }
  }
  FUN_0198931c(param_1 + 5);
  FUN_01985bd0(param_1);
  return;
}




void FUN_00d668cc(long param_1)

{
  FUN_00d66854(param_1 + -0x28);
  return;
}




void FUN_00d668d4(void *param_1)

{
  FUN_00d66854();
  operator_delete(param_1);
  return;
}




void FUN_00d668f8(long param_1)

{
  FUN_00d66854((void *)(param_1 + -0x28));
  operator_delete((void *)(param_1 + -0x28));
  return;
}




void FUN_00d66920(long param_1)

{
  long lVar1;
  
  DAT_031a9338 = *(uint *)(param_1 + 0x13fb0);
  *(uint *)(param_1 + 0x13fb0) = DAT_031a9338 + 1;
  lVar1 = param_1 + (ulong)DAT_031a9338 * 0x2e8;
  *(code **)(lVar1 + 0xb0) = FUN_00d6a540;
  *(code **)(lVar1 + 0xb8) = FUN_00d6a564;
  *(uint *)(lVar1 + 0x2d8) = *(uint *)(lVar1 + 0x2d8) & 0x80000000 | 800;
  *(uint *)(lVar1 + 0xa4) = DAT_031a9338;
  *(undefined4 *)(lVar1 + 0xa8) = 0x360;
  *(long *)(param_1 + 0x13fb8) = lVar1;
  FUN_01986780(param_1,4,FUN_00d669e0,0);
  FUN_019867cc(param_1,0x457106fa,FUN_00d66b68,0);
  FUN_019867cc(param_1,0x366b0603,FUN_00d66c24,0);
  return;
}




void FUN_00d669e0(long param_1)

{
  long lVar1;
  ulong uVar2;
  uint uVar3;
  float fVar4;
  undefined1 auStack_50 [40];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (*(int *)(param_1 + 0x310) != 2) {
    uVar3 = *(uint *)(param_1 + 0x340);
    if ((((uVar3 >> 9 & 1) != 0) && ((uVar3 >> 4 & 1) != 0)) &&
       ((*(uint *)(param_1 + 0x344) & 0xffff) < *(uint *)(param_1 + 0x344) >> 0x10)) {
      uVar3 = uVar3 & 0xffffffef;
      *(uint *)(param_1 + 0x340) = uVar3;
      *(undefined4 *)(param_1 + 0x318) = *(undefined4 *)(param_1 + 0x31c);
    }
    if ((uVar3 >> 4 & 1) == 0) {
      if (((uVar3 >> 0xc & 1) == 0) ||
         ((*(code **)(param_1 + 0x338) != (code *)0x0 &&
          (uVar2 = (**(code **)(param_1 + 0x338))(param_1), (uVar2 & 1) != 0)))) {
        fVar4 = (float)FUN_01988c78();
        *(float *)(param_1 + 0x318) = *(float *)(param_1 + 0x318) - fVar4;
      }
      if (*(float *)(param_1 + 0x318) <= 0.0) {
        uVar2 = FUN_00ceab48();
        if (((uVar2 & 1) == 0) || (-1 < *(char *)(param_1 + 0x340))) {
          uVar2 = FUN_00ceab48();
          if (((uVar2 & 1) != 0) || (-1 < *(char *)(param_1 + 0x340))) {
            FUN_00d66d3c(param_1);
          }
        }
        else {
          FUN_00d07d9c(auStack_50,
                       *(undefined4 *)(*(long *)(*(long *)(param_1 + 0x10) + 0x10) + 0x260),
                       *(undefined4 *)(param_1 + 0x30c));
          FUN_00ce20fc(auStack_50);
        }
      }
    }
    if (*(int *)(param_1 + 0x310) == 0) {
      fVar4 = (float)FUN_01988c78();
      *(float *)(param_1 + 800) = *(float *)(param_1 + 800) - fVar4;
      fVar4 = (float)FUN_01988c78();
      *(float *)(param_1 + 0x324) = fVar4 + *(float *)(param_1 + 0x324);
      if (*(float *)(param_1 + 800) <= 0.0) {
        FUN_00d673a4(param_1,*(undefined8 *)(param_1 + 0x90));
        FUN_00d67440(param_1,PTR_s_onBuffIntervalName_02bed520);
        *(undefined4 *)(param_1 + 0x324) = 0;
        *(float *)(param_1 + 800) = *(float *)(param_1 + 0x328) + *(float *)(param_1 + 800);
      }
      uVar3 = *(uint *)(param_1 + 0x340);
      if ((uVar3 >> 5 & 1) != 0) {
        FUN_00d66ea0(param_1);
        uVar3 = *(uint *)(param_1 + 0x340);
      }
      if ((uVar3 >> 6 & 1) != 0) {
        FUN_00d66edc(param_1);
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




bool FUN_00d66ce0(long param_1,uint param_2)

{
  return (param_2 & *(uint *)(param_1 + 0x340) >> 4 & 0xffff) != 0;
}




undefined2 FUN_00d66cf4(long param_1)

{
  return *(undefined2 *)(param_1 + 0x344);
}




undefined2 FUN_00d66cfc(long param_1)

{
  return *(undefined2 *)(param_1 + 0x346);
}




void FUN_00d66d04(long param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(param_1 + 0x340);
  uVar1 = param_2 | uVar2 >> 4;
  if ((param_3 & 1) == 0) {
    uVar1 = ~param_2 & uVar2 >> 4;
  }
  *(uint *)(param_1 + 0x340) = uVar2 & 0xfff00000 | uVar2 & 0xf | (uVar1 & 0xffff) << 4;
  return;
}




undefined8 FUN_00d66d28(long param_1)

{
  return *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x10);
}




undefined4 FUN_00d66d34(long param_1)

{
  return *(undefined4 *)(param_1 + 0x30c);
}




void FUN_00d66d3c(long param_1)

{
  uint uVar1;
  uint uVar2;
  float fVar3;
  
  if (*(int *)(param_1 + 0x310) - 1U < 2) {
    return;
  }
  *(undefined4 *)(param_1 + 0x318) = 0;
  if ((*(byte *)(param_1 + 0x341) & 1) != 0) {
    FUN_00d673a4(param_1,*(undefined8 *)(param_1 + 0x90));
    FUN_00d67440(param_1,PTR_s_onBuffIntervalName_02bed520);
  }
  FUN_00d6718c(param_1);
  if (0.0 < *(float *)(param_1 + 0x318)) {
    return;
  }
  uVar1 = *(uint *)(param_1 + 0x340);
  if ((uVar1 >> 10 & 1) == 0) {
    if ((uVar1 >> 0xb & 1) == 0) {
      if ((uVar1 >> 9 & 1) == 0) {
        FUN_00d67020(param_1);
        *(undefined4 *)(param_1 + 0x310) = 2;
        return;
      }
      uVar2 = *(uint *)(param_1 + 0x344);
      uVar1 = uVar2 & 0xffff;
      if (uVar1 < uVar2 >> 0x10) {
        FUN_00d67518(param_1,uVar1 + 1,1);
        uVar2 = *(uint *)(param_1 + 0x344);
        uVar1 = uVar2 & 0xffff;
      }
      if (uVar1 < uVar2 >> 0x10) goto LAB_00d66dec;
    }
    else {
      FUN_00d67218(param_1,0,1);
      if (*(int *)(param_1 + 0x310) == 2) {
        return;
      }
    }
    *(uint *)(param_1 + 0x340) = *(uint *)(param_1 + 0x340) | 0x10;
  }
  else {
    fVar3 = (float)(int)(*(ushort *)(param_1 + 0x344) - 1);
    if (fVar3 <= 0.0) {
      fVar3 = 0.0;
    }
    FUN_00d67218(param_1,(int)fVar3,1);
    if (*(int *)(param_1 + 0x310) == 2) {
      return;
    }
LAB_00d66dec:
    *(undefined4 *)(param_1 + 0x318) = *(undefined4 *)(param_1 + 0x31c);
  }
  return;
}




void FUN_00d66e68(long param_1)

{
  FUN_00d673a4(param_1,*(undefined8 *)(param_1 + 0x90));
  FUN_00d67440(param_1,PTR_s_onBuffIntervalName_02bed520);
  return;
}




void FUN_00d66e98(long param_1)

{
  *(undefined4 *)(param_1 + 0x324) = 0;
  return;
}




void FUN_00d66ea0(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)(*(long *)(param_1 + 0x10) + 0x10) + 0x18);
  while( true ) {
    if (lVar1 == 0) {
      return;
    }
    if (*(int *)(*(long *)(lVar1 + 8) + 0xa4) == DAT_0312ec00) break;
    lVar1 = *(long *)(lVar1 + 0x20);
  }
  FUN_00d7d1d4(lVar1,4);
  return;
}




void FUN_00d66edc(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)(*(long *)(param_1 + 0x10) + 0x10) + 0x18);
  while( true ) {
    if (lVar1 == 0) {
      return;
    }
    if (*(int *)(*(long *)(lVar1 + 8) + 0xa4) == DAT_0312ec00) break;
    lVar1 = *(long *)(lVar1 + 0x20);
  }
  FUN_00d7d1d4(lVar1,8);
  return;
}




void FUN_00d66f18(float param_1,long param_2,undefined4 param_3,undefined8 param_4,long param_5,
                 undefined4 param_6,uint param_7)

{
  uint uVar1;
  uint uVar2;
  ushort uVar3;
  long lVar4;
  ulong uVar5;
  undefined4 local_50 [2];
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  *(long *)(param_2 + 0x40) = param_5;
  *(undefined4 *)(param_2 + 0x308) = param_3;
  thunk_FUN_00d9ff34(local_50,param_4);
  *(float *)(param_2 + 0x318) = param_1;
  *(float *)(param_2 + 0x31c) = param_1;
  *(undefined4 *)(param_2 + 0x30c) = param_6;
  *(undefined4 *)(param_2 + 0x314) = local_50[0];
  uVar3 = *(ushort *)(param_5 + 0x34);
  uVar5 = *(ulong *)(param_2 + 0x344);
  uVar1 = (uint)uVar3;
  if (param_7 <= uVar3) {
    uVar1 = param_7;
  }
  *(ulong *)(param_2 + 0x344) =
       uVar5 & 0xffff000000000000 |
       uVar5 & 0xffff | (ulong)uVar3 << 0x10 | (ulong)(uVar1 & 0xffff) << 0x20;
  uVar2 = *(uint *)(param_2 + 0x340);
  uVar1 = uVar2 >> 4 | 1;
  if (0.0 <= param_1) {
    uVar1 = uVar2 >> 4 & 0xfffe;
  }
  *(uint *)(param_2 + 0x340) = uVar2 & 0xfff00000 | uVar2 & 0xf | (uVar1 & 0xffff) << 4;
  if (*(long *)(lVar4 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d66ff8(long param_1)

{
  FUN_00d67020();
  *(undefined4 *)(param_1 + 0x310) = 2;
  return;
}

