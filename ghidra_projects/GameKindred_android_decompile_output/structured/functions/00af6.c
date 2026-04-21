// functions/00af6 — 48 functions
#include "libGameKindred.h"




void FUN_00af603c(long param_1,undefined8 param_2)

{
  FUN_00f0e670(param_1 + 0x1a0,param_2,2);
  return;
}




void FUN_00af6048(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027da1e0;
  FUN_00f13d08(param_1 + 0x121);
  FUN_00f01868(param_1 + 0x110);
  FUN_00ed00e0(param_1 + 0x69);
  FUN_00f13d08(param_1 + 0x52);
  param_1[0x34] = &PTR_FUN_028266f0;
  param_1[0x4b] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x4e);
  FUN_00f13d08(param_1 + 0x34);
  FUN_00f13d08(param_1);
  return;
}




void FUN_00af60c4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027da1e0;
  FUN_00f13d08(param_1 + 0x121);
  FUN_00f01868(param_1 + 0x110);
  FUN_00ed00e0(param_1 + 0x69);
  FUN_00f13d08(param_1 + 0x52);
  param_1[0x34] = &PTR_FUN_028266f0;
  param_1[0x4b] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x4e);
  FUN_00f13d08(param_1 + 0x34);
  FUN_00f13d08(param_1);
  operator_delete(param_1);
  return;
}




void FUN_00af6148(void)

{
  return;
}




void FUN_00af614c(long param_1,byte param_2)

{
  *(byte *)(param_1 + 0x9d8) = param_2 & 1;
  return;
}




void FUN_00af6158(long *param_1,byte param_2)

{
  FUN_00ed8798();
  *param_1 = (long)&PTR_FUN_027da358;
  FUN_00f017e8(param_1 + 0x17);
  param_1[0x28] = 0;
  param_1[0x17] = (long)&PTR_FUN_027c1f80;
  *(byte *)((long)param_1 + 0x14c) =
       *(byte *)((long)param_1 + 0x14c) & 0xf8 | (param_2 & 1) << 1 | 4;
  *(undefined4 *)(param_1 + 0x29) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2a) = 0;
                    /* WARNING: Could not recover jumptable at 0x00af61f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x17,1);
  return;
}




void FUN_00af61f4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027da358;
  FUN_00af6234();
  FUN_00f01868(param_1 + 0x17);
  FUN_00f13d08(param_1);
  return;
}




void FUN_00af6234(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0xe0);
  while (lVar1 != 0) {
    lVar2 = *(long *)(lVar1 + 0x30);
    FUN_00f01a4c(lVar1,1);
    FUN_00af666c(&DAT_03134380,lVar1);
    lVar1 = lVar2;
  }
  *(byte *)(param_1 + 0x14c) = *(byte *)(param_1 + 0x14c) | 4;
  return;
}




void FUN_00af6298(void *param_1)

{
  FUN_00af61f4();
  operator_delete(param_1);
  return;
}




void FUN_00af62bc(undefined4 param_1,long param_2,undefined8 param_3,undefined4 *param_4,
                 byte param_5)

{
  undefined4 uVar1;
  
  *(undefined8 *)(param_2 + 0x140) = param_3;
  uVar1 = *param_4;
  *(undefined4 *)(param_2 + 0x150) = param_1;
  *(undefined4 *)(param_2 + 0x148) = uVar1;
  *(byte *)(param_2 + 0x14c) = *(byte *)(param_2 + 0x14c) & 0xfe | param_5 & 1;
  return;
}




void FUN_00af62dc(long param_1,byte param_2)

{
  *(byte *)(param_1 + 0x14c) = *(byte *)(param_1 + 0x14c) & 0xfe | param_2 & 1;
  return;
}




void FUN_00af62ec(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0x150) = param_1;
  return;
}




void FUN_00af62f4(long param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  bool bVar2;
  long *plVar3;
  uint uVar4;
  code *local_78;
  long lStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  long *local_58;
  undefined4 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (((*(byte *)(param_1 + 0x14c) >> 1 & 1) == 0) ||
     (plVar3 = (long *)FUN_00af6478(param_1,param_2), plVar3 == (long *)0x0)) {
    plVar3 = (long *)FUN_00af64bc(&DAT_03134380);
    if (plVar3 == (long *)0x0) goto LAB_00af644c;
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  FUN_00f0d378(plVar3,*(undefined8 *)(param_1 + 0x140));
  FUN_00f0d7fc(plVar3,param_1 + 0x148);
  (**(code **)(*plVar3 + 0x138))(plVar3,param_2);
  uVar4 = 0;
  if ((*(byte *)(param_1 + 0x14c) & 1) != 0) {
    uVar4 = 0x3f800000;
  }
  local_78 = (code *)(ulong)uVar4;
  (**(code **)(*plVar3 + 0x28))(plVar3,&local_78);
  local_50 = DAT_03210f60;
  plVar3[0x29] = (long)param_3;
  *(uint *)((long)plVar3 + 0x84) = *(uint *)((long)plVar3 + 0x84) | 0x10;
  local_78 = FUN_00af6568;
  local_68 = 0;
  uStack_60 = 0;
  lStack_70 = param_1;
  local_58 = plVar3;
  FUN_009693a0(plVar3 + 1,&local_78);
  local_78 = FUN_00af6568;
  local_50 = DAT_03210f8c;
  local_68 = 0;
  uStack_60 = 0;
  lStack_70 = param_1;
  local_58 = plVar3;
  FUN_009693a0(plVar3 + 1,&local_78);
  if (bVar2) {
    FUN_00f023ec(param_1 + 0xb8,plVar3,1);
  }
  *(byte *)(param_1 + 0x14c) = *(byte *)(param_1 + 0x14c) | 4;
LAB_00af644c:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




long FUN_00af6478(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0xe0);
  while( true ) {
    if (lVar3 == 0) {
      return 0;
    }
    uVar1 = FUN_00f08be8(lVar3 + 0xd0);
    uVar2 = FUN_00e70b34(uVar1,param_2);
    if ((uVar2 & 1) != 0) break;
    lVar3 = *(long *)(lVar3 + 0x30);
  }
  return lVar3;
}




uint * FUN_00af64bc(long param_1)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  uint *puVar4;
  
  uVar1 = *(uint *)(param_1 + 0x5400);
  if (uVar1 == 0xffffffff) {
    puVar4 = (uint *)0x0;
  }
  else {
    puVar4 = (uint *)(param_1 + (ulong)uVar1 * 0x150);
    if (uVar1 == *(uint *)(param_1 + 0x5404)) {
      uVar2 = 0xffffffff;
    }
    else {
      uVar2 = *puVar4;
    }
    *(uint *)(param_1 + 0x5400) = uVar2;
    FUN_00f0d160(puVar4);
    lVar3 = param_1 + (ulong)uVar1 * 0x150;
    *(undefined ***)puVar4 = &PTR_FUN_027da4a0;
    *(undefined ***)(lVar3 + 0xb8) = &PTR_FUN_027da618;
    *(undefined8 *)(lVar3 + 0x138) = 0;
    *(undefined8 *)(lVar3 + 0x140) = 0;
    *(undefined8 *)(lVar3 + 0x130) = 0;
    *(int *)(param_1 + 0x5408) = *(int *)(param_1 + 0x5408) + 1;
  }
  return puVar4;
}




void FUN_00af6568(undefined8 param_1)

{
  long lVar1;
  long in_x4;
  undefined1 auStack_58 [48];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00ed8868(auStack_58,DAT_03210c64,*(undefined8 *)(in_x4 + 0x148),in_x4);
  FUN_00f04760(param_1,auStack_58,1);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00af65d8(long param_1,undefined8 param_2,uint param_3)

{
  byte bVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  
  if (*(long *)(param_1 + 0xe0) != 0) {
    lVar4 = *(long *)(param_1 + 0xe0);
    do {
      lVar5 = *(long *)(lVar4 + 0x30);
      uVar2 = FUN_00f08be8(lVar4 + 0xd0);
      uVar3 = FUN_00e70b34(uVar2,param_2);
      if ((uVar3 & 1) != 0) {
        FUN_00f01a4c(lVar4,1);
        FUN_00af666c(&DAT_03134380,lVar4);
        bVar1 = *(byte *)(param_1 + 0x14c);
        *(byte *)(param_1 + 0x14c) = bVar1 | 4;
        if (((param_3 ^ 1) & 1) != 0 || (bVar1 & 2) != 0) {
          return;
        }
      }
      lVar4 = lVar5;
    } while (lVar5 != 0);
  }
  return;
}




void FUN_00af666c(long param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  (**(code **)*param_2)(param_2);
  if (*(int *)(param_1 + 0x5400) == -1) {
    iVar2 = (int)((ulong)((long)param_2 - param_1) >> 4) * 0x3cf3cf3d;
    *(int *)(param_1 + 0x5404) = iVar2;
    *(int *)(param_1 + 0x5400) = iVar2;
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x5404);
    iVar2 = (int)((ulong)((long)param_2 - param_1) >> 4) * 0x3cf3cf3d;
    *(int *)(param_1 + 0x5404) = iVar2;
    *(int *)(param_1 + (ulong)uVar1 * 0x150) = iVar2;
  }
  *(int *)(param_1 + 0x5408) = *(int *)(param_1 + 0x5408) + -1;
  return;
}




void FUN_00af6710(long param_1,uint *param_2,ulong param_3)

{
  uint uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  
  if ((param_3 & 1) != 0) {
    for (lVar4 = *(long *)(param_1 + 0xe0); lVar4 != 0; lVar4 = *(long *)(lVar4 + 0x30)) {
      uVar1 = *param_2;
      uVar2 = FUN_00f08be8(lVar4 + 0xd0);
      if (uVar1 != 0) {
        lVar5 = 0;
        uVar6 = 0;
        do {
          uVar3 = FUN_00e70b34(uVar2,*(long *)(param_2 + 2) + lVar5);
          if ((uVar3 & 1) != 0) goto LAB_00af67a0;
          uVar1 = *param_2;
          uVar6 = uVar6 + 1;
          uVar2 = FUN_00f08be8(lVar4 + 0xd0);
          lVar5 = lVar5 + 0x10;
        } while (uVar6 < uVar1);
      }
      FUN_00af65d8(param_1,uVar2,1);
LAB_00af67a0:
    }
    if (*param_2 != 0) {
      lVar4 = 0;
      uVar6 = 0;
      do {
        lVar5 = FUN_00af6478(param_1,*(long *)(param_2 + 2) + lVar4);
        if (lVar5 == 0) {
          FUN_00af62f4(param_1,*(long *)(param_2 + 2) + lVar4,0xffffffff);
        }
        uVar6 = uVar6 + 1;
        lVar4 = lVar4 + 0x10;
      } while (uVar6 < *param_2);
    }
  }
  return;
}




void FUN_00af680c(long param_1)

{
  FUN_00f025e0(param_1 + 0xb8);
  return;
}




void FUN_00af6814(undefined1 param_1 [16],float param_2,long param_3)

{
  byte bVar1;
  long *plVar2;
  float fVar3;
  
  bVar1 = *(byte *)(param_3 + 0x14c);
  if ((bVar1 >> 2 & 1) != 0) {
    plVar2 = *(long **)(param_3 + 0xe0);
    if (plVar2 != (long *)0x0) {
      fVar3 = 0.0;
      do {
        (**(code **)(*plVar2 + 0x48))(plVar2);
        FUN_00af688c(fVar3,plVar2);
        plVar2 = (long *)plVar2[6];
        param_2 = fVar3 + param_2;
        fVar3 = param_2 + *(float *)(param_3 + 0x150);
      } while (plVar2 != (long *)0x0);
      bVar1 = *(byte *)(param_3 + 0x14c);
    }
    *(byte *)(param_3 + 0x14c) = bVar1 & 0xfb;
  }
  return;
}




void FUN_00af688c(float param_1,long param_2)

{
  long lVar1;
  long lVar2;
  ushort uVar3;
  ushort *puVar4;
  undefined4 local_50;
  float local_4c;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_00f01980();
  lVar2 = DAT_03210d00;
  if (1.0 <= ABS(*(float *)(param_2 + 0x44) - param_1)) {
    uVar3 = *(ushort *)(DAT_03210d00 + 0x20010);
    if ((ulong)uVar3 == 0xffff) {
      puVar4 = (ushort *)0x0;
    }
    else {
      puVar4 = (ushort *)(DAT_03210d00 + (ulong)uVar3 * 0x40 + 0x10);
      if (uVar3 == *(ushort *)(DAT_03210d00 + 0x20012)) {
        uVar3 = 0xffff;
      }
      else {
        uVar3 = *puVar4;
      }
      *(ushort *)(DAT_03210d00 + 0x20010) = uVar3;
      *(int *)(lVar2 + 0x20014) = *(int *)(lVar2 + 0x20014) + 1;
      FUN_00efdc08(puVar4);
      *(int *)(lVar2 + 0x20020) = *(int *)(lVar2 + 0x20020) + 1;
    }
    local_50 = 0;
    local_4c = param_1;
    FUN_00efdc50(puVar4,&local_50);
    FUN_00efcac4(0x3dcccccd,puVar4);
    FUN_00efcb24(puVar4,FUN_00a36794);
    FUN_00f022a0(param_2,puVar4);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00af69cc(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined1 auStack_58 [48];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00ed8868(auStack_58,DAT_03210c64,*(undefined8 *)(param_3 + 0x148),param_3);
  FUN_00f04760(param_1,auStack_58,1);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00af6a3c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027da4a0;
  param_1[0x17] = &PTR_FUN_027da618;
  if ((*(byte *)(param_1 + 0x26) & 1) != 0) {
    operator_delete((void *)param_1[0x28]);
  }
  FUN_00f0d3a4(param_1);
  return;
}




void FUN_00af6a84(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027da4a0;
  param_1[0x17] = &PTR_FUN_027da618;
  if ((*(byte *)(param_1 + 0x26) & 1) != 0) {
    operator_delete((void *)param_1[0x28]);
  }
  FUN_00f0d3a4(param_1);
  operator_delete(param_1);
  return;
}




void FUN_00af6ad4(undefined8 *param_1)

{
  param_1[-0x17] = &PTR_FUN_027da4a0;
  *param_1 = &PTR_FUN_027da618;
  if ((*(byte *)(param_1 + 0xf) & 1) != 0) {
    operator_delete((void *)param_1[0x11]);
  }
  FUN_00f0d3a4(param_1 + -0x17);
  return;
}




void FUN_00af6b1c(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1 + -0x17;
  *puVar1 = &PTR_FUN_027da4a0;
  *param_1 = &PTR_FUN_027da618;
  if ((*(byte *)(param_1 + 0xf) & 1) != 0) {
    operator_delete((void *)param_1[0x11]);
  }
  FUN_00f0d3a4(puVar1);
  operator_delete(puVar1);
  return;
}




void FUN_00af6b6c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_00f017e8();
  uVar1 = DAT_03210cf8;
  *(undefined4 *)(param_1 + 0x12) = 0x7000000;
  *param_1 = &PTR_FUN_027da660;
  param_1[0x11] = &PTR_FUN_027da778;
  param_1[0x13] = uVar1;
  FUN_0199fb64(param_1 + 0x14);
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x17] = 0;
  param_1[0x1a] = 0x42c8000042c80000;
  *(undefined2 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0xdc) = 0x3f800000;
  FUN_0199fc70(param_1 + 0x14,0);
  return;
}




void FUN_00af6bfc(long param_1)

{
  FUN_008fce60(param_1 + 0xb8);
  return;
}




long FUN_00af6c04(long param_1)

{
  return param_1 + 0xb8;
}




undefined1 FUN_00af6c0c(long param_1)

{
  return *(undefined1 *)(param_1 + 0xe1);
}




void FUN_00af6c14(void)

{
  uint in_w4;
  
  if ((in_w4 & 1) != 0) {
    FUN_00af6c20();
    return;
  }
  FUN_00af6c8c();
  return;
}




void FUN_00af6c20(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0xa0;
  FUN_0199fccc(lVar1);
  FUN_019a02cc(lVar1,0,0,0);
  FUN_019a02fc(lVar1,1,1,0);
  *(undefined1 *)(param_1 + 0xe1) = 1;
  return;
}




void FUN_00af6c8c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0xa0;
  FUN_0199fccc(lVar1);
  FUN_019a02cc(lVar1,0,0,0);
  FUN_019a02fc(lVar1,1,1,0);
  *(undefined1 *)(param_1 + 0xe1) = 1;
  return;
}




void FUN_00af6cf8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0xa0;
  FUN_0199fccc(lVar1);
  FUN_019a02cc(lVar1,0,0,0);
  FUN_019a02fc(lVar1,1,1,0);
  *(undefined1 *)(param_1 + 0xe1) = 1;
  return;
}




void FUN_00af6d64(undefined4 param_1,undefined4 param_2,long param_3)

{
  *(undefined4 *)(param_3 + 0xd0) = param_1;
  *(undefined4 *)(param_3 + 0xd4) = param_2;
  return;
}




void FUN_00af6d6c(long param_1,undefined4 *param_2)

{
  *(undefined4 *)(param_1 + 0xd8) = *param_2;
  return;
}




void FUN_00af6d78(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0xdc) = param_1;
  return;
}




undefined4 FUN_00af6d80(long param_1)

{
  return *(undefined4 *)(param_1 + 0xd0);
}




void FUN_00af6d88(long param_1,undefined8 param_2)

{
  long lVar1;
  float *pfVar2;
  float fVar3;
  undefined4 uVar4;
  undefined2 local_40;
  undefined1 local_3e;
  undefined1 local_3d;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (((*(uint *)(param_1 + 0xa8) & 0x3fff) != 0) && ((*(uint *)(param_1 + 0xa8) & 0xfffc000) != 0))
  {
    pfVar2 = (float *)FUN_00965ecc(param_1);
    local_40 = *(undefined2 *)(param_1 + 0xd8);
    local_3e = *(undefined1 *)(param_1 + 0xda);
    fVar3 = (float)NEON_fminnm((int)(pfVar2[6] * 255.0),0x437f0000);
    if (fVar3 <= 0.0) {
      fVar3 = 0.0;
    }
    local_3d = (undefined1)(int)fVar3;
    if (*(float *)(param_1 + 0xdc) < 1.0) {
      fVar3 = (float)NEON_fminnm((int)(*(float *)(param_1 + 0xdc) * 255.0),0x437f0000);
      if (fVar3 <= 0.0) {
        fVar3 = 0.0;
      }
      local_3e = (undefined1)(int)fVar3;
      local_40 = CONCAT11(local_3e,local_3e);
    }
    if (*(char *)(param_1 + 0xe0) == '\0') {
      uVar4 = 0x3f800000;
    }
    else {
      uVar4 = 0;
    }
    FUN_00965b68((int)*pfVar2,(int)pfVar2[1],
                 (float)(int)*pfVar2 + *(float *)(param_1 + 0xd0) * pfVar2[4],
                 (float)(int)pfVar2[1] + *(float *)(param_1 + 0xd4) * pfVar2[5],0,0,uVar4,0x3f800000
                 ,param_2,&local_40,0);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00af6ed0(long param_1)

{
  FUN_00af6d88(param_1 + -0x88);
  return;
}




undefined8 FUN_00af6ed8(long param_1,long *param_2)

{
  *param_2 = param_1 + 0xa0;
  return 1;
}




undefined8 FUN_00af6ee8(long param_1,long *param_2)

{
  *param_2 = param_1 + 0x18;
  return 1;
}




void FUN_00af6ef8(long param_1)

{
  if (*(float *)(param_1 + 0xdc) < 1.0) {
    FUN_0199d9a4(5);
    return;
  }
  FUN_00f02a74(param_1 + 0x88);
  return;
}




void FUN_00af6f28(long param_1)

{
  FUN_00af6ef8(param_1 + -0x88);
  return;
}




void FUN_00af6f30(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027da660;
  param_1[0x11] = &PTR_FUN_027da778;
  if ((*(byte *)(param_1 + 0x17) & 1) != 0) {
    operator_delete((void *)param_1[0x19]);
  }
  FUN_0199fb94(param_1 + 0x14);
  FUN_00f01868(param_1);
  return;
}




void FUN_00af6f80(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027da660;
  param_1[0x11] = &PTR_FUN_027da778;
  if ((*(byte *)(param_1 + 0x17) & 1) != 0) {
    operator_delete((void *)param_1[0x19]);
  }
  FUN_0199fb94(param_1 + 0x14);
  FUN_00f01868(param_1);
  operator_delete(param_1);
  return;
}




void FUN_00af6fd8(undefined8 *param_1)

{
  param_1[-0x11] = &PTR_FUN_027da660;
  *param_1 = &PTR_FUN_027da778;
  if ((*(byte *)(param_1 + 6) & 1) != 0) {
    operator_delete((void *)param_1[8]);
  }
  FUN_0199fb94(param_1 + 3);
  FUN_00f01868(param_1 + -0x11);
  return;
}

