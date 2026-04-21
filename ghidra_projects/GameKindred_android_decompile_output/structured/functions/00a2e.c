// functions/00a2e — 19 functions
#include "libGameKindred.h"




void thunk_FUN_00a2e7a4(long param_1)

{
  long lVar1;
  
  FUN_00b27e8c(param_1 + 200);
  param_1 = param_1 + 0x420;
  lVar1 = 3;
  do {
    FUN_00a24b9c(param_1,0);
    lVar1 = lVar1 + -1;
    param_1 = param_1 + 0x1cf8;
  } while (lVar1 != 0);
  return;
}




void FUN_00a2e1c8(long param_1,long *param_2,undefined4 param_3,undefined8 param_4,int param_5,
                 uint param_6,uint param_7,long param_8)

{
  long lVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  if (param_5 != -1) {
    local_70 = 0x3f0000003f000000;
    (**(code **)(*param_2 + 0x28))(param_2,&local_70);
    uVar4 = FUN_00d9eb64(param_4);
    uVar2 = FUN_00d53954(uVar4,param_5);
    FUN_00a23dd8(param_2,param_3,param_4,param_5,uVar2,param_6 & 1,param_7 & 1);
    *(uint *)((long)param_2 + 0x84) = *(uint *)((long)param_2 + 0x84) & 0xfffffffb;
    if (param_8 != 0) {
      uVar2 = FUN_00e6a474(param_8);
      uVar3 = FUN_0091ed5c(param_8,uVar2,0x1234);
      *(uint *)((long)param_2 + 0x84) =
           *(uint *)((long)param_2 + 0x84) & 0x80000000 |
           *(uint *)((long)param_2 + 0x84) & 0x7fff | (uVar3 & 0xffff) << 0xf;
    }
    FUN_00f023ec(param_1 + 0x368,param_2,1);
  }
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a2e2ec(long param_1)

{
  float *pfVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  uVar2 = FUN_0092e69c();
  *(uint *)(param_1 + 0x8404) =
       *(uint *)(param_1 + 0x8404) & 0xfffffff8 | *(uint *)(param_1 + 0x8404) & 3 | (uVar2 & 1) << 2
  ;
  FUN_00a2e448(param_1);
  plVar3 = *(long **)(param_1 + 0xb8);
  if (plVar3 == (long *)0x0) {
    return;
  }
  if (*(int *)(param_1 + 0xc0) != (int)plVar3[1]) {
    *(undefined8 *)(param_1 + 0xb8) = 0;
    *(undefined4 *)(param_1 + 0xc0) = DAT_03214ce8;
    return;
  }
  lVar4 = (**(code **)(*plVar3 + 0x10))();
  if (lVar4 == 0) {
    return;
  }
  lVar4 = *(long *)(lVar4 + 0x40);
  fVar5 = (*(float *)(lVar4 + 0x23c) + 1.0) *
          (*(float *)(lVar4 + 0xd4) + *(float *)(lVar4 + 0x188) * (*(float *)(lVar4 + 0x2f0) + 1.0))
  ;
  if (DAT_03131edc <= fVar5) {
    fVar5 = DAT_03131edc;
  }
  pfVar1 = (float *)(param_1 + 0x8568);
  fVar6 = DAT_03131e1c;
  if (DAT_03131e1c <= fVar5) {
    fVar6 = fVar5;
  }
  fVar5 = (float)NEON_fminnm(*(float *)(lVar4 + 0x328) / fVar6,0x3f800000);
  if (fVar5 <= 0.0) {
    fVar5 = 0.0;
  }
  if (fVar5 <= *pfVar1) {
    fVar6 = 0.0;
    if (*pfVar1 <= fVar5) goto LAB_00a2e434;
  }
  else {
    fVar6 = (float)FUN_01988c78();
    fVar7 = fVar5 - *pfVar1;
    fVar8 = (float)NEON_fminnm(fVar7 * 10.0,0x3f800000);
    if (fVar8 <= 0.1) {
      fVar8 = 0.1;
    }
    fVar8 = fVar6 * 0.4 * fVar8;
    fVar6 = *pfVar1 + fVar8;
    if (fVar7 <= fVar8) {
      fVar6 = fVar5;
    }
  }
  *pfVar1 = fVar6;
LAB_00a2e434:
  FUN_00a2e5a0(param_1);
  return;
}




void FUN_00a2e448(long param_1)

{
  float *pfVar1;
  long lVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  
  pfVar1 = (float *)(param_1 + 0x856c);
  if (*pfVar1 <= 0.0) {
    lVar2 = (**(code **)(**(long **)(param_1 + 0xb8) + 0x10))();
    lVar2 = *(long *)(lVar2 + 0x40);
    fVar4 = (*(float *)(lVar2 + 0x214) + 1.0) *
            (*(float *)(lVar2 + 0xac) +
            *(float *)(lVar2 + 0x160) * (*(float *)(lVar2 + 0x2c8) + 1.0));
    if (DAT_03131eb4 <= fVar4) {
      fVar4 = DAT_03131eb4;
    }
    fVar5 = DAT_03131df4;
    if (DAT_03131df4 <= fVar4) {
      fVar5 = fVar4;
    }
    if ((uint)(int)fVar5 < 2) {
      fVar4 = 0.2;
      if (((int)fVar5 == 0) && ((*(byte *)(param_1 + 0x8571) & 1) != 0)) {
        FUN_00a2ead8(param_1,0);
        *(ushort *)(param_1 + 0x8570) = *(ushort *)(param_1 + 0x8570) & 0xfeff;
      }
    }
    else {
      fVar4 = 0.2;
      if ((*(byte *)(param_1 + 0x8571) & 1) == 0) {
        uVar3 = FUN_00e6ce7c("HUD_NOTICE_UNSPENT_ABILITY_POINTS",0);
        FUN_00f0d75c(param_1 + 0x8438,uVar3);
        FUN_00a2ead8(param_1,1);
        *(ushort *)(param_1 + 0x8570) = *(ushort *)(param_1 + 0x8570) | 0x100;
      }
    }
  }
  else {
    fVar4 = (float)FUN_01988c78();
    fVar4 = *pfVar1 - fVar4;
  }
  *pfVar1 = fVar4;
  return;
}




void FUN_00a2e5a0(long param_1)

{
  long lVar1;
  float *pfVar2;
  long lVar3;
  long lVar4;
  float fVar5;
  undefined4 uVar6;
  float fVar7;
  undefined4 local_50;
  float fStack_4c;
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  lVar1 = param_1 + 0x8000;
  fVar5 = (float)FUN_00f13e54(param_1 + 0x7f48);
  fVar7 = 0.9;
  FUN_00f13e54(param_1 + 0x7f48);
  fVar7 = fVar7 * 0.5;
  FUN_00f13f08(fVar5 * 0.9,lVar1);
  FUN_00f13e54(lVar1);
  pfVar2 = (float *)(param_1 + 0x8040);
  fVar5 = -fVar7;
  if ((*pfVar2 != 0.0) || (fVar7 = *(float *)(param_1 + 0x8044), fVar7 != fVar5)) {
    *pfVar2 = 0.0;
    *(float *)(param_1 + 0x8044) = fVar5;
    FUN_0091ada4(lVar1);
  }
  uVar6 = FUN_00f13e54(lVar1);
  FUN_00f13e54(lVar1);
  local_50 = uVar6;
  fStack_4c = fVar7;
  FUN_00f13f18(param_1 + 0x80b8,&local_50);
  lVar3 = param_1 + 0x81a8;
  if ((*(float *)(param_1 + 0x81f8) != 0.0) || (*(float *)(param_1 + 0x81fc) != 1.0)) {
    *(undefined8 *)(param_1 + 0x81f8) = 0x3f80000000000000;
    FUN_0091ada4(lVar3);
  }
  fVar7 = *pfVar2;
  fVar5 = (float)FUN_00f13e54(lVar1);
  fVar7 = fVar7 + fVar5 * -0.5;
  if ((*(float *)(param_1 + 0x81e8) != fVar7) || (*(float *)(param_1 + 0x81ec) != 0.0)) {
    *(float *)(param_1 + 0x81e8) = fVar7;
    *(float *)(param_1 + 0x81ec) = 0.0;
    FUN_0091ada4(lVar3);
  }
  fVar7 = *(float *)(param_1 + 0x8568);
  fVar5 = (float)FUN_00f13e54(lVar1);
  FUN_00f13e54(lVar1);
  FUN_00f13f08(fVar7 * fVar5,lVar3);
  if (*(long *)(lVar4 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a2e764(long param_1,uint param_2)

{
  *(uint *)(param_1 + 0x234) =
       *(uint *)(param_1 + 0x234) & 0xfffffff0 | *(uint *)(param_1 + 0x234) & 7 | (param_2 & 1) << 3
  ;
  return;
}




void FUN_00a2e778(long param_1,uint param_2,undefined8 param_3,uint param_4)

{
  FUN_00b89d24(param_1 + 0x1b0,param_2 & 1,param_3,param_4 & 1);
  return;
}




void FUN_00a2e788(long param_1,ushort param_2)

{
  *(ushort *)(param_1 + 0x8570) = *(ushort *)(param_1 + 0x8570) & 0xf7ff | (param_2 & 1) << 0xb;
  return;
}




void FUN_00a2e7a4(long param_1)

{
  long lVar1;
  
  FUN_00b27e8c(param_1 + 200);
  param_1 = param_1 + 0x420;
  lVar1 = 3;
  do {
    FUN_00a24b9c(param_1,0);
    lVar1 = lVar1 + -1;
    param_1 = param_1 + 0x1cf8;
  } while (lVar1 != 0);
  return;
}




void FUN_00a2e7f4(long param_1,uint param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x420;
  lVar2 = 3;
  do {
    FUN_00a24f9c(lVar1,param_2 & 1);
    lVar2 = lVar2 + -1;
    lVar1 = lVar1 + 0x1cf8;
  } while (lVar2 != 0);
  if (*(long *)(param_1 + 0x8370) != 0) {
    FUN_00a30c74(*(long *)(param_1 + 0x8370),param_2 & 1);
  }
  if (*(long *)(param_1 + 0x8378) != 0) {
    FUN_00a30c74(*(long *)(param_1 + 0x8378),param_2 & 1);
    return;
  }
  return;
}




void FUN_00a2e880(long param_1,undefined4 param_2)

{
  long lVar1;
  
  param_1 = param_1 + 0x420;
  lVar1 = 3;
  do {
    FUN_00a274bc(param_1,param_2);
    lVar1 = lVar1 + -1;
    param_1 = param_1 + 0x1cf8;
  } while (lVar1 != 0);
  return;
}




void FUN_00a2e8c8(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  
  param_2 = param_2 + 0x420;
  lVar1 = 3;
  do {
    FUN_00a27594(param_1,param_2,param_3);
    lVar1 = lVar1 + -1;
    param_2 = param_2 + 0x1cf8;
  } while (lVar1 != 0);
  return;
}




void FUN_00a2e920(long param_1,undefined8 param_2)

{
  long lVar1;
  
  param_1 = param_1 + 0x420;
  lVar1 = 3;
  do {
    FUN_00a27678(param_1,param_2);
    lVar1 = lVar1 + -1;
    param_1 = param_1 + 0x1cf8;
  } while (lVar1 != 0);
  return;
}




void FUN_00a2e968(long param_1,ulong param_2,undefined4 param_3)

{
  FUN_00a274d4(param_1 + (param_2 & 0xffffffff) * 0x1cf8 + 0x420,param_3);
  return;
}




void FUN_00a2e97c(long param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  ulong uVar9;
  
  lVar6 = (**(code **)(**(long **)(param_1 + 0xb8) + 0x10))();
  lVar6 = *(long *)(lVar6 + 0x18);
  while ((lVar6 != 0 && (*(int *)(*(long *)(lVar6 + 8) + 0xa4) != DAT_02e3ef78))) {
    lVar6 = *(long *)(lVar6 + 0x20);
  }
  iVar2 = FUN_00d5401c(lVar6,param_2);
  uVar3 = FUN_00d5401c(lVar6,param_3);
  uVar9 = 0;
  lVar7 = param_1 + 0x420;
  uVar8 = 3;
  do {
    iVar4 = FUN_00a25768(lVar7);
    uVar1 = (uint)uVar9;
    if (iVar4 != iVar2) {
      uVar1 = uVar8;
    }
    uVar9 = uVar9 + 1;
  } while ((uVar9 < 3) && (lVar7 = lVar7 + 0x1cf8, uVar8 = uVar1, iVar4 != iVar2));
  if (uVar1 < 3) {
    lVar7 = param_1 + (ulong)uVar1 * 0x1cf8 + 0x420;
    FUN_00a24af8(lVar7);
    uVar5 = FUN_00d53954(lVar6,uVar3);
    FUN_00a24160(lVar7,uVar3,uVar5);
    return;
  }
  return;
}




void FUN_00a2ea94(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00e6ce7c(param_2,0);
  FUN_00f0d75c(param_1 + 0x8438,uVar1);
  FUN_00a2ead8(param_1,1);
  return;
}




void FUN_00a2ead8(long param_1,ulong param_2)

{
  uint *puVar1;
  long lVar2;
  uint uVar3;
  ushort uVar4;
  ushort *puVar5;
  ushort *puVar6;
  
  lVar2 = DAT_03210d00;
  if ((param_2 & 1) != 0) {
    puVar1 = (uint *)(param_1 + 0x84bc);
    uVar3 = *puVar1;
    param_1 = param_1 + 0x8438;
    if ((uVar3 & 0x7f80) != 0) {
      *puVar1 = uVar3 & 0xffff807f;
      FUN_0091ada4(param_1);
      uVar3 = *puVar1;
    }
    *puVar1 = uVar3 | 4;
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
    FUN_00efcac4(0x3e4ccccd,puVar5);
    FUN_00efddc4(0x3f800000,puVar5);
    FUN_00f01980(param_1);
    FUN_00f022a0(param_1,puVar5);
    return;
  }
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
  FUN_00efcac4(0x3e4ccccd,puVar5);
  FUN_00efddc4(0,puVar5);
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
    FUN_00efc8e8(puVar6);
    *(undefined ***)puVar6 = &PTR_FUN_02825148;
    *(int *)(lVar2 + 0x20020) = *(int *)(lVar2 + 0x20020) + 1;
  }
  FUN_00f01980(param_1 + 0x8438);
  FUN_00f02308(param_1 + 0x8438,puVar5,puVar6,0);
  *(ushort *)(param_1 + 0x8570) = *(ushort *)(param_1 + 0x8570) & 0xfeff;
  *(undefined4 *)(param_1 + 0x856c) = 0x3f800000;
  return;
}




void FUN_00a2ed7c(long param_1)

{
  uint *puVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  ushort uVar5;
  ushort *puVar6;
  ushort *puVar7;
  ushort *puVar8;
  ushort *puVar9;
  
  puVar1 = (uint *)(param_1 + 0x84bc);
  uVar4 = *puVar1;
  lVar2 = param_1 + 0x8438;
  if ((uVar4 & 0x7f80) != 0) {
    *puVar1 = uVar4 & 0xffff807f;
    FUN_0091ada4(lVar2);
    uVar4 = *puVar1;
  }
  *puVar1 = uVar4 | 4;
  lVar3 = DAT_03210d00;
  uVar5 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar5 == 0xffff) {
    puVar6 = (ushort *)0x0;
  }
  else {
    puVar6 = (ushort *)(DAT_03210d00 + (ulong)uVar5 * 0x40 + 0x10);
    if (uVar5 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar5 = 0xffff;
    }
    else {
      uVar5 = *puVar6;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar5;
    *(int *)(lVar3 + 0x20014) = *(int *)(lVar3 + 0x20014) + 1;
    FUN_00efdd74(puVar6);
    *(int *)(lVar3 + 0x20020) = *(int *)(lVar3 + 0x20020) + 1;
  }
  FUN_00efcac4(0x3e4ccccd,puVar6);
  FUN_00efddc4(0x3f800000,puVar6);
  lVar3 = DAT_03210d00;
  uVar5 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar5 == 0xffff) {
    puVar7 = (ushort *)0x0;
  }
  else {
    puVar7 = (ushort *)(DAT_03210d00 + (ulong)uVar5 * 0x40 + 0x10);
    if (uVar5 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar5 = 0xffff;
    }
    else {
      uVar5 = *puVar7;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar5;
    *(int *)(lVar3 + 0x20014) = *(int *)(lVar3 + 0x20014) + 1;
    FUN_00efcad4(puVar7);
    *(undefined ***)puVar7 = &PTR_FUN_027c1a60;
    *(int *)(lVar3 + 0x20020) = *(int *)(lVar3 + 0x20020) + 1;
  }
  FUN_00efcac4(0x40000000,puVar7);
  lVar3 = DAT_03210d00;
  uVar5 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar5 == 0xffff) {
    puVar8 = (ushort *)0x0;
  }
  else {
    puVar8 = (ushort *)(DAT_03210d00 + (ulong)uVar5 * 0x40 + 0x10);
    if (uVar5 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar5 = 0xffff;
    }
    else {
      uVar5 = *puVar8;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar5;
    *(int *)(lVar3 + 0x20014) = *(int *)(lVar3 + 0x20014) + 1;
    FUN_00efdd74(puVar8);
    *(int *)(lVar3 + 0x20020) = *(int *)(lVar3 + 0x20020) + 1;
  }
  FUN_00efcac4(0x3f99999a,puVar8);
  FUN_00efddc4(0,puVar8);
  lVar3 = DAT_03210d00;
  uVar5 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar5 == 0xffff) {
    puVar9 = (ushort *)0x0;
  }
  else {
    puVar9 = (ushort *)(DAT_03210d00 + (ulong)uVar5 * 0x40 + 0x10);
    if (uVar5 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar5 = 0xffff;
    }
    else {
      uVar5 = *puVar9;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar5;
    *(int *)(lVar3 + 0x20014) = *(int *)(lVar3 + 0x20014) + 1;
    FUN_00efc8e8(puVar9);
    *(undefined ***)puVar9 = &PTR_FUN_02825148;
    *(int *)(lVar3 + 0x20020) = *(int *)(lVar3 + 0x20020) + 1;
  }
  FUN_00efc930(puVar8,puVar9);
  FUN_00f01980(lVar2);
  FUN_00f02308(lVar2,puVar6,puVar7,puVar8,puVar9,0);
  *(ushort *)(param_1 + 0x8570) = *(ushort *)(param_1 + 0x8570) & 0xfeff;
  *(undefined4 *)(param_1 + 0x856c) = 0x40900000;
  return;
}




void thunk_FUN_00a2e7a4(long param_1)

{
  long lVar1;
  
  FUN_00b27e8c(param_1 + 200);
  param_1 = param_1 + 0x420;
  lVar1 = 3;
  do {
    FUN_00a24b9c(param_1,0);
    lVar1 = lVar1 + -1;
    param_1 = param_1 + 0x1cf8;
  } while (lVar1 != 0);
  return;
}

