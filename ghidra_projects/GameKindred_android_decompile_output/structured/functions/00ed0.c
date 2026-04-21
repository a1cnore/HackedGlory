// functions/00ed0 — 42 functions
#include "libGameKindred.h"




void FUN_00ed007c(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x00ed008c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x150))(param_1,param_4,param_5);
  return;
}




void FUN_00ed0090(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x00ed00a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x158))(param_1,param_4,param_5);
  return;
}




void FUN_00ed00a4(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x00ed00b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x160))(param_1,param_4,param_5);
  return;
}




void FUN_00ed00b8(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x00ed00c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x168))(param_1,param_4,param_5);
  return;
}




void FUN_00ed00cc(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x00ed00dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x170))(param_1,param_4,param_5);
  return;
}




void FUN_00ed00e0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_028225f0;
  FUN_00f00478();
  param_1[0x2e] = &PTR_FUN_02822778;
  param_1[0x7b] = &PTR_FUN_028266f0;
  param_1[0x92] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x95);
  FUN_00f13d08(param_1 + 0x7b);
  param_1[0x5d] = &PTR_FUN_028266f0;
  param_1[0x74] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x77);
  FUN_00f13d08(param_1 + 0x5d);
  param_1[0x3f] = &PTR_FUN_028266f0;
  param_1[0x56] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x59);
  FUN_00f13d08(param_1 + 0x3f);
  FUN_00f01868(param_1 + 0x2e);
  FUN_00f13d08(param_1 + 0x17);
  FUN_00f13d08(param_1);
  return;
}




void FUN_00ed01ac(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_02822778;
  param_1[0x4d] = &PTR_FUN_028266f0;
  param_1[100] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x67);
  FUN_00f13d08(param_1 + 0x4d);
  param_1[0x2f] = &PTR_FUN_028266f0;
  param_1[0x46] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x49);
  FUN_00f13d08(param_1 + 0x2f);
  param_1[0x11] = &PTR_FUN_028266f0;
  param_1[0x28] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x2b);
  FUN_00f13d08(param_1 + 0x11);
  FUN_00f01868(param_1);
  return;
}




void FUN_00ed0248(void *param_1)

{
  FUN_00ed00e0();
  operator_delete(param_1);
  return;
}




void FUN_00ed026c(long param_1,undefined8 param_2,uint param_3)

{
  FUN_00f023ec(param_1 + 0xb8,param_2,param_3 & 1);
  return;
}




undefined8 FUN_00ed0278(long param_1)

{
  return *(undefined8 *)(param_1 + 0xe0);
}




undefined8 FUN_00ed0280(long param_1)

{
  return *(undefined8 *)(param_1 + 0xe0);
}




int FUN_00ed0288(long param_1)

{
  int iVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0xe0);
  if (lVar2 != 0) {
    iVar1 = 0;
    do {
      lVar2 = *(long *)(lVar2 + 0x30);
      iVar1 = iVar1 + 1;
    } while (lVar2 != 0);
    return iVar1;
  }
  return 0;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00ed02ac(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = _DAT_03218ef8;
  *(ushort *)(param_1 + 0x530) = *(ushort *)(param_1 + 0x530) & 0xffb0;
  *(undefined8 *)(param_1 + 0x4d8) = uVar1;
  *(undefined8 *)(param_1 + 0x4e0) = uVar1;
  *(undefined8 *)(param_1 + 0x500) = uVar1;
  return;
}




void FUN_00ed02d8(float param_1,float param_2,long param_3)

{
  *(ulong *)(param_3 + 0x4f8) =
       CONCAT44(param_2 + (float)((ulong)*(undefined8 *)(param_3 + 0x4e8) >> 0x20),
                param_1 + (float)*(undefined8 *)(param_3 + 0x4e8));
  FUN_00ed02f0();
  return;
}




void FUN_00ed02f0(float param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  float fVar4;
  float fVar5;
  undefined8 local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  plVar1 = param_2 + 0x2e;
  fVar4 = (float)FUN_00f01c10(plVar1);
  fVar4 = *(float *)(param_2 + 0x9e) + param_1 + fVar4 * -0.5 + -10.0;
  fVar5 = *(float *)((long)param_2 + 0x4f4) + 10.0;
  if ((*(float *)(param_2 + 0x36) != fVar4) || (*(float *)((long)param_2 + 0x1b4) != fVar5)) {
    *(float *)(param_2 + 0x36) = fVar4;
    *(float *)((long)param_2 + 0x1b4) = fVar5;
    FUN_0091ada4(plVar1);
  }
  local_40 = 0x3f0000003f000000;
  (**(code **)(param_2[0x2e] + 0x28))(plVar1,&local_40);
  uVar3 = FUN_00f02540(param_2);
  if ((uVar3 & 1) != 0) {
    (**(code **)(*(long *)param_2[4] + 0x48))();
    fVar4 = fVar5;
    (**(code **)(*param_2 + 0x48))(param_2);
    fVar4 = fVar4 * *(float *)((long)param_2 + 0x4c);
    fVar5 = fVar5 * (fVar5 / fVar4) - *(float *)((long)param_2 + 0x4f4);
    if (fVar5 <= fVar4) {
      fVar4 = fVar5;
    }
    FUN_00ed1968(fVar4,plVar1);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ed0418(undefined1 param_1 [16],float param_2,long param_3,uint param_4)

{
  float fVar1;
  
  fVar1 = (float)FUN_00f01c54(param_3 + 0xb8,1,1,0,param_4 & 1);
  *(ulong *)(param_3 + 0x4f8) =
       CONCAT44(param_2 + (float)((ulong)*(undefined8 *)(param_3 + 0x4e8) >> 0x20),
                fVar1 + (float)*(undefined8 *)(param_3 + 0x4e8));
  FUN_00ed02f0(param_3);
  return;
}




undefined4 FUN_00ed0464(long param_1)

{
  return *(undefined4 *)(param_1 + 0x4f8);
}




void FUN_00ed0470(long param_1,uint param_2,uint param_3,uint param_4,uint param_5)

{
  FUN_00f01c54(param_1 + 0xb8,param_2 & 1,param_3 & 1,param_4 & 1,param_5 & 1);
  return;
}




undefined8 FUN_00ed0488(long param_1)

{
  return CONCAT44((int)*(float *)(param_1 + 0x4fc),(int)*(float *)(param_1 + 0x4f8));
}




undefined4 FUN_00ed04a0(long param_1)

{
  return *(undefined4 *)(param_1 + 0x4f8);
}




void FUN_00ed04ac(undefined4 param_1,undefined4 param_2,long param_3)

{
  *(undefined4 *)(param_3 + 0x4e8) = param_1;
  *(undefined4 *)(param_3 + 0x4ec) = param_2;
  return;
}




void FUN_00ed04b8(long param_1,undefined8 *param_2)

{
  *(undefined8 *)(param_1 + 0x500) = *param_2;
  return;
}




void FUN_00ed04c4(float param_1,long param_2)

{
  if (param_1 < 0.0) {
    param_1 = 0.0;
  }
  *(float *)(param_2 + 0x510) = param_1;
  return;
}




void FUN_00ed04d8(long param_1,ushort param_2,ushort param_3)

{
  *(ushort *)(param_1 + 0x530) =
       (param_2 & 1) << 4 | (param_3 & 1) << 5 | *(ushort *)(param_1 + 0x530) & 0xffcf;
  return;
}




void FUN_00ed04fc(undefined1 param_1 [16],float param_2,long *param_3,uint param_4,uint param_5)

{
  ushort uVar1;
  ushort uVar2;
  float fVar3;
  
  fVar3 = (float)(**(code **)(*param_3 + 0x48))();
  uVar1 = 0;
  if ((param_4 & 1) != 0) {
    uVar1 = (ushort)(fVar3 < *(float *)(param_3 + 0x9f)) << 4;
  }
  uVar2 = 0;
  if ((param_5 & 1) != 0) {
    uVar2 = (ushort)(param_2 < *(float *)((long)param_3 + 0x4fc)) << 5;
  }
  *(ushort *)(param_3 + 0xa6) = uVar2 | uVar1 | *(ushort *)(param_3 + 0xa6) & 0xffcf;
  return;
}




void FUN_00ed0578(undefined4 param_1,undefined4 param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  undefined8 local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  plVar1 = (long *)(param_3 + 0x170);
  fVar4 = *(float *)(param_3 + 0x4f8);
  *(undefined4 *)(param_3 + 0x4f0) = param_1;
  *(undefined4 *)(param_3 + 0x4f4) = param_2;
  fVar3 = (float)FUN_00f01c10(plVar1);
  fVar3 = *(float *)(param_3 + 0x4f0) + fVar4 + fVar3 * -0.5 + -20.0;
  fVar4 = *(float *)(param_3 + 0x4f4) + 10.0;
  if ((*(float *)(param_3 + 0x1b0) != fVar3) || (*(float *)(param_3 + 0x1b4) != fVar4)) {
    *(float *)(param_3 + 0x1b0) = fVar3;
    *(float *)(param_3 + 0x1b4) = fVar4;
    FUN_0091ada4(plVar1);
  }
  local_40 = 0x3f0000003f000000;
  (**(code **)(*plVar1 + 0x28))(plVar1,&local_40);
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ed0650(float param_1,float param_2,long param_3)

{
  if ((*(float *)(param_3 + 0x1b8) == param_1) && (*(float *)(param_3 + 0x1bc) == param_2)) {
    return;
  }
  *(float *)(param_3 + 0x1b8) = param_1;
  *(float *)(param_3 + 0x1bc) = param_2;
  FUN_0091ada4(param_3 + 0x170);
  return;
}




void FUN_00ed0680(long param_1)

{
  *(ushort *)(param_1 + 0x530) = *(ushort *)(param_1 + 0x530) | 0x200;
  *(uint *)(param_1 + 500) = *(uint *)(param_1 + 500) | 4;
  FUN_00ed06c8(param_1 + 0x170);
  return;
}




void FUN_00ed06a4(long param_1,uint param_2)

{
  *(ushort *)(param_1 + 0x530) =
       *(ushort *)(param_1 + 0x530) & 0xfdff | (ushort)((param_2 & 1) << 9);
  *(uint *)(param_1 + 500) =
       *(uint *)(param_1 + 500) & 0xfffffff8 | *(uint *)(param_1 + 500) & 3 | (param_2 & 1) << 2;
  return;
}




void FUN_00ed06c8(undefined1 param_1 [16],float param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  float fVar5;
  undefined8 local_60;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  lVar1 = param_3 + 0x88;
  FUN_00f0e548(lVar1,param_4,"scrollbar_button_fill_top");
  lVar2 = param_3 + 0x178;
  FUN_00f0e548(lVar2,param_4,"scrollbar_button_fill_middle");
  plVar3 = (long *)(param_3 + 0x268);
  FUN_00f0e548(plVar3,param_4,"scrollbar_button_fill_bottom");
  if ((*(float *)(param_3 + 200) != 0.0) || (*(float *)(param_3 + 0xcc) != 0.0)) {
    *(undefined8 *)(param_3 + 200) = 0;
    FUN_0091ada4(lVar1);
  }
  local_60 = 0x3f000000;
  (**(code **)(*(long *)(param_3 + 0x88) + 0x28))(lVar1,&local_60);
  FUN_00f0e700(lVar1);
  if ((*(float *)(param_3 + 0x1b8) != 0.0) || (*(float *)(param_3 + 0x1bc) != param_2)) {
    *(undefined4 *)(param_3 + 0x1b8) = 0;
    *(float *)(param_3 + 0x1bc) = param_2;
    FUN_0091ada4(lVar2);
  }
  local_60 = 0x3f000000;
  (**(code **)(*(long *)(param_3 + 0x178) + 0x28))(lVar2,&local_60);
  fVar5 = *(float *)(param_3 + 0x1bc);
  FUN_00f0e700(lVar2);
  fVar5 = fVar5 + param_2;
  if ((*(float *)(param_3 + 0x2a8) != 0.0) || (*(float *)(param_3 + 0x2ac) != fVar5)) {
    *(undefined4 *)(param_3 + 0x2a8) = 0;
    *(float *)(param_3 + 0x2ac) = fVar5;
    FUN_0091ada4(plVar3);
  }
  local_60 = 0x3f000000;
  (**(code **)(*plVar3 + 0x28))(plVar3,&local_60);
  if (*(long *)(lVar4 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




byte FUN_00ed0848(long param_1)

{
  return *(byte *)(param_1 + 0x530) >> 6 & 1;
}




undefined8 FUN_00ed0854(long param_1)

{
  float fVar1;
  float __x;
  
  if ((*(byte *)(param_1 + 0x530) >> 6 & 1) == 0) {
    __x = *(float *)(param_1 + 0x500) * *(float *)(param_1 + 0x500) +
          *(float *)(param_1 + 0x504) * *(float *)(param_1 + 0x504);
    fVar1 = SQRT(__x);
    if (NAN(fVar1)) {
      fVar1 = sqrtf(__x);
    }
    if (0.0 < fVar1) {
      return 1;
    }
  }
  return 0;
}




byte FUN_00ed08a8(long param_1)

{
  return *(byte *)(param_1 + 0x530) >> 7;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00ed08b4(float param_1,long *param_2)

{
  ushort uVar1;
  long lVar2;
  bool bVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float local_70;
  float fStack_6c;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  fVar12 = *(float *)(param_2 + 8);
  fVar11 = *(float *)((long)param_2 + 0x44);
  if ((*(byte *)(param_2 + 0xa6) >> 6 & 1) != 0) {
    fVar6 = *(float *)(param_2 + 0x9b);
    lVar4 = FUN_00965ecc(param_2);
    fVar10 = 1.0;
    fVar5 = fVar10;
    if (0.0 < *(float *)(lVar4 + 0x10)) {
      lVar4 = FUN_00965ecc(param_2);
      fVar5 = *(float *)(lVar4 + 0x10);
    }
    fVar7 = *(float *)((long)param_2 + 0x4dc);
    lVar4 = FUN_00965ecc(param_2);
    if (0.0 < *(float *)(lVar4 + 0x14)) {
      lVar4 = FUN_00965ecc(param_2);
      fVar10 = *(float *)(lVar4 + 0x14);
    }
    fVar8 = DAT_03218ef8;
    fVar9 = _DAT_03218efc;
    if (0.0 < param_1) {
      fVar8 = (fVar6 / fVar5) / param_1;
      fVar9 = (fVar7 / fVar10) / param_1;
    }
    uVar1 = *(ushort *)(param_2 + 0xa6);
    *(float *)(param_2 + 0xa0) = fVar8;
    *(float *)((long)param_2 + 0x504) = fVar9;
    if ((uVar1 >> 8 & 1) == 0) {
      bVar3 = false;
    }
    else {
      fVar6 = fVar11;
      fVar10 = (float)FUN_00ed0d58(fVar12,param_2);
      fVar7 = 1.0;
      fVar5 = -1.0;
      if (0.0 <= fVar10) {
        fVar5 = fVar7;
      }
      fVar8 = -1.0;
      if (0.0 <= *(float *)(param_2 + 0xa0)) {
        fVar8 = fVar7;
      }
      fVar9 = 0.0;
      if (fVar5 == fVar8) {
        fVar9 = ABS(fVar10) / *(float *)(param_2 + 0xa4);
      }
      fVar5 = -1.0;
      if (0.0 <= fVar6) {
        fVar5 = fVar7;
      }
      fVar10 = -1.0;
      if (0.0 <= *(float *)((long)param_2 + 0x504)) {
        fVar10 = 1.0;
      }
      fVar7 = 0.0;
      if (fVar5 == fVar10) {
        fVar7 = ABS(fVar6) / *(float *)(param_2 + 0xa4);
      }
      fVar5 = (float)DAT_03218f00 - fVar9;
      if ((float)DAT_03218f00 <= (float)DAT_03218f00 - fVar9) {
        fVar5 = (float)DAT_03218f00;
      }
      fVar6 = DAT_03218ef8;
      if (DAT_03218ef8 <= fVar5) {
        fVar6 = fVar5;
      }
      fVar5 = DAT_03218f00._4_4_ - fVar7;
      if (DAT_03218f00._4_4_ <= DAT_03218f00._4_4_ - fVar7) {
        fVar5 = DAT_03218f00._4_4_;
      }
      uVar1 = *(ushort *)(param_2 + 0xa6);
      fVar10 = _DAT_03218efc;
      if (_DAT_03218efc <= fVar5) {
        fVar10 = fVar5;
      }
      *(float *)(param_2 + 0xa0) = *(float *)(param_2 + 0xa0) * fVar6;
      bVar3 = false;
      *(float *)((long)param_2 + 0x504) = *(float *)((long)param_2 + 0x504) * fVar10;
    }
    goto joined_r0x00ed0a08;
  }
  fVar5 = powf(*(float *)((long)param_2 + 0x50c),param_1);
  bVar3 = false;
  param_2[0xa0] =
       CONCAT44((float)((ulong)param_2[0xa0] >> 0x20) * fVar5,(float)param_2[0xa0] * fVar5);
  if ((*(byte *)((long)param_2 + 0x531) & 1) != 0) {
    fVar5 = fVar11;
    fVar6 = (float)FUN_00ed0d58(fVar12,param_2);
    fVar10 = ABS(fVar6);
    fVar7 = ABS(fVar5);
    if ((1.0 <= fVar10) || (bVar3 = false, 1.0 <= fVar7)) {
      fVar8 = *(float *)((long)param_2 + 0x524);
      fVar9 = *(float *)(param_2 + 0xa5);
      if (fVar6 <= 0.0) {
        bVar3 = false;
        if (fVar6 < 0.0) {
          if (0.0 <= *(float *)(param_2 + 0xa0)) {
            fVar10 = fVar10 * fVar8;
            goto LAB_00ed0b0c;
          }
          bVar3 = false;
          fVar10 = fVar10 * fVar9 * param_1 + *(float *)(param_2 + 0xa0);
          goto LAB_00ed0b10;
        }
      }
      else {
        if (*(float *)(param_2 + 0xa0) <= 0.0) {
          fVar10 = -(fVar10 * fVar8);
LAB_00ed0b0c:
          bVar3 = true;
        }
        else {
          bVar3 = false;
          fVar10 = *(float *)(param_2 + 0xa0) - fVar10 * fVar9 * param_1;
        }
LAB_00ed0b10:
        *(float *)(param_2 + 0xa0) = fVar10;
      }
      if (fVar5 <= 0.0) {
        if (fVar5 < 0.0) {
          if (0.0 <= *(float *)((long)param_2 + 0x504)) {
            fVar7 = fVar7 * fVar8;
            goto LAB_00ed0b68;
          }
          fVar5 = fVar7 * fVar9 * param_1 + *(float *)((long)param_2 + 0x504);
          goto LAB_00ed0b54;
        }
      }
      else if (*(float *)((long)param_2 + 0x504) <= 0.0) {
        fVar7 = -(fVar7 * fVar8);
LAB_00ed0b68:
        *(float *)((long)param_2 + 0x504) = fVar7;
        bVar3 = true;
      }
      else {
        fVar5 = *(float *)((long)param_2 + 0x504) - fVar7 * fVar9 * param_1;
LAB_00ed0b54:
        *(float *)((long)param_2 + 0x504) = fVar5;
      }
    }
  }
  fVar5 = fVar11;
  fVar6 = (float)FUN_00ed0d58(fVar12,param_2);
  uVar1 = *(ushort *)(param_2 + 0xa6);
  if (((fVar6 == 0.0) && ((uVar1 >> 4 & 1) != 0)) && (ABS(*(float *)(param_2 + 0xa0)) < 10.0)) {
    *(undefined4 *)(param_2 + 0xa0) = 0;
  }
  if (((fVar5 == 0.0) && ((uVar1 >> 5 & 1) != 0)) && (ABS(*(float *)((long)param_2 + 0x504)) < 10.0)
     ) {
    *(undefined4 *)((long)param_2 + 0x504) = 0;
  }
joined_r0x00ed0a08:
  if ((uVar1 >> 4 & 1) == 0) {
    *(undefined4 *)(param_2 + 0xa0) = 0;
  }
  if ((uVar1 >> 5 & 1) == 0) {
    fVar5 = 0.0;
    *(undefined4 *)((long)param_2 + 0x504) = 0;
  }
  else {
    fVar5 = *(float *)((long)param_2 + 0x504);
  }
  fVar10 = *(float *)(param_2 + 0xa1);
  fVar6 = (float)NEON_fminnm(param_1,0x3dcccccd);
  if (fVar6 <= 0.0) {
    fVar6 = 0.0;
  }
  fVar7 = -fVar10;
  fVar8 = *(float *)(param_2 + 0xa0);
  if (fVar10 <= *(float *)(param_2 + 0xa0)) {
    fVar8 = fVar10;
  }
  fVar9 = fVar7;
  if (fVar7 <= fVar8) {
    fVar9 = fVar8;
  }
  if (fVar10 <= fVar5) {
    fVar5 = fVar10;
  }
  if (fVar7 <= fVar5) {
    fVar7 = fVar5;
  }
  local_70 = fVar12 + fVar6 * fVar9;
  fStack_6c = fVar11 + fVar6 * fVar7;
  *(float *)(param_2 + 0xa0) = fVar9;
  *(float *)((long)param_2 + 0x504) = fVar7;
  if ((uVar1 >> 8 & 1) == 0) {
    (**(code **)(*param_2 + 0x148))(param_2,&local_70);
  }
  FUN_00ed0e60(local_70,fStack_6c,param_2);
  if (bVar3) {
    fVar11 = fStack_6c;
    fVar12 = (float)FUN_00ed0d58(local_70,param_2);
    if (((0.0 < fVar12) && (fVar12 < 1.0)) || ((fVar12 < 0.0 && (-1.0 < fVar12)))) {
      *(undefined4 *)(param_2 + 0xa0) = 0;
    }
    if (((0.0 < fVar11) && (fVar11 < 1.0)) || ((fVar11 < 0.0 && (-1.0 < fVar11)))) {
      *(undefined4 *)((long)param_2 + 0x504) = 0;
    }
  }
  if (((*(byte *)((long)param_2 + 0x531) >> 1 & 1) != 0) &&
     (FUN_00ed0ff4(0x3f000000,param_2 + 0x2e,*(float *)((long)param_2 + 0x504) != 0.0),
     0.0 < (float)(*(uint *)((long)param_2 + 500) >> 7 & 0xff) / 255.0)) {
    FUN_00ed12d8(param_2);
  }
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined1  [16] FUN_00ed0d58(undefined1 param_1 [16],long *param_2)

{
  ulong uVar1;
  float fVar2;
  float fVar3;
  ulong uVar4;
  undefined8 uVar6;
  undefined1 auVar5 [16];
  float fVar7;
  
  uVar6 = param_1._8_8_;
  uVar4 = param_1._0_8_;
  uVar1 = FUN_00f02540();
  if ((uVar1 & 1) == 0) {
    uVar4 = (ulong)DAT_03218ef8;
    uVar6 = 0;
  }
  else {
    fVar2 = (float)(**(code **)(*(long *)param_2[4] + 0x48))();
    fVar3 = (float)(**(code **)(*param_2 + 0x48))(param_2);
    fVar7 = param_1._0_4_;
    if ((fVar7 <= 0.0) && (fVar3 = fVar3 * *(float *)(param_2 + 9), fVar2 < fVar3)) {
      uVar4 = 0;
      uVar6 = 0;
      if (fVar7 < fVar2 - fVar3) {
        uVar4 = (ulong)(uint)(fVar7 + (fVar3 - fVar2));
        uVar6 = 0;
      }
    }
  }
  auVar5._8_8_ = uVar6;
  auVar5._0_8_ = uVar4;
  return auVar5;
}




undefined4 FUN_00ed0e40(long param_1)

{
  return *(undefined4 *)(param_1 + 0x520);
}




undefined4 FUN_00ed0e48(long param_1)

{
  return *(undefined4 *)(param_1 + 0x524);
}




undefined4 FUN_00ed0e50(long param_1)

{
  return *(undefined4 *)(param_1 + 0x528);
}




undefined4 FUN_00ed0e58(long param_1)

{
  return *(undefined4 *)(param_1 + 0x508);
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00ed0e60(undefined8 param_1,float param_2,long param_3)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined1 auStack_68 [32];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  fVar4 = (float)param_1;
  fVar5 = fVar4 - *(float *)(param_3 + 0x40);
  fVar6 = param_2 - *(float *)(param_3 + 0x44);
  if ((fVar5 == DAT_03218ef8) && (fVar6 == _DAT_03218efc)) goto LAB_00ed0fc8;
  if ((*(float *)(param_3 + 0x44) != param_2) || (*(float *)(param_3 + 0x40) != fVar4)) {
    *(float *)(param_3 + 0x40) = fVar4;
    *(float *)(param_3 + 0x44) = param_2;
    FUN_0091ada4(param_3);
  }
  fVar4 = (float)FUN_00ed0d58(param_1,param_3);
  if ((1.1920929e-07 <= ABS(fVar4)) || (1.1920929e-07 <= ABS(param_2))) {
    *(ushort *)(param_3 + 0x530) = *(ushort *)(param_3 + 0x530) & 0xfff0;
    goto LAB_00ed0fc8;
  }
  if (fVar6 <= 0.0) {
    if (fVar6 < 0.0) {
      iVar2 = -1;
      goto LAB_00ed0f34;
    }
  }
  else {
    iVar2 = 1;
LAB_00ed0f34:
    if (iVar2 != (int)((uint)*(ushort *)(param_3 + 0x530) << 0x1e) >> 0x1e) {
      *(ushort *)(param_3 + 0x530) = *(ushort *)(param_3 + 0x530) & 0xfffc | (ushort)iVar2 & 3;
      FUN_00f048e0(auStack_68,DAT_03210c18);
      FUN_00f04760(param_3,auStack_68,0);
    }
  }
  if (fVar5 <= 0.0) {
    if (0.0 <= fVar5) goto LAB_00ed0fc8;
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = 1;
  }
  if (uVar3 != (int)(short)(*(ushort *)(param_3 + 0x530) << 0xc) >> 0xe) {
    *(ushort *)(param_3 + 0x530) =
         (ushort)((uVar3 & 3) << 2) | *(ushort *)(param_3 + 0x530) & 0xfff3;
    FUN_00f048e0(auStack_68,DAT_03210c14);
    FUN_00f04760(param_3,auStack_68,0);
  }
LAB_00ed0fc8:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ed0ff4(undefined8 param_1,long param_2,ulong param_3)

{
  uint uVar1;
  long lVar2;
  undefined2 uVar3;
  ushort uVar4;
  ushort *puVar5;
  ushort *puVar6;
  
  if ((param_3 & 1) == 0) {
    if ((*(char *)(param_2 + 0x359) == '\0') &&
       ((float)(*(uint *)(param_2 + 0x84) >> 7 & 0xff) / 255.0 < 0.4)) {
      return;
    }
    FUN_00f01980(param_2);
    uVar1 = *(uint *)(param_2 + 0x84);
    if ((uVar1 & 0x7f80) != 0x3280) {
      *(uint *)(param_2 + 0x84) = uVar1 & 0xffff8000 | uVar1 & 0x7f | 0x3280;
      FUN_0091ada4(param_2);
    }
    lVar2 = DAT_03210d00;
    uVar4 = *(ushort *)(DAT_03210d00 + 0x20010);
    if ((ulong)uVar4 == 0xffff) {
      puVar5 = (ushort *)0x0;
    }
    else {
      puVar5 = (ushort *)(DAT_03210d00 + (ulong)uVar4 * 0x40 + 0x10);
      if (uVar4 == *(ushort *)(DAT_03210d00 + 0x20012)) {
        uVar4 = 0xffff;
      }
      else {
        uVar4 = *puVar5;
      }
      *(ushort *)(DAT_03210d00 + 0x20010) = uVar4;
      *(int *)(lVar2 + 0x20014) = *(int *)(lVar2 + 0x20014) + 1;
      FUN_00efcad4(puVar5);
      *(undefined ***)puVar5 = &PTR_FUN_027c1a60;
      *(int *)(lVar2 + 0x20020) = *(int *)(lVar2 + 0x20020) + 1;
    }
    FUN_00efcac4(param_1,puVar5);
    lVar2 = DAT_03210d00;
    uVar4 = *(ushort *)(DAT_03210d00 + 0x20010);
    if ((ulong)uVar4 == 0xffff) {
      puVar6 = (ushort *)0x0;
    }
    else {
      puVar6 = (ushort *)(DAT_03210d00 + (ulong)uVar4 * 0x40 + 0x10);
      if (uVar4 == *(ushort *)(DAT_03210d00 + 0x20012)) {
        uVar4 = 0xffff;
      }
      else {
        uVar4 = *puVar6;
      }
      *(ushort *)(DAT_03210d00 + 0x20010) = uVar4;
      *(int *)(lVar2 + 0x20014) = *(int *)(lVar2 + 0x20014) + 1;
      FUN_00efdd74(puVar6);
      *(int *)(lVar2 + 0x20020) = *(int *)(lVar2 + 0x20020) + 1;
    }
    FUN_00efcac4(0x3f400000,puVar6);
    FUN_00efddc4(0,puVar6);
    FUN_00f02308(param_2,puVar5,puVar6,0);
    uVar3 = 1;
  }
  else {
    if ((*(char *)(param_2 + 0x358) == '\0') &&
       ((float)(*(uint *)(param_2 + 0x84) >> 7 & 0xff) / 255.0 != 0.0)) {
      return;
    }
    FUN_00f01980(param_2);
    lVar2 = DAT_03210d00;
    uVar4 = *(ushort *)(DAT_03210d00 + 0x20010);
    if ((ulong)uVar4 == 0xffff) {
      puVar5 = (ushort *)0x0;
    }
    else {
      puVar5 = (ushort *)(DAT_03210d00 + (ulong)uVar4 * 0x40 + 0x10);
      if (uVar4 == *(ushort *)(DAT_03210d00 + 0x20012)) {
        uVar4 = 0xffff;
      }
      else {
        uVar4 = *puVar5;
      }
      *(ushort *)(DAT_03210d00 + 0x20010) = uVar4;
      *(int *)(lVar2 + 0x20014) = *(int *)(lVar2 + 0x20014) + 1;
      FUN_00efdd74(puVar5);
      *(int *)(lVar2 + 0x20020) = *(int *)(lVar2 + 0x20020) + 1;
    }
    FUN_00efcac4(0x3e19999a,puVar5);
    FUN_00efddc4(0x3ecccccd,puVar5);
    FUN_00f022a0(param_2,puVar5);
    uVar3 = 0x100;
  }
  *(undefined2 *)(param_2 + 0x358) = uVar3;
  return;
}




void thunk_FUN_00ed00e0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_028225f0;
  FUN_00f00478();
  param_1[0x2e] = &PTR_FUN_02822778;
  param_1[0x7b] = &PTR_FUN_028266f0;
  param_1[0x92] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x95);
  FUN_00f13d08(param_1 + 0x7b);
  param_1[0x5d] = &PTR_FUN_028266f0;
  param_1[0x74] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x77);
  FUN_00f13d08(param_1 + 0x5d);
  param_1[0x3f] = &PTR_FUN_028266f0;
  param_1[0x56] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x59);
  FUN_00f13d08(param_1 + 0x3f);
  FUN_00f01868(param_1 + 0x2e);
  FUN_00f13d08(param_1 + 0x17);
  FUN_00f13d08(param_1);
  return;
}

