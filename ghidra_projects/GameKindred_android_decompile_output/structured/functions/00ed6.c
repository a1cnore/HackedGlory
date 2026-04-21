// functions/00ed6 — 21 functions
#include "libGameKindred.h"




void FUN_00ed61d0(float param_1,float param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  undefined8 local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  if (*(int *)(param_3 + 0x358) == 0) {
    lVar1 = param_3 + 0x88;
    fVar5 = (float)FUN_00f0e700(lVar1);
    lVar2 = param_3 + 0x178;
    param_1 = param_1 - (fVar5 + fVar5);
    if (param_1 <= 0.0) {
      param_1 = 0.0;
    }
    FUN_00f0e700(lVar2);
    FUN_00f13f08(param_1,lVar2);
    if ((*(float *)(param_3 + 200) != 0.0) || (*(float *)(param_3 + 0xcc) != 0.0)) {
      *(undefined8 *)(param_3 + 200) = 0;
      FUN_0091ada4(lVar1);
    }
    uVar4 = 0x3f00000000000000;
    local_50 = 0x3f00000000000000;
    (**(code **)(*(long *)(param_3 + 0x88) + 0x28))(lVar1,&local_50);
    fVar5 = (float)FUN_00f0e700(lVar1);
    if ((*(float *)(param_3 + 0x1b8) != fVar5) || (*(float *)(param_3 + 0x1bc) != 0.0)) {
      *(float *)(param_3 + 0x1b8) = fVar5;
      *(undefined4 *)(param_3 + 0x1bc) = 0;
      FUN_0091ada4(lVar2);
    }
    local_50 = 0x3f00000000000000;
    (**(code **)(*(long *)(param_3 + 0x178) + 0x28))(lVar2,&local_50);
    fVar6 = *(float *)(param_3 + 0x1b8);
    fVar5 = (float)FUN_00f0e700(lVar2);
    fVar6 = fVar6 + fVar5;
    if ((*(float *)(param_3 + 0x2a8) != fVar6) || (*(float *)(param_3 + 0x2ac) != 0.0)) {
      *(float *)(param_3 + 0x2a8) = fVar6;
      *(undefined4 *)(param_3 + 0x2ac) = 0;
LAB_00ed63f8:
      FUN_0091ada4(param_3 + 0x268);
    }
  }
  else {
    if (*(int *)(param_3 + 0x358) != 1) goto LAB_00ed6418;
    lVar1 = param_3 + 0x88;
    FUN_00f0e700(lVar1);
    lVar2 = param_3 + 0x178;
    param_1 = param_1 - (param_2 + param_2);
    if (param_1 <= 0.0) {
      param_1 = 0.0;
    }
    FUN_00f0e700(lVar2);
    FUN_00f13f08(lVar2);
    if ((*(float *)(param_3 + 200) != 0.0) || (*(float *)(param_3 + 0xcc) != 0.0)) {
      *(undefined8 *)(param_3 + 200) = 0;
      FUN_0091ada4(lVar1);
    }
    uVar4 = 0x3f000000;
    local_50 = 0x3f000000;
    (**(code **)(*(long *)(param_3 + 0x88) + 0x28))(lVar1,&local_50);
    FUN_00f0e700(lVar1);
    if ((*(float *)(param_3 + 0x1b8) != 0.0) || (*(float *)(param_3 + 0x1bc) != param_1)) {
      *(undefined4 *)(param_3 + 0x1b8) = 0;
      *(float *)(param_3 + 0x1bc) = param_1;
      FUN_0091ada4(lVar2);
    }
    local_50 = 0x3f000000;
    (**(code **)(*(long *)(param_3 + 0x178) + 0x28))(lVar2,&local_50);
    fVar5 = *(float *)(param_3 + 0x1bc);
    FUN_00f0e700(lVar2);
    fVar5 = fVar5 + param_1;
    if ((*(float *)(param_3 + 0x2a8) != 0.0) || (*(float *)(param_3 + 0x2ac) != fVar5)) {
      *(undefined4 *)(param_3 + 0x2a8) = 0;
      *(float *)(param_3 + 0x2ac) = fVar5;
      goto LAB_00ed63f8;
    }
  }
  local_50 = uVar4;
  (**(code **)(*(long *)(param_3 + 0x268) + 0x28))((long *)(param_3 + 0x268),&local_50);
LAB_00ed6418:
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ed6444(undefined1 param_1 [16],float param_2,long param_3,uint param_4,uint param_5)

{
  ulong uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  uVar1 = FUN_00f02540();
  if ((uVar1 & 1) != 0) {
    fVar2 = (float)FUN_00f13e54(param_3 + 0xb8);
    fVar4 = param_2;
    fVar3 = (float)FUN_00f01c20(param_3 + 600);
    fVar5 = *(float *)(param_3 + 0x298);
    fVar6 = *(float *)(param_3 + 0x29c);
    FUN_00ed5ee0(0x3f000000,param_3 + 0x310,param_5 & 1);
    if ((0.0 < (float)(*(uint *)(param_3 + 0x394) >> 7 & 0xff) / 255.0) &&
       (fVar4 = -(param_2 * (fVar6 / fVar4) + -10.0), *(float *)(param_3 + 0x354) != fVar4)) {
      *(float *)(param_3 + 0x354) = fVar4;
      FUN_0091ada4(param_3 + 0x310);
    }
    FUN_00ed5ee0(0x3f000000,param_3 + 0x670,param_4 & 1);
    if ((0.0 < (float)(*(uint *)(param_3 + 0x6f4) >> 7 & 0xff) / 255.0) &&
       (fVar4 = -(fVar2 * (fVar5 / fVar3) + -10.0), *(float *)(param_3 + 0x6b0) != fVar4)) {
      *(float *)(param_3 + 0x6b0) = fVar4;
      FUN_0091ada4(param_3 + 0x670);
      return;
    }
  }
  return;
}




void FUN_00ed6594(long *param_1,undefined4 param_2)

{
  FUN_00f017e8();
  *param_1 = (long)&PTR_FUN_02823178;
  FUN_00f0e4a8(param_1 + 0x11);
  FUN_00f0e4a8(param_1 + 0x2f);
  FUN_00f0e4a8(param_1 + 0x4d);
  *(undefined4 *)(param_1 + 0x6b) = param_2;
  *(byte *)((long)param_1 + 0x35c) = *(byte *)((long)param_1 + 0x35c) & 0xfc;
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x11,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x2f,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x4d,1);
  if ((*(uint *)((long)param_1 + 0x84) & 0x7f80) != 0) {
    *(uint *)((long)param_1 + 0x84) = *(uint *)((long)param_1 + 0x84) & 0xffff807f;
    FUN_0091ada4(param_1);
    return;
  }
  return;
}




void FUN_00ed6680(void *param_1)

{
  FUN_00ed5588();
  operator_delete(param_1);
  return;
}




void FUN_00ed66a4(void *param_1)

{
  FUN_00ed5588();
  operator_delete(param_1);
  return;
}




void FUN_00ed66c8(void *param_1)

{
  FUN_00ed5588();
  operator_delete(param_1);
  return;
}




void FUN_00ed66ec(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  code *local_78;
  undefined8 *puStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  FUN_00ed5380();
  *param_1 = &PTR_thunk_FUN_00ed5534_02823478;
  param_1[0x13c] = 0;
  param_1[0x13b] = 0;
  param_1[0x13e] = 0;
  param_1[0x13d] = 0;
  param_1[0x140] = 0x4316000041700000;
  param_1[0x13f] = 0x3d4ccccd460ca000;
  param_1[0x141] = 0x439d800041200000;
  *(undefined4 *)(param_1 + 0x142) = 0x42a00000;
  puVar1 = param_1 + 1;
  local_50 = DAT_03210f58;
  *(byte *)(param_1 + 0x144) = *(byte *)(param_1 + 0x144) & 0xf8 | 4;
  param_1[0x143] = 0;
  local_78 = FUN_00ed6910;
  local_60 = 0;
  uStack_58 = 0;
  local_68 = 0;
  puStack_70 = param_1;
  FUN_009693a0(puVar1,&local_78);
  local_50 = DAT_03210f5c;
  local_78 = FUN_00ed6924;
  local_60 = 0;
  uStack_58 = 0;
  local_68 = 0;
  puStack_70 = param_1;
  FUN_009693a0(puVar1,&local_78);
  local_50 = DAT_03210f60;
  local_78 = FUN_00ed6938;
  local_60 = 0;
  uStack_58 = 0;
  local_68 = 0;
  puStack_70 = param_1;
  FUN_009693a0(puVar1,&local_78);
  local_50 = DAT_03210f7c;
  local_78 = FUN_00ed694c;
  local_60 = 0;
  uStack_58 = 0;
  local_68 = 0;
  puStack_70 = param_1;
  FUN_009693a0(puVar1,&local_78);
  local_78 = FUN_00ed6910;
  local_50 = DAT_03210f84;
  local_60 = 0;
  uStack_58 = 0;
  local_68 = 0;
  puStack_70 = param_1;
  FUN_009693a0(puVar1,&local_78);
  local_78 = FUN_00ed6924;
  local_50 = DAT_03210f88;
  local_60 = 0;
  uStack_58 = 0;
  local_68 = 0;
  puStack_70 = param_1;
  FUN_009693a0(puVar1,&local_78);
  local_78 = FUN_00ed6938;
  local_50 = DAT_03210f8c;
  local_60 = 0;
  uStack_58 = 0;
  local_68 = 0;
  puStack_70 = param_1;
  FUN_009693a0(puVar1,&local_78);
  local_50 = DAT_03210fa4;
  local_78 = FUN_00ed6960;
  local_60 = 0;
  uStack_58 = 0;
  local_68 = 0;
  puStack_70 = param_1;
  FUN_009693a0(puVar1,&local_78);
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ed6910(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x00ed6920. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x160))(param_1,param_4,param_5);
  return;
}




void FUN_00ed6924(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x00ed6934. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x168))(param_1,param_4,param_5);
  return;
}




void FUN_00ed6938(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x00ed6948. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x170))(param_1,param_4,param_5);
  return;
}




void FUN_00ed694c(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x00ed695c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x178))(param_1,param_4,param_5);
  return;
}




void FUN_00ed6960(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x00ed6970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x180))(param_1,param_4,param_5);
  return;
}




void FUN_00ed6978(void *param_1)

{
  FUN_00ed5534();
  operator_delete(param_1);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00ed699c(float param_1,float param_2,long param_3)

{
  long lVar1;
  bool bVar2;
  ulong uVar3;
  long lVar4;
  float fVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  ulong uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar3 = FUN_00ed5af8();
  if ((uVar3 & 1) == 0) goto LAB_00ed6dac;
  if ((*(byte *)(param_3 + 0xa20) & 1) == 0) {
    fVar5 = powf(*(float *)(param_3 + 0x9fc),param_1);
    uVar3 = *(ulong *)(param_3 + 0x9f0);
    bVar2 = false;
    *(ulong *)(param_3 + 0x9f0) = CONCAT44((float)(uVar3 >> 0x20) * fVar5,(float)uVar3 * fVar5);
    if ((*(byte *)(param_3 + 0xa20) >> 2 & 1) != 0) {
      fVar5 = (float)FUN_00ed6dd4(param_3);
      fVar12 = ABS(fVar5);
      fVar7 = (float)uVar3;
      fVar8 = ABS(fVar7);
      if ((1.0 <= fVar12) || (bVar2 = false, 1.0 <= fVar8)) {
        fVar10 = *(float *)(param_3 + 0xa08);
        fVar11 = *(float *)(param_3 + 0xa0c);
        if (fVar5 <= 0.0) {
          bVar2 = false;
          if (fVar5 < 0.0) {
            if (0.0 <= *(float *)(param_3 + 0x9f0)) {
              fVar12 = fVar12 * fVar10;
              goto LAB_00ed6b98;
            }
            bVar2 = false;
            fVar12 = fVar12 * fVar11 * param_1 + *(float *)(param_3 + 0x9f0);
            goto LAB_00ed6b9c;
          }
        }
        else {
          if (*(float *)(param_3 + 0x9f0) <= 0.0) {
            fVar12 = -(fVar12 * fVar10);
LAB_00ed6b98:
            bVar2 = true;
          }
          else {
            bVar2 = false;
            fVar12 = *(float *)(param_3 + 0x9f0) - fVar12 * fVar11 * param_1;
          }
LAB_00ed6b9c:
          *(float *)(param_3 + 0x9f0) = fVar12;
        }
        if (fVar7 <= 0.0) {
          if (fVar7 < 0.0) {
            if (0.0 <= *(float *)(param_3 + 0x9f4)) {
              fVar8 = fVar8 * fVar10;
              goto LAB_00ed6bfc;
            }
            fVar12 = fVar8 * fVar11 * param_1;
            fVar5 = fVar12 + *(float *)(param_3 + 0x9f4);
            goto LAB_00ed6be8;
          }
        }
        else if (*(float *)(param_3 + 0x9f4) <= 0.0) {
          fVar8 = -(fVar8 * fVar10);
LAB_00ed6bfc:
          *(float *)(param_3 + 0x9f4) = fVar8;
          bVar2 = true;
        }
        else {
          fVar12 = fVar8 * fVar11 * param_1;
          fVar5 = *(float *)(param_3 + 0x9f4) - fVar12;
LAB_00ed6be8:
          uVar3 = (ulong)(uint)fVar12;
          *(float *)(param_3 + 0x9f4) = fVar5;
        }
      }
    }
    fVar12 = (float)uVar3;
    fVar5 = (float)FUN_00ed6dd4(param_3);
    if ((fVar5 == 0.0) && (ABS(*(float *)(param_3 + 0x9f0)) < 10.0)) {
      *(undefined4 *)(param_3 + 0x9f0) = 0;
    }
    if ((fVar12 == 0.0) && (ABS(*(float *)(param_3 + 0x9f4)) < 10.0)) {
      *(undefined4 *)(param_3 + 0x9f4) = 0;
    }
  }
  else {
    lVar4 = FUN_00965ecc(param_3);
    if (param_1 <= 0.0) {
      uVar6 = CONCAT44(_DAT_03218efc,DAT_03218ef8);
    }
    else {
      uVar3 = *(ulong *)(lVar4 + 0x10);
      uVar9 = NEON_fmov(0x3f800000,4);
      uVar9 = uVar9 ^ (uVar9 ^ uVar3) &
                      CONCAT44(-(uint)(0.0 < (float)(uVar3 >> 0x20)),-(uint)(0.0 < (float)uVar3));
      uVar6 = CONCAT44(((float)((ulong)*(undefined8 *)(param_3 + 0x9e0) >> 0x20) /
                       (float)(uVar9 >> 0x20)) / param_1,
                       ((float)*(undefined8 *)(param_3 + 0x9e0) / (float)uVar9) / param_1);
      param_2 = param_1;
    }
    bVar2 = false;
    *(undefined8 *)(param_3 + 0x9f0) = uVar6;
    if ((*(byte *)(param_3 + 0xa20) >> 2 & 1) != 0) {
      fVar12 = (float)FUN_00ed6dd4(param_3);
      fVar8 = -1.0;
      fVar7 = -1.0;
      fVar5 = fVar7;
      if (0.0 <= fVar12) {
        fVar5 = 1.0;
      }
      fVar10 = fVar7;
      if (0.0 <= *(float *)(param_3 + 0x9f0)) {
        fVar10 = 1.0;
      }
      fVar11 = 0.0;
      if (fVar5 == fVar10) {
        fVar11 = ABS(fVar12) / *(float *)(param_3 + 0xa04);
      }
      if (0.0 <= param_2) {
        fVar7 = 1.0;
      }
      if (0.0 <= *(float *)(param_3 + 0x9f4)) {
        fVar8 = 1.0;
      }
      fVar5 = 0.0;
      if (fVar7 == fVar8) {
        fVar5 = ABS(param_2) / *(float *)(param_3 + 0xa04);
      }
      fVar12 = (float)DAT_03218f00 - fVar11;
      if ((float)DAT_03218f00 <= (float)DAT_03218f00 - fVar11) {
        fVar12 = (float)DAT_03218f00;
      }
      fVar8 = DAT_03218ef8;
      if (DAT_03218ef8 <= fVar12) {
        fVar8 = fVar12;
      }
      fVar12 = DAT_03218f00._4_4_ - fVar5;
      if (DAT_03218f00._4_4_ <= DAT_03218f00._4_4_ - fVar5) {
        fVar12 = DAT_03218f00._4_4_;
      }
      fVar5 = _DAT_03218efc;
      if (_DAT_03218efc <= fVar12) {
        fVar5 = fVar12;
      }
      *(float *)(param_3 + 0x9f0) = *(float *)(param_3 + 0x9f0) * fVar8;
      bVar2 = false;
      *(float *)(param_3 + 0x9f4) = *(float *)(param_3 + 0x9f4) * fVar5;
    }
  }
  uVar3 = FUN_00ed5b08(param_3);
  if ((uVar3 & 1) == 0) {
    *(undefined4 *)(param_3 + 0x9f0) = 0;
  }
  uVar3 = FUN_00ed5b14(param_3);
  if ((uVar3 & 1) == 0) {
    fVar5 = 0.0;
    *(undefined4 *)(param_3 + 0x9f4) = 0;
  }
  else {
    fVar5 = *(float *)(param_3 + 0x9f4);
  }
  fVar7 = *(float *)(param_3 + 0x9f8);
  fVar12 = -fVar7;
  fVar8 = *(float *)(param_3 + 0x9f0);
  if (fVar7 <= *(float *)(param_3 + 0x9f0)) {
    fVar8 = fVar7;
  }
  fVar10 = fVar12;
  if (fVar12 <= fVar8) {
    fVar10 = fVar8;
  }
  if (fVar7 <= fVar5) {
    fVar5 = fVar7;
  }
  if (fVar12 <= fVar5) {
    fVar12 = fVar5;
  }
  *(float *)(param_3 + 0x9f0) = fVar10;
  *(float *)(param_3 + 0x9f4) = fVar12;
  fVar5 = (float)FUN_00ed5a4c(param_3);
  fVar12 = (float)NEON_fminnm(param_1,0x3dcccccd);
  if (fVar12 <= 0.0) {
    fVar12 = 0.0;
  }
  local_40 = CONCAT44(fVar7 + (float)((ulong)*(undefined8 *)(param_3 + 0x9f0) >> 0x20) * fVar12,
                      fVar5 + (float)*(undefined8 *)(param_3 + 0x9f0) * fVar12);
  if ((*(byte *)(param_3 + 0xa20) >> 2 & 1) == 0) {
    FUN_00ed6ed0(param_3,&local_40);
  }
  FUN_00ed5a14(param_3,&local_40);
  fVar5 = fVar12 * *(float *)(param_3 + 0x9f4);
  FUN_00ed6f88(fVar12 * *(float *)(param_3 + 0x9f0),param_3);
  if (bVar2) {
    fVar12 = (float)FUN_00ed6dd4(param_3);
    if (((0.0 < fVar12) && (fVar12 < 1.0)) || ((fVar12 < 0.0 && (-1.0 < fVar12)))) {
      *(undefined4 *)(param_3 + 0x9f0) = 0;
    }
    if (((0.0 < fVar5) && (fVar5 < 1.0)) || ((fVar5 < 0.0 && (-1.0 < fVar5)))) {
      *(undefined4 *)(param_3 + 0x9f4) = 0;
    }
  }
  FUN_00ed6444(param_3,*(float *)(param_3 + 0x9f0) != 0.0,*(float *)(param_3 + 0x9f4) != 0.0);
LAB_00ed6dac:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined1  [16] FUN_00ed6dd4(undefined8 param_1)

{
  ulong uVar1;
  long *plVar2;
  float fVar3;
  float fVar4;
  undefined1 auVar5 [16];
  float fVar6;
  
  uVar1 = FUN_00f02540();
  if ((uVar1 & 1) == 0) {
    auVar5 = ZEXT416(DAT_03218ef8);
  }
  else {
    fVar3 = (float)FUN_00ed5a0c(param_1);
    plVar2 = (long *)FUN_00ed5aa0(param_1);
    fVar4 = (float)(**(code **)(*plVar2 + 0x50))();
    auVar5 = FUN_00ed5a4c(param_1);
    if (((fVar3 < fVar4) && (fVar6 = auVar5._0_4_, fVar6 <= 0.0)) &&
       (auVar5 = ZEXT816(0), fVar6 < fVar3 - fVar4)) {
      auVar5 = ZEXT416((uint)(fVar6 + (fVar4 - fVar3)));
    }
  }
  return auVar5;
}




undefined4 FUN_00ed6eb0(long param_1)

{
  return *(undefined4 *)(param_1 + 0xa04);
}




undefined4 FUN_00ed6eb8(long param_1)

{
  return *(undefined4 *)(param_1 + 0xa08);
}




undefined4 FUN_00ed6ec0(long param_1)

{
  return *(undefined4 *)(param_1 + 0xa0c);
}




undefined4 FUN_00ed6ec8(long param_1)

{
  return *(undefined4 *)(param_1 + 0x9f8);
}




void FUN_00ed6ed0(undefined1 param_1 [16],float param_2,undefined8 param_3,float *param_4)

{
  ulong uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  uVar1 = FUN_00f02540();
  if ((uVar1 & 1) != 0) {
    fVar2 = (float)FUN_00ed5a0c(param_3);
    fVar4 = param_2;
    fVar3 = (float)FUN_00ed5a98(param_3);
    uVar1 = FUN_00ed5b08(param_3);
    if ((uVar1 & 1) != 0) {
      fVar2 = fVar2 - fVar3;
      fVar3 = *param_4;
      if (*param_4 < fVar2) {
        *param_4 = fVar2;
        fVar3 = fVar2;
      }
      if (0.0 < fVar3) {
        *param_4 = 0.0;
      }
    }
    uVar1 = FUN_00ed5b14(param_3);
    if ((uVar1 & 1) != 0) {
      param_2 = param_2 - fVar4;
      fVar4 = param_4[1];
      if (param_4[1] < param_2) {
        param_4[1] = param_2;
        fVar4 = param_2;
      }
      if (0.0 < fVar4) {
        param_4[1] = 0.0;
      }
    }
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00ed6f88(float param_1,float param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [32];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if ((param_1 == DAT_03218ef8) && (param_2 == _DAT_03218efc)) goto LAB_00ed707c;
  if (param_2 <= 0.0) {
    if (param_2 < 0.0) {
      uVar3 = 0xffffffff;
      goto LAB_00ed6fec;
    }
    FUN_00ed5b14(param_3);
  }
  else {
    uVar3 = 1;
LAB_00ed6fec:
    uVar2 = FUN_00ed5b14(param_3);
    if ((uVar2 & 1) != 0) {
      FUN_00f048e0(auStack_58,DAT_03210c50,uVar3);
      FUN_00f04760(param_3,auStack_58,0);
    }
  }
  if (param_1 <= 0.0) {
    if (0.0 <= param_1) {
      FUN_00ed5b08(param_3);
      goto LAB_00ed707c;
    }
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = 1;
  }
  uVar2 = FUN_00ed5b08(param_3);
  if ((uVar2 & 1) != 0) {
    FUN_00f048e0(auStack_58,DAT_03210c4c,uVar3);
    FUN_00f04760(param_3,auStack_58,0);
  }
LAB_00ed707c:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

