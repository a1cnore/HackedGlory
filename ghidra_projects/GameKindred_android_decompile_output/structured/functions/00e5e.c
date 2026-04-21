// functions/00e5e — 25 functions
#include "libGameKindred.h"




undefined8 * FUN_00e5e00c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_02baef70;
  FUN_019892f4(param_1 + 5);
  *param_1 = &PTR_FUN_028203d0;
  param_1[5] = &PTR_FUN_02820400;
  *(undefined2 *)((long)param_1 + 0x34) = 0;
  return param_1;
}




void FUN_00e5e05c(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00e5e064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)();
  return;
}




void FUN_00e5e068(long param_1)

{
  FUN_0198931c(param_1 + 0x28);
  FUN_01985bd0(param_1);
  return;
}




void FUN_00e5e090(void *param_1)

{
  FUN_0198931c((long)param_1 + 0x28);
  FUN_01985bd0(param_1);
  operator_delete(param_1);
  return;
}




void FUN_00e5e0c0(long param_1)

{
  FUN_0198931c();
  FUN_01985bd0(param_1 + -0x28);
  return;
}




void FUN_00e5e0e4(long param_1)

{
  FUN_0198931c();
  FUN_01985bd0((void *)(param_1 + -0x28));
  operator_delete((void *)(param_1 + -0x28));
  return;
}




long FUN_00e5e110(long param_1)

{
  return param_1 + -0x28;
}




long FUN_00e5e118(long param_1)

{
  return param_1 + -0x28;
}




long FUN_00e5e120(long param_1,undefined8 param_2,long param_3)

{
  undefined4 uVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  ulong local_58;
  float local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  FUN_00d557c4(param_3,&local_58,&DAT_03218f68);
  fVar4 = (float)local_58;
  local_58 = (ulong)(uint)(float)local_58;
  fVar4 = fVar4 * fVar4 + 0.0 + local_50 * local_50;
  if (1e-08 <= fVar4) {
    fVar3 = SQRT(fVar4);
    if (NAN(fVar3)) {
      fVar3 = sqrtf(fVar4);
    }
    local_58 = CONCAT44((float)(local_58 >> 0x20) / fVar3,(float)local_58 / fVar3);
    local_50 = local_50 / fVar3;
  }
  else {
    local_50 = DAT_03218f70;
    local_58 = DAT_03218f68;
  }
  FUN_00d80ca0(param_2,&local_58);
  uVar1 = *(undefined4 *)(param_3 + 0x30);
  *(long *)(param_1 + 8) = param_3 + 0x28;
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




void FUN_00e5e22c(long param_1,byte *param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 == (byte *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar2 = (uint)*param_2;
    uVar1 = 0x811c9dc5;
    if (*param_2 != 0) {
      do {
        param_2 = param_2 + 1;
        uVar1 = (uVar1 ^ uVar2) * 0x1000193;
        uVar2 = (uint)*param_2;
      } while (*param_2 != 0);
    }
  }
  *(uint *)(param_1 + 0x18) = uVar1;
  return;
}




void FUN_00e5e270(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  undefined8 local_98;
  float local_90;
  undefined1 local_88 [8];
  float local_80;
  ulong local_78;
  float local_70;
  undefined8 local_48;
  float local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  plVar3 = *(long **)(param_1 + 8);
  if (plVar3 != (long *)0x0) {
    if (*(int *)(param_1 + 0x10) == (int)plVar3[1]) {
      lVar4 = (**(code **)(*plVar3 + 0x10))();
      if (lVar4 != 0) {
        FUN_00d80bb8(param_2,local_88);
        iVar1 = *(int *)(param_1 + 0x18);
        if ((iVar1 == -0x7ee3623b) || (iVar1 == 0)) {
          plVar3 = *(long **)(param_1 + 8);
          uVar5 = 0;
          if (plVar3 != (long *)0x0) {
            if (*(int *)(param_1 + 0x10) == (int)plVar3[1]) {
              uVar5 = (**(code **)(*plVar3 + 0x10))();
            }
            else {
              *(undefined8 *)(param_1 + 8) = 0;
              uVar5 = 0;
              *(undefined4 *)(param_1 + 0x10) = DAT_03214ce8;
            }
          }
          FUN_00d55794(uVar5,&local_98,0);
        }
        else {
          plVar3 = *(long **)(param_1 + 8);
          uVar5 = 0;
          if (plVar3 != (long *)0x0) {
            if (*(int *)(param_1 + 0x10) == (int)plVar3[1]) {
              uVar5 = (**(code **)(*plVar3 + 0x10))();
            }
            else {
              *(undefined8 *)(param_1 + 8) = 0;
              uVar5 = 0;
              *(undefined4 *)(param_1 + 0x10) = DAT_03214ce8;
            }
          }
          FUN_00d58298(uVar5,(int *)(param_1 + 0x18),&local_78);
          local_98 = local_48;
          local_90 = local_40;
        }
        fVar6 = local_88._0_4_ - (float)local_98;
        fVar7 = local_88._4_4_ - (float)((ulong)local_98 >> 0x20);
        if (fVar6 * fVar6 + fVar7 * fVar7 + (local_80 - local_90) * (local_80 - local_90) <=
            0.010000001) {
          plVar3 = *(long **)(param_1 + 8);
          uVar5 = 0;
          if (plVar3 != (long *)0x0) {
            if (*(int *)(param_1 + 0x10) == (int)plVar3[1]) {
              uVar5 = (**(code **)(*plVar3 + 0x10))();
            }
            else {
              *(undefined8 *)(param_1 + 8) = 0;
              uVar5 = 0;
              *(undefined4 *)(param_1 + 0x10) = DAT_03214ce8;
            }
          }
          FUN_00d557c4(uVar5,&local_78,&DAT_03218f68);
          local_78 = (ulong)(uint)local_78;
        }
        else {
          fVar6 = (float)local_98 - local_88._0_4_;
          local_70 = local_90 - local_80;
          fVar7 = fVar6 * fVar6 + 0.0 + local_70 * local_70;
          local_78 = (ulong)(uint)fVar6;
          if (1e-08 <= fVar7) {
            fVar6 = SQRT(fVar7);
            if (NAN(fVar6)) {
              fVar6 = sqrtf(fVar7);
            }
            local_78 = CONCAT44((float)(local_78 >> 0x20) / fVar6,(float)local_78 / fVar6);
            local_70 = local_70 / fVar6;
          }
          else {
            local_70 = DAT_03218f70;
            local_78 = DAT_03218f68;
          }
        }
        FUN_00d80ca0(param_2,&local_78);
        FUN_00d80be4(param_2,&local_98);
        uVar5 = 0;
        goto LAB_00e5e33c;
      }
    }
    else {
      *(undefined8 *)(param_1 + 8) = 0;
      *(undefined4 *)(param_1 + 0x10) = DAT_03214ce8;
    }
  }
  uVar5 = 1;
LAB_00e5e33c:
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar5);
  }
  return;
}




void FUN_00e5e524(void)

{
  return;
}




void FUN_00e5e52c(undefined8 *param_1)

{
  param_1[6] = 0;
  *param_1 = &PTR_FUN_02820458;
  *(undefined4 *)((long)param_1 + 0x2c) = 0;
  *(undefined4 *)((long)param_1 + 0x24) = 0x7f7fffff;
  *(undefined4 *)(param_1 + 5) = 0x7f7fffff;
  *(undefined8 *)((long)param_1 + 0x1c) = 0x7f7fffff7f7fffff;
  *(undefined8 *)((long)param_1 + 0x14) = 0x7f7fffff7f7fffff;
  return;
}




long FUN_00e5e560(undefined4 param_1,long param_2,undefined8 param_3)

{
  FUN_00d80bb8(param_3,param_2 + 8);
  *(undefined4 *)(param_2 + 0x30) = param_1;
  return param_2;
}




long FUN_00e5e5a0(float param_1,long param_2,undefined8 param_3)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  FUN_00d80bb8(param_3,param_2 + 8);
  pfVar1 = (float *)FUN_00d81388(param_3);
  fVar2 = *(float *)(param_2 + 8) - *pfVar1;
  fVar3 = *(float *)(param_2 + 0xc) - pfVar1[1];
  fVar4 = *(float *)(param_2 + 0x10) - pfVar1[2];
  fVar3 = fVar2 * fVar2 + fVar3 * fVar3 + fVar4 * fVar4;
  fVar2 = SQRT(fVar3);
  if (NAN(fVar2)) {
    fVar2 = sqrtf(fVar3);
  }
  *(float *)(param_2 + 0x30) = fVar2 / param_1;
  return param_2;
}




long FUN_00e5e630(long param_1,undefined8 param_2,byte *param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  int iVar4;
  uint uVar5;
  float fVar6;
  uint local_90 [2];
  undefined1 auStack_88 [56];
  float local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d80fec(param_2);
  if (param_3 == (byte *)0x0) {
    local_90[0] = 0;
  }
  else {
    uVar5 = (uint)*param_3;
    local_90[0] = 0x811c9dc5;
    if (*param_3 != 0) {
      do {
        param_3 = param_3 + 1;
        local_90[0] = (local_90[0] ^ uVar5) * 0x1000193;
        uVar5 = (uint)*param_3;
      } while (*param_3 != 0);
    }
  }
  FUN_00d58298(uVar2,local_90,auStack_88);
  iVar4 = *(int *)(param_1 + 0x2c);
  if (iVar4 == 1) {
    puVar3 = (undefined8 *)FUN_00d81388(param_2);
    fVar6 = *(float *)(puVar3 + 1);
    iVar4 = *(int *)(param_1 + 0x2c);
    *(ulong *)(param_1 + 0x20) =
         CONCAT44(SUB84(auStack_88._48_8_,4) - (float)((ulong)*puVar3 >> 0x20),
                  (float)auStack_88._48_8_ - (float)*puVar3);
    *(float *)(param_1 + 0x28) = local_50 - fVar6;
  }
  else if (iVar4 == 0) {
    *(ulong *)(param_1 + 0x14) =
         CONCAT44(SUB84(auStack_88._48_8_,4) - (float)((ulong)*(undefined8 *)(param_1 + 8) >> 0x20),
                  (float)auStack_88._48_8_ - (float)*(undefined8 *)(param_1 + 8));
    *(float *)(param_1 + 0x1c) = local_50 - *(float *)(param_1 + 0x10);
  }
  *(int *)(param_1 + 0x2c) = iVar4 + 1;
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




long FUN_00e5e74c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                 undefined8 param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  if (*(int *)(param_4 + 0x2c) == 1) {
    lVar1 = FUN_00d81388(param_5);
    lVar3 = param_4 + 8;
    lVar4 = param_4 + 0x20;
    lVar2 = lVar1;
  }
  else {
    if (*(int *)(param_4 + 0x2c) != 0) goto LAB_00e5e7c8;
    lVar1 = FUN_00d81388(param_5);
    lVar4 = param_4 + 0x14;
    lVar2 = param_4 + 8;
    lVar3 = lVar1;
  }
  FUN_00e5e7ec(param_1,param_2,param_3,0xbf800000,lVar1,lVar2,lVar3,lVar4);
LAB_00e5e7c8:
  *(int *)(param_4 + 0x2c) = *(int *)(param_4 + 0x2c) + 1;
  return param_4;
}




void FUN_00e5e7ec(float param_1,float param_2,float param_3,float param_4,undefined8 param_5,
                 float *param_6,float *param_7,float *param_8)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float __x;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar5 = *param_7 - *param_6;
  fVar6 = param_7[2] - param_6[2];
  fVar4 = fVar5 * fVar5 + 0.0 + fVar6 * fVar6;
  fVar3 = SQRT(fVar4);
  if (NAN(fVar3)) {
    fVar3 = sqrtf(fVar4);
  }
  fVar3 = fVar3 * param_1;
  fVar1 = tanf(param_2);
  __x = (float)DAT_03218f68;
  fVar2 = DAT_03218f70;
  if (1e-08 <= fVar4) {
    fVar2 = SQRT(fVar4);
    if (NAN(fVar2)) {
      fVar2 = sqrtf(fVar4);
    }
    __x = fVar5 / fVar2;
    fVar2 = fVar6 / fVar2;
  }
  fVar4 = atan2f(fVar2,__x);
  fVar5 = cosf(fVar4);
  fVar6 = sinf(fVar4);
  *param_8 = fVar3 * fVar5 - fVar1 * fVar3 * fVar6;
  fVar5 = sinf(fVar4);
  fVar4 = cosf(fVar4);
  param_8[2] = fVar3 * fVar5 + fVar1 * fVar3 * fVar4;
  if (param_4 <= 0.0) {
    param_4 = tanf(param_3);
    param_4 = fVar3 * param_4;
  }
  param_8[1] = param_4;
  return;
}




long FUN_00e5e92c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                 undefined8 param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  if (*(int *)(param_4 + 0x2c) == 1) {
    lVar1 = FUN_00d81388(param_5);
    lVar3 = param_4 + 8;
    lVar4 = param_4 + 0x20;
    lVar2 = lVar1;
  }
  else {
    if (*(int *)(param_4 + 0x2c) != 0) goto LAB_00e5e9a8;
    lVar1 = FUN_00d81388(param_5);
    lVar4 = param_4 + 0x14;
    lVar2 = param_4 + 8;
    lVar3 = lVar1;
  }
  FUN_00e5e7ec(param_1,param_2,0xbf800000,param_3,lVar1,lVar2,lVar3,lVar4);
LAB_00e5e9a8:
  *(int *)(param_4 + 0x2c) = *(int *)(param_4 + 0x2c) + 1;
  return param_4;
}




long FUN_00e5e9cc(float param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 *puVar2;
  float fVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined8 local_98;
  float local_90;
  undefined1 local_88 [8];
  float local_80;
  undefined8 local_78;
  float local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  fVar12 = *(float *)(param_2 + 0x10);
  fVar10 = (float)*(undefined8 *)(param_2 + 8);
  fVar14 = fVar10 + (float)*(undefined8 *)(param_2 + 0x14);
  fVar11 = (float)((ulong)*(undefined8 *)(param_2 + 8) >> 0x20);
  fVar15 = fVar11 + (float)((ulong)*(undefined8 *)(param_2 + 0x14) >> 0x20);
  fVar13 = fVar12 + *(float *)(param_2 + 0x1c);
  fVar16 = fVar13;
  fVar17 = fVar14;
  fVar18 = fVar15;
  if (*(int *)(param_2 + 0x2c) == 2) {
    puVar2 = (undefined8 *)FUN_00d81388(param_3);
    fVar17 = (float)*puVar2 + (float)*(undefined8 *)(param_2 + 0x20);
    fVar18 = (float)((ulong)*puVar2 >> 0x20) +
             (float)((ulong)*(undefined8 *)(param_2 + 0x20) >> 0x20);
    fVar16 = *(float *)(puVar2 + 1) + *(float *)(param_2 + 0x28);
  }
  puVar2 = (undefined8 *)FUN_00d81388(param_3);
  uVar4 = *puVar2;
  fVar3 = *(float *)(puVar2 + 1);
  param_1 = *(float *)(param_2 + 0x34) + param_1;
  fVar5 = 1.0;
  *(float *)(param_2 + 0x34) = param_1;
  if ((*(float *)(param_2 + 0x30) != 0.0) &&
     (fVar5 = (float)NEON_fminnm(param_1 / *(float *)(param_2 + 0x30),0x3f800000), fVar5 <= 0.0)) {
    fVar5 = 0.0;
  }
  fVar7 = 1.0 - fVar5;
  fVar8 = fVar7 * fVar7 * fVar7;
  fVar9 = fVar5 * fVar5 * fVar5;
  fVar6 = fVar5 * fVar7 * fVar7 * 3.0;
  fVar5 = fVar5 * fVar5 * fVar7 * 3.0;
  fVar17 = (float)uVar4 * fVar9 + fVar17 * fVar5 + fVar10 * fVar8 + fVar14 * fVar6;
  fVar18 = (float)((ulong)uVar4 >> 0x20) * fVar9 + fVar18 * fVar5 + fVar11 * fVar8 + fVar15 * fVar6;
  local_78 = CONCAT44(fVar18,fVar17);
  fVar16 = fVar3 * fVar9 + fVar16 * fVar5 + fVar12 * fVar8 + fVar13 * fVar6;
  local_70 = fVar16;
  FUN_00d80bb8(param_3,local_88);
  local_98._0_4_ = fVar17 - local_88._0_4_;
  local_98._4_4_ = fVar18 - local_88._4_4_;
  local_90 = fVar16 - local_80;
  fVar16 = (float)local_98 * (float)local_98 + local_98._4_4_ * local_98._4_4_ + local_90 * local_90
  ;
  if (1e-08 <= fVar16) {
    fVar17 = SQRT(fVar16);
    if (NAN(fVar17)) {
      fVar17 = sqrtf(fVar16);
    }
    local_98 = CONCAT44(local_98._4_4_ / fVar17,(float)local_98 / fVar17);
    local_90 = local_90 / fVar17;
  }
  else {
    local_90 = DAT_03218f70;
    local_98 = DAT_03218f68;
  }
  FUN_00d80be4(param_3,&local_78);
  FUN_00d80ca0(param_3,&local_98);
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return (ulong)(*(float *)(param_2 + 0x30) <= *(float *)(param_2 + 0x34)) << 1;
}




void FUN_00e5ebf4(void)

{
  return;
}




void FUN_00e5ebf8(undefined8 *param_1)

{
  *(undefined1 *)(param_1 + 7) = 0;
  *param_1 = &PTR_FUN_02820480;
  *(undefined4 *)(param_1 + 5) = 0x7f7fffff;
  *(undefined4 *)((long)param_1 + 0x2c) = 0xbf800000;
  param_1[2] = 0x7f7fffff7f7fffff;
  param_1[1] = 0x7f7fffff7f7fffff;
  param_1[4] = 0x7f7fffff7f7fffff;
  param_1[3] = 0x7f7fffff7f7fffff;
  param_1[6] = 0;
  return;
}




long FUN_00e5ec34(undefined4 param_1,float param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined1 local_88 [8];
  float local_80;
  undefined1 auStack_78 [56];
  float local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00d80bb8(param_4,param_3 + 8);
  FUN_00d80c00(param_4,local_88);
  *(ulong *)(param_3 + 0x14) =
       CONCAT44(local_88._4_4_ * param_2 + (float)((ulong)*(undefined8 *)(param_3 + 8) >> 0x20),
                local_88._0_4_ * param_2 + (float)*(undefined8 *)(param_3 + 8));
  *(float *)(param_3 + 0x1c) = local_80 * param_2 + *(float *)(param_3 + 0x10);
  lVar3 = FUN_00d80fec(param_4);
  if (lVar3 != 0) {
    if (((DAT_0320e248 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_0320e248), iVar2 != 0)) {
      DAT_0320e240 = 0x3e3270a0;
      __cxa_guard_release(&DAT_0320e248);
    }
    FUN_00d58298(lVar3,&DAT_0320e240,auStack_78);
    *(ulong *)(param_3 + 0x20) =
         CONCAT44((float)((ulong)*(undefined8 *)(param_3 + 8) >> 0x20) - SUB84(auStack_78._48_8_,4),
                  (float)*(undefined8 *)(param_3 + 8) - (float)auStack_78._48_8_);
    *(float *)(param_3 + 0x28) = *(float *)(param_3 + 0x10) - local_40;
  }
  *(undefined4 *)(param_3 + 0x2c) = param_1;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return param_3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e5ed70(long param_1)

{
  *(undefined1 *)(param_1 + 0x38) = 1;
  return;
}




void FUN_00e5ed7c(float param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined8 local_b8;
  float local_b0;
  undefined1 local_a8 [8];
  float local_a0;
  undefined8 local_98;
  float local_90;
  float local_88;
  float fStack_84;
  float local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  float local_70;
  float local_68;
  float fStack_64;
  float local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  FUN_00d80bb8(param_3,&local_68);
  FUN_00d80c00(param_3,&local_78);
  local_98 = CONCAT44(uStack_74,local_78);
  local_80 = local_60;
  local_90 = local_70;
  fVar5 = *(float *)(param_2 + 0x2c);
  fVar4 = *(float *)(param_2 + 0x30) + param_1;
  if (fVar5 <= fVar4) {
    fVar4 = fVar5;
  }
  fVar5 = fVar5 * 0.5;
  *(float *)(param_2 + 0x30) = fVar4;
  if (((*(char *)(param_2 + 0x38) != '\0') && (fVar5 < fVar4)) && (fVar4 - fVar5 < param_1)) {
    FUN_00d817d0(param_3);
    fVar4 = *(float *)(param_2 + 0x30);
  }
  if (fVar4 <= fVar5) {
    uStack_74 = 0;
    FUN_00d81390(param_3,param_2 + 0x14);
    fVar8 = *(float *)(param_2 + 8);
    fVar6 = *(float *)(param_2 + 0x14);
    fVar4 = sinf((*(float *)(param_2 + 0x30) / fVar5) * 1.5707964);
    _local_88 = CONCAT44(fStack_64,fVar8 + (fVar6 - fVar8) * fVar4);
    fVar6 = *(float *)(param_2 + 0x10);
    fVar4 = *(float *)(param_2 + 0x1c);
    fVar5 = sinf((*(float *)(param_2 + 0x30) / fVar5) * 1.5707964);
    local_80 = fVar6 + fVar5 * (fVar4 - fVar6);
  }
  else {
    lVar2 = FUN_00e5f0fc(param_2,param_3);
    if (lVar2 != 0) {
      FUN_00d80b90(param_3,lVar2,1);
    }
    puVar3 = (undefined8 *)FUN_00d81388(param_3);
    uVar7 = *puVar3;
    fVar9 = *(float *)(puVar3 + 1);
    fVar8 = *(float *)(param_2 + 0x14);
    fVar6 = (float)uVar7;
    fVar10 = fVar6 - fVar8;
    fVar4 = cosf(((*(float *)(param_2 + 0x30) - fVar5) / fVar5) * 1.5707964);
    _local_88 = CONCAT44(fStack_64,fVar8 + (fVar10 - fVar10 * fVar4));
    fVar8 = *(float *)(param_2 + 0x1c);
    fVar10 = fVar9 - fVar8;
    fVar4 = cosf(((*(float *)(param_2 + 0x30) - fVar5) / fVar5) * 1.5707964);
    local_80 = fVar8 + (fVar10 - fVar4 * fVar10);
    fVar5 = *(float *)(param_2 + 0x20) * *(float *)(param_2 + 0x20) +
            *(float *)(param_2 + 0x28) * *(float *)(param_2 + 0x28);
    fVar4 = SQRT(fVar5);
    fVar8 = (local_88 - fVar6) * (local_88 - fVar6) + (local_80 - fVar9) * (local_80 - fVar9);
    if (NAN(fVar4)) {
      fVar4 = sqrtf(fVar5);
    }
    if ((fVar8 <= fVar5) || (fVar8 < 2.0)) {
      FUN_00d80c00(param_3,local_a8);
      local_b0 = (fVar9 - fVar4 * local_a0) + 0.0;
      local_b8 = CONCAT44(*(float *)(param_2 + 0x24) +
                          ((float)((ulong)uVar7 >> 0x20) - local_a8._4_4_ * fVar4),
                          (fVar6 - local_a8._0_4_ * fVar4) + 0.0);
      FUN_00d80be4(param_3,&local_b8);
      uVar7 = 2;
      goto LAB_00e5f0c0;
    }
  }
  local_98._0_4_ = local_88 - local_68;
  local_98._4_4_ = fStack_84 - fStack_64;
  local_90 = local_80 - local_60;
  fVar4 = (float)local_98 * (float)local_98 + local_98._4_4_ * local_98._4_4_ + local_90 * local_90;
  if (1e-08 <= fVar4) {
    fVar5 = SQRT(fVar4);
    if (NAN(fVar5)) {
      fVar5 = sqrtf(fVar4);
    }
    local_98 = CONCAT44(local_98._4_4_ / fVar5,(float)local_98 / fVar5);
    local_90 = local_90 / fVar5;
  }
  else {
    local_90 = DAT_03218f70;
    local_98 = DAT_03218f68;
  }
  FUN_00d80be4(param_3,&local_88);
  FUN_00d80ca0(param_3,&local_98);
  uVar7 = 0;
LAB_00e5f0c0:
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar7);
  }
  return;
}

