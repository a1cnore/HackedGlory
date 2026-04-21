// functions/009da — 32 functions
#include "libGameKindred.h"




void FUN_009da020(ushort *param_1,uint param_2,uint param_3)

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
      if (*puVar4 == param_2) goto LAB_009da054;
      uVar2 = uVar2 + 1;
      puVar4 = puVar4 + 0x1c;
    } while (uVar2 < (uVar1 & 0x1f));
    uVar2 = 0xffffffff;
LAB_009da054:
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




void FUN_009da0a8(ushort *param_1,uint param_2)

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
      if (*puVar6 == param_2) goto LAB_009da0f0;
      uVar3 = uVar3 + 1;
      puVar6 = puVar6 + 0x1c;
    } while (uVar3 < (uVar2 >> 10 & 0x1f));
  }
  uVar3 = 0x1f;
LAB_009da0f0:
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
                    /* WARNING: Could not recover jumptable at 0x009da15c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
  }
  return;
}




void FUN_009da1e0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027c3640;
  FUN_00ecb11c(*(undefined2 *)((long)param_1 + 0x12a));
  *(undefined2 *)(param_1 + 0x25) = DAT_02bf2574;
  *(undefined2 *)((long)param_1 + 0x12a) = DAT_02bf2570;
  FUN_01985bd0(param_1);
  return;
}




void FUN_009da238(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027c3640;
  FUN_00ecb11c(*(undefined2 *)((long)param_1 + 0x12a));
  *(undefined2 *)(param_1 + 0x25) = DAT_02bf2574;
  *(undefined2 *)((long)param_1 + 0x12a) = DAT_02bf2570;
  FUN_01985bd0(param_1);
  operator_delete(param_1);
  return;
}




void FUN_009da298(long param_1)

{
  long lVar1;
  
  DAT_0312ee20 = *(uint *)(param_1 + 0x13fb0);
  *(uint *)(param_1 + 0x13fb0) = DAT_0312ee20 + 1;
  lVar1 = param_1 + (ulong)DAT_0312ee20 * 0x2e8;
  *(code **)(lVar1 + 0xb0) = FUN_009da58c;
  *(code **)(lVar1 + 0xb8) = FUN_009da5b0;
  *(uint *)(lVar1 + 0x2d8) = *(uint *)(lVar1 + 0x2d8) & 0x80000000 | 0x10;
  *(uint *)(lVar1 + 0xa4) = DAT_0312ee20;
  *(undefined4 *)(lVar1 + 0xa8) = 0x138;
  *(long *)(param_1 + 0x13fb8) = lVar1;
  FUN_01986780(param_1,5,FUN_009da308,0);
  return;
}




void FUN_009da308(long param_1)

{
  FUN_009da424(param_1 + 0x28);
  return;
}




void FUN_009da310(long param_1,long param_2)

{
  long lVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 local_248 [64];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  plVar4 = *(long **)(param_2 + 0x20);
  puVar3 = (undefined8 *)*plVar4;
  if (puVar3 == (undefined8 *)0x0) {
    uVar5 = 0;
  }
  else {
    uVar5 = 0;
    do {
      local_248[uVar5 & 0xffffffff] = *puVar3;
      puVar3 = (undefined8 *)plVar4[uVar5 + 1];
      uVar5 = uVar5 + 1;
    } while (puVar3 != (undefined8 *)0x0);
  }
  uVar6 = *(undefined8 *)(param_1 + 0x118);
  uVar2 = FUN_00cedce4();
  FUN_00d796f8(0xff7fffff,uVar6,uVar2,local_248,uVar5 & 0xffffffff);
  *(long *)(param_1 + 0x120) = param_2;
  FUN_009da0a8(param_1 + 0x28,1,0,0);
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




bool FUN_009da3e0(long param_1)

{
  uint uVar1;
  
  uVar1 = *(ushort *)(param_1 + 0x28) & 0x1f;
  if (uVar1 == 0x1f) {
    return false;
  }
  return (*(ushort *)(param_1 + (ulong)uVar1 * 0x38 + 0x30) | 1) == 3;
}




undefined8 FUN_009da418(long param_1)

{
  return **(undefined8 **)(param_1 + 0x120);
}




void FUN_009da424(ushort *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x009da464. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
  }
  return;
}




void FUN_009da46c(long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  
  if (param_3 == 0) {
    return;
  }
  uVar2 = FUN_00ced270(*(undefined4 *)(param_3 + 0x260));
  if ((uVar2 & 1) != 0) {
    *(undefined1 *)(param_1 + 0x134) = 1;
  }
  uVar5 = 0xffff0000;
  lVar3 = param_3;
LAB_009da4ec:
  do {
    do {
      lVar4 = lVar3;
      if ((lVar4 != param_3) &&
         (lVar3 = FUN_019865b4(*(undefined8 *)(lVar4 + 8),0x4ccb075d), lVar3 != 0)) {
        (**(code **)(lVar3 + 8))(lVar4,param_1);
      }
      if (((uVar5 & 0xffff) < uVar5 >> 0x10) && (lVar3 = *(long *)(lVar4 + 0x18), lVar3 != 0)) {
        uVar5 = uVar5 & 0xffff0000 | uVar5 + 1 & 0xffff;
        goto LAB_009da4ec;
      }
      if ((uVar5 & 0xffff) == 0) {
        return;
      }
      lVar3 = *(long *)(lVar4 + 0x20);
    } while (*(long *)(lVar4 + 0x20) != 0);
    lVar4 = *(long *)(lVar4 + 0x10);
    if (lVar4 == 0) {
      return;
    }
    uVar1 = uVar5 - 1 & 0xffff;
    if (uVar1 == 0) {
      return;
    }
    uVar5 = uVar1 | uVar5 & 0xffff0000;
    while (lVar3 = *(long *)(lVar4 + 0x20), lVar3 == 0) {
      if ((uVar5 - 1 & 0xffff) == 0) {
        return;
      }
      lVar4 = *(long *)(lVar4 + 0x10);
      uVar5 = uVar5 & 0xffff0000 | uVar5 - 1 & 0xffff;
      if (lVar4 == 0) {
        return;
      }
    }
  } while( true );
}




void FUN_009da55c(long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  
  if ((param_3 != 0) && (uVar1 = FUN_00ced270(*(undefined4 *)(param_3 + 0x260)), (uVar1 & 1) != 0))
  {
    *(undefined1 *)(param_1 + 0x134) = 0;
  }
  return;
}




undefined8 FUN_009da58c(undefined8 param_1)

{
  FUN_009d9b34();
  return param_1;
}




void FUN_009da5b0(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x009da5b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)();
  return;
}




void FUN_009da5bc(undefined8 *param_1)

{
  undefined2 uVar1;
  ushort *puVar2;
  
  *param_1 = &PTR_FUN_02baef70;
  FUN_019892f4(param_1 + 5);
  *param_1 = &PTR_FUN_027c3670;
  param_1[5] = &PTR_FUN_027c36a0;
  puVar2 = (ushort *)(param_1 + 7);
  param_1[0x32] = param_1;
  *(undefined2 *)((long)param_1 + 0x44) = 0;
  *(undefined2 *)(param_1 + 0x33) = DAT_02bf2574;
  uVar1 = DAT_02bf2570;
  param_1[0x34] = 0;
  *(undefined2 *)((long)param_1 + 0x19a) = uVar1;
  *(undefined4 *)(param_1 + 0x35) = DAT_03214ce8;
  *(undefined4 *)(param_1 + 0x37) = DAT_03218f38;
  param_1[0x36] = DAT_03218f30;
  *(undefined8 *)((long)param_1 + 0x1c4) = 0x400000003f800000;
  *(undefined8 *)((long)param_1 + 0x1bc) = 0;
  *(undefined4 *)((long)param_1 + 0x1cc) = 0x41f00000;
  *(undefined2 *)(param_1 + 0x1d) = 3;
  param_1[0x25] = FUN_009da9b8;
  *(undefined2 *)(param_1 + 0x2b) = 5;
  *(undefined2 *)(param_1 + 0x16) = 2;
  param_1[0x18] = 0;
  param_1[0x17] = FUN_009da800;
  *(undefined2 *)(param_1 + 0x24) = 4;
  *(undefined4 *)(param_1 + 0xf) = 1;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  *(undefined4 *)((long)param_1 + 0x1d4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined2 *)((long)param_1 + 0xb2) = 0;
  param_1[0x19] = FUN_009da8ac;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1f] = 0;
  param_1[0x1e] = FUN_009da958;
  *(undefined2 *)((long)param_1 + 0xea) = 0;
  param_1[0x20] = FUN_009da984;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  *(undefined2 *)((long)param_1 + 0x122) = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x28] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  *(undefined2 *)((long)param_1 + 0x15a) = 0;
  param_1[0x2e] = thunk_FUN_01985ca8;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x27] = FUN_009daa68;
  param_1[0x26] = 0;
  *(byte *)(param_1 + 0x3a) = *(byte *)(param_1 + 0x3a) & 0xf0 | 0xc;
  *puVar2 = *puVar2 & 0x8000 | 0x1bff;
  FUN_009daa74(puVar2,0,1);
  FUN_009daa74(puVar2,1,2);
  FUN_009daa74(puVar2,2,3);
  FUN_009daa74(puVar2,2,4);
  FUN_009daa74(puVar2,2,5);
  FUN_009daa74(puVar2,3,2);
  FUN_009daa74(puVar2,3,4);
  FUN_009daa74(puVar2,4,5);
  FUN_009daafc(puVar2,0,0,0);
  return;
}




void FUN_009da800(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  float fVar3;
  
  FUN_00ecb078(*(undefined4 *)(param_1 + 0x1c8),*(undefined4 *)(param_1 + 0x1cc),
               *(undefined2 *)(param_1 + 0x19a),param_1 + 0x1b0,&DAT_03218f30);
  fVar3 = *(float *)(param_1 + 0x1bc);
  if ((*(byte *)(param_1 + 0x1d0) & 8) != 0) {
    fVar3 = *(float *)(param_1 + 0x1bc) * DAT_02be32b0;
  }
  FUN_00ecb0f4(fVar3,*(undefined2 *)(param_1 + 0x19a));
  if (((*(byte *)(param_1 + 0x1d0) >> 2 & 1) == 0) || (0.001 < *(float *)(param_1 + 0x1bc))) {
    uVar1 = FUN_00ecb1f0(*(undefined2 *)(param_1 + 0x19a));
    if ((uVar1 & 1) != 0) {
      return;
    }
    uVar2 = 5;
  }
  else {
    uVar2 = 3;
  }
  FUN_009daafc(param_1 + 0x38,uVar2,0,0);
  return;
}




void FUN_009da8ac(long param_1)

{
  undefined8 uVar1;
  float fVar2;
  
  FUN_009dae9c();
  FUN_009daf28(param_1);
  FUN_009db020(param_1);
  fVar2 = 0.0;
  if ((*(byte *)(param_1 + 0x1d0) & 1) == 0) {
    fVar2 = *(float *)(param_1 + 0x1c0);
  }
  *(float *)(param_1 + 0x1bc) = fVar2;
  if ((*(byte *)(param_1 + 0x1d0) & 8) != 0) {
    fVar2 = fVar2 * DAT_02be32b0;
  }
  uVar1 = FUN_00ecb108(fVar2,*(undefined2 *)(param_1 + 0x198));
  *(short *)(param_1 + 0x19a) = (short)uVar1;
  if (((uint)uVar1 & 0xffff) == (uint)DAT_02bf2570) {
    FUN_009daafc(param_1 + 0x38,5,0,0);
    return;
  }
  FUN_00ecb078(*(undefined4 *)(param_1 + 0x1c8),*(undefined4 *)(param_1 + 0x1cc),uVar1,
               param_1 + 0x1b0,&DAT_03218f30);
  return;
}




void FUN_009da958(long param_1)

{
  if ((*(float *)(param_1 + 0x1bc) <= 0.0) && ((*(byte *)(param_1 + 0x1d0) >> 2 & 1) != 0)) {
    return;
  }
  FUN_009daafc(param_1 + 0x38,2,0,0);
  return;
}




void FUN_009da984(long param_1)

{
  FUN_00ecb11c(*(undefined2 *)(param_1 + 0x19a));
  *(undefined2 *)(param_1 + 0x19a) = DAT_02bf2570;
  return;
}




void FUN_009da9b8(long param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = (float)FUN_01988c78();
  fVar2 = *(float *)(param_1 + 0x1c0);
  fVar3 = -1.0;
  if (*(float *)(param_1 + 0x1bc) <= fVar2) {
    fVar3 = 1.0;
  }
  fVar1 = *(float *)(param_1 + 0x1bc) + fVar1 * fVar3 * 0.25;
  if (fVar2 <= fVar1) {
    fVar1 = fVar2;
  }
  if (fVar1 <= 0.0) {
    fVar1 = 0.0;
  }
  *(float *)(param_1 + 0x1bc) = fVar1;
  if ((*(byte *)(param_1 + 0x1d0) & 8) != 0) {
    fVar1 = DAT_02be32b0 * fVar1;
  }
  FUN_00ecb0f4(fVar1,*(undefined2 *)(param_1 + 0x19a));
  if (ABS(*(float *)(param_1 + 0x1bc)) < 0.001) {
    FUN_009daafc(param_1 + 0x38,5,0,0);
    return;
  }
  return;
}




void FUN_009daa68(long param_1)

{
  *(undefined8 *)(param_1 + 0x1c0) = 0;
  return;
}




void FUN_009daa74(ushort *param_1,uint param_2,uint param_3)

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
      if (*puVar4 == param_2) goto LAB_009daaa8;
      uVar2 = uVar2 + 1;
      puVar4 = puVar4 + 0x1c;
    } while (uVar2 < (uVar1 & 0x1f));
    uVar2 = 0xffffffff;
LAB_009daaa8:
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




void FUN_009daafc(ushort *param_1,uint param_2)

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
      if (*puVar6 == param_2) goto LAB_009dab44;
      uVar3 = uVar3 + 1;
      puVar6 = puVar6 + 0x1c;
    } while (uVar3 < (uVar2 >> 10 & 0x1f));
  }
  uVar3 = 0x1f;
LAB_009dab44:
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
                       *(long *)(*(long *)(param_1 + 0xac) +
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
                       *(long *)(*(long *)(param_1 + 0xac) +
                                ((long)*(ulong *)(param_1 + uVar7 * 0x1c + 0x14) >> 1)));
      }
                    /* WARNING: Could not recover jumptable at 0x009dabb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
  }
  return;
}




void FUN_009dac34(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027c3670;
  param_1[5] = &PTR_FUN_027c36a0;
  FUN_00ecb11c(*(undefined2 *)((long)param_1 + 0x19a));
  FUN_0198931c(param_1 + 5);
  FUN_01985bd0(param_1);
  return;
}




void FUN_009dac80(long param_1)

{
  FUN_009dac34(param_1 + -0x28);
  return;
}




void FUN_009dac88(void *param_1)

{
  FUN_009dac34();
  operator_delete(param_1);
  return;
}




void FUN_009dacac(long param_1)

{
  FUN_009dac34((void *)(param_1 + -0x28));
  operator_delete((void *)(param_1 + -0x28));
  return;
}




void FUN_009dacd4(long param_1)

{
  long lVar1;
  
  DAT_0312ebc0 = *(uint *)(param_1 + 0x13fb0);
  *(uint *)(param_1 + 0x13fb0) = DAT_0312ebc0 + 1;
  lVar1 = param_1 + (ulong)DAT_0312ebc0 * 0x2e8;
  *(code **)(lVar1 + 0xb0) = FUN_009db49c;
  *(code **)(lVar1 + 0xb8) = FUN_009db4c0;
  *(uint *)(lVar1 + 0x2d8) = *(uint *)(lVar1 + 0x2d8) & 0x80000000 | 0x40;
  *(uint *)(lVar1 + 0xa4) = DAT_0312ebc0;
  *(undefined4 *)(lVar1 + 0xa8) = 0x1d8;
  *(long *)(param_1 + 0x13fb8) = lVar1;
  FUN_01986780(param_1,5,FUN_009dad44,0);
  return;
}




void FUN_009dad44(long param_1)

{
  float fVar1;
  float fVar2;
  
  FUN_009dae54(param_1 + 0x38);
  FUN_009dae9c(param_1);
  FUN_009daf28(param_1);
  FUN_009db020(param_1);
  if ((DAT_0312f9a8 == '\0') || (DAT_0312f9ac != '\0')) {
LAB_009dadc0:
    fVar1 = DAT_02be32b4;
    if (DAT_0312f9a8 != '\0') {
      fVar2 = (float)FUN_01988c78();
      DAT_02be32b4 = fVar1 - fVar2;
      if (DAT_02be32b4 <= 0.0) {
        DAT_02be32b4 = 0.0;
      }
      fVar2 = 1.0;
      fVar1 = 1.0 - DAT_02be32b4;
      fVar1 = fVar1 * fVar1 * fVar1 * -0.8;
      goto LAB_009dae38;
    }
  }
  else {
    fVar2 = DAT_0312f9b0 + DAT_0312f9b4;
    FUN_009bbfb0();
    fVar1 = (float)FUN_009bc268();
    if (fVar1 <= fVar2) goto LAB_009dadc0;
    DAT_0312f9a8 = '\0';
  }
  fVar1 = DAT_02be32b4;
  fVar2 = (float)FUN_01988c78();
  DAT_02be32b4 = (float)NEON_fminnm(fVar1 + fVar2,0x3f800000);
  fVar1 = DAT_02be32b4 + -1.0;
  fVar2 = 0.2;
  fVar1 = fVar1 * fVar1 * fVar1 + 1.0;
LAB_009dae38:
  DAT_02be32b0 = fVar1 + fVar2;
  return;
}




void FUN_009dae54(ushort *param_1)

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
                       *(long *)(*(long *)(param_1 + 0xac) +
                                ((long)*(ulong *)(param_1 + (ulong)uVar1 * 0x1c + 0xc) >> 1)));
      }
                    /* WARNING: Could not recover jumptable at 0x009dae94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
  }
  return;
}




void FUN_009dae9c(long param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = *(long **)(param_1 + 0x1a0);
  if (plVar1 != (long *)0x0) {
    if (*(int *)(param_1 + 0x1a8) == (int)plVar1[1]) {
      lVar2 = (**(code **)(*plVar1 + 0x10))();
      if (lVar2 != 0) {
        FUN_00d55794(lVar2,param_1 + 0x1b0,0);
        FUN_00ecb078(*(undefined4 *)(param_1 + 0x1c8),*(undefined4 *)(param_1 + 0x1cc),
                     *(undefined2 *)(param_1 + 0x19a),param_1 + 0x1b0,&DAT_03218f30);
        return;
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x1a0) = 0;
      *(undefined4 *)(param_1 + 0x1a8) = DAT_03214ce8;
    }
  }
  return;
}




void FUN_009daf28(long param_1)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if ((*(byte *)(param_1 + 0x1d0) >> 1 & 1) == 0) goto LAB_009daff8;
  plVar3 = *(long **)(param_1 + 0x1a0);
  if (plVar3 == (long *)0x0) {
LAB_009dafa8:
    FUN_009bbfb0();
    uVar6 = FUN_009bdba0();
    if ((uVar6 & 1) != 0) {
      FUN_009bbfb0();
      FUN_009bd5c8();
      local_40 = *(undefined4 *)(param_1 + 0x1b8);
      local_48 = *(undefined8 *)(param_1 + 0x1b0);
      local_3c = 0x40000000;
      uVar5 = FUN_009b806c();
      iVar2 = FUN_019ba2bc(uVar5,&local_48);
      if (iVar2 != 1) {
        *(undefined4 *)(param_1 + 0x1c0) = *(undefined4 *)(param_1 + 0x1c4);
        goto LAB_009daff8;
      }
    }
  }
  else {
    if (*(int *)(param_1 + 0x1a8) != (int)plVar3[1]) {
      *(undefined8 *)(param_1 + 0x1a0) = 0;
      *(undefined4 *)(param_1 + 0x1a8) = DAT_03214ce8;
      goto LAB_009dafa8;
    }
    lVar4 = (**(code **)(*plVar3 + 0x10))();
    if (lVar4 == 0) goto LAB_009dafa8;
    uVar5 = FUN_009bbfb0();
    uVar6 = FUN_009bc11c(uVar5,lVar4);
    if ((uVar6 & 1) != 0) goto LAB_009dafa8;
  }
  *(undefined4 *)(param_1 + 0x1c0) = 0;
LAB_009daff8:
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

