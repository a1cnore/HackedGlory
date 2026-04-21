// functions/009df — 44 functions
#include "libGameKindred.h"




void thunk_FUN_009df4b8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027c39c8;
  FUN_01985bd0();
  return;
}




void thunk_FUN_009df4b8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027c39c8;
  FUN_01985bd0();
  return;
}




void thunk_FUN_009df4b8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027c39c8;
  FUN_01985bd0();
  return;
}




void FUN_009df034(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x009df03c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)();
  return;
}




void FUN_009df040(undefined8 *param_1)

{
  ushort *puVar1;
  
  *param_1 = &PTR_FUN_027c39c8;
  puVar1 = (ushort *)(param_1 + 5);
  *(undefined8 *)((long)param_1 + 0xb4) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + 0xac) = 0xffffffffffffffff;
  *(undefined2 *)(param_1 + 0xd) = 1;
  *(undefined4 *)((long)param_1 + 0xbc) = 0xffffffff;
  param_1[0xe] = FUN_009df164;
  param_1[0x13] = 0;
  param_1[0x14] = param_1;
  *(undefined4 *)(param_1 + 0x15) = 0;
  param_1[0x1c] = 0;
  param_1[0x1b] = 0;
  param_1[0x1a] = 0;
  param_1[0x19] = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[7] = FUN_009df104;
  param_1[8] = 0;
  *(undefined2 *)((long)param_1 + 0x6a) = 0;
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  *puVar1 = *puVar1 & 0x8000 | 0xbff;
  FUN_009df2f8(puVar1,0,1);
  FUN_009df380(puVar1,0,0,0);
  return;
}




void FUN_009df104(long param_1)

{
  long lVar1;
  
  if (((*(long *)(param_1 + 0x10) != 0) &&
      (*(int *)(*(long *)(*(long *)(param_1 + 0x10) + 8) + 0xa4) == DAT_02c09220)) &&
     (lVar1 = FUN_00d5bae0(), lVar1 != 0)) {
    FUN_009df380(param_1 + 0x28,1,0,0);
    return;
  }
  return;
}




void FUN_009df164(long *param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  undefined1 auStack_90 [32];
  undefined8 local_70;
  undefined8 uStack_68;
  undefined4 local_5c;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  lVar4 = param_1[2];
  if (lVar4 == 0) {
    lVar4 = 0;
  }
  else if (*(int *)(*(long *)(lVar4 + 8) + 0xa4) != DAT_02c09220) {
    lVar4 = 0;
  }
  if ((int)param_1[0x15] != 0) {
    uVar2 = (**(code **)(*param_1 + 0x20))(param_1);
    if ((uVar2 & 1) == 0) {
      uVar2 = (ulong)*(uint *)(param_1 + 0x15);
      if (*(uint *)(param_1 + 0x15) != 0) {
        uVar5 = 0;
        do {
          piVar6 = (int *)((long)param_1 + uVar5 * 4 + 0xac);
          if (*piVar6 != -1) {
            lVar3 = *(long *)(lVar4 + 0x18);
            while ((lVar3 != 0 && (*(int *)(*(long *)(lVar3 + 8) + 0xa4) != DAT_0312eae0))) {
              lVar3 = *(long *)(lVar3 + 0x20);
            }
            FUN_009b391c();
            *piVar6 = -1;
            uVar2 = (ulong)*(uint *)(param_1 + 0x15);
          }
          uVar5 = uVar5 + 1;
        } while (uVar5 < uVar2);
      }
    }
    else {
      lVar4 = *(long *)(lVar4 + 0x18);
      while ((lVar4 != 0 && (*(int *)(*(long *)(lVar4 + 8) + 0xa4) != DAT_0312eae0))) {
        lVar4 = *(long *)(lVar4 + 0x20);
      }
      if ((int)param_1[0x15] != 0) {
        uVar2 = 0;
        do {
          FUN_009b37f0(lVar4,auStack_90,param_1[uVar2 + 0x18]);
          uStack_68 = DAT_03218fa8;
          local_70 = DAT_03218fa0;
          FUN_009b3858(lVar4,auStack_90,param_1[uVar2 + 0x18],&local_5c);
          *(undefined4 *)((long)param_1 + uVar2 * 4 + 0xac) = local_5c;
          uVar2 = uVar2 + 1;
        } while (uVar2 < *(uint *)(param_1 + 0x15));
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009df2f8(ushort *param_1,uint param_2,uint param_3)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  ushort *puVar4;
  
  uVar1 = *param_1 >> 10;
  if ((uVar1 & 0x1f) != 0) {
    uVar2 = 0;
    puVar4 = param_1 + 4;
    do {
      if (*puVar4 == param_2) goto LAB_009df32c;
      uVar2 = uVar2 + 1;
      puVar4 = puVar4 + 0x1c;
    } while (uVar2 < (uVar1 & 0x1f));
    uVar2 = 0xffffffff;
LAB_009df32c:
    if ((uVar1 & 0x1f) != 0) {
      uVar3 = 0;
      puVar4 = param_1 + 4;
      do {
        if (*puVar4 == param_3) {
          if (uVar2 == 0xffffffff) {
            return;
          }
          param_1[(long)(int)uVar2 * 0x1c + 5] =
               param_1[(long)(int)uVar2 * 0x1c + 5] | (ushort)(1 << (ulong)(uVar3 & 0x1f));
          return;
        }
        uVar3 = uVar3 + 1;
        puVar4 = puVar4 + 0x1c;
      } while (uVar3 < (uVar1 & 0x1f));
    }
  }
  return;
}




void FUN_009df380(ushort *param_1,uint param_2)

{
  uint uVar1;
  code *UNRECOVERED_JUMPTABLE;
  ushort uVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  ushort *puVar6;
  ulong uVar7;
  
  uVar2 = *param_1;
  if ((uVar2 & 0x7c00) != 0) {
    uVar3 = 0;
    puVar6 = param_1 + 4;
    do {
      if (*puVar6 == param_2) goto LAB_009df3c8;
      uVar3 = uVar3 + 1;
      puVar6 = puVar6 + 0x1c;
    } while (uVar3 < (uVar2 >> 10 & 0x1f));
  }
  uVar3 = 0x1f;
LAB_009df3c8:
  uVar1 = uVar2 & 0x1f;
  uVar4 = (ulong)uVar1;
  if (uVar1 == 0x1f) {
    uVar7 = (ulong)(uVar3 & 0x1f);
    uVar2 = uVar2 & 0xfc1f | (ushort)((uVar3 & 0x1f) << 5);
    *param_1 = uVar2;
  }
  else {
    if (uVar3 == uVar1) {
      return;
    }
    if ((1 << (ulong)(uVar3 & 0x1f) & (uint)param_1[uVar4 * 0x1c + 5]) == 0) {
      return;
    }
    uVar7 = (ulong)(uVar3 & 0x1f);
    uVar2 = uVar2 & 0xfc1f | (ushort)((uVar3 & 0x1f) << 5);
    *param_1 = uVar2;
    UNRECOVERED_JUMPTABLE = *(code **)(param_1 + uVar4 * 0x1c + 0x18);
    uVar5 = *(ulong *)(param_1 + uVar4 * 0x1c + 0x1c) & 1;
    if (uVar5 != 0 || UNRECOVERED_JUMPTABLE != (code *)0x0) {
      if (uVar5 != 0) {
        UNRECOVERED_JUMPTABLE =
             *(code **)(UNRECOVERED_JUMPTABLE +
                       *(long *)(*(long *)(param_1 + 0x3c) +
                                ((long)*(ulong *)(param_1 + uVar4 * 0x1c + 0x1c) >> 1)));
      }
      (*UNRECOVERED_JUMPTABLE)();
      uVar2 = *param_1;
    }
  }
  *param_1 = (ushort)uVar7 | uVar2 & 0xfc00 | 0x3e0;
  if ((int)uVar7 != 0x1f) {
    UNRECOVERED_JUMPTABLE = *(code **)(param_1 + uVar7 * 0x1c + 0x10);
    uVar4 = *(ulong *)(param_1 + uVar7 * 0x1c + 0x14) & 1;
    if (uVar4 != 0 || UNRECOVERED_JUMPTABLE != (code *)0x0) {
      if (uVar4 != 0) {
        UNRECOVERED_JUMPTABLE =
             *(code **)(UNRECOVERED_JUMPTABLE +
                       *(long *)(*(long *)(param_1 + 0x3c) +
                                ((long)*(ulong *)(param_1 + uVar7 * 0x1c + 0x14) >> 1)));
      }
                    /* WARNING: Could not recover jumptable at 0x009df434. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
  }
  return;
}




void FUN_009df4b8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027c39c8;
  FUN_01985bd0();
  return;
}




void FUN_009df4cc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027c39c8;
  FUN_01985bd0();
  operator_delete(param_1);
  return;
}




void FUN_009df500(long param_1)

{
  FUN_009df508(param_1 + 0x28);
  return;
}




void FUN_009df508(ushort *param_1)

{
  uint uVar1;
  code *UNRECOVERED_JUMPTABLE;
  ulong uVar2;
  
  uVar1 = *param_1 & 0x1f;
  if (uVar1 != 0x1f) {
    UNRECOVERED_JUMPTABLE = *(code **)(param_1 + (ulong)uVar1 * 0x1c + 8);
    uVar2 = *(ulong *)(param_1 + (ulong)uVar1 * 0x1c + 0xc) & 1;
    if (uVar2 != 0 || UNRECOVERED_JUMPTABLE != (code *)0x0) {
      if (uVar2 != 0) {
        UNRECOVERED_JUMPTABLE =
             *(code **)(UNRECOVERED_JUMPTABLE +
                       *(long *)(*(long *)(param_1 + 0x3c) +
                                ((long)*(ulong *)(param_1 + (ulong)uVar1 * 0x1c + 0xc) >> 1)));
      }
                    /* WARNING: Could not recover jumptable at 0x009df548. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
  }
  return;
}




long FUN_009df550(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  if (lVar1 != 0) {
    if (*(int *)(*(long *)(lVar1 + 8) + 0xa4) != DAT_02c09220) {
      lVar1 = 0;
    }
    return lVar1;
  }
  return 0;
}




void FUN_009df57c(long param_1,undefined8 param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0xa8);
  *(uint *)(param_1 + 0xa8) = uVar1 + 1;
  *(undefined8 *)(param_1 + (ulong)uVar1 * 8 + 0xc0) = param_2;
  return;
}




undefined8 FUN_009df594(void)

{
  return 0;
}




void FUN_009df59c(void)

{
  return;
}




void FUN_009df5a0(undefined8 *param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined8 *local_38;
  code *pcStack_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  *(undefined4 *)(param_1 + 6) = 6;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[8] = 0;
  uVar2 = DAT_03214ce8;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)((long)param_1 + 100) = 0xffffffff;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 9) = uVar2;
  pcStack_30 = thunk_FUN_009e04a4;
  local_38 = param_1;
  FUN_00f02e98(0xbf800000,&local_38,0,1);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009df63c(undefined8 *param_1)

{
  long lVar1;
  undefined8 *local_38;
  code *pcStack_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  pcStack_30 = thunk_FUN_009e04a4;
  local_38 = param_1;
  FUN_00f03390(&local_38);
  if ((void *)param_1[5] != (void *)0x0) {
    operator_delete__((void *)param_1[5]);
    param_1[4] = 0;
    param_1[5] = 0;
  }
  if ((void *)param_1[3] != (void *)0x0) {
    operator_delete__((void *)param_1[3]);
    param_1[2] = 0;
    param_1[3] = 0;
  }
  if ((void *)param_1[1] != (void *)0x0) {
    operator_delete__((void *)param_1[1]);
    *param_1 = 0;
    param_1[1] = 0;
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009df6c4(long param_1,int param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined4 uVar2;
  
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(int *)(param_1 + 0x54) = param_2;
  uVar2 = *(undefined4 *)(param_3 + 0x30);
  *(undefined8 *)(param_1 + 0x38) = param_4;
  *(long *)(param_1 + 0x40) = param_3 + 0x28;
  *(undefined4 *)(param_1 + 0x48) = uVar2;
  FUN_00d9eb38(param_3);
  if (param_2 == 0) {
    lVar1 = FUN_00d532e4();
    uVar2 = *(undefined4 *)(lVar1 + 0x48);
  }
  else if (param_2 == 1) {
    lVar1 = FUN_00d532e4();
    uVar2 = *(undefined4 *)(lVar1 + 0x4c);
  }
  else {
    if (param_2 != 2) {
      uVar2 = *(undefined4 *)(param_1 + 0x5c);
      goto LAB_009df734;
    }
    lVar1 = FUN_00d532e4();
    uVar2 = *(undefined4 *)(lVar1 + 0x50);
  }
  *(undefined4 *)(param_1 + 0x5c) = uVar2;
LAB_009df734:
  *(undefined4 *)(param_1 + 0x58) = uVar2;
  return;
}




void FUN_009df744(long param_1,undefined4 param_2,undefined4 param_3,long param_4,undefined8 param_5
                 )

{
  undefined4 uVar1;
  
  *(undefined4 *)(param_1 + 0x50) = 1;
  *(undefined4 *)(param_1 + 0x60) = param_2;
  *(undefined4 *)(param_1 + 100) = param_3;
  uVar1 = *(undefined4 *)(param_4 + 0x30);
  *(undefined8 *)(param_1 + 0x38) = param_5;
  *(long *)(param_1 + 0x40) = param_4 + 0x28;
  *(undefined4 *)(param_1 + 0x48) = uVar1;
  return;
}




void FUN_009df764(long param_1,undefined4 param_2)

{
  long lVar1;
  
  *(undefined4 *)(param_1 + 0x5c) = param_2;
  if (*(int *)(param_1 + 0x20) != 0) {
    lVar1 = *(long *)(param_1 + 0x28);
    do {
      if (*(code **)(lVar1 + 8) == (code *)0x0) {
        (**(code **)(lVar1 + 0x18))(*(undefined8 *)(lVar1 + 0x10));
      }
      else {
        (**(code **)(lVar1 + 8))();
      }
      lVar1 = lVar1 + 0x20;
    } while (lVar1 != *(long *)(param_1 + 0x28) + (ulong)*(uint *)(param_1 + 0x20) * 0x20);
  }
  return;
}




undefined4 FUN_009df7c0(long param_1)

{
  return *(undefined4 *)(param_1 + 0x50);
}




void FUN_009df7c8(undefined8 *param_1,long param_2)

{
  *param_1 = *(undefined8 *)(param_2 + 0x40);
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 0x48);
  return;
}




undefined4 FUN_009df7dc(long param_1)

{
  return *(undefined4 *)(param_1 + 0x5c);
}




undefined4 FUN_009df7e4(long param_1)

{
  return *(undefined4 *)(param_1 + 0x58);
}




undefined4 FUN_009df7ec(long param_1)

{
  return *(undefined4 *)(param_1 + 100);
}




void FUN_009df7f4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_009df818();
  FUN_00d72f48(uVar1,*(undefined4 *)(param_1 + 100));
  return;
}




void FUN_009df818(long param_1)

{
  long *plVar1;
  undefined8 uVar2;
  
  plVar1 = *(long **)(param_1 + 0x40);
  uVar2 = 0;
  if (plVar1 != (long *)0x0) {
    if (*(int *)(param_1 + 0x48) == (int)plVar1[1]) {
      uVar2 = (**(code **)(*plVar1 + 0x10))();
    }
    else {
      *(undefined8 *)(param_1 + 0x40) = 0;
      uVar2 = 0;
      *(undefined4 *)(param_1 + 0x48) = DAT_03214ce8;
    }
  }
  FUN_00d9eae0(uVar2);
  return;
}




char * FUN_009df870(void)

{
  return "icon_item_empty";
}




void FUN_009df87c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_009df8a0();
  FUN_00d53954(uVar1,*(undefined4 *)(param_1 + 0x5c));
  return;
}




void FUN_009df8a0(long param_1)

{
  long *plVar1;
  undefined8 uVar2;
  
  plVar1 = *(long **)(param_1 + 0x40);
  uVar2 = 0;
  if (plVar1 != (long *)0x0) {
    if (*(int *)(param_1 + 0x48) == (int)plVar1[1]) {
      uVar2 = (**(code **)(*plVar1 + 0x10))();
    }
    else {
      *(undefined8 *)(param_1 + 0x40) = 0;
      uVar2 = 0;
      *(undefined4 *)(param_1 + 0x48) = DAT_03214ce8;
    }
  }
  FUN_00d9eb38(uVar2);
  return;
}




undefined4 FUN_009df8f8(long param_1)

{
  return *(undefined4 *)(param_1 + 0x30);
}




undefined8 FUN_009df900(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  
  plVar1 = *(long **)(param_1 + 0x40);
  if (plVar1 != (long *)0x0) {
    if (*(int *)(param_1 + 0x48) == (int)plVar1[1]) {
      lVar2 = (**(code **)(*plVar1 + 0x10))();
      if ((lVar2 != 0) && (*(int *)(param_1 + 0x50) == 0)) {
        uVar3 = FUN_009df8a0(param_1);
        uVar3 = FUN_00d535a4(uVar3,*(undefined4 *)(param_1 + 0x58));
        return uVar3;
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x40) = 0;
      *(undefined4 *)(param_1 + 0x48) = DAT_03214ce8;
    }
  }
  return 0;
}




undefined1  [16] FUN_009df97c(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  undefined4 extraout_s0;
  undefined4 extraout_s0_00;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined8 extraout_var_01;
  undefined8 extraout_var_02;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  plVar1 = *(long **)(param_1 + 0x40);
  if (plVar1 != (long *)0x0) {
    if (*(int *)(param_1 + 0x48) == (int)plVar1[1]) {
      lVar2 = (**(code **)(*plVar1 + 0x10))();
      if (lVar2 != 0) {
        if (*(int *)(param_1 + 0x50) == 1) {
          uVar3 = FUN_009df818(param_1);
          FUN_00d734b0(uVar3,*(undefined4 *)(param_1 + 100));
          auVar5._4_4_ = extraout_var_00;
          auVar5._0_4_ = extraout_s0_00;
          auVar5._8_8_ = extraout_var_02;
          return auVar5;
        }
        if (*(int *)(param_1 + 0x50) == 0) {
          uVar3 = FUN_009df8a0(param_1);
          FUN_00d539e8(uVar3,*(undefined4 *)(param_1 + 0x5c));
          auVar4._4_4_ = extraout_var;
          auVar4._0_4_ = extraout_s0;
          auVar4._8_8_ = extraout_var_01;
          return auVar4;
        }
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x40) = 0;
      *(undefined4 *)(param_1 + 0x48) = DAT_03214ce8;
    }
  }
  return ZEXT816(0);
}




undefined1  [16] FUN_009dfa18(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  undefined4 extraout_s0;
  undefined4 extraout_s0_00;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined8 extraout_var_01;
  undefined8 extraout_var_02;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  plVar1 = *(long **)(param_1 + 0x40);
  if (plVar1 != (long *)0x0) {
    if (*(int *)(param_1 + 0x48) == (int)plVar1[1]) {
      lVar2 = (**(code **)(*plVar1 + 0x10))();
      if (lVar2 != 0) {
        if (*(int *)(param_1 + 0x50) == 1) {
          uVar3 = FUN_009df818(param_1);
          FUN_00d73200(uVar3,*(undefined4 *)(param_1 + 100));
          auVar5._4_4_ = extraout_var_00;
          auVar5._0_4_ = extraout_s0_00;
          auVar5._8_8_ = extraout_var_02;
          return auVar5;
        }
        if (*(int *)(param_1 + 0x50) == 0) {
          uVar3 = FUN_009df8a0(param_1);
          FUN_00d53a58(uVar3,*(undefined4 *)(param_1 + 0x5c));
          auVar4._4_4_ = extraout_var;
          auVar4._0_4_ = extraout_s0;
          auVar4._8_8_ = extraout_var_01;
          return auVar4;
        }
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x40) = 0;
      *(undefined4 *)(param_1 + 0x48) = DAT_03214ce8;
    }
  }
  return ZEXT816(0);
}




undefined1  [16] FUN_009dfab4(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  undefined4 extraout_s0;
  undefined4 extraout_s0_00;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined8 extraout_var_01;
  undefined8 extraout_var_02;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  plVar1 = *(long **)(param_1 + 0x40);
  if (plVar1 != (long *)0x0) {
    if (*(int *)(param_1 + 0x48) == (int)plVar1[1]) {
      lVar2 = (**(code **)(*plVar1 + 0x10))();
      if (lVar2 != 0) {
        if (*(int *)(param_1 + 0x50) == 1) {
          uVar3 = FUN_009df818(param_1);
          FUN_00d7349c(uVar3,*(undefined4 *)(param_1 + 100));
          auVar5._4_4_ = extraout_var_00;
          auVar5._0_4_ = extraout_s0_00;
          auVar5._8_8_ = extraout_var_02;
          return auVar5;
        }
        if (*(int *)(param_1 + 0x50) == 0) {
          uVar3 = FUN_009df8a0(param_1);
          FUN_00d53a00(uVar3,*(undefined4 *)(param_1 + 0x5c));
          auVar4._4_4_ = extraout_var;
          auVar4._0_4_ = extraout_s0;
          auVar4._8_8_ = extraout_var_01;
          return auVar4;
        }
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x40) = 0;
      *(undefined4 *)(param_1 + 0x48) = DAT_03214ce8;
    }
  }
  return ZEXT816(0);
}




undefined8 FUN_009dfb50(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  plVar1 = *(long **)(param_1 + 0x40);
  if (plVar1 != (long *)0x0) {
    if (*(int *)(param_1 + 0x48) == (int)plVar1[1]) {
      lVar2 = (**(code **)(*plVar1 + 0x10))();
      if (lVar2 != 0) {
        if (*(int *)(param_1 + 0x50) == 1) {
          uVar3 = FUN_009df818(param_1);
          uVar4 = FUN_00d73374(uVar3,*(undefined4 *)(param_1 + 100));
          if ((uVar4 & 1) != 0) {
            uVar3 = FUN_00d731ec(uVar3);
            return uVar3;
          }
          uVar3 = FUN_00d7312c(uVar3,*(undefined4 *)(param_1 + 100));
          return uVar3;
        }
        if (*(int *)(param_1 + 0x50) == 0) {
          uVar3 = FUN_009df8a0(param_1);
          uVar3 = FUN_00d53a30(uVar3,*(undefined4 *)(param_1 + 0x5c));
          return uVar3;
        }
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x40) = 0;
      *(undefined4 *)(param_1 + 0x48) = DAT_03214ce8;
    }
  }
  return 0;
}




ulong FUN_009dfc10(long param_1)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  plVar2 = *(long **)(param_1 + 0x40);
  uVar4 = 0;
  if (plVar2 != (long *)0x0) {
    if (*(int *)(param_1 + 0x48) == (int)plVar2[1]) {
      lVar3 = (**(code **)(*plVar2 + 0x10))();
      uVar4 = 0;
      if (lVar3 != 0) {
        if (*(int *)(param_1 + 0x50) == 1) {
          uVar5 = FUN_009df818(param_1);
          uVar4 = FUN_00d73374(uVar5,*(undefined4 *)(param_1 + 100));
          return uVar4;
        }
        uVar4 = 0;
        if (*(int *)(param_1 + 0x50) == 0) {
          uVar5 = FUN_009df8a0(param_1);
          uVar1 = FUN_00d53a44(uVar5,*(undefined4 *)(param_1 + 0x5c));
          uVar4 = (ulong)(1 < uVar1);
        }
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x40) = 0;
      uVar4 = 0;
      *(undefined4 *)(param_1 + 0x48) = DAT_03214ce8;
    }
  }
  return uVar4;
}




undefined8 FUN_009dfcb4(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  
  plVar1 = *(long **)(param_1 + 0x40);
  if (plVar1 != (long *)0x0) {
    if (*(int *)(param_1 + 0x48) == (int)plVar1[1]) {
      lVar2 = (**(code **)(*plVar1 + 0x10))();
      if (lVar2 != 0) {
        if (*(int *)(param_1 + 0x50) == 1) {
          uVar3 = FUN_009df818(param_1);
          uVar3 = FUN_00d73500(uVar3,*(undefined4 *)(param_1 + 100));
          return uVar3;
        }
        if (*(int *)(param_1 + 0x50) == 0) {
          uVar3 = FUN_009df8a0(param_1);
          uVar3 = FUN_00d53ba4(uVar3,*(undefined4 *)(param_1 + 0x5c));
          return uVar3;
        }
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x40) = 0;
      *(undefined4 *)(param_1 + 0x48) = DAT_03214ce8;
    }
  }
  return 4;
}




bool FUN_009dfd50(long param_1)

{
  bool bVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  float fVar7;
  float fVar8;
  
  plVar3 = *(long **)(param_1 + 0x40);
  bVar1 = false;
  if (plVar3 != (long *)0x0) {
    if (*(int *)(param_1 + 0x48) == (int)plVar3[1]) {
      lVar4 = (**(code **)(*plVar3 + 0x10))();
      bVar1 = false;
      if ((lVar4 != 0) && (bVar1 = false, *(int *)(param_1 + 0x50) == 0)) {
        uVar5 = FUN_009df8a0(param_1);
        uVar6 = FUN_00d535b8(uVar5,*(undefined4 *)(param_1 + 0x58));
        bVar1 = false;
        if ((uVar6 & 1) != 0) {
          lVar4 = (**(code **)(**(long **)(param_1 + 0x40) + 0x10))();
          lVar4 = *(long *)(lVar4 + 0x40);
          fVar7 = (*(float *)(lVar4 + 0x214) + 1.0) *
                  (*(float *)(lVar4 + 0xac) +
                  *(float *)(lVar4 + 0x160) * (*(float *)(lVar4 + 0x2c8) + 1.0));
          if (DAT_0312fc94 <= fVar7) {
            fVar7 = DAT_0312fc94;
          }
          fVar8 = DAT_0312fbd4;
          if (DAT_0312fbd4 <= fVar7) {
            fVar8 = fVar7;
          }
          bVar1 = false;
          if (1.0 <= fVar8) {
            lVar4 = (**(code **)(**(long **)(param_1 + 0x40) + 0x10))();
            lVar4 = *(long *)(lVar4 + 0x40);
            fVar7 = (*(float *)(lVar4 + 0x240) + 1.0) *
                    (*(float *)(lVar4 + 0xd8) +
                    *(float *)(lVar4 + 0x18c) * (*(float *)(lVar4 + 0x2f4) + 1.0));
            if (DAT_0312fcc0 <= fVar7) {
              fVar7 = DAT_0312fcc0;
            }
            fVar8 = DAT_0312fc00;
            if (DAT_0312fc00 <= fVar7) {
              fVar8 = fVar7;
            }
            uVar2 = FUN_00d54944(uVar5,*(undefined4 *)(param_1 + 0x58));
            bVar1 = (float)uVar2 <= fVar8;
          }
        }
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x40) = 0;
      bVar1 = false;
      *(undefined4 *)(param_1 + 0x48) = DAT_03214ce8;
    }
  }
  return bVar1;
}




bool FUN_009dfec4(long param_1)

{
  bool bVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  
  plVar3 = *(long **)(param_1 + 0x40);
  bVar1 = false;
  if (plVar3 != (long *)0x0) {
    if (*(int *)(param_1 + 0x48) == (int)plVar3[1]) {
      lVar4 = (**(code **)(*plVar3 + 0x10))();
      bVar1 = false;
      if ((lVar4 != 0) && (bVar1 = false, *(int *)(param_1 + 0x50) == 0)) {
        plVar3 = *(long **)(param_1 + 0x40);
        uVar5 = 0;
        if (plVar3 != (long *)0x0) {
          if (*(int *)(param_1 + 0x48) == (int)plVar3[1]) {
            uVar5 = (**(code **)(*plVar3 + 0x10))();
          }
          else {
            *(undefined8 *)(param_1 + 0x40) = 0;
            uVar5 = 0;
            *(undefined4 *)(param_1 + 0x48) = DAT_03214ce8;
          }
        }
        FUN_00d9ebe8(uVar5);
        iVar2 = FUN_00d787b0();
        bVar1 = iVar2 == *(int *)(param_1 + 0x58);
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x40) = 0;
      bVar1 = false;
      *(undefined4 *)(param_1 + 0x48) = DAT_03214ce8;
    }
  }
  return bVar1;
}




bool FUN_009dff84(void)

{
  int iVar1;
  
  iVar1 = FUN_009dffa0();
  return iVar1 == 0;
}




undefined8 FUN_009dffa0(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  
  plVar1 = *(long **)(param_1 + 0x40);
  if (plVar1 != (long *)0x0) {
    if (*(int *)(param_1 + 0x48) == (int)plVar1[1]) {
      lVar2 = (**(code **)(*plVar1 + 0x10))();
      if (lVar2 != 0) {
        if (*(int *)(param_1 + 0x50) == 1) {
          uVar3 = FUN_009df818(param_1);
          uVar3 = FUN_00d736f4(uVar3,*(undefined4 *)(param_1 + 100));
          return uVar3;
        }
        if (*(int *)(param_1 + 0x50) == 0) {
          uVar3 = FUN_009df8a0(param_1);
          uVar3 = FUN_00d53978(uVar3,*(undefined4 *)(param_1 + 0x5c));
          return uVar3;
        }
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x40) = 0;
      *(undefined4 *)(param_1 + 0x48) = DAT_03214ce8;
    }
  }
  return 0x400;
}

