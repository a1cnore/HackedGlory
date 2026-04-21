// functions/00ef0 — 29 functions
#include "libGameKindred.h"




void FUN_00ef002c(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 8) = param_2;
  return;
}




void FUN_00ef0034(void)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x448);
  thunk_FUN_00ef02d8();
  DAT_03210ca8 = pvVar1;
  return;
}




void FUN_00ef0064(void)

{
  void *pvVar1;
  
  pvVar1 = DAT_03210ca8;
  if (DAT_03210ca8 != (void *)0x0) {
    thunk_FUN_00ef032c(DAT_03210ca8);
    operator_delete(pvVar1);
  }
  DAT_03210ca8 = (void *)0x0;
  return;
}




void FUN_00ef009c(void)

{
  return;
}




uint FUN_00ef00a0(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  uint uVar2;
  undefined1 auStack_2c [4];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00ef05b4(DAT_03210ca8,param_1,param_2,auStack_2c,param_3,param_4);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ef0108(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  FUN_00ef05b4(DAT_03210ca8,param_1,param_2,param_3,param_4,param_5);
  return;
}




uint FUN_00ef012c(undefined4 param_1,undefined4 *param_2,undefined4 *param_3,undefined8 param_4)

{
  long lVar1;
  uint uVar2;
  undefined4 local_48 [2];
  undefined4 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined1 auStack_2c [4];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_38 = *param_2;
  local_30 = param_2[1];
  uStack_34 = 0;
  uVar2 = FUN_00ef05b4(DAT_03210ca8,param_1,&local_38,auStack_2c,local_48,param_4);
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = local_48[0];
    param_3[1] = local_40;
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ef01b8(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  FUN_00ef06c0(DAT_03210ca8,param_1,param_2,param_3,param_4,param_5,param_6);
  return;
}




void FUN_00ef01e0(undefined4 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00ef0838(DAT_03210ca8,param_1,param_2,param_3);
  return;
}




uint FUN_00ef01fc(undefined4 param_1,undefined4 *param_2,undefined4 *param_3,undefined8 param_4,
                 undefined4 *param_5,undefined8 param_6)

{
  long lVar1;
  uint uVar2;
  undefined4 local_58 [2];
  undefined4 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_38 = *param_2;
  local_30 = param_2[1];
  uStack_34 = 0;
  local_48 = *param_3;
  local_40 = param_3[1];
  uStack_44 = 0;
  uVar2 = FUN_00ef06c0(DAT_03210ca8,param_1,&local_38,&local_48,param_4,local_58,param_6);
  if (param_5 != (undefined4 *)0x0) {
    *param_5 = local_58[0];
    param_5[1] = local_50;
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ef0298(undefined4 param_1,undefined8 param_2,undefined4 param_3)

{
  FUN_00ef0380(DAT_03210ca8,param_1,param_2,param_3);
  return;
}




void FUN_00ef02b4(undefined4 param_1)

{
  FUN_00ef04cc(DAT_03210ca8,param_1);
  return;
}




void thunk_FUN_00ef02d8(undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = 0x40;
  do {
    FUN_00ef3ff4((long)param_1 + lVar1);
    lVar1 = lVar1 + 0x60;
  } while (lVar1 != 0x340);
  FUN_00ef3f58(param_1 + 0x68);
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 0x88) = 0xfffe;
  *param_1 = 0;
  param_1[1] = 0;
  return;
}




void thunk_FUN_00ef032c(long param_1)

{
  long lVar1;
  
  lVar1 = 0;
  do {
    if (*(long *)(param_1 + lVar1) != 0) {
      FUN_00ef12b8();
      *(undefined8 *)(param_1 + lVar1) = 0;
    }
    lVar1 = lVar1 + 8;
  } while (lVar1 != 0x40);
  lVar1 = 0x2e0;
  do {
    FUN_00ef4010(param_1 + lVar1);
    lVar1 = lVar1 + -0x60;
  } while (lVar1 != -0x20);
  return;
}




void thunk_FUN_00ef0978(long param_1)

{
  FUN_00ef3ff4();
  FUN_00ef3f58(param_1 + 0x60);
  *(undefined4 *)(param_1 + 0x764) = 0;
  *(undefined4 *)(param_1 + 0x778) = 0;
  *(undefined4 *)(param_1 + 0x160) = 0xfffe;
  return;
}




void FUN_00ef02d8(undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = 0x40;
  do {
    FUN_00ef3ff4((long)param_1 + lVar1);
    lVar1 = lVar1 + 0x60;
  } while (lVar1 != 0x340);
  FUN_00ef3f58(param_1 + 0x68);
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 0x88) = 0xfffe;
  *param_1 = 0;
  param_1[1] = 0;
  return;
}




void FUN_00ef032c(long param_1)

{
  long lVar1;
  
  lVar1 = 0;
  do {
    if (*(long *)(param_1 + lVar1) != 0) {
      FUN_00ef12b8();
      *(undefined8 *)(param_1 + lVar1) = 0;
    }
    lVar1 = lVar1 + 8;
  } while (lVar1 != 0x40);
  lVar1 = 0x2e0;
  do {
    FUN_00ef4010(param_1 + lVar1);
    lVar1 = lVar1 + -0x60;
  } while (lVar1 != -0x20);
  return;
}




ulong FUN_00ef0380(long param_1,uint param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  ulong __n;
  long lVar2;
  undefined8 uVar3;
  void *__s;
  ulong uVar4;
  uint uVar5;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  uVar4 = (ulong)param_2;
  if (param_2 < 8) {
    if (*(long *)(param_1 + uVar4 * 8) != 0) {
      FUN_00ef12b8();
      *(undefined8 *)(param_1 + uVar4 * 8) = 0;
    }
    uStack_78 = param_3[3];
    local_80 = param_3[2];
    uStack_88 = param_3[1];
    local_90 = *param_3;
    uVar3 = FUN_00ef127c();
    FUN_00ef1390(uVar3,(ulong)&local_90 | 4);
    if ((uint)local_90 != 0) {
      uVar5 = 0;
      param_3 = param_3 + 4;
      do {
        uVar1 = *(undefined4 *)param_3;
        __n = (ulong)*(uint *)((long)param_3 + 4);
        __s = (void *)thunk_FUN_00ef1250(__n,0);
        memset(__s,0,__n);
        memmove(__s,param_3 + 1,__n);
        param_3 = (undefined8 *)((long)(param_3 + 1) + __n);
        FUN_00ef16c4(uVar3,__s,__n,1,uVar1,0);
        uVar5 = uVar5 + 1;
      } while (uVar5 < (uint)local_90);
    }
    *(undefined8 *)(param_1 + uVar4 * 8) = uVar3;
    FUN_00ef4064(param_1 + uVar4 * 0x60 + 0x40,uVar3,0x800);
  }
  else {
    uVar4 = (ulong)DAT_02bf257c;
  }
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ef04cc(long param_1,uint param_2)

{
  FUN_00ef12b8(*(undefined8 *)(param_1 + (ulong)param_2 * 8));
  *(undefined8 *)(param_1 + (ulong)param_2 * 8) = 0;
  return;
}




undefined4 FUN_00ef04f8(undefined8 param_1,undefined4 param_2,char *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  FILE *__stream;
  undefined8 uVar3;
  
  __stream = fopen(param_3,"rb");
  uVar2 = DAT_02bf257c;
  if (__stream != (FILE *)0x0) {
    uVar1 = FUN_00e6af84(param_3);
    uVar3 = FUN_00e6b098(0,uVar1,__stream,0);
    uVar2 = FUN_00ef0380(param_1,param_2,uVar3);
    FUN_00e6b0f4(uVar3,uVar1);
    fclose(__stream);
  }
  return uVar2;
}




void FUN_00ef05a4(long param_1,ulong param_2,undefined8 param_3)

{
  FUN_00ef4064(param_3,*(undefined8 *)(param_1 + (param_2 & 0xffffffff) * 8),0x800);
  return;
}




void FUN_00ef05b4(long param_1,ulong param_2,undefined8 param_3,undefined4 *param_4,
                 undefined8 *param_5,undefined8 *param_6)

{
  long lVar1;
  long lVar2;
  int iVar3;
  undefined8 uVar4;
  undefined4 local_60;
  int local_5c;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined4 local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  local_48 = NEON_fmov(0x3e800000,4);
  local_40 = 0x3e800000;
  if (param_6 != (undefined8 *)0x0) {
    local_40 = *(undefined4 *)(param_6 + 1);
    local_48 = *param_6;
  }
  lVar1 = param_1 + (param_2 & 0xffffffff) * 0x60 + 0x40;
  local_5c = 0;
  iVar3 = FUN_00ef553c(lVar1,param_3,&local_48,param_1 + 0x340,&local_5c,&local_58);
  if (iVar3 == 0x40000000) {
    uVar4 = 0;
    if (local_5c != 0) {
      local_60 = 0;
      iVar3 = FUN_00ef44a4(lVar1,local_5c,&local_58,&local_60);
      uVar4 = 0;
      if (iVar3 == 0x40000000) {
        if (param_4 != (undefined4 *)0x0) {
          *param_4 = local_60;
        }
        if (param_5 != (undefined8 *)0x0) {
          *(undefined4 *)(param_5 + 1) = local_50;
          *param_5 = local_58;
        }
        uVar4 = 1;
      }
    }
  }
  else {
    uVar4 = 0;
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}




void FUN_00ef06c0(long param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                 undefined4 *param_5,undefined8 *param_6,undefined8 *param_7)

{
  long lVar1;
  long lVar2;
  bool bVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined4 local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  local_68 = NEON_fmov(0x3e800000,4);
  local_60 = 0x3e800000;
  if (param_7 != (undefined8 *)0x0) {
    local_60 = *(undefined4 *)(param_7 + 1);
    local_68 = *param_7;
  }
  lVar1 = param_1 + (param_2 & 0xffffffff) * 0x60 + 0x40;
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  iVar4 = FUN_00ef553c(lVar1,param_3,&local_68,param_1 + 0x340,(long)&local_80 + 4,0);
  if ((iVar4 == 0x40000000) && (local_80._4_4_ != 0)) {
    FUN_00ef801c(lVar1,local_80._4_4_,param_3,param_4,param_1 + 0x340,&local_80,&local_78,0,0,0);
    if (param_5 != (undefined4 *)0x0) {
      uVar5 = NEON_fminnm((float)local_80,0x3f800000);
      *param_5 = uVar5;
    }
    if (param_6 != (undefined8 *)0x0) {
      *(undefined4 *)(param_6 + 1) = local_70;
      *param_6 = local_78;
    }
    bVar3 = 1.0 < (float)local_80;
  }
  else if (param_5 == (undefined4 *)0x0) {
    bVar3 = false;
  }
  else {
    bVar3 = false;
    *param_5 = 0;
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar3);
}




float FUN_00ef080c(void)

{
  int iVar1;
  
  iVar1 = rand();
  return (float)iVar1 * 4.656613e-10 + 0.0;
}




void FUN_00ef0838(undefined8 param_1,long param_2,ulong param_3,undefined8 param_4,
                 undefined8 *param_5)

{
  long lVar1;
  long lVar2;
  int iVar3;
  undefined8 uVar4;
  undefined4 local_74;
  undefined8 local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined4 local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  lVar1 = param_2 + (param_3 & 0xffffffff) * 0x60 + 0x40;
  local_58 = 0x3f0000003f000000;
  local_50 = 0x3f000000;
  local_70 = 0;
  iVar3 = FUN_00ef553c(lVar1,param_4,&local_58,param_2 + 0x340,(long)&local_70 + 4,0);
  uVar4 = 0;
  if ((iVar3 == 0x40000000) && (local_70._4_4_ != 0)) {
    iVar3 = FUN_00ef46e4(param_1,lVar1,local_70._4_4_,param_4,param_2 + 0x340,FUN_00ef080c,&local_70
                         ,&local_68);
    if (iVar3 == 0x40000000) {
      uVar4 = 0;
      if (local_70._4_4_ != 0) {
        local_74 = 0;
        iVar3 = FUN_00ef44a4(lVar1,local_70 & 0xffffffff,&local_68,&local_74);
        uVar4 = 0;
        if (iVar3 == 0x40000000) {
          if (param_5 != (undefined8 *)0x0) {
            *(undefined4 *)(param_5 + 1) = local_60;
            *param_5 = local_68;
          }
          uVar4 = 1;
        }
      }
    }
    else {
      uVar4 = 0;
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}




void FUN_00ef0978(long param_1)

{
  FUN_00ef3ff4();
  FUN_00ef3f58(param_1 + 0x60);
  *(undefined4 *)(param_1 + 0x764) = 0;
  *(undefined4 *)(param_1 + 0x778) = 0;
  *(undefined4 *)(param_1 + 0x160) = 0xfffe;
  return;
}




void FUN_00ef09b4(long param_1,undefined4 param_2)

{
  FUN_00ef05a4(DAT_03210ca8,param_2,param_1);
  *(undefined4 *)(param_1 + 0x764) = 0;
  *(undefined4 *)(param_1 + 0x774) = 0;
  *(undefined4 *)(param_1 + 0x778) = param_2;
  return;
}




/* WARNING: Type propagation algorithm not settling */

void FUN_00ef09f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  float fVar9;
  int iVar10;
  bool bVar11;
  bool bVar12;
  int iVar13;
  ulong uVar14;
  long lVar15;
  float *pfVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float __x;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined8 in_stack_fffffffffffffa90;
  undefined4 uVar28;
  float local_550;
  float fStack_54c;
  float local_548;
  undefined8 local_540;
  float local_538;
  undefined8 local_530;
  undefined4 local_528;
  undefined8 local_520;
  float local_518;
  int local_510;
  undefined4 local_50c;
  undefined4 local_508;
  float local_504;
  byte local_500 [4];
  float local_4fc [15];
  float fStack_4c0;
  float local_4bc [256];
  int local_bc [3];
  long local_b0;
  
  uVar28 = (undefined4)((ulong)in_stack_fffffffffffffa90 >> 0x20);
  lVar7 = tpidr_el0;
  local_b0 = *(long *)(lVar7 + 0x28);
  if (((DAT_03210cc0 & 1) == 0) && (iVar13 = __cxa_guard_acquire(&DAT_03210cc0), iVar13 != 0)) {
    DAT_03210cb0 = NEON_fmov(0x3fc00000,4);
    DAT_03210cb8 = 0x3fc00000;
    __cxa_guard_release(&DAT_03210cc0);
  }
  lVar1 = param_1 + 0x60;
  local_50c = 0;
  local_508 = 0;
  local_510 = -1;
  FUN_00ef553c(param_1,param_2,&DAT_03210cb0,lVar1,&local_508,0);
  FUN_00ef553c(param_1,param_3,&DAT_03210cb0,lVar1,&local_50c,0);
  FUN_00ef5e24(param_1,local_508,local_50c,param_2,param_3,lVar1,local_4bc,&local_510,
               CONCAT44(uVar28,0x100));
  if (local_510 < 1) {
    bVar12 = false;
  }
  else {
    FUN_00ef539c(param_1,local_508,param_2,&local_520);
    FUN_00ef539c(param_1,(&fStack_4c0)[local_510],param_3,&local_530);
    *(float *)(param_1 + 0x16c) = local_518;
    uVar17 = 1;
    *(undefined8 *)(param_1 + 0x164) = local_520;
    *(undefined4 *)(param_1 + 0x764) = 1;
    local_538 = local_518;
    local_540 = local_520;
    if (local_510 != 0) {
      uVar17 = 1;
      while (uVar17 < 0x80) {
        local_504 = 0.0;
        FUN_00ef7188(param_1,&local_540,&local_530,local_4bc,local_510,local_4fc,local_500,local_bc,
                     &local_504,3,0);
        if ((int)local_504 < 1) {
LAB_00ef0edc:
          uVar17 = *(uint *)(param_1 + 0x764);
          break;
        }
        fVar9 = local_540._4_4_;
        lVar15 = 0;
        uVar17 = 2;
        while( true ) {
          uVar14 = (ulong)(uVar17 - 2);
          fVar26 = local_4fc[uVar14];
          if ((((local_500[lVar15] >> 2 & 1) != 0) ||
              (0.0001 <= ((float)local_540 - fVar26) * ((float)local_540 - fVar26) +
                         (local_538 - local_4fc[uVar14 + 2]) * (local_538 - local_4fc[uVar14 + 2])))
             || (1000.0 <= ABS(local_540._4_4_ - local_4fc[uVar14 + 1]))) break;
          lVar15 = lVar15 + 1;
          uVar17 = uVar17 + 3;
          if ((int)local_504 <= lVar15) goto LAB_00ef0edc;
        }
        fVar23 = local_4fc[uVar17];
        bVar4 = local_500[lVar15];
        fVar25 = fVar26 - (float)local_540;
        fVar24 = local_540._4_4_ - local_540._4_4_;
        fVar27 = fVar23 - local_538;
        __x = fVar25 * fVar25 + fVar24 * fVar24 + fVar27 * fVar27;
        if ((bVar4 >> 1 & 1) == 0) {
LAB_00ef0c90:
          fVar22 = SQRT(__x);
          if (NAN(fVar22)) {
            fVar22 = sqrtf(__x);
          }
          fVar22 = 1.0 / fVar22;
        }
        else {
          fVar21 = SQRT(__x);
          if (NAN(fVar21)) {
            fVar21 = sqrtf(__x);
          }
          fVar22 = 1.0;
          if (1.0 <= fVar21) goto LAB_00ef0c90;
        }
        local_550 = (float)local_540 + fVar25 * fVar22;
        fStack_54c = fVar24 * fVar22 + local_540._4_4_;
        local_548 = fVar27 * fVar22 + local_538;
        local_bc[0] = 0;
        FUN_00ef79e4(param_1,local_4bc[0],&local_540,&local_550,lVar1,&local_540,local_4fc,local_bc,
                     0x10);
        iVar18 = -1;
        iVar13 = -1;
        iVar20 = local_bc[0] + -1;
        lVar15 = (long)local_510;
        do {
          do {
            lVar6 = lVar15 + -1;
            if (lVar15 < 1) goto LAB_00ef0d7c;
            lVar15 = lVar6;
          } while (local_bc[0] < 1);
          bVar12 = false;
          iVar5 = iVar20;
          iVar19 = iVar13;
          lVar8 = (long)local_bc[0];
          do {
            bVar11 = *(float *)((long)local_4bc + lVar6 * 4) == local_4fc[lVar8 + -1];
            iVar13 = (int)lVar6;
            iVar10 = iVar5;
            if (!bVar11) {
              iVar13 = iVar19;
              iVar10 = iVar18;
            }
            iVar18 = iVar10;
            bVar12 = (bool)(bVar12 | bVar11);
            iVar5 = iVar5 + -1;
            bVar11 = 1 < lVar8;
            iVar19 = iVar13;
            lVar8 = lVar8 + -1;
          } while (bVar11);
        } while (!bVar12);
LAB_00ef0d7c:
        if ((iVar18 != -1) && (iVar13 != -1)) {
          uVar17 = local_bc[0] - iVar18;
          iVar18 = local_510;
          if (iVar13 + 1 < local_510) {
            iVar18 = iVar13 + 1;
          }
          uVar2 = local_510 - iVar18 & (local_510 - iVar18 >> 0x1f ^ 0xffffffffU);
          uVar3 = 0x100 - uVar17;
          if ((int)(uVar2 + uVar17) < 0x101) {
            uVar3 = uVar2;
          }
          if (uVar3 != 0) {
            memmove((void *)((long)local_4bc + (long)(int)uVar17 * 4),
                    (void *)((long)local_4bc + (long)iVar18 * 4),
                    -(ulong)(uVar3 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar3 << 2);
          }
          if (0 < (int)uVar17) {
            uVar14 = (ulong)uVar17;
            pfVar16 = local_4bc;
            do {
              lVar15 = (long)iVar20;
              uVar14 = uVar14 - 1;
              iVar20 = iVar20 + -1;
              *pfVar16 = local_4fc[lVar15];
              pfVar16 = pfVar16 + 1;
            } while (uVar14 != 0);
          }
          local_510 = uVar3 + uVar17;
        }
        local_504 = 0.0;
        FUN_00ef44a4(param_1,local_4bc[0],&local_540,&local_504);
        local_540 = CONCAT44(local_504,(float)local_540);
        if ((((bVar4 >> 1 & 1) == 0) ||
            (fVar23 = fVar23 - local_538,
            0.0001 <= (fVar26 - (float)local_540) * (fVar26 - (float)local_540) + fVar23 * fVar23))
           || (1.0 <= ABS(fVar9 - local_504))) {
          lVar15 = param_1 + (ulong)*(uint *)(param_1 + 0x764) * 0xc;
          *(float *)(lVar15 + 0x16c) = local_538;
          *(undefined8 *)(lVar15 + 0x164) = local_540;
          bVar12 = true;
        }
        else {
          bVar12 = false;
          lVar15 = param_1 + (ulong)*(uint *)(param_1 + 0x764) * 0xc;
          *(undefined4 *)(lVar15 + 0x16c) = local_528;
          *(undefined8 *)(lVar15 + 0x164) = local_530;
        }
        uVar17 = *(int *)(param_1 + 0x764) + 1;
        *(uint *)(param_1 + 0x764) = uVar17;
        if ((!bVar12) || (local_510 == 0)) break;
      }
    }
    bVar12 = 1 < uVar17;
    *(float *)(param_1 + 0x770) = local_518;
    *(undefined4 *)(param_1 + 0x774) = 0;
    *(undefined8 *)(param_1 + 0x768) = local_520;
  }
  if (*(long *)(lVar7 + 0x28) == local_b0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar12);
}




undefined8 FUN_00ef0f78(float param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  float *pfVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  uVar1 = 0;
  if (1 < *(uint *)(param_2 + 0x764)) {
    lVar2 = param_2 + (long)*(int *)(param_2 + 0x774) * 0xc;
    fVar5 = *(float *)(lVar2 + 0x164) - *(float *)(param_2 + 0x768);
    fVar6 = *(float *)(lVar2 + 0x168) - *(float *)(param_2 + 0x76c);
    fVar8 = *(float *)(lVar2 + 0x16c) - *(float *)(param_2 + 0x770);
    fVar6 = fVar5 * fVar5 + fVar6 * fVar6 + fVar8 * fVar8;
    fVar5 = SQRT(fVar6);
    if (NAN(fVar5)) {
      fVar5 = sqrtf(fVar6);
    }
    iVar4 = *(int *)(param_2 + 0x774);
    fVar5 = fVar5 + param_1;
    while( true ) {
      lVar2 = param_2 + (long)iVar4 * 0xc;
      fVar6 = *(float *)(lVar2 + 0x164) - *(float *)(lVar2 + 0x170);
      fVar8 = (float)*(undefined8 *)(lVar2 + 0x168) - (float)*(undefined8 *)(lVar2 + 0x174);
      fVar7 = (float)((ulong)*(undefined8 *)(lVar2 + 0x168) >> 0x20) -
              (float)((ulong)*(undefined8 *)(lVar2 + 0x174) >> 0x20);
      fVar8 = fVar6 * fVar6 + fVar8 * fVar8 + fVar7 * fVar7;
      fVar6 = SQRT(fVar8);
      if (NAN(fVar6)) {
        fVar6 = sqrtf(fVar8);
      }
      if (fVar5 < fVar6) {
        pfVar3 = (float *)(param_2 + 0x164 + (long)iVar4 * 0xc + 8);
        uVar1 = *(undefined8 *)(lVar2 + 0x164);
        fVar7 = (float)*(undefined8 *)(lVar2 + 0x170) - (float)uVar1;
        fVar9 = (float)((ulong)*(undefined8 *)(lVar2 + 0x170) >> 0x20) -
                (float)((ulong)uVar1 >> 0x20);
        fVar10 = *(float *)(param_2 + 0x164 + ((long)iVar4 + 1) * 0xc + 8) - *pfVar3;
        fVar8 = fVar7 * fVar7 + fVar9 * fVar9 + fVar10 * fVar10;
        fVar6 = SQRT(fVar8);
        if (NAN(fVar6)) {
          fVar6 = sqrtf(fVar8);
        }
        uVar1 = *(undefined8 *)(lVar2 + 0x164);
        fVar8 = *pfVar3;
        *(ulong *)(param_2 + 0x768) =
             CONCAT44((float)((ulong)uVar1 >> 0x20) + (fVar9 / fVar6) * fVar5,
                      (float)uVar1 + (fVar7 / fVar6) * fVar5);
        *(float *)(param_2 + 0x770) = fVar5 * (fVar10 / fVar6) + fVar8;
        goto LAB_00ef1154;
      }
      if (*(int *)(param_2 + 0x774) == *(int *)(param_2 + 0x764) + -2) break;
      iVar4 = *(int *)(param_2 + 0x774) + 1;
      fVar5 = fVar5 - fVar6;
      *(int *)(param_2 + 0x774) = iVar4;
    }
    lVar2 = param_2 + (ulong)(*(int *)(param_2 + 0x764) - 1) * 0xc;
    *(undefined4 *)(param_2 + 0x770) = *(undefined4 *)(lVar2 + 0x16c);
    *(undefined8 *)(param_2 + 0x768) = *(undefined8 *)(lVar2 + 0x164);
LAB_00ef1154:
    uVar1 = 1;
  }
  return uVar1;
}

