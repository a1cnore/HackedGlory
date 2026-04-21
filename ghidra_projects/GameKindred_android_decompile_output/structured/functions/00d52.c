// functions/00d52 — 31 functions
#include "libGameKindred.h"




bool FUN_00d52028(ushort *param_1,uint param_2)

{
  uint uVar1;
  ushort uVar2;
  bool bVar3;
  uint uVar4;
  ushort *puVar5;
  
  uVar1 = *param_1 & 0x1f;
  if (uVar1 == 0x1f) {
    bVar3 = true;
  }
  else {
    uVar2 = *param_1 >> 10;
    if ((uVar2 & 0x1f) != 0) {
      uVar4 = 0;
      puVar5 = param_1 + 4;
      do {
        if (*puVar5 == param_2) goto LAB_00d52070;
        uVar4 = uVar4 + 1;
        puVar5 = puVar5 + 0x1c;
      } while (uVar4 < (uVar2 & 0x1f));
    }
    uVar4 = 0x1f;
LAB_00d52070:
    bVar3 = true;
    if (uVar4 != uVar1) {
      bVar3 = (1 << (ulong)(uVar4 & 0x1f) & (uint)param_1[(ulong)uVar1 * 0x1c + 5]) != 0;
    }
  }
  return bVar3;
}




void FUN_00d520a0(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  
  uVar1 = *(ushort *)(param_1 + 0x68) & 0x1f;
  if ((uVar1 != 0x1f) && (*(short *)(param_1 + (ulong)uVar1 * 0x38 + 0x70) == 5)) {
    uVar2 = 0;
    while (((lVar3 = *(long *)(param_1 + 0x1e8 + uVar2 * 8), lVar3 == 0 || (lVar3 == param_2)) ||
           (*(char *)(lVar3 + 0x6a) != '\0'))) {
      uVar2 = uVar2 + 1;
      if (1 < uVar2) {
        FUN_00d4f8a8(param_1 + 0x68,1,0,0);
        return;
      }
    }
  }
  return;
}




undefined1 FUN_00d5210c(long param_1)

{
  return *(undefined1 *)(*(long *)(param_1 + 0x38) + 0x48);
}




void FUN_00d52118(long param_1)

{
  *(uint *)(param_1 + 0x238) = *(uint *)(param_1 + 0x238) & 0xffffdfff;
  return;
}




void FUN_00d52128(long param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x238);
  *(uint *)(param_1 + 0x238) = uVar1 & 0xfffffc00 | uVar1 & 0x3f | (uVar1 + 0x40 >> 6 & 0xf) << 6;
  return;
}




void FUN_00d52140(long param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x238);
  *(uint *)(param_1 + 0x238) = uVar1 & 0xfffffc00 | uVar1 & 0x3f | (uVar1 + 0x3c0 >> 6 & 0xf) << 6;
  return;
}




void FUN_00d52158(long param_1)

{
  uint uVar1;
  undefined4 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined4 uVar5;
  ulong uVar6;
  long lVar7;
  int iVar8;
  long lVar9;
  undefined4 uVar10;
  undefined1 auStack_90 [88];
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  uVar1 = *(ushort *)(param_1 + 0x68) & 0x1f;
  if (((uVar1 != 0x1f) && (*(short *)(param_1 + (ulong)uVar1 * 0x38 + 0x70) == 2)) &&
     (*(char *)(*(long *)(param_1 + 0x38) + 0x90) != '\0')) {
    lVar7 = *(long *)(param_1 + 0x10);
    lVar9 = *(long *)(lVar7 + 8);
    while (*(int *)(lVar9 + 0xa4) != DAT_02c09220) {
      lVar7 = *(long *)(lVar7 + 0x10);
      lVar9 = *(long *)(lVar7 + 8);
    }
    uVar1 = *(ushort *)(lVar7 + 0x88) & 0x1f;
    if ((uVar1 == 0x1f) || (1 < *(ushort *)(lVar7 + (ulong)uVar1 * 0x38 + 0x90) - 3)) {
      FUN_00d5089c(param_1);
      uVar6 = FUN_00ceab48();
      puVar4 = PTR_s_Buff_DashInterrupted_02beb3d0;
      if ((uVar6 & 1) != 0) {
        lVar9 = *(long *)(param_1 + 0x10);
        iVar8 = *(int *)(*(long *)(lVar9 + 8) + 0xa4);
        lVar7 = lVar9;
        if (iVar8 == DAT_02c09220) {
          uVar10 = *(undefined4 *)(lVar9 + 0x260);
        }
        else {
          do {
            lVar7 = *(long *)(lVar7 + 0x10);
          } while (*(int *)(*(long *)(lVar7 + 8) + 0xa4) != DAT_02c09220);
          uVar10 = *(undefined4 *)(lVar7 + 0x260);
          while (iVar8 != DAT_02c09220) {
            lVar9 = *(long *)(lVar9 + 0x10);
            iVar8 = *(int *)(*(long *)(lVar9 + 8) + 0xa4);
          }
        }
        uVar2 = *(undefined4 *)(lVar9 + 0x260);
        uVar5 = FUN_00ceb350();
        FUN_00cfe864(0x3f000000,0,0,auStack_90,uVar10,uVar2,puVar4,uVar5,1,0,0);
        FUN_00ce20fc(auStack_90);
      }
    }
  }
  if (*(long *)(lVar3 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00d522dc(long param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  
  uVar2 = *(uint *)(param_1 + 0x238) >> 3 & 7;
  if (uVar2 == 0) {
    if (*(long *)(param_1 + 0x60) == 0) {
      return 0;
    }
    uVar3 = FUN_00d5ef64();
    if ((int)uVar3 == 0) {
      return uVar3;
    }
    if (*(long *)(param_1 + 0x60) == 0) {
      return 0;
    }
    lVar4 = FUN_00d5eebc(*(long *)(param_1 + 0x60),0);
    if (lVar4 == 0) {
      return 0;
    }
    FUN_00d55794(lVar4,param_2,0);
  }
  else {
    if ((uVar2 != 2) && (uVar2 != 1)) {
      return 0;
    }
    uVar1 = *(undefined4 *)(param_1 + 0x1e0);
    *param_2 = *(undefined8 *)(param_1 + 0x1d8);
    *(undefined4 *)(param_2 + 1) = uVar1;
  }
  return 1;
}




void FUN_00d52364(long param_1,uint param_2,ulong param_3,uint param_4)

{
  int iVar1;
  long lVar2;
  undefined4 uVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined8 local_78;
  float local_70;
  float local_68;
  float fStack_64;
  float local_60;
  float local_58;
  float fStack_54;
  float local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  plVar4 = *(long **)(param_1 + 0x208);
  if (plVar4 != (long *)0x0) {
    if (*(int *)(param_1 + 0x210) == (int)plVar4[1]) {
      lVar5 = (**(code **)(*plVar4 + 0x10))();
      if (lVar5 != 0) {
        plVar4 = *(long **)(param_1 + 0x208);
        uVar6 = 0;
        if (plVar4 != (long *)0x0) {
          if (*(int *)(param_1 + 0x210) == (int)plVar4[1]) {
            uVar6 = (**(code **)(*plVar4 + 0x10))();
          }
          else {
            *(undefined8 *)(param_1 + 0x208) = 0;
            uVar6 = 0;
            *(undefined4 *)(param_1 + 0x210) = DAT_03214ce8;
          }
        }
        FUN_019888f4(uVar6);
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x208) = 0;
      *(undefined4 *)(param_1 + 0x210) = DAT_03214ce8;
    }
  }
  lVar5 = *(long *)(param_1 + 0x10);
  while ((lVar5 != 0 && (*(int *)(*(long *)(lVar5 + 8) + 0xa4) != DAT_02c09220))) {
    lVar5 = *(long *)(lVar5 + 0x10);
  }
  lVar5 = FUN_01985d44(lVar5,DAT_031a9328);
  uVar3 = DAT_03214ce8;
  if (lVar5 == 0) {
    *(undefined8 *)(param_1 + 0x208) = 0;
    *(undefined4 *)(param_1 + 0x210) = uVar3;
  }
  else {
    iVar1 = *(int *)(lVar5 + 0x30);
    *(long **)(param_1 + 0x208) = (long *)(lVar5 + 0x28);
    *(int *)(param_1 + 0x210) = iVar1;
    if (iVar1 == *(int *)(lVar5 + 0x30)) {
      lVar5 = (**(code **)(*(long *)(lVar5 + 0x28) + 0x10))();
      if (lVar5 != 0) {
        lVar5 = (**(code **)(**(long **)(param_1 + 0x208) + 0x10))();
        *(undefined4 *)(lVar5 + 0x70) = 100;
        if ((param_3 & 1) == 0) {
          uVar7 = FUN_00d522dc(param_1,&local_58);
          if ((uVar7 & 1) != 0) {
            lVar5 = *(long *)(param_1 + 0x10);
            while ((lVar5 != 0 && (*(int *)(*(long *)(lVar5 + 8) + 0xa4) != DAT_02c09220))) {
              lVar5 = *(long *)(lVar5 + 0x10);
            }
            FUN_00d55794(lVar5,&local_68,0);
            local_78._0_4_ = local_58 - local_68;
            local_78._4_4_ = local_50 - local_60;
            fVar9 = (float)local_78 * (float)local_78 + local_78._4_4_ * local_78._4_4_;
            if (1e-08 <= fVar9) {
              fVar10 = SQRT(fVar9);
              if (NAN(fVar10)) {
                fVar10 = sqrtf(fVar9);
              }
              fVar9 = (float)local_78 / fVar10;
              fVar10 = local_78._4_4_ / fVar10;
              local_78 = CONCAT44(fVar10,fVar9);
            }
            else {
              fVar9 = (float)DAT_03218f20;
              fVar10 = (float)((ulong)DAT_03218f20 >> 0x20);
              local_78 = DAT_03218f20;
            }
            if ((param_4 & 1) != 0) {
              local_78 = CONCAT44(-fVar10,-fVar9);
            }
            plVar4 = *(long **)(param_1 + 0x208);
            uVar6 = 0;
            if (plVar4 != (long *)0x0) {
              if (*(int *)(param_1 + 0x210) == (int)plVar4[1]) {
                uVar6 = (**(code **)(*plVar4 + 0x10))();
              }
              else {
                *(undefined8 *)(param_1 + 0x208) = 0;
                uVar6 = 0;
                *(undefined4 *)(param_1 + 0x210) = DAT_03214ce8;
              }
            }
            FUN_00d6fa80(uVar6,&local_78,param_2 & 1);
          }
        }
        else {
          plVar4 = *(long **)(param_1 + 0x208);
          uVar6 = 0;
          if (plVar4 != (long *)0x0) {
            if (*(int *)(param_1 + 0x210) == (int)plVar4[1]) {
              uVar6 = (**(code **)(*plVar4 + 0x10))();
            }
            else {
              *(undefined8 *)(param_1 + 0x208) = 0;
              uVar6 = 0;
              *(undefined4 *)(param_1 + 0x210) = DAT_03214ce8;
            }
          }
          FUN_00d6fb60(uVar6,param_1,param_2 & 1);
        }
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x208) = 0;
      *(undefined4 *)(param_1 + 0x210) = uVar3;
    }
  }
  if (((param_2 & 1) != 0) && (uVar7 = FUN_00d522dc(param_1,&local_58), (uVar7 & 1) != 0)) {
    lVar5 = *(long *)(param_1 + 0x10);
    while ((lVar5 != 0 && (*(int *)(*(long *)(lVar5 + 8) + 0xa4) != DAT_02c09220))) {
      lVar5 = *(long *)(lVar5 + 0x10);
    }
    FUN_00d55794(lVar5,&local_68,0);
    local_78._0_4_ = local_58 - local_68;
    local_78._4_4_ = fStack_54 - fStack_64;
    local_70 = local_50 - local_60;
    fVar10 = (float)local_78 * (float)local_78 + local_78._4_4_ * local_78._4_4_ +
             local_70 * local_70;
    fVar9 = DAT_03218f70;
    uVar6 = DAT_03218f68;
    if (1e-08 <= fVar10) {
      fVar8 = SQRT(fVar10);
      if (NAN(fVar8)) {
        fVar8 = sqrtf(fVar10);
      }
      fVar9 = local_70 / fVar8;
      uVar6 = CONCAT44(local_78._4_4_ / fVar8,(float)local_78 / fVar8);
    }
    local_78 = uVar6;
    local_70 = fVar9;
    if ((param_4 & 1) != 0) {
      local_78 = CONCAT44(-(float)((ulong)local_78 >> 0x20),-(float)local_78);
      local_70 = -local_70;
    }
    lVar5 = *(long *)(param_1 + 0x10);
    while ((lVar5 != 0 && (*(int *)(*(long *)(lVar5 + 8) + 0xa4) != DAT_02c09220))) {
      lVar5 = *(long *)(lVar5 + 0x10);
    }
    FUN_00d580b0(lVar5,&local_78);
  }
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined4 FUN_00d527a4(long param_1)

{
  return *(undefined4 *)(param_1 + 0x23c);
}




undefined1  [16] FUN_00d527ac(long param_1)

{
  undefined4 extraout_s0;
  undefined4 extraout_var;
  undefined8 extraout_var_00;
  undefined1 auVar1 [16];
  
  if (*(long *)(param_1 + 0x1f8) != 0) {
    FUN_00d6d8a4();
    auVar1._4_4_ = extraout_var;
    auVar1._0_4_ = extraout_s0;
    auVar1._8_8_ = extraout_var_00;
    return auVar1;
  }
  return ZEXT816(0);
}




undefined1  [16] FUN_00d527c0(long param_1)

{
  undefined4 extraout_s0;
  undefined4 extraout_var;
  undefined8 extraout_var_00;
  undefined1 auVar1 [16];
  
  if ((*(char *)(*(long *)(param_1 + 0x38) + 0x8a) == '\0') && (*(long *)(param_1 + 0x1f8) != 0)) {
    FUN_00d6d8a4();
    auVar1._4_4_ = extraout_var;
    auVar1._0_4_ = extraout_s0;
    auVar1._8_8_ = extraout_var_00;
    return auVar1;
  }
  return ZEXT816(0);
}




long FUN_00d527e0(long param_1)

{
  return param_1 + -0x28;
}




long FUN_00d527e8(long param_1)

{
  return param_1 + -0x28;
}




undefined8 FUN_00d527f0(undefined8 param_1)

{
  FUN_00d4ee30();
  return param_1;
}




void FUN_00d52814(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00d5281c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)();
  return;
}




void FUN_00d52820(undefined8 *param_1)

{
  long lVar1;
  
  param_1[5] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[7] = 0;
  *(undefined2 *)(param_1 + 0x33) = 0;
  *(undefined1 *)((long)param_1 + 0x19a) = 0;
  *param_1 = &PTR_thunk_FUN_01985bd0_0281da88;
  *(undefined4 *)((long)param_1 + 0x194) = 0xffffffff;
  memset(param_1 + 10,0,0xa0);
  lVar1 = 0;
  do {
    *(undefined4 *)((long)param_1 + lVar1 + 0x158) = 0xffffffff;
    lVar1 = lVar1 + 4;
  } while (lVar1 != 0x3c);
  return;
}




void FUN_00d5289c(void *param_1)

{
  FUN_01985bd0();
  operator_delete(param_1);
  return;
}




void FUN_00d528c0(long param_1)

{
  long lVar1;
  
  DAT_02e3ef78 = *(uint *)(param_1 + 0x13fb0);
  *(uint *)(param_1 + 0x13fb0) = DAT_02e3ef78 + 1;
  lVar1 = param_1 + (ulong)DAT_02e3ef78 * 0x2e8;
  *(code **)(lVar1 + 0xb0) = FUN_00d54a4c;
  *(code **)(lVar1 + 0xb8) = FUN_00d54ac4;
  *(uint *)(lVar1 + 0xa4) = DAT_02e3ef78;
  *(undefined4 *)(lVar1 + 0xa8) = 0x1a0;
  *(uint *)(lVar1 + 0x2d8) = *(uint *)(lVar1 + 0x2d8) & 0x80000000 | 200;
  *(long *)(param_1 + 0x13fb8) = lVar1;
  return;
}




void FUN_00d52920(long param_1,undefined8 param_2)

{
  int *piVar1;
  int *piVar2;
  ulong uVar3;
  
  piVar1 = (int *)FUN_00d50ad4(param_2);
  if ((*piVar1 != 0x377db359) && (*(char *)(param_1 + 0x198) != '\0')) {
    uVar3 = 0;
    do {
      piVar1 = (int *)FUN_00d50ad4(*(undefined8 *)(param_1 + 0x50 + uVar3 * 8));
      piVar2 = (int *)FUN_00d50ad4(param_2);
      if (*piVar1 == *piVar2) {
        FUN_00d50824(*(undefined8 *)(param_1 + 0x50 + uVar3 * 8));
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(byte *)(param_1 + 0x198));
  }
  return;
}




void FUN_00d529bc(long param_1,long param_2)

{
  char *pcVar1;
  byte bVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  long *plVar8;
  char *pcVar9;
  
  *(long *)(param_1 + 0x28) = param_2;
  plVar6 = *(long **)(param_2 + 0x30);
  lVar5 = param_2;
  if (plVar6 != (long *)0x0) {
    lVar5 = *plVar6;
    while (lVar5 != 0) {
      plVar6 = plVar6 + 1;
      FUN_00d52be4(param_1,lVar5,0);
      lVar5 = *plVar6;
    }
    lVar5 = *(long *)(param_1 + 0x28);
  }
  pcVar9 = *(char **)(lVar5 + 0x10);
  uVar3 = FUN_00e6a488(pcVar9);
  pcVar1 = "Ability__Withdraw";
  if ((uVar3 & 1) == 0) {
    pcVar1 = pcVar9;
  }
  uVar3 = FUN_00e6a488(pcVar1);
  if ((uVar3 & 1) == 0) {
    uVar4 = FUN_00d52ca0(param_1,"*Ability__Withdraw*",pcVar1);
    *(undefined8 *)(param_1 + 0x30) = uVar4;
  }
  uVar4 = FUN_00d52cf8(param_1);
  uVar3 = FUN_00e6a488();
  if ((uVar3 & 1) == 0) {
    uVar4 = FUN_00d52ca0(param_1,"*Ability__Die*",uVar4);
    *(undefined8 *)(param_1 + 0x38) = uVar4;
  }
  uVar4 = FUN_00d52d64(param_1);
  uVar3 = FUN_00e6a488();
  if ((uVar3 & 1) == 0) {
    uVar4 = FUN_00d52ca0(param_1,"*Ability__Emote_Dance*",uVar4);
    *(undefined8 *)(param_1 + 0x40) = uVar4;
  }
  uVar4 = FUN_00d52dd0(param_1);
  uVar3 = FUN_00e6a488();
  if ((uVar3 & 1) == 0) {
    uVar4 = FUN_00d52ca0(param_1,"*Ability__Emote_Taunt*",uVar4);
    *(undefined8 *)(param_1 + 0x48) = uVar4;
  }
  plVar6 = *(long **)(param_2 + 0x40);
  if (plVar6 != (long *)0x0) {
    lVar5 = *plVar6;
    while (lVar5 != 0) {
      plVar8 = *(long **)(lVar5 + 0x38);
      if (plVar8 != (long *)0x0) {
        puVar7 = (undefined8 *)*plVar8;
        while (puVar7 != (undefined8 *)0x0) {
          plVar8 = plVar8 + 1;
          FUN_00d52e3c(param_1,"*Ability__DefaultAttack*",*puVar7);
          puVar7 = (undefined8 *)*plVar8;
        }
        lVar5 = *plVar6;
      }
      plVar8 = *(long **)(lVar5 + 0x40);
      if (plVar8 != (long *)0x0) {
        puVar7 = (undefined8 *)*plVar8;
        while (puVar7 != (undefined8 *)0x0) {
          plVar8 = plVar8 + 1;
          FUN_00d52e3c(param_1,"*Ability__DefaultAttack*",*puVar7);
          puVar7 = (undefined8 *)*plVar8;
        }
      }
      plVar6 = plVar6 + 1;
      lVar5 = *plVar6;
    }
  }
  if (*(uint *)(param_2 + 0x48) != 0xffffffff) {
    bVar2 = *(byte *)(param_1 + 0x199);
    *(undefined8 *)(param_1 + (ulong)bVar2 * 8 + 0xf0) =
         *(undefined8 *)(param_1 + (ulong)*(uint *)(param_2 + 0x48) * 8 + 0x50);
    *(byte *)(param_1 + 0x199) = bVar2 + 1;
  }
  if (*(uint *)(param_2 + 0x4c) != 0xffffffff) {
    bVar2 = *(byte *)(param_1 + 0x199);
    *(undefined8 *)(param_1 + (ulong)bVar2 * 8 + 0xf0) =
         *(undefined8 *)(param_1 + (ulong)*(uint *)(param_2 + 0x4c) * 8 + 0x50);
    *(byte *)(param_1 + 0x199) = bVar2 + 1;
  }
  if (*(uint *)(param_2 + 0x50) != 0xffffffff) {
    bVar2 = *(byte *)(param_1 + 0x199);
    *(undefined8 *)(param_1 + (ulong)bVar2 * 8 + 0xf0) =
         *(undefined8 *)(param_1 + (ulong)*(uint *)(param_2 + 0x50) * 8 + 0x50);
    *(byte *)(param_1 + 0x199) = bVar2 + 1;
  }
  return;
}




undefined8 FUN_00d52be4(long param_1,long param_2,undefined8 param_3)

{
  byte bVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  if (*(char *)(param_1 + 0x198) != '\x14') {
    uVar2 = FUN_01985d44(param_1,DAT_031a94c4);
    FUN_00d4fe50(uVar2,param_2,param_1,param_3);
    bVar1 = *(byte *)(param_1 + 0x198);
    if (*(char *)(param_2 + 0x8a) != '\0') {
      *(uint *)(param_1 + 0x194) = (uint)bVar1;
    }
    *(undefined8 *)(param_1 + (ulong)bVar1 * 8 + 0x50) = uVar2;
    *(byte *)(param_1 + 0x198) = bVar1 + 1;
  }
  return uVar2;
}




char * FUN_00d52c68(long param_1)

{
  char *pcVar1;
  ulong uVar2;
  char *pcVar3;
  
  pcVar3 = *(char **)(*(long *)(param_1 + 0x28) + 0x10);
  uVar2 = FUN_00e6a488(pcVar3);
  pcVar1 = "Ability__Withdraw";
  if ((uVar2 & 1) == 0) {
    pcVar1 = pcVar3;
  }
  return pcVar1;
}




void FUN_00d52ca0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = FUN_00d6eb50();
  lVar2 = FUN_00d6eb5c(uVar1,param_2);
  if (lVar2 != 0) {
    FUN_00d52be4(param_1,lVar2,param_3);
    return;
  }
  return;
}




char * FUN_00d52cf8(long param_1)

{
  ulong uVar1;
  long lVar2;
  char *pcVar3;
  
  pcVar3 = *(char **)(*(long *)(param_1 + 0x28) + 0x18);
  uVar1 = FUN_00e6a488(pcVar3);
  if ((uVar1 & 1) != 0) {
    lVar2 = *(long *)(param_1 + 0x10);
    if (*(int *)(*(long *)(lVar2 + 8) + 0xa4) != DAT_02c09220) {
      lVar2 = 0;
    }
    pcVar3 = "Ability__Default__Die";
    if ((*(byte *)(lVar2 + 0x2f4) & 1) != 0) {
      pcVar3 = "Ability__Hero__Die";
    }
  }
  return pcVar3;
}




char * FUN_00d52d64(long param_1)

{
  ulong uVar1;
  long lVar2;
  char *pcVar3;
  
  pcVar3 = *(char **)(*(long *)(param_1 + 0x28) + 0x20);
  uVar1 = FUN_00e6a488(pcVar3);
  if ((uVar1 & 1) != 0) {
    lVar2 = *(long *)(param_1 + 0x10);
    if (*(int *)(*(long *)(lVar2 + 8) + 0xa4) != DAT_02c09220) {
      lVar2 = 0;
    }
    if ((*(uint *)(lVar2 + 0x2f4) & 0x4000001) != 0) {
      pcVar3 = "Ability__Emote_Dance";
    }
  }
  return pcVar3;
}




char * FUN_00d52dd0(long param_1)

{
  ulong uVar1;
  long lVar2;
  char *pcVar3;
  
  pcVar3 = *(char **)(*(long *)(param_1 + 0x28) + 0x28);
  uVar1 = FUN_00e6a488(pcVar3);
  if ((uVar1 & 1) != 0) {
    lVar2 = *(long *)(param_1 + 0x10);
    if (*(int *)(*(long *)(lVar2 + 8) + 0xa4) != DAT_02c09220) {
      lVar2 = 0;
    }
    if ((*(uint *)(lVar2 + 0x2f4) & 0x4000001) != 0) {
      pcVar3 = "Ability__Emote_Taunt";
    }
  }
  return pcVar3;
}




void FUN_00d52e3c(long param_1,byte *param_2,byte *param_3)

{
  uint uVar1;
  uint uVar2;
  byte *pbVar3;
  uint uVar4;
  ulong uVar5;
  
  uVar4 = 0x811c9dc5;
  pbVar3 = param_2;
  if (param_3 != (byte *)0x0) {
    pbVar3 = param_3;
  }
  if (pbVar3 == (byte *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar1 = (uint)*pbVar3;
    if (*pbVar3 != 0) {
      do {
        pbVar3 = pbVar3 + 1;
        uVar4 = (uVar4 ^ uVar1) * 0x1000193;
        uVar1 = (uint)*pbVar3;
      } while (*pbVar3 != 0);
    }
  }
  if (*(char *)(param_1 + 0x198) != '\0') {
    uVar5 = 0;
    do {
      pbVar3 = (byte *)FUN_00d50460(*(undefined8 *)(param_1 + uVar5 * 8 + 0x50));
      if (pbVar3 == (byte *)0x0) {
        uVar1 = 0;
      }
      else {
        uVar1 = 0x811c9dc5;
        if (*pbVar3 != 0) {
          uVar1 = 0x811c9dc5;
          uVar2 = (uint)*pbVar3;
          do {
            pbVar3 = pbVar3 + 1;
            uVar1 = (uVar1 ^ uVar2) * 0x1000193;
            uVar2 = (uint)*pbVar3;
          } while (*pbVar3 != 0);
        }
      }
      if (uVar4 == uVar1) {
        return;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < *(byte *)(param_1 + 0x198));
  }
  FUN_00d52ca0(param_1,param_2,param_3);
  return;
}




void FUN_00d52f40(long param_1,uint param_2)

{
  byte bVar1;
  
  if (param_2 != 0xffffffff) {
    bVar1 = *(byte *)(param_1 + 0x199);
    *(undefined8 *)(param_1 + (ulong)bVar1 * 8 + 0xf0) =
         *(undefined8 *)(param_1 + (ulong)param_2 * 8 + 0x50);
    *(byte *)(param_1 + 0x199) = bVar1 + 1;
  }
  return;
}




undefined8 FUN_00d52f74(long param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  
  uVar3 = 0;
  while (((lVar2 = *(long *)(param_1 + 0x50 + uVar3 * 8), lVar2 == 0 ||
          (uVar1 = FUN_00d508f8(lVar2), (uVar1 & 1) == 0)) ||
         ((uVar1 = FUN_00d509f0(lVar2), (uVar1 & 1) == 0 &&
          (uVar1 = FUN_00d5075c(lVar2), (uVar1 & 1) == 0))))) {
    uVar3 = uVar3 + 1;
    if (0x13 < uVar3) {
      return 0;
    }
  }
  return 1;
}




bool FUN_00d52fe0(long param_1,uint param_2)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  
  uVar4 = 0;
  while ((uVar1 = *(uint *)(param_1 + 0x108 + uVar4 * 4), (uVar1 >> 0x1e & 1) == 0 ||
         ((uVar1 & 0x7fff) != param_2))) {
    uVar4 = uVar4 + 1;
    if (0x13 < uVar4) {
LAB_00d53010:
      lVar5 = *(long *)(param_1 + (ulong)param_2 * 8 + 0x50);
      if (lVar5 == 0) {
        bVar2 = false;
      }
      else {
        uVar4 = FUN_00d516d0(lVar5);
        bVar2 = false;
        if ((uVar4 & 1) == 0) {
          iVar3 = FUN_00d507f8(lVar5);
          bVar2 = false;
          if (iVar3 == 1) {
            uVar4 = FUN_00d50890(lVar5);
            if ((uVar4 & 1) == 0) {
              uVar4 = FUN_00d50e00(lVar5);
              bVar2 = false;
              if ((uVar4 & 1) != 0) {
                uVar4 = FUN_00d50e30(lVar5);
                bVar2 = false;
                if ((uVar4 & 1) != 0) {
                  iVar3 = FUN_00d513e8(lVar5);
                  bVar2 = iVar3 == 0;
                }
              }
            }
            else {
              bVar2 = true;
            }
          }
        }
      }
      return bVar2;
    }
  }
  param_2 = uVar1 >> 0xf & 0x7fff;
  goto LAB_00d53010;
}

