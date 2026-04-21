// functions/00a18 — 21 functions
#include "libGameKindred.h"




void FUN_00a18040(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  long lVar1;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined1 auStack_60 [24];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_68 = (undefined4)param_1;
  uStack_64 = (undefined4)param_2;
  FUN_00caca18(auStack_60,&local_68);
  FUN_00a1fe78(param_1,param_2,auStack_60);
  FUN_00a1472c(param_3,auStack_60,param_4);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 FUN_00a180d0(undefined8 param_1)

{
  FUN_00a11504();
  return param_1;
}




void FUN_00a180f4(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00a180fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)();
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00a18100(undefined8 *param_1)

{
  ushort uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ushort *puVar5;
  
  *param_1 = &PTR_thunk_FUN_01985bd0_027c8328;
  puVar5 = (ushort *)(param_1 + 5);
  *puVar5 = *puVar5 & 0x8000 | 0x3ff;
  *(undefined2 *)(param_1 + 6) = 0;
  param_1[0x14] = param_1;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x17) = DAT_03218f38;
  param_1[0x16] = DAT_03218f30;
  *(undefined4 *)((long)param_1 + 0xc4) = DAT_03218f38;
  uVar2 = DAT_03218f30;
  *(undefined2 *)(param_1 + 0x19) = 0;
  *(undefined8 *)((long)param_1 + 0xbc) = uVar2;
  uVar2 = _DAT_03218ef8;
  puVar3 = param_1 + 0x1e;
  *(undefined4 *)((long)param_1 + 0xd4) = 0;
  *(undefined1 *)((long)param_1 + 0xe5) = 0;
  *(undefined1 *)((long)param_1 + 0xec) = 0;
  *(undefined8 *)((long)param_1 + 0xcc) = uVar2;
  do {
    *puVar3 = 0;
    *(byte *)(puVar3 + 1) = *(byte *)(puVar3 + 1) & 0xf8;
    puVar3 = (undefined8 *)((long)puVar3 + 0xc);
  } while (puVar3 != param_1 + 0x21);
  puVar3 = param_1 + 0x21;
  do {
    *puVar3 = 0;
    *(byte *)(puVar3 + 1) = *(byte *)(puVar3 + 1) & 0xf8;
    puVar3 = (undefined8 *)((long)puVar3 + 0xc);
  } while (puVar3 != param_1 + 0x24);
  uVar1 = *(ushort *)(param_1 + 5);
  puVar4 = param_1 + (ulong)(uVar1 >> 10 & 0x1f) * 7 + 6;
  puVar3 = param_1 + (ulong)(uVar1 + 0x400 >> 10 & 0x1f) * 7 + 6;
  *(undefined4 *)puVar4 = 0;
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[3] = 0;
  puVar4[4] = 0;
  puVar4[1] = 0;
  puVar4[2] = 0;
  *(undefined4 *)puVar3 = 1;
  puVar3[1] = 0;
  puVar3[2] = 0;
  puVar3[5] = 0;
  puVar3[6] = 0;
  puVar3[3] = FUN_00a1825c;
  puVar3[4] = 0;
  *(ushort *)(param_1 + 5) =
       ((ushort)(uVar1 + 0x400) & 0x7c00 | uVar1 & 0x83ff) + 0x400 & 0x7c00 | uVar1 & 0x83ff;
  FUN_00a18270(puVar5,0,1);
  FUN_00a182f8(puVar5,0,0,0);
  return;
}




void FUN_00a1825c(long param_1)

{
  FUN_009ddc7c(*(undefined8 *)(param_1 + 0xa8),*(undefined1 *)(param_1 + 0xec),
               *(undefined4 *)(param_1 + 0xe8));
  return;
}




void FUN_00a18270(ushort *param_1,uint param_2,uint param_3)

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
      if (*puVar4 == param_2) goto LAB_00a182a4;
      uVar2 = uVar2 + 1;
      puVar4 = puVar4 + 0x1c;
    } while (uVar2 < (uVar1 & 0x1f));
    uVar2 = 0xffffffff;
LAB_00a182a4:
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




void FUN_00a182f8(ushort *param_1,uint param_2)

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
      if (*puVar6 == param_2) goto LAB_00a18340;
      uVar3 = uVar3 + 1;
      puVar6 = puVar6 + 0x1c;
    } while (uVar3 < (uVar2 >> 10 & 0x1f));
  }
  uVar3 = 0x1f;
LAB_00a18340:
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
                    /* WARNING: Could not recover jumptable at 0x00a183ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
  }
  return;
}




void FUN_00a18430(long param_1)

{
  long lVar1;
  
  DAT_0312ee00 = *(uint *)(param_1 + 0x13fb0);
  *(uint *)(param_1 + 0x13fb0) = DAT_0312ee00 + 1;
  lVar1 = param_1 + (ulong)DAT_0312ee00 * 0x2e8;
  *(code **)(lVar1 + 0xb0) = FUN_00a19330;
  *(code **)(lVar1 + 0xb8) = FUN_00a19354;
  *(uint *)(lVar1 + 0xa4) = DAT_0312ee00;
  *(undefined4 *)(lVar1 + 0xa8) = 0x120;
  *(uint *)(lVar1 + 0x2d8) = *(uint *)(lVar1 + 0x2d8) & 0x80000000 | 1;
  *(long *)(param_1 + 0x13fb8) = lVar1;
  FUN_01986780(param_1,2,FUN_00a184d0,0);
  FUN_01986780(param_1,4,FUN_00a184d4,0);
  return;
}




void FUN_00a184d0(void)

{
  return;
}




void FUN_00a184d4(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  float *pfVar5;
  undefined4 *puVar6;
  ulong uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  uint local_4c;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  puVar6 = (undefined4 *)(param_1 + 0xf0);
  local_4c = 0;
  uVar2 = FUN_00a18744(param_1,puVar6,2,&local_4c);
  uVar7 = (ulong)local_4c;
  if (local_4c == 2) {
    fVar8 = *(float *)(param_1 + 0xf0) - *(float *)(param_1 + 0xfc);
    fVar9 = *(float *)(param_1 + 0xf4) - *(float *)(param_1 + 0x100);
    fVar8 = fVar8 * fVar8 + fVar9 * fVar9;
    fVar9 = SQRT(fVar8);
    if (NAN(fVar9)) {
      fVar9 = sqrtf(fVar8);
    }
    fVar8 = *(float *)(param_1 + 0x108) - *(float *)(param_1 + 0x114);
    fVar10 = *(float *)(param_1 + 0x10c) - *(float *)(param_1 + 0x118);
    fVar10 = fVar8 * fVar8 + fVar10 * fVar10;
    fVar8 = SQRT(fVar10);
    if (NAN(fVar8)) {
      fVar8 = sqrtf(fVar10);
    }
    if ((((*(byte *)(param_1 + 0x110) >> 2 & 1) == 0) ||
        ((*(byte *)(param_1 + 0x11c) >> 2 & 1) == 0)) ||
       (fVar8 = fVar8 * 0.3 - fVar9 * 0.3, ABS(fVar8) < 2.0)) {
      pfVar5 = (float *)(param_1 + 0xcc);
      fVar8 = (float)NEON_fminnm(*pfVar5 + (*(float *)(param_1 + 0xf4) - *(float *)(param_1 + 0x10c)
                                           ) * 0.3,0x420c0000);
      if (fVar8 <= -48.0) {
        fVar8 = -48.0;
      }
      *pfVar5 = fVar8;
      *(float *)(param_1 + 0xd0) =
           (*(float *)(param_1 + 0xf0) - *(float *)(param_1 + 0x108)) * 0.3 +
           *(float *)(param_1 + 0xd0);
      FUN_009bbfb0();
      uVar3 = FUN_009bd5c8();
      FUN_009b825c(uVar3,pfVar5);
    }
    else {
      fVar8 = (float)NEON_fminnm(fVar8 * 0.5 + *(float *)(param_1 + 0xd4),0x40a00000);
      if (fVar8 <= -20.0) {
        fVar8 = -20.0;
      }
      *(float *)(param_1 + 0xd4) = fVar8;
      FUN_009bbfb0();
      FUN_009bd5c8();
      FUN_009b826c(*(undefined4 *)(param_1 + 0xd4));
    }
    *(undefined1 *)(param_1 + 0xe4) = 0;
    *(undefined1 *)(param_1 + 200) = 0;
    *(undefined4 *)(param_1 + 0xe0) = DAT_03218f38;
    *(undefined8 *)(param_1 + 0xd8) = DAT_03218f30;
  }
  else if ((uVar2 & 1) == 0) {
    lVar4 = 0;
    do {
      *(byte *)(param_1 + 0xf8 + lVar4) = *(byte *)(param_1 + 0xf8 + lVar4) & 0xfd;
      lVar4 = lVar4 + 0xc;
    } while (lVar4 != 0x18);
    if (*(char *)(param_1 + 200) == '\0') {
      if (*(char *)(param_1 + 0xe4) == '\0') goto LAB_00a186d8;
    }
    else {
      *(undefined2 *)(param_1 + 200) = 0;
      *(undefined1 *)(param_1 + 0xe4) = 1;
    }
    FUN_00a18aa8(param_1);
  }
  else if (local_4c != 0) {
    do {
      if (((*(long *)(param_1 + 0xa8) == 0) || ((*(byte *)(puVar6 + 2) & 1) == 0)) ||
         (uVar2 = FUN_009ddc58(*puVar6,puVar6[1]), (uVar2 & 1) == 0)) {
        if ((*(byte *)(puVar6 + 2) >> 1 & 1) == 0) {
          FUN_00a18944(param_1,puVar6);
        }
      }
      else {
        *(byte *)(puVar6 + 2) = *(byte *)(puVar6 + 2) | 2;
      }
      uVar7 = uVar7 - 1;
      puVar6 = puVar6 + 3;
    } while (uVar7 != 0);
  }
LAB_00a186d8:
  FUN_00a18d2c(param_1 + 0x28);
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined4 FUN_00a18744(long param_1,long param_2,uint param_3,uint *param_4)

{
  long lVar1;
  uint uVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  uint *puVar7;
  long lVar8;
  byte bVar9;
  byte *pbVar10;
  undefined4 uVar11;
  float fVar12;
  
  lVar8 = 0;
  do {
    lVar1 = param_1 + lVar8;
    *(undefined1 *)(lVar1 + 0x110) = *(undefined1 *)(lVar1 + 0xf8);
    *(undefined8 *)(lVar1 + 0x108) = *(undefined8 *)(lVar1 + 0xf0);
    *(byte *)(param_2 + 8 + lVar8) = *(byte *)(param_2 + 8 + lVar8) & 0xfb;
    lVar8 = lVar8 + 0xc;
  } while (lVar8 != 0x18);
  uVar6 = FUN_019806a4();
  uVar11 = 0;
  if ((uVar6 & 1) != 0) {
    uVar6 = FUN_019806b8(0);
    uVar11 = 0;
    if ((uVar6 & 1) != 0) {
      *(byte *)(param_2 + 8) = *(byte *)(param_2 + 8) | 4;
      bVar3 = FUN_019806d8(0);
      *(byte *)(param_2 + 8) = *(byte *)(param_2 + 8) & 0xfe | bVar3 & 1;
      FUN_01980738(param_2,param_2 + 4,0,0);
      uVar11 = 1;
      *param_4 = 1;
    }
  }
  uVar6 = FUN_019807a4();
  if ((uVar6 & 1) != 0) {
    iVar4 = FUN_019807b8();
    if (iVar4 == 0) {
      lVar8 = 0;
      do {
        *(byte *)(param_1 + 0x110 + lVar8) = *(byte *)(param_1 + 0x110 + lVar8) & 0xfb;
        lVar8 = lVar8 + 0xc;
      } while (lVar8 != 0x18);
    }
    else {
      uVar5 = FUN_019807b8();
      fVar12 = (float)param_3;
      if ((float)uVar5 <= (float)param_3) {
        fVar12 = (float)uVar5;
      }
      uVar5 = (uint)fVar12;
      if (uVar5 == 0) {
        *param_4 = 0;
      }
      else {
        uVar6 = 0;
        pbVar10 = (byte *)(param_2 + 8);
        do {
          puVar7 = (uint *)FUN_019807cc(uVar6 & 0xffffffff);
          uVar2 = *puVar7;
          if (((int)uVar2 >> 3 == 1) ||
             ((((int)uVar2 >> 3 == -1 || (0xf < (int)uVar2)) && ((uVar2 & 1) != 0)))) {
            bVar3 = *pbVar10;
            *pbVar10 = bVar3 | 4;
            *(undefined8 *)(pbVar10 + -8) = *(undefined8 *)(puVar7 + 1);
            iVar4 = (int)*puVar7 >> 3;
            if (iVar4 == 1) {
              bVar9 = 1;
            }
            else if (iVar4 == -1) {
              bVar9 = (byte)*puVar7 & 1;
            }
            else {
              bVar9 = 0;
            }
            uVar11 = 1;
            *pbVar10 = bVar3 & 0xfe | 4 | bVar9;
          }
          uVar6 = uVar6 + 1;
          pbVar10 = pbVar10 + 0xc;
        } while (uVar5 != uVar6);
        *param_4 = uVar5;
        if ((1 < uVar5) && ((*(byte *)(param_1 + 0x110) >> 2 & 1) == 0)) {
          lVar8 = 0;
          do {
            lVar1 = param_1 + lVar8;
            lVar8 = lVar8 + 0xc;
            *(undefined1 *)(lVar1 + 0x110) = *(undefined1 *)(lVar1 + 0xf8);
            *(undefined8 *)(lVar1 + 0x108) = *(undefined8 *)(lVar1 + 0xf0);
          } while (lVar8 != 0x18);
        }
      }
    }
  }
  return uVar11;
}




void FUN_00a18944(undefined8 param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  float fVar3;
  float __x;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined8 local_70;
  float local_68;
  undefined8 local_64;
  float local_5c;
  undefined1 local_58 [8];
  float local_50;
  undefined8 local_48;
  float local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_70 = *param_2;
  local_68 = 0.0;
  FUN_0091ef04(&local_48,&local_70,1);
  local_70 = *param_2;
  local_68 = 1.0;
  FUN_0091ef04(local_58,&local_70,1);
  FUN_009bbfb0();
  lVar2 = FUN_009bd5c8();
  if ((*(byte *)(lVar2 + 0x7c) >> 4 & 1) == 0) {
    FUN_009bbfb0();
    FUN_009bd5c8();
    FUN_009b8570();
  }
  fVar4 = local_58._0_4_ - (float)local_48;
  fVar5 = local_58._4_4_ - (float)((ulong)local_48 >> 0x20);
  fVar6 = local_50 - local_40;
  local_70 = local_48;
  __x = fVar4 * fVar4 + fVar5 * fVar5 + fVar6 * fVar6;
  fVar3 = SQRT(__x);
  local_68 = local_40;
  if (NAN(fVar3)) {
    fVar3 = sqrtf(__x);
  }
  local_5c = fVar6 / fVar3;
  local_64 = CONCAT44(fVar5 / fVar3,fVar4 / fVar3);
  FUN_00a1902c(param_1,&local_70);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a18a70(long param_1)

{
  long lVar1;
  
  lVar1 = 0;
  do {
    *(byte *)(param_1 + 0xf8 + lVar1) = *(byte *)(param_1 + 0xf8 + lVar1) & 0xfd;
    lVar1 = lVar1 + 0xc;
  } while (lVar1 != 0x18);
  if (*(char *)(param_1 + 200) != '\0') {
    *(undefined2 *)(param_1 + 200) = 0;
    *(undefined1 *)(param_1 + 0xe4) = 1;
  }
  return;
}




void FUN_00a18aa8(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float __x;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined8 local_68;
  float local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  pfVar4 = (float *)(param_1 + 0xd8);
  fVar6 = *pfVar4 * *pfVar4 + *(float *)(param_1 + 0xdc) * *(float *)(param_1 + 0xdc) +
          *(float *)(param_1 + 0xe0) * *(float *)(param_1 + 0xe0);
  fVar5 = SQRT(fVar6);
  if (NAN(fVar5)) {
    fVar5 = sqrtf(fVar6);
  }
  if (1.1920929e-07 <= ABS(fVar5)) {
    fVar8 = *(float *)(param_1 + 0xd8);
    fVar9 = *(float *)(param_1 + 0xdc);
    fVar10 = *(float *)(param_1 + 0xe0);
    fVar5 = fVar8 * fVar8 + fVar9 * fVar9 + fVar10 * fVar10;
    fVar6 = SQRT(fVar5);
    if (NAN(fVar6)) {
      fVar6 = sqrtf(fVar5);
    }
    fVar7 = *(float *)(param_1 + 0xd8) * *(float *)(param_1 + 0xd8) +
            *(float *)(param_1 + 0xdc) * *(float *)(param_1 + 0xdc) +
            *(float *)(param_1 + 0xe0) * *(float *)(param_1 + 0xe0);
    fVar5 = SQRT(fVar7);
    if (NAN(fVar5)) {
      fVar5 = sqrtf(fVar7);
    }
    if (150.0 < fVar5) {
      *(float *)(param_1 + 0xd8) = (fVar8 / fVar6) * 150.0;
      *(float *)(param_1 + 0xdc) = (fVar9 / fVar6) * 150.0;
      *(float *)(param_1 + 0xe0) = (fVar10 / fVar6) * 150.0;
    }
    fVar5 = fVar5 * 5.5;
    if (fVar5 <= 2.0) {
      fVar5 = 2.0;
    }
    fVar7 = (fVar8 / fVar6) * fVar5;
    fVar9 = (fVar9 / fVar6) * fVar5;
    fVar5 = (fVar10 / fVar6) * fVar5;
    fVar6 = fVar5 * fVar5 + fVar7 * fVar7 + fVar9 * fVar9;
    fVar8 = SQRT(fVar6);
    if (NAN(fVar8)) {
      fVar8 = sqrtf(fVar6);
    }
    fVar6 = (float)FUN_01988c84();
    __x = *(float *)(param_1 + 0xd8) * *(float *)(param_1 + 0xd8) +
          *(float *)(param_1 + 0xdc) * *(float *)(param_1 + 0xdc) +
          *(float *)(param_1 + 0xe0) * *(float *)(param_1 + 0xe0);
    fVar10 = SQRT(__x);
    if (NAN(fVar10)) {
      fVar10 = sqrtf(__x);
    }
    if (fVar8 * fVar6 <= fVar10) {
      fVar6 = (float)FUN_01988c84();
      *(float *)(param_1 + 0xd8) = *(float *)(param_1 + 0xd8) - fVar7 * fVar6;
      *(float *)(param_1 + 0xdc) = *(float *)(param_1 + 0xdc) - fVar9 * fVar6;
      *(float *)(param_1 + 0xe0) = *(float *)(param_1 + 0xe0) - fVar5 * fVar6;
      FUN_009bbfb0();
      lVar2 = FUN_009bd5c8();
      fVar5 = (float)FUN_01988c84();
      local_68 = CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0xd8) >> 0x20) * fVar5 +
                          (float)((ulong)*(undefined8 *)(lVar2 + 0x414) >> 0x20),
                          (float)*(undefined8 *)(param_1 + 0xd8) * fVar5 +
                          (float)*(undefined8 *)(lVar2 + 0x414));
      local_60 = fVar5 * *(float *)(param_1 + 0xe0) + *(float *)(lVar2 + 0x41c);
      FUN_00cac9c4(&local_68);
      FUN_009bbfb0();
      uVar3 = FUN_009bd5c8();
      FUN_009b81fc(uVar3,&local_68,0);
    }
    else {
      *(undefined4 *)(param_1 + 0xe0) = DAT_03218f38;
      *(undefined8 *)pfVar4 = DAT_03218f30;
      *(undefined1 *)(param_1 + 0xe4) = 0;
    }
  }
  else {
    *(undefined1 *)(param_1 + 0xe4) = 0;
    *(undefined4 *)(param_1 + 0xe0) = DAT_03218f38;
    *(undefined8 *)pfVar4 = DAT_03218f30;
  }
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00a18d2c(ushort *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x00a18d6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
  }
  return;
}




void FUN_00a18d74(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0xa8) != 0) {
    FUN_019888e0();
    *(undefined8 *)(param_1 + 0xa8) = 0;
  }
  uVar1 = FUN_01985d44(param_1,DAT_0312fb48);
  *(undefined8 *)(param_1 + 0xa8) = uVar1;
  FUN_009dd890(uVar1,1);
  return;
}




void FUN_00a18db8(long param_1)

{
  FUN_009ddd28(*(undefined8 *)(param_1 + 0xa8));
  return;
}




void FUN_00a18dc0(long param_1)

{
  FUN_009dd6cc(*(undefined8 *)(param_1 + 0xa8));
  return;
}




void FUN_00a18dc8(undefined8 param_1,float *param_2,float *param_3,ulong param_4)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float local_6c;
  undefined8 local_68;
  undefined4 local_60;
  float local_58;
  float fStack_54;
  float local_50;
  float local_4c;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_019bbd38(0,&local_58,&DAT_03218f78);
  fVar5 = param_2[4];
  fVar6 = param_2[5];
  fVar7 = param_2[3] * local_58 + fVar5 * fStack_54 + fVar6 * local_50;
  uVar2 = 0;
  if (1e-06 <= ABS(fVar7)) {
    fVar8 = param_2[1];
    fVar9 = param_2[2];
    fVar7 = -(local_4c + local_58 * *param_2 + fStack_54 * fVar8 + local_50 * fVar9) / fVar7;
    local_68 = NEON_fmov(0x3fc00000,4);
    *param_3 = *param_2 + param_2[3] * fVar7;
    param_3[1] = fVar8 + fVar5 * fVar7;
    param_3[2] = fVar9 + fVar6 * fVar7;
    local_60 = 0x3fc00000;
    local_6c = 0.0;
    if ((param_4 & 1) != 0) {
      uVar3 = FUN_00ef0108(0,param_3,&local_6c,0,&local_68);
      uVar2 = 0;
      if ((uVar3 & 1) == 0) goto LAB_00a18f5c;
      FUN_009bbfb0(0);
      FUN_009bd5c8();
      puVar4 = (undefined8 *)FUN_009b8164();
      fVar7 = *(float *)(puVar4 + 1);
      fVar5 = (float)*puVar4;
      fVar6 = (float)((ulong)*puVar4 >> 0x20);
      fVar8 = (local_6c * DAT_03218f78 * -fVar5 + local_6c * DAT_03218f7c * -fVar6) -
              local_6c * DAT_03218f80 * fVar7;
      *(ulong *)param_3 =
           CONCAT44((float)((ulong)*(undefined8 *)param_3 >> 0x20) - fVar6 * fVar8,
                    (float)*(undefined8 *)param_3 - fVar5 * fVar8);
      param_3[2] = param_3[2] - fVar8 * fVar7;
      FUN_00ef0108(0,param_3,param_3 + 1,0,&local_68);
    }
    uVar2 = 1;
  }
LAB_00a18f5c:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}




undefined8 FUN_00a18f88(void)

{
  return 1;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00a18f90(long param_1,ulong param_2)

{
  undefined8 uVar1;
  
  FUN_009bbfb0();
  uVar1 = FUN_009bd5c8();
  if ((param_2 & 1) != 0) {
    FUN_009b8570(uVar1);
    *(undefined8 *)(param_1 + 0xcc) = _DAT_03218ef8;
    *(undefined4 *)(param_1 + 0xd4) = 0;
    FUN_009b825c(uVar1,(undefined8 *)(param_1 + 0xcc));
    FUN_009b826c(*(undefined4 *)(param_1 + 0xd4),uVar1);
    return;
  }
  return;
}

