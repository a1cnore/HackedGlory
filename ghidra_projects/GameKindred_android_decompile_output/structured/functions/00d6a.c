// functions/00d6a — 52 functions
#include "libGameKindred.h"




void FUN_00d6a01c(long param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  uVar1 = (*(code *)**(undefined8 **)(param_1 + 0x168))(param_1 + 0x168,PTR_s___VAR2_INT___02bed6f8)
  ;
  puVar2 = (undefined4 *)(**(code **)(*(long *)(param_1 + 0x168) + 0x10))(param_1 + 0x168,uVar1);
  *puVar2 = param_2;
  return;
}




undefined4 FUN_00d6a078(long param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  puVar1 = PTR_s___VAR1_INT___02bed6f0;
  uVar2 = FUN_00e6a474(PTR_s___VAR1_INT___02bed6f0);
  uVar2 = FUN_0091ed5c(puVar1,uVar2,0x12345678);
  puVar3 = (undefined4 *)(**(code **)(*(long *)(param_1 + 0x168) + 0x18))(param_1 + 0x168,uVar2);
  return *puVar3;
}




undefined4 FUN_00d6a0dc(long param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  puVar1 = PTR_s___VAR2_INT___02bed6f8;
  uVar2 = FUN_00e6a474(PTR_s___VAR2_INT___02bed6f8);
  uVar2 = FUN_0091ed5c(puVar1,uVar2,0x12345678);
  puVar3 = (undefined4 *)(**(code **)(*(long *)(param_1 + 0x168) + 0x18))(param_1 + 0x168,uVar2);
  return *puVar3;
}




void FUN_00d6a140(undefined4 param_1,long param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  uVar1 = (*(code *)**(undefined8 **)(param_2 + 0x168))
                    (param_2 + 0x168,PTR_s___VAR1_FLOAT___02bed6e0);
  puVar2 = (undefined4 *)(**(code **)(*(long *)(param_2 + 0x168) + 0x10))(param_2 + 0x168,uVar1);
  *puVar2 = param_1;
  return;
}




void FUN_00d6a19c(undefined4 param_1,long param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  uVar1 = (*(code *)**(undefined8 **)(param_2 + 0x168))
                    (param_2 + 0x168,PTR_s___VAR2_FLOAT___02bed6e8);
  puVar2 = (undefined4 *)(**(code **)(*(long *)(param_2 + 0x168) + 0x10))(param_2 + 0x168,uVar1);
  *puVar2 = param_1;
  return;
}




undefined4 FUN_00d6a1f8(long param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  puVar1 = PTR_s___VAR1_FLOAT___02bed6e0;
  uVar2 = FUN_00e6a474(PTR_s___VAR1_FLOAT___02bed6e0);
  uVar2 = FUN_0091ed5c(puVar1,uVar2,0x12345678);
  puVar3 = (undefined4 *)(**(code **)(*(long *)(param_1 + 0x168) + 0x18))(param_1 + 0x168,uVar2);
  return *puVar3;
}




undefined4 FUN_00d6a25c(long param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  puVar1 = PTR_s___VAR2_FLOAT___02bed6e8;
  uVar2 = FUN_00e6a474(PTR_s___VAR2_FLOAT___02bed6e8);
  uVar2 = FUN_0091ed5c(puVar1,uVar2,0x12345678);
  puVar3 = (undefined4 *)(**(code **)(*(long *)(param_1 + 0x168) + 0x18))(param_1 + 0x168,uVar2);
  return *puVar3;
}




bool FUN_00d6a2c0(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  long lVar2;
  
  uVar1 = FUN_00e6a474(param_2);
  uVar1 = FUN_0091ed5c(param_2,uVar1,0x12345678);
  lVar2 = (**(code **)(*(long *)(param_1 + 0x168) + 0x10))(param_1 + 0x168,uVar1);
  return lVar2 != 0;
}




void FUN_00d6a324(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x338) = param_2;
  return;
}




void FUN_00d6a32c(long param_1)

{
  *(uint *)(param_1 + 0x340) =
       *(uint *)(param_1 + 0x340) & 0xfffffff0 | *(uint *)(param_1 + 0x340) + 1 & 0xf;
  return;
}




void FUN_00d6a340(long param_1)

{
  *(uint *)(param_1 + 0x340) =
       *(uint *)(param_1 + 0x340) & 0xfffffff0 | *(uint *)(param_1 + 0x340) - 1 & 0xf;
  return;
}




void FUN_00d6a354(long param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  
  if ((*(long *)(param_1 + 0x50) != 0) &&
     (plVar2 = (long *)(*(long *)(param_1 + 0x50) + -8), plVar2 != (long *)0x0)) {
    do {
      (**(code **)(*plVar2 + 0x98))(plVar2,param_1,param_2 + 0x50);
      plVar1 = plVar2 + 1;
      plVar2 = (long *)0x0;
      if (*plVar1 != 0) {
        plVar2 = (long *)(*plVar1 + -8);
      }
    } while (plVar2 != (long *)0x0);
  }
  return;
}




void FUN_00d6a3b8(long param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  
  if ((*(long *)(param_1 + 0x50) != 0) &&
     (plVar2 = (long *)(*(long *)(param_1 + 0x50) + -8), plVar2 != (long *)0x0)) {
    do {
      (**(code **)(*plVar2 + 0xa0))(plVar2,param_1,param_2 + 0x50);
      plVar1 = plVar2 + 1;
      plVar2 = (long *)0x0;
      if (*plVar1 != 0) {
        plVar2 = (long *)(*plVar1 + -8);
      }
    } while (plVar2 != (long *)0x0);
  }
  return;
}




long FUN_00d6a41c(long param_1)

{
  return param_1 + -0x28;
}




long FUN_00d6a424(long param_1)

{
  return param_1 + -0x28;
}




void FUN_00d6a42c(long *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00e6a474(param_2);
  uVar1 = FUN_0091ed5c(param_2,uVar1,0x12345678);
                    /* WARNING: Could not recover jumptable at 0x00d6a474. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))(param_1,uVar1);
  return;
}




int FUN_00d6a478(long param_1,int param_2)

{
  byte bVar1;
  int *piVar2;
  char cVar3;
  ulong uVar4;
  
  bVar1 = *(byte *)(param_1 + 0x198);
  piVar2 = (int *)(param_1 + 8);
  if ((ulong)bVar1 == 0) {
    cVar3 = '\x01';
  }
  else {
    uVar4 = 0;
    do {
      if (*piVar2 == param_2) {
        return param_2;
      }
      uVar4 = uVar4 + 1;
      piVar2 = piVar2 + 1;
    } while (uVar4 < bVar1);
    cVar3 = bVar1 + 1;
  }
  *piVar2 = param_2;
  *(char *)(param_1 + 0x198) = cVar3;
  return param_2;
}




long FUN_00d6a4c0(long param_1,int param_2)

{
  long lVar1;
  long lVar2;
  
  if (*(byte *)(param_1 + 0x198) != 0) {
    lVar2 = 0;
    lVar1 = param_1 + 0x58;
    do {
      if (*(int *)(param_1 + 8 + lVar2 * 4) == param_2) {
        return lVar1;
      }
      lVar2 = lVar2 + 1;
      lVar1 = lVar1 + 0x10;
    } while ((uint)lVar2 < (uint)*(byte *)(param_1 + 0x198));
  }
  return 0;
}




long FUN_00d6a500(long param_1,int param_2)

{
  long lVar1;
  long lVar2;
  
  if (*(byte *)(param_1 + 0x198) != 0) {
    lVar2 = 0;
    lVar1 = param_1 + 0x58;
    do {
      if (*(int *)(param_1 + 8 + lVar2 * 4) == param_2) {
        return lVar1;
      }
      lVar2 = lVar2 + 1;
      lVar1 = lVar1 + 0x10;
    } while ((uint)lVar2 < (uint)*(byte *)(param_1 + 0x198));
  }
  return 0;
}




undefined8 FUN_00d6a540(undefined8 param_1)

{
  FUN_00d6673c();
  return param_1;
}




void FUN_00d6a564(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00d6a56c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)();
  return;
}




void FUN_00d6a570(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_02baef70;
  FUN_019892f4(param_1 + 5);
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined2 *)((long)param_1 + 0x44) = 7;
  *param_1 = &PTR_FUN_0281de50;
  param_1[5] = &PTR_FUN_0281de80;
  *(undefined1 *)((long)param_1 + 0x46) = 0;
  return;
}




void FUN_00d6a5cc(long param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x46) = param_2;
  return;
}




void FUN_00d6a5d4(long param_1,undefined4 *param_2)

{
  *(undefined4 *)(param_1 + 0x40) = *param_2;
  return;
}




void FUN_00d6a5e0(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x38) = param_2;
  return;
}




void FUN_00d6a5e8(long param_1,undefined2 param_2)

{
  *(undefined2 *)(param_1 + 0x44) = param_2;
  return;
}




undefined2 FUN_00d6a5f0(long param_1)

{
  return *(undefined2 *)(param_1 + 0x44);
}




void FUN_00d6a5f8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  if (*(code **)(param_1 + 0x38) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00d6a60c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 0x38))(param_2,param_3,param_4);
    return;
  }
  return;
}




void FUN_00d6a614(long param_1)

{
  long lVar1;
  
  DAT_031a9308 = *(uint *)(param_1 + 0x13fb0);
  *(uint *)(param_1 + 0x13fb0) = DAT_031a9308 + 1;
  lVar1 = param_1 + (ulong)DAT_031a9308 * 0x2e8;
  *(code **)(lVar1 + 0xb0) = FUN_00d6ab88;
  *(code **)(lVar1 + 0xb8) = FUN_00d6abe8;
  *(uint *)(lVar1 + 0xa4) = DAT_031a9308;
  *(undefined4 *)(lVar1 + 0xa8) = 0x48;
  *(uint *)(lVar1 + 0x2d8) = *(uint *)(lVar1 + 0x2d8) & 0x80000000 | 0x20;
  *(long *)(param_1 + 0x13fb8) = lVar1;
  return;
}




bool FUN_00d6a674(void)

{
  long lVar1;
  
  lVar1 = FUN_00d6a690();
  return lVar1 != 0;
}




undefined8 FUN_00d6a690(undefined8 param_1,ulong param_2)

{
  long lVar1;
  uint uVar2;
  undefined8 uVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 local_158 [32];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  uVar3 = FUN_00d6eb50();
  plVar4 = (long *)FUN_00d6eb5c(uVar3,"*KindredBuffs*");
  uVar3 = *(undefined8 *)(*plVar4 + (param_2 & 0xffffffff) * 8);
  uVar2 = FUN_01985cbc(param_1,local_158,0x20,DAT_031a9308);
  if (uVar2 != 0) {
    uVar7 = 0;
    do {
      uVar6 = local_158[uVar7];
      uVar5 = FUN_00d6a758(uVar6,uVar3);
      if ((uVar5 & 1) != 0) goto LAB_00d6a724;
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar2);
  }
  uVar6 = 0;
LAB_00d6a724:
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 FUN_00d6a758(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  uint uVar3;
  byte *pbVar4;
  uint uVar5;
  
  pbVar4 = (byte *)*param_2;
  uVar3 = 0x811c9dc5;
  uVar5 = (uint)*pbVar4;
  if (*pbVar4 != 0) {
    do {
      pbVar4 = pbVar4 + 1;
      uVar3 = (uVar3 ^ uVar5) * 0x1000193;
      uVar5 = (uint)*pbVar4;
    } while (*pbVar4 != 0);
  }
  if ((((uVar3 == *(uint *)(param_1 + 0x40)) ||
       ((*(char *)((long)param_2 + 0x29) != '\0' && ((*(byte *)(param_1 + 0x46) & 1) != 0)))) ||
      ((*(char *)((long)param_2 + 0x26) != '\0' && ((*(byte *)(param_1 + 0x46) >> 1 & 1) != 0)))) ||
     ((((*(char *)((long)param_2 + 0x22) != '\0' && ((*(byte *)(param_1 + 0x46) >> 3 & 1) != 0)) ||
       ((*(char *)((long)param_2 + 0x2b) != '\0' && ((*(byte *)(param_1 + 0x46) >> 4 & 1) != 0))))
      || ((uVar1 = FUN_00d6a8a8(param_2), (uVar1 & 1) != 0 &&
          ((*(byte *)(param_1 + 0x46) >> 2 & 1) != 0)))))) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}




void FUN_00d6a814(undefined8 param_1,byte param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long local_138 [32];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_01985cbc(param_1,local_138,0x20,DAT_031a9308);
  if ((uint)uVar2 != 0) {
    lVar3 = 0;
    do {
      if ((*(byte *)(local_138[lVar3] + 0x46) & param_2) != 0) {
        uVar2 = 1;
        goto LAB_00d6a880;
      }
      lVar3 = lVar3 + 1;
    } while ((uint)lVar3 < (uint)uVar2);
    uVar2 = 0;
  }
LAB_00d6a880:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}




void FUN_00d6a8a8(undefined8 *param_1)

{
  long lVar1;
  bool bVar2;
  int local_58 [2];
  int local_50 [2];
  int local_48 [2];
  int local_40 [2];
  int local_38 [2];
  int local_30 [2];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  thunk_FUN_00d9ff34(local_30,*param_1);
  bVar2 = true;
  if (((((((local_30[0] != DAT_0315c91c) && (local_30[0] != DAT_0315c928)) &&
         (local_30[0] != DAT_0315c92c)) &&
        ((local_30[0] != DAT_0315c950 && (local_30[0] != DAT_031b875c)))) &&
       ((local_30[0] != DAT_031b9a3c &&
        ((local_30[0] != DAT_031bae80 && (local_30[0] != DAT_031bab20)))))) &&
      (local_30[0] != DAT_031ba3bc)) &&
     (((local_30[0] != DAT_031ba8ec && (local_30[0] != DAT_031b94f0)) &&
      (local_30[0] != DAT_031b9ff0)))) {
    thunk_FUN_00d9ff34(local_38,PTR_s_Buff_Ylva_C_Trap_Root_02bf1468);
    if (((local_30[0] == local_38[0]) ||
        (thunk_FUN_00d9ff34(local_40,PTR_s_Buff_Leo_C_ShovedHero_02bf1850),
        local_30[0] == local_40[0])) ||
       ((thunk_FUN_00d9ff34(local_48,PTR_s_Buff_Leo_B_Root_02bf1848), local_30[0] == local_48[0] ||
        (thunk_FUN_00d9ff34(local_50,PTR_s_Buff_Viola_Sleep_02bf1bb8), local_30[0] == local_50[0])))
       ) {
      bVar2 = true;
    }
    else {
      thunk_FUN_00d9ff34(local_58,PTR_s_Buff_Shin_B_Root_02bf1c48);
      bVar2 = true;
      if ((local_30[0] != local_58[0]) && (local_30[0] != DAT_031abf88)) {
        bVar2 = *(char *)((long)param_1 + 0x2b) != '\0';
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar2);
}




void FUN_00d6aad0(long param_1)

{
  FUN_0198931c(param_1 + 0x28);
  FUN_01985bd0(param_1);
  return;
}




void FUN_00d6aaf8(void *param_1)

{
  FUN_0198931c((long)param_1 + 0x28);
  FUN_01985bd0(param_1);
  operator_delete(param_1);
  return;
}




void FUN_00d6ab28(long param_1)

{
  FUN_0198931c();
  FUN_01985bd0(param_1 + -0x28);
  return;
}




void FUN_00d6ab4c(long param_1)

{
  FUN_0198931c();
  FUN_01985bd0((void *)(param_1 + -0x28));
  operator_delete((void *)(param_1 + -0x28));
  return;
}




long FUN_00d6ab78(long param_1)

{
  return param_1 + -0x28;
}




long FUN_00d6ab80(long param_1)

{
  return param_1 + -0x28;
}




undefined8 * FUN_00d6ab88(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_02baef70;
  FUN_019892f4(param_1 + 5);
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined2 *)((long)param_1 + 0x44) = 7;
  *param_1 = &PTR_FUN_0281de50;
  param_1[5] = &PTR_FUN_0281de80;
  *(undefined1 *)((long)param_1 + 0x46) = 0;
  return param_1;
}




void FUN_00d6abe8(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00d6abf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)();
  return;
}




void FUN_00d6abf4(undefined8 *param_1)

{
  param_1[5] = 0;
  param_1[6] = 0;
  *param_1 = &PTR_FUN_0281deb0;
  *(undefined4 *)(param_1 + 7) = 0;
  return;
}




void FUN_00d6ac10(undefined8 *param_1)

{
  param_1[5] = 0;
  param_1[6] = 0;
  *param_1 = &PTR_FUN_0281deb0;
  *(undefined4 *)(param_1 + 7) = 0;
  FUN_01985bd0();
  return;
}




void FUN_00d6ac2c(undefined8 *param_1)

{
  param_1[5] = 0;
  param_1[6] = 0;
  *param_1 = &PTR_FUN_0281deb0;
  *(undefined4 *)(param_1 + 7) = 0;
  FUN_01985bd0();
  operator_delete(param_1);
  return;
}




void FUN_00d6ac68(long param_1)

{
  long lVar1;
  
  DAT_02c7bf48 = *(uint *)(param_1 + 0x13fb0);
  *(uint *)(param_1 + 0x13fb0) = DAT_02c7bf48 + 1;
  lVar1 = param_1 + (ulong)DAT_02c7bf48 * 0x2e8;
  *(code **)(lVar1 + 0xb0) = FUN_00d6caac;
  *(code **)(lVar1 + 0xb8) = FUN_00d6cac8;
  *(uint *)(lVar1 + 0x2d8) = *(uint *)(lVar1 + 0x2d8) & 0x80000000 | 200;
  *(uint *)(lVar1 + 0xa4) = DAT_02c7bf48;
  *(undefined4 *)(lVar1 + 0xa8) = 0x40;
  *(long *)(param_1 + 0x13fb8) = lVar1;
  FUN_01986780(param_1,4,FUN_00d6acd8,0);
  return;
}




void FUN_00d6acd8(long param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x28);
  while (lVar1 = lVar3, lVar1 != 0) {
    iVar2 = FUN_00d67ce4(lVar1);
    lVar3 = *(long *)(lVar1 + 0x350);
    if (iVar2 == 2) {
      FUN_00d6ad34((long *)(param_1 + 0x28),lVar1);
      FUN_01985ca8(lVar1);
    }
  }
  return;
}




void FUN_00d6ad34(long *param_1,long param_2)

{
  long lVar1;
  
  if (*param_1 == param_2) {
    if (param_1[1] == param_2) {
      *param_1 = 0;
      param_1[1] = 0;
    }
    else {
      *param_1 = *(long *)(param_2 + 0x350);
    }
  }
  else if (param_1[1] == param_2) {
    lVar1 = *(long *)(param_2 + 0x358);
    param_1[1] = lVar1;
    *(undefined8 *)(lVar1 + 0x350) = 0;
  }
  else {
    lVar1 = *(long *)(param_2 + 0x358);
    *(undefined8 *)(lVar1 + 0x350) = *(undefined8 *)(param_2 + 0x350);
    *(long *)(*(long *)(param_2 + 0x350) + 0x358) = lVar1;
  }
  *(int *)(param_1 + 2) = (int)param_1[2] + -1;
  return;
}




undefined4 FUN_00d6ad98(long param_1)

{
  return *(undefined4 *)(param_1 + 0x38);
}




void FUN_00d6ada0(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,int param_5,
                 undefined8 *param_6,int param_7,int param_8,undefined4 param_9,undefined4 param_10)

{
  long *plVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  long local_98;
  int local_90 [2];
  long local_88;
  
  lVar2 = tpidr_el0;
  local_88 = *(long *)(lVar2 + 0x28);
  uVar5 = *param_6;
  thunk_FUN_00d9ff34(local_90,uVar5);
  if (*(int *)(param_6 + 7) != 2) {
    for (lVar6 = *(long *)(param_4 + 0x28); lVar6 != 0; lVar6 = *(long *)(lVar6 + 0x350)) {
      iVar3 = FUN_00d67b1c(lVar6);
      if (((local_90[0] == iVar3) && (iVar3 = FUN_00d67ce4(lVar6), iVar3 == 0)) &&
         ((*(int *)(param_6 + 7) != 1 || (iVar3 = FUN_00d67b84(lVar6), iVar3 == param_5)))) {
        FUN_00d67564(param_1,param_2,param_3,lVar6,param_5,param_8,param_9,param_10);
        goto LAB_00d6af24;
      }
    }
  }
  uVar4 = FUN_00ceab48();
  if ((*(int *)(param_6 + 7) == 2) && ((uVar4 & 1) == 0)) {
    for (lVar6 = *(long *)(param_4 + 0x28); lVar6 != 0; lVar6 = *(long *)(lVar6 + 0x350)) {
      iVar3 = FUN_00d66d34(lVar6);
      if ((iVar3 == param_7) && (iVar3 = FUN_00d67ce4(lVar6), iVar3 != 2)) goto LAB_00d6af34;
    }
  }
  if ((param_8 == 0) && (*(char *)((long)param_6 + 0x2e) != '\0')) {
LAB_00d6af34:
    uVar5 = 0xffffffff;
  }
  else {
    local_98 = 0;
    FUN_00e0bd58(param_1,param_2,param_3,param_4,param_5,uVar5,param_6,&local_98,param_7,param_8,
                 param_9,param_10);
    *(undefined8 *)(local_98 + 0x350) = 0;
    lVar6 = *(long *)(param_4 + 0x30);
    *(long *)(local_98 + 0x358) = lVar6;
    plVar1 = (long *)(param_4 + 0x28);
    if (*(long *)(param_4 + 0x28) != 0) {
      plVar1 = (long *)(lVar6 + 0x350);
    }
    *plVar1 = local_98;
    *(long *)(param_4 + 0x30) = local_98;
    *(int *)(param_4 + 0x38) = *(int *)(param_4 + 0x38) + 1;
    FUN_00d67280();
    lVar6 = local_98;
LAB_00d6af24:
    uVar5 = FUN_00d66d34(lVar6);
  }
  if (*(long *)(lVar2 + 0x28) != local_88) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar5);
  }
  return;
}




void FUN_00d6afa8(long param_1,int param_2)

{
  int iVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x28);
  while( true ) {
    if (lVar2 == 0) {
      return;
    }
    iVar1 = FUN_00d66d34(lVar2);
    if (iVar1 == param_2) break;
    lVar2 = *(long *)(lVar2 + 0x350);
  }
  FUN_00d670d4(lVar2);
  return;
}




long FUN_00d6aff4(long param_1,int param_2)

{
  int iVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x28);
  while ((lVar2 != 0 && (iVar1 = FUN_00d66d34(lVar2), iVar1 != param_2))) {
    lVar2 = *(long *)(lVar2 + 0x350);
  }
  return lVar2;
}

