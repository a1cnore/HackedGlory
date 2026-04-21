// functions/00a6d — 16 functions
#include "libGameKindred.h"




void FUN_00a6d0cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  byte local_60 [16];
  void *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar2 = (*(code *)*param_4)(param_2,param_1);
  uVar3 = (*(code *)*param_4)(param_3,param_2);
  if ((uVar2 & 1) == 0) {
    uVar4 = 0;
    if ((uVar3 & 1) == 0) goto LAB_00a6d264;
    FUN_008fcdb8(local_60,param_2);
    FUN_008fce60(param_2,param_3);
    FUN_008fce60(param_3,local_60);
    if ((local_60[0] & 1) != 0) {
      operator_delete(local_50);
    }
    uVar2 = (*(code *)*param_4)(param_2,param_1);
    if ((uVar2 & 1) != 0) {
      FUN_008fcdb8(local_60,param_1);
      FUN_008fce60(param_1,param_2);
      goto LAB_00a6d244;
    }
  }
  else if ((uVar3 & 1) == 0) {
    FUN_008fcdb8(local_60,param_1);
    FUN_008fce60(param_1,param_2);
    FUN_008fce60(param_2,local_60);
    if ((local_60[0] & 1) != 0) {
      operator_delete(local_50);
    }
    uVar2 = (*(code *)*param_4)(param_3,param_2);
    if ((uVar2 & 1) != 0) {
      FUN_008fcdb8(local_60,param_2);
      FUN_008fce60(param_2,param_3);
      param_2 = param_3;
LAB_00a6d244:
      FUN_008fce60(param_2,local_60);
      if ((local_60[0] & 1) != 0) {
        operator_delete(local_50);
      }
      uVar4 = 2;
      goto LAB_00a6d264;
    }
  }
  else {
    FUN_008fcdb8(local_60,param_1);
    FUN_008fce60(param_1,param_3);
    FUN_008fce60(param_3,local_60);
    if ((local_60[0] & 1) != 0) {
      operator_delete(local_50);
    }
  }
  uVar4 = 1;
LAB_00a6d264:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}




int FUN_00a6d290(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                undefined8 *param_5)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  byte local_70 [16];
  void *local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  iVar2 = FUN_00a6d0cc();
  uVar3 = (*(code *)*param_5)(param_4,param_3);
  if ((uVar3 & 1) != 0) {
    FUN_008fcdb8(local_70,param_3);
    FUN_008fce60(param_3,param_4);
    FUN_008fce60(param_4,local_70);
    if ((local_70[0] & 1) != 0) {
      operator_delete(local_60);
    }
    uVar3 = (*(code *)*param_5)(param_3,param_2);
    if ((uVar3 & 1) == 0) {
      iVar2 = iVar2 + 1;
    }
    else {
      FUN_008fcdb8(local_70,param_2);
      FUN_008fce60(param_2,param_3);
      FUN_008fce60(param_3,local_70);
      if ((local_70[0] & 1) != 0) {
        operator_delete(local_60);
      }
      uVar3 = (*(code *)*param_5)(param_2,param_1);
      if ((uVar3 & 1) == 0) {
        iVar2 = iVar2 + 2;
      }
      else {
        FUN_008fcdb8(local_70,param_1);
        FUN_008fce60(param_1,param_2);
        FUN_008fce60(param_2,local_70);
        if ((local_70[0] & 1) != 0) {
          operator_delete(local_60);
        }
        iVar2 = iVar2 + 3;
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




int FUN_00a6d3f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                undefined8 param_5,undefined8 *param_6)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  byte local_70 [16];
  void *local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  iVar2 = FUN_00a6d290();
  uVar3 = (*(code *)*param_6)(param_5,param_4);
  if ((uVar3 & 1) != 0) {
    FUN_008fcdb8(local_70,param_4);
    FUN_008fce60(param_4,param_5);
    FUN_008fce60(param_5,local_70);
    if ((local_70[0] & 1) != 0) {
      operator_delete(local_60);
    }
    uVar3 = (*(code *)*param_6)(param_4,param_3);
    if ((uVar3 & 1) == 0) {
      iVar2 = iVar2 + 1;
    }
    else {
      FUN_008fcdb8(local_70,param_3);
      FUN_008fce60(param_3,param_4);
      FUN_008fce60(param_4,local_70);
      if ((local_70[0] & 1) != 0) {
        operator_delete(local_60);
      }
      uVar3 = (*(code *)*param_6)(param_3,param_2);
      if ((uVar3 & 1) == 0) {
        iVar2 = iVar2 + 2;
      }
      else {
        FUN_008fcdb8(local_70,param_2);
        FUN_008fce60(param_2,param_3);
        FUN_008fce60(param_3,local_70);
        if ((local_70[0] & 1) != 0) {
          operator_delete(local_60);
        }
        uVar3 = (*(code *)*param_6)(param_2,param_1);
        if ((uVar3 & 1) == 0) {
          iVar2 = iVar2 + 3;
        }
        else {
          FUN_008fcdb8(local_70,param_1);
          FUN_008fce60(param_1,param_2);
          FUN_008fce60(param_2,local_70);
          if ((local_70[0] & 1) != 0) {
            operator_delete(local_60);
          }
          iVar2 = iVar2 + 4;
        }
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a6d5b4(long param_1,long param_2,undefined8 *param_3)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  byte local_80 [16];
  void *local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  FUN_00a6d0cc(param_1,param_1 + 0x18,param_1 + 0x30,param_3);
  if (param_1 + 0x48 != param_2) {
    lVar5 = 0;
    lVar6 = param_1 + 0x48;
    lVar4 = param_1 + 0x30;
    do {
      lVar3 = lVar6;
      uVar2 = (*(code *)*param_3)(lVar3,lVar4);
      if ((uVar2 & 1) != 0) {
        FUN_008fcdb8(local_80,lVar3);
        lVar6 = lVar5;
        do {
          lVar4 = param_1 + lVar6;
          FUN_008fce60(lVar4 + 0x48,lVar4 + 0x30);
          if (lVar6 == -0x30) break;
          uVar2 = (*(code *)*param_3)(local_80,lVar4 + 0x18);
          lVar6 = lVar6 + -0x18;
        } while ((uVar2 & 1) != 0);
        FUN_008fce60(lVar4 + 0x30,local_80);
        if ((local_80[0] & 1) != 0) {
          operator_delete(local_70);
        }
      }
      lVar5 = lVar5 + 0x18;
      lVar6 = lVar3 + 0x18;
      lVar4 = lVar3;
    } while (lVar3 + 0x18 != param_2);
  }
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a6d6cc(long param_1,long param_2,undefined8 *param_3)

{
  long lVar1;
  bool bVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  long lVar8;
  byte local_80 [16];
  void *local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  lVar4 = param_2 - param_1 >> 3;
  if ((ulong)(lVar4 * -0x5555555555555555) < 6) {
                    /* WARNING: Could not recover jumptable at 0x00a6d734. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&DAT_01ba1168 + *(int *)(&DAT_01ba1168 + lVar4 * -0x5555555555555554)))(1);
    return;
  }
  FUN_00a6d0cc(param_1,param_1 + 0x18,param_1 + 0x30,param_3);
  if (param_1 + 0x48 != param_2) {
    lVar4 = 0;
    iVar7 = 0;
    lVar8 = param_1 + 0x48;
    lVar6 = param_1 + 0x30;
    do {
      lVar5 = lVar8;
      uVar3 = (*(code *)*param_3)(lVar5,lVar6);
      if ((uVar3 & 1) != 0) {
        FUN_008fcdb8(local_80,lVar5);
        lVar8 = lVar4;
        do {
          lVar6 = param_1 + lVar8;
          FUN_008fce60(lVar6 + 0x48,lVar6 + 0x30);
          if (lVar8 == -0x30) break;
          uVar3 = (*(code *)*param_3)(local_80,lVar6 + 0x18);
          lVar8 = lVar8 + -0x18;
        } while ((uVar3 & 1) != 0);
        FUN_008fce60(lVar6 + 0x30,local_80);
        iVar7 = iVar7 + 1;
        if ((local_80[0] & 1) != 0) {
          operator_delete(local_70);
        }
        if (iVar7 == 8) {
          bVar2 = lVar5 + 0x18 == param_2;
          goto LAB_00a6d8a0;
        }
      }
      lVar4 = lVar4 + 0x18;
      lVar8 = lVar5 + 0x18;
      lVar6 = lVar5;
    } while (lVar5 + 0x18 != param_2);
  }
  bVar2 = true;
LAB_00a6d8a0:
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(bVar2);
  }
  return;
}




void FUN_00a6d8e4(uint *param_1,uint param_2)

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




void FUN_00a6d964(uint *param_1,uint param_2)

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




void FUN_00a6d9e4(undefined8 *param_1)

{
  uint uVar1;
  ushort uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ushort *puVar5;
  undefined8 *puVar6;
  
  FUN_00f017e8();
  *param_1 = &PTR_FUN_027c33a8;
  puVar5 = (ushort *)(param_1 + 0x11);
  *puVar5 = *puVar5 & 0x8000 | 0x3ff;
  param_1[0x27] = param_1;
  *(undefined1 *)((long)param_1 + 0x92) = 0;
  puVar6 = param_1 + 0x12;
  *(undefined2 *)puVar6 = 0;
  FUN_00f0e4a8(param_1 + 0x28);
  FUN_00f0e4a8(param_1 + 0x46);
  uVar2 = *puVar5;
  uVar1 = (uVar2 + 0x400 & 0x7c00 | uVar2 & 0xffff83ff) + 0x400;
  puVar3 = puVar6 + (ulong)(uVar2 >> 10 & 0x1f) * 7;
  puVar4 = puVar6 + (ulong)(uVar2 + 0x400 >> 10 & 0x1f) * 7;
  puVar6 = puVar6 + (ulong)(uVar1 >> 10 & 0x1f) * 7;
  *(undefined4 *)puVar3 = 0;
  puVar3[1] = 0;
  puVar3[2] = 0;
  puVar3[4] = 0;
  puVar3[3] = FUN_00a6db44;
  puVar3[6] = 0;
  puVar3[5] = FUN_00a6db60;
  *(undefined4 *)puVar4 = 1;
  puVar4[1] = 0;
  puVar4[2] = 0;
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[3] = FUN_00a6db7c;
  puVar4[4] = 0;
  uVar2 = (ushort)(uVar2 & 0xffff83ff);
  *(undefined4 *)puVar6 = 2;
  puVar6[1] = 0;
  puVar6[2] = 0;
  puVar6[5] = 0;
  puVar6[6] = 0;
  puVar6[3] = FUN_00a6dbac;
  puVar6[4] = 0;
  *puVar5 = ((ushort)uVar1 & 0x7c00 | uVar2) + 0x400 & 0x7c00 | uVar2;
  FUN_00a6dbd4(puVar5,0,2);
  FUN_00a6dbd4(puVar5,2,1);
  FUN_00a6dbd4(puVar5,1,2);
  FUN_00a6dc5c(puVar5,0,0,0);
  return;
}




void FUN_00a6db44(long param_1)

{
  *(uint *)(param_1 + 0x1c4) = *(uint *)(param_1 + 0x1c4) & 0xfffffffb;
  *(uint *)(param_1 + 0x2b4) = *(uint *)(param_1 + 0x2b4) & 0xfffffffb;
  return;
}




void FUN_00a6db60(long param_1)

{
  *(uint *)(param_1 + 0x1c4) = *(uint *)(param_1 + 0x1c4) | 4;
  *(uint *)(param_1 + 0x2b4) = *(uint *)(param_1 + 0x2b4) | 4;
  return;
}




void FUN_00a6db7c(long param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x2b4);
  if ((uVar1 & 0x7f80) == 0x1980) {
    return;
  }
  *(uint *)(param_1 + 0x2b4) = uVar1 & 0xffff8000 | uVar1 & 0x7f | 0x1980;
  FUN_0091ada4(param_1 + 0x230);
  return;
}




void FUN_00a6dbac(long param_1)

{
  if ((~*(uint *)(param_1 + 0x2b4) & 0x7f80) == 0) {
    return;
  }
  *(uint *)(param_1 + 0x2b4) = *(uint *)(param_1 + 0x2b4) | 0x7f80;
  FUN_0091ada4(param_1 + 0x230);
  return;
}




void FUN_00a6dbd4(ushort *param_1,uint param_2,uint param_3)

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
      if (*puVar4 == param_2) goto LAB_00a6dc08;
      uVar2 = uVar2 + 1;
      puVar4 = puVar4 + 0x1c;
    } while (uVar2 < (uVar1 & 0x1f));
    uVar2 = 0xffffffff;
LAB_00a6dc08:
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




void FUN_00a6dc5c(ushort *param_1,uint param_2)

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
      if (*puVar6 == param_2) goto LAB_00a6dca4;
      uVar3 = uVar3 + 1;
      puVar6 = puVar6 + 0x1c;
    } while (uVar3 < (uVar2 >> 10 & 0x1f));
  }
  uVar3 = 0x1f;
LAB_00a6dca4:
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
                       *(long *)(*(long *)(param_1 + 0x58) +
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
                       *(long *)(*(long *)(param_1 + 0x58) +
                                ((long)*(ulong *)(param_1 + uVar7 * 0x1c + 0x14) >> 1)));
      }
                    /* WARNING: Could not recover jumptable at 0x00a6dd10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00a6dd94(long *param_1)

{
  long *plVar1;
  
  plVar1 = param_1 + 0x28;
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  FUN_00f0e548(plVar1,PTR_s_build___HUDPartsCommon_atlas_02be3440,"plaque_ult_frame");
  if ((*(float *)(param_1 + 0x32) != DAT_03218ef8) ||
     (*(float *)((long)param_1 + 0x194) != _DAT_03218efc)) {
    param_1[0x32] = CONCAT44(_DAT_03218efc,DAT_03218ef8);
    FUN_0091ada4(plVar1);
  }
  if ((*(float *)(param_1 + 0x30) != DAT_03218ef8) ||
     (*(float *)((long)param_1 + 0x184) != _DAT_03218efc)) {
    param_1[0x30] = CONCAT44(_DAT_03218efc,DAT_03218ef8);
    FUN_0091ada4(plVar1);
  }
  if ((*(float *)(param_1 + 0x31) != 1.0) || (*(float *)((long)param_1 + 0x18c) != 1.4)) {
    param_1[0x31] = 0x3fb333333f800000;
    FUN_0091ada4(plVar1);
  }
  FUN_00f0e670(plVar1,&DAT_01bee7f6,2);
  plVar1 = param_1 + 0x46;
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  FUN_00f0e548(plVar1,PTR_s_build___HUDPartsCommon_atlas_02be3440,"plaque_ult_pip");
  if ((*(float *)(param_1 + 0x50) != DAT_03218ef8) ||
     (*(float *)((long)param_1 + 0x284) != _DAT_03218efc)) {
    param_1[0x50] = CONCAT44(_DAT_03218efc,DAT_03218ef8);
    FUN_0091ada4(plVar1);
  }
  if ((*(float *)(param_1 + 0x4e) != 7.0) || (*(float *)((long)param_1 + 0x274) != 8.0)) {
    param_1[0x4e] = 0x4100000040e00000;
    FUN_0091ada4(plVar1);
  }
  if ((*(float *)(param_1 + 0x4f) == 1.4) && (*(float *)((long)param_1 + 0x27c) == 1.4)) {
    return;
  }
  param_1[0x4f] = 0x3fb333333fb33333;
  FUN_0091ada4(plVar1);
  return;
}




void FUN_00a6df78(long param_1,uint param_2,ulong param_3)

{
  ushort *puVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  
  if ((param_3 & 1) == 0) {
    if (param_2 < 7) {
      uVar4 = *(uint *)(&DAT_01ba1280 + (long)(int)param_2 * 4);
    }
    else {
      uVar4 = 3;
    }
  }
  else {
    uVar4 = 1;
  }
  puVar1 = (ushort *)(param_1 + 0x88);
  uVar2 = FUN_00a6e040(puVar1,uVar4);
  if ((uVar2 & 1) != 0) {
    uVar3 = *puVar1 & 0x1f;
    if (uVar3 != 0x1f) {
      uVar3 = (uint)*(ushort *)(param_1 + (ulong)uVar3 * 0x38 + 0x90);
    }
    if (uVar4 != uVar3) {
      FUN_00a6dc5c(puVar1,uVar4,0,0);
      return;
    }
  }
  return;
}

