// functions/01996 — 39 functions
#include "libGameKindred.h"




void FUN_01996014(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  long lVar1;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_30 = param_3;
  FUN_01995f58(param_1,param_2,&local_30,1,param_4);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_01996068(undefined8 param_1,undefined4 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined4 uVar2;
  undefined8 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (param_4 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00e6a474(param_4);
    uVar2 = FUN_0091ed5c(param_4,uVar2,0x12345678);
  }
  local_50 = param_3;
  FUN_01995f58(param_1,param_2,&local_50,1,uVar2);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_0199610c(void)

{
  FUN_01995f58();
  return;
}




void FUN_01996118(undefined8 param_1,undefined4 param_2,undefined8 param_3,long param_4)

{
  undefined4 uVar1;
  
  if (param_4 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_00e6a474(param_4);
    uVar1 = FUN_0091ed5c(param_4,uVar1,0x12345678);
  }
  FUN_01995f58(param_1,param_2,param_3,0,uVar1);
  return;
}




void FUN_01996184(long *param_1,uint param_2,undefined4 *param_3,uint param_4,uint param_5,
                 undefined4 param_6)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  
  uVar1 = *(uint *)((long *)*param_1 + 2);
  lVar4 = *(long *)*param_1;
  lVar7 = ((ulong)uVar1 & 0xffff) * 8;
  *(uint *)(lVar4 + lVar7) = *(uint *)(lVar4 + lVar7) & 0xfffff000 | param_2 & 0xfff;
  uVar5 = (ulong)(uVar1 >> 0x10);
  uVar2 = *(uint *)(*(long *)*param_1 + lVar7);
  *(uint *)(*(long *)*param_1 + lVar7) = uVar2 & 0xf0000000 | uVar2 & 0xfff | (uVar1 >> 0x10) << 0xc
  ;
  uVar2 = (param_4 - 2) * 0x10000000 + 0x10000000;
  if (2 < param_4 - 2) {
    uVar2 = 0;
  }
  *(uint *)(*(long *)*param_1 + lVar7) = *(uint *)(*(long *)*param_1 + lVar7) & 0x8fffffff | uVar2;
  *(uint *)(*(long *)*param_1 + lVar7) =
       *(uint *)(*(long *)*param_1 + lVar7) & 0x7fffffff | param_5 << 0x1f;
  plVar8 = (long *)*param_1;
  *(undefined4 *)(*plVar8 + (ulong)(ushort)uVar1 * 8 + 4) = param_6;
  *(short *)(plVar8 + 2) = (short)(int)plVar8[2] + 1;
  if ((param_5 & 1) == 0) {
    *(undefined4 **)(*(long *)(*param_1 + 8) + uVar5 * 4) = param_3;
    piVar6 = (int *)(*param_1 + 0x10);
    iVar3 = *piVar6 + 0x20000;
  }
  else {
    lVar4 = *param_1;
    if (param_4 != 0) {
      lVar7 = *(long *)(lVar4 + 8);
      uVar9 = (ulong)param_4;
      do {
        uVar9 = uVar9 - 1;
        *(undefined4 *)(lVar7 + uVar5 * 4) = *param_3;
        uVar5 = (ulong)((int)uVar5 + 1);
        param_3 = param_3 + 1;
      } while (uVar9 != 0);
    }
    piVar6 = (int *)(lVar4 + 0x10);
    iVar3 = *piVar6 + param_4 * 0x10000;
  }
  *piVar6 = iVar3;
  return;
}




void FUN_01996270(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4,
                 uint param_5,long param_6)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_6 != 0) {
    uVar1 = FUN_00e6a474(param_6);
    uVar1 = FUN_0091ed5c(param_6,uVar1,0x12345678);
  }
  FUN_01996184(param_1,param_2,param_3,param_4,param_5 & 1,uVar1);
  return;
}




long * FUN_019962e8(long *param_1)

{
  long *plVar1;
  ulong uVar2;
  uint *puVar3;
  uint uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  
  plVar1 = operator_new(0x18);
  FUN_01996d78(plVar1,*(uint *)(*param_1 + 0x10) & 0xffff,*(uint *)(*param_1 + 0x10) >> 0x10);
  plVar5 = (long *)*param_1;
  puVar3 = (uint *)(plVar5 + 2);
  uVar4 = *puVar3;
  if ((uVar4 & 0xffff) != 0) {
    uVar2 = 0;
    do {
      *(undefined8 *)(*plVar1 + uVar2 * 8) = *(undefined8 *)(*plVar5 + uVar2 * 8);
      plVar5 = (long *)*param_1;
      uVar2 = uVar2 + 1;
      uVar4 = *(uint *)(plVar5 + 2);
    } while (uVar2 < (ushort)uVar4);
    puVar3 = (uint *)(plVar5 + 2);
  }
  if (0xffff < uVar4) {
    lVar6 = plVar5[1];
    lVar7 = plVar1[1];
    uVar2 = 0;
    do {
      *(undefined4 *)(lVar7 + uVar2 * 4) = *(undefined4 *)(lVar6 + uVar2 * 4);
      uVar4 = *puVar3;
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar4 >> 0x10);
  }
  *(short *)(plVar1 + 2) = (short)uVar4;
  *(uint *)(plVar1 + 2) = *puVar3 & 0xffff0000 | uVar4 & 0xffff;
  return plVar1;
}




void FUN_019963a8(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}




void FUN_019963b0(undefined8 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)param_1[1];
  *param_1 = 0;
  if (pvVar1 != (void *)0x0) {
    FUN_01996dbc(pvVar1);
    operator_delete(pvVar1);
    return;
  }
  return;
}




void FUN_019963ec(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_019963f4(undefined8 *param_1,undefined8 param_2)

{
  void *pvVar1;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = param_1 + 1;
  param_1[4] = 0;
  param_1[5] = param_2;
  pvVar1 = operator_new(0x87050);
  FUN_01999ff0();
  param_1[3] = pvVar1;
  return;
}




void FUN_0199643c(long param_1)

{
  void *pvVar1;
  
  FUN_0199a084(*(undefined8 *)(param_1 + 0x18),0);
  pvVar1 = *(void **)(param_1 + 0x18);
  if (pvVar1 != (void *)0x0) {
    FUN_0199a088(pvVar1);
    operator_delete(pvVar1);
  }
  FUN_01996828(param_1,*(undefined8 *)(param_1 + 8));
  return;
}




void FUN_01996484(long param_1,uint param_2)

{
  FUN_0199a084(*(undefined8 *)(param_1 + 0x18),param_2 & 1);
  return;
}




void FUN_01996490(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined4 uVar2;
  uint uVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  uint local_58 [2];
  long local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (*(long *)(param_1 + 0x20) != 0) {
    uVar2 = FUN_00e6a474(param_2);
    uVar3 = FUN_0091ed5c(param_2,uVar2,0x12345678);
    plVar6 = (long *)(param_1 + 8);
    plVar7 = (long *)*plVar6;
    plVar5 = plVar6;
    if (plVar7 != (long *)0x0) {
      do {
        if (*(uint *)(plVar7 + 4) >= uVar3) {
          plVar5 = plVar7;
        }
        plVar7 = (long *)plVar7[*(uint *)(plVar7 + 4) < uVar3];
      } while (plVar7 != (long *)0x0);
      if (((plVar5 != plVar6) && (*(uint *)(plVar5 + 4) <= uVar3)) && (plVar5[5] != 0))
      goto LAB_01996584;
    }
    lVar4 = FUN_0199a194(*(undefined8 *)(param_1 + 0x18));
    uVar2 = FUN_00e6a474(param_2);
    uVar2 = FUN_0091ed5c(param_2,uVar2,0x12345678);
    *(undefined4 *)(lVar4 + 4) = uVar2;
    local_58[0] = uVar3;
    local_50 = lVar4;
    FUN_019968b8(param_1,local_58,local_58);
    (**(code **)(**(long **)(param_1 + 0x20) + 0x10))(*(long **)(param_1 + 0x20),param_2,lVar4);
  }
LAB_01996584:
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




long FUN_019965b0(long param_1,uint param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  
  plVar1 = (long *)(param_1 + 8);
  plVar4 = (long *)*plVar1;
  plVar3 = plVar1;
  if (plVar4 != (long *)0x0) {
    do {
      if (*(uint *)(plVar4 + 4) >= param_2) {
        plVar3 = plVar4;
      }
      plVar4 = (long *)plVar4[*(uint *)(plVar4 + 4) < param_2];
    } while (plVar4 != (long *)0x0);
    if (plVar3 != plVar1) {
      lVar2 = 0;
      if (*(uint *)(plVar3 + 4) <= param_2) {
        lVar2 = plVar3[5];
      }
      return lVar2;
    }
  }
  return 0;
}




void FUN_019965fc(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  uint uVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  
  uVar1 = FUN_00e6a474(param_2);
  uVar2 = FUN_0091ed5c(param_2,uVar1,0x12345678);
  plVar5 = (long *)(param_1 + 8);
  plVar6 = (long *)*plVar5;
  plVar4 = plVar5;
  if (plVar6 != (long *)0x0) {
    do {
      if (*(uint *)(plVar6 + 4) >= uVar2) {
        plVar4 = plVar6;
      }
      plVar6 = (long *)plVar6[*(uint *)(plVar6 + 4) < uVar2];
    } while (plVar6 != (long *)0x0);
    if (plVar4 != plVar5) {
      lVar3 = 0;
      if (*(uint *)(plVar4 + 4) <= uVar2) {
        lVar3 = plVar4[5];
      }
      goto LAB_01996678;
    }
  }
  lVar3 = 0;
LAB_01996678:
  FUN_0199a098(*(undefined8 *)(param_1 + 0x18),lVar3);
  return;
}




void FUN_01996688(long param_1,undefined8 *param_2)

{
  if (*(int *)*param_2 == 1) {
    FUN_019969d8(param_1,(int *)*param_2 + 1);
  }
  FUN_0199a26c(*(undefined8 *)(param_1 + 0x18),param_2);
  return;
}




void FUN_019966cc(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x20) = param_2;
  return;
}




void FUN_019966d4(long param_1)

{
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}




void FUN_019966dc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined4 local_7ce0 [7674];
  int local_4f8;
  int local_470 [264];
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  memset(local_470,0,0x418);
  local_7ce0[0] = 0;
  local_4f8 = 0;
  FUN_0199a43c(*(undefined8 *)(param_1 + 0x18),param_2,local_470,local_7ce0,param_3,param_4);
  (**(code **)(**(long **)(param_1 + 0x20) + 0x18))
            (*(long **)(param_1 + 0x20),param_2,local_470,*(undefined8 *)(param_1 + 0x28));
  (**(code **)(**(long **)(param_1 + 0x20) + 0x20))
            (*(long **)(param_1 + 0x20),param_2,local_7ce0,*(undefined8 *)(param_1 + 0x28));
  if (local_4f8 != 0) {
    local_4f8 = 0;
  }
  FUN_01996874(local_7ce0);
  if (local_470[0] != 0) {
    local_470[0] = 0;
  }
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_019967f0(long param_1)

{
  FUN_0199a43c(*(undefined8 *)(param_1 + 0x18));
  return;
}




void FUN_019967f8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x01996808. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x20) + 0x18))
            (*(long **)(param_1 + 0x20),param_2,param_3,*(undefined8 *)(param_1 + 0x28));
  return;
}




void FUN_0199680c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0199681c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x20) + 0x20))
            (*(long **)(param_1 + 0x20),param_2,param_3,*(undefined8 *)(param_1 + 0x28));
  return;
}




void FUN_01996820(long param_1)

{
  FUN_0199aac8(*(undefined8 *)(param_1 + 0x18));
  return;
}




void FUN_01996828(undefined8 param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    FUN_01996828(param_1,*param_2);
    FUN_01996828(param_1,param_2[1]);
    operator_delete(param_2);
    return;
  }
  return;
}




void FUN_01996874(int *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *param_1;
  if (iVar1 != 0) {
    piVar2 = param_1 + (ulong)(iVar1 - 1) * 0x77e;
    do {
      if (piVar2[0x156] != 0) {
        piVar2[0x156] = 0;
      }
      if (piVar2[4] != 0) {
        piVar2[4] = 0;
      }
      iVar1 = iVar1 + -1;
      piVar2 = piVar2 + -0x77e;
    } while (iVar1 != 0);
    *param_1 = 0;
  }
  return;
}




undefined1  [16] FUN_019968b8(long param_1,uint *param_2,undefined8 *param_3)

{
  bool bVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  void *pvVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  puVar3 = (undefined8 *)(param_1 + 8);
  puVar4 = puVar3;
  if ((undefined8 *)*puVar3 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)*puVar3;
    puVar4 = (undefined8 *)(param_1 + 8);
    do {
      while (puVar3 = puVar2, *param_2 < *(uint *)(puVar3 + 4)) {
        puVar2 = (undefined8 *)*puVar3;
        puVar4 = puVar3;
        if ((undefined8 *)*puVar3 == (undefined8 *)0x0) goto LAB_01996930;
      }
      if (*param_2 <= *(uint *)(puVar3 + 4)) break;
      puVar4 = puVar3 + 1;
      puVar2 = (undefined8 *)*puVar4;
    } while ((undefined8 *)*puVar4 != (undefined8 *)0x0);
  }
LAB_01996930:
  pvVar5 = (void *)*puVar4;
  bVar1 = pvVar5 == (void *)0x0;
  if (bVar1) {
    pvVar5 = operator_new(0x30);
    uVar6 = *param_3;
    *(undefined8 *)((long)pvVar5 + 0x28) = param_3[1];
    *(undefined8 *)((long)pvVar5 + 0x20) = uVar6;
    FUN_01996984(param_1,puVar3,puVar4,pvVar5);
  }
  auVar7[8] = bVar1;
  auVar7._0_8_ = pvVar5;
  auVar7._9_7_ = 0;
  return auVar7;
}




void FUN_01996984(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = param_2;
  *param_3 = param_4;
  if (*(long *)*param_1 != 0) {
    *param_1 = *(long *)*param_1;
    param_4 = (undefined8 *)*param_3;
  }
  FUN_0090d468(param_1[1],param_4);
  param_1[2] = param_1[2] + 1;
  return;
}




undefined8 FUN_019969d8(long param_1,uint *param_2)

{
  uint uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  plVar3 = (long *)(param_1 + 8);
  plVar4 = (long *)*plVar3;
  if (plVar4 != (long *)0x0) {
    uVar1 = *param_2;
    plVar2 = plVar3;
    do {
      if (*(uint *)(plVar4 + 4) >= uVar1) {
        plVar2 = plVar4;
      }
      plVar4 = (long *)plVar4[*(uint *)(plVar4 + 4) < uVar1];
    } while (plVar4 != (long *)0x0);
    if (plVar2 != plVar3) {
      if (uVar1 < *(uint *)(plVar2 + 4)) {
        return 0;
      }
      FUN_01996a40();
      return 1;
    }
  }
  return 0;
}




long * FUN_01996a40(undefined8 *param_1,void *param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  
  plVar1 = *(long **)((long)param_2 + 8);
  if (*(long **)((long)param_2 + 8) == (long *)0x0) {
    plVar1 = (long *)((long)param_2 + 0x10);
    plVar3 = (long *)*plVar1;
    if ((void *)*plVar3 != param_2) {
      do {
        lVar2 = *plVar1;
        plVar1 = (long *)(lVar2 + 0x10);
        plVar3 = (long *)*plVar1;
      } while (*plVar3 != lVar2);
    }
  }
  else {
    do {
      plVar3 = plVar1;
      plVar1 = (long *)*plVar3;
    } while ((long *)*plVar3 != (long *)0x0);
  }
  if ((void *)*param_1 == param_2) {
    *param_1 = plVar3;
  }
  param_1[2] = param_1[2] + -1;
  FUN_009343e8(param_1[1],param_2);
  operator_delete(param_2);
  return plVar3;
}




void FUN_01996ad4(undefined8 param_1,undefined8 param_2,uint *param_3,undefined8 param_4)

{
  ulong uVar1;
  uint *puVar2;
  
  if (*param_3 != 0) {
    uVar1 = 0;
    puVar2 = param_3 + 0x12;
    do {
      FUN_0199824c(param_4,puVar2 + -0x10,(char)*puVar2);
      uVar1 = uVar1 + 1;
      puVar2 = (uint *)((long)puVar2 + 0x41);
    } while (uVar1 < *param_3);
  }
  return;
}




void FUN_01996b2c(undefined8 param_1,undefined8 param_2,uint *param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  void *pvVar3;
  undefined8 *puVar4;
  uint *puVar5;
  uint *puVar6;
  ulong uVar7;
  uint *puVar8;
  ulong uVar9;
  uint *puVar10;
  undefined8 local_f0 [16];
  long local_70;
  
  lVar1 = tpidr_el0;
  local_70 = *(long *)(lVar1 + 0x28);
  if (*param_3 != 0) {
    uVar9 = 0;
    puVar5 = param_3 + 0x1a;
    puVar10 = param_3 + 0x159;
    do {
      if (param_3[uVar9 * 0x77e + 4] != 0) {
        uVar7 = 0;
        puVar6 = puVar5;
        do {
          uVar2 = FUN_0199849c(param_4,puVar6 + -0x13,puVar6[-2],puVar6[-1],*puVar6);
          FUN_019973b8(*(undefined8 *)(param_3 + uVar9 * 0x77e + 0x77a),puVar6[-0x14],uVar2);
          uVar7 = uVar7 + 1;
          puVar6 = puVar6 + 0x15;
        } while (uVar7 < param_3[uVar9 * 0x77e + 4]);
      }
      if (param_3[uVar9 * 0x77e + 0x156] == 0) {
        puVar6 = param_3 + uVar9 * 0x77e + 0x77a;
      }
      else {
        uVar7 = 0;
        puVar6 = param_3 + uVar9 * 0x77e + 0x77a;
        puVar8 = puVar10;
        do {
          uVar2 = FUN_019989f8(param_4,puVar8);
          FUN_019973b8(*(undefined8 *)puVar6,puVar8[-1],uVar2);
          uVar7 = uVar7 + 1;
          puVar8 = puVar8 + 0xc4;
        } while (uVar7 < param_3[uVar9 * 0x77e + 0x156]);
      }
      pvVar3 = operator_new(0x28);
      FUN_0199f11c();
      thunk_FUN_0199f4e8(pvVar3,*(undefined8 *)(param_3 + uVar9 * 0x77e + 0x77e),
                         (long)(int)param_3[uVar9 * 0x77e + 0x77c]);
      FUN_0199747c(*(undefined8 *)puVar6,pvVar3);
      puVar4 = operator_new(0x18);
      *puVar4 = 0;
      puVar4[1] = 0;
      puVar4[2] = 0x701010000;
      FUN_01997bb8(puVar4,pvVar3,*(undefined8 *)puVar6,param_3 + uVar9 * 0x77e + 0x778);
      puVar5 = puVar5 + 0x77e;
      puVar10 = puVar10 + 0x77e;
      local_f0[uVar9 & 0xffffffff] = puVar4;
      uVar9 = uVar9 + 1;
    } while (uVar9 < *param_3);
  }
  if (param_3[0x1dfa] != 0) {
    uVar9 = 0;
    puVar5 = param_3 + 0x1dfd;
    do {
      FUN_01999fe4(param_2,(char)puVar5[-1],local_f0[*puVar5]);
      uVar9 = uVar9 + 1;
      puVar5 = puVar5 + 2;
    } while (uVar9 < param_3[0x1dfa]);
  }
  if (*(long *)(lVar1 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_01996d74(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1996d78);
  (*pcVar1)();
}




void FUN_01996d78(undefined8 *param_1,uint param_2,uint param_3)

{
  void *pvVar1;
  
  *(undefined4 *)(param_1 + 2) = 0;
  pvVar1 = operator_new__((ulong)param_2 << 3);
  *param_1 = pvVar1;
  pvVar1 = operator_new__((ulong)param_3 << 2);
  param_1[1] = pvVar1;
  return;
}




void FUN_01996dbc(undefined8 *param_1)

{
  FUN_01996e00(param_1,1);
  if ((void *)*param_1 != (void *)0x0) {
    operator_delete__((void *)*param_1);
  }
  if ((void *)param_1[1] != (void *)0x0) {
    operator_delete__((void *)param_1[1]);
    return;
  }
  return;
}




void FUN_01996e00(long *param_1,ulong param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  
  if ((param_2 & 1) != 0) {
    uVar1 = FUN_01997b00();
    uVar2 = (ulong)*(ushort *)(param_1 + 2);
    if (*(ushort *)(param_1 + 2) != 0) {
      lVar3 = 0;
      uVar4 = 0;
      do {
        if (*(uint *)(*param_1 + lVar3) >> 0x1c == 0xc) {
          FUN_01998658(uVar1,*(undefined8 *)
                              (param_1[1] + (ulong)(*(uint *)(*param_1 + lVar3) >> 0xc & 0xffff) * 4
                              ));
          uVar2 = (ulong)*(ushort *)(param_1 + 2);
        }
        uVar4 = uVar4 + 1;
        lVar3 = lVar3 + 8;
      } while (uVar4 < uVar2);
    }
  }
  *(undefined4 *)(param_1 + 2) = 0;
  return;
}




void FUN_01996e9c(undefined8 param_1,uint *param_2,long param_3,undefined4 param_4)

{
  uint uVar1;
  long *plVar2;
  
  uVar1 = *param_2;
  plVar2 = (long *)(param_3 + (ulong)(uVar1 >> 0xc & 0xffff) * 4);
  if (-1 < (int)uVar1) {
    plVar2 = (long *)*plVar2;
  }
  switch(uVar1 >> 0x1c & 7) {
  case 0:
    glUniform1f((int)*plVar2,param_4);
    return;
  case 1:
    glUniform2fv(param_4,1);
    return;
  case 2:
    glUniform3fv(param_4,1);
    return;
  case 3:
    glUniform4fv(param_4,1);
    return;
  case 4:
    plVar2 = (long *)*plVar2;
    if (plVar2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x01996f18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2,param_4);
      return;
    }
  }
  return;
}




void FUN_01996f20(long *param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  
  if ((short)param_1[2] != 0) {
    lVar2 = 0;
    uVar3 = 0;
    plVar1 = param_1;
    do {
      plVar1 = (long *)FUN_01996e9c(plVar1,(uint *)(*param_1 + lVar2),param_1[1],
                                    *(uint *)(*param_1 + lVar2) & 0xfff);
      uVar3 = uVar3 + 1;
      lVar2 = lVar2 + 8;
    } while (uVar3 < *(ushort *)(param_1 + 2));
  }
  if (param_2 != 0) {
    FUN_01996f9c(param_1,param_2);
    return;
  }
  return;
}




void FUN_01996f9c(undefined8 *param_1,long *param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  uint *puVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar2 = (ulong)*(ushort *)(param_2 + 2);
  if (*(ushort *)(param_2 + 2) != 0) {
    uVar5 = 0;
    puVar1 = param_1;
    do {
      if (*(ushort *)(param_1 + 2) != 0) {
        uVar4 = 0;
        puVar3 = (uint *)*param_1;
        do {
          if (puVar3[1] == *(uint *)(*param_2 + uVar5 * 8 + 4)) {
            if (puVar3 != (uint *)0x0) {
              puVar1 = (undefined8 *)
                       FUN_01996e9c(puVar1,*param_2 + uVar5 * 8,param_2[1],*puVar3 & 0xfff);
              uVar2 = (ulong)*(ushort *)(param_2 + 2);
            }
            break;
          }
          uVar4 = uVar4 + 1;
          puVar3 = puVar3 + 2;
        } while (uVar4 < *(ushort *)(param_1 + 2));
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar2);
  }
  return;
}

