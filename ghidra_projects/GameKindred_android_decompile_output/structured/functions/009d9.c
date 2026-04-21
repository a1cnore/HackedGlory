// functions/009d9 — 34 functions
#include "libGameKindred.h"




void thunk_FUN_009d917c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027c35d8;
  if ((*(byte *)(param_1 + 0x15) & 1) != 0) {
    operator_delete((void *)param_1[0x17]);
  }
  FUN_01985bd0(param_1);
  return;
}




void FUN_009d9044(ushort *param_1,uint param_2)

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
      if (*puVar6 == param_2) goto LAB_009d908c;
      uVar3 = uVar3 + 1;
      puVar6 = puVar6 + 0x1c;
    } while (uVar3 < (uVar2 >> 10 & 0x1f));
  }
  uVar3 = 0x1f;
LAB_009d908c:
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
                    /* WARNING: Could not recover jumptable at 0x009d90f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
  }
  return;
}




void FUN_009d917c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027c35d8;
  if ((*(byte *)(param_1 + 0x15) & 1) != 0) {
    operator_delete((void *)param_1[0x17]);
  }
  FUN_01985bd0(param_1);
  return;
}




void FUN_009d91bc(void *param_1)

{
  FUN_009d917c();
  operator_delete(param_1);
  return;
}




void FUN_009d91e0(long param_1)

{
  FUN_009d91e8(param_1 + 0x28);
  return;
}




void FUN_009d91e8(ushort *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x009d9228. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
  }
  return;
}




long FUN_009d9230(long param_1)

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




undefined1  [16] FUN_009d925c(void)

{
  return ZEXT816(0);
}




void FUN_009d9264(undefined8 *param_1)

{
  undefined2 uVar1;
  ushort *puVar2;
  
  *param_1 = &PTR_FUN_027c3610;
  puVar2 = (ushort *)(param_1 + 5);
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[0x22] = param_1;
  param_1[0x23] = 0;
  *(undefined1 *)(param_1 + 0x24) = 0;
  *(undefined2 *)((long)param_1 + 0x122) = DAT_02bf2574;
  uVar1 = DAT_02bf2570;
  param_1[0xf] = 0;
  param_1[0xe] = FUN_009d93c4;
  *(undefined4 *)(param_1 + 0xd) = 1;
  *(undefined4 *)(param_1 + 0x14) = 2;
  param_1[0x17] = FUN_009d9518;
  *(undefined2 *)(param_1 + 0x1b) = 3;
  param_1[0x1c] = FUN_009d9600;
  *(undefined4 *)(param_1 + 0x25) = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0x10] = FUN_009d93e4;
  param_1[0x11] = 0;
  param_1[0x16] = 0;
  param_1[0x15] = FUN_009d9428;
  param_1[0x1a] = 0;
  param_1[0x19] = 0;
  param_1[0x18] = 0;
  *(undefined2 *)((long)param_1 + 0xda) = 0;
  param_1[0x21] = 0;
  param_1[0x20] = 0;
  param_1[0x1f] = 0;
  param_1[0x1e] = 0;
  param_1[0x1d] = 0;
  *(undefined2 *)((long)param_1 + 0x124) = uVar1;
  *puVar2 = *puVar2 & 0x8000 | 0x13ff;
  FUN_009d96bc(puVar2,0,1);
  FUN_009d96bc(puVar2,1,2);
  FUN_009d96bc(puVar2,2,3);
  FUN_009d96bc(puVar2,3,1);
  FUN_009d96bc(puVar2,3,2);
  FUN_009d9744(puVar2,0,0,0);
  return;
}




void FUN_009d93c4(long param_1)

{
  if (*(char *)(param_1 + 0x120) != '\0') {
    FUN_009d9744(param_1 + 0x28,2,0,0);
    return;
  }
  return;
}




void FUN_009d93e4(long param_1)

{
  FUN_00ecb11c(*(undefined2 *)(param_1 + 0x124));
  *(undefined2 *)(param_1 + 0x122) = DAT_02bf2574;
  *(undefined2 *)(param_1 + 0x124) = DAT_02bf2570;
  return;
}




void FUN_009d9428(long param_1)

{
  long lVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined8 local_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (*(char *)(param_1 + 0x120) == '\0') {
    FUN_009d9744(param_1 + 0x28,3,0,0);
  }
  else {
    fVar5 = *(float *)(param_1 + 300);
    fVar3 = (float)FUN_01988c78();
    fVar3 = (float)NEON_fminnm(fVar5 + fVar3,0x3f800000);
    *(float *)(param_1 + 300) = fVar3;
    fVar3 = fVar3 + -1.0;
    fVar4 = *(float *)(*(long *)(param_1 + 0x118) + 8);
    fVar5 = (float)FUN_008f6bb4();
    lVar2 = *(long *)(param_1 + 0x118);
    *(float *)(param_1 + 0x128) = fVar5 * (fVar4 * (fVar3 * fVar3 * fVar3 + 1.0) + 0.0);
    local_48 = *(undefined8 *)(lVar2 + 0x14);
    local_40 = *(undefined4 *)(lVar2 + 0x1c);
    FUN_00ecb078(*(undefined4 *)(lVar2 + 0xc),*(undefined4 *)(lVar2 + 0x10),
                 *(undefined2 *)(param_1 + 0x124),&local_48,&DAT_03218f30);
    FUN_00ecb0f4(*(undefined4 *)(param_1 + 0x128),*(undefined2 *)(param_1 + 0x124));
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009d9518(long param_1)

{
  void *pvVar1;
  long lVar2;
  undefined2 uVar3;
  ulong local_68 [2];
  void *local_58;
  ulong local_50 [2];
  void *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  FUN_00ecb11c(*(undefined2 *)(param_1 + 0x124));
  local_50[0] = 0;
  local_50[1] = 0;
  local_40 = (void *)0x0;
  local_68[0] = 0;
  local_68[1] = 0;
  local_58 = (void *)0x0;
  FUN_00f1c904(**(undefined8 **)(param_1 + 0x118),local_50);
  pvVar1 = (void *)((ulong)local_50 | 1);
  if ((local_50[0] & 1) != 0) {
    pvVar1 = local_40;
  }
  FUN_00f1c8ec(pvVar1,local_68);
  pvVar1 = (void *)((ulong)local_68 | 1);
  if ((local_68[0] & 1) != 0) {
    pvVar1 = local_58;
  }
  uVar3 = FUN_00ecb058(pvVar1,2,1);
  *(undefined2 *)(param_1 + 0x122) = uVar3;
  uVar3 = FUN_00ecb108(*(undefined4 *)(param_1 + 0x128));
  *(undefined2 *)(param_1 + 0x124) = uVar3;
  if ((local_68[0] & 1) != 0) {
    operator_delete(local_58);
  }
  if ((local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009d9600(long param_1)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  if (*(char *)(param_1 + 0x120) == '\0') {
    fVar4 = *(float *)(param_1 + 300);
    fVar2 = (float)FUN_01988c78();
    fVar4 = fVar4 - fVar2;
    if (fVar4 <= 0.0) {
      fVar4 = 0.0;
    }
    *(float *)(param_1 + 300) = fVar4;
    fVar3 = *(float *)(*(long *)(param_1 + 0x118) + 8);
    fVar4 = 1.0 - fVar4;
    fVar2 = (float)FUN_008f6bb4();
    *(float *)(param_1 + 0x128) = fVar2 * (fVar3 - fVar4 * fVar4 * fVar3 * fVar4);
    FUN_00ecb0f4(*(undefined2 *)(param_1 + 0x124));
    if (0.001 <= ABS(*(float *)(param_1 + 0x128))) {
      return;
    }
    uVar1 = 1;
  }
  else {
    uVar1 = 2;
  }
  FUN_009d9744(param_1 + 0x28,uVar1,0,0);
  return;
}




void FUN_009d96bc(ushort *param_1,uint param_2,uint param_3)

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
      if (*puVar4 == param_2) goto LAB_009d96f0;
      uVar2 = uVar2 + 1;
      puVar4 = puVar4 + 0x1c;
    } while (uVar2 < (uVar1 & 0x1f));
    uVar2 = 0xffffffff;
LAB_009d96f0:
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




void FUN_009d9744(ushort *param_1,uint param_2)

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
      if (*puVar6 == param_2) goto LAB_009d978c;
      uVar3 = uVar3 + 1;
      puVar6 = puVar6 + 0x1c;
    } while (uVar3 < (uVar2 >> 10 & 0x1f));
  }
  uVar3 = 0x1f;
LAB_009d978c:
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
                       *(long *)(*(long *)(param_1 + 0x74) +
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
                       *(long *)(*(long *)(param_1 + 0x74) +
                                ((long)*(ulong *)(param_1 + uVar7 * 0x1c + 0x14) >> 1)));
      }
                    /* WARNING: Could not recover jumptable at 0x009d97f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
  }
  return;
}




void FUN_009d987c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027c3610;
  FUN_00ecb11c(*(undefined2 *)((long)param_1 + 0x124));
  *(undefined2 *)((long)param_1 + 0x122) = DAT_02bf2574;
  *(undefined2 *)((long)param_1 + 0x124) = DAT_02bf2570;
  FUN_01985bd0(param_1);
  return;
}




void FUN_009d98d4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027c3610;
  FUN_00ecb11c(*(undefined2 *)((long)param_1 + 0x124));
  *(undefined2 *)((long)param_1 + 0x122) = DAT_02bf2574;
  *(undefined2 *)((long)param_1 + 0x124) = DAT_02bf2570;
  FUN_01985bd0(param_1);
  operator_delete(param_1);
  return;
}




void FUN_009d9934(long param_1)

{
  long lVar1;
  
  DAT_0312f1a8 = *(uint *)(param_1 + 0x13fb0);
  *(uint *)(param_1 + 0x13fb0) = DAT_0312f1a8 + 1;
  lVar1 = param_1 + (ulong)DAT_0312f1a8 * 0x2e8;
  *(code **)(lVar1 + 0xb0) = FUN_009d9b04;
  *(code **)(lVar1 + 0xb8) = FUN_009d9b28;
  *(uint *)(lVar1 + 0x2d8) = *(uint *)(lVar1 + 0x2d8) & 0x80000000 | 0x20;
  *(uint *)(lVar1 + 0xa4) = DAT_0312f1a8;
  *(undefined4 *)(lVar1 + 0xa8) = 0x130;
  *(long *)(param_1 + 0x13fb8) = lVar1;
  FUN_01986780(param_1,5,FUN_009d99a4,0);
  return;
}




void FUN_009d99a4(long param_1)

{
  FUN_009d9a20();
  FUN_009d9abc(param_1 + 0x28);
  return;
}




void FUN_009d99c8(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x118) = param_2;
  FUN_009d9744(param_1 + 0x28,1,0,0);
  return;
}




bool FUN_009d99e8(long param_1)

{
  uint uVar1;
  
  uVar1 = *(ushort *)(param_1 + 0x28) & 0x1f;
  if (uVar1 == 0x1f) {
    return false;
  }
  return (*(ushort *)(param_1 + (ulong)uVar1 * 0x38 + 0x30) | 1) == 3;
}




void FUN_009d9a20(long param_1)

{
  long lVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  float local_38 [4];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00cedce4();
  lVar2 = FUN_00d9e390();
  if (lVar2 != 0) {
    FUN_00d55794(lVar2,local_38,0);
    lVar2 = *(long *)(param_1 + 0x118);
    local_38[0] = local_38[0] - *(float *)(lVar2 + 0x14);
    fVar3 = (float)local_38._4_8_ - (float)*(undefined8 *)(lVar2 + 0x18);
    fVar4 = SUB84(local_38._4_8_,4) - (float)((ulong)*(undefined8 *)(lVar2 + 0x18) >> 0x20);
    *(bool *)(param_1 + 0x120) =
         local_38[0] * local_38[0] + fVar3 * fVar3 + fVar4 * fVar4 <=
         *(float *)(lVar2 + 0x10) * *(float *)(lVar2 + 0x10);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009d9abc(ushort *param_1)

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
                       *(long *)(*(long *)(param_1 + 0x74) +
                                ((long)*(ulong *)(param_1 + (ulong)uVar1 * 0x1c + 0xc) >> 1)));
      }
                    /* WARNING: Could not recover jumptable at 0x009d9afc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
  }
  return;
}




undefined8 FUN_009d9b04(undefined8 param_1)

{
  FUN_009d9264();
  return param_1;
}




void FUN_009d9b28(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x009d9b30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)();
  return;
}




void FUN_009d9b34(undefined8 *param_1)

{
  uint uVar1;
  uint uVar2;
  ushort uVar3;
  undefined2 uVar4;
  long lVar5;
  undefined8 *puVar6;
  ushort *puVar7;
  undefined8 *puVar8;
  
  *param_1 = &PTR_FUN_027c3640;
  puVar7 = (ushort *)(param_1 + 5);
  *puVar7 = *puVar7 & 0x8000 | 0x3ff;
  param_1[0x22] = param_1;
  param_1[0x23] = 0;
  puVar8 = param_1 + 6;
  *(undefined4 *)puVar8 = 0;
  param_1[0x24] = 0;
  *(undefined2 *)(param_1 + 0x25) = DAT_02bf2574;
  uVar4 = DAT_02bf2570;
  *(undefined4 *)((long)param_1 + 300) = 0;
  *(undefined1 *)((long)param_1 + 0x134) = 0;
  *(undefined2 *)((long)param_1 + 0x12a) = uVar4;
  lVar5 = FUN_01985d44(param_1,DAT_0312f998);
  param_1[0x23] = lVar5;
  FUN_00d7fd38(lVar5 + 0x40,FUN_009d9d44,param_1);
  FUN_00d7fd40(param_1[0x23] + 0x40,FUN_009d9d50,param_1);
  FUN_00d7fd30(param_1[0x23] + 0x40,1);
  uVar3 = *puVar7;
  puVar6 = puVar8 + (ulong)(uVar3 >> 10 & 0x1f) * 7;
  *(undefined4 *)puVar6 = 0;
  puVar6[5] = 0;
  puVar6[6] = 0;
  puVar6[3] = 0;
  puVar6[4] = 0;
  puVar6[1] = 0;
  puVar6[2] = 0;
  uVar2 = uVar3 & 0xffff83ff;
  puVar6 = puVar8 + (ulong)(uVar3 + 0x400 >> 10 & 0x1f) * 7;
  uVar1 = (uVar3 + 0x400 & 0x7c00 | uVar2) + 0x400;
  *(undefined4 *)puVar6 = 1;
  puVar6[2] = 0;
  puVar6[1] = FUN_009d9d80;
  puVar6[5] = 0;
  puVar6[6] = 0;
  puVar6[3] = FUN_009d9da0;
  puVar6[4] = 0;
  puVar6 = puVar8 + (ulong)(uVar1 >> 10 & 0x1f) * 7;
  *(undefined4 *)puVar6 = 2;
  uVar1 = (uVar1 & 0x7c00 | uVar2) + 0x400;
  puVar6[2] = 0;
  puVar6[1] = FUN_009d9de4;
  puVar6[5] = 0;
  puVar6[6] = 0;
  puVar6[3] = FUN_009d9e84;
  puVar6[4] = 0;
  puVar8 = puVar8 + (ulong)(uVar1 >> 10 & 0x1f) * 7;
  *(undefined4 *)puVar8 = 3;
  puVar8[5] = 0;
  puVar8[6] = 0;
  puVar8[3] = 0;
  puVar8[4] = 0;
  puVar8[1] = FUN_009d9f6c;
  puVar8[2] = 0;
  *puVar7 = ((ushort)uVar1 & 0x7c00 | (ushort)uVar2) + 0x400 & 0x7c00 | (ushort)uVar2;
  FUN_009da020(puVar7,0,1);
  FUN_009da020(puVar7,1,2);
  FUN_009da020(puVar7,2,3);
  FUN_009da020(puVar7,3,1);
  FUN_009da020(puVar7,3,2);
  FUN_009da0a8(puVar7,0,0,0);
  return;
}




void FUN_009d9d44(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_009da46c(param_3,param_2,param_2);
  return;
}




void FUN_009d9d50(undefined8 param_1,long param_2,long param_3)

{
  ulong uVar1;
  
  if ((param_2 != 0) && (uVar1 = FUN_00ced270(*(undefined4 *)(param_2 + 0x260)), (uVar1 & 1) != 0))
  {
    *(undefined1 *)(param_3 + 0x134) = 0;
  }
  return;
}




void FUN_009d9d80(long param_1)

{
  if (*(char *)(param_1 + 0x134) != '\0') {
    FUN_009da0a8(param_1 + 0x28,2,0,0);
    return;
  }
  return;
}




void FUN_009d9da0(long param_1)

{
  FUN_00ecb11c(*(undefined2 *)(param_1 + 0x12a));
  *(undefined2 *)(param_1 + 0x128) = DAT_02bf2574;
  *(undefined2 *)(param_1 + 0x12a) = DAT_02bf2570;
  return;
}




void FUN_009d9de4(long param_1)

{
  float fVar1;
  float fVar2;
  
  if (*(char *)(param_1 + 0x134) != '\0') {
    fVar2 = *(float *)(param_1 + 0x130);
    fVar1 = (float)FUN_01988c78();
    fVar2 = fVar2 + fVar1;
    fVar1 = *(float *)(*(long *)(param_1 + 0x120) + 0xc);
    if (fVar1 <= fVar2) {
      fVar2 = fVar1;
    }
    *(float *)(param_1 + 0x130) = fVar2;
    fVar2 = fVar2 / fVar1 + -1.0;
    *(float *)(param_1 + 300) =
         *(float *)(*(long *)(param_1 + 0x120) + 8) * (fVar2 * fVar2 * fVar2 + 1.0) + 0.0;
    FUN_00ecb0f4(*(undefined2 *)(param_1 + 0x12a));
    return;
  }
  FUN_009da0a8(param_1 + 0x28,3,0,0);
  return;
}




void FUN_009d9e84(long param_1)

{
  void *pvVar1;
  long lVar2;
  undefined2 uVar3;
  ulong local_68 [2];
  void *local_58;
  ulong local_50 [2];
  void *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  FUN_00ecb11c(*(undefined2 *)(param_1 + 0x12a));
  local_50[0] = 0;
  local_50[1] = 0;
  local_40 = (void *)0x0;
  local_68[0] = 0;
  local_68[1] = 0;
  local_58 = (void *)0x0;
  FUN_00f1c904(*(undefined8 *)(*(long *)(param_1 + 0x120) + 0x10),local_50);
  pvVar1 = (void *)((ulong)local_50 | 1);
  if ((local_50[0] & 1) != 0) {
    pvVar1 = local_40;
  }
  FUN_00f1c8ec(pvVar1,local_68);
  pvVar1 = (void *)((ulong)local_68 | 1);
  if ((local_68[0] & 1) != 0) {
    pvVar1 = local_58;
  }
  uVar3 = FUN_00ecb058(pvVar1,4,1);
  *(undefined2 *)(param_1 + 0x128) = uVar3;
  uVar3 = FUN_00ecb108(*(undefined4 *)(param_1 + 300));
  *(undefined2 *)(param_1 + 0x12a) = uVar3;
  if ((local_68[0] & 1) != 0) {
    operator_delete(local_58);
  }
  if ((local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009d9f6c(long param_1)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  if (*(char *)(param_1 + 0x134) == '\0') {
    fVar4 = *(float *)(param_1 + 0x130);
    fVar2 = (float)FUN_01988c78();
    fVar4 = fVar4 - fVar2;
    if (fVar4 <= 0.0) {
      fVar4 = 0.0;
    }
    *(float *)(param_1 + 0x130) = fVar4;
    fVar3 = *(float *)(*(long *)(param_1 + 0x120) + 8);
    fVar2 = *(float *)(*(long *)(param_1 + 0x120) + 0xc);
    fVar2 = (fVar2 - fVar4) / fVar2;
    *(float *)(param_1 + 300) = fVar3 - fVar2 * fVar2 * fVar3 * fVar2;
    FUN_00ecb0f4(*(undefined2 *)(param_1 + 0x12a));
    if (0.001 <= ABS(*(float *)(param_1 + 300))) {
      return;
    }
    uVar1 = 1;
  }
  else {
    uVar1 = 2;
  }
  FUN_009da0a8(param_1 + 0x28,uVar1,0,0);
  return;
}

